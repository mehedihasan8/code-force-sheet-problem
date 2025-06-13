#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;

    while (cin >> a >> b) {
        
        if (a <= 0 || b <= 0) {
            break;  
        }

        int low = min(a, b);
        int high = max(a, b);
        int sum = 0;

        for (int i = low; i <= high; i++) {
            cout << i << " ";
            sum += i;
        }

        cout << "sum =" << sum << endl;
    }

    return 0;
}
