// Creating a sequential file

/*
Daniela Mejia
02/25/2019
Lab USERNAMES

File I/O – fprintf()

“Usernames”

    Prompt the user for the number of students.

    Read the first, middle, and last name for each student.

    Remove any newline characters from all strings.

    Append each name to a “class roster” file in the following format:
        For George Herbert Dubya Bush, write the following to the the file...George H. Dubya Bush has a username of ghdbush.

BUILD THOSE SAFETY CHECKS!!!!!*/
#include <stdio.h>
#include <stdlib.h>

int main( void )
{ 
   char username [30]; 
   char First_name[ 30 ]; //  Read the first, middle, and last name for each student.
   char Middle_name[ 30 ];
   char Last_name[ 30 ];
   
   FILE *sfPtr; // sfPtr = student.dat file pointer   

   // fopen opens file. Exit program if unable to create file 
   if ( ( sfPtr = fopen( "C:/Users/DOTlaptop/Desktop/ch12/classroster.txt", "w" ) ) == NULL ) {
      puts( "File could not be opened" ); // ERROR if no input
   } // end if
   else { 
      puts( "Enter the student First Name, Middle Name, Last Name ." );  //first, middle, and last name for each student.
      puts ("Enter your user name (ex for Daniela G Mejia username dgmejia)");  // user name for student 
      puts( "Enter EOF to end input." );
      printf( "%s", "* " );  
      scanf( "%29s %29s %29s %29s", First_name, Middle_name, Last_name, username);  //scan the different variables
   
      // write info of students into file with fprintf
      while ( !feof( stdin ) )   // while not at the end of the file then 
      { 
        fprintf( sfPtr, "%s %s %s has a username of %29s\n", First_name, Middle_name, Last_name, username);  //print the info od the students with user name 
        printf( "%s", "* " );
        scanf( "%29s%29s%29s%29s", First_name, Middle_name, Last_name, username);
      } // end while
      fclose(sfPtr); // fclose closes file   
   } // end else
} // end main