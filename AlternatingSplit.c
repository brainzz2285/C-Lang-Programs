#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void AlternatingSplit(int *list,int *sublist1,int *sublist2,int size)
{
    int i=0,j=0,k=0;
    for(i=0;i<size;i++)
    {
        if(i%2==0)
        {
            sublist1[j]=list[i];
            j++;
        }
        else
        {
            sublist2[k]=list[i];
            k++;
        }
    }
}

void main()
{
    clrscr();
    int list[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8};
    int n=11,i=0;
    int divide=0;
    if(n%2!=0)
        divide=1;
    int size1=n/2+divide;
    int size2=n-size1;
    int *sublist1 = malloc(size1*sizeof(int));
    int *sublist2 = malloc(size2*sizeof(int));
    AlternatingSplit(list,sublist1,sublist2,n);
    printf("Original List: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",list[i]);
    }
    printf("\n Sublist1: ");
    for(i=0;i<size1;i++)
    {
        printf("%d ",sublist1[i]);
    }
    printf("\n Sublist2: ");
    for(i=0;i<size2;i++)
    {
        printf("%d ",sublist2[i]);
    }
    getch();
}
