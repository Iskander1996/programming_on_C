#include <stdio.h>

int main(){

int i = 10;
printf("i = %d\n", i);

int *pi = &i;
int **ppi = &pi;
int ***pppi = &ppi;

*pi = 20;
printf("after one star i = %d\n", i);
**ppi = 30;
printf("after two stars i = %d\n", i);
***pppi = 40;
printf("after three stars i = %d\n", i);
return 0;

}
