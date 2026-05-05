#include "pch.h"
#include "HadwareController.h"


using namespace System;
using namespace ModelMixer;

void ControllerMixer::HardwareController::Initialize() {
    // Aquí se instanciarían los motores, válvulas y sensores físicos de la máquina
}

void ControllerMixer::HardwareController::AddMotor(int id, String^ nom, String^ est, double torque) {
    dispositivos->Add(gcnew Motor(id, nom, est, torque));
}

void ControllerMixer::HardwareController::AddValvula(int id, String^ nom, String^ est, double flujo, double tiempo) {
    dispositivos->Add(gcnew Valvula(id, nom, est, flujo, tiempo));
}

void ControllerMixer::HardwareController::AddSensor(int id, String^ nom, String^ est, double litrado) {
    dispositivos->Add(gcnew Sensor(id, nom, est, litrado));
}

void ControllerMixer::HardwareController::AddTanque(int id, String^ nom, String^ est, Insumo^ ins, double nivel) {
    dispositivos->Add(gcnew Tanque(id, nom, est, ins, nivel));
}

Componente^ ControllerMixer::HardwareController::GetById(int id) {
    for (int i = 0; i < dispositivos->Count; i++) {
        if (dispositivos[i]->Id == id) return dispositivos[i];
    }
    return nullptr;
}

void ControllerMixer::HardwareController::UpdateEstado(int id, String^ nuevoEstado) {
    Componente^ comp = GetById(id);
    if (comp != nullptr) comp->Estado = nuevoEstado;
}