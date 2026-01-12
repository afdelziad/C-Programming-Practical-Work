#include<stdio.h>
#include<math.h>

void main ()
{  
/*   int Pp , Pl , Np , Nl ; 
    float C , P ;

    printf("Entrer le nombre de poules et de lapins : \n ");
    scanf("%d%d",&Np,&Nl);

    C = Nl + Np ;

    printf("le capital est : %.2f \n",C);
    
    printf("entrer le prix de poulevet de lapin : \n ");
    scanf("%d%d",&Pp,&Pl);

    P = Pp * Np + Nl * Np ;

    printf("le prix total est : %.2f \n ",P);
*//*
    float h , l , r , V ;
    const float pi = 3.14 ;

    printf("entrer les valeurs de h , l et r : \n ");
    scanf("%f%f%f",&h,&l,&r);

    V = ( ((3*sqrt(3))/8) * pow(l,2) - pi * pow(r,2) ) * h ;

    printf("le volume d un ecrou est : %.2f \n ",V);
*//*
    float TTC , PHT ;
    const float TVA = 0.2 ;

    printf("entrer le prix du produit sans taxes comprises : \n ");
    scanf("%f",&PHT);

    TTC = PHT + PHT * TVA ;

    printf("le prix du produit avec taxes comprises est : %.2f \n ",TTC);
*//*
    float Ne1 , Ne2 , Ne3 , Ne4 , No1 , No2 ;
    float Me , Mo , Mg ;

    printf("entrer les notes d ecrtit : \n ");
    scanf("%f%f%f%f",&Ne1,&Ne2,&Ne3,&Ne4);

    Me = ( Ne1 + Ne2 + Ne3 + Ne4 ) / 4 ; 

    printf("la moyenne de l ecrit est : %.2f \n ",Me);

    printf("entrer les valeurs d orals : \n ");
    scanf("%f%f",&No1,&No2);
    
    Mo = ( No1 + No2 ) / 2 ;

    printf("la moyenne de l orale est : %.2f \n ",Mo);

    Mg = ( Mo + Me ) / 2 ; 
    
    printf("la moyenne generale est : %.2f \n ",Mg);   
*//*    
    float Qa , Pun , Pu , P ;

    printf("entrer la quantite d article achete :\n ");
    scanf("%f",&Qa);
    printf("entrer la produits unitaire :\n ");
    scanf("%f",&Pu);

    P = Qa * Pun ;

    if ( Qa > 100 )
    {
        Pu = 0.6 * Pun ;
        P = Pu * Qa ;
    }
    else
    {
        P = Qa * Pun ;  
    }
    printf("le prix a payer est : %.2 \n",P);
*//*
    int a , b ;
    float x ;

    printf("entrer la valeur de a et b :\n");
    scanf("%d%d",&a,&b);

    if ( a = 0 )
    {
        if ( b = 0 )
        {
            printf("l ensemble R :\n");
        }
        else
        {
            printf("imposiible car b est different de 0 \n");
        }
    }
    else
    {
        if ( b = 0 )
        {
            printf("la solution est x = 0 \n");
        }
        else
        {
            printf("la solution est : %.2f \n",(float)-b/a);
        }
    }
*//*
    int A ;

    printf("entrer la valeur de A : \n");
    scanf("%d",&A);

    if ( A % 2 == 0)
    {
        printf("le nombre est pair \n");
    }
    else 
    {
        printf("le nombre est impair \n");
    }
*//*
    int a , b ;

    printf("entrer la valeur de a et b \n");
    scanf("%d%d",&a,&b);

    if ( a == b )
    {
        printf("ils sont egaux \n");
    }
    else if ( a > b )
    {
        printf("a est superieur que b \n");
    }
    else
    {
        printf("a est inferieur que b \n");
    }
*//*
    int a , b , c ;

    printf("entrer la valeur de a , b et c \n");
    scanf("%d%d%d",&a,&b,&c);

    if ( a > b && a > c )
    {
        if ( b > c )
        {
            printf("%d , %d et %d \n",a,b,c);
        }
        else
        {
            printf("%d , %d et %d \n",a,c,b);
        }
    }
    if ( b > a && b > c )
    {
        if ( a > c )
        {
            printf("%d , %d et %d \n",b,a,c);
        }
        else
        {
            printf("%d , %d et %d \n",b,c,a);
        }
    }
    if ( c > a && c > b )
    {
        if ( a > b )
        {
            printf("%d , %d et %d \n",c,a,b);
        }
        else 
        {
            printf("%d , %d et %d \n",c,b,a);
        }
    }
*//*    
    float x ;

    printf("entrer la valeur de x \n");
    scanf("%f",&x);

    if ( x == (int)x )
    {
        printf("il est un nombre entier \n");
    }
    else 
    {
        printf("il n'est pas un entier \n");
    }
*//*
    char lettre ;

    printf("entrer la lettre : \n");
    scanf("%c",&lettre);

    if ( lettre >= 65 && lettre <= 90 )
    {
        printf("la lettre est majiscule \n");
    }
    else if ( lettre >= 97 && lettre <= 122 )
    {
        printf("la lettre est minuscule \n");
    }
*//*    
    char lettre ;

    printf("entrer la lettre : \n");
    scanf("%c",&lettre);

    if ( lettre >= 65 && lettre <= 90 )
    {   
        lettre = lettre + 32 ;
        printf("la lettre en minuscule est %c \n",lettre);
    }
    else if ( lettre >= 97 && lettre <= 122 )
    {
        lettre = lettre - 32 ;
        printf("la lettre en majiscule est %c \n",lettre);
    }
*//*
    int A , B , C , temp ;
    
    printf("entrer les valeurs de A , B et C : \n ");
    scanf("%d%d%d",&A,&B,&C);
    printf("avant le tri : \n %d A \n %d B \n %d B \n",A,B,C);

    if ( A < B )
    {
        temp = A ;
        A = B ;
        B = temp ;
    }
    if ( A < C )
    {
        temp = A ;
        A = C ;
        C = temp ;
    }
    if ( B < C )
    {
        temp = B ;
        B = C ;
        C = temp ;
    }
    printf("apres le tri : \n %d A \n %d B \n %d C \n ",A ,B,C);
*//*
    int A , B ;

    printf("entrer la valeur de A et B : \n");
    scanf("%d%d",&A,&B);

    if ( A > 0 && B > 0 || A < 0 && B < 0 )
    {
        printf("le signe de leur produit est positif \n");
    }
    else if ( A < 0 || B < 0 )
    {
        printf("le signe de leur porduit est negatif \n");
    }
    else 
    {
        printf("le signe de leur porduit est nulle \n");
    }
*//*
    int a , b , c , D ;
    float x1 , x2 , x ;

    printf("entrez les valeurs de a,b et c \n");
    scanf("%d%d%d",&a,&b,&c);

    D=pow(b,2)-4*a*c ;

    if (D>0)
        {
        printf("l equation admet deux solution x1 = %.2f et x2 = %.2f \n",x1=(float)((-b-sqrt(D))/(2*a)),x2=(float)((-b+sqrt(D))/(2*a)));
        } 
    else if (D==0)
        {
        printf("l equation admet une seule solution est : %.2f \n",x=(float)-b/(2*a));
        }
    else
        {
        printf("l ensemble vide \n");
        }
*//*
    float Q , Pu , T , F ;
    
    printf("entrer la quantite Q de bouteilles :\n");
    scanf("%f",&Q);
    printf("entrer le prix unitaire Pu :\n");
    scanf("%f",&Pu);

    T = Q * Pu ;
    if ( Q < 1000 )
    {
        F = 0 ;
        T = Q * Pu + F ;
    }
    else
    {
        F = 0.1 * T ;
        T = Q * Pu + F ;
    }
    printf("la facture est egale a %.2f et le total somme a payer est %.2f \n",F,Pu);
*//*
    float D , P1 , P , age , j , R ;

    printf("entrer la distance parcouru D :\n");
    scanf("%f",&D);
    printf("entrer l'age : \n");
    scanf("%f",&age);
    printf("entrer le jour du voyage j :\n");
    scanf("%f",&j);

    if ( age < 18 )
    {
    if ( D < 100 )
    {
        P1 = D * 0.35 ;
    }
    else if ( D > 100 && D < 300 )
    {
        P1 = D * 0.35 + D * 0.35 * 0.1 ;
    }
    else if ( D > 300 )
    {
        P1 = D * 0.35 + D * 0.35 * 0.15 ;
    }
    }
    else if ( age < 18 )
    {
        P1 = D * 0.35 - ( D * 0.35 ) * 0.35 ;
    }

    if ( j == 6 || j == 7 )
    {
        R = ( D * 0.35 ) * 0.05 ;
    }
    else 
    {
        R = 0 ;
    }
    
    P = P1 - R ;
    printf("le prix du billet normale est %.2f \n",P1);
    printf("la reduction est %.2f \n",R);
    printf("le prix du billet finale est %.2f \n",P);
*//*
    int h1 , h2 , m1 , m2 , dh , dm ;

    printf("entrer l'heure de depart :\n");
    scanf("%d%d",&h1,&m1);
    
    if ( h1 < 0 || h1 > 23 || m1 < 0 || m1 > 59 )
    {
        printf("heure invalide \n");
    }
    printf("entrer l'heure de depart :\n");
    scanf("%d%d",&h2,&m2);
    
    if ( h2 < 0 || h2 > 23 || m2 < 0 || m2 > 59 )
    {
        printf("heure invalide \n");
    }
    
    if ( h2 < h1 || h2 == h1 && m2 < m1 )
    {
        h2 += 24 ;
    }
    if ( m2 < m1 )
    {
        m2 += 60 ; 
        h2 -= 1 ;    
    }
     dh = h2 - h1 ;
     dm = m2 - m1 ;

    printf("le temps ecoule est : %d heures %d minutes \n",dh,dm);
*//*
    int annee ;

    printf("entrer l'annee \n");
    scanf("%d",&annee);

    if ( annee % 4 == 0 && annee % 100 != 0 || annee % 400 == 0 )
    {
        printf("l'annee est bissextile \n ");
    }
    else 
    {
        printf("l'annee n'est pas bissextile \n ");
    }
*//*
    int a , b , res ;
    char o ;

    printf("entrer la valeur de a et b : \n");
    scanf("%d%d",&a,&b);
    printf("entrer l'operateur \n");
    scanf("%c",&o);

    switch (o)
    {
    case '+':
        res = a + b ;
        break;
    case '-':
        res = a - b ;
        break;
    case '*':
        res = a * b ;
        break;
    case '/':
        res = a / b ;
        break;
    default:
        printf("operateur introuvable \n");
        break;
    }
    printf("le resultat est %d \n",res);
*//*
    int C ;

    printf("entrer votre classement : \n");
    scanf("%d",&C);

    if ( C == 1 )
    {
        printf("vous disposez d'une prime de 42M \n");
    }
    else if ( C == 2 )
    {
        printf("vous disposez d'une prime de 30M \n");
    }
    else if ( C == 3 )
    {
        printf("vous disposez d'une prime de 27M \n");
    }
    else if ( C == 4 )
    {
        printf("vous disposez d'une prime de 25M \n");
    }
    else if ( C >= 5 && C <= 8 )
    {
        printf("vous disposez d'une prime de 17M \n");
    }
    else if ( C >= 9 && C <= 16 )
    {
        printf("vous disposez d'une prime de 13M \n");
    }
    else if ( C >= 17 && C <= 32 )
    {
        printf("vous disposez d'une prime de 9M \n");
    }
    else
    {
        printf("aucune prime \n");
    }
*//*
    int A , n , R ;

    printf("entrer la valeur de A : \n");
    scanf("%d",&A);
    printf("entrer la valeur de N : \n");
    scanf("%d",&n);

    R = pow( A , N );

    printf("le resultat est : %d \n",R);
*//*
    int N = 1 , S = 0 ;

    while ( N != 0 )
    {
    printf("entrer la valeur de N :\n");
    scanf("%d",&N);
     
    S = S + N ;
    }
    
    printf("le resultat est : %f \n",S);
*//*
    int n , i , S ;

    S = 0 ;
    for ( n = 1 ; n <= 100 ; n++ )
    {
        for ( i = 1 ; i <= n / 2 ; i++ )
        {
            if ( n % i == 0 )
            {
                 S = S + i ;
            }
        }
        if ( S == n )
        {
            printf("%d est parfait \n",n);
        }
    }
*/  
    int n , i ;
    float R ;

    do
    {
        printf("entrer la valeur de n : \n");
        scanf("%d",&n);
    } while ( n < 0 );

    for (  R = 0 , i = 1 ; i <= n ; i++ )
    {
        R += 1 / (float)i ;
    }
    printf("le resultat est : %.2f \n",R);    
    
}
