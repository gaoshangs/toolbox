public class AssertDemo{
    public static void main(String[] args){
        int x = 10; 
        if(args.length > 0){
            try{
                x = Integer.parseInt(args[0]);
            }catch(NumberFormatException nfe){
            
            }
        }
        System.out.println("Testing assertion that x == 10");
        assert x == 10 : "Assert failed";
        System.out.println("Test passed");
    }
}
