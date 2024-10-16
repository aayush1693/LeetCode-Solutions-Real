class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        dctn = {}
        for num in nums:
            if num in dctn:
                return True
            dctn[num]= dctn.get(num,0)+1
        return False