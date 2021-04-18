g++ -c ./include/include.h -o ./build/include.o
g++ -c ./include/digital/Gates.h -o ./build/Gates.o
g++ -c ./include/digital/Combinational.h -o ./build/Combinational.o
g++ -c ./src/Circuits.h -o ./build/Circuits.o

ar rcs ./bin/ambliss_micro_lab.a ./build/include.o ./build/Gates.o ./build/Combinational.o ./build/Circuits.o
