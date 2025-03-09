#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, cont = 0;
    printf("Ingrese el numero de filas:\n ");
    scanf("%d", &m);
    printf("Ingrese el numero de columnas:\n ");
    scanf("%d", &n);

    int *matrix = (int *)calloc(m * n, sizeof(int));
    if (matrix == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        
    }

    printf("Matriz inicializada con ceros:\n ");
    for (int i = 0; i < m; i++) {
        printf("[");
        for (int j = 0; j < n; j++) {
            printf("\t%d ", *(matrix + cont));
            cont++;
        }
        printf("]\n ");
    }

    printf("Ingrese las coordenadas (fila, columna) y el valor para modificar (ej. 1 2 5):\n");
    int row, col, value;
    //lee los varlores solicitados
    scanf("%d %d %d", &row, &col, &value);
    matrix[(row-1) * n + (col-1)] = value;

    printf("Matriz actualizada:\n");
    cont = 0;
    for (int i = 0; i < m; i++) {
        printf("[");
        for (int j = 0; j < n; j++) {
            printf("\t%d ", *(matrix + cont));
            cont ++;
        }
        printf("]\n");
    }

    free(matrix);
    matrix = NULL;
   
    return 0;
}
