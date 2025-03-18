all:main
BUILD_DIR = build
SOURCE_DIR = src
CFLAGS = -g -Wall -Wextra -Wpedantic
main:$(BUILD_DIR)/function.o  $(BUILD_DIR)/tests.o
		clang++ -o main $(CFLAGS) $(BUILD_DIR)/function.o $(BUILD_DIR)/tests.o -lgtest_main -lgtest -lpthread
$(BUILD_DIR)/tests.o:$(SOURCE_DIR)/tests.cpp $(SOURCE_DIR)/function.cpp
		clang++ -c $(CFLAGS)  $(SOURCE_DIR)/tests.cpp -o $(BUILD_DIR)/tests.o 
$(BUILD_DIR)/function.o:$(SOURCE_DIR)/function.cpp $(SOURCE_DIR)/functions.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/function.cpp -o $(BUILD_DIR)/function.o


clean:
		rm $(BUILD_DIR)/*.o

.PHONY:all clean