////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//class node{
//public:
//    int val;
//    int index;
//    node(int value, int index){
//        this->val = value;
//        this->index = index;
//    }
//};
//
//class PriorityQueue{
//public:
//    node** arr;
//    int m_size;
//    int m_capacity;
//public:
//    PriorityQueue(int capacity){
//        arr = new node*[capacity+1];
//        m_capacity = capacity;
//        m_size = 0;
//    }
//    ~PriorityQueue(){
//        delete [] arr;
//    }
//
//    void swap(int x, int y){
//        node* temp = arr[x];
//        arr[x] = arr[y];
//        arr[y] = temp;
//    }
//
//    void pop(int index){
//        while (index>1){
//            if (arr[index]->val>arr[index/2]->val){
//                swap(index,index/2);
//                index/=2;
//            } else{
//                break;
//            }
//        }
//    }
//
//    void sink(int index){
//        while (2*index<=m_size){
//            int min_index = index;
//            if (2*index<=m_size) min_index = arr[min_index]->val<arr[2*index]->val? 2*index:min_index;
//            if (2*index+1<=m_size) min_index = arr[min_index]->val<arr[2*index+1]->val? 2*index+1:min_index;
//            if (min_index != index){
//                swap(min_index,index);
//                index = min_index;
//            } else{
//                break;
//            }
//        }
//    }
//
//    node* pop_Min(){
//        node* val = arr[1];
//        swap(1,m_size);
//        m_size--;
//        sink(1);
//        return val;
//    }
//
//    void push(node* val){
//        arr[++m_size] = val;
//        pop(m_size);
//
//    }
//
//    int get_Size(){
//        return m_size;
//    }
//
//};
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t,n,val,target;
//    cin>>t;
//    while (t--){
//        cin>>n;
//        PriorityQueue pq(n);
//        for (int i = 1; i <= n; ++i) {
//            cin>>val;
//            pq.push(new node(val,i));
//        }
//        cin>>target;
//        queue<int> q;
//        q.push(1);
//        int level = 1,cnt = 0;
//        while (!q.empty()){
//            cnt = 1;
//            int q_size = q.size();
//            bool flag = false;
//            for (int i = 0; i < q_size; ++i) {
//                int pos = q.front();q.pop();
//                if (pq.arr[pos]->index == target){
//                    flag = true;
//                    break;
//                }
//                if (2*pos <= pq.m_size) q.push(2*pos);
//                if (2*pos+1 <= pq.m_size) q.push(2*pos+1);
//                cnt++;
//            }
//            if (flag) break;
//            level++;
//        }
//        cout<<level<<" "<<cnt;
//
//
//        if (t) cout<<endl;
//    }
//
//
//    return 0;
//}