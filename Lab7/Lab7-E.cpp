//
// Created by Boyan on 2020/11/17.
//

//
//#include <iostream>
//#include <queue>
//using namespace std;
//
//
//int main(){
//    int t,cost=0,n,x;
//    cin>>t;
//    while (t--){
//        cost = 0;
//        cin>>n;
//        priority_queue<int,vector<int>,greater<int>> q;
//        int lens[n];
//        for (int i = 0; i < n; ++i) {
//            cin>>x;
//            q.push(x);
//            lens[i]=x;
//        }
//        while (q.size()>1){
//            int x1 = q.top();q.pop();
//            int x2 = q.top();q.pop();
//            cost = cost + x1 + x2;
//            q.push(x1+x2);
//        }
//        cout<<cost;
//
//        if (t)cout<<endl;
//    }
//
//
//    return 0;
//}