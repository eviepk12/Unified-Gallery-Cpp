// Made by Zainal.
// Gallery for all the simple C++ projects I did this year.

#include <iostream>
using namespace std;

void evenNumber() {
    int nomor = 1000; 

    cout << "\n Nomor genap dari 1-1000 adalah \n";

    for (int i = 1; i<=nomor; i++)
    {
        if (i % 2 == 0) // == 0 means that if i is completely divisible by 2 to execute the print command next, if not then execute the loop again
            cout << i << " ";
    }

    cin.get();
}

void luasSegitiga() {
    int alas, tinggi;
    float luas; // Float because the answer could be a decimal number 

    cout << "\n Mencari luas segitiga \n";

    cout << "Tuliskan nilai alasnya:"; 
    cin >> alas;

    cout << "Tuliskan nilai tingginya:";
    cin >> tinggi;

    luas = (0.5) * alas * tinggi;

    cout << "\n Jadi luasnya adalah: " << luas;

    cin.get();
    
}

void oddNumber() {
    cout << "\n Odd Numbers from 1-1000 \n";

    int nomor = 1000;

    for (int i = 1; i<=nomor;i++)
    {
        if (i % 2) 
        {
            cout << i << " ";
        }
    }

    cin.get();
}

void primeNumber() {
    cout << "\n Prime Numbers from 1-1000 \n";

    int i,j,count=0;

    for (i = 1; i<=1000; i++)
    {
        for (j = 2; j<i; j++)
        {
            if (i % j==0)
            {
                count++;
                break;
                cout << count++ << "\n ";
            }
        }
        if (count==0 && i !=1)
         cout << i << "\t ";
         count=0;
    }

    cin.get();
}

void leapYear() {

    cout << "\n Tahun kabisat dari 1900-2050 \n";

    for (int i = 1900; i<=2050; i++)
    {
        if ((i % 400==0) || (i % 4==0 && i % 100!=0)) 
        {
            cout << i << " ";
        }
    }

    cin.get();
}

int main() {
    int x; 

    cout << "Type the number for the intended program : \n \n";
    cout << "1. Even number from 1-100 \n";
    cout << "2. Luas Segitiga \n";
    cout << "3. Odd numbers 1-1000 \n";
    cout << "4. Prime Numbers 1-100 \n";
    cout << "5. Leap Years 1900-2050 1-100 \n";

    cin >> x;

    switch (x)
    {
    case 1:
        evenNumber();
        break;
    
    case 2: 
        luasSegitiga();
        break;
    
    case 3: 
        oddNumber();
        break;
    
    case 4: 
        primeNumber();
        break;
    
    case 5: 
        leapYear();
        break;
        
    default:
        cout << "\n ERROR: Program not found \n";
        break;

    cin.get();
    return 0;
    }
}