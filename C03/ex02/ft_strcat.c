/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:02:46 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/14 16:10:26 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_c;
	int	src_c;

	dest_c = 0;
	while (dest[dest_c])
	{
		dest_c++;
	}
	src_c = 0;
	while (src[src_c])
	{
		dest[dest_c] = src[src_c];
		dest_c++;
		src_c++;
	}
	dest[dest_c] = '\0';
	return (dest);
}	
