////
//// Created by Boyan on 2021/1/2.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//
//int a,b,c,d,w,x,y,z;
//
//int score[4];
//
//struct cost{
//    int val;
//    int id;
//    bool operator<(const cost& obj) const{
//        return val < obj.val;
//    }
//}Cost[4];
//
//
//void solve(){
//    int tot = 0;
//    for (int i = 0; i < 4; ++i) {
//        cin>>score[i];
//        tot += score[i];
//    }
//
//    for (int i = 0; i < 4; ++i) {
//        cin>>Cost[i].val;
//        Cost[i].id = i;
//    }
//    if (tot>=100){
//        cout<<0<<endl;
//        return;
//    }
//    sort(Cost,Cost+4);
//    int ans = 0;
//
//    for (int i = 0; i < 4; ++i) {
//        if (tot>=100){
//            break;
//        }
//        int id = Cost[i].id;
//        if (score[id]==30)continue;
//        int dif = 30 - score[id];
//        if (dif+tot<=100){
//            tot+=dif;
//            ans+=dif*Cost[i].val;
//        }else{
//            dif = 100 - tot;
//            tot = 100;
//            ans += dif*Cost[i].val;
//        }
//    }
//    cout<<ans<<endl;
//
//}
//
//
//
//int main(){
//    fio
//    int t;
//    cin>>t;
//    while (t--){
//        solve();
//    }
//    return 0;
//}