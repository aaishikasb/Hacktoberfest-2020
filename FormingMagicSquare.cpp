#include <bits/stdc++.h>

using namespace std;

int formingMagicSquare(vector<vector<int>> s) {
    int pMs[][9]={
                    {4,9,2,3,5,7,8,1,6},
                    {4,3,8,9,5,1,2,7,6},
                    {2,9,4,7,5,3,6,1,8},
                    {2,7,6,9,5,1,4,3,8},
                    {8,1,6,3,5,7,4,9,2},
                    {8,3,4,1,5,9,6,7,2},
                    {6,7,2,1,5,9,8,3,4},
                    {6,1,8,7,5,3,2,9,4},
                };
     int min=0;
     for(int i=0;i<8;i++)
     {   
         int tmp=0;
         for(int j=0;j<9;j++)
         {
            tmp+=abs(s[j/3][j%3]-pMs[i][j]);
         }
         if(min==0)
         min=tmp;
         else if(tmp<min)
         min=tmp;
         if(min==0)    
         break;
         
     }            
     return min;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> s(3);
    for (int i = 0; i < 3; i++) {
        s[i].resize(3);

        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = formingMagicSquare(s);

    fout << result << "\n";

    fout.close();

    return 0;
}