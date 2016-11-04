public class PriorityDemo{
    public static void main(String[] args){
        Thread.currentThread().setPriority(Thread.MAX_PRIORITY);
        Clicker high = new Clicker(Thread.NORM_PRIORITY+2, "high");
        Clicker low = new Clicker(Thread.NORM_PRIORITY-2, "low");
        low.start();
        high.start();

        try{
            Thread.sleep(20000); 
        }catch(InterruptedException e){
            System.out.println("Main thread interrupted:"+e); 
        }
        low.stop();
        high.stop();
        try{
            high.t.join(); 
            low.t.join(); 
        }catch(InterruptedException e){
            System.out.println("InterruptedException caught:"+e); 
        }

        System.out.println("High-priority thread:"+high.click);
        System.out.println("Low-priority thread:"+low.click);
    }
}

class Clicker implements Runnable{
    int click;
    private volatile boolean running = true; 
    private String tName; 
    Thread t;
    Clicker(int p, String name){
        t = new Thread(this, name);
        t.setPriority(p);
        tName = name;
    }

    public void start(){
        t.start(); 
    }

    public void stop(){
        running = false; 
    }

    public void run(){
        while(running){
            click++; 
            System.out.println(tName+":"+click);
        }
    }
}
