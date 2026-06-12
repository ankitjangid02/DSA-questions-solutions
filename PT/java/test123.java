// import java.util.*;
// public class test123 {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int[] x=new int[5];
//         for(int i=0;i<x.length;i++){
//             x[i]=sc.nextInt();
//         }
//         int y=x[0];
//         for(int i=0;i<x.length;i++){
//             if(x[i]>y){
//                 y=x[i];
//             }
//         }
//         int e=x[0];
//         for(int i=0;i<x.length;i++){
//             if(x[i]>e){
//                 if(x[i]==y){
//                     continue;
//                 }
//                 e=x[i];
//             }
//         }
//         System.out.print(e);
//     }
// }





// import java.util.*;
// public class test123 {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int u=0;
//         int[] x=new int[5];
//         for(int i=0;i<x.length;i++){
//             x[i]=sc.nextInt();
//         }
//         int y=x[0];
//         for(int i=0;i<x.length;i++){
//             if(x[i]<y){
//                 y=x[i];
//             }
//         }
//         int e=x[0];
//         for(int i=0;i<x.length;i++){
//             if(x[i]==y){
//                 u++;
//                 e=x[u];
//             }
//             if(x[i]<e){
//                 if(x[i]==y){
//                     continue;
//                 }
//                 e=x[i];
//             }
//         }
//         int t=x[0];
//         for(int i=0;i<x.length;i++){
//             if(x[i]==y){
//                 u++;
//                 t=x[u];
//             }
//             if(x[i]==e){
//                 t=x[2];
//             }
//             if(x[i]<t){
//                 if(x[i]==e || x[i]==y){
//                     continue;
//                 }
//                 t=x[i];
//             }
//         }
//         System.out.print(t);
//     }
// }



// import java.util.*;
// public class test123 {
//     public static void main(String[] args) {
//         Scanner sc=new Scanner(System.in);
//         int u=0;
//         int[] x=new int[5];
//         for(int i=0;i<x.length;i++){
//             x[i]=sc.nextInt();
//         }
//         int y=sc.nextInt();
//         int[] temp=new int[y];
//         for(int i=0;i<y;i++){
//             temp[i]=x[i];
//         }
//         for(int i=0;i<x.length;i++){
//             if(i<y){
//                 if(y==x.length){
//                     break;
//                 }
//                 x[i]=x[y];
//                 y++;
//                 u++;
//             }
//         }
//         System.out.println(u);
//         int p=0;
//         for(int i=u;i<x.length;i++){
//             x[i]=temp[p];
//             p++;
//         }
//         for(int i=0;i<x.length;i++){
//             System.out.print(x[i]+" ");
//         }
//     }
// }


