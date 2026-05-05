#ifndef _MIXERCONTROLLER_H
#define _MIXERCONTROLLER_H



using namespace ModelMixer;
using namespace System;
using namespace System::Collections::Generic;

namespace ControllerMixer {
    public ref class MixerController {
    public:
        static List<Mixer^>^ mixers = gcnew List<Mixer^>();

        static void Initialize();
        static void CreateMixer(int id, String^ ubi, String^ est, LinkedList<Bebida^>^ cat, LinkedList<Pedido^>^ ped, LinkedList<Tanque^>^ mat);
        static Mixer^ GetMixer(int id);
        static void UpdateStatus(int id, String^ status);
    };
}
#endif