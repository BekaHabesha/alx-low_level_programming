<H1 align="center", height="1500"> <ins> README.md File </ins> </H1>
<H1 align="center", height="1500"> <ins> 0x17. C - Doubly linked lists README.md File</ins> </H1>

![Beki Habesha.]( https://i.ibb.co/P9smtGh/Alx-logo-0x17-C-Doubly-linked-lists.jpg)

##

* File_name: <ins>**README.md file**</ins>
* Created: <ins>**On November 9, 2023**</ins>
* Author: <ins>***Bereket Dereje Mekonnen***</ins>
* Project: <ins>**0x17. C - Doubly linked lists**</ins>
* GitHub repository: <ins>**alx-low_level_programming**</ins>
* Directory: <ins>**0x17-doubly_linked_lists**</ins>
* Project Tasks: <ins>**Mandatory and Advanced**</ins>
* Tasks in number: <ins>**12 Tasks (9-Mandatory & 3Advanced)**</ins>
* Mandatory_Tasks: <ins>**From Task 0 to 8**</ins>
* Advanced_Tasks: <ins>**From Task 9 to 11**</ins>

##

<h1 align="center"> 0x17. C - Doubly linked lists Project <br> Prototype Lists Table </h1>

| Task NO. | Title | File | Prototype |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   | MANDATORY TASKS |  |  |
|   |   |   |   |
|   |   |   |  |
| 0 | Print list | 0-print_dlistint.c | size_t print_dlistint(const dlistint_t *h); |
| 1 | List length | 1-dlistint_len.c | size_t dlistint_len(const dlistint_t *h); |
| 2 | Add node | 2-add_dnodeint.c | dlistint_t *add_dnodeint(dlistint_t **head, const int n); |
| 3 | Add node at the end | 3-add_dnodeint_end.c | dlistint_t *add_dnodeint_end(dlistint_t **head, const int n); |
| 4 | Free list | 4-free_dlistint.c | void free_dlistint(dlistint_t *head); |
| 5 | Get node at index | 5-get_dnodeint.c | dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index); |
| 6 | Sum list | 6-sum_dlistint.c | int sum_dlistint(dlistint_t *head); |
| 7 | Insert at index | 7-insert_dnodeint.c | dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n); |
| 8 | Delete at index | 8-delete_dnodeint.c | int delete_dnodeint_at_index(dlistint_t **head, unsigned int index); |
|   |   |   |   |
|  |   |   |  |
|  | ADVANCED TASKS |  |  |
|  |   |   |  |
|  |   |   |  |
| 9 | Crackme4 | 100-password |  |
| 10 | Crackme5 | 101-square_matrix_map.py | def square_matrix_map(matrix=[]): |
| 11 | Crackme5 | 103-keygen.c |  |
|  |  | Usageof crackme: | ./crackme5 username key |
|  |  | Usageof keygen: | ./keygen5 username |


##
![BekaHabesha.]( https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png)

### **PROJECT_TITLE:**
<h2 align="center"> <ins>0x17. C - Doubly linked lists</ins> </h2>

### **GITHUB_REPOSITORY:**
<h2 align="center"> <ins>alx-low_level_programming</ins> </h2>

### **DIRECTORY:**
<h2 align="center"> <ins>0x17-doubly_linked_lists</ins> </h2>

##

<h1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</h1> </ins>

<h1 align="center">MANDATORY_TASKS (From Task 0 to 8)</h1>

## **No. 0. Print list**
  * <ins>**0-print_dlistint.c**</ins>
    * <ins>**Write a function that prints all the elements of a dlistint_t list..**</ins>
      * <ins>Prototype</ins>:
        * "**size_t print_dlistint(const dlistint_t *h);**"
      * <ins>Return</ins>:
        * **the number of nodes**

##

## **No. 1. List length**
  * <ins>**1-dlistint_len.c**</ins>
    * <ins>**Write a function that returns the number of elements in a linked dlistint_t list.**</ins>
      * <ins>Prototype</ins>:
        * "**size_t dlistint_len(const dlistint_t *h);**"

##

## **No. 2. Add node**
  * <ins>**2-add_dnodeint.c**</ins>
    * <ins>**Write a function that adds a new node at the beginning of a dlistint_t list.**</ins>
      * <ins>Prototype</ins>:
        * "**dlistint_t *add_dnodeint(dlistint_t **head, const int n);**"
      * <ins>Return</ins>:
        * **the address of the new element,** or
        * **NULL if it failed**

##

## **No. 3. Add node at the end**
  * <ins>**3-add_dnodeint_end.c**</ins>
    * <ins>**Write a function that adds a new node at the end of a dlistint_t list.**</ins>
      * <ins>Prototype</ins>:
        * "**dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);**"
      * <ins>Return</ins>:
        * **the address of the new element,** or
        * **NULL if it failed**

##

## **No. 4. Free list**
  * <ins>**4-free_dlistint.c**</ins>
    * <ins>**Write a function that frees a dlistint_t list.**</ins>
      * <ins>Prototype</ins>:
        * "**void free_dlistint(dlistint_t *head);**"

##

## **No. 5. Get node at index**
  * <ins>**5-get_dnodeint.c**</ins>
    * <ins>**Write a function that returns the nth node of a dlistint_t linked list.**</ins>
      * <ins>Prototype</ins>:
        * "**dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);**"
      * where **index** is the index of the node,
        * starting from **0**
      * if the node does not exist,
        * return **NULL**

##

## **No. 6. Sum list**
  * <ins>**6-sum_dlistint.c**</ins>
    * <ins>**Write a function that returns the sum of all the data (n) of a dlistint_t linked list.**</ins>
      * <ins>Prototype</ins>:
        * "**int sum_dlistint(dlistint_t *head);**"
      * if the list is empty,
        * return **0**

##

## **No. 7. Insert at index**
  * <ins>**7-insert_dnodeint.c, 2-add_dnodeint.c, 3-add_dnodeint_end.c**</ins>
    * <ins>**Write a function that inserts a new node at a given position.**</ins>
      * <ins>Prototype</ins>:
        * "**dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);**"
      * where **index** is the index of the list where the new node should be added.
        * Index starts at **0**
      * <ins>Returns</ins>:
        * **the address of the new node,** or
        * **NULL if it failed**
      * if it is not possible to add the new node at index **idx**,
        * do not add the new node and 
        * return **NULL**

  * Your files **2-add_dnodeint.c** and **3-add_dnodeint_end.c** <br> will be compiled during the correction

##

## **No. 8. Delete at index**
  * <ins>**8-delete_dnodeint.c**</ins>
    * <ins>**Write a function that deletes the node at index index of a dlistint_t linked list.**</ins>
      * <ins>Prototype</ins>:
        * "**int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);**"
      * where **index** is the index of the node that should be deleted.
        * Index starts at **0**
      * <ins>Returns</ins>:
        * **1** if it succeeded,
        * **-1** if it failed

#

<h1 align="center"> ADVANCED_TASKS (From Task 9 to 11)</h1>

## **No. 9. Crackme4**
  * <ins>**100-password**</ins>
    * <ins>**Find the password for crackme4.**</ins>
      * Save the password in the file <ins>**100-password**</ins>:
      * Your file should contain:
        * **the exact password,** 
        * **no new line,** 
        * **no extra space**
      * <ins>**Hint**</ins>:
        * **The program prints “OK” when the password is correct**

##

## **No. 10. Palindromes**
  * <ins>**102-result**</ins>

  * <ins>**A palindromic number reads the same both ways. **</ins>
      * The largest palindrome made from the product of two 2-digit numbers is <ins>**9009**</ins>:
        * **9009 = 91 × 99.**

    * Find the largest palindrome made from the product of two 3-digit numbers.
      * Save the result in the file **102-result**
      * Your file should contain:
        * **the exact result,** 
        * **no new line,** 
        * **no extra space**

##

## **No. 11. crackme5**
  * <ins>**103-keygen.c**</ins>

    * <ins>**Write a keygen for crackme5.**</ins>
      * <ins>Usage of the crackme</ins>:
        * **./crackme5 username key**
      * <ins>The crackme will segfault</ins>:
        * **if you do not enter the correct key for the user**
      * <ins>Usage for your keygen</ins>:
        * **./keygen5 username**
      * Your keygen should print
        * a valid key for the **username**


##
