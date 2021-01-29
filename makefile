conexiones: main.o Dia.o Aeropuerto.o Vuelo.o Horario.o
	g++ main.o Dia.o Aeropuerto.o Vuelo.o Horario.o -o conexiones

main.o: main.cpp
	g++ -c main.cpp

Dia.o: Dia.cpp
	g++ -c Dia.cpp

Aeropuerto.o: Aeropuerto.cpp
	g++ -c Aeropuerto.cpp

Vuelo.o: Vuelo.cpp
	g++ -c Vuelo.cpp

Horario.o: Horario.cpp
	g++ -c Horario.cpp

clean:
	rm *.o conexiones
