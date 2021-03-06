/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mihykim <mihykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 15:27:55 by mihykim           #+#    #+#             */
/*   Updated: 2020/03/26 17:30:57 by mihykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H


#include <stdlib.h>

typedef struct		s_node
{
	void			*data;
	struct s_node	*next;
}					t_node;

typedef struct		s_queue
{
	unsigned int	size;
	t_node			*head;
	t_node			*tail;
}					t_queue;

t_queue	*queue_init(void);
t_node	*create_elem(void *data);
int     queue_push(t_queue *queue, void *data);
int     queue_size(t_queue *queue);
t_node	*queue_front(t_queue *queue);
t_node	*queue_pop(t_queue *queue);
void    queue_clear(t_queue *queue, void (*free_data)(void *));
void    free_queue(t_queue *queue, void (*free_data)(void *));


#endif
