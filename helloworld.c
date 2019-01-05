#include <stdio.h> 

int addme (int a, int b) {
	return (a+b);
}


int main () {
	printf ("Hello World from Unix. I am Krazykoder \n");
	printf("I added: 5 + 7 = %d\n", addme(5,7));
	return 0;
}
