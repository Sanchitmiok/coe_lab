#include<stdio.h>

int main(){
    int r,c;
    printf("Enter the number of rows:");
    scanf("%d",&r);

    printf("Enter the number of columns:");
    scanf("%d",&c);

    int arr[r][c];

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int r1,c1;
    printf("Enter the number of rows:");
    scanf("%d",&r1);

    printf("Enter the number of columns:");
    scanf("%d",&c1);

    int arr1[r1][c1];

    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            scanf("%d",&arr1[i][j]);
        }
    }


    int sumarr[r][c];

    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            sumarr[i][j]=arr[i][j]+arr1[i][j];
        }
    }

    for (int i=0;i<r1;i++){
        for (int j=0;j<c1;j++){
            printf("%d ",sumarr[i][j]);
        }

        printf("\n");
    }
