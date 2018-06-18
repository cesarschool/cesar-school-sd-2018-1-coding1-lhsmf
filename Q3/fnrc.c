#include <stdio.h>
/**
* Escreva uma função que encontra a primeira letra que não se repete em uma
* sentença.
* Função: char firstNonRepeatingChar(char[] sentence, int length)
* Input:
* - sentence: array não nulo de letras, formado apenas por ASCII em minúsculo.
* - length: tamanho do array - número de caracteres
* Output: A primeira letra que não se repete, ou -1, caso todas se repitam.
*/
char firstNonRepeatingChar(char sentence[], int length)
{
    printf("\nfirstNonRepeatingChar::START: %s, %d\n", sentence, length);

    int letra = 0;
    int c = 0;
    int rep = 0;
    int fim = 0;
    fim = length - 1;

    for (letra = 0; letra <= fim; letra++)
    {
        rep = 0;
        for (c = 0; c <= fim; c++)
        {
            if (sentence[letra] == ' ') {
                rep = 1;
                break;
            }
            else if (letra != c && sentence[letra] == sentence[c]) {
                rep = 1;
                break;
            }
        }

        if (rep == 0) {
            printf("%c", sentence[letra]);
            printf("\nfirstNonRepeatingChar::END\n");
            return sentence[letra];
        }
    }
    printf("-1");
    printf("\nfirstNonRepeatingChar::END\n");
    return -1;
}

int main()
{
    printf("\n### CESAR School :: Sistemas Digitais :: Coding1 :: firstNonRepeatingChar ###\n");

    firstNonRepeatingChar("ovo", 3);
    firstNonRepeatingChar("cesar school", 12);
    firstNonRepeatingChar("sistemas digitais", 17);
    firstNonRepeatingChar("arara", 5);
    firstNonRepeatingChar("ovo ovelha", 10);

    return 0;
}
