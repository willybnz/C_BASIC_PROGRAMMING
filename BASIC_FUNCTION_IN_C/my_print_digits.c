void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_digits(void)
{
    char digit = '0';

    while (digit <= '9') {
        my_putchar(digit);
        digit = digit + 1;
    }
}