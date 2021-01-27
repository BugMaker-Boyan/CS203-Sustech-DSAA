////
//// Created by Boyan on 2020/11/3.
////
//
//#include <iostream>
//using namespace std;
//
//
//int main(){
//
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t;
//    string s;
//    cin>>t;
//    while (t--){
//        cin>>s;
//        int n = s.size();
//        int Next[n+1];
//        Next[0] = -1;
//        int i = 0,j=-1;
//        while (i<n){
//            if (j == -1 || s[i]==s[j]){
//                Next[++i]=++j;
//            }else{
//                j = Next[j];
//            }
//        }
//        int maxCommon = Next[n];
//        int circulationSize = n - maxCommon;
//        int add_num = circulationSize-n%circulationSize;
//        if (maxCommon==n || (maxCommon!=0 && n%circulationSize==0)){
//            //aaa || abcabc
//            cout<<0;
//        }else{
//            cout<<add_num;
//        }
//        if (t) cout<<endl;
//    }
//
//
//
//    return 0;
//}