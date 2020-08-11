/*
1. Given an array of string, find the longest common prefix of all element.
 ________________________________________________
| Input: abc abd abf                             |
| Output: ab                                     |
|________________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void ex1(char *str[],int n){
	 if (n == 0) 
        return ""; 
  
    if (n == 1) 
        return str[0]; 
  
    sort(str, str + n); 
    int len = min(str[0].size(),  
                 str[n - 1].size()); 
  
    string first = str[0], last = str[n - 1]; 
    int i = 0; 
    while (i < len && first[i] == last[i]) 
        i++; 
  
    string pre = first.substr(0, i); 
    return pre; 
}

int main(int argc, char *argv[]) {
	
	char *str[]={"abc","abcd","abe","abdr"};
	ex1(str,4);
			
	return 0;
}
