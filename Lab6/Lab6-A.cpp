////
//// Created by Boyan on 2020/11/3.
////
//
//#include <iostream>
//using namespace std;
//
//
//
//int main(){
//    int n;
//    scanf("%d",&n);
//    string girls[n];
//    int max_len = 0;
//    for (int i = 0; i < n; ++i) {
////        scanf("%s",&girls[i]);
//        cin>>girls[i];
//        if (girls[i].size()>max_len){
//            max_len = girls[i].size();
//        }
//    }
//    int maxPrefixLen = 0;
//    int maxSuffixLen = 0;
//    char prefixChar = girls[0][0];
//    bool flag = false;
//    for (int i = 0; i < max_len; ++i) {
//        prefixChar = girls[0][i];
//        for (int j = 0; j < n; ++j) {
//            if (girls[j][i]!=prefixChar){
//                flag = true;
//                break;
//            }
//        }
//        if (flag) break;
//        maxPrefixLen++;
//    }
//
//    flag = false;
//    char suffixChar = girls[0][max_len-1];
//    for (int i = 0; i < max_len; ++i) {
//        suffixChar = girls[0][max_len-1-i];
//        for (int j = 0; j < n; ++j) {
//            if (girls[j][max_len-1-i]!=suffixChar){
//                flag = true;
//                break;
//            }
//        }
//        if (flag) break;
//        maxSuffixLen++;
//    }
//
//    printf("%d",maxSuffixLen*maxPrefixLen);
//
//
//    return 0;
//}