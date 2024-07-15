#include "MyForm.h"

using namespace ProfanityCheck;

[STAThreadAttribute]

int main() {
	Application::Run(gcnew MyForm());
	return 0;
}