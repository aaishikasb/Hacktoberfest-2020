#include<bits/stdc++.h>
using namespace std;
long getScore(long no){
    return no%9 == 0?no/9:no/9+1;
}
int main(){
    long t;
    cin >> t;
    while(t--){ 
        long c, r;
        cin >>c >> r;
        long cs = getScore(c);
        long rs = getScore(r);
        if(cs >= rs){ 
            cout << "1 " << rs << endl;
        }
        else{ 
            cout << "0 " << cs <<endl;
        }

    }
    return 0;
}