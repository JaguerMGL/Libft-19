/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:28:56 by marvin            #+#    #+#             */
/*   Updated: 2023/10/20 13:08:29 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_complete(size_t len, unsigned int i, int n, char *str)
{
	while (len > i)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--; 
	}
}

static size_t	ft_nbrlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}

static char	*ft_min(void)
{
	char	*str;

	str = ft_calloc(12, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, "-2147483648", 12);
	return (str);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	if (n == -2147483648)
		return (ft_min());
	len = ft_nbrlen(n);
	i = 0;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		i = 1;
		n = -n;
	}
	ft_complete(len, i, n, str);
	str[len] = '\0';
	return (str);
}
