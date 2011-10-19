//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
        // Panel 1
        Image4->Show();
        Image2->Hide();
        Image3->Hide();
        ComboBox2->Hide();
        Form1->Panel1Elements = 1;
        RadioButton1->Checked = true;

        // Panel 4
        Image7->Show();
        Image6->Hide();
        Image5->Hide();
        ComboBox4->Hide();
        Form1->Panel4Elements = 1;
        RadioButton3->Checked = true;

        // Panel 6
        Image10->Show();
        Image8->Hide();
        Image9->Hide();
        ComboBox6->Hide();
        Form1->Panel6Elements = 1;
        RadioButton5->Checked = true;

        // Panel 8
        Image13->Show();
        Image12->Hide();
        Image11->Hide();
        ComboBox8->Hide();
        Form1->Panel8Elements = 1;
        RadioButton7->Checked = true;

        // Panel 11
        //Label3->Hide();
        //Panel11->Hide();

        // List of analogies
        //Label4->Hide();
        //ListBox1->Hide();

}
//---------------------------------------------------------------------------

// Panel 1 ##############################################

void __fastcall TForm1::Button0Click(TObject *Sender)
{
        if(Form1->Panel1Elements == 1)
        {
                switch(ComboBox1->ItemIndex)
                {
                        case 0 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/line_big.jpg");
                                Form1->Panel1Element1 = 0;
                                break;
                        case 1 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/spring_big.jpg");
                                Form1->Panel1Element1 = 1;
                                break;
                        case 2 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/damper_big.jpg");
                                Form1->Panel1Element1 = 2;
                                break;
                        case 3 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection.jpg");
                                Form1->Panel1Element1 = 3;
                                break;
                        case 4 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection_and_two.jpg");
                                Form1->Panel1Element1 = 4;
                                break;
                        case 5 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections_and_one.jpg");
                                Form1->Panel1Element1 = 5;
                                break;
                        case 6 :
                                Image4->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections.jpg");
                                Form1->Panel1Element1 = 6;
                                break;
                }
        }

        if(Form1->Panel1Elements == 2)
        {
                switch(ComboBox1->ItemIndex)
                {
                        case 0 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel1Element1 = 0;
                                break;
                        case 1 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel1Element1 = 1;
                                break;
                        case 2 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel1Element1 = 2;
                                break;
                        case 3 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element1 = 3;
                                break;
                        case 4 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element1 = 4;
                                break;
                        case 5 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element1 = 5;
                                break;
                        case 6 :
                                Image2->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element1 = 6;
                                break;
                }

                switch(ComboBox2->ItemIndex)
                {
                        case 0 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel1Element2 = 0;
                                break;
                        case 1 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel1Element2 = 1;
                                break;
                        case 2 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel1Element2 = 2;
                                break;
                        case 3 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element2 = 3;
                                break;
                        case 4 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element2 = 4;
                                break;
                        case 5 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element2 = 5;
                                break;
                        case 6 :
                                Image3->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel1Element2 = 6;
                                break;
                }
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
        Image4->Show();
        Image2->Hide();
        Image3->Hide();
        ComboBox2->Hide();
        Form1->Panel1Elements = 1;
        Form1->Button0Click(Form1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
        Image4->Hide();
        Image2->Show();
        Image3->Show();
        ComboBox2->Show();
        Form1->Panel1Elements = 2;
        Form1->Button0Click(Form1);
}
//---------------------------------------------------------------------------

// Panel 4  ##############################################

void __fastcall TForm1::Button1Click(TObject *Sender)
{
        if(Form1->Panel4Elements == 1)
        {
                switch(ComboBox3->ItemIndex)
                {
                        case 0 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/line_big.jpg");
                                Form1->Panel4Element1 = 0;
                                break;
                        case 1 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/spring_big.jpg");
                                Form1->Panel4Element1 = 1;
                                break;
                        case 2 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/damper_big.jpg");
                                Form1->Panel4Element1 = 2;
                                break;
                        case 3 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection.jpg");
                                Form1->Panel4Element1 = 3;
                                break;
                        case 4 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection_and_two.jpg");
                                Form1->Panel4Element1 = 4;
                                break;
                        case 5 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections_and_one.jpg");
                                Form1->Panel4Element1 = 5;
                                break;
                        case 6 :
                                Image7->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections.jpg");
                                Form1->Panel4Element1 = 6;
                                break;
                }
        }

        if(Form1->Panel4Elements == 2)
        {
                switch(ComboBox3->ItemIndex)
                {
                        case 0 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel4Element1 = 0;
                                break;
                        case 1 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel4Element1 = 1;
                                break;
                        case 2 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel4Element1 = 2;
                                break;
                        case 3 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element1 = 3;
                                break;
                        case 4 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element1 = 4;
                                break;
                        case 5 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element1 = 5;
                                break;
                        case 6 :
                                Image5->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element1 = 6;
                                break;
                }

                switch(ComboBox4->ItemIndex)
                {
                        case 0 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel4Element2 = 0;
                                break;
                        case 1 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel4Element2 = 1;
                                break;
                        case 2 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel4Element2 = 2;
                                break;
                        case 3 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element2 = 3;
                                break;
                        case 4 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element2 = 4;
                                break;
                        case 5 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element2 = 5;
                                break;
                        case 6 :
                                Image6->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel4Element2 = 6;
                                break;
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton3Click(TObject *Sender)
{
        Image7->Show();
        Image6->Hide();
        Image5->Hide();
        ComboBox4->Hide();
        Form1->Panel4Elements = 1;
        Form1->Button0Click(Form1);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioButton4Click(TObject *Sender)
{
        Image7->Hide();
        Image6->Show();
        Image5->Show();
        ComboBox4->Show();
        Form1->Panel4Elements = 2;
        Form1->Button0Click(Form1);
}
//---------------------------------------------------------------------------

// Panel 6 ##############################################

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        if(Form1->Panel6Elements == 1)
        {
                switch(ComboBox5->ItemIndex)
                {
                        case 0 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/line_big.jpg");
                                Form1->Panel6Element1 = 0;
                                break;
                        case 1 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/spring_big.jpg");
                                Form1->Panel6Element1 = 1;
                                break;
                        case 2 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/damper_big.jpg");
                                Form1->Panel6Element1 = 2;
                                break;
                        case 3 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection.jpg");
                                Form1->Panel6Element1 = 3;
                                break;
                        case 4 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection_and_two.jpg");
                                Form1->Panel6Element1 = 4;
                                break;
                        case 5 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections_and_one.jpg");
                                Form1->Panel6Element1 = 5;
                                break;
                        case 6 :
                                Image10->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections.jpg");
                                Form1->Panel6Element1 = 6;
                                break;
                }
        }

        if(Form1->Panel6Elements == 2)
        {
                switch(ComboBox5->ItemIndex)
                {
                        case 0 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel6Element1 = 0;
                                break;
                        case 1 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel6Element1 = 1;
                                break;
                        case 2 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel6Element1 = 2;
                                break;
                        case 3 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element1 = 3;
                                break;
                        case 4 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element1 = 4;
                                break;
                        case 5 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element1 = 5;
                                break;
                        case 6 :
                                Image8->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element1 = 6;
                                break;
                }

                switch(ComboBox6->ItemIndex)
                {
                        case 0 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel6Element2 = 0;
                                break;
                        case 1 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel6Element2 = 1;
                                break;
                        case 2 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel6Element2 = 2;
                                break;
                        case 3 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element2 = 3;
                                break;
                        case 4 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element2 = 4;
                                break;
                        case 5 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element2 = 5;
                                break;
                        case 6 :
                                Image9->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel6Element2 = 6;
                                break;
                }
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RadioButto5Click(TObject *Sender)
{
        Image10->Show();
        Image9->Hide();
        Image8->Hide();
        ComboBox6->Hide();
        Form1->Panel6Elements = 1;
        Form1->Button2Click(Form1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton6Click(TObject *Sender)
{
        Image10->Hide();
        Image9->Show();
        Image8->Show();
        ComboBox6->Show();
        Form1->Panel6Elements = 2;
        Form1->Button2Click(Form1);
}
//---------------------------------------------------------------------------

// Panel 8 ##############################################

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        if(Form1->Panel8Elements == 1)
        {
                switch(ComboBox7->ItemIndex)
                {
                        case 0 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/line_big.jpg");
                                Form1->Panel8Element1 = 0;
                                break;
                        case 1 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/spring_big.jpg");
                                Form1->Panel8Element1 = 1;
                                break;
                        case 2 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/damper_big.jpg");
                                Form1->Panel8Element1 = 2;
                                break;
                        case 3 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection.jpg");
                                Form1->Panel8Element1 = 3;
                                break;
                        case 4 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/mass_big-one_connection_and_two.jpg");
                                Form1->Panel8Element1 = 4;
                                break;
                        case 5 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections_and_one.jpg");
                                Form1->Panel8Element1 = 5;
                                break;
                        case 6 :
                                Image13->Picture->LoadFromFile("images/elements/mechanical/mass_big-two_connections.jpg");
                                Form1->Panel8Element1 = 6;
                                break;
                }
        }

        if(Form1->Panel8Elements == 2)
        {
                switch(ComboBox7->ItemIndex)
                {
                        case 0 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel8Element1 = 0;
                                break;
                        case 1 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel8Element1 = 1;
                                break;
                        case 2 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel8Element1 = 2;
                                break;
                        case 3 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element1 = 3;
                                break;
                        case 4 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element1 = 4;
                                break;
                        case 5 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element1 = 5;
                                break;
                        case 6 :
                                Image11->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element1 = 6;
                                break;
                }

                switch(ComboBox8->ItemIndex)
                {
                        case 0 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/line_small.jpg");
                                Form1->Panel8Element2 = 0;
                                break;
                        case 1 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/spring_small.jpg");
                                Form1->Panel8Element2 = 1;
                                break;
                        case 2 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/damper_small.jpg");
                                Form1->Panel8Element2 = 2;
                                break;
                        case 3 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element2 = 3;
                                break;
                        case 4 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element2 = 4;
                                break;
                        case 5 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element2 = 5;
                                break;
                        case 6 :
                                Image12->Picture->LoadFromFile("images/elements/mechanical/mass_small.jpg");
                                Form1->Panel8Element2 = 6;
                                break;
                }
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RadioButton7Click(TObject *Sender)
{
        Image13->Show();
        Image12->Hide();
        Image11->Hide();
        ComboBox8->Hide();
        Form1->Panel8Elements = 1;
        Form1->Button3Click(Form1);
        Image14->Picture->LoadFromFile("images/elements/mechanical/force_and_one_line.jpg");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton8Click(TObject *Sender)
{
        Image13->Hide();
        Image12->Show();
        Image11->Show();
        ComboBox8->Show();
        Form1->Panel8Elements = 2;
        Form1->Button3Click(Form1);
        Image14->Picture->LoadFromFile("images/elements/mechanical/force_and_two_lines.jpg");
}
//---------------------------------------------------------------------------

/**
 * Transforming mechanical system into electrical one.
 * I consider 16 cases of connections between elements in mechanical system,
 * which generates various electrical circuits
 */
void __fastcall TForm1::Button5Click(TObject *Sender)
{
        // Type of analogy
        // ComboBox9->ItemIndex;

        // case 1 - elements configuration : 1,1,1,1 ; type : 1

        if(Form1->Panel1Elements == 1 && Form1->Panel4Elements == 1 && Form1->Panel6Elements == 1 && Form1->Panel8Elements == 1 && ComboBox9->ItemIndex == 0)
        {
                Form1->Button6Click(Form1);

                int LinesElement1 = 0;

                Image15->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image16->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image17->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image18->Picture->LoadFromFile("images/elements/electrical/voltage-source_vertical.jpg");
                Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image20->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image28->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image36->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");

                if(Form1->Panel1Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel4Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel6Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel8Element1 == 0)
                        LinesElement1++;

                if(LinesElement1 == 4)
                {
                        Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                        Image32->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 3)
                {
                        if(Form1->Panel1Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        if(Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        if(Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        if(Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel8Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        Image32->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                }

                if(LinesElement1 == 2)
                {
                        if(Form1->Panel1Element1 != 0 && Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                                if(Form1->Panel4Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel6Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 1)
                {
                        Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right_left.jpg");
                        Image39->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        if(Form1->Panel4Element1 == 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        if(Form1->Panel6Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        if(Form1->Panel8Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                        }

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image36->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left_left.jpg");
                        Image44->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image42->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image41->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 0)
                {
                        Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right_left.jpg");
                        Image39->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 == 1)
                                Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element1 == 2)
                                Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element1 == 1)
                                Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element1 == 2)
                                Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element1 == 1)
                                Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element1 == 2)
                                Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel8Element1 == 1)
                                Image23->Picture->LoadFromFile("images/elements/electrical/capacitor_horizontal.jpg");

                        if(Form1->Panel8Element1 == 2)
                                Image23->Picture->LoadFromFile("images/elements/electrical/resistor_horizontal.jpg");

                        if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image36->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left_left.jpg");
                        Image44->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image42->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

        }

        // case 2 - elements configuration : 2,2,2,2 ; type : 1

        if(Form1->Panel1Elements == 2 && Form1->Panel4Elements == 2 && Form1->Panel6Elements == 2 && Form1->Panel8Elements == 2 && ComboBox9->ItemIndex == 0)
        {
                Form1->Button6Click(Form1);

                int LinesElement1 = 0;
                int LinesElement2 = 0;

                Image15->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image16->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image17->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image18->Picture->LoadFromFile("images/elements/electrical/voltage-source_vertical.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                // lines on elements no. 1

                if(Form1->Panel1Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel4Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel6Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel8Element1 == 0)
                        LinesElement1++;

                // lines on elements no. 2

                if(Form1->Panel1Element2 == 0)
                        LinesElement2++;

                if(Form1->Panel4Element2 == 0)
                        LinesElement2++;

                if(Form1->Panel6Element2 == 0)
                        LinesElement2++;

                if(Form1->Panel8Element2 == 0)
                        LinesElement2++;

                // LinesElement1

                if(LinesElement1 == 4)
                {
                        Image32->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 3)
                {
                        if(Form1->Panel1Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 2)
                {
                        // 2 elementy w rozgalezniku
                        Image32->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                        Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");

                        if(Form1->Panel1Element1 != 0 && Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel6Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        Image26->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");

                }

                if(LinesElement1 == 1)
                {
                        // 3 elementy w rozgalezniku
                        Image32->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                        Image40->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 == 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel6Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel8Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image26->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image42->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");

                }

                if(LinesElement1 == 0)
                {
                        // 4 elementy w rozgalezniku
                        Image32->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                        Image40->Picture->LoadFromFile("images/elements/electrical/corner_top_right_left.jpg");
                        Image48->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 == 1)
                                Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element1 == 2)
                                Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element1 == 1)
                                Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element1 == 2)
                                Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element1 == 1)
                                Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element1 == 2)
                                Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel8Element1 == 1)
                                Image49->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel8Element1 == 2)
                                Image49->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                Image49->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        Image26->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image42->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left_left.jpg");
                        Image50->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                }

                // THE END of LinesElement1
                
                // tutaj to samo, co wy¿ej tylko dla LinesElement2 we wszystkich panelach

                if(LinesElement2 == 4)
                {
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image36->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement2 == 3)
                {
                        if(Form1->Panel1Element2 != 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element2 != 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel6Element2 != 0)
                        {
                                if(Form1->Panel6Element2 == 1)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel8Element2 != 0)
                        {
                                if(Form1->Panel8Element2 == 1)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                        Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image36->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement2 == 2)
                {
                        // 2 elementy w rozgalezniku
                        Image35->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                        Image27->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");

                        if(Form1->Panel1Element2 != 0 && Form1->Panel4Element2 != 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel1Element2 != 0 && Form1->Panel6Element2 != 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel1Element2 != 0 && Form1->Panel8Element2 != 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel4Element2 != 0 && Form1->Panel6Element2 != 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel4Element2 != 0 && Form1->Panel8Element2 != 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        if(Form1->Panel6Element2 != 0 && Form1->Panel8Element2 != 0)
                        {
                                if(Form1->Panel6Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        }

                        Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");

                }

                if(LinesElement2 == 1)
                {
                        // 3 elementy w rozgalezniku
                        Image35->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image27->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element2 == 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element2 == 1)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element2 == 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element2 == 1)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel6Element2 == 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element2 == 1)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element2 == 2)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel8Element2 == 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element2 == 1)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image44->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image45->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");

                }

                if(LinesElement2 == 0)
                {
                        // 4 elementy w rozgalezniku
                        Image35->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image27->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/corner_top_right_left.jpg");
                        Image51->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element2 == 1)
                                Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element2 == 2)
                                Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element2 == 1)
                                Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element2 == 2)
                                Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element2 == 1)
                                Image44->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element2 == 2)
                                Image44->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                Image44->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel8Element2 == 1)
                                Image52->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel8Element2 == 2)
                                Image52->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                                Image52->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image45->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left_left.jpg");
                        Image53->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                }

                // THE END of LinesElement2

                Image38->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                Image30->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image22->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image21->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                // THE END of case: 2,2,2,2
        }

        // case 3 - elements configuration: 2,2,2,1 ; type : 1

        if(Form1->Panel1Elements == 2 && Form1->Panel4Elements == 2 && Form1->Panel6Elements == 2 && Form1->Panel8Elements == 1 && ComboBox9->ItemIndex == 0)
        {
                Form1->Button6Click(Form1);

                Image15->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image16->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image17->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image18->Picture->LoadFromFile("images/elements/electrical/voltage-source_vertical.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                //Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                int LinesElement1 = 0;
                int LinesElement2 = 0;

                if(Form1->Panel1Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel1Element2 == 0)
                        LinesElement2++;

                if(Form1->Panel4Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel4Element2 == 0)
                        LinesElement2++;

                if(Form1->Panel6Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel6Element2 == 0)
                        LinesElement2++;

                /*
                if(Form1->Panel8Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel8Element2 == 0)
                        LinesElement2++;
                */

                // LinesElements1

                if(LinesElement1 == 3)
                {
                        Image32->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 2)
                {
                        if(Form1->Panel1Element1 == 1)
                                Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element1 == 2)
                                Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element1 == 1)
                                Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element1 == 2)
                                Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element1 == 1)
                                Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element1 == 2)
                                Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 1)
                {
                        Image32->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                        Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");

                        if(Form1->Panel1Element1 != 0 && Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image26->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                }

                if(LinesElement1 == 0)
                {
                        Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                        Image32->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image40->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 == 1)
                                Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element1 == 2)
                                Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element1 == 1)
                                Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element1 == 2)
                                Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element1 == 1)
                                Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element1 == 2)
                                Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        Image26->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image42->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                }

                // LinesElement2

                if(LinesElement2 == 3)
                {
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image36->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                        Image29->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                        Image21->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement2 == 2)
                {
                        if(Form1->Panel1Element2 == 1)
                                Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element2 == 2)
                                Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element2 == 1)
                                Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element2 == 2)
                                Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element2 == 1)
                                Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element2 == 2)
                                Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        Image36->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image38->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                        Image30->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                        Image22->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image21->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement2 == 1)
                {
                        Image35->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                        Image27->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");

                        if(Form1->Panel1Element2 != 0 && Form1->Panel4Element2 != 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel1Element2 != 0 && Form1->Panel6Element2 != 0)
                        {
                                if(Form1->Panel1Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        if(Form1->Panel4Element2 != 0 && Form1->Panel6Element2 != 0)
                        {
                                if(Form1->Panel4Element2 == 1)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element2 == 2)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element2 == 1)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element2 == 2)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");
                        }

                        Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");

                        Image38->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                        Image30->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                        Image22->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image21->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement2 == 0)
                {
                        Image27->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element2 == 1)
                                Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel1Element2 == 2)
                                Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element2 == 1)
                                Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element2 == 2)
                                Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element2 == 1)
                                Image44->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element2 == 2)
                                Image44->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                Image44->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image37->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                        Image45->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");

                        Image38->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                        Image30->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                        Image22->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                        Image21->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                
                if(Form1->Panel8Element1 != 4)
                {
                        ShowMessage("Error: Bad connection between elements.");
                        Form1->Button6Click(Form1);
                }
                else
                {
                        Image23->Picture->LoadFromFile("images/elements/electrical/coil_horizontal.jpg");
                }

        }

        // case 4 - elements configuration : 1,1,1,1 ; type : 2

        if(Form1->Panel1Elements == 1 && Form1->Panel4Elements == 1 && Form1->Panel6Elements == 1 && Form1->Panel8Elements == 1 && ComboBox9->ItemIndex == 1)
        {
                Form1->Button6Click(Form1);

                int LinesElement1 = 0;

                Image15->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image16->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image17->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image18->Picture->LoadFromFile("images/elements/electrical/current-source_vertical.jpg");
                Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image20->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image28->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image36->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");

                if(Form1->Panel1Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel4Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel6Element1 == 0)
                        LinesElement1++;

                if(Form1->Panel8Element1 == 0)
                        LinesElement1++;

                if(LinesElement1 == 4)
                {
                        Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                        Image32->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                }

                if(LinesElement1 == 3)
                {
                        if(Form1->Panel1Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                }

                if(LinesElement1 == 2)
                {
                        Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right_left.jpg");
                        Image39->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 != 0 && Form1->Panel4Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel1Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel1Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel6Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel6Element1 != 0 && Form1->Panel8Element1 != 0)
                        {
                                if(Form1->Panel8Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image36->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left_left.jpg");

                        Image41->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image42->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image44->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                }

                if(LinesElement1 == 1)
                {
                        Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right_left.jpg");
                        Image39->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                        if(Form1->Panel1Element1 == 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel4Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel4Element1 == 0)
                        {
                                if(Form1->Panel6Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel6Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel8Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel8Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        if(Form1->Panel8Element1 == 0)
                        {
                                if(Form1->Panel4Element1 == 1)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel4Element1 == 2)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                        Image40->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel6Element1 == 1)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel6Element1 == 2)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                        Image32->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                                if(Form1->Panel1Element1 == 1)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                                if(Form1->Panel1Element1 == 2)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                        Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");
                        }

                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image36->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left_left.jpg");

                        Image42->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image43->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                        Image44->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");

                }

                if(LinesElement1 == 0)
                {
                        ShowMessage("Not implemented yet. Sorry.");
                        Button6Click(Form1);
                }

        }

        // case 5 - elements configuration : 2,2,2,2 ; type : 2

        if(Form1->Panel1Elements == 2 && Form1->Panel4Elements == 2 && Form1->Panel6Elements == 2 && Form1->Panel8Elements == 2 && ComboBox9->ItemIndex == 1)
        {
                Form1->Button6Click(Form1);

                Image15->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image16->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image17->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image18->Picture->LoadFromFile("images/elements/electrical/current-source_vertical.jpg");
                Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image21->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image22->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image38->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                Image37->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image32->Picture->LoadFromFile("images/elements/electrical/corner_top_right_up.jpg");
                Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image30->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");

                // element 1

                if(Form1->Panel1Element1 == 0)
                        Image25->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel1Element1 == 1)
                        Image25->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel1Element1 == 2)
                        Image25->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                        Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                if(Form1->Panel4Element1 == 0)
                        Image26->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel4Element1 == 1)
                        Image26->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel4Element1 == 2)
                        Image26->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                        Image26->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                if(Form1->Panel6Element1 == 0)
                        Image27->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel6Element1 == 1)
                        Image27->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel6Element1 == 2)
                        Image27->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                        Image27->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                if(Form1->Panel8Element1 == 0)
                        Image28->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel8Element1 == 1)
                        Image28->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel8Element1 == 2)
                        Image28->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel8Element1 == 3 || Form1->Panel8Element1 == 4 || Form1->Panel8Element1 == 5 || Form1->Panel8Element1 == 6)
                        Image28->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                // element 2

                if(Form1->Panel1Element2 == 0)
                        Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel1Element2 == 1)
                        Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel1Element2 == 2)
                        Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                        Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                if(Form1->Panel4Element2 == 0)
                        Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel4Element2 == 1)
                        Image34->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel4Element2 == 2)
                        Image34->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                        Image34->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                if(Form1->Panel6Element2 == 0)
                        Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel6Element2 == 1)
                        Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel6Element2 == 2)
                        Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                        Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                if(Form1->Panel8Element2 == 0)
                        Image36->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel8Element2 == 1)
                        Image36->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                if(Form1->Panel8Element2 == 2)
                        Image36->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                if(Form1->Panel8Element2 == 3 || Form1->Panel8Element2 == 4 || Form1->Panel8Element2 == 5 || Form1->Panel8Element2 == 6)
                        Image36->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

        }

        // case 6 - elements configuration : 2,2,2,1 ; type : 2

        if(Form1->Panel1Elements == 2 && Form1->Panel4Elements == 2 && Form1->Panel6Elements == 2 && Form1->Panel8Elements == 1 && ComboBox9->ItemIndex == 1)
        {
                Form1->Button6Click(Form1);

                Image15->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image16->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image17->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image18->Picture->LoadFromFile("images/elements/electrical/current-source_vertical.jpg");
                Image31->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");
                Image19->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image20->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image21->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image22->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image23->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image38->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                Image37->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                Image45->Picture->LoadFromFile("images/elements/electrical/corner_bottom_right.jpg");
                Image29->Picture->LoadFromFile("images/elements/electrical/corner_bottom_left.jpg");
                Image32->Picture->LoadFromFile("images/elements/electrical/corner_cross.jpg");
                Image24->Picture->LoadFromFile("images/elements/electrical/corner_top_left.jpg");
                Image30->Picture->LoadFromFile("images/elements/electrical/line_horizontal.jpg");
                Image40->Picture->LoadFromFile("images/elements/electrical/corner_top_right.jpg");

                Image25->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                Image26->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image27->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image28->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                Image36->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");
                Image44->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                if(Form1->Panel8Element1 != 4)
                {
                        ShowMessage("Error: Bad connection between elements.");
                        Button6Click(Form1);
                }
                else
                {
                        // element 1

                        if(Form1->Panel1Element1 == 0)
                                Image33->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                        if(Form1->Panel1Element1 == 1)
                                Image33->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel1Element1 == 2)
                                Image33->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element1 == 3 || Form1->Panel1Element1 == 4 || Form1->Panel1Element1 == 5 || Form1->Panel1Element1 == 6)
                                Image33->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element1 == 0)
                                Image34->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                        if(Form1->Panel4Element1 == 1)
                                Image34->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element1 == 2)
                                Image34->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element1 == 3 || Form1->Panel4Element1 == 4 || Form1->Panel4Element1 == 5 || Form1->Panel4Element1 == 6)
                                Image34->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element1 == 0)
                                Image35->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                        if(Form1->Panel6Element1 == 1)
                                Image35->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element1 == 2)
                                Image35->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element1 == 3 || Form1->Panel6Element1 == 4 || Form1->Panel6Element1 == 5 || Form1->Panel6Element1 == 6)
                                Image35->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        // element 2

                        if(Form1->Panel1Element2 == 0)
                                Image41->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                        if(Form1->Panel1Element2 == 1)
                                Image41->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel1Element2 == 2)
                                Image41->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel1Element2 == 3 || Form1->Panel1Element2 == 4 || Form1->Panel1Element2 == 5 || Form1->Panel1Element2 == 6)
                                Image41->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel4Element2 == 0)
                                Image42->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                        if(Form1->Panel4Element2 == 1)
                                Image42->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel4Element2 == 2)
                                Image42->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel4Element2 == 3 || Form1->Panel4Element2 == 4 || Form1->Panel4Element2 == 5 || Form1->Panel4Element2 == 6)
                                Image42->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                        if(Form1->Panel6Element2 == 0)
                                Image43->Picture->LoadFromFile("images/elements/electrical/line_vertical.jpg");

                        if(Form1->Panel6Element2 == 1)
                                Image43->Picture->LoadFromFile("images/elements/electrical/coil_vertical.jpg");

                        if(Form1->Panel6Element2 == 2)
                                Image43->Picture->LoadFromFile("images/elements/electrical/resistor_vertical.jpg");

                        if(Form1->Panel6Element2 == 3 || Form1->Panel6Element2 == 4 || Form1->Panel6Element2 == 5 || Form1->Panel6Element2 == 6)
                                Image43->Picture->LoadFromFile("images/elements/electrical/capacitor_vertical.jpg");

                }
        }

}
//---------------------------------------------------------------------------

/**
 * Reset the electrical analogy
 */
void __fastcall TForm1::Button6Click(TObject *Sender)
{
        //Panel11->Hide();
        //Label3->Hide();
        //Label4->Hide();
        //ListBox1->Hide();

        Image15->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image16->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image17->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image18->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image19->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image20->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image21->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image22->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image23->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image24->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image25->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image26->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image27->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image28->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image29->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image30->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image31->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image32->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image33->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image34->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image35->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image36->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image37->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image38->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image39->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image40->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image41->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image42->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image43->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image44->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image45->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image46->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image47->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image48->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image49->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image50->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image51->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image52->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image53->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image54->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image55->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image56->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image57->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image58->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image59->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image60->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image61->Picture->LoadFromFile("images/elements/electrical/space.jpg");
        Image62->Picture->LoadFromFile("images/elements/electrical/space.jpg");
}
//---------------------------------------------------------------------------

/**
 * Information about the program
 */
void __fastcall TForm1::Button7Click(TObject *Sender)
{
        ShowMessage("Project:\tElectromechanical Analogies\nversion:\tunfinished\nAuthor:\tPiotr Wittchen\nE-mail:\tpiotr.wittchen@gmail.com\nMacrofaculty (AEI) - semester 03 - group 01\nAcademic year: 2008/2009\nThe Silesian University Of Technology\nIntroduction to System Dynamics\n\nAvailable configurations of connections: 1,1,1,1 ; 2,2,2,2 ; 1,2,2,2");
}
//---------------------------------------------------------------------------

