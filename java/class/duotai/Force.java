class Force{
    public static void main(String[] args){
        SuperClass sup = new SuperClass();
        SonClass son = new SonClass();
        
        if(sup instanceof SonClass){
            sup = (SonClass)sup; 
        }else{
            System.out.println("不能进行转换"); 
        }

        sup = son;
        if(sup instanceof SonClass){
            sup = (SonClass)sup;
            System.out.println("转换成功");
        }else{
            System.out.println("转换失败"); 
        }
    }
}

class SuperClass{}
class SonClass extends SuperClass{}
