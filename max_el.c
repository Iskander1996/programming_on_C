#include <stdio.h>
#define N 10
void print_array(int A[])
{
for(int i = 0; i < N; ++i)
{
   printf("A[%d] = %d\n",i, A[i]);
}
}

void max_element(int A[])
{
int max = A[0];
for(int i = 0; i < N -1; ++i)
  {
    if(A[i + 1] > max) max = A[i + 1];
  }
printf("maximum element of array is %d\n", max);

}

void sort_by_choice(int A[])
{
for(int i = 1; i < N - 1; ++i)
   {
    for(int k = 0; k < N; ++k)
    {
    if(A[k] < A[i])  A[k]=A[i];
    }
   }
}
int main()
{
    int A[N];
    for(int i = 0; i < N; ++i)
    {
	scanf("%d", &A[i]);
    }
max_element(A);
print_array(A);
return 0;
}
