/*
 * plus multiply
 * 3mul 2add
 * add mul
 * add add
 * */
#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(auto i=0;i<n;i++)
bool isopr1(vector<int>src,vector<int>des);
bool isopr2(vector<int>src,vector<int>des);
//main function
void solve(){
    int n,b,m;
    cin>>n>>b>>m;
    int prev=-1,x,count=0;
    fo(i,m){
        cin>>x;
        if(x/b!=prev){
            count++;
        }
        prev=x/b;
    }
    cout<<count;
}
int main() {

    int t ;
    cin >> t ;

    while (t--) {
        solve();
        cout<<endl;
    }
    return  0;
}
