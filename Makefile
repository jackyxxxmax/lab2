main: BMI.o main.o
	g++ -o lab2 main.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

main.o: main.cpp BMI.h
	g++ -c main.cpp

clean:
	rm BMI.o main.o
