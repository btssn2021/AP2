#include <stdio.h>

int main() {

/*************************Exercice  n°10******************************************************/
    int math=0,physique=0,chimie=0;
    enum {SEUILMATH=65,SEUILPHYSIQUE=55,SEUILCHIMIE=50,TOTAL=190,TOTALMP=140};
    printf("Veuillez saisir le total de math");
    scanf("%d",&math);
    printf("Veuillez saisir le total de physique");
    scanf("%d",&physique);
    printf("Veuillez saisir le total de chimie");
    scanf("%d",&chimie);
    if((math>=SEUILMATH&&physique>=SEUILPHYSIQUE&&chimie>=SEUILCHIMIE)&&(math+physique+chimie>=TOTAL||math+physique>=TOTALMP))
    {
        printf("Le candidat est éligible");

    }
    else
    {
        printf("Le candidat n'est pas éligible");

    }



    return 0;
}
