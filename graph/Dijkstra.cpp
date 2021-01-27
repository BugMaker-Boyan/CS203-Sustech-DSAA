//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//const int inf=0x7fffffff;
//#define maxN 200005
//#define maxM 400005
//struct edge{
//    int endNode;
//    int weight;
//};
//
//struct node{
//    int val;
//    int dis;
//    bool operator<(const node& n)const{
//        return this->dis > n.dis;
//    }
//    node(int val,int dis){
//        this->val = val;
//        this->dis = dis;
//    }
//    node(){}
//};
//
//vector<edge> edges[maxN];
//bool vis[maxN];
//int dis[maxN];
//int n,m;
//
//void dijkstra(int source){
//
//    priority_queue<node> q;
//    dis[source] = 0;
//    q.push(node(source,0));
//    node temp;
//    while (!q.empty()){
//        //只要从队列里pop出来，就意味着到这个点的最短距离就确定了
//        temp = q.top();q.pop();
//        int u = temp.val;
//        if (vis[u]) continue;
//        vis[u] = true;
//        for (int i = 0; i < edges[u].size(); ++i) {
//            int toNode = edges[u][i].endNode;
//            int weight = edges[u][i].weight;
//            if (!vis[toNode] && dis[toNode] > dis[u]+weight){
//                dis[toNode] = dis[u]+weight;
//                //直接push一个新的node即可，因为新node必然比旧node出来之前出来，先把vis[node.val]设置为true，之后旧node出来也会在41行continue掉
//                q.push(node(toNode,dis[toNode]));
//            }
//        }
//    }
//}