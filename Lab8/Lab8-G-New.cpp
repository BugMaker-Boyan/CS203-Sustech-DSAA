////
//// Created by Boyan on 2020/11/27.
////
//#pragma GCC optimize(2)
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> nodes[100005];
//int height[100005];
//int result[100005];
//
//bool myCmp(int a,int b){
//    return height[a]<height[b];
//}
//
//void init_height(int node){
//    if (nodes[node].empty()){
//        height[node] = 0;
//        return;
//    }
//    for (int i = 0; i < nodes[node].size(); ++i) {
//        init_height(nodes[node][i]);
//    }
//    sort(nodes[node].begin(),nodes[node].end(),myCmp);
//    height[node] = height[nodes[node][nodes[node].size()-1]]+1;
//}
//
//void solve(int node, int depth, int val){
//    result[node] = val;
//    if (nodes[node].empty()) return;
//    int value = val;
//    for (int i = 0; i < nodes[node].size(); ++i) {
//        solve(nodes[node][i],depth+1,value+1);
//        value = min(depth,height[nodes[node][i]]+1);
//    }
//}
//
//
//int main(){
//    int t,n,x;
//    scanf("%d",&t);
//    while (t--){
//        scanf("%d",&n);
//        for (int i = 1; i <= n; ++i) {
//            nodes[i].clear();
//        }
//        for (int i = 2; i <=n ; ++i) {
//            scanf("%d",&x);
//            nodes[x].push_back(i);
//        }
//        init_height(1);
//        solve(1,0,0);
//        long long ans = 0;
//        for (int i = 1; i <=n ; ++i) {
//            if (nodes[i].empty()){
//                ans+=result[i];
//            }
//        }
//        printf("%d\n",ans);
//
//    }
//
//
//
//    return 0;
//}