#include<stdio.h>

/* ( exercice 1 )

int N , N1 , N2 , A , B ;
void pair_1_N(int N)
{
    printf("Les nombres pairs qui existent entre 1 et %d sont : \n",N);

    for ( int i = 2 ; i <= N ; i++)
    {
        if ( i % 2 == 0 )
        {
            printf("%d \t",i);
        }
    }   
    printf("\n");
}

int premier(int N)
{
    if ( N < 2 )
    {
        return 0 ;
    }
    
    for ( int i = 2 ; i <= N/2 ; i++)
    {
        if ( N % i == 0)
        {
            return 0 ;
        }
        
    }
    
    return 1 ;
}

int Nbr_premier(int N)
{
    int cpt = 0 ;

    for ( int i = 0 ; i <= N ; i++)
    {
        if ( premier(i) == 1 )
        {
            cpt++ ; 
        }
    }

    return cpt ;
}

int multiple(int N1,int N2)
{
    if ( N2 != 0 && N1 % N2 == 0 )
    {
        return 1 ;
    }
    else
    {
        return -1 ;
    }

}

void multiple_A_B(int A,int B)
{
    if ( B == 0 )
    {
        return ;
    }
    
    printf("Les multiples de %d qui se trouvent entre 1 et %d sont : \n",B,A);

    for ( int i = 1 ; i <= A ; i++)
    {
        if ( i % B == 0 )
        {
            printf("%d \t",i);
        }    
    }
    
    printf("\n");
}

void main()
{
    printf("Entrer la valeur de N : ");
    scanf("%d",&N);

    printf("Entrer la valeur de N1 : ");
    scanf("%d",&N1);

    printf("Entrer la valeur de N2 : ");
    scanf("%d",&N2);

    printf("Entrer la valeur de A : ");
    scanf("%d",&A);

    printf("Entrer la valeur de B : ");
    scanf("%d",&B);

    pair_1_N(N);

    if ( premier(N) == 1 )
    {
        printf("Le nombre %d est un nombre premier \n",N);
    }
    else
    {
        printf("Le nombre %d n'est pas un nombre premier \n",N);
    }

    printf("Le nombre des valeurs premiers entre 1 et %d est : %d \n",N,Nbr_premier(N));
    
    if ( multiple(N1,N2) == 1 )
    {
        printf("Le nombre %d est un multiple de %d \n",N1,N2);
    }
    else
    {
        printf("Le nombre %d n'est pas un multiple de %d \n",N1,N2);
    }

    multiple_A_B(A,B);
    
}

*/
/* ( exercice 2 )

int a , b ;
void permuter_valeur(int a,int b)
{
    int temp ;

    temp = a ;
    a = b ;
    b = temp ;

    printf("la nouvel valeur de a est %d et la nouvel de b est %d \n",a,b);
}

void permuter_adresse(int *a,int *b)
{
    int temp ;

    temp = *a ;
    *a = *b ;
    *b = temp ;

    printf("La nouvel valeur de a est %d et la nouvel de b est %d \n",*a,*b);
}

void main()
{
    printf("Entrer la valeur de a : ");
    scanf("%d",&a);

    printf("Entrer la valeur de b : ");
    scanf("%d",&b);

    permuter_valeur(a,b);

    permuter_adresse(&a,&b);

    printf("Dans main : a = %d et b = %d \n",a,b);
}

*/
/* ( exercice 3 )

float Max , Min , X , M , *P1 , *P2 , temp ,Sp = 0 ;
int N , pos , occ , k ; 

void Saisir_Notes(float *T,int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Note %d : ",i+1);
        scanf("%f",T+i);
    }    
}

void Afficher_Notes(float *T,int N)
{
    for ( int i = 0 ; i < N ; i++)
    {
        printf("Note %d : %.2f \n",i+1,*(T+i));
    }
    
}

int Chercher_Note(float *T,int N,float X)
{
    for ( int i = 0 ; i < N ; i++)
    {
        if ( T[i] == X )
        {
            return i ;
        }
    }

    return -1 ;
}

float Max_Notes(float *T,int N)
{
    float Max = *T ;

    for ( P1 = T ; P1 < T+N ; P1++)
    {
        if ( *P1 > Max )
        {
            Max = *P1 ;
        }
    }
    
    return Max ;
}

float Min_Notes(float *T,int N)
{
    float Min = *T ;

    for ( P1 = T ; P1 < T+N ; P1++)
    {
        if ( *P1 < Min )
        {
            Min = *P1 ;
        }
    }
    
    return Min ;
}

float Moyenne_Notes(float T[],int N)
{
    float S = 0 ;

    for ( P1= T ; P1 < T+N ; P1++)
    {
        S += *P1 ;
    }
    
    return M = S/(float)N ;

}

void Trier_Notes(float *T,int N)
{
    for ( P1 = T ; P1 < T + N - 1 ; P1++)
    {
        for ( P2 = P1 + 1 ; P2 < T + N ; P2++)
        {
            if ( *P2 < *P1 )
            {
                temp = *P1 ;
                *P1 = *P2 ;
                *P2 = temp ;
            }   
        }
    }

    for ( P1 = T ; P1 < T+N ; P1++)
    {
        printf(" %.2f \t",*P1);
    }
    
    printf("\n");
}

void Inverse_Note(float T[],int N)
{
    float Temp ;

    P1 = T ;
    P2 = T + N - 1 ;

    while ( P1 < P2 )
    {
        Temp = *P1 ;
        *P1 = *P2 ;
        *P2 = Temp ;

        P1++ ;
        P2-- ;
    }
    
    for ( P1 = T ; P1 < T+N ; P1++)
    {
        printf("%.2f \t",*P1);
    }
    
    printf("\n");
}

int Occurence_Note(float T[],int N ,int X)
{
    occ = 0 ;
    float *P1 ;

    for ( P1 = T ; P1 < T+N ; P1++)
    {
        if ( *P1 == X )
        {
            occ ++ ;
        }
    }
    
    return occ ;
}

float Supprimer_Occurence(float T[],int N,float X)
{
    P2 = T ;

    for ( P1 = T ; P1 < T+N ; P1++)
    {
        if ( *P1 != X )
        {
            *P2 = *P1 ;
            P2++ ;
        }
    }

    return P2-T ;
} 

float Afficher_Pairs(float *T,int N,int k)
{
    int cpt = 0 ;

    for ( P1 = T ; P1 < T+N && cpt < k ; P1++)
    {
        if ( (int)*P1 % 2 == 0 )
        {
            printf("%.2f \t",*P1);
            Sp += *P1 ;
            cpt ++ ;
        } 
    }
    
    return Sp ;
}
void main()
{
    printf("Entrer le nombre de notes : ");
    scanf("%d",&N);

    float T[N];

    Saisir_Notes(T, N);

    printf("\n--- Liste des notes ---\n");
    Afficher_Notes(T, N);

    printf("\nEntrer la note a chercher et a supprimer : ");
    scanf("%f",&X);

    pos = Chercher_Note(T,N,X);

    if ( pos != -1 )
    {
        printf("Note trouvee a la position %d.\n", pos+1);
    }
    else
    {
        printf("Note introuvable.\n");
    }

    printf("\nLa note maximale est : %.2f\n",Max_Notes(T,N));
    printf("La note minimale est : %.2f\n",Min_Notes(T,N));
    printf("LA moyenne des notes est : %.2f\n",Moyenne_Notes(T,N));

    printf("\n--- Notes triees par ordre croissant ---\n");
    Trier_Notes(T, N);

    printf("\n--- Tableau inverse ---\n");

    Inverse_Note(T,N);

    printf("Entrer la valeur de k : \n");
    scanf("%d",&k);

    printf("Les %d premiers notes pairs sont : ",k);

    Sp = Afficher_Pairs(T,N,k);

    printf("\n La somme des Notes pairs est : %.2f \n",Sp);

    printf("Le nombre d'occurence de la note %.2f est : %d \n",X,Occurence_Note(T,N,X));

    N = Supprimer_Occurence(T,N,X);

    printf("Le tableau apres la supretion de tous les occurences de %.2f est : \n",X);

    Afficher_Notes(T,N);
}

*/

int N , A , B ;

void Diviseurs(int N)
{
    for ( int i = 1 ; i <= N / 2 ; i++)
    {
        if ( N % i == 0 )
        {
            printf("%d   ",i);
        }
    }

    printf("\n");
}

int Somme_Diviseurs(int N)
{
    int S = 0 ;

    for ( int i = 1 ; i <= N/2 ; i++)
    {
        if ( N % i == 0 )
        {
            S += i ;
        }
    }
    
    return S ;
}

int Nombre_Parfait(int N)
{
    if ( N == Somme_Diviseurs(N) )
    {
        return 1 ;
    }
    else
    {
        return -1 ;
    }
}

int Amis(int A,int B)
{
    if ( A == Somme_Diviseurs(B) && B == Somme_Diviseurs(A) )
    {
        return 1 ;
    }
    else
    {
        return -1 ;
    }
}

void main()
{
    printf("Entrer la valeur de N : ");
    scanf("%d",&N);

    printf("Entrer la valeur de A : ");
    scanf("%d",&A);

    printf("Entrer la valeur de B : ");
    scanf("%d",&B);

    printf("Les diviseurs de %d sont : ",N);

    Diviseurs(N);

    printf("La somme des diviseurs est %d \n",Somme_Diviseurs(N));

    if ( Nombre_Parfait(N) == 1 )
    {
        printf("Le nombre %d est un parfais \n",N);
    }
    else
    {
        printf("Le nombre %d n'est pas un parfais \n",N);
    }
    
    if ( Amis(A,B) == 1 )
    {
        printf("Les nombres %d et %d sont deux nombres amis \n",A,B);
    }
    else
    {
        printf("Les nombres %d et %d ne sont pas amis \n",A,B);
    }
    
}