#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        while(n%10 == 0)
            n /= 10;
        while(n != 0)
        {
            cout << n % 10;
            n /= 10;
        }
        cout << endl;
    }
    return 0;
}