#include "pch.h"
#include "MixerController.h"

void ControllerMixer::MixerController::Initialize() {
    // Configuración inicial del Mixer principal
}

void ControllerMixer::MixerController::CreateMixer(int id, String^ ubi, String^ est, LinkedList<Bebida^>^ cat, LinkedList<Pedido^>^ ped, LinkedList<Tanque^>^ mat) {
    mixers->Add(gcnew Mixer(id, ubi, est, cat, ped, mat));
}

Mixer^ ControllerMixer::MixerController::GetMixer(int id) {
    for (int i = 0; i < mixers->Count; i++) {
        if (mixers[i]->Id == id) return mixers[i];
    }
    return nullptr;
}

void ControllerMixer::MixerController::UpdateStatus(int id, String^ status) {
    Mixer^ m = GetMixer(id);
    if (m != nullptr) m->Estado = status;
}