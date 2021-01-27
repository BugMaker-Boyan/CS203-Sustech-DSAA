////
//// Created by Boyan on 2020/11/17.
////
//
//#include <iostream>
//using namespace std;
//int pre_index;
//struct node{
//    node* left;
//    node* right;
//    int val;
//    node(int val){
//        this->val = val;
//        this->left = nullptr;
//        this->right = nullptr;
//    }
//};
//
//node* build(int in_left,int in_right,int preOrder[],int inOrder[],int inOrder_pos[]){
//    if (in_left>in_right) return nullptr;
//    int root_val = preOrder[pre_index];
//    node* root = new node(root_val);
//    int root_index = inOrder_pos[root_val];
//    pre_index++;
//    root->left = build(in_left,root_index-1,preOrder,inOrder,inOrder_pos);
//    root->right = build(root_index+1,in_right,preOrder,inOrder,inOrder_pos);
//    return root;
//}
//
//void postOrder(node* node){
//    if (node->left!= nullptr) postOrder(node->left);
//    if (node->right!= nullptr) postOrder(node->right);
//    cout<<node->val<<" ";
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t,n;
//    cin>>t;
//    while (t--){
//        cin>>n;
//        int preOrder[n];
//        int inOrder[n];
//        int inOrder_pos[n+1];
//        for (int i = 0; i < n; ++i) {
//            cin>>preOrder[i];
//        }
//        for (int i = 0; i < n; ++i) {
//            cin>>inOrder[i];
//            inOrder_pos[inOrder[i]]=i;
//        }
//        pre_index = 0;
//        node* root = build(0,n-1,preOrder,inOrder,inOrder_pos);
//        postOrder(root);
//
//
//
//        if (t) cout<<endl;
//    }
//
//
//
//    return 0;
//}