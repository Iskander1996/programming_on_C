#include <stdio.h>
#include <stdlib.h>

int ** dynamic_array_alloc(size_t N, size_t M)
{
   int **A = (int **)malloc(N*sizeof(int *));
   for(int i = 0; i < N; ++i){
      A[i] = (int *)malloc(M*sizeof(int));
   }
   return A;
}
void dynamic_array_free(int **A, size_t N)
{
   for(int i = 0; i < N; ++i){
      free(A[i]);
   }
   free(A);
}

void dynamic_array_print(int **A, size_t N, size_t M)
{
   for(int i = 0; i < N; i++) {
      for(int j = 0; j < M; j++) {
         printf("%*d", 5, A[i][j]);
      }
      printf("\n");
   }
}

void dynamic_array_test(size_t N, size_t M)
{
int **A = dynamic_array_alloc(N, M)
int x = 1;
for(int i = 0; i < N; ++i) {
   for(int j = 0; j < M; ++j){
           A[i][j] = x;
           x+=1;
      }
   }
   dynamic_array_print(A, N, M);

   /*memory investigation*/
   printf("\n Pointers to lines: \n");
   for(int **p = A; p < A+3; ++p)
       printf("%10d", (long int)*p);
   printf("\n Direct memory access:\n");
   for(int *p = (int*)*A; p < (int*)*A+25; ++p)
       printf("%d\t", *p);
}

int main()
{

int matrix_height = 4;
int matrix_width = 5;

dynamic_array_test(matrix_height, matrix_width);

return 0;
}
