all:test
BUILD_DIR = build
SOURCE_DIR = src
TESTS_DIR = test
CFLAGS = -g -Wall -Wextra -Wpedantic
test:$(BUILD_DIR)/function.o  $(BUILD_DIR)/test.o
		clang++ -o test $(CFLAGS) $(BUILD_DIR)/function.o $(BUILD_DIR)/test.o -lgtest_main -lgtest -lpthread
$(BUILD_DIR)/test.o:$(TESTS_DIR)/test.cpp $(SOURCE_DIR)/function.cpp
		clang++ -c $(CFLAGS)  $(TESTS_DIR)/test.cpp -o $(BUILD_DIR)/test.o 
$(BUILD_DIR)/function.o:$(SOURCE_DIR)/function.cpp $(SOURCE_DIR)/functions.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/function.cpp -o $(BUILD_DIR)/function.o

test:$(BUILD_DIR)/function.o  $(BUILD_DIR)/test.o
	./$(BUILD_DIR)/test
	
clean:
		rm $(BUILD_DIR)/*.o

.PHONY:all clean