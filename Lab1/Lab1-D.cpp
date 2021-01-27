////
//// Created by Boyan on 2020/9/8.
////
//
//#include <iostream>
//using namespace std;
//
//int T,a,b,c,m,n;
//
////print .
//void print1(char line[],int first,int len){
//    for (int i = 0; i < len; ++i) {
//        line[first+i]='.';
//    }
//}
//
////print +-
//void print2(char line[],int first,int len){
//    for (int k = 0; k < len; ++k) {
//        if (k%2 == 0){
//            line[first+k]='+';
//        }else{
//            line[first+k]='-';
//        }
//    }
//}
////print .+
//void print3(char line[],int first,int len){
//    for (int k = 0; k < len; ++k) {
//        if (k%2 == 0){
//            line[first+k]='.';
//        }else{
//            line[first+k]='+';
//        }
//    }
//}
////print |/
//void print4(char line[],int first,int len){
//    for (int k = 0; k < len; ++k) {
//        if (k%2 == 0){
//            line[first+k]='|';
//        }else{
//            line[first+k]='/';
//        }
//    }
//}
////print /.
//void print5(char line[],int first,int len){
//    for (int k = 0; k < len; ++k) {
//        if (k%2 == 0){
//            line[first+k]='/';
//        }else{
//            line[first+k]='.';
//        }
//    }
//}
////print |.
//void print6(char line[],int len){
//    for (int k = 0; k < len; ++k) {
//        if (k%2 == 0){
//            line[k]='|';
//        }else{
//            line[k]='.';
//        }
//    }
//}
//
//void print7(char line[],int first,int len){
//    for (int k = 0; k < len; ++k) {
//        if (k%2 == 0){
//            line[first+k]='/';
//        }else{
//            line[first+k]='|';
//        }
//    }
//}
//
//int main(){
//    cin>>T;
//    while (T--){
//        cin>>a>>b>>c;
//        m = 2*(b+c)+1;
//        n = 2*(a+b)+1;
//        char g[m][n];
//        for (int i = 0; i < 2*b; ++i) {
////            print1(g[i],0,2*b-i);
//            if (i%2 ==0){
//                print2(g[i],2*b-i,2*a+1);
//            }else{
//                print5(g[i],2*b-i,2*a+1);
//            }
//            int l = i>2*c?2*c :i;
//            if (i%2 ==0){
//                print3(g[i],2*a+2*b-i+1,l);
//            }else{
//                print4(g[i],2*a+2*b-i+1,l);
//            }
//        }
//        for (int i = 2*b; i < 2*c+1; ++i) {
//            if (i %2 == 0){
//                print2(g[i],0,2*a+1);
//            }else{
//                print6(g[i],2*a+1);
//            }
//            if (i%2 == 0){
//                print3(g[i],2*a+1,2*b);
//            }else{
//                print7(g[i],2*a+1,2*b);
//            }
//        }
//        for (int i = 2*c+1; i < 2*b+2*c+1; ++i) {
//
//            if (i %2 !=0){
//                print6(g[i],2*a+1);
//            }else{
//                print2(g[i],0,2*a+1);
//            }
//            if (i%2 == 0){
//                print3(g[i],2*a+1,2*b-i+2*c);
//            }else{
//                print7(g[i],2*a+1,2*b-i+2*c);
//            }
//            print1(g[i],i-2*c,2*a+2*b+2*c-i+1);
//
//        }
//
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                cout<<g[i][j];
//            }
//            if (i != m-1){
//                cout<<endl;
//            }
//
//        }
//
//    }
//
//
//
//    return 0;
//};