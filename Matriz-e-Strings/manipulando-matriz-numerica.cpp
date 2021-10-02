#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Matriz 5x10
int randNnumbers[5][10];

// Popula o vetor com números aleatórios
void populaComAleatorios(){

    srand(time(NULL));

    for( int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {          
            int n = rand() % 396 + 5;
            randNnumbers[i][j] = n;
        }
    }
}

// Retorna a soma dos valores presentes na matriz randNnumbers
int sum(){
    int result = 0;

    for( int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {          
            result +=  randNnumbers[i][j];
        }
    }

    return result;
}

// Retorna o maior valor contido na matriz
int bigger(){
    int result = randNnumbers[0][0];
    
    for( int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {          
            if(randNnumbers[i][j] > result){
                result = randNnumbers[i][j];
            }
        }
    }

    return result;
}

// Imprime todos os elementos da matriz
void printArray(){
    printf("\n\nAbaixo todos os elementos da matriz:\n\n");
    for( int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 10; j++)
        {    
            printf("%d   ", randNnumbers[i][j]);
        }
        printf("\n");
    }
}

int main(){
    printf("\n");

    // Preenchendo o array com números aleatórios.
    populaComAleatorios();

    // O maior valor contido na matriz.
    printf("O maior valor presente na matriz é: %d\n\n", bigger());

    // A soma dos valores na matriz.
    printf("A soma dos valores presentes na matriz resulta em: %d\n\n", sum());
    
    printArray();

    return 0;
    
}