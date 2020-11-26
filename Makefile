loja: main.o concessionaria.o
	g++ -o loja -std=c++11 -O0 -g main.cpp concessionaria.cpp

main.o: main.cpp concessionaria.h
	g++ -c main.cpp

concessionaria.o: concessionaria.cpp concessionaria.h
	g++ -c concessionaria.cpp

clean:	
	rm -rf *.o

go:
	./loja