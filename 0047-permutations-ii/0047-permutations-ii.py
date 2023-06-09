class Solution:
    def __init__(self):
        self.my_instance_variable = []


    def permutation(self,number,k):
        number.sort()
        if len(number)==0:
            self.my_instance_variable.append(k[:])
            return
        for i in number:
            new_k = k[:]  
            new_k.append(i)
            new_number = number[:]
            new_number.remove(i)
            self.permutation(new_number, new_k)
            


    def permuteUnique(self, nums: List[int]) -> List[List[int]]:
        self.permutation(nums,[])
        unique_list = []
        for sublist in self.my_instance_variable:
            if sublist not in unique_list:
                unique_list.append(sublist)
        return unique_list 