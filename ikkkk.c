#include<stdio.h>
#include<math.h>
int main ()
{

int l1,l2,l3;

printf("Podaj 1 liczbe ");
scanf("%d",&l1);
printf("Podaj 2 liczbe ");
scanf("%d",&l2);
printf("Twoja suma wynosi %d \n",l1+l2);

int k1,k2,k3;
printf("Podaj 1 liczbe ");
scanf("%d",&k1);
printf("Podaj 2 liczbe ");
scanf("%d",&k2);
printf("Twoja roznica wynosi %d \n",k1-k2);






int a,x,b;
printf("podaj liczbe ktora chcesz spotegowac \n");
scanf("%d",&a);
printf("podaj potege ");
scanf("%d ",&b);
getch();
int tab[b];
tab[0]=1;
for(x=1;x!=b+1;x++)
{
    tab[x]=tab[x-1]*a;
}



printf("wynik %d",tab[b]);





getchar();
return 0;
}
