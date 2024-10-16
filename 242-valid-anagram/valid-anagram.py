class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        hsmpS, hsmpT ={},{}
        for c in s:
            hsmpS[c]= hsmpS.get(c,0)+1
        for c in t:
            hsmpT[c]= hsmpT.get(c,0)+1
        return hsmpS==hsmpT