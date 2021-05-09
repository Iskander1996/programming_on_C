#include <stdio.h>
#define N = 10
int main()
{
int number;
int age;
char name[10];

printf("please write your name\n");
scanf(" %s", name);
printf("Hello %s\n", name);

printf("please write number i\n");
scanf("%d", &number);
printf("Your number is %d\n", number);

printf("write your age\n");
scanf("%d", &age);
printf("Your age is %d\n", age);

return 0;
}
