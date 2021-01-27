////
//// Created by Boyan on 2020/12/24.
////
//
////
//// Created by Boyan on 2020/12/23.
////
//
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//const ll MAXN = 500005;
//#define lowbit(x) ((x)&(-x))
//
//
//ll read()  //快速读入，不是这篇文章的重点
//{
//    ll ans = 0;
//    char c = getchar();
//    while (!isdigit(c))
//        c = getchar();
//    while (isdigit(c))
//    {
//        ans = ans * 10 + c - '0';
//        c = getchar();
//    }
//    return ans;
//}
//
//ll tree[MAXN];
//
//inline void update(ll i,ll x){
//    for (ll pos = i;pos<MAXN;pos+=lowbit(pos)) {
//        tree[pos]+=x;
//    }
//}
//
//inline ll query(ll n){
//    ll ans = 0;
//    for (ll pos = n;pos;pos-=lowbit(pos)) {
//        ans+=tree[pos];
//    }
//    return ans;
//}
//
//inline ll query(ll a, ll b){
//    return query(b)-query(a-1);
//}
//
//struct node{
//    ll val,id;
//    bool operator<(const node& n)const{
//        if (this->val == n.val){
//            //仔细思考 相对位置如果发生变化，排名就会颠倒，计算非逆序对的时候就会出错
//            return this->id < n.id;
//        }else{
//            return this->val < n.val;
//        }
//    }
//};
//
//node data[MAXN];
//ll Rank[MAXN];
//
//
//int main(){
//    ll n;
//    cin>>n;
//    ll sum = 0;
//    for (ll i = 1; i <=n ; ++i) {
//        data[i].val=read();
//        data[i].id = i;
//    }
//    sort(data+1,data+1+n);
//    //离散化原数组，将每个数映射为对应的排名，排名序列的逆序对数就是原数据的逆序对数
//    for (ll i = 1; i <=n ; ++i) {
//        Rank[data[i].id] = i;
//    }
//    for (ll i = 1; i <= n ; ++i) {
//        //方式一：先算非逆序对数目，再最后剪掉
//        sum+=query(Rank[i]);
//        //方式二：直接算逆序对数目，扫描到第i个时，以i为第二个数的对组一共有i-1对，减去非逆序对的数目，就直接得到了
//        //以i结尾的逆序对的数目
//        update(Rank[i],1);
//    }
//    long long ans = n * (n - 1) - sum;
//    cout<<ans<<endl;
//
//
//    return 0;
//}