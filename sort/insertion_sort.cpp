//
// Created by Boyan on 2020/10/6.
//

//insertion_sort O(n2)

template <typename T>
void insertion_sort(T array[],int l,int r){
    for (int i = l; i <=r ; ++i) {
        for (int j = i; j >l ; --j) {
            if (array[j-1]>array[j]){
                T temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }else{
                break;
            }
        }
    }
}