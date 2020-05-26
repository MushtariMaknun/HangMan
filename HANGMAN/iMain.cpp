# include "iGraphics.h"

char guessword[12][16] =
{
	"red",
	"yellow",
	"orange",
	"violet",
	"indigo",
	"purple",
	"pink",
	"blue",
	"gray",
	"black",
	"white",
	"cyan",
};
int randomindex;
int lengthofword;
int game = 0;
int Num;
int pic;
int index[8];
int j = 0;
int numblives = 6;
int numcorrect = 0;
char string[20];
int scr = 6;
double dx = 50;
double underscorenum;
double x1 = 50;
double y = 95;

int flag;
void startgame()
{


	iShowBMP(835, 330, "a.bmp");
	iShowBMP(870, 330, "b.bmp");
	iShowBMP(905, 330, "c.bmp");

	iShowBMP(800, 295, "d.bmp");
	iShowBMP(835, 295, "e.bmp");
	iShowBMP(870, 295, "f.bmp");
	iShowBMP(905, 295, "g.bmp");
	iShowBMP(940, 295, "h.bmp");

	iShowBMP(835, 260, "i.bmp");
	iShowBMP(870, 260, "j.bmp");
	iShowBMP(905, 260, "k.bmp");

	iShowBMP(800, 225, "l.bmp");
	iShowBMP(835, 225, "m.bmp");
	iShowBMP(870, 225, "n.bmp");
	iShowBMP(905, 225, "o.bmp");
	iShowBMP(940, 225, "p.bmp");

	iShowBMP(835, 190, "q.bmp");
	iShowBMP(870, 190, "r.bmp");
	iShowBMP(905, 190, "s.bmp");

	iShowBMP(800, 155, "t.bmp");
	iShowBMP(835, 155, "u.bmp");
	iShowBMP(870, 155, "v.bmp");
	iShowBMP(905, 155, "w.bmp");
	iShowBMP(940, 155, "x.bmp");

	iShowBMP(852, 120, "y.bmp");
	iShowBMP(887, 120, "z.bmp");
}
void score()
{

	iText(70, 417, "Live:", GLUT_BITMAP_TIMES_ROMAN_24);
	_itoa_s(numblives, string, 10);
	iText(120, 417, string, GLUT_BITMAP_TIMES_ROMAN_24);

}
void underscore()
{

	if (x1 < underscorenum)
	{

		x1 = x1 + 50;

	}


}

void iDraw()
{
	if (game == 0)
	{
		iShowBMP(0, 0, "background1.bmp");


	}
	if (game == 1)
	{
		iShowBMP(0, 0, "background2.bmp");
		startgame();

	}
	if (game == 2)
	{

		iSetColor(0, 0, 0);
		iFilledRectangle(x1, y, 40, 5);


	}
	if (game == 3)
	{


		if (numcorrect == lengthofword)
		{
			for (int i = 0; i < j; i++)
			{
				if (pic == 97)

				{
					iShowBMP(dx*index[i], 100, "a.bmp");
				}
				if (pic == 98)
				{
					iShowBMP(dx*index[i], 100, "b.bmp");
				}
				if (pic == 99)
				{
					iShowBMP(dx*index[i], 100, "c.bmp");
				}
				if (pic == 100)
				{
					iShowBMP(dx*index[i], 100, "d.bmp");
				}
				if (pic == 101)
				{
					iShowBMP(dx*index[i], 100, "e.bmp");
				}
				if (pic == 102)
				{
					iShowBMP(dx*index[i], 100, "f.bmp");
				}
				if (pic == 103)
				{
					iShowBMP(dx*index[i], 100, "g.bmp");
				}
				if (pic == 104)
				{
					iShowBMP(dx*index[i], 100, "h.bmp");
				}
				if (pic == 105)
				{
					iShowBMP(dx*index[i], 100, "i.bmp");
				}
				if (pic == 106)
				{
					iShowBMP(dx*index[i], 100, "j.bmp");
				}
				if (pic == 107)
				{
					iShowBMP(dx*index[i], 100, "k.bmp");
				}
				if (pic == 108)
				{
					iShowBMP(dx*index[i], 100, "l.bmp");
				}
				if (pic == 109)
				{
					iShowBMP(dx*index[i], 100, "m.bmp");
				}
				if (pic == 110)
				{
					iShowBMP(dx*index[i], 100, "n.bmp");
				}
				if (pic == 111)
				{
					iShowBMP(dx*index[i], 100, "o.bmp");
				}
				if (pic == 112)
				{
					iShowBMP(dx*index[i], 100, "p.bmp");
				}
				if (pic == 113)
				{
					iShowBMP(dx*index[i], 100, "q.bmp");
				}
				if (pic == 114)
				{
					iShowBMP(dx*index[i], 100, "r.bmp");
				}
				if (pic == 115)
				{
					iShowBMP(dx*index[i], 100, "s.bmp");
				}
				if (pic == 116)
				{
					iShowBMP(dx*index[i], 100, "t.bmp");
				}
				if (pic == 117)
				{
					iShowBMP(dx*index[i], 100, "u.bmp");
				}
				if (pic == 118)
				{
					iShowBMP(dx*index[i], 100, "v.bmp");
				}
				if (pic == 119)
				{
					iShowBMP(dx*index[i], 100, "w.bmp");
				}
				if (pic == 120)
				{
					iShowBMP(dx*index[i], 100, "x.bmp");
				}

				if (pic == 121)
				{
					iShowBMP(dx*index[i], 100, "y.bmp");
				}
				if (pic == 122)
				{
					iShowBMP(dx*index[i], 100, "z.bmp");
				}
			}

			/////////////////
			game = 5;
		}
		else
		{

			for (int i = 0; i < j; i++)
			{

				if (pic == 97)

				{
					iShowBMP(dx*index[i], 100, "a.bmp");
				}
				if (pic == 98)
				{
					iShowBMP(dx*index[i], 100, "b.bmp");
				}
				if (pic == 99)
				{
					iShowBMP(dx*index[i], 100, "c.bmp");
				}
				if (pic == 100)
				{
					iShowBMP(dx*index[i], 100, "d.bmp");
				}
				if (pic == 101)
				{
					iShowBMP(dx*index[i], 100, "e.bmp");
				}
				if (pic == 102)
				{
					iShowBMP(dx*index[i], 100, "f.bmp");
				}
				if (pic == 103)
				{
					iShowBMP(dx*index[i], 100, "g.bmp");
				}
				if (pic == 104)
				{
					iShowBMP(dx*index[i], 100, "h.bmp");
				}
				if (pic == 105)
				{
					iShowBMP(dx*index[i], 100, "i.bmp");
				}
				if (pic == 106)
				{
					iShowBMP(dx*index[i], 100, "j.bmp");
				}
				if (pic == 107)
				{
					iShowBMP(dx*index[i], 100, "k.bmp");
				}
				if (pic == 108)
				{
					iShowBMP(dx*index[i], 100, "l.bmp");
				}
				if (pic == 109)
				{
					iShowBMP(dx*index[i], 100, "m.bmp");
				}
				if (pic == 110)
				{
					iShowBMP(dx*index[i], 100, "n.bmp");
				}
				if (pic == 111)
				{
					iShowBMP(dx*index[i], 100, "o.bmp");
				}
				if (pic == 112)
				{
					iShowBMP(dx*index[i], 100, "p.bmp");
				}
				if (pic == 113)
				{
					iShowBMP(dx*index[i], 100, "q.bmp");
				}
				if (pic == 114)
				{
					iShowBMP(dx*index[i], 100, "r.bmp");
				}
				if (pic == 115)
				{
					iShowBMP(dx*index[i], 100, "s.bmp");
				}
				if (pic == 116)
				{
					iShowBMP(dx*index[i], 100, "t.bmp");
				}
				if (pic == 117)
				{
					iShowBMP(dx*index[i], 100, "u.bmp");
				}
				if (pic == 118)
				{
					iShowBMP(dx*index[i], 100, "v.bmp");
				}
				if (pic == 119)
				{
					iShowBMP(dx*index[i], 100, "w.bmp");
				}
				if (pic == 120)
				{
					iShowBMP(dx*index[i], 100, "x.bmp");
				}

				if (pic == 121)
				{
					iShowBMP(dx*index[i], 100, "y.bmp");
				}
				if (pic == 122)
				{
					iShowBMP(dx*index[i], 100, "z.bmp");
				}

			}
		}
	}
	if (game == 4)
	{

		if (numblives == 5)
		{
			iSetColor(0, 0, 0);
			iCircle(605, 342, 30);
		}
		if (numblives == 4)
		{
			iSetColor(0, 0, 0);
			iLine(605, 312, 605, 212);
		}
		if (numblives == 3)
		{
			iSetColor(0, 0, 0);
			iLine(605, 282, 655, 330);
		}
		if (numblives == 2)
		{
			iSetColor(0, 0, 0);
			iLine(605, 282, 555, 330);
		}
		if (numblives == 1)
		{
			iSetColor(0, 0, 0);
			iLine(605, 212, 665, 142);
		}
		if (numblives == 0)
		{
			iSetColor(0, 0, 0);
			iLine(605, 212, 545, 142);
			game = 6;
			//iText(200, 200, "You loose!!");
			//iText(200, 280, guessword[randomindex]);
			// exit(0);
		}


	}
	if (game == 5)
	{
		iShowBMP(0, 0, "background3.1.bmp");
		iText(519, 300, guessword[randomindex], GLUT_BITMAP_TIMES_ROMAN_24);
	}
	if (game == 6)
	{
		iShowBMP(0, 0, "background4.bmp");
		iText(480, 212, guessword[randomindex], GLUT_BITMAP_TIMES_ROMAN_24);
	}
}



int check(int num)
{

	score();
	flag = 0;
	index[8] = 0;
	for (int i = 0; i<lengthofword; i++)
	{

		if (guessword[randomindex][i] == Num)
		{

			index[j] = i + 1;
			j++;
			flag = 1;
			pic = Num;
			numcorrect++;
			printf("\n%d", numcorrect);

		}
	}
	if (flag == 1)
	{
		return game = 3;
	}

	else
	{

		numblives--;

		return game = 4;
	}
}
void iMouseMove(int mx, int my)
{
	//place your codes here
}


void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if ((mx >= 425 && mx <= 600) && (my >= 122 && my <= 182))
		{
			game = 1;
		}
		if ((mx >= 425 && mx <= 600) && (my >= 42 && my <= 102))
		{
			exit(0);
		}


		if ((mx >= 835 && mx <= 867) && (my >= 330 && my <= 362))
		{
			Num = 97;
			check(Num);
		}
		if ((mx >= 870 && mx <= 902) && (my >= 330 && my <= 362))
		{
			Num = 98;
			check(Num);
		}
		if ((mx >= 905 && mx <= 937) && (my >= 330 && my <= 362))
		{
			Num = 99;
			check(Num);
		}

		/////

		if ((mx >= 800 && mx <= 832) && (my >= 295 && my <= 327))
		{
			Num = 100;
			check(Num);
		}
		if ((mx >= 835 && mx <= 867) && (my >= 295 && my <= 327))
		{
			Num = 101;
			check(Num);
		}
		if ((mx >= 870 && mx <= 902) && (my >= 295 && my <= 327))
		{
			Num = 102;
			check(Num);
		}
		if ((mx >= 905 && mx <= 937) && (my >= 295 && my <= 327))
		{
			Num = 103;
			check(Num);
		}
		if ((mx >= 940 && mx <= 972) && (my >= 295 && my <= 327))
		{
			Num = 104;
			check(Num);
		}

		////

		if ((mx >= 835 && mx <= 867) && (my >= 260 && my <= 292))
		{
			Num = 105;
			check(Num);
		}
		if ((mx >= 870 && mx <= 902) && (my >= 260 && my <= 292))
		{
			Num = 106;
			check(Num);
		}
		if ((mx >= 905 && mx <= 937) && (my >= 260 && my <= 292))
		{
			Num = 107;
			check(Num);
		}

		/////////

		if ((mx >= 800 && mx <= 832) && (my >= 225 && my <= 257))
		{
			Num = 108;
			check(Num);
		}
		if ((mx >= 835 && mx <= 867) && (my >= 225 && my <= 257))
		{
			Num = 109;
			check(Num);
		}
		if ((mx >= 870 && mx <= 902) && (my >= 225 && my <= 257))
		{
			Num = 110;
			check(Num);
		}
		if ((mx >= 905 && mx <= 937) && (my >= 225 && my <= 257))
		{
			Num = 111;
			check(Num);
		}
		if ((mx >= 940 && mx <= 972) && (my >= 225 && my <= 257))
		{
			Num = 112;
			check(Num);
		}

		//////////////////

		if ((mx >= 835 && mx <= 867) && (my >= 190 && my <= 222))
		{
			Num = 113;
			check(Num);
		}
		if ((mx >= 870 && mx <= 902) && (my >= 190 && my <= 222))
		{
			Num = 114;
			check(Num);
		}
		if ((mx >= 905 && mx <= 937) && (my >= 190 && my <= 222))
		{
			Num = 115;
			check(Num);
		}

		//////////

		if ((mx >= 800 && mx <= 832) && (my >= 155 && my <= 187))
		{
			Num = 116;
			check(Num);
		}
		if ((mx >= 835 && mx <= 867) && (my >= 155 && my <= 187))
		{
			Num = 117;
			check(Num);
		}
		if ((mx >= 870 && mx <= 902) && (my >= 155 && my <= 187))
		{
			Num = 118;
			check(Num);
		}
		if ((mx >= 905 && mx <= 937) && (my >= 155 && my <= 187))
		{
			Num = 119;
			check(Num);
		}
		if ((mx >= 940 && mx <= 972) && (my >= 155 && my <= 187))
		{
			Num = 120;
			check(Num);
		}

		//////////

		if ((mx >= 852 && mx <= 884) && (my >= 120 && my <= 152))
		{
			Num = 121;
			check(Num);
		}
		if ((mx >= 887 && mx <= 919) && (my >= 120 && my <= 152))
		{
			Num = 122;
			check(Num);
		}

		if ((mx >= 780 && mx <= 950) && (my >= 72 && my <= 115))
		{
			exit(0);
		}

		if ((mx >= 100 && mx <= 380) && (my >= 72 && my <= 122))
		{
			srand(time(NULL));
			game = 1;
			underscorenum = 0;
			numblives = 6;
			dx = 50;

			x1 = 50;
			y = 95;
			numcorrect = 0;
			lengthofword = 0;
			randomindex = 0;
			randomindex = rand() % 11;

			lengthofword = strlen(guessword[randomindex]);
			underscorenum = ((lengthofword - 1) * 50) + x1;
			printf("\n %d   %d ", lengthofword, randomindex);

		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here 
	}
}


void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
void run()
{
	if (game == 1)
	{
		game++;
	}
}

int main()
{
	srand(time(NULL));
	iSetTimer(700, run);

	iSetTimer(2500, underscore);

	randomindex = rand() % 11;
	lengthofword = strlen(guessword[randomindex]);
	underscorenum = ((lengthofword - 1) * 50) + x1;
	printf("%d", randomindex);
	printf("%d", lengthofword);
	iInitialize(1024, 512, "hangman");
	return 0;
}