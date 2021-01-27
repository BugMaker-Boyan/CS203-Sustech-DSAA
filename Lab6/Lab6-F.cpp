////
//// Created by Boyan on 2020/11/3.
////
//
//#include <iostream>
//using namespace std;
//
//int substitution[26];
//string s;
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    char c;
//    for (int i = 0; i < 26; ++i) {
//        cin>>c;
//        substitution[i] = c-'a';
//    }
//    cin>>s;
//
//    int Next[s.size()+1];
//    Next[0] = -1;
//    int i = 0,j = -1;
//    while (i<s.size()){
//        if (j==-1 || substitution[s[i]-'a']+'a' == s[j]){
//            Next[++i] = ++j;
//        }else{
//            j = Next[j];
//        }
//    }
//
//    cout<<s.size()-Next[s.size()];
//
//
//
//    return 0;
//}