/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buonturk <buonturk@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:53:16 by buonturk          #+#    #+#             */
/*   Updated: 2023/02/14 17:59:36 by buonturk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	s_c;
	int	f_c;

	s_c = 0;
	f_c = 0;
	if (to_find[f_c] == '\0')
		return (str);
	while (str[s_c])
	{
		while (str[s_c + f_c] == to_find[f_c] && str[s_c + f_c])
			f_c++;
		if (to_find[f_c] == '\0')
			return (str + s_c);
		s_c++;
		f_c = 0;
	}
	return (0);
}
