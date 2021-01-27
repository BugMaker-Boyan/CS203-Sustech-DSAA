//
// Created by Boyan on 2020/11/2.
//

#include <bits/stdc++.h>
using namespace std;


//O(m)
void get_next(int next[],const char* P,int m){
    int i = 0;
    int j = -1;
    next[0] = -1;
    for (; i < m;) {
        if (j == -1 || P[i]==P[j]){
            i++;
            j++;
            if (i>=m) break;
            if (P[i]==P[j]){
                next[i] = next[j];
            }else{
                next[i] = j;
            }
        }else{
            j = next[j];
        }
    }
}


//O(n+m)
int kmp_search(const char* T,int n,const char* P,int m){
    int Next[m];
    get_next(Next,P,m);
    int i=0,j=0;
    while (i<n && j<m){
        if (j==-1||T[i] == P[j]){
            i++;
            j++;
        }else{
            j = Next[j];
        }
    }
    if (j == m){
        return i-j;
    }else{
        return -1;
    }
}

//int main(){
//    const char* P="ab";
//    const char* T="abcbcaba";
//    int pos = kmp_search(T,8,P,2);
//    cout<<pos<<endl;
//}