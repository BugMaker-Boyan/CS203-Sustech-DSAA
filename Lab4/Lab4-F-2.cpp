//#include <iostream>
//#include <cmath>
//using namespace std;
//typedef long long ll;
//ll singleSize;
//
//template <class DataType>
//class List{
//    struct Node{
//        ll blockSize;
//        DataType* arr;
//        Node* next;
//        Node(){
//            this->blockSize=0;
//            this->arr = new DataType[singleSize];
//            this->next=NULL;
//        }
//    };
//
//public:
//    Node* head;
//    void mergeBlock(Node* n1,Node* n2){
//        for (int i = 0; i < n2->blockSize; ++i) {
//            n1->arr[n1->blockSize+i]=n2->arr[i];
//        }
//        n1->blockSize+=n2->blockSize;
//        n1->next=n2->next;
//    }
//
//    void maintain(){
//        Node* node =this->head;
//        while (node !=NULL && node->next!=NULL){
//            if (node->blockSize+node->next->blockSize < singleSize){
//                mergeBlock(node,node->next);
//                continue;
//            }
//            node= node->next;
//        }
//    }
//
//    void split(Node* n1,ll pos){
//        if (pos<0||pos>n1->blockSize){
//            return;
//        }
//        Node* n2 = new Node();
//        n2->next =n1->next;
//        n1->next = n2;
//
//        for (int i = pos; i < n1->blockSize; ++i) {
//            n2->arr[i-pos] = n1->arr[i];
//            n2->blockSize++;
//        }
//        n1->blockSize=pos;
//    }
//
//    List(){
//        head = new Node();
//    }
//
//    DataType find(ll pos){
//        Node* node = this->head;
//        while (node!=NULL){
//            if (pos>=node->blockSize){
//                pos-=node->blockSize;
//                node=node->next;
//            }else{
//                break;
//            }
//        }
//        return node->arr[pos];
//    }
//
//    void insert(ll pos,DataType x){
//        Node* node = this->head;
//        while (true){
//            if (pos>node->blockSize){
//                if (node->next!=NULL){
//                    pos-=node->blockSize;
//                    node=node->next;
//                }else{
//                    return;
//                }
//            }else{
//                break;
//            }
//        }
//        for (int i = node->blockSize; i >pos ; --i) {
//            node->arr[i]=node->arr[i-1];
//        }
//        node->arr[pos] = x;
//        node->blockSize++;
//
//        if (node->blockSize==singleSize){
//            split(node,singleSize/2);
//        }
//        maintain();
//    }
//
//
//};
//
//int main(){
//    ll T,n;
//    scanf("%lld",&T);
//    string s;
//    while (T--){
//        getchar();
//        getline(cin,s);
//        scanf("%lld",&n);
//        ll size = s.size();
//        singleSize = sqrt(size);
//        List<char>* list = new List<char>;
//
//        for (int i = 0; i < size;i++) {
//            list->insert(i,s[i]);
//        }
//        int order,pos;
//        char ch;
//        for (int i = 0; i < n; ++i) {
//            scanf("%d",&order);
//            if (order == 1){
//                scanf(" %c %d",&ch,&pos);
//                list->insert(pos-1,ch);
//            }else if (order == 2){
//                scanf(" %d",&pos);
//                printf("%c\n",list->find(pos-1));
//            }
//        }
//    }
//    return 0;
//}
//
//
//
