#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
<<<<<<< HEAD
char name[255];
printf("Enter your name: ");
fgets(name, 255, stdin);
printf("length = %d\n", strlen(name)); /* debug line */
name[strlen(name)-1] = '\0'; /* remove the newline at the end */
=======
char first[255], last[255];
printf("Enter your first name: ");
fgets(first, 255, stdin);
first[strlen(first)-1] = '\0'; /* remove the newline at the end */
printf("Now enter your last name: ");
gets(last); /* buffer overflow? what's that? */
printf("Hello, %s %s!\n", first, last);
>>>>>>> be90ec6e87fa43e6689b66426744e66276a46464
return 0;
}
