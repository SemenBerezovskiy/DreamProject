#include <iostream>
#include <string>
int Zero = 0;

void Print(std::string& PrintableInformation, bool CoutOrCin, std::string& Insertable)
{
    if (CoutOrCin = true) {
        std::cout << PrintableInformation; // Если CoutOrCin истинно, выводим информацию
    } else {
        std::cin >> Insertable; // Если CoutOrCin ложно, считываем информацию
    }
}
class SecurityManager
{
public:
    void MakeAPassword() // Метод должен быть публичным и возвращать void
    {
        std::string Password; // Используем std::string для пароля
        std::string Coment = "Добро пожаловать в центр управления Ядерными Бойголовками\n Придумайте пароль:";
        Print(Coment, true, Password); // Печатаем комментарий
        Print(Coment, false, Password); // Считываем пароль
    }
};
int main()
{
    SecurityManager sm; // Создаем объект класса SecurityManager
    sm.MakeAPassword(); // Вызываем метод MakeAPassword
    return 0; // Возвращаем 0 из main
}
