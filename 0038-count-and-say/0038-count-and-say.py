class Solution:
    def countAndSay(self, n: int) -> str:
        string="1"
        for p1 in range(n-1):
            length=len(string)-1
            i=0
            k=1
            temp=""
            while(i<=length):
                if(i+1<=length):
                    if(string[i]==string[i+1]):
                        k=k+1
                    else:
                        temp=temp+str(k)+string[i]
                        k=1
                else:
                    temp=temp+str(k)+string[i]
                    k=1
                i=i+1
            string=temp
            print(string)
            p1=p1-1
        return string
                        



