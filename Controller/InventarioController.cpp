#include "pch.h"
#include "InventarioController.h"

void ControllerMixer::InventarioController::Initialize() {
    // Inicializar insumos base como Agua, Café, etc.
}

void ControllerMixer::InventarioController::CreateInsumo(int id, String^ nom, int stockA, int stockM) {
    Insumo^ nuevo = gcnew Insumo(id, nom, stockA, stockM);
    insumos->Add(nuevo);
}

Insumo^ ControllerMixer::InventarioController::ReadInsumo(int id) {
    for (int i = 0; i < insumos->Count; i++) {
        if (insumos[i]->Id == id) return insumos[i];
    }
    return nullptr;
}

void ControllerMixer::InventarioController::CreateBebida(int id, String^ nom, int precio, LinkedList<Insumo^>^ receta) {
    Bebida^ nueva = gcnew Bebida(id, nom, precio, receta);
    catalogo->Add(nueva);
}

Bebida^ ControllerMixer::InventarioController::ReadBebida(int id) {
    for (int i = 0; i < catalogo->Count; i++) {
        if (catalogo[i]->Id == id) return catalogo[i];
    }
    return nullptr;
}

void ControllerMixer::InventarioController::DeleteBebida(int id) {
    for (int i = 0; i < catalogo->Count; i++) {
        if (catalogo[i]->Id == id) {
            catalogo->RemoveAt(i);
            break;
        }
    }
}