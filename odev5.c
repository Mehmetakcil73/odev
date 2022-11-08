#include <stdio.h>
int main() {
int n,k;
float sonuc1,sonuc2;
printf("3 ile 6 arasinda bir sayi girin ");
scanf("%d",&n);
for(k=1;k<=n;k++){
 sonuc1=(k*k+1.23)/(k-0.25);
 sonuc2+=sonuc1;
}
 printf("%.2f",sonuc2);















  return 0;
}