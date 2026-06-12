// ! Queue with Linked List
// public class Day7 {
 
//     Node head;
//     Node tail;
 
//     class Node{
//         int val;
//         Node next=null;
//         Node(int value){
//             this.val=value;
//         }
//     }
 
//     public void append(int val){
//         Node newNode =new Node(val);
 
//         if(head==null){
//             head = tail = newNode;
//             return;
//         }
 
//         tail.next=newNode;
//         tail=newNode;
//     }
 
//     public boolean isEmpty(){
//         return head == null;
//     }
 
//     public int peek(){
//         if(isEmpty()) {
//             System.out.println("List is Empty");
//             return -1;
//         }
//         return head.val;
//     }
      
//     public void pop(){
//         if(head == null){
//             System.out.println("List is Empty");
//             return;
//         }
 
//         int temp=head.val;
//         head=head.next;
//         System.out.println(temp);
//     }
 
//     public void printList(){
//         Node currNode = head;
//         while(currNode!=null){
//             System.out.println("|" + currNode.val +"|");
//             System.out.println("|-|");
 
//             currNode=currNode.next;
//         }
//     }
         
//     public static void main(String[] args){
//         Day7 q = new Day7();
//         q.append(1);
//         q.append(2);
//         q.append(3);
//         q.append(4);
        
//         q.printList();
       
//         q.pop();
       
//         System.out.println();
        
//         q.printList();
        
//         System.out.print(q.peek());
//     }
// }



// ! Queue with Array 
// public class Day7{
//     int[] arr;
//     // int size;
//     int rear;
 
//     public Day7(int n){
//         arr =new int[n];
//         // this.size = 0;
//         rear = -1;
//     }
 
//     public boolean isEmpty(){
//         // return size == 0;
//         return rear == -1;
//     }
 
//     public boolean isFull(){
//         return rear == arr.length;
//     }
 
//     public void append(int val){
//         if(isFull()){
//             System.out.println("Overflow");
//             return;
//         }
 
//         // size++;
 
//         if(isEmpty()){
//             arr[0]=val;
//             rear=0;
//             return;
//         }
 
//         arr[++rear]=val;
 
//     }
 
//     public int peek(){
//         if(isEmpty()){
//             System.out.print("Queue is Empty");
//             return -1;
//         }
//         return arr[0];
//     }
 
//     public int pop(){
//         if(isEmpty()){
//             System.out.println("Queue is Empty");
//             return -1;
//         }
     
//         // size--;
//         int temp=arr[0];
//         for(int i=0; i<=rear; i++){
//             arr[i]=arr[i+1];
//         }
//         rear--;
//         return temp;
//     }
 
//     public static void main(String[] args){
//         Day7 q = new Day7(3);
//         q.append(10);
//         q.append(20);
//         q.append(30);

//         q.pop();

//         while(!q.isEmpty()){
//             System.out.println(q.peek());
//             q.pop();
//         }
//     }
// }


// ! Circular Queue with Array 
public class Day7{
    int[] arr;
    // int size;
    int front;
    int rear;
 
    public Day7(int n){
        arr =new int[n];
        // this.size = 0;
        rear = -1;
        front = -1;
    }
 
    public boolean isEmpty(){
        // return size == 0;
        return rear == -1;
    }
 
    public boolean isFull(){
        return rear+1==front;
    }
 
    public void append(int val){
        if(isFull()){
            System.out.println("Overflow");
            return;
        }
 
        // size++;
 
        if(isEmpty()){
            arr[++front]=val;
            rear++;
            return;
        }
 
        arr[++rear]=val;
 
    }
 
    public int peek(){
        if(isEmpty()){
            System.out.print("Queue is Empty");
            return -1;
        }
        return arr[front];
    }
 
    public int pop(){
        if(isEmpty()){
            System.out.println("Queue is Empty");
            return -1;
        }
     
        // size--;
        int temp=arr[front];
        // for(int i=0; i<=rear; i++){
        //     arr[i]=arr[i+1];
        // }
        front++;
        return temp;
    }
 
    public static void main(String[] args){
        Day7 q = new Day7(3);
        q.append(10);
        q.append(20);
        q.append(30);

        q.pop();

        while(!q.isEmpty()){
            System.out.println(q.peek());
            q.pop();
        }
    }
}


