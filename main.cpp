#include <windows.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
#include <cmath>
#include <vector>
#include <conio.h>
#include <stdarg.h>
#include "wavfile.h"
#include "obj_io.hpp"
#include "graphics.cpp"
#define WAVFILE_SAMPLES_PER_SECOND 44100
using namespace std;
using std::vector;
int ln = 4194304;
std::vector<string>graph;
std::vector<int>groots;
std::vector<string>grootsl;
int syslng=40;
int its=0;
int it=0;
int NUM_SAMPLES = (WAVFILE_SAMPLES_PER_SECOND*8);
// Function Prototypes

void display();
void specialKeys();
// Global Variables
double rotate_y=0;
double rotate_x=0;
int numStr;
int indexSys;
bool finished = false;
int totVal;
std::vector<string> symbols;
std::string currentletter;
std::string itcurrent;
std::string blank = "";
std::string inputs;
int i;
int y;
int isq;
int icub;
int var;
int vartw;
int varth;
int varf;
int digMultiplier=1;
int digValue=0;
int sqCounter = 0;
int floorer;
int help;
bool twos=false;
bool twost=true;
string letterValue;


void digitalroot(std::vector<string> const& input){
    cout << "digitalroot process begin...\n";
    for (its = 0; its < ln; its++){
        inputs = input[its];
        int numStr=0;
        int indexSys=0;
        finished = false;
        if(syslng == 1){
            cout << "write digital roots for ones...\n";
            finished = true;
            groots[its] = 1;
            grootsl[its] = symbols[1];
        }
        if(syslng == 2){
            cout << "write digital roots for twos...\n";
            finished = true;
            groots[its] = 1;
            grootsl[its] = symbols[1];
            if(its/2 != floor(its/2)){
                groots[its] = 2;
                grootsl[its] = symbols[2];
            }
        }
        if(syslng <4 && syslng >2){
            cout << "write digital roots for threes...\n";
            finished = true;
            if(inputs.length() >0){
                indexSys=0;
                numStr=0;
                for(it = 0;finished !=true; indexSys++){
                    currentletter = symbols[indexSys];
                    itcurrent = inputs[0];
                    if(currentletter == itcurrent){
                        numStr = indexSys;
                        inputs.erase(0, 1);
                        indexSys = 0;
                        if(numStr = syslng && inputs == ""){
                            cout << "\ncheck" << currentletter << numStr;
                            inputs = inputs + graph[numStr-1];
                            numStr = 0;
                            indexSys = 0;
                            cout << inputs;
                        }
                        if(numStr < syslng && inputs == ""){
                            groots[its] = numStr;
                            grootsl[its] = symbols[numStr+1];
                            finished = true;
                        }
                    }
                }
            }
        }
        while(finished != true){
            if(inputs.length() >0){
                indexSys=0;
                numStr=0;
                for(it = 0;finished !=true; indexSys++){
                    currentletter = symbols[indexSys];
                    itcurrent = inputs[0];
                    if(currentletter == itcurrent){
                        numStr = numStr + indexSys;
                        inputs.erase(0, 1);
                        indexSys = 0;
                        if(numStr > syslng && inputs == ""){
                            inputs = inputs + graph[numStr];
                            numStr = 0;
                            indexSys = 0;
                        }
                        if(numStr <= syslng && inputs == ""){
                            groots[its] = numStr;
                            grootsl[its] = symbols[numStr];
                            finished = true;
                        }
                    }
                }
            }
            if(inputs.length() < 1){
                finished = true;
            }
        }
    }
}

int power;
void tablegen(int syslng){
    bool check=false;
    if(check ==false){
        symbols[0]="";
        symbols[1]="";
        symbols[2]="";
        symbols[3]="";
        symbols[4]="";
        symbols[5]="";
        symbols[6]="";
        symbols[7]="";
        symbols[8]="	";
        symbols[9]="";
        symbols[10]="";
        symbols[11]="";
        symbols[12]="";
        symbols[13]="";
        symbols[14]="";
        symbols[15]="";
        symbols[16]="";
        symbols[17]="";
        symbols[18]="";
        symbols[19]="";
        symbols[20]="";
        symbols[21]="";
        symbols[22]="";
        symbols[23]="";
        symbols[24]="";
        symbols[25]="";
        symbols[26]="";
        symbols[27]="";
        symbols[28]="";
        symbols[29]=" ";
        symbols[30]="!";
        symbols[31]="#";
        symbols[32]="$";
        symbols[33]="%";
        symbols[34]="&";
        symbols[35]="'";
        symbols[36]="(";
        symbols[37]=")";
        symbols[38]="*";
        symbols[39]="+";
        symbols[40]=",";
        symbols[41]="-";
        symbols[42]=".";
        symbols[43]="/";
        symbols[44]="0";
        symbols[45]="1";
        symbols[46]="2";
        symbols[47]="3";
        symbols[48]="4";
        symbols[49]="5";
        symbols[50]="6";
        symbols[51]="7";
        symbols[52]="8";
        symbols[53]="9";
        symbols[54]=":";
        symbols[55]=";";
        symbols[56]="<";
        symbols[57]="=";
        symbols[58]=">";
        symbols[59]="?";
        symbols[60]="@";
        symbols[61]="A";
        symbols[62]="B";
        symbols[63]="C";
        symbols[64]="D";
        symbols[65]="E";
        symbols[66]="F";
        symbols[67]="G";
        symbols[68]="H";
        symbols[69]="I";
        symbols[70]="J";
        symbols[71]="K";
        symbols[72]="L";
        symbols[73]="M";
        symbols[74]="N";
        symbols[75]="O";
        symbols[76]="P";
        symbols[77]="Q";
        symbols[78]="R";
        symbols[79]="S";
        symbols[80]="T";
        symbols[81]="U";
        symbols[82]="V";
        symbols[83]="W";
        symbols[84]="X";
        symbols[85]="Y";
        symbols[86]="Z";
        symbols[87]="[";
        symbols[88]="■";
        symbols[89]="]";
        symbols[90]="^";
        symbols[91]="_";
        symbols[92]="`";
        symbols[93]="a";
        symbols[94]="b";
        symbols[95]="c";
        symbols[96]="d";
        symbols[97]="e";
        symbols[98]="f";
        symbols[99]="g";
        symbols[100]="h";
        symbols[101]="i";
        symbols[102]="j";
        symbols[103]="k";
        symbols[104]="l";
        symbols[105]="m";
        symbols[106]="n";
        symbols[107]="o";
        symbols[108]="p";
        symbols[109]="q";
        symbols[110]="r";
        symbols[111]="s";
        symbols[112]="t";
        symbols[113]="u";
        symbols[115]="v";
        symbols[116]="w";
        symbols[117]="x";
        symbols[118]="y";
        symbols[119]="z";
        symbols[120]="{";
        symbols[121]="|";
        symbols[122]="}";
        symbols[121]="~";
        symbols[122]="⌂";
        symbols[123]="Ç";
        symbols[124]="ü";
        symbols[125]="é";
        symbols[126]="â";
        symbols[127]="ä";
        symbols[128]="à";
        symbols[129]="å";
        symbols[130]="ç";
        symbols[131]="ê";
        symbols[132]="ë";
        symbols[133]="è";
        symbols[134]="ï";
        symbols[135]="î";
        symbols[136]="ì";
        symbols[137]="Ä";
        symbols[138]="Å";
        symbols[139]="É";
        symbols[140]="æ";
        symbols[141]="Æ";
        symbols[142]="ô";
        symbols[143]="ö";
        symbols[144]="ò";
        symbols[145]="û";
        symbols[146]="ù";
        symbols[147]="ÿ";
        symbols[148]="Ö";
        symbols[149]="Ü";
        symbols[150]="¢";
        symbols[151]="£";
        symbols[152]="¥";
        symbols[153]="₧";
        symbols[154]="ƒ";
        symbols[155]="á";
        symbols[156]="í";
        symbols[157]="ó";
        symbols[158]="ú";
        symbols[159]="ñ";
        symbols[160]="Ñ";
        symbols[161]="ª";
        symbols[162]="º";
        symbols[163]="¿";
        symbols[164]="⌐";
        symbols[165]="½";
        symbols[166]="¼";
        symbols[167]="¡";
        symbols[168]="«";
        symbols[169]="»";
        symbols[171]="░";
        symbols[172]="▒";
        symbols[173]="▓";
        symbols[174]="│";
        symbols[175]="╛";
        symbols[176]="┐";
        symbols[177]="└";
        symbols[178]="┴";
        symbols[179]="┬";
        symbols[180]="├";
        symbols[181]="─";
        symbols[182]="┼";
        symbols[183]="╞";
        symbols[184]="╟";
        symbols[185]="╚";
        symbols[186]="╔";
        symbols[187]="╦";
        symbols[188]="╠";
        symbols[189]="═";
        symbols[191]="╬";
        symbols[192]="╧";
        symbols[193]="╨";
        symbols[194]="╤";
        symbols[195]="╥";
        symbols[196]="╙";
        symbols[197]="╘";
        symbols[198]="╒";
        symbols[199]="╓";
        symbols[200]="╫";
        symbols[201]="╪";
        symbols[202]="┘";
        symbols[203]="┌";
        symbols[204]="▄";
        symbols[205]="▌";
        symbols[206]="▀";
        symbols[207]="α";
        symbols[208]="ß";
        symbols[209]="Γ";
        symbols[210]="π";
        symbols[211]="Σ";
        symbols[212]="σ";
        symbols[213]="µ";
        symbols[214]="τ";
        symbols[215]="Φ";
        symbols[216]="Ω";
        symbols[217]="δ";
        symbols[218]="∞";
        symbols[219]="ε";
        symbols[220]="∩";
        symbols[221]="≡";
        symbols[222]="±";
        symbols[223]="≥";
        symbols[224]="≤";
        symbols[225]="⌠";
        symbols[226]="⌡";
        symbols[227]="÷";
        symbols[228]="≈";
        symbols[229]="°";
        symbols[230]="∙";
        symbols[231]="·";
        symbols[232]="√";
        symbols[233]="ⁿ";
        symbols[234]="²";
        symbols[235]=" ";
    }


    cout << "generating numbers...\n";
    for(i=1; i < ln; i++){
        if (syslng == 1){
            cout << "write for 1...\n";
            graph[i] = symbols[1];
            groots[i] = 1;
        }
        if (i < syslng && syslng != 1){
            cout << "write single digits...\n";
            graph[i] = (symbols[i]);
            groots[i] = i;
        }
        finished = false;
        check = false;
        isq = 0;
        icub = 1;

        if (i>=syslng && syslng != 1){
            varf = i;
            for(isq = 1; finished == false; isq = isq + 1){
                if (finished != true){
                    for (icub = 1; check != true; icub = icub + 1){
                        if((std::pow(double(syslng), (icub))) > i){
                            check = true;
                        }
                        sqCounter= icub;
                    }
                    if(sqCounter <1){
                    }
                    for(varth = 0; finished!=true; varth++){
                    help = 1;
                        for (int helpr = 0; helpr<=sqCounter-1; helpr++){
                            help = help*syslng;
                            }
                        help = help*syslng;
                        if(sqCounter < 3){
                            help = syslng;
                        }
                        if(varf-(std::pow(double(syslng), sqCounter-1)*varth) <= help && sqCounter>1){
                            power = (int)std::pow(double(syslng), sqCounter-1);
                            varf = (varf - ((power)*varth));
                            graph[i] = graph[i] + ((symbols[varth]));
                            groots[i] = groots[i] + varth;
                            sqCounter--;
                            varth=-1;
                        }
                        if (sqCounter < 2 && varf - varth == 0){
                            varf = (varf - varth);
                            graph[i] = graph[i] + symbols[varth];
                            groots[i] = groots[i] + varth;
                            sqCounter--;
                            finished = true;
                            varth = 0;
                        }
                    }
                }
                if (isq > ln){
                    std::cout << "something wrong...\n";
                    finished=true;
                }
            }
        }
    }
    finished = false;
}

struct wavfile_header {
	char	riff_tag[4];
	int	riff_length;
	char	wave_tag[4];
	char	fmt_tag[4];
	int	fmt_length;
	short	audio_format;
	short	num_channels;
	int	sample_rate;
	int	byte_rate;
	short	block_align;
	short	bits_per_sample;
	char	data_tag[4];
	int	data_length;
};

FILE * wavfile_open( const char *filename )
{
	struct wavfile_header header;

	int samples_per_second = WAVFILE_SAMPLES_PER_SECOND;
	int bits_per_sample = 16;

	strncpy(header.riff_tag,"RIFF",4);
	strncpy(header.wave_tag,"WAVE",4);
	strncpy(header.fmt_tag,"fmt ",4);
	strncpy(header.data_tag,"data",4);

	header.riff_length = 0;
	header.fmt_length = 16;
	header.audio_format = 1;
	header.num_channels = 1;
	header.sample_rate = samples_per_second;
	header.byte_rate = samples_per_second*(bits_per_sample/8);
	header.block_align = bits_per_sample/8;
	header.bits_per_sample = bits_per_sample;
	header.data_length = 0;

	FILE * file = fopen(filename,"w+");
	if(!file) return 0;

	fwrite(&header,sizeof(header),1,file);

	fflush(file);

	return file;

}

void wavfile_write( FILE *file, short data[], int length )
{
	fwrite(data,sizeof(short),length,file);
}

void wavfile_close( FILE *file )
{
	int file_length = ftell(file);

	int data_length = file_length - sizeof(struct wavfile_header);
	fseek(file,sizeof(struct wavfile_header) - sizeof(int),SEEK_SET);
	fwrite(&data_length,sizeof(data_length),1,file);

	int riff_length = file_length - 8;
	fseek(file,4,SEEK_SET);
	fwrite(&riff_length,sizeof(riff_length),1,file);

	fclose(file);
}
void objwriter ( std::string output_filename, int node_num, int face_num,
  int normal_num, int order_max, vector<double> node_xyz, vector<int> face_order,
  vector<int> face_node, vector<double> normal_vector, vector<int> vertex_normal ){
  int face;
  int i;
  int j;
  int node;
  int normal;
  std::ofstream output;
  short obj;
  int text_num;
  int vertex;
  double w;


  output.open ("object.obj");

  if ( !output )
  {
    cerr << "\n";
    cerr << "OBJ_WRITE - Fatal error!\n";
    cerr << "  Could not open the output file \"" << output_filename << "\".\n";
    exit ( 1 );
  }

  text_num = 0;

  output << "#DRACSFIGAS RENDER";
  output << "#obj_io::obj_write.C\n";
  output << "\n";
  output << "g Group001\n";

  text_num = text_num + 4;
  if ( 0 < node_num )
  {
    output << "\n";
    text_num = text_num + 1;
  }
  cout << "writing file";

  w = 1.0;
  for ( node = 0; node < node_num; node++ )
  {
    output << "v";
    for ( i = 0; i < 3; i++ )
    {
      output<< "  "<<node_xyz.at(i+3*node);
    }
    output << "  " << w << "\n";
    text_num = text_num + 1;
  }
  if ( 0 < normal_num )
  {
    output << "\n";
    text_num = text_num + 1;

    for ( normal = 0; normal < normal_num; normal++ )
    {
      output << "vn";
      for ( i = 0; i < 3; i++ )
      {
        output << "  " << normal_vector.at(i+normal*3);
      }
      output << "\n";
      text_num = text_num + 1;
    }
  }
  if ( 0 < face_num )
  {
    output << "\n";
    text_num = text_num + 1;
  }

  for ( face = 0; face < face_num; face++ )
  {
    output << "f";
    for ( vertex = 0; vertex < face_order.at(face); vertex++ )
    {
      output << "  " << face_node.at(vertex+face*order_max);
      if ( 0 < normal_num )
      {
        output << "//" << vertex_normal.at(vertex+face*order_max);
      }
    }
    output << "\n";
    text_num = text_num + 1;
  }
  output.flush();
  output.close ( );
  if ( false )
  {
    cout << "\n";
    cout << "OBJ_WRITE:\n";
    cout << "  Wrote " << text_num << " text lines to \""
       << output_filename << "\"\n";
  }

  return;
}
void timestamp ( ){
# define TIME_SIZE 40

  static char time_buffer[TIME_SIZE];
  const struct std::tm *tm_ptr;
  size_t len;
  std::time_t now;

  now = std::time ( NULL );
  tm_ptr = std::localtime ( &now );

  len = std::strftime ( time_buffer, TIME_SIZE, "%d %B %Y %I:%M:%S %p", tm_ptr );

  std::cout << time_buffer << "\n";

  return;
  # undef TIME_SIZE
}

int main(){
    string input;
    graph.resize(ln,"");
    groots.resize(ln,0);
    grootsl.resize(ln,"");
    symbols.resize(236,"");
    cout << "Welcome to Counting System-FIGURES, the generative rendering program, yielding\n";
    cout << "of interpretations of digital roots. Digital roots in this program are \n";
    cout << "constructed on a basis of a multiplication table, but with alternate counting\n";
    cout << "systems contrasted, different from 0-9. The data is then analyzed by adding the\n";
    cout << "imaginary digital symbols together, to achieve a single digit number per cell.\n";
    cout << "\n\nYou may see your options once you make a selection of your desired counting\n";
    cout << "system length, and a text file of the first square root of the whole system is\n";
    cout << "thereafter generated.\n\n	Please pick a number between 1-236: ";
    getline (cin, input);
    stringstream(input) >> syslng;
    syslng = syslng +1;
    if (floor (syslng) > 236)
    {
        syslng = 10;
    }
    if (floor (syslng) < 1)
    {
        syslng = 10;
    }
    tablegen(syslng);
    cout << "\ndone.\n";
    int convertc=0;
    std::vector<string>graphchar(ln);
    cout << "generating graphs...\n";
    digitalroot(graphchar);
    cout << "\ndone.\n";

    for (convertc = 0; convertc < ln; convertc++){
        graphchar[convertc] = graph[convertc].c_str();
    }
    cout << "\n\n" << syslng-1 << " symbols in your system. Your available commands:\n";
    cout << ".txt table write: table\n";
    cout << "grahics and audio render: av\n";
    cout << "end:end\n\n";
    getline (cin, input);


    int isq;
    int icub;

    string color;
    string viewSymbols;
    string symbolsConnect;
    string lineSet;
    int tileIncrementx = 10;
    int tileIncrementy = 8;
    int tileScaler=128;
    int xOffset;
    int yOffset;
    bool polyFill;
    string look;
    int increm;
    int r=15,g=15,b=15;
    int tscale;
    string cmd;
    bool loop = true;
    while (loop)
    {
        if(input == "table"){
        for (i=0; i <ln; i = i + 1)
            {
                cout << groots[i] << ",";
            }
        }
        if(input == "av"){
            cout << "\n\nGenerating image of tiles of red, blue, green, or random rainbow or chess? (r,b,g,rB,bG,gR,bR,gB,rG,rain,chess): ";
            getline (cin, color);
            if(color == "r"){
                r = 255 / syslng;
                b = 5;
                g = 5;
            }
            if(color == "rb"){
                r = 160 / syslng;
                b = 255/syslng;
                g = 5;
            }
            if(color == "gr"){
                r = 255 / syslng;
                b = 5;
                g = 160 / syslng*10;
            }
            if(color == "br"){
                r = 255 / syslng;
                b = 160/syslng;
                g = 5;
            }
            if(color == "rg"){
                r = 255 / syslng;
                b = 5;
                g = 160 / syslng*10;
            }
            if(color == "b"){
                b = 255 / syslng;
                r = 5;
                g = 5;
            }
            if(color == "bg"){
                r = 5;
                b = 160 / syslng;
                g = 255 / syslng;
            }
            if(color == "gb"){
                r = 5;
                b = 255 / syslng;
                g = 160 / syslng;
            }
            if(color == "g"){
                g = 255 / syslng;
                r = 5;
                b = 5;
            }
            if(color == "rain"){
                b = (rand()%60); b= (b*3)/ syslng;
                r= (rand()%125); r=(r *2) / syslng;
                g = (rand()%70);g=(g *3)/ syslng;
            }
            if(color == "chess"){
                b = 120;
                r= 120;
                g = 120;
            }
            int tempo;
            string grid;
            cout << "\n\nGenerating image of tiles outlines of black, white or random rainbow or chess? (b,w,anything): ";
            getline (cin, grid);
            cout << "\nSpecify the scale (square root of tiles per large square window, limit 512): ";
            getline (cin, cmd);
            stringstream(cmd) >> tileScaler;
            cout << "\nWould you like to view:\nthe numbers of the digital symbols,\nor none? (yes, n): ";
            getline (cin, viewSymbols);
            cout << "\nSpecify x-offset of counting interval(limit of "<<sqrt(ln)<<"-n of scaler): ";
            getline (cin, cmd);
            stringstream(cmd) >> xOffset;
            cout << "\nSpecify y-offset of counting interval(limit of "<<sqrt(ln)<<"-n of scaler): ";
            getline (cin, cmd);
            stringstream(cmd) >> yOffset;
            cout << "\n\nGenerate harmonics, or a melodic sequence? (harmonics(1,2,3),lns,sqlns,rlns,octsqlns): ";
            getline (cin, cmd);
            look = cmd;
            cout << "\n\nTempo(beats per 8sec): ";
            getline (cin, cmd);
            stringstream(cmd) >> tempo;
            const char* title = ("DRACSFIGAS render");
            int wind = initwindow(4096, 4096, title,0,0,false, true);
            setcurrentwindow(wind);
            int yScaler = 4096 / tileScaler;
            int xScaler = 4096 / tileScaler;
            int colorsel;
            int colorgrid;
            char numgr;
            setfillstyle(SOLID_FILL, WHITE);
            setcolor(WHITE);
            rectangle(0, 0, 1280, 1280);
            floodfill(10, 10,WHITE);
            for (i = 1; i < tileScaler; i = i+1){
                for (isq = 1; isq < tileScaler; isq = isq+1){
                    colorsel = (COLOR(r*(groots[(i+xOffset)*(isq+yOffset)]),g*(groots[(i+xOffset)*(isq+yOffset)]),b*(groots[(i+xOffset)*(isq+yOffset)])));
                    colorgrid = (COLOR(r*(groots[(i+xOffset)*(i+xOffset)]),g*(groots[(i+xOffset)*(isq+yOffset)]),b*(groots[(isq+yOffset)*(isq+yOffset)])));
                    setcolor(colorgrid);
                    if (grid == "w"){
                        setcolor(WHITE);
                    }
                    if (grid == "b"){
                        setcolor(BLACK);
                    }
                    rectangle((0+((i-1)*(xScaler))),(0+((isq-1)*(yScaler))),(0+((i-1)*(xScaler))+xScaler),(0+((isq-1)*(yScaler)) + yScaler));
                    setfillstyle(SOLID_FILL, colorsel);
                    floodfill((1+((i-1)*(xScaler))),(1+((isq-1)*(yScaler))),colorgrid);
                    if(viewSymbols=="yes"){
                        numgr = '0' + groots[(xOffset+i)*(isq+yOffset)];
                        outtextxy((0+((i-1)*(xScaler))),(0+((isq-1)*(yScaler))),&numgr);
                    }
                }
            }
            cout << "\n\ngfx rendered.\n\n";
            i=0;
            isq=0;
            icub = 0;

            int block = NUM_SAMPLES / tempo;
            short int waveform[NUM_SAMPLES];
            double frequency = 880.0;
            int offsind;
            const double sin_frequency = 330.0;
            const double sample_rate = 44100.0;
            const double normalized_frequency = (2 * M_PI * sin_frequency) / sample_rate;
            int audiolength = NUM_SAMPLES+1;
            FILE * f = wavfile_open("output.wav");

            if(look == "harmonics1"){
                FILE * f = wavfile_open("output_h1.wav");
                for (isq=0; isq<=syslng; isq++){
                    for(icub = 0;icub<=syslng; icub++){
                        for (size_t i = 0; i != block; ++i) {
                            const double phase = i * normalized_frequency;
                            waveform[int(i+(isq*block))] = waveform[int(i+(isq*block))] + (5+(5/int(syslng))*groots[int(icub*isq)])*int(sin(phase+((phase/syslng)*groots[icub*isq])+groots[icub]));
                        }
                    }

                }
                wavfile_write(f,waveform,block*syslng);
            }
            if(look == "harmonics2"){
                FILE * f = wavfile_open("output_h2.wav");
                for (isq=0; isq<=syslng; isq++){
                    for(icub = 0;icub<=syslng; icub++){
                        for (size_t i = 0; i != block; ++i) {
                            const double phase = i * normalized_frequency;
                            waveform[int(i+(isq*block))] = waveform[int(i+(isq*block))] + int(5+(5/syslng)*groots[icub*isq])*int(sin(phase*groots[icub*isq]+groots[icub]));
                        }
                    }

                }
                wavfile_write(f,waveform,block*syslng);
            }
            if(look == "harmonics3"){
                FILE * f = wavfile_open("output_h3.wav");
                for (isq=0; isq<=syslng; isq++){
                    for (size_t i = 0; i != block; ++i) {
                        const double phase = i * normalized_frequency;
                        waveform[int(i+(isq*block))] = waveform[int(i+(isq*block))] + (35)*int(sin(phase+(phase*groots[isq]+groots[isq])));
                    }
                }
                wavfile_write(f,waveform,block*syslng);
            }
            if(look=="lns"){
                FILE * f = wavfile_open("output_lns.wav");
                cout << "\nlinear offset(1 normal): ";
                getline (cin, cmd);
                stringstream(cmd) >> offsind;
                for (isq=0; isq<(syslng*syslng); isq++){
                    for (size_t i = 0; i != block; ++i) {
                        const double phase = i * normalized_frequency;
                        waveform[i] = (75)*int(sin((phase / (syslng/2))*int(groots[offsind*isq]+groots[offsind*isq])));
                    }
                    wavfile_write(f,waveform,block);
                }
            }
            if(look=="sqlns"){
                FILE * f = wavfile_open("output_sqlns.wav");
                cout << "\nlinear offset(0 normal): ";
                getline (cin, cmd);
                stringstream(cmd) >> offsind;
                for (isq=0; isq<(syslng*syslng*syslng); isq++){
                    for (size_t i = 0; i != block; ++i) {
                        const double phase = i * normalized_frequency;
                        waveform[i] = (75)*int(sin((phase / (syslng/2))*int(groots[(isq+offsind)*isq]+groots[isq*isq])));
                    }
                        wavfile_write(f,waveform,block);
                }
            }
            if(look=="rlns"){
                FILE * f = wavfile_open("output_revlns.wav");
                cout << "\nlinear offset(1 normal): ";
                getline (cin, cmd);
                stringstream(cmd) >> offsind;
                for (isq=(syslng*syslng); isq>0; isq--){
                    for (size_t i = 0; i != block; ++i) {
                        const double phase = i * normalized_frequency;
                        waveform[i] = (75)*int(sin((phase / (syslng/2))*int(groots[offsind*isq]+groots[offsind*isq])));
                    }
                    wavfile_write(f,waveform,block);
                }
            }
            if(look=="octsqlns"){
                FILE * f = wavfile_open("output_octsqlns.wav");
                cout << "\nlinear offset(0 normal): ";
                getline (cin, cmd);
                stringstream(cmd) >> offsind;
                for (isq=0; isq<(syslng*syslng*syslng); isq++){
                    for (size_t i = 0; i != block; ++i) {
                        const double phase = i * normalized_frequency;
                        waveform[i] = (75)*int(sin((phase / (syslng/2))+int((phase/syslng)*groots[(isq+offsind)*isq]+groots[isq*isq])));
                    }
                        wavfile_write(f,waveform,block);
                }
            }

            wavfile_close(f);

            timestamp ( );
            # define FACE_NUM 12 * ((512-syslng) * syslng*syslng)
            # define NODE_NUM 8 * ((512-syslng) * syslng*syslng)
            # define NORMAL_NUM 6 * ((512-syslng) * syslng*syslng)
            # define ORDER_MAX 3 * ((512-syslng) * syslng*syslng)
            std::vector<int> face_node;
            int face_num;
            std::vector<int> face_order;
            int node_num;
            std::vector<double> node_xyz;
            std::vector<double> normal_vector;
            int normal_num;
            int order_max;
            std::vector<int> vertex_normal;
            icub = 0;
            i = 0;
            isq = 0;
            cout << "\ntrying for loop";
            for(icub = 0; icub <=(512/syslng); i++){
                for(i = 0; i<=(syslng); i++){
                    for(isq = 0; i<=(syslng); i++){
                        double adjust = (groots[icub*syslng+(i*isq)])/syslng;
                        face_node.push_back(1);
                        face_node.push_back(3);
                        face_node.push_back(2);
                        face_node.push_back(2);
                        face_node.push_back(3);
                        face_node.push_back(4);
                        face_node.push_back(1);
                        face_node.push_back(6);
                        face_node.push_back(5);
                        face_node.push_back(1);
                        face_node.push_back(2);
                        face_node.push_back(6);
                        face_node.push_back(3);
                        face_node.push_back(7);
                        face_node.push_back(4);
                        face_node.push_back(4);
                        face_node.push_back(7);
                        face_node.push_back(8);
                        face_node.push_back(5);
                        face_node.push_back(6);
                        face_node.push_back(8);
                        face_node.push_back(5);
                        face_node.push_back(8);
                        face_node.push_back(7);
                        face_node.push_back(1);
                        face_node.push_back(5);
                        face_node.push_back(7);
                        face_node.push_back(1);
                        face_node.push_back(7);
                        face_node.push_back(3);
                        face_node.push_back(2);
                        face_node.push_back(4);
                        face_node.push_back(6);
                        face_node.push_back(6);
                        face_node.push_back(4);
                        face_node.push_back(8);
                        face_num = FACE_NUM;
                        for(int twelver = 0; twelver < 12; twelver++){
                            face_order.push_back(3);
                        }
                        node_num = NODE_NUM;
                        node_xyz.push_back(groots[isq]+1+adjust);
                        node_xyz.push_back(i+1+adjust);
                        node_xyz.push_back(icub+5+adjust);
                        node_xyz.push_back(groots[isq]+2);
                        node_xyz.push_back(i+1+adjust);
                        node_xyz.push_back(icub+5+adjust);
                        node_xyz.push_back(groots[isq]+1+adjust);
                        node_xyz.push_back(i+2);
                        node_xyz.push_back(icub+5+adjust);
                        node_xyz.push_back(groots[isq]+2);
                        node_xyz.push_back(i+2);
                        node_xyz.push_back(icub+5+adjust);
                        node_xyz.push_back(groots[isq]+1+adjust);
                        node_xyz.push_back(i+1+adjust);
                        node_xyz.push_back(icub+6);
                        node_xyz.push_back(groots[isq]+2);
                        node_xyz.push_back(i+1+adjust);
                        node_xyz.push_back(icub+6);
                        node_xyz.push_back(groots[isq]+1+adjust);
                        node_xyz.push_back(i+2);
                        node_xyz.push_back(icub+6);
                        node_xyz.push_back(groots[isq]+2);
                        node_xyz.push_back(i+2);
                        node_xyz.push_back(icub+6);
                        normal_num = NORMAL_NUM;
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(1.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(-1.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(1.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(-1.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(1.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(-1.0);
                        normal_vector.push_back(0.0);
                        normal_vector.push_back(0.0);
                        order_max = ORDER_MAX;
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(2);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(2);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(4);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(4);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(3);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(3);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(1);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(1);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(6);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(6);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(5);
                        }
                        for(int threer = 0; threer < 3; threer++){
                            vertex_normal.push_back(5);
                        }
                    }
                    cout << "for loop isq";
                }
                cout << "for loop i";
            }

            cout << "tryina write";
            cout << "\n";
            cout << "Writing obj_lns.obj";
            string filename = "obj_lns.obj";
            objwriter (filename, node_num, face_num, normal_num,
            order_max,node_xyz,face_order,face_node,normal_vector,vertex_normal);

            cout << "\n";
            cout << "Your cubes are ready!";
            # undef FACE_NUM
            # undef NODE_NUM
            # undef NORMAL_NUM
            # undef ORDER_MAX

        }
        if(input == "end"){
            loop = 0;
            return 0;
        }


        else{
            cout << "\n\n" << syslng-1 << " symbols in your system. Your available commands:\n";
            cout << ".txt table write: table\n";
            cout << "grahics and audio render: av\n";
            cout << "end:end\n\n";
            getline (cin, input);
        }
    }
    return 0;
    system("PAUSE");
}
