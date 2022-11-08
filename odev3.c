#include <stdio.h>
int main() {
// ales puani = a,yabanci dil puanı=b,mezuniyet ortalamasi=c //
int a,b;
float c,puan;
printf("ales puaninizi giriniz");
scanf("%d",&a);
printf("yabanci dil puaninizi giriniz");
scanf("%d",&b);
printf("mezuniyet ortalamanizi giriniz");
scanf("%2f",&c);
puan = a/2+b/4+c/4;
if(puan > 60)
{
printf("siralamaya girebilirsiniz");
}
else
{
printf("siramalaya giremezsiniz");    
}



 return 0 ;
}