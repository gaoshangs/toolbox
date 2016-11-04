import java.net.*;

public class InetAddressDemo{
    public static void main(String args[]){
        try{
            InetAddress addr = InetAddress.getByName("www.baidu.com"); 
            String domain = addr.getHostName();
            String ip = addr.getHostAddress(); 
            InetAddress local = InetAddress.getLocalHost();

            System.out.println(domain);
            System.out.println(ip);
            System.out.println(local.toString());
        }catch(UnknownHostException e){
            e.printStackTrace(); 
        }
    }
}
