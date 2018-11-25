/* 
 * File:   main.cpp
 * Author: Thais e Vitor
 *
 * Created on 25 de Novembro de 2018, 17:03
 */

#include <cstdlib>
#include "Lista.h"
#include "tools.h"

using namespace std;

int main() {
    //char nome_arquivo1[] = "lista1.txt";
    //char nome_arquivo2[] = "lista2.txt";
    char nome_arquivo3[] = "lista3.txt";
//    int* teste = (int* )malloc (100 * sizeof (int));
    Tools t = Tools();
    
    //Lista l1 = Lista();
    //Lista l2 = Lista();
    Lista l3 = Lista();
//	printf("%d %d\n", t.getLista(nome_arquivo, l)[0], t.getLista(nome_arquivo, l)[1]);
    //l1= t.getLista(nome_arquivo1, l1);
    //l2= t.getLista(nome_arquivo2, l2);
    l3= t.getLista(nome_arquivo3, l3);
	
	//l.print();
        //printf("l1: %d\n", l1.getSize());
        //printf("l2: %d\n", l2.getSize());
        printf("l3: %d\n", l3.getSize());

    return 0;
}

