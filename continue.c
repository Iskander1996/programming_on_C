# include <stdio.h>

int main()
{
for(int i = 1; i < 20; ++i)
{
   if (i == 13) continue;
   if (i%7 == 0) continue;
   printf("Number i = %d.", i);
   if (i%3 == 0)
      printf("%d is a  multiple of 3\n", i);
   else
      printf("%d is not a multiple of 3\n", i);
}
return 0;
}
