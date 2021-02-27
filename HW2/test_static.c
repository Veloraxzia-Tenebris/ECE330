/* File: test_static.c */
#include "matrix_static.h"

int main() 
{
	static T data[] = {1,2,3,4};
	matrix  a,b;
	a = create_initvals(2,2,data);
	b = create_empty(2,2);
	equate(&a,&b);
	printf("\n Matrix a:");
	matrix_print(a);
	printf("\n Matrix b:");
	matrix_print(b);
	printf("\n a+b:");
	matrix_print(add(a,b));
	printf("\n Transpose of a and b:");
	matrix_print(transpose(a));
	matrix_print(transpose(b));
}

