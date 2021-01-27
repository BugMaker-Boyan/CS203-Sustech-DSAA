////
//// Created by Boyan on 2020/11/8.
////
//#include <iostream>
//#include <map>
//using namespace std;
//typedef unsigned long long ll;
//ll Next[1000000+5],n,ans = 0,BASE1 = 223;
//const ll MOD = 998244353;
//string str[100000+5];
//ll contribution[1000000+5];
//ll val_Arr[1000000+5];
//
//
//map<ll,ll> Map;
//
//void to_Hash_Suffix(string& s,int& index){
//    ll base1 = 1,val1=0;
//    for (int i = s.size()-1; i >=0 ; --i) {
//        val1+=base1*(s[i]-'a'+1);
//        Map[val1]+=(index+1);
//        base1*=BASE1;
//    }
//}
//
//void get_Next(string &s){
//    int i = 1,j=0;
//    Next[0]=0;
//    while (i<s.size()){
//        if (s[i]==s[j]){
//            Next[i]=j+1;
//            i++;
//            j++;
//        }else{
//            if (j==0){
//                Next[i]=0;
//                i++;
//            }else{
//                j=Next[j-1];
//            }
//        }
//    }
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ans = 0;
//    cin>>n;
//    for (int i = 0; i < n; ++i) {
//        cin>>str[i];
//        to_Hash_Suffix(str[i],i);
//    }
//
//    for (int i = 0; i < n; ++i) {
//        string& s = str[i];
//
//        ll val1=0;
//        for (int j = 0; j < s.size(); ++j) {
//            contribution[j]=0;
//            val1=(val1*BASE1+s[j]-'a'+1);
//            val_Arr[j]=val1;
//            contribution[j]+=(i+1)*(Map[val1])*(j+1);
//        }
//        get_Next(s);
//        for (int k = 0; k < s.size(); ++k) {
//            if (Next[k]){
//                int len = Next[k];
//                int target_index = Next[k]-1;
//                contribution[target_index]=contribution[target_index]-(len*(i+1)*(Map[val_Arr[k]]));
//            }
//        }
//        for (int j = 0; j < s.size(); ++j) {
//            ans+=contribution[j];
//        }
//    }
//    printf("%d",ans%MOD);
//    return 0;
//}