class Solution:
    def reverse(self, x: int) -> int:
        rev=0
        copy=x
        if copy<0:
            copy*=-1
        while(copy>0):
            digit=copy%10
            rev=rev*10+digit
            copy=copy//10
            print(rev)
        if rev>2**31-1:
            return 0
        if x<0:
            rev*=-1
        return rev