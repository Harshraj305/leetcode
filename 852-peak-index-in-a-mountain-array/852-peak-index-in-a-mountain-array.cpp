class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int i = 0, j = arr.size()-1;
        int mid;
        
//         while (i < j) {
//             mid = (i+j)/2;
            
//             if (arr[mid] < arr[mid + 1]) {
//                 i = mid +1;
//             }
//             else {
//                 j = mid;
//             }
//         }
        
//         return i;
        
        while (i <= j) {
            mid = (i+j) / 2;
            
            if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]) {
                return mid;
            }
            
            else if (arr[mid] < arr[mid+1]) {
                i = mid +1;
            }
            else {
                j = mid-1;
            }
        }
        
        return i;
        
    }
};