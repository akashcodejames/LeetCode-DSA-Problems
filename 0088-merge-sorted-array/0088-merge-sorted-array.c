void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
int arr[m+n];
int a1=0;
int a2=0;
int a3=0;
int i=0;
while(a3<(m+n))
{
    if(a1<m && a2<n)
    {
        if(nums1[a1]<nums2[a2])
        {
            arr[a3]=nums1[a1];
            a1++;
            a3++;
        }
        else
        {
            arr[a3]=nums2[a2];
            a3++;
            a2++;
        }
    }
        else if(a1<m)
        {
            while(a1<m)
            {
                arr[a3]=nums1[a1];
                a3++;
                a1++;
            }
        }
        else
        {
            while(a2<n)
            {
                arr[a3]=nums2[a2];
                a2++;
                a3++;
            }
        
        }
    }
    a1=0;
    while(a1<(m+n))
    {
        nums1[a1]=arr[a1];
        a1++;
    }
}