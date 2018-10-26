#include<stdio.h>
#include<stdlib.h>
int a[100];

// not working

void swap(int i, int j)
{
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

void downheap(int v, int n)
{
    int w=2*v+1;
    while(w<n)
    {
        if(w+1<=n)
        {
            if(a[w+1]>a[w])
                w++;
        }
        if(a[v]>a[w])
            return;
        else
        {
            swap(v,w);
            v=w;
            w=2*v+1;
        }
    }
}

void buildheap(int n)
{
    for(int v=((n/2)-1);v>=0;v--)
    {
        downheap(v,n);
    }
}

void sort(int n)
{
    buildheap(n);
    while(n>1)
    {
        n--;
        swap(0,n);
        downheap(0,n);
    }
}

void main()
{
    int x,i;
    printf("Enter number of elements.\n");
    scanf("%d",&x);
    printf("Enter elements.\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(x);
    printf("Sorted List:\n");
    for(i=0; i<x;i++)
    {
        printf("%d\n",a[i]);
    }
}
/*Output:
Enter number of elements.
5
Enter elements.
39
1
46
8
9
Sorted List:
1
8
9
39
46
*/
