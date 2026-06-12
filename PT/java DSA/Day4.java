// REGREX

// import java.util.regex.Matcher;
// import java.util.regex.Pattern;

// public class Day4 {
//     public static void main(String[] args) {
//         String s="AAAAA";
//         Pattern pat= Pattern.compile("[A-Z]{5}");
//         Matcher mat=pat.matcher(s);

//         boolean res=mat.matches();
        
//         System.out.println(res);
//     }   
// }





// RECURSION

// public class Day4 {
//     public static void show(int n){
//         if(n==0) return;
//         System.out.print(n);
//         System.out.print(" ");
//         show(n-1);
//     }
//     public static void main(String[] args) {
//         show(5);
//     }
// }


// public class Day4 {
//     public static int sumN(int n){
//         if (n==0) return 0;
//         return n + sumN(n-1);
//     }
//     public static void main(String[] args) {
//         System.out.println(sumN(3));
//     }
// }


// public class Day4 {
//     public static int fact(int n){
//         if (n==1) return 1;
//         return n * fact(n-1);
//     }
//     public static void main(String[] args) {
//         System.out.println(fact(3));
//     }
// }


// public class Day4 {
//     public static int fact(int n){
//         if (n==1) return 1;
//         return n * fact(n-1);
//     }
//     public static void main(String[] args) {
//         int n= 5;
//         int r=3;
//         int a=fact(n);
//         int b=fact(n-r);
//         System.out.println(a/b);
//     }
// }


// public class Day4 {
//     public static int fact(int n){
//         if (n==1) return 1;
//         return n * fact(n-1);
//     }
//     public static void main(String[] args) {
//         int n= 5;
//         int r=3;
//         int a=fact(n);
//         int b=fact(n-r)*fact(r);
//         System.out.println(a/b);
//     }
// }




// QUICK SORT

import java.util.ArrayList;
import java.util.Arrays;

public class Day4 {
    public static ArrayList<Integer> quickSort(ArrayList<Integer> arrList){
        if(arrList.size() <= 1) return arrList;

        int pivot = arrList.get(arrList.size()-1);

        ArrayList<Integer> small = new ArrayList<Integer>();
        ArrayList<Integer> big = new ArrayList<Integer>();
        
        for(int i=0; i<arrList.size()-1; i++){
            if(arrList.get(i) >= pivot){
                big.add(arrList.get(i));
            }else{
                small.add(arrList.get(i));
            }
        }

        ArrayList<Integer> res = new ArrayList<Integer>();

        res.addAll(quickSort(small));
        res.add(pivot);
        res.addAll(quickSort(big));

        return res; 
    }

    public static void main(String[] args) {
        ArrayList<Integer> arrList = new ArrayList<>(Arrays.asList(6, 1, 7, 2, 5, 9));
        System.out.println(quickSort(arrList));
        arrList.remove(0);
    }
}