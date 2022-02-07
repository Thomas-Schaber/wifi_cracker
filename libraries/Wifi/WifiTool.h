#ifndef WifiTool_h
#define WifiTool_h
#include "Arduino.h"


using namespace std;

class WifiTool
{
private:
public:
    WifiTool();
    void ctrKey(String key);
    void runCommand(String command);
};
#endif
