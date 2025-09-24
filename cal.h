#ifndef __CAL_H__
#define __CAL_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 10

void somme(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int n ,int m);
void produit (int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int n, int m, int p);
void recherche(int A[MAX],int key, int m);
int produitSomme(int a ,int b);
bool esttrie(int A[MAX],int m);
float median(int A[MAX], int n);
void inverse(int A[MAX], int n);
void produitvectoriel(int A[3], int B[3] ,int C[3]);
void produitMatVec(int A[MAX][MAX], int B[MAX], int C[MAX], int m, int n);
void ecrirematrice(int A[MAX][MAX],int m,int n);
void lirematrice(int A[MAX][MAX],int m,int n);
void lirevecteur(int A[MAX],int a);
void ecrirevecteur(int A[MAX],int a);

#endif
