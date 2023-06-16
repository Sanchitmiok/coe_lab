#include<stdio.h>
int main(){
    int res;
    int arr1[2][3]={1,2,3,4,5,6};
    int arr2[2][3]={1,2,3,4,5,6};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            res=arr1[i][j]*arr2[i][j];
            printf("%d ",res);
        }
    }
}
