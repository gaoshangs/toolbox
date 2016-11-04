public class SynchBlock{
    public static void main(String[] args){
        System.out.println("Main starting");
        CallMe obj = new CallMe();
        Caller t1 = new Caller(obj, "Hello"); 
        Caller t2 = new Caller(obj, "World"); 
        Caller t3 = new Caller(obj, "Lucky"); 
        try{
            t1.t.join();
            t2.t.join();
            t3.t.join();
        }catch(InterruptedException e){
            System.out.println("Child Thread exiting:"+e); 
        }

        System.out.println("Main exiting!");
    }
}

class CallMe{
    public void call(String s){
        System.out.print("["+s);
        try{
            Thread.sleep(5000);
        }catch(InterruptedException e){
            System.out.println("CallMe sleep Exception:"+e); 
        }
        System.out.println("]");
    }
}

class Caller implements Runnable{
    Thread t;
    CallMe callme;
    String msg;
    int p;
    Caller(CallMe cm, String s){
        callme = cm;
        msg = s;
        t = new Thread(this);
        t.start();
    }

    public void run(){
        synchronized(callme){
            callme.call(msg); 
        }
    }

}
