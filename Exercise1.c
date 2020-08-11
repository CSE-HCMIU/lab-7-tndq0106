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
	  int len = 0;
    char min = strlen(str[0]);
    for (int i = 1; i < n; ++i) {
        min = strlen(str[i]) < min ? strlen(str[i]) : min;
    }

    for (int c = 0; c < min; ++c) {
        for (int s = 0; s < strsSize - 1; ++s) {
            if (str[s][c] == str[s+1][c]) {
                if (s == strSize - 2) {
                    ++len;
                }
            } else {
                goto br;
            }
        }
    }
    br:

    if (len > 0) {
        char* ret = malloc(len * sizeof(int));
        str[0][len] = '\0';
        strcpy(ret, str[0]);
        return ret;
    }

    return "";
}

int main(int argc, char *argv[]) {
	
	char *str[]={"abc","abcd","abe","abdr"};
	ex1(str,4);
			
	return 0;
}
