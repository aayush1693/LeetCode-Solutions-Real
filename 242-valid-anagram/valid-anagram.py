class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        p=sorted(s)
        q=sorted(t)
        return p==q