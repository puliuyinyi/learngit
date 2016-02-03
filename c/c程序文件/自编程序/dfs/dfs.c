#include <stdio.h>
#define MAX 100
typedef struct 
{
    int edges[MAX][MAX];    //�ڽӾ���
    int n;                  //������
    int e;                  //����
}MGraph;

int visited[MAX];			//��Ƕ����Ƿ񱻷��ʹ�

void creatMGraph(MGraph * G)
{
	int i,j;
    int s,t;                 //�洢������
    for(i=0;i<G->n;i++)       //��ʼ��
    {
        for(j=0;j<G->n;j++)
        {
            G->edges[i][j]=0;
        }
        visited[i]=0;
    }
    for(i=0;i<G->e;i++)      //�Ծ������ڵı߸�Ȩֵ
    {
		printf("������ߣ�ͨ�����������߼���:\n");
        scanf("%d %d",&s,&t);   //����ߵĶ������Լ�Ȩֵ
        G->edges[s][t]=1;
    }

}

void DFS(MGraph G,int v)      //�����������
{
    int i;
    printf("%d ",v);          //���ʽ��v
    visited[v]=1;
    for(i=0;i<G.n;i++)       //������v���ڵ�δ�����ʹ��Ľ��
    {
        if(G.edges[v][i]!=0&&visited[i]==0)
        {
            DFS(G,i);
        }
    }
}

int main(void)
{
    int n,e;    //������ͼ�Ķ������ͱ���
	printf("�����붥�����ͱ���:\n");
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



