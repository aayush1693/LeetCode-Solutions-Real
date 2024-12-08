import java.util.*;
class Solution {
    public int reverse(int x) {
        int num= Math.abs(x);
        int rev=0;
        while(num>0){
            if(rev> Integer.MAX_VALUE/10 || rev<Integer.MIN_VALUE/10) return 0;
            int digit= num%10;
            rev = digit +rev*10;
            num=num/10;
        }
        if(x<0) return -rev;
        return rev;
    }
}