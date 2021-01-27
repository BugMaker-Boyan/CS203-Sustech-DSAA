//
// Created by Boyan on 2020/10/11.
//

// the worst case O(n2)

template <typename T>
void shell_sort(T arr[],int n){
    for (int gap = n/2; gap >0 ; gap/=2) {
        for (int i = 0; i < gap; ++i) {
            for (int j = i+gap; j < n; ++j) {
                if(arr[j]<arr[j-gap]){
                    T temp = arr[j];
                    int p = j - gap;
                    // the big value move to right
                    while (p>=0 && arr[p]>temp){
                        arr[p+gap] = arr[p];
                        p-=gap;
                    }
                    arr[p+gap] = temp;
                }
            }
        }
    }
}