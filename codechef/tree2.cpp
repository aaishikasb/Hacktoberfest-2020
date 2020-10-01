//A Problem On Sticks
//Codedchef Sept Long Challange 2020

#include<bits/stdc++.h>
using namespace std;

int getCuts(long long arr[], long n){
    map<long long, long> mp;
    for (long i = 0; i < n;i++){
        if(arr[i] != 0)
            mp[arr[i]]++;
    }
    return mp.size() ;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        long long arr[n];
        for (long i = 0; i < n; i++)
            cin >> arr[i];
        long ans = getCuts(arr, n);
        cout << ans << endl;
    }
    return 0;
}