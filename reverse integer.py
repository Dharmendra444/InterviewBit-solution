class Solution:
    # @param A : integer
    # @return an integer
    def reverse(self, n):
        if(n<-2**31 or n>2**31-1 ):
            return 0;
        flag=0
        if(n<0):
            flag=1
            n*=-1
        s=str(n)
        
        s=s[::-1]
        n=int(s)
        if(flag==1):
            n*=-1
        if(n<-2**31 or n>2**31-1 ):
            return 0;
          
        return n       
        

