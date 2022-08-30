/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yerkiral <yerkiral@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 02:07:56 by yerkiral          #+#    #+#             */
/*   Updated: 2021/12/04 16:40:48 by yerkiral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	size;	

	size = ft_get_length(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i + size] = (unsigned char)src[i];
		i++;
	}
	dest[i + size] = '\0';
	return (dest);
}
