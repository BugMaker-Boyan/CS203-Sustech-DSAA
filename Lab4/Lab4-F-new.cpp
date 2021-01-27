//#include <iostream>
//using namespace std;
//#define N 200010
//#define L 450
//char s[N],c,operation;
//int n,pos;
//struct Block_list {
//    struct node {
//        char c[L];
//        int size,next;
//        void initial () { size=0,next=-1; }
//    }nodes[L];
//    int head,sum;
//    void initial (char *s) {
//        int i,j,p;
//        head=sum=0,nodes[0].initial();
//        for (i=0,p=head;s[i];p=nodes[p].next) {
//            for (j=0;j<L&&s[i];i++,j++) {
//                nodes[p].c[j]=s[i];
//                nodes[p].size++;
//            }
//            if (s[i]){
//                nodes[p].next=++sum;
//                nodes[sum].initial();
//            }
//        }
//        for (i=head;i!=-1;i=nodes[i].next){
//            if (nodes[i].size==L) split_two_block(i);
//        }
//
//    }
//    void split_two_block (int pos) {
//        int i,j;
//        nodes[++sum].initial();
//        for (i=L>>1,j=0;i<L;i++,j++) {
//            nodes[sum].c[j]=nodes[pos].c[i];
//            nodes[pos].size--;
//            nodes[sum].size++;
//        }
//        nodes[sum].next=nodes[pos].next;
//        nodes[pos].next=sum;
//    }
//    void locate (int &p,int &pos) {
//        while (p!=-1&&pos>nodes[p].size){
//            pos-=nodes[p].size;
//            p=nodes[p].next;
//        }
//    }
//    char find_ch (int pos) {
//        int p=head;
//        locate(p,pos);
//        return nodes[p].c[pos-1];
//    }
//    void insert (int pos,char s) {
//        int p=head;locate(p,pos);
//        if (pos>=nodes[p].size) {
//            nodes[p].c[nodes[p].size]=s;
//        }else {
//            for (int i=nodes[p].size;i>pos;i--) {
//                nodes[p].c[i]=nodes[p].c[i-1];
//            }
//            nodes[p].c[pos]=s;
//        }
//        nodes[p].size++;
//        if (nodes[p].size==L){split_two_block(p);}
//    }
//}MyList;
//
//int main () {
//    int t;
//    cin>>t;
//
//    while (t--){
//        scanf("%s",s);
//        MyList.initial(s);
//        scanf("%d",&n);
//        for (int i = 0; i < n; ++i) {
//            while ((operation=getchar())!='1'&&operation!='2');
//            if (operation=='2') {
//                scanf(" %c%d",&c,&pos);
//                MyList.insert(pos-1,c);
//            }else {
//                scanf("%d",&pos);
//                printf("%c\n",MyList.find_ch(pos));
//            }
//        }
//    }
//    return 0;
//}