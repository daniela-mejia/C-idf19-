// Creating a sequential file

/*
#include <stdio.h>
ile I/O – fprintf()

“Usernames”

    Prompt the user for the number of students.

    Read the first, middle, and last name for each student.

    Remove any newline characters from all strings.

    Append each name to a “class roster” file in the following format:
        For George Herbert Dubya Bush, write the following to the the file...George H. Dubya Bush has a username of ghdbush.

BUILD THOSE SAFETY CHECKS!!!!!*/

int main( void )
{ 
   char First_name[ 30 ]; //  Read the first, middle, and last name for each student.
   char Middle_name[ 30 ];
   char Last_name[ 30 ];
   
   FILE *sfPtr; // sfPtr = student.dat file pointer   

   // fopen opens file. Exit program if unable to create file 
   if ( ( sfPtr = fopen( "C:/Users/DOTlaptop/Desktop/ch12/classroster.txt", "w" ) ) == NULL ) {
      puts( "File could not be opened" );
   } // end if
   else { 
      puts( "Enter the student First Name, Middle Name, Last Name \n." );
      puts( "Enter EOF to end input." );
      printf( "%s", "* " );
      scanf( "%29s%29s%29s", &First_name, &Middle_name, &Last_name );
   
      // write info of students into file with fprintf
      while ( !feof( stdin ) ) 
      { 
         fprintf( sfPtr, "%s%s%s\n", First_name, Middle_name, Last_name );
         printf( "%s", "* " );
         scanf( "%s%s%s", &First_name, &Middle_name, &Last_name );
      } // end while
      
      fclose(sfPtr); // fclose closes file   
   } // end else
} // end main