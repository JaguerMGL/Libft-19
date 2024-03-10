/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:25:13 by marvin            #+#    #+#             */
/*   Updated: 2023/10/19 10:54:22 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	n;

	if (!s || !f)
		return (NULL);
	n = ft_strlen(s);
	str = ft_calloc(n + 1, sizeof(*str));
	if (!str)
		return (NULL);
	while (n--)
		str[n] = f(n, s[n]);
	return (str);
}
