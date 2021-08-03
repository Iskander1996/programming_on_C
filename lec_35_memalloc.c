#include <stdio.h>
#include <stdlib.h>

int main()
{

int N;
printf("Enter size of array to create:");
scanf("%d", &N);

int *A = (char *)malloc(N*sizeof(int));
if (NULL == A)
{
   printf("OS didn't give memeory. Exitting...\n");
   exit(1);
}
for(int i = 0; i < N; ++i)
   A[i] = i;

printf("Array successfully created!\n");
system("pause");
return 0;
}
