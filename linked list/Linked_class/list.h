
#ifndef LIST_H KNOWN
#define LIST_H KNOWN

class List
{
   private:

        struct node
        {
            int data;
            node* next;
        };

        node* curr;
        node* t;
        node* h;

   public:
       List();
       void addNode(int addData);
       void deleteNode(int delData);
       void printList();
};

#endif // LIST_H
