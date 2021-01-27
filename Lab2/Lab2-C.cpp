////
//// Created by Boyan on 2020/9/15.
////
//
//#include <iostream>
//using namespace std;
//
//long long array[3000+5];
//
//long long n,S;
//
//long long binarySearchFirst(long long i, long long j){
//    long long ak = S - array[i]-array[j];
//    long long l = j+1;
//    long long r = n-1;
//    long long index = -1;
//    while (l<=r){
//        long long mid = (l+r)/2;
//        if (array[mid]<ak){
//            l = mid+1;
//        }else if (array[mid]>ak){
//            r = mid-1;
//        }else{
//            index = mid;
//            r = mid - 1;
//        }
//    }
//    return index;
//}
//
//long long binarySearchLast(long long i, long long j){
//    long long ak = S - array[i]-array[j];
//    long long l = j+1;
//    long long r = n-1;
//    long long index = -1;
//    while (l<=r){
//        long long mid = (l+r)/2;
//        if (array[mid]<ak){
//            l = mid+1;
//        }else if (array[mid]>ak){
//            r = mid-1;
//        }else{
//            index = mid;
//            l = mid +1;
//        }
//    }
//    return index;
//}
//
//
//int main(){
//    cin>>n>>S;
//    for (long long i = 0; i < n; ++i) {
//        cin>>array[i];
//    }
//    long long cnt = 0;
//    for (long long i = 0; i < n-2; ++i) {
//        for (long long j = i+1; j < n-1; ++j) {
//            long long first =binarySearchFirst(i,j);
//            long long last = binarySearchLast(i,j);
//            if (first != -1 && last!= -1){
//                cnt+=last-first+1;
//            }
//        }
//    }
//    cout<<cnt;
//
//
//    return 0;
//}