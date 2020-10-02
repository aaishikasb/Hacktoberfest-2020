


Problem statement:

In this challenge, the user enters a string and a substring. 
You have to print the number of times that the substring occurs in the given string. 
String traversal will take place from left to right, not from right to left.

def count_substring(string, sub_string):
    alpha=[]
    count=0
    n=len(sub_string)
    for i in string:
        alpha.append(i)
    for i in range(len(alpha)):
        if ''.join(alpha[i:i+n])==sub_string:
            count+=1
    return count