////
//// Created by Boyan on 2020/12/8.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//struct node{
//    int visit;
//    vector<node*> near;
//    node(){
//        visit = 0;
//    }
//};
//
//bool hasCycle = false;
//
//void dfs(node* node){
//    if (node == nullptr) return;
//    node->visit = 1;
//    for (int i = 0; i < node->near.size(); ++i) {
//        if (node->near[i]->visit == 0){
//            dfs(node->near[i]);
//        } else if (node->near[i]->visit == 1){
//            hasCycle = true;
//        }
//    }
//    node->visit = 2;
//}
//
//
//int main(){
//    fio
//    int n,m,u,v;
//    cin>>n>>m;
//    node* nodes[n+1];
//    for (int i = 1; i <= n ; ++i) {
//        nodes[i] = new node();
//    }
//    for (int i = 0; i < m; ++i) {
//        cin>>u>>v;
//        if (u == v) hasCycle = true;
//        nodes[u]->near.push_back(nodes[v]);
//        nodes[v]->near.push_back(nodes[u]);
//    }
//    if (hasCycle){
//        cout<<"Bad"<<endl;
//    } else
//    {
//        dfs(nodes[1]);
//        if (hasCycle){
//            cout<<"Bad"<<endl;
//        } else{
//            for (int i = 1; i <= n ; ++i) {
//                if (nodes[i]->visit == 0){
//                    dfs(nodes[i]);
//                }
//                if (hasCycle){
//                    break;
//                }
//            }
//            if (hasCycle){
//                cout<<"Bad"<<endl;
//            } else{
//                cout<<"Good"<<endl;
//            }
//        }
//    }
//
//
//    return 0;
//}