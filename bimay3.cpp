#include <stdio.h>
int main()
{
int T;
int num[50];

int i, j;
long int bin;
int rem;
int n;
  
scanf("%d", &T);
  
for(i = 0; i < T; i++)
{
scanf("%d", &num[i]);
} 
for(i = 0; i < T; i++)
{
bin = 0;
n = num[i];
j = 1;
while (n != 0)
{
rem = n % 2;
n = n / 2;
bin = bin + rem * j;
j = j * 10;
}
  
printf("Case #%d: %ld\n", i+1, bin);
}  


  return 0;
}

