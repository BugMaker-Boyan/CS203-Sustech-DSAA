////
//// Created by Boyan on 2020/9/15.
////
//
//#include <iostream>
//using namespace std;
//
//long func(long n){
//    if(n<=3){
//        return 1;
//    }
//    else{
//        long k = n/2;
//        if (k % 2 == 0){
//            return func(k-1)+2*func(k);
//        }else{
//            return 2*func(k-1)+func(k+1);
//        }
//    }
//}
//
//int T;
//long n;
//
//int main(){
//    cin>>T;
//    while (T--){
//        cin>>n;
//        cout<<func(n);
//
//        if (T){
//            cout<<endl;
//        }
//    }
//
//
//    return 0;
//}