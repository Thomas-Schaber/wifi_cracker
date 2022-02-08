#ifndef WifiTool_h
#define WifiTool_h
#include "Arduino.h"


class WifiTool
{
private:
public:
    WifiTool();
    void ctrKey(String key);
    void runCommand(String command);
    void writeBatFile();
    void delBatFile();
    void runScript();
};
#endif
