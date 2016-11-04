public class Demo{
    public static void main(String[] args){
        //字符型
        char eat1 = '吃';
        char eat2 = '烧';
        char eat3 = '烤';
        System.out.println("今天我要" + eat1 + eat2 + eat3);
        //整型
        short x=22;//十进制
        int y = 022;//八进制
        long z=0x22L; //十六进制
        System.out.println("转换成十进制:x="+ x + ", y= "+y+",z="+z);

        //浮点型
        float m = 22.45f;
        double n = 10d;
        System.out.println("计算成绩:"+m+" * "+n+"= "+m*n);
        //布尔
        boolean a = 100>10;
        System.out.println("100 > 10 = "+a);
   } 
}
