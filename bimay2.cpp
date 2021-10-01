#include <stdio.h>
#include <string.h>
#include <conio.h>

char* reverseString(char *string, int leftIndex, int rightIndex);

int main()
{
   int n;
   scanf("%d",&n);
char inputArray[100];
while(n--){
gets(inputArray);
  
reverseString(inputArray, 0, strlen(inputArray) - 1);
printf(inputArray);
printf("\n");
}
getch();
return 0;
}

