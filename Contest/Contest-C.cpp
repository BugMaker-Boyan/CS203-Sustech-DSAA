//
// Created by Boyan on 2021/1/12.
//
#pragma GCC optimize(3,"Ofast","inline")
#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
typedef long long ll;
const ll maxN = 1e5+1;
const ll MOD = 998244353;
ll pow2[66],a[maxN],binaryA[maxN][33],sz[maxN];
vector<ll> dep[maxN];
ll vis[maxN],par[maxN];
ll sum[2][2];
ll num[maxN][2][2];
vector<ll> children[maxN];
ll n,u,v,maxDepth;
unsigned long long ans;
#define fio ios::sync_with_stdio(false);istream::sync_with_stdio(false);ostream::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);

void init_toBinary(){
    ll t;
    for (ll i = 1; i <=n ; ++i) {
        t = a[i];
        ll j = 0;
        while (t){
            binaryA[i][j]=t%2;
            t/=2;
            j++;
        }
    }
}

void bfs_getNum(ll i,ll j){
    ll c;
    ll x;
    ll y;
    for (ll k = maxDepth; k >=0 ; k--) {
        vector<ll>& v = dep[k];
        for (ll l = 0; l < v.size(); ++l) {
            c = v[l];
            x=binaryA[c][i];
            y=binaryA[c][j];
            if (children[c].size()==1 && par[children[c][0]]!=c){
                num[c][x][y]++;
            }else{
                sum[0][0]=sum[0][1]=sum[1][0]=sum[1][1]=0;
                for (ll q = 0; q < children[c].size(); ++q) {
                    ll h = children[c][q];
                    if (par[h] == c){
                        sum[0][0]+=num[h][0][0];
                        sum[0][1]+=num[h][0][1];
                        sum[1][0]+=num[h][1][0];
                        sum[1][1]+=num[h][1][1];
                    }
                }
                num[c][0][0] = sum[x][y];
                num[c][0][1] = sum[x][y^1];
                num[c][1][0] = sum[x^1][y];
                num[c][1][1] = sum[x^1][y^1];
                num[c][x][y] += sz[c];
            }
        }
    }
}

void bfs_getAns(ll i,ll j){
    ll x,y,h;
    for (ll k = maxDepth; k >=0 ; --k) {
        vector<ll>& vector = dep[k];
        for (ll chi : vector) {
            x=binaryA[chi][i];
            y=binaryA[chi][j];
            sum[0][0]=sum[0][1]=sum[1][0]=sum[1][1]=0;
            for (ll m = 0; m < children[chi].size(); ++m) {
                h = children[chi][m];
                if (par[h]==chi){
                    sum[0][0]+=num[h][0][0];
                    sum[0][1]+=num[h][0][1];
                    sum[1][0]+=num[h][1][0];
                    sum[1][1]+=num[h][1][1];
                }
            }
            for (ll m = 0; m < children[chi].size(); ++m) {
                h = children[chi][m];
                if (par[h]==chi){
                    sum[0][0]-=num[h][0][0];
                    sum[0][1]-=num[h][0][1];
                    sum[1][0]-=num[h][1][0];
                    sum[1][1]-=num[h][1][1];
                    ans+=(num[h][0][0]%MOD*sum[1^x][1^y]%MOD+num[h][0][1]%MOD*sum[1^x][y]%MOD+num[h][1][0]%MOD*sum[x][1^y]%MOD+num[h][1][1]%MOD*sum[x][y]%MOD+num[h][1^x][1^y]%MOD*(n-sz[h]))%MOD*(pow2[i+j]%MOD);
                }

            }
        }
    }
}

void initPow2(){
    pow2[0]=1;
    for (ll i = 1; i <=65; ++i) {
        pow2[i] = (pow2[i-1]*2)%MOD;
    }
}

ll getMSB(ll index){
    for (ll i = 30; i >= 0 ; --i) {
        if (binaryA[index][i]==1){
            return i;
        }
    }
    return 0;
}

ll set_Depth(ll root,ll d){
    vis[root]=1;
    dep[d].push_back(root);
    ll tot = 0;
    if (maxDepth<d) maxDepth=d;
    for (ll i = 0;i<children[root].size();i++){
        if (vis[children[root][i]]==0){
            par[children[root][i]]=root;
            tot+=set_Depth(children[root][i],d+1);
        }
    }
    sz[root] = tot+1;
    return tot+1;
}

int main(){
    fio
    cin>>n;
    ll maxIndex = 1;
    for (ll i = 1; i <=n ; ++i) {
        cin>>a[i];
        if (a[i]>a[maxIndex]) maxIndex = i;
    }
    init_toBinary();
    for (ll i = 1; i <=n-1 ; ++i) {
        cin>>u>>v;
        children[u].push_back(v);
        children[v].push_back(u);
    }
    ll root = 1;
    set_Depth(root,0);
    initPow2();
    ll msb = getMSB(maxIndex);
    for ( ll j = 0;j<=msb;j++){
        for ( ll i = 0;i<j;i++){
            memset(num,0,sizeof num);
            bfs_getNum(j,i);
            bfs_getAns(j,i);
            ans%=MOD;
        }
    }
    ans = (ans%MOD)*2;
    if (ans>MOD) ans%=MOD;
    for ( ll j = 0;j<=msb;j++){
        memset(num,0,sizeof num);
        bfs_getNum(j,j);
        bfs_getAns(j,j);
        ans%=MOD;
    }
    if (ans>MOD) ans%=MOD;
    cout<<ans<<endl;
    return 0;
}
