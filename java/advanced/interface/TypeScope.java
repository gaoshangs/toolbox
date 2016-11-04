public class TypeScope{
    public <T extends Number> T getMax(T array[]){
        T max = null; 
        for(T element: array){
            max = element.doubleValue() > max.doubleValue() ? element : max; 
        }
        return max;
    }

    public static void main(String[] args){
        int array[] = {123, 234,42,233};
        TypeScope ts = new TypeScope(); 
        System.out.println(ts.getMax(array));
    }
}

