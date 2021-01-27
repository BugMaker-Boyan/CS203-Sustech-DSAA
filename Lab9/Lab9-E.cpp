////
//// Created by Boyan on 2020/12/9.
////
//
//#include <iostream>
//#include <vector>
//using namespace  std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//long long cnt = 0;
//int n,m,a,b,u,v;

//bool vis[100005];
//
//vector<int> edges[100005];
//
//bool a_vis[100005];
//bool b_vis[100005];
//int cnt_a = 0;
//int cnt_b = 0;
//
//void dfs(int node,int flag){
//    vis[node] = true;
//    if (flag == 1 && node != a){
//        a_vis[node] = true;
//    } else if (flag == 2 && node != b){
//        b_vis[node] = true;
//    }
//    for (int i = 0; i < edges[node].size(); ++i) {
//        if (!vis[edges[node][i]]){
//            if (flag == 1 && edges[node][i] != b){
//                dfs(edges[node][i],flag);
//            } else if (flag == 2 && edges[node][i] != a){
//                dfs(edges[node][i],flag);
//            }
//        }
//    }
//.
//
//
//
//int main(){
//    cin>>n>>m>>a>>b;
//    for (int i = 0; i < m; ++i) {
//        cin>>u>>v;
//        edges[u].push_back(v);
//        edges[v].push_back(u);
//    }
//    dfs(a,1);
//    for (int i = 1; i <= n ; ++i) {
//        vis[i] = false;
//    }
//    dfs(b,2);
//    for (int i = 1; i <= n; ++i) {
//        if (a_vis[i] == false && b_vis[i] == true ){
//            cnt_b++;
//        }
//        if (a_vis[i] == true && b_vis[i] == false ){
//            cnt_a++;
//        }
//    }
//    cnt=cnt_a*cnt_b;
//    cout<<cnt<<endl;
//
//
//    return 0;
//}