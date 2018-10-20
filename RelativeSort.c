#include <stdio.h>
#include <conio.h>

void relativeSort(int *arr,int *order,int size1,int size2)
{
    int arrpos=0,i,j;
    for(i=0;i<size2;i++)
    {
        for(j=0;j<size1;j++)
        {
            if(arr[j]==order[i])
            {
                int temp=arr[j];
                arr[j]=arr[arrpos];
                arr[arrpos]=temp;
                arrpos++;
            }
        }    
    }
    
    for(i=arrpos;i<size1-1;i++)
    {
        for(j=arrpos;j<size1-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }   
        }
    }
}

void main()
{
    clrscr();
    int A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8},A2[] = {2, 1, 8, 3};
    int n1=11,n2=4;
    relativeSort(A1,A2,n1,n2);
    printf("Array sorted relatively: ");
    for(int i=0;i<n1;i++)
        printf("%d ",A1[i]);
    getch();
}
