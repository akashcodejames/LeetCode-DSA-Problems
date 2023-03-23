
// 


/*int isprime(int j)
{
int u=2;
while(u<j)
{
    if(j%u==0)
    return 0;
    u++;
}
return 1;
}
bool isUgly(int n){
bool gtr=true;
int i=2; 
if(n<0)
return false;
while(i<n)
{
if(n%i==0){
printf("%d\n",i);
if(isprime(i))
{
    if(i==2 || i==3 || i==5){}
    else
    {
        gtr=false;
        return gtr;
    }
}
}
i++;
}
return gtr;
}*/


bool isUgly(int num) {
    if(num<=0)
    {
       return false; 
    }
    if(num<7)
    {
        return true;
    }
    if(num%2==0)
    {
        return isUgly(num/2);
    }
    if(num%3==0)
    {
        return isUgly(num/3);
    }
    if(num%5==0)
    {
        return isUgly(num/5);
    }
    return false;
}