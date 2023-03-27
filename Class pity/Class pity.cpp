// Class pity.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <conio.h>


using namespace std;



class animals
{
public:

   /* void animal()
    {
        size = 10;
        size2 = 10;
        a = new int[size];
        for (size_t i = 0; i != size; i++)
        {
            a[i] = 0;
            for (size_t j = 0; i != size2; j++)
            {
                b[j] = 0;
            }
        }

    }*/



    void setAnimalsByBreed()
    {
        int award = 0;
        int b = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << "poroda\t";
            cin >> Breeds[i];
            for (int j = 0; j < 3; j++)
            {
                // j++;
                cout << "klichka - ";
                cin >> AliasByBreed[i][j];
                cout << "Kolichestvo nagrad - ";
                cin >> award;
                system("cls");
                awards[b] = award;
                b++;
                // j--;
            }
        }
    }
    void setAnimalsByBreed(int size,int size2)
    {
        int award = 0;
        int b = 0;
        for (int i = 0; i < size; i++)
        {
            cout << "poroda\t";
            cin >> Breeds[i];
            for (int j = 0; j < size2; j++)
            {
                // j++;
                cout << "klichka - ";
                cin >> AliasByBreed[i][j];
                cout << "\n";
                cout << "Kolichestvo nagrad - ";
                system("cls");
                cin >> award;
                awards[b] = award;
                b++;
                // j--;
            }
        }
    }

    void deleteAnimals()
    {
        delete[]Breeds;
        delete[]AliasByBreed;
    }

    void getAnimals()
    {
        for (int i = 0; i < 3; i++)
        {
            
            cout << Breeds[i] << " - ";
            for (int j = 0; j < 3; j++)
            {

                cout << AliasByBreed[i][j] << " ";

            }
            cout << "\n"<<"------------------------------------------------------" << "\n";
        }
    }

    void findAnimalsByBreed(string breed)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (Breeds[i] == breed)
                {
                    cout << AliasByBreed[i][j] << " ";
                }
            }
            cout <<"\n";
        }
    }
    
    void AnimalsCountByBreed()
    {
        int animalcount = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << Breeds[i] << " - ";
            animalcount = 0;
            for (int j = 0; j < 3; j++)
            { 
                animalcount++;
            }
            cout << animalcount << "\n";
        }
    }

    void AwardsTotal()
    {
        int total = 0;
        for (int i = 0; i < 9; i++)
        {
            total += awards[i];
        }
        cout << "\n" << total << "\n";
    }

private:
    string Breeds[3];
    int awards[9];
    string AliasByBreed[3][3];
    int *a, *b;
    unsigned int size, size2;
    
};

/*struct animals
{
    string type = "a";
    string alias = "b";
    string breed = "c";
    bool award = true;
    int awardcount = 0;
};*/








int main()
{
   // std::cout << "Hello World!\n";

    animals a;



    //cout << "\t\t";
    a.setAnimalsByBreed();
    a.getAnimals();
    a.findAnimalsByBreed("2");
    a.AnimalsCountByBreed();
    a.AwardsTotal();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
