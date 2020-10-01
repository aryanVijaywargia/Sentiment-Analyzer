def fact(n):
    if n==0:
        return 1
    return (n*fact(n-1))%1000003

class Solution:
    # @param A : string
    # @return an integer
    def findRank(self, A):
        sum=0
        if len(A)==1:
            return 1
        if len(A)==0:
            return 1
        for i in range(0,len(A)):
            c = A[i]
            for j in range(i,len(A)):
                if c > A[j]:
                    sum += fact(len(A)-1-i)
        
        return (sum+1)%1000003
        
