#include <stdio.h>

int adj[10][10];
int visited[10];
int items[10];
int front=0,rear=-1;

void insert(int e)
	{
		if(rear==9)
			printf("Queue overflow");
		else
		{
			items[++rear]=e;
		}
	}

int empty()
	{
		return(rear<front? 1:0);
	}

int remove1()
	{
		int x=0;
		if(empty()==1)
		{
			printf("Queue Underflow");
			return 0;
		}
		else
		{
			x=items[front++];
			return x;
		}
	}

void BFS (int initial_node, int n)
	{
	int u,i;
	u = initial_node;
	visited[initial_node]=1;
	printf("\nBFS traversal for given graph is : ");
	printf("%d ", initial_node);
	insert(initial_node);
	while(empty()==0)
	  {
				u=remove1();
				for (i=1;i<=n;i++)
				 {
					if((adj[u][i]==1) && (visited[i]==0))
					{
					insert(i);
					visited[i]=1;
					printf("%d ", i);
					 }
				  }
		}
	}

void createGraph()
	{
		int n,c,i,j,parent,adj_parent,initial_node;
		int ans=0,ans1=0;
		printf("\nEnter total number elements in a Undirected Graph :");
		scanf("%d", &n);
		for ( i=1;i<=n;i++)
			for( j=1;j<=n;j++)
				adj[i][j]=0;
		for (c=1;c<=n;c++)
			visited[c]=0;
		printf("\nEnter graph structure for BFS  ");
		do
		{
			printf("\nEnter parent node :");
			scanf("%d", &parent);
			do
			{
				printf("\nEnter adjacent node for node %d : ", parent);
				scanf("%d", &adj_parent);
				adj[parent][adj_parent]=1;
				adj[adj_parent][parent]=1;
				printf("\nContinue to add adjacent node for %d (1/0)?", parent);
				scanf("%d", &ans1);
			} while (ans1==1);
			printf("\nContinue to add graph node?");
			scanf("%d", &ans);
		}while (ans ==1);
		printf("\nAdjacency matrix for your graph is :\n");
		for (i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
				printf("%d  ", adj[i][j]);
			printf("\n");
		}
		printf("\nEnter the initial node for BFS traversal:");
		scanf("%d", &initial_node);
		BFS (initial_node, n);
	}

void main()
{
    createGraph();
}
