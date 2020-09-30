#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, k,a, b;
        cin >> n >> a >> b >> k;
        int solved = 0;
        int m = (a * b) / __gcd(a, b);
        solved = (n / a) + (n / b) - 2 * (n / m);
        solved >= k ? cout << "Win" : cout << "Lose";
        cout << "\n";
    }
}