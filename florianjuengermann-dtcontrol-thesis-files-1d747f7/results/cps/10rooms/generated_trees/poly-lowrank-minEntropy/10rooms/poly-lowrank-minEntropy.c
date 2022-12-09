#include <stdio.h>

void classify(const float x[], float result[]);

int main() {
    float x[] = {18.75f,20.0f,18.75f,18.75f,20.0f,18.75f,18.75f,18.75f,18.75f,18.75f};
    float result[2];
    classify(x, result);
    return 0;
}

void classify(const float x[], float result[]) {
	if (-7.97e+03(-0.00487*x[0]-0.00686*x[1]-0.00487*x[2]-0.00809*x[3]+0.00858*x[4]-0.00809*x[5]-0.00487*x[6]-0.00809*x[7]-0.00488*x[8]-0.0081*x[9]+1)^2-4.69(+0.139*x[0]+0.217*x[1]+0.139*x[2]-0.349*x[3]+0.623*x[4]-0.349*x[5]+0.139*x[6]-0.349*x[7]+0.139*x[8]-0.349*x[9]-0.0125)^2+4.08(-0.21*x[0]+0.901*x[1]-0.21*x[2]+0.00768*x[3]-0.11*x[4]+0.00774*x[5]-0.21*x[6]+0.00771*x[7]-0.21*x[8]+0.00761*x[9]+0.0033)^2-1.87(+0.288*x[0]+0.187*x[1]+0.289*x[2]-0.175*x[3]-0.714*x[4]-0.175*x[5]+0.288*x[6]-0.175*x[7]+0.289*x[8]-0.174*x[9]+0.00737)^2+0.000642(+0.273*x[0]+0.323*x[1]+0.291*x[2]+0.327*x[3]+0.297*x[4]+0.315*x[5]+0.418*x[6]+0.315*x[7]+0.296*x[8]+0.284*x[9]+0.0159)^2+0.000517(+0.524*x[0]+0.0369*x[1]+0.248*x[2]-0.0424*x[3]+0.0344*x[4]+0.176*x[5]-0.777*x[6]-0.0286*x[7]+0.151*x[8]+0.0377*x[9]+0.00183)^2-0.000337(+0.386*x[0]-0.00684*x[1]+0.223*x[2]+0.0482*x[3]-0.00688*x[4]+0.167*x[5]+0.197*x[6]-0.0564*x[7]-0.833*x[8]-0.186*x[9]-0.00034)^2+0.000222(+0.222*x[0]+0.00176*x[1]-0.117*x[2]-0.117*x[3]+0.00166*x[4]-0.49*x[5]-0.0417*x[6]+0.802*x[7]-0.0558*x[8]-0.188*x[9]+8.6e-05)^2-0.000152(-0.118*x[0]-0.00931*x[1]-0.0698*x[2]+0.288*x[3]-0.0091*x[4]+0.391*x[5]-0.0381*x[6]+0.119*x[7]+0.19*x[8]-0.833*x[9]-0.000452)^2+0.000101(+0.155*x[0]-0.00232*x[1]-0.371*x[2]-0.715*x[3]-0.00226*x[4]+0.529*x[5]+0.152*x[6]+0.142*x[7]+0.0554*x[8]+0.0359*x[9]-0.000116)^2 <= 0) {
		if (-7.91e+03(-0.00476*x[0]-0.00698*x[1]-0.00473*x[2]-0.008*x[3]+0.00899*x[4]-0.008*x[5]-0.00473*x[6]-0.00807*x[7]-0.00477*x[8]-0.00807*x[9]+1)^2-4.89(+0.124*x[0]+0.209*x[1]+0.123*x[2]-0.349*x[3]+0.644*x[4]-0.349*x[5]+0.123*x[6]-0.344*x[7]+0.125*x[8]-0.344*x[9]-0.0131)^2+4.13(-0.208*x[0]+0.902*x[1]-0.208*x[2]+0.0062*x[3]-0.119*x[4]+0.0062*x[5]-0.208*x[6]+0.00746*x[7]-0.207*x[8]+0.00747*x[9]+0.00364)^2-1.85(+0.311*x[0]+0.203*x[1]+0.314*x[2]-0.165*x[3]-0.673*x[4]-0.165*x[5]+0.314*x[6]-0.177*x[7]+0.308*x[8]-0.177*x[9]+0.00791)^2+0.00125(-0.151*x[0]-0.229*x[1]-0.349*x[2]-0.527*x[3]-0.256*x[4]-0.529*x[5]-0.409*x[6]+0.0642*x[7]+0.0344*x[8]+0.0778*x[9]-0.0107)^2+0.000322(+0.286*x[0]+0.0595*x[1]-0.452*x[2]+0.211*x[3]+0.063*x[4]+0.21*x[5]-0.307*x[6]-0.165*x[7]+0.704*x[8]-0.0197*x[9]+0.00285)^2+0.000205(-0.107*x[0]-0.0627*x[1]-0.692*x[2]-0.0159*x[3]-0.0658*x[4]-0.000587*x[5]+0.677*x[6]-0.122*x[7]-0.121*x[8]-0.111*x[9]-0.00301)^2+8.25e-05(+0.0164*x[0]-0.000891*x[1]+0.00359*x[2]-0.707*x[3]-0.00093*x[4]+0.707*x[5]-0.0126*x[6]-0.00698*x[7]-0.0109*x[8]+0.00314*x[9]-4.3e-05)^2-4.83e-05(-0.038*x[0]+0.196*x[1]+0.056*x[2]-0.161*x[3]+0.203*x[4]-0.144*x[5]+0.344*x[6]+0.562*x[7]+0.404*x[8]+0.522*x[9]+0.00949)^2+2.68e-05(-0.466*x[0]-0.0268*x[1]+0.14*x[2]+0.0112*x[3]-0.0279*x[4]+0.0158*x[5]+0.0605*x[6]-0.668*x[7]+0.161*x[8]+0.534*x[9]-0.0013)^2 <= 0) {
			if (-8.04e+03(-0.00808*x[0]+0.00863*x[1]-0.00808*x[2]-0.00456*x[3]-0.00685*x[4]-0.00456*x[5]-0.00808*x[6]-0.00456*x[7]-0.00811*x[8]-0.00479*x[9]+1)^2-4.7(-0.349*x[0]+0.638*x[1]-0.349*x[2]+0.12*x[3]+0.213*x[4]+0.12*x[5]-0.349*x[6]+0.12*x[7]-0.347*x[8]+0.138*x[9]-0.013)^2+4.12(+0.00797*x[0]-0.119*x[1]+0.00797*x[2]-0.21*x[3]+0.901*x[4]-0.21*x[5]+0.00797*x[6]-0.21*x[7]+0.00847*x[8]-0.206*x[9]+0.00361)^2-1.98(+0.167*x[0]+0.677*x[1]+0.167*x[2]-0.32*x[3]-0.204*x[4]-0.32*x[5]+0.167*x[6]-0.32*x[7]+0.171*x[8]-0.282*x[9]-0.00753)^2+0.00465(-0.175*x[0]-0.184*x[1]-0.175*x[2]-0.374*x[3]-0.143*x[4]-0.402*x[5]-0.175*x[6]-0.381*x[7]-0.047*x[8]+0.636*x[9]-0.00624)^2 <= 0) {
				if (-2.98e+03(-0.00782*x[0]+0.00901*x[1]-0.00783*x[2]-0.00844*x[3]+0.00884*x[4]-0.00843*x[5]-0.00782*x[6]-0.00838*x[7]-0.00783*x[8]-0.00838*x[9]+1)^2-2.9(+0.0995*x[0]-0.615*x[1]+0.0993*x[2]+0.246*x[3]-0.58*x[4]+0.246*x[5]+0.0995*x[6]+0.249*x[7]+0.0991*x[8]+0.249*x[9]+0.0221)^2-2.01(-0.381*x[0]+0.133*x[1]-0.381*x[2]+0.311*x[3]+0.13*x[4]+0.311*x[5]-0.38*x[6]+0.311*x[7]-0.381*x[8]+0.311*x[9]-0.0038)^2+0.133(-0.198*x[0]-0.755*x[1]-0.202*x[2]-0.24*x[3]+0.321*x[4]-0.238*x[5]-0.197*x[6]-0.159*x[7]-0.209*x[8]-0.161*x[9]-0.00905)^2-0.0846(+0.226*x[0]-0.183*x[1]+0.231*x[2]+0.282*x[3]+0.735*x[4]+0.279*x[5]+0.225*x[6]+0.168*x[7]+0.239*x[8]+0.171*x[9]+0.00993)^2+0.0138(-0.63*x[0]+0.000567*x[1]-0.121*x[2]+0.000992*x[3]+0.000537*x[4]+0.00107*x[5]+0.767*x[6]-0.000148*x[7]-0.0147*x[8]-0.000146*x[9]+1.91e-05)^2+0.0137(+0.527*x[0]+0.00189*x[1]-0.792*x[2]+0.00247*x[3]+0.00188*x[4]+0.00361*x[5]+0.307*x[6]+1.06e-05*x[7]-0.0352*x[8]-1.59e-05*x[9]+6.49e-05)^2+0.0136(+0.281*x[0]+0.0043*x[1]+0.328*x[2]+0.00789*x[3]+0.00417*x[4]+0.00678*x[5]+0.266*x[6]-0.000519*x[7]-0.861*x[8]-0.000492*x[9]+0.000146)^2+0.00325(-0.0435*x[0]-0.041*x[1]-0.0412*x[2]+0.419*x[3]-0.0582*x[4]+0.488*x[5]-0.0442*x[6]-0.579*x[7]-0.0357*x[8]-0.489*x[9]-0.00171)^2+0.00318(+0.00218*x[0]+0.00201*x[1]+0.002*x[2]-0.0273*x[3]+0.00285*x[4]-0.0315*x[5]+0.00222*x[6]-0.672*x[7]+0.00167*x[8]+0.739*x[9]+8.36e-05)^2+0.00298(+0.00285*x[0]+0.0029*x[1]+0.00381*x[2]-0.728*x[3]+0.00399*x[4]+0.685*x[5]+0.00296*x[6]+0.0271*x[7]+0.00203*x[8]+0.0269*x[9]+0.000119)^2 <= 0) {
					if (-4.34e+03(-0.00733*x[0]-0.0136*x[1]-0.00733*x[2]-0.0042*x[3]+0.00869*x[4]-0.0042*x[5]-0.00733*x[6]-0.0042*x[7]-0.00733*x[8]-0.0042*x[9]+1)^2+4.87(-0.227*x[0]+0.888*x[1]-0.227*x[2]+0.0168*x[3]-0.0568*x[4]+0.0168*x[5]-0.227*x[6]+0.0169*x[7]-0.227*x[8]+0.0168*x[9]+0.00622)^2-1.9(-0.268*x[0]-0.243*x[1]-0.268*x[2]+0.19*x[3]+0.713*x[4]+0.19*x[5]-0.268*x[6]+0.191*x[7]-0.268*x[8]+0.191*x[9]-0.0142)^2-1.33(-0.138*x[0]-0.208*x[1]-0.138*x[2]+0.341*x[3]-0.643*x[4]+0.342*x[5]-0.138*x[6]+0.342*x[7]-0.138*x[8]+0.342*x[9]+0.00444)^2+0.00413(-0.329*x[0]-0.329*x[1]-0.329*x[2]-0.303*x[3]-0.273*x[4]-0.301*x[5]-0.329*x[6]-0.321*x[7]-0.324*x[8]-0.319*x[9]-0.017)^2+0.00084(-0.105*x[0]-0.00574*x[1]+0.105*x[2]-0.583*x[3]-0.00541*x[4]-0.403*x[5]+0.00129*x[6]+0.558*x[7]-0.0247*x[8]+0.404*x[9]-0.000293)^2+0.000545(-0.116*x[0]+0.00135*x[1]+0.0254*x[2]-0.618*x[3]+0.00132*x[4]+0.765*x[5]+0.0917*x[6]-0.0574*x[7]+0.00387*x[8]-0.0852*x[9]+6.86e-05)^2+0.00034(-0.703*x[0]+0.000266*x[1]-0.016*x[2]+0.144*x[3]+0.000259*x[4]-0.0797*x[5]+0.682*x[6]+0.0386*x[7]+0.0383*x[8]-0.102*x[9]+1.41e-05)^2+0.000242(-0.393*x[0]+0.00044*x[1]+0.817*x[2]+0.0899*x[3]+0.00046*x[4]+0.0251*x[5]-0.391*x[6]-0.126*x[7]-0.0312*x[8]+0.0134*x[9]+2.6e-05)^2-0.000202(-0.219*x[0]+0.000679*x[1]-0.225*x[2]-0.0604*x[3]+0.000735*x[4]-0.0324*x[5]-0.145*x[6]-0.463*x[7]+0.591*x[8]+0.559*x[9]+3.72e-05)^2 <= 0) {
						if (-7.81e+03(-0.00817*x[0]+0.00901*x[1]-0.00817*x[2]-0.00488*x[3]-0.00693*x[4]-0.00488*x[5]-0.00818*x[6]-0.00488*x[7]-0.0082*x[8]-0.00487*x[9]+1)^2-4.67(-0.348*x[0]+0.63*x[1]-0.348*x[2]+0.135*x[3]+0.216*x[4]+0.135*x[5]-0.347*x[6]+0.135*x[7]-0.346*x[8]+0.136*x[9]-0.0129)^2+4.05(+0.00797*x[0]-0.109*x[1]+0.00808*x[2]-0.21*x[3]+0.901*x[4]-0.21*x[5]+0.0082*x[6]-0.21*x[7]+0.00862*x[8]-0.21*x[9]+0.00339)^2-1.94(-0.176*x[0]-0.707*x[1]-0.176*x[2]+0.29*x[3]+0.191*x[4]+0.29*x[5]-0.178*x[6]+0.29*x[7]-0.182*x[8]+0.29*x[9]+0.00753)^2+0.000988(-0.339*x[0]-0.0474*x[1]+0.792*x[2]-0.0108*x[3]-0.0529*x[4]-0.00416*x[5]-0.418*x[6]-0.136*x[7]-0.237*x[8]-0.0595*x[9]-0.00264)^2+0.000558(+0.0951*x[0]+0.286*x[1]+0.412*x[2]+0.305*x[3]+0.309*x[4]+0.322*x[5]+0.207*x[6]+0.323*x[7]+0.474*x[8]+0.275*x[9]+0.0153)^2-0.00047(-0.337*x[0]-0.0407*x[1]-0.134*x[2]-0.115*x[3]-0.041*x[4]-0.129*x[5]-0.15*x[6]-0.503*x[7]+0.463*x[8]+0.588*x[9]-0.00197)^2-0.000274(+0.185*x[0]+0.0316*x[1]+0.145*x[2]-0.419*x[3]+0.0322*x[4]-0.435*x[5]+0.0784*x[6]+0.415*x[7]-0.284*x[8]+0.565*x[9]+0.00156)^2-0.000136(-0.188*x[0]+0.0321*x[1]+0.0962*x[2]-0.0769*x[3]+0.0331*x[4]+0.363*x[5]+0.667*x[6]-0.358*x[7]-0.448*x[8]+0.201*x[9]+0.0016)^2-5.71e-05(+0.734*x[0]+0.0522*x[1]+0.0288*x[2]+0.0816*x[3]+0.0541*x[4]+0.269*x[5]-0.355*x[6]-0.386*x[7]-0.199*x[8]+0.247*x[9]+0.00263)^2 <= 0) {
							if (-4.12e+03(-0.00438*x[0]-0.00605*x[1]-0.00438*x[2]-0.00481*x[3]-0.00651*x[4]-0.00481*x[5]-0.00438*x[6]-0.00481*x[7]-0.00437*x[8]-0.0048*x[9]+1)^2+1.99(+0.218*x[0]-0.766*x[1]+0.218*x[2]+0.0893*x[3]-0.436*x[4]+0.0893*x[5]+0.218*x[6]+0.0893*x[7]+0.218*x[8]+0.0895*x[9]-0.00194)^2+1.97(+0.113*x[0]-0.412*x[1]+0.113*x[2]-0.207*x[3]+0.78*x[4]-0.207*x[5]+0.113*x[6]-0.207*x[7]+0.113*x[8]-0.207*x[9]+0.000573)^2-1.03(-0.3*x[0]-0.373*x[1]-0.3*x[2]+0.317*x[3]+0.314*x[4]+0.317*x[5]-0.3*x[6]+0.317*x[7]-0.3*x[8]+0.317*x[9]+0.000633)^2 <= 0) {
								if (187(+0.00212*x[0]+0.0121*x[1]+0.00202*x[2]-0.0073*x[3]+0.00886*x[4]-0.0073*x[5]+0.00214*x[6]-0.0073*x[7]+0.0021*x[8]-0.00724*x[9]-1)^2-2.61(+0.337*x[0]+0.0436*x[1]+0.337*x[2]-0.368*x[3]+0.0426*x[4]-0.368*x[5]+0.337*x[6]-0.368*x[7]+0.337*x[8]-0.368*x[9]+0.0145)^2-0.205(-0.0254*x[0]-0.769*x[1]-0.0206*x[2]-0.0623*x[3]-0.624*x[4]-0.0625*x[5]-0.0261*x[6]-0.062*x[7]-0.0243*x[8]-0.0651*x[9]-0.0132)^2+0.0352(-0.355*x[0]-0.128*x[1]-0.326*x[2]-0.307*x[3]+0.337*x[4]-0.308*x[5]-0.359*x[6]-0.306*x[7]-0.348*x[8]-0.323*x[9]+0.00759)^2-0.0288(-0.123*x[0]+0.624*x[1]-0.13*x[2]-0.118*x[3]-0.703*x[4]-0.117*x[5]-0.122*x[6]-0.118*x[7]-0.124*x[8]-0.11*x[9]+0.00366)^2 <= 0) {
									if (-1.27e+03(+0.00174*x[0]-0.00883*x[1]+0.00173*x[2]+0.00494*x[3]+0.0341*x[4]+0.00494*x[5]+0.00174*x[6]+0.00494*x[7]+0.00173*x[8]+0.00494*x[9]-0.999)^2+4.78(-0.00663*x[0]-0.0575*x[1]-0.0066*x[2]+0.24*x[3]-0.875*x[4]+0.24*x[5]-0.00663*x[6]+0.24*x[7]-0.0066*x[8]+0.24*x[9]-0.0247)^2-0.718(-0.222*x[0]-0.698*x[1]-0.222*x[2]+0.234*x[3]+0.309*x[4]+0.234*x[5]-0.222*x[6]+0.234*x[7]-0.222*x[8]+0.234*x[9]+0.0198)^2-0.221(+0.287*x[0]-0.701*x[1]+0.286*x[2]-0.194*x[3]-0.175*x[4]-0.194*x[5]+0.287*x[6]-0.194*x[7]+0.286*x[8]-0.194*x[9]-0.00163)^2+0.0146(-0.344*x[0]-0.131*x[1]-0.346*x[2]-0.316*x[3]-0.328*x[4]-0.316*x[5]-0.343*x[6]-0.316*x[7]-0.346*x[8]-0.316*x[9]-0.0187)^2 <= 0) {
										if (-2.55e+03(-0.00831*x[0]+0.00725*x[1]-0.00831*x[2]-0.00517*x[3]+0.00539*x[4]-0.00517*x[5]-0.00831*x[6]-0.00517*x[7]-0.00831*x[8]-0.00517*x[9]+1)^2-2.17(-0.291*x[0]+0.496*x[1]-0.291*x[2]-0.115*x[3]+0.602*x[4]-0.115*x[5]-0.291*x[6]-0.115*x[7]-0.291*x[8]-0.115*x[9]-0.0189)^2-0.483(+0.282*x[0]+0.607*x[1]+0.282*x[2]-0.268*x[3]-0.161*x[4]-0.268*x[5]+0.282*x[6]-0.268*x[7]+0.282*x[8]-0.268*x[9]+0.00029)^2+0.351(+0.29*x[0]-0.172*x[1]+0.29*x[2]+0.0919*x[3]+0.774*x[4]+0.0919*x[5]+0.29*x[6]+0.0919*x[7]+0.29*x[8]+0.0919*x[9]+0.00864)^2-0.166(-0.0388*x[0]-0.596*x[1]-0.0388*x[2]-0.395*x[3]+0.113*x[4]-0.395*x[5]-0.0388*x[6]-0.395*x[7]-0.0388*x[8]-0.395*x[9]-0.00576)^2+0.0474(-6.16e-07*x[0]+4.62e-08*x[1]-4.97e-07*x[2]-0.19*x[3]-6.09e-08*x[4]+0.783*x[5]+6.21e-07*x[6]-0.592*x[7]+5.87e-07*x[8]-0.00151*x[9]-1.04e-09)^2+0.0474(-1.09e-07*x[0]+6.54e-08*x[1]-2.24e-07*x[2]-0.793*x[3]-6.41e-08*x[4]+0.232*x[5]+2.52e-07*x[6]+0.563*x[7]+2.39e-07*x[8]-0.00178*x[9]-1.18e-09)^2+0.0474(+7.64e-06*x[0]+6.83e-06*x[1]+7.7e-06*x[2]+0.291*x[3]-6.74e-06*x[4]+0.287*x[5]+4.99e-06*x[6]+0.289*x[7]+1.12e-06*x[8]-0.866*x[9]-1.52e-07)^2+0.00608(-0.76*x[0]-3.93e-06*x[1]+0.642*x[2]-1.81e-06*x[3]+3.12e-06*x[4]-1.99e-06*x[5]+0.106*x[6]-1.67e-06*x[7]+0.0122*x[8]-2.2e-06*x[9]-1.56e-08)^2+0.00608(-0.329*x[0]-9.24e-06*x[1]-0.519*x[2]-4.01e-06*x[3]+6.89e-06*x[4]-5.36e-06*x[5]+0.786*x[6]-4.12e-06*x[7]+0.0616*x[8]-7.4e-06*x[9]-4.62e-08)^2+0.00607(-0.255*x[0]-6.19e-06*x[1]-0.261*x[2]-4.97e-06*x[3]+2.22e-06*x[4]-5.76e-06*x[5]-0.347*x[6]-5.03e-06*x[7]+0.864*x[8]-1.07e-05*x[9]-7.71e-08)^2 <= 0) {
											if (-100(+0.000908*x[0]-0.0104*x[1]+0.000908*x[2]+0.000573*x[3]-0.0106*x[4]+0.000534*x[5]+0.000797*x[6]+0.000514*x[7]+0.00037*x[8]+0.000956*x[9]+1)^2-2.56(-0.354*x[0]-0.000819*x[1]-0.354*x[2]+0.354*x[3]+0.000581*x[4]+0.354*x[5]-0.353*x[6]+0.354*x[7]-0.353*x[8]+0.354*x[9]+0.000141)^2+0.117(-0.0424*x[0]-0.698*x[1]-0.0424*x[2]-0.0432*x[3]-0.705*x[4]-0.0446*x[5]-0.0457*x[6]-0.0436*x[7]-0.0439*x[8]-0.0434*x[9]-0.0145)^2-0.0389(+0.343*x[0]-0.0918*x[1]+0.343*x[2]+0.352*x[3]-0.0827*x[4]+0.356*x[5]+0.353*x[6]+0.355*x[7]+0.363*x[8]+0.34*x[9]-0.00377)^2+0.0104(+0.00881*x[0]-0.708*x[1]+0.00881*x[2]+0.0235*x[3]+0.702*x[4]+0.0274*x[5]-0.0124*x[6]+0.00414*x[7]-0.0145*x[8]-0.0671*x[9]+8.84e-05)^2 <= 0) {
												if (158(-0.00197*x[0]+0.00851*x[1]-0.00197*x[2]-0.000425*x[3]+0.00792*x[4]-0.000425*x[5]-0.00197*x[6]-0.000425*x[7]-0.00197*x[8]-0.000425*x[9]-1)^2-0.143(-0.0283*x[0]-0.709*x[1]-0.0283*x[2]-0.0942*x[3]-0.678*x[4]-0.0942*x[5]-0.0283*x[6]-0.0942*x[7]-0.0283*x[8]-0.0942*x[9]-0.011)^2+0.0344(-0.41*x[0]+0.0546*x[1]-0.41*x[2]-0.273*x[3]+0.163*x[4]-0.273*x[5]-0.41*x[6]-0.273*x[7]-0.41*x[8]-0.273*x[9]+0.00545)^2-0.0124(+0.16*x[0]-0.576*x[1]+0.16*x[2]-0.17*x[3]+0.67*x[4]-0.17*x[5]+0.16*x[6]-0.17*x[7]+0.16*x[8]-0.17*x[9]-0.000572)^2+0.007(-0.432*x[0]-1.15e-07*x[1]-0.345*x[2]+2.87e-07*x[3]-1.5e-08*x[4]+2.87e-07*x[5]+0.831*x[6]+2.87e-07*x[7]-0.0541*x[8]+2.87e-07*x[9]+2.09e-10)^2+0.007(-0.685*x[0]+2.36e-08*x[1]+0.726*x[2]-5.9e-08*x[3]+3.08e-09*x[4]-5.9e-08*x[5]-0.0539*x[6]-5.9e-08*x[7]+0.013*x[8]-5.9e-08*x[9]-4.29e-11)^2+0.007(+0.306*x[0]-4.19e-07*x[1]+0.322*x[2]+1.05e-06*x[3]-5.46e-08*x[4]+1.05e-06*x[5]+0.236*x[6]+1.05e-06*x[7]-0.864*x[8]+1.05e-06*x[9]+7.62e-10)^2-0.00669(-0.235*x[0]-0.404*x[1]-0.235*x[2]+0.371*x[3]+0.255*x[4]+0.371*x[5]-0.235*x[6]+0.371*x[7]-0.235*x[8]+0.371*x[9]-0.0002)^2+0.00273(-5.17e-06*x[0]+8.9e-07*x[1]-5.17e-06*x[2]+0.285*x[3]-3.51e-06*x[4]+0.318*x[5]-5.17e-06*x[6]+0.263*x[7]-5.17e-06*x[8]-0.865*x[9]+2.67e-08)^2+0.00273(-6.28e-07*x[0]+1.08e-07*x[1]-6.28e-07*x[2]+0.569*x[3]-4.27e-07*x[4]-0.785*x[5]-6.28e-07*x[6]+0.243*x[7]-6.28e-07*x[8]-0.0272*x[9]+3.24e-09)^2+0.00273(-5e-07*x[0]+8.6e-08*x[1]-5e-07*x[2]-0.587*x[3]-3.39e-07*x[4]-0.181*x[5]-5e-07*x[6]+0.789*x[7]-5e-07*x[8]-0.02*x[9]+2.58e-09)^2 <= 0) {
													if (152(-0.000547*x[0]+0.00803*x[1]-0.000545*x[2]-0.0023*x[3]+0.0087*x[4]-0.0023*x[5]-0.000541*x[6]-0.0023*x[7]-0.000542*x[8]-0.0023*x[9]-1)^2-0.144(+0.0871*x[0]+0.679*x[1]+0.0871*x[2]+0.0272*x[3]+0.711*x[4]+0.0272*x[5]+0.0872*x[6]+0.0272*x[7]+0.0872*x[8]+0.0272*x[9]+0.0112)^2+0.0314(-0.259*x[0]+0.174*x[1]-0.259*x[2]-0.418*x[3]+0.0246*x[4]-0.418*x[5]-0.26*x[6]-0.418*x[7]-0.26*x[8]-0.418*x[9]+0.00603)^2-0.00891(-0.268*x[0]+0.569*x[1]-0.268*x[2]+0.219*x[3]-0.445*x[4]+0.219*x[5]-0.268*x[6]+0.219*x[7]-0.268*x[8]+0.219*x[9]-0.00074)^2+0.00817(-0.00053*x[0]-1.21e-05*x[1]-0.000697*x[2]-0.859*x[3]+1.21e-05*x[4]+0.367*x[5]+0.000633*x[6]+0.189*x[7]+0.000548*x[8]+0.303*x[9]-1.42e-07)^2+0.00817(-0.000107*x[0]-2.73e-05*x[1]-0.000151*x[2]-0.11*x[3]+1.82e-05*x[4]-0.627*x[5]+0.00011*x[6]+0.771*x[7]+8.61e-05*x[8]-0.0333*x[9]-1.44e-07)^2+0.00817(+0.000261*x[0]+1.8e-07*x[1]+0.000508*x[2]+0.00766*x[3]-4.48e-05*x[4]-0.471*x[5]-0.000217*x[6]-0.347*x[7]-8.24e-05*x[8]+0.811*x[9]-5.57e-07)^2+0.00328(-0.855*x[0]-0.000197*x[1]+0.416*x[2]+0.000251*x[3]+0.000343*x[4]-0.000269*x[5]+0.242*x[6]-0.000284*x[7]+0.195*x[8]-0.000181*x[9]+6.46e-06)^2+0.00326(-0.138*x[0]-0.00162*x[1]-0.759*x[2]+0.00108*x[3]+0.00203*x[4]-0.000462*x[5]+0.51*x[6]-0.000496*x[7]+0.381*x[8]+0.000203*x[9]+9.84e-06)^2+0.00323(-0.0415*x[0]-7.68e-05*x[1]-0.0552*x[2]+4.26e-05*x[3]+8.46e-05*x[4]-5.53e-06*x[5]-0.655*x[6]-8.23e-06*x[7]+0.752*x[8]-5.81e-05*x[9]+2.52e-07)^2-0.00322(-0.32*x[0]-0.431*x[1]-0.319*x[2]+0.162*x[3]+0.544*x[4]+0.162*x[5]-0.323*x[6]+0.162*x[7]-0.323*x[8]+0.163*x[9]+0.000477)^2 <= 0) {
														if (-1.19e+03(+0.000713*x[0]+0.00653*x[1]+0.000713*x[2]-0.00467*x[3]-0.0321*x[4]-0.00467*x[5]+0.000713*x[6]-0.00467*x[7]+0.000713*x[8]-0.00467*x[9]+0.999)^2+4.52(+0.00787*x[0]-0.121*x[1]+0.00787*x[2]+0.251*x[3]-0.855*x[4]+0.251*x[5]+0.00787*x[6]+0.251*x[7]+0.00787*x[8]+0.251*x[9]-0.022)^2-1.21(-0.159*x[0]-0.577*x[1]-0.159*x[2]+0.306*x[3]+0.435*x[4]+0.306*x[5]-0.159*x[6]+0.306*x[7]-0.159*x[8]+0.306*x[9]+0.0239)^2-0.144(+0.452*x[0]-0.418*x[1]+0.452*x[2]+0.00761*x[3]+0.0848*x[4]+0.00761*x[5]+0.452*x[6]+0.00761*x[7]+0.452*x[8]+0.0076*x[9]+0.00431)^2+0.0775(-0.142*x[0]-0.691*x[1]-0.142*x[2]-0.305*x[3]-0.265*x[4]-0.305*x[5]-0.142*x[6]-0.305*x[7]-0.142*x[8]-0.305*x[9]-0.0093)^2 <= 0) {
															if (-1.24e+03(+0.00441*x[0]+0.0316*x[1]+0.00441*x[2]-0.000442*x[3]-0.00688*x[4]-0.000442*x[5]+0.00441*x[6]-0.000442*x[7]+0.00441*x[8]-0.000442*x[9]-0.999)^2+4.55(-0.246*x[0]+0.858*x[1]-0.246*x[2]-0.0194*x[3]+0.142*x[4]-0.0194*x[5]-0.246*x[6]-0.0194*x[7]-0.246*x[8]-0.0194*x[9]+0.0219)^2-1.17(-0.298*x[0]-0.435*x[1]-0.298*x[2]+0.115*x[3]+0.635*x[4]+0.115*x[5]-0.297*x[6]+0.115*x[7]-0.297*x[8]+0.115*x[9]-0.0236)^2-0.121(-0.0173*x[0]+0.0761*x[1]-0.0172*x[2]+0.471*x[3]-0.323*x[4]+0.471*x[5]-0.017*x[6]+0.471*x[7]-0.017*x[8]+0.471*x[9]+0.0035)^2+0.0902(-0.317*x[0]-0.261*x[1]-0.317*x[2]-0.119*x[3]-0.688*x[4]-0.119*x[5]-0.317*x[6]-0.119*x[7]-0.317*x[8]-0.119*x[9]-0.00892)^2-0.0154(+1.53e-06*x[0]+3.31e-07*x[1]+1.53e-06*x[2]-0.293*x[3]+4.93e-07*x[4]-0.282*x[5]-7.98e-07*x[6]-0.291*x[7]-7.98e-07*x[8]+0.866*x[9]+8.1e-09)^2-0.0154(+1.5e-08*x[0]+2.39e-09*x[1]+1.5e-08*x[2]+0.736*x[3]+1.38e-10*x[4]-0.0636*x[5]-1.06e-08*x[6]-0.674*x[7]-1.07e-08*x[8]+0.00179*x[9]+5.87e-11)^2-0.0154(+2.7e-08*x[0]+1.47e-08*x[1]+2.7e-08*x[2]+0.35*x[3]+5.74e-08*x[4]-0.816*x[5]+1.51e-08*x[6]+0.459*x[7]+1.51e-08*x[8]+0.00737*x[9]+3.58e-10)^2 <= 0) {
																if (-35.5(+0.00193*x[0]-0.0396*x[1]+0.00194*x[2]-0.00013*x[3]+0.0133*x[4]-0.000132*x[5]+0.00191*x[6]-0.000135*x[7]+0.00191*x[8]-0.00013*x[9]+0.999)^2+0.135(+0.0232*x[0]+0.966*x[1]+0.023*x[2]+0.123*x[3]+0.058*x[4]+0.123*x[5]+0.0234*x[6]+0.123*x[7]+0.0234*x[8]+0.123*x[9]+0.0374)^2-0.0506(+0.338*x[0]-0.17*x[1]+0.338*x[2]+0.2*x[3]+0.594*x[4]+0.2*x[5]+0.339*x[6]+0.201*x[7]+0.339*x[8]+0.2*x[9]-0.0171)^2-0.0056(-0.154*x[0]-0.191*x[1]-0.162*x[2]+0.439*x[3]-0.306*x[4]+0.441*x[5]-0.144*x[6]+0.444*x[7]-0.144*x[8]+0.441*x[9]-0.0021)^2+0.00239(-0.268*x[0]-0.0182*x[1]-0.181*x[2]+0.0393*x[3]+0.723*x[4]+0.00821*x[5]-0.43*x[6]-0.00375*x[7]-0.43*x[8]+0.00887*x[9]-0.00786)^2+0.00188(-0.617*x[0]+0.000337*x[1]+0.783*x[2]+0.000298*x[3]-0.0654*x[4]-0.0025*x[5]-0.0276*x[6]+0.00936*x[7]-0.0275*x[8]+0.000952*x[9]+0.00066)^2+0.00187(-5.92e-05*x[0]-1.82e-08*x[1]+2.28e-05*x[2]-2.59e-07*x[3]+1.33e-06*x[4]-9.63e-07*x[5]+0.707*x[6]-3.68e-07*x[7]-0.707*x[8]+1.63e-06*x[9]-1.42e-08)^2+0.00186(+0.639*x[0]+0.00129*x[1]+0.461*x[2]+0.0112*x[3]-0.149*x[4]-0.00337*x[5]-0.422*x[6]+0.0145*x[7]-0.422*x[8]-0.00893*x[9]+0.00153)^2+0.00125(+0.00784*x[0]-0.000201*x[1]+0.0158*x[2]+0.0464*x[3]-0.012*x[4]+0.429*x[5]-0.00237*x[6]-0.828*x[7]-0.00237*x[8]+0.357*x[9]+0.000113)^2+0.00123(-0.00448*x[0]+8.57e-05*x[1]-0.000723*x[2]-0.00602*x[3]+0.0016*x[4]+0.687*x[5]+0.00152*x[6]+0.0429*x[7]+0.00152*x[8]-0.725*x[9]-1.28e-05)^2+0.00122(+0.00023*x[0]+1.45e-06*x[1]+0.0016*x[2]+0.865*x[3]-0.0208*x[4]-0.306*x[5]+0.0165*x[6]-0.244*x[7]+0.0165*x[8]-0.312*x[9]+0.000209)^2 <= 0) {
																	if (-34(+0.000242*x[0]+0.0148*x[1]+0.000242*x[2]+0.00258*x[3]-0.0439*x[4]+0.00258*x[5]+0.000242*x[6]+0.00258*x[7]+0.000242*x[8]+0.00258*x[9]+0.999)^2+0.146(-0.106*x[0]-0.00459*x[1]-0.106*x[2]-0.0223*x[3]-0.975*x[4]-0.0223*x[5]-0.106*x[6]-0.0223*x[7]-0.106*x[8]-0.0223*x[9]-0.0425)^2-0.0443(+0.188*x[0]+0.574*x[1]+0.188*x[2]+0.359*x[3]-0.116*x[4]+0.359*x[5]+0.188*x[6]+0.359*x[7]+0.188*x[8]+0.359*x[9]-0.0175)^2-0.00453(+0.395*x[0]-0.588*x[1]+0.395*x[2]+0.0145*x[3]-0.17*x[4]+0.0145*x[5]+0.395*x[6]+0.0145*x[7]+0.395*x[8]+0.0145*x[9]+0.000723)^2-0.00233(-0.218*x[0]-0.57*x[1]-0.218*x[2]+0.347*x[3]+0.0651*x[4]+0.347*x[5]-0.218*x[6]+0.347*x[7]-0.218*x[8]+0.347*x[9]+0.00795)^2+0.00147(+4.79e-10*x[0]+7.68e-10*x[1]+4.79e-10*x[2]-0.363*x[3]-1.42e-10*x[4]-0.446*x[5]+4.79e-10*x[6]+0.818*x[7]+4.79e-10*x[8]-0.0095*x[9]-1.4e-11)^2+0.00147(-8.62e-11*x[0]-1.38e-10*x[1]-8.62e-11*x[2]+0.729*x[3]+2.56e-11*x[4]-0.683*x[5]-8.62e-11*x[6]-0.0482*x[7]-8.62e-11*x[8]+0.00175*x[9]+2.52e-12)^2+0.00147(-1.08e-08*x[0]-1.73e-08*x[1]-1.08e-08*x[2]-0.294*x[3]+3.2e-09*x[4]-0.292*x[5]-1.08e-08*x[6]-0.28*x[7]-1.08e-08*x[8]+0.866*x[9]+3.15e-10)^2+0.000337(+0.723*x[0]+1.4e-09*x[1]-0.69*x[2]-6.09e-10*x[3]+3.19e-11*x[4]-6.09e-10*x[5]-0.022*x[6]-6.09e-10*x[7]-0.0106*x[8]-6.09e-10*x[9]-1.1e-11)^2+0.000337(+0.438*x[0]+1.8e-08*x[1]+0.485*x[2]-7.81e-09*x[3]+4.08e-10*x[4]-7.81e-09*x[5]-0.732*x[6]-7.81e-09*x[7]-0.192*x[8]-7.81e-09*x[9]-1.41e-10)^2+0.000337(-0.187*x[0]-2.06e-08*x[1]-0.194*x[2]+8.95e-09*x[3]-4.68e-10*x[4]+8.95e-09*x[5]-0.463*x[6]+8.95e-09*x[7]+0.844*x[8]+8.95e-09*x[9]+1.62e-10)^2 <= 0) {
																		if (44.8(+5.34e-05*x[0]+0.00112*x[1]+5.34e-05*x[2]+0.00331*x[3]-0.027*x[4]+0.00331*x[5]+5.34e-05*x[6]+0.00331*x[7]+5.35e-05*x[8]+0.00331*x[9]+1)^2-0.107(-0.133*x[0]-0.236*x[1]-0.133*x[2]+0.00413*x[3]-0.935*x[4]+0.00413*x[5]-0.133*x[6]+0.00413*x[7]-0.133*x[8]+0.00414*x[9]-0.025)^2+0.0366(-0.253*x[0]-0.445*x[1]-0.253*x[2]-0.348*x[3]+0.249*x[4]-0.348*x[5]-0.253*x[6]-0.348*x[7]-0.253*x[8]-0.348*x[9]+0.0119)^2 <= 0) {
																			if (40.5(-8.67e-05*x[0]+0.00563*x[1]-8.67e-05*x[2]+0.000197*x[3]+0.00297*x[4]+0.000197*x[5]-8.67e-05*x[6]+0.000197*x[7]-8.67e-05*x[8]+0.000197*x[9]-1)^2-0.0184(+0.0776*x[0]+0.816*x[1]+0.0776*x[2]+0.131*x[3]+0.492*x[4]+0.131*x[5]+0.0776*x[6]+0.131*x[7]+0.0776*x[8]+0.131*x[9]+0.00613)^2-0.00365(-0.333*x[0]-0.271*x[1]-0.333*x[2]+0.303*x[3]+0.338*x[4]+0.303*x[5]-0.333*x[6]+0.303*x[7]-0.333*x[8]+0.303*x[9]-0.00017)^2+0.00333(-0.357*x[0]+0.353*x[1]-0.357*x[2]-0.302*x[3]-0.0398*x[4]-0.302*x[5]-0.357*x[6]-0.302*x[7]-0.357*x[8]-0.302*x[9]+0.00176)^2-0.00207(+0.0754*x[0]-0.369*x[1]+0.0754*x[2]-0.223*x[3]+0.801*x[4]-0.223*x[5]+0.0754*x[6]-0.223*x[7]+0.0754*x[8]-0.223*x[9]+9.52e-05)^2+0.000261(+0.429*x[0]-2.21e-09*x[1]+0.252*x[2]+1.3e-09*x[3]-5.36e-10*x[4]+1.3e-09*x[5]+0.17*x[6]+1.3e-09*x[7]-0.851*x[8]+1.3e-09*x[9]-6.35e-12)^2+0.000261(+0.721*x[0]+1.23e-09*x[1]-0.65*x[2]-7.25e-10*x[3]+2.99e-10*x[4]-7.26e-10*x[5]-0.201*x[6]-7.26e-10*x[7]+0.13*x[8]-7.26e-10*x[9]+3.55e-12)^2+0.000261(-0.216*x[0]-1.34e-09*x[1]-0.514*x[2]+7.89e-10*x[3]-3.25e-10*x[4]+7.88e-10*x[5]+0.825*x[6]+7.88e-10*x[7]-0.096*x[8]+7.88e-10*x[9]-3.85e-12)^2 <= 0) {
																				if (x[4] <= 20.625) {
																					result[0] = 0.0f; result[1] = 1.0f;
																				}
																				else {
																					if (48.3(+0.00232*x[0]-0.0174*x[1]+0.00232*x[2]+0.000255*x[3]+1.54e-05*x[4]+0.000255*x[5]+0.00232*x[6]+0.000255*x[7]+0.00232*x[8]+0.000254*x[9]+1)^2-0.0932(-0.0256*x[0]+0.842*x[1]-0.0256*x[2]+0.2*x[3]+0.359*x[4]+0.2*x[5]-0.0256*x[6]+0.2*x[7]-0.0256*x[8]+0.2*x[9]+0.0147)^2+0.0523(+0.25*x[0]-0.443*x[1]+0.25*x[2]+0.297*x[3]+0.449*x[4]+0.297*x[5]+0.25*x[6]+0.297*x[7]+0.25*x[8]+0.297*x[9]-0.0104)^2+0.00444(-0.323*x[0]-0.254*x[1]-0.323*x[2]-0.0865*x[3]+0.698*x[4]-0.0865*x[5]-0.323*x[6]-0.087*x[7]-0.323*x[8]-0.0883*x[9]-0.00136)^2-0.00381(+0.287*x[0]+0.174*x[1]+0.287*x[2]-0.337*x[3]+0.427*x[4]-0.337*x[5]+0.287*x[6]-0.339*x[7]+0.287*x[8]-0.34*x[9]+0.000716)^2+0.00174(-0.301*x[0]-7.83e-06*x[1]-0.301*x[2]+7.45e-06*x[3]-6.04e-05*x[4]+7.44e-06*x[5]-0.263*x[6]+8.97e-06*x[7]+0.866*x[8]+0.000112*x[9]+4.63e-08)^2+0.00174(+0.399*x[0]-8.98e-06*x[1]+0.399*x[2]-2.48e-05*x[3]+3.55e-07*x[4]-2.48e-05*x[5]-0.825*x[6]+2.18e-05*x[7]+0.0271*x[8]+5.6e-05*x[9]-2.72e-10)^2+0.00174(+0.707*x[0]-1.59e-08*x[1]-0.707*x[2]-7.38e-08*x[3]+1.32e-08*x[4]-7.38e-08*x[5]-0.000541*x[6]+1.03e-07*x[7]+0.000126*x[8]+7.12e-08*x[9]-1.01e-11)^2 <= 0) {
																						if (x[1] <= 20.625) {
																							result[0] = 1.0f; result[1] = 0.0f;
																						}
																						else {
																							if (83.1+0j(-0.000249+0j*x[0]-2.21e-07+0j*x[1]-0.000249+0j*x[2]+0.00105+0j*x[3]-2.21e-07+0j*x[4]+0.00105+0j*x[5]-0.000249+0j*x[6]+0.00105+0j*x[7]-0.000249+0j*x[8]+0.00105+0j*x[9]-1+0j)^2-0.0255+0j(+0.0897+0j*x[0]+0.278+0j*x[1]+0.0897+0j*x[2]+0.451+0j*x[3]+0.278+0j*x[4]+0.451+0j*x[5]+0.0897+0j*x[6]+0.451+0j*x[7]+0.0897+0j*x[8]+0.451+0j*x[9]+0.00181+0j)^2+0.0108+0j(-0.344+0j*x[0]-0.428+0j*x[1]-0.344+0j*x[2]+0.2+0j*x[3]-0.428+0j*x[4]+0.2+0j*x[5]-0.344+0j*x[6]+0.2+0j*x[7]-0.344+0j*x[8]+0.2+0j*x[9]+0.00119+0j)^2 <= 0) {
																								if (78.9(-0.000939*x[0]+1.85e-07*x[1]-0.000939*x[2]+0.000316*x[3]+1.85e-07*x[4]+0.000316*x[5]-0.000939*x[6]+0.000316*x[7]-0.000939*x[8]+0.000316*x[9]+1)^2-0.0246(+0.455*x[0]+0.235*x[1]+0.455*x[2]+0.125*x[3]+0.235*x[4]+0.125*x[5]+0.455*x[6]+0.125*x[7]+0.455*x[8]+0.125*x[9]+0.00155)^2+0.0129(-0.197*x[0]+0.353*x[1]-0.197*x[2]+0.386*x[3]+0.353*x[4]+0.386*x[5]-0.197*x[6]+0.386*x[7]-0.197*x[8]+0.386*x[9]-0.00123)^2 <= 0) {
																									result[0] = 0.0f; result[1] = 0.0f;
																								}
																								else {
																									result[0] = 0.0f; result[1] = 0.0f;
																								}

																							}
																							else {
																								result[0] = 0.0f; result[1] = 0.0f;
																							}

																						}

																					}
																					else {
																						result[0] = 0.5f; result[1] = 0.0f;
																					}

																				}

																			}
																			else {
																				result[0] = 1.0f; result[1] = 1.0f;
																			}

																		}
																		else {
																			result[0] = 0.0f; result[1] = 0.5f;
																		}

																	}
																	else {
																		result[0] = 1.0f; result[1] = 0.0f;
																	}

																}
																else {
																	result[0] = 0.0f; result[1] = 1.0f;
																}

															}
															else {
																result[0] = 0.0f; result[1] = 0.0f;
															}

														}
														else {
															result[0] = 0.0f; result[1] = 0.0f;
														}

													}
													else {
														result[0] = 1.0f; result[1] = 0.5f;
													}

												}
												else {
													result[0] = 0.5f; result[1] = 1.0f;
												}

											}
											else {
												result[0] = 0.0f; result[1] = 0.0f;
											}

										}
										else {
											result[0] = 0.5f; result[1] = 0.0f;
										}

									}
									else {
										result[0] = 1.0f; result[1] = 0.0f;
									}

								}
								else {
									result[0] = 0.5f; result[1] = 0.5f;
								}

							}
							else {
								result[0] = 0.0f; result[1] = 0.0f;
							}

						}
						else {
							result[0] = 0.5f; result[1] = 0.0f;
						}

					}
					else {
						result[0] = 0.0f; result[1] = 1.0f;
					}

				}
				else {
					result[0] = 0.0f; result[1] = 0.5f;
				}

			}
			else {
				result[0] = 0.0f; result[1] = 0.0f;
			}

		}
		else {
			result[0] = 0.0f; result[1] = 0.0f;
		}

	}
	else {
		result[0] = 0.0f; result[1] = 0.5f;
	}

}