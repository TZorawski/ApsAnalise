#include "Lista.h"
#include <iostream>

using namespace std;

int Lista::binarySearch(int val, int menor, int maior) {
    if (maior <= menor)
        return (val > listData[menor])?  (menor + 1): menor;
 
    int meio = (menor + maior)/2;
 
    if(val == listData[meio])
        return meio+1;
 
    if(val > listData[meio])
        return binarySearch(val, meio+1, maior);
    return binarySearch(val, menor, meio-1);
}

Lista::Lista(void) {
    iSize=0;//ctor
}

Lista::~Lista() {
    //dtor
}

int Lista::getSize(void) const {
    return iSize;
}

int Lista::getData(int pos, T& elem) const {
    if (pos < 0 || pos >= iSize) {
        cerr << "Posi��o inv�lida!!!" << endl;
    return 1;
    }
    elem = listData[pos];
    return 0;
}

int Lista::setData(int pos, T& data) {
    if (pos < 0 || pos >= iSize) {
        cerr << "Posi��o inv�lida!!!" << endl;
        return 1;
    }
    listData[pos] = data;
    return 0;
}

int Lista::insert(const T& item) {
    if (iSize >= iMaxListSize) {
        cerr << "O tamanho m�ximo da lista foi atingido!" << endl;
        return 1;
    }
    listData[ iSize] = item;
    iSize++;
    return 0;
}

int Lista::remove(const T& item) {
    int ii(0);
    while (ii < iSize && !(item == listData[ii] ))
        ii++;
        
    if (ii == iSize)
        return 1;
        
    iSize--;
    
    while (ii < iSize) {
        listData[ ii] = listData[ ii+1] ;
        ii++;
    }
    return 0;
}

void Lista::removeAll(void) {
	iSize = 0;
}

int Lista::removeFirst(T& item) {
    if (isEmpty()) {
        cerr << "Erro! Lista vazia..." << endl;
        return 1;
    }
    
    item = listData[0];
    remove(item);
    
    return 0;
}

bool Lista::isEmpty(void) const {
    return iSize==0;
}

bool Lista::find(T& item) const {
    int ii(0);
    
    if (isEmpty())
        return false;
        
    while (ii < iSize && !(item == listData[ ii] ))
        ii++;
        
    if (ii == iSize)
        return false;
    return true;
}

void Lista::print()const {
    int ii(0);
    
    if (isEmpty()) {
        cout << "Lista Vazia!" << endl;
        return;
    }
    cout << "[";
    
    while (ii < iSize) {
        cout << listData[ ii] <<" ";
        ii++;
    }
    cout << "]"<<endl;
}

int Lista::bubbleSort(void) {
	int i, j, aux, num_instrucoes = 0;
	
	for (i = 0; i < iSize; i++) {
            for (j = 0; j < iSize - i; j++) {
                num_instrucoes += 1;
                if (listData[j] > listData[j+1]) {
                    aux = listData[j];
                    listData[j] = listData[j+1];
                    listData[j+1] = aux;
                }
            }
	}
    return num_instrucoes;
}

int Lista::bubbleSortOtimizado(void) {
	int i, j, aux, k = 0, num_instrucoes = 0;
	
	for (i = 0; i < iSize; i++) {
            k = 0;
            for (j = 0; j < iSize - i; j++) {
                num_instrucoes += 1;
                if (listData[j] > listData[j+1]) {
                    aux = listData[j];
                    listData[j] = listData[j+1];
                    listData[j+1] = aux;
                    k = 1;
                }
            }
            if (k == 0) break;
	}
    return num_instrucoes;
}

void Lista::shakerSort(void) {
	int i, j, aux, k;
	
	for(i = 0; i < iSize/2; i++) {
		k = 0;
		for (j = 0; j <=  iSize  - 2; j++) {
	        if (listData[j] > listData[j+1]) {
	          aux = listData[j];
	          listData[j] = listData[j+1];
	          listData[j+1] = aux;
	          k = 1;
	        }
		}
		
		k = 0;
		for (j = iSize - 2; j >= 0; j--) {
			if (listData[j] > listData[j+1]) {
				aux = listData[j];
				listData[j] = listData[j+1];
				listData[j+1] = aux;
				k = 1;
        	}
      	}
		if(k == 0) break;
	}
    return;
}

void Lista::binaryInsertionSort(void) {
	int i, loc, j, k, aux;
 
    for (i = 1; i < iSize; i++) {
        j = i - 1;
        aux = listData[i];
        
        loc = binarySearch(aux, 0, j);
        
        while (j >= loc) {
            listData[j+1] = listData[j];
            j--;
        }
        listData[j+1] = aux;
    }
    return;
}

int Lista::insertionSort(void) {
    int i, j, k, num_instrucoes = 0;

    for (i = 1; i < iSize; i++) {
        k = listData[i];
        j = i-1;

        while (j >= 0 && listData[j] > k) {
            num_instrucoes += 1;
            listData[j+1] = listData[j];
            j = j-1;
        }
        listData[j+1] = k;
    }
    return num_instrucoes;
}

void Lista::shellSort(void) {
	int i, j, k, aux;
	
	for(i = iSize/2; i > 0; i /= 2) {
		for(j = i; j < iSize; j++) {
		
			aux = listData[j];
			int k;
			for (k = j; k >= i && listData[k - i] > aux; k -= i)
				listData[k] = listData[k - i];
				
			listData[k] = aux;
		}
	}
}

void Lista::troca(int a, int b) {
	int c = listData[a];
	listData[a] = listData[b];
	listData[b] = c;
}

int Lista::selectionSort() {
	int i, j, menor, num_instrucoes = 0;
	
	for(i = 0; i < iSize; i++) {
		menor = i;
		for(j = 1 + i; j < iSize; j++) {
                    num_instrucoes += 1;
                    if(listData[j] < listData[menor]) {
                        menor = j;
                    }
		}
		troca(menor, i);
	}
	
        return num_instrucoes;
}

int Lista::particiona(int inicio, int fim, int *num_instrucoes){
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = listData[inicio];
    while(esq < dir){
            while(listData[esq] <= pivo) {
                *num_instrucoes += 1;
                esq++;
            }
            while(listData[dir] > pivo) {
                *num_instrucoes += 1;
                dir--;
            }
            if(esq < dir){
                aux = listData[esq];
                listData[esq] = listData[dir];
                listData[dir] = aux;
            }
    }
    listData[inicio] = listData[dir];
    listData[dir] = pivo;
    return dir;
}

int Lista::quickSort(int inicio, int fim, int *num_instrucoes_total){
    int pivo, num_instrucoes = 0;
    if(fim > inicio){
        pivo = particiona(inicio, fim, &num_instrucoes);
        quickSort(inicio, pivo-1, &num_instrucoes);
        quickSort(pivo+1, fim, &num_instrucoes);
        *num_instrucoes_total += num_instrucoes + 1;
    }
    return 0;
}

void Lista::merge(int p, int m, int r, int *num_instrucoes){
	int i = 0, j = 0, k;
	int v1[m-p+1], v2[r-m];

	while(i < m-p+1) {
            v1[i] = listData[p+i];
            i++;
            num_instrucoes += 1;
        }
        i = 0;
	while(j < r-m) {
            v2[j] = listData[m+1+j];
            j++;
            num_instrucoes += 1;
        }
        j = 0;
        
	k = p;
	while(i < m-p+1 && j < r-m){
            if(v1[i] <= v2[j]){
                listData[k] = v1[i];
                i++;
            } else {
                listData[k] = v2[j];
                j++;
            }
            k++;
            num_instrucoes += 1;
	}

	while(i < m-p+1){
            listData[k] = v1[i];
            k++;
            i++;
            num_instrucoes += 1;
	}
	while(j < r-m){
            listData[k] = v2[j];
            k++;
            j++;
            num_instrucoes += 1;
	}
}

void Lista::mergeSort(int p, int r, int *num_instrucoes_total){
	int m, num_instrucoes = 0;
	if(r > p){
            m = p+(r-p)/2;
            mergeSort(p, m, &num_instrucoes);
            mergeSort(m+1, r, &num_instrucoes);
            merge(p, m, r, &num_instrucoes);
            *num_instrucoes_total += num_instrucoes + 1;
	}
}

void Lista::maxHeapfy(int n, int p, int *num_instrucoes_total){
    int r = 2*p + 1;
    int l = 2*p + 2;
    int maior = p, num_instrucoes = 0;

    if ((r < n) && (listData[r] > listData[maior])) {
        maior = r;
    }
    if ((l < n) && (listData[l] > listData[maior])) {
        maior = l;
    }
    if (maior != p) { 
        troca(p, maior); 
        maxHeapfy(n, maior, &num_instrucoes); 
    }
    
    *num_instrucoes_total += num_instrucoes + 1;
}

int Lista::heapSort(){
    int num_instrucoes = 0;
    for(int i = ((iSize/2) -1); i >= 0; i--) {
        maxHeapfy(iSize, i, &num_instrucoes);
    }
    for(int i = (iSize-1); i >= 0; i--) {
        troca(0, i);
        maxHeapfy(i, 0, &num_instrucoes);
    }
    
    return num_instrucoes;
}

int Lista::findSubListMax (int *e, int *d) {
    int imax = 0, fmax = 0, soma_max = listData[0], num_instrucoes = 0;
    
    for (int i = 0; i <= iSize; i++) {
        int somai = 0;
        
        for (int j = i; j <= iSize; j++) {
            somai += listData[j];
            
            if (somai > soma_max) {
                soma_max = somai;
                imax = i;
                fmax = j;
            }
            
            num_instrucoes += 1;
        }
    }
    
    *e = imax;
    *d = fmax;
    
    return num_instrucoes;
}
