#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int N,k=1;
        cin >>N;
        int mat[N][N]={0};
        

        for(int i=0;i<N;i++){
            if(i%2 == 0){
                for(int j=0;j<N;j++){
                    mat[i][j] = k++;
                }
            }
            else{
                for(int j=N-1;j>=0;j--){
                    mat[i][j] = k++;
                }
            }
        }

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }
}