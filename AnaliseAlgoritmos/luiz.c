//
//
//
//void merge(int* v, int p, int m, int r){
//	int n1 = m-p+1, n2 = r-m;
//	int i, j, k;
//	int v1[n1], v2[n2];
//
//	for(i = 0; i < n1; i++)
//		v1[i] = v[p+i];
//	for(j = 0; j < n2; j++)
//		v2[j] = v[m+1+j];
//
//	i = 0;
//	j = 0; 
//	k = p;
//	while(i < n1 && j < n2){
//		if(v1[i] <= v2[j]){
//			v[k] = v1[i];
//			i++;
//		} else {
//			v[k] = v2[j];
//			j++;
//		}
//		k++;
//	}
//
//	while(i < n1){
//		v[k] = v1[i];
//		i++;
//		k++;
//	}
//
//	while(j < n2){
//		v[k] = v2[j];
//		j++;
//		k++;
//	}
//}
//
//void mergeSort(int* v, int p, int r){
//	int m;
//	if(p < r){
//		m = p+(r-p)/2;
//
//		mergeSort(v, p, m);
//		mergeSort(v, m+1, r);
//		merge(v, p, m, r);
//	}
//}
//
//int BuscaBinaria (int* v, int x, int e, int d){
//	int m = (e + d)/2;
//	if(v[m] == x)
//		return m;
//	if(e >= d)
//		return -1;
//	else
//		if(v[m] < x)
//			return BuscaBinaria(v, x, m+1, d);
//		else
//			return BuscaBinaria(v, x, e, m-1);
//}
//
//void levaTopo(int* v, int n, int p){
//    int d = 2*p + 1;
//    int e = 2*p + 2;
//    int maior = p; 
//
//    if(d < n && v[d] > v[maior]) 
//        maior = d; 
//  
//    if(e < n && v[e] > v[maior]) 
//        maior = e; 
//  
//    if(maior != p) { 
//        troca(&v[p], &v[maior]); 
//        levaTopo(v, n, maior); 
//    } 
//}
//
//void heapSort(int* v, int n){
//	int i, tam;
//
//	for(i = n/2 -1; i >= 0; i--){
//        levaTopo(v, n, i);
//	}
//    for(i = n-1; i >= 0; i--){
//        troca(&v[0], &v[i]);
//        levaTopo(v, i, 0);
//    }
//}
//
//
//void Find_MAX_sub_vetor_KADANE(int *vetor, int tam, int *inicio, int *fim , int *max_total){
//    int max_atual;
//    int xtemp;
//    int i;
//    max_atual = 0;
//    *max_total = -1;
//    xtemp = 0;
//
//    int verif = vetor[0];
//    for(i = 1; i < tam; i++){
//        if(vetor[i] > verif){
//            verif = vetor[i];
//            *inicio = *fim = i;
//        }
//    }
//
//
//    if(verif > 0){
//    
//        for(i=0; i < tam; i++){
//        
//            max_atual = max_atual + vetor[i];
//
//            if(max_atual < 0) { 
//                max_atual = 0;
//                xtemp = i+1;
//            }
//
//            if(max_atual > *max_total){
//                *max_total = max_atual;
//                *inicio = xtemp;
//                *fim = i;
//            }
//        }
//    }else{
//        *max_total = verif;
//    }
//    
//}
//
//
//int partition(int *vetor, int left, int right){
//
//    int pivo = vetor[right];
//    int i = (left - 1);
//	int j;
//    for(j = left; j <= right-1; j++){
//        if(vetor[j] <= pivo){
//            i = i + 1;
//            troca(&vetor[i], &vetor[j]);
//        }
//    }
//    troca(&vetor[i+1], &vetor[right]);
//    return (i+1);
//}
//
///*PARA TESTAR O QUICKSORT, DEVE MANDAR TAMANHO -1 !!*/
//void quicksort(int *vetor, int left, int right){
//    if(left < right){
//        int q = partition(vetor, left, right);
//        
//        quicksort(vetor, left, q-1);
//        quicksort(vetor, q+1,right);
//    }
//}
