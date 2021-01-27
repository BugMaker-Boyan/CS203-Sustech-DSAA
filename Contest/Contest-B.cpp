////
//// Created by Boyan on 2021/1/2.
////
//#include <iostream>
//using namespace std;
//#pragma GCC optimize(3,"Ofast","inline")
//typedef long long ll;
//const int MAXN = 1e5+5;
//ll n,m,totalNumber;
//ll number[MAXN];
//int main(){
//    cin>>n>>m;
//    for (int i = 0; i < n; ++i) {
//        cin>>number[i];
//        number[i] = number[i] - number[i]%2;
//        totalNumber+= number[i];
//    }
//    if (totalNumber/2<m){
//        cout<<"impossible"<<endl;
//    }else if (n>=m){
//        cout<<0<<endl;
//    }else{
//        cout<<m-n+1<<endl;
//    }
//    return 0;
//}