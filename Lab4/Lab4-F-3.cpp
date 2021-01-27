////
//// Created by Boyan on 2020/10/15.
////
//
//#include <iostream>
//using namespace std;
//#define N 200010
//#define L 450
//char str[N],ch;
//int n,ind,order;
//struct block_list {
//public:
//    struct node {
//        char c[L];
//        int size,next;
//        void initial () { size=0,next=-1; }
//    }nodes[L];
//    int block_head,sum;
//    void split_block (int index) {
//        int i,j;
//        nodes[++sum].initial();
//        for (i=L>>1,j=0;i<L;i++,j++) {
//            nodes[sum].c[j]=nodes[index].c[i];
//            nodes[index].size--;
//            nodes[sum].size++;
//        }
//        nodes[sum].next=nodes[index].next;
//        nodes[index].next=sum;
//    }
//    void loc_pos (int &p,int &index) {
//        while (p!=-1&&index>nodes[p].size){
//            index-=nodes[p].size;
//            p=nodes[p].next;
//        }
//    }
//}List_Block;
//
//void initial (char *s,block_list& b) {
//    int i,j,p;
//    b.block_head=0;
//    b.sum = 0;
//    b.nodes[0].initial();
//    for (i=0,p=b.block_head;s[i];p=b.nodes[p].next) {
//        for (j=0;j<L&&s[i];i++,j++) {
//            b.nodes[p].c[j]=s[i];
//            b.nodes[p].size++;
//        }
//        if (s[i]){
//            b.nodes[p].next=++b.sum;
//            b.nodes[b.sum].initial();
//        }
//    }
//    for (i=b.block_head;i!=-1;i=b.nodes[i].next)
//        if (b.nodes[i].size==L) b.split_block(i);
//}
//
//char find (int index,block_list& blockList) {
//    int p=blockList.block_head;
//    blockList.loc_pos(p,index);
//    return blockList.nodes[p].c[index-1];
//}
//
//
//void insert (int index,char s,block_list& blockList) {
//    int p=blockList.block_head;
//    blockList.loc_pos(p,index);
//    if (index>=blockList.nodes[p].size) blockList.nodes[p].c[blockList.nodes[p].size]=s;
//    else {
//        for (int i=blockList.nodes[p].size;i>index;i--) {
//            blockList.nodes[p].c[i]=blockList.nodes[p].c[i-1];
//        }
//        blockList.nodes[p].c[index]=s;
//    }
//    blockList.nodes[p].size++;
//    if (blockList.nodes[p].size==L) blockList.split_block(p);
//}
//
//int main () {
//    int T;
//    cin>>T;
//    while (T--){
//        scanf("%s",str);
//        initial(str,List_Block);
//        scanf("%d",&n);
//        for (int i = 0; i < n; ++i) {
//            scanf("%d",&order);
//            if (order==1) {
//                scanf(" %c%d",&ch,&ind);
//                insert(ind-1,ch,List_Block);
//            }else {
//                scanf("%d",&ind);
//                printf("%c\n",find(ind,List_Block));
//            }
//        }
//    }
//    return 0;
//}