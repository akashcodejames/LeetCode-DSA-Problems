void rotate(int** matrix, int matrixSize, int* matrixColSize){
    matrixColSize=matrixSize;
    if(matrixSize<2)
    return;
int **arr=matrix;
int q1=matrixSize-1;
int j=0;
int i=0;
int top=0;
int temp2=0;
while(i<matrixSize/2)
{
    j=i;
    while(j<q1-i)
    {
    int temp1=arr[i][j];
    int m=i;
    int n=j;
    top=0;
    while(/*(m!=i && n!=j) ||*/ top!=4)
    {
        if(m==i && n!=q1-i)
        {
  //      int sum=n+matrixSize-1;
    //    n=sum-(sum%q1);
      //  m=(m+sum-n)%matrixSize;
      int l=n;
      m=n;
      n=q1-i;
        temp2=arr[m][n];
        arr[m][n]=temp1;
        temp1=temp2;
    }
    else if(n==q1-i && m!=q1-i)
    {
        int l=n-m+i;
        m=n;
        n=l;
        temp2=arr[m][n];
        arr[m][n]=temp1;
        temp1=temp2;
    }
    else if(m==q1-i && n!=i)
    {
        m=n;
        n=i;
        temp2=arr[m][n];
        arr[m][n]=temp1;
        temp1=temp2;
    }
    else 
    {
        m=i;
        n=j;
        temp2=arr[m][n];
        arr[m][n]=temp1;
        temp1=temp2;
    }
    top++;
    }
    top=0;
    j++;
}
i++;
}
}
