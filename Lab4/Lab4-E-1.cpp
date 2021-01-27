////
//// Created by Boyan on 2020/10/15.
////
//
//#include <iostream>
//using namespace std;
//typedef long long ll;
//
//
//struct node{
//    ll val;
//    node* next;
//    node* last;
//    node(ll val){
//        this->val = val;
//        next= nullptr;
//        last= nullptr;
//    }
//};
//
//
//int main(){
//    int T;
//    ll n;
//    scanf("%d",&T);
//    while (T--){
//        scanf("%d",&n);
//        node* root= new node(-1);
//        node* pos = root;
//        ll temp;
//        for (int k = 0; k < n; ++k) {
//            scanf("%d",&temp);
//            pos->next = new node(temp);
//            pos->next->last = pos;
//            pos = pos->next;
//        }
//
//        pos = root->next;
//
//        while (pos!= nullptr){
//            cout<<pos->val<<" ";
//        }
//
//
//
//        if (T){
//            printf("\n");
//        }
//    }
//
//
//
//    return 0;
//}