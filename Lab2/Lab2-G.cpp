////
//// Created by Boyan on 2020/9/15.
////
//
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <functional>
//#include <algorithm>
//vector<long long> a;
//vector<long long> b;
//
//long n,K,M;
//int T;
//
//int main(){
//    cin>>T;
//    while (T--){
//        cin>>n>>K>>M;
//        for (long i = 0; i < n; ++i) {
//            long long t;
//            cin>>t;
//            a.push_back(t);
//        }
//        long k = K;
//        long start = 0;
//        long end =start+k-1;
//        while (end!=-1) {
//            vector<long long> v;
//            v.assign(a.begin() + start, a.begin() + end+1);
//            sort(v.begin(), v.end(), greater<long long>());
//            b.push_back(v[K - 1]);
//            start++;
//            end++;
//            if (end - start == n-1){
//                break;
//            }
//            if (end>n-1){
//                start = 0;
//                k++;
//                end = start+k-1;
//            }
//        }
//        sort(b.begin(),b.end(),greater<long long>());
//        cout<<b[M-1];
//        a.clear();
//        b.clear();
//        if (T){
//            cout<<endl;
//        }
//    }
//
//    return 0;
//}