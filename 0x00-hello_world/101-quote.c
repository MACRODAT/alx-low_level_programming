#include <unistd.h>
#include <string.h>

/**
 * main - prints error
 * return: 0
 */
int main(void){
	char s[]= "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, s, strnlen(s, sizeof(s)));
	
	return (1);
}
