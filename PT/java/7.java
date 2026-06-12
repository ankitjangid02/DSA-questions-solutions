// class Printarray{
//     public static void main(String[] args) {
//         int a[] = {10, 20, 30, 40, 50};
//     }
// }


// sum of array element 
// class Printarray{
//     public static void main(String[] args) {
//         int a[]={10,20,30,40,50};
//         int sum=0;
//         for(int i=0;i<a.length;i++){
//             sum=sum+a[i];
//         }
//         System.out.println(sum);
//     }
// }

//find max and min array of element
// class Printarray{
//     public static void main(String[] args) {
//         int a[]={10,20,30,40,50};
//         int a1=a[1];
//         for(int i=0;i<a.length;i++){
//             if(a[i]>a1){
//                 a1=a[i];
//             }
//         }
//         System.out.println("max:"+a1);
//         int a2=a[1];
//         for(int i=0;i<a.length;i++){
//             if(a[i]<a2){
//                 a2=a[i];
//             }
//         }
//         System.out.println("min:"+a2);
//     }
// }

// reverse array
// class Printarray{
//     public static void main(String[] args) {
//         int a[]={10,20,30,40,50};
//         for(int i=a.length-1;i>=0;i--){
//             System.out.println(a[i]);
//         }
//     }
// }


//find even number
// class Printarray{
//     public static void main(String[] args) {
//         int a[]={10,20,30,40,50};
//         for(int i=0;i<a.length;i++){
//             if(a[i]%2==0){
//                 System.out.println(a[i]);
//             }
//         }
//     }
// }


//search element in array

// import java.util.Scanner;
// class Printarray{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int a1=sc.nextInt();
//         int a[]={10,20,30,40,50};
//         for(int i=0;i<a.length;i++){
//             if(a1==a[i]){
//                 System.out.println(true);
//                 return;
//             }
//         }
//         System.out.println(false);
//     }
// }




// class Demo{
//     public static void main(String[] args) {
//         int[] arr={10,20,30};
//         for(int x:arr){
//             System.out.println(x);
//         }
//     }
// }


//sum of enhanced for
// class sum{
//     public static void main(String[] args) {
//         int[] arr={10,20,30};
//         int sum=0;
//         for(int x:arr){
//             sum=sum+x;
//         }
//         System.out.println(sum);
//     }
// }


//copy one array to another
// class copy1{
//     public static void main(String[] args) {
//         int[] arr={10,20,30};
//         int[] arrc=new int[arr.length];
//         int x=0;
//         for(int i: arr){
//             arrc[x]=i;
//             x++;
//         }
//         for(int i:arrc){
//             System.out.println(i);
//         }
//     }
// }

// import java.util.Scanner;

// class man{
//     public static int strStr(String haystack, String needle){
//         int n=haystack.length();
//         int m=needle.length();
//         for(int i=0;i<=n-m;i++){
//             int j=0;
//             while (j<m && haystack.charAt(i+j)==needle.charAt(j)) {
//                 j++;
//             }
//             if(j==m){
//                 return i;
//             }
//         }
//         return -1;
//     }
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         String haystack=sc.nextLine();
//         String needle=sc.nextLine();
//         System.out.println(strStr(haystack,needle));
//     }
// }



// class Exaa{
//     public static void main(String[] args) {
//         int x[][]=new int[5][3];
//         System.out.println(x.length);
//     }
// }