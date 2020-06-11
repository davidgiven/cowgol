#include "cowgol.h"
static i8 workspace[0x01ac];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+3304 length ws+0
void f6_ExitWithError(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+3400 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+3400) = p10; /*buf */
	*(i1*)(intptr_t)(ws+3408) = p9; /*byte */
	*(i8*)(intptr_t)(ws+3416) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3400) 
,  
*(i1*)(intptr_t)(ws+3408) 
,  
*(i8*)(intptr_t)(ws+3416) 
); 


endsub:;
}

// print_char workspace at ws+3352 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+3352) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+3352) 
); 


endsub:;
}

// print workspace at ws+3336 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+3336) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+3336);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+3344);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+3344);
	i1 v29 = *(i1*)(intptr_t)v28;

void f8_print_char(i1 /* c */);
	f8_print_char(v29);

	i8 v30 = (i8)(intptr_t)(ws+3336);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+3304 length ws+0
void f12_print_nl(void) {

	i1 v34 = (i1)+10;

void f8_print_char(i1 /* c */);
	f8_print_char(v34);

endsub:;
}

// UIToA workspace at ws+3344 length ws+49
void f13_UIToA(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+3344) = p38; /*value */
	*(i1*)(intptr_t)(ws+3348) = p37; /*base */
	*(i8*)(intptr_t)(ws+3352) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+3352);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+3344);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3348);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+3344);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+3348);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+3344);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+3368);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+3368);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+3368);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+3368);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+3360);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+3360);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+3344);
	i4 v77 = *(i4*)(intptr_t)v76;
	i4 v78 = (i4)+0;
	if (v77==v78) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v79 = (i8)(intptr_t)(ws+3352);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+3360);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+3376);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+3384);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+3376);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+3384);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+3376);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+3392);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+3384);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+3376);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+3384);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+3360);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+3360);
}

// print_i32 workspace at ws+3312 length ws+24
void f15_print_i32(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+3312) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+3312);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+3316);

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v145;
	f13_UIToA(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+3316);

void f11_print(i8 /* ptr */);
	f11_print(v147);

endsub:;
}

// print_i16 workspace at ws+3304 length ws+2
void f16_print_i16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+3304) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+3304);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;

void f15_print_i32(i4 /* value */);
	f15_print_i32(v151);

endsub:;
}

// print_i8 workspace at ws+3248 length ws+1
void f17_print_i8(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+3248) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+3248);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;

void f15_print_i32(i4 /* value */);
	f15_print_i32(v155);

endsub:;
}

// print_hex_i8 workspace at ws+3216 length ws+3
void f18_print_hex_i8(i1 p156 /* value */) {
	*(i1*)(intptr_t)(ws+3216) = p156; /*value */

	i1 v157 = (i1)+2;
	i8 v158 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v158 = v157;

c02_001f:;

	i8 v159 = (i8)(intptr_t)(ws+3216);
	i1 v160 = *(i1*)(intptr_t)v159;
	i1 v161 = (i1)+4;
	i1 v162 = ((i1)v160)>>v161;
	i8 v163 = (i8)(intptr_t)(ws+3218);
	*(i1*)(intptr_t)v163 = v162;

	i8 v164 = (i8)(intptr_t)(ws+3218);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+10;
	if (v165<v166) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v167 = (i8)(intptr_t)(ws+3218);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = v168+(+48);
	i8 v170 = (i8)(intptr_t)(ws+3218);
	*(i1*)(intptr_t)v170 = v169;

	goto c02_0021;

c02_0025:;

	i8 v171 = (i8)(intptr_t)(ws+3218);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = v172+(+87);
	i8 v174 = (i8)(intptr_t)(ws+3218);
	*(i1*)(intptr_t)v174 = v173;

c02_0021:;

	i8 v175 = (i8)(intptr_t)(ws+3218);
	i1 v176 = *(i1*)(intptr_t)v175;

void f8_print_char(i1 /* c */);
	f8_print_char(v176);

	i8 v177 = (i8)(intptr_t)(ws+3216);
	i1 v178 = *(i1*)(intptr_t)v177;
	i1 v179 = (i1)+4;
	i1 v180 = ((i1)v178)<<v179;
	i8 v181 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v181 = v180;

	i8 v182 = (i8)(intptr_t)(ws+3217);
	i1 v183 = *(i1*)(intptr_t)v182;
	i1 v184 = v183+(-1);
	i8 v185 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v185 = v184;

	i8 v186 = (i8)(intptr_t)(ws+3217);
	i1 v187 = *(i1*)(intptr_t)v186;
	i1 v188 = (i1)+0;
	if (v187==v188) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}

// print_hex_i16 workspace at ws+3200 length ws+2
void f19_print_hex_i16(i2 p189 /* value */) {
	*(i2*)(intptr_t)(ws+3200) = p189; /*value */

	i8 v190 = (i8)(intptr_t)(ws+3200);
	i2 v191 = *(i2*)(intptr_t)v190;
	i1 v192 = (i1)+8;
	i2 v193 = ((i2)v191)>>v192;
	i1 v194 = v193;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v194);

	i8 v195 = (i8)(intptr_t)(ws+3200);
	i2 v196 = *(i2*)(intptr_t)v195;
	i1 v197 = v196;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v197);

endsub:;
}

// print_hex_i32 workspace at ws+3208 length ws+4
void f20_print_hex_i32(i4 p198 /* value */) {
	*(i4*)(intptr_t)(ws+3208) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+3208);
	i4 v200 = *(i4*)(intptr_t)v199;
	i1 v201 = (i1)+24;
	i4 v202 = ((i4)v200)>>v201;
	i1 v203 = v202;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v203);

	i8 v204 = (i8)(intptr_t)(ws+3208);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v208);

	i8 v209 = (i8)(intptr_t)(ws+3208);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v213);

	i8 v214 = (i8)(intptr_t)(ws+3208);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v216);

endsub:;
}

// MemZero workspace at ws+3208 length ws+16
void f22_MemZero(i8 p321 /* size */, i8 p322 /* ptr */) {
	*(i8*)(intptr_t)(ws+3208) = p322; /*ptr */
	*(i8*)(intptr_t)(ws+3216) = p321; /*size */

	i8 v323 = (i8)(intptr_t)(ws+3208);
	i8 v324 = *(i8*)(intptr_t)v323;
	i1 v325 = (i1)+0;
	i8 v326 = (i8)(intptr_t)(ws+3216);
	i8 v327 = *(i8*)(intptr_t)v326;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v327, v325, v324);

endsub:;
}

// ArgvInit workspace at ws+2888 length ws+0
void f23_ArgvInit(void) {

	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 


	i8 v328 = (i8)(intptr_t)(ws+16);
	i8 v329 = *(i8*)(intptr_t)v328;
	i8 v330 = v329+(+8);
	i8 v331 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v331 = v330;

endsub:;
}

// ArgvNext workspace at ws+2888 length ws+8
void f24_ArgvNext(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+2888);
	i8 v343 = *(i8*)(intptr_t)v342;
	i8 v344 = (i8)+0;
	if (v343==v344) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v345 = (i8)+0;
	i8 v346 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v346 = v345;

	goto c02_0054;

c02_0058:;

	i8 v347 = (i8)(intptr_t)(ws+16);
	i8 v348 = *(i8*)(intptr_t)v347;
	i8 v349 = v348+(+8);
	i8 v350 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v350 = v349;

c02_0054:;

endsub:;
	*p332 = *(i8*)(intptr_t)(ws+2888);
}

// StrCmp workspace at ws+3112 length ws+17
void f25_StrCmp(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+3112) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+3120) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+3112);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+3120);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+3128);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+3128);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+3112);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+3112);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+3120);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+3128);
}

// ToLower workspace at ws+2904 length ws+2
void f26_ToLower(i1* p377 /* cc */, i1 p378 /* c */) {
	*(i1*)(intptr_t)(ws+2904) = p378; /*c */

	i8 v379 = (i8)(intptr_t)(ws+2904);
	i1 v380 = *(i1*)(intptr_t)v379;
	i1 v381 = (i1)+65;
	if (v380<v381) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v382 = (i1)+90;
	i8 v383 = (i8)(intptr_t)(ws+2904);
	i1 v384 = *(i1*)(intptr_t)v383;
	if (v382<v384) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v385 = (i8)(intptr_t)(ws+2904);
	i1 v386 = *(i1*)(intptr_t)v385;
	i1 v387 = v386|(+32);
	i8 v388 = (i8)(intptr_t)(ws+2905);
	*(i1*)(intptr_t)v388 = v387;

	goto c02_0063;

c02_0069:;

	i8 v389 = (i8)(intptr_t)(ws+2904);
	i1 v390 = *(i1*)(intptr_t)v389;
	i8 v391 = (i8)(intptr_t)(ws+2905);
	*(i1*)(intptr_t)v391 = v390;

c02_0063:;

endsub:;
	*p377 = *(i1*)(intptr_t)(ws+2905);
}

// StrLen workspace at ws+3096 length ws+25
void f28_StrLen(i8* p420 /* size */, i8 p421 /* s */) {
	*(i8*)(intptr_t)(ws+3096) = p421; /*s */

	i8 v422 = (i8)(intptr_t)(ws+3096);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v424 = v423;

c02_0075:;

	i8 v425 = (i8)(intptr_t)(ws+3112);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i8 v428 = (i8)(intptr_t)(ws+3120);
	*(i1*)(intptr_t)v428 = v427;

	i8 v429 = (i8)(intptr_t)(ws+3120);
	i1 v430 = *(i1*)(intptr_t)v429;
	i1 v431 = (i1)+0;
	if (v430==v431) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v432 = (i8)(intptr_t)(ws+3112);
	i8 v433 = *(i8*)(intptr_t)v432;
	i8 v434 = v433+(+1);
	i8 v435 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v435 = v434;

	goto c02_0075;

c02_0076:;

	i8 v436 = (i8)(intptr_t)(ws+3112);
	i8 v437 = *(i8*)(intptr_t)v436;
	i8 v438 = (i8)(intptr_t)(ws+3096);
	i8 v439 = *(i8*)(intptr_t)v438;
	i8 v440 = v437-v439;
	i8 v441 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v441 = v440;

endsub:;
	*p420 = *(i8*)(intptr_t)(ws+3104);
}

// MemCopy workspace at ws+3288 length ws+24
void f30_MemCopy(i8 p463 /* dest */, i8 p464 /* size */, i8 p465 /* src */) {
	*(i8*)(intptr_t)(ws+3288) = p465; /*src */
	*(i8*)(intptr_t)(ws+3296) = p464; /*size */
	*(i8*)(intptr_t)(ws+3304) = p463; /*dest */

c02_0085:;

	i8 v466 = (i8)(intptr_t)(ws+3296);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)+0;
	if (v467==v468) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v469 = (i8)(intptr_t)(ws+3288);
	i8 v470 = *(i8*)(intptr_t)v469;
	i1 v471 = *(i1*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+3304);
	i8 v473 = *(i8*)(intptr_t)v472;
	*(i1*)(intptr_t)v473 = v471;

	i8 v474 = (i8)(intptr_t)(ws+3304);
	i8 v475 = *(i8*)(intptr_t)v474;
	i8 v476 = v475+(+1);
	i8 v477 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v477 = v476;

	i8 v478 = (i8)(intptr_t)(ws+3288);
	i8 v479 = *(i8*)(intptr_t)v478;
	i8 v480 = v479+(+1);
	i8 v481 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v481 = v480;

	i8 v482 = (i8)(intptr_t)(ws+3296);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(-1);
	i8 v485 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v485 = v484;

	goto c02_0085;

c02_0088:;

endsub:;
}

// Alloc workspace at ws+3360 length ws+16
void f31_Alloc(i8* p486 /* block */, i8 p487 /* length */) {
	*(i8*)(intptr_t)(ws+3360) = p487; /*length */

	
*(i8*)(intptr_t)(ws+3368) 
=(i8)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3360) 
); 


endsub:;
	*p486 = *(i8*)(intptr_t)(ws+3368);
}

// Free workspace at ws+3328 length ws+8
void f32_Free(i8 p488 /* block */) {
	*(i8*)(intptr_t)(ws+3328) = p488; /*block */

	
free((void*) 
*(i8*)(intptr_t)(ws+3328) 
); 


endsub:;
}

// StrDup workspace at ws+2896 length ws+16
void f33_StrDup(i8* p489 /* sout */, i8 p490 /* s */) {
	*(i8*)(intptr_t)(ws+2896) = p490; /*s */

	
*(i8*)(intptr_t)(ws+2904) 
=(i8)strdup((const char*) 
*(i8*)(intptr_t)(ws+2896) 
); 


endsub:;
	*p489 = *(i8*)(intptr_t)(ws+2904);
}

// GetFreeMemory workspace at ws+2880 length ws+8
void f35_GetFreeMemory(i8* p491 /* i */) {

	i8 v492 = (i8)+0;
	i8 v493 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v493 = v492;

endsub:;
	*p491 = *(i8*)(intptr_t)(ws+2880);
}

// fcb_i_blockin workspace at ws+3368 length ws+28
void f36_fcb_i_blockin(i8 p494 /* fcb */) {
	*(i8*)(intptr_t)(ws+3368) = p494; /*fcb */

	i8 v495 = (i8)(intptr_t)(ws+3368);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+12);
	i1 v498 = (i1)+0;
	i8 v499 = (i8)+512;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v499, v498, v497);

	i8 v500 = (i8)(intptr_t)(ws+3368);
	i8 v501 = *(i8*)(intptr_t)v500;
	i4 v502 = *(i4*)(intptr_t)v501;
	i8 v503 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v503 = v502;

	i8 v504 = (i8)(intptr_t)(ws+3368);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+12);
	i8 v507 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+3368);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+8);
	i4 v511 = *(i4*)(intptr_t)v510;
	i1 v512 = (i1)+9;
	i4 v513 = ((i4)v511)<<v512;
	i8 v514 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v514 = v513;

	
pread( 
*(i4*)(intptr_t)(ws+3376) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3384) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3392) 
); 


	i1 v515 = (i1)+0;
	i8 v516 = (i8)(intptr_t)(ws+3368);
	i8 v517 = *(i8*)(intptr_t)v516;
	i8 v518 = v517+(+6);
	*(i1*)(intptr_t)v518 = v515;

endsub:;
}

// fcb_i_blockout workspace at ws+3368 length ws+28
void f37_fcb_i_blockout(i8 p519 /* fcb */) {
	*(i8*)(intptr_t)(ws+3368) = p519; /*fcb */

	i8 v520 = (i8)(intptr_t)(ws+3368);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = v521+(+6);
	i1 v523 = *(i1*)(intptr_t)v522;
	i1 v524 = (i1)+0;
	if (v523==v524) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v525 = (i8)(intptr_t)(ws+3368);
	i8 v526 = *(i8*)(intptr_t)v525;
	i4 v527 = *(i4*)(intptr_t)v526;
	i8 v528 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v528 = v527;

	i8 v529 = (i8)(intptr_t)(ws+3368);
	i8 v530 = *(i8*)(intptr_t)v529;
	i8 v531 = v530+(+12);
	i8 v532 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v532 = v531;

	i8 v533 = (i8)(intptr_t)(ws+3368);
	i8 v534 = *(i8*)(intptr_t)v533;
	i8 v535 = v534+(+8);
	i4 v536 = *(i4*)(intptr_t)v535;
	i1 v537 = (i1)+9;
	i4 v538 = ((i4)v536)<<v537;
	i8 v539 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v539 = v538;

	
pwrite( 
*(i4*)(intptr_t)(ws+3376) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3384) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3392) 
); 


	i1 v540 = (i1)+0;
	i8 v541 = (i8)(intptr_t)(ws+3368);
	i8 v542 = *(i8*)(intptr_t)v541;
	i8 v543 = v542+(+6);
	*(i1*)(intptr_t)v543 = v540;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}

// fcb_i_changeblock workspace at ws+3352 length ws+12
void f38_fcb_i_changeblock(i4 p544 /* newblock */, i8 p545 /* fcb */) {
	*(i8*)(intptr_t)(ws+3352) = p545; /*fcb */
	*(i4*)(intptr_t)(ws+3360) = p544; /*newblock */

	i8 v546 = (i8)(intptr_t)(ws+3360);
	i4 v547 = *(i4*)(intptr_t)v546;
	i8 v548 = (i8)(intptr_t)(ws+3352);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+8);
	i4 v551 = *(i4*)(intptr_t)v550;
	if (v547==v551) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v552 = (i8)(intptr_t)(ws+3352);
	i8 v553 = *(i8*)(intptr_t)v552;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v553);

	i8 v554 = (i8)(intptr_t)(ws+3360);
	i4 v555 = *(i4*)(intptr_t)v554;
	i8 v556 = (i8)(intptr_t)(ws+3352);
	i8 v557 = *(i8*)(intptr_t)v556;
	i8 v558 = v557+(+8);
	*(i4*)(intptr_t)v558 = v555;

	i8 v559 = (i8)(intptr_t)(ws+3352);
	i8 v560 = *(i8*)(intptr_t)v559;

void f36_fcb_i_blockin(i8 /* fcb */);
	f36_fcb_i_blockin(v560);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}

// fcb_i_open workspace at ws+2984 length ws+28
void f39_fcb_i_open(i1* p561 /* errno */, i4 p562 /* flags */, i8 p563 /* filename */, i8 p564 /* fcb */) {
	*(i8*)(intptr_t)(ws+2984) = p564; /*fcb */
	*(i8*)(intptr_t)(ws+2992) = p563; /*filename */
	*(i4*)(intptr_t)(ws+3000) = p562; /*flags */

	i8 v565 = (i8)(intptr_t)(ws+2984);
	i8 v566 = *(i8*)(intptr_t)v565;
	i1 v567 = (i1)+0;
	i8 v568 = (i8)+524;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v568, v567, v566);

	i2 v569 = (i2)+511;
	i8 v570 = (i8)(intptr_t)(ws+2984);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = v571+(+4);
	*(i2*)(intptr_t)v572 = v569;

	i4 v573 = (i4)-1;
	i8 v574 = (i8)(intptr_t)(ws+2984);
	i8 v575 = *(i8*)(intptr_t)v574;
	i8 v576 = v575+(+8);
	*(i4*)(intptr_t)v576 = v573;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3008) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+2992) 
,  
*(i4*)(intptr_t)(ws+3000) 
,  
(+438)
); 


	i8 v577 = (i8)(intptr_t)(ws+3008);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+2984);
	i8 v580 = *(i8*)(intptr_t)v579;
	*(i4*)(intptr_t)v580 = v578;

	i8 v581 = (i8)(intptr_t)(ws+3008);
	i4 v582 = *(i4*)(intptr_t)v581;
	i4 v583 = (i4)+0;
	if ((s4)v582<(s4)v583) goto c02_0096; else goto c02_0097;

c02_0096:;

	
*(i1*)(intptr_t)(ws+3004) 
 = errno; 


	goto c02_0093;

c02_0097:;

	i1 v584 = (i1)+0;
	i8 v585 = (i8)(intptr_t)(ws+3004);
	*(i1*)(intptr_t)v585 = v584;

c02_0093:;

endsub:;
	*p561 = *(i1*)(intptr_t)(ws+3004);
}

// FCBOpenIn workspace at ws+2960 length ws+17
void f40_FCBOpenIn(i1* p586 /* errno */, i8 p587 /* filename */, i8 p588 /* fcb */) {
	*(i8*)(intptr_t)(ws+2960) = p588; /*fcb */
	*(i8*)(intptr_t)(ws+2968) = p587; /*filename */

	i8 v589 = (i8)(intptr_t)(ws+2960);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+2968);
	i8 v592 = *(i8*)(intptr_t)v591;
	i4 v593 = (i4)+0;

void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v594;
	f39_fcb_i_open(&v594, v593, v592, v590);
	i8 v595 = (i8)(intptr_t)(ws+2976);
	*(i1*)(intptr_t)v595 = v594;

endsub:;
	*p586 = *(i1*)(intptr_t)(ws+2976);
}

// FCBOpenOut workspace at ws+2888 length ws+17
void f42_FCBOpenOut(i1* p606 /* errno */, i8 p607 /* filename */, i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+2888) = p608; /*fcb */
	*(i8*)(intptr_t)(ws+2896) = p607; /*filename */

	i8 v609 = (i8)(intptr_t)(ws+2888);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = (i8)(intptr_t)(ws+2896);
	i8 v612 = *(i8*)(intptr_t)v611;
	i4 v613 = (i4)+578;

void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v614;
	f39_fcb_i_open(&v614, v613, v612, v610);
	i8 v615 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v615 = v614;

endsub:;
	*p606 = *(i1*)(intptr_t)(ws+2904);
}

// FCBClose workspace at ws+2952 length ws+16
void f43_FCBClose(i1* p616 /* errno */, i8 p617 /* fcb */) {
	*(i8*)(intptr_t)(ws+2952) = p617; /*fcb */

	i8 v618 = (i8)(intptr_t)(ws+2952);
	i8 v619 = *(i8*)(intptr_t)v618;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v619);

	i8 v620 = (i8)(intptr_t)(ws+2952);
	i8 v621 = *(i8*)(intptr_t)v620;
	i4 v622 = *(i4*)(intptr_t)v621;
	i8 v623 = (i8)(intptr_t)(ws+2964);
	*(i4*)(intptr_t)v623 = v622;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+2964) 
); 


	
*(i1*)(intptr_t)(ws+2960) 
 = errno; 


endsub:;
	*p616 = *(i1*)(intptr_t)(ws+2960);
}

// FCBSeek workspace at ws+2960 length ws+18
void f44_FCBSeek(i4 p624 /* pos */, i8 p625 /* fcb */) {
	*(i8*)(intptr_t)(ws+2960) = p625; /*fcb */
	*(i4*)(intptr_t)(ws+2968) = p624; /*pos */

	i8 v626 = (i8)(intptr_t)(ws+2968);
	i4 v627 = *(i4*)(intptr_t)v626;
	i4 v628 = v627+(-1);
	i8 v629 = (i8)(intptr_t)(ws+2968);
	*(i4*)(intptr_t)v629 = v628;

	i8 v630 = (i8)(intptr_t)(ws+2968);
	i4 v631 = *(i4*)(intptr_t)v630;
	i1 v632 = (i1)+9;
	i4 v633 = ((i4)v631)>>v632;
	i8 v634 = (i8)(intptr_t)(ws+2972);
	*(i4*)(intptr_t)v634 = v633;

	i8 v635 = (i8)(intptr_t)(ws+2968);
	i4 v636 = *(i4*)(intptr_t)v635;
	i2 v637 = v636;
	i2 v638 = v637&(+511);
	i8 v639 = (i8)(intptr_t)(ws+2976);
	*(i2*)(intptr_t)v639 = v638;

	i8 v640 = (i8)(intptr_t)(ws+2960);
	i8 v641 = *(i8*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+2972);
	i4 v643 = *(i4*)(intptr_t)v642;

void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v643, v641);

	i8 v644 = (i8)(intptr_t)(ws+2976);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+2960);
	i8 v647 = *(i8*)(intptr_t)v646;
	i8 v648 = v647+(+4);
	*(i2*)(intptr_t)v648 = v645;

endsub:;
}

// FCBPos workspace at ws+2952 length ws+12
void f45_FCBPos(i4* p649 /* pos */, i8 p650 /* fcb */) {
	*(i8*)(intptr_t)(ws+2952) = p650; /*fcb */

	i8 v651 = (i8)(intptr_t)(ws+2952);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+8);
	i4 v654 = *(i4*)(intptr_t)v653;
	i1 v655 = (i1)+9;
	i4 v656 = ((i4)v654)<<v655;
	i8 v657 = (i8)(intptr_t)(ws+2952);
	i8 v658 = *(i8*)(intptr_t)v657;
	i8 v659 = v658+(+4);
	i2 v660 = *(i2*)(intptr_t)v659;
	i4 v661 = v660;
	i4 v662 = v656|v661;
	i4 v663 = v662+(+1);
	i8 v664 = (i8)(intptr_t)(ws+2960);
	*(i4*)(intptr_t)v664 = v663;

endsub:;
	*p649 = *(i4*)(intptr_t)(ws+2960);
}

// fcb_i_nextchar workspace at ws+3344 length ws+8
void f47_fcb_i_nextchar(i8 p678 /* fcb */) {
	*(i8*)(intptr_t)(ws+3344) = p678; /*fcb */

	i8 v679 = (i8)(intptr_t)(ws+3344);
	i8 v680 = *(i8*)(intptr_t)v679;
	i8 v681 = v680+(+4);
	i2 v682 = *(i2*)(intptr_t)v681;
	i2 v683 = v682+(+1);
	i8 v684 = (i8)(intptr_t)(ws+3344);
	i8 v685 = *(i8*)(intptr_t)v684;
	i8 v686 = v685+(+4);
	*(i2*)(intptr_t)v686 = v683;

	i8 v687 = (i8)(intptr_t)(ws+3344);
	i8 v688 = *(i8*)(intptr_t)v687;
	i8 v689 = v688+(+4);
	i2 v690 = *(i2*)(intptr_t)v689;
	i2 v691 = (i2)+512;
	if (v690==v691) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v692 = (i8)(intptr_t)(ws+3344);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = (i8)(intptr_t)(ws+3344);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v695+(+8);
	i4 v697 = *(i4*)(intptr_t)v696;
	i4 v698 = v697+(+1);

void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v698, v693);

	i2 v699 = (i2)+0;
	i8 v700 = (i8)(intptr_t)(ws+3344);
	i8 v701 = *(i8*)(intptr_t)v700;
	i8 v702 = v701+(+4);
	*(i2*)(intptr_t)v702 = v699;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}

// FCBGetChar workspace at ws+2928 length ws+9
void f48_FCBGetChar(i1* p703 /* c */, i8 p704 /* fcb */) {
	*(i8*)(intptr_t)(ws+2928) = p704; /*fcb */

	i8 v705 = (i8)(intptr_t)(ws+2928);
	i8 v706 = *(i8*)(intptr_t)v705;

void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v706);

	i8 v707 = (i8)(intptr_t)(ws+2928);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+12);
	i8 v710 = (i8)(intptr_t)(ws+2928);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+4);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = v713;
	i8 v715 = v709+v714;
	i1 v716 = *(i1*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+2936);
	*(i1*)(intptr_t)v717 = v716;

endsub:;
	*p703 = *(i1*)(intptr_t)(ws+2936);
}

// FCBPutChar workspace at ws+3328 length ws+9
void f49_FCBPutChar(i1 p718 /* c */, i8 p719 /* fcb */) {
	*(i8*)(intptr_t)(ws+3328) = p719; /*fcb */
	*(i1*)(intptr_t)(ws+3336) = p718; /*c */

	i8 v720 = (i8)(intptr_t)(ws+3328);
	i8 v721 = *(i8*)(intptr_t)v720;

void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v721);

	i8 v722 = (i8)(intptr_t)(ws+3336);
	i1 v723 = *(i1*)(intptr_t)v722;
	i8 v724 = (i8)(intptr_t)(ws+3328);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+12);
	i8 v727 = (i8)(intptr_t)(ws+3328);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i8 v731 = v730;
	i8 v732 = v726+v731;
	*(i1*)(intptr_t)v732 = v723;

	i1 v733 = (i1)+1;
	i8 v734 = (i8)(intptr_t)(ws+3328);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+6);
	*(i1*)(intptr_t)v736 = v733;

endsub:;
}

// StrDupBraced workspace at ws+3064 length ws+32
void f53_StrDupBraced(i8* p800 /* news */, i8 p801 /* s */) {
	*(i8*)(intptr_t)(ws+3064) = p801; /*s */

	i8 v802 = (i8)(intptr_t)(ws+3064);
	i8 v803 = *(i8*)(intptr_t)v802;

void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v804;
	f28_StrLen(&v804, v803);
	i8 v805 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v805 = v804;

	i8 v806 = (i8)(intptr_t)(ws+3080);
	i8 v807 = *(i8*)(intptr_t)v806;
	i8 v808 = v807+(+3);

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v809;
	f31_Alloc(&v809, v808);
	i8 v810 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v810 = v809;

	i8 v811 = (i8)(intptr_t)(ws+3072);
	i8 v812 = *(i8*)(intptr_t)v811;
	i8 v813 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v813 = v812;

	i1 v814 = (i1)+91;
	i8 v815 = (i8)(intptr_t)(ws+3088);
	i8 v816 = *(i8*)(intptr_t)v815;
	*(i1*)(intptr_t)v816 = v814;

	i8 v817 = (i8)(intptr_t)(ws+3088);
	i8 v818 = *(i8*)(intptr_t)v817;
	i8 v819 = v818+(+1);
	i8 v820 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v820 = v819;

	i8 v821 = (i8)(intptr_t)(ws+3064);
	i8 v822 = *(i8*)(intptr_t)v821;
	i8 v823 = (i8)(intptr_t)(ws+3080);
	i8 v824 = *(i8*)(intptr_t)v823;
	i8 v825 = (i8)(intptr_t)(ws+3088);
	i8 v826 = *(i8*)(intptr_t)v825;

void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v826, v824, v822);

	i8 v827 = (i8)(intptr_t)(ws+3088);
	i8 v828 = *(i8*)(intptr_t)v827;
	i8 v829 = (i8)(intptr_t)(ws+3080);
	i8 v830 = *(i8*)(intptr_t)v829;
	i8 v831 = v828+v830;
	i8 v832 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v832 = v831;

	i1 v833 = (i1)+93;
	i8 v834 = (i8)(intptr_t)(ws+3088);
	i8 v835 = *(i8*)(intptr_t)v834;
	*(i1*)(intptr_t)v835 = v833;

	i8 v836 = (i8)(intptr_t)(ws+3088);
	i8 v837 = *(i8*)(intptr_t)v836;
	i8 v838 = v837+(+1);
	i8 v839 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v839 = v838;

	i1 v840 = (i1)+0;
	i8 v841 = (i8)(intptr_t)(ws+3088);
	i8 v842 = *(i8*)(intptr_t)v841;
	*(i1*)(intptr_t)v842 = v840;

endsub:;
	*p800 = *(i8*)(intptr_t)(ws+3072);
}

// StrDupArrayed workspace at ws+3032 length ws+40
void f54_StrDupArrayed(i8* p843 /* news */, i2 p844 /* i */, i8 p845 /* s */) {
	*(i8*)(intptr_t)(ws+3032) = p845; /*s */
	*(i2*)(intptr_t)(ws+3040) = p844; /*i */

	i8 v846 = (i8)(intptr_t)(ws+3032);
	i8 v847 = *(i8*)(intptr_t)v846;

void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v848;
	f28_StrLen(&v848, v847);
	i8 v849 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v849 = v848;

	i8 v850 = (i8)(intptr_t)(ws+3056);
	i8 v851 = *(i8*)(intptr_t)v850;
	i8 v852 = v851+(+3);

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v853;
	f31_Alloc(&v853, v852);
	i8 v854 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v854 = v853;

	i8 v855 = (i8)(intptr_t)(ws+3048);
	i8 v856 = *(i8*)(intptr_t)v855;
	i8 v857 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v857 = v856;

	i8 v858 = (i8)(intptr_t)(ws+3032);
	i8 v859 = *(i8*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(ws+3056);
	i8 v861 = *(i8*)(intptr_t)v860;
	i8 v862 = (i8)(intptr_t)(ws+3064);
	i8 v863 = *(i8*)(intptr_t)v862;

void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v863, v861, v859);

	i8 v864 = (i8)(intptr_t)(ws+3064);
	i8 v865 = *(i8*)(intptr_t)v864;
	i8 v866 = (i8)(intptr_t)(ws+3056);
	i8 v867 = *(i8*)(intptr_t)v866;
	i8 v868 = v865+v867;
	i8 v869 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v869 = v868;

	i1 v870 = (i1)+91;
	i8 v871 = (i8)(intptr_t)(ws+3064);
	i8 v872 = *(i8*)(intptr_t)v871;
	*(i1*)(intptr_t)v872 = v870;

	i8 v873 = (i8)(intptr_t)(ws+3064);
	i8 v874 = *(i8*)(intptr_t)v873;
	i8 v875 = v874+(+1);
	i8 v876 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v876 = v875;

	i1 v877 = (i1)+93;
	i8 v878 = (i8)(intptr_t)(ws+3064);
	i8 v879 = *(i8*)(intptr_t)v878;
	*(i1*)(intptr_t)v879 = v877;

	i8 v880 = (i8)(intptr_t)(ws+3064);
	i8 v881 = *(i8*)(intptr_t)v880;
	i8 v882 = v881+(+1);
	i8 v883 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v883 = v882;

	i1 v884 = (i1)+0;
	i8 v885 = (i8)(intptr_t)(ws+3064);
	i8 v886 = *(i8*)(intptr_t)v885;
	*(i1*)(intptr_t)v886 = v884;

endsub:;
	*p843 = *(i8*)(intptr_t)(ws+3048);
}
const i1 c02_s0000[] = { 0x70,0x61,0x72,0x61,0x6d,0 };
const i1 c02_s0001[] = { 0x76,0x38,0 };
const i1 c02_s0002[] = { 0x76,0x34,0 };
const i1 c02_s0003[] = { 0x76,0x32,0 };
const i1 c02_s0004[] = { 0x76,0x31,0 };
static data c02_ab0[] = { // registers

	{ .ptr = (void*)c02_s0000 },








	{ .i1 = { 0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0001 },








	{ .i1 = { 0x08,0x08,0x08,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0002 },








	{ .i1 = { 0x04,0x04,0x04,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0003 },








	{ .i1 = { 0x02,0x02,0x02,0x01,0x00,0x00,0x00,0x00}},

	{ .ptr = (void*)c02_s0004 },





	{ .i1 = { 0x01,0x01,0x01,0x01}},
};
static data c02_ab1[] = { // lexer_ctype








	{ .i1 = { 0x00,0x00,0x00,0x00,0x92,0xba,0x00,0x90}},








	{ .i1 = { 0x84,0x98,0x93,0xac,0x8e,0x88,0x97,0x21}},








	{ .i1 = { 0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21}},








	{ .i1 = { 0x21,0x86,0x96,0x00,0x00,0x00,0x00,0x10}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x91,0x00,0x85,0xb0,0x30,0x00}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},







	{ .i1 = { 0x30,0x30,0x9f,0xaf,0xa0,0x9b}},
};
const i1 c02_s0005[] = { 0x40,0x61,0x6c,0x69,0x61,0x73,0 };
const i1 c02_s0006[] = { 0x40,0x61,0x73,0x6d,0 };
const i1 c02_s0007[] = { 0x40,0x61,0x74,0 };
const i1 c02_s0008[] = { 0x40,0x62,0x79,0x74,0x65,0x73,0x6f,0x66,0 };
const i1 c02_s0009[] = { 0x40,0x64,0x65,0x63,0x6c,0 };
const i1 c02_s000a[] = { 0x40,0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s000b[] = { 0x40,0x69,0x6e,0x64,0x65,0x78,0x6f,0x66,0 };
const i1 c02_s000c[] = { 0x40,0x69,0x6d,0x70,0x6c,0 };
const i1 c02_s000d[] = { 0x40,0x73,0x69,0x7a,0x65,0x6f,0x66,0 };
const i1 c02_s000e[] = { 0x40,0x6e,0x65,0x78,0x74,0 };
const i1 c02_s000f[] = { 0x40,0x70,0x72,0x65,0x76,0 };
const i1 c02_s0010[] = { 0x61,0x6e,0x64,0 };
const i1 c02_s0011[] = { 0x61,0x73,0 };
const i1 c02_s0012[] = { 0x62,0x72,0x65,0x61,0x6b,0 };
const i1 c02_s0013[] = { 0x63,0x61,0x73,0x65,0 };
const i1 c02_s0014[] = { 0x63,0x6f,0x6e,0x73,0x74,0 };
const i1 c02_s0015[] = { 0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0 };
const i1 c02_s0016[] = { 0x65,0x6c,0x73,0x65,0 };
const i1 c02_s0017[] = { 0x65,0x6c,0x73,0x65,0x69,0x66,0 };
const i1 c02_s0018[] = { 0x65,0x6e,0x64,0 };
const i1 c02_s0019[] = { 0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s001a[] = { 0x69,0x66,0 };
const i1 c02_s001b[] = { 0x69,0x73,0 };
const i1 c02_s001c[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0 };
const i1 c02_s001d[] = { 0x69,0x6e,0x74,0 };
const i1 c02_s001e[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c02_s001f[] = { 0x6e,0x6f,0x74,0 };
const i1 c02_s0020[] = { 0x6f,0x72,0 };
const i1 c02_s0021[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s0022[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c02_s0023[] = { 0x73,0x75,0x62,0 };
const i1 c02_s0024[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c02_s0025[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c02_s0026[] = { 0x76,0x61,0x72,0 };
const i1 c02_s0027[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c02_s0028[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
static data c02_ab2[] = { // keyword_names

	{ .ptr = (void*)c02_s0005 },

	{ .ptr = (void*)c02_s0006 },

	{ .ptr = (void*)c02_s0007 },

	{ .ptr = (void*)c02_s0008 },

	{ .ptr = (void*)c02_s0009 },

	{ .ptr = (void*)c02_s000a },

	{ .ptr = (void*)c02_s000b },

	{ .ptr = (void*)c02_s000c },

	{ .ptr = (void*)c02_s000d },

	{ .ptr = (void*)c02_s000e },

	{ .ptr = (void*)c02_s000f },

	{ .ptr = (void*)c02_s0010 },

	{ .ptr = (void*)c02_s0011 },

	{ .ptr = (void*)c02_s0012 },

	{ .ptr = (void*)c02_s0013 },

	{ .ptr = (void*)c02_s0014 },

	{ .ptr = (void*)c02_s0015 },

	{ .ptr = (void*)c02_s0016 },

	{ .ptr = (void*)c02_s0017 },

	{ .ptr = (void*)c02_s0018 },

	{ .ptr = (void*)c02_s0019 },

	{ .ptr = (void*)c02_s001a },

	{ .ptr = (void*)c02_s001b },

	{ .ptr = (void*)c02_s001c },

	{ .ptr = (void*)c02_s001d },

	{ .ptr = (void*)c02_s001e },

	{ .ptr = (void*)c02_s001f },

	{ .ptr = (void*)c02_s0020 },

	{ .ptr = (void*)c02_s0021 },

	{ .ptr = (void*)c02_s0022 },

	{ .ptr = (void*)c02_s0023 },

	{ .ptr = (void*)c02_s0024 },

	{ .ptr = (void*)c02_s0025 },

	{ .ptr = (void*)c02_s0026 },

	{ .ptr = (void*)c02_s0027 },

	{ .ptr = (void*)c02_s0028 },

};
static data c02_ab3[] = { // keyword_ids








	{ .i1 = { 0x42,0x01,0x23,0x24,0x2b,0x0b,0x3d,0x2a}},








	{ .i1 = { 0x28,0x3b,0x3c,0x2d,0x39,0x03,0x3f,0x07}},








	{ .i1 = { 0x3e,0x09,0x25,0x0a,0x0b,0x0c,0x40,0xff}},








	{ .i1 = { 0x26,0x0d,0x0f,0x2e,0x14,0x15,0x19,0x1a}},





	{ .i1 = { 0x27,0x1c,0x41,0x1d}},
};
const i1 c02_s0029[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
const i1 c02_s002a[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
const i1 c02_s002b[] = { 0x3a,0x20,0 };
const i1 c02_s002c[] = { 0x3a,0x20,0 };

// StartError workspace at ws+3304 length ws+0
void f55_StartError(void) {

	i8 v895 = (i8)(intptr_t)c02_s0029;

void f11_print(i8 /* ptr */);
	f11_print(v895);

	i8 v896 = (i8)(intptr_t)(ws+96);
	i8 v897 = *(i8*)(intptr_t)v896;
	i8 v898 = (i8)+0;
	if (v897==v898) goto c02_00b7; else goto c02_00b8;

c02_00b7:;

	i8 v899 = (i8)(intptr_t)c02_s002a;

void f11_print(i8 /* ptr */);
	f11_print(v899);

	goto c02_00b4;

c02_00b8:;

	i8 v900 = (i8)(intptr_t)(ws+96);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = v901+(+8);
	i8 v903 = *(i8*)(intptr_t)v902;

void f11_print(i8 /* ptr */);
	f11_print(v903);

	i8 v904 = (i8)(intptr_t)c02_s002b;

void f11_print(i8 /* ptr */);
	f11_print(v904);

	i8 v905 = (i8)(intptr_t)(ws+96);
	i8 v906 = *(i8*)(intptr_t)v905;
	i8 v907 = v906+(+16);
	i2 v908 = *(i2*)(intptr_t)v907;

void f16_print_i16(i2 /* value */);
	f16_print_i16(v908);

c02_00b4:;

	i8 v909 = (i8)(intptr_t)c02_s002c;

void f11_print(i8 /* ptr */);
	f11_print(v909);

endsub:;
}

// EndError workspace at ws+3304 length ws+0
void f56_EndError(void) {


void f12_print_nl(void);
	f12_print_nl();


void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}

// SimpleError workspace at ws+3296 length ws+8
void f57_SimpleError(i8 p910 /* message */) {
	*(i8*)(intptr_t)(ws+3296) = p910; /*message */


void f55_StartError(void);
	f55_StartError();

	i8 v911 = (i8)(intptr_t)(ws+3296);
	i8 v912 = *(i8*)(intptr_t)v911;

void f11_print(i8 /* ptr */);
	f11_print(v912);


void f56_EndError(void);
	f56_EndError();

endsub:;
}

// LexerAddIncludePath workspace at ws+2888 length ws+16
void f58_LexerAddIncludePath(i8 p913 /* path */) {
	*(i8*)(intptr_t)(ws+2888) = p913; /*path */

	i8 v914 = (i8)+16;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v915;
	f31_Alloc(&v915, v914);
	i8 v916 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v916 = v915;

	i8 v917 = (i8)(intptr_t)(ws+88);
	i8 v918 = *(i8*)(intptr_t)v917;
	i8 v919 = (i8)(intptr_t)(ws+2896);
	i8 v920 = *(i8*)(intptr_t)v919;
	*(i8*)(intptr_t)v920 = v918;

	i8 v921 = (i8)(intptr_t)(ws+2888);
	i8 v922 = *(i8*)(intptr_t)v921;
	i8 v923 = (i8)(intptr_t)(ws+2896);
	i8 v924 = *(i8*)(intptr_t)v923;
	i8 v925 = v924+(+8);
	*(i8*)(intptr_t)v925 = v922;

	i8 v926 = (i8)(intptr_t)(ws+2896);
	i8 v927 = *(i8*)(intptr_t)v926;
	i8 v928 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v928 = v927;

endsub:;
}
const i1 c02_s002d[] = { 0x20,0x20,0 };

// LexerPrintSpaces workspace at ws+2936 length ws+1
void f59_LexerPrintSpaces(void) {

	i8 v931 = (i8)(intptr_t)(ws+240);
	i1 v932 = *(i1*)(intptr_t)v931;
	i8 v933 = (i8)(intptr_t)(ws+2936);
	*(i1*)(intptr_t)v933 = v932;

c02_00bb:;

	i8 v934 = (i8)(intptr_t)(ws+2936);
	i1 v935 = *(i1*)(intptr_t)v934;
	i1 v936 = (i1)+0;
	if (v935==v936) goto c02_00be; else goto c02_00bd;

c02_00bd:;

	i8 v937 = (i8)(intptr_t)c02_s002d;

void f11_print(i8 /* ptr */);
	f11_print(v937);

	i8 v938 = (i8)(intptr_t)(ws+2936);
	i1 v939 = *(i1*)(intptr_t)v938;
	i1 v940 = v939+(-1);
	i8 v941 = (i8)(intptr_t)(ws+2936);
	*(i1*)(intptr_t)v941 = v940;

	goto c02_00bb;

c02_00be:;

endsub:;
}

// lexer_i_open workspace at ws+2936 length ws+24
void f60_lexer_i_open(i1* p942 /* result */, i8 p943 /* file */) {
	*(i8*)(intptr_t)(ws+2936) = p943; /*file */

	i8 v944 = (i8)+524;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v945;
	f31_Alloc(&v945, v944);
	i8 v946 = (i8)(intptr_t)(ws+2952);
	*(i8*)(intptr_t)v946 = v945;

	i8 v947 = (i8)(intptr_t)(ws+2952);
	i8 v948 = *(i8*)(intptr_t)v947;
	i8 v949 = (i8)(intptr_t)(ws+2936);
	i8 v950 = *(i8*)(intptr_t)v949;
	i8 v951 = v950+(+8);
	i8 v952 = *(i8*)(intptr_t)v951;

void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v953;
	f40_FCBOpenIn(&v953, v952, v948);
	i1 v954 = (i1)+0;
	if (v953==v954) goto c02_00c2; else goto c02_00c3;

c02_00c2:;

	i8 v955 = (i8)(intptr_t)(ws+2952);
	i8 v956 = *(i8*)(intptr_t)v955;
	i8 v957 = (i8)(intptr_t)(ws+2936);
	i8 v958 = *(i8*)(intptr_t)v957;
	i8 v959 = v958+(+24);
	*(i8*)(intptr_t)v959 = v956;

	i8 v960 = (i8)(intptr_t)(ws+2952);
	i8 v961 = *(i8*)(intptr_t)v960;
	i8 v962 = (i8)(intptr_t)(ws+2936);
	i8 v963 = *(i8*)(intptr_t)v962;
	i8 v964 = v963+(+20);
	i4 v965 = *(i4*)(intptr_t)v964;

void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	f44_FCBSeek(v965, v961);

	i1 v966 = (i1)+0;
	i8 v967 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v967 = v966;

	goto c02_00bf;

c02_00c3:;

	i8 v968 = (i8)(intptr_t)(ws+2952);
	i8 v969 = *(i8*)(intptr_t)v968;

void f32_Free(i8 /* block */);
	f32_Free(v969);

	i1 v970 = (i1)+1;
	i8 v971 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v971 = v970;

c02_00bf:;

endsub:;
	*p942 = *(i1*)(intptr_t)(ws+2944);
}

// lexer_i_close workspace at ws+2936 length ws+9
void f61_lexer_i_close(i8 p972 /* file */) {
	*(i8*)(intptr_t)(ws+2936) = p972; /*file */

	i8 v973 = (i8)(intptr_t)(ws+2936);
	i8 v974 = *(i8*)(intptr_t)v973;
	i8 v975 = v974+(+24);
	i8 v976 = *(i8*)(intptr_t)v975;

void f45_FCBPos(i4* /* pos */, i8 /* fcb */);
	i4 v977;
	f45_FCBPos(&v977, v976);
	i8 v978 = (i8)(intptr_t)(ws+2936);
	i8 v979 = *(i8*)(intptr_t)v978;
	i8 v980 = v979+(+20);
	*(i4*)(intptr_t)v980 = v977;

	i8 v981 = (i8)(intptr_t)(ws+2936);
	i8 v982 = *(i8*)(intptr_t)v981;
	i8 v983 = v982+(+24);
	i8 v984 = *(i8*)(intptr_t)v983;

void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	i1 v985;
	f43_FCBClose(&v985, v984);
	i8 v986 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v986 = v985;

	i8 v987 = (i8)(intptr_t)(ws+2936);
	i8 v988 = *(i8*)(intptr_t)v987;
	i8 v989 = v988+(+24);
	i8 v990 = *(i8*)(intptr_t)v989;

void f32_Free(i8 /* block */);
	f32_Free(v990);

endsub:;
}
const i1 c02_s002e[] = { 0x3e,0x20,0 };
const i1 c02_s002f[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s0030[] = { 0x27,0 };

// LexerIncludeFile workspace at ws+2896 length ws+40
void f62_LexerIncludeFile(i8 p991 /* path */) {
	*(i8*)(intptr_t)(ws+2896) = p991; /*path */

	i8 v992 = (i8)+32;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v993;
	f31_Alloc(&v993, v992);
	i8 v994 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v994 = v993;

	i8 v995 = (i8)(intptr_t)(ws+96);
	i8 v996 = *(i8*)(intptr_t)v995;
	i8 v997 = (i8)(intptr_t)(ws+2904);
	i8 v998 = *(i8*)(intptr_t)v997;
	*(i8*)(intptr_t)v998 = v996;

	i2 v999 = (i2)+1;
	i8 v1000 = (i8)(intptr_t)(ws+2904);
	i8 v1001 = *(i8*)(intptr_t)v1000;
	i8 v1002 = v1001+(+16);
	*(i2*)(intptr_t)v1002 = v999;

	i8 v1003 = (i8)(intptr_t)(ws+88);
	i8 v1004 = *(i8*)(intptr_t)v1003;
	i8 v1005 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v1005 = v1004;

	i8 v1006 = (i8)(intptr_t)(ws+2896);
	i8 v1007 = *(i8*)(intptr_t)v1006;

void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v1008;
	f28_StrLen(&v1008, v1007);
	i8 v1009 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v1009 = v1008;

c02_00c6:;

	i8 v1010 = (i8)(intptr_t)(ws+2912);
	i8 v1011 = *(i8*)(intptr_t)v1010;
	i8 v1012 = (i8)+0;
	if (v1011==v1012) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v1013 = (i8)(intptr_t)(ws+2912);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	i8 v1015 = v1014+(+8);
	i8 v1016 = *(i8*)(intptr_t)v1015;

void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v1017;
	f28_StrLen(&v1017, v1016);
	i8 v1018 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v1018 = v1017;

	i8 v1019 = (i8)(intptr_t)(ws+2920);
	i8 v1020 = *(i8*)(intptr_t)v1019;
	i8 v1021 = (i8)(intptr_t)(ws+2928);
	i8 v1022 = *(i8*)(intptr_t)v1021;
	i8 v1023 = v1020+v1022;
	i8 v1024 = v1023+(+1);

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1025;
	f31_Alloc(&v1025, v1024);
	i8 v1026 = (i8)(intptr_t)(ws+2904);
	i8 v1027 = *(i8*)(intptr_t)v1026;
	i8 v1028 = v1027+(+8);
	*(i8*)(intptr_t)v1028 = v1025;

	i8 v1029 = (i8)(intptr_t)(ws+2912);
	i8 v1030 = *(i8*)(intptr_t)v1029;
	i8 v1031 = v1030+(+8);
	i8 v1032 = *(i8*)(intptr_t)v1031;
	i8 v1033 = (i8)(intptr_t)(ws+2928);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = (i8)(intptr_t)(ws+2904);
	i8 v1036 = *(i8*)(intptr_t)v1035;
	i8 v1037 = v1036+(+8);
	i8 v1038 = *(i8*)(intptr_t)v1037;

void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v1038, v1034, v1032);

	i8 v1039 = (i8)(intptr_t)(ws+2896);
	i8 v1040 = *(i8*)(intptr_t)v1039;
	i8 v1041 = (i8)(intptr_t)(ws+2920);
	i8 v1042 = *(i8*)(intptr_t)v1041;
	i8 v1043 = v1042+(+1);
	i8 v1044 = (i8)(intptr_t)(ws+2904);
	i8 v1045 = *(i8*)(intptr_t)v1044;
	i8 v1046 = v1045+(+8);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = (i8)(intptr_t)(ws+2928);
	i8 v1049 = *(i8*)(intptr_t)v1048;
	i8 v1050 = v1047+v1049;

void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v1050, v1043, v1040);

	i8 v1051 = (i8)(intptr_t)(ws+2904);
	i8 v1052 = *(i8*)(intptr_t)v1051;

void f60_lexer_i_open(i1* /* result */, i8 /* file */);
	i1 v1053;
	f60_lexer_i_open(&v1053, v1052);
	i1 v1054 = (i1)+0;
	if (v1053==v1054) goto c02_00cd; else goto c02_00ce;

c02_00cd:;

	i8 v1055 = (i8)(intptr_t)(ws+240);
	i1 v1056 = *(i1*)(intptr_t)v1055;
	i1 v1057 = v1056+(+1);
	i8 v1058 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1058 = v1057;


void f59_LexerPrintSpaces(void);
	f59_LexerPrintSpaces();

	i8 v1059 = (i8)(intptr_t)c02_s002e;

void f11_print(i8 /* ptr */);
	f11_print(v1059);

	i8 v1060 = (i8)(intptr_t)(ws+2904);
	i8 v1061 = *(i8*)(intptr_t)v1060;
	i8 v1062 = v1061+(+8);
	i8 v1063 = *(i8*)(intptr_t)v1062;

void f11_print(i8 /* ptr */);
	f11_print(v1063);


void f12_print_nl(void);
	f12_print_nl();

	i8 v1064 = (i8)(intptr_t)(ws+96);
	i8 v1065 = *(i8*)(intptr_t)v1064;
	i8 v1066 = (i8)+0;
	if (v1065==v1066) goto c02_00d3; else goto c02_00d2;

c02_00d2:;

	i8 v1067 = (i8)(intptr_t)(ws+96);
	i8 v1068 = *(i8*)(intptr_t)v1067;

void f61_lexer_i_close(i8 /* file */);
	f61_lexer_i_close(v1068);

	goto c02_00cf;

c02_00d3:;

c02_00cf:;

	i8 v1069 = (i8)(intptr_t)(ws+2904);
	i8 v1070 = *(i8*)(intptr_t)v1069;
	i8 v1071 = (i8)(intptr_t)(ws+96);
	*(i8*)(intptr_t)v1071 = v1070;

	goto endsub;

c02_00ce:;

c02_00ca:;

	i8 v1072 = (i8)(intptr_t)(ws+2904);
	i8 v1073 = *(i8*)(intptr_t)v1072;
	i8 v1074 = v1073+(+8);
	i8 v1075 = *(i8*)(intptr_t)v1074;

void f32_Free(i8 /* block */);
	f32_Free(v1075);

	i8 v1076 = (i8)(intptr_t)(ws+2912);
	i8 v1077 = *(i8*)(intptr_t)v1076;
	i8 v1078 = *(i8*)(intptr_t)v1077;
	i8 v1079 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v1079 = v1078;

	goto c02_00c6;

c02_00c9:;


void f55_StartError(void);
	f55_StartError();

	i8 v1080 = (i8)(intptr_t)c02_s002f;

void f11_print(i8 /* ptr */);
	f11_print(v1080);

	i8 v1081 = (i8)(intptr_t)(ws+2896);
	i8 v1082 = *(i8*)(intptr_t)v1081;

void f11_print(i8 /* ptr */);
	f11_print(v1082);

	i8 v1083 = (i8)(intptr_t)c02_s0030;

void f11_print(i8 /* ptr */);
	f11_print(v1083);


void f56_EndError(void);
	f56_EndError();

endsub:;
}

// lexer_i_ctype workspace at ws+2904 length ws+3
void f64_lexer_i_ctype(i1* p1085 /* type */, i1* p1086 /* token */, i1 p1087 /* c */) {
	*(i1*)(intptr_t)(ws+2904) = p1087; /*c */

	i8 v1088 = (i8)(intptr_t)(ws+2904);
	i1 v1089 = *(i1*)(intptr_t)v1088;
	i1 v1090 = (i1)+33;
	if (v1089<v1090) goto c02_00da; else goto c02_00db;

c02_00db:;

	i1 v1091 = (i1)+127;
	i8 v1092 = (i8)(intptr_t)(ws+2904);
	i1 v1093 = *(i1*)(intptr_t)v1092;
	if (v1091<v1093) goto c02_00da; else goto c02_00d9;

c02_00d9:;

	i8 v1094 = (i8)(intptr_t)(((i1*)c02_ab1+0));
	i8 v1095 = (i8)(intptr_t)(ws+2904);
	i1 v1096 = *(i1*)(intptr_t)v1095;
	i1 v1097 = v1096+(-33);
	i8 v1098 = v1097;
	i8 v1099 = v1094+v1098;
	i1 v1100 = *(i1*)(intptr_t)v1099;
	i8 v1101 = (i8)(intptr_t)(ws+2905);
	*(i1*)(intptr_t)v1101 = v1100;

	i8 v1102 = (i8)(intptr_t)(ws+2905);
	i1 v1103 = *(i1*)(intptr_t)v1102;
	i1 v1104 = v1103&(+128);
	i1 v1105 = (i1)+0;
	if (v1104==v1105) goto c02_00e0; else goto c02_00df;

c02_00df:;

	i8 v1106 = (i8)(intptr_t)(ws+2905);
	i1 v1107 = *(i1*)(intptr_t)v1106;
	i1 v1108 = v1107&(-129);
	i8 v1109 = (i8)(intptr_t)(ws+2906);
	*(i1*)(intptr_t)v1109 = v1108;

	i1 v1110 = (i1)+128;
	i8 v1111 = (i8)(intptr_t)(ws+2905);
	*(i1*)(intptr_t)v1111 = v1110;

	goto c02_00dc;

c02_00e0:;

c02_00dc:;

	goto c02_00d4;

c02_00da:;

	i1 v1112 = (i1)+0;
	i8 v1113 = (i8)(intptr_t)(ws+2905);
	*(i1*)(intptr_t)v1113 = v1112;

	i1 v1114 = (i1)+0;
	i8 v1115 = (i8)(intptr_t)(ws+2906);
	*(i1*)(intptr_t)v1115 = v1114;

c02_00d4:;

endsub:;
	*p1086 = *(i1*)(intptr_t)(ws+2906);
	*p1085 = *(i1*)(intptr_t)(ws+2905);
}
const i1 c02_s0031[] = { 0x3c,0x20,0 };
const i1 c02_s0032[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };

// lexer_i_getchar workspace at ws+2912 length ws+16
void f65_lexer_i_getchar(i1* p1116 /* c */) {

	i8 v1117 = (i8)(intptr_t)(ws+104);
	i1 v1118 = *(i1*)(intptr_t)v1117;
	i1 v1119 = (i1)+0;
	if (v1118==v1119) goto c02_00e5; else goto c02_00e4;

c02_00e4:;

	i8 v1120 = (i8)(intptr_t)(ws+104);
	i1 v1121 = *(i1*)(intptr_t)v1120;
	i8 v1122 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1122 = v1121;

	i1 v1123 = (i1)+0;
	i8 v1124 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1124 = v1123;

	goto endsub;

c02_00e5:;

c02_00e1:;

c02_00e6:;

	i8 v1125 = (i8)(intptr_t)(ws+96);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	i8 v1127 = (i8)+0;
	if (v1126==v1127) goto c02_00eb; else goto c02_00ec;

c02_00eb:;

	i1 v1128 = (i1)+0;
	i8 v1129 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1129 = v1128;

	goto c02_00e7;

c02_00ec:;

c02_00e8:;

	i8 v1130 = (i8)(intptr_t)(ws+96);
	i8 v1131 = *(i8*)(intptr_t)v1130;
	i8 v1132 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v1132 = v1131;

	i8 v1133 = (i8)(intptr_t)(ws+2920);
	i8 v1134 = *(i8*)(intptr_t)v1133;
	i8 v1135 = v1134+(+24);
	i8 v1136 = *(i8*)(intptr_t)v1135;

void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);
	i1 v1137;
	f48_FCBGetChar(&v1137, v1136);
	i8 v1138 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1138 = v1137;

	i8 v1139 = (i8)(intptr_t)(ws+2912);
	i1 v1140 = *(i1*)(intptr_t)v1139;
	i1 v1141 = (i1)+26;
	if (v1140==v1141) goto c02_00f0; else goto c02_00f1;

c02_00f0:;

	i1 v1142 = (i1)+0;
	i8 v1143 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1143 = v1142;

	goto c02_00ed;

c02_00f1:;

c02_00ed:;

	i8 v1144 = (i8)(intptr_t)(ws+2912);
	i1 v1145 = *(i1*)(intptr_t)v1144;
	i1 v1146 = (i1)+0;
	if (v1145==v1146) goto c02_00f6; else goto c02_00f5;

c02_00f5:;

	goto c02_00e7;

c02_00f6:;

c02_00f2:;

	i8 v1147 = (i8)(intptr_t)(ws+2920);
	i8 v1148 = *(i8*)(intptr_t)v1147;
	i8 v1149 = *(i8*)(intptr_t)v1148;
	i8 v1150 = (i8)(intptr_t)(ws+96);
	*(i8*)(intptr_t)v1150 = v1149;

	i8 v1151 = (i8)(intptr_t)(ws+2920);
	i8 v1152 = *(i8*)(intptr_t)v1151;

void f61_lexer_i_close(i8 /* file */);
	f61_lexer_i_close(v1152);

	i8 v1153 = (i8)(intptr_t)(ws+2920);
	i8 v1154 = *(i8*)(intptr_t)v1153;

void f32_Free(i8 /* block */);
	f32_Free(v1154);

	i8 v1155 = (i8)(intptr_t)(ws+96);
	i8 v1156 = *(i8*)(intptr_t)v1155;
	i8 v1157 = (i8)+0;
	if (v1156==v1157) goto c02_00fb; else goto c02_00fa;

c02_00fa:;

	i8 v1158 = (i8)(intptr_t)(ws+240);
	i1 v1159 = *(i1*)(intptr_t)v1158;
	i1 v1160 = v1159+(-1);
	i8 v1161 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1161 = v1160;


void f59_LexerPrintSpaces(void);
	f59_LexerPrintSpaces();

	i8 v1162 = (i8)(intptr_t)c02_s0031;

void f11_print(i8 /* ptr */);
	f11_print(v1162);

	i8 v1163 = (i8)(intptr_t)(ws+96);
	i8 v1164 = *(i8*)(intptr_t)v1163;
	i8 v1165 = v1164+(+8);
	i8 v1166 = *(i8*)(intptr_t)v1165;

void f11_print(i8 /* ptr */);
	f11_print(v1166);


void f12_print_nl(void);
	f12_print_nl();

	i8 v1167 = (i8)(intptr_t)(ws+96);
	i8 v1168 = *(i8*)(intptr_t)v1167;

void f60_lexer_i_open(i1* /* result */, i8 /* file */);
	i1 v1169;
	f60_lexer_i_open(&v1169, v1168);
	i1 v1170 = (i1)+0;
	if (v1169==v1170) goto c02_0100; else goto c02_00ff;

c02_00ff:;

	i8 v1171 = (i8)(intptr_t)c02_s0032;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v1171);

	goto c02_00fc;

c02_0100:;

c02_00fc:;

	goto c02_00f7;

c02_00fb:;

c02_00f7:;

	goto c02_00e6;

c02_00e7:;

endsub:;
	*p1116 = *(i1*)(intptr_t)(ws+2912);
}
const i1 c02_s0033[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };

// lexer_i_unparseable workspace at ws+2888 length ws+1
void f66_lexer_i_unparseable(i1 p1172 /* c */) {
	*(i1*)(intptr_t)(ws+2888) = p1172; /*c */


void f55_StartError(void);
	f55_StartError();

	i8 v1173 = (i8)(intptr_t)c02_s0033;

void f11_print(i8 /* ptr */);
	f11_print(v1173);

	i8 v1174 = (i8)(intptr_t)(ws+2888);
	i1 v1175 = *(i1*)(intptr_t)v1174;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v1175);


void f56_EndError(void);
	f56_EndError();

endsub:;
}

// lexer_i_skipwhitespace workspace at ws+2896 length ws+1
void f67_lexer_i_skipwhitespace(void) {

c02_0101:;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1176;
	f65_lexer_i_getchar(&v1176);
	i8 v1177 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1177 = v1176;

	i8 v1178 = (i8)(intptr_t)(ws+2896);
	i1 v1179 = *(i1*)(intptr_t)v1178;

	if (v1179 != +32) goto c02_0104;

	goto c02_0103;

c02_0104:;

	if (v1179 != +13) goto c02_0105;

	goto c02_0103;

c02_0105:;

	if (v1179 != +10) goto c02_0106;

	i8 v1180 = (i8)(intptr_t)(ws+96);
	i8 v1181 = *(i8*)(intptr_t)v1180;
	i8 v1182 = v1181+(+16);
	i2 v1183 = *(i2*)(intptr_t)v1182;
	i2 v1184 = v1183+(+1);
	i8 v1185 = (i8)(intptr_t)(ws+96);
	i8 v1186 = *(i8*)(intptr_t)v1185;
	i8 v1187 = v1186+(+16);
	*(i2*)(intptr_t)v1187 = v1184;

	goto c02_0103;

c02_0106:;

	if (v1179 != +9) goto c02_0107;

	goto c02_0103;

c02_0107:;

	goto c02_0102;

c02_0103:;


	goto c02_0101;

c02_0102:;

	i8 v1188 = (i8)(intptr_t)(ws+2896);
	i1 v1189 = *(i1*)(intptr_t)v1188;
	i8 v1190 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1190 = v1189;

endsub:;
}
const i1 c02_s0034[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// lexer_i_read_identifier workspace at ws+2888 length ws+3
void f68_lexer_i_read_identifier(void) {

c02_0108:;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1191;
	f65_lexer_i_getchar(&v1191);
	i8 v1192 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1192 = v1191;

	i8 v1193 = (i8)(intptr_t)(ws+2888);
	i1 v1194 = *(i1*)(intptr_t)v1193;

void f64_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1195;
	i1 v1196;
	f64_lexer_i_ctype(&v1195, &v1196, v1194);

	i8 v1197 = (i8)(intptr_t)(ws+2890);
	*(i1*)(intptr_t)v1197 = v1196;

	i8 v1198 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1198 = v1195;

	i8 v1199 = (i8)(intptr_t)(ws+2889);
	i1 v1200 = *(i1*)(intptr_t)v1199;
	i1 v1201 = v1200&(+32);
	i1 v1202 = (i1)+0;
	if (v1201==v1202) goto c02_010e; else goto c02_010d;

c02_010d:;

	i8 v1203 = (i8)(intptr_t)(ws+2888);
	i1 v1204 = *(i1*)(intptr_t)v1203;
	i8 v1205 = (i8)(intptr_t)(ws+105);
	i8 v1206 = (i8)(intptr_t)(ws+233);
	i1 v1207 = *(i1*)(intptr_t)v1206;
	i8 v1208 = v1207;
	i8 v1209 = v1205+v1208;
	*(i1*)(intptr_t)v1209 = v1204;

	i8 v1210 = (i8)(intptr_t)(ws+233);
	i1 v1211 = *(i1*)(intptr_t)v1210;
	i1 v1212 = v1211+(+1);
	i8 v1213 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v1213 = v1212;

	i8 v1214 = (i8)(intptr_t)(ws+233);
	i1 v1215 = *(i1*)(intptr_t)v1214;
	i1 v1216 = (i1)+128;
	if (v1215==v1216) goto c02_0112; else goto c02_0113;

c02_0112:;


void f55_StartError(void);
	f55_StartError();

	i8 v1217 = (i8)(intptr_t)c02_s0034;

void f11_print(i8 /* ptr */);
	f11_print(v1217);


void f56_EndError(void);
	f56_EndError();

	goto c02_010f;

c02_0113:;

c02_010f:;

	goto c02_010a;

c02_010e:;

	i8 v1218 = (i8)(intptr_t)(ws+2888);
	i1 v1219 = *(i1*)(intptr_t)v1218;
	i8 v1220 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1220 = v1219;

	goto c02_0109;

c02_010a:;

	goto c02_0108;

c02_0109:;

	i1 v1221 = (i1)+0;
	i8 v1222 = (i8)(intptr_t)(ws+105);
	i8 v1223 = (i8)(intptr_t)(ws+233);
	i1 v1224 = *(i1*)(intptr_t)v1223;
	i8 v1225 = v1224;
	i8 v1226 = v1222+v1225;
	*(i1*)(intptr_t)v1226 = v1221;

endsub:;
}

// lexer_i_match_keyword workspace at ws+2888 length ws+2
void f69_lexer_i_match_keyword(i1* p1227 /* token */) {

	i1 v1228 = (i1)+0;
	i8 v1229 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1229 = v1228;

c02_0116:;

	i8 v1230 = (i8)(intptr_t)(ws+2889);
	i1 v1231 = *(i1*)(intptr_t)v1230;
	i1 v1232 = (i1)+36;
	if (v1231==v1232) goto c02_0119; else goto c02_0118;

c02_0118:;

	i8 v1233 = (i8)(intptr_t)(ws+105);
	i8 v1234 = (i8)(intptr_t)(((i1*)c02_ab2+0));
	i8 v1235 = (i8)(intptr_t)(ws+2889);
	i1 v1236 = *(i1*)(intptr_t)v1235;
	i8 v1237 = v1236;
	i1 v1238 = (i1)+3;
	i8 v1239 = ((i8)v1237)<<v1238;
	i8 v1240 = v1234+v1239;
	i8 v1241 = *(i8*)(intptr_t)v1240;

void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v1242;
	f25_StrCmp(&v1242, v1241, v1233);
	i1 v1243 = (i1)+0;
	if (v1242==v1243) goto c02_011d; else goto c02_011e;

c02_011d:;

	i8 v1244 = (i8)(intptr_t)(((i1*)c02_ab3+0));
	i8 v1245 = (i8)(intptr_t)(ws+2889);
	i1 v1246 = *(i1*)(intptr_t)v1245;
	i8 v1247 = v1246;
	i8 v1248 = v1244+v1247;
	i1 v1249 = *(i1*)(intptr_t)v1248;
	i8 v1250 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1250 = v1249;

	goto endsub;

c02_011e:;

c02_011a:;

	i8 v1251 = (i8)(intptr_t)(ws+2889);
	i1 v1252 = *(i1*)(intptr_t)v1251;
	i1 v1253 = v1252+(+1);
	i8 v1254 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1254 = v1253;

	goto c02_0116;

c02_0119:;

	i1 v1255 = (i1)+33;
	i8 v1256 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1256 = v1255;

endsub:;
	*p1227 = *(i1*)(intptr_t)(ws+2888);
}
const i1 c02_s0035[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };

// lexer_i_read_number workspace at ws+2896 length ws+7
void f70_lexer_i_read_number(void) {

	i4 v1257 = (i4)+0;
	i8 v1258 = (i8)(intptr_t)(ws+236);
	*(i4*)(intptr_t)v1258 = v1257;

	i4 v1259 = (i4)+10;
	i8 v1260 = (i8)(intptr_t)(ws+2896);
	*(i4*)(intptr_t)v1260 = v1259;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1261;
	f65_lexer_i_getchar(&v1261);
	i8 v1262 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1262 = v1261;

	i8 v1263 = (i8)(intptr_t)(ws+2902);
	i1 v1264 = *(i1*)(intptr_t)v1263;
	i1 v1265 = (i1)+48;
	if (v1264==v1265) goto c02_0122; else goto c02_0123;

c02_0122:;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1266;
	f65_lexer_i_getchar(&v1266);
	i8 v1267 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1267 = v1266;

	i8 v1268 = (i8)(intptr_t)(ws+2902);
	i1 v1269 = *(i1*)(intptr_t)v1268;

	if (v1269 != +98) goto c02_0125;

	i4 v1270 = (i4)+2;
	i8 v1271 = (i8)(intptr_t)(ws+2896);
	*(i4*)(intptr_t)v1271 = v1270;

	goto c02_0124;

c02_0125:;

	if (v1269 != +111) goto c02_0126;

	i4 v1272 = (i4)+8;
	i8 v1273 = (i8)(intptr_t)(ws+2896);
	*(i4*)(intptr_t)v1273 = v1272;

	goto c02_0124;

c02_0126:;

	if (v1269 != +100) goto c02_0127;

	i4 v1274 = (i4)+10;
	i8 v1275 = (i8)(intptr_t)(ws+2896);
	*(i4*)(intptr_t)v1275 = v1274;

	goto c02_0124;

c02_0127:;

	if (v1269 != +120) goto c02_0128;

	i4 v1276 = (i4)+16;
	i8 v1277 = (i8)(intptr_t)(ws+2896);
	*(i4*)(intptr_t)v1277 = v1276;

	goto c02_0124;

c02_0128:;

	i8 v1278 = (i8)(intptr_t)(ws+2902);
	i1 v1279 = *(i1*)(intptr_t)v1278;
	i8 v1280 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1280 = v1279;

	i8 v1281 = (i8)(intptr_t)(ws+2902);
	i1 v1282 = *(i1*)(intptr_t)v1281;

void f64_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1283;
	i1 v1284;
	f64_lexer_i_ctype(&v1283, &v1284, v1282);

	i8 v1285 = (i8)(intptr_t)(ws+2901);
	*(i1*)(intptr_t)v1285 = v1284;

	i8 v1286 = (i8)(intptr_t)(ws+2900);
	*(i1*)(intptr_t)v1286 = v1283;

	i8 v1287 = (i8)(intptr_t)(ws+2900);
	i1 v1288 = *(i1*)(intptr_t)v1287;
	i1 v1289 = v1288&(+32);
	i1 v1290 = (i1)+0;
	if (v1289==v1290) goto c02_012c; else goto c02_012d;

c02_012c:;

	goto endsub;

c02_012d:;

c02_0129:;

c02_0124:;


	goto c02_011f;

c02_0123:;

	i8 v1291 = (i8)(intptr_t)(ws+2902);
	i1 v1292 = *(i1*)(intptr_t)v1291;
	i8 v1293 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1293 = v1292;

c02_011f:;

c02_012e:;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1294;
	f65_lexer_i_getchar(&v1294);

void f26_ToLower(i1* /* cc */, i1 /* c */);
	i1 v1295;
	f26_ToLower(&v1295, v1294);
	i8 v1296 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1296 = v1295;

	i8 v1297 = (i8)(intptr_t)(ws+2902);
	i1 v1298 = *(i1*)(intptr_t)v1297;

void f64_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1299;
	i1 v1300;
	f64_lexer_i_ctype(&v1299, &v1300, v1298);

	i8 v1301 = (i8)(intptr_t)(ws+2901);
	*(i1*)(intptr_t)v1301 = v1300;

	i8 v1302 = (i8)(intptr_t)(ws+2900);
	*(i1*)(intptr_t)v1302 = v1299;

	i8 v1303 = (i8)(intptr_t)(ws+2900);
	i1 v1304 = *(i1*)(intptr_t)v1303;
	i1 v1305 = v1304&(+32);
	i1 v1306 = (i1)+0;
	if (v1305==v1306) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1307 = (i8)(intptr_t)(ws+2902);
	i1 v1308 = *(i1*)(intptr_t)v1307;
	i8 v1309 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1309 = v1308;

	goto c02_012f;

c02_0134:;

c02_0130:;

	i8 v1310 = (i8)(intptr_t)(ws+2902);
	i1 v1311 = *(i1*)(intptr_t)v1310;
	i1 v1312 = (i1)+97;
	if (v1311<v1312) goto c02_0139; else goto c02_0138;

c02_0138:;

	i8 v1313 = (i8)(intptr_t)(ws+2902);
	i1 v1314 = *(i1*)(intptr_t)v1313;
	i1 v1315 = v1314+(-87);
	i8 v1316 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1316 = v1315;

	goto c02_0135;

c02_0139:;

	i8 v1317 = (i8)(intptr_t)(ws+2902);
	i1 v1318 = *(i1*)(intptr_t)v1317;
	i1 v1319 = v1318+(-48);
	i8 v1320 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1320 = v1319;

c02_0135:;

	i8 v1321 = (i8)(intptr_t)(ws+2902);
	i1 v1322 = *(i1*)(intptr_t)v1321;
	i8 v1323 = (i8)(intptr_t)(ws+2896);
	i4 v1324 = *(i4*)(intptr_t)v1323;
	i1 v1325 = (s1)(s4)v1324;
	if (v1322<v1325) goto c02_013e; else goto c02_013d;

c02_013d:;


void f55_StartError(void);
	f55_StartError();

	i8 v1326 = (i8)(intptr_t)c02_s0035;

void f11_print(i8 /* ptr */);
	f11_print(v1326);


void f56_EndError(void);
	f56_EndError();

	goto c02_013a;

c02_013e:;

c02_013a:;

	i8 v1327 = (i8)(intptr_t)(ws+236);
	i4 v1328 = *(i4*)(intptr_t)v1327;
	i8 v1329 = (i8)(intptr_t)(ws+2896);
	i4 v1330 = *(i4*)(intptr_t)v1329;
	i4 v1331 = v1328*v1330;
	i8 v1332 = (i8)(intptr_t)(ws+2902);
	i1 v1333 = *(i1*)(intptr_t)v1332;
	i4 v1334 = v1333;
	i4 v1335 = v1331+v1334;
	i8 v1336 = (i8)(intptr_t)(ws+236);
	*(i4*)(intptr_t)v1336 = v1335;

	goto c02_012e;

c02_012f:;

endsub:;
}
const i1 c02_s0036[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };

// lexer_i_malformed workspace at ws+2912 length ws+8
void f71_lexer_i_malformed(i8 p1337 /* s */) {
	*(i8*)(intptr_t)(ws+2912) = p1337; /*s */


void f55_StartError(void);
	f55_StartError();

	i8 v1338 = (i8)(intptr_t)c02_s0036;

void f11_print(i8 /* ptr */);
	f11_print(v1338);

	i8 v1339 = (i8)(intptr_t)(ws+2912);
	i8 v1340 = *(i8*)(intptr_t)v1339;

void f11_print(i8 /* ptr */);
	f11_print(v1340);


void f56_EndError(void);
	f56_EndError();

endsub:;
}
const i1 c02_s0037[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };

// lexer_i_get_escaped workspace at ws+2904 length ws+1
void f72_lexer_i_get_escaped(i1* p1341 /* c */) {


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1342;
	f65_lexer_i_getchar(&v1342);
	i8 v1343 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1343 = v1342;

	i8 v1344 = (i8)(intptr_t)(ws+2904);
	i1 v1345 = *(i1*)(intptr_t)v1344;

	if (v1345 != +110) goto c02_0140;

	i1 v1346 = (i1)+10;
	i8 v1347 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1347 = v1346;

	goto c02_013f;

c02_0140:;

	if (v1345 != +114) goto c02_0141;

	i1 v1348 = (i1)+13;
	i8 v1349 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1349 = v1348;

	goto c02_013f;

c02_0141:;

	if (v1345 != +116) goto c02_0142;

	i1 v1350 = (i1)+9;
	i8 v1351 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1351 = v1350;

	goto c02_013f;

c02_0142:;

	if (v1345 != +92) goto c02_0143;

	i1 v1352 = (i1)+92;
	i8 v1353 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1353 = v1352;

	goto c02_013f;

c02_0143:;

	if (v1345 != +39) goto c02_0144;

	i1 v1354 = (i1)+39;
	i8 v1355 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1355 = v1354;

	goto c02_013f;

c02_0144:;

	if (v1345 != +34) goto c02_0145;

	i1 v1356 = (i1)+34;
	i8 v1357 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1357 = v1356;

	goto c02_013f;

c02_0145:;

	if (v1345 != +48) goto c02_0146;

	i1 v1358 = (i1)+0;
	i8 v1359 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1359 = v1358;

	goto c02_013f;

c02_0146:;

	i8 v1360 = (i8)(intptr_t)c02_s0037;

void f71_lexer_i_malformed(i8 /* s */);
	f71_lexer_i_malformed(v1360);

c02_013f:;


endsub:;
	*p1341 = *(i1*)(intptr_t)(ws+2904);
}
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
const i1 c02_s0039[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// lexer_i_read_string workspace at ws+2896 length ws+1
void f73_lexer_i_read_string(void) {

	i1 v1361 = (i1)+0;
	i8 v1362 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v1362 = v1361;

c02_0147:;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1363;
	f65_lexer_i_getchar(&v1363);
	i8 v1364 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1364 = v1363;

	i8 v1365 = (i8)(intptr_t)(ws+2896);
	i1 v1366 = *(i1*)(intptr_t)v1365;
	i1 v1367 = (i1)+32;
	if (v1366<v1367) goto c02_014c; else goto c02_014d;

c02_014c:;

	i8 v1368 = (i8)(intptr_t)c02_s0038;

void f71_lexer_i_malformed(i8 /* s */);
	f71_lexer_i_malformed(v1368);

	goto c02_0149;

c02_014d:;

c02_0149:;

	i8 v1369 = (i8)(intptr_t)(ws+2896);
	i1 v1370 = *(i1*)(intptr_t)v1369;

	if (v1370 != +34) goto c02_014f;

	goto c02_0148;

c02_014f:;

	if (v1370 != +92) goto c02_0150;


void f72_lexer_i_get_escaped(i1* /* c */);
	i1 v1371;
	f72_lexer_i_get_escaped(&v1371);
	i8 v1372 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1372 = v1371;

c02_0150:;

c02_014e:;


	i8 v1373 = (i8)(intptr_t)(ws+2896);
	i1 v1374 = *(i1*)(intptr_t)v1373;
	i8 v1375 = (i8)(intptr_t)(ws+105);
	i8 v1376 = (i8)(intptr_t)(ws+233);
	i1 v1377 = *(i1*)(intptr_t)v1376;
	i8 v1378 = v1377;
	i8 v1379 = v1375+v1378;
	*(i1*)(intptr_t)v1379 = v1374;

	i8 v1380 = (i8)(intptr_t)(ws+233);
	i1 v1381 = *(i1*)(intptr_t)v1380;
	i1 v1382 = v1381+(+1);
	i8 v1383 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v1383 = v1382;

	i8 v1384 = (i8)(intptr_t)(ws+233);
	i1 v1385 = *(i1*)(intptr_t)v1384;
	i1 v1386 = (i1)+128;
	if (v1385==v1386) goto c02_0154; else goto c02_0155;

c02_0154:;


void f55_StartError(void);
	f55_StartError();

	i8 v1387 = (i8)(intptr_t)c02_s0039;

void f11_print(i8 /* ptr */);
	f11_print(v1387);


void f56_EndError(void);
	f56_EndError();

	goto c02_0151;

c02_0155:;

c02_0151:;

	goto c02_0147;

c02_0148:;

	i1 v1388 = (i1)+0;
	i8 v1389 = (i8)(intptr_t)(ws+105);
	i8 v1390 = (i8)(intptr_t)(ws+233);
	i1 v1391 = *(i1*)(intptr_t)v1390;
	i8 v1392 = v1391;
	i8 v1393 = v1389+v1392;
	*(i1*)(intptr_t)v1393 = v1388;

endsub:;
}
const i1 c02_s003a[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };

// malformed workspace at ws+2896 length ws+0
void f75_malformed(void) {

	i8 v1394 = (i8)(intptr_t)c02_s003a;

void f71_lexer_i_malformed(i8 /* s */);
	f71_lexer_i_malformed(v1394);

endsub:;
}

// lexer_i_read_char workspace at ws+2888 length ws+1
void f74_lexer_i_read_char(void) {



void f65_lexer_i_getchar(i1* /* c */);
	i1 v1395;
	f65_lexer_i_getchar(&v1395);
	i8 v1396 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1396 = v1395;

	i8 v1397 = (i8)(intptr_t)(ws+2888);
	i1 v1398 = *(i1*)(intptr_t)v1397;
	i1 v1399 = (i1)+32;
	if (v1398<v1399) goto c02_015b; else goto c02_015d;

c02_015d:;

	i8 v1400 = (i8)(intptr_t)(ws+2888);
	i1 v1401 = *(i1*)(intptr_t)v1400;
	i1 v1402 = (i1)+39;
	if (v1401==v1402) goto c02_015b; else goto c02_015c;

c02_015b:;


void f75_malformed(void);
	f75_malformed();

	goto c02_0156;

c02_015c:;

c02_0156:;

	i8 v1403 = (i8)(intptr_t)(ws+2888);
	i1 v1404 = *(i1*)(intptr_t)v1403;
	i1 v1405 = (i1)+92;
	if (v1404==v1405) goto c02_0161; else goto c02_0162;

c02_0161:;


void f72_lexer_i_get_escaped(i1* /* c */);
	i1 v1406;
	f72_lexer_i_get_escaped(&v1406);
	i8 v1407 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1407 = v1406;

	goto c02_015e;

c02_0162:;

c02_015e:;

	i8 v1408 = (i8)(intptr_t)(ws+2888);
	i1 v1409 = *(i1*)(intptr_t)v1408;
	i4 v1410 = v1409;
	i8 v1411 = (i8)(intptr_t)(ws+236);
	*(i4*)(intptr_t)v1411 = v1410;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1412;
	f65_lexer_i_getchar(&v1412);
	i8 v1413 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1413 = v1412;

	i8 v1414 = (i8)(intptr_t)(ws+2888);
	i1 v1415 = *(i1*)(intptr_t)v1414;
	i1 v1416 = (i1)+39;
	if (v1415==v1416) goto c02_0167; else goto c02_0166;

c02_0166:;


void f75_malformed(void);
	f75_malformed();

	goto c02_0163;

c02_0167:;

c02_0163:;

endsub:;
}
const i1 c02_s003b[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// malformed_include workspace at ws+2896 length ws+0
void f77_malformed_include(void) {

	i8 v1417 = (i8)(intptr_t)c02_s003b;

void f71_lexer_i_malformed(i8 /* s */);
	f71_lexer_i_malformed(v1417);

endsub:;
}

// lexer_i_include workspace at ws+2888 length ws+1
void f76_lexer_i_include(void) {



void f67_lexer_i_skipwhitespace(void);
	f67_lexer_i_skipwhitespace();


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1418;
	f65_lexer_i_getchar(&v1418);
	i8 v1419 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1419 = v1418;

	i8 v1420 = (i8)(intptr_t)(ws+2888);
	i1 v1421 = *(i1*)(intptr_t)v1420;
	i1 v1422 = (i1)+34;
	if (v1421==v1422) goto c02_016c; else goto c02_016b;

c02_016b:;


void f77_malformed_include(void);
	f77_malformed_include();

	goto c02_0168;

c02_016c:;

c02_0168:;


void f73_lexer_i_read_string(void);
	f73_lexer_i_read_string();


void f67_lexer_i_skipwhitespace(void);
	f67_lexer_i_skipwhitespace();


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1423;
	f65_lexer_i_getchar(&v1423);
	i8 v1424 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1424 = v1423;

	i8 v1425 = (i8)(intptr_t)(ws+2888);
	i1 v1426 = *(i1*)(intptr_t)v1425;
	i1 v1427 = (i1)+59;
	if (v1426==v1427) goto c02_0171; else goto c02_0170;

c02_0170:;


void f77_malformed_include(void);
	f77_malformed_include();

	goto c02_016d;

c02_0171:;

c02_016d:;

	i8 v1428 = (i8)(intptr_t)(ws+105);

void f62_LexerIncludeFile(i8 /* path */);
	f62_LexerIncludeFile(v1428);

endsub:;
}
const i1 c02_s003c[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// lexer_i_line_directive workspace at ws+2888 length ws+1
void f78_lexer_i_line_directive(void) {


void f67_lexer_i_skipwhitespace(void);
	f67_lexer_i_skipwhitespace();


void f70_lexer_i_read_number(void);
	f70_lexer_i_read_number();


void f67_lexer_i_skipwhitespace(void);
	f67_lexer_i_skipwhitespace();


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1429;
	f65_lexer_i_getchar(&v1429);
	i8 v1430 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1430 = v1429;

	i8 v1431 = (i8)(intptr_t)(ws+2888);
	i1 v1432 = *(i1*)(intptr_t)v1431;
	i1 v1433 = (i1)+34;
	if (v1432==v1433) goto c02_0176; else goto c02_0175;

c02_0175:;

	i8 v1434 = (i8)(intptr_t)c02_s003c;

void f71_lexer_i_malformed(i8 /* s */);
	f71_lexer_i_malformed(v1434);

	goto c02_0172;

c02_0176:;

c02_0172:;


void f73_lexer_i_read_string(void);
	f73_lexer_i_read_string();

	i8 v1435 = (i8)(intptr_t)(ws+236);
	i4 v1436 = *(i4*)(intptr_t)v1435;
	i2 v1437 = (s2)(s4)v1436;
	i8 v1438 = (i8)(intptr_t)(ws+96);
	i8 v1439 = *(i8*)(intptr_t)v1438;
	i8 v1440 = v1439+(+16);
	*(i2*)(intptr_t)v1440 = v1437;

	i8 v1441 = (i8)(intptr_t)(ws+96);
	i8 v1442 = *(i8*)(intptr_t)v1441;
	i8 v1443 = v1442+(+8);
	i8 v1444 = *(i8*)(intptr_t)v1443;

void f32_Free(i8 /* block */);
	f32_Free(v1444);

	i8 v1445 = (i8)(intptr_t)(ws+105);

void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v1446;
	f33_StrDup(&v1446, v1445);
	i8 v1447 = (i8)(intptr_t)(ws+96);
	i8 v1448 = *(i8*)(intptr_t)v1447;
	i8 v1449 = v1448+(+8);
	*(i8*)(intptr_t)v1449 = v1446;

endsub:;
}
const i1 c02_s003d[] = { 0x6c,0x69,0x6e,0x65,0 };

// LexerReadToken workspace at ws+2880 length ws+3
void f63_LexerReadToken(i1* p1084 /* token */) {














c02_0177:;


void f67_lexer_i_skipwhitespace(void);
	f67_lexer_i_skipwhitespace();


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1450;
	f65_lexer_i_getchar(&v1450);
	i8 v1451 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1451 = v1450;

	i8 v1452 = (i8)(intptr_t)(ws+2881);
	i1 v1453 = *(i1*)(intptr_t)v1452;
	i1 v1454 = (i1)+35;
	if (v1453==v1454) goto c02_017c; else goto c02_017d;

c02_017c:;

	i1 v1455 = (i1)+0;
	i8 v1456 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v1456 = v1455;


void f68_lexer_i_read_identifier(void);
	f68_lexer_i_read_identifier();

	i8 v1457 = (i8)(intptr_t)(ws+105);
	i8 v1458 = (i8)(intptr_t)c02_s003d;

void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v1459;
	f25_StrCmp(&v1459, v1458, v1457);
	i1 v1460 = (i1)+0;
	if (v1459==v1460) goto c02_0181; else goto c02_0182;

c02_0181:;


void f78_lexer_i_line_directive(void);
	f78_lexer_i_line_directive();

	goto c02_017e;

c02_0182:;

c02_017e:;

c02_0183:;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1461;
	f65_lexer_i_getchar(&v1461);
	i8 v1462 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1462 = v1461;

	i8 v1463 = (i8)(intptr_t)(ws+2881);
	i1 v1464 = *(i1*)(intptr_t)v1463;
	i1 v1465 = (i1)+10;
	if (v1464==v1465) goto c02_018a; else goto c02_018c;

c02_018c:;

	i8 v1466 = (i8)(intptr_t)(ws+2881);
	i1 v1467 = *(i1*)(intptr_t)v1466;
	i1 v1468 = (i1)+0;
	if (v1467==v1468) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1469 = (i8)(intptr_t)(ws+2881);
	i1 v1470 = *(i1*)(intptr_t)v1469;
	i8 v1471 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1471 = v1470;

	goto c02_0184;

c02_018b:;

c02_0185:;

	goto c02_0183;

c02_0184:;

	goto c02_0177;

c02_017d:;

c02_0179:;

	i8 v1472 = (i8)(intptr_t)(ws+2881);
	i1 v1473 = *(i1*)(intptr_t)v1472;

	if (v1473 != +0) goto c02_018e;

	i1 v1474 = (i1)+0;
	i8 v1475 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1475 = v1474;

	goto c02_018d;

c02_018e:;

	if (v1473 != +58) goto c02_018f;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1476;
	f65_lexer_i_getchar(&v1476);
	i8 v1477 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1477 = v1476;

	i8 v1478 = (i8)(intptr_t)(ws+2881);
	i1 v1479 = *(i1*)(intptr_t)v1478;
	i1 v1480 = (i1)+61;
	if (v1479==v1480) goto c02_0193; else goto c02_0194;

c02_0193:;

	i1 v1481 = (i1)+2;
	i8 v1482 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1482 = v1481;

	goto c02_0190;

c02_0194:;

	i8 v1483 = (i8)(intptr_t)(ws+2881);
	i1 v1484 = *(i1*)(intptr_t)v1483;
	i8 v1485 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1485 = v1484;

	i1 v1486 = (i1)+6;
	i8 v1487 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1487 = v1486;

c02_0190:;

	goto c02_018d;

c02_018f:;

	if (v1473 != +60) goto c02_0195;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1488;
	f65_lexer_i_getchar(&v1488);
	i8 v1489 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1489 = v1488;

	i8 v1490 = (i8)(intptr_t)(ws+2881);
	i1 v1491 = *(i1*)(intptr_t)v1490;

	if (v1491 != +60) goto c02_0197;

	i1 v1492 = (i1)+55;
	i8 v1493 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1493 = v1492;

	goto c02_0196;

c02_0197:;

	if (v1491 != +61) goto c02_0198;

	i1 v1494 = (i1)+50;
	i8 v1495 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1495 = v1494;

	goto c02_0196;

c02_0198:;

	i8 v1496 = (i8)(intptr_t)(ws+2881);
	i1 v1497 = *(i1*)(intptr_t)v1496;
	i8 v1498 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1498 = v1497;

	i1 v1499 = (i1)+49;
	i8 v1500 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1500 = v1499;

c02_0196:;


	goto c02_018d;

c02_0195:;

	if (v1473 != +61) goto c02_0199;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1501;
	f65_lexer_i_getchar(&v1501);
	i8 v1502 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(ws+2881);
	i1 v1504 = *(i1*)(intptr_t)v1503;
	i1 v1505 = (i1)+61;
	if (v1504==v1505) goto c02_019d; else goto c02_019e;

c02_019d:;

	i1 v1506 = (i1)+53;
	i8 v1507 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1507 = v1506;

	goto c02_019a;

c02_019e:;

	i8 v1508 = (i8)(intptr_t)(ws+2881);
	i1 v1509 = *(i1*)(intptr_t)v1508;

void f66_lexer_i_unparseable(i1 /* c */);
	f66_lexer_i_unparseable(v1509);

c02_019a:;

	goto c02_018d;

c02_0199:;

	if (v1473 != +33) goto c02_019f;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1510;
	f65_lexer_i_getchar(&v1510);
	i8 v1511 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1511 = v1510;

	i8 v1512 = (i8)(intptr_t)(ws+2881);
	i1 v1513 = *(i1*)(intptr_t)v1512;
	i1 v1514 = (i1)+61;
	if (v1513==v1514) goto c02_01a3; else goto c02_01a4;

c02_01a3:;

	i1 v1515 = (i1)+54;
	i8 v1516 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1516 = v1515;

	goto c02_01a0;

c02_01a4:;

	i8 v1517 = (i8)(intptr_t)(ws+2881);
	i1 v1518 = *(i1*)(intptr_t)v1517;

void f66_lexer_i_unparseable(i1 /* c */);
	f66_lexer_i_unparseable(v1518);

c02_01a0:;

	goto c02_018d;

c02_019f:;

	if (v1473 != +62) goto c02_01a5;


void f65_lexer_i_getchar(i1* /* c */);
	i1 v1519;
	f65_lexer_i_getchar(&v1519);
	i8 v1520 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1520 = v1519;

	i8 v1521 = (i8)(intptr_t)(ws+2881);
	i1 v1522 = *(i1*)(intptr_t)v1521;

	if (v1522 != +62) goto c02_01a7;

	i1 v1523 = (i1)+56;
	i8 v1524 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1524 = v1523;

	goto c02_01a6;

c02_01a7:;

	if (v1522 != +61) goto c02_01a8;

	i1 v1525 = (i1)+52;
	i8 v1526 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1526 = v1525;

	goto c02_01a6;

c02_01a8:;

	i8 v1527 = (i8)(intptr_t)(ws+2881);
	i1 v1528 = *(i1*)(intptr_t)v1527;
	i8 v1529 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1529 = v1528;

	i1 v1530 = (i1)+51;
	i8 v1531 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1531 = v1530;

c02_01a6:;


	goto c02_018d;

c02_01a5:;

	if (v1473 != +34) goto c02_01a9;


void f73_lexer_i_read_string(void);
	f73_lexer_i_read_string();

	i1 v1532 = (i1)+41;
	i8 v1533 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1533 = v1532;

	goto c02_018d;

c02_01a9:;

	if (v1473 != +39) goto c02_01aa;


void f74_lexer_i_read_char(void);
	f74_lexer_i_read_char();

	i1 v1534 = (i1)+34;
	i8 v1535 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1535 = v1534;

	goto c02_018d;

c02_01aa:;

	i8 v1536 = (i8)(intptr_t)(ws+2881);
	i1 v1537 = *(i1*)(intptr_t)v1536;

void f64_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1538;
	i1 v1539;
	f64_lexer_i_ctype(&v1538, &v1539, v1537);

	i8 v1540 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1540 = v1539;

	i8 v1541 = (i8)(intptr_t)(ws+2882);
	*(i1*)(intptr_t)v1541 = v1538;

	i8 v1542 = (i8)(intptr_t)(ws+2882);
	i1 v1543 = *(i1*)(intptr_t)v1542;
	i1 v1544 = v1543&(+128);
	i1 v1545 = (i1)+0;
	if (v1544==v1545) goto c02_01af; else goto c02_01ae;

c02_01ae:;

	goto c02_01ab;

c02_01af:;

	i8 v1546 = (i8)(intptr_t)(ws+2882);
	i1 v1547 = *(i1*)(intptr_t)v1546;
	i1 v1548 = v1547&(+1);
	i1 v1549 = (i1)+0;
	if (v1548==v1549) goto c02_01b3; else goto c02_01b2;

c02_01b2:;

	i8 v1550 = (i8)(intptr_t)(ws+2881);
	i1 v1551 = *(i1*)(intptr_t)v1550;
	i8 v1552 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1552 = v1551;


void f70_lexer_i_read_number(void);
	f70_lexer_i_read_number();

	i1 v1553 = (i1)+34;
	i8 v1554 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1554 = v1553;

	goto c02_01ab;

c02_01b3:;

	i8 v1555 = (i8)(intptr_t)(ws+2882);
	i1 v1556 = *(i1*)(intptr_t)v1555;
	i1 v1557 = v1556&(+16);
	i1 v1558 = (i1)+0;
	if (v1557==v1558) goto c02_01b7; else goto c02_01b6;

c02_01b6:;

	i1 v1559 = (i1)+1;
	i8 v1560 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v1560 = v1559;

	i8 v1561 = (i8)(intptr_t)(ws+2881);
	i1 v1562 = *(i1*)(intptr_t)v1561;
	i8 v1563 = (i8)(intptr_t)(ws+105);
	*(i1*)(intptr_t)v1563 = v1562;


void f68_lexer_i_read_identifier(void);
	f68_lexer_i_read_identifier();


void f69_lexer_i_match_keyword(i1* /* token */);
	i1 v1564;
	f69_lexer_i_match_keyword(&v1564);
	i8 v1565 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1565 = v1564;

	goto c02_01ab;

c02_01b7:;

	i8 v1566 = (i8)(intptr_t)(ws+2881);
	i1 v1567 = *(i1*)(intptr_t)v1566;

void f66_lexer_i_unparseable(i1 /* c */);
	f66_lexer_i_unparseable(v1567);

c02_01ab:;

c02_018d:;


	i8 v1568 = (i8)(intptr_t)(ws+2880);
	i1 v1569 = *(i1*)(intptr_t)v1568;
	i1 v1570 = (i1)+255;
	if (v1569==v1570) goto c02_01bb; else goto c02_01bc;

c02_01bb:;


void f76_lexer_i_include(void);
	f76_lexer_i_include();

	goto c02_01b8;

c02_01bc:;

	goto c02_0178;

c02_01b8:;

	goto c02_0177;

c02_0178:;

endsub:;
	*p1084 = *(i1*)(intptr_t)(ws+2880);
}

// CountParameters workspace at ws+3000 length ws+9
void f79_CountParameters(i1* p1571 /* count */, i8 p1572 /* param */) {
	*(i8*)(intptr_t)(ws+3000) = p1572; /*param */

	i1 v1573 = (i1)+0;
	i8 v1574 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v1574 = v1573;

c02_01bf:;

	i8 v1575 = (i8)(intptr_t)(ws+3000);
	i8 v1576 = *(i8*)(intptr_t)v1575;
	i8 v1577 = (i8)+0;
	if (v1576==v1577) goto c02_01c2; else goto c02_01c1;

c02_01c1:;

	i8 v1578 = (i8)(intptr_t)(ws+3008);
	i1 v1579 = *(i1*)(intptr_t)v1578;
	i1 v1580 = v1579+(+1);
	i8 v1581 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v1581 = v1580;

	i8 v1582 = (i8)(intptr_t)(ws+3000);
	i8 v1583 = *(i8*)(intptr_t)v1582;
	i8 v1584 = v1583+(+16);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v1586 = v1585;

	goto c02_01bf;

c02_01c2:;

endsub:;
	*p1571 = *(i1*)(intptr_t)(ws+3008);
}

// GetInputParameter workspace at ws+3280 length ws+24
void f80_GetInputParameter(i8* p1587 /* param */, i1 p1588 /* count */, i8 p1589 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p1589; /*subr */
	*(i1*)(intptr_t)(ws+3288) = p1588; /*count */

	i8 v1590 = (i8)(intptr_t)(ws+3280);
	i8 v1591 = *(i8*)(intptr_t)v1590;
	i8 v1592 = v1591+(+40);
	i8 v1593 = *(i8*)(intptr_t)v1592;
	i8 v1594 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1594 = v1593;

c02_01c5:;

	i8 v1595 = (i8)(intptr_t)(ws+3288);
	i1 v1596 = *(i1*)(intptr_t)v1595;
	i1 v1597 = (i1)+0;
	if (v1596==v1597) goto c02_01c8; else goto c02_01c7;

c02_01c7:;

	i8 v1598 = (i8)(intptr_t)(ws+3296);
	i8 v1599 = *(i8*)(intptr_t)v1598;
	i8 v1600 = v1599+(+16);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	i8 v1602 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1602 = v1601;

	i8 v1603 = (i8)(intptr_t)(ws+3288);
	i1 v1604 = *(i1*)(intptr_t)v1603;
	i1 v1605 = v1604+(-1);
	i8 v1606 = (i8)(intptr_t)(ws+3288);
	*(i1*)(intptr_t)v1606 = v1605;

	goto c02_01c5;

c02_01c8:;

endsub:;
	*p1587 = *(i8*)(intptr_t)(ws+3296);
}

// GetOutputParameter workspace at ws+3280 length ws+24
void f81_GetOutputParameter(i8* p1607 /* param */, i1 p1608 /* count */, i8 p1609 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p1609; /*subr */
	*(i1*)(intptr_t)(ws+3288) = p1608; /*count */

	i8 v1610 = (i8)(intptr_t)(ws+3280);
	i8 v1611 = *(i8*)(intptr_t)v1610;
	i8 v1612 = v1611+(+48);
	i8 v1613 = *(i8*)(intptr_t)v1612;
	i8 v1614 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1614 = v1613;

c02_01cb:;

	i8 v1615 = (i8)(intptr_t)(ws+3288);
	i1 v1616 = *(i1*)(intptr_t)v1615;
	i1 v1617 = (i1)+0;
	if (v1616==v1617) goto c02_01ce; else goto c02_01cd;

c02_01cd:;

	i8 v1618 = (i8)(intptr_t)(ws+3296);
	i8 v1619 = *(i8*)(intptr_t)v1618;
	i8 v1620 = v1619+(+16);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	i8 v1622 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1622 = v1621;

	i8 v1623 = (i8)(intptr_t)(ws+3288);
	i1 v1624 = *(i1*)(intptr_t)v1623;
	i1 v1625 = v1624+(-1);
	i8 v1626 = (i8)(intptr_t)(ws+3288);
	*(i1*)(intptr_t)v1626 = v1625;

	goto c02_01cb;

c02_01ce:;

endsub:;
	*p1607 = *(i8*)(intptr_t)(ws+3296);
}

// WidthToIndex workspace at ws+3104 length ws+2
void f83_WidthToIndex(i1* p1631 /* index */, i1 p1632 /* width */) {
	*(i1*)(intptr_t)(ws+3104) = p1632; /*width */

	i8 v1633 = (i8)(intptr_t)(ws+3104);
	i1 v1634 = *(i1*)(intptr_t)v1633;

	if (v1634 != +4) goto c02_01d0;

	i1 v1635 = (i1)+3;
	i8 v1636 = (i8)(intptr_t)(ws+3105);
	*(i1*)(intptr_t)v1636 = v1635;

	goto c02_01cf;

c02_01d0:;

	if (v1634 != +8) goto c02_01d1;

	i1 v1637 = (i1)+4;
	i8 v1638 = (i8)(intptr_t)(ws+3105);
	*(i1*)(intptr_t)v1638 = v1637;

	goto c02_01cf;

c02_01d1:;

	i8 v1639 = (i8)(intptr_t)(ws+3104);
	i1 v1640 = *(i1*)(intptr_t)v1639;
	i8 v1641 = (i8)(intptr_t)(ws+3105);
	*(i1*)(intptr_t)v1641 = v1640;

c02_01cf:;


endsub:;
	*p1631 = *(i1*)(intptr_t)(ws+3105);
}

// AllocateNewNode workspace at ws+3256 length ws+16
void f84_AllocateNewNode(i8* p1642 /* m */, i1 p1643 /* code */) {
	*(i1*)(intptr_t)(ws+3256) = p1643; /*code */

	i8 v1644 = (i8)+67;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1645;
	f31_Alloc(&v1645, v1644);
	i8 v1646 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v1646 = v1645;

	i8 v1647 = (i8)(intptr_t)(ws+3256);
	i1 v1648 = *(i1*)(intptr_t)v1647;
	i8 v1649 = (i8)(intptr_t)(ws+3264);
	i8 v1650 = *(i8*)(intptr_t)v1649;
	i8 v1651 = v1650+(+66);
	*(i1*)(intptr_t)v1651 = v1648;

endsub:;
	*p1642 = *(i8*)(intptr_t)(ws+3264);
}

// MidEndsub workspace at ws+3000 length ws+16
void f85_MidEndsub(i8* p1652 /* m */, i8 p1653 /* subr */) {
	*(i8*)(intptr_t)(ws+3000) = p1653; /*subr */

	i1 v1654 = (i1)+5;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1655;
	f84_AllocateNewNode(&v1655, v1654);
	i8 v1656 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1656 = v1655;

	i8 v1657 = (i8)(intptr_t)(ws+3000);
	i8 v1658 = *(i8*)(intptr_t)v1657;
	i8 v1659 = (i8)(intptr_t)(ws+3008);
	i8 v1660 = *(i8*)(intptr_t)v1659;
	*(i8*)(intptr_t)v1660 = v1658;

endsub:;
	*p1652 = *(i8*)(intptr_t)(ws+3008);
}

// MidJump workspace at ws+3008 length ws+16
void f88_MidJump(i8* p1700 /* m */, i2 p1701 /* label */) {
	*(i2*)(intptr_t)(ws+3008) = p1701; /*label */

	i1 v1702 = (i1)+22;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1703;
	f84_AllocateNewNode(&v1703, v1702);
	i8 v1704 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1704 = v1703;

	i8 v1705 = (i8)(intptr_t)(ws+3008);
	i2 v1706 = *(i2*)(intptr_t)v1705;
	i8 v1707 = (i8)(intptr_t)(ws+3016);
	i8 v1708 = *(i8*)(intptr_t)v1707;
	*(i2*)(intptr_t)v1708 = v1706;

endsub:;
	*p1700 = *(i8*)(intptr_t)(ws+3016);
}

// MidPair workspace at ws+3000 length ws+24
void f90_MidPair(i8* p1723 /* m */, i8 p1724 /* right */, i8 p1725 /* left */) {
	*(i8*)(intptr_t)(ws+3000) = p1725; /*left */
	*(i8*)(intptr_t)(ws+3008) = p1724; /*right */

	i1 v1726 = (i1)+20;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1727;
	f84_AllocateNewNode(&v1727, v1726);
	i8 v1728 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1728 = v1727;

	i8 v1729 = (i8)(intptr_t)(ws+3000);
	i8 v1730 = *(i8*)(intptr_t)v1729;
	i8 v1731 = (i8)(intptr_t)(ws+3016);
	i8 v1732 = *(i8*)(intptr_t)v1731;
	i8 v1733 = v1732+(+24);
	*(i8*)(intptr_t)v1733 = v1730;

	i8 v1734 = (i8)(intptr_t)(ws+3008);
	i8 v1735 = *(i8*)(intptr_t)v1734;
	i8 v1736 = (i8)(intptr_t)(ws+3016);
	i8 v1737 = *(i8*)(intptr_t)v1736;
	i8 v1738 = v1737+(+32);
	*(i8*)(intptr_t)v1738 = v1735;

endsub:;
	*p1723 = *(i8*)(intptr_t)(ws+3016);
}

// MidStartcase workspace at ws+3008 length ws+24
void f92_MidStartcase(i8* p1759 /* m */, i8 p1760 /* left */, i1 p1761 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p1761; /*width */
	*(i8*)(intptr_t)(ws+3016) = p1760; /*left */

	i8 v1762 = (i8)(intptr_t)(ws+3008);
	i1 v1763 = *(i1*)(intptr_t)v1762;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1764;
	f83_WidthToIndex(&v1764, v1763);
	i1 v1765 = v1764+(+70);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1766;
	f84_AllocateNewNode(&v1766, v1765);
	i8 v1767 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1767 = v1766;

	i8 v1768 = (i8)(intptr_t)(ws+3016);
	i8 v1769 = *(i8*)(intptr_t)v1768;
	i8 v1770 = (i8)(intptr_t)(ws+3024);
	i8 v1771 = *(i8*)(intptr_t)v1770;
	i8 v1772 = v1771+(+24);
	*(i8*)(intptr_t)v1772 = v1769;

endsub:;
	*p1759 = *(i8*)(intptr_t)(ws+3024);
}

// MidAsmstart workspace at ws+3000 length ws+8
void f93_MidAsmstart(i8* p1773 /* m */) {

	i1 v1774 = (i1)+14;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1775;
	f84_AllocateNewNode(&v1775, v1774);
	i8 v1776 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v1776 = v1775;

endsub:;
	*p1773 = *(i8*)(intptr_t)(ws+3000);
}

// MidConstant workspace at ws+3096 length ws+16
void f95_MidConstant(i8* p1791 /* m */, i4 p1792 /* value */) {
	*(i4*)(intptr_t)(ws+3096) = p1792; /*value */

	i1 v1793 = (i1)+40;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1794;
	f84_AllocateNewNode(&v1794, v1793);
	i8 v1795 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1795 = v1794;

	i8 v1796 = (i8)(intptr_t)(ws+3096);
	i4 v1797 = *(i4*)(intptr_t)v1796;
	i8 v1798 = (i8)(intptr_t)(ws+3104);
	i8 v1799 = *(i8*)(intptr_t)v1798;
	*(i4*)(intptr_t)v1799 = v1797;

endsub:;
	*p1791 = *(i8*)(intptr_t)(ws+3104);
}

// MidEndcase workspace at ws+3008 length ws+16
void f97_MidEndcase(i8* p1820 /* m */, i1 p1821 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p1821; /*width */

	i8 v1822 = (i8)(intptr_t)(ws+3008);
	i1 v1823 = *(i1*)(intptr_t)v1822;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1824;
	f83_WidthToIndex(&v1824, v1823);
	i1 v1825 = v1824+(+80);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1826;
	f84_AllocateNewNode(&v1826, v1825);
	i8 v1827 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1827 = v1826;

endsub:;
	*p1820 = *(i8*)(intptr_t)(ws+3016);
}

// MidBand workspace at ws+3000 length ws+32
void f98_MidBand(i8* p1828 /* m */, i1 p1829 /* negated */, i2 p1830 /* fallthrough */, i2 p1831 /* falselabel */, i2 p1832 /* truelabel */, i8 p1833 /* right */, i8 p1834 /* left */) {
	*(i8*)(intptr_t)(ws+3000) = p1834; /*left */
	*(i8*)(intptr_t)(ws+3008) = p1833; /*right */
	*(i2*)(intptr_t)(ws+3016) = p1832; /*truelabel */
	*(i2*)(intptr_t)(ws+3018) = p1831; /*falselabel */
	*(i2*)(intptr_t)(ws+3020) = p1830; /*fallthrough */
	*(i1*)(intptr_t)(ws+3022) = p1829; /*negated */

	i1 v1835 = (i1)+53;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1836;
	f84_AllocateNewNode(&v1836, v1835);
	i8 v1837 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1837 = v1836;

	i8 v1838 = (i8)(intptr_t)(ws+3000);
	i8 v1839 = *(i8*)(intptr_t)v1838;
	i8 v1840 = (i8)(intptr_t)(ws+3024);
	i8 v1841 = *(i8*)(intptr_t)v1840;
	i8 v1842 = v1841+(+24);
	*(i8*)(intptr_t)v1842 = v1839;

	i8 v1843 = (i8)(intptr_t)(ws+3008);
	i8 v1844 = *(i8*)(intptr_t)v1843;
	i8 v1845 = (i8)(intptr_t)(ws+3024);
	i8 v1846 = *(i8*)(intptr_t)v1845;
	i8 v1847 = v1846+(+32);
	*(i8*)(intptr_t)v1847 = v1844;

	i8 v1848 = (i8)(intptr_t)(ws+3016);
	i2 v1849 = *(i2*)(intptr_t)v1848;
	i8 v1850 = (i8)(intptr_t)(ws+3024);
	i8 v1851 = *(i8*)(intptr_t)v1850;
	*(i2*)(intptr_t)v1851 = v1849;

	i8 v1852 = (i8)(intptr_t)(ws+3018);
	i2 v1853 = *(i2*)(intptr_t)v1852;
	i8 v1854 = (i8)(intptr_t)(ws+3024);
	i8 v1855 = *(i8*)(intptr_t)v1854;
	i8 v1856 = v1855+(+2);
	*(i2*)(intptr_t)v1856 = v1853;

	i8 v1857 = (i8)(intptr_t)(ws+3020);
	i2 v1858 = *(i2*)(intptr_t)v1857;
	i8 v1859 = (i8)(intptr_t)(ws+3024);
	i8 v1860 = *(i8*)(intptr_t)v1859;
	i8 v1861 = v1860+(+4);
	*(i2*)(intptr_t)v1861 = v1858;

	i8 v1862 = (i8)(intptr_t)(ws+3022);
	i1 v1863 = *(i1*)(intptr_t)v1862;
	i8 v1864 = (i8)(intptr_t)(ws+3024);
	i8 v1865 = *(i8*)(intptr_t)v1864;
	i8 v1866 = v1865+(+6);
	*(i1*)(intptr_t)v1866 = v1863;

endsub:;
	*p1828 = *(i8*)(intptr_t)(ws+3024);
}

// MidAsmsymbol workspace at ws+3008 length ws+16
void f100_MidAsmsymbol(i8* p1887 /* m */, i8 p1888 /* sym */) {
	*(i8*)(intptr_t)(ws+3008) = p1888; /*sym */

	i1 v1889 = (i1)+16;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1890;
	f84_AllocateNewNode(&v1890, v1889);
	i8 v1891 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1891 = v1890;

	i8 v1892 = (i8)(intptr_t)(ws+3008);
	i8 v1893 = *(i8*)(intptr_t)v1892;
	i8 v1894 = (i8)(intptr_t)(ws+3016);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	*(i8*)(intptr_t)v1895 = v1893;

endsub:;
	*p1887 = *(i8*)(intptr_t)(ws+3016);
}

// MidString workspace at ws+3000 length ws+16
void f101_MidString(i8* p1896 /* m */, i8 p1897 /* text */) {
	*(i8*)(intptr_t)(ws+3000) = p1897; /*text */

	i1 v1898 = (i1)+41;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1899;
	f84_AllocateNewNode(&v1899, v1898);
	i8 v1900 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1900 = v1899;

	i8 v1901 = (i8)(intptr_t)(ws+3000);
	i8 v1902 = *(i8*)(intptr_t)v1901;
	i8 v1903 = (i8)(intptr_t)(ws+3008);
	i8 v1904 = *(i8*)(intptr_t)v1903;
	*(i8*)(intptr_t)v1904 = v1902;

endsub:;
	*p1896 = *(i8*)(intptr_t)(ws+3008);
}

// MidAsmvalue workspace at ws+3008 length ws+16
void f102_MidAsmvalue(i8* p1905 /* m */, i4 p1906 /* value */) {
	*(i4*)(intptr_t)(ws+3008) = p1906; /*value */

	i1 v1907 = (i1)+17;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1908;
	f84_AllocateNewNode(&v1908, v1907);
	i8 v1909 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1909 = v1908;

	i8 v1910 = (i8)(intptr_t)(ws+3008);
	i4 v1911 = *(i4*)(intptr_t)v1910;
	i8 v1912 = (i8)(intptr_t)(ws+3016);
	i8 v1913 = *(i8*)(intptr_t)v1912;
	*(i4*)(intptr_t)v1913 = v1911;

endsub:;
	*p1905 = *(i8*)(intptr_t)(ws+3016);
}

// MidInit workspace at ws+3048 length ws+16
void f103_MidInit(i8* p1914 /* m */, i4 p1915 /* value */, i1 p1916 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p1916; /*width */
	*(i4*)(intptr_t)(ws+3052) = p1915; /*value */

	i8 v1917 = (i8)(intptr_t)(ws+3048);
	i1 v1918 = *(i1*)(intptr_t)v1917;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1919;
	f83_WidthToIndex(&v1919, v1918);
	i1 v1920 = v1919+(+7);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1921;
	f84_AllocateNewNode(&v1921, v1920);
	i8 v1922 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v1922 = v1921;

	i8 v1923 = (i8)(intptr_t)(ws+3052);
	i4 v1924 = *(i4*)(intptr_t)v1923;
	i8 v1925 = (i8)(intptr_t)(ws+3056);
	i8 v1926 = *(i8*)(intptr_t)v1925;
	*(i4*)(intptr_t)v1926 = v1924;

endsub:;
	*p1914 = *(i8*)(intptr_t)(ws+3056);
}

// MidAsmtext workspace at ws+3000 length ws+16
void f104_MidAsmtext(i8* p1927 /* m */, i8 p1928 /* text */) {
	*(i8*)(intptr_t)(ws+3000) = p1928; /*text */

	i1 v1929 = (i1)+15;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1930;
	f84_AllocateNewNode(&v1930, v1929);
	i8 v1931 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1931 = v1930;

	i8 v1932 = (i8)(intptr_t)(ws+3000);
	i8 v1933 = *(i8*)(intptr_t)v1932;
	i8 v1934 = (i8)(intptr_t)(ws+3008);
	i8 v1935 = *(i8*)(intptr_t)v1934;
	*(i8*)(intptr_t)v1935 = v1933;

endsub:;
	*p1927 = *(i8*)(intptr_t)(ws+3008);
}

// MidFallback workspace at ws+3240 length ws+16
void f105_MidFallback(i8* p1936 /* m */, i8 p1937 /* left */) {
	*(i8*)(intptr_t)(ws+3240) = p1937; /*left */

	i1 v1938 = (i1)+19;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1939;
	f84_AllocateNewNode(&v1939, v1938);
	i8 v1940 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v1940 = v1939;

	i8 v1941 = (i8)(intptr_t)(ws+3240);
	i8 v1942 = *(i8*)(intptr_t)v1941;
	i8 v1943 = (i8)(intptr_t)(ws+3248);
	i8 v1944 = *(i8*)(intptr_t)v1943;
	i8 v1945 = v1944+(+24);
	*(i8*)(intptr_t)v1945 = v1942;

endsub:;
	*p1936 = *(i8*)(intptr_t)(ws+3248);
}

// MidAsmend workspace at ws+3000 length ws+8
void f106_MidAsmend(i8* p1946 /* m */) {

	i1 v1947 = (i1)+18;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1948;
	f84_AllocateNewNode(&v1948, v1947);
	i8 v1949 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v1949 = v1948;

endsub:;
	*p1946 = *(i8*)(intptr_t)(ws+3000);
}

// MidBlts workspace at ws+3040 length ws+40
void f107_MidBlts(i8* p1950 /* m */, i1 p1951 /* negated */, i2 p1952 /* fallthrough */, i2 p1953 /* falselabel */, i2 p1954 /* truelabel */, i8 p1955 /* right */, i8 p1956 /* left */, i1 p1957 /* width */) {
	*(i1*)(intptr_t)(ws+3040) = p1957; /*width */
	*(i8*)(intptr_t)(ws+3048) = p1956; /*left */
	*(i8*)(intptr_t)(ws+3056) = p1955; /*right */
	*(i2*)(intptr_t)(ws+3064) = p1954; /*truelabel */
	*(i2*)(intptr_t)(ws+3066) = p1953; /*falselabel */
	*(i2*)(intptr_t)(ws+3068) = p1952; /*fallthrough */
	*(i1*)(intptr_t)(ws+3070) = p1951; /*negated */

	i8 v1958 = (i8)(intptr_t)(ws+3040);
	i1 v1959 = *(i1*)(intptr_t)v1958;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1960;
	f83_WidthToIndex(&v1960, v1959);
	i1 v1961 = v1960+(+60);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1962;
	f84_AllocateNewNode(&v1962, v1961);
	i8 v1963 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1963 = v1962;

	i8 v1964 = (i8)(intptr_t)(ws+3048);
	i8 v1965 = *(i8*)(intptr_t)v1964;
	i8 v1966 = (i8)(intptr_t)(ws+3072);
	i8 v1967 = *(i8*)(intptr_t)v1966;
	i8 v1968 = v1967+(+24);
	*(i8*)(intptr_t)v1968 = v1965;

	i8 v1969 = (i8)(intptr_t)(ws+3056);
	i8 v1970 = *(i8*)(intptr_t)v1969;
	i8 v1971 = (i8)(intptr_t)(ws+3072);
	i8 v1972 = *(i8*)(intptr_t)v1971;
	i8 v1973 = v1972+(+32);
	*(i8*)(intptr_t)v1973 = v1970;

	i8 v1974 = (i8)(intptr_t)(ws+3064);
	i2 v1975 = *(i2*)(intptr_t)v1974;
	i8 v1976 = (i8)(intptr_t)(ws+3072);
	i8 v1977 = *(i8*)(intptr_t)v1976;
	*(i2*)(intptr_t)v1977 = v1975;

	i8 v1978 = (i8)(intptr_t)(ws+3066);
	i2 v1979 = *(i2*)(intptr_t)v1978;
	i8 v1980 = (i8)(intptr_t)(ws+3072);
	i8 v1981 = *(i8*)(intptr_t)v1980;
	i8 v1982 = v1981+(+2);
	*(i2*)(intptr_t)v1982 = v1979;

	i8 v1983 = (i8)(intptr_t)(ws+3068);
	i2 v1984 = *(i2*)(intptr_t)v1983;
	i8 v1985 = (i8)(intptr_t)(ws+3072);
	i8 v1986 = *(i8*)(intptr_t)v1985;
	i8 v1987 = v1986+(+4);
	*(i2*)(intptr_t)v1987 = v1984;

	i8 v1988 = (i8)(intptr_t)(ws+3070);
	i1 v1989 = *(i1*)(intptr_t)v1988;
	i8 v1990 = (i8)(intptr_t)(ws+3072);
	i8 v1991 = *(i8*)(intptr_t)v1990;
	i8 v1992 = v1991+(+6);
	*(i1*)(intptr_t)v1992 = v1989;

endsub:;
	*p1950 = *(i8*)(intptr_t)(ws+3072);
}

// MidStartsub workspace at ws+3000 length ws+16
void f109_MidStartsub(i8* p2013 /* m */, i8 p2014 /* subr */) {
	*(i8*)(intptr_t)(ws+3000) = p2014; /*subr */

	i1 v2015 = (i1)+4;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2016;
	f84_AllocateNewNode(&v2016, v2015);
	i8 v2017 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2017 = v2016;

	i8 v2018 = (i8)(intptr_t)(ws+3000);
	i8 v2019 = *(i8*)(intptr_t)v2018;
	i8 v2020 = (i8)(intptr_t)(ws+3008);
	i8 v2021 = *(i8*)(intptr_t)v2020;
	*(i8*)(intptr_t)v2021 = v2019;

endsub:;
	*p2013 = *(i8*)(intptr_t)(ws+3008);
}

// MidBeq workspace at ws+3040 length ws+40
void f110_MidBeq(i8* p2022 /* m */, i1 p2023 /* negated */, i2 p2024 /* fallthrough */, i2 p2025 /* falselabel */, i2 p2026 /* truelabel */, i8 p2027 /* right */, i8 p2028 /* left */, i1 p2029 /* width */) {
	*(i1*)(intptr_t)(ws+3040) = p2029; /*width */
	*(i8*)(intptr_t)(ws+3048) = p2028; /*left */
	*(i8*)(intptr_t)(ws+3056) = p2027; /*right */
	*(i2*)(intptr_t)(ws+3064) = p2026; /*truelabel */
	*(i2*)(intptr_t)(ws+3066) = p2025; /*falselabel */
	*(i2*)(intptr_t)(ws+3068) = p2024; /*fallthrough */
	*(i1*)(intptr_t)(ws+3070) = p2023; /*negated */

	i8 v2030 = (i8)(intptr_t)(ws+3040);
	i1 v2031 = *(i1*)(intptr_t)v2030;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2032;
	f83_WidthToIndex(&v2032, v2031);
	i1 v2033 = v2032+(+55);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2034;
	f84_AllocateNewNode(&v2034, v2033);
	i8 v2035 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2035 = v2034;

	i8 v2036 = (i8)(intptr_t)(ws+3048);
	i8 v2037 = *(i8*)(intptr_t)v2036;
	i8 v2038 = (i8)(intptr_t)(ws+3072);
	i8 v2039 = *(i8*)(intptr_t)v2038;
	i8 v2040 = v2039+(+24);
	*(i8*)(intptr_t)v2040 = v2037;

	i8 v2041 = (i8)(intptr_t)(ws+3056);
	i8 v2042 = *(i8*)(intptr_t)v2041;
	i8 v2043 = (i8)(intptr_t)(ws+3072);
	i8 v2044 = *(i8*)(intptr_t)v2043;
	i8 v2045 = v2044+(+32);
	*(i8*)(intptr_t)v2045 = v2042;

	i8 v2046 = (i8)(intptr_t)(ws+3064);
	i2 v2047 = *(i2*)(intptr_t)v2046;
	i8 v2048 = (i8)(intptr_t)(ws+3072);
	i8 v2049 = *(i8*)(intptr_t)v2048;
	*(i2*)(intptr_t)v2049 = v2047;

	i8 v2050 = (i8)(intptr_t)(ws+3066);
	i2 v2051 = *(i2*)(intptr_t)v2050;
	i8 v2052 = (i8)(intptr_t)(ws+3072);
	i8 v2053 = *(i8*)(intptr_t)v2052;
	i8 v2054 = v2053+(+2);
	*(i2*)(intptr_t)v2054 = v2051;

	i8 v2055 = (i8)(intptr_t)(ws+3068);
	i2 v2056 = *(i2*)(intptr_t)v2055;
	i8 v2057 = (i8)(intptr_t)(ws+3072);
	i8 v2058 = *(i8*)(intptr_t)v2057;
	i8 v2059 = v2058+(+4);
	*(i2*)(intptr_t)v2059 = v2056;

	i8 v2060 = (i8)(intptr_t)(ws+3070);
	i1 v2061 = *(i1*)(intptr_t)v2060;
	i8 v2062 = (i8)(intptr_t)(ws+3072);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = v2063+(+6);
	*(i1*)(intptr_t)v2064 = v2061;

endsub:;
	*p2022 = *(i8*)(intptr_t)(ws+3072);
}

// MidCall workspace at ws+3048 length ws+24
void f111_MidCall(i8* p2065 /* m */, i8 p2066 /* subr */, i8 p2067 /* left */) {
	*(i8*)(intptr_t)(ws+3048) = p2067; /*left */
	*(i8*)(intptr_t)(ws+3056) = p2066; /*subr */

	i1 v2068 = (i1)+24;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2069;
	f84_AllocateNewNode(&v2069, v2068);
	i8 v2070 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2070 = v2069;

	i8 v2071 = (i8)(intptr_t)(ws+3048);
	i8 v2072 = *(i8*)(intptr_t)v2071;
	i8 v2073 = (i8)(intptr_t)(ws+3064);
	i8 v2074 = *(i8*)(intptr_t)v2073;
	i8 v2075 = v2074+(+24);
	*(i8*)(intptr_t)v2075 = v2072;

	i8 v2076 = (i8)(intptr_t)(ws+3056);
	i8 v2077 = *(i8*)(intptr_t)v2076;
	i8 v2078 = (i8)(intptr_t)(ws+3064);
	i8 v2079 = *(i8*)(intptr_t)v2078;
	*(i8*)(intptr_t)v2079 = v2077;

endsub:;
	*p2065 = *(i8*)(intptr_t)(ws+3064);
}

// MidEnd workspace at ws+3008 length ws+8
void f112_MidEnd(i8* p2080 /* m */) {

	i1 v2081 = (i1)+1;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2082;
	f84_AllocateNewNode(&v2082, v2081);
	i8 v2083 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2083 = v2082;

endsub:;
	*p2080 = *(i8*)(intptr_t)(ws+3008);
}

// MidWhencase workspace at ws+3000 length ws+24
void f113_MidWhencase(i8* p2084 /* m */, i2 p2085 /* falselabel */, i4 p2086 /* value */, i1 p2087 /* width */) {
	*(i1*)(intptr_t)(ws+3000) = p2087; /*width */
	*(i4*)(intptr_t)(ws+3004) = p2086; /*value */
	*(i2*)(intptr_t)(ws+3008) = p2085; /*falselabel */

	i8 v2088 = (i8)(intptr_t)(ws+3000);
	i1 v2089 = *(i1*)(intptr_t)v2088;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2090;
	f83_WidthToIndex(&v2090, v2089);
	i1 v2091 = v2090+(+75);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2092;
	f84_AllocateNewNode(&v2092, v2091);
	i8 v2093 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2093 = v2092;

	i8 v2094 = (i8)(intptr_t)(ws+3004);
	i4 v2095 = *(i4*)(intptr_t)v2094;
	i8 v2096 = (i8)(intptr_t)(ws+3016);
	i8 v2097 = *(i8*)(intptr_t)v2096;
	*(i4*)(intptr_t)v2097 = v2095;

	i8 v2098 = (i8)(intptr_t)(ws+3008);
	i2 v2099 = *(i2*)(intptr_t)v2098;
	i8 v2100 = (i8)(intptr_t)(ws+3016);
	i8 v2101 = *(i8*)(intptr_t)v2100;
	i8 v2102 = v2101+(+4);
	*(i2*)(intptr_t)v2102 = v2099;

endsub:;
	*p2084 = *(i8*)(intptr_t)(ws+3016);
}

// MidEndinit workspace at ws+3000 length ws+8
void f114_MidEndinit(i8* p2103 /* m */) {

	i1 v2104 = (i1)+13;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2105;
	f84_AllocateNewNode(&v2105, v2104);
	i8 v2106 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v2106 = v2105;

endsub:;
	*p2103 = *(i8*)(intptr_t)(ws+3000);
}

// MidBltu workspace at ws+3040 length ws+40
void f117_MidBltu(i8* p2146 /* m */, i1 p2147 /* negated */, i2 p2148 /* fallthrough */, i2 p2149 /* falselabel */, i2 p2150 /* truelabel */, i8 p2151 /* right */, i8 p2152 /* left */, i1 p2153 /* width */) {
	*(i1*)(intptr_t)(ws+3040) = p2153; /*width */
	*(i8*)(intptr_t)(ws+3048) = p2152; /*left */
	*(i8*)(intptr_t)(ws+3056) = p2151; /*right */
	*(i2*)(intptr_t)(ws+3064) = p2150; /*truelabel */
	*(i2*)(intptr_t)(ws+3066) = p2149; /*falselabel */
	*(i2*)(intptr_t)(ws+3068) = p2148; /*fallthrough */
	*(i1*)(intptr_t)(ws+3070) = p2147; /*negated */

	i8 v2154 = (i8)(intptr_t)(ws+3040);
	i1 v2155 = *(i1*)(intptr_t)v2154;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2156;
	f83_WidthToIndex(&v2156, v2155);
	i1 v2157 = v2156+(+65);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2158;
	f84_AllocateNewNode(&v2158, v2157);
	i8 v2159 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2159 = v2158;

	i8 v2160 = (i8)(intptr_t)(ws+3048);
	i8 v2161 = *(i8*)(intptr_t)v2160;
	i8 v2162 = (i8)(intptr_t)(ws+3072);
	i8 v2163 = *(i8*)(intptr_t)v2162;
	i8 v2164 = v2163+(+24);
	*(i8*)(intptr_t)v2164 = v2161;

	i8 v2165 = (i8)(intptr_t)(ws+3056);
	i8 v2166 = *(i8*)(intptr_t)v2165;
	i8 v2167 = (i8)(intptr_t)(ws+3072);
	i8 v2168 = *(i8*)(intptr_t)v2167;
	i8 v2169 = v2168+(+32);
	*(i8*)(intptr_t)v2169 = v2166;

	i8 v2170 = (i8)(intptr_t)(ws+3064);
	i2 v2171 = *(i2*)(intptr_t)v2170;
	i8 v2172 = (i8)(intptr_t)(ws+3072);
	i8 v2173 = *(i8*)(intptr_t)v2172;
	*(i2*)(intptr_t)v2173 = v2171;

	i8 v2174 = (i8)(intptr_t)(ws+3066);
	i2 v2175 = *(i2*)(intptr_t)v2174;
	i8 v2176 = (i8)(intptr_t)(ws+3072);
	i8 v2177 = *(i8*)(intptr_t)v2176;
	i8 v2178 = v2177+(+2);
	*(i2*)(intptr_t)v2178 = v2175;

	i8 v2179 = (i8)(intptr_t)(ws+3068);
	i2 v2180 = *(i2*)(intptr_t)v2179;
	i8 v2181 = (i8)(intptr_t)(ws+3072);
	i8 v2182 = *(i8*)(intptr_t)v2181;
	i8 v2183 = v2182+(+4);
	*(i2*)(intptr_t)v2183 = v2180;

	i8 v2184 = (i8)(intptr_t)(ws+3070);
	i1 v2185 = *(i1*)(intptr_t)v2184;
	i8 v2186 = (i8)(intptr_t)(ws+3072);
	i8 v2187 = *(i8*)(intptr_t)v2186;
	i8 v2188 = v2187+(+6);
	*(i1*)(intptr_t)v2188 = v2185;

endsub:;
	*p2146 = *(i8*)(intptr_t)(ws+3072);
}

// MidStore workspace at ws+3048 length ws+32
void f118_MidStore(i8* p2189 /* m */, i8 p2190 /* right */, i8 p2191 /* left */, i1 p2192 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2192; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2191; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2190; /*right */

	i8 v2193 = (i8)(intptr_t)(ws+3048);
	i1 v2194 = *(i1*)(intptr_t)v2193;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2195;
	f83_WidthToIndex(&v2195, v2194);
	i1 v2196 = v2195+(+48);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2197;
	f84_AllocateNewNode(&v2197, v2196);
	i8 v2198 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2198 = v2197;

	i8 v2199 = (i8)(intptr_t)(ws+3056);
	i8 v2200 = *(i8*)(intptr_t)v2199;
	i8 v2201 = (i8)(intptr_t)(ws+3072);
	i8 v2202 = *(i8*)(intptr_t)v2201;
	i8 v2203 = v2202+(+24);
	*(i8*)(intptr_t)v2203 = v2200;

	i8 v2204 = (i8)(intptr_t)(ws+3064);
	i8 v2205 = *(i8*)(intptr_t)v2204;
	i8 v2206 = (i8)(intptr_t)(ws+3072);
	i8 v2207 = *(i8*)(intptr_t)v2206;
	i8 v2208 = v2207+(+32);
	*(i8*)(intptr_t)v2208 = v2205;

endsub:;
	*p2189 = *(i8*)(intptr_t)(ws+3072);
}

// MidArg workspace at ws+3008 length ws+48
void f120_MidArg(i8* p2229 /* m */, i1 p2230 /* remaining */, i8 p2231 /* subr */, i8 p2232 /* right */, i8 p2233 /* left */, i1 p2234 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p2234; /*width */
	*(i8*)(intptr_t)(ws+3016) = p2233; /*left */
	*(i8*)(intptr_t)(ws+3024) = p2232; /*right */
	*(i8*)(intptr_t)(ws+3032) = p2231; /*subr */
	*(i1*)(intptr_t)(ws+3040) = p2230; /*remaining */

	i8 v2235 = (i8)(intptr_t)(ws+3008);
	i1 v2236 = *(i1*)(intptr_t)v2235;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2237;
	f83_WidthToIndex(&v2237, v2236);
	i1 v2238 = v2237+(+30);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2239;
	f84_AllocateNewNode(&v2239, v2238);
	i8 v2240 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v2240 = v2239;

	i8 v2241 = (i8)(intptr_t)(ws+3016);
	i8 v2242 = *(i8*)(intptr_t)v2241;
	i8 v2243 = (i8)(intptr_t)(ws+3048);
	i8 v2244 = *(i8*)(intptr_t)v2243;
	i8 v2245 = v2244+(+24);
	*(i8*)(intptr_t)v2245 = v2242;

	i8 v2246 = (i8)(intptr_t)(ws+3024);
	i8 v2247 = *(i8*)(intptr_t)v2246;
	i8 v2248 = (i8)(intptr_t)(ws+3048);
	i8 v2249 = *(i8*)(intptr_t)v2248;
	i8 v2250 = v2249+(+32);
	*(i8*)(intptr_t)v2250 = v2247;

	i8 v2251 = (i8)(intptr_t)(ws+3032);
	i8 v2252 = *(i8*)(intptr_t)v2251;
	i8 v2253 = (i8)(intptr_t)(ws+3048);
	i8 v2254 = *(i8*)(intptr_t)v2253;
	*(i8*)(intptr_t)v2254 = v2252;

	i8 v2255 = (i8)(intptr_t)(ws+3040);
	i1 v2256 = *(i1*)(intptr_t)v2255;
	i8 v2257 = (i8)(intptr_t)(ws+3048);
	i8 v2258 = *(i8*)(intptr_t)v2257;
	i8 v2259 = v2258+(+8);
	*(i1*)(intptr_t)v2259 = v2256;

endsub:;
	*p2229 = *(i8*)(intptr_t)(ws+3048);
}

// MidBor workspace at ws+3000 length ws+32
void f122_MidBor(i8* p2280 /* m */, i1 p2281 /* negated */, i2 p2282 /* fallthrough */, i2 p2283 /* falselabel */, i2 p2284 /* truelabel */, i8 p2285 /* right */, i8 p2286 /* left */) {
	*(i8*)(intptr_t)(ws+3000) = p2286; /*left */
	*(i8*)(intptr_t)(ws+3008) = p2285; /*right */
	*(i2*)(intptr_t)(ws+3016) = p2284; /*truelabel */
	*(i2*)(intptr_t)(ws+3018) = p2283; /*falselabel */
	*(i2*)(intptr_t)(ws+3020) = p2282; /*fallthrough */
	*(i1*)(intptr_t)(ws+3022) = p2281; /*negated */

	i1 v2287 = (i1)+54;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2288;
	f84_AllocateNewNode(&v2288, v2287);
	i8 v2289 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2289 = v2288;

	i8 v2290 = (i8)(intptr_t)(ws+3000);
	i8 v2291 = *(i8*)(intptr_t)v2290;
	i8 v2292 = (i8)(intptr_t)(ws+3024);
	i8 v2293 = *(i8*)(intptr_t)v2292;
	i8 v2294 = v2293+(+24);
	*(i8*)(intptr_t)v2294 = v2291;

	i8 v2295 = (i8)(intptr_t)(ws+3008);
	i8 v2296 = *(i8*)(intptr_t)v2295;
	i8 v2297 = (i8)(intptr_t)(ws+3024);
	i8 v2298 = *(i8*)(intptr_t)v2297;
	i8 v2299 = v2298+(+32);
	*(i8*)(intptr_t)v2299 = v2296;

	i8 v2300 = (i8)(intptr_t)(ws+3016);
	i2 v2301 = *(i2*)(intptr_t)v2300;
	i8 v2302 = (i8)(intptr_t)(ws+3024);
	i8 v2303 = *(i8*)(intptr_t)v2302;
	*(i2*)(intptr_t)v2303 = v2301;

	i8 v2304 = (i8)(intptr_t)(ws+3018);
	i2 v2305 = *(i2*)(intptr_t)v2304;
	i8 v2306 = (i8)(intptr_t)(ws+3024);
	i8 v2307 = *(i8*)(intptr_t)v2306;
	i8 v2308 = v2307+(+2);
	*(i2*)(intptr_t)v2308 = v2305;

	i8 v2309 = (i8)(intptr_t)(ws+3020);
	i2 v2310 = *(i2*)(intptr_t)v2309;
	i8 v2311 = (i8)(intptr_t)(ws+3024);
	i8 v2312 = *(i8*)(intptr_t)v2311;
	i8 v2313 = v2312+(+4);
	*(i2*)(intptr_t)v2313 = v2310;

	i8 v2314 = (i8)(intptr_t)(ws+3022);
	i1 v2315 = *(i1*)(intptr_t)v2314;
	i8 v2316 = (i8)(intptr_t)(ws+3024);
	i8 v2317 = *(i8*)(intptr_t)v2316;
	i8 v2318 = v2317+(+6);
	*(i1*)(intptr_t)v2318 = v2315;

endsub:;
	*p2280 = *(i8*)(intptr_t)(ws+3024);
}

// MidAddress workspace at ws+3008 length ws+24
void f123_MidAddress(i8* p2319 /* m */, i2 p2320 /* off */, i8 p2321 /* sym */) {
	*(i8*)(intptr_t)(ws+3008) = p2321; /*sym */
	*(i2*)(intptr_t)(ws+3016) = p2320; /*off */

	i1 v2322 = (i1)+42;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2323;
	f84_AllocateNewNode(&v2323, v2322);
	i8 v2324 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2324 = v2323;

	i8 v2325 = (i8)(intptr_t)(ws+3008);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	i8 v2327 = (i8)(intptr_t)(ws+3024);
	i8 v2328 = *(i8*)(intptr_t)v2327;
	*(i8*)(intptr_t)v2328 = v2326;

	i8 v2329 = (i8)(intptr_t)(ws+3016);
	i2 v2330 = *(i2*)(intptr_t)v2329;
	i8 v2331 = (i8)(intptr_t)(ws+3024);
	i8 v2332 = *(i8*)(intptr_t)v2331;
	i8 v2333 = v2332+(+8);
	*(i2*)(intptr_t)v2333 = v2330;

endsub:;
	*p2319 = *(i8*)(intptr_t)(ws+3024);
}

// MidPoparg workspace at ws+3048 length ws+32
void f126_MidPoparg(i8* p2374 /* m */, i1 p2375 /* remaining */, i8 p2376 /* subr */, i1 p2377 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2377; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2376; /*subr */
	*(i1*)(intptr_t)(ws+3064) = p2375; /*remaining */

	i8 v2378 = (i8)(intptr_t)(ws+3048);
	i1 v2379 = *(i1*)(intptr_t)v2378;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2380;
	f83_WidthToIndex(&v2380, v2379);
	i1 v2381 = v2380+(+35);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2382;
	f84_AllocateNewNode(&v2382, v2381);
	i8 v2383 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2383 = v2382;

	i8 v2384 = (i8)(intptr_t)(ws+3056);
	i8 v2385 = *(i8*)(intptr_t)v2384;
	i8 v2386 = (i8)(intptr_t)(ws+3072);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	*(i8*)(intptr_t)v2387 = v2385;

	i8 v2388 = (i8)(intptr_t)(ws+3064);
	i1 v2389 = *(i1*)(intptr_t)v2388;
	i8 v2390 = (i8)(intptr_t)(ws+3072);
	i8 v2391 = *(i8*)(intptr_t)v2390;
	i8 v2392 = v2391+(+8);
	*(i1*)(intptr_t)v2392 = v2389;

endsub:;
	*p2374 = *(i8*)(intptr_t)(ws+3072);
}

// MidInits workspace at ws+3024 length ws+16
void f128_MidInits(i8* p2413 /* m */, i8 p2414 /* text */) {
	*(i8*)(intptr_t)(ws+3024) = p2414; /*text */

	i1 v2415 = (i1)+12;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2416;
	f84_AllocateNewNode(&v2416, v2415);
	i8 v2417 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2417 = v2416;

	i8 v2418 = (i8)(intptr_t)(ws+3024);
	i8 v2419 = *(i8*)(intptr_t)v2418;
	i8 v2420 = (i8)(intptr_t)(ws+3032);
	i8 v2421 = *(i8*)(intptr_t)v2420;
	*(i8*)(intptr_t)v2421 = v2419;

endsub:;
	*p2413 = *(i8*)(intptr_t)(ws+3032);
}

// MidEndfile workspace at ws+2880 length ws+8
void f129_MidEndfile(i8* p2422 /* m */) {

	i1 v2423 = (i1)+3;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2424;
	f84_AllocateNewNode(&v2424, v2423);
	i8 v2425 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v2425 = v2424;

endsub:;
	*p2422 = *(i8*)(intptr_t)(ws+2880);
}

// MidLabel workspace at ws+3064 length ws+16
void f132_MidLabel(i8* p2465 /* m */, i2 p2466 /* label */) {
	*(i2*)(intptr_t)(ws+3064) = p2466; /*label */

	i1 v2467 = (i1)+21;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2468;
	f84_AllocateNewNode(&v2468, v2467);
	i8 v2469 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2469 = v2468;

	i8 v2470 = (i8)(intptr_t)(ws+3064);
	i2 v2471 = *(i2*)(intptr_t)v2470;
	i8 v2472 = (i8)(intptr_t)(ws+3072);
	i8 v2473 = *(i8*)(intptr_t)v2472;
	*(i2*)(intptr_t)v2473 = v2471;

endsub:;
	*p2465 = *(i8*)(intptr_t)(ws+3072);
}

// MidLoad workspace at ws+3080 length ws+24
void f133_MidLoad(i8* p2474 /* m */, i8 p2475 /* left */, i1 p2476 /* width */) {
	*(i1*)(intptr_t)(ws+3080) = p2476; /*width */
	*(i8*)(intptr_t)(ws+3088) = p2475; /*left */

	i8 v2477 = (i8)(intptr_t)(ws+3080);
	i1 v2478 = *(i1*)(intptr_t)v2477;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2479;
	f83_WidthToIndex(&v2479, v2478);
	i1 v2480 = v2479+(+43);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2481;
	f84_AllocateNewNode(&v2481, v2480);
	i8 v2482 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v2482 = v2481;

	i8 v2483 = (i8)(intptr_t)(ws+3088);
	i8 v2484 = *(i8*)(intptr_t)v2483;
	i8 v2485 = (i8)(intptr_t)(ws+3096);
	i8 v2486 = *(i8*)(intptr_t)v2485;
	i8 v2487 = v2486+(+24);
	*(i8*)(intptr_t)v2487 = v2484;

endsub:;
	*p2474 = *(i8*)(intptr_t)(ws+3096);
}

// MidCalle workspace at ws+3016 length ws+32
void f134_MidCalle(i8* p2488 /* m */, i8 p2489 /* subr */, i8 p2490 /* left */, i1 p2491 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2491; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2490; /*left */
	*(i8*)(intptr_t)(ws+3032) = p2489; /*subr */

	i8 v2492 = (i8)(intptr_t)(ws+3016);
	i1 v2493 = *(i1*)(intptr_t)v2492;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2494;
	f83_WidthToIndex(&v2494, v2493);
	i1 v2495 = v2494+(+25);

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2496;
	f84_AllocateNewNode(&v2496, v2495);
	i8 v2497 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v2497 = v2496;

	i8 v2498 = (i8)(intptr_t)(ws+3024);
	i8 v2499 = *(i8*)(intptr_t)v2498;
	i8 v2500 = (i8)(intptr_t)(ws+3040);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	i8 v2502 = v2501+(+24);
	*(i8*)(intptr_t)v2502 = v2499;

	i8 v2503 = (i8)(intptr_t)(ws+3032);
	i8 v2504 = *(i8*)(intptr_t)v2503;
	i8 v2505 = (i8)(intptr_t)(ws+3040);
	i8 v2506 = *(i8*)(intptr_t)v2505;
	*(i8*)(intptr_t)v2506 = v2504;

endsub:;
	*p2488 = *(i8*)(intptr_t)(ws+3040);
}

// MidStartfile workspace at ws+2880 length ws+8
void f137_MidStartfile(i8* p2546 /* m */) {

	i1 v2547 = (i1)+2;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2548;
	f84_AllocateNewNode(&v2548, v2547);
	i8 v2549 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v2549 = v2548;

endsub:;
	*p2546 = *(i8*)(intptr_t)(ws+2880);
}

// MidStartinit workspace at ws+3016 length ws+16
void f138_MidStartinit(i8* p2550 /* m */, i8 p2551 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p2551; /*sym */

	i1 v2552 = (i1)+6;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2553;
	f84_AllocateNewNode(&v2553, v2552);
	i8 v2554 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2554 = v2553;

	i8 v2555 = (i8)(intptr_t)(ws+3016);
	i8 v2556 = *(i8*)(intptr_t)v2555;
	i8 v2557 = (i8)(intptr_t)(ws+3024);
	i8 v2558 = *(i8*)(intptr_t)v2557;
	*(i8*)(intptr_t)v2558 = v2556;

endsub:;
	*p2550 = *(i8*)(intptr_t)(ws+3024);
}

// MidReturn workspace at ws+3000 length ws+8
void f139_MidReturn(i8* p2559 /* m */) {

	i1 v2560 = (i1)+23;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2561;
	f84_AllocateNewNode(&v2561, v2560);
	i8 v2562 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v2562 = v2561;

endsub:;
	*p2559 = *(i8*)(intptr_t)(ws+3000);
}

// Discard workspace at ws+3152 length ws+16
void f140_Discard(i8 p2563 /* node */) {
	*(i8*)(intptr_t)(ws+3152) = p2563; /*node */

	i8 v2564 = (i8)(intptr_t)(ws+3152);
	i8 v2565 = *(i8*)(intptr_t)v2564;
	i8 v2566 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v2566 = v2565;

c02_01d4:;

	i8 v2567 = (i8)(intptr_t)(ws+3160);
	i8 v2568 = *(i8*)(intptr_t)v2567;
	i8 v2569 = (i8)+0;
	if (v2568==v2569) goto c02_01d7; else goto c02_01d6;

c02_01d6:;

	i8 v2570 = (i8)(intptr_t)(ws+3160);
	i8 v2571 = *(i8*)(intptr_t)v2570;
	i8 v2572 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v2572 = v2571;

	i8 v2573 = (i8)(intptr_t)(ws+3152);
	i8 v2574 = *(i8*)(intptr_t)v2573;
	i8 v2575 = v2574+(+40);
	i8 v2576 = *(i8*)(intptr_t)v2575;
	i8 v2577 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v2577 = v2576;

	i8 v2578 = (i8)(intptr_t)(ws+3152);
	i8 v2579 = *(i8*)(intptr_t)v2578;
	i8 v2580 = v2579+(+24);
	i8 v2581 = *(i8*)(intptr_t)v2580;
	i8 v2582 = (i8)+0;
	if (v2581==v2582) goto c02_01dc; else goto c02_01db;

c02_01db:;

	i8 v2583 = (i8)(intptr_t)(ws+3160);
	i8 v2584 = *(i8*)(intptr_t)v2583;
	i8 v2585 = (i8)(intptr_t)(ws+3152);
	i8 v2586 = *(i8*)(intptr_t)v2585;
	i8 v2587 = v2586+(+24);
	i8 v2588 = *(i8*)(intptr_t)v2587;
	i8 v2589 = v2588+(+40);
	*(i8*)(intptr_t)v2589 = v2584;

	i8 v2590 = (i8)(intptr_t)(ws+3152);
	i8 v2591 = *(i8*)(intptr_t)v2590;
	i8 v2592 = v2591+(+24);
	i8 v2593 = *(i8*)(intptr_t)v2592;
	i8 v2594 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v2594 = v2593;

	goto c02_01d8;

c02_01dc:;

c02_01d8:;

	i8 v2595 = (i8)(intptr_t)(ws+3152);
	i8 v2596 = *(i8*)(intptr_t)v2595;
	i8 v2597 = v2596+(+32);
	i8 v2598 = *(i8*)(intptr_t)v2597;
	i8 v2599 = (i8)+0;
	if (v2598==v2599) goto c02_01e1; else goto c02_01e0;

c02_01e0:;

	i8 v2600 = (i8)(intptr_t)(ws+3160);
	i8 v2601 = *(i8*)(intptr_t)v2600;
	i8 v2602 = (i8)(intptr_t)(ws+3152);
	i8 v2603 = *(i8*)(intptr_t)v2602;
	i8 v2604 = v2603+(+32);
	i8 v2605 = *(i8*)(intptr_t)v2604;
	i8 v2606 = v2605+(+40);
	*(i8*)(intptr_t)v2606 = v2601;

	i8 v2607 = (i8)(intptr_t)(ws+3152);
	i8 v2608 = *(i8*)(intptr_t)v2607;
	i8 v2609 = v2608+(+32);
	i8 v2610 = *(i8*)(intptr_t)v2609;
	i8 v2611 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v2611 = v2610;

	goto c02_01dd;

c02_01e1:;

c02_01dd:;

	i8 v2612 = (i8)(intptr_t)(ws+3152);
	i8 v2613 = *(i8*)(intptr_t)v2612;

void f32_Free(i8 /* block */);
	f32_Free(v2613);

	goto c02_01d4;

c02_01d7:;

endsub:;
}

// NodeWidth workspace at ws+3048 length ws+9
void f141_NodeWidth(i1* p2614 /* width */, i8 p2615 /* node */) {
	*(i8*)(intptr_t)(ws+3048) = p2615; /*node */

	i1 v2616 = (i1)+0;
	i8 v2617 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v2617 = v2616;

	i8 v2618 = (i8)(intptr_t)(ws+3048);
	i8 v2619 = *(i8*)(intptr_t)v2618;
	i8 v2620 = v2619+(+16);
	i8 v2621 = *(i8*)(intptr_t)v2620;
	i8 v2622 = (i8)+0;
	if (v2621==v2622) goto c02_01e6; else goto c02_01e5;

c02_01e5:;

	i8 v2623 = (i8)(intptr_t)(ws+3048);
	i8 v2624 = *(i8*)(intptr_t)v2623;
	i8 v2625 = v2624+(+16);
	i8 v2626 = *(i8*)(intptr_t)v2625;
	i8 v2627 = v2626+(+42);
	i2 v2628 = *(i2*)(intptr_t)v2627;
	i1 v2629 = v2628;
	i8 v2630 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v2630 = v2629;

	goto c02_01e2;

c02_01e6:;

c02_01e2:;

endsub:;
	*p2614 = *(i1*)(intptr_t)(ws+3056);
}
const i1 c02_s003f[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };

// midcodec_i_bad_fold workspace at ws+3136 length ws+0
void f142_midcodec_i_bad_fold(void) {

	i8 v2631 = (i8)(intptr_t)c02_s003f;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v2631);

endsub:;
}

// FoldConstant1 workspace at ws+3048 length ws+24
void f143_FoldConstant1(i4* p2632 /* result */, i8 p2633 /* lhsp */, i1 p2634 /* op */) {
	*(i1*)(intptr_t)(ws+3048) = p2634; /*op */
	*(i8*)(intptr_t)(ws+3056) = p2633; /*lhsp */

	i8 v2635 = (i8)(intptr_t)(ws+3056);
	i8 v2636 = *(i8*)(intptr_t)v2635;
	i4 v2637 = *(i4*)(intptr_t)v2636;
	i8 v2638 = (i8)(intptr_t)(ws+3068);
	*(i4*)(intptr_t)v2638 = v2637;

	i8 v2639 = (i8)(intptr_t)(ws+3048);
	i1 v2640 = *(i1*)(intptr_t)v2639;

	if (v2640 != +105) goto c02_01e8;

	i8 v2641 = (i8)(intptr_t)(ws+3068);
	i4 v2642 = *(i4*)(intptr_t)v2641;
	i4 v2643 = ~v2642;
	i8 v2644 = (i8)(intptr_t)(ws+3064);
	*(i4*)(intptr_t)v2644 = v2643;

	goto c02_01e7;

c02_01e8:;

	if (v2640 != +110) goto c02_01e9;

	i8 v2645 = (i8)(intptr_t)(ws+3068);
	i4 v2646 = *(i4*)(intptr_t)v2645;
	i4 v2647 = -v2646;
	i8 v2648 = (i8)(intptr_t)(ws+3064);
	*(i4*)(intptr_t)v2648 = v2647;

	goto c02_01e7;

c02_01e9:;


void f142_midcodec_i_bad_fold(void);
	f142_midcodec_i_bad_fold();

c02_01e7:;


endsub:;
	*p2632 = *(i4*)(intptr_t)(ws+3064);
}

// FoldConstant2 workspace at ws+3096 length ws+36
void f144_FoldConstant2(i4* p2649 /* result */, i8 p2650 /* rhsp */, i8 p2651 /* lhsp */, i1 p2652 /* op */) {
	*(i1*)(intptr_t)(ws+3096) = p2652; /*op */
	*(i8*)(intptr_t)(ws+3104) = p2651; /*lhsp */
	*(i8*)(intptr_t)(ws+3112) = p2650; /*rhsp */

	i8 v2653 = (i8)(intptr_t)(ws+3104);
	i8 v2654 = *(i8*)(intptr_t)v2653;
	i4 v2655 = *(i4*)(intptr_t)v2654;
	i8 v2656 = (i8)(intptr_t)(ws+3124);
	*(i4*)(intptr_t)v2656 = v2655;

	i8 v2657 = (i8)(intptr_t)(ws+3112);
	i8 v2658 = *(i8*)(intptr_t)v2657;
	i4 v2659 = *(i4*)(intptr_t)v2658;
	i8 v2660 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2660 = v2659;

	i8 v2661 = (i8)(intptr_t)(ws+3096);
	i1 v2662 = *(i1*)(intptr_t)v2661;

	if (v2662 != +155) goto c02_01eb;

	i8 v2663 = (i8)(intptr_t)(ws+3124);
	i4 v2664 = *(i4*)(intptr_t)v2663;
	i8 v2665 = (i8)(intptr_t)(ws+3128);
	i4 v2666 = *(i4*)(intptr_t)v2665;
	i4 v2667 = v2664+v2666;
	i8 v2668 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2668 = v2667;

	goto c02_01ea;

c02_01eb:;

	if (v2662 != +130) goto c02_01ec;

	i8 v2669 = (i8)(intptr_t)(ws+3124);
	i4 v2670 = *(i4*)(intptr_t)v2669;
	i8 v2671 = (i8)(intptr_t)(ws+3128);
	i4 v2672 = *(i4*)(intptr_t)v2671;
	i4 v2673 = v2670-v2672;
	i8 v2674 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2674 = v2673;

	goto c02_01ea;

c02_01ec:;

	if (v2662 != +160) goto c02_01ed;

	i8 v2675 = (i8)(intptr_t)(ws+3124);
	i4 v2676 = *(i4*)(intptr_t)v2675;
	i8 v2677 = (i8)(intptr_t)(ws+3128);
	i4 v2678 = *(i4*)(intptr_t)v2677;
	i4 v2679 = v2676*v2678;
	i8 v2680 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2680 = v2679;

	goto c02_01ea;

c02_01ed:;

	if (v2662 != +135) goto c02_01ee;

	i8 v2681 = (i8)(intptr_t)(ws+3124);
	i4 v2682 = *(i4*)(intptr_t)v2681;
	i8 v2683 = (i8)(intptr_t)(ws+3128);
	i4 v2684 = *(i4*)(intptr_t)v2683;
	i4 v2685 = v2682/v2684;
	i8 v2686 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2686 = v2685;

	goto c02_01ea;

c02_01ee:;

	if (v2662 != +140) goto c02_01ef;

	i8 v2687 = (i8)(intptr_t)(ws+3124);
	i4 v2688 = *(i4*)(intptr_t)v2687;
	i8 v2689 = (i8)(intptr_t)(ws+3128);
	i4 v2690 = *(i4*)(intptr_t)v2689;
	i4 v2691 = (s4)v2688/(s4)v2690;
	i8 v2692 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2692 = v2691;

	goto c02_01ea;

c02_01ef:;

	if (v2662 != +145) goto c02_01f0;

	i8 v2693 = (i8)(intptr_t)(ws+3124);
	i4 v2694 = *(i4*)(intptr_t)v2693;
	i8 v2695 = (i8)(intptr_t)(ws+3128);
	i4 v2696 = *(i4*)(intptr_t)v2695;
	i4 v2697 = v2694%v2696;
	i8 v2698 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2698 = v2697;

	goto c02_01ea;

c02_01f0:;

	if (v2662 != +150) goto c02_01f1;

	i8 v2699 = (i8)(intptr_t)(ws+3124);
	i4 v2700 = *(i4*)(intptr_t)v2699;
	i8 v2701 = (i8)(intptr_t)(ws+3128);
	i4 v2702 = *(i4*)(intptr_t)v2701;
	i4 v2703 = (s4)v2700%(s4)v2702;
	i8 v2704 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2704 = v2703;

	goto c02_01ea;

c02_01f1:;

	if (v2662 != +165) goto c02_01f2;

	i8 v2705 = (i8)(intptr_t)(ws+3124);
	i4 v2706 = *(i4*)(intptr_t)v2705;
	i8 v2707 = (i8)(intptr_t)(ws+3128);
	i4 v2708 = *(i4*)(intptr_t)v2707;
	i4 v2709 = v2706&v2708;
	i8 v2710 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2710 = v2709;

	goto c02_01ea;

c02_01f2:;

	if (v2662 != +170) goto c02_01f3;

	i8 v2711 = (i8)(intptr_t)(ws+3124);
	i4 v2712 = *(i4*)(intptr_t)v2711;
	i8 v2713 = (i8)(intptr_t)(ws+3128);
	i4 v2714 = *(i4*)(intptr_t)v2713;
	i4 v2715 = v2712|v2714;
	i8 v2716 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2716 = v2715;

	goto c02_01ea;

c02_01f3:;

	if (v2662 != +175) goto c02_01f4;

	i8 v2717 = (i8)(intptr_t)(ws+3124);
	i4 v2718 = *(i4*)(intptr_t)v2717;
	i8 v2719 = (i8)(intptr_t)(ws+3128);
	i4 v2720 = *(i4*)(intptr_t)v2719;
	i4 v2721 = v2718^v2720;
	i8 v2722 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2722 = v2721;

	goto c02_01ea;

c02_01f4:;

	if (v2662 != +115) goto c02_01f5;

	i8 v2723 = (i8)(intptr_t)(ws+3124);
	i4 v2724 = *(i4*)(intptr_t)v2723;
	i8 v2725 = (i8)(intptr_t)(ws+3128);
	i4 v2726 = *(i4*)(intptr_t)v2725;
	i1 v2727 = (s1)(s4)v2726;
	i4 v2728 = ((i4)v2724)<<v2727;
	i8 v2729 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2729 = v2728;

	goto c02_01ea;

c02_01f5:;

	if (v2662 != +120) goto c02_01f6;

	i8 v2730 = (i8)(intptr_t)(ws+3124);
	i4 v2731 = *(i4*)(intptr_t)v2730;
	i8 v2732 = (i8)(intptr_t)(ws+3128);
	i4 v2733 = *(i4*)(intptr_t)v2732;
	i1 v2734 = (s1)(s4)v2733;
	i4 v2735 = ((i4)v2731)>>v2734;
	i8 v2736 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2736 = v2735;

	goto c02_01ea;

c02_01f6:;

	if (v2662 != +125) goto c02_01f7;

	i8 v2737 = (i8)(intptr_t)(ws+3124);
	i4 v2738 = *(i4*)(intptr_t)v2737;
	i8 v2739 = (i8)(intptr_t)(ws+3128);
	i4 v2740 = *(i4*)(intptr_t)v2739;
	i1 v2741 = (s1)(s4)v2740;
	i4 v2742 = ((s4)v2738)>>v2741;
	i8 v2743 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v2743 = v2742;

	goto c02_01ea;

c02_01f7:;


void f142_midcodec_i_bad_fold(void);
	f142_midcodec_i_bad_fold();

c02_01ea:;


endsub:;
	*p2649 = *(i4*)(intptr_t)(ws+3120);
}

// MidC1Op workspace at ws+3024 length ws+24
void f145_MidC1Op(i8* p2744 /* result */, i8 p2745 /* lhs */, i1 p2746 /* width */, i1 p2747 /* op */) {
	*(i1*)(intptr_t)(ws+3024) = p2747; /*op */
	*(i1*)(intptr_t)(ws+3025) = p2746; /*width */
	*(i8*)(intptr_t)(ws+3032) = p2745; /*lhs */

	i8 v2748 = (i8)(intptr_t)(ws+3032);
	i8 v2749 = *(i8*)(intptr_t)v2748;
	i8 v2750 = v2749+(+66);
	i1 v2751 = *(i1*)(intptr_t)v2750;
	i1 v2752 = (i1)+40;
	if (v2751==v2752) goto c02_01fb; else goto c02_01fc;

c02_01fb:;

	i8 v2753 = (i8)(intptr_t)(ws+3024);
	i1 v2754 = *(i1*)(intptr_t)v2753;
	i8 v2755 = (i8)(intptr_t)(ws+3032);
	i8 v2756 = *(i8*)(intptr_t)v2755;

void f143_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	i4 v2757;
	f143_FoldConstant1(&v2757, v2756, v2754);
	i8 v2758 = (i8)(intptr_t)(ws+3032);
	i8 v2759 = *(i8*)(intptr_t)v2758;
	*(i4*)(intptr_t)v2759 = v2757;

	i8 v2760 = (i8)(intptr_t)(ws+3032);
	i8 v2761 = *(i8*)(intptr_t)v2760;
	i8 v2762 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v2762 = v2761;

	goto c02_01f8;

c02_01fc:;

	i8 v2763 = (i8)(intptr_t)(ws+3024);
	i1 v2764 = *(i1*)(intptr_t)v2763;
	i8 v2765 = (i8)(intptr_t)(ws+3025);
	i1 v2766 = *(i1*)(intptr_t)v2765;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2767;
	f83_WidthToIndex(&v2767, v2766);
	i1 v2768 = v2764+v2767;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2769;
	f84_AllocateNewNode(&v2769, v2768);
	i8 v2770 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v2770 = v2769;

	i8 v2771 = (i8)(intptr_t)(ws+3032);
	i8 v2772 = *(i8*)(intptr_t)v2771;
	i8 v2773 = (i8)(intptr_t)(ws+3040);
	i8 v2774 = *(i8*)(intptr_t)v2773;
	i8 v2775 = v2774+(+24);
	*(i8*)(intptr_t)v2775 = v2772;

c02_01f8:;

endsub:;
	*p2744 = *(i8*)(intptr_t)(ws+3040);
}

// GetPowerOfTwo workspace at ws+3096 length ws+5
void f146_GetPowerOfTwo(i1* p2776 /* exp */, i4 p2777 /* value */) {
	*(i4*)(intptr_t)(ws+3096) = p2777; /*value */

	i1 v2778 = (i1)+0;
	i8 v2779 = (i8)(intptr_t)(ws+3100);
	*(i1*)(intptr_t)v2779 = v2778;

	i4 v2780 = (i4)+0;
	i8 v2781 = (i8)(intptr_t)(ws+3096);
	i4 v2782 = *(i4*)(intptr_t)v2781;
	if ((s4)v2780<(s4)v2782) goto c02_0204; else goto c02_0203;

c02_0204:;

	i8 v2783 = (i8)(intptr_t)(ws+3096);
	i4 v2784 = *(i4*)(intptr_t)v2783;
	i8 v2785 = (i8)(intptr_t)(ws+3096);
	i4 v2786 = *(i4*)(intptr_t)v2785;
	i4 v2787 = v2786+(-1);
	i4 v2788 = v2784&v2787;
	i4 v2789 = (i4)+0;
	if (v2788==v2789) goto c02_0202; else goto c02_0203;

c02_0202:;

c02_0207:;

	i8 v2790 = (i8)(intptr_t)(ws+3096);
	i4 v2791 = *(i4*)(intptr_t)v2790;
	i4 v2792 = (i4)+0;
	if (v2791==v2792) goto c02_020a; else goto c02_0209;

c02_0209:;

	i8 v2793 = (i8)(intptr_t)(ws+3100);
	i1 v2794 = *(i1*)(intptr_t)v2793;
	i1 v2795 = v2794+(+1);
	i8 v2796 = (i8)(intptr_t)(ws+3100);
	*(i1*)(intptr_t)v2796 = v2795;

	i8 v2797 = (i8)(intptr_t)(ws+3096);
	i4 v2798 = *(i4*)(intptr_t)v2797;
	i1 v2799 = (i1)+1;
	i4 v2800 = ((s4)v2798)>>v2799;
	i8 v2801 = (i8)(intptr_t)(ws+3096);
	*(i4*)(intptr_t)v2801 = v2800;

	goto c02_0207;

c02_020a:;

	goto c02_01fd;

c02_0203:;

c02_01fd:;

endsub:;
	*p2776 = *(i1*)(intptr_t)(ws+3100);
}

// MidC2Op workspace at ws+3048 length ws+48
void f147_MidC2Op(i8* p2802 /* result */, i8 p2803 /* rhs */, i8 p2804 /* lhs */, i1 p2805 /* width */, i1 p2806 /* op */) {
	*(i1*)(intptr_t)(ws+3048) = p2806; /*op */
	*(i1*)(intptr_t)(ws+3049) = p2805; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2804; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p2803; /*rhs */

	i8 v2807 = (i8)(intptr_t)(ws+3048);
	i1 v2808 = *(i1*)(intptr_t)v2807;
	i1 v2809 = (i1)+130;
	if (v2808==v2809) goto c02_0212; else goto c02_0211;

c02_0212:;

	i8 v2810 = (i8)(intptr_t)(ws+3064);
	i8 v2811 = *(i8*)(intptr_t)v2810;
	i8 v2812 = v2811+(+66);
	i1 v2813 = *(i1*)(intptr_t)v2812;
	i1 v2814 = (i1)+40;
	if (v2813==v2814) goto c02_0210; else goto c02_0211;

c02_0210:;

	i8 v2815 = (i8)(intptr_t)(ws+3064);
	i8 v2816 = *(i8*)(intptr_t)v2815;
	i4 v2817 = *(i4*)(intptr_t)v2816;
	i4 v2818 = -v2817;
	i8 v2819 = (i8)(intptr_t)(ws+3064);
	i8 v2820 = *(i8*)(intptr_t)v2819;
	*(i4*)(intptr_t)v2820 = v2818;

	i1 v2821 = (i1)+155;
	i8 v2822 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v2822 = v2821;

	goto c02_020b;

c02_0211:;

c02_020b:;

	i8 v2823 = (i8)(intptr_t)(ws+3048);
	i1 v2824 = *(i1*)(intptr_t)v2823;
	i1 v2825 = (i1)+155;
	if (v2824<v2825) goto c02_0217; else goto c02_0216;

c02_0216:;

	i8 v2826 = (i8)(intptr_t)(ws+3056);
	i8 v2827 = *(i8*)(intptr_t)v2826;
	i8 v2828 = v2827+(+66);
	i1 v2829 = *(i1*)(intptr_t)v2828;
	i1 v2830 = (i1)+40;
	if (v2829==v2830) goto c02_021b; else goto c02_021c;

c02_021b:;

	i8 v2831 = (i8)(intptr_t)(ws+3056);
	i8 v2832 = *(i8*)(intptr_t)v2831;
	i8 v2833 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2833 = v2832;

	i8 v2834 = (i8)(intptr_t)(ws+3064);
	i8 v2835 = *(i8*)(intptr_t)v2834;
	i8 v2836 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2836 = v2835;

	i8 v2837 = (i8)(intptr_t)(ws+3080);
	i8 v2838 = *(i8*)(intptr_t)v2837;
	i8 v2839 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2839 = v2838;

	goto c02_0218;

c02_021c:;

c02_0218:;

	i8 v2840 = (i8)(intptr_t)(ws+3064);
	i8 v2841 = *(i8*)(intptr_t)v2840;
	i8 v2842 = v2841+(+66);
	i1 v2843 = *(i1*)(intptr_t)v2842;
	i1 v2844 = (i1)+40;
	if (v2843==v2844) goto c02_022a; else goto c02_0227;

c02_022a:;

	i8 v2845 = (i8)(intptr_t)(ws+3056);
	i8 v2846 = *(i8*)(intptr_t)v2845;
	i8 v2847 = v2846+(+66);
	i1 v2848 = *(i1*)(intptr_t)v2847;
	i8 v2849 = (i8)(intptr_t)(ws+3048);
	i1 v2850 = *(i1*)(intptr_t)v2849;
	if (v2848<v2850) goto c02_0227; else goto c02_0229;

c02_0229:;

	i8 v2851 = (i8)(intptr_t)(ws+3048);
	i1 v2852 = *(i1*)(intptr_t)v2851;
	i1 v2853 = v2852+(+4);
	i8 v2854 = (i8)(intptr_t)(ws+3056);
	i8 v2855 = *(i8*)(intptr_t)v2854;
	i8 v2856 = v2855+(+66);
	i1 v2857 = *(i1*)(intptr_t)v2856;
	if (v2853<v2857) goto c02_0227; else goto c02_0228;

c02_0228:;

	i8 v2858 = (i8)(intptr_t)(ws+3056);
	i8 v2859 = *(i8*)(intptr_t)v2858;
	i8 v2860 = v2859+(+32);
	i8 v2861 = *(i8*)(intptr_t)v2860;
	i8 v2862 = v2861+(+66);
	i1 v2863 = *(i1*)(intptr_t)v2862;
	i1 v2864 = (i1)+40;
	if (v2863==v2864) goto c02_0226; else goto c02_0227;

c02_0226:;

	i8 v2865 = (i8)(intptr_t)(ws+3048);
	i1 v2866 = *(i1*)(intptr_t)v2865;
	i8 v2867 = (i8)(intptr_t)(ws+3056);
	i8 v2868 = *(i8*)(intptr_t)v2867;
	i8 v2869 = v2868+(+32);
	i8 v2870 = *(i8*)(intptr_t)v2869;
	i8 v2871 = (i8)(intptr_t)(ws+3064);
	i8 v2872 = *(i8*)(intptr_t)v2871;

void f144_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	i4 v2873;
	f144_FoldConstant2(&v2873, v2872, v2870, v2866);

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v2874;
	f95_MidConstant(&v2874, v2873);
	i8 v2875 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2875 = v2874;

	i8 v2876 = (i8)(intptr_t)(ws+3064);
	i8 v2877 = *(i8*)(intptr_t)v2876;

void f140_Discard(i8 /* node */);
	f140_Discard(v2877);

	i8 v2878 = (i8)(intptr_t)(ws+3080);
	i8 v2879 = *(i8*)(intptr_t)v2878;
	i8 v2880 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2880 = v2879;

	i8 v2881 = (i8)(intptr_t)(ws+3056);
	i8 v2882 = *(i8*)(intptr_t)v2881;
	i8 v2883 = v2882+(+24);
	i8 v2884 = *(i8*)(intptr_t)v2883;
	i8 v2885 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2885 = v2884;

	i8 v2886 = (i8)+0;
	i8 v2887 = (i8)(intptr_t)(ws+3056);
	i8 v2888 = *(i8*)(intptr_t)v2887;
	i8 v2889 = v2888+(+24);
	*(i8*)(intptr_t)v2889 = v2886;

	i8 v2890 = (i8)(intptr_t)(ws+3056);
	i8 v2891 = *(i8*)(intptr_t)v2890;

void f140_Discard(i8 /* node */);
	f140_Discard(v2891);

	i8 v2892 = (i8)(intptr_t)(ws+3080);
	i8 v2893 = *(i8*)(intptr_t)v2892;
	i8 v2894 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2894 = v2893;

	goto c02_021d;

c02_0227:;

c02_021d:;

	goto c02_0213;

c02_0217:;

c02_0213:;

	i8 v2895 = (i8)(intptr_t)(ws+3056);
	i8 v2896 = *(i8*)(intptr_t)v2895;
	i8 v2897 = v2896+(+66);
	i1 v2898 = *(i1*)(intptr_t)v2897;
	i1 v2899 = (i1)+40;
	if (v2898==v2899) goto c02_0231; else goto c02_0232;

c02_0232:;

	i8 v2900 = (i8)(intptr_t)(ws+3064);
	i8 v2901 = *(i8*)(intptr_t)v2900;
	i8 v2902 = v2901+(+66);
	i1 v2903 = *(i1*)(intptr_t)v2902;
	i1 v2904 = (i1)+40;
	if (v2903==v2904) goto c02_0230; else goto c02_0231;

c02_0230:;

	i8 v2905 = (i8)(intptr_t)(ws+3048);
	i1 v2906 = *(i1*)(intptr_t)v2905;
	i1 v2907 = (i1)+160;
	if (v2906==v2907) goto c02_023a; else goto c02_023d;

c02_023d:;

	i8 v2908 = (i8)(intptr_t)(ws+3048);
	i1 v2909 = *(i1*)(intptr_t)v2908;
	i1 v2910 = (i1)+140;
	if (v2909==v2910) goto c02_023a; else goto c02_023c;

c02_023c:;

	i8 v2911 = (i8)(intptr_t)(ws+3048);
	i1 v2912 = *(i1*)(intptr_t)v2911;
	i1 v2913 = (i1)+135;
	if (v2912==v2913) goto c02_023a; else goto c02_023b;

c02_023a:;

	i8 v2914 = (i8)(intptr_t)(ws+3064);
	i8 v2915 = *(i8*)(intptr_t)v2914;
	i4 v2916 = *(i4*)(intptr_t)v2915;
	i8 v2917 = (i8)(intptr_t)(ws+3088);
	*(i4*)(intptr_t)v2917 = v2916;

	i8 v2918 = (i8)(intptr_t)(ws+3088);
	i4 v2919 = *(i4*)(intptr_t)v2918;

void f146_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	i1 v2920;
	f146_GetPowerOfTwo(&v2920, v2919);
	i8 v2921 = (i8)(intptr_t)(ws+3092);
	*(i1*)(intptr_t)v2921 = v2920;

	i8 v2922 = (i8)(intptr_t)(ws+3092);
	i1 v2923 = *(i1*)(intptr_t)v2922;
	i1 v2924 = (i1)+0;
	if (v2923==v2924) goto c02_0242; else goto c02_0241;

c02_0241:;

	i8 v2925 = (i8)(intptr_t)(ws+3064);
	i8 v2926 = *(i8*)(intptr_t)v2925;

void f140_Discard(i8 /* node */);
	f140_Discard(v2926);

	i8 v2927 = (i8)(intptr_t)(ws+3092);
	i1 v2928 = *(i1*)(intptr_t)v2927;
	i1 v2929 = v2928+(-1);
	i4 v2930 = v2929;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v2931;
	f95_MidConstant(&v2931, v2930);
	i8 v2932 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2932 = v2931;

	i8 v2933 = (i8)(intptr_t)(ws+3048);
	i1 v2934 = *(i1*)(intptr_t)v2933;

	if (v2934 != +160) goto c02_0244;

	i1 v2935 = (i1)+115;
	i8 v2936 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v2936 = v2935;

	goto c02_0243;

c02_0244:;

	if (v2934 != +140) goto c02_0245;

	i1 v2937 = (i1)+125;
	i8 v2938 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v2938 = v2937;

	goto c02_0243;

c02_0245:;

	if (v2934 != +135) goto c02_0246;

	i1 v2939 = (i1)+120;
	i8 v2940 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v2940 = v2939;

c02_0246:;

c02_0243:;


	goto c02_023e;

c02_0242:;

c02_023e:;

	goto c02_0233;

c02_023b:;

c02_0233:;

	i8 v2941 = (i8)(intptr_t)(ws+3048);
	i1 v2942 = *(i1*)(intptr_t)v2941;
	i1 v2943 = (i1)+115;
	if (v2942==v2943) goto c02_024e; else goto c02_0251;

c02_0251:;

	i8 v2944 = (i8)(intptr_t)(ws+3048);
	i1 v2945 = *(i1*)(intptr_t)v2944;
	i1 v2946 = (i1)+120;
	if (v2945==v2946) goto c02_024e; else goto c02_0250;

c02_0250:;

	i8 v2947 = (i8)(intptr_t)(ws+3048);
	i1 v2948 = *(i1*)(intptr_t)v2947;
	i1 v2949 = (i1)+125;
	if (v2948==v2949) goto c02_024e; else goto c02_024f;

c02_024e:;

	i8 v2950 = (i8)(intptr_t)(ws+3064);
	i8 v2951 = *(i8*)(intptr_t)v2950;
	i4 v2952 = *(i4*)(intptr_t)v2951;
	i4 v2953 = (i4)+0;
	if (v2952==v2953) goto c02_0255; else goto c02_0256;

c02_0255:;

	i8 v2954 = (i8)(intptr_t)(ws+3064);
	i8 v2955 = *(i8*)(intptr_t)v2954;

void f140_Discard(i8 /* node */);
	f140_Discard(v2955);

	i8 v2956 = (i8)(intptr_t)(ws+3056);
	i8 v2957 = *(i8*)(intptr_t)v2956;
	i8 v2958 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2958 = v2957;

	goto endsub;

c02_0256:;

c02_0252:;

	goto c02_0247;

c02_024f:;

c02_0247:;

	i8 v2959 = (i8)(intptr_t)(ws+3048);
	i1 v2960 = *(i1*)(intptr_t)v2959;
	i1 v2961 = (i1)+155;
	if (v2960==v2961) goto c02_025c; else goto c02_025e;

c02_025e:;

	i8 v2962 = (i8)(intptr_t)(ws+3048);
	i1 v2963 = *(i1*)(intptr_t)v2962;
	i1 v2964 = (i1)+130;
	if (v2963==v2964) goto c02_025c; else goto c02_025d;

c02_025c:;

	i8 v2965 = (i8)(intptr_t)(ws+3064);
	i8 v2966 = *(i8*)(intptr_t)v2965;
	i4 v2967 = *(i4*)(intptr_t)v2966;
	i4 v2968 = (i4)+0;
	if (v2967==v2968) goto c02_0262; else goto c02_0263;

c02_0262:;

	i8 v2969 = (i8)(intptr_t)(ws+3064);
	i8 v2970 = *(i8*)(intptr_t)v2969;

void f140_Discard(i8 /* node */);
	f140_Discard(v2970);

	i8 v2971 = (i8)(intptr_t)(ws+3056);
	i8 v2972 = *(i8*)(intptr_t)v2971;
	i8 v2973 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2973 = v2972;

	goto endsub;

c02_0263:;

c02_025f:;

	i8 v2974 = (i8)(intptr_t)(ws+3056);
	i8 v2975 = *(i8*)(intptr_t)v2974;
	i8 v2976 = v2975+(+66);
	i1 v2977 = *(i1*)(intptr_t)v2976;
	i1 v2978 = (i1)+42;
	if (v2977==v2978) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v2979 = (i8)(intptr_t)(ws+3064);
	i8 v2980 = *(i8*)(intptr_t)v2979;
	i4 v2981 = *(i4*)(intptr_t)v2980;
	i2 v2982 = (s2)(s4)v2981;
	i8 v2983 = (i8)(intptr_t)(ws+3094);
	*(i2*)(intptr_t)v2983 = v2982;

	i8 v2984 = (i8)(intptr_t)(ws+3048);
	i1 v2985 = *(i1*)(intptr_t)v2984;

	if (v2985 != +155) goto c02_026a;

	i8 v2986 = (i8)(intptr_t)(ws+3056);
	i8 v2987 = *(i8*)(intptr_t)v2986;
	i8 v2988 = v2987+(+8);
	i2 v2989 = *(i2*)(intptr_t)v2988;
	i8 v2990 = (i8)(intptr_t)(ws+3094);
	i2 v2991 = *(i2*)(intptr_t)v2990;
	i2 v2992 = v2989+v2991;
	i8 v2993 = (i8)(intptr_t)(ws+3056);
	i8 v2994 = *(i8*)(intptr_t)v2993;
	i8 v2995 = v2994+(+8);
	*(i2*)(intptr_t)v2995 = v2992;

	i8 v2996 = (i8)(intptr_t)(ws+3064);
	i8 v2997 = *(i8*)(intptr_t)v2996;

void f140_Discard(i8 /* node */);
	f140_Discard(v2997);

	i8 v2998 = (i8)(intptr_t)(ws+3056);
	i8 v2999 = *(i8*)(intptr_t)v2998;
	i8 v3000 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3000 = v2999;

	goto endsub;

c02_026a:;

	if (v2985 != +130) goto c02_026b;

	i8 v3001 = (i8)(intptr_t)(ws+3056);
	i8 v3002 = *(i8*)(intptr_t)v3001;
	i8 v3003 = v3002+(+8);
	i2 v3004 = *(i2*)(intptr_t)v3003;
	i8 v3005 = (i8)(intptr_t)(ws+3094);
	i2 v3006 = *(i2*)(intptr_t)v3005;
	i2 v3007 = v3004-v3006;
	i8 v3008 = (i8)(intptr_t)(ws+3056);
	i8 v3009 = *(i8*)(intptr_t)v3008;
	i8 v3010 = v3009+(+8);
	*(i2*)(intptr_t)v3010 = v3007;

	i8 v3011 = (i8)(intptr_t)(ws+3064);
	i8 v3012 = *(i8*)(intptr_t)v3011;

void f140_Discard(i8 /* node */);
	f140_Discard(v3012);

	i8 v3013 = (i8)(intptr_t)(ws+3056);
	i8 v3014 = *(i8*)(intptr_t)v3013;
	i8 v3015 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3015 = v3014;

	goto endsub;

c02_026b:;

c02_0269:;


	goto c02_0264;

c02_0268:;

c02_0264:;

	goto c02_0257;

c02_025d:;

c02_0257:;

	goto c02_022b;

c02_0231:;

c02_022b:;

	i8 v3016 = (i8)(intptr_t)(ws+3056);
	i8 v3017 = *(i8*)(intptr_t)v3016;
	i8 v3018 = v3017+(+66);
	i1 v3019 = *(i1*)(intptr_t)v3018;
	i1 v3020 = (i1)+40;
	if (v3019==v3020) goto c02_0273; else goto c02_0272;

c02_0273:;

	i8 v3021 = (i8)(intptr_t)(ws+3064);
	i8 v3022 = *(i8*)(intptr_t)v3021;
	i8 v3023 = v3022+(+66);
	i1 v3024 = *(i1*)(intptr_t)v3023;
	i1 v3025 = (i1)+40;
	if (v3024==v3025) goto c02_0271; else goto c02_0272;

c02_0271:;

	i8 v3026 = (i8)(intptr_t)(ws+3048);
	i1 v3027 = *(i1*)(intptr_t)v3026;
	i8 v3028 = (i8)(intptr_t)(ws+3056);
	i8 v3029 = *(i8*)(intptr_t)v3028;
	i8 v3030 = (i8)(intptr_t)(ws+3064);
	i8 v3031 = *(i8*)(intptr_t)v3030;

void f144_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	i4 v3032;
	f144_FoldConstant2(&v3032, v3031, v3029, v3027);
	i8 v3033 = (i8)(intptr_t)(ws+3056);
	i8 v3034 = *(i8*)(intptr_t)v3033;
	*(i4*)(intptr_t)v3034 = v3032;

	i8 v3035 = (i8)(intptr_t)(ws+3064);
	i8 v3036 = *(i8*)(intptr_t)v3035;

void f140_Discard(i8 /* node */);
	f140_Discard(v3036);

	i8 v3037 = (i8)(intptr_t)(ws+3056);
	i8 v3038 = *(i8*)(intptr_t)v3037;
	i8 v3039 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3039 = v3038;

	goto endsub;

c02_0272:;

c02_026c:;

	i8 v3040 = (i8)(intptr_t)(ws+3048);
	i1 v3041 = *(i1*)(intptr_t)v3040;
	i8 v3042 = (i8)(intptr_t)(ws+3049);
	i1 v3043 = *(i1*)(intptr_t)v3042;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v3044;
	f83_WidthToIndex(&v3044, v3043);
	i1 v3045 = v3041+v3044;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v3046;
	f84_AllocateNewNode(&v3046, v3045);
	i8 v3047 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3047 = v3046;

	i8 v3048 = (i8)(intptr_t)(ws+3056);
	i8 v3049 = *(i8*)(intptr_t)v3048;
	i8 v3050 = (i8)(intptr_t)(ws+3072);
	i8 v3051 = *(i8*)(intptr_t)v3050;
	i8 v3052 = v3051+(+24);
	*(i8*)(intptr_t)v3052 = v3049;

	i8 v3053 = (i8)(intptr_t)(ws+3064);
	i8 v3054 = *(i8*)(intptr_t)v3053;
	i8 v3055 = (i8)(intptr_t)(ws+3072);
	i8 v3056 = *(i8*)(intptr_t)v3055;
	i8 v3057 = v3056+(+32);
	*(i8*)(intptr_t)v3057 = v3054;

endsub:;
	*p2802 = *(i8*)(intptr_t)(ws+3072);
}

// MidCCast workspace at ws+3048 length ws+34
void f148_MidCCast(i8* p3058 /* result */, i1 p3059 /* issigned */, i8 p3060 /* lhs */, i1 p3061 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p3061; /*width */
	*(i8*)(intptr_t)(ws+3056) = p3060; /*lhs */
	*(i1*)(intptr_t)(ws+3064) = p3059; /*issigned */

	i8 v3062 = (i8)(intptr_t)(ws+3056);
	i8 v3063 = *(i8*)(intptr_t)v3062;
	i8 v3064 = v3063+(+66);
	i1 v3065 = *(i1*)(intptr_t)v3064;
	i1 v3066 = (i1)+40;
	if (v3065==v3066) goto c02_0277; else goto c02_0278;

c02_0277:;

	i8 v3067 = (i8)(intptr_t)(ws+3056);
	i8 v3068 = *(i8*)(intptr_t)v3067;
	i8 v3069 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3069 = v3068;

	goto endsub;

c02_0278:;

c02_0274:;

	i8 v3070 = (i8)(intptr_t)(ws+3056);
	i8 v3071 = *(i8*)(intptr_t)v3070;
	i8 v3072 = v3071+(+16);
	i8 v3073 = *(i8*)(intptr_t)v3072;
	i8 v3074 = v3073+(+42);
	i2 v3075 = *(i2*)(intptr_t)v3074;
	i1 v3076 = v3075;
	i8 v3077 = (i8)(intptr_t)(ws+3080);
	*(i1*)(intptr_t)v3077 = v3076;

	i8 v3078 = (i8)(intptr_t)(ws+3080);
	i1 v3079 = *(i1*)(intptr_t)v3078;
	i8 v3080 = (i8)(intptr_t)(ws+3048);
	i1 v3081 = *(i1*)(intptr_t)v3080;
	if (v3079==v3081) goto c02_027c; else goto c02_027d;

c02_027c:;

	i8 v3082 = (i8)(intptr_t)(ws+3056);
	i8 v3083 = *(i8*)(intptr_t)v3082;
	i8 v3084 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3084 = v3083;

	goto c02_0279;

c02_027d:;

	i8 v3085 = (i8)(intptr_t)(ws+3080);
	i1 v3086 = *(i1*)(intptr_t)v3085;

	if (v3086 != +1) goto c02_027f;

	i1 v3087 = (i1)+85;
	i8 v3088 = (i8)(intptr_t)(ws+3081);
	*(i1*)(intptr_t)v3088 = v3087;

	goto c02_027e;

c02_027f:;

	if (v3086 != +2) goto c02_0280;

	i1 v3089 = (i1)+90;
	i8 v3090 = (i8)(intptr_t)(ws+3081);
	*(i1*)(intptr_t)v3090 = v3089;

	goto c02_027e;

c02_0280:;

	if (v3086 != +4) goto c02_0281;

	i1 v3091 = (i1)+95;
	i8 v3092 = (i8)(intptr_t)(ws+3081);
	*(i1*)(intptr_t)v3092 = v3091;

	goto c02_027e;

c02_0281:;

	if (v3086 != +8) goto c02_0282;

	i1 v3093 = (i1)+100;
	i8 v3094 = (i8)(intptr_t)(ws+3081);
	*(i1*)(intptr_t)v3094 = v3093;

c02_0282:;

c02_027e:;


	i8 v3095 = (i8)(intptr_t)(ws+3081);
	i1 v3096 = *(i1*)(intptr_t)v3095;
	i8 v3097 = (i8)(intptr_t)(ws+3048);
	i1 v3098 = *(i1*)(intptr_t)v3097;

void f83_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v3099;
	f83_WidthToIndex(&v3099, v3098);
	i1 v3100 = v3096+v3099;

void f84_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v3101;
	f84_AllocateNewNode(&v3101, v3100);
	i8 v3102 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3102 = v3101;

	i8 v3103 = (i8)(intptr_t)(ws+3056);
	i8 v3104 = *(i8*)(intptr_t)v3103;
	i8 v3105 = (i8)(intptr_t)(ws+3072);
	i8 v3106 = *(i8*)(intptr_t)v3105;
	i8 v3107 = v3106+(+24);
	*(i8*)(intptr_t)v3107 = v3104;

	i8 v3108 = (i8)(intptr_t)(ws+3064);
	i1 v3109 = *(i1*)(intptr_t)v3108;
	i8 v3110 = (i8)(intptr_t)(ws+3072);
	i8 v3111 = *(i8*)(intptr_t)v3110;
	*(i1*)(intptr_t)v3111 = v3109;

c02_0279:;

endsub:;
	*p3058 = *(i8*)(intptr_t)(ws+3072);
}

// E_b8 workspace at ws+3344 length ws+16
void f149_E_b8(i1 p3112 /* byte */) {
	*(i1*)(intptr_t)(ws+3344) = p3112; /*byte */

	i8 v3113 = (i8)(intptr_t)(ws+768);
	i8 v3114 = *(i8*)(intptr_t)v3113;
	i8 v3115 = (i8)+0;
	if (v3114==v3115) goto c02_0287; else goto c02_0286;

c02_0286:;

	i8 v3116 = (i8)(intptr_t)(ws+768);
	i8 v3117 = *(i8*)(intptr_t)v3116;
	i8 v3118 = v3117+(+16);
	i8 v3119 = *(i8*)(intptr_t)v3118;
	i8 v3120 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v3120 = v3119;

	i8 v3121 = (i8)(intptr_t)(ws+3352);
	i8 v3122 = *(i8*)(intptr_t)v3121;
	i8 v3123 = v3122+(+128);
	i1 v3124 = *(i1*)(intptr_t)v3123;
	i1 v3125 = (i1)+128;
	if (v3124==v3125) goto c02_028b; else goto c02_028c;

c02_028b:;

	i8 v3126 = (i8)+144;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3127;
	f31_Alloc(&v3127, v3126);
	i8 v3128 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v3128 = v3127;

	i8 v3129 = (i8)(intptr_t)(ws+3352);
	i8 v3130 = *(i8*)(intptr_t)v3129;
	i8 v3131 = (i8)(intptr_t)(ws+768);
	i8 v3132 = *(i8*)(intptr_t)v3131;
	i8 v3133 = v3132+(+16);
	i8 v3134 = *(i8*)(intptr_t)v3133;
	i8 v3135 = v3134+(+136);
	*(i8*)(intptr_t)v3135 = v3130;

	i8 v3136 = (i8)(intptr_t)(ws+3352);
	i8 v3137 = *(i8*)(intptr_t)v3136;
	i8 v3138 = (i8)(intptr_t)(ws+768);
	i8 v3139 = *(i8*)(intptr_t)v3138;
	i8 v3140 = v3139+(+16);
	*(i8*)(intptr_t)v3140 = v3137;

	goto c02_0288;

c02_028c:;

c02_0288:;

	i8 v3141 = (i8)(intptr_t)(ws+3344);
	i1 v3142 = *(i1*)(intptr_t)v3141;
	i8 v3143 = (i8)(intptr_t)(ws+3352);
	i8 v3144 = *(i8*)(intptr_t)v3143;
	i8 v3145 = (i8)(intptr_t)(ws+3352);
	i8 v3146 = *(i8*)(intptr_t)v3145;
	i8 v3147 = v3146+(+128);
	i1 v3148 = *(i1*)(intptr_t)v3147;
	i8 v3149 = v3148;
	i8 v3150 = v3144+v3149;
	*(i1*)(intptr_t)v3150 = v3142;

	i8 v3151 = (i8)(intptr_t)(ws+3352);
	i8 v3152 = *(i8*)(intptr_t)v3151;
	i8 v3153 = v3152+(+128);
	i1 v3154 = *(i1*)(intptr_t)v3153;
	i1 v3155 = v3154+(+1);
	i8 v3156 = (i8)(intptr_t)(ws+3352);
	i8 v3157 = *(i8*)(intptr_t)v3156;
	i8 v3158 = v3157+(+128);
	*(i1*)(intptr_t)v3158 = v3155;

	i8 v3159 = (i8)(intptr_t)(ws+768);
	i8 v3160 = *(i8*)(intptr_t)v3159;
	i8 v3161 = v3160+(+24);
	i2 v3162 = *(i2*)(intptr_t)v3161;
	i2 v3163 = v3162+(+1);
	i8 v3164 = (i8)(intptr_t)(ws+768);
	i8 v3165 = *(i8*)(intptr_t)v3164;
	i8 v3166 = v3165+(+24);
	*(i2*)(intptr_t)v3166 = v3163;

	goto c02_0283;

c02_0287:;

c02_0283:;

endsub:;
}

// E_b16 workspace at ws+3288 length ws+2
void f150_E_b16(i2 p3167 /* word */) {
	*(i2*)(intptr_t)(ws+3288) = p3167; /*word */

	i8 v3168 = (i8)(intptr_t)(ws+3288);
	i2 v3169 = *(i2*)(intptr_t)v3168;
	i1 v3170 = v3169;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3170);

	i8 v3171 = (i8)(intptr_t)(ws+3288);
	i2 v3172 = *(i2*)(intptr_t)v3171;
	i1 v3173 = (i1)+8;
	i2 v3174 = ((i2)v3172)>>v3173;
	i1 v3175 = v3174;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3175);

endsub:;
}

// E_space workspace at ws+3248 length ws+0
void f152_E_space(void) {

	i1 v3185 = (i1)+32;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3185);

endsub:;
}

// E_comma workspace at ws+3272 length ws+0
void f153_E_comma(void) {

	i1 v3186 = (i1)+44;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3186);

endsub:;
}

// E_tab workspace at ws+3248 length ws+0
void f154_E_tab(void) {

	i1 v3187 = (i1)+9;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3187);

endsub:;
}

// E_nl workspace at ws+3248 length ws+0
void f155_E_nl(void) {

	i1 v3188 = (i1)+10;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3188);

endsub:;
}

// E workspace at ws+3328 length ws+9
void f158_E(i8 p3191 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p3191; /*text */

c02_028d:;

	i8 v3192 = (i8)(intptr_t)(ws+3328);
	i8 v3193 = *(i8*)(intptr_t)v3192;
	i1 v3194 = *(i1*)(intptr_t)v3193;
	i8 v3195 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v3195 = v3194;

	i8 v3196 = (i8)(intptr_t)(ws+3328);
	i8 v3197 = *(i8*)(intptr_t)v3196;
	i8 v3198 = v3197+(+1);
	i8 v3199 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3199 = v3198;

	i8 v3200 = (i8)(intptr_t)(ws+3336);
	i1 v3201 = *(i1*)(intptr_t)v3200;
	i1 v3202 = (i1)+0;
	if (v3201==v3202) goto c02_0292; else goto c02_0293;

c02_0292:;

	goto c02_028e;

c02_0293:;

c02_028f:;

	i8 v3203 = (i8)(intptr_t)(ws+3336);
	i1 v3204 = *(i1*)(intptr_t)v3203;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3204);

	goto c02_028d;

c02_028e:;

endsub:;
}

// E_u32 workspace at ws+3304 length ws+33
void f159_E_u32(i4 p3205 /* value */) {
	*(i4*)(intptr_t)(ws+3304) = p3205; /*value */

	i8 v3206 = (i8)(intptr_t)(ws+3308);
	i8 v3207 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3207 = v3206;

	i8 v3208 = (i8)(intptr_t)(ws+3304);
	i4 v3209 = *(i4*)(intptr_t)v3208;
	i1 v3210 = (i1)+10;
	i8 v3211 = (i8)(intptr_t)(ws+3320);
	i8 v3212 = *(i8*)(intptr_t)v3211;

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v3213;
	f13_UIToA(&v3213, v3212, v3210, v3209);
	i8 v3214 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3214 = v3213;

c02_0294:;

	i8 v3215 = (i8)(intptr_t)(ws+3320);
	i8 v3216 = *(i8*)(intptr_t)v3215;
	i1 v3217 = *(i1*)(intptr_t)v3216;
	i8 v3218 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v3218 = v3217;

	i8 v3219 = (i8)(intptr_t)(ws+3336);
	i1 v3220 = *(i1*)(intptr_t)v3219;
	i1 v3221 = (i1)+0;
	if (v3220==v3221) goto c02_0299; else goto c02_029a;

c02_0299:;

	goto c02_0295;

c02_029a:;

c02_0296:;

	i8 v3222 = (i8)(intptr_t)(ws+3336);
	i1 v3223 = *(i1*)(intptr_t)v3222;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3223);

	i8 v3224 = (i8)(intptr_t)(ws+3320);
	i8 v3225 = *(i8*)(intptr_t)v3224;
	i8 v3226 = v3225+(+1);
	i8 v3227 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3227 = v3226;

	goto c02_0294;

c02_0295:;

endsub:;
}

// E_u16 workspace at ws+3296 length ws+2
void f160_E_u16(i2 p3228 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3228; /*value */

	i8 v3229 = (i8)(intptr_t)(ws+3296);
	i2 v3230 = *(i2*)(intptr_t)v3229;
	i4 v3231 = v3230;

void f159_E_u32(i4 /* value */);
	f159_E_u32(v3231);

endsub:;
}

// E_u8 workspace at ws+3280 length ws+1
void f161_E_u8(i1 p3232 /* value */) {
	*(i1*)(intptr_t)(ws+3280) = p3232; /*value */

	i8 v3233 = (i8)(intptr_t)(ws+3280);
	i1 v3234 = *(i1*)(intptr_t)v3233;
	i4 v3235 = v3234;

void f159_E_u32(i4 /* value */);
	f159_E_u32(v3235);

endsub:;
}

// E_i16 workspace at ws+3288 length ws+2
void f163_E_i16(i2 p3248 /* value */) {
	*(i2*)(intptr_t)(ws+3288) = p3248; /*value */

	i8 v3249 = (i8)(intptr_t)(ws+3288);
	i2 v3250 = *(i2*)(intptr_t)v3249;
	i2 v3251 = (i2)+0;
	if ((s2)v3250<(s2)v3251) goto c02_02a3; else goto c02_02a4;

c02_02a3:;

	i1 v3252 = (i1)+45;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3252);

	i8 v3253 = (i8)(intptr_t)(ws+3288);
	i2 v3254 = *(i2*)(intptr_t)v3253;
	i2 v3255 = -v3254;
	i8 v3256 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v3256 = v3255;

	goto c02_02a0;

c02_02a4:;

	i1 v3257 = (i1)+43;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3257);

c02_02a0:;

	i8 v3258 = (i8)(intptr_t)(ws+3288);
	i2 v3259 = *(i2*)(intptr_t)v3258;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v3259);

endsub:;
}

// E_i32 workspace at ws+3272 length ws+4
void f164_E_i32(i4 p3260 /* value */) {
	*(i4*)(intptr_t)(ws+3272) = p3260; /*value */

	i8 v3261 = (i8)(intptr_t)(ws+3272);
	i4 v3262 = *(i4*)(intptr_t)v3261;
	i4 v3263 = (i4)+0;
	if ((s4)v3262<(s4)v3263) goto c02_02a8; else goto c02_02a9;

c02_02a8:;

	i1 v3264 = (i1)+45;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3264);

	i8 v3265 = (i8)(intptr_t)(ws+3272);
	i4 v3266 = *(i4*)(intptr_t)v3265;
	i4 v3267 = -v3266;
	i8 v3268 = (i8)(intptr_t)(ws+3272);
	*(i4*)(intptr_t)v3268 = v3267;

	goto c02_02a5;

c02_02a9:;

	i1 v3269 = (i1)+43;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3269);

c02_02a5:;

	i8 v3270 = (i8)(intptr_t)(ws+3272);
	i4 v3271 = *(i4*)(intptr_t)v3270;

void f159_E_u32(i4 /* value */);
	f159_E_u32(v3271);

endsub:;
}

// E_h workspace at ws+3296 length ws+25
void f165_E_h(i1 p3272 /* width */, i4 p3273 /* value */) {
	*(i4*)(intptr_t)(ws+3296) = p3273; /*value */
	*(i1*)(intptr_t)(ws+3300) = p3272; /*width */

	i8 v3274 = (i8)(intptr_t)(ws+3296);
	i4 v3275 = *(i4*)(intptr_t)v3274;
	i1 v3276 = (i1)+16;
	i8 v3277 = (i8)(intptr_t)(ws+3301);

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v3278;
	f13_UIToA(&v3278, v3277, v3276, v3275);
	i8 v3279 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v3279 = v3278;

	i8 v3280 = (i8)(intptr_t)(ws+3300);
	i1 v3281 = *(i1*)(intptr_t)v3280;
	i8 v3282 = (i8)(intptr_t)(ws+3312);
	i8 v3283 = *(i8*)(intptr_t)v3282;
	i8 v3284 = (i8)(intptr_t)(ws+3301);
	i8 v3285 = v3283-v3284;
	i1 v3286 = v3285;
	i1 v3287 = v3281-v3286;
	i8 v3288 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v3288 = v3287;

c02_02ac:;

	i8 v3289 = (i8)(intptr_t)(ws+3320);
	i1 v3290 = *(i1*)(intptr_t)v3289;
	i1 v3291 = (i1)+0;
	if (v3290==v3291) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i1 v3292 = (i1)+48;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3292);

	i8 v3293 = (i8)(intptr_t)(ws+3320);
	i1 v3294 = *(i1*)(intptr_t)v3293;
	i1 v3295 = v3294+(-1);
	i8 v3296 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v3296 = v3295;

	goto c02_02ac;

c02_02af:;

	i8 v3297 = (i8)(intptr_t)(ws+3301);

void f158_E(i8 /* text */);
	f158_E(v3297);

endsub:;
}

// E_h8 workspace at ws+3272 length ws+1
void f166_E_h8(i1 p3298 /* value */) {
	*(i1*)(intptr_t)(ws+3272) = p3298; /*value */

	i8 v3299 = (i8)(intptr_t)(ws+3272);
	i1 v3300 = *(i1*)(intptr_t)v3299;
	i4 v3301 = v3300;
	i1 v3302 = (i1)+2;

void f165_E_h(i1 /* width */, i4 /* value */);
	f165_E_h(v3302, v3301);

endsub:;
}

// E_h16 workspace at ws+3288 length ws+2
void f167_E_h16(i2 p3303 /* value */) {
	*(i2*)(intptr_t)(ws+3288) = p3303; /*value */

	i8 v3304 = (i8)(intptr_t)(ws+3288);
	i2 v3305 = *(i2*)(intptr_t)v3304;
	i4 v3306 = v3305;
	i1 v3307 = (i1)+4;

void f165_E_h(i1 /* width */, i4 /* value */);
	f165_E_h(v3307, v3306);

endsub:;
}

// E_labelref workspace at ws+3280 length ws+2
void f169_E_labelref(i2 p3312 /* labelid */) {
	*(i2*)(intptr_t)(ws+3280) = p3312; /*labelid */

	i1 v3313 = (i1)+3;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3313);

	i8 v3314 = (i8)(intptr_t)(ws+3280);
	i2 v3315 = *(i2*)(intptr_t)v3314;

void f167_E_h16(i2 /* value */);
	f167_E_h16(v3315);

endsub:;
}

// E_subref workspace at ws+3280 length ws+8
void f170_E_subref(i8 p3316 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p3316; /*subr */

	i8 v3317 = (i8)(intptr_t)(ws+3280);
	i8 v3318 = *(i8*)(intptr_t)v3317;
	i8 v3319 = (i8)(intptr_t)(ws+40);
	i8 v3320 = *(i8*)(intptr_t)v3319;
	if (v3318==v3320) goto c02_02b3; else goto c02_02b4;

c02_02b3:;

	i1 v3321 = (i1)+4;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3321);

	goto c02_02b0;

c02_02b4:;

	i1 v3322 = (i1)+1;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3322);

	i8 v3323 = (i8)(intptr_t)(ws+3280);
	i8 v3324 = *(i8*)(intptr_t)v3323;
	i8 v3325 = v3324+(+56);
	i2 v3326 = *(i2*)(intptr_t)v3325;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3326);

c02_02b0:;

endsub:;
}

// EmitterPushChunk workspace at ws+3288 length ws+8
void f172_EmitterPushChunk(void) {

	i8 v3337 = (i8)+26;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3338;
	f31_Alloc(&v3338, v3337);
	i8 v3339 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v3339 = v3338;

	i8 v3340 = (i8)+144;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3341;
	f31_Alloc(&v3341, v3340);
	i8 v3342 = (i8)(intptr_t)(ws+3288);
	i8 v3343 = *(i8*)(intptr_t)v3342;
	i8 v3344 = v3343+(+16);
	*(i8*)(intptr_t)v3344 = v3341;

	i8 v3345 = (i8)(intptr_t)(ws+3288);
	i8 v3346 = *(i8*)(intptr_t)v3345;
	i8 v3347 = v3346+(+16);
	i8 v3348 = *(i8*)(intptr_t)v3347;
	i8 v3349 = (i8)(intptr_t)(ws+3288);
	i8 v3350 = *(i8*)(intptr_t)v3349;
	i8 v3351 = v3350+(+8);
	*(i8*)(intptr_t)v3351 = v3348;

	i8 v3352 = (i8)(intptr_t)(ws+768);
	i8 v3353 = *(i8*)(intptr_t)v3352;
	i8 v3354 = (i8)(intptr_t)(ws+3288);
	i8 v3355 = *(i8*)(intptr_t)v3354;
	*(i8*)(intptr_t)v3355 = v3353;

	i8 v3356 = (i8)(intptr_t)(ws+3288);
	i8 v3357 = *(i8*)(intptr_t)v3356;
	i8 v3358 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v3358 = v3357;

endsub:;
}

// EmitterPopChunk workspace at ws+3288 length ws+40
void f173_EmitterPopChunk(i1 p3359 /* type */) {
	*(i1*)(intptr_t)(ws+3288) = p3359; /*type */

	i8 v3360 = (i8)(intptr_t)(ws+244);
	i8 v3361 = (i8)(intptr_t)(ws+3288);
	i1 v3362 = *(i1*)(intptr_t)v3361;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3362, v3360);

	i8 v3363 = (i8)(intptr_t)(ws+768);
	i8 v3364 = *(i8*)(intptr_t)v3363;
	i8 v3365 = v3364+(+24);
	i2 v3366 = *(i2*)(intptr_t)v3365;
	i8 v3367 = (i8)(intptr_t)(ws+3290);
	*(i2*)(intptr_t)v3367 = v3366;

	i8 v3368 = (i8)(intptr_t)(ws+244);
	i8 v3369 = (i8)(intptr_t)(ws+3290);
	i2 v3370 = *(i2*)(intptr_t)v3369;
	i1 v3371 = v3370;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3371, v3368);

	i8 v3372 = (i8)(intptr_t)(ws+244);
	i8 v3373 = (i8)(intptr_t)(ws+3290);
	i2 v3374 = *(i2*)(intptr_t)v3373;
	i1 v3375 = (i1)+8;
	i2 v3376 = ((i2)v3374)>>v3375;
	i1 v3377 = v3376;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3377, v3372);

	i8 v3378 = (i8)(intptr_t)(ws+768);
	i8 v3379 = *(i8*)(intptr_t)v3378;
	i8 v3380 = v3379+(+8);
	i8 v3381 = *(i8*)(intptr_t)v3380;
	i8 v3382 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v3382 = v3381;

c02_02b7:;

	i8 v3383 = (i8)(intptr_t)(ws+3296);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i8 v3385 = (i8)+0;
	if (v3384==v3385) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i1 v3386 = (i1)+0;
	i8 v3387 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v3387 = v3386;

c02_02bd:;

	i8 v3388 = (i8)(intptr_t)(ws+3304);
	i1 v3389 = *(i1*)(intptr_t)v3388;
	i8 v3390 = (i8)(intptr_t)(ws+3296);
	i8 v3391 = *(i8*)(intptr_t)v3390;
	i8 v3392 = v3391+(+128);
	i1 v3393 = *(i1*)(intptr_t)v3392;
	if (v3389==v3393) goto c02_02c0; else goto c02_02bf;

c02_02bf:;

	i8 v3394 = (i8)(intptr_t)(ws+244);
	i8 v3395 = (i8)(intptr_t)(ws+3296);
	i8 v3396 = *(i8*)(intptr_t)v3395;
	i8 v3397 = (i8)(intptr_t)(ws+3304);
	i1 v3398 = *(i1*)(intptr_t)v3397;
	i8 v3399 = v3398;
	i8 v3400 = v3396+v3399;
	i1 v3401 = *(i1*)(intptr_t)v3400;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3401, v3394);

	i8 v3402 = (i8)(intptr_t)(ws+3304);
	i1 v3403 = *(i1*)(intptr_t)v3402;
	i1 v3404 = v3403+(+1);
	i8 v3405 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v3405 = v3404;

	goto c02_02bd;

c02_02c0:;

	i8 v3406 = (i8)(intptr_t)(ws+3296);
	i8 v3407 = *(i8*)(intptr_t)v3406;
	i8 v3408 = v3407+(+136);
	i8 v3409 = *(i8*)(intptr_t)v3408;
	i8 v3410 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v3410 = v3409;

	i8 v3411 = (i8)(intptr_t)(ws+3296);
	i8 v3412 = *(i8*)(intptr_t)v3411;

void f32_Free(i8 /* block */);
	f32_Free(v3412);

	i8 v3413 = (i8)(intptr_t)(ws+3312);
	i8 v3414 = *(i8*)(intptr_t)v3413;
	i8 v3415 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v3415 = v3414;

	goto c02_02b7;

c02_02ba:;

	i8 v3416 = (i8)(intptr_t)(ws+768);
	i8 v3417 = *(i8*)(intptr_t)v3416;
	i8 v3418 = *(i8*)(intptr_t)v3417;
	i8 v3419 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3419 = v3418;

	i8 v3420 = (i8)(intptr_t)(ws+768);
	i8 v3421 = *(i8*)(intptr_t)v3420;

void f32_Free(i8 /* block */);
	f32_Free(v3421);

	i8 v3422 = (i8)(intptr_t)(ws+3320);
	i8 v3423 = *(i8*)(intptr_t)v3422;
	i8 v3424 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v3424 = v3423;

endsub:;
}
const i1 c02_s0040[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+2880 length ws+8
void f174_EmitterOpenfile(i8 p3425 /* filename */) {
	*(i8*)(intptr_t)(ws+2880) = p3425; /*filename */

	i8 v3426 = (i8)(intptr_t)(ws+244);
	i8 v3427 = (i8)(intptr_t)(ws+2880);
	i8 v3428 = *(i8*)(intptr_t)v3427;

void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v3429;
	f42_FCBOpenOut(&v3429, v3428, v3426);
	i1 v3430 = (i1)+0;
	if (v3429==v3430) goto c02_02c5; else goto c02_02c4;

c02_02c4:;

	i8 v3431 = (i8)(intptr_t)c02_s0040;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v3431);

	goto c02_02c1;

c02_02c5:;

c02_02c1:;

endsub:;
}
const i1 c02_s0041[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+2880 length ws+0
void f175_EmitterClosefile(void) {

	i8 v3432 = (i8)(intptr_t)(ws+244);
	i1 v3433 = (i1)+69;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3433, v3432);

	i8 v3434 = (i8)(intptr_t)(ws+244);
	i1 v3435 = (i1)+0;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3435, v3434);

	i8 v3436 = (i8)(intptr_t)(ws+244);
	i1 v3437 = (i1)+0;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3437, v3436);

	i8 v3438 = (i8)(intptr_t)(ws+244);

void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	i1 v3439;
	f43_FCBClose(&v3439, v3438);
	i1 v3440 = (i1)+0;
	if (v3439==v3440) goto c02_02ca; else goto c02_02c9;

c02_02c9:;

	i8 v3441 = (i8)(intptr_t)c02_s0041;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v3441);

	goto c02_02c6;

c02_02ca:;

c02_02c6:;

endsub:;
}

// EmitterDeclareSubroutine workspace at ws+3008 length ws+8
void f176_EmitterDeclareSubroutine(i8 p3442 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p3442; /*subr */


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v3443 = (i8)(intptr_t)(ws+3008);
	i8 v3444 = *(i8*)(intptr_t)v3443;
	i8 v3445 = v3444+(+56);
	i2 v3446 = *(i2*)(intptr_t)v3445;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3446);

	i8 v3447 = (i8)(intptr_t)(ws+3008);
	i8 v3448 = *(i8*)(intptr_t)v3447;
	i8 v3449 = *(i8*)(intptr_t)v3448;

void f158_E(i8 /* text */);
	f158_E(v3449);

	i1 v3450 = (i1)+78;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v3450);

endsub:;
}

// EmitterDeclareExternalSubroutine workspace at ws+3000 length ws+16
void f177_EmitterDeclareExternalSubroutine(i8 p3451 /* external */, i2 p3452 /* id */) {
	*(i2*)(intptr_t)(ws+3000) = p3452; /*id */
	*(i8*)(intptr_t)(ws+3008) = p3451; /*external */


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v3453 = (i8)(intptr_t)(ws+3000);
	i2 v3454 = *(i2*)(intptr_t)v3453;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3454);

	i8 v3455 = (i8)(intptr_t)(ws+3008);
	i8 v3456 = *(i8*)(intptr_t)v3455;

void f158_E(i8 /* text */);
	f158_E(v3456);

	i1 v3457 = (i1)+88;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v3457);

endsub:;
}

// EmitterReferenceSubroutine workspace at ws+3056 length ws+16
void f178_EmitterReferenceSubroutine(i8 p3458 /* used */, i8 p3459 /* user */) {
	*(i8*)(intptr_t)(ws+3056) = p3459; /*user */
	*(i8*)(intptr_t)(ws+3064) = p3458; /*used */


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v3460 = (i8)(intptr_t)(ws+3056);
	i8 v3461 = *(i8*)(intptr_t)v3460;
	i8 v3462 = v3461+(+56);
	i2 v3463 = *(i2*)(intptr_t)v3462;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3463);

	i8 v3464 = (i8)(intptr_t)(ws+3064);
	i8 v3465 = *(i8*)(intptr_t)v3464;
	i8 v3466 = v3465+(+56);
	i2 v3467 = *(i2*)(intptr_t)v3466;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3467);

	i1 v3468 = (i1)+82;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v3468);

endsub:;
}

// EmitterDeclareWorkspace workspace at ws+3272 length ws+12
void f179_EmitterDeclareWorkspace(i2 p3469 /* workspace */, i1 p3470 /* wid */, i8 p3471 /* subr */) {
	*(i8*)(intptr_t)(ws+3272) = p3471; /*subr */
	*(i1*)(intptr_t)(ws+3280) = p3470; /*wid */
	*(i2*)(intptr_t)(ws+3282) = p3469; /*workspace */


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v3472 = (i8)(intptr_t)(ws+3272);
	i8 v3473 = *(i8*)(intptr_t)v3472;
	i8 v3474 = v3473+(+56);
	i2 v3475 = *(i2*)(intptr_t)v3474;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3475);

	i8 v3476 = (i8)(intptr_t)(ws+3280);
	i1 v3477 = *(i1*)(intptr_t)v3476;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v3477);

	i8 v3478 = (i8)(intptr_t)(ws+3282);
	i2 v3479 = *(i2*)(intptr_t)v3478;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v3479);

	i1 v3480 = (i1)+87;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v3480);

endsub:;
}

// LookupSymbolInNamespace workspace at ws+3088 length ws+24
void f189_LookupSymbolInNamespace(i8* p3805 /* symbol */, i8 p3806 /* name */, i8 p3807 /* namespace */) {
	*(i8*)(intptr_t)(ws+3088) = p3807; /*namespace */
	*(i8*)(intptr_t)(ws+3096) = p3806; /*name */

	i8 v3808 = (i8)(intptr_t)(ws+3088);
	i8 v3809 = *(i8*)(intptr_t)v3808;
	i8 v3810 = *(i8*)(intptr_t)v3809;
	i8 v3811 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3811 = v3810;

c02_0355:;

	i8 v3812 = (i8)(intptr_t)(ws+3104);
	i8 v3813 = *(i8*)(intptr_t)v3812;
	i8 v3814 = (i8)+0;
	if (v3813==v3814) goto c02_0358; else goto c02_0357;

c02_0357:;

	i8 v3815 = (i8)(intptr_t)(ws+3104);
	i8 v3816 = *(i8*)(intptr_t)v3815;
	i8 v3817 = v3816+(+48);
	i8 v3818 = *(i8*)(intptr_t)v3817;
	i8 v3819 = (i8)(intptr_t)(ws+3096);
	i8 v3820 = *(i8*)(intptr_t)v3819;

void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v3821;
	f25_StrCmp(&v3821, v3820, v3818);
	i1 v3822 = (i1)+0;
	if (v3821==v3822) goto c02_035c; else goto c02_035d;

c02_035c:;

c02_0360:;

	i8 v3823 = (i8)(intptr_t)(ws+3104);
	i8 v3824 = *(i8*)(intptr_t)v3823;
	i8 v3825 = v3824+(+46);
	i1 v3826 = *(i1*)(intptr_t)v3825;
	i1 v3827 = (i1)+39;
	if (v3826==v3827) goto c02_0362; else goto c02_0363;

c02_0362:;

	i8 v3828 = (i8)(intptr_t)(ws+3104);
	i8 v3829 = *(i8*)(intptr_t)v3828;
	i8 v3830 = *(i8*)(intptr_t)v3829;
	i8 v3831 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3831 = v3830;

	goto c02_0360;

c02_0363:;

	goto endsub;

c02_035d:;

c02_0359:;

	i8 v3832 = (i8)(intptr_t)(ws+3104);
	i8 v3833 = *(i8*)(intptr_t)v3832;
	i8 v3834 = v3833+(+56);
	i8 v3835 = *(i8*)(intptr_t)v3834;
	i8 v3836 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3836 = v3835;

	goto c02_0355;

c02_0358:;

	i8 v3837 = (i8)+0;
	i8 v3838 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3838 = v3837;

endsub:;
	*p3805 = *(i8*)(intptr_t)(ws+3104);
}

// LookupSymbol workspace at ws+3024 length ws+24
void f190_LookupSymbol(i8* p3839 /* symbol */, i8 p3840 /* name */, i8 p3841 /* namespace */) {
	*(i8*)(intptr_t)(ws+3024) = p3841; /*namespace */
	*(i8*)(intptr_t)(ws+3032) = p3840; /*name */

	i8 v3842 = (i8)(intptr_t)(ws+3024);
	i8 v3843 = *(i8*)(intptr_t)v3842;
	i8 v3844 = (i8)+0;
	if (v3843==v3844) goto c02_0367; else goto c02_0368;

c02_0367:;

	i8 v3845 = (i8)(intptr_t)(ws+40);
	i8 v3846 = *(i8*)(intptr_t)v3845;
	i8 v3847 = v3846+(+16);
	i8 v3848 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v3848 = v3847;

	goto c02_0364;

c02_0368:;

c02_0364:;

c02_036b:;

	i8 v3849 = (i8)(intptr_t)(ws+3024);
	i8 v3850 = *(i8*)(intptr_t)v3849;
	i8 v3851 = (i8)+0;
	if (v3850==v3851) goto c02_036e; else goto c02_036d;

c02_036d:;

	i8 v3852 = (i8)(intptr_t)(ws+3024);
	i8 v3853 = *(i8*)(intptr_t)v3852;
	i8 v3854 = (i8)(intptr_t)(ws+3032);
	i8 v3855 = *(i8*)(intptr_t)v3854;

void f189_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v3856;
	f189_LookupSymbolInNamespace(&v3856, v3855, v3853);
	i8 v3857 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v3857 = v3856;

	i8 v3858 = (i8)(intptr_t)(ws+3040);
	i8 v3859 = *(i8*)(intptr_t)v3858;
	i8 v3860 = (i8)+0;
	if (v3859==v3860) goto c02_0373; else goto c02_0372;

c02_0372:;

	goto endsub;

c02_0373:;

c02_036f:;

	i8 v3861 = (i8)(intptr_t)(ws+3024);
	i8 v3862 = *(i8*)(intptr_t)v3861;
	i8 v3863 = v3862+(+16);
	i8 v3864 = *(i8*)(intptr_t)v3863;
	i8 v3865 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v3865 = v3864;

	goto c02_036b;

c02_036e:;

	i8 v3866 = (i8)+0;
	i8 v3867 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v3867 = v3866;

endsub:;
	*p3839 = *(i8*)(intptr_t)(ws+3040);
}

// AddToNamespace workspace at ws+3088 length ws+16
void f191_AddToNamespace(i8 p3868 /* symbol */, i8 p3869 /* namespace */) {
	*(i8*)(intptr_t)(ws+3088) = p3869; /*namespace */
	*(i8*)(intptr_t)(ws+3096) = p3868; /*symbol */

	i8 v3870 = (i8)(intptr_t)(ws+3088);
	i8 v3871 = *(i8*)(intptr_t)v3870;
	i8 v3872 = v3871+(+8);
	i8 v3873 = *(i8*)(intptr_t)v3872;
	i8 v3874 = (i8)+0;
	if (v3873==v3874) goto c02_0377; else goto c02_0378;

c02_0377:;

	i8 v3875 = (i8)(intptr_t)(ws+3096);
	i8 v3876 = *(i8*)(intptr_t)v3875;
	i8 v3877 = (i8)(intptr_t)(ws+3088);
	i8 v3878 = *(i8*)(intptr_t)v3877;
	*(i8*)(intptr_t)v3878 = v3876;

	i8 v3879 = (i8)(intptr_t)(ws+3096);
	i8 v3880 = *(i8*)(intptr_t)v3879;
	i8 v3881 = (i8)(intptr_t)(ws+3088);
	i8 v3882 = *(i8*)(intptr_t)v3881;
	i8 v3883 = v3882+(+8);
	*(i8*)(intptr_t)v3883 = v3880;

	goto c02_0374;

c02_0378:;

	i8 v3884 = (i8)(intptr_t)(ws+3096);
	i8 v3885 = *(i8*)(intptr_t)v3884;
	i8 v3886 = (i8)(intptr_t)(ws+3088);
	i8 v3887 = *(i8*)(intptr_t)v3886;
	i8 v3888 = v3887+(+8);
	i8 v3889 = *(i8*)(intptr_t)v3888;
	i8 v3890 = v3889+(+56);
	*(i8*)(intptr_t)v3890 = v3885;

	i8 v3891 = (i8)(intptr_t)(ws+3096);
	i8 v3892 = *(i8*)(intptr_t)v3891;
	i8 v3893 = (i8)(intptr_t)(ws+3088);
	i8 v3894 = *(i8*)(intptr_t)v3893;
	i8 v3895 = v3894+(+8);
	*(i8*)(intptr_t)v3895 = v3892;

c02_0374:;

endsub:;
}
const i1 c02_s0042[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s0043[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };

// AddSymbol workspace at ws+3064 length ws+24
void f192_AddSymbol(i8* p3896 /* symbol */, i8 p3897 /* name */, i8 p3898 /* namespace */) {
	*(i8*)(intptr_t)(ws+3064) = p3898; /*namespace */
	*(i8*)(intptr_t)(ws+3072) = p3897; /*name */

	i8 v3899 = (i8)(intptr_t)(ws+3064);
	i8 v3900 = *(i8*)(intptr_t)v3899;
	i8 v3901 = (i8)+0;
	if (v3900==v3901) goto c02_037c; else goto c02_037d;

c02_037c:;

	i8 v3902 = (i8)(intptr_t)(ws+40);
	i8 v3903 = *(i8*)(intptr_t)v3902;
	i8 v3904 = v3903+(+16);
	i8 v3905 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v3905 = v3904;

	goto c02_0379;

c02_037d:;

c02_0379:;

	i8 v3906 = (i8)+64;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3907;
	f31_Alloc(&v3907, v3906);
	i8 v3908 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3908 = v3907;

	i8 v3909 = (i8)(intptr_t)(ws+3072);
	i8 v3910 = *(i8*)(intptr_t)v3909;
	i8 v3911 = (i8)+0;
	if (v3910==v3911) goto c02_0382; else goto c02_0381;

c02_0381:;

	i8 v3912 = (i8)(intptr_t)(ws+3064);
	i8 v3913 = *(i8*)(intptr_t)v3912;
	i8 v3914 = (i8)(intptr_t)(ws+3072);
	i8 v3915 = *(i8*)(intptr_t)v3914;

void f189_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v3916;
	f189_LookupSymbolInNamespace(&v3916, v3915, v3913);
	i8 v3917 = (i8)+0;
	if (v3916==v3917) goto c02_0387; else goto c02_0386;

c02_0386:;


void f55_StartError(void);
	f55_StartError();

	i8 v3918 = (i8)(intptr_t)c02_s0042;

void f11_print(i8 /* ptr */);
	f11_print(v3918);

	i8 v3919 = (i8)(intptr_t)(ws+3072);
	i8 v3920 = *(i8*)(intptr_t)v3919;

void f11_print(i8 /* ptr */);
	f11_print(v3920);

	i8 v3921 = (i8)(intptr_t)c02_s0043;

void f11_print(i8 /* ptr */);
	f11_print(v3921);


void f56_EndError(void);
	f56_EndError();

	goto c02_0383;

c02_0387:;

c02_0383:;

	i8 v3922 = (i8)(intptr_t)(ws+3072);
	i8 v3923 = *(i8*)(intptr_t)v3922;
	i8 v3924 = (i8)(intptr_t)(ws+3080);
	i8 v3925 = *(i8*)(intptr_t)v3924;
	i8 v3926 = v3925+(+48);
	*(i8*)(intptr_t)v3926 = v3923;

	i8 v3927 = (i8)(intptr_t)(ws+3064);
	i8 v3928 = *(i8*)(intptr_t)v3927;
	i8 v3929 = (i8)(intptr_t)(ws+3080);
	i8 v3930 = *(i8*)(intptr_t)v3929;

void f191_AddToNamespace(i8 /* symbol */, i8 /* namespace */);
	f191_AddToNamespace(v3930, v3928);

	goto c02_037e;

c02_0382:;

c02_037e:;

endsub:;
	*p3896 = *(i8*)(intptr_t)(ws+3080);
}

// AddAlias workspace at ws+3008 length ws+32
void f193_AddAlias(i8* p3931 /* symbol */, i8 p3932 /* real */, i8 p3933 /* name */, i8 p3934 /* namespace */) {
	*(i8*)(intptr_t)(ws+3008) = p3934; /*namespace */
	*(i8*)(intptr_t)(ws+3016) = p3933; /*name */
	*(i8*)(intptr_t)(ws+3024) = p3932; /*real */

	i8 v3935 = (i8)(intptr_t)(ws+3008);
	i8 v3936 = *(i8*)(intptr_t)v3935;
	i8 v3937 = (i8)(intptr_t)(ws+3016);
	i8 v3938 = *(i8*)(intptr_t)v3937;

void f192_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v3939;
	f192_AddSymbol(&v3939, v3938, v3936);
	i8 v3940 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v3940 = v3939;

	i1 v3941 = (i1)+39;
	i8 v3942 = (i8)(intptr_t)(ws+3032);
	i8 v3943 = *(i8*)(intptr_t)v3942;
	i8 v3944 = v3943+(+46);
	*(i1*)(intptr_t)v3944 = v3941;

	i8 v3945 = (i8)(intptr_t)(ws+3024);
	i8 v3946 = *(i8*)(intptr_t)v3945;
	i8 v3947 = (i8)(intptr_t)(ws+3032);
	i8 v3948 = *(i8*)(intptr_t)v3947;
	*(i8*)(intptr_t)v3948 = v3946;

endsub:;
	*p3931 = *(i8*)(intptr_t)(ws+3032);
}

// AddAliasString workspace at ws+2880 length ws+24
void f194_AddAliasString(i8 p3949 /* real */, i8 p3950 /* name */) {
	*(i8*)(intptr_t)(ws+2880) = p3950; /*name */
	*(i8*)(intptr_t)(ws+2888) = p3949; /*real */

	i8 v3951 = (i8)+0;
	i8 v3952 = (i8)(intptr_t)(ws+2880);
	i8 v3953 = *(i8*)(intptr_t)v3952;
	i8 v3954 = (i8)(intptr_t)(ws+2888);
	i8 v3955 = *(i8*)(intptr_t)v3954;

void f193_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	i8 v3956;
	f193_AddAlias(&v3956, v3955, v3953, v3951);
	i8 v3957 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v3957 = v3956;

endsub:;
}
const i1 c02_s0044[] = { 0x27,0 };
const i1 c02_s0045[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };

// CheckNotPartialType workspace at ws+3048 length ws+8
void f195_CheckNotPartialType(i8 p3958 /* type */) {
	*(i8*)(intptr_t)(ws+3048) = p3958; /*type */

	i8 v3959 = (i8)(intptr_t)(ws+3048);
	i8 v3960 = *(i8*)(intptr_t)v3959;
	i8 v3961 = v3960+(+40);
	i1 v3962 = *(i1*)(intptr_t)v3961;
	i1 v3963 = (i1)+1;
	if (v3962==v3963) goto c02_038b; else goto c02_038c;

c02_038b:;


void f55_StartError(void);
	f55_StartError();

	i8 v3964 = (i8)(intptr_t)c02_s0044;

void f11_print(i8 /* ptr */);
	f11_print(v3964);

	i8 v3965 = (i8)(intptr_t)(ws+3048);
	i8 v3966 = *(i8*)(intptr_t)v3965;
	i8 v3967 = v3966+(+48);
	i8 v3968 = *(i8*)(intptr_t)v3967;

void f11_print(i8 /* ptr */);
	f11_print(v3968);

	i8 v3969 = (i8)(intptr_t)c02_s0045;

void f11_print(i8 /* ptr */);
	f11_print(v3969);


void f56_EndError(void);
	f56_EndError();

	goto c02_0388;

c02_038c:;

c02_0388:;

endsub:;
}

// MakeNumberType workspace at ws+2880 length ws+24
void f196_MakeNumberType(i8* p3970 /* symbol */, i8 p3971 /* name */, i1 p3972 /* is_signed */, i1 p3973 /* alignment */, i1 p3974 /* width */) {
	*(i1*)(intptr_t)(ws+2880) = p3974; /*width */
	*(i1*)(intptr_t)(ws+2881) = p3973; /*alignment */
	*(i1*)(intptr_t)(ws+2882) = p3972; /*is_signed */
	*(i8*)(intptr_t)(ws+2888) = p3971; /*name */

	i8 v3975 = (i8)+64;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3976;
	f31_Alloc(&v3976, v3975);
	i8 v3977 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v3977 = v3976;

	i1 v3978 = (i1)+30;
	i8 v3979 = (i8)(intptr_t)(ws+2896);
	i8 v3980 = *(i8*)(intptr_t)v3979;
	i8 v3981 = v3980+(+46);
	*(i1*)(intptr_t)v3981 = v3978;

	i1 v3982 = (i1)+2;
	i8 v3983 = (i8)(intptr_t)(ws+2896);
	i8 v3984 = *(i8*)(intptr_t)v3983;
	i8 v3985 = v3984+(+40);
	*(i1*)(intptr_t)v3985 = v3982;

	i8 v3986 = (i8)(intptr_t)(ws+2880);
	i1 v3987 = *(i1*)(intptr_t)v3986;
	i2 v3988 = v3987;
	i8 v3989 = (i8)(intptr_t)(ws+2896);
	i8 v3990 = *(i8*)(intptr_t)v3989;
	i8 v3991 = v3990+(+42);
	*(i2*)(intptr_t)v3991 = v3988;

	i8 v3992 = (i8)(intptr_t)(ws+2880);
	i1 v3993 = *(i1*)(intptr_t)v3992;
	i2 v3994 = v3993;
	i8 v3995 = (i8)(intptr_t)(ws+2896);
	i8 v3996 = *(i8*)(intptr_t)v3995;
	i8 v3997 = v3996+(+44);
	*(i2*)(intptr_t)v3997 = v3994;

	i8 v3998 = (i8)(intptr_t)(ws+2881);
	i1 v3999 = *(i1*)(intptr_t)v3998;
	i8 v4000 = (i8)(intptr_t)(ws+2896);
	i8 v4001 = *(i8*)(intptr_t)v4000;
	i8 v4002 = v4001+(+41);
	*(i1*)(intptr_t)v4002 = v3999;

	i8 v4003 = (i8)(intptr_t)(ws+2882);
	i1 v4004 = *(i1*)(intptr_t)v4003;
	i8 v4005 = (i8)(intptr_t)(ws+2896);
	i8 v4006 = *(i8*)(intptr_t)v4005;
	*(i1*)(intptr_t)v4006 = v4004;

	i8 v4007 = (i8)(intptr_t)(ws+2888);
	i8 v4008 = *(i8*)(intptr_t)v4007;
	i8 v4009 = (i8)(intptr_t)(ws+2896);
	i8 v4010 = *(i8*)(intptr_t)v4009;
	i8 v4011 = v4010+(+48);
	*(i8*)(intptr_t)v4011 = v4008;

	i8 v4012 = (i8)(intptr_t)(ws+40);
	i8 v4013 = *(i8*)(intptr_t)v4012;
	i8 v4014 = v4013+(+16);
	i8 v4015 = (i8)(intptr_t)(ws+2896);
	i8 v4016 = *(i8*)(intptr_t)v4015;

void f191_AddToNamespace(i8 /* symbol */, i8 /* namespace */);
	f191_AddToNamespace(v4016, v4014);

endsub:;
	*p3970 = *(i8*)(intptr_t)(ws+2896);
}

// IsTypeOfKind workspace at ws+3112 length ws+10
void f197_IsTypeOfKind(i1* p4017 /* result */, i1 p4018 /* kind */, i8 p4019 /* type */) {
	*(i8*)(intptr_t)(ws+3112) = p4019; /*type */
	*(i1*)(intptr_t)(ws+3120) = p4018; /*kind */

	i1 v4020 = (i1)+0;
	i8 v4021 = (i8)(intptr_t)(ws+3121);
	*(i1*)(intptr_t)v4021 = v4020;

	i8 v4022 = (i8)(intptr_t)(ws+3112);
	i8 v4023 = *(i8*)(intptr_t)v4022;
	i8 v4024 = (i8)+0;
	if (v4023==v4024) goto c02_0395; else goto c02_0397;

c02_0397:;

	i8 v4025 = (i8)(intptr_t)(ws+3112);
	i8 v4026 = *(i8*)(intptr_t)v4025;
	i8 v4027 = v4026+(+46);
	i1 v4028 = *(i1*)(intptr_t)v4027;
	i1 v4029 = (i1)+30;
	if (v4028==v4029) goto c02_0396; else goto c02_0395;

c02_0396:;

	i8 v4030 = (i8)(intptr_t)(ws+3112);
	i8 v4031 = *(i8*)(intptr_t)v4030;
	i8 v4032 = v4031+(+40);
	i1 v4033 = *(i1*)(intptr_t)v4032;
	i8 v4034 = (i8)(intptr_t)(ws+3120);
	i1 v4035 = *(i1*)(intptr_t)v4034;
	if (v4033==v4035) goto c02_0394; else goto c02_0395;

c02_0394:;

	i1 v4036 = (i1)+1;
	i8 v4037 = (i8)(intptr_t)(ws+3121);
	*(i1*)(intptr_t)v4037 = v4036;

	goto c02_038d;

c02_0395:;

c02_038d:;

endsub:;
	*p4017 = *(i1*)(intptr_t)(ws+3121);
}

// IsArray workspace at ws+3056 length ws+9
void f198_IsArray(i1* p4038 /* result */, i8 p4039 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4039; /*type */

	i8 v4040 = (i8)(intptr_t)(ws+3056);
	i8 v4041 = *(i8*)(intptr_t)v4040;
	i1 v4042 = (i1)+4;

void f197_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4043;
	f197_IsTypeOfKind(&v4043, v4042, v4041);
	i8 v4044 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4044 = v4043;

endsub:;
	*p4038 = *(i1*)(intptr_t)(ws+3064);
}

// IsPtr workspace at ws+3096 length ws+9
void f199_IsPtr(i1* p4045 /* result */, i8 p4046 /* type */) {
	*(i8*)(intptr_t)(ws+3096) = p4046; /*type */

	i8 v4047 = (i8)(intptr_t)(ws+3096);
	i8 v4048 = *(i8*)(intptr_t)v4047;
	i1 v4049 = (i1)+3;

void f197_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4050;
	f197_IsTypeOfKind(&v4050, v4049, v4048);
	i8 v4051 = (i8)(intptr_t)(ws+3104);
	*(i1*)(intptr_t)v4051 = v4050;

endsub:;
	*p4045 = *(i1*)(intptr_t)(ws+3104);
}

// IsNum workspace at ws+3096 length ws+9
void f200_IsNum(i1* p4052 /* result */, i8 p4053 /* type */) {
	*(i8*)(intptr_t)(ws+3096) = p4053; /*type */

	i8 v4054 = (i8)(intptr_t)(ws+3096);
	i8 v4055 = *(i8*)(intptr_t)v4054;
	i8 v4056 = (i8)+0;
	if (v4055==v4056) goto c02_039b; else goto c02_039c;

c02_039b:;

	i1 v4057 = (i1)+1;
	i8 v4058 = (i8)(intptr_t)(ws+3104);
	*(i1*)(intptr_t)v4058 = v4057;

	goto c02_0398;

c02_039c:;

	i8 v4059 = (i8)(intptr_t)(ws+3096);
	i8 v4060 = *(i8*)(intptr_t)v4059;
	i1 v4061 = (i1)+2;

void f197_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4062;
	f197_IsTypeOfKind(&v4062, v4061, v4060);
	i8 v4063 = (i8)(intptr_t)(ws+3104);
	*(i1*)(intptr_t)v4063 = v4062;

c02_0398:;

endsub:;
	*p4052 = *(i1*)(intptr_t)(ws+3104);
}

// IsSNum workspace at ws+3048 length ws+9
void f201_IsSNum(i1* p4064 /* result */, i8 p4065 /* type */) {
	*(i8*)(intptr_t)(ws+3048) = p4065; /*type */

	i8 v4066 = (i8)(intptr_t)(ws+3048);
	i8 v4067 = *(i8*)(intptr_t)v4066;
	i8 v4068 = (i8)+0;
	if (v4067==v4068) goto c02_03a0; else goto c02_03a1;

c02_03a0:;

	i1 v4069 = (i1)+1;
	i8 v4070 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v4070 = v4069;

	goto c02_039d;

c02_03a1:;

	i8 v4071 = (i8)(intptr_t)(ws+3048);
	i8 v4072 = *(i8*)(intptr_t)v4071;
	i1 v4073 = (i1)+2;

void f197_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4074;
	f197_IsTypeOfKind(&v4074, v4073, v4072);
	i1 v4075 = (i1)+0;
	if (v4074==v4075) goto c02_03a7; else goto c02_03a8;

c02_03a8:;

	i8 v4076 = (i8)(intptr_t)(ws+3048);
	i8 v4077 = *(i8*)(intptr_t)v4076;
	i1 v4078 = *(i1*)(intptr_t)v4077;
	i1 v4079 = (i1)+0;
	if (v4078==v4079) goto c02_03a7; else goto c02_03a6;

c02_03a6:;

	i1 v4080 = (i1)+1;
	i8 v4081 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v4081 = v4080;

	goto c02_039d;

c02_03a7:;

	i1 v4082 = (i1)+0;
	i8 v4083 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v4083 = v4082;

c02_039d:;

endsub:;
	*p4064 = *(i1*)(intptr_t)(ws+3056);
}

// IsScalar workspace at ws+3080 length ws+9
void f202_IsScalar(i1* p4084 /* result */, i8 p4085 /* type */) {
	*(i8*)(intptr_t)(ws+3080) = p4085; /*type */

	i8 v4086 = (i8)(intptr_t)(ws+3080);
	i8 v4087 = *(i8*)(intptr_t)v4086;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v4088;
	f199_IsPtr(&v4088, v4087);
	i1 v4089 = (i1)+0;
	if (v4088==v4089) goto c02_03b0; else goto c02_03ae;

c02_03b0:;

	i8 v4090 = (i8)(intptr_t)(ws+3080);
	i8 v4091 = *(i8*)(intptr_t)v4090;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v4092;
	f200_IsNum(&v4092, v4091);
	i1 v4093 = (i1)+0;
	if (v4092==v4093) goto c02_03af; else goto c02_03ae;

c02_03ae:;

	i1 v4094 = (i1)+1;
	i8 v4095 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v4095 = v4094;

	goto c02_03a9;

c02_03af:;

	i1 v4096 = (i1)+0;
	i8 v4097 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v4097 = v4096;

c02_03a9:;

endsub:;
	*p4084 = *(i1*)(intptr_t)(ws+3088);
}

// IsRecord workspace at ws+3024 length ws+9
void f203_IsRecord(i1* p4098 /* result */, i8 p4099 /* type */) {
	*(i8*)(intptr_t)(ws+3024) = p4099; /*type */

	i8 v4100 = (i8)(intptr_t)(ws+3024);
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i1 v4102 = (i1)+5;

void f197_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4103;
	f197_IsTypeOfKind(&v4103, v4102, v4101);
	i8 v4104 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v4104 = v4103;

endsub:;
	*p4098 = *(i1*)(intptr_t)(ws+3032);
}

// MakeLValue workspace at ws+3048 length ws+32
void f204_MakeLValue(i8* p4105 /* lvalue */, i8 p4106 /* address */) {
	*(i8*)(intptr_t)(ws+3048) = p4106; /*address */

	i1 v4107 = (i1)+0;
	i8 v4108 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4108 = v4107;

	i8 v4109 = (i8)(intptr_t)(ws+3048);
	i8 v4110 = *(i8*)(intptr_t)v4109;
	i8 v4111 = v4110+(+16);
	i8 v4112 = *(i8*)(intptr_t)v4111;
	i8 v4113 = *(i8*)(intptr_t)v4112;
	i8 v4114 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v4114 = v4113;

	i8 v4115 = (i8)(intptr_t)(ws+3072);
	i8 v4116 = *(i8*)(intptr_t)v4115;

void f202_IsScalar(i1* /* result */, i8 /* type */);
	i1 v4117;
	f202_IsScalar(&v4117, v4116);
	i1 v4118 = (i1)+0;
	if (v4117==v4118) goto c02_03b5; else goto c02_03b4;

c02_03b4:;

	i8 v4119 = (i8)(intptr_t)(ws+3072);
	i8 v4120 = *(i8*)(intptr_t)v4119;
	i8 v4121 = v4120+(+42);
	i2 v4122 = *(i2*)(intptr_t)v4121;
	i1 v4123 = v4122;
	i8 v4124 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4124 = v4123;

	goto c02_03b1;

c02_03b5:;

c02_03b1:;

	i8 v4125 = (i8)(intptr_t)(ws+3064);
	i1 v4126 = *(i1*)(intptr_t)v4125;
	i8 v4127 = (i8)(intptr_t)(ws+3048);
	i8 v4128 = *(i8*)(intptr_t)v4127;

void f133_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	i8 v4129;
	f133_MidLoad(&v4129, v4128, v4126);
	i8 v4130 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v4130 = v4129;

	i8 v4131 = (i8)(intptr_t)(ws+3072);
	i8 v4132 = *(i8*)(intptr_t)v4131;
	i8 v4133 = (i8)(intptr_t)(ws+3056);
	i8 v4134 = *(i8*)(intptr_t)v4133;
	i8 v4135 = v4134+(+16);
	*(i8*)(intptr_t)v4135 = v4132;

endsub:;
	*p4105 = *(i8*)(intptr_t)(ws+3056);
}
const i1 c02_s0046[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };

// UndoLValue workspace at ws+3048 length ws+17
void f205_UndoLValue(i8* p4136 /* address */, i8 p4137 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3048) = p4137; /*lvalue */

	i8 v4138 = (i8)(intptr_t)(ws+3048);
	i8 v4139 = *(i8*)(intptr_t)v4138;
	i8 v4140 = v4139+(+66);
	i1 v4141 = *(i1*)(intptr_t)v4140;
	i8 v4142 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4142 = v4141;

	i8 v4143 = (i8)(intptr_t)(ws+3064);
	i1 v4144 = *(i1*)(intptr_t)v4143;
	i1 v4145 = (i1)+43;
	if (v4144<v4145) goto c02_03bb; else goto c02_03bd;

c02_03bd:;

	i1 v4146 = (i1)+47;
	i8 v4147 = (i8)(intptr_t)(ws+3064);
	i1 v4148 = *(i1*)(intptr_t)v4147;
	if (v4146<v4148) goto c02_03bb; else goto c02_03bc;

c02_03bb:;

	i8 v4149 = (i8)(intptr_t)c02_s0046;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v4149);

	goto c02_03b6;

c02_03bc:;

c02_03b6:;

	i8 v4150 = (i8)(intptr_t)(ws+3048);
	i8 v4151 = *(i8*)(intptr_t)v4150;
	i8 v4152 = v4151+(+24);
	i8 v4153 = *(i8*)(intptr_t)v4152;
	i8 v4154 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v4154 = v4153;

	i8 v4155 = (i8)+0;
	i8 v4156 = (i8)(intptr_t)(ws+3048);
	i8 v4157 = *(i8*)(intptr_t)v4156;
	i8 v4158 = v4157+(+24);
	*(i8*)(intptr_t)v4158 = v4155;

	i8 v4159 = (i8)(intptr_t)(ws+3048);
	i8 v4160 = *(i8*)(intptr_t)v4159;

void f140_Discard(i8 /* node */);
	f140_Discard(v4160);

endsub:;
	*p4136 = *(i8*)(intptr_t)(ws+3056);
}

// AllocLabel workspace at ws+3064 length ws+2
void f206_AllocLabel(i2* p4163 /* label */) {

	i8 v4164 = (i8)(intptr_t)(ws+48);
	i2 v4165 = *(i2*)(intptr_t)v4164;
	i8 v4166 = (i8)(intptr_t)(ws+3064);
	*(i2*)(intptr_t)v4166 = v4165;

	i8 v4167 = (i8)(intptr_t)(ws+48);
	i2 v4168 = *(i2*)(intptr_t)v4167;
	i2 v4169 = v4168+(+1);
	i8 v4170 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4170 = v4169;

endsub:;
	*p4163 = *(i2*)(intptr_t)(ws+3064);
}

// AllocSubrId workspace at ws+3008 length ws+2
void f207_AllocSubrId(i2* p4171 /* id */) {

	i8 v4172 = (i8)(intptr_t)(ws+50);
	i2 v4173 = *(i2*)(intptr_t)v4172;
	i8 v4174 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v4174 = v4173;

	i8 v4175 = (i8)(intptr_t)(ws+50);
	i2 v4176 = *(i2*)(intptr_t)v4175;
	i2 v4177 = v4176+(+1);
	i8 v4178 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4178 = v4177;

endsub:;
	*p4171 = *(i2*)(intptr_t)(ws+3008);
}

// FindConflictingRegisters workspace at ws+3176 length ws+16
void f208_FindConflictingRegisters(i1* p4179 /* conflicting */, i1 p4180 /* inreg */) {
	*(i1*)(intptr_t)(ws+3176) = p4180; /*inreg */

	i1 v4181 = (i1)+0;
	i8 v4182 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4182 = v4181;

	i8 v4183 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4184 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4184 = v4183;

c02_03c0:;

	i8 v4185 = (i8)(intptr_t)(ws+3184);
	i8 v4186 = *(i8*)(intptr_t)v4185;
	i8 v4187 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4186==v4187) goto c02_03c3; else goto c02_03c2;

c02_03c2:;

	i8 v4188 = (i8)(intptr_t)(ws+3184);
	i8 v4189 = *(i8*)(intptr_t)v4188;
	i8 v4190 = v4189+(+8);
	i1 v4191 = *(i1*)(intptr_t)v4190;
	i8 v4192 = (i8)(intptr_t)(ws+3176);
	i1 v4193 = *(i1*)(intptr_t)v4192;
	i1 v4194 = v4191&v4193;
	i1 v4195 = (i1)+0;
	if (v4194==v4195) goto c02_03c8; else goto c02_03c7;

c02_03c7:;

	i8 v4196 = (i8)(intptr_t)(ws+3177);
	i1 v4197 = *(i1*)(intptr_t)v4196;
	i8 v4198 = (i8)(intptr_t)(ws+3184);
	i8 v4199 = *(i8*)(intptr_t)v4198;
	i8 v4200 = v4199+(+9);
	i1 v4201 = *(i1*)(intptr_t)v4200;
	i1 v4202 = v4197|v4201;
	i8 v4203 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4203 = v4202;

	goto c02_03c4;

c02_03c8:;

c02_03c4:;

	i8 v4204 = (i8)(intptr_t)(ws+3184);
	i8 v4205 = *(i8*)(intptr_t)v4204;
	i8 v4206 = v4205+(+16);
	i8 v4207 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4207 = v4206;

	goto c02_03c0;

c02_03c3:;

endsub:;
	*p4179 = *(i1*)(intptr_t)(ws+3177);
}

// FindCompatibleRegisters workspace at ws+3176 length ws+16
void f209_FindCompatibleRegisters(i1* p4208 /* compatible */, i1 p4209 /* inreg */) {
	*(i1*)(intptr_t)(ws+3176) = p4209; /*inreg */

	i1 v4210 = (i1)-1;
	i8 v4211 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4211 = v4210;

	i8 v4212 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4213 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4213 = v4212;

c02_03cb:;

	i8 v4214 = (i8)(intptr_t)(ws+3184);
	i8 v4215 = *(i8*)(intptr_t)v4214;
	i8 v4216 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4215==v4216) goto c02_03ce; else goto c02_03cd;

c02_03cd:;

	i8 v4217 = (i8)(intptr_t)(ws+3184);
	i8 v4218 = *(i8*)(intptr_t)v4217;
	i8 v4219 = v4218+(+8);
	i1 v4220 = *(i1*)(intptr_t)v4219;
	i8 v4221 = (i8)(intptr_t)(ws+3176);
	i1 v4222 = *(i1*)(intptr_t)v4221;
	i1 v4223 = v4220&v4222;
	i1 v4224 = (i1)+0;
	if (v4223==v4224) goto c02_03d3; else goto c02_03d2;

c02_03d2:;

	i8 v4225 = (i8)(intptr_t)(ws+3177);
	i1 v4226 = *(i1*)(intptr_t)v4225;
	i8 v4227 = (i8)(intptr_t)(ws+3184);
	i8 v4228 = *(i8*)(intptr_t)v4227;
	i8 v4229 = v4228+(+10);
	i1 v4230 = *(i1*)(intptr_t)v4229;
	i1 v4231 = v4226&v4230;
	i8 v4232 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4232 = v4231;

	goto c02_03cf;

c02_03d3:;

c02_03cf:;

	i8 v4233 = (i8)(intptr_t)(ws+3184);
	i8 v4234 = *(i8*)(intptr_t)v4233;
	i8 v4235 = v4234+(+16);
	i8 v4236 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4236 = v4235;

	goto c02_03cb;

c02_03ce:;

endsub:;
	*p4208 = *(i1*)(intptr_t)(ws+3177);
}

// FindFirst workspace at ws+3176 length ws+2
void f210_FindFirst(i1* p4237 /* outreg */, i1 p4238 /* inreg */) {
	*(i1*)(intptr_t)(ws+3176) = p4238; /*inreg */

	i1 v4239 = (i1)+1;
	i8 v4240 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4240 = v4239;

c02_03d6:;

	i8 v4241 = (i8)(intptr_t)(ws+3177);
	i1 v4242 = *(i1*)(intptr_t)v4241;
	i1 v4243 = (i1)+0;
	if (v4242==v4243) goto c02_03d9; else goto c02_03d8;

c02_03d8:;

	i8 v4244 = (i8)(intptr_t)(ws+3176);
	i1 v4245 = *(i1*)(intptr_t)v4244;
	i8 v4246 = (i8)(intptr_t)(ws+3177);
	i1 v4247 = *(i1*)(intptr_t)v4246;
	i1 v4248 = v4245&v4247;
	i1 v4249 = (i1)+0;
	if (v4248==v4249) goto c02_03de; else goto c02_03dd;

c02_03dd:;

	goto endsub;

c02_03de:;

c02_03da:;

	i8 v4250 = (i8)(intptr_t)(ws+3177);
	i1 v4251 = *(i1*)(intptr_t)v4250;
	i1 v4252 = (i1)+1;
	i1 v4253 = ((i1)v4251)<<v4252;
	i8 v4254 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4254 = v4253;

	goto c02_03d6;

c02_03d9:;

	i1 v4255 = (i1)+0;
	i8 v4256 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4256 = v4255;

endsub:;
	*p4237 = *(i1*)(intptr_t)(ws+3177);
}

// ArchAlignUp workspace at ws+3048 length ws+8
void f211_ArchAlignUp(i2* p4261 /* newvalue */, i1 p4262 /* alignment */, i2 p4263 /* value */) {
	*(i2*)(intptr_t)(ws+3048) = p4263; /*value */
	*(i1*)(intptr_t)(ws+3050) = p4262; /*alignment */

	i8 v4264 = (i8)(intptr_t)(ws+3050);
	i1 v4265 = *(i1*)(intptr_t)v4264;
	i1 v4266 = v4265+(-1);
	i2 v4267 = v4266;
	i8 v4268 = (i8)(intptr_t)(ws+3054);
	*(i2*)(intptr_t)v4268 = v4267;

	i8 v4269 = (i8)(intptr_t)(ws+3048);
	i2 v4270 = *(i2*)(intptr_t)v4269;
	i8 v4271 = (i8)(intptr_t)(ws+3054);
	i2 v4272 = *(i2*)(intptr_t)v4271;
	i2 v4273 = v4270+v4272;
	i8 v4274 = (i8)(intptr_t)(ws+3054);
	i2 v4275 = *(i2*)(intptr_t)v4274;
	i2 v4276 = ~v4275;
	i2 v4277 = v4273&v4276;
	i8 v4278 = (i8)(intptr_t)(ws+3052);
	*(i2*)(intptr_t)v4278 = v4277;

endsub:;
	*p4261 = *(i2*)(intptr_t)(ws+3052);
}
const i1 c02_s0047[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
const i1 c02_s0048[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
const i1 c02_s0049[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
const i1 c02_s004a[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
const i1 c02_s004b[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
const i1 c02_s004c[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
const i1 c02_s004d[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
const i1 c02_s004e[] = { 0x69,0x6e,0x74,0x38,0 };
const i1 c02_s004f[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };

// ArchInitTypes workspace at ws+2880 length ws+0
void f212_ArchInitTypes(void) {

	i1 v4279 = (i1)+8;
	i1 v4280 = (i1)+8;
	i1 v4281 = (i1)+0;
	i8 v4282 = (i8)(intptr_t)c02_s0047;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4283;
	f196_MakeNumberType(&v4283, v4282, v4281, v4280, v4279);
	i8 v4284 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v4284 = v4283;

	i1 v4285 = (i1)+8;
	i1 v4286 = (i1)+8;
	i1 v4287 = (i1)+1;
	i8 v4288 = (i8)(intptr_t)c02_s0048;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4289;
	f196_MakeNumberType(&v4289, v4288, v4287, v4286, v4285);
	i8 v4290 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v4290 = v4289;

	i1 v4291 = (i1)+4;
	i1 v4292 = (i1)+4;
	i1 v4293 = (i1)+0;
	i8 v4294 = (i8)(intptr_t)c02_s0049;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4295;
	f196_MakeNumberType(&v4295, v4294, v4293, v4292, v4291);
	i8 v4296 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v4296 = v4295;

	i1 v4297 = (i1)+4;
	i1 v4298 = (i1)+4;
	i1 v4299 = (i1)+1;
	i8 v4300 = (i8)(intptr_t)c02_s004a;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4301;
	f196_MakeNumberType(&v4301, v4300, v4299, v4298, v4297);
	i8 v4302 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v4302 = v4301;

	i1 v4303 = (i1)+2;
	i1 v4304 = (i1)+2;
	i1 v4305 = (i1)+0;
	i8 v4306 = (i8)(intptr_t)c02_s004b;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4307;
	f196_MakeNumberType(&v4307, v4306, v4305, v4304, v4303);
	i8 v4308 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v4308 = v4307;

	i1 v4309 = (i1)+2;
	i1 v4310 = (i1)+2;
	i1 v4311 = (i1)+1;
	i8 v4312 = (i8)(intptr_t)c02_s004c;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4313;
	f196_MakeNumberType(&v4313, v4312, v4311, v4310, v4309);
	i8 v4314 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v4314 = v4313;

	i1 v4315 = (i1)+1;
	i1 v4316 = (i1)+1;
	i1 v4317 = (i1)+0;
	i8 v4318 = (i8)(intptr_t)c02_s004d;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4319;
	f196_MakeNumberType(&v4319, v4318, v4317, v4316, v4315);
	i8 v4320 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v4320 = v4319;

	i1 v4321 = (i1)+1;
	i1 v4322 = (i1)+1;
	i1 v4323 = (i1)+1;
	i8 v4324 = (i8)(intptr_t)c02_s004e;

void f196_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4325;
	f196_MakeNumberType(&v4325, v4324, v4323, v4322, v4321);
	i8 v4326 = (i8)(intptr_t)(ws+1048);
	*(i8*)(intptr_t)v4326 = v4325;

	i8 v4327 = (i8)(intptr_t)(ws+992);
	i8 v4328 = *(i8*)(intptr_t)v4327;
	i8 v4329 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v4329 = v4328;

	i8 v4330 = (i8)(intptr_t)c02_s004f;
	i8 v4331 = (i8)(intptr_t)(ws+1056);
	i8 v4332 = *(i8*)(intptr_t)v4331;

void f194_AddAliasString(i8 /* real */, i8 /* name */);
	f194_AddAliasString(v4332, v4330);

endsub:;
}

// ArchGuessIntType workspace at ws+3032 length ws+16
void f213_ArchGuessIntType(i8* p4333 /* symbol */, i4 p4334 /* max */, i4 p4335 /* min */) {
	*(i4*)(intptr_t)(ws+3032) = p4335; /*min */
	*(i4*)(intptr_t)(ws+3036) = p4334; /*max */

	i8 v4336 = (i8)(intptr_t)(ws+3032);
	i4 v4337 = *(i4*)(intptr_t)v4336;
	i4 v4338 = (i4)+0;
	if ((s4)v4337<(s4)v4338) goto c02_03e5; else goto c02_03e6;

c02_03e6:;

	i4 v4339 = (i4)+255;
	i8 v4340 = (i8)(intptr_t)(ws+3036);
	i4 v4341 = *(i4*)(intptr_t)v4340;
	if ((s4)v4339<(s4)v4341) goto c02_03e5; else goto c02_03e4;

c02_03e4:;

	i8 v4342 = (i8)(intptr_t)(ws+1040);
	i8 v4343 = *(i8*)(intptr_t)v4342;
	i8 v4344 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4344 = v4343;

	goto c02_03df;

c02_03e5:;

	i8 v4345 = (i8)(intptr_t)(ws+3032);
	i4 v4346 = *(i4*)(intptr_t)v4345;
	i4 v4347 = (i4)-128;
	if ((s4)v4346<(s4)v4347) goto c02_03ec; else goto c02_03ed;

c02_03ed:;

	i4 v4348 = (i4)+127;
	i8 v4349 = (i8)(intptr_t)(ws+3036);
	i4 v4350 = *(i4*)(intptr_t)v4349;
	if ((s4)v4348<(s4)v4350) goto c02_03ec; else goto c02_03eb;

c02_03eb:;

	i8 v4351 = (i8)(intptr_t)(ws+1048);
	i8 v4352 = *(i8*)(intptr_t)v4351;
	i8 v4353 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4353 = v4352;

	goto c02_03df;

c02_03ec:;

	i8 v4354 = (i8)(intptr_t)(ws+3032);
	i4 v4355 = *(i4*)(intptr_t)v4354;
	i4 v4356 = (i4)+0;
	if ((s4)v4355<(s4)v4356) goto c02_03f3; else goto c02_03f4;

c02_03f4:;

	i4 v4357 = (i4)+65535;
	i8 v4358 = (i8)(intptr_t)(ws+3036);
	i4 v4359 = *(i4*)(intptr_t)v4358;
	if ((s4)v4357<(s4)v4359) goto c02_03f3; else goto c02_03f2;

c02_03f2:;

	i8 v4360 = (i8)(intptr_t)(ws+1024);
	i8 v4361 = *(i8*)(intptr_t)v4360;
	i8 v4362 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4362 = v4361;

	goto c02_03df;

c02_03f3:;

	i8 v4363 = (i8)(intptr_t)(ws+3032);
	i4 v4364 = *(i4*)(intptr_t)v4363;
	i4 v4365 = (i4)-32768;
	if ((s4)v4364<(s4)v4365) goto c02_03fa; else goto c02_03fb;

c02_03fb:;

	i4 v4366 = (i4)+32767;
	i8 v4367 = (i8)(intptr_t)(ws+3036);
	i4 v4368 = *(i4*)(intptr_t)v4367;
	if ((s4)v4366<(s4)v4368) goto c02_03fa; else goto c02_03f9;

c02_03f9:;

	i8 v4369 = (i8)(intptr_t)(ws+1032);
	i8 v4370 = *(i8*)(intptr_t)v4369;
	i8 v4371 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4371 = v4370;

	goto c02_03df;

c02_03fa:;

	i8 v4372 = (i8)(intptr_t)(ws+3032);
	i4 v4373 = *(i4*)(intptr_t)v4372;
	i4 v4374 = (i4)+0;
	if ((s4)v4373<(s4)v4374) goto c02_03ff; else goto c02_03fe;

c02_03fe:;

	i8 v4375 = (i8)(intptr_t)(ws+1008);
	i8 v4376 = *(i8*)(intptr_t)v4375;
	i8 v4377 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4377 = v4376;

	goto c02_03df;

c02_03ff:;

	i8 v4378 = (i8)(intptr_t)(ws+1016);
	i8 v4379 = *(i8*)(intptr_t)v4378;
	i8 v4380 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4380 = v4379;

c02_03df:;

endsub:;
	*p4333 = *(i8*)(intptr_t)(ws+3040);
}

// ArchInitVariable workspace at ws+3024 length ws+18
void f214_ArchInitVariable(i8 p4381 /* symbol */) {
	*(i8*)(intptr_t)(ws+3024) = p4381; /*symbol */

	i8 v4382 = (i8)(intptr_t)(ws+3024);
	i8 v4383 = *(i8*)(intptr_t)v4382;
	i8 v4384 = v4383+(+8);
	i8 v4385 = *(i8*)(intptr_t)v4384;
	i8 v4386 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v4386 = v4385;

	i8 v4387 = (i8)(intptr_t)(ws+3032);
	i8 v4388 = *(i8*)(intptr_t)v4387;
	i8 v4389 = v4388+(+58);
	i2 v4390 = *(i2*)(intptr_t)v4389;
	i8 v4391 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v4391 = v4390;

	i8 v4392 = (i8)(intptr_t)(ws+3040);
	i2 v4393 = *(i2*)(intptr_t)v4392;
	i8 v4394 = (i8)(intptr_t)(ws+3024);
	i8 v4395 = *(i8*)(intptr_t)v4394;
	i8 v4396 = *(i8*)(intptr_t)v4395;
	i8 v4397 = v4396+(+41);
	i1 v4398 = *(i1*)(intptr_t)v4397;

void f211_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v4399;
	f211_ArchAlignUp(&v4399, v4398, v4393);
	i8 v4400 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v4400 = v4399;

	i8 v4401 = (i8)(intptr_t)(ws+3040);
	i2 v4402 = *(i2*)(intptr_t)v4401;
	i8 v4403 = (i8)(intptr_t)(ws+3024);
	i8 v4404 = *(i8*)(intptr_t)v4403;
	i8 v4405 = v4404+(+32);
	*(i2*)(intptr_t)v4405 = v4402;

	i8 v4406 = (i8)(intptr_t)(ws+3040);
	i2 v4407 = *(i2*)(intptr_t)v4406;
	i8 v4408 = (i8)(intptr_t)(ws+3024);
	i8 v4409 = *(i8*)(intptr_t)v4408;
	i8 v4410 = *(i8*)(intptr_t)v4409;
	i8 v4411 = v4410+(+42);
	i2 v4412 = *(i2*)(intptr_t)v4411;
	i2 v4413 = v4407+v4412;
	i8 v4414 = (i8)(intptr_t)(ws+3032);
	i8 v4415 = *(i8*)(intptr_t)v4414;
	i8 v4416 = v4415+(+58);
	*(i2*)(intptr_t)v4416 = v4413;

endsub:;
}

// ArchInitMember workspace at ws+3000 length ws+18
void f215_ArchInitMember(i2 p4417 /* position */, i8 p4418 /* member */, i8 p4419 /* containing */) {
	*(i8*)(intptr_t)(ws+3000) = p4419; /*containing */
	*(i8*)(intptr_t)(ws+3008) = p4418; /*member */
	*(i2*)(intptr_t)(ws+3016) = p4417; /*position */

	i8 v4420 = (i8)(intptr_t)(ws+3016);
	i2 v4421 = *(i2*)(intptr_t)v4420;
	i8 v4422 = (i8)(intptr_t)(ws+3008);
	i8 v4423 = *(i8*)(intptr_t)v4422;
	i8 v4424 = *(i8*)(intptr_t)v4423;
	i8 v4425 = v4424+(+41);
	i1 v4426 = *(i1*)(intptr_t)v4425;

void f211_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v4427;
	f211_ArchAlignUp(&v4427, v4426, v4421);
	i8 v4428 = (i8)(intptr_t)(ws+3016);
	*(i2*)(intptr_t)v4428 = v4427;

	i8 v4429 = (i8)(intptr_t)(ws+3016);
	i2 v4430 = *(i2*)(intptr_t)v4429;
	i8 v4431 = (i8)(intptr_t)(ws+3008);
	i8 v4432 = *(i8*)(intptr_t)v4431;
	i8 v4433 = v4432+(+32);
	*(i2*)(intptr_t)v4433 = v4430;

	i8 v4434 = (i8)(intptr_t)(ws+3016);
	i2 v4435 = *(i2*)(intptr_t)v4434;
	i8 v4436 = (i8)(intptr_t)(ws+3008);
	i8 v4437 = *(i8*)(intptr_t)v4436;
	i8 v4438 = *(i8*)(intptr_t)v4437;
	i8 v4439 = v4438+(+42);
	i2 v4440 = *(i2*)(intptr_t)v4439;
	i2 v4441 = v4435+v4440;
	i8 v4442 = (i8)(intptr_t)(ws+3016);
	*(i2*)(intptr_t)v4442 = v4441;

	i8 v4443 = (i8)(intptr_t)(ws+3000);
	i8 v4444 = *(i8*)(intptr_t)v4443;
	i8 v4445 = v4444+(+42);
	i2 v4446 = *(i2*)(intptr_t)v4445;
	i8 v4447 = (i8)(intptr_t)(ws+3016);
	i2 v4448 = *(i2*)(intptr_t)v4447;
	if (v4446<v4448) goto c02_0403; else goto c02_0404;

c02_0403:;

	i8 v4449 = (i8)(intptr_t)(ws+3016);
	i2 v4450 = *(i2*)(intptr_t)v4449;
	i8 v4451 = (i8)(intptr_t)(ws+3000);
	i8 v4452 = *(i8*)(intptr_t)v4451;
	i8 v4453 = v4452+(+42);
	*(i2*)(intptr_t)v4453 = v4450;

	goto c02_0400;

c02_0404:;

c02_0400:;

endsub:;
}
const i1 c02_s0050[] = { 0x28,0x28,0x69,0x31,0x2a,0x29,0 };
const i1 c02_s0051[] = { 0x29,0 };

// E_symref workspace at ws+3272 length ws+10
void f216_E_symref(i2 p4454 /* off */, i8 p4455 /* sym */) {
	*(i8*)(intptr_t)(ws+3272) = p4455; /*sym */
	*(i2*)(intptr_t)(ws+3280) = p4454; /*off */

	i8 v4456 = (i8)(intptr_t)(ws+3272);
	i8 v4457 = *(i8*)(intptr_t)v4456;
	i8 v4458 = v4457+(+24);
	i8 v4459 = *(i8*)(intptr_t)v4458;
	i8 v4460 = (i8)+0;
	if (v4459==v4460) goto c02_0409; else goto c02_0408;

c02_0408:;

	i8 v4461 = (i8)(intptr_t)c02_s0050;

void f158_E(i8 /* text */);
	f158_E(v4461);

	i8 v4462 = (i8)(intptr_t)(ws+3272);
	i8 v4463 = *(i8*)(intptr_t)v4462;
	i8 v4464 = v4463+(+24);
	i8 v4465 = *(i8*)(intptr_t)v4464;

void f158_E(i8 /* text */);
	f158_E(v4465);

	i8 v4466 = (i8)(intptr_t)(ws+3280);
	i2 v4467 = *(i2*)(intptr_t)v4466;

void f163_E_i16(i2 /* value */);
	f163_E_i16(v4467);

	i8 v4468 = (i8)(intptr_t)c02_s0051;

void f158_E(i8 /* text */);
	f158_E(v4468);

	goto c02_0405;

c02_0409:;

	i1 v4469 = (i1)+2;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v4469);

	i8 v4470 = (i8)(intptr_t)(ws+3272);
	i8 v4471 = *(i8*)(intptr_t)v4470;
	i8 v4472 = v4471+(+8);
	i8 v4473 = *(i8*)(intptr_t)v4472;
	i8 v4474 = v4473+(+56);
	i2 v4475 = *(i2*)(intptr_t)v4474;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v4475);

	i1 v4476 = (i1)+0;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v4476);

	i8 v4477 = (i8)(intptr_t)(ws+3272);
	i8 v4478 = *(i8*)(intptr_t)v4477;
	i8 v4479 = v4478+(+32);
	i2 v4480 = *(i2*)(intptr_t)v4479;
	i8 v4481 = (i8)(intptr_t)(ws+3280);
	i2 v4482 = *(i2*)(intptr_t)v4481;
	i2 v4483 = v4480+v4482;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v4483);

c02_0405:;

endsub:;
}

// ArchEndInstruction workspace at ws+3160 length ws+0
void f217_ArchEndInstruction(void) {

endsub:;
}

// ArchEndGroup workspace at ws+3152 length ws+0
void f218_ArchEndGroup(void) {


void f155_E_nl(void);
	f155_E_nl();

endsub:;
}
const i1 c02_s0052[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// PushVid workspace at ws+3288 length ws+2
void f219_PushVid(i2 p4484 /* vid */) {
	*(i2*)(intptr_t)(ws+3288) = p4484; /*vid */

	i8 v4485 = (i8)(intptr_t)(ws+1192);
	i1 v4486 = *(i1*)(intptr_t)v4485;
	i1 v4487 = (i1)+64;
	if (v4486==v4487) goto c02_040d; else goto c02_040e;

c02_040d:;

	i8 v4488 = (i8)(intptr_t)c02_s0052;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v4488);

	goto c02_040a;

c02_040e:;

c02_040a:;

	i8 v4489 = (i8)(intptr_t)(ws+3288);
	i2 v4490 = *(i2*)(intptr_t)v4489;
	i8 v4491 = (i8)(intptr_t)(ws+1064);
	i8 v4492 = (i8)(intptr_t)(ws+1192);
	i1 v4493 = *(i1*)(intptr_t)v4492;
	i8 v4494 = v4493;
	i1 v4495 = (i1)+1;
	i8 v4496 = ((i8)v4494)<<v4495;
	i8 v4497 = v4491+v4496;
	*(i2*)(intptr_t)v4497 = v4490;

	i8 v4498 = (i8)(intptr_t)(ws+1192);
	i1 v4499 = *(i1*)(intptr_t)v4498;
	i1 v4500 = v4499+(+1);
	i8 v4501 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v4501 = v4500;

endsub:;
}

// Push workspace at ws+3280 length ws+2
void f220_Push(i2* p4502 /* vid */) {

	i8 v4503 = (i8)(intptr_t)(ws+1194);
	i2 v4504 = *(i2*)(intptr_t)v4503;
	i8 v4505 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4505 = v4504;

	i8 v4506 = (i8)(intptr_t)(ws+1194);
	i2 v4507 = *(i2*)(intptr_t)v4506;
	i2 v4508 = v4507+(+1);
	i8 v4509 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4509 = v4508;

	i8 v4510 = (i8)(intptr_t)(ws+3280);
	i2 v4511 = *(i2*)(intptr_t)v4510;

void f219_PushVid(i2 /* vid */);
	f219_PushVid(v4511);

endsub:;
	*p4502 = *(i2*)(intptr_t)(ws+3280);
}
const i1 c02_s0053[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// CheckVarstackUnderflow workspace at ws+3288 length ws+0
void f221_CheckVarstackUnderflow(void) {

	i8 v4512 = (i8)(intptr_t)(ws+1192);
	i1 v4513 = *(i1*)(intptr_t)v4512;
	i1 v4514 = (i1)+0;
	if (v4513==v4514) goto c02_0412; else goto c02_0413;

c02_0412:;

	i8 v4515 = (i8)(intptr_t)c02_s0053;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v4515);

	goto c02_040f;

c02_0413:;

c02_040f:;

endsub:;
}

// Pop workspace at ws+3280 length ws+2
void f222_Pop(i2* p4516 /* vid */) {


void f221_CheckVarstackUnderflow(void);
	f221_CheckVarstackUnderflow();

	i8 v4517 = (i8)(intptr_t)(ws+1192);
	i1 v4518 = *(i1*)(intptr_t)v4517;
	i1 v4519 = v4518+(-1);
	i8 v4520 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v4520 = v4519;

	i8 v4521 = (i8)(intptr_t)(ws+1064);
	i8 v4522 = (i8)(intptr_t)(ws+1192);
	i1 v4523 = *(i1*)(intptr_t)v4522;
	i8 v4524 = v4523;
	i1 v4525 = (i1)+1;
	i8 v4526 = ((i8)v4524)<<v4525;
	i8 v4527 = v4521+v4526;
	i2 v4528 = *(i2*)(intptr_t)v4527;
	i8 v4529 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4529 = v4528;

endsub:;
	*p4516 = *(i2*)(intptr_t)(ws+3280);
}

// ArchEmitMove workspace at ws+3192 length ws+2
void f224_ArchEmitMove(i1 p4541 /* dest */, i1 p4542 /* src */) {
	*(i1*)(intptr_t)(ws+3192) = p4542; /*src */
	*(i1*)(intptr_t)(ws+3193) = p4541; /*dest */

endsub:;
}
const i1 c02_s0054[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
const i1 c02_s0055[] = { 0x28,0 };
const i1 c02_s0056[] = { 0x2c,0x20,0 };

// comma workspace at ws+3280 length ws+0
void f226_comma(void) {

	i8 v4550 = (i8)(intptr_t)(ws+3256);
	i1 v4551 = *(i1*)(intptr_t)v4550;
	i1 v4552 = (i1)+0;
	if (v4551==v4552) goto c02_0417; else goto c02_0418;

c02_0417:;

	i8 v4553 = (i8)(intptr_t)c02_s0056;

void f158_E(i8 /* text */);
	f158_E(v4553);

	goto c02_0414;

c02_0418:;

c02_0414:;

	i1 v4554 = (i1)+0;
	i8 v4555 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v4555 = v4554;

endsub:;
}
const i1 c02_s0057[] = { 0x69,0 };
const i1 c02_s0058[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
const i1 c02_s0059[] = { 0x20,0x2a,0x2f,0 };
const i1 c02_s005a[] = { 0x69,0 };
const i1 c02_s005b[] = { 0x20,0x2f,0x2a,0x20,0 };
const i1 c02_s005c[] = { 0x20,0x2a,0x2f,0 };
const i1 c02_s005d[] = { 0x76,0x6f,0x69,0x64,0 };
const i1 c02_s005e[] = { 0x29,0x3b,0x0a,0 };
const i1 c02_s005f[] = { 0x09,0x69,0 };
const i1 c02_s0060[] = { 0x20,0x76,0 };
const i1 c02_s0061[] = { 0x3b,0x0a,0 };
const i1 c02_s0062[] = { 0x09,0 };
const i1 c02_s0063[] = { 0x28,0 };
const i1 c02_s0064[] = { 0x26,0x76,0 };
const i1 c02_s0065[] = { 0x76,0 };
const i1 c02_s0066[] = { 0x29,0x3b,0x0a,0 };

// Call workspace at ws+3248 length ws+28
void f225_Call(i8 p4543 /* subr */) {
	*(i8*)(intptr_t)(ws+3248) = p4543; /*subr */

	i8 v4544 = (i8)(intptr_t)c02_s0054;

void f158_E(i8 /* text */);
	f158_E(v4544);

	i8 v4545 = (i8)(intptr_t)(ws+3248);
	i8 v4546 = *(i8*)(intptr_t)v4545;

void f170_E_subref(i8 /* subr */);
	f170_E_subref(v4546);

	i8 v4547 = (i8)(intptr_t)c02_s0055;

void f158_E(i8 /* text */);
	f158_E(v4547);

	i1 v4548 = (i1)+1;
	i8 v4549 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v4549 = v4548;


	i1 v4556 = (i1)+0;
	i8 v4557 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4557 = v4556;

c02_041b:;

	i8 v4558 = (i8)(intptr_t)(ws+3257);
	i1 v4559 = *(i1*)(intptr_t)v4558;
	i8 v4560 = (i8)(intptr_t)(ws+3248);
	i8 v4561 = *(i8*)(intptr_t)v4560;
	i8 v4562 = v4561+(+89);
	i1 v4563 = *(i1*)(intptr_t)v4562;
	if (v4559==v4563) goto c02_041e; else goto c02_041d;

c02_041d:;

	i8 v4564 = (i8)(intptr_t)(ws+3248);
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = (i8)(intptr_t)(ws+3257);
	i1 v4567 = *(i1*)(intptr_t)v4566;

void f81_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4568;
	f81_GetOutputParameter(&v4568, v4567, v4565);
	i8 v4569 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v4569 = v4568;


void f226_comma(void);
	f226_comma();

	i8 v4570 = (i8)(intptr_t)c02_s0057;

void f158_E(i8 /* text */);
	f158_E(v4570);

	i8 v4571 = (i8)(intptr_t)(ws+3264);
	i8 v4572 = *(i8*)(intptr_t)v4571;
	i8 v4573 = *(i8*)(intptr_t)v4572;
	i8 v4574 = v4573+(+42);
	i2 v4575 = *(i2*)(intptr_t)v4574;
	i1 v4576 = v4575;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4576);

	i8 v4577 = (i8)(intptr_t)c02_s0058;

void f158_E(i8 /* text */);
	f158_E(v4577);

	i8 v4578 = (i8)(intptr_t)(ws+3264);
	i8 v4579 = *(i8*)(intptr_t)v4578;
	i8 v4580 = v4579+(+48);
	i8 v4581 = *(i8*)(intptr_t)v4580;

void f158_E(i8 /* text */);
	f158_E(v4581);

	i8 v4582 = (i8)(intptr_t)c02_s0059;

void f158_E(i8 /* text */);
	f158_E(v4582);

	i8 v4583 = (i8)(intptr_t)(ws+3257);
	i1 v4584 = *(i1*)(intptr_t)v4583;
	i1 v4585 = v4584+(+1);
	i8 v4586 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4586 = v4585;

	goto c02_041b;

c02_041e:;

	i8 v4587 = (i8)(intptr_t)(ws+3248);
	i8 v4588 = *(i8*)(intptr_t)v4587;
	i8 v4589 = v4588+(+88);
	i1 v4590 = *(i1*)(intptr_t)v4589;
	i8 v4591 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4591 = v4590;

c02_0421:;

	i8 v4592 = (i8)(intptr_t)(ws+3257);
	i1 v4593 = *(i1*)(intptr_t)v4592;
	i1 v4594 = (i1)+0;
	if (v4593==v4594) goto c02_0424; else goto c02_0423;

c02_0423:;

	i8 v4595 = (i8)(intptr_t)(ws+3257);
	i1 v4596 = *(i1*)(intptr_t)v4595;
	i1 v4597 = v4596+(-1);
	i8 v4598 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4598 = v4597;

	i8 v4599 = (i8)(intptr_t)(ws+3248);
	i8 v4600 = *(i8*)(intptr_t)v4599;
	i8 v4601 = (i8)(intptr_t)(ws+3257);
	i1 v4602 = *(i1*)(intptr_t)v4601;

void f80_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4603;
	f80_GetInputParameter(&v4603, v4602, v4600);
	i8 v4604 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v4604 = v4603;


void f226_comma(void);
	f226_comma();

	i8 v4605 = (i8)(intptr_t)c02_s005a;

void f158_E(i8 /* text */);
	f158_E(v4605);

	i8 v4606 = (i8)(intptr_t)(ws+3264);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i8 v4608 = *(i8*)(intptr_t)v4607;
	i8 v4609 = v4608+(+42);
	i2 v4610 = *(i2*)(intptr_t)v4609;
	i1 v4611 = v4610;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4611);

	i8 v4612 = (i8)(intptr_t)c02_s005b;

void f158_E(i8 /* text */);
	f158_E(v4612);

	i8 v4613 = (i8)(intptr_t)(ws+3264);
	i8 v4614 = *(i8*)(intptr_t)v4613;
	i8 v4615 = v4614+(+48);
	i8 v4616 = *(i8*)(intptr_t)v4615;

void f158_E(i8 /* text */);
	f158_E(v4616);

	i8 v4617 = (i8)(intptr_t)c02_s005c;

void f158_E(i8 /* text */);
	f158_E(v4617);

	goto c02_0421;

c02_0424:;

	i8 v4618 = (i8)(intptr_t)(ws+3248);
	i8 v4619 = *(i8*)(intptr_t)v4618;
	i8 v4620 = v4619+(+88);
	i1 v4621 = *(i1*)(intptr_t)v4620;
	i8 v4622 = (i8)(intptr_t)(ws+3248);
	i8 v4623 = *(i8*)(intptr_t)v4622;
	i8 v4624 = v4623+(+89);
	i1 v4625 = *(i1*)(intptr_t)v4624;
	i1 v4626 = v4621+v4625;
	i1 v4627 = (i1)+0;
	if (v4626==v4627) goto c02_0428; else goto c02_0429;

c02_0428:;

	i8 v4628 = (i8)(intptr_t)c02_s005d;

void f158_E(i8 /* text */);
	f158_E(v4628);

	goto c02_0425;

c02_0429:;

c02_0425:;

	i8 v4629 = (i8)(intptr_t)c02_s005e;

void f158_E(i8 /* text */);
	f158_E(v4629);

	i8 v4630 = (i8)(intptr_t)(ws+1194);
	i2 v4631 = *(i2*)(intptr_t)v4630;
	i8 v4632 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4632 = v4631;

	i8 v4633 = (i8)(intptr_t)(ws+1194);
	i2 v4634 = *(i2*)(intptr_t)v4633;
	i8 v4635 = (i8)(intptr_t)(ws+3248);
	i8 v4636 = *(i8*)(intptr_t)v4635;
	i8 v4637 = v4636+(+89);
	i1 v4638 = *(i1*)(intptr_t)v4637;
	i2 v4639 = v4638;
	i2 v4640 = v4634+v4639;
	i8 v4641 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4641 = v4640;

	i1 v4642 = (i1)+0;
	i8 v4643 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4643 = v4642;

c02_042c:;

	i8 v4644 = (i8)(intptr_t)(ws+3257);
	i1 v4645 = *(i1*)(intptr_t)v4644;
	i8 v4646 = (i8)(intptr_t)(ws+3248);
	i8 v4647 = *(i8*)(intptr_t)v4646;
	i8 v4648 = v4647+(+89);
	i1 v4649 = *(i1*)(intptr_t)v4648;
	if (v4645==v4649) goto c02_042f; else goto c02_042e;

c02_042e:;

	i8 v4650 = (i8)(intptr_t)(ws+3248);
	i8 v4651 = *(i8*)(intptr_t)v4650;
	i8 v4652 = (i8)(intptr_t)(ws+3257);
	i1 v4653 = *(i1*)(intptr_t)v4652;

void f81_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4654;
	f81_GetOutputParameter(&v4654, v4653, v4651);
	i8 v4655 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v4655 = v4654;

	i8 v4656 = (i8)(intptr_t)c02_s005f;

void f158_E(i8 /* text */);
	f158_E(v4656);

	i8 v4657 = (i8)(intptr_t)(ws+3264);
	i8 v4658 = *(i8*)(intptr_t)v4657;
	i8 v4659 = *(i8*)(intptr_t)v4658;
	i8 v4660 = v4659+(+42);
	i2 v4661 = *(i2*)(intptr_t)v4660;
	i1 v4662 = v4661;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4662);

	i8 v4663 = (i8)(intptr_t)c02_s0060;

void f158_E(i8 /* text */);
	f158_E(v4663);

	i8 v4664 = (i8)(intptr_t)(ws+3272);
	i2 v4665 = *(i2*)(intptr_t)v4664;
	i8 v4666 = (i8)(intptr_t)(ws+3257);
	i1 v4667 = *(i1*)(intptr_t)v4666;
	i2 v4668 = v4667;
	i2 v4669 = v4665+v4668;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4669);

	i8 v4670 = (i8)(intptr_t)c02_s0061;

void f158_E(i8 /* text */);
	f158_E(v4670);

	i8 v4671 = (i8)(intptr_t)(ws+3257);
	i1 v4672 = *(i1*)(intptr_t)v4671;
	i1 v4673 = v4672+(+1);
	i8 v4674 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4674 = v4673;

	goto c02_042c;

c02_042f:;

	i8 v4675 = (i8)(intptr_t)c02_s0062;

void f158_E(i8 /* text */);
	f158_E(v4675);

	i8 v4676 = (i8)(intptr_t)(ws+3248);
	i8 v4677 = *(i8*)(intptr_t)v4676;

void f170_E_subref(i8 /* subr */);
	f170_E_subref(v4677);

	i8 v4678 = (i8)(intptr_t)c02_s0063;

void f158_E(i8 /* text */);
	f158_E(v4678);

	i1 v4679 = (i1)+1;
	i8 v4680 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v4680 = v4679;

	i1 v4681 = (i1)+0;
	i8 v4682 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4682 = v4681;

c02_0432:;

	i8 v4683 = (i8)(intptr_t)(ws+3257);
	i1 v4684 = *(i1*)(intptr_t)v4683;
	i8 v4685 = (i8)(intptr_t)(ws+3248);
	i8 v4686 = *(i8*)(intptr_t)v4685;
	i8 v4687 = v4686+(+89);
	i1 v4688 = *(i1*)(intptr_t)v4687;
	if (v4684==v4688) goto c02_0435; else goto c02_0434;

c02_0434:;

	i8 v4689 = (i8)(intptr_t)(ws+3248);
	i8 v4690 = *(i8*)(intptr_t)v4689;
	i8 v4691 = (i8)(intptr_t)(ws+3257);
	i1 v4692 = *(i1*)(intptr_t)v4691;

void f81_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4693;
	f81_GetOutputParameter(&v4693, v4692, v4690);
	i8 v4694 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v4694 = v4693;


void f226_comma(void);
	f226_comma();

	i8 v4695 = (i8)(intptr_t)c02_s0064;

void f158_E(i8 /* text */);
	f158_E(v4695);

	i8 v4696 = (i8)(intptr_t)(ws+3272);
	i2 v4697 = *(i2*)(intptr_t)v4696;
	i8 v4698 = (i8)(intptr_t)(ws+3257);
	i1 v4699 = *(i1*)(intptr_t)v4698;
	i2 v4700 = v4699;
	i2 v4701 = v4697+v4700;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4701);

	i8 v4702 = (i8)(intptr_t)(ws+3257);
	i1 v4703 = *(i1*)(intptr_t)v4702;
	i1 v4704 = v4703+(+1);
	i8 v4705 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4705 = v4704;

	goto c02_0432;

c02_0435:;

	i1 v4706 = (i1)+0;
	i8 v4707 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4707 = v4706;

c02_0438:;

	i8 v4708 = (i8)(intptr_t)(ws+3257);
	i1 v4709 = *(i1*)(intptr_t)v4708;
	i8 v4710 = (i8)(intptr_t)(ws+3248);
	i8 v4711 = *(i8*)(intptr_t)v4710;
	i8 v4712 = v4711+(+88);
	i1 v4713 = *(i1*)(intptr_t)v4712;
	if (v4709==v4713) goto c02_043b; else goto c02_043a;

c02_043a:;


void f222_Pop(i2* /* vid */);
	i2 v4714;
	f222_Pop(&v4714);
	i8 v4715 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4715 = v4714;


void f226_comma(void);
	f226_comma();

	i8 v4716 = (i8)(intptr_t)c02_s0065;

void f158_E(i8 /* text */);
	f158_E(v4716);

	i8 v4717 = (i8)(intptr_t)(ws+3274);
	i2 v4718 = *(i2*)(intptr_t)v4717;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4718);

	i8 v4719 = (i8)(intptr_t)(ws+3257);
	i1 v4720 = *(i1*)(intptr_t)v4719;
	i1 v4721 = v4720+(+1);
	i8 v4722 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4722 = v4721;

	goto c02_0438;

c02_043b:;

	i8 v4723 = (i8)(intptr_t)c02_s0066;

void f158_E(i8 /* text */);
	f158_E(v4723);

	i1 v4724 = (i1)+0;
	i8 v4725 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4725 = v4724;

c02_043e:;

	i8 v4726 = (i8)(intptr_t)(ws+3257);
	i1 v4727 = *(i1*)(intptr_t)v4726;
	i8 v4728 = (i8)(intptr_t)(ws+3248);
	i8 v4729 = *(i8*)(intptr_t)v4728;
	i8 v4730 = v4729+(+89);
	i1 v4731 = *(i1*)(intptr_t)v4730;
	if (v4727==v4731) goto c02_0441; else goto c02_0440;

c02_0440:;

	i8 v4732 = (i8)(intptr_t)(ws+3272);
	i2 v4733 = *(i2*)(intptr_t)v4732;
	i8 v4734 = (i8)(intptr_t)(ws+3257);
	i1 v4735 = *(i1*)(intptr_t)v4734;
	i2 v4736 = v4735;
	i2 v4737 = v4733+v4736;
	i8 v4738 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4738 = v4737;

	i8 v4739 = (i8)(intptr_t)(ws+3274);
	i2 v4740 = *(i2*)(intptr_t)v4739;

void f219_PushVid(i2 /* vid */);
	f219_PushVid(v4740);

	i8 v4741 = (i8)(intptr_t)(ws+3257);
	i1 v4742 = *(i1*)(intptr_t)v4741;
	i1 v4743 = v4742+(+1);
	i8 v4744 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v4744 = v4743;

	goto c02_043e;

c02_0441:;

endsub:;
}
const i1 c02_s0067[] = { 0x09,0x69,0 };
const i1 c02_s0068[] = { 0x20,0x76,0 };
const i1 c02_s0069[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
const i1 c02_s006a[] = { 0x29,0 };
const i1 c02_s006b[] = { 0x3b,0x0a,0 };

// LoadConstant workspace at ws+3248 length ws+10
void f227_LoadConstant(i4 p4745 /* value */, i1 p4746 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4746; /*width */
	*(i4*)(intptr_t)(ws+3252) = p4745; /*value */


void f220_Push(i2* /* vid */);
	i2 v4747;
	f220_Push(&v4747);
	i8 v4748 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v4748 = v4747;

	i8 v4749 = (i8)(intptr_t)c02_s0067;

void f158_E(i8 /* text */);
	f158_E(v4749);

	i8 v4750 = (i8)(intptr_t)(ws+3248);
	i1 v4751 = *(i1*)(intptr_t)v4750;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4751);

	i8 v4752 = (i8)(intptr_t)c02_s0068;

void f158_E(i8 /* text */);
	f158_E(v4752);

	i8 v4753 = (i8)(intptr_t)(ws+3256);
	i2 v4754 = *(i2*)(intptr_t)v4753;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4754);

	i8 v4755 = (i8)(intptr_t)c02_s0069;

void f158_E(i8 /* text */);
	f158_E(v4755);

	i8 v4756 = (i8)(intptr_t)(ws+3248);
	i1 v4757 = *(i1*)(intptr_t)v4756;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4757);

	i8 v4758 = (i8)(intptr_t)c02_s006a;

void f158_E(i8 /* text */);
	f158_E(v4758);

	i8 v4759 = (i8)(intptr_t)(ws+3252);
	i4 v4760 = *(i4*)(intptr_t)v4759;

void f164_E_i32(i4 /* value */);
	f164_E_i32(v4760);

	i8 v4761 = (i8)(intptr_t)c02_s006b;

void f158_E(i8 /* text */);
	f158_E(v4761);

endsub:;
}
const i1 c02_s006c[] = { 0x09,0x2a,0x28,0x69,0 };
const i1 c02_s006d[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
const i1 c02_s006e[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s006f[] = { 0x3b,0x0a,0 };

// StoreVV workspace at ws+3248 length ws+6
void f228_StoreVV(i1 p4762 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4762; /*width */


void f222_Pop(i2* /* vid */);
	i2 v4763;
	f222_Pop(&v4763);
	i8 v4764 = (i8)(intptr_t)(ws+3250);
	*(i2*)(intptr_t)v4764 = v4763;


void f222_Pop(i2* /* vid */);
	i2 v4765;
	f222_Pop(&v4765);
	i8 v4766 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v4766 = v4765;

	i8 v4767 = (i8)(intptr_t)c02_s006c;

void f158_E(i8 /* text */);
	f158_E(v4767);

	i8 v4768 = (i8)(intptr_t)(ws+3248);
	i1 v4769 = *(i1*)(intptr_t)v4768;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4769);

	i8 v4770 = (i8)(intptr_t)c02_s006d;

void f158_E(i8 /* text */);
	f158_E(v4770);

	i8 v4771 = (i8)(intptr_t)(ws+3250);
	i2 v4772 = *(i2*)(intptr_t)v4771;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4772);

	i8 v4773 = (i8)(intptr_t)c02_s006e;

void f158_E(i8 /* text */);
	f158_E(v4773);

	i8 v4774 = (i8)(intptr_t)(ws+3252);
	i2 v4775 = *(i2*)(intptr_t)v4774;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4775);

	i8 v4776 = (i8)(intptr_t)c02_s006f;

void f158_E(i8 /* text */);
	f158_E(v4776);

endsub:;
}
const i1 c02_s0070[] = { 0x09,0x69,0 };
const i1 c02_s0071[] = { 0x20,0x76,0 };
const i1 c02_s0072[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
const i1 c02_s0073[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
const i1 c02_s0074[] = { 0x3b,0x0a,0 };

// LoadVV workspace at ws+3248 length ws+6
void f229_LoadVV(i1 p4777 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4777; /*width */


void f222_Pop(i2* /* vid */);
	i2 v4778;
	f222_Pop(&v4778);
	i8 v4779 = (i8)(intptr_t)(ws+3250);
	*(i2*)(intptr_t)v4779 = v4778;


void f220_Push(i2* /* vid */);
	i2 v4780;
	f220_Push(&v4780);
	i8 v4781 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v4781 = v4780;

	i8 v4782 = (i8)(intptr_t)c02_s0070;

void f158_E(i8 /* text */);
	f158_E(v4782);

	i8 v4783 = (i8)(intptr_t)(ws+3248);
	i1 v4784 = *(i1*)(intptr_t)v4783;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4784);

	i8 v4785 = (i8)(intptr_t)c02_s0071;

void f158_E(i8 /* text */);
	f158_E(v4785);

	i8 v4786 = (i8)(intptr_t)(ws+3252);
	i2 v4787 = *(i2*)(intptr_t)v4786;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4787);

	i8 v4788 = (i8)(intptr_t)c02_s0072;

void f158_E(i8 /* text */);
	f158_E(v4788);

	i8 v4789 = (i8)(intptr_t)(ws+3248);
	i1 v4790 = *(i1*)(intptr_t)v4789;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4790);

	i8 v4791 = (i8)(intptr_t)c02_s0073;

void f158_E(i8 /* text */);
	f158_E(v4791);

	i8 v4792 = (i8)(intptr_t)(ws+3250);
	i2 v4793 = *(i2*)(intptr_t)v4792;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4793);

	i8 v4794 = (i8)(intptr_t)c02_s0074;

void f158_E(i8 /* text */);
	f158_E(v4794);

endsub:;
}
const i1 c02_s0075[] = { 0x09,0x69,0 };
const i1 c02_s0076[] = { 0x20,0x76,0 };
const i1 c02_s0077[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s0078[] = { 0x76,0 };
const i1 c02_s0079[] = { 0x3b,0x0a,0 };

// Op2VV workspace at ws+3248 length ws+22
void f230_Op2VV(i8 p4795 /* op */, i1 p4796 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4796; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4795; /*op */


void f222_Pop(i2* /* vid */);
	i2 v4797;
	f222_Pop(&v4797);
	i8 v4798 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4798 = v4797;


void f222_Pop(i2* /* vid */);
	i2 v4799;
	f222_Pop(&v4799);
	i8 v4800 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4800 = v4799;


void f220_Push(i2* /* vid */);
	i2 v4801;
	f220_Push(&v4801);
	i8 v4802 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4802 = v4801;

	i8 v4803 = (i8)(intptr_t)c02_s0075;

void f158_E(i8 /* text */);
	f158_E(v4803);

	i8 v4804 = (i8)(intptr_t)(ws+3248);
	i1 v4805 = *(i1*)(intptr_t)v4804;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4805);

	i8 v4806 = (i8)(intptr_t)c02_s0076;

void f158_E(i8 /* text */);
	f158_E(v4806);

	i8 v4807 = (i8)(intptr_t)(ws+3268);
	i2 v4808 = *(i2*)(intptr_t)v4807;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4808);

	i8 v4809 = (i8)(intptr_t)c02_s0077;

void f158_E(i8 /* text */);
	f158_E(v4809);

	i8 v4810 = (i8)(intptr_t)(ws+3266);
	i2 v4811 = *(i2*)(intptr_t)v4810;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4811);

	i8 v4812 = (i8)(intptr_t)(ws+3256);
	i8 v4813 = *(i8*)(intptr_t)v4812;

void f158_E(i8 /* text */);
	f158_E(v4813);

	i8 v4814 = (i8)(intptr_t)c02_s0078;

void f158_E(i8 /* text */);
	f158_E(v4814);

	i8 v4815 = (i8)(intptr_t)(ws+3264);
	i2 v4816 = *(i2*)(intptr_t)v4815;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4816);

	i8 v4817 = (i8)(intptr_t)c02_s0079;

void f158_E(i8 /* text */);
	f158_E(v4817);

endsub:;
}
const i1 c02_s007a[] = { 0x09,0x69,0 };
const i1 c02_s007b[] = { 0x20,0x76,0 };
const i1 c02_s007c[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s007d[] = { 0x28,0 };
const i1 c02_s007e[] = { 0x29,0x3b,0x0a,0 };

// Op2VC workspace at ws+3248 length ws+24
void f231_Op2VC(i4 p4818 /* rhs */, i8 p4819 /* op */, i1 p4820 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4820; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4819; /*op */
	*(i4*)(intptr_t)(ws+3264) = p4818; /*rhs */


void f222_Pop(i2* /* vid */);
	i2 v4821;
	f222_Pop(&v4821);
	i8 v4822 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4822 = v4821;


void f220_Push(i2* /* vid */);
	i2 v4823;
	f220_Push(&v4823);
	i8 v4824 = (i8)(intptr_t)(ws+3270);
	*(i2*)(intptr_t)v4824 = v4823;

	i8 v4825 = (i8)(intptr_t)c02_s007a;

void f158_E(i8 /* text */);
	f158_E(v4825);

	i8 v4826 = (i8)(intptr_t)(ws+3248);
	i1 v4827 = *(i1*)(intptr_t)v4826;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4827);

	i8 v4828 = (i8)(intptr_t)c02_s007b;

void f158_E(i8 /* text */);
	f158_E(v4828);

	i8 v4829 = (i8)(intptr_t)(ws+3270);
	i2 v4830 = *(i2*)(intptr_t)v4829;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4830);

	i8 v4831 = (i8)(intptr_t)c02_s007c;

void f158_E(i8 /* text */);
	f158_E(v4831);

	i8 v4832 = (i8)(intptr_t)(ws+3268);
	i2 v4833 = *(i2*)(intptr_t)v4832;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4833);

	i8 v4834 = (i8)(intptr_t)(ws+3256);
	i8 v4835 = *(i8*)(intptr_t)v4834;

void f158_E(i8 /* text */);
	f158_E(v4835);

	i8 v4836 = (i8)(intptr_t)c02_s007d;

void f158_E(i8 /* text */);
	f158_E(v4836);

	i8 v4837 = (i8)(intptr_t)(ws+3264);
	i4 v4838 = *(i4*)(intptr_t)v4837;

void f164_E_i32(i4 /* value */);
	f164_E_i32(v4838);

	i8 v4839 = (i8)(intptr_t)c02_s007e;

void f158_E(i8 /* text */);
	f158_E(v4839);

endsub:;
}
const i1 c02_s007f[] = { 0x09,0x69,0 };
const i1 c02_s0080[] = { 0x20,0x76,0 };
const i1 c02_s0081[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
const i1 c02_s0082[] = { 0x29,0x76,0 };
const i1 c02_s0083[] = { 0x28,0x73,0 };
const i1 c02_s0084[] = { 0x29,0x76,0 };
const i1 c02_s0085[] = { 0x3b,0x0a,0 };

// Op2VVSigned workspace at ws+3248 length ws+22
void f232_Op2VVSigned(i8 p4840 /* op */, i1 p4841 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4841; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4840; /*op */


void f222_Pop(i2* /* vid */);
	i2 v4842;
	f222_Pop(&v4842);
	i8 v4843 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4843 = v4842;


void f222_Pop(i2* /* vid */);
	i2 v4844;
	f222_Pop(&v4844);
	i8 v4845 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4845 = v4844;


void f220_Push(i2* /* vid */);
	i2 v4846;
	f220_Push(&v4846);
	i8 v4847 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4847 = v4846;

	i8 v4848 = (i8)(intptr_t)c02_s007f;

void f158_E(i8 /* text */);
	f158_E(v4848);

	i8 v4849 = (i8)(intptr_t)(ws+3248);
	i1 v4850 = *(i1*)(intptr_t)v4849;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4850);

	i8 v4851 = (i8)(intptr_t)c02_s0080;

void f158_E(i8 /* text */);
	f158_E(v4851);

	i8 v4852 = (i8)(intptr_t)(ws+3268);
	i2 v4853 = *(i2*)(intptr_t)v4852;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4853);

	i8 v4854 = (i8)(intptr_t)c02_s0081;

void f158_E(i8 /* text */);
	f158_E(v4854);

	i8 v4855 = (i8)(intptr_t)(ws+3248);
	i1 v4856 = *(i1*)(intptr_t)v4855;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4856);

	i8 v4857 = (i8)(intptr_t)c02_s0082;

void f158_E(i8 /* text */);
	f158_E(v4857);

	i8 v4858 = (i8)(intptr_t)(ws+3266);
	i2 v4859 = *(i2*)(intptr_t)v4858;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4859);

	i8 v4860 = (i8)(intptr_t)(ws+3256);
	i8 v4861 = *(i8*)(intptr_t)v4860;

void f158_E(i8 /* text */);
	f158_E(v4861);

	i8 v4862 = (i8)(intptr_t)c02_s0083;

void f158_E(i8 /* text */);
	f158_E(v4862);

	i8 v4863 = (i8)(intptr_t)(ws+3248);
	i1 v4864 = *(i1*)(intptr_t)v4863;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4864);

	i8 v4865 = (i8)(intptr_t)c02_s0084;

void f158_E(i8 /* text */);
	f158_E(v4865);

	i8 v4866 = (i8)(intptr_t)(ws+3264);
	i2 v4867 = *(i2*)(intptr_t)v4866;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4867);

	i8 v4868 = (i8)(intptr_t)c02_s0085;

void f158_E(i8 /* text */);
	f158_E(v4868);

endsub:;
}
const i1 c02_s0086[] = { 0x09,0x69,0 };
const i1 c02_s0087[] = { 0x20,0x76,0 };
const i1 c02_s0088[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s0089[] = { 0x28,0 };
const i1 c02_s008a[] = { 0x29,0x3b,0x0a,0 };

// Op2VCSigned workspace at ws+3248 length ws+24
void f233_Op2VCSigned(i4 p4869 /* rhs */, i8 p4870 /* op */, i1 p4871 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4871; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4870; /*op */
	*(i4*)(intptr_t)(ws+3264) = p4869; /*rhs */


void f222_Pop(i2* /* vid */);
	i2 v4872;
	f222_Pop(&v4872);
	i8 v4873 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4873 = v4872;


void f220_Push(i2* /* vid */);
	i2 v4874;
	f220_Push(&v4874);
	i8 v4875 = (i8)(intptr_t)(ws+3270);
	*(i2*)(intptr_t)v4875 = v4874;

	i8 v4876 = (i8)(intptr_t)c02_s0086;

void f158_E(i8 /* text */);
	f158_E(v4876);

	i8 v4877 = (i8)(intptr_t)(ws+3248);
	i1 v4878 = *(i1*)(intptr_t)v4877;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4878);

	i8 v4879 = (i8)(intptr_t)c02_s0087;

void f158_E(i8 /* text */);
	f158_E(v4879);

	i8 v4880 = (i8)(intptr_t)(ws+3270);
	i2 v4881 = *(i2*)(intptr_t)v4880;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4881);

	i8 v4882 = (i8)(intptr_t)c02_s0088;

void f158_E(i8 /* text */);
	f158_E(v4882);

	i8 v4883 = (i8)(intptr_t)(ws+3268);
	i2 v4884 = *(i2*)(intptr_t)v4883;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4884);

	i8 v4885 = (i8)(intptr_t)(ws+3256);
	i8 v4886 = *(i8*)(intptr_t)v4885;

void f158_E(i8 /* text */);
	f158_E(v4886);

	i8 v4887 = (i8)(intptr_t)c02_s0089;

void f158_E(i8 /* text */);
	f158_E(v4887);

	i8 v4888 = (i8)(intptr_t)(ws+3264);
	i4 v4889 = *(i4*)(intptr_t)v4888;

void f164_E_i32(i4 /* value */);
	f164_E_i32(v4889);

	i8 v4890 = (i8)(intptr_t)c02_s008a;

void f158_E(i8 /* text */);
	f158_E(v4890);

endsub:;
}
const i1 c02_s008b[] = { 0x09,0x69,0 };
const i1 c02_s008c[] = { 0x20,0x76,0 };
const i1 c02_s008d[] = { 0x20,0x3d,0x20,0 };
const i1 c02_s008e[] = { 0x76,0 };
const i1 c02_s008f[] = { 0x3b,0x0a,0 };

// Op1V workspace at ws+3248 length ws+20
void f234_Op1V(i8 p4891 /* op */, i1 p4892 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4892; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4891; /*op */


void f222_Pop(i2* /* vid */);
	i2 v4893;
	f222_Pop(&v4893);
	i8 v4894 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4894 = v4893;


void f220_Push(i2* /* vid */);
	i2 v4895;
	f220_Push(&v4895);
	i8 v4896 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4896 = v4895;

	i8 v4897 = (i8)(intptr_t)c02_s008b;

void f158_E(i8 /* text */);
	f158_E(v4897);

	i8 v4898 = (i8)(intptr_t)(ws+3248);
	i1 v4899 = *(i1*)(intptr_t)v4898;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4899);

	i8 v4900 = (i8)(intptr_t)c02_s008c;

void f158_E(i8 /* text */);
	f158_E(v4900);

	i8 v4901 = (i8)(intptr_t)(ws+3266);
	i2 v4902 = *(i2*)(intptr_t)v4901;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4902);

	i8 v4903 = (i8)(intptr_t)c02_s008d;

void f158_E(i8 /* text */);
	f158_E(v4903);

	i8 v4904 = (i8)(intptr_t)(ws+3256);
	i8 v4905 = *(i8*)(intptr_t)v4904;

void f158_E(i8 /* text */);
	f158_E(v4905);

	i8 v4906 = (i8)(intptr_t)c02_s008e;

void f158_E(i8 /* text */);
	f158_E(v4906);

	i8 v4907 = (i8)(intptr_t)(ws+3264);
	i2 v4908 = *(i2*)(intptr_t)v4907;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4908);

	i8 v4909 = (i8)(intptr_t)c02_s008f;

void f158_E(i8 /* text */);
	f158_E(v4909);

endsub:;
}
const i1 c02_s0090[] = { 0x09,0x69,0 };
const i1 c02_s0091[] = { 0x20,0x76,0 };
const i1 c02_s0092[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
const i1 c02_s0093[] = { 0x29,0x76,0 };
const i1 c02_s0094[] = { 0x29,0 };
const i1 c02_s0095[] = { 0x76,0 };
const i1 c02_s0096[] = { 0x3b,0x0a,0 };

// Shift workspace at ws+3248 length ws+30
void f235_Shift(i8 p4910 /* op */, i8 p4911 /* type */, i1 p4912 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4912; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4911; /*type */
	*(i8*)(intptr_t)(ws+3264) = p4910; /*op */


void f222_Pop(i2* /* vid */);
	i2 v4913;
	f222_Pop(&v4913);
	i8 v4914 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4914 = v4913;


void f222_Pop(i2* /* vid */);
	i2 v4915;
	f222_Pop(&v4915);
	i8 v4916 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4916 = v4915;


void f220_Push(i2* /* vid */);
	i2 v4917;
	f220_Push(&v4917);
	i8 v4918 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v4918 = v4917;

	i8 v4919 = (i8)(intptr_t)c02_s0090;

void f158_E(i8 /* text */);
	f158_E(v4919);

	i8 v4920 = (i8)(intptr_t)(ws+3248);
	i1 v4921 = *(i1*)(intptr_t)v4920;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4921);

	i8 v4922 = (i8)(intptr_t)c02_s0091;

void f158_E(i8 /* text */);
	f158_E(v4922);

	i8 v4923 = (i8)(intptr_t)(ws+3276);
	i2 v4924 = *(i2*)(intptr_t)v4923;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4924);

	i8 v4925 = (i8)(intptr_t)c02_s0092;

void f158_E(i8 /* text */);
	f158_E(v4925);

	i8 v4926 = (i8)(intptr_t)(ws+3256);
	i8 v4927 = *(i8*)(intptr_t)v4926;

void f158_E(i8 /* text */);
	f158_E(v4927);

	i8 v4928 = (i8)(intptr_t)c02_s0093;

void f158_E(i8 /* text */);
	f158_E(v4928);

	i8 v4929 = (i8)(intptr_t)(ws+3274);
	i2 v4930 = *(i2*)(intptr_t)v4929;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4930);

	i8 v4931 = (i8)(intptr_t)c02_s0094;

void f158_E(i8 /* text */);
	f158_E(v4931);

	i8 v4932 = (i8)(intptr_t)(ws+3264);
	i8 v4933 = *(i8*)(intptr_t)v4932;

void f158_E(i8 /* text */);
	f158_E(v4933);

	i8 v4934 = (i8)(intptr_t)c02_s0095;

void f158_E(i8 /* text */);
	f158_E(v4934);

	i8 v4935 = (i8)(intptr_t)(ws+3272);
	i2 v4936 = *(i2*)(intptr_t)v4935;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4936);

	i8 v4937 = (i8)(intptr_t)c02_s0096;

void f158_E(i8 /* text */);
	f158_E(v4937);

endsub:;
}
const i1 c02_s0097[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
const i1 c02_s0098[] = { 0x76,0 };
const i1 c02_s0099[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s009a[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s009b[] = { 0x3b,0x0a,0 };

// Branch workspace at ws+3248 length ws+20
void f236_Branch(i8 p4938 /* op */, i8 p4939 /* node */) {
	*(i8*)(intptr_t)(ws+3248) = p4939; /*node */
	*(i8*)(intptr_t)(ws+3256) = p4938; /*op */


void f222_Pop(i2* /* vid */);
	i2 v4940;
	f222_Pop(&v4940);
	i8 v4941 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4941 = v4940;


void f222_Pop(i2* /* vid */);
	i2 v4942;
	f222_Pop(&v4942);
	i8 v4943 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4943 = v4942;

	i8 v4944 = (i8)(intptr_t)c02_s0097;

void f158_E(i8 /* text */);
	f158_E(v4944);

	i8 v4945 = (i8)(intptr_t)(ws+3266);
	i2 v4946 = *(i2*)(intptr_t)v4945;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4946);

	i8 v4947 = (i8)(intptr_t)(ws+3256);
	i8 v4948 = *(i8*)(intptr_t)v4947;

void f158_E(i8 /* text */);
	f158_E(v4948);

	i8 v4949 = (i8)(intptr_t)c02_s0098;

void f158_E(i8 /* text */);
	f158_E(v4949);

	i8 v4950 = (i8)(intptr_t)(ws+3264);
	i2 v4951 = *(i2*)(intptr_t)v4950;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4951);

	i8 v4952 = (i8)(intptr_t)c02_s0099;

void f158_E(i8 /* text */);
	f158_E(v4952);

	i8 v4953 = (i8)(intptr_t)(ws+3248);
	i8 v4954 = *(i8*)(intptr_t)v4953;
	i2 v4955 = *(i2*)(intptr_t)v4954;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v4955);

	i8 v4956 = (i8)(intptr_t)c02_s009a;

void f158_E(i8 /* text */);
	f158_E(v4956);

	i8 v4957 = (i8)(intptr_t)(ws+3248);
	i8 v4958 = *(i8*)(intptr_t)v4957;
	i8 v4959 = v4958+(+2);
	i2 v4960 = *(i2*)(intptr_t)v4959;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v4960);

	i8 v4961 = (i8)(intptr_t)c02_s009b;

void f158_E(i8 /* text */);
	f158_E(v4961);

endsub:;
}
const i1 c02_s009c[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
const i1 c02_s009d[] = { 0x29,0x76,0 };
const i1 c02_s009e[] = { 0x28,0x73,0 };
const i1 c02_s009f[] = { 0x29,0x76,0 };
const i1 c02_s00a0[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a1[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a2[] = { 0x3b,0x0a,0 };

// BranchSigned workspace at ws+3248 length ws+28
void f237_BranchSigned(i8 p4962 /* op */, i1 p4963 /* width */, i8 p4964 /* node */) {
	*(i8*)(intptr_t)(ws+3248) = p4964; /*node */
	*(i1*)(intptr_t)(ws+3256) = p4963; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4962; /*op */


void f222_Pop(i2* /* vid */);
	i2 v4965;
	f222_Pop(&v4965);
	i8 v4966 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4966 = v4965;


void f222_Pop(i2* /* vid */);
	i2 v4967;
	f222_Pop(&v4967);
	i8 v4968 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4968 = v4967;

	i8 v4969 = (i8)(intptr_t)c02_s009c;

void f158_E(i8 /* text */);
	f158_E(v4969);

	i8 v4970 = (i8)(intptr_t)(ws+3256);
	i1 v4971 = *(i1*)(intptr_t)v4970;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4971);

	i8 v4972 = (i8)(intptr_t)c02_s009d;

void f158_E(i8 /* text */);
	f158_E(v4972);

	i8 v4973 = (i8)(intptr_t)(ws+3274);
	i2 v4974 = *(i2*)(intptr_t)v4973;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4974);

	i8 v4975 = (i8)(intptr_t)(ws+3264);
	i8 v4976 = *(i8*)(intptr_t)v4975;

void f158_E(i8 /* text */);
	f158_E(v4976);

	i8 v4977 = (i8)(intptr_t)c02_s009e;

void f158_E(i8 /* text */);
	f158_E(v4977);

	i8 v4978 = (i8)(intptr_t)(ws+3256);
	i1 v4979 = *(i1*)(intptr_t)v4978;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v4979);

	i8 v4980 = (i8)(intptr_t)c02_s009f;

void f158_E(i8 /* text */);
	f158_E(v4980);

	i8 v4981 = (i8)(intptr_t)(ws+3272);
	i2 v4982 = *(i2*)(intptr_t)v4981;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v4982);

	i8 v4983 = (i8)(intptr_t)c02_s00a0;

void f158_E(i8 /* text */);
	f158_E(v4983);

	i8 v4984 = (i8)(intptr_t)(ws+3248);
	i8 v4985 = *(i8*)(intptr_t)v4984;
	i2 v4986 = *(i2*)(intptr_t)v4985;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v4986);

	i8 v4987 = (i8)(intptr_t)c02_s00a1;

void f158_E(i8 /* text */);
	f158_E(v4987);

	i8 v4988 = (i8)(intptr_t)(ws+3248);
	i8 v4989 = *(i8*)(intptr_t)v4988;
	i8 v4990 = v4989+(+2);
	i2 v4991 = *(i2*)(intptr_t)v4990;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v4991);

	i8 v4992 = (i8)(intptr_t)c02_s00a2;

void f158_E(i8 /* text */);
	f158_E(v4992);

endsub:;
}
const i1 c02_s00a3[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a4[] = { 0x3b,0x0a,0 };

// BranchConstant workspace at ws+3248 length ws+16
void f238_BranchConstant(i4 p4993 /* rhs */, i4 p4994 /* lhs */, i8 p4995 /* node */) {
	*(i8*)(intptr_t)(ws+3248) = p4995; /*node */
	*(i4*)(intptr_t)(ws+3256) = p4994; /*lhs */
	*(i4*)(intptr_t)(ws+3260) = p4993; /*rhs */

	i8 v4996 = (i8)(intptr_t)c02_s00a3;

void f158_E(i8 /* text */);
	f158_E(v4996);

	i8 v4997 = (i8)(intptr_t)(ws+3256);
	i4 v4998 = *(i4*)(intptr_t)v4997;
	i8 v4999 = (i8)(intptr_t)(ws+3260);
	i4 v5000 = *(i4*)(intptr_t)v4999;
	if (v4998==v5000) goto c02_0445; else goto c02_0446;

c02_0445:;

	i8 v5001 = (i8)(intptr_t)(ws+3248);
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i2 v5003 = *(i2*)(intptr_t)v5002;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v5003);

	goto c02_0442;

c02_0446:;

	i8 v5004 = (i8)(intptr_t)(ws+3248);
	i8 v5005 = *(i8*)(intptr_t)v5004;
	i8 v5006 = v5005+(+2);
	i2 v5007 = *(i2*)(intptr_t)v5006;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v5007);

c02_0442:;

	i8 v5008 = (i8)(intptr_t)c02_s00a4;

void f158_E(i8 /* text */);
	f158_E(v5008);

endsub:;
}
const i1 c02_s00a5[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
const i1 c02_s00a6[] = { 0x20,0x21,0x3d,0x20,0 };
const i1 c02_s00a7[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a8[] = { 0x3b,0x0a,0 };

// Whencase workspace at ws+3248 length ws+8
void f239_Whencase(i2 p5009 /* falselabel */, i4 p5010 /* value */) {
	*(i4*)(intptr_t)(ws+3248) = p5010; /*value */
	*(i2*)(intptr_t)(ws+3252) = p5009; /*falselabel */

	i8 v5011 = (i8)(intptr_t)(ws+1064);
	i8 v5012 = (i8)(intptr_t)(ws+1192);
	i1 v5013 = *(i1*)(intptr_t)v5012;
	i1 v5014 = v5013+(-1);
	i8 v5015 = v5014;
	i1 v5016 = (i1)+1;
	i8 v5017 = ((i8)v5015)<<v5016;
	i8 v5018 = v5011+v5017;
	i2 v5019 = *(i2*)(intptr_t)v5018;
	i8 v5020 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v5020 = v5019;

	i8 v5021 = (i8)(intptr_t)c02_s00a5;

void f158_E(i8 /* text */);
	f158_E(v5021);

	i8 v5022 = (i8)(intptr_t)(ws+3254);
	i2 v5023 = *(i2*)(intptr_t)v5022;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5023);

	i8 v5024 = (i8)(intptr_t)c02_s00a6;

void f158_E(i8 /* text */);
	f158_E(v5024);

	i8 v5025 = (i8)(intptr_t)(ws+3248);
	i4 v5026 = *(i4*)(intptr_t)v5025;

void f164_E_i32(i4 /* value */);
	f164_E_i32(v5026);

	i8 v5027 = (i8)(intptr_t)c02_s00a7;

void f158_E(i8 /* text */);
	f158_E(v5027);

	i8 v5028 = (i8)(intptr_t)(ws+3252);
	i2 v5029 = *(i2*)(intptr_t)v5028;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v5029);

	i8 v5030 = (i8)(intptr_t)c02_s00a8;

void f158_E(i8 /* text */);
	f158_E(v5030);

endsub:;
}
const i1 c02_s00a9[] = { 0x09,0x69,0 };
const i1 c02_s00aa[] = { 0x20,0x76,0 };
const i1 c02_s00ab[] = { 0x20,0x3d,0x20,0 };
const i1 c02_s00ac[] = { 0x28,0x73,0 };
const i1 c02_s00ad[] = { 0x29,0x28,0x73,0 };
const i1 c02_s00ae[] = { 0x29,0 };
const i1 c02_s00af[] = { 0x76,0 };
const i1 c02_s00b0[] = { 0x3b,0x0a,0 };

// Cast workspace at ws+3248 length ws+8
void f240_Cast(i1 p5031 /* sext */, i1 p5032 /* dest */, i1 p5033 /* src */) {
	*(i1*)(intptr_t)(ws+3248) = p5033; /*src */
	*(i1*)(intptr_t)(ws+3249) = p5032; /*dest */
	*(i1*)(intptr_t)(ws+3250) = p5031; /*sext */


void f222_Pop(i2* /* vid */);
	i2 v5034;
	f222_Pop(&v5034);
	i8 v5035 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v5035 = v5034;


void f220_Push(i2* /* vid */);
	i2 v5036;
	f220_Push(&v5036);
	i8 v5037 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v5037 = v5036;

	i8 v5038 = (i8)(intptr_t)c02_s00a9;

void f158_E(i8 /* text */);
	f158_E(v5038);

	i8 v5039 = (i8)(intptr_t)(ws+3249);
	i1 v5040 = *(i1*)(intptr_t)v5039;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5040);

	i8 v5041 = (i8)(intptr_t)c02_s00aa;

void f158_E(i8 /* text */);
	f158_E(v5041);

	i8 v5042 = (i8)(intptr_t)(ws+3254);
	i2 v5043 = *(i2*)(intptr_t)v5042;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5043);

	i8 v5044 = (i8)(intptr_t)c02_s00ab;

void f158_E(i8 /* text */);
	f158_E(v5044);

	i8 v5045 = (i8)(intptr_t)(ws+3250);
	i1 v5046 = *(i1*)(intptr_t)v5045;
	i1 v5047 = (i1)+0;
	if (v5046==v5047) goto c02_044b; else goto c02_044a;

c02_044a:;

	i8 v5048 = (i8)(intptr_t)c02_s00ac;

void f158_E(i8 /* text */);
	f158_E(v5048);

	i8 v5049 = (i8)(intptr_t)(ws+3249);
	i1 v5050 = *(i1*)(intptr_t)v5049;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5050);

	i8 v5051 = (i8)(intptr_t)c02_s00ad;

void f158_E(i8 /* text */);
	f158_E(v5051);

	i8 v5052 = (i8)(intptr_t)(ws+3248);
	i1 v5053 = *(i1*)(intptr_t)v5052;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5053);

	i8 v5054 = (i8)(intptr_t)c02_s00ae;

void f158_E(i8 /* text */);
	f158_E(v5054);

	goto c02_0447;

c02_044b:;

c02_0447:;

	i8 v5055 = (i8)(intptr_t)c02_s00af;

void f158_E(i8 /* text */);
	f158_E(v5055);

	i8 v5056 = (i8)(intptr_t)(ws+3252);
	i2 v5057 = *(i2*)(intptr_t)v5056;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5057);

	i8 v5058 = (i8)(intptr_t)c02_s00b0;

void f158_E(i8 /* text */);
	f158_E(v5058);

endsub:;
}
const i1 c02_s00b1[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
const i1 c02_s00b2[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
const i1 c02_s00b3[] = { 0x30,0x78,0 };
const i1 c02_s00b4[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };

// E_string workspace at ws+3256 length ws+12
void f241_E_string(i2* p5061 /* sid */, i8 p5062 /* text */) {
	*(i8*)(intptr_t)(ws+3256) = p5062; /*text */

	i8 v5063 = (i8)(intptr_t)(ws+1208);
	i2 v5064 = *(i2*)(intptr_t)v5063;
	i8 v5065 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5065 = v5064;

	i8 v5066 = (i8)(intptr_t)(ws+1208);
	i2 v5067 = *(i2*)(intptr_t)v5066;
	i2 v5068 = v5067+(+1);
	i8 v5069 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5069 = v5068;


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v5070 = (i8)(intptr_t)(ws+40);
	i8 v5071 = *(i8*)(intptr_t)v5070;
	i8 v5072 = v5071+(+56);
	i2 v5073 = *(i2*)(intptr_t)v5072;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v5073);

	i8 v5074 = (i8)(intptr_t)c02_s00b1;

void f158_E(i8 /* text */);
	f158_E(v5074);

	i1 v5075 = (i1)+3;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v5075);

	i1 v5076 = (i1)+115;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v5076);

	i8 v5077 = (i8)(intptr_t)(ws+3264);
	i2 v5078 = *(i2*)(intptr_t)v5077;

void f167_E_h16(i2 /* value */);
	f167_E_h16(v5078);

	i8 v5079 = (i8)(intptr_t)c02_s00b2;

void f158_E(i8 /* text */);
	f158_E(v5079);

	i1 v5080 = (i1)+1;
	i8 v5081 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v5081 = v5080;

c02_044c:;

	i8 v5082 = (i8)(intptr_t)(ws+3256);
	i8 v5083 = *(i8*)(intptr_t)v5082;
	i1 v5084 = *(i1*)(intptr_t)v5083;
	i8 v5085 = (i8)(intptr_t)(ws+3267);
	*(i1*)(intptr_t)v5085 = v5084;

	i8 v5086 = (i8)(intptr_t)(ws+3256);
	i8 v5087 = *(i8*)(intptr_t)v5086;
	i8 v5088 = v5087+(+1);
	i8 v5089 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5089 = v5088;

	i8 v5090 = (i8)(intptr_t)(ws+3267);
	i1 v5091 = *(i1*)(intptr_t)v5090;
	i1 v5092 = (i1)+0;
	if (v5091==v5092) goto c02_0451; else goto c02_0452;

c02_0451:;

	goto c02_044d;

c02_0452:;

c02_044e:;

	i8 v5093 = (i8)(intptr_t)(ws+3266);
	i1 v5094 = *(i1*)(intptr_t)v5093;
	i1 v5095 = (i1)+0;
	if (v5094==v5095) goto c02_0456; else goto c02_0457;

c02_0456:;


void f153_E_comma(void);
	f153_E_comma();

	goto c02_0453;

c02_0457:;

c02_0453:;

	i1 v5096 = (i1)+0;
	i8 v5097 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v5097 = v5096;

	i8 v5098 = (i8)(intptr_t)c02_s00b3;

void f158_E(i8 /* text */);
	f158_E(v5098);

	i8 v5099 = (i8)(intptr_t)(ws+3267);
	i1 v5100 = *(i1*)(intptr_t)v5099;

void f166_E_h8(i1 /* value */);
	f166_E_h8(v5100);

	goto c02_044c;

c02_044d:;

	i8 v5101 = (i8)(intptr_t)(ws+3266);
	i1 v5102 = *(i1*)(intptr_t)v5101;
	i1 v5103 = (i1)+0;
	if (v5102==v5103) goto c02_045b; else goto c02_045c;

c02_045b:;


void f153_E_comma(void);
	f153_E_comma();

	goto c02_0458;

c02_045c:;

c02_0458:;

	i8 v5104 = (i8)(intptr_t)c02_s00b4;

void f158_E(i8 /* text */);
	f158_E(v5104);

	i1 v5105 = (i1)+83;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v5105);

endsub:;
	*p5061 = *(i2*)(intptr_t)(ws+3264);
}
const i1 c02_s00b5[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
const i1 c02_s00b6[] = { 0x30,0x78,0 };
const i1 c02_s00b7[] = { 0x7d,0x7d,0x2c,0x0a,0 };

// FlushInitialiserBuffer workspace at ws+3264 length ws+1
void f242_FlushInitialiserBuffer(void) {

	i8 v5108 = (i8)(intptr_t)(ws+1218);
	i1 v5109 = *(i1*)(intptr_t)v5108;
	i1 v5110 = (i1)+0;
	if (v5109==v5110) goto c02_0461; else goto c02_0460;

c02_0460:;

	i8 v5111 = (i8)(intptr_t)c02_s00b5;

void f158_E(i8 /* text */);
	f158_E(v5111);

	i1 v5112 = (i1)+0;
	i8 v5113 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5113 = v5112;

c02_0464:;

	i8 v5114 = (i8)(intptr_t)(ws+3264);
	i1 v5115 = *(i1*)(intptr_t)v5114;
	i8 v5116 = (i8)(intptr_t)(ws+1218);
	i1 v5117 = *(i1*)(intptr_t)v5116;
	if (v5115==v5117) goto c02_0467; else goto c02_0466;

c02_0466:;

	i8 v5118 = (i8)(intptr_t)(ws+3264);
	i1 v5119 = *(i1*)(intptr_t)v5118;
	i1 v5120 = (i1)+0;
	if (v5119==v5120) goto c02_046c; else goto c02_046b;

c02_046b:;


void f153_E_comma(void);
	f153_E_comma();

	goto c02_0468;

c02_046c:;

c02_0468:;

	i8 v5121 = (i8)(intptr_t)c02_s00b6;

void f158_E(i8 /* text */);
	f158_E(v5121);

	i8 v5122 = (i8)(intptr_t)(ws+1210);
	i8 v5123 = (i8)(intptr_t)(ws+3264);
	i1 v5124 = *(i1*)(intptr_t)v5123;
	i8 v5125 = v5124;
	i8 v5126 = v5122+v5125;
	i1 v5127 = *(i1*)(intptr_t)v5126;

void f166_E_h8(i1 /* value */);
	f166_E_h8(v5127);

	i8 v5128 = (i8)(intptr_t)(ws+3264);
	i1 v5129 = *(i1*)(intptr_t)v5128;
	i1 v5130 = v5129+(+1);
	i8 v5131 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5131 = v5130;

	goto c02_0464;

c02_0467:;

	i8 v5132 = (i8)(intptr_t)c02_s00b7;

void f158_E(i8 /* text */);
	f158_E(v5132);

	i1 v5133 = (i1)+0;
	i8 v5134 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5134 = v5133;

	goto c02_045d;

c02_0461:;

c02_045d:;

endsub:;
}

// E_bytes workspace at ws+3248 length ws+9
void f243_E_bytes(i1 p5135 /* width */, i8 p5136 /* ptr */) {
	*(i8*)(intptr_t)(ws+3248) = p5136; /*ptr */
	*(i1*)(intptr_t)(ws+3256) = p5135; /*width */

c02_046f:;

	i8 v5137 = (i8)(intptr_t)(ws+3256);
	i1 v5138 = *(i1*)(intptr_t)v5137;
	i1 v5139 = (i1)+0;
	if (v5138==v5139) goto c02_0472; else goto c02_0471;

c02_0471:;

	i8 v5140 = (i8)(intptr_t)(ws+3248);
	i8 v5141 = *(i8*)(intptr_t)v5140;
	i1 v5142 = *(i1*)(intptr_t)v5141;
	i8 v5143 = (i8)(intptr_t)(ws+1210);
	i8 v5144 = (i8)(intptr_t)(ws+1218);
	i1 v5145 = *(i1*)(intptr_t)v5144;
	i8 v5146 = v5145;
	i8 v5147 = v5143+v5146;
	*(i1*)(intptr_t)v5147 = v5142;

	i8 v5148 = (i8)(intptr_t)(ws+3248);
	i8 v5149 = *(i8*)(intptr_t)v5148;
	i8 v5150 = v5149+(+1);
	i8 v5151 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v5151 = v5150;

	i8 v5152 = (i8)(intptr_t)(ws+1218);
	i1 v5153 = *(i1*)(intptr_t)v5152;
	i1 v5154 = v5153+(+1);
	i8 v5155 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5155 = v5154;

	i8 v5156 = (i8)(intptr_t)(ws+1218);
	i1 v5157 = *(i1*)(intptr_t)v5156;
	i1 v5158 = (i1)+8;
	if (v5157==v5158) goto c02_0476; else goto c02_0477;

c02_0476:;


void f242_FlushInitialiserBuffer(void);
	f242_FlushInitialiserBuffer();

	goto c02_0473;

c02_0477:;

c02_0473:;

	i8 v5159 = (i8)(intptr_t)(ws+3256);
	i1 v5160 = *(i1*)(intptr_t)v5159;
	i1 v5161 = v5160+(-1);
	i8 v5162 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5162 = v5161;

	goto c02_046f;

c02_0472:;

endsub:;
}

// MatchPredicate workspace at ws+3240 length ws+48
void f244_MatchPredicate(i1* p5163 /* matches */, i8 p5164 /* n */, i1 p5165 /* rule */) {
	*(i1*)(intptr_t)(ws+3240) = p5165; /*rule */
	*(i8*)(intptr_t)(ws+3248) = p5164; /*n */

	i8 v5166 = (i8)(intptr_t)(ws+3248);
	i8 v5167 = *(i8*)(intptr_t)v5166;
	i8 v5168 = (i8)+24;
	i8 v5169 = (i8)(intptr_t)(ws+3264);

void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v5169, v5168, v5167);

	i1 v5170 = (i1)+0;
	i8 v5171 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5171 = v5170;

	i8 v5172 = (i8)(intptr_t)(ws+3240);
	i1 v5173 = *(i1*)(intptr_t)v5172;

c02_0478:;


endsub:;
	*p5163 = *(i1*)(intptr_t)(ws+3256);
}

// emit_0 workspace at ws+3248 length ws+0
void f246_emit_0(void) {

	i8 v5223 = (i8)(intptr_t)(ws+3168);
	i8 v5224 = *(i8*)(intptr_t)v5223;
	i8 v5225 = v5224+(+16);
	i8 v5226 = *(i8*)(intptr_t)v5225;
	i8 v5227 = (i8)(intptr_t)(ws+3192);
	i8 v5228 = *(i8*)(intptr_t)v5227;
	i4 v5229 = *(i4*)(intptr_t)v5228;
	i8 v5230 = (i8)(intptr_t)(ws+3208);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i4 v5232 = *(i4*)(intptr_t)v5231;

void f238_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);
	f238_BranchConstant(v5232, v5229, v5226);

endsub:;
}
const i1 c02_s00b8[] = { 0x2b,0 };

// emit_1 workspace at ws+3248 length ws+0
void f247_emit_1(void) {

	i1 v5233 = (i1)+1;
	i8 v5234 = (i8)(intptr_t)c02_s00b8;
	i8 v5235 = (i8)(intptr_t)(ws+3208);
	i8 v5236 = *(i8*)(intptr_t)v5235;
	i4 v5237 = *(i4*)(intptr_t)v5236;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5237, v5234, v5233);

endsub:;
}
const i1 c02_s00b9[] = { 0x2b,0 };

// emit_2 workspace at ws+3248 length ws+0
void f248_emit_2(void) {

	i1 v5238 = (i1)+2;
	i8 v5239 = (i8)(intptr_t)c02_s00b9;
	i8 v5240 = (i8)(intptr_t)(ws+3208);
	i8 v5241 = *(i8*)(intptr_t)v5240;
	i4 v5242 = *(i4*)(intptr_t)v5241;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5242, v5239, v5238);

endsub:;
}
const i1 c02_s00ba[] = { 0x2b,0 };

// emit_3 workspace at ws+3248 length ws+0
void f249_emit_3(void) {

	i1 v5243 = (i1)+4;
	i8 v5244 = (i8)(intptr_t)c02_s00ba;
	i8 v5245 = (i8)(intptr_t)(ws+3208);
	i8 v5246 = *(i8*)(intptr_t)v5245;
	i4 v5247 = *(i4*)(intptr_t)v5246;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5247, v5244, v5243);

endsub:;
}
const i1 c02_s00bb[] = { 0x2b,0 };

// emit_4 workspace at ws+3248 length ws+0
void f250_emit_4(void) {

	i1 v5248 = (i1)+8;
	i8 v5249 = (i8)(intptr_t)c02_s00bb;
	i8 v5250 = (i8)(intptr_t)(ws+3208);
	i8 v5251 = *(i8*)(intptr_t)v5250;
	i4 v5252 = *(i4*)(intptr_t)v5251;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5252, v5249, v5248);

endsub:;
}
const i1 c02_s00bc[] = { 0x2d,0 };

// emit_5 workspace at ws+3248 length ws+0
void f251_emit_5(void) {

	i1 v5253 = (i1)+1;
	i8 v5254 = (i8)(intptr_t)c02_s00bc;
	i8 v5255 = (i8)(intptr_t)(ws+3208);
	i8 v5256 = *(i8*)(intptr_t)v5255;
	i4 v5257 = *(i4*)(intptr_t)v5256;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5257, v5254, v5253);

endsub:;
}
const i1 c02_s00bd[] = { 0x2d,0 };

// emit_6 workspace at ws+3248 length ws+0
void f252_emit_6(void) {

	i1 v5258 = (i1)+2;
	i8 v5259 = (i8)(intptr_t)c02_s00bd;
	i8 v5260 = (i8)(intptr_t)(ws+3208);
	i8 v5261 = *(i8*)(intptr_t)v5260;
	i4 v5262 = *(i4*)(intptr_t)v5261;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5262, v5259, v5258);

endsub:;
}
const i1 c02_s00be[] = { 0x2d,0 };

// emit_7 workspace at ws+3248 length ws+0
void f253_emit_7(void) {

	i1 v5263 = (i1)+4;
	i8 v5264 = (i8)(intptr_t)c02_s00be;
	i8 v5265 = (i8)(intptr_t)(ws+3208);
	i8 v5266 = *(i8*)(intptr_t)v5265;
	i4 v5267 = *(i4*)(intptr_t)v5266;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5267, v5264, v5263);

endsub:;
}
const i1 c02_s00bf[] = { 0x2d,0 };

// emit_8 workspace at ws+3248 length ws+0
void f254_emit_8(void) {

	i1 v5268 = (i1)+8;
	i8 v5269 = (i8)(intptr_t)c02_s00bf;
	i8 v5270 = (i8)(intptr_t)(ws+3208);
	i8 v5271 = *(i8*)(intptr_t)v5270;
	i4 v5272 = *(i4*)(intptr_t)v5271;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5272, v5269, v5268);

endsub:;
}
const i1 c02_s00c0[] = { 0x2a,0 };

// emit_9 workspace at ws+3248 length ws+0
void f255_emit_9(void) {

	i1 v5273 = (i1)+1;
	i8 v5274 = (i8)(intptr_t)c02_s00c0;
	i8 v5275 = (i8)(intptr_t)(ws+3208);
	i8 v5276 = *(i8*)(intptr_t)v5275;
	i4 v5277 = *(i4*)(intptr_t)v5276;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5277, v5274, v5273);

endsub:;
}
const i1 c02_s00c1[] = { 0x2a,0 };

// emit_10 workspace at ws+3248 length ws+0
void f256_emit_10(void) {

	i1 v5278 = (i1)+2;
	i8 v5279 = (i8)(intptr_t)c02_s00c1;
	i8 v5280 = (i8)(intptr_t)(ws+3208);
	i8 v5281 = *(i8*)(intptr_t)v5280;
	i4 v5282 = *(i4*)(intptr_t)v5281;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5282, v5279, v5278);

endsub:;
}
const i1 c02_s00c2[] = { 0x2a,0 };

// emit_11 workspace at ws+3248 length ws+0
void f257_emit_11(void) {

	i1 v5283 = (i1)+4;
	i8 v5284 = (i8)(intptr_t)c02_s00c2;
	i8 v5285 = (i8)(intptr_t)(ws+3208);
	i8 v5286 = *(i8*)(intptr_t)v5285;
	i4 v5287 = *(i4*)(intptr_t)v5286;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5287, v5284, v5283);

endsub:;
}
const i1 c02_s00c3[] = { 0x2a,0 };

// emit_12 workspace at ws+3248 length ws+0
void f258_emit_12(void) {

	i1 v5288 = (i1)+8;
	i8 v5289 = (i8)(intptr_t)c02_s00c3;
	i8 v5290 = (i8)(intptr_t)(ws+3208);
	i8 v5291 = *(i8*)(intptr_t)v5290;
	i4 v5292 = *(i4*)(intptr_t)v5291;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5292, v5289, v5288);

endsub:;
}
const i1 c02_s00c4[] = { 0x2f,0 };

// emit_13 workspace at ws+3248 length ws+0
void f259_emit_13(void) {

	i1 v5293 = (i1)+1;
	i8 v5294 = (i8)(intptr_t)c02_s00c4;
	i8 v5295 = (i8)(intptr_t)(ws+3208);
	i8 v5296 = *(i8*)(intptr_t)v5295;
	i4 v5297 = *(i4*)(intptr_t)v5296;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5297, v5294, v5293);

endsub:;
}
const i1 c02_s00c5[] = { 0x2f,0 };

// emit_14 workspace at ws+3248 length ws+0
void f260_emit_14(void) {

	i1 v5298 = (i1)+2;
	i8 v5299 = (i8)(intptr_t)c02_s00c5;
	i8 v5300 = (i8)(intptr_t)(ws+3208);
	i8 v5301 = *(i8*)(intptr_t)v5300;
	i4 v5302 = *(i4*)(intptr_t)v5301;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5302, v5299, v5298);

endsub:;
}
const i1 c02_s00c6[] = { 0x2f,0 };

// emit_15 workspace at ws+3248 length ws+0
void f261_emit_15(void) {

	i1 v5303 = (i1)+4;
	i8 v5304 = (i8)(intptr_t)c02_s00c6;
	i8 v5305 = (i8)(intptr_t)(ws+3208);
	i8 v5306 = *(i8*)(intptr_t)v5305;
	i4 v5307 = *(i4*)(intptr_t)v5306;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5307, v5304, v5303);

endsub:;
}
const i1 c02_s00c7[] = { 0x2f,0 };

// emit_16 workspace at ws+3248 length ws+0
void f262_emit_16(void) {

	i1 v5308 = (i1)+8;
	i8 v5309 = (i8)(intptr_t)c02_s00c7;
	i8 v5310 = (i8)(intptr_t)(ws+3208);
	i8 v5311 = *(i8*)(intptr_t)v5310;
	i4 v5312 = *(i4*)(intptr_t)v5311;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5312, v5309, v5308);

endsub:;
}
const i1 c02_s00c8[] = { 0x25,0 };

// emit_17 workspace at ws+3248 length ws+0
void f263_emit_17(void) {

	i1 v5313 = (i1)+1;
	i8 v5314 = (i8)(intptr_t)c02_s00c8;
	i8 v5315 = (i8)(intptr_t)(ws+3208);
	i8 v5316 = *(i8*)(intptr_t)v5315;
	i4 v5317 = *(i4*)(intptr_t)v5316;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5317, v5314, v5313);

endsub:;
}
const i1 c02_s00c9[] = { 0x25,0 };

// emit_18 workspace at ws+3248 length ws+0
void f264_emit_18(void) {

	i1 v5318 = (i1)+2;
	i8 v5319 = (i8)(intptr_t)c02_s00c9;
	i8 v5320 = (i8)(intptr_t)(ws+3208);
	i8 v5321 = *(i8*)(intptr_t)v5320;
	i4 v5322 = *(i4*)(intptr_t)v5321;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5322, v5319, v5318);

endsub:;
}
const i1 c02_s00ca[] = { 0x25,0 };

// emit_19 workspace at ws+3248 length ws+0
void f265_emit_19(void) {

	i1 v5323 = (i1)+4;
	i8 v5324 = (i8)(intptr_t)c02_s00ca;
	i8 v5325 = (i8)(intptr_t)(ws+3208);
	i8 v5326 = *(i8*)(intptr_t)v5325;
	i4 v5327 = *(i4*)(intptr_t)v5326;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5327, v5324, v5323);

endsub:;
}
const i1 c02_s00cb[] = { 0x25,0 };

// emit_20 workspace at ws+3248 length ws+0
void f266_emit_20(void) {

	i1 v5328 = (i1)+8;
	i8 v5329 = (i8)(intptr_t)c02_s00cb;
	i8 v5330 = (i8)(intptr_t)(ws+3208);
	i8 v5331 = *(i8*)(intptr_t)v5330;
	i4 v5332 = *(i4*)(intptr_t)v5331;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5332, v5329, v5328);

endsub:;
}
const i1 c02_s00cc[] = { 0x2f,0 };

// emit_21 workspace at ws+3248 length ws+0
void f267_emit_21(void) {

	i1 v5333 = (i1)+1;
	i8 v5334 = (i8)(intptr_t)c02_s00cc;
	i8 v5335 = (i8)(intptr_t)(ws+3208);
	i8 v5336 = *(i8*)(intptr_t)v5335;
	i4 v5337 = *(i4*)(intptr_t)v5336;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5337, v5334, v5333);

endsub:;
}
const i1 c02_s00cd[] = { 0x2f,0 };

// emit_22 workspace at ws+3248 length ws+0
void f268_emit_22(void) {

	i1 v5338 = (i1)+2;
	i8 v5339 = (i8)(intptr_t)c02_s00cd;
	i8 v5340 = (i8)(intptr_t)(ws+3208);
	i8 v5341 = *(i8*)(intptr_t)v5340;
	i4 v5342 = *(i4*)(intptr_t)v5341;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5342, v5339, v5338);

endsub:;
}
const i1 c02_s00ce[] = { 0x2f,0 };

// emit_23 workspace at ws+3248 length ws+0
void f269_emit_23(void) {

	i1 v5343 = (i1)+4;
	i8 v5344 = (i8)(intptr_t)c02_s00ce;
	i8 v5345 = (i8)(intptr_t)(ws+3208);
	i8 v5346 = *(i8*)(intptr_t)v5345;
	i4 v5347 = *(i4*)(intptr_t)v5346;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5347, v5344, v5343);

endsub:;
}
const i1 c02_s00cf[] = { 0x2f,0 };

// emit_24 workspace at ws+3248 length ws+0
void f270_emit_24(void) {

	i1 v5348 = (i1)+8;
	i8 v5349 = (i8)(intptr_t)c02_s00cf;
	i8 v5350 = (i8)(intptr_t)(ws+3208);
	i8 v5351 = *(i8*)(intptr_t)v5350;
	i4 v5352 = *(i4*)(intptr_t)v5351;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5352, v5349, v5348);

endsub:;
}
const i1 c02_s00d0[] = { 0x25,0 };

// emit_25 workspace at ws+3248 length ws+0
void f271_emit_25(void) {

	i1 v5353 = (i1)+1;
	i8 v5354 = (i8)(intptr_t)c02_s00d0;
	i8 v5355 = (i8)(intptr_t)(ws+3208);
	i8 v5356 = *(i8*)(intptr_t)v5355;
	i4 v5357 = *(i4*)(intptr_t)v5356;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5357, v5354, v5353);

endsub:;
}
const i1 c02_s00d1[] = { 0x25,0 };

// emit_26 workspace at ws+3248 length ws+0
void f272_emit_26(void) {

	i1 v5358 = (i1)+2;
	i8 v5359 = (i8)(intptr_t)c02_s00d1;
	i8 v5360 = (i8)(intptr_t)(ws+3208);
	i8 v5361 = *(i8*)(intptr_t)v5360;
	i4 v5362 = *(i4*)(intptr_t)v5361;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5362, v5359, v5358);

endsub:;
}
const i1 c02_s00d2[] = { 0x25,0 };

// emit_27 workspace at ws+3248 length ws+0
void f273_emit_27(void) {

	i1 v5363 = (i1)+4;
	i8 v5364 = (i8)(intptr_t)c02_s00d2;
	i8 v5365 = (i8)(intptr_t)(ws+3208);
	i8 v5366 = *(i8*)(intptr_t)v5365;
	i4 v5367 = *(i4*)(intptr_t)v5366;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5367, v5364, v5363);

endsub:;
}
const i1 c02_s00d3[] = { 0x25,0 };

// emit_28 workspace at ws+3248 length ws+0
void f274_emit_28(void) {

	i1 v5368 = (i1)+8;
	i8 v5369 = (i8)(intptr_t)c02_s00d3;
	i8 v5370 = (i8)(intptr_t)(ws+3208);
	i8 v5371 = *(i8*)(intptr_t)v5370;
	i4 v5372 = *(i4*)(intptr_t)v5371;

void f233_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f233_Op2VCSigned(v5372, v5369, v5368);

endsub:;
}
const i1 c02_s00d4[] = { 0x26,0 };

// emit_29 workspace at ws+3248 length ws+0
void f275_emit_29(void) {

	i1 v5373 = (i1)+1;
	i8 v5374 = (i8)(intptr_t)c02_s00d4;
	i8 v5375 = (i8)(intptr_t)(ws+3208);
	i8 v5376 = *(i8*)(intptr_t)v5375;
	i4 v5377 = *(i4*)(intptr_t)v5376;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5377, v5374, v5373);

endsub:;
}
const i1 c02_s00d5[] = { 0x26,0 };

// emit_30 workspace at ws+3248 length ws+0
void f276_emit_30(void) {

	i1 v5378 = (i1)+2;
	i8 v5379 = (i8)(intptr_t)c02_s00d5;
	i8 v5380 = (i8)(intptr_t)(ws+3208);
	i8 v5381 = *(i8*)(intptr_t)v5380;
	i4 v5382 = *(i4*)(intptr_t)v5381;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5382, v5379, v5378);

endsub:;
}
const i1 c02_s00d6[] = { 0x26,0 };

// emit_31 workspace at ws+3248 length ws+0
void f277_emit_31(void) {

	i1 v5383 = (i1)+4;
	i8 v5384 = (i8)(intptr_t)c02_s00d6;
	i8 v5385 = (i8)(intptr_t)(ws+3208);
	i8 v5386 = *(i8*)(intptr_t)v5385;
	i4 v5387 = *(i4*)(intptr_t)v5386;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5387, v5384, v5383);

endsub:;
}
const i1 c02_s00d7[] = { 0x26,0 };

// emit_32 workspace at ws+3248 length ws+0
void f278_emit_32(void) {

	i1 v5388 = (i1)+8;
	i8 v5389 = (i8)(intptr_t)c02_s00d7;
	i8 v5390 = (i8)(intptr_t)(ws+3208);
	i8 v5391 = *(i8*)(intptr_t)v5390;
	i4 v5392 = *(i4*)(intptr_t)v5391;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5392, v5389, v5388);

endsub:;
}
const i1 c02_s00d8[] = { 0x7c,0 };

// emit_33 workspace at ws+3248 length ws+0
void f279_emit_33(void) {

	i1 v5393 = (i1)+1;
	i8 v5394 = (i8)(intptr_t)c02_s00d8;
	i8 v5395 = (i8)(intptr_t)(ws+3208);
	i8 v5396 = *(i8*)(intptr_t)v5395;
	i4 v5397 = *(i4*)(intptr_t)v5396;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5397, v5394, v5393);

endsub:;
}
const i1 c02_s00d9[] = { 0x7c,0 };

// emit_34 workspace at ws+3248 length ws+0
void f280_emit_34(void) {

	i1 v5398 = (i1)+2;
	i8 v5399 = (i8)(intptr_t)c02_s00d9;
	i8 v5400 = (i8)(intptr_t)(ws+3208);
	i8 v5401 = *(i8*)(intptr_t)v5400;
	i4 v5402 = *(i4*)(intptr_t)v5401;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5402, v5399, v5398);

endsub:;
}
const i1 c02_s00da[] = { 0x7c,0 };

// emit_35 workspace at ws+3248 length ws+0
void f281_emit_35(void) {

	i1 v5403 = (i1)+4;
	i8 v5404 = (i8)(intptr_t)c02_s00da;
	i8 v5405 = (i8)(intptr_t)(ws+3208);
	i8 v5406 = *(i8*)(intptr_t)v5405;
	i4 v5407 = *(i4*)(intptr_t)v5406;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5407, v5404, v5403);

endsub:;
}
const i1 c02_s00db[] = { 0x7c,0 };

// emit_36 workspace at ws+3248 length ws+0
void f282_emit_36(void) {

	i1 v5408 = (i1)+8;
	i8 v5409 = (i8)(intptr_t)c02_s00db;
	i8 v5410 = (i8)(intptr_t)(ws+3208);
	i8 v5411 = *(i8*)(intptr_t)v5410;
	i4 v5412 = *(i4*)(intptr_t)v5411;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5412, v5409, v5408);

endsub:;
}
const i1 c02_s00dc[] = { 0x5e,0 };

// emit_37 workspace at ws+3248 length ws+0
void f283_emit_37(void) {

	i1 v5413 = (i1)+1;
	i8 v5414 = (i8)(intptr_t)c02_s00dc;
	i8 v5415 = (i8)(intptr_t)(ws+3208);
	i8 v5416 = *(i8*)(intptr_t)v5415;
	i4 v5417 = *(i4*)(intptr_t)v5416;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5417, v5414, v5413);

endsub:;
}
const i1 c02_s00dd[] = { 0x5e,0 };

// emit_38 workspace at ws+3248 length ws+0
void f284_emit_38(void) {

	i1 v5418 = (i1)+2;
	i8 v5419 = (i8)(intptr_t)c02_s00dd;
	i8 v5420 = (i8)(intptr_t)(ws+3208);
	i8 v5421 = *(i8*)(intptr_t)v5420;
	i4 v5422 = *(i4*)(intptr_t)v5421;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5422, v5419, v5418);

endsub:;
}
const i1 c02_s00de[] = { 0x5e,0 };

// emit_39 workspace at ws+3248 length ws+0
void f285_emit_39(void) {

	i1 v5423 = (i1)+4;
	i8 v5424 = (i8)(intptr_t)c02_s00de;
	i8 v5425 = (i8)(intptr_t)(ws+3208);
	i8 v5426 = *(i8*)(intptr_t)v5425;
	i4 v5427 = *(i4*)(intptr_t)v5426;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5427, v5424, v5423);

endsub:;
}
const i1 c02_s00df[] = { 0x5e,0 };

// emit_40 workspace at ws+3248 length ws+0
void f286_emit_40(void) {

	i1 v5428 = (i1)+8;
	i8 v5429 = (i8)(intptr_t)c02_s00df;
	i8 v5430 = (i8)(intptr_t)(ws+3208);
	i8 v5431 = *(i8*)(intptr_t)v5430;
	i4 v5432 = *(i4*)(intptr_t)v5431;

void f231_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f231_Op2VC(v5432, v5429, v5428);

endsub:;
}
const i1 c02_s00e0[] = { 0x3a,0x3b,0x0a,0 };

// emit_43 workspace at ws+3248 length ws+0
void f287_emit_43(void) {

	i8 v5433 = (i8)(intptr_t)(ws+3176);
	i8 v5434 = *(i8*)(intptr_t)v5433;
	i2 v5435 = *(i2*)(intptr_t)v5434;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v5435);

	i8 v5436 = (i8)(intptr_t)c02_s00e0;

void f158_E(i8 /* text */);
	f158_E(v5436);

endsub:;
}
const i1 c02_s00e1[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00e2[] = { 0x3b,0x0a,0 };

// emit_44 workspace at ws+3248 length ws+0
void f288_emit_44(void) {

	i8 v5437 = (i8)(intptr_t)c02_s00e1;

void f158_E(i8 /* text */);
	f158_E(v5437);

	i8 v5438 = (i8)(intptr_t)(ws+3176);
	i8 v5439 = *(i8*)(intptr_t)v5438;
	i2 v5440 = *(i2*)(intptr_t)v5439;

void f169_E_labelref(i2 /* labelid */);
	f169_E_labelref(v5440);

	i8 v5441 = (i8)(intptr_t)c02_s00e2;

void f158_E(i8 /* text */);
	f158_E(v5441);

endsub:;
}
const i1 c02_s00e3[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };

// emit_45 workspace at ws+3248 length ws+0
void f289_emit_45(void) {

	i8 v5442 = (i8)(intptr_t)c02_s00e3;

void f158_E(i8 /* text */);
	f158_E(v5442);

endsub:;
}
const i1 c02_s00e4[] = { 0x0a,0x2f,0x2f,0x20,0 };
const i1 c02_s00e5[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
const i1 c02_s00e6[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
const i1 c02_s00e7[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
const i1 c02_s00e8[] = { 0x28,0 };
const i1 c02_s00e9[] = { 0x2c,0x20,0 };

// comma workspace at ws+3272 length ws+0
void f291_comma(void) {

	i8 v5477 = (i8)(intptr_t)(ws+3248);
	i1 v5478 = *(i1*)(intptr_t)v5477;
	i1 v5479 = (i1)+0;
	if (v5478==v5479) goto c02_04b5; else goto c02_04b6;

c02_04b5:;

	i8 v5480 = (i8)(intptr_t)c02_s00e9;

void f158_E(i8 /* text */);
	f158_E(v5480);

	goto c02_04b2;

c02_04b6:;

c02_04b2:;

	i1 v5481 = (i1)+0;
	i8 v5482 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5482 = v5481;

endsub:;
}
const i1 c02_s00ea[] = { 0x69,0 };
const i1 c02_s00eb[] = { 0x2a,0x20,0x70,0 };
const i1 c02_s00ec[] = { 0x20,0x2f,0x2a,0x20,0 };
const i1 c02_s00ed[] = { 0x20,0x2a,0x2f,0 };
const i1 c02_s00ee[] = { 0x69,0 };
const i1 c02_s00ef[] = { 0x20,0x70,0 };
const i1 c02_s00f0[] = { 0x20,0x2f,0x2a,0x20,0 };
const i1 c02_s00f1[] = { 0x20,0x2a,0x2f,0 };
const i1 c02_s00f2[] = { 0x76,0x6f,0x69,0x64,0 };
const i1 c02_s00f3[] = { 0x29,0x20,0x7b,0x0a,0 };
const i1 c02_s00f4[] = { 0x09,0x2a,0x28,0x69,0 };
const i1 c02_s00f5[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s00f6[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
const i1 c02_s00f7[] = { 0x3b,0x20,0x2f,0x2a,0 };
const i1 c02_s00f8[] = { 0x20,0x2a,0x2f,0x0a,0 };

// emit_46 workspace at ws+3248 length ws+18
void f290_emit_46(void) {


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v5443 = (i8)(intptr_t)(ws+3176);
	i8 v5444 = *(i8*)(intptr_t)v5443;
	i8 v5445 = *(i8*)(intptr_t)v5444;
	i8 v5446 = v5445+(+56);
	i2 v5447 = *(i2*)(intptr_t)v5446;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v5447);

	i8 v5448 = (i8)(intptr_t)c02_s00e4;

void f158_E(i8 /* text */);
	f158_E(v5448);

	i8 v5449 = (i8)(intptr_t)(ws+3176);
	i8 v5450 = *(i8*)(intptr_t)v5449;
	i8 v5451 = *(i8*)(intptr_t)v5450;
	i8 v5452 = *(i8*)(intptr_t)v5451;

void f158_E(i8 /* text */);
	f158_E(v5452);

	i8 v5453 = (i8)(intptr_t)c02_s00e5;

void f158_E(i8 /* text */);
	f158_E(v5453);

	i1 v5454 = (i1)+2;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v5454);

	i8 v5455 = (i8)(intptr_t)(ws+3176);
	i8 v5456 = *(i8*)(intptr_t)v5455;
	i8 v5457 = *(i8*)(intptr_t)v5456;
	i8 v5458 = v5457+(+56);
	i2 v5459 = *(i2*)(intptr_t)v5458;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v5459);

	i1 v5460 = (i1)+0;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v5460);

	i2 v5461 = (i2)+0;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v5461);

	i8 v5462 = (i8)(intptr_t)c02_s00e6;

void f158_E(i8 /* text */);
	f158_E(v5462);

	i1 v5463 = (i1)+5;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v5463);

	i8 v5464 = (i8)(intptr_t)(ws+3176);
	i8 v5465 = *(i8*)(intptr_t)v5464;
	i8 v5466 = *(i8*)(intptr_t)v5465;
	i8 v5467 = v5466+(+56);
	i2 v5468 = *(i2*)(intptr_t)v5467;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v5468);

	i1 v5469 = (i1)+0;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v5469);

	i8 v5470 = (i8)(intptr_t)c02_s00e7;

void f158_E(i8 /* text */);
	f158_E(v5470);

	i8 v5471 = (i8)(intptr_t)(ws+3176);
	i8 v5472 = *(i8*)(intptr_t)v5471;
	i8 v5473 = *(i8*)(intptr_t)v5472;

void f170_E_subref(i8 /* subr */);
	f170_E_subref(v5473);

	i8 v5474 = (i8)(intptr_t)c02_s00e8;

void f158_E(i8 /* text */);
	f158_E(v5474);

	i1 v5475 = (i1)+1;
	i8 v5476 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5476 = v5475;


	i1 v5483 = (i1)+0;
	i8 v5484 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5484 = v5483;

c02_04b9:;

	i8 v5485 = (i8)(intptr_t)(ws+3249);
	i1 v5486 = *(i1*)(intptr_t)v5485;
	i8 v5487 = (i8)(intptr_t)(ws+3176);
	i8 v5488 = *(i8*)(intptr_t)v5487;
	i8 v5489 = *(i8*)(intptr_t)v5488;
	i8 v5490 = v5489+(+89);
	i1 v5491 = *(i1*)(intptr_t)v5490;
	if (v5486==v5491) goto c02_04bc; else goto c02_04bb;

c02_04bb:;

	i8 v5492 = (i8)(intptr_t)(ws+3176);
	i8 v5493 = *(i8*)(intptr_t)v5492;
	i8 v5494 = *(i8*)(intptr_t)v5493;
	i8 v5495 = (i8)(intptr_t)(ws+3249);
	i1 v5496 = *(i1*)(intptr_t)v5495;

void f81_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5497;
	f81_GetOutputParameter(&v5497, v5496, v5494);
	i8 v5498 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5498 = v5497;


void f220_Push(i2* /* vid */);
	i2 v5499;
	f220_Push(&v5499);
	i8 v5500 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5500 = v5499;


void f291_comma(void);
	f291_comma();

	i8 v5501 = (i8)(intptr_t)c02_s00ea;

void f158_E(i8 /* text */);
	f158_E(v5501);

	i8 v5502 = (i8)(intptr_t)(ws+3256);
	i8 v5503 = *(i8*)(intptr_t)v5502;
	i8 v5504 = *(i8*)(intptr_t)v5503;
	i8 v5505 = v5504+(+42);
	i2 v5506 = *(i2*)(intptr_t)v5505;
	i1 v5507 = v5506;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5507);

	i8 v5508 = (i8)(intptr_t)c02_s00eb;

void f158_E(i8 /* text */);
	f158_E(v5508);

	i8 v5509 = (i8)(intptr_t)(ws+3264);
	i2 v5510 = *(i2*)(intptr_t)v5509;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5510);

	i8 v5511 = (i8)(intptr_t)c02_s00ec;

void f158_E(i8 /* text */);
	f158_E(v5511);

	i8 v5512 = (i8)(intptr_t)(ws+3256);
	i8 v5513 = *(i8*)(intptr_t)v5512;
	i8 v5514 = v5513+(+48);
	i8 v5515 = *(i8*)(intptr_t)v5514;

void f158_E(i8 /* text */);
	f158_E(v5515);

	i8 v5516 = (i8)(intptr_t)c02_s00ed;

void f158_E(i8 /* text */);
	f158_E(v5516);

	i8 v5517 = (i8)(intptr_t)(ws+3249);
	i1 v5518 = *(i1*)(intptr_t)v5517;
	i1 v5519 = v5518+(+1);
	i8 v5520 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5520 = v5519;

	goto c02_04b9;

c02_04bc:;

	i8 v5521 = (i8)(intptr_t)(ws+3176);
	i8 v5522 = *(i8*)(intptr_t)v5521;
	i8 v5523 = *(i8*)(intptr_t)v5522;
	i8 v5524 = v5523+(+88);
	i1 v5525 = *(i1*)(intptr_t)v5524;
	i8 v5526 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5526 = v5525;

c02_04bf:;

	i8 v5527 = (i8)(intptr_t)(ws+3249);
	i1 v5528 = *(i1*)(intptr_t)v5527;
	i1 v5529 = (i1)+0;
	if (v5528==v5529) goto c02_04c2; else goto c02_04c1;

c02_04c1:;

	i8 v5530 = (i8)(intptr_t)(ws+3249);
	i1 v5531 = *(i1*)(intptr_t)v5530;
	i1 v5532 = v5531+(-1);
	i8 v5533 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5533 = v5532;

	i8 v5534 = (i8)(intptr_t)(ws+3176);
	i8 v5535 = *(i8*)(intptr_t)v5534;
	i8 v5536 = *(i8*)(intptr_t)v5535;
	i8 v5537 = (i8)(intptr_t)(ws+3249);
	i1 v5538 = *(i1*)(intptr_t)v5537;

void f80_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5539;
	f80_GetInputParameter(&v5539, v5538, v5536);
	i8 v5540 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5540 = v5539;


void f220_Push(i2* /* vid */);
	i2 v5541;
	f220_Push(&v5541);
	i8 v5542 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5542 = v5541;


void f291_comma(void);
	f291_comma();

	i8 v5543 = (i8)(intptr_t)c02_s00ee;

void f158_E(i8 /* text */);
	f158_E(v5543);

	i8 v5544 = (i8)(intptr_t)(ws+3256);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = *(i8*)(intptr_t)v5545;
	i8 v5547 = v5546+(+42);
	i2 v5548 = *(i2*)(intptr_t)v5547;
	i1 v5549 = v5548;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5549);

	i8 v5550 = (i8)(intptr_t)c02_s00ef;

void f158_E(i8 /* text */);
	f158_E(v5550);

	i8 v5551 = (i8)(intptr_t)(ws+3264);
	i2 v5552 = *(i2*)(intptr_t)v5551;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5552);

	i8 v5553 = (i8)(intptr_t)c02_s00f0;

void f158_E(i8 /* text */);
	f158_E(v5553);

	i8 v5554 = (i8)(intptr_t)(ws+3256);
	i8 v5555 = *(i8*)(intptr_t)v5554;
	i8 v5556 = v5555+(+48);
	i8 v5557 = *(i8*)(intptr_t)v5556;

void f158_E(i8 /* text */);
	f158_E(v5557);

	i8 v5558 = (i8)(intptr_t)c02_s00f1;

void f158_E(i8 /* text */);
	f158_E(v5558);

	goto c02_04bf;

c02_04c2:;

	i8 v5559 = (i8)(intptr_t)(ws+3176);
	i8 v5560 = *(i8*)(intptr_t)v5559;
	i8 v5561 = *(i8*)(intptr_t)v5560;
	i8 v5562 = v5561+(+88);
	i1 v5563 = *(i1*)(intptr_t)v5562;
	i8 v5564 = (i8)(intptr_t)(ws+3176);
	i8 v5565 = *(i8*)(intptr_t)v5564;
	i8 v5566 = *(i8*)(intptr_t)v5565;
	i8 v5567 = v5566+(+89);
	i1 v5568 = *(i1*)(intptr_t)v5567;
	i1 v5569 = v5563+v5568;
	i1 v5570 = (i1)+0;
	if (v5569==v5570) goto c02_04c6; else goto c02_04c7;

c02_04c6:;

	i8 v5571 = (i8)(intptr_t)c02_s00f2;

void f158_E(i8 /* text */);
	f158_E(v5571);

	goto c02_04c3;

c02_04c7:;

c02_04c3:;

	i8 v5572 = (i8)(intptr_t)c02_s00f3;

void f158_E(i8 /* text */);
	f158_E(v5572);

	i1 v5573 = (i1)+0;
	i8 v5574 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5574 = v5573;

c02_04ca:;

	i8 v5575 = (i8)(intptr_t)(ws+3249);
	i1 v5576 = *(i1*)(intptr_t)v5575;
	i8 v5577 = (i8)(intptr_t)(ws+3176);
	i8 v5578 = *(i8*)(intptr_t)v5577;
	i8 v5579 = *(i8*)(intptr_t)v5578;
	i8 v5580 = v5579+(+88);
	i1 v5581 = *(i1*)(intptr_t)v5580;
	if (v5576==v5581) goto c02_04cd; else goto c02_04cc;

c02_04cc:;

	i8 v5582 = (i8)(intptr_t)(ws+3176);
	i8 v5583 = *(i8*)(intptr_t)v5582;
	i8 v5584 = *(i8*)(intptr_t)v5583;
	i8 v5585 = (i8)(intptr_t)(ws+3249);
	i1 v5586 = *(i1*)(intptr_t)v5585;

void f80_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5587;
	f80_GetInputParameter(&v5587, v5586, v5584);
	i8 v5588 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5588 = v5587;


void f222_Pop(i2* /* vid */);
	i2 v5589;
	f222_Pop(&v5589);
	i8 v5590 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5590 = v5589;

	i8 v5591 = (i8)(intptr_t)c02_s00f4;

void f158_E(i8 /* text */);
	f158_E(v5591);

	i8 v5592 = (i8)(intptr_t)(ws+3256);
	i8 v5593 = *(i8*)(intptr_t)v5592;
	i8 v5594 = *(i8*)(intptr_t)v5593;
	i8 v5595 = v5594+(+42);
	i2 v5596 = *(i2*)(intptr_t)v5595;
	i1 v5597 = v5596;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5597);

	i8 v5598 = (i8)(intptr_t)c02_s00f5;

void f158_E(i8 /* text */);
	f158_E(v5598);

	i8 v5599 = (i8)(intptr_t)(ws+3256);
	i8 v5600 = *(i8*)(intptr_t)v5599;
	i2 v5601 = (i2)+0;

void f216_E_symref(i2 /* off */, i8 /* sym */);
	f216_E_symref(v5601, v5600);

	i8 v5602 = (i8)(intptr_t)c02_s00f6;

void f158_E(i8 /* text */);
	f158_E(v5602);

	i8 v5603 = (i8)(intptr_t)(ws+3264);
	i2 v5604 = *(i2*)(intptr_t)v5603;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5604);

	i8 v5605 = (i8)(intptr_t)c02_s00f7;

void f158_E(i8 /* text */);
	f158_E(v5605);

	i8 v5606 = (i8)(intptr_t)(ws+3256);
	i8 v5607 = *(i8*)(intptr_t)v5606;
	i8 v5608 = v5607+(+48);
	i8 v5609 = *(i8*)(intptr_t)v5608;

void f158_E(i8 /* text */);
	f158_E(v5609);

	i8 v5610 = (i8)(intptr_t)c02_s00f8;

void f158_E(i8 /* text */);
	f158_E(v5610);

	i8 v5611 = (i8)(intptr_t)(ws+3249);
	i1 v5612 = *(i1*)(intptr_t)v5611;
	i1 v5613 = v5612+(+1);
	i8 v5614 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5614 = v5613;

	goto c02_04ca;

c02_04cd:;

endsub:;
}
const i1 c02_s00f9[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
const i1 c02_s00fa[] = { 0x09,0x2a,0x70,0 };
const i1 c02_s00fb[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
const i1 c02_s00fc[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s00fd[] = { 0x29,0x3b,0x0a,0 };
const i1 c02_s00fe[] = { 0x7d,0x0a,0 };

// emit_47 workspace at ws+3248 length ws+18
void f292_emit_47(void) {

	i8 v5615 = (i8)(intptr_t)c02_s00f9;

void f158_E(i8 /* text */);
	f158_E(v5615);

	i8 v5616 = (i8)(intptr_t)(ws+3176);
	i8 v5617 = *(i8*)(intptr_t)v5616;
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = v5618+(+89);
	i1 v5620 = *(i1*)(intptr_t)v5619;
	i8 v5621 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5621 = v5620;

c02_04d1:;

	i8 v5622 = (i8)(intptr_t)(ws+3248);
	i1 v5623 = *(i1*)(intptr_t)v5622;
	i1 v5624 = (i1)+0;
	if (v5623==v5624) goto c02_04d4; else goto c02_04d3;

c02_04d3:;

	i8 v5625 = (i8)(intptr_t)(ws+3248);
	i1 v5626 = *(i1*)(intptr_t)v5625;
	i1 v5627 = v5626+(-1);
	i8 v5628 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5628 = v5627;

	i8 v5629 = (i8)(intptr_t)(ws+3176);
	i8 v5630 = *(i8*)(intptr_t)v5629;
	i8 v5631 = *(i8*)(intptr_t)v5630;
	i8 v5632 = (i8)(intptr_t)(ws+3248);
	i1 v5633 = *(i1*)(intptr_t)v5632;

void f81_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5634;
	f81_GetOutputParameter(&v5634, v5633, v5631);
	i8 v5635 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5635 = v5634;


void f222_Pop(i2* /* vid */);
	i2 v5636;
	f222_Pop(&v5636);
	i8 v5637 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5637 = v5636;

	i8 v5638 = (i8)(intptr_t)c02_s00fa;

void f158_E(i8 /* text */);
	f158_E(v5638);

	i8 v5639 = (i8)(intptr_t)(ws+3264);
	i2 v5640 = *(i2*)(intptr_t)v5639;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5640);

	i8 v5641 = (i8)(intptr_t)c02_s00fb;

void f158_E(i8 /* text */);
	f158_E(v5641);

	i8 v5642 = (i8)(intptr_t)(ws+3256);
	i8 v5643 = *(i8*)(intptr_t)v5642;
	i8 v5644 = *(i8*)(intptr_t)v5643;
	i8 v5645 = v5644+(+42);
	i2 v5646 = *(i2*)(intptr_t)v5645;
	i1 v5647 = v5646;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v5647);

	i8 v5648 = (i8)(intptr_t)c02_s00fc;

void f158_E(i8 /* text */);
	f158_E(v5648);

	i8 v5649 = (i8)(intptr_t)(ws+3256);
	i8 v5650 = *(i8*)(intptr_t)v5649;
	i2 v5651 = (i2)+0;

void f216_E_symref(i2 /* off */, i8 /* sym */);
	f216_E_symref(v5651, v5650);

	i8 v5652 = (i8)(intptr_t)c02_s00fd;

void f158_E(i8 /* text */);
	f158_E(v5652);

	goto c02_04d1;

c02_04d4:;

	i8 v5653 = (i8)(intptr_t)c02_s00fe;

void f158_E(i8 /* text */);
	f158_E(v5653);

	i8 v5654 = (i8)(intptr_t)(ws+3176);
	i8 v5655 = *(i8*)(intptr_t)v5654;
	i8 v5656 = *(i8*)(intptr_t)v5655;
	i1 v5657 = (i1)+0;
	i8 v5658 = (i8)(intptr_t)(ws+3176);
	i8 v5659 = *(i8*)(intptr_t)v5658;
	i8 v5660 = *(i8*)(intptr_t)v5659;
	i8 v5661 = v5660+(+58);
	i2 v5662 = *(i2*)(intptr_t)v5661;

void f179_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);
	f179_EmitterDeclareWorkspace(v5662, v5657, v5656);

	i1 v5663 = (i1)+83;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v5663);

endsub:;
}

// emit_57 workspace at ws+3248 length ws+0
void f293_emit_57(void) {

	i8 v5664 = (i8)(intptr_t)(ws+3176);
	i8 v5665 = *(i8*)(intptr_t)v5664;
	i8 v5666 = *(i8*)(intptr_t)v5665;

void f225_Call(i8 /* subr */);
	f225_Call(v5666);

endsub:;
}

// emit_58 workspace at ws+3248 length ws+0
void f294_emit_58(void) {

	i8 v5667 = (i8)(intptr_t)(ws+3176);
	i8 v5668 = *(i8*)(intptr_t)v5667;
	i8 v5669 = *(i8*)(intptr_t)v5668;

void f225_Call(i8 /* subr */);
	f225_Call(v5669);

endsub:;
}

// emit_59 workspace at ws+3248 length ws+0
void f295_emit_59(void) {

	i8 v5670 = (i8)(intptr_t)(ws+3176);
	i8 v5671 = *(i8*)(intptr_t)v5670;
	i8 v5672 = *(i8*)(intptr_t)v5671;

void f225_Call(i8 /* subr */);
	f225_Call(v5672);

endsub:;
}

// emit_60 workspace at ws+3248 length ws+0
void f296_emit_60(void) {

	i8 v5673 = (i8)(intptr_t)(ws+3176);
	i8 v5674 = *(i8*)(intptr_t)v5673;
	i8 v5675 = *(i8*)(intptr_t)v5674;

void f225_Call(i8 /* subr */);
	f225_Call(v5675);

endsub:;
}

// emit_61 workspace at ws+3248 length ws+0
void f297_emit_61(void) {

	i8 v5676 = (i8)(intptr_t)(ws+3176);
	i8 v5677 = *(i8*)(intptr_t)v5676;
	i8 v5678 = *(i8*)(intptr_t)v5677;

void f225_Call(i8 /* subr */);
	f225_Call(v5678);

endsub:;
}

// emit_62 workspace at ws+3248 length ws+0
void f298_emit_62(void) {

	i1 v5679 = (i1)+1;
	i8 v5680 = (i8)(intptr_t)(ws+3176);
	i8 v5681 = *(i8*)(intptr_t)v5680;
	i4 v5682 = *(i4*)(intptr_t)v5681;

void f227_LoadConstant(i4 /* value */, i1 /* width */);
	f227_LoadConstant(v5682, v5679);

endsub:;
}

// emit_63 workspace at ws+3248 length ws+0
void f299_emit_63(void) {

	i1 v5683 = (i1)+2;
	i8 v5684 = (i8)(intptr_t)(ws+3176);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	i4 v5686 = *(i4*)(intptr_t)v5685;

void f227_LoadConstant(i4 /* value */, i1 /* width */);
	f227_LoadConstant(v5686, v5683);

endsub:;
}

// emit_64 workspace at ws+3248 length ws+0
void f300_emit_64(void) {

	i1 v5687 = (i1)+4;
	i8 v5688 = (i8)(intptr_t)(ws+3176);
	i8 v5689 = *(i8*)(intptr_t)v5688;
	i4 v5690 = *(i4*)(intptr_t)v5689;

void f227_LoadConstant(i4 /* value */, i1 /* width */);
	f227_LoadConstant(v5690, v5687);

endsub:;
}

// emit_65 workspace at ws+3248 length ws+0
void f301_emit_65(void) {

	i1 v5691 = (i1)+8;
	i8 v5692 = (i8)(intptr_t)(ws+3176);
	i8 v5693 = *(i8*)(intptr_t)v5692;
	i4 v5694 = *(i4*)(intptr_t)v5693;

void f227_LoadConstant(i4 /* value */, i1 /* width */);
	f227_LoadConstant(v5694, v5691);

endsub:;
}
const i1 c02_s00ff[] = { 0x09,0x69,0x38,0x20,0x76,0 };
const i1 c02_s0100[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s0101[] = { 0x29,0x3b,0x0a,0 };

// emit_66 workspace at ws+3248 length ws+2
void f302_emit_66(void) {


void f220_Push(i2* /* vid */);
	i2 v5695;
	f220_Push(&v5695);
	i8 v5696 = (i8)(intptr_t)(ws+3248);
	*(i2*)(intptr_t)v5696 = v5695;

	i8 v5697 = (i8)(intptr_t)c02_s00ff;

void f158_E(i8 /* text */);
	f158_E(v5697);

	i8 v5698 = (i8)(intptr_t)(ws+3248);
	i2 v5699 = *(i2*)(intptr_t)v5698;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v5699);

	i8 v5700 = (i8)(intptr_t)c02_s0100;

void f158_E(i8 /* text */);
	f158_E(v5700);

	i8 v5701 = (i8)(intptr_t)(ws+3176);
	i8 v5702 = *(i8*)(intptr_t)v5701;
	i8 v5703 = *(i8*)(intptr_t)v5702;
	i8 v5704 = (i8)(intptr_t)(ws+3176);
	i8 v5705 = *(i8*)(intptr_t)v5704;
	i8 v5706 = v5705+(+8);
	i2 v5707 = *(i2*)(intptr_t)v5706;

void f216_E_symref(i2 /* off */, i8 /* sym */);
	f216_E_symref(v5707, v5703);

	i8 v5708 = (i8)(intptr_t)c02_s0101;

void f158_E(i8 /* text */);
	f158_E(v5708);

endsub:;
}

// emit_67 workspace at ws+3248 length ws+0
void f303_emit_67(void) {

	i1 v5709 = (i1)+1;

void f228_StoreVV(i1 /* width */);
	f228_StoreVV(v5709);

endsub:;
}

// emit_68 workspace at ws+3248 length ws+0
void f304_emit_68(void) {

	i1 v5710 = (i1)+2;

void f228_StoreVV(i1 /* width */);
	f228_StoreVV(v5710);

endsub:;
}

// emit_69 workspace at ws+3248 length ws+0
void f305_emit_69(void) {

	i1 v5711 = (i1)+4;

void f228_StoreVV(i1 /* width */);
	f228_StoreVV(v5711);

endsub:;
}

// emit_70 workspace at ws+3248 length ws+0
void f306_emit_70(void) {

	i1 v5712 = (i1)+8;

void f228_StoreVV(i1 /* width */);
	f228_StoreVV(v5712);

endsub:;
}

// emit_71 workspace at ws+3248 length ws+0
void f307_emit_71(void) {

	i1 v5713 = (i1)+1;

void f229_LoadVV(i1 /* width */);
	f229_LoadVV(v5713);

endsub:;
}

// emit_72 workspace at ws+3248 length ws+0
void f308_emit_72(void) {

	i1 v5714 = (i1)+2;

void f229_LoadVV(i1 /* width */);
	f229_LoadVV(v5714);

endsub:;
}

// emit_73 workspace at ws+3248 length ws+0
void f309_emit_73(void) {

	i1 v5715 = (i1)+4;

void f229_LoadVV(i1 /* width */);
	f229_LoadVV(v5715);

endsub:;
}

// emit_74 workspace at ws+3248 length ws+0
void f310_emit_74(void) {

	i1 v5716 = (i1)+8;

void f229_LoadVV(i1 /* width */);
	f229_LoadVV(v5716);

endsub:;
}
const i1 c02_s0102[] = { 0x2b,0 };

// emit_75 workspace at ws+3248 length ws+0
void f311_emit_75(void) {

	i1 v5717 = (i1)+1;
	i8 v5718 = (i8)(intptr_t)c02_s0102;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5718, v5717);

endsub:;
}
const i1 c02_s0103[] = { 0x2b,0 };

// emit_76 workspace at ws+3248 length ws+0
void f312_emit_76(void) {

	i1 v5719 = (i1)+2;
	i8 v5720 = (i8)(intptr_t)c02_s0103;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5720, v5719);

endsub:;
}
const i1 c02_s0104[] = { 0x2b,0 };

// emit_77 workspace at ws+3248 length ws+0
void f313_emit_77(void) {

	i1 v5721 = (i1)+4;
	i8 v5722 = (i8)(intptr_t)c02_s0104;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5722, v5721);

endsub:;
}
const i1 c02_s0105[] = { 0x2b,0 };

// emit_78 workspace at ws+3248 length ws+0
void f314_emit_78(void) {

	i1 v5723 = (i1)+8;
	i8 v5724 = (i8)(intptr_t)c02_s0105;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5724, v5723);

endsub:;
}
const i1 c02_s0106[] = { 0x2d,0 };

// emit_79 workspace at ws+3248 length ws+0
void f315_emit_79(void) {

	i1 v5725 = (i1)+1;
	i8 v5726 = (i8)(intptr_t)c02_s0106;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5726, v5725);

endsub:;
}
const i1 c02_s0107[] = { 0x2d,0 };

// emit_80 workspace at ws+3248 length ws+0
void f316_emit_80(void) {

	i1 v5727 = (i1)+2;
	i8 v5728 = (i8)(intptr_t)c02_s0107;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5728, v5727);

endsub:;
}
const i1 c02_s0108[] = { 0x2d,0 };

// emit_81 workspace at ws+3248 length ws+0
void f317_emit_81(void) {

	i1 v5729 = (i1)+4;
	i8 v5730 = (i8)(intptr_t)c02_s0108;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5730, v5729);

endsub:;
}
const i1 c02_s0109[] = { 0x2d,0 };

// emit_82 workspace at ws+3248 length ws+0
void f318_emit_82(void) {

	i1 v5731 = (i1)+8;
	i8 v5732 = (i8)(intptr_t)c02_s0109;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5732, v5731);

endsub:;
}
const i1 c02_s010a[] = { 0x2a,0 };

// emit_83 workspace at ws+3248 length ws+0
void f319_emit_83(void) {

	i1 v5733 = (i1)+1;
	i8 v5734 = (i8)(intptr_t)c02_s010a;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5734, v5733);

endsub:;
}
const i1 c02_s010b[] = { 0x2a,0 };

// emit_84 workspace at ws+3248 length ws+0
void f320_emit_84(void) {

	i1 v5735 = (i1)+2;
	i8 v5736 = (i8)(intptr_t)c02_s010b;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5736, v5735);

endsub:;
}
const i1 c02_s010c[] = { 0x2a,0 };

// emit_85 workspace at ws+3248 length ws+0
void f321_emit_85(void) {

	i1 v5737 = (i1)+4;
	i8 v5738 = (i8)(intptr_t)c02_s010c;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5738, v5737);

endsub:;
}
const i1 c02_s010d[] = { 0x2a,0 };

// emit_86 workspace at ws+3248 length ws+0
void f322_emit_86(void) {

	i1 v5739 = (i1)+8;
	i8 v5740 = (i8)(intptr_t)c02_s010d;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5740, v5739);

endsub:;
}
const i1 c02_s010e[] = { 0x2f,0 };

// emit_87 workspace at ws+3248 length ws+0
void f323_emit_87(void) {

	i1 v5741 = (i1)+1;
	i8 v5742 = (i8)(intptr_t)c02_s010e;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5742, v5741);

endsub:;
}
const i1 c02_s010f[] = { 0x2f,0 };

// emit_88 workspace at ws+3248 length ws+0
void f324_emit_88(void) {

	i1 v5743 = (i1)+2;
	i8 v5744 = (i8)(intptr_t)c02_s010f;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5744, v5743);

endsub:;
}
const i1 c02_s0110[] = { 0x2f,0 };

// emit_89 workspace at ws+3248 length ws+0
void f325_emit_89(void) {

	i1 v5745 = (i1)+4;
	i8 v5746 = (i8)(intptr_t)c02_s0110;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5746, v5745);

endsub:;
}
const i1 c02_s0111[] = { 0x2f,0 };

// emit_90 workspace at ws+3248 length ws+0
void f326_emit_90(void) {

	i1 v5747 = (i1)+8;
	i8 v5748 = (i8)(intptr_t)c02_s0111;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5748, v5747);

endsub:;
}
const i1 c02_s0112[] = { 0x25,0 };

// emit_91 workspace at ws+3248 length ws+0
void f327_emit_91(void) {

	i1 v5749 = (i1)+1;
	i8 v5750 = (i8)(intptr_t)c02_s0112;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5750, v5749);

endsub:;
}
const i1 c02_s0113[] = { 0x25,0 };

// emit_92 workspace at ws+3248 length ws+0
void f328_emit_92(void) {

	i1 v5751 = (i1)+2;
	i8 v5752 = (i8)(intptr_t)c02_s0113;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5752, v5751);

endsub:;
}
const i1 c02_s0114[] = { 0x25,0 };

// emit_93 workspace at ws+3248 length ws+0
void f329_emit_93(void) {

	i1 v5753 = (i1)+4;
	i8 v5754 = (i8)(intptr_t)c02_s0114;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5754, v5753);

endsub:;
}
const i1 c02_s0115[] = { 0x25,0 };

// emit_94 workspace at ws+3248 length ws+0
void f330_emit_94(void) {

	i1 v5755 = (i1)+8;
	i8 v5756 = (i8)(intptr_t)c02_s0115;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5756, v5755);

endsub:;
}
const i1 c02_s0116[] = { 0x2f,0 };

// emit_95 workspace at ws+3248 length ws+0
void f331_emit_95(void) {

	i1 v5757 = (i1)+1;
	i8 v5758 = (i8)(intptr_t)c02_s0116;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5758, v5757);

endsub:;
}
const i1 c02_s0117[] = { 0x2f,0 };

// emit_96 workspace at ws+3248 length ws+0
void f332_emit_96(void) {

	i1 v5759 = (i1)+2;
	i8 v5760 = (i8)(intptr_t)c02_s0117;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5760, v5759);

endsub:;
}
const i1 c02_s0118[] = { 0x2f,0 };

// emit_97 workspace at ws+3248 length ws+0
void f333_emit_97(void) {

	i1 v5761 = (i1)+4;
	i8 v5762 = (i8)(intptr_t)c02_s0118;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5762, v5761);

endsub:;
}
const i1 c02_s0119[] = { 0x2f,0 };

// emit_98 workspace at ws+3248 length ws+0
void f334_emit_98(void) {

	i1 v5763 = (i1)+8;
	i8 v5764 = (i8)(intptr_t)c02_s0119;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5764, v5763);

endsub:;
}
const i1 c02_s011a[] = { 0x25,0 };

// emit_99 workspace at ws+3248 length ws+0
void f335_emit_99(void) {

	i1 v5765 = (i1)+1;
	i8 v5766 = (i8)(intptr_t)c02_s011a;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5766, v5765);

endsub:;
}
const i1 c02_s011b[] = { 0x25,0 };

// emit_100 workspace at ws+3248 length ws+0
void f336_emit_100(void) {

	i1 v5767 = (i1)+2;
	i8 v5768 = (i8)(intptr_t)c02_s011b;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5768, v5767);

endsub:;
}
const i1 c02_s011c[] = { 0x25,0 };

// emit_101 workspace at ws+3248 length ws+0
void f337_emit_101(void) {

	i1 v5769 = (i1)+4;
	i8 v5770 = (i8)(intptr_t)c02_s011c;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5770, v5769);

endsub:;
}
const i1 c02_s011d[] = { 0x25,0 };

// emit_102 workspace at ws+3248 length ws+0
void f338_emit_102(void) {

	i1 v5771 = (i1)+8;
	i8 v5772 = (i8)(intptr_t)c02_s011d;

void f232_Op2VVSigned(i8 /* op */, i1 /* width */);
	f232_Op2VVSigned(v5772, v5771);

endsub:;
}
const i1 c02_s011e[] = { 0x26,0 };

// emit_103 workspace at ws+3248 length ws+0
void f339_emit_103(void) {

	i1 v5773 = (i1)+1;
	i8 v5774 = (i8)(intptr_t)c02_s011e;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5774, v5773);

endsub:;
}
const i1 c02_s011f[] = { 0x26,0 };

// emit_104 workspace at ws+3248 length ws+0
void f340_emit_104(void) {

	i1 v5775 = (i1)+2;
	i8 v5776 = (i8)(intptr_t)c02_s011f;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5776, v5775);

endsub:;
}
const i1 c02_s0120[] = { 0x26,0 };

// emit_105 workspace at ws+3248 length ws+0
void f341_emit_105(void) {

	i1 v5777 = (i1)+4;
	i8 v5778 = (i8)(intptr_t)c02_s0120;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5778, v5777);

endsub:;
}
const i1 c02_s0121[] = { 0x26,0 };

// emit_106 workspace at ws+3248 length ws+0
void f342_emit_106(void) {

	i1 v5779 = (i1)+8;
	i8 v5780 = (i8)(intptr_t)c02_s0121;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5780, v5779);

endsub:;
}
const i1 c02_s0122[] = { 0x7c,0 };

// emit_107 workspace at ws+3248 length ws+0
void f343_emit_107(void) {

	i1 v5781 = (i1)+1;
	i8 v5782 = (i8)(intptr_t)c02_s0122;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5782, v5781);

endsub:;
}
const i1 c02_s0123[] = { 0x7c,0 };

// emit_108 workspace at ws+3248 length ws+0
void f344_emit_108(void) {

	i1 v5783 = (i1)+2;
	i8 v5784 = (i8)(intptr_t)c02_s0123;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5784, v5783);

endsub:;
}
const i1 c02_s0124[] = { 0x7c,0 };

// emit_109 workspace at ws+3248 length ws+0
void f345_emit_109(void) {

	i1 v5785 = (i1)+4;
	i8 v5786 = (i8)(intptr_t)c02_s0124;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5786, v5785);

endsub:;
}
const i1 c02_s0125[] = { 0x7c,0 };

// emit_110 workspace at ws+3248 length ws+0
void f346_emit_110(void) {

	i1 v5787 = (i1)+8;
	i8 v5788 = (i8)(intptr_t)c02_s0125;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5788, v5787);

endsub:;
}
const i1 c02_s0126[] = { 0x5e,0 };

// emit_111 workspace at ws+3248 length ws+0
void f347_emit_111(void) {

	i1 v5789 = (i1)+1;
	i8 v5790 = (i8)(intptr_t)c02_s0126;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5790, v5789);

endsub:;
}
const i1 c02_s0127[] = { 0x5e,0 };

// emit_112 workspace at ws+3248 length ws+0
void f348_emit_112(void) {

	i1 v5791 = (i1)+2;
	i8 v5792 = (i8)(intptr_t)c02_s0127;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5792, v5791);

endsub:;
}
const i1 c02_s0128[] = { 0x5e,0 };

// emit_113 workspace at ws+3248 length ws+0
void f349_emit_113(void) {

	i1 v5793 = (i1)+4;
	i8 v5794 = (i8)(intptr_t)c02_s0128;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5794, v5793);

endsub:;
}
const i1 c02_s0129[] = { 0x5e,0 };

// emit_114 workspace at ws+3248 length ws+0
void f350_emit_114(void) {

	i1 v5795 = (i1)+8;
	i8 v5796 = (i8)(intptr_t)c02_s0129;

void f230_Op2VV(i8 /* op */, i1 /* width */);
	f230_Op2VV(v5796, v5795);

endsub:;
}
const i1 c02_s012a[] = { 0x2d,0 };

// emit_115 workspace at ws+3248 length ws+0
void f351_emit_115(void) {

	i1 v5797 = (i1)+1;
	i8 v5798 = (i8)(intptr_t)c02_s012a;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5798, v5797);

endsub:;
}
const i1 c02_s012b[] = { 0x2d,0 };

// emit_116 workspace at ws+3248 length ws+0
void f352_emit_116(void) {

	i1 v5799 = (i1)+2;
	i8 v5800 = (i8)(intptr_t)c02_s012b;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5800, v5799);

endsub:;
}
const i1 c02_s012c[] = { 0x2d,0 };

// emit_117 workspace at ws+3248 length ws+0
void f353_emit_117(void) {

	i1 v5801 = (i1)+4;
	i8 v5802 = (i8)(intptr_t)c02_s012c;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5802, v5801);

endsub:;
}
const i1 c02_s012d[] = { 0x2d,0 };

// emit_118 workspace at ws+3248 length ws+0
void f354_emit_118(void) {

	i1 v5803 = (i1)+8;
	i8 v5804 = (i8)(intptr_t)c02_s012d;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5804, v5803);

endsub:;
}
const i1 c02_s012e[] = { 0x7e,0 };

// emit_119 workspace at ws+3248 length ws+0
void f355_emit_119(void) {

	i1 v5805 = (i1)+1;
	i8 v5806 = (i8)(intptr_t)c02_s012e;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5806, v5805);

endsub:;
}
const i1 c02_s012f[] = { 0x7e,0 };

// emit_120 workspace at ws+3248 length ws+0
void f356_emit_120(void) {

	i1 v5807 = (i1)+2;
	i8 v5808 = (i8)(intptr_t)c02_s012f;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5808, v5807);

endsub:;
}
const i1 c02_s0130[] = { 0x7e,0 };

// emit_121 workspace at ws+3248 length ws+0
void f357_emit_121(void) {

	i1 v5809 = (i1)+4;
	i8 v5810 = (i8)(intptr_t)c02_s0130;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5810, v5809);

endsub:;
}
const i1 c02_s0131[] = { 0x7e,0 };

// emit_122 workspace at ws+3248 length ws+0
void f358_emit_122(void) {

	i1 v5811 = (i1)+8;
	i8 v5812 = (i8)(intptr_t)c02_s0131;

void f234_Op1V(i8 /* op */, i1 /* width */);
	f234_Op1V(v5812, v5811);

endsub:;
}
const i1 c02_s0132[] = { 0x69,0x31,0 };
const i1 c02_s0133[] = { 0x3c,0x3c,0 };

// emit_123 workspace at ws+3248 length ws+0
void f359_emit_123(void) {

	i1 v5813 = (i1)+1;
	i8 v5814 = (i8)(intptr_t)c02_s0132;
	i8 v5815 = (i8)(intptr_t)c02_s0133;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5815, v5814, v5813);

endsub:;
}
const i1 c02_s0134[] = { 0x69,0x32,0 };
const i1 c02_s0135[] = { 0x3c,0x3c,0 };

// emit_124 workspace at ws+3248 length ws+0
void f360_emit_124(void) {

	i1 v5816 = (i1)+2;
	i8 v5817 = (i8)(intptr_t)c02_s0134;
	i8 v5818 = (i8)(intptr_t)c02_s0135;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5818, v5817, v5816);

endsub:;
}
const i1 c02_s0136[] = { 0x69,0x34,0 };
const i1 c02_s0137[] = { 0x3c,0x3c,0 };

// emit_125 workspace at ws+3248 length ws+0
void f361_emit_125(void) {

	i1 v5819 = (i1)+4;
	i8 v5820 = (i8)(intptr_t)c02_s0136;
	i8 v5821 = (i8)(intptr_t)c02_s0137;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5821, v5820, v5819);

endsub:;
}
const i1 c02_s0138[] = { 0x69,0x38,0 };
const i1 c02_s0139[] = { 0x3c,0x3c,0 };

// emit_126 workspace at ws+3248 length ws+0
void f362_emit_126(void) {

	i1 v5822 = (i1)+8;
	i8 v5823 = (i8)(intptr_t)c02_s0138;
	i8 v5824 = (i8)(intptr_t)c02_s0139;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5824, v5823, v5822);

endsub:;
}
const i1 c02_s013a[] = { 0x69,0x31,0 };
const i1 c02_s013b[] = { 0x3e,0x3e,0 };

// emit_127 workspace at ws+3248 length ws+0
void f363_emit_127(void) {

	i1 v5825 = (i1)+1;
	i8 v5826 = (i8)(intptr_t)c02_s013a;
	i8 v5827 = (i8)(intptr_t)c02_s013b;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5827, v5826, v5825);

endsub:;
}
const i1 c02_s013c[] = { 0x69,0x32,0 };
const i1 c02_s013d[] = { 0x3e,0x3e,0 };

// emit_128 workspace at ws+3248 length ws+0
void f364_emit_128(void) {

	i1 v5828 = (i1)+2;
	i8 v5829 = (i8)(intptr_t)c02_s013c;
	i8 v5830 = (i8)(intptr_t)c02_s013d;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5830, v5829, v5828);

endsub:;
}
const i1 c02_s013e[] = { 0x69,0x34,0 };
const i1 c02_s013f[] = { 0x3e,0x3e,0 };

// emit_129 workspace at ws+3248 length ws+0
void f365_emit_129(void) {

	i1 v5831 = (i1)+4;
	i8 v5832 = (i8)(intptr_t)c02_s013e;
	i8 v5833 = (i8)(intptr_t)c02_s013f;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5833, v5832, v5831);

endsub:;
}
const i1 c02_s0140[] = { 0x69,0x38,0 };
const i1 c02_s0141[] = { 0x3e,0x3e,0 };

// emit_130 workspace at ws+3248 length ws+0
void f366_emit_130(void) {

	i1 v5834 = (i1)+8;
	i8 v5835 = (i8)(intptr_t)c02_s0140;
	i8 v5836 = (i8)(intptr_t)c02_s0141;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5836, v5835, v5834);

endsub:;
}
const i1 c02_s0142[] = { 0x73,0x31,0 };
const i1 c02_s0143[] = { 0x3e,0x3e,0 };

// emit_131 workspace at ws+3248 length ws+0
void f367_emit_131(void) {

	i1 v5837 = (i1)+1;
	i8 v5838 = (i8)(intptr_t)c02_s0142;
	i8 v5839 = (i8)(intptr_t)c02_s0143;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5839, v5838, v5837);

endsub:;
}
const i1 c02_s0144[] = { 0x73,0x32,0 };
const i1 c02_s0145[] = { 0x3e,0x3e,0 };

// emit_132 workspace at ws+3248 length ws+0
void f368_emit_132(void) {

	i1 v5840 = (i1)+2;
	i8 v5841 = (i8)(intptr_t)c02_s0144;
	i8 v5842 = (i8)(intptr_t)c02_s0145;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5842, v5841, v5840);

endsub:;
}
const i1 c02_s0146[] = { 0x73,0x34,0 };
const i1 c02_s0147[] = { 0x3e,0x3e,0 };

// emit_133 workspace at ws+3248 length ws+0
void f369_emit_133(void) {

	i1 v5843 = (i1)+4;
	i8 v5844 = (i8)(intptr_t)c02_s0146;
	i8 v5845 = (i8)(intptr_t)c02_s0147;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5845, v5844, v5843);

endsub:;
}
const i1 c02_s0148[] = { 0x73,0x38,0 };
const i1 c02_s0149[] = { 0x3e,0x3e,0 };

// emit_134 workspace at ws+3248 length ws+0
void f370_emit_134(void) {

	i1 v5846 = (i1)+8;
	i8 v5847 = (i8)(intptr_t)c02_s0148;
	i8 v5848 = (i8)(intptr_t)c02_s0149;

void f235_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f235_Shift(v5848, v5847, v5846);

endsub:;
}
const i1 c02_s014a[] = { 0x3d,0x3d,0 };

// emit_135 workspace at ws+3248 length ws+0
void f371_emit_135(void) {

	i8 v5849 = (i8)(intptr_t)(ws+3168);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	i8 v5851 = v5850+(+16);
	i8 v5852 = *(i8*)(intptr_t)v5851;
	i8 v5853 = (i8)(intptr_t)c02_s014a;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5853, v5852);

endsub:;
}
const i1 c02_s014b[] = { 0x3d,0x3d,0 };

// emit_136 workspace at ws+3248 length ws+0
void f372_emit_136(void) {

	i8 v5854 = (i8)(intptr_t)(ws+3168);
	i8 v5855 = *(i8*)(intptr_t)v5854;
	i8 v5856 = v5855+(+16);
	i8 v5857 = *(i8*)(intptr_t)v5856;
	i8 v5858 = (i8)(intptr_t)c02_s014b;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5858, v5857);

endsub:;
}
const i1 c02_s014c[] = { 0x3d,0x3d,0 };

// emit_137 workspace at ws+3248 length ws+0
void f373_emit_137(void) {

	i8 v5859 = (i8)(intptr_t)(ws+3168);
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = v5860+(+16);
	i8 v5862 = *(i8*)(intptr_t)v5861;
	i8 v5863 = (i8)(intptr_t)c02_s014c;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5863, v5862);

endsub:;
}
const i1 c02_s014d[] = { 0x3d,0x3d,0 };

// emit_138 workspace at ws+3248 length ws+0
void f374_emit_138(void) {

	i8 v5864 = (i8)(intptr_t)(ws+3168);
	i8 v5865 = *(i8*)(intptr_t)v5864;
	i8 v5866 = v5865+(+16);
	i8 v5867 = *(i8*)(intptr_t)v5866;
	i8 v5868 = (i8)(intptr_t)c02_s014d;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5868, v5867);

endsub:;
}
const i1 c02_s014e[] = { 0x3c,0 };

// emit_139 workspace at ws+3248 length ws+0
void f375_emit_139(void) {

	i8 v5869 = (i8)(intptr_t)(ws+3168);
	i8 v5870 = *(i8*)(intptr_t)v5869;
	i8 v5871 = v5870+(+16);
	i8 v5872 = *(i8*)(intptr_t)v5871;
	i8 v5873 = (i8)(intptr_t)c02_s014e;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5873, v5872);

endsub:;
}
const i1 c02_s014f[] = { 0x3c,0 };

// emit_140 workspace at ws+3248 length ws+0
void f376_emit_140(void) {

	i8 v5874 = (i8)(intptr_t)(ws+3168);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = v5875+(+16);
	i8 v5877 = *(i8*)(intptr_t)v5876;
	i8 v5878 = (i8)(intptr_t)c02_s014f;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5878, v5877);

endsub:;
}
const i1 c02_s0150[] = { 0x3c,0 };

// emit_141 workspace at ws+3248 length ws+0
void f377_emit_141(void) {

	i8 v5879 = (i8)(intptr_t)(ws+3168);
	i8 v5880 = *(i8*)(intptr_t)v5879;
	i8 v5881 = v5880+(+16);
	i8 v5882 = *(i8*)(intptr_t)v5881;
	i8 v5883 = (i8)(intptr_t)c02_s0150;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5883, v5882);

endsub:;
}
const i1 c02_s0151[] = { 0x3c,0 };

// emit_142 workspace at ws+3248 length ws+0
void f378_emit_142(void) {

	i8 v5884 = (i8)(intptr_t)(ws+3168);
	i8 v5885 = *(i8*)(intptr_t)v5884;
	i8 v5886 = v5885+(+16);
	i8 v5887 = *(i8*)(intptr_t)v5886;
	i8 v5888 = (i8)(intptr_t)c02_s0151;

void f236_Branch(i8 /* op */, i8 /* node */);
	f236_Branch(v5888, v5887);

endsub:;
}
const i1 c02_s0152[] = { 0x3c,0 };

// emit_143 workspace at ws+3248 length ws+0
void f379_emit_143(void) {

	i8 v5889 = (i8)(intptr_t)(ws+3168);
	i8 v5890 = *(i8*)(intptr_t)v5889;
	i8 v5891 = v5890+(+16);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i1 v5893 = (i1)+1;
	i8 v5894 = (i8)(intptr_t)c02_s0152;

void f237_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f237_BranchSigned(v5894, v5893, v5892);

endsub:;
}
const i1 c02_s0153[] = { 0x3c,0 };

// emit_144 workspace at ws+3248 length ws+0
void f380_emit_144(void) {

	i8 v5895 = (i8)(intptr_t)(ws+3168);
	i8 v5896 = *(i8*)(intptr_t)v5895;
	i8 v5897 = v5896+(+16);
	i8 v5898 = *(i8*)(intptr_t)v5897;
	i1 v5899 = (i1)+2;
	i8 v5900 = (i8)(intptr_t)c02_s0153;

void f237_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f237_BranchSigned(v5900, v5899, v5898);

endsub:;
}
const i1 c02_s0154[] = { 0x3c,0 };

// emit_145 workspace at ws+3248 length ws+0
void f381_emit_145(void) {

	i8 v5901 = (i8)(intptr_t)(ws+3168);
	i8 v5902 = *(i8*)(intptr_t)v5901;
	i8 v5903 = v5902+(+16);
	i8 v5904 = *(i8*)(intptr_t)v5903;
	i1 v5905 = (i1)+4;
	i8 v5906 = (i8)(intptr_t)c02_s0154;

void f237_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f237_BranchSigned(v5906, v5905, v5904);

endsub:;
}
const i1 c02_s0155[] = { 0x3c,0 };

// emit_146 workspace at ws+3248 length ws+0
void f382_emit_146(void) {

	i8 v5907 = (i8)(intptr_t)(ws+3168);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = v5908+(+16);
	i8 v5910 = *(i8*)(intptr_t)v5909;
	i1 v5911 = (i1)+8;
	i8 v5912 = (i8)(intptr_t)c02_s0155;

void f237_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f237_BranchSigned(v5912, v5911, v5910);

endsub:;
}

// emit_151 workspace at ws+3248 length ws+0
void f383_emit_151(void) {

	i8 v5913 = (i8)(intptr_t)(ws+3176);
	i8 v5914 = *(i8*)(intptr_t)v5913;
	i4 v5915 = *(i4*)(intptr_t)v5914;
	i4 v5916 = v5915&(+255);
	i8 v5917 = (i8)(intptr_t)(ws+3176);
	i8 v5918 = *(i8*)(intptr_t)v5917;
	i8 v5919 = v5918+(+4);
	i2 v5920 = *(i2*)(intptr_t)v5919;

void f239_Whencase(i2 /* falselabel */, i4 /* value */);
	f239_Whencase(v5920, v5916);

endsub:;
}

// emit_152 workspace at ws+3248 length ws+0
void f384_emit_152(void) {

	i8 v5921 = (i8)(intptr_t)(ws+3176);
	i8 v5922 = *(i8*)(intptr_t)v5921;
	i4 v5923 = *(i4*)(intptr_t)v5922;
	i4 v5924 = v5923&(+65535);
	i8 v5925 = (i8)(intptr_t)(ws+3176);
	i8 v5926 = *(i8*)(intptr_t)v5925;
	i8 v5927 = v5926+(+4);
	i2 v5928 = *(i2*)(intptr_t)v5927;

void f239_Whencase(i2 /* falselabel */, i4 /* value */);
	f239_Whencase(v5928, v5924);

endsub:;
}

// emit_153 workspace at ws+3248 length ws+0
void f385_emit_153(void) {

	i8 v5929 = (i8)(intptr_t)(ws+3176);
	i8 v5930 = *(i8*)(intptr_t)v5929;
	i4 v5931 = *(i4*)(intptr_t)v5930;
	i4 v5932 = v5931&(-1);
	i8 v5933 = (i8)(intptr_t)(ws+3176);
	i8 v5934 = *(i8*)(intptr_t)v5933;
	i8 v5935 = v5934+(+4);
	i2 v5936 = *(i2*)(intptr_t)v5935;

void f239_Whencase(i2 /* falselabel */, i4 /* value */);
	f239_Whencase(v5936, v5932);

endsub:;
}

// emit_154 workspace at ws+3248 length ws+0
void f386_emit_154(void) {

	i8 v5937 = (i8)(intptr_t)(ws+3176);
	i8 v5938 = *(i8*)(intptr_t)v5937;
	i4 v5939 = *(i4*)(intptr_t)v5938;
	i8 v5940 = (i8)(intptr_t)(ws+3176);
	i8 v5941 = *(i8*)(intptr_t)v5940;
	i8 v5942 = v5941+(+4);
	i2 v5943 = *(i2*)(intptr_t)v5942;

void f239_Whencase(i2 /* falselabel */, i4 /* value */);
	f239_Whencase(v5943, v5939);

endsub:;
}

// emit_155 workspace at ws+3248 length ws+0
void f387_emit_155(void) {

	i8 v5944 = (i8)(intptr_t)(ws+1192);
	i1 v5945 = *(i1*)(intptr_t)v5944;
	i1 v5946 = v5945+(-1);
	i8 v5947 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5947 = v5946;

endsub:;
}

// emit_156 workspace at ws+3248 length ws+0
void f388_emit_156(void) {

	i8 v5948 = (i8)(intptr_t)(ws+1192);
	i1 v5949 = *(i1*)(intptr_t)v5948;
	i1 v5950 = v5949+(-1);
	i8 v5951 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5951 = v5950;

endsub:;
}

// emit_157 workspace at ws+3248 length ws+0
void f389_emit_157(void) {

	i8 v5952 = (i8)(intptr_t)(ws+1192);
	i1 v5953 = *(i1*)(intptr_t)v5952;
	i1 v5954 = v5953+(-1);
	i8 v5955 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5955 = v5954;

endsub:;
}

// emit_158 workspace at ws+3248 length ws+0
void f390_emit_158(void) {

	i8 v5956 = (i8)(intptr_t)(ws+1192);
	i1 v5957 = *(i1*)(intptr_t)v5956;
	i1 v5958 = v5957+(-1);
	i8 v5959 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5959 = v5958;

endsub:;
}

// emit_159 workspace at ws+3248 length ws+0
void f391_emit_159(void) {

	i1 v5960 = (i1)+1;
	i1 v5961 = (i1)+2;
	i8 v5962 = (i8)(intptr_t)(ws+3176);
	i8 v5963 = *(i8*)(intptr_t)v5962;
	i1 v5964 = *(i1*)(intptr_t)v5963;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5964, v5961, v5960);

endsub:;
}

// emit_160 workspace at ws+3248 length ws+0
void f392_emit_160(void) {

	i1 v5965 = (i1)+1;
	i1 v5966 = (i1)+4;
	i8 v5967 = (i8)(intptr_t)(ws+3176);
	i8 v5968 = *(i8*)(intptr_t)v5967;
	i1 v5969 = *(i1*)(intptr_t)v5968;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5969, v5966, v5965);

endsub:;
}

// emit_161 workspace at ws+3248 length ws+0
void f393_emit_161(void) {

	i1 v5970 = (i1)+1;
	i1 v5971 = (i1)+8;
	i8 v5972 = (i8)(intptr_t)(ws+3176);
	i8 v5973 = *(i8*)(intptr_t)v5972;
	i1 v5974 = *(i1*)(intptr_t)v5973;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5974, v5971, v5970);

endsub:;
}

// emit_162 workspace at ws+3248 length ws+0
void f394_emit_162(void) {

	i1 v5975 = (i1)+2;
	i1 v5976 = (i1)+1;
	i8 v5977 = (i8)(intptr_t)(ws+3176);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i1 v5979 = *(i1*)(intptr_t)v5978;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5979, v5976, v5975);

endsub:;
}

// emit_163 workspace at ws+3248 length ws+0
void f395_emit_163(void) {

	i1 v5980 = (i1)+2;
	i1 v5981 = (i1)+4;
	i8 v5982 = (i8)(intptr_t)(ws+3176);
	i8 v5983 = *(i8*)(intptr_t)v5982;
	i1 v5984 = *(i1*)(intptr_t)v5983;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5984, v5981, v5980);

endsub:;
}

// emit_164 workspace at ws+3248 length ws+0
void f396_emit_164(void) {

	i1 v5985 = (i1)+2;
	i1 v5986 = (i1)+8;
	i8 v5987 = (i8)(intptr_t)(ws+3176);
	i8 v5988 = *(i8*)(intptr_t)v5987;
	i1 v5989 = *(i1*)(intptr_t)v5988;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5989, v5986, v5985);

endsub:;
}

// emit_165 workspace at ws+3248 length ws+0
void f397_emit_165(void) {

	i1 v5990 = (i1)+4;
	i1 v5991 = (i1)+1;
	i8 v5992 = (i8)(intptr_t)(ws+3176);
	i8 v5993 = *(i8*)(intptr_t)v5992;
	i1 v5994 = *(i1*)(intptr_t)v5993;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5994, v5991, v5990);

endsub:;
}

// emit_166 workspace at ws+3248 length ws+0
void f398_emit_166(void) {

	i1 v5995 = (i1)+4;
	i1 v5996 = (i1)+2;
	i8 v5997 = (i8)(intptr_t)(ws+3176);
	i8 v5998 = *(i8*)(intptr_t)v5997;
	i1 v5999 = *(i1*)(intptr_t)v5998;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v5999, v5996, v5995);

endsub:;
}

// emit_167 workspace at ws+3248 length ws+0
void f399_emit_167(void) {

	i1 v6000 = (i1)+4;
	i1 v6001 = (i1)+8;
	i8 v6002 = (i8)(intptr_t)(ws+3176);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i1 v6004 = *(i1*)(intptr_t)v6003;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v6004, v6001, v6000);

endsub:;
}

// emit_168 workspace at ws+3248 length ws+0
void f400_emit_168(void) {

	i1 v6005 = (i1)+8;
	i1 v6006 = (i1)+1;
	i8 v6007 = (i8)(intptr_t)(ws+3176);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i1 v6009 = *(i1*)(intptr_t)v6008;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v6009, v6006, v6005);

endsub:;
}

// emit_169 workspace at ws+3248 length ws+0
void f401_emit_169(void) {

	i1 v6010 = (i1)+8;
	i1 v6011 = (i1)+2;
	i8 v6012 = (i8)(intptr_t)(ws+3176);
	i8 v6013 = *(i8*)(intptr_t)v6012;
	i1 v6014 = *(i1*)(intptr_t)v6013;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v6014, v6011, v6010);

endsub:;
}

// emit_170 workspace at ws+3248 length ws+0
void f402_emit_170(void) {

	i1 v6015 = (i1)+8;
	i1 v6016 = (i1)+4;
	i8 v6017 = (i8)(intptr_t)(ws+3176);
	i8 v6018 = *(i8*)(intptr_t)v6017;
	i1 v6019 = *(i1*)(intptr_t)v6018;

void f240_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f240_Cast(v6019, v6016, v6015);

endsub:;
}
const i1 c02_s0156[] = { 0x09,0x69,0x38,0x20,0x76,0 };
const i1 c02_s0157[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
const i1 c02_s0158[] = { 0x3b,0x0a,0 };

// emit_171 workspace at ws+3248 length ws+2
void f403_emit_171(void) {


void f220_Push(i2* /* vid */);
	i2 v6020;
	f220_Push(&v6020);
	i8 v6021 = (i8)(intptr_t)(ws+3248);
	*(i2*)(intptr_t)v6021 = v6020;

	i8 v6022 = (i8)(intptr_t)c02_s0156;

void f158_E(i8 /* text */);
	f158_E(v6022);

	i8 v6023 = (i8)(intptr_t)(ws+3248);
	i2 v6024 = *(i2*)(intptr_t)v6023;

void f160_E_u16(i2 /* value */);
	f160_E_u16(v6024);

	i8 v6025 = (i8)(intptr_t)c02_s0157;

void f158_E(i8 /* text */);
	f158_E(v6025);

	i1 v6026 = (i1)+3;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v6026);

	i1 v6027 = (i1)+115;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v6027);

	i8 v6028 = (i8)(intptr_t)(ws+3176);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	i8 v6030 = *(i8*)(intptr_t)v6029;

void f241_E_string(i2* /* sid */, i8 /* text */);
	i2 v6031;
	f241_E_string(&v6031, v6030);

void f167_E_h16(i2 /* value */);
	f167_E_h16(v6031);

	i8 v6032 = (i8)(intptr_t)c02_s0158;

void f158_E(i8 /* text */);
	f158_E(v6032);

endsub:;
}
const i1 c02_s0159[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
const i1 c02_s015a[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0x2f,0x2f,0x20,0 };

// emit_172 workspace at ws+3248 length ws+0
void f404_emit_172(void) {


void f172_EmitterPushChunk(void);
	f172_EmitterPushChunk();

	i8 v6033 = (i8)(intptr_t)(ws+40);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = v6034+(+56);
	i2 v6036 = *(i2*)(intptr_t)v6035;

void f150_E_b16(i2 /* word */);
	f150_E_b16(v6036);

	i8 v6037 = (i8)(intptr_t)c02_s0159;

void f158_E(i8 /* text */);
	f158_E(v6037);

	i8 v6038 = (i8)(intptr_t)(ws+3176);
	i8 v6039 = *(i8*)(intptr_t)v6038;
	i8 v6040 = *(i8*)(intptr_t)v6039;
	i8 v6041 = v6040+(+24);
	i8 v6042 = *(i8*)(intptr_t)v6041;

void f158_E(i8 /* text */);
	f158_E(v6042);

	i8 v6043 = (i8)(intptr_t)c02_s015a;

void f158_E(i8 /* text */);
	f158_E(v6043);

	i8 v6044 = (i8)(intptr_t)(ws+3176);
	i8 v6045 = *(i8*)(intptr_t)v6044;
	i8 v6046 = *(i8*)(intptr_t)v6045;
	i8 v6047 = v6046+(+48);
	i8 v6048 = *(i8*)(intptr_t)v6047;

void f158_E(i8 /* text */);
	f158_E(v6048);


void f155_E_nl(void);
	f155_E_nl();

	i1 v6049 = (i1)+0;
	i8 v6050 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v6050 = v6049;

endsub:;
}

// emit_173 workspace at ws+3248 length ws+0
void f405_emit_173(void) {

	i8 v6051 = (i8)(intptr_t)(ws+3176);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i1 v6053 = (i1)+1;

void f243_E_bytes(i1 /* width */, i8 /* ptr */);
	f243_E_bytes(v6053, v6052);

endsub:;
}

// emit_174 workspace at ws+3248 length ws+0
void f406_emit_174(void) {

	i8 v6054 = (i8)(intptr_t)(ws+3176);
	i8 v6055 = *(i8*)(intptr_t)v6054;
	i1 v6056 = (i1)+2;

void f243_E_bytes(i1 /* width */, i8 /* ptr */);
	f243_E_bytes(v6056, v6055);

endsub:;
}

// emit_175 workspace at ws+3248 length ws+0
void f407_emit_175(void) {

	i8 v6057 = (i8)(intptr_t)(ws+3176);
	i8 v6058 = *(i8*)(intptr_t)v6057;
	i1 v6059 = (i1)+4;

void f243_E_bytes(i1 /* width */, i8 /* ptr */);
	f243_E_bytes(v6059, v6058);

endsub:;
}

// emit_176 workspace at ws+3248 length ws+0
void f408_emit_176(void) {

	i8 v6060 = (i8)(intptr_t)(ws+3176);
	i8 v6061 = *(i8*)(intptr_t)v6060;
	i1 v6062 = (i1)+8;

void f243_E_bytes(i1 /* width */, i8 /* ptr */);
	f243_E_bytes(v6062, v6061);

endsub:;
}
const i1 c02_s015b[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
const i1 c02_s015c[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
const i1 c02_s015d[] = { 0x20,0x7d,0x2c,0x0a,0 };

// emit_177 workspace at ws+3248 length ws+0
void f409_emit_177(void) {

	i8 v6063 = (i8)(intptr_t)(ws+1218);
	i1 v6064 = *(i1*)(intptr_t)v6063;
	i1 v6065 = (i1)+0;
	if (v6064==v6065) goto c02_054e; else goto c02_054d;

c02_054d:;


void f55_StartError(void);
	f55_StartError();

	i8 v6066 = (i8)(intptr_t)c02_s015b;

void f11_print(i8 /* ptr */);
	f11_print(v6066);

	i8 v6067 = (i8)(intptr_t)(ws+1218);
	i1 v6068 = *(i1*)(intptr_t)v6067;

void f17_print_i8(i1 /* value */);
	f17_print_i8(v6068);


void f56_EndError(void);
	f56_EndError();

	goto c02_054a;

c02_054e:;

c02_054a:;

	i8 v6069 = (i8)(intptr_t)c02_s015c;

void f158_E(i8 /* text */);
	f158_E(v6069);

	i1 v6070 = (i1)+3;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v6070);

	i1 v6071 = (i1)+115;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v6071);

	i8 v6072 = (i8)(intptr_t)(ws+3176);
	i8 v6073 = *(i8*)(intptr_t)v6072;
	i8 v6074 = *(i8*)(intptr_t)v6073;

void f241_E_string(i2* /* sid */, i8 /* text */);
	i2 v6075;
	f241_E_string(&v6075, v6074);

void f167_E_h16(i2 /* value */);
	f167_E_h16(v6075);

	i8 v6076 = (i8)(intptr_t)c02_s015d;

void f158_E(i8 /* text */);
	f158_E(v6076);

endsub:;
}
const i1 c02_s015e[] = { 0x7d,0x3b,0x0a,0 };

// emit_178 workspace at ws+3248 length ws+0
void f410_emit_178(void) {


void f242_FlushInitialiserBuffer(void);
	f242_FlushInitialiserBuffer();

	i8 v6077 = (i8)(intptr_t)c02_s015e;

void f158_E(i8 /* text */);
	f158_E(v6077);

	i1 v6078 = (i1)+83;

void f173_EmitterPopChunk(i1 /* type */);
	f173_EmitterPopChunk(v6078);

endsub:;
}

// emit_179 workspace at ws+3248 length ws+0
void f411_emit_179(void) {


void f154_E_tab(void);
	f154_E_tab();

endsub:;
}

// emit_180 workspace at ws+3248 length ws+0
void f412_emit_180(void) {

	i8 v6079 = (i8)(intptr_t)(ws+3176);
	i8 v6080 = *(i8*)(intptr_t)v6079;
	i8 v6081 = *(i8*)(intptr_t)v6080;

void f158_E(i8 /* text */);
	f158_E(v6081);


void f152_E_space(void);
	f152_E_space();

endsub:;
}
const i1 c02_s015f[] = { 0x2a,0x28,0x69,0 };
const i1 c02_s0160[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s0161[] = { 0x29,0 };

// emit_181 workspace at ws+3248 length ws+0
void f413_emit_181(void) {

	i8 v6082 = (i8)(intptr_t)(ws+3176);
	i8 v6083 = *(i8*)(intptr_t)v6082;
	i8 v6084 = *(i8*)(intptr_t)v6083;
	i8 v6085 = v6084+(+46);
	i1 v6086 = *(i1*)(intptr_t)v6085;
	i1 v6087 = (i1)+28;
	if (v6086==v6087) goto c02_0556; else goto c02_0557;

c02_0556:;

	i8 v6088 = (i8)(intptr_t)c02_s015f;

void f158_E(i8 /* text */);
	f158_E(v6088);

	i8 v6089 = (i8)(intptr_t)(ws+3176);
	i8 v6090 = *(i8*)(intptr_t)v6089;
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i8 v6092 = *(i8*)(intptr_t)v6091;
	i8 v6093 = v6092+(+42);
	i2 v6094 = *(i2*)(intptr_t)v6093;
	i1 v6095 = v6094;

void f161_E_u8(i1 /* value */);
	f161_E_u8(v6095);

	i8 v6096 = (i8)(intptr_t)c02_s0160;

void f158_E(i8 /* text */);
	f158_E(v6096);

	i8 v6097 = (i8)(intptr_t)(ws+3176);
	i8 v6098 = *(i8*)(intptr_t)v6097;
	i8 v6099 = *(i8*)(intptr_t)v6098;
	i2 v6100 = (i2)+0;

void f216_E_symref(i2 /* off */, i8 /* sym */);
	f216_E_symref(v6100, v6099);

	i8 v6101 = (i8)(intptr_t)c02_s0161;

void f158_E(i8 /* text */);
	f158_E(v6101);

	goto c02_0553;

c02_0557:;

	i8 v6102 = (i8)(intptr_t)(ws+3176);
	i8 v6103 = *(i8*)(intptr_t)v6102;
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = *(i8*)(intptr_t)v6104;

void f170_E_subref(i8 /* subr */);
	f170_E_subref(v6105);

c02_0553:;


void f152_E_space(void);
	f152_E_space();

endsub:;
}

// emit_182 workspace at ws+3248 length ws+0
void f414_emit_182(void) {

	i1 v6106 = (i1)+40;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v6106);

	i8 v6107 = (i8)(intptr_t)(ws+3176);
	i8 v6108 = *(i8*)(intptr_t)v6107;
	i4 v6109 = *(i4*)(intptr_t)v6108;

void f164_E_i32(i4 /* value */);
	f164_E_i32(v6109);

	i1 v6110 = (i1)+41;

void f149_E_b8(i1 /* byte */);
	f149_E_b8(v6110);

endsub:;
}

// emit_183 workspace at ws+3248 length ws+0
void f415_emit_183(void) {


void f155_E_nl(void);
	f155_E_nl();

endsub:;
}

// EmitOneInstruction workspace at ws+3160 length ws+82
void f245_EmitOneInstruction(i8 p5174 /* self */, i1 p5175 /* rule */) {
	*(i1*)(intptr_t)(ws+3160) = p5175; /*rule */
	*(i8*)(intptr_t)(ws+3168) = p5174; /*self */

	i8 v5176 = (i8)(intptr_t)(ws+3168);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i8 v5178 = v5177+(+16);
	i8 v5179 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v5179 = v5178;

	i8 v5180 = (i8)(intptr_t)(ws+3176);
	i8 v5181 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5181 = v5180;

	i1 v5182 = (i1)+3;
	i8 v5183 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v5183 = v5182;

c02_047b:;

	i8 v5184 = (i8)(intptr_t)(ws+3240);
	i1 v5185 = *(i1*)(intptr_t)v5184;
	i1 v5186 = (i1)+0;
	if (v5185==v5186) goto c02_047e; else goto c02_047d;

c02_047d:;

	i8 v5187 = (i8)(intptr_t)(ws+3224);
	i8 v5188 = *(i8*)(intptr_t)v5187;
	i8 v5189 = *(i8*)(intptr_t)v5188;
	i8 v5190 = (i8)(intptr_t)(ws+3232);
	i8 v5191 = *(i8*)(intptr_t)v5190;
	*(i8*)(intptr_t)v5191 = v5189;

	i8 v5192 = (i8)(intptr_t)(ws+3232);
	i8 v5193 = *(i8*)(intptr_t)v5192;
	i8 v5194 = *(i8*)(intptr_t)v5193;
	i8 v5195 = (i8)+0;
	if (v5194==v5195) goto c02_0483; else goto c02_0482;

c02_0482:;

	i8 v5196 = (i8)(intptr_t)(ws+3232);
	i8 v5197 = *(i8*)(intptr_t)v5196;
	i8 v5198 = *(i8*)(intptr_t)v5197;
	i8 v5199 = v5198+(+65);
	i1 v5200 = *(i1*)(intptr_t)v5199;
	i8 v5201 = (i8)(intptr_t)(ws+3232);
	i8 v5202 = *(i8*)(intptr_t)v5201;
	i8 v5203 = v5202+(+8);
	*(i1*)(intptr_t)v5203 = v5200;

	goto c02_047f;

c02_0483:;

c02_047f:;

	i8 v5204 = (i8)(intptr_t)(ws+3224);
	i8 v5205 = *(i8*)(intptr_t)v5204;
	i8 v5206 = v5205+(+8);
	i8 v5207 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v5207 = v5206;

	i8 v5208 = (i8)(intptr_t)(ws+3232);
	i8 v5209 = *(i8*)(intptr_t)v5208;
	i8 v5210 = v5209+(+16);
	i8 v5211 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5211 = v5210;

	i8 v5212 = (i8)(intptr_t)(ws+3240);
	i1 v5213 = *(i1*)(intptr_t)v5212;
	i1 v5214 = v5213+(-1);
	i8 v5215 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v5215 = v5214;

	goto c02_047b;

c02_047e:;

	i8 v5216 = (i8)(intptr_t)(ws+3168);
	i8 v5217 = *(i8*)(intptr_t)v5216;
	i8 v5218 = v5217+(+41);
	i1 v5219 = *(i1*)(intptr_t)v5218;
	i8 v5220 = (i8)(intptr_t)(ws+3241);
	*(i1*)(intptr_t)v5220 = v5219;

	i8 v5221 = (i8)(intptr_t)(ws+3160);
	i1 v5222 = *(i1*)(intptr_t)v5221;

	if (v5222 != +0) goto c02_0485;



void f246_emit_0(void);
	f246_emit_0();

	goto c02_0484;

c02_0485:;

	if (v5222 != +1) goto c02_0486;



void f247_emit_1(void);
	f247_emit_1();

	goto c02_0484;

c02_0486:;

	if (v5222 != +2) goto c02_0487;



void f248_emit_2(void);
	f248_emit_2();

	goto c02_0484;

c02_0487:;

	if (v5222 != +3) goto c02_0488;



void f249_emit_3(void);
	f249_emit_3();

	goto c02_0484;

c02_0488:;

	if (v5222 != +4) goto c02_0489;



void f250_emit_4(void);
	f250_emit_4();

	goto c02_0484;

c02_0489:;

	if (v5222 != +5) goto c02_048a;



void f251_emit_5(void);
	f251_emit_5();

	goto c02_0484;

c02_048a:;

	if (v5222 != +6) goto c02_048b;



void f252_emit_6(void);
	f252_emit_6();

	goto c02_0484;

c02_048b:;

	if (v5222 != +7) goto c02_048c;



void f253_emit_7(void);
	f253_emit_7();

	goto c02_0484;

c02_048c:;

	if (v5222 != +8) goto c02_048d;



void f254_emit_8(void);
	f254_emit_8();

	goto c02_0484;

c02_048d:;

	if (v5222 != +9) goto c02_048e;



void f255_emit_9(void);
	f255_emit_9();

	goto c02_0484;

c02_048e:;

	if (v5222 != +10) goto c02_048f;



void f256_emit_10(void);
	f256_emit_10();

	goto c02_0484;

c02_048f:;

	if (v5222 != +11) goto c02_0490;



void f257_emit_11(void);
	f257_emit_11();

	goto c02_0484;

c02_0490:;

	if (v5222 != +12) goto c02_0491;



void f258_emit_12(void);
	f258_emit_12();

	goto c02_0484;

c02_0491:;

	if (v5222 != +13) goto c02_0492;



void f259_emit_13(void);
	f259_emit_13();

	goto c02_0484;

c02_0492:;

	if (v5222 != +14) goto c02_0493;



void f260_emit_14(void);
	f260_emit_14();

	goto c02_0484;

c02_0493:;

	if (v5222 != +15) goto c02_0494;



void f261_emit_15(void);
	f261_emit_15();

	goto c02_0484;

c02_0494:;

	if (v5222 != +16) goto c02_0495;



void f262_emit_16(void);
	f262_emit_16();

	goto c02_0484;

c02_0495:;

	if (v5222 != +17) goto c02_0496;



void f263_emit_17(void);
	f263_emit_17();

	goto c02_0484;

c02_0496:;

	if (v5222 != +18) goto c02_0497;



void f264_emit_18(void);
	f264_emit_18();

	goto c02_0484;

c02_0497:;

	if (v5222 != +19) goto c02_0498;



void f265_emit_19(void);
	f265_emit_19();

	goto c02_0484;

c02_0498:;

	if (v5222 != +20) goto c02_0499;



void f266_emit_20(void);
	f266_emit_20();

	goto c02_0484;

c02_0499:;

	if (v5222 != +21) goto c02_049a;



void f267_emit_21(void);
	f267_emit_21();

	goto c02_0484;

c02_049a:;

	if (v5222 != +22) goto c02_049b;



void f268_emit_22(void);
	f268_emit_22();

	goto c02_0484;

c02_049b:;

	if (v5222 != +23) goto c02_049c;



void f269_emit_23(void);
	f269_emit_23();

	goto c02_0484;

c02_049c:;

	if (v5222 != +24) goto c02_049d;



void f270_emit_24(void);
	f270_emit_24();

	goto c02_0484;

c02_049d:;

	if (v5222 != +25) goto c02_049e;



void f271_emit_25(void);
	f271_emit_25();

	goto c02_0484;

c02_049e:;

	if (v5222 != +26) goto c02_049f;



void f272_emit_26(void);
	f272_emit_26();

	goto c02_0484;

c02_049f:;

	if (v5222 != +27) goto c02_04a0;



void f273_emit_27(void);
	f273_emit_27();

	goto c02_0484;

c02_04a0:;

	if (v5222 != +28) goto c02_04a1;



void f274_emit_28(void);
	f274_emit_28();

	goto c02_0484;

c02_04a1:;

	if (v5222 != +29) goto c02_04a2;



void f275_emit_29(void);
	f275_emit_29();

	goto c02_0484;

c02_04a2:;

	if (v5222 != +30) goto c02_04a3;



void f276_emit_30(void);
	f276_emit_30();

	goto c02_0484;

c02_04a3:;

	if (v5222 != +31) goto c02_04a4;



void f277_emit_31(void);
	f277_emit_31();

	goto c02_0484;

c02_04a4:;

	if (v5222 != +32) goto c02_04a5;



void f278_emit_32(void);
	f278_emit_32();

	goto c02_0484;

c02_04a5:;

	if (v5222 != +33) goto c02_04a6;



void f279_emit_33(void);
	f279_emit_33();

	goto c02_0484;

c02_04a6:;

	if (v5222 != +34) goto c02_04a7;



void f280_emit_34(void);
	f280_emit_34();

	goto c02_0484;

c02_04a7:;

	if (v5222 != +35) goto c02_04a8;



void f281_emit_35(void);
	f281_emit_35();

	goto c02_0484;

c02_04a8:;

	if (v5222 != +36) goto c02_04a9;



void f282_emit_36(void);
	f282_emit_36();

	goto c02_0484;

c02_04a9:;

	if (v5222 != +37) goto c02_04aa;



void f283_emit_37(void);
	f283_emit_37();

	goto c02_0484;

c02_04aa:;

	if (v5222 != +38) goto c02_04ab;



void f284_emit_38(void);
	f284_emit_38();

	goto c02_0484;

c02_04ab:;

	if (v5222 != +39) goto c02_04ac;



void f285_emit_39(void);
	f285_emit_39();

	goto c02_0484;

c02_04ac:;

	if (v5222 != +40) goto c02_04ad;



void f286_emit_40(void);
	f286_emit_40();

	goto c02_0484;

c02_04ad:;

	if (v5222 != +43) goto c02_04ae;



void f287_emit_43(void);
	f287_emit_43();

	goto c02_0484;

c02_04ae:;

	if (v5222 != +44) goto c02_04af;



void f288_emit_44(void);
	f288_emit_44();

	goto c02_0484;

c02_04af:;

	if (v5222 != +45) goto c02_04b0;



void f289_emit_45(void);
	f289_emit_45();

	goto c02_0484;

c02_04b0:;

	if (v5222 != +46) goto c02_04b1;



void f290_emit_46(void);
	f290_emit_46();

	goto c02_0484;

c02_04b1:;

	if (v5222 != +47) goto c02_04ce;



void f292_emit_47(void);
	f292_emit_47();

	goto c02_0484;

c02_04ce:;

	if (v5222 != +57) goto c02_04d5;



void f293_emit_57(void);
	f293_emit_57();

	goto c02_0484;

c02_04d5:;

	if (v5222 != +58) goto c02_04d6;



void f294_emit_58(void);
	f294_emit_58();

	goto c02_0484;

c02_04d6:;

	if (v5222 != +59) goto c02_04d7;



void f295_emit_59(void);
	f295_emit_59();

	goto c02_0484;

c02_04d7:;

	if (v5222 != +60) goto c02_04d8;



void f296_emit_60(void);
	f296_emit_60();

	goto c02_0484;

c02_04d8:;

	if (v5222 != +61) goto c02_04d9;



void f297_emit_61(void);
	f297_emit_61();

	goto c02_0484;

c02_04d9:;

	if (v5222 != +62) goto c02_04da;



void f298_emit_62(void);
	f298_emit_62();

	goto c02_0484;

c02_04da:;

	if (v5222 != +63) goto c02_04db;



void f299_emit_63(void);
	f299_emit_63();

	goto c02_0484;

c02_04db:;

	if (v5222 != +64) goto c02_04dc;



void f300_emit_64(void);
	f300_emit_64();

	goto c02_0484;

c02_04dc:;

	if (v5222 != +65) goto c02_04dd;



void f301_emit_65(void);
	f301_emit_65();

	goto c02_0484;

c02_04dd:;

	if (v5222 != +66) goto c02_04de;



void f302_emit_66(void);
	f302_emit_66();

	goto c02_0484;

c02_04de:;

	if (v5222 != +67) goto c02_04df;



void f303_emit_67(void);
	f303_emit_67();

	goto c02_0484;

c02_04df:;

	if (v5222 != +68) goto c02_04e0;



void f304_emit_68(void);
	f304_emit_68();

	goto c02_0484;

c02_04e0:;

	if (v5222 != +69) goto c02_04e1;



void f305_emit_69(void);
	f305_emit_69();

	goto c02_0484;

c02_04e1:;

	if (v5222 != +70) goto c02_04e2;



void f306_emit_70(void);
	f306_emit_70();

	goto c02_0484;

c02_04e2:;

	if (v5222 != +71) goto c02_04e3;



void f307_emit_71(void);
	f307_emit_71();

	goto c02_0484;

c02_04e3:;

	if (v5222 != +72) goto c02_04e4;



void f308_emit_72(void);
	f308_emit_72();

	goto c02_0484;

c02_04e4:;

	if (v5222 != +73) goto c02_04e5;



void f309_emit_73(void);
	f309_emit_73();

	goto c02_0484;

c02_04e5:;

	if (v5222 != +74) goto c02_04e6;



void f310_emit_74(void);
	f310_emit_74();

	goto c02_0484;

c02_04e6:;

	if (v5222 != +75) goto c02_04e7;



void f311_emit_75(void);
	f311_emit_75();

	goto c02_0484;

c02_04e7:;

	if (v5222 != +76) goto c02_04e8;



void f312_emit_76(void);
	f312_emit_76();

	goto c02_0484;

c02_04e8:;

	if (v5222 != +77) goto c02_04e9;



void f313_emit_77(void);
	f313_emit_77();

	goto c02_0484;

c02_04e9:;

	if (v5222 != +78) goto c02_04ea;



void f314_emit_78(void);
	f314_emit_78();

	goto c02_0484;

c02_04ea:;

	if (v5222 != +79) goto c02_04eb;



void f315_emit_79(void);
	f315_emit_79();

	goto c02_0484;

c02_04eb:;

	if (v5222 != +80) goto c02_04ec;



void f316_emit_80(void);
	f316_emit_80();

	goto c02_0484;

c02_04ec:;

	if (v5222 != +81) goto c02_04ed;



void f317_emit_81(void);
	f317_emit_81();

	goto c02_0484;

c02_04ed:;

	if (v5222 != +82) goto c02_04ee;



void f318_emit_82(void);
	f318_emit_82();

	goto c02_0484;

c02_04ee:;

	if (v5222 != +83) goto c02_04ef;



void f319_emit_83(void);
	f319_emit_83();

	goto c02_0484;

c02_04ef:;

	if (v5222 != +84) goto c02_04f0;



void f320_emit_84(void);
	f320_emit_84();

	goto c02_0484;

c02_04f0:;

	if (v5222 != +85) goto c02_04f1;



void f321_emit_85(void);
	f321_emit_85();

	goto c02_0484;

c02_04f1:;

	if (v5222 != +86) goto c02_04f2;



void f322_emit_86(void);
	f322_emit_86();

	goto c02_0484;

c02_04f2:;

	if (v5222 != +87) goto c02_04f3;



void f323_emit_87(void);
	f323_emit_87();

	goto c02_0484;

c02_04f3:;

	if (v5222 != +88) goto c02_04f4;



void f324_emit_88(void);
	f324_emit_88();

	goto c02_0484;

c02_04f4:;

	if (v5222 != +89) goto c02_04f5;



void f325_emit_89(void);
	f325_emit_89();

	goto c02_0484;

c02_04f5:;

	if (v5222 != +90) goto c02_04f6;



void f326_emit_90(void);
	f326_emit_90();

	goto c02_0484;

c02_04f6:;

	if (v5222 != +91) goto c02_04f7;



void f327_emit_91(void);
	f327_emit_91();

	goto c02_0484;

c02_04f7:;

	if (v5222 != +92) goto c02_04f8;



void f328_emit_92(void);
	f328_emit_92();

	goto c02_0484;

c02_04f8:;

	if (v5222 != +93) goto c02_04f9;



void f329_emit_93(void);
	f329_emit_93();

	goto c02_0484;

c02_04f9:;

	if (v5222 != +94) goto c02_04fa;



void f330_emit_94(void);
	f330_emit_94();

	goto c02_0484;

c02_04fa:;

	if (v5222 != +95) goto c02_04fb;



void f331_emit_95(void);
	f331_emit_95();

	goto c02_0484;

c02_04fb:;

	if (v5222 != +96) goto c02_04fc;



void f332_emit_96(void);
	f332_emit_96();

	goto c02_0484;

c02_04fc:;

	if (v5222 != +97) goto c02_04fd;



void f333_emit_97(void);
	f333_emit_97();

	goto c02_0484;

c02_04fd:;

	if (v5222 != +98) goto c02_04fe;



void f334_emit_98(void);
	f334_emit_98();

	goto c02_0484;

c02_04fe:;

	if (v5222 != +99) goto c02_04ff;



void f335_emit_99(void);
	f335_emit_99();

	goto c02_0484;

c02_04ff:;

	if (v5222 != +100) goto c02_0500;



void f336_emit_100(void);
	f336_emit_100();

	goto c02_0484;

c02_0500:;

	if (v5222 != +101) goto c02_0501;



void f337_emit_101(void);
	f337_emit_101();

	goto c02_0484;

c02_0501:;

	if (v5222 != +102) goto c02_0502;



void f338_emit_102(void);
	f338_emit_102();

	goto c02_0484;

c02_0502:;

	if (v5222 != +103) goto c02_0503;



void f339_emit_103(void);
	f339_emit_103();

	goto c02_0484;

c02_0503:;

	if (v5222 != +104) goto c02_0504;



void f340_emit_104(void);
	f340_emit_104();

	goto c02_0484;

c02_0504:;

	if (v5222 != +105) goto c02_0505;



void f341_emit_105(void);
	f341_emit_105();

	goto c02_0484;

c02_0505:;

	if (v5222 != +106) goto c02_0506;



void f342_emit_106(void);
	f342_emit_106();

	goto c02_0484;

c02_0506:;

	if (v5222 != +107) goto c02_0507;



void f343_emit_107(void);
	f343_emit_107();

	goto c02_0484;

c02_0507:;

	if (v5222 != +108) goto c02_0508;



void f344_emit_108(void);
	f344_emit_108();

	goto c02_0484;

c02_0508:;

	if (v5222 != +109) goto c02_0509;



void f345_emit_109(void);
	f345_emit_109();

	goto c02_0484;

c02_0509:;

	if (v5222 != +110) goto c02_050a;



void f346_emit_110(void);
	f346_emit_110();

	goto c02_0484;

c02_050a:;

	if (v5222 != +111) goto c02_050b;



void f347_emit_111(void);
	f347_emit_111();

	goto c02_0484;

c02_050b:;

	if (v5222 != +112) goto c02_050c;



void f348_emit_112(void);
	f348_emit_112();

	goto c02_0484;

c02_050c:;

	if (v5222 != +113) goto c02_050d;



void f349_emit_113(void);
	f349_emit_113();

	goto c02_0484;

c02_050d:;

	if (v5222 != +114) goto c02_050e;



void f350_emit_114(void);
	f350_emit_114();

	goto c02_0484;

c02_050e:;

	if (v5222 != +115) goto c02_050f;



void f351_emit_115(void);
	f351_emit_115();

	goto c02_0484;

c02_050f:;

	if (v5222 != +116) goto c02_0510;



void f352_emit_116(void);
	f352_emit_116();

	goto c02_0484;

c02_0510:;

	if (v5222 != +117) goto c02_0511;



void f353_emit_117(void);
	f353_emit_117();

	goto c02_0484;

c02_0511:;

	if (v5222 != +118) goto c02_0512;



void f354_emit_118(void);
	f354_emit_118();

	goto c02_0484;

c02_0512:;

	if (v5222 != +119) goto c02_0513;



void f355_emit_119(void);
	f355_emit_119();

	goto c02_0484;

c02_0513:;

	if (v5222 != +120) goto c02_0514;



void f356_emit_120(void);
	f356_emit_120();

	goto c02_0484;

c02_0514:;

	if (v5222 != +121) goto c02_0515;



void f357_emit_121(void);
	f357_emit_121();

	goto c02_0484;

c02_0515:;

	if (v5222 != +122) goto c02_0516;



void f358_emit_122(void);
	f358_emit_122();

	goto c02_0484;

c02_0516:;

	if (v5222 != +123) goto c02_0517;



void f359_emit_123(void);
	f359_emit_123();

	goto c02_0484;

c02_0517:;

	if (v5222 != +124) goto c02_0518;



void f360_emit_124(void);
	f360_emit_124();

	goto c02_0484;

c02_0518:;

	if (v5222 != +125) goto c02_0519;



void f361_emit_125(void);
	f361_emit_125();

	goto c02_0484;

c02_0519:;

	if (v5222 != +126) goto c02_051a;



void f362_emit_126(void);
	f362_emit_126();

	goto c02_0484;

c02_051a:;

	if (v5222 != +127) goto c02_051b;



void f363_emit_127(void);
	f363_emit_127();

	goto c02_0484;

c02_051b:;

	if (v5222 != +128) goto c02_051c;



void f364_emit_128(void);
	f364_emit_128();

	goto c02_0484;

c02_051c:;

	if (v5222 != +129) goto c02_051d;



void f365_emit_129(void);
	f365_emit_129();

	goto c02_0484;

c02_051d:;

	if (v5222 != +130) goto c02_051e;



void f366_emit_130(void);
	f366_emit_130();

	goto c02_0484;

c02_051e:;

	if (v5222 != +131) goto c02_051f;



void f367_emit_131(void);
	f367_emit_131();

	goto c02_0484;

c02_051f:;

	if (v5222 != +132) goto c02_0520;



void f368_emit_132(void);
	f368_emit_132();

	goto c02_0484;

c02_0520:;

	if (v5222 != +133) goto c02_0521;



void f369_emit_133(void);
	f369_emit_133();

	goto c02_0484;

c02_0521:;

	if (v5222 != +134) goto c02_0522;



void f370_emit_134(void);
	f370_emit_134();

	goto c02_0484;

c02_0522:;

	if (v5222 != +135) goto c02_0523;



void f371_emit_135(void);
	f371_emit_135();

	goto c02_0484;

c02_0523:;

	if (v5222 != +136) goto c02_0524;



void f372_emit_136(void);
	f372_emit_136();

	goto c02_0484;

c02_0524:;

	if (v5222 != +137) goto c02_0525;



void f373_emit_137(void);
	f373_emit_137();

	goto c02_0484;

c02_0525:;

	if (v5222 != +138) goto c02_0526;



void f374_emit_138(void);
	f374_emit_138();

	goto c02_0484;

c02_0526:;

	if (v5222 != +139) goto c02_0527;



void f375_emit_139(void);
	f375_emit_139();

	goto c02_0484;

c02_0527:;

	if (v5222 != +140) goto c02_0528;



void f376_emit_140(void);
	f376_emit_140();

	goto c02_0484;

c02_0528:;

	if (v5222 != +141) goto c02_0529;



void f377_emit_141(void);
	f377_emit_141();

	goto c02_0484;

c02_0529:;

	if (v5222 != +142) goto c02_052a;



void f378_emit_142(void);
	f378_emit_142();

	goto c02_0484;

c02_052a:;

	if (v5222 != +143) goto c02_052b;



void f379_emit_143(void);
	f379_emit_143();

	goto c02_0484;

c02_052b:;

	if (v5222 != +144) goto c02_052c;



void f380_emit_144(void);
	f380_emit_144();

	goto c02_0484;

c02_052c:;

	if (v5222 != +145) goto c02_052d;



void f381_emit_145(void);
	f381_emit_145();

	goto c02_0484;

c02_052d:;

	if (v5222 != +146) goto c02_052e;



void f382_emit_146(void);
	f382_emit_146();

	goto c02_0484;

c02_052e:;

	if (v5222 != +151) goto c02_052f;



void f383_emit_151(void);
	f383_emit_151();

	goto c02_0484;

c02_052f:;

	if (v5222 != +152) goto c02_0530;



void f384_emit_152(void);
	f384_emit_152();

	goto c02_0484;

c02_0530:;

	if (v5222 != +153) goto c02_0531;



void f385_emit_153(void);
	f385_emit_153();

	goto c02_0484;

c02_0531:;

	if (v5222 != +154) goto c02_0532;



void f386_emit_154(void);
	f386_emit_154();

	goto c02_0484;

c02_0532:;

	if (v5222 != +155) goto c02_0533;



void f387_emit_155(void);
	f387_emit_155();

	goto c02_0484;

c02_0533:;

	if (v5222 != +156) goto c02_0534;



void f388_emit_156(void);
	f388_emit_156();

	goto c02_0484;

c02_0534:;

	if (v5222 != +157) goto c02_0535;



void f389_emit_157(void);
	f389_emit_157();

	goto c02_0484;

c02_0535:;

	if (v5222 != +158) goto c02_0536;



void f390_emit_158(void);
	f390_emit_158();

	goto c02_0484;

c02_0536:;

	if (v5222 != +159) goto c02_0537;



void f391_emit_159(void);
	f391_emit_159();

	goto c02_0484;

c02_0537:;

	if (v5222 != +160) goto c02_0538;



void f392_emit_160(void);
	f392_emit_160();

	goto c02_0484;

c02_0538:;

	if (v5222 != +161) goto c02_0539;



void f393_emit_161(void);
	f393_emit_161();

	goto c02_0484;

c02_0539:;

	if (v5222 != +162) goto c02_053a;



void f394_emit_162(void);
	f394_emit_162();

	goto c02_0484;

c02_053a:;

	if (v5222 != +163) goto c02_053b;



void f395_emit_163(void);
	f395_emit_163();

	goto c02_0484;

c02_053b:;

	if (v5222 != +164) goto c02_053c;



void f396_emit_164(void);
	f396_emit_164();

	goto c02_0484;

c02_053c:;

	if (v5222 != +165) goto c02_053d;



void f397_emit_165(void);
	f397_emit_165();

	goto c02_0484;

c02_053d:;

	if (v5222 != +166) goto c02_053e;



void f398_emit_166(void);
	f398_emit_166();

	goto c02_0484;

c02_053e:;

	if (v5222 != +167) goto c02_053f;



void f399_emit_167(void);
	f399_emit_167();

	goto c02_0484;

c02_053f:;

	if (v5222 != +168) goto c02_0540;



void f400_emit_168(void);
	f400_emit_168();

	goto c02_0484;

c02_0540:;

	if (v5222 != +169) goto c02_0541;



void f401_emit_169(void);
	f401_emit_169();

	goto c02_0484;

c02_0541:;

	if (v5222 != +170) goto c02_0542;



void f402_emit_170(void);
	f402_emit_170();

	goto c02_0484;

c02_0542:;

	if (v5222 != +171) goto c02_0543;



void f403_emit_171(void);
	f403_emit_171();

	goto c02_0484;

c02_0543:;

	if (v5222 != +172) goto c02_0544;



void f404_emit_172(void);
	f404_emit_172();

	goto c02_0484;

c02_0544:;

	if (v5222 != +173) goto c02_0545;



void f405_emit_173(void);
	f405_emit_173();

	goto c02_0484;

c02_0545:;

	if (v5222 != +174) goto c02_0546;



void f406_emit_174(void);
	f406_emit_174();

	goto c02_0484;

c02_0546:;

	if (v5222 != +175) goto c02_0547;



void f407_emit_175(void);
	f407_emit_175();

	goto c02_0484;

c02_0547:;

	if (v5222 != +176) goto c02_0548;



void f408_emit_176(void);
	f408_emit_176();

	goto c02_0484;

c02_0548:;

	if (v5222 != +177) goto c02_0549;



void f409_emit_177(void);
	f409_emit_177();

	goto c02_0484;

c02_0549:;

	if (v5222 != +178) goto c02_054f;



void f410_emit_178(void);
	f410_emit_178();

	goto c02_0484;

c02_054f:;

	if (v5222 != +179) goto c02_0550;



void f411_emit_179(void);
	f411_emit_179();

	goto c02_0484;

c02_0550:;

	if (v5222 != +180) goto c02_0551;



void f412_emit_180(void);
	f412_emit_180();

	goto c02_0484;

c02_0551:;

	if (v5222 != +181) goto c02_0552;



void f413_emit_181(void);
	f413_emit_181();

	goto c02_0484;

c02_0552:;

	if (v5222 != +182) goto c02_0558;



void f414_emit_182(void);
	f414_emit_182();

	goto c02_0484;

c02_0558:;

	if (v5222 != +183) goto c02_0559;



void f415_emit_183(void);
	f415_emit_183();

c02_0559:;

c02_0484:;


endsub:;
}
static data c02_a55a[] = { // codegen_midcodes








	{ .i1 = { 0x37,0x28,0x28,0x9c,0x28,0x9d,0x28,0x9e}},








	{ .i1 = { 0x28,0x9f,0x28,0x83,0x28,0x84,0x28,0x85}},








	{ .i1 = { 0x28,0x86,0x28,0xa1,0x28,0xa2,0x28,0xa3}},








	{ .i1 = { 0x28,0xa4,0x28,0x88,0x28,0x89,0x28,0x8a}},








	{ .i1 = { 0x28,0x8b,0x28,0x92,0x28,0x93,0x28,0x94}},








	{ .i1 = { 0x28,0x95,0x28,0x8d,0x28,0x8e,0x28,0x8f}},








	{ .i1 = { 0x28,0x90,0x28,0x97,0x28,0x98,0x28,0x99}},








	{ .i1 = { 0x28,0x9a,0x28,0xa6,0x28,0xa7,0x28,0xa8}},








	{ .i1 = { 0x28,0xa9,0x28,0xab,0x28,0xac,0x28,0xad}},








	{ .i1 = { 0x28,0xae,0x28,0xb0,0x28,0xb1,0x28,0xb2}},








	{ .i1 = { 0x28,0xb3,0x28,0x02,0x03,0x15,0x16,0x17}},








	{ .i1 = { 0x04,0x05,0x01,0x1f,0x20,0x21,0x22,0x24}},








	{ .i1 = { 0x25,0x26,0x27,0x18,0x1a,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x28,0x28,0x28,0x28,0x2a,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x2c,0x2d,0x2e,0x2f,0x9c,0x9d,0x9e}},








	{ .i1 = { 0x9f,0x83,0x84,0x85,0x86,0xa1,0xa2,0xa3}},








	{ .i1 = { 0xa4,0x88,0x89,0x8a,0x8b,0x92,0x93,0x94}},








	{ .i1 = { 0x95,0x8d,0x8e,0x8f,0x90,0x97,0x98,0x99}},








	{ .i1 = { 0x9a,0xa6,0xa7,0xa8,0xa9,0xab,0xac,0xad}},








	{ .i1 = { 0xae,0xb0,0xb1,0xb2,0xb3,0x6f,0x70,0x71}},








	{ .i1 = { 0x72,0x6a,0x6b,0x6c,0x6d,0x74,0x75,0x76}},








	{ .i1 = { 0x77,0x79,0x7a,0x7b,0x7c,0x7e,0x7f,0x80}},








	{ .i1 = { 0x81,0x38,0x39,0x3a,0x3b,0x42,0x43,0x44}},








	{ .i1 = { 0x45,0x3d,0x3e,0x3f,0x40,0x47,0x48,0x49}},








	{ .i1 = { 0x4a,0x4c,0x4d,0x4e,0x4f,0x51,0x52,0x53}},








	{ .i1 = { 0x54,0x57,0x58,0x59,0x5b,0x5d,0x5e,0x60}},








	{ .i1 = { 0x61,0x63,0x65,0x66,0x67,0x29,0x06,0x08}},








	{ .i1 = { 0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x10}},



	{ .i1 = { 0x11,0x12}},
};
static data c02_a55b[] = { // codegen_registers








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x10,0x01,0x10,0x02,0x10,0x04,0x10,0x08}},








	{ .i1 = { 0x10,0x10,0x10,0x10,0x10,0x01,0x08,0x02}},








	{ .i1 = { 0x08,0x04,0x08,0x08,0x08,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x02,0x04,0x08,0x01,0x02,0x04}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x01,0x04,0x01,0x08}},








	{ .i1 = { 0x01,0x01,0x01,0x02,0x01,0x04,0x01,0x08}},








	{ .i1 = { 0x01,0x01,0x01,0x02,0x01,0x04,0x01,0x08}},








	{ .i1 = { 0x01,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x01,0x02,0x02,0x04,0x04,0x08}},








	{ .i1 = { 0x08,0x01,0x02,0x04,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x02,0x04,0x04,0x04,0x08,0x08}},


	{ .i1 = { 0x08}},
};
static data c02_a55c[] = { // codegen_rules








	{ .i1 = { 0x00,0x00,0x00,0x00,0x07,0x07,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x05,0x07,0x02,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x05,0x07,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x05,0x07,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x05,0x07,0x02,0x00,0x01,0x01,0x00,0x05}},








	{ .i1 = { 0x07,0x02,0x00,0x02,0x02,0x00,0x05,0x07}},








	{ .i1 = { 0x02,0x00,0x04,0x04,0x00,0x05,0x07,0x02}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x05,0x07,0x02,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x10,0x10,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x10,0x10,0x00,0x01,0x07,0x06,0x00,0x10}},








	{ .i1 = { 0x10,0x00,0x01,0x07,0x06,0x00,0x10,0x10}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x10,0x10,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x01,0x01,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x02,0x02,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x04,0x04,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x08,0x08,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x03,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x03,0x02,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x01,0x01,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x02,0x02,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x01,0x00,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x03,0x02,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x03,0x02,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x08,0x08,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x01,0x01,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x03,0x02,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x03,0x02,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x01,0x01,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x02,0x02,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x04,0x04,0x00,0x01,0x07,0x06,0x00,0x08}},








	{ .i1 = { 0x08,0x00,0x01,0x07,0x06,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x02,0x02,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x04,0x04,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x08,0x08,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x07,0x06,0x00,0x00,0x00,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x00,0x00,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x07,0x06,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x07,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x00,0x00,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x02,0x02,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x04,0x04,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x08,0x08,0x00,0x01,0x03,0x02,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x03,0x02,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x01,0x03,0x02,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x01,0x03,0x02,0x00,0x01,0x01,0x00,0x01}},








	{ .i1 = { 0x03,0x02,0x00,0x02,0x02,0x00,0x01,0x03}},








	{ .i1 = { 0x02,0x00,0x08,0x08,0x00,0x01,0x03,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x01,0x03,0x02,0x00}},








	{ .i1 = { 0x02,0x02,0x00,0x01,0x03,0x02,0x00,0x04}},








	{ .i1 = { 0x04,0x00,0x01,0x03,0x02,0x00,0x08,0x08}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x01,0x01,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x00,0x00,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x00,0x00,0x00,0x01,0x01}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00}},

};

// PopulateMatchBuffer workspace at ws+3208 length ws+24
void f416_PopulateMatchBuffer(i8 p6111 /* matchbuf */, i8 p6112 /* n */, i8 p6113 /* insn */) {
	*(i8*)(intptr_t)(ws+3208) = p6113; /*insn */
	*(i8*)(intptr_t)(ws+3216) = p6112; /*n */
	*(i8*)(intptr_t)(ws+3224) = p6111; /*matchbuf */

	i8 v6114 = (i8)(intptr_t)(ws+3216);
	i8 v6115 = *(i8*)(intptr_t)v6114;
	i8 v6116 = *(i8*)(intptr_t)v6115;
	i8 v6117 = v6116+(+66);
	i1 v6118 = *(i1*)(intptr_t)v6117;
	i8 v6119 = (i8)(intptr_t)(ws+3224);
	i8 v6120 = *(i8*)(intptr_t)v6119;
	*(i1*)(intptr_t)v6120 = v6118;

	i8 v6121 = (i8)(intptr_t)(ws+3216);
	i8 v6122 = *(i8*)(intptr_t)v6121;
	i8 v6123 = *(i8*)(intptr_t)v6122;
	i8 v6124 = v6123+(+24);
	i8 v6125 = *(i8*)(intptr_t)v6124;
	i8 v6126 = (i8)(intptr_t)(ws+3216);
	i8 v6127 = *(i8*)(intptr_t)v6126;
	i8 v6128 = v6127+(+8);
	*(i8*)(intptr_t)v6128 = v6125;

	i8 v6129 = (i8)(intptr_t)(ws+3216);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = v6130+(+8);
	i8 v6132 = *(i8*)(intptr_t)v6131;
	i8 v6133 = (i8)+0;
	if (v6132==v6133) goto c02_0561; else goto c02_0560;

c02_0560:;

	i8 v6134 = (i8)(intptr_t)(ws+3216);
	i8 v6135 = *(i8*)(intptr_t)v6134;
	i8 v6136 = v6135+(+8);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = v6137+(+66);
	i1 v6139 = *(i1*)(intptr_t)v6138;
	i8 v6140 = (i8)(intptr_t)(ws+3224);
	i8 v6141 = *(i8*)(intptr_t)v6140;
	i8 v6142 = v6141+(+1);
	*(i1*)(intptr_t)v6142 = v6139;

	goto c02_055d;

c02_0561:;

c02_055d:;

	i8 v6143 = (i8)(intptr_t)(ws+3216);
	i8 v6144 = *(i8*)(intptr_t)v6143;
	i8 v6145 = *(i8*)(intptr_t)v6144;
	i8 v6146 = v6145+(+32);
	i8 v6147 = *(i8*)(intptr_t)v6146;
	i8 v6148 = (i8)(intptr_t)(ws+3216);
	i8 v6149 = *(i8*)(intptr_t)v6148;
	i8 v6150 = v6149+(+16);
	*(i8*)(intptr_t)v6150 = v6147;

	i8 v6151 = (i8)(intptr_t)(ws+3216);
	i8 v6152 = *(i8*)(intptr_t)v6151;
	i8 v6153 = v6152+(+16);
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i8 v6155 = (i8)+0;
	if (v6154==v6155) goto c02_0566; else goto c02_0565;

c02_0565:;

	i8 v6156 = (i8)(intptr_t)(ws+3216);
	i8 v6157 = *(i8*)(intptr_t)v6156;
	i8 v6158 = v6157+(+16);
	i8 v6159 = *(i8*)(intptr_t)v6158;
	i8 v6160 = v6159+(+66);
	i1 v6161 = *(i1*)(intptr_t)v6160;
	i8 v6162 = (i8)(intptr_t)(ws+3224);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = v6163+(+2);
	*(i1*)(intptr_t)v6164 = v6161;

	goto c02_0562;

c02_0566:;

c02_0562:;

endsub:;
}
const i1 c02_s0162[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// PushNode workspace at ws+3224 length ws+8
void f417_PushNode(i8 p6165 /* node */) {
	*(i8*)(intptr_t)(ws+3224) = p6165; /*node */

	i8 v6166 = (i8)(intptr_t)(ws+3224);
	i8 v6167 = *(i8*)(intptr_t)v6166;
	i8 v6168 = (i8)+0;
	if (v6167==v6168) goto c02_056b; else goto c02_056a;

c02_056a:;

	i8 v6169 = (i8)(intptr_t)(ws+984);
	i8 v6170 = *(i8*)(intptr_t)v6169;
	i8 v6171 = (i8)(intptr_t)(ws+984);
	if (v6170==v6171) goto c02_056f; else goto c02_0570;

c02_056f:;

	i8 v6172 = (i8)(intptr_t)c02_s0162;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v6172);

	goto c02_056c;

c02_0570:;

c02_056c:;

	i8 v6173 = (i8)(intptr_t)(ws+3224);
	i8 v6174 = *(i8*)(intptr_t)v6173;
	i8 v6175 = (i8)(intptr_t)(ws+984);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	*(i8*)(intptr_t)v6176 = v6174;

	i8 v6177 = (i8)(intptr_t)(ws+984);
	i8 v6178 = *(i8*)(intptr_t)v6177;
	i8 v6179 = v6178+(+8);
	i8 v6180 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v6180 = v6179;

	goto c02_0567;

c02_056b:;

c02_0567:;

endsub:;
}

// PopNode workspace at ws+3208 length ws+8
void f418_PopNode(i8* p6181 /* node */) {

	i8 v6182 = (i8)(intptr_t)(ws+984);
	i8 v6183 = *(i8*)(intptr_t)v6182;
	i8 v6184 = v6183+(-8);
	i8 v6185 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v6185 = v6184;

	i8 v6186 = (i8)(intptr_t)(ws+984);
	i8 v6187 = *(i8*)(intptr_t)v6186;
	i8 v6188 = *(i8*)(intptr_t)v6187;
	i8 v6189 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v6189 = v6188;

endsub:;
	*p6181 = *(i8*)(intptr_t)(ws+3208);
}

// NextNode workspace at ws+3200 length ws+8
void f419_NextNode(i8* p6190 /* node */) {


void f418_PopNode(i8* /* node */);
	i8 v6191;
	f418_PopNode(&v6191);
	i8 v6192 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6192 = v6191;

	i8 v6193 = (i8)(intptr_t)(ws+3200);
	i8 v6194 = *(i8*)(intptr_t)v6193;
	i8 v6195 = (i8)+0;
	if (v6194==v6195) goto c02_0575; else goto c02_0574;

c02_0574:;

	i8 v6196 = (i8)(intptr_t)(ws+3200);
	i8 v6197 = *(i8*)(intptr_t)v6196;
	i8 v6198 = v6197+(+24);
	i8 v6199 = *(i8*)(intptr_t)v6198;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v6199);

	i8 v6200 = (i8)(intptr_t)(ws+3200);
	i8 v6201 = *(i8*)(intptr_t)v6200;
	i8 v6202 = v6201+(+32);
	i8 v6203 = *(i8*)(intptr_t)v6202;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v6203);

	goto c02_0571;

c02_0575:;

c02_0571:;

endsub:;
	*p6190 = *(i8*)(intptr_t)(ws+3200);
}

// IsStackedRegister workspace at ws+3176 length ws+16
void f420_IsStackedRegister(i1* p6204 /* result */, i1 p6205 /* regid */) {
	*(i1*)(intptr_t)(ws+3176) = p6205; /*regid */

	i1 v6206 = (i1)+0;
	i8 v6207 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6207 = v6206;

	i8 v6208 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v6209 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6209 = v6208;

c02_0578:;

	i8 v6210 = (i8)(intptr_t)(ws+3184);
	i8 v6211 = *(i8*)(intptr_t)v6210;
	i8 v6212 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v6211==v6212) goto c02_057b; else goto c02_057a;

c02_057a:;

	i8 v6213 = (i8)(intptr_t)(ws+3184);
	i8 v6214 = *(i8*)(intptr_t)v6213;
	i8 v6215 = v6214+(+8);
	i1 v6216 = *(i1*)(intptr_t)v6215;
	i8 v6217 = (i8)(intptr_t)(ws+3176);
	i1 v6218 = *(i1*)(intptr_t)v6217;
	i1 v6219 = v6216&v6218;
	i1 v6220 = (i1)+0;
	if (v6219==v6220) goto c02_0580; else goto c02_057f;

c02_057f:;

	i8 v6221 = (i8)(intptr_t)(ws+3184);
	i8 v6222 = *(i8*)(intptr_t)v6221;
	i8 v6223 = v6222+(+11);
	i1 v6224 = *(i1*)(intptr_t)v6223;
	i8 v6225 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6225 = v6224;

	goto endsub;

c02_0580:;

c02_057c:;

	i8 v6226 = (i8)(intptr_t)(ws+3184);
	i8 v6227 = *(i8*)(intptr_t)v6226;
	i8 v6228 = v6227+(+16);
	i8 v6229 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6229 = v6228;

	goto c02_0578;

c02_057b:;

endsub:;
	*p6204 = *(i1*)(intptr_t)(ws+3177);
}

// CalculateBlockedRegisters workspace at ws+3176 length ws+17
void f421_CalculateBlockedRegisters(i1* p6230 /* blocked */, i8 p6231 /* last */, i8 p6232 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6232; /*insn */
	*(i8*)(intptr_t)(ws+3184) = p6231; /*last */

	i1 v6233 = (i1)+0;
	i8 v6234 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6234 = v6233;

	i8 v6235 = (i8)(intptr_t)(ws+3176);
	i8 v6236 = *(i8*)(intptr_t)v6235;
	i8 v6237 = *(i8*)(intptr_t)v6236;
	i8 v6238 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6238 = v6237;

c02_0583:;

	i8 v6239 = (i8)(intptr_t)(ws+3176);
	i8 v6240 = *(i8*)(intptr_t)v6239;
	i8 v6241 = (i8)(intptr_t)(ws+3184);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	if (v6240==v6242) goto c02_0586; else goto c02_0585;

c02_0585:;

	i8 v6243 = (i8)(intptr_t)(ws+3192);
	i1 v6244 = *(i1*)(intptr_t)v6243;
	i8 v6245 = (i8)(intptr_t)(ws+3176);
	i8 v6246 = *(i8*)(intptr_t)v6245;
	i8 v6247 = v6246+(+42);
	i1 v6248 = *(i1*)(intptr_t)v6247;
	i1 v6249 = v6244|v6248;
	i8 v6250 = (i8)(intptr_t)(ws+3176);
	i8 v6251 = *(i8*)(intptr_t)v6250;
	i8 v6252 = v6251+(+43);
	i1 v6253 = *(i1*)(intptr_t)v6252;
	i1 v6254 = v6249|v6253;
	i8 v6255 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6255 = v6254;

	i8 v6256 = (i8)(intptr_t)(ws+3176);
	i8 v6257 = *(i8*)(intptr_t)v6256;
	i8 v6258 = (i8)(intptr_t)(ws+3184);
	i8 v6259 = *(i8*)(intptr_t)v6258;
	if (v6257==v6259) goto c02_058a; else goto c02_058b;

c02_058a:;

	goto c02_0586;

c02_058b:;

c02_0587:;

	i8 v6260 = (i8)(intptr_t)(ws+3176);
	i8 v6261 = *(i8*)(intptr_t)v6260;
	i8 v6262 = *(i8*)(intptr_t)v6261;
	i8 v6263 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6263 = v6262;

	goto c02_0583;

c02_0586:;

endsub:;
	*p6230 = *(i1*)(intptr_t)(ws+3192);
}

// BlockRegisters workspace at ws+3176 length ws+17
void f422_BlockRegisters(i1 p6264 /* blocked */, i8 p6265 /* last */, i8 p6266 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6266; /*insn */
	*(i8*)(intptr_t)(ws+3184) = p6265; /*last */
	*(i1*)(intptr_t)(ws+3192) = p6264; /*blocked */

	i8 v6267 = (i8)(intptr_t)(ws+3176);
	i8 v6268 = *(i8*)(intptr_t)v6267;
	i8 v6269 = *(i8*)(intptr_t)v6268;
	i8 v6270 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6270 = v6269;

c02_058e:;

	i8 v6271 = (i8)(intptr_t)(ws+3176);
	i8 v6272 = *(i8*)(intptr_t)v6271;
	i8 v6273 = (i8)(intptr_t)(ws+3184);
	i8 v6274 = *(i8*)(intptr_t)v6273;
	if (v6272==v6274) goto c02_0591; else goto c02_0590;

c02_0590:;

	i8 v6275 = (i8)(intptr_t)(ws+3176);
	i8 v6276 = *(i8*)(intptr_t)v6275;
	i8 v6277 = v6276+(+42);
	i1 v6278 = *(i1*)(intptr_t)v6277;
	i8 v6279 = (i8)(intptr_t)(ws+3192);
	i1 v6280 = *(i1*)(intptr_t)v6279;
	i1 v6281 = v6278|v6280;
	i8 v6282 = (i8)(intptr_t)(ws+3176);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = v6283+(+42);
	*(i1*)(intptr_t)v6284 = v6281;

	i8 v6285 = (i8)(intptr_t)(ws+3176);
	i8 v6286 = *(i8*)(intptr_t)v6285;
	i8 v6287 = v6286+(+43);
	i1 v6288 = *(i1*)(intptr_t)v6287;
	i8 v6289 = (i8)(intptr_t)(ws+3192);
	i1 v6290 = *(i1*)(intptr_t)v6289;
	i1 v6291 = v6288|v6290;
	i8 v6292 = (i8)(intptr_t)(ws+3176);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	i8 v6294 = v6293+(+43);
	*(i1*)(intptr_t)v6294 = v6291;

	i8 v6295 = (i8)(intptr_t)(ws+3176);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	i8 v6297 = (i8)(intptr_t)(ws+3184);
	i8 v6298 = *(i8*)(intptr_t)v6297;
	if (v6296==v6298) goto c02_0595; else goto c02_0596;

c02_0595:;

	goto c02_0591;

c02_0596:;

c02_0592:;

	i8 v6299 = (i8)(intptr_t)(ws+3176);
	i8 v6300 = *(i8*)(intptr_t)v6299;
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i8 v6302 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6302 = v6301;

	goto c02_058e;

c02_0591:;

endsub:;
}
const i1 c02_s0163[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };

// CreateSpill workspace at ws+3176 length ws+24
void f423_CreateSpill(i1 p6303 /* dest */, i1 p6304 /* src */, i8 p6305 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6305; /*insn */
	*(i1*)(intptr_t)(ws+3184) = p6304; /*src */
	*(i1*)(intptr_t)(ws+3185) = p6303; /*dest */

	i8 v6306 = (i8)(intptr_t)(ws+3176);
	i8 v6307 = *(i8*)(intptr_t)v6306;
	i8 v6308 = v6307+(+60);
	i1 v6309 = *(i1*)(intptr_t)v6308;
	i8 v6310 = (i8)(intptr_t)(ws+3186);
	*(i1*)(intptr_t)v6310 = v6309;

	i8 v6311 = (i8)(intptr_t)(ws+3186);
	i1 v6312 = *(i1*)(intptr_t)v6311;
	i1 v6313 = (i1)+5;
	if (v6312==v6313) goto c02_059a; else goto c02_059b;

c02_059a:;

	i8 v6314 = (i8)(intptr_t)c02_s0163;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v6314);

	goto c02_0597;

c02_059b:;

c02_0597:;

	i8 v6315 = (i8)(intptr_t)(ws+3176);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	i8 v6317 = v6316+(+44);
	i8 v6318 = (i8)(intptr_t)(ws+3186);
	i1 v6319 = *(i1*)(intptr_t)v6318;
	i8 v6320 = v6319;
	i1 v6321 = (i1)+1;
	i8 v6322 = ((i8)v6320)<<v6321;
	i8 v6323 = v6317+v6322;
	i8 v6324 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6324 = v6323;

	i8 v6325 = (i8)(intptr_t)(ws+3184);
	i1 v6326 = *(i1*)(intptr_t)v6325;
	i8 v6327 = (i8)(intptr_t)(ws+3192);
	i8 v6328 = *(i8*)(intptr_t)v6327;
	*(i1*)(intptr_t)v6328 = v6326;

	i8 v6329 = (i8)(intptr_t)(ws+3185);
	i1 v6330 = *(i1*)(intptr_t)v6329;
	i8 v6331 = (i8)(intptr_t)(ws+3192);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = v6332+(+1);
	*(i1*)(intptr_t)v6333 = v6330;

	i8 v6334 = (i8)(intptr_t)(ws+3186);
	i1 v6335 = *(i1*)(intptr_t)v6334;
	i1 v6336 = v6335+(+1);
	i8 v6337 = (i8)(intptr_t)(ws+3176);
	i8 v6338 = *(i8*)(intptr_t)v6337;
	i8 v6339 = v6338+(+60);
	*(i1*)(intptr_t)v6339 = v6336;

endsub:;
}
const i1 c02_s0164[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };

// CreateReload workspace at ws+3176 length ws+24
void f424_CreateReload(i1 p6340 /* dest */, i1 p6341 /* src */, i8 p6342 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6342; /*insn */
	*(i1*)(intptr_t)(ws+3184) = p6341; /*src */
	*(i1*)(intptr_t)(ws+3185) = p6340; /*dest */

	i8 v6343 = (i8)(intptr_t)(ws+3176);
	i8 v6344 = *(i8*)(intptr_t)v6343;
	i8 v6345 = v6344+(+61);
	i1 v6346 = *(i1*)(intptr_t)v6345;
	i8 v6347 = (i8)(intptr_t)(ws+3186);
	*(i1*)(intptr_t)v6347 = v6346;

	i8 v6348 = (i8)(intptr_t)(ws+3186);
	i1 v6349 = *(i1*)(intptr_t)v6348;
	i1 v6350 = (i1)+5;
	if (v6349==v6350) goto c02_059f; else goto c02_05a0;

c02_059f:;

	i8 v6351 = (i8)(intptr_t)c02_s0164;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v6351);

	goto c02_059c;

c02_05a0:;

c02_059c:;

	i8 v6352 = (i8)(intptr_t)(ws+3176);
	i8 v6353 = *(i8*)(intptr_t)v6352;
	i8 v6354 = v6353+(+52);
	i8 v6355 = (i8)(intptr_t)(ws+3186);
	i1 v6356 = *(i1*)(intptr_t)v6355;
	i8 v6357 = v6356;
	i1 v6358 = (i1)+1;
	i8 v6359 = ((i8)v6357)<<v6358;
	i8 v6360 = v6354+v6359;
	i8 v6361 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6361 = v6360;

	i8 v6362 = (i8)(intptr_t)(ws+3184);
	i1 v6363 = *(i1*)(intptr_t)v6362;
	i8 v6364 = (i8)(intptr_t)(ws+3192);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	*(i1*)(intptr_t)v6365 = v6363;

	i8 v6366 = (i8)(intptr_t)(ws+3185);
	i1 v6367 = *(i1*)(intptr_t)v6366;
	i8 v6368 = (i8)(intptr_t)(ws+3192);
	i8 v6369 = *(i8*)(intptr_t)v6368;
	i8 v6370 = v6369+(+1);
	*(i1*)(intptr_t)v6370 = v6367;

	i8 v6371 = (i8)(intptr_t)(ws+3186);
	i1 v6372 = *(i1*)(intptr_t)v6371;
	i1 v6373 = v6372+(+1);
	i8 v6374 = (i8)(intptr_t)(ws+3176);
	i8 v6375 = *(i8*)(intptr_t)v6374;
	i8 v6376 = v6375+(+61);
	*(i1*)(intptr_t)v6376 = v6373;

endsub:;
}

// ShuffleRegisters workspace at ws+3160 length ws+25
void f425_ShuffleRegisters(i8 p6377 /* moves */) {
	*(i8*)(intptr_t)(ws+3160) = p6377; /*moves */

	i1 v6378 = (i1)+0;
	i8 v6379 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6379 = v6378;

	i1 v6380 = (i1)+0;
	i8 v6381 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6381 = v6380;

	i8 v6382 = (i8)(intptr_t)(ws+3160);
	i8 v6383 = *(i8*)(intptr_t)v6382;
	i8 v6384 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6384 = v6383;

	i1 v6385 = (i1)+4;
	i8 v6386 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6386 = v6385;

c02_05a3:;

	i8 v6387 = (i8)(intptr_t)(ws+3184);
	i1 v6388 = *(i1*)(intptr_t)v6387;
	i1 v6389 = (i1)+0;
	if (v6388==v6389) goto c02_05a6; else goto c02_05a5;

c02_05a5:;

	i8 v6390 = (i8)(intptr_t)(ws+3168);
	i1 v6391 = *(i1*)(intptr_t)v6390;
	i8 v6392 = (i8)(intptr_t)(ws+3176);
	i8 v6393 = *(i8*)(intptr_t)v6392;
	i8 v6394 = v6393+(+1);
	i1 v6395 = *(i1*)(intptr_t)v6394;
	i1 v6396 = v6391|v6395;
	i8 v6397 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6397 = v6396;

	i8 v6398 = (i8)(intptr_t)(ws+3169);
	i1 v6399 = *(i1*)(intptr_t)v6398;
	i8 v6400 = (i8)(intptr_t)(ws+3176);
	i8 v6401 = *(i8*)(intptr_t)v6400;
	i1 v6402 = *(i1*)(intptr_t)v6401;
	i1 v6403 = v6399|v6402;
	i8 v6404 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6404 = v6403;

	i8 v6405 = (i8)(intptr_t)(ws+3184);
	i1 v6406 = *(i1*)(intptr_t)v6405;
	i1 v6407 = v6406+(-1);
	i8 v6408 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6408 = v6407;

	i8 v6409 = (i8)(intptr_t)(ws+3176);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = v6410+(+2);
	i8 v6412 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6412 = v6411;

	goto c02_05a3;

c02_05a6:;

c02_05a7:;

	i8 v6413 = (i8)(intptr_t)(ws+3160);
	i8 v6414 = *(i8*)(intptr_t)v6413;
	i8 v6415 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6415 = v6414;

	i1 v6416 = (i1)+4;
	i8 v6417 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6417 = v6416;

c02_05ab:;

	i8 v6418 = (i8)(intptr_t)(ws+3184);
	i1 v6419 = *(i1*)(intptr_t)v6418;
	i1 v6420 = (i1)+0;
	if (v6419==v6420) goto c02_05ae; else goto c02_05ad;

c02_05ad:;

	i8 v6421 = (i8)(intptr_t)(ws+3176);
	i8 v6422 = *(i8*)(intptr_t)v6421;
	i1 v6423 = *(i1*)(intptr_t)v6422;
	i1 v6424 = (i1)+0;
	if (v6423==v6424) goto c02_05b5; else goto c02_05b6;

c02_05b6:;

	i8 v6425 = (i8)(intptr_t)(ws+3176);
	i8 v6426 = *(i8*)(intptr_t)v6425;
	i8 v6427 = v6426+(+1);
	i1 v6428 = *(i1*)(intptr_t)v6427;
	i1 v6429 = (i1)+0;
	if (v6428==v6429) goto c02_05b4; else goto c02_05b5;

c02_05b4:;

	goto c02_05ae;

c02_05b5:;

c02_05af:;

	i8 v6430 = (i8)(intptr_t)(ws+3176);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = v6431+(+2);
	i8 v6433 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6433 = v6432;

	i8 v6434 = (i8)(intptr_t)(ws+3184);
	i1 v6435 = *(i1*)(intptr_t)v6434;
	i1 v6436 = v6435+(-1);
	i8 v6437 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6437 = v6436;

	goto c02_05ab;

c02_05ae:;

	i8 v6438 = (i8)(intptr_t)(ws+3184);
	i1 v6439 = *(i1*)(intptr_t)v6438;
	i1 v6440 = (i1)+0;
	if (v6439==v6440) goto c02_05bb; else goto c02_05ba;

c02_05ba:;

	i8 v6441 = (i8)(intptr_t)(ws+3176);
	i8 v6442 = *(i8*)(intptr_t)v6441;
	i1 v6443 = *(i1*)(intptr_t)v6442;
	i1 v6444 = (i1)+0;

void f224_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f224_ArchEmitMove(v6444, v6443);

	i8 v6445 = (i8)(intptr_t)(ws+3169);
	i1 v6446 = *(i1*)(intptr_t)v6445;
	i8 v6447 = (i8)(intptr_t)(ws+3176);
	i8 v6448 = *(i8*)(intptr_t)v6447;
	i1 v6449 = *(i1*)(intptr_t)v6448;
	i1 v6450 = ~v6449;
	i1 v6451 = v6446&v6450;
	i8 v6452 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6452 = v6451;

	i1 v6453 = (i1)+0;
	i8 v6454 = (i8)(intptr_t)(ws+3176);
	i8 v6455 = *(i8*)(intptr_t)v6454;
	*(i1*)(intptr_t)v6455 = v6453;

	goto c02_05a7;

c02_05bb:;

c02_05b7:;

	i8 v6456 = (i8)(intptr_t)(ws+3160);
	i8 v6457 = *(i8*)(intptr_t)v6456;
	i8 v6458 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6458 = v6457;

	i1 v6459 = (i1)+4;
	i8 v6460 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6460 = v6459;

c02_05be:;

	i8 v6461 = (i8)(intptr_t)(ws+3184);
	i1 v6462 = *(i1*)(intptr_t)v6461;
	i1 v6463 = (i1)+0;
	if (v6462==v6463) goto c02_05c1; else goto c02_05c0;

c02_05c0:;

	i8 v6464 = (i8)(intptr_t)(ws+3176);
	i8 v6465 = *(i8*)(intptr_t)v6464;
	i1 v6466 = *(i1*)(intptr_t)v6465;
	i1 v6467 = (i1)+0;
	if (v6466==v6467) goto c02_05ca; else goto c02_05cc;

c02_05cc:;

	i8 v6468 = (i8)(intptr_t)(ws+3176);
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = v6469+(+1);
	i1 v6471 = *(i1*)(intptr_t)v6470;
	i1 v6472 = (i1)+0;
	if (v6471==v6472) goto c02_05ca; else goto c02_05cb;

c02_05cb:;

	i8 v6473 = (i8)(intptr_t)(ws+3176);
	i8 v6474 = *(i8*)(intptr_t)v6473;
	i8 v6475 = v6474+(+1);
	i1 v6476 = *(i1*)(intptr_t)v6475;
	i8 v6477 = (i8)(intptr_t)(ws+3169);
	i1 v6478 = *(i1*)(intptr_t)v6477;
	i1 v6479 = v6476&v6478;
	i1 v6480 = (i1)+0;
	if (v6479==v6480) goto c02_05c9; else goto c02_05ca;

c02_05c9:;

	goto c02_05c1;

c02_05ca:;

c02_05c2:;

	i8 v6481 = (i8)(intptr_t)(ws+3176);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = v6482+(+2);
	i8 v6484 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6484 = v6483;

	i8 v6485 = (i8)(intptr_t)(ws+3184);
	i1 v6486 = *(i1*)(intptr_t)v6485;
	i1 v6487 = v6486+(-1);
	i8 v6488 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6488 = v6487;

	goto c02_05be;

c02_05c1:;

	i8 v6489 = (i8)(intptr_t)(ws+3184);
	i1 v6490 = *(i1*)(intptr_t)v6489;
	i1 v6491 = (i1)+0;
	if (v6490==v6491) goto c02_05d1; else goto c02_05d0;

c02_05d0:;

	i8 v6492 = (i8)(intptr_t)(ws+3176);
	i8 v6493 = *(i8*)(intptr_t)v6492;
	i1 v6494 = *(i1*)(intptr_t)v6493;
	i8 v6495 = (i8)(intptr_t)(ws+3176);
	i8 v6496 = *(i8*)(intptr_t)v6495;
	i8 v6497 = v6496+(+1);
	i1 v6498 = *(i1*)(intptr_t)v6497;

void f224_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f224_ArchEmitMove(v6498, v6494);

	i8 v6499 = (i8)(intptr_t)(ws+3169);
	i1 v6500 = *(i1*)(intptr_t)v6499;
	i8 v6501 = (i8)(intptr_t)(ws+3176);
	i8 v6502 = *(i8*)(intptr_t)v6501;
	i1 v6503 = *(i1*)(intptr_t)v6502;
	i1 v6504 = ~v6503;
	i1 v6505 = v6500&v6504;
	i8 v6506 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6506 = v6505;

	i8 v6507 = (i8)(intptr_t)(ws+3168);
	i1 v6508 = *(i1*)(intptr_t)v6507;
	i8 v6509 = (i8)(intptr_t)(ws+3176);
	i8 v6510 = *(i8*)(intptr_t)v6509;
	i8 v6511 = v6510+(+1);
	i1 v6512 = *(i1*)(intptr_t)v6511;
	i1 v6513 = ~v6512;
	i1 v6514 = v6508&v6513;
	i8 v6515 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6515 = v6514;

	i1 v6516 = (i1)+0;
	i8 v6517 = (i8)(intptr_t)(ws+3176);
	i8 v6518 = *(i8*)(intptr_t)v6517;
	*(i1*)(intptr_t)v6518 = v6516;

	i1 v6519 = (i1)+0;
	i8 v6520 = (i8)(intptr_t)(ws+3176);
	i8 v6521 = *(i8*)(intptr_t)v6520;
	i8 v6522 = v6521+(+1);
	*(i1*)(intptr_t)v6522 = v6519;

	goto c02_05a7;

c02_05d1:;

c02_05cd:;

	i8 v6523 = (i8)(intptr_t)(ws+3160);
	i8 v6524 = *(i8*)(intptr_t)v6523;
	i8 v6525 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6525 = v6524;

	i1 v6526 = (i1)+4;
	i8 v6527 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6527 = v6526;

c02_05d4:;

	i8 v6528 = (i8)(intptr_t)(ws+3184);
	i1 v6529 = *(i1*)(intptr_t)v6528;
	i1 v6530 = (i1)+0;
	if (v6529==v6530) goto c02_05d7; else goto c02_05d6;

c02_05d6:;

	i8 v6531 = (i8)(intptr_t)(ws+3176);
	i8 v6532 = *(i8*)(intptr_t)v6531;
	i1 v6533 = *(i1*)(intptr_t)v6532;
	i1 v6534 = (i1)+0;
	if (v6533==v6534) goto c02_05df; else goto c02_05de;

c02_05df:;

	i8 v6535 = (i8)(intptr_t)(ws+3176);
	i8 v6536 = *(i8*)(intptr_t)v6535;
	i8 v6537 = v6536+(+1);
	i1 v6538 = *(i1*)(intptr_t)v6537;
	i1 v6539 = (i1)+0;
	if (v6538==v6539) goto c02_05de; else goto c02_05dd;

c02_05dd:;

	goto c02_05d7;

c02_05de:;

c02_05d8:;

	i8 v6540 = (i8)(intptr_t)(ws+3176);
	i8 v6541 = *(i8*)(intptr_t)v6540;
	i8 v6542 = v6541+(+2);
	i8 v6543 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6543 = v6542;

	i8 v6544 = (i8)(intptr_t)(ws+3184);
	i1 v6545 = *(i1*)(intptr_t)v6544;
	i1 v6546 = v6545+(-1);
	i8 v6547 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6547 = v6546;

	goto c02_05d4;

c02_05d7:;

	i8 v6548 = (i8)(intptr_t)(ws+3184);
	i1 v6549 = *(i1*)(intptr_t)v6548;
	i1 v6550 = (i1)+0;
	if (v6549==v6550) goto c02_05e4; else goto c02_05e3;

c02_05e3:;

	i1 v6551 = (i1)+0;
	i8 v6552 = (i8)(intptr_t)(ws+3176);
	i8 v6553 = *(i8*)(intptr_t)v6552;
	i8 v6554 = v6553+(+1);
	i1 v6555 = *(i1*)(intptr_t)v6554;

void f224_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f224_ArchEmitMove(v6555, v6551);

	i8 v6556 = (i8)(intptr_t)(ws+3168);
	i1 v6557 = *(i1*)(intptr_t)v6556;
	i8 v6558 = (i8)(intptr_t)(ws+3176);
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = v6559+(+1);
	i1 v6561 = *(i1*)(intptr_t)v6560;
	i1 v6562 = ~v6561;
	i1 v6563 = v6557&v6562;
	i8 v6564 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6564 = v6563;

	i1 v6565 = (i1)+0;
	i8 v6566 = (i8)(intptr_t)(ws+3176);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	i8 v6568 = v6567+(+1);
	*(i1*)(intptr_t)v6568 = v6565;

	goto c02_05a7;

c02_05e4:;

c02_05e0:;

	i8 v6569 = (i8)(intptr_t)(ws+3160);
	i8 v6570 = *(i8*)(intptr_t)v6569;
	i8 v6571 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6571 = v6570;

	i1 v6572 = (i1)+4;
	i8 v6573 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6573 = v6572;

c02_05e7:;

	i8 v6574 = (i8)(intptr_t)(ws+3184);
	i1 v6575 = *(i1*)(intptr_t)v6574;
	i1 v6576 = (i1)+0;
	if (v6575==v6576) goto c02_05ea; else goto c02_05e9;

c02_05e9:;

	i8 v6577 = (i8)(intptr_t)(ws+3176);
	i8 v6578 = *(i8*)(intptr_t)v6577;
	i1 v6579 = *(i1*)(intptr_t)v6578;
	i1 v6580 = (i1)+0;
	if (v6579==v6580) goto c02_05f1; else goto c02_05f2;

c02_05f2:;

	i8 v6581 = (i8)(intptr_t)(ws+3176);
	i8 v6582 = *(i8*)(intptr_t)v6581;
	i8 v6583 = v6582+(+1);
	i1 v6584 = *(i1*)(intptr_t)v6583;
	i1 v6585 = (i1)+0;
	if (v6584==v6585) goto c02_05f1; else goto c02_05f0;

c02_05f0:;

	goto c02_05ea;

c02_05f1:;

c02_05eb:;

	i8 v6586 = (i8)(intptr_t)(ws+3176);
	i8 v6587 = *(i8*)(intptr_t)v6586;
	i8 v6588 = v6587+(+2);
	i8 v6589 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6589 = v6588;

	i8 v6590 = (i8)(intptr_t)(ws+3184);
	i1 v6591 = *(i1*)(intptr_t)v6590;
	i1 v6592 = v6591+(-1);
	i8 v6593 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6593 = v6592;

	goto c02_05e7;

c02_05ea:;

	i8 v6594 = (i8)(intptr_t)(ws+3184);
	i1 v6595 = *(i1*)(intptr_t)v6594;
	i1 v6596 = (i1)+0;
	if (v6595==v6596) goto c02_05f7; else goto c02_05f6;

c02_05f6:;

	i8 v6597 = (i8)(intptr_t)(ws+3176);
	i8 v6598 = *(i8*)(intptr_t)v6597;
	i1 v6599 = *(i1*)(intptr_t)v6598;
	i1 v6600 = (i1)+0;

void f224_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f224_ArchEmitMove(v6600, v6599);

	i8 v6601 = (i8)(intptr_t)(ws+3169);
	i1 v6602 = *(i1*)(intptr_t)v6601;
	i8 v6603 = (i8)(intptr_t)(ws+3176);
	i8 v6604 = *(i8*)(intptr_t)v6603;
	i1 v6605 = *(i1*)(intptr_t)v6604;
	i1 v6606 = ~v6605;
	i1 v6607 = v6602&v6606;
	i8 v6608 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6608 = v6607;

	i1 v6609 = (i1)+0;
	i8 v6610 = (i8)(intptr_t)(ws+3176);
	i8 v6611 = *(i8*)(intptr_t)v6610;
	*(i1*)(intptr_t)v6611 = v6609;

	goto c02_05a7;

c02_05f7:;

c02_05f3:;

	goto c02_05a8;

c02_05a8:;

endsub:;
}

// PrintNodes workspace at ws+3176 length ws+24
void f426_PrintNodes(i8 p6612 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3176) = p6612; /*rootnode */

	i8 v6613 = (i8)(intptr_t)(ws+984);
	i8 v6614 = *(i8*)(intptr_t)v6613;
	i8 v6615 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6615 = v6614;

	i8 v6616 = (i8)(intptr_t)(ws+3176);
	i8 v6617 = *(i8*)(intptr_t)v6616;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v6617);

c02_05fa:;

	i8 v6618 = (i8)(intptr_t)(ws+984);
	i8 v6619 = *(i8*)(intptr_t)v6618;
	i8 v6620 = (i8)(intptr_t)(ws+3184);
	i8 v6621 = *(i8*)(intptr_t)v6620;
	if (v6619==v6621) goto c02_05fd; else goto c02_05fc;

c02_05fc:;


void f419_NextNode(i8* /* node */);
	i8 v6622;
	f419_NextNode(&v6622);
	i8 v6623 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6623 = v6622;

	i8 v6624 = (i8)(intptr_t)(ws+3192);
	i8 v6625 = *(i8*)(intptr_t)v6624;
	i8 v6626 = (i8)+0;
	if (v6625==v6626) goto c02_0601; else goto c02_0602;

c02_0601:;

	goto c02_05fd;

c02_0602:;

c02_05fe:;

	i8 v6627 = (i8)(intptr_t)(ws+3192);
	i8 v6628 = *(i8*)(intptr_t)v6627;
	i4 v6629 = v6628;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6629);

	i1 v6630 = (i1)+32;

void f8_print_char(i1 /* c */);
	f8_print_char(v6630);

	i8 v6631 = (i8)(intptr_t)(ws+3192);
	i8 v6632 = *(i8*)(intptr_t)v6631;
	i8 v6633 = v6632+(+66);
	i1 v6634 = *(i1*)(intptr_t)v6633;

void f17_print_i8(i1 /* value */);
	f17_print_i8(v6634);

	i1 v6635 = (i1)+32;

void f8_print_char(i1 /* c */);
	f8_print_char(v6635);

	i8 v6636 = (i8)(intptr_t)(ws+3192);
	i8 v6637 = *(i8*)(intptr_t)v6636;
	i8 v6638 = v6637+(+64);
	i1 v6639 = *(i1*)(intptr_t)v6638;
	i2 v6640 = v6639;

void f19_print_hex_i16(i2 /* value */);
	f19_print_hex_i16(v6640);

	i1 v6641 = (i1)+32;

void f8_print_char(i1 /* c */);
	f8_print_char(v6641);

	i8 v6642 = (i8)(intptr_t)(ws+3192);
	i8 v6643 = *(i8*)(intptr_t)v6642;
	i8 v6644 = v6643+(+65);
	i1 v6645 = *(i1*)(intptr_t)v6644;
	i2 v6646 = v6645;

void f19_print_hex_i16(i2 /* value */);
	f19_print_hex_i16(v6646);

	i1 v6647 = (i1)+32;

void f8_print_char(i1 /* c */);
	f8_print_char(v6647);

	i8 v6648 = (i8)(intptr_t)(ws+3192);
	i8 v6649 = *(i8*)(intptr_t)v6648;
	i8 v6650 = v6649+(+24);
	i8 v6651 = *(i8*)(intptr_t)v6650;
	i4 v6652 = v6651;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6652);

	i1 v6653 = (i1)+32;

void f8_print_char(i1 /* c */);
	f8_print_char(v6653);

	i8 v6654 = (i8)(intptr_t)(ws+3192);
	i8 v6655 = *(i8*)(intptr_t)v6654;
	i8 v6656 = v6655+(+32);
	i8 v6657 = *(i8*)(intptr_t)v6656;
	i4 v6658 = v6657;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6658);


void f12_print_nl(void);
	f12_print_nl();

	goto c02_05fa;

c02_05fd:;

endsub:;
}

// RewindRulePointers workspace at ws+3208 length ws+0
void f429_RewindRulePointers(void) {

	i8 v6699 = (i8)(intptr_t)(ws+3152);
	i8 v6700 = (i8)+3;

void f22_MemZero(i8 /* size */, i8 /* ptr */);
	f22_MemZero(v6700, v6699);

	i8 v6701 = (i8)(intptr_t)(ws+3160);
	i8 v6702 = (i8)+24;

void f22_MemZero(i8 /* size */, i8 /* ptr */);
	f22_MemZero(v6702, v6701);

	i8 v6703 = (i8)(intptr_t)(ws+3128);
	i8 v6704 = *(i8*)(intptr_t)v6703;
	i8 v6705 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v6705 = v6704;

	i8 v6706 = (i8)(intptr_t)(ws+3120);
	i8 v6707 = *(i8*)(intptr_t)v6706;
	i8 v6708 = (i8)(intptr_t)(ws+3160);
	i8 v6709 = (i8)(intptr_t)(ws+3152);

void f416_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);
	f416_PopulateMatchBuffer(v6709, v6708, v6707);

	i1 v6710 = (i1)+255;
	i8 v6711 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v6711 = v6710;

	i8 v6712 = (i8)(intptr_t)(((i1*)c02_a55a+0));
	i8 v6713 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6713 = v6712;

	i8 v6714 = (i8)(intptr_t)(((i1*)c02_a55b+0));
	i8 v6715 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6715 = v6714;

	i8 v6716 = (i8)(intptr_t)(((i1*)c02_a55c-7));
	i8 v6717 = (i8)(intptr_t)(ws+3144);
	*(i8*)(intptr_t)v6717 = v6716;

endsub:;
}

// TestRule workspace at ws+3208 length ws+27
void f430_TestRule(i1* p6718 /* result */) {

	i1 v6719 = (i1)+0;
	i8 v6720 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6720 = v6719;

	i8 v6721 = (i8)(intptr_t)(ws+3144);
	i8 v6722 = *(i8*)(intptr_t)v6721;
	i8 v6723 = v6722+(+1);
	i1 v6724 = *(i1*)(intptr_t)v6723;
	i1 v6725 = (i1)+0;
	if (v6724==v6725) goto c02_0612; else goto c02_0611;

c02_0611:;

	i8 v6726 = (i8)(intptr_t)(ws+3128);
	i8 v6727 = *(i8*)(intptr_t)v6726;
	i8 v6728 = v6727+(+64);
	i1 v6729 = *(i1*)(intptr_t)v6728;
	i8 v6730 = (i8)(intptr_t)(ws+3144);
	i8 v6731 = *(i8*)(intptr_t)v6730;
	i8 v6732 = v6731+(+1);
	i1 v6733 = *(i1*)(intptr_t)v6732;
	i1 v6734 = v6729&v6733;
	i1 v6735 = (i1)+0;
	if (v6734==v6735) goto c02_0616; else goto c02_0617;

c02_0616:;

	goto endsub;

c02_0617:;

c02_0613:;

	goto c02_060e;

c02_0612:;

	i8 v6736 = (i8)(intptr_t)(ws+3128);
	i8 v6737 = *(i8*)(intptr_t)v6736;
	i8 v6738 = v6737+(+64);
	i1 v6739 = *(i1*)(intptr_t)v6738;
	i1 v6740 = (i1)+0;
	if (v6739==v6740) goto c02_061c; else goto c02_061b;

c02_061b:;

	goto endsub;

c02_061c:;

c02_0618:;

c02_060e:;

	i8 v6741 = (i8)(intptr_t)(ws+3152);
	i8 v6742 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6742 = v6741;

	i8 v6743 = (i8)(intptr_t)(ws+3184);
	i8 v6744 = *(i8*)(intptr_t)v6743;
	i8 v6745 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6745 = v6744;

	i8 v6746 = (i8)(intptr_t)(ws+3144);
	i8 v6747 = *(i8*)(intptr_t)v6746;
	i8 v6748 = v6747+(+4);
	i1 v6749 = *(i1*)(intptr_t)v6748;
	i8 v6750 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6750 = v6749;

c02_061f:;

	i8 v6751 = (i8)(intptr_t)(ws+3232);
	i1 v6752 = *(i1*)(intptr_t)v6751;
	i1 v6753 = (i1)+0;
	if (v6752==v6753) goto c02_0622; else goto c02_0621;

c02_0621:;

	i8 v6754 = (i8)(intptr_t)(ws+3216);
	i8 v6755 = *(i8*)(intptr_t)v6754;
	i1 v6756 = *(i1*)(intptr_t)v6755;
	i8 v6757 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v6757 = v6756;

	i8 v6758 = (i8)(intptr_t)(ws+3216);
	i8 v6759 = *(i8*)(intptr_t)v6758;
	i8 v6760 = v6759+(+1);
	i8 v6761 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6761 = v6760;

	i8 v6762 = (i8)(intptr_t)(ws+3232);
	i1 v6763 = *(i1*)(intptr_t)v6762;
	i1 v6764 = v6763&(+1);
	i1 v6765 = (i1)+0;
	if (v6764==v6765) goto c02_0627; else goto c02_0626;

c02_0626:;

	i8 v6766 = (i8)(intptr_t)(ws+3224);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	i1 v6768 = *(i1*)(intptr_t)v6767;
	i8 v6769 = (i8)(intptr_t)(ws+3234);
	*(i1*)(intptr_t)v6769 = v6768;

	i8 v6770 = (i8)(intptr_t)(ws+3224);
	i8 v6771 = *(i8*)(intptr_t)v6770;
	i8 v6772 = v6771+(+1);
	i8 v6773 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6773 = v6772;

	i8 v6774 = (i8)(intptr_t)(ws+3233);
	i1 v6775 = *(i1*)(intptr_t)v6774;
	i8 v6776 = (i8)(intptr_t)(ws+3234);
	i1 v6777 = *(i1*)(intptr_t)v6776;
	if (v6775==v6777) goto c02_062c; else goto c02_062b;

c02_062b:;

	goto endsub;

c02_062c:;

c02_0628:;

	goto c02_0623;

c02_0627:;

c02_0623:;

	i8 v6778 = (i8)(intptr_t)(ws+3232);
	i1 v6779 = *(i1*)(intptr_t)v6778;
	i1 v6780 = (i1)+1;
	i1 v6781 = ((i1)v6779)>>v6780;
	i8 v6782 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6782 = v6781;

	goto c02_061f;

c02_0622:;

	i8 v6783 = (i8)(intptr_t)(ws+3144);
	i8 v6784 = *(i8*)(intptr_t)v6783;
	i1 v6785 = *(i1*)(intptr_t)v6784;
	i1 v6786 = v6785&(+1);
	i1 v6787 = (i1)+0;
	if (v6786==v6787) goto c02_0633; else goto c02_0634;

c02_0634:;

	i8 v6788 = (i8)(intptr_t)(ws+3136);
	i1 v6789 = *(i1*)(intptr_t)v6788;
	i8 v6790 = (i8)(intptr_t)(ws+3160);

void f244_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);
	i1 v6791;
	f244_MatchPredicate(&v6791, v6790, v6789);
	i1 v6792 = (i1)+0;
	if (v6791==v6792) goto c02_0632; else goto c02_0633;

c02_0632:;

	goto endsub;

c02_0633:;

c02_062d:;

	i1 v6793 = (i1)+1;
	i8 v6794 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6794 = v6793;

endsub:;
	*p6718 = *(i1*)(intptr_t)(ws+3208);
}

// ConvertNodeToFallback workspace at ws+3208 length ws+25
void f431_ConvertNodeToFallback(void) {

	i8 v6816 = (i8)(intptr_t)(ws+3128);
	i8 v6817 = *(i8*)(intptr_t)v6816;
	i8 v6818 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v6818 = v6817;

	i8 v6819 = (i8)(intptr_t)(ws+3208);
	i8 v6820 = *(i8*)(intptr_t)v6819;

void f105_MidFallback(i8* /* m */, i8 /* left */);
	i8 v6821;
	f105_MidFallback(&v6821, v6820);
	i8 v6822 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v6822 = v6821;

	i8 v6823 = (i8)(intptr_t)(ws+3208);
	i8 v6824 = *(i8*)(intptr_t)v6823;
	i8 v6825 = v6824+(+56);
	i8 v6826 = *(i8*)(intptr_t)v6825;
	i8 v6827 = (i8)(intptr_t)(ws+3128);
	i8 v6828 = *(i8*)(intptr_t)v6827;
	i8 v6829 = v6828+(+56);
	*(i8*)(intptr_t)v6829 = v6826;

	i8 v6830 = (i8)(intptr_t)(ws+3128);
	i8 v6831 = *(i8*)(intptr_t)v6830;
	i8 v6832 = v6831+(+56);
	i8 v6833 = *(i8*)(intptr_t)v6832;
	i8 v6834 = v6833+(+16);
	i8 v6835 = *(i8*)(intptr_t)v6834;
	i8 v6836 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6836 = v6835;

	i8 v6837 = (i8)(intptr_t)(ws+3208);
	i8 v6838 = *(i8*)(intptr_t)v6837;
	i8 v6839 = v6838+(+64);
	i1 v6840 = *(i1*)(intptr_t)v6839;
	i8 v6841 = (i8)(intptr_t)(ws+3128);
	i8 v6842 = *(i8*)(intptr_t)v6841;
	i8 v6843 = v6842+(+64);
	*(i1*)(intptr_t)v6843 = v6840;

	i8 v6844 = (i8)(intptr_t)(ws+3216);
	i8 v6845 = *(i8*)(intptr_t)v6844;
	i8 v6846 = v6845+(+48);
	i8 v6847 = *(i8*)(intptr_t)v6846;
	i8 v6848 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6848 = v6847;

	i1 v6849 = (i1)+0;
	i8 v6850 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6850 = v6849;

c02_0646:;

	i8 v6851 = (i8)(intptr_t)(ws+3232);
	i1 v6852 = *(i1*)(intptr_t)v6851;
	i1 v6853 = (i1)+3;
	if (v6852==v6853) goto c02_0649; else goto c02_0648;

c02_0648:;

	i8 v6854 = (i8)(intptr_t)(ws+3224);
	i8 v6855 = *(i8*)(intptr_t)v6854;
	i8 v6856 = v6855+(+16);
	i8 v6857 = (i8)(intptr_t)(ws+3232);
	i1 v6858 = *(i1*)(intptr_t)v6857;
	i8 v6859 = v6858;
	i1 v6860 = (i1)+3;
	i8 v6861 = ((i8)v6859)<<v6860;
	i8 v6862 = v6856+v6861;
	i8 v6863 = *(i8*)(intptr_t)v6862;
	i8 v6864 = (i8)(intptr_t)(ws+3208);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	if (v6863==v6865) goto c02_064d; else goto c02_064e;

c02_064d:;

	i8 v6866 = (i8)(intptr_t)(ws+3128);
	i8 v6867 = *(i8*)(intptr_t)v6866;
	i8 v6868 = (i8)(intptr_t)(ws+3224);
	i8 v6869 = *(i8*)(intptr_t)v6868;
	i8 v6870 = v6869+(+16);
	i8 v6871 = (i8)(intptr_t)(ws+3232);
	i1 v6872 = *(i1*)(intptr_t)v6871;
	i8 v6873 = v6872;
	i1 v6874 = (i1)+3;
	i8 v6875 = ((i8)v6873)<<v6874;
	i8 v6876 = v6870+v6875;
	*(i8*)(intptr_t)v6876 = v6867;

	goto c02_064a;

c02_064e:;

c02_064a:;

	i8 v6877 = (i8)(intptr_t)(ws+3232);
	i1 v6878 = *(i1*)(intptr_t)v6877;
	i1 v6879 = v6878+(+1);
	i8 v6880 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6880 = v6879;

	goto c02_0646;

c02_0649:;

endsub:;
}
const i1 c02_s0165[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
const i1 c02_s0166[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };

// CopyChildNodes workspace at ws+3208 length ws+16
void f432_CopyChildNodes(void) {

	i8 v6967 = (i8)(intptr_t)(ws+3144);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i8 v6969 = v6968+(+5);
	i1 v6970 = *(i1*)(intptr_t)v6969;
	i8 v6971 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6971 = v6970;

	i8 v6972 = (i8)(intptr_t)(ws+3144);
	i8 v6973 = *(i8*)(intptr_t)v6972;
	i8 v6974 = v6973+(+6);
	i1 v6975 = *(i1*)(intptr_t)v6974;
	i8 v6976 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v6976 = v6975;

	i1 v6977 = (i1)+0;
	i8 v6978 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6978 = v6977;

c02_0672:;

	i8 v6979 = (i8)(intptr_t)(ws+3088);
	i1 v6980 = *(i1*)(intptr_t)v6979;
	i1 v6981 = (i1)+3;
	if (v6980==v6981) goto c02_0675; else goto c02_0674;

c02_0674:;

	i8 v6982 = (i8)(intptr_t)(ws+3160);
	i8 v6983 = (i8)(intptr_t)(ws+3088);
	i1 v6984 = *(i1*)(intptr_t)v6983;
	i8 v6985 = v6984;
	i1 v6986 = (i1)+3;
	i8 v6987 = ((i8)v6985)<<v6986;
	i8 v6988 = v6982+v6987;
	i8 v6989 = *(i8*)(intptr_t)v6988;
	i8 v6990 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6990 = v6989;

	i8 v6991 = (i8)(intptr_t)(ws+3208);
	i1 v6992 = *(i1*)(intptr_t)v6991;
	i1 v6993 = v6992&(+1);
	i1 v6994 = (i1)+0;
	if (v6993==v6994) goto c02_067a; else goto c02_0679;

c02_0679:;

	i8 v6995 = (i8)(intptr_t)(ws+3216);
	i8 v6996 = *(i8*)(intptr_t)v6995;
	i8 v6997 = (i8)(intptr_t)(ws+3120);
	i8 v6998 = *(i8*)(intptr_t)v6997;
	i8 v6999 = v6998+(+16);
	i8 v7000 = (i8)(intptr_t)(ws+3088);
	i1 v7001 = *(i1*)(intptr_t)v7000;
	i8 v7002 = v7001;
	i1 v7003 = (i1)+3;
	i8 v7004 = ((i8)v7002)<<v7003;
	i8 v7005 = v6999+v7004;
	*(i8*)(intptr_t)v7005 = v6996;

	i8 v7006 = (i8)(intptr_t)(ws+3209);
	i1 v7007 = *(i1*)(intptr_t)v7006;
	i1 v7008 = v7007&(+1);
	i1 v7009 = (i1)+0;
	if (v7008==v7009) goto c02_067f; else goto c02_067e;

c02_067e:;

	i8 v7010 = (i8)(intptr_t)(ws+3216);
	i8 v7011 = *(i8*)(intptr_t)v7010;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v7011);

	i8 v7012 = (i8)(intptr_t)(ws+3192);
	i8 v7013 = *(i8*)(intptr_t)v7012;
	i1 v7014 = *(i1*)(intptr_t)v7013;
	i8 v7015 = (i8)(intptr_t)(ws+3216);
	i8 v7016 = *(i8*)(intptr_t)v7015;
	i8 v7017 = v7016+(+64);
	*(i1*)(intptr_t)v7017 = v7014;

	i8 v7018 = (i8)(intptr_t)(ws+3192);
	i8 v7019 = *(i8*)(intptr_t)v7018;
	i8 v7020 = v7019+(+1);
	i8 v7021 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7021 = v7020;

	i8 v7022 = (i8)(intptr_t)(ws+3120);
	i8 v7023 = *(i8*)(intptr_t)v7022;
	i8 v7024 = (i8)(intptr_t)(ws+3216);
	i8 v7025 = *(i8*)(intptr_t)v7024;
	i8 v7026 = v7025+(+56);
	*(i8*)(intptr_t)v7026 = v7023;

	goto c02_067b;

c02_067f:;

c02_067b:;

	goto c02_0676;

c02_067a:;

c02_0676:;

	i8 v7027 = (i8)(intptr_t)(ws+3208);
	i1 v7028 = *(i1*)(intptr_t)v7027;
	i1 v7029 = (i1)+1;
	i1 v7030 = ((i1)v7028)>>v7029;
	i8 v7031 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v7031 = v7030;

	i8 v7032 = (i8)(intptr_t)(ws+3209);
	i1 v7033 = *(i1*)(intptr_t)v7032;
	i1 v7034 = (i1)+1;
	i1 v7035 = ((i1)v7033)>>v7034;
	i8 v7036 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v7036 = v7035;

	i8 v7037 = (i8)(intptr_t)(ws+3088);
	i1 v7038 = *(i1*)(intptr_t)v7037;
	i1 v7039 = v7038+(+1);
	i8 v7040 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v7040 = v7039;

	goto c02_0672;

c02_0675:;

	i8 v7041 = (i8)(intptr_t)(ws+3120);
	i8 v7042 = *(i8*)(intptr_t)v7041;
	i8 v7043 = (i8)(intptr_t)(ws+3128);
	i8 v7044 = *(i8*)(intptr_t)v7043;
	i8 v7045 = v7044+(+48);
	*(i8*)(intptr_t)v7045 = v7042;

endsub:;
}

// InstructionMatcher workspace at ws+3152 length ws+49
void f428_InstructionMatcher(void) {




void f429_RewindRulePointers(void);
	f429_RewindRulePointers();

c02_0635:;

	i8 v6795 = (i8)(intptr_t)(ws+3144);
	i8 v6796 = *(i8*)(intptr_t)v6795;
	i8 v6797 = v6796+(+7);
	i8 v6798 = (i8)(intptr_t)(ws+3144);
	*(i8*)(intptr_t)v6798 = v6797;

	i8 v6799 = (i8)(intptr_t)(ws+3136);
	i1 v6800 = *(i1*)(intptr_t)v6799;
	i1 v6801 = v6800+(+1);
	i8 v6802 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v6802 = v6801;

	i8 v6803 = (i8)(intptr_t)(ws+3144);
	i8 v6804 = *(i8*)(intptr_t)v6803;
	i8 v6805 = (i8)(intptr_t)(((i1*)c02_a55c+1288));
	if (v6804==v6805) goto c02_063a; else goto c02_063b;

c02_063a:;

	i8 v6806 = (i8)(intptr_t)(ws+3128);
	i8 v6807 = *(i8*)(intptr_t)v6806;
	i8 v6808 = v6807+(+66);
	i1 v6809 = *(i1*)(intptr_t)v6808;
	i1 v6810 = (i1)+19;
	if (v6809==v6810) goto c02_0642; else goto c02_0643;

c02_0643:;

	i8 v6811 = (i8)(intptr_t)(ws+3128);
	i8 v6812 = *(i8*)(intptr_t)v6811;
	i8 v6813 = v6812+(+56);
	i8 v6814 = *(i8*)(intptr_t)v6813;
	i8 v6815 = (i8)+0;
	if (v6814==v6815) goto c02_0642; else goto c02_0641;

c02_0641:;



void f431_ConvertNodeToFallback(void);
	f431_ConvertNodeToFallback();


void f429_RewindRulePointers(void);
	f429_RewindRulePointers();

	goto c02_0635;

c02_0642:;

c02_063c:;


void f55_StartError(void);
	f55_StartError();

	i8 v6881 = (i8)(intptr_t)c02_s0165;

void f11_print(i8 /* ptr */);
	f11_print(v6881);

	i1 v6882 = (i1)+0;
	i8 v6883 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6883 = v6882;

c02_0651:;

	i8 v6884 = (i8)(intptr_t)(ws+3088);
	i1 v6885 = *(i1*)(intptr_t)v6884;
	i1 v6886 = (i1)+3;
	if (v6885==v6886) goto c02_0654; else goto c02_0653;

c02_0653:;

	i8 v6887 = (i8)(intptr_t)(ws+3152);
	i8 v6888 = (i8)(intptr_t)(ws+3088);
	i1 v6889 = *(i1*)(intptr_t)v6888;
	i8 v6890 = v6889;
	i8 v6891 = v6887+v6890;
	i1 v6892 = *(i1*)(intptr_t)v6891;

void f17_print_i8(i1 /* value */);
	f17_print_i8(v6892);

	i1 v6893 = (i1)+32;

void f8_print_char(i1 /* c */);
	f8_print_char(v6893);

	i8 v6894 = (i8)(intptr_t)(ws+3088);
	i1 v6895 = *(i1*)(intptr_t)v6894;
	i1 v6896 = v6895+(+1);
	i8 v6897 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6897 = v6896;

	goto c02_0651;

c02_0654:;

	i8 v6898 = (i8)(intptr_t)c02_s0166;

void f11_print(i8 /* ptr */);
	f11_print(v6898);

	i8 v6899 = (i8)(intptr_t)(ws+3128);
	i8 v6900 = *(i8*)(intptr_t)v6899;
	i8 v6901 = v6900+(+64);
	i1 v6902 = *(i1*)(intptr_t)v6901;
	i4 v6903 = v6902;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6903);


void f56_EndError(void);
	f56_EndError();

	goto c02_0637;

c02_063b:;

c02_0637:;


void f430_TestRule(i1* /* result */);
	i1 v6904;
	f430_TestRule(&v6904);
	i1 v6905 = (i1)+0;
	if (v6904==v6905) goto c02_0659; else goto c02_0658;

c02_0658:;

	goto c02_0636;

c02_0659:;

c02_0655:;

	i8 v6906 = (i8)(intptr_t)(ws+3144);
	i8 v6907 = *(i8*)(intptr_t)v6906;
	i8 v6908 = v6907+(+4);
	i1 v6909 = *(i1*)(intptr_t)v6908;
	i8 v6910 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6910 = v6909;

c02_065c:;

	i8 v6911 = (i8)(intptr_t)(ws+3200);
	i1 v6912 = *(i1*)(intptr_t)v6911;
	i1 v6913 = (i1)+0;
	if (v6912==v6913) goto c02_065f; else goto c02_065e;

c02_065e:;

	i8 v6914 = (i8)(intptr_t)(ws+3200);
	i1 v6915 = *(i1*)(intptr_t)v6914;
	i1 v6916 = v6915&(+1);
	i1 v6917 = (i1)+0;
	if (v6916==v6917) goto c02_0664; else goto c02_0663;

c02_0663:;

	i8 v6918 = (i8)(intptr_t)(ws+3184);
	i8 v6919 = *(i8*)(intptr_t)v6918;
	i8 v6920 = v6919+(+1);
	i8 v6921 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6921 = v6920;

	goto c02_0660;

c02_0664:;

c02_0660:;

	i8 v6922 = (i8)(intptr_t)(ws+3200);
	i1 v6923 = *(i1*)(intptr_t)v6922;
	i1 v6924 = (i1)+1;
	i1 v6925 = ((i1)v6923)>>v6924;
	i8 v6926 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6926 = v6925;

	goto c02_065c;

c02_065f:;

	i8 v6927 = (i8)(intptr_t)(ws+3144);
	i8 v6928 = *(i8*)(intptr_t)v6927;
	i8 v6929 = v6928+(+6);
	i1 v6930 = *(i1*)(intptr_t)v6929;
	i8 v6931 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6931 = v6930;

c02_0667:;

	i8 v6932 = (i8)(intptr_t)(ws+3200);
	i1 v6933 = *(i1*)(intptr_t)v6932;
	i1 v6934 = (i1)+0;
	if (v6933==v6934) goto c02_066a; else goto c02_0669;

c02_0669:;

	i8 v6935 = (i8)(intptr_t)(ws+3200);
	i1 v6936 = *(i1*)(intptr_t)v6935;
	i1 v6937 = v6936&(+1);
	i1 v6938 = (i1)+0;
	if (v6937==v6938) goto c02_066f; else goto c02_066e;

c02_066e:;

	i8 v6939 = (i8)(intptr_t)(ws+3192);
	i8 v6940 = *(i8*)(intptr_t)v6939;
	i8 v6941 = v6940+(+1);
	i8 v6942 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6942 = v6941;

	goto c02_066b;

c02_066f:;

c02_066b:;

	i8 v6943 = (i8)(intptr_t)(ws+3200);
	i1 v6944 = *(i1*)(intptr_t)v6943;
	i1 v6945 = (i1)+1;
	i1 v6946 = ((i1)v6944)>>v6945;
	i8 v6947 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6947 = v6946;

	goto c02_0667;

c02_066a:;

	goto c02_0635;

c02_0636:;

	i8 v6948 = (i8)(intptr_t)(ws+3136);
	i1 v6949 = *(i1*)(intptr_t)v6948;
	i8 v6950 = (i8)(intptr_t)(ws+3120);
	i8 v6951 = *(i8*)(intptr_t)v6950;
	i8 v6952 = v6951+(+62);
	*(i1*)(intptr_t)v6952 = v6949;

	i8 v6953 = (i8)(intptr_t)(ws+3144);
	i8 v6954 = *(i8*)(intptr_t)v6953;
	i8 v6955 = v6954+(+2);
	i1 v6956 = *(i1*)(intptr_t)v6955;
	i8 v6957 = (i8)(intptr_t)(ws+3120);
	i8 v6958 = *(i8*)(intptr_t)v6957;
	i8 v6959 = v6958+(+40);
	*(i1*)(intptr_t)v6959 = v6956;

	i8 v6960 = (i8)(intptr_t)(ws+3144);
	i8 v6961 = *(i8*)(intptr_t)v6960;
	i8 v6962 = v6961+(+3);
	i1 v6963 = *(i1*)(intptr_t)v6962;
	i8 v6964 = (i8)(intptr_t)(ws+3120);
	i8 v6965 = *(i8*)(intptr_t)v6964;
	i8 v6966 = v6965+(+43);
	*(i1*)(intptr_t)v6966 = v6963;



void f432_CopyChildNodes(void);
	f432_CopyChildNodes();

endsub:;
}
const i1 c02_s0167[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
const i1 c02_s0168[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
const i1 c02_s0169[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s016a[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s016b[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
const i1 c02_s016c[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s016d[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };

// deadlock workspace at ws+3176 length ws+0
void f434_deadlock(void) {

	i8 v7383 = (i8)(intptr_t)(ws+3080);
	i8 v7384 = *(i8*)(intptr_t)v7383;

void f426_PrintNodes(i8 /* rootnode */);
	f426_PrintNodes(v7384);

	i8 v7385 = (i8)(intptr_t)c02_s0167;

void f11_print(i8 /* ptr */);
	f11_print(v7385);

	i8 v7386 = (i8)(intptr_t)(ws+3120);
	i8 v7387 = *(i8*)(intptr_t)v7386;
	i8 v7388 = v7387+(+16);
	i8 v7389 = *(i8*)(intptr_t)v7388;
	i4 v7390 = v7389;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7390);


void f12_print_nl(void);
	f12_print_nl();

	i8 v7391 = (i8)(intptr_t)c02_s0168;

void f11_print(i8 /* ptr */);
	f11_print(v7391);

	i8 v7392 = (i8)(intptr_t)(ws+3160);
	i8 v7393 = *(i8*)(intptr_t)v7392;
	i8 v7394 = v7393+(+16);
	i8 v7395 = *(i8*)(intptr_t)v7394;
	i4 v7396 = v7395;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7396);


void f12_print_nl(void);
	f12_print_nl();

	i8 v7397 = (i8)(intptr_t)c02_s0169;

void f11_print(i8 /* ptr */);
	f11_print(v7397);

	i8 v7398 = (i8)(intptr_t)(ws+3120);
	i8 v7399 = *(i8*)(intptr_t)v7398;
	i8 v7400 = v7399+(+40);
	i1 v7401 = *(i1*)(intptr_t)v7400;
	i4 v7402 = v7401;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7402);


void f12_print_nl(void);
	f12_print_nl();

	i8 v7403 = (i8)(intptr_t)c02_s016a;

void f11_print(i8 /* ptr */);
	f11_print(v7403);

	i8 v7404 = (i8)(intptr_t)(ws+3120);
	i8 v7405 = *(i8*)(intptr_t)v7404;
	i8 v7406 = v7405+(+43);
	i1 v7407 = *(i1*)(intptr_t)v7406;
	i4 v7408 = v7407;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7408);


void f12_print_nl(void);
	f12_print_nl();

	i8 v7409 = (i8)(intptr_t)c02_s016b;

void f11_print(i8 /* ptr */);
	f11_print(v7409);

	i8 v7410 = (i8)(intptr_t)(ws+3128);
	i8 v7411 = *(i8*)(intptr_t)v7410;
	i8 v7412 = v7411+(+64);
	i1 v7413 = *(i1*)(intptr_t)v7412;
	i4 v7414 = v7413;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7414);


void f12_print_nl(void);
	f12_print_nl();

	i8 v7415 = (i8)(intptr_t)c02_s016c;

void f11_print(i8 /* ptr */);
	f11_print(v7415);

	i8 v7416 = (i8)(intptr_t)(ws+3160);
	i8 v7417 = *(i8*)(intptr_t)v7416;
	i8 v7418 = v7417+(+42);
	i1 v7419 = *(i1*)(intptr_t)v7418;
	i4 v7420 = v7419;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7420);


void f12_print_nl(void);
	f12_print_nl();

	i8 v7421 = (i8)(intptr_t)c02_s016d;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v7421);

endsub:;
}

// AllocateRegister workspace at ws+3152 length ws+20
void f433_AllocateRegister(void) {

	i8 v7051 = (i8)(intptr_t)(ws+3120);
	i8 v7052 = *(i8*)(intptr_t)v7051;
	i8 v7053 = v7052+(+40);
	i1 v7054 = *(i1*)(intptr_t)v7053;

void f420_IsStackedRegister(i1* /* result */, i1 /* regid */);
	i1 v7055;
	f420_IsStackedRegister(&v7055, v7054);
	i1 v7056 = (i1)+0;
	if (v7055==v7056) goto c02_0689; else goto c02_0688;

c02_0688:;

	i8 v7057 = (i8)(intptr_t)(ws+3128);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = v7058+(+64);
	i1 v7060 = *(i1*)(intptr_t)v7059;
	i8 v7061 = (i8)(intptr_t)(ws+3120);
	i8 v7062 = *(i8*)(intptr_t)v7061;
	i8 v7063 = v7062+(+40);
	i1 v7064 = *(i1*)(intptr_t)v7063;
	i1 v7065 = v7060&v7064;
	i8 v7066 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7066 = v7065;

	i8 v7067 = (i8)(intptr_t)(ws+3152);
	i1 v7068 = *(i1*)(intptr_t)v7067;
	i1 v7069 = (i1)+0;
	if (v7068==v7069) goto c02_068e; else goto c02_068d;

c02_068d:;

	i8 v7070 = (i8)(intptr_t)(ws+3152);
	i1 v7071 = *(i1*)(intptr_t)v7070;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7072;
	f210_FindFirst(&v7072, v7071);
	i8 v7073 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7073 = v7072;

	i8 v7074 = (i8)(intptr_t)(ws+3152);
	i1 v7075 = *(i1*)(intptr_t)v7074;
	i8 v7076 = (i8)(intptr_t)(ws+3128);
	i8 v7077 = *(i8*)(intptr_t)v7076;
	i8 v7078 = v7077+(+65);
	*(i1*)(intptr_t)v7078 = v7075;

	i8 v7079 = (i8)(intptr_t)(ws+3152);
	i1 v7080 = *(i1*)(intptr_t)v7079;
	i8 v7081 = (i8)(intptr_t)(ws+3120);
	i8 v7082 = *(i8*)(intptr_t)v7081;
	i8 v7083 = v7082+(+41);
	*(i1*)(intptr_t)v7083 = v7080;

	goto c02_068a;

c02_068e:;

	i8 v7084 = (i8)(intptr_t)(ws+3120);
	i8 v7085 = *(i8*)(intptr_t)v7084;
	i8 v7086 = v7085+(+40);
	i1 v7087 = *(i1*)(intptr_t)v7086;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7088;
	f210_FindFirst(&v7088, v7087);
	i8 v7089 = (i8)(intptr_t)(ws+3120);
	i8 v7090 = *(i8*)(intptr_t)v7089;
	i8 v7091 = v7090+(+41);
	*(i1*)(intptr_t)v7091 = v7088;

	i8 v7092 = (i8)(intptr_t)(ws+3128);
	i8 v7093 = *(i8*)(intptr_t)v7092;
	i8 v7094 = v7093+(+64);
	i1 v7095 = *(i1*)(intptr_t)v7094;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7096;
	f210_FindFirst(&v7096, v7095);
	i8 v7097 = (i8)(intptr_t)(ws+3128);
	i8 v7098 = *(i8*)(intptr_t)v7097;
	i8 v7099 = v7098+(+65);
	*(i1*)(intptr_t)v7099 = v7096;

	i8 v7100 = (i8)(intptr_t)(ws+3120);
	i8 v7101 = *(i8*)(intptr_t)v7100;
	i8 v7102 = (i8)(intptr_t)(ws+3120);
	i8 v7103 = *(i8*)(intptr_t)v7102;
	i8 v7104 = v7103+(+41);
	i1 v7105 = *(i1*)(intptr_t)v7104;
	i8 v7106 = (i8)(intptr_t)(ws+3128);
	i8 v7107 = *(i8*)(intptr_t)v7106;
	i8 v7108 = v7107+(+65);
	i1 v7109 = *(i1*)(intptr_t)v7108;

void f423_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f423_CreateSpill(v7109, v7105, v7101);

c02_068a:;

	goto c02_0685;

c02_0689:;

	i8 v7110 = (i8)(intptr_t)(ws+3128);
	i8 v7111 = *(i8*)(intptr_t)v7110;
	i8 v7112 = v7111+(+56);
	i8 v7113 = *(i8*)(intptr_t)v7112;
	i8 v7114 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v7114 = v7113;

	i8 v7115 = (i8)(intptr_t)(ws+3160);
	i8 v7116 = *(i8*)(intptr_t)v7115;
	i8 v7117 = (i8)(intptr_t)(ws+3120);
	i8 v7118 = *(i8*)(intptr_t)v7117;

void f421_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	i1 v7119;
	f421_CalculateBlockedRegisters(&v7119, v7118, v7116);
	i8 v7120 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7120 = v7119;

	i8 v7121 = (i8)(intptr_t)(ws+3128);
	i8 v7122 = *(i8*)(intptr_t)v7121;
	i8 v7123 = v7122+(+64);
	i1 v7124 = *(i1*)(intptr_t)v7123;
	i8 v7125 = (i8)(intptr_t)(ws+3120);
	i8 v7126 = *(i8*)(intptr_t)v7125;
	i8 v7127 = v7126+(+40);
	i1 v7128 = *(i1*)(intptr_t)v7127;
	i1 v7129 = v7124&v7128;
	i8 v7130 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7130 = v7129;

	i8 v7131 = (i8)(intptr_t)(ws+3152);
	i1 v7132 = *(i1*)(intptr_t)v7131;
	i8 v7133 = (i8)(intptr_t)(ws+3168);
	i1 v7134 = *(i1*)(intptr_t)v7133;
	i8 v7135 = (i8)(intptr_t)(ws+3120);
	i8 v7136 = *(i8*)(intptr_t)v7135;
	i8 v7137 = v7136+(+43);
	i1 v7138 = *(i1*)(intptr_t)v7137;
	i1 v7139 = v7134|v7138;
	i8 v7140 = (i8)(intptr_t)(ws+3160);
	i8 v7141 = *(i8*)(intptr_t)v7140;
	i8 v7142 = v7141+(+42);
	i1 v7143 = *(i1*)(intptr_t)v7142;
	i1 v7144 = v7139|v7143;
	i1 v7145 = ~v7144;
	i1 v7146 = v7132&v7145;
	i8 v7147 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v7147 = v7146;

	i8 v7148 = (i8)(intptr_t)(ws+3169);
	i1 v7149 = *(i1*)(intptr_t)v7148;
	i1 v7150 = (i1)+0;
	if (v7149==v7150) goto c02_0693; else goto c02_0692;

c02_0692:;

	i8 v7151 = (i8)(intptr_t)(ws+3169);
	i1 v7152 = *(i1*)(intptr_t)v7151;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7153;
	f210_FindFirst(&v7153, v7152);
	i8 v7154 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7154 = v7153;

	i8 v7155 = (i8)(intptr_t)(ws+3152);
	i1 v7156 = *(i1*)(intptr_t)v7155;
	i8 v7157 = (i8)(intptr_t)(ws+3128);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = v7158+(+65);
	*(i1*)(intptr_t)v7159 = v7156;

	i8 v7160 = (i8)(intptr_t)(ws+3152);
	i1 v7161 = *(i1*)(intptr_t)v7160;
	i8 v7162 = (i8)(intptr_t)(ws+3120);
	i8 v7163 = *(i8*)(intptr_t)v7162;
	i8 v7164 = v7163+(+41);
	*(i1*)(intptr_t)v7164 = v7161;

	i8 v7165 = (i8)(intptr_t)(ws+3152);
	i1 v7166 = *(i1*)(intptr_t)v7165;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7167;
	f208_FindConflictingRegisters(&v7167, v7166);
	i8 v7168 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7168 = v7167;

	i8 v7169 = (i8)(intptr_t)(ws+3160);
	i8 v7170 = *(i8*)(intptr_t)v7169;
	i8 v7171 = v7170+(+42);
	i1 v7172 = *(i1*)(intptr_t)v7171;
	i8 v7173 = (i8)(intptr_t)(ws+3168);
	i1 v7174 = *(i1*)(intptr_t)v7173;
	i1 v7175 = v7172|v7174;
	i8 v7176 = (i8)(intptr_t)(ws+3160);
	i8 v7177 = *(i8*)(intptr_t)v7176;
	i8 v7178 = v7177+(+42);
	*(i1*)(intptr_t)v7178 = v7175;

	i8 v7179 = (i8)(intptr_t)(ws+3160);
	i8 v7180 = *(i8*)(intptr_t)v7179;
	i8 v7181 = (i8)(intptr_t)(ws+3120);
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i8 v7183 = (i8)(intptr_t)(ws+3168);
	i1 v7184 = *(i1*)(intptr_t)v7183;

void f422_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	f422_BlockRegisters(v7184, v7182, v7180);

	i8 v7185 = (i8)(intptr_t)(ws+3120);
	i8 v7186 = *(i8*)(intptr_t)v7185;
	i8 v7187 = v7186+(+43);
	i1 v7188 = *(i1*)(intptr_t)v7187;
	i8 v7189 = (i8)(intptr_t)(ws+3168);
	i1 v7190 = *(i1*)(intptr_t)v7189;
	i1 v7191 = v7188|v7190;
	i8 v7192 = (i8)(intptr_t)(ws+3120);
	i8 v7193 = *(i8*)(intptr_t)v7192;
	i8 v7194 = v7193+(+43);
	*(i1*)(intptr_t)v7194 = v7191;

	goto c02_068f;

c02_0693:;

	i8 v7195 = (i8)(intptr_t)(ws+3128);
	i8 v7196 = *(i8*)(intptr_t)v7195;
	i8 v7197 = v7196+(+64);
	i1 v7198 = *(i1*)(intptr_t)v7197;

void f209_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	i1 v7199;
	f209_FindCompatibleRegisters(&v7199, v7198);
	i8 v7200 = (i8)(intptr_t)(ws+3170);
	*(i1*)(intptr_t)v7200 = v7199;

	i8 v7201 = (i8)(intptr_t)(ws+3120);
	i8 v7202 = *(i8*)(intptr_t)v7201;
	i8 v7203 = v7202+(+40);
	i1 v7204 = *(i1*)(intptr_t)v7203;
	i8 v7205 = (i8)(intptr_t)(ws+3170);
	i1 v7206 = *(i1*)(intptr_t)v7205;
	i1 v7207 = v7204&v7206;
	i8 v7208 = (i8)(intptr_t)(ws+3168);
	i1 v7209 = *(i1*)(intptr_t)v7208;
	i8 v7210 = (i8)(intptr_t)(ws+3120);
	i8 v7211 = *(i8*)(intptr_t)v7210;
	i8 v7212 = v7211+(+43);
	i1 v7213 = *(i1*)(intptr_t)v7212;
	i1 v7214 = v7209|v7213;
	i1 v7215 = ~v7214;
	i1 v7216 = v7207&v7215;
	i8 v7217 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v7217 = v7216;

	i8 v7218 = (i8)(intptr_t)(ws+3128);
	i8 v7219 = *(i8*)(intptr_t)v7218;
	i8 v7220 = v7219+(+64);
	i1 v7221 = *(i1*)(intptr_t)v7220;
	i8 v7222 = (i8)(intptr_t)(ws+3160);
	i8 v7223 = *(i8*)(intptr_t)v7222;
	i8 v7224 = v7223+(+42);
	i1 v7225 = *(i1*)(intptr_t)v7224;
	i1 v7226 = ~v7225;
	i1 v7227 = v7221&v7226;
	i8 v7228 = (i8)(intptr_t)(ws+3171);
	*(i1*)(intptr_t)v7228 = v7227;

	i8 v7229 = (i8)(intptr_t)(ws+3169);
	i1 v7230 = *(i1*)(intptr_t)v7229;
	i1 v7231 = (i1)+0;
	if (v7230==v7231) goto c02_069a; else goto c02_069b;

c02_069b:;

	i8 v7232 = (i8)(intptr_t)(ws+3171);
	i1 v7233 = *(i1*)(intptr_t)v7232;
	i1 v7234 = (i1)+0;
	if (v7233==v7234) goto c02_069a; else goto c02_0699;

c02_0699:;

	i8 v7235 = (i8)(intptr_t)(ws+3169);
	i1 v7236 = *(i1*)(intptr_t)v7235;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7237;
	f210_FindFirst(&v7237, v7236);
	i8 v7238 = (i8)(intptr_t)(ws+3120);
	i8 v7239 = *(i8*)(intptr_t)v7238;
	i8 v7240 = v7239+(+41);
	*(i1*)(intptr_t)v7240 = v7237;

	i8 v7241 = (i8)(intptr_t)(ws+3171);
	i1 v7242 = *(i1*)(intptr_t)v7241;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7243;
	f210_FindFirst(&v7243, v7242);
	i8 v7244 = (i8)(intptr_t)(ws+3128);
	i8 v7245 = *(i8*)(intptr_t)v7244;
	i8 v7246 = v7245+(+65);
	*(i1*)(intptr_t)v7246 = v7243;

	i8 v7247 = (i8)(intptr_t)(ws+3160);
	i8 v7248 = *(i8*)(intptr_t)v7247;
	i8 v7249 = v7248+(+42);
	i1 v7250 = *(i1*)(intptr_t)v7249;
	i8 v7251 = (i8)(intptr_t)(ws+3128);
	i8 v7252 = *(i8*)(intptr_t)v7251;
	i8 v7253 = v7252+(+65);
	i1 v7254 = *(i1*)(intptr_t)v7253;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7255;
	f208_FindConflictingRegisters(&v7255, v7254);
	i1 v7256 = v7250|v7255;
	i8 v7257 = (i8)(intptr_t)(ws+3160);
	i8 v7258 = *(i8*)(intptr_t)v7257;
	i8 v7259 = v7258+(+42);
	*(i1*)(intptr_t)v7259 = v7256;

	i8 v7260 = (i8)(intptr_t)(ws+3120);
	i8 v7261 = *(i8*)(intptr_t)v7260;
	i8 v7262 = v7261+(+41);
	i1 v7263 = *(i1*)(intptr_t)v7262;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7264;
	f208_FindConflictingRegisters(&v7264, v7263);
	i8 v7265 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7265 = v7264;

	i8 v7266 = (i8)(intptr_t)(ws+3160);
	i8 v7267 = *(i8*)(intptr_t)v7266;
	i8 v7268 = (i8)(intptr_t)(ws+3120);
	i8 v7269 = *(i8*)(intptr_t)v7268;
	i8 v7270 = (i8)(intptr_t)(ws+3168);
	i1 v7271 = *(i1*)(intptr_t)v7270;

void f422_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	f422_BlockRegisters(v7271, v7269, v7267);

	i8 v7272 = (i8)(intptr_t)(ws+3120);
	i8 v7273 = *(i8*)(intptr_t)v7272;
	i8 v7274 = v7273+(+43);
	i1 v7275 = *(i1*)(intptr_t)v7274;
	i8 v7276 = (i8)(intptr_t)(ws+3168);
	i1 v7277 = *(i1*)(intptr_t)v7276;
	i1 v7278 = v7275|v7277;
	i8 v7279 = (i8)(intptr_t)(ws+3120);
	i8 v7280 = *(i8*)(intptr_t)v7279;
	i8 v7281 = v7280+(+43);
	*(i1*)(intptr_t)v7281 = v7278;

	i8 v7282 = (i8)(intptr_t)(ws+3160);
	i8 v7283 = *(i8*)(intptr_t)v7282;
	i8 v7284 = (i8)(intptr_t)(ws+3120);
	i8 v7285 = *(i8*)(intptr_t)v7284;
	i8 v7286 = v7285+(+41);
	i1 v7287 = *(i1*)(intptr_t)v7286;
	i8 v7288 = (i8)(intptr_t)(ws+3128);
	i8 v7289 = *(i8*)(intptr_t)v7288;
	i8 v7290 = v7289+(+65);
	i1 v7291 = *(i1*)(intptr_t)v7290;

void f424_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f424_CreateReload(v7291, v7287, v7283);

	goto c02_0694;

c02_069a:;

	i8 v7292 = (i8)(intptr_t)(ws+3128);
	i8 v7293 = *(i8*)(intptr_t)v7292;
	i8 v7294 = v7293+(+64);
	i1 v7295 = *(i1*)(intptr_t)v7294;
	i8 v7296 = (i8)(intptr_t)(ws+3168);
	i1 v7297 = *(i1*)(intptr_t)v7296;
	i8 v7298 = (i8)(intptr_t)(ws+3160);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = v7299+(+42);
	i1 v7301 = *(i1*)(intptr_t)v7300;
	i1 v7302 = v7297|v7301;
	i1 v7303 = ~v7302;
	i1 v7304 = v7295&v7303;
	i8 v7305 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v7305 = v7304;

	i8 v7306 = (i8)(intptr_t)(ws+3120);
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = v7307+(+40);
	i1 v7309 = *(i1*)(intptr_t)v7308;
	i8 v7310 = (i8)(intptr_t)(ws+3170);
	i1 v7311 = *(i1*)(intptr_t)v7310;
	i1 v7312 = v7309&v7311;
	i8 v7313 = (i8)(intptr_t)(ws+3120);
	i8 v7314 = *(i8*)(intptr_t)v7313;
	i8 v7315 = v7314+(+43);
	i1 v7316 = *(i1*)(intptr_t)v7315;
	i1 v7317 = ~v7316;
	i1 v7318 = v7312&v7317;
	i8 v7319 = (i8)(intptr_t)(ws+3171);
	*(i1*)(intptr_t)v7319 = v7318;

	i8 v7320 = (i8)(intptr_t)(ws+3169);
	i1 v7321 = *(i1*)(intptr_t)v7320;
	i1 v7322 = (i1)+0;
	if (v7321==v7322) goto c02_06a2; else goto c02_06a3;

c02_06a3:;

	i8 v7323 = (i8)(intptr_t)(ws+3171);
	i1 v7324 = *(i1*)(intptr_t)v7323;
	i1 v7325 = (i1)+0;
	if (v7324==v7325) goto c02_06a2; else goto c02_06a1;

c02_06a1:;

	i8 v7326 = (i8)(intptr_t)(ws+3171);
	i1 v7327 = *(i1*)(intptr_t)v7326;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7328;
	f210_FindFirst(&v7328, v7327);
	i8 v7329 = (i8)(intptr_t)(ws+3120);
	i8 v7330 = *(i8*)(intptr_t)v7329;
	i8 v7331 = v7330+(+41);
	*(i1*)(intptr_t)v7331 = v7328;

	i8 v7332 = (i8)(intptr_t)(ws+3169);
	i1 v7333 = *(i1*)(intptr_t)v7332;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7334;
	f210_FindFirst(&v7334, v7333);
	i8 v7335 = (i8)(intptr_t)(ws+3128);
	i8 v7336 = *(i8*)(intptr_t)v7335;
	i8 v7337 = v7336+(+65);
	*(i1*)(intptr_t)v7337 = v7334;

	i8 v7338 = (i8)(intptr_t)(ws+3128);
	i8 v7339 = *(i8*)(intptr_t)v7338;
	i8 v7340 = v7339+(+65);
	i1 v7341 = *(i1*)(intptr_t)v7340;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7342;
	f208_FindConflictingRegisters(&v7342, v7341);
	i8 v7343 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7343 = v7342;

	i8 v7344 = (i8)(intptr_t)(ws+3160);
	i8 v7345 = *(i8*)(intptr_t)v7344;
	i8 v7346 = v7345+(+42);
	i1 v7347 = *(i1*)(intptr_t)v7346;
	i8 v7348 = (i8)(intptr_t)(ws+3168);
	i1 v7349 = *(i1*)(intptr_t)v7348;
	i1 v7350 = v7347|v7349;
	i8 v7351 = (i8)(intptr_t)(ws+3160);
	i8 v7352 = *(i8*)(intptr_t)v7351;
	i8 v7353 = v7352+(+42);
	*(i1*)(intptr_t)v7353 = v7350;

	i8 v7354 = (i8)(intptr_t)(ws+3160);
	i8 v7355 = *(i8*)(intptr_t)v7354;
	i8 v7356 = (i8)(intptr_t)(ws+3120);
	i8 v7357 = *(i8*)(intptr_t)v7356;
	i8 v7358 = (i8)(intptr_t)(ws+3168);
	i1 v7359 = *(i1*)(intptr_t)v7358;

void f422_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	f422_BlockRegisters(v7359, v7357, v7355);

	i8 v7360 = (i8)(intptr_t)(ws+3120);
	i8 v7361 = *(i8*)(intptr_t)v7360;
	i8 v7362 = v7361+(+43);
	i1 v7363 = *(i1*)(intptr_t)v7362;
	i8 v7364 = (i8)(intptr_t)(ws+3120);
	i8 v7365 = *(i8*)(intptr_t)v7364;
	i8 v7366 = v7365+(+41);
	i1 v7367 = *(i1*)(intptr_t)v7366;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7368;
	f208_FindConflictingRegisters(&v7368, v7367);
	i1 v7369 = v7363|v7368;
	i8 v7370 = (i8)(intptr_t)(ws+3120);
	i8 v7371 = *(i8*)(intptr_t)v7370;
	i8 v7372 = v7371+(+43);
	*(i1*)(intptr_t)v7372 = v7369;

	i8 v7373 = (i8)(intptr_t)(ws+3120);
	i8 v7374 = *(i8*)(intptr_t)v7373;
	i8 v7375 = (i8)(intptr_t)(ws+3120);
	i8 v7376 = *(i8*)(intptr_t)v7375;
	i8 v7377 = v7376+(+41);
	i1 v7378 = *(i1*)(intptr_t)v7377;
	i8 v7379 = (i8)(intptr_t)(ws+3128);
	i8 v7380 = *(i8*)(intptr_t)v7379;
	i8 v7381 = v7380+(+65);
	i1 v7382 = *(i1*)(intptr_t)v7381;

void f423_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f423_CreateSpill(v7382, v7378, v7374);

	goto c02_069c;

c02_06a2:;


	i8 v7422 = (i8)(intptr_t)(ws+3120);
	i8 v7423 = *(i8*)(intptr_t)v7422;
	i8 v7424 = v7423+(+40);
	i1 v7425 = *(i1*)(intptr_t)v7424;
	i8 v7426 = (i8)(intptr_t)(ws+3170);
	i1 v7427 = *(i1*)(intptr_t)v7426;
	i1 v7428 = v7425&v7427;
	i8 v7429 = (i8)(intptr_t)(ws+3120);
	i8 v7430 = *(i8*)(intptr_t)v7429;
	i8 v7431 = v7430+(+43);
	i1 v7432 = *(i1*)(intptr_t)v7431;
	i1 v7433 = ~v7432;
	i1 v7434 = v7428&v7433;
	i8 v7435 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7435 = v7434;

	i8 v7436 = (i8)(intptr_t)(ws+3152);
	i1 v7437 = *(i1*)(intptr_t)v7436;
	i1 v7438 = (i1)+0;
	if (v7437==v7438) goto c02_06a7; else goto c02_06a8;

c02_06a7:;


void f434_deadlock(void);
	f434_deadlock();

	goto c02_06a4;

c02_06a8:;

c02_06a4:;

	i8 v7439 = (i8)(intptr_t)(ws+3152);
	i1 v7440 = *(i1*)(intptr_t)v7439;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7441;
	f210_FindFirst(&v7441, v7440);
	i8 v7442 = (i8)(intptr_t)(ws+3120);
	i8 v7443 = *(i8*)(intptr_t)v7442;
	i8 v7444 = v7443+(+41);
	*(i1*)(intptr_t)v7444 = v7441;

	i8 v7445 = (i8)(intptr_t)(ws+3120);
	i8 v7446 = *(i8*)(intptr_t)v7445;
	i8 v7447 = v7446+(+43);
	i1 v7448 = *(i1*)(intptr_t)v7447;
	i8 v7449 = (i8)(intptr_t)(ws+3120);
	i8 v7450 = *(i8*)(intptr_t)v7449;
	i8 v7451 = v7450+(+41);
	i1 v7452 = *(i1*)(intptr_t)v7451;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7453;
	f208_FindConflictingRegisters(&v7453, v7452);
	i1 v7454 = v7448|v7453;
	i8 v7455 = (i8)(intptr_t)(ws+3120);
	i8 v7456 = *(i8*)(intptr_t)v7455;
	i8 v7457 = v7456+(+43);
	*(i1*)(intptr_t)v7457 = v7454;

	i8 v7458 = (i8)(intptr_t)(ws+3120);
	i8 v7459 = *(i8*)(intptr_t)v7458;
	i8 v7460 = (i8)(intptr_t)(ws+3120);
	i8 v7461 = *(i8*)(intptr_t)v7460;
	i8 v7462 = v7461+(+41);
	i1 v7463 = *(i1*)(intptr_t)v7462;
	i1 v7464 = (i1)+0;

void f423_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f423_CreateSpill(v7464, v7463, v7459);

	i8 v7465 = (i8)(intptr_t)(ws+3128);
	i8 v7466 = *(i8*)(intptr_t)v7465;
	i8 v7467 = v7466+(+64);
	i1 v7468 = *(i1*)(intptr_t)v7467;
	i8 v7469 = (i8)(intptr_t)(ws+3160);
	i8 v7470 = *(i8*)(intptr_t)v7469;
	i8 v7471 = v7470+(+42);
	i1 v7472 = *(i1*)(intptr_t)v7471;
	i1 v7473 = ~v7472;
	i1 v7474 = v7468&v7473;
	i8 v7475 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7475 = v7474;

	i8 v7476 = (i8)(intptr_t)(ws+3152);
	i1 v7477 = *(i1*)(intptr_t)v7476;
	i1 v7478 = (i1)+0;
	if (v7477==v7478) goto c02_06ac; else goto c02_06ad;

c02_06ac:;


void f434_deadlock(void);
	f434_deadlock();

	goto c02_06a9;

c02_06ad:;

c02_06a9:;

	i8 v7479 = (i8)(intptr_t)(ws+3152);
	i1 v7480 = *(i1*)(intptr_t)v7479;

void f210_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7481;
	f210_FindFirst(&v7481, v7480);
	i8 v7482 = (i8)(intptr_t)(ws+3128);
	i8 v7483 = *(i8*)(intptr_t)v7482;
	i8 v7484 = v7483+(+65);
	*(i1*)(intptr_t)v7484 = v7481;

	i8 v7485 = (i8)(intptr_t)(ws+3160);
	i8 v7486 = *(i8*)(intptr_t)v7485;
	i8 v7487 = v7486+(+42);
	i1 v7488 = *(i1*)(intptr_t)v7487;
	i8 v7489 = (i8)(intptr_t)(ws+3128);
	i8 v7490 = *(i8*)(intptr_t)v7489;
	i8 v7491 = v7490+(+65);
	i1 v7492 = *(i1*)(intptr_t)v7491;

void f208_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7493;
	f208_FindConflictingRegisters(&v7493, v7492);
	i1 v7494 = v7488|v7493;
	i8 v7495 = (i8)(intptr_t)(ws+3160);
	i8 v7496 = *(i8*)(intptr_t)v7495;
	i8 v7497 = v7496+(+42);
	*(i1*)(intptr_t)v7497 = v7494;

	i8 v7498 = (i8)(intptr_t)(ws+3160);
	i8 v7499 = *(i8*)(intptr_t)v7498;
	i1 v7500 = (i1)+0;
	i8 v7501 = (i8)(intptr_t)(ws+3128);
	i8 v7502 = *(i8*)(intptr_t)v7501;
	i8 v7503 = v7502+(+65);
	i1 v7504 = *(i1*)(intptr_t)v7503;

void f424_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f424_CreateReload(v7504, v7500, v7499);

c02_069c:;

c02_0694:;

c02_068f:;

c02_0685:;

endsub:;
}

// UpdateProducedRegisters workspace at ws+3152 length ws+1
void f435_UpdateProducedRegisters(void) {

	i1 v7505 = (i1)+0;
	i8 v7506 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v7506 = v7505;

c02_06b0:;

	i8 v7507 = (i8)(intptr_t)(ws+3088);
	i1 v7508 = *(i1*)(intptr_t)v7507;
	i1 v7509 = (i1)+3;
	if (v7508==v7509) goto c02_06b3; else goto c02_06b2;

c02_06b2:;

	i8 v7510 = (i8)(intptr_t)(ws+3120);
	i8 v7511 = *(i8*)(intptr_t)v7510;
	i8 v7512 = v7511+(+16);
	i8 v7513 = (i8)(intptr_t)(ws+3088);
	i1 v7514 = *(i1*)(intptr_t)v7513;
	i8 v7515 = v7514;
	i1 v7516 = (i1)+3;
	i8 v7517 = ((i8)v7515)<<v7516;
	i8 v7518 = v7512+v7517;
	i8 v7519 = *(i8*)(intptr_t)v7518;
	i8 v7520 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v7520 = v7519;

	i8 v7521 = (i8)(intptr_t)(ws+3128);
	i8 v7522 = *(i8*)(intptr_t)v7521;
	i8 v7523 = (i8)+0;
	if (v7522==v7523) goto c02_06ba; else goto c02_06bb;

c02_06bb:;

	i8 v7524 = (i8)(intptr_t)(ws+3128);
	i8 v7525 = *(i8*)(intptr_t)v7524;
	i8 v7526 = v7525+(+64);
	i1 v7527 = *(i1*)(intptr_t)v7526;
	i1 v7528 = (i1)-1;
	if (v7527==v7528) goto c02_06b9; else goto c02_06ba;

c02_06b9:;

	i8 v7529 = (i8)(intptr_t)(ws+3120);
	i8 v7530 = *(i8*)(intptr_t)v7529;
	i8 v7531 = v7530+(+41);
	i1 v7532 = *(i1*)(intptr_t)v7531;
	i8 v7533 = (i8)(intptr_t)(ws+3128);
	i8 v7534 = *(i8*)(intptr_t)v7533;
	i8 v7535 = v7534+(+64);
	*(i1*)(intptr_t)v7535 = v7532;

	i1 v7536 = (i1)+0;
	i8 v7537 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7537 = v7536;

c02_06be:;

	i8 v7538 = (i8)(intptr_t)(ws+3152);
	i1 v7539 = *(i1*)(intptr_t)v7538;
	i1 v7540 = (i1)+3;
	if (v7539==v7540) goto c02_06c1; else goto c02_06c0;

c02_06c0:;

	i8 v7541 = (i8)(intptr_t)(ws+3088);
	i1 v7542 = *(i1*)(intptr_t)v7541;
	i8 v7543 = (i8)(intptr_t)(ws+3152);
	i1 v7544 = *(i1*)(intptr_t)v7543;
	if (v7542==v7544) goto c02_06c6; else goto c02_06c5;

c02_06c5:;

	i8 v7545 = (i8)(intptr_t)(ws+3120);
	i8 v7546 = *(i8*)(intptr_t)v7545;
	i8 v7547 = v7546+(+16);
	i8 v7548 = (i8)(intptr_t)(ws+3152);
	i1 v7549 = *(i1*)(intptr_t)v7548;
	i8 v7550 = v7549;
	i1 v7551 = (i1)+3;
	i8 v7552 = ((i8)v7550)<<v7551;
	i8 v7553 = v7547+v7552;
	i8 v7554 = *(i8*)(intptr_t)v7553;
	i8 v7555 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v7555 = v7554;

	i8 v7556 = (i8)(intptr_t)(ws+3128);
	i8 v7557 = *(i8*)(intptr_t)v7556;
	i8 v7558 = (i8)+0;
	if (v7557==v7558) goto c02_06cb; else goto c02_06ca;

c02_06ca:;

	i8 v7559 = (i8)(intptr_t)(ws+3128);
	i8 v7560 = *(i8*)(intptr_t)v7559;
	i8 v7561 = v7560+(+64);
	i1 v7562 = *(i1*)(intptr_t)v7561;
	i8 v7563 = (i8)(intptr_t)(ws+3120);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = v7564+(+41);
	i1 v7566 = *(i1*)(intptr_t)v7565;
	i1 v7567 = ~v7566;
	i1 v7568 = v7562&v7567;
	i8 v7569 = (i8)(intptr_t)(ws+3128);
	i8 v7570 = *(i8*)(intptr_t)v7569;
	i8 v7571 = v7570+(+64);
	*(i1*)(intptr_t)v7571 = v7568;

	goto c02_06c7;

c02_06cb:;

c02_06c7:;

	goto c02_06c2;

c02_06c6:;

c02_06c2:;

	i8 v7572 = (i8)(intptr_t)(ws+3152);
	i1 v7573 = *(i1*)(intptr_t)v7572;
	i1 v7574 = v7573+(+1);
	i8 v7575 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7575 = v7574;

	goto c02_06be;

c02_06c1:;

	goto c02_06b4;

c02_06ba:;

c02_06b4:;

	i8 v7576 = (i8)(intptr_t)(ws+3088);
	i1 v7577 = *(i1*)(intptr_t)v7576;
	i1 v7578 = v7577+(+1);
	i8 v7579 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v7579 = v7578;

	goto c02_06b0;

c02_06b3:;

endsub:;
}

// EmitAndFreeInstructions workspace at ws+3152 length ws+8
void f436_EmitAndFreeInstructions(void) {

c02_06cc:;

	i8 v7580 = (i8)(intptr_t)(ws+3104);
	i8 v7581 = *(i8*)(intptr_t)v7580;
	i8 v7582 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v7582 = v7581;

	i8 v7583 = (i8)(intptr_t)(ws+3152);
	i8 v7584 = *(i8*)(intptr_t)v7583;
	i8 v7585 = (i8)+0;
	if (v7584==v7585) goto c02_06d1; else goto c02_06d2;

c02_06d1:;

	goto c02_06cd;

c02_06d2:;

c02_06ce:;

	i8 v7586 = (i8)(intptr_t)(ws+3104);
	i8 v7587 = *(i8*)(intptr_t)v7586;
	i8 v7588 = v7587+(+8);
	i8 v7589 = *(i8*)(intptr_t)v7588;
	i8 v7590 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v7590 = v7589;

	i8 v7591 = (i8)(intptr_t)(ws+3152);
	i8 v7592 = *(i8*)(intptr_t)v7591;
	i8 v7593 = v7592+(+52);

void f425_ShuffleRegisters(i8 /* moves */);
	f425_ShuffleRegisters(v7593);

	i8 v7594 = (i8)(intptr_t)(ws+3152);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = v7595+(+62);
	i1 v7597 = *(i1*)(intptr_t)v7596;
	i8 v7598 = (i8)(intptr_t)(ws+3152);
	i8 v7599 = *(i8*)(intptr_t)v7598;

void f245_EmitOneInstruction(i8 /* self */, i1 /* rule */);
	f245_EmitOneInstruction(v7599, v7597);

	i8 v7600 = (i8)(intptr_t)(ws+3152);
	i8 v7601 = *(i8*)(intptr_t)v7600;
	i8 v7602 = v7601+(+44);

void f425_ShuffleRegisters(i8 /* moves */);
	f425_ShuffleRegisters(v7602);


void f217_ArchEndInstruction(void);
	f217_ArchEndInstruction();

	i8 v7603 = (i8)(intptr_t)(ws+3152);
	i8 v7604 = *(i8*)(intptr_t)v7603;
	i8 v7605 = v7604+(+16);
	i8 v7606 = *(i8*)(intptr_t)v7605;
	i8 v7607 = v7606+(+66);
	i1 v7608 = *(i1*)(intptr_t)v7607;
	i1 v7609 = (i1)+19;
	if (v7608==v7609) goto c02_06d6; else goto c02_06d7;

c02_06d6:;

	i8 v7610 = (i8)(intptr_t)(ws+3152);
	i8 v7611 = *(i8*)(intptr_t)v7610;
	i8 v7612 = v7611+(+16);
	i8 v7613 = *(i8*)(intptr_t)v7612;

void f32_Free(i8 /* block */);
	f32_Free(v7613);

	goto c02_06d3;

c02_06d7:;

c02_06d3:;

	i8 v7614 = (i8)(intptr_t)(ws+3152);
	i8 v7615 = *(i8*)(intptr_t)v7614;

void f32_Free(i8 /* block */);
	f32_Free(v7615);

	goto c02_06cc;

c02_06cd:;

endsub:;
}

// ReallyGenerate workspace at ws+3080 length ws+72
void f427_ReallyGenerate(i8 p6659 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3080) = p6659; /*rootnode */

	i8 v6660 = (i8)+0;
	i8 v6661 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v6661 = v6660;

	i8 v6662 = (i8)+0;
	i8 v6663 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6663 = v6662;

	i8 v6664 = (i8)(intptr_t)(ws+984);
	i8 v6665 = *(i8*)(intptr_t)v6664;
	i8 v6666 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v6666 = v6665;

	i8 v6667 = (i8)(intptr_t)(ws+3080);
	i8 v6668 = *(i8*)(intptr_t)v6667;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v6668);

c02_0605:;

	i8 v6669 = (i8)(intptr_t)(ws+984);
	i8 v6670 = *(i8*)(intptr_t)v6669;
	i8 v6671 = (i8)(intptr_t)(ws+3112);
	i8 v6672 = *(i8*)(intptr_t)v6671;
	if (v6670==v6672) goto c02_0608; else goto c02_0607;

c02_0607:;

	i8 v6673 = (i8)+63;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v6674;
	f31_Alloc(&v6674, v6673);
	i8 v6675 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v6675 = v6674;

	i8 v6676 = (i8)(intptr_t)(ws+3096);
	i8 v6677 = *(i8*)(intptr_t)v6676;
	i8 v6678 = (i8)+0;
	if (v6677==v6678) goto c02_060c; else goto c02_060d;

c02_060c:;

	i8 v6679 = (i8)(intptr_t)(ws+3120);
	i8 v6680 = *(i8*)(intptr_t)v6679;
	i8 v6681 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v6681 = v6680;

	i8 v6682 = (i8)(intptr_t)(ws+3120);
	i8 v6683 = *(i8*)(intptr_t)v6682;
	i8 v6684 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6684 = v6683;

	goto c02_0609;

c02_060d:;

	i8 v6685 = (i8)(intptr_t)(ws+3120);
	i8 v6686 = *(i8*)(intptr_t)v6685;
	i8 v6687 = (i8)(intptr_t)(ws+3104);
	i8 v6688 = *(i8*)(intptr_t)v6687;
	*(i8*)(intptr_t)v6688 = v6686;

	i8 v6689 = (i8)(intptr_t)(ws+3104);
	i8 v6690 = *(i8*)(intptr_t)v6689;
	i8 v6691 = (i8)(intptr_t)(ws+3120);
	i8 v6692 = *(i8*)(intptr_t)v6691;
	i8 v6693 = v6692+(+8);
	*(i8*)(intptr_t)v6693 = v6690;

	i8 v6694 = (i8)(intptr_t)(ws+3120);
	i8 v6695 = *(i8*)(intptr_t)v6694;
	i8 v6696 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6696 = v6695;

c02_0609:;


void f418_PopNode(i8* /* node */);
	i8 v6697;
	f418_PopNode(&v6697);
	i8 v6698 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v6698 = v6697;



void f428_InstructionMatcher(void);
	f428_InstructionMatcher();

	i8 v7046 = (i8)(intptr_t)(ws+3120);
	i8 v7047 = *(i8*)(intptr_t)v7046;
	i8 v7048 = v7047+(+40);
	i1 v7049 = *(i1*)(intptr_t)v7048;
	i1 v7050 = (i1)+0;
	if (v7049==v7050) goto c02_0684; else goto c02_0683;

c02_0683:;



void f433_AllocateRegister(void);
	f433_AllocateRegister();



void f435_UpdateProducedRegisters(void);
	f435_UpdateProducedRegisters();

	goto c02_0680;

c02_0684:;

c02_0680:;

	goto c02_0605;

c02_0608:;



void f436_EmitAndFreeInstructions(void);
	f436_EmitAndFreeInstructions();


void f218_ArchEndGroup(void);
	f218_ArchEndGroup();

	i8 v7616 = (i8)(intptr_t)(ws+3080);
	i8 v7617 = *(i8*)(intptr_t)v7616;

void f140_Discard(i8 /* node */);
	f140_Discard(v7617);

endsub:;
}

// Generate workspace at ws+3064 length ws+9
void f437_Generate(i8 p7620 /* statement */) {
	*(i8*)(intptr_t)(ws+3064) = p7620; /*statement */

	i8 v7621 = (i8)(intptr_t)(ws+3064);
	i8 v7622 = *(i8*)(intptr_t)v7621;
	i8 v7623 = v7622+(+66);
	i1 v7624 = *(i1*)(intptr_t)v7623;
	i8 v7625 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v7625 = v7624;

	i8 v7626 = (i8)(intptr_t)(ws+1219);
	i1 v7627 = *(i1*)(intptr_t)v7626;
	i1 v7628 = (i1)+22;
	if (v7627==v7628) goto c02_06dd; else goto c02_06df;

c02_06df:;

	i8 v7629 = (i8)(intptr_t)(ws+1219);
	i1 v7630 = *(i1*)(intptr_t)v7629;
	i1 v7631 = (i1)+23;
	if (v7630==v7631) goto c02_06dd; else goto c02_06de;

c02_06dd:;

	i8 v7632 = (i8)(intptr_t)(ws+3072);
	i1 v7633 = *(i1*)(intptr_t)v7632;
	i1 v7634 = (i1)+21;
	if (v7633==v7634) goto c02_06e6; else goto c02_06e7;

c02_06e7:;

	i8 v7635 = (i8)(intptr_t)(ws+3072);
	i1 v7636 = *(i1*)(intptr_t)v7635;
	i1 v7637 = (i1)+5;
	if (v7636==v7637) goto c02_06e6; else goto c02_06e5;

c02_06e5:;

	i8 v7638 = (i8)(intptr_t)(ws+3064);
	i8 v7639 = *(i8*)(intptr_t)v7638;

void f140_Discard(i8 /* node */);
	f140_Discard(v7639);

	goto endsub;

c02_06e6:;

c02_06e0:;

	goto c02_06d8;

c02_06de:;

c02_06d8:;

	i8 v7640 = (i8)(intptr_t)(ws+3064);
	i8 v7641 = *(i8*)(intptr_t)v7640;
	i8 v7642 = v7641+(+66);
	i1 v7643 = *(i1*)(intptr_t)v7642;
	i8 v7644 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v7644 = v7643;

	i8 v7645 = (i8)(intptr_t)(ws+3064);
	i8 v7646 = *(i8*)(intptr_t)v7645;

void f427_ReallyGenerate(i8 /* rootnode */);
	f427_ReallyGenerate(v7646);

endsub:;
}

// push_and_free workspace at ws+3064 length ws+0
void f439_push_and_free(void) {

	i8 v7688 = (i8)(intptr_t)(ws+3032);
	i2 v7689 = *(i2*)(intptr_t)v7688;
	i8 v7690 = (i8)(intptr_t)(ws+3048);
	i8 v7691 = *(i8*)(intptr_t)v7690;
	*(i2*)(intptr_t)v7691 = v7689;

	i8 v7692 = (i8)(intptr_t)(ws+3034);
	i2 v7693 = *(i2*)(intptr_t)v7692;
	i8 v7694 = (i8)(intptr_t)(ws+3048);
	i8 v7695 = *(i8*)(intptr_t)v7694;
	i8 v7696 = v7695+(+2);
	*(i2*)(intptr_t)v7696 = v7693;

	i8 v7697 = (i8)(intptr_t)(ws+3036);
	i2 v7698 = *(i2*)(intptr_t)v7697;
	i8 v7699 = (i8)(intptr_t)(ws+3048);
	i8 v7700 = *(i8*)(intptr_t)v7699;
	i8 v7701 = v7700+(+4);
	*(i2*)(intptr_t)v7701 = v7698;

	i8 v7702 = (i8)+0;
	i8 v7703 = (i8)(intptr_t)(ws+3024);
	i8 v7704 = *(i8*)(intptr_t)v7703;
	i8 v7705 = v7704+(+24);
	*(i8*)(intptr_t)v7705 = v7702;

	i8 v7706 = (i8)+0;
	i8 v7707 = (i8)(intptr_t)(ws+3024);
	i8 v7708 = *(i8*)(intptr_t)v7707;
	i8 v7709 = v7708+(+32);
	*(i8*)(intptr_t)v7709 = v7706;

	i8 v7710 = (i8)(intptr_t)(ws+3048);
	i8 v7711 = *(i8*)(intptr_t)v7710;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v7711);

	i8 v7712 = (i8)(intptr_t)(ws+3040);
	i8 v7713 = *(i8*)(intptr_t)v7712;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v7713);

	i8 v7714 = (i8)(intptr_t)(ws+3024);
	i8 v7715 = *(i8*)(intptr_t)v7714;

void f140_Discard(i8 /* node */);
	f140_Discard(v7715);

endsub:;
}

// GenerateConditional workspace at ws+3008 length ws+52
void f438_GenerateConditional(i8 p7647 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3008) = p7647; /*rootnode */

	i8 v7648 = (i8)(intptr_t)(ws+984);
	i8 v7649 = *(i8*)(intptr_t)v7648;
	i8 v7650 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7650 = v7649;

	i8 v7651 = (i8)(intptr_t)(ws+3008);
	i8 v7652 = *(i8*)(intptr_t)v7651;

void f417_PushNode(i8 /* node */);
	f417_PushNode(v7652);

c02_06ea:;

	i8 v7653 = (i8)(intptr_t)(ws+984);
	i8 v7654 = *(i8*)(intptr_t)v7653;
	i8 v7655 = (i8)(intptr_t)(ws+3016);
	i8 v7656 = *(i8*)(intptr_t)v7655;
	if (v7654==v7656) goto c02_06ed; else goto c02_06ec;

c02_06ec:;


void f418_PopNode(i8* /* node */);
	i8 v7657;
	f418_PopNode(&v7657);
	i8 v7658 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7658 = v7657;

	i8 v7659 = (i8)(intptr_t)(ws+3024);
	i8 v7660 = *(i8*)(intptr_t)v7659;
	i2 v7661 = *(i2*)(intptr_t)v7660;
	i8 v7662 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v7662 = v7661;

	i8 v7663 = (i8)(intptr_t)(ws+3024);
	i8 v7664 = *(i8*)(intptr_t)v7663;
	i8 v7665 = v7664+(+2);
	i2 v7666 = *(i2*)(intptr_t)v7665;
	i8 v7667 = (i8)(intptr_t)(ws+3034);
	*(i2*)(intptr_t)v7667 = v7666;

	i8 v7668 = (i8)(intptr_t)(ws+3024);
	i8 v7669 = *(i8*)(intptr_t)v7668;
	i8 v7670 = v7669+(+4);
	i2 v7671 = *(i2*)(intptr_t)v7670;
	i8 v7672 = (i8)(intptr_t)(ws+3036);
	*(i2*)(intptr_t)v7672 = v7671;

	i8 v7673 = (i8)(intptr_t)(ws+3024);
	i8 v7674 = *(i8*)(intptr_t)v7673;
	i8 v7675 = v7674+(+24);
	i8 v7676 = *(i8*)(intptr_t)v7675;
	i8 v7677 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v7677 = v7676;

	i8 v7678 = (i8)(intptr_t)(ws+3024);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	i8 v7680 = v7679+(+32);
	i8 v7681 = *(i8*)(intptr_t)v7680;
	i8 v7682 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7682 = v7681;

	i8 v7683 = (i8)(intptr_t)(ws+3024);
	i8 v7684 = *(i8*)(intptr_t)v7683;
	i8 v7685 = v7684+(+66);
	i1 v7686 = *(i1*)(intptr_t)v7685;
	i8 v7687 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v7687 = v7686;


	i8 v7716 = (i8)(intptr_t)(ws+3056);
	i1 v7717 = *(i1*)(intptr_t)v7716;

	if (v7717 != +54) goto c02_06ef;


void f206_AllocLabel(i2* /* label */);
	i2 v7718;
	f206_AllocLabel(&v7718);
	i8 v7719 = (i8)(intptr_t)(ws+3058);
	*(i2*)(intptr_t)v7719 = v7718;

	i8 v7720 = (i8)(intptr_t)(ws+3032);
	i2 v7721 = *(i2*)(intptr_t)v7720;
	i8 v7722 = (i8)(intptr_t)(ws+3040);
	i8 v7723 = *(i8*)(intptr_t)v7722;
	*(i2*)(intptr_t)v7723 = v7721;

	i8 v7724 = (i8)(intptr_t)(ws+3058);
	i2 v7725 = *(i2*)(intptr_t)v7724;
	i8 v7726 = (i8)(intptr_t)(ws+3040);
	i8 v7727 = *(i8*)(intptr_t)v7726;
	i8 v7728 = v7727+(+2);
	*(i2*)(intptr_t)v7728 = v7725;

	i8 v7729 = (i8)(intptr_t)(ws+3058);
	i2 v7730 = *(i2*)(intptr_t)v7729;
	i8 v7731 = (i8)(intptr_t)(ws+3040);
	i8 v7732 = *(i8*)(intptr_t)v7731;
	i8 v7733 = v7732+(+4);
	*(i2*)(intptr_t)v7733 = v7730;


void f439_push_and_free(void);
	f439_push_and_free();

	goto c02_06ee;

c02_06ef:;

	if (v7717 != +53) goto c02_06f0;


void f206_AllocLabel(i2* /* label */);
	i2 v7734;
	f206_AllocLabel(&v7734);
	i8 v7735 = (i8)(intptr_t)(ws+3058);
	*(i2*)(intptr_t)v7735 = v7734;

	i8 v7736 = (i8)(intptr_t)(ws+3058);
	i2 v7737 = *(i2*)(intptr_t)v7736;
	i8 v7738 = (i8)(intptr_t)(ws+3040);
	i8 v7739 = *(i8*)(intptr_t)v7738;
	*(i2*)(intptr_t)v7739 = v7737;

	i8 v7740 = (i8)(intptr_t)(ws+3034);
	i2 v7741 = *(i2*)(intptr_t)v7740;
	i8 v7742 = (i8)(intptr_t)(ws+3040);
	i8 v7743 = *(i8*)(intptr_t)v7742;
	i8 v7744 = v7743+(+2);
	*(i2*)(intptr_t)v7744 = v7741;

	i8 v7745 = (i8)(intptr_t)(ws+3058);
	i2 v7746 = *(i2*)(intptr_t)v7745;
	i8 v7747 = (i8)(intptr_t)(ws+3040);
	i8 v7748 = *(i8*)(intptr_t)v7747;
	i8 v7749 = v7748+(+4);
	*(i2*)(intptr_t)v7749 = v7746;


void f439_push_and_free(void);
	f439_push_and_free();

	goto c02_06ee;

c02_06f0:;

	i8 v7750 = (i8)(intptr_t)(ws+3056);
	i1 v7751 = *(i1*)(intptr_t)v7750;
	i1 v7752 = (i1)+55;
	if (v7751<v7752) goto c02_06f7; else goto c02_06f8;

c02_06f8:;

	i1 v7753 = (i1)+69;
	i8 v7754 = (i8)(intptr_t)(ws+3056);
	i1 v7755 = *(i1*)(intptr_t)v7754;
	if (v7753<v7755) goto c02_06f7; else goto c02_06f6;

c02_06f6:;

	i8 v7756 = (i8)(intptr_t)(ws+3024);
	i8 v7757 = *(i8*)(intptr_t)v7756;
	i8 v7758 = v7757+(+6);
	i1 v7759 = *(i1*)(intptr_t)v7758;
	i1 v7760 = (i1)+0;
	if (v7759==v7760) goto c02_06fd; else goto c02_06fc;

c02_06fc:;

	i8 v7761 = (i8)(intptr_t)(ws+3034);
	i2 v7762 = *(i2*)(intptr_t)v7761;
	i8 v7763 = (i8)(intptr_t)(ws+3024);
	i8 v7764 = *(i8*)(intptr_t)v7763;
	*(i2*)(intptr_t)v7764 = v7762;

	i8 v7765 = (i8)(intptr_t)(ws+3032);
	i2 v7766 = *(i2*)(intptr_t)v7765;
	i8 v7767 = (i8)(intptr_t)(ws+3024);
	i8 v7768 = *(i8*)(intptr_t)v7767;
	i8 v7769 = v7768+(+2);
	*(i2*)(intptr_t)v7769 = v7766;

	i1 v7770 = (i1)+0;
	i8 v7771 = (i8)(intptr_t)(ws+3024);
	i8 v7772 = *(i8*)(intptr_t)v7771;
	i8 v7773 = v7772+(+6);
	*(i1*)(intptr_t)v7773 = v7770;

	goto c02_06f9;

c02_06fd:;

c02_06f9:;

	goto c02_06f1;

c02_06f7:;

c02_06f1:;

	i8 v7774 = (i8)(intptr_t)(ws+3024);
	i8 v7775 = *(i8*)(intptr_t)v7774;

void f437_Generate(i8 /* statement */);
	f437_Generate(v7775);

	i8 v7776 = (i8)(intptr_t)(ws+3036);
	i2 v7777 = *(i2*)(intptr_t)v7776;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v7778;
	f132_MidLabel(&v7778, v7777);

void f437_Generate(i8 /* statement */);
	f437_Generate(v7778);

c02_06ee:;


	goto c02_06ea;

c02_06ed:;

endsub:;
}

// InitVariable workspace at ws+3008 length ws+16
void f440_InitVariable(i8 p7779 /* type */, i8 p7780 /* symbol */) {
	*(i8*)(intptr_t)(ws+3008) = p7780; /*symbol */
	*(i8*)(intptr_t)(ws+3016) = p7779; /*type */

	i8 v7781 = (i8)(intptr_t)(ws+3016);
	i8 v7782 = *(i8*)(intptr_t)v7781;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v7782);

	i8 v7783 = (i8)(intptr_t)(ws+3016);
	i8 v7784 = *(i8*)(intptr_t)v7783;
	i8 v7785 = (i8)(intptr_t)(ws+3008);
	i8 v7786 = *(i8*)(intptr_t)v7785;
	*(i8*)(intptr_t)v7786 = v7784;

	i8 v7787 = (i8)(intptr_t)(ws+40);
	i8 v7788 = *(i8*)(intptr_t)v7787;
	i8 v7789 = (i8)(intptr_t)(ws+3008);
	i8 v7790 = *(i8*)(intptr_t)v7789;
	i8 v7791 = v7790+(+8);
	*(i8*)(intptr_t)v7791 = v7788;

	i8 v7792 = (i8)(intptr_t)(ws+3008);
	i8 v7793 = *(i8*)(intptr_t)v7792;

void f214_ArchInitVariable(i8 /* symbol */);
	f214_ArchInitVariable(v7793);

endsub:;
}

// MakePointerType workspace at ws+3048 length ws+16
void f441_MakePointerType(i8* p7794 /* ptrtype */, i8 p7795 /* type */) {
	*(i8*)(intptr_t)(ws+3048) = p7795; /*type */

	i8 v7796 = (i8)(intptr_t)(ws+3048);
	i8 v7797 = *(i8*)(intptr_t)v7796;
	i8 v7798 = v7797+(+32);
	i8 v7799 = *(i8*)(intptr_t)v7798;
	i8 v7800 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7800 = v7799;

	i8 v7801 = (i8)(intptr_t)(ws+3056);
	i8 v7802 = *(i8*)(intptr_t)v7801;
	i8 v7803 = (i8)+0;
	if (v7802==v7803) goto c02_0701; else goto c02_0702;

c02_0701:;

	i8 v7804 = (i8)+0;
	i8 v7805 = (i8)+0;

void f192_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v7806;
	f192_AddSymbol(&v7806, v7805, v7804);
	i8 v7807 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7807 = v7806;

	i8 v7808 = (i8)(intptr_t)(ws+3048);
	i8 v7809 = *(i8*)(intptr_t)v7808;
	i8 v7810 = v7809+(+48);
	i8 v7811 = *(i8*)(intptr_t)v7810;

void f53_StrDupBraced(i8* /* news */, i8 /* s */);
	i8 v7812;
	f53_StrDupBraced(&v7812, v7811);
	i8 v7813 = (i8)(intptr_t)(ws+3056);
	i8 v7814 = *(i8*)(intptr_t)v7813;
	i8 v7815 = v7814+(+48);
	*(i8*)(intptr_t)v7815 = v7812;

	i1 v7816 = (i1)+30;
	i8 v7817 = (i8)(intptr_t)(ws+3056);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	i8 v7819 = v7818+(+46);
	*(i1*)(intptr_t)v7819 = v7816;

	i1 v7820 = (i1)+3;
	i8 v7821 = (i8)(intptr_t)(ws+3056);
	i8 v7822 = *(i8*)(intptr_t)v7821;
	i8 v7823 = v7822+(+40);
	*(i1*)(intptr_t)v7823 = v7820;

	i8 v7824 = (i8)(intptr_t)(ws+1056);
	i8 v7825 = *(i8*)(intptr_t)v7824;
	i8 v7826 = v7825+(+42);
	i2 v7827 = *(i2*)(intptr_t)v7826;
	i8 v7828 = (i8)(intptr_t)(ws+3056);
	i8 v7829 = *(i8*)(intptr_t)v7828;
	i8 v7830 = v7829+(+42);
	*(i2*)(intptr_t)v7830 = v7827;

	i8 v7831 = (i8)(intptr_t)(ws+1056);
	i8 v7832 = *(i8*)(intptr_t)v7831;
	i8 v7833 = v7832+(+41);
	i1 v7834 = *(i1*)(intptr_t)v7833;
	i8 v7835 = (i8)(intptr_t)(ws+3056);
	i8 v7836 = *(i8*)(intptr_t)v7835;
	i8 v7837 = v7836+(+41);
	*(i1*)(intptr_t)v7837 = v7834;

	i8 v7838 = (i8)(intptr_t)(ws+1056);
	i8 v7839 = *(i8*)(intptr_t)v7838;
	i8 v7840 = v7839+(+44);
	i2 v7841 = *(i2*)(intptr_t)v7840;
	i8 v7842 = (i8)(intptr_t)(ws+3056);
	i8 v7843 = *(i8*)(intptr_t)v7842;
	i8 v7844 = v7843+(+44);
	*(i2*)(intptr_t)v7844 = v7841;

	i8 v7845 = (i8)(intptr_t)(ws+3048);
	i8 v7846 = *(i8*)(intptr_t)v7845;
	i8 v7847 = (i8)(intptr_t)(ws+3056);
	i8 v7848 = *(i8*)(intptr_t)v7847;
	*(i8*)(intptr_t)v7848 = v7846;

	i8 v7849 = (i8)(intptr_t)(ws+3056);
	i8 v7850 = *(i8*)(intptr_t)v7849;
	i8 v7851 = (i8)(intptr_t)(ws+3048);
	i8 v7852 = *(i8*)(intptr_t)v7851;
	i8 v7853 = v7852+(+32);
	*(i8*)(intptr_t)v7853 = v7850;

	goto c02_06fe;

c02_0702:;

c02_06fe:;

endsub:;
	*p7794 = *(i8*)(intptr_t)(ws+3056);
}

// MakeArrayType workspace at ws+3000 length ws+26
void f442_MakeArrayType(i8* p7854 /* arraytype */, i2 p7855 /* size */, i8 p7856 /* type */) {
	*(i8*)(intptr_t)(ws+3000) = p7856; /*type */
	*(i2*)(intptr_t)(ws+3008) = p7855; /*size */

	i8 v7857 = (i8)(intptr_t)(ws+3000);
	i8 v7858 = *(i8*)(intptr_t)v7857;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v7858);

	i8 v7859 = (i8)+0;
	i8 v7860 = (i8)+0;

void f192_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v7861;
	f192_AddSymbol(&v7861, v7860, v7859);
	i8 v7862 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7862 = v7861;

	i8 v7863 = (i8)(intptr_t)(ws+3000);
	i8 v7864 = *(i8*)(intptr_t)v7863;
	i8 v7865 = v7864+(+48);
	i8 v7866 = *(i8*)(intptr_t)v7865;
	i8 v7867 = (i8)(intptr_t)(ws+3008);
	i2 v7868 = *(i2*)(intptr_t)v7867;

void f54_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	i8 v7869;
	f54_StrDupArrayed(&v7869, v7868, v7866);
	i8 v7870 = (i8)(intptr_t)(ws+3016);
	i8 v7871 = *(i8*)(intptr_t)v7870;
	i8 v7872 = v7871+(+48);
	*(i8*)(intptr_t)v7872 = v7869;

	i1 v7873 = (i1)+30;
	i8 v7874 = (i8)(intptr_t)(ws+3016);
	i8 v7875 = *(i8*)(intptr_t)v7874;
	i8 v7876 = v7875+(+46);
	*(i1*)(intptr_t)v7876 = v7873;

	i1 v7877 = (i1)+4;
	i8 v7878 = (i8)(intptr_t)(ws+3016);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = v7879+(+40);
	*(i1*)(intptr_t)v7880 = v7877;

	i2 v7881 = (i2)+0;
	i8 v7882 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v7882 = v7881;

	i2 v7883 = (i2)+0;
	i8 v7884 = (i8)(intptr_t)(ws+3008);
	i2 v7885 = *(i2*)(intptr_t)v7884;
	if (v7883<v7885) goto c02_0706; else goto c02_0707;

c02_0706:;

	i8 v7886 = (i8)(intptr_t)(ws+3000);
	i8 v7887 = *(i8*)(intptr_t)v7886;
	i8 v7888 = v7887+(+44);
	i2 v7889 = *(i2*)(intptr_t)v7888;
	i8 v7890 = (i8)(intptr_t)(ws+3008);
	i2 v7891 = *(i2*)(intptr_t)v7890;
	i2 v7892 = v7891+(-1);
	i2 v7893 = v7889*v7892;
	i8 v7894 = (i8)(intptr_t)(ws+3000);
	i8 v7895 = *(i8*)(intptr_t)v7894;
	i8 v7896 = v7895+(+42);
	i2 v7897 = *(i2*)(intptr_t)v7896;
	i2 v7898 = v7893+v7897;
	i8 v7899 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v7899 = v7898;

	goto c02_0703;

c02_0707:;

c02_0703:;

	i8 v7900 = (i8)(intptr_t)(ws+3024);
	i2 v7901 = *(i2*)(intptr_t)v7900;
	i8 v7902 = (i8)(intptr_t)(ws+3016);
	i8 v7903 = *(i8*)(intptr_t)v7902;
	i8 v7904 = v7903+(+42);
	*(i2*)(intptr_t)v7904 = v7901;

	i8 v7905 = (i8)(intptr_t)(ws+3000);
	i8 v7906 = *(i8*)(intptr_t)v7905;
	i8 v7907 = v7906+(+41);
	i1 v7908 = *(i1*)(intptr_t)v7907;
	i8 v7909 = (i8)(intptr_t)(ws+3016);
	i8 v7910 = *(i8*)(intptr_t)v7909;
	i8 v7911 = v7910+(+41);
	*(i1*)(intptr_t)v7911 = v7908;

	i8 v7912 = (i8)(intptr_t)(ws+3000);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = v7913+(+44);
	i2 v7915 = *(i2*)(intptr_t)v7914;
	i8 v7916 = (i8)(intptr_t)(ws+3008);
	i2 v7917 = *(i2*)(intptr_t)v7916;
	i2 v7918 = v7915*v7917;
	i8 v7919 = (i8)(intptr_t)(ws+3016);
	i8 v7920 = *(i8*)(intptr_t)v7919;
	i8 v7921 = v7920+(+44);
	*(i2*)(intptr_t)v7921 = v7918;

	i8 v7922 = (i8)(intptr_t)(ws+3000);
	i8 v7923 = *(i8*)(intptr_t)v7922;
	i8 v7924 = (i8)(intptr_t)(ws+3016);
	i8 v7925 = *(i8*)(intptr_t)v7924;
	*(i8*)(intptr_t)v7925 = v7923;

	i8 v7926 = (i8)(intptr_t)(ws+3008);
	i2 v7927 = *(i2*)(intptr_t)v7926;
	i8 v7928 = (i8)(intptr_t)(ws+3016);
	i8 v7929 = *(i8*)(intptr_t)v7928;
	i8 v7930 = v7929+(+8);
	*(i2*)(intptr_t)v7930 = v7927;

	i4 v7931 = (i4)+0;
	i8 v7932 = (i8)(intptr_t)(ws+3008);
	i2 v7933 = *(i2*)(intptr_t)v7932;
	i2 v7934 = v7933+(-1);
	i4 v7935 = v7934;

void f213_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	i8 v7936;
	f213_ArchGuessIntType(&v7936, v7935, v7931);
	i8 v7937 = (i8)(intptr_t)(ws+3016);
	i8 v7938 = *(i8*)(intptr_t)v7937;
	i8 v7939 = v7938+(+16);
	*(i8*)(intptr_t)v7939 = v7936;

endsub:;
	*p7854 = *(i8*)(intptr_t)(ws+3016);
}

// DestructSymbol workspace at ws+3064 length ws+24
void f444_DestructSymbol(i8 p7941 /* symbol */) {
	*(i8*)(intptr_t)(ws+3064) = p7941; /*symbol */

	i8 v7942 = (i8)(intptr_t)(ws+3064);
	i8 v7943 = *(i8*)(intptr_t)v7942;
	i8 v7944 = v7943+(+46);
	i1 v7945 = *(i1*)(intptr_t)v7944;
	i1 v7946 = (i1)+30;
	if (v7945==v7946) goto c02_070b; else goto c02_070c;

c02_070b:;

	i8 v7947 = (i8)(intptr_t)(ws+3064);
	i8 v7948 = *(i8*)(intptr_t)v7947;
	i8 v7949 = v7948+(+32);
	i8 v7950 = *(i8*)(intptr_t)v7949;
	i8 v7951 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v7951 = v7950;

c02_070f:;

	i8 v7952 = (i8)(intptr_t)(ws+3072);
	i8 v7953 = *(i8*)(intptr_t)v7952;
	i8 v7954 = (i8)+0;
	if (v7953==v7954) goto c02_0712; else goto c02_0711;

c02_0711:;

	i8 v7955 = (i8)(intptr_t)(ws+3072);
	i8 v7956 = *(i8*)(intptr_t)v7955;
	i8 v7957 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v7957 = v7956;

	i8 v7958 = (i8)(intptr_t)(ws+3072);
	i8 v7959 = *(i8*)(intptr_t)v7958;
	i8 v7960 = v7959+(+32);
	i8 v7961 = *(i8*)(intptr_t)v7960;
	i8 v7962 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v7962 = v7961;

	i8 v7963 = (i8)(intptr_t)(ws+3080);
	i8 v7964 = *(i8*)(intptr_t)v7963;
	i8 v7965 = v7964+(+48);
	i8 v7966 = *(i8*)(intptr_t)v7965;

void f32_Free(i8 /* block */);
	f32_Free(v7966);

	i8 v7967 = (i8)(intptr_t)(ws+3080);
	i8 v7968 = *(i8*)(intptr_t)v7967;

void f32_Free(i8 /* block */);
	f32_Free(v7968);

	goto c02_070f;

c02_0712:;

	goto c02_0708;

c02_070c:;

c02_0708:;

	i8 v7969 = (i8)(intptr_t)(ws+3064);
	i8 v7970 = *(i8*)(intptr_t)v7969;
	i8 v7971 = v7970+(+48);
	i8 v7972 = *(i8*)(intptr_t)v7971;

void f32_Free(i8 /* block */);
	f32_Free(v7972);

	i8 v7973 = (i8)(intptr_t)(ws+3064);
	i8 v7974 = *(i8*)(intptr_t)v7973;

void f32_Free(i8 /* block */);
	f32_Free(v7974);

endsub:;
}

// DestructSubroutine workspace at ws+3040 length ws+24
void f445_DestructSubroutine(i8 p7975 /* subr */) {
	*(i8*)(intptr_t)(ws+3040) = p7975; /*subr */

	i8 v7976 = (i8)(intptr_t)(ws+3040);
	i8 v7977 = *(i8*)(intptr_t)v7976;
	i8 v7978 = v7977+(+16);
	i8 v7979 = *(i8*)(intptr_t)v7978;
	i8 v7980 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7980 = v7979;

c02_0715:;

	i8 v7981 = (i8)(intptr_t)(ws+3048);
	i8 v7982 = *(i8*)(intptr_t)v7981;
	i8 v7983 = (i8)+0;
	if (v7982==v7983) goto c02_0718; else goto c02_0717;

c02_0717:;

	i8 v7984 = (i8)(intptr_t)(ws+3048);
	i8 v7985 = *(i8*)(intptr_t)v7984;
	i8 v7986 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7986 = v7985;

	i8 v7987 = (i8)(intptr_t)(ws+3048);
	i8 v7988 = *(i8*)(intptr_t)v7987;
	i8 v7989 = v7988+(+56);
	i8 v7990 = *(i8*)(intptr_t)v7989;
	i8 v7991 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7991 = v7990;

	i8 v7992 = (i8)(intptr_t)(ws+3056);
	i8 v7993 = *(i8*)(intptr_t)v7992;

void f444_DestructSymbol(i8 /* symbol */);
	f444_DestructSymbol(v7993);

	goto c02_0715;

c02_0718:;

	i8 v7994 = (i8)(intptr_t)(ws+3040);
	i8 v7995 = *(i8*)(intptr_t)v7994;

void f32_Free(i8 /* block */);
	f32_Free(v7995);

endsub:;
}

// DestructSubroutineContents workspace at ws+3008 length ws+32
void f443_DestructSubroutineContents(i8 p7940 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p7940; /*subr */



	i8 v7996 = (i8)(intptr_t)(ws+3008);
	i8 v7997 = *(i8*)(intptr_t)v7996;
	i8 v7998 = v7997+(+48);
	i8 v7999 = *(i8*)(intptr_t)v7998;
	i8 v8000 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8000 = v7999;

	i8 v8001 = (i8)(intptr_t)(ws+3016);
	i8 v8002 = *(i8*)(intptr_t)v8001;
	i8 v8003 = (i8)+0;
	if (v8002==v8003) goto c02_071c; else goto c02_071d;

c02_071c:;

	i8 v8004 = (i8)(intptr_t)(ws+3008);
	i8 v8005 = *(i8*)(intptr_t)v8004;
	i8 v8006 = v8005+(+40);
	i8 v8007 = *(i8*)(intptr_t)v8006;
	i8 v8008 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8008 = v8007;

	goto c02_0719;

c02_071d:;

c02_0719:;

	i8 v8009 = (i8)(intptr_t)(ws+3016);
	i8 v8010 = *(i8*)(intptr_t)v8009;
	i8 v8011 = (i8)+0;
	if (v8010==v8011) goto c02_0722; else goto c02_0721;

c02_0721:;

c02_0723:;

	i8 v8012 = (i8)(intptr_t)(ws+3016);
	i8 v8013 = *(i8*)(intptr_t)v8012;
	i8 v8014 = v8013+(+16);
	i8 v8015 = *(i8*)(intptr_t)v8014;
	i8 v8016 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8016 = v8015;

	i8 v8017 = (i8)(intptr_t)(ws+3024);
	i8 v8018 = *(i8*)(intptr_t)v8017;
	i8 v8019 = (i8)+0;
	if (v8018==v8019) goto c02_0728; else goto c02_0729;

c02_0728:;

	goto c02_0724;

c02_0729:;

c02_0725:;

	i8 v8020 = (i8)(intptr_t)(ws+3024);
	i8 v8021 = *(i8*)(intptr_t)v8020;
	i8 v8022 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8022 = v8021;

	goto c02_0723;

c02_0724:;

	goto c02_071e;

c02_0722:;

c02_071e:;

	i8 v8023 = (i8)(intptr_t)(ws+3008);
	i8 v8024 = *(i8*)(intptr_t)v8023;
	i8 v8025 = v8024+(+16);
	i8 v8026 = *(i8*)(intptr_t)v8025;
	i8 v8027 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8027 = v8026;

	i8 v8028 = (i8)(intptr_t)(ws+3016);
	i8 v8029 = *(i8*)(intptr_t)v8028;
	i8 v8030 = (i8)+0;
	if (v8029==v8030) goto c02_072e; else goto c02_072d;

c02_072d:;

	i8 v8031 = (i8)(intptr_t)(ws+3016);
	i8 v8032 = *(i8*)(intptr_t)v8031;
	i8 v8033 = v8032+(+56);
	i8 v8034 = *(i8*)(intptr_t)v8033;
	i8 v8035 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8035 = v8034;

	goto c02_072a;

c02_072e:;

c02_072a:;

c02_0731:;

	i8 v8036 = (i8)(intptr_t)(ws+3032);
	i8 v8037 = *(i8*)(intptr_t)v8036;
	i8 v8038 = (i8)+0;
	if (v8037==v8038) goto c02_0734; else goto c02_0733;

c02_0733:;

	i8 v8039 = (i8)(intptr_t)(ws+3032);
	i8 v8040 = *(i8*)(intptr_t)v8039;
	i8 v8041 = v8040+(+56);
	i8 v8042 = *(i8*)(intptr_t)v8041;
	i8 v8043 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8043 = v8042;

	i8 v8044 = (i8)(intptr_t)(ws+3032);
	i8 v8045 = *(i8*)(intptr_t)v8044;
	i8 v8046 = v8045+(+46);
	i1 v8047 = *(i1*)(intptr_t)v8046;
	i1 v8048 = (i1)+25;
	if (v8047==v8048) goto c02_0738; else goto c02_0739;

c02_0738:;

	i8 v8049 = (i8)(intptr_t)(ws+3032);
	i8 v8050 = *(i8*)(intptr_t)v8049;
	i8 v8051 = *(i8*)(intptr_t)v8050;

void f445_DestructSubroutine(i8 /* subr */);
	f445_DestructSubroutine(v8051);

	goto c02_0735;

c02_0739:;

c02_0735:;

	i8 v8052 = (i8)(intptr_t)(ws+3032);
	i8 v8053 = *(i8*)(intptr_t)v8052;

void f444_DestructSymbol(i8 /* symbol */);
	f444_DestructSymbol(v8053);

	i8 v8054 = (i8)(intptr_t)(ws+3024);
	i8 v8055 = *(i8*)(intptr_t)v8054;
	i8 v8056 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8056 = v8055;

	goto c02_0731;

c02_0734:;

	i8 v8057 = (i8)(intptr_t)(ws+3016);
	i8 v8058 = *(i8*)(intptr_t)v8057;
	i8 v8059 = (i8)+0;
	if (v8058==v8059) goto c02_073e; else goto c02_073d;

c02_073d:;

	i8 v8060 = (i8)+0;
	i8 v8061 = (i8)(intptr_t)(ws+3016);
	i8 v8062 = *(i8*)(intptr_t)v8061;
	i8 v8063 = v8062+(+56);
	*(i8*)(intptr_t)v8063 = v8060;

	goto c02_073a;

c02_073e:;

	i8 v8064 = (i8)+0;
	i8 v8065 = (i8)(intptr_t)(ws+3008);
	i8 v8066 = *(i8*)(intptr_t)v8065;
	i8 v8067 = v8066+(+16);
	*(i8*)(intptr_t)v8067 = v8064;

c02_073a:;

	i8 v8068 = (i8)(intptr_t)(ws+3016);
	i8 v8069 = *(i8*)(intptr_t)v8068;
	i8 v8070 = (i8)(intptr_t)(ws+3008);
	i8 v8071 = *(i8*)(intptr_t)v8070;
	i8 v8072 = v8071+(+24);
	*(i8*)(intptr_t)v8072 = v8069;

endsub:;
}
const i1 c02_s016e[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
const i1 c02_s016f[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };

// expr_i_cant_do_that workspace at ws+3096 length ws+16
void f446_expr_i_cant_do_that(i8 p8073 /* rhs */, i8 p8074 /* lhs */) {
	*(i8*)(intptr_t)(ws+3096) = p8074; /*lhs */
	*(i8*)(intptr_t)(ws+3104) = p8073; /*rhs */


void f55_StartError(void);
	f55_StartError();

	i8 v8075 = (i8)(intptr_t)(ws+3096);
	i8 v8076 = *(i8*)(intptr_t)v8075;
	i8 v8077 = v8076+(+16);
	i8 v8078 = *(i8*)(intptr_t)v8077;
	i8 v8079 = v8078+(+48);
	i8 v8080 = *(i8*)(intptr_t)v8079;

void f11_print(i8 /* ptr */);
	f11_print(v8080);

	i8 v8081 = (i8)(intptr_t)c02_s016e;

void f11_print(i8 /* ptr */);
	f11_print(v8081);

	i8 v8082 = (i8)(intptr_t)(ws+3104);
	i8 v8083 = *(i8*)(intptr_t)v8082;
	i8 v8084 = v8083+(+16);
	i8 v8085 = *(i8*)(intptr_t)v8084;
	i8 v8086 = v8085+(+48);
	i8 v8087 = *(i8*)(intptr_t)v8086;

void f11_print(i8 /* ptr */);
	f11_print(v8087);

	i8 v8088 = (i8)(intptr_t)c02_s016f;

void f11_print(i8 /* ptr */);
	f11_print(v8088);


void f56_EndError(void);
	f56_EndError();

endsub:;
}
const i1 c02_s0170[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
const i1 c02_s0171[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
const i1 c02_s0172[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
const i1 c02_s0173[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };

// CheckExpressionType workspace at ws+3064 length ws+16
void f447_CheckExpressionType(i8 p8089 /* type */, i8 p8090 /* node */) {
	*(i8*)(intptr_t)(ws+3064) = p8090; /*node */
	*(i8*)(intptr_t)(ws+3072) = p8089; /*type */

	i8 v8091 = (i8)(intptr_t)(ws+3064);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+16);
	i8 v8094 = *(i8*)(intptr_t)v8093;
	i8 v8095 = (i8)+0;
	if (v8094==v8095) goto c02_0742; else goto c02_0743;

c02_0742:;

	i8 v8096 = (i8)(intptr_t)(ws+3072);
	i8 v8097 = *(i8*)(intptr_t)v8096;
	i8 v8098 = (i8)(intptr_t)(ws+3064);
	i8 v8099 = *(i8*)(intptr_t)v8098;
	i8 v8100 = v8099+(+16);
	*(i8*)(intptr_t)v8100 = v8097;

	goto c02_073f;

c02_0743:;

c02_073f:;

	i8 v8101 = (i8)(intptr_t)(ws+3064);
	i8 v8102 = *(i8*)(intptr_t)v8101;
	i8 v8103 = v8102+(+16);
	i8 v8104 = *(i8*)(intptr_t)v8103;
	i8 v8105 = (i8)(intptr_t)(ws+3072);
	i8 v8106 = *(i8*)(intptr_t)v8105;
	if (v8104==v8106) goto c02_0748; else goto c02_0747;

c02_0747:;


void f55_StartError(void);
	f55_StartError();

	i8 v8107 = (i8)(intptr_t)c02_s0170;

void f11_print(i8 /* ptr */);
	f11_print(v8107);

	i8 v8108 = (i8)(intptr_t)(ws+3064);
	i8 v8109 = *(i8*)(intptr_t)v8108;
	i8 v8110 = v8109+(+16);
	i8 v8111 = *(i8*)(intptr_t)v8110;
	i8 v8112 = v8111+(+48);
	i8 v8113 = *(i8*)(intptr_t)v8112;

void f11_print(i8 /* ptr */);
	f11_print(v8113);

	i8 v8114 = (i8)(intptr_t)c02_s0171;

void f11_print(i8 /* ptr */);
	f11_print(v8114);

	i8 v8115 = (i8)(intptr_t)(ws+3072);
	i8 v8116 = *(i8*)(intptr_t)v8115;
	i8 v8117 = v8116+(+48);
	i8 v8118 = *(i8*)(intptr_t)v8117;

void f11_print(i8 /* ptr */);
	f11_print(v8118);

	i8 v8119 = (i8)(intptr_t)c02_s0172;

void f11_print(i8 /* ptr */);
	f11_print(v8119);


void f56_EndError(void);
	f56_EndError();

	goto c02_0744;

c02_0748:;

c02_0744:;

	i8 v8120 = (i8)(intptr_t)(ws+3072);
	i8 v8121 = *(i8*)(intptr_t)v8120;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8122;
	f199_IsPtr(&v8122, v8121);
	i1 v8123 = (i1)+0;
	if (v8122==v8123) goto c02_0750; else goto c02_074f;

c02_0750:;

	i8 v8124 = (i8)(intptr_t)(ws+3072);
	i8 v8125 = *(i8*)(intptr_t)v8124;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8126;
	f200_IsNum(&v8126, v8125);
	i1 v8127 = (i1)+0;
	if (v8126==v8127) goto c02_074e; else goto c02_074f;

c02_074e:;


void f55_StartError(void);
	f55_StartError();

	i8 v8128 = (i8)(intptr_t)(ws+3072);
	i8 v8129 = *(i8*)(intptr_t)v8128;
	i8 v8130 = v8129+(+48);
	i8 v8131 = *(i8*)(intptr_t)v8130;

void f11_print(i8 /* ptr */);
	f11_print(v8131);

	i8 v8132 = (i8)(intptr_t)c02_s0173;

void f11_print(i8 /* ptr */);
	f11_print(v8132);


void f56_EndError(void);
	f56_EndError();

	goto c02_0749;

c02_074f:;

c02_0749:;

endsub:;
}
const i1 c02_s0174[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
const i1 c02_s0175[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };

// ResolveUntypedConstantsForAddOrSub workspace at ws+3040 length ws+16
void f448_ResolveUntypedConstantsForAddOrSub(i8 p8133 /* rhs */, i8 p8134 /* lhs */) {
	*(i8*)(intptr_t)(ws+3040) = p8134; /*lhs */
	*(i8*)(intptr_t)(ws+3048) = p8133; /*rhs */

	i8 v8135 = (i8)(intptr_t)(ws+3040);
	i8 v8136 = *(i8*)(intptr_t)v8135;
	i8 v8137 = v8136+(+16);
	i8 v8138 = *(i8*)(intptr_t)v8137;
	i8 v8139 = (i8)+0;
	if (v8138==v8139) goto c02_0757; else goto c02_0758;

c02_0758:;

	i8 v8140 = (i8)(intptr_t)(ws+3048);
	i8 v8141 = *(i8*)(intptr_t)v8140;
	i8 v8142 = v8141+(+16);
	i8 v8143 = *(i8*)(intptr_t)v8142;
	i8 v8144 = (i8)+0;
	if (v8143==v8144) goto c02_0756; else goto c02_0757;

c02_0756:;

	i8 v8145 = (i8)(intptr_t)(ws+3040);
	i8 v8146 = *(i8*)(intptr_t)v8145;
	i8 v8147 = v8146+(+16);
	i8 v8148 = *(i8*)(intptr_t)v8147;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8149;
	f200_IsNum(&v8149, v8148);
	i1 v8150 = (i1)+0;
	if (v8149==v8150) goto c02_075d; else goto c02_075c;

c02_075c:;

	i8 v8151 = (i8)(intptr_t)(ws+3040);
	i8 v8152 = *(i8*)(intptr_t)v8151;
	i8 v8153 = v8152+(+16);
	i8 v8154 = *(i8*)(intptr_t)v8153;
	i8 v8155 = (i8)(intptr_t)(ws+3048);
	i8 v8156 = *(i8*)(intptr_t)v8155;
	i8 v8157 = v8156+(+16);
	*(i8*)(intptr_t)v8157 = v8154;

	goto c02_0759;

c02_075d:;

	i8 v8158 = (i8)(intptr_t)(ws+3040);
	i8 v8159 = *(i8*)(intptr_t)v8158;
	i8 v8160 = v8159+(+16);
	i8 v8161 = *(i8*)(intptr_t)v8160;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8162;
	f199_IsPtr(&v8162, v8161);
	i1 v8163 = (i1)+0;
	if (v8162==v8163) goto c02_0761; else goto c02_0760;

c02_0760:;

	i8 v8164 = (i8)(intptr_t)(ws+1056);
	i8 v8165 = *(i8*)(intptr_t)v8164;
	i8 v8166 = (i8)(intptr_t)(ws+3048);
	i8 v8167 = *(i8*)(intptr_t)v8166;
	i8 v8168 = v8167+(+16);
	*(i8*)(intptr_t)v8168 = v8165;

	goto c02_0759;

c02_0761:;

	i8 v8169 = (i8)(intptr_t)c02_s0174;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8169);

c02_0759:;

	goto c02_0751;

c02_0757:;

c02_0751:;

	i8 v8170 = (i8)(intptr_t)(ws+3040);
	i8 v8171 = *(i8*)(intptr_t)v8170;
	i8 v8172 = v8171+(+16);
	i8 v8173 = *(i8*)(intptr_t)v8172;
	i8 v8174 = (i8)+0;
	if (v8173==v8174) goto c02_0769; else goto c02_0768;

c02_0769:;

	i8 v8175 = (i8)(intptr_t)(ws+3048);
	i8 v8176 = *(i8*)(intptr_t)v8175;
	i8 v8177 = v8176+(+16);
	i8 v8178 = *(i8*)(intptr_t)v8177;
	i8 v8179 = (i8)+0;
	if (v8178==v8179) goto c02_0768; else goto c02_0767;

c02_0767:;

	i8 v8180 = (i8)(intptr_t)(ws+3048);
	i8 v8181 = *(i8*)(intptr_t)v8180;
	i8 v8182 = v8181+(+16);
	i8 v8183 = *(i8*)(intptr_t)v8182;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8184;
	f200_IsNum(&v8184, v8183);
	i1 v8185 = (i1)+0;
	if (v8184==v8185) goto c02_076e; else goto c02_076d;

c02_076d:;

	i8 v8186 = (i8)(intptr_t)(ws+3048);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	i8 v8188 = v8187+(+16);
	i8 v8189 = *(i8*)(intptr_t)v8188;
	i8 v8190 = (i8)(intptr_t)(ws+3040);
	i8 v8191 = *(i8*)(intptr_t)v8190;
	i8 v8192 = v8191+(+16);
	*(i8*)(intptr_t)v8192 = v8189;

	goto c02_076a;

c02_076e:;

	i8 v8193 = (i8)(intptr_t)(ws+3048);
	i8 v8194 = *(i8*)(intptr_t)v8193;
	i8 v8195 = v8194+(+16);
	i8 v8196 = *(i8*)(intptr_t)v8195;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8197;
	f199_IsPtr(&v8197, v8196);
	i1 v8198 = (i1)+0;
	if (v8197==v8198) goto c02_0772; else goto c02_0771;

c02_0771:;

	i8 v8199 = (i8)(intptr_t)c02_s0175;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8199);

	goto c02_076a;

c02_0772:;

c02_076a:;

	goto c02_0762;

c02_0768:;

c02_0762:;

endsub:;
}

// ResolveUntypedConstantsSimply workspace at ws+3064 length ws+32
void f449_ResolveUntypedConstantsSimply(i8 p8200 /* rhs */, i8 p8201 /* lhs */) {
	*(i8*)(intptr_t)(ws+3064) = p8201; /*lhs */
	*(i8*)(intptr_t)(ws+3072) = p8200; /*rhs */

	i8 v8202 = (i8)(intptr_t)(ws+3064);
	i8 v8203 = *(i8*)(intptr_t)v8202;
	i8 v8204 = v8203+(+16);
	i8 v8205 = *(i8*)(intptr_t)v8204;
	i8 v8206 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v8206 = v8205;

	i8 v8207 = (i8)(intptr_t)(ws+3072);
	i8 v8208 = *(i8*)(intptr_t)v8207;
	i8 v8209 = v8208+(+16);
	i8 v8210 = *(i8*)(intptr_t)v8209;
	i8 v8211 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v8211 = v8210;

	i8 v8212 = (i8)(intptr_t)(ws+3080);
	i8 v8213 = *(i8*)(intptr_t)v8212;
	i8 v8214 = (i8)+0;
	if (v8213==v8214) goto c02_0779; else goto c02_077a;

c02_077a:;

	i8 v8215 = (i8)(intptr_t)(ws+3088);
	i8 v8216 = *(i8*)(intptr_t)v8215;
	i8 v8217 = (i8)+0;
	if (v8216==v8217) goto c02_0778; else goto c02_0779;

c02_0778:;

	i8 v8218 = (i8)(intptr_t)(ws+3080);
	i8 v8219 = *(i8*)(intptr_t)v8218;
	i8 v8220 = (i8)(intptr_t)(ws+3072);
	i8 v8221 = *(i8*)(intptr_t)v8220;
	i8 v8222 = v8221+(+16);
	*(i8*)(intptr_t)v8222 = v8219;

	goto c02_0773;

c02_0779:;

	i8 v8223 = (i8)(intptr_t)(ws+3080);
	i8 v8224 = *(i8*)(intptr_t)v8223;
	i8 v8225 = (i8)+0;
	if (v8224==v8225) goto c02_0781; else goto c02_0780;

c02_0781:;

	i8 v8226 = (i8)(intptr_t)(ws+3088);
	i8 v8227 = *(i8*)(intptr_t)v8226;
	i8 v8228 = (i8)+0;
	if (v8227==v8228) goto c02_0780; else goto c02_077f;

c02_077f:;

	i8 v8229 = (i8)(intptr_t)(ws+3088);
	i8 v8230 = *(i8*)(intptr_t)v8229;
	i8 v8231 = (i8)(intptr_t)(ws+3064);
	i8 v8232 = *(i8*)(intptr_t)v8231;
	i8 v8233 = v8232+(+16);
	*(i8*)(intptr_t)v8233 = v8230;

	goto c02_0773;

c02_0780:;

	i8 v8234 = (i8)(intptr_t)(ws+3080);
	i8 v8235 = *(i8*)(intptr_t)v8234;
	i8 v8236 = (i8)(intptr_t)(ws+3088);
	i8 v8237 = *(i8*)(intptr_t)v8236;
	if (v8235==v8237) goto c02_0785; else goto c02_0784;

c02_0784:;

	i8 v8238 = (i8)(intptr_t)(ws+3064);
	i8 v8239 = *(i8*)(intptr_t)v8238;
	i8 v8240 = (i8)(intptr_t)(ws+3072);
	i8 v8241 = *(i8*)(intptr_t)v8240;

void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8241, v8239);

	goto c02_0773;

c02_0785:;

c02_0773:;

endsub:;
}
const i1 c02_s0176[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };

// CheckNumber workspace at ws+3064 length ws+8
void f450_CheckNumber(i8 p8242 /* node */) {
	*(i8*)(intptr_t)(ws+3064) = p8242; /*node */

	i8 v8243 = (i8)(intptr_t)(ws+3064);
	i8 v8244 = *(i8*)(intptr_t)v8243;
	i8 v8245 = v8244+(+16);
	i8 v8246 = *(i8*)(intptr_t)v8245;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8247;
	f200_IsNum(&v8247, v8246);
	i1 v8248 = (i1)+0;
	if (v8247==v8248) goto c02_0789; else goto c02_078a;

c02_0789:;

	i8 v8249 = (i8)(intptr_t)c02_s0176;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8249);

	goto c02_0786;

c02_078a:;

c02_0786:;

endsub:;
}

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3048 length ws+16
void f451_ResolveUntypedConstantsNeedingNumbers(i8 p8250 /* rhs */, i8 p8251 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8251; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p8250; /*rhs */

	i8 v8252 = (i8)(intptr_t)(ws+3048);
	i8 v8253 = *(i8*)(intptr_t)v8252;
	i8 v8254 = (i8)(intptr_t)(ws+3056);
	i8 v8255 = *(i8*)(intptr_t)v8254;

void f449_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	f449_ResolveUntypedConstantsSimply(v8255, v8253);

	i8 v8256 = (i8)(intptr_t)(ws+3048);
	i8 v8257 = *(i8*)(intptr_t)v8256;

void f450_CheckNumber(i8 /* node */);
	f450_CheckNumber(v8257);

	i8 v8258 = (i8)(intptr_t)(ws+3056);
	i8 v8259 = *(i8*)(intptr_t)v8258;

void f450_CheckNumber(i8 /* node */);
	f450_CheckNumber(v8259);

endsub:;
}

// CondSimple workspace at ws+3040 length ws+16
void f452_CondSimple(i8 p8260 /* rhs */, i8 p8261 /* lhs */) {
	*(i8*)(intptr_t)(ws+3040) = p8261; /*lhs */
	*(i8*)(intptr_t)(ws+3048) = p8260; /*rhs */

	i8 v8262 = (i8)(intptr_t)(ws+3040);
	i8 v8263 = *(i8*)(intptr_t)v8262;
	i8 v8264 = (i8)(intptr_t)(ws+3048);
	i8 v8265 = *(i8*)(intptr_t)v8264;

void f449_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	f449_ResolveUntypedConstantsSimply(v8265, v8263);

	i8 v8266 = (i8)(intptr_t)(ws+3040);
	i8 v8267 = *(i8*)(intptr_t)v8266;
	i8 v8268 = v8267+(+16);
	i8 v8269 = *(i8*)(intptr_t)v8268;
	i8 v8270 = (i8)(intptr_t)(ws+3048);
	i8 v8271 = *(i8*)(intptr_t)v8270;
	i8 v8272 = v8271+(+16);
	i8 v8273 = *(i8*)(intptr_t)v8272;
	if (v8269==v8273) goto c02_078f; else goto c02_078e;

c02_078e:;

	i8 v8274 = (i8)(intptr_t)(ws+3040);
	i8 v8275 = *(i8*)(intptr_t)v8274;
	i8 v8276 = (i8)(intptr_t)(ws+3048);
	i8 v8277 = *(i8*)(intptr_t)v8276;

void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8277, v8275);

	goto c02_078b;

c02_078f:;

c02_078b:;

endsub:;
}

// Expr1Simple workspace at ws+3000 length ws+24
void f453_Expr1Simple(i8* p8278 /* result */, i8 p8279 /* lhs */, i1 p8280 /* op */) {
	*(i1*)(intptr_t)(ws+3000) = p8280; /*op */
	*(i8*)(intptr_t)(ws+3008) = p8279; /*lhs */

	i8 v8281 = (i8)(intptr_t)(ws+3000);
	i1 v8282 = *(i1*)(intptr_t)v8281;
	i8 v8283 = (i8)(intptr_t)(ws+3008);
	i8 v8284 = *(i8*)(intptr_t)v8283;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8285;
	f141_NodeWidth(&v8285, v8284);
	i8 v8286 = (i8)(intptr_t)(ws+3008);
	i8 v8287 = *(i8*)(intptr_t)v8286;

void f145_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8288;
	f145_MidC1Op(&v8288, v8287, v8285, v8282);
	i8 v8289 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8289 = v8288;

	i8 v8290 = (i8)(intptr_t)(ws+3008);
	i8 v8291 = *(i8*)(intptr_t)v8290;
	i8 v8292 = v8291+(+16);
	i8 v8293 = *(i8*)(intptr_t)v8292;
	i8 v8294 = (i8)(intptr_t)(ws+3016);
	i8 v8295 = *(i8*)(intptr_t)v8294;
	i8 v8296 = v8295+(+16);
	*(i8*)(intptr_t)v8296 = v8293;

endsub:;
	*p8278 = *(i8*)(intptr_t)(ws+3016);
}

// cant_add_that workspace at ws+3040 length ws+0
void f455_cant_add_that(void) {

	i8 v8304 = (i8)(intptr_t)(ws+3000);
	i8 v8305 = *(i8*)(intptr_t)v8304;
	i8 v8306 = (i8)(intptr_t)(ws+3008);
	i8 v8307 = *(i8*)(intptr_t)v8306;

void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8307, v8305);

endsub:;
}

// ExprAdd workspace at ws+3000 length ws+40
void f454_ExprAdd(i8* p8297 /* result */, i8 p8298 /* rhs */, i8 p8299 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8299; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8298; /*rhs */

	i8 v8300 = (i8)(intptr_t)(ws+3000);
	i8 v8301 = *(i8*)(intptr_t)v8300;
	i8 v8302 = (i8)(intptr_t)(ws+3008);
	i8 v8303 = *(i8*)(intptr_t)v8302;

void f448_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	f448_ResolveUntypedConstantsForAddOrSub(v8303, v8301);


	i8 v8308 = (i8)(intptr_t)(ws+3000);
	i8 v8309 = *(i8*)(intptr_t)v8308;
	i8 v8310 = v8309+(+16);
	i8 v8311 = *(i8*)(intptr_t)v8310;
	i8 v8312 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8312 = v8311;

	i8 v8313 = (i8)(intptr_t)(ws+3008);
	i8 v8314 = *(i8*)(intptr_t)v8313;
	i8 v8315 = v8314+(+16);
	i8 v8316 = *(i8*)(intptr_t)v8315;
	i8 v8317 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8317 = v8316;

	i8 v8318 = (i8)(intptr_t)(ws+3024);
	i8 v8319 = *(i8*)(intptr_t)v8318;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8320;
	f199_IsPtr(&v8320, v8319);
	i1 v8321 = (i1)+0;
	if (v8320==v8321) goto c02_0794; else goto c02_0793;

c02_0793:;

	i8 v8322 = (i8)(intptr_t)(ws+3032);
	i8 v8323 = *(i8*)(intptr_t)v8322;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8324;
	f199_IsPtr(&v8324, v8323);
	i1 v8325 = (i1)+0;
	if (v8324==v8325) goto c02_079c; else goto c02_079a;

c02_079c:;

	i8 v8326 = (i8)(intptr_t)(ws+3032);
	i8 v8327 = *(i8*)(intptr_t)v8326;
	i8 v8328 = (i8)(intptr_t)(ws+1056);
	i8 v8329 = *(i8*)(intptr_t)v8328;
	if (v8327==v8329) goto c02_079b; else goto c02_079a;

c02_079a:;


void f455_cant_add_that(void);
	f455_cant_add_that();

	goto c02_0795;

c02_079b:;

c02_0795:;

	goto c02_0790;

c02_0794:;

	i8 v8330 = (i8)(intptr_t)(ws+3032);
	i8 v8331 = *(i8*)(intptr_t)v8330;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8332;
	f199_IsPtr(&v8332, v8331);
	i1 v8333 = (i1)+0;
	if (v8332==v8333) goto c02_07a0; else goto c02_079f;

c02_079f:;


void f455_cant_add_that(void);
	f455_cant_add_that();

	goto c02_0790;

c02_07a0:;

	i8 v8334 = (i8)(intptr_t)(ws+3024);
	i8 v8335 = *(i8*)(intptr_t)v8334;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8336;
	f199_IsPtr(&v8336, v8335);
	i1 v8337 = (i1)+0;
	if (v8336==v8337) goto c02_07a7; else goto c02_07a6;

c02_07a7:;

	i8 v8338 = (i8)(intptr_t)(ws+3024);
	i8 v8339 = *(i8*)(intptr_t)v8338;
	i8 v8340 = (i8)(intptr_t)(ws+3032);
	i8 v8341 = *(i8*)(intptr_t)v8340;
	if (v8339==v8341) goto c02_07a6; else goto c02_07a5;

c02_07a5:;


void f455_cant_add_that(void);
	f455_cant_add_that();

	goto c02_0790;

c02_07a6:;

c02_0790:;

	i1 v8342 = (i1)+155;
	i8 v8343 = (i8)(intptr_t)(ws+3000);
	i8 v8344 = *(i8*)(intptr_t)v8343;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8345;
	f141_NodeWidth(&v8345, v8344);
	i8 v8346 = (i8)(intptr_t)(ws+3000);
	i8 v8347 = *(i8*)(intptr_t)v8346;
	i8 v8348 = (i8)(intptr_t)(ws+3008);
	i8 v8349 = *(i8*)(intptr_t)v8348;

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8350;
	f147_MidC2Op(&v8350, v8349, v8347, v8345, v8342);
	i8 v8351 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8351 = v8350;

	i8 v8352 = (i8)(intptr_t)(ws+3024);
	i8 v8353 = *(i8*)(intptr_t)v8352;
	i8 v8354 = (i8)(intptr_t)(ws+3016);
	i8 v8355 = *(i8*)(intptr_t)v8354;
	i8 v8356 = v8355+(+16);
	*(i8*)(intptr_t)v8356 = v8353;

endsub:;
	*p8297 = *(i8*)(intptr_t)(ws+3016);
}

// cant_sub_that workspace at ws+3040 length ws+0
void f457_cant_sub_that(void) {

	i8 v8364 = (i8)(intptr_t)(ws+3000);
	i8 v8365 = *(i8*)(intptr_t)v8364;
	i8 v8366 = (i8)(intptr_t)(ws+3008);
	i8 v8367 = *(i8*)(intptr_t)v8366;

void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8367, v8365);

endsub:;
}

// ExprSub workspace at ws+3000 length ws+40
void f456_ExprSub(i8* p8357 /* result */, i8 p8358 /* rhs */, i8 p8359 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8359; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8358; /*rhs */

	i8 v8360 = (i8)(intptr_t)(ws+3000);
	i8 v8361 = *(i8*)(intptr_t)v8360;
	i8 v8362 = (i8)(intptr_t)(ws+3008);
	i8 v8363 = *(i8*)(intptr_t)v8362;

void f448_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	f448_ResolveUntypedConstantsForAddOrSub(v8363, v8361);


	i8 v8368 = (i8)(intptr_t)(ws+3000);
	i8 v8369 = *(i8*)(intptr_t)v8368;
	i8 v8370 = v8369+(+16);
	i8 v8371 = *(i8*)(intptr_t)v8370;
	i8 v8372 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8372 = v8371;

	i8 v8373 = (i8)(intptr_t)(ws+3008);
	i8 v8374 = *(i8*)(intptr_t)v8373;
	i8 v8375 = v8374+(+16);
	i8 v8376 = *(i8*)(intptr_t)v8375;
	i8 v8377 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8377 = v8376;

	i8 v8378 = (i8)(intptr_t)(ws+3024);
	i8 v8379 = *(i8*)(intptr_t)v8378;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8380;
	f199_IsPtr(&v8380, v8379);
	i1 v8381 = (i1)+0;
	if (v8380==v8381) goto c02_07b0; else goto c02_07b2;

c02_07b2:;

	i8 v8382 = (i8)(intptr_t)(ws+3032);
	i8 v8383 = *(i8*)(intptr_t)v8382;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8384;
	f199_IsPtr(&v8384, v8383);
	i1 v8385 = (i1)+0;
	if (v8384==v8385) goto c02_07b1; else goto c02_07b0;

c02_07b1:;

	i8 v8386 = (i8)(intptr_t)(ws+3032);
	i8 v8387 = *(i8*)(intptr_t)v8386;
	i8 v8388 = (i8)(intptr_t)(ws+1056);
	i8 v8389 = *(i8*)(intptr_t)v8388;
	if (v8387==v8389) goto c02_07b0; else goto c02_07af;

c02_07af:;


void f457_cant_sub_that(void);
	f457_cant_sub_that();

	goto c02_07a8;

c02_07b0:;

	i8 v8390 = (i8)(intptr_t)(ws+3024);
	i8 v8391 = *(i8*)(intptr_t)v8390;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8392;
	f200_IsNum(&v8392, v8391);
	i1 v8393 = (i1)+0;
	if (v8392==v8393) goto c02_07b8; else goto c02_07b9;

c02_07b9:;

	i8 v8394 = (i8)(intptr_t)(ws+3032);
	i8 v8395 = *(i8*)(intptr_t)v8394;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8396;
	f199_IsPtr(&v8396, v8395);
	i1 v8397 = (i1)+0;
	if (v8396==v8397) goto c02_07b8; else goto c02_07b7;

c02_07b7:;


void f457_cant_sub_that(void);
	f457_cant_sub_that();

	goto c02_07a8;

c02_07b8:;

	i8 v8398 = (i8)(intptr_t)(ws+3024);
	i8 v8399 = *(i8*)(intptr_t)v8398;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8400;
	f200_IsNum(&v8400, v8399);
	i1 v8401 = (i1)+0;
	if (v8400==v8401) goto c02_07c1; else goto c02_07c3;

c02_07c3:;

	i8 v8402 = (i8)(intptr_t)(ws+3032);
	i8 v8403 = *(i8*)(intptr_t)v8402;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8404;
	f200_IsNum(&v8404, v8403);
	i1 v8405 = (i1)+0;
	if (v8404==v8405) goto c02_07c1; else goto c02_07c2;

c02_07c2:;

	i8 v8406 = (i8)(intptr_t)(ws+3024);
	i8 v8407 = *(i8*)(intptr_t)v8406;
	i8 v8408 = (i8)(intptr_t)(ws+3032);
	i8 v8409 = *(i8*)(intptr_t)v8408;
	if (v8407==v8409) goto c02_07c1; else goto c02_07c0;

c02_07c0:;


void f457_cant_sub_that(void);
	f457_cant_sub_that();

	goto c02_07a8;

c02_07c1:;

c02_07a8:;

	i1 v8410 = (i1)+130;
	i8 v8411 = (i8)(intptr_t)(ws+3000);
	i8 v8412 = *(i8*)(intptr_t)v8411;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8413;
	f141_NodeWidth(&v8413, v8412);
	i8 v8414 = (i8)(intptr_t)(ws+3000);
	i8 v8415 = *(i8*)(intptr_t)v8414;
	i8 v8416 = (i8)(intptr_t)(ws+3008);
	i8 v8417 = *(i8*)(intptr_t)v8416;

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8418;
	f147_MidC2Op(&v8418, v8417, v8415, v8413, v8410);
	i8 v8419 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8419 = v8418;

	i8 v8420 = (i8)(intptr_t)(ws+3024);
	i8 v8421 = *(i8*)(intptr_t)v8420;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8422;
	f199_IsPtr(&v8422, v8421);
	i1 v8423 = (i1)+0;
	if (v8422==v8423) goto c02_07ca; else goto c02_07cb;

c02_07cb:;

	i8 v8424 = (i8)(intptr_t)(ws+3024);
	i8 v8425 = *(i8*)(intptr_t)v8424;
	i8 v8426 = (i8)(intptr_t)(ws+3032);
	i8 v8427 = *(i8*)(intptr_t)v8426;
	if (v8425==v8427) goto c02_07c9; else goto c02_07ca;

c02_07c9:;

	i8 v8428 = (i8)(intptr_t)(ws+1056);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	i8 v8430 = (i8)(intptr_t)(ws+3016);
	i8 v8431 = *(i8*)(intptr_t)v8430;
	i8 v8432 = v8431+(+16);
	*(i8*)(intptr_t)v8432 = v8429;

	goto c02_07c4;

c02_07ca:;

	i8 v8433 = (i8)(intptr_t)(ws+3024);
	i8 v8434 = *(i8*)(intptr_t)v8433;
	i8 v8435 = (i8)(intptr_t)(ws+3016);
	i8 v8436 = *(i8*)(intptr_t)v8435;
	i8 v8437 = v8436+(+16);
	*(i8*)(intptr_t)v8437 = v8434;

c02_07c4:;

endsub:;
	*p8357 = *(i8*)(intptr_t)(ws+3016);
}

// Expr2Simple workspace at ws+3000 length ws+48
void f458_Expr2Simple(i8* p8438 /* result */, i8 p8439 /* rhs */, i8 p8440 /* lhs */, i1 p8441 /* uop */, i1 p8442 /* sop */) {
	*(i1*)(intptr_t)(ws+3000) = p8442; /*sop */
	*(i1*)(intptr_t)(ws+3001) = p8441; /*uop */
	*(i8*)(intptr_t)(ws+3008) = p8440; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8439; /*rhs */

	i8 v8443 = (i8)(intptr_t)(ws+3008);
	i8 v8444 = *(i8*)(intptr_t)v8443;
	i8 v8445 = (i8)(intptr_t)(ws+3016);
	i8 v8446 = *(i8*)(intptr_t)v8445;

void f451_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	f451_ResolveUntypedConstantsNeedingNumbers(v8446, v8444);

	i8 v8447 = (i8)(intptr_t)(ws+3001);
	i1 v8448 = *(i1*)(intptr_t)v8447;
	i8 v8449 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8449 = v8448;

	i8 v8450 = (i8)(intptr_t)(ws+3008);
	i8 v8451 = *(i8*)(intptr_t)v8450;
	i8 v8452 = v8451+(+16);
	i8 v8453 = *(i8*)(intptr_t)v8452;

void f201_IsSNum(i1* /* result */, i8 /* type */);
	i1 v8454;
	f201_IsSNum(&v8454, v8453);
	i1 v8455 = (i1)+0;
	if (v8454==v8455) goto c02_07d0; else goto c02_07cf;

c02_07cf:;

	i8 v8456 = (i8)(intptr_t)(ws+3000);
	i1 v8457 = *(i1*)(intptr_t)v8456;
	i8 v8458 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8458 = v8457;

	goto c02_07cc;

c02_07d0:;

c02_07cc:;

	i8 v8459 = (i8)(intptr_t)(ws+3008);
	i8 v8460 = *(i8*)(intptr_t)v8459;
	i8 v8461 = v8460+(+16);
	i8 v8462 = *(i8*)(intptr_t)v8461;
	i8 v8463 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8463 = v8462;

	i8 v8464 = (i8)(intptr_t)(ws+3032);
	i1 v8465 = *(i1*)(intptr_t)v8464;
	i8 v8466 = (i8)(intptr_t)(ws+3008);
	i8 v8467 = *(i8*)(intptr_t)v8466;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8468;
	f141_NodeWidth(&v8468, v8467);
	i8 v8469 = (i8)(intptr_t)(ws+3008);
	i8 v8470 = *(i8*)(intptr_t)v8469;
	i8 v8471 = (i8)(intptr_t)(ws+3016);
	i8 v8472 = *(i8*)(intptr_t)v8471;

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8473;
	f147_MidC2Op(&v8473, v8472, v8470, v8468, v8465);
	i8 v8474 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8474 = v8473;

	i8 v8475 = (i8)(intptr_t)(ws+3040);
	i8 v8476 = *(i8*)(intptr_t)v8475;
	i8 v8477 = (i8)(intptr_t)(ws+3024);
	i8 v8478 = *(i8*)(intptr_t)v8477;
	i8 v8479 = v8478+(+16);
	*(i8*)(intptr_t)v8479 = v8476;

endsub:;
	*p8438 = *(i8*)(intptr_t)(ws+3024);
}
const i1 c02_s0177[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };

// expr_i_checkrhsconst workspace at ws+3048 length ws+8
void f459_expr_i_checkrhsconst(i8 p8480 /* rhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8480; /*rhs */

	i8 v8481 = (i8)(intptr_t)(ws+3048);
	i8 v8482 = *(i8*)(intptr_t)v8481;
	i8 v8483 = v8482+(+66);
	i1 v8484 = *(i1*)(intptr_t)v8483;
	i1 v8485 = (i1)+40;
	if (v8484==v8485) goto c02_07d5; else goto c02_07d4;

c02_07d4:;

	i8 v8486 = (i8)(intptr_t)c02_s0177;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8486);

	goto c02_07d1;

c02_07d5:;

c02_07d1:;

endsub:;
}
const i1 c02_s0178[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };

// expr_i_checkshift workspace at ws+3048 length ws+16
void f460_expr_i_checkshift(i8 p8487 /* rhs */, i8 p8488 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8488; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p8487; /*rhs */

	i8 v8489 = (i8)(intptr_t)(ws+3048);
	i8 v8490 = *(i8*)(intptr_t)v8489;
	i8 v8491 = v8490+(+16);
	i8 v8492 = *(i8*)(intptr_t)v8491;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v8493;
	f200_IsNum(&v8493, v8492);
	i1 v8494 = (i1)+0;
	if (v8493==v8494) goto c02_07d9; else goto c02_07da;

c02_07d9:;

	i8 v8495 = (i8)(intptr_t)c02_s0178;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8495);

	goto c02_07d6;

c02_07da:;

c02_07d6:;

	i8 v8496 = (i8)(intptr_t)(ws+3056);
	i8 v8497 = *(i8*)(intptr_t)v8496;
	i8 v8498 = (i8)(intptr_t)(ws+1040);
	i8 v8499 = *(i8*)(intptr_t)v8498;

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v8499, v8497);

endsub:;
}

// ExprShift workspace at ws+3000 length ws+48
void f461_ExprShift(i8* p8500 /* result */, i8 p8501 /* rhs */, i8 p8502 /* lhs */, i1 p8503 /* uop */, i1 p8504 /* sop */) {
	*(i1*)(intptr_t)(ws+3000) = p8504; /*sop */
	*(i1*)(intptr_t)(ws+3001) = p8503; /*uop */
	*(i8*)(intptr_t)(ws+3008) = p8502; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8501; /*rhs */

	i8 v8505 = (i8)(intptr_t)(ws+3001);
	i1 v8506 = *(i1*)(intptr_t)v8505;
	i8 v8507 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8507 = v8506;

	i8 v8508 = (i8)(intptr_t)(ws+3008);
	i8 v8509 = *(i8*)(intptr_t)v8508;
	i8 v8510 = v8509+(+16);
	i8 v8511 = *(i8*)(intptr_t)v8510;

void f201_IsSNum(i1* /* result */, i8 /* type */);
	i1 v8512;
	f201_IsSNum(&v8512, v8511);
	i1 v8513 = (i1)+0;
	if (v8512==v8513) goto c02_07df; else goto c02_07de;

c02_07de:;

	i8 v8514 = (i8)(intptr_t)(ws+3000);
	i1 v8515 = *(i1*)(intptr_t)v8514;
	i8 v8516 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8516 = v8515;

	goto c02_07db;

c02_07df:;

c02_07db:;

	i8 v8517 = (i8)(intptr_t)(ws+3008);
	i8 v8518 = *(i8*)(intptr_t)v8517;
	i8 v8519 = v8518+(+66);
	i1 v8520 = *(i1*)(intptr_t)v8519;
	i1 v8521 = (i1)+40;
	if (v8520==v8521) goto c02_07e3; else goto c02_07e4;

c02_07e3:;

	i8 v8522 = (i8)(intptr_t)(ws+3016);
	i8 v8523 = *(i8*)(intptr_t)v8522;

void f459_expr_i_checkrhsconst(i8 /* rhs */);
	f459_expr_i_checkrhsconst(v8523);

	i8 v8524 = (i8)(intptr_t)(ws+3032);
	i1 v8525 = *(i1*)(intptr_t)v8524;
	i8 v8526 = (i8)(intptr_t)(ws+3008);
	i8 v8527 = *(i8*)(intptr_t)v8526;
	i8 v8528 = (i8)(intptr_t)(ws+3016);
	i8 v8529 = *(i8*)(intptr_t)v8528;

void f144_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	i4 v8530;
	f144_FoldConstant2(&v8530, v8529, v8527, v8525);
	i8 v8531 = (i8)(intptr_t)(ws+3008);
	i8 v8532 = *(i8*)(intptr_t)v8531;
	*(i4*)(intptr_t)v8532 = v8530;

	i8 v8533 = (i8)(intptr_t)(ws+3008);
	i8 v8534 = *(i8*)(intptr_t)v8533;
	i8 v8535 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8535 = v8534;

	i8 v8536 = (i8)(intptr_t)(ws+3016);
	i8 v8537 = *(i8*)(intptr_t)v8536;

void f140_Discard(i8 /* node */);
	f140_Discard(v8537);

	goto endsub;

c02_07e4:;

c02_07e0:;

	i8 v8538 = (i8)(intptr_t)(ws+3008);
	i8 v8539 = *(i8*)(intptr_t)v8538;
	i8 v8540 = (i8)(intptr_t)(ws+3016);
	i8 v8541 = *(i8*)(intptr_t)v8540;

void f460_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	f460_expr_i_checkshift(v8541, v8539);

	i8 v8542 = (i8)(intptr_t)(ws+3008);
	i8 v8543 = *(i8*)(intptr_t)v8542;
	i8 v8544 = v8543+(+16);
	i8 v8545 = *(i8*)(intptr_t)v8544;
	i8 v8546 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8546 = v8545;

	i8 v8547 = (i8)(intptr_t)(ws+3032);
	i1 v8548 = *(i1*)(intptr_t)v8547;
	i8 v8549 = (i8)(intptr_t)(ws+3008);
	i8 v8550 = *(i8*)(intptr_t)v8549;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8551;
	f141_NodeWidth(&v8551, v8550);
	i8 v8552 = (i8)(intptr_t)(ws+3008);
	i8 v8553 = *(i8*)(intptr_t)v8552;
	i8 v8554 = (i8)(intptr_t)(ws+3016);
	i8 v8555 = *(i8*)(intptr_t)v8554;

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8556;
	f147_MidC2Op(&v8556, v8555, v8553, v8551, v8548);
	i8 v8557 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8557 = v8556;

	i8 v8558 = (i8)(intptr_t)(ws+3040);
	i8 v8559 = *(i8*)(intptr_t)v8558;
	i8 v8560 = (i8)(intptr_t)(ws+3024);
	i8 v8561 = *(i8*)(intptr_t)v8560;
	i8 v8562 = v8561+(+16);
	*(i8*)(intptr_t)v8562 = v8559;

endsub:;
	*p8500 = *(i8*)(intptr_t)(ws+3024);
}

// BeginNormalLoop workspace at ws+3008 length ws+8
void f462_BeginNormalLoop(i8* p8563 /* ll */) {

	i8 v8564 = (i8)+8;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v8565;
	f31_Alloc(&v8565, v8564);
	i8 v8566 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v8566 = v8565;


void f206_AllocLabel(i2* /* label */);
	i2 v8567;
	f206_AllocLabel(&v8567);
	i8 v8568 = (i8)(intptr_t)(ws+3008);
	i8 v8569 = *(i8*)(intptr_t)v8568;
	*(i2*)(intptr_t)v8569 = v8567;


void f206_AllocLabel(i2* /* label */);
	i2 v8570;
	f206_AllocLabel(&v8570);
	i8 v8571 = (i8)(intptr_t)(ws+3008);
	i8 v8572 = *(i8*)(intptr_t)v8571;
	i8 v8573 = v8572+(+2);
	*(i2*)(intptr_t)v8573 = v8570;

	i8 v8574 = (i8)(intptr_t)(ws+52);
	i2 v8575 = *(i2*)(intptr_t)v8574;
	i8 v8576 = (i8)(intptr_t)(ws+3008);
	i8 v8577 = *(i8*)(intptr_t)v8576;
	i8 v8578 = v8577+(+4);
	*(i2*)(intptr_t)v8578 = v8575;

	i8 v8579 = (i8)(intptr_t)(ws+54);
	i2 v8580 = *(i2*)(intptr_t)v8579;
	i8 v8581 = (i8)(intptr_t)(ws+3008);
	i8 v8582 = *(i8*)(intptr_t)v8581;
	i8 v8583 = v8582+(+6);
	*(i2*)(intptr_t)v8583 = v8580;

	i8 v8584 = (i8)(intptr_t)(ws+3008);
	i8 v8585 = *(i8*)(intptr_t)v8584;
	i8 v8586 = v8585+(+2);
	i2 v8587 = *(i2*)(intptr_t)v8586;
	i8 v8588 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8588 = v8587;

	i8 v8589 = (i8)(intptr_t)(ws+3008);
	i8 v8590 = *(i8*)(intptr_t)v8589;
	i2 v8591 = *(i2*)(intptr_t)v8590;
	i8 v8592 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8592 = v8591;

endsub:;
	*p8563 = *(i8*)(intptr_t)(ws+3008);
}

// TerminateNormalLoop workspace at ws+3000 length ws+8
void f463_TerminateNormalLoop(i8 p8593 /* ll */) {
	*(i8*)(intptr_t)(ws+3000) = p8593; /*ll */

	i8 v8594 = (i8)(intptr_t)(ws+54);
	i2 v8595 = *(i2*)(intptr_t)v8594;

void f88_MidJump(i8* /* m */, i2 /* label */);
	i8 v8596;
	f88_MidJump(&v8596, v8595);

void f437_Generate(i8 /* statement */);
	f437_Generate(v8596);

	i8 v8597 = (i8)(intptr_t)(ws+52);
	i2 v8598 = *(i2*)(intptr_t)v8597;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v8599;
	f132_MidLabel(&v8599, v8598);

void f437_Generate(i8 /* statement */);
	f437_Generate(v8599);

	i8 v8600 = (i8)(intptr_t)(ws+3000);
	i8 v8601 = *(i8*)(intptr_t)v8600;
	i8 v8602 = v8601+(+4);
	i2 v8603 = *(i2*)(intptr_t)v8602;
	i8 v8604 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8604 = v8603;

	i8 v8605 = (i8)(intptr_t)(ws+3000);
	i8 v8606 = *(i8*)(intptr_t)v8605;
	i8 v8607 = v8606+(+6);
	i2 v8608 = *(i2*)(intptr_t)v8607;
	i8 v8609 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8609 = v8608;

	i8 v8610 = (i8)(intptr_t)(ws+3000);
	i8 v8611 = *(i8*)(intptr_t)v8610;

void f32_Free(i8 /* block */);
	f32_Free(v8611);

endsub:;
}

// Negate workspace at ws+3000 length ws+8
void f464_Negate(i8 p8612 /* node */) {
	*(i8*)(intptr_t)(ws+3000) = p8612; /*node */

	i8 v8613 = (i8)(intptr_t)(ws+3000);
	i8 v8614 = *(i8*)(intptr_t)v8613;
	i8 v8615 = v8614+(+6);
	i1 v8616 = *(i1*)(intptr_t)v8615;
	i1 v8617 = v8616^(+1);
	i8 v8618 = (i8)(intptr_t)(ws+3000);
	i8 v8619 = *(i8*)(intptr_t)v8618;
	i8 v8620 = v8619+(+6);
	*(i1*)(intptr_t)v8620 = v8617;

endsub:;
}

// ConditionalEq workspace at ws+3000 length ws+37
void f465_ConditionalEq(i8* p8621 /* result */, i1 p8622 /* negated */, i8 p8623 /* rhs */, i8 p8624 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8624; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8623; /*rhs */
	*(i1*)(intptr_t)(ws+3016) = p8622; /*negated */

	i8 v8625 = (i8)(intptr_t)(ws+3000);
	i8 v8626 = *(i8*)(intptr_t)v8625;
	i8 v8627 = (i8)(intptr_t)(ws+3008);
	i8 v8628 = *(i8*)(intptr_t)v8627;

void f452_CondSimple(i8 /* rhs */, i8 /* lhs */);
	f452_CondSimple(v8628, v8626);


void f206_AllocLabel(i2* /* label */);
	i2 v8629;
	f206_AllocLabel(&v8629);
	i8 v8630 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v8630 = v8629;


void f206_AllocLabel(i2* /* label */);
	i2 v8631;
	f206_AllocLabel(&v8631);
	i8 v8632 = (i8)(intptr_t)(ws+3034);
	*(i2*)(intptr_t)v8632 = v8631;

	i8 v8633 = (i8)(intptr_t)(ws+3000);
	i8 v8634 = *(i8*)(intptr_t)v8633;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8635;
	f141_NodeWidth(&v8635, v8634);
	i8 v8636 = (i8)(intptr_t)(ws+3036);
	*(i1*)(intptr_t)v8636 = v8635;

	i8 v8637 = (i8)(intptr_t)(ws+3036);
	i1 v8638 = *(i1*)(intptr_t)v8637;
	i8 v8639 = (i8)(intptr_t)(ws+3000);
	i8 v8640 = *(i8*)(intptr_t)v8639;
	i8 v8641 = (i8)(intptr_t)(ws+3008);
	i8 v8642 = *(i8*)(intptr_t)v8641;
	i8 v8643 = (i8)(intptr_t)(ws+3032);
	i2 v8644 = *(i2*)(intptr_t)v8643;
	i8 v8645 = (i8)(intptr_t)(ws+3034);
	i2 v8646 = *(i2*)(intptr_t)v8645;
	i2 v8647 = (i2)+0;
	i8 v8648 = (i8)(intptr_t)(ws+3016);
	i1 v8649 = *(i1*)(intptr_t)v8648;

void f110_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8650;
	f110_MidBeq(&v8650, v8649, v8647, v8646, v8644, v8642, v8640, v8638);
	i8 v8651 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8651 = v8650;

endsub:;
	*p8621 = *(i8*)(intptr_t)(ws+3024);
}

// ConditionalLt workspace at ws+3000 length ws+37
void f466_ConditionalLt(i8* p8652 /* result */, i1 p8653 /* negated */, i8 p8654 /* rhs */, i8 p8655 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8655; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8654; /*rhs */
	*(i1*)(intptr_t)(ws+3016) = p8653; /*negated */

	i8 v8656 = (i8)(intptr_t)(ws+3000);
	i8 v8657 = *(i8*)(intptr_t)v8656;
	i8 v8658 = (i8)(intptr_t)(ws+3008);
	i8 v8659 = *(i8*)(intptr_t)v8658;

void f452_CondSimple(i8 /* rhs */, i8 /* lhs */);
	f452_CondSimple(v8659, v8657);


void f206_AllocLabel(i2* /* label */);
	i2 v8660;
	f206_AllocLabel(&v8660);
	i8 v8661 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v8661 = v8660;


void f206_AllocLabel(i2* /* label */);
	i2 v8662;
	f206_AllocLabel(&v8662);
	i8 v8663 = (i8)(intptr_t)(ws+3034);
	*(i2*)(intptr_t)v8663 = v8662;

	i8 v8664 = (i8)(intptr_t)(ws+3000);
	i8 v8665 = *(i8*)(intptr_t)v8664;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8666;
	f141_NodeWidth(&v8666, v8665);
	i8 v8667 = (i8)(intptr_t)(ws+3036);
	*(i1*)(intptr_t)v8667 = v8666;

	i8 v8668 = (i8)(intptr_t)(ws+3000);
	i8 v8669 = *(i8*)(intptr_t)v8668;
	i8 v8670 = v8669+(+16);
	i8 v8671 = *(i8*)(intptr_t)v8670;

void f201_IsSNum(i1* /* result */, i8 /* type */);
	i1 v8672;
	f201_IsSNum(&v8672, v8671);
	i1 v8673 = (i1)+0;
	if (v8672==v8673) goto c02_07e9; else goto c02_07e8;

c02_07e8:;

	i8 v8674 = (i8)(intptr_t)(ws+3036);
	i1 v8675 = *(i1*)(intptr_t)v8674;
	i8 v8676 = (i8)(intptr_t)(ws+3000);
	i8 v8677 = *(i8*)(intptr_t)v8676;
	i8 v8678 = (i8)(intptr_t)(ws+3008);
	i8 v8679 = *(i8*)(intptr_t)v8678;
	i8 v8680 = (i8)(intptr_t)(ws+3032);
	i2 v8681 = *(i2*)(intptr_t)v8680;
	i8 v8682 = (i8)(intptr_t)(ws+3034);
	i2 v8683 = *(i2*)(intptr_t)v8682;
	i2 v8684 = (i2)+0;
	i8 v8685 = (i8)(intptr_t)(ws+3016);
	i1 v8686 = *(i1*)(intptr_t)v8685;

void f107_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8687;
	f107_MidBlts(&v8687, v8686, v8684, v8683, v8681, v8679, v8677, v8675);
	i8 v8688 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8688 = v8687;

	goto c02_07e5;

c02_07e9:;

	i8 v8689 = (i8)(intptr_t)(ws+3036);
	i1 v8690 = *(i1*)(intptr_t)v8689;
	i8 v8691 = (i8)(intptr_t)(ws+3000);
	i8 v8692 = *(i8*)(intptr_t)v8691;
	i8 v8693 = (i8)(intptr_t)(ws+3008);
	i8 v8694 = *(i8*)(intptr_t)v8693;
	i8 v8695 = (i8)(intptr_t)(ws+3032);
	i2 v8696 = *(i2*)(intptr_t)v8695;
	i8 v8697 = (i8)(intptr_t)(ws+3034);
	i2 v8698 = *(i2*)(intptr_t)v8697;
	i2 v8699 = (i2)+0;
	i8 v8700 = (i8)(intptr_t)(ws+3016);
	i1 v8701 = *(i1*)(intptr_t)v8700;

void f117_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8702;
	f117_MidBltu(&v8702, v8701, v8699, v8698, v8696, v8694, v8692, v8690);
	i8 v8703 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8703 = v8702;

c02_07e5:;

endsub:;
	*p8652 = *(i8*)(intptr_t)(ws+3024);
}
const i1 c02_s0179[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };

// parser_i_bad_next_prev workspace at ws+3000 length ws+0
void f467_parser_i_bad_next_prev(void) {

	i8 v8704 = (i8)(intptr_t)c02_s0179;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8704);

endsub:;
}
const i1 c02_s017a[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };

// parser_i_constant_error workspace at ws+3024 length ws+0
void f468_parser_i_constant_error(void) {

	i8 v8705 = (i8)(intptr_t)c02_s017a;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8705);

endsub:;
}
const i1 c02_s017b[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
const i1 c02_s017c[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
const i1 c02_s017d[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };

// i_check_sub_call_args workspace at ws+3048 length ws+8
void f469_i_check_sub_call_args(void) {

	i8 v8706 = (i8)(intptr_t)(ws+80);
	i8 v8707 = *(i8*)(intptr_t)v8706;
	i8 v8708 = *(i8*)(intptr_t)v8707;
	i8 v8709 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8709 = v8708;

	i8 v8710 = (i8)(intptr_t)(ws+80);
	i8 v8711 = *(i8*)(intptr_t)v8710;
	i8 v8712 = v8711+(+32);
	i1 v8713 = *(i1*)(intptr_t)v8712;
	i8 v8714 = (i8)(intptr_t)(ws+3048);
	i8 v8715 = *(i8*)(intptr_t)v8714;
	i8 v8716 = v8715+(+88);
	i1 v8717 = *(i1*)(intptr_t)v8716;
	if (v8713==v8717) goto c02_07ee; else goto c02_07ed;

c02_07ed:;


void f55_StartError(void);
	f55_StartError();

	i8 v8718 = (i8)(intptr_t)c02_s017b;

void f11_print(i8 /* ptr */);
	f11_print(v8718);

	i8 v8719 = (i8)(intptr_t)(ws+3048);
	i8 v8720 = *(i8*)(intptr_t)v8719;
	i8 v8721 = *(i8*)(intptr_t)v8720;

void f11_print(i8 /* ptr */);
	f11_print(v8721);

	i8 v8722 = (i8)(intptr_t)c02_s017c;

void f11_print(i8 /* ptr */);
	f11_print(v8722);

	i8 v8723 = (i8)(intptr_t)(ws+3048);
	i8 v8724 = *(i8*)(intptr_t)v8723;
	i8 v8725 = v8724+(+88);
	i1 v8726 = *(i1*)(intptr_t)v8725;

void f17_print_i8(i1 /* value */);
	f17_print_i8(v8726);

	i8 v8727 = (i8)(intptr_t)c02_s017d;

void f11_print(i8 /* ptr */);
	f11_print(v8727);

	i8 v8728 = (i8)(intptr_t)(ws+80);
	i8 v8729 = *(i8*)(intptr_t)v8728;
	i8 v8730 = v8729+(+32);
	i1 v8731 = *(i1*)(intptr_t)v8730;

void f17_print_i8(i1 /* value */);
	f17_print_i8(v8731);


void f56_EndError(void);
	f56_EndError();

	goto c02_07ea;

c02_07ee:;

c02_07ea:;

endsub:;
}

// i_end_call workspace at ws+3048 length ws+8
void f470_i_end_call(void) {

	i8 v8732 = (i8)(intptr_t)(ws+40);
	i8 v8733 = *(i8*)(intptr_t)v8732;
	i8 v8734 = (i8)(intptr_t)(ws+80);
	i8 v8735 = *(i8*)(intptr_t)v8734;
	i8 v8736 = *(i8*)(intptr_t)v8735;

void f178_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	f178_EmitterReferenceSubroutine(v8736, v8733);

	i8 v8737 = (i8)(intptr_t)(ws+80);
	i8 v8738 = *(i8*)(intptr_t)v8737;
	i8 v8739 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8739 = v8738;

	i8 v8740 = (i8)(intptr_t)(ws+3048);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = v8741+(+8);
	i8 v8743 = *(i8*)(intptr_t)v8742;
	i8 v8744 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v8744 = v8743;

	i8 v8745 = (i8)(intptr_t)(ws+3048);
	i8 v8746 = *(i8*)(intptr_t)v8745;

void f32_Free(i8 /* block */);
	f32_Free(v8746);

endsub:;
}

// parser_i_start_sub workspace at ws+3008 length ws+8
void f471_parser_i_start_sub(i8 p8747 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p8747; /*subr */

	i8 v8748 = (i8)(intptr_t)(ws+52);
	i2 v8749 = *(i2*)(intptr_t)v8748;
	i8 v8750 = (i8)(intptr_t)(ws+3008);
	i8 v8751 = *(i8*)(intptr_t)v8750;
	i8 v8752 = v8751+(+66);
	*(i2*)(intptr_t)v8752 = v8749;

	i2 v8753 = (i2)+0;
	i8 v8754 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8754 = v8753;

	i8 v8755 = (i8)(intptr_t)(ws+54);
	i2 v8756 = *(i2*)(intptr_t)v8755;
	i8 v8757 = (i8)(intptr_t)(ws+3008);
	i8 v8758 = *(i8*)(intptr_t)v8757;
	i8 v8759 = v8758+(+68);
	*(i2*)(intptr_t)v8759 = v8756;

	i2 v8760 = (i2)+0;
	i8 v8761 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8761 = v8760;

	i8 v8762 = (i8)(intptr_t)(ws+3008);
	i8 v8763 = *(i8*)(intptr_t)v8762;
	i8 v8764 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v8764 = v8763;

endsub:;
}

// parser_i_end_sub workspace at ws+3000 length ws+8
void f472_parser_i_end_sub(void) {

	i8 v8765 = (i8)(intptr_t)(ws+40);
	i8 v8766 = *(i8*)(intptr_t)v8765;
	i8 v8767 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v8767 = v8766;

	i8 v8768 = (i8)(intptr_t)(ws+3000);
	i8 v8769 = *(i8*)(intptr_t)v8768;
	i8 v8770 = v8769+(+66);
	i2 v8771 = *(i2*)(intptr_t)v8770;
	i8 v8772 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8772 = v8771;

	i8 v8773 = (i8)(intptr_t)(ws+3000);
	i8 v8774 = *(i8*)(intptr_t)v8773;
	i8 v8775 = v8774+(+68);
	i2 v8776 = *(i2*)(intptr_t)v8775;
	i8 v8777 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8777 = v8776;

	i8 v8778 = (i8)(intptr_t)(ws+3000);
	i8 v8779 = *(i8*)(intptr_t)v8778;
	i8 v8780 = v8779+(+8);
	i8 v8781 = *(i8*)(intptr_t)v8780;
	i8 v8782 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v8782 = v8781;

	i8 v8783 = (i8)(intptr_t)(ws+3000);
	i8 v8784 = *(i8*)(intptr_t)v8783;

void f443_DestructSubroutineContents(i8 /* subr */);
	f443_DestructSubroutineContents(v8784);

endsub:;
}
const i1 c02_s017e[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };

// SymbolRedeclarationError workspace at ws+3000 length ws+0
void f473_SymbolRedeclarationError(void) {


void f55_StartError(void);
	f55_StartError();

	i8 v8785 = (i8)(intptr_t)c02_s017e;

void f11_print(i8 /* ptr */);
	f11_print(v8785);

	i8 v8786 = (i8)(intptr_t)(ws+72);
	i8 v8787 = *(i8*)(intptr_t)v8786;
	i8 v8788 = v8787+(+48);
	i8 v8789 = *(i8*)(intptr_t)v8788;

void f11_print(i8 /* ptr */);
	f11_print(v8789);


void f56_EndError(void);
	f56_EndError();

endsub:;
}
const i1 c02_s017f[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };

// WrongNumberOfElementsError workspace at ws+3040 length ws+0
void f474_WrongNumberOfElementsError(void) {


void f55_StartError(void);
	f55_StartError();

	i8 v8790 = (i8)(intptr_t)c02_s017f;

void f11_print(i8 /* ptr */);
	f11_print(v8790);

	i8 v8791 = (i8)(intptr_t)(ws+72);
	i8 v8792 = *(i8*)(intptr_t)v8791;
	i8 v8793 = v8792+(+48);
	i8 v8794 = *(i8*)(intptr_t)v8793;

void f11_print(i8 /* ptr */);
	f11_print(v8794);


void f56_EndError(void);
	f56_EndError();

endsub:;
}

// CheckEndOfInitialiser workspace at ws+3000 length ws+4
void f475_CheckEndOfInitialiser(void) {

	i8 v8795 = (i8)(intptr_t)(ws+72);
	i8 v8796 = *(i8*)(intptr_t)v8795;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v8797;
	f198_IsArray(&v8797, v8796);
	i1 v8798 = (i1)+0;
	if (v8797==v8798) goto c02_07f3; else goto c02_07f2;

c02_07f2:;

	i8 v8799 = (i8)(intptr_t)(ws+72);
	i8 v8800 = *(i8*)(intptr_t)v8799;
	i8 v8801 = *(i8*)(intptr_t)v8800;
	i8 v8802 = v8801+(+44);
	i2 v8803 = *(i2*)(intptr_t)v8802;
	i8 v8804 = (i8)(intptr_t)(ws+3000);
	*(i2*)(intptr_t)v8804 = v8803;

	i8 v8805 = (i8)(intptr_t)(ws+72);
	i8 v8806 = *(i8*)(intptr_t)v8805;
	i8 v8807 = v8806+(+42);
	i2 v8808 = *(i2*)(intptr_t)v8807;
	i2 v8809 = (i2)+0;
	if (v8808==v8809) goto c02_07f7; else goto c02_07f8;

c02_07f7:;

	i8 v8810 = (i8)(intptr_t)(ws+1232);
	i2 v8811 = *(i2*)(intptr_t)v8810;
	i8 v8812 = (i8)(intptr_t)(ws+72);
	i8 v8813 = *(i8*)(intptr_t)v8812;
	i8 v8814 = v8813+(+42);
	*(i2*)(intptr_t)v8814 = v8811;

	i8 v8815 = (i8)(intptr_t)(ws+1232);
	i2 v8816 = *(i2*)(intptr_t)v8815;
	i8 v8817 = (i8)(intptr_t)(ws+3000);
	i2 v8818 = *(i2*)(intptr_t)v8817;
	i2 v8819 = v8816/v8818;
	i8 v8820 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v8820 = v8819;

	i8 v8821 = (i8)(intptr_t)(ws+3002);
	i2 v8822 = *(i2*)(intptr_t)v8821;
	i8 v8823 = (i8)(intptr_t)(ws+72);
	i8 v8824 = *(i8*)(intptr_t)v8823;
	i8 v8825 = v8824+(+8);
	*(i2*)(intptr_t)v8825 = v8822;

	i4 v8826 = (i4)+0;
	i8 v8827 = (i8)(intptr_t)(ws+3002);
	i2 v8828 = *(i2*)(intptr_t)v8827;
	i2 v8829 = v8828+(-1);
	i4 v8830 = v8829;

void f213_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	i8 v8831;
	f213_ArchGuessIntType(&v8831, v8830, v8826);
	i8 v8832 = (i8)(intptr_t)(ws+72);
	i8 v8833 = *(i8*)(intptr_t)v8832;
	i8 v8834 = v8833+(+16);
	*(i8*)(intptr_t)v8834 = v8831;

	goto c02_07f4;

c02_07f8:;

c02_07f4:;

	i8 v8835 = (i8)(intptr_t)(ws+1232);
	i2 v8836 = *(i2*)(intptr_t)v8835;
	i8 v8837 = (i8)(intptr_t)(ws+72);
	i8 v8838 = *(i8*)(intptr_t)v8837;
	i8 v8839 = v8838+(+42);
	i2 v8840 = *(i2*)(intptr_t)v8839;
	if (v8836==v8840) goto c02_07fd; else goto c02_07fc;

c02_07fc:;


void f474_WrongNumberOfElementsError(void);
	f474_WrongNumberOfElementsError();

	goto c02_07f9;

c02_07fd:;

c02_07f9:;

	goto c02_07ef;

c02_07f3:;

	i8 v8841 = (i8)(intptr_t)(ws+1224);
	i8 v8842 = *(i8*)(intptr_t)v8841;
	i8 v8843 = (i8)+0;
	if (v8842==v8843) goto c02_0802; else goto c02_0801;

c02_0801:;


void f474_WrongNumberOfElementsError(void);
	f474_WrongNumberOfElementsError();

	goto c02_07fe;

c02_0802:;

c02_07fe:;

c02_07ef:;

endsub:;
}

// GetInitedMember workspace at ws+3040 length ws+16
void f476_GetInitedMember(i8* p8844 /* member */, i8* p8845 /* type */) {

	i8 v8846 = (i8)+0;
	i8 v8847 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8847 = v8846;

	i8 v8848 = (i8)(intptr_t)(ws+72);
	i8 v8849 = *(i8*)(intptr_t)v8848;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v8850;
	f198_IsArray(&v8850, v8849);
	i1 v8851 = (i1)+0;
	if (v8850==v8851) goto c02_0807; else goto c02_0806;

c02_0806:;

	i8 v8852 = (i8)(intptr_t)(ws+72);
	i8 v8853 = *(i8*)(intptr_t)v8852;
	i8 v8854 = *(i8*)(intptr_t)v8853;
	i8 v8855 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8855 = v8854;

	goto c02_0803;

c02_0807:;

	i8 v8856 = (i8)(intptr_t)(ws+1224);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	i8 v8858 = (i8)+0;
	if (v8857==v8858) goto c02_080b; else goto c02_080c;

c02_080b:;

	i8 v8859 = (i8)+0;
	i8 v8860 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8860 = v8859;

	goto endsub;

c02_080c:;

c02_0808:;

	i8 v8861 = (i8)(intptr_t)(ws+1224);
	i8 v8862 = *(i8*)(intptr_t)v8861;
	i8 v8863 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8863 = v8862;

	i8 v8864 = (i8)(intptr_t)(ws+1224);
	i8 v8865 = *(i8*)(intptr_t)v8864;
	i8 v8866 = *(i8*)(intptr_t)v8865;
	i8 v8867 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8867 = v8866;

	i8 v8868 = (i8)(intptr_t)(ws+1224);
	i8 v8869 = *(i8*)(intptr_t)v8868;
	i8 v8870 = v8869+(+56);
	i8 v8871 = *(i8*)(intptr_t)v8870;
	i8 v8872 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v8872 = v8871;

c02_0803:;

endsub:;
	*p8845 = *(i8*)(intptr_t)(ws+3048);
	*p8844 = *(i8*)(intptr_t)(ws+3040);
}

// AlignTo workspace at ws+3040 length ws+4
void f477_AlignTo(i1 p8873 /* alignment */) {
	*(i1*)(intptr_t)(ws+3040) = p8873; /*alignment */

	i8 v8874 = (i8)(intptr_t)(ws+1234);
	i2 v8875 = *(i2*)(intptr_t)v8874;
	i8 v8876 = (i8)(intptr_t)(ws+3040);
	i1 v8877 = *(i1*)(intptr_t)v8876;

void f211_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v8878;
	f211_ArchAlignUp(&v8878, v8877, v8875);
	i8 v8879 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v8879 = v8878;

c02_080f:;

	i8 v8880 = (i8)(intptr_t)(ws+1234);
	i2 v8881 = *(i2*)(intptr_t)v8880;
	i8 v8882 = (i8)(intptr_t)(ws+3042);
	i2 v8883 = *(i2*)(intptr_t)v8882;
	if (v8881==v8883) goto c02_0812; else goto c02_0811;

c02_0811:;

	i1 v8884 = (i1)+1;
	i4 v8885 = (i4)+0;

void f103_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	i8 v8886;
	f103_MidInit(&v8886, v8885, v8884);

void f437_Generate(i8 /* statement */);
	f437_Generate(v8886);

	i8 v8887 = (i8)(intptr_t)(ws+1232);
	i2 v8888 = *(i2*)(intptr_t)v8887;
	i2 v8889 = v8888+(+1);
	i8 v8890 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v8890 = v8889;

	i8 v8891 = (i8)(intptr_t)(ws+1234);
	i2 v8892 = *(i2*)(intptr_t)v8891;
	i2 v8893 = v8892+(+1);
	i8 v8894 = (i8)(intptr_t)(ws+1234);
	*(i2*)(intptr_t)v8894 = v8893;

	goto c02_080f;

c02_0812:;

endsub:;
}
const i1 c02_s0180[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };

// CheckForOverlaps workspace at ws+3040 length ws+8
void f478_CheckForOverlaps(i8 p8895 /* member */) {
	*(i8*)(intptr_t)(ws+3040) = p8895; /*member */

	i8 v8896 = (i8)(intptr_t)(ws+3040);
	i8 v8897 = *(i8*)(intptr_t)v8896;
	i8 v8898 = (i8)+0;
	if (v8897==v8898) goto c02_0816; else goto c02_0817;

c02_0816:;

	goto endsub;

c02_0817:;

c02_0813:;

	i8 v8899 = (i8)(intptr_t)(ws+3040);
	i8 v8900 = *(i8*)(intptr_t)v8899;
	i8 v8901 = v8900+(+32);
	i2 v8902 = *(i2*)(intptr_t)v8901;
	i8 v8903 = (i8)(intptr_t)(ws+1232);
	i2 v8904 = *(i2*)(intptr_t)v8903;
	if (v8902<v8904) goto c02_081b; else goto c02_081c;

c02_081b:;

	i8 v8905 = (i8)(intptr_t)c02_s0180;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v8905);

	goto c02_0818;

c02_081c:;

c02_0818:;

endsub:;
}

// GetInitedMemberChecked workspace at ws+3024 length ws+16
void f479_GetInitedMemberChecked(i8* p8906 /* member */, i8* p8907 /* type */) {


void f476_GetInitedMember(i8* /* member */, i8* /* type */);
	i8 v8908;
	i8 v8909;
	f476_GetInitedMember(&v8908, &v8909);

	i8 v8910 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8910 = v8909;

	i8 v8911 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8911 = v8908;

	i8 v8912 = (i8)(intptr_t)(ws+3032);
	i8 v8913 = *(i8*)(intptr_t)v8912;
	i8 v8914 = (i8)+0;
	if (v8913==v8914) goto c02_0820; else goto c02_0821;

c02_0820:;


void f474_WrongNumberOfElementsError(void);
	f474_WrongNumberOfElementsError();

	goto c02_081d;

c02_0821:;

c02_081d:;

	i8 v8915 = (i8)(intptr_t)(ws+3032);
	i8 v8916 = *(i8*)(intptr_t)v8915;
	i8 v8917 = v8916+(+41);
	i1 v8918 = *(i1*)(intptr_t)v8917;

void f477_AlignTo(i1 /* alignment */);
	f477_AlignTo(v8918);

	i8 v8919 = (i8)(intptr_t)(ws+3024);
	i8 v8920 = *(i8*)(intptr_t)v8919;

void f478_CheckForOverlaps(i8 /* member */);
	f478_CheckForOverlaps(v8920);

endsub:;
	*p8907 = *(i8*)(intptr_t)(ws+3032);
	*p8906 = *(i8*)(intptr_t)(ws+3024);
}
static data c02_a822[] = { // yy_action




	{ .i1 = { 0x22,0x02,0x95,0x01,0x29,0x02,0xc6,0x00}},




	{ .i1 = { 0x32,0x02,0x3d,0x00,0x55,0x00,0x5e,0x00}},




	{ .i1 = { 0xaf,0x01,0x05,0x00,0xad,0x00,0x64,0x00}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x22,0x02}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0xb1,0x00,0x13,0x02}},




	{ .i1 = { 0x4e,0x00,0xd2,0x00,0x9c,0x01,0xef,0x01}},




	{ .i1 = { 0xf4,0x01,0x59,0x00,0x3c,0x00,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x37,0x02,0xa2,0x00}},




	{ .i1 = { 0x83,0x01,0x68,0x01,0x44,0x01,0x70,0x01}},




	{ .i1 = { 0x4d,0x00,0x56,0x00,0xd0,0x00,0xbd,0x00}},




	{ .i1 = { 0x4c,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0x36,0x00,0xa3,0x00,0xa2,0x00,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x38,0x00,0x16,0x00,0xb3,0x00}},




	{ .i1 = { 0xb2,0x00,0x32,0x00,0x34,0x00,0x8b,0x01}},




	{ .i1 = { 0x7f,0x00,0xa6,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x67,0x01,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0xc3,0x00,0x95,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xa1,0x00,0x8e,0x01,0xcd,0x00,0x5e,0x00}},




	{ .i1 = { 0x5f,0x00,0xeb,0x01,0xc8,0x00,0x1b,0x00}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x90,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0x68,0x01,0x97,0x01}},




	{ .i1 = { 0x4e,0x00,0xd2,0x00,0x9c,0x01,0x48,0x00}},




	{ .i1 = { 0x2f,0x00,0x59,0x00,0x96,0x01,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x7e,0x00,0xeb,0x01}},




	{ .i1 = { 0x6b,0x01,0x68,0x01,0x44,0x01,0xf9,0x01}},




	{ .i1 = { 0x4d,0x00,0x5c,0x00,0xd0,0x00,0xbd,0x00}},




	{ .i1 = { 0x4c,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0xcd,0x00,0x16,0x00,0x5f,0x00,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x95,0x00,0xfc,0x01,0x67,0x01}},




	{ .i1 = { 0xd0,0x00,0x32,0x00,0x34,0x00,0x10,0x00}},




	{ .i1 = { 0x7f,0x00,0xb0,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x2b,0x00,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0xb7,0x00,0x95,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xca,0x00,0x08,0x00,0xcd,0x00,0x5e,0x00}},




	{ .i1 = { 0x5f,0x00,0xeb,0x01,0xc9,0x00,0x79,0x01}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x52,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0xe2,0x01,0xf4,0x01}},




	{ .i1 = { 0x4e,0x00,0xd2,0x00,0x9c,0x01,0x48,0x00}},




	{ .i1 = { 0x2f,0x00,0x59,0x00,0x61,0x00,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x69,0x01,0x6d,0x00}},




	{ .i1 = { 0x76,0x00,0x68,0x01,0x44,0x01,0x46,0x00}},




	{ .i1 = { 0x4d,0x00,0x48,0x00,0x2f,0x00,0xbd,0x00}},




	{ .i1 = { 0x4c,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0x47,0x00,0xcd,0x00,0xcd,0x00,0x5f,0x00}},




	{ .i1 = { 0x5f,0x00,0xb1,0x00,0x9f,0x00,0x69,0x01}},




	{ .i1 = { 0xc1,0x00,0x00,0x02,0x0b,0x00,0x2f,0x01}},




	{ .i1 = { 0xce,0x00,0xa8,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x68,0x01,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x23,0x02,0x95,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xab,0x00,0x3d,0x00,0x55,0x00,0x5e,0x00}},




	{ .i1 = { 0x8e,0x00,0x8e,0x00,0x09,0x00,0xa9,0x00}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x4b,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0x10,0x02,0xb2,0x00}},




	{ .i1 = { 0x4e,0x00,0xd2,0x00,0x9c,0x01,0x14,0x00}},




	{ .i1 = { 0x12,0x00,0x59,0x00,0x62,0x01,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x68,0x01,0x6e,0x00}},




	{ .i1 = { 0x76,0x00,0x68,0x01,0x44,0x01,0x39,0x00}},




	{ .i1 = { 0x4d,0x00,0x7f,0x00,0x16,0x00,0xbd,0x00}},




	{ .i1 = { 0x4c,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0x42,0x00,0xcd,0x00,0xcd,0x00,0x5f,0x00}},




	{ .i1 = { 0x5f,0x00,0xa7,0x00,0x16,0x00,0xcd,0x00}},




	{ .i1 = { 0x92,0x01,0x5f,0x00,0x6c,0x00,0x28,0x01}},




	{ .i1 = { 0xac,0x00,0xc5,0x01,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x06,0x02,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x0c,0x00,0x95,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xcd,0x00,0x08,0x00,0x5f,0x00,0x5e,0x00}},




	{ .i1 = { 0x8f,0x00,0x8f,0x00,0x09,0x00,0x7d,0x01}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x53,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0x63,0x00,0x62,0x00}},




	{ .i1 = { 0x4e,0x00,0xd2,0x00,0x9c,0x01,0xb4,0x00}},




	{ .i1 = { 0x0b,0x02,0x59,0x00,0x0a,0x02,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x76,0x00,0x77,0x00}},




	{ .i1 = { 0x92,0x00,0x68,0x01,0x44,0x01,0xb7,0x00}},




	{ .i1 = { 0x4d,0x00,0x2b,0x02,0x66,0x00,0xbd,0x00}},




	{ .i1 = { 0x4c,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0xeb,0x01,0xe1,0x01,0xf4,0x01,0x6c,0x00}},




	{ .i1 = { 0xd0,0x00,0xc0,0x00,0x8d,0x00,0x05,0x02}},




	{ .i1 = { 0x9d,0x00,0x94,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x2b,0x00,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x45,0x01,0xcd,0x00,0xcf,0x00,0x5f,0x00}},




	{ .i1 = { 0xd0,0x00,0x0e,0x00,0x59,0x00,0x34,0x02}},




	{ .i1 = { 0x09,0x00,0xeb,0x01,0x36,0x00,0x7f,0x00}},




	{ .i1 = { 0x65,0x00,0x2b,0x00,0x31,0x00,0x38,0x00}},




	{ .i1 = { 0x3a,0x01,0xb4,0x00,0x0b,0x02,0x32,0x00}},




	{ .i1 = { 0x34,0x00,0x40,0x00,0xd0,0x00,0xbe,0x00}},




	{ .i1 = { 0x7d,0x01,0xcd,0x00,0x6c,0x00,0x5f,0x00}},




	{ .i1 = { 0x36,0x00,0xc7,0x01,0x25,0x00,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x38,0x00,0x49,0x00,0x14,0x00}},




	{ .i1 = { 0x12,0x00,0x32,0x00,0x34,0x00,0x93,0x00}},




	{ .i1 = { 0xcd,0x00,0xb9,0x00,0x5f,0x00,0x2e,0x00}},




	{ .i1 = { 0x30,0x00,0x21,0x00,0x1e,0x00,0x1f,0x00}},




	{ .i1 = { 0x20,0x00,0x23,0x00,0x22,0x00,0x2d,0x00}},




	{ .i1 = { 0x2c,0x00,0x48,0x00,0x2f,0x00,0xeb,0x01}},




	{ .i1 = { 0xbb,0x00,0x14,0x00,0x12,0x00,0xd1,0x00}},




	{ .i1 = { 0xf6,0x01,0x2e,0x00,0x30,0x00,0x21,0x00}},




	{ .i1 = { 0x1e,0x00,0x1f,0x00,0x20,0x00,0x23,0x00}},




	{ .i1 = { 0x22,0x00,0x2d,0x00,0x2c,0x00,0x48,0x00}},




	{ .i1 = { 0x2f,0x00,0xa4,0x00,0x8c,0x00,0xeb,0x01}},




	{ .i1 = { 0x35,0x00,0x16,0x00,0x37,0x00,0x26,0x00}},




	{ .i1 = { 0xbf,0x00,0x06,0x00,0x66,0x01,0x6c,0x00}},




	{ .i1 = { 0x01,0x00,0x0c,0x00,0x8d,0x00,0x9c,0x00}},




	{ .i1 = { 0xc4,0x00,0x33,0x00,0xeb,0x01,0x91,0x00}},




	{ .i1 = { 0x02,0x00,0x93,0x01,0x54,0x00,0x68,0x01}},




	{ .i1 = { 0x44,0x01,0xcd,0x00,0x4d,0x00,0x5f,0x00}},




	{ .i1 = { 0x07,0x00,0x4a,0x00,0x4c,0x00,0x5d,0x01}},




	{ .i1 = { 0x35,0x00,0x11,0x00,0x13,0x00,0x26,0x00}},




	{ .i1 = { 0x03,0x00,0x0d,0x00,0x04,0x00,0x6b,0x00}},




	{ .i1 = { 0x50,0x00,0x32,0x01,0x8a,0x00,0x9e,0x00}},




	{ .i1 = { 0x39,0x01,0x33,0x00,0x7e,0x00,0x78,0x00}},




	{ .i1 = { 0x2a,0x00,0x28,0x00,0x27,0x00,0x68,0x01}},




	{ .i1 = { 0x44,0x01,0xcd,0x00,0x4d,0x00,0x5f,0x00}},




	{ .i1 = { 0xcf,0x00,0x71,0x01,0x4c,0x00,0x5d,0x01}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0x3a,0x00,0x6c,0x00,0xfd,0x01,0x35,0x00}},




	{ .i1 = { 0xc7,0x00,0x37,0x00,0x26,0x00,0x94,0x01}},




	{ .i1 = { 0x8f,0x01,0x38,0x01,0x0a,0x00,0x17,0x00}},




	{ .i1 = { 0x2a,0x00,0x28,0x00,0x27,0x00,0xcd,0x00}},




	{ .i1 = { 0x33,0x00,0x5f,0x00,0x16,0x00,0x8d,0x01}},




	{ .i1 = { 0xcf,0x00,0xaa,0x00,0x68,0x01,0x44,0x01}},




	{ .i1 = { 0x43,0x00,0x4d,0x00,0xa0,0x00,0x3e,0x00}},




	{ .i1 = { 0x88,0x01,0x4c,0x00,0x5d,0x01,0x35,0x00}},




	{ .i1 = { 0x44,0x00,0x37,0x00,0x26,0x00,0x7e,0x01}},




	{ .i1 = { 0xa4,0x01,0x57,0x00,0x5a,0x00,0xb5,0x00}},




	{ .i1 = { 0x3f,0x00,0x84,0x01,0x7a,0x01,0xa3,0x01}},




	{ .i1 = { 0x33,0x00,0xb6,0x00,0x6e,0x01,0x2a,0x00}},




	{ .i1 = { 0x28,0x00,0x27,0x00,0x68,0x01,0x44,0x01}},




	{ .i1 = { 0x4f,0x00,0x4d,0x00,0x45,0x00,0xcf,0x00}},




	{ .i1 = { 0x64,0x01,0x4c,0x00,0x5d,0x01,0x18,0x00}},




	{ .i1 = { 0x75,0x01,0x6d,0x01,0x5f,0x01,0xbc,0x00}},




	{ .i1 = { 0x19,0x00,0x35,0x00,0x6c,0x00,0x37,0x00}},




	{ .i1 = { 0x26,0x00,0x8b,0x00,0x36,0x01,0x51,0x00}},




	{ .i1 = { 0xc2,0x00,0x2e,0x01,0x7f,0x00,0x2a,0x00}},




	{ .i1 = { 0x28,0x00,0x27,0x00,0x33,0x00,0x79,0x00}},




	{ .i1 = { 0xcd,0x00,0x31,0x01,0x5f,0x00,0xcf,0x00}},




	{ .i1 = { 0x68,0x01,0x44,0x01,0xcb,0x00,0x4d,0x00}},




	{ .i1 = { 0xcd,0x00,0x12,0x00,0x5f,0x00,0x4c,0x00}},




	{ .i1 = { 0x5d,0x01,0xcd,0x00,0x30,0x01,0x5f,0x00}},




	{ .i1 = { 0x2c,0x01,0x63,0x01,0x60,0x01,0x7a,0x00}},




	{ .i1 = { 0xf9,0x01,0x1c,0x00,0x1a,0x00,0x5c,0x01}},




	{ .i1 = { 0x29,0x00,0xb0,0x01,0x7b,0x00,0x7f,0x00}},




	{ .i1 = { 0x27,0x01,0x2a,0x00,0x28,0x00,0x27,0x00}},




	{ .i1 = { 0xb0,0x01,0xcd,0x00,0x45,0x01,0x5f,0x00}},




	{ .i1 = { 0xb0,0x01,0xcf,0x00,0xd0,0x00,0xcc,0x00}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0x36,0x00,0xb0,0x01,0xb0,0x01,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x38,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x32,0x00,0x34,0x00,0xb0,0x01}},




	{ .i1 = { 0xd0,0x00,0xb0,0x01,0xb0,0x01,0x7c,0x00}},




	{ .i1 = { 0x7d,0x00,0xb0,0x01,0x36,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x2b,0x00,0x31,0x00,0x38,0x00}},




	{ .i1 = { 0x6f,0x00,0xb0,0x01,0xb0,0x01,0x32,0x00}},




	{ .i1 = { 0x34,0x00,0xcd,0x00,0xcd,0x00,0x5f,0x00}},




	{ .i1 = { 0x5f,0x00,0x2e,0x00,0x30,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0x71,0x00}},




	{ .i1 = { 0x5f,0x00,0x2d,0x00,0x2c,0x00,0x48,0x00}},




	{ .i1 = { 0x2f,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x2e,0x00}},




	{ .i1 = { 0x30,0x00,0xcd,0x00,0xb0,0x01,0x5f,0x00}},




	{ .i1 = { 0x72,0x00,0xb0,0x01,0xb0,0x01,0x2d,0x00}},




	{ .i1 = { 0x2c,0x00,0x48,0x00,0x2f,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x37,0x01,0xd0,0x00,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5f,0x00,0xb0,0x01,0xb0,0x01,0x36,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2b,0x00,0x31,0x00}},




	{ .i1 = { 0x38,0x00,0x24,0x00,0xb0,0x01,0x2b,0x01}},




	{ .i1 = { 0x32,0x00,0x34,0x00,0xb0,0x01,0xd0,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x96,0x00}},




	{ .i1 = { 0xb0,0x01,0x36,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2b,0x00,0x31,0x00,0x38,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x32,0x00,0x34,0x00}},




	{ .i1 = { 0xb0,0x01,0xcd,0x00,0x97,0x00,0x5f,0x00}},




	{ .i1 = { 0x2e,0x00,0x30,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x98,0x00,0x99,0x00}},




	{ .i1 = { 0x2d,0x00,0x2c,0x00,0x48,0x00,0x2f,0x00}},




	{ .i1 = { 0xcd,0x00,0xb0,0x01,0x5f,0x00,0xb0,0x01}},




	{ .i1 = { 0x73,0x00,0x82,0x00,0x2e,0x00,0x30,0x00}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0x83,0x00,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x48,0x00,0x2f,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xd0,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5f,0x00,0x36,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2b,0x00,0x31,0x00,0x38,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x2a,0x01,0x32,0x00,0x34,0x00}},




	{ .i1 = { 0x5a,0x01,0xb0,0x01,0xb0,0x01,0xd0,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x36,0x00,0x80,0x00,0x9a,0x00}},




	{ .i1 = { 0x2b,0x00,0x31,0x00,0x38,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x32,0x00,0x34,0x00}},




	{ .i1 = { 0x81,0x00,0x88,0x00,0x2e,0x00,0x30,0x00}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x48,0x00,0x2f,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x89,0x00,0x2e,0x00,0x30,0x00}},




	{ .i1 = { 0x9b,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x87,0x00,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x48,0x00,0x2f,0x00,0xb0,0x01,0xcd,0x00}},




	{ .i1 = { 0x5b,0x01,0x5f,0x00,0xcd,0x00,0xd0,0x00}},




	{ .i1 = { 0x5f,0x00,0xb0,0x01,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5f,0x00,0x36,0x00,0x86,0x00,0xb0,0x01}},




	{ .i1 = { 0x2b,0x00,0x31,0x00,0x38,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x32,0x00,0x34,0x00}},




	{ .i1 = { 0xb0,0x01,0xd0,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xcd,0x00,0xb0,0x01,0x5f,0x00,0x36,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2b,0x00,0x31,0x00}},




	{ .i1 = { 0x38,0x00,0xb0,0x01,0xb0,0x01,0x29,0x01}},




	{ .i1 = { 0x32,0x00,0x34,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x85,0x00,0x74,0x00,0x2e,0x00,0x30,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x84,0x00,0x75,0x00,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x48,0x00,0x2f,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2e,0x00,0x30,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2d,0x00,0x2c,0x00,0x48,0x00,0x2f,0x00}},




	{ .i1 = { 0xb0,0x01,0x25,0x02,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x70,0x00,0x6a,0x00,0x69,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x67,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5d,0x00,0xb0,0x01,0xba,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x25,0x02,0xb0,0x01,0x41,0x00}},




	{ .i1 = { 0x70,0x00,0x6a,0x00,0x69,0x00,0xaf,0x00}},




	{ .i1 = { 0x58,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x67,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xa5,0x00}},




	{ .i1 = { 0x5d,0x00,0xb0,0x01,0xba,0x00,0x3b,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x41,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb8,0x00}},




	{ .i1 = { 0x58,0x00,0x35,0x00,0xb0,0x01,0x37,0x00}},




	{ .i1 = { 0x26,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xa5,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x33,0x00,0x3b,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x68,0x01,0x44,0x01,0xb0,0x01,0x4d,0x00}},




	{ .i1 = { 0xd0,0x00,0xb0,0x01,0xb0,0x01,0x4c,0x00}},




	{ .i1 = { 0x5d,0x01,0xb0,0x01,0x36,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x2b,0x00,0x31,0x00,0x38,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x32,0x00}},




	{ .i1 = { 0x34,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x2a,0x00,0x28,0x00,0x27,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xcf,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x2e,0x00}},




	{ .i1 = { 0x30,0x00,0x25,0x02,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x70,0x00,0x6a,0x00,0x69,0x00,0x2d,0x00}},




	{ .i1 = { 0x2c,0x00,0x48,0x00,0x2f,0x00,0xb0,0x01}},




	{ .i1 = { 0x67,0x00,0xb0,0x01,0xb0,0x01,0xd0,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5d,0x00,0x36,0x00,0xba,0x00,0xb0,0x01}},




	{ .i1 = { 0x2b,0x00,0x31,0x00,0x38,0x00,0x41,0x00}},




	{ .i1 = { 0xb0,0x01,0xd0,0x00,0x32,0x00,0x34,0x00}},




	{ .i1 = { 0x58,0x00,0xb0,0x01,0xb0,0x01,0x36,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2b,0x00,0x31,0x00}},




	{ .i1 = { 0x38,0x00,0xb0,0x01,0xb0,0x01,0xa5,0x00}},




	{ .i1 = { 0x32,0x00,0x34,0x00,0xb0,0x01,0x3b,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x30,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x48,0x00,0x2f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2d,0x00,0x2c,0x00,0x48,0x00,0x2f,0x00}},

};
static data c02_a823[] = { // yy_lookahead








	{ .i1 = { 0x56,0x01,0x4f,0x03,0x6b,0x6c,0x6d,0x07}},








	{ .i1 = { 0x43,0x44,0x0a,0x62,0x0c,0x0d,0x0e,0x56}},








	{ .i1 = { 0x10,0x11,0x46,0x57,0x14,0x15,0x16,0x55}},








	{ .i1 = { 0x56,0x19,0x10,0x1b,0x1c,0x1d,0x74,0x75}},








	{ .i1 = { 0x04,0x21,0x22,0x04,0x24,0x69,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x0e,0x74,0x75,0x11}},








	{ .i1 = { 0x12,0x13,0x11,0x67,0x68,0x17,0x18,0x16}},








	{ .i1 = { 0x48,0x47,0x3a,0x3b,0x3c,0x21,0x3e,0x3f}},








	{ .i1 = { 0x0a,0x01,0x42,0x03,0x54,0x21,0x56,0x07}},








	{ .i1 = { 0x58,0x57,0x0a,0x2c,0x0c,0x0d,0x0e,0x47}},








	{ .i1 = { 0x10,0x11,0x21,0x22,0x14,0x15,0x16,0x39}},








	{ .i1 = { 0x3a,0x19,0x29,0x1b,0x1c,0x1d,0x48,0x57}},








	{ .i1 = { 0x04,0x21,0x22,0x56,0x24,0x58,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x56,0x11,0x58,0x11}},








	{ .i1 = { 0x12,0x5b,0x5c,0x21,0x08,0x17,0x18,0x41}},








	{ .i1 = { 0x48,0x47,0x3a,0x3b,0x3c,0x11,0x3e,0x3f}},








	{ .i1 = { 0x0b,0x01,0x42,0x03,0x54,0x44,0x56,0x07}},








	{ .i1 = { 0x58,0x57,0x0a,0x16,0x0c,0x0d,0x0e,0x4e}},








	{ .i1 = { 0x10,0x11,0x55,0x56,0x14,0x15,0x16,0x39}},








	{ .i1 = { 0x3a,0x19,0x09,0x1b,0x1c,0x1d,0x21,0x48}},








	{ .i1 = { 0x48,0x21,0x22,0x11,0x24,0x39,0x3a,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x10,0x56,0x56,0x58}},








	{ .i1 = { 0x58,0x46,0x4f,0x21,0x5d,0x5e,0x25,0x0d}},








	{ .i1 = { 0x26,0x23,0x3a,0x3b,0x3c,0x21,0x3e,0x3f}},








	{ .i1 = { 0x00,0x01,0x42,0x03,0x6b,0x6c,0x6d,0x07}},








	{ .i1 = { 0x70,0x71,0x72,0x6e,0x0c,0x0d,0x0e,0x3d}},








	{ .i1 = { 0x10,0x11,0x67,0x68,0x14,0x15,0x16,0x2d}},








	{ .i1 = { 0x2e,0x19,0x05,0x1b,0x1c,0x1d,0x21,0x48}},








	{ .i1 = { 0x48,0x21,0x22,0x02,0x24,0x48,0x11,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x06,0x56,0x56,0x58}},








	{ .i1 = { 0x58,0x54,0x11,0x56,0x20,0x58,0x48,0x16}},








	{ .i1 = { 0x6a,0x4b,0x3a,0x3b,0x3c,0x56,0x3e,0x3f}},








	{ .i1 = { 0x2c,0x01,0x42,0x03,0x56,0x44,0x58,0x07}},








	{ .i1 = { 0x70,0x71,0x72,0x40,0x0c,0x0d,0x0e,0x4e}},








	{ .i1 = { 0x10,0x11,0x60,0x62,0x14,0x15,0x16,0x65}},








	{ .i1 = { 0x66,0x19,0x66,0x1b,0x1c,0x1d,0x48,0x48}},








	{ .i1 = { 0x47,0x21,0x22,0x0b,0x24,0x52,0x53,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x56,0x56,0x58,0x58}},








	{ .i1 = { 0x57,0x55,0x56,0x48,0x08,0x5e,0x4b,0x46}},








	{ .i1 = { 0x4d,0x47,0x3a,0x3b,0x3c,0x11,0x3e,0x3f}},








	{ .i1 = { 0x04,0x56,0x42,0x58,0x08,0x10,0x19,0x71}},








	{ .i1 = { 0x72,0x57,0x0e,0x48,0x60,0x11,0x12,0x13}},








	{ .i1 = { 0x04,0x65,0x66,0x17,0x18,0x5f,0x08,0x54}},








	{ .i1 = { 0x40,0x56,0x48,0x58,0x0e,0x4b,0x02,0x11}},








	{ .i1 = { 0x12,0x13,0x06,0x2d,0x2e,0x17,0x18,0x47}},








	{ .i1 = { 0x56,0x59,0x58,0x2f,0x30,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x57}},








	{ .i1 = { 0x59,0x2d,0x2e,0x47,0x59,0x2f,0x30,0x31}},








	{ .i1 = { 0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39}},








	{ .i1 = { 0x3a,0x20,0x47,0x57,0x0e,0x11,0x10,0x11}},








	{ .i1 = { 0x46,0x44,0x16,0x48,0x44,0x2c,0x4b,0x46}},








	{ .i1 = { 0x4d,0x1b,0x57,0x61,0x44,0x1f,0x61,0x21}},








	{ .i1 = { 0x22,0x56,0x24,0x58,0x44,0x51,0x28,0x29}},








	{ .i1 = { 0x0e,0x0f,0x10,0x11,0x44,0x4c,0x44,0x48}},








	{ .i1 = { 0x1a,0x0c,0x4b,0x0a,0x06,0x1b,0x48,0x48}},








	{ .i1 = { 0x3a,0x3b,0x3c,0x21,0x22,0x56,0x24,0x58}},








	{ .i1 = { 0x42,0x04,0x28,0x29,0x56,0x56,0x58,0x58}},








	{ .i1 = { 0x2c,0x48,0x5c,0x0e,0x4b,0x10,0x11,0x16}},








	{ .i1 = { 0x16,0x06,0x1f,0x10,0x3a,0x3b,0x3c,0x56}},








	{ .i1 = { 0x1b,0x58,0x11,0x04,0x42,0x0a,0x21,0x22}},








	{ .i1 = { 0x06,0x24,0x09,0x40,0x14,0x28,0x29,0x0e}},








	{ .i1 = { 0x06,0x10,0x11,0x19,0x16,0x19,0x06,0x29}},








	{ .i1 = { 0x2c,0x04,0x04,0x16,0x1b,0x10,0x16,0x3a}},








	{ .i1 = { 0x3b,0x3c,0x21,0x22,0x02,0x24,0x40,0x42}},








	{ .i1 = { 0x05,0x28,0x29,0x02,0x04,0x16,0x16,0x21}},








	{ .i1 = { 0x2c,0x0e,0x48,0x10,0x11,0x4b,0x16,0x1a}},








	{ .i1 = { 0x3f,0x0d,0x48,0x3a,0x3b,0x3c,0x1b,0x48}},








	{ .i1 = { 0x56,0x16,0x58,0x42,0x21,0x22,0x54,0x24}},








	{ .i1 = { 0x56,0x2e,0x58,0x28,0x29,0x56,0x16,0x58}},








	{ .i1 = { 0x0d,0x05,0x04,0x48,0x10,0x10,0x2c,0x21}},








	{ .i1 = { 0x3a,0x76,0x48,0x48,0x16,0x3a,0x3b,0x3c}},








	{ .i1 = { 0x76,0x56,0x04,0x58,0x76,0x42,0x08,0x54}},








	{ .i1 = { 0x56,0x56,0x58,0x58,0x0e,0x76,0x76,0x11}},








	{ .i1 = { 0x12,0x13,0x76,0x76,0x76,0x17,0x18,0x76}},








	{ .i1 = { 0x08,0x76,0x76,0x48,0x48,0x76,0x0e,0x76}},








	{ .i1 = { 0x76,0x11,0x12,0x13,0x48,0x76,0x76,0x17}},








	{ .i1 = { 0x18,0x56,0x56,0x58,0x58,0x2f,0x30,0x76}},








	{ .i1 = { 0x76,0x76,0x56,0x48,0x58,0x37,0x38,0x39}},








	{ .i1 = { 0x3a,0x76,0x76,0x76,0x76,0x76,0x76,0x2f}},








	{ .i1 = { 0x30,0x56,0x76,0x58,0x48,0x76,0x76,0x37}},








	{ .i1 = { 0x38,0x39,0x3a,0x76,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x40,0x08,0x56,0x76,0x58,0x76,0x76,0x0e}},








	{ .i1 = { 0x76,0x76,0x11,0x12,0x13,0x02,0x76,0x16}},








	{ .i1 = { 0x17,0x18,0x76,0x08,0x76,0x76,0x76,0x48}},








	{ .i1 = { 0x76,0x0e,0x76,0x76,0x11,0x12,0x13,0x76}},








	{ .i1 = { 0x76,0x76,0x17,0x18,0x76,0x56,0x48,0x58}},








	{ .i1 = { 0x2f,0x30,0x76,0x76,0x76,0x76,0x48,0x48}},








	{ .i1 = { 0x37,0x38,0x39,0x3a,0x56,0x76,0x58,0x76}},








	{ .i1 = { 0x48,0x48,0x2f,0x30,0x56,0x56,0x58,0x58}},








	{ .i1 = { 0x48,0x76,0x37,0x38,0x39,0x3a,0x56,0x56}},








	{ .i1 = { 0x58,0x58,0x76,0x08,0x76,0x76,0x56,0x76}},








	{ .i1 = { 0x58,0x0e,0x76,0x76,0x11,0x12,0x13,0x76}},








	{ .i1 = { 0x76,0x16,0x17,0x18,0x05,0x76,0x76,0x08}},








	{ .i1 = { 0x76,0x76,0x76,0x76,0x76,0x0e,0x48,0x48}},








	{ .i1 = { 0x11,0x12,0x13,0x76,0x76,0x76,0x17,0x18}},








	{ .i1 = { 0x48,0x48,0x2f,0x30,0x56,0x56,0x58,0x58}},








	{ .i1 = { 0x76,0x76,0x37,0x38,0x39,0x3a,0x56,0x56}},








	{ .i1 = { 0x58,0x58,0x76,0x76,0x76,0x48,0x2f,0x30}},








	{ .i1 = { 0x48,0x76,0x76,0x76,0x48,0x76,0x37,0x38}},








	{ .i1 = { 0x39,0x3a,0x76,0x56,0x05,0x58,0x56,0x08}},








	{ .i1 = { 0x58,0x76,0x56,0x76,0x58,0x0e,0x48,0x76}},








	{ .i1 = { 0x11,0x12,0x13,0x76,0x76,0x76,0x17,0x18}},








	{ .i1 = { 0x76,0x08,0x76,0x76,0x56,0x76,0x58,0x0e}},








	{ .i1 = { 0x76,0x76,0x11,0x12,0x13,0x76,0x76,0x16}},








	{ .i1 = { 0x17,0x18,0x76,0x76,0x48,0x48,0x2f,0x30}},








	{ .i1 = { 0x76,0x76,0x76,0x76,0x48,0x48,0x37,0x38}},








	{ .i1 = { 0x39,0x3a,0x56,0x56,0x58,0x58,0x76,0x76}},








	{ .i1 = { 0x2f,0x30,0x56,0x56,0x58,0x58,0x76,0x76}},








	{ .i1 = { 0x37,0x38,0x39,0x3a,0x76,0x45,0x76,0x76}},








	{ .i1 = { 0x48,0x49,0x4a,0x76,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x50,0x76,0x76,0x76,0x76,0x76,0x56,0x76}},








	{ .i1 = { 0x58,0x76,0x5a,0x76,0x76,0x45,0x76,0x5f}},








	{ .i1 = { 0x48,0x49,0x4a,0x63,0x64,0x76,0x76,0x76}},








	{ .i1 = { 0x50,0x76,0x76,0x76,0x76,0x76,0x56,0x6f}},








	{ .i1 = { 0x58,0x76,0x5a,0x73,0x76,0x76,0x76,0x5f}},








	{ .i1 = { 0x76,0x76,0x76,0x63,0x64,0x0e,0x76,0x10}},








	{ .i1 = { 0x11,0x76,0x76,0x76,0x76,0x76,0x76,0x6f}},








	{ .i1 = { 0x76,0x76,0x1b,0x73,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x21,0x22,0x76,0x24,0x08,0x76,0x76,0x28}},








	{ .i1 = { 0x29,0x76,0x0e,0x76,0x76,0x11,0x12,0x13}},








	{ .i1 = { 0x76,0x76,0x76,0x17,0x18,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x3a,0x3b,0x3c,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x42,0x76,0x76,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x76,0x76,0x2f,0x30,0x45,0x76,0x76}},








	{ .i1 = { 0x48,0x49,0x4a,0x37,0x38,0x39,0x3a,0x76}},








	{ .i1 = { 0x50,0x76,0x76,0x08,0x76,0x76,0x56,0x76}},








	{ .i1 = { 0x58,0x0e,0x5a,0x76,0x11,0x12,0x13,0x5f}},








	{ .i1 = { 0x76,0x08,0x17,0x18,0x64,0x76,0x76,0x0e}},








	{ .i1 = { 0x76,0x76,0x11,0x12,0x13,0x76,0x76,0x6f}},








	{ .i1 = { 0x17,0x18,0x76,0x73,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x76,0x76,0x30,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x76,0x37,0x38,0x39,0x3a,0x76,0x76}},








	{ .i1 = { 0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x37,0x38,0x39,0x3a,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x76,0x76,0x76,0x76,0x76,0x76,0x76}},








	{ .i1 = { 0x76,0x76,0x76,0x76,0x76,0x43,0x43,0x43}},








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43}},








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43}},








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43}},








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43}},








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x43,0x43}},








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x43}},
};
static data c02_a824[] = { // yy_shift_ofst




	{ .i1 = { 0x2c,0x04,0x00,0x00,0x00,0x00,0x40,0x00}},




	{ .i1 = { 0x80,0x00,0xc0,0x00,0x00,0x01,0x00,0x01}},




	{ .i1 = { 0x00,0x01,0x7e,0x01,0x7e,0x01,0x9a,0x01}},




	{ .i1 = { 0x7e,0x01,0x9a,0x01,0xbd,0x01,0x8f,0x03}},




	{ .i1 = { 0xd9,0x01,0x9a,0x01,0x9a,0x01,0x9a,0x01}},




	{ .i1 = { 0x9a,0x01,0x9a,0x01,0xfb,0x01,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x8f,0x03,0x8f,0x03}},




	{ .i1 = { 0x8f,0x03,0x8f,0x03,0x31,0x00,0x31,0x00}},




	{ .i1 = { 0x1c,0x00,0x24,0x00,0x24,0x00,0x52,0x00}},




	{ .i1 = { 0x0a,0x00,0x0a,0x00,0x92,0x00,0x92,0x00}},




	{ .i1 = { 0x92,0x00,0x92,0x00,0x92,0x00,0x92,0x00}},




	{ .i1 = { 0x92,0x00,0x92,0x00,0x36,0x00,0x9c,0x00}},




	{ .i1 = { 0x9c,0x00,0x9c,0x00,0x7d,0x00,0xbd,0x00}},




	{ .i1 = { 0x2c,0x04,0x2c,0x04,0x91,0x00,0x91,0x00}},




	{ .i1 = { 0x18,0x01,0x96,0x00,0xe6,0x00,0xbd,0x00}},




	{ .i1 = { 0xcb,0x00,0x52,0x00,0x0a,0x00,0x2d,0x01}},




	{ .i1 = { 0x35,0x01,0x35,0x01,0x52,0x00,0x35,0x01}},




	{ .i1 = { 0x52,0x00,0x2c,0x04,0x2c,0x04,0x2c,0x04}},




	{ .i1 = { 0x2c,0x04,0x2c,0x04,0x2c,0x04,0x2c,0x04}},




	{ .i1 = { 0x2c,0x04,0x2c,0x04,0x2c,0x04,0x3c,0x01}},




	{ .i1 = { 0x4e,0x01,0x36,0x02,0x48,0x02,0x81,0x02}},




	{ .i1 = { 0x93,0x02,0xcb,0x02,0xdf,0x02,0x17,0x03}},




	{ .i1 = { 0x36,0x02,0x29,0x03,0xac,0x03,0xac,0x03}},




	{ .i1 = { 0xac,0x03,0xac,0x03,0xac,0x03,0xac,0x03}},




	{ .i1 = { 0xac,0x03,0xac,0x03,0xac,0x03,0xac,0x03}},




	{ .i1 = { 0xe3,0x03,0xf1,0x03,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x5e,0x00,0x5e,0x00,0x5e,0x00,0x6c,0x00}},




	{ .i1 = { 0x6c,0x00,0x6c,0x00,0x4c,0x01,0xaa,0x00}},




	{ .i1 = { 0xe1,0x00,0x36,0x01,0xd4,0x00,0x69,0x01}},




	{ .i1 = { 0x21,0x00,0x75,0x00,0x7c,0x01,0x5c,0x00}},




	{ .i1 = { 0xd5,0x00,0x1f,0x00,0x2c,0x01,0x2c,0x01}},




	{ .i1 = { 0x2c,0x01,0x2c,0x01,0x2c,0x01,0x2c,0x01}},




	{ .i1 = { 0x5c,0x01,0x96,0x01,0xa5,0x01,0xa9,0x01}},




	{ .i1 = { 0xae,0x01,0xcb,0x01,0x9c,0x01,0xb9,0x01}},




	{ .i1 = { 0xba,0x01,0xb3,0x01,0xc9,0x01,0xd7,0x01}},




	{ .i1 = { 0xc3,0x01,0xda,0x01,0xd0,0x01,0xd3,0x01}},




	{ .i1 = { 0xa3,0x01,0xd2,0x01,0xd4,0x01,0xd6,0x01}},




	{ .i1 = { 0xc9,0x01,0xe2,0x01,0xc4,0x01,0xed,0x01}},




	{ .i1 = { 0xe8,0x01,0xee,0x01,0xc6,0x01,0xe5,0x01}},




	{ .i1 = { 0xdd,0x01,0xe0,0x01,0xfa,0x01,0xef,0x01}},




	{ .i1 = { 0xbe,0x01,0xe6,0x01,0xf0,0x01,0x01,0x02}},




	{ .i1 = { 0x00,0x02,0xdc,0x01,0xf8,0x01,0xd1,0x01}},




	{ .i1 = { 0xf5,0x01,0x03,0x02,0x10,0x02,0xf3,0x01}},




	{ .i1 = { 0x04,0x02,0x1b,0x02,0x24,0x02,0x26,0x02}},




	{ .i1 = { 0x02,0x02,0x1c,0x02,0x1d,0x02,0xf6,0x01}},




	{ .i1 = { 0x0e,0x02,0xc9,0x01,0x1e,0x02}},
};
static data c02_a825[] = { // yy_reduce_ofst




	{ .i1 = { 0xc5,0xff,0x20,0x03,0x38,0x03,0x98,0x03}},




	{ .i1 = { 0x98,0x03,0x98,0x03,0x98,0x03,0x98,0x03}},




	{ .i1 = { 0x98,0x03,0x58,0x00,0x98,0x00,0xeb,0x00}},




	{ .i1 = { 0xd6,0x00,0x4b,0x01,0x16,0x00,0x57,0x00}},




	{ .i1 = { 0xf0,0xff,0xae,0x00,0x12,0x01,0x67,0x01}},




	{ .i1 = { 0x81,0x01,0xc2,0x01,0x30,0x00,0x9d,0x00}},




	{ .i1 = { 0x03,0x01,0xd7,0x00,0xca,0x01,0x6e,0x01}},




	{ .i1 = { 0xeb,0x01,0x97,0x00,0x6f,0x01,0xcf,0x01}},




	{ .i1 = { 0xe3,0x01,0xea,0x01,0x0b,0x02,0x0c,0x02}},




	{ .i1 = { 0x14,0x02,0x23,0x02,0x34,0x02,0x57,0x02}},




	{ .i1 = { 0x66,0x02,0x6e,0x02,0x6f,0x02,0x78,0x02}},




	{ .i1 = { 0x79,0x02,0x80,0x02,0xa6,0x02,0xa7,0x02}},




	{ .i1 = { 0xb0,0x02,0xb1,0x02,0xc5,0x02,0xc8,0x02}},




	{ .i1 = { 0xcc,0x02,0xde,0x02,0xfc,0x02,0xfd,0x02}},




	{ .i1 = { 0x04,0x03,0x05,0x03,0xaa,0xff,0xb9,0xff}},




	{ .i1 = { 0xcc,0xff,0x99,0xff,0x59,0x00,0x6b,0x00}},




	{ .i1 = { 0xb2,0x00,0xec,0x00,0xf2,0xff,0x08,0x00}},




	{ .i1 = { 0x32,0x00,0xd9,0x00,0xf2,0x00,0x20,0x01}},




	{ .i1 = { 0x34,0x01,0x43,0x01,0xd3,0x00,0xc2,0xff}},




	{ .i1 = { 0x3d,0x00,0xdc,0x00,0xbc,0xff,0x0d,0x00}},




	{ .i1 = { 0x41,0x00,0xc1,0x00,0xb3,0xff,0x63,0x00}},




	{ .i1 = { 0xa9,0xff,0x5d,0x00,0x8e,0x00,0xa7,0x00}},




	{ .i1 = { 0xb1,0x00,0xf1,0x00,0xb4,0x00,0xf6,0x00}},




	{ .i1 = { 0x10,0x01,0x1f,0x01,0x4a,0x01,0x23,0x01}},




	{ .i1 = { 0x51,0x01,0x4d,0x01,0x50,0x01,0x3a,0x01}},




	{ .i1 = { 0x58,0x01,0x3d,0x01,0x60,0x01,0x54,0x01}},




	{ .i1 = { 0x61,0x01,0x68,0x01,0x6a,0x01}},
};
static data c02_a826[] = { // yy_default




	{ .i1 = { 0x24,0x02,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0x28,0x02,0x2c,0x02}},




	{ .i1 = { 0xbf,0x01,0x35,0x02,0x35,0x02,0xae,0x01}},




	{ .i1 = { 0x35,0x02,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0x1a,0x02,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0x31,0x02,0x31,0x02,0xae,0x01}},




	{ .i1 = { 0x0c,0x02,0x0c,0x02,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0x24,0x02,0x24,0x02,0x27,0x02,0x27,0x02}},




	{ .i1 = { 0xae,0x01,0x16,0x02,0x30,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0x24,0x02,0x24,0x02,0x2f,0x02}},




	{ .i1 = { 0x24,0x02,0x2f,0x02,0x24,0x02,0x2a,0x02}},




	{ .i1 = { 0xbd,0x01,0x24,0x02,0x24,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0x02,0x02,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0x1b,0x02,0x02,0x02}},




	{ .i1 = { 0xcd,0x01,0xcc,0x01,0xcb,0x01,0xca,0x01}},




	{ .i1 = { 0xc9,0x01,0xc8,0x01,0xfe,0x01,0xe8,0x01}},




	{ .i1 = { 0xd9,0x01,0xd7,0x01,0xdb,0x01,0xda,0x01}},




	{ .i1 = { 0xd2,0x01,0xd3,0x01,0xd0,0x01,0xd4,0x01}},




	{ .i1 = { 0xd6,0x01,0xd5,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xbe,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xe0,0x01,0xdf,0x01}},




	{ .i1 = { 0xde,0x01,0xdd,0x01,0xd8,0x01,0xd1,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0x36,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0x14,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0x11,0x02,0xae,0x01,0x0f,0x02,0xae,0x01}},




	{ .i1 = { 0x09,0x02,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xf6,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0x01,0x02,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xc6,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xe3,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xdc,0x01,0xae,0x01}},
};
const i1 c02_s0181[] = { 0x24,0 };
const i1 c02_s0182[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s0183[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s0184[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0185[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0186[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0187[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0188[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0189[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s018a[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s018b[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s018c[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s018d[] = { 0x49,0x46,0 };
const i1 c02_s018e[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s018f[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s0190[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s0191[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0192[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s0193[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s0194[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s0195[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s0196[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0197[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0198[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0199[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s019a[] = { 0x53,0x55,0x42,0 };
const i1 c02_s019b[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s019c[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s019d[] = { 0x56,0x41,0x52,0 };
const i1 c02_s019e[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s019f[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s01a0[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s01a1[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s01a2[] = { 0x49,0x44,0 };
const i1 c02_s01a3[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s01a4[] = { 0x41,0x54,0 };
const i1 c02_s01a5[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s01a6[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s01a7[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s01a8[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s01a9[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s01aa[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s01ab[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s01ac[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s01ad[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s01ae[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s01af[] = { 0x4f,0x52,0 };
const i1 c02_s01b0[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s01b1[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s01b2[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s01b3[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s01b4[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s01b5[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s01b6[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s01b7[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s01b8[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01b9[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01ba[] = { 0x41,0x53,0 };
const i1 c02_s01bb[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s01bc[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s01bd[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s01be[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s01bf[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s01c0[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s01c1[] = { 0x49,0x53,0 };
const i1 c02_s01c2[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s01c3[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
static data c02_a827[] = { // yyTokenName

	{ .ptr = (void*)c02_s0181 },

	{ .ptr = (void*)c02_s0182 },

	{ .ptr = (void*)c02_s0183 },

	{ .ptr = (void*)c02_s0184 },

	{ .ptr = (void*)c02_s0185 },

	{ .ptr = (void*)c02_s0186 },

	{ .ptr = (void*)c02_s0187 },

	{ .ptr = (void*)c02_s0188 },

	{ .ptr = (void*)c02_s0189 },

	{ .ptr = (void*)c02_s018a },

	{ .ptr = (void*)c02_s018b },

	{ .ptr = (void*)c02_s018c },

	{ .ptr = (void*)c02_s018d },

	{ .ptr = (void*)c02_s018e },

	{ .ptr = (void*)c02_s018f },

	{ .ptr = (void*)c02_s0190 },

	{ .ptr = (void*)c02_s0191 },

	{ .ptr = (void*)c02_s0192 },

	{ .ptr = (void*)c02_s0193 },

	{ .ptr = (void*)c02_s0194 },

	{ .ptr = (void*)c02_s0195 },

	{ .ptr = (void*)c02_s0196 },

	{ .ptr = (void*)c02_s0197 },

	{ .ptr = (void*)c02_s0198 },

	{ .ptr = (void*)c02_s0199 },

	{ .ptr = (void*)c02_s019a },

	{ .ptr = (void*)c02_s019b },

	{ .ptr = (void*)c02_s019c },

	{ .ptr = (void*)c02_s019d },

	{ .ptr = (void*)c02_s019e },

	{ .ptr = (void*)c02_s019f },

	{ .ptr = (void*)c02_s01a0 },

	{ .ptr = (void*)c02_s01a1 },

	{ .ptr = (void*)c02_s01a2 },

	{ .ptr = (void*)c02_s01a3 },

	{ .ptr = (void*)c02_s01a4 },

	{ .ptr = (void*)c02_s01a5 },

	{ .ptr = (void*)c02_s01a6 },

	{ .ptr = (void*)c02_s01a7 },

	{ .ptr = (void*)c02_s01a8 },

	{ .ptr = (void*)c02_s01a9 },

	{ .ptr = (void*)c02_s01aa },

	{ .ptr = (void*)c02_s01ab },

	{ .ptr = (void*)c02_s01ac },

	{ .ptr = (void*)c02_s01ad },

	{ .ptr = (void*)c02_s01ae },

	{ .ptr = (void*)c02_s01af },

	{ .ptr = (void*)c02_s01b0 },

	{ .ptr = (void*)c02_s01b1 },

	{ .ptr = (void*)c02_s01b2 },

	{ .ptr = (void*)c02_s01b3 },

	{ .ptr = (void*)c02_s01b4 },

	{ .ptr = (void*)c02_s01b5 },

	{ .ptr = (void*)c02_s01b6 },

	{ .ptr = (void*)c02_s01b7 },

	{ .ptr = (void*)c02_s01b8 },

	{ .ptr = (void*)c02_s01b9 },

	{ .ptr = (void*)c02_s01ba },

	{ .ptr = (void*)c02_s01bb },

	{ .ptr = (void*)c02_s01bc },

	{ .ptr = (void*)c02_s01bd },

	{ .ptr = (void*)c02_s01be },

	{ .ptr = (void*)c02_s01bf },

	{ .ptr = (void*)c02_s01c0 },

	{ .ptr = (void*)c02_s01c1 },

	{ .ptr = (void*)c02_s01c2 },

	{ .ptr = (void*)c02_s01c3 },

};
const i1 c02_s01c4[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };

// token_destructor workspace at ws+3064 length ws+0
void f481_token_destructor(void) {

	i8 v8923 = (i8)(intptr_t)(ws+3048);
	i1 v8924 = *(i1*)(intptr_t)v8923;
	i1 v8925 = (i1)+41;
	if (v8924==v8925) goto c02_082d; else goto c02_082f;

c02_082f:;

	i8 v8926 = (i8)(intptr_t)(ws+3048);
	i1 v8927 = *(i1*)(intptr_t)v8926;
	i1 v8928 = (i1)+33;
	if (v8927==v8928) goto c02_082d; else goto c02_082e;

c02_082d:;

	i8 v8929 = (i8)(intptr_t)c02_s01c4;

void f11_print(i8 /* ptr */);
	f11_print(v8929);

	i8 v8930 = (i8)(intptr_t)(ws+3056);
	i8 v8931 = *(i8*)(intptr_t)v8930;
	i8 v8932 = *(i8*)(intptr_t)v8931;

void f32_Free(i8 /* block */);
	f32_Free(v8932);

	goto c02_0828;

c02_082e:;

c02_0828:;

endsub:;
}

// yy_destructor workspace at ws+3048 length ws+16
void f480_yy_destructor(i8 p8921 /* yypminor */, i1 p8922 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3048) = p8922; /*yymajor */
	*(i8*)(intptr_t)(ws+3056) = p8921; /*yypminor */


	i8 v8933 = (i8)(intptr_t)(ws+3048);
	i1 v8934 = *(i1*)(intptr_t)v8933;
	i1 v8935 = (i1)+0;
	if (v8934==v8935) goto c02_0836; else goto c02_0837;

c02_0837:;

	i8 v8936 = (i8)(intptr_t)(ws+3048);
	i1 v8937 = *(i1*)(intptr_t)v8936;
	i1 v8938 = (i1)+67;
	if (v8937<v8938) goto c02_0835; else goto c02_0836;

c02_0835:;


void f481_token_destructor(void);
	f481_token_destructor();

	goto c02_0830;

c02_0836:;

c02_0830:;

endsub:;
}

// yy_pop_parser_stack workspace at ws+3000 length ws+0
void f482_yy_pop_parser_stack(void) {

	i8 v8939 = (i8)(intptr_t)(ws+1240);
	i8 v8940 = *(i8*)(intptr_t)v8939;
	i8 v8941 = v8940+(-16);
	i8 v8942 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v8942 = v8941;

	i8 v8943 = (i8)(intptr_t)(ws+1240);
	i8 v8944 = *(i8*)(intptr_t)v8943;
	i8 v8945 = v8944+(+2);
	i1 v8946 = *(i1*)(intptr_t)v8945;
	i8 v8947 = (i8)(intptr_t)(ws+1240);
	i8 v8948 = *(i8*)(intptr_t)v8947;
	i8 v8949 = v8948+(+8);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v8949, v8946);

endsub:;
}

// yy_pop_all_parser_stack workspace at ws+3000 length ws+0
void f483_yy_pop_all_parser_stack(void) {

c02_083a:;

	i8 v8950 = (i8)(intptr_t)(ws+1240);
	i8 v8951 = *(i8*)(intptr_t)v8950;
	i8 v8952 = (i8)(intptr_t)(ws+1248);
	if (v8951==v8952) goto c02_083d; else goto c02_083c;

c02_083c:;


void f482_yy_pop_parser_stack(void);
	f482_yy_pop_parser_stack();

	goto c02_083a;

c02_083d:;

endsub:;
}
const i1 c02_s01c5[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// yy_stack_overflow workspace at ws+3000 length ws+0
void f484_yy_stack_overflow(void) {


void f483_yy_pop_all_parser_stack(void);
	f483_yy_pop_all_parser_stack();


void f55_StartError(void);
	f55_StartError();

	i8 v8953 = (i8)(intptr_t)c02_s01c5;

void f11_print(i8 /* ptr */);
	f11_print(v8953);


void f56_EndError(void);
	f56_EndError();

endsub:;
}
static data c02_a83e[] = { // yyRuleInfoLhs








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x49,0x45}},








	{ .i1 = { 0x4a,0x45,0x45,0x45,0x4c,0x4d,0x4e,0x45}},








	{ .i1 = { 0x50,0x53,0x53,0x4b,0x4b,0x4b,0x4b,0x4b}},








	{ .i1 = { 0x4b,0x4b,0x4b,0x4b,0x4b,0x48,0x48,0x48}},








	{ .i1 = { 0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48}},








	{ .i1 = { 0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x48}},








	{ .i1 = { 0x48,0x48,0x48,0x48,0x48,0x48,0x48,0x54}},








	{ .i1 = { 0x45,0x47,0x47,0x47,0x47,0x47,0x47,0x45}},








	{ .i1 = { 0x46,0x56,0x57,0x55,0x55,0x48,0x45,0x45}},








	{ .i1 = { 0x58,0x59,0x59,0x5b,0x5b,0x5c,0x5a,0x5d}},








	{ .i1 = { 0x5d,0x5e,0x45,0x61,0x5f,0x64,0x62,0x63}},








	{ .i1 = { 0x60,0x60,0x65,0x65,0x66,0x66,0x67,0x67}},








	{ .i1 = { 0x68,0x45,0x69,0x6a,0x6c,0x6e,0x6e,0x6d}},








	{ .i1 = { 0x45,0x6f,0x71,0x71,0x72,0x45,0x73,0x75}},








	{ .i1 = { 0x75,0x75,0x43,0x44,0x44,0x45,0x4f,0x4f}},








	{ .i1 = { 0x4f,0x51,0x51,0x52,0x45,0x45,0x61,0x6a}},








	{ .i1 = { 0x6b,0x6b,0x70,0x70,0x71,0x74,0x74}},
};
static data c02_a83f[] = { // yyRuleInfoNRhs








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x03,0x02,0x02,0x08,0x00,0x01,0x01,0x05}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x02}},








	{ .i1 = { 0x02,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x02,0x03,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x01,0x03,0x04,0x03,0x01,0x01}},








	{ .i1 = { 0x05,0x06,0x01,0x03,0x04,0x03,0x02,0x05}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x03,0x02,0x03,0x05}},








	{ .i1 = { 0x01,0x03,0x02,0x01,0x03,0x01,0x05,0x01}},








	{ .i1 = { 0x03,0x01,0x05,0x05,0x02,0x03,0x01,0x02}},








	{ .i1 = { 0x01,0x03,0x01,0x00,0x02,0x03,0x01,0x03}},








	{ .i1 = { 0x03,0x07,0x01,0x02,0x05,0x00,0x04,0x01}},








	{ .i1 = { 0x05,0x05,0x01,0x03,0x01,0x03,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x01,0x00,0x02,0x01,0x00,0x02}},








	{ .i1 = { 0x05,0x00,0x02,0x02,0x07,0x05,0x00,0x00}},








	{ .i1 = { 0x00,0x02,0x01,0x03,0x00,0x01,0x03}},
};

// reduce_0 workspace at ws+3000 length ws+0
void f487_reduce_0(void) {


void f139_MidReturn(i8* /* m */);
	i8 v9012;
	f139_MidReturn(&v9012);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9012);

	i1 v9013 = (i1)+22;
	i8 v9014 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9014, v9013);

endsub:;
}

// reduce_1 workspace at ws+3000 length ws+0
void f488_reduce_1(void) {

	i1 v9015 = (i1)+28;
	i8 v9016 = (i8)(intptr_t)(ws+2944);
	i8 v9017 = *(i8*)(intptr_t)v9016;
	i8 v9018 = v9017+(+46);
	*(i1*)(intptr_t)v9018 = v9015;

	i8 v9019 = (i8)(intptr_t)(ws+2944);
	i8 v9020 = *(i8*)(intptr_t)v9019;
	i8 v9021 = (i8)(intptr_t)(ws+2928);
	i8 v9022 = *(i8*)(intptr_t)v9021;

void f440_InitVariable(i8 /* type */, i8 /* symbol */);
	f440_InitVariable(v9022, v9020);

	i1 v9023 = (i1)+6;
	i8 v9024 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9024, v9023);

	i1 v9025 = (i1)+22;
	i8 v9026 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9026, v9025);

endsub:;
}

// reduce_2 workspace at ws+3000 length ws+0
void f489_reduce_2(void) {

	i1 v9027 = (i1)+28;
	i8 v9028 = (i8)(intptr_t)(ws+2960);
	i8 v9029 = *(i8*)(intptr_t)v9028;
	i8 v9030 = v9029+(+46);
	*(i1*)(intptr_t)v9030 = v9027;

	i8 v9031 = (i8)(intptr_t)(ws+2960);
	i8 v9032 = *(i8*)(intptr_t)v9031;
	i8 v9033 = (i8)(intptr_t)(ws+2944);
	i8 v9034 = *(i8*)(intptr_t)v9033;

void f440_InitVariable(i8 /* type */, i8 /* symbol */);
	f440_InitVariable(v9034, v9032);

	i8 v9035 = (i8)(intptr_t)(ws+2928);
	i8 v9036 = *(i8*)(intptr_t)v9035;
	i8 v9037 = (i8)(intptr_t)(ws+2960);
	i8 v9038 = *(i8*)(intptr_t)v9037;
	i8 v9039 = *(i8*)(intptr_t)v9038;

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9039, v9036);

	i8 v9040 = (i8)(intptr_t)(ws+2928);
	i8 v9041 = *(i8*)(intptr_t)v9040;
	i8 v9042 = v9041+(+16);
	i8 v9043 = *(i8*)(intptr_t)v9042;
	i8 v9044 = v9043+(+42);
	i2 v9045 = *(i2*)(intptr_t)v9044;
	i1 v9046 = v9045;
	i8 v9047 = (i8)(intptr_t)(ws+2928);
	i8 v9048 = *(i8*)(intptr_t)v9047;
	i8 v9049 = (i8)(intptr_t)(ws+2960);
	i8 v9050 = *(i8*)(intptr_t)v9049;
	i2 v9051 = (i2)+0;

void f123_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	i8 v9052;
	f123_MidAddress(&v9052, v9051, v9050);

void f118_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v9053;
	f118_MidStore(&v9053, v9052, v9048, v9046);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9053);

	i1 v9054 = (i1)+6;
	i8 v9055 = (i8)(intptr_t)(ws+2952);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9055, v9054);

	i1 v9056 = (i1)+2;
	i8 v9057 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9057, v9056);

	i1 v9058 = (i1)+22;
	i8 v9059 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9059, v9058);

endsub:;
}
const i1 c02_s01c8[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
const i1 c02_s01c9[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };

// reduce_3 workspace at ws+3000 length ws+8
void f490_reduce_3(void) {

	i8 v9060 = (i8)(intptr_t)(ws+2928);
	i8 v9061 = *(i8*)(intptr_t)v9060;
	i8 v9062 = v9061+(+16);
	i8 v9063 = *(i8*)(intptr_t)v9062;
	i8 v9064 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9064 = v9063;

	i8 v9065 = (i8)(intptr_t)(ws+3000);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)+0;
	if (v9066==v9067) goto c02_084e; else goto c02_084f;

c02_084e:;

	i8 v9068 = (i8)(intptr_t)c02_s01c8;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9068);

	goto c02_084b;

c02_084f:;

c02_084b:;

	i8 v9069 = (i8)(intptr_t)(ws+3000);
	i8 v9070 = *(i8*)(intptr_t)v9069;

void f202_IsScalar(i1* /* result */, i8 /* type */);
	i1 v9071;
	f202_IsScalar(&v9071, v9070);
	i1 v9072 = (i1)+0;
	if (v9071==v9072) goto c02_0853; else goto c02_0854;

c02_0853:;

	i8 v9073 = (i8)(intptr_t)c02_s01c9;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9073);

	goto c02_0850;

c02_0854:;

c02_0850:;

	i1 v9074 = (i1)+28;
	i8 v9075 = (i8)(intptr_t)(ws+2944);
	i8 v9076 = *(i8*)(intptr_t)v9075;
	i8 v9077 = v9076+(+46);
	*(i1*)(intptr_t)v9077 = v9074;

	i8 v9078 = (i8)(intptr_t)(ws+2944);
	i8 v9079 = *(i8*)(intptr_t)v9078;
	i8 v9080 = (i8)(intptr_t)(ws+3000);
	i8 v9081 = *(i8*)(intptr_t)v9080;

void f440_InitVariable(i8 /* type */, i8 /* symbol */);
	f440_InitVariable(v9081, v9079);

	i8 v9082 = (i8)(intptr_t)(ws+2928);
	i8 v9083 = *(i8*)(intptr_t)v9082;
	i8 v9084 = (i8)(intptr_t)(ws+2944);
	i8 v9085 = *(i8*)(intptr_t)v9084;
	i8 v9086 = *(i8*)(intptr_t)v9085;

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9086, v9083);

	i8 v9087 = (i8)(intptr_t)(ws+2928);
	i8 v9088 = *(i8*)(intptr_t)v9087;
	i8 v9089 = v9088+(+16);
	i8 v9090 = *(i8*)(intptr_t)v9089;
	i8 v9091 = v9090+(+42);
	i2 v9092 = *(i2*)(intptr_t)v9091;
	i1 v9093 = v9092;
	i8 v9094 = (i8)(intptr_t)(ws+2928);
	i8 v9095 = *(i8*)(intptr_t)v9094;
	i8 v9096 = (i8)(intptr_t)(ws+2944);
	i8 v9097 = *(i8*)(intptr_t)v9096;
	i2 v9098 = (i2)+0;

void f123_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	i8 v9099;
	f123_MidAddress(&v9099, v9098, v9097);

void f118_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v9100;
	f118_MidStore(&v9100, v9099, v9095, v9093);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9100);

	i1 v9101 = (i1)+2;
	i8 v9102 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9102, v9101);

	i1 v9103 = (i1)+22;
	i8 v9104 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9104, v9103);

endsub:;
}

// reduce_4 workspace at ws+3000 length ws+16
void f491_reduce_4(void) {

	i8 v9105 = (i8)(intptr_t)(ws+2944);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	i8 v9107 = v9106+(+16);
	i8 v9108 = *(i8*)(intptr_t)v9107;
	i8 v9109 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9109 = v9108;

	i8 v9110 = (i8)(intptr_t)(ws+2944);
	i8 v9111 = *(i8*)(intptr_t)v9110;

void f205_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9112;
	f205_UndoLValue(&v9112, v9111);
	i8 v9113 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9113 = v9112;

	i8 v9114 = (i8)(intptr_t)(ws+2928);
	i8 v9115 = *(i8*)(intptr_t)v9114;
	i8 v9116 = (i8)(intptr_t)(ws+3000);
	i8 v9117 = *(i8*)(intptr_t)v9116;

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9117, v9115);

	i8 v9118 = (i8)(intptr_t)(ws+3000);
	i8 v9119 = *(i8*)(intptr_t)v9118;
	i8 v9120 = v9119+(+42);
	i2 v9121 = *(i2*)(intptr_t)v9120;
	i1 v9122 = v9121;
	i8 v9123 = (i8)(intptr_t)(ws+2928);
	i8 v9124 = *(i8*)(intptr_t)v9123;
	i8 v9125 = (i8)(intptr_t)(ws+3008);
	i8 v9126 = *(i8*)(intptr_t)v9125;

void f118_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v9127;
	f118_MidStore(&v9127, v9126, v9124, v9122);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9127);

	i1 v9128 = (i1)+2;
	i8 v9129 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9129, v9128);

	i1 v9130 = (i1)+22;
	i8 v9131 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9131, v9130);

endsub:;
}

// reduce_5 workspace at ws+3000 length ws+0
void f492_reduce_5(void) {

	i8 v9132 = (i8)(intptr_t)(ws+2944);
	i8 v9133 = *(i8*)(intptr_t)v9132;

void f463_TerminateNormalLoop(i8 /* ll */);
	f463_TerminateNormalLoop(v9133);

	i1 v9134 = (i1)+10;
	i8 v9135 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9135, v9134);

	i1 v9136 = (i1)+13;
	i8 v9137 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9137, v9136);

endsub:;
}

// reduce_6 workspace at ws+3000 length ws+0
void f493_reduce_6(void) {


void f462_BeginNormalLoop(i8* /* ll */);
	i8 v9138;
	f462_BeginNormalLoop(&v9138);
	i8 v9139 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9139 = v9138;

	i8 v9140 = (i8)(intptr_t)(ws+54);
	i2 v9141 = *(i2*)(intptr_t)v9140;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9142;
	f132_MidLabel(&v9142, v9141);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9142);

endsub:;
}

// reduce_7 workspace at ws+3000 length ws+0
void f494_reduce_7(void) {

	i8 v9143 = (i8)(intptr_t)(ws+2944);
	i8 v9144 = *(i8*)(intptr_t)v9143;

void f463_TerminateNormalLoop(i8 /* ll */);
	f463_TerminateNormalLoop(v9144);

	i1 v9145 = (i1)+10;
	i8 v9146 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9146, v9145);

	i1 v9147 = (i1)+13;
	i8 v9148 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9148, v9147);

endsub:;
}

// reduce_8 workspace at ws+3000 length ws+2
void f495_reduce_8(void) {


void f462_BeginNormalLoop(i8* /* ll */);
	i8 v9149;
	f462_BeginNormalLoop(&v9149);
	i8 v9150 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9150 = v9149;

	i8 v9151 = (i8)(intptr_t)(ws+54);
	i2 v9152 = *(i2*)(intptr_t)v9151;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9153;
	f132_MidLabel(&v9153, v9152);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9153);


void f206_AllocLabel(i2* /* label */);
	i2 v9154;
	f206_AllocLabel(&v9154);
	i8 v9155 = (i8)(intptr_t)(ws+3000);
	*(i2*)(intptr_t)v9155 = v9154;


void f206_AllocLabel(i2* /* label */);
	i2 v9156;
	f206_AllocLabel(&v9156);
	i8 v9157 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9157 = v9156;

	i8 v9158 = (i8)(intptr_t)(ws+3000);
	i2 v9159 = *(i2*)(intptr_t)v9158;
	i8 v9160 = (i8)(intptr_t)(ws+2928);
	i8 v9161 = *(i8*)(intptr_t)v9160;
	*(i2*)(intptr_t)v9161 = v9159;

	i8 v9162 = (i8)(intptr_t)(ws+52);
	i2 v9163 = *(i2*)(intptr_t)v9162;
	i8 v9164 = (i8)(intptr_t)(ws+2928);
	i8 v9165 = *(i8*)(intptr_t)v9164;
	i8 v9166 = v9165+(+2);
	*(i2*)(intptr_t)v9166 = v9163;

	i8 v9167 = (i8)(intptr_t)(ws+3000);
	i2 v9168 = *(i2*)(intptr_t)v9167;
	i8 v9169 = (i8)(intptr_t)(ws+2928);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = v9170+(+4);
	*(i2*)(intptr_t)v9171 = v9168;

	i8 v9172 = (i8)(intptr_t)(ws+2928);
	i8 v9173 = *(i8*)(intptr_t)v9172;

void f438_GenerateConditional(i8 /* rootnode */);
	f438_GenerateConditional(v9173);

	i8 v9174 = (i8)(intptr_t)(ws+52);
	i2 v9175 = *(i2*)(intptr_t)v9174;
	i8 v9176 = (i8)(intptr_t)(ws+2912);
	i8 v9177 = *(i8*)(intptr_t)v9176;
	i8 v9178 = v9177+(+2);
	*(i2*)(intptr_t)v9178 = v9175;

	i1 v9179 = (i1)+13;
	i8 v9180 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9180, v9179);

endsub:;
}
const i1 c02_s01ca[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };

// reduce_9 workspace at ws+3000 length ws+0
void f496_reduce_9(void) {

	i8 v9181 = (i8)(intptr_t)(ws+52);
	i2 v9182 = *(i2*)(intptr_t)v9181;
	i2 v9183 = (i2)+0;
	if (v9182==v9183) goto c02_0858; else goto c02_0859;

c02_0858:;

	i8 v9184 = (i8)(intptr_t)c02_s01ca;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9184);

	goto c02_0855;

c02_0859:;

c02_0855:;

	i8 v9185 = (i8)(intptr_t)(ws+52);
	i2 v9186 = *(i2*)(intptr_t)v9185;

void f88_MidJump(i8* /* m */, i2 /* label */);
	i8 v9187;
	f88_MidJump(&v9187, v9186);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9187);

	i1 v9188 = (i1)+22;
	i8 v9189 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9189, v9188);

endsub:;
}
const i1 c02_s01cb[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };

// reduce_10 workspace at ws+3000 length ws+0
void f497_reduce_10(void) {

	i8 v9190 = (i8)(intptr_t)(ws+54);
	i2 v9191 = *(i2*)(intptr_t)v9190;
	i2 v9192 = (i2)+0;
	if (v9191==v9192) goto c02_085d; else goto c02_085e;

c02_085d:;

	i8 v9193 = (i8)(intptr_t)c02_s01cb;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9193);

	goto c02_085a;

c02_085e:;

c02_085a:;

	i8 v9194 = (i8)(intptr_t)(ws+54);
	i2 v9195 = *(i2*)(intptr_t)v9194;

void f88_MidJump(i8* /* m */, i2 /* label */);
	i8 v9196;
	f88_MidJump(&v9196, v9195);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9196);

	i1 v9197 = (i1)+22;
	i8 v9198 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9198, v9197);

endsub:;
}

// reduce_11 workspace at ws+3000 length ws+8
void f498_reduce_11(void) {

	i8 v9199 = (i8)(intptr_t)(ws+56);
	i8 v9200 = *(i8*)(intptr_t)v9199;
	i2 v9201 = *(i2*)(intptr_t)v9200;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9202;
	f132_MidLabel(&v9202, v9201);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9202);

	i8 v9203 = (i8)(intptr_t)(ws+56);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	i8 v9205 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9205 = v9204;

	i8 v9206 = (i8)(intptr_t)(ws+56);
	i8 v9207 = *(i8*)(intptr_t)v9206;
	i8 v9208 = v9207+(+8);
	i8 v9209 = *(i8*)(intptr_t)v9208;
	i8 v9210 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v9210 = v9209;

	i8 v9211 = (i8)(intptr_t)(ws+3000);
	i8 v9212 = *(i8*)(intptr_t)v9211;

void f32_Free(i8 /* block */);
	f32_Free(v9212);

	i1 v9213 = (i1)+26;
	i8 v9214 = (i8)(intptr_t)(ws+2952);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9214, v9213);

	i1 v9215 = (i1)+10;
	i8 v9216 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9216, v9215);

	i1 v9217 = (i1)+12;
	i8 v9218 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9218, v9217);

endsub:;
}

// reduce_12 workspace at ws+3000 length ws+8
void f499_reduce_12(void) {

	i8 v9219 = (i8)+16;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v9220;
	f31_Alloc(&v9220, v9219);
	i8 v9221 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9221 = v9220;

	i8 v9222 = (i8)(intptr_t)(ws+56);
	i8 v9223 = *(i8*)(intptr_t)v9222;
	i8 v9224 = (i8)(intptr_t)(ws+3000);
	i8 v9225 = *(i8*)(intptr_t)v9224;
	i8 v9226 = v9225+(+8);
	*(i8*)(intptr_t)v9226 = v9223;

	i8 v9227 = (i8)(intptr_t)(ws+3000);
	i8 v9228 = *(i8*)(intptr_t)v9227;
	i8 v9229 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v9229 = v9228;


void f206_AllocLabel(i2* /* label */);
	i2 v9230;
	f206_AllocLabel(&v9230);
	i8 v9231 = (i8)(intptr_t)(ws+56);
	i8 v9232 = *(i8*)(intptr_t)v9231;
	*(i2*)(intptr_t)v9232 = v9230;

endsub:;
}

// reduce_13 workspace at ws+3000 length ws+4
void f500_reduce_13(void) {


void f206_AllocLabel(i2* /* label */);
	i2 v9233;
	f206_AllocLabel(&v9233);
	i8 v9234 = (i8)(intptr_t)(ws+3000);
	*(i2*)(intptr_t)v9234 = v9233;


void f206_AllocLabel(i2* /* label */);
	i2 v9235;
	f206_AllocLabel(&v9235);
	i8 v9236 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v9236 = v9235;

	i8 v9237 = (i8)(intptr_t)(ws+3000);
	i2 v9238 = *(i2*)(intptr_t)v9237;
	i8 v9239 = (i8)(intptr_t)(ws+56);
	i8 v9240 = *(i8*)(intptr_t)v9239;
	i8 v9241 = v9240+(+2);
	*(i2*)(intptr_t)v9241 = v9238;

	i8 v9242 = (i8)(intptr_t)(ws+3002);
	i2 v9243 = *(i2*)(intptr_t)v9242;
	i8 v9244 = (i8)(intptr_t)(ws+56);
	i8 v9245 = *(i8*)(intptr_t)v9244;
	i8 v9246 = v9245+(+4);
	*(i2*)(intptr_t)v9246 = v9243;

	i8 v9247 = (i8)(intptr_t)(ws+3000);
	i2 v9248 = *(i2*)(intptr_t)v9247;
	i8 v9249 = (i8)(intptr_t)(ws+2920);
	i8 v9250 = *(i8*)(intptr_t)v9249;
	*(i2*)(intptr_t)v9250 = v9248;

	i8 v9251 = (i8)(intptr_t)(ws+3002);
	i2 v9252 = *(i2*)(intptr_t)v9251;
	i8 v9253 = (i8)(intptr_t)(ws+2920);
	i8 v9254 = *(i8*)(intptr_t)v9253;
	i8 v9255 = v9254+(+2);
	*(i2*)(intptr_t)v9255 = v9252;

	i8 v9256 = (i8)(intptr_t)(ws+3000);
	i2 v9257 = *(i2*)(intptr_t)v9256;
	i8 v9258 = (i8)(intptr_t)(ws+2920);
	i8 v9259 = *(i8*)(intptr_t)v9258;
	i8 v9260 = v9259+(+4);
	*(i2*)(intptr_t)v9260 = v9257;

	i8 v9261 = (i8)(intptr_t)(ws+2920);
	i8 v9262 = *(i8*)(intptr_t)v9261;

void f438_GenerateConditional(i8 /* rootnode */);
	f438_GenerateConditional(v9262);

endsub:;
}

// reduce_14 workspace at ws+3000 length ws+0
void f501_reduce_14(void) {

	i8 v9263 = (i8)(intptr_t)(ws+56);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i2 v9265 = *(i2*)(intptr_t)v9264;

void f88_MidJump(i8* /* m */, i2 /* label */);
	i8 v9266;
	f88_MidJump(&v9266, v9265);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9266);

	i8 v9267 = (i8)(intptr_t)(ws+56);
	i8 v9268 = *(i8*)(intptr_t)v9267;
	i8 v9269 = v9268+(+4);
	i2 v9270 = *(i2*)(intptr_t)v9269;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9271;
	f132_MidLabel(&v9271, v9270);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9271);

endsub:;
}

// reduce_15 workspace at ws+3000 length ws+8
void f502_reduce_15(void) {

	i8 v9272 = (i8)(intptr_t)(ws+64);
	i8 v9273 = *(i8*)(intptr_t)v9272;
	i8 v9274 = v9273+(+17);
	i1 v9275 = *(i1*)(intptr_t)v9274;
	i1 v9276 = (i1)+0;
	if (v9275==v9276) goto c02_0866; else goto c02_0865;

c02_0866:;

	i8 v9277 = (i8)(intptr_t)(ws+64);
	i8 v9278 = *(i8*)(intptr_t)v9277;
	i2 v9279 = *(i2*)(intptr_t)v9278;
	i2 v9280 = (i2)+0;
	if (v9279==v9280) goto c02_0865; else goto c02_0864;

c02_0864:;

	i8 v9281 = (i8)(intptr_t)(ws+64);
	i8 v9282 = *(i8*)(intptr_t)v9281;
	i2 v9283 = *(i2*)(intptr_t)v9282;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9284;
	f132_MidLabel(&v9284, v9283);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9284);

	goto c02_085f;

c02_0865:;

c02_085f:;

	i8 v9285 = (i8)(intptr_t)(ws+64);
	i8 v9286 = *(i8*)(intptr_t)v9285;
	i8 v9287 = v9286+(+2);
	i2 v9288 = *(i2*)(intptr_t)v9287;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9289;
	f132_MidLabel(&v9289, v9288);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9289);

	i8 v9290 = (i8)(intptr_t)(ws+64);
	i8 v9291 = *(i8*)(intptr_t)v9290;
	i8 v9292 = v9291+(+16);
	i1 v9293 = *(i1*)(intptr_t)v9292;

void f97_MidEndcase(i8* /* m */, i1 /* width */);
	i8 v9294;
	f97_MidEndcase(&v9294, v9293);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9294);

	i8 v9295 = (i8)(intptr_t)(ws+64);
	i8 v9296 = *(i8*)(intptr_t)v9295;
	i8 v9297 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9297 = v9296;

	i8 v9298 = (i8)(intptr_t)(ws+3000);
	i8 v9299 = *(i8*)(intptr_t)v9298;
	i8 v9300 = v9299+(+8);
	i8 v9301 = *(i8*)(intptr_t)v9300;
	i8 v9302 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v9302 = v9301;

	i8 v9303 = (i8)(intptr_t)(ws+3000);
	i8 v9304 = *(i8*)(intptr_t)v9303;

void f32_Free(i8 /* block */);
	f32_Free(v9304);

	i1 v9305 = (i1)+10;
	i8 v9306 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9306, v9305);

	i1 v9307 = (i1)+63;
	i8 v9308 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9308, v9307);

	i1 v9309 = (i1)+22;
	i8 v9310 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9310, v9309);

endsub:;
}
const i1 c02_s01cc[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };

// reduce_16 workspace at ws+3000 length ws+8
void f503_reduce_16(void) {

	i8 v9311 = (i8)+18;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v9312;
	f31_Alloc(&v9312, v9311);
	i8 v9313 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9313 = v9312;

	i8 v9314 = (i8)(intptr_t)(ws+64);
	i8 v9315 = *(i8*)(intptr_t)v9314;
	i8 v9316 = (i8)(intptr_t)(ws+3000);
	i8 v9317 = *(i8*)(intptr_t)v9316;
	i8 v9318 = v9317+(+8);
	*(i8*)(intptr_t)v9318 = v9315;

	i8 v9319 = (i8)(intptr_t)(ws+52);
	i2 v9320 = *(i2*)(intptr_t)v9319;
	i8 v9321 = (i8)(intptr_t)(ws+3000);
	i8 v9322 = *(i8*)(intptr_t)v9321;
	i8 v9323 = v9322+(+4);
	*(i2*)(intptr_t)v9323 = v9320;


void f206_AllocLabel(i2* /* label */);
	i2 v9324;
	f206_AllocLabel(&v9324);
	i8 v9325 = (i8)(intptr_t)(ws+3000);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = v9326+(+2);
	*(i2*)(intptr_t)v9327 = v9324;

	i8 v9328 = (i8)(intptr_t)(ws+3000);
	i8 v9329 = *(i8*)(intptr_t)v9328;
	i8 v9330 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v9330 = v9329;

	i8 v9331 = (i8)(intptr_t)(ws+2928);
	i8 v9332 = *(i8*)(intptr_t)v9331;
	i8 v9333 = v9332+(+16);
	i8 v9334 = *(i8*)(intptr_t)v9333;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v9335;
	f200_IsNum(&v9335, v9334);
	i1 v9336 = (i1)+0;
	if (v9335==v9336) goto c02_086a; else goto c02_086b;

c02_086a:;

	i8 v9337 = (i8)(intptr_t)c02_s01cc;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9337);

	goto c02_0867;

c02_086b:;

c02_0867:;

	i8 v9338 = (i8)(intptr_t)(ws+2928);
	i8 v9339 = *(i8*)(intptr_t)v9338;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v9340;
	f141_NodeWidth(&v9340, v9339);
	i8 v9341 = (i8)(intptr_t)(ws+3000);
	i8 v9342 = *(i8*)(intptr_t)v9341;
	i8 v9343 = v9342+(+16);
	*(i1*)(intptr_t)v9343 = v9340;

	i8 v9344 = (i8)(intptr_t)(ws+3000);
	i8 v9345 = *(i8*)(intptr_t)v9344;
	i8 v9346 = v9345+(+16);
	i1 v9347 = *(i1*)(intptr_t)v9346;
	i8 v9348 = (i8)(intptr_t)(ws+2928);
	i8 v9349 = *(i8*)(intptr_t)v9348;

void f92_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	i8 v9350;
	f92_MidStartcase(&v9350, v9349, v9347);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9350);

	i1 v9351 = (i1)+64;
	i8 v9352 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9352, v9351);

endsub:;
}
const i1 c02_s01cd[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };

// reduce_17 workspace at ws+3000 length ws+0
void f504_reduce_17(void) {

	i8 v9353 = (i8)(intptr_t)(ws+64);
	i8 v9354 = *(i8*)(intptr_t)v9353;
	i8 v9355 = v9354+(+17);
	i1 v9356 = *(i1*)(intptr_t)v9355;
	i1 v9357 = (i1)+0;
	if (v9356==v9357) goto c02_0870; else goto c02_086f;

c02_086f:;

	i8 v9358 = (i8)(intptr_t)c02_s01cd;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9358);

	goto c02_086c;

c02_0870:;

c02_086c:;

	i8 v9359 = (i8)(intptr_t)(ws+64);
	i8 v9360 = *(i8*)(intptr_t)v9359;
	i2 v9361 = *(i2*)(intptr_t)v9360;
	i2 v9362 = (i2)+0;
	if (v9361==v9362) goto c02_0875; else goto c02_0874;

c02_0874:;

	i8 v9363 = (i8)(intptr_t)(ws+64);
	i8 v9364 = *(i8*)(intptr_t)v9363;
	i8 v9365 = v9364+(+2);
	i2 v9366 = *(i2*)(intptr_t)v9365;

void f88_MidJump(i8* /* m */, i2 /* label */);
	i8 v9367;
	f88_MidJump(&v9367, v9366);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9367);

	i8 v9368 = (i8)(intptr_t)(ws+64);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	i2 v9370 = *(i2*)(intptr_t)v9369;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9371;
	f132_MidLabel(&v9371, v9370);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9371);

	goto c02_0871;

c02_0875:;

c02_0871:;


void f206_AllocLabel(i2* /* label */);
	i2 v9372;
	f206_AllocLabel(&v9372);
	i8 v9373 = (i8)(intptr_t)(ws+64);
	i8 v9374 = *(i8*)(intptr_t)v9373;
	*(i2*)(intptr_t)v9374 = v9372;

	i8 v9375 = (i8)(intptr_t)(ws+64);
	i8 v9376 = *(i8*)(intptr_t)v9375;
	i8 v9377 = v9376+(+16);
	i1 v9378 = *(i1*)(intptr_t)v9377;
	i8 v9379 = (i8)(intptr_t)(ws+2928);
	i4 v9380 = *(i4*)(intptr_t)v9379;
	i8 v9381 = (i8)(intptr_t)(ws+64);
	i8 v9382 = *(i8*)(intptr_t)v9381;
	i2 v9383 = *(i2*)(intptr_t)v9382;

void f113_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	i8 v9384;
	f113_MidWhencase(&v9384, v9383, v9380, v9378);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9384);

	i1 v9385 = (i1)+6;
	i8 v9386 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9386, v9385);

endsub:;
}
const i1 c02_s01ce[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };

// reduce_18 workspace at ws+3000 length ws+0
void f505_reduce_18(void) {

	i8 v9387 = (i8)(intptr_t)(ws+64);
	i8 v9388 = *(i8*)(intptr_t)v9387;
	i8 v9389 = v9388+(+17);
	i1 v9390 = *(i1*)(intptr_t)v9389;
	i1 v9391 = (i1)+0;
	if (v9390==v9391) goto c02_087a; else goto c02_0879;

c02_0879:;

	i8 v9392 = (i8)(intptr_t)c02_s01ce;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9392);

	goto c02_0876;

c02_087a:;

c02_0876:;

	i8 v9393 = (i8)(intptr_t)(ws+64);
	i8 v9394 = *(i8*)(intptr_t)v9393;
	i2 v9395 = *(i2*)(intptr_t)v9394;
	i2 v9396 = (i2)+0;
	if (v9395==v9396) goto c02_087f; else goto c02_087e;

c02_087e:;

	i8 v9397 = (i8)(intptr_t)(ws+64);
	i8 v9398 = *(i8*)(intptr_t)v9397;
	i8 v9399 = v9398+(+2);
	i2 v9400 = *(i2*)(intptr_t)v9399;

void f88_MidJump(i8* /* m */, i2 /* label */);
	i8 v9401;
	f88_MidJump(&v9401, v9400);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9401);

	i8 v9402 = (i8)(intptr_t)(ws+64);
	i8 v9403 = *(i8*)(intptr_t)v9402;
	i2 v9404 = *(i2*)(intptr_t)v9403;

void f132_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9405;
	f132_MidLabel(&v9405, v9404);

void f437_Generate(i8 /* statement */);
	f437_Generate(v9405);

	goto c02_087b;

c02_087f:;

c02_087b:;

	i2 v9406 = (i2)+0;
	i8 v9407 = (i8)(intptr_t)(ws+64);
	i8 v9408 = *(i8*)(intptr_t)v9407;
	*(i2*)(intptr_t)v9408 = v9406;

	i1 v9409 = (i1)+1;
	i8 v9410 = (i8)(intptr_t)(ws+64);
	i8 v9411 = *(i8*)(intptr_t)v9410;
	i8 v9412 = v9411+(+17);
	*(i1*)(intptr_t)v9412 = v9409;

	i1 v9413 = (i1)+9;
	i8 v9414 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9414, v9413);

	i1 v9415 = (i1)+6;
	i8 v9416 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9416, v9415);

endsub:;
}

// reduce_19 workspace at ws+3000 length ws+0
void f506_reduce_19(void) {

	i8 v9417 = (i8)(intptr_t)(ws+2928);
	i8 v9418 = *(i8*)(intptr_t)v9417;
	i8 v9419 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9419 = v9418;

	i1 v9420 = (i1)+4;
	i8 v9421 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9421, v9420);

endsub:;
}

// reduce_20 workspace at ws+3000 length ws+0
void f507_reduce_20(void) {

	i8 v9422 = (i8)(intptr_t)(ws+2920);
	i8 v9423 = *(i8*)(intptr_t)v9422;
	i8 v9424 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9424 = v9423;

	i8 v9425 = (i8)(intptr_t)(ws+2920);
	i8 v9426 = *(i8*)(intptr_t)v9425;

void f464_Negate(i8 /* node */);
	f464_Negate(v9426);

endsub:;
}

// reduce_21 workspace at ws+3000 length ws+0
void f508_reduce_21(void) {

	i8 v9427 = (i8)(intptr_t)(ws+2936);
	i8 v9428 = *(i8*)(intptr_t)v9427;
	i8 v9429 = (i8)(intptr_t)(ws+2920);
	i8 v9430 = *(i8*)(intptr_t)v9429;
	i2 v9431 = (i2)+0;
	i2 v9432 = (i2)+0;
	i2 v9433 = (i2)+0;
	i1 v9434 = (i1)+0;

void f98_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	i8 v9435;
	f98_MidBand(&v9435, v9434, v9433, v9432, v9431, v9430, v9428);
	i8 v9436 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9436 = v9435;

	i1 v9437 = (i1)+45;
	i8 v9438 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9438, v9437);

endsub:;
}

// reduce_22 workspace at ws+3000 length ws+0
void f509_reduce_22(void) {

	i8 v9439 = (i8)(intptr_t)(ws+2936);
	i8 v9440 = *(i8*)(intptr_t)v9439;
	i8 v9441 = (i8)(intptr_t)(ws+2920);
	i8 v9442 = *(i8*)(intptr_t)v9441;
	i2 v9443 = (i2)+0;
	i2 v9444 = (i2)+0;
	i2 v9445 = (i2)+0;
	i1 v9446 = (i1)+0;

void f122_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	i8 v9447;
	f122_MidBor(&v9447, v9446, v9445, v9444, v9443, v9442, v9440);
	i8 v9448 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9448 = v9447;

	i1 v9449 = (i1)+46;
	i8 v9450 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9450, v9449);

endsub:;
}

// reduce_23 workspace at ws+3000 length ws+0
void f510_reduce_23(void) {

	i8 v9451 = (i8)(intptr_t)(ws+2936);
	i8 v9452 = *(i8*)(intptr_t)v9451;
	i8 v9453 = (i8)(intptr_t)(ws+2920);
	i8 v9454 = *(i8*)(intptr_t)v9453;
	i1 v9455 = (i1)+0;

void f465_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9456;
	f465_ConditionalEq(&v9456, v9455, v9454, v9452);
	i8 v9457 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9457 = v9456;

	i1 v9458 = (i1)+53;
	i8 v9459 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9459, v9458);

endsub:;
}

// reduce_24 workspace at ws+3000 length ws+0
void f511_reduce_24(void) {

	i8 v9460 = (i8)(intptr_t)(ws+2936);
	i8 v9461 = *(i8*)(intptr_t)v9460;
	i8 v9462 = (i8)(intptr_t)(ws+2920);
	i8 v9463 = *(i8*)(intptr_t)v9462;
	i1 v9464 = (i1)+1;

void f465_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9465;
	f465_ConditionalEq(&v9465, v9464, v9463, v9461);
	i8 v9466 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9466 = v9465;

	i1 v9467 = (i1)+54;
	i8 v9468 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9468, v9467);

endsub:;
}

// reduce_25 workspace at ws+3000 length ws+0
void f512_reduce_25(void) {

	i8 v9469 = (i8)(intptr_t)(ws+2936);
	i8 v9470 = *(i8*)(intptr_t)v9469;
	i8 v9471 = (i8)(intptr_t)(ws+2920);
	i8 v9472 = *(i8*)(intptr_t)v9471;
	i1 v9473 = (i1)+0;

void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9474;
	f466_ConditionalLt(&v9474, v9473, v9472, v9470);
	i8 v9475 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9475 = v9474;

	i1 v9476 = (i1)+49;
	i8 v9477 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9477, v9476);

endsub:;
}

// reduce_26 workspace at ws+3000 length ws+0
void f513_reduce_26(void) {

	i8 v9478 = (i8)(intptr_t)(ws+2936);
	i8 v9479 = *(i8*)(intptr_t)v9478;
	i8 v9480 = (i8)(intptr_t)(ws+2920);
	i8 v9481 = *(i8*)(intptr_t)v9480;
	i1 v9482 = (i1)+1;

void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9483;
	f466_ConditionalLt(&v9483, v9482, v9481, v9479);
	i8 v9484 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9484 = v9483;

	i1 v9485 = (i1)+52;
	i8 v9486 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9486, v9485);

endsub:;
}

// reduce_27 workspace at ws+3000 length ws+0
void f514_reduce_27(void) {

	i8 v9487 = (i8)(intptr_t)(ws+2920);
	i8 v9488 = *(i8*)(intptr_t)v9487;
	i8 v9489 = (i8)(intptr_t)(ws+2936);
	i8 v9490 = *(i8*)(intptr_t)v9489;
	i1 v9491 = (i1)+0;

void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9492;
	f466_ConditionalLt(&v9492, v9491, v9490, v9488);
	i8 v9493 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9493 = v9492;

	i1 v9494 = (i1)+51;
	i8 v9495 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9495, v9494);

endsub:;
}

// reduce_28 workspace at ws+3000 length ws+0
void f515_reduce_28(void) {

	i8 v9496 = (i8)(intptr_t)(ws+2920);
	i8 v9497 = *(i8*)(intptr_t)v9496;
	i8 v9498 = (i8)(intptr_t)(ws+2936);
	i8 v9499 = *(i8*)(intptr_t)v9498;
	i1 v9500 = (i1)+1;

void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9501;
	f466_ConditionalLt(&v9501, v9500, v9499, v9497);
	i8 v9502 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9502 = v9501;

	i1 v9503 = (i1)+50;
	i8 v9504 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9504, v9503);

endsub:;
}

// reduce_29 workspace at ws+3000 length ws+0
void f516_reduce_29(void) {

	i8 v9505 = (i8)(intptr_t)(ws+2920);
	i4 v9506 = *(i4*)(intptr_t)v9505;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9507;
	f95_MidConstant(&v9507, v9506);
	i8 v9508 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9508 = v9507;

endsub:;
}

// reduce_30 workspace at ws+3000 length ws+0
void f517_reduce_30(void) {

	i8 v9509 = (i8)(intptr_t)(ws+2928);
	i8 v9510 = *(i8*)(intptr_t)v9509;
	i8 v9511 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9511 = v9510;

	i1 v9512 = (i1)+4;
	i8 v9513 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9513, v9512);

endsub:;
}

// reduce_31 workspace at ws+3000 length ws+0
void f518_reduce_31(void) {

	i1 v9514 = (i1)+110;
	i8 v9515 = (i8)(intptr_t)(ws+2920);
	i8 v9516 = *(i8*)(intptr_t)v9515;

void f453_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);
	i8 v9517;
	f453_Expr1Simple(&v9517, v9516, v9514);
	i8 v9518 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9518 = v9517;

endsub:;
}

// reduce_32 workspace at ws+3000 length ws+0
void f519_reduce_32(void) {

	i1 v9519 = (i1)+105;
	i8 v9520 = (i8)(intptr_t)(ws+2920);
	i8 v9521 = *(i8*)(intptr_t)v9520;

void f453_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);
	i8 v9522;
	f453_Expr1Simple(&v9522, v9521, v9519);
	i8 v9523 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9523 = v9522;

endsub:;
}

// reduce_33 workspace at ws+3000 length ws+0
void f520_reduce_33(void) {

	i8 v9524 = (i8)(intptr_t)(ws+2936);
	i8 v9525 = *(i8*)(intptr_t)v9524;
	i8 v9526 = (i8)(intptr_t)(ws+2920);
	i8 v9527 = *(i8*)(intptr_t)v9526;

void f454_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	i8 v9528;
	f454_ExprAdd(&v9528, v9527, v9525);
	i8 v9529 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9529 = v9528;

	i1 v9530 = (i1)+19;
	i8 v9531 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9531, v9530);

endsub:;
}

// reduce_34 workspace at ws+3000 length ws+0
void f521_reduce_34(void) {

	i8 v9532 = (i8)(intptr_t)(ws+2936);
	i8 v9533 = *(i8*)(intptr_t)v9532;
	i8 v9534 = (i8)(intptr_t)(ws+2920);
	i8 v9535 = *(i8*)(intptr_t)v9534;

void f456_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	i8 v9536;
	f456_ExprSub(&v9536, v9535, v9533);
	i8 v9537 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9537 = v9536;

	i1 v9538 = (i1)+14;
	i8 v9539 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9539, v9538);

endsub:;
}

// reduce_35 workspace at ws+3000 length ws+0
void f522_reduce_35(void) {

	i1 v9540 = (i1)+160;
	i1 v9541 = (i1)+160;
	i8 v9542 = (i8)(intptr_t)(ws+2936);
	i8 v9543 = *(i8*)(intptr_t)v9542;
	i8 v9544 = (i8)(intptr_t)(ws+2920);
	i8 v9545 = *(i8*)(intptr_t)v9544;

void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9546;
	f458_Expr2Simple(&v9546, v9545, v9543, v9541, v9540);
	i8 v9547 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9547 = v9546;

	i1 v9548 = (i1)+24;
	i8 v9549 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9549, v9548);

endsub:;
}

// reduce_36 workspace at ws+3000 length ws+0
void f523_reduce_36(void) {

	i1 v9550 = (i1)+140;
	i1 v9551 = (i1)+135;
	i8 v9552 = (i8)(intptr_t)(ws+2936);
	i8 v9553 = *(i8*)(intptr_t)v9552;
	i8 v9554 = (i8)(intptr_t)(ws+2920);
	i8 v9555 = *(i8*)(intptr_t)v9554;

void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9556;
	f458_Expr2Simple(&v9556, v9555, v9553, v9551, v9550);
	i8 v9557 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9557 = v9556;

	i1 v9558 = (i1)+23;
	i8 v9559 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9559, v9558);

endsub:;
}

// reduce_37 workspace at ws+3000 length ws+0
void f524_reduce_37(void) {

	i1 v9560 = (i1)+150;
	i1 v9561 = (i1)+145;
	i8 v9562 = (i8)(intptr_t)(ws+2936);
	i8 v9563 = *(i8*)(intptr_t)v9562;
	i8 v9564 = (i8)(intptr_t)(ws+2920);
	i8 v9565 = *(i8*)(intptr_t)v9564;

void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9566;
	f458_Expr2Simple(&v9566, v9565, v9563, v9561, v9560);
	i8 v9567 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9567 = v9566;

	i1 v9568 = (i1)+18;
	i8 v9569 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9569, v9568);

endsub:;
}

// reduce_38 workspace at ws+3000 length ws+0
void f525_reduce_38(void) {

	i1 v9570 = (i1)+175;
	i1 v9571 = (i1)+175;
	i8 v9572 = (i8)(intptr_t)(ws+2936);
	i8 v9573 = *(i8*)(intptr_t)v9572;
	i8 v9574 = (i8)(intptr_t)(ws+2920);
	i8 v9575 = *(i8*)(intptr_t)v9574;

void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9576;
	f458_Expr2Simple(&v9576, v9575, v9573, v9571, v9570);
	i8 v9577 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9577 = v9576;

	i1 v9578 = (i1)+48;
	i8 v9579 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9579, v9578);

endsub:;
}

// reduce_39 workspace at ws+3000 length ws+0
void f526_reduce_39(void) {

	i1 v9580 = (i1)+165;
	i1 v9581 = (i1)+165;
	i8 v9582 = (i8)(intptr_t)(ws+2936);
	i8 v9583 = *(i8*)(intptr_t)v9582;
	i8 v9584 = (i8)(intptr_t)(ws+2920);
	i8 v9585 = *(i8*)(intptr_t)v9584;

void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9586;
	f458_Expr2Simple(&v9586, v9585, v9583, v9581, v9580);
	i8 v9587 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9587 = v9586;

	i1 v9588 = (i1)+58;
	i8 v9589 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9589, v9588);

endsub:;
}

// reduce_40 workspace at ws+3000 length ws+0
void f527_reduce_40(void) {

	i1 v9590 = (i1)+170;
	i1 v9591 = (i1)+170;
	i8 v9592 = (i8)(intptr_t)(ws+2936);
	i8 v9593 = *(i8*)(intptr_t)v9592;
	i8 v9594 = (i8)(intptr_t)(ws+2920);
	i8 v9595 = *(i8*)(intptr_t)v9594;

void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9596;
	f458_Expr2Simple(&v9596, v9595, v9593, v9591, v9590);
	i8 v9597 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9597 = v9596;

	i1 v9598 = (i1)+47;
	i8 v9599 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9599, v9598);

endsub:;
}

// reduce_41 workspace at ws+3000 length ws+0
void f528_reduce_41(void) {

	i1 v9600 = (i1)+115;
	i1 v9601 = (i1)+115;
	i8 v9602 = (i8)(intptr_t)(ws+2936);
	i8 v9603 = *(i8*)(intptr_t)v9602;
	i8 v9604 = (i8)(intptr_t)(ws+2920);
	i8 v9605 = *(i8*)(intptr_t)v9604;

void f461_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9606;
	f461_ExprShift(&v9606, v9605, v9603, v9601, v9600);
	i8 v9607 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9607 = v9606;

	i1 v9608 = (i1)+55;
	i8 v9609 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9609, v9608);

endsub:;
}

// reduce_42 workspace at ws+3000 length ws+0
void f529_reduce_42(void) {

	i1 v9610 = (i1)+125;
	i1 v9611 = (i1)+120;
	i8 v9612 = (i8)(intptr_t)(ws+2936);
	i8 v9613 = *(i8*)(intptr_t)v9612;
	i8 v9614 = (i8)(intptr_t)(ws+2920);
	i8 v9615 = *(i8*)(intptr_t)v9614;

void f461_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9616;
	f461_ExprShift(&v9616, v9615, v9613, v9611, v9610);
	i8 v9617 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9617 = v9616;

	i1 v9618 = (i1)+56;
	i8 v9619 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9619, v9618);

endsub:;
}
const i1 c02_s01cf[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };

// reduce_43 workspace at ws+3000 length ws+0
void f530_reduce_43(void) {

	i8 v9620 = (i8)(intptr_t)(ws+2920);
	i8 v9621 = *(i8*)(intptr_t)v9620;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v9621);

	i8 v9622 = (i8)(intptr_t)(ws+2936);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	i8 v9624 = v9623+(+66);
	i1 v9625 = *(i1*)(intptr_t)v9624;
	i1 v9626 = (i1)+40;
	if (v9625==v9626) goto c02_0886; else goto c02_0887;

c02_0887:;

	i8 v9627 = (i8)(intptr_t)(ws+2936);
	i8 v9628 = *(i8*)(intptr_t)v9627;
	i8 v9629 = v9628+(+16);
	i8 v9630 = *(i8*)(intptr_t)v9629;
	i8 v9631 = v9630+(+42);
	i2 v9632 = *(i2*)(intptr_t)v9631;
	i8 v9633 = (i8)(intptr_t)(ws+2920);
	i8 v9634 = *(i8*)(intptr_t)v9633;
	i8 v9635 = v9634+(+42);
	i2 v9636 = *(i2*)(intptr_t)v9635;
	if (v9632==v9636) goto c02_0886; else goto c02_0885;

c02_0885:;

	i8 v9637 = (i8)(intptr_t)(ws+2936);
	i8 v9638 = *(i8*)(intptr_t)v9637;
	i8 v9639 = v9638+(+16);
	i8 v9640 = *(i8*)(intptr_t)v9639;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9641;
	f199_IsPtr(&v9641, v9640);
	i1 v9642 = (i1)+0;
	if (v9641==v9642) goto c02_088f; else goto c02_088d;

c02_088f:;

	i8 v9643 = (i8)(intptr_t)(ws+2920);
	i8 v9644 = *(i8*)(intptr_t)v9643;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9645;
	f199_IsPtr(&v9645, v9644);
	i1 v9646 = (i1)+0;
	if (v9645==v9646) goto c02_088e; else goto c02_088d;

c02_088d:;

	i8 v9647 = (i8)(intptr_t)c02_s01cf;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9647);

	goto c02_0888;

c02_088e:;

c02_0888:;

	i8 v9648 = (i8)(intptr_t)(ws+2920);
	i8 v9649 = *(i8*)(intptr_t)v9648;
	i8 v9650 = v9649+(+42);
	i2 v9651 = *(i2*)(intptr_t)v9650;
	i1 v9652 = v9651;
	i8 v9653 = (i8)(intptr_t)(ws+2936);
	i8 v9654 = *(i8*)(intptr_t)v9653;
	i8 v9655 = (i8)(intptr_t)(ws+2936);
	i8 v9656 = *(i8*)(intptr_t)v9655;
	i8 v9657 = v9656+(+16);
	i8 v9658 = *(i8*)(intptr_t)v9657;

void f201_IsSNum(i1* /* result */, i8 /* type */);
	i1 v9659;
	f201_IsSNum(&v9659, v9658);

void f148_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	i8 v9660;
	f148_MidCCast(&v9660, v9659, v9654, v9652);
	i8 v9661 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9661 = v9660;

	goto c02_0880;

c02_0886:;

	i8 v9662 = (i8)(intptr_t)(ws+2936);
	i8 v9663 = *(i8*)(intptr_t)v9662;
	i8 v9664 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9664 = v9663;

c02_0880:;

	i8 v9665 = (i8)(intptr_t)(ws+2920);
	i8 v9666 = *(i8*)(intptr_t)v9665;
	i8 v9667 = (i8)(intptr_t)(ws+2912);
	i8 v9668 = *(i8*)(intptr_t)v9667;
	i8 v9669 = v9668+(+16);
	*(i8*)(intptr_t)v9669 = v9666;

	i1 v9670 = (i1)+57;
	i8 v9671 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9671, v9670);

endsub:;
}
const i1 c02_s01d0[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };

// reduce_44 workspace at ws+3000 length ws+8
void f531_reduce_44(void) {

	i8 v9672 = (i8)(intptr_t)(ws+2920);
	i8 v9673 = *(i8*)(intptr_t)v9672;

void f205_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9674;
	f205_UndoLValue(&v9674, v9673);
	i8 v9675 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9675 = v9674;

	i8 v9676 = (i8)(intptr_t)(ws+2912);
	i8 v9677 = *(i8*)(intptr_t)v9676;
	i8 v9678 = v9677+(+66);
	i1 v9679 = *(i1*)(intptr_t)v9678;
	i1 v9680 = (i1)+42;
	if (v9679==v9680) goto c02_0893; else goto c02_0894;

c02_0893:;

	i8 v9681 = (i8)(intptr_t)(ws+2912);
	i8 v9682 = *(i8*)(intptr_t)v9681;
	i8 v9683 = *(i8*)(intptr_t)v9682;
	i8 v9684 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9684 = v9683;

	i8 v9685 = (i8)(intptr_t)(ws+3000);
	i8 v9686 = *(i8*)(intptr_t)v9685;
	i8 v9687 = *(i8*)(intptr_t)v9686;

void f202_IsScalar(i1* /* result */, i8 /* type */);
	i1 v9688;
	f202_IsScalar(&v9688, v9687);
	i1 v9689 = (i1)+0;
	if (v9688==v9689) goto c02_0899; else goto c02_0898;

c02_0898:;

	i8 v9690 = (i8)(intptr_t)c02_s01d0;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9690);

	goto c02_0895;

c02_0899:;

c02_0895:;

	goto c02_0890;

c02_0894:;

c02_0890:;

endsub:;
}

// reduce_45 workspace at ws+3000 length ws+0
void f532_reduce_45(void) {

	i8 v9691 = (i8)(intptr_t)(ws+2920);
	i8 v9692 = *(i8*)(intptr_t)v9691;

void f205_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9693;
	f205_UndoLValue(&v9693, v9692);
	i8 v9694 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9694 = v9693;

	i1 v9695 = (i1)+58;
	i8 v9696 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9696, v9695);

endsub:;
}

// reduce_46 workspace at ws+3000 length ws+0
void f533_reduce_46(void) {

	i8 v9697 = (i8)(intptr_t)(ws+2920);
	i8 v9698 = *(i8*)(intptr_t)v9697;
	i8 v9699 = v9698+(+16);
	i8 v9700 = *(i8*)(intptr_t)v9699;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9701;
	f199_IsPtr(&v9701, v9700);
	i1 v9702 = (i1)+0;
	if (v9701==v9702) goto c02_089d; else goto c02_089e;

c02_089d:;


void f467_parser_i_bad_next_prev(void);
	f467_parser_i_bad_next_prev();

	goto c02_089a;

c02_089e:;

c02_089a:;

	i1 v9703 = (i1)+155;
	i8 v9704 = (i8)(intptr_t)(ws+1056);
	i8 v9705 = *(i8*)(intptr_t)v9704;
	i8 v9706 = v9705+(+42);
	i2 v9707 = *(i2*)(intptr_t)v9706;
	i1 v9708 = v9707;
	i8 v9709 = (i8)(intptr_t)(ws+2920);
	i8 v9710 = *(i8*)(intptr_t)v9709;
	i8 v9711 = (i8)(intptr_t)(ws+2920);
	i8 v9712 = *(i8*)(intptr_t)v9711;
	i8 v9713 = v9712+(+16);
	i8 v9714 = *(i8*)(intptr_t)v9713;
	i8 v9715 = *(i8*)(intptr_t)v9714;
	i8 v9716 = v9715+(+44);
	i2 v9717 = *(i2*)(intptr_t)v9716;
	i4 v9718 = v9717;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9719;
	f95_MidConstant(&v9719, v9718);

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9720;
	f147_MidC2Op(&v9720, v9719, v9710, v9708, v9703);
	i8 v9721 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9721 = v9720;

	i8 v9722 = (i8)(intptr_t)(ws+2920);
	i8 v9723 = *(i8*)(intptr_t)v9722;
	i8 v9724 = v9723+(+16);
	i8 v9725 = *(i8*)(intptr_t)v9724;
	i8 v9726 = (i8)(intptr_t)(ws+2912);
	i8 v9727 = *(i8*)(intptr_t)v9726;
	i8 v9728 = v9727+(+16);
	*(i8*)(intptr_t)v9728 = v9725;

endsub:;
}

// reduce_47 workspace at ws+3000 length ws+0
void f534_reduce_47(void) {

	i8 v9729 = (i8)(intptr_t)(ws+2920);
	i8 v9730 = *(i8*)(intptr_t)v9729;
	i8 v9731 = v9730+(+16);
	i8 v9732 = *(i8*)(intptr_t)v9731;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9733;
	f199_IsPtr(&v9733, v9732);
	i1 v9734 = (i1)+0;
	if (v9733==v9734) goto c02_08a2; else goto c02_08a3;

c02_08a2:;


void f467_parser_i_bad_next_prev(void);
	f467_parser_i_bad_next_prev();

	goto c02_089f;

c02_08a3:;

c02_089f:;

	i1 v9735 = (i1)+130;
	i8 v9736 = (i8)(intptr_t)(ws+1056);
	i8 v9737 = *(i8*)(intptr_t)v9736;
	i8 v9738 = v9737+(+42);
	i2 v9739 = *(i2*)(intptr_t)v9738;
	i1 v9740 = v9739;
	i8 v9741 = (i8)(intptr_t)(ws+2920);
	i8 v9742 = *(i8*)(intptr_t)v9741;
	i8 v9743 = (i8)(intptr_t)(ws+2920);
	i8 v9744 = *(i8*)(intptr_t)v9743;
	i8 v9745 = v9744+(+16);
	i8 v9746 = *(i8*)(intptr_t)v9745;
	i8 v9747 = *(i8*)(intptr_t)v9746;
	i8 v9748 = v9747+(+44);
	i2 v9749 = *(i2*)(intptr_t)v9748;
	i4 v9750 = v9749;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9751;
	f95_MidConstant(&v9751, v9750);

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9752;
	f147_MidC2Op(&v9752, v9751, v9742, v9740, v9735);
	i8 v9753 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9753 = v9752;

	i8 v9754 = (i8)(intptr_t)(ws+2920);
	i8 v9755 = *(i8*)(intptr_t)v9754;
	i8 v9756 = v9755+(+16);
	i8 v9757 = *(i8*)(intptr_t)v9756;
	i8 v9758 = (i8)(intptr_t)(ws+2912);
	i8 v9759 = *(i8*)(intptr_t)v9758;
	i8 v9760 = v9759+(+16);
	*(i8*)(intptr_t)v9760 = v9757;

endsub:;
}

// reduce_48 workspace at ws+3000 length ws+0
void f535_reduce_48(void) {

	i8 v9761 = (i8)(intptr_t)(ws+2920);
	i8 v9762 = *(i8*)(intptr_t)v9761;
	i8 v9763 = v9762+(+42);
	i2 v9764 = *(i2*)(intptr_t)v9763;
	i4 v9765 = v9764;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9766;
	f95_MidConstant(&v9766, v9765);
	i8 v9767 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9767 = v9766;

endsub:;
}
const i1 c02_s01d1[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };

// reduce_49 workspace at ws+3000 length ws+0
void f536_reduce_49(void) {

	i8 v9768 = (i8)(intptr_t)(ws+2920);
	i8 v9769 = *(i8*)(intptr_t)v9768;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v9770;
	f198_IsArray(&v9770, v9769);
	i1 v9771 = (i1)+0;
	if (v9770==v9771) goto c02_08a7; else goto c02_08a8;

c02_08a7:;

	i8 v9772 = (i8)(intptr_t)c02_s01d1;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9772);

	goto c02_08a4;

c02_08a8:;

c02_08a4:;

	i8 v9773 = (i8)(intptr_t)(ws+2920);
	i8 v9774 = *(i8*)(intptr_t)v9773;
	i8 v9775 = v9774+(+8);
	i2 v9776 = *(i2*)(intptr_t)v9775;
	i4 v9777 = v9776;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9778;
	f95_MidConstant(&v9778, v9777);
	i8 v9779 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9779 = v9778;

endsub:;
}
const i1 c02_s01d2[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };

// reduce_50 workspace at ws+3000 length ws+0
void f537_reduce_50(void) {

	i8 v9780 = (i8)(intptr_t)(ws+2920);
	i8 v9781 = *(i8*)(intptr_t)v9780;
	i8 v9782 = v9781+(+46);
	i1 v9783 = *(i1*)(intptr_t)v9782;

	if (v9783 != +7) goto c02_08aa;

	i8 v9784 = (i8)(intptr_t)(ws+2920);
	i8 v9785 = *(i8*)(intptr_t)v9784;
	i4 v9786 = *(i4*)(intptr_t)v9785;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9787;
	f95_MidConstant(&v9787, v9786);
	i8 v9788 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9788 = v9787;

	goto c02_08a9;

c02_08aa:;

	if (v9783 != +28) goto c02_08ab;

	i8 v9789 = (i8)(intptr_t)(ws+2920);
	i8 v9790 = *(i8*)(intptr_t)v9789;
	i2 v9791 = (i2)+0;

void f123_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	i8 v9792;
	f123_MidAddress(&v9792, v9791, v9790);
	i8 v9793 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9793 = v9792;

	i8 v9794 = (i8)(intptr_t)(ws+2920);
	i8 v9795 = *(i8*)(intptr_t)v9794;
	i8 v9796 = *(i8*)(intptr_t)v9795;

void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9797;
	f441_MakePointerType(&v9797, v9796);
	i8 v9798 = (i8)(intptr_t)(ws+2912);
	i8 v9799 = *(i8*)(intptr_t)v9798;
	i8 v9800 = v9799+(+16);
	*(i8*)(intptr_t)v9800 = v9797;

	i8 v9801 = (i8)(intptr_t)(ws+2912);
	i8 v9802 = *(i8*)(intptr_t)v9801;

void f204_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9803;
	f204_MakeLValue(&v9803, v9802);
	i8 v9804 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9804 = v9803;

	goto c02_08a9;

c02_08ab:;


void f55_StartError(void);
	f55_StartError();

	i8 v9805 = (i8)(intptr_t)(ws+2920);
	i8 v9806 = *(i8*)(intptr_t)v9805;
	i8 v9807 = v9806+(+48);
	i8 v9808 = *(i8*)(intptr_t)v9807;

void f11_print(i8 /* ptr */);
	f11_print(v9808);

	i8 v9809 = (i8)(intptr_t)c02_s01d2;

void f11_print(i8 /* ptr */);
	f11_print(v9809);


void f56_EndError(void);
	f56_EndError();

c02_08a9:;


endsub:;
}
const i1 c02_s01d3[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };

// reduce_51 workspace at ws+3000 length ws+0
void f538_reduce_51(void) {

	i8 v9810 = (i8)(intptr_t)(ws+2928);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = v9811+(+16);
	i8 v9813 = *(i8*)(intptr_t)v9812;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9814;
	f199_IsPtr(&v9814, v9813);
	i1 v9815 = (i1)+0;
	if (v9814==v9815) goto c02_08af; else goto c02_08b0;

c02_08af:;

	i8 v9816 = (i8)(intptr_t)c02_s01d3;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9816);

	goto c02_08ac;

c02_08b0:;

c02_08ac:;

	i8 v9817 = (i8)(intptr_t)(ws+2928);
	i8 v9818 = *(i8*)(intptr_t)v9817;

void f204_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9819;
	f204_MakeLValue(&v9819, v9818);
	i8 v9820 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9820 = v9819;

	i1 v9821 = (i1)+5;
	i8 v9822 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9822, v9821);

endsub:;
}
const i1 c02_s01d4[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
const i1 c02_s01d5[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };

// reduce_52 workspace at ws+3000 length ws+48
void f539_reduce_52(void) {

	i8 v9823 = (i8)(intptr_t)(ws+2944);
	i8 v9824 = *(i8*)(intptr_t)v9823;
	i8 v9825 = v9824+(+16);
	i8 v9826 = *(i8*)(intptr_t)v9825;
	i8 v9827 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9827 = v9826;

	i8 v9828 = (i8)(intptr_t)(ws+2944);
	i8 v9829 = *(i8*)(intptr_t)v9828;

void f205_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9830;
	f205_UndoLValue(&v9830, v9829);
	i8 v9831 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9831 = v9830;

	i8 v9832 = (i8)(intptr_t)(ws+3000);
	i8 v9833 = *(i8*)(intptr_t)v9832;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v9834;
	f198_IsArray(&v9834, v9833);
	i1 v9835 = (i1)+0;
	if (v9834==v9835) goto c02_08b4; else goto c02_08b5;

c02_08b4:;


void f55_StartError(void);
	f55_StartError();

	i8 v9836 = (i8)(intptr_t)c02_s01d4;

void f11_print(i8 /* ptr */);
	f11_print(v9836);

	i8 v9837 = (i8)(intptr_t)(ws+3000);
	i8 v9838 = *(i8*)(intptr_t)v9837;
	i8 v9839 = v9838+(+48);
	i8 v9840 = *(i8*)(intptr_t)v9839;

void f11_print(i8 /* ptr */);
	f11_print(v9840);


void f56_EndError(void);
	f56_EndError();

	goto c02_08b1;

c02_08b5:;

c02_08b1:;

	i8 v9841 = (i8)(intptr_t)(ws+2928);
	i8 v9842 = *(i8*)(intptr_t)v9841;
	i8 v9843 = (i8)(intptr_t)(ws+3000);
	i8 v9844 = *(i8*)(intptr_t)v9843;
	i8 v9845 = v9844+(+16);
	i8 v9846 = *(i8*)(intptr_t)v9845;

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9846, v9842);

	i8 v9847 = (i8)(intptr_t)(ws+2928);
	i8 v9848 = *(i8*)(intptr_t)v9847;
	i8 v9849 = v9848+(+16);
	i8 v9850 = *(i8*)(intptr_t)v9849;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v9851;
	f200_IsNum(&v9851, v9850);
	i1 v9852 = (i1)+0;
	if (v9851==v9852) goto c02_08b9; else goto c02_08ba;

c02_08b9:;

	i8 v9853 = (i8)(intptr_t)c02_s01d5;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v9853);

	goto c02_08b6;

c02_08ba:;

c02_08b6:;

	i8 v9854 = (i8)(intptr_t)(ws+3000);
	i8 v9855 = *(i8*)(intptr_t)v9854;
	i8 v9856 = *(i8*)(intptr_t)v9855;
	i8 v9857 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9857 = v9856;

	i8 v9858 = (i8)(intptr_t)(ws+1056);
	i8 v9859 = *(i8*)(intptr_t)v9858;
	i8 v9860 = v9859+(+42);
	i2 v9861 = *(i2*)(intptr_t)v9860;
	i1 v9862 = v9861;
	i8 v9863 = (i8)(intptr_t)(ws+3024);
	*(i1*)(intptr_t)v9863 = v9862;

	i1 v9864 = (i1)+160;
	i8 v9865 = (i8)(intptr_t)(ws+3024);
	i1 v9866 = *(i1*)(intptr_t)v9865;
	i8 v9867 = (i8)(intptr_t)(ws+1056);
	i8 v9868 = *(i8*)(intptr_t)v9867;
	i8 v9869 = v9868+(+42);
	i2 v9870 = *(i2*)(intptr_t)v9869;
	i1 v9871 = v9870;
	i8 v9872 = (i8)(intptr_t)(ws+2928);
	i8 v9873 = *(i8*)(intptr_t)v9872;
	i1 v9874 = (i1)+0;

void f148_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	i8 v9875;
	f148_MidCCast(&v9875, v9874, v9873, v9871);
	i8 v9876 = (i8)(intptr_t)(ws+3016);
	i8 v9877 = *(i8*)(intptr_t)v9876;
	i8 v9878 = v9877+(+44);
	i2 v9879 = *(i2*)(intptr_t)v9878;
	i4 v9880 = v9879;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9881;
	f95_MidConstant(&v9881, v9880);

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9882;
	f147_MidC2Op(&v9882, v9881, v9875, v9866, v9864);
	i8 v9883 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9883 = v9882;

	i8 v9884 = (i8)(intptr_t)(ws+1056);
	i8 v9885 = *(i8*)(intptr_t)v9884;
	i8 v9886 = (i8)(intptr_t)(ws+3032);
	i8 v9887 = *(i8*)(intptr_t)v9886;
	i8 v9888 = v9887+(+16);
	*(i8*)(intptr_t)v9888 = v9885;

	i1 v9889 = (i1)+155;
	i8 v9890 = (i8)(intptr_t)(ws+3024);
	i1 v9891 = *(i1*)(intptr_t)v9890;
	i8 v9892 = (i8)(intptr_t)(ws+3008);
	i8 v9893 = *(i8*)(intptr_t)v9892;
	i8 v9894 = (i8)(intptr_t)(ws+3032);
	i8 v9895 = *(i8*)(intptr_t)v9894;

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9896;
	f147_MidC2Op(&v9896, v9895, v9893, v9891, v9889);
	i8 v9897 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9897 = v9896;

	i8 v9898 = (i8)(intptr_t)(ws+3016);
	i8 v9899 = *(i8*)(intptr_t)v9898;

void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9900;
	f441_MakePointerType(&v9900, v9899);
	i8 v9901 = (i8)(intptr_t)(ws+3040);
	i8 v9902 = *(i8*)(intptr_t)v9901;
	i8 v9903 = v9902+(+16);
	*(i8*)(intptr_t)v9903 = v9900;

	i8 v9904 = (i8)(intptr_t)(ws+3040);
	i8 v9905 = *(i8*)(intptr_t)v9904;

void f204_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9906;
	f204_MakeLValue(&v9906, v9905);
	i8 v9907 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9907 = v9906;

	i1 v9908 = (i1)+17;
	i8 v9909 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9909, v9908);

	i1 v9910 = (i1)+5;
	i8 v9911 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9911, v9910);

endsub:;
}
const i1 c02_s01d6[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s01d7[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
const i1 c02_s01d8[] = { 0x27,0 };

// reduce_53 workspace at ws+3000 length ws+24
void f540_reduce_53(void) {

	i8 v9912 = (i8)(intptr_t)(ws+2936);
	i8 v9913 = *(i8*)(intptr_t)v9912;
	i8 v9914 = v9913+(+16);
	i8 v9915 = *(i8*)(intptr_t)v9914;
	i8 v9916 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9916 = v9915;

	i8 v9917 = (i8)(intptr_t)(ws+2936);
	i8 v9918 = *(i8*)(intptr_t)v9917;

void f205_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9919;
	f205_UndoLValue(&v9919, v9918);
	i8 v9920 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9920 = v9919;

c02_08bd:;

	i8 v9921 = (i8)(intptr_t)(ws+3000);
	i8 v9922 = *(i8*)(intptr_t)v9921;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9923;
	f199_IsPtr(&v9923, v9922);
	i1 v9924 = (i1)+0;
	if (v9923==v9924) goto c02_08c0; else goto c02_08bf;

c02_08bf:;

	i8 v9925 = (i8)(intptr_t)(ws+3000);
	i8 v9926 = *(i8*)(intptr_t)v9925;
	i8 v9927 = *(i8*)(intptr_t)v9926;
	i8 v9928 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9928 = v9927;

	i8 v9929 = (i8)(intptr_t)(ws+3000);
	i8 v9930 = *(i8*)(intptr_t)v9929;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v9930);

	i8 v9931 = (i8)(intptr_t)(ws+1056);
	i8 v9932 = *(i8*)(intptr_t)v9931;
	i8 v9933 = v9932+(+42);
	i2 v9934 = *(i2*)(intptr_t)v9933;
	i1 v9935 = v9934;
	i8 v9936 = (i8)(intptr_t)(ws+3008);
	i8 v9937 = *(i8*)(intptr_t)v9936;

void f133_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	i8 v9938;
	f133_MidLoad(&v9938, v9937, v9935);
	i8 v9939 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9939 = v9938;

	goto c02_08bd;

c02_08c0:;

	i8 v9940 = (i8)(intptr_t)(ws+3000);
	i8 v9941 = *(i8*)(intptr_t)v9940;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v9941);

	i8 v9942 = (i8)(intptr_t)(ws+3000);
	i8 v9943 = *(i8*)(intptr_t)v9942;

void f203_IsRecord(i1* /* result */, i8 /* type */);
	i1 v9944;
	f203_IsRecord(&v9944, v9943);
	i1 v9945 = (i1)+0;
	if (v9944==v9945) goto c02_08c4; else goto c02_08c5;

c02_08c4:;


void f55_StartError(void);
	f55_StartError();

	i8 v9946 = (i8)(intptr_t)(ws+3000);
	i8 v9947 = *(i8*)(intptr_t)v9946;
	i8 v9948 = v9947+(+48);
	i8 v9949 = *(i8*)(intptr_t)v9948;

void f11_print(i8 /* ptr */);
	f11_print(v9949);

	i8 v9950 = (i8)(intptr_t)c02_s01d6;

void f11_print(i8 /* ptr */);
	f11_print(v9950);


void f56_EndError(void);
	f56_EndError();

	goto c02_08c1;

c02_08c5:;

c02_08c1:;

	i8 v9951 = (i8)(intptr_t)(ws+3000);
	i8 v9952 = *(i8*)(intptr_t)v9951;
	i8 v9953 = (i8)(intptr_t)(ws+2920);
	i8 v9954 = *(i8*)(intptr_t)v9953;

void f190_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v9955;
	f190_LookupSymbol(&v9955, v9954, v9952);
	i8 v9956 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9956 = v9955;

	i8 v9957 = (i8)(intptr_t)(ws+3016);
	i8 v9958 = *(i8*)(intptr_t)v9957;
	i8 v9959 = (i8)+0;
	if (v9958==v9959) goto c02_08c9; else goto c02_08ca;

c02_08c9:;


void f55_StartError(void);
	f55_StartError();

	i8 v9960 = (i8)(intptr_t)(ws+3000);
	i8 v9961 = *(i8*)(intptr_t)v9960;
	i8 v9962 = v9961+(+48);
	i8 v9963 = *(i8*)(intptr_t)v9962;

void f11_print(i8 /* ptr */);
	f11_print(v9963);

	i8 v9964 = (i8)(intptr_t)c02_s01d7;

void f11_print(i8 /* ptr */);
	f11_print(v9964);

	i8 v9965 = (i8)(intptr_t)(ws+2920);
	i8 v9966 = *(i8*)(intptr_t)v9965;

void f11_print(i8 /* ptr */);
	f11_print(v9966);

	i8 v9967 = (i8)(intptr_t)c02_s01d8;

void f11_print(i8 /* ptr */);
	f11_print(v9967);


void f56_EndError(void);
	f56_EndError();

	goto c02_08c6;

c02_08ca:;

c02_08c6:;

	i8 v9968 = (i8)(intptr_t)(ws+2920);
	i8 v9969 = *(i8*)(intptr_t)v9968;

void f32_Free(i8 /* block */);
	f32_Free(v9969);

	i1 v9970 = (i1)+155;
	i8 v9971 = (i8)(intptr_t)(ws+1056);
	i8 v9972 = *(i8*)(intptr_t)v9971;
	i8 v9973 = v9972+(+42);
	i2 v9974 = *(i2*)(intptr_t)v9973;
	i1 v9975 = v9974;
	i8 v9976 = (i8)(intptr_t)(ws+3008);
	i8 v9977 = *(i8*)(intptr_t)v9976;
	i8 v9978 = (i8)(intptr_t)(ws+3016);
	i8 v9979 = *(i8*)(intptr_t)v9978;
	i8 v9980 = v9979+(+32);
	i2 v9981 = *(i2*)(intptr_t)v9980;
	i4 v9982 = v9981;

void f95_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9983;
	f95_MidConstant(&v9983, v9982);

void f147_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9984;
	f147_MidC2Op(&v9984, v9983, v9977, v9975, v9970);
	i8 v9985 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9985 = v9984;

	i8 v9986 = (i8)(intptr_t)(ws+3016);
	i8 v9987 = *(i8*)(intptr_t)v9986;
	i8 v9988 = *(i8*)(intptr_t)v9987;

void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9989;
	f441_MakePointerType(&v9989, v9988);
	i8 v9990 = (i8)(intptr_t)(ws+2912);
	i8 v9991 = *(i8*)(intptr_t)v9990;
	i8 v9992 = v9991+(+16);
	*(i8*)(intptr_t)v9992 = v9989;

	i8 v9993 = (i8)(intptr_t)(ws+2912);
	i8 v9994 = *(i8*)(intptr_t)v9993;

void f204_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9995;
	f204_MakeLValue(&v9995, v9994);
	i8 v9996 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9996 = v9995;

	i1 v9997 = (i1)+8;
	i8 v9998 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v9998, v9997);

endsub:;
}

// reduce_54 workspace at ws+3000 length ws+0
void f541_reduce_54(void) {

	i8 v9999 = (i8)(intptr_t)(ws+2920);
	i8 v10000 = *(i8*)(intptr_t)v9999;

void f101_MidString(i8* /* m */, i8 /* text */);
	i8 v10001;
	f101_MidString(&v10001, v10000);
	i8 v10002 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10002 = v10001;

	i8 v10003 = (i8)(intptr_t)(ws+1040);
	i8 v10004 = *(i8*)(intptr_t)v10003;

void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v10005;
	f441_MakePointerType(&v10005, v10004);
	i8 v10006 = (i8)(intptr_t)(ws+2912);
	i8 v10007 = *(i8*)(intptr_t)v10006;
	i8 v10008 = v10007+(+16);
	*(i8*)(intptr_t)v10008 = v10005;

endsub:;
}

// reduce_55 workspace at ws+3000 length ws+0
void f542_reduce_55(void) {

	i8 v10009 = (i8)(intptr_t)(ws+2920);
	i8 v10010 = *(i8*)(intptr_t)v10009;
	i8 v10011 = v10010+(+66);
	i1 v10012 = *(i1*)(intptr_t)v10011;
	i1 v10013 = (i1)+40;
	if (v10012==v10013) goto c02_08cf; else goto c02_08ce;

c02_08ce:;


void f468_parser_i_constant_error(void);
	f468_parser_i_constant_error();

	goto c02_08cb;

c02_08cf:;

c02_08cb:;

	i8 v10014 = (i8)(intptr_t)(ws+2920);
	i8 v10015 = *(i8*)(intptr_t)v10014;
	i4 v10016 = *(i4*)(intptr_t)v10015;
	i8 v10017 = (i8)(intptr_t)(ws+2912);
	*(i4*)(intptr_t)v10017 = v10016;

	i8 v10018 = (i8)(intptr_t)(ws+2920);
	i8 v10019 = *(i8*)(intptr_t)v10018;

void f140_Discard(i8 /* node */);
	f140_Discard(v10019);

endsub:;
}

// reduce_56 workspace at ws+3000 length ws+0
void f543_reduce_56(void) {

	i1 v10020 = (i1)+7;
	i8 v10021 = (i8)(intptr_t)(ws+2944);
	i8 v10022 = *(i8*)(intptr_t)v10021;
	i8 v10023 = v10022+(+46);
	*(i1*)(intptr_t)v10023 = v10020;

	i8 v10024 = (i8)(intptr_t)(ws+2928);
	i4 v10025 = *(i4*)(intptr_t)v10024;
	i8 v10026 = (i8)(intptr_t)(ws+2944);
	i8 v10027 = *(i8*)(intptr_t)v10026;
	*(i4*)(intptr_t)v10027 = v10025;

	i1 v10028 = (i1)+2;
	i8 v10029 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10029, v10028);

	i1 v10030 = (i1)+22;
	i8 v10031 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10031, v10030);

endsub:;
}
const i1 c02_s01d9[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };

// reduce_57 workspace at ws+3000 length ws+0
void f544_reduce_57(void) {

	i8 v10032 = (i8)(intptr_t)(ws+2944);
	i4 v10033 = *(i4*)(intptr_t)v10032;
	i8 v10034 = (i8)(intptr_t)(ws+2928);
	i4 v10035 = *(i4*)(intptr_t)v10034;
	if ((s4)v10033<(s4)v10035) goto c02_08d4; else goto c02_08d3;

c02_08d3:;

	i8 v10036 = (i8)(intptr_t)c02_s01d9;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10036);

	goto c02_08d0;

c02_08d4:;

c02_08d0:;

	i8 v10037 = (i8)(intptr_t)(ws+2944);
	i4 v10038 = *(i4*)(intptr_t)v10037;
	i8 v10039 = (i8)(intptr_t)(ws+2928);
	i4 v10040 = *(i4*)(intptr_t)v10039;

void f213_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	i8 v10041;
	f213_ArchGuessIntType(&v10041, v10040, v10038);
	i8 v10042 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10042 = v10041;

	i1 v10043 = (i1)+16;
	i8 v10044 = (i8)(intptr_t)(ws+2952);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10044, v10043);

	i1 v10045 = (i1)+44;
	i8 v10046 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10046, v10045);

	i1 v10047 = (i1)+4;
	i8 v10048 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10048, v10047);

endsub:;
}
const i1 c02_s01da[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
const i1 c02_s01db[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };

// reduce_58 workspace at ws+3000 length ws+8
void f545_reduce_58(void) {

	i8 v10049 = (i8)(intptr_t)(ws+2920);
	i8 v10050 = *(i8*)(intptr_t)v10049;
	i8 v10051 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10051 = v10050;

	i8 v10052 = (i8)(intptr_t)(ws+3000);
	i8 v10053 = *(i8*)(intptr_t)v10052;
	i8 v10054 = v10053+(+46);
	i1 v10055 = *(i1*)(intptr_t)v10054;
	i1 v10056 = (i1)+0;
	if (v10055==v10056) goto c02_08d8; else goto c02_08d9;

c02_08d8:;

	i1 v10057 = (i1)+30;
	i8 v10058 = (i8)(intptr_t)(ws+3000);
	i8 v10059 = *(i8*)(intptr_t)v10058;
	i8 v10060 = v10059+(+46);
	*(i1*)(intptr_t)v10060 = v10057;

	i1 v10061 = (i1)+1;
	i8 v10062 = (i8)(intptr_t)(ws+3000);
	i8 v10063 = *(i8*)(intptr_t)v10062;
	i8 v10064 = v10063+(+40);
	*(i1*)(intptr_t)v10064 = v10061;

	goto c02_08d5;

c02_08d9:;

c02_08d5:;

	i8 v10065 = (i8)(intptr_t)(ws+3000);
	i8 v10066 = *(i8*)(intptr_t)v10065;
	i8 v10067 = v10066+(+46);
	i1 v10068 = *(i1*)(intptr_t)v10067;
	i1 v10069 = (i1)+30;
	if (v10068==v10069) goto c02_08de; else goto c02_08dd;

c02_08dd:;


void f55_StartError(void);
	f55_StartError();

	i8 v10070 = (i8)(intptr_t)c02_s01da;

void f11_print(i8 /* ptr */);
	f11_print(v10070);

	i8 v10071 = (i8)(intptr_t)(ws+3000);
	i8 v10072 = *(i8*)(intptr_t)v10071;
	i8 v10073 = v10072+(+48);
	i8 v10074 = *(i8*)(intptr_t)v10073;

void f11_print(i8 /* ptr */);
	f11_print(v10074);

	i8 v10075 = (i8)(intptr_t)c02_s01db;

void f11_print(i8 /* ptr */);
	f11_print(v10075);


void f56_EndError(void);
	f56_EndError();

	goto c02_08da;

c02_08de:;

c02_08da:;

	i8 v10076 = (i8)(intptr_t)(ws+3000);
	i8 v10077 = *(i8*)(intptr_t)v10076;
	i8 v10078 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10078 = v10077;

endsub:;
}

// reduce_59 workspace at ws+3000 length ws+0
void f546_reduce_59(void) {

	i8 v10079 = (i8)(intptr_t)(ws+2928);
	i8 v10080 = *(i8*)(intptr_t)v10079;

void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v10081;
	f441_MakePointerType(&v10081, v10080);
	i8 v10082 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10082 = v10081;

	i1 v10083 = (i1)+5;
	i8 v10084 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10084, v10083);

endsub:;
}

// reduce_60 workspace at ws+3000 length ws+0
void f547_reduce_60(void) {

	i8 v10085 = (i8)(intptr_t)(ws+2944);
	i8 v10086 = *(i8*)(intptr_t)v10085;
	i8 v10087 = (i8)(intptr_t)(ws+2928);
	i4 v10088 = *(i4*)(intptr_t)v10087;
	i2 v10089 = (s2)(s4)v10088;

void f442_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	i8 v10090;
	f442_MakeArrayType(&v10090, v10089, v10086);
	i8 v10091 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10091 = v10090;

	i1 v10092 = (i1)+17;
	i8 v10093 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10093, v10092);

	i1 v10094 = (i1)+5;
	i8 v10095 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10095, v10094);

endsub:;
}

// reduce_61 workspace at ws+3000 length ws+0
void f548_reduce_61(void) {

	i8 v10096 = (i8)(intptr_t)(ws+2936);
	i8 v10097 = *(i8*)(intptr_t)v10096;
	i2 v10098 = (i2)+0;

void f442_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	i8 v10099;
	f442_MakeArrayType(&v10099, v10098, v10097);
	i8 v10100 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10100 = v10099;

	i1 v10101 = (i1)+17;
	i8 v10102 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10102, v10101);

	i1 v10103 = (i1)+5;
	i8 v10104 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10104, v10103);

endsub:;
}
const i1 c02_s01dc[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };

// reduce_62 workspace at ws+3000 length ws+0
void f549_reduce_62(void) {

	i8 v10105 = (i8)(intptr_t)(ws+2920);
	i8 v10106 = *(i8*)(intptr_t)v10105;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v10107;
	f198_IsArray(&v10107, v10106);
	i1 v10108 = (i1)+0;
	if (v10107==v10108) goto c02_08e2; else goto c02_08e3;

c02_08e2:;


void f55_StartError(void);
	f55_StartError();

	i8 v10109 = (i8)(intptr_t)(ws+2920);
	i8 v10110 = *(i8*)(intptr_t)v10109;
	i8 v10111 = v10110+(+48);
	i8 v10112 = *(i8*)(intptr_t)v10111;

void f11_print(i8 /* ptr */);
	f11_print(v10112);

	i8 v10113 = (i8)(intptr_t)c02_s01dc;

void f11_print(i8 /* ptr */);
	f11_print(v10113);


void f56_EndError(void);
	f56_EndError();

	goto c02_08df;

c02_08e3:;

c02_08df:;

	i8 v10114 = (i8)(intptr_t)(ws+2920);
	i8 v10115 = *(i8*)(intptr_t)v10114;
	i8 v10116 = v10115+(+16);
	i8 v10117 = *(i8*)(intptr_t)v10116;
	i8 v10118 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10118 = v10117;

endsub:;
}

// reduce_63 workspace at ws+3000 length ws+8
void f550_reduce_63(void) {

	i8 v10119 = (i8)+0;
	i8 v10120 = (i8)(intptr_t)(ws+2944);
	i8 v10121 = *(i8*)(intptr_t)v10120;
	i8 v10122 = (i8)(intptr_t)(ws+2928);
	i8 v10123 = *(i8*)(intptr_t)v10122;

void f193_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	i8 v10124;
	f193_AddAlias(&v10124, v10123, v10121, v10119);
	i8 v10125 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10125 = v10124;

	i1 v10126 = (i1)+64;
	i8 v10127 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10127, v10126);

	i1 v10128 = (i1)+22;
	i8 v10129 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10129, v10128);

endsub:;
}

// reduce_64 workspace at ws+3000 length ws+0
void f551_reduce_64(void) {

	i8 v10130 = (i8)+0;
	i8 v10131 = (i8)(intptr_t)(ws+2920);
	i8 v10132 = *(i8*)(intptr_t)v10131;

void f192_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10133;
	f192_AddSymbol(&v10133, v10132, v10130);
	i8 v10134 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10134 = v10133;

endsub:;
}
const i1 c02_s01dd[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s01de[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };

// reduce_65 workspace at ws+3000 length ws+16
void f552_reduce_65(void) {

	i8 v10135 = (i8)(intptr_t)(ws+2920);
	i8 v10136 = *(i8*)(intptr_t)v10135;
	i8 v10137 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10137 = v10136;

	i8 v10138 = (i8)+0;
	i8 v10139 = (i8)(intptr_t)(ws+3000);
	i8 v10140 = *(i8*)(intptr_t)v10139;

void f190_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10141;
	f190_LookupSymbol(&v10141, v10140, v10138);
	i8 v10142 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10142 = v10141;

	i8 v10143 = (i8)(intptr_t)(ws+3008);
	i8 v10144 = *(i8*)(intptr_t)v10143;
	i8 v10145 = (i8)+0;
	if (v10144==v10145) goto c02_08e7; else goto c02_08e8;

c02_08e7:;


void f55_StartError(void);
	f55_StartError();

	i8 v10146 = (i8)(intptr_t)c02_s01dd;

void f11_print(i8 /* ptr */);
	f11_print(v10146);

	i8 v10147 = (i8)(intptr_t)(ws+3000);
	i8 v10148 = *(i8*)(intptr_t)v10147;

void f11_print(i8 /* ptr */);
	f11_print(v10148);

	i8 v10149 = (i8)(intptr_t)c02_s01de;

void f11_print(i8 /* ptr */);
	f11_print(v10149);


void f56_EndError(void);
	f56_EndError();

	goto c02_08e4;

c02_08e8:;

c02_08e4:;

	i8 v10150 = (i8)(intptr_t)(ws+3000);
	i8 v10151 = *(i8*)(intptr_t)v10150;

void f32_Free(i8 /* block */);
	f32_Free(v10151);

	i8 v10152 = (i8)(intptr_t)(ws+3008);
	i8 v10153 = *(i8*)(intptr_t)v10152;
	i8 v10154 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10154 = v10153;

endsub:;
}

// reduce_66 workspace at ws+3000 length ws+16
void f553_reduce_66(void) {

	i8 v10155 = (i8)(intptr_t)(ws+2920);
	i8 v10156 = *(i8*)(intptr_t)v10155;
	i8 v10157 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10157 = v10156;

	i8 v10158 = (i8)+0;
	i8 v10159 = (i8)(intptr_t)(ws+3000);
	i8 v10160 = *(i8*)(intptr_t)v10159;

void f190_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10161;
	f190_LookupSymbol(&v10161, v10160, v10158);
	i8 v10162 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10162 = v10161;

	i8 v10163 = (i8)(intptr_t)(ws+3008);
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = (i8)+0;
	if (v10164==v10165) goto c02_08ec; else goto c02_08ed;

c02_08ec:;

	i8 v10166 = (i8)+0;
	i8 v10167 = (i8)(intptr_t)(ws+3000);
	i8 v10168 = *(i8*)(intptr_t)v10167;

void f192_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10169;
	f192_AddSymbol(&v10169, v10168, v10166);
	i8 v10170 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10170 = v10169;

	goto c02_08e9;

c02_08ed:;

	i8 v10171 = (i8)(intptr_t)(ws+3000);
	i8 v10172 = *(i8*)(intptr_t)v10171;

void f32_Free(i8 /* block */);
	f32_Free(v10172);

c02_08e9:;

	i8 v10173 = (i8)(intptr_t)(ws+3008);
	i8 v10174 = *(i8*)(intptr_t)v10173;
	i8 v10175 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10175 = v10174;

endsub:;
}
const i1 c02_s01df[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };

// reduce_67 workspace at ws+3000 length ws+0
void f554_reduce_67(void) {

	i8 v10176 = (i8)(intptr_t)(ws+2920);
	i8 v10177 = *(i8*)(intptr_t)v10176;
	i8 v10178 = v10177+(+46);
	i1 v10179 = *(i1*)(intptr_t)v10178;
	i1 v10180 = (i1)+28;
	if (v10179==v10180) goto c02_08f1; else goto c02_08f2;

c02_08f1:;

	i8 v10181 = (i8)(intptr_t)(ws+2920);
	i8 v10182 = *(i8*)(intptr_t)v10181;
	i8 v10183 = *(i8*)(intptr_t)v10182;
	i8 v10184 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10184 = v10183;

	goto c02_08ee;

c02_08f2:;

c02_08ee:;

	i8 v10185 = (i8)(intptr_t)(ws+2920);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	i8 v10187 = v10186+(+46);
	i1 v10188 = *(i1*)(intptr_t)v10187;
	i1 v10189 = (i1)+30;
	if (v10188==v10189) goto c02_08f7; else goto c02_08f6;

c02_08f6:;

	i8 v10190 = (i8)(intptr_t)c02_s01df;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10190);

	goto c02_08f3;

c02_08f7:;

c02_08f3:;

	i8 v10191 = (i8)(intptr_t)(ws+2920);
	i8 v10192 = *(i8*)(intptr_t)v10191;
	i8 v10193 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10193 = v10192;

endsub:;
}

// reduce_68 workspace at ws+3000 length ws+0
void f555_reduce_68(void) {

	i8 v10194 = (i8)(intptr_t)(ws+2928);
	i8 v10195 = *(i8*)(intptr_t)v10194;
	i8 v10196 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10196 = v10195;

	i1 v10197 = (i1)+4;
	i8 v10198 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10198, v10197);

endsub:;
}
const i1 c02_s01e0[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };

// reduce_69 workspace at ws+3000 length ws+16
void f556_reduce_69(void) {

	i8 v10199 = (i8)(intptr_t)(ws+80);
	i8 v10200 = *(i8*)(intptr_t)v10199;
	i8 v10201 = *(i8*)(intptr_t)v10200;
	i8 v10202 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10202 = v10201;

	i1 v10203 = (i1)+1;
	i8 v10204 = (i8)(intptr_t)(ws+80);
	i8 v10205 = *(i8*)(intptr_t)v10204;
	i8 v10206 = v10205+(+33);
	*(i1*)(intptr_t)v10206 = v10203;


void f469_i_check_sub_call_args(void);
	f469_i_check_sub_call_args();

	i8 v10207 = (i8)(intptr_t)(ws+3000);
	i8 v10208 = *(i8*)(intptr_t)v10207;
	i8 v10209 = v10208+(+89);
	i1 v10210 = *(i1*)(intptr_t)v10209;
	i1 v10211 = (i1)+1;
	if (v10210==v10211) goto c02_08fc; else goto c02_08fb;

c02_08fb:;

	i8 v10212 = (i8)(intptr_t)c02_s01e0;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10212);

	goto c02_08f8;

c02_08fc:;

c02_08f8:;

	i8 v10213 = (i8)(intptr_t)(ws+3000);
	i8 v10214 = *(i8*)(intptr_t)v10213;
	i8 v10215 = v10214+(+48);
	i8 v10216 = *(i8*)(intptr_t)v10215;
	i8 v10217 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10217 = v10216;

	i8 v10218 = (i8)(intptr_t)(ws+3008);
	i8 v10219 = *(i8*)(intptr_t)v10218;
	i8 v10220 = *(i8*)(intptr_t)v10219;
	i8 v10221 = v10220+(+42);
	i2 v10222 = *(i2*)(intptr_t)v10221;
	i1 v10223 = v10222;
	i8 v10224 = (i8)(intptr_t)(ws+2920);
	i8 v10225 = *(i8*)(intptr_t)v10224;
	i8 v10226 = (i8)(intptr_t)(ws+3000);
	i8 v10227 = *(i8*)(intptr_t)v10226;

void f134_MidCalle(i8* /* m */, i8 /* subr */, i8 /* left */, i1 /* width */);
	i8 v10228;
	f134_MidCalle(&v10228, v10227, v10225, v10223);
	i8 v10229 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10229 = v10228;

	i8 v10230 = (i8)(intptr_t)(ws+3008);
	i8 v10231 = *(i8*)(intptr_t)v10230;
	i8 v10232 = *(i8*)(intptr_t)v10231;
	i8 v10233 = (i8)(intptr_t)(ws+2912);
	i8 v10234 = *(i8*)(intptr_t)v10233;
	i8 v10235 = v10234+(+16);
	*(i8*)(intptr_t)v10235 = v10232;


void f470_i_end_call(void);
	f470_i_end_call();

endsub:;
}
const i1 c02_s01e1[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };

// reduce_70 workspace at ws+3000 length ws+8
void f557_reduce_70(void) {

	i8 v10236 = (i8)(intptr_t)(ws+80);
	i8 v10237 = *(i8*)(intptr_t)v10236;
	i8 v10238 = *(i8*)(intptr_t)v10237;
	i8 v10239 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10239 = v10238;


void f469_i_check_sub_call_args(void);
	f469_i_check_sub_call_args();

	i8 v10240 = (i8)(intptr_t)(ws+3000);
	i8 v10241 = *(i8*)(intptr_t)v10240;
	i8 v10242 = v10241+(+89);
	i1 v10243 = *(i1*)(intptr_t)v10242;
	i1 v10244 = (i1)+0;
	if (v10243==v10244) goto c02_0901; else goto c02_0900;

c02_0900:;

	i8 v10245 = (i8)(intptr_t)c02_s01e1;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10245);

	goto c02_08fd;

c02_0901:;

c02_08fd:;

	i8 v10246 = (i8)(intptr_t)(ws+2928);
	i8 v10247 = *(i8*)(intptr_t)v10246;
	i8 v10248 = (i8)(intptr_t)(ws+3000);
	i8 v10249 = *(i8*)(intptr_t)v10248;

void f111_MidCall(i8* /* m */, i8 /* subr */, i8 /* left */);
	i8 v10250;
	f111_MidCall(&v10250, v10249, v10247);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10250);


void f470_i_end_call(void);
	f470_i_end_call();

	i1 v10251 = (i1)+22;
	i8 v10252 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10252, v10251);

endsub:;
}
const i1 c02_s01e2[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s01e3[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
const i1 c02_s01e4[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };

// reduce_71 workspace at ws+3000 length ws+41
void f558_reduce_71(void) {

	i8 v10253 = (i8)(intptr_t)(ws+80);
	i8 v10254 = *(i8*)(intptr_t)v10253;
	i8 v10255 = *(i8*)(intptr_t)v10254;
	i8 v10256 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10256 = v10255;


void f469_i_check_sub_call_args(void);
	f469_i_check_sub_call_args();

	i8 v10257 = (i8)(intptr_t)(ws+2928);
	i8 v10258 = *(i8*)(intptr_t)v10257;
	i8 v10259 = (i8)(intptr_t)(ws+3000);
	i8 v10260 = *(i8*)(intptr_t)v10259;

void f111_MidCall(i8* /* m */, i8 /* subr */, i8 /* left */);
	i8 v10261;
	f111_MidCall(&v10261, v10260, v10258);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10261);

	i8 v10262 = (i8)(intptr_t)(ws+3000);
	i8 v10263 = *(i8*)(intptr_t)v10262;
	i8 v10264 = v10263+(+89);
	i1 v10265 = *(i1*)(intptr_t)v10264;
	i8 v10266 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v10266 = v10265;

	i1 v10267 = (i1)+0;
	i8 v10268 = (i8)(intptr_t)(ws+3009);
	*(i1*)(intptr_t)v10268 = v10267;

	i8 v10269 = (i8)(intptr_t)(ws+2952);
	i8 v10270 = *(i8*)(intptr_t)v10269;
	i8 v10271 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10271 = v10270;

c02_0904:;

	i8 v10272 = (i8)(intptr_t)(ws+3016);
	i8 v10273 = *(i8*)(intptr_t)v10272;
	i8 v10274 = (i8)+0;
	if (v10273==v10274) goto c02_0907; else goto c02_0906;

c02_0906:;

	i8 v10275 = (i8)(intptr_t)(ws+3008);
	i1 v10276 = *(i1*)(intptr_t)v10275;
	i1 v10277 = (i1)+0;
	if (v10276==v10277) goto c02_090b; else goto c02_090c;

c02_090b:;

	i8 v10278 = (i8)(intptr_t)c02_s01e2;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10278);

	goto c02_0908;

c02_090c:;

c02_0908:;

	i8 v10279 = (i8)(intptr_t)(ws+3008);
	i1 v10280 = *(i1*)(intptr_t)v10279;
	i1 v10281 = v10280+(-1);
	i8 v10282 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v10282 = v10281;

	i8 v10283 = (i8)(intptr_t)(ws+3000);
	i8 v10284 = *(i8*)(intptr_t)v10283;
	i8 v10285 = (i8)(intptr_t)(ws+3008);
	i1 v10286 = *(i1*)(intptr_t)v10285;

void f81_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v10287;
	f81_GetOutputParameter(&v10287, v10286, v10284);
	i8 v10288 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v10288 = v10287;

	i8 v10289 = (i8)(intptr_t)(ws+3016);
	i8 v10290 = *(i8*)(intptr_t)v10289;
	i8 v10291 = v10290+(+24);
	i8 v10292 = *(i8*)(intptr_t)v10291;
	i8 v10293 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10293 = v10292;

	i8 v10294 = (i8)+0;
	i8 v10295 = (i8)(intptr_t)(ws+3016);
	i8 v10296 = *(i8*)(intptr_t)v10295;
	i8 v10297 = v10296+(+24);
	*(i8*)(intptr_t)v10297 = v10294;

	i8 v10298 = (i8)(intptr_t)(ws+3016);
	i8 v10299 = *(i8*)(intptr_t)v10298;
	i8 v10300 = v10299+(+32);
	i8 v10301 = *(i8*)(intptr_t)v10300;
	i8 v10302 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10302 = v10301;

	i8 v10303 = (i8)(intptr_t)(ws+3032);
	i8 v10304 = *(i8*)(intptr_t)v10303;
	i8 v10305 = v10304+(+16);
	i8 v10306 = *(i8*)(intptr_t)v10305;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v10307;
	f199_IsPtr(&v10307, v10306);
	i1 v10308 = (i1)+0;
	if (v10307==v10308) goto c02_0910; else goto c02_0911;

c02_0910:;

	i8 v10309 = (i8)(intptr_t)c02_s01e3;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10309);

	goto c02_090d;

c02_0911:;

c02_090d:;

	i8 v10310 = (i8)(intptr_t)(ws+3032);
	i8 v10311 = *(i8*)(intptr_t)v10310;
	i8 v10312 = (i8)(intptr_t)(ws+3024);
	i8 v10313 = *(i8*)(intptr_t)v10312;
	i8 v10314 = *(i8*)(intptr_t)v10313;

void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v10315;
	f441_MakePointerType(&v10315, v10314);

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v10315, v10311);

	i8 v10316 = (i8)(intptr_t)(ws+3024);
	i8 v10317 = *(i8*)(intptr_t)v10316;
	i8 v10318 = *(i8*)(intptr_t)v10317;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10318);

	i8 v10319 = (i8)(intptr_t)(ws+3032);
	i8 v10320 = *(i8*)(intptr_t)v10319;
	i8 v10321 = v10320+(+16);
	i8 v10322 = *(i8*)(intptr_t)v10321;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10322);

	i8 v10323 = (i8)(intptr_t)(ws+3024);
	i8 v10324 = *(i8*)(intptr_t)v10323;
	i8 v10325 = *(i8*)(intptr_t)v10324;
	i8 v10326 = v10325+(+42);
	i2 v10327 = *(i2*)(intptr_t)v10326;
	i1 v10328 = v10327;
	i8 v10329 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v10329 = v10328;

	i8 v10330 = (i8)(intptr_t)(ws+3040);
	i1 v10331 = *(i1*)(intptr_t)v10330;
	i8 v10332 = (i8)(intptr_t)(ws+3040);
	i1 v10333 = *(i1*)(intptr_t)v10332;
	i8 v10334 = (i8)(intptr_t)(ws+3000);
	i8 v10335 = *(i8*)(intptr_t)v10334;
	i8 v10336 = (i8)(intptr_t)(ws+3009);
	i1 v10337 = *(i1*)(intptr_t)v10336;

void f126_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	i8 v10338;
	f126_MidPoparg(&v10338, v10337, v10335, v10333);
	i8 v10339 = (i8)(intptr_t)(ws+3032);
	i8 v10340 = *(i8*)(intptr_t)v10339;

void f118_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v10341;
	f118_MidStore(&v10341, v10340, v10338, v10331);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10341);

	i8 v10342 = (i8)(intptr_t)(ws+3009);
	i1 v10343 = *(i1*)(intptr_t)v10342;
	i1 v10344 = v10343+(+1);
	i8 v10345 = (i8)(intptr_t)(ws+3009);
	*(i1*)(intptr_t)v10345 = v10344;

	i8 v10346 = (i8)(intptr_t)(ws+3024);
	i8 v10347 = *(i8*)(intptr_t)v10346;
	i8 v10348 = v10347+(+16);
	i8 v10349 = *(i8*)(intptr_t)v10348;
	i8 v10350 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v10350 = v10349;

	goto c02_0904;

c02_0907:;

	i8 v10351 = (i8)(intptr_t)(ws+2952);
	i8 v10352 = *(i8*)(intptr_t)v10351;

void f140_Discard(i8 /* node */);
	f140_Discard(v10352);

	i8 v10353 = (i8)(intptr_t)(ws+3009);
	i1 v10354 = *(i1*)(intptr_t)v10353;
	i8 v10355 = (i8)(intptr_t)(ws+3000);
	i8 v10356 = *(i8*)(intptr_t)v10355;
	i8 v10357 = v10356+(+89);
	i1 v10358 = *(i1*)(intptr_t)v10357;
	if (v10354==v10358) goto c02_0916; else goto c02_0915;

c02_0915:;

	i8 v10359 = (i8)(intptr_t)c02_s01e4;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10359);

	goto c02_0912;

c02_0916:;

c02_0912:;


void f470_i_end_call(void);
	f470_i_end_call();

	i1 v10360 = (i1)+2;
	i8 v10361 = (i8)(intptr_t)(ws+2944);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10361, v10360);

	i1 v10362 = (i1)+22;
	i8 v10363 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10363, v10362);

endsub:;
}
const i1 c02_s01e5[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
const i1 c02_s01e6[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };

// reduce_72 workspace at ws+3000 length ws+8
void f559_reduce_72(void) {

	i8 v10364 = (i8)(intptr_t)(ws+2920);
	i8 v10365 = *(i8*)(intptr_t)v10364;
	i8 v10366 = v10365+(+46);
	i1 v10367 = *(i1*)(intptr_t)v10366;
	i1 v10368 = (i1)+25;
	if (v10367==v10368) goto c02_091b; else goto c02_091a;

c02_091a:;


void f55_StartError(void);
	f55_StartError();

	i8 v10369 = (i8)(intptr_t)c02_s01e5;

void f11_print(i8 /* ptr */);
	f11_print(v10369);

	i8 v10370 = (i8)(intptr_t)(ws+2920);
	i8 v10371 = *(i8*)(intptr_t)v10370;
	i8 v10372 = v10371+(+48);
	i8 v10373 = *(i8*)(intptr_t)v10372;

void f11_print(i8 /* ptr */);
	f11_print(v10373);

	i8 v10374 = (i8)(intptr_t)c02_s01e6;

void f11_print(i8 /* ptr */);
	f11_print(v10374);


void f56_EndError(void);
	f56_EndError();

	goto c02_0917;

c02_091b:;

c02_0917:;

	i8 v10375 = (i8)+34;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10376;
	f31_Alloc(&v10376, v10375);
	i8 v10377 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10377 = v10376;

	i8 v10378 = (i8)(intptr_t)(ws+80);
	i8 v10379 = *(i8*)(intptr_t)v10378;
	i8 v10380 = (i8)(intptr_t)(ws+3000);
	i8 v10381 = *(i8*)(intptr_t)v10380;
	i8 v10382 = v10381+(+8);
	*(i8*)(intptr_t)v10382 = v10379;

	i8 v10383 = (i8)(intptr_t)(ws+2920);
	i8 v10384 = *(i8*)(intptr_t)v10383;
	i8 v10385 = *(i8*)(intptr_t)v10384;
	i8 v10386 = (i8)(intptr_t)(ws+3000);
	i8 v10387 = *(i8*)(intptr_t)v10386;
	*(i8*)(intptr_t)v10387 = v10385;

	i8 v10388 = (i8)(intptr_t)(ws+2920);
	i8 v10389 = *(i8*)(intptr_t)v10388;
	i8 v10390 = *(i8*)(intptr_t)v10389;
	i8 v10391 = v10390+(+40);
	i8 v10392 = *(i8*)(intptr_t)v10391;
	i8 v10393 = (i8)(intptr_t)(ws+3000);
	i8 v10394 = *(i8*)(intptr_t)v10393;
	i8 v10395 = v10394+(+16);
	*(i8*)(intptr_t)v10395 = v10392;

	i8 v10396 = (i8)(intptr_t)(ws+2920);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	i8 v10398 = *(i8*)(intptr_t)v10397;
	i8 v10399 = v10398+(+48);
	i8 v10400 = *(i8*)(intptr_t)v10399;
	i8 v10401 = (i8)(intptr_t)(ws+3000);
	i8 v10402 = *(i8*)(intptr_t)v10401;
	i8 v10403 = v10402+(+24);
	*(i8*)(intptr_t)v10403 = v10400;

	i8 v10404 = (i8)(intptr_t)(ws+3000);
	i8 v10405 = *(i8*)(intptr_t)v10404;
	i8 v10406 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10406 = v10405;

endsub:;
}

// reduce_73 workspace at ws+3000 length ws+0
void f560_reduce_73(void) {

	i8 v10407 = (i8)(intptr_t)(ws+2928);
	i8 v10408 = *(i8*)(intptr_t)v10407;
	i8 v10409 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10409 = v10408;

	i1 v10410 = (i1)+4;
	i8 v10411 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10411, v10410);

endsub:;
}

// reduce_74 workspace at ws+3000 length ws+0
void f561_reduce_74(void) {


void f112_MidEnd(i8* /* m */);
	i8 v10412;
	f112_MidEnd(&v10412);
	i8 v10413 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10413 = v10412;

	i1 v10414 = (i1)+4;
	i8 v10415 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10415, v10414);

endsub:;
}

// reduce_75 workspace at ws+3000 length ws+0
void f562_reduce_75(void) {

	i8 v10416 = (i8)(intptr_t)(ws+2920);
	i8 v10417 = *(i8*)(intptr_t)v10416;
	i8 v10418 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10418 = v10417;

endsub:;
}

// reduce_76 workspace at ws+3000 length ws+0
void f563_reduce_76(void) {

	i8 v10419 = (i8)(intptr_t)(ws+2920);
	i8 v10420 = *(i8*)(intptr_t)v10419;
	i8 v10421 = v10420+(+24);
	i8 v10422 = *(i8*)(intptr_t)v10421;

void f140_Discard(i8 /* node */);
	f140_Discard(v10422);

	i8 v10423 = (i8)(intptr_t)(ws+2936);
	i8 v10424 = *(i8*)(intptr_t)v10423;
	i8 v10425 = (i8)(intptr_t)(ws+2920);
	i8 v10426 = *(i8*)(intptr_t)v10425;
	i8 v10427 = v10426+(+24);
	*(i8*)(intptr_t)v10427 = v10424;

	i8 v10428 = (i8)(intptr_t)(ws+2920);
	i8 v10429 = *(i8*)(intptr_t)v10428;
	i8 v10430 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10430 = v10429;

	i1 v10431 = (i1)+44;
	i8 v10432 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10432, v10431);

endsub:;
}
const i1 c02_s01e7[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };

// reduce_77 workspace at ws+3000 length ws+8
void f564_reduce_77(void) {

	i8 v10433 = (i8)(intptr_t)(ws+80);
	i8 v10434 = *(i8*)(intptr_t)v10433;
	i8 v10435 = v10434+(+16);
	i8 v10436 = *(i8*)(intptr_t)v10435;
	i8 v10437 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10437 = v10436;

	i8 v10438 = (i8)(intptr_t)(ws+3000);
	i8 v10439 = *(i8*)(intptr_t)v10438;
	i8 v10440 = (i8)+0;
	if (v10439==v10440) goto c02_091f; else goto c02_0920;

c02_091f:;


void f55_StartError(void);
	f55_StartError();

	i8 v10441 = (i8)(intptr_t)c02_s01e7;

void f11_print(i8 /* ptr */);
	f11_print(v10441);

	i8 v10442 = (i8)(intptr_t)(ws+80);
	i8 v10443 = *(i8*)(intptr_t)v10442;
	i8 v10444 = *(i8*)(intptr_t)v10443;
	i8 v10445 = *(i8*)(intptr_t)v10444;

void f11_print(i8 /* ptr */);
	f11_print(v10445);


void f56_EndError(void);
	f56_EndError();

	goto c02_091c;

c02_0920:;

c02_091c:;

	i8 v10446 = (i8)(intptr_t)(ws+80);
	i8 v10447 = *(i8*)(intptr_t)v10446;
	i8 v10448 = v10447+(+16);
	i8 v10449 = *(i8*)(intptr_t)v10448;
	i8 v10450 = v10449+(+16);
	i8 v10451 = *(i8*)(intptr_t)v10450;
	i8 v10452 = (i8)(intptr_t)(ws+80);
	i8 v10453 = *(i8*)(intptr_t)v10452;
	i8 v10454 = v10453+(+16);
	*(i8*)(intptr_t)v10454 = v10451;

	i8 v10455 = (i8)(intptr_t)(ws+2920);
	i8 v10456 = *(i8*)(intptr_t)v10455;
	i8 v10457 = (i8)(intptr_t)(ws+3000);
	i8 v10458 = *(i8*)(intptr_t)v10457;
	i8 v10459 = *(i8*)(intptr_t)v10458;

void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v10459, v10456);

	i8 v10460 = (i8)(intptr_t)(ws+3000);
	i8 v10461 = *(i8*)(intptr_t)v10460;
	i8 v10462 = *(i8*)(intptr_t)v10461;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10462);

	i8 v10463 = (i8)(intptr_t)(ws+2920);
	i8 v10464 = *(i8*)(intptr_t)v10463;
	i8 v10465 = v10464+(+16);
	i8 v10466 = *(i8*)(intptr_t)v10465;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10466);

	i8 v10467 = (i8)(intptr_t)(ws+80);
	i8 v10468 = *(i8*)(intptr_t)v10467;
	i8 v10469 = v10468+(+32);
	i1 v10470 = *(i1*)(intptr_t)v10469;
	i1 v10471 = v10470+(+1);
	i8 v10472 = (i8)(intptr_t)(ws+80);
	i8 v10473 = *(i8*)(intptr_t)v10472;
	i8 v10474 = v10473+(+32);
	*(i1*)(intptr_t)v10474 = v10471;

	i8 v10475 = (i8)(intptr_t)(ws+2920);
	i8 v10476 = *(i8*)(intptr_t)v10475;

void f141_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v10477;
	f141_NodeWidth(&v10477, v10476);

void f112_MidEnd(i8* /* m */);
	i8 v10478;
	f112_MidEnd(&v10478);
	i8 v10479 = (i8)(intptr_t)(ws+2920);
	i8 v10480 = *(i8*)(intptr_t)v10479;
	i8 v10481 = (i8)(intptr_t)(ws+80);
	i8 v10482 = *(i8*)(intptr_t)v10481;
	i8 v10483 = *(i8*)(intptr_t)v10482;
	i8 v10484 = (i8)(intptr_t)(ws+80);
	i8 v10485 = *(i8*)(intptr_t)v10484;
	i8 v10486 = *(i8*)(intptr_t)v10485;
	i8 v10487 = v10486+(+88);
	i1 v10488 = *(i1*)(intptr_t)v10487;
	i8 v10489 = (i8)(intptr_t)(ws+80);
	i8 v10490 = *(i8*)(intptr_t)v10489;
	i8 v10491 = v10490+(+32);
	i1 v10492 = *(i1*)(intptr_t)v10491;
	i1 v10493 = v10488-v10492;

void f120_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v10494;
	f120_MidArg(&v10494, v10493, v10483, v10480, v10478, v10477);
	i8 v10495 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10495 = v10494;

endsub:;
}

// reduce_78 workspace at ws+3000 length ws+0
void f565_reduce_78(void) {

	i8 v10496 = (i8)(intptr_t)(ws+2928);
	i8 v10497 = *(i8*)(intptr_t)v10496;
	i8 v10498 = (i8)(intptr_t)(ws+2944);
	i8 v10499 = *(i8*)(intptr_t)v10498;

void f90_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	i8 v10500;
	f90_MidPair(&v10500, v10499, v10497);
	i8 v10501 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10501 = v10500;

	i1 v10502 = (i1)+44;
	i8 v10503 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10503, v10502);

	i1 v10504 = (i1)+4;
	i8 v10505 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10505, v10504);

endsub:;
}

// reduce_79 workspace at ws+3000 length ws+0
void f566_reduce_79(void) {

	i8 v10506 = (i8)(intptr_t)(ws+2920);
	i8 v10507 = *(i8*)(intptr_t)v10506;
	i8 v10508 = (i8)+0;

void f90_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	i8 v10509;
	f90_MidPair(&v10509, v10508, v10507);
	i8 v10510 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10510 = v10509;

endsub:;
}

// reduce_80 workspace at ws+3000 length ws+0
void f567_reduce_80(void) {

	i8 v10511 = (i8)(intptr_t)(ws+2920);
	i8 v10512 = *(i8*)(intptr_t)v10511;
	i8 v10513 = (i8)(intptr_t)(ws+2936);
	i8 v10514 = *(i8*)(intptr_t)v10513;

void f90_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	i8 v10515;
	f90_MidPair(&v10515, v10514, v10512);
	i8 v10516 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10516 = v10515;

	i1 v10517 = (i1)+44;
	i8 v10518 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10518, v10517);

endsub:;
}

// reduce_81 workspace at ws+3000 length ws+0
void f568_reduce_81(void) {

	i8 v10519 = (i8)(intptr_t)(ws+2920);
	i8 v10520 = *(i8*)(intptr_t)v10519;

void f205_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v10521;
	f205_UndoLValue(&v10521, v10520);
	i8 v10522 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10522 = v10521;

endsub:;
}

// reduce_82 workspace at ws+3000 length ws+0
void f569_reduce_82(void) {


void f472_parser_i_end_sub(void);
	f472_parser_i_end_sub();

	i1 v10523 = (i1)+22;
	i8 v10524 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10524, v10523);

endsub:;
}

// reduce_83 workspace at ws+3000 length ws+0
void f570_reduce_83(void) {

	i8 v10525 = (i8)(intptr_t)(ws+40);
	i8 v10526 = *(i8*)(intptr_t)v10525;
	i8 v10527 = v10526+(+56);
	i2 v10528 = *(i2*)(intptr_t)v10527;
	i8 v10529 = (i8)(intptr_t)(ws+2928);
	i8 v10530 = *(i8*)(intptr_t)v10529;

void f177_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	f177_EmitterDeclareExternalSubroutine(v10530, v10528);

	i1 v10531 = (i1)+11;
	i8 v10532 = (i8)(intptr_t)(ws+2944);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10532, v10531);

	i1 v10533 = (i1)+16;
	i8 v10534 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10534, v10533);

	i1 v10535 = (i1)+4;
	i8 v10536 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10536, v10535);

endsub:;
}

// reduce_84 workspace at ws+3000 length ws+8
void f571_reduce_84(void) {

	i8 v10537 = (i8)+91;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10538;
	f31_Alloc(&v10538, v10537);
	i8 v10539 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10539 = v10538;

	i8 v10540 = (i8)(intptr_t)(ws+40);
	i8 v10541 = *(i8*)(intptr_t)v10540;
	i8 v10542 = v10541+(+16);
	i8 v10543 = (i8)(intptr_t)(ws+3000);
	i8 v10544 = *(i8*)(intptr_t)v10543;
	i8 v10545 = v10544+(+32);
	*(i8*)(intptr_t)v10545 = v10542;

	i8 v10546 = (i8)(intptr_t)(ws+40);
	i8 v10547 = *(i8*)(intptr_t)v10546;
	i8 v10548 = (i8)(intptr_t)(ws+3000);
	i8 v10549 = *(i8*)(intptr_t)v10548;
	i8 v10550 = v10549+(+8);
	*(i8*)(intptr_t)v10550 = v10547;


void f207_AllocSubrId(i2* /* id */);
	i2 v10551;
	f207_AllocSubrId(&v10551);
	i8 v10552 = (i8)(intptr_t)(ws+3000);
	i8 v10553 = *(i8*)(intptr_t)v10552;
	i8 v10554 = v10553+(+56);
	*(i2*)(intptr_t)v10554 = v10551;

	i8 v10555 = (i8)(intptr_t)(ws+2920);
	i8 v10556 = *(i8*)(intptr_t)v10555;
	i8 v10557 = v10556+(+48);
	i8 v10558 = *(i8*)(intptr_t)v10557;
	i8 v10559 = (i8)(intptr_t)(ws+3000);
	i8 v10560 = *(i8*)(intptr_t)v10559;
	*(i8*)(intptr_t)v10560 = v10558;

	i1 v10561 = (i1)+25;
	i8 v10562 = (i8)(intptr_t)(ws+2920);
	i8 v10563 = *(i8*)(intptr_t)v10562;
	i8 v10564 = v10563+(+46);
	*(i1*)(intptr_t)v10564 = v10561;

	i8 v10565 = (i8)(intptr_t)(ws+3000);
	i8 v10566 = *(i8*)(intptr_t)v10565;
	i8 v10567 = (i8)(intptr_t)(ws+2920);
	i8 v10568 = *(i8*)(intptr_t)v10567;
	*(i8*)(intptr_t)v10568 = v10566;

	i8 v10569 = (i8)(intptr_t)(ws+3000);
	i8 v10570 = *(i8*)(intptr_t)v10569;

void f176_EmitterDeclareSubroutine(i8 /* subr */);
	f176_EmitterDeclareSubroutine(v10570);

	i8 v10571 = (i8)(intptr_t)(ws+3000);
	i8 v10572 = *(i8*)(intptr_t)v10571;

void f471_parser_i_start_sub(i8 /* subr */);
	f471_parser_i_start_sub(v10572);

endsub:;
}
const i1 c02_s01e8[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
const i1 c02_s01e9[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
const i1 c02_s01ea[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };

// reduce_85 workspace at ws+3000 length ws+8
void f572_reduce_85(void) {

	i8 v10573 = (i8)(intptr_t)(ws+2920);
	i8 v10574 = *(i8*)(intptr_t)v10573;
	i8 v10575 = v10574+(+46);
	i1 v10576 = *(i1*)(intptr_t)v10575;
	i1 v10577 = (i1)+25;
	if (v10576==v10577) goto c02_0925; else goto c02_0924;

c02_0924:;

	i8 v10578 = (i8)(intptr_t)c02_s01e8;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10578);

	goto c02_0921;

c02_0925:;

c02_0921:;

	i8 v10579 = (i8)(intptr_t)(ws+2920);
	i8 v10580 = *(i8*)(intptr_t)v10579;
	i8 v10581 = *(i8*)(intptr_t)v10580;
	i8 v10582 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10582 = v10581;

	i8 v10583 = (i8)(intptr_t)(ws+3000);
	i8 v10584 = *(i8*)(intptr_t)v10583;
	i8 v10585 = v10584+(+90);
	i1 v10586 = *(i1*)(intptr_t)v10585;
	i1 v10587 = v10586&(+1);
	i1 v10588 = (i1)+0;
	if (v10587==v10588) goto c02_092a; else goto c02_0929;

c02_0929:;

	i8 v10589 = (i8)(intptr_t)c02_s01e9;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10589);

	goto c02_0926;

c02_092a:;

c02_0926:;

	i8 v10590 = (i8)(intptr_t)(ws+3000);
	i8 v10591 = *(i8*)(intptr_t)v10590;
	i8 v10592 = v10591+(+8);
	i8 v10593 = *(i8*)(intptr_t)v10592;
	i8 v10594 = (i8)(intptr_t)(ws+40);
	i8 v10595 = *(i8*)(intptr_t)v10594;
	if (v10593==v10595) goto c02_092f; else goto c02_092e;

c02_092e:;

	i8 v10596 = (i8)(intptr_t)c02_s01ea;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10596);

	goto c02_092b;

c02_092f:;

c02_092b:;

	i8 v10597 = (i8)(intptr_t)(ws+3000);
	i8 v10598 = *(i8*)(intptr_t)v10597;

void f471_parser_i_start_sub(i8 /* subr */);
	f471_parser_i_start_sub(v10598);

	i1 v10599 = (i1)+25;
	i8 v10600 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10600, v10599);

endsub:;
}

// reduce_86 workspace at ws+3000 length ws+0
void f573_reduce_86(void) {

	i8 v10601 = (i8)(intptr_t)(ws+40);
	i8 v10602 = *(i8*)(intptr_t)v10601;

void f109_MidStartsub(i8* /* m */, i8 /* subr */);
	i8 v10603;
	f109_MidStartsub(&v10603, v10602);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10603);

	i8 v10604 = (i8)(intptr_t)(ws+40);
	i8 v10605 = *(i8*)(intptr_t)v10604;
	i8 v10606 = v10605+(+90);
	i1 v10607 = *(i1*)(intptr_t)v10606;
	i1 v10608 = v10607|(+1);
	i8 v10609 = (i8)(intptr_t)(ws+40);
	i8 v10610 = *(i8*)(intptr_t)v10609;
	i8 v10611 = v10610+(+90);
	*(i1*)(intptr_t)v10611 = v10608;

endsub:;
}

// reduce_87 workspace at ws+3000 length ws+0
void f574_reduce_87(void) {

	i8 v10612 = (i8)(intptr_t)(ws+40);
	i8 v10613 = *(i8*)(intptr_t)v10612;

void f85_MidEndsub(i8* /* m */, i8 /* subr */);
	i8 v10614;
	f85_MidEndsub(&v10614, v10613);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10614);


void f472_parser_i_end_sub(void);
	f472_parser_i_end_sub();

	i1 v10615 = (i1)+25;
	i8 v10616 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10616, v10615);

endsub:;
}

// reduce_88 workspace at ws+3000 length ws+0
void f575_reduce_88(void) {

	i1 v10617 = (i1)+0;
	i8 v10618 = (i8)(intptr_t)(ws+40);
	i8 v10619 = *(i8*)(intptr_t)v10618;
	i8 v10620 = v10619+(+89);
	*(i1*)(intptr_t)v10620 = v10617;

endsub:;
}

// reduce_89 workspace at ws+3000 length ws+0
void f576_reduce_89(void) {

	i8 v10621 = (i8)(intptr_t)(ws+2920);
	i8 v10622 = *(i8*)(intptr_t)v10621;
	i8 v10623 = (i8)(intptr_t)(ws+40);
	i8 v10624 = *(i8*)(intptr_t)v10623;
	i8 v10625 = v10624+(+48);
	*(i8*)(intptr_t)v10625 = v10622;

	i8 v10626 = (i8)(intptr_t)(ws+2920);
	i8 v10627 = *(i8*)(intptr_t)v10626;

void f79_CountParameters(i1* /* count */, i8 /* param */);
	i1 v10628;
	f79_CountParameters(&v10628, v10627);
	i8 v10629 = (i8)(intptr_t)(ws+40);
	i8 v10630 = *(i8*)(intptr_t)v10629;
	i8 v10631 = v10630+(+89);
	*(i1*)(intptr_t)v10631 = v10628;

	i1 v10632 = (i1)+6;
	i8 v10633 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10633, v10632);

endsub:;
}

// reduce_90 workspace at ws+3000 length ws+0
void f577_reduce_90(void) {

	i8 v10634 = (i8)(intptr_t)(ws+2920);
	i8 v10635 = *(i8*)(intptr_t)v10634;
	i8 v10636 = (i8)(intptr_t)(ws+40);
	i8 v10637 = *(i8*)(intptr_t)v10636;
	i8 v10638 = v10637+(+40);
	*(i8*)(intptr_t)v10638 = v10635;

	i8 v10639 = (i8)(intptr_t)(ws+2920);
	i8 v10640 = *(i8*)(intptr_t)v10639;

void f79_CountParameters(i1* /* count */, i8 /* param */);
	i1 v10641;
	f79_CountParameters(&v10641, v10640);
	i8 v10642 = (i8)(intptr_t)(ws+40);
	i8 v10643 = *(i8*)(intptr_t)v10642;
	i8 v10644 = v10643+(+88);
	*(i1*)(intptr_t)v10644 = v10641;

endsub:;
}

// reduce_91 workspace at ws+3000 length ws+0
void f578_reduce_91(void) {

	i8 v10645 = (i8)+0;
	i8 v10646 = (i8)(intptr_t)(ws+40);
	i8 v10647 = *(i8*)(intptr_t)v10646;
	i8 v10648 = v10647+(+40);
	*(i8*)(intptr_t)v10648 = v10645;

	i1 v10649 = (i1)+0;
	i8 v10650 = (i8)(intptr_t)(ws+40);
	i8 v10651 = *(i8*)(intptr_t)v10650;
	i8 v10652 = v10651+(+88);
	*(i1*)(intptr_t)v10652 = v10649;

endsub:;
}

// reduce_92 workspace at ws+3000 length ws+0
void f579_reduce_92(void) {

	i8 v10653 = (i8)+0;
	i8 v10654 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10654 = v10653;

	i1 v10655 = (i1)+4;
	i8 v10656 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10656, v10655);

endsub:;
}

// reduce_93 workspace at ws+3000 length ws+0
void f580_reduce_93(void) {

	i8 v10657 = (i8)(intptr_t)(ws+2928);
	i8 v10658 = *(i8*)(intptr_t)v10657;
	i8 v10659 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10659 = v10658;

	i1 v10660 = (i1)+4;
	i8 v10661 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10661, v10660);

endsub:;
}

// reduce_94 workspace at ws+3000 length ws+0
void f581_reduce_94(void) {

	i8 v10662 = (i8)(intptr_t)(ws+2920);
	i8 v10663 = *(i8*)(intptr_t)v10662;
	i8 v10664 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10664 = v10663;

endsub:;
}

// reduce_95 workspace at ws+3000 length ws+0
void f582_reduce_95(void) {

	i8 v10665 = (i8)(intptr_t)(ws+2920);
	i8 v10666 = *(i8*)(intptr_t)v10665;
	i8 v10667 = (i8)(intptr_t)(ws+2936);
	i8 v10668 = *(i8*)(intptr_t)v10667;
	i8 v10669 = v10668+(+16);
	*(i8*)(intptr_t)v10669 = v10666;

	i8 v10670 = (i8)(intptr_t)(ws+2936);
	i8 v10671 = *(i8*)(intptr_t)v10670;
	i8 v10672 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10672 = v10671;

	i1 v10673 = (i1)+44;
	i8 v10674 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10674, v10673);

endsub:;
}

// reduce_96 workspace at ws+3000 length ws+0
void f583_reduce_96(void) {

	i1 v10675 = (i1)+28;
	i8 v10676 = (i8)(intptr_t)(ws+2936);
	i8 v10677 = *(i8*)(intptr_t)v10676;
	i8 v10678 = v10677+(+46);
	*(i1*)(intptr_t)v10678 = v10675;

	i8 v10679 = (i8)(intptr_t)(ws+2936);
	i8 v10680 = *(i8*)(intptr_t)v10679;
	i8 v10681 = (i8)(intptr_t)(ws+2920);
	i8 v10682 = *(i8*)(intptr_t)v10681;

void f440_InitVariable(i8 /* type */, i8 /* symbol */);
	f440_InitVariable(v10682, v10680);

	i8 v10683 = (i8)(intptr_t)(ws+2936);
	i8 v10684 = *(i8*)(intptr_t)v10683;
	i8 v10685 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10685 = v10684;

	i1 v10686 = (i1)+6;
	i8 v10687 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10687, v10686);

endsub:;
}

// reduce_97 workspace at ws+3000 length ws+0
void f584_reduce_97(void) {

	i8 v10688 = (i8)(intptr_t)(ws+72);
	i8 v10689 = *(i8*)(intptr_t)v10688;
	i8 v10690 = v10689+(+42);
	i2 v10691 = *(i2*)(intptr_t)v10690;
	i8 v10692 = (i8)(intptr_t)(ws+72);
	i8 v10693 = *(i8*)(intptr_t)v10692;
	i8 v10694 = v10693+(+41);
	i1 v10695 = *(i1*)(intptr_t)v10694;

void f211_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v10696;
	f211_ArchAlignUp(&v10696, v10695, v10691);
	i8 v10697 = (i8)(intptr_t)(ws+72);
	i8 v10698 = *(i8*)(intptr_t)v10697;
	i8 v10699 = v10698+(+44);
	*(i2*)(intptr_t)v10699 = v10696;

	i1 v10700 = (i1)+64;
	i8 v10701 = (i8)(intptr_t)(ws+2944);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10701, v10700);

	i1 v10702 = (i1)+10;
	i8 v10703 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10703, v10702);

	i1 v10704 = (i1)+20;
	i8 v10705 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10705, v10704);

endsub:;
}

// reduce_98 workspace at ws+3000 length ws+0
void f585_reduce_98(void) {

	i8 v10706 = (i8)(intptr_t)(ws+2920);
	i8 v10707 = *(i8*)(intptr_t)v10706;
	i8 v10708 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10708 = v10707;

	i8 v10709 = (i8)(intptr_t)(ws+72);
	i8 v10710 = *(i8*)(intptr_t)v10709;
	i8 v10711 = v10710+(+46);
	i1 v10712 = *(i1*)(intptr_t)v10711;
	i1 v10713 = (i1)+0;
	if (v10712==v10713) goto c02_0936; else goto c02_0937;

c02_0937:;

	i8 v10714 = (i8)(intptr_t)(ws+72);
	i8 v10715 = *(i8*)(intptr_t)v10714;
	i8 v10716 = v10715+(+46);
	i1 v10717 = *(i1*)(intptr_t)v10716;
	i1 v10718 = (i1)+30;
	if (v10717==v10718) goto c02_0936; else goto c02_0935;

c02_0935:;


void f473_SymbolRedeclarationError(void);
	f473_SymbolRedeclarationError();

	goto c02_0930;

c02_0936:;

c02_0930:;

	i8 v10719 = (i8)(intptr_t)(ws+72);
	i8 v10720 = *(i8*)(intptr_t)v10719;
	i8 v10721 = v10720+(+40);
	i1 v10722 = *(i1*)(intptr_t)v10721;
	i1 v10723 = (i1)+0;
	if (v10722==v10723) goto c02_093e; else goto c02_093f;

c02_093f:;

	i8 v10724 = (i8)(intptr_t)(ws+72);
	i8 v10725 = *(i8*)(intptr_t)v10724;
	i8 v10726 = v10725+(+40);
	i1 v10727 = *(i1*)(intptr_t)v10726;
	i1 v10728 = (i1)+1;
	if (v10727==v10728) goto c02_093e; else goto c02_093d;

c02_093d:;


void f473_SymbolRedeclarationError(void);
	f473_SymbolRedeclarationError();

	goto c02_0938;

c02_093e:;

c02_0938:;

	i1 v10729 = (i1)+30;
	i8 v10730 = (i8)(intptr_t)(ws+72);
	i8 v10731 = *(i8*)(intptr_t)v10730;
	i8 v10732 = v10731+(+46);
	*(i1*)(intptr_t)v10732 = v10729;

	i1 v10733 = (i1)+5;
	i8 v10734 = (i8)(intptr_t)(ws+72);
	i8 v10735 = *(i8*)(intptr_t)v10734;
	i8 v10736 = v10735+(+40);
	*(i1*)(intptr_t)v10736 = v10733;

endsub:;
}
const i1 c02_s01eb[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };

// reduce_99 workspace at ws+3000 length ws+0
void f586_reduce_99(void) {

	i8 v10737 = (i8)(intptr_t)(ws+2920);
	i8 v10738 = *(i8*)(intptr_t)v10737;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10738);

	i8 v10739 = (i8)(intptr_t)(ws+2920);
	i8 v10740 = *(i8*)(intptr_t)v10739;

void f203_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10741;
	f203_IsRecord(&v10741, v10740);
	i1 v10742 = (i1)+0;
	if (v10741==v10742) goto c02_0943; else goto c02_0944;

c02_0943:;


void f55_StartError(void);
	f55_StartError();

	i8 v10743 = (i8)(intptr_t)(ws+2920);
	i8 v10744 = *(i8*)(intptr_t)v10743;
	i8 v10745 = v10744+(+48);
	i8 v10746 = *(i8*)(intptr_t)v10745;

void f11_print(i8 /* ptr */);
	f11_print(v10746);

	i8 v10747 = (i8)(intptr_t)c02_s01eb;

void f11_print(i8 /* ptr */);
	f11_print(v10747);


void f56_EndError(void);
	f56_EndError();

	goto c02_0940;

c02_0944:;

c02_0940:;

	i8 v10748 = (i8)(intptr_t)(ws+2920);
	i8 v10749 = *(i8*)(intptr_t)v10748;
	i8 v10750 = v10749+(+41);
	i1 v10751 = *(i1*)(intptr_t)v10750;
	i8 v10752 = (i8)(intptr_t)(ws+72);
	i8 v10753 = *(i8*)(intptr_t)v10752;
	i8 v10754 = v10753+(+41);
	*(i1*)(intptr_t)v10754 = v10751;

	i8 v10755 = (i8)(intptr_t)(ws+2920);
	i8 v10756 = *(i8*)(intptr_t)v10755;
	i8 v10757 = v10756+(+42);
	i2 v10758 = *(i2*)(intptr_t)v10757;
	i8 v10759 = (i8)(intptr_t)(ws+72);
	i8 v10760 = *(i8*)(intptr_t)v10759;
	i8 v10761 = v10760+(+42);
	*(i2*)(intptr_t)v10761 = v10758;

	i8 v10762 = (i8)(intptr_t)(ws+2920);
	i8 v10763 = *(i8*)(intptr_t)v10762;
	i8 v10764 = (i8)(intptr_t)(ws+72);
	i8 v10765 = *(i8*)(intptr_t)v10764;
	i8 v10766 = v10765+(+16);
	*(i8*)(intptr_t)v10766 = v10763;

endsub:;
}

// reduce_100 workspace at ws+3000 length ws+0
void f587_reduce_100(void) {

	i8 v10767 = (i8)(intptr_t)(ws+2928);
	i8 v10768 = *(i8*)(intptr_t)v10767;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10768);

	i1 v10769 = (i1)+28;
	i8 v10770 = (i8)(intptr_t)(ws+2952);
	i8 v10771 = *(i8*)(intptr_t)v10770;
	i8 v10772 = v10771+(+46);
	*(i1*)(intptr_t)v10772 = v10769;

	i8 v10773 = (i8)(intptr_t)(ws+2928);
	i8 v10774 = *(i8*)(intptr_t)v10773;
	i8 v10775 = (i8)(intptr_t)(ws+2952);
	i8 v10776 = *(i8*)(intptr_t)v10775;
	*(i8*)(intptr_t)v10776 = v10774;

	i8 v10777 = (i8)(intptr_t)(ws+72);
	i8 v10778 = *(i8*)(intptr_t)v10777;
	i8 v10779 = v10778+(+41);
	i1 v10780 = *(i1*)(intptr_t)v10779;
	i8 v10781 = (i8)(intptr_t)(ws+2928);
	i8 v10782 = *(i8*)(intptr_t)v10781;
	i8 v10783 = v10782+(+41);
	i1 v10784 = *(i1*)(intptr_t)v10783;
	if (v10780<v10784) goto c02_0948; else goto c02_0949;

c02_0948:;

	i8 v10785 = (i8)(intptr_t)(ws+2928);
	i8 v10786 = *(i8*)(intptr_t)v10785;
	i8 v10787 = v10786+(+41);
	i1 v10788 = *(i1*)(intptr_t)v10787;
	i8 v10789 = (i8)(intptr_t)(ws+72);
	i8 v10790 = *(i8*)(intptr_t)v10789;
	i8 v10791 = v10790+(+41);
	*(i1*)(intptr_t)v10791 = v10788;

	goto c02_0945;

c02_0949:;

c02_0945:;

	i8 v10792 = (i8)(intptr_t)(ws+72);
	i8 v10793 = *(i8*)(intptr_t)v10792;
	i8 v10794 = (i8)(intptr_t)(ws+2952);
	i8 v10795 = *(i8*)(intptr_t)v10794;
	i8 v10796 = (i8)(intptr_t)(ws+2944);
	i2 v10797 = *(i2*)(intptr_t)v10796;

void f215_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	f215_ArchInitMember(v10797, v10795, v10793);

	i1 v10798 = (i1)+6;
	i8 v10799 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10799, v10798);

	i1 v10800 = (i1)+22;
	i8 v10801 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10801, v10800);

endsub:;
}

// reduce_101 workspace at ws+3000 length ws+0
void f588_reduce_101(void) {

	i8 v10802 = (i8)(intptr_t)(ws+72);
	i8 v10803 = *(i8*)(intptr_t)v10802;
	i8 v10804 = v10803+(+42);
	i2 v10805 = *(i2*)(intptr_t)v10804;
	i8 v10806 = (i8)(intptr_t)(ws+2912);
	*(i2*)(intptr_t)v10806 = v10805;

endsub:;
}

// reduce_102 workspace at ws+3000 length ws+0
void f589_reduce_102(void) {

	i8 v10807 = (i8)(intptr_t)(ws+2928);
	i4 v10808 = *(i4*)(intptr_t)v10807;
	i2 v10809 = (s2)(s4)v10808;
	i8 v10810 = (i8)(intptr_t)(ws+2912);
	*(i2*)(intptr_t)v10810 = v10809;

	i1 v10811 = (i1)+16;
	i8 v10812 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10812, v10811);

	i1 v10813 = (i1)+4;
	i8 v10814 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10814, v10813);

endsub:;
}

// reduce_103 workspace at ws+3000 length ws+0
void f590_reduce_103(void) {

	i8 v10815 = (i8)(intptr_t)(ws+72);
	i8 v10816 = *(i8*)(intptr_t)v10815;
	i8 v10817 = (i8)(intptr_t)(ws+2920);
	i8 v10818 = *(i8*)(intptr_t)v10817;

void f192_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10819;
	f192_AddSymbol(&v10819, v10818, v10816);
	i8 v10820 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10820 = v10819;

	i8 v10821 = (i8)(intptr_t)(ws+72);
	i8 v10822 = *(i8*)(intptr_t)v10821;
	i8 v10823 = v10822+(+24);
	i1 v10824 = *(i1*)(intptr_t)v10823;
	i1 v10825 = v10824+(+1);
	i8 v10826 = (i8)(intptr_t)(ws+72);
	i8 v10827 = *(i8*)(intptr_t)v10826;
	i8 v10828 = v10827+(+24);
	*(i1*)(intptr_t)v10828 = v10825;

endsub:;
}

// reduce_104 workspace at ws+3000 length ws+0
void f591_reduce_104(void) {


void f475_CheckEndOfInitialiser(void);
	f475_CheckEndOfInitialiser();


void f114_MidEndinit(i8* /* m */);
	i8 v10829;
	f114_MidEndinit(&v10829);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10829);

	i1 v10830 = (i1)+31;
	i8 v10831 = (i8)(intptr_t)(ws+2944);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10831, v10830);

	i1 v10832 = (i1)+32;
	i8 v10833 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10833, v10832);

	i1 v10834 = (i1)+22;
	i8 v10835 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10835, v10834);

endsub:;
}
const i1 c02_s01ec[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
const i1 c02_s01ed[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };

// reduce_105 workspace at ws+3000 length ws+16
void f592_reduce_105(void) {

	i8 v10836 = (i8)(intptr_t)(ws+2928);
	i8 v10837 = *(i8*)(intptr_t)v10836;

void f195_CheckNotPartialType(i8 /* type */);
	f195_CheckNotPartialType(v10837);

	i1 v10838 = (i1)+28;
	i8 v10839 = (i8)(intptr_t)(ws+2944);
	i8 v10840 = *(i8*)(intptr_t)v10839;
	i8 v10841 = v10840+(+46);
	*(i1*)(intptr_t)v10841 = v10838;

	i8 v10842 = (i8)(intptr_t)(ws+2928);
	i8 v10843 = *(i8*)(intptr_t)v10842;
	i8 v10844 = (i8)(intptr_t)(ws+2944);
	i8 v10845 = *(i8*)(intptr_t)v10844;
	*(i8*)(intptr_t)v10845 = v10843;

	i8 v10846 = (i8)(intptr_t)(ws+40);
	i8 v10847 = *(i8*)(intptr_t)v10846;
	i8 v10848 = (i8)(intptr_t)(ws+2944);
	i8 v10849 = *(i8*)(intptr_t)v10848;
	i8 v10850 = v10849+(+8);
	*(i8*)(intptr_t)v10850 = v10847;

	i8 v10851 = (i8)+8;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10852;
	f31_Alloc(&v10852, v10851);
	i8 v10853 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10853 = v10852;

	i8 v10854 = (i8)(intptr_t)(ws+3000);
	i8 v10855 = *(i8*)(intptr_t)v10854;
	i8 v10856 = (i8)(intptr_t)(ws+2944);
	i8 v10857 = *(i8*)(intptr_t)v10856;
	i8 v10858 = v10857+(+24);
	*(i8*)(intptr_t)v10858 = v10855;

	i1 v10859 = (i1)+3;
	i8 v10860 = (i8)(intptr_t)(ws+3000);
	i8 v10861 = *(i8*)(intptr_t)v10860;
	*(i1*)(intptr_t)v10861 = v10859;

	i1 v10862 = (i1)+97;
	i8 v10863 = (i8)(intptr_t)(ws+3000);
	i8 v10864 = *(i8*)(intptr_t)v10863;
	i8 v10865 = v10864+(+1);
	*(i1*)(intptr_t)v10865 = v10862;


void f206_AllocLabel(i2* /* label */);
	i2 v10866;
	f206_AllocLabel(&v10866);
	i4 v10867 = v10866;
	i1 v10868 = (i1)+16;
	i8 v10869 = (i8)(intptr_t)(ws+3000);
	i8 v10870 = *(i8*)(intptr_t)v10869;
	i8 v10871 = v10870+(+2);

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v10872;
	f13_UIToA(&v10872, v10871, v10868, v10867);
	i8 v10873 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10873 = v10872;

	i8 v10874 = (i8)(intptr_t)(ws+2928);
	i8 v10875 = *(i8*)(intptr_t)v10874;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v10876;
	f198_IsArray(&v10876, v10875);
	i1 v10877 = (i1)+0;
	if (v10876==v10877) goto c02_0951; else goto c02_0950;

c02_0951:;

	i8 v10878 = (i8)(intptr_t)(ws+2928);
	i8 v10879 = *(i8*)(intptr_t)v10878;

void f203_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10880;
	f203_IsRecord(&v10880, v10879);
	i1 v10881 = (i1)+0;
	if (v10880==v10881) goto c02_094f; else goto c02_0950;

c02_094f:;

	i8 v10882 = (i8)(intptr_t)c02_s01ec;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10882);

	goto c02_094a;

c02_0950:;

c02_094a:;

	i8 v10883 = (i8)(intptr_t)(ws+2928);
	i8 v10884 = *(i8*)(intptr_t)v10883;

void f203_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10885;
	f203_IsRecord(&v10885, v10884);
	i1 v10886 = (i1)+0;
	if (v10885==v10886) goto c02_0958; else goto c02_0959;

c02_0959:;

	i8 v10887 = (i8)(intptr_t)(ws+2928);
	i8 v10888 = *(i8*)(intptr_t)v10887;
	i8 v10889 = v10888+(+16);
	i8 v10890 = *(i8*)(intptr_t)v10889;
	i8 v10891 = (i8)+0;
	if (v10890==v10891) goto c02_0958; else goto c02_0957;

c02_0957:;

	i8 v10892 = (i8)(intptr_t)c02_s01ed;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10892);

	goto c02_0952;

c02_0958:;

c02_0952:;

	i8 v10893 = (i8)(intptr_t)(ws+2928);
	i8 v10894 = *(i8*)(intptr_t)v10893;

void f203_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10895;
	f203_IsRecord(&v10895, v10894);
	i1 v10896 = (i1)+0;
	if (v10895==v10896) goto c02_095e; else goto c02_095d;

c02_095d:;

	i8 v10897 = (i8)(intptr_t)(ws+2928);
	i8 v10898 = *(i8*)(intptr_t)v10897;
	i8 v10899 = *(i8*)(intptr_t)v10898;
	i8 v10900 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10900 = v10899;

	goto c02_095a;

c02_095e:;

c02_095a:;

	i8 v10901 = (i8)(intptr_t)(ws+2928);
	i8 v10902 = *(i8*)(intptr_t)v10901;
	i8 v10903 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10903 = v10902;

	i2 v10904 = (i2)+0;
	i8 v10905 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10905 = v10904;

	i2 v10906 = (i2)+0;
	i8 v10907 = (i8)(intptr_t)(ws+1234);
	*(i2*)(intptr_t)v10907 = v10906;

	i8 v10908 = (i8)(intptr_t)(ws+2944);
	i8 v10909 = *(i8*)(intptr_t)v10908;

void f138_MidStartinit(i8* /* m */, i8 /* sym */);
	i8 v10910;
	f138_MidStartinit(&v10910, v10909);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10910);

	i1 v10911 = (i1)+6;
	i8 v10912 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10912, v10911);

	i1 v10913 = (i1)+2;
	i8 v10914 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10914, v10913);

endsub:;
}
const i1 c02_s01ee[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
const i1 c02_s01ef[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };

// reduce_106 workspace at ws+3000 length ws+18
void f593_reduce_106(void) {


void f479_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	i8 v10915;
	i8 v10916;
	f479_GetInitedMemberChecked(&v10915, &v10916);

	i8 v10917 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10917 = v10916;

	i8 v10918 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10918 = v10915;

	i8 v10919 = (i8)(intptr_t)(ws+3008);
	i8 v10920 = *(i8*)(intptr_t)v10919;
	i8 v10921 = v10920+(+41);
	i1 v10922 = *(i1*)(intptr_t)v10921;

void f477_AlignTo(i1 /* alignment */);
	f477_AlignTo(v10922);

	i8 v10923 = (i8)(intptr_t)(ws+3008);
	i8 v10924 = *(i8*)(intptr_t)v10923;
	i8 v10925 = v10924+(+42);
	i2 v10926 = *(i2*)(intptr_t)v10925;
	i8 v10927 = (i8)(intptr_t)(ws+3016);
	*(i2*)(intptr_t)v10927 = v10926;

	i8 v10928 = (i8)(intptr_t)(ws+2920);
	i8 v10929 = *(i8*)(intptr_t)v10928;
	i8 v10930 = v10929+(+66);
	i1 v10931 = *(i1*)(intptr_t)v10930;

	if (v10931 != +40) goto c02_0960;

	i8 v10932 = (i8)(intptr_t)(ws+3008);
	i8 v10933 = *(i8*)(intptr_t)v10932;

void f200_IsNum(i1* /* result */, i8 /* type */);
	i1 v10934;
	f200_IsNum(&v10934, v10933);
	i1 v10935 = (i1)+0;
	if (v10934==v10935) goto c02_0964; else goto c02_0965;

c02_0964:;

	i8 v10936 = (i8)(intptr_t)c02_s01ee;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10936);

	goto c02_0961;

c02_0965:;

c02_0961:;

	i8 v10937 = (i8)(intptr_t)(ws+3016);
	i2 v10938 = *(i2*)(intptr_t)v10937;
	i1 v10939 = v10938;
	i8 v10940 = (i8)(intptr_t)(ws+2920);
	i8 v10941 = *(i8*)(intptr_t)v10940;
	i4 v10942 = *(i4*)(intptr_t)v10941;

void f103_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	i8 v10943;
	f103_MidInit(&v10943, v10942, v10939);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10943);

	goto c02_095f;

c02_0960:;

	if (v10931 != +41) goto c02_0966;

	i8 v10944 = (i8)(intptr_t)(ws+3008);
	i8 v10945 = *(i8*)(intptr_t)v10944;

void f199_IsPtr(i1* /* result */, i8 /* type */);
	i1 v10946;
	f199_IsPtr(&v10946, v10945);
	i1 v10947 = (i1)+0;
	if (v10946==v10947) goto c02_096c; else goto c02_096e;

c02_096e:;

	i8 v10948 = (i8)(intptr_t)(ws+3008);
	i8 v10949 = *(i8*)(intptr_t)v10948;
	i8 v10950 = *(i8*)(intptr_t)v10949;
	i8 v10951 = (i8)(intptr_t)(ws+1040);
	i8 v10952 = *(i8*)(intptr_t)v10951;
	if (v10950==v10952) goto c02_096d; else goto c02_096c;

c02_096c:;

	i8 v10953 = (i8)(intptr_t)c02_s01ef;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v10953);

	goto c02_0967;

c02_096d:;

c02_0967:;

	i8 v10954 = (i8)(intptr_t)(ws+2920);
	i8 v10955 = *(i8*)(intptr_t)v10954;
	i8 v10956 = *(i8*)(intptr_t)v10955;

void f128_MidInits(i8* /* m */, i8 /* text */);
	i8 v10957;
	f128_MidInits(&v10957, v10956);

void f437_Generate(i8 /* statement */);
	f437_Generate(v10957);

	goto c02_095f;

c02_0966:;


void f468_parser_i_constant_error(void);
	f468_parser_i_constant_error();

c02_095f:;


	i8 v10958 = (i8)(intptr_t)(ws+2920);
	i8 v10959 = *(i8*)(intptr_t)v10958;

void f140_Discard(i8 /* node */);
	f140_Discard(v10959);

	i8 v10960 = (i8)(intptr_t)(ws+1232);
	i2 v10961 = *(i2*)(intptr_t)v10960;
	i8 v10962 = (i8)(intptr_t)(ws+3016);
	i2 v10963 = *(i2*)(intptr_t)v10962;
	i2 v10964 = v10961+v10963;
	i8 v10965 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10965 = v10964;

	i8 v10966 = (i8)(intptr_t)(ws+1234);
	i2 v10967 = *(i2*)(intptr_t)v10966;
	i8 v10968 = (i8)(intptr_t)(ws+3016);
	i2 v10969 = *(i2*)(intptr_t)v10968;
	i2 v10970 = v10967+v10969;
	i8 v10971 = (i8)(intptr_t)(ws+1234);
	*(i2*)(intptr_t)v10971 = v10970;

endsub:;
}

// reduce_107 workspace at ws+3000 length ws+0
void f594_reduce_107(void) {


void f475_CheckEndOfInitialiser(void);
	f475_CheckEndOfInitialiser();

	i8 v10972 = (i8)(intptr_t)(ws+2936);
	i8 v10973 = *(i8*)(intptr_t)v10972;
	i8 v10974 = *(i8*)(intptr_t)v10973;
	i8 v10975 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10975 = v10974;

	i8 v10976 = (i8)(intptr_t)(ws+2936);
	i8 v10977 = *(i8*)(intptr_t)v10976;
	i8 v10978 = v10977+(+8);
	i8 v10979 = *(i8*)(intptr_t)v10978;
	i8 v10980 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10980 = v10979;

	i8 v10981 = (i8)(intptr_t)(ws+2936);
	i8 v10982 = *(i8*)(intptr_t)v10981;
	i8 v10983 = v10982+(+16);
	i2 v10984 = *(i2*)(intptr_t)v10983;
	i8 v10985 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10985 = v10984;

	i8 v10986 = (i8)(intptr_t)(ws+2936);
	i8 v10987 = *(i8*)(intptr_t)v10986;

void f32_Free(i8 /* block */);
	f32_Free(v10987);

	i1 v10988 = (i1)+32;
	i8 v10989 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v10989, v10988);

endsub:;
}
const i1 c02_s01f0[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };

// reduce_108 workspace at ws+3000 length ws+16
void f595_reduce_108(void) {


void f479_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	i8 v10990;
	i8 v10991;
	f479_GetInitedMemberChecked(&v10990, &v10991);

	i8 v10992 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10992 = v10991;

	i8 v10993 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10993 = v10990;

	i8 v10994 = (i8)(intptr_t)(ws+3008);
	i8 v10995 = *(i8*)(intptr_t)v10994;
	i8 v10996 = v10995+(+41);
	i1 v10997 = *(i1*)(intptr_t)v10996;

void f477_AlignTo(i1 /* alignment */);
	f477_AlignTo(v10997);

	i8 v10998 = (i8)+18;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10999;
	f31_Alloc(&v10999, v10998);
	i8 v11000 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v11000 = v10999;

	i8 v11001 = (i8)(intptr_t)(ws+72);
	i8 v11002 = *(i8*)(intptr_t)v11001;
	i8 v11003 = (i8)(intptr_t)(ws+2912);
	i8 v11004 = *(i8*)(intptr_t)v11003;
	*(i8*)(intptr_t)v11004 = v11002;

	i8 v11005 = (i8)(intptr_t)(ws+1224);
	i8 v11006 = *(i8*)(intptr_t)v11005;
	i8 v11007 = (i8)(intptr_t)(ws+2912);
	i8 v11008 = *(i8*)(intptr_t)v11007;
	i8 v11009 = v11008+(+8);
	*(i8*)(intptr_t)v11009 = v11006;

	i8 v11010 = (i8)(intptr_t)(ws+1232);
	i2 v11011 = *(i2*)(intptr_t)v11010;
	i8 v11012 = (i8)(intptr_t)(ws+2912);
	i8 v11013 = *(i8*)(intptr_t)v11012;
	i8 v11014 = v11013+(+16);
	*(i2*)(intptr_t)v11014 = v11011;

	i8 v11015 = (i8)(intptr_t)(ws+3008);
	i8 v11016 = *(i8*)(intptr_t)v11015;
	i8 v11017 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11017 = v11016;

	i2 v11018 = (i2)+0;
	i8 v11019 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v11019 = v11018;

	i8 v11020 = (i8)(intptr_t)(ws+3008);
	i8 v11021 = *(i8*)(intptr_t)v11020;

void f203_IsRecord(i1* /* result */, i8 /* type */);
	i1 v11022;
	f203_IsRecord(&v11022, v11021);
	i1 v11023 = (i1)+0;
	if (v11022==v11023) goto c02_0973; else goto c02_0972;

c02_0972:;

	i8 v11024 = (i8)(intptr_t)(ws+3008);
	i8 v11025 = *(i8*)(intptr_t)v11024;
	i8 v11026 = *(i8*)(intptr_t)v11025;
	i8 v11027 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v11027 = v11026;

	goto c02_096f;

c02_0973:;

	i8 v11028 = (i8)(intptr_t)(ws+3008);
	i8 v11029 = *(i8*)(intptr_t)v11028;

void f198_IsArray(i1* /* result */, i8 /* type */);
	i1 v11030;
	f198_IsArray(&v11030, v11029);
	i1 v11031 = (i1)+0;
	if (v11030==v11031) goto c02_0977; else goto c02_0976;

c02_0976:;

	i8 v11032 = (i8)+0;
	i8 v11033 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v11033 = v11032;

	goto c02_096f;

c02_0977:;

	i8 v11034 = (i8)(intptr_t)c02_s01f0;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v11034);

c02_096f:;

endsub:;
}

// reduce_109 workspace at ws+3000 length ws+0
void f596_reduce_109(void) {


void f106_MidAsmend(i8* /* m */);
	i8 v11035;
	f106_MidAsmend(&v11035);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11035);

	i1 v11036 = (i1)+22;
	i8 v11037 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11037, v11036);

endsub:;
}

// reduce_110 workspace at ws+3000 length ws+0
void f597_reduce_110(void) {


void f93_MidAsmstart(i8* /* m */);
	i8 v11038;
	f93_MidAsmstart(&v11038);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11038);

endsub:;
}

// reduce_111 workspace at ws+3000 length ws+0
void f598_reduce_111(void) {

	i8 v11039 = (i8)(intptr_t)(ws+2920);
	i8 v11040 = *(i8*)(intptr_t)v11039;

void f104_MidAsmtext(i8* /* m */, i8 /* text */);
	i8 v11041;
	f104_MidAsmtext(&v11041, v11040);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11041);

	i8 v11042 = (i8)(intptr_t)(ws+2920);
	i8 v11043 = *(i8*)(intptr_t)v11042;

void f32_Free(i8 /* block */);
	f32_Free(v11043);

endsub:;
}

// reduce_112 workspace at ws+3000 length ws+0
void f599_reduce_112(void) {

	i8 v11044 = (i8)(intptr_t)(ws+2920);
	i4 v11045 = *(i4*)(intptr_t)v11044;

void f102_MidAsmvalue(i8* /* m */, i4 /* value */);
	i8 v11046;
	f102_MidAsmvalue(&v11046, v11045);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11046);

endsub:;
}
const i1 c02_s01f1[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };

// reduce_113 workspace at ws+3000 length ws+1
void f600_reduce_113(void) {

	i8 v11047 = (i8)(intptr_t)(ws+2920);
	i8 v11048 = *(i8*)(intptr_t)v11047;
	i8 v11049 = v11048+(+46);
	i1 v11050 = *(i1*)(intptr_t)v11049;
	i8 v11051 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v11051 = v11050;

	i8 v11052 = (i8)(intptr_t)(ws+3000);
	i1 v11053 = *(i1*)(intptr_t)v11052;
	i1 v11054 = (i1)+28;
	if (v11053==v11054) goto c02_097d; else goto c02_097f;

c02_097f:;

	i8 v11055 = (i8)(intptr_t)(ws+3000);
	i1 v11056 = *(i1*)(intptr_t)v11055;
	i1 v11057 = (i1)+25;
	if (v11056==v11057) goto c02_097d; else goto c02_097e;

c02_097d:;

	i8 v11058 = (i8)(intptr_t)(ws+3000);
	i1 v11059 = *(i1*)(intptr_t)v11058;
	i1 v11060 = (i1)+25;
	if (v11059==v11060) goto c02_0983; else goto c02_0984;

c02_0983:;

	i8 v11061 = (i8)(intptr_t)(ws+40);
	i8 v11062 = *(i8*)(intptr_t)v11061;
	i8 v11063 = (i8)(intptr_t)(ws+2920);
	i8 v11064 = *(i8*)(intptr_t)v11063;
	i8 v11065 = *(i8*)(intptr_t)v11064;

void f178_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	f178_EmitterReferenceSubroutine(v11065, v11062);

	goto c02_0980;

c02_0984:;

c02_0980:;

	i8 v11066 = (i8)(intptr_t)(ws+2920);
	i8 v11067 = *(i8*)(intptr_t)v11066;

void f100_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	i8 v11068;
	f100_MidAsmsymbol(&v11068, v11067);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11068);

	goto c02_0978;

c02_097e:;

	i8 v11069 = (i8)(intptr_t)(ws+3000);
	i1 v11070 = *(i1*)(intptr_t)v11069;
	i1 v11071 = (i1)+7;
	if (v11070==v11071) goto c02_0987; else goto c02_0988;

c02_0987:;

	i8 v11072 = (i8)(intptr_t)(ws+2920);
	i8 v11073 = *(i8*)(intptr_t)v11072;
	i4 v11074 = *(i4*)(intptr_t)v11073;

void f102_MidAsmvalue(i8* /* m */, i4 /* value */);
	i8 v11075;
	f102_MidAsmvalue(&v11075, v11074);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11075);

	goto c02_0978;

c02_0988:;

	i8 v11076 = (i8)(intptr_t)c02_s01f1;

void f57_SimpleError(i8 /* message */);
	f57_SimpleError(v11076);

c02_0978:;

endsub:;
}

// reduce_120 workspace at ws+3000 length ws+0
void f601_reduce_120(void) {

	i1 v11077 = (i1)+26;
	i8 v11078 = (i8)(intptr_t)(ws+2936);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11078, v11077);

endsub:;
}

// reduce_124 workspace at ws+3000 length ws+0
void f602_reduce_124(void) {

	i1 v11079 = (i1)+22;
	i8 v11080 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11080, v11079);

endsub:;
}

// reduce_125 workspace at ws+3000 length ws+0
void f603_reduce_125(void) {

	i1 v11081 = (i1)+22;
	i8 v11082 = (i8)(intptr_t)(ws+2920);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11082, v11081);

endsub:;
}

// reduce_131 workspace at ws+3000 length ws+0
void f604_reduce_131(void) {

	i1 v11083 = (i1)+44;
	i8 v11084 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11084, v11083);

endsub:;
}

// reduce_134 workspace at ws+3000 length ws+0
void f605_reduce_134(void) {

	i1 v11085 = (i1)+44;
	i8 v11086 = (i8)(intptr_t)(ws+2928);

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11086, v11085);

endsub:;
}

// yy_reduce workspace at ws+2904 length ws+94
void f486_yy_reduce(i2* p8972 /* yyact */, i1 p8973 /* yylookahead */, i2 p8974 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+2904) = p8974; /*yyruleno */
	*(i1*)(intptr_t)(ws+2906) = p8973; /*yylookahead */

	i8 v8975 = (i8)(intptr_t)(((i1*)c02_a83f+0));
	i8 v8976 = (i8)(intptr_t)(ws+2904);
	i2 v8977 = *(i2*)(intptr_t)v8976;
	i1 v8978 = v8977;
	i8 v8979 = v8978;
	i8 v8980 = v8975+v8979;
	i1 v8981 = *(i1*)(intptr_t)v8980;
	i8 v8982 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v8982 = v8981;

	i8 v8983 = (i8)(intptr_t)(ws+1240);
	i8 v8984 = *(i8*)(intptr_t)v8983;
	i8 v8985 = (i8)(intptr_t)(ws+2848);
	if (v8984==v8985) goto c02_0843; else goto c02_0844;

c02_0843:;


void f484_yy_stack_overflow(void);
	f484_yy_stack_overflow();

	goto c02_0840;

c02_0844:;

c02_0840:;

	i8 v8986 = (i8)(intptr_t)(ws+2920);
	i8 v8987 = (i8)(intptr_t)(ws+2984);
	*(i8*)(intptr_t)v8987 = v8986;

	i8 v8988 = (i8)(intptr_t)(ws+2910);
	i1 v8989 = *(i1*)(intptr_t)v8988;
	i8 v8990 = (i8)(intptr_t)(ws+2992);
	*(i1*)(intptr_t)v8990 = v8989;

c02_0847:;

	i8 v8991 = (i8)(intptr_t)(ws+2992);
	i1 v8992 = *(i1*)(intptr_t)v8991;
	i1 v8993 = (i1)+0;
	if (v8992==v8993) goto c02_084a; else goto c02_0849;

c02_0849:;

	i8 v8994 = (i8)(intptr_t)(ws+1240);
	i8 v8995 = *(i8*)(intptr_t)v8994;
	i8 v8996 = v8995+(+8);
	i8 v8997 = *(i8*)(intptr_t)v8996;
	i8 v8998 = (i8)(intptr_t)(ws+2984);
	i8 v8999 = *(i8*)(intptr_t)v8998;
	*(i8*)(intptr_t)v8999 = v8997;

	i8 v9000 = (i8)(intptr_t)(ws+1240);
	i8 v9001 = *(i8*)(intptr_t)v9000;
	i8 v9002 = v9001+(-16);
	i8 v9003 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v9003 = v9002;

	i8 v9004 = (i8)(intptr_t)(ws+2984);
	i8 v9005 = *(i8*)(intptr_t)v9004;
	i8 v9006 = v9005+(+8);
	i8 v9007 = (i8)(intptr_t)(ws+2984);
	*(i8*)(intptr_t)v9007 = v9006;

	i8 v9008 = (i8)(intptr_t)(ws+2992);
	i1 v9009 = *(i1*)(intptr_t)v9008;
	i1 v9010 = v9009+(-1);
	i8 v9011 = (i8)(intptr_t)(ws+2992);
	*(i1*)(intptr_t)v9011 = v9010;

	goto c02_0847;

c02_084a:;
























































































































	i8 v11087 = (i8)(intptr_t)(ws+2904);
	i2 v11088 = *(i2*)(intptr_t)v11087;
	i1 v11089 = v11088;

	if (v11089 != +0) goto c02_098a;


void f487_reduce_0(void);
	f487_reduce_0();

	goto c02_0989;

c02_098a:;

	if (v11089 != +1) goto c02_098b;


void f488_reduce_1(void);
	f488_reduce_1();

	goto c02_0989;

c02_098b:;

	if (v11089 != +2) goto c02_098c;


void f489_reduce_2(void);
	f489_reduce_2();

	goto c02_0989;

c02_098c:;

	if (v11089 != +3) goto c02_098d;


void f490_reduce_3(void);
	f490_reduce_3();

	goto c02_0989;

c02_098d:;

	if (v11089 != +4) goto c02_098e;


void f491_reduce_4(void);
	f491_reduce_4();

	goto c02_0989;

c02_098e:;

	if (v11089 != +5) goto c02_098f;


void f492_reduce_5(void);
	f492_reduce_5();

	goto c02_0989;

c02_098f:;

	if (v11089 != +6) goto c02_0990;


void f493_reduce_6(void);
	f493_reduce_6();

	goto c02_0989;

c02_0990:;

	if (v11089 != +7) goto c02_0991;


void f494_reduce_7(void);
	f494_reduce_7();

	goto c02_0989;

c02_0991:;

	if (v11089 != +8) goto c02_0992;


void f495_reduce_8(void);
	f495_reduce_8();

	goto c02_0989;

c02_0992:;

	if (v11089 != +9) goto c02_0993;


void f496_reduce_9(void);
	f496_reduce_9();

	goto c02_0989;

c02_0993:;

	if (v11089 != +10) goto c02_0994;


void f497_reduce_10(void);
	f497_reduce_10();

	goto c02_0989;

c02_0994:;

	if (v11089 != +11) goto c02_0995;


void f498_reduce_11(void);
	f498_reduce_11();

	goto c02_0989;

c02_0995:;

	if (v11089 != +12) goto c02_0996;


void f499_reduce_12(void);
	f499_reduce_12();

	goto c02_0989;

c02_0996:;

	if (v11089 != +13) goto c02_0997;


void f500_reduce_13(void);
	f500_reduce_13();

	goto c02_0989;

c02_0997:;

	if (v11089 != +14) goto c02_0998;


void f501_reduce_14(void);
	f501_reduce_14();

	goto c02_0989;

c02_0998:;

	if (v11089 != +15) goto c02_0999;


void f502_reduce_15(void);
	f502_reduce_15();

	goto c02_0989;

c02_0999:;

	if (v11089 != +16) goto c02_099a;


void f503_reduce_16(void);
	f503_reduce_16();

	goto c02_0989;

c02_099a:;

	if (v11089 != +17) goto c02_099b;


void f504_reduce_17(void);
	f504_reduce_17();

	goto c02_0989;

c02_099b:;

	if (v11089 != +18) goto c02_099c;


void f505_reduce_18(void);
	f505_reduce_18();

	goto c02_0989;

c02_099c:;

	if (v11089 != +19) goto c02_099d;


void f506_reduce_19(void);
	f506_reduce_19();

	goto c02_0989;

c02_099d:;

	if (v11089 != +20) goto c02_099e;


void f507_reduce_20(void);
	f507_reduce_20();

	goto c02_0989;

c02_099e:;

	if (v11089 != +21) goto c02_099f;


void f508_reduce_21(void);
	f508_reduce_21();

	goto c02_0989;

c02_099f:;

	if (v11089 != +22) goto c02_09a0;


void f509_reduce_22(void);
	f509_reduce_22();

	goto c02_0989;

c02_09a0:;

	if (v11089 != +23) goto c02_09a1;


void f510_reduce_23(void);
	f510_reduce_23();

	goto c02_0989;

c02_09a1:;

	if (v11089 != +24) goto c02_09a2;


void f511_reduce_24(void);
	f511_reduce_24();

	goto c02_0989;

c02_09a2:;

	if (v11089 != +25) goto c02_09a3;


void f512_reduce_25(void);
	f512_reduce_25();

	goto c02_0989;

c02_09a3:;

	if (v11089 != +26) goto c02_09a4;


void f513_reduce_26(void);
	f513_reduce_26();

	goto c02_0989;

c02_09a4:;

	if (v11089 != +27) goto c02_09a5;


void f514_reduce_27(void);
	f514_reduce_27();

	goto c02_0989;

c02_09a5:;

	if (v11089 != +28) goto c02_09a6;


void f515_reduce_28(void);
	f515_reduce_28();

	goto c02_0989;

c02_09a6:;

	if (v11089 != +29) goto c02_09a7;


void f516_reduce_29(void);
	f516_reduce_29();

	goto c02_0989;

c02_09a7:;

	if (v11089 != +30) goto c02_09a8;


void f517_reduce_30(void);
	f517_reduce_30();

	goto c02_0989;

c02_09a8:;

	if (v11089 != +31) goto c02_09a9;


void f518_reduce_31(void);
	f518_reduce_31();

	goto c02_0989;

c02_09a9:;

	if (v11089 != +32) goto c02_09aa;


void f519_reduce_32(void);
	f519_reduce_32();

	goto c02_0989;

c02_09aa:;

	if (v11089 != +33) goto c02_09ab;


void f520_reduce_33(void);
	f520_reduce_33();

	goto c02_0989;

c02_09ab:;

	if (v11089 != +34) goto c02_09ac;


void f521_reduce_34(void);
	f521_reduce_34();

	goto c02_0989;

c02_09ac:;

	if (v11089 != +35) goto c02_09ad;


void f522_reduce_35(void);
	f522_reduce_35();

	goto c02_0989;

c02_09ad:;

	if (v11089 != +36) goto c02_09ae;


void f523_reduce_36(void);
	f523_reduce_36();

	goto c02_0989;

c02_09ae:;

	if (v11089 != +37) goto c02_09af;


void f524_reduce_37(void);
	f524_reduce_37();

	goto c02_0989;

c02_09af:;

	if (v11089 != +38) goto c02_09b0;


void f525_reduce_38(void);
	f525_reduce_38();

	goto c02_0989;

c02_09b0:;

	if (v11089 != +39) goto c02_09b1;


void f526_reduce_39(void);
	f526_reduce_39();

	goto c02_0989;

c02_09b1:;

	if (v11089 != +40) goto c02_09b2;


void f527_reduce_40(void);
	f527_reduce_40();

	goto c02_0989;

c02_09b2:;

	if (v11089 != +41) goto c02_09b3;


void f528_reduce_41(void);
	f528_reduce_41();

	goto c02_0989;

c02_09b3:;

	if (v11089 != +42) goto c02_09b4;


void f529_reduce_42(void);
	f529_reduce_42();

	goto c02_0989;

c02_09b4:;

	if (v11089 != +43) goto c02_09b5;


void f530_reduce_43(void);
	f530_reduce_43();

	goto c02_0989;

c02_09b5:;

	if (v11089 != +44) goto c02_09b6;


void f531_reduce_44(void);
	f531_reduce_44();

	goto c02_0989;

c02_09b6:;

	if (v11089 != +45) goto c02_09b7;


void f532_reduce_45(void);
	f532_reduce_45();

	goto c02_0989;

c02_09b7:;

	if (v11089 != +46) goto c02_09b8;


void f533_reduce_46(void);
	f533_reduce_46();

	goto c02_0989;

c02_09b8:;

	if (v11089 != +47) goto c02_09b9;


void f534_reduce_47(void);
	f534_reduce_47();

	goto c02_0989;

c02_09b9:;

	if (v11089 != +48) goto c02_09ba;


void f535_reduce_48(void);
	f535_reduce_48();

	goto c02_0989;

c02_09ba:;

	if (v11089 != +49) goto c02_09bb;


void f536_reduce_49(void);
	f536_reduce_49();

	goto c02_0989;

c02_09bb:;

	if (v11089 != +50) goto c02_09bc;


void f537_reduce_50(void);
	f537_reduce_50();

	goto c02_0989;

c02_09bc:;

	if (v11089 != +51) goto c02_09bd;


void f538_reduce_51(void);
	f538_reduce_51();

	goto c02_0989;

c02_09bd:;

	if (v11089 != +52) goto c02_09be;


void f539_reduce_52(void);
	f539_reduce_52();

	goto c02_0989;

c02_09be:;

	if (v11089 != +53) goto c02_09bf;


void f540_reduce_53(void);
	f540_reduce_53();

	goto c02_0989;

c02_09bf:;

	if (v11089 != +54) goto c02_09c0;


void f541_reduce_54(void);
	f541_reduce_54();

	goto c02_0989;

c02_09c0:;

	if (v11089 != +55) goto c02_09c1;


void f542_reduce_55(void);
	f542_reduce_55();

	goto c02_0989;

c02_09c1:;

	if (v11089 != +56) goto c02_09c2;


void f543_reduce_56(void);
	f543_reduce_56();

	goto c02_0989;

c02_09c2:;

	if (v11089 != +57) goto c02_09c3;


void f544_reduce_57(void);
	f544_reduce_57();

	goto c02_0989;

c02_09c3:;

	if (v11089 != +58) goto c02_09c4;


void f545_reduce_58(void);
	f545_reduce_58();

	goto c02_0989;

c02_09c4:;

	if (v11089 != +59) goto c02_09c5;


void f546_reduce_59(void);
	f546_reduce_59();

	goto c02_0989;

c02_09c5:;

	if (v11089 != +60) goto c02_09c6;


void f547_reduce_60(void);
	f547_reduce_60();

	goto c02_0989;

c02_09c6:;

	if (v11089 != +61) goto c02_09c7;


void f548_reduce_61(void);
	f548_reduce_61();

	goto c02_0989;

c02_09c7:;

	if (v11089 != +62) goto c02_09c8;


void f549_reduce_62(void);
	f549_reduce_62();

	goto c02_0989;

c02_09c8:;

	if (v11089 != +63) goto c02_09c9;


void f550_reduce_63(void);
	f550_reduce_63();

	goto c02_0989;

c02_09c9:;

	if (v11089 != +64) goto c02_09ca;


void f551_reduce_64(void);
	f551_reduce_64();

	goto c02_0989;

c02_09ca:;

	if (v11089 != +65) goto c02_09cb;


void f552_reduce_65(void);
	f552_reduce_65();

	goto c02_0989;

c02_09cb:;

	if (v11089 != +66) goto c02_09cc;


void f553_reduce_66(void);
	f553_reduce_66();

	goto c02_0989;

c02_09cc:;

	if (v11089 != +67) goto c02_09cd;


void f554_reduce_67(void);
	f554_reduce_67();

	goto c02_0989;

c02_09cd:;

	if (v11089 != +68) goto c02_09ce;


void f555_reduce_68(void);
	f555_reduce_68();

	goto c02_0989;

c02_09ce:;

	if (v11089 != +69) goto c02_09cf;


void f556_reduce_69(void);
	f556_reduce_69();

	goto c02_0989;

c02_09cf:;

	if (v11089 != +70) goto c02_09d0;


void f557_reduce_70(void);
	f557_reduce_70();

	goto c02_0989;

c02_09d0:;

	if (v11089 != +71) goto c02_09d1;


void f558_reduce_71(void);
	f558_reduce_71();

	goto c02_0989;

c02_09d1:;

	if (v11089 != +72) goto c02_09d2;


void f559_reduce_72(void);
	f559_reduce_72();

	goto c02_0989;

c02_09d2:;

	if (v11089 != +73) goto c02_09d3;


void f560_reduce_73(void);
	f560_reduce_73();

	goto c02_0989;

c02_09d3:;

	if (v11089 != +74) goto c02_09d4;


void f561_reduce_74(void);
	f561_reduce_74();

	goto c02_0989;

c02_09d4:;

	if (v11089 != +75) goto c02_09d5;


void f562_reduce_75(void);
	f562_reduce_75();

	goto c02_0989;

c02_09d5:;

	if (v11089 != +76) goto c02_09d6;


void f563_reduce_76(void);
	f563_reduce_76();

	goto c02_0989;

c02_09d6:;

	if (v11089 != +77) goto c02_09d7;


void f564_reduce_77(void);
	f564_reduce_77();

	goto c02_0989;

c02_09d7:;

	if (v11089 != +78) goto c02_09d8;


void f565_reduce_78(void);
	f565_reduce_78();

	goto c02_0989;

c02_09d8:;

	if (v11089 != +79) goto c02_09d9;


void f566_reduce_79(void);
	f566_reduce_79();

	goto c02_0989;

c02_09d9:;

	if (v11089 != +80) goto c02_09da;


void f567_reduce_80(void);
	f567_reduce_80();

	goto c02_0989;

c02_09da:;

	if (v11089 != +81) goto c02_09db;


void f568_reduce_81(void);
	f568_reduce_81();

	goto c02_0989;

c02_09db:;

	if (v11089 != +82) goto c02_09dc;


void f569_reduce_82(void);
	f569_reduce_82();

	goto c02_0989;

c02_09dc:;

	if (v11089 != +83) goto c02_09dd;


void f570_reduce_83(void);
	f570_reduce_83();

	goto c02_0989;

c02_09dd:;

	if (v11089 != +84) goto c02_09de;


void f571_reduce_84(void);
	f571_reduce_84();

	goto c02_0989;

c02_09de:;

	if (v11089 != +85) goto c02_09df;


void f572_reduce_85(void);
	f572_reduce_85();

	goto c02_0989;

c02_09df:;

	if (v11089 != +86) goto c02_09e0;


void f573_reduce_86(void);
	f573_reduce_86();

	goto c02_0989;

c02_09e0:;

	if (v11089 != +87) goto c02_09e1;


void f574_reduce_87(void);
	f574_reduce_87();

	goto c02_0989;

c02_09e1:;

	if (v11089 != +88) goto c02_09e2;


void f575_reduce_88(void);
	f575_reduce_88();

	goto c02_0989;

c02_09e2:;

	if (v11089 != +89) goto c02_09e3;


void f576_reduce_89(void);
	f576_reduce_89();

	goto c02_0989;

c02_09e3:;

	if (v11089 != +90) goto c02_09e4;


void f577_reduce_90(void);
	f577_reduce_90();

	goto c02_0989;

c02_09e4:;

	if (v11089 != +91) goto c02_09e5;


void f578_reduce_91(void);
	f578_reduce_91();

	goto c02_0989;

c02_09e5:;

	if (v11089 != +92) goto c02_09e6;


void f579_reduce_92(void);
	f579_reduce_92();

	goto c02_0989;

c02_09e6:;

	if (v11089 != +93) goto c02_09e7;


void f580_reduce_93(void);
	f580_reduce_93();

	goto c02_0989;

c02_09e7:;

	if (v11089 != +94) goto c02_09e8;


void f581_reduce_94(void);
	f581_reduce_94();

	goto c02_0989;

c02_09e8:;

	if (v11089 != +95) goto c02_09e9;


void f582_reduce_95(void);
	f582_reduce_95();

	goto c02_0989;

c02_09e9:;

	if (v11089 != +96) goto c02_09ea;


void f583_reduce_96(void);
	f583_reduce_96();

	goto c02_0989;

c02_09ea:;

	if (v11089 != +97) goto c02_09eb;


void f584_reduce_97(void);
	f584_reduce_97();

	goto c02_0989;

c02_09eb:;

	if (v11089 != +98) goto c02_09ec;


void f585_reduce_98(void);
	f585_reduce_98();

	goto c02_0989;

c02_09ec:;

	if (v11089 != +99) goto c02_09ed;


void f586_reduce_99(void);
	f586_reduce_99();

	goto c02_0989;

c02_09ed:;

	if (v11089 != +100) goto c02_09ee;


void f587_reduce_100(void);
	f587_reduce_100();

	goto c02_0989;

c02_09ee:;

	if (v11089 != +101) goto c02_09ef;


void f588_reduce_101(void);
	f588_reduce_101();

	goto c02_0989;

c02_09ef:;

	if (v11089 != +102) goto c02_09f0;


void f589_reduce_102(void);
	f589_reduce_102();

	goto c02_0989;

c02_09f0:;

	if (v11089 != +103) goto c02_09f1;


void f590_reduce_103(void);
	f590_reduce_103();

	goto c02_0989;

c02_09f1:;

	if (v11089 != +104) goto c02_09f2;


void f591_reduce_104(void);
	f591_reduce_104();

	goto c02_0989;

c02_09f2:;

	if (v11089 != +105) goto c02_09f3;


void f592_reduce_105(void);
	f592_reduce_105();

	goto c02_0989;

c02_09f3:;

	if (v11089 != +106) goto c02_09f4;


void f593_reduce_106(void);
	f593_reduce_106();

	goto c02_0989;

c02_09f4:;

	if (v11089 != +107) goto c02_09f5;


void f594_reduce_107(void);
	f594_reduce_107();

	goto c02_0989;

c02_09f5:;

	if (v11089 != +108) goto c02_09f6;


void f595_reduce_108(void);
	f595_reduce_108();

	goto c02_0989;

c02_09f6:;

	if (v11089 != +109) goto c02_09f7;


void f596_reduce_109(void);
	f596_reduce_109();

	goto c02_0989;

c02_09f7:;

	if (v11089 != +110) goto c02_09f8;


void f597_reduce_110(void);
	f597_reduce_110();

	goto c02_0989;

c02_09f8:;

	if (v11089 != +111) goto c02_09f9;


void f598_reduce_111(void);
	f598_reduce_111();

	goto c02_0989;

c02_09f9:;

	if (v11089 != +112) goto c02_09fa;


void f599_reduce_112(void);
	f599_reduce_112();

	goto c02_0989;

c02_09fa:;

	if (v11089 != +113) goto c02_09fb;


void f600_reduce_113(void);
	f600_reduce_113();

	goto c02_0989;

c02_09fb:;

	if (v11089 != +120) goto c02_09fc;


void f601_reduce_120(void);
	f601_reduce_120();

	goto c02_0989;

c02_09fc:;

	if (v11089 != +124) goto c02_09fd;


void f602_reduce_124(void);
	f602_reduce_124();

	goto c02_0989;

c02_09fd:;

	if (v11089 != +125) goto c02_09fe;


void f603_reduce_125(void);
	f603_reduce_125();

	goto c02_0989;

c02_09fe:;

	if (v11089 != +131) goto c02_09ff;


void f604_reduce_131(void);
	f604_reduce_131();

	goto c02_0989;

c02_09ff:;

	if (v11089 != +134) goto c02_0a00;


void f605_reduce_134(void);
	f605_reduce_134();

	goto c02_0989;

c02_0a00:;

c02_0989:;


	i8 v11090 = (i8)(intptr_t)(ws+2912);
	i8 v11091 = *(i8*)(intptr_t)v11090;
	i8 v11092 = (i8)(intptr_t)(ws+1240);
	i8 v11093 = *(i8*)(intptr_t)v11092;
	i8 v11094 = v11093+(+24);
	*(i8*)(intptr_t)v11094 = v11091;

	i8 v11095 = (i8)(intptr_t)(((i1*)c02_a83e+0));
	i8 v11096 = (i8)(intptr_t)(ws+2904);
	i2 v11097 = *(i2*)(intptr_t)v11096;
	i1 v11098 = v11097;
	i8 v11099 = v11098;
	i8 v11100 = v11095+v11099;
	i1 v11101 = *(i1*)(intptr_t)v11100;
	i8 v11102 = (i8)(intptr_t)(ws+2993);
	*(i1*)(intptr_t)v11102 = v11101;

	i8 v11103 = (i8)(intptr_t)(ws+1240);
	i8 v11104 = *(i8*)(intptr_t)v11103;
	i2 v11105 = *(i2*)(intptr_t)v11104;
	i8 v11106 = (i8)(intptr_t)(ws+2994);
	*(i2*)(intptr_t)v11106 = v11105;

	i8 v11107 = (i8)(intptr_t)(((i1*)c02_a826+0));
	i8 v11108 = (i8)(intptr_t)(ws+2994);
	i2 v11109 = *(i2*)(intptr_t)v11108;
	i1 v11110 = v11109;
	i8 v11111 = v11110;
	i1 v11112 = (i1)+1;
	i8 v11113 = ((i8)v11111)<<v11112;
	i8 v11114 = v11107+v11113;
	i2 v11115 = *(i2*)(intptr_t)v11114;
	i8 v11116 = (i8)(intptr_t)(ws+2908);
	*(i2*)(intptr_t)v11116 = v11115;

	i2 v11117 = (i2)+106;
	i8 v11118 = (i8)(intptr_t)(ws+2994);
	i2 v11119 = *(i2*)(intptr_t)v11118;
	if (v11117<v11119) goto c02_0a05; else goto c02_0a04;

c02_0a04:;

	i8 v11120 = (i8)(intptr_t)(((i1*)c02_a825+0));
	i8 v11121 = (i8)(intptr_t)(ws+2994);
	i2 v11122 = *(i2*)(intptr_t)v11121;
	i1 v11123 = v11122;
	i8 v11124 = v11123;
	i1 v11125 = (i1)+1;
	i8 v11126 = ((i8)v11124)<<v11125;
	i8 v11127 = v11120+v11126;
	i2 v11128 = *(i2*)(intptr_t)v11127;
	i8 v11129 = (i8)(intptr_t)(ws+2993);
	i1 v11130 = *(i1*)(intptr_t)v11129;
	i2 v11131 = v11130;
	i2 v11132 = v11128+v11131;
	i8 v11133 = (i8)(intptr_t)(ws+2996);
	*(i2*)(intptr_t)v11133 = v11132;

	i8 v11134 = (i8)(intptr_t)(ws+2996);
	i2 v11135 = *(i2*)(intptr_t)v11134;
	i2 v11136 = (i2)+0;
	if (v11135<v11136) goto c02_0a0e; else goto c02_0a10;

c02_0a10:;

	i8 v11137 = (i8)(intptr_t)(ws+2996);
	i2 v11138 = *(i2*)(intptr_t)v11137;
	i2 v11139 = (i2)+1068;
	if (v11138<v11139) goto c02_0a0f; else goto c02_0a0e;

c02_0a0f:;

	i8 v11140 = (i8)(intptr_t)(((i1*)c02_a823+0));
	i8 v11141 = (i8)(intptr_t)(ws+2996);
	i2 v11142 = *(i2*)(intptr_t)v11141;
	i8 v11143 = v11142;
	i8 v11144 = v11140+v11143;
	i1 v11145 = *(i1*)(intptr_t)v11144;
	i8 v11146 = (i8)(intptr_t)(ws+2993);
	i1 v11147 = *(i1*)(intptr_t)v11146;
	if (v11145==v11147) goto c02_0a0d; else goto c02_0a0e;

c02_0a0d:;

	i8 v11148 = (i8)(intptr_t)(((i1*)c02_a822+0));
	i8 v11149 = (i8)(intptr_t)(ws+2996);
	i2 v11150 = *(i2*)(intptr_t)v11149;
	i8 v11151 = v11150;
	i1 v11152 = (i1)+1;
	i8 v11153 = ((i8)v11151)<<v11152;
	i8 v11154 = v11148+v11153;
	i2 v11155 = *(i2*)(intptr_t)v11154;
	i8 v11156 = (i8)(intptr_t)(ws+2908);
	*(i2*)(intptr_t)v11156 = v11155;

	goto c02_0a06;

c02_0a0e:;

c02_0a06:;

	goto c02_0a01;

c02_0a05:;

c02_0a01:;

	i8 v11157 = (i8)(intptr_t)(ws+1240);
	i8 v11158 = *(i8*)(intptr_t)v11157;
	i8 v11159 = v11158+(+16);
	i8 v11160 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11160 = v11159;

	i8 v11161 = (i8)(intptr_t)(ws+2908);
	i2 v11162 = *(i2*)(intptr_t)v11161;
	i8 v11163 = (i8)(intptr_t)(ws+1240);
	i8 v11164 = *(i8*)(intptr_t)v11163;
	*(i2*)(intptr_t)v11164 = v11162;

	i8 v11165 = (i8)(intptr_t)(ws+2993);
	i1 v11166 = *(i1*)(intptr_t)v11165;
	i8 v11167 = (i8)(intptr_t)(ws+1240);
	i8 v11168 = *(i8*)(intptr_t)v11167;
	i8 v11169 = v11168+(+2);
	*(i1*)(intptr_t)v11169 = v11166;

endsub:;
	*p8972 = *(i2*)(intptr_t)(ws+2908);
}

// yy_parse_failed workspace at ws+2904 length ws+0
void f606_yy_parse_failed(void) {


void f483_yy_pop_all_parser_stack(void);
	f483_yy_pop_all_parser_stack();

endsub:;
}
const i1 c02_s01f2[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };

// yy_syntax_error workspace at ws+2904 length ws+16
void f607_yy_syntax_error(i8 p11170 /* yyminor */, i1 p11171 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2904) = p11171; /*yymajor */
	*(i8*)(intptr_t)(ws+2912) = p11170; /*yyminor */


void f55_StartError(void);
	f55_StartError();

	i8 v11172 = (i8)(intptr_t)c02_s01f2;

void f11_print(i8 /* ptr */);
	f11_print(v11172);

	i8 v11173 = (i8)(intptr_t)(((i1*)c02_a827+0));
	i8 v11174 = (i8)(intptr_t)(ws+2904);
	i1 v11175 = *(i1*)(intptr_t)v11174;
	i8 v11176 = v11175;
	i1 v11177 = (i1)+3;
	i8 v11178 = ((i8)v11176)<<v11177;
	i8 v11179 = v11173+v11178;
	i8 v11180 = *(i8*)(intptr_t)v11179;

void f11_print(i8 /* ptr */);
	f11_print(v11180);


void f56_EndError(void);
	f56_EndError();

endsub:;
}

// yy_accept workspace at ws+2904 length ws+0
void f608_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+2880 length ws+0
void f609_ParserInit(void) {

	i1 v11181 = (i1)-1;
	i8 v11182 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11182 = v11181;

	i8 v11183 = (i8)(intptr_t)(ws+1248);
	i8 v11184 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11184 = v11183;

	i2 v11185 = (i2)+0;
	i8 v11186 = (i8)(intptr_t)(ws+1248);
	*(i2*)(intptr_t)v11186 = v11185;

	i1 v11187 = (i1)+0;
	i8 v11188 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v11188 = v11187;

endsub:;
}

// ParserDeinit workspace at ws+2880 length ws+0
void f610_ParserDeinit(void) {

c02_0a13:;

	i8 v11189 = (i8)(intptr_t)(ws+1240);
	i8 v11190 = *(i8*)(intptr_t)v11189;
	i8 v11191 = (i8)(intptr_t)(ws+1248);
	if (v11190==v11191) goto c02_0a16; else goto c02_0a15;

c02_0a15:;


void f482_yy_pop_parser_stack(void);
	f482_yy_pop_parser_stack();

	goto c02_0a13;

c02_0a16:;

endsub:;
}

// ParserFeedToken workspace at ws+2880 length ws+20
void f611_ParserFeedToken(i8 p11192 /* yyminor */, i1 p11193 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2880) = p11193; /*yymajor */
	*(i8*)(intptr_t)(ws+2888) = p11192; /*yyminor */

	i8 v11194 = (i8)(intptr_t)(ws+1240);
	i8 v11195 = *(i8*)(intptr_t)v11194;
	i2 v11196 = *(i2*)(intptr_t)v11195;
	i8 v11197 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11197 = v11196;

c02_0a17:;

	i2 v11198 = (i2)+210;
	i8 v11199 = (i8)(intptr_t)(ws+2896);
	i2 v11200 = *(i2*)(intptr_t)v11199;
	if (v11198<v11200) goto c02_0a1d; else goto c02_0a1c;

c02_0a1c:;

	i8 v11201 = (i8)(intptr_t)(((i1*)c02_a824+0));
	i8 v11202 = (i8)(intptr_t)(ws+2896);
	i2 v11203 = *(i2*)(intptr_t)v11202;
	i1 v11204 = v11203;
	i8 v11205 = v11204;
	i1 v11206 = (i1)+1;
	i8 v11207 = ((i8)v11205)<<v11206;
	i8 v11208 = v11201+v11207;
	i2 v11209 = *(i2*)(intptr_t)v11208;
	i8 v11210 = (i8)(intptr_t)(ws+2880);
	i1 v11211 = *(i1*)(intptr_t)v11210;
	i2 v11212 = v11211;
	i2 v11213 = v11209+v11212;
	i8 v11214 = (i8)(intptr_t)(ws+2898);
	*(i2*)(intptr_t)v11214 = v11213;

	i8 v11215 = (i8)(intptr_t)(((i1*)c02_a823+0));
	i8 v11216 = (i8)(intptr_t)(ws+2898);
	i2 v11217 = *(i2*)(intptr_t)v11216;
	i8 v11218 = v11217;
	i8 v11219 = v11215+v11218;
	i1 v11220 = *(i1*)(intptr_t)v11219;
	i8 v11221 = (i8)(intptr_t)(ws+2880);
	i1 v11222 = *(i1*)(intptr_t)v11221;
	if (v11220==v11222) goto c02_0a22; else goto c02_0a21;

c02_0a21:;

	i8 v11223 = (i8)(intptr_t)(((i1*)c02_a826+0));
	i8 v11224 = (i8)(intptr_t)(ws+2896);
	i2 v11225 = *(i2*)(intptr_t)v11224;
	i1 v11226 = v11225;
	i8 v11227 = v11226;
	i1 v11228 = (i1)+1;
	i8 v11229 = ((i8)v11227)<<v11228;
	i8 v11230 = v11223+v11229;
	i2 v11231 = *(i2*)(intptr_t)v11230;
	i8 v11232 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11232 = v11231;

	goto c02_0a1e;

c02_0a22:;

	i8 v11233 = (i8)(intptr_t)(((i1*)c02_a822+0));
	i8 v11234 = (i8)(intptr_t)(ws+2898);
	i2 v11235 = *(i2*)(intptr_t)v11234;
	i8 v11236 = v11235;
	i1 v11237 = (i1)+1;
	i8 v11238 = ((i8)v11236)<<v11237;
	i8 v11239 = v11233+v11238;
	i2 v11240 = *(i2*)(intptr_t)v11239;
	i8 v11241 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11241 = v11240;

c02_0a1e:;

	goto c02_0a19;

c02_0a1d:;

c02_0a19:;

	i8 v11242 = (i8)(intptr_t)(ws+2896);
	i2 v11243 = *(i2*)(intptr_t)v11242;
	i2 v11244 = (i2)+433;
	if (v11243<v11244) goto c02_0a27; else goto c02_0a26;

c02_0a26:;

	i8 v11245 = (i8)(intptr_t)(ws+2896);
	i2 v11246 = *(i2*)(intptr_t)v11245;
	i2 v11247 = v11246+(-433);
	i8 v11248 = (i8)(intptr_t)(ws+2880);
	i1 v11249 = *(i1*)(intptr_t)v11248;

void f486_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	i2 v11250;
	f486_yy_reduce(&v11250, v11249, v11247);
	i8 v11251 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11251 = v11250;

	goto c02_0a23;

c02_0a27:;

	i2 v11252 = (i2)+429;
	i8 v11253 = (i8)(intptr_t)(ws+2896);
	i2 v11254 = *(i2*)(intptr_t)v11253;
	if (v11252<v11254) goto c02_0a2b; else goto c02_0a2a;

c02_0a2a:;

	i8 v11255 = (i8)(intptr_t)(ws+1240);
	i8 v11256 = *(i8*)(intptr_t)v11255;
	i8 v11257 = (i8)(intptr_t)(ws+2848);
	if (v11256==v11257) goto c02_0a2f; else goto c02_0a30;

c02_0a2f:;


void f484_yy_stack_overflow(void);
	f484_yy_stack_overflow();

	goto endsub;

c02_0a30:;

c02_0a2c:;

	i8 v11258 = (i8)(intptr_t)(ws+1240);
	i8 v11259 = *(i8*)(intptr_t)v11258;
	i8 v11260 = v11259+(+16);
	i8 v11261 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11261 = v11260;

	i2 v11262 = (i2)+210;
	i8 v11263 = (i8)(intptr_t)(ws+2896);
	i2 v11264 = *(i2*)(intptr_t)v11263;
	if (v11262<v11264) goto c02_0a34; else goto c02_0a35;

c02_0a34:;

	i8 v11265 = (i8)(intptr_t)(ws+2896);
	i2 v11266 = *(i2*)(intptr_t)v11265;
	i2 v11267 = v11266+(+138);
	i8 v11268 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11268 = v11267;

	goto c02_0a31;

c02_0a35:;

c02_0a31:;

	i8 v11269 = (i8)(intptr_t)(ws+2896);
	i2 v11270 = *(i2*)(intptr_t)v11269;
	i8 v11271 = (i8)(intptr_t)(ws+1240);
	i8 v11272 = *(i8*)(intptr_t)v11271;
	*(i2*)(intptr_t)v11272 = v11270;

	i8 v11273 = (i8)(intptr_t)(ws+2880);
	i1 v11274 = *(i1*)(intptr_t)v11273;
	i8 v11275 = (i8)(intptr_t)(ws+1240);
	i8 v11276 = *(i8*)(intptr_t)v11275;
	i8 v11277 = v11276+(+2);
	*(i1*)(intptr_t)v11277 = v11274;

	i8 v11278 = (i8)(intptr_t)(ws+2888);
	i8 v11279 = *(i8*)(intptr_t)v11278;
	i8 v11280 = *(i8*)(intptr_t)v11279;
	i8 v11281 = (i8)(intptr_t)(ws+1240);
	i8 v11282 = *(i8*)(intptr_t)v11281;
	i8 v11283 = v11282+(+8);
	*(i8*)(intptr_t)v11283 = v11280;

	i8 v11284 = (i8)(intptr_t)(ws+2864);
	i1 v11285 = *(i1*)(intptr_t)v11284;
	i1 v11286 = (i1)+0;
	if ((s1)v11285<(s1)v11286) goto c02_0a3a; else goto c02_0a39;

c02_0a39:;

	i8 v11287 = (i8)(intptr_t)(ws+2864);
	i1 v11288 = *(i1*)(intptr_t)v11287;
	i1 v11289 = v11288+(-1);
	i8 v11290 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11290 = v11289;

	goto c02_0a36;

c02_0a3a:;

c02_0a36:;

	goto c02_0a18;

c02_0a2b:;

	i8 v11291 = (i8)(intptr_t)(ws+2896);
	i2 v11292 = *(i2*)(intptr_t)v11291;
	i2 v11293 = (i2)+431;
	if (v11292==v11293) goto c02_0a3d; else goto c02_0a3e;

c02_0a3d:;

	i8 v11294 = (i8)(intptr_t)(ws+1240);
	i8 v11295 = *(i8*)(intptr_t)v11294;
	i8 v11296 = v11295+(-16);
	i8 v11297 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11297 = v11296;


void f608_yy_accept(void);
	f608_yy_accept();

	goto c02_0a18;

c02_0a3e:;

	i1 v11298 = (i1)+0;
	i8 v11299 = (i8)(intptr_t)(ws+2864);
	i1 v11300 = *(i1*)(intptr_t)v11299;
	if ((s1)v11298<(s1)v11300) goto c02_0a43; else goto c02_0a42;

c02_0a42:;

	i8 v11301 = (i8)(intptr_t)(ws+2880);
	i1 v11302 = *(i1*)(intptr_t)v11301;
	i8 v11303 = (i8)(intptr_t)(ws+2888);
	i8 v11304 = *(i8*)(intptr_t)v11303;

void f607_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	f607_yy_syntax_error(v11304, v11302);

	goto c02_0a3f;

c02_0a43:;

c02_0a3f:;

	i1 v11305 = (i1)+3;
	i8 v11306 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11306 = v11305;

	i8 v11307 = (i8)(intptr_t)(ws+2880);
	i1 v11308 = *(i1*)(intptr_t)v11307;
	i8 v11309 = (i8)(intptr_t)(ws+2888);
	i8 v11310 = *(i8*)(intptr_t)v11309;

void f480_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f480_yy_destructor(v11310, v11308);

	i8 v11311 = (i8)(intptr_t)(ws+2880);
	i1 v11312 = *(i1*)(intptr_t)v11311;
	i1 v11313 = (i1)+0;
	if (v11312==v11313) goto c02_0a47; else goto c02_0a48;

c02_0a47:;


void f606_yy_parse_failed(void);
	f606_yy_parse_failed();

	i1 v11314 = (i1)-1;
	i8 v11315 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11315 = v11314;

	goto c02_0a44;

c02_0a48:;

c02_0a44:;

	goto c02_0a18;

c02_0a23:;

	i8 v11316 = (i8)(intptr_t)(ws+1240);
	i8 v11317 = *(i8*)(intptr_t)v11316;
	i8 v11318 = (i8)(intptr_t)(ws+1248);
	if (v11317==v11318) goto c02_0a4c; else goto c02_0a4d;

c02_0a4c:;

	goto c02_0a18;

c02_0a4d:;

c02_0a49:;

	goto c02_0a17;

c02_0a18:;

endsub:;
}
const i1 c02_s01f3[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

// PrintFreeMemory workspace at ws+2880 length ws+0
void f612_PrintFreeMemory(void) {


void f35_GetFreeMemory(i8* /* i */);
	i8 v11319;
	f35_GetFreeMemory(&v11319);
	i1 v11320 = (i1)+10;
	i8 v11321 = ((i8)v11319)>>v11320;
	i2 v11322 = v11321;

void f16_print_i16(i2 /* value */);
	f16_print_i16(v11322);

	i8 v11323 = (i8)(intptr_t)c02_s01f3;

void f11_print(i8 /* ptr */);
	f11_print(v11323);

endsub:;
}
const i1 c02_s01f4[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };

// SyntaxError workspace at ws+2888 length ws+0
void f613_SyntaxError(void) {

	i8 v11324 = (i8)(intptr_t)c02_s01f4;

void f11_print(i8 /* ptr */);
	f11_print(v11324);


void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}

// ParseArguments workspace at ws+2880 length ws+8
void f614_ParseArguments(void) {


void f23_ArgvInit(void);
	f23_ArgvInit();

c02_0a4e:;


void f24_ArgvNext(i8* /* arg */);
	i8 v11325;
	f24_ArgvNext(&v11325);
	i8 v11326 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11326 = v11325;

	i8 v11327 = (i8)(intptr_t)(ws+2880);
	i8 v11328 = *(i8*)(intptr_t)v11327;
	i8 v11329 = (i8)+0;
	if (v11328==v11329) goto c02_0a53; else goto c02_0a54;

c02_0a53:;

	goto c02_0a4f;

c02_0a54:;

c02_0a50:;

	i8 v11330 = (i8)(intptr_t)(ws+2880);
	i8 v11331 = *(i8*)(intptr_t)v11330;
	i1 v11332 = *(i1*)(intptr_t)v11331;
	i1 v11333 = (i1)+45;
	if (v11332==v11333) goto c02_0a58; else goto c02_0a59;

c02_0a58:;

	i8 v11334 = (i8)(intptr_t)(ws+2880);
	i8 v11335 = *(i8*)(intptr_t)v11334;
	i8 v11336 = v11335+(+1);
	i8 v11337 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11337 = v11336;

	i8 v11338 = (i8)(intptr_t)(ws+2880);
	i8 v11339 = *(i8*)(intptr_t)v11338;
	i1 v11340 = *(i1*)(intptr_t)v11339;
	i1 v11341 = (i1)+73;
	if (v11340==v11341) goto c02_0a5d; else goto c02_0a5e;

c02_0a5d:;

	i8 v11342 = (i8)(intptr_t)(ws+2880);
	i8 v11343 = *(i8*)(intptr_t)v11342;
	i8 v11344 = v11343+(+1);
	i8 v11345 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11345 = v11344;

	i8 v11346 = (i8)(intptr_t)(ws+2880);
	i8 v11347 = *(i8*)(intptr_t)v11346;

void f58_LexerAddIncludePath(i8 /* path */);
	f58_LexerAddIncludePath(v11347);

	goto c02_0a5a;

c02_0a5e:;


void f613_SyntaxError(void);
	f613_SyntaxError();

c02_0a5a:;

	goto c02_0a55;

c02_0a59:;

	i8 v11348 = (i8)(intptr_t)(ws+24);
	i8 v11349 = *(i8*)(intptr_t)v11348;
	i8 v11350 = (i8)+0;
	if (v11349==v11350) goto c02_0a62; else goto c02_0a63;

c02_0a62:;

	i8 v11351 = (i8)(intptr_t)(ws+2880);
	i8 v11352 = *(i8*)(intptr_t)v11351;
	i8 v11353 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11353 = v11352;

	goto c02_0a5f;

c02_0a63:;

	i8 v11354 = (i8)(intptr_t)(ws+32);
	i8 v11355 = *(i8*)(intptr_t)v11354;
	i8 v11356 = (i8)+0;
	if (v11355==v11356) goto c02_0a66; else goto c02_0a67;

c02_0a66:;

	i8 v11357 = (i8)(intptr_t)(ws+2880);
	i8 v11358 = *(i8*)(intptr_t)v11357;
	i8 v11359 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11359 = v11358;

	goto c02_0a5f;

c02_0a67:;


void f613_SyntaxError(void);
	f613_SyntaxError();

c02_0a5f:;

c02_0a55:;

	goto c02_0a4e;

c02_0a4f:;

	i8 v11360 = (i8)(intptr_t)(ws+24);
	i8 v11361 = *(i8*)(intptr_t)v11360;
	i8 v11362 = (i8)+0;
	if (v11361==v11362) goto c02_0a6d; else goto c02_0a6f;

c02_0a6f:;

	i8 v11363 = (i8)(intptr_t)(ws+32);
	i8 v11364 = *(i8*)(intptr_t)v11363;
	i8 v11365 = (i8)+0;
	if (v11364==v11365) goto c02_0a6d; else goto c02_0a6e;

c02_0a6d:;


void f613_SyntaxError(void);
	f613_SyntaxError();

	goto c02_0a68;

c02_0a6e:;

c02_0a68:;

endsub:;
}
const i1 c02_s01f5[] = { 0x43,0x4f,0x57,0x43,0x4f,0x4d,0x3a,0x20,0 };
const i1 c02_s01f6[] = { 0 };
const i1 c02_s01f7[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
const i1 c02_s01f8[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };

// __main workspace at ws+0 length ws+2880
void f3___main(void) {

	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



















































	i8 v792 = (i8)+0;
	i8 v793 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v793 = v792;

	i8 v794 = (i8)+0;
	i8 v795 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v795 = v794;

	i2 v796 = (i2)+1;
	i8 v797 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v797 = v796;

	i2 v798 = (i2)+1;
	i8 v799 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v799 = v798;




	i8 v887 = (i8)+0;
	i8 v888 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v888 = v887;

	i8 v889 = (i8)+0;
	i8 v890 = (i8)(intptr_t)(ws+96);
	*(i8*)(intptr_t)v890 = v889;

	i1 v891 = (i1)+0;
	i8 v892 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v892 = v891;

	i1 v893 = (i1)+0;
	i8 v894 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v894 = v893;








	i1 v929 = (i1)+0;
	i8 v930 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v930 = v929;





































































































































	i8 v4161 = (i8)(intptr_t)(ws+856);
	i8 v4162 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v4162 = v4161;






	i2 v4257 = (i2)+1;
	i8 v4258 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4258 = v4257;

	i8 v4259 = (i8)+0;
	i8 v4260 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v4260 = v4259;






























	i2 v5059 = (i2)+0;
	i8 v5060 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5060 = v5059;


	i1 v5106 = (i1)+0;
	i8 v5107 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5107 = v5106;




















	i1 v7618 = (i1)+0;
	i8 v7619 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v7619 = v7618;






























































	i8 v11366 = (i8)(intptr_t)c02_s01f5;

void f11_print(i8 /* ptr */);
	f11_print(v11366);


void f612_PrintFreeMemory(void);
	f612_PrintFreeMemory();


void f614_ParseArguments(void);
	f614_ParseArguments();

	i8 v11367 = (i8)(intptr_t)c02_s01f6;

void f58_LexerAddIncludePath(i8 /* path */);
	f58_LexerAddIncludePath(v11367);

	i8 v11368 = (i8)(intptr_t)(ws+24);
	i8 v11369 = *(i8*)(intptr_t)v11368;

void f62_LexerIncludeFile(i8 /* path */);
	f62_LexerIncludeFile(v11369);

	i8 v11370 = (i8)+91;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v11371;
	f31_Alloc(&v11371, v11370);
	i8 v11372 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v11372 = v11371;

	i8 v11373 = (i8)(intptr_t)c02_s01f7;
	i8 v11374 = (i8)(intptr_t)(ws+40);
	i8 v11375 = *(i8*)(intptr_t)v11374;
	*(i8*)(intptr_t)v11375 = v11373;


void f212_ArchInitTypes(void);
	f212_ArchInitTypes();

	i8 v11376 = (i8)(intptr_t)(ws+32);
	i8 v11377 = *(i8*)(intptr_t)v11376;

void f174_EmitterOpenfile(i8 /* filename */);
	f174_EmitterOpenfile(v11377);

	i8 v11378 = (i8)(intptr_t)(ws+40);
	i8 v11379 = *(i8*)(intptr_t)v11378;

void f176_EmitterDeclareSubroutine(i8 /* subr */);
	f176_EmitterDeclareSubroutine(v11379);


void f137_MidStartfile(i8* /* m */);
	i8 v11380;
	f137_MidStartfile(&v11380);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11380);

	i8 v11381 = (i8)(intptr_t)(ws+40);
	i8 v11382 = *(i8*)(intptr_t)v11381;

void f109_MidStartsub(i8* /* m */, i8 /* subr */);
	i8 v11383;
	f109_MidStartsub(&v11383, v11382);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11383);


void f609_ParserInit(void);
	f609_ParserInit();

c02_0a70:;


void f63_LexerReadToken(i1* /* token */);
	i1 v11384;
	f63_LexerReadToken(&v11384);
	i8 v11385 = (i8)(intptr_t)(ws+2865);
	*(i1*)(intptr_t)v11385 = v11384;

	i8 v11386 = (i8)(intptr_t)(ws+2865);
	i1 v11387 = *(i1*)(intptr_t)v11386;

	if (v11387 != +34) goto c02_0a73;

	i8 v11388 = (i8)(intptr_t)(ws+236);
	i4 v11389 = *(i4*)(intptr_t)v11388;
	i8 v11390 = (i8)(intptr_t)(ws+2872);
	*(i4*)(intptr_t)v11390 = v11389;

	goto c02_0a72;

c02_0a73:;

	if (v11387 != +33) goto c02_0a74;

	i8 v11391 = (i8)(intptr_t)(ws+105);

void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v11392;
	f33_StrDup(&v11392, v11391);
	i8 v11393 = (i8)(intptr_t)(ws+2872);
	*(i8*)(intptr_t)v11393 = v11392;

	goto c02_0a72;

c02_0a74:;

	if (v11387 != +41) goto c02_0a75;

	i8 v11394 = (i8)(intptr_t)(ws+105);

void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v11395;
	f33_StrDup(&v11395, v11394);
	i8 v11396 = (i8)(intptr_t)(ws+2872);
	*(i8*)(intptr_t)v11396 = v11395;

	goto c02_0a72;

c02_0a75:;

	i4 v11397 = (i4)+0;
	i8 v11398 = (i8)(intptr_t)(ws+2872);
	*(i4*)(intptr_t)v11398 = v11397;

c02_0a72:;


	i8 v11399 = (i8)(intptr_t)(ws+2865);
	i1 v11400 = *(i1*)(intptr_t)v11399;
	i8 v11401 = (i8)(intptr_t)(ws+2872);

void f611_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	f611_ParserFeedToken(v11401, v11400);

	i8 v11402 = (i8)(intptr_t)(ws+2865);
	i1 v11403 = *(i1*)(intptr_t)v11402;
	i1 v11404 = (i1)+0;
	if (v11403==v11404) goto c02_0a79; else goto c02_0a7a;

c02_0a79:;

	goto c02_0a71;

c02_0a7a:;

c02_0a76:;

	goto c02_0a70;

c02_0a71:;


void f610_ParserDeinit(void);
	f610_ParserDeinit();

	i8 v11405 = (i8)(intptr_t)(ws+40);
	i8 v11406 = *(i8*)(intptr_t)v11405;

void f85_MidEndsub(i8* /* m */, i8 /* subr */);
	i8 v11407;
	f85_MidEndsub(&v11407, v11406);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11407);


void f129_MidEndfile(i8* /* m */);
	i8 v11408;
	f129_MidEndfile(&v11408);

void f437_Generate(i8 /* statement */);
	f437_Generate(v11408);


void f175_EmitterClosefile(void);
	f175_EmitterClosefile();

	i8 v11409 = (i8)(intptr_t)c02_s01f8;

void f11_print(i8 /* ptr */);
	f11_print(v11409);


void f612_PrintFreeMemory(void);
	f612_PrintFreeMemory();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                              