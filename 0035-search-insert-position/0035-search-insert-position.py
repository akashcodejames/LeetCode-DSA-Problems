class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        low=0
        high=len(nums)-1
        while(low<=high):
            mid=int((low+high)/2)
            if nums[mid]==target:
                return mid
            if target<nums[mid]:
                high=mid-1
            else:
                low=mid+1
        if target<nums[mid]:
            return mid
        return mid+1