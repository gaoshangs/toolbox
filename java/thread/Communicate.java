public class Communicate{
    public static void main(String[] args){
        System.out.println("Main thread start!");
        Q q = new Q();
        Producer p = new Producer(q);
        Consumer c1 = new Consumer(q, "c1");
//        Consumer c2 = new Consumer(q, "c2");//当开启两个消费者的时候，很有可能会最后剩下一个消费者处于挂起的状态
//        Consumer c3 = new Consumer(q, "c3");
        try{
            p.t.join(); 
            c1.t.join();
//            c2.t.join();
//            c3.t.join();
        }catch(InterruptedException e){
            System.out.println("Child Exception!");
        }
        System.out.println("Main thread end!");
    }
}

class Q{
    int n;
    private boolean valueSet = false;
    synchronized int get(){
        //System.out.println("GOT:"+n); 
        if(!valueSet){
            try{
                wait(); 
            }catch(InterruptedException e){
                System.out.println("GET Exception:"+e); 
            }
        }
        valueSet = false;
        notify();
        return n;
    }

    synchronized void set(int n){
        if(valueSet){
            try{
                wait(); 
            }catch(InterruptedException e){
                System.out.println("SET Exception:"+e); 
            }
        }
            this.n = n;
            valueSet = true;
            System.out.println("SET:"+n);
            notify();
    }
}

class Producer implements Runnable{
    Thread t;
    Q q; 

    Producer(Q q){
        this.q = q;
        t = new Thread(this);  
        t.start();
    }

    public void run(){
        int n = 1;
        while(n < 10){
            q.set(n); 
            n++;
        }
    }
}

class Consumer implements Runnable{
    Thread t;
    Q q; 
    String name;

    Consumer(Q q, String name){
        this.q = q;
        this.name = name;
        t = new Thread(this, name);  
        t.start();
    }

    public void run(){
       int n =1; 
        while(n < 10){
            System.out.println(name+"_GOT:"+q.get()); 
            n++;
        }
    }
}
