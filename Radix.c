#include<stdio.h> 
#include<stdlib.h>
int a[10],buc[10][10],c[10];
void sort(int n)
{
    int i=0,j,k=0,d=1,b=0;
    for(i=0; i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            c[j]=0;
        }
        for(j=0;j<n;j++)
        {
            k=(a[j]/d)%10;
            buc[k][c[k]]=a[j];
            c[k]++;
        }
        b=0;
        for(k=0;k<10;k++)
        {
	        for(j=0;j<c[k];j++)
	        {
                a[b++]=buc[k][j];
            }
        }
    d*=10;
    }
}

main()
{
    int n,i;
    printf("Enter number of elements.\n");
    scanf("%d",&n);
    printf("Enter elements.\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(n);
    printf("Sorted List:\n");
    for(i=0; i<n;i++)
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
