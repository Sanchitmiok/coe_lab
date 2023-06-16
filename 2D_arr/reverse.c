#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    scanf("%s",str);


    int i=0;
    int j=strlen(str)-1;

    while(i<j){
        char a=str[i];
        str[i]=str[j];
        str[j]=a;
        i++;
        j--;
    }
    for (int i=0;i<strlen(str);i++){
        printf("%c",str[i]);}   
return 0;
}
