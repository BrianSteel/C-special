//search function takes in two arguments.
//int n is the number or something that we are looking for.
//node *list is the pass or showing of a linked list here named list and node * is just a pointer to that list. the list is not yet given here.
bool seach(int n, node *list)
{

    // this is to introduce a temporary variable ptr to the start of the list so that we can refer to some variable so we can code to find n.
    //variable ptr. node * allows also ptr to store the map of the list rather than being just a normal variable.
    node *ptr = list;
    while (ptr!= NULL)  //NULL is the special sentinel value that means the end of the list.
                        // there could be a situation whr there is no list, so just doing a sanity check and if the case is NULL then this says dont proceed any further.
    {
        if (ptr->n== n)//ptr-> means that variable pointer needs to access the list so that it can check n is equal to n. its much like ptr.n but here is the map to something so we cant use the fullstop(.)
        {               //arrow just gives direction. from one node to the next. X -> Y for instance.
            return true;
        }
        ptr= ptr->next; //no else is there because it might check the first element of the list and see it might be equal to n, if not it will directly return false without checking the next.
                        //therefore ptr = prt->next means to enter the list and checking the next value and checking the while loop again and again until it find the n or else eventually return false!
    }
        return false;
}