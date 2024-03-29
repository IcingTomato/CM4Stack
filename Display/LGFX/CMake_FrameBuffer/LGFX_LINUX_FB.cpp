#include <linux/fb.h>
#include <thread>

#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include <LGFX_AUTODETECT.hpp>

void setup(void);
void loop(void);

void loopThread(void)
{
  setup();
  for (;;)
  {
    loop();
    // sleep(2);
    std::this_thread::yield();
  }
}

int main(int, char**)
{
  std::thread sub_thread(loopThread);
  for (;;)
  {
    std::this_thread::yield();
    sleep(5);
  }
}
