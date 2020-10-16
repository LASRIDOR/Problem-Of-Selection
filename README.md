# ProblemOfSelection
# The purpose of the project 
implement a number of solutions to the selection problem Selection to investigate and analyze the differences between the different solutions with respect to n, k. (I will compare between RandSelection, heapSelection, BSTselection, quickSort, In Time Sorting)

# Detailed description of the purpose of the exercise:

The aim of the project is to implement a number of solutions to the problem of selection, Selection to investigate and analyze the differences between the various solutions in relation to n, k.
The solutions you need to implement are:


1) const Person & RandSelection (Person [], int k, int & NumComp)
Implement the Selection Algorithm as shown in the reading, but when selecting the pivot at each step is random (using the function rand)


2) const Person & selectHeap (Person [], int k, int & NumComp)
Creating a binary minimum stack from the n items implemented in the array as taught in class (when order is by key of course), and performing deleteMin times k (note that here the members are removed from the stack to find the .k member does not need to be returned to the stack).


3) const Person & BST (Person [], int k, int & NumComp)
Create a binary search tree (normal, unbalanced) from the limbs, when inserting the limbs into the tree one by one, and then finding the k-largest limb in the tree (without removing it from the tree!).

# The main plan:

Main function of the program:

1. Read from stdin an integer, n, which denotes the number of members, and then call n pairs of numbers followed by a string, each pair in a separate row. The integer in each pair indicates a person's ID number, and the string his name. The program will then pick up an integer, k, which is between 1 and n.
For example, the following input:
3
132 Lebron James
118 Stephen Curry
313 Kevin Durant
2

It is an input of three people, with the sort key being their ID number, and the name being their satellite data. In this example, the first in sorting is 118 the second 132 and the third 313.
The user is interested in two sorting, i.e. 2 = k.

2.Run each of the three functions described above on the data series and you will get from each function the number of comparisons made and the size of the k k organ.

3. Print out on the screen the key and data of the person who is the k organ, and the number of comparisons made by each of the three functions, in the following format:

132 Lebron James

RandSelection: 130 comparisons

selectHeap: 200 comparisons

BST: 500 comparisons

(The numbers of the comparisons listed in the example are of course fabricated).
