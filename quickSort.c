
int partition(int* arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high, tmp;
    while (i < j) {

        do {
            ++i;
        } while (arr[i] <= pivot && i < high);

        do {
            --j;
        } while (arr[j] > pivot && j > low);

        if (i < j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }

    }
    tmp = arr[low];
    arr[low] = arr[j];
    arr[j] = tmp;

    return j;
}

void quickSort(int* arr, int l, int h) {
    int j;
    static cnt = 0;
    if (l < h) {
        ++cnt;
        j = partition(arr, l, h);
        quickSort(arr, l, j);
        quickSort(arr, j + 1, h);
    }
    else {
        printf("quickSort cnt: %d", cnt);
    }
}
