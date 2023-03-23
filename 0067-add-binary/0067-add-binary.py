class Solution:
    def addBinary(self, a: str, b: str) -> str:



        
        a=int(a)
        b=int(b)
        a=list(str(a+b))
        i=len(a)-1
        carry=0
        while i>=0:
            if a[i]=='0':
                a[i]=str(carry)
                carry=0
            if a[i]=='1':
                a[i]=str(1+carry)
                if a[i]=='2':
                    a[i]='0'
                    carry=1
            elif int(a[i])>1:
                a[i]=str(carry)
                carry=1
            i=i-1
        if carry==1:
            a.insert(0,'1')
        b=''
        for i in range(len(a)):
            b=b+a[i]
        return b
            

            