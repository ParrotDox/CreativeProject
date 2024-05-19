#include "../../../MyForm.h"
System::Void Risovalka::PaintForm::comboBoxInstruments_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
	PaintForm::instrument = comboBoxInstruments->Text;
	return System::Void();
}