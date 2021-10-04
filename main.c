#include <stdio.h>

int main() {
/***********************************************Ex1****************************************/
    int n1=0,n2=0;
    printf("Veuillez saisir deux nombres entiers\n");
    scanf("%d %d",&n1,&n2);
    if(n1==n2)
        printf("n1 et n2 sont égaux\n");
    else
        printf("n1 et n2 sont différents\n");
/***********************************************Ex2*****************************************/
    int n3=0;
    printf("Veuillez taper un nombre entier");
    scanf("%d",&n3);
    if(n3%2==0)
    {
        printf("le nombre est pair\n");
    }
    else
    {
        printf("le nombre est impair\n");
    }
/***********************************Ex3**************************************/
    int n4=0;
    printf("Veuillez taper un nombre entier");
    scanf("%d",&n4);
    if(n4>0)
    {
        printf("le nombre est positif\n");
    }
    else
    if(n4<0)
    {
        printf("le nombre est négatif\n");
    }
    /************************Exercice n°4***************************************/
    int annee=0;
    printf("Veuillez saisir une année");
    scanf("%4d",&annee);
    if(annee%4==0)
    {
        printf("%d est une année bisextile\n",annee);
    } else
    {
        printf("%d n'est pas une année bisextile\n",annee);
    }
    /************************Exercice n°5******************************************/
    return 0;
}
