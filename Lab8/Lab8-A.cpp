////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct node{
//    int val;
//    node* left;
//    node* right;
//    node* par;
//    node(){
//        val = -1;
//        left = nullptr;
//        right = nullptr;
//        par = nullptr;
//    }
//};
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t,n,value,x,y,cnt=1;
//    cin>>t;
//    while (t--){
//        cin>>n;
//        node* arr[n+1];
//        for (int i = 1; i <= n; ++i) {
//            cin>>value;
//            arr[i] = new node();
//            arr[i]->val = value;
//        }
//        bool flag = true;
//        for (int i = 1; i <= n-1 ; ++i) {
//            cin>>x>>y;
//            if (arr[x]->left == nullptr){
//                arr[x]->left = arr[y];
//            } else if(arr[x]->right == nullptr){
//                arr[x]->right = arr[y];
//            } else{
//                flag = false;
//                break;
//            }
//            arr[y]->par = arr[x];
//        }
//        if (!flag){
//            cout<<"Case #"<<cnt<<": NO";
//            cnt++;
//            if (t) cout<<endl;
//            continue;
//        }
//        node* root = nullptr;
//        for (int i = 1; i <= n ; ++i) {
//            if (arr[i]->par == nullptr){
//                root = arr[i];
//                break;
//            }
//        }
//        queue<node*> q;
//        q.push(root);
//
//        node* nd;
//        while (!q.empty()){
//            if (q.front() == nullptr){
//                break;
//            }
//            nd = q.front();q.pop();
//            q.push(nd->left);
//            q.push(nd->right);
//        }
//        while (!q.empty()){
//            nd = q.front();q.pop();
//            if (nd != nullptr){
//                flag = false;
//                break;
//            }
//        }
//        if (!flag){
//            cout<<"Case #"<<cnt<<": NO";
//            cnt++;
//            if (t) cout<<endl;
//            continue;
//        }
//
//        while (!q.empty())q.pop();
//
//        q.push(root);
//        if (n == 1) {
//            cout<<"Case #"<<cnt<<": YES";
//            cnt++;
//            if (t) cout<<endl;
//            continue;
//        }
//        int cmp;
//        while (!q.empty()){
//            nd = q.front();q.pop();
//            if (nd->left!= nullptr){
//                q.push(nd->left);
//                if (nd->val != nd->left->val){
//                    cmp = nd->val > nd->left->val? 1:2;
//                    break;
//                }
//            }
//            if (nd->right!= nullptr){
//                q.push(nd->right);
//                if (nd->val != nd->right->val){
//                    cmp = nd->val > nd->left->val? 1:2;
//                    break;
//                }
//            }
//        }
//
//        while (!q.empty())q.pop();
//
//        q.push(root);
//        while (!q.empty()){
//            nd = q.front();q.pop();
//            if (nd->left!= nullptr){
//                q.push(nd->left);
//                if ((cmp == 1 && nd->val < nd->left->val) || (cmp == 2 && nd->val > nd->left->val)){
//                    flag = false;
//                    break;
//                }
//            }
//            if (nd->right!= nullptr){
//                q.push(nd->right);
//                if ((cmp == 1 && nd->val < nd->right->val) || (cmp == 2 && nd->val > nd->right->val)){
//                    flag = false;
//                    break;
//                }
//            }
//        }
//
//        if (flag){
//            cout<<"Case #"<<cnt<<": YES";
//        } else{
//            cout<<"Case #"<<cnt<<": NO";
//        }
//        cnt++;
//
//        if (t) cout<<endl;
//    }
//
//
//    return 0;
//}