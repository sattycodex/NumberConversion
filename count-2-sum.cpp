int twoSum(vector<int> &nums,int tar){
    int i=0;
    int j=nums.size()-1;
    int count=0;
    while(i<j){
        if(nums[i]+nums[j]>tar)j--;
        else if(nums[i]+nums[j]<tar)i++;
        else{
            int left=i;
            int right=j;
            while(j>i && nums[i]==nums[i+1])i++;
            while(j>i && nums[j]==nums[j-1])j--;
            
            if(i==j){
                count+=((right-left)*(right-left+1))/2;
            }else{
                count+=(i-left+1)*(right-j+1);
            }
            i++;
            j--;
        }
    }
    return count;
}
