#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    // одномерные статические массивы
    /*
    Написать программу «успеваемость». Пользователь 
    вводит 10 оценок студента. Реализовать меню для пользователя
    ■ Вывод оценок (вывод содержимого массива);
    ■ Пересдача экзамена (пользователь вводит номер 
    элемента массива и новую оценку);
    ■ Выходит ли стипендия (стипендия выходит, если
    средний бал не ниже 10.7).
    */
    /*const int size = 10;
    int arr[size]{ 12,7,10,11,9,9,12,12,8,10 };

    int index, sum;

    while (true) {
        cout << "Успеваемость\n";
        cout << "1 - Вывод оценок\n"
            << "2 - Пересдача экзамена\n"
            << "3 - Выходит ли стипендия\n"
            << "0 - Выход\n\n";
        char c;
        cout << "--> ";  cin >> c;

        switch (c)
        {
        case '1':
            cout << "Оценки студента:\n";
            for (int i = 0; i < size; i++) {
                cout << i + 1 << ": оценка - " << arr[i] << endl;
            }
            cout << endl;
            break;
        case '2':
            cout << "Введите номер экзамена -> ";
            cin >> index;
            cout << "Какую оценку выставить? -> ";
            cin >> arr[index - 1];
            break;
        case '3':
            sum = 0;
            for (int i = 0; i < size; i++) {
                sum += arr[i];
            }
            ((float)sum / size >= 10.7) ?
                cout << "Студент получает стипендию\n" :
                cout << "Средний бал ниже допустимого. Стипендии нет\n";
            break;
        case '0':
            exit(0); // функция для закрытия всей программы
            break;
        default:
            cout << "Неверный ввод, повторите попытку\n";
            break;
        }
        system("pause");
        system("cls");
    }
    */
    
    /*
    Необходимо отсортировать первые две трети
    массива в порядке возрастания если среднее арифметическое
    всех элементов больше нуля; иначе — лишь
    первую треть. Остальную часть массива не сортировать,
    а расположить в обратном порядке.
    */
    /*const int size = 12;
    int arr[size];
    int sum = 0;
    srand(time(0));
    for (int i = 0; i < size; i++) {
        arr[i] = rand()%11 - rand()%11;
        sum += arr[i];
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    int temp;      
    for (int i = 0;
        (sum / size > 0) ? i < 2 * (size / 3) :
        i < size / 3;
        i++) {
        for (int j = 0;
            (sum / size > 0) ?
            j < 2 * (size / 3) - 1 :
            j < size / 3 - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int j;
    (sum / size > 0) ? j = 2 * (size / 3) : j = size / 3;

    for (int i = size - 1; j <= i; i--, j++) {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }  
    
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }*/

    // многомерные статические массивы

const int row = 3;
const int col = 4;
int arr[row][col] =
{
    {5,7,9,4},
    {1,0,3,5},
    {8,7,6,2}
};

for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
    /*
    Написать программу, которая в двумерном массиве
    находит максимальный элемент каждой строки.
    */
/*int max_elem;
for (int i = 0; i < row; i++) {
    max_elem = arr[i][0];
    for (int j = 1; j < col; j++) {
        if (max_elem < arr[i][j])
            max_elem = arr[i][j];
    }
    cout << max_elem << endl;
}*/

    /*
    В двумерном массиве целых числе посчитать:
    ■ Сумму всех элементов массива;
    ■ Среднее арифметическое всех элементов массива;
    ■ Минимальный элемент;
    ■ Максимальный элемент.
    */
/*int sum = 0;
int max_elem = arr[0][0], min_elem = arr[0][0];
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        sum += arr[i][j]; // считаем сумму
        if (max_elem < arr[i][j]) max_elem = arr[i][j];
        if (min_elem > arr[i][j]) min_elem = arr[i][j];
    }
}
cout << "sum = " << sum << endl
<< "avg = " << sum / (row * col) << endl
<< "min = " << min_elem << endl
<< "max = " << max_elem;*/

    /*
    В двумерном массиве целых чисел посчитать
    сумму элементов: в каждой строке; в каждом столбце;
    одновременно по всем строкам и всем столбцам. 
    Оформить следующим образом:
     3 5  6 7 | 21
    12 1  1 1 | 15
     0 7 12 1 | 20
    --------------
    15 13 19 9 | 56
    */
int sum_row = 0, sum_col = 0, sum = 0;
// считаем сумму каждой строки
for (int i = 0; i < row; i++) { // проходим по строкам
    sum_row = 0;
    for (int j = 0; j < col; j++) { // проходим по столбцам
        cout << setw(3) << arr[i][j];
        sum_row += arr[i][j];
        //sum += arr[i][j];
    }
    cout << " |" << setw(3) << sum_row << endl;
}
cout << string(18, '-') << endl;
// считаем сумму каждого столбца
for (int j = 0; j < col; j++) { // проходим по столбцам
    sum_col = 0;
    for (int i = 0; i < row; i++) { // проходим по строкам
        sum_col += arr[i][j];
        //sum += arr[i][j];
    }
    cout << setw(3) << sum_col;
}
// сумма всех элементов
for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
        sum += arr[i][j];
    }
}
cout << " |" << setw(3) << sum;

}
