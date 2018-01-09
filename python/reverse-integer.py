class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        sign=1
        if x < 0:
            sign=-1
            x=x*-1
        ans=x%10
        x=x/10
        
        while x > 9:
            ans=ans*10+x%10
            x=x/10
        if x > 0:
            ans=ans*10+x
        if ans > 2147483648:
            return 0
        else:
            return sign*ans
