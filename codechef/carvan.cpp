#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cars[n];
        for (int i = 0; i < n;i++)
        {
            cin >> cars[i];
        }
        int ts = 1;
        for (int i = 1; i < n;i++)
        {
            if(cars[i-1] >= cars[i])
                ts++;
            else
            {
                cars[i] = cars[i - 1];
            }
            
        }
        cout << ts << endl;
    }
    return 0;
}