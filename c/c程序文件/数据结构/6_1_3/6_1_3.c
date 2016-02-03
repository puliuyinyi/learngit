#include<stdio.h>
#include<stdlib.h>
#define MAX_VERTEX_NUM 20
#define True 1
#define False 0
#define Error -1
#define OK 1
typedef char VertexData;
int visited[MAX_VERTEX_NUM];

typedef enum{DG,DN,UDG,UDN}GraphKind;

typedef struct ArcNode{
	int adjvex;
	struct ArcNode *nextarc;
	Otherinfo info;
}ArcNode;

typedef struct VertexNode{
	VertexData data;
	ArcNode *firstarc;
}VertexNode;

typedef struct{
	VertexNode vertex[MAX_VERTEX_NUM];
	int vexnum,arcnum;
	GraphKind kind;
}AdjList;

int GreateUDG(AdjList *G)
{
	ArcNode *r,*s;
	int flag=1;
    int c;
	printf("请输入无向图的顶点数和边数:");
	scanf("%d,%d",&G->vexnum,&G->arcnum);
	for(i=0;i<G->vexnum;i++)
	{
		scanf("%c",G->vertex[i].data);
		G->vertex[i].firstarc=NULL;
	}
    for(i=0;i<G->vexnum;i++)
	{
		while(flag)
		{
			scanf("%d",&c);
		    s=(ArcNode *)malloc(sizeof(ArcNode));
			s->adjvex=c;
			r->nextarc=s;
			r=s;
		}
		else
		{
			flag=0;
			r->nextarc=NULL;
		}
	}
}

		
		



void TraverseGraph(AdjList g)
{
	for(vi=0;vi<g.vexnum;vi++)visited[vi]=False;
	for(vi=0;vi<g.vexnum;vi++)
		if(!visited[vi])DepthFirstSearch(a,vi);
}
void DepthFirstSearch(AdjList g,int v0)
{
	ArcNode *p;
	printf("%c ",g.vertex[v0].data);
	visited[v0]=True;
	p=g.vertex[v0].firstarc
	while(p!=NULL)
	{
		if(!visited[p->adjvex])
			DepthFirstSearch(g,p->adjvex);
		p=p->nextarc;
	}
}

