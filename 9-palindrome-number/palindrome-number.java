class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int num =x;
        int rev =0;
        while(num>0){
            int dig = num %10;
            rev = dig + rev*10;
            num=num/10;
        }
        return (rev==x);
    }
}