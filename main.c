/*  This program has the purpose of summing two matrices (n x n)
 *  "N" must be greather than 1 and less than or equal to 10.
 *
 *  Autor: Alejandro Ramírez Michel
 *  Fecha: 15 de octubre de 2018
 *
 */

#include <stdio.h>

int main() {
    //declaro variables
    int first [10][10];// matrices con su máxima capacidad (10 x 10) (n x n)
    int sec [10][10];
    int result [10][10];
    int n;              //valor de "n" que proporcione el usuario
    int a;              //variable para for

    //aquí le pregunto al usuario qué valor quiere para las filas y columnas
    printf("How many rows x columns would you like? ");
    scanf("%i", &n);

    //establezco los valores permitidos
    if (n < 1 || n >= 11) {
        printf("Sorry! I can only accept numbers from 1 to 10. Try again: ");
        scanf("%i", &n);
    }

    //ahora el usuario empieza a llenar las matrices
    printf("Now, start filling up the first matrix by giving me any values you'd like: \n");
    for (int i=0; i<n; i++) {
        for (a = 0; a<n; a++) {
            scanf("%i", &first[i][a]);
        }
    }
    printf("This is the first matrix you just made: \n");
    for (int i=0; i<n; i++) {
        for (a = 0; a<n; a++) {
            printf("\t%i", first[i][a]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Now start filling up the second matrix: \n");
    for (int i=0; i<n; i++) {
        for (a = 0; a<n; a++) {
            scanf("%i", &sec[i][a]);
        }
    }
    printf("This is the second matrix you just made: \n");
    for (int i=0; i<n; i++) {
        for (a = 0; a<n; a++) {
            printf("\t%i", sec[i][a]);
        }
        printf("\n");
    }
    printf("\n");

    printf("This is the resultant matrix after summing up the 2: \n");
    for (int i=0; i<n; i++) {
        for (a = 0; a<n; a++) {
            result[i][a] = first[i][a] + sec[i][a];
            printf("\t%i", result[i][a]);
        }
        printf("\n");
    }

    return 0;
}