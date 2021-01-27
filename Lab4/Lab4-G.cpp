////
//// Created by Boyan on 2020/10/16.
////
//
//#include <iostream>
//#include <cstring>
//using namespace std;
//#define maxN 200005
//#define MOD 1000000007
//typedef long long ll;
//
//ll l[maxN],r[maxN],value[maxN],pos[maxN],l_max[85],r_max[85],T,n,k,result,max_l[85],max_r[85];
//
//ll get_contribution(int x){
//    if (x<1 || x>n){
//        return 0;
//    }
//    ll left_num = 1, right_num = 1;
//    max_l[0] = max_r[0] = value[x];
//    l_max[0] = x - l[x];
//    r_max[0] = r[x] - x;
//    bool flag1 = false;
//    bool flag2 = false;
//    for (int i = l[x]; i>=1 ; i = l[i]) {
//        l_max[left_num] = i-l[i];
//        max_l[left_num] = max(value[i],max_l[left_num-1]);
//        if (left_num == k-1) {
//            flag1 = true;
//            break;
//        }
//        left_num++;
//    }
//    if (flag1== false){
//        left_num--;
//    }
//    for (int i = r[x]; i <=n ; i = r[i]) {
//        r_max[right_num] = r[i]-i;
//        max_r[right_num] = max(value[i],max_r[right_num-1]);
//        if (right_num == k-1){
//            flag2 = true;
//            break;
//        }
//        right_num++;
//    }
//    if (flag2== false){
//        right_num--;
//    }
//
//    ll result = 0;
//    for (int i = 0; i <=left_num ; ++i) {
//        if (k-i-1<=right_num){
//            ll max_num = max(max_l[i],max_r[k-i-1]);
//            result+=(((max_num%MOD)*(value[x]%MOD))%MOD)*(l_max[i])*(r_max[k-i-1]);
//        }
//    }
//    return result;
//
//}
//void del(ll x){
//    if(x>=1 && x<=n){
//        ll lx = l[x],rx = r[x];
//        r[lx] = rx;
//        l[rx] = lx;
//    }
//
//}
//
//int main(){
//    scanf("%lld",&T);
//    while (T--){
//        scanf("%lld",&n);
//        scanf("%lld",&k);
//
//        memset(l,0,sizeof(l));
//        memset(r,0,sizeof(r));
//        memset(value,0,sizeof(value));
//        memset(pos,0,sizeof(pos));
//        memset(r_max,0,sizeof(r_max));
//        memset(l_max,0,sizeof(l_max));
//        memset(max_r,0,sizeof(max_r));
//        memset(max_l,0,sizeof(max_l));
//
//        for (int i = 1; i <= n; ++i) {
//            scanf("%lld",&value[i]);
//            pos[value[i]] = i;
//            l[i] = i-1;
//            r[i] = i+1;
//        }
//        r[0] = 1,r[n+1]=n+1;
//        l[0] = 0,l[n+1]=n;
//        result = 0;
//        for (int i = 1; i <= n ; ++i) {
//            int x = pos[i];
//            result+=get_contribution(x);
//            del(x);
//        }
//        printf("%lld",result);
//        if (T){
//            printf("\n");
//        }
//    }
//
//
//
//    return 0;
//}