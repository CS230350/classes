#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
public:

string brand;
string model;
string plateNumber;
int year;
string maxSpeed;
string costOfRent;

};

int main(){

Car carData1;
carData1.brand = "BMW";
carData1.model = "M8";
carData1.plateNumber = "4L3G5YL57LU45";
carData1.year = 2023;
carData1.maxSpeed = "250km/h";
carData1.costOfRent = "300$";

Car carData2;
carData2.brand = "BMW";  
carData2.model = "M6";
carData2.plateNumber = "j35gu2352uy45";
carData2.year = 2018;
carData2.maxSpeed = "305km/h";
carData2.costOfRent = "250$";

Car carData3;
carData3.brand = "BMW";
carData3.model = "M4 CS";
carData3.plateNumber = "U3WY45GUWY45G";
carData3.year = 2018;
carData3.maxSpeed = "285km/h";
carData3.costOfRent = "220$";

Car carData4;
carData4.brand = "BMW";
carData4.model = "M3";
carData4.plateNumber = "KUYG54G4U56G4";
carData4.year = 2023;
carData4.maxSpeed = "302km/h";
carData4.costOfRent = "280$";

Car carData5;
carData5.brand = "BMW";
carData5.model = "X6";
carData5.plateNumber = "54I3UY5G4U6GF";
carData5.year = 2022;
carData5.maxSpeed = "250km/h";
carData5.costOfRent = "300$";

cout << carData1.brand << " " << carData1.model << " " << carData1.plateNumber << " " << carData1.year << " " << carData1.maxSpeed << " " << carData1.costOfRent << endl;
cout << carData2.brand << " " << carData2.model << " " << carData2.plateNumber << " " << carData2.year << " " << carData2.maxSpeed << " " << carData2.costOfRent << endl;
cout << carData3.brand << " " << carData3.model << " " << carData3.plateNumber << " " << carData3.year << " " << carData3.maxSpeed << " " << carData3.costOfRent << endl;
cout << carData4.brand << " " << carData4.model << " " << carData4.plateNumber << " " << carData4.year << " " << carData4.maxSpeed << " " << carData4.costOfRent << endl;
cout << carData5.brand << " " << carData5.model << " " << carData5.plateNumber << " " << carData5.year << " " << carData5.maxSpeed << " " << carData5.costOfRent << endl;


    return 0;
}