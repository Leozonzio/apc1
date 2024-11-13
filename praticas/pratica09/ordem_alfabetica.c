#include <string.h>
#include <stdio.h>

int main(){

    char palavra1[11];
    char palavra2[11];

    scanf("%s", palavra1);
    scanf("%s", palavra2);

    if (strcmp(palavra1, palavra2)>= 0) {
        printf("%s %s", palavra2,palavra1);
    }else{
        printf("%s %s", palavra1,palavra2);
    }

    return 0;
}