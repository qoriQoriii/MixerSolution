#include "pch.h"
#include "PedidoController.h"

void ControllerMixer::PedidoController::Create(String^ datos, double precio) {
    pedidos->Add(gcnew Pedido(datos, precio));
}

List<Pedido^>^ ControllerMixer::PedidoController::ReadAll() {
    return pedidos;
}

void ControllerMixer::PedidoController::ClearHistory() {
    pedidos->Clear();
}