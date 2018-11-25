# -*- coding: utf-8 -*-

import sys
import random

#qtd = sys.argv[1]

def main():
	lista1 = []#lista com 1000 elementos
	lista2 = []#lista com 10.000 elementos
	lista3 = []#lista com 100.000 elementos

	#Popula lista com 1000 elementos com valores de -999 ate 1000
	arq1 = open('lista1.txt', 'w')
	print arq1

	for i in range(1000):
		lista1.append(str(random.randint(-999, 1000))+',')

	arq1.writelines(lista1)
	arq1.close()

	#Popula lista com 10.000 elementos com valores de -9.999 ate 10.000
	arq2 = open('lista2.txt', 'w')
	print arq2

	for i in range(10000):
		lista1.append(str(random.randint(-9999, 10000))+',')

	arq2.writelines(lista1)
	arq2.close()

	#Popula lista com 100.000 elementos com valores de -99.999 ate 100.000
	arq3 = open('lista3.txt', 'w')
	print arq3

	for i in range(100000):
		lista1.append(str(random.randint(-99999, 100000))+',')

	arq3.writelines(lista1)
	arq3.close()

main()
