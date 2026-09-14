#include <stdio.h>

int sumArray ( int *array, int size );
void printArray ( int *array, int size );

int main ( void ) {

  int array [ 9 ];
  int size = sizeof ( array ) / sizeof ( array [ 0 ] );

  printf ( "Enter 9 integers: " );

  int *p = array; // read integers into the array using pointer
  for ( int i = 0; i < size; i++ )
    scanf ( "%d", p + i );

  printArray ( array, size );
  printf ( "\n" );
  sumArray ( array, size );

  return 0;
}

int sumArray ( int *array, int size ) {

  int sum = 0;
  int *end = array + size; // pointer to the end of the array

  for ( int *i = array; i < end; i++ )
    sum += *i;

  printf ( "Sum of all array elements: %d", sum );

  return sum;
}

void printArray ( int *array, int size ) {

  int *end = array + size; // pointer to the end of the array

  for ( int *i = array; i < end; i++ )
    printf ( "%d ", *i );
}