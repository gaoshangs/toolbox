public class ThreadDemo{
    
    public static void main(String[] args){
        System.out.println("Main Thread start");
        new NewThread(); 
        try{
            for(int i = 5; i>0; i--){
                System.out.println("Main i"+i); 
                Thread.sleep(10000);
            } 
        }catch(InterruptedException e){
            System.out.println("Main thread interrupt:"+e); 
        }
    }
}

class NewThread implements Runnable{
   Thread t; 
   NewThread(){
        t = new Thread(this, "Child Thread");
        System.out.println("Child Thread:"+t);
        t.start();
   }
   public void run(){
        try{
            for(int i = 5; i>0; i--){
                System.out.println("Child i"+i); 
                Thread.sleep(5000);
            } 
            System.out.println("Child thread exiting");
        }catch(InterruptedException e){
            System.out.println("Child interrupt:"+e); 
        }
   }
}
