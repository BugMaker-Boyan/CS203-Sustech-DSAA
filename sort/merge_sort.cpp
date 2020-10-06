//
// Created by Boyan on 2020/10/6.
//

//merge_sort O(nlog(n))
template <typename T>
void merge(T array[],int l, int r,int middle,T* temp){
    int i = l;
    int j = middle+1;
    int k = l;
    while (i<=middle && j<=r){
        if (array[i]<=array[j]){
            temp[k++]=array[i++];
        }else{
            temp[k++]=array[j++];
        }
    }
    while (i<=middle){
        temp[k++]=array[i++];
    }
    while (j<=r){
        temp[k++]=array[j++];
    }
    for (int m = l; m <=r ; ++m) {
        array[m]=temp[m];
    }
}


template <typename T>
void merge_sort(T array[],int l, int r,T* temp){
    if (l<r){
        int middle = (l+r)/2;
        merge_sort(array,l,middle,temp);
        merge_sort(array,middle+1,r,temp);
        merge(array,l,r,middle,temp);
    }
}