# ProblemOfSelection
# The purpose of the project 
implement a number of solutions to the selection problem Selection to investigate and analyze the differences between the different solutions with respect to n, k. (I will compare between RandSelection, heapSelection, BSTselection, quickSort, In Time Sorting)

# Detailed description of the purpose of the exercise:

The aim of the project is to implement a number of solutions to the problem of selection, Selection to investigate and analyze the differences between the various solutions in relation to Nn, k
The solutions you need to implement are:


1) const Person & RandSelection (Person [], int k, int & NumComp)
Implement the Selection Algorithm as shown in the reading, but when selecting the pivot at each step is random (using the function. (rand


2) const Person & selectHeap (Person [], int k, int & NumComp)
Creating a binary minimum stack from n the items realized in the array (when the order is by key of course), and execute k times deleteMin
(Note that here the organs are removed from the pile to find the .k organ
No need to return them to the stack).


3) const Person & BST (Person [], int k, int & NumComp)
Creating a binary search tree (normal, unbalanced) from the limbs, when inserting the limbs one by one into the tree, and then finding the k-largest limb in the tree (without lowering it
From the tree!).

# The main plan:

Main function of the program:

1. Read from stdin an integer,, n that denotes the number of members, and then read n pairs of numbers followed by a string, each pair in a separate row. The integer in each pair denotes a person's identity number, and the string his name.
The program will then absorb an integer,, k which is between 1 and n.
For example, the following input:
3
132 Lebron James
118 Stephen Curry
313 Kevin Durant
2

It is an input of three people, with the sort key being their ID number, and the name being their satellite data. In this example, the first in the classification is, 118 the second 132 and the third.313 The user is interested in the second in the classification, i.e. 2 = k.

2. Run each of the three functions described above on the data series and you will receive
From each function the number of comparisons performed and the size of the k k organ size.

3. Print on the screen the key and data of the person who is the organ, k and number
The comparisons performed by each of the three functions, in the following format:

132 Lebron James

RandSelection: 130 comparisons

selectHeap: 200 comparisons

BST: 500 comparisons

(The numbers of the comparisons listed in the example are of course fabricated).
