#include <stdio.h>
int main () {
//yas = a,boy = b , kilo = c , vucut kitle endeksi = v //
int a,c;
float b,v;
printf("yasinizi giriniz");
scanf("%d",&a);
printf("boyunuzu metre cinsinden giriniz");
scanf("%f",&b);
printf("kilonuzu giriniz");
scanf("%d",&c);
v = c/(b*b);
if((v>=18.50)&&(v<=24.99)&&(a<=17)&&(a>=13))
{
    printf("askeri liseye girebilirsiniz");
}
else
{
    printf("askeri liseye giremezsiniz");
}















return 0 ;
}