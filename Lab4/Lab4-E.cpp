//////
////// Created by Boyan on 2020/10/14.
//////
////
////#include <iostream>
////using namespace std;
////typedef long long ll;
////struct node{
////    ll val;
////    node* next;
////    node* last;
////    bool isValid;
////    node(ll val){
////        this->val = val;
////        this->isValid = true;
////        next=NULL;
////        last=NULL;
////    }
////};
////
////int main(){
////
////    ll T,n;
////    scanf("%lld",&T);
////    while (T--){
////        scanf("%lld",&n);
////        ll val;
////        scanf("%lld",&val);
////        node* root = new node(val);
////        node* nd = root;
////        node* last_nd;
////        node* next_nd;
////        for (int i = 1; i <n; ++i) {
////            scanf("%lld",&val);
////            next_nd = new node(val);
////            last_nd = nd;
////            next_nd->last = last_nd;
////            last_nd->next = next_nd;
////            nd = nd->next;
////        }
////        ll count = 0;
////        nd = root->next;
////        while (nd!=NULL){
////            if (nd->isValid==true && nd->val < nd->last->val){
////                nd->isValid = false;
////                count++;
////            }
////            nd = nd->next;
////        }
////
////        nd = root;
////        while (nd->next!=NULL){
////            if (nd->isValid==true&&nd->val > nd->next->val){
////                nd->isValid = false;
////                count++;
////            }
////            nd = nd->next;
////        }
////        while (count!=0){
////            nd = root;
////            while (nd!=NULL){
////                if (nd->isValid== false){
////                    last_nd = nd->last;
////                    next_nd = nd->next;
////                    if (last_nd!=NULL){
////                        last_nd->next = next_nd;
////                    }
////                    if (next_nd!=NULL){
////                        next_nd->last = last_nd;
////                    }
////                    delete nd;
////                    nd = next_nd;
////                }else{
////                    nd = nd->next;
////                }
////            }
////            count = 0;
////            nd = root->next;
////            while (nd!=NULL){
////                if (nd->isValid==true && nd->val < nd->last->val){
////                    nd->isValid = false;
////                    count++;
////                }
////                nd = nd->next;
////            }
////            nd = root;
////            while (nd->next!=NULL){
////                if (nd->isValid==true&&nd->val > nd->next->val){
////                    nd->isValid = false;
////                    count++;
////                }
////                nd = nd->next;
////            }
////        }
////
////        nd = root;
////        while (nd!=NULL){
////            printf("%lld ",nd->val);
////            nd = nd->next;
////        }
////
////        if (T) printf("\n");
////    }
////
////
////
////
////
////
////
////    return 0;
////}
//
//#include <bits/stdc++.h>
//using namespace std;
//const int maxn = 1e5+5;
//vector<int> vt[2], ans;
//int t, n, a[maxn];
//bool mark[maxn];
//int pre[maxn], nex[maxn];
//void work()
//{
//    int key = 0;
//    while(!vt[key].empty())
//    {
//        for(int i = 0; i < vt[key].size(); ++i)
//        {
//            int x = vt[key][i];
//            if((pre[x] == 0 || a[pre[x]] <= a[x]) &&
//               (nex[x] == n+1 || a[nex[x]] >= a[x])) continue;
//            mark[x] = 1;
//        }
//        for(int i = 0; i < vt[key].size(); ++i)
//        {
//            int x = vt[key][i];
//            if(!mark[x]) continue;
//            nex[pre[x]] = nex[x];
//            if(pre[x] != 0 && (vt[key^1].empty() || vt[key^1].back() != pre[x]))
//            {
//                vt[key^1].push_back(pre[x]);
//            }
//            nex[pre[x]] = nex[x];
//            if(nex[x] != n+1 && !mark[nex[x]])
//            {
//                vt[key^1].push_back(nex[x]);
//            }
//            pre[nex[x]] = pre[x];
//            mark[x] = 0;
//        }
//        vt[key].clear();
//        key ^= 1;
//    }
//    ans.clear();
//    int now = 0;
//    while(nex[now] != n+1)
//    {
//        ans.push_back(nex[now]);
//        now = nex[now];
//    }
//    for(int i = 0; i < ans.size(); ++i)
//    {
//        printf("%d ", a[ans[i]]);
//    }
//    printf("\n");
//}
//int main()
//{
//    for(scanf("%d", &t); t--;)
//    {
//        scanf("%d", &n);
//        memset(mark, 0, sizeof mark);
//        vt[0].clear(); vt[1].clear();
//        for(int i = 1; i <= n; ++i)
//        {
//            scanf("%d", &a[i]);
//            vt[0].push_back(i);
//            pre[i] = i-1; nex[i] = i+1;
//        }
//        nex[0] = 1; pre[n+1] = n;
//        work();
//    }
//    return 0;
//}