////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//using namespace std;
//template <class T>
//class AVL{
//
//public:
//
//    AVL(){
//        root = nullptr;
//        size = 0;
//    }
//
//    int get_Size(){
//        return this->size;
//    }
//
//    bool isEmpty(){
//        return !this->size;
//    }
//
//    bool isBalanced(){
//        return isBalanced(root);
//    }
//
//    void add(T key){
//        root = add(root,key);
//    }
//
//    void remove(T key){
//        root = remove(root,key);
//    }
//
//    void check(){
//        print_Check(root);
//    }
//
//    T get_Predecessor(T key){
//        Node* pre = nullptr;
//        get_Predecessor(root,key,pre);
//        if (pre == nullptr){
//            //根据T的类型自行修改
//            return -1e+10;
//        } else{
//            return pre->key;
//        }
//    }
//
//    T get_Successor(T key){
//        Node* suc = nullptr;
//        get_Successor(root,key,suc);
//        if (suc == nullptr){
//            //根据T的类型自行修改
//            return 1e+10;
//        } else{
//            return suc->key;
//        }
//    }
//
//    T find_Kth(int k){
//        return find_Kth(root,k);
//    }
//
//
//
//private:
//    class Node{
//    public:
//        T key;
//        Node* left;
//        Node* right;
//        int height;
//        int sub_size;
//        int cnt;
//
//        Node(T key){
//            this->key = key;
//            this->left = nullptr;
//            this->right = nullptr;
//            this->height = 1;
//            this->sub_size = 1;
//            this->cnt = 1;
//        }
//
//        int get_sub_size(Node* node){
//            if (node == nullptr){
//                return 0;
//            }else{
//                return node->sub_size;
//            }
//        }
//
//        void maintain_sub_size(){
//            this->sub_size = get_sub_size(this->left)+get_sub_size(this->right)+this->cnt;
//        }
//    };
//
//    Node* root;
//    int size;
//
//    int get_node_sub_size(Node* node){
//        if (node == nullptr){
//            return 0;
//        }else{
//            return node->sub_size;
//        }
//    }
//
//    int get_Height(Node* node){
//        if (node == nullptr){
//            return 0;
//        } else{
//            return node->height;
//        }
//    }
//
//    void get_Predecessor(Node* node,T key,Node*& pre){
//        if (node == nullptr){
//            return;
//        }
//        if (node->key < key){
//            pre = node;
//            get_Predecessor(node->right,key,pre);
//        } else{
//            get_Predecessor(node->left,key,pre);
//        }
//    }
//
//    void get_Successor(Node* node,T key,Node*& suc){
//        if (node == nullptr){
//            return;
//        }
//        if (node->key > key){
//            suc = node;
//            get_Successor(node->left,key,suc);
//        } else{
//            get_Successor(node->right,key,suc);
//        }
//    }
//
//
//
//    int get_Balance_Factor(Node* node){
//        if (node == nullptr){
//            return 0;
//        } else{
//            return get_Height(node->left)-get_Height(node->right);
//        }
//    }
//
//    bool isBalanced(Node* node){
//        if (node == nullptr){
//            return true;
//        }
//        int bf = abs(get_Balance_Factor(node));
//        if (bf>1) return false;
//        return isBalanced(node->left)&&isBalanced(node->right);
//    }
//
//    Node* rightRotate(Node* b){
//        Node* a = b->left;
//        Node* temp = a->right;
//        a->right = b;
//        b->left = temp;
//
//        b->height = max(get_Height(b->left),get_Height(b->right))+1;
//        a->height = max(get_Height(a->left),get_Height(a->right))+1;
//        //先维护下面相对下面的节点，在维护上面的节点
//        b->maintain_sub_size();
//        a->maintain_sub_size();
//        return a;
//    }
//
//    Node* leftRotate(Node* b){
//        Node* a = b->right;
//        Node* temp = a->left;
//        a->left = b;
//        b->right = temp;
//        b->height = max(get_Height(b->left),get_Height(b->right))+1;
//        a->height = max(get_Height(a->left),get_Height(a->right))+1;
//        //先维护下面相对下面的节点，在维护上面的节点
//        b->maintain_sub_size();
//        a->maintain_sub_size();
//        return a;
//    }
//
//    //返回以node为根的树插入完新节点后的这部分树的树根
//    Node* add(Node* node,T key){
//        if (node == nullptr){
//            size++;
//            return new Node(key);
//        }
//        if (node->key == key){
//            node->cnt++;
//            node->maintain_sub_size();
//            return node;
//        }
//        if (node->key > key){
//            node->left = add(node->left,key);
//        } else if (node->key < key){
//            node->right = add(node->right,key);
//        }
//
//        node->height = max(get_Height(node->left),get_Height(node->right))+1;
//        node->maintain_sub_size();
//
//        int bf = get_Balance_Factor(node);
//        if (bf >1 && get_Balance_Factor(node->left)>0){
//            //LL
//            return rightRotate(node);
//        }
//        if (bf <-1 && get_Balance_Factor(node->right)<0){
//            //RR
//            return leftRotate(node);
//        }
//        if (bf >1 && get_Balance_Factor(node->left)<0){
//            //LR
//            node->left = leftRotate(node->left);
//            return rightRotate(node);
//        }
//        if (bf <-1 && get_Balance_Factor(node->right)>0){
//            //RL
//            node->right = rightRotate(node->right);
//            return leftRotate(node);
//        }
//
//        //当前以node为根的节点是平衡的，直接返回当前树的树根node
//        return node;
//    }
//
//    Node* get_MinNode(Node* node){
//        if (node->left == nullptr){
//            return node;
//        } else{
//            return get_MinNode(node->left);
//        }
//    }
//
//    Node* remove(Node* node,T key){
//        if (node == nullptr){
//            return nullptr;
//        }
//        Node* new_root= nullptr;//代表删除完后的当前树的树根
//        //与BST的删除方法相同
//        if (node->key>key){
//            node->left = remove(node->left,key);
//            new_root = node;
//        } else if (node->key < key){
//            node->right = remove(node->right,key);
//            new_root = node;
//        } else{
//
//            if (node->cnt>1){
//                node->cnt--;
//                node->maintain_sub_size();
//                return node;
//            }
//
//            if (node->left == nullptr){
//                Node* right = node->right;
//                node->right = nullptr;
//                size--;
//                new_root = right;
//            } else if (node->right == nullptr){
//                Node* left = node->left;
//                node->left = nullptr;
//                size--;
//                new_root = left;
//            } else{
//                Node* minNode = get_MinNode(node->right);
//                //remove方法也顺带维护了node右子树的每个节点的平衡
//                minNode->right = remove(node->right,minNode->key);
//                minNode->left = node->left;
//                node->left = node->right = nullptr;
//
//                new_root = minNode;
//            }
//        }
//
//        if (new_root== nullptr){
//            return nullptr;
//        }
//        new_root->height = max(get_Height(new_root->left),get_Height(new_root->right))+1;
//        new_root->maintain_sub_size();
//
//        int bf = get_Balance_Factor(new_root);
//        if (bf >1 && get_Balance_Factor(new_root->left)>=0){
//            return rightRotate(new_root);
//        }
//        if (bf < -1 && get_Balance_Factor(new_root->right)<=0){
//            return leftRotate(new_root);
//        }
//        if (bf >1 && get_Balance_Factor(new_root->left)<0){
//            new_root->left = leftRotate(new_root->left);
//            return rightRotate(new_root);
//        }
//        if (bf < -1 && get_Balance_Factor(new_root->right)>0){
//            new_root->right = rightRotate(new_root->right);
//            return leftRotate(new_root);
//        }
//        return new_root;
//    }
//
//    //inorder
//    void print_Check(Node* node){
//        if (node == nullptr){
//            return;
//        }
//        print_Check(node->left);
//        cout<<node->key<<" ";
//        print_Check(node->right);
//    }
//
//    T find_Kth(Node* node,int k){
//        if (node == nullptr || k<1 || k>node->sub_size){
//            return 0;
//        }
//        if (k<get_node_sub_size(node->left)+1){
//            return find_Kth(node->left,k);
//        } else if (k>get_node_sub_size(node->left)+node->cnt){
//            return find_Kth(node->right,k - get_node_sub_size(node->left) - node->cnt);
//        }
//        return node->key;
//    }
//};
//
//int main(){
//    int m,k;
//    cin>>m>>k;
//    int arr[m];
//    AVL<int> T;
//    for (int i = 0; i < m; ++i) {
//        cin>>arr[i];
//    }
//    for (int i = 0; i < k; ++i) {
//        T.add(arr[i]);
//    }
//    int kth;
//    for (int i = 0; i < m-k+1; ++i) {
//        cin>>kth;
//        cout<<T.find_Kth(kth)<<endl;
//        T.remove(arr[i]);
//        if (i == m-k){
//            break;
//        }
//        T.add(arr[k+i]);
//    }
//
//
//    return 0;
//}