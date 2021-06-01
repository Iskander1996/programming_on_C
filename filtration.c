# include <stdio.h>

int main()
{
int x;
printf("please write number for filtration\n");
scanf("%d", &x);
while(x)
{
int digit = x%10;
if (digit%2 == 1)
    printf("%d ", digit);
x /= 10;
}
return 0;
}


