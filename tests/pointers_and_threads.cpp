#include <thread>
#include <iostream>

class bar {
public:
	
	int j=5;
  void foo() {
    std::cout << "hello from member function: " << this->j << std::endl;
  }


};

class ber {
public:
	int j=5;
  void fee(bar &b) {
    std::cout << "hello from member fee function: " << this->j << std::endl;
    b.foo();
  }

	void test(){
		bar b = bar();
		b.j=8;
		std::thread t(&ber::fee, this, std::ref(b));
		t.join();
	}
};

int main()
{
	ber be = ber();
	be.test();

  return 0;
}