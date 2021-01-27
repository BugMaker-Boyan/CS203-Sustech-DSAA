////
//// Created by Boyan on 2020/12/15.
////
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cmath>
//
//using namespace std;
//#pragma GCC optimize(2)
//const int INF = 0x7FFFFFFF;
//const int maxN = 305;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//int n,m,x,y;
//
//int height[maxN][maxN];
//double Times[maxN][maxN];
//int vis[maxN][maxN];
//
//struct grid{
//    int x,y;
//    double Times;
//    double v;
//    bool operator<(const grid& g)const{
//        return this->Times > g.Times;
//    }
//};
//
//priority_queue<grid> q;
//
//int main(){
//    cin>>n>>m;
//    for (int i = 1; i <= n; ++i) {
//        for (int j = 1; j <= m; ++j) {
//            cin>>height[i][j];
//        }
//    }
//    for (int i = 1; i <= n ; ++i) {
//        for (int j = 1; j <= m ; ++j) {
//            Times[i][j] = (double)INF;
//        }
//    }
//
//    Times[1][1] = 0.0;
//
//    q.push({1,1,0.0,1});
//    while (!q.empty()){
//        grid g = q.top();q.pop();
//        if (vis[g.x][g.y])continue;
//        vis[g.x][g.y] = 1;
//
//        //up
//        if (g.x-1>=1){
//            if (!vis[g.x-1][g.y] && Times[g.x-1][g.y]>g.Times+1/g.v){
//                Times[g.x-1][g.y] = g.Times+1/g.v;
//                q.push({g.x-1,g.y,Times[g.x-1][g.y],g.v*pow(2,height[g.x][g.y]-height[g.x-1][g.y])});
//            }
//        }
//        //down
//        if (g.x+1<=n){
//            if (!vis[g.x+1][g.y] && Times[g.x+1][g.y]>g.Times+1/g.v){
//                Times[g.x+1][g.y] = g.Times+1/g.v;
//                q.push({g.x+1,g.y,Times[g.x+1][g.y],g.v*pow(2,height[g.x][g.y]-height[g.x+1][g.y])});
//            }
//        }
//        //left
//        if (g.y-1>=1){
//            if (!vis[g.x][g.y-1] && Times[g.x][g.y-1]>g.Times+1/g.v){
//                Times[g.x][g.y-1] = g.Times+1/g.v;
//                q.push({g.x,g.y-1,Times[g.x][g.y-1],g.v*pow(2,height[g.x][g.y]-height[g.x][g.y-1])});
//            }
//        }
//        //right
//        if (g.y+1<=m){
//            if (!vis[g.x][g.y+1] && Times[g.x][g.y+1]>g.Times+1/g.v){
//                Times[g.x][g.y+1] = g.Times+1/g.v;
//                q.push({g.x,g.y+1,Times[g.x][g.y+1],g.v*pow(2,height[g.x][g.y]-height[g.x][g.y+1])});
//            }
//        }
//    }
//    printf("%.2f",Times[n][m]);
//
//
//
//    return 0;
//}