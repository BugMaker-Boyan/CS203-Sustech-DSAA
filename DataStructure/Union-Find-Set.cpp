////
//// Created by Boyan on 2020/12/23.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//const int MAXN = 5005;
//
//int n;
//
//int Rank[MAXN];
//int parent[MAXN];
//
//int find(int x){
//    return x==parent[x]? x:(parent[x] = find(parent[x]));
//}
//
//void to_union(int x1,int x2){
//    int f1 = find(x1);
//    int f2 = find(x2);
//    if (Rank[f1]<=Rank[f2]){
//        parent[f1] = f2;
//    }else{
//        parent[f2] = f1;
//    }
//    if (Rank[f1] == Rank[f2]&&f1!=f2){
//        Rank[f2]++;
//    }
//}
//
//void init(){
//    for (int i = 1; i <= n ; ++i) {
//        parent[i] = i;
//        Rank[i] = 1;
//    }
//}