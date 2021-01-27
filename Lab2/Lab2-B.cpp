////
//// Created by Boyan on 2020/9/15.
////
//
//#include <iostream>
//using namespace std;
//#include <vector>
//long T,N;
////vector<long> difficulty;
////vector<long> energy;
//const long maxN = 100000+5;
//long difficulty[maxN];
//long energy[maxN];
//
//long binarySearch(long e){
//    int l = 0;
//    int r = N-1;
//    while (l<=r){
//        int mid = (l+r)/2;0;
//        if (e == difficulty[mid]){
//            return difficulty[mid];
//        }
//        if (e<difficulty[mid]){
//            r = mid -1;
//        }else{
//            l = mid +1;
//        }
//    }
//    return difficulty[r];
//}
//
//int main(){
//    cin>>N>>T;
//    for (int i = 0; i < N; ++i) {
//        long d;
//        cin>>d;
//        difficulty[i] = d;
//    }
//    for (int i = 0; i < T; ++i) {
//        long e;
//        cin>>e;
//        energy[i] = e;
//    }
//
//    for (int i = 0; i < T; ++i) {
//        long e = energy[i];
//        long max = binarySearch(e);
//        if (max == e){
//            cout<<"Accept";
//        }else{
//            cout<<e - max;
//        }
//        if (i != T-1){
//            cout<<endl;
//        }
//    }
//
//
//}