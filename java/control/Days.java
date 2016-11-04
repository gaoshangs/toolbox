import java.util.*;

public class Days{
    public static void main(String[] args){
        int days = 0, year, month;
        Scanner sc = new Scanner(System.in);        
        System.out.println("请输入年份");
        year = sc.nextInt();
        System.out.println("请输入月份");
        month = sc.nextInt();
        switch(month){
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                days = 31;
                break;
            case 2:
                days = year % 4 ==0 ? 29 : 28;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                days = 30;
                break;
            default:
                System.exit(0);
                break;
        }
        System.out.println(year+"年"+month+"月共计"+days+"天");
    }
}
