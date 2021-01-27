////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//using namespace std;
//class PriorityQueue{
//private:
//    long long* arr;
//    long long m_size;
//    long long m_capacity;
//public:
//    PriorityQueue(long long capacity){
//        arr = new long long[capacity+1];
//        m_capacity = capacity;
//        m_size = 0;
//    }
//    ~PriorityQueue(){
//        delete [] arr;
//    }
//
//    void swap(long long x, long long y){
//        long long temp = arr[x];
//        arr[x] = arr[y];
//        arr[y] = temp;
//    }
//
//    void pop(long long index){
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
//    void sink(long long index){
//        while (2*index<=m_size){
//            long long min_index = index;
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
//    long long pop_Min(){
//        long long val = arr[1];
//        swap(1,m_size);
//        m_size--;
//        sink(1);
//        return val;
//    }
//
//    long long get_Min(){
//        return arr[1];
//    }
//
//    void push(long long val){
//        arr[++m_size] = val;
//        pop(m_size);
//
//    }
//
//    long long get_Size(){
//        return m_size;
//    }
//};
//
//long long get_a(long long n){
//    long long sum = n;
//    while (n!=0){
//        sum+=n%10;
//        n/=10;
//    }
//    return sum;
//}
//
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    long long t,k,s,last_ans,num;
//    cin>>t>>k>>s;
//    last_ans = s;
//    PriorityQueue pq(k);
//    for (long long i = 1; i <= t; ++i) {
//
//        num = get_a(i+last_ans);
//
//
//        if (pq.get_Size()<k){
//            pq.push(num);
//        } else{
//            if (pq.get_Min()<num){
//                pq.pop_Min();
//                pq.push(num);
//            }
//        }
//        if (i % 100 == 0){
//            cout<<pq.get_Min()<<" ";
//            last_ans = pq.get_Min();
//        }
//    }
//
//    return 0;
//}