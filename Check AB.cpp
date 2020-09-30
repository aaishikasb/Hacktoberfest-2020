Check AB
Send Feedback
Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
a. The string begins with an 'a'
b. Each 'a' is followed by nothing or an 'a' or "bb"
c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
Input format :
String S
Output format :
'true' or 'false'
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
abb
Sample Output 1 :
true
Sample Input 2 :
abababa
Sample Output 2 :
false
************************************

  
#include <iostream>
using namespace std;
bool checkAB(char input[]) {
	char* t = input;
    
    if(*input =='\0')
        return 1;
    else if(*input=='a'){
        if(*(t+1)=='a')
            return checkAB(input+1);
        else if(*(t+1)=='b')
            return checkAB(input+1);
        else if(*(t+1)=='\0')
            return 1;
        else
            return 0;
    }
    
    else if(*input=='b'){
        if(*(t+1)=='b' && *(t+2)=='a')
            return checkAB(input+2);
        else if(*(t+1)=='b' && *(t+2)=='\0'){
             if(*(t-1)=='a')
                 return 1;
            else
                return 0;
        }
        else
            return 0;
    }

}




#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
