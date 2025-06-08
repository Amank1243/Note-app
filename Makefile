CXX = g++

CXXFLAGS = -std=c++17 -Wall

TARGET = myapp

SRC = main.cc

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) tasks.json
