/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkardes <mkardes@student.42kocaeli.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 18:03:30 by mkardes           #+#    #+#             */
/*   Updated: 2022/02/04 19:00:32 by mkardes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_wthnchar(const char *s1, char a)
{
	char	*str;
	int		i;
	int		t;
	int		g;
	size_t	len;

	i = 0;
	g = 0;
	while (s1[i] != '\0')
		if (s1[i++] == a)
			g++;
		i++;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - g));
	i = 0;
	t = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != a)
			str[t++] = s1[i];
		i++;
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *s2)
{
	int		i;
	char	*str;

	i = 0;
	str = ft_strdup(s1);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		str = ft_wthnchar(str, s2[i++]);
	}
	return (str);
}




























int	ft_setcheck(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim1(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		i;

	i = 0;
	start = 0;
	if (s1 == 0 || set == 0)
		return (0);
	end = (int)ft_strlen(s1);
	while (s1[start] && ft_setcheck(s1[start], set))
		start++;
	while (end > start && ft_setcheck(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (0);
	while (start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

int	main()
{
	char	a[] = "  Mükemmelliyetçilikten  ";
	char	b[] = "Mükemmten";

	printf("%s\n",ft_strtrim1(a,b));
	printf("%s",ft_strtrim(a,b));
}
