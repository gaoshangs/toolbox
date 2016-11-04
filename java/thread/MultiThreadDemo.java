public class MultiThreadDemo{
    public static void main(String[] args){
        System.out.println("Main thread start");
        new NewThread("T1"); 
        new NewThread("T2"); 
        new NewThread("T3"); 
        new NewThread("T4"); 
        try{
            Thread.sleep(10000); 
            System.out.println("Main exiting");
        }catch(InterruptedException e){
            System.out.println("Main Thread Exception:"+e);
        }
    }
}

class NewThread implements Runnable{
    String name;
    Thread t;
    NewThread(String threadName){
        name = threadName; 
        t = new Thread(this, name);
        System.out.println("Child thread:"+t);
        t.start();
    }
    public void run(){
       try{
            for(int i=5; i>0; i--){
                System.out.println("Child "+name+":"+i);
                Thread.sleep(1000); 
            }
            System.out.println("Child:"+name+":exiting"); 
       }catch(InterruptedException e){
            System.out.println("Child:"+name+":"+e); 
       }
    }
}
