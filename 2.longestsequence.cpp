class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty()) return 0;
            sort(nums.begin(),nums.end());
            //cout<<nums[0]<<nums[1]<<nums[2];
            int count=0;
            int maxi=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i+1]-nums[i]==1)count++;
                else if(nums[i+1]-nums[i]==0){
                    count=count;
                }
                else{
                    if(count>maxi)maxi=count;
                    count=0;
                }
            }
            maxi=max(count,maxi);
            return maxi+1;
            
        }
    };