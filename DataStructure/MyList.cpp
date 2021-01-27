//
// Created by Boyan on 2020/10/9.
//
#include <iostream>
using namespace std;
template <class T>
class Node{
public:
    T val;
    Node<T>* next;
    Node(){val = -1;next = NULL;}
    Node(T value):val(value),next(NULL){}
};

template <typename T>
void traversal(Node<T>* root){
    while (root != NULL){
        cout<<root->val<<" ";
        root = root->next;
    }
    cout<<endl;
}

template <typename T>
Node<T>* insertNode(Node<T>* root,Node<T>* target, int pos){
    int index = 0;
    if(pos == 0){
        target->next = root;
        return target;
    }
    Node<T>* node = root;
    while (index<pos-1){
        node = node->next;
        index++;
    }
    if(node == NULL){
        //pos is invalid
        cout<<"insert Error"<<endl;
    }else{
        target->next = node->next;
        node->next = target;
    }
    return root;
}

template <typename T>
Node<T>* deleteNodeByVal(Node<T>* root,int value){
    if(root->val == value){
        return root->next;
    }
    Node<T>* node = root;
    while (node!=NULL &&node->next!=NULL && node->next->val != value){
        node=node->next;
    }


    if(node!=NULL&&node->next!=NULL){
        node->next = node->next->next;
    }else {
        // not find target value
        cout<<"Delete Error"<<endl;
    }
    return root;

}

template <typename T>
Node<T>* deleteNodeByPos(Node<T>* root,int pos){
    if(pos == 0){
        return root->next;
    }
    Node<T>* node = root;

    int index = 0;
    while(index < pos -1){
        node = node->next;
        index++;
    }
    if(node->next!=NULL){
        node->next = node->next->next;
    }else{
        cout<<"Delete Error"<<endl;
    }


    return root;

}

