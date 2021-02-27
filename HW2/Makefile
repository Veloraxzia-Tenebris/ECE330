LIB = -lm
DYN = matrix_dynamic.c
STC = matrix_static.c
MAIND = test_dynamic.c $(DYN)
MAINS = test_static.c $(STC)

all: dynamic static

dynamic:
	gcc $(MAIND) $(LIB) -o dynamic_test

static:
	gcc $(MAINS) $(LIB) -o static_test

clean:
	rm -f dynamic_test static_test