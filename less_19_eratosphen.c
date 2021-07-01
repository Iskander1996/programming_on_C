#include <stdio.h>
# define N 20

void print_array(int A[N])
{
for(int i = 0; i < N; ++i)
{
printf(" %d ", A[i]);
}
printf("\n");
}

int main()
{
int A[N];
for(int i = 0; i < N; ++i)
{
A[i] = i;
}
print_array(A);
for(int i = 2; i*i < N; ++i)
   for(int k=i*i; k < N; k += 1)
   {if(A[k]%A[i] == 0)
       A[k] = 1;
   else A[k] = 0;
   }
print_array(A);
return 0;
}
