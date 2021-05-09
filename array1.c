#include <stdio.h>
#define N 5

void print_array(int A[])
{
for(int i = 0; i < N; ++i)
   {
       printf("elemtn = %d\n", A[i]);
   }
}

int main()
{
int A[N];
for(int i = 0; i < N; ++i)
   {
      scanf("%d", &A[i]);
   }
print_array(A);
return 0;
}
