// ! Circular Linked List
// public class Day6 {
//
//     Node head;
//     Node tail;
//
//     class Node{
//         int  val;
//         Node next=null;
//         Node prev=null; 
//
//         Node(int value){
//             this.val=value;
//         }
//     }
//
//     public void insertStart(int val){
//         Node newNode= new Node(val);
//
//         if(head == null){
//             head = newNode;
//             head.next=newNode;
//             head.prev=newNode;
//             tail = newNode;
//             return;
//         }
//
//         newNode.next = head;
//         newNode.prev = tail;
//
//         tail.next=newNode;
//         head.prev=newNode;
//
//         head=newNode;
//     }
//
//     public void insertEnd(int val){
//         Node newNode= new Node(val);
//
//         if(head == null){
//             head = newNode;
//             tail = newNode;
//             tail.next=newNode;
//             tail.prev=newNode;
//             return;
//         }
//
//         newNode.next = head;
//         newNode.prev = tail;
//
//         tail.next=newNode;
//         head.prev=newNode;
//
//         tail=newNode;
//     }
//
//     public void delStart(){
//         if(head == null){
//             System.out.print("List is Empty");
//             return;
//         }
//
//         if(head == tail){
//             head=tail=null;
//             return;
//         }
//
//         Node currNode = head.next;
//         currNode.prev=tail;
//         tail.next=currNode;
//         head=currNode;
//     }
//
//     public void delEnd(){
//         if(head == null){
//             System.out.print("List is Empty");
//             return;
//         }
//
//         if(head == tail){
//             head=tail=null;
//             return;
//         }
//
//         Node currNode = tail.prev;
//         currNode.next=head;
//         head.prev=currNode;
//         tail=currNode;
//     }
//
//     public void print(){
//         Node currNode= head;
//
//         if(head == null){
//             System.out.println("List is Empty");
//             return;
//         }
//
//         if(head == tail){
//             System.out.println(currNode.val);
//             return;
//         }
//
//         while(currNode != tail){
//             System.out.print(currNode.val + "<->");
//             currNode = currNode.next;
//         }
//
//         System.out.println(currNode.val);
//
//     }
//
//     public static void main(String[] args){
//         Day6 cirLL= new Day6();
//         cirLL.insertStart(3);
//         cirLL.insertStart(4);
//         cirLL.insertStart(5);
//         cirLL.insertStart(6);
//
//         cirLL.insertEnd(7);
//         cirLL.insertEnd(8);
//
//         cirLL.print();
//
//         cirLL.delStart();
//
//         cirLL.print();
//
//         cirLL.delEnd();
//
//         cirLL.print();
//     }
// }

// ! Stack
// public class Day6 {
//
//     Node head;
//
//     class Node {
//         int val;
//         Node next = null;
//
//         Node(int value) {
//             this.val = value;
//         }
//     }
//
//     public void push(int data) {
//         Node newNode = new Node(data);
//
//         if (head == null) {
//             head = newNode;
//             return;
//         }
//
//         newNode.next = head;
//         head = newNode;
//     }
//
//     public boolean isEmpty(){
//         return head == null;
//     }
//
//     public void pop(){
//         if(isEmpty()){
//             return -1;
//         }
//         int temp = head.data;
//
//     }
//
//     public void print() {
//         Node currNode = head;
//
//         while (currNode.next != null) {
//             System.out.print(currNode.data + "|");
//             currNode = currNode.next;
//         }
//     }
//
//     public static void main(String[] args) {
//     Day6 stackLL = new Day6();
//     stackLL.push(5);
//     stackLL.push(6);
//     stackLL.push(7);
//
//     stackLL.print();
// }
// }


// ! Stack with array
// public class Day6{
//     int[] arr= new int[5];
//     int s=0;
//
//     public boolean isEmpty(){
//         return arr[-1]==0;
//     }
//
//     public void push(int val){
//         if(s>=5){
//             System.out.println("Stack is full");
//             return;
//         }
//
//         arr[s]=val;
//         s++;
//     }
//
//     public void print(){
//         for(int i=s-1; i>=0; i--){
//             System.out.print(arr[i]+" ");
//         }
//         System.out.println();
//     }
//
//     public int pop(){
//         int temp=arr[s-1];
//         s--;
//         return temp;
//     }
//
//     public void peek(){
//         System.out.print(arr[s-1]);
//     }
//
//
//     public static void main(String[] args){
//         Day6 stk = new Day6();
//         stk.push(1);
//         stk.push(2);
//         stk.push(3);
//         stk.push(4);
//
//         stk.print();
//      
//         stk.pop();
//         stk.pop();
//        
//         stk.print();
//
//         stk.peek();
//     }
// }


// ! Valid Parenthesis
import java.util.Stack;
public class Day6{

    public static boolean validParenthesis(String str){
        Stack<Character> stk = new Stack<>();
        for(char a: str.toCharArray()){
            if(a == '[' || a=='(' || a=='{'){
                stk.push(a);
            }
            else if(a==']'){
                if(stk.isEmpty()) return false;
                if('['==stk.peek()){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if(a=='}'){
                if(stk.isEmpty()) return false;
                if('{'==stk.peek()){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else if(a==')'){
                if(stk.isEmpty()) return false;
                if('('==stk.peek()){
                    stk.pop();
                }
                else{
                    return false;
                }
            }
            else{
                if(stk.isEmpty()) return true;
                return false;
            }
        }
        return true;
    }

    public static void main(String[] main){
        String str="[{()}][]]";
        System.out.print(validParenthesis(str));
    }
}