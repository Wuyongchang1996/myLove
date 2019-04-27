#include <iostream>
#define MAX 100
#define MAXCOST 100000
using namespace std; 

int graph[MAX][MAX];

int Prim(int n)
{
 /* lowcost[i]��¼��iΪ�յ�ıߵ���СȨֵ����lowcost[i]=0ʱ��ʾ�յ�i���������� */
 int lowcost[MAX];

 /* mst[i]��¼��Ӧlowcost[i]����� */
 int mst[MAX];

 int i, j, min, minid, sum = 0;

 /* Ĭ��ѡ��0�Žڵ��������������1�Žڵ㿪ʼ��ʼ�� */
 for (i = 1; i < n; i++)
 {
  /* ��̾����ʼ��Ϊ�����ڵ㵽0�Žڵ�ľ��� */
   lowcost[i] = graph[0][i];

  /* ������нڵ������ΪĬ�ϵ�0�Žڵ� */
  mst[i] = 0;
 }

 /* ���0�Žڵ���������� */
 lowcost[0] = 0;

 /* n���ڵ�������Ҫn-1���߹�����С������ */
 for (i = 1; i < n; i++)
 {
  min = MAXCOST;
  minid = 0;

  /* ��������������СȨֵ�ߵĽڵ�minid */
  for (j =1; j <n; j++)
  {
   /* ��Ȩֵ��С�Ҳ����������� */
   if (lowcost[j] < min && lowcost[j] != 0)
   {
    min = lowcost[j];
    minid = j;
   }
  }
  /* ����������ߵ���Ϣ:��㣬�յ㣬Ȩֵ */
  cout<<"�������ߵ���㡢�յ㼰Ȩֵ�ֱ�Ϊ��"<< mst[minid]+1<<"  "<<minid+1<<"  "<<min<<endl;
  /* �ۼ�Ȩֵ */
  sum += min;

  /* ��ǽڵ�minid���������� */
  lowcost[minid] = 0;

  /* ���µ�ǰ�ڵ�minid�������ڵ��Ȩֵ */
  for (j = 1; j < n; j++)
  {
   /* ���ָ�С��Ȩֵ */
   if (graph[minid][j] < lowcost[j])
   {
    /* ����Ȩֵ��Ϣ */
    lowcost[j] = graph[minid][j];

    /* ������СȨֵ�ߵ���� */
    mst[j] = minid;
   }
  }
 }
 /* ������СȨֵ�� */
 return sum;
}

int main()
{
 int i, j,  m,n;
 int  cost;
  /* ��ȡ�ڵ����Ŀ */
 cout<<"�������ͼ��������";
 cin>>m;
 /* ��ʼ��ͼ�����нڵ�����Ϊ����� */
 for (i = 0; i <m; i++)
 {
  for (j =i+1; j <m; j++)
  {
   cout<<"��������"<<i+1<<"�����"<<j+1<<"�ߵ�Ȩֵ�����ޱ�������MAXCOST(100000):\n";
   cin>>n;
   graph[i][j] = n;
   graph[j][i] = n;
  }
  graph[i][i]=MAXCOST;
 }

 /* �����С������ */
 cost = Prim(m);
 cout<<"��С��������ȨֵΪ��"<<cost<<endl;
 return 0;
}
