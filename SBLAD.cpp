#include<iostream>
#include<stdlib.h>
#include<string>
#include<cstring>
#include<conio.h>
#include<iomanip>
#include<fstream>
#include<windows.h>
using namespace std;
bool login(); //Prototype for the login
bool checkCredentials(const char* username, const char* password); //Another prototypr which isused inside another function to check if the password is correct or not
struct client_details {
    string first_name;
    string last_name;
    string gender;
    string bought_car_model;
    double long  price;
    double long CNIC;

};
int main() {
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 4);

    cout << "                       _            _    ____   ____        ___    ____     __      __     _____   " << endl;
    cout << "                      | |   ____   | |  |   _|  |  |    / /     /  __  \\  |   \\  /   |   |   __|  " << endl;
    cout << "                      | |  / /\\ \\  | |  |  |_   |  |    | |     | |  | |  | |\\ \\/ /| |   |  |__   " << endl;
    cout << "                      | | / /  \\ \\ | |  |  ||   |  |    | |     | |  | |  | | \\  / | |   |   __|  " << endl;
    cout << "                      | |/ /    \\ \\| |  |  |_   |  |__  | |__   | |__| |  | |      | |   |  |__   " << endl;
    cout << "                      |_/          \\_|  |____|  \\____/  \\____/   \\____/   |_|      |_|   |_____|  " << endl;

    SetConsoleTextAttribute(console_color, 14);

    while (true) {
        if (login()) {  //Calling the function
            int homepage;
            int bikebuy;
            char bikecancel;
            int bike_payment;
            double bike_cash;
            double missing_bike_cash;
            char bike_debit[6];
            char password[5];
            HANDLE console_color;
            console_color = GetStdHandle(STD_OUTPUT_HANDLE);//To color the text
           
            cout << endl;
            cout << endl;
            cout << endl;
        start:    //Goto function
                                                      //Homepage
            cout << "                                             |" << "=====================================" << "|" << endl;
            cout << "                                             |"; cout << "    Where do you want to visit" << "       |" << endl;
            cout << "                                             |" << "=====================================" << "|" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            cout << "                                |" << "^^^^^^^^^^^^^^" << "|" << "                           |" << "^^^^^^^^^^^^^^" << "|" << endl;
            cout << "                                |"; cout << "   1.Bikes" << "    |" << "                           |"; cout << "    2.Cars" << "    |" << endl;
            cout << "                                |" << "^^^^^^^^^^^^^^" << "|" << "                           |" << "^^^^^^^^^^^^^^" << "|" << endl;
            cout << endl;
            cout << endl;
            cout << "                                |" << "^^^^^^^^^^^^^^" << "|" << "                           |" << "^^^^^^^^^^^^^^" << "|" << endl;
            cout << "                                |"; cout << "   3.Staff" << "    |" << "                           |"; cout << "   4.Review" << "   |" << endl;
            cout << "                                |" << "^^^^^^^^^^^^^^" << "|" << "                           |" << "^^^^^^^^^^^^^^" << "|" << endl;
            cout << endl;
            cout << endl;
            cout << "                " << "                                       |" << "^^^^^^^^^^^^^^" << "|" << endl;
            cout << "                " << "                                       |"; cout << "   5.Sales" << "    |" << endl;
            cout << "                " << "                                       |" << "^^^^^^^^^^^^^^" << "|" << endl;
            cout << endl;
            cout << endl;
            cout << endl;
            SetConsoleTextAttribute(console_color, 5);
            cout << "Enter 1 to visit Bike store." << endl;
            Sleep(300);
            cout << "Enter 2 to visit car store." << endl;
            Sleep(300);
            cout << "Enter 3 to meet our staff." << endl;
            Sleep(300);
            cout << "Enter 4 to see your review." << endl;
            Sleep(300);
            cout << "Enter 5 to see our Previous sales." << endl;
            Sleep(300);
            cin >> homepage;
            cout << endl;
            cout << endl;
            
            SetConsoleTextAttribute(console_color, 14);

            if (homepage == 1) {

            Bike_point: //Goto Function
            SetConsoleTextAttribute(console_color, 12);

                cout << "                                      ____   _   _  __ _____  " << endl;
                cout << "                                     | __ ) | | | |/ /| ____| " << endl;
                cout << "                                     |  _ \\ | | |   / |  _|   " << endl;
                cout << "                                     | |_) || | | |\\ \\| |___  " << endl;
                cout << "                                     |____/ |_| |_|\\_||____| " << endl;
                cout << endl;
                cout << endl;
                cout << "                                                           Bike Store" << endl;
                cout << "                                  +------------------+-------------------+-----------+-----------+" << endl;
                cout << "                                  |   Name           |      Model        |   Price   | Condition |" << endl;
                cout << "                                  +------------------+-------------------+-----------+-----------+" << endl;
                cout << "                                  | 1.Yamaha         |      YZF-R3       |  4999.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 2.Kawasaki       |     Ninja 400     |  5499.99  |    Used   |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 3.Honda          |      CBR500R      |  6799.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 4.Suzuki         |     GSX-R600      |  7499.99  |    Used   |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 5.Ducati         |   Panigale V2     | 16999.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 6.Harley-Davidson|   Iron 883        |  9499.99  |    Used   |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 7.BMW            |     S1000RR       | 16995.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 8.Triumph        | Street Triple RS  | 12500.00  |    Used   |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 9.Aprilia        |      RS 660       | 11499.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 10.KTM           |     390 Duke      |  5299.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 11.Indian        |   Scout Bobber    | 12499.99  |    Used   |" << endl;
                Sleep(300);
                cout << "                                  |------------------|-------------------|-----------|-----------|" << endl;
                cout << "                                  | 12.MV Agusta     |      F3 800       | 16998.99  |    New    |" << endl;
                Sleep(300);
                cout << "                                  +------------------+-------------------+-----------+-----------+" << endl;
            portacal:  //Goto Function
                SetConsoleTextAttribute(console_color, 10);
                cout << "Exit Bike Store(y/n).";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto start;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    cout << "         Ok. Enjoy Shopping";
                }
                else {
                    cout << "Please type only y or n." << endl;
                    goto portacal;
                }
                Sleep(300);
                cout << endl;
                cout << endl;
                cout << "             Which bike do you want to buy?";
                cin >> bikebuy;
                cout << endl;
                Sleep(300);
                if (bikebuy == 1) {
                    cout << "      That was a best choice." << endl;
                    SetConsoleTextAttribute(console_color, 11);
                    cout << "      How would you like to pay?" << endl;
                    cout << endl;
                simba:
                    cout << "      1. Cash" << endl;
                    cout << "      2. Debit card" << endl;
                    cout << endl;
                    cin >> bike_payment;
                    Sleep(300);
                    if (bike_payment == 1) {
                        cout << "Your Total Bill is 4999.99" << endl;
                        cin >> bike_cash;
                        Sleep(300);
                        SetConsoleTextAttribute(console_color, 15);
                        if (bike_cash == 4999.99) {// If payment is equal to asked payment then this if statement will run
                            cout << "Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            Sleep(300);
                            //From here Client will provide his all info just for the records
                            int pod;
                            int john;
                            ofstream doctor;//To write data in the file
                            client_details call;
                            doctor.open("Moon1.txt", ios::app); //used app to add the text without overwritting the first text
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            Sleep(300);
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();//file closed

                            cout << "Press 1 to go back to Home Page = ";
                            cin >> pod;
                            Sleep(300);
                            if (pod == 1) {
                                goto start;
                            }
                            else {
                                cout << "Thank you for your shopping. " << endl;
                            }
                            SetConsoleTextAttribute(console_color, 9);
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                        if (bike_cash > 4999.99) {// If payment is greater then asked payment then this if statement will run
                            cout << "Here is your return money. ";
                            cout << 4999.99 - bike_cash;
                            cout << endl;
                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 12);
                            cout << "Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            Sleep(300);
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            //From here Client will provide his all info just for the records
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            Sleep(300);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();

                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 10);
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                        else if (bike_cash < 4999.99) {// If payment is less then asked payment then this if statement will run
                            cout << "Amount of " << 4999.99 - bike_cash << " is missing" << endl;
                            cout << "Missing Amount ";
                            cin >> missing_bike_cash;
                            cout << endl;
                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 12);
                            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            //From here Client will provide his all info just for the records
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();
                            Sleep(300);
                       
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;


                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                    }
                    SetConsoleTextAttribute(console_color, 11);
                    if (bike_payment == 2) {
                    pass_tryagain:
                        cout << "Enter your 5 digit debit card number.";
                        for (int i = 0; i < 5; i++) {
                            cin >> bike_debit[i];       // You can write as many digit as you want but it will only read the first five digits
                        }
                        bike_debit[5] = '\0';
                        cout << "Your Debit Card number is: ";
                        cout << endl;
                        for (int i = 0; i < 5; i++) {
                            cout << bike_debit[i];
                        }
                        cout << endl;
                        cout << "Enter your 4 digit code.";
                        for (int i = 0; i < 4; i++) {
                            password[i] = _getch(); //Used _getch() so it will clear the screen
                            cout << "*";     //It will not show the password but will print the * for every digit or alphabet
                        }
                        password[4] = '\0';
                        cout << endl;
                        Sleep(300);
                        if (strcmp(password, "3291") == 0) {    //To check if the password is correct or not
                            cout << "Payment Sucessful." << endl;
                            cout << "Thank You." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;

                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();
                            Sleep(300);
                 
                        }
                        else {
                            cout << "Invalid code.Payment Failed." << endl;
                            goto pass_tryagain;
                        }
                        cout << endl;
                        SetConsoleTextAttribute(console_color, 10);
                        cout << "Exit Bike Store(y/n).";
                        cin >> bikecancel;
                        if (bikecancel == 'y' || bikecancel == 'Y') {
                            goto start;
                        }
                        else if (bikecancel == 'n' || bikecancel == 'N') {
                            cout << "         Do you want buy another bike(y/n)?";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto Bike_point;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                goto start;
                            }
                        }
                    }
                    else {
                        cout << "Please select option from 1 and 2." << endl;
                        goto simba;
                    }
                }


                Sleep(300);

                if (bikebuy == 2) {
                    cout << "      That was a best choice." << endl;
                    SetConsoleTextAttribute(console_color, 11);
                    cout << "      How would you like to pay?" << endl;
                    cout << endl;
                simba1:
                    cout << "      1. Cash" << endl;
                    cout << "      2. Debit card" << endl;
                    cout << endl;
                    cin >> bike_payment;
                    Sleep(300);
                    if (bike_payment == 1) {
                        cout << "Your Total Bill is 5499.99" << endl;
                        cin >> bike_cash;
                        Sleep(300);
                        SetConsoleTextAttribute(console_color, 15);
                        if (bike_cash == 5499.99) {
                            cout << "Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            Sleep(300);
                            doctor.close();
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                        if (bike_cash > 5499.99) {
                            cout << "Here is your return money.";
                            cout << bike_cash - 5499.99;
                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 15);
                            cout << "Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            Sleep(300);
                            doctor.close();
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                        else if (bike_cash < 5499.99) {
                            cout << "Amount of " << 5499.99 - bike_cash << " is missing"<<endl;
                            cout << "Missing Amount ";
                            cin >> missing_bike_cash;
                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 12);
                            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            Sleep(300);
                            doctor.close();
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                    }
                    if (bike_payment == 2) {
                    pass_tryagain1:
                        SetConsoleTextAttribute(console_color, 11);
                        cout << "Enter your 5 digit debit card number.";
                        for (int i = 0; i < 5; i++) {
                            cin >> bike_debit[i];
                        }
                        bike_debit[5] = '\0';
                        cout << "Your Debit Card number is: ";
                        cout << endl;
                        for (int i = 0; i < 5; i++) {
                            cout << bike_debit[i];
                        }
                        cout << endl;
                        cout << "Enter your 4 digit code.";
                        for (int i = 0; i < 4; i++) {
                            password[i] = _getch();
                            cout << "*";
                        }
                        password[4] = '\0';
                        cout << endl;
                        Sleep(300);
                        if (strcmp(password, "3291") == 0) {
                            cout << "Payment Sucessful." << endl;
                            cout << "Thank You.";
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            cout << endl;

                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();
                        }
                        else {
                            cout << "Invalid code.Payment Failed." << endl;
                            goto pass_tryagain1;
                        }
                        SetConsoleTextAttribute(console_color, 10);
                        cout << "Exit Bike Store(y/n).";
                        cin >> bikecancel;
                        if (bikecancel == 'y' || bikecancel == 'Y') {
                            goto start;
                        }
                        else if (bikecancel == 'n' || bikecancel == 'N') {
                            cout << "         Do you want buy another bike(y/n)?";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto Bike_point;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                goto start;
                            }
                        }
                    }
                    else {
                        cout << "Please select option from 1 and 2." << endl;
                        goto simba1;
                    }
                }


                Sleep(300);
                if (bikebuy == 3) {
                    cout << "      That was a best choice." << endl;
                    SetConsoleTextAttribute(console_color, 11);
                    cout << "      How would you like to pay?" << endl;
                    cout << endl;
                simba2:
                    cout << "      1. Cash" << endl;
                    cout << "      2. Debit card" << endl;
                    cout << endl;
                    cin >> bike_payment;
                    Sleep(300);
                    if (bike_payment == 1) {
                        cout << "Your Total Bill is 6799.99" << endl;
                        cin >> bike_cash;
                        Sleep(300);
                        SetConsoleTextAttribute(console_color, 15);
                        if (bike_cash == 6799.99) {
                            cout << "Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();
                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 9);
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                        Sleep(300);
                        if (bike_cash > 6799.99) {
                            cout << "Here is your return money.";
                            cout << bike_cash - 6799.99;
                            SetConsoleTextAttribute(console_color, 12);
                            cout << "Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "  Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();
                            Sleep(300);
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                        else if (bike_cash < 6799.99) {
                            cout << "Amount of " << 6799.99 - bike_cash << " is missing"<<endl;
                            cout << "Missing Amount"<<endl;
                            cin >> missing_bike_cash;
                            SetConsoleTextAttribute(console_color, 12);
                            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            int pod;
                            int john;
                            ofstream doctor;
                            client_details call;
                            doctor.open("Moon1.txt", ios::app);
                            cout << "                                           Enter your Details " << endl;
                            cout << endl;
                            cout << "   First Name : ";
                            cin >> call.first_name;
                            doctor << "   First Name : " << call.first_name << endl;
                            cout << endl;
                            cout << "   Last Name : ";
                            cin >> call.last_name;
                            doctor << "   Last Name : " << call.last_name << endl;
                            cout << endl;
                            cout << "   Gender : ";
                            cin >> call.gender;
                            doctor << "   Gender : " << call.gender << endl;
                            cout << endl;
                            cout << "   Car/Bike Model : ";
                            cin >> call.bought_car_model;
                            doctor << "   Car Model : " << call.bought_car_model << endl;
                            cout << endl;
                            cout << "   Bill: ";
                            cin >> call.price;
                            doctor << "   Bill: " << call.price << endl;
                            cout << endl;
                            cout << "   CNIC No: ";
                            cin >> call.CNIC;
                            doctor << "   CNIC No: " << call.CNIC << endl;
                            doctor.close();
                            Sleep(300);
                            SetConsoleTextAttribute(console_color, 9);
                            cout << "Exit Bike Store(y/n).";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto start;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                cout << "         Do you want buy another bike(y/n)?";
                                cin >> bikecancel;
                                if (bikecancel == 'y' || bikecancel == 'Y') {
                                    goto Bike_point;
                                }
                                else if (bikecancel == 'n' || bikecancel == 'N') {
                                    goto start;
                                }
                            }
                        }
                    }
                    SetConsoleTextAttribute(console_color, 11);
                    if (bike_payment == 2) {
                    pass_tryagain2:
                        cout << "Enter your 5 digit debit card number.";
                        for (int i = 0; i < 5; i++) {
                            cin >> bike_debit[i];
                        }
                        bike_debit[5] = '\0';
                        cout << "Your Debit Card number is: ";
                        cout << endl;
                        for (int i = 0; i < 5; i++) {
                            cout << bike_debit[i];
                        }
                        cout << endl;
                        cout << "Enter your 4 digit code.";
                        for (int i = 0; i < 4; i++) {
                            password[i] = _getch();
                            cout << "*";
                        }
                        password[4] = '\0';
                        cout << endl;
                        Sleep(300);
                        if (strcmp(password, "3291") == 0) {
                            cout << "Payment Sucessful." << endl;
                            cout << "Thank You.";
                            cout << endl;
                            cout << endl;
                            cout << "                                              RECORD" << endl;
                            cout << endl;
                            cout << endl;
                            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto pass_tryagain2;
        }
        Sleep(300);
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba2;
    }
}
Sleep(300);
if (bikebuy == 4) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba3:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> bike_payment;
    Sleep(300);
    if (bike_payment == 1) {
        cout << "Your Total Bill is 7499.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 7499.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "    Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 7499.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 7499.99;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 7499.99) {
            cout << "Amount of " << 7499.99 - bike_cash << " is missing"<<endl;
            cout << "Missing Amount"<<endl;
            cin >> missing_bike_cash;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain3:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "  Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto pass_tryagain3;
        }
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        Sleep(300);
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba3;
    }
}


Sleep(300);
if (bikebuy == 5) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba4:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> bike_payment;
    Sleep(300);
    if (bike_payment == 1) {
        cout << "Your Total Bill is 16999.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 16999.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 16999.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 16999.99;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 16999.99) {
            cout << "Amount of " << 16999.99 - bike_cash << " is missing"<<endl;
            cout << "Missing Amount"<<endl;
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain4:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "    CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto pass_tryagain4;
        }
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        Sleep(300);
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba2;
    }
}


Sleep(300);
if (bikebuy == 6) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba5:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    Sleep(300);
    cin >> bike_payment;
    if (bike_payment == 1) {
        cout << "Your Total Bill is 9499.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 9499.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 9499.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 9499.99;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 9499.99) {
            cout << "Amount of " << 9499.99 - bike_cash << " is missing"<<endl;
            cout << "Missing Amount"<<endl;
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain5:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "  First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "  Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "  Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed.";
            goto pass_tryagain5;
        }
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel; 
        Sleep(300);
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba5;
    }
}

Sleep(300);

if (bikebuy == 7) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba6:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> bike_payment;
    Sleep(300);
    if (bike_payment == 1) {
        cout << "Your Total Bill is 16995.99" << endl;
        cin >> bike_cash;
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 16995.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "  Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "  CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 16995.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 16995.99;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
                        cin >> call.first_name;
                        doctor << "   First Name : " << call.first_name << endl;
                        cout << endl;
                        cout << "   Last Name : ";
                        cin >> call.last_name;
                        doctor << "   Last Name : " << call.last_name << endl;
                        cout << endl;
                        cout << "   Gender : ";
                        cin >> call.gender;
                        doctor << "   Gender : " << call.gender << endl;
                        cout << endl;
                        cout << "  Car/Bike Model : ";
                        cin >> call.bought_car_model;
                        doctor << "   Car Model : " << call.bought_car_model << endl;
                        cout << endl;
                        cout << "   Bill: ";
                        cin >> call.price;
                        doctor << "   Bill: " << call.price << endl;
                        cout << endl;
                        cout << "   CNIC No: ";
                        cin >> call.CNIC;
                        doctor << "   CNIC No: " << call.CNIC << endl;
                        doctor.close();
                        Sleep(300);
                        SetConsoleTextAttribute(console_color, 9);
                        cout << "Exit Bike Store(y/n).";
                        cin >> bikecancel;
                        Sleep(300);
                        if (bikecancel == 'y' || bikecancel == 'Y') {
                            goto start;
                        }
                        else if (bikecancel == 'n' || bikecancel == 'N') {
                            cout << "         Do you want buy another bike(y/n)?";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto Bike_point;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                goto start;
                            }
                        }
                    }
                    else if (bike_cash < 16995.99) {
                        cout << "Amount of " << 16995.99 - bike_cash << " is missing"<<endl;
                        cout << "Missing Amount"<<endl;
                        cin >> missing_bike_cash;
                        Sleep(300);
                        SetConsoleTextAttribute(console_color, 15);
                        cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
                        cout << endl;
                        cout << endl;
                        cout << "                                              RECORD" << endl;
                        cout << endl;
                        cout << endl;
                        int pod;
                        int john;
                        ofstream doctor;
                        client_details call;
                        doctor.open("Moon1.txt", ios::app);
                        cout << "                                           Enter your Details " << endl;
                        cout << endl;
                        cout << "   First Name : ";
                        cin >> call.first_name;
                        doctor << "   First Name : " << call.first_name << endl;
                        cout << endl;
                        cout << "  Last Name : ";
                        cin >> call.last_name;
                        doctor << "  Last Name : " << call.last_name << endl;
                        cout << endl;
                        cout << "   Gender : ";
                        cin >> call.gender;
                        doctor << "   Gender : " << call.gender << endl;
                        cout << endl;
                        cout << "   Car/Bike Model : ";
                        cin >> call.bought_car_model;
                        doctor << "   Car Model : " << call.bought_car_model << endl;
                        cout << endl;
                        cout << "   Bill: ";
                        cin >> call.price;
                        doctor << "  Bill: " << call.price << endl;
                        cout << endl;
                        cout << "   CNIC No: ";
                        cin >> call.CNIC;
                        doctor << "   CNIC No: " << call.CNIC << endl;
                        doctor.close();
                        Sleep(300);
                        SetConsoleTextAttribute(console_color, 9);
                        cout << "Exit Bike Store(y/n).";
                        cin >> bikecancel;
                        Sleep(300);
                        if (bikecancel == 'y' || bikecancel == 'Y') {
                            goto start;
                        }
                        else if (bikecancel == 'n' || bikecancel == 'N') {
                            cout << "         Do you want buy another bike(y/n)?";
                            cin >> bikecancel;
                            if (bikecancel == 'y' || bikecancel == 'Y') {
                                goto Bike_point;
                            }
                            else if (bikecancel == 'n' || bikecancel == 'N') {
                                goto start;
                            }
                        }
                    }
                }
                SetConsoleTextAttribute(console_color, 11);
                if (bike_payment == 2) {
                pass_tryagain6:
                    cout << "Enter your 5 digit debit card number.";
                    for (int i = 0; i < 5; i++) {
                        cin >> bike_debit[i];
                    }
                    cout << "Your Debit Card number is: ";
                    cout << endl;
                    for (int i = 0; i < 5; i++) {
                        cout << bike_debit[i];
                    }
                    bike_debit[5] = '\0';
                    cout << endl;
                    cout << "Enter your 4 digit code.";
                    for (int i = 0; i < 4; i++) {
                        password[i] = _getch();
                        cout << "*";
                    }
                    password[4] = '\0';
                    cout << endl;
                    Sleep(300);
                    if (strcmp(password, "3291") == 0) {
                        cout << "Payment Sucessful." << endl;
                        cout << "Thank You.";
                        cout << endl;
                        cout << endl;
                        cout << "                                              RECORD" << endl;
                        cout << endl;
                        cout << endl;
                        ofstream doctor;
                        client_details call;
                        doctor.open("Moon1.txt", ios::app);
                        cout << "                                           Enter your Details " << endl;
                        cout << endl;
                        cout << "    First Name : ";
                        cin >> call.first_name;
                        doctor << "   First Name : " << call.first_name << endl;
                        cout << endl;
                        cout << "   Last Name : ";
                        cin >> call.last_name;
                        doctor << "   Last Name : " << call.last_name << endl;
                        cout << endl;
                        cout << "   Gender : ";
                        cin >> call.gender;
                        doctor << "   Gender : " << call.gender << endl;
                        cout << endl;
                        cout << "   Car/Bike Model : ";
                        cin >> call.bought_car_model;
                        doctor << "   Car Model : " << call.bought_car_model << endl;
                        cout << endl;
                        cout << "   Bill: ";
                        cin >> call.price;
                        doctor << "   Bill: " << call.price << endl;
                        cout << endl;
                        cout << "   CNIC No: ";
                        cin >> call.CNIC;
                        doctor << "   CNIC No: " << call.CNIC << endl;
                        doctor.close();
                    }
                    else {
                        cout << "Invalid code.Payment Failed.";
                        goto pass_tryagain6;
                    }
                    SetConsoleTextAttribute(console_color, 10);
                    cout << "Exit Bike Store(y/n).";
                    cin >> bikecancel;
                    Sleep(300);
                    if (bikecancel == 'y' || bikecancel == 'Y') {
                        goto start;
                    }
                    else if (bikecancel == 'n' || bikecancel == 'N') {
                        cout << "         Do you want buy another bike(y/n)?";
                        cin >> bikecancel;
                        if (bikecancel == 'y' || bikecancel == 'Y') {
                            goto Bike_point;
                        }
                        else if (bikecancel == 'n' || bikecancel == 'N') {
                            goto start;
                        }
                    }
                }
                else {
                    cout << "Please select option from 1 and 2." << endl;
                    goto simba6;
                }
}
        
Sleep(300);
if (bikebuy == 8) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba7:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    Sleep(300);
    cin >> bike_payment;
    if (bike_payment == 1) {
        cout << "Your Total Bill is 12500.00" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 12500.00) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "  Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "  Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                Sleep(300);
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 12500.00) {
            cout << "Here is your return money.";
            cout << bike_cash - 12500.00;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 12500.00) {
            cout << "Amount of " << 12500.00 - bike_cash << " is missing";
            cout << "Missing Amount";
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "  Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain7:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code. Payment Failed." << endl;
            goto pass_tryagain7;
        }
        Sleep(300);
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba7;
    }
}

Sleep(300);
if (bikebuy == 9) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba8:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    Sleep(300);
    cin >> bike_payment;
    if (bike_payment == 1) {
        cout << "Your Total Bill is 11499.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 11499.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "  Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "  CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 11499.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 11499.99;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "  Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 11499.99) {
            cout << "Amount of " << 11499.99 - bike_cash << " is missing";
            cout << "Missing Amount";
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "  Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain8:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code. Payment Failed." << endl;
            goto pass_tryagain8;
        }
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        Sleep(300);
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba8;
    }
}


Sleep(300);
if (bikebuy == 10) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba9:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> bike_payment;
    Sleep(300);
    if (bike_payment == 1) {
        cout << "Your Total Bill is 5299.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 5299.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 5299.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 5299.99;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 5299.99) {
            cout << "Amount of " << 5299.99 - bike_cash << " is missing";
            cout << "Missing Amount";
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain9:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "  CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto pass_tryagain9;
        }
        Sleep(300);
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba9;
    }
}

Sleep(300);
if (bikebuy == 11) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba10:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    Sleep(300);
    cin >> bike_payment;
    if (bike_payment == 1) {
        cout << "Your Total Bill is 12499.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 12);
        if (bike_cash == 12499.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (bike_cash > 12499.99) {
            cout << "Here is your return money.";
            cout << bike_cash - 12499.99;
            SetConsoleTextAttribute(console_color, 15);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 12499.99) {
            cout << "Amount of " << 12499.99 - bike_cash << " is missing";
            cout << "Missing Amount";
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 15);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                             RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    Sleep(300);
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain10:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code. Payment Failed." << endl;
            goto pass_tryagain10;
        }
        Sleep(300);
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba10;
    }
}
Sleep(300);

if (bikebuy == 12) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
simba11:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    Sleep(300);
    cin >> bike_payment;
    if (bike_payment == 1) {
        cout << "Your Total Bill is 16998.99" << endl;
        cin >> bike_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (bike_cash == 16998.99) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            Sleep(300);
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        if (bike_cash > 16998.99) {
            cout << "Here is your return money.";
            cout << 16998.99 - bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
        else if (bike_cash < 16998.99) {
            cout << "Amount of " << bike_cash - 16998.99 << " is missing";
            cout << "Missing Amount";
            cin >> missing_bike_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit Bike Store(y/n).";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto start;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                cout << "         Do you want buy another bike(y/n)?";
                cin >> bikecancel;
                if (bikecancel == 'y' || bikecancel == 'Y') {
                    goto Bike_point;
                }
                else if (bikecancel == 'n' || bikecancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (bike_payment == 2) {
    pass_tryagain11:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> bike_debit[i];
        }
        bike_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << bike_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291")) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You.";
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed" << endl;
            goto pass_tryagain11;
        }
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit Bike Store(y/n).";
        cin >> bikecancel;
        Sleep(300);
        if (bikecancel == 'y' || bikecancel == 'Y') {
            goto start;
        }
        else if (bikecancel == 'n' || bikecancel == 'N') {
            cout << "         Do you want buy another bike(y/n)?";
            cin >> bikecancel;
            if (bikecancel == 'y' || bikecancel == 'Y') {
                goto Bike_point;
            }
            else if (bikecancel == 'n' || bikecancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto simba11;
    }
}
}
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << endl;
Sleep(300);
SetConsoleTextAttribute(console_color, 14);
      cout << "                       ____    _      ____  " << endl;
    cout << "                      / ___|  / \\    |  _ \\ " << endl;
    cout << "                     | |     / _ \\   | |_) |" << endl;
    cout << "                     | |___ / ___ \\  |  __/ " << endl;
    cout << "                      \\____/_/   \\_\\ |_|\\_\\   " << endl;

cout << endl;
cout << endl;
cout << endl;
Sleep(300);
char dish;
int carchoice;
double car_payment;
double car_cash;
char carcancel;
int missing_car_cash;
char car_debit[6];
if (homepage == 2) {
carpoint:
                      //Used strings to write the name,price,models,condition of the cars
    string car_name[6] = { "BMW 3 Series","Tesla Model 3","Ford Mustang","Honda Accord","Toyota Camry","Dodge Hellcat" };
    string car_model[6] = { "B32021","TM2023","FM2020","HA2022","TC2021","DH2022" };
    double car_price[7] = { 25000, 27000, 35000, 23000, 45000, 40000 };
    string car_condition[6] = { "Unused","Unused","Unused","used","used","Unused" };
    cout << "                       +----------------------+--------------------+----------------+------------------+" << endl;
    cout << "                       |         Name         |    Model Number    |      Price     |     Condition    |" << endl;
    cout << "                       +----------------------+--------------------+----------------+------------------+" << endl;
    for (int i = 0; i < 6; i++) {  //Used for loop to cout the above strings
        cout << "                       | " << setw(15) << car_name[i] << "      |" << setw(15) << car_model[i] << "     |" << setw(15) << car_price[i] << " |" << setw(15) << car_condition[i] << "   |" << endl;
        cout << "                       +----------------------+--------------------+----------------+------------------+" << endl;
    }
    cout << endl;
    cout << endl;
    Sleep(300);
    SetConsoleTextAttribute(console_color, 10);
    cout << "Do you want to exit the car store(y/n) : ";
    cin >> dish;
    if (dish == 'y' || dish == 'Y') {
        goto start;
    }
    else if (dish == 'n' || dish == 'N') {
        cout << "Ok. Enjoy Shopping. " << endl;
    }
    else {
        cout << "Please just type y or n. " << endl;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    Sleep(300);
    cout << "Which car do you want to buy : ";
    cin >> carchoice;
    Sleep(300);
    if (carchoice == 1) {
        cout << "      That was a best choice." << endl;
        SetConsoleTextAttribute(console_color, 11);
        cout << "      How would you like to pay?" << endl;
        cout << endl;
    zebra:
        cout << "      1. Cash" << endl;
        cout << "      2. Debit card" << endl;
        cout << endl;
        cin >> car_payment;
        Sleep(300);
        if (car_payment == 1) {
            cout << "Your Total Bill is 25000" << endl;
            cin >> car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 15);
            if (car_cash == 25000) {
                cout << "Congratulations on your new vehicle." << endl;
                cout << endl;
                cout << endl;
                cout << "                                              RECORD" << endl;
                cout << endl;
                cout << endl;
                int pod;
                int john;
                ofstream doctor;
                client_details call;
                doctor.open("Moon1.txt", ios::app);
                cout << "                                           Enter your Details " << endl;
                cout << endl;
                cout << "   First Name : ";
                cin >> call.first_name;
                doctor << "   First Name : " << call.first_name << endl;
                cout << endl;
                cout << "   Last Name : ";
                cin >> call.last_name;
                doctor << "   Last Name : " << call.last_name << endl;
                cout << endl;
                cout << "   Gender : ";
                cin >> call.gender;
                doctor << "   Gender : " << call.gender << endl;
                cout << endl;
                cout << "   Car/Bike Model : ";
                cin >> call.bought_car_model;
                doctor << "   Car Model : " << call.bought_car_model << endl;
                cout << endl;
                cout << "   Bill: ";
                cin >> call.price;
                doctor << "   Bill: " << call.price << endl;
                cout << endl;
                cout << "   CNIC No: ";
                cin >> call.CNIC;
                doctor << "   CNIC No: " << call.CNIC << endl;
                doctor.close();
                Sleep(300);
                SetConsoleTextAttribute(console_color, 9);
                cout << "Exit car Store(y/n).";
                cin >> carcancel;
                Sleep(300);
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto start;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    cout << "         Do you want to buy another car(y/n)?";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto carpoint;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        goto start;
                    }
                }
            }
            if (car_cash > 25000) {
                cout << "Here is your return money. ";
                cout << 25000 - car_cash;
                Sleep(300);
                SetConsoleTextAttribute(console_color, 12);
                cout << "Congratulations on your new vehicle." << endl;
                cout << endl;
                cout << endl;
                cout << "                                              RECORD" << endl;
                cout << endl;
                cout << endl;
                int pod;
                int john;
                ofstream doctor;
                client_details call;
                doctor.open("Moon1.txt", ios::app);
                cout << "                                           Enter your Details " << endl;
                cout << endl;
                cout << "   First Name : ";
                cin >> call.first_name;
                doctor << "   First Name : " << call.first_name << endl;
                cout << endl;
                cout << "   Last Name : ";
                cin >> call.last_name;
                doctor << "   Last Name : " << call.last_name << endl;
                cout << endl;
                cout << "   Gender : ";
                cin >> call.gender;
                doctor << "   Gender : " << call.gender << endl;
                cout << endl;
                cout << "   Car/Bike Model : ";
                cin >> call.bought_car_model;
                doctor << "   Car Model : " << call.bought_car_model << endl;
                cout << endl;
                cout << "   Bill: ";
                cin >> call.price;
                doctor << "   Bill: " << call.price << endl;
                cout << endl;
                cout << "   CNIC No: ";
                cin >> call.CNIC;
                doctor << "   CNIC No: " << call.CNIC << endl;
                doctor.close();
                Sleep(300);
                cout << "Exit car Store(y/n).";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto start;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    cout << "         Do you want to buy another car(y/n)?";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto carpoint;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        goto start;
                    }
                }
            }
            else if (car_cash < 25000) {
                cout << "Amount of " << 25000 - car_cash << " is missing" << endl;
                cout << "Missing Amount ";
                cin >> missing_car_cash;
                Sleep(300);
                SetConsoleTextAttribute(console_color, 15);
                cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
                cout << endl;
                cout << endl;
                cout << "                                              RECORD" << endl;
                cout << endl;
                cout << endl;
                int pod;
                int john;
                ofstream doctor;
                client_details call;
                doctor.open("Moon1.txt", ios::app);
                cout << "                                           Enter your Details " << endl;
                cout << endl;
                cout << "   First Name : ";
                cin >> call.first_name;
                doctor << "   First Name : " << call.first_name << endl;
                cout << endl;
                cout << "   Last Name : ";
                cin >> call.last_name;
                doctor << "   Last Name : " << call.last_name << endl;
                cout << endl;
                cout << "   Gender : ";
                cin >> call.gender;
                doctor << "   Gender : " << call.gender << endl;
                cout << endl;
                cout << "   Car/Bike Model : ";
                cin >> call.bought_car_model;
                doctor << "   Car Model : " << call.bought_car_model << endl;
                cout << endl;
                cout << "   Bill: ";
                cin >> call.price;
                doctor << "   Bill: " << call.price << endl;
                cout << endl;
                cout << "   CNIC No: ";
                cin >> call.CNIC;
                doctor << "   CNIC No: " << call.CNIC << endl;
                doctor.close();
                Sleep(300);
                cout << "Exit car Store(y/n).";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto start;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    cout << "         Do you want to buy another car(y/n)?";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto carpoint;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        goto start;
                    }
                }
            }
        }
        SetConsoleTextAttribute(console_color, 11);
        if (car_payment == 2) {
        laptop:
            cout << "Enter your 5 digit debit card number.";
            for (int i = 0; i < 5; i++) {
                cin >> car_debit[i];
            }
            car_debit[5] = '\0';
            cout << "Your Debit Card number is: ";
            cout << endl;
            for (int i = 0; i < 5; i++) {
                cout << car_debit[i];
            }
            cout << endl;
            cout << "Enter your 4 digit code.";
            for (int i = 0; i < 4; i++) {
                password[i] = _getch();
                cout << "*";
            }
            password[4] = '\0';
            cout << endl;
            Sleep(300);
            if (strcmp(password, "3291") == 0) {
                cout << "Payment Sucessful." << endl;
                cout << "Thank You." << endl;
                cout << endl;
                cout << endl;
                cout << "                                              RECORD" << endl;
                cout << endl;
                cout << endl;
                ofstream doctor;
                client_details call;
                doctor.open("Moon1.txt", ios::app);
                cout << "                                           Enter your Details " << endl;
                cout << endl;
                cout << "   First Name : ";
                cin >> call.first_name;
                doctor << "   First Name : " << call.first_name << endl;
                cout << endl;
                cout << "   Last Name : ";
                cin >> call.last_name;
                doctor << "   Last Name : " << call.last_name << endl;
                cout << endl;
                cout << "   Gender : ";
                cin >> call.gender;
                doctor << "   Gender : " << call.gender << endl;
                cout << endl;
                cout << "   Car/Bike Model : ";
                cin >> call.bought_car_model;
                doctor << "   Car Model : " << call.bought_car_model << endl;
                cout << endl;
                cout << "   Bill: ";
                cin >> call.price;
                doctor << "   Bill: " << call.price << endl;
                cout << endl;
                cout << "   CNIC No: ";
                cin >> call.CNIC;
                doctor << "   CNIC No: " << call.CNIC << endl;
                doctor.close();
            }
            else {
                cout << "Invalid code.Payment Failed." << endl;
                goto laptop;
            }
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        else {
            cout << "Please select option from 1 and 2." << endl;
            goto zebra;
        }
    }

    Sleep(300);
    if (carchoice == 2) {
        cout << "      That was a best choice." << endl;
        SetConsoleTextAttribute(console_color, 11);
        cout << "      How would you like to pay?" << endl;
        cout << endl;
    zebra1:
        cout << "      1. Cash" << endl;
        cout << "      2. Debit card" << endl;
        cout << endl;
        cin >> car_payment;
        Sleep(300);
        if (car_payment == 1) {
            cout << "Your Total Bill is 27000" << endl;
            cin >> car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 15);
            if (car_cash == 27000) {
                cout << "Congratulations on your new vehicle." << endl;
                cout << endl;
                cout << endl;
                cout << "                                              RECORD" << endl;
                cout << endl;
                cout << endl;
                int pod;
                int john;
                ofstream doctor;
                client_details call;
                doctor.open("Moon1.txt", ios::app);
                cout << "                                           Enter your Details " << endl;
                cout << endl;
                cout << "   First Name : ";
                cin >> call.first_name;
                doctor << "   First Name : " << call.first_name << endl;
                cout << endl;
                cout << "   Last Name : ";
                cin >> call.last_name;
                doctor << "   Last Name : " << call.last_name << endl;
                cout << endl;
                cout << "   Gender : ";
                cin >> call.gender;
                doctor << "   Gender : " << call.gender << endl;
                cout << endl;
                cout << "   Car/Bike Model : ";
                cin >> call.bought_car_model;
                doctor << "   Car Model : " << call.bought_car_model << endl;
                cout << endl;
                cout << "   Bill: ";
                cin >> call.price;
                doctor << "   Bill: " << call.price << endl;
                cout << endl;
                cout << "   CNIC No: ";
                cin >> call.CNIC;
                doctor << "   CNIC No: " << call.CNIC << endl;
                doctor.close();
                Sleep(300);
                SetConsoleTextAttribute(console_color, 9);
                cout << "Exit car Store(y/n).";
                cin >> carcancel;
                Sleep(300);
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto start;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    cout << "         Do you want to buy another car(y/n)?";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto carpoint;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        goto start;
                    }
                }
            }
            Sleep(300);
        if (car_cash > 27000) {
            cout << "Here is your return money. ";
            cout << 27000 - car_cash;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "  Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            Sleep(300);
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        else if (car_cash < 27000) {
            cout << "Amount of " << 27000 - car_cash << " is missing" << endl;
            cout << "Missing Amount ";
            cin >> missing_car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            Sleep(300);
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
    }
    Sleep(300);
    SetConsoleTextAttribute(console_color, 11);
    if (car_payment == 2) {
    laptop1:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> car_debit[i];
        }
        car_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << car_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto laptop1;
        }
        Sleep(300);
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit car Store(y/n).";
        cin >> carcancel;
        if (carcancel == 'y' || carcancel == 'Y') {
            goto start;
        }
        else if (carcancel == 'n' || carcancel == 'N') {
            cout << "         Do you want to buy another car(y/n)?";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto carpoint;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto zebra1;
    }
}


Sleep(300);
if (carchoice == 3) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
zebra2:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> car_payment;
    Sleep(300);
    if (car_payment == 1) {
        cout << "Your Total Bill is 27000" << endl;
        cin >> car_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (car_cash == 35000) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        Sleep(300);
        if (car_cash > 35000) {
            cout << "Here is your return money. ";
            cout << 35000 - car_cash;
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        else if (car_cash < 35000) {
            cout << "Amount of " << 35000 - car_cash << " is missing" << endl;
            cout << "Missing Amount ";
            cin >> missing_car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 15);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
    }
    SetConsoleTextAttribute(console_color, 11);
    if (car_payment == 2) {
    laptop2:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> car_debit[i];
        }
        car_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << car_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto laptop2;
        }
        SetConsoleTextAttribute(console_color, 10);
        cout << "Exit car Store(y/n).";
        cin >> carcancel;
        if (carcancel == 'y' || carcancel == 'Y') {
            goto start;
        }
        else if (carcancel == 'n' || carcancel == 'N') {
            cout << "         Do you want to buy another car(y/n)?";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto carpoint;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto zebra2;
    }
}
Sleep(300);
if (carchoice == 4) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
zebra3:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> car_payment;
    Sleep(300);
    if (car_payment == 1) {
        cout << "Your Total Bill is 23000" << endl;
        cin >> car_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (car_cash == 23000) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        if (car_cash > 23000) {
            cout << "Here is your return money. ";
            cout << 23000 - car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 10);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        else if (car_cash < 23000) {
            cout << "Amount of " << 23000 - car_cash << " is missing" << endl;
            cout << "Missing Amount ";
            cin >> missing_car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 15);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
    }
    Sleep(300);
    SetConsoleTextAttribute(console_color, 11);
    if (car_payment == 2) {
    laptop3:
        cout << "Enter your 5 digit debit card number.";
        for (int i = 0; i < 5; i++) {
            cin >> car_debit[i];
        }
        car_debit[5] = '\0';
        cout << "Your Debit Card number is: ";
        cout << endl;
        for (int i = 0; i < 5; i++) {
            cout << car_debit[i];
        }
        cout << endl;
        cout << "Enter your 4 digit code.";
        for (int i = 0; i < 4; i++) {
            password[i] = _getch();
            cout << "*";
        }
        password[4] = '\0';
        cout << endl;
        Sleep(300);
        if (strcmp(password, "3291") == 0) {
            cout << "Payment Sucessful." << endl;
            cout << "Thank You." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                            Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
        }
        else {
            cout << "Invalid code.Payment Failed." << endl;
            goto laptop3;
        }
        Sleep(300);
        SetConsoleTextAttribute(console_color, 9);
        cout << "Exit car Store(y/n).";
        cin >> carcancel;
        if (carcancel == 'y' || carcancel == 'Y') {
            goto start;
        }
        else if (carcancel == 'n' || carcancel == 'N') {
            cout << "         Do you want to buy another car(y/n)?";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto carpoint;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                goto start;
            }
        }
    }
    else {
        cout << "Please select option from 1 and 2." << endl;
        goto zebra3;
    }
}

Sleep(300);
if (carchoice == 5) {
    cout << "      That was a best choice." << endl;
    SetConsoleTextAttribute(console_color, 11);
    cout << "      How would you like to pay?" << endl;
    cout << endl;
zebra4:
    cout << "      1. Cash" << endl;
    cout << "      2. Debit card" << endl;
    cout << endl;
    cin >> car_payment;
    Sleep(300);
    if (car_payment == 1) {
        cout << "Your Total Bill is 45000" << endl;
        cin >> car_cash;
        Sleep(300);
        SetConsoleTextAttribute(console_color, 15);
        if (car_cash == 45000) {
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        if (car_cash > 45000) {
            cout << "Here is your return money. ";
            cout << 45000 - car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
            SetConsoleTextAttribute(console_color, 9);
            cout << "Exit car Store(y/n).";
            cin >> carcancel;
            if (carcancel == 'y' || carcancel == 'Y') {
                goto start;
            }
            else if (carcancel == 'n' || carcancel == 'N') {
                cout << "         Do you want to buy another car(y/n)?";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto carpoint;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    goto start;
                }
            }
        }
        else if (car_cash < 45000) {
            cout << "Amount of " << 45000 - car_cash << " is missing" << endl;
            cout << "Missing Amount ";
            cin >> missing_car_cash;
            Sleep(300);
            SetConsoleTextAttribute(console_color, 12);
            cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
            cout << endl;
            cout << endl;
            cout << "                                              RECORD" << endl;
            cout << endl;
            cout << endl;
            int pod;
            int john;
            ofstream doctor;
            client_details call;
            doctor.open("Moon1.txt", ios::app);
            cout << "                                           Enter your Details " << endl;
            cout << endl;
            cout << "   First Name : ";
            cin >> call.first_name;
            doctor << "   First Name : " << call.first_name << endl;
            cout << endl;
            cout << "   Last Name : ";
            cin >> call.last_name;
            doctor << "   Last Name : " << call.last_name << endl;
            cout << endl;
            cout << "   Gender : ";
            cin >> call.gender;
            doctor << "   Gender : " << call.gender << endl;
            cout << endl;
            cout << "   Car/Bike Model : ";
            cin >> call.bought_car_model;
            doctor << "   Car Model : " << call.bought_car_model << endl;
            cout << endl;
            cout << "   Bill: ";
            cin >> call.price;
            doctor << "   Bill: " << call.price << endl;
            cout << endl;
            cout << "   CNIC No: ";
            cin >> call.CNIC;
            doctor << "   CNIC No: " << call.CNIC << endl;
            doctor.close();
            Sleep(300);
                    SetConsoleTextAttribute(console_color, 10);
                    cout << "Exit car Store(y/n).";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto start;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        cout << "         Do you want to buy another car(y/n)?";
                        cin >> carcancel;
                        if (carcancel == 'y' || carcancel == 'Y') {
                            goto carpoint;
                        }
                        else if (carcancel == 'n' || carcancel == 'N') {
                            goto start;
                        }
                    }
                }
            }
            SetConsoleTextAttribute(console_color, 11);
            Sleep(300);
            if (car_payment == 2) {
            laptop4:
                cout << "Enter your 5 digit debit card number.";
                for (int i = 0; i < 5; i++) {
                    cin >> car_debit[i];
                }
                car_debit[5] = '\0';
                cout << "Your Debit Card number is: ";
                cout << endl;
                for (int i = 0; i < 5; i++) {
                    cout << car_debit[i];
                }
                cout << endl;
                cout << "Enter your 4 digit code.";
                for (int i = 0; i < 4; i++) {
                    password[i] = _getch();
                    cout << "*";
                }
                password[4] = '\0';
                cout << endl;
                Sleep(300);
                if (strcmp(password, "3291") == 0) {
                    cout << "Payment Sucessful." << endl;
                    cout << "Thank You." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "                                              RECORD" << endl;
                    cout << endl;
                    cout << endl;
                    ofstream doctor;
                    client_details call;
                    doctor.open("Moon1.txt", ios::app);
                    cout << "                                           Enter your Details " << endl;
                    cout << endl;
                    cout << "   First Name : ";
                    cin >> call.first_name;
                    doctor << "   First Name : " << call.first_name << endl;
                    cout << endl;
                    cout << "   Last Name : ";
                    cin >> call.last_name;
                    doctor << "   Last Name : " << call.last_name << endl;
                    cout << endl;
                    cout << "   Gender : ";
                    cin >> call.gender;
                    doctor << "   Gender : " << call.gender << endl;
                    cout << endl;
                    cout << "   Car/Bike Model : ";
                    cin >> call.bought_car_model;
                    doctor << "   Car Model : " << call.bought_car_model << endl;
                    cout << endl;
                    cout << "   Bill: ";
                    cin >> call.price;
                    doctor << "   Bill: " << call.price << endl;
                    cout << endl;
                    cout << "   CNIC No: ";
                    cin >> call.CNIC;
                    doctor << "   CNIC No: " << call.CNIC << endl;
                    doctor.close();
                }
                else {
                    cout << "Invalid code.Payment Failed." << endl;
                    goto laptop4;
                }
                Sleep(300);
                SetConsoleTextAttribute(console_color, 10);
                cout << "Exit car Store(y/n).";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto start;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    cout << "         Do you want to buy another car(y/n)?";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto carpoint;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        goto start;
                    }
                }
            }
            else {
                cout << "Please select option from 1 and 2." << endl;
                goto zebra4;
            }
        }


        Sleep(300);
        if (carchoice == 6) {
            cout << "      That was a best choice." << endl;
            SetConsoleTextAttribute(console_color, 11);
            cout << "      How would you like to pay?" << endl;
            cout << endl;
        zebra5:
            cout << "      1. Cash" << endl;
            cout << "      2. Debit card" << endl;
            cout << endl;
            cin >> car_payment;
            Sleep(300);
            if (car_payment == 1) {
                cout << "Your Total Bill is 40000" << endl;
                cin >> car_cash;
                Sleep(300);
                SetConsoleTextAttribute(console_color, 15);
                if (car_cash == 40000) {
                    cout << "Congratulations on your new vehicle." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "                                              RECORD" << endl;
                    cout << endl;
                    cout << endl;
                    int pod;
                    int john;
                    ofstream doctor;
                    client_details call;
                    doctor.open("Moon1.txt", ios::app);
                    cout << "                                           Enter your Details " << endl;
                    cout << endl;
                    cout << "   First Name : ";
                    cin >> call.first_name;
                    doctor << "   First Name : " << call.first_name << endl;
                    cout << endl;
                    cout << "   Last Name : ";
                    cin >> call.last_name;
                    doctor << "   Last Name : " << call.last_name << endl;
                    cout << endl;
                    cout << "   Gender : ";
                    cin >> call.gender;
                    doctor << "   Gender : " << call.gender << endl;
                    cout << endl;
                    cout << "   Car/Bike Model : ";
                    cin >> call.bought_car_model;
                    doctor << "   Car Model : " << call.bought_car_model << endl;
                    cout << endl;
                    cout << "   Bill: ";
                    cin >> call.price;
                    doctor << "   Bill: " << call.price << endl;
                    cout << endl;
                    cout << "   CNIC No: ";
                    cin >> call.CNIC;
                    doctor << "   CNIC No: " << call.CNIC << endl;
                    doctor.close();
                    Sleep(300);
                    SetConsoleTextAttribute(console_color, 9);
                    cout << "Exit car Store(y/n).";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto start;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        cout << "         Do you want to buy another car(y/n)?";
                        cin >> carcancel;
                        if (carcancel == 'y' || carcancel == 'Y') {
                            goto carpoint;
                        }
                        else if (carcancel == 'n' || carcancel == 'N') {
                            goto start;
                        }
                    }
                }
                if (car_cash > 40000) {
                    cout << "Here is your return money. ";
                    cout << 40000 - car_cash;
                    Sleep(300);
                    SetConsoleTextAttribute(console_color, 12);
                    cout << "Congratulations on your new vehicle." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "                                              RECORD" << endl;
                    cout << endl;
                    cout << endl;
                    int pod;
                    int john;
                    ofstream doctor;
                    client_details call;
                    doctor.open("Moon1.txt", ios::app);
                    cout << "                                           Enter your Details " << endl;
                    cout << endl;
                    cout << "   First Name : ";
                    cin >> call.first_name;
                    doctor << "   First Name : " << call.first_name << endl;
                    cout << endl;
                    cout << "   Last Name : ";
                    cin >> call.last_name;
                    doctor << "   Last Name : " << call.last_name << endl;
                    cout << endl;
                    cout << "   Gender : ";
                    cin >> call.gender;
                    doctor << "   Gender : " << call.gender << endl;
                    cout << endl;
                    cout << "   Car/Bike Model : ";
                    cin >> call.bought_car_model;
                    doctor << "   Car Model : " << call.bought_car_model << endl;
                    cout << endl;
                    cout << "   Bill: ";
                    cin >> call.price;
                    doctor << "   Bill: " << call.price << endl;
                    cout << endl;
                    cout << "   CNIC No: ";
                    cin >> call.CNIC;
                    doctor << "   CNIC No: " << call.CNIC << endl;
                    doctor.close();
                    Sleep(300);
                    SetConsoleTextAttribute(console_color, 9);
                    cout << "Exit car Store(y/n).";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto start;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        cout << "         Do you want to buy another car(y/n)?";
                        cin >> carcancel;
                        if (carcancel == 'y' || carcancel == 'Y') {
                            goto carpoint;
                        }
                        else if (carcancel == 'n' || carcancel == 'N') {
                            goto start;
                        }
                    }
                }
                else if (car_cash < 40000) {
                    cout << "Amount of " << 40000 - car_cash << " is missing" << endl;
                    cout << "Missing Amount ";
                    cin >> missing_car_cash;
                    Sleep(300);
                    SetConsoleTextAttribute(console_color, 12);
                    cout << "Now your amount is clear. Congratulations on your new vehicle." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "                                              RECORD" << endl;
                    cout << endl;
                    cout << endl;
                    int pod;
                    int john;
                    ofstream doctor;
                    client_details call;
                    doctor.open("Moon1.txt", ios::app);
                    cout << "                                           Enter your Details " << endl;
                    cout << endl;
                    cout << "   First Name : ";
                    cin >> call.first_name;
                    doctor << "   First Name : " << call.first_name << endl;
                    cout << endl;
                    cout << "   Last Name : ";
                    cin >> call.last_name;
                    doctor << "   Last Name : " << call.last_name << endl;
                    cout << endl;
                    cout << "   Gender : ";
                    cin >> call.gender;
                    doctor << "   Gender : " << call.gender << endl;
                    cout << endl;
                    cout << "   Car/Bike Model : ";
                    cin >> call.bought_car_model;
                    doctor << "   Car Model : " << call.bought_car_model << endl;
                    cout << endl;
                    cout << "   Bill: ";
                    cin >> call.price;
                    doctor << "   Bill: " << call.price << endl;
                    cout << endl;
                    cout << "   CNIC No: ";
                    cin >> call.CNIC;
                    doctor << "   CNIC No: " << call.CNIC << endl;
                    doctor.close();
                    Sleep(300);
                    SetConsoleTextAttribute(console_color, 9);
                    cout << "Exit car Store(y/n).";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto start;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        cout << "         Do you want to buy another car(y/n)?";
                        cin >> carcancel;
                        if (carcancel == 'y' || carcancel == 'Y') {
                            goto carpoint;
                        }
                        else if (carcancel == 'n' || carcancel == 'N') {
                            goto start;
                        }
                    }
                }
            }
            SetConsoleTextAttribute(console_color, 11);
            Sleep(300);
            if (car_payment == 2) {
            laptop5:
                cout << "Enter your 5 digit debit card number.";
                for (int i = 0; i < 5; i++) {
                    cin >> car_debit[i];
                }
                car_debit[5] = '\0';
                cout << "Your Debit Card number is: ";
                cout << endl;
                for (int i = 0; i < 5; i++) {
                    cout << car_debit[i];
                }
                cout << endl;
                cout << "Enter your 4 digit code.";
                for (int i = 0; i < 4; i++) {
                    password[i] = _getch();
                    cout << "*";
                }
                password[4] = '\0';
                cout << endl;
                Sleep(300);
                if (strcmp(password, "3291") == 0) {
                    cout << "Payment Sucessful." << endl;
                    cout << "Thank You." << endl;
                    cout << endl;
                    cout << endl;
                    cout << "                                              RECORD" << endl;
                    cout << endl;
                    ofstream doctor;
                    client_details call;
                    doctor.open("Moon1.txt", ios::app);
                    cout << "                                           Enter your Details " << endl;
                    cout << endl;
                    cout << "   First Name : ";
                    cin >> call.first_name;
                    doctor << "   First Name : " << call.first_name << endl;
                    cout << endl;
                    cout << "   Last Name : ";
                    cin >> call.last_name;
                    doctor << "   Last Name : " << call.last_name << endl;
                    cout << endl;
                    cout << "   Gender : ";
                    cin >> call.gender;
                    doctor << "   Gender : " << call.gender << endl;
                    cout << endl;
                    cout << "   Car/Bike Model : ";
                    cin >> call.bought_car_model;
                    doctor << "   Car Model : " << call.bought_car_model << endl;
                    cout << endl;
                    cout << "   Bill: ";
                    cin >> call.price;
                    doctor << "   Bill: " << call.price << endl;
                    cout << endl;
                    cout << "   CNIC No: ";
                    cin >> call.CNIC;
                    doctor << "   CNIC No: " << call.CNIC << endl;
                    doctor.close();
                }
                else {
                    cout << "Invalid code.Payment Failed." << endl;
                    goto laptop5;
                }
                Sleep(300);
                SetConsoleTextAttribute(console_color, 9);
                cout << "Exit car Store(y/n).";
                cin >> carcancel;
                if (carcancel == 'y' || carcancel == 'Y') {
                    goto start;
                }
                else if (carcancel == 'n' || carcancel == 'N') {
                    cout << "         Do you want to buy another car(y/n)?";
                    cin >> carcancel;
                    if (carcancel == 'y' || carcancel == 'Y') {
                        goto carpoint;
                    }
                    else if (carcancel == 'n' || carcancel == 'N') {
                        goto start;
                    }
                }
            }
            else {
                cout << "Please select option from 1 and 2." << endl;
                goto zebra5;
            }

        }
    }
    system("cls");
    int phone;
    int charger;
    if (homepage == 3) {
        ifstream van;   //To read from the file
        van.open("shooter.txt");
        if (van.is_open()) {
            string para;
            while (van.eof() == 0) {    //Run the while loop till the end of the file
                getline(van, para);
                cout << endl;
                cout << para;
            }
            van.close(); //file closed
        }
        else {
            cout << "Error. Couldn't open file." << endl;
        }
        cout << "Press 1 to go back to Home page." << endl;
        cin >> charger;
        if (charger == 1) {
            goto start;
        }
        else {
            cout << "Only press 1.";
        }
    }
    system("cls");
    if (homepage == 4) {
        ofstream review1;    //Read from the file
        review1.open("cat.txt");
        if (review1.is_open(), ios::app) {   //Open the present file . If the file is not present it will create the file and open it
            cout << "Write your review." << endl;
            //system("pause");
            string sofa1;
            while (true) {
                getline(cin, sofa1);
                if (sofa1 == "finish") {
                    break;
                }
                cout << endl;
                review1 << sofa1;
            }
            review1.close();
            cout << "Review has been added. Thankyou " << endl;
        }
        else {
            cout << "Error. Couldn't open file." << endl;
        }
    }
    system("cls");
    if (homepage == 5) {
        int pod1;
        ifstream wishes("Moon1.txt");
        if (!wishes) {    //If the fileis not present or created
            cout << "Unable to open file for reading." << endl;
            return 1;
        }

        string line;
        while (getline(wishes, line)) {  //will write the text including spaces 
            cout << line << endl;
        }

        wishes.close();
        cout << "Press 1 to go back to Home Page = ";
        cin >> pod1;
        if (pod1 == 1) {
            goto start;
        }
        else {
            cout << "Thank you for your shopping. " << endl;
        }
    }
    }
    else {
        cout << "Login failed. Try again." << endl;
    }

    }
    return 0;
}

bool login() { //login function
    HANDLE console_color;
    console_color = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(console_color, 10);
    cout << endl;
    cout << endl;
    cout << endl;
    char username[50];
    char password[7];
    cout << "                            +------Login--------------------------------------------+" << endl;
    cout << "                            |                                                       |" << endl;
    cout << "                            |  Enter your username:  ";
    cin.getline(username, 50);
    //cout<<endl;
    cout << "                            |                                                       |" << endl;
    cout << "                            |                                                       |" << endl;
    cout << "                            |   Enter your password:  ";
    for (int i = 0; i < 6; i++) {
        password[i] = _getch();
        cout << "*";
    }
    cout << endl;
    password[6] = '\0';
    cout << "                            |                                                       |" << endl;
    cout << "                            |                                                       |" << endl;
    cout << "                            +-------------------------------------------------------+" << endl;
    if (checkCredentials(username, password)) {
        //cout<<"correct username and password.";
        return true;
    }
    else {
        cout << "Incorrect login info." << endl << endl;;
        return false;
    }
}
bool checkCredentials(const char* username, const char* password) { //To check if the passwors is correct or not
    return (strcmp(username, "hassanmehmood123@gmail.com") == 0 && strcmp(password, "543210") == 0);
}