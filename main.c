#include <stdio.h>
#include <stdlib.h>

int main() {
/***********************************************Ex1****************************************/
    int n1=0,n2=0;
    printf("Veuillez saisir deux nombres entiers\n");
    system("clear");
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
    int age=0;
    printf("Veuillez taper votre age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Félicitations! Vous êtes éligible pour voter\n");
    }
    else
    {
        printf("Désolé vous n'étes pas éligible pour voter\n");
    }
    /*********************Exercice N°6*********************************************/
    int m=0,n=0;
    printf("Veuillez saisir la valeur m\n");
    scanf("%d",&m);
    if(m>0)
    {
        n=1;
    }
    else
    if(m==0)
    {
        n=0;
    }
    else
        n=-1;
    printf("la valeur de n=%d",n);
    /****************************Exercice n°7**************************************/
    int taille=0;
    printf("Veuillez taper votre taille\n");
    scanf("%d",&taille);
    if(taille<150)
    {
        printf("Personne petite\n");
    }
    else
    if(taille>=150&&taille<175)
    {
        printf("Personne moyenne\n");
    }
    else
    if(taille>=175)
    {
        printf("Personne grande\n");
    }
    /***********************Exercice  n°8********************************************/
    int nb1=0,nb2=0,nb3=0;
    printf("Veuillez taper trois nombres entiers\n");
    scanf("%d %d %d",&nb1,&nb2,&nb3);
    printf("1er Nombre = %d, 2ème Nombre = %d, 3ème Nombre = %d ",nb1,nb2,nb3);
    if(nb1>nb2&&nb1>nb3)
    {
        printf("Le 1er nombre est le plus grand parmi les trois\n" );
    }
    else
        if(nb2>nb1&&nb2>nb3) {
            printf("Le 2eme nombre est le plus grand parmi les trois\n");
        }
        else
        if(nb3>nb1&&nb3>nb2) {
            printf("Le 3eme nombre est le plus grand parmi les trois\n");
        }
/****************************Exercice n°9*********************************************/
int x,y;
    printf("Veuillez saisir x et y");
    scanf("%d %d",&x,&y);
    if(x>0&&y>0)
    {
        printf("Le point de coordonnées (%d,%d) se trouve dans le premier quadrant",x,y);
    }
    else
    if(x<0&&y>0)
    {
        printf("Le point de coordonnées (%d,%d) se trouve dans le deuxieme quadrant",x,y);
    }
    else
    if(x<0&&y<0)
    {
        printf("Le point de coordonnées (%d,%d) se trouve dans le troisieme quadrant",x,y);
    }
    else
    if(x>0&&y<0)
    {
        printf("Le point de coordonnées (%d,%d) se trouve dans le quatrieme quadrant",x,y);
    }
/*************************Exercice n°10******************************************************/
    int math=0,physique=0,chimie=0,somme=0;
    enum {SEUILMATH=65,SEUILPHYSIQUE=55,SEUILCHIMIE=50,SOMME=190,SOMMEMP=140};
    printf("Veuillez saisir le total de math");
    scanf("%d",&math);
    printf("Veuillez saisir le total de physique");
    scanf("%d",&physique);
    printf("Veuillez saisir le total de chimie");
    scanf("%d",&chimie);
    if((math>=SEUILMATH&&physique>=SEUILPHYSIQUE&&chimie>=SEUILCHIMIE)&&(math+physique+chimie>=SOMME||math+physique>=SOMMEMP))
    {
        printf("Le candidat est éligible");

    }
    else
    {
        printf("Le candidat n'est pas éligible");

    }
 /**********************Exercice n°11************************************************************/
    int a=0,b=0,c=0;
    printf("Veuillez saisir a b et c");
    scanf("%d %d %d",&a,&b,&c);
    int delta=(b*b)-4*a*c;
    if(delta>0)
    {
        printf("2 solutions");
    }
    else
        if(delta<0)
        {
            printf("Pas de solutions");

        } else
        {
            printf("une solution");
        }

    /*********************************Exercice n°12************************************************/
    char nom[255];
    int nummatricule=0,notechimie=0,notephysique=0,noteinfo=0;
    enum {SEUIL3=30,SEUIL2=60};
    printf("Entrez le numéro de matricule de l'élève");
    scanf("%d",&nummatricule);
    printf("Entrer le nom de l'élève");
    scanf("%s",nom);
    printf("Entrez les notes de physique, chimie et application informatique");
    scanf("%d %d %d",&notephysique,&notechimie,&noteinfo);
    printf("numéro de matricule %d",nummatricule);
    printf("Nom de l'étudiant: %s",nom);
    printf("Notes en Physique :%d",notephysique);
    printf("Notes en chimie :%d",notechimie);
    printf("Notes en application informatique :%d",noteinfo);
    /********************calcul de las somme et des moyennes*******************/
    const int sommenotes=noteinfo+notephysique+notechimie;
    const float moyenne=sommenotes/(float)3;
    /*********************affichage********************************************/
    printf("Total des notes=%d",sommenotes);
    printf("Pourcentage %0.2f",moyenne);
    if(moyenne<SEUIL3)
    {
        printf("Division=Troisième");
    }
    else
        if(moyenne>=SEUIL3&&moyenne<=SEUIL2)
        {
            printf("Division=Deuxième");
        }
        else
        {
            printf("Division=Première");
        }





    return 0;
}
