//////
////// Created by Boyan on 2020/9/29.
//////
//
//#include<iostream>
//using namespace std;
//long long total = 0;
//void merge(int* array,int l,int middle,int r,int* temp)
//{
//    int i=l;
//    int j=middle+1;
//    int k=l;
//    while(i <= middle && j <= r)
//    {
//        if(array[i] <= array[j])
//            temp[k++]=array[i++];
//        else
//        {
//            temp[k++]=array[j++];
//            total += middle-i+1;
//        }
//    }
//    while(i <= middle)
//        temp[k++]=array[i++];
//    while(j <= r)
//        temp[k++]=array[j++];
//    for(int i=l;i <= r;++i)
//        array[i]=temp[i];
//}
//void merge_sort(int* array,int l,int r,int* temp)
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
//int main()
//{
//    int T;
//    cin>>T;
//    while (T--){
//        int n;
//        cin>>n;
//        int *temp=new int[n];
//        int arr[n];
//        for (int i = 0; i < n; ++i) {
//            cin>>arr[i];
//        }
//        merge_sort(arr,0,n-1,temp);
//        cout<<total;
//        total = 0;
//        delete[] temp;
//        if (T)cout<<endl;
//    }
//
//}