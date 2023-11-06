/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:24:51 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/14 17:31:17 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_c;
	unsigned int	dest_c;
	unsigned int	dest_len;
	unsigned int	src_len;

	src_c = 0;
	dest_c = ft_strlen(dest);
	dest_len = dest_c;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[src_c] != '\0' && src_c < size - dest_len - 1)
	{
		dest[dest_c] = src[src_c];
		src_c++;
		dest_c++;
	}
	dest[dest_c] = '\0';
	return (dest_len + src_len);
}
