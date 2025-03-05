#include<stdio.h>
void main()
{
int n;
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
for(int i=0;i<n;i++)
{
for(int j=0;j<=i;j++)
{
if(arr[j]<arr[i])
{
int temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}
}
}
printf("Second largest element is %d",arr[1]);
}
