////
//// Created by Boyan on 2020/11/17.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct node{
//    vector<node*> children;
//    int val;
//    node(){}
//    node(int val){
//        this->val=val;
//    }
//};
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t,n,x;
//    cin>>t;
//    while (t--){
//        cin>>n;
//        node* nodes[n+1];
//        for (int i = 1; i <=n ; ++i) {
//            nodes[i]=new node(i);
//        }
//        for (int i = 1; i <= n-1; ++i) {
//            cin>>x;
//            nodes[x]->children.push_back(nodes[i+1]);
//        }
//
//        queue<node*> q;
//        q.push(nodes[1]);
//        node* temp= nullptr;
//        while (!q.empty()){
//            int q_size = q.size();
//            for (int i = 0; i < q_size; ++i) {
//                temp = q.front();q.pop();
//                cout<<temp->val<<" ";
//                for(node* n : temp->children){
//                    q.push(n);
//                }
//            }
//        }
//
//
//        if (t) cout<<endl;
//    }
//
//
//    return 0;
//}