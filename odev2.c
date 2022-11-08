#include <stdio.h>
int main() {
 
 int sayi,a,b,c,d,e ;
 printf("5 basamakli bir sayi gir");
 scanf("%d",&sayi);
 e = sayi % 10;
 d = ((sayi % 100)-e)/10;
 c = ((sayi % 1000)-e-(10*d))/100;
 b = ((sayi % 10000)-e-(100*c)-(10*d))/1000;
 a = ((sayi % 100000)-e-(1000*b)-(100*c)-(10*d))/10000;
 if((a*10000+b*1000+c*100+d*10+e)==(e*10000+d*1000+c*100+b*10+a))
  {
 printf("girdiginiz sayi palindrom bir sayidir ");
  }
 else 
  {
 printf("girdiginiz sayi palindrom sayi degildir ");
  }
  

 return 0 ;
 }