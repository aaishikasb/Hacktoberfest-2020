#include<bits/stdc++.h>
using namespace std;


int main(){

    int t;
    cin >> t;
    while(t--){
        long long n = 0;
        cin >> n;
        long long arr[n] = {0}, ans = 0;
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n;i++){
            if(i == n-1)
                break;
            if(arr[i]!=arr[i+1]){
                if(arr[i]>arr[i+1])
                    ans += arr[i] - arr[i + 1] - 1;
                else
                    ans += arr[i + 1] - arr[i] - 1;
            }
        }
        cout << ans << "\n";
    }
}