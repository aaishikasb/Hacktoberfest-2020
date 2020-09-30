#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N, K, E;
        long long int M;
        cin >> N >> K >> E >> M;
        long long int arr[N][E];
        long long int dp[N] = {0};
        for (int i = 0; i < N;i++){
            for (int j = 0; j < E;j++){
                if(i == N-1 && j == E-1)
                    break;
                cin >> arr[i][j];
                dp[i] += arr[i][j];
            }
        }
        long long int sergrey = dp[N - 1];
        dp[N - 1] = 0;
        int n = sizeof(arr)/sizeof(arr[0]); 
        sort(dp, dp+n);
        long long int mkr = dp[N-K]-sergrey+1;

        if(mkr>M)
            cout << "Impossible" <<"\n";
        else{
            if(mkr>0)
               cout << mkr << "\n";
            else
                cout << 0 << "\n";
        }
        
    }
}