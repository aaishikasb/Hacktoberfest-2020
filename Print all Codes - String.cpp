Print all Codes - String
Send Feedback
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. Just print them in different lines.
Input format :
A numeric string S
Output Format :
All possible codes in different lines
Constraints :
1 <= Length of String S <= 10
Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw
****************************
#include <string.h>
using namespace std;

void helper(string input,string output)
{
    if(input.empty())
    {
        cout<<output<<endl;
        return;
    }
    string arr[26];
    for(int i=0;i<26;i++)
    {
        arr[i]=(char)(97+i);
    }
    string arr1,arr2;
    int a,b,c;
    if(input.size()>=2)
    {
        a=input[0]-'0';
        b=input[1]-'0';
        c=a*10+b;
    }
    arr1=output+arr[input[0]-'1'];
    helper(input.substr(1),arr1);
    if(input.size()>=2)
        if(c<=26)
        {
            arr2=output+arr[c-1];
            helper(input.substr(2),arr2);
        }
}

void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    helper(input,"");
}



#include <iostream>
#include <string.h>
using namespace std;
int atoi(char a)
{
    int i=a-'0';
    return i;
}
char itoa(int i)
{
    char c='a'+i-1;
    return c;
}
int getCodes(string input, string output[10000]) {
   if(input.size()==0)
   {
       return 1;
   }
    if(input.size()==1)
    {
        output[0]=output[0]+itoa(atoi(input[0]));
        return 1;
    }
    string result1[10000],result2[10000];
    int size2;

    int size1=getCodes(input.substr(1),result1);
    if(input.size()>1)
    {
        if(atoi(input[0])*10+atoi(input[1])>10&&atoi(input[0])*10+atoi(input[1])<27)
        {
            size2=getCodes(input.substr(2),result2);
        }

    }
    for(int i=0;i<size1;i++)
    {
        output[i]=itoa(atoi(input[0]))+result1[i];
    }
    for(int i=0;i<size2;i++)
    {
        output[i+size1]=itoa(atoi(input[0])*10+atoi(input[1]))+result2[i];
    }
    return size1+size2;
}






