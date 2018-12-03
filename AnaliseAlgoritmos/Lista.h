#ifndef LISTA_H
#define LISTA_H

# include <iostream>
# define iMaxListSize 100000

typedef int T;


class Lista
{
    public:
        Lista(void);
        virtual ~Lista();
        // Metodos Acessores
        //Recupera o número de objetos da lista
        int getSize(void) const;
        //Recupera a informação contida em uma determinada posição
        T getData(int, T&) const;

        //Métodos Modificadores
        //Altera o conteudo da lista em uma determinada posição
        int setData(int, T&);
        //Insere um objeto no final da lista
        int insert(const T&);
        //Remove a primeira ocorrência de um objeto da lista
        int remove(const T&);
        //Remove o primeiro objeto da lista
        int removeFirst(T&);
        //Remove todos os objetos da lista
        void removeAll(void);
        //Outros métodos
        //Retorna um valor booleano caso a lista não seja vazia
        bool isEmpty(void) const;
        //Encontra a primeira ocorrência de um objeto da lista
        bool find(T&) const ;
        // imprime o conteudo da lista
        void print() const;

        //ordenacoes
        int bubbleSort();
        int bubbleSortOtimizado();
        void shakerSort();
        void binaryInsertionSort();
        int insertionSort();
        void shellSort();
        int selectionSort();
        int quickSort(int inicio, int fim, int *num_instrucoes);
        void mergeSort(int p, int r, int *num_instrucoes);
        int heapSort();
        int binarySearch(int val, int menor, int maior, int *num_instrucoes);
        int findSubListMax(int *e, int *d);
        
        
        //Troca valores
        void troca(int a, int b);
        //Particiona vetor
        int particiona(int inicio, int fim, int *num_instrucoes);
        //Junta listas
        void merge(int p, int m, int r, int *num_instrucoes);
        //Leva maior valor para o raiz
        void maxHeapfy(int n, int p, int *num_instrucoes);

    protected:

    private:
        //Vetor que irá conter os objetos da lista
        int listData[ iMaxListSize];
        //Número de objetos da lista
        int iSize;
        

};

#endif // LISTA_H

