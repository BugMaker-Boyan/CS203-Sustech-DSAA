////
//// Created by Boyan on 2021/1/2.
////
//
//#include <iostream>
//#include <cmath>
//using namespace std;
//#pragma GCC optimize(3,"Ofast","inline")
//typedef long long ll;
//ll t,x,y;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//ll solve(){
//    ll ans = 0;
//    if (x<y)swap(x,y);
//    ll depth_x = log2(x);
//    ll depth_y = log2(y);
//    if(depth_x > depth_y){
//        ll dif = depth_x - depth_y;
//        x/=pow(2,dif);
//        ans+=dif;
//    }
//    if (x==y){
//        return ans;
//    }else{
//        while (x!=y){
//            x/=2;
//            y/=2;
//            ans+=2;
//        }
//        return ans;
//    }
//}
//
//
//int main(){
//    fio;
//    cin>>t;
//    while (t--){
//        cin>>x>>y;
//        cout<<solve()<<endl;
//    }
//
//    return 0;
//}
