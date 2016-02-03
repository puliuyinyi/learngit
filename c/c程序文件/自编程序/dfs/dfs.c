#include <stdio.h>
#define MAX 100
typedef struct 
{
    int edges[MAX][MAX];    //邻接矩阵
    int n;                  //顶点数
    int e;                  //边数
}MGraph;

int visited[MAX];			//标记顶点是否被访问过

void creatMGraph(MGraph * G)
{
	int i,j;
    int s,t;                 //存储顶点编号
    for(i=0;i<G->n;i++)       //初始化
    {
        for(j=0;j<G->n;j++)
        {
            G->edges[i][j]=0;
        }
        visited[i]=0;
    }
    for(i=0;i<G->e;i++)      //对矩阵相邻的边赋权值
    {
		printf("请输入边，通过输入两个边即可:\n");
        scanf("%d %d",&s,&t);   //输入边的顶点编号以及权值
        G->edges[s][t]=1;
    }

}

void DFS(MGraph G,int v)      //深度优先搜索
{
    int i;
    printf("%d ",v);          //访问结点v
    visited[v]=1;
    for(i=0;i<G.n;i++)       //访问与v相邻的未被访问过的结点
    {
        if(G.edges[v][i]!=0&&visited[i]==0)
        {
            DFS(G,i);
        }
    }
}

int main(void)
{
    int n,e;    //建立的图的顶点数和边数
	printf("请输入顶点数和边数:\n");
    if(scanf("%d %d",&n,&e)==2&&n>0)
    {
        MGraph G;
        G.n=n;
        G.e=e;
        creatMGraph(&G);
        DFS(G,0);
        printf("\n");
    //    DFS1(G,0);
    //    printf("\n");
    //    BFS(G,0);
    //    printf("\n");
    }
    return 0;
}



