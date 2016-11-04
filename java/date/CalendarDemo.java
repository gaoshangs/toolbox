import java.util.Calendar;

public class CalendarDemo{
    public static void main(String args[]){
        Calendar calendar = Calendar.getInstance(); 
        int month = calendar.get(Calendar.MONTH) +1;
        System.out.println("month="+month);
    }
}
