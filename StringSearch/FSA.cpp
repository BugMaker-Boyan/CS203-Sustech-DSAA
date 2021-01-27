//
// Created by Boyan on 2020/11/2.
//

#include <bits/stdc++.h>
using namespace std;

int transition[100][100];

//O(m*len)
void getTransition(string& P,int alphabet[],int len){
    int m = P.size(),X=0;
    for (int i = 0; i < len; ++i) {
        if (alphabet[i]==P[0]-'0') transition[0][alphabet[i]]=1;
        else transition[0][alphabet[i]]=0;
    }

    for (int j = 0; j <= m-2; ++j) {
        for (int i = 0; i < len; ++i) {
            if (alphabet[i]==P[j+1]-'0') transition[j+1][alphabet[i]]=j+2;
            else transition[j+1][alphabet[i]]=transition[X][alphabet[i]];
        }
        X = transition[X][P[j+1]-'0'];
    }
}
//O(n+m*len)
int FSA(string& T, string &P,int alphabet[],int len){
    int n = T.size(),m = P.size();
    getTransition(P,alphabet,len);
    int q = 0;
    for (int i = 0; i < n; ++i) {
        q = transition[q][T[i]-'0'];
        if (q==m){
            return i-m+1;
        }
    }
    return -1;
}



//int main(){
//    string P = "baaa";
//    string T = "aaabaabaaab";
//    int alphabet[] = {'a'-'0','b'-'0'};
//    cout<<FSA(T,P,alphabet,2);
//    return 0;
//}