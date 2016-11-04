public class StaticFuc{
   public static void main(String[] args){
        System.out.println("Block.i="+Block.i);
        Block.test();
   } 
}

class Block{
    static int i;
    static{
        i = 10; 
    }

    public static void test(){
        i = 11;
        System.out.println("Block::test = "+i); 
    }
}
