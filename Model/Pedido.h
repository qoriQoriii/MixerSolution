#ifndef _PEDIDO_H
#define _PEDIDO_H
using namespace System;

namespace ModelMixer {
    public ref class Pedido {
    public:
        property String^ datosDelCliente;
        property double precio;
    public:
        Pedido(String^ datos, double precio);

   };
}
#endif