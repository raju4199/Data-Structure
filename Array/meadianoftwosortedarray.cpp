class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int x = nums1.size();
        int y = nums2.size();
        int total = x + y;
        int midIndex = total / 2;
        
        vector<int> mrg;
        int i = 0, j = 0;
        
        while (i < x && j < y) {
            if (nums1[i] < nums2[j]) {
                mrg.push_back(nums1[i]);
                i++;
            } else {
                mrg.push_back(nums2[j]);
                j++;
            }
        }
        
        while (i < x) {
            mrg.push_back(nums1[i]);
            i++;
        }
        
        while (j < y) {
            mrg.push_back(nums2[j]);
            j++;
        }
        
        if (total % 2 == 0) {
            return (mrg[midIndex - 1] + mrg[midIndex]) / 2.0;
        } else {
            return mrg[midIndex];
        }
    }
};
