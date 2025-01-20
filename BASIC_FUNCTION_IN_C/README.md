### Welcome 🎉

Welcome to the exos directory. Here you will find basic functions coded in C language that you can try to implement on your side in order to learn about the language. Most of these functions already exist in the language.

Among these functions we have:

**my_print_alpha**: This function prints the alphabet from 'a' to 'z' in ascending order.
It is prototyped as follows: 
```c
int my_print_alpha(void);
```

**my_print_revalpha**: This function displays the alphabet in descending order i.e. from 'z' to 'a'.
It is prototyped as follows: 
```c
int my_print_revalpha(void)
```

**my_print_digits**: This function prints all digits from 0 to 9 on a single line.
It is prototyped as follows: 
```c
int my_print_digits(void);
```

**my_isneg**: This function lets you know if a number is negative or positive.
It is prototyped as follows: 
```c
int my_isneg(int n);
```

**my_print_comb**: This function prints a combination of all numbers with three different digits.
It is prototyped as follows: 
```c
int my_print_comb(void);
```

**my_print_number**: This function displays the number passed as a parameter. But you are only allowed to use the write system function. The function must also be able to display negative numbers.
It is prototyped as follows: 
```c
int my_put_nbr(int nb);
```

**my_putstr**: This function displays all characters of a string.
It is prototyped as follows: 
```c
int my_putstr(char const *str);
```

**my_strlen**: this function allows you to get the size of a string.
It is prototyped as follows: 
```c
int my_strlen(char const *str);
```

**my_evil_str**: This function allows you to get the reversed version of a string.
It is prototyped as follows: 
```c
int my_evil_str(char *str);
```

**my_getnbr(char const *str)** : This function converts a string into an integer. It is prototyped as follows: 
```c
int my_getnbr(char const *str).
```

**my_sort_int_array**: This function allows you to draw an array of integers.
It is prototyped as follows: 
```c
int my_sort_int_array(int *array, int size);
```

**my_compute_factorial_it**: This function allows to have the factorial of a number but in an iterative way, that is to say without recursion. It is prototyped as follows:
```c
int my_compute_factorial_it(int nb);
```

**my_compute_factorial_rec**: This function allows you to know the factorial of a number but in a recursive way. So you have to implement the function using recursion.
It is prototyped as follows:
```c
int my_compute_factorial_rec(int nb)
```

**my_compute_power_it**: This function allows to obtain a number to a given power but in an iterative way.
It is prototyped as follows: 
```c
int my_compute_power_it(int nb, int p);
```

**my_compute_power_rec**: This function allows to obtain a number to a given power but in a recursive way. It is prototyped as follows:
```c
int my_compute_power_rec(int nb, int p);
```

**my_compute_square_root**: This function allows you to get the square root of the number passed as a parameter. It is prototyped as follows: 
```c
int my_compute_square_root(int nb);
```

**my_is_prime**: This function lets you know if a number is prime or not. It returns 1 if the number is prime and 0 if it is not. It is prototyped as follows: 
```c
int my_is_prime(int nb);
```

**my_find_prime_sup**: This function allows you to know the prime number that comes after the number you pass as a parameter. It is prototyped as follows:
```c
int my_find_prime_sup(int nb);
```

**my_strcpy**: This function copies all characters from the string src to the string dest and returns dest. It is prototyped as follows: 
```c
char *my_strcpy(char *dest, char *src).
```

**my_strncpy**: This function copies n characters from the string src to the string dest and returns dest. It is prototyped as follows:
```c
char *my_strncpy(char *dest, char *src, int n);
```

**my_revstr(char *str)**: This function allows you to reverse a string.
It is prototyped as follows: 
```c
char *my_revstr(char *str);
```

**my_strcat**: This function allows you to search for a substring in a string. It is prototyped as follows:
```c
char *my_strstr(char *str, char *to_find);
```

**my_strcmp**: This function compares two strings. It returns 0 when the two strings are equal, a negative number if s1 is less than s2 and positive if s1 is greater than s2.
It is prototyped as follows: 
```c
int my_strcmp(char const *s1, char const *s2);
```

**my_strncmp**: This function compares the first n characters of two strings passed as parameters. It is prototyped as follows:
```c
int my_strncmp(char const *s1, char const *s2, int n);
```

**my_strupcase**: This function capitalizes all characters in the string passed as a parameter and returns the string. It is prototyped as follows: 
```c
char *my_strupcase(char *str);
```

**my_strlowcase**: This function lowercases all characters in the string passed as a parameter and returns the string. It is prototyped as follows:
```c
char *my_strlowcase(char *str);
```

**my_str_isalpha**: This function returns 1 if the string passed as parameter contains any alphabetic characters and 0 otherwise. It is prototyped as follows:
```c
int my_str_isalpha(char const *str);
```

**my_str_isnum**: This function returns 1 if the string passed as parameter contains only numeric characters and 0 otherwise. It is prototyped as follows:
```c
int my_str_isnum(char const *str);
```
**my_str_islower**: This function returns 1 if the string passed as parameter contains only lowercase alphabetic characters and 0 otherwise. It is prototyped as follows:
```c
int my_str_islower(char const *str);
```

**my_str_isupper**: This function returns 1 if the string passed as parameter contains only uppercase alphabetic characters and 0 otherwise. It is prototyped as follows:
```c
int my_str_isupper(char const *str);
```
**my_str_isprintable**: This function returns 1 if the string passed as parameter contains only display characters and 0 otherwise. It is prototyped as follows:
```c
int my_str_isprintable(char const *str);
```

**my_putnbr_base**: This function converts and displays the number passed as a parameter in a given base. It is prototyped as follows:
```c
int my_putnbr_base(int nbr, char *cont base);
```

**my_getnbr_base**: This function allows you to convert a number into a given base. The difference this time is that the number is represented by a string.
The function is prototyped as follows:
```c
int my_getnbr_base(char *nbr, char *base);
```