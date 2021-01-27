////
//// Created by Boyan on 2020/11/17.
////
//
//#include <iostream>
//using namespace std;
//long long pow(long long x,long long n){
//    long long ans = 1;
//    for (int i = 0; i < n; ++i) {
//        ans*=x;
//    }
//    return ans;
//}
//long long getTotalNum(int k,int h){
//    return (pow(k,h+1)-1)/(k-1);
//}
//
//long long getDepth(int k,int n){
//    long long h = 0,num = 1;
//    while (num<n){
//        h++;
//        num+=pow(k,h);
//    }
//    return h;
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    long long n,k,t;
//    cin>>t;
//    while (t--){
//        cin>>n>>k;
//        long long h = getDepth(k,n);
//        long long num1 = getTotalNum(k,h-1);
//        cout<<(pow(k,h)-(n-num1))/k+(n-num1);
//        if (t) cout<<endl;
//    }
//    return 0;
//}