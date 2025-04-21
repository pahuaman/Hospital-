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
void noHayPacientesB();
void noHayPacientesE();
void borrarPaciente(vector<string>& Pacientes_G, int &borrar);


void menuTratamiento() {

    cout << "  ELIJA SU TRATAMIENTO: " << endl;
    cout << "D. Diabetes: " << endl;
    cout << "H. Hipertension: " << endl;
    cout << "C. Cirugia: " << endl;
    cout << "I. Intoxicacion: " << endl;

}//menuTratamiento


void encabezado() {

    cout << endl;
    cout << "\t\t + HOSPITAL MUERTO VIVIENTE + " << endl;
    cout << endl;

}//encabezado


void menuVerPacientes() {

    cout << "D. Pacientes con Diabetes: " << endl;
    cout << "H. Pacientes con Hipertension: " << endl;
    cout << "C. Pacientes con Cirugia: " << endl;
    cout << "I. Pacientes con Intoxicacion: " << endl;
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

        for (int i = 0; i < Pacientes_G.size(); i++) {

            cout << "NUMERO DE PACIENTE:  " << i+1 << endl;
            cout << Pacientes_G[i] << endl;
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


void borrarPaciente(vector<string>& Pacientes_G, int &borrar) {

    cout << endl;
    cout << "EL PACIENTE: " << endl;
    cout << Pacientes_G[borrar] << endl;
    cout << endl;
    cout << "FUE ELIMINADO CON EXITO!: " << endl;

    Pacientes_G.erase(Pacientes_G.begin() + borrar);

}//borrarPaciente


void noHayPacientesB() {

    cout << "No hay pacientes que borrar: "<< endl;
    cout << endl;
    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";

}//noHayPacientesB


void noHayPacientesE() {

    cout << "No hay pacientes para Editar: "<< endl;
    cout << endl;
    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";

}//noHayPacientesE


int main() {

    //variables
    int Diabetes = 800, Hipertension = 650, Cirugia = 1000, intoxicacion = 400;
    int edad, dias_internado, salir, borrar, editar;
    string nombre, Paciente;
    char opcion, tratamiento, continuar, VPacientes, borraOp, editarOp;

    //vectores
    vector<string> Pacientes_D; //Pacientes con Diabetes
    vector<string> Pacientes_H; //Pacientes con Hipertension
    vector<string> Pacientes_C; //Pacientes con Cirugia
    vector<string> Pacientes_I; //Pacientes con Intoxicacion


    do {

        system("Color 0B");
        encabezado();
        cout << "Pacientes ingresados: " << Pacientes_D.size() + Pacientes_H.size() + Pacientes_C.size() + Pacientes_I.size() << endl;
        cout << endl;
        cout << "  Diabetes: " << Pacientes_D.size() << "  Hipertension: " << Pacientes_H.size() << "  Cirugia: " << Pacientes_C.size() << "  Intoxicacion: " << Pacientes_I.size() << endl;
        cout << endl;
        cout << "MENU DE INICIO: " << endl;
        cout << "\tV. Ver pacientes: " << endl;
        cout << "\tI. Ingresar un paciente nuevo: " << endl;
        cout << "\tE. Editar:" << endl;
        cout << "\tB. Borrar:" << endl;
        cout << "\tS. Salir:" << endl;
        cout << endl;
        cout << "ELIGE TU OPCION: ";
        cin >> opcion;

        if(isdigit(opcion)) {

            noValida();
            cin >> continuar;

        }//if

          switch(opcion) {

              case 'V': case 'v': //Ver pacientes

                  system("cls");
                  encabezado();
                  cout << "Ver pacientes de: " << endl;
                  cout << "T. Todos los pacientes: " << endl;
                  menuVerPacientes();
                  cin >> VPacientes;

                  if(isdigit(VPacientes)) {

                      noValida();
                      cin >> continuar;

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

                      noValida();
                      cin >> continuar;

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


              case 'B': case 'b': //Borrar pacientes

                  system("cls");
                  encabezado();

                  if(Pacientes_D.size() == 0 && Pacientes_C.size() == 0 && Pacientes_H.size() == 0 && Pacientes_I.size() == 0) {

                        noHayPacientesB();
                        cin >> continuar;

                        system("cls");

                  }//if
                  else {

                        cout << "\t\t\t QUE PACIENTE DESEAS BORRAR? ----------------- " << endl;

                        //mostrarTodosPacientes(Pacientes_D, Pacientes_H, Pacientes_C, Pacientes_I);

                        cout << "El paciente que desea borrar se encuentra en el area de?: " << endl;
                        menuVerPacientes();
                        cin >> borraOp;

                        if(isdigit(borraOp)) {

                            noValida();
                            cin >> continuar;

                        }//if
                        else {

                            switch(borraOp) {

                                case 'D': case 'd': //Borrar Pac. Diabetes

                                    if(Pacientes_D.size() == 0) {

                                        system("cls");

                                        noHayPacientesB();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS BORRAR? " << endl;
                                        cout << "PACIENTES CON DIABETES: ----------------- " << Pacientes_D.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_D);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas borrar: ";
                                        cin >> borrar;
                                        borrar = borrar - 1;

                                        system("cls");

                                        borrarPaciente(Pacientes_D, borrar);

                                        cout << endl;
                                        cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                        cin >> continuar;

                                        system("cls");

                                    }//else

                                break; //case-d-D


                                case 'H': case 'h': //Borrar Pac. Hipertension

                                    if(Pacientes_H.size() == 0) {

                                        system("cls");

                                        noHayPacientesB();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS BORRAR? " << endl;
                                        cout << "PACIENTES CON HIPERTENSION: ----------------- " << Pacientes_H.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_H);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas borrar: ";
                                        cin >> borrar;
                                        borrar = borrar - 1;

                                        system("cls");

                                        borrarPaciente(Pacientes_H, borrar);

                                        cout << endl;
                                        cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                        cin >> continuar;

                                        system("cls");

                                    }//else

                                break; //case-h-H


                                case 'C': case 'c': //Borrar Pac. Cirugia

                                    if(Pacientes_C.size() == 0) {

                                        system("cls");

                                        noHayPacientesB();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS BORRAR? " << endl;
                                        cout << "PACIENTES CON CIRUGIA: ----------------- " << Pacientes_C.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_C);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas borrar: ";
                                        cin >> borrar;
                                        borrar = borrar - 1;

                                        system("cls");

                                        borrarPaciente(Pacientes_C, borrar);

                                        cout << endl;
                                        cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                        cin >> continuar;

                                        system("cls");

                                    }//else

                                break; //case-c-C


                                case 'I': case 'i': //Borrar Pac. Intoxicacion

                                    if(Pacientes_I.size() == 0) {

                                        system("cls");

                                        noHayPacientesB();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS BORRAR? " << endl;
                                        cout << "PACIENTES CON INTOXICACION: ----------------- " << Pacientes_I.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_I);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas borrar: ";
                                        cin >> borrar;
                                        borrar = borrar - 1;

                                        system("cls");

                                        borrarPaciente(Pacientes_I, borrar);

                                        cout << endl;
                                        cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                        cin >> continuar;

                                        system("cls");

                                    }//else

                                break; //case-i-I


                                default: //opcion no valida

                                    noValida();
                                    cin >> continuar;

                                    system("cls");

                                break; //dafault

                            }//switch

                        }//else

                  }//else


              break; //case-B-b


              case 'E': case 'e': //Editar

                  system("cls");
                  encabezado();

                  if(Pacientes_D.size() == 0 && Pacientes_C.size() == 0 && Pacientes_H.size() == 0 && Pacientes_I.size() == 0) {

                        noHayPacientesE();
                        cin >> continuar;

                        system("cls");

                  }//if
                  else {

                        cout << "\t\t\t QUE PACIENTE DESEAS EDITAR? ----------------- " << endl;

                        //mostrarTodosPacientes(Pacientes_D, Pacientes_H, Pacientes_C, Pacientes_I);

                        cout << "El paciente que desea editar se encuentra en el area de?: " << endl;
                        menuVerPacientes();
                        cin >> editarOp;

                        if(isdigit(editarOp)) {

                            noValida();
                            cin >> continuar;

                        }//if
                        else {

                            switch(editarOp) {

                                case 'd': case 'D': //Editar Pac. Diabetes

                                    if(Pacientes_D.size() == 0) {

                                        system("cls");

                                        noHayPacientesE();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS EDITAR? " << endl;
                                        cout << "PACIENTES CON DIABETES: ----------------- " << Pacientes_D.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_D);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas editar: ";
                                        cin >> editar;
                                        editar = editar - 1;

                                        system("cls");

                                        encabezado();

                                        cout << endl;
                                        cout << "EDITANDO LOS DATOS DEL PACIENTE: " << endl;
                                        cout << Pacientes_D[editar] << endl;
                                        cout << endl;

                                        cout << "INGRESA LOS NUEVOS DATOS: " << endl;
                                        cout << endl;
                                        cout << "Nombre del paciente: ";
                                        cin >> nombre;
                                        cout << "Edad del paciente: ";
                                        cin >> edad;
                                        menuTratamiento();
                                        cin >> tratamiento;

                                        if(isdigit(tratamiento)) {

                                            noValida();
                                            cin >> continuar;

                                        }//if
                                        else {

                                            switch(tratamiento) {

                                                case 'd': case 'D': //Editar Pac. Diabetes

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_D.erase(Pacientes_D.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_D.insert(Pacientes_D.begin() + editar, Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-d-D


                                                case 'h': case 'H': //Editar Pac. Hipertension

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_D.erase(Pacientes_D.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_H.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE HIPERTETNSION " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-h-H


                                                case 'c': case 'C': //Editar Pac. Cirugia

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_D.erase(Pacientes_D.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_C.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE CIRUGIA" << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-c-C


                                                case 'i': case 'I': //Editar Pac. Intoxicacion

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_D.erase(Pacientes_D.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_I.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE INTOXICACION " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-i-I


                                                default: //opcion no valida

                                                    noValida();
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //dafault

                                            }//switch

                                        }//else

                                    }//else

                                break; //case-d-D


                                case 'h': case 'H': //Editar Pac. Hipertension

                                    if(Pacientes_H.size() == 0) {

                                        system("cls");

                                        noHayPacientesE();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS EDITAR? " << endl;
                                        cout << "PACIENTES CON HIPERTENSION: ----------------- " << Pacientes_H.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_H);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas editar: ";
                                        cin >> editar;
                                        editar = editar - 1;

                                        system("cls");

                                        encabezado();

                                        cout << endl;
                                        cout << "EDITANDO LOS DATOS DEL PACIENTE: " << endl;
                                        cout << Pacientes_H[editar] << endl;
                                        cout << endl;

                                        cout << "INGRESA LOS NUEVOS DATOS: " << endl;
                                        cout << endl;
                                        cout << "Nombre del paciente: ";
                                        cin >> nombre;
                                        cout << "Edad del paciente: ";
                                        cin >> edad;
                                        menuTratamiento();
                                        cin >> tratamiento;

                                        if(isdigit(tratamiento)) {

                                            noValida();
                                            cin >> continuar;

                                        }//if
                                        else {

                                            switch(tratamiento) {

                                                case 'd': case 'D': //Editar Pac. Diabetes

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_H.erase(Pacientes_H.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_D.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE DIABETES " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-d-D


                                                case 'h': case 'H': //Editar Pac. Hipertension

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_H.erase(Pacientes_H.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_H.insert(Pacientes_H.begin() + editar, Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-h-H


                                                case 'c': case 'C': //Editar Pac. Cirugia

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_H.erase(Pacientes_H.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_C.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE CIRUGIA" << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-c-C


                                                case 'i': case 'I': //Editar Pac. Intoxicacion

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_H.erase(Pacientes_H.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_I.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE INTOXICACION " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-i-I


                                                default: //opcion no valida

                                                    noValida();
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //dafault

                                            }//switch

                                        }//else

                                    }//else

                                break; //case-h-H

                                case 'c': case 'C': //Editar Pac. Cirugia

                                    if(Pacientes_C.size() == 0) {

                                        system("cls");

                                        noHayPacientesE();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS EDITAR? " << endl;
                                        cout << "PACIENTES CON CIRUGIA: ----------------- " << Pacientes_C.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_C);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas editar: ";
                                        cin >> editar;
                                        editar = editar - 1;

                                        system("cls");

                                        encabezado();

                                        cout << endl;
                                        cout << "EDITANDO LOS DATOS DEL PACIENTE: " << endl;
                                        cout << Pacientes_C[editar] << endl;
                                        cout << endl;

                                        cout << "INGRESA LOS NUEVOS DATOS: " << endl;
                                        cout << endl;
                                        cout << "Nombre del paciente: ";
                                        cin >> nombre;
                                        cout << "Edad del paciente: ";
                                        cin >> edad;
                                        menuTratamiento();
                                        cin >> tratamiento;

                                        if(isdigit(tratamiento)) {

                                            noValida();
                                            cin >> continuar;

                                        }//if
                                        else {

                                            switch(tratamiento) {

                                                case 'd': case 'D': //Editar Pac. Diabetes

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_C.erase(Pacientes_C.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_D.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE DIABETES " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-d-D


                                                case 'h': case 'H': //Editar Pac. Hipertension

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_C.erase(Pacientes_C.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_H.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE HIPERTENSION" << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");


                                                break; //case-h-H


                                                case 'c': case 'C': //Editar Pac. Cirugia

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_C.erase(Pacientes_C.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_C.insert(Pacientes_C.begin() + editar, Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-c-C


                                                case 'i': case 'I': //Editar Pac. Intoxicacion

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_C.erase(Pacientes_C.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_I.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE INTOXICACION " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-i-I


                                                default: //opcion no valida

                                                    noValida();
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //dafault

                                            }//switch

                                        }//else

                                    }//else

                                break; //case-c-C

                                case 'i': case 'I': //Editar Pac. Intoxicacion

                                    if(Pacientes_I.size() == 0) {

                                        system("cls");

                                        noHayPacientesE();
                                        cin >> continuar;

                                        system("cls");

                                    }//if
                                    else {

                                        system("cls");

                                        cout << "\t\t\t QUE PACIENTE DESEAS EDITAR? " << endl;
                                        cout << "PACIENTES CON INTOXICACION: ----------------- " << Pacientes_I.size() << endl;
                                        cout << endl;
                                        mostrarPacientes(Pacientes_I);
                                        cout << endl;

                                        cout << "Ingresa el numero del paciente que deseas editar: ";
                                        cin >> editar;
                                        editar = editar - 1;

                                        system("cls");

                                        encabezado();

                                        cout << endl;
                                        cout << "EDITANDO LOS DATOS DEL PACIENTE: " << endl;
                                        cout << Pacientes_I[editar] << endl;
                                        cout << endl;

                                        cout << "INGRESA LOS NUEVOS DATOS: " << endl;
                                        cout << endl;
                                        cout << "Nombre del paciente: ";
                                        cin >> nombre;
                                        cout << "Edad del paciente: ";
                                        cin >> edad;
                                        menuTratamiento();
                                        cin >> tratamiento;

                                        if(isdigit(tratamiento)) {

                                            noValida();
                                            cin >> continuar;

                                        }//if
                                        else {

                                            switch(tratamiento) {

                                                case 'd': case 'D': //Editar Pac. Diabetes

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_I.erase(Pacientes_I.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_D.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE DIABETES " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-d-D


                                                case 'h': case 'H': //Editar Pac. Hipertension

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_I.erase(Pacientes_I.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_H.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE HIPERTENSION" << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");


                                                break; //case-h-H


                                                case 'c': case 'C': //Editar Pac. Cirugia

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_I.erase(Pacientes_I.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_C.push_back(Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! AHORA ESTA EN EL AREA DE CIRUGIA " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;


                                                break; //case-c-C


                                                case 'i': case 'I': //Editar Pac. Intoxicacion

                                                    system("cls");

                                                    cout << "Dias de tratamiento: ";
                                                    cin >> dias_internado;

                                                    Paciente = ingresaPaciente(nombre, edad, Hipertension, dias_internado);

                                                    Pacientes_I.erase(Pacientes_I.begin() + editar); //Borramos para que no se encimen los registros

                                                    Pacientes_I.insert(Pacientes_I.begin() + editar, Paciente);

                                                    Paciente = ""; //borramos lo que se haya guardado en esta variable

                                                    system("cls");

                                                    cout << "PACIENTE EDITADO CON EXITO! " << endl;

                                                    cout << endl;
                                                    cout << "Presiona la tecla 'C' y despues ENTER para continuar: ";
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //case-i-I


                                                default: //opcion no valida

                                                    noValida();
                                                    cin >> continuar;

                                                    system("cls");

                                                break; //dafault

                                            }//switch

                                        }//else

                                    }//else

                                break; //case-i-I


                                default: //opcion no valida

                                    noValida();
                                    cin >> continuar;

                                    system("cls");

                                break; //dafault

                            }//switch

                        }//else

                  }//else

              break; //case-e-E


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

              break; //dafault


          }//switch-menu


    }while(salir != 3); //do-while


    return 0;
}//main
