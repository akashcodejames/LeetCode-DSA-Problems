class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        dic={'2': 'abc', '3': 'def', '4': 'ghi', '5': 'jkl', 
                   '6': 'mno', '7': 'pqrs', '8': 'tuv', '9': 'wxyz'}
        a=[]
        net=[]
        temp=[]
        for i in range(len(digits)):
         a.append(dic[digits[i]])
        a=list(map(list,a))
        while(len(a)!=0):
            b1=a.pop()
            if len(net)==0:
                net=b1
            else:
                for i in range(len(b1)):
                 for j in range(len(net)):
                     m1=b1[i]+net[j]
                     temp.append(m1)
                net=temp
                temp=[]
        return net
                