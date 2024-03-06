#include <iostream>
using namespace std;
class car
{
public:
    void car_info_input() {
        cout << endl<<"enter car model: ";
        cin >> model;
        system("cls");
        cout <<  "enter car year: " ;
        cin >> year;
        system("cls");
        cout << endl << "enter car company: " ;
        cin >> company;
        system("cls");
    }
    void car_data_display() {
        cout << "Model: " << model << endl;
        cout << "Year: " << model << endl;
        cout << "Company: " << model << endl;
    }
private:
    string model;
    string year;
    string company;
};
int main()
{
    cout << "hello! input your car data that will be asked here: " << endl;
    car Mycar{};
    Mycar.car_info_input();
    Mycar.car_data_display();
}
