#include<simplecpp>
int nbt,nft,net,na,nc,bbbb=0,eb=0,fb=0;
int nb=15,nf=42,ne=132;
void output(int src,int dest,int hrs, int minss, int d[12][12])
{
    Text deptr(288.5,525,":");
    Text deptr1(275,525,hrs);
    Text deptr2(302,525,minss);
    Text minsss(390,525,"mins");
    Text ddr(360,525,d[src][dest]*20/101);
    Text price(450,525,(d[src][dest])*5.67);
    Text distance(170,435,d[src][dest]);
    if(bbbb==1)
    {
        if(na+nc<=nb)
        {
            cout<<bbbb;
            Text E1(260,605,"No. of seats(Business class) are    . You can book your flight ticket");
            Text brem(265,605,nb);
            wait(1);
            Rectangle book(260,630,80,30);
            Text bookt(260,630,"BOOK");
            int bookc=getClick();
            int bx1 = bookc/65536,by1=bookc%65536;
            if(bx1>220&&bx1<300&&by1>615&&by1<645)
            {
                Rectangle ff(260,615,450,60);
                ff.setColor(COLOR(0,0,0));
                ff.setFill(true);
                Text f(260,615,"YOUR TICKET IS BOOKED.THANKS FOR USING THE SERVICE");
                wait(2);
            }
            nb = nb-na-nc;
        }
        else
        {
            Text E2(200,605,"Sorry. No. of seats available are   .");
            Text brem1(300,605,nb);
            wait(4);
        }
    }
    if(fb==1)
    {
        if(na+nc<=nf)
        {
            Text E3(260,605,"No. of seats(First class) are      . You can book your flight tickets");
            Text frem(245,605,nf);
            wait(1);
            Rectangle book(260,630,80,30);
            Text bookt(260,630,"BOOK");
            int bookc=getClick();
            int bx1 = bookc/65536,by1=bookc%65536;
            if(bx1>220&&bx1<300&&by1>615&&by1<645)
            {
                Rectangle fg(260,615,450,60);
                fg.setColor(COLOR(0,0,0));
                fg.setFill(true);
                Text f(260,615,"YOUR TICKET IS BOOKED.THANKS FOR USING THE SERVICE");
                wait(2);
            }
            nf = nf-na-nc;
        }
        else
        {
            Text E4(200,605,"Sorry. No. of seats(First class) available are 31.");
            Text frem1(300,605,nf);
            wait(4);
        }
    }
    if(eb==1)
    {
        if(na+nc<=ne)
        {
            Text E5(260,605,"No. of seats(Economic class) are       . You can book your flight tickets");
            Text erem(265,605,ne);
            wait(1);
            Rectangle book(260,630,80,30);
            Text bookt(260,630,"BOOK");
            int bookc=getClick();
            int bx1 = bookc/65536,by1=bookc%65536;
            if(bx1>220&&bx1<300&&by1>615&&by1<645)
            {
                Rectangle fh(260,615,450,60);
                fh.setColor(COLOR(0,0,0));
                fh.setFill(true);
                Text f(260,615,"YOUR TICKET IS BOOKED.THANKS FOR USING THE SERVICE");
                wait(2);
            }
            ne = ne - na-nc;
        }
        else
        {
            Text E6(200,605,"Sorry. No. of seats(Economic class) available are    .");
            Text erem1(300,605,ne);
            wait(4);
        }
    }
    int secs=60;
    Text session(250,580,"Book your next ticket in");
    Text session3(255,595,"seconds");
    for(int secs=15; secs>=0; secs--)
    {
        Text session2(215,595,secs);
        wait(1);
    }
}
struct ddd
{
    int dd,mm;
    bool isvalid(int dd,int mm)
    {
        bool valid=false;
        if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
        {
            if(dd>0&&dd<32)
            {
                valid=true;
            }
        }
        if(mm==4||mm==6||mm==9||mm==11)
        {
            if(dd>0&&dd<31)
            {
                valid=true;
            }
        }
        if(mm==2)
        {
            if(dd>0&&dd<28)
            {
                valid=true;
            }
        }
        return valid;
    }
};
main_program
{
    int d[12][12];
    int src,dest,tensdd,unitsdd,unitsmm,tensmm,aageones,aagetens,cagetens,cageones;
    d[1][2]=1667.71;
    d[1][3]=2399.23;
    d[1][4]=182.57;
    d[1][5]=642.86;
    d[1][6]=1841;
    d[1][7]=994;
    d[1][8]=1837.31;
    d[1][9]=2331.33;
    d[1][10]=1257.1;
    d[1][11]=1580.13;
    d[1][12]=1899.37;
    d[2][3]=1034.14;
    d[2][4]=912.13;
    d[2][5]=1137.24;
    d[2][6]=1665.73;
    d[2][7]=1196;
    d[2][8]=2071.71;
    d[2][9]=834.63;
    d[2][10]=505.97;
    d[2][11]=954.99;
    d[2][12]=623.54;
    d[3][4]=1605.41;
    d[3][5]=1761.53;
    d[3][6]=1387.26;
    d[3][7]=1534.64;
    d[3][8]=1885.58;
    d[3][9]=267.39;
    d[3][10]=1177.55;
    d[3][11]=927.24;
    d[3][12]=507.74;
    d[4][5]=229.75;
    d[4][6]=156.15;
    d[4][7]=502.87;
    d[4][8]=1570.99;
    d[4][9]=1528.82;
    d[4][10]=456.8;
    d[4][11]=869.38;
    d[4][12]=1101.09;
    d[5][6]=1312.96;
    d[5][7]=4423.41;
    d[5][8]=1456.73;
    d[5][9]=1709.79;
    d[5][10]=662.01;
    d[5][11]=944.7;
    d[5][12]=1267.53;
    d[6][7]=889.54;
    d[6][8]=498.44;
    d[6][9]=1547.27;
    d[6][10]=1296.99;
    d[6][11]=711;
    d[6][12]=1207.73;
    d[7][8]=1068.13;
    d[7][9]=1544.64;
    d[7][10]=682.19;
    d[7][11]=626.79;
    d[7][12]=1089.92;
    d[8][9]=2040.03;
    d[8][10]=1641.29;
    d[8][11]=1142.6;
    d[8][12]=1678.38;
    d[9][10]=1078.29;
    d[9][11]=985.73;
    d[9][12]=455.14;
    d[10][11]=636;
    d[10][12]=669.95;
    d[11][12]=560.09;
    float lsrx[13],lsry[13];
    lsrx[1]=660;
    lsrx[2]=585;
    lsrx[3]=715;
    lsrx[4]=625;
    lsrx[5]=670;
    lsrx[6]=825;
    lsrx[7]=735;
    lsrx[8]=870;
    lsrx[9]=665;
    lsrx[10]=640;
    lsrx[11]=740;
    lsrx[12]=670;
    lsry[1]=225;
    lsry[2]=480;
    lsry[3]=590;
    lsry[4]=330;
    lsry[5]=270;
    lsry[6]=410;
    lsry[7]=340;
    lsry[8]=330;
    lsry[9]=580;
    lsry[10]=405;
    lsry[11]=415;
    lsry[12]=500;
    initCanvas("INFOFLIGHT",1000,700);
    Rectangle border(500,350,950,650);
    border.setColor(COLOR(51,255,255),true);
    border.setFill(true);
    Rectangle border1(500,350,950,650);
    Line a1(670,175,630,155);
    Line a2(630,155,600,175);
    Line a3(600,175,625,190);
    Line a4(625,190,615,200);
    Line a5(615,200,614,230);
    Line a6(614,230,630,245);
    Line a7(630,245,614,260);
    Line a8(614,260,612,275);
    Line a9(612,275,587,310);
    Line b1(587,310,562,335);
    Line b2(562,335,555,330);
    Line b3(555,330,545,345);
    Line b4(545,345,550,348);
    Line b5(550,348,553,375);
    Line b6(553,375,515,375);
    Line b7(515,375,510,385);
    Line b8(510,385,515,395);
    Line b9(515,395,540,405);
    Line c1(540,405,538,415);
    Line c2(538,415,527,417);
    Line c3(527,417,545,445);
    Line c4(545,445,570,442);
    Line c5(570,442,577,427);
    Line c6(577,427,582,472);
    Line c7(582,472,580,475);
    Line c8(580,475,600,540);
    Line c9(600,540,615,555);
    Line d1(615,555,630,590);
    Line d2(630,590,640,605);
    Line d3(640,605,665,640);
    Line d4(665,640,685,650);
    Line d5(685,650,707,620);
    Line d6(707,620,715,615);
    Line d7(717,615,712,612);
    Line d8(712,612,718,607);
    Line d9(718,607,713,600);
    Line e1(713,600,720,597);
    Line e2(720,597,717,580);
    Line e3(717,580,725,560);
    Line e4(725,560,717,540);
    Line e5(717,540,717,530);
    Line e6(717,530,752,485);
    Line e7(752,485,767,482);
    Line e8(767,482,787,447);
    Line e9(787,447,837,425);
    Line f1(837,425,835,390);
    Line f2(835,390,830,382);
    Line f3(830,382,830,372);
    Line f4(830,372,835,360);
    Line f5(835,360,828,352);
    Line f6(828,352,828,340);
    Line f7(828,340,840,330);
    Line f8(840,330,850,340);
    Line f9(850,340,850,350);
    Line g1(850,350,895,350);
    Line g2(895,350,895,365);
    Line g3(895,365,885,375);
    Line g4(885,375,885,390);
    Line g5(885,390,895,390);
    Line g6(895,390,905,380);
    Line g7(905,380,915,405);
    Line g8(915,405,920,405);
    Line g9(920,405,925,380);
    Line h1(925,380,935,380);
    Line h2(935,380,935,365);
    Line h3(935,365,945,355);
    Line h4(945,355,945,340);
    Line h5(945,340,960,325);
    Line h6(960,325,940,285);
    Line h7(940,285,885,300);
    Line h8(885,300,885,310);
    Line h9(885,310,850,310);
    Line i1(850,310,850,295);
    Line i2(850,295,835,295);
    Line i3(835,295,835,310);
    Line i4(835,310,775,305);
    Line i5(775,305,720,295);
    Line i6(720,295,735,270);
    Line i7(735,270,705,260);
    Line i8(705,260,700,240);
    Line i9(700,240,705,245);
    Line j1(705,245,715,235);
    Line j2(715,235,700,215);
    Line j3(700,215,705,212);
    Line j4(705,212,710,195);
    Line j5(710,195,710,185);
    Line j6(710,185,695,170);
    Line j7(695,170,690,165);
    Line j8(690,165,670,175);
    Line l1(25,80,975,80);
    Line l2(500,80,500,675);
    Text t1(500,40,"INFOFLIGHT");
    Text srctxt(175,100,"SOURCE");
    Text desttxt(325,100,"DESTINATION");
    Text ch1(175,130,"click here");
    Text ch2(325,130,"click here");
    Rectangle srcrect(175,130,100,40);
    Rectangle destrect(325,130,100,40);
    Text date(250,170,"DATE");
    Text ddtext(175,195,"DD");
    Text mmtext(325,195,"MM");
    Rectangle ddrect(175,215,40,25);
    Rectangle mmrect(325,215,40,25);
    Text age(250,250,"NUMBER OF - ");
    Text adults(175,280,"ADULTS(12+ yrs)");
    Text infants(325,280,"CHILDREN(2-12 yrs)");
    Rectangle infantage(325,300,40,25);
    Rectangle adultage(175,300,40,25);
    Rectangle result(250,400,100,25);
    Text resulttxt(250,400,"SEARCH");
    Rectangle busi(150,360,40,25);
    Text busit(150,340,"BUSINESS");
    Rectangle first(250,360,40,25);
    Text firstt(250,340,"FIRST CLASS");
    Rectangle econ(350,360,40,25);
    Text econt(350,340,"ECONOMIC");
    Text srinagartxt(660,205,"SRINAGAR");
    Circle srinagarcircle(660,225,10);
    srinagarcircle.setColor(COLOR(0,225,0));
    srinagarcircle.setFill(true);
    Text mumbaitxt(585,460,"MUMBAI");
    Circle mumbaicircle(585,480,10);
    mumbaicircle.setColor(COLOR(225,0,0));
    mumbaicircle.setFill(true);
    Text chemmaitxt(715,570,"CHENNAI");
    Circle chemmaicircle(715,590,10);
    chemmaicircle.setColor(COLOR(0,0,225));
    chemmaicircle.setFill(true);
    Text jaiurtxt(625,310,"JAIPUR");
    Circle jaipurcircle(625,330,10);
    jaipurcircle.setColor(COLOR(225,128,0));
    jaipurcircle.setFill(true);
    Text delhitxt(670,250,"DELHI");
    Circle delhiicircle(670,270,10);
    delhiicircle.setColor(COLOR(255,255,0));
    delhiicircle.setFill(true);
    Text kolkkatatxt(825,390,"KOLKATA");
    Circle kolkatacircle(825,410,10);
    kolkatacircle.setColor(COLOR(225,0,225));
    kolkatacircle.setFill(true);
    Text lucknowxt(735,320,"LUCKNOW");
    Circle lucknowcircle(735,340,10);
    lucknowcircle.setColor(COLOR(0,225,128));
    lucknowcircle.setFill(true);
    Text guwahatitxt(870,310,"GUWAHATI");
    Circle guwahaticircle(870,330,10);
    guwahaticircle.setColor(COLOR(153,76,0));
    guwahaticircle.setFill(true);
    Circle bangalorecircle(665,580,10);
    bangalorecircle.setColor(COLOR(0,0,0));
    bangalorecircle.setFill(true);
    Text bangaloretxt(665,560,"BANGALORE");
    Circle indorecircle(640,405,10);
    indorecircle.setColor(COLOR(0,0,102));
    indorecircle.setFill(true);
    Text indoretxt(640,385,"INDORE");
    Circle raipurcircle(740,415,10);
    raipurcircle.setColor(COLOR(0,102,0));
    raipurcircle.setFill(true);
    Text raipurtxt(740,405,"RAIPUR");
    Circle hydcircle(670,500,10);
    hydcircle.setColor(COLOR(160,160,160));
    hydcircle.setFill(true);
    Text hydtxt(670,480,"HYDERABAD");
    Rectangle num1(845,540,25,25);
    Text numt1(845,540,"1");
    Rectangle num2(875,540,25,25);
    Text numt2(875,540,"2");
    Rectangle num3(905,540,25,25);
    Text numt3(905,540,"3");
    Rectangle num4(845,570,25,25);
    Text numt4(845,570,"4");
    Rectangle num5(875,570,25,25);
    Text numt5(875,570,"5");
    Rectangle num6(905,570,25,25);
    Text numt6(905,570,"6");
    Rectangle num7(845,600,25,25);
    Text numt7(845,600,"7");
    Rectangle num8(875,600,25,25);
    Text numt8(875,600,"8");
    Rectangle num9(905,600,25,25);
    Text numt9(905,600,"9");
    Rectangle num0(875,630,25,25);
    Text numt0(875,630,"0");
    int ddval=00;
    int mmval=0;
    na=00;
    nc=0;
    //nbt=0;
    //nft=0;
    //net=0;
    int minss,hrs;
    while(true)
    {

        Text ddvalue(175,215,ddval);
        Text mmvalue(325,215,mmval);
        Text aagevalue(175,300,na);
        Text cagevalue(325,300,nc);
        while(true)
        {
            int c1=getClick();
            int x1=c1/65536,y1=c1%65536;
            if(x1>125&&x1<225&&y1>110&&y1<150)
            {

                Text m1(750,125,"Please select the source on the map");
                int c2=getClick();
                int x2 = c2/65536,y2=c2%65536;
                if(sqrt((x2-660)*(x2-660)+(y2-225)*(y2-225))<10)
                {
                    srcrect.setColor(COLOR(0,255,0),true);
                    srcrect.setFill(true);
                    srcrect.imprint();
                    Text ch1(175,130,"SRINAGAR");
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 1;
                        break;
                    }

                }

                if(sqrt(((x2-585)*(x2-585))+((y2-480)*(y2-480)))<=10)
                {
                    srcrect.setColor(COLOR(255,0,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"MUMBAI");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 2;
                        break;
                    }
                }
                if(sqrt(((x2-715)*(x2-715))+((y2-590)*(y2-590)))<=10)
                {
                    srcrect.setColor(COLOR(0,0,255));
                    srcrect.setFill(1);
                    Text sri2(175,130,"CHENNAI");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 3;
                        break;
                    }
                }
                if(sqrt(((x2-625)*(x2-625))+((y2-330)*(y2-330)))<=10)
                {
                    srcrect.setColor(COLOR(255,128,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"JAIPUR");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 4;
                        break;
                    }
                }
                if(sqrt(((x2-670)*(x2-670))+((y2-270)*(y2-270)))<=10)
                {
                    srcrect.setColor(COLOR(255,255,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"DELHI");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 5;
                        break;
                    }
                }
                if(sqrt(((x2-825)*(x2-825))+((y2-410)*(y2-410)))<=10)
                {
                    srcrect.setColor(COLOR(255,255,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"KOLKATA");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 6;
                        break;
                    }
                }
                if(sqrt(((x2-735)*(x2-735))+((y2-340)*(y2-340)))<=10)
                {
                    srcrect.setColor(COLOR(0,255,128),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"LUCKNOW");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 7;
                        break;
                    }
                }
                if(sqrt(((x2-870)*(x2-870))+((y2-330)*(y2-330)))<=10)
                {
                    srcrect.setColor(COLOR(153,76,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"GUWAHATI");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 8;
                        break;
                    }
                }
                if(sqrt(((x2-665)*(x2-665))+((y2-580)*(y2-580)))<=10)
                {
                    srcrect.setColor(COLOR(0,0,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"BANGALORE");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 9;
                        break;
                    }
                }
                if(sqrt(((x2-640)*(x2-640))+((y2-405)*(y2-405)))<=10)
                {
                    srcrect.setColor(COLOR(0,0,102),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"INDORE");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 10;
                        break;
                    }
                }
                if(sqrt(((x2-740)*(x2-740))+((y2-415)*(y2-415)))<=10)
                {
                    srcrect.setColor(COLOR(0,102,0),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"RAIPUR");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 11;
                        break;
                    }
                }
                if(sqrt(((x2-670)*(x2-670))+((y2-500)*(y2-500)))<=10)
                {
                    srcrect.setColor(COLOR(160,160,160),true);
                    srcrect.setFill(true);
                    Text sri2(175,130,"HYDERABAD");
                    srcrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Source?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        src = 12;
                        break;
                    }
                }
                else
                {
                    Text srcwrong(750,125,"Please click on a correct source location");
                    wait(1);
                    break;
                }

            }
            else if(x1>275&&x1<375&&y1>110&&y1<150)
            {
                Text m2(750,125,"Please select the destination on the map");
                int c2=getClick();
                int x2 = c2/65536,y2=c2%65536;
                if(sqrt((x2-660)*(x2-660)+(y2-225)*(y2-225))<10)
                {
                    destrect.setColor(COLOR(0,255,0),true);
                    destrect.setFill(true);
                    Text ch1(325,130,"SRINAGAR");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 1;
                        break;
                    }
                }
                if(sqrt(((x2-585)*(x2-585))+((y2-480)*(y2-480)))<=10)
                {
                    destrect.setColor(COLOR(255,0,0),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"MUMBAI");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 2;
                        break;
                    }
                }
                if(sqrt(((x2-715)*(x2-715))+((y2-590)*(y2-590)))<=10)
                {
                    destrect.setColor(COLOR(0,0,255),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"CHENNAI");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 3;
                        break;
                    }
                }
                if(sqrt(((x2-625)*(x2-625))+((y2-330)*(y2-330)))<=10)
                {
                    destrect.setColor(COLOR(255,128,0),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"JAIPUR");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 4;
                        break;
                    }
                }
                if(sqrt(((x2-670)*(x2-670))+((y2-270)*(y2-270)))<=10)
                {
                    destrect.setColor(COLOR(255,255,0),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"DELHI");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 5;
                        break;
                    }
                }
                if(sqrt(((x2-825)*(x2-825))+((y2-410)*(y2-410)))<=10)
                {
                    destrect.setColor(COLOR(255,0,255),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"KOLKATA");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 6;
                        break;
                    }
                }
                if(sqrt(((x2-735)*(x2-735))+((y2-340)*(y2-340)))<=10)
                {
                    destrect.setColor(COLOR(0,255,128),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"LUCKNOW");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 7;
                        break;
                    }
                }
                if(sqrt(((x2-870)*(x2-870))+((y2-330)*(y2-330)))<=10)
                {
                    destrect.setColor(COLOR(153,76,0),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"GUWAHATI");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 8;
                        break;
                    }
                }
                if(sqrt(((x2-665)*(x2-665))+((y2-580)*(y2-580)))<=10)
                {
                    destrect.setColor(COLOR(0,0,0),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"BANGALORE");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 9;
                        break;
                    }
                }
                if(sqrt(((x2-640)*(x2-640))+((y2-405)*(y2-405)))<=10)
                {
                    destrect.setColor(COLOR(0,0,102),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"INDORE");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 10;
                        break;
                    }
                }
                if(sqrt(((x2-740)*(x2-740))+((y2-415)*(y2-415)))<=10)
                {
                    destrect.setColor(COLOR(0,102,0),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"RAIPUR");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 11;
                        break;
                    }
                }
                if(sqrt(((x2-670)*(x2-670))+((y2-500)*(y2-500)))<=10)
                {
                    destrect.setColor(COLOR(160,160,160),true);
                    destrect.setFill(true);
                    Text sri2(325,130,"HYDERABAD");
                    destrect.imprint();
                    if(MessageBox(NULL,"Confirm Your Destination?","Confirmation",MB_YESNOCANCEL)==IDYES)
                    {
                        dest = 12;
                        break;
                    }
                }
                else
                {
                    Text destwrong(750,125,"Please click on a correct destination location");
                    wait(1);
                    break;
                }
            }
            else if(y1>287.5&&y1<312.5&&x1>305&&x1<345)
            {
                Text numinput1(195,570,"Please click to enter no. of tickets.");
                int childage;
                int cage = getClick();
                int cagex1=cage/65536, cagey1=cage%65536,ca;

                if(cagex1>832&&cagex1<858&&cagey1>527&&cagey1<553)
                {
                    ca=1;
                }
                else if(cagex1>862&&cagex1<888&&cagey1>527&&cagey1<553)
                {
                    ca=2;
                }
                else if(cagex1>892&&cagex1<918&&cagey1>527&&cagey1<553)
                {
                    ca=3;
                }
                else if(cagex1>832&&cagex1<858&&cagey1>557&&cagey1<583)
                {
                    ca=4;
                }
                else if(cagex1>862&&cagex1<888&&cagey1>557&&cagey1<583)
                {
                    ca=5;
                }
                else if(cagex1>892&&cagex1<918&&cagey1>557&&cagey1<583)
                {
                    ca=6;
                }
                else if(cagex1>832&&cagex1<858&&cagey1>587&&cagey1<613)
                {
                    ca=7;
                }
                else if(cagex1>862&&cagex1<888&&cagey1>587&&cagey1<613)
                {
                    ca=8;
                }
                else if(cagex1>892&&cagex1<918&&cagey1>587&&cagey1<613)
                {
                    ca=9;
                }
                else if(cagex1>862&&cagex1<888&&cagey1>617&&cagey1<643)
                {
                    ca=0;
                }
                else
                {
                    Text wrongnum(195,570,"Please click on a currect number.");
                }
                cagetens = ca;
                int cageones=getClick();
                int cagexx1=cageones/65536,cageyy1=cageones%65536,caa;
                if(cagexx1>832&&cagexx1<858&&cageyy1>527&&cageyy1<553)
                {
                    caa=1;
                }
                else if(cagexx1>862&&cagexx1<888&&cageyy1>527&&cageyy1<553)
                {
                    caa=2;
                }
                else if(cagexx1>892&&cagexx1<918&&cageyy1>527&&cageyy1<553)
                {
                    caa=3;
                }
                else if(cagexx1>832&&cagexx1<858&&cageyy1>557&&cageyy1<583)
                {
                    caa=4;
                }
                else if(cagexx1>862&&cagexx1<888&&cageyy1>557&&cageyy1<583)
                {
                    caa=5;
                }
                else if(cagexx1>892&&cagexx1<918&&cageyy1>557&&cageyy1<583)
                {
                    caa=6;
                }
                else if(cagexx1>832&&cagexx1<858&&cageyy1>587&&cageyy1<613)
                {
                    caa=7;
                }
                else if(cagexx1>862&&cagexx1<888&&cageyy1>587&&cageyy1<613)
                {
                    caa=8;
                }
                else if(cagexx1>892&&cagexx1<918&&cageyy1>587&&cageyy1<613)
                {
                    caa=9;
                }
                else if(cagexx1>862&&cagexx1<888&&cageyy1>617&&cageyy1<643)
                {
                    caa=0;
                }
                else
                {
                    Text wrongnum(195,570,"Please click on a currect number.");
                }

                cageones=caa;
                nc=cagetens*10+cageones;
                Text cagevalue(175,330,nc);
            }
            else if(x1>155&&x1<195&&y1>287.5&&y1<312.5)
            {
                {
                    Text numinput(195,570,"Please click to enter no. of tickets.");
                    int adultage;
                    int aage = getClick();
                    int aagex1=aage/65536, aagey1=aage%65536,aa;

                    if(aagex1>832&&aagex1<858&&aagey1>527&&aagey1<553)
                    {
                        aa=1;
                    }
                    else if(aagex1>862&&aagex1<888&&aagey1>527&&aagey1<553)
                    {
                        aa=2;
                    }
                    else if(aagex1>892&&aagex1<918&&aagey1>527&&aagey1<553)
                    {
                        aa=3;
                    }
                    else if(aagex1>832&&aagex1<858&&aagey1>557&&aagey1<583)
                    {
                        aa=4;
                    }
                    else if(aagex1>862&&aagex1<888&&aagey1>557&&aagey1<583)
                    {
                        aa=5;
                    }
                    else if(aagex1>892&&aagex1<918&&aagey1>557&&aagey1<583)
                    {
                        aa=6;
                    }
                    else if(aagex1>832&&aagex1<858&&aagey1>587&&aagey1<613)
                    {
                        aa=7;
                    }
                    else if(aagex1>862&&aagex1<888&&aagey1>587&&aagey1<613)
                    {
                        aa=8;
                    }
                    else if(aagex1>892&&aagex1<918&&aagey1>587&&aagey1<613)
                    {
                        aa=9;
                    }
                    else if(aagex1>862&&aagex1<888&&aagey1>617&&aagey1<643)
                    {
                        aa=0;
                    }
                    else
                    {
                        Text wrongnum(195,570,"Please click on a currect number.");
                    }
                    aagetens = aa;
                    int aageones=getClick();
                    int aagexx1=aageones/65536,aageyy1=aageones%65536,aaa;
                    if(aagexx1>832&&aagexx1<858&&aageyy1>527&&aageyy1<553)
                    {
                        aaa=1;
                    }
                    else if(aagexx1>862&&aagexx1<888&&aageyy1>527&&aageyy1<553)
                    {
                        aaa=2;
                    }
                    else if(aagexx1>892&&aagexx1<918&&aageyy1>527&&aageyy1<553)
                    {
                        aaa=3;
                    }
                    else if(aagexx1>832&&aagexx1<858&&aageyy1>557&&aageyy1<583)
                    {
                        aaa=4;
                    }
                    else if(aagexx1>862&&aagexx1<888&&aageyy1>557&&aageyy1<583)
                    {
                        aaa=5;
                    }
                    else if(aagexx1>892&&aagexx1<918&&aageyy1>557&&aageyy1<583)
                    {
                        aaa=6;
                    }
                    else if(aagexx1>832&&aagexx1<858&&aageyy1>587&&aageyy1<613)
                    {
                        aaa=7;
                    }
                    else if(aagexx1>862&&aagexx1<888&&aageyy1>587&&aageyy1<613)
                    {
                        aaa=8;
                    }
                    else if(aagexx1>892&&aagexx1<918&&aageyy1>587&&aageyy1<613)
                    {
                        aaa=9;
                    }
                    else if(aagexx1>862&&aagexx1<888&&aageyy1>617&&aageyy1<643)
                    {
                        aaa=0;
                    }
                    else
                    {
                        Text wrongnum(195,570,"Please click on a currect number.");
                    }

                    aageones=aaa;
                    na=aagetens*10+aageones;
                    Text aagevalue(175,330,na);
                }
            }
            else if (x1>130&&x1<170&&y1>347.5&&y1<372.5)
            {
                Text numinput2(195,570,"Please click to enter the class");
                if(fb!=1&&eb!=1)
                {
                    busi.setColor(COLOR(0,0,0));
                    busi.setFill(true);
                    bbbb = 1;
                }
            }
            else if(x1>230&&x1<270&&y1>347.5&&y1<372.5)
            {
                Text numinput2(195,570,"Please click to enter the class");
                if(bbbb!=1&&eb!=1)
                {
                    first.setColor(COLOR(0,0,0));
                    first.setFill(true);
                    fb = 1;
                }

            }
            else if(x1>330&&x1<370&&y1>347.5&&y1<372.5)
            {
                Text numinput2(195,570,"Please click to enter the class");
                if(bbbb!=1&&fb!=1)
                {
                    econ.setColor(COLOR(0,0,0));
                    econ.setFill(true);
                    eb=1;
                }

            }
            else if(x1>155&&x1<195&&y1<227.5&&y1>202.5)
            {
                Text numinput(195,570,"Please click to enter a date.");
                //num input
                int nm1=getClick();
                int x=nm1/65536,y=nm1%65536,n;
                if(x>832&&x<858&&y>527&&y<553)
                {
                    n=1;
                }
                else if(x>862&&x<888&&y>527&&y<553)
                {
                    n=2;
                }
                else if(x>892&&x<918&&y>527&&y<553)
                {
                    n=3;
                }
                else if(x>832&&x<858&&y>557&&y<583)
                {
                    n=4;
                }
                else if(x>862&&x<888&&y>557&&y<583)
                {
                    n=5;
                }
                else if(x>892&&x<918&&y>557&&y<583)
                {
                    n=6;
                }
                else if(x>832&&x<858&&y>587&&y<613)
                {
                    n=7;
                }
                else if(x>862&&x<888&&y>587&&y<613)
                {
                    n=8;
                }
                else if(x>892&&x<918&&y>587&&y<613)
                {
                    n=9;
                }
                else if(x>862&&x<888&&y>617&&y<643)
                {
                    n=0;
                }
                else
                {
                    Text wrongnum(195,570,"Please click on a currect number.");
                    wait(2);
                }
                tensdd=n;
                int nm2=getClick();
                int xx=nm2/65536,yy=nm2%65536,nn;
                if(xx>832&&xx<858&&yy>527&&yy<553)
                {
                    nn=1;
                }
                else if(xx>862&&xx<888&&yy>527&&yy<553)
                {
                    nn=2;
                }
                else if(xx>892&&xx<918&&yy>527&&yy<553)
                {
                    nn=3;
                }
                else if(xx>832&&xx<858&&yy>557&&yy<583)
                {
                    nn=4;
                }
                else if(xx>862&&xx<888&&yy>557&&yy<583)
                {
                    nn=5;
                }
                else if(xx>892&&xx<918&&yy>557&&yy<583)
                {
                    nn=6;
                }
                else if(xx>832&&xx<858&&yy>587&&yy<613)
                {
                    nn=7;
                }
                else if(xx>862&&xx<888&&yy>587&&yy<613)
                {
                    nn=8;
                }
                else if(xx>892&&xx<918&&yy>587&&yy<613)
                {
                    nn=9;
                }
                else if(xx>862&&xx<888&&yy>617&&yy<643)
                {
                    nn=0;
                }
                else
                {
                    Text wrongnum(195,570,"Please click on a currect number.");
                }
                unitsdd=nn;
                ddval=tensdd*10+unitsdd;
                Text ddvalue(175,245,ddval);
                //wait(3);
            }

            else if(x1>305&&x1<345&&y1>202.5&&y1<227.5)
            {
                Text numinput(195,570,"Please click to enter a month number in 2 digits.");
                //num input
                int nm3=getClick();
                int a=nm3/65536,b=nm3%65536,m;
                if(a>832&&a<858&&b>527&&b<553)
                {
                    m=1;
                }
                else if(a>862&&a<888&&b>527&&b<553)
                {
                    m=2;
                }
                else if(a>892&&a<918&&b>527&&b<553)
                {
                    m=3;
                }
                else if(a>832&&a<858&&b>557&&b<583)
                {
                    m=4;
                }
                else if(a>862&&a<888&&b>557&&b<583)
                {
                    m=5;
                }
                else if(a>892&&a<918&&b>557&&b<583)
                {
                    m=6;
                }
                else if(a>832&&a<858&&b>587&&b<613)
                {
                    m=7;
                }
                else if(a>862&&a<888&&b>587&&b<613)
                {
                    m=8;
                }
                else if(a>892&&a<918&&b>587&&b<613)
                {
                    m=9;
                }
                else if(a>862&&a<888&&b>617&&b<643)
                {
                    m=0;
                }
                else
                {
                    Text wrongnum(195,570,"Please click on a currect number.");
                }
                tensmm=m;
                int nm4=getClick();
                int aa=nm4/65536,bb=nm4%65536,mm;
                if(aa>832&&aa<858&&bb>527&&bb<553)
                {
                    mm=1;
                }
                else if(aa>862&&aa<888&&bb>527&&bb<553)
                {
                    mm=2;
                }
                else if(aa>892&&aa<918&&bb>527&&bb<553)
                {
                    mm=3;
                }
                else if(aa>832&&aa<858&&bb>557&&bb<583)
                {
                    mm=4;
                }
                else if(aa>862&&aa<888&&bb>557&&bb<583)
                {
                    mm=5;
                }
                else if(aa>892&&aa<918&&bb>557&&bb<583)
                {
                    mm=6;
                }
                else if(aa>832&&aa<858&&bb>587&&bb<613)
                {
                    mm=7;
                }
                else if(aa>862&&aa<888&&bb>587&&bb<613)
                {
                    mm=8;
                }
                else if(aa>892&&aa<918&&bb>587&&bb<613)
                {
                    mm=9;
                }
                else if(aa>862&&aa<888&&bb>617&&bb<643)
                {
                    mm=0;
                }
                else
                {
                    Text wrongnum(195,570,"Please click on a currect number.");
                }
                unitsmm=mm;
                mmval=tensmm*10+unitsmm;
                Text mmvalue(325,245,mmval);
            }
            else if(x1>200&&x1<300&&y1>387.5&&y1<412.5)
            {
                if(dest==src)
                {
                    Text srcisdest(250,550,"Please enter different source and destination");
                    wait(2);
                    break;
                }
                ddd date;
                date.dd=ddval;
                date.mm=mmval;
                bool validity=date.isvalid(ddval,mmval);
                if(validity==true)
                {
                    Text loading(85,435,"LOADING.....");
                    if(src%2==0)
                    {
                        minss=0;
                    }
                    else
                    {
                        minss=30;
                    }
                    if(src%4==1||src%4==2)
                    {
                        hrs=1+(2*dest);
                    }
                    else if(src%4==0)
                    {
                        hrs=2*dest;
                    }
                    else if(src%4==3)
                    {
                        hrs=2+(2*dest);
                    }
                    Line travel(lsrx[src],lsry[src],lsrx[dest],lsry[dest]);
                    Circle trvl(lsrx[src],lsry[src],5);
                    for(int i=0; i<100; i=i+1)
                    {
                        trvl.move((lsrx[dest]-lsrx[src])/100,(lsry[dest]-lsry[src])/100);
                    }
                    if(dest<src)
                    {
                        int temp;
                        temp=src;
                        src=dest;
                        dest=temp;
                    }
                    Text distout(85,435,"DISTANCE IS - ");
                    Text km(210,435,"kms");
                    Line div1(25,420,500,420);
                    Rectangle plane(265,505,450,70);
                    Line p1(40,510,490,510);
                    Text srno(67.5,490,"SR NO.");
                    Line lt1(95,470,95,540);
                    Text name(172.5,490,"PLANE NAME");
                    Line t2(250,470,250,540);
                    Text dt(288.5,490,"DEPT. TIME");
                    Line t3(335,470,335,540);
                    Text dr(372.5,490,"DURATION");
                    Line t4(415,470,415,540);
                    Text pri(447.5,490,"PRICE");
                    Text rs1(67.5,525,"1");
                    if(dest%6==0)
                    {
                        Text planer0(182.5,525,"KINGFISHER");
                        output(src,dest,hrs,minss,d);
                    }
                    if(dest%6==1)
                    {
                        Text planer1(182.5,525,"AIR INDIA");
                        output(src,dest,hrs,minss,d);
                    }
                    if(dest%6==2)
                    {
                        Text planer2(182.5,525,"INDIGO");
                        output(src,dest,hrs,minss,d);
                    }
                    if(dest%6==3)
                    {
                        Text planer3(182.5,525,"JET AIRWAYS");
                        output(src,dest,hrs,minss,d);
                    }
                    if(dest%6==4)
                    {
                        Text planer4(182.5,525,"INDIAN AIRLINES");
                        output(src,dest,hrs,minss,d);
                    }
                    if(dest%6==5)
                    {
                        Text planer5(182.5,525,"SPICE JET");
                        output(src,dest,hrs,minss,d);
                    }
                }
                else
                {
                    Text wrongdate(195,570,"Please enter an appropriate date");
                    wait(2);
                }
            }
            else
            {
                Text c1click(195,570,"Please click in an appropriate box");
                wait(1);
            }

            break;

        }
        wait(0);
    }
}