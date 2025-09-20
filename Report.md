# Project 2 Report

Answer the following prompts directly in this file:
* Information about your dataset (you will be assigned a different grader for this project)

My Dataset is a bunch of data from fitbit users. It measures the user ID, the Date of data, Steps, Calories Burned, Minutes Asleep, and Heart Beat Rate
* The time complexities of each method in the Stack and Queue classes

Stack: 
Push: O(1), Pop: O(1), Search: O(N), Print: O(N)

Queue: Enqueue: O(1), Dequeue: O(1), Search O(N), Print O(N)

The adding/removing functionality is always constant, because its only doing 1 operation, and it doesn't have to iterate over anything. 

The search and prints for both are linear, because they have to iterate over the size of the structure. The larger the structure, the longer this will take. 
* Justify your use of pointers in the Queue (i.e. the direction of the arrows between the Nodes) as it relates to the complexity of the enqueue and dequeue methods

The pointers point from the front of the Queue to the back. The last item always points to null ptr. This makes the time less complex because if you store the pointer of the last term, 
then whenever you add a new term you can just 'insert it' where the previous last item was. 
The complexity for both enqueue and dequeue is constant, there is one pointer that stores the node at the top of queue, 
and node at the end, while this is 'twice as many' as a stack, it means nothing has to be iterated to enqueue/dequeue.

* An explanation of when and why the 10 objects in the main function changed their order

They switched directions they were printed in because a Queue returns items in reverse, relative to how a stack does.
Stack is LIFO, Queue is FIFO, so we expect them to switch directions. 