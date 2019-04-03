/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 16:07:29 by vrossi            #+#    #+#             */
/*   Updated: 2019/04/02 17:02:30 by vrossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <libc.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*void	ft_putstr(char str[])
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}*/

//void	ft_is_negative(int	n);
//void	ft_ft(int *nbr);
//void	ft_swap(int *a, int *b);
//void	ft_div_mod(int a, int b, int *div, int *mod);
//int		ft_iterative_factorial(int n);
//int		ft_recursive_factorial(int n);
//int		ft_sqrt(int nb);
//void	ft_putstr(char *str);
//int		ft_strlen(char *str);
//int		ft_strcmp(char *s1, char *s2);
//char	*ft_strdup(char *src);
int		*ft_range(int min, int max);

int		main(void)
{
	//ft_is_negative(+699);
	
	/*int		n = 55;
	ft_ft(&n);
	printf("%d",n);*/

	/*int		a = 1;
	int		b = 2;
	ft_swap(&a, &b);
	printf("a = %d \n", a);
	printf("b = %d", b);*/

	/*int		a = 50;
	int		b = 3;
	int		div;
	int		mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div = %d \n", div);
	printf("mod = %d", mod);*/

	//printf("%d \n",ft_iterative_factorial(-1));

	//printf("%d \n",ft_recursive_factorial(4));

	/*int		s = 25;
	printf("sqrt(%d) = %d \n", s, ft_sqrt(s));*/

	/*char str[] = "coucou";
	ft_putstr(str);*/

	/*char str[] = "12345678";
	printf("length = %d \n", ft_strlen(str));*/

	/*char s1[] = "a";
	char s2[] = "e";
	printf("my strcmp = %d \n", ft_strcmp(s1, s2));
	printf("strcmp = %d \n", strcmp(s1, s2));*/

	/*char	*src = "bistouflex m      aa";
	
	printf("my strdup = %s\n", ft_strdup(src));
	printf("strdup = %s\n",strdup(src));*/
	
	int		i;
	int		*range;
	int		min;
	int		max;

	min = 5;
	max = 20;
		printf("min=%d, max=%d, range=", min, max);
		range = ft_range(min, max);
		if (range)
		{
			printf("{");
			i = -1;
			while (++i < max - min)
			{
				printf("%d", range[i]);
				if (i < max - min - 1)
					printf(", ");
			}
			printf("}\n");
		}
		else
			printf("(null)\n");

		return (0);
}
