#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Ingrese el tamaño del arreglo: ");
    scanf("%i", &n);

    int *arr = NULL;
    arr=(int*)malloc(n*sizeof(int));
    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Ingrese %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Ingrese el elemento %i de su arreglo\n", i+1);
        scanf("%i", (arr + i));
    
    }

    printf("El arreglo es: [");
    for (int i = 0; i < n; i++) {
        printf("%d,", *(arr+i));
    }
    printf("]\n");

    
    return 0;
}
