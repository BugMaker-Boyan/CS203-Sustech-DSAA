////
//// Created by Boyan on 2020/11/23.
////
//#include <iostream>
//using namespace std;
//
//
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
//int main(){
//    int arr[] = {9,5,4,8,3,4,0,99,10};
//    PriorityQueue pq(9);
//    for (int i = 0; i < 9; ++i) {
//        pq.push(arr[i]);
//    }
//    for (int i = 0; i < 9; ++i) {
//        cout<<pq.pop_Min()<<endl;
//    }
//    cout<<pq.get_Size()<<endl;
//
//    return 0;
//}