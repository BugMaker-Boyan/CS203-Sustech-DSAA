////
//// Created by Boyan on 2020/9/30.
////
//
//#include <iostream>
//using namespace std;
//typedef  long long ll;
//
//void merge(ll * array,int l,int middle,int r,ll* temp)
//{
//    int i=l;
//    int j=middle+1;
//    int k=l;
//    while(i <= middle && j <= r)
//    {
//        if(array[i] >= array[j])
//            temp[k++]=array[i++];
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
//void merge_sort(ll* array,int l,int r,ll* temp)
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
//
//int main(){
//    int n,m;
//    cin>>n>>m;
//    int arr[n+1];
//    for (int i = 1; i <=n ; ++i) {
//        cin>>arr[i];
//    }
//    long long sum[n-1];
//    long long total=0;
//    int k = 0;
//    for (int i = n; i >=1 ; i--,k++) {
//        total+=arr[i];
//        if (i>1) sum[k] = total;
//    }
//    ll* temp = new ll[n-1];
//    merge_sort(sum,0,n-2,temp);
//    long long ans = total;
//    for (int i = 0; i <m-1; ++i) {
//        ans+=sum[i];
//    }
//    cout<<ans;
//
//
//
//    return 0;
//}