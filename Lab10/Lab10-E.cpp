////
//// Created by Boyan on 2020/12/22.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stack>
//using namespace std;
//const int MAXN = 1e5+5;
//
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//const int INF = 0x7FFFFFFF;
//int n,m,t,u,v,d;
//
//vector<pair<int,int>> shareServer;
//vector<int> edges[MAXN];
//
//struct server{
//    int d;
//    int id;
//    int to;
//    bool operator<(const server& s){
//        return d<s.d;
//    }
//
//};
//
//server s[MAXN];
//
//int belong[MAXN];
//int outDegree[MAXN];
//int tot = 0, sscCnt = 0;
//int dfn[MAXN],low[MAXN],inStack[MAXN];
//stack<int> sta;
//
//
//void tarjan(int u){
//    int v;
//    dfn[u]=low[u]=++tot;
//    sta.push(u);
//    inStack[u]=1;
//    for (int i = 0; i < edges[u].size(); ++i) {
//        v = edges[u][i];
//        if(!dfn[v]){
//            tarjan(v);
//            low[u] = min(low[u],low[v]);
//        } else{
//            if (inStack[v]){
//                low[u] = min(low[u],dfn[v]);
//            }
//        }
//    }
//    if (dfn[u]==low[u]){
//        sscCnt++;
//        do {
//            v = sta.top();sta.pop();
//            inStack[v] = 0;
//            belong[v] = sscCnt;
//        } while (u!=v);
//    }
//
//}
//
//
//int main(){
//    fio
//    cin>>n>>m>>t;
//    for (int i = 1; i <= n; ++i) {
//        cin>>u>>v;
//        shareServer.emplace_back(u,v);
//    }
//    for (int i = 1; i <= m ; ++i) {
//        cin>>d;
//        s[i].id = i;
//        s[i].d = d;
//    }
//
//    for (int i = 0; i < n ; ++i) {
//        u = shareServer[i].first;
//        v = shareServer[i].second;
//        if ((s[u].d +1)%t == s[v].d){
//            edges[u].push_back(v);
//        }else if ((s[v].d +1)%t == s[u].d){
//            edges[v].push_back(u);
//        }
//    }
//    for (int i = 1; i <=m ; ++i) {
//        if (!dfn[i]){
//            tarjan(i);
//        }
//    }
//    for (int i = 1; i <= m ; ++i) {
//        for (int j = 0; j < edges[i].size() ; ++j) {
//            if (belong[i]!=belong[edges[i][j]]){
//                outDegree[i]++;
//            }
//        }
//    }
//    vector<int> ssc[sscCnt+1];
//    for (int i = 1; i <= m ; ++i) {
//        ssc[belong[i]].push_back(i);
//    }
//    int ans = INF;
//    for (int i = 1; i <= sscCnt; ++i) {
//        int total = 0;
//        for (int j = 0; j < ssc[i].size(); ++j) {
//            total+=outDegree[ssc[i][j]];
//        }
//        if (total==0){
//            ans = min(ans,(int)ssc[i].size());
//        }
//    }
//    cout<<ans<<endl;
//
//
//    return 0;
//}