
// Multipurpose sorting program using function pointers.
#include <stdio.h>
#define SIZE 10

// prototypes
void bubble( int work[], size_t size, int (*compare)( int a, int b ) );
int ascending( int a, int b );
int descending( int a, int b );

int main( void )
{
   int order; // 1 for ascending order or 2 for descending order
   size_t counter; // counter

   // initialize unordered array a
   int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

   printf( "%s", "Enter 1 to sort in ascending order,\n" 
           "Enter 2 to sort in descending order: " );
   scanf( "%d", &order );

   puts( "\nData items in original order" );
   
   // output original array
   for ( counter = 0; counter < SIZE; ++counter ) {
      printf( "%5d", a[ counter ] );
   } // end for

   // sort array in ascending order; pass function ascending as an
   // argument to specify ascending sorting order
   if ( order == 1 ) {
      bubble( a, SIZE, ascending );
      puts( "\nData items in ascending order" );
   } // end if 
   else { // pass function descending
      bubble( a, SIZE, descending );
      puts( "\nData items in descending order" );
   } // end else

   // output sorted array
   for ( counter = 0; counter < SIZE; ++counter ) {
      printf( "%5d", a[ counter ] );   
   } // end for

   puts( "\n" );
} // end main

// multipurpose bubble sort; parameter compare is a pointer to
// the comparison function that determines sorting order
void bubble( int work[], size_t size, int (*compare)( int a, int b ) )
{
   unsigned int pass; // pass counter
   size_t count; // comparison counter

   void swap( int *element1Ptr, int *element2ptr ); // prototype

   // loop to control passes
   for ( pass = 1; pass < size; ++pass ) {

      // loop to control number of comparisons per pass
      for ( count = 0; count < size - 1; ++count ) {

         // if adjacent elements are out of order, swap them
         if ( (*compare)( work[ count ], work[ count + 1 ] ) ) {
            swap( &work[ count ], &work[ count + 1 ] );
         } // end if
      } // end for
   } // end for
} // end function bubble

// swap values at memory locations to which element1Ptr and 
// element2Ptr point
void swap( int *element1Ptr, int *element2Ptr )
{
   int hold; // temporary holding variable

   hold = *element1Ptr;
   *element1Ptr = *element2Ptr;
   *element2Ptr = hold;
} // end function swap

// determine whether elements are out of order for an ascending
// order sort                                               
int ascending( int a, int b )                                  
{                                                              
   return b < a; // should swap if b is less than a         
} // end function ascending                                 

// determine whether elements are out of order for a descending
// order sort                                               
int descending( int a, int b )                                 
{                                                              
   return b > a; // should swap if b is greater than a      
} // end function descending                                
