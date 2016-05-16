## Exhaustive Test cases

### BinarySearchTree.insert(): cat tests/*.in

Notes: cannot have duplicated elements, if already exist, return false

" "           Empty Tree, insert null  
" 5 "         Empty Tree, insert 5    
" 5 1 "       Empty Tree, insert 5, insert 1     
" 5 7 "       Empty Tree, insert 5, insert 7  
" 2 1 3 "     Empty Tree, insert 2, insert 1, insert 3    
" 1 2 3 "     Empty Tree, insert 1, insert 2, insert 3
" 3 2 1 "     Empty Tree, insert 3, insert 2, insert 1
" 3 1 2 "     Empty Tree, insert 3, insert 1, insert 2
" 1 3 2 "     Empty Tree, insert 1, insert 3, insert 2 
" 3 1 2 2 "   Empty Tree, insert 3, insert 1, insert 2, insert 2
" 1 3 2 3 "   Empty Tree, insert 1, insert 3, insert 2, insert 3  (only for SPR and GenProg)

### DoublyLinkedList.addFirst() and addLast(): cat tests/*.in

Notes: can have duplicated elements

" "             Empty List, insert null
" N1 "          Empty List, insert N1   
" N1 N1 "       Empty List, insert N1, insert N1
" N1 N1 N1 "    Empty List, insert N1, insert N1, insert N1   
" N1 N1 N2 "    Empty List, insert N1, insert N1, insert N2
" N1 N2 N1 "    Empty List, insert N1, insert N2, insert N1
" N1 N2 N2 "    Empty List, insert N1, insert N2, insert N2
" N1 N2 N3 "    Empty List, insert N1, insert N2, insert N3
" N1 N2 "       Empty List, insert N1, insert N2
" N1 N2 N3 N4 " Empty List, insert N1, insert N2, insert N3, insert N4   (only for SPR and GenProg)

### DoublyLinkedList.remove():  cat tests/*.in

" "                Empty List, remove null
" N1 "             Empty List, remove N1
" N1 N1 "          List with 1 node N1, remove N1
" N1 N1 N2 "       List with 2 nodes N1, followed by N2, remove N1 
" N1 N1 N2 N3 "    List with 3 nodes N1, N2, N3, remove N1
" N1 N2 N1 "       List with 2 nodes N2, N1, remove N1
" N1 N2 "          List with 1 node N2, remove N1
" N1 N2 N3 "       List with 2 nodes N2, N3, remove N1
" N1 N2 N3 N1 "    List with 3 nodes N2, N3, N1, remove N1
" N1 N2 N1 N3 "    List with 3 nodes N2, N1,N3, remove N1


### LinkedList/hasLoop: cat tests/*.in

" "                 Empty List  
" N1 H "            List with 1 node N1, N1.next is header
" N1 N1 "           List with 1 node N1, N1.next is N1
" N1 N2 N1 "        List with 2 nodes, N1.next is N2, N2.next is N1
" N1 N2 N3 N1 "     List with 3 nodes, N1.next is N2, N2.next is N3, N3.next is N1
" N1 N2 N2 "        List with 2 nodes, N1.next is N2, N2.next is N2
" N1 N2 N3 H "      List with 3 nodes, N1.next is N2, N2.next is N3, N3.next is H
" N1 N2 N3 N3 "     List with 3 nodes, N1.next is N2, N2.next is N3, N3.next is N3
" N1 N2 N3 N2 "     List with 3 nodes, N1.next is N2, N2.next is N3, N3.next is N2

### LinkedList/insert : cat tests/*.in

Notes: sorted, but can have duplicated elements

" 0 1 1 "          Empty List, insert 0, insert 1, insert 1 
" 3 3 "            Empty List, insert 3, insert 3
" 22 "             Empty List, insert 22
" 0 -3 "           Empty List, insert 0, insert -3
" 0 0 0 "          Empty List, insert 0, insert 0, insert 0
" 4 3 1 6 "        Empty List, insert 4, insert 3, insert 1, insert 6
" "                Empty List, insert null
" 4 0 5 3 1 8 9 -10 " Empty List, insert 4 0 5 3 1 8 9 -10 one by one (only used for SPR and GenProg as ``oracle'')
" 0 0 -1 "         Empty List, insert 0, insert 0, insert -1     
" 0 1 0 "          Empty List, insert 0, insert 1, insert 0


### LinkedList/reverse:$ cat tests/*.in
" 0 1 1 "          List 0,1,1;   after reversion should be 1,1,0
" 3 3 "            List 3,3;     after reversion should be 3,3
" 22 "             List 22;      after reversion should be 22
" 0 -3 "           List -3,0;    after reversion should be 0, -3
" 0 0 0 "          List 0,0,0;   after reversion should be 0,0,0
" 4 3 1 6 "        List 1,3,4,6; after reversion should be 6,4,3,1
" "                Empty List;   after reversion should be empty list
" 4 0 5 3 1 8 9 -10 " List -10,0,1,3,4,5,8,9; after reversion should be 9,8,5,4,3,1,0,-10  (only used for SPR and GenProg as ``oracle'')
" 0 0 -1 "         List -1,0,0;  after reversion should be 0,0,-1
" 0 1 0 "          List 0,0,1;  after reversion should be 1,0,0
