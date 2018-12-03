# -*- coding: utf-8 -*-

import sys
import random

#qtd = sys.argv[1]

def main():
	lista1 = []#lista com 1000 elementos
	lista2 = []#lista com 10.000 elementos
	lista3 = []#lista com 100.000 elementos

	#Popula lista com 1000 elementos com valores de -999 ate 1000
	#arq1 = open('lista1.txt', 'w')
	#print arq1

	#for i in range(1000):
	#	lista1.append(str(random.randint(-999, 1000))+',')

	#arq1.writelines(lista1)
	#arq1.close()

	#Popula lista com 10.000 elementos com valores de -9.999 ate 10.000
	#arq2 = open('lista2.txt', 'w')
	#print arq2

	#for i in range(10000):
	#	lista2.append(str(random.randint(-9999, 10000))+',')

	#arq2.writelines(lista2)
	#arq2.close()

	#Popula lista com 100.000 elementos com valores de -99.999 ate 100.000
	#arq3 = open('lista3.txt', 'w')
	#print arq3

	#for i in range(100000):
	#	lista3.append(str(random.randint(-99999, 100000))+',')

	#arq3.writelines(lista3)
	#arq3.close()

	l30 = []#lista com 1000 elementos
	l50 = []#lista com 10.000 elementos
	l70 = []#lista com 100.000 elementos
	l90 = []#lista com 100.000 elementos

	#Popula lista com 100.000 elementos com valores de -99.999 ate 100.000
	arql30 = open('l30.txt', 'w')
	print arql30

	for i in range(30000):
		l30.append(str(random.randint(-99999, 100000))+',')

	arql30.writelines(l30)
	arql30.close()
	print(len(l30))

	#Popula lista com 100.000 elementos com valores de -99.999 ate 100.000
	arql50 = open('l50.txt', 'w')
	print arql50

	for i in range(20000):
		l30.append(str(random.randint(-99999, 100000))+',')

	arql50.writelines(l30)
	arql50.close()
	print(len(l30))
	#Popula lista com 100.000 elementos com valores de -99.999 ate 100.000
	arql70 = open('l70.txt', 'w')
	print arql50

	for i in range(20000):
		l30.append(str(random.randint(-99999, 100000))+',')

	arql70.writelines(l30)
	arql70.close()
	print(len(l30))
	#Popula lista com 100.000 elementos com valores de -99.999 ate 100.000
	arql90 = open('l90.txt', 'w')
	print arql90

	for i in range(20000):
		l30.append(str(random.randint(-99999, 100000))+',')

	arql90.writelines(l30)
	arql90.close()
	print(len(l30))
main()
