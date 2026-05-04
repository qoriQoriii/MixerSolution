#pragma once
#ifndef _HARDWARECONTROLLER_H
#define _HARDWARECONTROLLER_H

#include "Componente.h"
#include "Motor.h"
#include "Valvula.h"
#include "Sensor.h"
#include "Tanque.h"

using namespace ModelMixer;
using namespace System;
using namespace System::Collections::Generic;

namespace ControllerMixer {
    public ref class HardwareController {
    public:
        static List<Componente^>^ dispositivos = gcnew List<Componente^>();

        static void Initialize();

        // Métodos de fábrica para crear cada tipo
        static void AddMotor(int id, String^ nom, String^ est, double torque);
        static void AddValvula(int id, String^ nom, String^ est, double flujo, double tiempo);
        static void AddSensor(int id, String^ nom, String^ est, double litrado);
        static void AddTanque(int id, String^ nom, String^ est, Insumo^ ins, double nivel);

        static Componente^ GetById(int id);
        static void UpdateEstado(int id, String^ nuevoEstado);
    };
}
#endif