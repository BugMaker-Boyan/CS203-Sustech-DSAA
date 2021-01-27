//
// Created by Boyan on 2020/11/26.
//

#include <bits/stdc++.h>
using namespace std;

template <class T>
class BST{
private:
    class Node{
    public:
        T val;
        Node* left;
        Node* right;

        Node(T value){
            this->val = value;
            this->left = nullptr;
            this->right = nullptr;
        }
    };

    Node* root;
    int size;

public:
    BST(){
        root = nullptr;
        size = 0;
    }
    int get_size(){
        return this->size;
    }
    bool isEmpty(){
        return !this->size;
    }

    void add(T val){
        if (root== nullptr){
            root = new Node(val);
            size++;
        } else{
            add_node(root,val);
        }
    }




    bool contains(T val){
        return contains(root,val);
    }

    T min(){
        return get_Min(root);
    }

    T max(){
        return get_Max(root);
    }

    T removeMin(){
        T minVal = min();
        root = removeMin(root);
        return minVal;
    }

    T removeMax(){
        T maxVal = max();
        root = removeMax(root);
        return maxVal;
    }

    void remove(T val){
        root = remove(root,val);
    }

    void check(){
        print_Check(root);
    }

    T get_Predecessor(T key){
        Node* pre = nullptr;
        get_Predecessor(root,key,pre);
        if (pre == nullptr){
            //根据T的类型自行修改
            return -1;
        } else{
            return pre->val;
        }
    }

    T get_Successor(T key){
        Node* suc = nullptr;
        get_Successor(root,key,suc);
        if (suc == nullptr){
            //根据T的类型自行修改
            return -1;
        } else{
            return suc->val;
        }
    }






private:
    void add_node(Node* node,T val){
        if (node->val == val){
            return;
        } else if (node->val>val && node->left == nullptr){
            node->left = new Node(val);
            this->size++;
            return;
        } else if (node->val<val && node->right == nullptr){
            node->right = new Node(val);
            this->size++;
            return;
        }
        if (node->val>val && node->left != nullptr){
            add_node(node->left,val);
        } else if (node->val<val && node->right != nullptr){
            add_node(node->right,val);
        }
    }

    T get_Min(Node* node){
        if(node->left == nullptr){
            return node->val;
        } else{
            return get_Min(node->left);
        }
    }

    T get_Max(Node* node){
        if (node->right == nullptr){
            return node->val;
        } else{
            return get_Max(node->right);
        }
    }

    bool contains(Node* node,T val){
        if (node == nullptr){
            return false;
        }
        if (node->val == val){
            return true;
        } else if (node->val > val){
            return contains(node->left,val);
        }else if (node->val < val){
            return contains(node->right,val);
        }
    }
    //返回以node为根的树删除完节点后的这部分树的树根
    Node* removeMin(Node* node){
        if (node->left == nullptr){
            Node* right = node->right;
            node->right = nullptr;
            size--;
            return right;
        }
        node->left = removeMin(node->left);
        return node;
    }
    //返回以node为根的树删除完节点后的这部分树的树根
    Node* removeMax(Node* node){
        if (node->right == nullptr){
            Node* left = node->left;
            node->left = nullptr;
            size--;
            return left;
        }

        node->right = removeMax(node->right);
        return node;
    }

    Node* get_MinNode(Node* node){
        if (node->left == nullptr){
            return node;
        } else{
            return get_MinNode(node->left);
        }
    }
    //返回以node为根的树删除完节点后的这部分树的树根
    Node* remove(Node* node, T val){
        if (node == nullptr){
            return nullptr;
        }
        if (node->val>val){
            node->left = remove(node->left,val);
            return node;
        } else if (node->val < val){
            node->right = remove(node->right,val);
            return node;
        }else{
            if (node->left == nullptr && node->right == nullptr){
                return nullptr;
            } else if (node->left == nullptr && node->right != nullptr){
                Node* right = node->right;
                node->right = nullptr;
                size--;
                return right;
            } else if (node->right == nullptr && node->left != nullptr){
                Node* left = node->left;
                node->left = nullptr;
                size--;
                return left;
            } else{
                Node* minNode = get_MinNode(node->right);
                minNode->right = removeMin(node->right);
                minNode->left = node->left;
                node->left=node->right= nullptr;
                size--;
                return minNode;
            }
        }
    }

    void print_Check(Node* node){
        if (node == nullptr){
            return;
        }
        print_Check(node->left);
        cout<<node->val<<" ";
        print_Check(node->right);

    }

    void get_Predecessor(Node* node,T key,Node*& pre){
        if (node == nullptr){
            return;
        }
        if (node->val == key){
            pre = node;
        } else if (node->val < key){
            pre = node;
            get_Predecessor(node->right,key,pre);
        } else{
            get_Predecessor(node->left,key,pre);
        }
    }

    void get_Successor(Node* node,T key,Node*& suc){
        if (node == nullptr){
            return;
        }
        if (node->val == key){
            suc = node;
        } else if (node->val > key){
            suc = node;
            get_Successor(node->left,key,suc);
        } else{
            get_Successor(node->right,key,suc);
        }
    }
};

//int main(){
//    BST<int> avl;
//    avl.add(1);
//    avl.add(5);
//    avl.add(0);
//    avl.add(11);
//    avl.add(9);
//    avl.add(8);
//    avl.add(111);
//    avl.check();
//    cout<<endl;
//
//    cout<<avl.get_Successor(1000)<<endl;
//    cout<<avl.get_Successor(100)<<endl;
//    cout<<avl.get_Successor(19)<<endl;
//    cout<<avl.get_Successor(10)<<endl;
//    cout<<avl.get_Successor(-1)<<endl;
//
//    return 0;
//}
