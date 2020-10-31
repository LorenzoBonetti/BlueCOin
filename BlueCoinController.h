//
// Created by Lorenzo on 10/31/2020.
//

#ifndef BLUECOIN_BLUECOINCONTROLLER_H
#define BLUECOIN_BLUECOINCONTROLLER_H

#include "AudioSerialLib/AudioModuleSerialLib.h"

#define COM_BAUDRATE  921600
#define Audio_Module_ADDR	50




class BlueCoinController {
private:
    int com_N;
    TAudioStatus AudioStatusInstance;
    AudioModuleSerialLib *AudioSL;
public:
    BlueCoinController(int com_N);
    int getAngle();
};


#endif //BLUECOIN_BLUECOINCONTROLLER_H
