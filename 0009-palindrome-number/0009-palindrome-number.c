bool isPalindrome(int x){
   long int y=0;
    int x1=x;
    int z;
if(x<0)
return false;
else
{
while(x1!=0)
{
z=x1%10;
y=y*10+z;
x1=x1/10;
}
if(y==x)
return true;
return false;
}
}