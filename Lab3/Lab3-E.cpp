////
//// Created by Boyan on 2020/9/29.
////
//
//#include <iostream>
//using namespace std;
//
//#define MIN(a,b) ((a)<(b) ? (a):(b))
//#define MAX(a,b) ((a)>(b) ? (a):(b))
//
//struct Orc{
//    long long hp;
//    long long atk;
//
//    bool operator> (const Orc& o) const{
//        return (this->hp-this->atk)>(o.hp-o.atk);
//    }
//};
//void merge(Orc* array,int l,int middle,int r,Orc* temp)
//{
//    int i=l;
//    int j=middle+1;
//    int k=l;
//    while(i <= middle && j <= r)
//    {
//        if(array[i] > array[j]){
//            temp[k++]=array[i++];
//        }
//        else
//        {
//            temp[k++]=array[j++];
//        }
//    }
//    while(i <= middle)
//        temp[k++]=array[i++];
//    while(j <= r)
//        temp[k++]=array[j++];
//    for(int i=l;i <= r;++i)
//        array[i]=temp[i];
//}
//void merge_sort(Orc* array,int l,int r,Orc* temp)
//{
//    if(l < r)
//    {
//        int middle=(l+r)/2;
//        merge_sort(array,l,middle,temp);
//        merge_sort(array,middle+1,r,temp);
//        merge(array,l,middle,r,temp);
//    }
//}
//
//long long power(int a,int x){
//    long long ret = 1;
//    for (int i = 1; i <= x; ++i) {
//        ret = ret*a;
//    }
//    return ret;
//}
//
//
//int main(){
//    int n,p,q;
//    cin>>n>>p>>q;
//    Orc orcs[n];
//    for (int i = 0; i < n; ++i) {
//        cin>>orcs[i].hp>>orcs[i].atk;
//    }
//    Orc* temp = new Orc[n];
//    merge_sort(orcs,0,n-1,temp);
//
//    long long t = power(2,p);
//
//    long long maxResult = -100000;
//    int index = MIN(n,q);
//    long long ret = 0;
//    for (int i = 0; i < index; ++i) {
//        ret+=MAX(orcs[i].hp,orcs[i].atk);
//    }
//    for (int i = q; i < n; ++i) {
//        ret+=orcs[i].atk;
//    }
//    long long result[n];
//    for (int i = 0; i < n; ++i) {
//        result[i] = ret;
//    }
//
//    for (int i = 0; i < n; ++i) {
//       if (i<q) {
//           result[i]=result[i]-MAX(orcs[i].hp,orcs[i].atk)+MAX(orcs[i].hp*t,orcs[i].atk);
//       }else{
//           if (q!=0){
//               bool flag = MAX(orcs[q-1].hp,orcs[q-1].atk)<MAX(orcs[i].hp*t,orcs[i].atk);
//               if (flag){
//                   result[i] = result[i]-MAX(orcs[q-1].hp,orcs[q-1].atk)+orcs[q-1].atk-orcs[i].atk+MAX(orcs[i].hp*t,orcs[i].atk);
//               }else{
//                   result[i]=result[i]-orcs[i].atk+MAX(orcs[i].hp*t,orcs[i].atk);
//               }
//           }
//
//       }
//       maxResult = MAX(maxResult,result[i]);
//    }
//    cout<<maxResult;
//
//
//    return 0;
//}