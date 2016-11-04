import java.util.Date;
import java.text.SimpleDateFormat;
public class DateFormat{
    public static void main(String args[]){
        Date da = new Date(); 
        System.out.println(da);
        SimpleDateFormat ma1 = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");
        System.out.println(ma1.format(da));
    }
}
