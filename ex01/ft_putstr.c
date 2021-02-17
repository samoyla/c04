/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msamoile <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 15:46:59 by msamoile          #+#    #+#             */
/*   Updated: 2021/02/17 16:46:41 by msamoile         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
	str = "hello";
	ft_putstr(p);
	return (0);
}
