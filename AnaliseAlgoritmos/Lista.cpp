#include "Lista.h"
#include <iostream>

using namespace std;

int binarySearch(int vet[], int val, int menor, int maior) {
    if (maior <= menor)
        return (val > vet[menor])?  (menor + 1): menor;
 
    int meio = (menor + maior)/2;
 
    if(val == vet[meio])
        return meio+1;
 
    if(val > vet[meio])
        return binarySearch(vet, val, meio+1, maior);
    return binarySearch(vet, val, menor, meio-1);
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

void Lista::bubbleSort(void) {
	int i, j, aux, k = 0;
	
	for (i = 0; i < iSize; i++) {
		k = 0;
		for (j = 0; j < iSize - i; j++) {
			if (listData[j] > listData[j+1]) {
				aux = listData[j];
    			listData[j] = listData[j+1];
    			listData[j+1] = aux;
                k = 1;
			}
		}
		if (k == 0) break;
	}
    return;
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
        
        loc = binarySearch(listData, aux, 0, j);
        
        while (j >= loc) {
            listData[j+1] = listData[j];
            j--;
        }
        listData[j+1] = aux;
    }
    return;
}

void Lista::insertionSort(void) {
	int i, j, k;
	
	for (i = 1; i < iSize; i++) {
		k = listData[i];
		j = i-1;
		
		while (j >= 0 && listData[j] > k) {
			listData[j+1] = listData[j];
			j = j-1;
		}
		listData[j+1] = k;
	}
	return;
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
