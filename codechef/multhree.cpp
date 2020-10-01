#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll k, d0, d1;
        cin >> k >> d0 >> d1;

        ll sum1 = 0;
        sum1 = d0 + d1;
        int d = (d0 + d1) % 10;
        k -= 2;
        while (k > 0 && d != 2)
        {
            // cout<<d;
            k--;
            sum1 = (sum1 + d) % 30;
            d = (d * 2) % 10;
            // d1=d;
            if (d == 0)
                k = 0;
        }
        // cout<<endl;
        // cout<<k<<endl;
        // cout<<sum1<<endl;

        if (k != 0)
        {
            sum1 = (sum1 + (20 * (k / 4)) % 30) % 30;
            k -= 4 * (k / 4);
        }
        d = 2;
        // cout<<k<<endl;
        // cout<<sum1<<endl;
        // d1=6;
        while (k > 0)
        {
            // cout<<d;
            k--;
            sum1 = (sum1 + d) % 30;
            d = (d * 2) % 10;
        }
        // cout<<endl;
        if (sum1 % 3 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}