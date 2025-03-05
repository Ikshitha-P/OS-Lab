#include <stdio.h>

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
    int count = 0;


    for (int i = 0; i < n; i++) {

        if (arr[i] != -1) {

            int flag = 0;
            for (int j = i+1; j < n; j++) {
                if (arr[j] == arr[i]) {
                    arr[j]=-1;
                    flag=1;
                }
            }

            if (flag ) {
                count++;


            }
        }
    }
    printf("Duplicates:%d",count);
}


