////
//// Created by Boyan on 2020/12/15.
////
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//#pragma GCC optimize(2)
//#define maxN 200005
//const int INF = 0x7FFFFFFF;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//vector<int> posEdges[maxN];
//vector<int> revEdges[maxN];
//int vis[maxN];
//int n,m,u,v;
//
//stack<int> s;
//
//
//
//int main(){
//    fio
//    cin>>n>>m;
//    for (int i = 0; i < m; ++i) {
//        cin>>u>>v;
//        posEdges[u].push_back(v);
//        revEdges[v].push_back(u);
//    }
//    for (int i = 1; i <= n ; ++i) {
//        vis[i] = 0;
//    }
//    vector<int> LR;
//    int cnt = 0;
//    while (cnt < n){
//        int source;
//        for (int i = 1; i <= n ; ++i) {
//            if (!vis[i]){
//                source = i;
//                break;
//            }
//        }
//        s.push(source);
//        vis[source] = 1;
//        while (!s.empty()){
//            int x = s.top();
//            bool hasWhiteChild = false;
//            for (int i = 0; i < revEdges[x].size(); ++i) {
//                if (!vis[revEdges[x][i]]){
//                    s.push(revEdges[x][i]);
//                    vis[revEdges[x][i]] = 1;
//                    hasWhiteChild = true;
//                    break;
//                }
//            }
//            if (!hasWhiteChild){
//                s.pop();
//                vis[x] = 2;
//                cnt++;
//                LR.push_back(x);
//            }
//        }
//    }
//    vector<int> L;
//    for (int i = LR.size()-1; i >= 0; --i) {
//        L.push_back(LR[i]);
//    }
//    cnt = 0;
//    while (!s.empty())s.pop();
//    for (int i = 1; i <= n ; ++i) {
//        vis[i] = 0;
//    }
//    int source = L[0];
//    s.push(source);
//    vis[source] = 1;
//    while (!s.empty()){
//        int x = s.top();
//        bool hasWhileChild = false;
//        for (int i = 0; i < posEdges[x].size(); ++i) {
//            if (!vis[posEdges[x][i]]){
//                s.push(posEdges[x][i]);
//                vis[posEdges[x][i]] = 1;
//                hasWhileChild = true;
//                break;
//            }
//        }
//        if (!hasWhileChild){
//            s.pop();
//            vis[x] = 2;
//            cnt++;
//        }
//    }
//    if (cnt!=n){
//        cout<<"wawawa"<<endl;
//    } else{
//        cout<<"Bravo"<<endl;
//    }
//
//
//
//    return 0;
//}