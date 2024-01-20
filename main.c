#include <studio.h>
#include <string.h>

unt main(int argc, char **argv)
{
	printf("Enter your first name: ");
	fgets(first, 255, stdin);
	first[strlen(name)-1] = '\0'; /* rewmove the newline at the end */
	
	printf("Now enter your last name: ")
	gets(last); /* buffer overflow? What's that? */
	
	printf("Hello, %s %s!\n", first, last);
	return 0;
}