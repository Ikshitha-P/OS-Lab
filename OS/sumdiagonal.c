#include<stdio.h>
void main()
{
int i,j;
printf("Enter the number of rows to input:\n");
scanf("%d",&i);
printf("Enter the number of columns to input:\n");
scanf("%d",&j);
int arr[i][j];
int ele;
for(int k=0;k<i;k++)
{
for(int l=0;l<j;l++)
{
printf("Enter the element:");
scanf("%d",&ele);
arr[k][l]=ele;
}
}
printf("Sum of rows:\n");
for(int k=0;k<i;k++)
{
int sum=0;
for(int l=0;l<j;l++)
{
sum+=arr[k][l];
}
printf("Sum of %d th row:%d\n",k+1,sum);
}
printf("Sum of columns:\n");
for(int k=0;k<j;k++)
{
int sum=0;
for(int l=0;l<i;l++)
{
sum+=arr[l][k];
}
printf("Sum of %d th column:%d\n",k+1,sum);
}
}
