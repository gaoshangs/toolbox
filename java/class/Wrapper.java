public class Wrapper{
    public static void main(String[] args){
       String strArr[] = {"123", "abc123", "123abc"};
       for(String str1:strArr){
           try{
                System.out.println(str1+"parseInt = "+Integer.parseInt(str1));
           }catch(Exception e){
                System.out.println(str1+"无法转换成整数");
           }
       }
    }
}
