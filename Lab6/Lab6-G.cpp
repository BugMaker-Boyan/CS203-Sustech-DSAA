////
//// Created by Boyan on 2020/11/3.
////
//#include <iostream>
//using namespace std;
//
//int func(string s1,string s2){
//    string s = s1 + s2;
//    int Next[s.size()+1];
//    Next[0] = -1;
//    int i = 0,j = -1;
//    while (i<s.size()){
//        if (j==-1 || s[i] == s[j]){
//            Next[++i] = ++j;
//        }else{
//            j = Next[j];
//        }
//    }
//    int max_Common = Next[s.size()];
//    while (max_Common>s1.size() || max_Common>s2.size()){
//        max_Common = Next[max_Common];
//    }
//    return max_Common;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//
//    int n;
//    cin>>n;
//    string str[n+1];
//    for (int i = 1; i <= n; ++i) {
//        cin>>str[i];
//    }
//    long long sum = 0;
//    for (int i = 1; i <= n ; ++i) {
//        for (int j = 1; j <= n ; ++j) {
//            sum+=i*j*func(str[i],str[j])%998244353;
//        }
//    }
//
//    printf("%d",sum%998244353);
//    return 0;
//}