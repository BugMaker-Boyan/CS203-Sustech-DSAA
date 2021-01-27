////
//// Created by Boyan on 2020/12/9.
////
//
//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//#define maxN 100005
//#define MOD 1000000007
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//struct edge{
//    int to;
//    edge(int to){
//        this->to = to;
//    }
//};
//
//
//int inDegree[maxN];
//vector<edge> edges[maxN];
//long long a[maxN];
//long long b[maxN];
//long long contribution[maxN];
//
//int t,n,m,u,v,w;
//
//int main(){
//    fio
//    cin>>t;
//    while (t--){
//        cin>>n>>m;
//        for (int i = 0; i < maxN; ++i) {
//            inDegree[i] = 0;
//            edges[i].clear();
//            contribution[i]= 0;
//        }
//        for (int i = 1; i <= n; ++i) {
//            cin>>a[i]>>b[i];
//        }
//        for (int i = 0; i < m; ++i) {
//            cin>>u>>v;
//            edges[v].emplace_back(u);
//            inDegree[u]++;
//        }
//        queue<int> q;
//        for (int i = 1; i <= n ; ++i) {
//            if (inDegree[i]==0){
//                q.push(i);
//            }
//        }
//        while (!q.empty()){
//            int x = q.front();q.pop();
//            for (int i = 0; i < edges[x].size(); ++i) {
//                int y = edges[x][i].to;
//                contribution[y]+=contribution[x]+b[x];
//                contribution[y]%=MOD;
//                inDegree[y]--;
//                if (inDegree[y]==0){
//                    q.push(y);
//                }
//            }
//        }
//        long long ans = 0;
//        for (int i = 1; i < n; ++i) {
//            ans+=(a[i]*contribution[i])%MOD;
//            ans %= MOD;
//        }
//        cout<<ans<<endl;
//    }
//
//
//
//
//    return 0;
//}