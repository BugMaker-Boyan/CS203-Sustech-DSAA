////
//// Created by Boyan on 2020/9/29.
////
//
//#include <iostream>
//using namespace std;
//
//int selectionSort(int arr[],int n){
//    int total = 0;
//    for (int i = 0; i < n; ++i) {
//        int k = i;
//        for (int j = i+1; j < n; ++j) {
//            total++;
//            if (arr[j]<arr[k]){
//                k = j;
//            }
//        }
//        if (k != i){
//            int temp = arr[k];
//            arr[k] = arr[i];
//            arr[i] = temp;
//            total++;
//        }
//    }
//    return total;
//}
//
//int insertionSort(int arr[],int n){
//    int total = 0;
//    for (int i = 0; i < n; ++i) {
//        for (int j = i; j >= 1 ; j--) {
//            total++;
//            if (arr[j]<arr[j-1]){
//                int temp = arr[j];
//                arr[j] = arr[j-1];
//                arr[j-1] = temp;
//                total++;
//            }else{
//                break;
//            }
//        }
//    }
//    return total;
//}
//
//
//
//int main(){
//    int T;
//    cin>>T;
//    while (T--){
//        int n;
//        cin>>n;
//        int arr1[n];
//        int arr2[n];
//        for (int i = 0; i < n; ++i) {
//            cin>>arr1[i];
//            arr2[i] = arr1[i];
//        }
//
//        int sS = selectionSort(arr1,n);
//        int iS = insertionSort(arr2,n);
//
//        for (int i = 0; i < n; ++i) {
//            cout<<arr1[i];
//            if (i!=n-1){
//                cout<<" ";
//            }
//        }
//        cout<<endl;
//        if (sS<iS){
//            cout<<"Selection Sort wins!";
//        }else{
//            cout<<"Insertion Sort wins!";
//        }
//        if (T) cout<<endl;
//    }
//
//
//
//    return 0;
//}