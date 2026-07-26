import math
class Solution:
    def isFeasible(self,piles:List[int],h:int,rate:int) -> bool:
        k=0
        for banana in piles:
            k+= math.ceil(banana/rate)
        if k<=h:
            return True
        return False

    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        lo=1
        hi=max(piles)
        ans=1

        while lo<=hi:
            mid=(lo+hi)//2
            if(self.isFeasible(piles,h,mid)):
                hi=mid-1
                ans=mid
            else:
                lo=mid+1

        return ans