/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktuncbil <ktuncbil@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:03:48 by ktuncbil          #+#    #+#             */
/*   Updated: 2022/02/23 22:02:13 by ktuncbil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	reverse(char *str, int length)
{
	int	start;
	int	end;

	start = 0;
	end = length - 1;
	while (start < end)
	{
		swap(*(str + start), *(str + end));
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char *num;

	if (n == 0)
	{
		num[0] = '0';
		num[1] = '\0';
	}
	
}
