# SOURCES
SOURCES = ${shell find . -name '*.c'}
MAIN = ./src/main.c

# INCLUDES
INCLUDES = ${wildcard include/*.h}

# LIBS
LIB_SOURCES = ${filter-out $(MAIN), $(SOURCES)}
LIB = lib/libmontecarlo.a

# BIN
BIN_PATH = $(./bin)
EXEC = bin/teste

# FLAG
CFLAGS = -Iinclude -Llib -lmontecarlo -lm

# DIREC
MKDIR = mkdir -p obj && mkdir -p lib && mkdir -p bin
RMDIR = rmdir obj && rmdir lib && rmdir bin

.PHONY: all
all: $(EXEC)

$(LIB): $(LIB_SOURCES) $(INCLUDES)
	@$(MKDIR)
	@gcc -o obj/randNumber.o -c src/randNumber.c $(CFLAGS)
	@gcc -o obj/distancia.o -c src/distancia.c $(CFLAGS)
	@gcc -o obj/esperanca.o -c src/esperanca.c $(CFLAGS)
	@ar rcs lib/libmontecarlo.a obj/*.o
	@echo "Building..."

$(EXEC): $(MAIN) $(INCLUDES) $(LIB)
	@gcc -o $@ $< $(CFLAGS)

.PHONY: run
run: $(EXEC)
	@clear
	@.$(BIN_PATH)/$(EXEC)

.PHONY: clean
clean:
	@rm -f lib/* bin/* obj/*
	@$(RMDIR)
	@echo "Clean!"