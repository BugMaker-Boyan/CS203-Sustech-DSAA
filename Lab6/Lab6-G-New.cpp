////
//// Created by Boyan on 2020/11/8.
////
//
//#include <iostream>
//using namespace std;
//
//
//int ans = 0,n,maxLen=-1;
//bool flag = false;
//void get_interval_sum(string str[],int interval){
//    int next_str = 0+interval;
//    int last_str = 0;
//    string s;
//    while (next_str<n){
//        s = str[last_str]+str[next_str];
//        int i = 1,j =0;
//        int Next[s.size()];
//        Next[0] = 0;
//        while (i<s.size()){
//            if (s[i]==s[j]){
//                Next[i] = j+1;
//                i++;
//                j++;
//            }else{
//                if (j==0){
//                    Next[i]=0;
//                    i++;
//                }else{
//                    j = Next[j-1];
//                }
//            }
//        }
//        int max_Common = Next[s.size()-1];
//        while (max_Common>str[last_str].size() || max_Common>str[next_str].size()){
//            max_Common = Next[max_Common-1];
//        }
//        if (!flag)ans+=(last_str+1)*(next_str+1)*max_Common % 998244353;
//        else ans+=(n-last_str-1+1)*(n-next_str-1+1)*max_Common % 998244353;
//
//        last_str++;
//        next_str++;
//    }
//
//}
//int main(){
//
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    cin>>n;
//    string str[n];
//    int interval = 1;
//
//    for (int i = 0; i < n; ++i) {
//        cin>>str[i];
//    }
//
//    for (int i = 0; i < n; ++i) {
//        ans+=(i+1)*(i+1)*str[i].size()%998244353;
//    }
//
//    while (interval<n){
//        get_interval_sum(str,interval);
//        interval++;
//    }
//    string temp;
//    for (int i = 0; i < n/2; ++i) {
//        temp = str[n-i-1];
//        str[n-i-1] = str[i];
//        str[i] = temp;
//    }
//
//    interval = 1;
//    flag = true;
//    while (interval<n){
//        get_interval_sum(str,interval);
//        interval++;
//    }
//
//    printf("%d",ans%998244353);
//
//    return 0;
//}