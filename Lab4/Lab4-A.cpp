////
//// Created by Boyan on 2020/10/13.
////
//
//#include <iostream>
//using namespace std;
//typedef long long ll;
//struct list{
//    ll id;
//    list* next;
//    list* last;
//    list(int id){
//        this->id=id;
//        next = NULL;
//        last = NULL;
//    }
//};
//
//
//
//int main(){
//    ll T,n,k;
//    cin>>T;
//    while (T--){
//        cin>>n>>k;
//        ll id = 1;
//        list* root = new list(id++);
//        list* node = root;
//        list* lastNode;
//        for (ll i = 0; i < n-1; ++i) {
//            node->next = new list(id++);
//            lastNode = node;
//            node = node->next;
//            node->last = lastNode;
//        }
//        node->next = root;
//        root->last = node;
//        ll num = 0;
//        list* start = new list(0);
//        start->next = root;
//        while (num<n){
//            for (int i = 0; i < k; ++i) {
//                start = start->next;
//            }
//            cout<<start->id;
//            start->last->next=start->next;
//            start->next->last=start->last;
//            if (num!=n-1) cout<<" ";
//            num++;
//        }
//
//        if (T){
//            cout<<endl;
//        }
//    }
//
//    return 0;
//}