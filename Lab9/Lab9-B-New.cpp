////
//// Created by Boyan on 2020/12/8.
////
//
//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//struct node{
//    int degree;
//    bool visited;
//    vector<node*> near;
//    node(){
//        degree = 0;
//        visited = false;
//    }
//};
//
//int main(){
//    int n,m,u,v;
//    cin>>n>>m;
//    node* nodes[n+1];
//    for (int i = 1; i <= n ; ++i) {
//        nodes[i] = new node();
//    }
//    bool hasCycle = false;
//    for (int i = 0; i < m; ++i) {
//        cin>>u>>v;
//        nodes[u]->near.push_back(nodes[v]);
//        nodes[v]->near.push_back(nodes[u]);
//        nodes[u]->degree++;
//        nodes[v]->degree++;
//        if (u == v){
//            hasCycle = true;
//        }
//    }
//    if (hasCycle){
//        cout<<"Bad"<<endl;
//    } else{
//        queue<node*> q;
//        int cnt = 0;
//        for (int i = 1; i <= n ; ++i) {
//            if (nodes[i]->degree<=1){
//                q.push(nodes[i]);
//                nodes[i]->visited = true;
//                cnt++;
//            }
//        }
//        while (!q.empty()){
//            node* nd = q.front();q.pop();
//            for (int i = 0; i < nd->near.size(); ++i) {
//                nd->near[i]->degree--;
//                if (nd->near[i]->degree == 1 && !nd->near[i]->visited){
//                    q.push(nd->near[i]);
//                    cnt++;
//                    nd->near[i]->visited = true;
//                }
//            }
//        }
//        if (cnt == n){
//            cout<<"Good"<<endl;
//        } else{
//            cout<<"Bad"<<endl;
//        }
//    }
//
//
//
//    return 0;
//}