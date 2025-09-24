#include "cal.h"

void somme(int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
        
    
}
void produit (int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX], int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // if the number of rows in the first matrix is different from the number of columns in the second matrix then the multiplication is not possible
    // that is if m != p then the product cannot be carried out; n=rows of A, m=columns of A, p=columns of B
}
void recherche(int A[MAX],int key, int m)
{
    for(int i=0 ;i<m;i++)
    {
        if(A[i] == key)
        {
            printf("Element was found in the list at position %d \n",i+1);
            return;
        }
        
    }
    printf("Element not found in the array \n");
    
}
int produitSomme(int a ,int b)
{
   int result=0;
   for (int i = 0; i < b; i++)
   {
        for (int j = 0; j < a; j++)
        {
            result+=1;
        }
   }
   // to multply a by b by only adding 1 at each iteration we use two loops with the first loop iterating for b-times and the inner loop iterating a-times
   // and at each iteration we add one to our result variable
    return result;
}
bool esttrie(int A[MAX],int m)
{
    int i,j;
    for (i = 0; i < m-1; i++)
    {
        if(A[i] > A[i+1])
        {
            return false; 
        } 
        
    }
    return true;
    
}
float median(int A[MAX], int n)
{
    
    float med;
    if(!esttrie(A,n))
    {
        printf("The list is not sorted \n");
        return 0.00;
    }
    else
    {
        if (n%2 == 0)
        {
            med = ((A[(n/2)-1]+A[n/2])/2.0);
        }else
        {
            med= A[n/2];
            
        }
        
    }
    return med;
}
void inverse(int A[MAX], int n)
{
    int B[n];
    int k;
    for (int i = 0; i < n; i++)
    {
        k=n-i-1;
        B[i]=A[k];
    }
    for (int i = 0; i < n; i++)
    {
        A[i]=B[i]; //copying back B in A to not loss the value after revsering the list
    }
    
    
}
void produitvectoriel(int A[3], int B[3] ,int C[3])
{
    C[0]= A[1]*B[2] - A[2]*B[1];
    C[1]= A[2]*B[0] - A[0]*B[2];
    C[2]= A[0]*B[1] - A[1]*B[0];
}
void produitMatVec(int A[MAX][MAX], int B[MAX], int C[MAX], int m, int n) 
{
    for (int i = 0; i < m; i++) 
    {
        C[i] = 0; 
        for (int j = 0; j < n; j++) 
        {
            C[i] += A[i][j] * B[j];
        }
    }
}
void lirematrice(int A[MAX][MAX],int m,int n)
{
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&A[i][j]);
        }

    }

}
void ecrirematrice(int A[MAX][MAX],int m,int n)
{
    
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d]\t",A[i][j]);
        }
        printf("\n");
    }
}
void lirevecteur(int A[MAX],int a)
{
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&A[i]);
    }
}
void ecrirevecteur(int A[MAX],int a)
{
    for (int i = 0; i < a; i++)
    {
        printf("[%d]\t",A[i]);
    }
    printf("\n");
}
