#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,ht=0;
    vector<pair<int, int> > stream;
        int i, j;
        pair<int, int> temp;
    cin >> t;
    cout << "\n";
    while(t>0){
        cin >> i >> j ;
        temp.first = i;
        temp.second = j;
        
        if(j>ht)
            ht = j;
        stream.push_back(temp);
        t--;
    } 
    int possibles[ht] = {0};
    vector<int> a[ht];
    for (int i = 1; i <= ht;i++){
        for (int j = 1; j < ht;j++){
            if (stream[j].first <= i && stream[j].second >= i)
            {
                a[i].push_back(i);
            }
        }
    }  
    cout << "\n";
    int grp;
    cin >> grp;
    cout << "\n";
    int c = 0;
    while(grp--){
        int n;
        cin >> n;
        set <int, greater <int> > s1;
        for (int i = 0; i < a[n].size();i++){
            s1.insert(a[n][i]);
        }
        cout << s1.size();
    }
    
}