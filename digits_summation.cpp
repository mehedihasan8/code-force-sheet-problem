#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long int a, b;
    
    cin >> a >> b;
    
    long long int first_digit = a % 10;
    long long int second_digit = b % 10;
    
    cout << (first_digit + second_digit);

    return 0;
}
