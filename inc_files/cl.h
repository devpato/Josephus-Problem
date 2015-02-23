// Adds a new node after the cursor. 
// For the Josephus program, it is a new soldier,
// whose name comes in as the second argument. 

void *insert(void *cursor, void *name);

// Removes the node after the cursor.
void *release(void *cursor);

// Advances the cursor by one node.
void *advance(void *cursor);

// Prints the node pointed by cursor.
// For the Josephus program, the name of the soldier is printed. 
void print(void *cursor);
