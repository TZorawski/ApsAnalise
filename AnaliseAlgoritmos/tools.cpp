/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include "tools.h"
#include "Lista.h"

Tools::Tools(void) {
}

//Lista Tools::getLista(char arquivo[], Lista lista) {
////    lista[0]= 1;
////    lista[1]= 2;
//    lista.insert(1);
//    lista.insert(2);
//    return lista;
//}

Lista Tools::getLista(char arquivo[], Lista lista) {
    FILE *arq;
    char Linha[1000];
    char *result;
    int i;
    char* num = (char* )malloc (6 * sizeof (char));
    //clrscr();
    
    // LENDO ARQUIVO
    arq = fopen(arquivo, "rt");                         // Abre um arquivo TEXTO para LEITURA
    if (arq == NULL)                                    // Se houve erro na abertura
    {
       printf("Problemas na abertura do arquivo\n");
       return lista;
    }
    i = 0;
    char ch;
    while( ((ch=fgetc(arq))!= EOF ) && lista.getSize() < 100000){                     // Se arquivo não chegou ao fim
        //printf("%c", ch);
        if (ch == ',') {
            lista.insert(atoi(num));                    // INSERINDO NA LISTA
            //printf("%d\n", atoi(num));
            for (int j = 0; j <= 6; j++) {              // Limpa string num
                num[j] = '\0';
            }
            i = 0;                                      // Reinicia posição i
        } else {
            num[i] = ch;                                // Concatena caracter lido na string num
            i++;                                        // incrementa posição do índice da lista
        }
    }

    fclose(arq);

    return lista;
}