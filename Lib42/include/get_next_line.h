/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarval <flcarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:54:47 by flcarval          #+#    #+#             */
/*   Updated: 2022/04/01 19:21:30 by flcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFFER_SIZE 4096

//	get_next_line.c

char	*get_next_line(int fd);
char	*ft_read(int fd, char *stat);
char	*parse_line(char *str);
char	*clear_stat(char *stat);

//	get_next_line_utils.c

int		ft_strlen(char *str);
int		is_nl(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif
