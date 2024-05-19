#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::numericUpDownWidth_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	PaintForm::width = Int32(numericUpDownWidth->Value);
	return System::Void();
}