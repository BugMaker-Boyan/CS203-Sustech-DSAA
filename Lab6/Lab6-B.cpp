////
//// Created by Boyan on 2020/11/3.
////
//#include <iostream>
//using namespace std;
//
//
//int main(){
//    string s;
//    cin>>s;
//    int len = s.size();
//    int Next[len+1];
//    int i = 0,j = -1;
//    Next[0] = -1;
//    while (i<len){
//        if (j==-1 || s[i]==s[j]){
//            Next[++i]=++j;
//        }else{
//            j = Next[j];
//        }
//    }
//    for (int k = 1; k <= len; ++k) {
//        printf("%d\n",Next[k]);
//    }
//
//
//
//
//    return 0;
//}
