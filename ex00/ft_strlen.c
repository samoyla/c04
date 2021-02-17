/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:29:39 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/17 15:45:43 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <unistd.h>

int	main()
{
	char chaine[] = "youpi mercerdi";

	printf("%d\n", ft_strlen(chaine));
	return (0);
}
