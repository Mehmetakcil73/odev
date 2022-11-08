#include <stdio.h>
int main() {
 
 int sayi,a,b,c,d;
 printf("4 basamakli bir sayi gir");
 scanf("%d",&sayi);
 d = sayi % 10;
 c = ((sayi % 100)-d)/10;
 b = ((sayi % 1000)-d-(10*c))/100;
 a = ((sayi % 10000)-d-(100*b)-(10*c))/1000;
 if(((a*10+b)*(c*10+d))== ((b*10+a)*(d*10+c))){
 printf("girdiginiz sayi ters yuz sayidir ");
 }
 else {
 printf("girdiginiz sayi ters yuz sayi degildir ");
 }
 



 return 0 ;
}