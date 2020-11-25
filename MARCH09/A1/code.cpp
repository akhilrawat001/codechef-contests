#include <iostream>

using
namespace std;

int main() {

    int t, n, m;
    int notes[20];
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> m;
        for (int j = 0; j < n; j++) {
            cin >> notes[j];
        }
    }
}