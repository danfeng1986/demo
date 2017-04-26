#include <esp8266>

unsigned int num = 0;
char rcvbuf[] = "zhangdanfeng";

void setup{
   Serial.begin(115200);
   Serial.println("start");
}
