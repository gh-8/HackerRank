#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/*
Task
Given a sentence s, print each word of the sentence in a new line.
Input Format
The first and only line contains the sentence, s.
Output Format
Print each word of the sentence in a new line.
*/
int main() {
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            printf("\n");
            continue;
        }
        printf("%c",s[i]);
    }
    return 0;
}
