#ifndef LIST_H
#define LIST_H
typedef struct listint_s
{
  int n;
  struct listint_s *next;
} listint_t;
int _putchar(char c);
#endif