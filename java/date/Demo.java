import java.util.Date;

public class Demo{
    public static void main(String args[]){
        Date da = new Date();
        System.out.println(da);
        long msec = da.getTime();
        System.out.println("从1970年1月1日0时到现在共有："+msec+"毫秒");
        System.out.println("从1970年1月1日0时到现在共有："+(msec/1000)+"秒");
    }
}
