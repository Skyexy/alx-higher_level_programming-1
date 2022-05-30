#include "lists.h"
/**
*check_cycle - check for a single list with cycle
*@list: pointer to the head of a list
*Return: 0 in case of no cycle and 1 for one with a cycle
*/
int check_cycle(listint_t *list)
{
listint_t *p2;
listint_t *prev;

p2 = list;
prev = list;
while (list && p2 && p2->next)
{
list = list->next;
p2 = p2->next->next;

if (list == p2)
{
list = prev;
prev = p2;
while (1)
{
p2 = prev;
while (p2->next != list && p2->next != prev)
{
p2 = p2->next;
}
if (p2->next == list)
break;

list = list->next;
}
return (1);
}
}

return (0);
}
