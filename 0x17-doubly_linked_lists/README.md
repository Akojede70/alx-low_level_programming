## 0x17. C - Doubly linked lists


**0-print_dlistint.c:** Writing a function that prints all the elements of a dlistint_t list.
Prototype: size_t print_dlistint(const dlistint_t *h);
Return: the number of nodes.
Format: see example.


**1-dlistint_len.c:** Writing a function that returns the number of elements in a linked dlistint_t list.
Prototype: size_t dlistint_len(const dlistint_t *h);


**2-add_dnodeint.c:** Writing a function that adds a new node at the beginning of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed.


**3-add_dnodeint_end.c:** Writing a function that adds a new node at the end of a dlistint_t list.
Prototype: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
Return: the address of the new element, or NULL if it failed.


**4-free_dlistint.c:** Writing a function that frees a dlistint_t list.
Prototype: void free_dlistint(dlistint_t *head);


**5-get_dnodeint.c:** Writing a function that returns the nth node of a dlistint_t linked list.
Prototype: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
where index is the index of the node, starting from 0.
if the node does not exist, return NULL.


**6-sum_dlistint.c:** Writing a function that returns the sum of all the data (n) of a dlistint_t linked list.
Prototype: int sum_dlistint(dlistint_t *head);
if the list is empty, return 0.


**7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c:** Writing a function that inserts a new node at a given position.
Prototype: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
where idx is the index of the list where the new node should be added. Index starts at 0.
Returns: the address of the new node, or NULL if it failed.
if it is not possible to add the new node at index idx, do not add the new node and return NULL.

Your files 2-add_dnodeint.c and 3-add_dnodeint_end.c will be compiled during the correction.


**8-delete_dnodeint.c:** Writing a function that deletes the node at index index of a dlistint_t linked list.
Prototype: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0.
Returns: 1 if it succeeded, -1 if it failed.


**100-password:** Finding the password for crackme4.
Save the password in the file 100-password.
Your file should contain the exact password, no new line, no extra space.
Hint: The program prints “OK” when the password is correct.


**102-result:** A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
Save the result in the file 102-result.
Your file should contain the exact result, no new line, no extra space.


**103-keygen.c:** Writing a keygen for crackme5.
Usage of the crackme: ./crackme5 username key.
The crackme will segfault if you do not enter the correct key for the user.
Usage for your keygen: ./keygen5 username.
Your keygen should print a valid key for the username.
