void pop()
{
int item;
struct node *pointer;
if (temp == NULL)
{
printf("Stack Underflow\n");
}
else
{
item = temp -> data;
pointer = temp;
temp = temp -> next;
free(pointer);
printf("The deleted item is %d\n",item);
}
}