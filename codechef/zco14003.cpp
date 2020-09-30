#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int bdgt[t];
    for (int i = 0; i < t;i++)
        cin >> bdgt[i];
    sort(bdgt, bdgt + t);
    int i = t;
    int maxRev = 0;
    while(i--)
    {   
        maxRev = max(bdgt[i] * (t - i), maxRev);
    }
    cout << maxRev;
    return 0;
}