# Recursion + Memoization Space Complexity and Time Complexity of 0(N) with extra overhead of extra space due to initailization of new variables with each recursive call .

class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=[-1]*len(nums)
        def pick(nums,index):
            if index>len(nums)-1:
                return 0
            if dp[index]!=-1:
                return dp[index]
            
            dp[index]=max(nums[index] + pick(nums,index+2),pick(nums,index+1))
            return dp[index]
        return(pick(nums,0))

# Tabulation Top - Down Appoach Time Complexity 0(N) and Space Complexity 0(N)

class Solution:
    def rob(self, nums: List[int]) -> int:
        dp=[]
        for i in range(len(nums)):
            picked=nums[i]
            if i>1:
                picked=picked+dp[i-2]
            if i>=1:
                notpicked=dp[i-1]
            else:
                notpicked=0
            dp.append(max(picked,notpicked))
        return dp[len(nums)-1]

# Iterative with Time Complexity 0(N) and Space Complexity 0(1)

class Solution:
    def rob(self, nums: List[int]) -> int:
        prev1=0
        prev2=0
        for i in range(len(nums)):
            picked=nums[i]
            picked=picked + prev2
            notpicked= prev1
            prev2=prev1
            prev1=max(picked,notpicked)
            
        return prev1