#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        if(n == 1)
        {
            cout << "first" << endl;
            break;
        }
        if(n == 2)
        {
            a[0] > a[1] || a[1] >a[0] ? cout << "first" : cout << "draw" ;
            cout << endl;
            break;
        }
        sort(a, a + n);
        long long fc = a[n-1];
        long long sc = a[n-2] + a[n-3];
        for (int i = n-4; i >= 0;i--)
        {
            if(n%2 == 1)
            {
                if(i%2 == 1)
                    fc += a[i];
                else
                    sc += a[i];
            }
            else
            {
                if(i%2 == 1)
                    sc += a[i];
                else
                    fc += a[i];
            }
        }
        fc > sc ? cout << "first" : fc == sc ? cout << "draw" : cout << "second";
        cout << endl;
    }
    return 0;
}