#include <stdio.h>

int main()
{
int x;
int y;
printf("Please write coordinates ...\n");
printf("x = \n");
scanf("%d", &x);
printf("y = \n");
scanf("%d", &y);
if(x < 0)
{
  if(y < 0) printf("3th quater\n");
  else printf("2nd quarter\n");
}
else if(x > 0)
{
  if(y < 0) printf("4th quater\n");
  else printf("1st quarter\n");
}
else if(x = 0) printf("its on axes");
else if(y = 0) printf("its on axes");
return 0;
}
