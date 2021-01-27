////
//// Created by Boyan on 2020/10/21.
////
//
//#include <iostream>
//using namespace std;
//typedef long long ll;
//
//
//#define maxN 200010
//#define L 450
//
//ll t,n,order,pos;
//char ch,str[maxN];
//
//struct node{
//    char data[L];
//    int size;
//    node* next;
//    node* pre;
//    node(){
//        size=0;
//        next = nullptr;
//        pre = nullptr;
//    }
//};
//
//struct myList{
//    node* pseudoHead;
//    node *p;
//    void initialize(){
//        pseudoHead = new node();
//        pseudoHead->next = new node();
//        p = pseudoHead->next;
//        p->pre = pseudoHead;
//        for (int i = 0;str[i];) {
//            for (int j = 0; j < L && str[i]; ++j,i++) {
//                p->data[j] = str[i];
//                p->size++;
//            }
//            if(str[i]){
//                p->next = new node();
//                p->next->pre = p;
//                p = p->next;
//            }
//        }
//    }
//    // pos change to the pos-th number in that block
//    node* locate(int& pos){
//        int total = pseudoHead->next->size;
//        node* p = pseudoHead->next;
//        while (total<pos){
//            if (p->next!= nullptr){
//                p = p->next;
//                total+=p->size;
//            }else{
//                p->next=new node();
//                p->next->pre=p;
//                p = p->next;
//                pos = 1;
//                return p;
//            }
//        }
//        pos = pos - (total-p->size);
//        return p;
//    }
//
//    node* merge(node* n1,node* n2){
//        node* result_node = new node();
//        int k = 0;
//        for (int i = 0; i < n1->size; ++i,k++) {
//            result_node->data[k] = n1->data[i];
//        }
//        for (int i = 0; i < n2->size; ++i,k++) {
//            result_node->data[k] = n2->data[i];
//        }
//        result_node->size = n1->size + n2->size;
//        result_node->pre = n1->pre;
//        result_node->next = n2->next;
//        n1->pre->next = result_node;
//        if (n2->next!= nullptr){
//            n2->next->pre = result_node;
//        }
//        delete n1;
//        delete n2;
//        return result_node;
//    }
//
//    node* split(node* n,int pos){
//        node* n1 = new node();
//        node* n2 = new node();
//        int n_size = n->size;
//        int n2_size = n_size-pos+1;
//        int n1_size = n_size-n2_size;
//        for (int i = 0,k = 0; i <n1_size ; ++i,++k) {
//            n1->data[k] = n->data[i];
//        }
//        n1->size = n1_size;
//        for (int i = n1_size,k=0; i < n->size; ++i,++k) {
//            n2->data[k] = n->data[i];
//        }
//        n2->size = n2_size;
//
//        n1->next = n2;
//        n2->pre = n1;
//
//        n->pre->next = n1;
//        n1->pre = n->pre;
//        if (n->next!= nullptr){
//            n->next->pre = n2;
//            n2->next = n->next;
//        }
//        delete n;
//        return n1;
//    }
//
//    void maintain(){
//        node* p = pseudoHead->next;
//        while (p!= nullptr&& p->next!= nullptr){
//            if (p->size+p->next->size<L){
//                p=merge(p,p->next);
//            }else{
//                p=p->next;
//            }
//        }
//    }
//
//    void insert(char ch,int pos){
//        node* n = locate(pos);
////        if (n->size==0&&pos==1){
////            n->data[0] = ch;
////            maintain();
////            return;
////        }
//
//        node* first = split(n,pos);
//        first->data[first->size] = ch;
//        first->size++;
//        maintain();
//
//    }
//
//    char find_element(int pos){
//        node* n = locate(pos);
//        return n->data[pos-1];
//    }
//
//
//};
//
//
//
//int main(){
//    scanf("%d",&t);
//    while (t--){
//        scanf("%s",&str);
//        myList* l = new myList();
//        l->initialize();
//        scanf("%d",&n);
//        for (int i = 0; i < n; ++i) {
//            scanf("%d",&order);
//            if (order==1){
//                scanf(" %c%d",&ch,&pos);
//                l->insert(ch,pos);
//            } else if (order==2){
//                scanf("%d",&pos);
//                printf("%c\n",l->find_element(pos));
//            }
//        }
//        delete l;
//    }
//
//    return 0;
//}