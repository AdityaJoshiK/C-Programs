#include <stdio.h>


int main() {
  int A[3][2], B[2][3], C[3][3];
  int m, p, q, n, i, j, k;

//   printf("Rows (Matrix A): ");
//   scanf("%d", &m);

//   printf("Columns (Matrix A): ");
//   scanf("%d", &p);

//   printf("Rows (Matrix B): ");
//   scanf("%d", &q);

//   if(p != q) {
//   	printf("THE TWO MATRICES ARE NOT CONFORMABLE.\n");
//   	return (0);
//   }

//   printf("Columns (Matrix B): ");
//   scanf("%d", &n);

  // ELEMENTS OF MATRIX A

  for(i=0; i < 3; i++) {
    for(j=0; j < 2; j++) {
      printf("A[%d,%d]: ", i, j);
      scanf("%d", &A[i][j]);
    }
  }

  // ELEMENTS OF MATRIX B

  for(j=0; j < 2; j++) {
    for(k=0; k < 3; k++) {
      printf("B[%d,%d]: ", j, k);
      scanf("%d", &B[j][k]);
    }
  }

  // DISPLAY MATRIX A

//   printf("Matrix A\n");

//   for(i = 0; i < 3; i++) {
//     for(j = 0; j < 2; j++) {
//       printf("%d ", A[i][j]);
//     }
//     printf("\n");
//   }

//   // DISPLAY MATRIX B

//   printf("Matrix B\n");

//   for(j = 0; j < 2; j++) {
//     for(k = 0; k < 3; k++) {
//       printf("%d ", B[j][k]);
//     }
//     printf("\n");
//   }

  // MULTIPLICATION

  for(i=0; i < 3; i++) {
    for(j=0; j < 3; j++) {
      C[i][j] = 0;
      for(k=0; k < 2; k++) { // k < q WILL ALSO WORK
        C[i][j] += A[i][k]*B[k][j];
      }
    }
  }

  // DISPLAY MATRIX AB

//   printf("Product Matrix AB\n");

//   for(i = 0; i < 3; i++) {
//     for(k = 0; k < 3; k++) {        
  
//       printf("%d ", C[i][k]);
//     }
//     printf("\n");
//   }

  return 0;
}