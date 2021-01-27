////
//// Created by Boyan on 2020/12/23.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 11;
//
//int data[MAXN],copy_data[MAXN],Rank[MAXN];
//
//void discrete(int n){
//    memcpy(copy_data,data,sizeof data);
//    sort(copy_data,copy_data+n);
//    int len = unique(copy_data,copy_data+n) - copy_data;
//    for (int i = 0; i < n; ++i) {
//        Rank[i] = lower_bound(copy_data,copy_data+len,data[i])-copy_data+1;
//    }
//}
//
////int main(){
////    int n = 6;
////    data[0] = 10;
////    data[1] = 23;
////    data[2] = 35;
////    data[3] = 3;
////    data[4] = -40;
////    data[5] = 3;
////    discrete(n);
////    for (int i = 0; i < n; ++i) {
////        cout<<Rank[i]<<" ";
////    }
////
////    return 0;
////}