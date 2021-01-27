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
//const int INF = 0x7FFFFFFF;
//const int maxN = 50005;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//typedef long long ll;
//struct edge{
//    int x_from,y_from,x_to,y_to;
//    ll weight;
//    bool operator<(const edge& e)const{
//        return this->weight < e.weight;
//    }
//};
//
//
//int n,m,mX_from,mY_from,mX_to,mY_to;
//ll mW = -INF;
////
////ll cof[maxN][maxN];
////int dis[maxN][maxN];
////int vis[maxN][maxN];
//
//priority_queue<edge> q;
//
//ll Prim(vector<vector<ll>>& cof,vector<vector<ll>>& dis,vector<vector<int>> vis){
//    int cnt = 2;
//    vis[mX_from][mY_from] = 1;
//    vis[mX_to][mY_to] = 1;
//    ll sum = mW;
//    //up
//    if (mX_from-1>=1){
//        ll weight = cof[mX_from][mY_from] * cof[mX_from-1][mY_from];
//        if (weight>dis[mX_from-1][mY_from]){
//            dis[mX_from-1][mY_from] = weight;
//            q.push({mX_from,mY_from,mX_from-1,mY_from,dis[mX_from-1][mY_from]});
//        }
//    }
//    //down
//    if (mX_from+1<=n){
//        ll weight = cof[mX_from][mY_from] * cof[mX_from+1][mY_from];
//        if (weight>dis[mX_from+1][mY_from]){
//            dis[mX_from+1][mY_from] = weight;
//            q.push({mX_from,mY_from,mX_from+1,mY_from,dis[mX_from+1][mY_from]});
//        }
//    }
//    //left
//    if (mY_from-1>=1){
//        ll weight = cof[mX_from][mY_from] * cof[mX_from][mY_from-1];
//        if (weight>dis[mX_from][mY_from-1]){
//            dis[mX_from][mY_from-1] = weight;
//            q.push({mX_from,mY_from,mX_from,mY_from-1,dis[mX_from][mY_from-1]});
//        }
//    }
//    //right
//    if (mY_from+1<=m){
//        ll weight = cof[mX_from][mY_from] * cof[mX_from][mY_from+1];
//        if (weight>dis[mX_from][mY_from+1]){
//            dis[mX_from][mY_from+1] = weight;
//            q.push({mX_from,mY_from,mX_from,mY_from+1,dis[mX_from][mY_from+1]});
//        }
//    }
//
//    //up
//    if (mX_to-1>=1){
//        ll weight = cof[mX_to][mY_to] * cof[mX_to-1][mY_to];
//        if (weight>dis[mX_to-1][mY_to]){
//            dis[mX_to-1][mY_to] = weight;
//            q.push({mX_to,mY_to,mX_to-1,mY_to,dis[mX_to-1][mY_to]});
//        }
//    }
//    //down
//    if (mX_to+1<=n){
//        ll weight = cof[mX_to][mY_to] * cof[mX_to+1][mY_to];
//        if (weight>dis[mX_to+1][mY_to]){
//            dis[mX_to+1][mY_to] = weight;
//            q.push({mX_to,mY_to,mX_to+1,mY_to,dis[mX_to+1][mY_to]});
//        }
//    }
//    //left
//    if (mY_to-1>=1){
//        ll weight = cof[mX_to][mY_to] * cof[mX_to][mY_to-1];
//        if (weight>dis[mX_to][mY_to-1]){
//            dis[mX_to][mY_to-1] = weight;
//            q.push({mX_to,mY_to,mX_to,mY_to-1,dis[mX_to][mY_to-1]});
//        }
//    }
//    //right
//    if (mY_to+1<=m){
//        ll weight = cof[mX_to][mY_to] * cof[mX_to][mY_to+1];
//        if (weight>dis[mX_to][mY_to+1]){
//            dis[mX_to][mY_to+1] = weight;
//            q.push({mX_to,mY_to,mX_to,mY_to+1,dis[mX_to][mY_to+1]});
//        }
//    }
//
//    while (!q.empty()&&cnt<n*m){
//        edge e = q.top();q.pop();
//        int x1 = e.x_from,y1 = e.y_from;
//        int x2 = e.x_to,y2 = e.y_to;
//        if (vis[x1][y1] && vis[x2][y2]){
//            continue;
//        }
//        int x_f,y_f,x_t,y_t;
//        if (vis[x1][y1] && !vis[x2][y2]){
//            x_f = x1;
//            y_f = y1;
//            x_t = x2;
//            y_t = y2;
//        }
//        if (!vis[x1][y1] && vis[x2][y2]){
//            x_f = x2;
//            y_f = y2;
//            x_t = x1;
//            y_t = y1;
//        }
//
//        vis[x_t][y_t] = 1;
//        cnt++;
//        sum+=dis[x_t][y_t];
//        //up
//        if (x_t-1>=1 && !vis[x_t-1][y_t]){
//            ll weight = cof[x_t][y_t] * cof[x_t-1][y_t];
//            if (weight>dis[x_t-1][y_t]){
//                dis[x_t-1][y_t] = weight;
//                q.push({x_t,y_t,x_t-1,y_t,dis[x_t-1][y_t]});
//            }
//        }
//        //down
//        if (x_t+1<=n && !vis[x_t+1][y_t]){
//            ll weight = cof[x_t][y_t] * cof[x_t+1][y_t];
//            if (weight>dis[x_t+1][y_t]){
//                dis[x_t+1][y_t] = weight;
//                q.push({x_t,y_t,x_t+1,y_t,dis[x_t+1][y_t]});
//            }
//        }
//        //left
//        if (y_t-1>=1 && !vis[x_t][y_t-1]){
//            ll weight = cof[x_t][y_t] * cof[x_t][y_t-1];
//            if (weight>dis[x_t][y_t-1]){
//                dis[x_t][y_t-1] = weight;
//                q.push({x_t,y_t,x_t,y_t-1,dis[x_t][y_t-1]});
//            }
//        }
//        //right
//        if (y_t+1<=m && !vis[x_t][y_t+1]){
//            ll weight = cof[x_t][y_t] * cof[x_t][y_t+1];
//            if (weight>dis[x_t][y_t+1]){
//                dis[x_t][y_t+1] = weight;
//                q.push({x_t,y_t,x_t,y_t+1,dis[x_t][y_t+1]});
//            }
//        }
//    }
//    return sum;
//}
//
//
//
//
//
//int main(){
//    fio
//    cin>>n>>m;
//    vector<vector<ll>> cof(n+1);
//    vector<vector<ll>> dis(n+1);
//    vector<vector<int>> vis(n+1);
//    for (int i = 0; i <= n; ++i) {
//        cof[i].resize(m+1,0);
//        dis[i].resize(m+1,-INF);
//        vis[i].resize(m+1,0);
//    }
//    for (int i = 1; i <= n ; ++i) {
//        for (int j = 1; j <= m ; ++j) {
//            cin>>cof[i][j];
//        }
//    }
//    for (int i = 1; i <= n ; ++i) {
//        for (int j = 1; j <= m - 1; ++j) {
//            if (cof[i][j] * cof[i][j + 1] > mW) {
//                mX_from = i;
//                mY_from = j;
//                mX_to = i;
//                mY_to = j+1;
//                mW = cof[i][j] * cof[i][j + 1];
//            }
//        }
//    }
//    for (int j = 1; j <= m ; ++j) {
//        for (int i = 1; i <= n-1 ; ++i) {
//            if (cof[i][j] * cof[i+1][j] > mW) {
//                mX_from = i;
//                mY_from = j;
//                mX_to = i+1;
//                mY_to = j;
//                mW = cof[i][j] * cof[i+1][j];
//            }
//        }
//    }
//
//    cout<<Prim(cof,dis,vis)<<endl;
//
//
//    return 0;
//}