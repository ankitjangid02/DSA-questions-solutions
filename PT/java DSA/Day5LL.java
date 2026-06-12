// public class Day5 {

//     public static int countPathMaze(int i, int j, int n, int m){

//         if(i == n-1 && j == m-1) return 1;
//         if(i == n || j == m) return 0;

//         int downPath = countPathMaze(i+1, j, n, m);

//         int rightPath = countPathMaze(i+1, j, n, m);
         
//         return downPath + rightPath; 
//     }

//     public static void main(String[] args){
//         int n = 3;
//         int m = 3; 

//         int res = countPathMaze(0, 0, n, m);

//         System.out.print(res);
//     }
// }





// ! Single Linked
// public class Day5LL {

//     Node head;

//     class Node{
//         int val;
//         Node next = null;

//         Node(int value){
//             this.val = value;
//         }
//     }

//     public void prepend(int val){
//         Node newNode = new Node(val);
        
//         if(head == null){
//             head = newNode;
//             return;
//         }
        
//         newNode.next = head;
//         head = newNode;
//     }
    
//     public void append(int val){
//         Node newNode = new Node(val);
        
//         if(head == null){
//                 head = newNode;
//                 return;
//         }
    
//         Node currNode =head;

//         while(currNode.next != null){
//             currNode=currNode.next;
//         }
        
//         currNode.next = newNode;
//     }
    
//     public void delStart(){
//         if(head == null){
//             System.out.println("List is Empty");
//             return;
//         }
        
//         head=head.next;
     
//     }
    
//     public void inbtwInsert(int val){
//         Node newNode = new Node(val);

//         if(head == null){
//             head = newNode;
//             return;
//         }

//         newNode.next = head;
//         head = newNode;
//     }

//     public void size(){
//         int i=1;
//         if(head == null){
//             System.out.println("List is Empty");
//             return;
//         }

//         Node currNode=head;
//         while(currNode.next != null){
//             currNode = currNode.next;
//             i++;
//         }

//         System.out.println(i);

//     }
    
//     public void delEnd(){
//         if(head == null){
//             System.out.println("List is Empty");
//             return;
//         }
//         if(head.next == null){
//             return;
//         }

//         Node currNode=head;
//         while(currNode.next.next != null){
//             currNode = currNode.next;
//         }

//         currNode.next=null;
//     }


//     public void printList(){
//         Node currentNode = head;
//         while (currentNode != null) {
//             System.out.print(currentNode.val + "->");
//             currentNode = currentNode.next;
//         }
//         System.out.println("null");
//     }

//     public static void main(String[] args){
//         Day5LL list = new Day5LL();

//         list.append(2501);
//         list.prepend(2000);
//         list.prepend(100);
//         list.prepend(65);
//         list.prepend(1);
        
//         list.printList();
//         list.size();
        
//         list.delEnd();
//         list.delStart();
        
//         list.printList();
//         list.size();

//     }
// }



// ! Doubly linked list
public class Day5LL {

    Node head;
    Node tail;

    class Node{
        int val;
        Node next = null;
        Node prev = null;

        Node(int value){
            this.val = value;
        }
    }

    public void prepend(int val){
        Node newNode = new Node(val);
        
        if(head == null){
            head = newNode;
            tail = newNode;
            return;
        }
        head.prev = newNode;
        newNode.next = head;
        head = newNode;
    }
    
    public void append(int val){
        Node newNode = new Node(val);
        
        if(head == null){
            head = newNode;
            tail = newNode;                
            return;
        }
    
        tail.next=newNode;
        newNode.prev = tail;
        tail = newNode;
    }
    
    public void inbtwInsert(int val){
        Node newNode = new Node(val);

        if(head == null){
            head = newNode;
            return;
        }

        newNode.next = head;
        head = newNode;
    }
    
        public void size(){
            int i=1;
            if(head == null){
                System.out.println("List is Empty");
                return;
            }
    
            Node currNode=head;
            while(currNode.next != null){
                currNode = currNode.next;
                i++;
            }
    
            System.out.println(i);
    
        }

    public void delStart(){
        if(head == null){
            System.out.println("List is Empty");
            return;
        }
        if(head.next == null){
            head=null;
            tail=null;
            System.out.println("null");
            return;
        }
        
        head=head.next;
        head.prev=null;
     
    }
    
    
    public void delEnd(){
        if(head == null){
            System.out.println("List is Empty");
            return;
        }
        if(head.next == null){
            head=null;
            tail=null;
            return;
        }

        Node currNode=head;
        while(currNode.next.next != null){
            currNode = currNode.next;
        }
        currNode=tail;
        currNode.next=null;
    }


    public void printList(){
        Node currentNode = tail;
        System.out.print("null");
        while (currentNode != null) {
            System.out.print("<->"+currentNode.val);
            currentNode = currentNode.prev;
        }
    }

    public static void main(String[] args){
        Day5LL list = new Day5LL();

        list.append(2050);
        list.prepend(2000);
        list.prepend(100);
        list.prepend(65);
        list.prepend(1);
        
        list.printList();
        list.size();
        
        list.delEnd();
        list.delStart();
        
        list.printList();
         list.size();

    }
}