#include<stdio.h>
int main(){
	int n, k, i, j;
	
	printf("Dame el tamaño de la matriz 1\n");
	scanf ("%d", &n);
	scanf ("%d", &k);
	int matriz1[n][k];
	printf("Dame los valores de la primera matriz\n");
	for (i=0;i<n;i++){
		for (j=0;j<k;j++){
			printf("\nCoordenada[%d][%d] ",i,j );
			scanf("%d", &matriz1[i][j]);
		}
	
	}

	
	printf("Dame el tamaño de la matriz 2\n");
	scanf("%d", &n);
	scanf("%d", &k);
	int matriz2[n][k];
	printf("Dame los valores de la segunda matriz\n");
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("\nCoordenada [%d][%d] ",i,j);
			scanf("%d", &matriz2[i][j]);
		}
	
	}
	
	
	printf("\nMatriz 1\n");
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz 2\n");
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("%d ", matriz2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//suma de matrices 
printf("Suma de Ambas Matrices ");
	for (i=0;i<n;i++){
		for(j=0;j<k;j++){
			matriz1[i][j]=matriz1[i][j]+matriz2[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<k;j++){
			printf("%d ", matriz1[i][j]);
		}
		printf("\n");
	}
	return(0); 
}
