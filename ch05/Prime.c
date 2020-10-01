# include <stdio.h>

int main()
{
  int start=0;
  int end=0;
  int count=1;
  int i=2;
  int x=3;
  int Prime=1;
  int sum = 0;
 printf("Please edit two numbers (start end ) : ");
 scanf("%d %d",&start,&end);
  
  printf("2 ");
  while(count < end)
  {
    for(i=2;i<x;i++)
    {
      if(x%i==0)
      {
        Prime=0;
        break;
      }
    }
    
    if(Prime==1)
    {
      printf("%d ",x);
      count++;  
      if(count>=start)
      {
        sum+=x;
      }
    }
    // i=2;
    Prime=1;
    x++;
  }
  printf("\n sum is %d \n",sum);
  return 0;
}
int main222()
{
  int n=0;
  int m=0;
  printf("Please edit two numbers.");
  scanf("%d %d",&n,&m);
  if(0<n&&n<=m&&m<=200)
  {
    int i=2;
    int x=3;
    int count=1;
    int prime=1;
    while(count<n)
    {
      for(i=2;i<x;i++)
      {
        if(x%i==0)
        {
          prime=0;
        }
      }
      if(prime==1)
      {count++;}
      x++;
      i=2;
      prime=1;
    }
    
    x--;
    count--;
    int numberN=x;
    int sum=0;
    while(count<m)
    {
      for(i=2;i<x;i++)
      {
        if(x%i==0)
        {prime=0;}
      }
      if(prime==1)
      {
        count++;
        sum+=x;
      }
      x++;
      i=2;
      prime=1;
    }
    printf("%d",sum);
  }
  else{printf("Sorry.");}
}