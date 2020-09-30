#include<bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int findXOR(unsigned long long int n) 
{ 
    int mod = n & 3; 
  
    // If n is a multiple of 4 
    if (mod == 0) 
        return n; 
  
    // If n % 4 gives remainder 1 
    else if (mod == 1) 
        return 1; 
  
    // If n % 4 gives remainder 2 
    else if (mod == 2) 
        return n + 1; 
  
    // If n % 4 gives remainder 3 
    else if (mod == 3) 
        return 0; 
} 
  
int find(unsigned long long int l,unsigned long long int r) 
{ 
    return (findXOR(l - 1) ^ findXOR(r)); 
} 

bool isEven(int i){
    return (i == i / 2 * 2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        auto start = high_resolution_clock::now(); 
        unsigned long long int l, r;
        cin >> l >> r;
        if(isEven(find(l, r)))
            cout << "Even"
                 << "\n";
        else
            cout << "Odd"
                 << "\n";
        auto stop = high_resolution_clock::now(); 
        auto duration = duration_cast<microseconds>(stop - start); 
        cout << duration.count() << endl; 
    }
}