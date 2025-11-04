#include <stdio.h>
Int main() {
    FILE *arquivo;

    char[256];

    arquivo = fopen("test.txt", "rt");

    if(arquivo == null) {
        printf("Não foi possível ler o arquivo.\n");
        return 1;
    }

        while (fgets(linha, sizeof(linha), arquivo) != NULL)
    {
        printf("%s", linha);
    }
    
    fclose(arquivo);


    return 0;
}