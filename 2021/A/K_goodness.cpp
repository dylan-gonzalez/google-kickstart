#include <iostream>
#include <cmath>
using namespace std;


int score(string s, int k) {
    int x = 0;
    for (int i =0; i < s.size() / 2;i++) {
        if (s[i] != s[s.size() - 1- i])
            x++;
    }


    return abs(x-k);

}

int main() {
    int t,n,k;
    string s;

    cin >> t;

    for (int i = 0; i<t;i++) {
        cin >> n >> k >> s;

        int y = score(s, k);
        cout << "Case #" << i + 1 << ": " << y << "\n";
    }

    return 0;
}