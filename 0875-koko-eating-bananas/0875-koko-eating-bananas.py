
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        left=1
        right=max(piles)
        res=right
        while left<=right:
          temp=int((left+right)/2)
          hours=0
          for i in piles:
            hours=hours+ math.ceil(i/temp)
          if hours<=h:
            res=min(res,temp)
            right=temp-1
          else:
            left=temp+1
        return res