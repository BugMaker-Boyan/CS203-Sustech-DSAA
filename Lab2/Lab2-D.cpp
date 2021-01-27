////
//// Created by Boyan on 2020/9/16.
////
//
//#include <iostream>
//using namespace std;
//
//
//
//
//long long n,m,L,r,l;
//long long pos[100000+5];
//bool isValid(long long mid){
//    long long last = 0;
//    long long cnt =1;
//    for (int i = 1; i <=n ; ++i) {
//        if (pos[i]-pos[last]>mid){
//            if (i - last == 1){
//                return false;
//            }else{
//                cnt++;
//                i--;
//                last = i;
//            }
//        }
//    }
//    if (cnt > m){
//        return false;
//    }else{
//        return true;
//    }
//}
//
//
//
//int main(){
//    cin>>n>>m>>L;
//    for (int i = 0; i < n; ++i) {
//        cin>>pos[i];
//    }
//    pos[n] = L;
//
//    r = L;
//    l = 0;
//    while (l<r){
//        long long mid = (l+r)/2;
//        if (!isValid(mid)){
//            l = mid;
//        }else{
//            r = mid;
//        }
//        if (l == r-1){
//            break;
//        }
//    }
//    cout<<r;
//
//
//
//
//
//}