class Solution:
    def search(self, nums: List[int], target: int) -> int:
        n=len(nums);
        lo=0
        hi=n-1
        while lo<=hi:
            mid=(lo+hi)//2
            if nums[mid]==target:
                return mid
            elif nums[mid]<target:
                lo=mid+1
            else :
                hi=mid-1
        return -1;
        