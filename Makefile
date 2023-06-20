SRC = src/main.cpp
CC = g++
BIN = pass-manager

pass-manager:
	@echo "building $(SRC)"
	$(CC) $(SRC) -o $(BIN)

clean:
	rm $(BIN)
