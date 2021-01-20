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
printf("********* Matris ��lemleri *********\n");
printf("********* Kemal �zg�ren *********\n");
printf("\t1-Toplama ��lemi\n");
printf("\t2-��karma ��lemi\n");
printf("\t3-�arpma ��lemi\n");
printf("\t4-Sabit �arpma ��lemi\n");
printf("\t5-Transpoze ��lemi\n");
printf("\t6-Determinant ��lemi\n");
printf("\t7-Tersi ��lemi\n");
printf("\t8-De�i� Toku� ��lemi\n");
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
case 7: reverse();
break;
case 8: swap();
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
 
    printf("Toplama i�lemi i�in \n");
    printf("Sat�r say�s� girin: ", m);
    scanf("%d",&m);
    printf("S�tun say�s� girin: ", n);
       scanf("%d",&n);
     
   /*printf("Toplama i�lemi i�in Sat�rlar� ve s�tunlar� girin\n");
   scanf("%d%d", &m, &n);*/
   printf("�lk matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
      {
         printf("Bir de�er a[%d][%d] girin :: ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("�kinci matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
        {
         printf("Bir de�er a[%d][%d] girin :: ",c,d);
                 scanf("%d", &second[c][d]);
                 }
   
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
 
    printf("��karma i�lemi i�in \n");
    printf("Sat�r say�s� girin: ", m);
    scanf("%d",&m);
    printf("S�tun say�s� girin: ", n);
       scanf("%d",&n);
   printf("�lk matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0 ; d < n; d++)
       {
         printf("Bir de�er a[%d][%d] girin : ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("�kinci matrisin elemanlar�n� girin\n");
 
   for (c = 0; c < m; c++)
     for (d = 0; d < n; d++)
         {
         printf("Bir de�er a[%d][%d] girin : ",c,d);
                 scanf("%d", &second[c][d]);
                 }
 
   printf("��kartma i�lemin sonucu:\n");
 
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
 
   printf("�arma i�lemi i�in ilk matrisin \n");
    printf("Sat�r say�s� girin: ", m);
    scanf("%d",&m);
    printf("S�tun say�s� girin: ", n);
       scanf("%d",&n);
  printf("�lk matrisin elemanlar�n� girin\n");
 
  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      {
         printf("Bir de�er a[%d][%d] girin :: ",c,d);
                 scanf("%d", &first[c][d]);
                 }
 
   printf("�kinci matris i�in \n");
    printf("Sat�r say�s� girin: ", p);
    scanf("%d",&p);
    printf("S�tun say�s� girin: ", q);
       scanf("%d",&q);
 
  if (n != p)
    printf("Bu �arpma ger�ekle�emez.\n");
  else
  {
    printf("�kinci matrisin elemanlar�n� girin\n");
 
    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        {
         printf("Bir de�er a[%d][%d] girin :: ",c,d);
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
 
    printf("\nMatrisle �arpmak i�in herhangi bir say� girin :: ");
    scanf("%d", &num);

    for(row=0; row<m; row++)
    {
        for(col=0; col<n; col++)
        {
            A[row][col] = num * A[row][col];
        }
    }
 
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

    printf("\nMatris elemanlar�n� girin:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Bir de�er [%d][%d] girin: ", i, j);
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
///TRANSPOZE B�TT�
///Determinant
void determinant(){
system("cls");
int A[10][10];
    int c,d,m,n;
    long det;
    printf("Determinant i�lemi i�in \n");
    printf("Sat�r say�s� girin: ", m);
    scanf("%d",&m);
    printf("S�tun say�s� girin: ", n);
       scanf("%d",&n);
    printf("Matrisin elemanlar�n� girin: \n");
    for(c=0; c<m; c++)
    {
        for(d=0; d<n; d++)
        {
            printf("Bir de�er [%d][%d] girin: ", c, d);
            scanf("%d", &A[c][d]);
			
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
//swap
void swap (){
system("cls");
static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
 		printf("De�i� Toku� i�lemi i�in \n");
        printf("Sat�r say�s�n� girin: ");
        scanf("%d", &m);
        printf("\nS�tun say�s�n� girin: ");
        scanf("%d",&n);
        printf("\nMatris elemanlar�n� girin: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nBir de�er [%d][%d] girin: ",i,j);
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
    
    
    printf("\nDe�i�tirilecek sat�r numaras�n� girin : ");
    scanf("%d", &a);
    printf("\nDe�i� toku� edilecek di�er sat�r numaras�n� girin: ");
    scanf("%d",&b);
    
    for (i = 0; i < m; ++i)
    {
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("\nDe�i�tirilecek s�tun numaras�n� girin : ");
    scanf("%d", &p);
    printf("\nDe�i� toku� edilecek di�er sat�r numaras�n� girin : ");
    scanf("%d",&q);
    
    for (i = 0; i < n; ++i)
    {
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
     }
    printf("\n�ki sat�r� de�i�tirdikten sonraki matris:  \n");
    for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    
    printf("\n�ki s�tunu de�i�tirdikten sonraki matris: \n");
    
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
        printf ("***** YAPAMADIM! �STEN�LEN� ANLAMADIM*****\n");
        printf ("***** HERHANG� B�R TU�A BASARAK MEN�YE D�N�N!*****\n");
    
system("PAUSE");
menu();
}
///reverse
int main(){
menu();
}

