#include <cstdio>

namespace {
class Foo {
public:
	Foo(void) {
		x = new int[10];
		for(int i = 0; i < 10; i++) {
			x[i] = i * i;
		}
	}
	~Foo(void) {
		delete[] x;
		x = nullptr;
	}
	int Print(void) {
		for(int i = 0; i < 10; i++) {
			printf("%d\n", x[i]);
		}
		return 0;
	}
private:
	int *x;
};
} // namespace

int main(int argc, char **argv) {
	Foo *bar = new Foo;
	bar->Print();
	delete bar;
	bar = nullptr;
	return 0;
}

