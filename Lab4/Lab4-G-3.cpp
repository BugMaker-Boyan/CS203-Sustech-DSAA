////
//// Created by Boyan on 2020/10/16.
////
//#include <iostream>
//using namespace std;
//typedef long long ll;
//#define maxN 100010
//#define MOD 1000000007
//ll Last[maxN],Next[maxN],value[maxN],pos[maxN],leftMax[85],rightMax[85],left_dif[85],right_dif[85];
//int t,n,k;
//
//int main(){
//    scanf("%d",&t);
//    while (t--){
//        scanf("%d",&n);
//        scanf("%d",&k);
//
//        for (int i = 1; i <=n ; ++i) {
//            scanf("%lld",&value[i]);
//            pos[value[i]] = i;
//            Last[i] = i-1;
//            Next[i] = i+1;
//        }
//        Next[0] = 1;
//        Last[n+1] = n;
//
//        ll result = 0;
//        for (int i = 1; i <=n ; ++i) {
//
//            int left_size = 1;
//            int right_size = 1;
//
//
//            int p = pos[i];
//            leftMax[0]=i;
//
//            if (Last[p]>=1){
//                left_dif[0]=p-Last[p];
//            }else{
//                left_dif[0]=p;
//            }
//            rightMax[0]=i;
//            if (Next[p]<=n){
//                right_dif[0]=Next[p]-p;
//            }else{
//                right_dif[0]=n+1-p;
//            }
//            ll temp;
//            for (int i = Last[p];i>=1 && left_size<k;i=Last[i]) {
//                temp = leftMax[left_size-1];
//                if (value[i]>temp){
//                    leftMax[left_size]=value[i];
//                }else{
//                    leftMax[left_size]=temp;
//                }
//                if (Last[i]>=1){
//                    left_dif[left_size++] = i-Last[i];
//                } else{
//                    left_dif[left_size++] = i;
//                }
//            }
//
//            for (int i = Next[p];i<=n && right_size<k;i=Next[i]) {
//                temp = rightMax[right_size-1];
//                if (value[i]>temp){
//                    rightMax[right_size] = value[i];
//                }else{
//                    rightMax[right_size]=temp;
//                }
//                if (Next[i]<=n){
//                    right_dif[right_size++] = Next[i] - i;
//                }else{
//                    right_dif[right_size++] = n+1-i;
//                }
//            }
//            for (int j = 0; j <= left_size-1; ++j) {
//                if (k-j-1<=right_size-1 && k-j-1>=0){
//                    ll max_num = max(leftMax[j],rightMax[k-j-1]);
//                    result+=((max_num%MOD)*(i%MOD)*(left_dif[j]%MOD)*(right_dif[k-j-1]%MOD))%MOD;
//                }
//            }
//            ll l = Last[p],r = Next[p];
//            Last[r] = l,Next[l] = r;
//        }
//
//        printf("%lld",result%MOD);
//        if (t){
//            printf("\n");
//        }
//    }
//
//    return 0;
//}