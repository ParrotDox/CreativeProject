#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::numericUpDownBrushSize_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	PaintForm::size = Int32(numericUpDownBrushSize->Value);
	return System::Void();
}