
#This method was to find all possible permutation of traversal and then considering all possible to find min cost path but time and space ne maar diya bhai


# class Solution:
#     def minPathSum(self, grid: List[List[int]]) -> int:
#         numbers=[]
#         size=len(grid)-1
#         if size==-1:
#             return 0
#         size2=len(grid[0])-1
#         for i in range(size2):
#             numbers.append(0)
#         for i in range(size):
#             numbers.append(1)
#         permutations = list(itertools.permutations(numbers))
#         g=set(permutations)
#         max=sys.maxsize
#         for j in g:
#             m=0
#             n=0
#             temp=grid[m][n]
#             for t1 in j :
#                 if t1==0:
#                     n=n+1
#                 else:
#                     m=m+1
#                 temp=temp+grid[m][n]
#             if temp<max:
#                 max=temp
        
#         return max


# RECURSION + MEMOIZATION 

class Solution:
    def minPath(self,grid,x,y,m,n,dp):
        if x==n-1 and y==m-1:
            return grid[x][y]
        if x==n or y==m:
            return sys.maxsize
        if dp[x][y]!=-1:
            return dp[x][y]
        else:
            dp[x][y]=grid[x][y]+min(self.minPath(grid,x+1,y,m,n,dp),self.minPath(grid,x,y+1,m,n,dp))
            return dp[x][y]
    def minPathSum(self, grid: List[List[int]]) -> int:
        m=len(grid[0])
        n=len(grid)
        dp = [[-1]*m for _ in range(n)]
        k1=self.minPath(grid,0,0,m,n,dp)
        return k1

