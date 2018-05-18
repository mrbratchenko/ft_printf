/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbratche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 20:22:52 by sbratche          #+#    #+#             */
/*   Updated: 2017/10/30 20:22:56 by sbratche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(s1);
	while (s2[j] != '\0')
	{
		*(s1 + i) = *(s2 + j);
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
