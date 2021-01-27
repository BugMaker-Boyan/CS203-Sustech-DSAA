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
//
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
//            v.assign(a.begin() + start, a.begin() + k+1);
//            sort(v.begin(), v.end(), greater<long long>());
//            vector<long long>::iterator itb = lower_bound(b.begin(),b.end(),v[K-1]);
//            b.insert(itb,v[K-1]);
//            while (end - start < n-1 && end < n-1){
//                end++;
//                vector<long long>::iterator  it = lower_bound(v.begin(),v.end(),a[end]);
//                v.insert(it,a[end]);
//                itb = lower_bound(b.begin(),b.end(),v[K-1]);
//                b.insert(itb,v[K-1]);
//            }
//            start++;
//            if(start + k -1 >n-1){
//                break;
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