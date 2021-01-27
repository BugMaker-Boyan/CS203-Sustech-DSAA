////
//// Created by Boyan on 2020/11/24.
////
//
//#include <iostream>
//using namespace std;
//
//const int maxn=100005;
//struct node{
//    node* ch[2];
//    int key,fix,size,cnt;
//    void maintain(){ size=ch[0]->size + ch[1]->size + cnt; }
//};
//typedef node* P_node;
//int max(int x,int y){ return x>y?x:y; }
//int min(int x,int y){ return x<y?x:y; }
//struct Treap{
//    node base[maxn],nil;
//    P_node root,null,len;
//    Treap(){
//        root=null=&nil;
//        null->key=null->fix=1e+9;
//        null->size=null->cnt=0;
//        null->ch[0]=null->ch[1]=null;
//        len=base;
//    }
//    P_node newnode(int tkey){
//        len->key=tkey; len->fix=rand();
//        len->ch[0]=len->ch[1]=null;
//        len->size=len->cnt=1;
//        return len++;
//    }
//    void rot(P_node &p,int d){
//        P_node k=p->ch[d^1]; p->ch[d^1]=k->ch[d]; k->ch[d]=p;
//        p->maintain(); k->maintain(); p=k;
//    }
//    void _Insert(P_node &p,int tkey){
//        if(p==null) p=newnode(tkey); else
//        if(p->key==tkey) p->cnt++; else{
//            int d=tkey>p->key;
//            _Insert(p->ch[d],tkey); if(p->ch[d]->fix > p->fix) rot(p,d^1);
//        }
//        p->maintain();
//    }
//    void _Erase(P_node &p,int tkey){
//        if(p->key==tkey){
//            if(p->cnt>1) p->cnt--; else
//            if(p->ch[0]==null) p=p->ch[1]; else
//            if(p->ch[1]==null) p=p->ch[0]; else{
//                int d=p->ch[0]->fix > p->ch[1]->fix;
//                rot(p,d); _Erase(p->ch[d],tkey);
//            }
//        } else _Erase(p->ch[tkey>p->key],tkey);
//        p->maintain();
//    }
//    int _Kth(P_node p,int k){
//        if(p==null||k<1||k>p->size) return 0;
//        if(k<p->ch[0]->size+1) return _Kth(p->ch[0],k);
//        if(k>p->ch[0]->size+p->cnt) return _Kth(p->ch[1],k-p->ch[0]->size-p->cnt);
//        return p->key;
//    }
//    void Insert(int tkey){ _Insert(root,tkey); }
//    void Erase(int tkey){ _Erase(root,tkey); }
//    int Kth(int k){ return _Kth(root,k); }
//} T;
//
//int main(){
//    int m,k;
//    cin>>m>>k;
//    int arr[m];
//    for (int i = 0; i < m; ++i) {
//        cin>>arr[i];
//    }
//    for (int i = 0; i < k; ++i) {
//        T.Insert(arr[i]);
//    }
//    int kth;
//    for (int i = 0; i < m-k+1; ++i) {
//        cin>>kth;
//        cout<<T.Kth(kth)<<endl;
//        T.Erase(arr[i]);
//        if (i == m-k){
//            break;
//        }
//        T.Insert(arr[k+i]);
//    }
//
//
//    return 0;
//}