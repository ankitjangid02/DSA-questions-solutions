public class test {
    public static void main(String[] args) {
        int x=5;
        int p=0;
        for(int i=1; i<=x; i++){
            // for(int j=i; j<=x; j++){
            //     System.out.print(" ");
            // }
            for(int k=0; k<Math.powExact(2,p); k++){
                System.out.print(i);
                i++;
            }
            p++;
            System.out.println();
        }
    }
}
