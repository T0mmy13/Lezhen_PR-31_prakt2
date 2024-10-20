#include <iostream>


int main()
{
    setlocale(LC_ALL, "russian");
    srand(time(NULL));

    //1
    /*
    int array[11];
    for (int i = 0; i < 11; i++) {
        array[i] = rand() % 100;
    }
    std::cout << "Not sort\n";
    for (int i = 0; i <= 11; i++) {
        std::cout << array[i];
        std::cout << "  ";
    }
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            if (array[i] > array[j]) {
                int x = array[i];
                array[i] = array[j];
                array[j] = x;
            }
        }
    }
    std::cout << "\nSort\n";
    for (int i = 0; i < 11; i++) {
        std::cout << array[i];
        std::cout << "  ";
    }
    std::cout << "\nСредний элемент массива = ";
    std::cout << array[5];
    */
    //2
    /*
    int array[11][11];
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            array[i][j] = rand() % 100;
        }
    }
    std::cout << "Not sort\n";
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            std::cout << array[i][j];
            std::cout << "  ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            for (int y = 0; y < 11; y++) {
                if (array[i][j] > array[i][y]) {
                    int x = array[i][j];
                    array[i][j] = array[i][y];
                    array[i][y] = x;
                }
            }
        }
    }
    std::cout << "\nSort\n";
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11; j++) {
            std::cout << array[i][j];
            std::cout << "  ";
        }
        std::cout << "\n";
    }
    for (int i = 0; i < 11; i++) {
        std::cout << "\nСредний элемент строки ";
        std::cout << i + 1;
        std::cout << " массива array = ";
        std::cout << array[i][5];
        std::cout << "\n";
    }
    */
    //3
    /*
    struct BankTransaction
    {
    public:
        int transactionID;
        float amount;
        char type[16];

        BankTransaction(int transactionID, float amount) {
            this->transactionID = transactionID;
            this->amount = amount;
        }
        void EnterTransaction(BankTransaction& transaction) {
            std::cout << "Введите сумму транзакции\n";
            std::cin >> transaction.amount;
            std::cout << "Введите карту на которую будет производится транзакция\n";
            std::cin >> transaction.type;
        }
        void PrintTransaction() {
            std::cout << "\nId транзакции: ";
            std::cout << transactionID;
            std::cout << "\nСумма перевода: ";
            std::cout << amount;
            std::cout << " рублей";
            std::cout << "\nСчёт на который произведён перевод: ";
            std::cout << type;
            std::cout << "\n";
        }
    };

    BankTransaction one(1, 10000.0);
    BankTransaction two(2, 10000.0);
    BankTransaction three(3, 10000.0);
    BankTransaction four(4, 10000.0);
    BankTransaction five(5, 10000.0);

    one.EnterTransaction(one);
    two.EnterTransaction(two);
    three.EnterTransaction(three);
    four.EnterTransaction(four);
    five.EnterTransaction(five);

    one.PrintTransaction();
    two.PrintTransaction();
    three.PrintTransaction();
    four.PrintTransaction();
    five.PrintTransaction();
    */
    //4
    /*
    class Polynomial
    {
        int degree;
        float Nums[];

    public:
        Polynomial(int degree) {
            this->degree = degree;
            std::cout << "Введите ";
            std::cout << this->degree + 1;
            std::cout << " чисел, каждое с новой строки.\n";
            for (int i = 0; i < this->degree + 1; i++) {
                std::cin >> Nums[i];
            }
        }
        void Print() {
            std::cout << "\nDegree = ";
            std::cout << this->degree;
            std::cout << "\nNums = ";
            for (int i = 0; i < degree + 1; i++) {
                std::cout << this->Nums[i];
                std::cout << " ";
            }
            std::cout << "\n";
        }

        void FindPolynomial() {
            int polinomial = 0;
            for (int i = 0; i <= degree; i++) {
                polinomial += Nums[i] * pow(degree, degree - i);
                std::cout << polinomial;
                std::cout << "\n";
            }
            std::cout << "Полином введённых значений = ";
            std::cout << polinomial;
        }
    };
    int x;
    std::cout << "Введите значение x\n";
    std::cin >> x;
    Polynomial polinom(x);
    polinom.Print();
    polinom.FindPolynomial();
    */
    
    return 0;
}
