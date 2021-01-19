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
printf("********* Matris ��lemleri *********\n");
printf("********* Kemal �zg�ren *********\n");
printf("\t1-Toplama ��lemi\n");
printf("\t2-��karma ��lemi\n");
printf("\t3-�arpma ��lemi\n");
printf("\t4-Sabit �arpma ��lemi\n");
printf("\t5-Transpoze ��lemi\n");
printf("\t6-Determinant ��lemi\n");
printf("\t7-Tersi ��lemi\n");
printf("\t0-��k��\n\n");
printf("��lem Se�iniz: ");
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
default: printf("Yanl�� i�lem se�tiniz!!!\n");
system("PAUSE");
menu();
}
}
//TOPLA
void topla(){
system("cls");
int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
   printf("Toplama i�lemi i�in Sat�rlar� ve s�tunlar� girin\n");
   scanf("%d%d", &m, &n);
   printf("�lk matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &first[c][d]);
 
   printf("�kinci matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &second[c][d]);
   
   printf("Girilen matrisin toplam�:-\n");
   
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
///TOPLA B�TT�

/// �IKAR
void cikar(){
system("cls");
int m, n, c, d, first[10][10], second[10][10], difference[10][10];
 
   printf("��karma i�lemi i�in sat�rlar� ve s�tun say�lar�n� girin\n");
   scanf("%d%d", &m, &n);
   printf("�lk matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       scanf("%d", &first[c][d]);
 
   printf("�kinci matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         scanf("%d", &second[c][d]);
 
   printf("��lemin sonucu:-\n");
 
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
///�IKAR B�TT�
//�ARP
void carp(){
system("cls");
int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
  printf("�arpma i�lemi i�in Sat�rlar� ve s�tunlar� girin:\n");
  scanf("%d%d", &m, &n);
  printf("�lk matrisin elemanlar�n� girin\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);
 
  printf("�arpma i�lemi i�in ikinci Sat�rlar� ve s�tunlar� girin:\n");
  scanf("%d%d", &p, &q);
 
  if (n != p)
    printf("Bu �arpma ger�ekle�emez.\n");
  else
  {
    printf("�kinci matrisin elemanlar�n� girin\n");
 
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
 
    printf("Matrislerin �arp�m�:\n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
}
system("PAUSE");
menu();
}
//�ARP B�TT�
///SAB�T �ARP
void sabmultiplication(){
system("cls");
    int A[10][10],i,j,m,n;
    int row, col, num;
 
    printf("Sat�r say�s�n� girin :: ");
        scanf("%d", &m);
        printf("S�tun say�s�n� girin :: ");
        scanf("%d",&n);
        printf("\nMatris elemanlar�n� girin :: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("Bir de�er a[%d][%d] girin :: ",i,j);
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
    printf("\nMatrisle �arpmak i�in herhangi bir say� girin :: ");
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
    printf("\nMatrisin skaler �arp�m� = \n\n");
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
///SAB�T �ARP B�TT�
///TRANSPOZE
void transpose(){
system("cls");
int a[10][10], transpose[10][10], r, c, i, j;
    printf("Transpoze i�lemi i�in Sat�rlar� ve s�tunlar� girin: ");
    scanf("%d %d", &r, &c);

    // Assigning elements to the matrix
    printf("\nMatris elemanlar�n� girin:\n");
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
///TRANSPOZE B�TT�
///Determinant
void determinant(){
system("cls");
int A[10][10];
    int row, col;
    long det,m;
    printf("Matris'in b�y�kl���n� girin':");
    scanf("%d",&m);
    /* Input elements in matrix A from user */
    printf("Matrisin elemanlar�n� girin: \n");
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

    printf("Matris'in Determinant� = %ld", det);
    printf("\n");
system("PAUSE");
menu();
}
///Determinant B�TT�
int main(){
menu();
}

