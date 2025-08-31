#include <bits/stdc++.h>
using namespace std;

int main() {
   
   string s;
   cin >> s;
   
    for (char c : s) {
        
        char l = tolower(c);
        
        if(!(l=='a' || l =='e' || l =='i' || l == 'o' || l=='u' || l =='y')){
            cout << '.' << l;
        } 
    }

    return 0;
}
