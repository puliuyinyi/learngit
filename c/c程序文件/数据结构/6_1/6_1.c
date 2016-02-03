#include<stdio.h>
#define True 1
#define False 0
#define Error -1
#define OK 1
#define MAX_VERTEX_NUM 20
int visited[MAX_VERTEX_NUM];
#define INFINTTY 32768
typedef enum{DG,DN,UDG,UDN}GraphKind;
typedef char VertexData;

typedef struct ArcNode{
	int adj;
	int info;
}ArcNode;

typedef struct
{

	VertexData vertex[MAX_VERTEX_NUM];
	ArcNode arcs[MAX_VERTEX_NUM][MAX_VERTEX_NUM];
	int vexnum,arcnum;
	GraphKind kind;
}AdjMatrix;

int LocateVertex(AdjMatrix *G,VertexData v)
{
	int j=Error,k;
	for(k=0;k<G->vexnum;k++)
		if(G->vertex[k]==v)
		{j=k;break;}
		return(j);
}
int GreateUDG(AdjMatrix *G)  /*创建一个无向图*/
{
	int i,j,k;
	VertexData v1,v2;
	printf("请输入图的顶点数和边数:");
	scanf("%d,%d",&G->vexnum,&G->arcnum);
	{
	 for(i=0;i<G->vexnum;i++)
	   for(j=0;j<G->vexnum;j++)
	   G->arcs[i][j].adj=False;
	}
	printf("输入图的顶点:");
		fflush(stdin);
		for(i=0;i<G->vexnum;i++)
			scanf("%c",&G->vertex[i]);

	printf("请输入一条边的两个顶点:\n");
	for(k=0;k<G->arcnum;k++)
	{
		fflush(stdin);
		scanf("%c,%c",&v1,&v2);
		i=LocateVertex(G,v1);
		j=LocateVertex(G,v2);
		G->arcs[i][j].adj=1;
		G->arcs[j][i].adj=1;
	}
		return(OK);
}
void DepthFirstSearch(AdjMatrix g,int v0)
{
	int vj;
	printf("%c ",g.vertex[v0]);visited[v0]=True;
	for(vj=0;vj<g.vexnum;vj++)
		if(!visited[vj]&&g.arcs[v0][vj].adj==1)
			DepthFirstSearch(g,vj);
}
void TraverseGraph(AdjMatrix g)
{
	int vi;
	for(vi=0;vi<g.vexnum;vi++)visited[vi]=False;
	for(vi=0;vi<g.vexnum;vi++)
		if(!visited[vi])DepthFirstSearch(g,vi);
}
void main()
{
	AdjMatrix G;
	GreateUDG(&G);
	printf("\n按深度优先遍历输出序列:");
	TraverseGraph(G);
	printf("\n");
}
