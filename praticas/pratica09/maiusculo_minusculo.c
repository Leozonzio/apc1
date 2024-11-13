#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char string[11], maiusculo[11], minusculo[11];

    scanf("%s", string);

    memset(maiusculo,'\0',11);
    memset(minusculo,'\0',11);

    for(int i = 0; i<strlen(string);i++){
        maiusculo[i] = toupper (string[i]);
        minusculo[i] = tolower (string[i]);
    }
    printf("%s\n%s", maiusculo, minusculo);

    return 0;
}