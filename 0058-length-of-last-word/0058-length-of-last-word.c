int lengthOfLastWord(char * s){
     int i=0;
     int m=-1;
     int k=0;
     if(s[0]=='\0')
     return k;
while(s[i]!='\0')
{
    if(s[i]==' ')
    m=i;
    i++;
}

if(s[m+1]=='\0')
{
    while(s[m]==' ')
    m--;
    while(m>=0 && s[m]!=' ' )
    {
        m--;
        k++;
    }
}

else
{
    if(m!=-1)
    m++;
    else 
    m=0;
    while(s[m]!='\0')
    {
        m++;
        k++;
    }
}
return k;
 }