
void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_swap(int *a, int *b)
{
    int stock = *a;
    *a = *b;
    *b = stock;
    return;
}
