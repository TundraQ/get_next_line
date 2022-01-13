/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:06:43 by azane             #+#    #+#             */
/*   Updated: 2021/12/24 21:07:06 by azane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
int		end_line(const char *buf);
char	*get_before(const char *buf);
char	*get_after(char *buf);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strlcpy(char *dst, const char *src);
void	ft_strlcat(char *dst, const char *src);

#endif
