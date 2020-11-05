#include <string>

class Account {
    public:
    // Función que tiene el mismo nombre de la clase
    // NO TIENE TIPO DE RETORNO
    // Se invoca automáticamente cuando una instancia de la clase es creada
        explicit Account(std::string accountName, int initialBalance) : name{accountName} {
            if(initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if(depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }

        int getBalance() const {
            return balance;
        }
 
        void setName(std::string accountName) { // funciones miembro de la clase
            name = accountName;
        }
        std::string getName() const {
            return name;
        }

    private:
        std::string name; // variables miembro de la clase
        int balance{0};
};
