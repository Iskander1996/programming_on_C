#include <stdio.h>
#define N 5

void print_array(int A[])
{
for(int i = 0; i < N; ++i){
    printf("element %d = %d\n", i , A[i]);
printf("\n");
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
for(int i = 0; i < N/2; ++i)
{
int tmp = A[i];
A[i] = A[N - 1 - i];
A[N-1-i] = tmp;
}
print_array(A);
for(int i = 0; i < N; ++i)
{

}
return 0;
}
