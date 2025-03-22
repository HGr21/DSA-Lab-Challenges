class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
           // Pointer to the last valid element in nums1
            int i = m - 1;
            // Pointer to the last element in nums2
            int j = n - 1;
            // Pointer to the last position in nums1 where elements should be placed
            int k = m + n - 1;
    
            // Merge the arrays starting from the end
            while (i >= 0 && j >= 0) {
                if (nums1[i] > nums2[j]) {
                    nums1[k--] = nums1[i--];
                } else {
                    nums1[k--] = nums2[j--];
                }
            }
    
            // If there are any remaining elements in nums2, copy them
            while (j >= 0) {
                nums1[k--] = nums2[j--];
            }  
        }
    };