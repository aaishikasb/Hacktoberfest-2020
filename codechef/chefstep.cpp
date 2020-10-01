#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        for (int i = 0; i < n; i++)
            a[i] % k == 0 ? cout << "1" : cout << "0";

        cout << "\n";
    }
}