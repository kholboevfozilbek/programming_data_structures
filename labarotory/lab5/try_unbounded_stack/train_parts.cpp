
Stack::Stack(const Stack &o)
{
    node* walker = o.head;

    while(walker != nullptr)
    {
        insert_at_end(walker->data);
        walker = walker->next;
    }
}

insert_at_end(int value)
{
    node* n = new node(value);

    if (head == nullptr)
    {
        head = n;
        tail = n;
    }
    else
    {
        tail->next = n;
        tail = tail->next;
    }
    ++counter;

}
