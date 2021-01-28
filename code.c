#include <stdio.h>
/* Include other headers as needed */
int main()
{
	int a[10];
  for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
  int p=0,n=0,e=0,o=0;
  for(int i=0;i<10;i++)
  {
    if(a[i]>0)
    {
      if(a[i]%2==0)
        e++;
      else
        o++;
      p++;
    }
    else
    {
      if((a[i]*-1)%2==0)
        e++;
      else
        o++;
      n++;
    }
  }
  printf("%d\n%d\n%d\n%d",p,n,e,o);
    return 0;
}
