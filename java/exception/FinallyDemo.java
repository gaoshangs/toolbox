public class FinallyDemo{
   public static void procA(){
        try{
            System.out.println("inside procA"); 
            throw new RuntimeException("procA Exception");
        }finally{
            System.out.println("procA's finally"); 
        } 
   } 

   public static void procB(){
        try{
            System.out.println("inside procB"); 
            return ;
        }finally{
            System.out.println("procB's finally"); 
        } 
   }

    public static void procC(){
        try{
            System.out.println("inside procC"); 
        }finally{
            System.out.println("procC's finally"); 
        }
    }

    public static void main(String[] args){
        try{
            procA();
        }catch(RuntimeException e){
            System.out.println("Exception:"+e); 
        }
        procB();
        procC();
    }
}
