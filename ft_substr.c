/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htekeste <htekeste@student.abudhabi42.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 04:47:15 by htekeste          #+#    #+#             */
/*   Updated: 2023/01/08 13:59:36 by htekeste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	char	*sub;

	i = 0;
	str = (char *)s;
	if (len > ft_strlen(str) || start > ft_strlen(str))
		return (NULL);
	sub = (char *) malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (str[start] && i <= len)
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	return (sub);
}