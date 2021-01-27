//#include <iostream>
//using namespace std;
//
//
//const int maxN = 1e5+5;
//const int maxTempN = 1e9+5;
//int val[maxN],l[maxN],r[maxN],valid[maxN];
//
//int main(){
//    int T, n;
//    scanf("%d",&T);
//    while (T--){
//        for (int i = 0; i < maxN; ++i) {
//            valid[i] = 1;
//        }
//        int* isValid = new int[maxTempN],*temp = new int[maxTempN];
//        int i1=0,i2=0;
//        int j1=0,j2=0;
//        scanf("%d",&n);
//        for (int i = 1; i <= n ; ++i,i2++) {
//            scanf("%d",&val[i]);
//            l[i]=i-1;
//            r[i]=i+1;
////            isValid_set.insert(i);
////            isValid_set.push_back(i);
//            isValid[i2] = i;
//        }
//        l[n+1]=n;
//        r[0]=1;
//        val[0]=0;
//        val[n+1]=1e6;
//
//
//
////        while (!isValid_set.empty()){
////            temp_set.clear();
////            for (int x:isValid_set) {
////                int lx=l[x],rx=r[x];
////                if (val[lx]>val[x]){
//////                    temp_set.insert(lx);
//////                    temp_set.insert(x);
////                    temp_set.push_back(lx);
////                    temp_set.push_back(x);
////                }
////                if (val[x]>val[rx]){
//////                    temp_set.insert(x);
//////                    temp_set.insert(rx);
////                    temp_set.push_back(x);
////                    temp_set.push_back(rx);
////                }
////            }
////            isValid_set.clear();
////            for (int x: temp_set) {
////                if (valid[x]){
////                    int lx =l[x],rx=r[x];
////                    r[lx]=rx;
////                    l[rx]=lx;
//////                    isValid_set.insert(lx);
////                    isValid_set.push_back(lx);
////                    valid[x]=0;
////                }
////            }
////        }
//
//        while (i1!=i2){
//            j1 = j2;
//            for (int i = i1; i <i2 ; ++i) {
//                int x = isValid[i];
//                int lx=l[x],rx=r[x];
//                if (val[lx]>val[x]){
//                    temp[j2++] = lx;
//                    temp[j2++] = x;
//                }
//                if (val[x]>val[rx]){
//                    temp[j2++] = x;
//                    temp[j2++] = rx;
//                }
//            }
//            i1 = i2;
//            for (int i = j1; i < j2 ; ++i) {
//                int x = temp[i];
//                if (valid[x]){
//                    int lx =l[x],rx=r[x];
//                    r[lx]=rx;
//                    l[rx]=lx;
//                    isValid[i2++] = lx;
//                    valid[x]=0;
//                }
//            }
//        }
//
//        for (int i = r[0]; i !=n+1; i=r[i]) {
//            printf("%d ",val[i]);
//        }
//        if (T){
//            printf("\n");
//        }
//    }
//}