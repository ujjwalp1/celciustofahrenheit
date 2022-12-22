#include<stdio.h>
int main()
{
    printf("enter the temperature in f\n");
    float c,f;
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("the temp in celcius is%f\n",c);
    return 0;

}