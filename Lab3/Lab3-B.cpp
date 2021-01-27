////
//// Created by Boyan on 2020/9/29.
////
//
//#include <iostream>
//using namespace std;
//
//int n,k;
//
//int partition(int arr[],int l,int r){
//    int p = l;
//    int pivot = arr[p];
//    int L = l+1;
//    int R = r;
//    while (L <= R){
//        while (L<=R && arr[L]<= pivot) L++;
//        while (L<=R && arr[R]>= pivot) R--;
//        if (L<=R && arr[L] > pivot && arr[R] <pivot ){
//            int temp = arr[R];
//            arr[R] = arr[L];
//            arr[L] = temp;
//            L++;
//            R--;
//        }
//    }
//    arr[p] = arr[R];
//    arr[R] = pivot;
//
//    return R;
//}
//
//int quickSort(int arr[],int l, int r){
//    while (true){
//        int pos = partition(arr,l,r);
//        if (pos == k){
//            return arr[k];
//        }else if (pos < k){
//            l = pos + 1;
//        }else{
//            r = pos -1;
//        }
//    }
//}
//
//int main(){
//    scanf("%d %d",&n,&k);
//    int A[n+1];
//    for (int i = 1; i <= n; ++i) {
//        int temp;
//        scanf("%d",&temp);
//        A[i]=temp;
//    }
//    int ret = quickSort(A,1,n);
//    printf("%d",ret);
//
//    return 0;
//}