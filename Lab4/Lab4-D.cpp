////
//// Created by Boyan on 2020/10/13.
////
//
//#include <iostream>
//using namespace std;
//typedef long long ll;
//#include <queue>
//
//
//
//
//int main(){
//    int T;
//    scanf("%d",&T);
//    ll n;
//
//    while (T--){
//        scanf("%lld",&n);
//        priority_queue <long long,vector<long long>> max_heap;
//        priority_queue <long long,vector<long long>,greater<long long>> min_heap;
//        ll middle;
//        ll arr[n];
//        for (int i = 0; i < n; ++i) {
//            scanf("%lld",&arr[i]);
//        }
//        middle = arr[0];
//        printf("%lld ",middle);
//        for (int i = 1; i < n; ++i) {
//            if (arr[i]<middle){
//                if (min_heap.size()>max_heap.size()){
//                    max_heap.push(arr[i]);
//                }else{
//                    min_heap.push(middle);
//                    if (!max_heap.empty()){
//                        if (arr[i]<max_heap.top()){
//                            middle = max_heap.top();
//                            max_heap.pop();
//                            max_heap.push(arr[i]);
//                        }else{
//                            middle = arr[i];
//                        }
//                    }else{
//                        middle = arr[i];
//                    }
//                }
//            }else{
//                if (min_heap.size()>max_heap.size()){
//                    max_heap.push(middle);
//                    if (arr[i]<min_heap.top()){
//                        middle = arr[i];
//                    }else{
//                        middle = min_heap.top();
//                        min_heap.pop();
//                        min_heap.push(arr[i]);
//                    }
//                }else{
//                    min_heap.push(arr[i]);
//                }
//            }
//            if (i%2 == 0){
//                printf("%lld ",middle);
//            }
//        }
//        if (T){
//            printf("\n");
//        }
//    }
//
//
//
//    return 0;
//}