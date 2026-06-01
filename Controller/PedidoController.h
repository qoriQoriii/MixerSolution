#ifndef _PEDIDOCONTROLLER_H
#define _PEDIDOCONTROLLER_H



using namespace ModelMixer;


using namespace PersistenciaMixer;
using namespace System;
using namespace System::Collections::Generic;

namespace ControllerMixer {
    public ref class PedidoController {
    private:
        static List<Pedido^>^ listaPedidos = gcnew List<Pedido^>();
    public:
        static void Create(String^ datos, double precio);
        static List<Pedido^>^ GetAllPedidos();
        static void ClearHistory();


        //persistencias
        static void Guardar() {
            PersistenciaMixer::PersistenciaManager::GuardarPedidos(pedidos);
        }
        static void Cargar() {
            pedidos = PersistenciaMixer::PersistenciaManager::CargarPedidos();
        }

    };
}
#endif
