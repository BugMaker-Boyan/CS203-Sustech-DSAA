//
// Created by Boyan on 2020/10/6.
//
//bubble_sort O(n2)


template <typename T>
void bubble_sort(T array[],int l,int r){
    int n = r-l+1;
    for (int i = 0; i <=n-1; ++i) {
        for (int j = l; j <= r-1; ++j) {
            if (array[j]>array[j+1]){
                T temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }
}
