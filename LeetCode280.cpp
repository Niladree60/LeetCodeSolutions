void wiggleSort(vector<int<& nums) {
      int n = nums.size();
      for(int i = 0; i < n - 1; i+=1){
         if((i % 2 == 0) == ( nums[i] > nums[i + 1])){
            swap(nums[i], nums[i + 1]);
         }
      }
   }
