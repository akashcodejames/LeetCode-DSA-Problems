# asymptotic O(n*m) (n=number of words, m=number of letters) time, and O(1) space complexity
class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ''
        first_word = strs[0]
        for i in range(len(first_word)):
            for j in range(1,len(strs)):
                if i >= len(strs[j]): # first_word larger than current_word
                    return first_word[:i]
                if strs[j][i] != first_word[i]: # letters don't equal
                    return first_word[:i]

        return first_word # made it to the end of the first word so this the common prefix