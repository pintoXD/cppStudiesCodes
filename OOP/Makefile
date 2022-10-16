#CC --> The compiler
#gcc for C
#g++ for C++
CC = g++

INC_DIR = inc
SRC_DIR = src
OBJ_DIR = obj


SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/employee.cpp $(SRC_DIR)/roles.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/employee.o $(OBJ_DIR)/roles.o

DEPS = $(INC_DIR)/employee.hpp $(INC_DIR)/roles.hpp

#compiler flags

CFLAGS = -g -Wall -I$(INC_DIR)



#build target
TARGET = main

#make options
#https://gribblelab.org/teaching/CBootCamp/12_Compiling_linking_Makefile_header_files.html
# https://stackoverflow.com/a/22545645
#First step to link headers
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(DEPS)
	$(CC) $(CFLAGS) -c -o $@ $<

#second step to link headers
# eco:
# 	echo $(OBJ)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

all: $(TARGET)
	echo $(TARGET)

# $(TARGET): $(TARGET).cpp
# 		$(CC) $(CFLAGS) $(TARGET).cpp -o $(TARGET) 


clean:
	$(RM) $(TARGET) teste



