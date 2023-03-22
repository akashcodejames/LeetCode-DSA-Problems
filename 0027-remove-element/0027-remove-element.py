class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        while(val in nums):
            nums.remove(val)
        return len(nums)
        # i=0
        # j=0
        # while(i<len(nums)):
        #     if(nums[i]==val):
        #         j=j+1
        #         i=i+1
        #     else:
        #         i=i+1

        # return len(nums)-j       