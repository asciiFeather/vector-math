CC = gcc
CPP_FLAGS = -w -O2 -Ilib/ -lm -Wextra 

.PHONY: bin clean run

bin/main: src/main.c
	$(CC) $< -o $@ $(CPP_FLAGS)

bin:
	@mkdir bin

run:
	@bin/main

clean:
	@rm -rf bin/