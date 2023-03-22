int removeDuplicates(int* nums, int numsSize){
int k=0;
while(k<numsSize-1)
{
    if(nums[k]==nums[k+1])
    {
        int j=k+1;
        while(j<numsSize && nums[k]==nums[j])
        {
            nums[j]=-9999;
            j++;
        }
        k=j;
        }
     else 
     k++;
    }
    int t1=0;
    while(t1<numsSize)
    {
        if(nums[t1]==-9999)
        break;
        else 
        t1++;
    }
    int ktm=t1+1;
    while(ktm<numsSize)
    {
        if(nums[ktm]!=-9999)
        {
            nums[t1]=nums[ktm];
            t1++;
        }
        ktm++;
    }
    return t1;
}