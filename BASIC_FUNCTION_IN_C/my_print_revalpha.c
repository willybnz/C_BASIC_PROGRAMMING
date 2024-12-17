void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_revalpha(void)
{
    char end = 'z';

    while (end >= 'a') {
        my_putchar(end);
        end = end - 1;
    }
}
