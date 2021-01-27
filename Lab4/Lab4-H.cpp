////
//// Created by Boyan on 2020/10/19.
////
//
//#include <iostream>
//using namespace std;
//
//long long n,m,p,x;
//char c;
//
//struct node{
//    long long val;
//    node* next;
//    node* last;
//    node(){}
//    node(long long val){
//        this->val = val;
//        this->next= nullptr;
//        this->last = nullptr;
//    }
//};
//
//
//int main(){
//    scanf("%d %d",&n,&m);
//
//    node* root = new node(-1);
//    node* end = new node(-1);
//    node* temp = root;
//    long long t;
//    for (long long i = 0; i < n; ++i) {
//        scanf("%d",&t);
//        temp->next = new node(t);
//        temp->next->last = temp;
//        temp = temp->next;
//    }
//    temp->next = end;
//    end->last = temp;
//
//    for (long long i = 0; i < m; ++i) {
//        cin>>c;
//        if (c == 'i'){
//            cin>>p>>x;
//            temp  = root;
//            t = 0;
//            while (t<p){
//                temp = temp->next;
//                t++;
//            }
//            node* new_node = new node(x);
//            temp->last->next = new_node;
//            new_node->last = temp->last;
//            temp->last = new_node;
//            new_node->next = temp;
//        }else if (c == 'r'){
//            cin>>p;
//            temp = root;
//            t = 0;
//            while (t<p){
//                temp = temp->next;
//                t++;
//            }
//            temp->last->next = temp->next;
//            temp->next->last = temp->last;
//            delete temp;
//        }else if (c == 'q'){
//            cin>>p;
//            temp = root;
//            t = 0;
//            while (t<p){
//                temp = temp->next;
//                t++;
//            }
//            printf("%d\n",temp->val);
//        }
//    }
//    return 0;
//}