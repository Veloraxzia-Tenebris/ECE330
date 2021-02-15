/* File: matrix_dynamic.c */
#include "matrix_dynamic.h"

matrix create_empty(int rdim, int cdim)
{
  int i;
  matrix result;
  /* assign values to the row_dim and col_dim structure members */
  result.row_dim = rdim;
  result.col_dim = cdim;
  result.element = (T**)malloc(rdim * sizeof(T*));
  for (i=0; i<rdim; i++)
    result.element[i] = (T*)malloc(cdim * sizeof(T));
  return result;
}

matrix create_initval(int rdim, int cdim, T val)
{
  int i,j;
  matrix result;
  /* assign values to the structure members */
  result.row_dim = rdim;
  result.col_dim = cdim;
  result.element = (T**)malloc(rdim * sizeof(T*));
  for (i=0; i<rdim; i++)
    result.element[i] = (T*)malloc(cdim * sizeof(T));
  /* initialize the matrix elements */
  for (i=0; i<rdim; i++)
    for (j=0; j<cdim; j++)
      result.element[i][j] = val;
  return result;
}

matrix create_initvals(int rdim, int cdim, T* initval)
{
  int i,j;
  matrix result;
  /* assign values to the structure members */
  result.row_dim = rdim;
  result.col_dim = cdim;
  result.element = (T**)malloc(rdim * sizeof(T*));
  for (i=0; i<rdim; i++)
    result.element[i] = (T*)malloc(cdim * sizeof(T));
  /* initialize the matrix elements */
  for (i=0; i<rdim; i++)
    for (j=0; j<cdim; j++)
      result.element[i][j] = *(initval + (cdim * i + j));
  return result;
}

void destroy(matrix m)
{
  int i;
  for (i=0; i<m.row_dim; i++)
    free(m.element[i]);
  free(m.element);
  free(&m);
}

T retrieve(int row, int col, matrix m)
{
  return(m.element[row][col]);
}

void assign(int row, int col, matrix* m, T elm)
{
  m->element[row][col] = elm;
}

void matrix_print(matrix m)
{
  int i,j;
  printf("\n");
  for (i=0; i<m.row_dim; i++) {
    printf("\n");
    for (j=0; j<m.col_dim; j++) 
       printf(FORMAT, m.element[i][j]);
  }
  printf("\n");
}

matrix add(matrix m1, matrix m2)
{
  int i,j;
  matrix result;
  assert((m1.row_dim == m2.row_dim) && (m1.col_dim == m2.col_dim));
  result = create_empty(m1.row_dim, m2.col_dim);
  for (i=0; i<m1.row_dim; i++)
    for (j=0; j<m1.col_dim; j++)
      result.element[i][j] = m1.element[i][j] + m2.element[i][j];
  return result; 
}

matrix subtract(matrix m1, matrix m2)
{
  int i,j;
  matrix result;
  assert((m1.row_dim == m2.row_dim) && (m1.col_dim == m2.col_dim));
  result = create_empty(m1.row_dim, m2.col_dim);
  for (i=0; i<m1.row_dim; i++)
    for (j=0; j<m1.col_dim; j++)
      result.element[i][j] = m1.element[i][j] - m2.element[i][j];
  return result; 
}

matrix negate(matrix m)
{
  int i,j;
  matrix result;
  result = create_empty(m.row_dim, m.col_dim);
  for (i=0; i<m.row_dim; i++)
    for (j=0; j<m.col_dim; j++)
      result.element[i][j] = -m.element[i][j];
  return result; 
}

matrix multiply(matrix m1, matrix m2)
{
  int i,j,k;
  matrix result;
  assert(m1.col_dim == m2.row_dim);
  result = create_empty(m1.row_dim, m2.col_dim);
  for (i=0; i<m1.row_dim; i++)
    for (j=0; j<m2.col_dim; j++) {
      result.element[i][j] = 0;
      for (k=0; k<m1.col_dim; k++)
        result.element[i][j] += m1.element[i][k] * m2.element[k][j];
    }
  return result; 
}

matrix scalar_multiply(T scalar, matrix m)
{
  int i,j;
  matrix result;
  result = create_empty(m.row_dim, m.col_dim);
  for (i=0; i<m.row_dim; i++)
    for (j=0; j<m.col_dim; j++)
      result.element[i][j] = scalar * m.element[i][j];
  return result; 
}

void equate(matrix* m1, matrix* m2)
{
  int i,j;
  assert((m1->row_dim == m2->row_dim) && (m1->col_dim == m2->col_dim));
  for (i=0; i<m1->row_dim; i++)
    for (j=0; j<m1->col_dim; j++)
      m2->element[i][j] = m1->element[i][j];
}

