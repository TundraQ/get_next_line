/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 21:07:15 by azane             #+#    #+#             */
/*   Updated: 2021/12/24 21:07:18 by azane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
int		end_line(const char *buf);
char	*get_before(const char *buf);
char	*get_after(char *buf);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
void	ft_strlcpy(char *dst, const char *src);
void	ft_strlcat(char *dst, const char *src);

#endif
