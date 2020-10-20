#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task
Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
Input Format 
The first line contains a string, s which can be 1000 characters at most.
*/
int main() {

    char s[1000];
    int arr[10]={0,0,0,0,0,0,0,0,0,0};
    scanf("%s",&s);
    int i = 0;
    while(i<1000){
        //printf("%c\n",s[i]);
        if(s[i]=='0') arr[0]+=1;
        else if(s[i]=='1') arr[1]+=1;
        else if(s[i]=='2') arr[2]+=1;
        else if(s[i]=='3') arr[3]+=1;
        else if(s[i]=='4') arr[4]+=1;
        else if(s[i]=='5') arr[5]+=1;
        else if(s[i]=='6') arr[6]+=1;
        else if(s[i]=='7') arr[7]+=1;
        else if(s[i]=='8') arr[8]+=1;
        else if(s[i]=='9') arr[9]+=1;
        if(s[i]=='\0') break;
        i++;
    }
    for(int i = 0;i<10;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
