#include <bits/stdc++.h>
#include <string>
#include <Windows.h> 
using namespace std;
char HEX[16] = { '0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f' },comm[100],*com;
bool UseKey=0;
void setIndex(int num, char* hexNumber){
	for (int i = 0; i < 8; i++)hexNumber[i] = '0';
	int index = 7;
	while (num != 0 && index >= 0){
		hexNumber[index--] = HEX[num % 16];
		num = num / 16;
	}
}
string bl0,bl1,bl2,bl3,bl4,bl5,bl6,bl7,bl8,bl9,bl10,bl11,bl12,bl13,bl14,bl15,bl16,bl17,bl18,bl19,bl20,bl21,bl22,bl23,bl24,bl25,bl26,bl27,bl28,bl29,bl30,bl31,bl32,bl33,bl34,bl35,bl36,bl37,bl38,bl39,bl40,bl41,bl42,bl43,bl44,bl45,bl46,bl47,bl48,bl49,bl50,bl51,bl52,bl53,bl54,bl55,bl56,bl57,bl58,bl59,bl60,bl61,bl62,bl63,bl64;
string pw0a,pw0b,pw1a,pw2a,pw3a,pw4a,pw5a,pw6a,pw7a,pw8a,pw9a,pw10a,pw11a,pw12a,pw13a,pw14a,pw15a,pw1b,pw2b,pw3b,pw4b,pw5b,pw6b,pw7b,pw8b,pw9b,pw10b,pw11b,pw12b,pw13b,pw14b,pw15b;
void ReadDump(const char* ph){
	bl0=bl1=bl2=bl3=bl4=bl5=bl6=bl7=bl8=bl9=bl10=bl11=bl12=bl13=bl14=bl15=bl16=bl17=bl18=bl19=bl20=bl21=bl22=bl23=bl24=bl25=bl26=bl27=bl28=bl29=bl30=bl31=bl32=bl33=bl34=bl35=bl36=bl37=bl38=bl39=bl40=bl41=bl42=bl43=bl44=bl45=bl46=bl47=bl48=bl49=bl50=bl51=bl52=bl53=bl54=bl55=bl56=bl57=bl58=bl59=bl60=bl61=bl62=bl63=bl64="";
	FILE *fp = fopen(ph, "rb");
    fseek(fp, 0, SEEK_END);
    int size=ftell(fp);
    fclose(fp);
    if(fp == NULL||size!=1024) {
    	printf("\n文件错误或不存在\n");
    	exit(0); 
	}
	int t=0;
    ifstream in(ph,ios::in|ios::binary);
	int byteBeenRead = 0;
	char hexNumber[9] = "00000000";
	unsigned char temp;
	while (in.read((char*)&temp, 1)){
		if (byteBeenRead % 16 == 0){
			setIndex(byteBeenRead, hexNumber);
			t++;
		}
		byteBeenRead++;
		int hex = (unsigned)temp;
		string nn;
		nn= HEX[hex / 16];
		nn+=HEX[hex % 16];

		if(t==1)bl0+=nn;
		else if(t==2)bl1+=nn;
		else if(t==3)bl2+=nn;
		else if(t==4)bl3+=nn;

		else if(t==5)bl4+=nn;
		else if(t==6)bl5+=nn;
		else if(t==7)bl6+=nn;
		else if(t==8)bl7+=nn;

		else if(t==9)bl8+=nn;
		else if(t==10)bl9+=nn;
		else if(t==11)bl10+=nn;
		else if(t==12)bl11+=nn;

		else if(t==13)bl12+=nn;
		else if(t==14)bl13+=nn;
		else if(t==15)bl14+=nn;
		else if(t==16)bl15+=nn;

		else if(t==17)bl16+=nn;
		else if(t==18)bl17+=nn;
		else if(t==19)bl18+=nn;
		else if(t==20)bl19+=nn;

		else if(t==21)bl20+=nn;
		else if(t==22)bl21+=nn;
		else if(t==23)bl22+=nn;
		else if(t==24)bl23+=nn;

		else if(t==25)bl24+=nn;
		else if(t==26)bl25+=nn;
		else if(t==27)bl26+=nn;
		else if(t==28)bl27+=nn;

		else if(t==29)bl28+=nn;
		else if(t==30)bl29+=nn;
		else if(t==31)bl30+=nn;
		else if(t==32)bl31+=nn;

		else if(t==33)bl32+=nn;
		else if(t==34)bl33+=nn;
		else if(t==35)bl34+=nn;
		else if(t==36)bl35+=nn;

		else if(t==37)bl36+=nn;
		else if(t==38)bl37+=nn;
		else if(t==39)bl38+=nn;
		else if(t==40)bl39+=nn;

		else if(t==41)bl40+=nn;
		else if(t==42)bl41+=nn;
		else if(t==43)bl42+=nn;
		else if(t==44)bl43+=nn;

		else if(t==45)bl44+=nn;
		else if(t==46)bl45+=nn;
		else if(t==47)bl46+=nn;
		else if(t==48)bl47+=nn;

		else if(t==49)bl48+=nn;
		else if(t==50)bl49+=nn;
		else if(t==51)bl50+=nn;
		else if(t==52)bl51+=nn;

		else if(t==53)bl52+=nn;
		else if(t==54)bl53+=nn;
		else if(t==55)bl54+=nn;
		else if(t==56)bl55+=nn;

		else if(t==57)bl56+=nn;
		else if(t==58)bl57+=nn;
		else if(t==59)bl58+=nn;
		else if(t==60)bl59+=nn;

		else if(t==61)bl60+=nn;
		else if(t==62)bl61+=nn;
		else if(t==63)bl62+=nn;
		else if(t==64)bl63+=nn;

	}
	in.close();
	return;
} 
void DumpKey(){
	pw0a=bl3.substr(0,bl3.length()-20);
	pw0b=bl3.substr(20,bl3.length());

	pw1a=bl7.substr(0,bl7.length()-20);
	pw1b=bl7.substr(20,bl7.length());

	pw2a=bl11.substr(0,bl11.length()-20);
	pw2b=bl11.substr(20,bl11.length());

	pw3a=bl15.substr(0,bl15.length()-20);
	pw3b=bl15.substr(20,bl15.length());

	pw4a=bl19.substr(0,bl19.length()-20);
	pw4b=bl19.substr(20,bl19.length());

	pw5a=bl23.substr(0,bl23.length()-20);
	pw5b=bl23.substr(20,bl23.length());

	pw6a=bl27.substr(0,bl27.length()-20);
	pw6b=bl27.substr(20,bl27.length());

	pw7a=bl31.substr(0,bl31.length()-20);
	pw7b=bl31.substr(20,bl31.length());

	pw8a=bl35.substr(0,bl35.length()-20);
	pw8b=bl35.substr(20,bl35.length());

	pw9a=bl39.substr(0,bl39.length()-20);
	pw9b=bl39.substr(20,bl39.length());

	pw10a=bl43.substr(0,bl43.length()-20);
	pw10b=bl43.substr(20,bl43.length());

	pw11a=bl47.substr(0,bl47.length()-20);
	pw11b=bl47.substr(20,bl47.length());

	pw12a=bl51.substr(0,bl51.length()-20);
	pw12b=bl51.substr(20,bl51.length());

	pw13a=bl55.substr(0,bl55.length()-20);
	pw13b=bl55.substr(20,bl55.length());

	pw14a=bl59.substr(0,bl59.length()-20);
	pw14b=bl59.substr(20,bl59.length());

	pw15a=bl63.substr(0,bl63.length()-20);
	pw15b=bl63.substr(20,bl63.length());
	printf ("\n%s,%s\n",pw0a.c_str(),pw0b.c_str());
	printf ("%s,%s\n",pw1a.c_str(),pw1b.c_str());
	printf ("%s,%s\n",pw2a.c_str(),pw2b.c_str());
	printf ("%s,%s\n",pw3a.c_str(),pw3b.c_str());
	printf ("%s,%s\n",pw4a.c_str(),pw4b.c_str());
	printf ("%s,%s\n",pw5a.c_str(),pw5b.c_str());
	printf ("%s,%s\n",pw6a.c_str(),pw6b.c_str());
	printf ("%s,%s\n",pw7a.c_str(),pw7b.c_str());
	printf ("%s,%s\n",pw8a.c_str(),pw8b.c_str());
	printf ("%s,%s\n",pw9a.c_str(),pw9b.c_str());
	printf ("%s,%s\n",pw10a.c_str(),pw10b.c_str());
	printf ("%s,%s\n",pw11a.c_str(),pw11b.c_str());
	printf ("%s,%s\n",pw12a.c_str(),pw12b.c_str());
	printf ("%s,%s\n",pw13a.c_str(),pw13b.c_str());
	printf ("%s,%s\n",pw14a.c_str(),pw14b.c_str());
	printf ("%s,%s\n",pw15a.c_str(),pw15b.c_str());
}
void DefaultKey(){
	pw0a=pw0b=pw1a=pw1b=pw2a=pw2b=pw3a=pw3b=pw4a=pw4b=pw5a=pw5b=pw6a=pw6b=pw7a=pw7b=pw8a=pw8b=pw9a=pw9b=pw10a=pw10b=pw11a=pw11b=pw12a=pw12b=pw13a=pw13b=pw14a=pw14b=pw15a=pw15b="ffffffffffff";
	printf ("\n%s,%s\n",pw0a.c_str(),pw0b.c_str());
	printf ("%s,%s\n",pw1a.c_str(),pw1b.c_str());
	printf ("%s,%s\n",pw2a.c_str(),pw2b.c_str());
	printf ("%s,%s\n",pw3a.c_str(),pw3b.c_str());
	printf ("%s,%s\n",pw4a.c_str(),pw4b.c_str());
	printf ("%s,%s\n",pw5a.c_str(),pw5b.c_str());
	printf ("%s,%s\n",pw6a.c_str(),pw6b.c_str());
	printf ("%s,%s\n",pw7a.c_str(),pw7b.c_str());
	printf ("%s,%s\n",pw8a.c_str(),pw8b.c_str());
	printf ("%s,%s\n",pw9a.c_str(),pw9b.c_str());
	printf ("%s,%s\n",pw10a.c_str(),pw10b.c_str());
	printf ("%s,%s\n",pw11a.c_str(),pw11b.c_str());
	printf ("%s,%s\n",pw12a.c_str(),pw12b.c_str());
	printf ("%s,%s\n",pw13a.c_str(),pw13b.c_str());
	printf ("%s,%s\n",pw14a.c_str(),pw14b.c_str());
	printf ("%s,%s\n",pw15a.c_str(),pw15b.c_str());
}
void WriteUseA(){
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --force --blk 0 -d %s -k %s\"",com,bl0.c_str(),pw0a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 1 -d %s -k %s\"",com,bl1.c_str(),pw0a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 2 -d %s -k %s\"",com,bl2.c_str(),pw0a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 3 -d %s -k %s\"",com,bl3.c_str(),pw0a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 4 -d %s -k %s\"",com,bl4.c_str(),pw1a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 5 -d %s -k %s\"",com,bl5.c_str(),pw1a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 6 -d %s -k %s\"",com,bl6.c_str(),pw1a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 7 -d %s -k %s\"",com,bl7.c_str(),pw1a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 8 -d %s -k %s\"",com,bl8.c_str(),pw2a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 9 -d %s -k %s\"",com,bl9.c_str(),pw2a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 10 -d %s -k %s\"",com,bl10.c_str(),pw2a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 11 -d %s -k %s\"",com,bl11.c_str(),pw2a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 12 -d %s -k %s\"",com,bl12.c_str(),pw3a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 13 -d %s -k %s\"",com,bl13.c_str(),pw3a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 14 -d %s -k %s\"",com,bl14.c_str(),pw3a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 15 -d %s -k %s\"",com,bl15.c_str(),pw3a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 16 -d %s -k %s\"",com,bl16.c_str(),pw4a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 17 -d %s -k %s\"",com,bl17.c_str(),pw4a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 18 -d %s -k %s\"",com,bl18.c_str(),pw4a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 19 -d %s -k %s\"",com,bl19.c_str(),pw4a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 20 -d %s -k %s\"",com,bl20.c_str(),pw5a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 21 -d %s -k %s\"",com,bl21.c_str(),pw5a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 22 -d %s -k %s\"",com,bl22.c_str(),pw5a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 23 -d %s -k %s\"",com,bl23.c_str(),pw5a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 24 -d %s -k %s\"",com,bl24.c_str(),pw6a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 25 -d %s -k %s\"",com,bl25.c_str(),pw6a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 26 -d %s -k %s\"",com,bl26.c_str(),pw6a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 27 -d %s -k %s\"",com,bl27.c_str(),pw6a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 28 -d %s -k %s\"",com,bl28.c_str(),pw7a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 29 -d %s -k %s\"",com,bl29.c_str(),pw7a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 30 -d %s -k %s\"",com,bl30.c_str(),pw7a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 31 -d %s -k %s\"",com,bl31.c_str(),pw7a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 32 -d %s -k %s\"",com,bl32.c_str(),pw8a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 33 -d %s -k %s\"",com,bl33.c_str(),pw8a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 34 -d %s -k %s\"",com,bl34.c_str(),pw8a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 35 -d %s -k %s\"",com,bl35.c_str(),pw8a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 36 -d %s -k %s\"",com,bl36.c_str(),pw9a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 37 -d %s -k %s\"",com,bl37.c_str(),pw9a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 38 -d %s -k %s\"",com,bl38.c_str(),pw9a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 39 -d %s -k %s\"",com,bl39.c_str(),pw9a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 40 -d %s -k %s\"",com,bl40.c_str(),pw10a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 41 -d %s -k %s\"",com,bl41.c_str(),pw10a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 42 -d %s -k %s\"",com,bl42.c_str(),pw10a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 43 -d %s -k %s\"",com,bl43.c_str(),pw10a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 44 -d %s -k %s\"",com,bl44.c_str(),pw11a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 45 -d %s -k %s\"",com,bl45.c_str(),pw11a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 46 -d %s -k %s\"",com,bl46.c_str(),pw11a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 47 -d %s -k %s\"",com,bl47.c_str(),pw11a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 48 -d %s -k %s\"",com,bl48.c_str(),pw12a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 49 -d %s -k %s\"",com,bl49.c_str(),pw12a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 50 -d %s -k %s\"",com,bl50.c_str(),pw12a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 51 -d %s -k %s\"",com,bl51.c_str(),pw12a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 52 -d %s -k %s\"",com,bl52.c_str(),pw13a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 53 -d %s -k %s\"",com,bl53.c_str(),pw13a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 54 -d %s -k %s\"",com,bl54.c_str(),pw13a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 55 -d %s -k %s\"",com,bl55.c_str(),pw13a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 56 -d %s -k %s\"",com,bl56.c_str(),pw14a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 57 -d %s -k %s\"",com,bl57.c_str(),pw14a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 58 -d %s -k %s\"",com,bl58.c_str(),pw14a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 59 -d %s -k %s\"",com,bl59.c_str(),pw14a.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 60 -d %s -k %s\"",com,bl60.c_str(),pw15a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 61 -d %s -k %s\"",com,bl61.c_str(),pw15a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 62 -d %s -k %s\"",com,bl62.c_str(),pw15a.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl --blk 63 -d %s -k %s\"",com,bl63.c_str(),pw15a.c_str());
	system(comm);
}
void WriteUseB(){
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --force --blk 0 -d %s -k %s\"",com,bl0.c_str(),pw0b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 1 -d %s -k %s\"",com,bl1.c_str(),pw0b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 2 -d %s -k %s\"",com,bl2.c_str(),pw0b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 3 -d %s -k %s\"",com,bl3.c_str(),pw0b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 4 -d %s -k %s\"",com,bl4.c_str(),pw1b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 5 -d %s -k %s\"",com,bl5.c_str(),pw1b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 6 -d %s -k %s\"",com,bl6.c_str(),pw1b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 7 -d %s -k %s\"",com,bl7.c_str(),pw1b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 8 -d %s -k %s\"",com,bl8.c_str(),pw2b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 9 -d %s -k %s\"",com,bl9.c_str(),pw2b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 10 -d %s -k %s\"",com,bl10.c_str(),pw2b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 11 -d %s -k %s\"",com,bl11.c_str(),pw2b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 12 -d %s -k %s\"",com,bl12.c_str(),pw3b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 13 -d %s -k %s\"",com,bl13.c_str(),pw3b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 14 -d %s -k %s\"",com,bl14.c_str(),pw3b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 15 -d %s -k %s\"",com,bl15.c_str(),pw3b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 16 -d %s -k %s\"",com,bl16.c_str(),pw4b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 17 -d %s -k %s\"",com,bl17.c_str(),pw4b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 18 -d %s -k %s\"",com,bl18.c_str(),pw4b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 19 -d %s -k %s\"",com,bl19.c_str(),pw4b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 20 -d %s -k %s\"",com,bl20.c_str(),pw5b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 21 -d %s -k %s\"",com,bl21.c_str(),pw5b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 22 -d %s -k %s\"",com,bl22.c_str(),pw5b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 23 -d %s -k %s\"",com,bl23.c_str(),pw5b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 24 -d %s -k %s\"",com,bl24.c_str(),pw6b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 25 -d %s -k %s\"",com,bl25.c_str(),pw6b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 26 -d %s -k %s\"",com,bl26.c_str(),pw6b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 27 -d %s -k %s\"",com,bl27.c_str(),pw6b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 28 -d %s -k %s\"",com,bl28.c_str(),pw7b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 29 -d %s -k %s\"",com,bl29.c_str(),pw7b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 30 -d %s -k %s\"",com,bl30.c_str(),pw7b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 31 -d %s -k %s\"",com,bl31.c_str(),pw7b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 32 -d %s -k %s\"",com,bl32.c_str(),pw8b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 33 -d %s -k %s\"",com,bl33.c_str(),pw8b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 34 -d %s -k %s\"",com,bl34.c_str(),pw8b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 35 -d %s -k %s\"",com,bl35.c_str(),pw8b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 36 -d %s -k %s\"",com,bl36.c_str(),pw9b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 37 -d %s -k %s\"",com,bl37.c_str(),pw9b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 38 -d %s -k %s\"",com,bl38.c_str(),pw9b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 39 -d %s -k %s\"",com,bl39.c_str(),pw9b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 40 -d %s -k %s\"",com,bl40.c_str(),pw10b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 41 -d %s -k %s\"",com,bl41.c_str(),pw10b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 42 -d %s -k %s\"",com,bl42.c_str(),pw10b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 43 -d %s -k %s\"",com,bl43.c_str(),pw10b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 44 -d %s -k %s\"",com,bl44.c_str(),pw11b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 45 -d %s -k %s\"",com,bl45.c_str(),pw11b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 46 -d %s -k %s\"",com,bl46.c_str(),pw11b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 47 -d %s -k %s\"",com,bl47.c_str(),pw11b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 48 -d %s -k %s\"",com,bl48.c_str(),pw12b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 49 -d %s -k %s\"",com,bl49.c_str(),pw12b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 50 -d %s -k %s\"",com,bl50.c_str(),pw12b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 51 -d %s -k %s\"",com,bl51.c_str(),pw12b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 52 -d %s -k %s\"",com,bl52.c_str(),pw13b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 53 -d %s -k %s\"",com,bl53.c_str(),pw13b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 54 -d %s -k %s\"",com,bl54.c_str(),pw13b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 55 -d %s -k %s\"",com,bl55.c_str(),pw13b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 56 -d %s -k %s\"",com,bl56.c_str(),pw14b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 57 -d %s -k %s\"",com,bl57.c_str(),pw14b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 58 -d %s -k %s\"",com,bl58.c_str(),pw14b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 59 -d %s -k %s\"",com,bl59.c_str(),pw14b.c_str());
	system(comm);

	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 60 -d %s -k %s\"",com,bl60.c_str(),pw15b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 61 -d %s -k %s\"",com,bl61.c_str(),pw15b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 62 -d %s -k %s\"",com,bl62.c_str(),pw15b.c_str());
	system(comm);
	snprintf(comm,100,"proxmark3 %s -c \"hf mf wrbl -b --blk 63 -d %s -k %s\"",com,bl63.c_str(),pw15b.c_str());
	system(comm);
}
char gn[1000];
int main(int argc, char** argv) {
	if(argc==1){
		printf("x3-pm3writer.exe PortName FileName PasswordFile [A/B]\n");
		printf("x  v1.0\n");
		printf("目前仅支持1k卡,其他容量将在后续版本支持\n");
		printf("邮箱:admin@n103.top\n");
		printf("官网:www.n103.top\n");
		printf("                          by:  xbebhxx3\n\n");
		printf(" PortName\tproxmark3(pm3)端口\n");
		
		printf(" FileName\t数据文件\n");
		printf(" FileName\t包含密码的文件,为d则使用默认密码,为f则使用数据文件中的密码\n");
		printf(" [A/B]\t(可选)使用Key A或Key B\n");
	}
	else {
		com=argv[1];
		ReadDump(argv[2]);
		if(lstrcmp(argv[3],"d")==0||lstrcmp(argv[3],"D")==0){
			DefaultKey();
		}
		else if(lstrcmp(argv[3],"f")==0||lstrcmp(argv[3],"F")==0){
			DumpKey();
		}
		else{
			ReadDump(argv[3]);
			DumpKey();
			ReadDump(argv[2]);
		}
		if(argc==5){
			if(lstrcmp(argv[4],"a")==0||lstrcmp(argv[4],"A")==0){
				UseKey=0;
			}
			else if(lstrcmp(argv[4],"b")==0||lstrcmp(argv[4],"b")==0){
				UseKey=1;
			}
			else {	
				printf("输入错误,默认使用Key A");
				UseKey=0;
			}
		}
		else{
			UseKey=0;
		}
		if(UseKey==0)WriteUseA();
		else WriteUseB();
	}
	return 0;
}


