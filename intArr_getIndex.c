int getIndex(int* arr, int size, int num) {
    int flag = 0;
    int l = 0, r = size - 1;
    int middle;

    do {
        middle = l + (r - l) / 2;
        if (arr[l] == num) return l;
        if (arr[r] == num) return r;
        if (arr[middle] == num) return middle;
        if (arr[middle] > num)
            r = middle;
        if (arr[middle] < num)
            l = middle;
    } while (l < r && arr[middle] != num);

    return -1;
}