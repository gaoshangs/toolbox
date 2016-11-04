public class StringBuf{
    public static void main(String[] args){
        String fragment = "abcedfghijklmnopqrstuvwxyz";
        int times = 10000; 
        long timeStart1 = System.currentTimeMillis(); 
        String str1 = "";
        for(int i =0; i< times; i++){
            str1 +=fragment; 
        }
        long timeEnd1 = System.currentTimeMillis(); 
        System.out.println("combine str1 spended time :"+(timeEnd1 - timeStart1)+"ms");

        long timeStart2 = System.currentTimeMillis();
        StringBuffer str2 = new StringBuffer();

        for(int i =0;i<times; i++){
            str2.append(fragment); 
        }
        long timeEnd2 = System.currentTimeMillis();
        System.out.println("combine str2 spended time :"+(timeEnd2 - timeStart2)+"ms");
    }
}
