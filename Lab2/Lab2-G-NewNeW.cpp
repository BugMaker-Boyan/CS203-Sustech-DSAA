////
//// Created by Boyan on 2020/9/16.
////
//
//#include <iostream>
//using namespace std;
//
//int T;
//long long N,K,M;
//long long a[100005];
//
//bool isValid(long long mid){
//    long long total = 0;
//    long long n = 0;
//    long long k = 0;
//    for (long long t = 0; t < N; ++t) {
//        if (a[t] >= mid){
//            n++;
//        }
//        if (n == K){
//            total += N-t;
//            while (true){
//                if (a[k]>=mid){
//                    break;
//                }
//                total+=N-t;
//                k++;
//            }
//            k++;
//            n--;
//        }
//    }
//    return total<M;
//
//}
//
//long long solve(){
//    long long l = 0;
//    long long r = 1000000000;
//    while (l<r){
//        long long mid = (l+r)/2;
//        if (isValid(mid)){
//            r = mid;
//        }else{
//            l = mid+1;
//        }
//    }
//    return l-1;
//}
//
//
//int main(){
//    cin>>T;
//    while (T--){
//        cin>>N>>K>>M;
//        for (int i = 0 ; i < N; ++i) {
//            cin>>a[i];
//        }
//        cout<<solve();
//        if (T){
//            cout<<endl;
//        }
//    }
//
//
//
//}