
void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_alpha(void)
{
    char begin = 'a';

    while (begin <= 'z') {
        my_putchar(begin);
        begin = begin + 1;
    }
}
