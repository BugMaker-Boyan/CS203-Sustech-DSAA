////
//// Created by Boyan on 2020/9/29.
////
//
//#include <iostream>
//using namespace std;
//
//int main(){
//    int T,n,m;
//    cin>>T;
//    while (T--){
//        cin>>n>>m;
//        long arr1[100000+5];
//        long arr2[100000+5];
//        for (int i = 0; i < n; ++i) {
//            cin>>arr1[i];
//        }
//        for (int i = 0; i < m; ++i) {
//            cin>>arr2[i];
//        }
//
//        long ret[200000+5];
//
//        int i = 0;
//        int j = 0;
//        int k = 0;
//        while (i<n && j <m){
//            if (arr1[i]<=arr2[j]){
//                ret[k++] = arr1[i++];
//            }else{
//                ret[k++] = arr2[j++];
//            }
//        }
//        while (i<n){
//            ret[k++]=arr1[i++];
//        }
//        while (j<m){
//            ret[k++]=arr2[j++];
//        }
//        for (int l = 0; l < n+m; ++l) {
//            cout<<ret[l];
//            if (l!=n+m-1){
//                cout<<" ";
//            }
//        }
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
