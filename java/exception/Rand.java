import java.util.Random;

public class Rand{
    public static void main(String[] args){
        int a =0, b=0, c = 0;
        Random r = new Random();
//        System.out.println(r.nextInt());
//        System.out.println(r.nextInt());
        for(int i=0; i<3200; i++){
                try{
                    b = r.nextInt(); 
                    c = r.nextInt();
                    a = 12345/(b/c);
                }catch(ArithmeticException e){
                    System.out.println("Exception:"+e); 
                    System.out.println("b="+b);
                    System.out.println("c="+c);
                    System.out.println("a="+a);
                    System.out.println("End"); 
                    a = 0;
                }
            }
    }
}
