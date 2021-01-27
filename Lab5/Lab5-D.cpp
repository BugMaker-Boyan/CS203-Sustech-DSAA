//
////
//// Created by Boyan on 2020/10/27.
////
//
//#include <iostream>
//using namespace std;
//
//
//struct stock{
//    int id;
//    int value;
//    int wait_Days;
//    stock(){
//        value=0;
//        wait_Days = -1;
//    }
//};
//
//
//
//struct myStack{
//    int top = -1;
//    stock** data;
//    int max_size;
//
//
//    myStack(int n){
//        data = new stock*[n+1];
//        max_size = n+1;
//    }
//    ~myStack(){
//        delete [] data;
//    }
//
//    bool isEmpty(){
//        return top == -1;
//    }
//
//    void push(stock* s){
//        if (top<max_size-1){
//            data[++top] = s;
//        }
//    }
//
//    void pop(){
//        if (!isEmpty()){
//            top--;
//        }
//    }
//
//    stock* top_element(){
//        if (!isEmpty()){
//            return data[top];
//        }else{
//            return nullptr;
//        }
//    }
//
//
//
//};
//
//
//
//int t,n,q;
//
//
//
//int main(){
//    scanf("%d",&t);
//    while (t--){
//        scanf("%d",&n);
//        stock* stocks[n+1];
//        for (int i = 1; i <= n; ++i) {
//            stocks[i] = new stock();
//            scanf("%d",&stocks[i]->value);
//            stocks[i]->id = i;
//        }
//        myStack* s = new myStack(n);
//        for (int i = 1; i <=n ; ++i) {
//            if (!s->isEmpty()){
//                if (stocks[i]->value > s->top_element()->value){
//                    stock* st = stocks[i];
//                    while (!s->isEmpty() && st->value > s->top_element()->value){
//                        s->top_element()->wait_Days = st->id - s->top_element()->id;
//                        s->pop();
//                    }
//                    s->push(st);
//                }else{
//                    s->push(stocks[i]);
//                }
//            }else{
//                s->push(stocks[i]);
//            }
//        }
//        scanf("%d",&q);
//        int k;
//        for (int i = 0; i < q; ++i) {
//            scanf("%d",&k);
//            printf("%d\n",stocks[k]->wait_Days);
//        }
//
//        for (int i = 1; i <=n; ++i) {
//            if (stocks[i]!= nullptr){
//                delete stocks[i];
//            }
//        }
//
//    }
//
//    return 0;
//}
