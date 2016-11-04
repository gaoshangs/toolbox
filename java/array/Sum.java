import java.util.*;
public class Sum{
    public static void main(String[] args){
        int numbers[] = new int[5];
        int len = numbers.length;
        long total = 0;
        System.out.print("请输入5个整数，已空格分隔\n");
        Scanner sc = new Scanner(System.in); 

        for(int i =0; i< len; i++){
            numbers[i] = sc.nextInt(); 
        } 

        for(int j = 0; j<len; j++){
            total+= numbers[j]; 
        }
        System.out.println("total = "+total);
    }
}
