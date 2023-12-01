<H1 align="center", height="1500"> <ins> README.md File </ins> </H1>
<H1 align="center", height="1500"> <ins>0x1A. C - Hash tables README.md File</ins> </H1>

![BekaHabesha.]( https://i.ibb.co/wWRrMhz/0x1-A-C-Hash-tables-Alx-logo.png)

##

* File_name: <ins>**README.md file**</ins>
* Created: <ins>**On December 1, 2023**</ins>
* Author: <ins>***Bereket Dereje Mekonnen***</ins>
* Project: <ins>**0x1A. C - Hash tables**</ins>
* GitHub repository: <ins>**alx-low_level_programming**</ins>
* Directory: <ins>**0x1A-hash_tables**</ins>
* Project Tasks: <ins>**Mandatory and Advanced**</ins>
* Tasks in number: <ins>**8 Tasks (7-Mandatory & 1-Advanced)**</ins>
* Mandatory_Tasks: <ins>**From Task 0 to 6**</ins>
* Advanced_Tasks: <ins>**Task 7**</ins>

##

### **PROJECT_TITLE:**
<h2 align="center"> <ins>0x1A. C - Hash tables</ins> </h2>

### **GITHUB_REPOSITORY:**
<h2 align="center"> <ins>alx-low_level_programming</ins> </h2>

### **DIRECTORY:**
<h2 align="center"> <ins>0x1A-hash_tables</ins> </h2>

##

![C_programming_logo.]( https://img-c.udemycdn.com/course/750x422/700012_a499_9.jpg)

<h1> <ins>Header File</ins>:cd:</H1>

* [hash_tables.h](./hash_tables.h): is the **<ins>Header file containing definitions and prototypes**</ins> for **all types and functions written for the project.**

<h2> <ins>Data Structures:</ins>:heavy_check_mark:</H2>

![BekaHabesha.]( https://i.ibb.co/2s75FnM/more-info-0x1-A-C-Hash-tables-Alx-logo.png)

<h2> <ins>Function Prototypes:</ins>:heavy_check_mark:</H2>

| Task NO. | Title | File | Prototype |
| :----: | :----:| :---- | :---- |
|   |   |   |   |
|   |   |   |   |
|   | MANDATORY TASKS |  |  |
|   |   |   |   |
|   |   |   |  |
| 0 | >>> ht = {} | 0-hash_table_create.c | hash_table_t *hash_table_create(unsigned long int size); |
| 1 | djb2 | 1-djb2.c | def safe_print_integer(value): |
| 2 | key -> index | 2-key_index.c | unsigned long int key_index(const unsigned char *key, unsigned long int size); |
| 3 | >>> ht['betty'] = 'cool' | 3-hash_table_set.c | int hash_table_set(hash_table_t *ht, const char *key, const char *value); |
| 4 | >>> ht['betty'] | 4-hash_table_get.c | char *hash_table_get(const hash_table_t *ht, const char *key); |
| 5 | >>> print(ht) | 5-hash_table_print.c | void hash_table_print(const hash_table_t *ht); |
| 6 | >>> del ht | 6-hash_table_delete.c | void hash_table_delete(hash_table_t *ht); |
|   |   |   |   |
|  |   |   |  |
|  | ADVANCED TASKS |  |  |
|  |   |   |  |
|  |   |   |  |
| 7 | $ht['Betty'] = 'Cool' | 100-sorted_hash_table.c | shash_table_t *shash_table_create(unsigned long int size); |
|   |   |   | int shash_table_set(shash_table_t *ht, const char *key, const char *value); |
|   |   |   | char *shash_table_get(const shash_table_t *ht, const char *key); |
|   |   |   | void shash_table_print(const shash_table_t *ht); |
|   |   |   | void shash_table_print_rev(const shash_table_t *ht); |
|   |   |   | void shash_table_delete(shash_table_t *ht); |
|   |   |   |   |
|   |   |   |   |

##

![C_programming_logo.]( https://media.licdn.com/dms/image/D4D12AQGvWHFDSOhMCg/article-cover_image-shrink_600_2000/0/1679804058550?e=2147483647&v=beta&t=79sIbe7ddYz70rldXsyxVdBUfAn--qK6yeMmRY77ZQY)

<h1> <ins>Resources</ins>:floppy_disk:</H1>

### **Read or watch:**:heavy_check_mark:
* [What is a HashTable Data Structure - Introduction to Hash Tables , Part 0](https://intranet.alxswe.com/rltoken/IQVfdxJlS6jhAgcuUoCseg)
* [Hash function](https://intranet.alxswe.com/rltoken/ZKpRI_FxOxAz80Onpfy0Ew)
* [Hash table](https://intranet.alxswe.com/rltoken/mxjKpEfAw3E5B8S3inPuHQ)
* [All about hash tables](https://intranet.alxswe.com/rltoken/3RwwAqmpGJpMiBa7BE9fAQ)
* [why hash tables and not arrays](https://intranet.alxswe.com/rltoken/OgO7uga3PIaCTMtTzYCY3g)

![My alx. ]( https://img.freepik.com/premium-photo/abstract-modern-tech-programming-code-screen-developer-c-programming-language-computer-script-technology-background-software_505353-127.jpg?w=996)

###

<H1 align="center"><ins>Learning Objectives</ins>:floppy_disk:</H1>

* At the end of this project, You are expected to be able to [explain to anyone](https://intranet.alxswe.com/rltoken/fLjDjjaCL1oE-WJcDPpmFg), **Without the help of Google:**

![C_programming_logo.]( https://kennardconsole.files.wordpress.com/2018/03/c_programming_language.png)

#

<H2> <ins>General Learning Objectives</ins>:heavy_check_mark:</H2>

* What is a <ins>**hash function</ins>.**
* What makes a <ins>**good hash function</ins>.**
* What is a <ins>**hash table</ins>,** how do <ins>**they work</ins>** and how to <ins>**use them</ins>.**
* What is a <ins>**collision</ins>** and what are the <ins>**main ways</ins>** of dealing with  <ins>**collisions</ins>** in the context of a <ins>**hash table</ins>.**
* What are the <ins>**advantages</ins>** and <ins>**drawbacks</ins>** of using ins>**hash tables</ins>.**
* What are the **most common <ins>use cases</ins>** of <ins>**hash tables</ins>.**

![C_script_logo.]( https://img.freepik.com/premium-photo/abstract-modern-tech-programming-code-screen-developer-c-programming-language-computer-script-technology-background-software_505353-434.jpg?w=996)

###
<H2> <ins>Copyright - Plagiarism</ins>:heavy_check_mark:</H2>

* You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
* You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
* You are not allowed to publish any content of this project.
* Any form of plagiarism is strictly forbidden and will result in removal from the program.

![C_script_logo.]( https://blog.qwasar.io/hs-fs/hubfs/howtobecomeasoftwareengineer.jpg?width=1944&name=howtobecomeasoftwareengineer.jpg)

##

<H1 align="center"> <ins>Requirements</ins>:floppy_disk:</H1>

<H2><ins>General</ins> :heavy_check_mark:</H2>

* Allowed editors: <ins>**vi**</ins>, <ins>**vim**</ins>, <ins>**emacs**</ins>.
* All your files will be **compiled** on <ins>**Ubuntu 20.04 LTS**</ins> Using <ins>**gcc**</ins> Using the options <ins>**-Wall -Werror -Wextra -pedantic -std=gnu89**</ins>
* All your files should **end with a new line**
* A <ins>**README.md file**</ins>, at the root of the folder of the project is mandatory.
* Your code should use the <ins>**Betty style</ins>.** It will be checked using [betty-style.pl](https://github.com/alx-tools/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/alx-tools/Betty/blob/master/betty-doc.pl) 
* You are **not allowed to <ins>use global variables</ins>.**
* No **more than <ins>5 functions per file</ins>.**
* You are **allowed to <ins>use the C standard library</ins>.**
* The <ins>**prototypes</ins>** of all your <ins>**functions </ins>** should be included in your <ins>**header file</ins>** called **hash_tables.h**
* Don’t forget to <ins>**push your header file</ins>**
* All your <ins>**header files</ins>** should be <ins>**include guarded</ins>**

![C_programming_logo.]( https://blog.stoneriverelearning.com/wp-content/uploads/2016/08/CBlog.png)

##

<H1> <ins>More Info</ins>:floppy_disk:</H1>

<H2><ins>Data Structures</ins> :heavy_check_mark:</H2>

* **Please use these data structures for this project:**

![BekaHabesha.]( https://i.ibb.co/2s75FnM/more-info-0x1-A-C-Hash-tables-Alx-logo.png)

##

<H2><ins>Tests</ins> :heavy_check_mark:</H2>

We strongly encourage you to work all together on a set of tests

##

![Python_Dictionaries]( https://favtutor.com/resources/images/uploads/mceu_93797887411635500429275.png)

<H1> <ins>Python Dictionaries</ins>:floppy_disk:</H1>

<ins>**Python dictionaries</ins>** are implemented using <ins>**hash tables</ins>**. **When you will be done with this project, you will be able to better understand the <ins>power and simplicity of Python dictionaries</ins>**. So much is actually happening **when you type <ins>d = {'a': 1, 'b': 2}</ins>,** but everything looks so simple for the user. <ins>**Python</ins> doesn’t use the exact same implementation** than the one you will work on today though. If you are curious on how it works under the hood, here is a <ins>**good blog post</ins>** about [how dictionaries are implemented in Python 2.7](https://intranet.alxswe.com/rltoken/hKhDFfKKcxdM9U8GZVPOHQ) (not mandatory).
<br>
> [!NOTE]
> Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table.

* [Read more here](https://intranet.alxswe.com/rltoken/6wE80OFPwL-As1zGh2iMFg) (not mandatory).

![Python_Dictionaries]( https://media.geeksforgeeks.org/wp-content/uploads/Dictionary-Creation-1.jpg)
##

* File_name: 
  * <ins>**README.md file**</ins>
* Created: 
  * <ins>**On December 1, 2023**</ins>
* Author: 
  * <ins>***Bereket Dereje Mekonnen***</ins>
* Project: 
  * <ins>**0x1A. C - Hash tables**</ins>
* GitHub repository: 
  * <ins>**alx-low_level_programming**</ins>
* Directory: 
  * <ins>**0x1A-hash_tables**</ins>
* Project Tasks: 
  * <ins>**Mandatory and Advanced**</ins>
* Tasks in number: 
  * <ins>**8 Tasks (7-Mandatory & 1-Advanced)**</ins>
* Mandatory_Tasks: 
  * <ins>**From Task 0 to 6**</ins>
* Advanced_Tasks: 
  * <ins>**Task 7**</ins>

##

![BekaHabesha.]( https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png)

<H1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</ins>:floppy_disk:</H1>

<H1 align="center">MANDATORY_TASKS (From Task 0 to 9):cd:</h1>

## **No. 0. >>> ht = {}**:heavy_check_mark:
* **File:**
  * <ins>**0-hash_table_create.c**</ins>
###
* Write a **function** that creates <ins>**hash table</ins>.**
  * <ins>**Prototype</ins>:** [hash_table_t *hash_table_create(unsigned long int size);](./hash_tables.h)**
    * where <ins>**size</ins>** is the **size of the array**
  * <ins>**Returns</ins>** a **pointer to the newly created hash table**
  * If something <ins>**went wrong</ins>,** **your function should return <ins>NULL</ins>**

![Beki Habesha.]( https://i.ibb.co/557Bj07/0-main1-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/mBxSJmb/0-main2-0x1-A-C-Hash-tables.png)

##

## **No. 1. djb2**:heavy_check_mark:
* **File:**
  * <ins>**1-djb2.c**</ins>
###
* Write a **hash function** implementing the <ins>**djb2 algorithm</ins>.**
  * <ins>**Prototype</ins>:** *[unsigned long int hash_djb2(const unsigned char *str);](./hash_tables.h)
  * If something <ins>**went wrong</ins>,** **your function should return <ins>NULL</ins>**
You are <ins>**allowed to copy and paste</ins>** the **function** from [this page](https://intranet.alxswe.com/rltoken/3B7lCUBD4yZh66Pbl2KcEQ)

![Beki Habesha.]( https://i.ibb.co/LztRMbS/1-main1-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/VMhB3f4/1-main2-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/PWKF4s0/1-main3-0x1-A-C-Hash-tables.png)

##

## **No. 2. key -> index**:heavy_check_mark:
* **File:**
  * <ins>**2-key_index.c**</ins>
###
* Write a **function** that gives you the <ins>**index of a key</ins>.**
  * <ins>**Prototype</ins>:** [unsigned long int key_index(const unsigned char *key, unsigned long int size);](./hash_tables.h)
    * where <ins>**key</ins>** is the **key**
    * and <ins>**size</ins>** is the **size of the array of the hash table**
  * This **function** should use the **hash_djb2 <ins>function</ins> that you <ins>wrote earlier</ins>**
  * <ins>**Returns</ins>** the **index at which the key/value pair** should be **stored in the <ins>array of the hash table</ins>.**
  * <ins>**You will have to use this hash function for all the next tasks</ins>.**

![Beki Habesha.]( https://i.ibb.co/pdMfLNq/2-main1-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/pRhVm6K/2-main2-0x1-A-C-Hash-tables.png)

##

## **No. 3. >>> ht['betty'] = 'cool'**:heavy_check_mark:
* **File:**
  * <ins>**3-hash_table_set.c**</ins>
###
* Write a **function** that <ins>**adds an element to the hash table</ins>.**
  * <ins>**Prototype</ins>:** [int hash_table_set(hash_table_t *ht, const char *key, const char *value);](./hash_tables.h)
    * where <ins>**ht</ins>** is the **<ins>hash table</ins> you want to <ins>add or update the key/value to**</ins>
    * <ins>**key</ins>** is the **key.** <ins>**key</ins>** can not be an **empty string.**
    * and <ins>**value</ins>** is the **value associated with the key.** <ins>**value</ins>** must be **duplicated.** <ins>**value</ins>** can be an **empty string.**
  * This **function** should use the **hash_djb2 <ins>function</ins> that you <ins>wrote earlier</ins>**
  * <ins>**Returns</ins>:** **<ins>1</ins> if it succeeded, <ins>0</ins> otherwise**
  * **In case of collision, <ins>add the new node at the beginning of the list</ins>.**

![Beki Habesha.]( https://i.ibb.co/LdnzHtY/3-main1-0x1-A-C-Hash-tables.png)<br>

#### <ins>**If you want to test for collisions</ins>, here are some <ins>strings</ins> that <ins>collide</ins> using the <ins>djb2 algorithm</ins>:**

* <ins>**hetairas</ins>** collides with **mentioner.**
* <ins>**heliotropes</ins>** collides with **neurospora.**
* <ins>**depravement</ins>** collides with **serafins.**
* <ins>**stylist</ins>** collides with **subgenera.**
* <ins>**joyful</ins>** collides with **synaphea.**
* <ins>**redescribed</ins>** collides with **urites.**
* <ins>**dram</ins>** collides with **vivency.**

##

## **No. 4. >>> ht['betty']**:heavy_check_mark:
* **File:**
  * <ins>**4-hash_table_get.c**</ins>
###
* Write a **function** that <ins>**retrieves a value associated with a key</ins>.**
  * <ins>**Prototype</ins>:** [char *hash_table_get(const hash_table_t *ht, const char *key);](./hash_tables.h)
    * where <ins>**ht</ins>** is the **<ins>hash table</ins> you want to <ins>look into**</ins>
    * and <ins>**key</ins>** is the **key you are** <ins>**looking for</ins>.**
  * <ins>**Returns</ins>:** **the <ins>value associated</ins> with the <ins>element</ins>, or <ins>NULL</ins> if <ins>key</ins> couldn’t be found**

![Beki Habesha.]( https://i.ibb.co/XCRzCzx/4-main1-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/N9m2jwp/4-main2-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/yP1fBxV/4-main3-0x1-A-C-Hash-tables.png)

##

## **No. 5. >>> print(ht)**:heavy_check_mark:
* **File:**
  * <ins>**5-hash_table_print.c**</ins>
###
* Write a **function** that <ins>**prints a hash table</ins>.**
  * <ins>**Prototype</ins>:** [void hash_table_print(const hash_table_t *ht);](./hash_tables.h)
    * where <ins>**ht</ins>** is the **<ins>hash table</ins>.**
  * You should **print the <ins>key/value</ins> in the order that they appear in the <ins>array of hash table</ins>.**
    * <ins>**Order</ins>:** **array, list.** 
  * <ins>**Format</ins>:** **see example.**
  * If <ins>**ht</ins>** is **<ins>NULL</ins>, don’t print anything**

![Beki Habesha.]( https://i.ibb.co/m5gz8H8/5-main1-0x1-A-C-Hash-tables.png)

##

## **No. 6. >>> del ht**:heavy_check_mark:
* **File:**
  * <ins>**6-hash_table_delete.c**</ins>
###
* Write a **function** that <ins>**deletes a hash table</ins>.**
  * <ins>**Prototype</ins>:** [void hash_table_delete(hash_table_t *ht);](./hash_tables.h)

![Beki Habesha.]( https://i.ibb.co/bJdhGM9/6-main1-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/RbTcbrS/6-main2-0x1-A-C-Hash-tables.png)<br>
![Beki Habesha.]( https://i.ibb.co/cQCvx4F/6-main3-0x1-A-C-Hash-tables.png)

#

<h1 align="center"> ADVANCED_TASKS (Task 7):cd:</h1>

## **No. 7. $ht['Betty'] = 'Cool'**:heavy_check_mark:
* **File:**
  * <ins>**100-sorted_hash_table.c**</ins>
###
* In [PHP](https://intranet.alxswe.com/rltoken/UoWjDMSf7CR02W8bnn1geg),  hash tables are <ins>**ordered</ins>.** **Wait… WAT? <ins>How is this even possible?</ins>**<br>
![Beki Habesha.]( https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/5ebbea5dea5a575b38243d597604000715982925.gif?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20231201%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20231201T165147Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=741c85ae2c8d3ba52814598c75561a154eda7a4f1551c26e37e23c7997aa6e3d)
###
* <ins>**Before you continue</ins>, please take a moment to think about it: <ins>how you would implement it</ins> if you were <ins>asked to during an interview or a job</ins>. What <ins>data structures would you use</ins>? <ins>How would it work</ins>?**

###

### **<ins>For this task</ins>, please:**
* Read [PHP Internals Book: HashTable](https://intranet.alxswe.com/rltoken/SIdpN9PE_9aYBCHUGPX-fw)
* Use the <ins>**same hash function</ins>**
* Use these <ins>**data structures</ins>:**

![Beki Habesha.]( https://i.ibb.co/P5HPDYf/7-main1-0x1-A-C-Hash-tables.png)

###

### **<ins>Rewrite the previous functions using these data structures</ins>:**
* [shash_table_t *shash_table_create(unsigned long int size);](./hash_tables.h)
* [int shash_table_set(shash_table_t *ht, const char *key, const char *value);](./hash_tables.h)
  * The <ins>**key/value pair</ins>** should be <ins>**inserted</ins>** in the <ins>**sorted list at the right place</ins>.**
  * **Note** that here we do not want to do **exactly like <ins>PHP<ins>:** we want to <ins>**create a sorted linked list<ins>,** by **key (<ins>sorted on ASCII value)<ins>,** that we can <ins>**print by traversing it<ins>.** See example.
* [char *shash_table_get(const shash_table_t *ht, const char *key);](./hash_tables.h)
* [void shash_table_print(const shash_table_t *ht);](./hash_tables.h)
  * Should <ins>**print the hash table</ins>** using the **sorted linked list.**
* [void shash_table_print_rev(const shash_table_t *ht);](./hash_tables.h)
  * Should <ins>**print the hash tables key/value pairs</ins>** in <ins>**reverse order</ins>** using the **sorted linked list.**
* [void shash_table_delete(shash_table_t *ht);(./hash_tables.h)
* **You are <ins>allowed to have more than 5 functions</ins> in your file.**


![Beki Habesha.]( https://i.ibb.co/gMb4nYV/7-main2-0x1-A-C-Hash-tables.png)
![Beki Habesha.]( https://i.ibb.co/BqDk9rn/7-main3-0x1-A-C-Hash-tables.png)

###

![Beki Habesha.]( https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/253/php.png)

#
