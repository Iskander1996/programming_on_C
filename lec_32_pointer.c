#include <stdio.h>

int main()
{
int i =10;
int *pi=&i;
int **ppi = &pi;
int ***pppi = &ppi;

printf("i without changes in address = %d\n", i);
*pi = 20;
printf("i after repacking address once = %d\n", i);
**ppi = 30;
printf("i after repacking address twice = %d\n", i);
***pppi = 40;
printf("i after repacking address three times = %d\n", i);

int A[10] = {1, 2 ,3 ,4, 5, 6, 7, 8, 9 , 10};
printf("%d\n", *A);

int *p = A+2;
int *q = A+7;
printf("first A+2 is  %d\n", p[0]);
printf("7th A+7-1 is %d\n", q[-1]);
if (p > q)
   printf("p > q\n");
else
   printf("p < q\n");

printf("p - q = %ld\n", p - q);
return 0;
}
