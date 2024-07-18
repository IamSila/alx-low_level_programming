#ifndef FUNCTION_POINTER
#define FUNCTION_POINTER

char _putchar(char c);
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));



#endif
