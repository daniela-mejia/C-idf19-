#include <stdlib.h>
#include <string.h>

struct person{
	int age;
	char *name;
};


int main(void){
	//declare a new struct
	
	struct person az;
	
	// set some data
	az.age = 32;
	az.name = malloc(6 * sizeof(char));
	strcpy(az.name, "Student");
	
	// create a pointer to struct
	struct person *az_ptr = &az;
	
	// set some data, again
	
	(*az_ptr).age = 33;
	(*az_ptr).name = realloc((*az_ptr).name, 7 * sizeof(char));
	strcpy((*az_ptr).name, "Astudent!");
	
	// set some data, again, but with better syntax
	
	az_ptr->age = 34;
	az_ptr->name = realloc(az_ptr->name, 8 * sizeof(char));
	strcpy(*az_ptr->name, "Bstudent!");

	return 0;

}