////
//// Created by Boyan on 2020/10/13.
////
//
//#include <iostream>
//using namespace std;
//typedef long long ll;
//
//
//struct node{
//    ll cof;
//    ll exp;
//    node* next;
//    node(ll c, ll e){
//        cof = c;
//        exp = e;
//        next = NULL;
//    }
//};
//
//int main(){
//    int T,n,m;
//    cin>>T;
//    while (T--){
//        cin>>n;
//
//        node* p1 = new node(0,0);
//
//        node* temp = p1;
//        ll c,e;
//        for (int i = 0; i < n; ++i) {
//            cin>>c>>e;
//            if (i == 0){
//                p1->cof=c;
//                p1->exp=e;
//            }else{
//                temp->next = new node(c,e);
//                temp = temp->next;
//            }
//        }
//        cin>>m;
//        node* p2 = new node(0,0);
//        temp = p2;
//        for (int i = 0; i < m; ++i) {
//            cin>>c>>e;
//            if (i == 0){
//                p2->cof=c;
//                p2->exp=e;
//            }else{
//                temp->next = new node(c,e);
//                temp = temp->next;
//            }
//        }
//
//        //merge
//        node* root;
//        if (p1->exp < p2->exp){
//            root = new node(p1->cof,p1->exp);
//            p1 = p1->next;
//        }else{
//            root = new node(p2->cof,p2->exp);
//            p2 = p2->next;
//        }
//
//        node* nd = root;
//
//        while (p1!=NULL && p2 != NULL){
//            if (p1->exp<p2->exp){
//                if (p1->exp==nd->exp){
//                    nd->cof = nd->cof + p1->cof;
//                }else{
//                    nd->next = new node(p1->cof,p1->exp);
//                    nd = nd->next;
//                }
//                p1=p1->next;
//            }else{
//                if (p2->exp==nd->exp){
//                    nd->cof = nd->cof + p2->cof;
//                }else{
//                    nd->next = new node(p2->cof,p2->exp);
//                    nd = nd->next;
//                }
//                p2=p2->next;
//            }
//        }
//        while (p1!=NULL){
//            if (p1->exp==nd->exp){
//                nd->cof = nd->cof + p1->cof;
//            }else{
//                nd->next = new node(p1->cof,p1->exp);
//                nd = nd->next;
//            }
//            p1=p1->next;
//        }
//        while (p2!=NULL){
//            if (p2->exp==nd->exp){
//                nd->cof = nd->cof + p2->cof;
//            }else{
//                nd->next = new node(p2->cof,p2->exp);
//                nd = nd->next;
//            }
//            p2=p2->next;
//        }
//
//        //special case
//        nd = root;
//        bool flag = true;
//        while (nd!=NULL){
//            if (nd->cof != 0){
//                flag = false;
//                break;
//            }
//            nd = nd->next;
//        }
//        if (flag){
//            cout<<0;
//        }else{
//            bool first = true;
//            while (nd!=NULL){
//                if (nd->cof!=0 && nd->exp == 0){
//                    cout<<nd->cof;
//                    first = false;
//                }
//                if (nd->cof!=0 && nd->exp!=0){
//                    if (!first){
//                        if (nd->cof>0){
//                            if (nd->cof == 1){
//                                if (nd->exp>1){
//                                    cout<<"+"<<"x^"<<nd->exp;
//                                }else{
//                                    cout<<"+"<<"x";
//                                }
//                            }else{
//                                if (nd->exp>1){
//                                    cout<<"+"<<nd->cof<<"x^"<<nd->exp;
//                                } else{
//                                    cout<<"+"<<nd->cof<<"x";
//                                }
//                            }
//                        }else{
//                            if (nd->cof == -1){
//                                if (nd->exp>1){
//                                    cout<<"-"<<"x^"<<nd->exp;
//                                } else{
//                                    cout<<"-"<<"x";
//                                }
//                            }else{
//                                if (nd->exp>1){
//                                    cout<<nd->cof<<"x^"<<nd->exp;
//                                } else{
//                                    cout<<nd->cof<<"x";
//                                }
//                            }
//                        }
//                    }else{
//                        if (nd->cof == 1){
//                            if (nd->exp>1){
//                                cout<<"x^"<<nd->exp;
//                            }else{
//                                cout<<"x";
//                            }
//                        } else if (nd->cof == -1){
//                            if (nd->exp>1){
//                                cout<<"-x^"<<nd->exp;
//                            }else{
//                                cout<<"-x";
//                            }
//                        }else{
//                            if (nd->exp>1){
//                                cout<<nd->cof<<"x^"<<nd->exp;
//                            }else{
//                                cout<<nd->cof<<"x";
//                            }
//                        }
//                        first = false;
//                    }
//                }
//
//                nd = nd->next;
//            }
//        }
//
//        if (T) cout<<endl;
//    }
//
//
//
//
//    return 0;
//}