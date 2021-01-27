////
//// Created by Boyan on 2020/10/15.
////
//
//#include <iostream>
//using namespace std;
//#define maxN 100009
//
//char s[maxN];
//
//
//struct node{
//    node* next;
//    node* last;
//    int val;
//    node(){
//        next = nullptr;
//        last = nullptr;
//        val = 0;
//    }
//};
//
//int main(){
//    int T,n;
//    cin>>T;
//    while (T--){
//        scanf("%d",&n);
//        scanf("%s",&s);
//
//        node* first=new node();
//        node* end = new node();
//        first->next = end;
//        end->last = first;
//        first->val = -1;
//        end->val = -2;
//
//        node* pos = end;
//
//        for (int i = 0; i < n; ++i) {
//            if (isdigit(s[i])){
//                node* insert=new node();
//                insert->val=s[i]-'0';
//                insert->last = pos->last;
//                insert->next=pos;
//                pos->last->next = insert;
//                pos->last = insert;
//            }else{
//                switch (s[i]) {
//                    case 'I':{
//                        pos = first->next;
//                        break;
//                    }
//                    case 'H':{
//                        if (pos->last->val != -1){
//                            pos = pos->last;
//                        }
//                        break;
//                    }
//                    case 'L':{
//                        if (pos->val!=-2){
//                            pos = pos->next;
//                        }
//                        break;
//                    }
//                    case 'r':{
//                        i++;
//                        if (i<n){
//                            if (pos->val!=-2){
//                                pos->val = s[i]-'0';
//                            }else{
//                                node* insert=new node();
//                                insert->val=s[i]-'0';
//                                insert->last = end->last;
//                                end->last->next = insert;
//                                end->last = insert;
//                                insert->next = end;
//
//                                pos = insert;
//                            }
//                        }
//                        break;
//                    }
//                    case 'x':{
//                        if (pos->val!=-2){
//                            pos->last->next = pos->next;
//                            pos->next->last = pos->last;
//                            pos = pos->next;
//                        }
//                        break;
//                    }
//
//
//                }
//            }
//
//
//        }
//
//        pos = first->next;
//        while (pos->val!=-2){
//            printf("%d",pos->val);
//            pos = pos->next;
//        }
//        printf("\n");
//    }
//
//
//
//    return 0;
//}