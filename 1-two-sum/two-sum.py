class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hsmp={}
        for i,n in enumerate(nums):
            test=target-n
            if(test in hsmp):
                return{hsmp[test],i}
            hsmp[n]=i
        return