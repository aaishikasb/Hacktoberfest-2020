#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){ 
        int n;
        long  long int k;
        cin >> n >> k;
        long long int a[n];
        for(int i = 0;i<n;i++){ 
            cin >> a[i];
        }
        sort(a, a+n);
        int reachable = 0;
        long long int minmov = 1000000000;
        for(long long int i=0;i<n;i++){ 
            if (a[i] > k) break;
            long long int j=0;
            while(a[i]*j<= k){ 
                if(a[i]*j == k){ 
                    if(j<minmov){ 
                        reachable = a[i];
                        minmov = j;
                        break;
                        cout << minmov <<"\t" << reachable << "\n";
                    }
                }
                j++;
            }
        }
        reachable == 0? cout << -1:cout << reachable;
        cout << endl;
    }
return 0;
}