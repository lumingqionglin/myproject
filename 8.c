#include <stdio.h>
#include <stdlib.h>
/* TODO:定义链表结点类型Node*/
typedef struct Node {
  int num;
  struct Node *next;
} Node;
/* TODO:完成函数construct list，从键盘读入链表内容、构建链表并返回链表头指针。
 */
struct Node *construct_list() {
  Node *head = NULL, *tail = NULL;
  while (1) {
    Node *p = (Node *)malloc(sizeof(Node));
    if (p == NULL) {
      exit(1);
    }
    p->next = NULL;
    scanf(" %d", &p->num);
    if (p->num == -1) {
      free(p);
      break;
    } else {
      if (tail == NULL) {
        tail = p;
        tail->next = NULL;
      } else {
        p->next = tail;
        head = p;
        tail = p;
      }
    }
  }
  return head;
}

/* TODO：完成函数reverse_output，逆序输出链表的内容。内容之间以空格分隔。 */
void reverse_output(struct Node *head) {
  Node *p = head;
  while (p != NULL) {
    printf("%d ", p->num);
    p = p->next;
  }
}
int main() {
  Node *head = NULL;
  head = construct_list();
  reverse_output(head);
  return 0;
}