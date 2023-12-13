#include <iostream>
using namespace std;
#define MAX 10

class Items
{
    int code[MAX];
    int price[MAX];
    public:
    Items(int c[], int p[]){
        for(int i = 0; i < MAX; i++){
            code[i] = c[i];
            price[i] = p[i];
        }
    }
};

int main()
{
    return 0;
}