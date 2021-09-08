DIR_INC = ./include
DIR_SRC = ./src
DIR_BIN = ./bin
DIR_OBJ = ./obj
DIR_LIB = ./lib
DIR_DLL = ./dll

target = jisuan
objects= $(DIR_OBJ)/jisuan.o $(DIR_OBJ)/add.o $(DIR_OBJ)/sub.o $(DIR_OBJ)/mut.o $(DIR_OBJ)/div.o
CXX = g++
CFLAGS = -Wall -g -c

$(DIR_BIN)/$(target):$(objects)
	$(CXX) -o $@ $^
$(DIR_OBJ)/jisuan.o:$(DIR_SRC)/jisuan.cpp $(DIR_INC)/add.h $(DIR_INC)/sub.h $(DIR_INC)/mut.h $(DIR_INC)/div.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/jisuan.cpp -o $(DIR_OBJ)/jisuan.o

$(DIR_OBJ)/add.o:$(DIR_SRC)/add.cpp $(DIR_INC)/add.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/add.cpp -o $(DIR_OBJ)/add.o
$(DIR_OBJ)/sub.o:$(DIR_SRC)/sub.cpp $(DIR_INC)/sub.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/sub.cpp -o $(DIR_OBJ)/sub.o
$(DIR_OBJ)/mut.o:$(DIR_SRC)/mut.cpp $(DIR_INC)/mut.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/mut.cpp -o $(DIR_OBJ)/mut.o
$(DIR_OBJ)/div.o:$(DIR_SRC)/div.cpp $(DIR_INC)/div.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/div.cpp -o $(DIR_OBJ)/div.o



.PHONY : clean install run
clean:
	-rm $(DIR_BIN)/$(target) $(objects) $(DIR_DLL)/libmath.so $(DIR_LIB)/libmath.a
install:
	ar cr $(DIR_LIB)/libmath.a $(DIR_OBJ)/add.o $(DIR_OBJ)/sub.o $(DIR_OBJ)/mut.o $(DIR_OBJ)/div.o 
	g++ -shared -fPIC -o $(DIR_DLL)/libmath.so $(DIR_OBJ)/add.o $(DIR_OBJ)/sub.o $(DIR_OBJ)/mut.o $(DIR_OBJ)/div.o

run:
	$(DIR_BIN)/$(target) 4 2