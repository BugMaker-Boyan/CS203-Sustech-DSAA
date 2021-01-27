////
//// Created by Boyan on 2020/9/8.
////
//
//#include <iostream>
//using namespace std;
//long long T,y,cnt;
//string x;
//
//int solve(string x,int y){
//    int sum = 0;
//    int result;
//    bool flag = false;
//
//    while (1){
//        for (int i = 0; i < x.size(); ++i) {
//            int t = x[i]-'0';
//            sum+=t;
//            if (sum == y){
//                flag = !flag;
//                x[i] = t+1+'0';
//                for (int j = i+1; j < x.size(); ++j) {
//                    x[j] = '0';
//                }
//                break;
//            }
//            if(sum >y){
//                flag = !flag;
//                for (int j = i+1; j < x.size(); ++j) {
//                    x[j] = '0';
//                }
//                break;
//            }
//        }
//        if(!flag){
//            int t = stoi(x)+1;
//            string ts = to_string(t);
//            return solve(ts,y);
//        }else{
//            break;
//        }
//    }
//    result = stoi(x);
//    return result;
//
//}
//
//int main(){
//    cin>>T;
//    while (T--){
//        cin>>x>>y;
//        cnt = 0;
//        int result = solve(x,y);
//        cnt = result - stoi(x);
//        cout<<cnt;
//        if (T){
//            cout<<endl;
//        }
//    }
//
//    return 0;
//}