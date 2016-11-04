public class MyExceptionDemo{
    public static void show(int a) throws MyException{
        if(a > 10){
            throw new MyException(a); 
        } 
        System.out.println("Normal exit!");
    }

    public static void main(String[] args){
        try{
            show(2);
            show(12);
        }catch(MyException e){
            System.out.println("Get Exception:"+e); 
        }
    }
}

class MyException extends Exception{
    private int detail;
    public MyException(int a){
        detail = a; 
    }

    public String toString(){
        return "MyException["+detail+"]"; 
    }
}
