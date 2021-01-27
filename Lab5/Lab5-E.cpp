////
//// Created by Boyan on 2020/10/27.
////
//
//#include <iostream>
//using namespace std;
//
//struct myStack{
//    int* data;
//    int top;
//
//    myStack(){
//        data = new int[100000];
//        top = -1;
//    }
//
//    void push(int x){
//        data[++top] = x;
//
//    }
//
//    void pop(){
//        top--;
//    }
//
//    int get_top(){
//        return data[top];
//    }
//
//
//};
//
//myStack** freStack = new myStack*[100000];
//int fre[100005],x,maxFre = 0;
//string s;
//
//int main(){
//    for (int i = 0; i < 100000; ++i) {
//        freStack[i]= nullptr;
//    }
//
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//
//    while (cin>>s){
//        if (s == "nsdd") break;
//
//        if (s == "put-in"){
////            scanf("%d",&x);
//            cin>>x;
//            fre[x]++;
//            if (maxFre<fre[x]){
//                maxFre = fre[x];
//            }
//
//            if (freStack[fre[x]]== nullptr){
//                freStack[fre[x]] = new myStack();
//            }
//            freStack[fre[x]]->push(x);
//        }else if (s == "eat"){
//            while (maxFre>0 && freStack[maxFre]->top==-1){
//                maxFre--;
//            }
//            if (maxFre == 0){
//                printf("pa\n");
////                cout<<"pa"<<endl;
//            }else{
//                int val = freStack[maxFre]->get_top();
//                printf("%d\n",val);
////                cout<<val<<endl;
//                fre[val]--;
//                freStack[maxFre]->pop();
//            }
//        }
//
//    }
//
//
//
//
//    return 0;
//}