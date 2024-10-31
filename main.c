#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;
    int i;

    //Abrir o arquivo para escrita
    arquivo = fopen("numeros.txt", "w");

    //Verificar se o arquivo foi abeto
    if (arquivo == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    for (i = 1; i <= 10; i++){
        fprintf(arquivo, "%d\n", i);
    }

    // Fecha o arquivo
    fclose(arquivo);

    printf("Os numeros foram escritos no arquivo com sucesso.\n");

    return 0;

}
