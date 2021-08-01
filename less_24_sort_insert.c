# include <stdio.h>
#include <stdbool.h>
#define ALLOCATE_SIZE 1000

int input_array(int A[], int max_size)
{
int top = 0;
while(true)
  {
     int x;
     scanf("%d", &x);
     if(x == 0 || top == max_size) break;
     A[top] = x;
     ++top;
  }
  return top;
}

void print_array(int A[], int N)
{
for(int i = 0; i < N; ++i)
  {
     printf(" %d ", A[i]);
  }
  printf("\n");
}

void insert_sort(int A[], int N)
{
for(int i = 0; i < N; ++i)
   {
      int k = i;
      while(k > 0 && A[k-1] > A[k])
      {
        int tmp = A[k-1];
        A[k-1] = A[k];
        A[k] = tmp;
        k -= 1;
      }
   }
}

int main()
{
printf("Enter numbers:");
int A[ALLOCATE_SIZE];
int N;

N = input_array(A, ALLOCATE_SIZE);
print_array(A, N);
insert_sort(A, N);
print_array(A, N);
return 0;
}
