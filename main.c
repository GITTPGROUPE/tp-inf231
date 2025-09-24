#include <stdio.h>
#include "cal.h"

int main() {
    int choice;
    int MatA[MAX][MAX],MatB[MAX][MAX],MatC[MAX],Res[MAX][MAX];
    int row,column;
    int sizeC;
    int row2,column2;

    printf("\t\t\t\t Maths calculator \n");
    printf("Available functions:\n");
    
    do{
        printf("1- Matrix addition (somme)\n");
        printf("2- Matrix multiplication (produit)\n");
        printf("3- Array search (recherche)\n");
        printf("4- Scalar multiplication (produitSomme)\n");
        printf("5- Array sorting check (esttrie)\n");
        printf("6- Array median (median)\n");
        printf("7- Array inversion (inverse)\n");
        printf("8- Vector product \n");
        printf("9- Matrix Vector multiplication (Produit matrix et vecteur)\n");
        printf("10- Exit\n");
        printf("Enter your choice : \n");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                printf("Enter the number of row and colums of the matrices to be added \n");
                scanf("%d %d",&row,&column);
                printf("Enter the values of the first matrix \n");
                lirematrice(MatA,row,column);
                printf("Enter the values of the second matrix \n");
                lirematrice(MatB,row,column);
                somme(MatA, MatB, Res, row, column);
                printf("Result of matrix addition:\n");
                ecrirematrice(Res, row, column);
                break;
            case 2:
                printf("Enter the number of row and colums of the first matrices to be multiply \n");
                scanf("%d %d",&row,&column);
                printf("Enter the number of row and colums of the seconnd matrices to be multiply \n");
                scanf("%d %d",&row2,&column2);
                if(column != row2)
                {
                    printf("Matrix multiplication is impossible rows of the first matrix are different from the columns of the second matrix \n");
                    break;
                }
                printf("Enter the values of the first matrix \n");
                lirematrice(MatA, row, column);
                printf("Enter the values of the second matrix \n");
                lirematrice(MatB, row2, column2);
                produit(MatA, MatB, Res, row, column, column2);
                printf("Result of matrix multiplication:\n");
                ecrirematrice(Res, row, column2);
                break;
            case 3:
                int key;
                printf("Enter the size of the list \n");
                scanf("%d",&sizeC);
                printf("Enter the element of the list \n");
                lirevecteur(MatC,sizeC);
                printf("Enter the element to search in the array \n");
                scanf("%d",&key);
                recherche(MatC,key,sizeC);
                break;
            case 4:
                printf("Enter the two value to multiply \n");
                int a,b,result;
                scanf("%d%d", &a,&b);
                printf("The result of the multplication is %d \n", result=produitSomme(a,b));
                break;
            case 5:
                printf("Enter the size of the list \n");
                scanf("%d",&sizeC);
                printf("Enter the element of the list \n");
                lirevecteur(MatC,sizeC);
                if(esttrie(MatC,sizeC))
                {
                    printf("The list is sorted in ascending order \n");
                }
                else{
                    printf("The list is not sorted \n");
                }
                break;
            case 6:
                printf("Enter the size of the list \n");
                scanf("%d",&sizeC);
                printf("Enter the element of the list \n");
                lirevecteur(MatC,sizeC);
                float med;
                printf("The median of the list is %.2f\n",med=median(MatC,sizeC));
                break;
            case 7:
                printf("Enter the size of the list \n");
                scanf("%d",&sizeC);
                printf("Enter the element of the list \n");
                lirevecteur(MatC,sizeC);
                printf("the list in revserse order is \n");
                inverse(MatC,sizeC);
                ecrirevecteur(MatC,sizeC);
                break;
            case 8:
                int A[MAX], B[MAX];
                printf("Enter 3 elements of vector A:\n");
                lirevecteur(A,3);
                printf("Enter 3 elements of vector B:\n");
                lirevecteur(B,3);
                produitvectoriel(A, B, MatC);
                printf("Vector product calculate is \n");
                ecrirevecteur(MatC,3);
                printf("\n");
                break;
            case 9:
                printf("Enter the number of rows and columns of the matrix:\n");
                scanf("%d %d", &row, &column);
                printf("Enter the elements of the matrix:\n");
                lirematrice(MatA, row, column);
                printf("Enter the elements of the vector (size %d):\n", column);
                lirevecteur(MatC, column);
                int prod[MAX];
                produitMatVec(MatA, MatC, prod, row, column);
                printf("Resulting vector after multiplication:\n");
                ecrirevecteur(prod, row);
                break;
            case 10:
                printf("Exiting ... \n");
                break;
            default:
                printf("Invalide choice try again \n");
                break;
        }
        

    }while(choice != 10);


    return 0;
}
