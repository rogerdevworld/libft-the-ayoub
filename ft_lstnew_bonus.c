/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybelhaj <aybelhaj@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 19:01:03 by aybelhaj          #+#    #+#             */
/*   Updated: 2024/10/01 19:23:03 by aybelhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include "libft.h"
t_list *ft_lstnew(void *content)
{
	t_list *new;

	new =(t_list *) malloc(sizeof(t_list));
	if(!new)
		return (NULL);
	new->content = content; 
	new->next = NULL;
	return (new);
}
int main (void )
{
	t_list *hola;
	hola = ft_lstnew("afhgjkk");
	printf("%s",(char*)hola->content);
}
