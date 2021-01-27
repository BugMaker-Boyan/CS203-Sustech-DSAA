////
//// Created by Boyan on 2020/9/9.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int findFirst(char line[],int len){
//    for (int i = 0; i < len; ++i) {
//        if (line[i] == '0'){
//            return i;
//        }
//    }
//    return -1;
//}
//
//
//int main(){
//    int T,a,b,c,m,n;
//    cin>>T;
//    while (T--){
//        cin>>a>>b>>c;
//        m = 2*(b+c)+1;
//        n = 2*(a+b)+1;
//        char g[m][n];
//        memset(g,'0',sizeof(g));
//        int k = 2*b;
//        for (int i = 0; i < 2*b; ++i) {
//            for (int j = 0; j < k; ++j) {
//                g[i][j] = '.';
//            }
//            k--;
//        }
//        k = 2*b;
//        for (int i = m-1; i >= m-2*b; --i) {
//            for (int j = n-1; j >=n-k ; --j) {
//                g[i][j] = '.';
//            }
//            k--;
//        }
//
//        k = 2*a+1;
//
//        for (int i = 0; i < m; ++i) {
//            int first = findFirst(g[i],n);
//            int flag = 0;
//            for (int j = first; j < first+2*a+1; ++j) {
//                if (first != 0){
//                    if (i % 2 == 0){
//                        g[i][j] = flag == 0? '+':'-';
//                    }else{
//                        g[i][j] = flag == 0? '/':'.';
//                    }
//                }else{
//                    if (i % 2 == 0){
//                        g[i][j] = flag == 0? '+':'-';
//                    }else{
//                        g[i][j] = flag == 0? '|':'.';
//                    }
//                }
//                flag = !flag;
//            }
//        }
//
//        for (int i = 0; i < m; ++i) {
//            int first = findFirst(g[i],n);
//            int flag = 0;
//            if (first == -1){
//                continue;
//            }else{
//                int k = first;
//                while (g[i][k] == '0'){
//                    if (i %2 ==0){
//                        g[i][k] = flag ==0 ? '.':'+';
//                    }else{
//                       if (g[i][0] != '.'){
//                           g[i][k] = flag == 0? '/':'|';
//                       }else{
//                           g[i][k] = flag == 0? '|':'/';
//                       }
//                    }
//                    k++;
//                    flag = !flag;
//                }
//            }
//        }
//
//
//
//        for (int i = 0; i < m; ++i) {
//            for (int j = 0; j < n; ++j) {
//                cout<<g[i][j];
//            }
//            if (i != m-1){
//                cout<<endl;
//            }
//        }
//
//
//
//        if (T){
//            cout<<endl;
//        }
//    }
//
//
//    return 0;
//}