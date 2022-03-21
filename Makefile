CC = gcc
CPP_FLAGS = -w -O2 -Ilib/

.PHONY: bin clean run

bin/main: src/main.c
	$(CC) $< -o $@ $(CPP_FLAGS)

bin:
	@mkdir bin

run:
	@bin/main

clean:
	@rm -rf bin/