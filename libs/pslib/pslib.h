/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pslib.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 17:52:56 by htrindad          #+#    #+#             */
/*   Updated: 2024/09/01 17:01:46 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PSLIB_H
# define PSLIB_H

# include <stdbool.h>
# include <limits.h>
# include <stdlib.h>

typedef struct s_track
{
	long			val;
	struct s_track	*prev;
	struct s_track	*next;
}	t_track;
long	ps_get_last(t_track *track);
t_track	*ps_tracknew(long content);
bool	ps_isnum(char c);
void	ps_addback(t_track *track, long val);

#endif
