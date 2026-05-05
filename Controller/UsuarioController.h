#pragma once
#ifndef _USUARIOCONTROLLER_H
#define _USUARIOCONTROLLER_H


using namespace ModelMixer;
using namespace System;
using namespace System::Collections::Generic;

namespace ControllerMixer {
    public ref class UsuarioController {
    public:
        static List<Usuario^>^ usuarios = gcnew List<Usuario^>();

        static void Initialize();
        // Create para Administrador
        static void CreateAdmin(int id, String^ nom, int edad, String^ dni, String^ ape, String^ pass);
        // Create para Cliente
        static void CreateCliente(int id, String^ nom, int edadU, String^ dni, String^ ape, int edadC);

        static Usuario^ Read(String^ dni);
        static void Update(String^ dni, String^ nuevoNombre);
        static void Delete(String^ dni);
    };
}
#endif
