
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a=0;
        cin >> a;
        int m = 64 - a;
        for (int i = 0; i <8;i++){
            for (int j = 0; j < 8;j++){
                if(i==7 && j==7){
                    cout << "O";
                }
                else{
                    if(m){
                        cout << "x";
                        m--;
                    }

                    else
                        cout << ".";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}