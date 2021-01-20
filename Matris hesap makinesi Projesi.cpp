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
void swap();
void menu(){
int islem;
setlocale(LC_ALL, "Turkish");
system("cls");
printf("********* Matris İşlemleri *********\n");
printf("********* Kemal Özgören *********\n");
printf("\t1-Toplama İşlemi\n");
printf("\t2-Çıkarma İşlemi\n");
printf("\t3-Çarpma İşlemi\n");
printf("\t4-Sabit Çarpma İşlemi\n");
printf("\t5-Transpoze İşlemi\n");
printf("\t6-Determinant İşlemi\n");
printf("\t7-Tersi İşlemi\n");
printf("\t8-Değiş Tokuş İşlemi\n");
printf("\t0-Çıkış\n\n");
printf("İşlem Seçiniz: ");
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
case 7: reverse();
break;
case 8: swap();
break;
default: printf("Yanlış işlem seçtiniz!!!\n");
system("PAUSE");
menu();
}
}
//TOPLA
void topla(){
system("cls");
int m, n, c, d, first[10][10], second[10][10], sum[10][10];
 
    printf("Toplama işlemi için \n");
    printf("Satır sayısı girin : ", m);
    scanf("%d",&m);
    printf("Sütun sayısı girin : ", n);
       scanf("%d",&n);
     
   /*printf("Toplama işlemi için Satırları ve sütunları girin\n");
   scanf("%d%d", &m, &n);*/
   printf("İlk matrisin elemanlarını girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
      {
         printf("Bir değer [%d][%d] girin : ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("İkinci matrisin elemanlarını girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
        {
         printf("Bir değer [%d][%d] girin : ",c,d);
                 scanf("%d", &second[c][d]);
                 }
   
   printf("Girilen matrisin toplamı : \n");
   
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
///TOPLA BİTTİ

/// ÇIKAR
void cikar(){
system("cls");
int m, n, c, d, first[10][10], second[10][10], difference[10][10];
 
    printf("Çıkarma işlemi için \n");
    printf("Satır sayısı girin : ", m);
    scanf("%d",&m);
    printf("Sütun sayısı girin : ", n);
       scanf("%d",&n);
   printf("İlk matrisin elemanlarını girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       {
         printf("Bir değer [%d][%d] girin : ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("İkinci matrisin elemanlarını girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         {
         printf("Bir değer [%d][%d] girin : ",c,d);
                 scanf("%d", &second[c][d]);
                 }
                 
                 
 
   printf("Çıkartma işlemin sonucu : \n");
 
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
///ÇIKAR BİTTİ
//ÇARP
void carp(){
system("cls");
int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
 
   printf("Çarma işlemi için ilk matrisin \n");
    printf("Satır sayısı girin : ", m);
    scanf("%d",&m);
    printf("Sütun sayısı girin : ", n);
       scanf("%d",&n);
  printf("İlk matrisin elemanlarını girin\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      {
         printf("Bir değer [%d][%d] girin : ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("İkinci matris için \n");
    printf("Satır sayısı girin: ", p);
    scanf("%d",&p);
    printf("Sütun sayısı girin: ", q);
       scanf("%d",&q);
 
  if (n != p)
    printf("Bu çarpma gerçekleşemez.\n");
  else
  {
    printf("İkinci matrisin elemanlarını girin\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        {
         printf("Bir değer [%d][%d] girin : ",c,d);
                 scanf("%d", &second[c][d]);
                 }
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }
 
        multiply[c][d] = sum;
        sum = 0;
      }
    }
 
    printf("Matrislerin çarpımı : \n");
 
    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);
 
      printf("\n");
    }
}
system("PAUSE");
menu();
}
//ÇARP BİTTİ
///SABİT ÇARP
void sabmultiplication(){
system("cls");
    int A[10][10],i,j,m,n;
    int row, col, num;
 
    printf("Satır sayısını girin : ");
        scanf("%d", &m);
        printf("Sütun sayısını girin :: ");
        scanf("%d",&n);
        printf("\nMatris elemanlarını girin : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("Bir değer [%d][%d] girin : ",i,j);
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
 
    printf("\nMatrisle çarpmak için herhangi bir sayı girin : ");
    scanf("%d", &num);

    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            A[row][col] = num * A[row][col];
        }
    }
 
    printf("\nMatrisin skaler çarpımı : \n\n");
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
///SABİT ÇARP BİTTİ
///TRANSPOZE
void transpose(){
system("cls");
int a[10][10], transpose[10][10], r, c, i, j;
    printf("Transpoze işlemi için \n");
    printf("Satır sayısı girin: ", r);
    scanf("%d",&r);
    printf("Sütun sayısı girin: ", c);
       scanf("%d",&c);

    printf("\nMatris elemanlarını girin : \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Bir değer [%d][%d] girin : ", i, j);
            scanf("%d", &a[i][j]);
        }

    printf("\nGirilen matris: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            transpose[j][i] = a[i][j];
        }
    printf("\nMatrisin Transpozu : \n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < r; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == r - 1)
                printf("\n");
        }
system("PAUSE");
menu();
}
///TRANSPOZE BİTTİ
///Determinant
void determinant(){
system("cls");
int A[10][10];
    int c,d,m,n;
    long det;
    printf("Determinant işlemi için \n");
    printf("Satır sayısı girin: ", m);
    scanf("%d",&m);
    printf("Sütun sayısı girin: ", n);
       scanf("%d",&n);
    printf("Matrisin elemanlarını girin : \n");
    for(c=0; c<m; c++)
    {
        for(d=0; d<n; d++)
        {
            printf("Bir değer [%d][%d] girin : ", c, d);
            scanf("%d", &A[c][d]);
			
        }
    }

    /*
     * det(A) = ad - bc
     * a = A[0][0], b = A[0][1], c = A[1][0], d = A[1][1]
     */
    det = (A[0][0] * A[1][1]) - (A[0][1] * A[1][0]);

    printf("Matris'in Determinantı = %ld", det);
    printf("\n");
system("PAUSE");
menu();
}
///Determinant BİTTİ
//swap
void swap (){
system("cls");
static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
 		printf("Değiş Tokuş işlemi için \n");
        printf("Satır sayısını giri n: ");
        scanf("%d", &m);
        printf("\nSütun sayısını girin : ");
        scanf("%d",&n);
        printf("\nMatris elemanlarını girin : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nBir değer [%d][%d] girin : ",i,j);
                 scanf("%d", &array1[i][j]);
                 array2[i][j] = array1[i][j];
        }
    }
    
    printf("\nGirilen matris: \n\n");
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    
    
    printf("\nDeğiştirilecek satır numarasını girin : ");
    scanf("%d", &a);
    printf("\nDeğiş tokuş edilecek diğer satır numarasını girin : ");
    scanf("%d",&b);
    
    for (i = 0; i < m; ++i)
    {
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("\nDeğiştirilecek sütun numarasını girin : ");
    scanf("%d", &p);
    printf("\nDeğiş tokuş edilecek diğer satır numarasını girin : ");
    scanf("%d",&q);
    
    for (i = 0; i < n; ++i)
    {
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
     }
    printf("\nİki satırı değiştirdikten sonraki matris : \n");
    for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    
    printf("\nİki sütunu değiştirdikten sonraki matris : \n");
    
    for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array2[i][j]);
        }
        printf("\n\n");
    system("PAUSE");
menu();
}
}
///swap bitti

//reverse


void reverse (){
system("cls");
    
printf ("\n");
        printf ("***** YAPAMADIM! İSTENİLENİ ANLAMADIM*****\n");
        printf ("***** HERHANGİ BİR TUŞA BASARAK MENÜYE DÖNÜN!*****\n");
    
system("PAUSE");
menu();
}
///reverse
int main(){
menu();
}
