/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:46:59 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/18 08:20:42 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	char *p;

	p = str;
	while (*p)
	{
		write(1, p, 1);
		p++;
	}
}

#include <unistd.h>

int main()
{
	char str[] = "what's the story, morning glory";
	ft_putstr(str);
	return (0);
}
