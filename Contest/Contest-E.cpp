////
//// Created by Boyan on 2021/1/2.
////
//#include <iostream>
//#include <cstring>
//using namespace std;
//typedef long long ll;
//ll n,q,s,x,y;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//ll number[10005];
//ll a[10005];
//ll copy_a[10005];
//
//int main(){
//    fio
//    cin>>n>>q;
//    for (int i = 1; i <= n ; ++i) {
//        cin>>number[i];
//    }
//    a[1] = number[1]+number[2];
//    a[n] = number[n-1]+number[n];
//    for (int i = 2; i <= n-1 ; ++i) {
//        a[i] = number[i-1] + number[i] + number[i+1];
//    }
//    for (int k = 0; k < q; ++k) {
//        memcpy(copy_a,a,sizeof a);
//        cin>>x>>y;
//        ll tot = 0;
//        for (int i = 1; i <=n ; ++i) {
//            if (copy_a[i]<x){
//                ll inc = (x-copy_a[i]);
//                tot += inc;
//                copy_a[i] += inc;
//                copy_a[i+1] += inc;
//                copy_a[i+2] += inc;
//            }
//        }
//        if (tot > y){
//            cout<<"No"<<endl;
//        }else{
//            cout<<"Yes"<<endl;
//        }
//    }
//
//    return 0;
//}
