#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    double lhs = b * log(a);
    double rhs = d * log(c);

    if (lhs > rhs) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
