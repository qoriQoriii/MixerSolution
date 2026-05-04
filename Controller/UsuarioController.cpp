#include "pch.h"
#include "UsuarioController.h"

void ControllerMixer::UsuarioController::Initialize() {
    // Ejemplo de inicialización de un administrador
    // CreateAdmin(id, nombre, edad, dni, apellido, password)
    CreateAdmin(1, "admin", 30, "00000000", "Administrador Principal", "1234");
}

void ControllerMixer::UsuarioController::CreateAdmin(int id, String^ nom, int edad, String^ dni, String^ ape, String^ pass) {
    Administrador^ nuevo = gcnew Administrador(id, nom, edad, dni, ape, pass);
    usuarios->Add(nuevo);
}

void ControllerMixer::UsuarioController::CreateCliente(int id, String^ nom, int edadU, String^ dni, String^ ape, int edadC) {
    Cliente^ nuevo = gcnew Cliente(id, nom, edadU, dni, ape, edadC);
    usuarios->Add(nuevo);
}

Usuario^ ControllerMixer::UsuarioController::Read(String^ dni) {
    for (int i = 0; i < usuarios->Count; i++) {
        if (usuarios[i]->Dni == dni) {
            return usuarios[i];
        }
    }
    return nullptr;
}

void ControllerMixer::UsuarioController::Update(String^ dni, String^ nuevoNombre) {
    Usuario^ u = Read(dni);
    if (u != nullptr) {
        u->Nombre = nuevoNombre;
    }
}

void ControllerMixer::UsuarioController::Delete(String^ dni) {
    for (int i = 0; i < usuarios->Count; i++) {
        if (usuarios[i]->Dni == dni) {
            usuarios->RemoveAt(i);
            break;
        }
    }
}