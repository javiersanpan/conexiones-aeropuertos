conexiones: main.o Dia.o Aeropuerto.o Vuelo.o
	g++ main.o -o Conexiones

main.o: main.cpp
	g++ -c main.cpp

Dia.o: Dia.cpp
	g++ -c Dia.cpp

Aeropuerto.o: Aeropuerto.cpp
	g++ -c Aeropuerto.cpp

Dia.o: Dia.cpp
	g++ -c Aeropuerto.cpp

clean:
	rm *.o conexiones
