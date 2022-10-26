typedef struct
{
   // int number[CAPACITY]; it is an array having a limit in memory that we can use as in having a certain CAPACITY. so we can use instead-


   int *number; // this gives us a pointer that we connect easily to other nodes to have infinite connections that we can make without boundary.


    int size; // this is the actual size of trays in the stack for instance.
}
stack;



//2ND TYPE NAME IS QUEUE.
typedef struct
{
    int front; // queue has to remember the front
    int number[CAPACITY]; // for again infinite we use points-// int *number;
    int size;
}
queue;
