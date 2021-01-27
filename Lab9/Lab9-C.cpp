////
//// Created by Boyan on 2020/12/8.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//struct node{
//    int val;
//    int inDegree;
//    vector<int> toNodes;
//    node(){
//        inDegree = 0;
//    }
//    bool operator< (const node& other)const{
//        return this->val > other.val;
//    }
//};
//
//
//
//int main(){
//    fio
//    priority_queue<node> q;
//    int n,m,a,b;
//    cin>>n>>m;
//    node nodes[n+1];
//    for (int i = 1; i <= n ; ++i) {
//        nodes[i].val = i;
//    }
//    for (int i = 0; i < m; ++i) {
//        cin>>a>>b;
//        nodes[a].toNodes.push_back(b);
//        nodes[b].inDegree++;
//    }
//    for (int i = 1; i <=n ; ++i) {
//        if (nodes[i].inDegree == 0){
//            q.push(nodes[i]);
//        }
//    }
//    vector<int> result;
//    while (!q.empty()){
//        node nd = q.top();q.pop();
//        result.push_back(nd.val);
//        vector<int>& v = nd.toNodes;
//        for (int x:v) {
//            nodes[x].inDegree--;
//            if (nodes[x].inDegree == 0){
//                q.push(nodes[x]);
//            }
//        }
//    }
//    for (int i = 0; i<result.size(); i++) {
//        cout<<result[i]<<" ";
//    }
//
//
//    return 0;
//}