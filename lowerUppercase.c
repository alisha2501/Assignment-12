//to convert a given string into lowercase if it is in uppercase//
char converter(char str[]);
#include<stdio.h>
int main()
{
    char str[40];
    printf("Enter your string : ");
    scanf("%s", str);
    converter(str);
    return 0;
}

char converter(char str[]){
    int i;
    for(i=0;str[i]!='\0';i++){
        if((int)str[i]>=65 && (int)str[i]<=90){
            str[i]+=32;
        }
        else{
            continue;
        }
    }
    printf("%s", str);
}

