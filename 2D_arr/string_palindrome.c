
#include<stdio.h>
int main(){
    char str[20]="mjkm";
    int length=0;
    while(str[length]!='\0'){
        length++;
    }int flag=0;
    //printf("%d",length);
    for(int i=0,j=length-1;i<j;i++,j--){
       if(str[i]!=str[j])  flag=1;
    }
    if(flag) printf("No");
    else printf("Yes");
    
    return 0;
}
