public class Operator{
    public static void main(String[] args){
        int binary = 0b1001;//二进制
        int a = 10;
        int b = 10;

        int x = 10;//0b1010

        System.out.println("a++ = "+(a++)); 
        System.out.println("a = "+ a); 
        System.out.println("++b = "+ (++b)); 
        System.out.println("a & x = "+ (a & x));
        System.out.println("a | x = "+ (a | x));
        System.out.println("binary = "+binary);
        System.out.println("binary >>2 =  "+(binary>>2));//位运算
        System.out.println("binary <<2 = "+(binary<<2));//位运算
        System.out.println("~x  = "+(~x));//位运算
        System.out.println("a = "+ a + ",x = "+x);//位运算
        System.out.println("a ^ x = "+ (a^x));//位运算
    }
}
