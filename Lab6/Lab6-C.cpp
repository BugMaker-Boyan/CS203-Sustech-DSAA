////
//// Created by Boyan on 2020/11/3.
////
//#include <iostream>
//using namespace std;
//
//int func(string s1,string s2){
//    int max_len = s1.size()>s2.size()? s2.size():s1.size();
//    while (max_len>0){
//        int i = 0,j = s2.size()-max_len;
//        while (i<max_len){
//            if (s1[i]!=s2[j]){
//                break;
//            }else{
//                i++;
//                j++;
//            }
//        }
//        if (i==max_len){
//            break;
//        }else{
//            max_len--;
//        }
//    }
//
//    return max_len;
//
//
//}
//
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int n,q;
//    cin>>n;
//    string str[n+1];
//    for (int i = 1; i <=n ; ++i) {
//        cin>>str[i];
//    }
//    cin>>q;
//    int i,j,cnt = 0;
//    char c;
//    for (int k = 0; k < q; ++k) {
////        scanf("%d %d %c",&i,&j,&c);
//        cin>>i>>j>>c;
//        int x1 = func(str[i],str[j]);
//        int x2 = func(str[j],str[i]);
//        if (x1>x2 && c == '>'){
//            cnt++;
//        }else if (x1<x2 && c == '<'){
//            cnt++;
//        }else if (x1 == x2 && c == '='){
//            cnt++;
//        }
//    }
//    printf("%d",cnt);
//
//
//
//    return 0;
//}
