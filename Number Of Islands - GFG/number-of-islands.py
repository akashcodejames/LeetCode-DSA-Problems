#User function Template for python3

from typing import List
class DisjointSet:
    def __init__(self, n):
        self.parent = [i for i in range(n)]  # Initialize each element as its own parent
        self.rank = [0] * n  # Keep track of the rank of each set (used for weighted union)

    def find(self, x):
        if self.parent[x] != x:
            # Path compression: Make the parent of x the root of the set
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]

    def union(self, x, y):
        root_x = self.find(x)
        root_y = self.find(y)

        if root_x != root_y:
            # Weighted union: Attach the smaller tree to the root of the larger tree
            if self.rank[root_x] < self.rank[root_y]:
                self.parent[root_x] = root_y
            elif self.rank[root_x] > self.rank[root_y]:
                self.parent[root_y] = root_x
            else:
                self.parent[root_y] = root_x
                self.rank[root_x] += 1


class Solution:
    def numOfIslands(self, rows: int, cols : int, operators : List[List[int]]) -> List[int]:
        visited=[[0 for i in range(m)] for j in range(n)]
        ds=DisjointSet(n*m)
        count=0
        lst=[]
        for x1,x2 in operators:
            if visited[x1][x2]==1:
                lst.append(count)
                continue
            visited[x1][x2]=1
            count+=1
            for z1,z2 in [[0,1],[0,-1],[1,0],[-1,0]]:
                z1=z1+x1
                z2=z2+x2
                if 0<=z1<n and 0<=z2<m:
                    if visited[z1][z2]==1:
                        if(ds.find(x1*m+x2)!=ds.find(z1*m+z2)):
                            count-=1
                            ds.union(x1*m+x2,z1*m+z2)
                
            lst.append(count)
        return lst
                            
                            
            
            

































#{ 
 # Driver Code Starts
#Initial Template for Python 3


    
if __name__=="__main__":
    T = int(input())
    for t in range(T):
        
        n = int(input())
        m = int(input())
        k = int(input())
        operators = []
        for i in range(k):
            u, v = map(int, input().strip().split())
            operators.append([u, v])
        obj = Solution()
        ans = obj.numOfIslands(n, m, operators)
        for i in ans:
            print(i, end = ' ')
        print()
            

# } Driver Code Ends