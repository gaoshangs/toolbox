public class RandomDemo{
    public static void main(String args[]){
        int a;
        double b;
        System.out.println("随机数为:");
        for(int i=0; i<10;i++){
            b = Math.random();
            a = (int)((100-10)*b)+10;
            System.out.print(b+":"+a+"\n");
        }
    }
}
