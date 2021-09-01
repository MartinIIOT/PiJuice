/*
 * fuel_gauge_lc709203f.h
 *
 *  Created on: 06.12.2016.
 *      Author: milan
 */

#ifndef FUELGAUGE_TABLES_H_
#define FUELGAUGE_TABLES_H_

const int16_t logTbl[256u] =
{
		-24562, -21803, -19743, -18097, -16728, -15554, -14528, -13616,
		-12795, -12050, -11366, -10735, -10149, -9602, -9090, -8607,
		-8151, -7720, -7310, -6919, -6547, -6190, -5848, -5520,
		-5205, -4901, -4608, -4326, -4052, -3788, -3532, -3283,
		-3042, -2808, -2580, -2358, -2142, -1932, -1727, -1527,
		-1332, -1141, -955, -773, -595, -420, -249, -82,
		81, 242, 400, 554, 706, 855, 1002,
		1145, 1287, 1426, 1562, 1697, 1829, 1959, 2087,
		2213, 2338, 2460, 2581, 2700, 2817, 2932, 3046,
		3158, 3269, 3378, 3486, 3593, 3698, 3802, 3904,
		4005, 4105, 4204, 4302, 4398, 4494, 4588, 4681,
		4773, 4864, 4954, 5043, 5132, 5219, 5305, 5391,
		5475, 5559, 5642, 5724, 5805, 5885, 5965, 6044,
		6122, 6199, 6276, 6352, 6427, 6501, 6575, 6648,
		6721, 6793, 6864, 6935, 7005, 7074, 7143, 7212,
		7279, 7347, 7413, 7479, 7545, 7610, 7675, 7739,
		7802, 6487, 7188, 7834, 8432, 8990, 9513, 10004, 10467,
		10905, 11322, 11718, 12096, 12457, 12803, 13135, 13454,
		13761, 14057, 14343, 14619, 14886, 15144, 15395, 15638,
		15875, 16104, 16328, 16545, 16757, 16964, 17165, 17362,
		17554, 17741, 17925, 18104, 18280, 18451, 18620, 18785,
		18947, 19105, 19261, 19413, 19563, 19710, 19855, 19997,
		20137, 20274, 20409, 20542, 20673, 20802, 20928, 21053,
		21176, 21297, 21416, 21534, 21650, 21764, 21877, 21988,
		22098, 22207, 22313, 22419, 22523, 22626, 22728, 22828,
		22927, 23025, 23122, 23217, 23312, 23406, 23498, 23589,
		23680, 23769, 23858, 23945, 24032, 24117, 24202, 24286,
		24369, 24451, 24533, 24613, 24693, 24772, 24851, 24928,
		25005, 25081, 25157, 25231, 25305, 25379, 25452, 25524,
		25595, 25666, 25736, 25806, 25875, 25944, 26011, 26079,
		26146, 26212, 26278, 26343, 26408, 26472, 26536, 26599,
		26661, 26724, 26785, 26847, 26908, 26968, 27028, 27088
};

const int16_t ocvSocTableNormLipo[256u] =
{
		4269,3804,3447,3141,2877,2641,2435,2247,
		2075,1923,1788,1669,1573,1497,1441,1395,
		1359,1331,1306,1285,1265,1248,1233,1219,
		1205,1193,1181,1169,1155,1138,1121,1101,
		1078,1056,1033,1012,993,973,954,937,
		919,901,884,867,851,833,818,802,
		788,773,758,747,734,721,711,699,
		687,676,665,654,642,632,622,609,
		600,589,578,568,557,547,536,526,
		517,507,499,489,481,472,462,454,
		446,438,430,420,412,404,396,388,
		378,370,362,354,345,338,328,320,
		310,302,293,284,277,268,260,250,
		241,232,223,213,204,195,185,175,
		163,155,144,135,123,113,103,92,
		82,69,59,47,36,23,12,0,
		-11,-25,-37,-49,-63,-76,-89,-103,
		-118,-132,-147,-161,-177,-192,-207,-224,
		-239,-256,-273,-291,-308,-327,-344,-363,
		-382,-401,-420,-441,-460,-481,-501,-523,
		-543,-565,-589,-610,-632,-656,-678,-702,
		-724,-748,-771,-796,-819,-842,-865,-889,
		-912,-936,-960,-984,-1008,-1031,-1056,-1079,
		-1102,-1127,-1150,-1175,-1199,-1224,-1247,-1273,
		-1297,-1323,-1347,-1371,-1396,-1421,-1446,-1471,
		-1499,-1525,-1551,-1577,-1604,-1632,-1658,-1685,
		-1712,-1740,-1768,-1796,-1824,-1851,-1880,-1909,
		-1938,-1967,-1995,-2024,-2053,-2082,-2112,-2142,
		-2173,-2203,-2234,-2264,-2296,-2327,-2358,-2388,
		-2420,-2452,-2484,-2515,-2548,-2580,-2614,-2646,
		-2679,-2712,-2747,-2780,-2814,-2850,-2884,-2920,
		-2956,-2993,-3031,-3069,-3110,-3154,-3200,-3256
};

const int16_t ocvSocTableNormLifepo4[256u] =
{
		28097,26548,25030,23690,22426,21239,20117,19105,
		18094,17174,16307,15467,14648,13910,13247,12597,
		11996,11441,10945,10475,10040,9663,9293,8975,
		8686,8399,8155,7934,7715,7522,7342,7178,
		7007,6856,6700,6554,6403,6253,6109,5967,
		5814,5677,5539,5413,5285,5172,5054,4949,
		4832,4730,4629,4528,4428,4330,4227,4137,
		4045,3947,3859,3774,3695,3618,3532,3448,
		3371,3297,3221,3152,3076,3007,2946,2880,
		2803,2741,2676,2608,2535,2475,2401,2326,
		2259,2192,2124,2045,1977,1910,1829,1763,
		1690,1624,1554,1485,1417,1358,1293,1228,
		1171,1114,1058,992,941,881,829,774,
		728,684,634,585,544,502,461,418,
		389,353,322,286,255,229,197,172,
		145,122,101,76,51,33,12,0,
		-19,-39,-64,-78,-97,-107,-127,-145,
		-158,-171,-191,-209,-224,-233,-248,-259,
		-272,-290,-306,-323,-334,-352,-353,-373,
		-384,-401,-410,-426,-448,-461,-477,-494,
		-503,-521,-541,-552,-573,-586,-609,-628,
		-643,-668,-688,-710,-731,-753,-775,-798,
		-827,-850,-882,-913,-942,-979,-1006,-1042,
		-1080,-1113,-1149,-1185,-1225,-1264,-1303,-1339,
		-1379,-1424,-1471,-1517,-1546,-1593,-1628,-1665,
		-1703,-1745,-1788,-1823,-1861,-1887,-1926,-1958,
		-1989,-2023,-2060,-2089,-2115,-2140,-2169,-2192,
		-2220,-2237,-2261,-2284,-2311,-2334,-2343,-2368,
		-2396,-2410,-2428,-2447,-2464,-2481,-2497,-2519,
		-2536,-2556,-2578,-2595,-2616,-2635,-2662,-2684,
		-2705,-2753,-2765,-2795,-2836,-2870,-2908,-2961,
		-3014,-3082,-3165,-3277,-3432,-3694,-4197,-5466
};

#endif /* FUELGAUGE_TABLES_H_ */