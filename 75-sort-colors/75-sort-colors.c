

void sortColors(int* arr, int n){
    int bucket[3] = {0};
    for(int i=0; i<n; ++i) ++bucket[arr[i]];
    for(int i=0, j=0; i<n; ++i, --bucket[j])
        arr[i] = ({ while(!bucket[j] && ++j); j; });
}