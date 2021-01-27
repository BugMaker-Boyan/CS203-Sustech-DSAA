////
//// Created by Boyan on 2020/10/27.
////
//
//#include <iostream>
//using namespace std;
//const int maxN = 20000005;
//struct myQueue{
//    int* data;
//    int front;
//    int rear;
//    myQueue(){
//        data = new int[maxN];
//        front = rear = 0;
//    }
//    void enQ(int x){
//        data[rear++] = x;
//    }
//    void deQ(){
//        front++;
//    }
//    int front_element(){
//        return data[front];
//    }
//};
//int main(){
//    int n,x;
//    char c;
//    scanf("%d",&n);
//    myQueue q;
//    for (int i = 0; i < n; ++i) {
//        c=getchar();
//        while (c!='E' && c!='D' && c!='A') c = getchar();
//        if (c == 'E'){
//            scanf("%d",&x);
//            q.enQ(x);
//        }else if (c == 'D'){
//            q.deQ();
//        }else{
//            printf("%d\n",q.front_element());
//        }
//    }
//    for (int i = q.front; i < q.rear; ++i) {
//        printf("%d ",q.data[i]);
//    }
//    return 0;
//}