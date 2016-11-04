public class NestTry{
    public static void main(String[] args){
        try{
            int a = args.length; 
            int b = 42/a;
            try{
                if(a == 1){
                    System.out.println("a = "+a); 
                    b = 42 /(a-a);
                }
                if(a == 2){
                    int c[] = {1}; 
                    c[42] = a;
                }
            }catch(ArrayIndexOutOfBoundsException e){
                System.out.println("array out:"+e); 
            }
        }catch(ArithmeticException e){
            System.out.println("Divide by 0"+e);
        }
    }
}
