SRC := src/parser.c
OBJ := $(SRC:.c=.o)

INCS := -Isrc/
TSCFLAGS := $(CPPFLAGS) $(CFLAGS) -fPIC
TSLDFLAGS := $(LDFLAGS) --shared

JS_DIRS := extensions grammar-lib
JS_SRC := grammar.js $(shell find $(JS_DIRS) -type f -name '*.js')

default: generate

fennel.so: $(OBJ)
	$(CC) $(TSLDFLAGS) -o $@ $(OBJ)

.c.o:
	$(CC) -c $(TSCFLAGS) -o $@ $<

src/parser.c: $(JS_SRC) src/scanner.c
	npx tree-sitter generate

generate: src/parser.c

tree-sitter-fennel.wasm: generate
	npx tree-sitter build --wasm

playground: tree-sitter-fennel.wasm
	npx tree-sitter playground

test: generate
	npx tree-sitter test

clean:
	rm -f fennel.so $(OBJ)

.PHONY: generate test clean
