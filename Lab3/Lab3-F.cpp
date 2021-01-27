////
//// Created by Boyan on 2020/9/30.
////
//
//#include <iostream>
//using namespace std;
//long long n,x1,x2;
//struct line{
//    long long k;
//    long long b;
//    long long id;
//    long long val;
//};
//
//bool myComL(line l1,line l2){
//    if (l1.val==l2.val){
//        return l1.k*x2+l1.b<l2.k*x2+l2.b;
//    }else{
//        return l1.val<l2.val;
//    }
//}
//
//bool myComR(line l1,line l2){
//    if (l1.val==l2.val){
//        return l1.k*x1+l1.b<l2.k*x1+l2.b;
//    }else{
//        return l1.val<l2.val;
//    }
//}
//
//void merge(line* array,int l,int middle,int r,line* temp,int flag)
//{
//    int i=l;
//    int j=middle+1;
//    int k=l;
//    while(i <= middle && j <= r)
//    {
//        if (flag==0){
//            if(myComL(array[i],array[j])){
//                temp[k++]=array[i++];
//            }
//            else
//            {
//                temp[k++]=array[j++];
//            }
//        }else{
//            if(myComR(array[i],array[j])){
//                temp[k++]=array[i++];
//            }
//            else
//            {
//                temp[k++]=array[j++];
//            }
//        }
//
//    }
//    while(i <= middle)
//        temp[k++]=array[i++];
//    while(j <= r)
//        temp[k++]=array[j++];
//    for(int i=l;i <= r;++i)
//        array[i]=temp[i];
//}
//void merge_sort(line* array,int l,int r,line* temp,int flag)
//{
//    if(l < r)
//    {
//        int middle=(l+r)/2;
//        merge_sort(array,l,middle,temp,flag);
//        merge_sort(array,middle+1,r,temp,flag);
//        merge(array,l,middle,r,temp,flag);
//    }
//}
//
//
//int main(){
//
//    cin>>n>>x1>>x2;
//    line arr_l[n];
//    line arr_r[n];
//    int k,b;
//    for (int i = 0; i < n; ++i) {
//        cin>>k>>b;
//        arr_l[i].k=k;
//        arr_l[i].b=b;
//        arr_l[i].id=i;
//        arr_l[i].val=k*x1+b;
//
//        arr_r[i].k=k;
//        arr_r[i].b=b;
//        arr_r[i].id=i;
//        arr_r[i].val=k*x2+b;
//    }
//    line* temp = new line[n];
//    merge_sort(arr_l,0,n-1,temp,0);
//    merge_sort(arr_r,0,n-1,temp,1);
//
//
//
//
//    bool flag = false;
//    for (int i = 0; i < n; ++i) {
//        if (arr_l[i].id!=arr_r[i].id){
//            flag = true;
//            break;
//        }
//    }
//    if (flag){
//        cout<<"YES";
//    }else{
//        cout<<"NO";
//    }
//
//
//
//
//
//
//    return 0;
//}