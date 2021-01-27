//
// Created by Boyan on 2020/11/2.
//



#include <bits/stdc++.h>
using namespace std;


//the worst case O(n*m) but it is almost not possible
int rabin_Karp(const char* T, int n,const char* P,int m,int d, int q){
    int p = 0,t = 0,h=1;
    for (int i = 0; i < m-1; ++i) {
        h = (h*d)%q;
    }
    for (int i = 0; i < m; ++i) {
        p=(d*p+P[i])%q;
        t=(d*t+T[i])%q;
    }
    for (int i = 0; i <= n-m; ++i) {
        if (p!=t){
            t = (d*(t-T[i]*h)+T[i+m])%q;
            //modify minus t
            if (t<0){
                t+=q;
            }
        }else{
            int j = 0;
            for (; j < m; ++j) {
                if (P[j]!=T[i+j]){
                    break;
                }
            }
            if (j==m){
                return i;
            }
        }
    }
    return -1;
}

//int main(){
//    const char* P="aba";
//    const char* T="abcbcaba";
//    int pos = rabin_Karp(T,8,P,3,10,49999);
//    cout<<pos<<endl;
//}