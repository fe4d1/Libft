#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*curr_node;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		curr_node = ft_lstnew(f(lst->content));
		if (!curr_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, curr_node);
		lst = lst->next;
	}
	return (new_list);
}
