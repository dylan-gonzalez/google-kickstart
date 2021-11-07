#include <iostream>
using namespace std;

int r, c, a[1000];
void solve() {
    cin >> r >> c;

    // int **shape = new int*[r];

    for (int i = 0; i < r ; i++) {
        for (int j = 0; j < c; j++) {
            // cin >> shape[i][j];
            cin >> a[i];
        }
    }

    cout << a[0];
    // delete[] shape;
}

int main () {
    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}