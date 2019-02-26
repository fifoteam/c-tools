# https://www.jianshu.com/p/d77837d0314c

CC = g++
AR = ar
LD = ld
RM = del
# RM = rm -rf
MV = MOVE /Y
CP = copy

C++FLAGS = -g -Wno-deprecated -Wall -Werror -I.
OBJ_LIST = $(subst .cpp,.o,$(wildcard *.cpp))
TARGET = main.exe

all: depend.dep $(TARGET)

$(TARGET): $(OBJ_LIST)
	$(CC) -o $(TARGET) $(OBJ_LIST) -mwindows

clean:
	$(RM) *.o *.obj *.tmp *.exe *.dep *.s

depend.dep:
	$(CC) -M $(C++FLAGS) $(wildcard *.cpp) > $@

-include depend.*

.cpp.o:
	$(CXX) -c $(C++FLAGS) $<

%.dir:%
	$(MAKE) -C $< $(DEBUG_MAKE)
