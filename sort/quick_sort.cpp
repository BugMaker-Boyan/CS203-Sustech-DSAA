//
// Created by Boyan on 2020/10/6.
//

//quick_sort average O(nlog(n))

template <typename T>
int partition(T array[],int l, int r){
    T pivot = array[l];
    int L = l+1,R = r;
    while (L<=R){
        while (L<=R && array[L]<=pivot) L++;
        while (L<=R && array[R]>=pivot) R--;
        if (L<=R && array[L]>pivot && array[R]<pivot){
            T temp = array[R];
            array[R] = array[L];
            array[L] = temp;
        }
    }
    array[l] = array[R];
    array[R] = pivot;
    return R;
}

template <typename T>
void quick_sort(T array[],int l, int r){
    if (l<r){
        int pos = partition(array,l,r);
        quick_sort(array,l,pos-1);
        quick_sort(array,pos+1,r);
    }
}