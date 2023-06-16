#include<stdio.h>
int main(){
    char str1[100]="Hello";
    char str2[100]="Boss";
    int len1=0,len2=0;
    while(str1[len1]!='\0'){
        len1++;
    }
    while(str2[len2]!='\0'){
        str1[len1]=str2[len2];
        len1++;len2++;

    }
printf("%s",str1);
    return 0;
}
