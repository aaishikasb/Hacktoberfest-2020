#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){ 
        int p = 0, h = 0;
        cin >> h >> p;
        p++;
        if (p>h) {
            cout << "1" << endl;
            continue;
        }
        while(true){ 
            h -= p;
            p /=2;
            if (p>0 && h <= 0) {
                cout << "1" << endl;
                break;
            }
            if(p == 0 && h>=0){ 
                cout << "0" << endl;
                break;
            }
        }
    }
}