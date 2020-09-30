#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int occ[26] = {0};
        int len = s.length();
        int mid = len % 2 == 0 ? len / 2 : len / 2 + 1;
        int start = 0;
        int ends = len - 1;
        while(start != len-mid)
        {
            occ[(int)s[start] - 97]++;
            occ[(int)s[ends] - 97]++;
            start++;
            ends--;
        }
        bool flag = true;
        for (int i = 0; i < 26;i++)
        {
            if(occ[i] % 2 != 0)
                flag = false;
        }
        flag ? cout << "YES" : cout << "NO";
        cout << endl;
    }
    return 0;
}