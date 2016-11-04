public final class FinalVar{
   public static final int a = 123;

   public static void main(String[] args){
        FinalVar.a = 333;
        System.out.println("a = "+a);
   }
}
