#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(auto i=0;i<n;i++)
int findFirstMissing(vector<int> array,int start, int end)
{
    if (start > end)
        return end + 1;

    if (start != array[start])
        return start;

    int mid = (start + end) / 2;

    if (array[mid] == mid)
        return findFirstMissing(array,mid+1, end);

    return findFirstMissing(array, start, mid);
}

void solve(){
    int n,m;
    cin>>n>>m;
    int x,count=0;
    vector<int> vec,mex;
    vec.emplace_back(0);
    fo(i,n){
        cin>>x;
        vec.emplace_back(x);
    }
    sort(vec.begin(),vec.end());
//    if(n<m) {
//        cout << "-1";
//        return;
//    }
    if(m>vec[n]+1){
        cout << "-1";
        return;
    }

    int fst=findFirstMissing(vec,0,n);
//    cout<<fst;

    if(fst==m) {
        cout << n;
        return;
    }
    int rem=0;
    for(int i=1;i<vec.size();i++){
        
    }


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
