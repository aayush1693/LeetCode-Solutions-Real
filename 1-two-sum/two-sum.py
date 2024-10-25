class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hm ={}
        for i,num in enumerate(nums):
            req=target-num
            if(req in hm):
                return[hm[req],i]
            hm[num]=i

