#include<stdio.h>
#define Cmax 100
#define Lmax 100
#define Nmax 100

int main (void)
{
/*
    int T[10] , i ;

    for ( i = 0 ; i < 10 ; i++)
    {
        printf("T[%d] = \n",i);
        scanf("%d",&T[i]);
    }
    for ( i = 0 ; i < 10 ; i++)
    {
        printf("T[%d] = %d \t",i,T[i]);
    }
*//*
    int T[Nmax] , i , N ;
    
    do 
    {
    printf("entrer le nombre de taille : \n");
    scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );

    for ( i = 1 ; i <= N ; i++)
    {
        printf("element %d : \n",i);
        scanf("%d",&T[i]);
    }
    for ( i = 1 ; i <= N ; i++)
    {
        printf("%d,",T[i]);
    }
*//*
    int T[Nmax] , i , N ;
    
    do
    {
        printf("entrer le nombre de taille :\n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );

    for ( i = 1 ; i <= N ; i++)
    {
        printf("element %d : \n",i);
        scanf("%d",&T[i]);
    }
    for ( i = 1 ; i <= N ; i++)
    {
        if ( T[i] < 0 )
        {
            printf("%d ,",T[i]);
        }
    }
*//*
    int T[Nmax] , i , N , S = 0 ;
    
    do
    {
        printf("entrer le nombre de taille :\n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );

    for ( i = 1 ; i <= N ; i++)
    {
        printf("element %d : \n",i);
        scanf("%d",&T[i]);
        S += T[i] ;
    }
    printf("la somme des elements est : %d \n",S);
*//*
    int T[Nmax] , i , N , max = 0 , min ;
    
    do
    {
        printf("entrer le nombre de taille :\n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );

    for ( i = 0 ; i < N ; i++)
    {
        printf("element %d : \n",i);
        scanf("%d",&T[i]);
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        T[0] = min ;

        if ( T[i] > max )
        {
            max = T[i] ;
        }
        if ( T[i] < min )
        {
            min = T[i] ;
        }
    }
    printf("maximum : %d \n",max);
    printf("minimum : %d \n",min);
*//*
    int T[Nmax] , i , max1 = 0 , max2 = 0 , N ;

    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("element %d : \n",i+1);
        scanf("%d",&T[i]);
        if ( max1 <= T[i] )
        {
            max2 = max1 ;
            max1 = T[i] ;
        }

        if ( max2 < T[i] && max1 > T[i] )
        {
            max2 = T[i] ;
        }
    }
    printf("le premier grand element : %d \n",max1);
    printf("le deuxieme nombre est : %d \n",max2);
*//*
    int T[Nmax] , T1[Nmax] ,T2[Nmax] , i=0 , N , j=0 , k=0 ;

    do
    {
        printf("entrer le nombre de taille : \n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i+1);
        scanf("%d",&T[i]);

        if ( T[i] % 2 == 0 )
        {
            T1[j] = T[i] ;
            j++ ;
        }
        else if ( T[i] % 2 != 0 )
        {
            T2[k] = T[i] ;
            k++ ;
        }
    }
    
    printf("\n les nombres pairs sont : \n");
    for ( i = 0 ; i < j ; i++)
    {
        printf("%d \t",T1[i]);
    }
    
    printf("\n les nombres impaires sont : \n");
    for ( i = 0 ; i < k ; i++)
    {
        printf("%d \t",T2[i]);
    }
*//*
    int T[Nmax] , i , N , cpt = 1 ;
    
    do
    {
        printf("entrer le nombre de taille :\n");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );

    for ( i = 0 ; i < N ; i++)
    {
        printf("T[%d] = \n",i+1);
        scanf("%d",&T[i]);
    }

    for ( i = 0 ; i < N ; i++)
    {
        for (int j = 0 ; j < i ; j++ )
        {
            if ( T[i] == T[j] )
            {
                cpt ++ ; 
                break ;
            }
        }
        printf("%d est repete %d fois \n",T[i],cpt);
    }
*//*
    int T[Nmax] , i , j , N , temp ;

    do
    {
        printf("entrer le nombre de taille :");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf(" T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    
    for ( i = 0 ; i < N-1 ; i++ )
    {
        for ( j = i + 1 ; j < N ; j++ )
        {
            if ( T[i] > T[j] )
            {
                temp = T[i] ; 
                T[i] = T[j] ;
                T[j] = temp ;
            }
        }
    }
    
    for ( i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
*//*
    int T[Nmax] , i , N , val , pos ,temp , j ;     
    
    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("element %d : ",i+1);
        scanf("%d",&T[i]);
    }

    for ( i = 0 ; i < N-1 ; i++ )
    {
        for ( j = i + 1 ; j < N ; j++ )
        {
            if ( T[i] > T[j] )
            {
                temp = T[i] ; 
                T[i] = T[j] ;
                T[j] = temp ;
            }
        }
    }

    printf("le tableau apres le triage : \n");

    for ( i = 0 ; i < N ; i++ )
    {
        printf("%d \t",T[i]);
    }
    
    printf("\n entrer la valeur que vous voulez inserer : ");
    scanf("%d",&val);

    pos = 0;

    while ( pos < N && T[pos] < val )
    {
        pos++;
    }

    for ( i = N ; i > pos ; i-- )
    {
        T[i] = T[i-1];
    }

    T[pos] = val;
    N++;

    printf("Tableau apres insertion : \n");

    for ( i = 0 ; i < N ; i++)
    {
        printf("%d \t",T[i]);
    }
*//*
    int A[Nmax] , B[Nmax] , i , N , T[Nmax] , X  , temp , j ;

    do
    {
        printf("entrer le nombre de taille de A : ");
        scanf("%d",&N);
    } while ( N <= 0 || N >= Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("A[%d] =",i+1);
        scanf("%d",&A[i]);
    }    

    do
    {
        printf("entrer le nombre de taille de B : ");
        scanf("%d",&X);
    } while ( X <= 0 || X >= Nmax );

    for ( i = 0 ; i < X ; i++)
    {
        printf("B[%d] =",i+1);
        scanf("%d",&B[i]);
    }  

    for ( i = 0 ; i < N ; i++)
    {
        T[i] = A[i] ;
    }
    
    for ( i = 0 ; i < X ; i++)
    {
        T[N+i] = B[i] ;
    }
    
    for ( i = 0 ; i < X+N-1 ; i++ )
    {
        for ( j = i + 1 ; j < X+N ; j++ )
        {
            if ( T[i] > T[j] )
            {
                temp = T[i] ; 
                T[i] = T[j] ;
                T[j] = temp ;
            }
        }
    }

    printf("le tableau fusionne : \n");

    for ( i = 0 ; i < X+N ; i++)
    {
        printf("%d \t",T[i]);
    }
    printf("\n");
*//*
    int T[Lmax][Cmax] , A[Lmax][Cmax] , i , j , m , n ;  

    do
    {
        printf("ligne/colonne : ");
        scanf("%d%d",&m,&n);
    } while ( m <= 0 || m >= Lmax || n <= 0 || n >= Cmax );

    for ( i = 0 ; i < m ; i++)
    {
        for ( j = 0 ; j < n ; j++ )
        {
            printf("A[%d][%d] = \n",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    
    for ( i = 0 ; i < m ; i++)
    {
        for ( j = 0 ; j < n ; j++ )
        {
            T[i][j] = A[i][j] ;
        }
    }

    for ( i = 0 ; i < m ; i++)
    {
        for ( j = 0 ; j < n ; j++ )
        {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }
*//*
    int T[Nmax][Nmax] = {0} , i , j , Dim ;

    do
    {
        printf("Dimension : ");
        scanf("%d",&Dim);
    } while ( Dim <= 0 || Dim >= Nmax );
    

    for ( i = 0 ; i < Dim ; i++)
    {
        for ( j = 0 ; j < Dim ; j++ )
        {
            if ( i == j )
            {
                T[i][j] = 1 ;
            }
        }
    }

    for ( i = 0 ; i < Dim ; i++)
    {
        for ( j = 0 ; j < Dim ; j++ )
        {
            printf("%d \t",T[i][j]);
        }
        printf("\n");
    }
*//*
    int A[Nmax][Nmax] , i , j , N , temp = 0 ;

    do
    {
        printf("entrer le nombre de taille : ");
        scanf("%d",&N);
    } while ( N <= 1 || N > Nmax );
    
    for ( i = 0 ; i < N ; i++)
    {
        for ( j = 0 ; j < N ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\n");
    printf("matrice initial : ");
    printf("\n");

    for ( i = 0 ; i < N ; i++)
    {
        for ( j = 0 ; j < N ; j++)
        {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }
    
    for (j = 0 ; j < N-1; j+=2)
    {
        for (i = 0 ; i < N ; i++)
        {
            temp = A[i][j];
            A[i][j] = A[i][j+1];
            A[i][j+1] = temp;
        }
    }
    
    printf("Apres alternance : ");
    printf("\n");

    for ( i = 0 ; i < N ; i++)
    {
        for ( j = 0 ; j < N ; j++)
        {
            printf("%d \t",A[i][j]);
        }
        printf("\n");
    }
*//*
    int T[Lmax][Cmax] , i , j , S = 0 , L , C ;
    
    do
    {
        printf("ligne / colonne : ");
        scanf("%d%d",&L,&C);
    } while ( L <= 0 || L >= Lmax || C <= 0 || C >= Cmax );
    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++ )
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);

            S += T[i][j] ;
        }
        
    }

    printf("le teableau est : \n");

    for ( i = 0 ; i < L ; i++ )
    {
        for ( j = 0 ; j < C ; j++ )
        {
            printf("%d \t",T[i][j]);
        }
        
        printf("\n");
    }
    
    printf("la somme des valeurs est : %d \n",S);

*//*
    int T[Lmax][Nmax] , L , C , i , j , Sc ;
    
    do
    {
        printf("ligne / colonne : ");
        scanf("%d%d",&L,&C);
    } while ( L <= 0 || L >= Lmax || C <= 0 || C >= Cmax );

    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++ )
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
        
    }

    do
    {
        printf("entre un scalaire : ");
        scanf("%d",&Sc);
    } while ( Sc <= 0 || Sc > Nmax );
    
    printf("le tableau apres le scalaire de la matrice : \n");

    for ( i = 0 ; i < L ; i++ )
    {
        for ( j = 0 ; j < C ; j++ )
        {
            printf("%d \t",T[i][j]);
        }
        
        printf("\n");
    }

    printf("le tableau apres le scalaire de la matrice : \n");

    for ( i = 0 ; i < L ; i++ )
    {
        for ( j = 0 ; j < C ; j++ )
        {
            printf("%d \t",Sc*T[i][j]);
        }
        
        printf("\n");
    }
*//*
    int T1[Lmax][Cmax] , T2[Lmax][Cmax] , T3[Lmax][Cmax] , C1 , L1 , C2 , L2 , i , j , k , l ;

    do
    {
        printf("ligne / colonne de la premiere matrice : ");
        scanf("%d%d",&L1,&C1);
    } while ( L1 <= 0 || L1 >= Lmax || C1 <= 0 || C1 >= Cmax );

    do
    {
        printf("colonne de la deuxieme matrice : ");
        scanf("%d%d",&C1,&C2);
    } while ( C2 <= 0 || C2 >= Cmax );

    for ( i = 0 ; i < L1 ; i++)
    {
        for ( j = 0 ; j < C1 ; j++ )
        {
            printf("T1[%d][%d] = ",i,j);
            scanf("%d",&T1[i][j]);
        }
        
    }    

    for ( i = 0 ; i < C1 ; i++ )
    {
        for ( j = 0 ; j < C2 ; j++ )
        {
            printf("T2[%d][%d] = ",i,j);
            scanf("%d",&T2[i][j]);
        }
        
    }

    printf("le produit vectoriel des deux matrices : \n");

    do
    {
        for( i = 0; i < L1 ; i++)
        {
            for( j = 0 ; j < C2 ; j++)
            {
                T3[i][j] = 0;

                for( k = 0 ; k < C1 ; k++)
                {
                    T3[i][j] += T1[i][k] * T2[k][j];
                }
            }
        }
    } while ( C1 != C1 );
    
    for ( i = 0 ; i < L1 ; i++)
    {
        for ( j = 0 ; j < C2 ; j++)
        {
            printf("%d \t",T3[i][j]);
        }
        
        printf("\n");
    }

*//*
    int T[Nmax][Nmax] , i , j , dim , S = 0 ;
    
    do
    {
        printf("Dimension : ");
        scanf("%d",&dim);
    } while ( dim < 0 || dim > Nmax );
    
    for ( i = 0 ; i < dim ; i++)
    {
        for ( j = 0 ; j < dim ; j++)
        {
            printf("T[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
        
    }

    for ( i = 0 ; i < dim ; i++)
    {
        for ( j = 0 ; j < dim ; j++)
        {
            if ( i == j )
            {
                S += T[i][j] ;
            }
        }

    }

    for ( i = 0 ; i < dim ; i++)
    {
        for ( j = 0 ; j < dim ; j++)
        {
            printf("%d \t",T[i][j]);
        }
        
        printf("\n");
    }
    
    printf("la somme de la diagonal est : %d \n",S);

*//*
    int T[Lmax][Cmax] , i , j , L , C ;
    
    do
    {
        printf("ligne / colonne de la premiere matrice : ");
        scanf("%d%d",&L,&C);
    } while ( L <= 0 || L >= Lmax || C <= 0 || C >= Cmax );

    
    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++ )
        {
            printf("T1[%d][%d] = ",i,j);
            scanf("%d",&T[i][j]);
        }
        
    }  
    
    printf("matrice est : \n");

    for ( i = 0 ; i < L ; i++)
    {
        for ( j = 0 ; j < C ; j++)
        {
            printf("%d \t",T[i][j]);
        }
        
        printf("\n");
    }
    
    printf("la matrice transpose est : \n");

    for ( i = 0 ; i < C ; i++)
    {
        for ( j = 0 ; j < L ; j++ )
        {
            printf("%d \t",T[j][i]);
        }
        
        printf("\n");
    }
*//*
    int A = 1 , B = 2 , C = 3 ;
    int *P1 , * P2 ;

    P1 = &A ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P2 = &C ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 = (*P2)++ ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P1 = P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P2 = &B ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 -= * P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    ++*P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P1 *= *P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    A = ++*P2 * *P1 ;
    printf("\n %d \t %d \t %d ",A,B,C);
    P1 = &A ;
    printf("\n %d \t %d \t %d ",A,B,C);
    *P2 = *P1 /= * P2 ;
    printf("\n %d \t %d \t %d ",A,B,C);
*//*
    int T[]={12,23,34,45,56,67,78,89,90} , *P ;

    P = T ;

    printf("%d \n",*P+2);
    printf("%d \n",*(P+2));
    printf("%d \n",&P+1);
    printf("%d \n",&T[4]-3);
    printf("%d \n",T+3);
    printf("%d \n",&T[7]-P);
    printf("%d \n",P+(*P-10));
    printf("%d \n",*(P+*(P+8)-T[7]));        
*//*
    int T[]={5,10,15,20,25} , j , *q ;
    
    for ( q = &T[0] ; q <= &T[4] ; q++)
    {
        printf("%d \t",*q);
    }
    
    printf("\n");

    for ( q = T , j = 0 ; q+j <= T+4 ; q++ , j++)
    {
        printf("%d \t",*(q+j));
    }
    
    printf("\n");

    for ( q = T+4 ; q >= T ; q--)
    {
        printf("%d \t",*q);
    }
    
    printf("\n");

    for ( q = T+4 ; q >= T ; q--)
    {
        printf("%d \t",T[q-T]);
    }
*/
    int A[Nmax] , B[Nmax] , M , N , i ;       

    do
    {
        printf("M : ");
        scanf("%d",&M);
        printf("N : ");
        scanf("%d",&N);
    } while ( M < 0 || M >= Nmax || N < 0 || N >= Nmax );
    
    for ( i = 0 ; i < M ; i++)
    {
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);
    }
    
    for ( i = 0 ; i < N ; i++)
    {
        printf("B[%d] = ",i);
        scanf("%d",&B[i]);
    }

    for ( i = 0 ; i < M+N ; i++)
    {
        B[N+i] = A[i]; 
    }
    
    for ( i = 0 ; i < M+N ; i++)
    {
        printf("%d \t",B[i]);
    }
    
}
