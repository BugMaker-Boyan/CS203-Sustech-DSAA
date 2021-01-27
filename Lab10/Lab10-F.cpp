////
//// Created by Boyan on 2020/12/15.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//
//#pragma GCC optimize(2)
//typedef long long ll;
//
//const ll INF = 0x3f3f3f3f3f3f3f3f;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//ll n,m,p,k,u,v,S,T;
//ll w;
//
//struct node{
//    ll index;
//    ll dis;
//    ll usedPortalNumber;
//    bool operator<(const node& other)const{
//        return this->dis>other.dis;
//    }
//};
//
//
//
//int main(){
//    fio
//    cin>>n>>m>>p>>k;
//    ll num = k;
//    vector<vector<ll>> vis(n+1);
//    vector<vector<ll>> dis(n+1);
//    vector<pair<ll,ll>> RealEdges[n+1];
//    vector<ll> PortalEdges[n+1];
//    for (ll i = 1; i <= n ; ++i) {
//        vis[i].resize(num+1,0);
//        dis[i].resize(num+1,INF);
//    }
//    for (ll i = 0; i < m; ++i) {
//        cin>>u>>v>>w;
//        RealEdges[u].emplace_back(v,w);
//    }
//    for (ll i = 0; i < p; ++i) {
//        cin>>u>>v;
//        PortalEdges[u].push_back(v);
//    }
//    cin>>S>>T;
//
//    //Dijkstra
//    priority_queue<node> q;
//    dis[S][0] = 0;
//    q.push({S,0,0});
//    node temp;
//    while (!q.empty()){
//        temp = q.top();q.pop();
//        ll x = temp.index;
//        ll y = temp.usedPortalNumber;
//        if (vis[x][y]) continue;//幽灵节点
//        vis[x][y] = 1;
//
//        //relaxation
//        vector<pair<ll,ll>>& realEdges = RealEdges[x];
//        for (ll i = 0; i < realEdges.size(); ++i) {
//            ll to = realEdges[i].first;
//            ll weight = realEdges[i].second;
//            if (!vis[to][y] && dis[to][y] > temp.dis + weight){
//                dis[to][y] = temp.dis + weight;
//                q.push({to,dis[to][y],y});
//            }
//        }
//
//        vector<ll>& portalEdges = PortalEdges[x];
//        for (ll i = 0; i < portalEdges.size() && y+1<=num; ++i) {
//            ll to = portalEdges[i];
//            if (!vis[to][y+1] && temp.dis < dis[to][y+1]){
//                dis[to][y+1] = temp.dis;
//                q.push({to,dis[to][y+1],y+1});
//            }
//        }
//
//
//    }
//
//    ll res = INF;
//    for (ll i = 0; i <= num; ++i) {
//        res = min(res,dis[T][i]);
//    }
//    printf("%lld\n",res);
//    return 0;
//}