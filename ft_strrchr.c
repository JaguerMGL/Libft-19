/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndessard <ndessard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:41:32 by ndessard          #+#    #+#             */
/*   Updated: 2023/10/20 12:39:47 by ndessard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*ptr;
	unsigned char	ch;

	ch = (unsigned char)c;
	ptr = (char *)s + ft_strlen(s);
	if (s)
		while (ptr >= s)
			if (*ptr-- == ch)
				return (ptr + 1);
	return (NULL);
}
