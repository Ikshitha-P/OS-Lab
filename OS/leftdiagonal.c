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
int sum=0;
for(int k=0;k<i;k++)
{


sum+=arr[k][i-k-1];

}
printf("Sum of left diagonal:%d",sum);
}
