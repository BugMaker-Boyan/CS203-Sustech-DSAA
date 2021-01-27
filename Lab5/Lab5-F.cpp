////
//// Created by Boyan on 2020/10/28.
////
//
//#include <iostream>
//using namespace std;
//const int maxN = 3e6;
//struct myDeque{
//    int m_size;
//    int m_front;
//    int m_rear;
//    int* data;
//
//
//    myDeque(){
//        m_size = m_front = m_rear = 0;
//        data = new int[maxN];
//    }
//
//    ~myDeque(){
//        delete [] data;
//    }
//
//    void push_rear(int x){
//        if (m_size != maxN){
//
//            data[m_rear] = x;
//
//            m_rear = (m_rear+1)%maxN;
//
//            m_size++;
//        }
//    }
//
//    void push_front(int x){
//        if (m_size!=maxN){
//            m_front = (m_front-1+maxN)%maxN;
//            data[m_front] = x;
//            m_size++;
//        }
//    }
//
//    void pop_rear(){
//        if (m_size != 0){
//            m_rear = (m_rear-1+maxN)%maxN;
//            m_size--;
//        }
//    }
//
//    void pop_front(){
//        if (m_size!=0){
//            m_front = (m_front+1)%maxN;
//            m_size--;
//        }
//    }
//
//    int get_front(){
//        if (m_size!=0){
//            return data[m_front];
//        }else{
//            return -1;
//        }
//    }
//
//    int get_rear(){
//        if (m_size!=0){
//            return data[(m_rear-1+maxN)%maxN];
//        }else{
//            return -1;
//        }
//    }
//
//    bool isEmpty(){
//        return m_size == 0;
//    }
//
//
//};
//
//
//int k,n;
//
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//
//
//    cin>>k>>n;
//    int arr[n],ans=0,i=0,j=0;
//
//    for (int i = 0; i < n; ++i) {
//        cin>>arr[i];
//    }
//
//    myDeque min_deque;
//    myDeque max_deque;
//
//
//    for (j = 0; j < n; ++j) {
//        while (!min_deque.isEmpty() && arr[min_deque.get_rear()]>=arr[j]) min_deque.pop_rear();
//        min_deque.push_rear(j);
//        while (!max_deque.isEmpty() && arr[max_deque.get_rear()]<=arr[j]) max_deque.pop_rear();
//        max_deque.push_rear(j);
//
//        while (arr[max_deque.get_front()]-arr[min_deque.get_front()]>k){
//            if (max_deque.get_front()>min_deque.get_front()){
//                i = min_deque.get_front()+1;
//                min_deque.pop_front();
//            }else{
//                i = max_deque.get_front()+1;
//                max_deque.pop_front();
//            }
//        }
//        ans = max(ans,j-i+1);
//    }
//
//    cout<<ans<<endl;
//
//
//
//
//
//
//    return 0;
//}