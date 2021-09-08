DIR_INC = ./include
DIR_SRC = ./src
DIR_BIN = ./bin
DIR_OBJ = ./obj

CXX = g++
CFLAGS = -Wall -g -c
target = $(DIR_BIN)/hello
objects= $(DIR_OBJ)/hello.o $(DIR_OBJ)/mymath.o
VPATH= ../MYLIB/include

$(target):$(objects)
	$(CXX) -Wl,-rpath,../MYLIB/dll/ $^ -o $@ -I$(VPATH) -L../MYLIB/dll -lmath #动态库
# 	$(CXX) $^ -o $@ -I$(VPATH) -L../MYLIB/lib -lmath #静态库
$(DIR_OBJ)/hello.o:$(DIR_SRC)/hello.cpp $(DIR_INC)/mymath.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/hello.cpp -o $(DIR_OBJ)/hello.o -I$(VPATH) #-L/../MYLIB/lib -lmath

$(DIR_OBJ)/mymath.o:$(DIR_SRC)/mymath.cpp $(DIR_INC)/mymath.h
	$(CXX) $(CFLAGS) $(DIR_SRC)/mymath.cpp -o $(DIR_OBJ)/mymath.o -I$(VPATH) #-L../MYLIB/lib -lmath


.PHONY:clean
clean:
	-rm $(target) $(objects)