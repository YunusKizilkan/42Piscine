void ft_putchar(char c);

void write_col_row(int sutun, int satir, int i, int j)
{
    if( j == 1)
    {
        if( i == 1)
            ft_putchar('A');
        else if ( i == sutun)
            ft_putchar('A');
        else
            ft_putchar('B');
    }
    else if ( j == satir)
    {
        if( i == 1)
            ft_putchar('C');
        else if ( i == sutun)
            ft_putchar('C');
        else
            ft_putchar('B');
    }
    
    else
    {
        if(i == 1 || i == sutun) // i 1se yani sutunun başındaysa B veya i sutuna eşitse (bu son )
            ft_putchar('B');
        else
            ft_putchar(' ');
    }
}

void rush02(int sutun, int satir)
{
    int i;
    int j; 

    i = 1;
    j = 1;

    // Satırı while ile başlamamızın sebebi satırı yazdığımızda zaten sutunlar oluşur.
    while (satir >= j) // satira 3 değeri verdiğimizde 3 >= 1 olur ve j 4 olana kadar while çalışır
    {
        i = 1;
        while (sutun >= i) // sutuna 5 değer vediğimizde 5 >= 1 olur i 6 olana kadar while çalışır
        {
            write_col_row(sutun,satir,i,j); // metot çalışır
            i++; // i'yi sutun while'nın içinde arttırır whiledan çıkınca i gene 1e eşitlenir
        }
        ft_putchar('\n'); // alt satıra in
        j++; // satırı geçene kadar arttırır sonra whiledan çıkılır
        
    }
}