////
//// Created by Boyan on 2020/9/8.
////
//
//#include <iostream>
//using namespace std;
//
//long t,n;
//
//long solve(long n){
//    long result = 1;
//    for (int i = 1; i <= n; ++i) {
//        result = ((result)%1000000007)*3;
//    }
//    return result;
//}
//
//int main(){
//    cin>>t;
//    while (t--){
//        cin>>n;
//        cout<<(solve(n)-1)%1000000007;
//        if (t){
//            cout<<endl;
//        }
//    }
//}