// class Main {
//     public static void main(String[] args) {
//         String s1="Hello";
//         System.out.println(s1);
//     }
// }
//
// Hello


// class Main {
//     public static void main(String[] args) {
//         String s1="Hello";
//         System.out.println(s1.length());
//     }
// }
//
// 5


// class Main {
//     public static void main(String[] args) {
//         String s1="Hello";
//         String s2=new String("Hello");
//         System.out.println(s1);
//         System.out.println(s2);
//     }
// }
//
// Hello
// Hello


// class Main {
//     public static void main(String[] args) {
//         String s1="Hello";
//         String s2=new String("Hello");
//         if(s1==s2){
//             System.out.println("Login");
//         }
//         else{
//             System.out.println("Invalid");
//         }
//     }
// }
//
// Invalid


// class Main {
//     public static void main(String[] args) {
//         String s1="Hello";
//         String s2=new String("Hello");
//         if(s1.equals(s2)){
//             System.out.println("Login");
//         }
//         else{
//             System.out.println("Invalid");
//         }
//     }
// }
//
// Login


// class Main {
//     public static void main(String[] args) {
//         String s1="ABCD";
//         String s2="ABCd";
//         System.out.println(s1.compareTo(s2));
//     }
// }
//
// -32


// class Main {
//     public static void main(String[] args) {
//         String s1="ABCD";
//         String s2="ABC";
//         System.out.println(s1.compareTo(s2));
//     }
// }
//
// 1


// class Main {
//     public static void main(String[] args) {
//         String s1="ABCdEF";
//         String s2="ABCD";
//         System.out.println(s1.compareTo(s2));
//     }
// }
//
// 32


// class Main {
//     public static void main(String[] args) {
//         String s1="ABCD";
//         String s2="ABCDE";
//         System.out.println(s1.compareTo(s2));
//     }
// }
//
// -1

class Main {
    public static void main(String[] args) {
        String s1="";
        String s2="Hello";
        String s3=" ";
        System.out.println(s1.isEmpty());
        System.out.println(s1.isBlank());

        System.out.println(s2.isEmpty());
        System.out.println(s2.isBlank());

        System.out.println(s3.isEmpty());
        System.out.println(s3.isBlank());
    }
}
//
// true
// true
//false
//false
//false
//true