#include<stdio.h>
void main()
{
        int a[3][3],b[3][3],c[3][3],i,j,k,sum;
        printf("enter the elements of matrix First :\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }
        printf("First matrix is :\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }

 printf("enter the elements of matrix second :\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&b[i][j]);
                }
        }
        printf("Second matrix is :\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",b[i][j]);
                }
                printf("\n");
        }

        for(i=0;i<3;i++){
                for(j<0;j<3;j++){
                        sum=0;
                        for(k=0;k<3;k++){
                                sum=sum+(a[i][k]*b[k][j]);
                        }
                        c[i][j]=sum;
                }
        }



printf("Multiplication of 1st and 2nd Matrix is :\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
        }


}