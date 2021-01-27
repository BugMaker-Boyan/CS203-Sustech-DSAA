////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//
//struct Player{
//    int ddl;
//    int power;
//    Player(int ddl, int power){
//        this->ddl = ddl;
//        this->power = power;
//    }
//
//};
//
//bool comp(Player* p1, Player* p2){
//    return p1->ddl < p2->ddl;
//}
//
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
//    int get_Min(){
//        return arr[1];
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
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    int t,n;
//    cin>>t;
//    while (t--){
//        int ans = 0;
//        cin>>n;
//        PriorityQueue pq(n);
//        int a_arr[n];
//        int ddl;
//        for (int i = 0; i < n; ++i) {
//            cin>>a_arr[i];
//        }
//        Player* arr[n];
//        for (int i = 0; i < n; ++i) {
//            cin>>ddl;
//            arr[i] = new Player(ddl,a_arr[i]);
//        }
//        sort(arr,arr+n,comp);
//
//        int t = 1;
//        for (int i = 0; i < n; ++i) {
//            if (pq.get_Size()==0){
//                pq.push(arr[i]->power);
//                t++;
//            }
//            if (t<=arr[i]->ddl){
//                pq.push(arr[i]->power);
//                t++;
//            } else{
//                if (pq.get_Min()<arr[i]->power){
//                    pq.pop_Min();
//                    pq.push(arr[i]->power);
//                }
//            }
//        }
//
//        while (pq.get_Size()!=0){
//            ans+=pq.pop_Min();
//        }
//
//        cout<<ans;
//        if (t) cout<<endl;
//    }
//
//
//    return 0;
//}