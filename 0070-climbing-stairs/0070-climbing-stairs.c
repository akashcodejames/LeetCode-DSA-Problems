//dynamic programming unbounded knapsack target sum

int climbStairs(int n){
  int j=n; 
  int t=1;
  int m=1;
  while(n>1)
  {
      j=t+m;
      t=m;
      m=j;
      n--;
  }
  return j;
}