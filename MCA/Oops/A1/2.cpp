#include <iostream>
#include <vector>
using namespace std;

class Item
{
public:
    int code;
    int price;
};

int main()
{
    vector<Item> list;
    int n = 1;
    while (n)
    {
        cout << "Enter 1 to add item, 2 to delte item, 3 to display total price, 0 to exit" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
        {
            Item item;
            cout << "Enter code and price" << endl;
            cin >> item.code >> item.price;
            list.push_back(item);
            break;
        }
        case 2:
        {
            int code;
            cout << "Enter code to delete" << endl;
            cin >> code;
            for (int i = 0; i < list.size(); i++)
            {
                if (list[i].code == code)
                {
                    list.erase(list.begin() + i);
                    break;
                }
            }
            break;
        }
        case 3:
        {
            int total = 0;
            for (int i = 0; i < list.size(); i++)
            {
                total += list[i].price;
            }
            cout << "Total price is:" << total << endl;
            break;
        }
        case 0:
            break;
        default:
            cout << "Invalid Input" << endl;
        }
    }
    return 0;
}