// import java.util.Scanner;

// class pat{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int x=sc.nextInt();
//         int y=1;
//         for(int i=1; i<=x; i++){
//             y=1;
//             for(int j=1; j<=x*2-1; j++){
//                 if(j<x){
//                     System.out.print(y+" ");
//                     y++;
//                 }
//                 else{
//                     System.out.print(y+" ");
//                     y--;
//                 }
//             }
//             System.out.println("");
//         }
//     }
// }
//
// 1 2 3 4 5 4 3 2 1 
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 5 4 3 2 1
// 1 2 3 4 5 4 3 2 1



// import java.util.Scanner;
// class pat{
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int x=sc.nextInt();
//         int y=1;
//         for(int i=1; i<=x; i++){
//             y=1;
//             for(int j=x-i; j>0; j--){
//                 System.out.print("  ");
//             }

//             for(int k=1; k<=i*2-1; k++){
//                 if(k<i){
//                     System.out.print(y+" ");
//                     y++;
//                 }
//                 else{
//                     System.out.print(y+" ");
//                     y--;
//                 }               
//             }
//             System.out.println("");
//         }
//     }
// }
//       1 
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1



import java.util.Scanner;
class pat{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int x=sc.nextInt();
        int y=1;
        for(int i=1; i<=x; i++){
            y=1;
            for(int j=x-i; j>0; j--){
                System.out.print("  ");
            }

            for(int k=1; k<=i*2-1; k++){
                if(k<i){
                    System.out.print(y+" ");
                    y++;
                }
                else{
                    System.out.print(y+" ");
                    y--;
                }               
            }
            System.out.println("");
        }
        for(int i=1; i<=x; i++){
            y=1;
            for(int j=x-i; j>0; j--){
                System.out.print(y+" ");
                y++;
            }
            for(int k=0; k<x; k++){
                System.out.print("  ");
            }
            System.out.println("");
        }
    }
}