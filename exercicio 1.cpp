#include<stdio.h>




int main(){

int n1,n2,n3,n4;
float soma, media;
scanf("%i",&n1);
scanf("%i",&n2);
scanf("%i",&n3);
scanf("%i",&n4);

soma= n1 + n2 + n3 + n4;
media=soma/4;
printf("a media e %.2f\n",media);

if (media <= 5){
printf("reprovado");
}
else{
printf("aprovado");
}

return 0;

}
