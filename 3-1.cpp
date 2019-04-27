#include <iostream>
#define MAX 100
#define MAXCOST 100000
using namespace std; 

int graph[MAX][MAX];

int Prim(int n)
{
 /* lowcost[i]记录以i为终点的边的最小权值，当lowcost[i]=0时表示终点i加入生成树 */
 int lowcost[MAX];

 /* mst[i]记录对应lowcost[i]的起点 */
 int mst[MAX];

 int i, j, min, minid, sum = 0;

 /* 默认选择0号节点加入生成树，从1号节点开始初始化 */
 for (i = 1; i < n; i++)
 {
  /* 最短距离初始化为其他节点到0号节点的距离 */
   lowcost[i] = graph[0][i];

  /* 标记所有节点的起点皆为默认的0号节点 */
  mst[i] = 0;
 }

 /* 标记0号节点加入生成树 */
 lowcost[0] = 0;

 /* n个节点至少需要n-1条边构成最小生成树 */
 for (i = 1; i < n; i++)
 {
  min = MAXCOST;
  minid = 0;

  /* 找满足条件的最小权值边的节点minid */
  for (j =1; j <n; j++)
  {
   /* 边权值较小且不在生成树中 */
   if (lowcost[j] < min && lowcost[j] != 0)
   {
    min = lowcost[j];
    minid = j;
   }
  }
  /* 输出生成树边的信息:起点，终点，权值 */
  cout<<"生成数边的起点、终点及权值分别为："<< mst[minid]+1<<"  "<<minid+1<<"  "<<min<<endl;
  /* 累加权值 */
  sum += min;

  /* 标记节点minid加入生成树 */
  lowcost[minid] = 0;

  /* 更新当前节点minid到其他节点的权值 */
  for (j = 1; j < n; j++)
  {
   /* 发现更小的权值 */
   if (graph[minid][j] < lowcost[j])
   {
    /* 更新权值信息 */
    lowcost[j] = graph[minid][j];

    /* 更新最小权值边的起点 */
    mst[j] = minid;
   }
  }
 }
 /* 返回最小权值和 */
 return sum;
}

int main()
{
 int i, j,  m,n;
 int  cost;
  /* 读取节点的数目 */
 cout<<"请输入该图结点个数：";
 cin>>m;
 /* 初始化图，所有节点间距离为无穷大 */
 for (i = 0; i <m; i++)
 {
  for (j =i+1; j <m; j++)
  {
   cout<<"请输入结点"<<i+1<<"到结点"<<j+1<<"边的权值，若无边则输入MAXCOST(100000):\n";
   cin>>n;
   graph[i][j] = n;
   graph[j][i] = n;
  }
  graph[i][i]=MAXCOST;
 }

 /* 求解最小生成树 */
 cost = Prim(m);
 cout<<"最小生成树的权值为："<<cost<<endl;
 return 0;
}
