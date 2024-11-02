#include <iostream>
using namespace std;

void Main_Game(unsigned short user_select){
    int all[] = {1,2,3};
    srand(time(NULL));
    int comp_select = 1 + rand() % 3; // {1 = rock, 2 = paper, 3 == scissors}
    for(unsigned short i; i <1; i++) {
        if(user_select == comp_select) {
            cout<<"Restart";
            break;
        }
        //logic ЫЫЫЫЫЫ сУКА ЛОГИКА ХУЙНЯ
        // МЫ ЗНАЕМ ШО КАМЕНЬ БЬЕТ НОЖНИЦЫ, НО СОСЕТ ОТ БУМАГИ
        if(user_select == 1 && comp_select == 3) {
            cout<<"USER WIN!!!";
        }
        // ТАК СУЧКА, БУМАГА ЕБАШИТ КАМЕНЬ НО СОСЕТ ОТ НОЖНИЦ
        if(user_select == 2 && comp_select == 1) {
            cout<<"USER WIN!!!";
        }
        // НУ ТАК ОСТАЛИСЬ НОЖНИЦЫ, ОНИ ЕБУТ ДРАННУЮ БУМАГУ, НО СОСУТ ОТ КАМНЯ
        if(user_select == 3 && comp_select == 2) {
            cout<<"USER WIN!!!";
        }
        // Ну а теперь по логике если это не так то плаки плаки, пк выйграл
        else {
            cout<<"Compudahter WIN!!";
        }
    }
}


int main() {
    unsigned short user_select;
    cout<<"Select rock(1), paper(2), scissors(3):";
    cin>>user_select;
    if(user_select <= 3 || user_select< 0) {
        Main_Game(user_select);
    }
    return 0;
}