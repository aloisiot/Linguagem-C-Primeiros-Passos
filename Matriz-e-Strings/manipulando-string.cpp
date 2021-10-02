#include <stdio.h>
#include <string.h>

/*
Exemplos de funções para lidar com string:
    - strcpy(char x, char y) -> Copia o valor de x para y;
    
    - strcat(str1, str2, num) -> Concatena as strings. 
        O agumento "num" define quantos caracters da segunda string serâo usados (opcionam);
    
    - strlen(str) -> Retorna o comprimento de uma string;
*/

// Crie uma função que declare duas strings com capacidade para 20
// caracteres. Leia pela entrada padrão a primeira string. Em seguida, copie o texto da
// primeira string para a segunda. Imprima no final o conteúdo das duas strings.
void twoStrings(){
    char string1[20];
    char string2[20];
    
    printf("\nInsira uma palavra: ");
    scanf("%s", string1);

    strcpy(string2, string1);
    printf("\nstring1 = %s", string1);
    printf("\nstring2 = %s", string2);
    printf("\n");

}
// Strings com capacidade para 20 caracteres


// Lê 5 palavras e armazena em um vetor
// logo apos uma sexta palavra sera lida e, se ela esta contida no vetor seu indice será impresso junto de uma menságem.
void stringColection(){
    char stringColection[5][20];
    bool equals = false;
    int index;

    printf("Insira cinco palavras:\n");

    for(int i = 0; i < 5; i++){
        scanf("%s",stringColection[i]);
    }

    printf("\nInsira uma sexta palavra: \n");
    char compare[20];
    
    scanf("%s", compare);
    for(int i = 0; i < 5; i++){
        if(strcmp(compare, stringColection[i]) == 0){
            equals = true;
            index = i;
            break;
        }
    }

    if(equals){
        printf("\nA palavra '%s' está presente no indice %d da matriz.\n\n", stringColection[index], index);
    } else {
        printf("\nA sexta palavra não é igual a nenhuma das cinco anteriores!\n\n");
    }

}

// Semelhante à strlen()
// Calcula o comprimento de uma string.
int length(char string[100]){
    int index = 0;

    while(string[index] != '\0'){
        index++;
    }
    return index;
}

// Compara se duas strings são iguais.
// retura 1 caso sejam iguais e 0 caso contrário.
int conparator(char string1[], char string2[]){
    int result = 0;
    if(string1 == string2){
        result = 1;
    }
    return result;

}

int main(){

    // Uma string será lida.
    // Logo apos seu valor é atribuido a uma outra variavel.
    // Então o valor de ambas é printado no terminal.
    twoStrings();

    printf("\n\n");

    printf("Seis palavras seram lidas. As cinco primeiras serão armazenadas em um vetor\n");
    printf("Caso a sexta palavra seja igual à alguma das 5 primeiras seu indice será mostrado");
    stringColection();

    // Calculando o comprimento de uma string recebida como entrada.
    printf("Insira uma palavra para que seu comprimento seja calculado: ");
    char palavra[100];
    scanf("%s", palavra);
    printf("\nO comprimento da palavra que você inseriu é de %d caracteres.\n\n",length(palavra));

    return 0;
}