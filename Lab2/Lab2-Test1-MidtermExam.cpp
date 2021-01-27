////
//// Created by Boyan on 2020/9/22.
////
//
////期中题 找bug
//
//#include <iostream>
//using namespace std;
//
//int solve(int Arr[],int length,int k){
//    int min = 0, max = length-1,mid;//length-1 bug1
//    while (min<max){
//        //向上取中值，防止死循环，如Arr=1，2，2 奇数个，找2，之后就会min=1，max=2，一直死循环
//        mid = (max+min+1)/2;//第二处bug 要向上取
//        if (Arr[mid] <= k){//第三处bug = 号
//            min = mid;
//        }else{
//            max = mid - 1;
//        }
//    }
//    if (Arr[max] == k){
//        return max;
//    }else{
//        return -1;
//    }
//}
//
//int main(){
//    int arr[] = {1,2,3,4,5,6,6,7,7,7,8};
//    arr[50]=1;
//    cout<<solve(arr,11,7)<<endl;
//    return 0;
//}