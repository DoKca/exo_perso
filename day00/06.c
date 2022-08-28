#include <unistd.h>

void ft_print_comb2(void)
{
    char one;
	char two;

	char a;
	char b;
	char c;
    char d;

	one = 0;

	while (one <= 99)
	{
        two = one + 1;
		while (two <= 99)
		{
            a = one/10+'0';
            b = one%10+'0';
            c = two/10+'0';
            d = two%10+'0';

            write(1, &a, 1);
			write(1, &b, 1);
            write(1, " ", 1);
			write(1, &c, 1);
            write(1, &d, 1);
            if(one != 98)
            {
                write(1, ", ", 2);
            }
            

			two++;
		}
		one++;
	}
	
}