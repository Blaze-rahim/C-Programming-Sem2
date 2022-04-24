#include<stdio.h>

int main()
{
 float price, units, uni2;
  printf ("add your units\n");
  scanf("%f",&units); 
if (units<=200)
{
price = units * (0.5);
printf("%f",price);
}

else if ((units>200)&&(units<=400))
{
uni2 = units-200;
price = 100+(uni2*0.65);
printf("%f",price);
}

else if ((units>400)&&(units<=600))
{
uni2 = units - 400;
price = 230+(uni2*0.85);
printf("%f",price);
}

else if (units>600)
{
uni2 = units-600;
price = 390+(uni2*1);
printf("%f",price);
}return 0;
}