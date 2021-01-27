////
//// Created by Boyan on 2020/11/17.
////
//
//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//struct node{
//    vector<node*> children;
//    bool flag;
//    int val;
//    node(int v){
//        this->val = v;
//        this->flag = false;
//    }
//};
//
//void getDeepNode(node* root,bool visited[],int dis,node*& DeepNode,int& maxDis){
//    if (DeepNode== nullptr && root->flag==true){
//        DeepNode = root;
//    }
//    if (root->flag==true && dis>maxDis){
//        DeepNode = root;
//        maxDis = dis;
//    }
//    visited[root->val]=1;
//    vector<node*>& v = root->children;
//    for (int i = 0; i < v.size(); ++i) {
//        if (!visited[v[i]->val]){
//            getDeepNode(v[i],visited,dis+1,DeepNode,maxDis);
//        }
//    }
//}
//
//
//int main(){
//    int t,n,k;
//    cin>>t;
//    while (t--){
//        cin>>n>>k;
//        node* nodes[n+1];
//        for (int i = 1; i <= n; ++i) {
//            nodes[i]=new node(i);
//        }
//        int a,b;
//        for (int i = 0; i < n-1; ++i) {
//            cin>>a>>b;
//            nodes[a]->children.push_back(nodes[b]);
//            nodes[b]->children.push_back(nodes[a]);
//        }
//        for (int i = 0; i < k; ++i) {
//            cin>>a;
//            nodes[a]->flag=true;
//        }
//        bool visited[n+1];
//        memset(visited,0,sizeof(visited));
//        int maxDis = 0;
//        node* DeepNode = nullptr;
//        getDeepNode(nodes[1],visited,0,DeepNode,maxDis);
//        node* temp = DeepNode;
//        DeepNode = nullptr;
//        memset(visited,0,sizeof(visited));
//        maxDis = 0;
//        getDeepNode(temp,visited,0,DeepNode,maxDis);
//        int ans =  maxDis%2==0? maxDis/2:maxDis/2+1;
//        cout<<ans;
//        if (t) cout<<endl;
//    }
//
//
//    return 0;
//}