# C - 0x1A-hash_tables
# Description
list of task i will solve 
task 0 -->Write a function that creates a hash table.
     *Prototype: hash_table_t *hash_table_create(unsigned long int size);
     *Returns a pointer to the newly created hash table
     *If something went wrong, your function should return NULL
task 1 -->Write a hash function implementing the djb2 algorithm.
     *Prototype: unsigned long int hash_djb2(const unsigned char *str);
     *You are allowed to copy and paste the function from this page
task 2 -->Write a function that gives you the index of a key.
     *Prototype: unsigned long int key_index(const unsigned char *key, unsigned long int size);
     *This function should use the hash_djb2 function that you wrote earlier
     *Returns the index at which the key/value pair should be stored in the array of the hash table
     *You will have to use this hash function for all the next tasks
task 3 -->Write a function that adds an element to the hash table.
     *Prototype: int hash_table_set(hash_table_t *ht, const char *key, const char *value);
        *Where ht is the hash table you want to add or update the key/value to
        *key is the key. key can not be an empty string
        *and value is the value associated with the key. value must be duplicated. value can be an empty string
     *Returns: 1 if it succeeded, 0 otherwise
     *In case of collision, add the new node at the beginning of the list
task 4 -->Write a function that retrieves a value associated with a key.
     *Prototype: char *hash_table_get(const hash_table_t *ht, const char *key);
        *where ht is the hash table you want to look into
        *and key is the key you are looking for
     *Returns the value associated with the element, or NULL if key couldn’t be found
task 5 -->Write a function that prints a hash table.
     *Prototype: void hash_table_print(const hash_table_t *ht);
        *where ht is the hash table
     *You should print the key/value in the order that they appear in the array of hash table
        *Order: array, list
     *Format: see example
     *If ht is NULL, don’t print anything
task 6 -->Write a function that deletes a hash table.
     *Prototype: void hash_table_delete(hash_table_t *ht);
        *where ht is the hash table
task 7 -->

# Environment

*OS:__ Ubuntu 22.04 LTS
*Compiler:__ gcc 4.8.4 (C90)
*Language:__ C

Primary Concepts Learned

* What is a hash function
* What makes a good hash function
* What is a hash table, how do they work and how to use them
* What is a collision and what are the main ways of dealing with collisions in
  the context of a hash table
* What are the advantages and drawbacks of using hash tables
* What are the most common use cases of hash tables


