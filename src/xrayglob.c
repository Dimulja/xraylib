#define GLOBH
#include "xrayglob.h"

//////////////////////////////////////////////////////////////////////
/////            Variables                                       /////
//////////////////////////////////////////////////////////////////////
/*
int HardExit;
int ExitStatus;
char XRayLibDir[MAXFILENAMESIZE];

char ShellName[][5] = {
"K",    "L1",   "L2",   "L3",   "M1",   "M2",   "M3",   "M4",   "M5",   "N1",
"N2",   "N3",   "N4",   "N5",   "N6",   "N7",   "O1",   "O2",   "O3",   "O4",
"O5",   "O6",   "O7",   "P1",   "P2",   "P3",   "P4",   "P5"
};

char LineName[][5] = {
"KL1",	"KL2",	"KL3",	"KM1",	"KM2",	"KM3",	"KM4",	"KM5",	"KN1",	"KN2",
"KN3",	"KN4",	"KN5",	"L1M1",	"L1M2",	"L1M3",	"L1M4",	"L1M5",	"L1N1",	"L1N2",
"L1N3",	"L1N4",	"L1N5",	"L1N6",	"L1N7",	"L2M1",	"L2M2",	"L2M3",	"L2M4",	"L2M5",
"L2N1",	"L2N2",	"L2N3",	"L2N4",	"L2N5",	"L2N6",	"L2N7",	"L3M1",	"L3M2",	"L3M3",
"L3M4",	"L3M5",	"L3N1",	"L3N2",	"L3N3",	"L3N4",	"L3N5",	"L3N6",	"L3N7"
};

char TransName[][5] = {"F1","F12","F13","FP13","F23"};


*/

float AtomicWeight_arr[ZMAX+1];
float EdgeEnergy_arr[ZMAX+1][SHELLNUM];
float LineEnergy_arr[ZMAX+1][LINENUM];
float FluorYield_arr[ZMAX+1][SHELLNUM];
float JumpFactor_arr[ZMAX+1][SHELLNUM];
float CosKron_arr[ZMAX+1][TRANSNUM];
float RadRate_arr[ZMAX+1][LINENUM];

int NE_Photo[ZMAX+1];
float *E_Photo_arr[ZMAX+1];
float *CS_Photo_arr[ZMAX+1];
float *CS_Photo_arr2[ZMAX+1];

int NE_Rayl[ZMAX+1];
float *E_Rayl_arr[ZMAX+1];
float *CS_Rayl_arr[ZMAX+1];
float *CS_Rayl_arr2[ZMAX+1];

int NE_Compt[ZMAX+1];
float *E_Compt_arr[ZMAX+1];
float *CS_Compt_arr[ZMAX+1];
float *CS_Compt_arr2[ZMAX+1];

int Nq_Rayl[ZMAX+1];
float *q_Rayl_arr[ZMAX+1];
float *FF_Rayl_arr[ZMAX+1];
float *FF_Rayl_arr2[ZMAX+1];

int Nq_Compt[ZMAX+1];
float *q_Compt_arr[ZMAX+1];
float *SF_Compt_arr[ZMAX+1];
float *SF_Compt_arr2[ZMAX+1];

int NE_Fi[ZMAX+1];
float *E_Fi_arr[ZMAX+1];
float *Fi_arr[ZMAX+1];
float *Fi_arr2[ZMAX+1];

int NE_Fii[ZMAX+1];
float *E_Fii_arr[ZMAX+1];
float *Fii_arr[ZMAX+1];
float *Fii_arr2[ZMAX+1];

int NE_Photo_Total_Kissel[ZMAX+1];
double *E_Photo_Total_Kissel[ZMAX+1];
double *Photo_Total_Kissel[ZMAX+1];
double *Photo_Total_Kissel2[ZMAX+1];

float Electron_Config_Kissel[ZMAX+1][SHELLNUM_K];

int NE_Photo_Partial_Kissel[ZMAX+1][SHELLNUM_K];
double *E_Photo_Partial_Kissel[ZMAX+1][SHELLNUM_K];
double *Photo_Partial_Kissel[ZMAX+1][SHELLNUM_K];
double *Photo_Partial_Kissel2[ZMAX+1][SHELLNUM_K];







