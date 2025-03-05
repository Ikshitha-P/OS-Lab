#include<stdio.h>
void main()
{
int n,pos;
printf("Enter the number of elements to input:\n");
scanf("%d",&n);
int arr[n];
int ele;
for(int i=0;i<n;i++)
{
printf("Enter the element:");
scanf("%d",&ele);
arr[i]=ele;
}
printf("Enter the position to be deleted from:\n");
scanf("%d",&pos);
for(int i=0;i<n;i++)
{
if(i==pos)
{
for(int j=pos+1;j<n;j++)
{
arr[j-1]=arr[j];
}
}
}
n--;
printf("Array elements are:\n");
for(int i=0;i<n;i++)
{
printf("%d ",arr[i]);
}
}
