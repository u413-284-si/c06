/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sqiu <sqiu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:06:32 by sqiu              #+#    #+#             */
/*   Updated: 2022/09/15 18:28:16 by sqiu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_len(char *str);
void	print(int argc, char **argv);
int		ft_strcmp(char *s1, char *s2);

/* argc is at least 1 as it includes the name of the programm
*/
int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	print(argc, argv);
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

void	print(int argc, char **argv)
{
	int	counter;

	counter = 1;
	while (counter < argc)
	{
		write(1, argv[counter], str_len(argv[counter]));
		write(1, "\n", 1);
		counter++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] || s2[i]) && diff == 0)
	{
		if (s1[i] != s2[i])
			diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
