class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        
        vector<int> merged;
        
        while (j < m && i < n) {
            if (nums1[i] > nums2[j]) {
                merged.push_back(nums2[j]);
                j++;
            }
            else {
                merged.push_back(nums1[i]);
                i++;
            }
        }
        while (i < n) {
            merged.push_back(nums1[i]);
            i++;
        }
        while (j < m) {
            merged.push_back(nums2[j]);
            j++;
        }
        
        
        int x = merged.size();
        if (int(x) % 2 == 0) {
            return double( merged[x/2] + merged[x/2 -1] )/2;
        }
        
        return double(merged[x/2]);
        
    }
};