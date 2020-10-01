#include <bits/stdc++.h>
using namespace std;
#define MAX 100000 
vector <int> primes; 
  
// utility function for sieve of sieve of Eratosthenes 
void sieve() 
{ 
    bool isComposite[MAX] = {false}; 
    for (int i=2; i*i<=MAX; i++) 
    { 
        if (isComposite[i]==false) 
            for (int j=2; j*i<=MAX; j++) 
                isComposite[i*j] = true; 
    } 
    for (int i=2; i<=MAX; i++) 
        if (isComposite[i]==false) 
            primes.push_back(i); 
} 
long long lcm(long long n) 
{ 
    long long lcm = 1; 
    for (int i=0; i<primes.size() && primes[i]<=n; i++) 
    { 
        int pp = primes[i]; 
        while (pp*primes[i] <= n) 
            pp = pp *primes[i]; 
        lcm *= pp; 
        lcm %= 1000000007; 
    } 
    return lcm; 
} 
int main()
{
    sieve();
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        cout << lcm(n) / n << endl;
    }
    return 0;
}