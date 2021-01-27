////
//// Created by Boyan on 2020/11/3.
////
//
//#include <iostream>
//using namespace std;
//#include <vector>
//#include <algorithm>
//
//string s1,s2;
//int q=49999,d=30;
//
//
//int binary_search(vector<int>& v,int target){
//    int l = 0,r = v.size()-1,mid;
//    while (l<=r){
//        mid = (l+r)/2;
//        if (v[mid]==target){
//            return true;
//        }else if (v[mid]<target){
//            l = mid + 1;
//        }else{
//            r = mid - 1;
//        }
//    }
//    return false;
//}
//
//
//void get_HashVector(vector<int>& v,string& s,int len){
//    int t = 0;
//    for (int i = 0; i < len; ++i) {
//        t = (d*t+s[i])%q;
//    }
//    v.push_back(t);
//    int h = 1;
//    for (int i = 0; i < len-1; ++i) {
//        h = (h*d)%q;
//    }
//    for (int i = 1; i <= s.size()-len ; ++i) {
//        t = (d*(t-s[i-1]*h)+s[len+i-1])%q;
//        while (t<0){
//            t+=q;
//        }
//        v.push_back(t);
//    }
//}
//
//
//
//bool judge(int mid){
//    vector<int> hash_s1;
//    vector<int> hash_s2;
//    get_HashVector(hash_s1,s1,mid);
//    get_HashVector(hash_s2,s2,mid);
////    sort(hash_s1.begin(),hash_s1.end());
//
//
//    vector<int> hashMap[q];
//
//    for (int i = 0; i < hash_s2.size(); ++i) {
//        hashMap[hash_s2[i]].push_back(i);
//    }
//    sort(hash_s2.begin(),hash_s2.end());
//    bool flag = false;
//    for (int i = 0; i < hash_s1.size() && !flag; ++i) {
//        if (binary_search(hash_s2,hash_s1[i])){
//            for(int j:hashMap[hash_s1[i]]){
//                if (!flag){
//                    int k = i;
//                    for (; k <= mid+i-1; ++k,++j) {
//                        if (s1[k]!=s2[j]){
//                            break;
//                        }
//                    }
//                    if (k>mid+i-1){
//                        flag = true;
//                    }
//                }
//            }
//        }
//    }
//
//    return flag;
//
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
//    cin>>s1>>s2;
//
//
//
//
//
//    int min_len = s1.size()>s2.size()?s2.size():s1.size();
//    int l = 0,r = min_len,mid;
//    int ans = 0;
//    while (l<=r){
//        mid = (l+r)/2;
//        if (judge(mid)){
//            ans = mid;
//            l = mid + 1;
//        }else{
//            r = mid - 1;
//        }
//    }
//
//    cout<<ans;
//
//
//
//
//
//
//
//
//    return 0;
//}