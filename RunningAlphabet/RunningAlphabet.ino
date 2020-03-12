int L1 =2;
int M1 =3;
int R1 =4;
int L2 =5;
int M2 =6;
int R2 =7;
int L3 =8;
int M3 =9;
int R3 =10;
int L4 =11;
int M4 =12;
int R4 =13;
int L5 =A0;
int M5 =A1;
int R5 =A2;

int tim=30;
/*int a [] = {L5,L4,L3,L2,M1,M3,R2,R3,R4,R5};
int b [] = {L1,L2,L3,L4,L5,M1,R2,M3,R4,M5};
int c [] = {L2,L3,L4,M1,R1,M5,R5};
int d [] = {L1,L2,L3,L4,L5,M1,R2,R3,R4,M5};
int e [] = {L1,L2,L3,L4,L5,M1,R1,M3,R3,M5,R5};
int f [] = {L1,L2,L3,L4,L5,M1,R1,M3,R3};
int g [] = {M1,R1,L2,L3,L4,R4,M5,M3,R3};
int h [] = {L1,L2,L3,L4,L5,R1,R2,R3,R4,R5,M3};
int i [] = {M1,M2,M3,M4,M5,R1,R5,L1,L5};
int j [] = {M1,M2,M3,M4,M5,L1,L4,L5,R1};
int k [] = {L1,L2,L3,L4,L5,M2,R1,M4,R5};
int l [] = {L1,L2,L3,L4,L5,M5,R5};
int m [] = {L1,L2,L3,L4,L5,M1,M2,R1,R2,R3,R4,R5};
int n [] = {L1,L2,L3,L4,M2,R1,R2,R3};
int o [] = {L2,L3,L4,R2,R3,R4,M1,M5};
int p [] = {L1,L2,L3,L4,L5,M1,R2,M3};
int q [] = {L2,L3,M1,M4,R2,R3,R5};
int r [] = {L1,L2,L3,L4,L5,M1,M3,M4,R2,R5};
int s [] = {R1,M1,L2,M3,R4,M5,L5};
int t [] = {L1,M1,R1,M2,M3,M4,M5};
int u [] = {L1,L2,L3,L4,M5,R1,R2,R3,R4};
int v [] = {L1,L2,L3,M5,R3,R2,R1};
int w [] = {L1,L2,L3,L4,L5,M4,R1,R2,R3,R4,R5};
int x [] = {L1,L2,M3,R4,R5,R1,R2,M3,L4,L5};
int y [] = {L1,L2,M3,R1,R2,M4,M5};
int z [] = {L1,M1,R1,R2,R3,L4,L5,M5,R5}; */
int clr [] = {L1,L2,L3,L4,L5,M1,M2,M3,M4,M5,R1,R2,R3,R4,R5};

int wt = 1000;
int clt = 150;

void setup() {
  // put your setup code here, to run once:
for(int x=0; x<sizeof(clr); x++)
{
  pinMode(clr[x],OUTPUT);
}
}
void loop() {
  // put your main code here, to run repeatedly:
pa();
pclr();
pb();
pclr();
pc();
pclr();
pd();
pclr();
pe();
pclr();
pf();
pclr();
pg();
pclr();
ph();
pclr();
pi();
pclr();
pj();
pclr();
pk();
pclr();
pl();
pclr();
pm();
pclr();
pn();
pclr();
po();
pclr();
pp();
pclr();
pq();
pclr();
pr();
pclr();
ps();
pclr();
pt();
pclr();
pu();
pclr();
pv();
pclr();
pw();
pclr();
px();
pclr();
py();
pclr();
pz();
pclr();
}
void pa(){
  //digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  //digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);;
  digitalWrite(R4,HIGH);
  delay(tim);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pb(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
 // digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  delay(tim);
  //digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  delay(tim);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pc(){
  //digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  //digitalWrite(L5,HIGH);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  //digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pd(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  //digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pe(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  //digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  delay(tim);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pf(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  //digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pg(){
  //digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  //digitalWrite(L5,HIGH);
  digitalWrite(M1,HIGH);
  delay(tim);
 // digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  //digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void ph(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
 // digitalWrite(M1,HIGH);
 // digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  delay(tim);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pi(){
  digitalWrite(L1,HIGH);
  delay(tim);
 /* digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);*/
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  digitalWrite(M2,HIGH);
  delay(tim);
  digitalWrite(M3,HIGH);
  delay(tim);
  digitalWrite(M4,HIGH);
  delay(tim);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  /*digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);*/
  digitalWrite(R5,HIGH);
  delay(wt);
}
void pj(){
  digitalWrite(L1,HIGH);
  delay(tim);
  //digitalWrite(L2,HIGH);
  //digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  digitalWrite(M2,HIGH);
  delay(tim);
  digitalWrite(M3,HIGH);
  delay(tim);
  digitalWrite(M4,HIGH);
  delay(tim);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  //digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}
void pk(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  //digitalWrite(M1,HIGH);
  digitalWrite(M2,HIGH);
  delay(tim);
  //digitalWrite(M3,HIGH);
  digitalWrite(M4,HIGH);
  delay(tim);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  //digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pl(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  //digitalWrite(M1,HIGH);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  //digitalWrite(R1,HIGH);
  //digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pm(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
 // digitalWrite(M1,HIGH);
  digitalWrite(M2,HIGH);
  delay(tim);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  delay(tim);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pn(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  //digitalWrite(M1,HIGH);
  digitalWrite(M2,HIGH);
  delay(tim);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  //digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void po(){
  //digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  //digitalWrite(L5,HIGH);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  //digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pp(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  //digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pq(){
  //digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  //digitalWrite(L4,HIGH);
  //digitalWrite(L5,HIGH);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  digitalWrite(M4,HIGH);
  delay(tim);
  //digitalWrite(M5,HIGH);
  //digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void pr(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  digitalWrite(M4,HIGH);
  delay(tim);
  //digitalWrite(M5,HIGH);
  //digitalWrite(R1,HIGH);
  digitalWrite(R2,HIGH);
  delay(tim);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void ps(){
  //digitalWrite(L1,HIGH);
  digitalWrite(L2,HIGH);
  delay(tim);
  //digitalWrite(L3,HIGH);
  //digitalWrite(L4,HIGH);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  //digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pt(){
  digitalWrite(L1,HIGH);
  delay(tim);
  /*digitalWrite(L2,HIGH);
  digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  digitalWrite(L5,HIGH);*/
  digitalWrite(M1,HIGH);
  delay(tim);
  digitalWrite(M2,HIGH);
  delay(tim);
  digitalWrite(M3,HIGH);
  delay(tim);
  digitalWrite(M4,HIGH);
  delay(tim);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  /*digitalWrite(R2,HIGH);
  digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);*/
  delay(wt);
}

void pu(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  //digitalWrite(L5,HIGH);
  //digitalWrite(M1,HIGH);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pv(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  //digitalWrite(L4,HIGH);
  //digitalWrite(L5,HIGH);
  //digitalWrite(M1,HIGH);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pw(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  digitalWrite(L3,HIGH);
  delay(tim);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  //digitalWrite(M1,HIGH);
  //digitalWrite(M2,HIGH);
  //digitalWrite(M3,HIGH);
  digitalWrite(M4,HIGH);
  delay(tim);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  digitalWrite(R3,HIGH);
  delay(tim);
  digitalWrite(R4,HIGH);
  delay(tim);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void px(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  //digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  //digitalWrite(M1,HIGH);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  //digitalWrite(M5,HIGH);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  //digitalWrite(R3,HIGH);
  digitalWrite(R4,HIGH);
  delay(tim);
  digitalWrite(R5,HIGH);
  delay(wt);
}

void py(){
  digitalWrite(L1,HIGH);
  delay(tim);
  digitalWrite(L2,HIGH);
  delay(tim);
  //digitalWrite(L3,HIGH);
  //digitalWrite(L4,HIGH);
  //digitalWrite(L5,HIGH);
  //digitalWrite(M1,HIGH);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  digitalWrite(M4,HIGH);
  delay(tim);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  //digitalWrite(R5,HIGH);
  delay(wt);
}

void pz(){
  digitalWrite(L1,HIGH);
  delay(tim);
  //digitalWrite(L2,HIGH);
  //digitalWrite(L3,HIGH);
  digitalWrite(L4,HIGH);
  delay(tim);
  digitalWrite(L5,HIGH);
  delay(tim);
  digitalWrite(M1,HIGH);
  delay(tim);
  //digitalWrite(M2,HIGH);
  digitalWrite(M3,HIGH);
  delay(tim);
  //digitalWrite(M4,HIGH);
  digitalWrite(M5,HIGH);
  delay(tim);
  digitalWrite(R1,HIGH);
  delay(tim);
  digitalWrite(R2,HIGH);
  delay(tim);
  //digitalWrite(R3,HIGH);
  //digitalWrite(R4,HIGH);
  digitalWrite(R5,HIGH);
  delay(wt);
}
void pclr(){
  digitalWrite(L1,LOW);
  digitalWrite(L2,LOW);
  digitalWrite(L3,LOW);
  digitalWrite(L4,LOW);
  digitalWrite(L5,LOW);
  digitalWrite(M1,LOW);
  digitalWrite(M2,LOW);
  digitalWrite(M3,LOW);
  digitalWrite(M4,LOW);
  digitalWrite(M5,LOW);
  digitalWrite(R1,LOW);
  digitalWrite(R2,LOW);
  digitalWrite(R3,LOW);
  digitalWrite(R4,LOW);
  digitalWrite(R5,LOW);
  delay(clt);
}
