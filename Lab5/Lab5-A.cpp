////
//// Created by Boyan on 2020/10/27.
////
//
//#include <iostream>
//using namespace std;
//
//int t,n;
//
//
//struct myStack{
//    char* data;
//    int top;
//
//    myStack(int n){
//        data = new char[n+5];
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
//    char get_top(){
//        return data[top];
//    }
//
//    bool isEmpty(){
//        return top==-1;
//    }
//};
//
//
//string s;
//
//int main(){
//    scanf("%d",&t);
//    while (t--){
//        cin>>n>>s;
//        myStack stack(n);
//        bool flag = false;
//        for (int i = 0; i < n; ++i) {
//            if (s[i]=='(' || s[i] == '[' || s[i] == '{'){
//                stack.push(s[i]);
//            }else{
//                if (s[i] == ')'){
//                    if (stack.isEmpty() || stack.get_top() != '('){
//                        flag = true;
//                        printf("NO\n");
//                        break;
//                    }else{
//                        stack.pop();
//                    }
//                }else if (s[i] == ']'){
//                    if (stack.isEmpty() || stack.get_top() != '['){
//                        flag = true;
//                        printf("NO\n");
//                        break;
//                    }else{
//                        stack.pop();
//                    }
//                }else if (s[i] == '}'){
//                    if (stack.isEmpty() || stack.get_top() != '{'){
//                        flag = true;
//                        printf("NO\n");
//                        break;
//                    }else{
//                        stack.pop();
//                    }
//                }
//            }
//        }
//        if (!flag){
//            if (stack.isEmpty()){
//                printf("YES\n");
//            }else{
//                printf("NO\n");
//            }
//        }
//    }
//
//
//    return 0;
//}