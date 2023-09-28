#ifndef HOLBERTON_H
#define HOLBERTON_H
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int binary_to_uint2(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int get_bit2(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);
unsigned int _reverse_string(char *s);
char * _cp_string(const char *s);
#endif
