/*  Fernanda Sanches
    Myrna Shuman
*/


#include <stdio.h>


int main ()
{
    float x,y,z;
    int linha, coluna, i, j, k, iteracoes;
    float v[3][1], matriz [3][4];


    /*escrevendo a matriz*/
    printf ("Escreva cada numero da matriz, linha por linha:\n");
    for(linha = 0 ; linha < 3 ; linha++)
    {
        for(coluna = 0 ; coluna < 4 ; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha+1, coluna+1);
            scanf("%f", &matriz[linha][coluna]);

        }
    }
    printf ("digite tres numeros para v0:\n ");
    for (i=0; i<3; i++)
    {
        scanf ("%f", &v[i][0]);
    }
    printf ("quantas iteracoes?\n ");
    scanf ("%d", &iteracoes);

    /*  if ((matriz [0][0] > (matriz[0][1]+matriz[0][2]))&& (matriz[1][1]> (matriz[1][0]+matriz[1][2])) && (matriz[2][2] > (matriz [2][0]+ matriz [2][1])))
      {*/
    for (k=0; k<iteracoes; k++)
    {
        x= ((matriz[0][1]*v[1][0] + matriz[0][2]*v[2][0] + matriz[0][3]*-1) / matriz [0][0])*-1;
        v[0][0] = x;
        y= ((v[0][0]+ matriz[1][2]*v[2][0] + matriz[1][3]*-1)/ matriz[1][1])*-1;
        v[1][0]= y;
        z= ((matriz[2][3]*-1+ matriz[2][0]*v[0][0]+ matriz[2][1]*v[1][0]) / matriz[2][2])*-1;
        v[2][0] = z;
        printf ("iteracao %d:\n\n", k+1);
        for (i=0; i<3; i++)
        {
            printf ("%f\n\n", v[i][0]);

        }

    }







    return 0;
}
