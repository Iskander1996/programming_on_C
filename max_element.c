# include <stdio.h>
# include <stdbool.h>
int main()
{
int x , i;
i = 0;
scanf("%d", &x);
int m =  -1000000, m_i;

while(x != 777)
{  if(x%2 ==0)
      if(x > m)
      {
         m = x;
         m_i = i;
      }
   i+=1;
   scanf("%d", &x);
}

printf("maximum position %d of maximum = %d\n", m_i, m);
return 0;
}
