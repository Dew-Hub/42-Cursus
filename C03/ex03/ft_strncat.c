/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:10:29 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/14 19:00:05 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_c;
	unsigned int	src_c;

	dest_c = 0;
	src_c = 0;
	while (dest[dest_c] != '\0')
		dest_c++;
	while (src[src_c] != '\0' && src_c < nb)
	{
		dest[dest_c] = src[src_c];
		dest_c++;
		src_c++;
	}
	dest[dest_c] = '\0';
	return (dest);
}
