////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//#pragma GCC optimize(2)
//
//struct node{
//    vector<node*> v_sons;
//    int size;
//    int depth;
//    bool visited;
//    int max_depth;
//    node(){
//        visited = 0;
//        max_depth = 0;
//    }
//};
//
//node* root;
//
//void dfs_init_depth(node* root,int depth){
//    if (root == NULL) return;
//    root->visited = true;
//    root->depth = depth;
//    for(node* x:root->v_sons){
//        if (!x->visited){
//            dfs_init_depth(x,depth+1);
//        }
//    }
//}
//
//int dfs_init_size(node* root){
//    if (root == nullptr) return 0;
//    root->visited = true;
//    int sons = 0;
//    for(node* nd:root->v_sons){
//        if (!nd->visited){
//            sons+=dfs_init_size(nd);
//        }
//    }
//    root->size = sons+1;
//    return root->size;
//}
//
//int dfs_init_maxDepth(node* root){
//    if (root== nullptr){
//        return 0;
//    }
//    root->visited = true;
//    int maxDepth = 0;
//    for(node* x:root->v_sons){
//        if (!x->visited){
//            dfs_init_maxDepth(x);
//            maxDepth = max(x->max_depth,maxDepth);
//        }
//    }
//    root->max_depth = maxDepth;
//    return maxDepth;
//}
//
//bool cmp(node* a,node* b){
//    return a->size == b->size? a->size<b->size : a->max_depth>b->max_depth;
////    return a->size<b->size;
//}
//
//
//node* get_ans(node* nd,int& ans){
//    if (nd!=root) ans+=1;
//    if (nd!=root && nd->v_sons.size()==1){
//        return nd;
//    }
//    sort(nd->v_sons.begin(),nd->v_sons.end(),cmp);
//    node* maxDep = nullptr;
//    int size = nd == root? nd->v_sons.size():nd->v_sons.size()-1;
//    for (int i = 0; i < size;++i) {
//        maxDep = get_ans(nd->v_sons[i],ans);
//        if (i != size-1){
//            ans+=min(nd->depth,maxDep->depth-nd->depth);
//        }
//    }
//    return maxDep;
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t,n,ans,x;
//
//    cin>>t;
//    while (t--){
//        ans = 0;
//        cin>>n;
//        node* arr[n+1];
//        arr[0] = nullptr;
//        for(int i = 1;i<=n;i++){
//            arr[i]=new node();
//        }
//        for (int i = 2; i <= n; ++i) {
//            cin>>x;
//            arr[x]->v_sons.push_back(arr[i]);
//            arr[i]->v_sons.push_back(arr[x]);
//        }
//        root = arr[1];
//        dfs_init_size(root);
//        for (int i = 1; i <=n; ++i) {
//            arr[i]->visited = false;
//        }
//        dfs_init_depth(root,0);
//        for (int i = 1; i <=n; ++i) {
//            arr[i]->visited = false;
//        }
//        dfs_init_maxDepth(root);
//        get_ans(root,ans);
//        cout<<ans;
//
//        if (t) cout<<endl;
//    }
//
//    return 0;
//}