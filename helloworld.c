#include <stdio.h>
void greet(const char *name) { 
printf("Hello, %s! Welcome to your GitHub portfolio.\n", name); 
} 
int main(void) {
	printf("Hello, world!\n");
	char name[20];
	printf("enter your name:\n");
	scanf("%s",name);
	greet(name);
	return 0;
}
