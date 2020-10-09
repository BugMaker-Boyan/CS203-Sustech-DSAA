//
// Created by Boyan on 2020/10/7.
//

//math O(log(n))
#include "my_math.h"

double quick_pow(double x, long long N){
    long long n = N>0? N: -N;
    double x_term = x;
    double ans = 1.0;
    while (n>0){
        if(n%2==1){
            ans*=x_term;
        }
        x_term*=x_term;
        n=n>>1;
        //or n=n/2
    }
    return N>0? ans:1.0/ans;
}
