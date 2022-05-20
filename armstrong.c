#include <stdio.h>
#include <math.h>

int main() {

int num, dig, temp, count = 0, sum= 0;
printf ("Enter a number:"); 
scanf ("%d", &num);
temp = num;
while (num!=0)
{
num= num/10;
count++;
}
num= temp;
while (num!=0)
{
dig=num % 10;
num = num/10;
sum = sum + pow (dig, count);
}
if (sum==temp)
printf ("Armstrong Number");
else
printf ("Not Armstrong No.");
return 0;
}
