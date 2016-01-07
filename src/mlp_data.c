#include "mlp.h"

/* RMS error was 0.230027, seed was 1452289367 */
/* 0.009100 0.069938 (0.230027 0.230027) 1.24058e-07 5543 */

static const float weights[450] = {

/* hidden layer */
-1.20927f, -0.0275523f, 0.0304442f, -0.071791f, -0.0897356f, 
0.100996f, -0.0492634f, 0.070213f, 0.0187071f, 0.0042668f, 
0.0644589f, -0.10967f, -0.119688f, -0.00888386f, 0.170952f, 
0.174562f, -0.265435f, -0.0635892f, -0.284755f, -1.06453f, 
0.202855f, 2.31084f, -2.763f, -0.420894f, 0.698811f, 
6.46418f, 0.0662341f, 0.0758173f, 0.0511722f, 0.0426484f, 
0.115711f, -0.263815f, -0.0113386f, -0.189737f, -0.0929912f, 
-0.287827f, 0.0925463f, 0.0286792f, -0.0199793f, -0.193071f, 
0.258586f, 0.018504f, 0.116125f, 0.099269f, -0.00781962f, 
-0.266017f, 0.283733f, 10.5488f, -0.658286f, 0.836758f, 
13.1168f, -5.02553f, -1.0969f, -0.0738116f, 0.0204736f, 
0.0110775f, -0.00198985f, 0.00426824f, 0.148998f, 0.0755275f, 
0.112213f, -0.0518501f, 0.028398f, 0.0240943f, -0.0503666f, 
-0.149506f, -0.133575f, -0.137328f, 0.116275f, 0.238077f, 
0.080265f, 0.0387349f, 0.09185f, 4.04867f, 3.2435f, 
-0.7155f, 8.14792f, -29.8969f, 1.1575f, -0.124794f, 
0.0226943f, -0.0470538f, -0.0334476f, 0.0360859f, 0.0447789f, 
-0.00258532f, -0.0192054f, -0.113082f, 0.109513f, -0.0437787f, 
0.0382349f, -0.00994462f, -0.155653f, 0.171922f, -0.222151f, 
-0.523565f, -0.0454432f, -0.556888f, 0.761537f, -2.70075f, 
-0.883015f, 0.887168f, 0.746329f, -0.363477f, 0.360424f, 
0.034755f, -0.015404f, 0.00688472f, -0.00949269f, 0.0625642f, 
-0.050711f, 0.0370223f, 0.0149561f, 0.060385f, -0.0709806f, 
-0.036509f, 0.099007f, -0.0397276f, 0.285237f, 0.127836f, 
-0.15154f, 0.265848f, -0.0832318f, 0.0520659f, 0.897805f, 
0.439215f, -3.00803f, 1.93755f, -0.408725f, 0.300142f, 
-1.42001f, 0.118794f, -0.04621f, 0.050757f, -0.0239654f, 
-0.0629488f, -0.0083243f, -0.108989f, -0.0326831f, 0.104277f, 
-0.0667274f, 0.0475941f, 0.069182f, -0.0574944f, -0.137823f, 
-0.206978f, -0.162035f, -0.208444f, 0.141751f, -0.289377f, 
-0.7875f, 0.0911f, 0.174999f, -2.03406f, 3.06743f, 
1.22255f, 2.10659f, 0.0779022f, -0.220946f, 0.137124f, 
-0.0625512f, -0.073468f, 0.174861f, -0.139417f, 0.0967417f, 
0.0830658f, -0.223662f, 0.103016f, -0.102317f, 0.225611f, 
0.154375f, 0.187856f, -0.00878193f, 0.128648f, -0.371477f, 
-0.479037f, 0.156541f, 1.10304f, -1.26162f, 0.086939f, 
-0.143269f, 2.18318f, -2.88831f, 0.101126f, -0.308315f, 
0.222068f, -0.227709f, -0.00855236f, 0.0107035f, 0.00774349f, 
-0.0185316f, 0.0306039f, -0.233612f, 0.0807309f, -0.029933f, 
0.151942f, -0.267724f, 0.0484763f, 0.132192f, -0.230059f, 
0.357879f, 0.075414f, 0.110637f, -1.27818f, 3.3101f, 
0.831064f, -0.212367f, -20.704f, -1.1492f, 0.0312941f, 
-0.0208507f, -0.00804196f, 0.0110407f, 0.027599f, 0.00193594f, 
-0.0135057f, -0.00614977f, 0.0505432f, -0.0108098f, 0.000826042f, 
-0.0243765f, -0.323055f, 0.0682748f, -0.55873f, -0.103042f, 
0.174935f, -0.126558f, -0.104518f, 0.422479f, -0.0683178f, 
-1.44811f, 0.702109f, 0.712138f, -0.420112f, 2.59746f, 
-0.0297689f, -0.0453044f, -0.0330312f, -0.0344518f, -0.0260442f, 
-0.0610515f, 0.0916816f, 0.0256295f, -0.105187f, 0.0771212f, 
-0.0898792f, -0.186163f, -0.321019f, -0.225689f, 0.175825f, 
0.252939f, 0.738898f, 2.41919f, 0.114505f, -0.314026f, 
0.607983f, 1.73201f, -2.09609f, -0.609339f, 1.18997f, 
0.113871f, -0.177673f, -0.0785783f, -0.348033f, -0.0949274f, 
-0.0191062f, 0.335823f, -0.0578655f, 0.131259f, -0.118687f, 
-0.132123f, -0.239624f, 0.000738732f, -0.185936f, -0.13077f, 
-0.436439f, -0.141664f, 0.0353391f, -0.0536557f, -0.0964537f, 
0.221853f, 1.94264f, -1.78544f, 3.8254f, 3.74598f, 
2.37071f, -1.42709f, 0.0463179f, -0.0568602f, 0.0529534f, 
-0.103245f, -0.340972f, 0.101934f, -0.810811f, 0.176158f, 
0.469658f, 0.0248864f, -0.10734f, -0.143827f, -0.0457131f, 
0.779219f, -0.142152f, 0.0394297f, 0.160772f, -0.707623f, 
-0.608236f, 1.07106f, -1.27037f, 2.27722f, 6.3688f, 
0.519837f, -3.33262f, -0.126443f, -0.0943922f, 0.0265837f, 
0.0620709f, 0.0113266f, -0.255811f, -0.0735781f, -0.0638952f, 
-0.09543f, -0.204965f, 0.00454999f, 0.0554974f, -0.16251f, 
-0.573836f, 0.258764f, 0.19895f, 0.0219289f, -0.376757f, 
-0.508578f, -0.0767061f, -0.654512f, 4.48901f, 3.38949f, 
-2.34533f, -11.0766f, 4.35799f, 1.66794f, -0.0513934f, 
-0.0685787f, -0.0112154f, 0.000464661f, -0.234848f, -0.338596f, 
-0.142242f, -0.167476f, -0.140324f, -0.104829f, -0.104195f, 
0.0110351f, -0.112668f, 0.0872292f, -0.170777f, -0.0876985f, 
0.123348f, -0.156758f, 0.199038f, -0.056107f, 0.899269f, 
0.0820197f, -1.295f, 0.0295294f, 2.27577f, -0.940993f, 
-0.0100104f, -0.111541f, -0.132193f, -0.11037f, 0.0371375f, 
-0.0180172f, -0.0105591f, 0.0197043f, 0.04099f, -0.0538671f, 
-0.102347f, -0.0470742f, 0.178034f, -0.267772f, -0.105789f, 
-0.105376f, 0.0623262f, -0.042906f, 0.176528f, -0.160076f, 
-2.28483f, -1.92619f, 0.218149f, 9.67107f, 3.30399f, 
-1.75951f, 0.129671f, 0.118305f, 0.140766f, 0.0678099f, 
0.00313175f, -0.0144533f, -0.0310217f, -0.0245139f, 0.136948f, 
0.150137f, 0.112326f, -0.0755033f, -0.280984f, -0.249342f, 
-0.681657f, 0.0315246f, 0.294968f, 0.0407062f, 0.282759f, 
-0.344185f, -7.32828f, -0.220036f, -0.560418f, -1.87191f, 
-7.10132f, 
/* output layer */
8.55144, 2.0822, 0.240592, 1.26638, 0.0309585, 
-1.09841, 0.861549, -1.53704, 1.07356, 4.39194, 
-2.60476, 0.375094, 0.122941, 0.00326393, 0.777163, 
-2.03171, -0.944556, 4.02958, -0.260741, 0.556385, 
-0.220568, -1.77121, -0.858706, -1.52023, -0.784162, 
0.345948, -0.0488489, -0.323381, -0.752573, 0.517346, 
0.876475, -1.44056, -0.382276, -1.55409, };

static const int topo[3] = {25, 16, 2};

const MLP net = {
	3,
	topo,
	weights
};
