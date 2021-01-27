//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//#pragma GCC optimize(2)
//typedef long long ll;
//const int N=100005;
//#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
//ll n,Dp_Array[N];
//
//struct node
//{
//    int l,r,ans;
//}tr[N*4];
//int pre[N];
//void buildtree(int t,int l,int r)
//{
//    tr[t].l=l;
//    tr[t].r=r;
//    if(l==r)
//    {
//        tr[t].ans=pre[l];//叶子节点赋值
//        return;
//    }
//    int mid=(l+r)>>1;
//    buildtree(t<<1,l,mid);
//    buildtree(t<<1|1,mid+1,r);
//    tr[t].ans=max(tr[t<<1].ans,tr[t<<1|1].ans);//求出区间最大
//}
//void update(int t,int id,int key)//单点修改
//{
//    if(tr[t].l==id&&tr[t].r==id)
//    {
//        tr[t].ans=key;
//        return;
//    }
//    int mid=(tr[t].l+tr[t].r)>>1;
//    if(id<=mid)
//        update(t<<1,id,key);
//    else
//        update(t<<1|1,id,key);
//    tr[t].ans=max(tr[t<<1].ans,tr[t<<1|1].ans);//更新区间的最大值
//}
//int query(int t,int l,int r)//区间求最大值
//{
//    if(tr[t].l>=l&&tr[t].r<=r)
//        return tr[t].ans;
//    int mid=(tr[t].l+tr[t].r)>>1;
//    int ans=-100;
//    if(l<=mid)//找出左半边的最大值
//        ans=query(t<<1,l,r);
//    if(r>mid)//将作半边的最大值与右半边的最大值比较
//        ans=max(ans,query(t<<1|1,l,r));
//    return ans;
//}
//
//class myCoin{
//public:
//    ll z,x,y,r,val;
//    bool operator < (myCoin obj)const {
//        if(z!=obj.z)
//            return z<obj.z;
//        else return x<obj.x;
//    }
//    bool operator() (myCoin a,myCoin b)const{
//        return a.z-a.x<=b.z-b.x;
//    }
//}coins[N];
//void solve(ll left,ll right){
//    ll middle,i,j;
//    if (left==right)
//        return;
//    middle=(left+right)/2;
//    solve(left,middle);
//    sort(coins+middle+1,coins+right+1,myCoin());
//    sort(coins+left,coins+middle+1,myCoin());
//    i=left;
//    j=middle+1;
//    bool con = i<=middle&&j<=right;
//    while (con){
//        bool flag = myCoin()(coins[i],coins[j]);
//        if(flag==false){
//            ll x1 = Dp_Array[coins[j].val];
//            ll x2 = query(1,1,coins[j].r)+coins[j].y;
//            Dp_Array[coins[j].val]=max(x1,x2);
//            j++;
//        } else{
//            ll x1 = coins[i].val;
//            ll x2 = Dp_Array[coins[i].val];
//            update(1,x1,x2);
//            i++;
//        }
//        con = i<=middle&&j<=right;
//    }
//    while (j<=right){
//        ll x1 = Dp_Array[coins[j].val];
//        ll x2 = query(1,1,coins[j].r)+coins[j].y;
//        Dp_Array[coins[j].val]=max(x1,x2);
//        j++;
//    }
//    for(i=left;i<=middle;i++){
//        update(1,coins[i].val,0);
//    }
//    sort(coins+middle+1,coins+right+1);
//    solve(middle+1,right);
//}
//ll answer=0;
//int main() {
//    fio
//    cin>>n;
//    ll k = 1;
//    ll z,x,y,r;
//    while (k<=n){
//        cin>>z>>x>>y>>r;
//        coins[k].z = z;
//        coins[k].x = x;
//        coins[k].y = y;
//        coins[k].r = r;
//        Dp_Array[k]=coins[k].y;
//        coins[k].val=k;
//        k++;
//    }
//    sort(coins+1,coins+n+1);
//    buildtree(1,1,n);
//    solve(1,n);
//    k = 1;
//    while (k<=n){
//        answer=max(answer,Dp_Array[k++]);
//    }
//    cout<<answer;
//    return 0;
//}
