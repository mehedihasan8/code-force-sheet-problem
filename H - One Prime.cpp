#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int x;
    cin >> x;
    
    bool is_primay = true;
    
    if(x < 2){
        is_primay = false;
    } 
    
    for(int i = 2; i<x; i++){
        if(x % i == 0){
            is_primay = false;
            break;
        }
    }
    
    if(is_primay){
        cout << "YES";
    } else{
        cout << "NO";
    }
    

    return 0;
}
