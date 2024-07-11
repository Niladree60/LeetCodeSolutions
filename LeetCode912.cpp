class Solution {
public:
    void merge(vector<int> &nums, int l, int m, int r){
        int n1 = m + 1 - l, n2 = r - m;
        vector<int> left(n1), right(n2);
        for (int i = 0; i < n1; i++)
            left[i] = nums[l + i];
        for (int i = 0; i < n2; i++)
            right[i] = nums[m + 1 + i];
        int i = 0, j = 0, k = l;
        while (i < n1 || j < n2) 
        {
            if (j == n2 || i < n1 && left[i] < right[j])
                nums[k++] = left[i++];
            else
                nums[k++] = right[j++];
        }
    }
    
    void mergeSort(vector<int> &nums, int l, int r){
        if(l >= r)
            return;
        int mid = (l + r) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        merge(nums, l, mid, r);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};
