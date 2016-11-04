public class MakeStr{
    public static void main(String args[]){
        String a1 = "wo shi a1"; 
        char str1[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
        String a2 = new String(str1);
        String a3 = new String(str1, 0, 5);
        String a4 = new String("hhha");

        System.out.println("a1="+a1);
        System.out.println("a2="+a2);
        System.out.println("a3="+a3);
        System.out.println("a4="+a4);
    }
}
