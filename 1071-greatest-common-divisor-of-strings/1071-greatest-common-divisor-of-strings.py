class Solution:
    def gcdOfStrings(self, str1: str, str2: str) -> str:
      i=len(str2)-1
      while i>=0:
        if (len(str1) % (i+1)!=0 or len(str2) % (i+1)!=0): #to ensure the code below do not run in case if the length of the string chosen does not perfectly divide the strings
          i=i-1
          continue
        #in case modulus ==0 , the these codes gets executed
        x=str2[:i+1]
        a1=str1.count(x) # no of times x in str1 string
        a2=str2.count(x) # no of times x in str2 string
        if a1*len(x)==len(str1) and a2*len(x)==len(str2): # to check if no of time x string in given string * len of x string must be equal to string if it perpectly divides
            # Ex str1 = "ABCABC" str2="ABC" x="ABC" 
            # a1=2 ,a2=1 ,len(x)=3
            # a1 * len(x) =2*3=6 which is equal to len(str1)
            # a2 * len(x) =1*3=3 which is equal to len(str2)
            
          return x
        i=i-1
      return ""

