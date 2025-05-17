#include <iostream>
#include <cstring>

struct Iron
{
    char* brand;
    char* model;
    char* color ;
    unsigned int minimum_temperature;
    unsigned int maximum_temperature;
    bool steam_supply;
    unsigned int power;
};

void fill_iron(Iron* iron)
{
    const int N = 100;
    char brand[N];
    std::cout << "Enter brand name:\n";
    std::cin >> brand;
    int size_brand = strlen(brand);
    iron->brand = new char[size_brand+1];
    std::strcpy(iron->brand, brand);


    char model[N];
    std::cout << "Enter model name:\n";
    std::cin >> model;
    int size_model = strlen(model);
    iron->model = new char[size_model+1];
    std::strcpy(iron->model, model);

    char color[N];
    std::cout << "Enter color:\n";
    std::cin >> color;
    int size_color = strlen(color);
    iron->color = new char[size_color+1];
    std::strcpy(iron->color, color);

    std::cout << "Enter minimum_temperature:\n";
    std::cin >> iron->minimum_temperature;

    
    std::cout << "Enter maximum_temperature:\n";
    std::cin >> iron->maximum_temperature;


    std::cout << "steam supply:\n";
    std::cin >> iron->steam_supply;
    

    std::cout << "Enter power:\n";
    std::cin >> iron->power;
};
void print_iron(Iron* iron)
{
    std::cout << "color:\n" <<iron->color<< " minimum_temperature\n" << iron->minimum_temperature << "maximum_temperature:\n"  << iron->maximum_temperature <<
       "steam supply:\n" << iron->steam_supply <<  "power:\n" << iron->power << std::endl; 
}

void free_array(Iron* iron)
{
delete[] iron->brand;
delete[] iron->model;
delete[] iron->color;
delete iron;
}
int main()
{
    Iron* iron = new Iron();
    fill_iron(iron); 
    print_iron(iron);
}
