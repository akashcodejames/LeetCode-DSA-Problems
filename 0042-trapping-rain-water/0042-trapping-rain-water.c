//Udemy- Master the coding interview.
//CHECK UDEMY TRAPPING RAIN WATER SECTION 4 (Excellent Explanation)
//***********

int trap(int* height, int heightSize){
int left=0;
int right=heightSize-1;
int total=0;
int max_left=height[left];
int max_right=height[right];
while(left<right)
{
    if(height[left]<=height[right])
    {
        if(height[left]>max_left)
        max_left=height[left];
        else
        total=total+(max_left-height[left]);
        left++;
    }
    else
    {
        if(height[right]>max_right)
        max_right=height[right];
        else
        total=total+(max_right-height[right]);
        right=right-1;
    }
}
return total;
}