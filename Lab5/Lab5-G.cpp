////
//// Created by Boyan on 2020/10/28.
////
//
//#include <iostream>
//#pragma GCC optimize(2)
//using namespace std;
//
//struct mountain{
//    int height;
//    int pos;
//    mountain(){
//        height = 0;
//        pos = 0;
//    }
//};
//
//struct myStack{
//    mountain* data;
//    int top;
//
//    myStack(int n){
//        data = new mountain[n+5];
//        top = -1;
//    }
//
//    void push(mountain& x){
//        data[++top] = x;
//    }
//
//    void pop(){
//        top--;
//    }
//
//    mountain& get_top(){
//        return data[top];
//    }
//
//    bool isEmpty(){
//        return top==-1;
//    }
//
//};
//
//int n,q,l,r;
//
//int get_lowBit(int x){
//    return x&(-x);
//}
//
//
//void change(int arr[],int x,int val){
//    while (x<=n){
//        arr[x]+=val;
//        x+=get_lowBit(x);
//    }
//}
//
//int get_sum(int arr[],int x){
//    int sum = 0;
//    while (x>0){
//        sum+=arr[x];
//        x-=get_lowBit(x);
//    }
//    return sum;
//}
//
//struct happy_pair{
//    int l,r,pos;
//    bool operator < (happy_pair& b)const{
//        return r<=b.r;
//    }
//    happy_pair(){
//        l = 0;
//        r = 0;
//    }
//};
//
//
//
//
//
////merge_sort O(nlog(n))
//template <typename T>
//void merge(T array[],int l, int r,int middle,T* temp){
//    int i = l;
//    int j = middle+1;
//    int k = l;
//    while (i<=middle && j<=r){
//        if (array[i].r<=array[j].r){
//            temp[k++]=array[i++];
//        }else{
//            temp[k++]=array[j++];
//        }
//    }
//    while (i<=middle){
//        temp[k++]=array[i++];
//    }
//    while (j<=r){
//        temp[k++]=array[j++];
//    }
//    for (int m = l; m <=r ; ++m) {
//        array[m]=temp[m];
//    }
//}
//
//
//template <typename T>
//void merge_sort(T array[],int l, int r,T* temp){
//    if (l<r){
//        int middle = (l+r)/2;
//        merge_sort(array,l,middle,temp);
//        merge_sort(array,middle+1,r,temp);
//        merge(array,l,r,middle,temp);
//    }
//}
//
//
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    cin>>n>>q;
//
//    int tree_arr[n+1];
//    mountain mountains[n+1];
//    myStack s(n);
//
//    for (int i = 1; i <= n; ++i) {
//        cin>>mountains[i].height;
//        mountains[i].pos = i;
//        tree_arr[i]=0;
//    }
//
//    happy_pair pairs[q];
//    happy_pair pairs_sorted[q];
//    happy_pair pairs_temp[q];
//    int ans[q];
//    for (int i = 0; i < q; ++i) {
//        cin>>pairs[i].l>>pairs[i].r;
//        pairs[i].pos = i;
//        pairs_sorted[i].l = pairs[i].l;
//        pairs_sorted[i].r = pairs[i].r;
//        pairs_sorted[i].pos = pairs[i].pos;
//    }
//    merge_sort(pairs_sorted,0,q-1,pairs_temp);
//
//    int last_r = 0;
//    for (int i = 0; i < q; ++i) {
//        int r = pairs_sorted[i].r;
//        if (last_r<r){
//            int left = last_r+1;
//            while (left<=r){
//                    bool flag = false;
//                    while (!s.isEmpty() && mountains[left].height>=s.get_top().height){
//                        change(tree_arr,s.get_top().pos,1);
//                        if (s.get_top().height == mountains[left].height) flag = true;
//                        s.pop();
//                    }
//                    if (!s.isEmpty()){
//                        if (!flag){
//                            change(tree_arr,s.get_top().pos,1);
//                        }
//                    }
//                    s.push(mountains[left]);
//                    left++;
//            }
//            last_r = r;
//            ans[pairs_sorted[i].pos] = get_sum(tree_arr,r-1)-get_sum(tree_arr,pairs_sorted[i].l-1);
//        }else if (last_r == r){
//            ans[pairs_sorted[i].pos] = get_sum(tree_arr,r-1)-get_sum(tree_arr,pairs_sorted[i].l-1);
//        }
//    }
//
//    for (int i = 0; i < q; ++i) {
//        printf("%d\n",ans[i]);
//    }
//
//    return 0;
//}