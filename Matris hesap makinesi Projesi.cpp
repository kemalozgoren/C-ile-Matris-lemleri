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
printf("********* Matris Ýþlemleri *********\n");
printf("********* Kemal Özgören *********\n");
printf("\t1-Toplama Ýþlemi\n");
printf("\t2-Çýkarma Ýþlemi\n");
printf("\t3-Çarpma Ýþlemi\n");
printf("\t4-Sabit Çarpma Ýþlemi\n");
printf("\t5-Transpoze Ýþlemi\n");
printf("\t6-Determinant Ýþlemi\n");
printf("\t7-Tersi Ýþlemi\n");
printf("\t8-Deðiþ Tokuþ Ýþlemi\n");
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
case 7: reverse();
break;
case 8: swap();
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
 
    printf("Toplama iþlemi için \n");
    printf("Satýr sayýsý girin: ", m);
    scanf("%d",&m);
    printf("Sütun sayýsý girin: ", n);
       scanf("%d",&n);
     
   /*printf("Toplama iþlemi için Satýrlarý ve sütunlarý girin\n");
   scanf("%d%d", &m, &n);*/
   printf("Ýlk matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
      {
         printf("Bir deðer a[%d][%d] girin :: ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("Ýkinci matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
        {
         printf("Bir deðer a[%d][%d] girin :: ",c,d);
                 scanf("%d", &second[c][d]);
                 }
   
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
 
    printf("Çýkarma iþlemi için \n");
    printf("Satýr sayýsý girin: ", m);
    scanf("%d",&m);
    printf("Sütun sayýsý girin: ", n);
       scanf("%d",&n);
   printf("Ýlk matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       {
         printf("Bir deðer a[%d][%d] girin : ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("Ýkinci matrisin elemanlarýný girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         {
         printf("Bir deðer a[%d][%d] girin : ",c,d);
                 scanf("%d", &second[c][d]);
                 }
 
   printf("Çýkartma iþlemin sonucu:\n");
 
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
 
   printf("Çarma iþlemi için ilk matrisin \n");
    printf("Satýr sayýsý girin: ", m);
    scanf("%d",&m);
    printf("Sütun sayýsý girin: ", n);
       scanf("%d",&n);
  printf("Ýlk matrisin elemanlarýný girin\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      {
         printf("Bir deðer a[%d][%d] girin :: ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("Ýkinci matris için \n");
    printf("Satýr sayýsý girin: ", p);
    scanf("%d",&p);
    printf("Sütun sayýsý girin: ", q);
       scanf("%d",&q);
 
  if (n != p)
    printf("Bu çarpma gerçekleþemez.\n");
  else
  {
    printf("Ýkinci matrisin elemanlarýný girin\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        {
         printf("Bir deðer a[%d][%d] girin :: ",c,d);
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
 
    printf("\nMatrisle çarpmak için herhangi bir sayý girin :: ");
    scanf("%d", &num);

    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            A[row][col] = num * A[row][col];
        }
    }
 
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

    printf("\nMatris elemanlarýný girin:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Bir deðer [%d][%d] girin: ", i, j);
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
    int c,d,m,n;
    long det;
    printf("Determinant iþlemi için \n");
    printf("Satýr sayýsý girin: ", m);
    scanf("%d",&m);
    printf("Sütun sayýsý girin: ", n);
       scanf("%d",&n);
    printf("Matrisin elemanlarýný girin: \n");
    for(c=0; c<m; c++)
    {
        for(d=0; d<n; d++)
        {
            printf("Bir deðer [%d][%d] girin: ", c, d);
            scanf("%d", &A[c][d]);
			
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
//swap
void swap (){
system("cls");
static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
 		printf("Deðiþ Tokuþ iþlemi için \n");
        printf("Satýr sayýsýný girin: ");
        scanf("%d", &m);
        printf("\nSütun sayýsýný girin: ");
        scanf("%d",&n);
        printf("\nMatris elemanlarýný girin: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nBir deðer [%d][%d] girin: ",i,j);
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
    
    
    printf("\nDeðiþtirilecek satýr numarasýný girin : ");
    scanf("%d", &a);
    printf("\nDeðiþ tokuþ edilecek diðer satýr numarasýný girin: ");
    scanf("%d",&b);
    
    for (i = 0; i < m; ++i)
    {
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("\nDeðiþtirilecek sütun numarasýný girin : ");
    scanf("%d", &p);
    printf("\nDeðiþ tokuþ edilecek diðer satýr numarasýný girin : ");
    scanf("%d",&q);
    
    for (i = 0; i < n; ++i)
    {
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
     }
    printf("\nÝki satýrý deðiþtirdikten sonraki matris:  \n");
    for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    
    printf("\nÝki sütunu deðiþtirdikten sonraki matris: \n");
    
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
        printf ("***** YAPAMADIM! ÝSTENÝLENÝ ANLAMADIM*****\n");
        printf ("***** HERHANGÝ BÝR TUÞA BASARAK MENÜYE DÖNÜN!*****\n");
    
system("PAUSE");
menu();
}
///reverse
int main(){
menu();
}

