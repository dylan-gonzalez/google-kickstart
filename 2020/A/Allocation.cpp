#include <iostream>
#include <algorithm>
using namespace std;

int c, n, b, a[100];

void solve() {
    c += 1;
    cin >> n >> b;

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    sort(a, a+n);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (b >= a[i]) {
            b -= a[i];
            ans++;
        }
    }
    
    cout << ans << "\n";
}

int main() {
    int t, i=0;

    cin >> t;
    while (t--) {
	cout << "Case #" << i << ": "
        solve();
    }

    return 0;
}
