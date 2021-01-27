////
//// Created by Boyan on 2020/12/15.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//
//using namespace std;
//#pragma GCC optimize(2)
//#define maxN 1005
//const int INF = 0x7FFFFFFF;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//struct edge{
//    int x;
//    int y;
//    int weight;
//    bool operator<(const edge& e)const{
//        return this->weight>e.weight;
//    }
//
//};
//
//
//priority_queue<edge> q;
//vector<edge> edges[maxN];
//
//bool vis[maxN];
//int dis[maxN];
//int n,m,u,v,w;
//int min_u,min_v,min_w = INF;
//
//int Prim(){
//    int cnt = 2;
//    int sum = 0;
//    for (int i = 1; i <= n; ++i) {
//        dis[i] = INF;
//    }
//    vis[min_u] = true;
//    vis[min_v] = true;
//    sum+=min_w;
//    for (int i = 0; i < edges[min_u].size(); ++i) {
//        int y = edges[min_u][i].y;
//        int weight = edges[min_u][i].weight;
//        if (dis[y]>weight){
//            dis[y] = weight;
//            q.push({min_u,y,dis[y]});
//        }
//    }
//    for (int i = 0; i < edges[min_v].size(); ++i) {
//        int y = edges[min_v][i].y;
//        int weight = edges[min_v][i].weight;
//        if (dis[y]>weight){
//            dis[y] = weight;
//            q.push({min_u,y,dis[y]});
//        }
//
//    }
//    while (!q.empty()&&cnt<n){
//        edge e = q.top();q.pop();
//        int from,to;
//        if (vis[e.x]&&vis[e.y])continue;
//        if (vis[e.x]&&!vis[e.y]) {from = e.x,to = e.y;}
//        else{from = e.y,to = e.x;}
//        vis[to] = true;
//        sum+=e.weight;
//        cnt++;
//        for (int i = 0; i < edges[to].size(); ++i) {
//            int y = edges[to][i].y;
//            int weight = edges[to][i].weight;
//            if (vis[y])continue;
//            if (dis[y]>weight){
//                dis[y] = weight;
//                q.push({to,y,dis[y]});
//            }
//        }
//    }
//    return sum;
//}
//
//
//
//int main(){
//    fio
//    cin>>n>>m;
//
//    for (int i = 0; i < m; ++i) {
//        cin>>u>>v>>w;
//        edges[u].push_back({u,v,w});
//        edges[v].push_back({v,u,w});
//        if (w<min_w){
//            min_u = u;
//            min_v = v;
//            min_w = w;
//        }
//    }
//    cout<<Prim()<<endl;
//
//    return 0;
//}