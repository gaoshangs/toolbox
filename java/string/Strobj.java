import java.util.*;
public class Strobj{
    public static void main(String[] args){
        
        String str1 = "我是程序员";
        String str2 = "woshichengxuyuan";
        System.out.println("length of str1 is "+ str1.length());
        System.out.println("length of str2 is "+ str2.length());
        System.out.println("str1 = "+str1);
        System.out.println("请输入小于"+str1.length()+"的整数来获取该索引位的值");
        //Scanner sc = new Scanner(System.in);
        //int indexNum = sc.nextInt();
        int indexNum = 2;
        System.out.println(indexNum+"索引位的值为:"+ str1.charAt(indexNum));
        //检测是否包含某个字串
        System.out.println("str1是否包含字符串'程':"+ str1.contains("程"));
        
        //replace
        str1 = "Theurlwww.baidu.com";
        str2 = str1.replace("baidu", "google");
        System.out.println(str1);
        System.out.println(str2);

        //split
        String str3 = "aa.bb.cc.dd";
        String strArr[] = str3.split("\\.");
        System.out.println(Arrays.toString(strArr));
    }

}
