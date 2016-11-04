public class ThrowDemo{
    public static void demoProc(){
        try{
            throw new NullPointerException("DemoProc Error"); 
        }catch(NullPointerException e){
            System.out.println("inner demoProc"); 
            throw e;
        }
    }
    public static void main(String[] args){
        try{
            demoProc(); 
        }catch(NullPointerException e){
            System.out.println("main:"+e); 
        }
    }
}
