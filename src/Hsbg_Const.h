#ifndef Hsbg_Const_H
#define Hsbg_Const_H

#define c_pi    3.14159265358979323846264338327950288
#define c_twopi 6.2831853071795862320E0
#define c_h 6.62606896E-34                   /*- The Planck constant (Js) -*/
#define c_c 2.99792458E8                     /*- Speed of light (ms$^{-1}$) -*/
#define c_kb 1.3806504E-23                   /*- The Boltzmann constant (JK$^{-1}$) -*/
#define c_R 8.314472                         /*- Universal gas constant (JK$^{-1}$mol$^{-1}$) -*/
#define c_bohr2angstroms 0.52917720859       /*- Bohr to Angstroms conversion factor -*/
#define c_bohr2m 0.52917720859E-10           /*- Bohr to meters conversion factor -*/
#define c_bohr2cm 0.52917720859E-8           /*- Bohr to centimeters conversion factor -*/
#define c_bohr2ai 0.52917720859E-0           /*- Bohr to centimeters conversion factor -*/
#define c_amu2g 1.660538782E-24              /*- Atomic mass units to grams conversion factor -*/
#define c_amu2kg 1.660538782E-27             /*- Atomic mass units to kg conversion factor -*/
#define c_au2amu 5.485799097E-4              /*- Atomic units (m$@@e$) to atomic mass units conversion factor -*/
#define c_hartree2J 4.359744E-18             /*- Hartree to joule conversion factor -*/
#define c_hartree2aJ 4.359744                /*- Hartree to attojoule (10$^{-18}$J) conversion factor -*/
#define c_cal2J 4.184                        /*- Calorie to joule conversion factor -*/
#define c_dipmom_au2si    8.47835281E-30     /*- Atomic units to SI units (Cm) conversion factor for dipoles -*/
#define c_dipmom_au2debye 2.54174623         /*- Atomic units to Debye conversion factor for dipoles -*/
#define c_dipmom_debye2si 3.335640952E-30    /*- Debye to SI units (Cm) conversion factor for dipoles -*/
#define c_c_au 137.035999679                 /*- Speed of light in atomic units -*/
#define c_hartree2ev 27.21138                /*- Hartree to eV conversion factor -*/
#define c_hartree2wavenumbers 219474.6       /*- Hartree to cm$^{-1}$ conversion factor -*/
#define c_hartree2kcalmol 627.5095           /*- Hartree to kcal mol$^{-1}$ conversion factor -*/
#define c_hartree2kJmol 2625.500             /*- Hartree to kilojoule mol$^{-1}$ conversion factor -*/
#define c_hartree2MHz 6.579684E9             /*- Hartree to MHz conversion factor -*/
#define c_kcalmol2wavenumbers 349.7551       /*- kcal mol$^{-1}$ to cm$^{-1}$ conversion factor -*/
#define c_e0 8.854187817E-12                 /*- Vacuum permittivity (Fm$^{-1}$)-*/
#define c_na 6.02214179E23                   /*- Avagadro's number -*/
#define c_me 9.10938215E-31                  /*- Electron rest mass (in kg)-*/

#define PI		3.14159265358979323846264338327950288

#define MAX_ELEMENT 118
static const char *elements_label[]=
{"X","H","He","LI","BE","B","C","N","O","F","NE","NA","MG","AL","SI",
"P","S","CL","AR","K","CA","SC","TI","V","CR","MN","FE","CO","NI",
"CU","ZN","GA","GE","AS","SE","BR","KR","RB","SR","Y","ZR","NB","MO",
"TC","RU","RH","PD","AG","CD","IN","SN","SB","TE","I","XE","CS","BA",
"LA","CE","PR","ND","PM","SM","EU","GD","TB","DY","HO","ER","TM","YB",
"LU","HF","TA","W","RE","OS","IR","PT","AU","HG","TL","PB","BI","PO",
"AT","RN","FR","RA","AC","TH","PA","U","NP","PU","AM","CM","BK","CF",
"ES","FM","MD","NO","LR","RF","DB","SG","BH","HS","MT","DS","RG",
  "UUB","UUT","UUQ","UUP","UUH","UUS","UUO"};

static const double elements_mass[]=
{0.,1.00782503207,4.00260325415,7.016004548,9.012182201,11.009305406,
12,14.00307400478,15.99491461956,18.998403224,19.99244017542,
22.98976928087,23.985041699,26.981538627,27.97692653246,30.973761629,
31.972070999,34.968852682,39.96238312251,38.963706679,39.962590983,
44.955911909,47.947946281,50.943959507,51.940507472,54.938045141,
55.934937475,58.933195048,57.935342907,62.929597474,63.929142222,
68.925573587,73.921177767,74.921596478,79.916521271,78.918337087,
85.910610729,84.911789737,87.905612124,88.905848295,89.904704416,
92.906378058,97.905408169,98.906254747,101.904349312,102.905504292,
105.903485715,106.90509682,113.90335854,114.903878484,119.902194676,
120.903815686,129.906224399,126.904472681,131.904153457,132.905451932,
137.905247237,138.906353267,139.905438706,140.907652769,141.907723297,
144.912749023,151.919732425,152.921230339,157.924103912,158.925346757,
163.929174751,164.93032207,165.930293061,168.93421325,173.938862089,
174.940771819,179.946549953,180.947995763,183.950931188,186.955753109,
191.96148069,192.96292643,194.964791134,196.966568662,201.970643011,
204.974427541,207.976652071,208.980398734,208.982430435,210.987496271,
222.017577738,222.01755173,228.031070292,227.027752127,232.038055325,
231.03588399,238.050788247,237.048173444,242.058742611,243.06138108,
247.07035354,247.07030708,251.079586788,252.082978512,257.095104724,
258.098431319,255.093241131,260.105504,263.112547,255.107398,259.114500,
262.122892,263.128558,265.136151,281.162061,272.153615,283.171792,283.176451,
285.183698,287.191186,292.199786,291.206564,293.214670};


#endif
