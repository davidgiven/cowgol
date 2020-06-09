#include "cowgol.h"
static i8 workspace[0x01b0];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+3304 length ws+0
void f6_ExitWithError(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+3432 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+3432) = p10; /*buf */
	*(i1*)(intptr_t)(ws+3440) = p9; /*byte */
	*(i8*)(intptr_t)(ws+3448) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3432) 
,  
*(i1*)(intptr_t)(ws+3440) 
,  
*(i8*)(intptr_t)(ws+3448) 
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
	i8 v145;
	f13_UIToA(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+3316);
	f11_print(v147);

endsub:;
}

// print_i16 workspace at ws+3304 length ws+2
void f16_print_i16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+3304) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+3304);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;
	f15_print_i32(v151);

endsub:;
}

// print_i8 workspace at ws+3248 length ws+1
void f17_print_i8(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+3248) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+3248);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;
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
	f18_print_hex_i8(v194);

	i8 v195 = (i8)(intptr_t)(ws+3200);
	i2 v196 = *(i2*)(intptr_t)v195;
	i1 v197 = v196;
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
	f18_print_hex_i8(v203);

	i8 v204 = (i8)(intptr_t)(ws+3208);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;
	f18_print_hex_i8(v208);

	i8 v209 = (i8)(intptr_t)(ws+3208);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	f18_print_hex_i8(v213);

	i8 v214 = (i8)(intptr_t)(ws+3208);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;
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

// Free workspace at ws+3336 length ws+8
void f32_Free(i8 p488 /* block */) {
	*(i8*)(intptr_t)(ws+3336) = p488; /*block */

	
free((void*) 
*(i8*)(intptr_t)(ws+3336) 
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

// fcb_i_blockin workspace at ws+3400 length ws+28
void f36_fcb_i_blockin(i8 p494 /* fcb */) {
	*(i8*)(intptr_t)(ws+3400) = p494; /*fcb */

	i8 v495 = (i8)(intptr_t)(ws+3400);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+12);
	i1 v498 = (i1)+0;
	i8 v499 = (i8)+512;
	f7_MemSet(v499, v498, v497);

	i8 v500 = (i8)(intptr_t)(ws+3400);
	i8 v501 = *(i8*)(intptr_t)v500;
	i4 v502 = *(i4*)(intptr_t)v501;
	i8 v503 = (i8)(intptr_t)(ws+3408);
	*(i4*)(intptr_t)v503 = v502;

	i8 v504 = (i8)(intptr_t)(ws+3400);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+12);
	i8 v507 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+3400);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+8);
	i4 v511 = *(i4*)(intptr_t)v510;
	i1 v512 = (i1)+9;
	i4 v513 = ((i4)v511)<<v512;
	i8 v514 = (i8)(intptr_t)(ws+3424);
	*(i4*)(intptr_t)v514 = v513;

	
pread( 
*(i4*)(intptr_t)(ws+3408) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3416) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3424) 
); 


	i1 v515 = (i1)+0;
	i8 v516 = (i8)(intptr_t)(ws+3400);
	i8 v517 = *(i8*)(intptr_t)v516;
	i8 v518 = v517+(+6);
	*(i1*)(intptr_t)v518 = v515;

endsub:;
}

// fcb_i_blockout workspace at ws+3400 length ws+28
void f37_fcb_i_blockout(i8 p519 /* fcb */) {
	*(i8*)(intptr_t)(ws+3400) = p519; /*fcb */

	i8 v520 = (i8)(intptr_t)(ws+3400);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = v521+(+6);
	i1 v523 = *(i1*)(intptr_t)v522;
	i1 v524 = (i1)+0;
	if (v523==v524) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v525 = (i8)(intptr_t)(ws+3400);
	i8 v526 = *(i8*)(intptr_t)v525;
	i4 v527 = *(i4*)(intptr_t)v526;
	i8 v528 = (i8)(intptr_t)(ws+3408);
	*(i4*)(intptr_t)v528 = v527;

	i8 v529 = (i8)(intptr_t)(ws+3400);
	i8 v530 = *(i8*)(intptr_t)v529;
	i8 v531 = v530+(+12);
	i8 v532 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v532 = v531;

	i8 v533 = (i8)(intptr_t)(ws+3400);
	i8 v534 = *(i8*)(intptr_t)v533;
	i8 v535 = v534+(+8);
	i4 v536 = *(i4*)(intptr_t)v535;
	i1 v537 = (i1)+9;
	i4 v538 = ((i4)v536)<<v537;
	i8 v539 = (i8)(intptr_t)(ws+3424);
	*(i4*)(intptr_t)v539 = v538;

	
pwrite( 
*(i4*)(intptr_t)(ws+3408) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3416) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3424) 
); 


	i1 v540 = (i1)+0;
	i8 v541 = (i8)(intptr_t)(ws+3400);
	i8 v542 = *(i8*)(intptr_t)v541;
	i8 v543 = v542+(+6);
	*(i1*)(intptr_t)v543 = v540;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}

// fcb_i_changeblock workspace at ws+3384 length ws+12
void f38_fcb_i_changeblock(i4 p544 /* newblock */, i8 p545 /* fcb */) {
	*(i8*)(intptr_t)(ws+3384) = p545; /*fcb */
	*(i4*)(intptr_t)(ws+3392) = p544; /*newblock */

	i8 v546 = (i8)(intptr_t)(ws+3392);
	i4 v547 = *(i4*)(intptr_t)v546;
	i8 v548 = (i8)(intptr_t)(ws+3384);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+8);
	i4 v551 = *(i4*)(intptr_t)v550;
	if (v547==v551) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v552 = (i8)(intptr_t)(ws+3384);
	i8 v553 = *(i8*)(intptr_t)v552;
	f37_fcb_i_blockout(v553);

	i8 v554 = (i8)(intptr_t)(ws+3392);
	i4 v555 = *(i4*)(intptr_t)v554;
	i8 v556 = (i8)(intptr_t)(ws+3384);
	i8 v557 = *(i8*)(intptr_t)v556;
	i8 v558 = v557+(+8);
	*(i4*)(intptr_t)v558 = v555;

	i8 v559 = (i8)(intptr_t)(ws+3384);
	i8 v560 = *(i8*)(intptr_t)v559;
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

// fcb_i_nextchar workspace at ws+3376 length ws+8
void f47_fcb_i_nextchar(i8 p678 /* fcb */) {
	*(i8*)(intptr_t)(ws+3376) = p678; /*fcb */

	i8 v679 = (i8)(intptr_t)(ws+3376);
	i8 v680 = *(i8*)(intptr_t)v679;
	i8 v681 = v680+(+4);
	i2 v682 = *(i2*)(intptr_t)v681;
	i2 v683 = v682+(+1);
	i8 v684 = (i8)(intptr_t)(ws+3376);
	i8 v685 = *(i8*)(intptr_t)v684;
	i8 v686 = v685+(+4);
	*(i2*)(intptr_t)v686 = v683;

	i8 v687 = (i8)(intptr_t)(ws+3376);
	i8 v688 = *(i8*)(intptr_t)v687;
	i8 v689 = v688+(+4);
	i2 v690 = *(i2*)(intptr_t)v689;
	i2 v691 = (i2)+512;
	if (v690==v691) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v692 = (i8)(intptr_t)(ws+3376);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = (i8)(intptr_t)(ws+3376);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v695+(+8);
	i4 v697 = *(i4*)(intptr_t)v696;
	i4 v698 = v697+(+1);
	f38_fcb_i_changeblock(v698, v693);

	i2 v699 = (i2)+0;
	i8 v700 = (i8)(intptr_t)(ws+3376);
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

// FCBPutChar workspace at ws+3360 length ws+9
void f49_FCBPutChar(i1 p718 /* c */, i8 p719 /* fcb */) {
	*(i8*)(intptr_t)(ws+3360) = p719; /*fcb */
	*(i1*)(intptr_t)(ws+3368) = p718; /*c */

	i8 v720 = (i8)(intptr_t)(ws+3360);
	i8 v721 = *(i8*)(intptr_t)v720;
	f47_fcb_i_nextchar(v721);

	i8 v722 = (i8)(intptr_t)(ws+3368);
	i1 v723 = *(i1*)(intptr_t)v722;
	i8 v724 = (i8)(intptr_t)(ws+3360);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+12);
	i8 v727 = (i8)(intptr_t)(ws+3360);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i8 v731 = v730;
	i8 v732 = v726+v731;
	*(i1*)(intptr_t)v732 = v723;

	i1 v733 = (i1)+1;
	i8 v734 = (i8)(intptr_t)(ws+3360);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+6);
	*(i1*)(intptr_t)v736 = v733;

endsub:;
}

// FCBPutString workspace at ws+3336 length ws+17
void f50_FCBPutString(i8 p737 /* s */, i8 p738 /* fcb */) {
	*(i8*)(intptr_t)(ws+3336) = p738; /*fcb */
	*(i8*)(intptr_t)(ws+3344) = p737; /*s */

c02_009d:;

	i8 v739 = (i8)(intptr_t)(ws+3344);
	i8 v740 = *(i8*)(intptr_t)v739;
	i1 v741 = *(i1*)(intptr_t)v740;
	i8 v742 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v742 = v741;

	i8 v743 = (i8)(intptr_t)(ws+3352);
	i1 v744 = *(i1*)(intptr_t)v743;
	i1 v745 = (i1)+0;
	if (v744==v745) goto c02_00a2; else goto c02_00a3;

c02_00a2:;

	goto c02_009e;

c02_00a3:;

c02_009f:;

	i8 v746 = (i8)(intptr_t)(ws+3336);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = (i8)(intptr_t)(ws+3352);
	i1 v749 = *(i1*)(intptr_t)v748;
	f49_FCBPutChar(v749, v747);

	i8 v750 = (i8)(intptr_t)(ws+3344);
	i8 v751 = *(i8*)(intptr_t)v750;
	i8 v752 = v751+(+1);
	i8 v753 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v753 = v752;

	goto c02_009d;

c02_009e:;

endsub:;
}

// StrDupBraced workspace at ws+3064 length ws+32
void f53_StrDupBraced(i8* p800 /* news */, i8 p801 /* s */) {
	*(i8*)(intptr_t)(ws+3064) = p801; /*s */

	i8 v802 = (i8)(intptr_t)(ws+3064);
	i8 v803 = *(i8*)(intptr_t)v802;
	i8 v804;
	f28_StrLen(&v804, v803);
	i8 v805 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v805 = v804;

	i8 v806 = (i8)(intptr_t)(ws+3080);
	i8 v807 = *(i8*)(intptr_t)v806;
	i8 v808 = v807+(+3);
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
	i8 v848;
	f28_StrLen(&v848, v847);
	i8 v849 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v849 = v848;

	i8 v850 = (i8)(intptr_t)(ws+3056);
	i8 v851 = *(i8*)(intptr_t)v850;
	i8 v852 = v851+(+3);
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








	{ .i1 = { 0x00,0x00,0x00,0x00,0x92,0xb8,0x00,0x90}},








	{ .i1 = { 0x84,0x98,0x93,0xaa,0x8e,0x88,0x97,0x21}},








	{ .i1 = { 0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21}},








	{ .i1 = { 0x21,0x86,0x96,0x00,0x00,0x00,0x00,0x10}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x91,0x00,0x85,0xae,0x30,0x00}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},







	{ .i1 = { 0x30,0x30,0x9f,0xad,0xa0,0x9b}},
};
const i1 c02_s0005[] = { 0x40,0x61,0x6c,0x69,0x61,0x73,0 };
const i1 c02_s0006[] = { 0x40,0x61,0x73,0x6d,0 };
const i1 c02_s0007[] = { 0x40,0x61,0x74,0 };
const i1 c02_s0008[] = { 0x40,0x62,0x79,0x74,0x65,0x73,0x6f,0x66,0 };
const i1 c02_s0009[] = { 0x40,0x69,0x6e,0x64,0x65,0x78,0x6f,0x66,0 };
const i1 c02_s000a[] = { 0x40,0x73,0x69,0x7a,0x65,0x6f,0x66,0 };
const i1 c02_s000b[] = { 0x40,0x6e,0x65,0x78,0x74,0 };
const i1 c02_s000c[] = { 0x40,0x70,0x72,0x65,0x76,0 };
const i1 c02_s000d[] = { 0x61,0x6e,0x64,0 };
const i1 c02_s000e[] = { 0x61,0x73,0 };
const i1 c02_s000f[] = { 0x62,0x72,0x65,0x61,0x6b,0 };
const i1 c02_s0010[] = { 0x63,0x61,0x73,0x65,0 };
const i1 c02_s0011[] = { 0x63,0x6f,0x6e,0x73,0x74,0 };
const i1 c02_s0012[] = { 0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0 };
const i1 c02_s0013[] = { 0x65,0x6c,0x73,0x65,0 };
const i1 c02_s0014[] = { 0x65,0x6c,0x73,0x65,0x69,0x66,0 };
const i1 c02_s0015[] = { 0x65,0x6e,0x64,0 };
const i1 c02_s0016[] = { 0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s0017[] = { 0x69,0x66,0 };
const i1 c02_s0018[] = { 0x69,0x73,0 };
const i1 c02_s0019[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0 };
const i1 c02_s001a[] = { 0x69,0x6e,0x74,0 };
const i1 c02_s001b[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c02_s001c[] = { 0x6e,0x6f,0x74,0 };
const i1 c02_s001d[] = { 0x6f,0x72,0 };
const i1 c02_s001e[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s001f[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c02_s0020[] = { 0x73,0x75,0x62,0 };
const i1 c02_s0021[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c02_s0022[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c02_s0023[] = { 0x76,0x61,0x72,0 };
const i1 c02_s0024[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c02_s0025[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
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

};
static data c02_ab3[] = { // keyword_ids








	{ .i1 = { 0x40,0x01,0x23,0x24,0x3b,0x28,0x39,0x3a}},








	{ .i1 = { 0x2b,0x37,0x03,0x3d,0x07,0x3c,0x09,0x25}},








	{ .i1 = { 0x0a,0x0b,0x0c,0x3e,0xff,0x26,0x0d,0x0f}},








	{ .i1 = { 0x2c,0x14,0x15,0x19,0x1a,0x27,0x1c,0x3f}},


	{ .i1 = { 0x1d}},
};
const i1 c02_s0026[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
const i1 c02_s0027[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
const i1 c02_s0028[] = { 0x3a,0x20,0 };
const i1 c02_s0029[] = { 0x3a,0x20,0 };

// StartError workspace at ws+3304 length ws+0
void f55_StartError(void) {

	i8 v895 = (i8)(intptr_t)c02_s0026;
	f11_print(v895);

	i8 v896 = (i8)(intptr_t)(ws+96);
	i8 v897 = *(i8*)(intptr_t)v896;
	i8 v898 = (i8)+0;
	if (v897==v898) goto c02_00b7; else goto c02_00b8;

c02_00b7:;

	i8 v899 = (i8)(intptr_t)c02_s0027;
	f11_print(v899);

	goto c02_00b4;

c02_00b8:;

	i8 v900 = (i8)(intptr_t)(ws+96);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = v901+(+8);
	i8 v903 = *(i8*)(intptr_t)v902;
	f11_print(v903);

	i8 v904 = (i8)(intptr_t)c02_s0028;
	f11_print(v904);

	i8 v905 = (i8)(intptr_t)(ws+96);
	i8 v906 = *(i8*)(intptr_t)v905;
	i8 v907 = v906+(+16);
	i2 v908 = *(i2*)(intptr_t)v907;
	f16_print_i16(v908);

c02_00b4:;

	i8 v909 = (i8)(intptr_t)c02_s0029;
	f11_print(v909);

endsub:;
}

// EndError workspace at ws+3304 length ws+0
void f56_EndError(void) {

	f12_print_nl();

	f6_ExitWithError();

endsub:;
}

// SimpleError workspace at ws+3296 length ws+8
void f57_SimpleError(i8 p910 /* message */) {
	*(i8*)(intptr_t)(ws+3296) = p910; /*message */

	f55_StartError();

	i8 v911 = (i8)(intptr_t)(ws+3296);
	i8 v912 = *(i8*)(intptr_t)v911;
	f11_print(v912);

	f56_EndError();

endsub:;
}

// LexerAddIncludePath workspace at ws+2888 length ws+16
void f58_LexerAddIncludePath(i8 p913 /* path */) {
	*(i8*)(intptr_t)(ws+2888) = p913; /*path */

	i8 v914 = (i8)+16;
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
const i1 c02_s002a[] = { 0x20,0x20,0 };

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

	i8 v937 = (i8)(intptr_t)c02_s002a;
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
	f44_FCBSeek(v965, v961);

	i1 v966 = (i1)+0;
	i8 v967 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v967 = v966;

	goto c02_00bf;

c02_00c3:;

	i8 v968 = (i8)(intptr_t)(ws+2952);
	i8 v969 = *(i8*)(intptr_t)v968;
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
	i1 v985;
	f43_FCBClose(&v985, v984);
	i8 v986 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v986 = v985;

	i8 v987 = (i8)(intptr_t)(ws+2936);
	i8 v988 = *(i8*)(intptr_t)v987;
	i8 v989 = v988+(+24);
	i8 v990 = *(i8*)(intptr_t)v989;
	f32_Free(v990);

endsub:;
}
const i1 c02_s002b[] = { 0x3e,0x20,0 };
const i1 c02_s002c[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s002d[] = { 0x27,0 };

// LexerIncludeFile workspace at ws+2896 length ws+40
void f62_LexerIncludeFile(i8 p991 /* path */) {
	*(i8*)(intptr_t)(ws+2896) = p991; /*path */

	i8 v992 = (i8)+32;
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
	f30_MemCopy(v1050, v1043, v1040);

	i8 v1051 = (i8)(intptr_t)(ws+2904);
	i8 v1052 = *(i8*)(intptr_t)v1051;
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

	f59_LexerPrintSpaces();

	i8 v1059 = (i8)(intptr_t)c02_s002b;
	f11_print(v1059);

	i8 v1060 = (i8)(intptr_t)(ws+2904);
	i8 v1061 = *(i8*)(intptr_t)v1060;
	i8 v1062 = v1061+(+8);
	i8 v1063 = *(i8*)(intptr_t)v1062;
	f11_print(v1063);

	f12_print_nl();

	i8 v1064 = (i8)(intptr_t)(ws+96);
	i8 v1065 = *(i8*)(intptr_t)v1064;
	i8 v1066 = (i8)+0;
	if (v1065==v1066) goto c02_00d3; else goto c02_00d2;

c02_00d2:;

	i8 v1067 = (i8)(intptr_t)(ws+96);
	i8 v1068 = *(i8*)(intptr_t)v1067;
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
	f32_Free(v1075);

	i8 v1076 = (i8)(intptr_t)(ws+2912);
	i8 v1077 = *(i8*)(intptr_t)v1076;
	i8 v1078 = *(i8*)(intptr_t)v1077;
	i8 v1079 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v1079 = v1078;

	goto c02_00c6;

c02_00c9:;

	f55_StartError();

	i8 v1080 = (i8)(intptr_t)c02_s002c;
	f11_print(v1080);

	i8 v1081 = (i8)(intptr_t)(ws+2896);
	i8 v1082 = *(i8*)(intptr_t)v1081;
	f11_print(v1082);

	i8 v1083 = (i8)(intptr_t)c02_s002d;
	f11_print(v1083);

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
const i1 c02_s002e[] = { 0x3c,0x20,0 };
const i1 c02_s002f[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };

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
	f61_lexer_i_close(v1152);

	i8 v1153 = (i8)(intptr_t)(ws+2920);
	i8 v1154 = *(i8*)(intptr_t)v1153;
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

	f59_LexerPrintSpaces();

	i8 v1162 = (i8)(intptr_t)c02_s002e;
	f11_print(v1162);

	i8 v1163 = (i8)(intptr_t)(ws+96);
	i8 v1164 = *(i8*)(intptr_t)v1163;
	i8 v1165 = v1164+(+8);
	i8 v1166 = *(i8*)(intptr_t)v1165;
	f11_print(v1166);

	f12_print_nl();

	i8 v1167 = (i8)(intptr_t)(ws+96);
	i8 v1168 = *(i8*)(intptr_t)v1167;
	i1 v1169;
	f60_lexer_i_open(&v1169, v1168);
	i1 v1170 = (i1)+0;
	if (v1169==v1170) goto c02_0100; else goto c02_00ff;

c02_00ff:;

	i8 v1171 = (i8)(intptr_t)c02_s002f;
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
const i1 c02_s0030[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };

// lexer_i_unparseable workspace at ws+2888 length ws+1
void f66_lexer_i_unparseable(i1 p1172 /* c */) {
	*(i1*)(intptr_t)(ws+2888) = p1172; /*c */

	f55_StartError();

	i8 v1173 = (i8)(intptr_t)c02_s0030;
	f11_print(v1173);

	i8 v1174 = (i8)(intptr_t)(ws+2888);
	i1 v1175 = *(i1*)(intptr_t)v1174;
	f18_print_hex_i8(v1175);

	f56_EndError();

endsub:;
}

// lexer_i_skipwhitespace workspace at ws+2896 length ws+1
void f67_lexer_i_skipwhitespace(void) {

c02_0101:;

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
const i1 c02_s0031[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// lexer_i_read_identifier workspace at ws+2888 length ws+3
void f68_lexer_i_read_identifier(void) {

c02_0108:;

	i1 v1191;
	f65_lexer_i_getchar(&v1191);
	i8 v1192 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1192 = v1191;

	i8 v1193 = (i8)(intptr_t)(ws+2888);
	i1 v1194 = *(i1*)(intptr_t)v1193;
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

	f55_StartError();

	i8 v1217 = (i8)(intptr_t)c02_s0031;
	f11_print(v1217);

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
	i1 v1232 = (i1)+33;
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
const i1 c02_s0032[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };

// lexer_i_read_number workspace at ws+2896 length ws+7
void f70_lexer_i_read_number(void) {

	i4 v1257 = (i4)+0;
	i8 v1258 = (i8)(intptr_t)(ws+236);
	*(i4*)(intptr_t)v1258 = v1257;

	i4 v1259 = (i4)+10;
	i8 v1260 = (i8)(intptr_t)(ws+2896);
	*(i4*)(intptr_t)v1260 = v1259;

	i1 v1261;
	f65_lexer_i_getchar(&v1261);
	i8 v1262 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1262 = v1261;

	i8 v1263 = (i8)(intptr_t)(ws+2902);
	i1 v1264 = *(i1*)(intptr_t)v1263;
	i1 v1265 = (i1)+48;
	if (v1264==v1265) goto c02_0122; else goto c02_0123;

c02_0122:;

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

	i1 v1294;
	f65_lexer_i_getchar(&v1294);
	i1 v1295;
	f26_ToLower(&v1295, v1294);
	i8 v1296 = (i8)(intptr_t)(ws+2902);
	*(i1*)(intptr_t)v1296 = v1295;

	i8 v1297 = (i8)(intptr_t)(ws+2902);
	i1 v1298 = *(i1*)(intptr_t)v1297;
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

	f55_StartError();

	i8 v1326 = (i8)(intptr_t)c02_s0032;
	f11_print(v1326);

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
const i1 c02_s0033[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };

// lexer_i_malformed workspace at ws+2912 length ws+8
void f71_lexer_i_malformed(i8 p1337 /* s */) {
	*(i8*)(intptr_t)(ws+2912) = p1337; /*s */

	f55_StartError();

	i8 v1338 = (i8)(intptr_t)c02_s0033;
	f11_print(v1338);

	i8 v1339 = (i8)(intptr_t)(ws+2912);
	i8 v1340 = *(i8*)(intptr_t)v1339;
	f11_print(v1340);

	f56_EndError();

endsub:;
}
const i1 c02_s0034[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };

// lexer_i_get_escaped workspace at ws+2904 length ws+1
void f72_lexer_i_get_escaped(i1* p1341 /* c */) {

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

	i8 v1360 = (i8)(intptr_t)c02_s0034;
	f71_lexer_i_malformed(v1360);

c02_013f:;


endsub:;
	*p1341 = *(i1*)(intptr_t)(ws+2904);
}
const i1 c02_s0035[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
const i1 c02_s0036[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// lexer_i_read_string workspace at ws+2896 length ws+1
void f73_lexer_i_read_string(void) {

	i1 v1361 = (i1)+0;
	i8 v1362 = (i8)(intptr_t)(ws+233);
	*(i1*)(intptr_t)v1362 = v1361;

c02_0147:;

	i1 v1363;
	f65_lexer_i_getchar(&v1363);
	i8 v1364 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1364 = v1363;

	i8 v1365 = (i8)(intptr_t)(ws+2896);
	i1 v1366 = *(i1*)(intptr_t)v1365;
	i1 v1367 = (i1)+32;
	if (v1366<v1367) goto c02_014c; else goto c02_014d;

c02_014c:;

	i8 v1368 = (i8)(intptr_t)c02_s0035;
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

	f55_StartError();

	i8 v1387 = (i8)(intptr_t)c02_s0036;
	f11_print(v1387);

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
const i1 c02_s0037[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };

// malformed workspace at ws+2896 length ws+0
void f75_malformed(void) {

	i8 v1394 = (i8)(intptr_t)c02_s0037;
	f71_lexer_i_malformed(v1394);

endsub:;
}

// lexer_i_read_char workspace at ws+2888 length ws+1
void f74_lexer_i_read_char(void) {


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

	f75_malformed();

	goto c02_0156;

c02_015c:;

c02_0156:;

	i8 v1403 = (i8)(intptr_t)(ws+2888);
	i1 v1404 = *(i1*)(intptr_t)v1403;
	i1 v1405 = (i1)+92;
	if (v1404==v1405) goto c02_0161; else goto c02_0162;

c02_0161:;

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

	i1 v1412;
	f65_lexer_i_getchar(&v1412);
	i8 v1413 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1413 = v1412;

	i8 v1414 = (i8)(intptr_t)(ws+2888);
	i1 v1415 = *(i1*)(intptr_t)v1414;
	i1 v1416 = (i1)+39;
	if (v1415==v1416) goto c02_0167; else goto c02_0166;

c02_0166:;

	f75_malformed();

	goto c02_0163;

c02_0167:;

c02_0163:;

endsub:;
}
const i1 c02_s0038[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// malformed_include workspace at ws+2896 length ws+0
void f77_malformed_include(void) {

	i8 v1417 = (i8)(intptr_t)c02_s0038;
	f71_lexer_i_malformed(v1417);

endsub:;
}

// lexer_i_include workspace at ws+2888 length ws+1
void f76_lexer_i_include(void) {


	f67_lexer_i_skipwhitespace();

	i1 v1418;
	f65_lexer_i_getchar(&v1418);
	i8 v1419 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1419 = v1418;

	i8 v1420 = (i8)(intptr_t)(ws+2888);
	i1 v1421 = *(i1*)(intptr_t)v1420;
	i1 v1422 = (i1)+34;
	if (v1421==v1422) goto c02_016c; else goto c02_016b;

c02_016b:;

	f77_malformed_include();

	goto c02_0168;

c02_016c:;

c02_0168:;

	f73_lexer_i_read_string();

	f67_lexer_i_skipwhitespace();

	i1 v1423;
	f65_lexer_i_getchar(&v1423);
	i8 v1424 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1424 = v1423;

	i8 v1425 = (i8)(intptr_t)(ws+2888);
	i1 v1426 = *(i1*)(intptr_t)v1425;
	i1 v1427 = (i1)+59;
	if (v1426==v1427) goto c02_0171; else goto c02_0170;

c02_0170:;

	f77_malformed_include();

	goto c02_016d;

c02_0171:;

c02_016d:;

	i8 v1428 = (i8)(intptr_t)(ws+105);
	f62_LexerIncludeFile(v1428);

endsub:;
}
const i1 c02_s0039[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// lexer_i_line_directive workspace at ws+2888 length ws+1
void f78_lexer_i_line_directive(void) {

	f67_lexer_i_skipwhitespace();

	f70_lexer_i_read_number();

	f67_lexer_i_skipwhitespace();

	i1 v1429;
	f65_lexer_i_getchar(&v1429);
	i8 v1430 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1430 = v1429;

	i8 v1431 = (i8)(intptr_t)(ws+2888);
	i1 v1432 = *(i1*)(intptr_t)v1431;
	i1 v1433 = (i1)+34;
	if (v1432==v1433) goto c02_0176; else goto c02_0175;

c02_0175:;

	i8 v1434 = (i8)(intptr_t)c02_s0039;
	f71_lexer_i_malformed(v1434);

	goto c02_0172;

c02_0176:;

c02_0172:;

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
	f32_Free(v1444);

	i8 v1445 = (i8)(intptr_t)(ws+105);
	i8 v1446;
	f33_StrDup(&v1446, v1445);
	i8 v1447 = (i8)(intptr_t)(ws+96);
	i8 v1448 = *(i8*)(intptr_t)v1447;
	i8 v1449 = v1448+(+8);
	*(i8*)(intptr_t)v1449 = v1446;

endsub:;
}
const i1 c02_s003a[] = { 0x6c,0x69,0x6e,0x65,0 };

// LexerReadToken workspace at ws+2880 length ws+3
void f63_LexerReadToken(i1* p1084 /* token */) {














c02_0177:;

	f67_lexer_i_skipwhitespace();

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

	f68_lexer_i_read_identifier();

	i8 v1457 = (i8)(intptr_t)(ws+105);
	i8 v1458 = (i8)(intptr_t)c02_s003a;
	i1 v1459;
	f25_StrCmp(&v1459, v1458, v1457);
	i1 v1460 = (i1)+0;
	if (v1459==v1460) goto c02_0181; else goto c02_0182;

c02_0181:;

	f78_lexer_i_line_directive();

	goto c02_017e;

c02_0182:;

c02_017e:;

c02_0183:;

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

	i1 v1488;
	f65_lexer_i_getchar(&v1488);
	i8 v1489 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1489 = v1488;

	i8 v1490 = (i8)(intptr_t)(ws+2881);
	i1 v1491 = *(i1*)(intptr_t)v1490;

	if (v1491 != +60) goto c02_0197;

	i1 v1492 = (i1)+53;
	i8 v1493 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1493 = v1492;

	goto c02_0196;

c02_0197:;

	if (v1491 != +61) goto c02_0198;

	i1 v1494 = (i1)+48;
	i8 v1495 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1495 = v1494;

	goto c02_0196;

c02_0198:;

	i8 v1496 = (i8)(intptr_t)(ws+2881);
	i1 v1497 = *(i1*)(intptr_t)v1496;
	i8 v1498 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1498 = v1497;

	i1 v1499 = (i1)+47;
	i8 v1500 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1500 = v1499;

c02_0196:;


	goto c02_018d;

c02_0195:;

	if (v1473 != +61) goto c02_0199;

	i1 v1501;
	f65_lexer_i_getchar(&v1501);
	i8 v1502 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(ws+2881);
	i1 v1504 = *(i1*)(intptr_t)v1503;
	i1 v1505 = (i1)+61;
	if (v1504==v1505) goto c02_019d; else goto c02_019e;

c02_019d:;

	i1 v1506 = (i1)+51;
	i8 v1507 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1507 = v1506;

	goto c02_019a;

c02_019e:;

	i8 v1508 = (i8)(intptr_t)(ws+2881);
	i1 v1509 = *(i1*)(intptr_t)v1508;
	f66_lexer_i_unparseable(v1509);

c02_019a:;

	goto c02_018d;

c02_0199:;

	if (v1473 != +33) goto c02_019f;

	i1 v1510;
	f65_lexer_i_getchar(&v1510);
	i8 v1511 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1511 = v1510;

	i8 v1512 = (i8)(intptr_t)(ws+2881);
	i1 v1513 = *(i1*)(intptr_t)v1512;
	i1 v1514 = (i1)+61;
	if (v1513==v1514) goto c02_01a3; else goto c02_01a4;

c02_01a3:;

	i1 v1515 = (i1)+52;
	i8 v1516 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1516 = v1515;

	goto c02_01a0;

c02_01a4:;

	i8 v1517 = (i8)(intptr_t)(ws+2881);
	i1 v1518 = *(i1*)(intptr_t)v1517;
	f66_lexer_i_unparseable(v1518);

c02_01a0:;

	goto c02_018d;

c02_019f:;

	if (v1473 != +62) goto c02_01a5;

	i1 v1519;
	f65_lexer_i_getchar(&v1519);
	i8 v1520 = (i8)(intptr_t)(ws+2881);
	*(i1*)(intptr_t)v1520 = v1519;

	i8 v1521 = (i8)(intptr_t)(ws+2881);
	i1 v1522 = *(i1*)(intptr_t)v1521;

	if (v1522 != +62) goto c02_01a7;

	i1 v1523 = (i1)+54;
	i8 v1524 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1524 = v1523;

	goto c02_01a6;

c02_01a7:;

	if (v1522 != +61) goto c02_01a8;

	i1 v1525 = (i1)+50;
	i8 v1526 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1526 = v1525;

	goto c02_01a6;

c02_01a8:;

	i8 v1527 = (i8)(intptr_t)(ws+2881);
	i1 v1528 = *(i1*)(intptr_t)v1527;
	i8 v1529 = (i8)(intptr_t)(ws+104);
	*(i1*)(intptr_t)v1529 = v1528;

	i1 v1530 = (i1)+49;
	i8 v1531 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1531 = v1530;

c02_01a6:;


	goto c02_018d;

c02_01a5:;

	if (v1473 != +34) goto c02_01a9;

	f73_lexer_i_read_string();

	i1 v1532 = (i1)+41;
	i8 v1533 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1533 = v1532;

	goto c02_018d;

c02_01a9:;

	if (v1473 != +39) goto c02_01aa;

	f74_lexer_i_read_char();

	i1 v1534 = (i1)+34;
	i8 v1535 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1535 = v1534;

	goto c02_018d;

c02_01aa:;

	i8 v1536 = (i8)(intptr_t)(ws+2881);
	i1 v1537 = *(i1*)(intptr_t)v1536;
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

	f68_lexer_i_read_identifier();

	i1 v1564;
	f69_lexer_i_match_keyword(&v1564);
	i8 v1565 = (i8)(intptr_t)(ws+2880);
	*(i1*)(intptr_t)v1565 = v1564;

	goto c02_01ab;

c02_01b7:;

	i8 v1566 = (i8)(intptr_t)(ws+2881);
	i1 v1567 = *(i1*)(intptr_t)v1566;
	f66_lexer_i_unparseable(v1567);

c02_01ab:;

c02_018d:;


	i8 v1568 = (i8)(intptr_t)(ws+2880);
	i1 v1569 = *(i1*)(intptr_t)v1568;
	i1 v1570 = (i1)+255;
	if (v1569==v1570) goto c02_01bb; else goto c02_01bc;

c02_01bb:;

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

// GetInputParameter workspace at ws+3272 length ws+24
void f80_GetInputParameter(i8* p1587 /* param */, i1 p1588 /* count */, i8 p1589 /* subr */) {
	*(i8*)(intptr_t)(ws+3272) = p1589; /*subr */
	*(i1*)(intptr_t)(ws+3280) = p1588; /*count */

	i8 v1590 = (i8)(intptr_t)(ws+3272);
	i8 v1591 = *(i8*)(intptr_t)v1590;
	i8 v1592 = v1591+(+40);
	i8 v1593 = *(i8*)(intptr_t)v1592;
	i8 v1594 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v1594 = v1593;

c02_01c5:;

	i8 v1595 = (i8)(intptr_t)(ws+3280);
	i1 v1596 = *(i1*)(intptr_t)v1595;
	i1 v1597 = (i1)+0;
	if (v1596==v1597) goto c02_01c8; else goto c02_01c7;

c02_01c7:;

	i8 v1598 = (i8)(intptr_t)(ws+3288);
	i8 v1599 = *(i8*)(intptr_t)v1598;
	i8 v1600 = v1599+(+16);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	i8 v1602 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v1602 = v1601;

	i8 v1603 = (i8)(intptr_t)(ws+3280);
	i1 v1604 = *(i1*)(intptr_t)v1603;
	i1 v1605 = v1604+(-1);
	i8 v1606 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1606 = v1605;

	goto c02_01c5;

c02_01c8:;

endsub:;
	*p1587 = *(i8*)(intptr_t)(ws+3288);
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

// MidAsmstart workspace at ws+3000 length ws+8
void f85_MidAsmstart(i8* p1652 /* m */) {

	i1 v1653 = (i1)+14;
	i8 v1654;
	f84_AllocateNewNode(&v1654, v1653);
	i8 v1655 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v1655 = v1654;

endsub:;
	*p1652 = *(i8*)(intptr_t)(ws+3000);
}

// MidBlts workspace at ws+3040 length ws+40
void f90_MidBlts(i8* p1735 /* m */, i1 p1736 /* negated */, i2 p1737 /* fallthrough */, i2 p1738 /* falselabel */, i2 p1739 /* truelabel */, i8 p1740 /* right */, i8 p1741 /* left */, i1 p1742 /* width */) {
	*(i1*)(intptr_t)(ws+3040) = p1742; /*width */
	*(i8*)(intptr_t)(ws+3048) = p1741; /*left */
	*(i8*)(intptr_t)(ws+3056) = p1740; /*right */
	*(i2*)(intptr_t)(ws+3064) = p1739; /*truelabel */
	*(i2*)(intptr_t)(ws+3066) = p1738; /*falselabel */
	*(i2*)(intptr_t)(ws+3068) = p1737; /*fallthrough */
	*(i1*)(intptr_t)(ws+3070) = p1736; /*negated */

	i8 v1743 = (i8)(intptr_t)(ws+3040);
	i1 v1744 = *(i1*)(intptr_t)v1743;
	i1 v1745;
	f83_WidthToIndex(&v1745, v1744);
	i1 v1746 = v1745+(+60);
	i8 v1747;
	f84_AllocateNewNode(&v1747, v1746);
	i8 v1748 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1748 = v1747;

	i8 v1749 = (i8)(intptr_t)(ws+3048);
	i8 v1750 = *(i8*)(intptr_t)v1749;
	i8 v1751 = (i8)(intptr_t)(ws+3072);
	i8 v1752 = *(i8*)(intptr_t)v1751;
	i8 v1753 = v1752+(+24);
	*(i8*)(intptr_t)v1753 = v1750;

	i8 v1754 = (i8)(intptr_t)(ws+3056);
	i8 v1755 = *(i8*)(intptr_t)v1754;
	i8 v1756 = (i8)(intptr_t)(ws+3072);
	i8 v1757 = *(i8*)(intptr_t)v1756;
	i8 v1758 = v1757+(+32);
	*(i8*)(intptr_t)v1758 = v1755;

	i8 v1759 = (i8)(intptr_t)(ws+3064);
	i2 v1760 = *(i2*)(intptr_t)v1759;
	i8 v1761 = (i8)(intptr_t)(ws+3072);
	i8 v1762 = *(i8*)(intptr_t)v1761;
	*(i2*)(intptr_t)v1762 = v1760;

	i8 v1763 = (i8)(intptr_t)(ws+3066);
	i2 v1764 = *(i2*)(intptr_t)v1763;
	i8 v1765 = (i8)(intptr_t)(ws+3072);
	i8 v1766 = *(i8*)(intptr_t)v1765;
	i8 v1767 = v1766+(+2);
	*(i2*)(intptr_t)v1767 = v1764;

	i8 v1768 = (i8)(intptr_t)(ws+3068);
	i2 v1769 = *(i2*)(intptr_t)v1768;
	i8 v1770 = (i8)(intptr_t)(ws+3072);
	i8 v1771 = *(i8*)(intptr_t)v1770;
	i8 v1772 = v1771+(+4);
	*(i2*)(intptr_t)v1772 = v1769;

	i8 v1773 = (i8)(intptr_t)(ws+3070);
	i1 v1774 = *(i1*)(intptr_t)v1773;
	i8 v1775 = (i8)(intptr_t)(ws+3072);
	i8 v1776 = *(i8*)(intptr_t)v1775;
	i8 v1777 = v1776+(+6);
	*(i1*)(intptr_t)v1777 = v1774;

endsub:;
	*p1735 = *(i8*)(intptr_t)(ws+3072);
}

// MidLabel workspace at ws+3064 length ws+16
void f91_MidLabel(i8* p1778 /* m */, i2 p1779 /* label */) {
	*(i2*)(intptr_t)(ws+3064) = p1779; /*label */

	i1 v1780 = (i1)+21;
	i8 v1781;
	f84_AllocateNewNode(&v1781, v1780);
	i8 v1782 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1782 = v1781;

	i8 v1783 = (i8)(intptr_t)(ws+3064);
	i2 v1784 = *(i2*)(intptr_t)v1783;
	i8 v1785 = (i8)(intptr_t)(ws+3072);
	i8 v1786 = *(i8*)(intptr_t)v1785;
	*(i2*)(intptr_t)v1786 = v1784;

endsub:;
	*p1778 = *(i8*)(intptr_t)(ws+3072);
}

// MidArg workspace at ws+3008 length ws+48
void f92_MidArg(i8* p1787 /* m */, i1 p1788 /* remaining */, i8 p1789 /* subr */, i8 p1790 /* right */, i8 p1791 /* left */, i1 p1792 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p1792; /*width */
	*(i8*)(intptr_t)(ws+3016) = p1791; /*left */
	*(i8*)(intptr_t)(ws+3024) = p1790; /*right */
	*(i8*)(intptr_t)(ws+3032) = p1789; /*subr */
	*(i1*)(intptr_t)(ws+3040) = p1788; /*remaining */

	i8 v1793 = (i8)(intptr_t)(ws+3008);
	i1 v1794 = *(i1*)(intptr_t)v1793;
	i1 v1795;
	f83_WidthToIndex(&v1795, v1794);
	i1 v1796 = v1795+(+30);
	i8 v1797;
	f84_AllocateNewNode(&v1797, v1796);
	i8 v1798 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v1798 = v1797;

	i8 v1799 = (i8)(intptr_t)(ws+3016);
	i8 v1800 = *(i8*)(intptr_t)v1799;
	i8 v1801 = (i8)(intptr_t)(ws+3048);
	i8 v1802 = *(i8*)(intptr_t)v1801;
	i8 v1803 = v1802+(+24);
	*(i8*)(intptr_t)v1803 = v1800;

	i8 v1804 = (i8)(intptr_t)(ws+3024);
	i8 v1805 = *(i8*)(intptr_t)v1804;
	i8 v1806 = (i8)(intptr_t)(ws+3048);
	i8 v1807 = *(i8*)(intptr_t)v1806;
	i8 v1808 = v1807+(+32);
	*(i8*)(intptr_t)v1808 = v1805;

	i8 v1809 = (i8)(intptr_t)(ws+3032);
	i8 v1810 = *(i8*)(intptr_t)v1809;
	i8 v1811 = (i8)(intptr_t)(ws+3048);
	i8 v1812 = *(i8*)(intptr_t)v1811;
	*(i8*)(intptr_t)v1812 = v1810;

	i8 v1813 = (i8)(intptr_t)(ws+3040);
	i1 v1814 = *(i1*)(intptr_t)v1813;
	i8 v1815 = (i8)(intptr_t)(ws+3048);
	i8 v1816 = *(i8*)(intptr_t)v1815;
	i8 v1817 = v1816+(+8);
	*(i1*)(intptr_t)v1817 = v1814;

endsub:;
	*p1787 = *(i8*)(intptr_t)(ws+3048);
}

// MidFallback workspace at ws+3240 length ws+16
void f93_MidFallback(i8* p1818 /* m */, i8 p1819 /* left */) {
	*(i8*)(intptr_t)(ws+3240) = p1819; /*left */

	i1 v1820 = (i1)+19;
	i8 v1821;
	f84_AllocateNewNode(&v1821, v1820);
	i8 v1822 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v1822 = v1821;

	i8 v1823 = (i8)(intptr_t)(ws+3240);
	i8 v1824 = *(i8*)(intptr_t)v1823;
	i8 v1825 = (i8)(intptr_t)(ws+3248);
	i8 v1826 = *(i8*)(intptr_t)v1825;
	i8 v1827 = v1826+(+24);
	*(i8*)(intptr_t)v1827 = v1824;

endsub:;
	*p1818 = *(i8*)(intptr_t)(ws+3248);
}

// MidBeq workspace at ws+3040 length ws+40
void f94_MidBeq(i8* p1828 /* m */, i1 p1829 /* negated */, i2 p1830 /* fallthrough */, i2 p1831 /* falselabel */, i2 p1832 /* truelabel */, i8 p1833 /* right */, i8 p1834 /* left */, i1 p1835 /* width */) {
	*(i1*)(intptr_t)(ws+3040) = p1835; /*width */
	*(i8*)(intptr_t)(ws+3048) = p1834; /*left */
	*(i8*)(intptr_t)(ws+3056) = p1833; /*right */
	*(i2*)(intptr_t)(ws+3064) = p1832; /*truelabel */
	*(i2*)(intptr_t)(ws+3066) = p1831; /*falselabel */
	*(i2*)(intptr_t)(ws+3068) = p1830; /*fallthrough */
	*(i1*)(intptr_t)(ws+3070) = p1829; /*negated */

	i8 v1836 = (i8)(intptr_t)(ws+3040);
	i1 v1837 = *(i1*)(intptr_t)v1836;
	i1 v1838;
	f83_WidthToIndex(&v1838, v1837);
	i1 v1839 = v1838+(+55);
	i8 v1840;
	f84_AllocateNewNode(&v1840, v1839);
	i8 v1841 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1841 = v1840;

	i8 v1842 = (i8)(intptr_t)(ws+3048);
	i8 v1843 = *(i8*)(intptr_t)v1842;
	i8 v1844 = (i8)(intptr_t)(ws+3072);
	i8 v1845 = *(i8*)(intptr_t)v1844;
	i8 v1846 = v1845+(+24);
	*(i8*)(intptr_t)v1846 = v1843;

	i8 v1847 = (i8)(intptr_t)(ws+3056);
	i8 v1848 = *(i8*)(intptr_t)v1847;
	i8 v1849 = (i8)(intptr_t)(ws+3072);
	i8 v1850 = *(i8*)(intptr_t)v1849;
	i8 v1851 = v1850+(+32);
	*(i8*)(intptr_t)v1851 = v1848;

	i8 v1852 = (i8)(intptr_t)(ws+3064);
	i2 v1853 = *(i2*)(intptr_t)v1852;
	i8 v1854 = (i8)(intptr_t)(ws+3072);
	i8 v1855 = *(i8*)(intptr_t)v1854;
	*(i2*)(intptr_t)v1855 = v1853;

	i8 v1856 = (i8)(intptr_t)(ws+3066);
	i2 v1857 = *(i2*)(intptr_t)v1856;
	i8 v1858 = (i8)(intptr_t)(ws+3072);
	i8 v1859 = *(i8*)(intptr_t)v1858;
	i8 v1860 = v1859+(+2);
	*(i2*)(intptr_t)v1860 = v1857;

	i8 v1861 = (i8)(intptr_t)(ws+3068);
	i2 v1862 = *(i2*)(intptr_t)v1861;
	i8 v1863 = (i8)(intptr_t)(ws+3072);
	i8 v1864 = *(i8*)(intptr_t)v1863;
	i8 v1865 = v1864+(+4);
	*(i2*)(intptr_t)v1865 = v1862;

	i8 v1866 = (i8)(intptr_t)(ws+3070);
	i1 v1867 = *(i1*)(intptr_t)v1866;
	i8 v1868 = (i8)(intptr_t)(ws+3072);
	i8 v1869 = *(i8*)(intptr_t)v1868;
	i8 v1870 = v1869+(+6);
	*(i1*)(intptr_t)v1870 = v1867;

endsub:;
	*p1828 = *(i8*)(intptr_t)(ws+3072);
}

// MidEndfile workspace at ws+2880 length ws+8
void f95_MidEndfile(i8* p1871 /* m */) {

	i1 v1872 = (i1)+3;
	i8 v1873;
	f84_AllocateNewNode(&v1873, v1872);
	i8 v1874 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v1874 = v1873;

endsub:;
	*p1871 = *(i8*)(intptr_t)(ws+2880);
}

// MidStartsub workspace at ws+3000 length ws+16
void f97_MidStartsub(i8* p1895 /* m */, i8 p1896 /* subr */) {
	*(i8*)(intptr_t)(ws+3000) = p1896; /*subr */

	i1 v1897 = (i1)+4;
	i8 v1898;
	f84_AllocateNewNode(&v1898, v1897);
	i8 v1899 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1899 = v1898;

	i8 v1900 = (i8)(intptr_t)(ws+3000);
	i8 v1901 = *(i8*)(intptr_t)v1900;
	i8 v1902 = (i8)(intptr_t)(ws+3008);
	i8 v1903 = *(i8*)(intptr_t)v1902;
	*(i8*)(intptr_t)v1903 = v1901;

endsub:;
	*p1895 = *(i8*)(intptr_t)(ws+3008);
}

// MidBor workspace at ws+3000 length ws+32
void f98_MidBor(i8* p1904 /* m */, i1 p1905 /* negated */, i2 p1906 /* fallthrough */, i2 p1907 /* falselabel */, i2 p1908 /* truelabel */, i8 p1909 /* right */, i8 p1910 /* left */) {
	*(i8*)(intptr_t)(ws+3000) = p1910; /*left */
	*(i8*)(intptr_t)(ws+3008) = p1909; /*right */
	*(i2*)(intptr_t)(ws+3016) = p1908; /*truelabel */
	*(i2*)(intptr_t)(ws+3018) = p1907; /*falselabel */
	*(i2*)(intptr_t)(ws+3020) = p1906; /*fallthrough */
	*(i1*)(intptr_t)(ws+3022) = p1905; /*negated */

	i1 v1911 = (i1)+54;
	i8 v1912;
	f84_AllocateNewNode(&v1912, v1911);
	i8 v1913 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1913 = v1912;

	i8 v1914 = (i8)(intptr_t)(ws+3000);
	i8 v1915 = *(i8*)(intptr_t)v1914;
	i8 v1916 = (i8)(intptr_t)(ws+3024);
	i8 v1917 = *(i8*)(intptr_t)v1916;
	i8 v1918 = v1917+(+24);
	*(i8*)(intptr_t)v1918 = v1915;

	i8 v1919 = (i8)(intptr_t)(ws+3008);
	i8 v1920 = *(i8*)(intptr_t)v1919;
	i8 v1921 = (i8)(intptr_t)(ws+3024);
	i8 v1922 = *(i8*)(intptr_t)v1921;
	i8 v1923 = v1922+(+32);
	*(i8*)(intptr_t)v1923 = v1920;

	i8 v1924 = (i8)(intptr_t)(ws+3016);
	i2 v1925 = *(i2*)(intptr_t)v1924;
	i8 v1926 = (i8)(intptr_t)(ws+3024);
	i8 v1927 = *(i8*)(intptr_t)v1926;
	*(i2*)(intptr_t)v1927 = v1925;

	i8 v1928 = (i8)(intptr_t)(ws+3018);
	i2 v1929 = *(i2*)(intptr_t)v1928;
	i8 v1930 = (i8)(intptr_t)(ws+3024);
	i8 v1931 = *(i8*)(intptr_t)v1930;
	i8 v1932 = v1931+(+2);
	*(i2*)(intptr_t)v1932 = v1929;

	i8 v1933 = (i8)(intptr_t)(ws+3020);
	i2 v1934 = *(i2*)(intptr_t)v1933;
	i8 v1935 = (i8)(intptr_t)(ws+3024);
	i8 v1936 = *(i8*)(intptr_t)v1935;
	i8 v1937 = v1936+(+4);
	*(i2*)(intptr_t)v1937 = v1934;

	i8 v1938 = (i8)(intptr_t)(ws+3022);
	i1 v1939 = *(i1*)(intptr_t)v1938;
	i8 v1940 = (i8)(intptr_t)(ws+3024);
	i8 v1941 = *(i8*)(intptr_t)v1940;
	i8 v1942 = v1941+(+6);
	*(i1*)(intptr_t)v1942 = v1939;

endsub:;
	*p1904 = *(i8*)(intptr_t)(ws+3024);
}

// MidCalle workspace at ws+3016 length ws+32
void f99_MidCalle(i8* p1943 /* m */, i8 p1944 /* subr */, i8 p1945 /* left */, i1 p1946 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p1946; /*width */
	*(i8*)(intptr_t)(ws+3024) = p1945; /*left */
	*(i8*)(intptr_t)(ws+3032) = p1944; /*subr */

	i8 v1947 = (i8)(intptr_t)(ws+3016);
	i1 v1948 = *(i1*)(intptr_t)v1947;
	i1 v1949;
	f83_WidthToIndex(&v1949, v1948);
	i1 v1950 = v1949+(+25);
	i8 v1951;
	f84_AllocateNewNode(&v1951, v1950);
	i8 v1952 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v1952 = v1951;

	i8 v1953 = (i8)(intptr_t)(ws+3024);
	i8 v1954 = *(i8*)(intptr_t)v1953;
	i8 v1955 = (i8)(intptr_t)(ws+3040);
	i8 v1956 = *(i8*)(intptr_t)v1955;
	i8 v1957 = v1956+(+24);
	*(i8*)(intptr_t)v1957 = v1954;

	i8 v1958 = (i8)(intptr_t)(ws+3032);
	i8 v1959 = *(i8*)(intptr_t)v1958;
	i8 v1960 = (i8)(intptr_t)(ws+3040);
	i8 v1961 = *(i8*)(intptr_t)v1960;
	*(i8*)(intptr_t)v1961 = v1959;

endsub:;
	*p1943 = *(i8*)(intptr_t)(ws+3040);
}

// MidEndsub workspace at ws+3008 length ws+16
void f100_MidEndsub(i8* p1962 /* m */, i8 p1963 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p1963; /*subr */

	i1 v1964 = (i1)+5;
	i8 v1965;
	f84_AllocateNewNode(&v1965, v1964);
	i8 v1966 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1966 = v1965;

	i8 v1967 = (i8)(intptr_t)(ws+3008);
	i8 v1968 = *(i8*)(intptr_t)v1967;
	i8 v1969 = (i8)(intptr_t)(ws+3016);
	i8 v1970 = *(i8*)(intptr_t)v1969;
	*(i8*)(intptr_t)v1970 = v1968;

endsub:;
	*p1962 = *(i8*)(intptr_t)(ws+3016);
}

// MidBltu workspace at ws+3040 length ws+40
void f101_MidBltu(i8* p1971 /* m */, i1 p1972 /* negated */, i2 p1973 /* fallthrough */, i2 p1974 /* falselabel */, i2 p1975 /* truelabel */, i8 p1976 /* right */, i8 p1977 /* left */, i1 p1978 /* width */) {
	*(i1*)(intptr_t)(ws+3040) = p1978; /*width */
	*(i8*)(intptr_t)(ws+3048) = p1977; /*left */
	*(i8*)(intptr_t)(ws+3056) = p1976; /*right */
	*(i2*)(intptr_t)(ws+3064) = p1975; /*truelabel */
	*(i2*)(intptr_t)(ws+3066) = p1974; /*falselabel */
	*(i2*)(intptr_t)(ws+3068) = p1973; /*fallthrough */
	*(i1*)(intptr_t)(ws+3070) = p1972; /*negated */

	i8 v1979 = (i8)(intptr_t)(ws+3040);
	i1 v1980 = *(i1*)(intptr_t)v1979;
	i1 v1981;
	f83_WidthToIndex(&v1981, v1980);
	i1 v1982 = v1981+(+65);
	i8 v1983;
	f84_AllocateNewNode(&v1983, v1982);
	i8 v1984 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1984 = v1983;

	i8 v1985 = (i8)(intptr_t)(ws+3048);
	i8 v1986 = *(i8*)(intptr_t)v1985;
	i8 v1987 = (i8)(intptr_t)(ws+3072);
	i8 v1988 = *(i8*)(intptr_t)v1987;
	i8 v1989 = v1988+(+24);
	*(i8*)(intptr_t)v1989 = v1986;

	i8 v1990 = (i8)(intptr_t)(ws+3056);
	i8 v1991 = *(i8*)(intptr_t)v1990;
	i8 v1992 = (i8)(intptr_t)(ws+3072);
	i8 v1993 = *(i8*)(intptr_t)v1992;
	i8 v1994 = v1993+(+32);
	*(i8*)(intptr_t)v1994 = v1991;

	i8 v1995 = (i8)(intptr_t)(ws+3064);
	i2 v1996 = *(i2*)(intptr_t)v1995;
	i8 v1997 = (i8)(intptr_t)(ws+3072);
	i8 v1998 = *(i8*)(intptr_t)v1997;
	*(i2*)(intptr_t)v1998 = v1996;

	i8 v1999 = (i8)(intptr_t)(ws+3066);
	i2 v2000 = *(i2*)(intptr_t)v1999;
	i8 v2001 = (i8)(intptr_t)(ws+3072);
	i8 v2002 = *(i8*)(intptr_t)v2001;
	i8 v2003 = v2002+(+2);
	*(i2*)(intptr_t)v2003 = v2000;

	i8 v2004 = (i8)(intptr_t)(ws+3068);
	i2 v2005 = *(i2*)(intptr_t)v2004;
	i8 v2006 = (i8)(intptr_t)(ws+3072);
	i8 v2007 = *(i8*)(intptr_t)v2006;
	i8 v2008 = v2007+(+4);
	*(i2*)(intptr_t)v2008 = v2005;

	i8 v2009 = (i8)(intptr_t)(ws+3070);
	i1 v2010 = *(i1*)(intptr_t)v2009;
	i8 v2011 = (i8)(intptr_t)(ws+3072);
	i8 v2012 = *(i8*)(intptr_t)v2011;
	i8 v2013 = v2012+(+6);
	*(i1*)(intptr_t)v2013 = v2010;

endsub:;
	*p1971 = *(i8*)(intptr_t)(ws+3072);
}

// MidCall workspace at ws+3048 length ws+24
void f102_MidCall(i8* p2014 /* m */, i8 p2015 /* subr */, i8 p2016 /* left */) {
	*(i8*)(intptr_t)(ws+3048) = p2016; /*left */
	*(i8*)(intptr_t)(ws+3056) = p2015; /*subr */

	i1 v2017 = (i1)+24;
	i8 v2018;
	f84_AllocateNewNode(&v2018, v2017);
	i8 v2019 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2019 = v2018;

	i8 v2020 = (i8)(intptr_t)(ws+3048);
	i8 v2021 = *(i8*)(intptr_t)v2020;
	i8 v2022 = (i8)(intptr_t)(ws+3064);
	i8 v2023 = *(i8*)(intptr_t)v2022;
	i8 v2024 = v2023+(+24);
	*(i8*)(intptr_t)v2024 = v2021;

	i8 v2025 = (i8)(intptr_t)(ws+3056);
	i8 v2026 = *(i8*)(intptr_t)v2025;
	i8 v2027 = (i8)(intptr_t)(ws+3064);
	i8 v2028 = *(i8*)(intptr_t)v2027;
	*(i8*)(intptr_t)v2028 = v2026;

endsub:;
	*p2014 = *(i8*)(intptr_t)(ws+3064);
}

// MidPair workspace at ws+3000 length ws+24
void f105_MidPair(i8* p2062 /* m */, i8 p2063 /* right */, i8 p2064 /* left */) {
	*(i8*)(intptr_t)(ws+3000) = p2064; /*left */
	*(i8*)(intptr_t)(ws+3008) = p2063; /*right */

	i1 v2065 = (i1)+20;
	i8 v2066;
	f84_AllocateNewNode(&v2066, v2065);
	i8 v2067 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2067 = v2066;

	i8 v2068 = (i8)(intptr_t)(ws+3000);
	i8 v2069 = *(i8*)(intptr_t)v2068;
	i8 v2070 = (i8)(intptr_t)(ws+3016);
	i8 v2071 = *(i8*)(intptr_t)v2070;
	i8 v2072 = v2071+(+24);
	*(i8*)(intptr_t)v2072 = v2069;

	i8 v2073 = (i8)(intptr_t)(ws+3008);
	i8 v2074 = *(i8*)(intptr_t)v2073;
	i8 v2075 = (i8)(intptr_t)(ws+3016);
	i8 v2076 = *(i8*)(intptr_t)v2075;
	i8 v2077 = v2076+(+32);
	*(i8*)(intptr_t)v2077 = v2074;

endsub:;
	*p2062 = *(i8*)(intptr_t)(ws+3016);
}

// MidReturn workspace at ws+3000 length ws+8
void f106_MidReturn(i8* p2078 /* m */) {

	i1 v2079 = (i1)+23;
	i8 v2080;
	f84_AllocateNewNode(&v2080, v2079);
	i8 v2081 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v2081 = v2080;

endsub:;
	*p2078 = *(i8*)(intptr_t)(ws+3000);
}

// MidEnd workspace at ws+3008 length ws+8
void f109_MidEnd(i8* p2121 /* m */) {

	i1 v2122 = (i1)+1;
	i8 v2123;
	f84_AllocateNewNode(&v2123, v2122);
	i8 v2124 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2124 = v2123;

endsub:;
	*p2121 = *(i8*)(intptr_t)(ws+3008);
}

// MidConstant workspace at ws+3096 length ws+16
void f111_MidConstant(i8* p2145 /* m */, i4 p2146 /* value */) {
	*(i4*)(intptr_t)(ws+3096) = p2146; /*value */

	i1 v2147 = (i1)+40;
	i8 v2148;
	f84_AllocateNewNode(&v2148, v2147);
	i8 v2149 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v2149 = v2148;

	i8 v2150 = (i8)(intptr_t)(ws+3096);
	i4 v2151 = *(i4*)(intptr_t)v2150;
	i8 v2152 = (i8)(intptr_t)(ws+3104);
	i8 v2153 = *(i8*)(intptr_t)v2152;
	*(i4*)(intptr_t)v2153 = v2151;

endsub:;
	*p2145 = *(i8*)(intptr_t)(ws+3104);
}

// MidAddress workspace at ws+3008 length ws+24
void f113_MidAddress(i8* p2174 /* m */, i2 p2175 /* off */, i8 p2176 /* sym */) {
	*(i8*)(intptr_t)(ws+3008) = p2176; /*sym */
	*(i2*)(intptr_t)(ws+3016) = p2175; /*off */

	i1 v2177 = (i1)+42;
	i8 v2178;
	f84_AllocateNewNode(&v2178, v2177);
	i8 v2179 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2179 = v2178;

	i8 v2180 = (i8)(intptr_t)(ws+3008);
	i8 v2181 = *(i8*)(intptr_t)v2180;
	i8 v2182 = (i8)(intptr_t)(ws+3024);
	i8 v2183 = *(i8*)(intptr_t)v2182;
	*(i8*)(intptr_t)v2183 = v2181;

	i8 v2184 = (i8)(intptr_t)(ws+3016);
	i2 v2185 = *(i2*)(intptr_t)v2184;
	i8 v2186 = (i8)(intptr_t)(ws+3024);
	i8 v2187 = *(i8*)(intptr_t)v2186;
	i8 v2188 = v2187+(+8);
	*(i2*)(intptr_t)v2188 = v2185;

endsub:;
	*p2174 = *(i8*)(intptr_t)(ws+3024);
}

// MidAsmtext workspace at ws+3000 length ws+16
void f114_MidAsmtext(i8* p2189 /* m */, i8 p2190 /* text */) {
	*(i8*)(intptr_t)(ws+3000) = p2190; /*text */

	i1 v2191 = (i1)+15;
	i8 v2192;
	f84_AllocateNewNode(&v2192, v2191);
	i8 v2193 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2193 = v2192;

	i8 v2194 = (i8)(intptr_t)(ws+3000);
	i8 v2195 = *(i8*)(intptr_t)v2194;
	i8 v2196 = (i8)(intptr_t)(ws+3008);
	i8 v2197 = *(i8*)(intptr_t)v2196;
	*(i8*)(intptr_t)v2197 = v2195;

endsub:;
	*p2189 = *(i8*)(intptr_t)(ws+3008);
}

// MidInit workspace at ws+3048 length ws+16
void f117_MidInit(i8* p2237 /* m */, i4 p2238 /* value */, i1 p2239 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2239; /*width */
	*(i4*)(intptr_t)(ws+3052) = p2238; /*value */

	i8 v2240 = (i8)(intptr_t)(ws+3048);
	i1 v2241 = *(i1*)(intptr_t)v2240;
	i1 v2242;
	f83_WidthToIndex(&v2242, v2241);
	i1 v2243 = v2242+(+7);
	i8 v2244;
	f84_AllocateNewNode(&v2244, v2243);
	i8 v2245 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2245 = v2244;

	i8 v2246 = (i8)(intptr_t)(ws+3052);
	i4 v2247 = *(i4*)(intptr_t)v2246;
	i8 v2248 = (i8)(intptr_t)(ws+3056);
	i8 v2249 = *(i8*)(intptr_t)v2248;
	*(i4*)(intptr_t)v2249 = v2247;

endsub:;
	*p2237 = *(i8*)(intptr_t)(ws+3056);
}

// MidLoad workspace at ws+3080 length ws+24
void f118_MidLoad(i8* p2250 /* m */, i8 p2251 /* left */, i1 p2252 /* width */) {
	*(i1*)(intptr_t)(ws+3080) = p2252; /*width */
	*(i8*)(intptr_t)(ws+3088) = p2251; /*left */

	i8 v2253 = (i8)(intptr_t)(ws+3080);
	i1 v2254 = *(i1*)(intptr_t)v2253;
	i1 v2255;
	f83_WidthToIndex(&v2255, v2254);
	i1 v2256 = v2255+(+43);
	i8 v2257;
	f84_AllocateNewNode(&v2257, v2256);
	i8 v2258 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v2258 = v2257;

	i8 v2259 = (i8)(intptr_t)(ws+3088);
	i8 v2260 = *(i8*)(intptr_t)v2259;
	i8 v2261 = (i8)(intptr_t)(ws+3096);
	i8 v2262 = *(i8*)(intptr_t)v2261;
	i8 v2263 = v2262+(+24);
	*(i8*)(intptr_t)v2263 = v2260;

endsub:;
	*p2250 = *(i8*)(intptr_t)(ws+3096);
}

// MidWhencase workspace at ws+3000 length ws+24
void f119_MidWhencase(i8* p2264 /* m */, i2 p2265 /* falselabel */, i4 p2266 /* value */, i1 p2267 /* width */) {
	*(i1*)(intptr_t)(ws+3000) = p2267; /*width */
	*(i4*)(intptr_t)(ws+3004) = p2266; /*value */
	*(i2*)(intptr_t)(ws+3008) = p2265; /*falselabel */

	i8 v2268 = (i8)(intptr_t)(ws+3000);
	i1 v2269 = *(i1*)(intptr_t)v2268;
	i1 v2270;
	f83_WidthToIndex(&v2270, v2269);
	i1 v2271 = v2270+(+75);
	i8 v2272;
	f84_AllocateNewNode(&v2272, v2271);
	i8 v2273 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2273 = v2272;

	i8 v2274 = (i8)(intptr_t)(ws+3004);
	i4 v2275 = *(i4*)(intptr_t)v2274;
	i8 v2276 = (i8)(intptr_t)(ws+3016);
	i8 v2277 = *(i8*)(intptr_t)v2276;
	*(i4*)(intptr_t)v2277 = v2275;

	i8 v2278 = (i8)(intptr_t)(ws+3008);
	i2 v2279 = *(i2*)(intptr_t)v2278;
	i8 v2280 = (i8)(intptr_t)(ws+3016);
	i8 v2281 = *(i8*)(intptr_t)v2280;
	i8 v2282 = v2281+(+4);
	*(i2*)(intptr_t)v2282 = v2279;

endsub:;
	*p2264 = *(i8*)(intptr_t)(ws+3016);
}

// MidStartfile workspace at ws+2880 length ws+8
void f120_MidStartfile(i8* p2283 /* m */) {

	i1 v2284 = (i1)+2;
	i8 v2285;
	f84_AllocateNewNode(&v2285, v2284);
	i8 v2286 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v2286 = v2285;

endsub:;
	*p2283 = *(i8*)(intptr_t)(ws+2880);
}

// MidJump workspace at ws+3008 length ws+16
void f121_MidJump(i8* p2287 /* m */, i2 p2288 /* label */) {
	*(i2*)(intptr_t)(ws+3008) = p2288; /*label */

	i1 v2289 = (i1)+22;
	i8 v2290;
	f84_AllocateNewNode(&v2290, v2289);
	i8 v2291 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2291 = v2290;

	i8 v2292 = (i8)(intptr_t)(ws+3008);
	i2 v2293 = *(i2*)(intptr_t)v2292;
	i8 v2294 = (i8)(intptr_t)(ws+3016);
	i8 v2295 = *(i8*)(intptr_t)v2294;
	*(i2*)(intptr_t)v2295 = v2293;

endsub:;
	*p2287 = *(i8*)(intptr_t)(ws+3016);
}

// MidStartinit workspace at ws+3016 length ws+16
void f123_MidStartinit(i8* p2316 /* m */, i8 p2317 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p2317; /*sym */

	i1 v2318 = (i1)+6;
	i8 v2319;
	f84_AllocateNewNode(&v2319, v2318);
	i8 v2320 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2320 = v2319;

	i8 v2321 = (i8)(intptr_t)(ws+3016);
	i8 v2322 = *(i8*)(intptr_t)v2321;
	i8 v2323 = (i8)(intptr_t)(ws+3024);
	i8 v2324 = *(i8*)(intptr_t)v2323;
	*(i8*)(intptr_t)v2324 = v2322;

endsub:;
	*p2316 = *(i8*)(intptr_t)(ws+3024);
}

// MidStore workspace at ws+3048 length ws+32
void f126_MidStore(i8* p2359 /* m */, i8 p2360 /* right */, i8 p2361 /* left */, i1 p2362 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2362; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2361; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2360; /*right */

	i8 v2363 = (i8)(intptr_t)(ws+3048);
	i1 v2364 = *(i1*)(intptr_t)v2363;
	i1 v2365;
	f83_WidthToIndex(&v2365, v2364);
	i1 v2366 = v2365+(+48);
	i8 v2367;
	f84_AllocateNewNode(&v2367, v2366);
	i8 v2368 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2368 = v2367;

	i8 v2369 = (i8)(intptr_t)(ws+3056);
	i8 v2370 = *(i8*)(intptr_t)v2369;
	i8 v2371 = (i8)(intptr_t)(ws+3072);
	i8 v2372 = *(i8*)(intptr_t)v2371;
	i8 v2373 = v2372+(+24);
	*(i8*)(intptr_t)v2373 = v2370;

	i8 v2374 = (i8)(intptr_t)(ws+3064);
	i8 v2375 = *(i8*)(intptr_t)v2374;
	i8 v2376 = (i8)(intptr_t)(ws+3072);
	i8 v2377 = *(i8*)(intptr_t)v2376;
	i8 v2378 = v2377+(+32);
	*(i8*)(intptr_t)v2378 = v2375;

endsub:;
	*p2359 = *(i8*)(intptr_t)(ws+3072);
}

// MidEndinit workspace at ws+3000 length ws+8
void f128_MidEndinit(i8* p2399 /* m */) {

	i1 v2400 = (i1)+13;
	i8 v2401;
	f84_AllocateNewNode(&v2401, v2400);
	i8 v2402 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v2402 = v2401;

endsub:;
	*p2399 = *(i8*)(intptr_t)(ws+3000);
}

// MidAsmend workspace at ws+3000 length ws+8
void f130_MidAsmend(i8* p2423 /* m */) {

	i1 v2424 = (i1)+18;
	i8 v2425;
	f84_AllocateNewNode(&v2425, v2424);
	i8 v2426 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v2426 = v2425;

endsub:;
	*p2423 = *(i8*)(intptr_t)(ws+3000);
}

// MidBand workspace at ws+3000 length ws+32
void f131_MidBand(i8* p2427 /* m */, i1 p2428 /* negated */, i2 p2429 /* fallthrough */, i2 p2430 /* falselabel */, i2 p2431 /* truelabel */, i8 p2432 /* right */, i8 p2433 /* left */) {
	*(i8*)(intptr_t)(ws+3000) = p2433; /*left */
	*(i8*)(intptr_t)(ws+3008) = p2432; /*right */
	*(i2*)(intptr_t)(ws+3016) = p2431; /*truelabel */
	*(i2*)(intptr_t)(ws+3018) = p2430; /*falselabel */
	*(i2*)(intptr_t)(ws+3020) = p2429; /*fallthrough */
	*(i1*)(intptr_t)(ws+3022) = p2428; /*negated */

	i1 v2434 = (i1)+53;
	i8 v2435;
	f84_AllocateNewNode(&v2435, v2434);
	i8 v2436 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2436 = v2435;

	i8 v2437 = (i8)(intptr_t)(ws+3000);
	i8 v2438 = *(i8*)(intptr_t)v2437;
	i8 v2439 = (i8)(intptr_t)(ws+3024);
	i8 v2440 = *(i8*)(intptr_t)v2439;
	i8 v2441 = v2440+(+24);
	*(i8*)(intptr_t)v2441 = v2438;

	i8 v2442 = (i8)(intptr_t)(ws+3008);
	i8 v2443 = *(i8*)(intptr_t)v2442;
	i8 v2444 = (i8)(intptr_t)(ws+3024);
	i8 v2445 = *(i8*)(intptr_t)v2444;
	i8 v2446 = v2445+(+32);
	*(i8*)(intptr_t)v2446 = v2443;

	i8 v2447 = (i8)(intptr_t)(ws+3016);
	i2 v2448 = *(i2*)(intptr_t)v2447;
	i8 v2449 = (i8)(intptr_t)(ws+3024);
	i8 v2450 = *(i8*)(intptr_t)v2449;
	*(i2*)(intptr_t)v2450 = v2448;

	i8 v2451 = (i8)(intptr_t)(ws+3018);
	i2 v2452 = *(i2*)(intptr_t)v2451;
	i8 v2453 = (i8)(intptr_t)(ws+3024);
	i8 v2454 = *(i8*)(intptr_t)v2453;
	i8 v2455 = v2454+(+2);
	*(i2*)(intptr_t)v2455 = v2452;

	i8 v2456 = (i8)(intptr_t)(ws+3020);
	i2 v2457 = *(i2*)(intptr_t)v2456;
	i8 v2458 = (i8)(intptr_t)(ws+3024);
	i8 v2459 = *(i8*)(intptr_t)v2458;
	i8 v2460 = v2459+(+4);
	*(i2*)(intptr_t)v2460 = v2457;

	i8 v2461 = (i8)(intptr_t)(ws+3022);
	i1 v2462 = *(i1*)(intptr_t)v2461;
	i8 v2463 = (i8)(intptr_t)(ws+3024);
	i8 v2464 = *(i8*)(intptr_t)v2463;
	i8 v2465 = v2464+(+6);
	*(i1*)(intptr_t)v2465 = v2462;

endsub:;
	*p2427 = *(i8*)(intptr_t)(ws+3024);
}

// MidPoparg workspace at ws+3048 length ws+32
void f132_MidPoparg(i8* p2466 /* m */, i1 p2467 /* remaining */, i8 p2468 /* subr */, i1 p2469 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2469; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2468; /*subr */
	*(i1*)(intptr_t)(ws+3064) = p2467; /*remaining */

	i8 v2470 = (i8)(intptr_t)(ws+3048);
	i1 v2471 = *(i1*)(intptr_t)v2470;
	i1 v2472;
	f83_WidthToIndex(&v2472, v2471);
	i1 v2473 = v2472+(+35);
	i8 v2474;
	f84_AllocateNewNode(&v2474, v2473);
	i8 v2475 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2475 = v2474;

	i8 v2476 = (i8)(intptr_t)(ws+3056);
	i8 v2477 = *(i8*)(intptr_t)v2476;
	i8 v2478 = (i8)(intptr_t)(ws+3072);
	i8 v2479 = *(i8*)(intptr_t)v2478;
	*(i8*)(intptr_t)v2479 = v2477;

	i8 v2480 = (i8)(intptr_t)(ws+3064);
	i1 v2481 = *(i1*)(intptr_t)v2480;
	i8 v2482 = (i8)(intptr_t)(ws+3072);
	i8 v2483 = *(i8*)(intptr_t)v2482;
	i8 v2484 = v2483+(+8);
	*(i1*)(intptr_t)v2484 = v2481;

endsub:;
	*p2466 = *(i8*)(intptr_t)(ws+3072);
}

// MidAsmsymbol workspace at ws+3008 length ws+16
void f134_MidAsmsymbol(i8* p2505 /* m */, i8 p2506 /* sym */) {
	*(i8*)(intptr_t)(ws+3008) = p2506; /*sym */

	i1 v2507 = (i1)+16;
	i8 v2508;
	f84_AllocateNewNode(&v2508, v2507);
	i8 v2509 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2509 = v2508;

	i8 v2510 = (i8)(intptr_t)(ws+3008);
	i8 v2511 = *(i8*)(intptr_t)v2510;
	i8 v2512 = (i8)(intptr_t)(ws+3016);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	*(i8*)(intptr_t)v2513 = v2511;

endsub:;
	*p2505 = *(i8*)(intptr_t)(ws+3016);
}

// MidInits workspace at ws+3024 length ws+16
void f135_MidInits(i8* p2514 /* m */, i8 p2515 /* text */) {
	*(i8*)(intptr_t)(ws+3024) = p2515; /*text */

	i1 v2516 = (i1)+12;
	i8 v2517;
	f84_AllocateNewNode(&v2517, v2516);
	i8 v2518 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2518 = v2517;

	i8 v2519 = (i8)(intptr_t)(ws+3024);
	i8 v2520 = *(i8*)(intptr_t)v2519;
	i8 v2521 = (i8)(intptr_t)(ws+3032);
	i8 v2522 = *(i8*)(intptr_t)v2521;
	*(i8*)(intptr_t)v2522 = v2520;

endsub:;
	*p2514 = *(i8*)(intptr_t)(ws+3032);
}

// MidEndcase workspace at ws+3008 length ws+16
void f136_MidEndcase(i8* p2523 /* m */, i1 p2524 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p2524; /*width */

	i8 v2525 = (i8)(intptr_t)(ws+3008);
	i1 v2526 = *(i1*)(intptr_t)v2525;
	i1 v2527;
	f83_WidthToIndex(&v2527, v2526);
	i1 v2528 = v2527+(+80);
	i8 v2529;
	f84_AllocateNewNode(&v2529, v2528);
	i8 v2530 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2530 = v2529;

endsub:;
	*p2523 = *(i8*)(intptr_t)(ws+3016);
}

// MidString workspace at ws+3000 length ws+16
void f137_MidString(i8* p2531 /* m */, i8 p2532 /* text */) {
	*(i8*)(intptr_t)(ws+3000) = p2532; /*text */

	i1 v2533 = (i1)+41;
	i8 v2534;
	f84_AllocateNewNode(&v2534, v2533);
	i8 v2535 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2535 = v2534;

	i8 v2536 = (i8)(intptr_t)(ws+3000);
	i8 v2537 = *(i8*)(intptr_t)v2536;
	i8 v2538 = (i8)(intptr_t)(ws+3008);
	i8 v2539 = *(i8*)(intptr_t)v2538;
	*(i8*)(intptr_t)v2539 = v2537;

endsub:;
	*p2531 = *(i8*)(intptr_t)(ws+3008);
}

// MidStartcase workspace at ws+3008 length ws+24
void f138_MidStartcase(i8* p2540 /* m */, i8 p2541 /* left */, i1 p2542 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p2542; /*width */
	*(i8*)(intptr_t)(ws+3016) = p2541; /*left */

	i8 v2543 = (i8)(intptr_t)(ws+3008);
	i1 v2544 = *(i1*)(intptr_t)v2543;
	i1 v2545;
	f83_WidthToIndex(&v2545, v2544);
	i1 v2546 = v2545+(+70);
	i8 v2547;
	f84_AllocateNewNode(&v2547, v2546);
	i8 v2548 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2548 = v2547;

	i8 v2549 = (i8)(intptr_t)(ws+3016);
	i8 v2550 = *(i8*)(intptr_t)v2549;
	i8 v2551 = (i8)(intptr_t)(ws+3024);
	i8 v2552 = *(i8*)(intptr_t)v2551;
	i8 v2553 = v2552+(+24);
	*(i8*)(intptr_t)v2553 = v2550;

endsub:;
	*p2540 = *(i8*)(intptr_t)(ws+3024);
}

// MidAsmvalue workspace at ws+3008 length ws+16
void f139_MidAsmvalue(i8* p2554 /* m */, i4 p2555 /* value */) {
	*(i4*)(intptr_t)(ws+3008) = p2555; /*value */

	i1 v2556 = (i1)+17;
	i8 v2557;
	f84_AllocateNewNode(&v2557, v2556);
	i8 v2558 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2558 = v2557;

	i8 v2559 = (i8)(intptr_t)(ws+3008);
	i4 v2560 = *(i4*)(intptr_t)v2559;
	i8 v2561 = (i8)(intptr_t)(ws+3016);
	i8 v2562 = *(i8*)(intptr_t)v2561;
	*(i4*)(intptr_t)v2562 = v2560;

endsub:;
	*p2554 = *(i8*)(intptr_t)(ws+3016);
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
const i1 c02_s003c[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };

// midcodec_i_bad_fold workspace at ws+3136 length ws+0
void f142_midcodec_i_bad_fold(void) {

	i8 v2631 = (i8)(intptr_t)c02_s003c;
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
	i1 v2767;
	f83_WidthToIndex(&v2767, v2766);
	i1 v2768 = v2764+v2767;
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
	i4 v2873;
	f144_FoldConstant2(&v2873, v2872, v2870, v2866);
	i8 v2874;
	f111_MidConstant(&v2874, v2873);
	i8 v2875 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2875 = v2874;

	i8 v2876 = (i8)(intptr_t)(ws+3064);
	i8 v2877 = *(i8*)(intptr_t)v2876;
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
	f140_Discard(v2926);

	i8 v2927 = (i8)(intptr_t)(ws+3092);
	i1 v2928 = *(i1*)(intptr_t)v2927;
	i1 v2929 = v2928+(-1);
	i4 v2930 = v2929;
	i8 v2931;
	f111_MidConstant(&v2931, v2930);
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
	i4 v3032;
	f144_FoldConstant2(&v3032, v3031, v3029, v3027);
	i8 v3033 = (i8)(intptr_t)(ws+3056);
	i8 v3034 = *(i8*)(intptr_t)v3033;
	*(i4*)(intptr_t)v3034 = v3032;

	i8 v3035 = (i8)(intptr_t)(ws+3064);
	i8 v3036 = *(i8*)(intptr_t)v3035;
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
	i1 v3044;
	f83_WidthToIndex(&v3044, v3043);
	i1 v3045 = v3041+v3044;
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
	i1 v3099;
	f83_WidthToIndex(&v3099, v3098);
	i1 v3100 = v3096+v3099;
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

// EmitByte workspace at ws+3344 length ws+16
void f149_EmitByte(i1 p3112 /* byte */) {
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

// E_space workspace at ws+3248 length ws+0
void f150_E_space(void) {

	i1 v3167 = (i1)+32;
	f149_EmitByte(v3167);

endsub:;
}

// E_comma workspace at ws+3272 length ws+0
void f151_E_comma(void) {

	i1 v3168 = (i1)+44;
	f149_EmitByte(v3168);

endsub:;
}

// E_tab workspace at ws+3248 length ws+0
void f152_E_tab(void) {

	i1 v3169 = (i1)+9;
	f149_EmitByte(v3169);

endsub:;
}

// E_nl workspace at ws+3248 length ws+0
void f153_E_nl(void) {

	i1 v3170 = (i1)+10;
	f149_EmitByte(v3170);

endsub:;
}

// E workspace at ws+3328 length ws+9
void f156_E(i8 p3173 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p3173; /*text */

c02_028d:;

	i8 v3174 = (i8)(intptr_t)(ws+3328);
	i8 v3175 = *(i8*)(intptr_t)v3174;
	i1 v3176 = *(i1*)(intptr_t)v3175;
	i8 v3177 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v3177 = v3176;

	i8 v3178 = (i8)(intptr_t)(ws+3328);
	i8 v3179 = *(i8*)(intptr_t)v3178;
	i8 v3180 = v3179+(+1);
	i8 v3181 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3181 = v3180;

	i8 v3182 = (i8)(intptr_t)(ws+3336);
	i1 v3183 = *(i1*)(intptr_t)v3182;
	i1 v3184 = (i1)+0;
	if (v3183==v3184) goto c02_0292; else goto c02_0293;

c02_0292:;

	goto c02_028e;

c02_0293:;

c02_028f:;

	i8 v3185 = (i8)(intptr_t)(ws+3336);
	i1 v3186 = *(i1*)(intptr_t)v3185;
	f149_EmitByte(v3186);

	goto c02_028d;

c02_028e:;

endsub:;
}

// E_u32 workspace at ws+3304 length ws+33
void f157_E_u32(i4 p3187 /* value */) {
	*(i4*)(intptr_t)(ws+3304) = p3187; /*value */

	i8 v3188 = (i8)(intptr_t)(ws+3308);
	i8 v3189 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3189 = v3188;

	i8 v3190 = (i8)(intptr_t)(ws+3304);
	i4 v3191 = *(i4*)(intptr_t)v3190;
	i1 v3192 = (i1)+10;
	i8 v3193 = (i8)(intptr_t)(ws+3320);
	i8 v3194 = *(i8*)(intptr_t)v3193;
	i8 v3195;
	f13_UIToA(&v3195, v3194, v3192, v3191);
	i8 v3196 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3196 = v3195;

c02_0294:;

	i8 v3197 = (i8)(intptr_t)(ws+3320);
	i8 v3198 = *(i8*)(intptr_t)v3197;
	i1 v3199 = *(i1*)(intptr_t)v3198;
	i8 v3200 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v3200 = v3199;

	i8 v3201 = (i8)(intptr_t)(ws+3336);
	i1 v3202 = *(i1*)(intptr_t)v3201;
	i1 v3203 = (i1)+0;
	if (v3202==v3203) goto c02_0299; else goto c02_029a;

c02_0299:;

	goto c02_0295;

c02_029a:;

c02_0296:;

	i8 v3204 = (i8)(intptr_t)(ws+3336);
	i1 v3205 = *(i1*)(intptr_t)v3204;
	f149_EmitByte(v3205);

	i8 v3206 = (i8)(intptr_t)(ws+3320);
	i8 v3207 = *(i8*)(intptr_t)v3206;
	i8 v3208 = v3207+(+1);
	i8 v3209 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3209 = v3208;

	goto c02_0294;

c02_0295:;

endsub:;
}

// E_u16 workspace at ws+3296 length ws+2
void f158_E_u16(i2 p3210 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3210; /*value */

	i8 v3211 = (i8)(intptr_t)(ws+3296);
	i2 v3212 = *(i2*)(intptr_t)v3211;
	i4 v3213 = v3212;
	f157_E_u32(v3213);

endsub:;
}

// E_u8 workspace at ws+3280 length ws+1
void f159_E_u8(i1 p3214 /* value */) {
	*(i1*)(intptr_t)(ws+3280) = p3214; /*value */

	i8 v3215 = (i8)(intptr_t)(ws+3280);
	i1 v3216 = *(i1*)(intptr_t)v3215;
	i4 v3217 = v3216;
	f157_E_u32(v3217);

endsub:;
}

// E_i16 workspace at ws+3288 length ws+2
void f161_E_i16(i2 p3230 /* value */) {
	*(i2*)(intptr_t)(ws+3288) = p3230; /*value */

	i8 v3231 = (i8)(intptr_t)(ws+3288);
	i2 v3232 = *(i2*)(intptr_t)v3231;
	i2 v3233 = (i2)+0;
	if ((s2)v3232<(s2)v3233) goto c02_02a3; else goto c02_02a4;

c02_02a3:;

	i1 v3234 = (i1)+45;
	f149_EmitByte(v3234);

	i8 v3235 = (i8)(intptr_t)(ws+3288);
	i2 v3236 = *(i2*)(intptr_t)v3235;
	i2 v3237 = -v3236;
	i8 v3238 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v3238 = v3237;

	goto c02_02a0;

c02_02a4:;

	i1 v3239 = (i1)+43;
	f149_EmitByte(v3239);

c02_02a0:;

	i8 v3240 = (i8)(intptr_t)(ws+3288);
	i2 v3241 = *(i2*)(intptr_t)v3240;
	f158_E_u16(v3241);

endsub:;
}

// E_i32 workspace at ws+3272 length ws+4
void f162_E_i32(i4 p3242 /* value */) {
	*(i4*)(intptr_t)(ws+3272) = p3242; /*value */

	i8 v3243 = (i8)(intptr_t)(ws+3272);
	i4 v3244 = *(i4*)(intptr_t)v3243;
	i4 v3245 = (i4)+0;
	if ((s4)v3244<(s4)v3245) goto c02_02a8; else goto c02_02a9;

c02_02a8:;

	i1 v3246 = (i1)+45;
	f149_EmitByte(v3246);

	i8 v3247 = (i8)(intptr_t)(ws+3272);
	i4 v3248 = *(i4*)(intptr_t)v3247;
	i4 v3249 = -v3248;
	i8 v3250 = (i8)(intptr_t)(ws+3272);
	*(i4*)(intptr_t)v3250 = v3249;

	goto c02_02a5;

c02_02a9:;

	i1 v3251 = (i1)+43;
	f149_EmitByte(v3251);

c02_02a5:;

	i8 v3252 = (i8)(intptr_t)(ws+3272);
	i4 v3253 = *(i4*)(intptr_t)v3252;
	f157_E_u32(v3253);

endsub:;
}

// E_h workspace at ws+3296 length ws+25
void f163_E_h(i1 p3254 /* width */, i4 p3255 /* value */) {
	*(i4*)(intptr_t)(ws+3296) = p3255; /*value */
	*(i1*)(intptr_t)(ws+3300) = p3254; /*width */

	i8 v3256 = (i8)(intptr_t)(ws+3296);
	i4 v3257 = *(i4*)(intptr_t)v3256;
	i1 v3258 = (i1)+16;
	i8 v3259 = (i8)(intptr_t)(ws+3301);
	i8 v3260;
	f13_UIToA(&v3260, v3259, v3258, v3257);
	i8 v3261 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v3261 = v3260;

	i8 v3262 = (i8)(intptr_t)(ws+3300);
	i1 v3263 = *(i1*)(intptr_t)v3262;
	i8 v3264 = (i8)(intptr_t)(ws+3312);
	i8 v3265 = *(i8*)(intptr_t)v3264;
	i8 v3266 = (i8)(intptr_t)(ws+3301);
	i8 v3267 = v3265-v3266;
	i1 v3268 = v3267;
	i1 v3269 = v3263-v3268;
	i8 v3270 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v3270 = v3269;

c02_02ac:;

	i8 v3271 = (i8)(intptr_t)(ws+3320);
	i1 v3272 = *(i1*)(intptr_t)v3271;
	i1 v3273 = (i1)+0;
	if (v3272==v3273) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i1 v3274 = (i1)+48;
	f149_EmitByte(v3274);

	i8 v3275 = (i8)(intptr_t)(ws+3320);
	i1 v3276 = *(i1*)(intptr_t)v3275;
	i1 v3277 = v3276+(-1);
	i8 v3278 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v3278 = v3277;

	goto c02_02ac;

c02_02af:;

	i8 v3279 = (i8)(intptr_t)(ws+3301);
	f156_E(v3279);

endsub:;
}

// E_h8 workspace at ws+3288 length ws+1
void f164_E_h8(i1 p3280 /* value */) {
	*(i1*)(intptr_t)(ws+3288) = p3280; /*value */

	i8 v3281 = (i8)(intptr_t)(ws+3288);
	i1 v3282 = *(i1*)(intptr_t)v3281;
	i4 v3283 = v3282;
	i1 v3284 = (i1)+2;
	f163_E_h(v3284, v3283);

endsub:;
}

// E_h16 workspace at ws+3288 length ws+2
void f165_E_h16(i2 p3285 /* value */) {
	*(i2*)(intptr_t)(ws+3288) = p3285; /*value */

	i8 v3286 = (i8)(intptr_t)(ws+3288);
	i2 v3287 = *(i2*)(intptr_t)v3286;
	i4 v3288 = v3287;
	i1 v3289 = (i1)+4;
	f163_E_h(v3289, v3288);

endsub:;
}

// E_labelref workspace at ws+3280 length ws+2
void f167_E_labelref(i2 p3294 /* labelid */) {
	*(i2*)(intptr_t)(ws+3280) = p3294; /*labelid */

	i1 v3295 = (i1)+3;
	f149_EmitByte(v3295);

	i8 v3296 = (i8)(intptr_t)(ws+3280);
	i2 v3297 = *(i2*)(intptr_t)v3296;
	f165_E_h16(v3297);

endsub:;
}

// E_subref workspace at ws+3280 length ws+8
void f168_E_subref(i8 p3298 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p3298; /*subr */

	i8 v3299 = (i8)(intptr_t)(ws+3280);
	i8 v3300 = *(i8*)(intptr_t)v3299;
	i8 v3301 = (i8)(intptr_t)(ws+40);
	i8 v3302 = *(i8*)(intptr_t)v3301;
	if (v3300==v3302) goto c02_02b3; else goto c02_02b4;

c02_02b3:;

	i1 v3303 = (i1)+4;
	f149_EmitByte(v3303);

	goto c02_02b0;

c02_02b4:;

	i1 v3304 = (i1)+1;
	f149_EmitByte(v3304);

	i8 v3305 = (i8)(intptr_t)(ws+3280);
	i8 v3306 = *(i8*)(intptr_t)v3305;
	i8 v3307 = v3306+(+56);
	i2 v3308 = *(i2*)(intptr_t)v3307;
	f165_E_h16(v3308);

c02_02b0:;

endsub:;
}

// EmitterPushChunk workspace at ws+3288 length ws+8
void f170_EmitterPushChunk(void) {

	i8 v3319 = (i8)+26;
	i8 v3320;
	f31_Alloc(&v3320, v3319);
	i8 v3321 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v3321 = v3320;

	i8 v3322 = (i8)+144;
	i8 v3323;
	f31_Alloc(&v3323, v3322);
	i8 v3324 = (i8)(intptr_t)(ws+3288);
	i8 v3325 = *(i8*)(intptr_t)v3324;
	i8 v3326 = v3325+(+16);
	*(i8*)(intptr_t)v3326 = v3323;

	i8 v3327 = (i8)(intptr_t)(ws+3288);
	i8 v3328 = *(i8*)(intptr_t)v3327;
	i8 v3329 = v3328+(+16);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i8 v3331 = (i8)(intptr_t)(ws+3288);
	i8 v3332 = *(i8*)(intptr_t)v3331;
	i8 v3333 = v3332+(+8);
	*(i8*)(intptr_t)v3333 = v3330;

	i8 v3334 = (i8)(intptr_t)(ws+768);
	i8 v3335 = *(i8*)(intptr_t)v3334;
	i8 v3336 = (i8)(intptr_t)(ws+3288);
	i8 v3337 = *(i8*)(intptr_t)v3336;
	*(i8*)(intptr_t)v3337 = v3335;

	i8 v3338 = (i8)(intptr_t)(ws+3288);
	i8 v3339 = *(i8*)(intptr_t)v3338;
	i8 v3340 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v3340 = v3339;

endsub:;
}
const i1 c02_s003d[] = { 0x30,0x30,0x30,0x30,0 };

// EmitterPopChunk workspace at ws+3288 length ws+48
void f171_EmitterPopChunk(i1 p3341 /* type */) {
	*(i1*)(intptr_t)(ws+3288) = p3341; /*type */

	i8 v3342 = (i8)(intptr_t)(ws+244);
	i8 v3343 = (i8)(intptr_t)(ws+3288);
	i1 v3344 = *(i1*)(intptr_t)v3343;
	f49_FCBPutChar(v3344, v3342);

	i8 v3345 = (i8)(intptr_t)(ws+768);
	i8 v3346 = *(i8*)(intptr_t)v3345;
	i8 v3347 = v3346+(+24);
	i2 v3348 = *(i2*)(intptr_t)v3347;
	i4 v3349 = v3348;
	i1 v3350 = (i1)+16;
	i8 v3351 = (i8)(intptr_t)(ws+3289);
	i8 v3352;
	f13_UIToA(&v3352, v3351, v3350, v3349);
	i8 v3353 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v3353 = v3352;

	i8 v3354 = (i8)(intptr_t)(ws+244);
	i8 v3355 = (i8)(intptr_t)c02_s003d;
	i8 v3356 = (i8)(intptr_t)(ws+3296);
	i8 v3357 = *(i8*)(intptr_t)v3356;
	i8 v3358 = (i8)(intptr_t)(ws+3289);
	i8 v3359 = v3357-v3358;
	i8 v3360 = v3355+v3359;
	f50_FCBPutString(v3360, v3354);

	i8 v3361 = (i8)(intptr_t)(ws+244);
	i8 v3362 = (i8)(intptr_t)(ws+3289);
	f50_FCBPutString(v3362, v3361);

	i8 v3363 = (i8)(intptr_t)(ws+768);
	i8 v3364 = *(i8*)(intptr_t)v3363;
	i8 v3365 = v3364+(+8);
	i8 v3366 = *(i8*)(intptr_t)v3365;
	i8 v3367 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3367 = v3366;

c02_02b7:;

	i8 v3368 = (i8)(intptr_t)(ws+3304);
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = (i8)+0;
	if (v3369==v3370) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i1 v3371 = (i1)+0;
	i8 v3372 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3372 = v3371;

c02_02bd:;

	i8 v3373 = (i8)(intptr_t)(ws+3312);
	i1 v3374 = *(i1*)(intptr_t)v3373;
	i8 v3375 = (i8)(intptr_t)(ws+3304);
	i8 v3376 = *(i8*)(intptr_t)v3375;
	i8 v3377 = v3376+(+128);
	i1 v3378 = *(i1*)(intptr_t)v3377;
	if (v3374==v3378) goto c02_02c0; else goto c02_02bf;

c02_02bf:;

	i8 v3379 = (i8)(intptr_t)(ws+244);
	i8 v3380 = (i8)(intptr_t)(ws+3304);
	i8 v3381 = *(i8*)(intptr_t)v3380;
	i8 v3382 = (i8)(intptr_t)(ws+3312);
	i1 v3383 = *(i1*)(intptr_t)v3382;
	i8 v3384 = v3383;
	i8 v3385 = v3381+v3384;
	i1 v3386 = *(i1*)(intptr_t)v3385;
	f49_FCBPutChar(v3386, v3379);

	i8 v3387 = (i8)(intptr_t)(ws+3312);
	i1 v3388 = *(i1*)(intptr_t)v3387;
	i1 v3389 = v3388+(+1);
	i8 v3390 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3390 = v3389;

	goto c02_02bd;

c02_02c0:;

	i8 v3391 = (i8)(intptr_t)(ws+3304);
	i8 v3392 = *(i8*)(intptr_t)v3391;
	i8 v3393 = v3392+(+136);
	i8 v3394 = *(i8*)(intptr_t)v3393;
	i8 v3395 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3395 = v3394;

	i8 v3396 = (i8)(intptr_t)(ws+3304);
	i8 v3397 = *(i8*)(intptr_t)v3396;
	f32_Free(v3397);

	i8 v3398 = (i8)(intptr_t)(ws+3320);
	i8 v3399 = *(i8*)(intptr_t)v3398;
	i8 v3400 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3400 = v3399;

	goto c02_02b7;

c02_02ba:;

	i8 v3401 = (i8)(intptr_t)(ws+768);
	i8 v3402 = *(i8*)(intptr_t)v3401;
	i8 v3403 = *(i8*)(intptr_t)v3402;
	i8 v3404 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3404 = v3403;

	i8 v3405 = (i8)(intptr_t)(ws+768);
	i8 v3406 = *(i8*)(intptr_t)v3405;
	f32_Free(v3406);

	i8 v3407 = (i8)(intptr_t)(ws+3328);
	i8 v3408 = *(i8*)(intptr_t)v3407;
	i8 v3409 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v3409 = v3408;

endsub:;
}
const i1 c02_s003e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+2880 length ws+8
void f172_EmitterOpenfile(i8 p3410 /* filename */) {
	*(i8*)(intptr_t)(ws+2880) = p3410; /*filename */

	i8 v3411 = (i8)(intptr_t)(ws+244);
	i8 v3412 = (i8)(intptr_t)(ws+2880);
	i8 v3413 = *(i8*)(intptr_t)v3412;
	i1 v3414;
	f42_FCBOpenOut(&v3414, v3413, v3411);
	i1 v3415 = (i1)+0;
	if (v3414==v3415) goto c02_02c5; else goto c02_02c4;

c02_02c4:;

	i8 v3416 = (i8)(intptr_t)c02_s003e;
	f57_SimpleError(v3416);

	goto c02_02c1;

c02_02c5:;

c02_02c1:;

endsub:;
}
const i1 c02_s003f[] = { 0x45,0x30,0x30,0x30,0x30,0 };
const i1 c02_s0040[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+2880 length ws+0
void f173_EmitterClosefile(void) {

	i8 v3417 = (i8)(intptr_t)(ws+244);
	i8 v3418 = (i8)(intptr_t)c02_s003f;
	f50_FCBPutString(v3418, v3417);

	i8 v3419 = (i8)(intptr_t)(ws+244);
	i1 v3420;
	f43_FCBClose(&v3420, v3419);
	i1 v3421 = (i1)+0;
	if (v3420==v3421) goto c02_02ca; else goto c02_02c9;

c02_02c9:;

	i8 v3422 = (i8)(intptr_t)c02_s0040;
	f57_SimpleError(v3422);

	goto c02_02c6;

c02_02ca:;

c02_02c6:;

endsub:;
}

// EmitterDeclareSubroutine workspace at ws+3008 length ws+8
void f174_EmitterDeclareSubroutine(i8 p3423 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p3423; /*subr */

	f170_EmitterPushChunk();

	i8 v3424 = (i8)(intptr_t)(ws+3008);
	i8 v3425 = *(i8*)(intptr_t)v3424;
	i8 v3426 = v3425+(+56);
	i2 v3427 = *(i2*)(intptr_t)v3426;
	f165_E_h16(v3427);

	i8 v3428 = (i8)(intptr_t)(ws+3008);
	i8 v3429 = *(i8*)(intptr_t)v3428;
	i8 v3430 = *(i8*)(intptr_t)v3429;
	f156_E(v3430);

	i1 v3431 = (i1)+78;
	f171_EmitterPopChunk(v3431);

endsub:;
}

// EmitterReferenceSubroutine workspace at ws+3056 length ws+16
void f176_EmitterReferenceSubroutine(i8 p3439 /* used */, i8 p3440 /* user */) {
	*(i8*)(intptr_t)(ws+3056) = p3440; /*user */
	*(i8*)(intptr_t)(ws+3064) = p3439; /*used */

	f170_EmitterPushChunk();

	i8 v3441 = (i8)(intptr_t)(ws+3056);
	i8 v3442 = *(i8*)(intptr_t)v3441;
	i8 v3443 = v3442+(+56);
	i2 v3444 = *(i2*)(intptr_t)v3443;
	f165_E_h16(v3444);

	i8 v3445 = (i8)(intptr_t)(ws+3064);
	i8 v3446 = *(i8*)(intptr_t)v3445;
	i8 v3447 = v3446+(+56);
	i2 v3448 = *(i2*)(intptr_t)v3447;
	f165_E_h16(v3448);

	i1 v3449 = (i1)+82;
	f171_EmitterPopChunk(v3449);

endsub:;
}

// EmitterDeclareWorkspace workspace at ws+3272 length ws+12
void f177_EmitterDeclareWorkspace(i2 p3450 /* workspace */, i1 p3451 /* wid */, i8 p3452 /* subr */) {
	*(i8*)(intptr_t)(ws+3272) = p3452; /*subr */
	*(i1*)(intptr_t)(ws+3280) = p3451; /*wid */
	*(i2*)(intptr_t)(ws+3282) = p3450; /*workspace */

	f170_EmitterPushChunk();

	i8 v3453 = (i8)(intptr_t)(ws+3272);
	i8 v3454 = *(i8*)(intptr_t)v3453;
	i8 v3455 = v3454+(+56);
	i2 v3456 = *(i2*)(intptr_t)v3455;
	f165_E_h16(v3456);

	i8 v3457 = (i8)(intptr_t)(ws+3280);
	i1 v3458 = *(i1*)(intptr_t)v3457;
	f164_E_h8(v3458);

	i8 v3459 = (i8)(intptr_t)(ws+3282);
	i2 v3460 = *(i2*)(intptr_t)v3459;
	f165_E_h16(v3460);

	i1 v3461 = (i1)+87;
	f171_EmitterPopChunk(v3461);

endsub:;
}

// LookupSymbolInNamespace workspace at ws+3088 length ws+24
void f187_LookupSymbolInNamespace(i8* p3786 /* symbol */, i8 p3787 /* name */, i8 p3788 /* namespace */) {
	*(i8*)(intptr_t)(ws+3088) = p3788; /*namespace */
	*(i8*)(intptr_t)(ws+3096) = p3787; /*name */

	i8 v3789 = (i8)(intptr_t)(ws+3088);
	i8 v3790 = *(i8*)(intptr_t)v3789;
	i8 v3791 = *(i8*)(intptr_t)v3790;
	i8 v3792 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3792 = v3791;

c02_0355:;

	i8 v3793 = (i8)(intptr_t)(ws+3104);
	i8 v3794 = *(i8*)(intptr_t)v3793;
	i8 v3795 = (i8)+0;
	if (v3794==v3795) goto c02_0358; else goto c02_0357;

c02_0357:;

	i8 v3796 = (i8)(intptr_t)(ws+3104);
	i8 v3797 = *(i8*)(intptr_t)v3796;
	i8 v3798 = v3797+(+48);
	i8 v3799 = *(i8*)(intptr_t)v3798;
	i8 v3800 = (i8)(intptr_t)(ws+3096);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	i1 v3802;
	f25_StrCmp(&v3802, v3801, v3799);
	i1 v3803 = (i1)+0;
	if (v3802==v3803) goto c02_035c; else goto c02_035d;

c02_035c:;

c02_0360:;

	i8 v3804 = (i8)(intptr_t)(ws+3104);
	i8 v3805 = *(i8*)(intptr_t)v3804;
	i8 v3806 = v3805+(+46);
	i1 v3807 = *(i1*)(intptr_t)v3806;
	i1 v3808 = (i1)+39;
	if (v3807==v3808) goto c02_0362; else goto c02_0363;

c02_0362:;

	i8 v3809 = (i8)(intptr_t)(ws+3104);
	i8 v3810 = *(i8*)(intptr_t)v3809;
	i8 v3811 = *(i8*)(intptr_t)v3810;
	i8 v3812 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3812 = v3811;

	goto c02_0360;

c02_0363:;

	goto endsub;

c02_035d:;

c02_0359:;

	i8 v3813 = (i8)(intptr_t)(ws+3104);
	i8 v3814 = *(i8*)(intptr_t)v3813;
	i8 v3815 = v3814+(+56);
	i8 v3816 = *(i8*)(intptr_t)v3815;
	i8 v3817 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3817 = v3816;

	goto c02_0355;

c02_0358:;

	i8 v3818 = (i8)+0;
	i8 v3819 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v3819 = v3818;

endsub:;
	*p3786 = *(i8*)(intptr_t)(ws+3104);
}

// LookupSymbol workspace at ws+3024 length ws+24
void f188_LookupSymbol(i8* p3820 /* symbol */, i8 p3821 /* name */, i8 p3822 /* namespace */) {
	*(i8*)(intptr_t)(ws+3024) = p3822; /*namespace */
	*(i8*)(intptr_t)(ws+3032) = p3821; /*name */

	i8 v3823 = (i8)(intptr_t)(ws+3024);
	i8 v3824 = *(i8*)(intptr_t)v3823;
	i8 v3825 = (i8)+0;
	if (v3824==v3825) goto c02_0367; else goto c02_0368;

c02_0367:;

	i8 v3826 = (i8)(intptr_t)(ws+40);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = v3827+(+16);
	i8 v3829 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v3829 = v3828;

	goto c02_0364;

c02_0368:;

c02_0364:;

c02_036b:;

	i8 v3830 = (i8)(intptr_t)(ws+3024);
	i8 v3831 = *(i8*)(intptr_t)v3830;
	i8 v3832 = (i8)+0;
	if (v3831==v3832) goto c02_036e; else goto c02_036d;

c02_036d:;

	i8 v3833 = (i8)(intptr_t)(ws+3024);
	i8 v3834 = *(i8*)(intptr_t)v3833;
	i8 v3835 = (i8)(intptr_t)(ws+3032);
	i8 v3836 = *(i8*)(intptr_t)v3835;
	i8 v3837;
	f187_LookupSymbolInNamespace(&v3837, v3836, v3834);
	i8 v3838 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v3838 = v3837;

	i8 v3839 = (i8)(intptr_t)(ws+3040);
	i8 v3840 = *(i8*)(intptr_t)v3839;
	i8 v3841 = (i8)+0;
	if (v3840==v3841) goto c02_0373; else goto c02_0372;

c02_0372:;

	goto endsub;

c02_0373:;

c02_036f:;

	i8 v3842 = (i8)(intptr_t)(ws+3024);
	i8 v3843 = *(i8*)(intptr_t)v3842;
	i8 v3844 = v3843+(+16);
	i8 v3845 = *(i8*)(intptr_t)v3844;
	i8 v3846 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v3846 = v3845;

	goto c02_036b;

c02_036e:;

	i8 v3847 = (i8)+0;
	i8 v3848 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v3848 = v3847;

endsub:;
	*p3820 = *(i8*)(intptr_t)(ws+3040);
}

// AddToNamespace workspace at ws+3088 length ws+16
void f189_AddToNamespace(i8 p3849 /* symbol */, i8 p3850 /* namespace */) {
	*(i8*)(intptr_t)(ws+3088) = p3850; /*namespace */
	*(i8*)(intptr_t)(ws+3096) = p3849; /*symbol */

	i8 v3851 = (i8)(intptr_t)(ws+3088);
	i8 v3852 = *(i8*)(intptr_t)v3851;
	i8 v3853 = v3852+(+8);
	i8 v3854 = *(i8*)(intptr_t)v3853;
	i8 v3855 = (i8)+0;
	if (v3854==v3855) goto c02_0377; else goto c02_0378;

c02_0377:;

	i8 v3856 = (i8)(intptr_t)(ws+3096);
	i8 v3857 = *(i8*)(intptr_t)v3856;
	i8 v3858 = (i8)(intptr_t)(ws+3088);
	i8 v3859 = *(i8*)(intptr_t)v3858;
	*(i8*)(intptr_t)v3859 = v3857;

	i8 v3860 = (i8)(intptr_t)(ws+3096);
	i8 v3861 = *(i8*)(intptr_t)v3860;
	i8 v3862 = (i8)(intptr_t)(ws+3088);
	i8 v3863 = *(i8*)(intptr_t)v3862;
	i8 v3864 = v3863+(+8);
	*(i8*)(intptr_t)v3864 = v3861;

	goto c02_0374;

c02_0378:;

	i8 v3865 = (i8)(intptr_t)(ws+3096);
	i8 v3866 = *(i8*)(intptr_t)v3865;
	i8 v3867 = (i8)(intptr_t)(ws+3088);
	i8 v3868 = *(i8*)(intptr_t)v3867;
	i8 v3869 = v3868+(+8);
	i8 v3870 = *(i8*)(intptr_t)v3869;
	i8 v3871 = v3870+(+56);
	*(i8*)(intptr_t)v3871 = v3866;

	i8 v3872 = (i8)(intptr_t)(ws+3096);
	i8 v3873 = *(i8*)(intptr_t)v3872;
	i8 v3874 = (i8)(intptr_t)(ws+3088);
	i8 v3875 = *(i8*)(intptr_t)v3874;
	i8 v3876 = v3875+(+8);
	*(i8*)(intptr_t)v3876 = v3873;

c02_0374:;

endsub:;
}
const i1 c02_s0041[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s0042[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };

// AddSymbol workspace at ws+3064 length ws+24
void f190_AddSymbol(i8* p3877 /* symbol */, i8 p3878 /* name */, i8 p3879 /* namespace */) {
	*(i8*)(intptr_t)(ws+3064) = p3879; /*namespace */
	*(i8*)(intptr_t)(ws+3072) = p3878; /*name */

	i8 v3880 = (i8)(intptr_t)(ws+3064);
	i8 v3881 = *(i8*)(intptr_t)v3880;
	i8 v3882 = (i8)+0;
	if (v3881==v3882) goto c02_037c; else goto c02_037d;

c02_037c:;

	i8 v3883 = (i8)(intptr_t)(ws+40);
	i8 v3884 = *(i8*)(intptr_t)v3883;
	i8 v3885 = v3884+(+16);
	i8 v3886 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v3886 = v3885;

	goto c02_0379;

c02_037d:;

c02_0379:;

	i8 v3887 = (i8)+64;
	i8 v3888;
	f31_Alloc(&v3888, v3887);
	i8 v3889 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3889 = v3888;

	i8 v3890 = (i8)(intptr_t)(ws+3072);
	i8 v3891 = *(i8*)(intptr_t)v3890;
	i8 v3892 = (i8)+0;
	if (v3891==v3892) goto c02_0382; else goto c02_0381;

c02_0381:;

	i8 v3893 = (i8)(intptr_t)(ws+3064);
	i8 v3894 = *(i8*)(intptr_t)v3893;
	i8 v3895 = (i8)(intptr_t)(ws+3072);
	i8 v3896 = *(i8*)(intptr_t)v3895;
	i8 v3897;
	f187_LookupSymbolInNamespace(&v3897, v3896, v3894);
	i8 v3898 = (i8)+0;
	if (v3897==v3898) goto c02_0387; else goto c02_0386;

c02_0386:;

	f55_StartError();

	i8 v3899 = (i8)(intptr_t)c02_s0041;
	f11_print(v3899);

	i8 v3900 = (i8)(intptr_t)(ws+3072);
	i8 v3901 = *(i8*)(intptr_t)v3900;
	f11_print(v3901);

	i8 v3902 = (i8)(intptr_t)c02_s0042;
	f11_print(v3902);

	f56_EndError();

	goto c02_0383;

c02_0387:;

c02_0383:;

	i8 v3903 = (i8)(intptr_t)(ws+3072);
	i8 v3904 = *(i8*)(intptr_t)v3903;
	i8 v3905 = (i8)(intptr_t)(ws+3080);
	i8 v3906 = *(i8*)(intptr_t)v3905;
	i8 v3907 = v3906+(+48);
	*(i8*)(intptr_t)v3907 = v3904;

	i8 v3908 = (i8)(intptr_t)(ws+3064);
	i8 v3909 = *(i8*)(intptr_t)v3908;
	i8 v3910 = (i8)(intptr_t)(ws+3080);
	i8 v3911 = *(i8*)(intptr_t)v3910;
	f189_AddToNamespace(v3911, v3909);

	goto c02_037e;

c02_0382:;

c02_037e:;

endsub:;
	*p3877 = *(i8*)(intptr_t)(ws+3080);
}

// AddAlias workspace at ws+3008 length ws+32
void f191_AddAlias(i8* p3912 /* symbol */, i8 p3913 /* real */, i8 p3914 /* name */, i8 p3915 /* namespace */) {
	*(i8*)(intptr_t)(ws+3008) = p3915; /*namespace */
	*(i8*)(intptr_t)(ws+3016) = p3914; /*name */
	*(i8*)(intptr_t)(ws+3024) = p3913; /*real */

	i8 v3916 = (i8)(intptr_t)(ws+3008);
	i8 v3917 = *(i8*)(intptr_t)v3916;
	i8 v3918 = (i8)(intptr_t)(ws+3016);
	i8 v3919 = *(i8*)(intptr_t)v3918;
	i8 v3920;
	f190_AddSymbol(&v3920, v3919, v3917);
	i8 v3921 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v3921 = v3920;

	i1 v3922 = (i1)+39;
	i8 v3923 = (i8)(intptr_t)(ws+3032);
	i8 v3924 = *(i8*)(intptr_t)v3923;
	i8 v3925 = v3924+(+46);
	*(i1*)(intptr_t)v3925 = v3922;

	i8 v3926 = (i8)(intptr_t)(ws+3024);
	i8 v3927 = *(i8*)(intptr_t)v3926;
	i8 v3928 = (i8)(intptr_t)(ws+3032);
	i8 v3929 = *(i8*)(intptr_t)v3928;
	*(i8*)(intptr_t)v3929 = v3927;

endsub:;
	*p3912 = *(i8*)(intptr_t)(ws+3032);
}

// AddAliasString workspace at ws+2880 length ws+24
void f192_AddAliasString(i8 p3930 /* real */, i8 p3931 /* name */) {
	*(i8*)(intptr_t)(ws+2880) = p3931; /*name */
	*(i8*)(intptr_t)(ws+2888) = p3930; /*real */

	i8 v3932 = (i8)+0;
	i8 v3933 = (i8)(intptr_t)(ws+2880);
	i8 v3934 = *(i8*)(intptr_t)v3933;
	i8 v3935 = (i8)(intptr_t)(ws+2888);
	i8 v3936 = *(i8*)(intptr_t)v3935;
	i8 v3937;
	f191_AddAlias(&v3937, v3936, v3934, v3932);
	i8 v3938 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v3938 = v3937;

endsub:;
}
const i1 c02_s0043[] = { 0x27,0 };
const i1 c02_s0044[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };

// CheckNotPartialType workspace at ws+3048 length ws+8
void f193_CheckNotPartialType(i8 p3939 /* type */) {
	*(i8*)(intptr_t)(ws+3048) = p3939; /*type */

	i8 v3940 = (i8)(intptr_t)(ws+3048);
	i8 v3941 = *(i8*)(intptr_t)v3940;
	i8 v3942 = v3941+(+40);
	i1 v3943 = *(i1*)(intptr_t)v3942;
	i1 v3944 = (i1)+1;
	if (v3943==v3944) goto c02_038b; else goto c02_038c;

c02_038b:;

	f55_StartError();

	i8 v3945 = (i8)(intptr_t)c02_s0043;
	f11_print(v3945);

	i8 v3946 = (i8)(intptr_t)(ws+3048);
	i8 v3947 = *(i8*)(intptr_t)v3946;
	i8 v3948 = v3947+(+48);
	i8 v3949 = *(i8*)(intptr_t)v3948;
	f11_print(v3949);

	i8 v3950 = (i8)(intptr_t)c02_s0044;
	f11_print(v3950);

	f56_EndError();

	goto c02_0388;

c02_038c:;

c02_0388:;

endsub:;
}

// MakeNumberType workspace at ws+2880 length ws+24
void f194_MakeNumberType(i8* p3951 /* symbol */, i8 p3952 /* name */, i1 p3953 /* is_signed */, i1 p3954 /* alignment */, i1 p3955 /* width */) {
	*(i1*)(intptr_t)(ws+2880) = p3955; /*width */
	*(i1*)(intptr_t)(ws+2881) = p3954; /*alignment */
	*(i1*)(intptr_t)(ws+2882) = p3953; /*is_signed */
	*(i8*)(intptr_t)(ws+2888) = p3952; /*name */

	i8 v3956 = (i8)+64;
	i8 v3957;
	f31_Alloc(&v3957, v3956);
	i8 v3958 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v3958 = v3957;

	i1 v3959 = (i1)+30;
	i8 v3960 = (i8)(intptr_t)(ws+2896);
	i8 v3961 = *(i8*)(intptr_t)v3960;
	i8 v3962 = v3961+(+46);
	*(i1*)(intptr_t)v3962 = v3959;

	i1 v3963 = (i1)+2;
	i8 v3964 = (i8)(intptr_t)(ws+2896);
	i8 v3965 = *(i8*)(intptr_t)v3964;
	i8 v3966 = v3965+(+40);
	*(i1*)(intptr_t)v3966 = v3963;

	i8 v3967 = (i8)(intptr_t)(ws+2880);
	i1 v3968 = *(i1*)(intptr_t)v3967;
	i2 v3969 = v3968;
	i8 v3970 = (i8)(intptr_t)(ws+2896);
	i8 v3971 = *(i8*)(intptr_t)v3970;
	i8 v3972 = v3971+(+42);
	*(i2*)(intptr_t)v3972 = v3969;

	i8 v3973 = (i8)(intptr_t)(ws+2880);
	i1 v3974 = *(i1*)(intptr_t)v3973;
	i2 v3975 = v3974;
	i8 v3976 = (i8)(intptr_t)(ws+2896);
	i8 v3977 = *(i8*)(intptr_t)v3976;
	i8 v3978 = v3977+(+44);
	*(i2*)(intptr_t)v3978 = v3975;

	i8 v3979 = (i8)(intptr_t)(ws+2881);
	i1 v3980 = *(i1*)(intptr_t)v3979;
	i8 v3981 = (i8)(intptr_t)(ws+2896);
	i8 v3982 = *(i8*)(intptr_t)v3981;
	i8 v3983 = v3982+(+41);
	*(i1*)(intptr_t)v3983 = v3980;

	i8 v3984 = (i8)(intptr_t)(ws+2882);
	i1 v3985 = *(i1*)(intptr_t)v3984;
	i8 v3986 = (i8)(intptr_t)(ws+2896);
	i8 v3987 = *(i8*)(intptr_t)v3986;
	*(i1*)(intptr_t)v3987 = v3985;

	i8 v3988 = (i8)(intptr_t)(ws+2888);
	i8 v3989 = *(i8*)(intptr_t)v3988;
	i8 v3990 = (i8)(intptr_t)(ws+2896);
	i8 v3991 = *(i8*)(intptr_t)v3990;
	i8 v3992 = v3991+(+48);
	*(i8*)(intptr_t)v3992 = v3989;

	i8 v3993 = (i8)(intptr_t)(ws+40);
	i8 v3994 = *(i8*)(intptr_t)v3993;
	i8 v3995 = v3994+(+16);
	i8 v3996 = (i8)(intptr_t)(ws+2896);
	i8 v3997 = *(i8*)(intptr_t)v3996;
	f189_AddToNamespace(v3997, v3995);

endsub:;
	*p3951 = *(i8*)(intptr_t)(ws+2896);
}

// IsTypeOfKind workspace at ws+3112 length ws+10
void f195_IsTypeOfKind(i1* p3998 /* result */, i1 p3999 /* kind */, i8 p4000 /* type */) {
	*(i8*)(intptr_t)(ws+3112) = p4000; /*type */
	*(i1*)(intptr_t)(ws+3120) = p3999; /*kind */

	i1 v4001 = (i1)+0;
	i8 v4002 = (i8)(intptr_t)(ws+3121);
	*(i1*)(intptr_t)v4002 = v4001;

	i8 v4003 = (i8)(intptr_t)(ws+3112);
	i8 v4004 = *(i8*)(intptr_t)v4003;
	i8 v4005 = (i8)+0;
	if (v4004==v4005) goto c02_0395; else goto c02_0397;

c02_0397:;

	i8 v4006 = (i8)(intptr_t)(ws+3112);
	i8 v4007 = *(i8*)(intptr_t)v4006;
	i8 v4008 = v4007+(+46);
	i1 v4009 = *(i1*)(intptr_t)v4008;
	i1 v4010 = (i1)+30;
	if (v4009==v4010) goto c02_0396; else goto c02_0395;

c02_0396:;

	i8 v4011 = (i8)(intptr_t)(ws+3112);
	i8 v4012 = *(i8*)(intptr_t)v4011;
	i8 v4013 = v4012+(+40);
	i1 v4014 = *(i1*)(intptr_t)v4013;
	i8 v4015 = (i8)(intptr_t)(ws+3120);
	i1 v4016 = *(i1*)(intptr_t)v4015;
	if (v4014==v4016) goto c02_0394; else goto c02_0395;

c02_0394:;

	i1 v4017 = (i1)+1;
	i8 v4018 = (i8)(intptr_t)(ws+3121);
	*(i1*)(intptr_t)v4018 = v4017;

	goto c02_038d;

c02_0395:;

c02_038d:;

endsub:;
	*p3998 = *(i1*)(intptr_t)(ws+3121);
}

// IsArray workspace at ws+3056 length ws+9
void f196_IsArray(i1* p4019 /* result */, i8 p4020 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4020; /*type */

	i8 v4021 = (i8)(intptr_t)(ws+3056);
	i8 v4022 = *(i8*)(intptr_t)v4021;
	i1 v4023 = (i1)+4;
	i1 v4024;
	f195_IsTypeOfKind(&v4024, v4023, v4022);
	i8 v4025 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4025 = v4024;

endsub:;
	*p4019 = *(i1*)(intptr_t)(ws+3064);
}

// IsPtr workspace at ws+3096 length ws+9
void f197_IsPtr(i1* p4026 /* result */, i8 p4027 /* type */) {
	*(i8*)(intptr_t)(ws+3096) = p4027; /*type */

	i8 v4028 = (i8)(intptr_t)(ws+3096);
	i8 v4029 = *(i8*)(intptr_t)v4028;
	i1 v4030 = (i1)+3;
	i1 v4031;
	f195_IsTypeOfKind(&v4031, v4030, v4029);
	i8 v4032 = (i8)(intptr_t)(ws+3104);
	*(i1*)(intptr_t)v4032 = v4031;

endsub:;
	*p4026 = *(i1*)(intptr_t)(ws+3104);
}

// IsNum workspace at ws+3096 length ws+9
void f198_IsNum(i1* p4033 /* result */, i8 p4034 /* type */) {
	*(i8*)(intptr_t)(ws+3096) = p4034; /*type */

	i8 v4035 = (i8)(intptr_t)(ws+3096);
	i8 v4036 = *(i8*)(intptr_t)v4035;
	i8 v4037 = (i8)+0;
	if (v4036==v4037) goto c02_039b; else goto c02_039c;

c02_039b:;

	i1 v4038 = (i1)+1;
	i8 v4039 = (i8)(intptr_t)(ws+3104);
	*(i1*)(intptr_t)v4039 = v4038;

	goto c02_0398;

c02_039c:;

	i8 v4040 = (i8)(intptr_t)(ws+3096);
	i8 v4041 = *(i8*)(intptr_t)v4040;
	i1 v4042 = (i1)+2;
	i1 v4043;
	f195_IsTypeOfKind(&v4043, v4042, v4041);
	i8 v4044 = (i8)(intptr_t)(ws+3104);
	*(i1*)(intptr_t)v4044 = v4043;

c02_0398:;

endsub:;
	*p4033 = *(i1*)(intptr_t)(ws+3104);
}

// IsSNum workspace at ws+3048 length ws+9
void f199_IsSNum(i1* p4045 /* result */, i8 p4046 /* type */) {
	*(i8*)(intptr_t)(ws+3048) = p4046; /*type */

	i8 v4047 = (i8)(intptr_t)(ws+3048);
	i8 v4048 = *(i8*)(intptr_t)v4047;
	i8 v4049 = (i8)+0;
	if (v4048==v4049) goto c02_03a0; else goto c02_03a1;

c02_03a0:;

	i1 v4050 = (i1)+1;
	i8 v4051 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v4051 = v4050;

	goto c02_039d;

c02_03a1:;

	i8 v4052 = (i8)(intptr_t)(ws+3048);
	i8 v4053 = *(i8*)(intptr_t)v4052;
	i1 v4054 = (i1)+2;
	i1 v4055;
	f195_IsTypeOfKind(&v4055, v4054, v4053);
	i1 v4056 = (i1)+0;
	if (v4055==v4056) goto c02_03a7; else goto c02_03a8;

c02_03a8:;

	i8 v4057 = (i8)(intptr_t)(ws+3048);
	i8 v4058 = *(i8*)(intptr_t)v4057;
	i1 v4059 = *(i1*)(intptr_t)v4058;
	i1 v4060 = (i1)+0;
	if (v4059==v4060) goto c02_03a7; else goto c02_03a6;

c02_03a6:;

	i1 v4061 = (i1)+1;
	i8 v4062 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v4062 = v4061;

	goto c02_039d;

c02_03a7:;

	i1 v4063 = (i1)+0;
	i8 v4064 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v4064 = v4063;

c02_039d:;

endsub:;
	*p4045 = *(i1*)(intptr_t)(ws+3056);
}

// IsScalar workspace at ws+3080 length ws+9
void f200_IsScalar(i1* p4065 /* result */, i8 p4066 /* type */) {
	*(i8*)(intptr_t)(ws+3080) = p4066; /*type */

	i8 v4067 = (i8)(intptr_t)(ws+3080);
	i8 v4068 = *(i8*)(intptr_t)v4067;
	i1 v4069;
	f197_IsPtr(&v4069, v4068);
	i1 v4070 = (i1)+0;
	if (v4069==v4070) goto c02_03b0; else goto c02_03ae;

c02_03b0:;

	i8 v4071 = (i8)(intptr_t)(ws+3080);
	i8 v4072 = *(i8*)(intptr_t)v4071;
	i1 v4073;
	f198_IsNum(&v4073, v4072);
	i1 v4074 = (i1)+0;
	if (v4073==v4074) goto c02_03af; else goto c02_03ae;

c02_03ae:;

	i1 v4075 = (i1)+1;
	i8 v4076 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v4076 = v4075;

	goto c02_03a9;

c02_03af:;

	i1 v4077 = (i1)+0;
	i8 v4078 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v4078 = v4077;

c02_03a9:;

endsub:;
	*p4065 = *(i1*)(intptr_t)(ws+3088);
}

// IsRecord workspace at ws+3024 length ws+9
void f201_IsRecord(i1* p4079 /* result */, i8 p4080 /* type */) {
	*(i8*)(intptr_t)(ws+3024) = p4080; /*type */

	i8 v4081 = (i8)(intptr_t)(ws+3024);
	i8 v4082 = *(i8*)(intptr_t)v4081;
	i1 v4083 = (i1)+5;
	i1 v4084;
	f195_IsTypeOfKind(&v4084, v4083, v4082);
	i8 v4085 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v4085 = v4084;

endsub:;
	*p4079 = *(i1*)(intptr_t)(ws+3032);
}

// MakeLValue workspace at ws+3048 length ws+32
void f202_MakeLValue(i8* p4086 /* lvalue */, i8 p4087 /* address */) {
	*(i8*)(intptr_t)(ws+3048) = p4087; /*address */

	i1 v4088 = (i1)+0;
	i8 v4089 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4089 = v4088;

	i8 v4090 = (i8)(intptr_t)(ws+3048);
	i8 v4091 = *(i8*)(intptr_t)v4090;
	i8 v4092 = v4091+(+16);
	i8 v4093 = *(i8*)(intptr_t)v4092;
	i8 v4094 = *(i8*)(intptr_t)v4093;
	i8 v4095 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v4095 = v4094;

	i8 v4096 = (i8)(intptr_t)(ws+3072);
	i8 v4097 = *(i8*)(intptr_t)v4096;
	i1 v4098;
	f200_IsScalar(&v4098, v4097);
	i1 v4099 = (i1)+0;
	if (v4098==v4099) goto c02_03b5; else goto c02_03b4;

c02_03b4:;

	i8 v4100 = (i8)(intptr_t)(ws+3072);
	i8 v4101 = *(i8*)(intptr_t)v4100;
	i8 v4102 = v4101+(+42);
	i2 v4103 = *(i2*)(intptr_t)v4102;
	i1 v4104 = v4103;
	i8 v4105 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4105 = v4104;

	goto c02_03b1;

c02_03b5:;

c02_03b1:;

	i8 v4106 = (i8)(intptr_t)(ws+3064);
	i1 v4107 = *(i1*)(intptr_t)v4106;
	i8 v4108 = (i8)(intptr_t)(ws+3048);
	i8 v4109 = *(i8*)(intptr_t)v4108;
	i8 v4110;
	f118_MidLoad(&v4110, v4109, v4107);
	i8 v4111 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v4111 = v4110;

	i8 v4112 = (i8)(intptr_t)(ws+3072);
	i8 v4113 = *(i8*)(intptr_t)v4112;
	i8 v4114 = (i8)(intptr_t)(ws+3056);
	i8 v4115 = *(i8*)(intptr_t)v4114;
	i8 v4116 = v4115+(+16);
	*(i8*)(intptr_t)v4116 = v4113;

endsub:;
	*p4086 = *(i8*)(intptr_t)(ws+3056);
}
const i1 c02_s0045[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };

// UndoLValue workspace at ws+3048 length ws+17
void f203_UndoLValue(i8* p4117 /* address */, i8 p4118 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3048) = p4118; /*lvalue */

	i8 v4119 = (i8)(intptr_t)(ws+3048);
	i8 v4120 = *(i8*)(intptr_t)v4119;
	i8 v4121 = v4120+(+66);
	i1 v4122 = *(i1*)(intptr_t)v4121;
	i8 v4123 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4123 = v4122;

	i8 v4124 = (i8)(intptr_t)(ws+3064);
	i1 v4125 = *(i1*)(intptr_t)v4124;
	i1 v4126 = (i1)+43;
	if (v4125<v4126) goto c02_03bb; else goto c02_03bd;

c02_03bd:;

	i1 v4127 = (i1)+47;
	i8 v4128 = (i8)(intptr_t)(ws+3064);
	i1 v4129 = *(i1*)(intptr_t)v4128;
	if (v4127<v4129) goto c02_03bb; else goto c02_03bc;

c02_03bb:;

	i8 v4130 = (i8)(intptr_t)c02_s0045;
	f57_SimpleError(v4130);

	goto c02_03b6;

c02_03bc:;

c02_03b6:;

	i8 v4131 = (i8)(intptr_t)(ws+3048);
	i8 v4132 = *(i8*)(intptr_t)v4131;
	i8 v4133 = v4132+(+24);
	i8 v4134 = *(i8*)(intptr_t)v4133;
	i8 v4135 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v4135 = v4134;

	i8 v4136 = (i8)+0;
	i8 v4137 = (i8)(intptr_t)(ws+3048);
	i8 v4138 = *(i8*)(intptr_t)v4137;
	i8 v4139 = v4138+(+24);
	*(i8*)(intptr_t)v4139 = v4136;

	i8 v4140 = (i8)(intptr_t)(ws+3048);
	i8 v4141 = *(i8*)(intptr_t)v4140;
	f140_Discard(v4141);

endsub:;
	*p4117 = *(i8*)(intptr_t)(ws+3056);
}

// AllocLabel workspace at ws+3064 length ws+2
void f204_AllocLabel(i2* p4144 /* label */) {

	i8 v4145 = (i8)(intptr_t)(ws+48);
	i2 v4146 = *(i2*)(intptr_t)v4145;
	i8 v4147 = (i8)(intptr_t)(ws+3064);
	*(i2*)(intptr_t)v4147 = v4146;

	i8 v4148 = (i8)(intptr_t)(ws+48);
	i2 v4149 = *(i2*)(intptr_t)v4148;
	i2 v4150 = v4149+(+1);
	i8 v4151 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4151 = v4150;

endsub:;
	*p4144 = *(i2*)(intptr_t)(ws+3064);
}

// AllocSubrId workspace at ws+3008 length ws+2
void f205_AllocSubrId(i2* p4152 /* id */) {

	i8 v4153 = (i8)(intptr_t)(ws+50);
	i2 v4154 = *(i2*)(intptr_t)v4153;
	i8 v4155 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v4155 = v4154;

	i8 v4156 = (i8)(intptr_t)(ws+50);
	i2 v4157 = *(i2*)(intptr_t)v4156;
	i2 v4158 = v4157+(+1);
	i8 v4159 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4159 = v4158;

endsub:;
	*p4152 = *(i2*)(intptr_t)(ws+3008);
}

// FindConflictingRegisters workspace at ws+3176 length ws+16
void f206_FindConflictingRegisters(i1* p4160 /* conflicting */, i1 p4161 /* inreg */) {
	*(i1*)(intptr_t)(ws+3176) = p4161; /*inreg */

	i1 v4162 = (i1)+0;
	i8 v4163 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4163 = v4162;

	i8 v4164 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4165 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4165 = v4164;

c02_03c0:;

	i8 v4166 = (i8)(intptr_t)(ws+3184);
	i8 v4167 = *(i8*)(intptr_t)v4166;
	i8 v4168 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4167==v4168) goto c02_03c3; else goto c02_03c2;

c02_03c2:;

	i8 v4169 = (i8)(intptr_t)(ws+3184);
	i8 v4170 = *(i8*)(intptr_t)v4169;
	i8 v4171 = v4170+(+8);
	i1 v4172 = *(i1*)(intptr_t)v4171;
	i8 v4173 = (i8)(intptr_t)(ws+3176);
	i1 v4174 = *(i1*)(intptr_t)v4173;
	i1 v4175 = v4172&v4174;
	i1 v4176 = (i1)+0;
	if (v4175==v4176) goto c02_03c8; else goto c02_03c7;

c02_03c7:;

	i8 v4177 = (i8)(intptr_t)(ws+3177);
	i1 v4178 = *(i1*)(intptr_t)v4177;
	i8 v4179 = (i8)(intptr_t)(ws+3184);
	i8 v4180 = *(i8*)(intptr_t)v4179;
	i8 v4181 = v4180+(+9);
	i1 v4182 = *(i1*)(intptr_t)v4181;
	i1 v4183 = v4178|v4182;
	i8 v4184 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4184 = v4183;

	goto c02_03c4;

c02_03c8:;

c02_03c4:;

	i8 v4185 = (i8)(intptr_t)(ws+3184);
	i8 v4186 = *(i8*)(intptr_t)v4185;
	i8 v4187 = v4186+(+16);
	i8 v4188 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4188 = v4187;

	goto c02_03c0;

c02_03c3:;

endsub:;
	*p4160 = *(i1*)(intptr_t)(ws+3177);
}

// FindCompatibleRegisters workspace at ws+3176 length ws+16
void f207_FindCompatibleRegisters(i1* p4189 /* compatible */, i1 p4190 /* inreg */) {
	*(i1*)(intptr_t)(ws+3176) = p4190; /*inreg */

	i1 v4191 = (i1)-1;
	i8 v4192 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4192 = v4191;

	i8 v4193 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4194 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4194 = v4193;

c02_03cb:;

	i8 v4195 = (i8)(intptr_t)(ws+3184);
	i8 v4196 = *(i8*)(intptr_t)v4195;
	i8 v4197 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4196==v4197) goto c02_03ce; else goto c02_03cd;

c02_03cd:;

	i8 v4198 = (i8)(intptr_t)(ws+3184);
	i8 v4199 = *(i8*)(intptr_t)v4198;
	i8 v4200 = v4199+(+8);
	i1 v4201 = *(i1*)(intptr_t)v4200;
	i8 v4202 = (i8)(intptr_t)(ws+3176);
	i1 v4203 = *(i1*)(intptr_t)v4202;
	i1 v4204 = v4201&v4203;
	i1 v4205 = (i1)+0;
	if (v4204==v4205) goto c02_03d3; else goto c02_03d2;

c02_03d2:;

	i8 v4206 = (i8)(intptr_t)(ws+3177);
	i1 v4207 = *(i1*)(intptr_t)v4206;
	i8 v4208 = (i8)(intptr_t)(ws+3184);
	i8 v4209 = *(i8*)(intptr_t)v4208;
	i8 v4210 = v4209+(+10);
	i1 v4211 = *(i1*)(intptr_t)v4210;
	i1 v4212 = v4207&v4211;
	i8 v4213 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4213 = v4212;

	goto c02_03cf;

c02_03d3:;

c02_03cf:;

	i8 v4214 = (i8)(intptr_t)(ws+3184);
	i8 v4215 = *(i8*)(intptr_t)v4214;
	i8 v4216 = v4215+(+16);
	i8 v4217 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v4217 = v4216;

	goto c02_03cb;

c02_03ce:;

endsub:;
	*p4189 = *(i1*)(intptr_t)(ws+3177);
}

// FindFirst workspace at ws+3176 length ws+2
void f208_FindFirst(i1* p4218 /* outreg */, i1 p4219 /* inreg */) {
	*(i1*)(intptr_t)(ws+3176) = p4219; /*inreg */

	i1 v4220 = (i1)+1;
	i8 v4221 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4221 = v4220;

c02_03d6:;

	i8 v4222 = (i8)(intptr_t)(ws+3177);
	i1 v4223 = *(i1*)(intptr_t)v4222;
	i1 v4224 = (i1)+0;
	if (v4223==v4224) goto c02_03d9; else goto c02_03d8;

c02_03d8:;

	i8 v4225 = (i8)(intptr_t)(ws+3176);
	i1 v4226 = *(i1*)(intptr_t)v4225;
	i8 v4227 = (i8)(intptr_t)(ws+3177);
	i1 v4228 = *(i1*)(intptr_t)v4227;
	i1 v4229 = v4226&v4228;
	i1 v4230 = (i1)+0;
	if (v4229==v4230) goto c02_03de; else goto c02_03dd;

c02_03dd:;

	goto endsub;

c02_03de:;

c02_03da:;

	i8 v4231 = (i8)(intptr_t)(ws+3177);
	i1 v4232 = *(i1*)(intptr_t)v4231;
	i1 v4233 = (i1)+1;
	i1 v4234 = ((i1)v4232)<<v4233;
	i8 v4235 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4235 = v4234;

	goto c02_03d6;

c02_03d9:;

	i1 v4236 = (i1)+0;
	i8 v4237 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v4237 = v4236;

endsub:;
	*p4218 = *(i1*)(intptr_t)(ws+3177);
}

// ArchAlignUp workspace at ws+3048 length ws+8
void f209_ArchAlignUp(i2* p4242 /* newvalue */, i1 p4243 /* alignment */, i2 p4244 /* value */) {
	*(i2*)(intptr_t)(ws+3048) = p4244; /*value */
	*(i1*)(intptr_t)(ws+3050) = p4243; /*alignment */

	i8 v4245 = (i8)(intptr_t)(ws+3050);
	i1 v4246 = *(i1*)(intptr_t)v4245;
	i1 v4247 = v4246+(-1);
	i2 v4248 = v4247;
	i8 v4249 = (i8)(intptr_t)(ws+3054);
	*(i2*)(intptr_t)v4249 = v4248;

	i8 v4250 = (i8)(intptr_t)(ws+3048);
	i2 v4251 = *(i2*)(intptr_t)v4250;
	i8 v4252 = (i8)(intptr_t)(ws+3054);
	i2 v4253 = *(i2*)(intptr_t)v4252;
	i2 v4254 = v4251+v4253;
	i8 v4255 = (i8)(intptr_t)(ws+3054);
	i2 v4256 = *(i2*)(intptr_t)v4255;
	i2 v4257 = ~v4256;
	i2 v4258 = v4254&v4257;
	i8 v4259 = (i8)(intptr_t)(ws+3052);
	*(i2*)(intptr_t)v4259 = v4258;

endsub:;
	*p4242 = *(i2*)(intptr_t)(ws+3052);
}
const i1 c02_s0046[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
const i1 c02_s0047[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
const i1 c02_s0048[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
const i1 c02_s0049[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
const i1 c02_s004a[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
const i1 c02_s004b[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
const i1 c02_s004c[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
const i1 c02_s004d[] = { 0x69,0x6e,0x74,0x38,0 };
const i1 c02_s004e[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };

// ArchInitTypes workspace at ws+2880 length ws+0
void f210_ArchInitTypes(void) {

	i1 v4260 = (i1)+8;
	i1 v4261 = (i1)+8;
	i1 v4262 = (i1)+0;
	i8 v4263 = (i8)(intptr_t)c02_s0046;
	i8 v4264;
	f194_MakeNumberType(&v4264, v4263, v4262, v4261, v4260);
	i8 v4265 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v4265 = v4264;

	i1 v4266 = (i1)+8;
	i1 v4267 = (i1)+8;
	i1 v4268 = (i1)+1;
	i8 v4269 = (i8)(intptr_t)c02_s0047;
	i8 v4270;
	f194_MakeNumberType(&v4270, v4269, v4268, v4267, v4266);
	i8 v4271 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v4271 = v4270;

	i1 v4272 = (i1)+4;
	i1 v4273 = (i1)+4;
	i1 v4274 = (i1)+0;
	i8 v4275 = (i8)(intptr_t)c02_s0048;
	i8 v4276;
	f194_MakeNumberType(&v4276, v4275, v4274, v4273, v4272);
	i8 v4277 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v4277 = v4276;

	i1 v4278 = (i1)+4;
	i1 v4279 = (i1)+4;
	i1 v4280 = (i1)+1;
	i8 v4281 = (i8)(intptr_t)c02_s0049;
	i8 v4282;
	f194_MakeNumberType(&v4282, v4281, v4280, v4279, v4278);
	i8 v4283 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v4283 = v4282;

	i1 v4284 = (i1)+2;
	i1 v4285 = (i1)+2;
	i1 v4286 = (i1)+0;
	i8 v4287 = (i8)(intptr_t)c02_s004a;
	i8 v4288;
	f194_MakeNumberType(&v4288, v4287, v4286, v4285, v4284);
	i8 v4289 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v4289 = v4288;

	i1 v4290 = (i1)+2;
	i1 v4291 = (i1)+2;
	i1 v4292 = (i1)+1;
	i8 v4293 = (i8)(intptr_t)c02_s004b;
	i8 v4294;
	f194_MakeNumberType(&v4294, v4293, v4292, v4291, v4290);
	i8 v4295 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v4295 = v4294;

	i1 v4296 = (i1)+1;
	i1 v4297 = (i1)+1;
	i1 v4298 = (i1)+0;
	i8 v4299 = (i8)(intptr_t)c02_s004c;
	i8 v4300;
	f194_MakeNumberType(&v4300, v4299, v4298, v4297, v4296);
	i8 v4301 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v4301 = v4300;

	i1 v4302 = (i1)+1;
	i1 v4303 = (i1)+1;
	i1 v4304 = (i1)+1;
	i8 v4305 = (i8)(intptr_t)c02_s004d;
	i8 v4306;
	f194_MakeNumberType(&v4306, v4305, v4304, v4303, v4302);
	i8 v4307 = (i8)(intptr_t)(ws+1048);
	*(i8*)(intptr_t)v4307 = v4306;

	i8 v4308 = (i8)(intptr_t)(ws+992);
	i8 v4309 = *(i8*)(intptr_t)v4308;
	i8 v4310 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v4310 = v4309;

	i8 v4311 = (i8)(intptr_t)c02_s004e;
	i8 v4312 = (i8)(intptr_t)(ws+1056);
	i8 v4313 = *(i8*)(intptr_t)v4312;
	f192_AddAliasString(v4313, v4311);

endsub:;
}

// ArchGuessIntType workspace at ws+3032 length ws+16
void f211_ArchGuessIntType(i8* p4314 /* symbol */, i4 p4315 /* max */, i4 p4316 /* min */) {
	*(i4*)(intptr_t)(ws+3032) = p4316; /*min */
	*(i4*)(intptr_t)(ws+3036) = p4315; /*max */

	i8 v4317 = (i8)(intptr_t)(ws+3032);
	i4 v4318 = *(i4*)(intptr_t)v4317;
	i4 v4319 = (i4)+0;
	if ((s4)v4318<(s4)v4319) goto c02_03e5; else goto c02_03e6;

c02_03e6:;

	i4 v4320 = (i4)+255;
	i8 v4321 = (i8)(intptr_t)(ws+3036);
	i4 v4322 = *(i4*)(intptr_t)v4321;
	if ((s4)v4320<(s4)v4322) goto c02_03e5; else goto c02_03e4;

c02_03e4:;

	i8 v4323 = (i8)(intptr_t)(ws+1040);
	i8 v4324 = *(i8*)(intptr_t)v4323;
	i8 v4325 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4325 = v4324;

	goto c02_03df;

c02_03e5:;

	i8 v4326 = (i8)(intptr_t)(ws+3032);
	i4 v4327 = *(i4*)(intptr_t)v4326;
	i4 v4328 = (i4)-128;
	if ((s4)v4327<(s4)v4328) goto c02_03ec; else goto c02_03ed;

c02_03ed:;

	i4 v4329 = (i4)+127;
	i8 v4330 = (i8)(intptr_t)(ws+3036);
	i4 v4331 = *(i4*)(intptr_t)v4330;
	if ((s4)v4329<(s4)v4331) goto c02_03ec; else goto c02_03eb;

c02_03eb:;

	i8 v4332 = (i8)(intptr_t)(ws+1048);
	i8 v4333 = *(i8*)(intptr_t)v4332;
	i8 v4334 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4334 = v4333;

	goto c02_03df;

c02_03ec:;

	i8 v4335 = (i8)(intptr_t)(ws+3032);
	i4 v4336 = *(i4*)(intptr_t)v4335;
	i4 v4337 = (i4)+0;
	if ((s4)v4336<(s4)v4337) goto c02_03f3; else goto c02_03f4;

c02_03f4:;

	i4 v4338 = (i4)+65535;
	i8 v4339 = (i8)(intptr_t)(ws+3036);
	i4 v4340 = *(i4*)(intptr_t)v4339;
	if ((s4)v4338<(s4)v4340) goto c02_03f3; else goto c02_03f2;

c02_03f2:;

	i8 v4341 = (i8)(intptr_t)(ws+1024);
	i8 v4342 = *(i8*)(intptr_t)v4341;
	i8 v4343 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4343 = v4342;

	goto c02_03df;

c02_03f3:;

	i8 v4344 = (i8)(intptr_t)(ws+3032);
	i4 v4345 = *(i4*)(intptr_t)v4344;
	i4 v4346 = (i4)-32768;
	if ((s4)v4345<(s4)v4346) goto c02_03fa; else goto c02_03fb;

c02_03fb:;

	i4 v4347 = (i4)+32767;
	i8 v4348 = (i8)(intptr_t)(ws+3036);
	i4 v4349 = *(i4*)(intptr_t)v4348;
	if ((s4)v4347<(s4)v4349) goto c02_03fa; else goto c02_03f9;

c02_03f9:;

	i8 v4350 = (i8)(intptr_t)(ws+1032);
	i8 v4351 = *(i8*)(intptr_t)v4350;
	i8 v4352 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4352 = v4351;

	goto c02_03df;

c02_03fa:;

	i8 v4353 = (i8)(intptr_t)(ws+3032);
	i4 v4354 = *(i4*)(intptr_t)v4353;
	i4 v4355 = (i4)+0;
	if ((s4)v4354<(s4)v4355) goto c02_03ff; else goto c02_03fe;

c02_03fe:;

	i8 v4356 = (i8)(intptr_t)(ws+1008);
	i8 v4357 = *(i8*)(intptr_t)v4356;
	i8 v4358 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4358 = v4357;

	goto c02_03df;

c02_03ff:;

	i8 v4359 = (i8)(intptr_t)(ws+1016);
	i8 v4360 = *(i8*)(intptr_t)v4359;
	i8 v4361 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4361 = v4360;

c02_03df:;

endsub:;
	*p4314 = *(i8*)(intptr_t)(ws+3040);
}

// ArchInitVariable workspace at ws+3024 length ws+18
void f212_ArchInitVariable(i8 p4362 /* symbol */) {
	*(i8*)(intptr_t)(ws+3024) = p4362; /*symbol */

	i8 v4363 = (i8)(intptr_t)(ws+3024);
	i8 v4364 = *(i8*)(intptr_t)v4363;
	i8 v4365 = v4364+(+8);
	i8 v4366 = *(i8*)(intptr_t)v4365;
	i8 v4367 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v4367 = v4366;

	i8 v4368 = (i8)(intptr_t)(ws+3032);
	i8 v4369 = *(i8*)(intptr_t)v4368;
	i8 v4370 = v4369+(+58);
	i2 v4371 = *(i2*)(intptr_t)v4370;
	i8 v4372 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v4372 = v4371;

	i8 v4373 = (i8)(intptr_t)(ws+3040);
	i2 v4374 = *(i2*)(intptr_t)v4373;
	i8 v4375 = (i8)(intptr_t)(ws+3024);
	i8 v4376 = *(i8*)(intptr_t)v4375;
	i8 v4377 = *(i8*)(intptr_t)v4376;
	i8 v4378 = v4377+(+41);
	i1 v4379 = *(i1*)(intptr_t)v4378;
	i2 v4380;
	f209_ArchAlignUp(&v4380, v4379, v4374);
	i8 v4381 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v4381 = v4380;

	i8 v4382 = (i8)(intptr_t)(ws+3040);
	i2 v4383 = *(i2*)(intptr_t)v4382;
	i8 v4384 = (i8)(intptr_t)(ws+3024);
	i8 v4385 = *(i8*)(intptr_t)v4384;
	i8 v4386 = v4385+(+32);
	*(i2*)(intptr_t)v4386 = v4383;

	i8 v4387 = (i8)(intptr_t)(ws+3040);
	i2 v4388 = *(i2*)(intptr_t)v4387;
	i8 v4389 = (i8)(intptr_t)(ws+3024);
	i8 v4390 = *(i8*)(intptr_t)v4389;
	i8 v4391 = *(i8*)(intptr_t)v4390;
	i8 v4392 = v4391+(+42);
	i2 v4393 = *(i2*)(intptr_t)v4392;
	i2 v4394 = v4388+v4393;
	i8 v4395 = (i8)(intptr_t)(ws+3032);
	i8 v4396 = *(i8*)(intptr_t)v4395;
	i8 v4397 = v4396+(+58);
	*(i2*)(intptr_t)v4397 = v4394;

endsub:;
}

// ArchInitMember workspace at ws+3000 length ws+18
void f213_ArchInitMember(i2 p4398 /* position */, i8 p4399 /* member */, i8 p4400 /* containing */) {
	*(i8*)(intptr_t)(ws+3000) = p4400; /*containing */
	*(i8*)(intptr_t)(ws+3008) = p4399; /*member */
	*(i2*)(intptr_t)(ws+3016) = p4398; /*position */

	i8 v4401 = (i8)(intptr_t)(ws+3016);
	i2 v4402 = *(i2*)(intptr_t)v4401;
	i8 v4403 = (i8)(intptr_t)(ws+3008);
	i8 v4404 = *(i8*)(intptr_t)v4403;
	i8 v4405 = *(i8*)(intptr_t)v4404;
	i8 v4406 = v4405+(+41);
	i1 v4407 = *(i1*)(intptr_t)v4406;
	i2 v4408;
	f209_ArchAlignUp(&v4408, v4407, v4402);
	i8 v4409 = (i8)(intptr_t)(ws+3016);
	*(i2*)(intptr_t)v4409 = v4408;

	i8 v4410 = (i8)(intptr_t)(ws+3016);
	i2 v4411 = *(i2*)(intptr_t)v4410;
	i8 v4412 = (i8)(intptr_t)(ws+3008);
	i8 v4413 = *(i8*)(intptr_t)v4412;
	i8 v4414 = v4413+(+32);
	*(i2*)(intptr_t)v4414 = v4411;

	i8 v4415 = (i8)(intptr_t)(ws+3016);
	i2 v4416 = *(i2*)(intptr_t)v4415;
	i8 v4417 = (i8)(intptr_t)(ws+3008);
	i8 v4418 = *(i8*)(intptr_t)v4417;
	i8 v4419 = *(i8*)(intptr_t)v4418;
	i8 v4420 = v4419+(+42);
	i2 v4421 = *(i2*)(intptr_t)v4420;
	i2 v4422 = v4416+v4421;
	i8 v4423 = (i8)(intptr_t)(ws+3016);
	*(i2*)(intptr_t)v4423 = v4422;

	i8 v4424 = (i8)(intptr_t)(ws+3000);
	i8 v4425 = *(i8*)(intptr_t)v4424;
	i8 v4426 = v4425+(+42);
	i2 v4427 = *(i2*)(intptr_t)v4426;
	i8 v4428 = (i8)(intptr_t)(ws+3016);
	i2 v4429 = *(i2*)(intptr_t)v4428;
	if (v4427<v4429) goto c02_0403; else goto c02_0404;

c02_0403:;

	i8 v4430 = (i8)(intptr_t)(ws+3016);
	i2 v4431 = *(i2*)(intptr_t)v4430;
	i8 v4432 = (i8)(intptr_t)(ws+3000);
	i8 v4433 = *(i8*)(intptr_t)v4432;
	i8 v4434 = v4433+(+42);
	*(i2*)(intptr_t)v4434 = v4431;

	goto c02_0400;

c02_0404:;

c02_0400:;

endsub:;
}
const i1 c02_s004f[] = { 0x28,0x28,0x69,0x31,0x2a,0x29,0 };
const i1 c02_s0050[] = { 0x29,0 };

// E_symref workspace at ws+3272 length ws+10
void f214_E_symref(i2 p4435 /* off */, i8 p4436 /* sym */) {
	*(i8*)(intptr_t)(ws+3272) = p4436; /*sym */
	*(i2*)(intptr_t)(ws+3280) = p4435; /*off */

	i8 v4437 = (i8)(intptr_t)(ws+3272);
	i8 v4438 = *(i8*)(intptr_t)v4437;
	i8 v4439 = v4438+(+24);
	i8 v4440 = *(i8*)(intptr_t)v4439;
	i8 v4441 = (i8)+0;
	if (v4440==v4441) goto c02_0409; else goto c02_0408;

c02_0408:;

	i8 v4442 = (i8)(intptr_t)c02_s004f;
	f156_E(v4442);

	i8 v4443 = (i8)(intptr_t)(ws+3272);
	i8 v4444 = *(i8*)(intptr_t)v4443;
	i8 v4445 = v4444+(+24);
	i8 v4446 = *(i8*)(intptr_t)v4445;
	f156_E(v4446);

	i8 v4447 = (i8)(intptr_t)(ws+3280);
	i2 v4448 = *(i2*)(intptr_t)v4447;
	f161_E_i16(v4448);

	i8 v4449 = (i8)(intptr_t)c02_s0050;
	f156_E(v4449);

	goto c02_0405;

c02_0409:;

	i1 v4450 = (i1)+2;
	f149_EmitByte(v4450);

	i8 v4451 = (i8)(intptr_t)(ws+3272);
	i8 v4452 = *(i8*)(intptr_t)v4451;
	i8 v4453 = v4452+(+8);
	i8 v4454 = *(i8*)(intptr_t)v4453;
	i8 v4455 = v4454+(+56);
	i2 v4456 = *(i2*)(intptr_t)v4455;
	f165_E_h16(v4456);

	i1 v4457 = (i1)+0;
	f164_E_h8(v4457);

	i8 v4458 = (i8)(intptr_t)(ws+3272);
	i8 v4459 = *(i8*)(intptr_t)v4458;
	i8 v4460 = v4459+(+32);
	i2 v4461 = *(i2*)(intptr_t)v4460;
	i8 v4462 = (i8)(intptr_t)(ws+3280);
	i2 v4463 = *(i2*)(intptr_t)v4462;
	i2 v4464 = v4461+v4463;
	f165_E_h16(v4464);

c02_0405:;

endsub:;
}

// ArchEndInstruction workspace at ws+3160 length ws+0
void f215_ArchEndInstruction(void) {

endsub:;
}

// ArchEndGroup workspace at ws+3152 length ws+0
void f216_ArchEndGroup(void) {

	f153_E_nl();

endsub:;
}
const i1 c02_s0051[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// PushVid workspace at ws+3288 length ws+2
void f217_PushVid(i2 p4465 /* vid */) {
	*(i2*)(intptr_t)(ws+3288) = p4465; /*vid */

	i8 v4466 = (i8)(intptr_t)(ws+1192);
	i1 v4467 = *(i1*)(intptr_t)v4466;
	i1 v4468 = (i1)+64;
	if (v4467==v4468) goto c02_040d; else goto c02_040e;

c02_040d:;

	i8 v4469 = (i8)(intptr_t)c02_s0051;
	f57_SimpleError(v4469);

	goto c02_040a;

c02_040e:;

c02_040a:;

	i8 v4470 = (i8)(intptr_t)(ws+3288);
	i2 v4471 = *(i2*)(intptr_t)v4470;
	i8 v4472 = (i8)(intptr_t)(ws+1064);
	i8 v4473 = (i8)(intptr_t)(ws+1192);
	i1 v4474 = *(i1*)(intptr_t)v4473;
	i8 v4475 = v4474;
	i1 v4476 = (i1)+1;
	i8 v4477 = ((i8)v4475)<<v4476;
	i8 v4478 = v4472+v4477;
	*(i2*)(intptr_t)v4478 = v4471;

	i8 v4479 = (i8)(intptr_t)(ws+1192);
	i1 v4480 = *(i1*)(intptr_t)v4479;
	i1 v4481 = v4480+(+1);
	i8 v4482 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v4482 = v4481;

endsub:;
}

// Push workspace at ws+3280 length ws+2
void f218_Push(i2* p4483 /* vid */) {

	i8 v4484 = (i8)(intptr_t)(ws+1194);
	i2 v4485 = *(i2*)(intptr_t)v4484;
	i8 v4486 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4486 = v4485;

	i8 v4487 = (i8)(intptr_t)(ws+1194);
	i2 v4488 = *(i2*)(intptr_t)v4487;
	i2 v4489 = v4488+(+1);
	i8 v4490 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4490 = v4489;

	i8 v4491 = (i8)(intptr_t)(ws+3280);
	i2 v4492 = *(i2*)(intptr_t)v4491;
	f217_PushVid(v4492);

endsub:;
	*p4483 = *(i2*)(intptr_t)(ws+3280);
}
const i1 c02_s0052[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// CheckVarstackUnderflow workspace at ws+3288 length ws+0
void f219_CheckVarstackUnderflow(void) {

	i8 v4493 = (i8)(intptr_t)(ws+1192);
	i1 v4494 = *(i1*)(intptr_t)v4493;
	i1 v4495 = (i1)+0;
	if (v4494==v4495) goto c02_0412; else goto c02_0413;

c02_0412:;

	i8 v4496 = (i8)(intptr_t)c02_s0052;
	f57_SimpleError(v4496);

	goto c02_040f;

c02_0413:;

c02_040f:;

endsub:;
}

// Pop workspace at ws+3280 length ws+2
void f220_Pop(i2* p4497 /* vid */) {

	f219_CheckVarstackUnderflow();

	i8 v4498 = (i8)(intptr_t)(ws+1192);
	i1 v4499 = *(i1*)(intptr_t)v4498;
	i1 v4500 = v4499+(-1);
	i8 v4501 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v4501 = v4500;

	i8 v4502 = (i8)(intptr_t)(ws+1064);
	i8 v4503 = (i8)(intptr_t)(ws+1192);
	i1 v4504 = *(i1*)(intptr_t)v4503;
	i8 v4505 = v4504;
	i1 v4506 = (i1)+1;
	i8 v4507 = ((i8)v4505)<<v4506;
	i8 v4508 = v4502+v4507;
	i2 v4509 = *(i2*)(intptr_t)v4508;
	i8 v4510 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4510 = v4509;

endsub:;
	*p4497 = *(i2*)(intptr_t)(ws+3280);
}

// ArchEmitMove workspace at ws+3192 length ws+2
void f222_ArchEmitMove(i1 p4522 /* dest */, i1 p4523 /* src */) {
	*(i1*)(intptr_t)(ws+3192) = p4523; /*src */
	*(i1*)(intptr_t)(ws+3193) = p4522; /*dest */

endsub:;
}
const i1 c02_s0053[] = { 0x09,0x69,0 };
const i1 c02_s0054[] = { 0x20,0x76,0 };
const i1 c02_s0055[] = { 0x3b,0x0a,0 };
const i1 c02_s0056[] = { 0x09,0 };
const i1 c02_s0057[] = { 0x28,0 };
const i1 c02_s0058[] = { 0x2c,0x20,0 };

// comma workspace at ws+3280 length ws+0
void f224_comma(void) {

	i8 v4576 = (i8)(intptr_t)(ws+3272);
	i1 v4577 = *(i1*)(intptr_t)v4576;
	i1 v4578 = (i1)+0;
	if (v4577==v4578) goto c02_041d; else goto c02_041e;

c02_041d:;

	i8 v4579 = (i8)(intptr_t)c02_s0058;
	f156_E(v4579);

	goto c02_041a;

c02_041e:;

c02_041a:;

	i1 v4580 = (i1)+0;
	i8 v4581 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v4581 = v4580;

endsub:;
}
const i1 c02_s0059[] = { 0x26,0x76,0 };
const i1 c02_s005a[] = { 0x76,0 };
const i1 c02_s005b[] = { 0x29,0x3b,0x0a,0 };

// Call workspace at ws+3248 length ws+28
void f223_Call(i8 p4524 /* subr */) {
	*(i8*)(intptr_t)(ws+3248) = p4524; /*subr */

	i8 v4525 = (i8)(intptr_t)(ws+1194);
	i2 v4526 = *(i2*)(intptr_t)v4525;
	i8 v4527 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v4527 = v4526;

	i8 v4528 = (i8)(intptr_t)(ws+1194);
	i2 v4529 = *(i2*)(intptr_t)v4528;
	i8 v4530 = (i8)(intptr_t)(ws+3248);
	i8 v4531 = *(i8*)(intptr_t)v4530;
	i8 v4532 = v4531+(+67);
	i1 v4533 = *(i1*)(intptr_t)v4532;
	i2 v4534 = v4533;
	i2 v4535 = v4529+v4534;
	i8 v4536 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4536 = v4535;

	i1 v4537 = (i1)+0;
	i8 v4538 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4538 = v4537;

c02_0416:;

	i8 v4539 = (i8)(intptr_t)(ws+3258);
	i1 v4540 = *(i1*)(intptr_t)v4539;
	i8 v4541 = (i8)(intptr_t)(ws+3248);
	i8 v4542 = *(i8*)(intptr_t)v4541;
	i8 v4543 = v4542+(+67);
	i1 v4544 = *(i1*)(intptr_t)v4543;
	if (v4540==v4544) goto c02_0419; else goto c02_0418;

c02_0418:;

	i8 v4545 = (i8)(intptr_t)(ws+3248);
	i8 v4546 = *(i8*)(intptr_t)v4545;
	i8 v4547 = (i8)(intptr_t)(ws+3258);
	i1 v4548 = *(i1*)(intptr_t)v4547;
	i8 v4549;
	f81_GetOutputParameter(&v4549, v4548, v4546);
	i8 v4550 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v4550 = v4549;

	i8 v4551 = (i8)(intptr_t)c02_s0053;
	f156_E(v4551);

	i8 v4552 = (i8)(intptr_t)(ws+3264);
	i8 v4553 = *(i8*)(intptr_t)v4552;
	i8 v4554 = *(i8*)(intptr_t)v4553;
	i8 v4555 = v4554+(+42);
	i2 v4556 = *(i2*)(intptr_t)v4555;
	i1 v4557 = v4556;
	f159_E_u8(v4557);

	i8 v4558 = (i8)(intptr_t)c02_s0054;
	f156_E(v4558);

	i8 v4559 = (i8)(intptr_t)(ws+3256);
	i2 v4560 = *(i2*)(intptr_t)v4559;
	i8 v4561 = (i8)(intptr_t)(ws+3258);
	i1 v4562 = *(i1*)(intptr_t)v4561;
	i2 v4563 = v4562;
	i2 v4564 = v4560+v4563;
	f158_E_u16(v4564);

	i8 v4565 = (i8)(intptr_t)c02_s0055;
	f156_E(v4565);

	i8 v4566 = (i8)(intptr_t)(ws+3258);
	i1 v4567 = *(i1*)(intptr_t)v4566;
	i1 v4568 = v4567+(+1);
	i8 v4569 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4569 = v4568;

	goto c02_0416;

c02_0419:;

	i8 v4570 = (i8)(intptr_t)c02_s0056;
	f156_E(v4570);

	i8 v4571 = (i8)(intptr_t)(ws+3248);
	i8 v4572 = *(i8*)(intptr_t)v4571;
	f168_E_subref(v4572);

	i8 v4573 = (i8)(intptr_t)c02_s0057;
	f156_E(v4573);

	i1 v4574 = (i1)+1;
	i8 v4575 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v4575 = v4574;


	i1 v4582 = (i1)+0;
	i8 v4583 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4583 = v4582;

c02_0421:;

	i8 v4584 = (i8)(intptr_t)(ws+3258);
	i1 v4585 = *(i1*)(intptr_t)v4584;
	i8 v4586 = (i8)(intptr_t)(ws+3248);
	i8 v4587 = *(i8*)(intptr_t)v4586;
	i8 v4588 = v4587+(+67);
	i1 v4589 = *(i1*)(intptr_t)v4588;
	if (v4585==v4589) goto c02_0424; else goto c02_0423;

c02_0423:;

	i8 v4590 = (i8)(intptr_t)(ws+3248);
	i8 v4591 = *(i8*)(intptr_t)v4590;
	i8 v4592 = (i8)(intptr_t)(ws+3258);
	i1 v4593 = *(i1*)(intptr_t)v4592;
	i8 v4594;
	f81_GetOutputParameter(&v4594, v4593, v4591);
	i8 v4595 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v4595 = v4594;

	f224_comma();

	i8 v4596 = (i8)(intptr_t)c02_s0059;
	f156_E(v4596);

	i8 v4597 = (i8)(intptr_t)(ws+3256);
	i2 v4598 = *(i2*)(intptr_t)v4597;
	i8 v4599 = (i8)(intptr_t)(ws+3258);
	i1 v4600 = *(i1*)(intptr_t)v4599;
	i2 v4601 = v4600;
	i2 v4602 = v4598+v4601;
	f158_E_u16(v4602);

	i8 v4603 = (i8)(intptr_t)(ws+3258);
	i1 v4604 = *(i1*)(intptr_t)v4603;
	i1 v4605 = v4604+(+1);
	i8 v4606 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4606 = v4605;

	goto c02_0421;

c02_0424:;

	i1 v4607 = (i1)+0;
	i8 v4608 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4608 = v4607;

c02_0427:;

	i8 v4609 = (i8)(intptr_t)(ws+3258);
	i1 v4610 = *(i1*)(intptr_t)v4609;
	i8 v4611 = (i8)(intptr_t)(ws+3248);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	i8 v4613 = v4612+(+66);
	i1 v4614 = *(i1*)(intptr_t)v4613;
	if (v4610==v4614) goto c02_042a; else goto c02_0429;

c02_0429:;

	i2 v4615;
	f220_Pop(&v4615);
	i8 v4616 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4616 = v4615;

	f224_comma();

	i8 v4617 = (i8)(intptr_t)c02_s005a;
	f156_E(v4617);

	i8 v4618 = (i8)(intptr_t)(ws+3274);
	i2 v4619 = *(i2*)(intptr_t)v4618;
	f158_E_u16(v4619);

	i8 v4620 = (i8)(intptr_t)(ws+3258);
	i1 v4621 = *(i1*)(intptr_t)v4620;
	i1 v4622 = v4621+(+1);
	i8 v4623 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4623 = v4622;

	goto c02_0427;

c02_042a:;

	i8 v4624 = (i8)(intptr_t)c02_s005b;
	f156_E(v4624);

	i1 v4625 = (i1)+0;
	i8 v4626 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4626 = v4625;

c02_042d:;

	i8 v4627 = (i8)(intptr_t)(ws+3258);
	i1 v4628 = *(i1*)(intptr_t)v4627;
	i8 v4629 = (i8)(intptr_t)(ws+3248);
	i8 v4630 = *(i8*)(intptr_t)v4629;
	i8 v4631 = v4630+(+67);
	i1 v4632 = *(i1*)(intptr_t)v4631;
	if (v4628==v4632) goto c02_0430; else goto c02_042f;

c02_042f:;

	i8 v4633 = (i8)(intptr_t)(ws+3256);
	i2 v4634 = *(i2*)(intptr_t)v4633;
	i8 v4635 = (i8)(intptr_t)(ws+3258);
	i1 v4636 = *(i1*)(intptr_t)v4635;
	i2 v4637 = v4636;
	i2 v4638 = v4634+v4637;
	i8 v4639 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4639 = v4638;

	i8 v4640 = (i8)(intptr_t)(ws+3274);
	i2 v4641 = *(i2*)(intptr_t)v4640;
	f217_PushVid(v4641);

	i8 v4642 = (i8)(intptr_t)(ws+3258);
	i1 v4643 = *(i1*)(intptr_t)v4642;
	i1 v4644 = v4643+(+1);
	i8 v4645 = (i8)(intptr_t)(ws+3258);
	*(i1*)(intptr_t)v4645 = v4644;

	goto c02_042d;

c02_0430:;

endsub:;
}
const i1 c02_s005c[] = { 0x09,0x69,0 };
const i1 c02_s005d[] = { 0x20,0x76,0 };
const i1 c02_s005e[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
const i1 c02_s005f[] = { 0x29,0 };
const i1 c02_s0060[] = { 0x3b,0x0a,0 };

// LoadConstant workspace at ws+3248 length ws+10
void f225_LoadConstant(i4 p4646 /* value */, i1 p4647 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4647; /*width */
	*(i4*)(intptr_t)(ws+3252) = p4646; /*value */

	i2 v4648;
	f218_Push(&v4648);
	i8 v4649 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v4649 = v4648;

	i8 v4650 = (i8)(intptr_t)c02_s005c;
	f156_E(v4650);

	i8 v4651 = (i8)(intptr_t)(ws+3248);
	i1 v4652 = *(i1*)(intptr_t)v4651;
	f159_E_u8(v4652);

	i8 v4653 = (i8)(intptr_t)c02_s005d;
	f156_E(v4653);

	i8 v4654 = (i8)(intptr_t)(ws+3256);
	i2 v4655 = *(i2*)(intptr_t)v4654;
	f158_E_u16(v4655);

	i8 v4656 = (i8)(intptr_t)c02_s005e;
	f156_E(v4656);

	i8 v4657 = (i8)(intptr_t)(ws+3248);
	i1 v4658 = *(i1*)(intptr_t)v4657;
	f159_E_u8(v4658);

	i8 v4659 = (i8)(intptr_t)c02_s005f;
	f156_E(v4659);

	i8 v4660 = (i8)(intptr_t)(ws+3252);
	i4 v4661 = *(i4*)(intptr_t)v4660;
	f162_E_i32(v4661);

	i8 v4662 = (i8)(intptr_t)c02_s0060;
	f156_E(v4662);

endsub:;
}
const i1 c02_s0061[] = { 0x09,0x2a,0x28,0x69,0 };
const i1 c02_s0062[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
const i1 c02_s0063[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s0064[] = { 0x3b,0x0a,0 };

// StoreVV workspace at ws+3248 length ws+6
void f226_StoreVV(i1 p4663 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4663; /*width */

	i2 v4664;
	f220_Pop(&v4664);
	i8 v4665 = (i8)(intptr_t)(ws+3250);
	*(i2*)(intptr_t)v4665 = v4664;

	i2 v4666;
	f220_Pop(&v4666);
	i8 v4667 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v4667 = v4666;

	i8 v4668 = (i8)(intptr_t)c02_s0061;
	f156_E(v4668);

	i8 v4669 = (i8)(intptr_t)(ws+3248);
	i1 v4670 = *(i1*)(intptr_t)v4669;
	f159_E_u8(v4670);

	i8 v4671 = (i8)(intptr_t)c02_s0062;
	f156_E(v4671);

	i8 v4672 = (i8)(intptr_t)(ws+3250);
	i2 v4673 = *(i2*)(intptr_t)v4672;
	f158_E_u16(v4673);

	i8 v4674 = (i8)(intptr_t)c02_s0063;
	f156_E(v4674);

	i8 v4675 = (i8)(intptr_t)(ws+3252);
	i2 v4676 = *(i2*)(intptr_t)v4675;
	f158_E_u16(v4676);

	i8 v4677 = (i8)(intptr_t)c02_s0064;
	f156_E(v4677);

endsub:;
}
const i1 c02_s0065[] = { 0x09,0x69,0 };
const i1 c02_s0066[] = { 0x20,0x76,0 };
const i1 c02_s0067[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
const i1 c02_s0068[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
const i1 c02_s0069[] = { 0x3b,0x0a,0 };

// LoadVV workspace at ws+3248 length ws+6
void f227_LoadVV(i1 p4678 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4678; /*width */

	i2 v4679;
	f220_Pop(&v4679);
	i8 v4680 = (i8)(intptr_t)(ws+3250);
	*(i2*)(intptr_t)v4680 = v4679;

	i2 v4681;
	f218_Push(&v4681);
	i8 v4682 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v4682 = v4681;

	i8 v4683 = (i8)(intptr_t)c02_s0065;
	f156_E(v4683);

	i8 v4684 = (i8)(intptr_t)(ws+3248);
	i1 v4685 = *(i1*)(intptr_t)v4684;
	f159_E_u8(v4685);

	i8 v4686 = (i8)(intptr_t)c02_s0066;
	f156_E(v4686);

	i8 v4687 = (i8)(intptr_t)(ws+3252);
	i2 v4688 = *(i2*)(intptr_t)v4687;
	f158_E_u16(v4688);

	i8 v4689 = (i8)(intptr_t)c02_s0067;
	f156_E(v4689);

	i8 v4690 = (i8)(intptr_t)(ws+3248);
	i1 v4691 = *(i1*)(intptr_t)v4690;
	f159_E_u8(v4691);

	i8 v4692 = (i8)(intptr_t)c02_s0068;
	f156_E(v4692);

	i8 v4693 = (i8)(intptr_t)(ws+3250);
	i2 v4694 = *(i2*)(intptr_t)v4693;
	f158_E_u16(v4694);

	i8 v4695 = (i8)(intptr_t)c02_s0069;
	f156_E(v4695);

endsub:;
}
const i1 c02_s006a[] = { 0x09,0x69,0 };
const i1 c02_s006b[] = { 0x20,0x76,0 };
const i1 c02_s006c[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s006d[] = { 0x76,0 };
const i1 c02_s006e[] = { 0x3b,0x0a,0 };

// Op2VV workspace at ws+3248 length ws+22
void f228_Op2VV(i8 p4696 /* op */, i1 p4697 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4697; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4696; /*op */

	i2 v4698;
	f220_Pop(&v4698);
	i8 v4699 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4699 = v4698;

	i2 v4700;
	f220_Pop(&v4700);
	i8 v4701 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4701 = v4700;

	i2 v4702;
	f218_Push(&v4702);
	i8 v4703 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4703 = v4702;

	i8 v4704 = (i8)(intptr_t)c02_s006a;
	f156_E(v4704);

	i8 v4705 = (i8)(intptr_t)(ws+3248);
	i1 v4706 = *(i1*)(intptr_t)v4705;
	f159_E_u8(v4706);

	i8 v4707 = (i8)(intptr_t)c02_s006b;
	f156_E(v4707);

	i8 v4708 = (i8)(intptr_t)(ws+3268);
	i2 v4709 = *(i2*)(intptr_t)v4708;
	f158_E_u16(v4709);

	i8 v4710 = (i8)(intptr_t)c02_s006c;
	f156_E(v4710);

	i8 v4711 = (i8)(intptr_t)(ws+3266);
	i2 v4712 = *(i2*)(intptr_t)v4711;
	f158_E_u16(v4712);

	i8 v4713 = (i8)(intptr_t)(ws+3256);
	i8 v4714 = *(i8*)(intptr_t)v4713;
	f156_E(v4714);

	i8 v4715 = (i8)(intptr_t)c02_s006d;
	f156_E(v4715);

	i8 v4716 = (i8)(intptr_t)(ws+3264);
	i2 v4717 = *(i2*)(intptr_t)v4716;
	f158_E_u16(v4717);

	i8 v4718 = (i8)(intptr_t)c02_s006e;
	f156_E(v4718);

endsub:;
}
const i1 c02_s006f[] = { 0x09,0x69,0 };
const i1 c02_s0070[] = { 0x20,0x76,0 };
const i1 c02_s0071[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s0072[] = { 0x28,0 };
const i1 c02_s0073[] = { 0x29,0x3b,0x0a,0 };

// Op2VC workspace at ws+3248 length ws+24
void f229_Op2VC(i4 p4719 /* rhs */, i8 p4720 /* op */, i1 p4721 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4721; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4720; /*op */
	*(i4*)(intptr_t)(ws+3264) = p4719; /*rhs */

	i2 v4722;
	f220_Pop(&v4722);
	i8 v4723 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4723 = v4722;

	i2 v4724;
	f218_Push(&v4724);
	i8 v4725 = (i8)(intptr_t)(ws+3270);
	*(i2*)(intptr_t)v4725 = v4724;

	i8 v4726 = (i8)(intptr_t)c02_s006f;
	f156_E(v4726);

	i8 v4727 = (i8)(intptr_t)(ws+3248);
	i1 v4728 = *(i1*)(intptr_t)v4727;
	f159_E_u8(v4728);

	i8 v4729 = (i8)(intptr_t)c02_s0070;
	f156_E(v4729);

	i8 v4730 = (i8)(intptr_t)(ws+3270);
	i2 v4731 = *(i2*)(intptr_t)v4730;
	f158_E_u16(v4731);

	i8 v4732 = (i8)(intptr_t)c02_s0071;
	f156_E(v4732);

	i8 v4733 = (i8)(intptr_t)(ws+3268);
	i2 v4734 = *(i2*)(intptr_t)v4733;
	f158_E_u16(v4734);

	i8 v4735 = (i8)(intptr_t)(ws+3256);
	i8 v4736 = *(i8*)(intptr_t)v4735;
	f156_E(v4736);

	i8 v4737 = (i8)(intptr_t)c02_s0072;
	f156_E(v4737);

	i8 v4738 = (i8)(intptr_t)(ws+3264);
	i4 v4739 = *(i4*)(intptr_t)v4738;
	f162_E_i32(v4739);

	i8 v4740 = (i8)(intptr_t)c02_s0073;
	f156_E(v4740);

endsub:;
}
const i1 c02_s0074[] = { 0x09,0x69,0 };
const i1 c02_s0075[] = { 0x20,0x76,0 };
const i1 c02_s0076[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
const i1 c02_s0077[] = { 0x29,0x76,0 };
const i1 c02_s0078[] = { 0x28,0x73,0 };
const i1 c02_s0079[] = { 0x29,0x76,0 };
const i1 c02_s007a[] = { 0x3b,0x0a,0 };

// Op2VVSigned workspace at ws+3248 length ws+22
void f230_Op2VVSigned(i8 p4741 /* op */, i1 p4742 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4742; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4741; /*op */

	i2 v4743;
	f220_Pop(&v4743);
	i8 v4744 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4744 = v4743;

	i2 v4745;
	f220_Pop(&v4745);
	i8 v4746 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4746 = v4745;

	i2 v4747;
	f218_Push(&v4747);
	i8 v4748 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4748 = v4747;

	i8 v4749 = (i8)(intptr_t)c02_s0074;
	f156_E(v4749);

	i8 v4750 = (i8)(intptr_t)(ws+3248);
	i1 v4751 = *(i1*)(intptr_t)v4750;
	f159_E_u8(v4751);

	i8 v4752 = (i8)(intptr_t)c02_s0075;
	f156_E(v4752);

	i8 v4753 = (i8)(intptr_t)(ws+3268);
	i2 v4754 = *(i2*)(intptr_t)v4753;
	f158_E_u16(v4754);

	i8 v4755 = (i8)(intptr_t)c02_s0076;
	f156_E(v4755);

	i8 v4756 = (i8)(intptr_t)(ws+3248);
	i1 v4757 = *(i1*)(intptr_t)v4756;
	f159_E_u8(v4757);

	i8 v4758 = (i8)(intptr_t)c02_s0077;
	f156_E(v4758);

	i8 v4759 = (i8)(intptr_t)(ws+3266);
	i2 v4760 = *(i2*)(intptr_t)v4759;
	f158_E_u16(v4760);

	i8 v4761 = (i8)(intptr_t)(ws+3256);
	i8 v4762 = *(i8*)(intptr_t)v4761;
	f156_E(v4762);

	i8 v4763 = (i8)(intptr_t)c02_s0078;
	f156_E(v4763);

	i8 v4764 = (i8)(intptr_t)(ws+3248);
	i1 v4765 = *(i1*)(intptr_t)v4764;
	f159_E_u8(v4765);

	i8 v4766 = (i8)(intptr_t)c02_s0079;
	f156_E(v4766);

	i8 v4767 = (i8)(intptr_t)(ws+3264);
	i2 v4768 = *(i2*)(intptr_t)v4767;
	f158_E_u16(v4768);

	i8 v4769 = (i8)(intptr_t)c02_s007a;
	f156_E(v4769);

endsub:;
}
const i1 c02_s007b[] = { 0x09,0x69,0 };
const i1 c02_s007c[] = { 0x20,0x76,0 };
const i1 c02_s007d[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s007e[] = { 0x28,0 };
const i1 c02_s007f[] = { 0x29,0x3b,0x0a,0 };

// Op2VCSigned workspace at ws+3248 length ws+24
void f231_Op2VCSigned(i4 p4770 /* rhs */, i8 p4771 /* op */, i1 p4772 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4772; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4771; /*op */
	*(i4*)(intptr_t)(ws+3264) = p4770; /*rhs */

	i2 v4773;
	f220_Pop(&v4773);
	i8 v4774 = (i8)(intptr_t)(ws+3268);
	*(i2*)(intptr_t)v4774 = v4773;

	i2 v4775;
	f218_Push(&v4775);
	i8 v4776 = (i8)(intptr_t)(ws+3270);
	*(i2*)(intptr_t)v4776 = v4775;

	i8 v4777 = (i8)(intptr_t)c02_s007b;
	f156_E(v4777);

	i8 v4778 = (i8)(intptr_t)(ws+3248);
	i1 v4779 = *(i1*)(intptr_t)v4778;
	f159_E_u8(v4779);

	i8 v4780 = (i8)(intptr_t)c02_s007c;
	f156_E(v4780);

	i8 v4781 = (i8)(intptr_t)(ws+3270);
	i2 v4782 = *(i2*)(intptr_t)v4781;
	f158_E_u16(v4782);

	i8 v4783 = (i8)(intptr_t)c02_s007d;
	f156_E(v4783);

	i8 v4784 = (i8)(intptr_t)(ws+3268);
	i2 v4785 = *(i2*)(intptr_t)v4784;
	f158_E_u16(v4785);

	i8 v4786 = (i8)(intptr_t)(ws+3256);
	i8 v4787 = *(i8*)(intptr_t)v4786;
	f156_E(v4787);

	i8 v4788 = (i8)(intptr_t)c02_s007e;
	f156_E(v4788);

	i8 v4789 = (i8)(intptr_t)(ws+3264);
	i4 v4790 = *(i4*)(intptr_t)v4789;
	f162_E_i32(v4790);

	i8 v4791 = (i8)(intptr_t)c02_s007f;
	f156_E(v4791);

endsub:;
}
const i1 c02_s0080[] = { 0x09,0x69,0 };
const i1 c02_s0081[] = { 0x20,0x76,0 };
const i1 c02_s0082[] = { 0x20,0x3d,0x20,0 };
const i1 c02_s0083[] = { 0x76,0 };
const i1 c02_s0084[] = { 0x3b,0x0a,0 };

// Op1V workspace at ws+3248 length ws+20
void f232_Op1V(i8 p4792 /* op */, i1 p4793 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4793; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4792; /*op */

	i2 v4794;
	f220_Pop(&v4794);
	i8 v4795 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4795 = v4794;

	i2 v4796;
	f218_Push(&v4796);
	i8 v4797 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4797 = v4796;

	i8 v4798 = (i8)(intptr_t)c02_s0080;
	f156_E(v4798);

	i8 v4799 = (i8)(intptr_t)(ws+3248);
	i1 v4800 = *(i1*)(intptr_t)v4799;
	f159_E_u8(v4800);

	i8 v4801 = (i8)(intptr_t)c02_s0081;
	f156_E(v4801);

	i8 v4802 = (i8)(intptr_t)(ws+3266);
	i2 v4803 = *(i2*)(intptr_t)v4802;
	f158_E_u16(v4803);

	i8 v4804 = (i8)(intptr_t)c02_s0082;
	f156_E(v4804);

	i8 v4805 = (i8)(intptr_t)(ws+3256);
	i8 v4806 = *(i8*)(intptr_t)v4805;
	f156_E(v4806);

	i8 v4807 = (i8)(intptr_t)c02_s0083;
	f156_E(v4807);

	i8 v4808 = (i8)(intptr_t)(ws+3264);
	i2 v4809 = *(i2*)(intptr_t)v4808;
	f158_E_u16(v4809);

	i8 v4810 = (i8)(intptr_t)c02_s0084;
	f156_E(v4810);

endsub:;
}
const i1 c02_s0085[] = { 0x09,0x69,0 };
const i1 c02_s0086[] = { 0x20,0x76,0 };
const i1 c02_s0087[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
const i1 c02_s0088[] = { 0x29,0x76,0 };
const i1 c02_s0089[] = { 0x29,0 };
const i1 c02_s008a[] = { 0x76,0 };
const i1 c02_s008b[] = { 0x3b,0x0a,0 };

// Shift workspace at ws+3248 length ws+30
void f233_Shift(i8 p4811 /* op */, i8 p4812 /* type */, i1 p4813 /* width */) {
	*(i1*)(intptr_t)(ws+3248) = p4813; /*width */
	*(i8*)(intptr_t)(ws+3256) = p4812; /*type */
	*(i8*)(intptr_t)(ws+3264) = p4811; /*op */

	i2 v4814;
	f220_Pop(&v4814);
	i8 v4815 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4815 = v4814;

	i2 v4816;
	f220_Pop(&v4816);
	i8 v4817 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4817 = v4816;

	i2 v4818;
	f218_Push(&v4818);
	i8 v4819 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v4819 = v4818;

	i8 v4820 = (i8)(intptr_t)c02_s0085;
	f156_E(v4820);

	i8 v4821 = (i8)(intptr_t)(ws+3248);
	i1 v4822 = *(i1*)(intptr_t)v4821;
	f159_E_u8(v4822);

	i8 v4823 = (i8)(intptr_t)c02_s0086;
	f156_E(v4823);

	i8 v4824 = (i8)(intptr_t)(ws+3276);
	i2 v4825 = *(i2*)(intptr_t)v4824;
	f158_E_u16(v4825);

	i8 v4826 = (i8)(intptr_t)c02_s0087;
	f156_E(v4826);

	i8 v4827 = (i8)(intptr_t)(ws+3256);
	i8 v4828 = *(i8*)(intptr_t)v4827;
	f156_E(v4828);

	i8 v4829 = (i8)(intptr_t)c02_s0088;
	f156_E(v4829);

	i8 v4830 = (i8)(intptr_t)(ws+3274);
	i2 v4831 = *(i2*)(intptr_t)v4830;
	f158_E_u16(v4831);

	i8 v4832 = (i8)(intptr_t)c02_s0089;
	f156_E(v4832);

	i8 v4833 = (i8)(intptr_t)(ws+3264);
	i8 v4834 = *(i8*)(intptr_t)v4833;
	f156_E(v4834);

	i8 v4835 = (i8)(intptr_t)c02_s008a;
	f156_E(v4835);

	i8 v4836 = (i8)(intptr_t)(ws+3272);
	i2 v4837 = *(i2*)(intptr_t)v4836;
	f158_E_u16(v4837);

	i8 v4838 = (i8)(intptr_t)c02_s008b;
	f156_E(v4838);

endsub:;
}
const i1 c02_s008c[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
const i1 c02_s008d[] = { 0x76,0 };
const i1 c02_s008e[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s008f[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s0090[] = { 0x3b,0x0a,0 };

// Branch workspace at ws+3248 length ws+20
void f234_Branch(i8 p4839 /* op */, i8 p4840 /* node */) {
	*(i8*)(intptr_t)(ws+3248) = p4840; /*node */
	*(i8*)(intptr_t)(ws+3256) = p4839; /*op */

	i2 v4841;
	f220_Pop(&v4841);
	i8 v4842 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4842 = v4841;

	i2 v4843;
	f220_Pop(&v4843);
	i8 v4844 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v4844 = v4843;

	i8 v4845 = (i8)(intptr_t)c02_s008c;
	f156_E(v4845);

	i8 v4846 = (i8)(intptr_t)(ws+3266);
	i2 v4847 = *(i2*)(intptr_t)v4846;
	f158_E_u16(v4847);

	i8 v4848 = (i8)(intptr_t)(ws+3256);
	i8 v4849 = *(i8*)(intptr_t)v4848;
	f156_E(v4849);

	i8 v4850 = (i8)(intptr_t)c02_s008d;
	f156_E(v4850);

	i8 v4851 = (i8)(intptr_t)(ws+3264);
	i2 v4852 = *(i2*)(intptr_t)v4851;
	f158_E_u16(v4852);

	i8 v4853 = (i8)(intptr_t)c02_s008e;
	f156_E(v4853);

	i8 v4854 = (i8)(intptr_t)(ws+3248);
	i8 v4855 = *(i8*)(intptr_t)v4854;
	i2 v4856 = *(i2*)(intptr_t)v4855;
	f167_E_labelref(v4856);

	i8 v4857 = (i8)(intptr_t)c02_s008f;
	f156_E(v4857);

	i8 v4858 = (i8)(intptr_t)(ws+3248);
	i8 v4859 = *(i8*)(intptr_t)v4858;
	i8 v4860 = v4859+(+2);
	i2 v4861 = *(i2*)(intptr_t)v4860;
	f167_E_labelref(v4861);

	i8 v4862 = (i8)(intptr_t)c02_s0090;
	f156_E(v4862);

endsub:;
}
const i1 c02_s0091[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
const i1 c02_s0092[] = { 0x29,0x76,0 };
const i1 c02_s0093[] = { 0x28,0x73,0 };
const i1 c02_s0094[] = { 0x29,0x76,0 };
const i1 c02_s0095[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s0096[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s0097[] = { 0x3b,0x0a,0 };

// BranchSigned workspace at ws+3248 length ws+28
void f235_BranchSigned(i8 p4863 /* op */, i1 p4864 /* width */, i8 p4865 /* node */) {
	*(i8*)(intptr_t)(ws+3248) = p4865; /*node */
	*(i1*)(intptr_t)(ws+3256) = p4864; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4863; /*op */

	i2 v4866;
	f220_Pop(&v4866);
	i8 v4867 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4867 = v4866;

	i2 v4868;
	f220_Pop(&v4868);
	i8 v4869 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4869 = v4868;

	i8 v4870 = (i8)(intptr_t)c02_s0091;
	f156_E(v4870);

	i8 v4871 = (i8)(intptr_t)(ws+3256);
	i1 v4872 = *(i1*)(intptr_t)v4871;
	f159_E_u8(v4872);

	i8 v4873 = (i8)(intptr_t)c02_s0092;
	f156_E(v4873);

	i8 v4874 = (i8)(intptr_t)(ws+3274);
	i2 v4875 = *(i2*)(intptr_t)v4874;
	f158_E_u16(v4875);

	i8 v4876 = (i8)(intptr_t)(ws+3264);
	i8 v4877 = *(i8*)(intptr_t)v4876;
	f156_E(v4877);

	i8 v4878 = (i8)(intptr_t)c02_s0093;
	f156_E(v4878);

	i8 v4879 = (i8)(intptr_t)(ws+3256);
	i1 v4880 = *(i1*)(intptr_t)v4879;
	f159_E_u8(v4880);

	i8 v4881 = (i8)(intptr_t)c02_s0094;
	f156_E(v4881);

	i8 v4882 = (i8)(intptr_t)(ws+3272);
	i2 v4883 = *(i2*)(intptr_t)v4882;
	f158_E_u16(v4883);

	i8 v4884 = (i8)(intptr_t)c02_s0095;
	f156_E(v4884);

	i8 v4885 = (i8)(intptr_t)(ws+3248);
	i8 v4886 = *(i8*)(intptr_t)v4885;
	i2 v4887 = *(i2*)(intptr_t)v4886;
	f167_E_labelref(v4887);

	i8 v4888 = (i8)(intptr_t)c02_s0096;
	f156_E(v4888);

	i8 v4889 = (i8)(intptr_t)(ws+3248);
	i8 v4890 = *(i8*)(intptr_t)v4889;
	i8 v4891 = v4890+(+2);
	i2 v4892 = *(i2*)(intptr_t)v4891;
	f167_E_labelref(v4892);

	i8 v4893 = (i8)(intptr_t)c02_s0097;
	f156_E(v4893);

endsub:;
}
const i1 c02_s0098[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s0099[] = { 0x3b,0x0a,0 };

// BranchConstant workspace at ws+3248 length ws+16
void f236_BranchConstant(i4 p4894 /* rhs */, i4 p4895 /* lhs */, i8 p4896 /* node */) {
	*(i8*)(intptr_t)(ws+3248) = p4896; /*node */
	*(i4*)(intptr_t)(ws+3256) = p4895; /*lhs */
	*(i4*)(intptr_t)(ws+3260) = p4894; /*rhs */

	i8 v4897 = (i8)(intptr_t)c02_s0098;
	f156_E(v4897);

	i8 v4898 = (i8)(intptr_t)(ws+3256);
	i4 v4899 = *(i4*)(intptr_t)v4898;
	i8 v4900 = (i8)(intptr_t)(ws+3260);
	i4 v4901 = *(i4*)(intptr_t)v4900;
	if (v4899==v4901) goto c02_0434; else goto c02_0435;

c02_0434:;

	i8 v4902 = (i8)(intptr_t)(ws+3248);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i2 v4904 = *(i2*)(intptr_t)v4903;
	f167_E_labelref(v4904);

	goto c02_0431;

c02_0435:;

	i8 v4905 = (i8)(intptr_t)(ws+3248);
	i8 v4906 = *(i8*)(intptr_t)v4905;
	i8 v4907 = v4906+(+2);
	i2 v4908 = *(i2*)(intptr_t)v4907;
	f167_E_labelref(v4908);

c02_0431:;

	i8 v4909 = (i8)(intptr_t)c02_s0099;
	f156_E(v4909);

endsub:;
}
const i1 c02_s009a[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
const i1 c02_s009b[] = { 0x20,0x21,0x3d,0x20,0 };
const i1 c02_s009c[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s009d[] = { 0x3b,0x0a,0 };

// Whencase workspace at ws+3248 length ws+8
void f237_Whencase(i2 p4910 /* falselabel */, i4 p4911 /* value */) {
	*(i4*)(intptr_t)(ws+3248) = p4911; /*value */
	*(i2*)(intptr_t)(ws+3252) = p4910; /*falselabel */

	i8 v4912 = (i8)(intptr_t)(ws+1064);
	i8 v4913 = (i8)(intptr_t)(ws+1192);
	i1 v4914 = *(i1*)(intptr_t)v4913;
	i1 v4915 = v4914+(-1);
	i8 v4916 = v4915;
	i1 v4917 = (i1)+1;
	i8 v4918 = ((i8)v4916)<<v4917;
	i8 v4919 = v4912+v4918;
	i2 v4920 = *(i2*)(intptr_t)v4919;
	i8 v4921 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v4921 = v4920;

	i8 v4922 = (i8)(intptr_t)c02_s009a;
	f156_E(v4922);

	i8 v4923 = (i8)(intptr_t)(ws+3254);
	i2 v4924 = *(i2*)(intptr_t)v4923;
	f158_E_u16(v4924);

	i8 v4925 = (i8)(intptr_t)c02_s009b;
	f156_E(v4925);

	i8 v4926 = (i8)(intptr_t)(ws+3248);
	i4 v4927 = *(i4*)(intptr_t)v4926;
	f162_E_i32(v4927);

	i8 v4928 = (i8)(intptr_t)c02_s009c;
	f156_E(v4928);

	i8 v4929 = (i8)(intptr_t)(ws+3252);
	i2 v4930 = *(i2*)(intptr_t)v4929;
	f167_E_labelref(v4930);

	i8 v4931 = (i8)(intptr_t)c02_s009d;
	f156_E(v4931);

endsub:;
}
const i1 c02_s009e[] = { 0x09,0x69,0 };
const i1 c02_s009f[] = { 0x20,0x76,0 };
const i1 c02_s00a0[] = { 0x20,0x3d,0x20,0 };
const i1 c02_s00a1[] = { 0x28,0x73,0 };
const i1 c02_s00a2[] = { 0x29,0x28,0x73,0 };
const i1 c02_s00a3[] = { 0x29,0 };
const i1 c02_s00a4[] = { 0x76,0 };
const i1 c02_s00a5[] = { 0x3b,0x0a,0 };

// Cast workspace at ws+3248 length ws+8
void f238_Cast(i1 p4932 /* sext */, i1 p4933 /* dest */, i1 p4934 /* src */) {
	*(i1*)(intptr_t)(ws+3248) = p4934; /*src */
	*(i1*)(intptr_t)(ws+3249) = p4933; /*dest */
	*(i1*)(intptr_t)(ws+3250) = p4932; /*sext */

	i2 v4935;
	f220_Pop(&v4935);
	i8 v4936 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v4936 = v4935;

	i2 v4937;
	f218_Push(&v4937);
	i8 v4938 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v4938 = v4937;

	i8 v4939 = (i8)(intptr_t)c02_s009e;
	f156_E(v4939);

	i8 v4940 = (i8)(intptr_t)(ws+3249);
	i1 v4941 = *(i1*)(intptr_t)v4940;
	f159_E_u8(v4941);

	i8 v4942 = (i8)(intptr_t)c02_s009f;
	f156_E(v4942);

	i8 v4943 = (i8)(intptr_t)(ws+3254);
	i2 v4944 = *(i2*)(intptr_t)v4943;
	f158_E_u16(v4944);

	i8 v4945 = (i8)(intptr_t)c02_s00a0;
	f156_E(v4945);

	i8 v4946 = (i8)(intptr_t)(ws+3250);
	i1 v4947 = *(i1*)(intptr_t)v4946;
	i1 v4948 = (i1)+0;
	if (v4947==v4948) goto c02_043a; else goto c02_0439;

c02_0439:;

	i8 v4949 = (i8)(intptr_t)c02_s00a1;
	f156_E(v4949);

	i8 v4950 = (i8)(intptr_t)(ws+3249);
	i1 v4951 = *(i1*)(intptr_t)v4950;
	f159_E_u8(v4951);

	i8 v4952 = (i8)(intptr_t)c02_s00a2;
	f156_E(v4952);

	i8 v4953 = (i8)(intptr_t)(ws+3248);
	i1 v4954 = *(i1*)(intptr_t)v4953;
	f159_E_u8(v4954);

	i8 v4955 = (i8)(intptr_t)c02_s00a3;
	f156_E(v4955);

	goto c02_0436;

c02_043a:;

c02_0436:;

	i8 v4956 = (i8)(intptr_t)c02_s00a4;
	f156_E(v4956);

	i8 v4957 = (i8)(intptr_t)(ws+3252);
	i2 v4958 = *(i2*)(intptr_t)v4957;
	f158_E_u16(v4958);

	i8 v4959 = (i8)(intptr_t)c02_s00a5;
	f156_E(v4959);

endsub:;
}
const i1 c02_s00a6[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
const i1 c02_s00a7[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
const i1 c02_s00a8[] = { 0x30,0x78,0 };
const i1 c02_s00a9[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };

// E_string workspace at ws+3256 length ws+12
void f239_E_string(i2* p4962 /* sid */, i8 p4963 /* text */) {
	*(i8*)(intptr_t)(ws+3256) = p4963; /*text */

	i8 v4964 = (i8)(intptr_t)(ws+1208);
	i2 v4965 = *(i2*)(intptr_t)v4964;
	i8 v4966 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4966 = v4965;

	i8 v4967 = (i8)(intptr_t)(ws+1208);
	i2 v4968 = *(i2*)(intptr_t)v4967;
	i2 v4969 = v4968+(+1);
	i8 v4970 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v4970 = v4969;

	f170_EmitterPushChunk();

	i8 v4971 = (i8)(intptr_t)(ws+40);
	i8 v4972 = *(i8*)(intptr_t)v4971;
	i8 v4973 = v4972+(+56);
	i2 v4974 = *(i2*)(intptr_t)v4973;
	f165_E_h16(v4974);

	i8 v4975 = (i8)(intptr_t)c02_s00a6;
	f156_E(v4975);

	i1 v4976 = (i1)+3;
	f149_EmitByte(v4976);

	i1 v4977 = (i1)+115;
	f149_EmitByte(v4977);

	i8 v4978 = (i8)(intptr_t)(ws+3264);
	i2 v4979 = *(i2*)(intptr_t)v4978;
	f165_E_h16(v4979);

	i8 v4980 = (i8)(intptr_t)c02_s00a7;
	f156_E(v4980);

	i1 v4981 = (i1)+1;
	i8 v4982 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v4982 = v4981;

c02_043b:;

	i8 v4983 = (i8)(intptr_t)(ws+3256);
	i8 v4984 = *(i8*)(intptr_t)v4983;
	i1 v4985 = *(i1*)(intptr_t)v4984;
	i8 v4986 = (i8)(intptr_t)(ws+3267);
	*(i1*)(intptr_t)v4986 = v4985;

	i8 v4987 = (i8)(intptr_t)(ws+3256);
	i8 v4988 = *(i8*)(intptr_t)v4987;
	i8 v4989 = v4988+(+1);
	i8 v4990 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v4990 = v4989;

	i8 v4991 = (i8)(intptr_t)(ws+3267);
	i1 v4992 = *(i1*)(intptr_t)v4991;
	i1 v4993 = (i1)+0;
	if (v4992==v4993) goto c02_0440; else goto c02_0441;

c02_0440:;

	goto c02_043c;

c02_0441:;

c02_043d:;

	i8 v4994 = (i8)(intptr_t)(ws+3266);
	i1 v4995 = *(i1*)(intptr_t)v4994;
	i1 v4996 = (i1)+0;
	if (v4995==v4996) goto c02_0445; else goto c02_0446;

c02_0445:;

	f151_E_comma();

	goto c02_0442;

c02_0446:;

c02_0442:;

	i1 v4997 = (i1)+0;
	i8 v4998 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v4998 = v4997;

	i8 v4999 = (i8)(intptr_t)c02_s00a8;
	f156_E(v4999);

	i8 v5000 = (i8)(intptr_t)(ws+3267);
	i1 v5001 = *(i1*)(intptr_t)v5000;
	f164_E_h8(v5001);

	goto c02_043b;

c02_043c:;

	i8 v5002 = (i8)(intptr_t)(ws+3266);
	i1 v5003 = *(i1*)(intptr_t)v5002;
	i1 v5004 = (i1)+0;
	if (v5003==v5004) goto c02_044a; else goto c02_044b;

c02_044a:;

	f151_E_comma();

	goto c02_0447;

c02_044b:;

c02_0447:;

	i8 v5005 = (i8)(intptr_t)c02_s00a9;
	f156_E(v5005);

	i1 v5006 = (i1)+83;
	f171_EmitterPopChunk(v5006);

endsub:;
	*p4962 = *(i2*)(intptr_t)(ws+3264);
}
const i1 c02_s00aa[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
const i1 c02_s00ab[] = { 0x30,0x78,0 };
const i1 c02_s00ac[] = { 0x7d,0x7d,0x2c,0x0a,0 };

// FlushInitialiserBuffer workspace at ws+3264 length ws+1
void f240_FlushInitialiserBuffer(void) {

	i8 v5009 = (i8)(intptr_t)(ws+1218);
	i1 v5010 = *(i1*)(intptr_t)v5009;
	i1 v5011 = (i1)+0;
	if (v5010==v5011) goto c02_0450; else goto c02_044f;

c02_044f:;

	i8 v5012 = (i8)(intptr_t)c02_s00aa;
	f156_E(v5012);

	i1 v5013 = (i1)+0;
	i8 v5014 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5014 = v5013;

c02_0453:;

	i8 v5015 = (i8)(intptr_t)(ws+3264);
	i1 v5016 = *(i1*)(intptr_t)v5015;
	i8 v5017 = (i8)(intptr_t)(ws+1218);
	i1 v5018 = *(i1*)(intptr_t)v5017;
	if (v5016==v5018) goto c02_0456; else goto c02_0455;

c02_0455:;

	i8 v5019 = (i8)(intptr_t)(ws+3264);
	i1 v5020 = *(i1*)(intptr_t)v5019;
	i1 v5021 = (i1)+0;
	if (v5020==v5021) goto c02_045b; else goto c02_045a;

c02_045a:;

	f151_E_comma();

	goto c02_0457;

c02_045b:;

c02_0457:;

	i8 v5022 = (i8)(intptr_t)c02_s00ab;
	f156_E(v5022);

	i8 v5023 = (i8)(intptr_t)(ws+1210);
	i8 v5024 = (i8)(intptr_t)(ws+3264);
	i1 v5025 = *(i1*)(intptr_t)v5024;
	i8 v5026 = v5025;
	i8 v5027 = v5023+v5026;
	i1 v5028 = *(i1*)(intptr_t)v5027;
	f164_E_h8(v5028);

	i8 v5029 = (i8)(intptr_t)(ws+3264);
	i1 v5030 = *(i1*)(intptr_t)v5029;
	i1 v5031 = v5030+(+1);
	i8 v5032 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5032 = v5031;

	goto c02_0453;

c02_0456:;

	i8 v5033 = (i8)(intptr_t)c02_s00ac;
	f156_E(v5033);

	i1 v5034 = (i1)+0;
	i8 v5035 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5035 = v5034;

	goto c02_044c;

c02_0450:;

c02_044c:;

endsub:;
}

// E_bytes workspace at ws+3248 length ws+9
void f241_E_bytes(i1 p5036 /* width */, i8 p5037 /* ptr */) {
	*(i8*)(intptr_t)(ws+3248) = p5037; /*ptr */
	*(i1*)(intptr_t)(ws+3256) = p5036; /*width */

c02_045e:;

	i8 v5038 = (i8)(intptr_t)(ws+3256);
	i1 v5039 = *(i1*)(intptr_t)v5038;
	i1 v5040 = (i1)+0;
	if (v5039==v5040) goto c02_0461; else goto c02_0460;

c02_0460:;

	i8 v5041 = (i8)(intptr_t)(ws+3248);
	i8 v5042 = *(i8*)(intptr_t)v5041;
	i1 v5043 = *(i1*)(intptr_t)v5042;
	i8 v5044 = (i8)(intptr_t)(ws+1210);
	i8 v5045 = (i8)(intptr_t)(ws+1218);
	i1 v5046 = *(i1*)(intptr_t)v5045;
	i8 v5047 = v5046;
	i8 v5048 = v5044+v5047;
	*(i1*)(intptr_t)v5048 = v5043;

	i8 v5049 = (i8)(intptr_t)(ws+3248);
	i8 v5050 = *(i8*)(intptr_t)v5049;
	i8 v5051 = v5050+(+1);
	i8 v5052 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v5052 = v5051;

	i8 v5053 = (i8)(intptr_t)(ws+1218);
	i1 v5054 = *(i1*)(intptr_t)v5053;
	i1 v5055 = v5054+(+1);
	i8 v5056 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5056 = v5055;

	i8 v5057 = (i8)(intptr_t)(ws+1218);
	i1 v5058 = *(i1*)(intptr_t)v5057;
	i1 v5059 = (i1)+8;
	if (v5058==v5059) goto c02_0465; else goto c02_0466;

c02_0465:;

	f240_FlushInitialiserBuffer();

	goto c02_0462;

c02_0466:;

c02_0462:;

	i8 v5060 = (i8)(intptr_t)(ws+3256);
	i1 v5061 = *(i1*)(intptr_t)v5060;
	i1 v5062 = v5061+(-1);
	i8 v5063 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5063 = v5062;

	goto c02_045e;

c02_0461:;

endsub:;
}

// MatchPredicate workspace at ws+3240 length ws+48
void f242_MatchPredicate(i1* p5064 /* matches */, i8 p5065 /* n */, i1 p5066 /* rule */) {
	*(i1*)(intptr_t)(ws+3240) = p5066; /*rule */
	*(i8*)(intptr_t)(ws+3248) = p5065; /*n */

	i8 v5067 = (i8)(intptr_t)(ws+3248);
	i8 v5068 = *(i8*)(intptr_t)v5067;
	i8 v5069 = (i8)+24;
	i8 v5070 = (i8)(intptr_t)(ws+3264);
	f30_MemCopy(v5070, v5069, v5068);

	i1 v5071 = (i1)+0;
	i8 v5072 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5072 = v5071;

	i8 v5073 = (i8)(intptr_t)(ws+3240);
	i1 v5074 = *(i1*)(intptr_t)v5073;

c02_0467:;


endsub:;
	*p5064 = *(i1*)(intptr_t)(ws+3256);
}

// emit_0 workspace at ws+3248 length ws+0
void f244_emit_0(void) {

	i8 v5124 = (i8)(intptr_t)(ws+3168);
	i8 v5125 = *(i8*)(intptr_t)v5124;
	i8 v5126 = v5125+(+16);
	i8 v5127 = *(i8*)(intptr_t)v5126;
	i8 v5128 = (i8)(intptr_t)(ws+3192);
	i8 v5129 = *(i8*)(intptr_t)v5128;
	i4 v5130 = *(i4*)(intptr_t)v5129;
	i8 v5131 = (i8)(intptr_t)(ws+3208);
	i8 v5132 = *(i8*)(intptr_t)v5131;
	i4 v5133 = *(i4*)(intptr_t)v5132;
	f236_BranchConstant(v5133, v5130, v5127);

endsub:;
}
const i1 c02_s00ad[] = { 0x2b,0 };

// emit_1 workspace at ws+3248 length ws+0
void f245_emit_1(void) {

	i1 v5134 = (i1)+1;
	i8 v5135 = (i8)(intptr_t)c02_s00ad;
	i8 v5136 = (i8)(intptr_t)(ws+3208);
	i8 v5137 = *(i8*)(intptr_t)v5136;
	i4 v5138 = *(i4*)(intptr_t)v5137;
	f229_Op2VC(v5138, v5135, v5134);

endsub:;
}
const i1 c02_s00ae[] = { 0x2b,0 };

// emit_2 workspace at ws+3248 length ws+0
void f246_emit_2(void) {

	i1 v5139 = (i1)+2;
	i8 v5140 = (i8)(intptr_t)c02_s00ae;
	i8 v5141 = (i8)(intptr_t)(ws+3208);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i4 v5143 = *(i4*)(intptr_t)v5142;
	f229_Op2VC(v5143, v5140, v5139);

endsub:;
}
const i1 c02_s00af[] = { 0x2b,0 };

// emit_3 workspace at ws+3248 length ws+0
void f247_emit_3(void) {

	i1 v5144 = (i1)+4;
	i8 v5145 = (i8)(intptr_t)c02_s00af;
	i8 v5146 = (i8)(intptr_t)(ws+3208);
	i8 v5147 = *(i8*)(intptr_t)v5146;
	i4 v5148 = *(i4*)(intptr_t)v5147;
	f229_Op2VC(v5148, v5145, v5144);

endsub:;
}
const i1 c02_s00b0[] = { 0x2b,0 };

// emit_4 workspace at ws+3248 length ws+0
void f248_emit_4(void) {

	i1 v5149 = (i1)+8;
	i8 v5150 = (i8)(intptr_t)c02_s00b0;
	i8 v5151 = (i8)(intptr_t)(ws+3208);
	i8 v5152 = *(i8*)(intptr_t)v5151;
	i4 v5153 = *(i4*)(intptr_t)v5152;
	f229_Op2VC(v5153, v5150, v5149);

endsub:;
}
const i1 c02_s00b1[] = { 0x2d,0 };

// emit_5 workspace at ws+3248 length ws+0
void f249_emit_5(void) {

	i1 v5154 = (i1)+1;
	i8 v5155 = (i8)(intptr_t)c02_s00b1;
	i8 v5156 = (i8)(intptr_t)(ws+3208);
	i8 v5157 = *(i8*)(intptr_t)v5156;
	i4 v5158 = *(i4*)(intptr_t)v5157;
	f229_Op2VC(v5158, v5155, v5154);

endsub:;
}
const i1 c02_s00b2[] = { 0x2d,0 };

// emit_6 workspace at ws+3248 length ws+0
void f250_emit_6(void) {

	i1 v5159 = (i1)+2;
	i8 v5160 = (i8)(intptr_t)c02_s00b2;
	i8 v5161 = (i8)(intptr_t)(ws+3208);
	i8 v5162 = *(i8*)(intptr_t)v5161;
	i4 v5163 = *(i4*)(intptr_t)v5162;
	f229_Op2VC(v5163, v5160, v5159);

endsub:;
}
const i1 c02_s00b3[] = { 0x2d,0 };

// emit_7 workspace at ws+3248 length ws+0
void f251_emit_7(void) {

	i1 v5164 = (i1)+4;
	i8 v5165 = (i8)(intptr_t)c02_s00b3;
	i8 v5166 = (i8)(intptr_t)(ws+3208);
	i8 v5167 = *(i8*)(intptr_t)v5166;
	i4 v5168 = *(i4*)(intptr_t)v5167;
	f229_Op2VC(v5168, v5165, v5164);

endsub:;
}
const i1 c02_s00b4[] = { 0x2d,0 };

// emit_8 workspace at ws+3248 length ws+0
void f252_emit_8(void) {

	i1 v5169 = (i1)+8;
	i8 v5170 = (i8)(intptr_t)c02_s00b4;
	i8 v5171 = (i8)(intptr_t)(ws+3208);
	i8 v5172 = *(i8*)(intptr_t)v5171;
	i4 v5173 = *(i4*)(intptr_t)v5172;
	f229_Op2VC(v5173, v5170, v5169);

endsub:;
}
const i1 c02_s00b5[] = { 0x2a,0 };

// emit_9 workspace at ws+3248 length ws+0
void f253_emit_9(void) {

	i1 v5174 = (i1)+1;
	i8 v5175 = (i8)(intptr_t)c02_s00b5;
	i8 v5176 = (i8)(intptr_t)(ws+3208);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i4 v5178 = *(i4*)(intptr_t)v5177;
	f229_Op2VC(v5178, v5175, v5174);

endsub:;
}
const i1 c02_s00b6[] = { 0x2a,0 };

// emit_10 workspace at ws+3248 length ws+0
void f254_emit_10(void) {

	i1 v5179 = (i1)+2;
	i8 v5180 = (i8)(intptr_t)c02_s00b6;
	i8 v5181 = (i8)(intptr_t)(ws+3208);
	i8 v5182 = *(i8*)(intptr_t)v5181;
	i4 v5183 = *(i4*)(intptr_t)v5182;
	f229_Op2VC(v5183, v5180, v5179);

endsub:;
}
const i1 c02_s00b7[] = { 0x2a,0 };

// emit_11 workspace at ws+3248 length ws+0
void f255_emit_11(void) {

	i1 v5184 = (i1)+4;
	i8 v5185 = (i8)(intptr_t)c02_s00b7;
	i8 v5186 = (i8)(intptr_t)(ws+3208);
	i8 v5187 = *(i8*)(intptr_t)v5186;
	i4 v5188 = *(i4*)(intptr_t)v5187;
	f229_Op2VC(v5188, v5185, v5184);

endsub:;
}
const i1 c02_s00b8[] = { 0x2a,0 };

// emit_12 workspace at ws+3248 length ws+0
void f256_emit_12(void) {

	i1 v5189 = (i1)+8;
	i8 v5190 = (i8)(intptr_t)c02_s00b8;
	i8 v5191 = (i8)(intptr_t)(ws+3208);
	i8 v5192 = *(i8*)(intptr_t)v5191;
	i4 v5193 = *(i4*)(intptr_t)v5192;
	f229_Op2VC(v5193, v5190, v5189);

endsub:;
}
const i1 c02_s00b9[] = { 0x2f,0 };

// emit_13 workspace at ws+3248 length ws+0
void f257_emit_13(void) {

	i1 v5194 = (i1)+1;
	i8 v5195 = (i8)(intptr_t)c02_s00b9;
	i8 v5196 = (i8)(intptr_t)(ws+3208);
	i8 v5197 = *(i8*)(intptr_t)v5196;
	i4 v5198 = *(i4*)(intptr_t)v5197;
	f229_Op2VC(v5198, v5195, v5194);

endsub:;
}
const i1 c02_s00ba[] = { 0x2f,0 };

// emit_14 workspace at ws+3248 length ws+0
void f258_emit_14(void) {

	i1 v5199 = (i1)+2;
	i8 v5200 = (i8)(intptr_t)c02_s00ba;
	i8 v5201 = (i8)(intptr_t)(ws+3208);
	i8 v5202 = *(i8*)(intptr_t)v5201;
	i4 v5203 = *(i4*)(intptr_t)v5202;
	f229_Op2VC(v5203, v5200, v5199);

endsub:;
}
const i1 c02_s00bb[] = { 0x2f,0 };

// emit_15 workspace at ws+3248 length ws+0
void f259_emit_15(void) {

	i1 v5204 = (i1)+4;
	i8 v5205 = (i8)(intptr_t)c02_s00bb;
	i8 v5206 = (i8)(intptr_t)(ws+3208);
	i8 v5207 = *(i8*)(intptr_t)v5206;
	i4 v5208 = *(i4*)(intptr_t)v5207;
	f229_Op2VC(v5208, v5205, v5204);

endsub:;
}
const i1 c02_s00bc[] = { 0x2f,0 };

// emit_16 workspace at ws+3248 length ws+0
void f260_emit_16(void) {

	i1 v5209 = (i1)+8;
	i8 v5210 = (i8)(intptr_t)c02_s00bc;
	i8 v5211 = (i8)(intptr_t)(ws+3208);
	i8 v5212 = *(i8*)(intptr_t)v5211;
	i4 v5213 = *(i4*)(intptr_t)v5212;
	f229_Op2VC(v5213, v5210, v5209);

endsub:;
}
const i1 c02_s00bd[] = { 0x25,0 };

// emit_17 workspace at ws+3248 length ws+0
void f261_emit_17(void) {

	i1 v5214 = (i1)+1;
	i8 v5215 = (i8)(intptr_t)c02_s00bd;
	i8 v5216 = (i8)(intptr_t)(ws+3208);
	i8 v5217 = *(i8*)(intptr_t)v5216;
	i4 v5218 = *(i4*)(intptr_t)v5217;
	f229_Op2VC(v5218, v5215, v5214);

endsub:;
}
const i1 c02_s00be[] = { 0x25,0 };

// emit_18 workspace at ws+3248 length ws+0
void f262_emit_18(void) {

	i1 v5219 = (i1)+2;
	i8 v5220 = (i8)(intptr_t)c02_s00be;
	i8 v5221 = (i8)(intptr_t)(ws+3208);
	i8 v5222 = *(i8*)(intptr_t)v5221;
	i4 v5223 = *(i4*)(intptr_t)v5222;
	f229_Op2VC(v5223, v5220, v5219);

endsub:;
}
const i1 c02_s00bf[] = { 0x25,0 };

// emit_19 workspace at ws+3248 length ws+0
void f263_emit_19(void) {

	i1 v5224 = (i1)+4;
	i8 v5225 = (i8)(intptr_t)c02_s00bf;
	i8 v5226 = (i8)(intptr_t)(ws+3208);
	i8 v5227 = *(i8*)(intptr_t)v5226;
	i4 v5228 = *(i4*)(intptr_t)v5227;
	f229_Op2VC(v5228, v5225, v5224);

endsub:;
}
const i1 c02_s00c0[] = { 0x25,0 };

// emit_20 workspace at ws+3248 length ws+0
void f264_emit_20(void) {

	i1 v5229 = (i1)+8;
	i8 v5230 = (i8)(intptr_t)c02_s00c0;
	i8 v5231 = (i8)(intptr_t)(ws+3208);
	i8 v5232 = *(i8*)(intptr_t)v5231;
	i4 v5233 = *(i4*)(intptr_t)v5232;
	f229_Op2VC(v5233, v5230, v5229);

endsub:;
}
const i1 c02_s00c1[] = { 0x2f,0 };

// emit_21 workspace at ws+3248 length ws+0
void f265_emit_21(void) {

	i1 v5234 = (i1)+1;
	i8 v5235 = (i8)(intptr_t)c02_s00c1;
	i8 v5236 = (i8)(intptr_t)(ws+3208);
	i8 v5237 = *(i8*)(intptr_t)v5236;
	i4 v5238 = *(i4*)(intptr_t)v5237;
	f231_Op2VCSigned(v5238, v5235, v5234);

endsub:;
}
const i1 c02_s00c2[] = { 0x2f,0 };

// emit_22 workspace at ws+3248 length ws+0
void f266_emit_22(void) {

	i1 v5239 = (i1)+2;
	i8 v5240 = (i8)(intptr_t)c02_s00c2;
	i8 v5241 = (i8)(intptr_t)(ws+3208);
	i8 v5242 = *(i8*)(intptr_t)v5241;
	i4 v5243 = *(i4*)(intptr_t)v5242;
	f231_Op2VCSigned(v5243, v5240, v5239);

endsub:;
}
const i1 c02_s00c3[] = { 0x2f,0 };

// emit_23 workspace at ws+3248 length ws+0
void f267_emit_23(void) {

	i1 v5244 = (i1)+4;
	i8 v5245 = (i8)(intptr_t)c02_s00c3;
	i8 v5246 = (i8)(intptr_t)(ws+3208);
	i8 v5247 = *(i8*)(intptr_t)v5246;
	i4 v5248 = *(i4*)(intptr_t)v5247;
	f231_Op2VCSigned(v5248, v5245, v5244);

endsub:;
}
const i1 c02_s00c4[] = { 0x2f,0 };

// emit_24 workspace at ws+3248 length ws+0
void f268_emit_24(void) {

	i1 v5249 = (i1)+8;
	i8 v5250 = (i8)(intptr_t)c02_s00c4;
	i8 v5251 = (i8)(intptr_t)(ws+3208);
	i8 v5252 = *(i8*)(intptr_t)v5251;
	i4 v5253 = *(i4*)(intptr_t)v5252;
	f231_Op2VCSigned(v5253, v5250, v5249);

endsub:;
}
const i1 c02_s00c5[] = { 0x25,0 };

// emit_25 workspace at ws+3248 length ws+0
void f269_emit_25(void) {

	i1 v5254 = (i1)+1;
	i8 v5255 = (i8)(intptr_t)c02_s00c5;
	i8 v5256 = (i8)(intptr_t)(ws+3208);
	i8 v5257 = *(i8*)(intptr_t)v5256;
	i4 v5258 = *(i4*)(intptr_t)v5257;
	f231_Op2VCSigned(v5258, v5255, v5254);

endsub:;
}
const i1 c02_s00c6[] = { 0x25,0 };

// emit_26 workspace at ws+3248 length ws+0
void f270_emit_26(void) {

	i1 v5259 = (i1)+2;
	i8 v5260 = (i8)(intptr_t)c02_s00c6;
	i8 v5261 = (i8)(intptr_t)(ws+3208);
	i8 v5262 = *(i8*)(intptr_t)v5261;
	i4 v5263 = *(i4*)(intptr_t)v5262;
	f231_Op2VCSigned(v5263, v5260, v5259);

endsub:;
}
const i1 c02_s00c7[] = { 0x25,0 };

// emit_27 workspace at ws+3248 length ws+0
void f271_emit_27(void) {

	i1 v5264 = (i1)+4;
	i8 v5265 = (i8)(intptr_t)c02_s00c7;
	i8 v5266 = (i8)(intptr_t)(ws+3208);
	i8 v5267 = *(i8*)(intptr_t)v5266;
	i4 v5268 = *(i4*)(intptr_t)v5267;
	f231_Op2VCSigned(v5268, v5265, v5264);

endsub:;
}
const i1 c02_s00c8[] = { 0x25,0 };

// emit_28 workspace at ws+3248 length ws+0
void f272_emit_28(void) {

	i1 v5269 = (i1)+8;
	i8 v5270 = (i8)(intptr_t)c02_s00c8;
	i8 v5271 = (i8)(intptr_t)(ws+3208);
	i8 v5272 = *(i8*)(intptr_t)v5271;
	i4 v5273 = *(i4*)(intptr_t)v5272;
	f231_Op2VCSigned(v5273, v5270, v5269);

endsub:;
}
const i1 c02_s00c9[] = { 0x26,0 };

// emit_29 workspace at ws+3248 length ws+0
void f273_emit_29(void) {

	i1 v5274 = (i1)+1;
	i8 v5275 = (i8)(intptr_t)c02_s00c9;
	i8 v5276 = (i8)(intptr_t)(ws+3208);
	i8 v5277 = *(i8*)(intptr_t)v5276;
	i4 v5278 = *(i4*)(intptr_t)v5277;
	f229_Op2VC(v5278, v5275, v5274);

endsub:;
}
const i1 c02_s00ca[] = { 0x26,0 };

// emit_30 workspace at ws+3248 length ws+0
void f274_emit_30(void) {

	i1 v5279 = (i1)+2;
	i8 v5280 = (i8)(intptr_t)c02_s00ca;
	i8 v5281 = (i8)(intptr_t)(ws+3208);
	i8 v5282 = *(i8*)(intptr_t)v5281;
	i4 v5283 = *(i4*)(intptr_t)v5282;
	f229_Op2VC(v5283, v5280, v5279);

endsub:;
}
const i1 c02_s00cb[] = { 0x26,0 };

// emit_31 workspace at ws+3248 length ws+0
void f275_emit_31(void) {

	i1 v5284 = (i1)+4;
	i8 v5285 = (i8)(intptr_t)c02_s00cb;
	i8 v5286 = (i8)(intptr_t)(ws+3208);
	i8 v5287 = *(i8*)(intptr_t)v5286;
	i4 v5288 = *(i4*)(intptr_t)v5287;
	f229_Op2VC(v5288, v5285, v5284);

endsub:;
}
const i1 c02_s00cc[] = { 0x26,0 };

// emit_32 workspace at ws+3248 length ws+0
void f276_emit_32(void) {

	i1 v5289 = (i1)+8;
	i8 v5290 = (i8)(intptr_t)c02_s00cc;
	i8 v5291 = (i8)(intptr_t)(ws+3208);
	i8 v5292 = *(i8*)(intptr_t)v5291;
	i4 v5293 = *(i4*)(intptr_t)v5292;
	f229_Op2VC(v5293, v5290, v5289);

endsub:;
}
const i1 c02_s00cd[] = { 0x7c,0 };

// emit_33 workspace at ws+3248 length ws+0
void f277_emit_33(void) {

	i1 v5294 = (i1)+1;
	i8 v5295 = (i8)(intptr_t)c02_s00cd;
	i8 v5296 = (i8)(intptr_t)(ws+3208);
	i8 v5297 = *(i8*)(intptr_t)v5296;
	i4 v5298 = *(i4*)(intptr_t)v5297;
	f229_Op2VC(v5298, v5295, v5294);

endsub:;
}
const i1 c02_s00ce[] = { 0x7c,0 };

// emit_34 workspace at ws+3248 length ws+0
void f278_emit_34(void) {

	i1 v5299 = (i1)+2;
	i8 v5300 = (i8)(intptr_t)c02_s00ce;
	i8 v5301 = (i8)(intptr_t)(ws+3208);
	i8 v5302 = *(i8*)(intptr_t)v5301;
	i4 v5303 = *(i4*)(intptr_t)v5302;
	f229_Op2VC(v5303, v5300, v5299);

endsub:;
}
const i1 c02_s00cf[] = { 0x7c,0 };

// emit_35 workspace at ws+3248 length ws+0
void f279_emit_35(void) {

	i1 v5304 = (i1)+4;
	i8 v5305 = (i8)(intptr_t)c02_s00cf;
	i8 v5306 = (i8)(intptr_t)(ws+3208);
	i8 v5307 = *(i8*)(intptr_t)v5306;
	i4 v5308 = *(i4*)(intptr_t)v5307;
	f229_Op2VC(v5308, v5305, v5304);

endsub:;
}
const i1 c02_s00d0[] = { 0x7c,0 };

// emit_36 workspace at ws+3248 length ws+0
void f280_emit_36(void) {

	i1 v5309 = (i1)+8;
	i8 v5310 = (i8)(intptr_t)c02_s00d0;
	i8 v5311 = (i8)(intptr_t)(ws+3208);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	i4 v5313 = *(i4*)(intptr_t)v5312;
	f229_Op2VC(v5313, v5310, v5309);

endsub:;
}
const i1 c02_s00d1[] = { 0x5e,0 };

// emit_37 workspace at ws+3248 length ws+0
void f281_emit_37(void) {

	i1 v5314 = (i1)+1;
	i8 v5315 = (i8)(intptr_t)c02_s00d1;
	i8 v5316 = (i8)(intptr_t)(ws+3208);
	i8 v5317 = *(i8*)(intptr_t)v5316;
	i4 v5318 = *(i4*)(intptr_t)v5317;
	f229_Op2VC(v5318, v5315, v5314);

endsub:;
}
const i1 c02_s00d2[] = { 0x5e,0 };

// emit_38 workspace at ws+3248 length ws+0
void f282_emit_38(void) {

	i1 v5319 = (i1)+2;
	i8 v5320 = (i8)(intptr_t)c02_s00d2;
	i8 v5321 = (i8)(intptr_t)(ws+3208);
	i8 v5322 = *(i8*)(intptr_t)v5321;
	i4 v5323 = *(i4*)(intptr_t)v5322;
	f229_Op2VC(v5323, v5320, v5319);

endsub:;
}
const i1 c02_s00d3[] = { 0x5e,0 };

// emit_39 workspace at ws+3248 length ws+0
void f283_emit_39(void) {

	i1 v5324 = (i1)+4;
	i8 v5325 = (i8)(intptr_t)c02_s00d3;
	i8 v5326 = (i8)(intptr_t)(ws+3208);
	i8 v5327 = *(i8*)(intptr_t)v5326;
	i4 v5328 = *(i4*)(intptr_t)v5327;
	f229_Op2VC(v5328, v5325, v5324);

endsub:;
}
const i1 c02_s00d4[] = { 0x5e,0 };

// emit_40 workspace at ws+3248 length ws+0
void f284_emit_40(void) {

	i1 v5329 = (i1)+8;
	i8 v5330 = (i8)(intptr_t)c02_s00d4;
	i8 v5331 = (i8)(intptr_t)(ws+3208);
	i8 v5332 = *(i8*)(intptr_t)v5331;
	i4 v5333 = *(i4*)(intptr_t)v5332;
	f229_Op2VC(v5333, v5330, v5329);

endsub:;
}
const i1 c02_s00d5[] = { 0x3a,0x3b,0x0a,0 };

// emit_43 workspace at ws+3248 length ws+0
void f285_emit_43(void) {

	i8 v5334 = (i8)(intptr_t)(ws+3176);
	i8 v5335 = *(i8*)(intptr_t)v5334;
	i2 v5336 = *(i2*)(intptr_t)v5335;
	f167_E_labelref(v5336);

	i8 v5337 = (i8)(intptr_t)c02_s00d5;
	f156_E(v5337);

endsub:;
}
const i1 c02_s00d6[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00d7[] = { 0x3b,0x0a,0 };

// emit_44 workspace at ws+3248 length ws+0
void f286_emit_44(void) {

	i8 v5338 = (i8)(intptr_t)c02_s00d6;
	f156_E(v5338);

	i8 v5339 = (i8)(intptr_t)(ws+3176);
	i8 v5340 = *(i8*)(intptr_t)v5339;
	i2 v5341 = *(i2*)(intptr_t)v5340;
	f167_E_labelref(v5341);

	i8 v5342 = (i8)(intptr_t)c02_s00d7;
	f156_E(v5342);

endsub:;
}
const i1 c02_s00d8[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };

// emit_45 workspace at ws+3248 length ws+0
void f287_emit_45(void) {

	i8 v5343 = (i8)(intptr_t)c02_s00d8;
	f156_E(v5343);

endsub:;
}
const i1 c02_s00d9[] = { 0x0a,0x2f,0x2f,0x20,0 };
const i1 c02_s00da[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
const i1 c02_s00db[] = { 0x30,0x30,0x30,0x30,0x30,0x30,0 };
const i1 c02_s00dc[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
const i1 c02_s00dd[] = { 0x30,0x30,0 };
const i1 c02_s00de[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
const i1 c02_s00df[] = { 0x28,0 };
const i1 c02_s00e0[] = { 0x2c,0x20,0 };

// comma workspace at ws+3272 length ws+0
void f289_comma(void) {

	i8 v5377 = (i8)(intptr_t)(ws+3248);
	i1 v5378 = *(i1*)(intptr_t)v5377;
	i1 v5379 = (i1)+0;
	if (v5378==v5379) goto c02_04a4; else goto c02_04a5;

c02_04a4:;

	i8 v5380 = (i8)(intptr_t)c02_s00e0;
	f156_E(v5380);

	goto c02_04a1;

c02_04a5:;

c02_04a1:;

	i1 v5381 = (i1)+0;
	i8 v5382 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5382 = v5381;

endsub:;
}
const i1 c02_s00e1[] = { 0x69,0 };
const i1 c02_s00e2[] = { 0x2a,0x20,0x70,0 };
const i1 c02_s00e3[] = { 0x20,0x2f,0x2a,0x20,0 };
const i1 c02_s00e4[] = { 0x20,0x2a,0x2f,0 };
const i1 c02_s00e5[] = { 0x69,0 };
const i1 c02_s00e6[] = { 0x20,0x70,0 };
const i1 c02_s00e7[] = { 0x20,0x2f,0x2a,0x20,0 };
const i1 c02_s00e8[] = { 0x20,0x2a,0x2f,0 };
const i1 c02_s00e9[] = { 0x76,0x6f,0x69,0x64,0 };
const i1 c02_s00ea[] = { 0x29,0x20,0x7b,0x0a,0 };
const i1 c02_s00eb[] = { 0x09,0x2a,0x28,0x69,0 };
const i1 c02_s00ec[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s00ed[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
const i1 c02_s00ee[] = { 0x3b,0x20,0x2f,0x2a,0 };
const i1 c02_s00ef[] = { 0x20,0x2a,0x2f,0x0a,0 };

// emit_46 workspace at ws+3248 length ws+18
void f288_emit_46(void) {

	f170_EmitterPushChunk();

	i8 v5344 = (i8)(intptr_t)(ws+3176);
	i8 v5345 = *(i8*)(intptr_t)v5344;
	i8 v5346 = *(i8*)(intptr_t)v5345;
	i8 v5347 = v5346+(+56);
	i2 v5348 = *(i2*)(intptr_t)v5347;
	f165_E_h16(v5348);

	i8 v5349 = (i8)(intptr_t)c02_s00d9;
	f156_E(v5349);

	i8 v5350 = (i8)(intptr_t)(ws+3176);
	i8 v5351 = *(i8*)(intptr_t)v5350;
	i8 v5352 = *(i8*)(intptr_t)v5351;
	i8 v5353 = *(i8*)(intptr_t)v5352;
	f156_E(v5353);

	i8 v5354 = (i8)(intptr_t)c02_s00da;
	f156_E(v5354);

	i1 v5355 = (i1)+2;
	f149_EmitByte(v5355);

	i8 v5356 = (i8)(intptr_t)(ws+3176);
	i8 v5357 = *(i8*)(intptr_t)v5356;
	i8 v5358 = *(i8*)(intptr_t)v5357;
	i8 v5359 = v5358+(+56);
	i2 v5360 = *(i2*)(intptr_t)v5359;
	f165_E_h16(v5360);

	i8 v5361 = (i8)(intptr_t)c02_s00db;
	f156_E(v5361);

	i8 v5362 = (i8)(intptr_t)c02_s00dc;
	f156_E(v5362);

	i1 v5363 = (i1)+5;
	f149_EmitByte(v5363);

	i8 v5364 = (i8)(intptr_t)(ws+3176);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	i8 v5366 = *(i8*)(intptr_t)v5365;
	i8 v5367 = v5366+(+56);
	i2 v5368 = *(i2*)(intptr_t)v5367;
	f165_E_h16(v5368);

	i8 v5369 = (i8)(intptr_t)c02_s00dd;
	f156_E(v5369);

	i8 v5370 = (i8)(intptr_t)c02_s00de;
	f156_E(v5370);

	i8 v5371 = (i8)(intptr_t)(ws+3176);
	i8 v5372 = *(i8*)(intptr_t)v5371;
	i8 v5373 = *(i8*)(intptr_t)v5372;
	f168_E_subref(v5373);

	i8 v5374 = (i8)(intptr_t)c02_s00df;
	f156_E(v5374);

	i1 v5375 = (i1)+1;
	i8 v5376 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5376 = v5375;


	i1 v5383 = (i1)+0;
	i8 v5384 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5384 = v5383;

c02_04a8:;

	i8 v5385 = (i8)(intptr_t)(ws+3249);
	i1 v5386 = *(i1*)(intptr_t)v5385;
	i8 v5387 = (i8)(intptr_t)(ws+3176);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i8 v5389 = *(i8*)(intptr_t)v5388;
	i8 v5390 = v5389+(+67);
	i1 v5391 = *(i1*)(intptr_t)v5390;
	if (v5386==v5391) goto c02_04ab; else goto c02_04aa;

c02_04aa:;

	i8 v5392 = (i8)(intptr_t)(ws+3176);
	i8 v5393 = *(i8*)(intptr_t)v5392;
	i8 v5394 = *(i8*)(intptr_t)v5393;
	i8 v5395 = (i8)(intptr_t)(ws+3249);
	i1 v5396 = *(i1*)(intptr_t)v5395;
	i8 v5397;
	f81_GetOutputParameter(&v5397, v5396, v5394);
	i8 v5398 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5398 = v5397;

	i2 v5399;
	f218_Push(&v5399);
	i8 v5400 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5400 = v5399;

	f289_comma();

	i8 v5401 = (i8)(intptr_t)c02_s00e1;
	f156_E(v5401);

	i8 v5402 = (i8)(intptr_t)(ws+3256);
	i8 v5403 = *(i8*)(intptr_t)v5402;
	i8 v5404 = *(i8*)(intptr_t)v5403;
	i8 v5405 = v5404+(+42);
	i2 v5406 = *(i2*)(intptr_t)v5405;
	i1 v5407 = v5406;
	f159_E_u8(v5407);

	i8 v5408 = (i8)(intptr_t)c02_s00e2;
	f156_E(v5408);

	i8 v5409 = (i8)(intptr_t)(ws+3264);
	i2 v5410 = *(i2*)(intptr_t)v5409;
	f158_E_u16(v5410);

	i8 v5411 = (i8)(intptr_t)c02_s00e3;
	f156_E(v5411);

	i8 v5412 = (i8)(intptr_t)(ws+3256);
	i8 v5413 = *(i8*)(intptr_t)v5412;
	i8 v5414 = v5413+(+48);
	i8 v5415 = *(i8*)(intptr_t)v5414;
	f156_E(v5415);

	i8 v5416 = (i8)(intptr_t)c02_s00e4;
	f156_E(v5416);

	i8 v5417 = (i8)(intptr_t)(ws+3249);
	i1 v5418 = *(i1*)(intptr_t)v5417;
	i1 v5419 = v5418+(+1);
	i8 v5420 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5420 = v5419;

	goto c02_04a8;

c02_04ab:;

	i8 v5421 = (i8)(intptr_t)(ws+3176);
	i8 v5422 = *(i8*)(intptr_t)v5421;
	i8 v5423 = *(i8*)(intptr_t)v5422;
	i8 v5424 = v5423+(+66);
	i1 v5425 = *(i1*)(intptr_t)v5424;
	i8 v5426 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5426 = v5425;

c02_04ae:;

	i8 v5427 = (i8)(intptr_t)(ws+3249);
	i1 v5428 = *(i1*)(intptr_t)v5427;
	i1 v5429 = (i1)+0;
	if (v5428==v5429) goto c02_04b1; else goto c02_04b0;

c02_04b0:;

	i8 v5430 = (i8)(intptr_t)(ws+3249);
	i1 v5431 = *(i1*)(intptr_t)v5430;
	i1 v5432 = v5431+(-1);
	i8 v5433 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5433 = v5432;

	i8 v5434 = (i8)(intptr_t)(ws+3176);
	i8 v5435 = *(i8*)(intptr_t)v5434;
	i8 v5436 = *(i8*)(intptr_t)v5435;
	i8 v5437 = (i8)(intptr_t)(ws+3249);
	i1 v5438 = *(i1*)(intptr_t)v5437;
	i8 v5439;
	f80_GetInputParameter(&v5439, v5438, v5436);
	i8 v5440 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5440 = v5439;

	i2 v5441;
	f218_Push(&v5441);
	i8 v5442 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5442 = v5441;

	f289_comma();

	i8 v5443 = (i8)(intptr_t)c02_s00e5;
	f156_E(v5443);

	i8 v5444 = (i8)(intptr_t)(ws+3256);
	i8 v5445 = *(i8*)(intptr_t)v5444;
	i8 v5446 = *(i8*)(intptr_t)v5445;
	i8 v5447 = v5446+(+42);
	i2 v5448 = *(i2*)(intptr_t)v5447;
	i1 v5449 = v5448;
	f159_E_u8(v5449);

	i8 v5450 = (i8)(intptr_t)c02_s00e6;
	f156_E(v5450);

	i8 v5451 = (i8)(intptr_t)(ws+3264);
	i2 v5452 = *(i2*)(intptr_t)v5451;
	f158_E_u16(v5452);

	i8 v5453 = (i8)(intptr_t)c02_s00e7;
	f156_E(v5453);

	i8 v5454 = (i8)(intptr_t)(ws+3256);
	i8 v5455 = *(i8*)(intptr_t)v5454;
	i8 v5456 = v5455+(+48);
	i8 v5457 = *(i8*)(intptr_t)v5456;
	f156_E(v5457);

	i8 v5458 = (i8)(intptr_t)c02_s00e8;
	f156_E(v5458);

	goto c02_04ae;

c02_04b1:;

	i8 v5459 = (i8)(intptr_t)(ws+3176);
	i8 v5460 = *(i8*)(intptr_t)v5459;
	i8 v5461 = *(i8*)(intptr_t)v5460;
	i8 v5462 = v5461+(+66);
	i1 v5463 = *(i1*)(intptr_t)v5462;
	i8 v5464 = (i8)(intptr_t)(ws+3176);
	i8 v5465 = *(i8*)(intptr_t)v5464;
	i8 v5466 = *(i8*)(intptr_t)v5465;
	i8 v5467 = v5466+(+67);
	i1 v5468 = *(i1*)(intptr_t)v5467;
	i1 v5469 = v5463+v5468;
	i1 v5470 = (i1)+0;
	if (v5469==v5470) goto c02_04b5; else goto c02_04b6;

c02_04b5:;

	i8 v5471 = (i8)(intptr_t)c02_s00e9;
	f156_E(v5471);

	goto c02_04b2;

c02_04b6:;

c02_04b2:;

	i8 v5472 = (i8)(intptr_t)c02_s00ea;
	f156_E(v5472);

	i1 v5473 = (i1)+0;
	i8 v5474 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5474 = v5473;

c02_04b9:;

	i8 v5475 = (i8)(intptr_t)(ws+3249);
	i1 v5476 = *(i1*)(intptr_t)v5475;
	i8 v5477 = (i8)(intptr_t)(ws+3176);
	i8 v5478 = *(i8*)(intptr_t)v5477;
	i8 v5479 = *(i8*)(intptr_t)v5478;
	i8 v5480 = v5479+(+66);
	i1 v5481 = *(i1*)(intptr_t)v5480;
	if (v5476==v5481) goto c02_04bc; else goto c02_04bb;

c02_04bb:;

	i8 v5482 = (i8)(intptr_t)(ws+3176);
	i8 v5483 = *(i8*)(intptr_t)v5482;
	i8 v5484 = *(i8*)(intptr_t)v5483;
	i8 v5485 = (i8)(intptr_t)(ws+3249);
	i1 v5486 = *(i1*)(intptr_t)v5485;
	i8 v5487;
	f80_GetInputParameter(&v5487, v5486, v5484);
	i8 v5488 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5488 = v5487;

	i2 v5489;
	f220_Pop(&v5489);
	i8 v5490 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5490 = v5489;

	i8 v5491 = (i8)(intptr_t)c02_s00eb;
	f156_E(v5491);

	i8 v5492 = (i8)(intptr_t)(ws+3256);
	i8 v5493 = *(i8*)(intptr_t)v5492;
	i8 v5494 = *(i8*)(intptr_t)v5493;
	i8 v5495 = v5494+(+42);
	i2 v5496 = *(i2*)(intptr_t)v5495;
	i1 v5497 = v5496;
	f159_E_u8(v5497);

	i8 v5498 = (i8)(intptr_t)c02_s00ec;
	f156_E(v5498);

	i8 v5499 = (i8)(intptr_t)(ws+3256);
	i8 v5500 = *(i8*)(intptr_t)v5499;
	i2 v5501 = (i2)+0;
	f214_E_symref(v5501, v5500);

	i8 v5502 = (i8)(intptr_t)c02_s00ed;
	f156_E(v5502);

	i8 v5503 = (i8)(intptr_t)(ws+3264);
	i2 v5504 = *(i2*)(intptr_t)v5503;
	f158_E_u16(v5504);

	i8 v5505 = (i8)(intptr_t)c02_s00ee;
	f156_E(v5505);

	i8 v5506 = (i8)(intptr_t)(ws+3256);
	i8 v5507 = *(i8*)(intptr_t)v5506;
	i8 v5508 = v5507+(+48);
	i8 v5509 = *(i8*)(intptr_t)v5508;
	f156_E(v5509);

	i8 v5510 = (i8)(intptr_t)c02_s00ef;
	f156_E(v5510);

	i8 v5511 = (i8)(intptr_t)(ws+3249);
	i1 v5512 = *(i1*)(intptr_t)v5511;
	i1 v5513 = v5512+(+1);
	i8 v5514 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5514 = v5513;

	goto c02_04b9;

c02_04bc:;

endsub:;
}
const i1 c02_s00f0[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
const i1 c02_s00f1[] = { 0x09,0x2a,0x70,0 };
const i1 c02_s00f2[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
const i1 c02_s00f3[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s00f4[] = { 0x29,0x3b,0x0a,0 };
const i1 c02_s00f5[] = { 0x7d,0x0a,0 };

// emit_47 workspace at ws+3248 length ws+18
void f290_emit_47(void) {

	i8 v5515 = (i8)(intptr_t)c02_s00f0;
	f156_E(v5515);

	i8 v5516 = (i8)(intptr_t)(ws+3176);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = *(i8*)(intptr_t)v5517;
	i8 v5519 = v5518+(+67);
	i1 v5520 = *(i1*)(intptr_t)v5519;
	i8 v5521 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5521 = v5520;

c02_04c0:;

	i8 v5522 = (i8)(intptr_t)(ws+3248);
	i1 v5523 = *(i1*)(intptr_t)v5522;
	i1 v5524 = (i1)+0;
	if (v5523==v5524) goto c02_04c3; else goto c02_04c2;

c02_04c2:;

	i8 v5525 = (i8)(intptr_t)(ws+3248);
	i1 v5526 = *(i1*)(intptr_t)v5525;
	i1 v5527 = v5526+(-1);
	i8 v5528 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5528 = v5527;

	i8 v5529 = (i8)(intptr_t)(ws+3176);
	i8 v5530 = *(i8*)(intptr_t)v5529;
	i8 v5531 = *(i8*)(intptr_t)v5530;
	i8 v5532 = (i8)(intptr_t)(ws+3248);
	i1 v5533 = *(i1*)(intptr_t)v5532;
	i8 v5534;
	f81_GetOutputParameter(&v5534, v5533, v5531);
	i8 v5535 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5535 = v5534;

	i2 v5536;
	f220_Pop(&v5536);
	i8 v5537 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5537 = v5536;

	i8 v5538 = (i8)(intptr_t)c02_s00f1;
	f156_E(v5538);

	i8 v5539 = (i8)(intptr_t)(ws+3264);
	i2 v5540 = *(i2*)(intptr_t)v5539;
	f158_E_u16(v5540);

	i8 v5541 = (i8)(intptr_t)c02_s00f2;
	f156_E(v5541);

	i8 v5542 = (i8)(intptr_t)(ws+3256);
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = *(i8*)(intptr_t)v5543;
	i8 v5545 = v5544+(+42);
	i2 v5546 = *(i2*)(intptr_t)v5545;
	i1 v5547 = v5546;
	f159_E_u8(v5547);

	i8 v5548 = (i8)(intptr_t)c02_s00f3;
	f156_E(v5548);

	i8 v5549 = (i8)(intptr_t)(ws+3256);
	i8 v5550 = *(i8*)(intptr_t)v5549;
	i2 v5551 = (i2)+0;
	f214_E_symref(v5551, v5550);

	i8 v5552 = (i8)(intptr_t)c02_s00f4;
	f156_E(v5552);

	goto c02_04c0;

c02_04c3:;

	i8 v5553 = (i8)(intptr_t)c02_s00f5;
	f156_E(v5553);

	i8 v5554 = (i8)(intptr_t)(ws+3176);
	i8 v5555 = *(i8*)(intptr_t)v5554;
	i8 v5556 = *(i8*)(intptr_t)v5555;
	i1 v5557 = (i1)+0;
	i8 v5558 = (i8)(intptr_t)(ws+3176);
	i8 v5559 = *(i8*)(intptr_t)v5558;
	i8 v5560 = *(i8*)(intptr_t)v5559;
	i8 v5561 = v5560+(+58);
	i2 v5562 = *(i2*)(intptr_t)v5561;
	f177_EmitterDeclareWorkspace(v5562, v5557, v5556);

	i1 v5563 = (i1)+83;
	f171_EmitterPopChunk(v5563);

endsub:;
}

// emit_57 workspace at ws+3248 length ws+0
void f291_emit_57(void) {

	i8 v5564 = (i8)(intptr_t)(ws+3176);
	i8 v5565 = *(i8*)(intptr_t)v5564;
	i8 v5566 = *(i8*)(intptr_t)v5565;
	f223_Call(v5566);

endsub:;
}

// emit_58 workspace at ws+3248 length ws+0
void f292_emit_58(void) {

	i8 v5567 = (i8)(intptr_t)(ws+3176);
	i8 v5568 = *(i8*)(intptr_t)v5567;
	i8 v5569 = *(i8*)(intptr_t)v5568;
	f223_Call(v5569);

endsub:;
}

// emit_59 workspace at ws+3248 length ws+0
void f293_emit_59(void) {

	i8 v5570 = (i8)(intptr_t)(ws+3176);
	i8 v5571 = *(i8*)(intptr_t)v5570;
	i8 v5572 = *(i8*)(intptr_t)v5571;
	f223_Call(v5572);

endsub:;
}

// emit_60 workspace at ws+3248 length ws+0
void f294_emit_60(void) {

	i8 v5573 = (i8)(intptr_t)(ws+3176);
	i8 v5574 = *(i8*)(intptr_t)v5573;
	i8 v5575 = *(i8*)(intptr_t)v5574;
	f223_Call(v5575);

endsub:;
}

// emit_61 workspace at ws+3248 length ws+0
void f295_emit_61(void) {

	i8 v5576 = (i8)(intptr_t)(ws+3176);
	i8 v5577 = *(i8*)(intptr_t)v5576;
	i8 v5578 = *(i8*)(intptr_t)v5577;
	f223_Call(v5578);

endsub:;
}

// emit_62 workspace at ws+3248 length ws+0
void f296_emit_62(void) {

	i1 v5579 = (i1)+1;
	i8 v5580 = (i8)(intptr_t)(ws+3176);
	i8 v5581 = *(i8*)(intptr_t)v5580;
	i4 v5582 = *(i4*)(intptr_t)v5581;
	f225_LoadConstant(v5582, v5579);

endsub:;
}

// emit_63 workspace at ws+3248 length ws+0
void f297_emit_63(void) {

	i1 v5583 = (i1)+2;
	i8 v5584 = (i8)(intptr_t)(ws+3176);
	i8 v5585 = *(i8*)(intptr_t)v5584;
	i4 v5586 = *(i4*)(intptr_t)v5585;
	f225_LoadConstant(v5586, v5583);

endsub:;
}

// emit_64 workspace at ws+3248 length ws+0
void f298_emit_64(void) {

	i1 v5587 = (i1)+4;
	i8 v5588 = (i8)(intptr_t)(ws+3176);
	i8 v5589 = *(i8*)(intptr_t)v5588;
	i4 v5590 = *(i4*)(intptr_t)v5589;
	f225_LoadConstant(v5590, v5587);

endsub:;
}

// emit_65 workspace at ws+3248 length ws+0
void f299_emit_65(void) {

	i1 v5591 = (i1)+8;
	i8 v5592 = (i8)(intptr_t)(ws+3176);
	i8 v5593 = *(i8*)(intptr_t)v5592;
	i4 v5594 = *(i4*)(intptr_t)v5593;
	f225_LoadConstant(v5594, v5591);

endsub:;
}
const i1 c02_s00f6[] = { 0x09,0x69,0x38,0x20,0x76,0 };
const i1 c02_s00f7[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s00f8[] = { 0x29,0x3b,0x0a,0 };

// emit_66 workspace at ws+3248 length ws+2
void f300_emit_66(void) {

	i2 v5595;
	f218_Push(&v5595);
	i8 v5596 = (i8)(intptr_t)(ws+3248);
	*(i2*)(intptr_t)v5596 = v5595;

	i8 v5597 = (i8)(intptr_t)c02_s00f6;
	f156_E(v5597);

	i8 v5598 = (i8)(intptr_t)(ws+3248);
	i2 v5599 = *(i2*)(intptr_t)v5598;
	f158_E_u16(v5599);

	i8 v5600 = (i8)(intptr_t)c02_s00f7;
	f156_E(v5600);

	i8 v5601 = (i8)(intptr_t)(ws+3176);
	i8 v5602 = *(i8*)(intptr_t)v5601;
	i8 v5603 = *(i8*)(intptr_t)v5602;
	i8 v5604 = (i8)(intptr_t)(ws+3176);
	i8 v5605 = *(i8*)(intptr_t)v5604;
	i8 v5606 = v5605+(+8);
	i2 v5607 = *(i2*)(intptr_t)v5606;
	f214_E_symref(v5607, v5603);

	i8 v5608 = (i8)(intptr_t)c02_s00f8;
	f156_E(v5608);

endsub:;
}

// emit_67 workspace at ws+3248 length ws+0
void f301_emit_67(void) {

	i1 v5609 = (i1)+1;
	f226_StoreVV(v5609);

endsub:;
}

// emit_68 workspace at ws+3248 length ws+0
void f302_emit_68(void) {

	i1 v5610 = (i1)+2;
	f226_StoreVV(v5610);

endsub:;
}

// emit_69 workspace at ws+3248 length ws+0
void f303_emit_69(void) {

	i1 v5611 = (i1)+4;
	f226_StoreVV(v5611);

endsub:;
}

// emit_70 workspace at ws+3248 length ws+0
void f304_emit_70(void) {

	i1 v5612 = (i1)+8;
	f226_StoreVV(v5612);

endsub:;
}

// emit_71 workspace at ws+3248 length ws+0
void f305_emit_71(void) {

	i1 v5613 = (i1)+1;
	f227_LoadVV(v5613);

endsub:;
}

// emit_72 workspace at ws+3248 length ws+0
void f306_emit_72(void) {

	i1 v5614 = (i1)+2;
	f227_LoadVV(v5614);

endsub:;
}

// emit_73 workspace at ws+3248 length ws+0
void f307_emit_73(void) {

	i1 v5615 = (i1)+4;
	f227_LoadVV(v5615);

endsub:;
}

// emit_74 workspace at ws+3248 length ws+0
void f308_emit_74(void) {

	i1 v5616 = (i1)+8;
	f227_LoadVV(v5616);

endsub:;
}
const i1 c02_s00f9[] = { 0x2b,0 };

// emit_75 workspace at ws+3248 length ws+0
void f309_emit_75(void) {

	i1 v5617 = (i1)+1;
	i8 v5618 = (i8)(intptr_t)c02_s00f9;
	f228_Op2VV(v5618, v5617);

endsub:;
}
const i1 c02_s00fa[] = { 0x2b,0 };

// emit_76 workspace at ws+3248 length ws+0
void f310_emit_76(void) {

	i1 v5619 = (i1)+2;
	i8 v5620 = (i8)(intptr_t)c02_s00fa;
	f228_Op2VV(v5620, v5619);

endsub:;
}
const i1 c02_s00fb[] = { 0x2b,0 };

// emit_77 workspace at ws+3248 length ws+0
void f311_emit_77(void) {

	i1 v5621 = (i1)+4;
	i8 v5622 = (i8)(intptr_t)c02_s00fb;
	f228_Op2VV(v5622, v5621);

endsub:;
}
const i1 c02_s00fc[] = { 0x2b,0 };

// emit_78 workspace at ws+3248 length ws+0
void f312_emit_78(void) {

	i1 v5623 = (i1)+8;
	i8 v5624 = (i8)(intptr_t)c02_s00fc;
	f228_Op2VV(v5624, v5623);

endsub:;
}
const i1 c02_s00fd[] = { 0x2d,0 };

// emit_79 workspace at ws+3248 length ws+0
void f313_emit_79(void) {

	i1 v5625 = (i1)+1;
	i8 v5626 = (i8)(intptr_t)c02_s00fd;
	f228_Op2VV(v5626, v5625);

endsub:;
}
const i1 c02_s00fe[] = { 0x2d,0 };

// emit_80 workspace at ws+3248 length ws+0
void f314_emit_80(void) {

	i1 v5627 = (i1)+2;
	i8 v5628 = (i8)(intptr_t)c02_s00fe;
	f228_Op2VV(v5628, v5627);

endsub:;
}
const i1 c02_s00ff[] = { 0x2d,0 };

// emit_81 workspace at ws+3248 length ws+0
void f315_emit_81(void) {

	i1 v5629 = (i1)+4;
	i8 v5630 = (i8)(intptr_t)c02_s00ff;
	f228_Op2VV(v5630, v5629);

endsub:;
}
const i1 c02_s0100[] = { 0x2d,0 };

// emit_82 workspace at ws+3248 length ws+0
void f316_emit_82(void) {

	i1 v5631 = (i1)+8;
	i8 v5632 = (i8)(intptr_t)c02_s0100;
	f228_Op2VV(v5632, v5631);

endsub:;
}
const i1 c02_s0101[] = { 0x2a,0 };

// emit_83 workspace at ws+3248 length ws+0
void f317_emit_83(void) {

	i1 v5633 = (i1)+1;
	i8 v5634 = (i8)(intptr_t)c02_s0101;
	f228_Op2VV(v5634, v5633);

endsub:;
}
const i1 c02_s0102[] = { 0x2a,0 };

// emit_84 workspace at ws+3248 length ws+0
void f318_emit_84(void) {

	i1 v5635 = (i1)+2;
	i8 v5636 = (i8)(intptr_t)c02_s0102;
	f228_Op2VV(v5636, v5635);

endsub:;
}
const i1 c02_s0103[] = { 0x2a,0 };

// emit_85 workspace at ws+3248 length ws+0
void f319_emit_85(void) {

	i1 v5637 = (i1)+4;
	i8 v5638 = (i8)(intptr_t)c02_s0103;
	f228_Op2VV(v5638, v5637);

endsub:;
}
const i1 c02_s0104[] = { 0x2a,0 };

// emit_86 workspace at ws+3248 length ws+0
void f320_emit_86(void) {

	i1 v5639 = (i1)+8;
	i8 v5640 = (i8)(intptr_t)c02_s0104;
	f228_Op2VV(v5640, v5639);

endsub:;
}
const i1 c02_s0105[] = { 0x2f,0 };

// emit_87 workspace at ws+3248 length ws+0
void f321_emit_87(void) {

	i1 v5641 = (i1)+1;
	i8 v5642 = (i8)(intptr_t)c02_s0105;
	f228_Op2VV(v5642, v5641);

endsub:;
}
const i1 c02_s0106[] = { 0x2f,0 };

// emit_88 workspace at ws+3248 length ws+0
void f322_emit_88(void) {

	i1 v5643 = (i1)+2;
	i8 v5644 = (i8)(intptr_t)c02_s0106;
	f228_Op2VV(v5644, v5643);

endsub:;
}
const i1 c02_s0107[] = { 0x2f,0 };

// emit_89 workspace at ws+3248 length ws+0
void f323_emit_89(void) {

	i1 v5645 = (i1)+4;
	i8 v5646 = (i8)(intptr_t)c02_s0107;
	f228_Op2VV(v5646, v5645);

endsub:;
}
const i1 c02_s0108[] = { 0x2f,0 };

// emit_90 workspace at ws+3248 length ws+0
void f324_emit_90(void) {

	i1 v5647 = (i1)+8;
	i8 v5648 = (i8)(intptr_t)c02_s0108;
	f228_Op2VV(v5648, v5647);

endsub:;
}
const i1 c02_s0109[] = { 0x25,0 };

// emit_91 workspace at ws+3248 length ws+0
void f325_emit_91(void) {

	i1 v5649 = (i1)+1;
	i8 v5650 = (i8)(intptr_t)c02_s0109;
	f228_Op2VV(v5650, v5649);

endsub:;
}
const i1 c02_s010a[] = { 0x25,0 };

// emit_92 workspace at ws+3248 length ws+0
void f326_emit_92(void) {

	i1 v5651 = (i1)+2;
	i8 v5652 = (i8)(intptr_t)c02_s010a;
	f228_Op2VV(v5652, v5651);

endsub:;
}
const i1 c02_s010b[] = { 0x25,0 };

// emit_93 workspace at ws+3248 length ws+0
void f327_emit_93(void) {

	i1 v5653 = (i1)+4;
	i8 v5654 = (i8)(intptr_t)c02_s010b;
	f228_Op2VV(v5654, v5653);

endsub:;
}
const i1 c02_s010c[] = { 0x25,0 };

// emit_94 workspace at ws+3248 length ws+0
void f328_emit_94(void) {

	i1 v5655 = (i1)+8;
	i8 v5656 = (i8)(intptr_t)c02_s010c;
	f228_Op2VV(v5656, v5655);

endsub:;
}
const i1 c02_s010d[] = { 0x2f,0 };

// emit_95 workspace at ws+3248 length ws+0
void f329_emit_95(void) {

	i1 v5657 = (i1)+1;
	i8 v5658 = (i8)(intptr_t)c02_s010d;
	f230_Op2VVSigned(v5658, v5657);

endsub:;
}
const i1 c02_s010e[] = { 0x2f,0 };

// emit_96 workspace at ws+3248 length ws+0
void f330_emit_96(void) {

	i1 v5659 = (i1)+2;
	i8 v5660 = (i8)(intptr_t)c02_s010e;
	f230_Op2VVSigned(v5660, v5659);

endsub:;
}
const i1 c02_s010f[] = { 0x2f,0 };

// emit_97 workspace at ws+3248 length ws+0
void f331_emit_97(void) {

	i1 v5661 = (i1)+4;
	i8 v5662 = (i8)(intptr_t)c02_s010f;
	f230_Op2VVSigned(v5662, v5661);

endsub:;
}
const i1 c02_s0110[] = { 0x2f,0 };

// emit_98 workspace at ws+3248 length ws+0
void f332_emit_98(void) {

	i1 v5663 = (i1)+8;
	i8 v5664 = (i8)(intptr_t)c02_s0110;
	f230_Op2VVSigned(v5664, v5663);

endsub:;
}
const i1 c02_s0111[] = { 0x25,0 };

// emit_99 workspace at ws+3248 length ws+0
void f333_emit_99(void) {

	i1 v5665 = (i1)+1;
	i8 v5666 = (i8)(intptr_t)c02_s0111;
	f230_Op2VVSigned(v5666, v5665);

endsub:;
}
const i1 c02_s0112[] = { 0x25,0 };

// emit_100 workspace at ws+3248 length ws+0
void f334_emit_100(void) {

	i1 v5667 = (i1)+2;
	i8 v5668 = (i8)(intptr_t)c02_s0112;
	f230_Op2VVSigned(v5668, v5667);

endsub:;
}
const i1 c02_s0113[] = { 0x25,0 };

// emit_101 workspace at ws+3248 length ws+0
void f335_emit_101(void) {

	i1 v5669 = (i1)+4;
	i8 v5670 = (i8)(intptr_t)c02_s0113;
	f230_Op2VVSigned(v5670, v5669);

endsub:;
}
const i1 c02_s0114[] = { 0x25,0 };

// emit_102 workspace at ws+3248 length ws+0
void f336_emit_102(void) {

	i1 v5671 = (i1)+8;
	i8 v5672 = (i8)(intptr_t)c02_s0114;
	f230_Op2VVSigned(v5672, v5671);

endsub:;
}
const i1 c02_s0115[] = { 0x26,0 };

// emit_103 workspace at ws+3248 length ws+0
void f337_emit_103(void) {

	i1 v5673 = (i1)+1;
	i8 v5674 = (i8)(intptr_t)c02_s0115;
	f228_Op2VV(v5674, v5673);

endsub:;
}
const i1 c02_s0116[] = { 0x26,0 };

// emit_104 workspace at ws+3248 length ws+0
void f338_emit_104(void) {

	i1 v5675 = (i1)+2;
	i8 v5676 = (i8)(intptr_t)c02_s0116;
	f228_Op2VV(v5676, v5675);

endsub:;
}
const i1 c02_s0117[] = { 0x26,0 };

// emit_105 workspace at ws+3248 length ws+0
void f339_emit_105(void) {

	i1 v5677 = (i1)+4;
	i8 v5678 = (i8)(intptr_t)c02_s0117;
	f228_Op2VV(v5678, v5677);

endsub:;
}
const i1 c02_s0118[] = { 0x26,0 };

// emit_106 workspace at ws+3248 length ws+0
void f340_emit_106(void) {

	i1 v5679 = (i1)+8;
	i8 v5680 = (i8)(intptr_t)c02_s0118;
	f228_Op2VV(v5680, v5679);

endsub:;
}
const i1 c02_s0119[] = { 0x7c,0 };

// emit_107 workspace at ws+3248 length ws+0
void f341_emit_107(void) {

	i1 v5681 = (i1)+1;
	i8 v5682 = (i8)(intptr_t)c02_s0119;
	f228_Op2VV(v5682, v5681);

endsub:;
}
const i1 c02_s011a[] = { 0x7c,0 };

// emit_108 workspace at ws+3248 length ws+0
void f342_emit_108(void) {

	i1 v5683 = (i1)+2;
	i8 v5684 = (i8)(intptr_t)c02_s011a;
	f228_Op2VV(v5684, v5683);

endsub:;
}
const i1 c02_s011b[] = { 0x7c,0 };

// emit_109 workspace at ws+3248 length ws+0
void f343_emit_109(void) {

	i1 v5685 = (i1)+4;
	i8 v5686 = (i8)(intptr_t)c02_s011b;
	f228_Op2VV(v5686, v5685);

endsub:;
}
const i1 c02_s011c[] = { 0x7c,0 };

// emit_110 workspace at ws+3248 length ws+0
void f344_emit_110(void) {

	i1 v5687 = (i1)+8;
	i8 v5688 = (i8)(intptr_t)c02_s011c;
	f228_Op2VV(v5688, v5687);

endsub:;
}
const i1 c02_s011d[] = { 0x5e,0 };

// emit_111 workspace at ws+3248 length ws+0
void f345_emit_111(void) {

	i1 v5689 = (i1)+1;
	i8 v5690 = (i8)(intptr_t)c02_s011d;
	f228_Op2VV(v5690, v5689);

endsub:;
}
const i1 c02_s011e[] = { 0x5e,0 };

// emit_112 workspace at ws+3248 length ws+0
void f346_emit_112(void) {

	i1 v5691 = (i1)+2;
	i8 v5692 = (i8)(intptr_t)c02_s011e;
	f228_Op2VV(v5692, v5691);

endsub:;
}
const i1 c02_s011f[] = { 0x5e,0 };

// emit_113 workspace at ws+3248 length ws+0
void f347_emit_113(void) {

	i1 v5693 = (i1)+4;
	i8 v5694 = (i8)(intptr_t)c02_s011f;
	f228_Op2VV(v5694, v5693);

endsub:;
}
const i1 c02_s0120[] = { 0x5e,0 };

// emit_114 workspace at ws+3248 length ws+0
void f348_emit_114(void) {

	i1 v5695 = (i1)+8;
	i8 v5696 = (i8)(intptr_t)c02_s0120;
	f228_Op2VV(v5696, v5695);

endsub:;
}
const i1 c02_s0121[] = { 0x2d,0 };

// emit_115 workspace at ws+3248 length ws+0
void f349_emit_115(void) {

	i1 v5697 = (i1)+1;
	i8 v5698 = (i8)(intptr_t)c02_s0121;
	f232_Op1V(v5698, v5697);

endsub:;
}
const i1 c02_s0122[] = { 0x2d,0 };

// emit_116 workspace at ws+3248 length ws+0
void f350_emit_116(void) {

	i1 v5699 = (i1)+2;
	i8 v5700 = (i8)(intptr_t)c02_s0122;
	f232_Op1V(v5700, v5699);

endsub:;
}
const i1 c02_s0123[] = { 0x2d,0 };

// emit_117 workspace at ws+3248 length ws+0
void f351_emit_117(void) {

	i1 v5701 = (i1)+4;
	i8 v5702 = (i8)(intptr_t)c02_s0123;
	f232_Op1V(v5702, v5701);

endsub:;
}
const i1 c02_s0124[] = { 0x2d,0 };

// emit_118 workspace at ws+3248 length ws+0
void f352_emit_118(void) {

	i1 v5703 = (i1)+8;
	i8 v5704 = (i8)(intptr_t)c02_s0124;
	f232_Op1V(v5704, v5703);

endsub:;
}
const i1 c02_s0125[] = { 0x7e,0 };

// emit_119 workspace at ws+3248 length ws+0
void f353_emit_119(void) {

	i1 v5705 = (i1)+1;
	i8 v5706 = (i8)(intptr_t)c02_s0125;
	f232_Op1V(v5706, v5705);

endsub:;
}
const i1 c02_s0126[] = { 0x7e,0 };

// emit_120 workspace at ws+3248 length ws+0
void f354_emit_120(void) {

	i1 v5707 = (i1)+2;
	i8 v5708 = (i8)(intptr_t)c02_s0126;
	f232_Op1V(v5708, v5707);

endsub:;
}
const i1 c02_s0127[] = { 0x7e,0 };

// emit_121 workspace at ws+3248 length ws+0
void f355_emit_121(void) {

	i1 v5709 = (i1)+4;
	i8 v5710 = (i8)(intptr_t)c02_s0127;
	f232_Op1V(v5710, v5709);

endsub:;
}
const i1 c02_s0128[] = { 0x7e,0 };

// emit_122 workspace at ws+3248 length ws+0
void f356_emit_122(void) {

	i1 v5711 = (i1)+8;
	i8 v5712 = (i8)(intptr_t)c02_s0128;
	f232_Op1V(v5712, v5711);

endsub:;
}
const i1 c02_s0129[] = { 0x69,0x31,0 };
const i1 c02_s012a[] = { 0x3c,0x3c,0 };

// emit_123 workspace at ws+3248 length ws+0
void f357_emit_123(void) {

	i1 v5713 = (i1)+1;
	i8 v5714 = (i8)(intptr_t)c02_s0129;
	i8 v5715 = (i8)(intptr_t)c02_s012a;
	f233_Shift(v5715, v5714, v5713);

endsub:;
}
const i1 c02_s012b[] = { 0x69,0x32,0 };
const i1 c02_s012c[] = { 0x3c,0x3c,0 };

// emit_124 workspace at ws+3248 length ws+0
void f358_emit_124(void) {

	i1 v5716 = (i1)+2;
	i8 v5717 = (i8)(intptr_t)c02_s012b;
	i8 v5718 = (i8)(intptr_t)c02_s012c;
	f233_Shift(v5718, v5717, v5716);

endsub:;
}
const i1 c02_s012d[] = { 0x69,0x34,0 };
const i1 c02_s012e[] = { 0x3c,0x3c,0 };

// emit_125 workspace at ws+3248 length ws+0
void f359_emit_125(void) {

	i1 v5719 = (i1)+4;
	i8 v5720 = (i8)(intptr_t)c02_s012d;
	i8 v5721 = (i8)(intptr_t)c02_s012e;
	f233_Shift(v5721, v5720, v5719);

endsub:;
}
const i1 c02_s012f[] = { 0x69,0x38,0 };
const i1 c02_s0130[] = { 0x3c,0x3c,0 };

// emit_126 workspace at ws+3248 length ws+0
void f360_emit_126(void) {

	i1 v5722 = (i1)+8;
	i8 v5723 = (i8)(intptr_t)c02_s012f;
	i8 v5724 = (i8)(intptr_t)c02_s0130;
	f233_Shift(v5724, v5723, v5722);

endsub:;
}
const i1 c02_s0131[] = { 0x69,0x31,0 };
const i1 c02_s0132[] = { 0x3e,0x3e,0 };

// emit_127 workspace at ws+3248 length ws+0
void f361_emit_127(void) {

	i1 v5725 = (i1)+1;
	i8 v5726 = (i8)(intptr_t)c02_s0131;
	i8 v5727 = (i8)(intptr_t)c02_s0132;
	f233_Shift(v5727, v5726, v5725);

endsub:;
}
const i1 c02_s0133[] = { 0x69,0x32,0 };
const i1 c02_s0134[] = { 0x3e,0x3e,0 };

// emit_128 workspace at ws+3248 length ws+0
void f362_emit_128(void) {

	i1 v5728 = (i1)+2;
	i8 v5729 = (i8)(intptr_t)c02_s0133;
	i8 v5730 = (i8)(intptr_t)c02_s0134;
	f233_Shift(v5730, v5729, v5728);

endsub:;
}
const i1 c02_s0135[] = { 0x69,0x34,0 };
const i1 c02_s0136[] = { 0x3e,0x3e,0 };

// emit_129 workspace at ws+3248 length ws+0
void f363_emit_129(void) {

	i1 v5731 = (i1)+4;
	i8 v5732 = (i8)(intptr_t)c02_s0135;
	i8 v5733 = (i8)(intptr_t)c02_s0136;
	f233_Shift(v5733, v5732, v5731);

endsub:;
}
const i1 c02_s0137[] = { 0x69,0x38,0 };
const i1 c02_s0138[] = { 0x3e,0x3e,0 };

// emit_130 workspace at ws+3248 length ws+0
void f364_emit_130(void) {

	i1 v5734 = (i1)+8;
	i8 v5735 = (i8)(intptr_t)c02_s0137;
	i8 v5736 = (i8)(intptr_t)c02_s0138;
	f233_Shift(v5736, v5735, v5734);

endsub:;
}
const i1 c02_s0139[] = { 0x73,0x31,0 };
const i1 c02_s013a[] = { 0x3e,0x3e,0 };

// emit_131 workspace at ws+3248 length ws+0
void f365_emit_131(void) {

	i1 v5737 = (i1)+1;
	i8 v5738 = (i8)(intptr_t)c02_s0139;
	i8 v5739 = (i8)(intptr_t)c02_s013a;
	f233_Shift(v5739, v5738, v5737);

endsub:;
}
const i1 c02_s013b[] = { 0x73,0x32,0 };
const i1 c02_s013c[] = { 0x3e,0x3e,0 };

// emit_132 workspace at ws+3248 length ws+0
void f366_emit_132(void) {

	i1 v5740 = (i1)+2;
	i8 v5741 = (i8)(intptr_t)c02_s013b;
	i8 v5742 = (i8)(intptr_t)c02_s013c;
	f233_Shift(v5742, v5741, v5740);

endsub:;
}
const i1 c02_s013d[] = { 0x73,0x34,0 };
const i1 c02_s013e[] = { 0x3e,0x3e,0 };

// emit_133 workspace at ws+3248 length ws+0
void f367_emit_133(void) {

	i1 v5743 = (i1)+4;
	i8 v5744 = (i8)(intptr_t)c02_s013d;
	i8 v5745 = (i8)(intptr_t)c02_s013e;
	f233_Shift(v5745, v5744, v5743);

endsub:;
}
const i1 c02_s013f[] = { 0x73,0x38,0 };
const i1 c02_s0140[] = { 0x3e,0x3e,0 };

// emit_134 workspace at ws+3248 length ws+0
void f368_emit_134(void) {

	i1 v5746 = (i1)+8;
	i8 v5747 = (i8)(intptr_t)c02_s013f;
	i8 v5748 = (i8)(intptr_t)c02_s0140;
	f233_Shift(v5748, v5747, v5746);

endsub:;
}
const i1 c02_s0141[] = { 0x3d,0x3d,0 };

// emit_135 workspace at ws+3248 length ws+0
void f369_emit_135(void) {

	i8 v5749 = (i8)(intptr_t)(ws+3168);
	i8 v5750 = *(i8*)(intptr_t)v5749;
	i8 v5751 = v5750+(+16);
	i8 v5752 = *(i8*)(intptr_t)v5751;
	i8 v5753 = (i8)(intptr_t)c02_s0141;
	f234_Branch(v5753, v5752);

endsub:;
}
const i1 c02_s0142[] = { 0x3d,0x3d,0 };

// emit_136 workspace at ws+3248 length ws+0
void f370_emit_136(void) {

	i8 v5754 = (i8)(intptr_t)(ws+3168);
	i8 v5755 = *(i8*)(intptr_t)v5754;
	i8 v5756 = v5755+(+16);
	i8 v5757 = *(i8*)(intptr_t)v5756;
	i8 v5758 = (i8)(intptr_t)c02_s0142;
	f234_Branch(v5758, v5757);

endsub:;
}
const i1 c02_s0143[] = { 0x3d,0x3d,0 };

// emit_137 workspace at ws+3248 length ws+0
void f371_emit_137(void) {

	i8 v5759 = (i8)(intptr_t)(ws+3168);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = v5760+(+16);
	i8 v5762 = *(i8*)(intptr_t)v5761;
	i8 v5763 = (i8)(intptr_t)c02_s0143;
	f234_Branch(v5763, v5762);

endsub:;
}
const i1 c02_s0144[] = { 0x3d,0x3d,0 };

// emit_138 workspace at ws+3248 length ws+0
void f372_emit_138(void) {

	i8 v5764 = (i8)(intptr_t)(ws+3168);
	i8 v5765 = *(i8*)(intptr_t)v5764;
	i8 v5766 = v5765+(+16);
	i8 v5767 = *(i8*)(intptr_t)v5766;
	i8 v5768 = (i8)(intptr_t)c02_s0144;
	f234_Branch(v5768, v5767);

endsub:;
}
const i1 c02_s0145[] = { 0x3c,0 };

// emit_139 workspace at ws+3248 length ws+0
void f373_emit_139(void) {

	i8 v5769 = (i8)(intptr_t)(ws+3168);
	i8 v5770 = *(i8*)(intptr_t)v5769;
	i8 v5771 = v5770+(+16);
	i8 v5772 = *(i8*)(intptr_t)v5771;
	i8 v5773 = (i8)(intptr_t)c02_s0145;
	f234_Branch(v5773, v5772);

endsub:;
}
const i1 c02_s0146[] = { 0x3c,0 };

// emit_140 workspace at ws+3248 length ws+0
void f374_emit_140(void) {

	i8 v5774 = (i8)(intptr_t)(ws+3168);
	i8 v5775 = *(i8*)(intptr_t)v5774;
	i8 v5776 = v5775+(+16);
	i8 v5777 = *(i8*)(intptr_t)v5776;
	i8 v5778 = (i8)(intptr_t)c02_s0146;
	f234_Branch(v5778, v5777);

endsub:;
}
const i1 c02_s0147[] = { 0x3c,0 };

// emit_141 workspace at ws+3248 length ws+0
void f375_emit_141(void) {

	i8 v5779 = (i8)(intptr_t)(ws+3168);
	i8 v5780 = *(i8*)(intptr_t)v5779;
	i8 v5781 = v5780+(+16);
	i8 v5782 = *(i8*)(intptr_t)v5781;
	i8 v5783 = (i8)(intptr_t)c02_s0147;
	f234_Branch(v5783, v5782);

endsub:;
}
const i1 c02_s0148[] = { 0x3c,0 };

// emit_142 workspace at ws+3248 length ws+0
void f376_emit_142(void) {

	i8 v5784 = (i8)(intptr_t)(ws+3168);
	i8 v5785 = *(i8*)(intptr_t)v5784;
	i8 v5786 = v5785+(+16);
	i8 v5787 = *(i8*)(intptr_t)v5786;
	i8 v5788 = (i8)(intptr_t)c02_s0148;
	f234_Branch(v5788, v5787);

endsub:;
}
const i1 c02_s0149[] = { 0x3c,0 };

// emit_143 workspace at ws+3248 length ws+0
void f377_emit_143(void) {

	i8 v5789 = (i8)(intptr_t)(ws+3168);
	i8 v5790 = *(i8*)(intptr_t)v5789;
	i8 v5791 = v5790+(+16);
	i8 v5792 = *(i8*)(intptr_t)v5791;
	i1 v5793 = (i1)+1;
	i8 v5794 = (i8)(intptr_t)c02_s0149;
	f235_BranchSigned(v5794, v5793, v5792);

endsub:;
}
const i1 c02_s014a[] = { 0x3c,0 };

// emit_144 workspace at ws+3248 length ws+0
void f378_emit_144(void) {

	i8 v5795 = (i8)(intptr_t)(ws+3168);
	i8 v5796 = *(i8*)(intptr_t)v5795;
	i8 v5797 = v5796+(+16);
	i8 v5798 = *(i8*)(intptr_t)v5797;
	i1 v5799 = (i1)+2;
	i8 v5800 = (i8)(intptr_t)c02_s014a;
	f235_BranchSigned(v5800, v5799, v5798);

endsub:;
}
const i1 c02_s014b[] = { 0x3c,0 };

// emit_145 workspace at ws+3248 length ws+0
void f379_emit_145(void) {

	i8 v5801 = (i8)(intptr_t)(ws+3168);
	i8 v5802 = *(i8*)(intptr_t)v5801;
	i8 v5803 = v5802+(+16);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i1 v5805 = (i1)+4;
	i8 v5806 = (i8)(intptr_t)c02_s014b;
	f235_BranchSigned(v5806, v5805, v5804);

endsub:;
}
const i1 c02_s014c[] = { 0x3c,0 };

// emit_146 workspace at ws+3248 length ws+0
void f380_emit_146(void) {

	i8 v5807 = (i8)(intptr_t)(ws+3168);
	i8 v5808 = *(i8*)(intptr_t)v5807;
	i8 v5809 = v5808+(+16);
	i8 v5810 = *(i8*)(intptr_t)v5809;
	i1 v5811 = (i1)+8;
	i8 v5812 = (i8)(intptr_t)c02_s014c;
	f235_BranchSigned(v5812, v5811, v5810);

endsub:;
}

// emit_151 workspace at ws+3248 length ws+0
void f381_emit_151(void) {

	i8 v5813 = (i8)(intptr_t)(ws+3176);
	i8 v5814 = *(i8*)(intptr_t)v5813;
	i4 v5815 = *(i4*)(intptr_t)v5814;
	i4 v5816 = v5815&(+255);
	i8 v5817 = (i8)(intptr_t)(ws+3176);
	i8 v5818 = *(i8*)(intptr_t)v5817;
	i8 v5819 = v5818+(+4);
	i2 v5820 = *(i2*)(intptr_t)v5819;
	f237_Whencase(v5820, v5816);

endsub:;
}

// emit_152 workspace at ws+3248 length ws+0
void f382_emit_152(void) {

	i8 v5821 = (i8)(intptr_t)(ws+3176);
	i8 v5822 = *(i8*)(intptr_t)v5821;
	i4 v5823 = *(i4*)(intptr_t)v5822;
	i4 v5824 = v5823&(+65535);
	i8 v5825 = (i8)(intptr_t)(ws+3176);
	i8 v5826 = *(i8*)(intptr_t)v5825;
	i8 v5827 = v5826+(+4);
	i2 v5828 = *(i2*)(intptr_t)v5827;
	f237_Whencase(v5828, v5824);

endsub:;
}

// emit_153 workspace at ws+3248 length ws+0
void f383_emit_153(void) {

	i8 v5829 = (i8)(intptr_t)(ws+3176);
	i8 v5830 = *(i8*)(intptr_t)v5829;
	i4 v5831 = *(i4*)(intptr_t)v5830;
	i4 v5832 = v5831&(-1);
	i8 v5833 = (i8)(intptr_t)(ws+3176);
	i8 v5834 = *(i8*)(intptr_t)v5833;
	i8 v5835 = v5834+(+4);
	i2 v5836 = *(i2*)(intptr_t)v5835;
	f237_Whencase(v5836, v5832);

endsub:;
}

// emit_154 workspace at ws+3248 length ws+0
void f384_emit_154(void) {

	i8 v5837 = (i8)(intptr_t)(ws+3176);
	i8 v5838 = *(i8*)(intptr_t)v5837;
	i4 v5839 = *(i4*)(intptr_t)v5838;
	i8 v5840 = (i8)(intptr_t)(ws+3176);
	i8 v5841 = *(i8*)(intptr_t)v5840;
	i8 v5842 = v5841+(+4);
	i2 v5843 = *(i2*)(intptr_t)v5842;
	f237_Whencase(v5843, v5839);

endsub:;
}

// emit_155 workspace at ws+3248 length ws+0
void f385_emit_155(void) {

	i8 v5844 = (i8)(intptr_t)(ws+1192);
	i1 v5845 = *(i1*)(intptr_t)v5844;
	i1 v5846 = v5845+(-1);
	i8 v5847 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5847 = v5846;

endsub:;
}

// emit_156 workspace at ws+3248 length ws+0
void f386_emit_156(void) {

	i8 v5848 = (i8)(intptr_t)(ws+1192);
	i1 v5849 = *(i1*)(intptr_t)v5848;
	i1 v5850 = v5849+(-1);
	i8 v5851 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5851 = v5850;

endsub:;
}

// emit_157 workspace at ws+3248 length ws+0
void f387_emit_157(void) {

	i8 v5852 = (i8)(intptr_t)(ws+1192);
	i1 v5853 = *(i1*)(intptr_t)v5852;
	i1 v5854 = v5853+(-1);
	i8 v5855 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5855 = v5854;

endsub:;
}

// emit_158 workspace at ws+3248 length ws+0
void f388_emit_158(void) {

	i8 v5856 = (i8)(intptr_t)(ws+1192);
	i1 v5857 = *(i1*)(intptr_t)v5856;
	i1 v5858 = v5857+(-1);
	i8 v5859 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5859 = v5858;

endsub:;
}

// emit_159 workspace at ws+3248 length ws+0
void f389_emit_159(void) {

	i1 v5860 = (i1)+1;
	i1 v5861 = (i1)+2;
	i8 v5862 = (i8)(intptr_t)(ws+3176);
	i8 v5863 = *(i8*)(intptr_t)v5862;
	i1 v5864 = *(i1*)(intptr_t)v5863;
	f238_Cast(v5864, v5861, v5860);

endsub:;
}

// emit_160 workspace at ws+3248 length ws+0
void f390_emit_160(void) {

	i1 v5865 = (i1)+1;
	i1 v5866 = (i1)+4;
	i8 v5867 = (i8)(intptr_t)(ws+3176);
	i8 v5868 = *(i8*)(intptr_t)v5867;
	i1 v5869 = *(i1*)(intptr_t)v5868;
	f238_Cast(v5869, v5866, v5865);

endsub:;
}

// emit_161 workspace at ws+3248 length ws+0
void f391_emit_161(void) {

	i1 v5870 = (i1)+1;
	i1 v5871 = (i1)+8;
	i8 v5872 = (i8)(intptr_t)(ws+3176);
	i8 v5873 = *(i8*)(intptr_t)v5872;
	i1 v5874 = *(i1*)(intptr_t)v5873;
	f238_Cast(v5874, v5871, v5870);

endsub:;
}

// emit_162 workspace at ws+3248 length ws+0
void f392_emit_162(void) {

	i1 v5875 = (i1)+2;
	i1 v5876 = (i1)+1;
	i8 v5877 = (i8)(intptr_t)(ws+3176);
	i8 v5878 = *(i8*)(intptr_t)v5877;
	i1 v5879 = *(i1*)(intptr_t)v5878;
	f238_Cast(v5879, v5876, v5875);

endsub:;
}

// emit_163 workspace at ws+3248 length ws+0
void f393_emit_163(void) {

	i1 v5880 = (i1)+2;
	i1 v5881 = (i1)+4;
	i8 v5882 = (i8)(intptr_t)(ws+3176);
	i8 v5883 = *(i8*)(intptr_t)v5882;
	i1 v5884 = *(i1*)(intptr_t)v5883;
	f238_Cast(v5884, v5881, v5880);

endsub:;
}

// emit_164 workspace at ws+3248 length ws+0
void f394_emit_164(void) {

	i1 v5885 = (i1)+2;
	i1 v5886 = (i1)+8;
	i8 v5887 = (i8)(intptr_t)(ws+3176);
	i8 v5888 = *(i8*)(intptr_t)v5887;
	i1 v5889 = *(i1*)(intptr_t)v5888;
	f238_Cast(v5889, v5886, v5885);

endsub:;
}

// emit_165 workspace at ws+3248 length ws+0
void f395_emit_165(void) {

	i1 v5890 = (i1)+4;
	i1 v5891 = (i1)+1;
	i8 v5892 = (i8)(intptr_t)(ws+3176);
	i8 v5893 = *(i8*)(intptr_t)v5892;
	i1 v5894 = *(i1*)(intptr_t)v5893;
	f238_Cast(v5894, v5891, v5890);

endsub:;
}

// emit_166 workspace at ws+3248 length ws+0
void f396_emit_166(void) {

	i1 v5895 = (i1)+4;
	i1 v5896 = (i1)+2;
	i8 v5897 = (i8)(intptr_t)(ws+3176);
	i8 v5898 = *(i8*)(intptr_t)v5897;
	i1 v5899 = *(i1*)(intptr_t)v5898;
	f238_Cast(v5899, v5896, v5895);

endsub:;
}

// emit_167 workspace at ws+3248 length ws+0
void f397_emit_167(void) {

	i1 v5900 = (i1)+4;
	i1 v5901 = (i1)+8;
	i8 v5902 = (i8)(intptr_t)(ws+3176);
	i8 v5903 = *(i8*)(intptr_t)v5902;
	i1 v5904 = *(i1*)(intptr_t)v5903;
	f238_Cast(v5904, v5901, v5900);

endsub:;
}

// emit_168 workspace at ws+3248 length ws+0
void f398_emit_168(void) {

	i1 v5905 = (i1)+8;
	i1 v5906 = (i1)+1;
	i8 v5907 = (i8)(intptr_t)(ws+3176);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i1 v5909 = *(i1*)(intptr_t)v5908;
	f238_Cast(v5909, v5906, v5905);

endsub:;
}

// emit_169 workspace at ws+3248 length ws+0
void f399_emit_169(void) {

	i1 v5910 = (i1)+8;
	i1 v5911 = (i1)+2;
	i8 v5912 = (i8)(intptr_t)(ws+3176);
	i8 v5913 = *(i8*)(intptr_t)v5912;
	i1 v5914 = *(i1*)(intptr_t)v5913;
	f238_Cast(v5914, v5911, v5910);

endsub:;
}

// emit_170 workspace at ws+3248 length ws+0
void f400_emit_170(void) {

	i1 v5915 = (i1)+8;
	i1 v5916 = (i1)+4;
	i8 v5917 = (i8)(intptr_t)(ws+3176);
	i8 v5918 = *(i8*)(intptr_t)v5917;
	i1 v5919 = *(i1*)(intptr_t)v5918;
	f238_Cast(v5919, v5916, v5915);

endsub:;
}
const i1 c02_s014d[] = { 0x09,0x69,0x38,0x20,0x76,0 };
const i1 c02_s014e[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
const i1 c02_s014f[] = { 0x3b,0x0a,0 };

// emit_171 workspace at ws+3248 length ws+2
void f401_emit_171(void) {

	i2 v5920;
	f218_Push(&v5920);
	i8 v5921 = (i8)(intptr_t)(ws+3248);
	*(i2*)(intptr_t)v5921 = v5920;

	i8 v5922 = (i8)(intptr_t)c02_s014d;
	f156_E(v5922);

	i8 v5923 = (i8)(intptr_t)(ws+3248);
	i2 v5924 = *(i2*)(intptr_t)v5923;
	f158_E_u16(v5924);

	i8 v5925 = (i8)(intptr_t)c02_s014e;
	f156_E(v5925);

	i1 v5926 = (i1)+3;
	f149_EmitByte(v5926);

	i1 v5927 = (i1)+115;
	f149_EmitByte(v5927);

	i8 v5928 = (i8)(intptr_t)(ws+3176);
	i8 v5929 = *(i8*)(intptr_t)v5928;
	i8 v5930 = *(i8*)(intptr_t)v5929;
	i2 v5931;
	f239_E_string(&v5931, v5930);
	f165_E_h16(v5931);

	i8 v5932 = (i8)(intptr_t)c02_s014f;
	f156_E(v5932);

endsub:;
}
const i1 c02_s0150[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
const i1 c02_s0151[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0x2f,0x2f,0x20,0 };

// emit_172 workspace at ws+3248 length ws+0
void f402_emit_172(void) {

	f170_EmitterPushChunk();

	i8 v5933 = (i8)(intptr_t)(ws+40);
	i8 v5934 = *(i8*)(intptr_t)v5933;
	i8 v5935 = v5934+(+56);
	i2 v5936 = *(i2*)(intptr_t)v5935;
	f165_E_h16(v5936);

	i8 v5937 = (i8)(intptr_t)c02_s0150;
	f156_E(v5937);

	i8 v5938 = (i8)(intptr_t)(ws+3176);
	i8 v5939 = *(i8*)(intptr_t)v5938;
	i8 v5940 = *(i8*)(intptr_t)v5939;
	i8 v5941 = v5940+(+24);
	i8 v5942 = *(i8*)(intptr_t)v5941;
	f156_E(v5942);

	i8 v5943 = (i8)(intptr_t)c02_s0151;
	f156_E(v5943);

	i8 v5944 = (i8)(intptr_t)(ws+3176);
	i8 v5945 = *(i8*)(intptr_t)v5944;
	i8 v5946 = *(i8*)(intptr_t)v5945;
	i8 v5947 = v5946+(+48);
	i8 v5948 = *(i8*)(intptr_t)v5947;
	f156_E(v5948);

	f153_E_nl();

	i1 v5949 = (i1)+0;
	i8 v5950 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5950 = v5949;

endsub:;
}

// emit_173 workspace at ws+3248 length ws+0
void f403_emit_173(void) {

	i8 v5951 = (i8)(intptr_t)(ws+3176);
	i8 v5952 = *(i8*)(intptr_t)v5951;
	i1 v5953 = (i1)+1;
	f241_E_bytes(v5953, v5952);

endsub:;
}

// emit_174 workspace at ws+3248 length ws+0
void f404_emit_174(void) {

	i8 v5954 = (i8)(intptr_t)(ws+3176);
	i8 v5955 = *(i8*)(intptr_t)v5954;
	i1 v5956 = (i1)+2;
	f241_E_bytes(v5956, v5955);

endsub:;
}

// emit_175 workspace at ws+3248 length ws+0
void f405_emit_175(void) {

	i8 v5957 = (i8)(intptr_t)(ws+3176);
	i8 v5958 = *(i8*)(intptr_t)v5957;
	i1 v5959 = (i1)+4;
	f241_E_bytes(v5959, v5958);

endsub:;
}

// emit_176 workspace at ws+3248 length ws+0
void f406_emit_176(void) {

	i8 v5960 = (i8)(intptr_t)(ws+3176);
	i8 v5961 = *(i8*)(intptr_t)v5960;
	i1 v5962 = (i1)+8;
	f241_E_bytes(v5962, v5961);

endsub:;
}
const i1 c02_s0152[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
const i1 c02_s0153[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
const i1 c02_s0154[] = { 0x20,0x7d,0x2c,0x0a,0 };

// emit_177 workspace at ws+3248 length ws+0
void f407_emit_177(void) {

	i8 v5963 = (i8)(intptr_t)(ws+1218);
	i1 v5964 = *(i1*)(intptr_t)v5963;
	i1 v5965 = (i1)+0;
	if (v5964==v5965) goto c02_053d; else goto c02_053c;

c02_053c:;

	f55_StartError();

	i8 v5966 = (i8)(intptr_t)c02_s0152;
	f11_print(v5966);

	i8 v5967 = (i8)(intptr_t)(ws+1218);
	i1 v5968 = *(i1*)(intptr_t)v5967;
	f17_print_i8(v5968);

	f56_EndError();

	goto c02_0539;

c02_053d:;

c02_0539:;

	i8 v5969 = (i8)(intptr_t)c02_s0153;
	f156_E(v5969);

	i1 v5970 = (i1)+3;
	f149_EmitByte(v5970);

	i1 v5971 = (i1)+115;
	f149_EmitByte(v5971);

	i8 v5972 = (i8)(intptr_t)(ws+3176);
	i8 v5973 = *(i8*)(intptr_t)v5972;
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i2 v5975;
	f239_E_string(&v5975, v5974);
	f165_E_h16(v5975);

	i8 v5976 = (i8)(intptr_t)c02_s0154;
	f156_E(v5976);

endsub:;
}
const i1 c02_s0155[] = { 0x7d,0x3b,0x0a,0 };

// emit_178 workspace at ws+3248 length ws+0
void f408_emit_178(void) {

	f240_FlushInitialiserBuffer();

	i8 v5977 = (i8)(intptr_t)c02_s0155;
	f156_E(v5977);

	i1 v5978 = (i1)+83;
	f171_EmitterPopChunk(v5978);

endsub:;
}

// emit_179 workspace at ws+3248 length ws+0
void f409_emit_179(void) {

	f152_E_tab();

endsub:;
}

// emit_180 workspace at ws+3248 length ws+0
void f410_emit_180(void) {

	i8 v5979 = (i8)(intptr_t)(ws+3176);
	i8 v5980 = *(i8*)(intptr_t)v5979;
	i8 v5981 = *(i8*)(intptr_t)v5980;
	f156_E(v5981);

	f150_E_space();

endsub:;
}
const i1 c02_s0156[] = { 0x2a,0x28,0x69,0 };
const i1 c02_s0157[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s0158[] = { 0x29,0 };

// emit_181 workspace at ws+3248 length ws+0
void f411_emit_181(void) {

	i8 v5982 = (i8)(intptr_t)(ws+3176);
	i8 v5983 = *(i8*)(intptr_t)v5982;
	i8 v5984 = *(i8*)(intptr_t)v5983;
	i8 v5985 = v5984+(+46);
	i1 v5986 = *(i1*)(intptr_t)v5985;
	i1 v5987 = (i1)+28;
	if (v5986==v5987) goto c02_0545; else goto c02_0546;

c02_0545:;

	i8 v5988 = (i8)(intptr_t)c02_s0156;
	f156_E(v5988);

	i8 v5989 = (i8)(intptr_t)(ws+3176);
	i8 v5990 = *(i8*)(intptr_t)v5989;
	i8 v5991 = *(i8*)(intptr_t)v5990;
	i8 v5992 = *(i8*)(intptr_t)v5991;
	i8 v5993 = v5992+(+42);
	i2 v5994 = *(i2*)(intptr_t)v5993;
	i1 v5995 = v5994;
	f159_E_u8(v5995);

	i8 v5996 = (i8)(intptr_t)c02_s0157;
	f156_E(v5996);

	i8 v5997 = (i8)(intptr_t)(ws+3176);
	i8 v5998 = *(i8*)(intptr_t)v5997;
	i8 v5999 = *(i8*)(intptr_t)v5998;
	i2 v6000 = (i2)+0;
	f214_E_symref(v6000, v5999);

	i8 v6001 = (i8)(intptr_t)c02_s0158;
	f156_E(v6001);

	goto c02_0542;

c02_0546:;

	i8 v6002 = (i8)(intptr_t)(ws+3176);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i8 v6004 = *(i8*)(intptr_t)v6003;
	i8 v6005 = *(i8*)(intptr_t)v6004;
	f168_E_subref(v6005);

c02_0542:;

	f150_E_space();

endsub:;
}

// emit_182 workspace at ws+3248 length ws+0
void f412_emit_182(void) {

	i1 v6006 = (i1)+40;
	f149_EmitByte(v6006);

	i8 v6007 = (i8)(intptr_t)(ws+3176);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i4 v6009 = *(i4*)(intptr_t)v6008;
	f162_E_i32(v6009);

	i1 v6010 = (i1)+41;
	f149_EmitByte(v6010);

endsub:;
}

// emit_183 workspace at ws+3248 length ws+0
void f413_emit_183(void) {

	f153_E_nl();

endsub:;
}

// EmitOneInstruction workspace at ws+3160 length ws+82
void f243_EmitOneInstruction(i8 p5075 /* self */, i1 p5076 /* rule */) {
	*(i1*)(intptr_t)(ws+3160) = p5076; /*rule */
	*(i8*)(intptr_t)(ws+3168) = p5075; /*self */

	i8 v5077 = (i8)(intptr_t)(ws+3168);
	i8 v5078 = *(i8*)(intptr_t)v5077;
	i8 v5079 = v5078+(+16);
	i8 v5080 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v5080 = v5079;

	i8 v5081 = (i8)(intptr_t)(ws+3176);
	i8 v5082 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5082 = v5081;

	i1 v5083 = (i1)+3;
	i8 v5084 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v5084 = v5083;

c02_046a:;

	i8 v5085 = (i8)(intptr_t)(ws+3240);
	i1 v5086 = *(i1*)(intptr_t)v5085;
	i1 v5087 = (i1)+0;
	if (v5086==v5087) goto c02_046d; else goto c02_046c;

c02_046c:;

	i8 v5088 = (i8)(intptr_t)(ws+3224);
	i8 v5089 = *(i8*)(intptr_t)v5088;
	i8 v5090 = *(i8*)(intptr_t)v5089;
	i8 v5091 = (i8)(intptr_t)(ws+3232);
	i8 v5092 = *(i8*)(intptr_t)v5091;
	*(i8*)(intptr_t)v5092 = v5090;

	i8 v5093 = (i8)(intptr_t)(ws+3232);
	i8 v5094 = *(i8*)(intptr_t)v5093;
	i8 v5095 = *(i8*)(intptr_t)v5094;
	i8 v5096 = (i8)+0;
	if (v5095==v5096) goto c02_0472; else goto c02_0471;

c02_0471:;

	i8 v5097 = (i8)(intptr_t)(ws+3232);
	i8 v5098 = *(i8*)(intptr_t)v5097;
	i8 v5099 = *(i8*)(intptr_t)v5098;
	i8 v5100 = v5099+(+65);
	i1 v5101 = *(i1*)(intptr_t)v5100;
	i8 v5102 = (i8)(intptr_t)(ws+3232);
	i8 v5103 = *(i8*)(intptr_t)v5102;
	i8 v5104 = v5103+(+8);
	*(i1*)(intptr_t)v5104 = v5101;

	goto c02_046e;

c02_0472:;

c02_046e:;

	i8 v5105 = (i8)(intptr_t)(ws+3224);
	i8 v5106 = *(i8*)(intptr_t)v5105;
	i8 v5107 = v5106+(+8);
	i8 v5108 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v5108 = v5107;

	i8 v5109 = (i8)(intptr_t)(ws+3232);
	i8 v5110 = *(i8*)(intptr_t)v5109;
	i8 v5111 = v5110+(+16);
	i8 v5112 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5112 = v5111;

	i8 v5113 = (i8)(intptr_t)(ws+3240);
	i1 v5114 = *(i1*)(intptr_t)v5113;
	i1 v5115 = v5114+(-1);
	i8 v5116 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v5116 = v5115;

	goto c02_046a;

c02_046d:;

	i8 v5117 = (i8)(intptr_t)(ws+3168);
	i8 v5118 = *(i8*)(intptr_t)v5117;
	i8 v5119 = v5118+(+41);
	i1 v5120 = *(i1*)(intptr_t)v5119;
	i8 v5121 = (i8)(intptr_t)(ws+3241);
	*(i1*)(intptr_t)v5121 = v5120;

	i8 v5122 = (i8)(intptr_t)(ws+3160);
	i1 v5123 = *(i1*)(intptr_t)v5122;

	if (v5123 != +0) goto c02_0474;


	f244_emit_0();

	goto c02_0473;

c02_0474:;

	if (v5123 != +1) goto c02_0475;


	f245_emit_1();

	goto c02_0473;

c02_0475:;

	if (v5123 != +2) goto c02_0476;


	f246_emit_2();

	goto c02_0473;

c02_0476:;

	if (v5123 != +3) goto c02_0477;


	f247_emit_3();

	goto c02_0473;

c02_0477:;

	if (v5123 != +4) goto c02_0478;


	f248_emit_4();

	goto c02_0473;

c02_0478:;

	if (v5123 != +5) goto c02_0479;


	f249_emit_5();

	goto c02_0473;

c02_0479:;

	if (v5123 != +6) goto c02_047a;


	f250_emit_6();

	goto c02_0473;

c02_047a:;

	if (v5123 != +7) goto c02_047b;


	f251_emit_7();

	goto c02_0473;

c02_047b:;

	if (v5123 != +8) goto c02_047c;


	f252_emit_8();

	goto c02_0473;

c02_047c:;

	if (v5123 != +9) goto c02_047d;


	f253_emit_9();

	goto c02_0473;

c02_047d:;

	if (v5123 != +10) goto c02_047e;


	f254_emit_10();

	goto c02_0473;

c02_047e:;

	if (v5123 != +11) goto c02_047f;


	f255_emit_11();

	goto c02_0473;

c02_047f:;

	if (v5123 != +12) goto c02_0480;


	f256_emit_12();

	goto c02_0473;

c02_0480:;

	if (v5123 != +13) goto c02_0481;


	f257_emit_13();

	goto c02_0473;

c02_0481:;

	if (v5123 != +14) goto c02_0482;


	f258_emit_14();

	goto c02_0473;

c02_0482:;

	if (v5123 != +15) goto c02_0483;


	f259_emit_15();

	goto c02_0473;

c02_0483:;

	if (v5123 != +16) goto c02_0484;


	f260_emit_16();

	goto c02_0473;

c02_0484:;

	if (v5123 != +17) goto c02_0485;


	f261_emit_17();

	goto c02_0473;

c02_0485:;

	if (v5123 != +18) goto c02_0486;


	f262_emit_18();

	goto c02_0473;

c02_0486:;

	if (v5123 != +19) goto c02_0487;


	f263_emit_19();

	goto c02_0473;

c02_0487:;

	if (v5123 != +20) goto c02_0488;


	f264_emit_20();

	goto c02_0473;

c02_0488:;

	if (v5123 != +21) goto c02_0489;


	f265_emit_21();

	goto c02_0473;

c02_0489:;

	if (v5123 != +22) goto c02_048a;


	f266_emit_22();

	goto c02_0473;

c02_048a:;

	if (v5123 != +23) goto c02_048b;


	f267_emit_23();

	goto c02_0473;

c02_048b:;

	if (v5123 != +24) goto c02_048c;


	f268_emit_24();

	goto c02_0473;

c02_048c:;

	if (v5123 != +25) goto c02_048d;


	f269_emit_25();

	goto c02_0473;

c02_048d:;

	if (v5123 != +26) goto c02_048e;


	f270_emit_26();

	goto c02_0473;

c02_048e:;

	if (v5123 != +27) goto c02_048f;


	f271_emit_27();

	goto c02_0473;

c02_048f:;

	if (v5123 != +28) goto c02_0490;


	f272_emit_28();

	goto c02_0473;

c02_0490:;

	if (v5123 != +29) goto c02_0491;


	f273_emit_29();

	goto c02_0473;

c02_0491:;

	if (v5123 != +30) goto c02_0492;


	f274_emit_30();

	goto c02_0473;

c02_0492:;

	if (v5123 != +31) goto c02_0493;


	f275_emit_31();

	goto c02_0473;

c02_0493:;

	if (v5123 != +32) goto c02_0494;


	f276_emit_32();

	goto c02_0473;

c02_0494:;

	if (v5123 != +33) goto c02_0495;


	f277_emit_33();

	goto c02_0473;

c02_0495:;

	if (v5123 != +34) goto c02_0496;


	f278_emit_34();

	goto c02_0473;

c02_0496:;

	if (v5123 != +35) goto c02_0497;


	f279_emit_35();

	goto c02_0473;

c02_0497:;

	if (v5123 != +36) goto c02_0498;


	f280_emit_36();

	goto c02_0473;

c02_0498:;

	if (v5123 != +37) goto c02_0499;


	f281_emit_37();

	goto c02_0473;

c02_0499:;

	if (v5123 != +38) goto c02_049a;


	f282_emit_38();

	goto c02_0473;

c02_049a:;

	if (v5123 != +39) goto c02_049b;


	f283_emit_39();

	goto c02_0473;

c02_049b:;

	if (v5123 != +40) goto c02_049c;


	f284_emit_40();

	goto c02_0473;

c02_049c:;

	if (v5123 != +43) goto c02_049d;


	f285_emit_43();

	goto c02_0473;

c02_049d:;

	if (v5123 != +44) goto c02_049e;


	f286_emit_44();

	goto c02_0473;

c02_049e:;

	if (v5123 != +45) goto c02_049f;


	f287_emit_45();

	goto c02_0473;

c02_049f:;

	if (v5123 != +46) goto c02_04a0;


	f288_emit_46();

	goto c02_0473;

c02_04a0:;

	if (v5123 != +47) goto c02_04bd;


	f290_emit_47();

	goto c02_0473;

c02_04bd:;

	if (v5123 != +57) goto c02_04c4;


	f291_emit_57();

	goto c02_0473;

c02_04c4:;

	if (v5123 != +58) goto c02_04c5;


	f292_emit_58();

	goto c02_0473;

c02_04c5:;

	if (v5123 != +59) goto c02_04c6;


	f293_emit_59();

	goto c02_0473;

c02_04c6:;

	if (v5123 != +60) goto c02_04c7;


	f294_emit_60();

	goto c02_0473;

c02_04c7:;

	if (v5123 != +61) goto c02_04c8;


	f295_emit_61();

	goto c02_0473;

c02_04c8:;

	if (v5123 != +62) goto c02_04c9;


	f296_emit_62();

	goto c02_0473;

c02_04c9:;

	if (v5123 != +63) goto c02_04ca;


	f297_emit_63();

	goto c02_0473;

c02_04ca:;

	if (v5123 != +64) goto c02_04cb;


	f298_emit_64();

	goto c02_0473;

c02_04cb:;

	if (v5123 != +65) goto c02_04cc;


	f299_emit_65();

	goto c02_0473;

c02_04cc:;

	if (v5123 != +66) goto c02_04cd;


	f300_emit_66();

	goto c02_0473;

c02_04cd:;

	if (v5123 != +67) goto c02_04ce;


	f301_emit_67();

	goto c02_0473;

c02_04ce:;

	if (v5123 != +68) goto c02_04cf;


	f302_emit_68();

	goto c02_0473;

c02_04cf:;

	if (v5123 != +69) goto c02_04d0;


	f303_emit_69();

	goto c02_0473;

c02_04d0:;

	if (v5123 != +70) goto c02_04d1;


	f304_emit_70();

	goto c02_0473;

c02_04d1:;

	if (v5123 != +71) goto c02_04d2;


	f305_emit_71();

	goto c02_0473;

c02_04d2:;

	if (v5123 != +72) goto c02_04d3;


	f306_emit_72();

	goto c02_0473;

c02_04d3:;

	if (v5123 != +73) goto c02_04d4;


	f307_emit_73();

	goto c02_0473;

c02_04d4:;

	if (v5123 != +74) goto c02_04d5;


	f308_emit_74();

	goto c02_0473;

c02_04d5:;

	if (v5123 != +75) goto c02_04d6;


	f309_emit_75();

	goto c02_0473;

c02_04d6:;

	if (v5123 != +76) goto c02_04d7;


	f310_emit_76();

	goto c02_0473;

c02_04d7:;

	if (v5123 != +77) goto c02_04d8;


	f311_emit_77();

	goto c02_0473;

c02_04d8:;

	if (v5123 != +78) goto c02_04d9;


	f312_emit_78();

	goto c02_0473;

c02_04d9:;

	if (v5123 != +79) goto c02_04da;


	f313_emit_79();

	goto c02_0473;

c02_04da:;

	if (v5123 != +80) goto c02_04db;


	f314_emit_80();

	goto c02_0473;

c02_04db:;

	if (v5123 != +81) goto c02_04dc;


	f315_emit_81();

	goto c02_0473;

c02_04dc:;

	if (v5123 != +82) goto c02_04dd;


	f316_emit_82();

	goto c02_0473;

c02_04dd:;

	if (v5123 != +83) goto c02_04de;


	f317_emit_83();

	goto c02_0473;

c02_04de:;

	if (v5123 != +84) goto c02_04df;


	f318_emit_84();

	goto c02_0473;

c02_04df:;

	if (v5123 != +85) goto c02_04e0;


	f319_emit_85();

	goto c02_0473;

c02_04e0:;

	if (v5123 != +86) goto c02_04e1;


	f320_emit_86();

	goto c02_0473;

c02_04e1:;

	if (v5123 != +87) goto c02_04e2;


	f321_emit_87();

	goto c02_0473;

c02_04e2:;

	if (v5123 != +88) goto c02_04e3;


	f322_emit_88();

	goto c02_0473;

c02_04e3:;

	if (v5123 != +89) goto c02_04e4;


	f323_emit_89();

	goto c02_0473;

c02_04e4:;

	if (v5123 != +90) goto c02_04e5;


	f324_emit_90();

	goto c02_0473;

c02_04e5:;

	if (v5123 != +91) goto c02_04e6;


	f325_emit_91();

	goto c02_0473;

c02_04e6:;

	if (v5123 != +92) goto c02_04e7;


	f326_emit_92();

	goto c02_0473;

c02_04e7:;

	if (v5123 != +93) goto c02_04e8;


	f327_emit_93();

	goto c02_0473;

c02_04e8:;

	if (v5123 != +94) goto c02_04e9;


	f328_emit_94();

	goto c02_0473;

c02_04e9:;

	if (v5123 != +95) goto c02_04ea;


	f329_emit_95();

	goto c02_0473;

c02_04ea:;

	if (v5123 != +96) goto c02_04eb;


	f330_emit_96();

	goto c02_0473;

c02_04eb:;

	if (v5123 != +97) goto c02_04ec;


	f331_emit_97();

	goto c02_0473;

c02_04ec:;

	if (v5123 != +98) goto c02_04ed;


	f332_emit_98();

	goto c02_0473;

c02_04ed:;

	if (v5123 != +99) goto c02_04ee;


	f333_emit_99();

	goto c02_0473;

c02_04ee:;

	if (v5123 != +100) goto c02_04ef;


	f334_emit_100();

	goto c02_0473;

c02_04ef:;

	if (v5123 != +101) goto c02_04f0;


	f335_emit_101();

	goto c02_0473;

c02_04f0:;

	if (v5123 != +102) goto c02_04f1;


	f336_emit_102();

	goto c02_0473;

c02_04f1:;

	if (v5123 != +103) goto c02_04f2;


	f337_emit_103();

	goto c02_0473;

c02_04f2:;

	if (v5123 != +104) goto c02_04f3;


	f338_emit_104();

	goto c02_0473;

c02_04f3:;

	if (v5123 != +105) goto c02_04f4;


	f339_emit_105();

	goto c02_0473;

c02_04f4:;

	if (v5123 != +106) goto c02_04f5;


	f340_emit_106();

	goto c02_0473;

c02_04f5:;

	if (v5123 != +107) goto c02_04f6;


	f341_emit_107();

	goto c02_0473;

c02_04f6:;

	if (v5123 != +108) goto c02_04f7;


	f342_emit_108();

	goto c02_0473;

c02_04f7:;

	if (v5123 != +109) goto c02_04f8;


	f343_emit_109();

	goto c02_0473;

c02_04f8:;

	if (v5123 != +110) goto c02_04f9;


	f344_emit_110();

	goto c02_0473;

c02_04f9:;

	if (v5123 != +111) goto c02_04fa;


	f345_emit_111();

	goto c02_0473;

c02_04fa:;

	if (v5123 != +112) goto c02_04fb;


	f346_emit_112();

	goto c02_0473;

c02_04fb:;

	if (v5123 != +113) goto c02_04fc;


	f347_emit_113();

	goto c02_0473;

c02_04fc:;

	if (v5123 != +114) goto c02_04fd;


	f348_emit_114();

	goto c02_0473;

c02_04fd:;

	if (v5123 != +115) goto c02_04fe;


	f349_emit_115();

	goto c02_0473;

c02_04fe:;

	if (v5123 != +116) goto c02_04ff;


	f350_emit_116();

	goto c02_0473;

c02_04ff:;

	if (v5123 != +117) goto c02_0500;


	f351_emit_117();

	goto c02_0473;

c02_0500:;

	if (v5123 != +118) goto c02_0501;


	f352_emit_118();

	goto c02_0473;

c02_0501:;

	if (v5123 != +119) goto c02_0502;


	f353_emit_119();

	goto c02_0473;

c02_0502:;

	if (v5123 != +120) goto c02_0503;


	f354_emit_120();

	goto c02_0473;

c02_0503:;

	if (v5123 != +121) goto c02_0504;


	f355_emit_121();

	goto c02_0473;

c02_0504:;

	if (v5123 != +122) goto c02_0505;


	f356_emit_122();

	goto c02_0473;

c02_0505:;

	if (v5123 != +123) goto c02_0506;


	f357_emit_123();

	goto c02_0473;

c02_0506:;

	if (v5123 != +124) goto c02_0507;


	f358_emit_124();

	goto c02_0473;

c02_0507:;

	if (v5123 != +125) goto c02_0508;


	f359_emit_125();

	goto c02_0473;

c02_0508:;

	if (v5123 != +126) goto c02_0509;


	f360_emit_126();

	goto c02_0473;

c02_0509:;

	if (v5123 != +127) goto c02_050a;


	f361_emit_127();

	goto c02_0473;

c02_050a:;

	if (v5123 != +128) goto c02_050b;


	f362_emit_128();

	goto c02_0473;

c02_050b:;

	if (v5123 != +129) goto c02_050c;


	f363_emit_129();

	goto c02_0473;

c02_050c:;

	if (v5123 != +130) goto c02_050d;


	f364_emit_130();

	goto c02_0473;

c02_050d:;

	if (v5123 != +131) goto c02_050e;


	f365_emit_131();

	goto c02_0473;

c02_050e:;

	if (v5123 != +132) goto c02_050f;


	f366_emit_132();

	goto c02_0473;

c02_050f:;

	if (v5123 != +133) goto c02_0510;


	f367_emit_133();

	goto c02_0473;

c02_0510:;

	if (v5123 != +134) goto c02_0511;


	f368_emit_134();

	goto c02_0473;

c02_0511:;

	if (v5123 != +135) goto c02_0512;


	f369_emit_135();

	goto c02_0473;

c02_0512:;

	if (v5123 != +136) goto c02_0513;


	f370_emit_136();

	goto c02_0473;

c02_0513:;

	if (v5123 != +137) goto c02_0514;


	f371_emit_137();

	goto c02_0473;

c02_0514:;

	if (v5123 != +138) goto c02_0515;


	f372_emit_138();

	goto c02_0473;

c02_0515:;

	if (v5123 != +139) goto c02_0516;


	f373_emit_139();

	goto c02_0473;

c02_0516:;

	if (v5123 != +140) goto c02_0517;


	f374_emit_140();

	goto c02_0473;

c02_0517:;

	if (v5123 != +141) goto c02_0518;


	f375_emit_141();

	goto c02_0473;

c02_0518:;

	if (v5123 != +142) goto c02_0519;


	f376_emit_142();

	goto c02_0473;

c02_0519:;

	if (v5123 != +143) goto c02_051a;


	f377_emit_143();

	goto c02_0473;

c02_051a:;

	if (v5123 != +144) goto c02_051b;


	f378_emit_144();

	goto c02_0473;

c02_051b:;

	if (v5123 != +145) goto c02_051c;


	f379_emit_145();

	goto c02_0473;

c02_051c:;

	if (v5123 != +146) goto c02_051d;


	f380_emit_146();

	goto c02_0473;

c02_051d:;

	if (v5123 != +151) goto c02_051e;


	f381_emit_151();

	goto c02_0473;

c02_051e:;

	if (v5123 != +152) goto c02_051f;


	f382_emit_152();

	goto c02_0473;

c02_051f:;

	if (v5123 != +153) goto c02_0520;


	f383_emit_153();

	goto c02_0473;

c02_0520:;

	if (v5123 != +154) goto c02_0521;


	f384_emit_154();

	goto c02_0473;

c02_0521:;

	if (v5123 != +155) goto c02_0522;


	f385_emit_155();

	goto c02_0473;

c02_0522:;

	if (v5123 != +156) goto c02_0523;


	f386_emit_156();

	goto c02_0473;

c02_0523:;

	if (v5123 != +157) goto c02_0524;


	f387_emit_157();

	goto c02_0473;

c02_0524:;

	if (v5123 != +158) goto c02_0525;


	f388_emit_158();

	goto c02_0473;

c02_0525:;

	if (v5123 != +159) goto c02_0526;


	f389_emit_159();

	goto c02_0473;

c02_0526:;

	if (v5123 != +160) goto c02_0527;


	f390_emit_160();

	goto c02_0473;

c02_0527:;

	if (v5123 != +161) goto c02_0528;


	f391_emit_161();

	goto c02_0473;

c02_0528:;

	if (v5123 != +162) goto c02_0529;


	f392_emit_162();

	goto c02_0473;

c02_0529:;

	if (v5123 != +163) goto c02_052a;


	f393_emit_163();

	goto c02_0473;

c02_052a:;

	if (v5123 != +164) goto c02_052b;


	f394_emit_164();

	goto c02_0473;

c02_052b:;

	if (v5123 != +165) goto c02_052c;


	f395_emit_165();

	goto c02_0473;

c02_052c:;

	if (v5123 != +166) goto c02_052d;


	f396_emit_166();

	goto c02_0473;

c02_052d:;

	if (v5123 != +167) goto c02_052e;


	f397_emit_167();

	goto c02_0473;

c02_052e:;

	if (v5123 != +168) goto c02_052f;


	f398_emit_168();

	goto c02_0473;

c02_052f:;

	if (v5123 != +169) goto c02_0530;


	f399_emit_169();

	goto c02_0473;

c02_0530:;

	if (v5123 != +170) goto c02_0531;


	f400_emit_170();

	goto c02_0473;

c02_0531:;

	if (v5123 != +171) goto c02_0532;


	f401_emit_171();

	goto c02_0473;

c02_0532:;

	if (v5123 != +172) goto c02_0533;


	f402_emit_172();

	goto c02_0473;

c02_0533:;

	if (v5123 != +173) goto c02_0534;


	f403_emit_173();

	goto c02_0473;

c02_0534:;

	if (v5123 != +174) goto c02_0535;


	f404_emit_174();

	goto c02_0473;

c02_0535:;

	if (v5123 != +175) goto c02_0536;


	f405_emit_175();

	goto c02_0473;

c02_0536:;

	if (v5123 != +176) goto c02_0537;


	f406_emit_176();

	goto c02_0473;

c02_0537:;

	if (v5123 != +177) goto c02_0538;


	f407_emit_177();

	goto c02_0473;

c02_0538:;

	if (v5123 != +178) goto c02_053e;


	f408_emit_178();

	goto c02_0473;

c02_053e:;

	if (v5123 != +179) goto c02_053f;


	f409_emit_179();

	goto c02_0473;

c02_053f:;

	if (v5123 != +180) goto c02_0540;


	f410_emit_180();

	goto c02_0473;

c02_0540:;

	if (v5123 != +181) goto c02_0541;


	f411_emit_181();

	goto c02_0473;

c02_0541:;

	if (v5123 != +182) goto c02_0547;


	f412_emit_182();

	goto c02_0473;

c02_0547:;

	if (v5123 != +183) goto c02_0548;


	f413_emit_183();

c02_0548:;

c02_0473:;


endsub:;
}
static data c02_a549[] = { // codegen_midcodes








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
static data c02_a54a[] = { // codegen_registers








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
static data c02_a54b[] = { // codegen_rules








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
void f414_PopulateMatchBuffer(i8 p6011 /* matchbuf */, i8 p6012 /* n */, i8 p6013 /* insn */) {
	*(i8*)(intptr_t)(ws+3208) = p6013; /*insn */
	*(i8*)(intptr_t)(ws+3216) = p6012; /*n */
	*(i8*)(intptr_t)(ws+3224) = p6011; /*matchbuf */

	i8 v6014 = (i8)(intptr_t)(ws+3216);
	i8 v6015 = *(i8*)(intptr_t)v6014;
	i8 v6016 = *(i8*)(intptr_t)v6015;
	i8 v6017 = v6016+(+66);
	i1 v6018 = *(i1*)(intptr_t)v6017;
	i8 v6019 = (i8)(intptr_t)(ws+3224);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	*(i1*)(intptr_t)v6020 = v6018;

	i8 v6021 = (i8)(intptr_t)(ws+3216);
	i8 v6022 = *(i8*)(intptr_t)v6021;
	i8 v6023 = *(i8*)(intptr_t)v6022;
	i8 v6024 = v6023+(+24);
	i8 v6025 = *(i8*)(intptr_t)v6024;
	i8 v6026 = (i8)(intptr_t)(ws+3216);
	i8 v6027 = *(i8*)(intptr_t)v6026;
	i8 v6028 = v6027+(+8);
	*(i8*)(intptr_t)v6028 = v6025;

	i8 v6029 = (i8)(intptr_t)(ws+3216);
	i8 v6030 = *(i8*)(intptr_t)v6029;
	i8 v6031 = v6030+(+8);
	i8 v6032 = *(i8*)(intptr_t)v6031;
	i8 v6033 = (i8)+0;
	if (v6032==v6033) goto c02_0550; else goto c02_054f;

c02_054f:;

	i8 v6034 = (i8)(intptr_t)(ws+3216);
	i8 v6035 = *(i8*)(intptr_t)v6034;
	i8 v6036 = v6035+(+8);
	i8 v6037 = *(i8*)(intptr_t)v6036;
	i8 v6038 = v6037+(+66);
	i1 v6039 = *(i1*)(intptr_t)v6038;
	i8 v6040 = (i8)(intptr_t)(ws+3224);
	i8 v6041 = *(i8*)(intptr_t)v6040;
	i8 v6042 = v6041+(+1);
	*(i1*)(intptr_t)v6042 = v6039;

	goto c02_054c;

c02_0550:;

c02_054c:;

	i8 v6043 = (i8)(intptr_t)(ws+3216);
	i8 v6044 = *(i8*)(intptr_t)v6043;
	i8 v6045 = *(i8*)(intptr_t)v6044;
	i8 v6046 = v6045+(+32);
	i8 v6047 = *(i8*)(intptr_t)v6046;
	i8 v6048 = (i8)(intptr_t)(ws+3216);
	i8 v6049 = *(i8*)(intptr_t)v6048;
	i8 v6050 = v6049+(+16);
	*(i8*)(intptr_t)v6050 = v6047;

	i8 v6051 = (i8)(intptr_t)(ws+3216);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i8 v6053 = v6052+(+16);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	i8 v6055 = (i8)+0;
	if (v6054==v6055) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v6056 = (i8)(intptr_t)(ws+3216);
	i8 v6057 = *(i8*)(intptr_t)v6056;
	i8 v6058 = v6057+(+16);
	i8 v6059 = *(i8*)(intptr_t)v6058;
	i8 v6060 = v6059+(+66);
	i1 v6061 = *(i1*)(intptr_t)v6060;
	i8 v6062 = (i8)(intptr_t)(ws+3224);
	i8 v6063 = *(i8*)(intptr_t)v6062;
	i8 v6064 = v6063+(+2);
	*(i1*)(intptr_t)v6064 = v6061;

	goto c02_0551;

c02_0555:;

c02_0551:;

endsub:;
}
const i1 c02_s0159[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// PushNode workspace at ws+3224 length ws+8
void f415_PushNode(i8 p6065 /* node */) {
	*(i8*)(intptr_t)(ws+3224) = p6065; /*node */

	i8 v6066 = (i8)(intptr_t)(ws+3224);
	i8 v6067 = *(i8*)(intptr_t)v6066;
	i8 v6068 = (i8)+0;
	if (v6067==v6068) goto c02_055a; else goto c02_0559;

c02_0559:;

	i8 v6069 = (i8)(intptr_t)(ws+984);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	i8 v6071 = (i8)(intptr_t)(ws+984);
	if (v6070==v6071) goto c02_055e; else goto c02_055f;

c02_055e:;

	i8 v6072 = (i8)(intptr_t)c02_s0159;
	f57_SimpleError(v6072);

	goto c02_055b;

c02_055f:;

c02_055b:;

	i8 v6073 = (i8)(intptr_t)(ws+3224);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i8 v6075 = (i8)(intptr_t)(ws+984);
	i8 v6076 = *(i8*)(intptr_t)v6075;
	*(i8*)(intptr_t)v6076 = v6074;

	i8 v6077 = (i8)(intptr_t)(ws+984);
	i8 v6078 = *(i8*)(intptr_t)v6077;
	i8 v6079 = v6078+(+8);
	i8 v6080 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v6080 = v6079;

	goto c02_0556;

c02_055a:;

c02_0556:;

endsub:;
}

// PopNode workspace at ws+3208 length ws+8
void f416_PopNode(i8* p6081 /* node */) {

	i8 v6082 = (i8)(intptr_t)(ws+984);
	i8 v6083 = *(i8*)(intptr_t)v6082;
	i8 v6084 = v6083+(-8);
	i8 v6085 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v6085 = v6084;

	i8 v6086 = (i8)(intptr_t)(ws+984);
	i8 v6087 = *(i8*)(intptr_t)v6086;
	i8 v6088 = *(i8*)(intptr_t)v6087;
	i8 v6089 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v6089 = v6088;

endsub:;
	*p6081 = *(i8*)(intptr_t)(ws+3208);
}

// NextNode workspace at ws+3200 length ws+8
void f417_NextNode(i8* p6090 /* node */) {

	i8 v6091;
	f416_PopNode(&v6091);
	i8 v6092 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6092 = v6091;

	i8 v6093 = (i8)(intptr_t)(ws+3200);
	i8 v6094 = *(i8*)(intptr_t)v6093;
	i8 v6095 = (i8)+0;
	if (v6094==v6095) goto c02_0564; else goto c02_0563;

c02_0563:;

	i8 v6096 = (i8)(intptr_t)(ws+3200);
	i8 v6097 = *(i8*)(intptr_t)v6096;
	i8 v6098 = v6097+(+24);
	i8 v6099 = *(i8*)(intptr_t)v6098;
	f415_PushNode(v6099);

	i8 v6100 = (i8)(intptr_t)(ws+3200);
	i8 v6101 = *(i8*)(intptr_t)v6100;
	i8 v6102 = v6101+(+32);
	i8 v6103 = *(i8*)(intptr_t)v6102;
	f415_PushNode(v6103);

	goto c02_0560;

c02_0564:;

c02_0560:;

endsub:;
	*p6090 = *(i8*)(intptr_t)(ws+3200);
}

// IsStackedRegister workspace at ws+3176 length ws+16
void f418_IsStackedRegister(i1* p6104 /* result */, i1 p6105 /* regid */) {
	*(i1*)(intptr_t)(ws+3176) = p6105; /*regid */

	i1 v6106 = (i1)+0;
	i8 v6107 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6107 = v6106;

	i8 v6108 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v6109 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6109 = v6108;

c02_0567:;

	i8 v6110 = (i8)(intptr_t)(ws+3184);
	i8 v6111 = *(i8*)(intptr_t)v6110;
	i8 v6112 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v6111==v6112) goto c02_056a; else goto c02_0569;

c02_0569:;

	i8 v6113 = (i8)(intptr_t)(ws+3184);
	i8 v6114 = *(i8*)(intptr_t)v6113;
	i8 v6115 = v6114+(+8);
	i1 v6116 = *(i1*)(intptr_t)v6115;
	i8 v6117 = (i8)(intptr_t)(ws+3176);
	i1 v6118 = *(i1*)(intptr_t)v6117;
	i1 v6119 = v6116&v6118;
	i1 v6120 = (i1)+0;
	if (v6119==v6120) goto c02_056f; else goto c02_056e;

c02_056e:;

	i8 v6121 = (i8)(intptr_t)(ws+3184);
	i8 v6122 = *(i8*)(intptr_t)v6121;
	i8 v6123 = v6122+(+11);
	i1 v6124 = *(i1*)(intptr_t)v6123;
	i8 v6125 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6125 = v6124;

	goto endsub;

c02_056f:;

c02_056b:;

	i8 v6126 = (i8)(intptr_t)(ws+3184);
	i8 v6127 = *(i8*)(intptr_t)v6126;
	i8 v6128 = v6127+(+16);
	i8 v6129 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6129 = v6128;

	goto c02_0567;

c02_056a:;

endsub:;
	*p6104 = *(i1*)(intptr_t)(ws+3177);
}

// CalculateBlockedRegisters workspace at ws+3176 length ws+17
void f419_CalculateBlockedRegisters(i1* p6130 /* blocked */, i8 p6131 /* last */, i8 p6132 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6132; /*insn */
	*(i8*)(intptr_t)(ws+3184) = p6131; /*last */

	i1 v6133 = (i1)+0;
	i8 v6134 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6134 = v6133;

	i8 v6135 = (i8)(intptr_t)(ws+3176);
	i8 v6136 = *(i8*)(intptr_t)v6135;
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6138 = v6137;

c02_0572:;

	i8 v6139 = (i8)(intptr_t)(ws+3176);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i8 v6141 = (i8)(intptr_t)(ws+3184);
	i8 v6142 = *(i8*)(intptr_t)v6141;
	if (v6140==v6142) goto c02_0575; else goto c02_0574;

c02_0574:;

	i8 v6143 = (i8)(intptr_t)(ws+3192);
	i1 v6144 = *(i1*)(intptr_t)v6143;
	i8 v6145 = (i8)(intptr_t)(ws+3176);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = v6146+(+42);
	i1 v6148 = *(i1*)(intptr_t)v6147;
	i1 v6149 = v6144|v6148;
	i8 v6150 = (i8)(intptr_t)(ws+3176);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = v6151+(+43);
	i1 v6153 = *(i1*)(intptr_t)v6152;
	i1 v6154 = v6149|v6153;
	i8 v6155 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6155 = v6154;

	i8 v6156 = (i8)(intptr_t)(ws+3176);
	i8 v6157 = *(i8*)(intptr_t)v6156;
	i8 v6158 = (i8)(intptr_t)(ws+3184);
	i8 v6159 = *(i8*)(intptr_t)v6158;
	if (v6157==v6159) goto c02_0579; else goto c02_057a;

c02_0579:;

	goto c02_0575;

c02_057a:;

c02_0576:;

	i8 v6160 = (i8)(intptr_t)(ws+3176);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = *(i8*)(intptr_t)v6161;
	i8 v6163 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6163 = v6162;

	goto c02_0572;

c02_0575:;

endsub:;
	*p6130 = *(i1*)(intptr_t)(ws+3192);
}

// BlockRegisters workspace at ws+3176 length ws+17
void f420_BlockRegisters(i1 p6164 /* blocked */, i8 p6165 /* last */, i8 p6166 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6166; /*insn */
	*(i8*)(intptr_t)(ws+3184) = p6165; /*last */
	*(i1*)(intptr_t)(ws+3192) = p6164; /*blocked */

	i8 v6167 = (i8)(intptr_t)(ws+3176);
	i8 v6168 = *(i8*)(intptr_t)v6167;
	i8 v6169 = *(i8*)(intptr_t)v6168;
	i8 v6170 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6170 = v6169;

c02_057d:;

	i8 v6171 = (i8)(intptr_t)(ws+3176);
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = (i8)(intptr_t)(ws+3184);
	i8 v6174 = *(i8*)(intptr_t)v6173;
	if (v6172==v6174) goto c02_0580; else goto c02_057f;

c02_057f:;

	i8 v6175 = (i8)(intptr_t)(ws+3176);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	i8 v6177 = v6176+(+42);
	i1 v6178 = *(i1*)(intptr_t)v6177;
	i8 v6179 = (i8)(intptr_t)(ws+3192);
	i1 v6180 = *(i1*)(intptr_t)v6179;
	i1 v6181 = v6178|v6180;
	i8 v6182 = (i8)(intptr_t)(ws+3176);
	i8 v6183 = *(i8*)(intptr_t)v6182;
	i8 v6184 = v6183+(+42);
	*(i1*)(intptr_t)v6184 = v6181;

	i8 v6185 = (i8)(intptr_t)(ws+3176);
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+43);
	i1 v6188 = *(i1*)(intptr_t)v6187;
	i8 v6189 = (i8)(intptr_t)(ws+3192);
	i1 v6190 = *(i1*)(intptr_t)v6189;
	i1 v6191 = v6188|v6190;
	i8 v6192 = (i8)(intptr_t)(ws+3176);
	i8 v6193 = *(i8*)(intptr_t)v6192;
	i8 v6194 = v6193+(+43);
	*(i1*)(intptr_t)v6194 = v6191;

	i8 v6195 = (i8)(intptr_t)(ws+3176);
	i8 v6196 = *(i8*)(intptr_t)v6195;
	i8 v6197 = (i8)(intptr_t)(ws+3184);
	i8 v6198 = *(i8*)(intptr_t)v6197;
	if (v6196==v6198) goto c02_0584; else goto c02_0585;

c02_0584:;

	goto c02_0580;

c02_0585:;

c02_0581:;

	i8 v6199 = (i8)(intptr_t)(ws+3176);
	i8 v6200 = *(i8*)(intptr_t)v6199;
	i8 v6201 = *(i8*)(intptr_t)v6200;
	i8 v6202 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6202 = v6201;

	goto c02_057d;

c02_0580:;

endsub:;
}
const i1 c02_s015a[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };

// CreateSpill workspace at ws+3176 length ws+24
void f421_CreateSpill(i1 p6203 /* dest */, i1 p6204 /* src */, i8 p6205 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6205; /*insn */
	*(i1*)(intptr_t)(ws+3184) = p6204; /*src */
	*(i1*)(intptr_t)(ws+3185) = p6203; /*dest */

	i8 v6206 = (i8)(intptr_t)(ws+3176);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = v6207+(+60);
	i1 v6209 = *(i1*)(intptr_t)v6208;
	i8 v6210 = (i8)(intptr_t)(ws+3186);
	*(i1*)(intptr_t)v6210 = v6209;

	i8 v6211 = (i8)(intptr_t)(ws+3186);
	i1 v6212 = *(i1*)(intptr_t)v6211;
	i1 v6213 = (i1)+5;
	if (v6212==v6213) goto c02_0589; else goto c02_058a;

c02_0589:;

	i8 v6214 = (i8)(intptr_t)c02_s015a;
	f57_SimpleError(v6214);

	goto c02_0586;

c02_058a:;

c02_0586:;

	i8 v6215 = (i8)(intptr_t)(ws+3176);
	i8 v6216 = *(i8*)(intptr_t)v6215;
	i8 v6217 = v6216+(+44);
	i8 v6218 = (i8)(intptr_t)(ws+3186);
	i1 v6219 = *(i1*)(intptr_t)v6218;
	i8 v6220 = v6219;
	i1 v6221 = (i1)+1;
	i8 v6222 = ((i8)v6220)<<v6221;
	i8 v6223 = v6217+v6222;
	i8 v6224 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6224 = v6223;

	i8 v6225 = (i8)(intptr_t)(ws+3184);
	i1 v6226 = *(i1*)(intptr_t)v6225;
	i8 v6227 = (i8)(intptr_t)(ws+3192);
	i8 v6228 = *(i8*)(intptr_t)v6227;
	*(i1*)(intptr_t)v6228 = v6226;

	i8 v6229 = (i8)(intptr_t)(ws+3185);
	i1 v6230 = *(i1*)(intptr_t)v6229;
	i8 v6231 = (i8)(intptr_t)(ws+3192);
	i8 v6232 = *(i8*)(intptr_t)v6231;
	i8 v6233 = v6232+(+1);
	*(i1*)(intptr_t)v6233 = v6230;

	i8 v6234 = (i8)(intptr_t)(ws+3186);
	i1 v6235 = *(i1*)(intptr_t)v6234;
	i1 v6236 = v6235+(+1);
	i8 v6237 = (i8)(intptr_t)(ws+3176);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	i8 v6239 = v6238+(+60);
	*(i1*)(intptr_t)v6239 = v6236;

endsub:;
}
const i1 c02_s015b[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };

// CreateReload workspace at ws+3176 length ws+24
void f422_CreateReload(i1 p6240 /* dest */, i1 p6241 /* src */, i8 p6242 /* insn */) {
	*(i8*)(intptr_t)(ws+3176) = p6242; /*insn */
	*(i1*)(intptr_t)(ws+3184) = p6241; /*src */
	*(i1*)(intptr_t)(ws+3185) = p6240; /*dest */

	i8 v6243 = (i8)(intptr_t)(ws+3176);
	i8 v6244 = *(i8*)(intptr_t)v6243;
	i8 v6245 = v6244+(+61);
	i1 v6246 = *(i1*)(intptr_t)v6245;
	i8 v6247 = (i8)(intptr_t)(ws+3186);
	*(i1*)(intptr_t)v6247 = v6246;

	i8 v6248 = (i8)(intptr_t)(ws+3186);
	i1 v6249 = *(i1*)(intptr_t)v6248;
	i1 v6250 = (i1)+5;
	if (v6249==v6250) goto c02_058e; else goto c02_058f;

c02_058e:;

	i8 v6251 = (i8)(intptr_t)c02_s015b;
	f57_SimpleError(v6251);

	goto c02_058b;

c02_058f:;

c02_058b:;

	i8 v6252 = (i8)(intptr_t)(ws+3176);
	i8 v6253 = *(i8*)(intptr_t)v6252;
	i8 v6254 = v6253+(+52);
	i8 v6255 = (i8)(intptr_t)(ws+3186);
	i1 v6256 = *(i1*)(intptr_t)v6255;
	i8 v6257 = v6256;
	i1 v6258 = (i1)+1;
	i8 v6259 = ((i8)v6257)<<v6258;
	i8 v6260 = v6254+v6259;
	i8 v6261 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6261 = v6260;

	i8 v6262 = (i8)(intptr_t)(ws+3184);
	i1 v6263 = *(i1*)(intptr_t)v6262;
	i8 v6264 = (i8)(intptr_t)(ws+3192);
	i8 v6265 = *(i8*)(intptr_t)v6264;
	*(i1*)(intptr_t)v6265 = v6263;

	i8 v6266 = (i8)(intptr_t)(ws+3185);
	i1 v6267 = *(i1*)(intptr_t)v6266;
	i8 v6268 = (i8)(intptr_t)(ws+3192);
	i8 v6269 = *(i8*)(intptr_t)v6268;
	i8 v6270 = v6269+(+1);
	*(i1*)(intptr_t)v6270 = v6267;

	i8 v6271 = (i8)(intptr_t)(ws+3186);
	i1 v6272 = *(i1*)(intptr_t)v6271;
	i1 v6273 = v6272+(+1);
	i8 v6274 = (i8)(intptr_t)(ws+3176);
	i8 v6275 = *(i8*)(intptr_t)v6274;
	i8 v6276 = v6275+(+61);
	*(i1*)(intptr_t)v6276 = v6273;

endsub:;
}

// ShuffleRegisters workspace at ws+3160 length ws+25
void f423_ShuffleRegisters(i8 p6277 /* moves */) {
	*(i8*)(intptr_t)(ws+3160) = p6277; /*moves */

	i1 v6278 = (i1)+0;
	i8 v6279 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6279 = v6278;

	i1 v6280 = (i1)+0;
	i8 v6281 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6281 = v6280;

	i8 v6282 = (i8)(intptr_t)(ws+3160);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6284 = v6283;

	i1 v6285 = (i1)+4;
	i8 v6286 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6286 = v6285;

c02_0592:;

	i8 v6287 = (i8)(intptr_t)(ws+3184);
	i1 v6288 = *(i1*)(intptr_t)v6287;
	i1 v6289 = (i1)+0;
	if (v6288==v6289) goto c02_0595; else goto c02_0594;

c02_0594:;

	i8 v6290 = (i8)(intptr_t)(ws+3168);
	i1 v6291 = *(i1*)(intptr_t)v6290;
	i8 v6292 = (i8)(intptr_t)(ws+3176);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	i8 v6294 = v6293+(+1);
	i1 v6295 = *(i1*)(intptr_t)v6294;
	i1 v6296 = v6291|v6295;
	i8 v6297 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6297 = v6296;

	i8 v6298 = (i8)(intptr_t)(ws+3169);
	i1 v6299 = *(i1*)(intptr_t)v6298;
	i8 v6300 = (i8)(intptr_t)(ws+3176);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i1 v6302 = *(i1*)(intptr_t)v6301;
	i1 v6303 = v6299|v6302;
	i8 v6304 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6304 = v6303;

	i8 v6305 = (i8)(intptr_t)(ws+3184);
	i1 v6306 = *(i1*)(intptr_t)v6305;
	i1 v6307 = v6306+(-1);
	i8 v6308 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6308 = v6307;

	i8 v6309 = (i8)(intptr_t)(ws+3176);
	i8 v6310 = *(i8*)(intptr_t)v6309;
	i8 v6311 = v6310+(+2);
	i8 v6312 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6312 = v6311;

	goto c02_0592;

c02_0595:;

c02_0596:;

	i8 v6313 = (i8)(intptr_t)(ws+3160);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6315 = v6314;

	i1 v6316 = (i1)+4;
	i8 v6317 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6317 = v6316;

c02_059a:;

	i8 v6318 = (i8)(intptr_t)(ws+3184);
	i1 v6319 = *(i1*)(intptr_t)v6318;
	i1 v6320 = (i1)+0;
	if (v6319==v6320) goto c02_059d; else goto c02_059c;

c02_059c:;

	i8 v6321 = (i8)(intptr_t)(ws+3176);
	i8 v6322 = *(i8*)(intptr_t)v6321;
	i1 v6323 = *(i1*)(intptr_t)v6322;
	i1 v6324 = (i1)+0;
	if (v6323==v6324) goto c02_05a4; else goto c02_05a5;

c02_05a5:;

	i8 v6325 = (i8)(intptr_t)(ws+3176);
	i8 v6326 = *(i8*)(intptr_t)v6325;
	i8 v6327 = v6326+(+1);
	i1 v6328 = *(i1*)(intptr_t)v6327;
	i1 v6329 = (i1)+0;
	if (v6328==v6329) goto c02_05a3; else goto c02_05a4;

c02_05a3:;

	goto c02_059d;

c02_05a4:;

c02_059e:;

	i8 v6330 = (i8)(intptr_t)(ws+3176);
	i8 v6331 = *(i8*)(intptr_t)v6330;
	i8 v6332 = v6331+(+2);
	i8 v6333 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6333 = v6332;

	i8 v6334 = (i8)(intptr_t)(ws+3184);
	i1 v6335 = *(i1*)(intptr_t)v6334;
	i1 v6336 = v6335+(-1);
	i8 v6337 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6337 = v6336;

	goto c02_059a;

c02_059d:;

	i8 v6338 = (i8)(intptr_t)(ws+3184);
	i1 v6339 = *(i1*)(intptr_t)v6338;
	i1 v6340 = (i1)+0;
	if (v6339==v6340) goto c02_05aa; else goto c02_05a9;

c02_05a9:;

	i8 v6341 = (i8)(intptr_t)(ws+3176);
	i8 v6342 = *(i8*)(intptr_t)v6341;
	i1 v6343 = *(i1*)(intptr_t)v6342;
	i1 v6344 = (i1)+0;
	f222_ArchEmitMove(v6344, v6343);

	i8 v6345 = (i8)(intptr_t)(ws+3169);
	i1 v6346 = *(i1*)(intptr_t)v6345;
	i8 v6347 = (i8)(intptr_t)(ws+3176);
	i8 v6348 = *(i8*)(intptr_t)v6347;
	i1 v6349 = *(i1*)(intptr_t)v6348;
	i1 v6350 = ~v6349;
	i1 v6351 = v6346&v6350;
	i8 v6352 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6352 = v6351;

	i1 v6353 = (i1)+0;
	i8 v6354 = (i8)(intptr_t)(ws+3176);
	i8 v6355 = *(i8*)(intptr_t)v6354;
	*(i1*)(intptr_t)v6355 = v6353;

	goto c02_0596;

c02_05aa:;

c02_05a6:;

	i8 v6356 = (i8)(intptr_t)(ws+3160);
	i8 v6357 = *(i8*)(intptr_t)v6356;
	i8 v6358 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6358 = v6357;

	i1 v6359 = (i1)+4;
	i8 v6360 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6360 = v6359;

c02_05ad:;

	i8 v6361 = (i8)(intptr_t)(ws+3184);
	i1 v6362 = *(i1*)(intptr_t)v6361;
	i1 v6363 = (i1)+0;
	if (v6362==v6363) goto c02_05b0; else goto c02_05af;

c02_05af:;

	i8 v6364 = (i8)(intptr_t)(ws+3176);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i1 v6366 = *(i1*)(intptr_t)v6365;
	i1 v6367 = (i1)+0;
	if (v6366==v6367) goto c02_05b9; else goto c02_05bb;

c02_05bb:;

	i8 v6368 = (i8)(intptr_t)(ws+3176);
	i8 v6369 = *(i8*)(intptr_t)v6368;
	i8 v6370 = v6369+(+1);
	i1 v6371 = *(i1*)(intptr_t)v6370;
	i1 v6372 = (i1)+0;
	if (v6371==v6372) goto c02_05b9; else goto c02_05ba;

c02_05ba:;

	i8 v6373 = (i8)(intptr_t)(ws+3176);
	i8 v6374 = *(i8*)(intptr_t)v6373;
	i8 v6375 = v6374+(+1);
	i1 v6376 = *(i1*)(intptr_t)v6375;
	i8 v6377 = (i8)(intptr_t)(ws+3169);
	i1 v6378 = *(i1*)(intptr_t)v6377;
	i1 v6379 = v6376&v6378;
	i1 v6380 = (i1)+0;
	if (v6379==v6380) goto c02_05b8; else goto c02_05b9;

c02_05b8:;

	goto c02_05b0;

c02_05b9:;

c02_05b1:;

	i8 v6381 = (i8)(intptr_t)(ws+3176);
	i8 v6382 = *(i8*)(intptr_t)v6381;
	i8 v6383 = v6382+(+2);
	i8 v6384 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6384 = v6383;

	i8 v6385 = (i8)(intptr_t)(ws+3184);
	i1 v6386 = *(i1*)(intptr_t)v6385;
	i1 v6387 = v6386+(-1);
	i8 v6388 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6388 = v6387;

	goto c02_05ad;

c02_05b0:;

	i8 v6389 = (i8)(intptr_t)(ws+3184);
	i1 v6390 = *(i1*)(intptr_t)v6389;
	i1 v6391 = (i1)+0;
	if (v6390==v6391) goto c02_05c0; else goto c02_05bf;

c02_05bf:;

	i8 v6392 = (i8)(intptr_t)(ws+3176);
	i8 v6393 = *(i8*)(intptr_t)v6392;
	i1 v6394 = *(i1*)(intptr_t)v6393;
	i8 v6395 = (i8)(intptr_t)(ws+3176);
	i8 v6396 = *(i8*)(intptr_t)v6395;
	i8 v6397 = v6396+(+1);
	i1 v6398 = *(i1*)(intptr_t)v6397;
	f222_ArchEmitMove(v6398, v6394);

	i8 v6399 = (i8)(intptr_t)(ws+3169);
	i1 v6400 = *(i1*)(intptr_t)v6399;
	i8 v6401 = (i8)(intptr_t)(ws+3176);
	i8 v6402 = *(i8*)(intptr_t)v6401;
	i1 v6403 = *(i1*)(intptr_t)v6402;
	i1 v6404 = ~v6403;
	i1 v6405 = v6400&v6404;
	i8 v6406 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6406 = v6405;

	i8 v6407 = (i8)(intptr_t)(ws+3168);
	i1 v6408 = *(i1*)(intptr_t)v6407;
	i8 v6409 = (i8)(intptr_t)(ws+3176);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = v6410+(+1);
	i1 v6412 = *(i1*)(intptr_t)v6411;
	i1 v6413 = ~v6412;
	i1 v6414 = v6408&v6413;
	i8 v6415 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6415 = v6414;

	i1 v6416 = (i1)+0;
	i8 v6417 = (i8)(intptr_t)(ws+3176);
	i8 v6418 = *(i8*)(intptr_t)v6417;
	*(i1*)(intptr_t)v6418 = v6416;

	i1 v6419 = (i1)+0;
	i8 v6420 = (i8)(intptr_t)(ws+3176);
	i8 v6421 = *(i8*)(intptr_t)v6420;
	i8 v6422 = v6421+(+1);
	*(i1*)(intptr_t)v6422 = v6419;

	goto c02_0596;

c02_05c0:;

c02_05bc:;

	i8 v6423 = (i8)(intptr_t)(ws+3160);
	i8 v6424 = *(i8*)(intptr_t)v6423;
	i8 v6425 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6425 = v6424;

	i1 v6426 = (i1)+4;
	i8 v6427 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6427 = v6426;

c02_05c3:;

	i8 v6428 = (i8)(intptr_t)(ws+3184);
	i1 v6429 = *(i1*)(intptr_t)v6428;
	i1 v6430 = (i1)+0;
	if (v6429==v6430) goto c02_05c6; else goto c02_05c5;

c02_05c5:;

	i8 v6431 = (i8)(intptr_t)(ws+3176);
	i8 v6432 = *(i8*)(intptr_t)v6431;
	i1 v6433 = *(i1*)(intptr_t)v6432;
	i1 v6434 = (i1)+0;
	if (v6433==v6434) goto c02_05ce; else goto c02_05cd;

c02_05ce:;

	i8 v6435 = (i8)(intptr_t)(ws+3176);
	i8 v6436 = *(i8*)(intptr_t)v6435;
	i8 v6437 = v6436+(+1);
	i1 v6438 = *(i1*)(intptr_t)v6437;
	i1 v6439 = (i1)+0;
	if (v6438==v6439) goto c02_05cd; else goto c02_05cc;

c02_05cc:;

	goto c02_05c6;

c02_05cd:;

c02_05c7:;

	i8 v6440 = (i8)(intptr_t)(ws+3176);
	i8 v6441 = *(i8*)(intptr_t)v6440;
	i8 v6442 = v6441+(+2);
	i8 v6443 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6443 = v6442;

	i8 v6444 = (i8)(intptr_t)(ws+3184);
	i1 v6445 = *(i1*)(intptr_t)v6444;
	i1 v6446 = v6445+(-1);
	i8 v6447 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6447 = v6446;

	goto c02_05c3;

c02_05c6:;

	i8 v6448 = (i8)(intptr_t)(ws+3184);
	i1 v6449 = *(i1*)(intptr_t)v6448;
	i1 v6450 = (i1)+0;
	if (v6449==v6450) goto c02_05d3; else goto c02_05d2;

c02_05d2:;

	i1 v6451 = (i1)+0;
	i8 v6452 = (i8)(intptr_t)(ws+3176);
	i8 v6453 = *(i8*)(intptr_t)v6452;
	i8 v6454 = v6453+(+1);
	i1 v6455 = *(i1*)(intptr_t)v6454;
	f222_ArchEmitMove(v6455, v6451);

	i8 v6456 = (i8)(intptr_t)(ws+3168);
	i1 v6457 = *(i1*)(intptr_t)v6456;
	i8 v6458 = (i8)(intptr_t)(ws+3176);
	i8 v6459 = *(i8*)(intptr_t)v6458;
	i8 v6460 = v6459+(+1);
	i1 v6461 = *(i1*)(intptr_t)v6460;
	i1 v6462 = ~v6461;
	i1 v6463 = v6457&v6462;
	i8 v6464 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v6464 = v6463;

	i1 v6465 = (i1)+0;
	i8 v6466 = (i8)(intptr_t)(ws+3176);
	i8 v6467 = *(i8*)(intptr_t)v6466;
	i8 v6468 = v6467+(+1);
	*(i1*)(intptr_t)v6468 = v6465;

	goto c02_0596;

c02_05d3:;

c02_05cf:;

	i8 v6469 = (i8)(intptr_t)(ws+3160);
	i8 v6470 = *(i8*)(intptr_t)v6469;
	i8 v6471 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6471 = v6470;

	i1 v6472 = (i1)+4;
	i8 v6473 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6473 = v6472;

c02_05d6:;

	i8 v6474 = (i8)(intptr_t)(ws+3184);
	i1 v6475 = *(i1*)(intptr_t)v6474;
	i1 v6476 = (i1)+0;
	if (v6475==v6476) goto c02_05d9; else goto c02_05d8;

c02_05d8:;

	i8 v6477 = (i8)(intptr_t)(ws+3176);
	i8 v6478 = *(i8*)(intptr_t)v6477;
	i1 v6479 = *(i1*)(intptr_t)v6478;
	i1 v6480 = (i1)+0;
	if (v6479==v6480) goto c02_05e0; else goto c02_05e1;

c02_05e1:;

	i8 v6481 = (i8)(intptr_t)(ws+3176);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = v6482+(+1);
	i1 v6484 = *(i1*)(intptr_t)v6483;
	i1 v6485 = (i1)+0;
	if (v6484==v6485) goto c02_05e0; else goto c02_05df;

c02_05df:;

	goto c02_05d9;

c02_05e0:;

c02_05da:;

	i8 v6486 = (i8)(intptr_t)(ws+3176);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i8 v6488 = v6487+(+2);
	i8 v6489 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v6489 = v6488;

	i8 v6490 = (i8)(intptr_t)(ws+3184);
	i1 v6491 = *(i1*)(intptr_t)v6490;
	i1 v6492 = v6491+(-1);
	i8 v6493 = (i8)(intptr_t)(ws+3184);
	*(i1*)(intptr_t)v6493 = v6492;

	goto c02_05d6;

c02_05d9:;

	i8 v6494 = (i8)(intptr_t)(ws+3184);
	i1 v6495 = *(i1*)(intptr_t)v6494;
	i1 v6496 = (i1)+0;
	if (v6495==v6496) goto c02_05e6; else goto c02_05e5;

c02_05e5:;

	i8 v6497 = (i8)(intptr_t)(ws+3176);
	i8 v6498 = *(i8*)(intptr_t)v6497;
	i1 v6499 = *(i1*)(intptr_t)v6498;
	i1 v6500 = (i1)+0;
	f222_ArchEmitMove(v6500, v6499);

	i8 v6501 = (i8)(intptr_t)(ws+3169);
	i1 v6502 = *(i1*)(intptr_t)v6501;
	i8 v6503 = (i8)(intptr_t)(ws+3176);
	i8 v6504 = *(i8*)(intptr_t)v6503;
	i1 v6505 = *(i1*)(intptr_t)v6504;
	i1 v6506 = ~v6505;
	i1 v6507 = v6502&v6506;
	i8 v6508 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v6508 = v6507;

	i1 v6509 = (i1)+0;
	i8 v6510 = (i8)(intptr_t)(ws+3176);
	i8 v6511 = *(i8*)(intptr_t)v6510;
	*(i1*)(intptr_t)v6511 = v6509;

	goto c02_0596;

c02_05e6:;

c02_05e2:;

	goto c02_0597;

c02_0597:;

endsub:;
}

// PrintNodes workspace at ws+3176 length ws+24
void f424_PrintNodes(i8 p6512 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3176) = p6512; /*rootnode */

	i8 v6513 = (i8)(intptr_t)(ws+984);
	i8 v6514 = *(i8*)(intptr_t)v6513;
	i8 v6515 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6515 = v6514;

	i8 v6516 = (i8)(intptr_t)(ws+3176);
	i8 v6517 = *(i8*)(intptr_t)v6516;
	f415_PushNode(v6517);

c02_05e9:;

	i8 v6518 = (i8)(intptr_t)(ws+984);
	i8 v6519 = *(i8*)(intptr_t)v6518;
	i8 v6520 = (i8)(intptr_t)(ws+3184);
	i8 v6521 = *(i8*)(intptr_t)v6520;
	if (v6519==v6521) goto c02_05ec; else goto c02_05eb;

c02_05eb:;

	i8 v6522;
	f417_NextNode(&v6522);
	i8 v6523 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6523 = v6522;

	i8 v6524 = (i8)(intptr_t)(ws+3192);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	i8 v6526 = (i8)+0;
	if (v6525==v6526) goto c02_05f0; else goto c02_05f1;

c02_05f0:;

	goto c02_05ec;

c02_05f1:;

c02_05ed:;

	i8 v6527 = (i8)(intptr_t)(ws+3192);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i4 v6529 = v6528;
	f20_print_hex_i32(v6529);

	i1 v6530 = (i1)+32;
	f8_print_char(v6530);

	i8 v6531 = (i8)(intptr_t)(ws+3192);
	i8 v6532 = *(i8*)(intptr_t)v6531;
	i8 v6533 = v6532+(+66);
	i1 v6534 = *(i1*)(intptr_t)v6533;
	f17_print_i8(v6534);

	i1 v6535 = (i1)+32;
	f8_print_char(v6535);

	i8 v6536 = (i8)(intptr_t)(ws+3192);
	i8 v6537 = *(i8*)(intptr_t)v6536;
	i8 v6538 = v6537+(+64);
	i1 v6539 = *(i1*)(intptr_t)v6538;
	i2 v6540 = v6539;
	f19_print_hex_i16(v6540);

	i1 v6541 = (i1)+32;
	f8_print_char(v6541);

	i8 v6542 = (i8)(intptr_t)(ws+3192);
	i8 v6543 = *(i8*)(intptr_t)v6542;
	i8 v6544 = v6543+(+65);
	i1 v6545 = *(i1*)(intptr_t)v6544;
	i2 v6546 = v6545;
	f19_print_hex_i16(v6546);

	i1 v6547 = (i1)+32;
	f8_print_char(v6547);

	i8 v6548 = (i8)(intptr_t)(ws+3192);
	i8 v6549 = *(i8*)(intptr_t)v6548;
	i8 v6550 = v6549+(+24);
	i8 v6551 = *(i8*)(intptr_t)v6550;
	i4 v6552 = v6551;
	f20_print_hex_i32(v6552);

	i1 v6553 = (i1)+32;
	f8_print_char(v6553);

	i8 v6554 = (i8)(intptr_t)(ws+3192);
	i8 v6555 = *(i8*)(intptr_t)v6554;
	i8 v6556 = v6555+(+32);
	i8 v6557 = *(i8*)(intptr_t)v6556;
	i4 v6558 = v6557;
	f20_print_hex_i32(v6558);

	f12_print_nl();

	goto c02_05e9;

c02_05ec:;

endsub:;
}

// RewindRulePointers workspace at ws+3208 length ws+0
void f427_RewindRulePointers(void) {

	i8 v6599 = (i8)(intptr_t)(ws+3152);
	i8 v6600 = (i8)+3;
	f22_MemZero(v6600, v6599);

	i8 v6601 = (i8)(intptr_t)(ws+3160);
	i8 v6602 = (i8)+24;
	f22_MemZero(v6602, v6601);

	i8 v6603 = (i8)(intptr_t)(ws+3128);
	i8 v6604 = *(i8*)(intptr_t)v6603;
	i8 v6605 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v6605 = v6604;

	i8 v6606 = (i8)(intptr_t)(ws+3120);
	i8 v6607 = *(i8*)(intptr_t)v6606;
	i8 v6608 = (i8)(intptr_t)(ws+3160);
	i8 v6609 = (i8)(intptr_t)(ws+3152);
	f414_PopulateMatchBuffer(v6609, v6608, v6607);

	i1 v6610 = (i1)+255;
	i8 v6611 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v6611 = v6610;

	i8 v6612 = (i8)(intptr_t)(((i1*)c02_a549+0));
	i8 v6613 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6613 = v6612;

	i8 v6614 = (i8)(intptr_t)(((i1*)c02_a54a+0));
	i8 v6615 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6615 = v6614;

	i8 v6616 = (i8)(intptr_t)(((i1*)c02_a54b-7));
	i8 v6617 = (i8)(intptr_t)(ws+3144);
	*(i8*)(intptr_t)v6617 = v6616;

endsub:;
}

// TestRule workspace at ws+3208 length ws+27
void f428_TestRule(i1* p6618 /* result */) {

	i1 v6619 = (i1)+0;
	i8 v6620 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6620 = v6619;

	i8 v6621 = (i8)(intptr_t)(ws+3144);
	i8 v6622 = *(i8*)(intptr_t)v6621;
	i8 v6623 = v6622+(+1);
	i1 v6624 = *(i1*)(intptr_t)v6623;
	i1 v6625 = (i1)+0;
	if (v6624==v6625) goto c02_0601; else goto c02_0600;

c02_0600:;

	i8 v6626 = (i8)(intptr_t)(ws+3128);
	i8 v6627 = *(i8*)(intptr_t)v6626;
	i8 v6628 = v6627+(+64);
	i1 v6629 = *(i1*)(intptr_t)v6628;
	i8 v6630 = (i8)(intptr_t)(ws+3144);
	i8 v6631 = *(i8*)(intptr_t)v6630;
	i8 v6632 = v6631+(+1);
	i1 v6633 = *(i1*)(intptr_t)v6632;
	i1 v6634 = v6629&v6633;
	i1 v6635 = (i1)+0;
	if (v6634==v6635) goto c02_0605; else goto c02_0606;

c02_0605:;

	goto endsub;

c02_0606:;

c02_0602:;

	goto c02_05fd;

c02_0601:;

	i8 v6636 = (i8)(intptr_t)(ws+3128);
	i8 v6637 = *(i8*)(intptr_t)v6636;
	i8 v6638 = v6637+(+64);
	i1 v6639 = *(i1*)(intptr_t)v6638;
	i1 v6640 = (i1)+0;
	if (v6639==v6640) goto c02_060b; else goto c02_060a;

c02_060a:;

	goto endsub;

c02_060b:;

c02_0607:;

c02_05fd:;

	i8 v6641 = (i8)(intptr_t)(ws+3152);
	i8 v6642 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6642 = v6641;

	i8 v6643 = (i8)(intptr_t)(ws+3184);
	i8 v6644 = *(i8*)(intptr_t)v6643;
	i8 v6645 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6645 = v6644;

	i8 v6646 = (i8)(intptr_t)(ws+3144);
	i8 v6647 = *(i8*)(intptr_t)v6646;
	i8 v6648 = v6647+(+4);
	i1 v6649 = *(i1*)(intptr_t)v6648;
	i8 v6650 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6650 = v6649;

c02_060e:;

	i8 v6651 = (i8)(intptr_t)(ws+3232);
	i1 v6652 = *(i1*)(intptr_t)v6651;
	i1 v6653 = (i1)+0;
	if (v6652==v6653) goto c02_0611; else goto c02_0610;

c02_0610:;

	i8 v6654 = (i8)(intptr_t)(ws+3216);
	i8 v6655 = *(i8*)(intptr_t)v6654;
	i1 v6656 = *(i1*)(intptr_t)v6655;
	i8 v6657 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v6657 = v6656;

	i8 v6658 = (i8)(intptr_t)(ws+3216);
	i8 v6659 = *(i8*)(intptr_t)v6658;
	i8 v6660 = v6659+(+1);
	i8 v6661 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6661 = v6660;

	i8 v6662 = (i8)(intptr_t)(ws+3232);
	i1 v6663 = *(i1*)(intptr_t)v6662;
	i1 v6664 = v6663&(+1);
	i1 v6665 = (i1)+0;
	if (v6664==v6665) goto c02_0616; else goto c02_0615;

c02_0615:;

	i8 v6666 = (i8)(intptr_t)(ws+3224);
	i8 v6667 = *(i8*)(intptr_t)v6666;
	i1 v6668 = *(i1*)(intptr_t)v6667;
	i8 v6669 = (i8)(intptr_t)(ws+3234);
	*(i1*)(intptr_t)v6669 = v6668;

	i8 v6670 = (i8)(intptr_t)(ws+3224);
	i8 v6671 = *(i8*)(intptr_t)v6670;
	i8 v6672 = v6671+(+1);
	i8 v6673 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6673 = v6672;

	i8 v6674 = (i8)(intptr_t)(ws+3233);
	i1 v6675 = *(i1*)(intptr_t)v6674;
	i8 v6676 = (i8)(intptr_t)(ws+3234);
	i1 v6677 = *(i1*)(intptr_t)v6676;
	if (v6675==v6677) goto c02_061b; else goto c02_061a;

c02_061a:;

	goto endsub;

c02_061b:;

c02_0617:;

	goto c02_0612;

c02_0616:;

c02_0612:;

	i8 v6678 = (i8)(intptr_t)(ws+3232);
	i1 v6679 = *(i1*)(intptr_t)v6678;
	i1 v6680 = (i1)+1;
	i1 v6681 = ((i1)v6679)>>v6680;
	i8 v6682 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6682 = v6681;

	goto c02_060e;

c02_0611:;

	i8 v6683 = (i8)(intptr_t)(ws+3144);
	i8 v6684 = *(i8*)(intptr_t)v6683;
	i1 v6685 = *(i1*)(intptr_t)v6684;
	i1 v6686 = v6685&(+1);
	i1 v6687 = (i1)+0;
	if (v6686==v6687) goto c02_0622; else goto c02_0623;

c02_0623:;

	i8 v6688 = (i8)(intptr_t)(ws+3136);
	i1 v6689 = *(i1*)(intptr_t)v6688;
	i8 v6690 = (i8)(intptr_t)(ws+3160);
	i1 v6691;
	f242_MatchPredicate(&v6691, v6690, v6689);
	i1 v6692 = (i1)+0;
	if (v6691==v6692) goto c02_0621; else goto c02_0622;

c02_0621:;

	goto endsub;

c02_0622:;

c02_061c:;

	i1 v6693 = (i1)+1;
	i8 v6694 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6694 = v6693;

endsub:;
	*p6618 = *(i1*)(intptr_t)(ws+3208);
}

// ConvertNodeToFallback workspace at ws+3208 length ws+25
void f429_ConvertNodeToFallback(void) {

	i8 v6716 = (i8)(intptr_t)(ws+3128);
	i8 v6717 = *(i8*)(intptr_t)v6716;
	i8 v6718 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v6718 = v6717;

	i8 v6719 = (i8)(intptr_t)(ws+3208);
	i8 v6720 = *(i8*)(intptr_t)v6719;
	i8 v6721;
	f93_MidFallback(&v6721, v6720);
	i8 v6722 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v6722 = v6721;

	i8 v6723 = (i8)(intptr_t)(ws+3208);
	i8 v6724 = *(i8*)(intptr_t)v6723;
	i8 v6725 = v6724+(+56);
	i8 v6726 = *(i8*)(intptr_t)v6725;
	i8 v6727 = (i8)(intptr_t)(ws+3128);
	i8 v6728 = *(i8*)(intptr_t)v6727;
	i8 v6729 = v6728+(+56);
	*(i8*)(intptr_t)v6729 = v6726;

	i8 v6730 = (i8)(intptr_t)(ws+3128);
	i8 v6731 = *(i8*)(intptr_t)v6730;
	i8 v6732 = v6731+(+56);
	i8 v6733 = *(i8*)(intptr_t)v6732;
	i8 v6734 = v6733+(+16);
	i8 v6735 = *(i8*)(intptr_t)v6734;
	i8 v6736 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6736 = v6735;

	i8 v6737 = (i8)(intptr_t)(ws+3208);
	i8 v6738 = *(i8*)(intptr_t)v6737;
	i8 v6739 = v6738+(+64);
	i1 v6740 = *(i1*)(intptr_t)v6739;
	i8 v6741 = (i8)(intptr_t)(ws+3128);
	i8 v6742 = *(i8*)(intptr_t)v6741;
	i8 v6743 = v6742+(+64);
	*(i1*)(intptr_t)v6743 = v6740;

	i8 v6744 = (i8)(intptr_t)(ws+3216);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	i8 v6746 = v6745+(+48);
	i8 v6747 = *(i8*)(intptr_t)v6746;
	i8 v6748 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6748 = v6747;

	i1 v6749 = (i1)+0;
	i8 v6750 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6750 = v6749;

c02_0635:;

	i8 v6751 = (i8)(intptr_t)(ws+3232);
	i1 v6752 = *(i1*)(intptr_t)v6751;
	i1 v6753 = (i1)+3;
	if (v6752==v6753) goto c02_0638; else goto c02_0637;

c02_0637:;

	i8 v6754 = (i8)(intptr_t)(ws+3224);
	i8 v6755 = *(i8*)(intptr_t)v6754;
	i8 v6756 = v6755+(+16);
	i8 v6757 = (i8)(intptr_t)(ws+3232);
	i1 v6758 = *(i1*)(intptr_t)v6757;
	i8 v6759 = v6758;
	i1 v6760 = (i1)+3;
	i8 v6761 = ((i8)v6759)<<v6760;
	i8 v6762 = v6756+v6761;
	i8 v6763 = *(i8*)(intptr_t)v6762;
	i8 v6764 = (i8)(intptr_t)(ws+3208);
	i8 v6765 = *(i8*)(intptr_t)v6764;
	if (v6763==v6765) goto c02_063c; else goto c02_063d;

c02_063c:;

	i8 v6766 = (i8)(intptr_t)(ws+3128);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	i8 v6768 = (i8)(intptr_t)(ws+3224);
	i8 v6769 = *(i8*)(intptr_t)v6768;
	i8 v6770 = v6769+(+16);
	i8 v6771 = (i8)(intptr_t)(ws+3232);
	i1 v6772 = *(i1*)(intptr_t)v6771;
	i8 v6773 = v6772;
	i1 v6774 = (i1)+3;
	i8 v6775 = ((i8)v6773)<<v6774;
	i8 v6776 = v6770+v6775;
	*(i8*)(intptr_t)v6776 = v6767;

	goto c02_0639;

c02_063d:;

c02_0639:;

	i8 v6777 = (i8)(intptr_t)(ws+3232);
	i1 v6778 = *(i1*)(intptr_t)v6777;
	i1 v6779 = v6778+(+1);
	i8 v6780 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v6780 = v6779;

	goto c02_0635;

c02_0638:;

endsub:;
}
const i1 c02_s015c[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
const i1 c02_s015d[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };

// CopyChildNodes workspace at ws+3208 length ws+16
void f430_CopyChildNodes(void) {

	i8 v6867 = (i8)(intptr_t)(ws+3144);
	i8 v6868 = *(i8*)(intptr_t)v6867;
	i8 v6869 = v6868+(+5);
	i1 v6870 = *(i1*)(intptr_t)v6869;
	i8 v6871 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6871 = v6870;

	i8 v6872 = (i8)(intptr_t)(ws+3144);
	i8 v6873 = *(i8*)(intptr_t)v6872;
	i8 v6874 = v6873+(+6);
	i1 v6875 = *(i1*)(intptr_t)v6874;
	i8 v6876 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v6876 = v6875;

	i1 v6877 = (i1)+0;
	i8 v6878 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6878 = v6877;

c02_0661:;

	i8 v6879 = (i8)(intptr_t)(ws+3088);
	i1 v6880 = *(i1*)(intptr_t)v6879;
	i1 v6881 = (i1)+3;
	if (v6880==v6881) goto c02_0664; else goto c02_0663;

c02_0663:;

	i8 v6882 = (i8)(intptr_t)(ws+3160);
	i8 v6883 = (i8)(intptr_t)(ws+3088);
	i1 v6884 = *(i1*)(intptr_t)v6883;
	i8 v6885 = v6884;
	i1 v6886 = (i1)+3;
	i8 v6887 = ((i8)v6885)<<v6886;
	i8 v6888 = v6882+v6887;
	i8 v6889 = *(i8*)(intptr_t)v6888;
	i8 v6890 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6890 = v6889;

	i8 v6891 = (i8)(intptr_t)(ws+3208);
	i1 v6892 = *(i1*)(intptr_t)v6891;
	i1 v6893 = v6892&(+1);
	i1 v6894 = (i1)+0;
	if (v6893==v6894) goto c02_0669; else goto c02_0668;

c02_0668:;

	i8 v6895 = (i8)(intptr_t)(ws+3216);
	i8 v6896 = *(i8*)(intptr_t)v6895;
	i8 v6897 = (i8)(intptr_t)(ws+3120);
	i8 v6898 = *(i8*)(intptr_t)v6897;
	i8 v6899 = v6898+(+16);
	i8 v6900 = (i8)(intptr_t)(ws+3088);
	i1 v6901 = *(i1*)(intptr_t)v6900;
	i8 v6902 = v6901;
	i1 v6903 = (i1)+3;
	i8 v6904 = ((i8)v6902)<<v6903;
	i8 v6905 = v6899+v6904;
	*(i8*)(intptr_t)v6905 = v6896;

	i8 v6906 = (i8)(intptr_t)(ws+3209);
	i1 v6907 = *(i1*)(intptr_t)v6906;
	i1 v6908 = v6907&(+1);
	i1 v6909 = (i1)+0;
	if (v6908==v6909) goto c02_066e; else goto c02_066d;

c02_066d:;

	i8 v6910 = (i8)(intptr_t)(ws+3216);
	i8 v6911 = *(i8*)(intptr_t)v6910;
	f415_PushNode(v6911);

	i8 v6912 = (i8)(intptr_t)(ws+3192);
	i8 v6913 = *(i8*)(intptr_t)v6912;
	i1 v6914 = *(i1*)(intptr_t)v6913;
	i8 v6915 = (i8)(intptr_t)(ws+3216);
	i8 v6916 = *(i8*)(intptr_t)v6915;
	i8 v6917 = v6916+(+64);
	*(i1*)(intptr_t)v6917 = v6914;

	i8 v6918 = (i8)(intptr_t)(ws+3192);
	i8 v6919 = *(i8*)(intptr_t)v6918;
	i8 v6920 = v6919+(+1);
	i8 v6921 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6921 = v6920;

	i8 v6922 = (i8)(intptr_t)(ws+3120);
	i8 v6923 = *(i8*)(intptr_t)v6922;
	i8 v6924 = (i8)(intptr_t)(ws+3216);
	i8 v6925 = *(i8*)(intptr_t)v6924;
	i8 v6926 = v6925+(+56);
	*(i8*)(intptr_t)v6926 = v6923;

	goto c02_066a;

c02_066e:;

c02_066a:;

	goto c02_0665;

c02_0669:;

c02_0665:;

	i8 v6927 = (i8)(intptr_t)(ws+3208);
	i1 v6928 = *(i1*)(intptr_t)v6927;
	i1 v6929 = (i1)+1;
	i1 v6930 = ((i1)v6928)>>v6929;
	i8 v6931 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6931 = v6930;

	i8 v6932 = (i8)(intptr_t)(ws+3209);
	i1 v6933 = *(i1*)(intptr_t)v6932;
	i1 v6934 = (i1)+1;
	i1 v6935 = ((i1)v6933)>>v6934;
	i8 v6936 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v6936 = v6935;

	i8 v6937 = (i8)(intptr_t)(ws+3088);
	i1 v6938 = *(i1*)(intptr_t)v6937;
	i1 v6939 = v6938+(+1);
	i8 v6940 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6940 = v6939;

	goto c02_0661;

c02_0664:;

	i8 v6941 = (i8)(intptr_t)(ws+3120);
	i8 v6942 = *(i8*)(intptr_t)v6941;
	i8 v6943 = (i8)(intptr_t)(ws+3128);
	i8 v6944 = *(i8*)(intptr_t)v6943;
	i8 v6945 = v6944+(+48);
	*(i8*)(intptr_t)v6945 = v6942;

endsub:;
}

// InstructionMatcher workspace at ws+3152 length ws+49
void f426_InstructionMatcher(void) {



	f427_RewindRulePointers();

c02_0624:;

	i8 v6695 = (i8)(intptr_t)(ws+3144);
	i8 v6696 = *(i8*)(intptr_t)v6695;
	i8 v6697 = v6696+(+7);
	i8 v6698 = (i8)(intptr_t)(ws+3144);
	*(i8*)(intptr_t)v6698 = v6697;

	i8 v6699 = (i8)(intptr_t)(ws+3136);
	i1 v6700 = *(i1*)(intptr_t)v6699;
	i1 v6701 = v6700+(+1);
	i8 v6702 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v6702 = v6701;

	i8 v6703 = (i8)(intptr_t)(ws+3144);
	i8 v6704 = *(i8*)(intptr_t)v6703;
	i8 v6705 = (i8)(intptr_t)(((i1*)c02_a54b+1288));
	if (v6704==v6705) goto c02_0629; else goto c02_062a;

c02_0629:;

	i8 v6706 = (i8)(intptr_t)(ws+3128);
	i8 v6707 = *(i8*)(intptr_t)v6706;
	i8 v6708 = v6707+(+66);
	i1 v6709 = *(i1*)(intptr_t)v6708;
	i1 v6710 = (i1)+19;
	if (v6709==v6710) goto c02_0631; else goto c02_0632;

c02_0632:;

	i8 v6711 = (i8)(intptr_t)(ws+3128);
	i8 v6712 = *(i8*)(intptr_t)v6711;
	i8 v6713 = v6712+(+56);
	i8 v6714 = *(i8*)(intptr_t)v6713;
	i8 v6715 = (i8)+0;
	if (v6714==v6715) goto c02_0631; else goto c02_0630;

c02_0630:;


	f429_ConvertNodeToFallback();

	f427_RewindRulePointers();

	goto c02_0624;

c02_0631:;

c02_062b:;

	f55_StartError();

	i8 v6781 = (i8)(intptr_t)c02_s015c;
	f11_print(v6781);

	i1 v6782 = (i1)+0;
	i8 v6783 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6783 = v6782;

c02_0640:;

	i8 v6784 = (i8)(intptr_t)(ws+3088);
	i1 v6785 = *(i1*)(intptr_t)v6784;
	i1 v6786 = (i1)+3;
	if (v6785==v6786) goto c02_0643; else goto c02_0642;

c02_0642:;

	i8 v6787 = (i8)(intptr_t)(ws+3152);
	i8 v6788 = (i8)(intptr_t)(ws+3088);
	i1 v6789 = *(i1*)(intptr_t)v6788;
	i8 v6790 = v6789;
	i8 v6791 = v6787+v6790;
	i1 v6792 = *(i1*)(intptr_t)v6791;
	f17_print_i8(v6792);

	i1 v6793 = (i1)+32;
	f8_print_char(v6793);

	i8 v6794 = (i8)(intptr_t)(ws+3088);
	i1 v6795 = *(i1*)(intptr_t)v6794;
	i1 v6796 = v6795+(+1);
	i8 v6797 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v6797 = v6796;

	goto c02_0640;

c02_0643:;

	i8 v6798 = (i8)(intptr_t)c02_s015d;
	f11_print(v6798);

	i8 v6799 = (i8)(intptr_t)(ws+3128);
	i8 v6800 = *(i8*)(intptr_t)v6799;
	i8 v6801 = v6800+(+64);
	i1 v6802 = *(i1*)(intptr_t)v6801;
	i4 v6803 = v6802;
	f20_print_hex_i32(v6803);

	f56_EndError();

	goto c02_0626;

c02_062a:;

c02_0626:;

	i1 v6804;
	f428_TestRule(&v6804);
	i1 v6805 = (i1)+0;
	if (v6804==v6805) goto c02_0648; else goto c02_0647;

c02_0647:;

	goto c02_0625;

c02_0648:;

c02_0644:;

	i8 v6806 = (i8)(intptr_t)(ws+3144);
	i8 v6807 = *(i8*)(intptr_t)v6806;
	i8 v6808 = v6807+(+4);
	i1 v6809 = *(i1*)(intptr_t)v6808;
	i8 v6810 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6810 = v6809;

c02_064b:;

	i8 v6811 = (i8)(intptr_t)(ws+3200);
	i1 v6812 = *(i1*)(intptr_t)v6811;
	i1 v6813 = (i1)+0;
	if (v6812==v6813) goto c02_064e; else goto c02_064d;

c02_064d:;

	i8 v6814 = (i8)(intptr_t)(ws+3200);
	i1 v6815 = *(i1*)(intptr_t)v6814;
	i1 v6816 = v6815&(+1);
	i1 v6817 = (i1)+0;
	if (v6816==v6817) goto c02_0653; else goto c02_0652;

c02_0652:;

	i8 v6818 = (i8)(intptr_t)(ws+3184);
	i8 v6819 = *(i8*)(intptr_t)v6818;
	i8 v6820 = v6819+(+1);
	i8 v6821 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6821 = v6820;

	goto c02_064f;

c02_0653:;

c02_064f:;

	i8 v6822 = (i8)(intptr_t)(ws+3200);
	i1 v6823 = *(i1*)(intptr_t)v6822;
	i1 v6824 = (i1)+1;
	i1 v6825 = ((i1)v6823)>>v6824;
	i8 v6826 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6826 = v6825;

	goto c02_064b;

c02_064e:;

	i8 v6827 = (i8)(intptr_t)(ws+3144);
	i8 v6828 = *(i8*)(intptr_t)v6827;
	i8 v6829 = v6828+(+6);
	i1 v6830 = *(i1*)(intptr_t)v6829;
	i8 v6831 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6831 = v6830;

c02_0656:;

	i8 v6832 = (i8)(intptr_t)(ws+3200);
	i1 v6833 = *(i1*)(intptr_t)v6832;
	i1 v6834 = (i1)+0;
	if (v6833==v6834) goto c02_0659; else goto c02_0658;

c02_0658:;

	i8 v6835 = (i8)(intptr_t)(ws+3200);
	i1 v6836 = *(i1*)(intptr_t)v6835;
	i1 v6837 = v6836&(+1);
	i1 v6838 = (i1)+0;
	if (v6837==v6838) goto c02_065e; else goto c02_065d;

c02_065d:;

	i8 v6839 = (i8)(intptr_t)(ws+3192);
	i8 v6840 = *(i8*)(intptr_t)v6839;
	i8 v6841 = v6840+(+1);
	i8 v6842 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6842 = v6841;

	goto c02_065a;

c02_065e:;

c02_065a:;

	i8 v6843 = (i8)(intptr_t)(ws+3200);
	i1 v6844 = *(i1*)(intptr_t)v6843;
	i1 v6845 = (i1)+1;
	i1 v6846 = ((i1)v6844)>>v6845;
	i8 v6847 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6847 = v6846;

	goto c02_0656;

c02_0659:;

	goto c02_0624;

c02_0625:;

	i8 v6848 = (i8)(intptr_t)(ws+3136);
	i1 v6849 = *(i1*)(intptr_t)v6848;
	i8 v6850 = (i8)(intptr_t)(ws+3120);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = v6851+(+62);
	*(i1*)(intptr_t)v6852 = v6849;

	i8 v6853 = (i8)(intptr_t)(ws+3144);
	i8 v6854 = *(i8*)(intptr_t)v6853;
	i8 v6855 = v6854+(+2);
	i1 v6856 = *(i1*)(intptr_t)v6855;
	i8 v6857 = (i8)(intptr_t)(ws+3120);
	i8 v6858 = *(i8*)(intptr_t)v6857;
	i8 v6859 = v6858+(+40);
	*(i1*)(intptr_t)v6859 = v6856;

	i8 v6860 = (i8)(intptr_t)(ws+3144);
	i8 v6861 = *(i8*)(intptr_t)v6860;
	i8 v6862 = v6861+(+3);
	i1 v6863 = *(i1*)(intptr_t)v6862;
	i8 v6864 = (i8)(intptr_t)(ws+3120);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	i8 v6866 = v6865+(+43);
	*(i1*)(intptr_t)v6866 = v6863;


	f430_CopyChildNodes();

endsub:;
}
const i1 c02_s015e[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
const i1 c02_s015f[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
const i1 c02_s0160[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s0161[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s0162[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
const i1 c02_s0163[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s0164[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };

// deadlock workspace at ws+3176 length ws+0
void f432_deadlock(void) {

	i8 v7283 = (i8)(intptr_t)(ws+3080);
	i8 v7284 = *(i8*)(intptr_t)v7283;
	f424_PrintNodes(v7284);

	i8 v7285 = (i8)(intptr_t)c02_s015e;
	f11_print(v7285);

	i8 v7286 = (i8)(intptr_t)(ws+3120);
	i8 v7287 = *(i8*)(intptr_t)v7286;
	i8 v7288 = v7287+(+16);
	i8 v7289 = *(i8*)(intptr_t)v7288;
	i4 v7290 = v7289;
	f20_print_hex_i32(v7290);

	f12_print_nl();

	i8 v7291 = (i8)(intptr_t)c02_s015f;
	f11_print(v7291);

	i8 v7292 = (i8)(intptr_t)(ws+3160);
	i8 v7293 = *(i8*)(intptr_t)v7292;
	i8 v7294 = v7293+(+16);
	i8 v7295 = *(i8*)(intptr_t)v7294;
	i4 v7296 = v7295;
	f20_print_hex_i32(v7296);

	f12_print_nl();

	i8 v7297 = (i8)(intptr_t)c02_s0160;
	f11_print(v7297);

	i8 v7298 = (i8)(intptr_t)(ws+3120);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = v7299+(+40);
	i1 v7301 = *(i1*)(intptr_t)v7300;
	i4 v7302 = v7301;
	f20_print_hex_i32(v7302);

	f12_print_nl();

	i8 v7303 = (i8)(intptr_t)c02_s0161;
	f11_print(v7303);

	i8 v7304 = (i8)(intptr_t)(ws+3120);
	i8 v7305 = *(i8*)(intptr_t)v7304;
	i8 v7306 = v7305+(+43);
	i1 v7307 = *(i1*)(intptr_t)v7306;
	i4 v7308 = v7307;
	f20_print_hex_i32(v7308);

	f12_print_nl();

	i8 v7309 = (i8)(intptr_t)c02_s0162;
	f11_print(v7309);

	i8 v7310 = (i8)(intptr_t)(ws+3128);
	i8 v7311 = *(i8*)(intptr_t)v7310;
	i8 v7312 = v7311+(+64);
	i1 v7313 = *(i1*)(intptr_t)v7312;
	i4 v7314 = v7313;
	f20_print_hex_i32(v7314);

	f12_print_nl();

	i8 v7315 = (i8)(intptr_t)c02_s0163;
	f11_print(v7315);

	i8 v7316 = (i8)(intptr_t)(ws+3160);
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = v7317+(+42);
	i1 v7319 = *(i1*)(intptr_t)v7318;
	i4 v7320 = v7319;
	f20_print_hex_i32(v7320);

	f12_print_nl();

	i8 v7321 = (i8)(intptr_t)c02_s0164;
	f57_SimpleError(v7321);

endsub:;
}

// AllocateRegister workspace at ws+3152 length ws+20
void f431_AllocateRegister(void) {

	i8 v6951 = (i8)(intptr_t)(ws+3120);
	i8 v6952 = *(i8*)(intptr_t)v6951;
	i8 v6953 = v6952+(+40);
	i1 v6954 = *(i1*)(intptr_t)v6953;
	i1 v6955;
	f418_IsStackedRegister(&v6955, v6954);
	i1 v6956 = (i1)+0;
	if (v6955==v6956) goto c02_0678; else goto c02_0677;

c02_0677:;

	i8 v6957 = (i8)(intptr_t)(ws+3128);
	i8 v6958 = *(i8*)(intptr_t)v6957;
	i8 v6959 = v6958+(+64);
	i1 v6960 = *(i1*)(intptr_t)v6959;
	i8 v6961 = (i8)(intptr_t)(ws+3120);
	i8 v6962 = *(i8*)(intptr_t)v6961;
	i8 v6963 = v6962+(+40);
	i1 v6964 = *(i1*)(intptr_t)v6963;
	i1 v6965 = v6960&v6964;
	i8 v6966 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v6966 = v6965;

	i8 v6967 = (i8)(intptr_t)(ws+3152);
	i1 v6968 = *(i1*)(intptr_t)v6967;
	i1 v6969 = (i1)+0;
	if (v6968==v6969) goto c02_067d; else goto c02_067c;

c02_067c:;

	i8 v6970 = (i8)(intptr_t)(ws+3152);
	i1 v6971 = *(i1*)(intptr_t)v6970;
	i1 v6972;
	f208_FindFirst(&v6972, v6971);
	i8 v6973 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v6973 = v6972;

	i8 v6974 = (i8)(intptr_t)(ws+3152);
	i1 v6975 = *(i1*)(intptr_t)v6974;
	i8 v6976 = (i8)(intptr_t)(ws+3128);
	i8 v6977 = *(i8*)(intptr_t)v6976;
	i8 v6978 = v6977+(+65);
	*(i1*)(intptr_t)v6978 = v6975;

	i8 v6979 = (i8)(intptr_t)(ws+3152);
	i1 v6980 = *(i1*)(intptr_t)v6979;
	i8 v6981 = (i8)(intptr_t)(ws+3120);
	i8 v6982 = *(i8*)(intptr_t)v6981;
	i8 v6983 = v6982+(+41);
	*(i1*)(intptr_t)v6983 = v6980;

	goto c02_0679;

c02_067d:;

	i8 v6984 = (i8)(intptr_t)(ws+3120);
	i8 v6985 = *(i8*)(intptr_t)v6984;
	i8 v6986 = v6985+(+40);
	i1 v6987 = *(i1*)(intptr_t)v6986;
	i1 v6988;
	f208_FindFirst(&v6988, v6987);
	i8 v6989 = (i8)(intptr_t)(ws+3120);
	i8 v6990 = *(i8*)(intptr_t)v6989;
	i8 v6991 = v6990+(+41);
	*(i1*)(intptr_t)v6991 = v6988;

	i8 v6992 = (i8)(intptr_t)(ws+3128);
	i8 v6993 = *(i8*)(intptr_t)v6992;
	i8 v6994 = v6993+(+64);
	i1 v6995 = *(i1*)(intptr_t)v6994;
	i1 v6996;
	f208_FindFirst(&v6996, v6995);
	i8 v6997 = (i8)(intptr_t)(ws+3128);
	i8 v6998 = *(i8*)(intptr_t)v6997;
	i8 v6999 = v6998+(+65);
	*(i1*)(intptr_t)v6999 = v6996;

	i8 v7000 = (i8)(intptr_t)(ws+3120);
	i8 v7001 = *(i8*)(intptr_t)v7000;
	i8 v7002 = (i8)(intptr_t)(ws+3120);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = v7003+(+41);
	i1 v7005 = *(i1*)(intptr_t)v7004;
	i8 v7006 = (i8)(intptr_t)(ws+3128);
	i8 v7007 = *(i8*)(intptr_t)v7006;
	i8 v7008 = v7007+(+65);
	i1 v7009 = *(i1*)(intptr_t)v7008;
	f421_CreateSpill(v7009, v7005, v7001);

c02_0679:;

	goto c02_0674;

c02_0678:;

	i8 v7010 = (i8)(intptr_t)(ws+3128);
	i8 v7011 = *(i8*)(intptr_t)v7010;
	i8 v7012 = v7011+(+56);
	i8 v7013 = *(i8*)(intptr_t)v7012;
	i8 v7014 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v7014 = v7013;

	i8 v7015 = (i8)(intptr_t)(ws+3160);
	i8 v7016 = *(i8*)(intptr_t)v7015;
	i8 v7017 = (i8)(intptr_t)(ws+3120);
	i8 v7018 = *(i8*)(intptr_t)v7017;
	i1 v7019;
	f419_CalculateBlockedRegisters(&v7019, v7018, v7016);
	i8 v7020 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7020 = v7019;

	i8 v7021 = (i8)(intptr_t)(ws+3128);
	i8 v7022 = *(i8*)(intptr_t)v7021;
	i8 v7023 = v7022+(+64);
	i1 v7024 = *(i1*)(intptr_t)v7023;
	i8 v7025 = (i8)(intptr_t)(ws+3120);
	i8 v7026 = *(i8*)(intptr_t)v7025;
	i8 v7027 = v7026+(+40);
	i1 v7028 = *(i1*)(intptr_t)v7027;
	i1 v7029 = v7024&v7028;
	i8 v7030 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7030 = v7029;

	i8 v7031 = (i8)(intptr_t)(ws+3152);
	i1 v7032 = *(i1*)(intptr_t)v7031;
	i8 v7033 = (i8)(intptr_t)(ws+3168);
	i1 v7034 = *(i1*)(intptr_t)v7033;
	i8 v7035 = (i8)(intptr_t)(ws+3120);
	i8 v7036 = *(i8*)(intptr_t)v7035;
	i8 v7037 = v7036+(+43);
	i1 v7038 = *(i1*)(intptr_t)v7037;
	i1 v7039 = v7034|v7038;
	i8 v7040 = (i8)(intptr_t)(ws+3160);
	i8 v7041 = *(i8*)(intptr_t)v7040;
	i8 v7042 = v7041+(+42);
	i1 v7043 = *(i1*)(intptr_t)v7042;
	i1 v7044 = v7039|v7043;
	i1 v7045 = ~v7044;
	i1 v7046 = v7032&v7045;
	i8 v7047 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v7047 = v7046;

	i8 v7048 = (i8)(intptr_t)(ws+3169);
	i1 v7049 = *(i1*)(intptr_t)v7048;
	i1 v7050 = (i1)+0;
	if (v7049==v7050) goto c02_0682; else goto c02_0681;

c02_0681:;

	i8 v7051 = (i8)(intptr_t)(ws+3169);
	i1 v7052 = *(i1*)(intptr_t)v7051;
	i1 v7053;
	f208_FindFirst(&v7053, v7052);
	i8 v7054 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7054 = v7053;

	i8 v7055 = (i8)(intptr_t)(ws+3152);
	i1 v7056 = *(i1*)(intptr_t)v7055;
	i8 v7057 = (i8)(intptr_t)(ws+3128);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = v7058+(+65);
	*(i1*)(intptr_t)v7059 = v7056;

	i8 v7060 = (i8)(intptr_t)(ws+3152);
	i1 v7061 = *(i1*)(intptr_t)v7060;
	i8 v7062 = (i8)(intptr_t)(ws+3120);
	i8 v7063 = *(i8*)(intptr_t)v7062;
	i8 v7064 = v7063+(+41);
	*(i1*)(intptr_t)v7064 = v7061;

	i8 v7065 = (i8)(intptr_t)(ws+3152);
	i1 v7066 = *(i1*)(intptr_t)v7065;
	i1 v7067;
	f206_FindConflictingRegisters(&v7067, v7066);
	i8 v7068 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7068 = v7067;

	i8 v7069 = (i8)(intptr_t)(ws+3160);
	i8 v7070 = *(i8*)(intptr_t)v7069;
	i8 v7071 = v7070+(+42);
	i1 v7072 = *(i1*)(intptr_t)v7071;
	i8 v7073 = (i8)(intptr_t)(ws+3168);
	i1 v7074 = *(i1*)(intptr_t)v7073;
	i1 v7075 = v7072|v7074;
	i8 v7076 = (i8)(intptr_t)(ws+3160);
	i8 v7077 = *(i8*)(intptr_t)v7076;
	i8 v7078 = v7077+(+42);
	*(i1*)(intptr_t)v7078 = v7075;

	i8 v7079 = (i8)(intptr_t)(ws+3160);
	i8 v7080 = *(i8*)(intptr_t)v7079;
	i8 v7081 = (i8)(intptr_t)(ws+3120);
	i8 v7082 = *(i8*)(intptr_t)v7081;
	i8 v7083 = (i8)(intptr_t)(ws+3168);
	i1 v7084 = *(i1*)(intptr_t)v7083;
	f420_BlockRegisters(v7084, v7082, v7080);

	i8 v7085 = (i8)(intptr_t)(ws+3120);
	i8 v7086 = *(i8*)(intptr_t)v7085;
	i8 v7087 = v7086+(+43);
	i1 v7088 = *(i1*)(intptr_t)v7087;
	i8 v7089 = (i8)(intptr_t)(ws+3168);
	i1 v7090 = *(i1*)(intptr_t)v7089;
	i1 v7091 = v7088|v7090;
	i8 v7092 = (i8)(intptr_t)(ws+3120);
	i8 v7093 = *(i8*)(intptr_t)v7092;
	i8 v7094 = v7093+(+43);
	*(i1*)(intptr_t)v7094 = v7091;

	goto c02_067e;

c02_0682:;

	i8 v7095 = (i8)(intptr_t)(ws+3128);
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i8 v7097 = v7096+(+64);
	i1 v7098 = *(i1*)(intptr_t)v7097;
	i1 v7099;
	f207_FindCompatibleRegisters(&v7099, v7098);
	i8 v7100 = (i8)(intptr_t)(ws+3170);
	*(i1*)(intptr_t)v7100 = v7099;

	i8 v7101 = (i8)(intptr_t)(ws+3120);
	i8 v7102 = *(i8*)(intptr_t)v7101;
	i8 v7103 = v7102+(+40);
	i1 v7104 = *(i1*)(intptr_t)v7103;
	i8 v7105 = (i8)(intptr_t)(ws+3170);
	i1 v7106 = *(i1*)(intptr_t)v7105;
	i1 v7107 = v7104&v7106;
	i8 v7108 = (i8)(intptr_t)(ws+3168);
	i1 v7109 = *(i1*)(intptr_t)v7108;
	i8 v7110 = (i8)(intptr_t)(ws+3120);
	i8 v7111 = *(i8*)(intptr_t)v7110;
	i8 v7112 = v7111+(+43);
	i1 v7113 = *(i1*)(intptr_t)v7112;
	i1 v7114 = v7109|v7113;
	i1 v7115 = ~v7114;
	i1 v7116 = v7107&v7115;
	i8 v7117 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v7117 = v7116;

	i8 v7118 = (i8)(intptr_t)(ws+3128);
	i8 v7119 = *(i8*)(intptr_t)v7118;
	i8 v7120 = v7119+(+64);
	i1 v7121 = *(i1*)(intptr_t)v7120;
	i8 v7122 = (i8)(intptr_t)(ws+3160);
	i8 v7123 = *(i8*)(intptr_t)v7122;
	i8 v7124 = v7123+(+42);
	i1 v7125 = *(i1*)(intptr_t)v7124;
	i1 v7126 = ~v7125;
	i1 v7127 = v7121&v7126;
	i8 v7128 = (i8)(intptr_t)(ws+3171);
	*(i1*)(intptr_t)v7128 = v7127;

	i8 v7129 = (i8)(intptr_t)(ws+3169);
	i1 v7130 = *(i1*)(intptr_t)v7129;
	i1 v7131 = (i1)+0;
	if (v7130==v7131) goto c02_0689; else goto c02_068a;

c02_068a:;

	i8 v7132 = (i8)(intptr_t)(ws+3171);
	i1 v7133 = *(i1*)(intptr_t)v7132;
	i1 v7134 = (i1)+0;
	if (v7133==v7134) goto c02_0689; else goto c02_0688;

c02_0688:;

	i8 v7135 = (i8)(intptr_t)(ws+3169);
	i1 v7136 = *(i1*)(intptr_t)v7135;
	i1 v7137;
	f208_FindFirst(&v7137, v7136);
	i8 v7138 = (i8)(intptr_t)(ws+3120);
	i8 v7139 = *(i8*)(intptr_t)v7138;
	i8 v7140 = v7139+(+41);
	*(i1*)(intptr_t)v7140 = v7137;

	i8 v7141 = (i8)(intptr_t)(ws+3171);
	i1 v7142 = *(i1*)(intptr_t)v7141;
	i1 v7143;
	f208_FindFirst(&v7143, v7142);
	i8 v7144 = (i8)(intptr_t)(ws+3128);
	i8 v7145 = *(i8*)(intptr_t)v7144;
	i8 v7146 = v7145+(+65);
	*(i1*)(intptr_t)v7146 = v7143;

	i8 v7147 = (i8)(intptr_t)(ws+3160);
	i8 v7148 = *(i8*)(intptr_t)v7147;
	i8 v7149 = v7148+(+42);
	i1 v7150 = *(i1*)(intptr_t)v7149;
	i8 v7151 = (i8)(intptr_t)(ws+3128);
	i8 v7152 = *(i8*)(intptr_t)v7151;
	i8 v7153 = v7152+(+65);
	i1 v7154 = *(i1*)(intptr_t)v7153;
	i1 v7155;
	f206_FindConflictingRegisters(&v7155, v7154);
	i1 v7156 = v7150|v7155;
	i8 v7157 = (i8)(intptr_t)(ws+3160);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = v7158+(+42);
	*(i1*)(intptr_t)v7159 = v7156;

	i8 v7160 = (i8)(intptr_t)(ws+3120);
	i8 v7161 = *(i8*)(intptr_t)v7160;
	i8 v7162 = v7161+(+41);
	i1 v7163 = *(i1*)(intptr_t)v7162;
	i1 v7164;
	f206_FindConflictingRegisters(&v7164, v7163);
	i8 v7165 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7165 = v7164;

	i8 v7166 = (i8)(intptr_t)(ws+3160);
	i8 v7167 = *(i8*)(intptr_t)v7166;
	i8 v7168 = (i8)(intptr_t)(ws+3120);
	i8 v7169 = *(i8*)(intptr_t)v7168;
	i8 v7170 = (i8)(intptr_t)(ws+3168);
	i1 v7171 = *(i1*)(intptr_t)v7170;
	f420_BlockRegisters(v7171, v7169, v7167);

	i8 v7172 = (i8)(intptr_t)(ws+3120);
	i8 v7173 = *(i8*)(intptr_t)v7172;
	i8 v7174 = v7173+(+43);
	i1 v7175 = *(i1*)(intptr_t)v7174;
	i8 v7176 = (i8)(intptr_t)(ws+3168);
	i1 v7177 = *(i1*)(intptr_t)v7176;
	i1 v7178 = v7175|v7177;
	i8 v7179 = (i8)(intptr_t)(ws+3120);
	i8 v7180 = *(i8*)(intptr_t)v7179;
	i8 v7181 = v7180+(+43);
	*(i1*)(intptr_t)v7181 = v7178;

	i8 v7182 = (i8)(intptr_t)(ws+3160);
	i8 v7183 = *(i8*)(intptr_t)v7182;
	i8 v7184 = (i8)(intptr_t)(ws+3120);
	i8 v7185 = *(i8*)(intptr_t)v7184;
	i8 v7186 = v7185+(+41);
	i1 v7187 = *(i1*)(intptr_t)v7186;
	i8 v7188 = (i8)(intptr_t)(ws+3128);
	i8 v7189 = *(i8*)(intptr_t)v7188;
	i8 v7190 = v7189+(+65);
	i1 v7191 = *(i1*)(intptr_t)v7190;
	f422_CreateReload(v7191, v7187, v7183);

	goto c02_0683;

c02_0689:;

	i8 v7192 = (i8)(intptr_t)(ws+3128);
	i8 v7193 = *(i8*)(intptr_t)v7192;
	i8 v7194 = v7193+(+64);
	i1 v7195 = *(i1*)(intptr_t)v7194;
	i8 v7196 = (i8)(intptr_t)(ws+3168);
	i1 v7197 = *(i1*)(intptr_t)v7196;
	i8 v7198 = (i8)(intptr_t)(ws+3160);
	i8 v7199 = *(i8*)(intptr_t)v7198;
	i8 v7200 = v7199+(+42);
	i1 v7201 = *(i1*)(intptr_t)v7200;
	i1 v7202 = v7197|v7201;
	i1 v7203 = ~v7202;
	i1 v7204 = v7195&v7203;
	i8 v7205 = (i8)(intptr_t)(ws+3169);
	*(i1*)(intptr_t)v7205 = v7204;

	i8 v7206 = (i8)(intptr_t)(ws+3120);
	i8 v7207 = *(i8*)(intptr_t)v7206;
	i8 v7208 = v7207+(+40);
	i1 v7209 = *(i1*)(intptr_t)v7208;
	i8 v7210 = (i8)(intptr_t)(ws+3170);
	i1 v7211 = *(i1*)(intptr_t)v7210;
	i1 v7212 = v7209&v7211;
	i8 v7213 = (i8)(intptr_t)(ws+3120);
	i8 v7214 = *(i8*)(intptr_t)v7213;
	i8 v7215 = v7214+(+43);
	i1 v7216 = *(i1*)(intptr_t)v7215;
	i1 v7217 = ~v7216;
	i1 v7218 = v7212&v7217;
	i8 v7219 = (i8)(intptr_t)(ws+3171);
	*(i1*)(intptr_t)v7219 = v7218;

	i8 v7220 = (i8)(intptr_t)(ws+3169);
	i1 v7221 = *(i1*)(intptr_t)v7220;
	i1 v7222 = (i1)+0;
	if (v7221==v7222) goto c02_0691; else goto c02_0692;

c02_0692:;

	i8 v7223 = (i8)(intptr_t)(ws+3171);
	i1 v7224 = *(i1*)(intptr_t)v7223;
	i1 v7225 = (i1)+0;
	if (v7224==v7225) goto c02_0691; else goto c02_0690;

c02_0690:;

	i8 v7226 = (i8)(intptr_t)(ws+3171);
	i1 v7227 = *(i1*)(intptr_t)v7226;
	i1 v7228;
	f208_FindFirst(&v7228, v7227);
	i8 v7229 = (i8)(intptr_t)(ws+3120);
	i8 v7230 = *(i8*)(intptr_t)v7229;
	i8 v7231 = v7230+(+41);
	*(i1*)(intptr_t)v7231 = v7228;

	i8 v7232 = (i8)(intptr_t)(ws+3169);
	i1 v7233 = *(i1*)(intptr_t)v7232;
	i1 v7234;
	f208_FindFirst(&v7234, v7233);
	i8 v7235 = (i8)(intptr_t)(ws+3128);
	i8 v7236 = *(i8*)(intptr_t)v7235;
	i8 v7237 = v7236+(+65);
	*(i1*)(intptr_t)v7237 = v7234;

	i8 v7238 = (i8)(intptr_t)(ws+3128);
	i8 v7239 = *(i8*)(intptr_t)v7238;
	i8 v7240 = v7239+(+65);
	i1 v7241 = *(i1*)(intptr_t)v7240;
	i1 v7242;
	f206_FindConflictingRegisters(&v7242, v7241);
	i8 v7243 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v7243 = v7242;

	i8 v7244 = (i8)(intptr_t)(ws+3160);
	i8 v7245 = *(i8*)(intptr_t)v7244;
	i8 v7246 = v7245+(+42);
	i1 v7247 = *(i1*)(intptr_t)v7246;
	i8 v7248 = (i8)(intptr_t)(ws+3168);
	i1 v7249 = *(i1*)(intptr_t)v7248;
	i1 v7250 = v7247|v7249;
	i8 v7251 = (i8)(intptr_t)(ws+3160);
	i8 v7252 = *(i8*)(intptr_t)v7251;
	i8 v7253 = v7252+(+42);
	*(i1*)(intptr_t)v7253 = v7250;

	i8 v7254 = (i8)(intptr_t)(ws+3160);
	i8 v7255 = *(i8*)(intptr_t)v7254;
	i8 v7256 = (i8)(intptr_t)(ws+3120);
	i8 v7257 = *(i8*)(intptr_t)v7256;
	i8 v7258 = (i8)(intptr_t)(ws+3168);
	i1 v7259 = *(i1*)(intptr_t)v7258;
	f420_BlockRegisters(v7259, v7257, v7255);

	i8 v7260 = (i8)(intptr_t)(ws+3120);
	i8 v7261 = *(i8*)(intptr_t)v7260;
	i8 v7262 = v7261+(+43);
	i1 v7263 = *(i1*)(intptr_t)v7262;
	i8 v7264 = (i8)(intptr_t)(ws+3120);
	i8 v7265 = *(i8*)(intptr_t)v7264;
	i8 v7266 = v7265+(+41);
	i1 v7267 = *(i1*)(intptr_t)v7266;
	i1 v7268;
	f206_FindConflictingRegisters(&v7268, v7267);
	i1 v7269 = v7263|v7268;
	i8 v7270 = (i8)(intptr_t)(ws+3120);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	i8 v7272 = v7271+(+43);
	*(i1*)(intptr_t)v7272 = v7269;

	i8 v7273 = (i8)(intptr_t)(ws+3120);
	i8 v7274 = *(i8*)(intptr_t)v7273;
	i8 v7275 = (i8)(intptr_t)(ws+3120);
	i8 v7276 = *(i8*)(intptr_t)v7275;
	i8 v7277 = v7276+(+41);
	i1 v7278 = *(i1*)(intptr_t)v7277;
	i8 v7279 = (i8)(intptr_t)(ws+3128);
	i8 v7280 = *(i8*)(intptr_t)v7279;
	i8 v7281 = v7280+(+65);
	i1 v7282 = *(i1*)(intptr_t)v7281;
	f421_CreateSpill(v7282, v7278, v7274);

	goto c02_068b;

c02_0691:;


	i8 v7322 = (i8)(intptr_t)(ws+3120);
	i8 v7323 = *(i8*)(intptr_t)v7322;
	i8 v7324 = v7323+(+40);
	i1 v7325 = *(i1*)(intptr_t)v7324;
	i8 v7326 = (i8)(intptr_t)(ws+3170);
	i1 v7327 = *(i1*)(intptr_t)v7326;
	i1 v7328 = v7325&v7327;
	i8 v7329 = (i8)(intptr_t)(ws+3120);
	i8 v7330 = *(i8*)(intptr_t)v7329;
	i8 v7331 = v7330+(+43);
	i1 v7332 = *(i1*)(intptr_t)v7331;
	i1 v7333 = ~v7332;
	i1 v7334 = v7328&v7333;
	i8 v7335 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7335 = v7334;

	i8 v7336 = (i8)(intptr_t)(ws+3152);
	i1 v7337 = *(i1*)(intptr_t)v7336;
	i1 v7338 = (i1)+0;
	if (v7337==v7338) goto c02_0696; else goto c02_0697;

c02_0696:;

	f432_deadlock();

	goto c02_0693;

c02_0697:;

c02_0693:;

	i8 v7339 = (i8)(intptr_t)(ws+3152);
	i1 v7340 = *(i1*)(intptr_t)v7339;
	i1 v7341;
	f208_FindFirst(&v7341, v7340);
	i8 v7342 = (i8)(intptr_t)(ws+3120);
	i8 v7343 = *(i8*)(intptr_t)v7342;
	i8 v7344 = v7343+(+41);
	*(i1*)(intptr_t)v7344 = v7341;

	i8 v7345 = (i8)(intptr_t)(ws+3120);
	i8 v7346 = *(i8*)(intptr_t)v7345;
	i8 v7347 = v7346+(+43);
	i1 v7348 = *(i1*)(intptr_t)v7347;
	i8 v7349 = (i8)(intptr_t)(ws+3120);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = v7350+(+41);
	i1 v7352 = *(i1*)(intptr_t)v7351;
	i1 v7353;
	f206_FindConflictingRegisters(&v7353, v7352);
	i1 v7354 = v7348|v7353;
	i8 v7355 = (i8)(intptr_t)(ws+3120);
	i8 v7356 = *(i8*)(intptr_t)v7355;
	i8 v7357 = v7356+(+43);
	*(i1*)(intptr_t)v7357 = v7354;

	i8 v7358 = (i8)(intptr_t)(ws+3120);
	i8 v7359 = *(i8*)(intptr_t)v7358;
	i8 v7360 = (i8)(intptr_t)(ws+3120);
	i8 v7361 = *(i8*)(intptr_t)v7360;
	i8 v7362 = v7361+(+41);
	i1 v7363 = *(i1*)(intptr_t)v7362;
	i1 v7364 = (i1)+0;
	f421_CreateSpill(v7364, v7363, v7359);

	i8 v7365 = (i8)(intptr_t)(ws+3128);
	i8 v7366 = *(i8*)(intptr_t)v7365;
	i8 v7367 = v7366+(+64);
	i1 v7368 = *(i1*)(intptr_t)v7367;
	i8 v7369 = (i8)(intptr_t)(ws+3160);
	i8 v7370 = *(i8*)(intptr_t)v7369;
	i8 v7371 = v7370+(+42);
	i1 v7372 = *(i1*)(intptr_t)v7371;
	i1 v7373 = ~v7372;
	i1 v7374 = v7368&v7373;
	i8 v7375 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7375 = v7374;

	i8 v7376 = (i8)(intptr_t)(ws+3152);
	i1 v7377 = *(i1*)(intptr_t)v7376;
	i1 v7378 = (i1)+0;
	if (v7377==v7378) goto c02_069b; else goto c02_069c;

c02_069b:;

	f432_deadlock();

	goto c02_0698;

c02_069c:;

c02_0698:;

	i8 v7379 = (i8)(intptr_t)(ws+3152);
	i1 v7380 = *(i1*)(intptr_t)v7379;
	i1 v7381;
	f208_FindFirst(&v7381, v7380);
	i8 v7382 = (i8)(intptr_t)(ws+3128);
	i8 v7383 = *(i8*)(intptr_t)v7382;
	i8 v7384 = v7383+(+65);
	*(i1*)(intptr_t)v7384 = v7381;

	i8 v7385 = (i8)(intptr_t)(ws+3160);
	i8 v7386 = *(i8*)(intptr_t)v7385;
	i8 v7387 = v7386+(+42);
	i1 v7388 = *(i1*)(intptr_t)v7387;
	i8 v7389 = (i8)(intptr_t)(ws+3128);
	i8 v7390 = *(i8*)(intptr_t)v7389;
	i8 v7391 = v7390+(+65);
	i1 v7392 = *(i1*)(intptr_t)v7391;
	i1 v7393;
	f206_FindConflictingRegisters(&v7393, v7392);
	i1 v7394 = v7388|v7393;
	i8 v7395 = (i8)(intptr_t)(ws+3160);
	i8 v7396 = *(i8*)(intptr_t)v7395;
	i8 v7397 = v7396+(+42);
	*(i1*)(intptr_t)v7397 = v7394;

	i8 v7398 = (i8)(intptr_t)(ws+3160);
	i8 v7399 = *(i8*)(intptr_t)v7398;
	i1 v7400 = (i1)+0;
	i8 v7401 = (i8)(intptr_t)(ws+3128);
	i8 v7402 = *(i8*)(intptr_t)v7401;
	i8 v7403 = v7402+(+65);
	i1 v7404 = *(i1*)(intptr_t)v7403;
	f422_CreateReload(v7404, v7400, v7399);

c02_068b:;

c02_0683:;

c02_067e:;

c02_0674:;

endsub:;
}

// UpdateProducedRegisters workspace at ws+3152 length ws+1
void f433_UpdateProducedRegisters(void) {

	i1 v7405 = (i1)+0;
	i8 v7406 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v7406 = v7405;

c02_069f:;

	i8 v7407 = (i8)(intptr_t)(ws+3088);
	i1 v7408 = *(i1*)(intptr_t)v7407;
	i1 v7409 = (i1)+3;
	if (v7408==v7409) goto c02_06a2; else goto c02_06a1;

c02_06a1:;

	i8 v7410 = (i8)(intptr_t)(ws+3120);
	i8 v7411 = *(i8*)(intptr_t)v7410;
	i8 v7412 = v7411+(+16);
	i8 v7413 = (i8)(intptr_t)(ws+3088);
	i1 v7414 = *(i1*)(intptr_t)v7413;
	i8 v7415 = v7414;
	i1 v7416 = (i1)+3;
	i8 v7417 = ((i8)v7415)<<v7416;
	i8 v7418 = v7412+v7417;
	i8 v7419 = *(i8*)(intptr_t)v7418;
	i8 v7420 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v7420 = v7419;

	i8 v7421 = (i8)(intptr_t)(ws+3128);
	i8 v7422 = *(i8*)(intptr_t)v7421;
	i8 v7423 = (i8)+0;
	if (v7422==v7423) goto c02_06a9; else goto c02_06aa;

c02_06aa:;

	i8 v7424 = (i8)(intptr_t)(ws+3128);
	i8 v7425 = *(i8*)(intptr_t)v7424;
	i8 v7426 = v7425+(+64);
	i1 v7427 = *(i1*)(intptr_t)v7426;
	i1 v7428 = (i1)-1;
	if (v7427==v7428) goto c02_06a8; else goto c02_06a9;

c02_06a8:;

	i8 v7429 = (i8)(intptr_t)(ws+3120);
	i8 v7430 = *(i8*)(intptr_t)v7429;
	i8 v7431 = v7430+(+41);
	i1 v7432 = *(i1*)(intptr_t)v7431;
	i8 v7433 = (i8)(intptr_t)(ws+3128);
	i8 v7434 = *(i8*)(intptr_t)v7433;
	i8 v7435 = v7434+(+64);
	*(i1*)(intptr_t)v7435 = v7432;

	i1 v7436 = (i1)+0;
	i8 v7437 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7437 = v7436;

c02_06ad:;

	i8 v7438 = (i8)(intptr_t)(ws+3152);
	i1 v7439 = *(i1*)(intptr_t)v7438;
	i1 v7440 = (i1)+3;
	if (v7439==v7440) goto c02_06b0; else goto c02_06af;

c02_06af:;

	i8 v7441 = (i8)(intptr_t)(ws+3088);
	i1 v7442 = *(i1*)(intptr_t)v7441;
	i8 v7443 = (i8)(intptr_t)(ws+3152);
	i1 v7444 = *(i1*)(intptr_t)v7443;
	if (v7442==v7444) goto c02_06b5; else goto c02_06b4;

c02_06b4:;

	i8 v7445 = (i8)(intptr_t)(ws+3120);
	i8 v7446 = *(i8*)(intptr_t)v7445;
	i8 v7447 = v7446+(+16);
	i8 v7448 = (i8)(intptr_t)(ws+3152);
	i1 v7449 = *(i1*)(intptr_t)v7448;
	i8 v7450 = v7449;
	i1 v7451 = (i1)+3;
	i8 v7452 = ((i8)v7450)<<v7451;
	i8 v7453 = v7447+v7452;
	i8 v7454 = *(i8*)(intptr_t)v7453;
	i8 v7455 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v7455 = v7454;

	i8 v7456 = (i8)(intptr_t)(ws+3128);
	i8 v7457 = *(i8*)(intptr_t)v7456;
	i8 v7458 = (i8)+0;
	if (v7457==v7458) goto c02_06ba; else goto c02_06b9;

c02_06b9:;

	i8 v7459 = (i8)(intptr_t)(ws+3128);
	i8 v7460 = *(i8*)(intptr_t)v7459;
	i8 v7461 = v7460+(+64);
	i1 v7462 = *(i1*)(intptr_t)v7461;
	i8 v7463 = (i8)(intptr_t)(ws+3120);
	i8 v7464 = *(i8*)(intptr_t)v7463;
	i8 v7465 = v7464+(+41);
	i1 v7466 = *(i1*)(intptr_t)v7465;
	i1 v7467 = ~v7466;
	i1 v7468 = v7462&v7467;
	i8 v7469 = (i8)(intptr_t)(ws+3128);
	i8 v7470 = *(i8*)(intptr_t)v7469;
	i8 v7471 = v7470+(+64);
	*(i1*)(intptr_t)v7471 = v7468;

	goto c02_06b6;

c02_06ba:;

c02_06b6:;

	goto c02_06b1;

c02_06b5:;

c02_06b1:;

	i8 v7472 = (i8)(intptr_t)(ws+3152);
	i1 v7473 = *(i1*)(intptr_t)v7472;
	i1 v7474 = v7473+(+1);
	i8 v7475 = (i8)(intptr_t)(ws+3152);
	*(i1*)(intptr_t)v7475 = v7474;

	goto c02_06ad;

c02_06b0:;

	goto c02_06a3;

c02_06a9:;

c02_06a3:;

	i8 v7476 = (i8)(intptr_t)(ws+3088);
	i1 v7477 = *(i1*)(intptr_t)v7476;
	i1 v7478 = v7477+(+1);
	i8 v7479 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v7479 = v7478;

	goto c02_069f;

c02_06a2:;

endsub:;
}

// EmitAndFreeInstructions workspace at ws+3152 length ws+8
void f434_EmitAndFreeInstructions(void) {

c02_06bb:;

	i8 v7480 = (i8)(intptr_t)(ws+3104);
	i8 v7481 = *(i8*)(intptr_t)v7480;
	i8 v7482 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v7482 = v7481;

	i8 v7483 = (i8)(intptr_t)(ws+3152);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	i8 v7485 = (i8)+0;
	if (v7484==v7485) goto c02_06c0; else goto c02_06c1;

c02_06c0:;

	goto c02_06bc;

c02_06c1:;

c02_06bd:;

	i8 v7486 = (i8)(intptr_t)(ws+3104);
	i8 v7487 = *(i8*)(intptr_t)v7486;
	i8 v7488 = v7487+(+8);
	i8 v7489 = *(i8*)(intptr_t)v7488;
	i8 v7490 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v7490 = v7489;

	i8 v7491 = (i8)(intptr_t)(ws+3152);
	i8 v7492 = *(i8*)(intptr_t)v7491;
	i8 v7493 = v7492+(+52);
	f423_ShuffleRegisters(v7493);

	i8 v7494 = (i8)(intptr_t)(ws+3152);
	i8 v7495 = *(i8*)(intptr_t)v7494;
	i8 v7496 = v7495+(+62);
	i1 v7497 = *(i1*)(intptr_t)v7496;
	i8 v7498 = (i8)(intptr_t)(ws+3152);
	i8 v7499 = *(i8*)(intptr_t)v7498;
	f243_EmitOneInstruction(v7499, v7497);

	i8 v7500 = (i8)(intptr_t)(ws+3152);
	i8 v7501 = *(i8*)(intptr_t)v7500;
	i8 v7502 = v7501+(+44);
	f423_ShuffleRegisters(v7502);

	f215_ArchEndInstruction();

	i8 v7503 = (i8)(intptr_t)(ws+3152);
	i8 v7504 = *(i8*)(intptr_t)v7503;
	i8 v7505 = v7504+(+16);
	i8 v7506 = *(i8*)(intptr_t)v7505;
	i8 v7507 = v7506+(+66);
	i1 v7508 = *(i1*)(intptr_t)v7507;
	i1 v7509 = (i1)+19;
	if (v7508==v7509) goto c02_06c5; else goto c02_06c6;

c02_06c5:;

	i8 v7510 = (i8)(intptr_t)(ws+3152);
	i8 v7511 = *(i8*)(intptr_t)v7510;
	i8 v7512 = v7511+(+16);
	i8 v7513 = *(i8*)(intptr_t)v7512;
	f32_Free(v7513);

	goto c02_06c2;

c02_06c6:;

c02_06c2:;

	i8 v7514 = (i8)(intptr_t)(ws+3152);
	i8 v7515 = *(i8*)(intptr_t)v7514;
	f32_Free(v7515);

	goto c02_06bb;

c02_06bc:;

endsub:;
}

// ReallyGenerate workspace at ws+3080 length ws+72
void f425_ReallyGenerate(i8 p6559 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3080) = p6559; /*rootnode */

	i8 v6560 = (i8)+0;
	i8 v6561 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v6561 = v6560;

	i8 v6562 = (i8)+0;
	i8 v6563 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6563 = v6562;

	i8 v6564 = (i8)(intptr_t)(ws+984);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	i8 v6566 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v6566 = v6565;

	i8 v6567 = (i8)(intptr_t)(ws+3080);
	i8 v6568 = *(i8*)(intptr_t)v6567;
	f415_PushNode(v6568);

c02_05f4:;

	i8 v6569 = (i8)(intptr_t)(ws+984);
	i8 v6570 = *(i8*)(intptr_t)v6569;
	i8 v6571 = (i8)(intptr_t)(ws+3112);
	i8 v6572 = *(i8*)(intptr_t)v6571;
	if (v6570==v6572) goto c02_05f7; else goto c02_05f6;

c02_05f6:;

	i8 v6573 = (i8)+63;
	i8 v6574;
	f31_Alloc(&v6574, v6573);
	i8 v6575 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v6575 = v6574;

	i8 v6576 = (i8)(intptr_t)(ws+3096);
	i8 v6577 = *(i8*)(intptr_t)v6576;
	i8 v6578 = (i8)+0;
	if (v6577==v6578) goto c02_05fb; else goto c02_05fc;

c02_05fb:;

	i8 v6579 = (i8)(intptr_t)(ws+3120);
	i8 v6580 = *(i8*)(intptr_t)v6579;
	i8 v6581 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v6581 = v6580;

	i8 v6582 = (i8)(intptr_t)(ws+3120);
	i8 v6583 = *(i8*)(intptr_t)v6582;
	i8 v6584 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6584 = v6583;

	goto c02_05f8;

c02_05fc:;

	i8 v6585 = (i8)(intptr_t)(ws+3120);
	i8 v6586 = *(i8*)(intptr_t)v6585;
	i8 v6587 = (i8)(intptr_t)(ws+3104);
	i8 v6588 = *(i8*)(intptr_t)v6587;
	*(i8*)(intptr_t)v6588 = v6586;

	i8 v6589 = (i8)(intptr_t)(ws+3104);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = (i8)(intptr_t)(ws+3120);
	i8 v6592 = *(i8*)(intptr_t)v6591;
	i8 v6593 = v6592+(+8);
	*(i8*)(intptr_t)v6593 = v6590;

	i8 v6594 = (i8)(intptr_t)(ws+3120);
	i8 v6595 = *(i8*)(intptr_t)v6594;
	i8 v6596 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6596 = v6595;

c02_05f8:;

	i8 v6597;
	f416_PopNode(&v6597);
	i8 v6598 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v6598 = v6597;


	f426_InstructionMatcher();

	i8 v6946 = (i8)(intptr_t)(ws+3120);
	i8 v6947 = *(i8*)(intptr_t)v6946;
	i8 v6948 = v6947+(+40);
	i1 v6949 = *(i1*)(intptr_t)v6948;
	i1 v6950 = (i1)+0;
	if (v6949==v6950) goto c02_0673; else goto c02_0672;

c02_0672:;


	f431_AllocateRegister();


	f433_UpdateProducedRegisters();

	goto c02_066f;

c02_0673:;

c02_066f:;

	goto c02_05f4;

c02_05f7:;


	f434_EmitAndFreeInstructions();

	f216_ArchEndGroup();

	i8 v7516 = (i8)(intptr_t)(ws+3080);
	i8 v7517 = *(i8*)(intptr_t)v7516;
	f140_Discard(v7517);

endsub:;
}

// Generate workspace at ws+3064 length ws+9
void f435_Generate(i8 p7520 /* statement */) {
	*(i8*)(intptr_t)(ws+3064) = p7520; /*statement */

	i8 v7521 = (i8)(intptr_t)(ws+3064);
	i8 v7522 = *(i8*)(intptr_t)v7521;
	i8 v7523 = v7522+(+66);
	i1 v7524 = *(i1*)(intptr_t)v7523;
	i8 v7525 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v7525 = v7524;

	i8 v7526 = (i8)(intptr_t)(ws+1219);
	i1 v7527 = *(i1*)(intptr_t)v7526;
	i1 v7528 = (i1)+22;
	if (v7527==v7528) goto c02_06cc; else goto c02_06ce;

c02_06ce:;

	i8 v7529 = (i8)(intptr_t)(ws+1219);
	i1 v7530 = *(i1*)(intptr_t)v7529;
	i1 v7531 = (i1)+23;
	if (v7530==v7531) goto c02_06cc; else goto c02_06cd;

c02_06cc:;

	i8 v7532 = (i8)(intptr_t)(ws+3072);
	i1 v7533 = *(i1*)(intptr_t)v7532;
	i1 v7534 = (i1)+21;
	if (v7533==v7534) goto c02_06d5; else goto c02_06d6;

c02_06d6:;

	i8 v7535 = (i8)(intptr_t)(ws+3072);
	i1 v7536 = *(i1*)(intptr_t)v7535;
	i1 v7537 = (i1)+5;
	if (v7536==v7537) goto c02_06d5; else goto c02_06d4;

c02_06d4:;

	i8 v7538 = (i8)(intptr_t)(ws+3064);
	i8 v7539 = *(i8*)(intptr_t)v7538;
	f140_Discard(v7539);

	goto endsub;

c02_06d5:;

c02_06cf:;

	goto c02_06c7;

c02_06cd:;

c02_06c7:;

	i8 v7540 = (i8)(intptr_t)(ws+3064);
	i8 v7541 = *(i8*)(intptr_t)v7540;
	i8 v7542 = v7541+(+66);
	i1 v7543 = *(i1*)(intptr_t)v7542;
	i8 v7544 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v7544 = v7543;

	i8 v7545 = (i8)(intptr_t)(ws+3064);
	i8 v7546 = *(i8*)(intptr_t)v7545;
	f425_ReallyGenerate(v7546);

endsub:;
}

// push_and_free workspace at ws+3064 length ws+0
void f437_push_and_free(void) {

	i8 v7588 = (i8)(intptr_t)(ws+3032);
	i2 v7589 = *(i2*)(intptr_t)v7588;
	i8 v7590 = (i8)(intptr_t)(ws+3048);
	i8 v7591 = *(i8*)(intptr_t)v7590;
	*(i2*)(intptr_t)v7591 = v7589;

	i8 v7592 = (i8)(intptr_t)(ws+3034);
	i2 v7593 = *(i2*)(intptr_t)v7592;
	i8 v7594 = (i8)(intptr_t)(ws+3048);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = v7595+(+2);
	*(i2*)(intptr_t)v7596 = v7593;

	i8 v7597 = (i8)(intptr_t)(ws+3036);
	i2 v7598 = *(i2*)(intptr_t)v7597;
	i8 v7599 = (i8)(intptr_t)(ws+3048);
	i8 v7600 = *(i8*)(intptr_t)v7599;
	i8 v7601 = v7600+(+4);
	*(i2*)(intptr_t)v7601 = v7598;

	i8 v7602 = (i8)+0;
	i8 v7603 = (i8)(intptr_t)(ws+3024);
	i8 v7604 = *(i8*)(intptr_t)v7603;
	i8 v7605 = v7604+(+24);
	*(i8*)(intptr_t)v7605 = v7602;

	i8 v7606 = (i8)+0;
	i8 v7607 = (i8)(intptr_t)(ws+3024);
	i8 v7608 = *(i8*)(intptr_t)v7607;
	i8 v7609 = v7608+(+32);
	*(i8*)(intptr_t)v7609 = v7606;

	i8 v7610 = (i8)(intptr_t)(ws+3048);
	i8 v7611 = *(i8*)(intptr_t)v7610;
	f415_PushNode(v7611);

	i8 v7612 = (i8)(intptr_t)(ws+3040);
	i8 v7613 = *(i8*)(intptr_t)v7612;
	f415_PushNode(v7613);

	i8 v7614 = (i8)(intptr_t)(ws+3024);
	i8 v7615 = *(i8*)(intptr_t)v7614;
	f140_Discard(v7615);

endsub:;
}

// GenerateConditional workspace at ws+3008 length ws+52
void f436_GenerateConditional(i8 p7547 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3008) = p7547; /*rootnode */

	i8 v7548 = (i8)(intptr_t)(ws+984);
	i8 v7549 = *(i8*)(intptr_t)v7548;
	i8 v7550 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7550 = v7549;

	i8 v7551 = (i8)(intptr_t)(ws+3008);
	i8 v7552 = *(i8*)(intptr_t)v7551;
	f415_PushNode(v7552);

c02_06d9:;

	i8 v7553 = (i8)(intptr_t)(ws+984);
	i8 v7554 = *(i8*)(intptr_t)v7553;
	i8 v7555 = (i8)(intptr_t)(ws+3016);
	i8 v7556 = *(i8*)(intptr_t)v7555;
	if (v7554==v7556) goto c02_06dc; else goto c02_06db;

c02_06db:;

	i8 v7557;
	f416_PopNode(&v7557);
	i8 v7558 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7558 = v7557;

	i8 v7559 = (i8)(intptr_t)(ws+3024);
	i8 v7560 = *(i8*)(intptr_t)v7559;
	i2 v7561 = *(i2*)(intptr_t)v7560;
	i8 v7562 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v7562 = v7561;

	i8 v7563 = (i8)(intptr_t)(ws+3024);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = v7564+(+2);
	i2 v7566 = *(i2*)(intptr_t)v7565;
	i8 v7567 = (i8)(intptr_t)(ws+3034);
	*(i2*)(intptr_t)v7567 = v7566;

	i8 v7568 = (i8)(intptr_t)(ws+3024);
	i8 v7569 = *(i8*)(intptr_t)v7568;
	i8 v7570 = v7569+(+4);
	i2 v7571 = *(i2*)(intptr_t)v7570;
	i8 v7572 = (i8)(intptr_t)(ws+3036);
	*(i2*)(intptr_t)v7572 = v7571;

	i8 v7573 = (i8)(intptr_t)(ws+3024);
	i8 v7574 = *(i8*)(intptr_t)v7573;
	i8 v7575 = v7574+(+24);
	i8 v7576 = *(i8*)(intptr_t)v7575;
	i8 v7577 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v7577 = v7576;

	i8 v7578 = (i8)(intptr_t)(ws+3024);
	i8 v7579 = *(i8*)(intptr_t)v7578;
	i8 v7580 = v7579+(+32);
	i8 v7581 = *(i8*)(intptr_t)v7580;
	i8 v7582 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7582 = v7581;

	i8 v7583 = (i8)(intptr_t)(ws+3024);
	i8 v7584 = *(i8*)(intptr_t)v7583;
	i8 v7585 = v7584+(+66);
	i1 v7586 = *(i1*)(intptr_t)v7585;
	i8 v7587 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v7587 = v7586;


	i8 v7616 = (i8)(intptr_t)(ws+3056);
	i1 v7617 = *(i1*)(intptr_t)v7616;

	if (v7617 != +54) goto c02_06de;

	i2 v7618;
	f204_AllocLabel(&v7618);
	i8 v7619 = (i8)(intptr_t)(ws+3058);
	*(i2*)(intptr_t)v7619 = v7618;

	i8 v7620 = (i8)(intptr_t)(ws+3032);
	i2 v7621 = *(i2*)(intptr_t)v7620;
	i8 v7622 = (i8)(intptr_t)(ws+3040);
	i8 v7623 = *(i8*)(intptr_t)v7622;
	*(i2*)(intptr_t)v7623 = v7621;

	i8 v7624 = (i8)(intptr_t)(ws+3058);
	i2 v7625 = *(i2*)(intptr_t)v7624;
	i8 v7626 = (i8)(intptr_t)(ws+3040);
	i8 v7627 = *(i8*)(intptr_t)v7626;
	i8 v7628 = v7627+(+2);
	*(i2*)(intptr_t)v7628 = v7625;

	i8 v7629 = (i8)(intptr_t)(ws+3058);
	i2 v7630 = *(i2*)(intptr_t)v7629;
	i8 v7631 = (i8)(intptr_t)(ws+3040);
	i8 v7632 = *(i8*)(intptr_t)v7631;
	i8 v7633 = v7632+(+4);
	*(i2*)(intptr_t)v7633 = v7630;

	f437_push_and_free();

	goto c02_06dd;

c02_06de:;

	if (v7617 != +53) goto c02_06df;

	i2 v7634;
	f204_AllocLabel(&v7634);
	i8 v7635 = (i8)(intptr_t)(ws+3058);
	*(i2*)(intptr_t)v7635 = v7634;

	i8 v7636 = (i8)(intptr_t)(ws+3058);
	i2 v7637 = *(i2*)(intptr_t)v7636;
	i8 v7638 = (i8)(intptr_t)(ws+3040);
	i8 v7639 = *(i8*)(intptr_t)v7638;
	*(i2*)(intptr_t)v7639 = v7637;

	i8 v7640 = (i8)(intptr_t)(ws+3034);
	i2 v7641 = *(i2*)(intptr_t)v7640;
	i8 v7642 = (i8)(intptr_t)(ws+3040);
	i8 v7643 = *(i8*)(intptr_t)v7642;
	i8 v7644 = v7643+(+2);
	*(i2*)(intptr_t)v7644 = v7641;

	i8 v7645 = (i8)(intptr_t)(ws+3058);
	i2 v7646 = *(i2*)(intptr_t)v7645;
	i8 v7647 = (i8)(intptr_t)(ws+3040);
	i8 v7648 = *(i8*)(intptr_t)v7647;
	i8 v7649 = v7648+(+4);
	*(i2*)(intptr_t)v7649 = v7646;

	f437_push_and_free();

	goto c02_06dd;

c02_06df:;

	i8 v7650 = (i8)(intptr_t)(ws+3056);
	i1 v7651 = *(i1*)(intptr_t)v7650;
	i1 v7652 = (i1)+55;
	if (v7651<v7652) goto c02_06e6; else goto c02_06e7;

c02_06e7:;

	i1 v7653 = (i1)+69;
	i8 v7654 = (i8)(intptr_t)(ws+3056);
	i1 v7655 = *(i1*)(intptr_t)v7654;
	if (v7653<v7655) goto c02_06e6; else goto c02_06e5;

c02_06e5:;

	i8 v7656 = (i8)(intptr_t)(ws+3024);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	i8 v7658 = v7657+(+6);
	i1 v7659 = *(i1*)(intptr_t)v7658;
	i1 v7660 = (i1)+0;
	if (v7659==v7660) goto c02_06ec; else goto c02_06eb;

c02_06eb:;

	i8 v7661 = (i8)(intptr_t)(ws+3034);
	i2 v7662 = *(i2*)(intptr_t)v7661;
	i8 v7663 = (i8)(intptr_t)(ws+3024);
	i8 v7664 = *(i8*)(intptr_t)v7663;
	*(i2*)(intptr_t)v7664 = v7662;

	i8 v7665 = (i8)(intptr_t)(ws+3032);
	i2 v7666 = *(i2*)(intptr_t)v7665;
	i8 v7667 = (i8)(intptr_t)(ws+3024);
	i8 v7668 = *(i8*)(intptr_t)v7667;
	i8 v7669 = v7668+(+2);
	*(i2*)(intptr_t)v7669 = v7666;

	i1 v7670 = (i1)+0;
	i8 v7671 = (i8)(intptr_t)(ws+3024);
	i8 v7672 = *(i8*)(intptr_t)v7671;
	i8 v7673 = v7672+(+6);
	*(i1*)(intptr_t)v7673 = v7670;

	goto c02_06e8;

c02_06ec:;

c02_06e8:;

	goto c02_06e0;

c02_06e6:;

c02_06e0:;

	i8 v7674 = (i8)(intptr_t)(ws+3024);
	i8 v7675 = *(i8*)(intptr_t)v7674;
	f435_Generate(v7675);

	i8 v7676 = (i8)(intptr_t)(ws+3036);
	i2 v7677 = *(i2*)(intptr_t)v7676;
	i8 v7678;
	f91_MidLabel(&v7678, v7677);
	f435_Generate(v7678);

c02_06dd:;


	goto c02_06d9;

c02_06dc:;

endsub:;
}

// InitVariable workspace at ws+3008 length ws+16
void f438_InitVariable(i8 p7679 /* type */, i8 p7680 /* symbol */) {
	*(i8*)(intptr_t)(ws+3008) = p7680; /*symbol */
	*(i8*)(intptr_t)(ws+3016) = p7679; /*type */

	i8 v7681 = (i8)(intptr_t)(ws+3016);
	i8 v7682 = *(i8*)(intptr_t)v7681;
	f193_CheckNotPartialType(v7682);

	i8 v7683 = (i8)(intptr_t)(ws+3016);
	i8 v7684 = *(i8*)(intptr_t)v7683;
	i8 v7685 = (i8)(intptr_t)(ws+3008);
	i8 v7686 = *(i8*)(intptr_t)v7685;
	*(i8*)(intptr_t)v7686 = v7684;

	i8 v7687 = (i8)(intptr_t)(ws+40);
	i8 v7688 = *(i8*)(intptr_t)v7687;
	i8 v7689 = (i8)(intptr_t)(ws+3008);
	i8 v7690 = *(i8*)(intptr_t)v7689;
	i8 v7691 = v7690+(+8);
	*(i8*)(intptr_t)v7691 = v7688;

	i8 v7692 = (i8)(intptr_t)(ws+3008);
	i8 v7693 = *(i8*)(intptr_t)v7692;
	f212_ArchInitVariable(v7693);

endsub:;
}

// MakePointerType workspace at ws+3048 length ws+16
void f439_MakePointerType(i8* p7694 /* ptrtype */, i8 p7695 /* type */) {
	*(i8*)(intptr_t)(ws+3048) = p7695; /*type */

	i8 v7696 = (i8)(intptr_t)(ws+3048);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	i8 v7698 = v7697+(+32);
	i8 v7699 = *(i8*)(intptr_t)v7698;
	i8 v7700 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7700 = v7699;

	i8 v7701 = (i8)(intptr_t)(ws+3056);
	i8 v7702 = *(i8*)(intptr_t)v7701;
	i8 v7703 = (i8)+0;
	if (v7702==v7703) goto c02_06f0; else goto c02_06f1;

c02_06f0:;

	i8 v7704 = (i8)+0;
	i8 v7705 = (i8)+0;
	i8 v7706;
	f190_AddSymbol(&v7706, v7705, v7704);
	i8 v7707 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7707 = v7706;

	i8 v7708 = (i8)(intptr_t)(ws+3048);
	i8 v7709 = *(i8*)(intptr_t)v7708;
	i8 v7710 = v7709+(+48);
	i8 v7711 = *(i8*)(intptr_t)v7710;
	i8 v7712;
	f53_StrDupBraced(&v7712, v7711);
	i8 v7713 = (i8)(intptr_t)(ws+3056);
	i8 v7714 = *(i8*)(intptr_t)v7713;
	i8 v7715 = v7714+(+48);
	*(i8*)(intptr_t)v7715 = v7712;

	i1 v7716 = (i1)+30;
	i8 v7717 = (i8)(intptr_t)(ws+3056);
	i8 v7718 = *(i8*)(intptr_t)v7717;
	i8 v7719 = v7718+(+46);
	*(i1*)(intptr_t)v7719 = v7716;

	i1 v7720 = (i1)+3;
	i8 v7721 = (i8)(intptr_t)(ws+3056);
	i8 v7722 = *(i8*)(intptr_t)v7721;
	i8 v7723 = v7722+(+40);
	*(i1*)(intptr_t)v7723 = v7720;

	i8 v7724 = (i8)(intptr_t)(ws+1056);
	i8 v7725 = *(i8*)(intptr_t)v7724;
	i8 v7726 = v7725+(+42);
	i2 v7727 = *(i2*)(intptr_t)v7726;
	i8 v7728 = (i8)(intptr_t)(ws+3056);
	i8 v7729 = *(i8*)(intptr_t)v7728;
	i8 v7730 = v7729+(+42);
	*(i2*)(intptr_t)v7730 = v7727;

	i8 v7731 = (i8)(intptr_t)(ws+1056);
	i8 v7732 = *(i8*)(intptr_t)v7731;
	i8 v7733 = v7732+(+41);
	i1 v7734 = *(i1*)(intptr_t)v7733;
	i8 v7735 = (i8)(intptr_t)(ws+3056);
	i8 v7736 = *(i8*)(intptr_t)v7735;
	i8 v7737 = v7736+(+41);
	*(i1*)(intptr_t)v7737 = v7734;

	i8 v7738 = (i8)(intptr_t)(ws+1056);
	i8 v7739 = *(i8*)(intptr_t)v7738;
	i8 v7740 = v7739+(+44);
	i2 v7741 = *(i2*)(intptr_t)v7740;
	i8 v7742 = (i8)(intptr_t)(ws+3056);
	i8 v7743 = *(i8*)(intptr_t)v7742;
	i8 v7744 = v7743+(+44);
	*(i2*)(intptr_t)v7744 = v7741;

	i8 v7745 = (i8)(intptr_t)(ws+3048);
	i8 v7746 = *(i8*)(intptr_t)v7745;
	i8 v7747 = (i8)(intptr_t)(ws+3056);
	i8 v7748 = *(i8*)(intptr_t)v7747;
	*(i8*)(intptr_t)v7748 = v7746;

	i8 v7749 = (i8)(intptr_t)(ws+3056);
	i8 v7750 = *(i8*)(intptr_t)v7749;
	i8 v7751 = (i8)(intptr_t)(ws+3048);
	i8 v7752 = *(i8*)(intptr_t)v7751;
	i8 v7753 = v7752+(+32);
	*(i8*)(intptr_t)v7753 = v7750;

	goto c02_06ed;

c02_06f1:;

c02_06ed:;

endsub:;
	*p7694 = *(i8*)(intptr_t)(ws+3056);
}

// MakeArrayType workspace at ws+3000 length ws+26
void f440_MakeArrayType(i8* p7754 /* arraytype */, i2 p7755 /* size */, i8 p7756 /* type */) {
	*(i8*)(intptr_t)(ws+3000) = p7756; /*type */
	*(i2*)(intptr_t)(ws+3008) = p7755; /*size */

	i8 v7757 = (i8)(intptr_t)(ws+3000);
	i8 v7758 = *(i8*)(intptr_t)v7757;
	f193_CheckNotPartialType(v7758);

	i8 v7759 = (i8)+0;
	i8 v7760 = (i8)+0;
	i8 v7761;
	f190_AddSymbol(&v7761, v7760, v7759);
	i8 v7762 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7762 = v7761;

	i8 v7763 = (i8)(intptr_t)(ws+3000);
	i8 v7764 = *(i8*)(intptr_t)v7763;
	i8 v7765 = v7764+(+48);
	i8 v7766 = *(i8*)(intptr_t)v7765;
	i8 v7767 = (i8)(intptr_t)(ws+3008);
	i2 v7768 = *(i2*)(intptr_t)v7767;
	i8 v7769;
	f54_StrDupArrayed(&v7769, v7768, v7766);
	i8 v7770 = (i8)(intptr_t)(ws+3016);
	i8 v7771 = *(i8*)(intptr_t)v7770;
	i8 v7772 = v7771+(+48);
	*(i8*)(intptr_t)v7772 = v7769;

	i1 v7773 = (i1)+30;
	i8 v7774 = (i8)(intptr_t)(ws+3016);
	i8 v7775 = *(i8*)(intptr_t)v7774;
	i8 v7776 = v7775+(+46);
	*(i1*)(intptr_t)v7776 = v7773;

	i1 v7777 = (i1)+4;
	i8 v7778 = (i8)(intptr_t)(ws+3016);
	i8 v7779 = *(i8*)(intptr_t)v7778;
	i8 v7780 = v7779+(+40);
	*(i1*)(intptr_t)v7780 = v7777;

	i2 v7781 = (i2)+0;
	i8 v7782 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v7782 = v7781;

	i2 v7783 = (i2)+0;
	i8 v7784 = (i8)(intptr_t)(ws+3008);
	i2 v7785 = *(i2*)(intptr_t)v7784;
	if (v7783<v7785) goto c02_06f5; else goto c02_06f6;

c02_06f5:;

	i8 v7786 = (i8)(intptr_t)(ws+3000);
	i8 v7787 = *(i8*)(intptr_t)v7786;
	i8 v7788 = v7787+(+44);
	i2 v7789 = *(i2*)(intptr_t)v7788;
	i8 v7790 = (i8)(intptr_t)(ws+3008);
	i2 v7791 = *(i2*)(intptr_t)v7790;
	i2 v7792 = v7791+(-1);
	i2 v7793 = v7789*v7792;
	i8 v7794 = (i8)(intptr_t)(ws+3000);
	i8 v7795 = *(i8*)(intptr_t)v7794;
	i8 v7796 = v7795+(+42);
	i2 v7797 = *(i2*)(intptr_t)v7796;
	i2 v7798 = v7793+v7797;
	i8 v7799 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v7799 = v7798;

	goto c02_06f2;

c02_06f6:;

c02_06f2:;

	i8 v7800 = (i8)(intptr_t)(ws+3024);
	i2 v7801 = *(i2*)(intptr_t)v7800;
	i8 v7802 = (i8)(intptr_t)(ws+3016);
	i8 v7803 = *(i8*)(intptr_t)v7802;
	i8 v7804 = v7803+(+42);
	*(i2*)(intptr_t)v7804 = v7801;

	i8 v7805 = (i8)(intptr_t)(ws+3000);
	i8 v7806 = *(i8*)(intptr_t)v7805;
	i8 v7807 = v7806+(+41);
	i1 v7808 = *(i1*)(intptr_t)v7807;
	i8 v7809 = (i8)(intptr_t)(ws+3016);
	i8 v7810 = *(i8*)(intptr_t)v7809;
	i8 v7811 = v7810+(+41);
	*(i1*)(intptr_t)v7811 = v7808;

	i8 v7812 = (i8)(intptr_t)(ws+3000);
	i8 v7813 = *(i8*)(intptr_t)v7812;
	i8 v7814 = v7813+(+44);
	i2 v7815 = *(i2*)(intptr_t)v7814;
	i8 v7816 = (i8)(intptr_t)(ws+3008);
	i2 v7817 = *(i2*)(intptr_t)v7816;
	i2 v7818 = v7815*v7817;
	i8 v7819 = (i8)(intptr_t)(ws+3016);
	i8 v7820 = *(i8*)(intptr_t)v7819;
	i8 v7821 = v7820+(+44);
	*(i2*)(intptr_t)v7821 = v7818;

	i8 v7822 = (i8)(intptr_t)(ws+3000);
	i8 v7823 = *(i8*)(intptr_t)v7822;
	i8 v7824 = (i8)(intptr_t)(ws+3016);
	i8 v7825 = *(i8*)(intptr_t)v7824;
	*(i8*)(intptr_t)v7825 = v7823;

	i8 v7826 = (i8)(intptr_t)(ws+3008);
	i2 v7827 = *(i2*)(intptr_t)v7826;
	i8 v7828 = (i8)(intptr_t)(ws+3016);
	i8 v7829 = *(i8*)(intptr_t)v7828;
	i8 v7830 = v7829+(+8);
	*(i2*)(intptr_t)v7830 = v7827;

	i4 v7831 = (i4)+0;
	i8 v7832 = (i8)(intptr_t)(ws+3008);
	i2 v7833 = *(i2*)(intptr_t)v7832;
	i2 v7834 = v7833+(-1);
	i4 v7835 = v7834;
	i8 v7836;
	f211_ArchGuessIntType(&v7836, v7835, v7831);
	i8 v7837 = (i8)(intptr_t)(ws+3016);
	i8 v7838 = *(i8*)(intptr_t)v7837;
	i8 v7839 = v7838+(+16);
	*(i8*)(intptr_t)v7839 = v7836;

endsub:;
	*p7754 = *(i8*)(intptr_t)(ws+3016);
}

// DestructSymbol workspace at ws+3064 length ws+24
void f442_DestructSymbol(i8 p7841 /* symbol */) {
	*(i8*)(intptr_t)(ws+3064) = p7841; /*symbol */

	i8 v7842 = (i8)(intptr_t)(ws+3064);
	i8 v7843 = *(i8*)(intptr_t)v7842;
	i8 v7844 = v7843+(+46);
	i1 v7845 = *(i1*)(intptr_t)v7844;
	i1 v7846 = (i1)+30;
	if (v7845==v7846) goto c02_06fa; else goto c02_06fb;

c02_06fa:;

	i8 v7847 = (i8)(intptr_t)(ws+3064);
	i8 v7848 = *(i8*)(intptr_t)v7847;
	i8 v7849 = v7848+(+32);
	i8 v7850 = *(i8*)(intptr_t)v7849;
	i8 v7851 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v7851 = v7850;

c02_06fe:;

	i8 v7852 = (i8)(intptr_t)(ws+3072);
	i8 v7853 = *(i8*)(intptr_t)v7852;
	i8 v7854 = (i8)+0;
	if (v7853==v7854) goto c02_0701; else goto c02_0700;

c02_0700:;

	i8 v7855 = (i8)(intptr_t)(ws+3072);
	i8 v7856 = *(i8*)(intptr_t)v7855;
	i8 v7857 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v7857 = v7856;

	i8 v7858 = (i8)(intptr_t)(ws+3072);
	i8 v7859 = *(i8*)(intptr_t)v7858;
	i8 v7860 = v7859+(+32);
	i8 v7861 = *(i8*)(intptr_t)v7860;
	i8 v7862 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v7862 = v7861;

	i8 v7863 = (i8)(intptr_t)(ws+3080);
	i8 v7864 = *(i8*)(intptr_t)v7863;
	i8 v7865 = v7864+(+48);
	i8 v7866 = *(i8*)(intptr_t)v7865;
	f32_Free(v7866);

	i8 v7867 = (i8)(intptr_t)(ws+3080);
	i8 v7868 = *(i8*)(intptr_t)v7867;
	f32_Free(v7868);

	goto c02_06fe;

c02_0701:;

	goto c02_06f7;

c02_06fb:;

c02_06f7:;

	i8 v7869 = (i8)(intptr_t)(ws+3064);
	i8 v7870 = *(i8*)(intptr_t)v7869;
	i8 v7871 = v7870+(+48);
	i8 v7872 = *(i8*)(intptr_t)v7871;
	f32_Free(v7872);

	i8 v7873 = (i8)(intptr_t)(ws+3064);
	i8 v7874 = *(i8*)(intptr_t)v7873;
	f32_Free(v7874);

endsub:;
}

// DestructSubroutine workspace at ws+3040 length ws+24
void f443_DestructSubroutine(i8 p7875 /* subr */) {
	*(i8*)(intptr_t)(ws+3040) = p7875; /*subr */

	i8 v7876 = (i8)(intptr_t)(ws+3040);
	i8 v7877 = *(i8*)(intptr_t)v7876;
	i8 v7878 = v7877+(+16);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7880 = v7879;

c02_0704:;

	i8 v7881 = (i8)(intptr_t)(ws+3048);
	i8 v7882 = *(i8*)(intptr_t)v7881;
	i8 v7883 = (i8)+0;
	if (v7882==v7883) goto c02_0707; else goto c02_0706;

c02_0706:;

	i8 v7884 = (i8)(intptr_t)(ws+3048);
	i8 v7885 = *(i8*)(intptr_t)v7884;
	i8 v7886 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7886 = v7885;

	i8 v7887 = (i8)(intptr_t)(ws+3048);
	i8 v7888 = *(i8*)(intptr_t)v7887;
	i8 v7889 = v7888+(+56);
	i8 v7890 = *(i8*)(intptr_t)v7889;
	i8 v7891 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7891 = v7890;

	i8 v7892 = (i8)(intptr_t)(ws+3056);
	i8 v7893 = *(i8*)(intptr_t)v7892;
	f442_DestructSymbol(v7893);

	goto c02_0704;

c02_0707:;

	i8 v7894 = (i8)(intptr_t)(ws+3040);
	i8 v7895 = *(i8*)(intptr_t)v7894;
	f32_Free(v7895);

endsub:;
}

// DestructSubroutineContents workspace at ws+3008 length ws+32
void f441_DestructSubroutineContents(i8 p7840 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p7840; /*subr */



	i8 v7896 = (i8)(intptr_t)(ws+3008);
	i8 v7897 = *(i8*)(intptr_t)v7896;
	i8 v7898 = v7897+(+48);
	i8 v7899 = *(i8*)(intptr_t)v7898;
	i8 v7900 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7900 = v7899;

	i8 v7901 = (i8)(intptr_t)(ws+3016);
	i8 v7902 = *(i8*)(intptr_t)v7901;
	i8 v7903 = (i8)+0;
	if (v7902==v7903) goto c02_070b; else goto c02_070c;

c02_070b:;

	i8 v7904 = (i8)(intptr_t)(ws+3008);
	i8 v7905 = *(i8*)(intptr_t)v7904;
	i8 v7906 = v7905+(+40);
	i8 v7907 = *(i8*)(intptr_t)v7906;
	i8 v7908 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7908 = v7907;

	goto c02_0708;

c02_070c:;

c02_0708:;

	i8 v7909 = (i8)(intptr_t)(ws+3016);
	i8 v7910 = *(i8*)(intptr_t)v7909;
	i8 v7911 = (i8)+0;
	if (v7910==v7911) goto c02_0711; else goto c02_0710;

c02_0710:;

c02_0712:;

	i8 v7912 = (i8)(intptr_t)(ws+3016);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = v7913+(+16);
	i8 v7915 = *(i8*)(intptr_t)v7914;
	i8 v7916 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7916 = v7915;

	i8 v7917 = (i8)(intptr_t)(ws+3024);
	i8 v7918 = *(i8*)(intptr_t)v7917;
	i8 v7919 = (i8)+0;
	if (v7918==v7919) goto c02_0717; else goto c02_0718;

c02_0717:;

	goto c02_0713;

c02_0718:;

c02_0714:;

	i8 v7920 = (i8)(intptr_t)(ws+3024);
	i8 v7921 = *(i8*)(intptr_t)v7920;
	i8 v7922 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v7922 = v7921;

	goto c02_0712;

c02_0713:;

	goto c02_070d;

c02_0711:;

c02_070d:;

	i8 v7923 = (i8)(intptr_t)(ws+3008);
	i8 v7924 = *(i8*)(intptr_t)v7923;
	i8 v7925 = v7924+(+16);
	i8 v7926 = *(i8*)(intptr_t)v7925;
	i8 v7927 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v7927 = v7926;

	i8 v7928 = (i8)(intptr_t)(ws+3016);
	i8 v7929 = *(i8*)(intptr_t)v7928;
	i8 v7930 = (i8)+0;
	if (v7929==v7930) goto c02_071d; else goto c02_071c;

c02_071c:;

	i8 v7931 = (i8)(intptr_t)(ws+3016);
	i8 v7932 = *(i8*)(intptr_t)v7931;
	i8 v7933 = v7932+(+56);
	i8 v7934 = *(i8*)(intptr_t)v7933;
	i8 v7935 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v7935 = v7934;

	goto c02_0719;

c02_071d:;

c02_0719:;

c02_0720:;

	i8 v7936 = (i8)(intptr_t)(ws+3032);
	i8 v7937 = *(i8*)(intptr_t)v7936;
	i8 v7938 = (i8)+0;
	if (v7937==v7938) goto c02_0723; else goto c02_0722;

c02_0722:;

	i8 v7939 = (i8)(intptr_t)(ws+3032);
	i8 v7940 = *(i8*)(intptr_t)v7939;
	i8 v7941 = v7940+(+56);
	i8 v7942 = *(i8*)(intptr_t)v7941;
	i8 v7943 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7943 = v7942;

	i8 v7944 = (i8)(intptr_t)(ws+3032);
	i8 v7945 = *(i8*)(intptr_t)v7944;
	i8 v7946 = v7945+(+46);
	i1 v7947 = *(i1*)(intptr_t)v7946;
	i1 v7948 = (i1)+25;
	if (v7947==v7948) goto c02_0727; else goto c02_0728;

c02_0727:;

	i8 v7949 = (i8)(intptr_t)(ws+3032);
	i8 v7950 = *(i8*)(intptr_t)v7949;
	i8 v7951 = *(i8*)(intptr_t)v7950;
	f443_DestructSubroutine(v7951);

	goto c02_0724;

c02_0728:;

c02_0724:;

	i8 v7952 = (i8)(intptr_t)(ws+3032);
	i8 v7953 = *(i8*)(intptr_t)v7952;
	f442_DestructSymbol(v7953);

	i8 v7954 = (i8)(intptr_t)(ws+3024);
	i8 v7955 = *(i8*)(intptr_t)v7954;
	i8 v7956 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v7956 = v7955;

	goto c02_0720;

c02_0723:;

	i8 v7957 = (i8)(intptr_t)(ws+3016);
	i8 v7958 = *(i8*)(intptr_t)v7957;
	i8 v7959 = (i8)+0;
	if (v7958==v7959) goto c02_072d; else goto c02_072c;

c02_072c:;

	i8 v7960 = (i8)+0;
	i8 v7961 = (i8)(intptr_t)(ws+3016);
	i8 v7962 = *(i8*)(intptr_t)v7961;
	i8 v7963 = v7962+(+56);
	*(i8*)(intptr_t)v7963 = v7960;

	goto c02_0729;

c02_072d:;

	i8 v7964 = (i8)+0;
	i8 v7965 = (i8)(intptr_t)(ws+3008);
	i8 v7966 = *(i8*)(intptr_t)v7965;
	i8 v7967 = v7966+(+16);
	*(i8*)(intptr_t)v7967 = v7964;

c02_0729:;

	i8 v7968 = (i8)(intptr_t)(ws+3016);
	i8 v7969 = *(i8*)(intptr_t)v7968;
	i8 v7970 = (i8)(intptr_t)(ws+3008);
	i8 v7971 = *(i8*)(intptr_t)v7970;
	i8 v7972 = v7971+(+24);
	*(i8*)(intptr_t)v7972 = v7969;

endsub:;
}
const i1 c02_s0165[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
const i1 c02_s0166[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };

// expr_i_cant_do_that workspace at ws+3096 length ws+16
void f444_expr_i_cant_do_that(i8 p7973 /* rhs */, i8 p7974 /* lhs */) {
	*(i8*)(intptr_t)(ws+3096) = p7974; /*lhs */
	*(i8*)(intptr_t)(ws+3104) = p7973; /*rhs */

	f55_StartError();

	i8 v7975 = (i8)(intptr_t)(ws+3096);
	i8 v7976 = *(i8*)(intptr_t)v7975;
	i8 v7977 = v7976+(+16);
	i8 v7978 = *(i8*)(intptr_t)v7977;
	i8 v7979 = v7978+(+48);
	i8 v7980 = *(i8*)(intptr_t)v7979;
	f11_print(v7980);

	i8 v7981 = (i8)(intptr_t)c02_s0165;
	f11_print(v7981);

	i8 v7982 = (i8)(intptr_t)(ws+3104);
	i8 v7983 = *(i8*)(intptr_t)v7982;
	i8 v7984 = v7983+(+16);
	i8 v7985 = *(i8*)(intptr_t)v7984;
	i8 v7986 = v7985+(+48);
	i8 v7987 = *(i8*)(intptr_t)v7986;
	f11_print(v7987);

	i8 v7988 = (i8)(intptr_t)c02_s0166;
	f11_print(v7988);

	f56_EndError();

endsub:;
}
const i1 c02_s0167[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
const i1 c02_s0168[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
const i1 c02_s0169[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
const i1 c02_s016a[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };

// CheckExpressionType workspace at ws+3064 length ws+16
void f445_CheckExpressionType(i8 p7989 /* type */, i8 p7990 /* node */) {
	*(i8*)(intptr_t)(ws+3064) = p7990; /*node */
	*(i8*)(intptr_t)(ws+3072) = p7989; /*type */

	i8 v7991 = (i8)(intptr_t)(ws+3064);
	i8 v7992 = *(i8*)(intptr_t)v7991;
	i8 v7993 = v7992+(+16);
	i8 v7994 = *(i8*)(intptr_t)v7993;
	i8 v7995 = (i8)+0;
	if (v7994==v7995) goto c02_0731; else goto c02_0732;

c02_0731:;

	i8 v7996 = (i8)(intptr_t)(ws+3072);
	i8 v7997 = *(i8*)(intptr_t)v7996;
	i8 v7998 = (i8)(intptr_t)(ws+3064);
	i8 v7999 = *(i8*)(intptr_t)v7998;
	i8 v8000 = v7999+(+16);
	*(i8*)(intptr_t)v8000 = v7997;

	goto c02_072e;

c02_0732:;

c02_072e:;

	i8 v8001 = (i8)(intptr_t)(ws+3064);
	i8 v8002 = *(i8*)(intptr_t)v8001;
	i8 v8003 = v8002+(+16);
	i8 v8004 = *(i8*)(intptr_t)v8003;
	i8 v8005 = (i8)(intptr_t)(ws+3072);
	i8 v8006 = *(i8*)(intptr_t)v8005;
	if (v8004==v8006) goto c02_0737; else goto c02_0736;

c02_0736:;

	f55_StartError();

	i8 v8007 = (i8)(intptr_t)c02_s0167;
	f11_print(v8007);

	i8 v8008 = (i8)(intptr_t)(ws+3064);
	i8 v8009 = *(i8*)(intptr_t)v8008;
	i8 v8010 = v8009+(+16);
	i8 v8011 = *(i8*)(intptr_t)v8010;
	i8 v8012 = v8011+(+48);
	i8 v8013 = *(i8*)(intptr_t)v8012;
	f11_print(v8013);

	i8 v8014 = (i8)(intptr_t)c02_s0168;
	f11_print(v8014);

	i8 v8015 = (i8)(intptr_t)(ws+3072);
	i8 v8016 = *(i8*)(intptr_t)v8015;
	i8 v8017 = v8016+(+48);
	i8 v8018 = *(i8*)(intptr_t)v8017;
	f11_print(v8018);

	i8 v8019 = (i8)(intptr_t)c02_s0169;
	f11_print(v8019);

	f56_EndError();

	goto c02_0733;

c02_0737:;

c02_0733:;

	i8 v8020 = (i8)(intptr_t)(ws+3072);
	i8 v8021 = *(i8*)(intptr_t)v8020;
	i1 v8022;
	f197_IsPtr(&v8022, v8021);
	i1 v8023 = (i1)+0;
	if (v8022==v8023) goto c02_073f; else goto c02_073e;

c02_073f:;

	i8 v8024 = (i8)(intptr_t)(ws+3072);
	i8 v8025 = *(i8*)(intptr_t)v8024;
	i1 v8026;
	f198_IsNum(&v8026, v8025);
	i1 v8027 = (i1)+0;
	if (v8026==v8027) goto c02_073d; else goto c02_073e;

c02_073d:;

	f55_StartError();

	i8 v8028 = (i8)(intptr_t)(ws+3072);
	i8 v8029 = *(i8*)(intptr_t)v8028;
	i8 v8030 = v8029+(+48);
	i8 v8031 = *(i8*)(intptr_t)v8030;
	f11_print(v8031);

	i8 v8032 = (i8)(intptr_t)c02_s016a;
	f11_print(v8032);

	f56_EndError();

	goto c02_0738;

c02_073e:;

c02_0738:;

endsub:;
}
const i1 c02_s016b[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
const i1 c02_s016c[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };

// ResolveUntypedConstantsForAddOrSub workspace at ws+3040 length ws+16
void f446_ResolveUntypedConstantsForAddOrSub(i8 p8033 /* rhs */, i8 p8034 /* lhs */) {
	*(i8*)(intptr_t)(ws+3040) = p8034; /*lhs */
	*(i8*)(intptr_t)(ws+3048) = p8033; /*rhs */

	i8 v8035 = (i8)(intptr_t)(ws+3040);
	i8 v8036 = *(i8*)(intptr_t)v8035;
	i8 v8037 = v8036+(+16);
	i8 v8038 = *(i8*)(intptr_t)v8037;
	i8 v8039 = (i8)+0;
	if (v8038==v8039) goto c02_0746; else goto c02_0747;

c02_0747:;

	i8 v8040 = (i8)(intptr_t)(ws+3048);
	i8 v8041 = *(i8*)(intptr_t)v8040;
	i8 v8042 = v8041+(+16);
	i8 v8043 = *(i8*)(intptr_t)v8042;
	i8 v8044 = (i8)+0;
	if (v8043==v8044) goto c02_0745; else goto c02_0746;

c02_0745:;

	i8 v8045 = (i8)(intptr_t)(ws+3040);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	i8 v8047 = v8046+(+16);
	i8 v8048 = *(i8*)(intptr_t)v8047;
	i1 v8049;
	f198_IsNum(&v8049, v8048);
	i1 v8050 = (i1)+0;
	if (v8049==v8050) goto c02_074c; else goto c02_074b;

c02_074b:;

	i8 v8051 = (i8)(intptr_t)(ws+3040);
	i8 v8052 = *(i8*)(intptr_t)v8051;
	i8 v8053 = v8052+(+16);
	i8 v8054 = *(i8*)(intptr_t)v8053;
	i8 v8055 = (i8)(intptr_t)(ws+3048);
	i8 v8056 = *(i8*)(intptr_t)v8055;
	i8 v8057 = v8056+(+16);
	*(i8*)(intptr_t)v8057 = v8054;

	goto c02_0748;

c02_074c:;

	i8 v8058 = (i8)(intptr_t)(ws+3040);
	i8 v8059 = *(i8*)(intptr_t)v8058;
	i8 v8060 = v8059+(+16);
	i8 v8061 = *(i8*)(intptr_t)v8060;
	i1 v8062;
	f197_IsPtr(&v8062, v8061);
	i1 v8063 = (i1)+0;
	if (v8062==v8063) goto c02_0750; else goto c02_074f;

c02_074f:;

	i8 v8064 = (i8)(intptr_t)(ws+1056);
	i8 v8065 = *(i8*)(intptr_t)v8064;
	i8 v8066 = (i8)(intptr_t)(ws+3048);
	i8 v8067 = *(i8*)(intptr_t)v8066;
	i8 v8068 = v8067+(+16);
	*(i8*)(intptr_t)v8068 = v8065;

	goto c02_0748;

c02_0750:;

	i8 v8069 = (i8)(intptr_t)c02_s016b;
	f57_SimpleError(v8069);

c02_0748:;

	goto c02_0740;

c02_0746:;

c02_0740:;

	i8 v8070 = (i8)(intptr_t)(ws+3040);
	i8 v8071 = *(i8*)(intptr_t)v8070;
	i8 v8072 = v8071+(+16);
	i8 v8073 = *(i8*)(intptr_t)v8072;
	i8 v8074 = (i8)+0;
	if (v8073==v8074) goto c02_0758; else goto c02_0757;

c02_0758:;

	i8 v8075 = (i8)(intptr_t)(ws+3048);
	i8 v8076 = *(i8*)(intptr_t)v8075;
	i8 v8077 = v8076+(+16);
	i8 v8078 = *(i8*)(intptr_t)v8077;
	i8 v8079 = (i8)+0;
	if (v8078==v8079) goto c02_0757; else goto c02_0756;

c02_0756:;

	i8 v8080 = (i8)(intptr_t)(ws+3048);
	i8 v8081 = *(i8*)(intptr_t)v8080;
	i8 v8082 = v8081+(+16);
	i8 v8083 = *(i8*)(intptr_t)v8082;
	i1 v8084;
	f198_IsNum(&v8084, v8083);
	i1 v8085 = (i1)+0;
	if (v8084==v8085) goto c02_075d; else goto c02_075c;

c02_075c:;

	i8 v8086 = (i8)(intptr_t)(ws+3048);
	i8 v8087 = *(i8*)(intptr_t)v8086;
	i8 v8088 = v8087+(+16);
	i8 v8089 = *(i8*)(intptr_t)v8088;
	i8 v8090 = (i8)(intptr_t)(ws+3040);
	i8 v8091 = *(i8*)(intptr_t)v8090;
	i8 v8092 = v8091+(+16);
	*(i8*)(intptr_t)v8092 = v8089;

	goto c02_0759;

c02_075d:;

	i8 v8093 = (i8)(intptr_t)(ws+3048);
	i8 v8094 = *(i8*)(intptr_t)v8093;
	i8 v8095 = v8094+(+16);
	i8 v8096 = *(i8*)(intptr_t)v8095;
	i1 v8097;
	f197_IsPtr(&v8097, v8096);
	i1 v8098 = (i1)+0;
	if (v8097==v8098) goto c02_0761; else goto c02_0760;

c02_0760:;

	i8 v8099 = (i8)(intptr_t)c02_s016c;
	f57_SimpleError(v8099);

	goto c02_0759;

c02_0761:;

c02_0759:;

	goto c02_0751;

c02_0757:;

c02_0751:;

endsub:;
}

// ResolveUntypedConstantsSimply workspace at ws+3064 length ws+32
void f447_ResolveUntypedConstantsSimply(i8 p8100 /* rhs */, i8 p8101 /* lhs */) {
	*(i8*)(intptr_t)(ws+3064) = p8101; /*lhs */
	*(i8*)(intptr_t)(ws+3072) = p8100; /*rhs */

	i8 v8102 = (i8)(intptr_t)(ws+3064);
	i8 v8103 = *(i8*)(intptr_t)v8102;
	i8 v8104 = v8103+(+16);
	i8 v8105 = *(i8*)(intptr_t)v8104;
	i8 v8106 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v8106 = v8105;

	i8 v8107 = (i8)(intptr_t)(ws+3072);
	i8 v8108 = *(i8*)(intptr_t)v8107;
	i8 v8109 = v8108+(+16);
	i8 v8110 = *(i8*)(intptr_t)v8109;
	i8 v8111 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v8111 = v8110;

	i8 v8112 = (i8)(intptr_t)(ws+3080);
	i8 v8113 = *(i8*)(intptr_t)v8112;
	i8 v8114 = (i8)+0;
	if (v8113==v8114) goto c02_0768; else goto c02_0769;

c02_0769:;

	i8 v8115 = (i8)(intptr_t)(ws+3088);
	i8 v8116 = *(i8*)(intptr_t)v8115;
	i8 v8117 = (i8)+0;
	if (v8116==v8117) goto c02_0767; else goto c02_0768;

c02_0767:;

	i8 v8118 = (i8)(intptr_t)(ws+3080);
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = (i8)(intptr_t)(ws+3072);
	i8 v8121 = *(i8*)(intptr_t)v8120;
	i8 v8122 = v8121+(+16);
	*(i8*)(intptr_t)v8122 = v8119;

	goto c02_0762;

c02_0768:;

	i8 v8123 = (i8)(intptr_t)(ws+3080);
	i8 v8124 = *(i8*)(intptr_t)v8123;
	i8 v8125 = (i8)+0;
	if (v8124==v8125) goto c02_0770; else goto c02_076f;

c02_0770:;

	i8 v8126 = (i8)(intptr_t)(ws+3088);
	i8 v8127 = *(i8*)(intptr_t)v8126;
	i8 v8128 = (i8)+0;
	if (v8127==v8128) goto c02_076f; else goto c02_076e;

c02_076e:;

	i8 v8129 = (i8)(intptr_t)(ws+3088);
	i8 v8130 = *(i8*)(intptr_t)v8129;
	i8 v8131 = (i8)(intptr_t)(ws+3064);
	i8 v8132 = *(i8*)(intptr_t)v8131;
	i8 v8133 = v8132+(+16);
	*(i8*)(intptr_t)v8133 = v8130;

	goto c02_0762;

c02_076f:;

	i8 v8134 = (i8)(intptr_t)(ws+3080);
	i8 v8135 = *(i8*)(intptr_t)v8134;
	i8 v8136 = (i8)(intptr_t)(ws+3088);
	i8 v8137 = *(i8*)(intptr_t)v8136;
	if (v8135==v8137) goto c02_0774; else goto c02_0773;

c02_0773:;

	i8 v8138 = (i8)(intptr_t)(ws+3064);
	i8 v8139 = *(i8*)(intptr_t)v8138;
	i8 v8140 = (i8)(intptr_t)(ws+3072);
	i8 v8141 = *(i8*)(intptr_t)v8140;
	f444_expr_i_cant_do_that(v8141, v8139);

	goto c02_0762;

c02_0774:;

c02_0762:;

endsub:;
}
const i1 c02_s016d[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };

// CheckNumber workspace at ws+3064 length ws+8
void f448_CheckNumber(i8 p8142 /* node */) {
	*(i8*)(intptr_t)(ws+3064) = p8142; /*node */

	i8 v8143 = (i8)(intptr_t)(ws+3064);
	i8 v8144 = *(i8*)(intptr_t)v8143;
	i8 v8145 = v8144+(+16);
	i8 v8146 = *(i8*)(intptr_t)v8145;
	i1 v8147;
	f198_IsNum(&v8147, v8146);
	i1 v8148 = (i1)+0;
	if (v8147==v8148) goto c02_0778; else goto c02_0779;

c02_0778:;

	i8 v8149 = (i8)(intptr_t)c02_s016d;
	f57_SimpleError(v8149);

	goto c02_0775;

c02_0779:;

c02_0775:;

endsub:;
}

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3048 length ws+16
void f449_ResolveUntypedConstantsNeedingNumbers(i8 p8150 /* rhs */, i8 p8151 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8151; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p8150; /*rhs */

	i8 v8152 = (i8)(intptr_t)(ws+3048);
	i8 v8153 = *(i8*)(intptr_t)v8152;
	i8 v8154 = (i8)(intptr_t)(ws+3056);
	i8 v8155 = *(i8*)(intptr_t)v8154;
	f447_ResolveUntypedConstantsSimply(v8155, v8153);

	i8 v8156 = (i8)(intptr_t)(ws+3048);
	i8 v8157 = *(i8*)(intptr_t)v8156;
	f448_CheckNumber(v8157);

	i8 v8158 = (i8)(intptr_t)(ws+3056);
	i8 v8159 = *(i8*)(intptr_t)v8158;
	f448_CheckNumber(v8159);

endsub:;
}

// CondSimple workspace at ws+3040 length ws+16
void f450_CondSimple(i8 p8160 /* rhs */, i8 p8161 /* lhs */) {
	*(i8*)(intptr_t)(ws+3040) = p8161; /*lhs */
	*(i8*)(intptr_t)(ws+3048) = p8160; /*rhs */

	i8 v8162 = (i8)(intptr_t)(ws+3040);
	i8 v8163 = *(i8*)(intptr_t)v8162;
	i8 v8164 = (i8)(intptr_t)(ws+3048);
	i8 v8165 = *(i8*)(intptr_t)v8164;
	f447_ResolveUntypedConstantsSimply(v8165, v8163);

	i8 v8166 = (i8)(intptr_t)(ws+3040);
	i8 v8167 = *(i8*)(intptr_t)v8166;
	i8 v8168 = v8167+(+16);
	i8 v8169 = *(i8*)(intptr_t)v8168;
	i8 v8170 = (i8)(intptr_t)(ws+3048);
	i8 v8171 = *(i8*)(intptr_t)v8170;
	i8 v8172 = v8171+(+16);
	i8 v8173 = *(i8*)(intptr_t)v8172;
	if (v8169==v8173) goto c02_077e; else goto c02_077d;

c02_077d:;

	i8 v8174 = (i8)(intptr_t)(ws+3040);
	i8 v8175 = *(i8*)(intptr_t)v8174;
	i8 v8176 = (i8)(intptr_t)(ws+3048);
	i8 v8177 = *(i8*)(intptr_t)v8176;
	f444_expr_i_cant_do_that(v8177, v8175);

	goto c02_077a;

c02_077e:;

c02_077a:;

endsub:;
}

// Expr1Simple workspace at ws+3000 length ws+24
void f451_Expr1Simple(i8* p8178 /* result */, i8 p8179 /* lhs */, i1 p8180 /* op */) {
	*(i1*)(intptr_t)(ws+3000) = p8180; /*op */
	*(i8*)(intptr_t)(ws+3008) = p8179; /*lhs */

	i8 v8181 = (i8)(intptr_t)(ws+3000);
	i1 v8182 = *(i1*)(intptr_t)v8181;
	i8 v8183 = (i8)(intptr_t)(ws+3008);
	i8 v8184 = *(i8*)(intptr_t)v8183;
	i1 v8185;
	f141_NodeWidth(&v8185, v8184);
	i8 v8186 = (i8)(intptr_t)(ws+3008);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	i8 v8188;
	f145_MidC1Op(&v8188, v8187, v8185, v8182);
	i8 v8189 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8189 = v8188;

	i8 v8190 = (i8)(intptr_t)(ws+3008);
	i8 v8191 = *(i8*)(intptr_t)v8190;
	i8 v8192 = v8191+(+16);
	i8 v8193 = *(i8*)(intptr_t)v8192;
	i8 v8194 = (i8)(intptr_t)(ws+3016);
	i8 v8195 = *(i8*)(intptr_t)v8194;
	i8 v8196 = v8195+(+16);
	*(i8*)(intptr_t)v8196 = v8193;

endsub:;
	*p8178 = *(i8*)(intptr_t)(ws+3016);
}

// cant_add_that workspace at ws+3040 length ws+0
void f453_cant_add_that(void) {

	i8 v8204 = (i8)(intptr_t)(ws+3000);
	i8 v8205 = *(i8*)(intptr_t)v8204;
	i8 v8206 = (i8)(intptr_t)(ws+3008);
	i8 v8207 = *(i8*)(intptr_t)v8206;
	f444_expr_i_cant_do_that(v8207, v8205);

endsub:;
}

// ExprAdd workspace at ws+3000 length ws+40
void f452_ExprAdd(i8* p8197 /* result */, i8 p8198 /* rhs */, i8 p8199 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8199; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8198; /*rhs */

	i8 v8200 = (i8)(intptr_t)(ws+3000);
	i8 v8201 = *(i8*)(intptr_t)v8200;
	i8 v8202 = (i8)(intptr_t)(ws+3008);
	i8 v8203 = *(i8*)(intptr_t)v8202;
	f446_ResolveUntypedConstantsForAddOrSub(v8203, v8201);


	i8 v8208 = (i8)(intptr_t)(ws+3000);
	i8 v8209 = *(i8*)(intptr_t)v8208;
	i8 v8210 = v8209+(+16);
	i8 v8211 = *(i8*)(intptr_t)v8210;
	i8 v8212 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8212 = v8211;

	i8 v8213 = (i8)(intptr_t)(ws+3008);
	i8 v8214 = *(i8*)(intptr_t)v8213;
	i8 v8215 = v8214+(+16);
	i8 v8216 = *(i8*)(intptr_t)v8215;
	i8 v8217 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8217 = v8216;

	i8 v8218 = (i8)(intptr_t)(ws+3024);
	i8 v8219 = *(i8*)(intptr_t)v8218;
	i1 v8220;
	f197_IsPtr(&v8220, v8219);
	i1 v8221 = (i1)+0;
	if (v8220==v8221) goto c02_0783; else goto c02_0782;

c02_0782:;

	i8 v8222 = (i8)(intptr_t)(ws+3032);
	i8 v8223 = *(i8*)(intptr_t)v8222;
	i1 v8224;
	f197_IsPtr(&v8224, v8223);
	i1 v8225 = (i1)+0;
	if (v8224==v8225) goto c02_078b; else goto c02_0789;

c02_078b:;

	i8 v8226 = (i8)(intptr_t)(ws+3032);
	i8 v8227 = *(i8*)(intptr_t)v8226;
	i8 v8228 = (i8)(intptr_t)(ws+1056);
	i8 v8229 = *(i8*)(intptr_t)v8228;
	if (v8227==v8229) goto c02_078a; else goto c02_0789;

c02_0789:;

	f453_cant_add_that();

	goto c02_0784;

c02_078a:;

c02_0784:;

	goto c02_077f;

c02_0783:;

	i8 v8230 = (i8)(intptr_t)(ws+3032);
	i8 v8231 = *(i8*)(intptr_t)v8230;
	i1 v8232;
	f197_IsPtr(&v8232, v8231);
	i1 v8233 = (i1)+0;
	if (v8232==v8233) goto c02_078f; else goto c02_078e;

c02_078e:;

	f453_cant_add_that();

	goto c02_077f;

c02_078f:;

	i8 v8234 = (i8)(intptr_t)(ws+3024);
	i8 v8235 = *(i8*)(intptr_t)v8234;
	i1 v8236;
	f197_IsPtr(&v8236, v8235);
	i1 v8237 = (i1)+0;
	if (v8236==v8237) goto c02_0796; else goto c02_0795;

c02_0796:;

	i8 v8238 = (i8)(intptr_t)(ws+3024);
	i8 v8239 = *(i8*)(intptr_t)v8238;
	i8 v8240 = (i8)(intptr_t)(ws+3032);
	i8 v8241 = *(i8*)(intptr_t)v8240;
	if (v8239==v8241) goto c02_0795; else goto c02_0794;

c02_0794:;

	f453_cant_add_that();

	goto c02_077f;

c02_0795:;

c02_077f:;

	i1 v8242 = (i1)+155;
	i8 v8243 = (i8)(intptr_t)(ws+3000);
	i8 v8244 = *(i8*)(intptr_t)v8243;
	i1 v8245;
	f141_NodeWidth(&v8245, v8244);
	i8 v8246 = (i8)(intptr_t)(ws+3000);
	i8 v8247 = *(i8*)(intptr_t)v8246;
	i8 v8248 = (i8)(intptr_t)(ws+3008);
	i8 v8249 = *(i8*)(intptr_t)v8248;
	i8 v8250;
	f147_MidC2Op(&v8250, v8249, v8247, v8245, v8242);
	i8 v8251 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8251 = v8250;

	i8 v8252 = (i8)(intptr_t)(ws+3024);
	i8 v8253 = *(i8*)(intptr_t)v8252;
	i8 v8254 = (i8)(intptr_t)(ws+3016);
	i8 v8255 = *(i8*)(intptr_t)v8254;
	i8 v8256 = v8255+(+16);
	*(i8*)(intptr_t)v8256 = v8253;

endsub:;
	*p8197 = *(i8*)(intptr_t)(ws+3016);
}

// cant_sub_that workspace at ws+3040 length ws+0
void f455_cant_sub_that(void) {

	i8 v8264 = (i8)(intptr_t)(ws+3000);
	i8 v8265 = *(i8*)(intptr_t)v8264;
	i8 v8266 = (i8)(intptr_t)(ws+3008);
	i8 v8267 = *(i8*)(intptr_t)v8266;
	f444_expr_i_cant_do_that(v8267, v8265);

endsub:;
}

// ExprSub workspace at ws+3000 length ws+40
void f454_ExprSub(i8* p8257 /* result */, i8 p8258 /* rhs */, i8 p8259 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8259; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8258; /*rhs */

	i8 v8260 = (i8)(intptr_t)(ws+3000);
	i8 v8261 = *(i8*)(intptr_t)v8260;
	i8 v8262 = (i8)(intptr_t)(ws+3008);
	i8 v8263 = *(i8*)(intptr_t)v8262;
	f446_ResolveUntypedConstantsForAddOrSub(v8263, v8261);


	i8 v8268 = (i8)(intptr_t)(ws+3000);
	i8 v8269 = *(i8*)(intptr_t)v8268;
	i8 v8270 = v8269+(+16);
	i8 v8271 = *(i8*)(intptr_t)v8270;
	i8 v8272 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8272 = v8271;

	i8 v8273 = (i8)(intptr_t)(ws+3008);
	i8 v8274 = *(i8*)(intptr_t)v8273;
	i8 v8275 = v8274+(+16);
	i8 v8276 = *(i8*)(intptr_t)v8275;
	i8 v8277 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8277 = v8276;

	i8 v8278 = (i8)(intptr_t)(ws+3024);
	i8 v8279 = *(i8*)(intptr_t)v8278;
	i1 v8280;
	f197_IsPtr(&v8280, v8279);
	i1 v8281 = (i1)+0;
	if (v8280==v8281) goto c02_079f; else goto c02_07a1;

c02_07a1:;

	i8 v8282 = (i8)(intptr_t)(ws+3032);
	i8 v8283 = *(i8*)(intptr_t)v8282;
	i1 v8284;
	f197_IsPtr(&v8284, v8283);
	i1 v8285 = (i1)+0;
	if (v8284==v8285) goto c02_07a0; else goto c02_079f;

c02_07a0:;

	i8 v8286 = (i8)(intptr_t)(ws+3032);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	i8 v8288 = (i8)(intptr_t)(ws+1056);
	i8 v8289 = *(i8*)(intptr_t)v8288;
	if (v8287==v8289) goto c02_079f; else goto c02_079e;

c02_079e:;

	f455_cant_sub_that();

	goto c02_0797;

c02_079f:;

	i8 v8290 = (i8)(intptr_t)(ws+3024);
	i8 v8291 = *(i8*)(intptr_t)v8290;
	i1 v8292;
	f198_IsNum(&v8292, v8291);
	i1 v8293 = (i1)+0;
	if (v8292==v8293) goto c02_07a7; else goto c02_07a8;

c02_07a8:;

	i8 v8294 = (i8)(intptr_t)(ws+3032);
	i8 v8295 = *(i8*)(intptr_t)v8294;
	i1 v8296;
	f197_IsPtr(&v8296, v8295);
	i1 v8297 = (i1)+0;
	if (v8296==v8297) goto c02_07a7; else goto c02_07a6;

c02_07a6:;

	f455_cant_sub_that();

	goto c02_0797;

c02_07a7:;

	i8 v8298 = (i8)(intptr_t)(ws+3024);
	i8 v8299 = *(i8*)(intptr_t)v8298;
	i1 v8300;
	f198_IsNum(&v8300, v8299);
	i1 v8301 = (i1)+0;
	if (v8300==v8301) goto c02_07b0; else goto c02_07b2;

c02_07b2:;

	i8 v8302 = (i8)(intptr_t)(ws+3032);
	i8 v8303 = *(i8*)(intptr_t)v8302;
	i1 v8304;
	f198_IsNum(&v8304, v8303);
	i1 v8305 = (i1)+0;
	if (v8304==v8305) goto c02_07b0; else goto c02_07b1;

c02_07b1:;

	i8 v8306 = (i8)(intptr_t)(ws+3024);
	i8 v8307 = *(i8*)(intptr_t)v8306;
	i8 v8308 = (i8)(intptr_t)(ws+3032);
	i8 v8309 = *(i8*)(intptr_t)v8308;
	if (v8307==v8309) goto c02_07b0; else goto c02_07af;

c02_07af:;

	f455_cant_sub_that();

	goto c02_0797;

c02_07b0:;

c02_0797:;

	i1 v8310 = (i1)+130;
	i8 v8311 = (i8)(intptr_t)(ws+3000);
	i8 v8312 = *(i8*)(intptr_t)v8311;
	i1 v8313;
	f141_NodeWidth(&v8313, v8312);
	i8 v8314 = (i8)(intptr_t)(ws+3000);
	i8 v8315 = *(i8*)(intptr_t)v8314;
	i8 v8316 = (i8)(intptr_t)(ws+3008);
	i8 v8317 = *(i8*)(intptr_t)v8316;
	i8 v8318;
	f147_MidC2Op(&v8318, v8317, v8315, v8313, v8310);
	i8 v8319 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8319 = v8318;

	i8 v8320 = (i8)(intptr_t)(ws+3024);
	i8 v8321 = *(i8*)(intptr_t)v8320;
	i1 v8322;
	f197_IsPtr(&v8322, v8321);
	i1 v8323 = (i1)+0;
	if (v8322==v8323) goto c02_07b9; else goto c02_07ba;

c02_07ba:;

	i8 v8324 = (i8)(intptr_t)(ws+3024);
	i8 v8325 = *(i8*)(intptr_t)v8324;
	i8 v8326 = (i8)(intptr_t)(ws+3032);
	i8 v8327 = *(i8*)(intptr_t)v8326;
	if (v8325==v8327) goto c02_07b8; else goto c02_07b9;

c02_07b8:;

	i8 v8328 = (i8)(intptr_t)(ws+1056);
	i8 v8329 = *(i8*)(intptr_t)v8328;
	i8 v8330 = (i8)(intptr_t)(ws+3016);
	i8 v8331 = *(i8*)(intptr_t)v8330;
	i8 v8332 = v8331+(+16);
	*(i8*)(intptr_t)v8332 = v8329;

	goto c02_07b3;

c02_07b9:;

	i8 v8333 = (i8)(intptr_t)(ws+3024);
	i8 v8334 = *(i8*)(intptr_t)v8333;
	i8 v8335 = (i8)(intptr_t)(ws+3016);
	i8 v8336 = *(i8*)(intptr_t)v8335;
	i8 v8337 = v8336+(+16);
	*(i8*)(intptr_t)v8337 = v8334;

c02_07b3:;

endsub:;
	*p8257 = *(i8*)(intptr_t)(ws+3016);
}

// Expr2Simple workspace at ws+3000 length ws+48
void f456_Expr2Simple(i8* p8338 /* result */, i8 p8339 /* rhs */, i8 p8340 /* lhs */, i1 p8341 /* uop */, i1 p8342 /* sop */) {
	*(i1*)(intptr_t)(ws+3000) = p8342; /*sop */
	*(i1*)(intptr_t)(ws+3001) = p8341; /*uop */
	*(i8*)(intptr_t)(ws+3008) = p8340; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8339; /*rhs */

	i8 v8343 = (i8)(intptr_t)(ws+3008);
	i8 v8344 = *(i8*)(intptr_t)v8343;
	i8 v8345 = (i8)(intptr_t)(ws+3016);
	i8 v8346 = *(i8*)(intptr_t)v8345;
	f449_ResolveUntypedConstantsNeedingNumbers(v8346, v8344);

	i8 v8347 = (i8)(intptr_t)(ws+3001);
	i1 v8348 = *(i1*)(intptr_t)v8347;
	i8 v8349 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8349 = v8348;

	i8 v8350 = (i8)(intptr_t)(ws+3008);
	i8 v8351 = *(i8*)(intptr_t)v8350;
	i8 v8352 = v8351+(+16);
	i8 v8353 = *(i8*)(intptr_t)v8352;
	i1 v8354;
	f199_IsSNum(&v8354, v8353);
	i1 v8355 = (i1)+0;
	if (v8354==v8355) goto c02_07bf; else goto c02_07be;

c02_07be:;

	i8 v8356 = (i8)(intptr_t)(ws+3000);
	i1 v8357 = *(i1*)(intptr_t)v8356;
	i8 v8358 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8358 = v8357;

	goto c02_07bb;

c02_07bf:;

c02_07bb:;

	i8 v8359 = (i8)(intptr_t)(ws+3008);
	i8 v8360 = *(i8*)(intptr_t)v8359;
	i8 v8361 = v8360+(+16);
	i8 v8362 = *(i8*)(intptr_t)v8361;
	i8 v8363 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8363 = v8362;

	i8 v8364 = (i8)(intptr_t)(ws+3032);
	i1 v8365 = *(i1*)(intptr_t)v8364;
	i8 v8366 = (i8)(intptr_t)(ws+3008);
	i8 v8367 = *(i8*)(intptr_t)v8366;
	i1 v8368;
	f141_NodeWidth(&v8368, v8367);
	i8 v8369 = (i8)(intptr_t)(ws+3008);
	i8 v8370 = *(i8*)(intptr_t)v8369;
	i8 v8371 = (i8)(intptr_t)(ws+3016);
	i8 v8372 = *(i8*)(intptr_t)v8371;
	i8 v8373;
	f147_MidC2Op(&v8373, v8372, v8370, v8368, v8365);
	i8 v8374 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8374 = v8373;

	i8 v8375 = (i8)(intptr_t)(ws+3040);
	i8 v8376 = *(i8*)(intptr_t)v8375;
	i8 v8377 = (i8)(intptr_t)(ws+3024);
	i8 v8378 = *(i8*)(intptr_t)v8377;
	i8 v8379 = v8378+(+16);
	*(i8*)(intptr_t)v8379 = v8376;

endsub:;
	*p8338 = *(i8*)(intptr_t)(ws+3024);
}
const i1 c02_s016e[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };

// expr_i_checkrhsconst workspace at ws+3048 length ws+8
void f457_expr_i_checkrhsconst(i8 p8380 /* rhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8380; /*rhs */

	i8 v8381 = (i8)(intptr_t)(ws+3048);
	i8 v8382 = *(i8*)(intptr_t)v8381;
	i8 v8383 = v8382+(+66);
	i1 v8384 = *(i1*)(intptr_t)v8383;
	i1 v8385 = (i1)+40;
	if (v8384==v8385) goto c02_07c4; else goto c02_07c3;

c02_07c3:;

	i8 v8386 = (i8)(intptr_t)c02_s016e;
	f57_SimpleError(v8386);

	goto c02_07c0;

c02_07c4:;

c02_07c0:;

endsub:;
}
const i1 c02_s016f[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };

// expr_i_checkshift workspace at ws+3048 length ws+16
void f458_expr_i_checkshift(i8 p8387 /* rhs */, i8 p8388 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8388; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p8387; /*rhs */

	i8 v8389 = (i8)(intptr_t)(ws+3048);
	i8 v8390 = *(i8*)(intptr_t)v8389;
	i8 v8391 = v8390+(+16);
	i8 v8392 = *(i8*)(intptr_t)v8391;
	i1 v8393;
	f198_IsNum(&v8393, v8392);
	i1 v8394 = (i1)+0;
	if (v8393==v8394) goto c02_07c8; else goto c02_07c9;

c02_07c8:;

	i8 v8395 = (i8)(intptr_t)c02_s016f;
	f57_SimpleError(v8395);

	goto c02_07c5;

c02_07c9:;

c02_07c5:;

	i8 v8396 = (i8)(intptr_t)(ws+3056);
	i8 v8397 = *(i8*)(intptr_t)v8396;
	i8 v8398 = (i8)(intptr_t)(ws+1040);
	i8 v8399 = *(i8*)(intptr_t)v8398;
	f445_CheckExpressionType(v8399, v8397);

endsub:;
}

// ExprShift workspace at ws+3000 length ws+48
void f459_ExprShift(i8* p8400 /* result */, i8 p8401 /* rhs */, i8 p8402 /* lhs */, i1 p8403 /* uop */, i1 p8404 /* sop */) {
	*(i1*)(intptr_t)(ws+3000) = p8404; /*sop */
	*(i1*)(intptr_t)(ws+3001) = p8403; /*uop */
	*(i8*)(intptr_t)(ws+3008) = p8402; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8401; /*rhs */

	i8 v8405 = (i8)(intptr_t)(ws+3001);
	i1 v8406 = *(i1*)(intptr_t)v8405;
	i8 v8407 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8407 = v8406;

	i8 v8408 = (i8)(intptr_t)(ws+3008);
	i8 v8409 = *(i8*)(intptr_t)v8408;
	i8 v8410 = v8409+(+16);
	i8 v8411 = *(i8*)(intptr_t)v8410;
	i1 v8412;
	f199_IsSNum(&v8412, v8411);
	i1 v8413 = (i1)+0;
	if (v8412==v8413) goto c02_07ce; else goto c02_07cd;

c02_07cd:;

	i8 v8414 = (i8)(intptr_t)(ws+3000);
	i1 v8415 = *(i1*)(intptr_t)v8414;
	i8 v8416 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v8416 = v8415;

	goto c02_07ca;

c02_07ce:;

c02_07ca:;

	i8 v8417 = (i8)(intptr_t)(ws+3008);
	i8 v8418 = *(i8*)(intptr_t)v8417;
	i8 v8419 = v8418+(+66);
	i1 v8420 = *(i1*)(intptr_t)v8419;
	i1 v8421 = (i1)+40;
	if (v8420==v8421) goto c02_07d2; else goto c02_07d3;

c02_07d2:;

	i8 v8422 = (i8)(intptr_t)(ws+3016);
	i8 v8423 = *(i8*)(intptr_t)v8422;
	f457_expr_i_checkrhsconst(v8423);

	i8 v8424 = (i8)(intptr_t)(ws+3032);
	i1 v8425 = *(i1*)(intptr_t)v8424;
	i8 v8426 = (i8)(intptr_t)(ws+3008);
	i8 v8427 = *(i8*)(intptr_t)v8426;
	i8 v8428 = (i8)(intptr_t)(ws+3016);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	i4 v8430;
	f144_FoldConstant2(&v8430, v8429, v8427, v8425);
	i8 v8431 = (i8)(intptr_t)(ws+3008);
	i8 v8432 = *(i8*)(intptr_t)v8431;
	*(i4*)(intptr_t)v8432 = v8430;

	i8 v8433 = (i8)(intptr_t)(ws+3008);
	i8 v8434 = *(i8*)(intptr_t)v8433;
	i8 v8435 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8435 = v8434;

	i8 v8436 = (i8)(intptr_t)(ws+3016);
	i8 v8437 = *(i8*)(intptr_t)v8436;
	f140_Discard(v8437);

	goto endsub;

c02_07d3:;

c02_07cf:;

	i8 v8438 = (i8)(intptr_t)(ws+3008);
	i8 v8439 = *(i8*)(intptr_t)v8438;
	i8 v8440 = (i8)(intptr_t)(ws+3016);
	i8 v8441 = *(i8*)(intptr_t)v8440;
	f458_expr_i_checkshift(v8441, v8439);

	i8 v8442 = (i8)(intptr_t)(ws+3008);
	i8 v8443 = *(i8*)(intptr_t)v8442;
	i8 v8444 = v8443+(+16);
	i8 v8445 = *(i8*)(intptr_t)v8444;
	i8 v8446 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8446 = v8445;

	i8 v8447 = (i8)(intptr_t)(ws+3032);
	i1 v8448 = *(i1*)(intptr_t)v8447;
	i8 v8449 = (i8)(intptr_t)(ws+3008);
	i8 v8450 = *(i8*)(intptr_t)v8449;
	i1 v8451;
	f141_NodeWidth(&v8451, v8450);
	i8 v8452 = (i8)(intptr_t)(ws+3008);
	i8 v8453 = *(i8*)(intptr_t)v8452;
	i8 v8454 = (i8)(intptr_t)(ws+3016);
	i8 v8455 = *(i8*)(intptr_t)v8454;
	i8 v8456;
	f147_MidC2Op(&v8456, v8455, v8453, v8451, v8448);
	i8 v8457 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8457 = v8456;

	i8 v8458 = (i8)(intptr_t)(ws+3040);
	i8 v8459 = *(i8*)(intptr_t)v8458;
	i8 v8460 = (i8)(intptr_t)(ws+3024);
	i8 v8461 = *(i8*)(intptr_t)v8460;
	i8 v8462 = v8461+(+16);
	*(i8*)(intptr_t)v8462 = v8459;

endsub:;
	*p8400 = *(i8*)(intptr_t)(ws+3024);
}

// BeginNormalLoop workspace at ws+3008 length ws+8
void f460_BeginNormalLoop(i8* p8463 /* ll */) {

	i8 v8464 = (i8)+8;
	i8 v8465;
	f31_Alloc(&v8465, v8464);
	i8 v8466 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v8466 = v8465;

	i2 v8467;
	f204_AllocLabel(&v8467);
	i8 v8468 = (i8)(intptr_t)(ws+3008);
	i8 v8469 = *(i8*)(intptr_t)v8468;
	*(i2*)(intptr_t)v8469 = v8467;

	i2 v8470;
	f204_AllocLabel(&v8470);
	i8 v8471 = (i8)(intptr_t)(ws+3008);
	i8 v8472 = *(i8*)(intptr_t)v8471;
	i8 v8473 = v8472+(+2);
	*(i2*)(intptr_t)v8473 = v8470;

	i8 v8474 = (i8)(intptr_t)(ws+52);
	i2 v8475 = *(i2*)(intptr_t)v8474;
	i8 v8476 = (i8)(intptr_t)(ws+3008);
	i8 v8477 = *(i8*)(intptr_t)v8476;
	i8 v8478 = v8477+(+4);
	*(i2*)(intptr_t)v8478 = v8475;

	i8 v8479 = (i8)(intptr_t)(ws+54);
	i2 v8480 = *(i2*)(intptr_t)v8479;
	i8 v8481 = (i8)(intptr_t)(ws+3008);
	i8 v8482 = *(i8*)(intptr_t)v8481;
	i8 v8483 = v8482+(+6);
	*(i2*)(intptr_t)v8483 = v8480;

	i8 v8484 = (i8)(intptr_t)(ws+3008);
	i8 v8485 = *(i8*)(intptr_t)v8484;
	i8 v8486 = v8485+(+2);
	i2 v8487 = *(i2*)(intptr_t)v8486;
	i8 v8488 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8488 = v8487;

	i8 v8489 = (i8)(intptr_t)(ws+3008);
	i8 v8490 = *(i8*)(intptr_t)v8489;
	i2 v8491 = *(i2*)(intptr_t)v8490;
	i8 v8492 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8492 = v8491;

endsub:;
	*p8463 = *(i8*)(intptr_t)(ws+3008);
}

// TerminateNormalLoop workspace at ws+3000 length ws+8
void f461_TerminateNormalLoop(i8 p8493 /* ll */) {
	*(i8*)(intptr_t)(ws+3000) = p8493; /*ll */

	i8 v8494 = (i8)(intptr_t)(ws+54);
	i2 v8495 = *(i2*)(intptr_t)v8494;
	i8 v8496;
	f121_MidJump(&v8496, v8495);
	f435_Generate(v8496);

	i8 v8497 = (i8)(intptr_t)(ws+52);
	i2 v8498 = *(i2*)(intptr_t)v8497;
	i8 v8499;
	f91_MidLabel(&v8499, v8498);
	f435_Generate(v8499);

	i8 v8500 = (i8)(intptr_t)(ws+3000);
	i8 v8501 = *(i8*)(intptr_t)v8500;
	i8 v8502 = v8501+(+4);
	i2 v8503 = *(i2*)(intptr_t)v8502;
	i8 v8504 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8504 = v8503;

	i8 v8505 = (i8)(intptr_t)(ws+3000);
	i8 v8506 = *(i8*)(intptr_t)v8505;
	i8 v8507 = v8506+(+6);
	i2 v8508 = *(i2*)(intptr_t)v8507;
	i8 v8509 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8509 = v8508;

	i8 v8510 = (i8)(intptr_t)(ws+3000);
	i8 v8511 = *(i8*)(intptr_t)v8510;
	f32_Free(v8511);

endsub:;
}

// Negate workspace at ws+3000 length ws+8
void f462_Negate(i8 p8512 /* node */) {
	*(i8*)(intptr_t)(ws+3000) = p8512; /*node */

	i8 v8513 = (i8)(intptr_t)(ws+3000);
	i8 v8514 = *(i8*)(intptr_t)v8513;
	i8 v8515 = v8514+(+6);
	i1 v8516 = *(i1*)(intptr_t)v8515;
	i1 v8517 = v8516^(+1);
	i8 v8518 = (i8)(intptr_t)(ws+3000);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	i8 v8520 = v8519+(+6);
	*(i1*)(intptr_t)v8520 = v8517;

endsub:;
}

// ConditionalEq workspace at ws+3000 length ws+37
void f463_ConditionalEq(i8* p8521 /* result */, i1 p8522 /* negated */, i8 p8523 /* rhs */, i8 p8524 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8524; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8523; /*rhs */
	*(i1*)(intptr_t)(ws+3016) = p8522; /*negated */

	i8 v8525 = (i8)(intptr_t)(ws+3000);
	i8 v8526 = *(i8*)(intptr_t)v8525;
	i8 v8527 = (i8)(intptr_t)(ws+3008);
	i8 v8528 = *(i8*)(intptr_t)v8527;
	f450_CondSimple(v8528, v8526);

	i2 v8529;
	f204_AllocLabel(&v8529);
	i8 v8530 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v8530 = v8529;

	i2 v8531;
	f204_AllocLabel(&v8531);
	i8 v8532 = (i8)(intptr_t)(ws+3034);
	*(i2*)(intptr_t)v8532 = v8531;

	i8 v8533 = (i8)(intptr_t)(ws+3000);
	i8 v8534 = *(i8*)(intptr_t)v8533;
	i1 v8535;
	f141_NodeWidth(&v8535, v8534);
	i8 v8536 = (i8)(intptr_t)(ws+3036);
	*(i1*)(intptr_t)v8536 = v8535;

	i8 v8537 = (i8)(intptr_t)(ws+3036);
	i1 v8538 = *(i1*)(intptr_t)v8537;
	i8 v8539 = (i8)(intptr_t)(ws+3000);
	i8 v8540 = *(i8*)(intptr_t)v8539;
	i8 v8541 = (i8)(intptr_t)(ws+3008);
	i8 v8542 = *(i8*)(intptr_t)v8541;
	i8 v8543 = (i8)(intptr_t)(ws+3032);
	i2 v8544 = *(i2*)(intptr_t)v8543;
	i8 v8545 = (i8)(intptr_t)(ws+3034);
	i2 v8546 = *(i2*)(intptr_t)v8545;
	i2 v8547 = (i2)+0;
	i8 v8548 = (i8)(intptr_t)(ws+3016);
	i1 v8549 = *(i1*)(intptr_t)v8548;
	i8 v8550;
	f94_MidBeq(&v8550, v8549, v8547, v8546, v8544, v8542, v8540, v8538);
	i8 v8551 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8551 = v8550;

endsub:;
	*p8521 = *(i8*)(intptr_t)(ws+3024);
}

// ConditionalLt workspace at ws+3000 length ws+37
void f464_ConditionalLt(i8* p8552 /* result */, i1 p8553 /* negated */, i8 p8554 /* rhs */, i8 p8555 /* lhs */) {
	*(i8*)(intptr_t)(ws+3000) = p8555; /*lhs */
	*(i8*)(intptr_t)(ws+3008) = p8554; /*rhs */
	*(i1*)(intptr_t)(ws+3016) = p8553; /*negated */

	i8 v8556 = (i8)(intptr_t)(ws+3000);
	i8 v8557 = *(i8*)(intptr_t)v8556;
	i8 v8558 = (i8)(intptr_t)(ws+3008);
	i8 v8559 = *(i8*)(intptr_t)v8558;
	f450_CondSimple(v8559, v8557);

	i2 v8560;
	f204_AllocLabel(&v8560);
	i8 v8561 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v8561 = v8560;

	i2 v8562;
	f204_AllocLabel(&v8562);
	i8 v8563 = (i8)(intptr_t)(ws+3034);
	*(i2*)(intptr_t)v8563 = v8562;

	i8 v8564 = (i8)(intptr_t)(ws+3000);
	i8 v8565 = *(i8*)(intptr_t)v8564;
	i1 v8566;
	f141_NodeWidth(&v8566, v8565);
	i8 v8567 = (i8)(intptr_t)(ws+3036);
	*(i1*)(intptr_t)v8567 = v8566;

	i8 v8568 = (i8)(intptr_t)(ws+3000);
	i8 v8569 = *(i8*)(intptr_t)v8568;
	i8 v8570 = v8569+(+16);
	i8 v8571 = *(i8*)(intptr_t)v8570;
	i1 v8572;
	f199_IsSNum(&v8572, v8571);
	i1 v8573 = (i1)+0;
	if (v8572==v8573) goto c02_07d8; else goto c02_07d7;

c02_07d7:;

	i8 v8574 = (i8)(intptr_t)(ws+3036);
	i1 v8575 = *(i1*)(intptr_t)v8574;
	i8 v8576 = (i8)(intptr_t)(ws+3000);
	i8 v8577 = *(i8*)(intptr_t)v8576;
	i8 v8578 = (i8)(intptr_t)(ws+3008);
	i8 v8579 = *(i8*)(intptr_t)v8578;
	i8 v8580 = (i8)(intptr_t)(ws+3032);
	i2 v8581 = *(i2*)(intptr_t)v8580;
	i8 v8582 = (i8)(intptr_t)(ws+3034);
	i2 v8583 = *(i2*)(intptr_t)v8582;
	i2 v8584 = (i2)+0;
	i8 v8585 = (i8)(intptr_t)(ws+3016);
	i1 v8586 = *(i1*)(intptr_t)v8585;
	i8 v8587;
	f90_MidBlts(&v8587, v8586, v8584, v8583, v8581, v8579, v8577, v8575);
	i8 v8588 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8588 = v8587;

	goto c02_07d4;

c02_07d8:;

	i8 v8589 = (i8)(intptr_t)(ws+3036);
	i1 v8590 = *(i1*)(intptr_t)v8589;
	i8 v8591 = (i8)(intptr_t)(ws+3000);
	i8 v8592 = *(i8*)(intptr_t)v8591;
	i8 v8593 = (i8)(intptr_t)(ws+3008);
	i8 v8594 = *(i8*)(intptr_t)v8593;
	i8 v8595 = (i8)(intptr_t)(ws+3032);
	i2 v8596 = *(i2*)(intptr_t)v8595;
	i8 v8597 = (i8)(intptr_t)(ws+3034);
	i2 v8598 = *(i2*)(intptr_t)v8597;
	i2 v8599 = (i2)+0;
	i8 v8600 = (i8)(intptr_t)(ws+3016);
	i1 v8601 = *(i1*)(intptr_t)v8600;
	i8 v8602;
	f101_MidBltu(&v8602, v8601, v8599, v8598, v8596, v8594, v8592, v8590);
	i8 v8603 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8603 = v8602;

c02_07d4:;

endsub:;
	*p8552 = *(i8*)(intptr_t)(ws+3024);
}
const i1 c02_s0170[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };

// parser_i_bad_next_prev workspace at ws+3000 length ws+0
void f465_parser_i_bad_next_prev(void) {

	i8 v8604 = (i8)(intptr_t)c02_s0170;
	f57_SimpleError(v8604);

endsub:;
}
const i1 c02_s0171[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };

// parser_i_constant_error workspace at ws+3024 length ws+0
void f466_parser_i_constant_error(void) {

	i8 v8605 = (i8)(intptr_t)c02_s0171;
	f57_SimpleError(v8605);

endsub:;
}
const i1 c02_s0172[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
const i1 c02_s0173[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
const i1 c02_s0174[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };

// i_check_sub_call_args workspace at ws+3048 length ws+8
void f467_i_check_sub_call_args(void) {

	i8 v8606 = (i8)(intptr_t)(ws+80);
	i8 v8607 = *(i8*)(intptr_t)v8606;
	i8 v8608 = *(i8*)(intptr_t)v8607;
	i8 v8609 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8609 = v8608;

	i8 v8610 = (i8)(intptr_t)(ws+80);
	i8 v8611 = *(i8*)(intptr_t)v8610;
	i8 v8612 = v8611+(+32);
	i1 v8613 = *(i1*)(intptr_t)v8612;
	i8 v8614 = (i8)(intptr_t)(ws+3048);
	i8 v8615 = *(i8*)(intptr_t)v8614;
	i8 v8616 = v8615+(+66);
	i1 v8617 = *(i1*)(intptr_t)v8616;
	if (v8613==v8617) goto c02_07dd; else goto c02_07dc;

c02_07dc:;

	f55_StartError();

	i8 v8618 = (i8)(intptr_t)c02_s0172;
	f11_print(v8618);

	i8 v8619 = (i8)(intptr_t)(ws+3048);
	i8 v8620 = *(i8*)(intptr_t)v8619;
	i8 v8621 = *(i8*)(intptr_t)v8620;
	f11_print(v8621);

	i8 v8622 = (i8)(intptr_t)c02_s0173;
	f11_print(v8622);

	i8 v8623 = (i8)(intptr_t)(ws+3048);
	i8 v8624 = *(i8*)(intptr_t)v8623;
	i8 v8625 = v8624+(+66);
	i1 v8626 = *(i1*)(intptr_t)v8625;
	f17_print_i8(v8626);

	i8 v8627 = (i8)(intptr_t)c02_s0174;
	f11_print(v8627);

	i8 v8628 = (i8)(intptr_t)(ws+80);
	i8 v8629 = *(i8*)(intptr_t)v8628;
	i8 v8630 = v8629+(+32);
	i1 v8631 = *(i1*)(intptr_t)v8630;
	f17_print_i8(v8631);

	f56_EndError();

	goto c02_07d9;

c02_07dd:;

c02_07d9:;

endsub:;
}

// i_end_call workspace at ws+3048 length ws+8
void f468_i_end_call(void) {

	i8 v8632 = (i8)(intptr_t)(ws+40);
	i8 v8633 = *(i8*)(intptr_t)v8632;
	i8 v8634 = (i8)(intptr_t)(ws+80);
	i8 v8635 = *(i8*)(intptr_t)v8634;
	i8 v8636 = *(i8*)(intptr_t)v8635;
	f176_EmitterReferenceSubroutine(v8636, v8633);

	i8 v8637 = (i8)(intptr_t)(ws+80);
	i8 v8638 = *(i8*)(intptr_t)v8637;
	i8 v8639 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8639 = v8638;

	i8 v8640 = (i8)(intptr_t)(ws+3048);
	i8 v8641 = *(i8*)(intptr_t)v8640;
	i8 v8642 = v8641+(+8);
	i8 v8643 = *(i8*)(intptr_t)v8642;
	i8 v8644 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v8644 = v8643;

	i8 v8645 = (i8)(intptr_t)(ws+3048);
	i8 v8646 = *(i8*)(intptr_t)v8645;
	f32_Free(v8646);

endsub:;
}
const i1 c02_s0175[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };

// SymbolRedeclarationError workspace at ws+3000 length ws+0
void f469_SymbolRedeclarationError(void) {

	f55_StartError();

	i8 v8647 = (i8)(intptr_t)c02_s0175;
	f11_print(v8647);

	i8 v8648 = (i8)(intptr_t)(ws+72);
	i8 v8649 = *(i8*)(intptr_t)v8648;
	i8 v8650 = v8649+(+48);
	i8 v8651 = *(i8*)(intptr_t)v8650;
	f11_print(v8651);

	f56_EndError();

endsub:;
}
const i1 c02_s0176[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };

// WrongNumberOfElementsError workspace at ws+3040 length ws+0
void f470_WrongNumberOfElementsError(void) {

	f55_StartError();

	i8 v8652 = (i8)(intptr_t)c02_s0176;
	f11_print(v8652);

	i8 v8653 = (i8)(intptr_t)(ws+72);
	i8 v8654 = *(i8*)(intptr_t)v8653;
	i8 v8655 = v8654+(+48);
	i8 v8656 = *(i8*)(intptr_t)v8655;
	f11_print(v8656);

	f56_EndError();

endsub:;
}

// CheckEndOfInitialiser workspace at ws+3000 length ws+4
void f471_CheckEndOfInitialiser(void) {

	i8 v8657 = (i8)(intptr_t)(ws+72);
	i8 v8658 = *(i8*)(intptr_t)v8657;
	i1 v8659;
	f196_IsArray(&v8659, v8658);
	i1 v8660 = (i1)+0;
	if (v8659==v8660) goto c02_07e2; else goto c02_07e1;

c02_07e1:;

	i8 v8661 = (i8)(intptr_t)(ws+72);
	i8 v8662 = *(i8*)(intptr_t)v8661;
	i8 v8663 = *(i8*)(intptr_t)v8662;
	i8 v8664 = v8663+(+44);
	i2 v8665 = *(i2*)(intptr_t)v8664;
	i8 v8666 = (i8)(intptr_t)(ws+3000);
	*(i2*)(intptr_t)v8666 = v8665;

	i8 v8667 = (i8)(intptr_t)(ws+72);
	i8 v8668 = *(i8*)(intptr_t)v8667;
	i8 v8669 = v8668+(+42);
	i2 v8670 = *(i2*)(intptr_t)v8669;
	i2 v8671 = (i2)+0;
	if (v8670==v8671) goto c02_07e6; else goto c02_07e7;

c02_07e6:;

	i8 v8672 = (i8)(intptr_t)(ws+1232);
	i2 v8673 = *(i2*)(intptr_t)v8672;
	i8 v8674 = (i8)(intptr_t)(ws+72);
	i8 v8675 = *(i8*)(intptr_t)v8674;
	i8 v8676 = v8675+(+42);
	*(i2*)(intptr_t)v8676 = v8673;

	i8 v8677 = (i8)(intptr_t)(ws+1232);
	i2 v8678 = *(i2*)(intptr_t)v8677;
	i8 v8679 = (i8)(intptr_t)(ws+3000);
	i2 v8680 = *(i2*)(intptr_t)v8679;
	i2 v8681 = v8678/v8680;
	i8 v8682 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v8682 = v8681;

	i8 v8683 = (i8)(intptr_t)(ws+3002);
	i2 v8684 = *(i2*)(intptr_t)v8683;
	i8 v8685 = (i8)(intptr_t)(ws+72);
	i8 v8686 = *(i8*)(intptr_t)v8685;
	i8 v8687 = v8686+(+8);
	*(i2*)(intptr_t)v8687 = v8684;

	i4 v8688 = (i4)+0;
	i8 v8689 = (i8)(intptr_t)(ws+3002);
	i2 v8690 = *(i2*)(intptr_t)v8689;
	i2 v8691 = v8690+(-1);
	i4 v8692 = v8691;
	i8 v8693;
	f211_ArchGuessIntType(&v8693, v8692, v8688);
	i8 v8694 = (i8)(intptr_t)(ws+72);
	i8 v8695 = *(i8*)(intptr_t)v8694;
	i8 v8696 = v8695+(+16);
	*(i8*)(intptr_t)v8696 = v8693;

	goto c02_07e3;

c02_07e7:;

c02_07e3:;

	i8 v8697 = (i8)(intptr_t)(ws+1232);
	i2 v8698 = *(i2*)(intptr_t)v8697;
	i8 v8699 = (i8)(intptr_t)(ws+72);
	i8 v8700 = *(i8*)(intptr_t)v8699;
	i8 v8701 = v8700+(+42);
	i2 v8702 = *(i2*)(intptr_t)v8701;
	if (v8698==v8702) goto c02_07ec; else goto c02_07eb;

c02_07eb:;

	f470_WrongNumberOfElementsError();

	goto c02_07e8;

c02_07ec:;

c02_07e8:;

	goto c02_07de;

c02_07e2:;

	i8 v8703 = (i8)(intptr_t)(ws+1224);
	i8 v8704 = *(i8*)(intptr_t)v8703;
	i8 v8705 = (i8)+0;
	if (v8704==v8705) goto c02_07f1; else goto c02_07f0;

c02_07f0:;

	f470_WrongNumberOfElementsError();

	goto c02_07ed;

c02_07f1:;

c02_07ed:;

c02_07de:;

endsub:;
}

// GetInitedMember workspace at ws+3040 length ws+16
void f472_GetInitedMember(i8* p8706 /* member */, i8* p8707 /* type */) {

	i8 v8708 = (i8)+0;
	i8 v8709 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8709 = v8708;

	i8 v8710 = (i8)(intptr_t)(ws+72);
	i8 v8711 = *(i8*)(intptr_t)v8710;
	i1 v8712;
	f196_IsArray(&v8712, v8711);
	i1 v8713 = (i1)+0;
	if (v8712==v8713) goto c02_07f6; else goto c02_07f5;

c02_07f5:;

	i8 v8714 = (i8)(intptr_t)(ws+72);
	i8 v8715 = *(i8*)(intptr_t)v8714;
	i8 v8716 = *(i8*)(intptr_t)v8715;
	i8 v8717 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8717 = v8716;

	goto c02_07f2;

c02_07f6:;

	i8 v8718 = (i8)(intptr_t)(ws+1224);
	i8 v8719 = *(i8*)(intptr_t)v8718;
	i8 v8720 = (i8)+0;
	if (v8719==v8720) goto c02_07fa; else goto c02_07fb;

c02_07fa:;

	i8 v8721 = (i8)+0;
	i8 v8722 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8722 = v8721;

	goto endsub;

c02_07fb:;

c02_07f7:;

	i8 v8723 = (i8)(intptr_t)(ws+1224);
	i8 v8724 = *(i8*)(intptr_t)v8723;
	i8 v8725 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8725 = v8724;

	i8 v8726 = (i8)(intptr_t)(ws+1224);
	i8 v8727 = *(i8*)(intptr_t)v8726;
	i8 v8728 = *(i8*)(intptr_t)v8727;
	i8 v8729 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8729 = v8728;

	i8 v8730 = (i8)(intptr_t)(ws+1224);
	i8 v8731 = *(i8*)(intptr_t)v8730;
	i8 v8732 = v8731+(+56);
	i8 v8733 = *(i8*)(intptr_t)v8732;
	i8 v8734 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v8734 = v8733;

c02_07f2:;

endsub:;
	*p8707 = *(i8*)(intptr_t)(ws+3048);
	*p8706 = *(i8*)(intptr_t)(ws+3040);
}

// AlignTo workspace at ws+3040 length ws+4
void f473_AlignTo(i1 p8735 /* alignment */) {
	*(i1*)(intptr_t)(ws+3040) = p8735; /*alignment */

	i8 v8736 = (i8)(intptr_t)(ws+1234);
	i2 v8737 = *(i2*)(intptr_t)v8736;
	i8 v8738 = (i8)(intptr_t)(ws+3040);
	i1 v8739 = *(i1*)(intptr_t)v8738;
	i2 v8740;
	f209_ArchAlignUp(&v8740, v8739, v8737);
	i8 v8741 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v8741 = v8740;

c02_07fe:;

	i8 v8742 = (i8)(intptr_t)(ws+1234);
	i2 v8743 = *(i2*)(intptr_t)v8742;
	i8 v8744 = (i8)(intptr_t)(ws+3042);
	i2 v8745 = *(i2*)(intptr_t)v8744;
	if (v8743==v8745) goto c02_0801; else goto c02_0800;

c02_0800:;

	i1 v8746 = (i1)+1;
	i4 v8747 = (i4)+0;
	i8 v8748;
	f117_MidInit(&v8748, v8747, v8746);
	f435_Generate(v8748);

	i8 v8749 = (i8)(intptr_t)(ws+1232);
	i2 v8750 = *(i2*)(intptr_t)v8749;
	i2 v8751 = v8750+(+1);
	i8 v8752 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v8752 = v8751;

	i8 v8753 = (i8)(intptr_t)(ws+1234);
	i2 v8754 = *(i2*)(intptr_t)v8753;
	i2 v8755 = v8754+(+1);
	i8 v8756 = (i8)(intptr_t)(ws+1234);
	*(i2*)(intptr_t)v8756 = v8755;

	goto c02_07fe;

c02_0801:;

endsub:;
}
const i1 c02_s0177[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };

// CheckForOverlaps workspace at ws+3040 length ws+8
void f474_CheckForOverlaps(i8 p8757 /* member */) {
	*(i8*)(intptr_t)(ws+3040) = p8757; /*member */

	i8 v8758 = (i8)(intptr_t)(ws+3040);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	i8 v8760 = (i8)+0;
	if (v8759==v8760) goto c02_0805; else goto c02_0806;

c02_0805:;

	goto endsub;

c02_0806:;

c02_0802:;

	i8 v8761 = (i8)(intptr_t)(ws+3040);
	i8 v8762 = *(i8*)(intptr_t)v8761;
	i8 v8763 = v8762+(+32);
	i2 v8764 = *(i2*)(intptr_t)v8763;
	i8 v8765 = (i8)(intptr_t)(ws+1232);
	i2 v8766 = *(i2*)(intptr_t)v8765;
	if (v8764<v8766) goto c02_080a; else goto c02_080b;

c02_080a:;

	i8 v8767 = (i8)(intptr_t)c02_s0177;
	f57_SimpleError(v8767);

	goto c02_0807;

c02_080b:;

c02_0807:;

endsub:;
}

// GetInitedMemberChecked workspace at ws+3024 length ws+16
void f475_GetInitedMemberChecked(i8* p8768 /* member */, i8* p8769 /* type */) {

	i8 v8770;
	i8 v8771;
	f472_GetInitedMember(&v8770, &v8771);

	i8 v8772 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8772 = v8771;

	i8 v8773 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8773 = v8770;

	i8 v8774 = (i8)(intptr_t)(ws+3032);
	i8 v8775 = *(i8*)(intptr_t)v8774;
	i8 v8776 = (i8)+0;
	if (v8775==v8776) goto c02_080f; else goto c02_0810;

c02_080f:;

	f470_WrongNumberOfElementsError();

	goto c02_080c;

c02_0810:;

c02_080c:;

	i8 v8777 = (i8)(intptr_t)(ws+3032);
	i8 v8778 = *(i8*)(intptr_t)v8777;
	i8 v8779 = v8778+(+41);
	i1 v8780 = *(i1*)(intptr_t)v8779;
	f473_AlignTo(v8780);

	i8 v8781 = (i8)(intptr_t)(ws+3024);
	i8 v8782 = *(i8*)(intptr_t)v8781;
	f474_CheckForOverlaps(v8782);

endsub:;
	*p8769 = *(i8*)(intptr_t)(ws+3032);
	*p8768 = *(i8*)(intptr_t)(ws+3024);
}
static data c02_a811[] = { // yy_action




	{ .i1 = { 0x9a,0x00,0x7b,0x01,0x99,0x00,0xb6,0x00}},




	{ .i1 = { 0x0e,0x02,0x3d,0x00,0x54,0x00,0x58,0x00}},




	{ .i1 = { 0x92,0x01,0x04,0x00,0xa8,0x00,0x24,0x01}},




	{ .i1 = { 0x60,0x00,0x17,0x01,0x34,0x00,0x01,0x02}},




	{ .i1 = { 0x0e,0x00,0x25,0x00,0xce,0x01,0xa2,0x00}},




	{ .i1 = { 0x4c,0x00,0xc2,0x00,0x82,0x01,0xc0,0x00}},




	{ .i1 = { 0xdc,0x01,0x4d,0x00,0x56,0x00,0x32,0x00}},




	{ .i1 = { 0x5a,0x00,0x14,0x00,0x9c,0x00,0x9b,0x00}},




	{ .i1 = { 0x2a,0x00,0x52,0x01,0x2e,0x01,0xce,0x01}},




	{ .i1 = { 0x4b,0x00,0x51,0x01,0xc0,0x00,0xad,0x00}},




	{ .i1 = { 0x4a,0x00,0x47,0x01,0x13,0x02,0x9e,0x00}},




	{ .i1 = { 0x35,0x00,0x5b,0x00,0x44,0x00,0x2a,0x00}},




	{ .i1 = { 0x30,0x00,0x37,0x00,0x13,0x00,0x11,0x00}},




	{ .i1 = { 0x64,0x00,0x31,0x00,0x33,0x00,0xa8,0x01}},




	{ .i1 = { 0x29,0x00,0x27,0x00,0x26,0x00,0x74,0x01}},




	{ .i1 = { 0xb5,0x00,0x1c,0x00,0x53,0x01,0x7b,0x01}},




	{ .i1 = { 0xbf,0x00,0xb6,0x00,0xbd,0x00,0xbe,0x00}},




	{ .i1 = { 0x59,0x00,0x58,0x00,0x46,0x00,0x2e,0x00}},




	{ .i1 = { 0xb8,0x00,0x0a,0x00,0x60,0x00,0x17,0x01}},




	{ .i1 = { 0x34,0x00,0x01,0x02,0x0e,0x00,0x25,0x00}},




	{ .i1 = { 0x53,0x01,0x88,0x00,0x4c,0x00,0xc2,0x00}},




	{ .i1 = { 0x82,0x01,0x46,0x00,0x2e,0x00,0x4d,0x00}},




	{ .i1 = { 0x49,0x00,0x32,0x00,0x5a,0x00,0x14,0x00}},




	{ .i1 = { 0x76,0x00,0x0a,0x02,0x5e,0x00,0x52,0x01}},




	{ .i1 = { 0x2e,0x01,0xce,0x01,0x4b,0x00,0x9a,0x00}},




	{ .i1 = { 0xc0,0x00,0xad,0x00,0x4a,0x00,0x47,0x01}},




	{ .i1 = { 0x9f,0x00,0x9e,0x00,0xbd,0x00,0x45,0x00}},




	{ .i1 = { 0x59,0x00,0x2a,0x00,0x30,0x00,0x8c,0x00}},




	{ .i1 = { 0xdf,0x01,0x52,0x01,0x7d,0x01,0x31,0x00}},




	{ .i1 = { 0x33,0x00,0x89,0x00,0x29,0x00,0x27,0x00}},




	{ .i1 = { 0x26,0x00,0x7c,0x01,0xb5,0x00,0x1c,0x00}},




	{ .i1 = { 0x52,0x01,0x7b,0x01,0xbf,0x00,0xb6,0x00}},




	{ .i1 = { 0x3b,0x00,0xef,0x01,0x9b,0x00,0x58,0x00}},




	{ .i1 = { 0x07,0x00,0xce,0x01,0xb9,0x00,0xf2,0x01}},




	{ .i1 = { 0x60,0x00,0x17,0x01,0x34,0x00,0x52,0x01}},




	{ .i1 = { 0x0e,0x00,0x25,0x00,0x51,0x00,0x19,0x01}},




	{ .i1 = { 0x4c,0x00,0xc2,0x00,0x82,0x01,0x46,0x00}},




	{ .i1 = { 0x2e,0x00,0x4d,0x00,0x55,0x00,0x32,0x00}},




	{ .i1 = { 0x5a,0x00,0x14,0x00,0x69,0x01,0x65,0x00}},




	{ .i1 = { 0x64,0x00,0x52,0x01,0x2e,0x01,0x85,0x00}},




	{ .i1 = { 0x4b,0x00,0x94,0x00,0x8b,0x00,0xad,0x00}},




	{ .i1 = { 0x4a,0x00,0x47,0x01,0xa7,0x00,0x3d,0x00}},




	{ .i1 = { 0x54,0x00,0xbd,0x00,0xbd,0x00,0x59,0x00}},




	{ .i1 = { 0x59,0x00,0x13,0x00,0x11,0x00,0x38,0x00}},




	{ .i1 = { 0xb1,0x00,0xe3,0x01,0xce,0x01,0x08,0x02}},




	{ .i1 = { 0x29,0x00,0x27,0x00,0x26,0x00,0x51,0x01}},




	{ .i1 = { 0xb5,0x00,0x1c,0x00,0x02,0x02,0x7b,0x01}},




	{ .i1 = { 0xbf,0x00,0xb6,0x00,0x15,0x00,0xd2,0x01}},




	{ .i1 = { 0xd7,0x01,0x58,0x00,0x96,0x00,0x12,0x01}},




	{ .i1 = { 0x6e,0x00,0x4c,0x01,0x60,0x00,0x17,0x01}},




	{ .i1 = { 0x34,0x00,0x8a,0x00,0x0e,0x00,0x25,0x00}},




	{ .i1 = { 0xc5,0x01,0xd7,0x01,0x4c,0x00,0xc2,0x00}},




	{ .i1 = { 0x82,0x01,0x15,0x00,0xbd,0x00,0x4d,0x00}},




	{ .i1 = { 0x59,0x00,0x32,0x00,0x5a,0x00,0x14,0x00}},




	{ .i1 = { 0x77,0x00,0xce,0x01,0xa4,0x00,0x52,0x01}},




	{ .i1 = { 0x2e,0x01,0x07,0x00,0x4b,0x00,0x6f,0x00}},




	{ .i1 = { 0x77,0x00,0xad,0x00,0x4a,0x00,0x47,0x01}},




	{ .i1 = { 0x98,0x00,0x41,0x00,0xbd,0x00,0x52,0x00}},




	{ .i1 = { 0x59,0x00,0x86,0x00,0x86,0x00,0x08,0x00}},




	{ .i1 = { 0xba,0x00,0xbd,0x00,0xbd,0x00,0x59,0x00}},




	{ .i1 = { 0x59,0x00,0xea,0x01,0x29,0x00,0x27,0x00}},




	{ .i1 = { 0x26,0x00,0xb0,0x00,0xb5,0x00,0x1c,0x00}},




	{ .i1 = { 0xa5,0x00,0x7b,0x01,0xbf,0x00,0xb6,0x00}},




	{ .i1 = { 0xc4,0x01,0xd7,0x01,0x5d,0x00,0x58,0x00}},




	{ .i1 = { 0x9d,0x00,0xeb,0x01,0x6e,0x00,0x3e,0x00}},




	{ .i1 = { 0x60,0x00,0x17,0x01,0x34,0x00,0xc1,0x00}},




	{ .i1 = { 0x0e,0x00,0x25,0x00,0xb3,0x00,0x55,0x01}},




	{ .i1 = { 0x4c,0x00,0xc2,0x00,0x82,0x01,0x0d,0x00}},




	{ .i1 = { 0xbd,0x00,0x4d,0x00,0x59,0x00,0x32,0x00}},




	{ .i1 = { 0x5a,0x00,0x14,0x00,0x6e,0x00,0xce,0x01}},




	{ .i1 = { 0x15,0x00,0x52,0x01,0x2e,0x01,0xa9,0x00}},




	{ .i1 = { 0x4b,0x00,0x84,0x00,0xe7,0x01,0xad,0x00}},




	{ .i1 = { 0x4a,0x00,0x47,0x01,0x13,0x00,0x11,0x00}},




	{ .i1 = { 0xbd,0x00,0x78,0x01,0x59,0x00,0x87,0x00}},




	{ .i1 = { 0x87,0x00,0x08,0x00,0x5a,0x01,0x64,0x00}},




	{ .i1 = { 0xab,0x00,0xce,0x01,0xaa,0x01,0x0b,0x00}},




	{ .i1 = { 0x29,0x00,0x27,0x00,0x26,0x00,0xaf,0x00}},




	{ .i1 = { 0xb5,0x00,0x1c,0x00,0x2f,0x01,0x3f,0x00}},




	{ .i1 = { 0xbf,0x00,0xbd,0x00,0xc0,0x00,0x59,0x00}},




	{ .i1 = { 0x10,0x02,0x08,0x00,0xa0,0x00,0x0f,0x00}},




	{ .i1 = { 0x35,0x00,0x77,0x00,0x15,0x00,0x2a,0x00}},




	{ .i1 = { 0x30,0x00,0x37,0x00,0x15,0x00,0x71,0x01}},




	{ .i1 = { 0x0b,0x00,0x31,0x00,0x33,0x00,0x50,0x01}},




	{ .i1 = { 0xc0,0x00,0xa3,0x00,0x93,0x00,0xbd,0x00}},




	{ .i1 = { 0x1a,0x00,0x59,0x00,0x35,0x00,0xd9,0x01}},




	{ .i1 = { 0x05,0x00,0x2a,0x00,0x30,0x00,0x37,0x00}},




	{ .i1 = { 0x01,0x00,0x5c,0x00,0x24,0x00,0x31,0x00}},




	{ .i1 = { 0x33,0x00,0x66,0x00,0x47,0x00,0x2d,0x00}},




	{ .i1 = { 0x2f,0x00,0x20,0x00,0x1d,0x00,0x1e,0x00}},




	{ .i1 = { 0x1f,0x00,0x22,0x00,0x21,0x00,0x2c,0x00}},




	{ .i1 = { 0x2b,0x00,0x46,0x00,0x2e,0x00,0xbd,0x00}},




	{ .i1 = { 0x06,0x00,0x59,0x00,0x48,0x00,0x70,0x00}},




	{ .i1 = { 0x02,0x00,0x2d,0x00,0x2f,0x00,0x20,0x00}},




	{ .i1 = { 0x1d,0x00,0x1e,0x00,0x1f,0x00,0x22,0x00}},




	{ .i1 = { 0x21,0x00,0x2c,0x00,0x2b,0x00,0x46,0x00}},




	{ .i1 = { 0x2e,0x00,0xbd,0x00,0x0c,0x00,0x59,0x00}},




	{ .i1 = { 0x34,0x00,0x03,0x00,0x36,0x00,0x25,0x00}},




	{ .i1 = { 0x4f,0x00,0xc0,0x00,0x1c,0x01,0x64,0x00}},




	{ .i1 = { 0x95,0x00,0x23,0x01,0x85,0x00,0x22,0x01}},




	{ .i1 = { 0xb4,0x00,0x32,0x00,0x2a,0x00,0x40,0x00}},




	{ .i1 = { 0x15,0x00,0x79,0x01,0x6a,0x01,0x52,0x01}},




	{ .i1 = { 0x2e,0x01,0xbd,0x00,0x4b,0x00,0x59,0x00}},




	{ .i1 = { 0x77,0x00,0x63,0x00,0x4a,0x00,0x47,0x01}},




	{ .i1 = { 0x82,0x00,0x53,0x00,0x3c,0x00,0x39,0x00}},




	{ .i1 = { 0x34,0x00,0x10,0x00,0x12,0x00,0x25,0x00}},




	{ .i1 = { 0xae,0x00,0x7a,0x01,0xbd,0x00,0xbd,0x00}},




	{ .i1 = { 0x59,0x00,0x59,0x00,0x29,0x00,0x27,0x00}},




	{ .i1 = { 0x26,0x00,0x32,0x00,0x64,0x00,0x75,0x01}},




	{ .i1 = { 0x09,0x00,0xb7,0x00,0xbf,0x00,0x52,0x01}},




	{ .i1 = { 0x2e,0x01,0x73,0x01,0x4b,0x00,0x5b,0x01}},




	{ .i1 = { 0x16,0x00,0x77,0x00,0x4a,0x00,0x47,0x01}},




	{ .i1 = { 0xbd,0x00,0x42,0x00,0x59,0x00,0x64,0x00}},




	{ .i1 = { 0xa6,0x00,0x34,0x00,0x83,0x00,0x36,0x00}},




	{ .i1 = { 0x25,0x00,0xbb,0x00,0x6e,0x01,0xbd,0x00}},




	{ .i1 = { 0x63,0x01,0x59,0x00,0x29,0x00,0x27,0x00}},




	{ .i1 = { 0x26,0x00,0xbd,0x00,0x32,0x00,0x59,0x00}},




	{ .i1 = { 0x58,0x01,0x77,0x00,0xbf,0x00,0x4e,0x00}},




	{ .i1 = { 0x52,0x01,0x2e,0x01,0x43,0x00,0x4b,0x00}},




	{ .i1 = { 0x57,0x01,0xac,0x00,0x76,0x00,0x4a,0x00}},




	{ .i1 = { 0x47,0x01,0xbc,0x00,0x97,0x00,0xbd,0x00}},




	{ .i1 = { 0x49,0x01,0x59,0x00,0x5f,0x01,0x34,0x00}},




	{ .i1 = { 0x17,0x00,0x36,0x00,0x25,0x00,0xb2,0x00}},




	{ .i1 = { 0xbd,0x00,0x18,0x00,0x59,0x00,0x29,0x00}},




	{ .i1 = { 0x27,0x00,0x26,0x00,0xe0,0x01,0x20,0x01}},




	{ .i1 = { 0x32,0x00,0x71,0x00,0x72,0x00,0xbf,0x00}},




	{ .i1 = { 0x50,0x00,0x11,0x00,0x52,0x01,0x2e,0x01}},




	{ .i1 = { 0x18,0x01,0x4b,0x00,0x1b,0x01,0x73,0x00}},




	{ .i1 = { 0x4e,0x01,0x4a,0x00,0x47,0x01,0xbd,0x00}},




	{ .i1 = { 0xbd,0x00,0x59,0x00,0x59,0x00,0x74,0x00}},




	{ .i1 = { 0x1a,0x01,0x34,0x00,0x75,0x00,0x36,0x00}},




	{ .i1 = { 0x25,0x00,0xbd,0x00,0x16,0x01,0x59,0x00}},




	{ .i1 = { 0x4d,0x01,0x29,0x00,0x27,0x00,0x26,0x00}},




	{ .i1 = { 0x4a,0x01,0xbd,0x00,0x32,0x00,0x59,0x00}},




	{ .i1 = { 0xbd,0x00,0xbf,0x00,0x59,0x00,0x19,0x00}},




	{ .i1 = { 0x52,0x01,0x2e,0x01,0x2f,0x01,0x4b,0x00}},




	{ .i1 = { 0x67,0x00,0xdc,0x01,0xc0,0x00,0x4a,0x00}},




	{ .i1 = { 0x47,0x01,0x1b,0x00,0x28,0x00,0x46,0x01}},




	{ .i1 = { 0x35,0x00,0x69,0x00,0x6a,0x00,0x2a,0x00}},




	{ .i1 = { 0x30,0x00,0x37,0x00,0xbd,0x00,0x11,0x01}},




	{ .i1 = { 0x59,0x00,0x31,0x00,0x33,0x00,0x29,0x00}},




	{ .i1 = { 0x27,0x00,0x26,0x00,0xc0,0x00,0xbd,0x00}},




	{ .i1 = { 0xbd,0x00,0x59,0x00,0x59,0x00,0xbf,0x00}},




	{ .i1 = { 0x35,0x00,0x8d,0x00,0x8e,0x00,0x2a,0x00}},




	{ .i1 = { 0x30,0x00,0x37,0x00,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x31,0x00,0x33,0x00,0x2d,0x00}},




	{ .i1 = { 0x2f,0x00,0x8f,0x00,0x90,0x00,0xbd,0x00}},




	{ .i1 = { 0xbd,0x00,0x59,0x00,0x59,0x00,0x2c,0x00}},




	{ .i1 = { 0x2b,0x00,0x46,0x00,0x2e,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0xbd,0x00}},




	{ .i1 = { 0xbd,0x00,0x59,0x00,0x59,0x00,0x2d,0x00}},




	{ .i1 = { 0x2f,0x00,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x6b,0x00,0x93,0x01,0x2c,0x00}},




	{ .i1 = { 0x2b,0x00,0x46,0x00,0x2e,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x21,0x01,0xc0,0x00,0x93,0x01,0xbd,0x00}},




	{ .i1 = { 0x7a,0x00,0x59,0x00,0x93,0x01,0x35,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x2a,0x00,0x30,0x00}},




	{ .i1 = { 0x37,0x00,0x23,0x00,0x93,0x01,0x15,0x01}},




	{ .i1 = { 0x31,0x00,0x33,0x00,0xbd,0x00,0xc0,0x00}},




	{ .i1 = { 0x59,0x00,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x35,0x00,0x7b,0x00,0x78,0x00}},




	{ .i1 = { 0x2a,0x00,0x30,0x00,0x37,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x31,0x00,0x33,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x2d,0x00,0x2f,0x00}},




	{ .i1 = { 0xbd,0x00,0xbd,0x00,0x59,0x00,0x59,0x00}},




	{ .i1 = { 0xc0,0x00,0x93,0x01,0x2c,0x00,0x2b,0x00}},




	{ .i1 = { 0x46,0x00,0x2e,0x00,0x35,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x2a,0x00,0x30,0x00,0x37,0x00}},




	{ .i1 = { 0x2d,0x00,0x2f,0x00,0x14,0x01,0x31,0x00}},




	{ .i1 = { 0x33,0x00,0x93,0x01,0x91,0x00,0x93,0x01}},




	{ .i1 = { 0x2c,0x00,0x2b,0x00,0x46,0x00,0x2e,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x79,0x00}},




	{ .i1 = { 0x80,0x00,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0xbd,0x00,0x93,0x01,0x59,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x2d,0x00,0x2f,0x00,0x81,0x00}},




	{ .i1 = { 0x93,0x01,0xbd,0x00,0xbd,0x00,0x59,0x00}},




	{ .i1 = { 0x59,0x00,0x2c,0x00,0x2b,0x00,0x46,0x00}},




	{ .i1 = { 0x2e,0x00,0x93,0x01,0x93,0x01,0x44,0x01}},




	{ .i1 = { 0x92,0x00,0xbd,0x00,0xc0,0x00,0x59,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x35,0x00,0x7f,0x00,0x93,0x01,0x2a,0x00}},




	{ .i1 = { 0x30,0x00,0x37,0x00,0xbd,0x00,0x93,0x01}},




	{ .i1 = { 0x59,0x00,0x31,0x00,0x33,0x00,0x45,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0xc0,0x00,0xbd,0x00}},




	{ .i1 = { 0x93,0x01,0x59,0x00,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x35,0x00,0x7e,0x00,0x7d,0x00,0x2a,0x00}},




	{ .i1 = { 0x30,0x00,0x37,0x00,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x31,0x00,0x33,0x00,0x2d,0x00}},




	{ .i1 = { 0x2f,0x00,0x93,0x01,0x6c,0x00,0xbd,0x00}},




	{ .i1 = { 0xbd,0x00,0x59,0x00,0x59,0x00,0x2c,0x00}},




	{ .i1 = { 0x2b,0x00,0x46,0x00,0x2e,0x00,0x93,0x01}},




	{ .i1 = { 0x34,0x00,0x93,0x01,0x36,0x00,0x25,0x00}},




	{ .i1 = { 0xbd,0x00,0x93,0x01,0x59,0x00,0x2d,0x00}},




	{ .i1 = { 0x2f,0x00,0x7c,0x00,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x32,0x00,0x93,0x01,0x2c,0x00}},




	{ .i1 = { 0x2b,0x00,0x46,0x00,0x2e,0x00,0x52,0x01}},




	{ .i1 = { 0x2e,0x01,0x93,0x01,0x4b,0x00,0xbd,0x00}},




	{ .i1 = { 0xc0,0x00,0x59,0x00,0x4a,0x00,0x47,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x35,0x00,0x6d,0x00}},




	{ .i1 = { 0x93,0x01,0x2a,0x00,0x30,0x00,0x37,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x13,0x01,0x31,0x00}},




	{ .i1 = { 0x33,0x00,0x93,0x01,0x29,0x00,0x27,0x00}},




	{ .i1 = { 0x26,0x00,0xbd,0x00,0x93,0x01,0x59,0x00}},




	{ .i1 = { 0xc0,0x00,0x93,0x01,0xbf,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x35,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x2a,0x00,0x30,0x00,0x37,0x00}},




	{ .i1 = { 0x93,0x01,0x2d,0x00,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0x33,0x00,0x93,0x01,0x93,0x01,0xc0,0x00}},




	{ .i1 = { 0x93,0x01,0x2c,0x00,0x2b,0x00,0x46,0x00}},




	{ .i1 = { 0x2e,0x00,0x35,0x00,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x2a,0x00,0x30,0x00,0x37,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x31,0x00,0x33,0x00}},




	{ .i1 = { 0x93,0x01,0x2d,0x00,0x2f,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0xc0,0x00}},




	{ .i1 = { 0x93,0x01,0x2c,0x00,0x2b,0x00,0x46,0x00}},




	{ .i1 = { 0x2e,0x00,0x35,0x00,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x2a,0x00,0x30,0x00,0x37,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x2f,0x00,0x31,0x00,0x33,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x2c,0x00,0x2b,0x00,0x46,0x00,0x2e,0x00}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x04,0x02,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x68,0x00,0x62,0x00,0x61,0x00,0x93,0x01}},




	{ .i1 = { 0x2c,0x00,0x2b,0x00,0x46,0x00,0x2e,0x00}},




	{ .i1 = { 0x5f,0x00,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0xbd,0x00,0x93,0x01}},




	{ .i1 = { 0x57,0x00,0x93,0x01,0xaa,0x00,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0x93,0x01,0x93,0x01,0x93,0x01,0x93,0x01}},




	{ .i1 = { 0xa1,0x00,0x93,0x01,0x93,0x01,0x93,0x01}},


	{ .i1 = { 0x3a,0x00}},
};
static data c02_a812[] = { // yy_lookahead








	{ .i1 = { 0x44,0x01,0x45,0x03,0x66,0x67,0x68,0x07}},








	{ .i1 = { 0x41,0x42,0x0a,0x04,0x0c,0x0d,0x0e,0x54}},








	{ .i1 = { 0x10,0x11,0x55,0x45,0x14,0x15,0x16,0x08}},








	{ .i1 = { 0x54,0x19,0x56,0x1b,0x1c,0x1d,0x62,0x63}},








	{ .i1 = { 0x11,0x21,0x22,0x55,0x24,0x21,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x6f,0x70,0x0e,0x09,0x11,0x11}},








	{ .i1 = { 0x12,0x13,0x2b,0x2c,0x46,0x17,0x18,0x49}},








	{ .i1 = { 0x38,0x39,0x3a,0x21,0x3c,0x3d,0x21,0x01}},








	{ .i1 = { 0x40,0x03,0x54,0x26,0x56,0x07,0x37,0x38}},








	{ .i1 = { 0x0a,0x25,0x0c,0x0d,0x0e,0x54,0x10,0x11}},








	{ .i1 = { 0x21,0x45,0x14,0x15,0x16,0x37,0x38,0x19}},








	{ .i1 = { 0x3b,0x1b,0x1c,0x1d,0x46,0x50,0x51,0x21}},








	{ .i1 = { 0x22,0x55,0x24,0x44,0x08,0x27,0x28,0x29}},








	{ .i1 = { 0x6f,0x70,0x54,0x10,0x56,0x11,0x12,0x59}},








	{ .i1 = { 0x5a,0x21,0x22,0x17,0x18,0x45,0x38,0x39}},








	{ .i1 = { 0x3a,0x29,0x3c,0x3d,0x21,0x01,0x40,0x03}},








	{ .i1 = { 0x10,0x62,0x63,0x07,0x42,0x55,0x0a,0x55}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x21,0x10,0x11,0x4c,0x0d}},








	{ .i1 = { 0x14,0x15,0x16,0x37,0x38,0x19,0x64,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x04,0x46,0x46,0x21,0x22,0x49}},








	{ .i1 = { 0x24,0x4b,0x45,0x27,0x28,0x29,0x66,0x67}},








	{ .i1 = { 0x68,0x54,0x54,0x56,0x56,0x2b,0x2c,0x02}},








	{ .i1 = { 0x5b,0x5c,0x55,0x4d,0x38,0x39,0x3a,0x21}},








	{ .i1 = { 0x3c,0x3d,0x00,0x01,0x40,0x03,0x11,0x53}},








	{ .i1 = { 0x54,0x07,0x4d,0x16,0x46,0x05,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x45,0x10,0x11,0x53,0x54,0x14,0x15}},








	{ .i1 = { 0x16,0x11,0x54,0x19,0x56,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x46,0x55,0x23,0x21,0x22,0x42,0x24,0x46}},








	{ .i1 = { 0x46,0x27,0x28,0x29,0x52,0x06,0x54,0x4c}},








	{ .i1 = { 0x56,0x6b,0x6c,0x6d,0x52,0x54,0x54,0x56}},








	{ .i1 = { 0x56,0x61,0x38,0x39,0x3a,0x5c,0x3c,0x3d}},








	{ .i1 = { 0x69,0x01,0x40,0x03,0x53,0x54,0x5e,0x07}},








	{ .i1 = { 0x60,0x61,0x46,0x65,0x0c,0x0d,0x0e,0x45}},








	{ .i1 = { 0x10,0x11,0x0a,0x04,0x14,0x15,0x16,0x10}},








	{ .i1 = { 0x54,0x19,0x56,0x1b,0x1c,0x1d,0x46,0x55}},








	{ .i1 = { 0x11,0x21,0x22,0x57,0x24,0x45,0x44,0x27}},








	{ .i1 = { 0x28,0x29,0x2b,0x2c,0x54,0x20,0x56,0x6b}},








	{ .i1 = { 0x6c,0x6d,0x04,0x46,0x57,0x55,0x49,0x2a}},








	{ .i1 = { 0x38,0x39,0x3a,0x44,0x3c,0x3d,0x04,0x5d}},








	{ .i1 = { 0x40,0x54,0x08,0x56,0x6c,0x6d,0x20,0x3f}},








	{ .i1 = { 0x0e,0x46,0x11,0x11,0x12,0x13,0x11,0x16}},








	{ .i1 = { 0x2a,0x17,0x18,0x16,0x08,0x52,0x44,0x54}},








	{ .i1 = { 0x2a,0x56,0x0e,0x57,0x42,0x11,0x12,0x13}},








	{ .i1 = { 0x42,0x5f,0x02,0x17,0x18,0x46,0x06,0x2d}},








	{ .i1 = { 0x2e,0x2f,0x30,0x31,0x32,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x54,0x42,0x56,0x4f,0x46}},








	{ .i1 = { 0x42,0x2d,0x2e,0x2f,0x30,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0x36,0x37,0x38,0x54,0x4a,0x56}},








	{ .i1 = { 0x0e,0x42,0x10,0x11,0x1a,0x08,0x0c,0x46}},








	{ .i1 = { 0x0a,0x06,0x49,0x06,0x4b,0x1b,0x11,0x06}},








	{ .i1 = { 0x11,0x1f,0x04,0x21,0x22,0x54,0x24,0x56}},








	{ .i1 = { 0x46,0x46,0x28,0x29,0x49,0x06,0x2a,0x2a}},








	{ .i1 = { 0x0e,0x0f,0x10,0x11,0x52,0x16,0x54,0x54}},








	{ .i1 = { 0x56,0x56,0x38,0x39,0x3a,0x1b,0x46,0x16}},








	{ .i1 = { 0x1f,0x49,0x40,0x21,0x22,0x04,0x24,0x04}},








	{ .i1 = { 0x10,0x46,0x28,0x29,0x54,0x06,0x56,0x46}},








	{ .i1 = { 0x0a,0x0e,0x49,0x10,0x11,0x52,0x14,0x54}},








	{ .i1 = { 0x19,0x56,0x38,0x39,0x3a,0x54,0x1b,0x56}},








	{ .i1 = { 0x16,0x46,0x40,0x02,0x21,0x22,0x02,0x24}},








	{ .i1 = { 0x16,0x21,0x46,0x28,0x29,0x52,0x09,0x54}},








	{ .i1 = { 0x16,0x56,0x04,0x0e,0x02,0x10,0x11,0x3d}},








	{ .i1 = { 0x54,0x2a,0x56,0x38,0x39,0x3a,0x5a,0x16}},








	{ .i1 = { 0x1b,0x46,0x46,0x40,0x1a,0x2c,0x21,0x22}},








	{ .i1 = { 0x0d,0x24,0x16,0x46,0x05,0x28,0x29,0x54}},








	{ .i1 = { 0x54,0x56,0x56,0x46,0x16,0x0e,0x46,0x10}},








	{ .i1 = { 0x11,0x54,0x0d,0x56,0x05,0x38,0x39,0x3a}},








	{ .i1 = { 0x04,0x54,0x1b,0x56,0x54,0x40,0x56,0x2a}},








	{ .i1 = { 0x21,0x22,0x04,0x24,0x46,0x10,0x08,0x28}},








	{ .i1 = { 0x29,0x10,0x38,0x21,0x0e,0x46,0x46,0x11}},








	{ .i1 = { 0x12,0x13,0x54,0x16,0x56,0x17,0x18,0x38}},








	{ .i1 = { 0x39,0x3a,0x08,0x54,0x54,0x56,0x56,0x40}},








	{ .i1 = { 0x0e,0x46,0x46,0x11,0x12,0x13,0x71,0x71}},








	{ .i1 = { 0x71,0x17,0x18,0x2d,0x2e,0x46,0x46,0x54}},








	{ .i1 = { 0x54,0x56,0x56,0x35,0x36,0x37,0x38,0x71}},








	{ .i1 = { 0x71,0x71,0x71,0x54,0x54,0x56,0x56,0x2d}},








	{ .i1 = { 0x2e,0x71,0x71,0x71,0x71,0x46,0x71,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x71,0x71,0x71,0x71,0x71}},








	{ .i1 = { 0x3e,0x08,0x71,0x54,0x46,0x56,0x71,0x0e}},








	{ .i1 = { 0x71,0x71,0x11,0x12,0x13,0x02,0x71,0x16}},








	{ .i1 = { 0x17,0x18,0x54,0x08,0x56,0x71,0x71,0x71}},








	{ .i1 = { 0x71,0x0e,0x46,0x46,0x11,0x12,0x13,0x71}},








	{ .i1 = { 0x71,0x71,0x17,0x18,0x71,0x71,0x2d,0x2e}},








	{ .i1 = { 0x54,0x54,0x56,0x56,0x08,0x71,0x35,0x36}},








	{ .i1 = { 0x37,0x38,0x0e,0x71,0x71,0x11,0x12,0x13}},








	{ .i1 = { 0x2d,0x2e,0x16,0x17,0x18,0x71,0x46,0x71}},








	{ .i1 = { 0x35,0x36,0x37,0x38,0x71,0x71,0x71,0x46}},








	{ .i1 = { 0x46,0x71,0x71,0x71,0x54,0x71,0x56,0x71}},








	{ .i1 = { 0x71,0x2d,0x2e,0x46,0x71,0x54,0x54,0x56}},








	{ .i1 = { 0x56,0x35,0x36,0x37,0x38,0x71,0x71,0x05}},








	{ .i1 = { 0x46,0x54,0x08,0x56,0x71,0x71,0x71,0x71}},








	{ .i1 = { 0x0e,0x46,0x71,0x11,0x12,0x13,0x54,0x71}},








	{ .i1 = { 0x56,0x17,0x18,0x05,0x71,0x71,0x08,0x54}},








	{ .i1 = { 0x71,0x56,0x71,0x71,0x0e,0x46,0x46,0x11}},








	{ .i1 = { 0x12,0x13,0x71,0x71,0x71,0x17,0x18,0x2d}},








	{ .i1 = { 0x2e,0x71,0x46,0x54,0x54,0x56,0x56,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x71,0x0e,0x71,0x10,0x11}},








	{ .i1 = { 0x54,0x71,0x56,0x2d,0x2e,0x46,0x71,0x71}},








	{ .i1 = { 0x71,0x1b,0x71,0x35,0x36,0x37,0x38,0x21}},








	{ .i1 = { 0x22,0x71,0x24,0x54,0x08,0x56,0x28,0x29}},








	{ .i1 = { 0x71,0x71,0x0e,0x46,0x71,0x11,0x12,0x13}},








	{ .i1 = { 0x71,0x71,0x16,0x17,0x18,0x71,0x38,0x39}},








	{ .i1 = { 0x3a,0x54,0x71,0x56,0x08,0x71,0x40,0x71}},








	{ .i1 = { 0x71,0x71,0x0e,0x71,0x71,0x11,0x12,0x13}},








	{ .i1 = { 0x71,0x2d,0x2e,0x17,0x18,0x71,0x71,0x08}},








	{ .i1 = { 0x71,0x35,0x36,0x37,0x38,0x0e,0x71,0x71}},








	{ .i1 = { 0x11,0x12,0x13,0x71,0x71,0x71,0x17,0x18}},








	{ .i1 = { 0x71,0x2d,0x2e,0x71,0x71,0x71,0x71,0x08}},








	{ .i1 = { 0x71,0x35,0x36,0x37,0x38,0x0e,0x71,0x71}},








	{ .i1 = { 0x11,0x12,0x13,0x71,0x71,0x2e,0x17,0x18}},








	{ .i1 = { 0x71,0x71,0x71,0x71,0x35,0x36,0x37,0x38}},








	{ .i1 = { 0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71}},








	{ .i1 = { 0x71,0x71,0x71,0x71,0x71,0x43,0x71,0x71}},








	{ .i1 = { 0x46,0x47,0x48,0x71,0x35,0x36,0x37,0x38}},








	{ .i1 = { 0x4e,0x71,0x71,0x71,0x71,0x71,0x54,0x71}},








	{ .i1 = { 0x56,0x71,0x58,0x71,0x71,0x71,0x71,0x71}},








	{ .i1 = { 0x71,0x71,0x71,0x71,0x71,0x71,0x71,0x71}},








	{ .i1 = { 0x71,0x71,0x71,0x71,0x6a,0x71,0x71,0x71}},








	{ .i1 = { 0x6e,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},








	{ .i1 = { 0x41,0x41,0x41,0x41,0x41,0x41,0x41,0x41}},



	{ .i1 = { 0x41,0x41}},
};
static data c02_a813[] = { // yy_shift_ofst




	{ .i1 = { 0xa9,0x03,0x00,0x00,0x3e,0x00,0x7c,0x00}},




	{ .i1 = { 0xba,0x00,0xf8,0x00,0xf8,0x00,0xf8,0x00}},




	{ .i1 = { 0x72,0x01,0x72,0x01,0x92,0x01,0x72,0x01}},




	{ .i1 = { 0x92,0x01,0xb3,0x01,0xee,0x02,0xd5,0x01}},




	{ .i1 = { 0x92,0x01,0x92,0x01,0x92,0x01,0x92,0x01}},




	{ .i1 = { 0x92,0x01,0xf7,0x01,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0xee,0x02,0xee,0x02,0xee,0x02}},




	{ .i1 = { 0xee,0x02,0x50,0x00,0x50,0x00,0x96,0x00}},




	{ .i1 = { 0x04,0x00,0x1a,0x00,0x1a,0x00,0x70,0x00}},




	{ .i1 = { 0x1d,0x00,0x1d,0x00,0x1d,0x00,0x1d,0x00}},




	{ .i1 = { 0x1d,0x00,0x1d,0x00,0x1d,0x00,0x1d,0x00}},




	{ .i1 = { 0x00,0x01,0x5b,0x00,0x5b,0x00,0x5b,0x00}},




	{ .i1 = { 0x2f,0x00,0x04,0x00,0x6a,0x00,0xa9,0x03}},




	{ .i1 = { 0xa9,0x03,0x24,0x00,0x24,0x00,0x70,0x00}},




	{ .i1 = { 0xb7,0x00,0xdf,0x00,0xff,0x00,0xff,0x00}},




	{ .i1 = { 0x04,0x00,0xff,0x00,0x04,0x00,0xa9,0x03}},




	{ .i1 = { 0xa9,0x03,0xa9,0x03,0xa9,0x03,0xa9,0x03}},




	{ .i1 = { 0xa9,0x03,0xa9,0x03,0xa9,0x03,0x32,0x01}},




	{ .i1 = { 0x44,0x01,0x16,0x02,0x2a,0x02,0x61,0x02}},




	{ .i1 = { 0x73,0x02,0x8c,0x02,0xc2,0x02,0xd6,0x02}},




	{ .i1 = { 0x16,0x02,0x0c,0x03,0x24,0x03,0x24,0x03}},




	{ .i1 = { 0x24,0x03,0x24,0x03,0x24,0x03,0x24,0x03}},




	{ .i1 = { 0x24,0x03,0x24,0x03,0x24,0x03,0x24,0x03}},




	{ .i1 = { 0x37,0x03,0x4f,0x03,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x5c,0x00,0x5c,0x00,0x5c,0x00,0x0f,0x00}},




	{ .i1 = { 0x0f,0x00,0x0f,0x00,0x07,0x00,0x82,0x00}},




	{ .i1 = { 0xad,0x00,0xf7,0x00,0x05,0x01,0x1e,0x01}},




	{ .i1 = { 0x31,0x01,0x35,0x01,0x07,0x01,0xc0,0x00}},




	{ .i1 = { 0x26,0x01,0x7d,0x01,0x7d,0x01,0x7d,0x01}},




	{ .i1 = { 0x7d,0x01,0x7d,0x01,0x7d,0x01,0x58,0x01}},




	{ .i1 = { 0x6a,0x01,0x7a,0x01,0x7e,0x01,0x83,0x01}},




	{ .i1 = { 0x85,0x01,0x7f,0x01,0x89,0x01,0x74,0x01}},




	{ .i1 = { 0x8e,0x01,0x97,0x01,0x75,0x01,0x8f,0x01}},




	{ .i1 = { 0x99,0x01,0x91,0x01,0x7f,0x01,0xb1,0x01}},




	{ .i1 = { 0xa8,0x01,0xb7,0x01,0xb2,0x01,0xb6,0x01}},




	{ .i1 = { 0xaf,0x01,0xba,0x01,0xd1,0x01,0xc2,0x01}},




	{ .i1 = { 0xd4,0x01,0xb8,0x01,0xca,0x01,0xe2,0x01}},




	{ .i1 = { 0xde,0x01,0xbf,0x01,0xd9,0x01,0xaa,0x01}},




	{ .i1 = { 0xda,0x01,0xe4,0x01,0xee,0x01,0xc9,0x01}},




	{ .i1 = { 0xeb,0x01,0xfd,0x01,0x07,0x02,0x0c,0x02}},




	{ .i1 = { 0xed,0x01,0x0d,0x02,0x11,0x02,0xea,0x01}},




	{ .i1 = { 0x02,0x02,0x7f,0x01,0x15,0x02}},
};
static data c02_a814[] = { // yy_reduce_ofst




	{ .i1 = { 0xc7,0xff,0x3a,0x03,0x3a,0x03,0x3a,0x03}},




	{ .i1 = { 0x3a,0x03,0x3a,0x03,0x3a,0x03,0x3a,0x03}},




	{ .i1 = { 0x7e,0x00,0xbc,0x00,0x56,0x00,0xd0,0x00}},




	{ .i1 = { 0x41,0x01,0x16,0x00,0x55,0x00,0x92,0x00}},




	{ .i1 = { 0xee,0xff,0xe5,0x00,0x53,0x01,0x68,0x01}},




	{ .i1 = { 0x79,0x01,0x9a,0x00,0xfb,0x00,0x52,0x01}},




	{ .i1 = { 0x99,0x00,0x73,0x01,0x94,0x01,0x8b,0x01}},




	{ .i1 = { 0x17,0x01,0x29,0x01,0xab,0x01,0xac,0x01}},




	{ .i1 = { 0xb5,0x01,0xbd,0x01,0xc0,0x01,0xd6,0x01}},




	{ .i1 = { 0xdf,0x01,0xe0,0x01,0xf3,0x01,0xf4,0x01}},




	{ .i1 = { 0xff,0x01,0x00,0x02,0x17,0x02,0x26,0x02}},




	{ .i1 = { 0x3c,0x02,0x3d,0x02,0x60,0x02,0x69,0x02}},




	{ .i1 = { 0x6a,0x02,0x75,0x02,0x82,0x02,0x8b,0x02}},




	{ .i1 = { 0x9f,0x02,0xa0,0x02,0xac,0x02,0xbf,0x02}},




	{ .i1 = { 0xd5,0x02,0xbb,0xff,0xf9,0xff,0xbc,0xff}},




	{ .i1 = { 0x1f,0x00,0x9e,0xff,0x40,0x00,0xa0,0x00}},




	{ .i1 = { 0xbd,0xff,0xce,0xff,0x0c,0x00,0x30,0x00}},




	{ .i1 = { 0x5d,0x00,0x84,0x00,0xc2,0x00,0xd8,0x00}},




	{ .i1 = { 0x0d,0x00,0x6c,0x00,0x79,0x00,0xa9,0x00}},




	{ .i1 = { 0x32,0x00,0xda,0x00,0xc4,0xff,0x42,0x00}},




	{ .i1 = { 0x9b,0x00,0x66,0x00,0x75,0x00,0x90,0x00}},




	{ .i1 = { 0x8f,0x00,0x9e,0x00,0xc4,0x00,0xd5,0x00}},




	{ .i1 = { 0xef,0x00,0xfc,0x00,0x0a,0x01,0x12,0x01}},




	{ .i1 = { 0x16,0x01,0xfa,0x00,0x2a,0x01,0x1f,0x01}},




	{ .i1 = { 0x34,0x01,0x2e,0x01,0x3f,0x01}},
};
static data c02_a815[] = { // yy_default




	{ .i1 = { 0x03,0x02,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x07,0x02,0x0b,0x02,0xa2,0x01}},




	{ .i1 = { 0x11,0x02,0x11,0x02,0x91,0x01,0x11,0x02}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0xf9,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x0d,0x02,0x0d,0x02,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x03,0x02}},




	{ .i1 = { 0x03,0x02,0x06,0x02,0x06,0x02,0x91,0x01}},




	{ .i1 = { 0xf5,0x01,0x0c,0x02,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x03,0x02}},




	{ .i1 = { 0x03,0x02,0xe8,0x01,0x03,0x02,0x09,0x02}},




	{ .i1 = { 0xa0,0x01,0x03,0x02,0x03,0x02,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0xe5,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0xfa,0x01,0xe5,0x01}},




	{ .i1 = { 0xb0,0x01,0xaf,0x01,0xae,0x01,0xad,0x01}},




	{ .i1 = { 0xac,0x01,0xab,0x01,0xe1,0x01,0xcb,0x01}},




	{ .i1 = { 0xbc,0x01,0xba,0x01,0xbe,0x01,0xbd,0x01}},




	{ .i1 = { 0xb5,0x01,0xb6,0x01,0xb3,0x01,0xb7,0x01}},




	{ .i1 = { 0xb9,0x01,0xb8,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0xa1,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0xc3,0x01,0xc2,0x01,0xc1,0x01}},




	{ .i1 = { 0xc0,0x01,0xbb,0x01,0xb4,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0xf0,0x01,0x91,0x01,0xee,0x01}},




	{ .i1 = { 0x91,0x01,0xe9,0x01,0x12,0x02,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0xf3,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0xd9,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0xe4,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0xa9,0x01}},




	{ .i1 = { 0x91,0x01,0x91,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0xc6,0x01,0x91,0x01,0x91,0x01}},




	{ .i1 = { 0x91,0x01,0xbf,0x01,0x91,0x01}},
};
const i1 c02_s0178[] = { 0x24,0 };
const i1 c02_s0179[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s017a[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s017b[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s017c[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s017d[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s017e[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s017f[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0180[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0181[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0182[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s0183[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s0184[] = { 0x49,0x46,0 };
const i1 c02_s0185[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s0186[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s0187[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s0188[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0189[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s018a[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s018b[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s018c[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s018d[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s018e[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s018f[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0190[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s0191[] = { 0x53,0x55,0x42,0 };
const i1 c02_s0192[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s0193[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s0194[] = { 0x56,0x41,0x52,0 };
const i1 c02_s0195[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s0196[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s0197[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s0198[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s0199[] = { 0x49,0x44,0 };
const i1 c02_s019a[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s019b[] = { 0x41,0x54,0 };
const i1 c02_s019c[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s019d[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s019e[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s019f[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s01a0[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s01a1[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s01a2[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s01a3[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s01a4[] = { 0x4f,0x52,0 };
const i1 c02_s01a5[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s01a6[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s01a7[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s01a8[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s01a9[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s01aa[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s01ab[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s01ac[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s01ad[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01ae[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01af[] = { 0x41,0x53,0 };
const i1 c02_s01b0[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s01b1[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s01b2[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s01b3[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s01b4[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s01b5[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s01b6[] = { 0x49,0x53,0 };
const i1 c02_s01b7[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s01b8[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
static data c02_a816[] = { // yyTokenName

	{ .ptr = (void*)c02_s0178 },

	{ .ptr = (void*)c02_s0179 },

	{ .ptr = (void*)c02_s017a },

	{ .ptr = (void*)c02_s017b },

	{ .ptr = (void*)c02_s017c },

	{ .ptr = (void*)c02_s017d },

	{ .ptr = (void*)c02_s017e },

	{ .ptr = (void*)c02_s017f },

	{ .ptr = (void*)c02_s0180 },

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

};
const i1 c02_s01b9[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };

// token_destructor workspace at ws+3064 length ws+0
void f477_token_destructor(void) {

	i8 v8785 = (i8)(intptr_t)(ws+3048);
	i1 v8786 = *(i1*)(intptr_t)v8785;
	i1 v8787 = (i1)+41;
	if (v8786==v8787) goto c02_081c; else goto c02_081e;

c02_081e:;

	i8 v8788 = (i8)(intptr_t)(ws+3048);
	i1 v8789 = *(i1*)(intptr_t)v8788;
	i1 v8790 = (i1)+33;
	if (v8789==v8790) goto c02_081c; else goto c02_081d;

c02_081c:;

	i8 v8791 = (i8)(intptr_t)c02_s01b9;
	f11_print(v8791);

	i8 v8792 = (i8)(intptr_t)(ws+3056);
	i8 v8793 = *(i8*)(intptr_t)v8792;
	i8 v8794 = *(i8*)(intptr_t)v8793;
	f32_Free(v8794);

	goto c02_0817;

c02_081d:;

c02_0817:;

endsub:;
}

// yy_destructor workspace at ws+3048 length ws+16
void f476_yy_destructor(i8 p8783 /* yypminor */, i1 p8784 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3048) = p8784; /*yymajor */
	*(i8*)(intptr_t)(ws+3056) = p8783; /*yypminor */


	i8 v8795 = (i8)(intptr_t)(ws+3048);
	i1 v8796 = *(i1*)(intptr_t)v8795;
	i1 v8797 = (i1)+0;
	if (v8796==v8797) goto c02_0825; else goto c02_0826;

c02_0826:;

	i8 v8798 = (i8)(intptr_t)(ws+3048);
	i1 v8799 = *(i1*)(intptr_t)v8798;
	i1 v8800 = (i1)+65;
	if (v8799<v8800) goto c02_0824; else goto c02_0825;

c02_0824:;

	f477_token_destructor();

	goto c02_081f;

c02_0825:;

c02_081f:;

endsub:;
}

// yy_pop_parser_stack workspace at ws+3000 length ws+0
void f478_yy_pop_parser_stack(void) {

	i8 v8801 = (i8)(intptr_t)(ws+1240);
	i8 v8802 = *(i8*)(intptr_t)v8801;
	i8 v8803 = v8802+(-16);
	i8 v8804 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v8804 = v8803;

	i8 v8805 = (i8)(intptr_t)(ws+1240);
	i8 v8806 = *(i8*)(intptr_t)v8805;
	i8 v8807 = v8806+(+2);
	i1 v8808 = *(i1*)(intptr_t)v8807;
	i8 v8809 = (i8)(intptr_t)(ws+1240);
	i8 v8810 = *(i8*)(intptr_t)v8809;
	i8 v8811 = v8810+(+8);
	f476_yy_destructor(v8811, v8808);

endsub:;
}

// yy_pop_all_parser_stack workspace at ws+3000 length ws+0
void f479_yy_pop_all_parser_stack(void) {

c02_0829:;

	i8 v8812 = (i8)(intptr_t)(ws+1240);
	i8 v8813 = *(i8*)(intptr_t)v8812;
	i8 v8814 = (i8)(intptr_t)(ws+1248);
	if (v8813==v8814) goto c02_082c; else goto c02_082b;

c02_082b:;

	f478_yy_pop_parser_stack();

	goto c02_0829;

c02_082c:;

endsub:;
}
const i1 c02_s01ba[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// yy_stack_overflow workspace at ws+3000 length ws+0
void f480_yy_stack_overflow(void) {

	f479_yy_pop_all_parser_stack();

	f55_StartError();

	i8 v8815 = (i8)(intptr_t)c02_s01ba;
	f11_print(v8815);

	f56_EndError();

endsub:;
}
static data c02_a82d[] = { // yyRuleInfoLhs








	{ .i1 = { 0x43,0x43,0x43,0x43,0x43,0x43,0x47,0x43}},








	{ .i1 = { 0x48,0x43,0x43,0x43,0x4a,0x4b,0x4c,0x43}},








	{ .i1 = { 0x4e,0x51,0x51,0x49,0x49,0x49,0x49,0x49}},








	{ .i1 = { 0x49,0x49,0x49,0x49,0x49,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x46}},








	{ .i1 = { 0x46,0x46,0x46,0x46,0x46,0x46,0x46,0x52}},








	{ .i1 = { 0x43,0x45,0x45,0x45,0x45,0x45,0x45,0x43}},








	{ .i1 = { 0x44,0x54,0x55,0x53,0x53,0x46,0x43,0x43}},








	{ .i1 = { 0x56,0x57,0x57,0x59,0x59,0x5a,0x58,0x5b}},








	{ .i1 = { 0x5b,0x5c,0x43,0x5d,0x5f,0x5e,0x5e,0x60}},








	{ .i1 = { 0x61,0x61,0x62,0x62,0x63,0x43,0x64,0x65}},








	{ .i1 = { 0x67,0x69,0x69,0x68,0x43,0x6a,0x6c,0x6c}},








	{ .i1 = { 0x6d,0x43,0x6e,0x70,0x70,0x70,0x41,0x42}},








	{ .i1 = { 0x42,0x43,0x4d,0x4d,0x4d,0x4f,0x4f,0x50}},








	{ .i1 = { 0x65,0x66,0x66,0x6b,0x6b,0x6c,0x6f,0x6f}},

};
static data c02_a82e[] = { // yyRuleInfoNRhs








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








	{ .i1 = { 0x03,0x01,0x07,0x01,0x00,0x01,0x03,0x01}},








	{ .i1 = { 0x02,0x03,0x01,0x03,0x03,0x06,0x01,0x02}},








	{ .i1 = { 0x05,0x00,0x04,0x01,0x05,0x05,0x01,0x03}},








	{ .i1 = { 0x01,0x03,0x01,0x01,0x01,0x01,0x01,0x00}},








	{ .i1 = { 0x02,0x01,0x00,0x02,0x05,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x00,0x02,0x01,0x03,0x00,0x01,0x03}},

};

// reduce_0 workspace at ws+3000 length ws+0
void f483_reduce_0(void) {

	i8 v8874;
	f106_MidReturn(&v8874);
	f435_Generate(v8874);

	i1 v8875 = (i1)+22;
	i8 v8876 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v8876, v8875);

endsub:;
}

// reduce_1 workspace at ws+3000 length ws+0
void f484_reduce_1(void) {

	i1 v8877 = (i1)+28;
	i8 v8878 = (i8)(intptr_t)(ws+2944);
	i8 v8879 = *(i8*)(intptr_t)v8878;
	i8 v8880 = v8879+(+46);
	*(i1*)(intptr_t)v8880 = v8877;

	i8 v8881 = (i8)(intptr_t)(ws+2944);
	i8 v8882 = *(i8*)(intptr_t)v8881;
	i8 v8883 = (i8)(intptr_t)(ws+2928);
	i8 v8884 = *(i8*)(intptr_t)v8883;
	f438_InitVariable(v8884, v8882);

	i1 v8885 = (i1)+6;
	i8 v8886 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v8886, v8885);

	i1 v8887 = (i1)+22;
	i8 v8888 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v8888, v8887);

endsub:;
}

// reduce_2 workspace at ws+3000 length ws+0
void f485_reduce_2(void) {

	i1 v8889 = (i1)+28;
	i8 v8890 = (i8)(intptr_t)(ws+2960);
	i8 v8891 = *(i8*)(intptr_t)v8890;
	i8 v8892 = v8891+(+46);
	*(i1*)(intptr_t)v8892 = v8889;

	i8 v8893 = (i8)(intptr_t)(ws+2960);
	i8 v8894 = *(i8*)(intptr_t)v8893;
	i8 v8895 = (i8)(intptr_t)(ws+2944);
	i8 v8896 = *(i8*)(intptr_t)v8895;
	f438_InitVariable(v8896, v8894);

	i8 v8897 = (i8)(intptr_t)(ws+2928);
	i8 v8898 = *(i8*)(intptr_t)v8897;
	i8 v8899 = (i8)(intptr_t)(ws+2960);
	i8 v8900 = *(i8*)(intptr_t)v8899;
	i8 v8901 = *(i8*)(intptr_t)v8900;
	f445_CheckExpressionType(v8901, v8898);

	i8 v8902 = (i8)(intptr_t)(ws+2928);
	i8 v8903 = *(i8*)(intptr_t)v8902;
	i8 v8904 = v8903+(+16);
	i8 v8905 = *(i8*)(intptr_t)v8904;
	i8 v8906 = v8905+(+42);
	i2 v8907 = *(i2*)(intptr_t)v8906;
	i1 v8908 = v8907;
	i8 v8909 = (i8)(intptr_t)(ws+2928);
	i8 v8910 = *(i8*)(intptr_t)v8909;
	i8 v8911 = (i8)(intptr_t)(ws+2960);
	i8 v8912 = *(i8*)(intptr_t)v8911;
	i2 v8913 = (i2)+0;
	i8 v8914;
	f113_MidAddress(&v8914, v8913, v8912);
	i8 v8915;
	f126_MidStore(&v8915, v8914, v8910, v8908);
	f435_Generate(v8915);

	i1 v8916 = (i1)+6;
	i8 v8917 = (i8)(intptr_t)(ws+2952);
	f476_yy_destructor(v8917, v8916);

	i1 v8918 = (i1)+2;
	i8 v8919 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v8919, v8918);

	i1 v8920 = (i1)+22;
	i8 v8921 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v8921, v8920);

endsub:;
}
const i1 c02_s01bd[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
const i1 c02_s01be[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };

// reduce_3 workspace at ws+3000 length ws+8
void f486_reduce_3(void) {

	i8 v8922 = (i8)(intptr_t)(ws+2928);
	i8 v8923 = *(i8*)(intptr_t)v8922;
	i8 v8924 = v8923+(+16);
	i8 v8925 = *(i8*)(intptr_t)v8924;
	i8 v8926 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v8926 = v8925;

	i8 v8927 = (i8)(intptr_t)(ws+3000);
	i8 v8928 = *(i8*)(intptr_t)v8927;
	i8 v8929 = (i8)+0;
	if (v8928==v8929) goto c02_083d; else goto c02_083e;

c02_083d:;

	i8 v8930 = (i8)(intptr_t)c02_s01bd;
	f57_SimpleError(v8930);

	goto c02_083a;

c02_083e:;

c02_083a:;

	i8 v8931 = (i8)(intptr_t)(ws+3000);
	i8 v8932 = *(i8*)(intptr_t)v8931;
	i1 v8933;
	f200_IsScalar(&v8933, v8932);
	i1 v8934 = (i1)+0;
	if (v8933==v8934) goto c02_0842; else goto c02_0843;

c02_0842:;

	i8 v8935 = (i8)(intptr_t)c02_s01be;
	f57_SimpleError(v8935);

	goto c02_083f;

c02_0843:;

c02_083f:;

	i1 v8936 = (i1)+28;
	i8 v8937 = (i8)(intptr_t)(ws+2944);
	i8 v8938 = *(i8*)(intptr_t)v8937;
	i8 v8939 = v8938+(+46);
	*(i1*)(intptr_t)v8939 = v8936;

	i8 v8940 = (i8)(intptr_t)(ws+2944);
	i8 v8941 = *(i8*)(intptr_t)v8940;
	i8 v8942 = (i8)(intptr_t)(ws+3000);
	i8 v8943 = *(i8*)(intptr_t)v8942;
	f438_InitVariable(v8943, v8941);

	i8 v8944 = (i8)(intptr_t)(ws+2928);
	i8 v8945 = *(i8*)(intptr_t)v8944;
	i8 v8946 = (i8)(intptr_t)(ws+2944);
	i8 v8947 = *(i8*)(intptr_t)v8946;
	i8 v8948 = *(i8*)(intptr_t)v8947;
	f445_CheckExpressionType(v8948, v8945);

	i8 v8949 = (i8)(intptr_t)(ws+2928);
	i8 v8950 = *(i8*)(intptr_t)v8949;
	i8 v8951 = v8950+(+16);
	i8 v8952 = *(i8*)(intptr_t)v8951;
	i8 v8953 = v8952+(+42);
	i2 v8954 = *(i2*)(intptr_t)v8953;
	i1 v8955 = v8954;
	i8 v8956 = (i8)(intptr_t)(ws+2928);
	i8 v8957 = *(i8*)(intptr_t)v8956;
	i8 v8958 = (i8)(intptr_t)(ws+2944);
	i8 v8959 = *(i8*)(intptr_t)v8958;
	i2 v8960 = (i2)+0;
	i8 v8961;
	f113_MidAddress(&v8961, v8960, v8959);
	i8 v8962;
	f126_MidStore(&v8962, v8961, v8957, v8955);
	f435_Generate(v8962);

	i1 v8963 = (i1)+2;
	i8 v8964 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v8964, v8963);

	i1 v8965 = (i1)+22;
	i8 v8966 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v8966, v8965);

endsub:;
}

// reduce_4 workspace at ws+3000 length ws+16
void f487_reduce_4(void) {

	i8 v8967 = (i8)(intptr_t)(ws+2944);
	i8 v8968 = *(i8*)(intptr_t)v8967;
	i8 v8969 = v8968+(+16);
	i8 v8970 = *(i8*)(intptr_t)v8969;
	i8 v8971 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v8971 = v8970;

	i8 v8972 = (i8)(intptr_t)(ws+2944);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974;
	f203_UndoLValue(&v8974, v8973);
	i8 v8975 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v8975 = v8974;

	i8 v8976 = (i8)(intptr_t)(ws+2928);
	i8 v8977 = *(i8*)(intptr_t)v8976;
	i8 v8978 = (i8)(intptr_t)(ws+3000);
	i8 v8979 = *(i8*)(intptr_t)v8978;
	f445_CheckExpressionType(v8979, v8977);

	i8 v8980 = (i8)(intptr_t)(ws+3000);
	i8 v8981 = *(i8*)(intptr_t)v8980;
	i8 v8982 = v8981+(+42);
	i2 v8983 = *(i2*)(intptr_t)v8982;
	i1 v8984 = v8983;
	i8 v8985 = (i8)(intptr_t)(ws+2928);
	i8 v8986 = *(i8*)(intptr_t)v8985;
	i8 v8987 = (i8)(intptr_t)(ws+3008);
	i8 v8988 = *(i8*)(intptr_t)v8987;
	i8 v8989;
	f126_MidStore(&v8989, v8988, v8986, v8984);
	f435_Generate(v8989);

	i1 v8990 = (i1)+2;
	i8 v8991 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v8991, v8990);

	i1 v8992 = (i1)+22;
	i8 v8993 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v8993, v8992);

endsub:;
}

// reduce_5 workspace at ws+3000 length ws+0
void f488_reduce_5(void) {

	i8 v8994 = (i8)(intptr_t)(ws+2944);
	i8 v8995 = *(i8*)(intptr_t)v8994;
	f461_TerminateNormalLoop(v8995);

	i1 v8996 = (i1)+10;
	i8 v8997 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v8997, v8996);

	i1 v8998 = (i1)+13;
	i8 v8999 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v8999, v8998);

endsub:;
}

// reduce_6 workspace at ws+3000 length ws+0
void f489_reduce_6(void) {

	i8 v9000;
	f460_BeginNormalLoop(&v9000);
	i8 v9001 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9001 = v9000;

	i8 v9002 = (i8)(intptr_t)(ws+54);
	i2 v9003 = *(i2*)(intptr_t)v9002;
	i8 v9004;
	f91_MidLabel(&v9004, v9003);
	f435_Generate(v9004);

endsub:;
}

// reduce_7 workspace at ws+3000 length ws+0
void f490_reduce_7(void) {

	i8 v9005 = (i8)(intptr_t)(ws+2944);
	i8 v9006 = *(i8*)(intptr_t)v9005;
	f461_TerminateNormalLoop(v9006);

	i1 v9007 = (i1)+10;
	i8 v9008 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9008, v9007);

	i1 v9009 = (i1)+13;
	i8 v9010 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9010, v9009);

endsub:;
}

// reduce_8 workspace at ws+3000 length ws+2
void f491_reduce_8(void) {

	i8 v9011;
	f460_BeginNormalLoop(&v9011);
	i8 v9012 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9012 = v9011;

	i8 v9013 = (i8)(intptr_t)(ws+54);
	i2 v9014 = *(i2*)(intptr_t)v9013;
	i8 v9015;
	f91_MidLabel(&v9015, v9014);
	f435_Generate(v9015);

	i2 v9016;
	f204_AllocLabel(&v9016);
	i8 v9017 = (i8)(intptr_t)(ws+3000);
	*(i2*)(intptr_t)v9017 = v9016;

	i2 v9018;
	f204_AllocLabel(&v9018);
	i8 v9019 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9019 = v9018;

	i8 v9020 = (i8)(intptr_t)(ws+3000);
	i2 v9021 = *(i2*)(intptr_t)v9020;
	i8 v9022 = (i8)(intptr_t)(ws+2928);
	i8 v9023 = *(i8*)(intptr_t)v9022;
	*(i2*)(intptr_t)v9023 = v9021;

	i8 v9024 = (i8)(intptr_t)(ws+52);
	i2 v9025 = *(i2*)(intptr_t)v9024;
	i8 v9026 = (i8)(intptr_t)(ws+2928);
	i8 v9027 = *(i8*)(intptr_t)v9026;
	i8 v9028 = v9027+(+2);
	*(i2*)(intptr_t)v9028 = v9025;

	i8 v9029 = (i8)(intptr_t)(ws+3000);
	i2 v9030 = *(i2*)(intptr_t)v9029;
	i8 v9031 = (i8)(intptr_t)(ws+2928);
	i8 v9032 = *(i8*)(intptr_t)v9031;
	i8 v9033 = v9032+(+4);
	*(i2*)(intptr_t)v9033 = v9030;

	i8 v9034 = (i8)(intptr_t)(ws+2928);
	i8 v9035 = *(i8*)(intptr_t)v9034;
	f436_GenerateConditional(v9035);

	i8 v9036 = (i8)(intptr_t)(ws+52);
	i2 v9037 = *(i2*)(intptr_t)v9036;
	i8 v9038 = (i8)(intptr_t)(ws+2912);
	i8 v9039 = *(i8*)(intptr_t)v9038;
	i8 v9040 = v9039+(+2);
	*(i2*)(intptr_t)v9040 = v9037;

	i1 v9041 = (i1)+13;
	i8 v9042 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9042, v9041);

endsub:;
}
const i1 c02_s01bf[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };

// reduce_9 workspace at ws+3000 length ws+0
void f492_reduce_9(void) {

	i8 v9043 = (i8)(intptr_t)(ws+52);
	i2 v9044 = *(i2*)(intptr_t)v9043;
	i2 v9045 = (i2)+0;
	if (v9044==v9045) goto c02_0847; else goto c02_0848;

c02_0847:;

	i8 v9046 = (i8)(intptr_t)c02_s01bf;
	f57_SimpleError(v9046);

	goto c02_0844;

c02_0848:;

c02_0844:;

	i8 v9047 = (i8)(intptr_t)(ws+52);
	i2 v9048 = *(i2*)(intptr_t)v9047;
	i8 v9049;
	f121_MidJump(&v9049, v9048);
	f435_Generate(v9049);

	i1 v9050 = (i1)+22;
	i8 v9051 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9051, v9050);

endsub:;
}
const i1 c02_s01c0[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };

// reduce_10 workspace at ws+3000 length ws+0
void f493_reduce_10(void) {

	i8 v9052 = (i8)(intptr_t)(ws+54);
	i2 v9053 = *(i2*)(intptr_t)v9052;
	i2 v9054 = (i2)+0;
	if (v9053==v9054) goto c02_084c; else goto c02_084d;

c02_084c:;

	i8 v9055 = (i8)(intptr_t)c02_s01c0;
	f57_SimpleError(v9055);

	goto c02_0849;

c02_084d:;

c02_0849:;

	i8 v9056 = (i8)(intptr_t)(ws+54);
	i2 v9057 = *(i2*)(intptr_t)v9056;
	i8 v9058;
	f121_MidJump(&v9058, v9057);
	f435_Generate(v9058);

	i1 v9059 = (i1)+22;
	i8 v9060 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9060, v9059);

endsub:;
}

// reduce_11 workspace at ws+3000 length ws+8
void f494_reduce_11(void) {

	i8 v9061 = (i8)(intptr_t)(ws+56);
	i8 v9062 = *(i8*)(intptr_t)v9061;
	i2 v9063 = *(i2*)(intptr_t)v9062;
	i8 v9064;
	f91_MidLabel(&v9064, v9063);
	f435_Generate(v9064);

	i8 v9065 = (i8)(intptr_t)(ws+56);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9067 = v9066;

	i8 v9068 = (i8)(intptr_t)(ws+56);
	i8 v9069 = *(i8*)(intptr_t)v9068;
	i8 v9070 = v9069+(+8);
	i8 v9071 = *(i8*)(intptr_t)v9070;
	i8 v9072 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v9072 = v9071;

	i8 v9073 = (i8)(intptr_t)(ws+3000);
	i8 v9074 = *(i8*)(intptr_t)v9073;
	f32_Free(v9074);

	i1 v9075 = (i1)+26;
	i8 v9076 = (i8)(intptr_t)(ws+2952);
	f476_yy_destructor(v9076, v9075);

	i1 v9077 = (i1)+10;
	i8 v9078 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9078, v9077);

	i1 v9079 = (i1)+12;
	i8 v9080 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9080, v9079);

endsub:;
}

// reduce_12 workspace at ws+3000 length ws+8
void f495_reduce_12(void) {

	i8 v9081 = (i8)+16;
	i8 v9082;
	f31_Alloc(&v9082, v9081);
	i8 v9083 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9083 = v9082;

	i8 v9084 = (i8)(intptr_t)(ws+56);
	i8 v9085 = *(i8*)(intptr_t)v9084;
	i8 v9086 = (i8)(intptr_t)(ws+3000);
	i8 v9087 = *(i8*)(intptr_t)v9086;
	i8 v9088 = v9087+(+8);
	*(i8*)(intptr_t)v9088 = v9085;

	i8 v9089 = (i8)(intptr_t)(ws+3000);
	i8 v9090 = *(i8*)(intptr_t)v9089;
	i8 v9091 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v9091 = v9090;

	i2 v9092;
	f204_AllocLabel(&v9092);
	i8 v9093 = (i8)(intptr_t)(ws+56);
	i8 v9094 = *(i8*)(intptr_t)v9093;
	*(i2*)(intptr_t)v9094 = v9092;

endsub:;
}

// reduce_13 workspace at ws+3000 length ws+4
void f496_reduce_13(void) {

	i2 v9095;
	f204_AllocLabel(&v9095);
	i8 v9096 = (i8)(intptr_t)(ws+3000);
	*(i2*)(intptr_t)v9096 = v9095;

	i2 v9097;
	f204_AllocLabel(&v9097);
	i8 v9098 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v9098 = v9097;

	i8 v9099 = (i8)(intptr_t)(ws+3000);
	i2 v9100 = *(i2*)(intptr_t)v9099;
	i8 v9101 = (i8)(intptr_t)(ws+56);
	i8 v9102 = *(i8*)(intptr_t)v9101;
	i8 v9103 = v9102+(+2);
	*(i2*)(intptr_t)v9103 = v9100;

	i8 v9104 = (i8)(intptr_t)(ws+3002);
	i2 v9105 = *(i2*)(intptr_t)v9104;
	i8 v9106 = (i8)(intptr_t)(ws+56);
	i8 v9107 = *(i8*)(intptr_t)v9106;
	i8 v9108 = v9107+(+4);
	*(i2*)(intptr_t)v9108 = v9105;

	i8 v9109 = (i8)(intptr_t)(ws+3000);
	i2 v9110 = *(i2*)(intptr_t)v9109;
	i8 v9111 = (i8)(intptr_t)(ws+2920);
	i8 v9112 = *(i8*)(intptr_t)v9111;
	*(i2*)(intptr_t)v9112 = v9110;

	i8 v9113 = (i8)(intptr_t)(ws+3002);
	i2 v9114 = *(i2*)(intptr_t)v9113;
	i8 v9115 = (i8)(intptr_t)(ws+2920);
	i8 v9116 = *(i8*)(intptr_t)v9115;
	i8 v9117 = v9116+(+2);
	*(i2*)(intptr_t)v9117 = v9114;

	i8 v9118 = (i8)(intptr_t)(ws+3000);
	i2 v9119 = *(i2*)(intptr_t)v9118;
	i8 v9120 = (i8)(intptr_t)(ws+2920);
	i8 v9121 = *(i8*)(intptr_t)v9120;
	i8 v9122 = v9121+(+4);
	*(i2*)(intptr_t)v9122 = v9119;

	i8 v9123 = (i8)(intptr_t)(ws+2920);
	i8 v9124 = *(i8*)(intptr_t)v9123;
	f436_GenerateConditional(v9124);

endsub:;
}

// reduce_14 workspace at ws+3000 length ws+0
void f497_reduce_14(void) {

	i8 v9125 = (i8)(intptr_t)(ws+56);
	i8 v9126 = *(i8*)(intptr_t)v9125;
	i2 v9127 = *(i2*)(intptr_t)v9126;
	i8 v9128;
	f121_MidJump(&v9128, v9127);
	f435_Generate(v9128);

	i8 v9129 = (i8)(intptr_t)(ws+56);
	i8 v9130 = *(i8*)(intptr_t)v9129;
	i8 v9131 = v9130+(+4);
	i2 v9132 = *(i2*)(intptr_t)v9131;
	i8 v9133;
	f91_MidLabel(&v9133, v9132);
	f435_Generate(v9133);

endsub:;
}

// reduce_15 workspace at ws+3000 length ws+8
void f498_reduce_15(void) {

	i8 v9134 = (i8)(intptr_t)(ws+64);
	i8 v9135 = *(i8*)(intptr_t)v9134;
	i8 v9136 = v9135+(+17);
	i1 v9137 = *(i1*)(intptr_t)v9136;
	i1 v9138 = (i1)+0;
	if (v9137==v9138) goto c02_0855; else goto c02_0854;

c02_0855:;

	i8 v9139 = (i8)(intptr_t)(ws+64);
	i8 v9140 = *(i8*)(intptr_t)v9139;
	i2 v9141 = *(i2*)(intptr_t)v9140;
	i2 v9142 = (i2)+0;
	if (v9141==v9142) goto c02_0854; else goto c02_0853;

c02_0853:;

	i8 v9143 = (i8)(intptr_t)(ws+64);
	i8 v9144 = *(i8*)(intptr_t)v9143;
	i2 v9145 = *(i2*)(intptr_t)v9144;
	i8 v9146;
	f91_MidLabel(&v9146, v9145);
	f435_Generate(v9146);

	goto c02_084e;

c02_0854:;

c02_084e:;

	i8 v9147 = (i8)(intptr_t)(ws+64);
	i8 v9148 = *(i8*)(intptr_t)v9147;
	i8 v9149 = v9148+(+2);
	i2 v9150 = *(i2*)(intptr_t)v9149;
	i8 v9151;
	f91_MidLabel(&v9151, v9150);
	f435_Generate(v9151);

	i8 v9152 = (i8)(intptr_t)(ws+64);
	i8 v9153 = *(i8*)(intptr_t)v9152;
	i8 v9154 = v9153+(+16);
	i1 v9155 = *(i1*)(intptr_t)v9154;
	i8 v9156;
	f136_MidEndcase(&v9156, v9155);
	f435_Generate(v9156);

	i8 v9157 = (i8)(intptr_t)(ws+64);
	i8 v9158 = *(i8*)(intptr_t)v9157;
	i8 v9159 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9159 = v9158;

	i8 v9160 = (i8)(intptr_t)(ws+3000);
	i8 v9161 = *(i8*)(intptr_t)v9160;
	i8 v9162 = v9161+(+8);
	i8 v9163 = *(i8*)(intptr_t)v9162;
	i8 v9164 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v9164 = v9163;

	i8 v9165 = (i8)(intptr_t)(ws+3000);
	i8 v9166 = *(i8*)(intptr_t)v9165;
	f32_Free(v9166);

	i1 v9167 = (i1)+10;
	i8 v9168 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v9168, v9167);

	i1 v9169 = (i1)+61;
	i8 v9170 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9170, v9169);

	i1 v9171 = (i1)+22;
	i8 v9172 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9172, v9171);

endsub:;
}
const i1 c02_s01c1[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };

// reduce_16 workspace at ws+3000 length ws+8
void f499_reduce_16(void) {

	i8 v9173 = (i8)+18;
	i8 v9174;
	f31_Alloc(&v9174, v9173);
	i8 v9175 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9175 = v9174;

	i8 v9176 = (i8)(intptr_t)(ws+64);
	i8 v9177 = *(i8*)(intptr_t)v9176;
	i8 v9178 = (i8)(intptr_t)(ws+3000);
	i8 v9179 = *(i8*)(intptr_t)v9178;
	i8 v9180 = v9179+(+8);
	*(i8*)(intptr_t)v9180 = v9177;

	i8 v9181 = (i8)(intptr_t)(ws+52);
	i2 v9182 = *(i2*)(intptr_t)v9181;
	i8 v9183 = (i8)(intptr_t)(ws+3000);
	i8 v9184 = *(i8*)(intptr_t)v9183;
	i8 v9185 = v9184+(+4);
	*(i2*)(intptr_t)v9185 = v9182;

	i2 v9186;
	f204_AllocLabel(&v9186);
	i8 v9187 = (i8)(intptr_t)(ws+3000);
	i8 v9188 = *(i8*)(intptr_t)v9187;
	i8 v9189 = v9188+(+2);
	*(i2*)(intptr_t)v9189 = v9186;

	i8 v9190 = (i8)(intptr_t)(ws+3000);
	i8 v9191 = *(i8*)(intptr_t)v9190;
	i8 v9192 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v9192 = v9191;

	i8 v9193 = (i8)(intptr_t)(ws+2928);
	i8 v9194 = *(i8*)(intptr_t)v9193;
	i8 v9195 = v9194+(+16);
	i8 v9196 = *(i8*)(intptr_t)v9195;
	i1 v9197;
	f198_IsNum(&v9197, v9196);
	i1 v9198 = (i1)+0;
	if (v9197==v9198) goto c02_0859; else goto c02_085a;

c02_0859:;

	i8 v9199 = (i8)(intptr_t)c02_s01c1;
	f57_SimpleError(v9199);

	goto c02_0856;

c02_085a:;

c02_0856:;

	i8 v9200 = (i8)(intptr_t)(ws+2928);
	i8 v9201 = *(i8*)(intptr_t)v9200;
	i1 v9202;
	f141_NodeWidth(&v9202, v9201);
	i8 v9203 = (i8)(intptr_t)(ws+3000);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	i8 v9205 = v9204+(+16);
	*(i1*)(intptr_t)v9205 = v9202;

	i8 v9206 = (i8)(intptr_t)(ws+3000);
	i8 v9207 = *(i8*)(intptr_t)v9206;
	i8 v9208 = v9207+(+16);
	i1 v9209 = *(i1*)(intptr_t)v9208;
	i8 v9210 = (i8)(intptr_t)(ws+2928);
	i8 v9211 = *(i8*)(intptr_t)v9210;
	i8 v9212;
	f138_MidStartcase(&v9212, v9211, v9209);
	f435_Generate(v9212);

	i1 v9213 = (i1)+62;
	i8 v9214 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9214, v9213);

endsub:;
}
const i1 c02_s01c2[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };

// reduce_17 workspace at ws+3000 length ws+0
void f500_reduce_17(void) {

	i8 v9215 = (i8)(intptr_t)(ws+64);
	i8 v9216 = *(i8*)(intptr_t)v9215;
	i8 v9217 = v9216+(+17);
	i1 v9218 = *(i1*)(intptr_t)v9217;
	i1 v9219 = (i1)+0;
	if (v9218==v9219) goto c02_085f; else goto c02_085e;

c02_085e:;

	i8 v9220 = (i8)(intptr_t)c02_s01c2;
	f57_SimpleError(v9220);

	goto c02_085b;

c02_085f:;

c02_085b:;

	i8 v9221 = (i8)(intptr_t)(ws+64);
	i8 v9222 = *(i8*)(intptr_t)v9221;
	i2 v9223 = *(i2*)(intptr_t)v9222;
	i2 v9224 = (i2)+0;
	if (v9223==v9224) goto c02_0864; else goto c02_0863;

c02_0863:;

	i8 v9225 = (i8)(intptr_t)(ws+64);
	i8 v9226 = *(i8*)(intptr_t)v9225;
	i8 v9227 = v9226+(+2);
	i2 v9228 = *(i2*)(intptr_t)v9227;
	i8 v9229;
	f121_MidJump(&v9229, v9228);
	f435_Generate(v9229);

	i8 v9230 = (i8)(intptr_t)(ws+64);
	i8 v9231 = *(i8*)(intptr_t)v9230;
	i2 v9232 = *(i2*)(intptr_t)v9231;
	i8 v9233;
	f91_MidLabel(&v9233, v9232);
	f435_Generate(v9233);

	goto c02_0860;

c02_0864:;

c02_0860:;

	i2 v9234;
	f204_AllocLabel(&v9234);
	i8 v9235 = (i8)(intptr_t)(ws+64);
	i8 v9236 = *(i8*)(intptr_t)v9235;
	*(i2*)(intptr_t)v9236 = v9234;

	i8 v9237 = (i8)(intptr_t)(ws+64);
	i8 v9238 = *(i8*)(intptr_t)v9237;
	i8 v9239 = v9238+(+16);
	i1 v9240 = *(i1*)(intptr_t)v9239;
	i8 v9241 = (i8)(intptr_t)(ws+2928);
	i4 v9242 = *(i4*)(intptr_t)v9241;
	i8 v9243 = (i8)(intptr_t)(ws+64);
	i8 v9244 = *(i8*)(intptr_t)v9243;
	i2 v9245 = *(i2*)(intptr_t)v9244;
	i8 v9246;
	f119_MidWhencase(&v9246, v9245, v9242, v9240);
	f435_Generate(v9246);

	i1 v9247 = (i1)+6;
	i8 v9248 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9248, v9247);

endsub:;
}
const i1 c02_s01c3[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };

// reduce_18 workspace at ws+3000 length ws+0
void f501_reduce_18(void) {

	i8 v9249 = (i8)(intptr_t)(ws+64);
	i8 v9250 = *(i8*)(intptr_t)v9249;
	i8 v9251 = v9250+(+17);
	i1 v9252 = *(i1*)(intptr_t)v9251;
	i1 v9253 = (i1)+0;
	if (v9252==v9253) goto c02_0869; else goto c02_0868;

c02_0868:;

	i8 v9254 = (i8)(intptr_t)c02_s01c3;
	f57_SimpleError(v9254);

	goto c02_0865;

c02_0869:;

c02_0865:;

	i8 v9255 = (i8)(intptr_t)(ws+64);
	i8 v9256 = *(i8*)(intptr_t)v9255;
	i2 v9257 = *(i2*)(intptr_t)v9256;
	i2 v9258 = (i2)+0;
	if (v9257==v9258) goto c02_086e; else goto c02_086d;

c02_086d:;

	i8 v9259 = (i8)(intptr_t)(ws+64);
	i8 v9260 = *(i8*)(intptr_t)v9259;
	i8 v9261 = v9260+(+2);
	i2 v9262 = *(i2*)(intptr_t)v9261;
	i8 v9263;
	f121_MidJump(&v9263, v9262);
	f435_Generate(v9263);

	i8 v9264 = (i8)(intptr_t)(ws+64);
	i8 v9265 = *(i8*)(intptr_t)v9264;
	i2 v9266 = *(i2*)(intptr_t)v9265;
	i8 v9267;
	f91_MidLabel(&v9267, v9266);
	f435_Generate(v9267);

	goto c02_086a;

c02_086e:;

c02_086a:;

	i2 v9268 = (i2)+0;
	i8 v9269 = (i8)(intptr_t)(ws+64);
	i8 v9270 = *(i8*)(intptr_t)v9269;
	*(i2*)(intptr_t)v9270 = v9268;

	i1 v9271 = (i1)+1;
	i8 v9272 = (i8)(intptr_t)(ws+64);
	i8 v9273 = *(i8*)(intptr_t)v9272;
	i8 v9274 = v9273+(+17);
	*(i1*)(intptr_t)v9274 = v9271;

	i1 v9275 = (i1)+9;
	i8 v9276 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9276, v9275);

	i1 v9277 = (i1)+6;
	i8 v9278 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9278, v9277);

endsub:;
}

// reduce_19 workspace at ws+3000 length ws+0
void f502_reduce_19(void) {

	i8 v9279 = (i8)(intptr_t)(ws+2928);
	i8 v9280 = *(i8*)(intptr_t)v9279;
	i8 v9281 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9281 = v9280;

	i1 v9282 = (i1)+4;
	i8 v9283 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9283, v9282);

endsub:;
}

// reduce_20 workspace at ws+3000 length ws+0
void f503_reduce_20(void) {

	i8 v9284 = (i8)(intptr_t)(ws+2920);
	i8 v9285 = *(i8*)(intptr_t)v9284;
	i8 v9286 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9286 = v9285;

	i8 v9287 = (i8)(intptr_t)(ws+2920);
	i8 v9288 = *(i8*)(intptr_t)v9287;
	f462_Negate(v9288);

endsub:;
}

// reduce_21 workspace at ws+3000 length ws+0
void f504_reduce_21(void) {

	i8 v9289 = (i8)(intptr_t)(ws+2936);
	i8 v9290 = *(i8*)(intptr_t)v9289;
	i8 v9291 = (i8)(intptr_t)(ws+2920);
	i8 v9292 = *(i8*)(intptr_t)v9291;
	i2 v9293 = (i2)+0;
	i2 v9294 = (i2)+0;
	i2 v9295 = (i2)+0;
	i1 v9296 = (i1)+0;
	i8 v9297;
	f131_MidBand(&v9297, v9296, v9295, v9294, v9293, v9292, v9290);
	i8 v9298 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9298 = v9297;

	i1 v9299 = (i1)+43;
	i8 v9300 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9300, v9299);

endsub:;
}

// reduce_22 workspace at ws+3000 length ws+0
void f505_reduce_22(void) {

	i8 v9301 = (i8)(intptr_t)(ws+2936);
	i8 v9302 = *(i8*)(intptr_t)v9301;
	i8 v9303 = (i8)(intptr_t)(ws+2920);
	i8 v9304 = *(i8*)(intptr_t)v9303;
	i2 v9305 = (i2)+0;
	i2 v9306 = (i2)+0;
	i2 v9307 = (i2)+0;
	i1 v9308 = (i1)+0;
	i8 v9309;
	f98_MidBor(&v9309, v9308, v9307, v9306, v9305, v9304, v9302);
	i8 v9310 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9310 = v9309;

	i1 v9311 = (i1)+44;
	i8 v9312 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9312, v9311);

endsub:;
}

// reduce_23 workspace at ws+3000 length ws+0
void f506_reduce_23(void) {

	i8 v9313 = (i8)(intptr_t)(ws+2936);
	i8 v9314 = *(i8*)(intptr_t)v9313;
	i8 v9315 = (i8)(intptr_t)(ws+2920);
	i8 v9316 = *(i8*)(intptr_t)v9315;
	i1 v9317 = (i1)+0;
	i8 v9318;
	f463_ConditionalEq(&v9318, v9317, v9316, v9314);
	i8 v9319 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9319 = v9318;

	i1 v9320 = (i1)+51;
	i8 v9321 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9321, v9320);

endsub:;
}

// reduce_24 workspace at ws+3000 length ws+0
void f507_reduce_24(void) {

	i8 v9322 = (i8)(intptr_t)(ws+2936);
	i8 v9323 = *(i8*)(intptr_t)v9322;
	i8 v9324 = (i8)(intptr_t)(ws+2920);
	i8 v9325 = *(i8*)(intptr_t)v9324;
	i1 v9326 = (i1)+1;
	i8 v9327;
	f463_ConditionalEq(&v9327, v9326, v9325, v9323);
	i8 v9328 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9328 = v9327;

	i1 v9329 = (i1)+52;
	i8 v9330 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9330, v9329);

endsub:;
}

// reduce_25 workspace at ws+3000 length ws+0
void f508_reduce_25(void) {

	i8 v9331 = (i8)(intptr_t)(ws+2936);
	i8 v9332 = *(i8*)(intptr_t)v9331;
	i8 v9333 = (i8)(intptr_t)(ws+2920);
	i8 v9334 = *(i8*)(intptr_t)v9333;
	i1 v9335 = (i1)+0;
	i8 v9336;
	f464_ConditionalLt(&v9336, v9335, v9334, v9332);
	i8 v9337 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9337 = v9336;

	i1 v9338 = (i1)+47;
	i8 v9339 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9339, v9338);

endsub:;
}

// reduce_26 workspace at ws+3000 length ws+0
void f509_reduce_26(void) {

	i8 v9340 = (i8)(intptr_t)(ws+2936);
	i8 v9341 = *(i8*)(intptr_t)v9340;
	i8 v9342 = (i8)(intptr_t)(ws+2920);
	i8 v9343 = *(i8*)(intptr_t)v9342;
	i1 v9344 = (i1)+1;
	i8 v9345;
	f464_ConditionalLt(&v9345, v9344, v9343, v9341);
	i8 v9346 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9346 = v9345;

	i1 v9347 = (i1)+50;
	i8 v9348 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9348, v9347);

endsub:;
}

// reduce_27 workspace at ws+3000 length ws+0
void f510_reduce_27(void) {

	i8 v9349 = (i8)(intptr_t)(ws+2920);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	i8 v9351 = (i8)(intptr_t)(ws+2936);
	i8 v9352 = *(i8*)(intptr_t)v9351;
	i1 v9353 = (i1)+0;
	i8 v9354;
	f464_ConditionalLt(&v9354, v9353, v9352, v9350);
	i8 v9355 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9355 = v9354;

	i1 v9356 = (i1)+49;
	i8 v9357 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9357, v9356);

endsub:;
}

// reduce_28 workspace at ws+3000 length ws+0
void f511_reduce_28(void) {

	i8 v9358 = (i8)(intptr_t)(ws+2920);
	i8 v9359 = *(i8*)(intptr_t)v9358;
	i8 v9360 = (i8)(intptr_t)(ws+2936);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i1 v9362 = (i1)+1;
	i8 v9363;
	f464_ConditionalLt(&v9363, v9362, v9361, v9359);
	i8 v9364 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9364 = v9363;

	i1 v9365 = (i1)+48;
	i8 v9366 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9366, v9365);

endsub:;
}

// reduce_29 workspace at ws+3000 length ws+0
void f512_reduce_29(void) {

	i8 v9367 = (i8)(intptr_t)(ws+2920);
	i4 v9368 = *(i4*)(intptr_t)v9367;
	i8 v9369;
	f111_MidConstant(&v9369, v9368);
	i8 v9370 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9370 = v9369;

endsub:;
}

// reduce_30 workspace at ws+3000 length ws+0
void f513_reduce_30(void) {

	i8 v9371 = (i8)(intptr_t)(ws+2928);
	i8 v9372 = *(i8*)(intptr_t)v9371;
	i8 v9373 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9373 = v9372;

	i1 v9374 = (i1)+4;
	i8 v9375 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9375, v9374);

endsub:;
}

// reduce_31 workspace at ws+3000 length ws+0
void f514_reduce_31(void) {

	i1 v9376 = (i1)+110;
	i8 v9377 = (i8)(intptr_t)(ws+2920);
	i8 v9378 = *(i8*)(intptr_t)v9377;
	i8 v9379;
	f451_Expr1Simple(&v9379, v9378, v9376);
	i8 v9380 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9380 = v9379;

endsub:;
}

// reduce_32 workspace at ws+3000 length ws+0
void f515_reduce_32(void) {

	i1 v9381 = (i1)+105;
	i8 v9382 = (i8)(intptr_t)(ws+2920);
	i8 v9383 = *(i8*)(intptr_t)v9382;
	i8 v9384;
	f451_Expr1Simple(&v9384, v9383, v9381);
	i8 v9385 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9385 = v9384;

endsub:;
}

// reduce_33 workspace at ws+3000 length ws+0
void f516_reduce_33(void) {

	i8 v9386 = (i8)(intptr_t)(ws+2936);
	i8 v9387 = *(i8*)(intptr_t)v9386;
	i8 v9388 = (i8)(intptr_t)(ws+2920);
	i8 v9389 = *(i8*)(intptr_t)v9388;
	i8 v9390;
	f452_ExprAdd(&v9390, v9389, v9387);
	i8 v9391 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9391 = v9390;

	i1 v9392 = (i1)+19;
	i8 v9393 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9393, v9392);

endsub:;
}

// reduce_34 workspace at ws+3000 length ws+0
void f517_reduce_34(void) {

	i8 v9394 = (i8)(intptr_t)(ws+2936);
	i8 v9395 = *(i8*)(intptr_t)v9394;
	i8 v9396 = (i8)(intptr_t)(ws+2920);
	i8 v9397 = *(i8*)(intptr_t)v9396;
	i8 v9398;
	f454_ExprSub(&v9398, v9397, v9395);
	i8 v9399 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9399 = v9398;

	i1 v9400 = (i1)+14;
	i8 v9401 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9401, v9400);

endsub:;
}

// reduce_35 workspace at ws+3000 length ws+0
void f518_reduce_35(void) {

	i1 v9402 = (i1)+160;
	i1 v9403 = (i1)+160;
	i8 v9404 = (i8)(intptr_t)(ws+2936);
	i8 v9405 = *(i8*)(intptr_t)v9404;
	i8 v9406 = (i8)(intptr_t)(ws+2920);
	i8 v9407 = *(i8*)(intptr_t)v9406;
	i8 v9408;
	f456_Expr2Simple(&v9408, v9407, v9405, v9403, v9402);
	i8 v9409 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9409 = v9408;

	i1 v9410 = (i1)+24;
	i8 v9411 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9411, v9410);

endsub:;
}

// reduce_36 workspace at ws+3000 length ws+0
void f519_reduce_36(void) {

	i1 v9412 = (i1)+140;
	i1 v9413 = (i1)+135;
	i8 v9414 = (i8)(intptr_t)(ws+2936);
	i8 v9415 = *(i8*)(intptr_t)v9414;
	i8 v9416 = (i8)(intptr_t)(ws+2920);
	i8 v9417 = *(i8*)(intptr_t)v9416;
	i8 v9418;
	f456_Expr2Simple(&v9418, v9417, v9415, v9413, v9412);
	i8 v9419 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9419 = v9418;

	i1 v9420 = (i1)+23;
	i8 v9421 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9421, v9420);

endsub:;
}

// reduce_37 workspace at ws+3000 length ws+0
void f520_reduce_37(void) {

	i1 v9422 = (i1)+150;
	i1 v9423 = (i1)+145;
	i8 v9424 = (i8)(intptr_t)(ws+2936);
	i8 v9425 = *(i8*)(intptr_t)v9424;
	i8 v9426 = (i8)(intptr_t)(ws+2920);
	i8 v9427 = *(i8*)(intptr_t)v9426;
	i8 v9428;
	f456_Expr2Simple(&v9428, v9427, v9425, v9423, v9422);
	i8 v9429 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9429 = v9428;

	i1 v9430 = (i1)+18;
	i8 v9431 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9431, v9430);

endsub:;
}

// reduce_38 workspace at ws+3000 length ws+0
void f521_reduce_38(void) {

	i1 v9432 = (i1)+175;
	i1 v9433 = (i1)+175;
	i8 v9434 = (i8)(intptr_t)(ws+2936);
	i8 v9435 = *(i8*)(intptr_t)v9434;
	i8 v9436 = (i8)(intptr_t)(ws+2920);
	i8 v9437 = *(i8*)(intptr_t)v9436;
	i8 v9438;
	f456_Expr2Simple(&v9438, v9437, v9435, v9433, v9432);
	i8 v9439 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9439 = v9438;

	i1 v9440 = (i1)+46;
	i8 v9441 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9441, v9440);

endsub:;
}

// reduce_39 workspace at ws+3000 length ws+0
void f522_reduce_39(void) {

	i1 v9442 = (i1)+165;
	i1 v9443 = (i1)+165;
	i8 v9444 = (i8)(intptr_t)(ws+2936);
	i8 v9445 = *(i8*)(intptr_t)v9444;
	i8 v9446 = (i8)(intptr_t)(ws+2920);
	i8 v9447 = *(i8*)(intptr_t)v9446;
	i8 v9448;
	f456_Expr2Simple(&v9448, v9447, v9445, v9443, v9442);
	i8 v9449 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9449 = v9448;

	i1 v9450 = (i1)+56;
	i8 v9451 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9451, v9450);

endsub:;
}

// reduce_40 workspace at ws+3000 length ws+0
void f523_reduce_40(void) {

	i1 v9452 = (i1)+170;
	i1 v9453 = (i1)+170;
	i8 v9454 = (i8)(intptr_t)(ws+2936);
	i8 v9455 = *(i8*)(intptr_t)v9454;
	i8 v9456 = (i8)(intptr_t)(ws+2920);
	i8 v9457 = *(i8*)(intptr_t)v9456;
	i8 v9458;
	f456_Expr2Simple(&v9458, v9457, v9455, v9453, v9452);
	i8 v9459 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9459 = v9458;

	i1 v9460 = (i1)+45;
	i8 v9461 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9461, v9460);

endsub:;
}

// reduce_41 workspace at ws+3000 length ws+0
void f524_reduce_41(void) {

	i1 v9462 = (i1)+115;
	i1 v9463 = (i1)+115;
	i8 v9464 = (i8)(intptr_t)(ws+2936);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = (i8)(intptr_t)(ws+2920);
	i8 v9467 = *(i8*)(intptr_t)v9466;
	i8 v9468;
	f459_ExprShift(&v9468, v9467, v9465, v9463, v9462);
	i8 v9469 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9469 = v9468;

	i1 v9470 = (i1)+53;
	i8 v9471 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9471, v9470);

endsub:;
}

// reduce_42 workspace at ws+3000 length ws+0
void f525_reduce_42(void) {

	i1 v9472 = (i1)+125;
	i1 v9473 = (i1)+120;
	i8 v9474 = (i8)(intptr_t)(ws+2936);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = (i8)(intptr_t)(ws+2920);
	i8 v9477 = *(i8*)(intptr_t)v9476;
	i8 v9478;
	f459_ExprShift(&v9478, v9477, v9475, v9473, v9472);
	i8 v9479 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9479 = v9478;

	i1 v9480 = (i1)+54;
	i8 v9481 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9481, v9480);

endsub:;
}
const i1 c02_s01c4[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };

// reduce_43 workspace at ws+3000 length ws+0
void f526_reduce_43(void) {

	i8 v9482 = (i8)(intptr_t)(ws+2920);
	i8 v9483 = *(i8*)(intptr_t)v9482;
	f193_CheckNotPartialType(v9483);

	i8 v9484 = (i8)(intptr_t)(ws+2936);
	i8 v9485 = *(i8*)(intptr_t)v9484;
	i8 v9486 = v9485+(+66);
	i1 v9487 = *(i1*)(intptr_t)v9486;
	i1 v9488 = (i1)+40;
	if (v9487==v9488) goto c02_0875; else goto c02_0876;

c02_0876:;

	i8 v9489 = (i8)(intptr_t)(ws+2936);
	i8 v9490 = *(i8*)(intptr_t)v9489;
	i8 v9491 = v9490+(+16);
	i8 v9492 = *(i8*)(intptr_t)v9491;
	i8 v9493 = v9492+(+42);
	i2 v9494 = *(i2*)(intptr_t)v9493;
	i8 v9495 = (i8)(intptr_t)(ws+2920);
	i8 v9496 = *(i8*)(intptr_t)v9495;
	i8 v9497 = v9496+(+42);
	i2 v9498 = *(i2*)(intptr_t)v9497;
	if (v9494==v9498) goto c02_0875; else goto c02_0874;

c02_0874:;

	i8 v9499 = (i8)(intptr_t)(ws+2936);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = v9500+(+16);
	i8 v9502 = *(i8*)(intptr_t)v9501;
	i1 v9503;
	f197_IsPtr(&v9503, v9502);
	i1 v9504 = (i1)+0;
	if (v9503==v9504) goto c02_087e; else goto c02_087c;

c02_087e:;

	i8 v9505 = (i8)(intptr_t)(ws+2920);
	i8 v9506 = *(i8*)(intptr_t)v9505;
	i1 v9507;
	f197_IsPtr(&v9507, v9506);
	i1 v9508 = (i1)+0;
	if (v9507==v9508) goto c02_087d; else goto c02_087c;

c02_087c:;

	i8 v9509 = (i8)(intptr_t)c02_s01c4;
	f57_SimpleError(v9509);

	goto c02_0877;

c02_087d:;

c02_0877:;

	i8 v9510 = (i8)(intptr_t)(ws+2920);
	i8 v9511 = *(i8*)(intptr_t)v9510;
	i8 v9512 = v9511+(+42);
	i2 v9513 = *(i2*)(intptr_t)v9512;
	i1 v9514 = v9513;
	i8 v9515 = (i8)(intptr_t)(ws+2936);
	i8 v9516 = *(i8*)(intptr_t)v9515;
	i8 v9517 = (i8)(intptr_t)(ws+2936);
	i8 v9518 = *(i8*)(intptr_t)v9517;
	i8 v9519 = v9518+(+16);
	i8 v9520 = *(i8*)(intptr_t)v9519;
	i1 v9521;
	f199_IsSNum(&v9521, v9520);
	i8 v9522;
	f148_MidCCast(&v9522, v9521, v9516, v9514);
	i8 v9523 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9523 = v9522;

	goto c02_086f;

c02_0875:;

	i8 v9524 = (i8)(intptr_t)(ws+2936);
	i8 v9525 = *(i8*)(intptr_t)v9524;
	i8 v9526 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9526 = v9525;

c02_086f:;

	i8 v9527 = (i8)(intptr_t)(ws+2920);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	i8 v9529 = (i8)(intptr_t)(ws+2912);
	i8 v9530 = *(i8*)(intptr_t)v9529;
	i8 v9531 = v9530+(+16);
	*(i8*)(intptr_t)v9531 = v9528;

	i1 v9532 = (i1)+55;
	i8 v9533 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9533, v9532);

endsub:;
}
const i1 c02_s01c5[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };

// reduce_44 workspace at ws+3000 length ws+8
void f527_reduce_44(void) {

	i8 v9534 = (i8)(intptr_t)(ws+2920);
	i8 v9535 = *(i8*)(intptr_t)v9534;
	i8 v9536;
	f203_UndoLValue(&v9536, v9535);
	i8 v9537 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9537 = v9536;

	i8 v9538 = (i8)(intptr_t)(ws+2912);
	i8 v9539 = *(i8*)(intptr_t)v9538;
	i8 v9540 = v9539+(+66);
	i1 v9541 = *(i1*)(intptr_t)v9540;
	i1 v9542 = (i1)+42;
	if (v9541==v9542) goto c02_0882; else goto c02_0883;

c02_0882:;

	i8 v9543 = (i8)(intptr_t)(ws+2912);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	i8 v9545 = *(i8*)(intptr_t)v9544;
	i8 v9546 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9546 = v9545;

	i8 v9547 = (i8)(intptr_t)(ws+3000);
	i8 v9548 = *(i8*)(intptr_t)v9547;
	i8 v9549 = *(i8*)(intptr_t)v9548;
	i1 v9550;
	f200_IsScalar(&v9550, v9549);
	i1 v9551 = (i1)+0;
	if (v9550==v9551) goto c02_0888; else goto c02_0887;

c02_0887:;

	i8 v9552 = (i8)(intptr_t)c02_s01c5;
	f57_SimpleError(v9552);

	goto c02_0884;

c02_0888:;

c02_0884:;

	goto c02_087f;

c02_0883:;

c02_087f:;

endsub:;
}

// reduce_45 workspace at ws+3000 length ws+0
void f528_reduce_45(void) {

	i8 v9553 = (i8)(intptr_t)(ws+2920);
	i8 v9554 = *(i8*)(intptr_t)v9553;
	i8 v9555;
	f203_UndoLValue(&v9555, v9554);
	i8 v9556 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9556 = v9555;

	i1 v9557 = (i1)+56;
	i8 v9558 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9558, v9557);

endsub:;
}

// reduce_46 workspace at ws+3000 length ws+0
void f529_reduce_46(void) {

	i8 v9559 = (i8)(intptr_t)(ws+2920);
	i8 v9560 = *(i8*)(intptr_t)v9559;
	i8 v9561 = v9560+(+16);
	i8 v9562 = *(i8*)(intptr_t)v9561;
	i1 v9563;
	f197_IsPtr(&v9563, v9562);
	i1 v9564 = (i1)+0;
	if (v9563==v9564) goto c02_088c; else goto c02_088d;

c02_088c:;

	f465_parser_i_bad_next_prev();

	goto c02_0889;

c02_088d:;

c02_0889:;

	i1 v9565 = (i1)+155;
	i8 v9566 = (i8)(intptr_t)(ws+1056);
	i8 v9567 = *(i8*)(intptr_t)v9566;
	i8 v9568 = v9567+(+42);
	i2 v9569 = *(i2*)(intptr_t)v9568;
	i1 v9570 = v9569;
	i8 v9571 = (i8)(intptr_t)(ws+2920);
	i8 v9572 = *(i8*)(intptr_t)v9571;
	i8 v9573 = (i8)(intptr_t)(ws+2920);
	i8 v9574 = *(i8*)(intptr_t)v9573;
	i8 v9575 = v9574+(+16);
	i8 v9576 = *(i8*)(intptr_t)v9575;
	i8 v9577 = *(i8*)(intptr_t)v9576;
	i8 v9578 = v9577+(+44);
	i2 v9579 = *(i2*)(intptr_t)v9578;
	i4 v9580 = v9579;
	i8 v9581;
	f111_MidConstant(&v9581, v9580);
	i8 v9582;
	f147_MidC2Op(&v9582, v9581, v9572, v9570, v9565);
	i8 v9583 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9583 = v9582;

	i8 v9584 = (i8)(intptr_t)(ws+2920);
	i8 v9585 = *(i8*)(intptr_t)v9584;
	i8 v9586 = v9585+(+16);
	i8 v9587 = *(i8*)(intptr_t)v9586;
	i8 v9588 = (i8)(intptr_t)(ws+2912);
	i8 v9589 = *(i8*)(intptr_t)v9588;
	i8 v9590 = v9589+(+16);
	*(i8*)(intptr_t)v9590 = v9587;

endsub:;
}

// reduce_47 workspace at ws+3000 length ws+0
void f530_reduce_47(void) {

	i8 v9591 = (i8)(intptr_t)(ws+2920);
	i8 v9592 = *(i8*)(intptr_t)v9591;
	i8 v9593 = v9592+(+16);
	i8 v9594 = *(i8*)(intptr_t)v9593;
	i1 v9595;
	f197_IsPtr(&v9595, v9594);
	i1 v9596 = (i1)+0;
	if (v9595==v9596) goto c02_0891; else goto c02_0892;

c02_0891:;

	f465_parser_i_bad_next_prev();

	goto c02_088e;

c02_0892:;

c02_088e:;

	i1 v9597 = (i1)+130;
	i8 v9598 = (i8)(intptr_t)(ws+1056);
	i8 v9599 = *(i8*)(intptr_t)v9598;
	i8 v9600 = v9599+(+42);
	i2 v9601 = *(i2*)(intptr_t)v9600;
	i1 v9602 = v9601;
	i8 v9603 = (i8)(intptr_t)(ws+2920);
	i8 v9604 = *(i8*)(intptr_t)v9603;
	i8 v9605 = (i8)(intptr_t)(ws+2920);
	i8 v9606 = *(i8*)(intptr_t)v9605;
	i8 v9607 = v9606+(+16);
	i8 v9608 = *(i8*)(intptr_t)v9607;
	i8 v9609 = *(i8*)(intptr_t)v9608;
	i8 v9610 = v9609+(+44);
	i2 v9611 = *(i2*)(intptr_t)v9610;
	i4 v9612 = v9611;
	i8 v9613;
	f111_MidConstant(&v9613, v9612);
	i8 v9614;
	f147_MidC2Op(&v9614, v9613, v9604, v9602, v9597);
	i8 v9615 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9615 = v9614;

	i8 v9616 = (i8)(intptr_t)(ws+2920);
	i8 v9617 = *(i8*)(intptr_t)v9616;
	i8 v9618 = v9617+(+16);
	i8 v9619 = *(i8*)(intptr_t)v9618;
	i8 v9620 = (i8)(intptr_t)(ws+2912);
	i8 v9621 = *(i8*)(intptr_t)v9620;
	i8 v9622 = v9621+(+16);
	*(i8*)(intptr_t)v9622 = v9619;

endsub:;
}

// reduce_48 workspace at ws+3000 length ws+0
void f531_reduce_48(void) {

	i8 v9623 = (i8)(intptr_t)(ws+2920);
	i8 v9624 = *(i8*)(intptr_t)v9623;
	i8 v9625 = v9624+(+42);
	i2 v9626 = *(i2*)(intptr_t)v9625;
	i4 v9627 = v9626;
	i8 v9628;
	f111_MidConstant(&v9628, v9627);
	i8 v9629 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9629 = v9628;

endsub:;
}
const i1 c02_s01c6[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };

// reduce_49 workspace at ws+3000 length ws+0
void f532_reduce_49(void) {

	i8 v9630 = (i8)(intptr_t)(ws+2920);
	i8 v9631 = *(i8*)(intptr_t)v9630;
	i1 v9632;
	f196_IsArray(&v9632, v9631);
	i1 v9633 = (i1)+0;
	if (v9632==v9633) goto c02_0896; else goto c02_0897;

c02_0896:;

	i8 v9634 = (i8)(intptr_t)c02_s01c6;
	f57_SimpleError(v9634);

	goto c02_0893;

c02_0897:;

c02_0893:;

	i8 v9635 = (i8)(intptr_t)(ws+2920);
	i8 v9636 = *(i8*)(intptr_t)v9635;
	i8 v9637 = v9636+(+8);
	i2 v9638 = *(i2*)(intptr_t)v9637;
	i4 v9639 = v9638;
	i8 v9640;
	f111_MidConstant(&v9640, v9639);
	i8 v9641 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9641 = v9640;

endsub:;
}
const i1 c02_s01c7[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };

// reduce_50 workspace at ws+3000 length ws+0
void f533_reduce_50(void) {

	i8 v9642 = (i8)(intptr_t)(ws+2920);
	i8 v9643 = *(i8*)(intptr_t)v9642;
	i8 v9644 = v9643+(+46);
	i1 v9645 = *(i1*)(intptr_t)v9644;

	if (v9645 != +7) goto c02_0899;

	i8 v9646 = (i8)(intptr_t)(ws+2920);
	i8 v9647 = *(i8*)(intptr_t)v9646;
	i4 v9648 = *(i4*)(intptr_t)v9647;
	i8 v9649;
	f111_MidConstant(&v9649, v9648);
	i8 v9650 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9650 = v9649;

	goto c02_0898;

c02_0899:;

	if (v9645 != +28) goto c02_089a;

	i8 v9651 = (i8)(intptr_t)(ws+2920);
	i8 v9652 = *(i8*)(intptr_t)v9651;
	i2 v9653 = (i2)+0;
	i8 v9654;
	f113_MidAddress(&v9654, v9653, v9652);
	i8 v9655 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9655 = v9654;

	i8 v9656 = (i8)(intptr_t)(ws+2920);
	i8 v9657 = *(i8*)(intptr_t)v9656;
	i8 v9658 = *(i8*)(intptr_t)v9657;
	i8 v9659;
	f439_MakePointerType(&v9659, v9658);
	i8 v9660 = (i8)(intptr_t)(ws+2912);
	i8 v9661 = *(i8*)(intptr_t)v9660;
	i8 v9662 = v9661+(+16);
	*(i8*)(intptr_t)v9662 = v9659;

	i8 v9663 = (i8)(intptr_t)(ws+2912);
	i8 v9664 = *(i8*)(intptr_t)v9663;
	i8 v9665;
	f202_MakeLValue(&v9665, v9664);
	i8 v9666 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9666 = v9665;

	goto c02_0898;

c02_089a:;

	f55_StartError();

	i8 v9667 = (i8)(intptr_t)(ws+2920);
	i8 v9668 = *(i8*)(intptr_t)v9667;
	i8 v9669 = v9668+(+48);
	i8 v9670 = *(i8*)(intptr_t)v9669;
	f11_print(v9670);

	i8 v9671 = (i8)(intptr_t)c02_s01c7;
	f11_print(v9671);

	f56_EndError();

c02_0898:;


endsub:;
}
const i1 c02_s01c8[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };

// reduce_51 workspace at ws+3000 length ws+0
void f534_reduce_51(void) {

	i8 v9672 = (i8)(intptr_t)(ws+2928);
	i8 v9673 = *(i8*)(intptr_t)v9672;
	i8 v9674 = v9673+(+16);
	i8 v9675 = *(i8*)(intptr_t)v9674;
	i1 v9676;
	f197_IsPtr(&v9676, v9675);
	i1 v9677 = (i1)+0;
	if (v9676==v9677) goto c02_089e; else goto c02_089f;

c02_089e:;

	i8 v9678 = (i8)(intptr_t)c02_s01c8;
	f57_SimpleError(v9678);

	goto c02_089b;

c02_089f:;

c02_089b:;

	i8 v9679 = (i8)(intptr_t)(ws+2928);
	i8 v9680 = *(i8*)(intptr_t)v9679;
	i8 v9681;
	f202_MakeLValue(&v9681, v9680);
	i8 v9682 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9682 = v9681;

	i1 v9683 = (i1)+5;
	i8 v9684 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9684, v9683);

endsub:;
}
const i1 c02_s01c9[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
const i1 c02_s01ca[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };

// reduce_52 workspace at ws+3000 length ws+48
void f535_reduce_52(void) {

	i8 v9685 = (i8)(intptr_t)(ws+2944);
	i8 v9686 = *(i8*)(intptr_t)v9685;
	i8 v9687 = v9686+(+16);
	i8 v9688 = *(i8*)(intptr_t)v9687;
	i8 v9689 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9689 = v9688;

	i8 v9690 = (i8)(intptr_t)(ws+2944);
	i8 v9691 = *(i8*)(intptr_t)v9690;
	i8 v9692;
	f203_UndoLValue(&v9692, v9691);
	i8 v9693 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9693 = v9692;

	i8 v9694 = (i8)(intptr_t)(ws+3000);
	i8 v9695 = *(i8*)(intptr_t)v9694;
	i1 v9696;
	f196_IsArray(&v9696, v9695);
	i1 v9697 = (i1)+0;
	if (v9696==v9697) goto c02_08a3; else goto c02_08a4;

c02_08a3:;

	f55_StartError();

	i8 v9698 = (i8)(intptr_t)c02_s01c9;
	f11_print(v9698);

	i8 v9699 = (i8)(intptr_t)(ws+3000);
	i8 v9700 = *(i8*)(intptr_t)v9699;
	i8 v9701 = v9700+(+48);
	i8 v9702 = *(i8*)(intptr_t)v9701;
	f11_print(v9702);

	f56_EndError();

	goto c02_08a0;

c02_08a4:;

c02_08a0:;

	i8 v9703 = (i8)(intptr_t)(ws+2928);
	i8 v9704 = *(i8*)(intptr_t)v9703;
	i8 v9705 = (i8)(intptr_t)(ws+3000);
	i8 v9706 = *(i8*)(intptr_t)v9705;
	i8 v9707 = v9706+(+16);
	i8 v9708 = *(i8*)(intptr_t)v9707;
	f445_CheckExpressionType(v9708, v9704);

	i8 v9709 = (i8)(intptr_t)(ws+2928);
	i8 v9710 = *(i8*)(intptr_t)v9709;
	i8 v9711 = v9710+(+16);
	i8 v9712 = *(i8*)(intptr_t)v9711;
	i1 v9713;
	f198_IsNum(&v9713, v9712);
	i1 v9714 = (i1)+0;
	if (v9713==v9714) goto c02_08a8; else goto c02_08a9;

c02_08a8:;

	i8 v9715 = (i8)(intptr_t)c02_s01ca;
	f57_SimpleError(v9715);

	goto c02_08a5;

c02_08a9:;

c02_08a5:;

	i8 v9716 = (i8)(intptr_t)(ws+3000);
	i8 v9717 = *(i8*)(intptr_t)v9716;
	i8 v9718 = *(i8*)(intptr_t)v9717;
	i8 v9719 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9719 = v9718;

	i8 v9720 = (i8)(intptr_t)(ws+1056);
	i8 v9721 = *(i8*)(intptr_t)v9720;
	i8 v9722 = v9721+(+42);
	i2 v9723 = *(i2*)(intptr_t)v9722;
	i1 v9724 = v9723;
	i8 v9725 = (i8)(intptr_t)(ws+3024);
	*(i1*)(intptr_t)v9725 = v9724;

	i1 v9726 = (i1)+160;
	i8 v9727 = (i8)(intptr_t)(ws+3024);
	i1 v9728 = *(i1*)(intptr_t)v9727;
	i8 v9729 = (i8)(intptr_t)(ws+1056);
	i8 v9730 = *(i8*)(intptr_t)v9729;
	i8 v9731 = v9730+(+42);
	i2 v9732 = *(i2*)(intptr_t)v9731;
	i1 v9733 = v9732;
	i8 v9734 = (i8)(intptr_t)(ws+2928);
	i8 v9735 = *(i8*)(intptr_t)v9734;
	i1 v9736 = (i1)+0;
	i8 v9737;
	f148_MidCCast(&v9737, v9736, v9735, v9733);
	i8 v9738 = (i8)(intptr_t)(ws+3016);
	i8 v9739 = *(i8*)(intptr_t)v9738;
	i8 v9740 = v9739+(+44);
	i2 v9741 = *(i2*)(intptr_t)v9740;
	i4 v9742 = v9741;
	i8 v9743;
	f111_MidConstant(&v9743, v9742);
	i8 v9744;
	f147_MidC2Op(&v9744, v9743, v9737, v9728, v9726);
	i8 v9745 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9745 = v9744;

	i8 v9746 = (i8)(intptr_t)(ws+1056);
	i8 v9747 = *(i8*)(intptr_t)v9746;
	i8 v9748 = (i8)(intptr_t)(ws+3032);
	i8 v9749 = *(i8*)(intptr_t)v9748;
	i8 v9750 = v9749+(+16);
	*(i8*)(intptr_t)v9750 = v9747;

	i1 v9751 = (i1)+155;
	i8 v9752 = (i8)(intptr_t)(ws+3024);
	i1 v9753 = *(i1*)(intptr_t)v9752;
	i8 v9754 = (i8)(intptr_t)(ws+3008);
	i8 v9755 = *(i8*)(intptr_t)v9754;
	i8 v9756 = (i8)(intptr_t)(ws+3032);
	i8 v9757 = *(i8*)(intptr_t)v9756;
	i8 v9758;
	f147_MidC2Op(&v9758, v9757, v9755, v9753, v9751);
	i8 v9759 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9759 = v9758;

	i8 v9760 = (i8)(intptr_t)(ws+3016);
	i8 v9761 = *(i8*)(intptr_t)v9760;
	i8 v9762;
	f439_MakePointerType(&v9762, v9761);
	i8 v9763 = (i8)(intptr_t)(ws+3040);
	i8 v9764 = *(i8*)(intptr_t)v9763;
	i8 v9765 = v9764+(+16);
	*(i8*)(intptr_t)v9765 = v9762;

	i8 v9766 = (i8)(intptr_t)(ws+3040);
	i8 v9767 = *(i8*)(intptr_t)v9766;
	i8 v9768;
	f202_MakeLValue(&v9768, v9767);
	i8 v9769 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9769 = v9768;

	i1 v9770 = (i1)+17;
	i8 v9771 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v9771, v9770);

	i1 v9772 = (i1)+5;
	i8 v9773 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9773, v9772);

endsub:;
}
const i1 c02_s01cb[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s01cc[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
const i1 c02_s01cd[] = { 0x27,0 };

// reduce_53 workspace at ws+3000 length ws+24
void f536_reduce_53(void) {

	i8 v9774 = (i8)(intptr_t)(ws+2936);
	i8 v9775 = *(i8*)(intptr_t)v9774;
	i8 v9776 = v9775+(+16);
	i8 v9777 = *(i8*)(intptr_t)v9776;
	i8 v9778 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9778 = v9777;

	i8 v9779 = (i8)(intptr_t)(ws+2936);
	i8 v9780 = *(i8*)(intptr_t)v9779;
	i8 v9781;
	f203_UndoLValue(&v9781, v9780);
	i8 v9782 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9782 = v9781;

c02_08ac:;

	i8 v9783 = (i8)(intptr_t)(ws+3000);
	i8 v9784 = *(i8*)(intptr_t)v9783;
	i1 v9785;
	f197_IsPtr(&v9785, v9784);
	i1 v9786 = (i1)+0;
	if (v9785==v9786) goto c02_08af; else goto c02_08ae;

c02_08ae:;

	i8 v9787 = (i8)(intptr_t)(ws+3000);
	i8 v9788 = *(i8*)(intptr_t)v9787;
	i8 v9789 = *(i8*)(intptr_t)v9788;
	i8 v9790 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9790 = v9789;

	i8 v9791 = (i8)(intptr_t)(ws+3000);
	i8 v9792 = *(i8*)(intptr_t)v9791;
	f193_CheckNotPartialType(v9792);

	i8 v9793 = (i8)(intptr_t)(ws+1056);
	i8 v9794 = *(i8*)(intptr_t)v9793;
	i8 v9795 = v9794+(+42);
	i2 v9796 = *(i2*)(intptr_t)v9795;
	i1 v9797 = v9796;
	i8 v9798 = (i8)(intptr_t)(ws+3008);
	i8 v9799 = *(i8*)(intptr_t)v9798;
	i8 v9800;
	f118_MidLoad(&v9800, v9799, v9797);
	i8 v9801 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9801 = v9800;

	goto c02_08ac;

c02_08af:;

	i8 v9802 = (i8)(intptr_t)(ws+3000);
	i8 v9803 = *(i8*)(intptr_t)v9802;
	f193_CheckNotPartialType(v9803);

	i8 v9804 = (i8)(intptr_t)(ws+3000);
	i8 v9805 = *(i8*)(intptr_t)v9804;
	i1 v9806;
	f201_IsRecord(&v9806, v9805);
	i1 v9807 = (i1)+0;
	if (v9806==v9807) goto c02_08b3; else goto c02_08b4;

c02_08b3:;

	f55_StartError();

	i8 v9808 = (i8)(intptr_t)(ws+3000);
	i8 v9809 = *(i8*)(intptr_t)v9808;
	i8 v9810 = v9809+(+48);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	f11_print(v9811);

	i8 v9812 = (i8)(intptr_t)c02_s01cb;
	f11_print(v9812);

	f56_EndError();

	goto c02_08b0;

c02_08b4:;

c02_08b0:;

	i8 v9813 = (i8)(intptr_t)(ws+3000);
	i8 v9814 = *(i8*)(intptr_t)v9813;
	i8 v9815 = (i8)(intptr_t)(ws+2920);
	i8 v9816 = *(i8*)(intptr_t)v9815;
	i8 v9817;
	f188_LookupSymbol(&v9817, v9816, v9814);
	i8 v9818 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9818 = v9817;

	i8 v9819 = (i8)(intptr_t)(ws+3016);
	i8 v9820 = *(i8*)(intptr_t)v9819;
	i8 v9821 = (i8)+0;
	if (v9820==v9821) goto c02_08b8; else goto c02_08b9;

c02_08b8:;

	f55_StartError();

	i8 v9822 = (i8)(intptr_t)(ws+3000);
	i8 v9823 = *(i8*)(intptr_t)v9822;
	i8 v9824 = v9823+(+48);
	i8 v9825 = *(i8*)(intptr_t)v9824;
	f11_print(v9825);

	i8 v9826 = (i8)(intptr_t)c02_s01cc;
	f11_print(v9826);

	i8 v9827 = (i8)(intptr_t)(ws+2920);
	i8 v9828 = *(i8*)(intptr_t)v9827;
	f11_print(v9828);

	i8 v9829 = (i8)(intptr_t)c02_s01cd;
	f11_print(v9829);

	f56_EndError();

	goto c02_08b5;

c02_08b9:;

c02_08b5:;

	i8 v9830 = (i8)(intptr_t)(ws+2920);
	i8 v9831 = *(i8*)(intptr_t)v9830;
	f32_Free(v9831);

	i1 v9832 = (i1)+155;
	i8 v9833 = (i8)(intptr_t)(ws+1056);
	i8 v9834 = *(i8*)(intptr_t)v9833;
	i8 v9835 = v9834+(+42);
	i2 v9836 = *(i2*)(intptr_t)v9835;
	i1 v9837 = v9836;
	i8 v9838 = (i8)(intptr_t)(ws+3008);
	i8 v9839 = *(i8*)(intptr_t)v9838;
	i8 v9840 = (i8)(intptr_t)(ws+3016);
	i8 v9841 = *(i8*)(intptr_t)v9840;
	i8 v9842 = v9841+(+32);
	i2 v9843 = *(i2*)(intptr_t)v9842;
	i4 v9844 = v9843;
	i8 v9845;
	f111_MidConstant(&v9845, v9844);
	i8 v9846;
	f147_MidC2Op(&v9846, v9845, v9839, v9837, v9832);
	i8 v9847 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9847 = v9846;

	i8 v9848 = (i8)(intptr_t)(ws+3016);
	i8 v9849 = *(i8*)(intptr_t)v9848;
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851;
	f439_MakePointerType(&v9851, v9850);
	i8 v9852 = (i8)(intptr_t)(ws+2912);
	i8 v9853 = *(i8*)(intptr_t)v9852;
	i8 v9854 = v9853+(+16);
	*(i8*)(intptr_t)v9854 = v9851;

	i8 v9855 = (i8)(intptr_t)(ws+2912);
	i8 v9856 = *(i8*)(intptr_t)v9855;
	i8 v9857;
	f202_MakeLValue(&v9857, v9856);
	i8 v9858 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9858 = v9857;

	i1 v9859 = (i1)+8;
	i8 v9860 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9860, v9859);

endsub:;
}

// reduce_54 workspace at ws+3000 length ws+0
void f537_reduce_54(void) {

	i8 v9861 = (i8)(intptr_t)(ws+2920);
	i8 v9862 = *(i8*)(intptr_t)v9861;
	i8 v9863;
	f137_MidString(&v9863, v9862);
	i8 v9864 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9864 = v9863;

	i8 v9865 = (i8)(intptr_t)(ws+1040);
	i8 v9866 = *(i8*)(intptr_t)v9865;
	i8 v9867;
	f439_MakePointerType(&v9867, v9866);
	i8 v9868 = (i8)(intptr_t)(ws+2912);
	i8 v9869 = *(i8*)(intptr_t)v9868;
	i8 v9870 = v9869+(+16);
	*(i8*)(intptr_t)v9870 = v9867;

endsub:;
}

// reduce_55 workspace at ws+3000 length ws+0
void f538_reduce_55(void) {

	i8 v9871 = (i8)(intptr_t)(ws+2920);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = v9872+(+66);
	i1 v9874 = *(i1*)(intptr_t)v9873;
	i1 v9875 = (i1)+40;
	if (v9874==v9875) goto c02_08be; else goto c02_08bd;

c02_08bd:;

	f466_parser_i_constant_error();

	goto c02_08ba;

c02_08be:;

c02_08ba:;

	i8 v9876 = (i8)(intptr_t)(ws+2920);
	i8 v9877 = *(i8*)(intptr_t)v9876;
	i4 v9878 = *(i4*)(intptr_t)v9877;
	i8 v9879 = (i8)(intptr_t)(ws+2912);
	*(i4*)(intptr_t)v9879 = v9878;

	i8 v9880 = (i8)(intptr_t)(ws+2920);
	i8 v9881 = *(i8*)(intptr_t)v9880;
	f140_Discard(v9881);

endsub:;
}

// reduce_56 workspace at ws+3000 length ws+0
void f539_reduce_56(void) {

	i1 v9882 = (i1)+7;
	i8 v9883 = (i8)(intptr_t)(ws+2944);
	i8 v9884 = *(i8*)(intptr_t)v9883;
	i8 v9885 = v9884+(+46);
	*(i1*)(intptr_t)v9885 = v9882;

	i8 v9886 = (i8)(intptr_t)(ws+2928);
	i4 v9887 = *(i4*)(intptr_t)v9886;
	i8 v9888 = (i8)(intptr_t)(ws+2944);
	i8 v9889 = *(i8*)(intptr_t)v9888;
	*(i4*)(intptr_t)v9889 = v9887;

	i1 v9890 = (i1)+2;
	i8 v9891 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v9891, v9890);

	i1 v9892 = (i1)+22;
	i8 v9893 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9893, v9892);

endsub:;
}
const i1 c02_s01ce[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };

// reduce_57 workspace at ws+3000 length ws+0
void f540_reduce_57(void) {

	i8 v9894 = (i8)(intptr_t)(ws+2944);
	i4 v9895 = *(i4*)(intptr_t)v9894;
	i8 v9896 = (i8)(intptr_t)(ws+2928);
	i4 v9897 = *(i4*)(intptr_t)v9896;
	if ((s4)v9895<(s4)v9897) goto c02_08c3; else goto c02_08c2;

c02_08c2:;

	i8 v9898 = (i8)(intptr_t)c02_s01ce;
	f57_SimpleError(v9898);

	goto c02_08bf;

c02_08c3:;

c02_08bf:;

	i8 v9899 = (i8)(intptr_t)(ws+2944);
	i4 v9900 = *(i4*)(intptr_t)v9899;
	i8 v9901 = (i8)(intptr_t)(ws+2928);
	i4 v9902 = *(i4*)(intptr_t)v9901;
	i8 v9903;
	f211_ArchGuessIntType(&v9903, v9902, v9900);
	i8 v9904 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9904 = v9903;

	i1 v9905 = (i1)+16;
	i8 v9906 = (i8)(intptr_t)(ws+2952);
	f476_yy_destructor(v9906, v9905);

	i1 v9907 = (i1)+42;
	i8 v9908 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v9908, v9907);

	i1 v9909 = (i1)+4;
	i8 v9910 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9910, v9909);

endsub:;
}
const i1 c02_s01cf[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
const i1 c02_s01d0[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };

// reduce_58 workspace at ws+3000 length ws+8
void f541_reduce_58(void) {

	i8 v9911 = (i8)(intptr_t)(ws+2920);
	i8 v9912 = *(i8*)(intptr_t)v9911;
	i8 v9913 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9913 = v9912;

	i8 v9914 = (i8)(intptr_t)(ws+3000);
	i8 v9915 = *(i8*)(intptr_t)v9914;
	i8 v9916 = v9915+(+46);
	i1 v9917 = *(i1*)(intptr_t)v9916;
	i1 v9918 = (i1)+0;
	if (v9917==v9918) goto c02_08c7; else goto c02_08c8;

c02_08c7:;

	i1 v9919 = (i1)+30;
	i8 v9920 = (i8)(intptr_t)(ws+3000);
	i8 v9921 = *(i8*)(intptr_t)v9920;
	i8 v9922 = v9921+(+46);
	*(i1*)(intptr_t)v9922 = v9919;

	i1 v9923 = (i1)+1;
	i8 v9924 = (i8)(intptr_t)(ws+3000);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	i8 v9926 = v9925+(+40);
	*(i1*)(intptr_t)v9926 = v9923;

	goto c02_08c4;

c02_08c8:;

c02_08c4:;

	i8 v9927 = (i8)(intptr_t)(ws+3000);
	i8 v9928 = *(i8*)(intptr_t)v9927;
	i8 v9929 = v9928+(+46);
	i1 v9930 = *(i1*)(intptr_t)v9929;
	i1 v9931 = (i1)+30;
	if (v9930==v9931) goto c02_08cd; else goto c02_08cc;

c02_08cc:;

	f55_StartError();

	i8 v9932 = (i8)(intptr_t)c02_s01cf;
	f11_print(v9932);

	i8 v9933 = (i8)(intptr_t)(ws+3000);
	i8 v9934 = *(i8*)(intptr_t)v9933;
	i8 v9935 = v9934+(+48);
	i8 v9936 = *(i8*)(intptr_t)v9935;
	f11_print(v9936);

	i8 v9937 = (i8)(intptr_t)c02_s01d0;
	f11_print(v9937);

	f56_EndError();

	goto c02_08c9;

c02_08cd:;

c02_08c9:;

	i8 v9938 = (i8)(intptr_t)(ws+3000);
	i8 v9939 = *(i8*)(intptr_t)v9938;
	i8 v9940 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9940 = v9939;

endsub:;
}

// reduce_59 workspace at ws+3000 length ws+0
void f542_reduce_59(void) {

	i8 v9941 = (i8)(intptr_t)(ws+2928);
	i8 v9942 = *(i8*)(intptr_t)v9941;
	i8 v9943;
	f439_MakePointerType(&v9943, v9942);
	i8 v9944 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9944 = v9943;

	i1 v9945 = (i1)+5;
	i8 v9946 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9946, v9945);

endsub:;
}

// reduce_60 workspace at ws+3000 length ws+0
void f543_reduce_60(void) {

	i8 v9947 = (i8)(intptr_t)(ws+2944);
	i8 v9948 = *(i8*)(intptr_t)v9947;
	i8 v9949 = (i8)(intptr_t)(ws+2928);
	i4 v9950 = *(i4*)(intptr_t)v9949;
	i2 v9951 = (s2)(s4)v9950;
	i8 v9952;
	f440_MakeArrayType(&v9952, v9951, v9948);
	i8 v9953 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9953 = v9952;

	i1 v9954 = (i1)+17;
	i8 v9955 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v9955, v9954);

	i1 v9956 = (i1)+5;
	i8 v9957 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9957, v9956);

endsub:;
}

// reduce_61 workspace at ws+3000 length ws+0
void f544_reduce_61(void) {

	i8 v9958 = (i8)(intptr_t)(ws+2936);
	i8 v9959 = *(i8*)(intptr_t)v9958;
	i2 v9960 = (i2)+0;
	i8 v9961;
	f440_MakeArrayType(&v9961, v9960, v9959);
	i8 v9962 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9962 = v9961;

	i1 v9963 = (i1)+17;
	i8 v9964 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v9964, v9963);

	i1 v9965 = (i1)+5;
	i8 v9966 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9966, v9965);

endsub:;
}
const i1 c02_s01d1[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };

// reduce_62 workspace at ws+3000 length ws+0
void f545_reduce_62(void) {

	i8 v9967 = (i8)(intptr_t)(ws+2920);
	i8 v9968 = *(i8*)(intptr_t)v9967;
	i1 v9969;
	f196_IsArray(&v9969, v9968);
	i1 v9970 = (i1)+0;
	if (v9969==v9970) goto c02_08d1; else goto c02_08d2;

c02_08d1:;

	f55_StartError();

	i8 v9971 = (i8)(intptr_t)(ws+2920);
	i8 v9972 = *(i8*)(intptr_t)v9971;
	i8 v9973 = v9972+(+48);
	i8 v9974 = *(i8*)(intptr_t)v9973;
	f11_print(v9974);

	i8 v9975 = (i8)(intptr_t)c02_s01d1;
	f11_print(v9975);

	f56_EndError();

	goto c02_08ce;

c02_08d2:;

c02_08ce:;

	i8 v9976 = (i8)(intptr_t)(ws+2920);
	i8 v9977 = *(i8*)(intptr_t)v9976;
	i8 v9978 = v9977+(+16);
	i8 v9979 = *(i8*)(intptr_t)v9978;
	i8 v9980 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9980 = v9979;

endsub:;
}

// reduce_63 workspace at ws+3000 length ws+8
void f546_reduce_63(void) {

	i8 v9981 = (i8)+0;
	i8 v9982 = (i8)(intptr_t)(ws+2944);
	i8 v9983 = *(i8*)(intptr_t)v9982;
	i8 v9984 = (i8)(intptr_t)(ws+2928);
	i8 v9985 = *(i8*)(intptr_t)v9984;
	i8 v9986;
	f191_AddAlias(&v9986, v9985, v9983, v9981);
	i8 v9987 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9987 = v9986;

	i1 v9988 = (i1)+2;
	i8 v9989 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v9989, v9988);

	i1 v9990 = (i1)+22;
	i8 v9991 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v9991, v9990);

endsub:;
}

// reduce_64 workspace at ws+3000 length ws+0
void f547_reduce_64(void) {

	i8 v9992 = (i8)+0;
	i8 v9993 = (i8)(intptr_t)(ws+2920);
	i8 v9994 = *(i8*)(intptr_t)v9993;
	i8 v9995;
	f190_AddSymbol(&v9995, v9994, v9992);
	i8 v9996 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v9996 = v9995;

endsub:;
}
const i1 c02_s01d2[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s01d3[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };

// reduce_65 workspace at ws+3000 length ws+16
void f548_reduce_65(void) {

	i8 v9997 = (i8)(intptr_t)(ws+2920);
	i8 v9998 = *(i8*)(intptr_t)v9997;
	i8 v9999 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v9999 = v9998;

	i8 v10000 = (i8)+0;
	i8 v10001 = (i8)(intptr_t)(ws+3000);
	i8 v10002 = *(i8*)(intptr_t)v10001;
	i8 v10003;
	f188_LookupSymbol(&v10003, v10002, v10000);
	i8 v10004 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10004 = v10003;

	i8 v10005 = (i8)(intptr_t)(ws+3008);
	i8 v10006 = *(i8*)(intptr_t)v10005;
	i8 v10007 = (i8)+0;
	if (v10006==v10007) goto c02_08d6; else goto c02_08d7;

c02_08d6:;

	f55_StartError();

	i8 v10008 = (i8)(intptr_t)c02_s01d2;
	f11_print(v10008);

	i8 v10009 = (i8)(intptr_t)(ws+3000);
	i8 v10010 = *(i8*)(intptr_t)v10009;
	f11_print(v10010);

	i8 v10011 = (i8)(intptr_t)c02_s01d3;
	f11_print(v10011);

	f56_EndError();

	goto c02_08d3;

c02_08d7:;

c02_08d3:;

	i8 v10012 = (i8)(intptr_t)(ws+3000);
	i8 v10013 = *(i8*)(intptr_t)v10012;
	f32_Free(v10013);

	i8 v10014 = (i8)(intptr_t)(ws+3008);
	i8 v10015 = *(i8*)(intptr_t)v10014;
	i8 v10016 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10016 = v10015;

endsub:;
}

// reduce_66 workspace at ws+3000 length ws+16
void f549_reduce_66(void) {

	i8 v10017 = (i8)(intptr_t)(ws+2920);
	i8 v10018 = *(i8*)(intptr_t)v10017;
	i8 v10019 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10019 = v10018;

	i8 v10020 = (i8)+0;
	i8 v10021 = (i8)(intptr_t)(ws+3000);
	i8 v10022 = *(i8*)(intptr_t)v10021;
	i8 v10023;
	f188_LookupSymbol(&v10023, v10022, v10020);
	i8 v10024 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10024 = v10023;

	i8 v10025 = (i8)(intptr_t)(ws+3008);
	i8 v10026 = *(i8*)(intptr_t)v10025;
	i8 v10027 = (i8)+0;
	if (v10026==v10027) goto c02_08db; else goto c02_08dc;

c02_08db:;

	i8 v10028 = (i8)+0;
	i8 v10029 = (i8)(intptr_t)(ws+3000);
	i8 v10030 = *(i8*)(intptr_t)v10029;
	i8 v10031;
	f190_AddSymbol(&v10031, v10030, v10028);
	i8 v10032 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10032 = v10031;

	goto c02_08d8;

c02_08dc:;

	i8 v10033 = (i8)(intptr_t)(ws+3000);
	i8 v10034 = *(i8*)(intptr_t)v10033;
	f32_Free(v10034);

c02_08d8:;

	i8 v10035 = (i8)(intptr_t)(ws+3008);
	i8 v10036 = *(i8*)(intptr_t)v10035;
	i8 v10037 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10037 = v10036;

endsub:;
}
const i1 c02_s01d4[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };

// reduce_67 workspace at ws+3000 length ws+0
void f550_reduce_67(void) {

	i8 v10038 = (i8)(intptr_t)(ws+2920);
	i8 v10039 = *(i8*)(intptr_t)v10038;
	i8 v10040 = v10039+(+46);
	i1 v10041 = *(i1*)(intptr_t)v10040;
	i1 v10042 = (i1)+28;
	if (v10041==v10042) goto c02_08e0; else goto c02_08e1;

c02_08e0:;

	i8 v10043 = (i8)(intptr_t)(ws+2920);
	i8 v10044 = *(i8*)(intptr_t)v10043;
	i8 v10045 = *(i8*)(intptr_t)v10044;
	i8 v10046 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10046 = v10045;

	goto c02_08dd;

c02_08e1:;

c02_08dd:;

	i8 v10047 = (i8)(intptr_t)(ws+2920);
	i8 v10048 = *(i8*)(intptr_t)v10047;
	i8 v10049 = v10048+(+46);
	i1 v10050 = *(i1*)(intptr_t)v10049;
	i1 v10051 = (i1)+30;
	if (v10050==v10051) goto c02_08e6; else goto c02_08e5;

c02_08e5:;

	i8 v10052 = (i8)(intptr_t)c02_s01d4;
	f57_SimpleError(v10052);

	goto c02_08e2;

c02_08e6:;

c02_08e2:;

	i8 v10053 = (i8)(intptr_t)(ws+2920);
	i8 v10054 = *(i8*)(intptr_t)v10053;
	i8 v10055 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10055 = v10054;

endsub:;
}

// reduce_68 workspace at ws+3000 length ws+0
void f551_reduce_68(void) {

	i8 v10056 = (i8)(intptr_t)(ws+2928);
	i8 v10057 = *(i8*)(intptr_t)v10056;
	i8 v10058 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10058 = v10057;

	i1 v10059 = (i1)+4;
	i8 v10060 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10060, v10059);

endsub:;
}
const i1 c02_s01d5[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };

// reduce_69 workspace at ws+3000 length ws+16
void f552_reduce_69(void) {

	i8 v10061 = (i8)(intptr_t)(ws+80);
	i8 v10062 = *(i8*)(intptr_t)v10061;
	i8 v10063 = *(i8*)(intptr_t)v10062;
	i8 v10064 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10064 = v10063;

	i1 v10065 = (i1)+1;
	i8 v10066 = (i8)(intptr_t)(ws+80);
	i8 v10067 = *(i8*)(intptr_t)v10066;
	i8 v10068 = v10067+(+33);
	*(i1*)(intptr_t)v10068 = v10065;

	f467_i_check_sub_call_args();

	i8 v10069 = (i8)(intptr_t)(ws+3000);
	i8 v10070 = *(i8*)(intptr_t)v10069;
	i8 v10071 = v10070+(+67);
	i1 v10072 = *(i1*)(intptr_t)v10071;
	i1 v10073 = (i1)+1;
	if (v10072==v10073) goto c02_08eb; else goto c02_08ea;

c02_08ea:;

	i8 v10074 = (i8)(intptr_t)c02_s01d5;
	f57_SimpleError(v10074);

	goto c02_08e7;

c02_08eb:;

c02_08e7:;

	i8 v10075 = (i8)(intptr_t)(ws+3000);
	i8 v10076 = *(i8*)(intptr_t)v10075;
	i8 v10077 = v10076+(+48);
	i8 v10078 = *(i8*)(intptr_t)v10077;
	i8 v10079 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10079 = v10078;

	i8 v10080 = (i8)(intptr_t)(ws+3008);
	i8 v10081 = *(i8*)(intptr_t)v10080;
	i8 v10082 = *(i8*)(intptr_t)v10081;
	i8 v10083 = v10082+(+42);
	i2 v10084 = *(i2*)(intptr_t)v10083;
	i1 v10085 = v10084;
	i8 v10086 = (i8)(intptr_t)(ws+2920);
	i8 v10087 = *(i8*)(intptr_t)v10086;
	i8 v10088 = (i8)(intptr_t)(ws+3000);
	i8 v10089 = *(i8*)(intptr_t)v10088;
	i8 v10090;
	f99_MidCalle(&v10090, v10089, v10087, v10085);
	i8 v10091 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10091 = v10090;

	i8 v10092 = (i8)(intptr_t)(ws+3008);
	i8 v10093 = *(i8*)(intptr_t)v10092;
	i8 v10094 = *(i8*)(intptr_t)v10093;
	i8 v10095 = (i8)(intptr_t)(ws+2912);
	i8 v10096 = *(i8*)(intptr_t)v10095;
	i8 v10097 = v10096+(+16);
	*(i8*)(intptr_t)v10097 = v10094;

	f468_i_end_call();

endsub:;
}
const i1 c02_s01d6[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };

// reduce_70 workspace at ws+3000 length ws+8
void f553_reduce_70(void) {

	i8 v10098 = (i8)(intptr_t)(ws+80);
	i8 v10099 = *(i8*)(intptr_t)v10098;
	i8 v10100 = *(i8*)(intptr_t)v10099;
	i8 v10101 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10101 = v10100;

	f467_i_check_sub_call_args();

	i8 v10102 = (i8)(intptr_t)(ws+3000);
	i8 v10103 = *(i8*)(intptr_t)v10102;
	i8 v10104 = v10103+(+67);
	i1 v10105 = *(i1*)(intptr_t)v10104;
	i1 v10106 = (i1)+0;
	if (v10105==v10106) goto c02_08f0; else goto c02_08ef;

c02_08ef:;

	i8 v10107 = (i8)(intptr_t)c02_s01d6;
	f57_SimpleError(v10107);

	goto c02_08ec;

c02_08f0:;

c02_08ec:;

	i8 v10108 = (i8)(intptr_t)(ws+2928);
	i8 v10109 = *(i8*)(intptr_t)v10108;
	i8 v10110 = (i8)(intptr_t)(ws+3000);
	i8 v10111 = *(i8*)(intptr_t)v10110;
	i8 v10112;
	f102_MidCall(&v10112, v10111, v10109);
	f435_Generate(v10112);

	f468_i_end_call();

	i1 v10113 = (i1)+22;
	i8 v10114 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10114, v10113);

endsub:;
}
const i1 c02_s01d7[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s01d8[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
const i1 c02_s01d9[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };

// reduce_71 workspace at ws+3000 length ws+41
void f554_reduce_71(void) {

	i8 v10115 = (i8)(intptr_t)(ws+80);
	i8 v10116 = *(i8*)(intptr_t)v10115;
	i8 v10117 = *(i8*)(intptr_t)v10116;
	i8 v10118 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10118 = v10117;

	f467_i_check_sub_call_args();

	i8 v10119 = (i8)(intptr_t)(ws+2928);
	i8 v10120 = *(i8*)(intptr_t)v10119;
	i8 v10121 = (i8)(intptr_t)(ws+3000);
	i8 v10122 = *(i8*)(intptr_t)v10121;
	i8 v10123;
	f102_MidCall(&v10123, v10122, v10120);
	f435_Generate(v10123);

	i8 v10124 = (i8)(intptr_t)(ws+3000);
	i8 v10125 = *(i8*)(intptr_t)v10124;
	i8 v10126 = v10125+(+67);
	i1 v10127 = *(i1*)(intptr_t)v10126;
	i8 v10128 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v10128 = v10127;

	i1 v10129 = (i1)+0;
	i8 v10130 = (i8)(intptr_t)(ws+3009);
	*(i1*)(intptr_t)v10130 = v10129;

	i8 v10131 = (i8)(intptr_t)(ws+2952);
	i8 v10132 = *(i8*)(intptr_t)v10131;
	i8 v10133 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10133 = v10132;

c02_08f3:;

	i8 v10134 = (i8)(intptr_t)(ws+3016);
	i8 v10135 = *(i8*)(intptr_t)v10134;
	i8 v10136 = (i8)+0;
	if (v10135==v10136) goto c02_08f6; else goto c02_08f5;

c02_08f5:;

	i8 v10137 = (i8)(intptr_t)(ws+3008);
	i1 v10138 = *(i1*)(intptr_t)v10137;
	i1 v10139 = (i1)+0;
	if (v10138==v10139) goto c02_08fa; else goto c02_08fb;

c02_08fa:;

	i8 v10140 = (i8)(intptr_t)c02_s01d7;
	f57_SimpleError(v10140);

	goto c02_08f7;

c02_08fb:;

c02_08f7:;

	i8 v10141 = (i8)(intptr_t)(ws+3008);
	i1 v10142 = *(i1*)(intptr_t)v10141;
	i1 v10143 = v10142+(-1);
	i8 v10144 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v10144 = v10143;

	i8 v10145 = (i8)(intptr_t)(ws+3000);
	i8 v10146 = *(i8*)(intptr_t)v10145;
	i8 v10147 = (i8)(intptr_t)(ws+3008);
	i1 v10148 = *(i1*)(intptr_t)v10147;
	i8 v10149;
	f81_GetOutputParameter(&v10149, v10148, v10146);
	i8 v10150 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v10150 = v10149;

	i8 v10151 = (i8)(intptr_t)(ws+3016);
	i8 v10152 = *(i8*)(intptr_t)v10151;
	i8 v10153 = v10152+(+24);
	i8 v10154 = *(i8*)(intptr_t)v10153;
	i8 v10155 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10155 = v10154;

	i8 v10156 = (i8)+0;
	i8 v10157 = (i8)(intptr_t)(ws+3016);
	i8 v10158 = *(i8*)(intptr_t)v10157;
	i8 v10159 = v10158+(+24);
	*(i8*)(intptr_t)v10159 = v10156;

	i8 v10160 = (i8)(intptr_t)(ws+3016);
	i8 v10161 = *(i8*)(intptr_t)v10160;
	i8 v10162 = v10161+(+32);
	i8 v10163 = *(i8*)(intptr_t)v10162;
	i8 v10164 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10164 = v10163;

	i8 v10165 = (i8)(intptr_t)(ws+3032);
	i8 v10166 = *(i8*)(intptr_t)v10165;
	i8 v10167 = v10166+(+16);
	i8 v10168 = *(i8*)(intptr_t)v10167;
	i1 v10169;
	f197_IsPtr(&v10169, v10168);
	i1 v10170 = (i1)+0;
	if (v10169==v10170) goto c02_08ff; else goto c02_0900;

c02_08ff:;

	i8 v10171 = (i8)(intptr_t)c02_s01d8;
	f57_SimpleError(v10171);

	goto c02_08fc;

c02_0900:;

c02_08fc:;

	i8 v10172 = (i8)(intptr_t)(ws+3032);
	i8 v10173 = *(i8*)(intptr_t)v10172;
	i8 v10174 = (i8)(intptr_t)(ws+3024);
	i8 v10175 = *(i8*)(intptr_t)v10174;
	i8 v10176 = *(i8*)(intptr_t)v10175;
	i8 v10177;
	f439_MakePointerType(&v10177, v10176);
	f445_CheckExpressionType(v10177, v10173);

	i8 v10178 = (i8)(intptr_t)(ws+3024);
	i8 v10179 = *(i8*)(intptr_t)v10178;
	i8 v10180 = *(i8*)(intptr_t)v10179;
	f193_CheckNotPartialType(v10180);

	i8 v10181 = (i8)(intptr_t)(ws+3032);
	i8 v10182 = *(i8*)(intptr_t)v10181;
	i8 v10183 = v10182+(+16);
	i8 v10184 = *(i8*)(intptr_t)v10183;
	f193_CheckNotPartialType(v10184);

	i8 v10185 = (i8)(intptr_t)(ws+3024);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	i8 v10187 = *(i8*)(intptr_t)v10186;
	i8 v10188 = v10187+(+42);
	i2 v10189 = *(i2*)(intptr_t)v10188;
	i1 v10190 = v10189;
	i8 v10191 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v10191 = v10190;

	i8 v10192 = (i8)(intptr_t)(ws+3040);
	i1 v10193 = *(i1*)(intptr_t)v10192;
	i8 v10194 = (i8)(intptr_t)(ws+3040);
	i1 v10195 = *(i1*)(intptr_t)v10194;
	i8 v10196 = (i8)(intptr_t)(ws+3000);
	i8 v10197 = *(i8*)(intptr_t)v10196;
	i8 v10198 = (i8)(intptr_t)(ws+3009);
	i1 v10199 = *(i1*)(intptr_t)v10198;
	i8 v10200;
	f132_MidPoparg(&v10200, v10199, v10197, v10195);
	i8 v10201 = (i8)(intptr_t)(ws+3032);
	i8 v10202 = *(i8*)(intptr_t)v10201;
	i8 v10203;
	f126_MidStore(&v10203, v10202, v10200, v10193);
	f435_Generate(v10203);

	i8 v10204 = (i8)(intptr_t)(ws+3009);
	i1 v10205 = *(i1*)(intptr_t)v10204;
	i1 v10206 = v10205+(+1);
	i8 v10207 = (i8)(intptr_t)(ws+3009);
	*(i1*)(intptr_t)v10207 = v10206;

	i8 v10208 = (i8)(intptr_t)(ws+3024);
	i8 v10209 = *(i8*)(intptr_t)v10208;
	i8 v10210 = v10209+(+16);
	i8 v10211 = *(i8*)(intptr_t)v10210;
	i8 v10212 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v10212 = v10211;

	goto c02_08f3;

c02_08f6:;

	i8 v10213 = (i8)(intptr_t)(ws+2952);
	i8 v10214 = *(i8*)(intptr_t)v10213;
	f140_Discard(v10214);

	i8 v10215 = (i8)(intptr_t)(ws+3009);
	i1 v10216 = *(i1*)(intptr_t)v10215;
	i8 v10217 = (i8)(intptr_t)(ws+3000);
	i8 v10218 = *(i8*)(intptr_t)v10217;
	i8 v10219 = v10218+(+67);
	i1 v10220 = *(i1*)(intptr_t)v10219;
	if (v10216==v10220) goto c02_0905; else goto c02_0904;

c02_0904:;

	i8 v10221 = (i8)(intptr_t)c02_s01d9;
	f57_SimpleError(v10221);

	goto c02_0901;

c02_0905:;

c02_0901:;

	f468_i_end_call();

	i1 v10222 = (i1)+2;
	i8 v10223 = (i8)(intptr_t)(ws+2944);
	f476_yy_destructor(v10223, v10222);

	i1 v10224 = (i1)+22;
	i8 v10225 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10225, v10224);

endsub:;
}
const i1 c02_s01da[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
const i1 c02_s01db[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };

// reduce_72 workspace at ws+3000 length ws+8
void f555_reduce_72(void) {

	i8 v10226 = (i8)(intptr_t)(ws+2920);
	i8 v10227 = *(i8*)(intptr_t)v10226;
	i8 v10228 = v10227+(+46);
	i1 v10229 = *(i1*)(intptr_t)v10228;
	i1 v10230 = (i1)+25;
	if (v10229==v10230) goto c02_090a; else goto c02_0909;

c02_0909:;

	f55_StartError();

	i8 v10231 = (i8)(intptr_t)c02_s01da;
	f11_print(v10231);

	i8 v10232 = (i8)(intptr_t)(ws+2920);
	i8 v10233 = *(i8*)(intptr_t)v10232;
	i8 v10234 = v10233+(+48);
	i8 v10235 = *(i8*)(intptr_t)v10234;
	f11_print(v10235);

	i8 v10236 = (i8)(intptr_t)c02_s01db;
	f11_print(v10236);

	f56_EndError();

	goto c02_0906;

c02_090a:;

c02_0906:;

	i8 v10237 = (i8)+34;
	i8 v10238;
	f31_Alloc(&v10238, v10237);
	i8 v10239 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10239 = v10238;

	i8 v10240 = (i8)(intptr_t)(ws+80);
	i8 v10241 = *(i8*)(intptr_t)v10240;
	i8 v10242 = (i8)(intptr_t)(ws+3000);
	i8 v10243 = *(i8*)(intptr_t)v10242;
	i8 v10244 = v10243+(+8);
	*(i8*)(intptr_t)v10244 = v10241;

	i8 v10245 = (i8)(intptr_t)(ws+2920);
	i8 v10246 = *(i8*)(intptr_t)v10245;
	i8 v10247 = *(i8*)(intptr_t)v10246;
	i8 v10248 = (i8)(intptr_t)(ws+3000);
	i8 v10249 = *(i8*)(intptr_t)v10248;
	*(i8*)(intptr_t)v10249 = v10247;

	i8 v10250 = (i8)(intptr_t)(ws+2920);
	i8 v10251 = *(i8*)(intptr_t)v10250;
	i8 v10252 = *(i8*)(intptr_t)v10251;
	i8 v10253 = v10252+(+40);
	i8 v10254 = *(i8*)(intptr_t)v10253;
	i8 v10255 = (i8)(intptr_t)(ws+3000);
	i8 v10256 = *(i8*)(intptr_t)v10255;
	i8 v10257 = v10256+(+16);
	*(i8*)(intptr_t)v10257 = v10254;

	i8 v10258 = (i8)(intptr_t)(ws+2920);
	i8 v10259 = *(i8*)(intptr_t)v10258;
	i8 v10260 = *(i8*)(intptr_t)v10259;
	i8 v10261 = v10260+(+48);
	i8 v10262 = *(i8*)(intptr_t)v10261;
	i8 v10263 = (i8)(intptr_t)(ws+3000);
	i8 v10264 = *(i8*)(intptr_t)v10263;
	i8 v10265 = v10264+(+24);
	*(i8*)(intptr_t)v10265 = v10262;

	i8 v10266 = (i8)(intptr_t)(ws+3000);
	i8 v10267 = *(i8*)(intptr_t)v10266;
	i8 v10268 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10268 = v10267;

endsub:;
}

// reduce_73 workspace at ws+3000 length ws+0
void f556_reduce_73(void) {

	i8 v10269 = (i8)(intptr_t)(ws+2928);
	i8 v10270 = *(i8*)(intptr_t)v10269;
	i8 v10271 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10271 = v10270;

	i1 v10272 = (i1)+4;
	i8 v10273 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10273, v10272);

endsub:;
}

// reduce_74 workspace at ws+3000 length ws+0
void f557_reduce_74(void) {

	i8 v10274;
	f109_MidEnd(&v10274);
	i8 v10275 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10275 = v10274;

	i1 v10276 = (i1)+4;
	i8 v10277 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10277, v10276);

endsub:;
}

// reduce_75 workspace at ws+3000 length ws+0
void f558_reduce_75(void) {

	i8 v10278 = (i8)(intptr_t)(ws+2920);
	i8 v10279 = *(i8*)(intptr_t)v10278;
	i8 v10280 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10280 = v10279;

endsub:;
}

// reduce_76 workspace at ws+3000 length ws+0
void f559_reduce_76(void) {

	i8 v10281 = (i8)(intptr_t)(ws+2920);
	i8 v10282 = *(i8*)(intptr_t)v10281;
	i8 v10283 = v10282+(+24);
	i8 v10284 = *(i8*)(intptr_t)v10283;
	f140_Discard(v10284);

	i8 v10285 = (i8)(intptr_t)(ws+2936);
	i8 v10286 = *(i8*)(intptr_t)v10285;
	i8 v10287 = (i8)(intptr_t)(ws+2920);
	i8 v10288 = *(i8*)(intptr_t)v10287;
	i8 v10289 = v10288+(+24);
	*(i8*)(intptr_t)v10289 = v10286;

	i8 v10290 = (i8)(intptr_t)(ws+2920);
	i8 v10291 = *(i8*)(intptr_t)v10290;
	i8 v10292 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10292 = v10291;

	i1 v10293 = (i1)+42;
	i8 v10294 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10294, v10293);

endsub:;
}
const i1 c02_s01dc[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };

// reduce_77 workspace at ws+3000 length ws+8
void f560_reduce_77(void) {

	i8 v10295 = (i8)(intptr_t)(ws+80);
	i8 v10296 = *(i8*)(intptr_t)v10295;
	i8 v10297 = v10296+(+16);
	i8 v10298 = *(i8*)(intptr_t)v10297;
	i8 v10299 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10299 = v10298;

	i8 v10300 = (i8)(intptr_t)(ws+3000);
	i8 v10301 = *(i8*)(intptr_t)v10300;
	i8 v10302 = (i8)+0;
	if (v10301==v10302) goto c02_090e; else goto c02_090f;

c02_090e:;

	f55_StartError();

	i8 v10303 = (i8)(intptr_t)c02_s01dc;
	f11_print(v10303);

	i8 v10304 = (i8)(intptr_t)(ws+80);
	i8 v10305 = *(i8*)(intptr_t)v10304;
	i8 v10306 = *(i8*)(intptr_t)v10305;
	i8 v10307 = *(i8*)(intptr_t)v10306;
	f11_print(v10307);

	f56_EndError();

	goto c02_090b;

c02_090f:;

c02_090b:;

	i8 v10308 = (i8)(intptr_t)(ws+80);
	i8 v10309 = *(i8*)(intptr_t)v10308;
	i8 v10310 = v10309+(+16);
	i8 v10311 = *(i8*)(intptr_t)v10310;
	i8 v10312 = v10311+(+16);
	i8 v10313 = *(i8*)(intptr_t)v10312;
	i8 v10314 = (i8)(intptr_t)(ws+80);
	i8 v10315 = *(i8*)(intptr_t)v10314;
	i8 v10316 = v10315+(+16);
	*(i8*)(intptr_t)v10316 = v10313;

	i8 v10317 = (i8)(intptr_t)(ws+2920);
	i8 v10318 = *(i8*)(intptr_t)v10317;
	i8 v10319 = (i8)(intptr_t)(ws+3000);
	i8 v10320 = *(i8*)(intptr_t)v10319;
	i8 v10321 = *(i8*)(intptr_t)v10320;
	f445_CheckExpressionType(v10321, v10318);

	i8 v10322 = (i8)(intptr_t)(ws+3000);
	i8 v10323 = *(i8*)(intptr_t)v10322;
	i8 v10324 = *(i8*)(intptr_t)v10323;
	f193_CheckNotPartialType(v10324);

	i8 v10325 = (i8)(intptr_t)(ws+2920);
	i8 v10326 = *(i8*)(intptr_t)v10325;
	i8 v10327 = v10326+(+16);
	i8 v10328 = *(i8*)(intptr_t)v10327;
	f193_CheckNotPartialType(v10328);

	i8 v10329 = (i8)(intptr_t)(ws+80);
	i8 v10330 = *(i8*)(intptr_t)v10329;
	i8 v10331 = v10330+(+32);
	i1 v10332 = *(i1*)(intptr_t)v10331;
	i1 v10333 = v10332+(+1);
	i8 v10334 = (i8)(intptr_t)(ws+80);
	i8 v10335 = *(i8*)(intptr_t)v10334;
	i8 v10336 = v10335+(+32);
	*(i1*)(intptr_t)v10336 = v10333;

	i8 v10337 = (i8)(intptr_t)(ws+2920);
	i8 v10338 = *(i8*)(intptr_t)v10337;
	i1 v10339;
	f141_NodeWidth(&v10339, v10338);
	i8 v10340;
	f109_MidEnd(&v10340);
	i8 v10341 = (i8)(intptr_t)(ws+2920);
	i8 v10342 = *(i8*)(intptr_t)v10341;
	i8 v10343 = (i8)(intptr_t)(ws+80);
	i8 v10344 = *(i8*)(intptr_t)v10343;
	i8 v10345 = *(i8*)(intptr_t)v10344;
	i8 v10346 = (i8)(intptr_t)(ws+80);
	i8 v10347 = *(i8*)(intptr_t)v10346;
	i8 v10348 = *(i8*)(intptr_t)v10347;
	i8 v10349 = v10348+(+66);
	i1 v10350 = *(i1*)(intptr_t)v10349;
	i8 v10351 = (i8)(intptr_t)(ws+80);
	i8 v10352 = *(i8*)(intptr_t)v10351;
	i8 v10353 = v10352+(+32);
	i1 v10354 = *(i1*)(intptr_t)v10353;
	i1 v10355 = v10350-v10354;
	i8 v10356;
	f92_MidArg(&v10356, v10355, v10345, v10342, v10340, v10339);
	i8 v10357 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10357 = v10356;

endsub:;
}

// reduce_78 workspace at ws+3000 length ws+0
void f561_reduce_78(void) {

	i8 v10358 = (i8)(intptr_t)(ws+2928);
	i8 v10359 = *(i8*)(intptr_t)v10358;
	i8 v10360 = (i8)(intptr_t)(ws+2944);
	i8 v10361 = *(i8*)(intptr_t)v10360;
	i8 v10362;
	f105_MidPair(&v10362, v10361, v10359);
	i8 v10363 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10363 = v10362;

	i1 v10364 = (i1)+42;
	i8 v10365 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v10365, v10364);

	i1 v10366 = (i1)+4;
	i8 v10367 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10367, v10366);

endsub:;
}

// reduce_79 workspace at ws+3000 length ws+0
void f562_reduce_79(void) {

	i8 v10368 = (i8)(intptr_t)(ws+2920);
	i8 v10369 = *(i8*)(intptr_t)v10368;
	i8 v10370 = (i8)+0;
	i8 v10371;
	f105_MidPair(&v10371, v10370, v10369);
	i8 v10372 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10372 = v10371;

endsub:;
}

// reduce_80 workspace at ws+3000 length ws+0
void f563_reduce_80(void) {

	i8 v10373 = (i8)(intptr_t)(ws+2920);
	i8 v10374 = *(i8*)(intptr_t)v10373;
	i8 v10375 = (i8)(intptr_t)(ws+2936);
	i8 v10376 = *(i8*)(intptr_t)v10375;
	i8 v10377;
	f105_MidPair(&v10377, v10376, v10374);
	i8 v10378 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10378 = v10377;

	i1 v10379 = (i1)+42;
	i8 v10380 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10380, v10379);

endsub:;
}

// reduce_81 workspace at ws+3000 length ws+0
void f564_reduce_81(void) {

	i8 v10381 = (i8)(intptr_t)(ws+2920);
	i8 v10382 = *(i8*)(intptr_t)v10381;
	i8 v10383;
	f203_UndoLValue(&v10383, v10382);
	i8 v10384 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10384 = v10383;

endsub:;
}

// reduce_82 workspace at ws+3000 length ws+8
void f565_reduce_82(void) {

	i8 v10385 = (i8)(intptr_t)(ws+40);
	i8 v10386 = *(i8*)(intptr_t)v10385;
	i8 v10387;
	f100_MidEndsub(&v10387, v10386);
	f435_Generate(v10387);

	i8 v10388 = (i8)(intptr_t)(ws+40);
	i8 v10389 = *(i8*)(intptr_t)v10388;
	i8 v10390 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10390 = v10389;

	i8 v10391 = (i8)(intptr_t)(ws+3000);
	i8 v10392 = *(i8*)(intptr_t)v10391;
	i8 v10393 = v10392+(+68);
	i2 v10394 = *(i2*)(intptr_t)v10393;
	i8 v10395 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10395 = v10394;

	i8 v10396 = (i8)(intptr_t)(ws+3000);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	i8 v10398 = v10397+(+70);
	i2 v10399 = *(i2*)(intptr_t)v10398;
	i8 v10400 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10400 = v10399;

	i8 v10401 = (i8)(intptr_t)(ws+3000);
	i8 v10402 = *(i8*)(intptr_t)v10401;
	i8 v10403 = v10402+(+8);
	i8 v10404 = *(i8*)(intptr_t)v10403;
	i8 v10405 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10405 = v10404;

	i8 v10406 = (i8)(intptr_t)(ws+3000);
	i8 v10407 = *(i8*)(intptr_t)v10406;
	f441_DestructSubroutineContents(v10407);

	i1 v10408 = (i1)+10;
	i8 v10409 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10409, v10408);

	i1 v10410 = (i1)+25;
	i8 v10411 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10411, v10410);

endsub:;
}

// reduce_83 workspace at ws+3000 length ws+8
void f566_reduce_83(void) {

	i8 v10412 = (i8)+88;
	i8 v10413;
	f31_Alloc(&v10413, v10412);
	i8 v10414 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10414 = v10413;

	i8 v10415 = (i8)(intptr_t)(ws+2920);
	i8 v10416 = *(i8*)(intptr_t)v10415;
	i8 v10417 = v10416+(+48);
	i8 v10418 = *(i8*)(intptr_t)v10417;
	i8 v10419 = (i8)(intptr_t)(ws+3000);
	i8 v10420 = *(i8*)(intptr_t)v10419;
	*(i8*)(intptr_t)v10420 = v10418;

	i8 v10421 = (i8)(intptr_t)(ws+40);
	i8 v10422 = *(i8*)(intptr_t)v10421;
	i8 v10423 = v10422+(+16);
	i8 v10424 = (i8)(intptr_t)(ws+3000);
	i8 v10425 = *(i8*)(intptr_t)v10424;
	i8 v10426 = v10425+(+32);
	*(i8*)(intptr_t)v10426 = v10423;

	i2 v10427;
	f205_AllocSubrId(&v10427);
	i8 v10428 = (i8)(intptr_t)(ws+3000);
	i8 v10429 = *(i8*)(intptr_t)v10428;
	i8 v10430 = v10429+(+56);
	*(i2*)(intptr_t)v10430 = v10427;

	i8 v10431 = (i8)(intptr_t)(ws+52);
	i2 v10432 = *(i2*)(intptr_t)v10431;
	i8 v10433 = (i8)(intptr_t)(ws+3000);
	i8 v10434 = *(i8*)(intptr_t)v10433;
	i8 v10435 = v10434+(+68);
	*(i2*)(intptr_t)v10435 = v10432;

	i2 v10436 = (i2)+0;
	i8 v10437 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10437 = v10436;

	i8 v10438 = (i8)(intptr_t)(ws+54);
	i2 v10439 = *(i2*)(intptr_t)v10438;
	i8 v10440 = (i8)(intptr_t)(ws+3000);
	i8 v10441 = *(i8*)(intptr_t)v10440;
	i8 v10442 = v10441+(+70);
	*(i2*)(intptr_t)v10442 = v10439;

	i2 v10443 = (i2)+0;
	i8 v10444 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10444 = v10443;

	i1 v10445 = (i1)+25;
	i8 v10446 = (i8)(intptr_t)(ws+2920);
	i8 v10447 = *(i8*)(intptr_t)v10446;
	i8 v10448 = v10447+(+46);
	*(i1*)(intptr_t)v10448 = v10445;

	i8 v10449 = (i8)(intptr_t)(ws+3000);
	i8 v10450 = *(i8*)(intptr_t)v10449;
	i8 v10451 = (i8)(intptr_t)(ws+2920);
	i8 v10452 = *(i8*)(intptr_t)v10451;
	*(i8*)(intptr_t)v10452 = v10450;

	i8 v10453 = (i8)(intptr_t)(ws+3000);
	i8 v10454 = *(i8*)(intptr_t)v10453;
	f174_EmitterDeclareSubroutine(v10454);

	i8 v10455 = (i8)(intptr_t)(ws+40);
	i8 v10456 = *(i8*)(intptr_t)v10455;
	i8 v10457 = (i8)(intptr_t)(ws+3000);
	i8 v10458 = *(i8*)(intptr_t)v10457;
	i8 v10459 = v10458+(+8);
	*(i8*)(intptr_t)v10459 = v10456;

	i8 v10460 = (i8)(intptr_t)(ws+3000);
	i8 v10461 = *(i8*)(intptr_t)v10460;
	i8 v10462 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10462 = v10461;

endsub:;
}

// reduce_84 workspace at ws+3000 length ws+0
void f567_reduce_84(void) {

	i8 v10463 = (i8)(intptr_t)(ws+40);
	i8 v10464 = *(i8*)(intptr_t)v10463;
	i8 v10465;
	f97_MidStartsub(&v10465, v10464);
	f435_Generate(v10465);

endsub:;
}

// reduce_85 workspace at ws+3000 length ws+0
void f568_reduce_85(void) {

	i1 v10466 = (i1)+0;
	i8 v10467 = (i8)(intptr_t)(ws+40);
	i8 v10468 = *(i8*)(intptr_t)v10467;
	i8 v10469 = v10468+(+67);
	*(i1*)(intptr_t)v10469 = v10466;

endsub:;
}

// reduce_86 workspace at ws+3000 length ws+0
void f569_reduce_86(void) {

	i8 v10470 = (i8)(intptr_t)(ws+2920);
	i8 v10471 = *(i8*)(intptr_t)v10470;
	i8 v10472 = (i8)(intptr_t)(ws+40);
	i8 v10473 = *(i8*)(intptr_t)v10472;
	i8 v10474 = v10473+(+48);
	*(i8*)(intptr_t)v10474 = v10471;

	i8 v10475 = (i8)(intptr_t)(ws+2920);
	i8 v10476 = *(i8*)(intptr_t)v10475;
	i1 v10477;
	f79_CountParameters(&v10477, v10476);
	i8 v10478 = (i8)(intptr_t)(ws+40);
	i8 v10479 = *(i8*)(intptr_t)v10478;
	i8 v10480 = v10479+(+67);
	*(i1*)(intptr_t)v10480 = v10477;

	i1 v10481 = (i1)+6;
	i8 v10482 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10482, v10481);

endsub:;
}

// reduce_87 workspace at ws+3000 length ws+0
void f570_reduce_87(void) {

	i8 v10483 = (i8)(intptr_t)(ws+2920);
	i8 v10484 = *(i8*)(intptr_t)v10483;
	i8 v10485 = (i8)(intptr_t)(ws+40);
	i8 v10486 = *(i8*)(intptr_t)v10485;
	i8 v10487 = v10486+(+40);
	*(i8*)(intptr_t)v10487 = v10484;

	i8 v10488 = (i8)(intptr_t)(ws+2920);
	i8 v10489 = *(i8*)(intptr_t)v10488;
	i1 v10490;
	f79_CountParameters(&v10490, v10489);
	i8 v10491 = (i8)(intptr_t)(ws+40);
	i8 v10492 = *(i8*)(intptr_t)v10491;
	i8 v10493 = v10492+(+66);
	*(i1*)(intptr_t)v10493 = v10490;

endsub:;
}

// reduce_88 workspace at ws+3000 length ws+0
void f571_reduce_88(void) {

	i8 v10494 = (i8)+0;
	i8 v10495 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10495 = v10494;

	i1 v10496 = (i1)+4;
	i8 v10497 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10497, v10496);

endsub:;
}

// reduce_89 workspace at ws+3000 length ws+0
void f572_reduce_89(void) {

	i8 v10498 = (i8)(intptr_t)(ws+2928);
	i8 v10499 = *(i8*)(intptr_t)v10498;
	i8 v10500 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10500 = v10499;

	i1 v10501 = (i1)+4;
	i8 v10502 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10502, v10501);

endsub:;
}

// reduce_90 workspace at ws+3000 length ws+0
void f573_reduce_90(void) {

	i8 v10503 = (i8)(intptr_t)(ws+2920);
	i8 v10504 = *(i8*)(intptr_t)v10503;
	i8 v10505 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10505 = v10504;

endsub:;
}

// reduce_91 workspace at ws+3000 length ws+0
void f574_reduce_91(void) {

	i8 v10506 = (i8)(intptr_t)(ws+2920);
	i8 v10507 = *(i8*)(intptr_t)v10506;
	i8 v10508 = (i8)(intptr_t)(ws+2936);
	i8 v10509 = *(i8*)(intptr_t)v10508;
	i8 v10510 = v10509+(+16);
	*(i8*)(intptr_t)v10510 = v10507;

	i8 v10511 = (i8)(intptr_t)(ws+2936);
	i8 v10512 = *(i8*)(intptr_t)v10511;
	i8 v10513 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10513 = v10512;

	i1 v10514 = (i1)+42;
	i8 v10515 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10515, v10514);

endsub:;
}

// reduce_92 workspace at ws+3000 length ws+0
void f575_reduce_92(void) {

	i1 v10516 = (i1)+28;
	i8 v10517 = (i8)(intptr_t)(ws+2936);
	i8 v10518 = *(i8*)(intptr_t)v10517;
	i8 v10519 = v10518+(+46);
	*(i1*)(intptr_t)v10519 = v10516;

	i8 v10520 = (i8)(intptr_t)(ws+2936);
	i8 v10521 = *(i8*)(intptr_t)v10520;
	i8 v10522 = (i8)(intptr_t)(ws+2920);
	i8 v10523 = *(i8*)(intptr_t)v10522;
	f438_InitVariable(v10523, v10521);

	i8 v10524 = (i8)(intptr_t)(ws+2936);
	i8 v10525 = *(i8*)(intptr_t)v10524;
	i8 v10526 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10526 = v10525;

	i1 v10527 = (i1)+6;
	i8 v10528 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10528, v10527);

endsub:;
}

// reduce_93 workspace at ws+3000 length ws+0
void f576_reduce_93(void) {

	i8 v10529 = (i8)(intptr_t)(ws+72);
	i8 v10530 = *(i8*)(intptr_t)v10529;
	i8 v10531 = v10530+(+42);
	i2 v10532 = *(i2*)(intptr_t)v10531;
	i8 v10533 = (i8)(intptr_t)(ws+72);
	i8 v10534 = *(i8*)(intptr_t)v10533;
	i8 v10535 = v10534+(+41);
	i1 v10536 = *(i1*)(intptr_t)v10535;
	i2 v10537;
	f209_ArchAlignUp(&v10537, v10536, v10532);
	i8 v10538 = (i8)(intptr_t)(ws+72);
	i8 v10539 = *(i8*)(intptr_t)v10538;
	i8 v10540 = v10539+(+44);
	*(i2*)(intptr_t)v10540 = v10537;

	i1 v10541 = (i1)+10;
	i8 v10542 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10542, v10541);

	i1 v10543 = (i1)+20;
	i8 v10544 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10544, v10543);

endsub:;
}

// reduce_94 workspace at ws+3000 length ws+0
void f577_reduce_94(void) {

	i8 v10545 = (i8)(intptr_t)(ws+2920);
	i8 v10546 = *(i8*)(intptr_t)v10545;
	i8 v10547 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10547 = v10546;

	i8 v10548 = (i8)(intptr_t)(ws+72);
	i8 v10549 = *(i8*)(intptr_t)v10548;
	i8 v10550 = v10549+(+46);
	i1 v10551 = *(i1*)(intptr_t)v10550;
	i1 v10552 = (i1)+0;
	if (v10551==v10552) goto c02_0916; else goto c02_0917;

c02_0917:;

	i8 v10553 = (i8)(intptr_t)(ws+72);
	i8 v10554 = *(i8*)(intptr_t)v10553;
	i8 v10555 = v10554+(+46);
	i1 v10556 = *(i1*)(intptr_t)v10555;
	i1 v10557 = (i1)+30;
	if (v10556==v10557) goto c02_0916; else goto c02_0915;

c02_0915:;

	f469_SymbolRedeclarationError();

	goto c02_0910;

c02_0916:;

c02_0910:;

	i8 v10558 = (i8)(intptr_t)(ws+72);
	i8 v10559 = *(i8*)(intptr_t)v10558;
	i8 v10560 = v10559+(+40);
	i1 v10561 = *(i1*)(intptr_t)v10560;
	i1 v10562 = (i1)+0;
	if (v10561==v10562) goto c02_091e; else goto c02_091f;

c02_091f:;

	i8 v10563 = (i8)(intptr_t)(ws+72);
	i8 v10564 = *(i8*)(intptr_t)v10563;
	i8 v10565 = v10564+(+40);
	i1 v10566 = *(i1*)(intptr_t)v10565;
	i1 v10567 = (i1)+1;
	if (v10566==v10567) goto c02_091e; else goto c02_091d;

c02_091d:;

	f469_SymbolRedeclarationError();

	goto c02_0918;

c02_091e:;

c02_0918:;

	i1 v10568 = (i1)+30;
	i8 v10569 = (i8)(intptr_t)(ws+72);
	i8 v10570 = *(i8*)(intptr_t)v10569;
	i8 v10571 = v10570+(+46);
	*(i1*)(intptr_t)v10571 = v10568;

	i1 v10572 = (i1)+5;
	i8 v10573 = (i8)(intptr_t)(ws+72);
	i8 v10574 = *(i8*)(intptr_t)v10573;
	i8 v10575 = v10574+(+40);
	*(i1*)(intptr_t)v10575 = v10572;

endsub:;
}
const i1 c02_s01dd[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };

// reduce_95 workspace at ws+3000 length ws+0
void f578_reduce_95(void) {

	i8 v10576 = (i8)(intptr_t)(ws+2920);
	i8 v10577 = *(i8*)(intptr_t)v10576;
	f193_CheckNotPartialType(v10577);

	i8 v10578 = (i8)(intptr_t)(ws+2920);
	i8 v10579 = *(i8*)(intptr_t)v10578;
	i1 v10580;
	f201_IsRecord(&v10580, v10579);
	i1 v10581 = (i1)+0;
	if (v10580==v10581) goto c02_0923; else goto c02_0924;

c02_0923:;

	f55_StartError();

	i8 v10582 = (i8)(intptr_t)(ws+2920);
	i8 v10583 = *(i8*)(intptr_t)v10582;
	i8 v10584 = v10583+(+48);
	i8 v10585 = *(i8*)(intptr_t)v10584;
	f11_print(v10585);

	i8 v10586 = (i8)(intptr_t)c02_s01dd;
	f11_print(v10586);

	f56_EndError();

	goto c02_0920;

c02_0924:;

c02_0920:;

	i8 v10587 = (i8)(intptr_t)(ws+2920);
	i8 v10588 = *(i8*)(intptr_t)v10587;
	i8 v10589 = v10588+(+41);
	i1 v10590 = *(i1*)(intptr_t)v10589;
	i8 v10591 = (i8)(intptr_t)(ws+72);
	i8 v10592 = *(i8*)(intptr_t)v10591;
	i8 v10593 = v10592+(+41);
	*(i1*)(intptr_t)v10593 = v10590;

	i8 v10594 = (i8)(intptr_t)(ws+2920);
	i8 v10595 = *(i8*)(intptr_t)v10594;
	i8 v10596 = v10595+(+42);
	i2 v10597 = *(i2*)(intptr_t)v10596;
	i8 v10598 = (i8)(intptr_t)(ws+72);
	i8 v10599 = *(i8*)(intptr_t)v10598;
	i8 v10600 = v10599+(+42);
	*(i2*)(intptr_t)v10600 = v10597;

	i8 v10601 = (i8)(intptr_t)(ws+2920);
	i8 v10602 = *(i8*)(intptr_t)v10601;
	i8 v10603 = (i8)(intptr_t)(ws+72);
	i8 v10604 = *(i8*)(intptr_t)v10603;
	i8 v10605 = v10604+(+16);
	*(i8*)(intptr_t)v10605 = v10602;

endsub:;
}

// reduce_96 workspace at ws+3000 length ws+0
void f579_reduce_96(void) {

	i8 v10606 = (i8)(intptr_t)(ws+2928);
	i8 v10607 = *(i8*)(intptr_t)v10606;
	f193_CheckNotPartialType(v10607);

	i1 v10608 = (i1)+28;
	i8 v10609 = (i8)(intptr_t)(ws+2952);
	i8 v10610 = *(i8*)(intptr_t)v10609;
	i8 v10611 = v10610+(+46);
	*(i1*)(intptr_t)v10611 = v10608;

	i8 v10612 = (i8)(intptr_t)(ws+2928);
	i8 v10613 = *(i8*)(intptr_t)v10612;
	i8 v10614 = (i8)(intptr_t)(ws+2952);
	i8 v10615 = *(i8*)(intptr_t)v10614;
	*(i8*)(intptr_t)v10615 = v10613;

	i8 v10616 = (i8)(intptr_t)(ws+72);
	i8 v10617 = *(i8*)(intptr_t)v10616;
	i8 v10618 = v10617+(+41);
	i1 v10619 = *(i1*)(intptr_t)v10618;
	i8 v10620 = (i8)(intptr_t)(ws+2928);
	i8 v10621 = *(i8*)(intptr_t)v10620;
	i8 v10622 = v10621+(+41);
	i1 v10623 = *(i1*)(intptr_t)v10622;
	if (v10619<v10623) goto c02_0928; else goto c02_0929;

c02_0928:;

	i8 v10624 = (i8)(intptr_t)(ws+2928);
	i8 v10625 = *(i8*)(intptr_t)v10624;
	i8 v10626 = v10625+(+41);
	i1 v10627 = *(i1*)(intptr_t)v10626;
	i8 v10628 = (i8)(intptr_t)(ws+72);
	i8 v10629 = *(i8*)(intptr_t)v10628;
	i8 v10630 = v10629+(+41);
	*(i1*)(intptr_t)v10630 = v10627;

	goto c02_0925;

c02_0929:;

c02_0925:;

	i8 v10631 = (i8)(intptr_t)(ws+72);
	i8 v10632 = *(i8*)(intptr_t)v10631;
	i8 v10633 = (i8)(intptr_t)(ws+2952);
	i8 v10634 = *(i8*)(intptr_t)v10633;
	i8 v10635 = (i8)(intptr_t)(ws+2944);
	i2 v10636 = *(i2*)(intptr_t)v10635;
	f213_ArchInitMember(v10636, v10634, v10632);

	i1 v10637 = (i1)+6;
	i8 v10638 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v10638, v10637);

	i1 v10639 = (i1)+22;
	i8 v10640 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10640, v10639);

endsub:;
}

// reduce_97 workspace at ws+3000 length ws+0
void f580_reduce_97(void) {

	i8 v10641 = (i8)(intptr_t)(ws+72);
	i8 v10642 = *(i8*)(intptr_t)v10641;
	i8 v10643 = v10642+(+42);
	i2 v10644 = *(i2*)(intptr_t)v10643;
	i8 v10645 = (i8)(intptr_t)(ws+2912);
	*(i2*)(intptr_t)v10645 = v10644;

endsub:;
}

// reduce_98 workspace at ws+3000 length ws+0
void f581_reduce_98(void) {

	i8 v10646 = (i8)(intptr_t)(ws+2928);
	i4 v10647 = *(i4*)(intptr_t)v10646;
	i2 v10648 = (s2)(s4)v10647;
	i8 v10649 = (i8)(intptr_t)(ws+2912);
	*(i2*)(intptr_t)v10649 = v10648;

	i1 v10650 = (i1)+16;
	i8 v10651 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v10651, v10650);

	i1 v10652 = (i1)+4;
	i8 v10653 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10653, v10652);

endsub:;
}

// reduce_99 workspace at ws+3000 length ws+0
void f582_reduce_99(void) {

	i8 v10654 = (i8)(intptr_t)(ws+72);
	i8 v10655 = *(i8*)(intptr_t)v10654;
	i8 v10656 = (i8)(intptr_t)(ws+2920);
	i8 v10657 = *(i8*)(intptr_t)v10656;
	i8 v10658;
	f190_AddSymbol(&v10658, v10657, v10655);
	i8 v10659 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10659 = v10658;

	i8 v10660 = (i8)(intptr_t)(ws+72);
	i8 v10661 = *(i8*)(intptr_t)v10660;
	i8 v10662 = v10661+(+24);
	i1 v10663 = *(i1*)(intptr_t)v10662;
	i1 v10664 = v10663+(+1);
	i8 v10665 = (i8)(intptr_t)(ws+72);
	i8 v10666 = *(i8*)(intptr_t)v10665;
	i8 v10667 = v10666+(+24);
	*(i1*)(intptr_t)v10667 = v10664;

endsub:;
}

// reduce_100 workspace at ws+3000 length ws+0
void f583_reduce_100(void) {

	f471_CheckEndOfInitialiser();

	i8 v10668;
	f128_MidEndinit(&v10668);
	f435_Generate(v10668);

	i1 v10669 = (i1)+31;
	i8 v10670 = (i8)(intptr_t)(ws+2944);
	f476_yy_destructor(v10670, v10669);

	i1 v10671 = (i1)+32;
	i8 v10672 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10672, v10671);

	i1 v10673 = (i1)+22;
	i8 v10674 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10674, v10673);

endsub:;
}
const i1 c02_s01de[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
const i1 c02_s01df[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };

// reduce_101 workspace at ws+3000 length ws+16
void f584_reduce_101(void) {

	i8 v10675 = (i8)(intptr_t)(ws+2928);
	i8 v10676 = *(i8*)(intptr_t)v10675;
	f193_CheckNotPartialType(v10676);

	i1 v10677 = (i1)+28;
	i8 v10678 = (i8)(intptr_t)(ws+2944);
	i8 v10679 = *(i8*)(intptr_t)v10678;
	i8 v10680 = v10679+(+46);
	*(i1*)(intptr_t)v10680 = v10677;

	i8 v10681 = (i8)(intptr_t)(ws+2928);
	i8 v10682 = *(i8*)(intptr_t)v10681;
	i8 v10683 = (i8)(intptr_t)(ws+2944);
	i8 v10684 = *(i8*)(intptr_t)v10683;
	*(i8*)(intptr_t)v10684 = v10682;

	i8 v10685 = (i8)(intptr_t)(ws+40);
	i8 v10686 = *(i8*)(intptr_t)v10685;
	i8 v10687 = (i8)(intptr_t)(ws+2944);
	i8 v10688 = *(i8*)(intptr_t)v10687;
	i8 v10689 = v10688+(+8);
	*(i8*)(intptr_t)v10689 = v10686;

	i8 v10690 = (i8)+8;
	i8 v10691;
	f31_Alloc(&v10691, v10690);
	i8 v10692 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10692 = v10691;

	i8 v10693 = (i8)(intptr_t)(ws+3000);
	i8 v10694 = *(i8*)(intptr_t)v10693;
	i8 v10695 = (i8)(intptr_t)(ws+2944);
	i8 v10696 = *(i8*)(intptr_t)v10695;
	i8 v10697 = v10696+(+24);
	*(i8*)(intptr_t)v10697 = v10694;

	i1 v10698 = (i1)+3;
	i8 v10699 = (i8)(intptr_t)(ws+3000);
	i8 v10700 = *(i8*)(intptr_t)v10699;
	*(i1*)(intptr_t)v10700 = v10698;

	i1 v10701 = (i1)+97;
	i8 v10702 = (i8)(intptr_t)(ws+3000);
	i8 v10703 = *(i8*)(intptr_t)v10702;
	i8 v10704 = v10703+(+1);
	*(i1*)(intptr_t)v10704 = v10701;

	i2 v10705;
	f204_AllocLabel(&v10705);
	i4 v10706 = v10705;
	i1 v10707 = (i1)+16;
	i8 v10708 = (i8)(intptr_t)(ws+3000);
	i8 v10709 = *(i8*)(intptr_t)v10708;
	i8 v10710 = v10709+(+2);
	i8 v10711;
	f13_UIToA(&v10711, v10710, v10707, v10706);
	i8 v10712 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10712 = v10711;

	i8 v10713 = (i8)(intptr_t)(ws+2928);
	i8 v10714 = *(i8*)(intptr_t)v10713;
	i1 v10715;
	f196_IsArray(&v10715, v10714);
	i1 v10716 = (i1)+0;
	if (v10715==v10716) goto c02_0931; else goto c02_0930;

c02_0931:;

	i8 v10717 = (i8)(intptr_t)(ws+2928);
	i8 v10718 = *(i8*)(intptr_t)v10717;
	i1 v10719;
	f201_IsRecord(&v10719, v10718);
	i1 v10720 = (i1)+0;
	if (v10719==v10720) goto c02_092f; else goto c02_0930;

c02_092f:;

	i8 v10721 = (i8)(intptr_t)c02_s01de;
	f57_SimpleError(v10721);

	goto c02_092a;

c02_0930:;

c02_092a:;

	i8 v10722 = (i8)(intptr_t)(ws+2928);
	i8 v10723 = *(i8*)(intptr_t)v10722;
	i1 v10724;
	f201_IsRecord(&v10724, v10723);
	i1 v10725 = (i1)+0;
	if (v10724==v10725) goto c02_0938; else goto c02_0939;

c02_0939:;

	i8 v10726 = (i8)(intptr_t)(ws+2928);
	i8 v10727 = *(i8*)(intptr_t)v10726;
	i8 v10728 = v10727+(+16);
	i8 v10729 = *(i8*)(intptr_t)v10728;
	i8 v10730 = (i8)+0;
	if (v10729==v10730) goto c02_0938; else goto c02_0937;

c02_0937:;

	i8 v10731 = (i8)(intptr_t)c02_s01df;
	f57_SimpleError(v10731);

	goto c02_0932;

c02_0938:;

c02_0932:;

	i8 v10732 = (i8)(intptr_t)(ws+2928);
	i8 v10733 = *(i8*)(intptr_t)v10732;
	i1 v10734;
	f201_IsRecord(&v10734, v10733);
	i1 v10735 = (i1)+0;
	if (v10734==v10735) goto c02_093e; else goto c02_093d;

c02_093d:;

	i8 v10736 = (i8)(intptr_t)(ws+2928);
	i8 v10737 = *(i8*)(intptr_t)v10736;
	i8 v10738 = *(i8*)(intptr_t)v10737;
	i8 v10739 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10739 = v10738;

	goto c02_093a;

c02_093e:;

c02_093a:;

	i8 v10740 = (i8)(intptr_t)(ws+2928);
	i8 v10741 = *(i8*)(intptr_t)v10740;
	i8 v10742 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10742 = v10741;

	i2 v10743 = (i2)+0;
	i8 v10744 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10744 = v10743;

	i2 v10745 = (i2)+0;
	i8 v10746 = (i8)(intptr_t)(ws+1234);
	*(i2*)(intptr_t)v10746 = v10745;

	i8 v10747 = (i8)(intptr_t)(ws+2944);
	i8 v10748 = *(i8*)(intptr_t)v10747;
	i8 v10749;
	f123_MidStartinit(&v10749, v10748);
	f435_Generate(v10749);

	i1 v10750 = (i1)+6;
	i8 v10751 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v10751, v10750);

	i1 v10752 = (i1)+2;
	i8 v10753 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10753, v10752);

endsub:;
}
const i1 c02_s01e0[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
const i1 c02_s01e1[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };

// reduce_102 workspace at ws+3000 length ws+18
void f585_reduce_102(void) {

	i8 v10754;
	i8 v10755;
	f475_GetInitedMemberChecked(&v10754, &v10755);

	i8 v10756 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10756 = v10755;

	i8 v10757 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10757 = v10754;

	i8 v10758 = (i8)(intptr_t)(ws+3008);
	i8 v10759 = *(i8*)(intptr_t)v10758;
	i8 v10760 = v10759+(+41);
	i1 v10761 = *(i1*)(intptr_t)v10760;
	f473_AlignTo(v10761);

	i8 v10762 = (i8)(intptr_t)(ws+3008);
	i8 v10763 = *(i8*)(intptr_t)v10762;
	i8 v10764 = v10763+(+42);
	i2 v10765 = *(i2*)(intptr_t)v10764;
	i8 v10766 = (i8)(intptr_t)(ws+3016);
	*(i2*)(intptr_t)v10766 = v10765;

	i8 v10767 = (i8)(intptr_t)(ws+2920);
	i8 v10768 = *(i8*)(intptr_t)v10767;
	i8 v10769 = v10768+(+66);
	i1 v10770 = *(i1*)(intptr_t)v10769;

	if (v10770 != +40) goto c02_0940;

	i8 v10771 = (i8)(intptr_t)(ws+3008);
	i8 v10772 = *(i8*)(intptr_t)v10771;
	i1 v10773;
	f198_IsNum(&v10773, v10772);
	i1 v10774 = (i1)+0;
	if (v10773==v10774) goto c02_0944; else goto c02_0945;

c02_0944:;

	i8 v10775 = (i8)(intptr_t)c02_s01e0;
	f57_SimpleError(v10775);

	goto c02_0941;

c02_0945:;

c02_0941:;

	i8 v10776 = (i8)(intptr_t)(ws+3016);
	i2 v10777 = *(i2*)(intptr_t)v10776;
	i1 v10778 = v10777;
	i8 v10779 = (i8)(intptr_t)(ws+2920);
	i8 v10780 = *(i8*)(intptr_t)v10779;
	i4 v10781 = *(i4*)(intptr_t)v10780;
	i8 v10782;
	f117_MidInit(&v10782, v10781, v10778);
	f435_Generate(v10782);

	goto c02_093f;

c02_0940:;

	if (v10770 != +41) goto c02_0946;

	i8 v10783 = (i8)(intptr_t)(ws+3008);
	i8 v10784 = *(i8*)(intptr_t)v10783;
	i1 v10785;
	f197_IsPtr(&v10785, v10784);
	i1 v10786 = (i1)+0;
	if (v10785==v10786) goto c02_094c; else goto c02_094e;

c02_094e:;

	i8 v10787 = (i8)(intptr_t)(ws+3008);
	i8 v10788 = *(i8*)(intptr_t)v10787;
	i8 v10789 = *(i8*)(intptr_t)v10788;
	i8 v10790 = (i8)(intptr_t)(ws+1040);
	i8 v10791 = *(i8*)(intptr_t)v10790;
	if (v10789==v10791) goto c02_094d; else goto c02_094c;

c02_094c:;

	i8 v10792 = (i8)(intptr_t)c02_s01e1;
	f57_SimpleError(v10792);

	goto c02_0947;

c02_094d:;

c02_0947:;

	i8 v10793 = (i8)(intptr_t)(ws+2920);
	i8 v10794 = *(i8*)(intptr_t)v10793;
	i8 v10795 = *(i8*)(intptr_t)v10794;
	i8 v10796;
	f135_MidInits(&v10796, v10795);
	f435_Generate(v10796);

	goto c02_093f;

c02_0946:;

	f466_parser_i_constant_error();

c02_093f:;


	i8 v10797 = (i8)(intptr_t)(ws+2920);
	i8 v10798 = *(i8*)(intptr_t)v10797;
	f140_Discard(v10798);

	i8 v10799 = (i8)(intptr_t)(ws+1232);
	i2 v10800 = *(i2*)(intptr_t)v10799;
	i8 v10801 = (i8)(intptr_t)(ws+3016);
	i2 v10802 = *(i2*)(intptr_t)v10801;
	i2 v10803 = v10800+v10802;
	i8 v10804 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10804 = v10803;

	i8 v10805 = (i8)(intptr_t)(ws+1234);
	i2 v10806 = *(i2*)(intptr_t)v10805;
	i8 v10807 = (i8)(intptr_t)(ws+3016);
	i2 v10808 = *(i2*)(intptr_t)v10807;
	i2 v10809 = v10806+v10808;
	i8 v10810 = (i8)(intptr_t)(ws+1234);
	*(i2*)(intptr_t)v10810 = v10809;

endsub:;
}

// reduce_103 workspace at ws+3000 length ws+0
void f586_reduce_103(void) {

	f471_CheckEndOfInitialiser();

	i8 v10811 = (i8)(intptr_t)(ws+2936);
	i8 v10812 = *(i8*)(intptr_t)v10811;
	i8 v10813 = *(i8*)(intptr_t)v10812;
	i8 v10814 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10814 = v10813;

	i8 v10815 = (i8)(intptr_t)(ws+2936);
	i8 v10816 = *(i8*)(intptr_t)v10815;
	i8 v10817 = v10816+(+8);
	i8 v10818 = *(i8*)(intptr_t)v10817;
	i8 v10819 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10819 = v10818;

	i8 v10820 = (i8)(intptr_t)(ws+2936);
	i8 v10821 = *(i8*)(intptr_t)v10820;
	i8 v10822 = v10821+(+16);
	i2 v10823 = *(i2*)(intptr_t)v10822;
	i8 v10824 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10824 = v10823;

	i8 v10825 = (i8)(intptr_t)(ws+2936);
	i8 v10826 = *(i8*)(intptr_t)v10825;
	f32_Free(v10826);

	i1 v10827 = (i1)+32;
	i8 v10828 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10828, v10827);

endsub:;
}
const i1 c02_s01e2[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };

// reduce_104 workspace at ws+3000 length ws+16
void f587_reduce_104(void) {

	i8 v10829;
	i8 v10830;
	f475_GetInitedMemberChecked(&v10829, &v10830);

	i8 v10831 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10831 = v10830;

	i8 v10832 = (i8)(intptr_t)(ws+3000);
	*(i8*)(intptr_t)v10832 = v10829;

	i8 v10833 = (i8)(intptr_t)(ws+3008);
	i8 v10834 = *(i8*)(intptr_t)v10833;
	i8 v10835 = v10834+(+41);
	i1 v10836 = *(i1*)(intptr_t)v10835;
	f473_AlignTo(v10836);

	i8 v10837 = (i8)+18;
	i8 v10838;
	f31_Alloc(&v10838, v10837);
	i8 v10839 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v10839 = v10838;

	i8 v10840 = (i8)(intptr_t)(ws+72);
	i8 v10841 = *(i8*)(intptr_t)v10840;
	i8 v10842 = (i8)(intptr_t)(ws+2912);
	i8 v10843 = *(i8*)(intptr_t)v10842;
	*(i8*)(intptr_t)v10843 = v10841;

	i8 v10844 = (i8)(intptr_t)(ws+1224);
	i8 v10845 = *(i8*)(intptr_t)v10844;
	i8 v10846 = (i8)(intptr_t)(ws+2912);
	i8 v10847 = *(i8*)(intptr_t)v10846;
	i8 v10848 = v10847+(+8);
	*(i8*)(intptr_t)v10848 = v10845;

	i8 v10849 = (i8)(intptr_t)(ws+1232);
	i2 v10850 = *(i2*)(intptr_t)v10849;
	i8 v10851 = (i8)(intptr_t)(ws+2912);
	i8 v10852 = *(i8*)(intptr_t)v10851;
	i8 v10853 = v10852+(+16);
	*(i2*)(intptr_t)v10853 = v10850;

	i8 v10854 = (i8)(intptr_t)(ws+3008);
	i8 v10855 = *(i8*)(intptr_t)v10854;
	i8 v10856 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10856 = v10855;

	i2 v10857 = (i2)+0;
	i8 v10858 = (i8)(intptr_t)(ws+1232);
	*(i2*)(intptr_t)v10858 = v10857;

	i8 v10859 = (i8)(intptr_t)(ws+3008);
	i8 v10860 = *(i8*)(intptr_t)v10859;
	i1 v10861;
	f201_IsRecord(&v10861, v10860);
	i1 v10862 = (i1)+0;
	if (v10861==v10862) goto c02_0953; else goto c02_0952;

c02_0952:;

	i8 v10863 = (i8)(intptr_t)(ws+3008);
	i8 v10864 = *(i8*)(intptr_t)v10863;
	i8 v10865 = *(i8*)(intptr_t)v10864;
	i8 v10866 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10866 = v10865;

	goto c02_094f;

c02_0953:;

	i8 v10867 = (i8)(intptr_t)(ws+3008);
	i8 v10868 = *(i8*)(intptr_t)v10867;
	i1 v10869;
	f196_IsArray(&v10869, v10868);
	i1 v10870 = (i1)+0;
	if (v10869==v10870) goto c02_0957; else goto c02_0956;

c02_0956:;

	i8 v10871 = (i8)+0;
	i8 v10872 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10872 = v10871;

	goto c02_094f;

c02_0957:;

	i8 v10873 = (i8)(intptr_t)c02_s01e2;
	f57_SimpleError(v10873);

c02_094f:;

endsub:;
}

// reduce_105 workspace at ws+3000 length ws+0
void f588_reduce_105(void) {

	i8 v10874;
	f130_MidAsmend(&v10874);
	f435_Generate(v10874);

	i1 v10875 = (i1)+22;
	i8 v10876 = (i8)(intptr_t)(ws+2920);
	f476_yy_destructor(v10876, v10875);

endsub:;
}

// reduce_106 workspace at ws+3000 length ws+0
void f589_reduce_106(void) {

	i8 v10877;
	f85_MidAsmstart(&v10877);
	f435_Generate(v10877);

endsub:;
}

// reduce_107 workspace at ws+3000 length ws+0
void f590_reduce_107(void) {

	i8 v10878 = (i8)(intptr_t)(ws+2920);
	i8 v10879 = *(i8*)(intptr_t)v10878;
	i8 v10880;
	f114_MidAsmtext(&v10880, v10879);
	f435_Generate(v10880);

	i8 v10881 = (i8)(intptr_t)(ws+2920);
	i8 v10882 = *(i8*)(intptr_t)v10881;
	f32_Free(v10882);

endsub:;
}

// reduce_108 workspace at ws+3000 length ws+0
void f591_reduce_108(void) {

	i8 v10883 = (i8)(intptr_t)(ws+2920);
	i4 v10884 = *(i4*)(intptr_t)v10883;
	i8 v10885;
	f139_MidAsmvalue(&v10885, v10884);
	f435_Generate(v10885);

endsub:;
}
const i1 c02_s01e3[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };

// reduce_109 workspace at ws+3000 length ws+1
void f592_reduce_109(void) {

	i8 v10886 = (i8)(intptr_t)(ws+2920);
	i8 v10887 = *(i8*)(intptr_t)v10886;
	i8 v10888 = v10887+(+46);
	i1 v10889 = *(i1*)(intptr_t)v10888;
	i8 v10890 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v10890 = v10889;

	i8 v10891 = (i8)(intptr_t)(ws+3000);
	i1 v10892 = *(i1*)(intptr_t)v10891;
	i1 v10893 = (i1)+28;
	if (v10892==v10893) goto c02_095d; else goto c02_095f;

c02_095f:;

	i8 v10894 = (i8)(intptr_t)(ws+3000);
	i1 v10895 = *(i1*)(intptr_t)v10894;
	i1 v10896 = (i1)+25;
	if (v10895==v10896) goto c02_095d; else goto c02_095e;

c02_095d:;

	i8 v10897 = (i8)(intptr_t)(ws+3000);
	i1 v10898 = *(i1*)(intptr_t)v10897;
	i1 v10899 = (i1)+25;
	if (v10898==v10899) goto c02_0963; else goto c02_0964;

c02_0963:;

	i8 v10900 = (i8)(intptr_t)(ws+40);
	i8 v10901 = *(i8*)(intptr_t)v10900;
	i8 v10902 = (i8)(intptr_t)(ws+2920);
	i8 v10903 = *(i8*)(intptr_t)v10902;
	i8 v10904 = *(i8*)(intptr_t)v10903;
	f176_EmitterReferenceSubroutine(v10904, v10901);

	goto c02_0960;

c02_0964:;

c02_0960:;

	i8 v10905 = (i8)(intptr_t)(ws+2920);
	i8 v10906 = *(i8*)(intptr_t)v10905;
	i8 v10907;
	f134_MidAsmsymbol(&v10907, v10906);
	f435_Generate(v10907);

	goto c02_0958;

c02_095e:;

	i8 v10908 = (i8)(intptr_t)(ws+3000);
	i1 v10909 = *(i1*)(intptr_t)v10908;
	i1 v10910 = (i1)+7;
	if (v10909==v10910) goto c02_0967; else goto c02_0968;

c02_0967:;

	i8 v10911 = (i8)(intptr_t)(ws+2920);
	i8 v10912 = *(i8*)(intptr_t)v10911;
	i4 v10913 = *(i4*)(intptr_t)v10912;
	i8 v10914;
	f139_MidAsmvalue(&v10914, v10913);
	f435_Generate(v10914);

	goto c02_0958;

c02_0968:;

	i8 v10915 = (i8)(intptr_t)c02_s01e3;
	f57_SimpleError(v10915);

c02_0958:;

endsub:;
}

// reduce_116 workspace at ws+3000 length ws+0
void f593_reduce_116(void) {

	i1 v10916 = (i1)+26;
	i8 v10917 = (i8)(intptr_t)(ws+2936);
	f476_yy_destructor(v10917, v10916);

endsub:;
}

// reduce_124 workspace at ws+3000 length ws+0
void f594_reduce_124(void) {

	i1 v10918 = (i1)+42;
	i8 v10919 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10919, v10918);

endsub:;
}

// reduce_127 workspace at ws+3000 length ws+0
void f595_reduce_127(void) {

	i1 v10920 = (i1)+42;
	i8 v10921 = (i8)(intptr_t)(ws+2928);
	f476_yy_destructor(v10921, v10920);

endsub:;
}

// yy_reduce workspace at ws+2904 length ws+94
void f482_yy_reduce(i2* p8834 /* yyact */, i1 p8835 /* yylookahead */, i2 p8836 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+2904) = p8836; /*yyruleno */
	*(i1*)(intptr_t)(ws+2906) = p8835; /*yylookahead */

	i8 v8837 = (i8)(intptr_t)(((i1*)c02_a82e+0));
	i8 v8838 = (i8)(intptr_t)(ws+2904);
	i2 v8839 = *(i2*)(intptr_t)v8838;
	i1 v8840 = v8839;
	i8 v8841 = v8840;
	i8 v8842 = v8837+v8841;
	i1 v8843 = *(i1*)(intptr_t)v8842;
	i8 v8844 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v8844 = v8843;

	i8 v8845 = (i8)(intptr_t)(ws+1240);
	i8 v8846 = *(i8*)(intptr_t)v8845;
	i8 v8847 = (i8)(intptr_t)(ws+2848);
	if (v8846==v8847) goto c02_0832; else goto c02_0833;

c02_0832:;

	f480_yy_stack_overflow();

	goto c02_082f;

c02_0833:;

c02_082f:;

	i8 v8848 = (i8)(intptr_t)(ws+2920);
	i8 v8849 = (i8)(intptr_t)(ws+2984);
	*(i8*)(intptr_t)v8849 = v8848;

	i8 v8850 = (i8)(intptr_t)(ws+2910);
	i1 v8851 = *(i1*)(intptr_t)v8850;
	i8 v8852 = (i8)(intptr_t)(ws+2992);
	*(i1*)(intptr_t)v8852 = v8851;

c02_0836:;

	i8 v8853 = (i8)(intptr_t)(ws+2992);
	i1 v8854 = *(i1*)(intptr_t)v8853;
	i1 v8855 = (i1)+0;
	if (v8854==v8855) goto c02_0839; else goto c02_0838;

c02_0838:;

	i8 v8856 = (i8)(intptr_t)(ws+1240);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	i8 v8858 = v8857+(+8);
	i8 v8859 = *(i8*)(intptr_t)v8858;
	i8 v8860 = (i8)(intptr_t)(ws+2984);
	i8 v8861 = *(i8*)(intptr_t)v8860;
	*(i8*)(intptr_t)v8861 = v8859;

	i8 v8862 = (i8)(intptr_t)(ws+1240);
	i8 v8863 = *(i8*)(intptr_t)v8862;
	i8 v8864 = v8863+(-16);
	i8 v8865 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v8865 = v8864;

	i8 v8866 = (i8)(intptr_t)(ws+2984);
	i8 v8867 = *(i8*)(intptr_t)v8866;
	i8 v8868 = v8867+(+8);
	i8 v8869 = (i8)(intptr_t)(ws+2984);
	*(i8*)(intptr_t)v8869 = v8868;

	i8 v8870 = (i8)(intptr_t)(ws+2992);
	i1 v8871 = *(i1*)(intptr_t)v8870;
	i1 v8872 = v8871+(-1);
	i8 v8873 = (i8)(intptr_t)(ws+2992);
	*(i1*)(intptr_t)v8873 = v8872;

	goto c02_0836;

c02_0839:;


















































































































	i8 v10922 = (i8)(intptr_t)(ws+2904);
	i2 v10923 = *(i2*)(intptr_t)v10922;

	if (v10923 != +0) goto c02_096a;

	f483_reduce_0();

	goto c02_0969;

c02_096a:;

	if (v10923 != +1) goto c02_096b;

	f484_reduce_1();

	goto c02_0969;

c02_096b:;

	if (v10923 != +2) goto c02_096c;

	f485_reduce_2();

	goto c02_0969;

c02_096c:;

	if (v10923 != +3) goto c02_096d;

	f486_reduce_3();

	goto c02_0969;

c02_096d:;

	if (v10923 != +4) goto c02_096e;

	f487_reduce_4();

	goto c02_0969;

c02_096e:;

	if (v10923 != +5) goto c02_096f;

	f488_reduce_5();

	goto c02_0969;

c02_096f:;

	if (v10923 != +6) goto c02_0970;

	f489_reduce_6();

	goto c02_0969;

c02_0970:;

	if (v10923 != +7) goto c02_0971;

	f490_reduce_7();

	goto c02_0969;

c02_0971:;

	if (v10923 != +8) goto c02_0972;

	f491_reduce_8();

	goto c02_0969;

c02_0972:;

	if (v10923 != +9) goto c02_0973;

	f492_reduce_9();

	goto c02_0969;

c02_0973:;

	if (v10923 != +10) goto c02_0974;

	f493_reduce_10();

	goto c02_0969;

c02_0974:;

	if (v10923 != +11) goto c02_0975;

	f494_reduce_11();

	goto c02_0969;

c02_0975:;

	if (v10923 != +12) goto c02_0976;

	f495_reduce_12();

	goto c02_0969;

c02_0976:;

	if (v10923 != +13) goto c02_0977;

	f496_reduce_13();

	goto c02_0969;

c02_0977:;

	if (v10923 != +14) goto c02_0978;

	f497_reduce_14();

	goto c02_0969;

c02_0978:;

	if (v10923 != +15) goto c02_0979;

	f498_reduce_15();

	goto c02_0969;

c02_0979:;

	if (v10923 != +16) goto c02_097a;

	f499_reduce_16();

	goto c02_0969;

c02_097a:;

	if (v10923 != +17) goto c02_097b;

	f500_reduce_17();

	goto c02_0969;

c02_097b:;

	if (v10923 != +18) goto c02_097c;

	f501_reduce_18();

	goto c02_0969;

c02_097c:;

	if (v10923 != +19) goto c02_097d;

	f502_reduce_19();

	goto c02_0969;

c02_097d:;

	if (v10923 != +20) goto c02_097e;

	f503_reduce_20();

	goto c02_0969;

c02_097e:;

	if (v10923 != +21) goto c02_097f;

	f504_reduce_21();

	goto c02_0969;

c02_097f:;

	if (v10923 != +22) goto c02_0980;

	f505_reduce_22();

	goto c02_0969;

c02_0980:;

	if (v10923 != +23) goto c02_0981;

	f506_reduce_23();

	goto c02_0969;

c02_0981:;

	if (v10923 != +24) goto c02_0982;

	f507_reduce_24();

	goto c02_0969;

c02_0982:;

	if (v10923 != +25) goto c02_0983;

	f508_reduce_25();

	goto c02_0969;

c02_0983:;

	if (v10923 != +26) goto c02_0984;

	f509_reduce_26();

	goto c02_0969;

c02_0984:;

	if (v10923 != +27) goto c02_0985;

	f510_reduce_27();

	goto c02_0969;

c02_0985:;

	if (v10923 != +28) goto c02_0986;

	f511_reduce_28();

	goto c02_0969;

c02_0986:;

	if (v10923 != +29) goto c02_0987;

	f512_reduce_29();

	goto c02_0969;

c02_0987:;

	if (v10923 != +30) goto c02_0988;

	f513_reduce_30();

	goto c02_0969;

c02_0988:;

	if (v10923 != +31) goto c02_0989;

	f514_reduce_31();

	goto c02_0969;

c02_0989:;

	if (v10923 != +32) goto c02_098a;

	f515_reduce_32();

	goto c02_0969;

c02_098a:;

	if (v10923 != +33) goto c02_098b;

	f516_reduce_33();

	goto c02_0969;

c02_098b:;

	if (v10923 != +34) goto c02_098c;

	f517_reduce_34();

	goto c02_0969;

c02_098c:;

	if (v10923 != +35) goto c02_098d;

	f518_reduce_35();

	goto c02_0969;

c02_098d:;

	if (v10923 != +36) goto c02_098e;

	f519_reduce_36();

	goto c02_0969;

c02_098e:;

	if (v10923 != +37) goto c02_098f;

	f520_reduce_37();

	goto c02_0969;

c02_098f:;

	if (v10923 != +38) goto c02_0990;

	f521_reduce_38();

	goto c02_0969;

c02_0990:;

	if (v10923 != +39) goto c02_0991;

	f522_reduce_39();

	goto c02_0969;

c02_0991:;

	if (v10923 != +40) goto c02_0992;

	f523_reduce_40();

	goto c02_0969;

c02_0992:;

	if (v10923 != +41) goto c02_0993;

	f524_reduce_41();

	goto c02_0969;

c02_0993:;

	if (v10923 != +42) goto c02_0994;

	f525_reduce_42();

	goto c02_0969;

c02_0994:;

	if (v10923 != +43) goto c02_0995;

	f526_reduce_43();

	goto c02_0969;

c02_0995:;

	if (v10923 != +44) goto c02_0996;

	f527_reduce_44();

	goto c02_0969;

c02_0996:;

	if (v10923 != +45) goto c02_0997;

	f528_reduce_45();

	goto c02_0969;

c02_0997:;

	if (v10923 != +46) goto c02_0998;

	f529_reduce_46();

	goto c02_0969;

c02_0998:;

	if (v10923 != +47) goto c02_0999;

	f530_reduce_47();

	goto c02_0969;

c02_0999:;

	if (v10923 != +48) goto c02_099a;

	f531_reduce_48();

	goto c02_0969;

c02_099a:;

	if (v10923 != +49) goto c02_099b;

	f532_reduce_49();

	goto c02_0969;

c02_099b:;

	if (v10923 != +50) goto c02_099c;

	f533_reduce_50();

	goto c02_0969;

c02_099c:;

	if (v10923 != +51) goto c02_099d;

	f534_reduce_51();

	goto c02_0969;

c02_099d:;

	if (v10923 != +52) goto c02_099e;

	f535_reduce_52();

	goto c02_0969;

c02_099e:;

	if (v10923 != +53) goto c02_099f;

	f536_reduce_53();

	goto c02_0969;

c02_099f:;

	if (v10923 != +54) goto c02_09a0;

	f537_reduce_54();

	goto c02_0969;

c02_09a0:;

	if (v10923 != +55) goto c02_09a1;

	f538_reduce_55();

	goto c02_0969;

c02_09a1:;

	if (v10923 != +56) goto c02_09a2;

	f539_reduce_56();

	goto c02_0969;

c02_09a2:;

	if (v10923 != +57) goto c02_09a3;

	f540_reduce_57();

	goto c02_0969;

c02_09a3:;

	if (v10923 != +58) goto c02_09a4;

	f541_reduce_58();

	goto c02_0969;

c02_09a4:;

	if (v10923 != +59) goto c02_09a5;

	f542_reduce_59();

	goto c02_0969;

c02_09a5:;

	if (v10923 != +60) goto c02_09a6;

	f543_reduce_60();

	goto c02_0969;

c02_09a6:;

	if (v10923 != +61) goto c02_09a7;

	f544_reduce_61();

	goto c02_0969;

c02_09a7:;

	if (v10923 != +62) goto c02_09a8;

	f545_reduce_62();

	goto c02_0969;

c02_09a8:;

	if (v10923 != +63) goto c02_09a9;

	f546_reduce_63();

	goto c02_0969;

c02_09a9:;

	if (v10923 != +64) goto c02_09aa;

	f547_reduce_64();

	goto c02_0969;

c02_09aa:;

	if (v10923 != +65) goto c02_09ab;

	f548_reduce_65();

	goto c02_0969;

c02_09ab:;

	if (v10923 != +66) goto c02_09ac;

	f549_reduce_66();

	goto c02_0969;

c02_09ac:;

	if (v10923 != +67) goto c02_09ad;

	f550_reduce_67();

	goto c02_0969;

c02_09ad:;

	if (v10923 != +68) goto c02_09ae;

	f551_reduce_68();

	goto c02_0969;

c02_09ae:;

	if (v10923 != +69) goto c02_09af;

	f552_reduce_69();

	goto c02_0969;

c02_09af:;

	if (v10923 != +70) goto c02_09b0;

	f553_reduce_70();

	goto c02_0969;

c02_09b0:;

	if (v10923 != +71) goto c02_09b1;

	f554_reduce_71();

	goto c02_0969;

c02_09b1:;

	if (v10923 != +72) goto c02_09b2;

	f555_reduce_72();

	goto c02_0969;

c02_09b2:;

	if (v10923 != +73) goto c02_09b3;

	f556_reduce_73();

	goto c02_0969;

c02_09b3:;

	if (v10923 != +74) goto c02_09b4;

	f557_reduce_74();

	goto c02_0969;

c02_09b4:;

	if (v10923 != +75) goto c02_09b5;

	f558_reduce_75();

	goto c02_0969;

c02_09b5:;

	if (v10923 != +76) goto c02_09b6;

	f559_reduce_76();

	goto c02_0969;

c02_09b6:;

	if (v10923 != +77) goto c02_09b7;

	f560_reduce_77();

	goto c02_0969;

c02_09b7:;

	if (v10923 != +78) goto c02_09b8;

	f561_reduce_78();

	goto c02_0969;

c02_09b8:;

	if (v10923 != +79) goto c02_09b9;

	f562_reduce_79();

	goto c02_0969;

c02_09b9:;

	if (v10923 != +80) goto c02_09ba;

	f563_reduce_80();

	goto c02_0969;

c02_09ba:;

	if (v10923 != +81) goto c02_09bb;

	f564_reduce_81();

	goto c02_0969;

c02_09bb:;

	if (v10923 != +82) goto c02_09bc;

	f565_reduce_82();

	goto c02_0969;

c02_09bc:;

	if (v10923 != +83) goto c02_09bd;

	f566_reduce_83();

	goto c02_0969;

c02_09bd:;

	if (v10923 != +84) goto c02_09be;

	f567_reduce_84();

	goto c02_0969;

c02_09be:;

	if (v10923 != +85) goto c02_09bf;

	f568_reduce_85();

	goto c02_0969;

c02_09bf:;

	if (v10923 != +86) goto c02_09c0;

	f569_reduce_86();

	goto c02_0969;

c02_09c0:;

	if (v10923 != +87) goto c02_09c1;

	f570_reduce_87();

	goto c02_0969;

c02_09c1:;

	if (v10923 != +88) goto c02_09c2;

	f571_reduce_88();

	goto c02_0969;

c02_09c2:;

	if (v10923 != +89) goto c02_09c3;

	f572_reduce_89();

	goto c02_0969;

c02_09c3:;

	if (v10923 != +90) goto c02_09c4;

	f573_reduce_90();

	goto c02_0969;

c02_09c4:;

	if (v10923 != +91) goto c02_09c5;

	f574_reduce_91();

	goto c02_0969;

c02_09c5:;

	if (v10923 != +92) goto c02_09c6;

	f575_reduce_92();

	goto c02_0969;

c02_09c6:;

	if (v10923 != +93) goto c02_09c7;

	f576_reduce_93();

	goto c02_0969;

c02_09c7:;

	if (v10923 != +94) goto c02_09c8;

	f577_reduce_94();

	goto c02_0969;

c02_09c8:;

	if (v10923 != +95) goto c02_09c9;

	f578_reduce_95();

	goto c02_0969;

c02_09c9:;

	if (v10923 != +96) goto c02_09ca;

	f579_reduce_96();

	goto c02_0969;

c02_09ca:;

	if (v10923 != +97) goto c02_09cb;

	f580_reduce_97();

	goto c02_0969;

c02_09cb:;

	if (v10923 != +98) goto c02_09cc;

	f581_reduce_98();

	goto c02_0969;

c02_09cc:;

	if (v10923 != +99) goto c02_09cd;

	f582_reduce_99();

	goto c02_0969;

c02_09cd:;

	if (v10923 != +100) goto c02_09ce;

	f583_reduce_100();

	goto c02_0969;

c02_09ce:;

	if (v10923 != +101) goto c02_09cf;

	f584_reduce_101();

	goto c02_0969;

c02_09cf:;

	if (v10923 != +102) goto c02_09d0;

	f585_reduce_102();

	goto c02_0969;

c02_09d0:;

	if (v10923 != +103) goto c02_09d1;

	f586_reduce_103();

	goto c02_0969;

c02_09d1:;

	if (v10923 != +104) goto c02_09d2;

	f587_reduce_104();

	goto c02_0969;

c02_09d2:;

	if (v10923 != +105) goto c02_09d3;

	f588_reduce_105();

	goto c02_0969;

c02_09d3:;

	if (v10923 != +106) goto c02_09d4;

	f589_reduce_106();

	goto c02_0969;

c02_09d4:;

	if (v10923 != +107) goto c02_09d5;

	f590_reduce_107();

	goto c02_0969;

c02_09d5:;

	if (v10923 != +108) goto c02_09d6;

	f591_reduce_108();

	goto c02_0969;

c02_09d6:;

	if (v10923 != +109) goto c02_09d7;

	f592_reduce_109();

	goto c02_0969;

c02_09d7:;

	if (v10923 != +116) goto c02_09d8;

	f593_reduce_116();

	goto c02_0969;

c02_09d8:;

	if (v10923 != +124) goto c02_09d9;

	f594_reduce_124();

	goto c02_0969;

c02_09d9:;

	if (v10923 != +127) goto c02_09da;

	f595_reduce_127();

	goto c02_0969;

c02_09da:;

c02_0969:;


	i8 v10924 = (i8)(intptr_t)(ws+2912);
	i8 v10925 = *(i8*)(intptr_t)v10924;
	i8 v10926 = (i8)(intptr_t)(ws+1240);
	i8 v10927 = *(i8*)(intptr_t)v10926;
	i8 v10928 = v10927+(+24);
	*(i8*)(intptr_t)v10928 = v10925;

	i8 v10929 = (i8)(intptr_t)(((i1*)c02_a82d+0));
	i8 v10930 = (i8)(intptr_t)(ws+2904);
	i2 v10931 = *(i2*)(intptr_t)v10930;
	i1 v10932 = v10931;
	i8 v10933 = v10932;
	i8 v10934 = v10929+v10933;
	i1 v10935 = *(i1*)(intptr_t)v10934;
	i8 v10936 = (i8)(intptr_t)(ws+2993);
	*(i1*)(intptr_t)v10936 = v10935;

	i8 v10937 = (i8)(intptr_t)(ws+1240);
	i8 v10938 = *(i8*)(intptr_t)v10937;
	i2 v10939 = *(i2*)(intptr_t)v10938;
	i8 v10940 = (i8)(intptr_t)(ws+2994);
	*(i2*)(intptr_t)v10940 = v10939;

	i8 v10941 = (i8)(intptr_t)(((i1*)c02_a815+0));
	i8 v10942 = (i8)(intptr_t)(ws+2994);
	i2 v10943 = *(i2*)(intptr_t)v10942;
	i1 v10944 = v10943;
	i8 v10945 = v10944;
	i1 v10946 = (i1)+1;
	i8 v10947 = ((i8)v10945)<<v10946;
	i8 v10948 = v10941+v10947;
	i2 v10949 = *(i2*)(intptr_t)v10948;
	i8 v10950 = (i8)(intptr_t)(ws+2908);
	*(i2*)(intptr_t)v10950 = v10949;

	i2 v10951 = (i2)+98;
	i8 v10952 = (i8)(intptr_t)(ws+2994);
	i2 v10953 = *(i2*)(intptr_t)v10952;
	if (v10951<v10953) goto c02_09df; else goto c02_09de;

c02_09de:;

	i8 v10954 = (i8)(intptr_t)(((i1*)c02_a814+0));
	i8 v10955 = (i8)(intptr_t)(ws+2994);
	i2 v10956 = *(i2*)(intptr_t)v10955;
	i1 v10957 = v10956;
	i8 v10958 = v10957;
	i1 v10959 = (i1)+1;
	i8 v10960 = ((i8)v10958)<<v10959;
	i8 v10961 = v10954+v10960;
	i2 v10962 = *(i2*)(intptr_t)v10961;
	i8 v10963 = (i8)(intptr_t)(ws+2993);
	i1 v10964 = *(i1*)(intptr_t)v10963;
	i2 v10965 = v10964;
	i2 v10966 = v10962+v10965;
	i8 v10967 = (i8)(intptr_t)(ws+2996);
	*(i2*)(intptr_t)v10967 = v10966;

	i8 v10968 = (i8)(intptr_t)(ws+2996);
	i2 v10969 = *(i2*)(intptr_t)v10968;
	i2 v10970 = (i2)+0;
	if (v10969<v10970) goto c02_09e8; else goto c02_09ea;

c02_09ea:;

	i8 v10971 = (i8)(intptr_t)(ws+2996);
	i2 v10972 = *(i2*)(intptr_t)v10971;
	i2 v10973 = (i2)+937;
	if (v10972<v10973) goto c02_09e9; else goto c02_09e8;

c02_09e9:;

	i8 v10974 = (i8)(intptr_t)(((i1*)c02_a812+0));
	i8 v10975 = (i8)(intptr_t)(ws+2996);
	i2 v10976 = *(i2*)(intptr_t)v10975;
	i8 v10977 = v10976;
	i8 v10978 = v10974+v10977;
	i1 v10979 = *(i1*)(intptr_t)v10978;
	i8 v10980 = (i8)(intptr_t)(ws+2993);
	i1 v10981 = *(i1*)(intptr_t)v10980;
	if (v10979==v10981) goto c02_09e7; else goto c02_09e8;

c02_09e7:;

	i8 v10982 = (i8)(intptr_t)(((i1*)c02_a811+0));
	i8 v10983 = (i8)(intptr_t)(ws+2996);
	i2 v10984 = *(i2*)(intptr_t)v10983;
	i8 v10985 = v10984;
	i1 v10986 = (i1)+1;
	i8 v10987 = ((i8)v10985)<<v10986;
	i8 v10988 = v10982+v10987;
	i2 v10989 = *(i2*)(intptr_t)v10988;
	i8 v10990 = (i8)(intptr_t)(ws+2908);
	*(i2*)(intptr_t)v10990 = v10989;

	goto c02_09e0;

c02_09e8:;

c02_09e0:;

	goto c02_09db;

c02_09df:;

c02_09db:;

	i8 v10991 = (i8)(intptr_t)(ws+1240);
	i8 v10992 = *(i8*)(intptr_t)v10991;
	i8 v10993 = v10992+(+16);
	i8 v10994 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v10994 = v10993;

	i8 v10995 = (i8)(intptr_t)(ws+2908);
	i2 v10996 = *(i2*)(intptr_t)v10995;
	i8 v10997 = (i8)(intptr_t)(ws+1240);
	i8 v10998 = *(i8*)(intptr_t)v10997;
	*(i2*)(intptr_t)v10998 = v10996;

	i8 v10999 = (i8)(intptr_t)(ws+2993);
	i1 v11000 = *(i1*)(intptr_t)v10999;
	i8 v11001 = (i8)(intptr_t)(ws+1240);
	i8 v11002 = *(i8*)(intptr_t)v11001;
	i8 v11003 = v11002+(+2);
	*(i1*)(intptr_t)v11003 = v11000;

endsub:;
	*p8834 = *(i2*)(intptr_t)(ws+2908);
}

// yy_parse_failed workspace at ws+2904 length ws+0
void f596_yy_parse_failed(void) {

	f479_yy_pop_all_parser_stack();

endsub:;
}
const i1 c02_s01e4[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };

// yy_syntax_error workspace at ws+2904 length ws+16
void f597_yy_syntax_error(i8 p11004 /* yyminor */, i1 p11005 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2904) = p11005; /*yymajor */
	*(i8*)(intptr_t)(ws+2912) = p11004; /*yyminor */

	f55_StartError();

	i8 v11006 = (i8)(intptr_t)c02_s01e4;
	f11_print(v11006);

	i8 v11007 = (i8)(intptr_t)(((i1*)c02_a816+0));
	i8 v11008 = (i8)(intptr_t)(ws+2904);
	i1 v11009 = *(i1*)(intptr_t)v11008;
	i8 v11010 = v11009;
	i1 v11011 = (i1)+3;
	i8 v11012 = ((i8)v11010)<<v11011;
	i8 v11013 = v11007+v11012;
	i8 v11014 = *(i8*)(intptr_t)v11013;
	f11_print(v11014);

	f56_EndError();

endsub:;
}

// yy_accept workspace at ws+2904 length ws+0
void f598_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+2880 length ws+0
void f599_ParserInit(void) {

	i1 v11015 = (i1)-1;
	i8 v11016 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11016 = v11015;

	i8 v11017 = (i8)(intptr_t)(ws+1248);
	i8 v11018 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11018 = v11017;

	i2 v11019 = (i2)+0;
	i8 v11020 = (i8)(intptr_t)(ws+1248);
	*(i2*)(intptr_t)v11020 = v11019;

	i1 v11021 = (i1)+0;
	i8 v11022 = (i8)(intptr_t)(ws+1250);
	*(i1*)(intptr_t)v11022 = v11021;

endsub:;
}

// ParserDeinit workspace at ws+2880 length ws+0
void f600_ParserDeinit(void) {

c02_09ed:;

	i8 v11023 = (i8)(intptr_t)(ws+1240);
	i8 v11024 = *(i8*)(intptr_t)v11023;
	i8 v11025 = (i8)(intptr_t)(ws+1248);
	if (v11024==v11025) goto c02_09f0; else goto c02_09ef;

c02_09ef:;

	f478_yy_pop_parser_stack();

	goto c02_09ed;

c02_09f0:;

endsub:;
}

// ParserFeedToken workspace at ws+2880 length ws+20
void f601_ParserFeedToken(i8 p11026 /* yyminor */, i1 p11027 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2880) = p11027; /*yymajor */
	*(i8*)(intptr_t)(ws+2888) = p11026; /*yyminor */

	i8 v11028 = (i8)(intptr_t)(ws+1240);
	i8 v11029 = *(i8*)(intptr_t)v11028;
	i2 v11030 = *(i2*)(intptr_t)v11029;
	i8 v11031 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11031 = v11030;

c02_09f1:;

	i2 v11032 = (i2)+194;
	i8 v11033 = (i8)(intptr_t)(ws+2896);
	i2 v11034 = *(i2*)(intptr_t)v11033;
	if (v11032<v11034) goto c02_09f7; else goto c02_09f6;

c02_09f6:;

	i8 v11035 = (i8)(intptr_t)(((i1*)c02_a813+0));
	i8 v11036 = (i8)(intptr_t)(ws+2896);
	i2 v11037 = *(i2*)(intptr_t)v11036;
	i1 v11038 = v11037;
	i8 v11039 = v11038;
	i1 v11040 = (i1)+1;
	i8 v11041 = ((i8)v11039)<<v11040;
	i8 v11042 = v11035+v11041;
	i2 v11043 = *(i2*)(intptr_t)v11042;
	i8 v11044 = (i8)(intptr_t)(ws+2880);
	i1 v11045 = *(i1*)(intptr_t)v11044;
	i2 v11046 = v11045;
	i2 v11047 = v11043+v11046;
	i8 v11048 = (i8)(intptr_t)(ws+2898);
	*(i2*)(intptr_t)v11048 = v11047;

	i8 v11049 = (i8)(intptr_t)(((i1*)c02_a812+0));
	i8 v11050 = (i8)(intptr_t)(ws+2898);
	i2 v11051 = *(i2*)(intptr_t)v11050;
	i8 v11052 = v11051;
	i8 v11053 = v11049+v11052;
	i1 v11054 = *(i1*)(intptr_t)v11053;
	i8 v11055 = (i8)(intptr_t)(ws+2880);
	i1 v11056 = *(i1*)(intptr_t)v11055;
	if (v11054==v11056) goto c02_09fc; else goto c02_09fb;

c02_09fb:;

	i8 v11057 = (i8)(intptr_t)(((i1*)c02_a815+0));
	i8 v11058 = (i8)(intptr_t)(ws+2896);
	i2 v11059 = *(i2*)(intptr_t)v11058;
	i1 v11060 = v11059;
	i8 v11061 = v11060;
	i1 v11062 = (i1)+1;
	i8 v11063 = ((i8)v11061)<<v11062;
	i8 v11064 = v11057+v11063;
	i2 v11065 = *(i2*)(intptr_t)v11064;
	i8 v11066 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11066 = v11065;

	goto c02_09f8;

c02_09fc:;

	i8 v11067 = (i8)(intptr_t)(((i1*)c02_a811+0));
	i8 v11068 = (i8)(intptr_t)(ws+2898);
	i2 v11069 = *(i2*)(intptr_t)v11068;
	i8 v11070 = v11069;
	i1 v11071 = (i1)+1;
	i8 v11072 = ((i8)v11070)<<v11071;
	i8 v11073 = v11067+v11072;
	i2 v11074 = *(i2*)(intptr_t)v11073;
	i8 v11075 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11075 = v11074;

c02_09f8:;

	goto c02_09f3;

c02_09f7:;

c02_09f3:;

	i8 v11076 = (i8)(intptr_t)(ws+2896);
	i2 v11077 = *(i2*)(intptr_t)v11076;
	i2 v11078 = (i2)+404;
	if (v11077<v11078) goto c02_0a01; else goto c02_0a00;

c02_0a00:;

	i8 v11079 = (i8)(intptr_t)(ws+2896);
	i2 v11080 = *(i2*)(intptr_t)v11079;
	i2 v11081 = v11080+(-404);
	i8 v11082 = (i8)(intptr_t)(ws+2880);
	i1 v11083 = *(i1*)(intptr_t)v11082;
	i2 v11084;
	f482_yy_reduce(&v11084, v11083, v11081);
	i8 v11085 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11085 = v11084;

	goto c02_09fd;

c02_0a01:;

	i2 v11086 = (i2)+400;
	i8 v11087 = (i8)(intptr_t)(ws+2896);
	i2 v11088 = *(i2*)(intptr_t)v11087;
	if (v11086<v11088) goto c02_0a05; else goto c02_0a04;

c02_0a04:;

	i8 v11089 = (i8)(intptr_t)(ws+1240);
	i8 v11090 = *(i8*)(intptr_t)v11089;
	i8 v11091 = (i8)(intptr_t)(ws+2848);
	if (v11090==v11091) goto c02_0a09; else goto c02_0a0a;

c02_0a09:;

	f480_yy_stack_overflow();

	goto endsub;

c02_0a0a:;

c02_0a06:;

	i8 v11092 = (i8)(intptr_t)(ws+1240);
	i8 v11093 = *(i8*)(intptr_t)v11092;
	i8 v11094 = v11093+(+16);
	i8 v11095 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11095 = v11094;

	i2 v11096 = (i2)+194;
	i8 v11097 = (i8)(intptr_t)(ws+2896);
	i2 v11098 = *(i2*)(intptr_t)v11097;
	if (v11096<v11098) goto c02_0a0e; else goto c02_0a0f;

c02_0a0e:;

	i8 v11099 = (i8)(intptr_t)(ws+2896);
	i2 v11100 = *(i2*)(intptr_t)v11099;
	i2 v11101 = v11100+(+131);
	i8 v11102 = (i8)(intptr_t)(ws+2896);
	*(i2*)(intptr_t)v11102 = v11101;

	goto c02_0a0b;

c02_0a0f:;

c02_0a0b:;

	i8 v11103 = (i8)(intptr_t)(ws+2896);
	i2 v11104 = *(i2*)(intptr_t)v11103;
	i8 v11105 = (i8)(intptr_t)(ws+1240);
	i8 v11106 = *(i8*)(intptr_t)v11105;
	*(i2*)(intptr_t)v11106 = v11104;

	i8 v11107 = (i8)(intptr_t)(ws+2880);
	i1 v11108 = *(i1*)(intptr_t)v11107;
	i8 v11109 = (i8)(intptr_t)(ws+1240);
	i8 v11110 = *(i8*)(intptr_t)v11109;
	i8 v11111 = v11110+(+2);
	*(i1*)(intptr_t)v11111 = v11108;

	i8 v11112 = (i8)(intptr_t)(ws+2888);
	i8 v11113 = *(i8*)(intptr_t)v11112;
	i8 v11114 = *(i8*)(intptr_t)v11113;
	i8 v11115 = (i8)(intptr_t)(ws+1240);
	i8 v11116 = *(i8*)(intptr_t)v11115;
	i8 v11117 = v11116+(+8);
	*(i8*)(intptr_t)v11117 = v11114;

	i8 v11118 = (i8)(intptr_t)(ws+2864);
	i1 v11119 = *(i1*)(intptr_t)v11118;
	i1 v11120 = (i1)+0;
	if ((s1)v11119<(s1)v11120) goto c02_0a14; else goto c02_0a13;

c02_0a13:;

	i8 v11121 = (i8)(intptr_t)(ws+2864);
	i1 v11122 = *(i1*)(intptr_t)v11121;
	i1 v11123 = v11122+(-1);
	i8 v11124 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11124 = v11123;

	goto c02_0a10;

c02_0a14:;

c02_0a10:;

	goto c02_09f2;

c02_0a05:;

	i8 v11125 = (i8)(intptr_t)(ws+2896);
	i2 v11126 = *(i2*)(intptr_t)v11125;
	i2 v11127 = (i2)+402;
	if (v11126==v11127) goto c02_0a17; else goto c02_0a18;

c02_0a17:;

	i8 v11128 = (i8)(intptr_t)(ws+1240);
	i8 v11129 = *(i8*)(intptr_t)v11128;
	i8 v11130 = v11129+(-16);
	i8 v11131 = (i8)(intptr_t)(ws+1240);
	*(i8*)(intptr_t)v11131 = v11130;

	f598_yy_accept();

	goto c02_09f2;

c02_0a18:;

	i1 v11132 = (i1)+0;
	i8 v11133 = (i8)(intptr_t)(ws+2864);
	i1 v11134 = *(i1*)(intptr_t)v11133;
	if ((s1)v11132<(s1)v11134) goto c02_0a1d; else goto c02_0a1c;

c02_0a1c:;

	i8 v11135 = (i8)(intptr_t)(ws+2880);
	i1 v11136 = *(i1*)(intptr_t)v11135;
	i8 v11137 = (i8)(intptr_t)(ws+2888);
	i8 v11138 = *(i8*)(intptr_t)v11137;
	f597_yy_syntax_error(v11138, v11136);

	goto c02_0a19;

c02_0a1d:;

c02_0a19:;

	i1 v11139 = (i1)+3;
	i8 v11140 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11140 = v11139;

	i8 v11141 = (i8)(intptr_t)(ws+2880);
	i1 v11142 = *(i1*)(intptr_t)v11141;
	i8 v11143 = (i8)(intptr_t)(ws+2888);
	i8 v11144 = *(i8*)(intptr_t)v11143;
	f476_yy_destructor(v11144, v11142);

	i8 v11145 = (i8)(intptr_t)(ws+2880);
	i1 v11146 = *(i1*)(intptr_t)v11145;
	i1 v11147 = (i1)+0;
	if (v11146==v11147) goto c02_0a21; else goto c02_0a22;

c02_0a21:;

	f596_yy_parse_failed();

	i1 v11148 = (i1)-1;
	i8 v11149 = (i8)(intptr_t)(ws+2864);
	*(i1*)(intptr_t)v11149 = v11148;

	goto c02_0a1e;

c02_0a22:;

c02_0a1e:;

	goto c02_09f2;

c02_09fd:;

	i8 v11150 = (i8)(intptr_t)(ws+1240);
	i8 v11151 = *(i8*)(intptr_t)v11150;
	i8 v11152 = (i8)(intptr_t)(ws+1248);
	if (v11151==v11152) goto c02_0a26; else goto c02_0a27;

c02_0a26:;

	goto c02_09f2;

c02_0a27:;

c02_0a23:;

	goto c02_09f1;

c02_09f2:;

endsub:;
}
const i1 c02_s01e5[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

// PrintFreeMemory workspace at ws+2880 length ws+0
void f602_PrintFreeMemory(void) {

	i8 v11153;
	f35_GetFreeMemory(&v11153);
	i1 v11154 = (i1)+10;
	i8 v11155 = ((i8)v11153)>>v11154;
	i2 v11156 = v11155;
	f16_print_i16(v11156);

	i8 v11157 = (i8)(intptr_t)c02_s01e5;
	f11_print(v11157);

endsub:;
}
const i1 c02_s01e6[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };

// SyntaxError workspace at ws+2888 length ws+0
void f603_SyntaxError(void) {

	i8 v11158 = (i8)(intptr_t)c02_s01e6;
	f11_print(v11158);

	f6_ExitWithError();

endsub:;
}

// ParseArguments workspace at ws+2880 length ws+8
void f604_ParseArguments(void) {

	f23_ArgvInit();

c02_0a28:;

	i8 v11159;
	f24_ArgvNext(&v11159);
	i8 v11160 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11160 = v11159;

	i8 v11161 = (i8)(intptr_t)(ws+2880);
	i8 v11162 = *(i8*)(intptr_t)v11161;
	i8 v11163 = (i8)+0;
	if (v11162==v11163) goto c02_0a2d; else goto c02_0a2e;

c02_0a2d:;

	goto c02_0a29;

c02_0a2e:;

c02_0a2a:;

	i8 v11164 = (i8)(intptr_t)(ws+2880);
	i8 v11165 = *(i8*)(intptr_t)v11164;
	i1 v11166 = *(i1*)(intptr_t)v11165;
	i1 v11167 = (i1)+45;
	if (v11166==v11167) goto c02_0a32; else goto c02_0a33;

c02_0a32:;

	i8 v11168 = (i8)(intptr_t)(ws+2880);
	i8 v11169 = *(i8*)(intptr_t)v11168;
	i8 v11170 = v11169+(+1);
	i8 v11171 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11171 = v11170;

	i8 v11172 = (i8)(intptr_t)(ws+2880);
	i8 v11173 = *(i8*)(intptr_t)v11172;
	i1 v11174 = *(i1*)(intptr_t)v11173;
	i1 v11175 = (i1)+73;
	if (v11174==v11175) goto c02_0a37; else goto c02_0a38;

c02_0a37:;

	i8 v11176 = (i8)(intptr_t)(ws+2880);
	i8 v11177 = *(i8*)(intptr_t)v11176;
	i8 v11178 = v11177+(+1);
	i8 v11179 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11179 = v11178;

	i8 v11180 = (i8)(intptr_t)(ws+2880);
	i8 v11181 = *(i8*)(intptr_t)v11180;
	f58_LexerAddIncludePath(v11181);

	goto c02_0a34;

c02_0a38:;

	f603_SyntaxError();

c02_0a34:;

	goto c02_0a2f;

c02_0a33:;

	i8 v11182 = (i8)(intptr_t)(ws+24);
	i8 v11183 = *(i8*)(intptr_t)v11182;
	i8 v11184 = (i8)+0;
	if (v11183==v11184) goto c02_0a3c; else goto c02_0a3d;

c02_0a3c:;

	i8 v11185 = (i8)(intptr_t)(ws+2880);
	i8 v11186 = *(i8*)(intptr_t)v11185;
	i8 v11187 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11187 = v11186;

	goto c02_0a39;

c02_0a3d:;

	i8 v11188 = (i8)(intptr_t)(ws+32);
	i8 v11189 = *(i8*)(intptr_t)v11188;
	i8 v11190 = (i8)+0;
	if (v11189==v11190) goto c02_0a40; else goto c02_0a41;

c02_0a40:;

	i8 v11191 = (i8)(intptr_t)(ws+2880);
	i8 v11192 = *(i8*)(intptr_t)v11191;
	i8 v11193 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11193 = v11192;

	goto c02_0a39;

c02_0a41:;

	f603_SyntaxError();

c02_0a39:;

c02_0a2f:;

	goto c02_0a28;

c02_0a29:;

	i8 v11194 = (i8)(intptr_t)(ws+24);
	i8 v11195 = *(i8*)(intptr_t)v11194;
	i8 v11196 = (i8)+0;
	if (v11195==v11196) goto c02_0a47; else goto c02_0a49;

c02_0a49:;

	i8 v11197 = (i8)(intptr_t)(ws+32);
	i8 v11198 = *(i8*)(intptr_t)v11197;
	i8 v11199 = (i8)+0;
	if (v11198==v11199) goto c02_0a47; else goto c02_0a48;

c02_0a47:;

	f603_SyntaxError();

	goto c02_0a42;

c02_0a48:;

c02_0a42:;

endsub:;
}
const i1 c02_s01e7[] = { 0x43,0x4f,0x57,0x43,0x4f,0x4d,0x3a,0x20,0 };
const i1 c02_s01e8[] = { 0 };
const i1 c02_s01e9[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
const i1 c02_s01ea[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };

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



































































































































	i8 v4142 = (i8)(intptr_t)(ws+856);
	i8 v4143 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v4143 = v4142;






	i2 v4238 = (i2)+1;
	i8 v4239 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4239 = v4238;

	i8 v4240 = (i8)+0;
	i8 v4241 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v4241 = v4240;






























	i2 v4960 = (i2)+0;
	i8 v4961 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v4961 = v4960;


	i1 v5007 = (i1)+0;
	i8 v5008 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5008 = v5007;




















	i1 v7518 = (i1)+0;
	i8 v7519 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v7519 = v7518;




























































	i8 v11200 = (i8)(intptr_t)c02_s01e7;
	f11_print(v11200);

	f602_PrintFreeMemory();

	f604_ParseArguments();

	i8 v11201 = (i8)(intptr_t)c02_s01e8;
	f58_LexerAddIncludePath(v11201);

	i8 v11202 = (i8)(intptr_t)(ws+24);
	i8 v11203 = *(i8*)(intptr_t)v11202;
	f62_LexerIncludeFile(v11203);

	i8 v11204 = (i8)+88;
	i8 v11205;
	f31_Alloc(&v11205, v11204);
	i8 v11206 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v11206 = v11205;

	i8 v11207 = (i8)(intptr_t)c02_s01e9;
	i8 v11208 = (i8)(intptr_t)(ws+40);
	i8 v11209 = *(i8*)(intptr_t)v11208;
	*(i8*)(intptr_t)v11209 = v11207;

	f210_ArchInitTypes();

	i8 v11210 = (i8)(intptr_t)(ws+32);
	i8 v11211 = *(i8*)(intptr_t)v11210;
	f172_EmitterOpenfile(v11211);

	i8 v11212 = (i8)(intptr_t)(ws+40);
	i8 v11213 = *(i8*)(intptr_t)v11212;
	f174_EmitterDeclareSubroutine(v11213);

	i8 v11214;
	f120_MidStartfile(&v11214);
	f435_Generate(v11214);

	i8 v11215 = (i8)(intptr_t)(ws+40);
	i8 v11216 = *(i8*)(intptr_t)v11215;
	i8 v11217;
	f97_MidStartsub(&v11217, v11216);
	f435_Generate(v11217);

	f599_ParserInit();

c02_0a4a:;

	i1 v11218;
	f63_LexerReadToken(&v11218);
	i8 v11219 = (i8)(intptr_t)(ws+2865);
	*(i1*)(intptr_t)v11219 = v11218;

	i8 v11220 = (i8)(intptr_t)(ws+2865);
	i1 v11221 = *(i1*)(intptr_t)v11220;

	if (v11221 != +34) goto c02_0a4d;

	i8 v11222 = (i8)(intptr_t)(ws+236);
	i4 v11223 = *(i4*)(intptr_t)v11222;
	i8 v11224 = (i8)(intptr_t)(ws+2872);
	*(i4*)(intptr_t)v11224 = v11223;

	goto c02_0a4c;

c02_0a4d:;

	if (v11221 != +33) goto c02_0a4e;

	i8 v11225 = (i8)(intptr_t)(ws+105);
	i8 v11226;
	f33_StrDup(&v11226, v11225);
	i8 v11227 = (i8)(intptr_t)(ws+2872);
	*(i8*)(intptr_t)v11227 = v11226;

	goto c02_0a4c;

c02_0a4e:;

	if (v11221 != +41) goto c02_0a4f;

	i8 v11228 = (i8)(intptr_t)(ws+105);
	i8 v11229;
	f33_StrDup(&v11229, v11228);
	i8 v11230 = (i8)(intptr_t)(ws+2872);
	*(i8*)(intptr_t)v11230 = v11229;

	goto c02_0a4c;

c02_0a4f:;

	i4 v11231 = (i4)+0;
	i8 v11232 = (i8)(intptr_t)(ws+2872);
	*(i4*)(intptr_t)v11232 = v11231;

c02_0a4c:;


	i8 v11233 = (i8)(intptr_t)(ws+2865);
	i1 v11234 = *(i1*)(intptr_t)v11233;
	i8 v11235 = (i8)(intptr_t)(ws+2872);
	f601_ParserFeedToken(v11235, v11234);

	i8 v11236 = (i8)(intptr_t)(ws+2865);
	i1 v11237 = *(i1*)(intptr_t)v11236;
	i1 v11238 = (i1)+0;
	if (v11237==v11238) goto c02_0a53; else goto c02_0a54;

c02_0a53:;

	goto c02_0a4b;

c02_0a54:;

c02_0a50:;

	goto c02_0a4a;

c02_0a4b:;

	f600_ParserDeinit();

	i8 v11239 = (i8)(intptr_t)(ws+40);
	i8 v11240 = *(i8*)(intptr_t)v11239;
	i8 v11241;
	f100_MidEndsub(&v11241, v11240);
	f435_Generate(v11241);

	i8 v11242;
	f95_MidEndfile(&v11242);
	f435_Generate(v11242);

	f173_EmitterClosefile();

	i8 v11243 = (i8)(intptr_t)c02_s01ea;
	f11_print(v11243);

	f602_PrintFreeMemory();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                     