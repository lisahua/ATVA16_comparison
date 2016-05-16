## Three-Test-Cases

### SortedLinkedList.insert() 

Notes: Allow duplicated elements

""          Empty List, insert null     

"22"        Empty List, insert 22         

"0, -3"     Empty List, insert 0, insert -3

### SortedLinkedList.reverse()

""          Empty List, after reversion, empty list        

"22"        List with 1 node 22, after reversion, list with 1 node 22    

"0, -3"     List with 2 nodes -3 ,0, after reversion, list with 2 nodes 0,-3

### SortedLinkedList.hasLoop()


"N1 H"       List with 1 node N1, N1.next is header

"N1 N1"      List with 1 node N1, N1.next is N1

"N1 N2 N2"   List with 2 nodes N1, N2, N1.next is N2, N2.next is N2

### DoublyLinkedList.addFirst() 

Notes: Allow duplicated elements

""           Empty list, insert null

"N1"         Empty list, insert N1

"N1 N2"      Empty list, insert N1, insert N2

### DoublyLinkedList.addLast()

Notes: Allow duplicated elements

""           Empty list, insert null

"N1"         Empty list, insert N1

"N1 N2"      Empty list, insert N1, insert N2

### DoublyLinkedList.remove()

Notes: if the element does not exist, return false. 

"N1 N1"      List with one node N1, remove N1

"N1 N1 N2 N3" List with 3 nodes N1, N2, N3, remove N1

"N1 N2"      List with one node N2, remove N1

###  BinarySearchTree.insert() 

Notes: if the element already exists, return false. No duplicated elements


""           Empty Tree, insert null

"5"          Empty Tree, insert 5

"3 1 2 2"    Empty Tree, insert 3, insert 1, insert 2, insert 2 


