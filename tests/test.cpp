#include <iostream>
#include <thread>
#include <chrono>

void wait(int seconds)
{
	//make the thread sleep
  std::this_thread::sleep_for(std::chrono::milliseconds(seconds*1000));
}

//thread routine
void thread()
{
  for (int i = 0; i < 5; ++i)
  {
    wait(1);
    std::cout << i << " thread" << std::endl;
  }
}

int main()
{
	//create a new thread with the thread() routine
  std::thread t(thread);
  for (int i = 0; i < 5; ++i)
  {
    wait(1);
    std::cout << i << " main" << std::endl;
  }
  //blocks the main thread until the t thread finishes
  t.join();
  return 0;
}