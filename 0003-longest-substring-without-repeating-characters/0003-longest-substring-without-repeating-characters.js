/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const str=s;
    const len=str.length;
    if(len<=1)
    return len;

    let longest=0;
    let left=0;
    const seenChar=new Map();
    for(var right=0;right<len;right++)
    {
        let currentChar=str[right];
        let prevSeen=-1;
        if(seenChar.has(currentChar))
        {
            prevSeen=seenChar.get(currentChar);
        }
        if(prevSeen>=left)
        {
            left=prevSeen +1;
        }

        seenChar.set(currentChar,right);
        longest=Math.max(longest,right-left+1);
    }
    return longest;
};