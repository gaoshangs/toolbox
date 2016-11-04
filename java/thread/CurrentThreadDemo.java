public class CurrentThreadDemo{
    public static void main(String[] args){
        Thread t = Thread.currentThread();
        System.out.println("Current thread:"+t);
        System.out.println("Current thread name:"+t.getName());

        t.setName("My Thread");
        System.out.println("Current thread:"+t);
        System.out.println("Current thread name:"+t.getName());

        for(int i = 5; i>0; i--){
            System.out.println(i); 
            try{
                Thread.sleep(100000);
            }catch(InterruptedException e){
                System.out.println("Main thread interrupted"); 
            }
        }
    }
}
