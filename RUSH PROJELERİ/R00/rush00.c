void ft_putchar(char c);

void write_col_row(int sutun, int satir, int i, int j)
{
    if (j == 1 || j == satir)
    {
        if (i == 1 || i == sutun)
            ft_putchar('o');
        else
            ft_putchar('-');
    }

    else
    {
        if (i == 1 || i == sutun)
            ft_putchar('|');
        else
            ft_putchar(' ');
    }
    
}

void rush00(int sutun, int satir)
{
    int i;
    int j;

    i = 1;
    j = 1;

    while (satir >= j)
    {
        i = 1;
        while (sutun >= i)
        {
            write_col_row(sutun,satir,i,j);
            i++;
        }
        ft_putchar('\n');
        j++;
    }
}