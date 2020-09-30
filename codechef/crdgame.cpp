#include<bits/stdc++.h>
using namespace std;
#define lli long long int

lli sum_digits(int a){
    lli sum,temp;
    sum = 0;
    temp = a;
    while(temp != 0){
        sum += temp%10;
        temp/=10;
    }

    return sum;
}

int main(){
    int t = 0;
    cin >> t;
    while(t--){
        int r,  chef = 0, morty=0;
        lli a, b;
        cin >> r;
        while(r--){
            cin >> a >> b;
            a = sum_digits(a);
            b = sum_digits(b);
//            cout << a << "\n";
//            cout << b << "\n";
            if(a>b)
                chef++;
            else if(b>a)
                morty++;
            else if(a==b){
                chef++;
                morty++;
            }
        }
//        cout << "Chef:" << chef << "\n";
//        cout << "Morty" << morty << "\n";
        chef>morty ? cout << "0 " << chef:((chef == morty) ?cout << "2 " << morty:cout <<"1 " <<morty);
        cout << "\n";
    }
}