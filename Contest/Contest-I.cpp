////
//// Created by Boyan on 2021/1/2.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int MAXN = 2e5+5;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//int n,ans=0,currentMaxDepth;
//int bri[MAXN],par[MAXN],dep[MAXN],ord[MAXN],lev[MAXN];
//
//void binary(){
//    int l = 2, r= n;
//    while (l<=r){
//        if (bri[ord[l]]<=currentMaxDepth+1){
//            dep[ord[l]] = bri[ord[l]];
//            par[ord[l]] = lev[bri[ord[l]]-1];
//            if (currentMaxDepth<bri[ord[l]]){
//                currentMaxDepth = bri[ord[l]];
//                lev[currentMaxDepth] = ord[l];
//            }
//            l++;
//        }else{
//            currentMaxDepth++;
//            lev[currentMaxDepth] = ord[r];
//            dep[ord[r]] = currentMaxDepth;
//            par[ord[r]] = lev[currentMaxDepth-1];
//            r--;
//        }
//    }
//}
//
//class cmp{
//public:
//    bool operator()(int i,int j)const{
//        return bri[i]<bri[j];
//    }
//};
//
//int main(){
//    fio
//    cin>>n;
//    par[1] = dep[1] = 0;
//    lev[0] = 1;
//
//    for(int i = 1;i<=n;i++){
//        cin>>bri[i];
//        ord[i] = i;
//        if (!bri[i]) {
//            bri[i] = n;
//        }
//    }
//    sort(ord+2,ord+n+1,cmp());
//    binary();
//    if (bri[1] == n){
//        bri[1] = 0;
//    }
//    for (int i = 1; i <=n ; ++i) {
//        if (bri[i]!=dep[i]) ans++;
//    }
//    cout<<ans<<endl;
//    for (int i = 2; i <=n ; ++i) {
//        cout<<par[i]<<" ";
//    }
//    return 0;
//}