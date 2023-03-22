int divide(int dividend, int divisor){
if(dividend==-2147483648 && divisor==-1)
return 2147483647;
double i;
double j=pow(2,31);
int m1=0;
i=dividend/divisor;
if(i>=j-1)
{
    
    return 2147483647;
}

j=j*(-1);
if(i<=j)
{
    return -2147483648;
}
m1=i;
return m1;


}