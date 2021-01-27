////
//// Created by Boyan on 2020/9/8.
////
//
//#include <iostream>
//using namespace std;
//int T,n;
//
//
//int main(){
//    cin>>T;
//    while (T--){
//        cin>>n;
//        int array[n],max,result;
//        for (int i = 0; i < n; ++i) {
//            cin>>array[i];
//        }
//        if (n == 2){
//            result = array[0]-array[1];
//        }else{
//            result = array[0] - array[1];
//            max = array[0]>array[1]? array[0]:array[1];
//            for (int i = 2; i < n; ++i) {
//                if (max - array[i] > result){
//                    result = max - array[i];
//                }
//                if (max<array[i]){
//                    max = array[i];
//                }
//            }
//        }
//        cout<<result;
//        if (T){
//            cout<<endl;
//        }
//
//    }
//
//    return 0;
//}