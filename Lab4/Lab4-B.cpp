////
//// Created by Boyan on 2020/10/13.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//typedef long long ll;
//struct node{
//    char val;
//    node* last;
//    node* next;
//    node(char val){
//        this->val = val;
//        last = NULL;
//        next = NULL;
//    }
//};
//
//
//
//
//int main(){
//    int T;
//    cin>>T;
//    ll n;
//    while (T--){
//        cin>>n;
//        node* p = new node('#');
//        string s;
//        cin>>s;
//        for (int i = 0; i < n; ++i) {
//            switch (s[i]) {
//                case 'r':{
//                    i++;
//                    char temp = s[i];
//                    while (!isdigit(temp)&&i<n){
//                        switch (temp) {
//                            case 'I':{
//                                while (p->last!=NULL){
//                                    p = p->last;
//                                }
//                                break;
//                            }
//                            case 'H':{
//                                if (p->last!=NULL){
//                                    p = p->last;
//                                }
//                                break;
//                            }
//                            case 'L':{
//                                if (p->next!=NULL){
//                                    p = p->next;
//                                }
//                                break;
//                            }
//                            case 'x':{
//                                if (p->val!='#'){
//                                    node* last_node = p->last;
//                                    node* next_node = p->next;
//                                    if (last_node!=NULL){
//                                        last_node->next = next_node;
//                                    }
//                                    next_node->last = last_node;
//                                    delete p;
//                                    p = next_node;
//                                }
//                                break;
//                            }
//                        }
//                        temp = s[++i];
//                    }
//
//
//
//                    if(p->val=='#'){
//                        p->val = temp;
//                        node* eol = new node('#');
//                        p->next = eol;
//                        eol->last = p;
//                    }else{
//                        p->val = temp;
//                    }
//
//                    break;
//
//                }
//                case 'I':{
//                    while (p->last!=NULL){
//                        p = p->last;
//                    }
//                    break;
//                }
//                case 'H':{
//                    if (p->last!=NULL){
//                        p = p->last;
//                    }
//                    break;
//                }
//                case 'L':{
//                    if (p->next!=NULL){
//                        p = p->next;
//                    }
//                    break;
//                }
//                case 'x':{
//                    if (p->val!='#'){
//                        node* last_node = p->last;
//                        node* next_node = p->next;
//                        if (last_node!=NULL){
//                            last_node->next = next_node;
//                        }
//                        next_node->last = last_node;
//                        delete p;
//                        p = next_node;
//                    }
//                    break;
//                }
//                default:{
//                    node* last_node = p->last;
//                    node* new_node = new node(s[i]);
//                    if (last_node!=NULL){
//                        last_node->next = new_node;
//                        new_node->last = last_node;
//                    }
//                    new_node->next = p;
//                    p->last = new_node;
//                }
//
//            }
//
//        }
//        while (p->last!=NULL){
//            p = p->last;
//        }
//        while (p->val!='#'){
//            cout<<p->val;
//            p = p->next;
//            delete p->last;
//        }
//
//        if (T) cout<<endl;
//    }
//
//
//    return 0;
//}