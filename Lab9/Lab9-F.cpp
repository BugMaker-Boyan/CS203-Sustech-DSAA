//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#pragma GCC optimize(2)
//using namespace std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//const long long maxN = 50005;
//
////pair<weight,v>
//vector<pair<long long,long long>> edges[maxN];
//long long ans[maxN],Questions[maxN];
//
//
//long long t,n,m,q,maxK,u,v,w,k;
//
//struct node{
//    long long u,v,index,weight;
//    node(long long u,long long v,long long index,long long weight){
//        this->u = u;
//        this->v = v;
//        this->index = index;
//        this->weight = weight;
//    }
//    bool operator<(const node& nd)const{
//        return this->weight > nd.weight;
//    }
//};
//
//priority_queue<node> pq;
//
//int main(){
//    fio
//    cin>>t;
//    while (t--){
//        cin>>n>>m>>q;
//        for (long long i = 1; i <= n; ++i) {
//            edges[i].clear();
//        }
//        for (long long i = 0; i < m; ++i) {
//            cin>>u>>v>>w;
//            edges[u].emplace_back(w,v);
//        }
//        maxK = 0;
//        for (long long i = 0; i < q; ++i) {
//            cin>>k;
//            if (k>maxK) maxK = k;
//            Questions[i] = k;
//        }
//        while (!pq.empty())pq.pop();
//
//        for (long long i = 1; i <= n; ++i) {
//            sort(edges[i].begin(),edges[i].end());
//            //initial
//            if (!edges[i].empty()){
//                pq.push({i,edges[i][0].second,0,edges[i][0].first});
//            }
//        }
//        k = 0;
//        while (!pq.empty()){
//            node nd = pq.top();pq.pop();
//            k++;
//            ans[k] = nd.weight;
//            if (k==maxK){
//                break;
//            }
//            if (!edges[nd.v].empty()){
//                pq.push({nd.v,edges[nd.v][0].second,0,nd.weight+edges[nd.v][0].first});
//            }
//            if (edges[nd.u].size()>(nd.index+1)){
//                pq.push({nd.u,edges[nd.u][nd.index+1].second,nd.index+1,nd.weight-edges[nd.u][nd.index].first+edges[nd.u][nd.index+1].first});
//            }
//        }
//        for (long long i = 0; i < q; ++i) {
//            printf("%lld\n",ans[Questions[i]]);
//        }
//
//    }
//
//    return 0;
//}