////
//// Created by Boyan on 2020/11/24.
////
//#include <iostream>
//using namespace std;
//typedef long long ll;
//const ll MaxN=80005;
//struct Node{
//    Node* children[2];
//    ll key,fix,size,cnt;
//    void init(){ size=children[0]->size + children[1]->size + cnt; }
//};
//struct AVL{
//    Node base[MaxN],nil;
//    Node* root,*null,*m_length;
//    AVL(){
//        root=null=&nil;
//        null->key=null->fix=1e+9;
//        null->size=null->cnt=0;
//        null->children[0]=null->children[1]=null;
//        m_length=base;
//    }
//    Node* newnode(ll value){
//        m_length->key=value; m_length->fix=rand();
//        m_length->children[0]=m_length->children[1]=null;
//        m_length->size=m_length->cnt=1;
//        return m_length++;
//    }
//    void rotation(Node* &p,ll d){
//        Node* k=p->children[d^1]; p->children[d^1]=k->children[d]; k->children[d]=p;
//        p->init(); k->init(); p=k;
//    }
//    void _Insertion(Node* &p,ll value){
//        if(p==null) p=newnode(value); else
//        if(p->key==value) p->cnt++; else{
//            ll d=value>p->key;
//            _Insertion(p->children[d],value); if(p->children[d]->fix > p->fix) rotation(p,d^1);
//        }
//        p->init();
//    }
//    void _Delete(Node* &p,ll value){
//        if(p->key==value){
//            if(p->cnt>1) p->cnt--; else
//            if(p->children[0]==null) p=p->children[1]; else
//            if(p->children[1]==null) p=p->children[0]; else{
//                ll d=p->children[0]->fix > p->children[1]->fix;
//                rotation(p,d); _Delete(p->children[d],value);
//            }
//        } else _Delete(p->children[value>p->key],value);
//        p->init();
//    }
//    ll _PreNode(Node* p,ll value){
//        if(p==null) return -1e+10;
//        if(value<=p->key) return _PreNode(p->children[0],value);
//        return max(p->key,_PreNode(p->children[1],value));
//    }
//    ll _SuccessNode(Node* p,ll value){
//        if(p==null) return 1e+10;
//        if(value>=p->key) return _SuccessNode(p->children[1],value);
//        return min(p->key,_SuccessNode(p->children[0],value));
//    }
//    void Insertion(ll value){ _Insertion(root,value); }
//    void Delete(ll value){ _Delete(root,value); }
//    ll PreNode(ll value){ return _PreNode(root,value); }
//    ll SuccessNode(ll value){ return _SuccessNode(root,value); }
//}Pets,Adopters;
//int main(){
//    ios::sync_with_stdio(false);
//    istream::sync_with_stdio(false);
//    ostream::sync_with_stdio(false);
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ll n,opt,val,ans = 0;
//    cin>>n;
//    for (ll i = 0; i < n; ++i) {
//        cin>>opt>>val;
//        ll pre,suc;
//        if (opt == 0){
//            pre = Adopters.PreNode(val);
//            suc = Adopters.SuccessNode(val);
//            if (pre == -1e+10 && suc == 1e+10){
//                Pets.Insertion(val);
//            } else{
//                ll target;
//                if (abs(pre-val)<=abs(suc-val)){
//                    target = pre;
//                } else{
//                    target = suc;
//                }
//                ans+=abs(target-val);
//                Adopters.Delete(target);
//            }
//        } else{
//            pre = Pets.PreNode(val);
//            suc = Pets.SuccessNode(val);
//            if (pre == -1e+10 && suc == 1e+10){
//                Adopters.Insertion(val);
//            } else{
//                ll target;
//                if (abs(pre-val)<=abs(suc-val)){
//                    target = pre;
//                } else{
//                    target = suc;
//                }
//                ans+=abs(target-val);
//                Pets.Delete(target);
//            }
//        }
//    }
//    cout<<ans;
//    return 0;
//}
