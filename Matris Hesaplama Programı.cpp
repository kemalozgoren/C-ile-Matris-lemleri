#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void topla();
void cikar();
void carp();
void sabmultiplication();
void transpose();
void determinant();
void reverse();
void menu(){
int islem;
setlocale(LC_ALL, "Turkish");
system("cls");
printf("********* Matris Ýþlemleri *********\n");
printf("********* Kemal Özgören *********\n");
printf("\t1-Toplama Ýþlemi\n");
printf("\t2-Çýkarma Ýþlemi\n");
printf("\t3-Çarpma Ýþlemi\n");
printf("\t4-Sabit Çarpma Ýþlemi\n");
printf("\t5-Transpoze Ýþlemi\n");
printf("\t6-Determinant Ýþlemi\n");
printf("\t7-Tersi Ýþlemi\n");
printf("\t0-Çýkýþ\n\n");
printf("Ýþlem Seçiniz: ");
scanf("%d", &islem);
switch(islem){
case 0: exit(1);
break;
case 1: topla();
break;
case 2: cikar();
break;
case 3: carp();
break;
case 4: sabmultiplication();
break;
case 5: transpose();
break;
case 6: determinant();
break;
default: printf("Yanlýþ iþlem seçtiniz!!!\n");
system("PAUSE");
menu();
}
}
//TOPLA
void topla(){
system("cls");
int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Toplama iþlemi için Satýrlarý ve sütunlarý girin\n");
   scanf("%d%d", &m, &n);
   printf("Ýlk matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("Ýkinci matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Girilen matrisin toplamý:-\n");
   
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         sum[c][d] = first[c][d] + second[c][d];
         printf("%d\t", sum[c][d]);
      }
      printf("\n");
   }
system("PAUSE");
menu();
}
///TOPLA BÝTTÝ

/// ÇIKAR
void cikar(){
system("cls");
int m, n, c, d, first[10][10], second[10][10], difference[10][10];
 
   printf("Çýkarma iþlemi için satýrlarý ve sütun sayýlarýný girin\n");
   scanf("%d%d", &m, &n);
   printf("Ýlk matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       scanf("%d", &first[c][d]);
 
   printf("Ýkinci matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         scanf("%d", &second[c][d]);
 
   printf("Ýþlemin sonucu:-\n");
 
   for (c = 0; c < m; c++) {
     for (d = 0; d < n; d++) {
       difference[c][d] = first[c][d] - second[c][d];
       printf("%d\t",difference[c][d]);
     }
     printf("\n");
   }
system("PAUSE");
menu();
}
///ÇIKAR BÝTTÝ
//ÇARP
void carp(){
system("cls");
int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("Çarpma iþlemi için Satýrlarý ve sütunlarý girin:\n");
  scanf("%d%d", &m, &n);
  printf("Ýlk matrisin elemanlarýný girin\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("Çarpma iþlemi için ikinci Satýrlarý ve sütunlarý girin:\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("Bu çarpma gerçekleþemez.\n");
  else
  {
    printf("Ýkinci matrisin elemanlarýný girin\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Matrislerin çarpýmý:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
}
system("PAUSE");
menu();
}
//ÇARP BÝTTÝ
///SABÝT ÇARP
void sabmultiplication(){
system("cls");
    int A[10][10],i,j,m,n;
    int row, col, num;
 
    printf("Satýr sayýsýný girin :: ");
        scanf("%d", &m);
        printf("Sütun sayýsýný girin :: ");
        scanf("%d",&n);
        printf("\nMatris elemanlarýný girin :: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("Bir deðer a[%d][%d] girin :: ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }
 
    printf("\nVerilen Matris :: \n\n");
 
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }
 
    /* Reads number to perform scalar multiplication from user */
    printf("\nMatrisle çarpmak için herhangi bir sayý girin :: ");
    scanf("%d", &num);
 
    /*
     * Performs scalar multiplication of matrix
     */
    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            A[row][col] = num * A[row][col];
        }
    }
 
    /*
     * Prints the result of scalar multiplication of matrix
     */
    printf("\nMatrisin skaler çarpýmý = \n\n");
    for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }
system("PAUSE");
menu();
}
///SABÝT ÇARP BÝTTÝ
///TRANSPOZE
void transpose(){
system("cls");
int a[10][10], transpose[10][10], r, c, i, j;
    printf("Transpoze iþlemi için Satýrlarý ve sütunlarý girin: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nMatris elemanlarýný girin:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Eleman girin: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    // Displaying the matrix a[][]
    printf("\nGirilen matris: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    // Finding the transpose of matrix a
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }

    // Displaying the transpose of matrix a
    printf("\nMatrisin Transpozu:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
system("PAUSE");
menu();
}
///TRANSPOZE BÝTTÝ
///Determinant
void determinant(){
system("cls");
int A[10][10];
    int row, col;
    long det,m;
    printf("Matris'in büyüklüðünü girin':");
    scanf("%d",&m);
    /* Input elements in matrix A from user */
    printf("Matrisin elemanlarýný girin: \n");
    for(row=0; row<m; row++)
    {
        for(col=0; col<m; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    /*
     * det(A) = ad - bc
     * a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1]
     */
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("Matris'in Determinantý = %ld", det);
    printf("\n");
system("PAUSE");
menu();
}
///Determinant BÝTTÝ
int main(){
menu();
}

