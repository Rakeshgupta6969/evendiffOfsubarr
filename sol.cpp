class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n = nums.size();
       
       int totalsum = accumulate(nums.begin(),nums.end(),0);


       int leftsum  = 0;
        int count = 0;
       for(int i = 0; i<n-1; i++){
         
         leftsum += nums[i];

         int rightsum = totalsum - leftsum;
         if((leftsum - rightsum)%2 == 0){
             count++;
         }
      
       }




       return count;
    }
};