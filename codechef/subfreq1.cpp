#include<bits/stdc++.h>
using namespace std;

void subseq(long long N, long long arr[]) {
    long long temp[N];
    temp[0] = 1;
    long long j = 1;
    while(j<N)
    {
        temp[j] = (arr[j - 1] * 2) % 1000000007;
        j++;
    }
    for (long long k = N - 1; k >= 0;k--)
        cout << temp[k] << " ";
    return;
}

int main(){
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long i = 0;
        while(i<n)
        {
            cin >> a[i];
            i++;
        }
        subseq(n, a);
        cout << endl;
    }
    return 0;
}