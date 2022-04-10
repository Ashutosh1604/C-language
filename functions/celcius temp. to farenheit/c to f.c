#include <stdio.h>
float fahrenheit(float celsius);
int main()
{
    float celsius;
    float fahren;
 printf("enter the temp. in celsius\n");
 scanf("%f",&celsius);
    fahren=fahrenheit(celsius);
 printf("the temp in farenheit is %f\n",fahren);

}
float fahrenheit(float celsius){

float f;
f=(celsius*1.8)+32;
return f;
}
