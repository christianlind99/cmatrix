#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    printf("Welcome to the 2by2 matrix multiplier\n");
    int m1 [2][2];
    int m2 [2][2];
    int m3 [2][2];
    printf("Weird element >>> %d <<< \n", m3[0][1]); /*This element becomes a 1 instead of 0*/

    printf("Matrix 1\n");

    for (int i=0;i < 2;i++){
        for (int j=0; j < 2 ;j++){
            printf("Matrix element (%d, %d)\n",i+1,j+1);
            scanf( "%d", &m1[i][j]);
        }
    }

    printf("\nMatrix 2\n");

    for (int i=0;i < 2;i++){
        for (int j=0; j < 2 ;j++){
            printf("Matrix element (%d, %d)\n",i+1,j+1);
            scanf( "%d", &m2[i][j]);
        }
    }

    for (int i = 0; i<2; i++){
      for (int j = 0; j<2 ;j++){
          for (int k = 0; k < 2;k++){
              m3[i][j] = m3[i][j]  + m1[i][k]*m2[k][j];

          }
      }
    }

    printf("Matrix result %d %d %d %d",m3[0][0],m3[0][1],m3[1][0],m3[1][1]);


    return 0;
}

