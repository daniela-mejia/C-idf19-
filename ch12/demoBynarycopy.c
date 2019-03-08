/* This program creates a copy of the binary file ABC.exe named as XYZ.exe. */
                                                                  
#include <stdio.h> 
#include<stdlib.h>                                                
                                                                   
int main()                                                             
{                                                                  
 FILE *fptrSource, *fptrTarget;                                    
 int m, n, p;                                                      
                                                                   
 fptrSource = fopen("C:/Users/CMT Instructor/Documents/Workspace/Example1/readf1.exe", "rb");      //read opening a binary file, use "rb" and "wb" , so that an unfortunate newline-translation doesn't mess your data.     
 
 if(fptrSource == NULL)
 {                                           
  puts("Source-file-opening failed");                              
  exit(1);                                                                                                                                      
 }                                                                 
 puts("Source-file ABC.exe opened successfully");                
                                                                   
 fptrTarget = fopen("C:/Users/CMT Instructor/Documents/Workspace/Example1/world.exe", "wb");                
 
 if(fptrTarget == NULL)
 {                                           
  puts("Target-file-opening failed");                              
  exit(2);                                                         
 }                                                                 
 puts("Target-file XYZ.exe opened successfully");               
                                                                   
 m = fgetc(fptrSource);                                            
                                                                   
 while(m != EOF)
 {                                                  
  fputc(m, fptrTarget);                                            
  m = fgetc(fptrSource);                                           
 }                                                                 
                                                                   
 puts("File copied successfully");                                 
                                                                  
 n = fclose(fptrSource);                                           
 if(n == -1)                                                       
  puts("Source-file-closing failed");                             
 if(n == 0)                                                        
  puts("Source-file closed successfully");                         
                                                                   
 p = fclose(fptrTarget);                                                                                                                        
 if(p == -1)                                                       
  puts("Target-file-closing failed");                              
 if(p == 0)                                                        
  puts("Target-file closed successfully");                         

 return(0);                                                        
}  