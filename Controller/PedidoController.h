#ifndef _PEDIDOCONTROLLER_H
#define _PEDIDOCONTROLLER_H

#include "Pedido.h"

using namespace ModelMixer;
using namespace System;
using namespace System::Collections::Generic;

namespace ControllerMixer {
    public ref class PedidoController {
    public:
        static List<Pedido^>^ pedidos = gcnew List<Pedido^>();

        static void Create(String^ datos, double precio);
        static List<Pedido^>^ ReadAll();
        static void ClearHistory();
    };
}
#endif
