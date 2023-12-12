void push ()
{
int data;
struct node *pointer = (struct node*)malloc(sizeof(struct node));
if(pointer == NULL)
{
printf("Stack overflow");
}
else
{
printf("Enter the element to be inserted: ");
scanf("%d",&data);
if(temp == NULL)
{
pointer -> data = data;
pointer -> next = NULL;
temp = pointer;
}
else
{
pointer -> data = data;
pointer -> next = temp;
temp = pointer;
}
}
}