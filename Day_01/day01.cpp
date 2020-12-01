#include <iostream>
#include <fstream>

using namespace std;

int calcLenght(){
    fstream file;
    file.open("input.txt");
    int temp;
    int i = 0;
    while (file >> temp){
        i++;
    }
    return i;
}

int PartOne() {
    fstream file;
    file.open("input.txt");
    int a = calcLenght();
    int tab[a];

    for (int i = 0; i < a; i++){
        file >> tab[i];
    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < a; j++)
        {
            if ((tab[i] + tab[j]) == 2020){
                cout << tab[i] << " + " << tab[j] << " = 2020" << endl;
                return (tab[i] * tab[j]);
            }
        }

    }
    return 0;
}

int PartTwo(){
    fstream file;
    file.open("input.txt");
    int a = calcLenght();
    int tab[a];

    for (int i = 0; i < a; i++){
        file >> tab[i];
    }

    for (int i = 0; i < a; i++){
        for (int j = 0; j < a; j++){
            for (int k = 0; k < a; k++){
                if ((tab[i] + tab[j] + tab[k]) == 2020){
                    cout << tab[i] << " + " << tab[j] << " + " << tab[k] << " = 2020" << endl;
                    return (tab[i] * tab[j] * tab[k]);
                }
            }
        }
    }
    return 0;
}

int main() {
    cout << PartOne() << endl;
    cout << PartTwo() << endl;
    return 0;
}