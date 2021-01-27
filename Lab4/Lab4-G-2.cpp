////
//// Created by Boyan on 2020/10/16.
////
//
//#include <iostream>
//#include <cstdio>
//#include <algorithm>
//
//
//using namespace std;
//
//#define LL long long
//const int INF = 0x3f3f3f3f;
//const LL mod=1000000007;
//
//int n,k,val[500010],a[100],b[100];
//int pos[500010],pre[500010],nt[500010];
//LL ans;
//
//void change(int x)
//{
//    pre[nt[x]]=pre[x];
//    nt[pre[x]]=nt[x];
//}
//
//LL solve(int x)
//{
//    LL max_l[85],max_r[85];
//    int sum1=0,sum2=0;
//    LL left_max = val[x];
//    LL right_max = val[x];
//    for(int i=x; i; i=pre[i])
//    {
//        a[++sum1]=i-pre[i];
//        max_l[sum1] =  max((LL)val[i],left_max);
//        left_max = max_l[sum1];
//        if(sum1==k) break;
//    }
//    for(int i=x; i<=n; i=nt[i])
//    {
//        b[++sum2]=nt[i]-i;
//        max_r[sum2] = max((LL)val[i],right_max);
//        right_max = max_r[sum2];
//        if(sum2==k) break;
//    }
//    LL sum = 0 ;
//    for(int i=1; i<=sum1; i++){
//        LL max_num;
//        if(k-i+1<=sum2){
//            max_num = max(max_l[i],max_r[k-i+1]);
//            sum+=(((val[i]%mod)*(max_num%mod))%mod)*a[i]*b[k-i+1];
//        }
//    }
//
//    return sum;
//}
//
//int main()
//{
//    int t;
//    scanf("%d",&t);
//    while(t--)
//    {
//        scanf("%d%d",&n,&k);
//        for(int i=1; i<=n; i++)scanf("%d",&val[i]),pos[val[i]]=i;
//        for(int i=0; i<=n+1; i++) pre[i]=i-1,nt[i]=i+1;
//        pre[0]=0;
//        nt[n+1]=n+1;
//        ans=0;
//        for(int i=1; i<=n; i++)
//        {
//            int x=pos[i];
//            ans+=solve(x)*i;
//            change(x);
//        }
//        printf("%lld\n",ans);
//    }
//    return 0;
//}