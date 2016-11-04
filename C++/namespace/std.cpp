#include <cstdio>
//using namespace std;
class Book{
    private :
        float price;
    public :
        void setPrice(float p){
            price = p;
        }
        float getPrice(){
            return price;
        }
};
int main(){
    float price;
    class Book bk;
    printf("请输入书的价格：\n");
    scanf("%f", &price);
    bk.setPrice(price);
    printf("Book price : %.2f\n", bk.getPrice());
    return 0;
}
