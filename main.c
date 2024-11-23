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
 printf("Hell0!o %s!\n", name);
=======
 char first[255], last[255];
 printf("Enter your first name: ");
 fgets(first, 255, stdin);
 first[strlen(first)-1] = '\0'; /* remove the newline at the end */
 printf("Now enter your last name: ");
 gets(last); /* buffer overflow? what's that? */
 printf("Hello %s %s!\n", first, last);
>>>>>>> 37c5357b1802fa4967f04b86e39965d96aa019c2
 return 0;
}
