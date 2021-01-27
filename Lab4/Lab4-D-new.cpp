////
//// Created by Boyan on 2020/10/20.
////
//
//#include <iostream>
//using namespace std;
//
//int cnt = 0;
//
//struct node{
//    int value;
//    int id;
//    node* pre;
//    node* next;
//
//    node(int value){
//        this->value = value;
//        this->pre = nullptr;
//        this->next = nullptr;
//    }
//
////    bool operator<(const node& nd) const{
////        return this->value<nd.value;
////    }
////
////    bool operator>(const node& nd) const{
////        return this->value>nd.value;
////    }
////
////    bool operator>=(const node& nd) const{
////        return  !(this->value<nd.value);
////    }
////
////    bool
//
//};
//
////
//// Created by Boyan on 2020/10/6.
////
//
////quick_sort average O(nlog(n))
//
//template <typename T>
//int partition(T array[],int l, int r){
//    T pivot = array[l];
//    int L = l+1,R = r;
//    while (L<=R){
//        while (L<=R && array[L]->value<=pivot->value) L++;
//        while (L<=R && array[R]->value>=pivot->value) R--;
//        if (L<=R && array[L]->value>pivot->value && array[R]->value<pivot->value){
//            T temp = array[R];
//            array[R] = array[L];
//            array[L] = temp;
//        }
//    }
//    array[l] = array[R];
//    array[R] = pivot;
//    return R;
//}
//
//template <typename T>
//void quick_sort(T array[],int l, int r){
//    if (l<r){
//        int pos = partition(array,l,r);
//        quick_sort(array,l,pos-1);
//        quick_sort(array,pos+1,r);
//    }
//}
//
//
//int t,n,value[300005],result[300005];
//
//
//int main(){
//    node** node_arr = new node*[300005];
//    node** sort_node_arr = new node*[300005];
//
//    scanf("%d",&t);
//    while (t--){
//        scanf("%d",&n);
//        for (int i = 0; i < n; ++i) {
//            scanf("%d",&value[i]);
//            node_arr[i] = new node(value[i]);
//            sort_node_arr[i] = node_arr[i];
//        }
//
//        quick_sort(sort_node_arr,0,n-1);
//
//        for (int i = 0; i < n; ++i) {
//            sort_node_arr[i]->id = i;
//        }
//
//        node* root=  new node(-1);
//        node* end = new node(-1);
//        node* nd = root;
//        for (int i = 0; i < n; ++i) {
//            nd->next = sort_node_arr[i];
//            sort_node_arr[i]->pre =nd;
//            nd = nd->next;
//        }
//        nd->next = end;
//        end->pre = nd;
//        int k  = n-1;
//        node* middle = sort_node_arr[(n-1)/2];
//
//        if(n%2 == 0){
//            if(middle->id<node_arr[n-1]->id){
//                node_arr[n-1]->pre->next = node_arr[n-1]->next;
//                node_arr[n-1]->next->pre = node_arr[n-1]->pre;
//            }else{
//                middle = middle->next;
//                node_arr[n-1]->pre->next = node_arr[n-1]->next;
//                node_arr[n-1]->next->pre = node_arr[n-1]->pre;
//            }
//            k--;
//        }
//        int i = 0;
//        result[0] = middle->value;
//        for (i = 1; i < (n+1)/2 && k>=0; ++i) {
//            if (k>0 && node_arr[k]->id > middle->id && node_arr[k-1]->id >middle->id){
//                node_arr[k]->pre->next = node_arr[k]->next;
//                node_arr[k]->next->pre = node_arr[k]->pre;
//                node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                node_arr[k-1]->next->pre = node_arr[k-1]->pre;
//                middle = middle->pre;
////                result[i] = middle->value;
//            }else if((k>0 &&node_arr[k]->id > middle->id && node_arr[k-1]->id <middle->id)||(k>0 &&node_arr[k]->id < middle->id && node_arr[k-1]->id >middle->id)){
//                node_arr[k]->pre->next = node_arr[k]->next;
//                node_arr[k]->next->pre = node_arr[k]->pre;
//                node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                node_arr[k-1]->next->pre = node_arr[k-1]->pre;
////                result[i] = middle->value;
//            }else if (k>0 && node_arr[k]->id < middle->id && node_arr[k-1]->id<middle->id){
//                node_arr[k]->pre->next = node_arr[k]->next;
//                node_arr[k]->next->pre = node_arr[k]->pre;
//                node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                node_arr[k-1]->next->pre = node_arr[k-1]->pre;
//                middle = middle->next;
////                result[i] = middle->value;
//            }else if ( k>0 && node_arr[k]->id == middle->id){
//                if (node_arr[k-1]->id > middle->id){
//                    middle = middle->pre;
//                    node_arr[k]->pre->next = node_arr[k]->next;
//                    node_arr[k]->next->pre = node_arr[k]->pre;
//                    node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                    node_arr[k-1]->next->pre = node_arr[k-1]->pre;
//                }else{
//                    middle = middle->next;
//                    node_arr[k]->pre->next = node_arr[k]->next;
//                    node_arr[k]->next->pre = node_arr[k]->pre;
//                    node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                    node_arr[k-1]->next->pre = node_arr[k-1]->pre;
//                }
////                result[i] = middle->value;
//            }else if (k>0 && node_arr[k-1]->id == middle->id){
//                if (node_arr[k]->id > middle->id){
//                    middle = middle->pre;
//                    node_arr[k]->pre->next = node_arr[k]->next;
//                    node_arr[k]->next->pre = node_arr[k]->pre;
//                    node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                    node_arr[k-1]->next->pre = node_arr[k-1]->pre;
//                }else{
//                    middle = middle->next;
//                    node_arr[k]->pre->next = node_arr[k]->next;
//                    node_arr[k]->next->pre = node_arr[k]->pre;
//                    node_arr[k-1]->pre->next = node_arr[k-1]->next;
//                    node_arr[k-1]->next->pre = node_arr[k-1]->pre;
//                }
////                result[i] = middle->value;
//            }
//            result[i] = middle->value;
//            k= k-2;
//        }
//        for (int j = i-1; j>=0; --j) {
//            printf("%d ",result[j]);
//        }
//
//        if (t){
//            printf("\n");
//        }
//    }
//
//
//    return 0;
//}