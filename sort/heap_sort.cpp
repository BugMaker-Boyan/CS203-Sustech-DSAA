//
// Created by Boyan on 2020/10/6.
//

//heap_sort O(nlog(n))

template <typename T>
void swap(T tree[],int i,int j){
    T temp=tree[j];
    tree[j]=tree[i];
    tree[i]=temp;
}

template <typename T>
void heapify(T tree[],int n,int i){
    //i: the node want to remain
    //n: the total number of tree
    if (i>n-1){
        return;
    }
    int l=2*i+1;
    int r=2*i+2;
    int max = i;
    if (l<=n-1&&tree[max]<tree[l]) max = l;
    if (r<=n-1&&tree[max]<tree[r]) max = r;
    if (max != i){
        swap(tree,max,i);
        heapify(tree,n,max);
    }

}


template <typename T>
void build_heap(T tree[],int n){
    //heapify from last parent node to the first
    //node i's parent: (i-1)/2
    //node i's left children 2*i+1
    //node i's right children 2*i+2
    int last_parent = (n-2)/2;
    for (int i = last_parent; i >=0 ; --i) {
        heapify(tree,n,i);
    }
}

template <typename T>
void heap_sort(T tree[],int n){
    build_heap(tree,n);
    for(int i = n-1;i>=0;i--){
        swap(tree,i,0);
        heapify(tree,i,0);//remain the root
    }
}
