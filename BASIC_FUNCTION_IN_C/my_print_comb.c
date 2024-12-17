void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_comb(void)
{
    int i = 0, j = 1, k = 2;

    while (i <= 7) {
        while (j <= 8) {
            while (k <= 9) {
                my_putchar(i + 48);
                my_putchar(j + 48);
                my_putchar(k + 48);
                if (i != 7 || j != 8 || k != 9) {
                    my_putchar(',');
                    my_putchar(' ');
                }
                k = k + 1;
            }
            j = j + 1;
            k = j + 1;
        }
        i = i + 1;
        j = i + 1;
        k = j + 1;
    } my_putchar('\n');
}