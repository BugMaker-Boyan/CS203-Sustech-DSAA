////
//// Created by Boyan on 2020/10/28.
////
//
//#include <iostream>
//using namespace std;
//
//class MyPriorityQueue{
//
//public:
//    MyPriorityQueue(int capacity){
//        m_capacity = capacity;
//        m_size = 0;
//        m_data = new int [capacity+1];
//    }
//    ~MyPriorityQueue(){
//        delete [] m_data;
//    }
//
//    void insert(int x){
//        m_size++;
//        m_data[m_size] = x;
//        int maintain_index = m_size;
//        while (maintain_index>1 && comp(m_data[maintain_index],m_data[maintain_index/2])){
//            swap(m_data[maintain_index/2],m_data[maintain_index]);
//            maintain_index/=2;
//        }
//    }
//
//    int top(){
//        return m_data[1];
//    }
//
//    void pop(){
//        swap(m_data[1],m_data[m_size--]);
//        int maintain_index = 1;
//        while (maintain_index*2<=m_size){
//            int temp = maintain_index*2;
//            if (temp<m_size && comp(m_data[temp+1],m_data[temp])) temp++;
//            if (comp(m_data[temp],m_data[maintain_index])){
//                swap(m_data[temp],m_data[maintain_index]);
//                maintain_index = temp;
//            }else{
//                break;
//            }
//        }
//    }
//
//    int get_size(){
//        return m_size;
//    }
//
//    bool isEmpty(){
//        return m_size==0;
//    }
//
//
//private:
//    int m_size;
//    int m_capacity;
//    int* m_data;
//
//    bool comp(int a,int b){
//        return a>b;
//    }
//};
//
//
//
//
//int main(){
//
//    MyPriorityQueue q(100);
//    q.insert(2);
//    q.insert(3);
//    q.insert(1);
//    q.insert(100);
//    q.insert(4);
//    q.insert(5);
//
//    cout<<q.top()<<endl;
//    q.pop();
//    cout<<q.top()<<endl;
//
//
//
//
//
//    return 0;
//}