#include<bits/stdc++.h>
using namespace std;
const unsigned long long mod = 1000000007;
#define IOS ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void countOcc(vector<long long> a, long long ca[]) {
    long long hc = 0, tc = 1,hele = a[0];
    sort(a.begin(), a.end());
    for (long long i = a.size()-1; i >=0;i--){
        if (a[i] == a[i - 1])
            tc++;
        else
        {
            if(tc>=hc)
            {
                hc = tc;
                hele = a[i];
            }
            tc = 1;
        }
    }
    ca[hele-1] = (ca[hele -1] % mod ) + 1;
}


void  Subsequences(long long arr[], long long n,long long ca[])
{
    unsigned long long opsize = pow(2, n);

    for (long long counter = 1; counter < opsize; counter++)
    {
        vector<long long> a;

        for (long long j = 0; j < n; j++)
        {
            if (counter & (1<<j)) {
                a.push_back(arr[j]);
            }
        }
        if(a.size()!=0)
            countOcc(a,ca);
    }
}

int main() {
    IOS;
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long ca[n+1] = {0};
        long long a[n];
        for (long long i=0;i<n;i++) {
            long long temp;
            cin >> temp;
            a[i] = temp % mod ;
        }
         Subsequences(a, n, ca);
        for (long long i = 0; i < n;i++)
        {
            cout << ca[i]  << " ";
        }
        cout << endl ;
        }
    return 0;
}