#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)

{
  list->head = NULL;

}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}
void insert_after(slistEl *e,char c){
  slistEl *temp_next=e->next;
  slistEl *current = new slistEl;
  current->data=c;
  e->next=current;
  current->next=temp_next;
}
void printl(slist * list){
  cout<<"Moja lista: <";
   while(list->head!=NULL){
      cout<<list->head->data;
      list->head=list->head->next;
   }
   cout<<">";
}
