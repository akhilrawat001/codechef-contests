#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t, n, m;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        int arr[n];
        int sum = 0;
        int val = 0;
        for (int j = 0; j < n; j++) {
            cin >> val;
            if (val > m) {
                val = 0;
            }
            arr[j] = val;
        }
        sort(arr, arr + n);
        sum = accumulate(arr, arr + n, sum);
        while (n >= 0) {
            if (sum <= m) {
                break;
            } else {
                int temp = sum - arr[n];
                if (temp >= m) {
                    cout << sum << " " << arr[n] << " " << temp << "\n";
                    sum = temp;
                }
            }
            n = n - 1;
        }
        if (sum == m) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
}