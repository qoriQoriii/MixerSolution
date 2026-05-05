#pragma once
#ifndef _INVENTARIOCONTROLLER_H
#define _INVENTARIOCONTROLLER_H



using namespace ModelMixer;
using namespace System;
using namespace System::Collections::Generic;

namespace ControllerMixer {
    public ref class InventarioController {
    public:
        static List<Insumo^>^ insumos = gcnew List<Insumo^>();
        static List<Bebida^>^ catalogo = gcnew List<Bebida^>();

        static void Initialize();

        // CRUD Insumos
        static void CreateInsumo(int id, String^ nom, int stockA, int stockM);
        static Insumo^ ReadInsumo(int id);

        // CRUD Bebidas
        static void CreateBebida(int id, String^ nom, int precio, LinkedList<Insumo^>^ receta);
        static Bebida^ ReadBebida(int id);
        static void DeleteBebida(int id);
    };
}
#endif