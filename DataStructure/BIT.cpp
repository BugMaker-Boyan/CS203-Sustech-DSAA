//
// Created by Boyan on 2020/12/23.
//

#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1005;
#define lowbit(x) ((x)&(-x))

int tree[MAXN];

inline void update(int i,int x){
    for (int pos = i;pos<MAXN;pos+=lowbit(pos)) {
        tree[pos]+=x;
    }
}

inline int query(int n){
    int ans = 0;
    for (int pos = n;pos;pos-=lowbit(pos)) {
        ans+=tree[pos];
    }
    return ans;
}

inline int query(int a, int b){
    return query(b)-query(a-1);
}

