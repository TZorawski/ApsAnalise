/* 
 * File:   main.cpp
 * Author: Thais e Vitor
 *
 * Created on 25 de Novembro de 2018, 17:03
 */

#include <cstdlib>
#include <time.h>
#include "Lista.h"
#include "tools.h"

using namespace std;

int main() {
    // Recebe nome dos arquivos das listas
    char nome_arquivo1[] = "lista1.txt";        // Lista com 1000 elementos
    char nome_arquivo2[] = "lista2.txt";        // Lista com 10000 elementos
    char nome_arquivo3[] = "lista3.txt";        // Lista com 100000 elementos

    Tools t = Tools();                          // Intancia classe de ferramentas
    
    // Cria as listas
    Lista l1 = Lista();
    Lista l2 = Lista();
    Lista l3 = Lista();
    
    // Popula as listas
//    l1 = t.getLista(nome_arquivo1, l1);
//    l2 = t.getLista(nome_arquivo2, l2);
    l3 = t.getLista(nome_arquivo3, l3);
    
    // Imprime as listas
    //lo1.print();
    //printf("l1: %d\n", l1.getSize());
    //printf("l2: %d\n", l2.getSize());
    //printf("l3: %d\n", l3.getSize());
    
    // ORDENAÇÕES
    clock_t tempo;
    
    // BubbleSort
//    tempo = clock();
//    int instb1 = l1.bubbleSort();
//    printf("Bubble: %d - %f\n", instb1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
//    l1.print();
    
//    tempo = clock();
//    int instb2 = l2.bubbleSort();
//    printf("Bubble: %d - %f\n", instb2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instb3 = l3.bubbleSort();
//    printf("Bubble: %d - %f\n", instb3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));

    // BubbleSort Otimizado
//    tempo = clock();
//    int instb1 = l1.bubbleSortOtimizado();
//    printf("Bubble Otimizado: %d - %f\n", instb1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
//    l1.print();
    
//    tempo = clock();
//    int instb2 = l2.bubbleSortOtimizado();
//    printf("Bubble Otimizado: %d - %f\n", instb2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instb3 = l3.bubbleSortOtimizado();
//    printf("Bubble Otimizado: %d - %f\n", instb3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));

    
    // SelectionSort
//    tempo = clock();
//    int insts1 = l1.selectionSort();
//    printf("Selection: %d - %f\n", insts1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int insts2 = l2.selectionSort();
//    printf("Selection: %d - %f\n", insts2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int insts3 = l3.selectionSort();
//    printf("Selection: %d - %f\n", insts3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    // InsertionSort
//    tempo = clock();
//    int insti1 = l1.insertionSort();
//    printf("Insertion: %d - %f\n", insti1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int insti2 = l2.insertionSort();
//    printf("Insertion: %d - %f\n", insti2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int insti3 = l3.insertionSort();
//    printf("Insertion: %d - %f\n", insti3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    // QuickSort
//    tempo = clock();
//    int instq1;
//    l1.quickSort(0, l1.getSize()-1, &instq1);
//    printf("Quick: %d - %f\n", instq1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instq2;
//    l2.quickSort(0, l2.getSize()-1, &instq2);
//    printf("Quick: %d - %f\n", instq2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instq3;
//    l3.quickSort(0, l3.getSize()-1, &instq3);
//    printf("Quick: %d - %f\n", instq3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    // MergeSort
//    tempo = clock();
//    int instm1;
//    l1.mergeSort(0, l1.getSize()-1, &instm1);
//    printf("Merge: %d - %f\n", instm1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instm2;
//    l2.mergeSort(0, l2.getSize()-1, &instm2);
//    printf("Merge: %d - %f\n", instm2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instm3;
//    l3.mergeSort(0, l3.getSize()-1, &instm3);
//    printf("Merge: %d - %f\n", instm3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));

    // HeapSort
//    tempo = clock();
//    int insth1 = l1.heapSort();
//    printf("Heap: %d - %f\n", insth1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int insth2 = l2.heapSort();
//    printf("Heap: %d - %f\n", insth2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int insth3 = l3.heapSort();
//    printf("Heap: %d - %f\n", insth3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    // Busca Binária
//    tempo = clock();
//    int instbs1;
//    l1.binarySearch(2000, 0, l1.getSize()-1, &instbs1);
//    printf("Busca Binária de 2000: %d - %f\n", instbs1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int instbs2;
//    l2.binarySearch(20000, 0, l2.getSize()-1, &instbs2);
//    printf("Busca Binária de 20000: %d - %f\n", instbs2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    tempo = clock();
    int instbs3;
    l3.binarySearch(2000, 0, l3.getSize()-1, &instbs3);
    printf("Busca Binária de 200000: %d - %f\n", instbs3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    // Busca SubArray Máximo
//    tempo = clock();
//    int imax = 0, fmax = 0;
//    int instsam1 = l1.findSubListMax(&imax, &fmax);
//    printf("Busca SubArray Máximo: %d - %f\n", instsam1, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int imax = 0, fmax = 0;
//    int instsam2 = l2.findSubListMax(&imax, &fmax);
//    printf("Busca SubArray Máximo: %d - %f\n", instsam2, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
//    tempo = clock();
//    int imax = 0, fmax = 0;
//    int instsam3 = l3.findSubListMax(&imax, &fmax);
//    printf("Busca SubArray Máximo: %d - %f\n", instsam3, ((clock() - tempo) / (double)CLOCKS_PER_SEC));
    
    
    return 0;
}

//    int* teste = (int* )malloc (100 * sizeof (int));