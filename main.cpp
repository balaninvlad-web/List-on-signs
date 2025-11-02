#include "list_on_signs_func.h"

int main ()
{
    LinkedList* list = ListCtor();

    Node* node1 = InsertNode(list, NULL, 10);

    Node* node2 = InsertNode(list, node1, 20);

    Node* node3 = InsertNode(list, NULL, 30);

    PrintList(list);

    DeleteNode (list, node1);

    PrintList(list);

    DeleteNode (list, list->head);

    PrintList(list);

    DeleteNode (list, list->tail);

    PrintList(list);

    ListDtor(list);
}
