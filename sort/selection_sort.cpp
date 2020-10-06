//
// Created by Boyan on 2020/10/6.
//

//selection_sort O(n2)


template<typename T>
void selection_sort(T array[],int l,int r){
    for (int i = l; i <= r-1; ++i) {
        int k = i;
        for (int j = i+1; j <=r; ++j) {
            if (array[k]>array[j]){
                k = j;
            }
        }
        T temp = array[k];
        array[k] = array[i];
        array[i] = temp;
    }
}
