////
//// Created by Boyan on 2020/12/4.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//
//int main(){
//    fio
//    int t,n,m;
//    cin>>t;
//    while (t--){
//        cin>>n>>m;
//        int adj[n][n];
//        memset(adj,0,sizeof(adj));
//        int u,v;
//        for (int i = 0; i < m; ++i) {
//            cin>>u>>v;
//            adj[u-1][v-1]++;
//        }
//        for (int i = 0; i < n; ++i) {
//            for (int j = 0; j < n; ++j) {
//                cout<<adj[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//    }
//    return 0;
//}