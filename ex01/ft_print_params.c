/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:06:32 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/09 12:29:41 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str);

/* argc is at least 1 as it includes the name of the programm
*/
int	main(int argc, char **argv)
{
	int	size;
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		size = str_len(argv[counter]);
		write(1, argv[counter], size);
		write(1, "\n", 1);
		counter++;
	}
	return (0);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
