LNode * GetElem(LinkList L,int i)
{
    int j=1;
    LNode *p=L->next;
    if (i==0)
    {
        return L;
    }
    if (i<1)
    {
        return NULL;
    }
    while (p!=NULL && j<i)
    {
        p=p->next;
        j++;
    }
    return p;
}