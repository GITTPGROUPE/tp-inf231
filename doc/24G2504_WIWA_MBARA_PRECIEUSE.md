Cette section décrit les procédures que j'ai developpé pour ce projet qui font partie intégrante du tp d'INF 231 sur la manipulation des tableaux et des matrices

1. void produit (int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int n, int m, int p)

Cette fonction est conçue pour calculer le produit matriciel de deux matrices, A et B, et stocker le résultat dans une nouvelle matrice C, elle prends egalement des paramètres n,m,p qui representent la tailles des matrices dont on veut faire le produit matriciel.

Prérequis : Pour qu'un produit matriciel soit possible, le nombre m de colonnes de la matrice A doit être égal au nombre n de lignes de la matrice B. Le code gère cette contrainte en s'appuyant sur les dimensions déclarées (colonnesA et lignesB).

Résultat : La matrice résultante C aura le même nombre de lignes que la matrice A et le même nombre de colonnes que la matrice B.



2. void inverse(int A[MAX], int n)

Cette fonction prend un tableau unidimensionnel en paramètre et inverse l'ordre de ses éléments sur place.

Fonctionnalité : L'élément qui était en première position devient le dernier, le deuxième élément devient l'avant-dernier, et ainsi de suite.

Paramètres : La fonction utilise le tableau lui-même et sa taille n pour effectuer l'opération de manière efficace.

Impact : La fonction modifie le tableau original, ce qui signifie que l'ordre initial des éléments est perdu après l'appel à cette fonction.
