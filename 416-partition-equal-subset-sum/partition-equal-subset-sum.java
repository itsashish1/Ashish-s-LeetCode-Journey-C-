class Solution{
    Boolean[][] dp;
    boolean solve(int[] nums,int target,int i){
        if(target==0)return true;
        if(i==nums.length||target<0)return false;
        if(dp[i][target]!=null)return dp[i][target];
        return dp[i][target]=solve(nums,target-nums[i],i+1)||solve(nums,target,i+1);
    }
    public boolean canPartition(int[] nums){
        int sum=0;
        for(int x:nums)sum+=x;
        if(sum%2!=0)return false;
        dp=new Boolean[nums.length][sum/2+1];
        return solve(nums,sum/2,0);
    }
}
