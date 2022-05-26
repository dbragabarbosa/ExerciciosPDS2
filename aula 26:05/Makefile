# PASTAS 
# build include Makefile src

# include contem complexo.h e src contem complexo.cpp

# para compilar complexo. cpp:
# c++ -c src/complexo.cpp -I   ---> dá erro pq nao encontra complexo.h
# c++ -c src/complexo.cpp -I include/   ---> agora dá certo, cria complexo.o no diretório corrente, mas eu quero ele dentro de build
# c++ -c src/complexo.cpp -I include/ -o build/complexo.o   ---> agora complexo.o é criado na pasta build 

# vou escrever o makefile que compila esse módulo:

main: build/main.o build/complexo.o
	#  c++ build/main.o build/complexo.o -o main 
	c++ build/*.o -o main 

build/main.o: src/main.cpp include/complexo.h
	c++ -c src/main.cpp -I include/ -o build/main.o

build/complexo.o: src/complexo.cpp include/complexo.h
	c++ -c src/complexo.cpp -I include/ -o build/complexo.o

clean: 
	rm build/*.o main 
