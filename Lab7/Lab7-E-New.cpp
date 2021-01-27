//
//
////
//// Created by Boyan on 2020/11/17.
////
//
//#include <iostream>
//using namespace std;
//class PriorityQueue{
//private:
//    int* arr;
//    int m_size;
//    int m_capacity;
//public:
//    PriorityQueue(int capacity){
//        arr = new int[capacity+1];
//        m_capacity = capacity;
//        m_size = 0;
//    }
//    ~PriorityQueue(){
//        delete [] arr;
//    }
//
//    void swap(int x, int y){
//        int temp = arr[x];
//        arr[x] = arr[y];
//        arr[y] = temp;
//    }
//
//    void pop(int index){
//        while (index>1){
//            if (arr[index]<arr[index/2]){
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
//            if (2*index<=m_size) min_index = arr[min_index]>arr[2*index]? 2*index:min_index;
//            if (2*index+1<=m_size) min_index = arr[min_index]>arr[2*index+1]? 2*index+1:min_index;
//            if (min_index != index){
//                swap(min_index,index);
//                index = min_index;
//            } else{
//                break;
//            }
//        }
//    }
//
//    int pop_Min(){
//        int val = arr[1];
//        swap(1,m_size);
//        m_size--;
//        sink(1);
//        return val;
//    }
//
//    void push(int val){
//        arr[++m_size] = val;
//        pop(m_size);
//
//    }
//
//    int get_Size(){
//        return m_size;
//    }
//};
//
//
//int main(){
//    int t,cost,n,x;
//    cin>>t;
//    while (t--){
//        cost = 0;
//        cin>>n;
//        PriorityQueue q(n);
//        for (int i = 0; i < n; ++i) {
//            cin>>x;
//            q.push(x);
//        }
//        while (q.get_Size()>1){
//            int x1 = q.pop_Min();
//            int x2 = q.pop_Min();
//            cost = cost + x1 + x2;
//            q.push(x1+x2);
//        }
//        cout<<cost;
//
//
//        if (t)cout<<endl;
//    }
//
//
//    return 0;
//}