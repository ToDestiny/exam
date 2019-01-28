/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acolas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 18:13:41 by acolas            #+#    #+#             */
/*   Updated: 2019/01/07 18:40:48 by acolas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(const char *str)
{
	int		len;

	len = 0;
	while(str[len])
		len++;
	return(len);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		len1;
	int		len2;

	i = 0;
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	while(len1 > 0 || len2 > 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
			len1--;
			len2--;
		}
		else
			return(((unsigned char)s1[i] - (unsigned char)s2[i]));
	}
	return(((unsigned char)s1[i] - (unsigned char)s2[i]));
}
