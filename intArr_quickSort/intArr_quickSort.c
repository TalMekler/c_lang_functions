// *** important: At the first call: h = the last INDEX in the array (size-1)
void quickSort(int *arr, int l, int h){
    int j;
    if(l<h){
        j = quickSort_swapper(arr, l, h);
        quickSort(arr, l, j); 
        quickSort(arr, j+1, h);
    }
}

int quickSort_swapper(int *arr, int l, int h){
    int pivot = arr[l];
    int tmp ,i = l ,j = h;
    
    while(i<j) {
        for (; i<h && arr[i] <= pivot; i++); // skip i to the index where the value is BIGGER then the pivot value
        for (; j>l && arr[j] > pivot; j--); // skip j to the index where the value is SMALLER then the pivot value
        
        // swap values if i < j
        if(i<j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
    // i > j -> swap j value with pivot value
    tmp = arr[l];
    arr[l] = arr[j];
    arr[j] = tmp;
    return j; // pivot value in the correct position in the array - return the position
}
