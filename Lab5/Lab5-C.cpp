////
//// Created by Boyan on 2020/10/27.
////
//
//#include <iostream>
//using namespace std;
//const int maxN = 300;
//int opt,u,w,val,n,q,v;
//
//struct myDeque{
//    int m_size;
//    int m_front;
//    int m_rear;
//    int* data;
//
//
//    myDeque(){
//        m_size = m_front = m_rear = 0;
//        data = new int[maxN];
//    }
//
//    ~myDeque(){
//        delete [] data;
//    }
//
//    void push_rear(int x){
//        if (m_size != maxN){
//
//            data[m_rear] = x;
//
//            m_rear = (m_rear+1)%maxN;
//
//            m_size++;
//        }
//    }
//
//    void push_front(int x){
//        if (m_size!=maxN){
//            m_front = (m_front-1+maxN)%maxN;
//            data[m_front] = x;
//            m_size++;
//        }
//    }
//
//    void pop_rear(){
//        if (m_size != 0){
//            m_rear = (m_rear-1+maxN)%maxN;
//            m_size--;
//        }
//    }
//
//    void pop_front(){
//        if (m_size!=0){
//            m_front = (m_front+1)%maxN;
//            m_size--;
//        }
//    }
//
//    int get_front(){
//        if (m_size!=0){
//            return data[m_front];
//        }else{
//            return -1;
//        }
//    }
//
//    int get_rear(){
//        if (m_size!=0){
//            return data[(m_rear-1+maxN)%maxN];
//        }else{
//            return -1;
//        }
//    }
//
//    bool isEmpty(){
//        return m_size == 0;
//    }
//
//
//};
//
//
//
//
//int main(){
//    while (scanf("%d%d",&n,&q)!=EOF){
//        myDeque** dequeArr = new myDeque*[n+1];
//
//        for (int i = 0; i < n+1; ++i) {
//            dequeArr[i] = nullptr;
//        }
//
//        for (int i = 0; i < q; ++i) {
//            scanf("%d",&opt);
//            if (opt==1){
//                scanf("%d%d%d",&u,&w,&val);
//
//                if (dequeArr[u]== nullptr) dequeArr[u] = new myDeque();
//
//                if (w == 0){
//                    dequeArr[u]->push_front(val);
//                }else{
//                    dequeArr[u]->push_rear(val);
//                }
//            }else if (opt == 2){
//                scanf("%d%d",&u,&w);
//                if (dequeArr[u]== nullptr){
//                    printf("-1\n");
//                }else{
//                    if (w == 0){
//                        printf("%d\n",dequeArr[u]->get_front());
//                        dequeArr[u]->pop_front();
//                    }else{
//                        printf("%d\n",dequeArr[u]->get_rear());
//                        dequeArr[u]->pop_rear();
//                    }
//                }
//
//            }else if (opt == 3){
//                scanf("%d%d%d",&u,&v,&w);
//
//                myDeque* deV = dequeArr[v];
//                myDeque* deU = dequeArr[u];
//
//                if (deV == nullptr){
//                    continue;
//                }
//                if (deU == nullptr) dequeArr[u] = new myDeque(),deU = dequeArr[u];
//                if (w == 0){
//                    while (!deV->isEmpty()){
//                        deU->push_rear(deV->get_front());
//                        deV->pop_front();
//                    }
//                }else{
//                    while (!deV->isEmpty()){
//                        deU->push_rear(deV->get_rear());
//                        deV->pop_rear();
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}