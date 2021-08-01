# include <stdio.h>
# define N 10

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
int tmp;
int A[N] = {0, 10, 20, 30, 40,
            50, 60, 70, 80, 90};
int B[N] = {0};

for(int i = 0; i < N; ++i)
   B[i] = A[N - i - 1];

printf("Array A before operations = \n");
print_array(A);
printf("Array B= \n");
print_array(B);

for(int i = 0; i < N; ++i)
{
   tmp = A[i];
   A[i] = A[N-1-i];
   A[N-1-i] = tmp;
}

printf("Array A after reverse operation = \n");
print_array(A);
for(int i = 0; i < N/2; ++i)
{
   A[i] = A[i+1];
 
}
printf("Array A after shift operation = \n");
print_array(A);

return 0;
}
