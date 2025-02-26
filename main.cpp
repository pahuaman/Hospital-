#include <iostream>
#include <string>
#include <vector>

using namespace std;


//prototipos
void mostrarTodosPacientes(vector<string> Pacientes_D, vector<string> Pacientes_H, vector<string> Pacientes_C, vector<string> Pacientes_I);
void mostrarPacientes(vector<string> Pacientes_G);
string ingresaPaciente(string nombre, int edad, int tratamiento, int dias_internado);
void ingresadoExito();
void noValida();
void menuVerPacientes();
void encabezado();
void menuTratamiento();


void menuTratamiento() {

    cout << "  ELIJA SU TRATAMIENTO: " << endl;
    cout << "D. Diabetes: " << endl;
    cout << "H. Hipertension: " << endl;
    cout << "C. Cirugia: " << endl;
    cout << "I. Intoxicacion: " << endl;

}//menuTratamiento


void encabezado() {

    cout << endl;
    cout << "\t + HOSPITAL MUERTO VIVIENTE + " << endl;
    cout << endl;

}//encabezado


void menuVerPacientes() {

    cout << "Ver pacientes de: " << endl;
    cout << "T. Ver todos los pacientes: " << endl;
    cout << "D. Ver pacientes con Diabetes: " << endl;
    cout << "H. Ver pacientes con Hipertension: " << endl;
    cout << "C. Ver pacientes con Cirugia: " << endl;
    cout << "I. Ver pacientes con Intoxicacion: " << endl;
    cout << "Elija su opcion: ";

}//menuVerPacientes


void noValida() {

    system("cls");

    encabezado();

    cout << "OPCION NO VALIDA! " << endl;

    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";

}//noValida


void ingresadoExito() {

    system("cls");
    cout << "PACIENTE INGRESADO CON EXITO! " << endl;

    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";

}//ingresadoExito


string ingresaPaciente(string nombre, int edad, int tratamiento, int dias_internado) {

    int Total = 0, Cuenta = 0;


    switch(tratamiento) {

        case 800: //Diabetes

            if (edad > 60) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.25);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Diabetes \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 25%\nSu cuenta es: $ " + std::to_string(Total);

            }//if
            else if (edad < 25) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.12);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Diabetes \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 12%\nSu cuenta es: $ " + std::to_string(Total);

            }//else-if
            else {

                Total = tratamiento * dias_internado;
                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Diabetes \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu cuenta es: $ " + std::to_string(Total);

            }//else

        break; //case-800


        case 650: //hipertension

            if (edad > 60) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.25);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Hipertension \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 25%\nSu cuenta es: $ " + std::to_string(Total);

            }//if
            else if (edad < 25) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.12);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Hipertension \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 12%\nSu cuenta es: $ " + std::to_string(Total);

            }//else-if
            else {

                Total = tratamiento * dias_internado;
                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Hipertension \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu cuenta es: $ " + std::to_string(Total);

            }//else

        break; //case-650


        case 1000: //Diabetes

            if (edad > 60) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.25);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Cirugia \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 25%\nSu cuenta es: $ " + std::to_string(Total);

            }//if
            else if (edad < 25) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.12);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Cirugia \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 12%\nSu cuenta es: $ " + std::to_string(Total);

            }//else-if
            else {

                Total = tratamiento * dias_internado;
                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Cirugia \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu cuenta es: $ " + std::to_string(Total);

            }//else

        break; //case-1000


        case 400: //Intoxicacion

            if (edad > 60) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.25);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Intoxicacion \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 25%\nSu cuenta es: $ " + std::to_string(Total);

            }//if
            else if (edad < 25) {

                Cuenta = tratamiento * dias_internado;
                Total  = Cuenta - (Cuenta * 0.12);

                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Intoxicacion \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu descuento es de 12%\nSu cuenta es: $ " + std::to_string(Total);

            }//else-if
            else {

                Total = tratamiento * dias_internado;
                return "Paciente: " + nombre + "\nEdad: " + std::to_string(edad) + "\nTratamiento: Intoxicacion \nDias en tratamiento: " + std::to_string(dias_internado) + "\nSu cuenta es: $ " + std::to_string(Total);

            }//else

        break; //case-400


        default:

            return "Tratamiento no valido!";

        break;

    }//switch


    return ""; //En caso de que no entre en el switch

}//ingresaPaciente


void mostrarPacientes(vector<string> Pacientes_G) {

    if(Pacientes_G.size() == 0) {

        cout << "No hay pacientes que mostrar" << endl;

    }//if
    else {

        for (string pac : Pacientes_G) {

            cout << pac << endl;
            cout << endl;

        }//for

    }//else

}//mostrarPacientes


void mostrarTodosPacientes(vector<string> Pacientes_D, vector<string> Pacientes_H, vector<string> Pacientes_C, vector<string> Pacientes_I) {

    cout << "PACIENTES CON DIABETES: ----------------- " << Pacientes_D.size() << endl;
    cout << endl;

    if(Pacientes_D.size() == 0) {

        cout << "No hay pacientes que mostrar" << endl;
        cout << endl;

    }//if
    else {

        for (string pac : Pacientes_D) {

            cout << pac << endl;
            cout << endl;

        }//for

    }//else


    cout << "PACIENTES CON HIPERTENSION: ----------------- " << Pacientes_H.size() << endl;
    cout << endl;

    if(Pacientes_H.size() == 0) {

        cout << "No hay pacientes que mostrar" << endl;
        cout << endl;

    }//if
    else {

        for (string pac : Pacientes_H) {

            cout << pac << endl;
            cout << endl;

        }//for

    }//else


    cout << "PACIENTES CON CIRUGIA: ----------------- " << Pacientes_C.size() << endl;
    cout << endl;

    if(Pacientes_C.size() == 0) {

        cout << "No hay pacientes que mostrar" << endl;
        cout << endl;

    }//if
    else {

        for (string pac : Pacientes_C) {

            cout << pac << endl;
            cout << endl;

        }//for

    }//else


    cout << "PACIENTES CON INTOXICACION: ----------------- " << Pacientes_I.size() << endl;
    cout << endl;

    if(Pacientes_I.size() == 0) {

        cout << "No hay pacientes que mostrar" << endl;
        cout << endl;

    }//if
    else {

        for (string pac : Pacientes_I) {

            cout << pac << endl;
            cout << endl;

        }//for

    }//else

}//mostrarTodosPacientes


int main() {

    //variables
    int Diabetes = 800, Hipertension = 650, Cirugia = 1000, intoxicacion = 400;
    int edad, dias_internado, salir;
    string nombre, Paciente;
    char opcion, tratamiento, continuar, VPacientes;

    //vectores
    vector<string> Pacientes_D; //Pacientes con Diabetes
    vector<string> Pacientes_H; //Pacientes con Hipertension
    vector<string> Pacientes_C; //Pacientes con Cirugia
    vector<string> Pacientes_I; //Pacientes con Intoxicacion


    do {

        system("Color 0B");
        encabezado();
        cout << "Pacientes ingresados: " << Pacientes_D.size() + Pacientes_H.size() + Pacientes_C.size() + Pacientes_I.size() << endl;
        cout << "  Diabetes: " << Pacientes_D.size() << "  Hipertension: " << Pacientes_H.size() << "  Cirugia: " << Pacientes_C.size() << "  Intoxicacion: " << Pacientes_I.size() << endl;
        cout << endl;
        cout << "V. Ver pacientes: " << endl;
        cout << "I. Ingresar un paciente nuevo: " << endl;
        cout << "S. Salir:" << endl;
        cin >> opcion;

        if(isdigit(opcion)) {

            system("cls");
            cout << "OPCION NO VALIDA! " << endl;

        }//if

          switch(opcion) {

              case 'V': case 'v': //Ver pacientes

                  system("cls");
                  encabezado();
                  menuVerPacientes();
                  cin >> VPacientes;

                  if(isdigit(VPacientes)) {

                      system("cls");
                      cout << "OPCION NO VALIDA! " << endl;

                  }//if
                  else {

                        switch(VPacientes) {

                            case 't': case 'T':

                                system("cls");

                                encabezado();

                                mostrarTodosPacientes(Pacientes_D, Pacientes_H, Pacientes_C, Pacientes_I);

                                cout << endl;
                                cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                cin >> continuar;

                                system("cls");

                            break; //case t-T


                            case 'd': case 'D':

                                system("cls");

                                encabezado();

                                cout << "PACIENTES CON DIABETES: ----------------- " << Pacientes_D.size() << endl;
                                cout << endl;
                                mostrarPacientes(Pacientes_D);

                                cout << endl;
                                cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                cin >> continuar;

                                system("cls");

                            break; //case d-D


                            case 'h': case 'H':

                                system("cls");

                                encabezado();

                                cout << "PACIENTES CON HIPERTENSION: ----------------- " << Pacientes_H.size() << endl;
                                cout << endl;
                                mostrarPacientes(Pacientes_H);

                                cout << endl;
                                cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                cin >> continuar;

                                system("cls");

                            break; //case h-H


                            case 'c': case 'C':

                                system("cls");

                                encabezado();

                                cout << "PACIENTES CON CIRUGIA: ----------------- " << Pacientes_C.size() << endl;
                                cout << endl;
                                mostrarPacientes(Pacientes_C);

                                cout << endl;
                                cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                cin >> continuar;

                                system("cls");

                            break; //case c-C


                            case 'i': case 'I':

                                system("cls");

                                encabezado();

                                cout << "PACIENTES CON INTOXICACION: ----------------- " << Pacientes_I.size() << endl;
                                cout << endl;
                                mostrarPacientes(Pacientes_I);

                                cout << endl;
                                cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                cin >> continuar;

                                system("cls");

                            break; //case i-I


                            default: //opcion no valida

                                noValida();
                                cin >> continuar;

                                system("cls");

                            break;

                        }//switch

                  }//else

              break; //case-v-V Ver pacientes


              case 'I': case 'i': //Ingresar pacientes

                  system("cls");

                  encabezado();

                  cout << "INGRESA LOS DATOS: " << endl;
                  cout << endl;
                  cout << "Nombre del paciente: ";
                  cin >> nombre;
                  cout << "Edad del paciente: ";
                  cin >> edad;
                  menuTratamiento();
                  cin >> tratamiento;

                  if(isdigit(tratamiento)) {

                      system("cls");
                      cout << "OPCION NO VALIDA! " << endl;

                  }//if


                    switch(tratamiento) {

                        case 'd': case 'D':

                            cout << "Dias de tratamiento: ";
                            cin >> dias_internado;

                            Paciente = ingresaPaciente(nombre, edad, Diabetes, dias_internado);

                            Pacientes_D.push_back(Paciente);

                            Paciente = ""; //borramos lo que se haya guardado en esta variable

                            ingresadoExito();
                            cin >> continuar;

                            system("cls");

                        break; //Diabetes


                        case 'h': case 'H':

                            cout << "Dias de tratamiento: ";
                            cin >> dias_internado;

                            Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                            Pacientes_H.push_back(Paciente);

                            Paciente = ""; //borramos lo que se haya guardado en esta variable

                            ingresadoExito();
                            cin >> continuar;

                            system("cls");

                        break; //Hipertension


                        case 'c': case 'C':

                            cout << "Dias de tratamiento: ";
                            cin >> dias_internado;

                            Paciente = ingresaPaciente(nombre, edad, Cirugia, dias_internado);

                            Pacientes_C.push_back(Paciente);

                            Paciente = ""; //borramos lo que se haya guardado en esta variable

                            ingresadoExito();
                            cin >> continuar;

                            system("cls");

                        break; //Cirugia


                        case 'i': case 'I':

                            cout << "Dias de tratamiento: ";
                            cin >> dias_internado;

                            Paciente = ingresaPaciente(nombre, edad, intoxicacion, dias_internado);

                            Pacientes_I.push_back(Paciente);

                            Paciente = ""; //borramos lo que se haya guardado en esta variable

                            ingresadoExito();
                            cin >> continuar;

                            system("cls");

                        break; //Hipertension


                        default: //opcion no valida

                            noValida();
                            cin >> continuar;

                            system("cls");

                        break;

                    }//switch

              break; //case-i-I Ingresar pacientes


              case 'S': case 's': //Salir

                  salir = 3; //bandera para marcar la salida

                  system("cls");

                  encabezado();

                  cout << "ADIOS! \nVuelva pronto! " << endl;

              break; //case-s-S


              default: //opcion no valida

                  noValida();
                  cin >> continuar;

                  system("cls");

              break;


          }//switch-menu


    }while(salir != 3); //do-while


    return 0;
}//main
