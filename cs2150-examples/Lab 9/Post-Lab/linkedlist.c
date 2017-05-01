//Robert Alexander, RMA3MZ, linkedlist.c

#include <stdio.h>
#include <stdlib.h>

struct List{
  struct list_item *head;};

struct list_item{
  int value;
  struct list_item *prev, *next;};
    
int main(){
  int size;
  printf("Enter number of values: ");
  scanf("%d", &size);
  struct List *list1=(struct List*) malloc(sizeof(struct List));
  list1->head=(struct list_item*) malloc(sizeof(struct list_item));
  list1->head->value=0;
  struct list_item *tempNode=list1->head;

  for(int i=0;i<size;i++){
    int temp;
    printf("Enter value %d: ",i);
    scanf("%d", &temp);
    tempNode->next=(struct list_item*) malloc(sizeof(struct list_item));
    // struct list_item *tempNode2=tempNode->next;
    tempNode->value=temp;
    tempNode=tempNode->next;}

  struct list_item *curr=list1->head;

  for(int j=0;j<size;j++){
    printf("%d\n", curr->value);
    curr=curr->next;
  }

  free(list1);
  return 0;

}
