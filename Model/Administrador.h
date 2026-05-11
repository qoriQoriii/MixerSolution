#ifndef _ADMINISTRADOR_H
#define _ADMINISTRADOR_H
#include "Usuario.h"

namespace ModelMixer {
    public ref class Administrador : public Usuario {
    public:
        property String^ contrasena;
    public:
        Administrador(int id, String^ nombre,  int dni, String^ contrasena);

      
      
    };
}
#endif