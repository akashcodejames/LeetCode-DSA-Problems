bool isValid(char * s){
int len = strlen(s);
char ch[len];
int i=0;
int k=0;
int y=0;
while(s[i]!='\0')
{
    if(s[i]=='{'||s[i]=='('||s[i]=='[')
    {
        ch[k]=s[i];
        k++;
    }
    else if(s[i]=='}'||s[i]==')'||s[i]==']')
    {
        if(s[i]=='}')
        {
            if((k-1)<0)
            return false;
            if(ch[k-1]=='{')
            k=k-1;
            else
            {
                y=1;
                break;
            }
        }
        else if(s[i]==')')
        {
            if((k-1)<0)
            return false;
            if(ch[k-1]=='(')
            k=k-1;
            else
            {
                y=1;
                break;
            }
            
        }
        else if (s[i]==']')
        {
            if((k-1)<0)
            return false;
            if(ch[k-1]=='[')
            k=k-1;
            else
            {
                y=1;
                break;
            }
        }
    }
    i++;
}
if(y==0&& k==0)
return true;
else
return false;
}