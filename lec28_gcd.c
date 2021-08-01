# include <stdio.h>

int gcd(int a, int b)
{
   if (0 == b) return a;
   return gcd(b, a%b);
}

double fast_power(double m, int n)
{
if (0 == n) return 1;
if (n % 2 == 1)
   return m*fast_power(m, n-1);
else
   return fast_power(m*m, n/2);
}

int fib(int n)
{
if (n<=1) return n;
return fib(n-1)+fib(n-2);
}
int main()
{
int a, b;
scanf("%d%d", &a, &b);
printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
printf("power of %d in %d = %f\n", a, b, fast_power(a,b));
printf("fibonacci of %d is %d\n", a, fib(a));
return 0;
}
