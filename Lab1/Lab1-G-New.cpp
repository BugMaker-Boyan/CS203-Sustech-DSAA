////
//// Created by Boyan on 2020/9/9.
////
//
//#include <iostream>
//using namespace std;
//
//long long pow(int x,int y){
//    long long result = 1;
//    for (int i = 0; i < y; ++i) {
//        result = result*x;
//    }
//    return result;
//}
//
//
//long long solve(string n,int s){
//    int sum = 0;
//    string copy = n;
//    for (int i = 0; i < n.size(); ++i) {
//        int x = n[i]-'0';
//        sum+=x;
//        if (sum>s){
//            if (i-1 >= 0){
//                if (n[i-1]!='9'){
//                    n[i-1]++;
//                    for (int j = i; j < n.size(); ++j) {
//                        n[j]='0';
//                    }
//                    return stoll(n)-stoll(copy);
//                }else{
//                    int t = -1;
//                    for (int j = i-2; j >= 0; --j) {
//                        if (n[j]!='9'){
//                            t = j;
//                            break;
//                        }
//                    }
//                    if (t != -1){
//                        n[t]++;
//                        for (int j = t+1; j < n.size(); ++j) {
//                            n[j]='0';
//                        }
//                        return stoll(n)-stoll(copy);
//                    }else{
//                        return pow(10,n.size())-stoll(copy);
//                    }
//                }
//            }else{
//                return pow(10,n.size())-stoll(copy);
//            }
//        }else if(sum == s){
//            int flag = -1;
//            for (int j = i+1; j < n.size(); ++j) {
//                if (n[j] != '0'){
//                    flag = 0;
//                }
//            }
//            if (flag == -1){
//                return 0;
//            }
//            if (i-1>=0){
//                if (n[i-1] != '9'){
//                    n[i-1]++;
//                    for (int j = i; j < n.size(); ++j) {
//                        n[j]='0';
//                    }
//                    return stoll(n)-stoll(copy);
//                }else{
//                    int t = -1;
//                    for (int j = i-2; j >= 0; --j) {
//                        if (n[j]!='9'){
//                            t = j;
//                            break;
//                        }
//                    }
//                    if (t != -1){
//                        n[t]++;
//                        for (int j = t+1; j < n.size(); ++j) {
//                            n[j]='0';
//                        }
//                        return stoll(n)-stoll(copy);
//                    }else{
//                        return pow(10,n.size())-stoll(copy);
//                    }
//                }
//            }else{
//                for (int j = 1; j < n.size(); ++j) {
//                    if (n[j]!='0'){
//                        return pow(10,n.size())-stoll(copy);
//                    }
//                }
//                return 0;
//            }
//        }
//    }
//    return 0;
//}
//
//
//int main(){
//    int T,s;
//    long long n;
//    cin>>T;
//    while (T--){
//        cin>>n>>s;
//        string str = to_string(n);
//        cout<<solve(str,s);
//        if (T){
//            cout<<endl;
//        }
//    }
//    return 0;
//}
//
//
