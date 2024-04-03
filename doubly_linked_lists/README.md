# doubly_linked_lists
Project in C to learn how to create and use a doubly-linked list, how to allocate and free memory

`lists.h` is used in most projects. It contains the definition of the doubly linked list struct `dlistint_s` and all the fonctions created in the tasks.
## 0-print_dlistint.c - Print list
Function that prints all the elements of a dlistint_t list.
- Prototype: `size_t print_dlistint(const dlistint_t *h);`
- Return: the number of nodes
## 1-dlistint_len.c - List length
Function that returns the number of elements in a linked dlistint_t list.
- Prototype: `size_t dlistint_len(const dlistint_t *h);`
- Return: the number of nodes
## 2-add_dnodeint.c - Add node
Function that adds a new node at the beginning of a dlistint_t list.
- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
## 3-add_dnodeint_end.c - Add node at the end
Function that adds a new node at the end of a dlistint_t list.
- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
- Return: the address of the new element, or `NULL` if it failed
## 4-free_dlistint.c - Free list
Function that frees a dlistint_t list.
- Prototype: `void free_dlistint(dlistint_t *head);`
## 5-get_dnodeint.c - Get node at index
Function that returns the nth node of a dlistint_t linked list.
- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
- `index` is the index of the node, starting from 0
- Returns: the address of the node at index, or `NULL` if it does not exists
## 6-sum_dlistint.c - Sum list
Function that returns the sum of all the data (n) of a dlistint_t linked list.
- Prototype: `int sum_dlistint(dlistint_t *head);`
## 7-insert_dnodeint.c - Insert at index
Function that inserts a new node at a given position.
- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`
- `idx` is the index of the list where the new node should be added. Index starts at 0
- Returns: the address of the new node, or NULL if it failed
## 8-delete_dnodeint.c - Delete at index
Function that deletes the node at index index of a dlistint_t linked list.
- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
- `index` is the index of the node that should be deleted. Index starts at 0
- Returns: `1` if it succeeded, `-1` if it failed
## 100-password - Crackme4
Password for [crackme4](https://github.com/hs-hq/0x17.c).

Obtained by decompiling the byte-compiled with [uncompyle6](https://pypi.org/project/uncompyle6/)
## 102-main.c - Palindromes
Program that finds the largest palindrome made from the product of two 3-digit numbers.
- Result is printed to the console and outputted to the file `102-result`
## 103-keygen.c - crackme5
Keygen for [crackme5](https://github.com/hs-hq/0x17.c).
Usage:
```bash
$ gcc -Wall -pedantic -Werror -Wextra 103-keygen.c -o keygen5
$ ./crackme5 julien `./keygen5 julien`
```
