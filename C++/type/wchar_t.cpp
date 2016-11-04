#include <iostream>
#include <cwchar>
using namespace std;

int main(){
    char ch = 'A';
    wchar_t wch = 'A';
    char str[] = "abc我是";
    wchar_t wstr[] = L"abc我是";
    printf("char = %lu, wchar_t = %lu\nch = %lu, wch = %lu, str = %lu, wstr = %lu\n", sizeof(char), sizeof(wchar_t), sizeof(ch), sizeof(wch), sizeof(str), sizeof(wstr));
    return 0;
}
