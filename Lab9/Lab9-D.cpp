////
//// Created by Boyan on 2020/12/4.
////
//#include <iostream>
//#include <vector>
//#include <cstring>
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
//        temp = q.top();q.pop();
//        int u = temp.val;
//        if (vis[u]) continue;
//        vis[u] = true;
//        for (int i = 0; i < edges[u].size(); ++i) {
//            int toNode = edges[u][i].endNode;
//            int weight = edges[u][i].weight;
//            if (!vis[toNode] && dis[toNode] > dis[u]+weight){
//                dis[toNode] = dis[u]+weight;
//                q.push(node(toNode,dis[toNode]));
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//    int n,m,u,v,w;
//    cin>>n>>m;
//    memset(vis,0,sizeof(vis));
//    for (int i = 0; i < maxN; ++i) {
//        dis[i] = inf;
//    }
//    for (int i = 0; i < m; ++i) {
//        cin>>u>>v>>w;
//        edge e;
//        e.endNode = v;
//        e.weight = w;
//        edges[u].push_back(e);
//    }
//    dijkstra(1);
//    if (dis[n]==inf){
//        cout<<-1<<endl;
//    } else{
//        cout<<dis[n]<<endl;
//    }
//
//    return 0;
//}