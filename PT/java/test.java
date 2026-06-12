public class test {
    public static void main(String[] args) {
        int x=new int[5];
        int y=x[0];
        for(int i=0;i<x.length;i++){
            if(x[i]>y){
                y=x[i];
            }
        }
        for(int i=0;i<x.length;i++){
            if(x[i]>y){
                if(x[i]==y){
                    continue;
                }
                y=x[i];
            }
        }
        System.out.print(y);
    }
}
