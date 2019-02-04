#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
time_t t;
srand((unsigned) time(&t));
int longueur=15;int largeur=70;float mediane=longueur*largeur/2;int som;int ind=0;
int T[longueur][largeur];int C[100];
for (int i=0;i<100;i++)
    C[i]=0;
for (int i=0;i<longueur;i++)
    {
    for (int j=0;j<largeur;j++)
        {
        T[i][j]=rand()%100;
        C[T[i][j]]+=1;
        }
    }
som=C[0];
while (som<mediane)
{
    som+=C[ind];
    ind+=1;
}
for(int i=0;i<longueur;i++)
{
    for(int j=0;j<largeur;j++)
    {
        if (T[i][j]<ind)
        {
            T[i][j]=0;
            printf(" ");
        }
        else
        {
            T[i][j]=1;
            printf("@");
        }
    }
    printf("\n");
}


return 0;
}
