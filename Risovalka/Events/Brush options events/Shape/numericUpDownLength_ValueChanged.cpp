#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::numericUpDownLength_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	PaintForm::length = Int32(numericUpDownLength->Value);
	return System::Void();
}