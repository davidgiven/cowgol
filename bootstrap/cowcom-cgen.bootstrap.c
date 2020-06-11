#include "cowgol.h"
static i8 workspace[0x01ad];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+3312 length ws+0
void f6_ExitWithError(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+3408 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+3408) = p10; /*buf */
	*(i1*)(intptr_t)(ws+3416) = p9; /*byte */
	*(i8*)(intptr_t)(ws+3424) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3408) 
,  
*(i1*)(intptr_t)(ws+3416) 
,  
*(i8*)(intptr_t)(ws+3424) 
); 


endsub:;
}

// print_char workspace at ws+3360 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+3360) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+3360) 
); 


endsub:;
}

// print workspace at ws+3344 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+3344) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+3344);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+3352);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+3352);
	i1 v29 = *(i1*)(intptr_t)v28;

	void f8_print_char(i1 /* c */);
	f8_print_char(v29);

	i8 v30 = (i8)(intptr_t)(ws+3344);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+3312 length ws+0
void f12_print_nl(void) {

	i1 v34 = (i1)+10;

	void f8_print_char(i1 /* c */);
	f8_print_char(v34);

endsub:;
}

// UIToA workspace at ws+3352 length ws+49
void f13_UIToA(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+3352) = p38; /*value */
	*(i1*)(intptr_t)(ws+3356) = p37; /*base */
	*(i8*)(intptr_t)(ws+3360) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+3360);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+3352);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3356);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+3352);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+3356);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+3352);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+3376);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+3376);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+3376);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+3376);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+3368);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+3368);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+3352);
	i4 v77 = *(i4*)(intptr_t)v76;
	i4 v78 = (i4)+0;
	if (v77==v78) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v79 = (i8)(intptr_t)(ws+3360);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+3368);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+3384);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+3392);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+3384);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+3392);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+3384);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+3400);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+3392);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+3384);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+3392);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+3368);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+3368);
}

// print_i32 workspace at ws+3320 length ws+24
void f15_print_i32(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+3320) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+3320);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+3324);

	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v145;
	f13_UIToA(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+3324);

	void f11_print(i8 /* ptr */);
	f11_print(v147);

endsub:;
}

// print_i16 workspace at ws+3312 length ws+2
void f16_print_i16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+3312) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+3312);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;

	void f15_print_i32(i4 /* value */);
	f15_print_i32(v151);

endsub:;
}

// print_i8 workspace at ws+3256 length ws+1
void f17_print_i8(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+3256) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+3256);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;

	void f15_print_i32(i4 /* value */);
	f15_print_i32(v155);

endsub:;
}

// print_hex_i8 workspace at ws+3224 length ws+3
void f18_print_hex_i8(i1 p156 /* value */) {
	*(i1*)(intptr_t)(ws+3224) = p156; /*value */

	i1 v157 = (i1)+2;
	i8 v158 = (i8)(intptr_t)(ws+3225);
	*(i1*)(intptr_t)v158 = v157;

c02_001f:;

	i8 v159 = (i8)(intptr_t)(ws+3224);
	i1 v160 = *(i1*)(intptr_t)v159;
	i1 v161 = (i1)+4;
	i1 v162 = ((i1)v160)>>v161;
	i8 v163 = (i8)(intptr_t)(ws+3226);
	*(i1*)(intptr_t)v163 = v162;

	i8 v164 = (i8)(intptr_t)(ws+3226);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+10;
	if (v165<v166) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v167 = (i8)(intptr_t)(ws+3226);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = v168+(+48);
	i8 v170 = (i8)(intptr_t)(ws+3226);
	*(i1*)(intptr_t)v170 = v169;

	goto c02_0021;

c02_0025:;

	i8 v171 = (i8)(intptr_t)(ws+3226);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = v172+(+87);
	i8 v174 = (i8)(intptr_t)(ws+3226);
	*(i1*)(intptr_t)v174 = v173;

c02_0021:;

	i8 v175 = (i8)(intptr_t)(ws+3226);
	i1 v176 = *(i1*)(intptr_t)v175;

	void f8_print_char(i1 /* c */);
	f8_print_char(v176);

	i8 v177 = (i8)(intptr_t)(ws+3224);
	i1 v178 = *(i1*)(intptr_t)v177;
	i1 v179 = (i1)+4;
	i1 v180 = ((i1)v178)<<v179;
	i8 v181 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v181 = v180;

	i8 v182 = (i8)(intptr_t)(ws+3225);
	i1 v183 = *(i1*)(intptr_t)v182;
	i1 v184 = v183+(-1);
	i8 v185 = (i8)(intptr_t)(ws+3225);
	*(i1*)(intptr_t)v185 = v184;

	i8 v186 = (i8)(intptr_t)(ws+3225);
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

// print_hex_i16 workspace at ws+3208 length ws+2
void f19_print_hex_i16(i2 p189 /* value */) {
	*(i2*)(intptr_t)(ws+3208) = p189; /*value */

	i8 v190 = (i8)(intptr_t)(ws+3208);
	i2 v191 = *(i2*)(intptr_t)v190;
	i1 v192 = (i1)+8;
	i2 v193 = ((i2)v191)>>v192;
	i1 v194 = v193;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v194);

	i8 v195 = (i8)(intptr_t)(ws+3208);
	i2 v196 = *(i2*)(intptr_t)v195;
	i1 v197 = v196;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v197);

endsub:;
}

// print_hex_i32 workspace at ws+3216 length ws+4
void f20_print_hex_i32(i4 p198 /* value */) {
	*(i4*)(intptr_t)(ws+3216) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+3216);
	i4 v200 = *(i4*)(intptr_t)v199;
	i1 v201 = (i1)+24;
	i4 v202 = ((i4)v200)>>v201;
	i1 v203 = v202;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v203);

	i8 v204 = (i8)(intptr_t)(ws+3216);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v208);

	i8 v209 = (i8)(intptr_t)(ws+3216);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v213);

	i8 v214 = (i8)(intptr_t)(ws+3216);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v216);

endsub:;
}

// MemZero workspace at ws+3216 length ws+16
void f22_MemZero(i8 p321 /* size */, i8 p322 /* ptr */) {
	*(i8*)(intptr_t)(ws+3216) = p322; /*ptr */
	*(i8*)(intptr_t)(ws+3224) = p321; /*size */

	i8 v323 = (i8)(intptr_t)(ws+3216);
	i8 v324 = *(i8*)(intptr_t)v323;
	i1 v325 = (i1)+0;
	i8 v326 = (i8)(intptr_t)(ws+3224);
	i8 v327 = *(i8*)(intptr_t)v326;

	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v327, v325, v324);

endsub:;
}

// ArgvInit workspace at ws+2896 length ws+0
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

// ArgvNext workspace at ws+2896 length ws+8
void f24_ArgvNext(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+2896);
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
	*p332 = *(i8*)(intptr_t)(ws+2896);
}

// StrCmp workspace at ws+3120 length ws+17
void f25_StrCmp(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+3120) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+3128) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+3120);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+3128);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+3136);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+3120);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+3120);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+3128);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+3136);
}

// ToLower workspace at ws+2912 length ws+2
void f26_ToLower(i1* p377 /* cc */, i1 p378 /* c */) {
	*(i1*)(intptr_t)(ws+2912) = p378; /*c */

	i8 v379 = (i8)(intptr_t)(ws+2912);
	i1 v380 = *(i1*)(intptr_t)v379;
	i1 v381 = (i1)+65;
	if (v380<v381) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v382 = (i1)+90;
	i8 v383 = (i8)(intptr_t)(ws+2912);
	i1 v384 = *(i1*)(intptr_t)v383;
	if (v382<v384) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v385 = (i8)(intptr_t)(ws+2912);
	i1 v386 = *(i1*)(intptr_t)v385;
	i1 v387 = v386|(+32);
	i8 v388 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v388 = v387;

	goto c02_0063;

c02_0069:;

	i8 v389 = (i8)(intptr_t)(ws+2912);
	i1 v390 = *(i1*)(intptr_t)v389;
	i8 v391 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v391 = v390;

c02_0063:;

endsub:;
	*p377 = *(i1*)(intptr_t)(ws+2913);
}

// StrLen workspace at ws+3104 length ws+25
void f28_StrLen(i8* p420 /* size */, i8 p421 /* s */) {
	*(i8*)(intptr_t)(ws+3104) = p421; /*s */

	i8 v422 = (i8)(intptr_t)(ws+3104);
	i8 v423 = *(i8*)(intptr_t)v422;
	i8 v424 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v424 = v423;

c02_0075:;

	i8 v425 = (i8)(intptr_t)(ws+3120);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i8 v428 = (i8)(intptr_t)(ws+3128);
	*(i1*)(intptr_t)v428 = v427;

	i8 v429 = (i8)(intptr_t)(ws+3128);
	i1 v430 = *(i1*)(intptr_t)v429;
	i1 v431 = (i1)+0;
	if (v430==v431) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v432 = (i8)(intptr_t)(ws+3120);
	i8 v433 = *(i8*)(intptr_t)v432;
	i8 v434 = v433+(+1);
	i8 v435 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v435 = v434;

	goto c02_0075;

c02_0076:;

	i8 v436 = (i8)(intptr_t)(ws+3120);
	i8 v437 = *(i8*)(intptr_t)v436;
	i8 v438 = (i8)(intptr_t)(ws+3104);
	i8 v439 = *(i8*)(intptr_t)v438;
	i8 v440 = v437-v439;
	i8 v441 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v441 = v440;

endsub:;
	*p420 = *(i8*)(intptr_t)(ws+3112);
}

// MemCopy workspace at ws+3296 length ws+24
void f30_MemCopy(i8 p463 /* dest */, i8 p464 /* size */, i8 p465 /* src */) {
	*(i8*)(intptr_t)(ws+3296) = p465; /*src */
	*(i8*)(intptr_t)(ws+3304) = p464; /*size */
	*(i8*)(intptr_t)(ws+3312) = p463; /*dest */

c02_0085:;

	i8 v466 = (i8)(intptr_t)(ws+3304);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)+0;
	if (v467==v468) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v469 = (i8)(intptr_t)(ws+3296);
	i8 v470 = *(i8*)(intptr_t)v469;
	i1 v471 = *(i1*)(intptr_t)v470;
	i8 v472 = (i8)(intptr_t)(ws+3312);
	i8 v473 = *(i8*)(intptr_t)v472;
	*(i1*)(intptr_t)v473 = v471;

	i8 v474 = (i8)(intptr_t)(ws+3312);
	i8 v475 = *(i8*)(intptr_t)v474;
	i8 v476 = v475+(+1);
	i8 v477 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v477 = v476;

	i8 v478 = (i8)(intptr_t)(ws+3296);
	i8 v479 = *(i8*)(intptr_t)v478;
	i8 v480 = v479+(+1);
	i8 v481 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v481 = v480;

	i8 v482 = (i8)(intptr_t)(ws+3304);
	i8 v483 = *(i8*)(intptr_t)v482;
	i8 v484 = v483+(-1);
	i8 v485 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v485 = v484;

	goto c02_0085;

c02_0088:;

endsub:;
}

// Alloc workspace at ws+3368 length ws+16
void f31_Alloc(i8* p486 /* block */, i8 p487 /* length */) {
	*(i8*)(intptr_t)(ws+3368) = p487; /*length */

	
*(i8*)(intptr_t)(ws+3376) 
=(i8)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3368) 
); 


endsub:;
	*p486 = *(i8*)(intptr_t)(ws+3376);
}

// Free workspace at ws+3336 length ws+8
void f32_Free(i8 p488 /* block */) {
	*(i8*)(intptr_t)(ws+3336) = p488; /*block */

	
free((void*) 
*(i8*)(intptr_t)(ws+3336) 
); 


endsub:;
}

// StrDup workspace at ws+2904 length ws+16
void f33_StrDup(i8* p489 /* sout */, i8 p490 /* s */) {
	*(i8*)(intptr_t)(ws+2904) = p490; /*s */

	
*(i8*)(intptr_t)(ws+2912) 
=(i8)strdup((const char*) 
*(i8*)(intptr_t)(ws+2904) 
); 


endsub:;
	*p489 = *(i8*)(intptr_t)(ws+2912);
}

// GetFreeMemory workspace at ws+2888 length ws+8
void f35_GetFreeMemory(i8* p491 /* i */) {

	i8 v492 = (i8)+0;
	i8 v493 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v493 = v492;

endsub:;
	*p491 = *(i8*)(intptr_t)(ws+2888);
}

// fcb_i_blockin workspace at ws+3376 length ws+28
void f36_fcb_i_blockin(i8 p494 /* fcb */) {
	*(i8*)(intptr_t)(ws+3376) = p494; /*fcb */

	i8 v495 = (i8)(intptr_t)(ws+3376);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+12);
	i1 v498 = (i1)+0;
	i8 v499 = (i8)+512;

	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v499, v498, v497);

	i8 v500 = (i8)(intptr_t)(ws+3376);
	i8 v501 = *(i8*)(intptr_t)v500;
	i4 v502 = *(i4*)(intptr_t)v501;
	i8 v503 = (i8)(intptr_t)(ws+3384);
	*(i4*)(intptr_t)v503 = v502;

	i8 v504 = (i8)(intptr_t)(ws+3376);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+12);
	i8 v507 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+3376);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+8);
	i4 v511 = *(i4*)(intptr_t)v510;
	i1 v512 = (i1)+9;
	i4 v513 = ((i4)v511)<<v512;
	i8 v514 = (i8)(intptr_t)(ws+3400);
	*(i4*)(intptr_t)v514 = v513;

	
pread( 
*(i4*)(intptr_t)(ws+3384) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3392) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3400) 
); 


	i1 v515 = (i1)+0;
	i8 v516 = (i8)(intptr_t)(ws+3376);
	i8 v517 = *(i8*)(intptr_t)v516;
	i8 v518 = v517+(+6);
	*(i1*)(intptr_t)v518 = v515;

endsub:;
}

// fcb_i_blockout workspace at ws+3376 length ws+28
void f37_fcb_i_blockout(i8 p519 /* fcb */) {
	*(i8*)(intptr_t)(ws+3376) = p519; /*fcb */

	i8 v520 = (i8)(intptr_t)(ws+3376);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = v521+(+6);
	i1 v523 = *(i1*)(intptr_t)v522;
	i1 v524 = (i1)+0;
	if (v523==v524) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v525 = (i8)(intptr_t)(ws+3376);
	i8 v526 = *(i8*)(intptr_t)v525;
	i4 v527 = *(i4*)(intptr_t)v526;
	i8 v528 = (i8)(intptr_t)(ws+3384);
	*(i4*)(intptr_t)v528 = v527;

	i8 v529 = (i8)(intptr_t)(ws+3376);
	i8 v530 = *(i8*)(intptr_t)v529;
	i8 v531 = v530+(+12);
	i8 v532 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v532 = v531;

	i8 v533 = (i8)(intptr_t)(ws+3376);
	i8 v534 = *(i8*)(intptr_t)v533;
	i8 v535 = v534+(+8);
	i4 v536 = *(i4*)(intptr_t)v535;
	i1 v537 = (i1)+9;
	i4 v538 = ((i4)v536)<<v537;
	i8 v539 = (i8)(intptr_t)(ws+3400);
	*(i4*)(intptr_t)v539 = v538;

	
pwrite( 
*(i4*)(intptr_t)(ws+3384) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3392) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3400) 
); 


	i1 v540 = (i1)+0;
	i8 v541 = (i8)(intptr_t)(ws+3376);
	i8 v542 = *(i8*)(intptr_t)v541;
	i8 v543 = v542+(+6);
	*(i1*)(intptr_t)v543 = v540;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}

// fcb_i_changeblock workspace at ws+3360 length ws+12
void f38_fcb_i_changeblock(i4 p544 /* newblock */, i8 p545 /* fcb */) {
	*(i8*)(intptr_t)(ws+3360) = p545; /*fcb */
	*(i4*)(intptr_t)(ws+3368) = p544; /*newblock */

	i8 v546 = (i8)(intptr_t)(ws+3368);
	i4 v547 = *(i4*)(intptr_t)v546;
	i8 v548 = (i8)(intptr_t)(ws+3360);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+8);
	i4 v551 = *(i4*)(intptr_t)v550;
	if (v547==v551) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v552 = (i8)(intptr_t)(ws+3360);
	i8 v553 = *(i8*)(intptr_t)v552;

	void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v553);

	i8 v554 = (i8)(intptr_t)(ws+3368);
	i4 v555 = *(i4*)(intptr_t)v554;
	i8 v556 = (i8)(intptr_t)(ws+3360);
	i8 v557 = *(i8*)(intptr_t)v556;
	i8 v558 = v557+(+8);
	*(i4*)(intptr_t)v558 = v555;

	i8 v559 = (i8)(intptr_t)(ws+3360);
	i8 v560 = *(i8*)(intptr_t)v559;

	void f36_fcb_i_blockin(i8 /* fcb */);
	f36_fcb_i_blockin(v560);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}

// fcb_i_open workspace at ws+2992 length ws+28
void f39_fcb_i_open(i1* p561 /* errno */, i4 p562 /* flags */, i8 p563 /* filename */, i8 p564 /* fcb */) {
	*(i8*)(intptr_t)(ws+2992) = p564; /*fcb */
	*(i8*)(intptr_t)(ws+3000) = p563; /*filename */
	*(i4*)(intptr_t)(ws+3008) = p562; /*flags */

	i8 v565 = (i8)(intptr_t)(ws+2992);
	i8 v566 = *(i8*)(intptr_t)v565;
	i1 v567 = (i1)+0;
	i8 v568 = (i8)+524;

	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v568, v567, v566);

	i2 v569 = (i2)+511;
	i8 v570 = (i8)(intptr_t)(ws+2992);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = v571+(+4);
	*(i2*)(intptr_t)v572 = v569;

	i4 v573 = (i4)-1;
	i8 v574 = (i8)(intptr_t)(ws+2992);
	i8 v575 = *(i8*)(intptr_t)v574;
	i8 v576 = v575+(+8);
	*(i4*)(intptr_t)v576 = v573;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3016) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3000) 
,  
*(i4*)(intptr_t)(ws+3008) 
,  
(+438)
); 


	i8 v577 = (i8)(intptr_t)(ws+3016);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+2992);
	i8 v580 = *(i8*)(intptr_t)v579;
	*(i4*)(intptr_t)v580 = v578;

	i8 v581 = (i8)(intptr_t)(ws+3016);
	i4 v582 = *(i4*)(intptr_t)v581;
	i4 v583 = (i4)+0;
	if ((s4)v582<(s4)v583) goto c02_0096; else goto c02_0097;

c02_0096:;

	
*(i1*)(intptr_t)(ws+3012) 
 = errno; 


	goto c02_0093;

c02_0097:;

	i1 v584 = (i1)+0;
	i8 v585 = (i8)(intptr_t)(ws+3012);
	*(i1*)(intptr_t)v585 = v584;

c02_0093:;

endsub:;
	*p561 = *(i1*)(intptr_t)(ws+3012);
}

// FCBOpenIn workspace at ws+2968 length ws+17
void f40_FCBOpenIn(i1* p586 /* errno */, i8 p587 /* filename */, i8 p588 /* fcb */) {
	*(i8*)(intptr_t)(ws+2968) = p588; /*fcb */
	*(i8*)(intptr_t)(ws+2976) = p587; /*filename */

	i8 v589 = (i8)(intptr_t)(ws+2968);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+2976);
	i8 v592 = *(i8*)(intptr_t)v591;
	i4 v593 = (i4)+0;

	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v594;
	f39_fcb_i_open(&v594, v593, v592, v590);
	i8 v595 = (i8)(intptr_t)(ws+2984);
	*(i1*)(intptr_t)v595 = v594;

endsub:;
	*p586 = *(i1*)(intptr_t)(ws+2984);
}

// FCBOpenOut workspace at ws+2896 length ws+17
void f42_FCBOpenOut(i1* p606 /* errno */, i8 p607 /* filename */, i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+2896) = p608; /*fcb */
	*(i8*)(intptr_t)(ws+2904) = p607; /*filename */

	i8 v609 = (i8)(intptr_t)(ws+2896);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = (i8)(intptr_t)(ws+2904);
	i8 v612 = *(i8*)(intptr_t)v611;
	i4 v613 = (i4)+578;

	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v614;
	f39_fcb_i_open(&v614, v613, v612, v610);
	i8 v615 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v615 = v614;

endsub:;
	*p606 = *(i1*)(intptr_t)(ws+2912);
}

// FCBClose workspace at ws+2960 length ws+16
void f43_FCBClose(i1* p616 /* errno */, i8 p617 /* fcb */) {
	*(i8*)(intptr_t)(ws+2960) = p617; /*fcb */

	i8 v618 = (i8)(intptr_t)(ws+2960);
	i8 v619 = *(i8*)(intptr_t)v618;

	void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v619);

	i8 v620 = (i8)(intptr_t)(ws+2960);
	i8 v621 = *(i8*)(intptr_t)v620;
	i4 v622 = *(i4*)(intptr_t)v621;
	i8 v623 = (i8)(intptr_t)(ws+2972);
	*(i4*)(intptr_t)v623 = v622;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+2972) 
); 


	
*(i1*)(intptr_t)(ws+2968) 
 = errno; 


endsub:;
	*p616 = *(i1*)(intptr_t)(ws+2968);
}

// FCBSeek workspace at ws+2968 length ws+18
void f44_FCBSeek(i4 p624 /* pos */, i8 p625 /* fcb */) {
	*(i8*)(intptr_t)(ws+2968) = p625; /*fcb */
	*(i4*)(intptr_t)(ws+2976) = p624; /*pos */

	i8 v626 = (i8)(intptr_t)(ws+2976);
	i4 v627 = *(i4*)(intptr_t)v626;
	i4 v628 = v627+(-1);
	i8 v629 = (i8)(intptr_t)(ws+2976);
	*(i4*)(intptr_t)v629 = v628;

	i8 v630 = (i8)(intptr_t)(ws+2976);
	i4 v631 = *(i4*)(intptr_t)v630;
	i1 v632 = (i1)+9;
	i4 v633 = ((i4)v631)>>v632;
	i8 v634 = (i8)(intptr_t)(ws+2980);
	*(i4*)(intptr_t)v634 = v633;

	i8 v635 = (i8)(intptr_t)(ws+2976);
	i4 v636 = *(i4*)(intptr_t)v635;
	i2 v637 = v636;
	i2 v638 = v637&(+511);
	i8 v639 = (i8)(intptr_t)(ws+2984);
	*(i2*)(intptr_t)v639 = v638;

	i8 v640 = (i8)(intptr_t)(ws+2968);
	i8 v641 = *(i8*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+2980);
	i4 v643 = *(i4*)(intptr_t)v642;

	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v643, v641);

	i8 v644 = (i8)(intptr_t)(ws+2984);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+2968);
	i8 v647 = *(i8*)(intptr_t)v646;
	i8 v648 = v647+(+4);
	*(i2*)(intptr_t)v648 = v645;

endsub:;
}

// FCBPos workspace at ws+2960 length ws+12
void f45_FCBPos(i4* p649 /* pos */, i8 p650 /* fcb */) {
	*(i8*)(intptr_t)(ws+2960) = p650; /*fcb */

	i8 v651 = (i8)(intptr_t)(ws+2960);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+8);
	i4 v654 = *(i4*)(intptr_t)v653;
	i1 v655 = (i1)+9;
	i4 v656 = ((i4)v654)<<v655;
	i8 v657 = (i8)(intptr_t)(ws+2960);
	i8 v658 = *(i8*)(intptr_t)v657;
	i8 v659 = v658+(+4);
	i2 v660 = *(i2*)(intptr_t)v659;
	i4 v661 = v660;
	i4 v662 = v656|v661;
	i4 v663 = v662+(+1);
	i8 v664 = (i8)(intptr_t)(ws+2968);
	*(i4*)(intptr_t)v664 = v663;

endsub:;
	*p649 = *(i4*)(intptr_t)(ws+2968);
}

// fcb_i_nextchar workspace at ws+3352 length ws+8
void f47_fcb_i_nextchar(i8 p678 /* fcb */) {
	*(i8*)(intptr_t)(ws+3352) = p678; /*fcb */

	i8 v679 = (i8)(intptr_t)(ws+3352);
	i8 v680 = *(i8*)(intptr_t)v679;
	i8 v681 = v680+(+4);
	i2 v682 = *(i2*)(intptr_t)v681;
	i2 v683 = v682+(+1);
	i8 v684 = (i8)(intptr_t)(ws+3352);
	i8 v685 = *(i8*)(intptr_t)v684;
	i8 v686 = v685+(+4);
	*(i2*)(intptr_t)v686 = v683;

	i8 v687 = (i8)(intptr_t)(ws+3352);
	i8 v688 = *(i8*)(intptr_t)v687;
	i8 v689 = v688+(+4);
	i2 v690 = *(i2*)(intptr_t)v689;
	i2 v691 = (i2)+512;
	if (v690==v691) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v692 = (i8)(intptr_t)(ws+3352);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = (i8)(intptr_t)(ws+3352);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v695+(+8);
	i4 v697 = *(i4*)(intptr_t)v696;
	i4 v698 = v697+(+1);

	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v698, v693);

	i2 v699 = (i2)+0;
	i8 v700 = (i8)(intptr_t)(ws+3352);
	i8 v701 = *(i8*)(intptr_t)v700;
	i8 v702 = v701+(+4);
	*(i2*)(intptr_t)v702 = v699;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}

// FCBGetChar workspace at ws+2936 length ws+9
void f48_FCBGetChar(i1* p703 /* c */, i8 p704 /* fcb */) {
	*(i8*)(intptr_t)(ws+2936) = p704; /*fcb */

	i8 v705 = (i8)(intptr_t)(ws+2936);
	i8 v706 = *(i8*)(intptr_t)v705;

	void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v706);

	i8 v707 = (i8)(intptr_t)(ws+2936);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+12);
	i8 v710 = (i8)(intptr_t)(ws+2936);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+4);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = v713;
	i8 v715 = v709+v714;
	i1 v716 = *(i1*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v717 = v716;

endsub:;
	*p703 = *(i1*)(intptr_t)(ws+2944);
}

// FCBPutChar workspace at ws+3336 length ws+9
void f49_FCBPutChar(i1 p718 /* c */, i8 p719 /* fcb */) {
	*(i8*)(intptr_t)(ws+3336) = p719; /*fcb */
	*(i1*)(intptr_t)(ws+3344) = p718; /*c */

	i8 v720 = (i8)(intptr_t)(ws+3336);
	i8 v721 = *(i8*)(intptr_t)v720;

	void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v721);

	i8 v722 = (i8)(intptr_t)(ws+3344);
	i1 v723 = *(i1*)(intptr_t)v722;
	i8 v724 = (i8)(intptr_t)(ws+3336);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+12);
	i8 v727 = (i8)(intptr_t)(ws+3336);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i8 v731 = v730;
	i8 v732 = v726+v731;
	*(i1*)(intptr_t)v732 = v723;

	i1 v733 = (i1)+1;
	i8 v734 = (i8)(intptr_t)(ws+3336);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+6);
	*(i1*)(intptr_t)v736 = v733;

endsub:;
}

// StrDupBraced workspace at ws+3072 length ws+32
void f57_StrDupBraced(i8* p802 /* news */, i8 p803 /* s */) {
	*(i8*)(intptr_t)(ws+3072) = p803; /*s */

	i8 v804 = (i8)(intptr_t)(ws+3072);
	i8 v805 = *(i8*)(intptr_t)v804;

	void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v806;
	f28_StrLen(&v806, v805);
	i8 v807 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v807 = v806;

	i8 v808 = (i8)(intptr_t)(ws+3088);
	i8 v809 = *(i8*)(intptr_t)v808;
	i8 v810 = v809+(+3);

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v811;
	f31_Alloc(&v811, v810);
	i8 v812 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v812 = v811;

	i8 v813 = (i8)(intptr_t)(ws+3080);
	i8 v814 = *(i8*)(intptr_t)v813;
	i8 v815 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v815 = v814;

	i1 v816 = (i1)+91;
	i8 v817 = (i8)(intptr_t)(ws+3096);
	i8 v818 = *(i8*)(intptr_t)v817;
	*(i1*)(intptr_t)v818 = v816;

	i8 v819 = (i8)(intptr_t)(ws+3096);
	i8 v820 = *(i8*)(intptr_t)v819;
	i8 v821 = v820+(+1);
	i8 v822 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v822 = v821;

	i8 v823 = (i8)(intptr_t)(ws+3072);
	i8 v824 = *(i8*)(intptr_t)v823;
	i8 v825 = (i8)(intptr_t)(ws+3088);
	i8 v826 = *(i8*)(intptr_t)v825;
	i8 v827 = (i8)(intptr_t)(ws+3096);
	i8 v828 = *(i8*)(intptr_t)v827;

	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v828, v826, v824);

	i8 v829 = (i8)(intptr_t)(ws+3096);
	i8 v830 = *(i8*)(intptr_t)v829;
	i8 v831 = (i8)(intptr_t)(ws+3088);
	i8 v832 = *(i8*)(intptr_t)v831;
	i8 v833 = v830+v832;
	i8 v834 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v834 = v833;

	i1 v835 = (i1)+93;
	i8 v836 = (i8)(intptr_t)(ws+3096);
	i8 v837 = *(i8*)(intptr_t)v836;
	*(i1*)(intptr_t)v837 = v835;

	i8 v838 = (i8)(intptr_t)(ws+3096);
	i8 v839 = *(i8*)(intptr_t)v838;
	i8 v840 = v839+(+1);
	i8 v841 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v841 = v840;

	i1 v842 = (i1)+0;
	i8 v843 = (i8)(intptr_t)(ws+3096);
	i8 v844 = *(i8*)(intptr_t)v843;
	*(i1*)(intptr_t)v844 = v842;

endsub:;
	*p802 = *(i8*)(intptr_t)(ws+3080);
}

// StrDupArrayed workspace at ws+3040 length ws+40
void f58_StrDupArrayed(i8* p845 /* news */, i2 p846 /* i */, i8 p847 /* s */) {
	*(i8*)(intptr_t)(ws+3040) = p847; /*s */
	*(i2*)(intptr_t)(ws+3048) = p846; /*i */

	i8 v848 = (i8)(intptr_t)(ws+3040);
	i8 v849 = *(i8*)(intptr_t)v848;

	void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v850;
	f28_StrLen(&v850, v849);
	i8 v851 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v851 = v850;

	i8 v852 = (i8)(intptr_t)(ws+3064);
	i8 v853 = *(i8*)(intptr_t)v852;
	i8 v854 = v853+(+3);

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v855;
	f31_Alloc(&v855, v854);
	i8 v856 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v856 = v855;

	i8 v857 = (i8)(intptr_t)(ws+3056);
	i8 v858 = *(i8*)(intptr_t)v857;
	i8 v859 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v859 = v858;

	i8 v860 = (i8)(intptr_t)(ws+3040);
	i8 v861 = *(i8*)(intptr_t)v860;
	i8 v862 = (i8)(intptr_t)(ws+3064);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = (i8)(intptr_t)(ws+3072);
	i8 v865 = *(i8*)(intptr_t)v864;

	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v865, v863, v861);

	i8 v866 = (i8)(intptr_t)(ws+3072);
	i8 v867 = *(i8*)(intptr_t)v866;
	i8 v868 = (i8)(intptr_t)(ws+3064);
	i8 v869 = *(i8*)(intptr_t)v868;
	i8 v870 = v867+v869;
	i8 v871 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v871 = v870;

	i1 v872 = (i1)+91;
	i8 v873 = (i8)(intptr_t)(ws+3072);
	i8 v874 = *(i8*)(intptr_t)v873;
	*(i1*)(intptr_t)v874 = v872;

	i8 v875 = (i8)(intptr_t)(ws+3072);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = v876+(+1);
	i8 v878 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v878 = v877;

	i1 v879 = (i1)+93;
	i8 v880 = (i8)(intptr_t)(ws+3072);
	i8 v881 = *(i8*)(intptr_t)v880;
	*(i1*)(intptr_t)v881 = v879;

	i8 v882 = (i8)(intptr_t)(ws+3072);
	i8 v883 = *(i8*)(intptr_t)v882;
	i8 v884 = v883+(+1);
	i8 v885 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v885 = v884;

	i1 v886 = (i1)+0;
	i8 v887 = (i8)(intptr_t)(ws+3072);
	i8 v888 = *(i8*)(intptr_t)v887;
	*(i1*)(intptr_t)v888 = v886;

endsub:;
	*p845 = *(i8*)(intptr_t)(ws+3056);
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

// StartError workspace at ws+3312 length ws+0
void f59_StartError(void) {

	i8 v897 = (i8)(intptr_t)c02_s0029;

	void f11_print(i8 /* ptr */);
	f11_print(v897);

	i8 v898 = (i8)(intptr_t)(ws+232);
	i8 v899 = *(i8*)(intptr_t)v898;
	i8 v900 = (i8)+0;
	if (v899==v900) goto c02_00b7; else goto c02_00b8;

c02_00b7:;

	i8 v901 = (i8)(intptr_t)c02_s002a;

	void f11_print(i8 /* ptr */);
	f11_print(v901);

	goto c02_00b4;

c02_00b8:;

	i8 v902 = (i8)(intptr_t)(ws+232);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+8);
	i8 v905 = *(i8*)(intptr_t)v904;

	void f11_print(i8 /* ptr */);
	f11_print(v905);

	i8 v906 = (i8)(intptr_t)c02_s002b;

	void f11_print(i8 /* ptr */);
	f11_print(v906);

	i8 v907 = (i8)(intptr_t)(ws+232);
	i8 v908 = *(i8*)(intptr_t)v907;
	i8 v909 = v908+(+16);
	i2 v910 = *(i2*)(intptr_t)v909;

	void f16_print_i16(i2 /* value */);
	f16_print_i16(v910);

c02_00b4:;

	i8 v911 = (i8)(intptr_t)c02_s002c;

	void f11_print(i8 /* ptr */);
	f11_print(v911);

endsub:;
}

// EndError workspace at ws+3312 length ws+0
void f60_EndError(void) {


	void f12_print_nl(void);
	f12_print_nl();


	void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}

// SimpleError workspace at ws+3304 length ws+8
void f61_SimpleError(i8 p912 /* message */) {
	*(i8*)(intptr_t)(ws+3304) = p912; /*message */


	void f59_StartError(void);
	f59_StartError();

	i8 v913 = (i8)(intptr_t)(ws+3304);
	i8 v914 = *(i8*)(intptr_t)v913;

	void f11_print(i8 /* ptr */);
	f11_print(v914);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}

// LexerAddIncludePath workspace at ws+2896 length ws+16
void f62_LexerAddIncludePath(i8 p915 /* path */) {
	*(i8*)(intptr_t)(ws+2896) = p915; /*path */

	i8 v916 = (i8)+16;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v917;
	f31_Alloc(&v917, v916);
	i8 v918 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v918 = v917;

	i8 v919 = (i8)(intptr_t)(ws+224);
	i8 v920 = *(i8*)(intptr_t)v919;
	i8 v921 = (i8)(intptr_t)(ws+2904);
	i8 v922 = *(i8*)(intptr_t)v921;
	*(i8*)(intptr_t)v922 = v920;

	i8 v923 = (i8)(intptr_t)(ws+2896);
	i8 v924 = *(i8*)(intptr_t)v923;
	i8 v925 = (i8)(intptr_t)(ws+2904);
	i8 v926 = *(i8*)(intptr_t)v925;
	i8 v927 = v926+(+8);
	*(i8*)(intptr_t)v927 = v924;

	i8 v928 = (i8)(intptr_t)(ws+2904);
	i8 v929 = *(i8*)(intptr_t)v928;
	i8 v930 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v930 = v929;

endsub:;
}
const i1 c02_s002d[] = { 0x20,0x20,0 };

// LexerPrintSpaces workspace at ws+2944 length ws+1
void f63_LexerPrintSpaces(void) {

	i8 v933 = (i8)(intptr_t)(ws+376);
	i1 v934 = *(i1*)(intptr_t)v933;
	i8 v935 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v935 = v934;

c02_00bb:;

	i8 v936 = (i8)(intptr_t)(ws+2944);
	i1 v937 = *(i1*)(intptr_t)v936;
	i1 v938 = (i1)+0;
	if (v937==v938) goto c02_00be; else goto c02_00bd;

c02_00bd:;

	i8 v939 = (i8)(intptr_t)c02_s002d;

	void f11_print(i8 /* ptr */);
	f11_print(v939);

	i8 v940 = (i8)(intptr_t)(ws+2944);
	i1 v941 = *(i1*)(intptr_t)v940;
	i1 v942 = v941+(-1);
	i8 v943 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v943 = v942;

	goto c02_00bb;

c02_00be:;

endsub:;
}

// lexer_i_open workspace at ws+2944 length ws+24
void f64_lexer_i_open(i1* p944 /* result */, i8 p945 /* file */) {
	*(i8*)(intptr_t)(ws+2944) = p945; /*file */

	i8 v946 = (i8)+524;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v947;
	f31_Alloc(&v947, v946);
	i8 v948 = (i8)(intptr_t)(ws+2960);
	*(i8*)(intptr_t)v948 = v947;

	i8 v949 = (i8)(intptr_t)(ws+2960);
	i8 v950 = *(i8*)(intptr_t)v949;
	i8 v951 = (i8)(intptr_t)(ws+2944);
	i8 v952 = *(i8*)(intptr_t)v951;
	i8 v953 = v952+(+8);
	i8 v954 = *(i8*)(intptr_t)v953;

	void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v955;
	f40_FCBOpenIn(&v955, v954, v950);
	i1 v956 = (i1)+0;
	if (v955==v956) goto c02_00c2; else goto c02_00c3;

c02_00c2:;

	i8 v957 = (i8)(intptr_t)(ws+2960);
	i8 v958 = *(i8*)(intptr_t)v957;
	i8 v959 = (i8)(intptr_t)(ws+2944);
	i8 v960 = *(i8*)(intptr_t)v959;
	i8 v961 = v960+(+24);
	*(i8*)(intptr_t)v961 = v958;

	i8 v962 = (i8)(intptr_t)(ws+2960);
	i8 v963 = *(i8*)(intptr_t)v962;
	i8 v964 = (i8)(intptr_t)(ws+2944);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = v965+(+20);
	i4 v967 = *(i4*)(intptr_t)v966;

	void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	f44_FCBSeek(v967, v963);

	i1 v968 = (i1)+0;
	i8 v969 = (i8)(intptr_t)(ws+2952);
	*(i1*)(intptr_t)v969 = v968;

	goto c02_00bf;

c02_00c3:;

	i8 v970 = (i8)(intptr_t)(ws+2960);
	i8 v971 = *(i8*)(intptr_t)v970;

	void f32_Free(i8 /* block */);
	f32_Free(v971);

	i1 v972 = (i1)+1;
	i8 v973 = (i8)(intptr_t)(ws+2952);
	*(i1*)(intptr_t)v973 = v972;

c02_00bf:;

endsub:;
	*p944 = *(i1*)(intptr_t)(ws+2952);
}

// lexer_i_close workspace at ws+2944 length ws+9
void f65_lexer_i_close(i8 p974 /* file */) {
	*(i8*)(intptr_t)(ws+2944) = p974; /*file */

	i8 v975 = (i8)(intptr_t)(ws+2944);
	i8 v976 = *(i8*)(intptr_t)v975;
	i8 v977 = v976+(+24);
	i8 v978 = *(i8*)(intptr_t)v977;

	void f45_FCBPos(i4* /* pos */, i8 /* fcb */);
	i4 v979;
	f45_FCBPos(&v979, v978);
	i8 v980 = (i8)(intptr_t)(ws+2944);
	i8 v981 = *(i8*)(intptr_t)v980;
	i8 v982 = v981+(+20);
	*(i4*)(intptr_t)v982 = v979;

	i8 v983 = (i8)(intptr_t)(ws+2944);
	i8 v984 = *(i8*)(intptr_t)v983;
	i8 v985 = v984+(+24);
	i8 v986 = *(i8*)(intptr_t)v985;

	void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	i1 v987;
	f43_FCBClose(&v987, v986);
	i8 v988 = (i8)(intptr_t)(ws+2952);
	*(i1*)(intptr_t)v988 = v987;

	i8 v989 = (i8)(intptr_t)(ws+2944);
	i8 v990 = *(i8*)(intptr_t)v989;
	i8 v991 = v990+(+24);
	i8 v992 = *(i8*)(intptr_t)v991;

	void f32_Free(i8 /* block */);
	f32_Free(v992);

endsub:;
}
const i1 c02_s002e[] = { 0x3e,0x20,0 };
const i1 c02_s002f[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s0030[] = { 0x27,0 };

// LexerIncludeFile workspace at ws+2904 length ws+40
void f66_LexerIncludeFile(i8 p993 /* path */) {
	*(i8*)(intptr_t)(ws+2904) = p993; /*path */

	i8 v994 = (i8)+32;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v995;
	f31_Alloc(&v995, v994);
	i8 v996 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v996 = v995;

	i8 v997 = (i8)(intptr_t)(ws+232);
	i8 v998 = *(i8*)(intptr_t)v997;
	i8 v999 = (i8)(intptr_t)(ws+2912);
	i8 v1000 = *(i8*)(intptr_t)v999;
	*(i8*)(intptr_t)v1000 = v998;

	i2 v1001 = (i2)+1;
	i8 v1002 = (i8)(intptr_t)(ws+2912);
	i8 v1003 = *(i8*)(intptr_t)v1002;
	i8 v1004 = v1003+(+16);
	*(i2*)(intptr_t)v1004 = v1001;

	i8 v1005 = (i8)(intptr_t)(ws+224);
	i8 v1006 = *(i8*)(intptr_t)v1005;
	i8 v1007 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v1007 = v1006;

	i8 v1008 = (i8)(intptr_t)(ws+2904);
	i8 v1009 = *(i8*)(intptr_t)v1008;

	void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v1010;
	f28_StrLen(&v1010, v1009);
	i8 v1011 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v1011 = v1010;

c02_00c6:;

	i8 v1012 = (i8)(intptr_t)(ws+2920);
	i8 v1013 = *(i8*)(intptr_t)v1012;
	i8 v1014 = (i8)+0;
	if (v1013==v1014) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v1015 = (i8)(intptr_t)(ws+2920);
	i8 v1016 = *(i8*)(intptr_t)v1015;
	i8 v1017 = v1016+(+8);
	i8 v1018 = *(i8*)(intptr_t)v1017;

	void f28_StrLen(i8* /* size */, i8 /* s */);
	i8 v1019;
	f28_StrLen(&v1019, v1018);
	i8 v1020 = (i8)(intptr_t)(ws+2936);
	*(i8*)(intptr_t)v1020 = v1019;

	i8 v1021 = (i8)(intptr_t)(ws+2928);
	i8 v1022 = *(i8*)(intptr_t)v1021;
	i8 v1023 = (i8)(intptr_t)(ws+2936);
	i8 v1024 = *(i8*)(intptr_t)v1023;
	i8 v1025 = v1022+v1024;
	i8 v1026 = v1025+(+1);

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1027;
	f31_Alloc(&v1027, v1026);
	i8 v1028 = (i8)(intptr_t)(ws+2912);
	i8 v1029 = *(i8*)(intptr_t)v1028;
	i8 v1030 = v1029+(+8);
	*(i8*)(intptr_t)v1030 = v1027;

	i8 v1031 = (i8)(intptr_t)(ws+2920);
	i8 v1032 = *(i8*)(intptr_t)v1031;
	i8 v1033 = v1032+(+8);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = (i8)(intptr_t)(ws+2936);
	i8 v1036 = *(i8*)(intptr_t)v1035;
	i8 v1037 = (i8)(intptr_t)(ws+2912);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = v1038+(+8);
	i8 v1040 = *(i8*)(intptr_t)v1039;

	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v1040, v1036, v1034);

	i8 v1041 = (i8)(intptr_t)(ws+2904);
	i8 v1042 = *(i8*)(intptr_t)v1041;
	i8 v1043 = (i8)(intptr_t)(ws+2928);
	i8 v1044 = *(i8*)(intptr_t)v1043;
	i8 v1045 = v1044+(+1);
	i8 v1046 = (i8)(intptr_t)(ws+2912);
	i8 v1047 = *(i8*)(intptr_t)v1046;
	i8 v1048 = v1047+(+8);
	i8 v1049 = *(i8*)(intptr_t)v1048;
	i8 v1050 = (i8)(intptr_t)(ws+2936);
	i8 v1051 = *(i8*)(intptr_t)v1050;
	i8 v1052 = v1049+v1051;

	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v1052, v1045, v1042);

	i8 v1053 = (i8)(intptr_t)(ws+2912);
	i8 v1054 = *(i8*)(intptr_t)v1053;

	void f64_lexer_i_open(i1* /* result */, i8 /* file */);
	i1 v1055;
	f64_lexer_i_open(&v1055, v1054);
	i1 v1056 = (i1)+0;
	if (v1055==v1056) goto c02_00cd; else goto c02_00ce;

c02_00cd:;

	i8 v1057 = (i8)(intptr_t)(ws+376);
	i1 v1058 = *(i1*)(intptr_t)v1057;
	i1 v1059 = v1058+(+1);
	i8 v1060 = (i8)(intptr_t)(ws+376);
	*(i1*)(intptr_t)v1060 = v1059;


	void f63_LexerPrintSpaces(void);
	f63_LexerPrintSpaces();

	i8 v1061 = (i8)(intptr_t)c02_s002e;

	void f11_print(i8 /* ptr */);
	f11_print(v1061);

	i8 v1062 = (i8)(intptr_t)(ws+2912);
	i8 v1063 = *(i8*)(intptr_t)v1062;
	i8 v1064 = v1063+(+8);
	i8 v1065 = *(i8*)(intptr_t)v1064;

	void f11_print(i8 /* ptr */);
	f11_print(v1065);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v1066 = (i8)(intptr_t)(ws+232);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	i8 v1068 = (i8)+0;
	if (v1067==v1068) goto c02_00d3; else goto c02_00d2;

c02_00d2:;

	i8 v1069 = (i8)(intptr_t)(ws+232);
	i8 v1070 = *(i8*)(intptr_t)v1069;

	void f65_lexer_i_close(i8 /* file */);
	f65_lexer_i_close(v1070);

	goto c02_00cf;

c02_00d3:;

c02_00cf:;

	i8 v1071 = (i8)(intptr_t)(ws+2912);
	i8 v1072 = *(i8*)(intptr_t)v1071;
	i8 v1073 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1073 = v1072;

	goto endsub;

c02_00ce:;

c02_00ca:;

	i8 v1074 = (i8)(intptr_t)(ws+2912);
	i8 v1075 = *(i8*)(intptr_t)v1074;
	i8 v1076 = v1075+(+8);
	i8 v1077 = *(i8*)(intptr_t)v1076;

	void f32_Free(i8 /* block */);
	f32_Free(v1077);

	i8 v1078 = (i8)(intptr_t)(ws+2920);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = *(i8*)(intptr_t)v1079;
	i8 v1081 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v1081 = v1080;

	goto c02_00c6;

c02_00c9:;


	void f59_StartError(void);
	f59_StartError();

	i8 v1082 = (i8)(intptr_t)c02_s002f;

	void f11_print(i8 /* ptr */);
	f11_print(v1082);

	i8 v1083 = (i8)(intptr_t)(ws+2904);
	i8 v1084 = *(i8*)(intptr_t)v1083;

	void f11_print(i8 /* ptr */);
	f11_print(v1084);

	i8 v1085 = (i8)(intptr_t)c02_s0030;

	void f11_print(i8 /* ptr */);
	f11_print(v1085);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}

// lexer_i_ctype workspace at ws+2912 length ws+3
void f68_lexer_i_ctype(i1* p1087 /* type */, i1* p1088 /* token */, i1 p1089 /* c */) {
	*(i1*)(intptr_t)(ws+2912) = p1089; /*c */

	i8 v1090 = (i8)(intptr_t)(ws+2912);
	i1 v1091 = *(i1*)(intptr_t)v1090;
	i1 v1092 = (i1)+33;
	if (v1091<v1092) goto c02_00da; else goto c02_00db;

c02_00db:;

	i1 v1093 = (i1)+127;
	i8 v1094 = (i8)(intptr_t)(ws+2912);
	i1 v1095 = *(i1*)(intptr_t)v1094;
	if (v1093<v1095) goto c02_00da; else goto c02_00d9;

c02_00d9:;

	i8 v1096 = (i8)(intptr_t)(((i1*)c02_ab1+0));
	i8 v1097 = (i8)(intptr_t)(ws+2912);
	i1 v1098 = *(i1*)(intptr_t)v1097;
	i1 v1099 = v1098+(-33);
	i8 v1100 = v1099;
	i8 v1101 = v1096+v1100;
	i1 v1102 = *(i1*)(intptr_t)v1101;
	i8 v1103 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v1103 = v1102;

	i8 v1104 = (i8)(intptr_t)(ws+2913);
	i1 v1105 = *(i1*)(intptr_t)v1104;
	i1 v1106 = v1105&(+128);
	i1 v1107 = (i1)+0;
	if (v1106==v1107) goto c02_00e0; else goto c02_00df;

c02_00df:;

	i8 v1108 = (i8)(intptr_t)(ws+2913);
	i1 v1109 = *(i1*)(intptr_t)v1108;
	i1 v1110 = v1109&(-129);
	i8 v1111 = (i8)(intptr_t)(ws+2914);
	*(i1*)(intptr_t)v1111 = v1110;

	i1 v1112 = (i1)+128;
	i8 v1113 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v1113 = v1112;

	goto c02_00dc;

c02_00e0:;

c02_00dc:;

	goto c02_00d4;

c02_00da:;

	i1 v1114 = (i1)+0;
	i8 v1115 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v1115 = v1114;

	i1 v1116 = (i1)+0;
	i8 v1117 = (i8)(intptr_t)(ws+2914);
	*(i1*)(intptr_t)v1117 = v1116;

c02_00d4:;

endsub:;
	*p1088 = *(i1*)(intptr_t)(ws+2914);
	*p1087 = *(i1*)(intptr_t)(ws+2913);
}
const i1 c02_s0031[] = { 0x3c,0x20,0 };
const i1 c02_s0032[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };

// lexer_i_getchar workspace at ws+2920 length ws+16
void f69_lexer_i_getchar(i1* p1118 /* c */) {

	i8 v1119 = (i8)(intptr_t)(ws+240);
	i1 v1120 = *(i1*)(intptr_t)v1119;
	i1 v1121 = (i1)+0;
	if (v1120==v1121) goto c02_00e5; else goto c02_00e4;

c02_00e4:;

	i8 v1122 = (i8)(intptr_t)(ws+240);
	i1 v1123 = *(i1*)(intptr_t)v1122;
	i8 v1124 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1124 = v1123;

	i1 v1125 = (i1)+0;
	i8 v1126 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1126 = v1125;

	goto endsub;

c02_00e5:;

c02_00e1:;

c02_00e6:;

	i8 v1127 = (i8)(intptr_t)(ws+232);
	i8 v1128 = *(i8*)(intptr_t)v1127;
	i8 v1129 = (i8)+0;
	if (v1128==v1129) goto c02_00eb; else goto c02_00ec;

c02_00eb:;

	i1 v1130 = (i1)+0;
	i8 v1131 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1131 = v1130;

	goto c02_00e7;

c02_00ec:;

c02_00e8:;

	i8 v1132 = (i8)(intptr_t)(ws+232);
	i8 v1133 = *(i8*)(intptr_t)v1132;
	i8 v1134 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v1134 = v1133;

	i8 v1135 = (i8)(intptr_t)(ws+2928);
	i8 v1136 = *(i8*)(intptr_t)v1135;
	i8 v1137 = v1136+(+24);
	i8 v1138 = *(i8*)(intptr_t)v1137;

	void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);
	i1 v1139;
	f48_FCBGetChar(&v1139, v1138);
	i8 v1140 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1140 = v1139;

	i8 v1141 = (i8)(intptr_t)(ws+2920);
	i1 v1142 = *(i1*)(intptr_t)v1141;
	i1 v1143 = (i1)+26;
	if (v1142==v1143) goto c02_00f0; else goto c02_00f1;

c02_00f0:;

	i1 v1144 = (i1)+0;
	i8 v1145 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1145 = v1144;

	goto c02_00ed;

c02_00f1:;

c02_00ed:;

	i8 v1146 = (i8)(intptr_t)(ws+2920);
	i1 v1147 = *(i1*)(intptr_t)v1146;
	i1 v1148 = (i1)+0;
	if (v1147==v1148) goto c02_00f6; else goto c02_00f5;

c02_00f5:;

	goto c02_00e7;

c02_00f6:;

c02_00f2:;

	i8 v1149 = (i8)(intptr_t)(ws+2928);
	i8 v1150 = *(i8*)(intptr_t)v1149;
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1152 = v1151;

	i8 v1153 = (i8)(intptr_t)(ws+2928);
	i8 v1154 = *(i8*)(intptr_t)v1153;

	void f65_lexer_i_close(i8 /* file */);
	f65_lexer_i_close(v1154);

	i8 v1155 = (i8)(intptr_t)(ws+2928);
	i8 v1156 = *(i8*)(intptr_t)v1155;

	void f32_Free(i8 /* block */);
	f32_Free(v1156);

	i8 v1157 = (i8)(intptr_t)(ws+232);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = (i8)+0;
	if (v1158==v1159) goto c02_00fb; else goto c02_00fa;

c02_00fa:;

	i8 v1160 = (i8)(intptr_t)(ws+376);
	i1 v1161 = *(i1*)(intptr_t)v1160;
	i1 v1162 = v1161+(-1);
	i8 v1163 = (i8)(intptr_t)(ws+376);
	*(i1*)(intptr_t)v1163 = v1162;


	void f63_LexerPrintSpaces(void);
	f63_LexerPrintSpaces();

	i8 v1164 = (i8)(intptr_t)c02_s0031;

	void f11_print(i8 /* ptr */);
	f11_print(v1164);

	i8 v1165 = (i8)(intptr_t)(ws+232);
	i8 v1166 = *(i8*)(intptr_t)v1165;
	i8 v1167 = v1166+(+8);
	i8 v1168 = *(i8*)(intptr_t)v1167;

	void f11_print(i8 /* ptr */);
	f11_print(v1168);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v1169 = (i8)(intptr_t)(ws+232);
	i8 v1170 = *(i8*)(intptr_t)v1169;

	void f64_lexer_i_open(i1* /* result */, i8 /* file */);
	i1 v1171;
	f64_lexer_i_open(&v1171, v1170);
	i1 v1172 = (i1)+0;
	if (v1171==v1172) goto c02_0100; else goto c02_00ff;

c02_00ff:;

	i8 v1173 = (i8)(intptr_t)c02_s0032;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v1173);

	goto c02_00fc;

c02_0100:;

c02_00fc:;

	goto c02_00f7;

c02_00fb:;

c02_00f7:;

	goto c02_00e6;

c02_00e7:;

endsub:;
	*p1118 = *(i1*)(intptr_t)(ws+2920);
}
const i1 c02_s0033[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };

// lexer_i_unparseable workspace at ws+2896 length ws+1
void f70_lexer_i_unparseable(i1 p1174 /* c */) {
	*(i1*)(intptr_t)(ws+2896) = p1174; /*c */


	void f59_StartError(void);
	f59_StartError();

	i8 v1175 = (i8)(intptr_t)c02_s0033;

	void f11_print(i8 /* ptr */);
	f11_print(v1175);

	i8 v1176 = (i8)(intptr_t)(ws+2896);
	i1 v1177 = *(i1*)(intptr_t)v1176;

	void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v1177);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}

// lexer_i_skipwhitespace workspace at ws+2904 length ws+1
void f71_lexer_i_skipwhitespace(void) {

c02_0101:;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1178;
	f69_lexer_i_getchar(&v1178);
	i8 v1179 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1179 = v1178;

	i8 v1180 = (i8)(intptr_t)(ws+2904);
	i1 v1181 = *(i1*)(intptr_t)v1180;

	if (v1181 != +32) goto c02_0104;

	goto c02_0103;

c02_0104:;

	if (v1181 != +13) goto c02_0105;

	goto c02_0103;

c02_0105:;

	if (v1181 != +10) goto c02_0106;

	i8 v1182 = (i8)(intptr_t)(ws+232);
	i8 v1183 = *(i8*)(intptr_t)v1182;
	i8 v1184 = v1183+(+16);
	i2 v1185 = *(i2*)(intptr_t)v1184;
	i2 v1186 = v1185+(+1);
	i8 v1187 = (i8)(intptr_t)(ws+232);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = v1188+(+16);
	*(i2*)(intptr_t)v1189 = v1186;

	goto c02_0103;

c02_0106:;

	if (v1181 != +9) goto c02_0107;

	goto c02_0103;

c02_0107:;

	goto c02_0102;

c02_0103:;


	goto c02_0101;

c02_0102:;

	i8 v1190 = (i8)(intptr_t)(ws+2904);
	i1 v1191 = *(i1*)(intptr_t)v1190;
	i8 v1192 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1192 = v1191;

endsub:;
}
const i1 c02_s0034[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// lexer_i_read_identifier workspace at ws+2896 length ws+3
void f72_lexer_i_read_identifier(void) {

c02_0108:;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1193;
	f69_lexer_i_getchar(&v1193);
	i8 v1194 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1194 = v1193;

	i8 v1195 = (i8)(intptr_t)(ws+2896);
	i1 v1196 = *(i1*)(intptr_t)v1195;

	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1197;
	i1 v1198;
	f68_lexer_i_ctype(&v1197, &v1198, v1196);

	i8 v1199 = (i8)(intptr_t)(ws+2898);
	*(i1*)(intptr_t)v1199 = v1198;

	i8 v1200 = (i8)(intptr_t)(ws+2897);
	*(i1*)(intptr_t)v1200 = v1197;

	i8 v1201 = (i8)(intptr_t)(ws+2897);
	i1 v1202 = *(i1*)(intptr_t)v1201;
	i1 v1203 = v1202&(+32);
	i1 v1204 = (i1)+0;
	if (v1203==v1204) goto c02_010e; else goto c02_010d;

c02_010d:;

	i8 v1205 = (i8)(intptr_t)(ws+2896);
	i1 v1206 = *(i1*)(intptr_t)v1205;
	i8 v1207 = (i8)(intptr_t)(ws+241);
	i8 v1208 = (i8)(intptr_t)(ws+369);
	i1 v1209 = *(i1*)(intptr_t)v1208;
	i8 v1210 = v1209;
	i8 v1211 = v1207+v1210;
	*(i1*)(intptr_t)v1211 = v1206;

	i8 v1212 = (i8)(intptr_t)(ws+369);
	i1 v1213 = *(i1*)(intptr_t)v1212;
	i1 v1214 = v1213+(+1);
	i8 v1215 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1215 = v1214;

	i8 v1216 = (i8)(intptr_t)(ws+369);
	i1 v1217 = *(i1*)(intptr_t)v1216;
	i1 v1218 = (i1)+128;
	if (v1217==v1218) goto c02_0112; else goto c02_0113;

c02_0112:;


	void f59_StartError(void);
	f59_StartError();

	i8 v1219 = (i8)(intptr_t)c02_s0034;

	void f11_print(i8 /* ptr */);
	f11_print(v1219);


	void f60_EndError(void);
	f60_EndError();

	goto c02_010f;

c02_0113:;

c02_010f:;

	goto c02_010a;

c02_010e:;

	i8 v1220 = (i8)(intptr_t)(ws+2896);
	i1 v1221 = *(i1*)(intptr_t)v1220;
	i8 v1222 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1222 = v1221;

	goto c02_0109;

c02_010a:;

	goto c02_0108;

c02_0109:;

	i1 v1223 = (i1)+0;
	i8 v1224 = (i8)(intptr_t)(ws+241);
	i8 v1225 = (i8)(intptr_t)(ws+369);
	i1 v1226 = *(i1*)(intptr_t)v1225;
	i8 v1227 = v1226;
	i8 v1228 = v1224+v1227;
	*(i1*)(intptr_t)v1228 = v1223;

endsub:;
}

// lexer_i_match_keyword workspace at ws+2896 length ws+2
void f73_lexer_i_match_keyword(i1* p1229 /* token */) {

	i1 v1230 = (i1)+0;
	i8 v1231 = (i8)(intptr_t)(ws+2897);
	*(i1*)(intptr_t)v1231 = v1230;

c02_0116:;

	i8 v1232 = (i8)(intptr_t)(ws+2897);
	i1 v1233 = *(i1*)(intptr_t)v1232;
	i1 v1234 = (i1)+36;
	if (v1233==v1234) goto c02_0119; else goto c02_0118;

c02_0118:;

	i8 v1235 = (i8)(intptr_t)(ws+241);
	i8 v1236 = (i8)(intptr_t)(((i1*)c02_ab2+0));
	i8 v1237 = (i8)(intptr_t)(ws+2897);
	i1 v1238 = *(i1*)(intptr_t)v1237;
	i8 v1239 = v1238;
	i1 v1240 = (i1)+3;
	i8 v1241 = ((i8)v1239)<<v1240;
	i8 v1242 = v1236+v1241;
	i8 v1243 = *(i8*)(intptr_t)v1242;

	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v1244;
	f25_StrCmp(&v1244, v1243, v1235);
	i1 v1245 = (i1)+0;
	if (v1244==v1245) goto c02_011d; else goto c02_011e;

c02_011d:;

	i8 v1246 = (i8)(intptr_t)(((i1*)c02_ab3+0));
	i8 v1247 = (i8)(intptr_t)(ws+2897);
	i1 v1248 = *(i1*)(intptr_t)v1247;
	i8 v1249 = v1248;
	i8 v1250 = v1246+v1249;
	i1 v1251 = *(i1*)(intptr_t)v1250;
	i8 v1252 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1252 = v1251;

	goto endsub;

c02_011e:;

c02_011a:;

	i8 v1253 = (i8)(intptr_t)(ws+2897);
	i1 v1254 = *(i1*)(intptr_t)v1253;
	i1 v1255 = v1254+(+1);
	i8 v1256 = (i8)(intptr_t)(ws+2897);
	*(i1*)(intptr_t)v1256 = v1255;

	goto c02_0116;

c02_0119:;

	i1 v1257 = (i1)+33;
	i8 v1258 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1258 = v1257;

endsub:;
	*p1229 = *(i1*)(intptr_t)(ws+2896);
}
const i1 c02_s0035[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };

// lexer_i_read_number workspace at ws+2904 length ws+7
void f74_lexer_i_read_number(void) {

	i4 v1259 = (i4)+0;
	i8 v1260 = (i8)(intptr_t)(ws+372);
	*(i4*)(intptr_t)v1260 = v1259;

	i4 v1261 = (i4)+10;
	i8 v1262 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1262 = v1261;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1263;
	f69_lexer_i_getchar(&v1263);
	i8 v1264 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1264 = v1263;

	i8 v1265 = (i8)(intptr_t)(ws+2910);
	i1 v1266 = *(i1*)(intptr_t)v1265;
	i1 v1267 = (i1)+48;
	if (v1266==v1267) goto c02_0122; else goto c02_0123;

c02_0122:;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1268;
	f69_lexer_i_getchar(&v1268);
	i8 v1269 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1269 = v1268;

	i8 v1270 = (i8)(intptr_t)(ws+2910);
	i1 v1271 = *(i1*)(intptr_t)v1270;

	if (v1271 != +98) goto c02_0125;

	i4 v1272 = (i4)+2;
	i8 v1273 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1273 = v1272;

	goto c02_0124;

c02_0125:;

	if (v1271 != +111) goto c02_0126;

	i4 v1274 = (i4)+8;
	i8 v1275 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1275 = v1274;

	goto c02_0124;

c02_0126:;

	if (v1271 != +100) goto c02_0127;

	i4 v1276 = (i4)+10;
	i8 v1277 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1277 = v1276;

	goto c02_0124;

c02_0127:;

	if (v1271 != +120) goto c02_0128;

	i4 v1278 = (i4)+16;
	i8 v1279 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1279 = v1278;

	goto c02_0124;

c02_0128:;

	i8 v1280 = (i8)(intptr_t)(ws+2910);
	i1 v1281 = *(i1*)(intptr_t)v1280;
	i8 v1282 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1282 = v1281;

	i8 v1283 = (i8)(intptr_t)(ws+2910);
	i1 v1284 = *(i1*)(intptr_t)v1283;

	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1285;
	i1 v1286;
	f68_lexer_i_ctype(&v1285, &v1286, v1284);

	i8 v1287 = (i8)(intptr_t)(ws+2909);
	*(i1*)(intptr_t)v1287 = v1286;

	i8 v1288 = (i8)(intptr_t)(ws+2908);
	*(i1*)(intptr_t)v1288 = v1285;

	i8 v1289 = (i8)(intptr_t)(ws+2908);
	i1 v1290 = *(i1*)(intptr_t)v1289;
	i1 v1291 = v1290&(+32);
	i1 v1292 = (i1)+0;
	if (v1291==v1292) goto c02_012c; else goto c02_012d;

c02_012c:;

	goto endsub;

c02_012d:;

c02_0129:;

c02_0124:;


	goto c02_011f;

c02_0123:;

	i8 v1293 = (i8)(intptr_t)(ws+2910);
	i1 v1294 = *(i1*)(intptr_t)v1293;
	i8 v1295 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1295 = v1294;

c02_011f:;

c02_012e:;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1296;
	f69_lexer_i_getchar(&v1296);

	void f26_ToLower(i1* /* cc */, i1 /* c */);
	i1 v1297;
	f26_ToLower(&v1297, v1296);
	i8 v1298 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1298 = v1297;

	i8 v1299 = (i8)(intptr_t)(ws+2910);
	i1 v1300 = *(i1*)(intptr_t)v1299;

	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1301;
	i1 v1302;
	f68_lexer_i_ctype(&v1301, &v1302, v1300);

	i8 v1303 = (i8)(intptr_t)(ws+2909);
	*(i1*)(intptr_t)v1303 = v1302;

	i8 v1304 = (i8)(intptr_t)(ws+2908);
	*(i1*)(intptr_t)v1304 = v1301;

	i8 v1305 = (i8)(intptr_t)(ws+2908);
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i1 v1307 = v1306&(+32);
	i1 v1308 = (i1)+0;
	if (v1307==v1308) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1309 = (i8)(intptr_t)(ws+2910);
	i1 v1310 = *(i1*)(intptr_t)v1309;
	i8 v1311 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1311 = v1310;

	goto c02_012f;

c02_0134:;

c02_0130:;

	i8 v1312 = (i8)(intptr_t)(ws+2910);
	i1 v1313 = *(i1*)(intptr_t)v1312;
	i1 v1314 = (i1)+97;
	if (v1313<v1314) goto c02_0139; else goto c02_0138;

c02_0138:;

	i8 v1315 = (i8)(intptr_t)(ws+2910);
	i1 v1316 = *(i1*)(intptr_t)v1315;
	i1 v1317 = v1316+(-87);
	i8 v1318 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1318 = v1317;

	goto c02_0135;

c02_0139:;

	i8 v1319 = (i8)(intptr_t)(ws+2910);
	i1 v1320 = *(i1*)(intptr_t)v1319;
	i1 v1321 = v1320+(-48);
	i8 v1322 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1322 = v1321;

c02_0135:;

	i8 v1323 = (i8)(intptr_t)(ws+2910);
	i1 v1324 = *(i1*)(intptr_t)v1323;
	i8 v1325 = (i8)(intptr_t)(ws+2904);
	i4 v1326 = *(i4*)(intptr_t)v1325;
	i1 v1327 = (s1)(s4)v1326;
	if (v1324<v1327) goto c02_013e; else goto c02_013d;

c02_013d:;


	void f59_StartError(void);
	f59_StartError();

	i8 v1328 = (i8)(intptr_t)c02_s0035;

	void f11_print(i8 /* ptr */);
	f11_print(v1328);


	void f60_EndError(void);
	f60_EndError();

	goto c02_013a;

c02_013e:;

c02_013a:;

	i8 v1329 = (i8)(intptr_t)(ws+372);
	i4 v1330 = *(i4*)(intptr_t)v1329;
	i8 v1331 = (i8)(intptr_t)(ws+2904);
	i4 v1332 = *(i4*)(intptr_t)v1331;
	i4 v1333 = v1330*v1332;
	i8 v1334 = (i8)(intptr_t)(ws+2910);
	i1 v1335 = *(i1*)(intptr_t)v1334;
	i4 v1336 = v1335;
	i4 v1337 = v1333+v1336;
	i8 v1338 = (i8)(intptr_t)(ws+372);
	*(i4*)(intptr_t)v1338 = v1337;

	goto c02_012e;

c02_012f:;

endsub:;
}
const i1 c02_s0036[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };

// lexer_i_malformed workspace at ws+2920 length ws+8
void f75_lexer_i_malformed(i8 p1339 /* s */) {
	*(i8*)(intptr_t)(ws+2920) = p1339; /*s */


	void f59_StartError(void);
	f59_StartError();

	i8 v1340 = (i8)(intptr_t)c02_s0036;

	void f11_print(i8 /* ptr */);
	f11_print(v1340);

	i8 v1341 = (i8)(intptr_t)(ws+2920);
	i8 v1342 = *(i8*)(intptr_t)v1341;

	void f11_print(i8 /* ptr */);
	f11_print(v1342);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}
const i1 c02_s0037[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };

// lexer_i_get_escaped workspace at ws+2912 length ws+1
void f76_lexer_i_get_escaped(i1* p1343 /* c */) {


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1344;
	f69_lexer_i_getchar(&v1344);
	i8 v1345 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1345 = v1344;

	i8 v1346 = (i8)(intptr_t)(ws+2912);
	i1 v1347 = *(i1*)(intptr_t)v1346;

	if (v1347 != +110) goto c02_0140;

	i1 v1348 = (i1)+10;
	i8 v1349 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1349 = v1348;

	goto c02_013f;

c02_0140:;

	if (v1347 != +114) goto c02_0141;

	i1 v1350 = (i1)+13;
	i8 v1351 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1351 = v1350;

	goto c02_013f;

c02_0141:;

	if (v1347 != +116) goto c02_0142;

	i1 v1352 = (i1)+9;
	i8 v1353 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1353 = v1352;

	goto c02_013f;

c02_0142:;

	if (v1347 != +92) goto c02_0143;

	i1 v1354 = (i1)+92;
	i8 v1355 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1355 = v1354;

	goto c02_013f;

c02_0143:;

	if (v1347 != +39) goto c02_0144;

	i1 v1356 = (i1)+39;
	i8 v1357 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1357 = v1356;

	goto c02_013f;

c02_0144:;

	if (v1347 != +34) goto c02_0145;

	i1 v1358 = (i1)+34;
	i8 v1359 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1359 = v1358;

	goto c02_013f;

c02_0145:;

	if (v1347 != +48) goto c02_0146;

	i1 v1360 = (i1)+0;
	i8 v1361 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1361 = v1360;

	goto c02_013f;

c02_0146:;

	i8 v1362 = (i8)(intptr_t)c02_s0037;

	void f75_lexer_i_malformed(i8 /* s */);
	f75_lexer_i_malformed(v1362);

c02_013f:;


endsub:;
	*p1343 = *(i1*)(intptr_t)(ws+2912);
}
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
const i1 c02_s0039[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };

// lexer_i_read_string workspace at ws+2904 length ws+1
void f77_lexer_i_read_string(void) {

	i1 v1363 = (i1)+0;
	i8 v1364 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1364 = v1363;

c02_0147:;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1365;
	f69_lexer_i_getchar(&v1365);
	i8 v1366 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1366 = v1365;

	i8 v1367 = (i8)(intptr_t)(ws+2904);
	i1 v1368 = *(i1*)(intptr_t)v1367;
	i1 v1369 = (i1)+32;
	if (v1368<v1369) goto c02_014c; else goto c02_014d;

c02_014c:;

	i8 v1370 = (i8)(intptr_t)c02_s0038;

	void f75_lexer_i_malformed(i8 /* s */);
	f75_lexer_i_malformed(v1370);

	goto c02_0149;

c02_014d:;

c02_0149:;

	i8 v1371 = (i8)(intptr_t)(ws+2904);
	i1 v1372 = *(i1*)(intptr_t)v1371;

	if (v1372 != +34) goto c02_014f;

	goto c02_0148;

c02_014f:;

	if (v1372 != +92) goto c02_0150;


	void f76_lexer_i_get_escaped(i1* /* c */);
	i1 v1373;
	f76_lexer_i_get_escaped(&v1373);
	i8 v1374 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1374 = v1373;

c02_0150:;

c02_014e:;


	i8 v1375 = (i8)(intptr_t)(ws+2904);
	i1 v1376 = *(i1*)(intptr_t)v1375;
	i8 v1377 = (i8)(intptr_t)(ws+241);
	i8 v1378 = (i8)(intptr_t)(ws+369);
	i1 v1379 = *(i1*)(intptr_t)v1378;
	i8 v1380 = v1379;
	i8 v1381 = v1377+v1380;
	*(i1*)(intptr_t)v1381 = v1376;

	i8 v1382 = (i8)(intptr_t)(ws+369);
	i1 v1383 = *(i1*)(intptr_t)v1382;
	i1 v1384 = v1383+(+1);
	i8 v1385 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1385 = v1384;

	i8 v1386 = (i8)(intptr_t)(ws+369);
	i1 v1387 = *(i1*)(intptr_t)v1386;
	i1 v1388 = (i1)+128;
	if (v1387==v1388) goto c02_0154; else goto c02_0155;

c02_0154:;


	void f59_StartError(void);
	f59_StartError();

	i8 v1389 = (i8)(intptr_t)c02_s0039;

	void f11_print(i8 /* ptr */);
	f11_print(v1389);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0151;

c02_0155:;

c02_0151:;

	goto c02_0147;

c02_0148:;

	i1 v1390 = (i1)+0;
	i8 v1391 = (i8)(intptr_t)(ws+241);
	i8 v1392 = (i8)(intptr_t)(ws+369);
	i1 v1393 = *(i1*)(intptr_t)v1392;
	i8 v1394 = v1393;
	i8 v1395 = v1391+v1394;
	*(i1*)(intptr_t)v1395 = v1390;

endsub:;
}
const i1 c02_s003a[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };

// malformed workspace at ws+2904 length ws+0
void f79_malformed(void) {

	i8 v1396 = (i8)(intptr_t)c02_s003a;

	void f75_lexer_i_malformed(i8 /* s */);
	f75_lexer_i_malformed(v1396);

endsub:;
}

// lexer_i_read_char workspace at ws+2896 length ws+1
void f78_lexer_i_read_char(void) {



	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1397;
	f69_lexer_i_getchar(&v1397);
	i8 v1398 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1398 = v1397;

	i8 v1399 = (i8)(intptr_t)(ws+2896);
	i1 v1400 = *(i1*)(intptr_t)v1399;
	i1 v1401 = (i1)+32;
	if (v1400<v1401) goto c02_015b; else goto c02_015d;

c02_015d:;

	i8 v1402 = (i8)(intptr_t)(ws+2896);
	i1 v1403 = *(i1*)(intptr_t)v1402;
	i1 v1404 = (i1)+39;
	if (v1403==v1404) goto c02_015b; else goto c02_015c;

c02_015b:;


	void f79_malformed(void);
	f79_malformed();

	goto c02_0156;

c02_015c:;

c02_0156:;

	i8 v1405 = (i8)(intptr_t)(ws+2896);
	i1 v1406 = *(i1*)(intptr_t)v1405;
	i1 v1407 = (i1)+92;
	if (v1406==v1407) goto c02_0161; else goto c02_0162;

c02_0161:;


	void f76_lexer_i_get_escaped(i1* /* c */);
	i1 v1408;
	f76_lexer_i_get_escaped(&v1408);
	i8 v1409 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1409 = v1408;

	goto c02_015e;

c02_0162:;

c02_015e:;

	i8 v1410 = (i8)(intptr_t)(ws+2896);
	i1 v1411 = *(i1*)(intptr_t)v1410;
	i4 v1412 = v1411;
	i8 v1413 = (i8)(intptr_t)(ws+372);
	*(i4*)(intptr_t)v1413 = v1412;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1414;
	f69_lexer_i_getchar(&v1414);
	i8 v1415 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1415 = v1414;

	i8 v1416 = (i8)(intptr_t)(ws+2896);
	i1 v1417 = *(i1*)(intptr_t)v1416;
	i1 v1418 = (i1)+39;
	if (v1417==v1418) goto c02_0167; else goto c02_0166;

c02_0166:;


	void f79_malformed(void);
	f79_malformed();

	goto c02_0163;

c02_0167:;

c02_0163:;

endsub:;
}
const i1 c02_s003b[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// malformed_include workspace at ws+2904 length ws+0
void f81_malformed_include(void) {

	i8 v1419 = (i8)(intptr_t)c02_s003b;

	void f75_lexer_i_malformed(i8 /* s */);
	f75_lexer_i_malformed(v1419);

endsub:;
}

// lexer_i_include workspace at ws+2896 length ws+1
void f80_lexer_i_include(void) {



	void f71_lexer_i_skipwhitespace(void);
	f71_lexer_i_skipwhitespace();


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1420;
	f69_lexer_i_getchar(&v1420);
	i8 v1421 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1421 = v1420;

	i8 v1422 = (i8)(intptr_t)(ws+2896);
	i1 v1423 = *(i1*)(intptr_t)v1422;
	i1 v1424 = (i1)+34;
	if (v1423==v1424) goto c02_016c; else goto c02_016b;

c02_016b:;


	void f81_malformed_include(void);
	f81_malformed_include();

	goto c02_0168;

c02_016c:;

c02_0168:;


	void f77_lexer_i_read_string(void);
	f77_lexer_i_read_string();


	void f71_lexer_i_skipwhitespace(void);
	f71_lexer_i_skipwhitespace();


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1425;
	f69_lexer_i_getchar(&v1425);
	i8 v1426 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1426 = v1425;

	i8 v1427 = (i8)(intptr_t)(ws+2896);
	i1 v1428 = *(i1*)(intptr_t)v1427;
	i1 v1429 = (i1)+59;
	if (v1428==v1429) goto c02_0171; else goto c02_0170;

c02_0170:;


	void f81_malformed_include(void);
	f81_malformed_include();

	goto c02_016d;

c02_0171:;

c02_016d:;

	i8 v1430 = (i8)(intptr_t)(ws+241);

	void f66_LexerIncludeFile(i8 /* path */);
	f66_LexerIncludeFile(v1430);

endsub:;
}
const i1 c02_s003c[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };

// lexer_i_line_directive workspace at ws+2896 length ws+1
void f82_lexer_i_line_directive(void) {


	void f71_lexer_i_skipwhitespace(void);
	f71_lexer_i_skipwhitespace();


	void f74_lexer_i_read_number(void);
	f74_lexer_i_read_number();


	void f71_lexer_i_skipwhitespace(void);
	f71_lexer_i_skipwhitespace();


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1431;
	f69_lexer_i_getchar(&v1431);
	i8 v1432 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1432 = v1431;

	i8 v1433 = (i8)(intptr_t)(ws+2896);
	i1 v1434 = *(i1*)(intptr_t)v1433;
	i1 v1435 = (i1)+34;
	if (v1434==v1435) goto c02_0176; else goto c02_0175;

c02_0175:;

	i8 v1436 = (i8)(intptr_t)c02_s003c;

	void f75_lexer_i_malformed(i8 /* s */);
	f75_lexer_i_malformed(v1436);

	goto c02_0172;

c02_0176:;

c02_0172:;


	void f77_lexer_i_read_string(void);
	f77_lexer_i_read_string();

	i8 v1437 = (i8)(intptr_t)(ws+372);
	i4 v1438 = *(i4*)(intptr_t)v1437;
	i2 v1439 = (s2)(s4)v1438;
	i8 v1440 = (i8)(intptr_t)(ws+232);
	i8 v1441 = *(i8*)(intptr_t)v1440;
	i8 v1442 = v1441+(+16);
	*(i2*)(intptr_t)v1442 = v1439;

	i8 v1443 = (i8)(intptr_t)(ws+232);
	i8 v1444 = *(i8*)(intptr_t)v1443;
	i8 v1445 = v1444+(+8);
	i8 v1446 = *(i8*)(intptr_t)v1445;

	void f32_Free(i8 /* block */);
	f32_Free(v1446);

	i8 v1447 = (i8)(intptr_t)(ws+241);

	void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v1448;
	f33_StrDup(&v1448, v1447);
	i8 v1449 = (i8)(intptr_t)(ws+232);
	i8 v1450 = *(i8*)(intptr_t)v1449;
	i8 v1451 = v1450+(+8);
	*(i8*)(intptr_t)v1451 = v1448;

endsub:;
}
const i1 c02_s003d[] = { 0x6c,0x69,0x6e,0x65,0 };

// LexerReadToken workspace at ws+2888 length ws+3
void f67_LexerReadToken(i1* p1086 /* token */) {














c02_0177:;


	void f71_lexer_i_skipwhitespace(void);
	f71_lexer_i_skipwhitespace();


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1452;
	f69_lexer_i_getchar(&v1452);
	i8 v1453 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1453 = v1452;

	i8 v1454 = (i8)(intptr_t)(ws+2889);
	i1 v1455 = *(i1*)(intptr_t)v1454;
	i1 v1456 = (i1)+35;
	if (v1455==v1456) goto c02_017c; else goto c02_017d;

c02_017c:;

	i1 v1457 = (i1)+0;
	i8 v1458 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1458 = v1457;


	void f72_lexer_i_read_identifier(void);
	f72_lexer_i_read_identifier();

	i8 v1459 = (i8)(intptr_t)(ws+241);
	i8 v1460 = (i8)(intptr_t)c02_s003d;

	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v1461;
	f25_StrCmp(&v1461, v1460, v1459);
	i1 v1462 = (i1)+0;
	if (v1461==v1462) goto c02_0181; else goto c02_0182;

c02_0181:;


	void f82_lexer_i_line_directive(void);
	f82_lexer_i_line_directive();

	goto c02_017e;

c02_0182:;

c02_017e:;

c02_0183:;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1463;
	f69_lexer_i_getchar(&v1463);
	i8 v1464 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1464 = v1463;

	i8 v1465 = (i8)(intptr_t)(ws+2889);
	i1 v1466 = *(i1*)(intptr_t)v1465;
	i1 v1467 = (i1)+10;
	if (v1466==v1467) goto c02_018a; else goto c02_018c;

c02_018c:;

	i8 v1468 = (i8)(intptr_t)(ws+2889);
	i1 v1469 = *(i1*)(intptr_t)v1468;
	i1 v1470 = (i1)+0;
	if (v1469==v1470) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1471 = (i8)(intptr_t)(ws+2889);
	i1 v1472 = *(i1*)(intptr_t)v1471;
	i8 v1473 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1473 = v1472;

	goto c02_0184;

c02_018b:;

c02_0185:;

	goto c02_0183;

c02_0184:;

	goto c02_0177;

c02_017d:;

c02_0179:;

	i8 v1474 = (i8)(intptr_t)(ws+2889);
	i1 v1475 = *(i1*)(intptr_t)v1474;

	if (v1475 != +0) goto c02_018e;

	i1 v1476 = (i1)+0;
	i8 v1477 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1477 = v1476;

	goto c02_018d;

c02_018e:;

	if (v1475 != +58) goto c02_018f;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1478;
	f69_lexer_i_getchar(&v1478);
	i8 v1479 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1479 = v1478;

	i8 v1480 = (i8)(intptr_t)(ws+2889);
	i1 v1481 = *(i1*)(intptr_t)v1480;
	i1 v1482 = (i1)+61;
	if (v1481==v1482) goto c02_0193; else goto c02_0194;

c02_0193:;

	i1 v1483 = (i1)+2;
	i8 v1484 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1484 = v1483;

	goto c02_0190;

c02_0194:;

	i8 v1485 = (i8)(intptr_t)(ws+2889);
	i1 v1486 = *(i1*)(intptr_t)v1485;
	i8 v1487 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1487 = v1486;

	i1 v1488 = (i1)+6;
	i8 v1489 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1489 = v1488;

c02_0190:;

	goto c02_018d;

c02_018f:;

	if (v1475 != +60) goto c02_0195;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1490;
	f69_lexer_i_getchar(&v1490);
	i8 v1491 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1491 = v1490;

	i8 v1492 = (i8)(intptr_t)(ws+2889);
	i1 v1493 = *(i1*)(intptr_t)v1492;

	if (v1493 != +60) goto c02_0197;

	i1 v1494 = (i1)+55;
	i8 v1495 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1495 = v1494;

	goto c02_0196;

c02_0197:;

	if (v1493 != +61) goto c02_0198;

	i1 v1496 = (i1)+50;
	i8 v1497 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1497 = v1496;

	goto c02_0196;

c02_0198:;

	i8 v1498 = (i8)(intptr_t)(ws+2889);
	i1 v1499 = *(i1*)(intptr_t)v1498;
	i8 v1500 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1500 = v1499;

	i1 v1501 = (i1)+49;
	i8 v1502 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1502 = v1501;

c02_0196:;


	goto c02_018d;

c02_0195:;

	if (v1475 != +61) goto c02_0199;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1503;
	f69_lexer_i_getchar(&v1503);
	i8 v1504 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1504 = v1503;

	i8 v1505 = (i8)(intptr_t)(ws+2889);
	i1 v1506 = *(i1*)(intptr_t)v1505;
	i1 v1507 = (i1)+61;
	if (v1506==v1507) goto c02_019d; else goto c02_019e;

c02_019d:;

	i1 v1508 = (i1)+53;
	i8 v1509 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1509 = v1508;

	goto c02_019a;

c02_019e:;

	i8 v1510 = (i8)(intptr_t)(ws+2889);
	i1 v1511 = *(i1*)(intptr_t)v1510;

	void f70_lexer_i_unparseable(i1 /* c */);
	f70_lexer_i_unparseable(v1511);

c02_019a:;

	goto c02_018d;

c02_0199:;

	if (v1475 != +33) goto c02_019f;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1512;
	f69_lexer_i_getchar(&v1512);
	i8 v1513 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1513 = v1512;

	i8 v1514 = (i8)(intptr_t)(ws+2889);
	i1 v1515 = *(i1*)(intptr_t)v1514;
	i1 v1516 = (i1)+61;
	if (v1515==v1516) goto c02_01a3; else goto c02_01a4;

c02_01a3:;

	i1 v1517 = (i1)+54;
	i8 v1518 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1518 = v1517;

	goto c02_01a0;

c02_01a4:;

	i8 v1519 = (i8)(intptr_t)(ws+2889);
	i1 v1520 = *(i1*)(intptr_t)v1519;

	void f70_lexer_i_unparseable(i1 /* c */);
	f70_lexer_i_unparseable(v1520);

c02_01a0:;

	goto c02_018d;

c02_019f:;

	if (v1475 != +62) goto c02_01a5;


	void f69_lexer_i_getchar(i1* /* c */);
	i1 v1521;
	f69_lexer_i_getchar(&v1521);
	i8 v1522 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+2889);
	i1 v1524 = *(i1*)(intptr_t)v1523;

	if (v1524 != +62) goto c02_01a7;

	i1 v1525 = (i1)+56;
	i8 v1526 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1526 = v1525;

	goto c02_01a6;

c02_01a7:;

	if (v1524 != +61) goto c02_01a8;

	i1 v1527 = (i1)+52;
	i8 v1528 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1528 = v1527;

	goto c02_01a6;

c02_01a8:;

	i8 v1529 = (i8)(intptr_t)(ws+2889);
	i1 v1530 = *(i1*)(intptr_t)v1529;
	i8 v1531 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1531 = v1530;

	i1 v1532 = (i1)+51;
	i8 v1533 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1533 = v1532;

c02_01a6:;


	goto c02_018d;

c02_01a5:;

	if (v1475 != +34) goto c02_01a9;


	void f77_lexer_i_read_string(void);
	f77_lexer_i_read_string();

	i1 v1534 = (i1)+41;
	i8 v1535 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1535 = v1534;

	goto c02_018d;

c02_01a9:;

	if (v1475 != +39) goto c02_01aa;


	void f78_lexer_i_read_char(void);
	f78_lexer_i_read_char();

	i1 v1536 = (i1)+34;
	i8 v1537 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1537 = v1536;

	goto c02_018d;

c02_01aa:;

	i8 v1538 = (i8)(intptr_t)(ws+2889);
	i1 v1539 = *(i1*)(intptr_t)v1538;

	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	i1 v1540;
	i1 v1541;
	f68_lexer_i_ctype(&v1540, &v1541, v1539);

	i8 v1542 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1542 = v1541;

	i8 v1543 = (i8)(intptr_t)(ws+2890);
	*(i1*)(intptr_t)v1543 = v1540;

	i8 v1544 = (i8)(intptr_t)(ws+2890);
	i1 v1545 = *(i1*)(intptr_t)v1544;
	i1 v1546 = v1545&(+128);
	i1 v1547 = (i1)+0;
	if (v1546==v1547) goto c02_01af; else goto c02_01ae;

c02_01ae:;

	goto c02_01ab;

c02_01af:;

	i8 v1548 = (i8)(intptr_t)(ws+2890);
	i1 v1549 = *(i1*)(intptr_t)v1548;
	i1 v1550 = v1549&(+1);
	i1 v1551 = (i1)+0;
	if (v1550==v1551) goto c02_01b3; else goto c02_01b2;

c02_01b2:;

	i8 v1552 = (i8)(intptr_t)(ws+2889);
	i1 v1553 = *(i1*)(intptr_t)v1552;
	i8 v1554 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1554 = v1553;


	void f74_lexer_i_read_number(void);
	f74_lexer_i_read_number();

	i1 v1555 = (i1)+34;
	i8 v1556 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1556 = v1555;

	goto c02_01ab;

c02_01b3:;

	i8 v1557 = (i8)(intptr_t)(ws+2890);
	i1 v1558 = *(i1*)(intptr_t)v1557;
	i1 v1559 = v1558&(+16);
	i1 v1560 = (i1)+0;
	if (v1559==v1560) goto c02_01b7; else goto c02_01b6;

c02_01b6:;

	i1 v1561 = (i1)+1;
	i8 v1562 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1562 = v1561;

	i8 v1563 = (i8)(intptr_t)(ws+2889);
	i1 v1564 = *(i1*)(intptr_t)v1563;
	i8 v1565 = (i8)(intptr_t)(ws+241);
	*(i1*)(intptr_t)v1565 = v1564;


	void f72_lexer_i_read_identifier(void);
	f72_lexer_i_read_identifier();


	void f73_lexer_i_match_keyword(i1* /* token */);
	i1 v1566;
	f73_lexer_i_match_keyword(&v1566);
	i8 v1567 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1567 = v1566;

	goto c02_01ab;

c02_01b7:;

	i8 v1568 = (i8)(intptr_t)(ws+2889);
	i1 v1569 = *(i1*)(intptr_t)v1568;

	void f70_lexer_i_unparseable(i1 /* c */);
	f70_lexer_i_unparseable(v1569);

c02_01ab:;

c02_018d:;


	i8 v1570 = (i8)(intptr_t)(ws+2888);
	i1 v1571 = *(i1*)(intptr_t)v1570;
	i1 v1572 = (i1)+255;
	if (v1571==v1572) goto c02_01bb; else goto c02_01bc;

c02_01bb:;


	void f80_lexer_i_include(void);
	f80_lexer_i_include();

	goto c02_01b8;

c02_01bc:;

	goto c02_0178;

c02_01b8:;

	goto c02_0177;

c02_0178:;

endsub:;
	*p1086 = *(i1*)(intptr_t)(ws+2888);
}

// CountParameters workspace at ws+3008 length ws+9
void f83_CountParameters(i1* p1573 /* count */, i8 p1574 /* param */) {
	*(i8*)(intptr_t)(ws+3008) = p1574; /*param */

	i1 v1575 = (i1)+0;
	i8 v1576 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v1576 = v1575;

c02_01bf:;

	i8 v1577 = (i8)(intptr_t)(ws+3008);
	i8 v1578 = *(i8*)(intptr_t)v1577;
	i8 v1579 = (i8)+0;
	if (v1578==v1579) goto c02_01c2; else goto c02_01c1;

c02_01c1:;

	i8 v1580 = (i8)(intptr_t)(ws+3016);
	i1 v1581 = *(i1*)(intptr_t)v1580;
	i1 v1582 = v1581+(+1);
	i8 v1583 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v1583 = v1582;

	i8 v1584 = (i8)(intptr_t)(ws+3008);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = v1585+(+16);
	i8 v1587 = *(i8*)(intptr_t)v1586;
	i8 v1588 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1588 = v1587;

	goto c02_01bf;

c02_01c2:;

endsub:;
	*p1573 = *(i1*)(intptr_t)(ws+3016);
}

// GetInputParameter workspace at ws+3288 length ws+24
void f84_GetInputParameter(i8* p1589 /* param */, i1 p1590 /* count */, i8 p1591 /* subr */) {
	*(i8*)(intptr_t)(ws+3288) = p1591; /*subr */
	*(i1*)(intptr_t)(ws+3296) = p1590; /*count */

	i8 v1592 = (i8)(intptr_t)(ws+3288);
	i8 v1593 = *(i8*)(intptr_t)v1592;
	i8 v1594 = v1593+(+40);
	i8 v1595 = *(i8*)(intptr_t)v1594;
	i8 v1596 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1596 = v1595;

c02_01c5:;

	i8 v1597 = (i8)(intptr_t)(ws+3296);
	i1 v1598 = *(i1*)(intptr_t)v1597;
	i1 v1599 = (i1)+0;
	if (v1598==v1599) goto c02_01c8; else goto c02_01c7;

c02_01c7:;

	i8 v1600 = (i8)(intptr_t)(ws+3304);
	i8 v1601 = *(i8*)(intptr_t)v1600;
	i8 v1602 = v1601+(+16);
	i8 v1603 = *(i8*)(intptr_t)v1602;
	i8 v1604 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1604 = v1603;

	i8 v1605 = (i8)(intptr_t)(ws+3296);
	i1 v1606 = *(i1*)(intptr_t)v1605;
	i1 v1607 = v1606+(-1);
	i8 v1608 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1608 = v1607;

	goto c02_01c5;

c02_01c8:;

endsub:;
	*p1589 = *(i8*)(intptr_t)(ws+3304);
}

// GetOutputParameter workspace at ws+3288 length ws+24
void f85_GetOutputParameter(i8* p1609 /* param */, i1 p1610 /* count */, i8 p1611 /* subr */) {
	*(i8*)(intptr_t)(ws+3288) = p1611; /*subr */
	*(i1*)(intptr_t)(ws+3296) = p1610; /*count */

	i8 v1612 = (i8)(intptr_t)(ws+3288);
	i8 v1613 = *(i8*)(intptr_t)v1612;
	i8 v1614 = v1613+(+48);
	i8 v1615 = *(i8*)(intptr_t)v1614;
	i8 v1616 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1616 = v1615;

c02_01cb:;

	i8 v1617 = (i8)(intptr_t)(ws+3296);
	i1 v1618 = *(i1*)(intptr_t)v1617;
	i1 v1619 = (i1)+0;
	if (v1618==v1619) goto c02_01ce; else goto c02_01cd;

c02_01cd:;

	i8 v1620 = (i8)(intptr_t)(ws+3304);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	i8 v1622 = v1621+(+16);
	i8 v1623 = *(i8*)(intptr_t)v1622;
	i8 v1624 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1624 = v1623;

	i8 v1625 = (i8)(intptr_t)(ws+3296);
	i1 v1626 = *(i1*)(intptr_t)v1625;
	i1 v1627 = v1626+(-1);
	i8 v1628 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1628 = v1627;

	goto c02_01cb;

c02_01ce:;

endsub:;
	*p1609 = *(i8*)(intptr_t)(ws+3304);
}

// WidthToIndex workspace at ws+3112 length ws+2
void f87_WidthToIndex(i1* p1633 /* index */, i1 p1634 /* width */) {
	*(i1*)(intptr_t)(ws+3112) = p1634; /*width */

	i8 v1635 = (i8)(intptr_t)(ws+3112);
	i1 v1636 = *(i1*)(intptr_t)v1635;

	if (v1636 != +4) goto c02_01d0;

	i1 v1637 = (i1)+3;
	i8 v1638 = (i8)(intptr_t)(ws+3113);
	*(i1*)(intptr_t)v1638 = v1637;

	goto c02_01cf;

c02_01d0:;

	if (v1636 != +8) goto c02_01d1;

	i1 v1639 = (i1)+4;
	i8 v1640 = (i8)(intptr_t)(ws+3113);
	*(i1*)(intptr_t)v1640 = v1639;

	goto c02_01cf;

c02_01d1:;

	i8 v1641 = (i8)(intptr_t)(ws+3112);
	i1 v1642 = *(i1*)(intptr_t)v1641;
	i8 v1643 = (i8)(intptr_t)(ws+3113);
	*(i1*)(intptr_t)v1643 = v1642;

c02_01cf:;


endsub:;
	*p1633 = *(i1*)(intptr_t)(ws+3113);
}

// AllocateNewNode workspace at ws+3264 length ws+16
void f88_AllocateNewNode(i8* p1644 /* m */, i1 p1645 /* code */) {
	*(i1*)(intptr_t)(ws+3264) = p1645; /*code */

	i8 v1646 = (i8)+59;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1647;
	f31_Alloc(&v1647, v1646);
	i8 v1648 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v1648 = v1647;

	i8 v1649 = (i8)(intptr_t)(ws+3264);
	i1 v1650 = *(i1*)(intptr_t)v1649;
	i8 v1651 = (i8)(intptr_t)(ws+3272);
	i8 v1652 = *(i8*)(intptr_t)v1651;
	i8 v1653 = v1652+(+58);
	*(i1*)(intptr_t)v1653 = v1650;

endsub:;
	*p1644 = *(i8*)(intptr_t)(ws+3272);
}

// MidBand workspace at ws+3008 length ws+32
void f89_MidBand(i8* p1654 /* m */, i1 p1655 /* negated */, i2 p1656 /* fallthrough */, i2 p1657 /* falselabel */, i2 p1658 /* truelabel */, i8 p1659 /* right */, i8 p1660 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p1660; /*left */
	*(i8*)(intptr_t)(ws+3016) = p1659; /*right */
	*(i2*)(intptr_t)(ws+3024) = p1658; /*truelabel */
	*(i2*)(intptr_t)(ws+3026) = p1657; /*falselabel */
	*(i2*)(intptr_t)(ws+3028) = p1656; /*fallthrough */
	*(i1*)(intptr_t)(ws+3030) = p1655; /*negated */

	i1 v1661 = (i1)+53;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1662;
	f88_AllocateNewNode(&v1662, v1661);
	i8 v1663 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v1663 = v1662;

	i8 v1664 = (i8)(intptr_t)(ws+3008);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	i8 v1666 = (i8)(intptr_t)(ws+3032);
	i8 v1667 = *(i8*)(intptr_t)v1666;
	i8 v1668 = v1667+(+24);
	*(i8*)(intptr_t)v1668 = v1665;

	i8 v1669 = (i8)(intptr_t)(ws+3016);
	i8 v1670 = *(i8*)(intptr_t)v1669;
	i8 v1671 = (i8)(intptr_t)(ws+3032);
	i8 v1672 = *(i8*)(intptr_t)v1671;
	i8 v1673 = v1672+(+32);
	*(i8*)(intptr_t)v1673 = v1670;

	i8 v1674 = (i8)(intptr_t)(ws+3024);
	i2 v1675 = *(i2*)(intptr_t)v1674;
	i8 v1676 = (i8)(intptr_t)(ws+3032);
	i8 v1677 = *(i8*)(intptr_t)v1676;
	*(i2*)(intptr_t)v1677 = v1675;

	i8 v1678 = (i8)(intptr_t)(ws+3026);
	i2 v1679 = *(i2*)(intptr_t)v1678;
	i8 v1680 = (i8)(intptr_t)(ws+3032);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	i8 v1682 = v1681+(+2);
	*(i2*)(intptr_t)v1682 = v1679;

	i8 v1683 = (i8)(intptr_t)(ws+3028);
	i2 v1684 = *(i2*)(intptr_t)v1683;
	i8 v1685 = (i8)(intptr_t)(ws+3032);
	i8 v1686 = *(i8*)(intptr_t)v1685;
	i8 v1687 = v1686+(+4);
	*(i2*)(intptr_t)v1687 = v1684;

	i8 v1688 = (i8)(intptr_t)(ws+3030);
	i1 v1689 = *(i1*)(intptr_t)v1688;
	i8 v1690 = (i8)(intptr_t)(ws+3032);
	i8 v1691 = *(i8*)(intptr_t)v1690;
	i8 v1692 = v1691+(+6);
	*(i1*)(intptr_t)v1692 = v1689;

endsub:;
	*p1654 = *(i8*)(intptr_t)(ws+3032);
}

// MidBlts workspace at ws+3048 length ws+40
void f90_MidBlts(i8* p1693 /* m */, i1 p1694 /* negated */, i2 p1695 /* fallthrough */, i2 p1696 /* falselabel */, i2 p1697 /* truelabel */, i8 p1698 /* right */, i8 p1699 /* left */, i1 p1700 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p1700; /*width */
	*(i8*)(intptr_t)(ws+3056) = p1699; /*left */
	*(i8*)(intptr_t)(ws+3064) = p1698; /*right */
	*(i2*)(intptr_t)(ws+3072) = p1697; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p1696; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p1695; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p1694; /*negated */

	i8 v1701 = (i8)(intptr_t)(ws+3048);
	i1 v1702 = *(i1*)(intptr_t)v1701;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1703;
	f87_WidthToIndex(&v1703, v1702);
	i1 v1704 = v1703+(+60);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1705;
	f88_AllocateNewNode(&v1705, v1704);
	i8 v1706 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1706 = v1705;

	i8 v1707 = (i8)(intptr_t)(ws+3056);
	i8 v1708 = *(i8*)(intptr_t)v1707;
	i8 v1709 = (i8)(intptr_t)(ws+3080);
	i8 v1710 = *(i8*)(intptr_t)v1709;
	i8 v1711 = v1710+(+24);
	*(i8*)(intptr_t)v1711 = v1708;

	i8 v1712 = (i8)(intptr_t)(ws+3064);
	i8 v1713 = *(i8*)(intptr_t)v1712;
	i8 v1714 = (i8)(intptr_t)(ws+3080);
	i8 v1715 = *(i8*)(intptr_t)v1714;
	i8 v1716 = v1715+(+32);
	*(i8*)(intptr_t)v1716 = v1713;

	i8 v1717 = (i8)(intptr_t)(ws+3072);
	i2 v1718 = *(i2*)(intptr_t)v1717;
	i8 v1719 = (i8)(intptr_t)(ws+3080);
	i8 v1720 = *(i8*)(intptr_t)v1719;
	*(i2*)(intptr_t)v1720 = v1718;

	i8 v1721 = (i8)(intptr_t)(ws+3074);
	i2 v1722 = *(i2*)(intptr_t)v1721;
	i8 v1723 = (i8)(intptr_t)(ws+3080);
	i8 v1724 = *(i8*)(intptr_t)v1723;
	i8 v1725 = v1724+(+2);
	*(i2*)(intptr_t)v1725 = v1722;

	i8 v1726 = (i8)(intptr_t)(ws+3076);
	i2 v1727 = *(i2*)(intptr_t)v1726;
	i8 v1728 = (i8)(intptr_t)(ws+3080);
	i8 v1729 = *(i8*)(intptr_t)v1728;
	i8 v1730 = v1729+(+4);
	*(i2*)(intptr_t)v1730 = v1727;

	i8 v1731 = (i8)(intptr_t)(ws+3078);
	i1 v1732 = *(i1*)(intptr_t)v1731;
	i8 v1733 = (i8)(intptr_t)(ws+3080);
	i8 v1734 = *(i8*)(intptr_t)v1733;
	i8 v1735 = v1734+(+6);
	*(i1*)(intptr_t)v1735 = v1732;

endsub:;
	*p1693 = *(i8*)(intptr_t)(ws+3080);
}

// MidFallback workspace at ws+3248 length ws+16
void f91_MidFallback(i8* p1736 /* m */, i8 p1737 /* left */) {
	*(i8*)(intptr_t)(ws+3248) = p1737; /*left */

	i1 v1738 = (i1)+19;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1739;
	f88_AllocateNewNode(&v1739, v1738);
	i8 v1740 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1740 = v1739;

	i8 v1741 = (i8)(intptr_t)(ws+3248);
	i8 v1742 = *(i8*)(intptr_t)v1741;
	i8 v1743 = (i8)(intptr_t)(ws+3256);
	i8 v1744 = *(i8*)(intptr_t)v1743;
	i8 v1745 = v1744+(+24);
	*(i8*)(intptr_t)v1745 = v1742;

endsub:;
	*p1736 = *(i8*)(intptr_t)(ws+3256);
}

// MidWhencase workspace at ws+3008 length ws+24
void f94_MidWhencase(i8* p1785 /* m */, i2 p1786 /* falselabel */, i4 p1787 /* value */, i1 p1788 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p1788; /*width */
	*(i4*)(intptr_t)(ws+3012) = p1787; /*value */
	*(i2*)(intptr_t)(ws+3016) = p1786; /*falselabel */

	i8 v1789 = (i8)(intptr_t)(ws+3008);
	i1 v1790 = *(i1*)(intptr_t)v1789;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1791;
	f87_WidthToIndex(&v1791, v1790);
	i1 v1792 = v1791+(+75);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1793;
	f88_AllocateNewNode(&v1793, v1792);
	i8 v1794 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1794 = v1793;

	i8 v1795 = (i8)(intptr_t)(ws+3012);
	i4 v1796 = *(i4*)(intptr_t)v1795;
	i8 v1797 = (i8)(intptr_t)(ws+3024);
	i8 v1798 = *(i8*)(intptr_t)v1797;
	*(i4*)(intptr_t)v1798 = v1796;

	i8 v1799 = (i8)(intptr_t)(ws+3016);
	i2 v1800 = *(i2*)(intptr_t)v1799;
	i8 v1801 = (i8)(intptr_t)(ws+3024);
	i8 v1802 = *(i8*)(intptr_t)v1801;
	i8 v1803 = v1802+(+4);
	*(i2*)(intptr_t)v1803 = v1800;

endsub:;
	*p1785 = *(i8*)(intptr_t)(ws+3024);
}

// MidStartfile workspace at ws+2888 length ws+8
void f95_MidStartfile(i8* p1804 /* m */) {

	i1 v1805 = (i1)+2;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1806;
	f88_AllocateNewNode(&v1806, v1805);
	i8 v1807 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v1807 = v1806;

endsub:;
	*p1804 = *(i8*)(intptr_t)(ws+2888);
}

// MidStartsub workspace at ws+3008 length ws+16
void f96_MidStartsub(i8* p1808 /* m */, i8 p1809 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p1809; /*subr */

	i1 v1810 = (i1)+4;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1811;
	f88_AllocateNewNode(&v1811, v1810);
	i8 v1812 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1812 = v1811;

	i8 v1813 = (i8)(intptr_t)(ws+3008);
	i8 v1814 = *(i8*)(intptr_t)v1813;
	i8 v1815 = (i8)(intptr_t)(ws+3016);
	i8 v1816 = *(i8*)(intptr_t)v1815;
	*(i8*)(intptr_t)v1816 = v1814;

endsub:;
	*p1808 = *(i8*)(intptr_t)(ws+3016);
}

// MidLoad workspace at ws+3088 length ws+24
void f97_MidLoad(i8* p1817 /* m */, i8 p1818 /* left */, i1 p1819 /* width */) {
	*(i1*)(intptr_t)(ws+3088) = p1819; /*width */
	*(i8*)(intptr_t)(ws+3096) = p1818; /*left */

	i8 v1820 = (i8)(intptr_t)(ws+3088);
	i1 v1821 = *(i1*)(intptr_t)v1820;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1822;
	f87_WidthToIndex(&v1822, v1821);
	i1 v1823 = v1822+(+43);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1824;
	f88_AllocateNewNode(&v1824, v1823);
	i8 v1825 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1825 = v1824;

	i8 v1826 = (i8)(intptr_t)(ws+3096);
	i8 v1827 = *(i8*)(intptr_t)v1826;
	i8 v1828 = (i8)(intptr_t)(ws+3104);
	i8 v1829 = *(i8*)(intptr_t)v1828;
	i8 v1830 = v1829+(+24);
	*(i8*)(intptr_t)v1830 = v1827;

endsub:;
	*p1817 = *(i8*)(intptr_t)(ws+3104);
}

// MidInits workspace at ws+3032 length ws+16
void f98_MidInits(i8* p1831 /* m */, i8 p1832 /* text */) {
	*(i8*)(intptr_t)(ws+3032) = p1832; /*text */

	i1 v1833 = (i1)+12;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1834;
	f88_AllocateNewNode(&v1834, v1833);
	i8 v1835 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v1835 = v1834;

	i8 v1836 = (i8)(intptr_t)(ws+3032);
	i8 v1837 = *(i8*)(intptr_t)v1836;
	i8 v1838 = (i8)(intptr_t)(ws+3040);
	i8 v1839 = *(i8*)(intptr_t)v1838;
	*(i8*)(intptr_t)v1839 = v1837;

endsub:;
	*p1831 = *(i8*)(intptr_t)(ws+3040);
}

// MidAddress workspace at ws+3016 length ws+24
void f99_MidAddress(i8* p1840 /* m */, i2 p1841 /* off */, i8 p1842 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p1842; /*sym */
	*(i2*)(intptr_t)(ws+3024) = p1841; /*off */

	i1 v1843 = (i1)+42;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1844;
	f88_AllocateNewNode(&v1844, v1843);
	i8 v1845 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v1845 = v1844;

	i8 v1846 = (i8)(intptr_t)(ws+3016);
	i8 v1847 = *(i8*)(intptr_t)v1846;
	i8 v1848 = (i8)(intptr_t)(ws+3032);
	i8 v1849 = *(i8*)(intptr_t)v1848;
	*(i8*)(intptr_t)v1849 = v1847;

	i8 v1850 = (i8)(intptr_t)(ws+3024);
	i2 v1851 = *(i2*)(intptr_t)v1850;
	i8 v1852 = (i8)(intptr_t)(ws+3032);
	i8 v1853 = *(i8*)(intptr_t)v1852;
	i8 v1854 = v1853+(+8);
	*(i2*)(intptr_t)v1854 = v1851;

endsub:;
	*p1840 = *(i8*)(intptr_t)(ws+3032);
}

// MidCall workspace at ws+3056 length ws+24
void f100_MidCall(i8* p1855 /* m */, i8 p1856 /* subr */, i8 p1857 /* left */) {
	*(i8*)(intptr_t)(ws+3056) = p1857; /*left */
	*(i8*)(intptr_t)(ws+3064) = p1856; /*subr */

	i1 v1858 = (i1)+24;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1859;
	f88_AllocateNewNode(&v1859, v1858);
	i8 v1860 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1860 = v1859;

	i8 v1861 = (i8)(intptr_t)(ws+3056);
	i8 v1862 = *(i8*)(intptr_t)v1861;
	i8 v1863 = (i8)(intptr_t)(ws+3072);
	i8 v1864 = *(i8*)(intptr_t)v1863;
	i8 v1865 = v1864+(+24);
	*(i8*)(intptr_t)v1865 = v1862;

	i8 v1866 = (i8)(intptr_t)(ws+3064);
	i8 v1867 = *(i8*)(intptr_t)v1866;
	i8 v1868 = (i8)(intptr_t)(ws+3072);
	i8 v1869 = *(i8*)(intptr_t)v1868;
	*(i8*)(intptr_t)v1869 = v1867;

endsub:;
	*p1855 = *(i8*)(intptr_t)(ws+3072);
}

// MidReturn workspace at ws+3008 length ws+8
void f101_MidReturn(i8* p1870 /* m */) {

	i1 v1871 = (i1)+23;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1872;
	f88_AllocateNewNode(&v1872, v1871);
	i8 v1873 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1873 = v1872;

endsub:;
	*p1870 = *(i8*)(intptr_t)(ws+3008);
}

// MidBeq workspace at ws+3048 length ws+40
void f102_MidBeq(i8* p1874 /* m */, i1 p1875 /* negated */, i2 p1876 /* fallthrough */, i2 p1877 /* falselabel */, i2 p1878 /* truelabel */, i8 p1879 /* right */, i8 p1880 /* left */, i1 p1881 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p1881; /*width */
	*(i8*)(intptr_t)(ws+3056) = p1880; /*left */
	*(i8*)(intptr_t)(ws+3064) = p1879; /*right */
	*(i2*)(intptr_t)(ws+3072) = p1878; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p1877; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p1876; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p1875; /*negated */

	i8 v1882 = (i8)(intptr_t)(ws+3048);
	i1 v1883 = *(i1*)(intptr_t)v1882;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1884;
	f87_WidthToIndex(&v1884, v1883);
	i1 v1885 = v1884+(+55);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1886;
	f88_AllocateNewNode(&v1886, v1885);
	i8 v1887 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1887 = v1886;

	i8 v1888 = (i8)(intptr_t)(ws+3056);
	i8 v1889 = *(i8*)(intptr_t)v1888;
	i8 v1890 = (i8)(intptr_t)(ws+3080);
	i8 v1891 = *(i8*)(intptr_t)v1890;
	i8 v1892 = v1891+(+24);
	*(i8*)(intptr_t)v1892 = v1889;

	i8 v1893 = (i8)(intptr_t)(ws+3064);
	i8 v1894 = *(i8*)(intptr_t)v1893;
	i8 v1895 = (i8)(intptr_t)(ws+3080);
	i8 v1896 = *(i8*)(intptr_t)v1895;
	i8 v1897 = v1896+(+32);
	*(i8*)(intptr_t)v1897 = v1894;

	i8 v1898 = (i8)(intptr_t)(ws+3072);
	i2 v1899 = *(i2*)(intptr_t)v1898;
	i8 v1900 = (i8)(intptr_t)(ws+3080);
	i8 v1901 = *(i8*)(intptr_t)v1900;
	*(i2*)(intptr_t)v1901 = v1899;

	i8 v1902 = (i8)(intptr_t)(ws+3074);
	i2 v1903 = *(i2*)(intptr_t)v1902;
	i8 v1904 = (i8)(intptr_t)(ws+3080);
	i8 v1905 = *(i8*)(intptr_t)v1904;
	i8 v1906 = v1905+(+2);
	*(i2*)(intptr_t)v1906 = v1903;

	i8 v1907 = (i8)(intptr_t)(ws+3076);
	i2 v1908 = *(i2*)(intptr_t)v1907;
	i8 v1909 = (i8)(intptr_t)(ws+3080);
	i8 v1910 = *(i8*)(intptr_t)v1909;
	i8 v1911 = v1910+(+4);
	*(i2*)(intptr_t)v1911 = v1908;

	i8 v1912 = (i8)(intptr_t)(ws+3078);
	i1 v1913 = *(i1*)(intptr_t)v1912;
	i8 v1914 = (i8)(intptr_t)(ws+3080);
	i8 v1915 = *(i8*)(intptr_t)v1914;
	i8 v1916 = v1915+(+6);
	*(i1*)(intptr_t)v1916 = v1913;

endsub:;
	*p1874 = *(i8*)(intptr_t)(ws+3080);
}

// MidInit workspace at ws+3056 length ws+16
void f103_MidInit(i8* p1917 /* m */, i4 p1918 /* value */, i1 p1919 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p1919; /*width */
	*(i4*)(intptr_t)(ws+3060) = p1918; /*value */

	i8 v1920 = (i8)(intptr_t)(ws+3056);
	i1 v1921 = *(i1*)(intptr_t)v1920;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1922;
	f87_WidthToIndex(&v1922, v1921);
	i1 v1923 = v1922+(+7);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1924;
	f88_AllocateNewNode(&v1924, v1923);
	i8 v1925 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v1925 = v1924;

	i8 v1926 = (i8)(intptr_t)(ws+3060);
	i4 v1927 = *(i4*)(intptr_t)v1926;
	i8 v1928 = (i8)(intptr_t)(ws+3064);
	i8 v1929 = *(i8*)(intptr_t)v1928;
	*(i4*)(intptr_t)v1929 = v1927;

endsub:;
	*p1917 = *(i8*)(intptr_t)(ws+3064);
}

// MidPoparg workspace at ws+3056 length ws+32
void f104_MidPoparg(i8* p1930 /* m */, i1 p1931 /* remaining */, i8 p1932 /* subr */, i1 p1933 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p1933; /*width */
	*(i8*)(intptr_t)(ws+3064) = p1932; /*subr */
	*(i1*)(intptr_t)(ws+3072) = p1931; /*remaining */

	i8 v1934 = (i8)(intptr_t)(ws+3056);
	i1 v1935 = *(i1*)(intptr_t)v1934;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1936;
	f87_WidthToIndex(&v1936, v1935);
	i1 v1937 = v1936+(+35);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1938;
	f88_AllocateNewNode(&v1938, v1937);
	i8 v1939 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1939 = v1938;

	i8 v1940 = (i8)(intptr_t)(ws+3064);
	i8 v1941 = *(i8*)(intptr_t)v1940;
	i8 v1942 = (i8)(intptr_t)(ws+3080);
	i8 v1943 = *(i8*)(intptr_t)v1942;
	*(i8*)(intptr_t)v1943 = v1941;

	i8 v1944 = (i8)(intptr_t)(ws+3072);
	i1 v1945 = *(i1*)(intptr_t)v1944;
	i8 v1946 = (i8)(intptr_t)(ws+3080);
	i8 v1947 = *(i8*)(intptr_t)v1946;
	i8 v1948 = v1947+(+8);
	*(i1*)(intptr_t)v1948 = v1945;

endsub:;
	*p1930 = *(i8*)(intptr_t)(ws+3080);
}

// MidStore workspace at ws+3056 length ws+32
void f106_MidStore(i8* p1968 /* m */, i8 p1969 /* right */, i8 p1970 /* left */, i1 p1971 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p1971; /*width */
	*(i8*)(intptr_t)(ws+3064) = p1970; /*left */
	*(i8*)(intptr_t)(ws+3072) = p1969; /*right */

	i8 v1972 = (i8)(intptr_t)(ws+3056);
	i1 v1973 = *(i1*)(intptr_t)v1972;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v1974;
	f87_WidthToIndex(&v1974, v1973);
	i1 v1975 = v1974+(+48);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1976;
	f88_AllocateNewNode(&v1976, v1975);
	i8 v1977 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1977 = v1976;

	i8 v1978 = (i8)(intptr_t)(ws+3064);
	i8 v1979 = *(i8*)(intptr_t)v1978;
	i8 v1980 = (i8)(intptr_t)(ws+3080);
	i8 v1981 = *(i8*)(intptr_t)v1980;
	i8 v1982 = v1981+(+24);
	*(i8*)(intptr_t)v1982 = v1979;

	i8 v1983 = (i8)(intptr_t)(ws+3072);
	i8 v1984 = *(i8*)(intptr_t)v1983;
	i8 v1985 = (i8)(intptr_t)(ws+3080);
	i8 v1986 = *(i8*)(intptr_t)v1985;
	i8 v1987 = v1986+(+32);
	*(i8*)(intptr_t)v1987 = v1984;

endsub:;
	*p1968 = *(i8*)(intptr_t)(ws+3080);
}

// MidConstant workspace at ws+3104 length ws+16
void f107_MidConstant(i8* p1988 /* m */, i4 p1989 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p1989; /*value */

	i1 v1990 = (i1)+40;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1991;
	f88_AllocateNewNode(&v1991, v1990);
	i8 v1992 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v1992 = v1991;

	i8 v1993 = (i8)(intptr_t)(ws+3104);
	i4 v1994 = *(i4*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(ws+3112);
	i8 v1996 = *(i8*)(intptr_t)v1995;
	*(i4*)(intptr_t)v1996 = v1994;

endsub:;
	*p1988 = *(i8*)(intptr_t)(ws+3112);
}

// MidEnd workspace at ws+3016 length ws+8
void f108_MidEnd(i8* p1997 /* m */) {

	i1 v1998 = (i1)+1;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v1999;
	f88_AllocateNewNode(&v1999, v1998);
	i8 v2000 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2000 = v1999;

endsub:;
	*p1997 = *(i8*)(intptr_t)(ws+3016);
}

// MidAsmvalue workspace at ws+3016 length ws+16
void f109_MidAsmvalue(i8* p2001 /* m */, i4 p2002 /* value */) {
	*(i4*)(intptr_t)(ws+3016) = p2002; /*value */

	i1 v2003 = (i1)+17;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2004;
	f88_AllocateNewNode(&v2004, v2003);
	i8 v2005 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2005 = v2004;

	i8 v2006 = (i8)(intptr_t)(ws+3016);
	i4 v2007 = *(i4*)(intptr_t)v2006;
	i8 v2008 = (i8)(intptr_t)(ws+3024);
	i8 v2009 = *(i8*)(intptr_t)v2008;
	*(i4*)(intptr_t)v2009 = v2007;

endsub:;
	*p2001 = *(i8*)(intptr_t)(ws+3024);
}

// MidEndsub workspace at ws+3016 length ws+16
void f111_MidEndsub(i8* p2030 /* m */, i8 p2031 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p2031; /*subr */

	i1 v2032 = (i1)+5;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2033;
	f88_AllocateNewNode(&v2033, v2032);
	i8 v2034 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2034 = v2033;

	i8 v2035 = (i8)(intptr_t)(ws+3016);
	i8 v2036 = *(i8*)(intptr_t)v2035;
	i8 v2037 = (i8)(intptr_t)(ws+3024);
	i8 v2038 = *(i8*)(intptr_t)v2037;
	*(i8*)(intptr_t)v2038 = v2036;

endsub:;
	*p2030 = *(i8*)(intptr_t)(ws+3024);
}

// MidArg workspace at ws+3016 length ws+48
void f112_MidArg(i8* p2039 /* m */, i1 p2040 /* remaining */, i8 p2041 /* subr */, i8 p2042 /* right */, i8 p2043 /* left */, i1 p2044 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2044; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2043; /*left */
	*(i8*)(intptr_t)(ws+3032) = p2042; /*right */
	*(i8*)(intptr_t)(ws+3040) = p2041; /*subr */
	*(i1*)(intptr_t)(ws+3048) = p2040; /*remaining */

	i8 v2045 = (i8)(intptr_t)(ws+3016);
	i1 v2046 = *(i1*)(intptr_t)v2045;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2047;
	f87_WidthToIndex(&v2047, v2046);
	i1 v2048 = v2047+(+30);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2049;
	f88_AllocateNewNode(&v2049, v2048);
	i8 v2050 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2050 = v2049;

	i8 v2051 = (i8)(intptr_t)(ws+3024);
	i8 v2052 = *(i8*)(intptr_t)v2051;
	i8 v2053 = (i8)(intptr_t)(ws+3056);
	i8 v2054 = *(i8*)(intptr_t)v2053;
	i8 v2055 = v2054+(+24);
	*(i8*)(intptr_t)v2055 = v2052;

	i8 v2056 = (i8)(intptr_t)(ws+3032);
	i8 v2057 = *(i8*)(intptr_t)v2056;
	i8 v2058 = (i8)(intptr_t)(ws+3056);
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = v2059+(+32);
	*(i8*)(intptr_t)v2060 = v2057;

	i8 v2061 = (i8)(intptr_t)(ws+3040);
	i8 v2062 = *(i8*)(intptr_t)v2061;
	i8 v2063 = (i8)(intptr_t)(ws+3056);
	i8 v2064 = *(i8*)(intptr_t)v2063;
	*(i8*)(intptr_t)v2064 = v2062;

	i8 v2065 = (i8)(intptr_t)(ws+3048);
	i1 v2066 = *(i1*)(intptr_t)v2065;
	i8 v2067 = (i8)(intptr_t)(ws+3056);
	i8 v2068 = *(i8*)(intptr_t)v2067;
	i8 v2069 = v2068+(+8);
	*(i1*)(intptr_t)v2069 = v2066;

endsub:;
	*p2039 = *(i8*)(intptr_t)(ws+3056);
}

// MidBltu workspace at ws+3048 length ws+40
void f114_MidBltu(i8* p2090 /* m */, i1 p2091 /* negated */, i2 p2092 /* fallthrough */, i2 p2093 /* falselabel */, i2 p2094 /* truelabel */, i8 p2095 /* right */, i8 p2096 /* left */, i1 p2097 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2097; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2096; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2095; /*right */
	*(i2*)(intptr_t)(ws+3072) = p2094; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p2093; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p2092; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p2091; /*negated */

	i8 v2098 = (i8)(intptr_t)(ws+3048);
	i1 v2099 = *(i1*)(intptr_t)v2098;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2100;
	f87_WidthToIndex(&v2100, v2099);
	i1 v2101 = v2100+(+65);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2102;
	f88_AllocateNewNode(&v2102, v2101);
	i8 v2103 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2103 = v2102;

	i8 v2104 = (i8)(intptr_t)(ws+3056);
	i8 v2105 = *(i8*)(intptr_t)v2104;
	i8 v2106 = (i8)(intptr_t)(ws+3080);
	i8 v2107 = *(i8*)(intptr_t)v2106;
	i8 v2108 = v2107+(+24);
	*(i8*)(intptr_t)v2108 = v2105;

	i8 v2109 = (i8)(intptr_t)(ws+3064);
	i8 v2110 = *(i8*)(intptr_t)v2109;
	i8 v2111 = (i8)(intptr_t)(ws+3080);
	i8 v2112 = *(i8*)(intptr_t)v2111;
	i8 v2113 = v2112+(+32);
	*(i8*)(intptr_t)v2113 = v2110;

	i8 v2114 = (i8)(intptr_t)(ws+3072);
	i2 v2115 = *(i2*)(intptr_t)v2114;
	i8 v2116 = (i8)(intptr_t)(ws+3080);
	i8 v2117 = *(i8*)(intptr_t)v2116;
	*(i2*)(intptr_t)v2117 = v2115;

	i8 v2118 = (i8)(intptr_t)(ws+3074);
	i2 v2119 = *(i2*)(intptr_t)v2118;
	i8 v2120 = (i8)(intptr_t)(ws+3080);
	i8 v2121 = *(i8*)(intptr_t)v2120;
	i8 v2122 = v2121+(+2);
	*(i2*)(intptr_t)v2122 = v2119;

	i8 v2123 = (i8)(intptr_t)(ws+3076);
	i2 v2124 = *(i2*)(intptr_t)v2123;
	i8 v2125 = (i8)(intptr_t)(ws+3080);
	i8 v2126 = *(i8*)(intptr_t)v2125;
	i8 v2127 = v2126+(+4);
	*(i2*)(intptr_t)v2127 = v2124;

	i8 v2128 = (i8)(intptr_t)(ws+3078);
	i1 v2129 = *(i1*)(intptr_t)v2128;
	i8 v2130 = (i8)(intptr_t)(ws+3080);
	i8 v2131 = *(i8*)(intptr_t)v2130;
	i8 v2132 = v2131+(+6);
	*(i1*)(intptr_t)v2132 = v2129;

endsub:;
	*p2090 = *(i8*)(intptr_t)(ws+3080);
}

// MidAsmend workspace at ws+3008 length ws+8
void f116_MidAsmend(i8* p2153 /* m */) {

	i1 v2154 = (i1)+18;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2155;
	f88_AllocateNewNode(&v2155, v2154);
	i8 v2156 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2156 = v2155;

endsub:;
	*p2153 = *(i8*)(intptr_t)(ws+3008);
}

// MidStartinit workspace at ws+3024 length ws+16
void f118_MidStartinit(i8* p2177 /* m */, i8 p2178 /* sym */) {
	*(i8*)(intptr_t)(ws+3024) = p2178; /*sym */

	i1 v2179 = (i1)+6;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2180;
	f88_AllocateNewNode(&v2180, v2179);
	i8 v2181 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2181 = v2180;

	i8 v2182 = (i8)(intptr_t)(ws+3024);
	i8 v2183 = *(i8*)(intptr_t)v2182;
	i8 v2184 = (i8)(intptr_t)(ws+3032);
	i8 v2185 = *(i8*)(intptr_t)v2184;
	*(i8*)(intptr_t)v2185 = v2183;

endsub:;
	*p2177 = *(i8*)(intptr_t)(ws+3032);
}

// MidString workspace at ws+3008 length ws+16
void f120_MidString(i8* p2206 /* m */, i8 p2207 /* text */) {
	*(i8*)(intptr_t)(ws+3008) = p2207; /*text */

	i1 v2208 = (i1)+41;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2209;
	f88_AllocateNewNode(&v2209, v2208);
	i8 v2210 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2210 = v2209;

	i8 v2211 = (i8)(intptr_t)(ws+3008);
	i8 v2212 = *(i8*)(intptr_t)v2211;
	i8 v2213 = (i8)(intptr_t)(ws+3016);
	i8 v2214 = *(i8*)(intptr_t)v2213;
	*(i8*)(intptr_t)v2214 = v2212;

endsub:;
	*p2206 = *(i8*)(intptr_t)(ws+3016);
}

// MidJump workspace at ws+3016 length ws+16
void f122_MidJump(i8* p2235 /* m */, i2 p2236 /* label */) {
	*(i2*)(intptr_t)(ws+3016) = p2236; /*label */

	i1 v2237 = (i1)+22;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2238;
	f88_AllocateNewNode(&v2238, v2237);
	i8 v2239 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2239 = v2238;

	i8 v2240 = (i8)(intptr_t)(ws+3016);
	i2 v2241 = *(i2*)(intptr_t)v2240;
	i8 v2242 = (i8)(intptr_t)(ws+3024);
	i8 v2243 = *(i8*)(intptr_t)v2242;
	*(i2*)(intptr_t)v2243 = v2241;

endsub:;
	*p2235 = *(i8*)(intptr_t)(ws+3024);
}

// MidAsmsymbol workspace at ws+3016 length ws+16
void f123_MidAsmsymbol(i8* p2244 /* m */, i8 p2245 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p2245; /*sym */

	i1 v2246 = (i1)+16;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2247;
	f88_AllocateNewNode(&v2247, v2246);
	i8 v2248 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2248 = v2247;

	i8 v2249 = (i8)(intptr_t)(ws+3016);
	i8 v2250 = *(i8*)(intptr_t)v2249;
	i8 v2251 = (i8)(intptr_t)(ws+3024);
	i8 v2252 = *(i8*)(intptr_t)v2251;
	*(i8*)(intptr_t)v2252 = v2250;

endsub:;
	*p2244 = *(i8*)(intptr_t)(ws+3024);
}

// MidLabel workspace at ws+3072 length ws+16
void f126_MidLabel(i8* p2292 /* m */, i2 p2293 /* label */) {
	*(i2*)(intptr_t)(ws+3072) = p2293; /*label */

	i1 v2294 = (i1)+21;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2295;
	f88_AllocateNewNode(&v2295, v2294);
	i8 v2296 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2296 = v2295;

	i8 v2297 = (i8)(intptr_t)(ws+3072);
	i2 v2298 = *(i2*)(intptr_t)v2297;
	i8 v2299 = (i8)(intptr_t)(ws+3080);
	i8 v2300 = *(i8*)(intptr_t)v2299;
	*(i2*)(intptr_t)v2300 = v2298;

endsub:;
	*p2292 = *(i8*)(intptr_t)(ws+3080);
}

// MidAsmstart workspace at ws+3008 length ws+8
void f128_MidAsmstart(i8* p2321 /* m */) {

	i1 v2322 = (i1)+14;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2323;
	f88_AllocateNewNode(&v2323, v2322);
	i8 v2324 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2324 = v2323;

endsub:;
	*p2321 = *(i8*)(intptr_t)(ws+3008);
}

// MidAsmtext workspace at ws+3008 length ws+16
void f133_MidAsmtext(i8* p2399 /* m */, i8 p2400 /* text */) {
	*(i8*)(intptr_t)(ws+3008) = p2400; /*text */

	i1 v2401 = (i1)+15;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2402;
	f88_AllocateNewNode(&v2402, v2401);
	i8 v2403 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2403 = v2402;

	i8 v2404 = (i8)(intptr_t)(ws+3008);
	i8 v2405 = *(i8*)(intptr_t)v2404;
	i8 v2406 = (i8)(intptr_t)(ws+3016);
	i8 v2407 = *(i8*)(intptr_t)v2406;
	*(i8*)(intptr_t)v2407 = v2405;

endsub:;
	*p2399 = *(i8*)(intptr_t)(ws+3016);
}

// MidBor workspace at ws+3008 length ws+32
void f135_MidBor(i8* p2428 /* m */, i1 p2429 /* negated */, i2 p2430 /* fallthrough */, i2 p2431 /* falselabel */, i2 p2432 /* truelabel */, i8 p2433 /* right */, i8 p2434 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2434; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2433; /*right */
	*(i2*)(intptr_t)(ws+3024) = p2432; /*truelabel */
	*(i2*)(intptr_t)(ws+3026) = p2431; /*falselabel */
	*(i2*)(intptr_t)(ws+3028) = p2430; /*fallthrough */
	*(i1*)(intptr_t)(ws+3030) = p2429; /*negated */

	i1 v2435 = (i1)+54;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2436;
	f88_AllocateNewNode(&v2436, v2435);
	i8 v2437 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2437 = v2436;

	i8 v2438 = (i8)(intptr_t)(ws+3008);
	i8 v2439 = *(i8*)(intptr_t)v2438;
	i8 v2440 = (i8)(intptr_t)(ws+3032);
	i8 v2441 = *(i8*)(intptr_t)v2440;
	i8 v2442 = v2441+(+24);
	*(i8*)(intptr_t)v2442 = v2439;

	i8 v2443 = (i8)(intptr_t)(ws+3016);
	i8 v2444 = *(i8*)(intptr_t)v2443;
	i8 v2445 = (i8)(intptr_t)(ws+3032);
	i8 v2446 = *(i8*)(intptr_t)v2445;
	i8 v2447 = v2446+(+32);
	*(i8*)(intptr_t)v2447 = v2444;

	i8 v2448 = (i8)(intptr_t)(ws+3024);
	i2 v2449 = *(i2*)(intptr_t)v2448;
	i8 v2450 = (i8)(intptr_t)(ws+3032);
	i8 v2451 = *(i8*)(intptr_t)v2450;
	*(i2*)(intptr_t)v2451 = v2449;

	i8 v2452 = (i8)(intptr_t)(ws+3026);
	i2 v2453 = *(i2*)(intptr_t)v2452;
	i8 v2454 = (i8)(intptr_t)(ws+3032);
	i8 v2455 = *(i8*)(intptr_t)v2454;
	i8 v2456 = v2455+(+2);
	*(i2*)(intptr_t)v2456 = v2453;

	i8 v2457 = (i8)(intptr_t)(ws+3028);
	i2 v2458 = *(i2*)(intptr_t)v2457;
	i8 v2459 = (i8)(intptr_t)(ws+3032);
	i8 v2460 = *(i8*)(intptr_t)v2459;
	i8 v2461 = v2460+(+4);
	*(i2*)(intptr_t)v2461 = v2458;

	i8 v2462 = (i8)(intptr_t)(ws+3030);
	i1 v2463 = *(i1*)(intptr_t)v2462;
	i8 v2464 = (i8)(intptr_t)(ws+3032);
	i8 v2465 = *(i8*)(intptr_t)v2464;
	i8 v2466 = v2465+(+6);
	*(i1*)(intptr_t)v2466 = v2463;

endsub:;
	*p2428 = *(i8*)(intptr_t)(ws+3032);
}

// MidPair workspace at ws+3008 length ws+24
void f136_MidPair(i8* p2467 /* m */, i8 p2468 /* right */, i8 p2469 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2469; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2468; /*right */

	i1 v2470 = (i1)+20;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2471;
	f88_AllocateNewNode(&v2471, v2470);
	i8 v2472 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2472 = v2471;

	i8 v2473 = (i8)(intptr_t)(ws+3008);
	i8 v2474 = *(i8*)(intptr_t)v2473;
	i8 v2475 = (i8)(intptr_t)(ws+3024);
	i8 v2476 = *(i8*)(intptr_t)v2475;
	i8 v2477 = v2476+(+24);
	*(i8*)(intptr_t)v2477 = v2474;

	i8 v2478 = (i8)(intptr_t)(ws+3016);
	i8 v2479 = *(i8*)(intptr_t)v2478;
	i8 v2480 = (i8)(intptr_t)(ws+3024);
	i8 v2481 = *(i8*)(intptr_t)v2480;
	i8 v2482 = v2481+(+32);
	*(i8*)(intptr_t)v2482 = v2479;

endsub:;
	*p2467 = *(i8*)(intptr_t)(ws+3024);
}

// MidCalle workspace at ws+3024 length ws+32
void f137_MidCalle(i8* p2483 /* m */, i8 p2484 /* subr */, i8 p2485 /* left */, i1 p2486 /* width */) {
	*(i1*)(intptr_t)(ws+3024) = p2486; /*width */
	*(i8*)(intptr_t)(ws+3032) = p2485; /*left */
	*(i8*)(intptr_t)(ws+3040) = p2484; /*subr */

	i8 v2487 = (i8)(intptr_t)(ws+3024);
	i1 v2488 = *(i1*)(intptr_t)v2487;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2489;
	f87_WidthToIndex(&v2489, v2488);
	i1 v2490 = v2489+(+25);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2491;
	f88_AllocateNewNode(&v2491, v2490);
	i8 v2492 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v2492 = v2491;

	i8 v2493 = (i8)(intptr_t)(ws+3032);
	i8 v2494 = *(i8*)(intptr_t)v2493;
	i8 v2495 = (i8)(intptr_t)(ws+3048);
	i8 v2496 = *(i8*)(intptr_t)v2495;
	i8 v2497 = v2496+(+24);
	*(i8*)(intptr_t)v2497 = v2494;

	i8 v2498 = (i8)(intptr_t)(ws+3040);
	i8 v2499 = *(i8*)(intptr_t)v2498;
	i8 v2500 = (i8)(intptr_t)(ws+3048);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	*(i8*)(intptr_t)v2501 = v2499;

endsub:;
	*p2483 = *(i8*)(intptr_t)(ws+3048);
}

// MidStartcase workspace at ws+3016 length ws+24
void f138_MidStartcase(i8* p2502 /* m */, i8 p2503 /* left */, i1 p2504 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2504; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2503; /*left */

	i8 v2505 = (i8)(intptr_t)(ws+3016);
	i1 v2506 = *(i1*)(intptr_t)v2505;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2507;
	f87_WidthToIndex(&v2507, v2506);
	i1 v2508 = v2507+(+70);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2509;
	f88_AllocateNewNode(&v2509, v2508);
	i8 v2510 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2510 = v2509;

	i8 v2511 = (i8)(intptr_t)(ws+3024);
	i8 v2512 = *(i8*)(intptr_t)v2511;
	i8 v2513 = (i8)(intptr_t)(ws+3032);
	i8 v2514 = *(i8*)(intptr_t)v2513;
	i8 v2515 = v2514+(+24);
	*(i8*)(intptr_t)v2515 = v2512;

endsub:;
	*p2502 = *(i8*)(intptr_t)(ws+3032);
}

// MidEndcase workspace at ws+3016 length ws+16
void f139_MidEndcase(i8* p2516 /* m */, i1 p2517 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2517; /*width */

	i8 v2518 = (i8)(intptr_t)(ws+3016);
	i1 v2519 = *(i1*)(intptr_t)v2518;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2520;
	f87_WidthToIndex(&v2520, v2519);
	i1 v2521 = v2520+(+80);

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2522;
	f88_AllocateNewNode(&v2522, v2521);
	i8 v2523 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2523 = v2522;

endsub:;
	*p2516 = *(i8*)(intptr_t)(ws+3024);
}

// MidEndinit workspace at ws+3008 length ws+8
void f141_MidEndinit(i8* p2538 /* m */) {

	i1 v2539 = (i1)+13;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2540;
	f88_AllocateNewNode(&v2540, v2539);
	i8 v2541 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2541 = v2540;

endsub:;
	*p2538 = *(i8*)(intptr_t)(ws+3008);
}

// MidEndfile workspace at ws+2888 length ws+8
void f142_MidEndfile(i8* p2542 /* m */) {

	i1 v2543 = (i1)+3;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2544;
	f88_AllocateNewNode(&v2544, v2543);
	i8 v2545 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v2545 = v2544;

endsub:;
	*p2542 = *(i8*)(intptr_t)(ws+2888);
}

// NodeWidth workspace at ws+3056 length ws+9
void f144_NodeWidth(i1* p2565 /* width */, i8 p2566 /* node */) {
	*(i8*)(intptr_t)(ws+3056) = p2566; /*node */

	i1 v2567 = (i1)+0;
	i8 v2568 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2568 = v2567;

	i8 v2569 = (i8)(intptr_t)(ws+3056);
	i8 v2570 = *(i8*)(intptr_t)v2569;
	i8 v2571 = v2570+(+16);
	i8 v2572 = *(i8*)(intptr_t)v2571;
	i8 v2573 = (i8)+0;
	if (v2572==v2573) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	i8 v2574 = (i8)(intptr_t)(ws+3056);
	i8 v2575 = *(i8*)(intptr_t)v2574;
	i8 v2576 = v2575+(+16);
	i8 v2577 = *(i8*)(intptr_t)v2576;
	i8 v2578 = v2577+(+42);
	i2 v2579 = *(i2*)(intptr_t)v2578;
	i1 v2580 = v2579;
	i8 v2581 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2581 = v2580;

	goto c02_01d2;

c02_01d6:;

c02_01d2:;

endsub:;
	*p2565 = *(i1*)(intptr_t)(ws+3064);
}
const i1 c02_s003f[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };

// midcodec_i_bad_fold workspace at ws+3144 length ws+0
void f145_midcodec_i_bad_fold(void) {

	i8 v2582 = (i8)(intptr_t)c02_s003f;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v2582);

endsub:;
}

// FoldConstant1 workspace at ws+3056 length ws+24
void f146_FoldConstant1(i4* p2583 /* result */, i8 p2584 /* lhsp */, i1 p2585 /* op */) {
	*(i1*)(intptr_t)(ws+3056) = p2585; /*op */
	*(i8*)(intptr_t)(ws+3064) = p2584; /*lhsp */

	i8 v2586 = (i8)(intptr_t)(ws+3064);
	i8 v2587 = *(i8*)(intptr_t)v2586;
	i4 v2588 = *(i4*)(intptr_t)v2587;
	i8 v2589 = (i8)(intptr_t)(ws+3076);
	*(i4*)(intptr_t)v2589 = v2588;

	i8 v2590 = (i8)(intptr_t)(ws+3056);
	i1 v2591 = *(i1*)(intptr_t)v2590;

	if (v2591 != +105) goto c02_01d8;

	i8 v2592 = (i8)(intptr_t)(ws+3076);
	i4 v2593 = *(i4*)(intptr_t)v2592;
	i4 v2594 = ~v2593;
	i8 v2595 = (i8)(intptr_t)(ws+3072);
	*(i4*)(intptr_t)v2595 = v2594;

	goto c02_01d7;

c02_01d8:;

	if (v2591 != +110) goto c02_01d9;

	i8 v2596 = (i8)(intptr_t)(ws+3076);
	i4 v2597 = *(i4*)(intptr_t)v2596;
	i4 v2598 = -v2597;
	i8 v2599 = (i8)(intptr_t)(ws+3072);
	*(i4*)(intptr_t)v2599 = v2598;

	goto c02_01d7;

c02_01d9:;


	void f145_midcodec_i_bad_fold(void);
	f145_midcodec_i_bad_fold();

c02_01d7:;


endsub:;
	*p2583 = *(i4*)(intptr_t)(ws+3072);
}

// FoldConstant2 workspace at ws+3104 length ws+36
void f147_FoldConstant2(i4* p2600 /* result */, i8 p2601 /* rhsp */, i8 p2602 /* lhsp */, i1 p2603 /* op */) {
	*(i1*)(intptr_t)(ws+3104) = p2603; /*op */
	*(i8*)(intptr_t)(ws+3112) = p2602; /*lhsp */
	*(i8*)(intptr_t)(ws+3120) = p2601; /*rhsp */

	i8 v2604 = (i8)(intptr_t)(ws+3112);
	i8 v2605 = *(i8*)(intptr_t)v2604;
	i4 v2606 = *(i4*)(intptr_t)v2605;
	i8 v2607 = (i8)(intptr_t)(ws+3132);
	*(i4*)(intptr_t)v2607 = v2606;

	i8 v2608 = (i8)(intptr_t)(ws+3120);
	i8 v2609 = *(i8*)(intptr_t)v2608;
	i4 v2610 = *(i4*)(intptr_t)v2609;
	i8 v2611 = (i8)(intptr_t)(ws+3136);
	*(i4*)(intptr_t)v2611 = v2610;

	i8 v2612 = (i8)(intptr_t)(ws+3104);
	i1 v2613 = *(i1*)(intptr_t)v2612;

	if (v2613 != +155) goto c02_01db;

	i8 v2614 = (i8)(intptr_t)(ws+3132);
	i4 v2615 = *(i4*)(intptr_t)v2614;
	i8 v2616 = (i8)(intptr_t)(ws+3136);
	i4 v2617 = *(i4*)(intptr_t)v2616;
	i4 v2618 = v2615+v2617;
	i8 v2619 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2619 = v2618;

	goto c02_01da;

c02_01db:;

	if (v2613 != +130) goto c02_01dc;

	i8 v2620 = (i8)(intptr_t)(ws+3132);
	i4 v2621 = *(i4*)(intptr_t)v2620;
	i8 v2622 = (i8)(intptr_t)(ws+3136);
	i4 v2623 = *(i4*)(intptr_t)v2622;
	i4 v2624 = v2621-v2623;
	i8 v2625 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2625 = v2624;

	goto c02_01da;

c02_01dc:;

	if (v2613 != +160) goto c02_01dd;

	i8 v2626 = (i8)(intptr_t)(ws+3132);
	i4 v2627 = *(i4*)(intptr_t)v2626;
	i8 v2628 = (i8)(intptr_t)(ws+3136);
	i4 v2629 = *(i4*)(intptr_t)v2628;
	i4 v2630 = v2627*v2629;
	i8 v2631 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2631 = v2630;

	goto c02_01da;

c02_01dd:;

	if (v2613 != +135) goto c02_01de;

	i8 v2632 = (i8)(intptr_t)(ws+3132);
	i4 v2633 = *(i4*)(intptr_t)v2632;
	i8 v2634 = (i8)(intptr_t)(ws+3136);
	i4 v2635 = *(i4*)(intptr_t)v2634;
	i4 v2636 = v2633/v2635;
	i8 v2637 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2637 = v2636;

	goto c02_01da;

c02_01de:;

	if (v2613 != +140) goto c02_01df;

	i8 v2638 = (i8)(intptr_t)(ws+3132);
	i4 v2639 = *(i4*)(intptr_t)v2638;
	i8 v2640 = (i8)(intptr_t)(ws+3136);
	i4 v2641 = *(i4*)(intptr_t)v2640;
	i4 v2642 = (s4)v2639/(s4)v2641;
	i8 v2643 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2643 = v2642;

	goto c02_01da;

c02_01df:;

	if (v2613 != +145) goto c02_01e0;

	i8 v2644 = (i8)(intptr_t)(ws+3132);
	i4 v2645 = *(i4*)(intptr_t)v2644;
	i8 v2646 = (i8)(intptr_t)(ws+3136);
	i4 v2647 = *(i4*)(intptr_t)v2646;
	i4 v2648 = v2645%v2647;
	i8 v2649 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2649 = v2648;

	goto c02_01da;

c02_01e0:;

	if (v2613 != +150) goto c02_01e1;

	i8 v2650 = (i8)(intptr_t)(ws+3132);
	i4 v2651 = *(i4*)(intptr_t)v2650;
	i8 v2652 = (i8)(intptr_t)(ws+3136);
	i4 v2653 = *(i4*)(intptr_t)v2652;
	i4 v2654 = (s4)v2651%(s4)v2653;
	i8 v2655 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2655 = v2654;

	goto c02_01da;

c02_01e1:;

	if (v2613 != +165) goto c02_01e2;

	i8 v2656 = (i8)(intptr_t)(ws+3132);
	i4 v2657 = *(i4*)(intptr_t)v2656;
	i8 v2658 = (i8)(intptr_t)(ws+3136);
	i4 v2659 = *(i4*)(intptr_t)v2658;
	i4 v2660 = v2657&v2659;
	i8 v2661 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2661 = v2660;

	goto c02_01da;

c02_01e2:;

	if (v2613 != +170) goto c02_01e3;

	i8 v2662 = (i8)(intptr_t)(ws+3132);
	i4 v2663 = *(i4*)(intptr_t)v2662;
	i8 v2664 = (i8)(intptr_t)(ws+3136);
	i4 v2665 = *(i4*)(intptr_t)v2664;
	i4 v2666 = v2663|v2665;
	i8 v2667 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2667 = v2666;

	goto c02_01da;

c02_01e3:;

	if (v2613 != +175) goto c02_01e4;

	i8 v2668 = (i8)(intptr_t)(ws+3132);
	i4 v2669 = *(i4*)(intptr_t)v2668;
	i8 v2670 = (i8)(intptr_t)(ws+3136);
	i4 v2671 = *(i4*)(intptr_t)v2670;
	i4 v2672 = v2669^v2671;
	i8 v2673 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2673 = v2672;

	goto c02_01da;

c02_01e4:;

	if (v2613 != +115) goto c02_01e5;

	i8 v2674 = (i8)(intptr_t)(ws+3132);
	i4 v2675 = *(i4*)(intptr_t)v2674;
	i8 v2676 = (i8)(intptr_t)(ws+3136);
	i4 v2677 = *(i4*)(intptr_t)v2676;
	i1 v2678 = (s1)(s4)v2677;
	i4 v2679 = ((i4)v2675)<<v2678;
	i8 v2680 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2680 = v2679;

	goto c02_01da;

c02_01e5:;

	if (v2613 != +120) goto c02_01e6;

	i8 v2681 = (i8)(intptr_t)(ws+3132);
	i4 v2682 = *(i4*)(intptr_t)v2681;
	i8 v2683 = (i8)(intptr_t)(ws+3136);
	i4 v2684 = *(i4*)(intptr_t)v2683;
	i1 v2685 = (s1)(s4)v2684;
	i4 v2686 = ((i4)v2682)>>v2685;
	i8 v2687 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2687 = v2686;

	goto c02_01da;

c02_01e6:;

	if (v2613 != +125) goto c02_01e7;

	i8 v2688 = (i8)(intptr_t)(ws+3132);
	i4 v2689 = *(i4*)(intptr_t)v2688;
	i8 v2690 = (i8)(intptr_t)(ws+3136);
	i4 v2691 = *(i4*)(intptr_t)v2690;
	i1 v2692 = (s1)(s4)v2691;
	i4 v2693 = ((s4)v2689)>>v2692;
	i8 v2694 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2694 = v2693;

	goto c02_01da;

c02_01e7:;


	void f145_midcodec_i_bad_fold(void);
	f145_midcodec_i_bad_fold();

c02_01da:;


endsub:;
	*p2600 = *(i4*)(intptr_t)(ws+3128);
}

// MidC1Op workspace at ws+3032 length ws+24
void f148_MidC1Op(i8* p2695 /* result */, i8 p2696 /* lhs */, i1 p2697 /* width */, i1 p2698 /* op */) {
	*(i1*)(intptr_t)(ws+3032) = p2698; /*op */
	*(i1*)(intptr_t)(ws+3033) = p2697; /*width */
	*(i8*)(intptr_t)(ws+3040) = p2696; /*lhs */

	i8 v2699 = (i8)(intptr_t)(ws+3040);
	i8 v2700 = *(i8*)(intptr_t)v2699;
	i8 v2701 = v2700+(+58);
	i1 v2702 = *(i1*)(intptr_t)v2701;
	i1 v2703 = (i1)+40;
	if (v2702==v2703) goto c02_01eb; else goto c02_01ec;

c02_01eb:;

	i8 v2704 = (i8)(intptr_t)(ws+3032);
	i1 v2705 = *(i1*)(intptr_t)v2704;
	i8 v2706 = (i8)(intptr_t)(ws+3040);
	i8 v2707 = *(i8*)(intptr_t)v2706;

	void f146_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	i4 v2708;
	f146_FoldConstant1(&v2708, v2707, v2705);
	i8 v2709 = (i8)(intptr_t)(ws+3040);
	i8 v2710 = *(i8*)(intptr_t)v2709;
	*(i4*)(intptr_t)v2710 = v2708;

	i8 v2711 = (i8)(intptr_t)(ws+3040);
	i8 v2712 = *(i8*)(intptr_t)v2711;
	i8 v2713 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v2713 = v2712;

	goto c02_01e8;

c02_01ec:;

	i8 v2714 = (i8)(intptr_t)(ws+3032);
	i1 v2715 = *(i1*)(intptr_t)v2714;
	i8 v2716 = (i8)(intptr_t)(ws+3033);
	i1 v2717 = *(i1*)(intptr_t)v2716;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2718;
	f87_WidthToIndex(&v2718, v2717);
	i1 v2719 = v2715+v2718;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2720;
	f88_AllocateNewNode(&v2720, v2719);
	i8 v2721 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v2721 = v2720;

	i8 v2722 = (i8)(intptr_t)(ws+3040);
	i8 v2723 = *(i8*)(intptr_t)v2722;
	i8 v2724 = (i8)(intptr_t)(ws+3048);
	i8 v2725 = *(i8*)(intptr_t)v2724;
	i8 v2726 = v2725+(+24);
	*(i8*)(intptr_t)v2726 = v2723;

c02_01e8:;

endsub:;
	*p2695 = *(i8*)(intptr_t)(ws+3048);
}

// GetPowerOfTwo workspace at ws+3104 length ws+5
void f149_GetPowerOfTwo(i1* p2727 /* exp */, i4 p2728 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p2728; /*value */

	i1 v2729 = (i1)+0;
	i8 v2730 = (i8)(intptr_t)(ws+3108);
	*(i1*)(intptr_t)v2730 = v2729;

	i4 v2731 = (i4)+0;
	i8 v2732 = (i8)(intptr_t)(ws+3104);
	i4 v2733 = *(i4*)(intptr_t)v2732;
	if ((s4)v2731<(s4)v2733) goto c02_01f4; else goto c02_01f3;

c02_01f4:;

	i8 v2734 = (i8)(intptr_t)(ws+3104);
	i4 v2735 = *(i4*)(intptr_t)v2734;
	i8 v2736 = (i8)(intptr_t)(ws+3104);
	i4 v2737 = *(i4*)(intptr_t)v2736;
	i4 v2738 = v2737+(-1);
	i4 v2739 = v2735&v2738;
	i4 v2740 = (i4)+0;
	if (v2739==v2740) goto c02_01f2; else goto c02_01f3;

c02_01f2:;

c02_01f7:;

	i8 v2741 = (i8)(intptr_t)(ws+3104);
	i4 v2742 = *(i4*)(intptr_t)v2741;
	i4 v2743 = (i4)+0;
	if (v2742==v2743) goto c02_01fa; else goto c02_01f9;

c02_01f9:;

	i8 v2744 = (i8)(intptr_t)(ws+3108);
	i1 v2745 = *(i1*)(intptr_t)v2744;
	i1 v2746 = v2745+(+1);
	i8 v2747 = (i8)(intptr_t)(ws+3108);
	*(i1*)(intptr_t)v2747 = v2746;

	i8 v2748 = (i8)(intptr_t)(ws+3104);
	i4 v2749 = *(i4*)(intptr_t)v2748;
	i1 v2750 = (i1)+1;
	i4 v2751 = ((s4)v2749)>>v2750;
	i8 v2752 = (i8)(intptr_t)(ws+3104);
	*(i4*)(intptr_t)v2752 = v2751;

	goto c02_01f7;

c02_01fa:;

	goto c02_01ed;

c02_01f3:;

c02_01ed:;

endsub:;
	*p2727 = *(i1*)(intptr_t)(ws+3108);
}

// MidC2Op workspace at ws+3056 length ws+48
void f150_MidC2Op(i8* p2753 /* result */, i8 p2754 /* rhs */, i8 p2755 /* lhs */, i1 p2756 /* width */, i1 p2757 /* op */) {
	*(i1*)(intptr_t)(ws+3056) = p2757; /*op */
	*(i1*)(intptr_t)(ws+3057) = p2756; /*width */
	*(i8*)(intptr_t)(ws+3064) = p2755; /*lhs */
	*(i8*)(intptr_t)(ws+3072) = p2754; /*rhs */

	i8 v2758 = (i8)(intptr_t)(ws+3056);
	i1 v2759 = *(i1*)(intptr_t)v2758;
	i1 v2760 = (i1)+130;
	if (v2759==v2760) goto c02_0202; else goto c02_0201;

c02_0202:;

	i8 v2761 = (i8)(intptr_t)(ws+3072);
	i8 v2762 = *(i8*)(intptr_t)v2761;
	i8 v2763 = v2762+(+58);
	i1 v2764 = *(i1*)(intptr_t)v2763;
	i1 v2765 = (i1)+40;
	if (v2764==v2765) goto c02_0200; else goto c02_0201;

c02_0200:;

	i8 v2766 = (i8)(intptr_t)(ws+3072);
	i8 v2767 = *(i8*)(intptr_t)v2766;
	i4 v2768 = *(i4*)(intptr_t)v2767;
	i4 v2769 = -v2768;
	i8 v2770 = (i8)(intptr_t)(ws+3072);
	i8 v2771 = *(i8*)(intptr_t)v2770;
	*(i4*)(intptr_t)v2771 = v2769;

	i1 v2772 = (i1)+155;
	i8 v2773 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v2773 = v2772;

	goto c02_01fb;

c02_0201:;

c02_01fb:;

	i8 v2774 = (i8)(intptr_t)(ws+3056);
	i1 v2775 = *(i1*)(intptr_t)v2774;
	i1 v2776 = (i1)+155;
	if (v2775<v2776) goto c02_0207; else goto c02_0206;

c02_0206:;

	i8 v2777 = (i8)(intptr_t)(ws+3064);
	i8 v2778 = *(i8*)(intptr_t)v2777;
	i8 v2779 = v2778+(+58);
	i1 v2780 = *(i1*)(intptr_t)v2779;
	i1 v2781 = (i1)+40;
	if (v2780==v2781) goto c02_020b; else goto c02_020c;

c02_020b:;

	i8 v2782 = (i8)(intptr_t)(ws+3064);
	i8 v2783 = *(i8*)(intptr_t)v2782;
	i8 v2784 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v2784 = v2783;

	i8 v2785 = (i8)(intptr_t)(ws+3072);
	i8 v2786 = *(i8*)(intptr_t)v2785;
	i8 v2787 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2787 = v2786;

	i8 v2788 = (i8)(intptr_t)(ws+3088);
	i8 v2789 = *(i8*)(intptr_t)v2788;
	i8 v2790 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2790 = v2789;

	goto c02_0208;

c02_020c:;

c02_0208:;

	i8 v2791 = (i8)(intptr_t)(ws+3072);
	i8 v2792 = *(i8*)(intptr_t)v2791;
	i8 v2793 = v2792+(+58);
	i1 v2794 = *(i1*)(intptr_t)v2793;
	i1 v2795 = (i1)+40;
	if (v2794==v2795) goto c02_021a; else goto c02_0217;

c02_021a:;

	i8 v2796 = (i8)(intptr_t)(ws+3064);
	i8 v2797 = *(i8*)(intptr_t)v2796;
	i8 v2798 = v2797+(+58);
	i1 v2799 = *(i1*)(intptr_t)v2798;
	i8 v2800 = (i8)(intptr_t)(ws+3056);
	i1 v2801 = *(i1*)(intptr_t)v2800;
	if (v2799<v2801) goto c02_0217; else goto c02_0219;

c02_0219:;

	i8 v2802 = (i8)(intptr_t)(ws+3056);
	i1 v2803 = *(i1*)(intptr_t)v2802;
	i1 v2804 = v2803+(+4);
	i8 v2805 = (i8)(intptr_t)(ws+3064);
	i8 v2806 = *(i8*)(intptr_t)v2805;
	i8 v2807 = v2806+(+58);
	i1 v2808 = *(i1*)(intptr_t)v2807;
	if (v2804<v2808) goto c02_0217; else goto c02_0218;

c02_0218:;

	i8 v2809 = (i8)(intptr_t)(ws+3064);
	i8 v2810 = *(i8*)(intptr_t)v2809;
	i8 v2811 = v2810+(+32);
	i8 v2812 = *(i8*)(intptr_t)v2811;
	i8 v2813 = v2812+(+58);
	i1 v2814 = *(i1*)(intptr_t)v2813;
	i1 v2815 = (i1)+40;
	if (v2814==v2815) goto c02_0216; else goto c02_0217;

c02_0216:;

	i8 v2816 = (i8)(intptr_t)(ws+3056);
	i1 v2817 = *(i1*)(intptr_t)v2816;
	i8 v2818 = (i8)(intptr_t)(ws+3064);
	i8 v2819 = *(i8*)(intptr_t)v2818;
	i8 v2820 = v2819+(+32);
	i8 v2821 = *(i8*)(intptr_t)v2820;
	i8 v2822 = (i8)(intptr_t)(ws+3072);
	i8 v2823 = *(i8*)(intptr_t)v2822;

	void f147_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	i4 v2824;
	f147_FoldConstant2(&v2824, v2823, v2821, v2817);

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v2825;
	f107_MidConstant(&v2825, v2824);
	i8 v2826 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v2826 = v2825;

	i8 v2827 = (i8)(intptr_t)(ws+3072);
	i8 v2828 = *(i8*)(intptr_t)v2827;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2828);

	i8 v2829 = (i8)(intptr_t)(ws+3088);
	i8 v2830 = *(i8*)(intptr_t)v2829;
	i8 v2831 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2831 = v2830;

	i8 v2832 = (i8)(intptr_t)(ws+3064);
	i8 v2833 = *(i8*)(intptr_t)v2832;
	i8 v2834 = v2833+(+24);
	i8 v2835 = *(i8*)(intptr_t)v2834;
	i8 v2836 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v2836 = v2835;

	i8 v2837 = (i8)+0;
	i8 v2838 = (i8)(intptr_t)(ws+3064);
	i8 v2839 = *(i8*)(intptr_t)v2838;
	i8 v2840 = v2839+(+24);
	*(i8*)(intptr_t)v2840 = v2837;

	i8 v2841 = (i8)(intptr_t)(ws+3064);
	i8 v2842 = *(i8*)(intptr_t)v2841;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2842);

	i8 v2843 = (i8)(intptr_t)(ws+3088);
	i8 v2844 = *(i8*)(intptr_t)v2843;
	i8 v2845 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2845 = v2844;

	goto c02_020d;

c02_0217:;

c02_020d:;

	goto c02_0203;

c02_0207:;

c02_0203:;

	i8 v2846 = (i8)(intptr_t)(ws+3064);
	i8 v2847 = *(i8*)(intptr_t)v2846;
	i8 v2848 = v2847+(+58);
	i1 v2849 = *(i1*)(intptr_t)v2848;
	i1 v2850 = (i1)+40;
	if (v2849==v2850) goto c02_0221; else goto c02_0222;

c02_0222:;

	i8 v2851 = (i8)(intptr_t)(ws+3072);
	i8 v2852 = *(i8*)(intptr_t)v2851;
	i8 v2853 = v2852+(+58);
	i1 v2854 = *(i1*)(intptr_t)v2853;
	i1 v2855 = (i1)+40;
	if (v2854==v2855) goto c02_0220; else goto c02_0221;

c02_0220:;

	i8 v2856 = (i8)(intptr_t)(ws+3056);
	i1 v2857 = *(i1*)(intptr_t)v2856;
	i1 v2858 = (i1)+160;
	if (v2857==v2858) goto c02_022a; else goto c02_022d;

c02_022d:;

	i8 v2859 = (i8)(intptr_t)(ws+3056);
	i1 v2860 = *(i1*)(intptr_t)v2859;
	i1 v2861 = (i1)+140;
	if (v2860==v2861) goto c02_022a; else goto c02_022c;

c02_022c:;

	i8 v2862 = (i8)(intptr_t)(ws+3056);
	i1 v2863 = *(i1*)(intptr_t)v2862;
	i1 v2864 = (i1)+135;
	if (v2863==v2864) goto c02_022a; else goto c02_022b;

c02_022a:;

	i8 v2865 = (i8)(intptr_t)(ws+3072);
	i8 v2866 = *(i8*)(intptr_t)v2865;
	i4 v2867 = *(i4*)(intptr_t)v2866;
	i8 v2868 = (i8)(intptr_t)(ws+3096);
	*(i4*)(intptr_t)v2868 = v2867;

	i8 v2869 = (i8)(intptr_t)(ws+3096);
	i4 v2870 = *(i4*)(intptr_t)v2869;

	void f149_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	i1 v2871;
	f149_GetPowerOfTwo(&v2871, v2870);
	i8 v2872 = (i8)(intptr_t)(ws+3100);
	*(i1*)(intptr_t)v2872 = v2871;

	i8 v2873 = (i8)(intptr_t)(ws+3100);
	i1 v2874 = *(i1*)(intptr_t)v2873;
	i1 v2875 = (i1)+0;
	if (v2874==v2875) goto c02_0232; else goto c02_0231;

c02_0231:;

	i8 v2876 = (i8)(intptr_t)(ws+3072);
	i8 v2877 = *(i8*)(intptr_t)v2876;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2877);

	i8 v2878 = (i8)(intptr_t)(ws+3100);
	i1 v2879 = *(i1*)(intptr_t)v2878;
	i1 v2880 = v2879+(-1);
	i4 v2881 = v2880;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v2882;
	f107_MidConstant(&v2882, v2881);
	i8 v2883 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2883 = v2882;

	i8 v2884 = (i8)(intptr_t)(ws+3056);
	i1 v2885 = *(i1*)(intptr_t)v2884;

	if (v2885 != +160) goto c02_0234;

	i1 v2886 = (i1)+115;
	i8 v2887 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v2887 = v2886;

	goto c02_0233;

c02_0234:;

	if (v2885 != +140) goto c02_0235;

	i1 v2888 = (i1)+125;
	i8 v2889 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v2889 = v2888;

	goto c02_0233;

c02_0235:;

	if (v2885 != +135) goto c02_0236;

	i1 v2890 = (i1)+120;
	i8 v2891 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v2891 = v2890;

c02_0236:;

c02_0233:;


	goto c02_022e;

c02_0232:;

c02_022e:;

	goto c02_0223;

c02_022b:;

c02_0223:;

	i8 v2892 = (i8)(intptr_t)(ws+3056);
	i1 v2893 = *(i1*)(intptr_t)v2892;
	i1 v2894 = (i1)+115;
	if (v2893==v2894) goto c02_023e; else goto c02_0241;

c02_0241:;

	i8 v2895 = (i8)(intptr_t)(ws+3056);
	i1 v2896 = *(i1*)(intptr_t)v2895;
	i1 v2897 = (i1)+120;
	if (v2896==v2897) goto c02_023e; else goto c02_0240;

c02_0240:;

	i8 v2898 = (i8)(intptr_t)(ws+3056);
	i1 v2899 = *(i1*)(intptr_t)v2898;
	i1 v2900 = (i1)+125;
	if (v2899==v2900) goto c02_023e; else goto c02_023f;

c02_023e:;

	i8 v2901 = (i8)(intptr_t)(ws+3072);
	i8 v2902 = *(i8*)(intptr_t)v2901;
	i4 v2903 = *(i4*)(intptr_t)v2902;
	i4 v2904 = (i4)+0;
	if (v2903==v2904) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v2905 = (i8)(intptr_t)(ws+3072);
	i8 v2906 = *(i8*)(intptr_t)v2905;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2906);

	i8 v2907 = (i8)(intptr_t)(ws+3064);
	i8 v2908 = *(i8*)(intptr_t)v2907;
	i8 v2909 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2909 = v2908;

	goto endsub;

c02_0246:;

c02_0242:;

	goto c02_0237;

c02_023f:;

c02_0237:;

	i8 v2910 = (i8)(intptr_t)(ws+3056);
	i1 v2911 = *(i1*)(intptr_t)v2910;
	i1 v2912 = (i1)+155;
	if (v2911==v2912) goto c02_024c; else goto c02_024e;

c02_024e:;

	i8 v2913 = (i8)(intptr_t)(ws+3056);
	i1 v2914 = *(i1*)(intptr_t)v2913;
	i1 v2915 = (i1)+130;
	if (v2914==v2915) goto c02_024c; else goto c02_024d;

c02_024c:;

	i8 v2916 = (i8)(intptr_t)(ws+3072);
	i8 v2917 = *(i8*)(intptr_t)v2916;
	i4 v2918 = *(i4*)(intptr_t)v2917;
	i4 v2919 = (i4)+0;
	if (v2918==v2919) goto c02_0252; else goto c02_0253;

c02_0252:;

	i8 v2920 = (i8)(intptr_t)(ws+3072);
	i8 v2921 = *(i8*)(intptr_t)v2920;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2921);

	i8 v2922 = (i8)(intptr_t)(ws+3064);
	i8 v2923 = *(i8*)(intptr_t)v2922;
	i8 v2924 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2924 = v2923;

	goto endsub;

c02_0253:;

c02_024f:;

	i8 v2925 = (i8)(intptr_t)(ws+3064);
	i8 v2926 = *(i8*)(intptr_t)v2925;
	i8 v2927 = v2926+(+58);
	i1 v2928 = *(i1*)(intptr_t)v2927;
	i1 v2929 = (i1)+42;
	if (v2928==v2929) goto c02_0257; else goto c02_0258;

c02_0257:;

	i8 v2930 = (i8)(intptr_t)(ws+3072);
	i8 v2931 = *(i8*)(intptr_t)v2930;
	i4 v2932 = *(i4*)(intptr_t)v2931;
	i2 v2933 = (s2)(s4)v2932;
	i8 v2934 = (i8)(intptr_t)(ws+3102);
	*(i2*)(intptr_t)v2934 = v2933;

	i8 v2935 = (i8)(intptr_t)(ws+3056);
	i1 v2936 = *(i1*)(intptr_t)v2935;

	if (v2936 != +155) goto c02_025a;

	i8 v2937 = (i8)(intptr_t)(ws+3064);
	i8 v2938 = *(i8*)(intptr_t)v2937;
	i8 v2939 = v2938+(+8);
	i2 v2940 = *(i2*)(intptr_t)v2939;
	i8 v2941 = (i8)(intptr_t)(ws+3102);
	i2 v2942 = *(i2*)(intptr_t)v2941;
	i2 v2943 = v2940+v2942;
	i8 v2944 = (i8)(intptr_t)(ws+3064);
	i8 v2945 = *(i8*)(intptr_t)v2944;
	i8 v2946 = v2945+(+8);
	*(i2*)(intptr_t)v2946 = v2943;

	i8 v2947 = (i8)(intptr_t)(ws+3072);
	i8 v2948 = *(i8*)(intptr_t)v2947;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2948);

	i8 v2949 = (i8)(intptr_t)(ws+3064);
	i8 v2950 = *(i8*)(intptr_t)v2949;
	i8 v2951 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2951 = v2950;

	goto endsub;

c02_025a:;

	if (v2936 != +130) goto c02_025b;

	i8 v2952 = (i8)(intptr_t)(ws+3064);
	i8 v2953 = *(i8*)(intptr_t)v2952;
	i8 v2954 = v2953+(+8);
	i2 v2955 = *(i2*)(intptr_t)v2954;
	i8 v2956 = (i8)(intptr_t)(ws+3102);
	i2 v2957 = *(i2*)(intptr_t)v2956;
	i2 v2958 = v2955-v2957;
	i8 v2959 = (i8)(intptr_t)(ws+3064);
	i8 v2960 = *(i8*)(intptr_t)v2959;
	i8 v2961 = v2960+(+8);
	*(i2*)(intptr_t)v2961 = v2958;

	i8 v2962 = (i8)(intptr_t)(ws+3072);
	i8 v2963 = *(i8*)(intptr_t)v2962;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2963);

	i8 v2964 = (i8)(intptr_t)(ws+3064);
	i8 v2965 = *(i8*)(intptr_t)v2964;
	i8 v2966 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2966 = v2965;

	goto endsub;

c02_025b:;

c02_0259:;


	goto c02_0254;

c02_0258:;

c02_0254:;

	goto c02_0247;

c02_024d:;

c02_0247:;

	goto c02_021b;

c02_0221:;

c02_021b:;

	i8 v2967 = (i8)(intptr_t)(ws+3064);
	i8 v2968 = *(i8*)(intptr_t)v2967;
	i8 v2969 = v2968+(+58);
	i1 v2970 = *(i1*)(intptr_t)v2969;
	i1 v2971 = (i1)+40;
	if (v2970==v2971) goto c02_0263; else goto c02_0262;

c02_0263:;

	i8 v2972 = (i8)(intptr_t)(ws+3072);
	i8 v2973 = *(i8*)(intptr_t)v2972;
	i8 v2974 = v2973+(+58);
	i1 v2975 = *(i1*)(intptr_t)v2974;
	i1 v2976 = (i1)+40;
	if (v2975==v2976) goto c02_0261; else goto c02_0262;

c02_0261:;

	i8 v2977 = (i8)(intptr_t)(ws+3056);
	i1 v2978 = *(i1*)(intptr_t)v2977;
	i8 v2979 = (i8)(intptr_t)(ws+3064);
	i8 v2980 = *(i8*)(intptr_t)v2979;
	i8 v2981 = (i8)(intptr_t)(ws+3072);
	i8 v2982 = *(i8*)(intptr_t)v2981;

	void f147_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	i4 v2983;
	f147_FoldConstant2(&v2983, v2982, v2980, v2978);
	i8 v2984 = (i8)(intptr_t)(ws+3064);
	i8 v2985 = *(i8*)(intptr_t)v2984;
	*(i4*)(intptr_t)v2985 = v2983;

	i8 v2986 = (i8)(intptr_t)(ws+3072);
	i8 v2987 = *(i8*)(intptr_t)v2986;

	void f56_Discard(i8 /* node */);
	f56_Discard(v2987);

	i8 v2988 = (i8)(intptr_t)(ws+3064);
	i8 v2989 = *(i8*)(intptr_t)v2988;
	i8 v2990 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2990 = v2989;

	goto endsub;

c02_0262:;

c02_025c:;

	i8 v2991 = (i8)(intptr_t)(ws+3056);
	i1 v2992 = *(i1*)(intptr_t)v2991;
	i8 v2993 = (i8)(intptr_t)(ws+3057);
	i1 v2994 = *(i1*)(intptr_t)v2993;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v2995;
	f87_WidthToIndex(&v2995, v2994);
	i1 v2996 = v2992+v2995;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v2997;
	f88_AllocateNewNode(&v2997, v2996);
	i8 v2998 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2998 = v2997;

	i8 v2999 = (i8)(intptr_t)(ws+3064);
	i8 v3000 = *(i8*)(intptr_t)v2999;
	i8 v3001 = (i8)(intptr_t)(ws+3080);
	i8 v3002 = *(i8*)(intptr_t)v3001;
	i8 v3003 = v3002+(+24);
	*(i8*)(intptr_t)v3003 = v3000;

	i8 v3004 = (i8)(intptr_t)(ws+3072);
	i8 v3005 = *(i8*)(intptr_t)v3004;
	i8 v3006 = (i8)(intptr_t)(ws+3080);
	i8 v3007 = *(i8*)(intptr_t)v3006;
	i8 v3008 = v3007+(+32);
	*(i8*)(intptr_t)v3008 = v3005;

endsub:;
	*p2753 = *(i8*)(intptr_t)(ws+3080);
}

// MidCCast workspace at ws+3056 length ws+34
void f151_MidCCast(i8* p3009 /* result */, i1 p3010 /* issigned */, i8 p3011 /* lhs */, i1 p3012 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p3012; /*width */
	*(i8*)(intptr_t)(ws+3064) = p3011; /*lhs */
	*(i1*)(intptr_t)(ws+3072) = p3010; /*issigned */

	i8 v3013 = (i8)(intptr_t)(ws+3064);
	i8 v3014 = *(i8*)(intptr_t)v3013;
	i8 v3015 = v3014+(+58);
	i1 v3016 = *(i1*)(intptr_t)v3015;
	i1 v3017 = (i1)+40;
	if (v3016==v3017) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v3018 = (i8)(intptr_t)(ws+3064);
	i8 v3019 = *(i8*)(intptr_t)v3018;
	i8 v3020 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3020 = v3019;

	goto endsub;

c02_0268:;

c02_0264:;

	i8 v3021 = (i8)(intptr_t)(ws+3064);
	i8 v3022 = *(i8*)(intptr_t)v3021;
	i8 v3023 = v3022+(+16);
	i8 v3024 = *(i8*)(intptr_t)v3023;
	i8 v3025 = v3024+(+42);
	i2 v3026 = *(i2*)(intptr_t)v3025;
	i1 v3027 = v3026;
	i8 v3028 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v3028 = v3027;

	i8 v3029 = (i8)(intptr_t)(ws+3088);
	i1 v3030 = *(i1*)(intptr_t)v3029;
	i8 v3031 = (i8)(intptr_t)(ws+3056);
	i1 v3032 = *(i1*)(intptr_t)v3031;
	if (v3030==v3032) goto c02_026c; else goto c02_026d;

c02_026c:;

	i8 v3033 = (i8)(intptr_t)(ws+3064);
	i8 v3034 = *(i8*)(intptr_t)v3033;
	i8 v3035 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3035 = v3034;

	goto c02_0269;

c02_026d:;

	i8 v3036 = (i8)(intptr_t)(ws+3088);
	i1 v3037 = *(i1*)(intptr_t)v3036;

	if (v3037 != +1) goto c02_026f;

	i1 v3038 = (i1)+85;
	i8 v3039 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3039 = v3038;

	goto c02_026e;

c02_026f:;

	if (v3037 != +2) goto c02_0270;

	i1 v3040 = (i1)+90;
	i8 v3041 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3041 = v3040;

	goto c02_026e;

c02_0270:;

	if (v3037 != +4) goto c02_0271;

	i1 v3042 = (i1)+95;
	i8 v3043 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3043 = v3042;

	goto c02_026e;

c02_0271:;

	if (v3037 != +8) goto c02_0272;

	i1 v3044 = (i1)+100;
	i8 v3045 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3045 = v3044;

c02_0272:;

c02_026e:;


	i8 v3046 = (i8)(intptr_t)(ws+3089);
	i1 v3047 = *(i1*)(intptr_t)v3046;
	i8 v3048 = (i8)(intptr_t)(ws+3056);
	i1 v3049 = *(i1*)(intptr_t)v3048;

	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	i1 v3050;
	f87_WidthToIndex(&v3050, v3049);
	i1 v3051 = v3047+v3050;

	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);
	i8 v3052;
	f88_AllocateNewNode(&v3052, v3051);
	i8 v3053 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3053 = v3052;

	i8 v3054 = (i8)(intptr_t)(ws+3064);
	i8 v3055 = *(i8*)(intptr_t)v3054;
	i8 v3056 = (i8)(intptr_t)(ws+3080);
	i8 v3057 = *(i8*)(intptr_t)v3056;
	i8 v3058 = v3057+(+24);
	*(i8*)(intptr_t)v3058 = v3055;

	i8 v3059 = (i8)(intptr_t)(ws+3072);
	i1 v3060 = *(i1*)(intptr_t)v3059;
	i8 v3061 = (i8)(intptr_t)(ws+3080);
	i8 v3062 = *(i8*)(intptr_t)v3061;
	*(i1*)(intptr_t)v3062 = v3060;

c02_0269:;

endsub:;
	*p3009 = *(i8*)(intptr_t)(ws+3080);
}

// E_b8 workspace at ws+3352 length ws+16
void f152_E_b8(i1 p3063 /* byte */) {
	*(i1*)(intptr_t)(ws+3352) = p3063; /*byte */

	i8 v3064 = (i8)(intptr_t)(ws+904);
	i8 v3065 = *(i8*)(intptr_t)v3064;
	i8 v3066 = (i8)+0;
	if (v3065==v3066) goto c02_0277; else goto c02_0276;

c02_0276:;

	i8 v3067 = (i8)(intptr_t)(ws+904);
	i8 v3068 = *(i8*)(intptr_t)v3067;
	i8 v3069 = v3068+(+16);
	i8 v3070 = *(i8*)(intptr_t)v3069;
	i8 v3071 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v3071 = v3070;

	i8 v3072 = (i8)(intptr_t)(ws+3360);
	i8 v3073 = *(i8*)(intptr_t)v3072;
	i8 v3074 = v3073+(+128);
	i1 v3075 = *(i1*)(intptr_t)v3074;
	i1 v3076 = (i1)+128;
	if (v3075==v3076) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v3077 = (i8)+144;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3078;
	f31_Alloc(&v3078, v3077);
	i8 v3079 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v3079 = v3078;

	i8 v3080 = (i8)(intptr_t)(ws+3360);
	i8 v3081 = *(i8*)(intptr_t)v3080;
	i8 v3082 = (i8)(intptr_t)(ws+904);
	i8 v3083 = *(i8*)(intptr_t)v3082;
	i8 v3084 = v3083+(+16);
	i8 v3085 = *(i8*)(intptr_t)v3084;
	i8 v3086 = v3085+(+136);
	*(i8*)(intptr_t)v3086 = v3081;

	i8 v3087 = (i8)(intptr_t)(ws+3360);
	i8 v3088 = *(i8*)(intptr_t)v3087;
	i8 v3089 = (i8)(intptr_t)(ws+904);
	i8 v3090 = *(i8*)(intptr_t)v3089;
	i8 v3091 = v3090+(+16);
	*(i8*)(intptr_t)v3091 = v3088;

	goto c02_0278;

c02_027c:;

c02_0278:;

	i8 v3092 = (i8)(intptr_t)(ws+3352);
	i1 v3093 = *(i1*)(intptr_t)v3092;
	i8 v3094 = (i8)(intptr_t)(ws+3360);
	i8 v3095 = *(i8*)(intptr_t)v3094;
	i8 v3096 = (i8)(intptr_t)(ws+3360);
	i8 v3097 = *(i8*)(intptr_t)v3096;
	i8 v3098 = v3097+(+128);
	i1 v3099 = *(i1*)(intptr_t)v3098;
	i8 v3100 = v3099;
	i8 v3101 = v3095+v3100;
	*(i1*)(intptr_t)v3101 = v3093;

	i8 v3102 = (i8)(intptr_t)(ws+3360);
	i8 v3103 = *(i8*)(intptr_t)v3102;
	i8 v3104 = v3103+(+128);
	i1 v3105 = *(i1*)(intptr_t)v3104;
	i1 v3106 = v3105+(+1);
	i8 v3107 = (i8)(intptr_t)(ws+3360);
	i8 v3108 = *(i8*)(intptr_t)v3107;
	i8 v3109 = v3108+(+128);
	*(i1*)(intptr_t)v3109 = v3106;

	i8 v3110 = (i8)(intptr_t)(ws+904);
	i8 v3111 = *(i8*)(intptr_t)v3110;
	i8 v3112 = v3111+(+24);
	i2 v3113 = *(i2*)(intptr_t)v3112;
	i2 v3114 = v3113+(+1);
	i8 v3115 = (i8)(intptr_t)(ws+904);
	i8 v3116 = *(i8*)(intptr_t)v3115;
	i8 v3117 = v3116+(+24);
	*(i2*)(intptr_t)v3117 = v3114;

	goto c02_0273;

c02_0277:;

c02_0273:;

endsub:;
}

// E_b16 workspace at ws+3296 length ws+2
void f153_E_b16(i2 p3118 /* word */) {
	*(i2*)(intptr_t)(ws+3296) = p3118; /*word */

	i8 v3119 = (i8)(intptr_t)(ws+3296);
	i2 v3120 = *(i2*)(intptr_t)v3119;
	i1 v3121 = v3120;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3121);

	i8 v3122 = (i8)(intptr_t)(ws+3296);
	i2 v3123 = *(i2*)(intptr_t)v3122;
	i1 v3124 = (i1)+8;
	i2 v3125 = ((i2)v3123)>>v3124;
	i1 v3126 = v3125;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3126);

endsub:;
}

// E_space workspace at ws+3256 length ws+0
void f155_E_space(void) {

	i1 v3136 = (i1)+32;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3136);

endsub:;
}

// E_comma workspace at ws+3280 length ws+0
void f156_E_comma(void) {

	i1 v3137 = (i1)+44;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3137);

endsub:;
}

// E_tab workspace at ws+3256 length ws+0
void f157_E_tab(void) {

	i1 v3138 = (i1)+9;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3138);

endsub:;
}

// E_nl workspace at ws+3256 length ws+0
void f158_E_nl(void) {

	i1 v3139 = (i1)+10;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3139);

endsub:;
}

// E workspace at ws+3336 length ws+9
void f161_E(i8 p3142 /* text */) {
	*(i8*)(intptr_t)(ws+3336) = p3142; /*text */

c02_027d:;

	i8 v3143 = (i8)(intptr_t)(ws+3336);
	i8 v3144 = *(i8*)(intptr_t)v3143;
	i1 v3145 = *(i1*)(intptr_t)v3144;
	i8 v3146 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v3146 = v3145;

	i8 v3147 = (i8)(intptr_t)(ws+3336);
	i8 v3148 = *(i8*)(intptr_t)v3147;
	i8 v3149 = v3148+(+1);
	i8 v3150 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3150 = v3149;

	i8 v3151 = (i8)(intptr_t)(ws+3344);
	i1 v3152 = *(i1*)(intptr_t)v3151;
	i1 v3153 = (i1)+0;
	if (v3152==v3153) goto c02_0282; else goto c02_0283;

c02_0282:;

	goto c02_027e;

c02_0283:;

c02_027f:;

	i8 v3154 = (i8)(intptr_t)(ws+3344);
	i1 v3155 = *(i1*)(intptr_t)v3154;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3155);

	goto c02_027d;

c02_027e:;

endsub:;
}

// E_u32 workspace at ws+3312 length ws+33
void f162_E_u32(i4 p3156 /* value */) {
	*(i4*)(intptr_t)(ws+3312) = p3156; /*value */

	i8 v3157 = (i8)(intptr_t)(ws+3316);
	i8 v3158 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3158 = v3157;

	i8 v3159 = (i8)(intptr_t)(ws+3312);
	i4 v3160 = *(i4*)(intptr_t)v3159;
	i1 v3161 = (i1)+10;
	i8 v3162 = (i8)(intptr_t)(ws+3328);
	i8 v3163 = *(i8*)(intptr_t)v3162;

	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v3164;
	f13_UIToA(&v3164, v3163, v3161, v3160);
	i8 v3165 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3165 = v3164;

c02_0284:;

	i8 v3166 = (i8)(intptr_t)(ws+3328);
	i8 v3167 = *(i8*)(intptr_t)v3166;
	i1 v3168 = *(i1*)(intptr_t)v3167;
	i8 v3169 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v3169 = v3168;

	i8 v3170 = (i8)(intptr_t)(ws+3344);
	i1 v3171 = *(i1*)(intptr_t)v3170;
	i1 v3172 = (i1)+0;
	if (v3171==v3172) goto c02_0289; else goto c02_028a;

c02_0289:;

	goto c02_0285;

c02_028a:;

c02_0286:;

	i8 v3173 = (i8)(intptr_t)(ws+3344);
	i1 v3174 = *(i1*)(intptr_t)v3173;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3174);

	i8 v3175 = (i8)(intptr_t)(ws+3328);
	i8 v3176 = *(i8*)(intptr_t)v3175;
	i8 v3177 = v3176+(+1);
	i8 v3178 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3178 = v3177;

	goto c02_0284;

c02_0285:;

endsub:;
}

// E_u16 workspace at ws+3304 length ws+2
void f163_E_u16(i2 p3179 /* value */) {
	*(i2*)(intptr_t)(ws+3304) = p3179; /*value */

	i8 v3180 = (i8)(intptr_t)(ws+3304);
	i2 v3181 = *(i2*)(intptr_t)v3180;
	i4 v3182 = v3181;

	void f162_E_u32(i4 /* value */);
	f162_E_u32(v3182);

endsub:;
}

// E_u8 workspace at ws+3288 length ws+1
void f164_E_u8(i1 p3183 /* value */) {
	*(i1*)(intptr_t)(ws+3288) = p3183; /*value */

	i8 v3184 = (i8)(intptr_t)(ws+3288);
	i1 v3185 = *(i1*)(intptr_t)v3184;
	i4 v3186 = v3185;

	void f162_E_u32(i4 /* value */);
	f162_E_u32(v3186);

endsub:;
}

// E_i16 workspace at ws+3296 length ws+2
void f166_E_i16(i2 p3199 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3199; /*value */

	i8 v3200 = (i8)(intptr_t)(ws+3296);
	i2 v3201 = *(i2*)(intptr_t)v3200;
	i2 v3202 = (i2)+0;
	if ((s2)v3201<(s2)v3202) goto c02_0293; else goto c02_0294;

c02_0293:;

	i1 v3203 = (i1)+45;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3203);

	i8 v3204 = (i8)(intptr_t)(ws+3296);
	i2 v3205 = *(i2*)(intptr_t)v3204;
	i2 v3206 = -v3205;
	i8 v3207 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v3207 = v3206;

	goto c02_0290;

c02_0294:;

	i1 v3208 = (i1)+43;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3208);

c02_0290:;

	i8 v3209 = (i8)(intptr_t)(ws+3296);
	i2 v3210 = *(i2*)(intptr_t)v3209;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v3210);

endsub:;
}

// E_i32 workspace at ws+3280 length ws+4
void f167_E_i32(i4 p3211 /* value */) {
	*(i4*)(intptr_t)(ws+3280) = p3211; /*value */

	i8 v3212 = (i8)(intptr_t)(ws+3280);
	i4 v3213 = *(i4*)(intptr_t)v3212;
	i4 v3214 = (i4)+0;
	if ((s4)v3213<(s4)v3214) goto c02_0298; else goto c02_0299;

c02_0298:;

	i1 v3215 = (i1)+45;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3215);

	i8 v3216 = (i8)(intptr_t)(ws+3280);
	i4 v3217 = *(i4*)(intptr_t)v3216;
	i4 v3218 = -v3217;
	i8 v3219 = (i8)(intptr_t)(ws+3280);
	*(i4*)(intptr_t)v3219 = v3218;

	goto c02_0295;

c02_0299:;

	i1 v3220 = (i1)+43;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3220);

c02_0295:;

	i8 v3221 = (i8)(intptr_t)(ws+3280);
	i4 v3222 = *(i4*)(intptr_t)v3221;

	void f162_E_u32(i4 /* value */);
	f162_E_u32(v3222);

endsub:;
}

// E_h workspace at ws+3304 length ws+25
void f168_E_h(i1 p3223 /* width */, i4 p3224 /* value */) {
	*(i4*)(intptr_t)(ws+3304) = p3224; /*value */
	*(i1*)(intptr_t)(ws+3308) = p3223; /*width */

	i8 v3225 = (i8)(intptr_t)(ws+3304);
	i4 v3226 = *(i4*)(intptr_t)v3225;
	i1 v3227 = (i1)+16;
	i8 v3228 = (i8)(intptr_t)(ws+3309);

	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v3229;
	f13_UIToA(&v3229, v3228, v3227, v3226);
	i8 v3230 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3230 = v3229;

	i8 v3231 = (i8)(intptr_t)(ws+3308);
	i1 v3232 = *(i1*)(intptr_t)v3231;
	i8 v3233 = (i8)(intptr_t)(ws+3320);
	i8 v3234 = *(i8*)(intptr_t)v3233;
	i8 v3235 = (i8)(intptr_t)(ws+3309);
	i8 v3236 = v3234-v3235;
	i1 v3237 = v3236;
	i1 v3238 = v3232-v3237;
	i8 v3239 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v3239 = v3238;

c02_029c:;

	i8 v3240 = (i8)(intptr_t)(ws+3328);
	i1 v3241 = *(i1*)(intptr_t)v3240;
	i1 v3242 = (i1)+0;
	if (v3241==v3242) goto c02_029f; else goto c02_029e;

c02_029e:;

	i1 v3243 = (i1)+48;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3243);

	i8 v3244 = (i8)(intptr_t)(ws+3328);
	i1 v3245 = *(i1*)(intptr_t)v3244;
	i1 v3246 = v3245+(-1);
	i8 v3247 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v3247 = v3246;

	goto c02_029c;

c02_029f:;

	i8 v3248 = (i8)(intptr_t)(ws+3309);

	void f161_E(i8 /* text */);
	f161_E(v3248);

endsub:;
}

// E_h8 workspace at ws+3280 length ws+1
void f169_E_h8(i1 p3249 /* value */) {
	*(i1*)(intptr_t)(ws+3280) = p3249; /*value */

	i8 v3250 = (i8)(intptr_t)(ws+3280);
	i1 v3251 = *(i1*)(intptr_t)v3250;
	i4 v3252 = v3251;
	i1 v3253 = (i1)+2;

	void f168_E_h(i1 /* width */, i4 /* value */);
	f168_E_h(v3253, v3252);

endsub:;
}

// E_h16 workspace at ws+3296 length ws+2
void f170_E_h16(i2 p3254 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3254; /*value */

	i8 v3255 = (i8)(intptr_t)(ws+3296);
	i2 v3256 = *(i2*)(intptr_t)v3255;
	i4 v3257 = v3256;
	i1 v3258 = (i1)+4;

	void f168_E_h(i1 /* width */, i4 /* value */);
	f168_E_h(v3258, v3257);

endsub:;
}

// E_labelref workspace at ws+3288 length ws+2
void f172_E_labelref(i2 p3263 /* labelid */) {
	*(i2*)(intptr_t)(ws+3288) = p3263; /*labelid */

	i1 v3264 = (i1)+3;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3264);

	i8 v3265 = (i8)(intptr_t)(ws+3288);
	i2 v3266 = *(i2*)(intptr_t)v3265;

	void f170_E_h16(i2 /* value */);
	f170_E_h16(v3266);

endsub:;
}

// E_subref workspace at ws+3288 length ws+8
void f173_E_subref(i8 p3267 /* subr */) {
	*(i8*)(intptr_t)(ws+3288) = p3267; /*subr */

	i8 v3268 = (i8)(intptr_t)(ws+3288);
	i8 v3269 = *(i8*)(intptr_t)v3268;
	i8 v3270 = (i8)(intptr_t)(ws+40);
	i8 v3271 = *(i8*)(intptr_t)v3270;
	if (v3269==v3271) goto c02_02a3; else goto c02_02a4;

c02_02a3:;

	i1 v3272 = (i1)+4;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3272);

	goto c02_02a0;

c02_02a4:;

	i1 v3273 = (i1)+1;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3273);

	i8 v3274 = (i8)(intptr_t)(ws+3288);
	i8 v3275 = *(i8*)(intptr_t)v3274;
	i8 v3276 = v3275+(+56);
	i2 v3277 = *(i2*)(intptr_t)v3276;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3277);

c02_02a0:;

endsub:;
}

// EmitterPushChunk workspace at ws+3296 length ws+8
void f175_EmitterPushChunk(void) {

	i8 v3288 = (i8)+26;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3289;
	f31_Alloc(&v3289, v3288);
	i8 v3290 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v3290 = v3289;

	i8 v3291 = (i8)+144;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3292;
	f31_Alloc(&v3292, v3291);
	i8 v3293 = (i8)(intptr_t)(ws+3296);
	i8 v3294 = *(i8*)(intptr_t)v3293;
	i8 v3295 = v3294+(+16);
	*(i8*)(intptr_t)v3295 = v3292;

	i8 v3296 = (i8)(intptr_t)(ws+3296);
	i8 v3297 = *(i8*)(intptr_t)v3296;
	i8 v3298 = v3297+(+16);
	i8 v3299 = *(i8*)(intptr_t)v3298;
	i8 v3300 = (i8)(intptr_t)(ws+3296);
	i8 v3301 = *(i8*)(intptr_t)v3300;
	i8 v3302 = v3301+(+8);
	*(i8*)(intptr_t)v3302 = v3299;

	i8 v3303 = (i8)(intptr_t)(ws+904);
	i8 v3304 = *(i8*)(intptr_t)v3303;
	i8 v3305 = (i8)(intptr_t)(ws+3296);
	i8 v3306 = *(i8*)(intptr_t)v3305;
	*(i8*)(intptr_t)v3306 = v3304;

	i8 v3307 = (i8)(intptr_t)(ws+3296);
	i8 v3308 = *(i8*)(intptr_t)v3307;
	i8 v3309 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v3309 = v3308;

endsub:;
}

// EmitterPopChunk workspace at ws+3296 length ws+40
void f176_EmitterPopChunk(i1 p3310 /* type */) {
	*(i1*)(intptr_t)(ws+3296) = p3310; /*type */

	i8 v3311 = (i8)(intptr_t)(ws+380);
	i8 v3312 = (i8)(intptr_t)(ws+3296);
	i1 v3313 = *(i1*)(intptr_t)v3312;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3313, v3311);

	i8 v3314 = (i8)(intptr_t)(ws+904);
	i8 v3315 = *(i8*)(intptr_t)v3314;
	i8 v3316 = v3315+(+24);
	i2 v3317 = *(i2*)(intptr_t)v3316;
	i8 v3318 = (i8)(intptr_t)(ws+3298);
	*(i2*)(intptr_t)v3318 = v3317;

	i8 v3319 = (i8)(intptr_t)(ws+380);
	i8 v3320 = (i8)(intptr_t)(ws+3298);
	i2 v3321 = *(i2*)(intptr_t)v3320;
	i1 v3322 = v3321;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3322, v3319);

	i8 v3323 = (i8)(intptr_t)(ws+380);
	i8 v3324 = (i8)(intptr_t)(ws+3298);
	i2 v3325 = *(i2*)(intptr_t)v3324;
	i1 v3326 = (i1)+8;
	i2 v3327 = ((i2)v3325)>>v3326;
	i1 v3328 = v3327;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3328, v3323);

	i8 v3329 = (i8)(intptr_t)(ws+904);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i8 v3331 = v3330+(+8);
	i8 v3332 = *(i8*)(intptr_t)v3331;
	i8 v3333 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3333 = v3332;

c02_02a7:;

	i8 v3334 = (i8)(intptr_t)(ws+3304);
	i8 v3335 = *(i8*)(intptr_t)v3334;
	i8 v3336 = (i8)+0;
	if (v3335==v3336) goto c02_02aa; else goto c02_02a9;

c02_02a9:;

	i1 v3337 = (i1)+0;
	i8 v3338 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3338 = v3337;

c02_02ad:;

	i8 v3339 = (i8)(intptr_t)(ws+3312);
	i1 v3340 = *(i1*)(intptr_t)v3339;
	i8 v3341 = (i8)(intptr_t)(ws+3304);
	i8 v3342 = *(i8*)(intptr_t)v3341;
	i8 v3343 = v3342+(+128);
	i1 v3344 = *(i1*)(intptr_t)v3343;
	if (v3340==v3344) goto c02_02b0; else goto c02_02af;

c02_02af:;

	i8 v3345 = (i8)(intptr_t)(ws+380);
	i8 v3346 = (i8)(intptr_t)(ws+3304);
	i8 v3347 = *(i8*)(intptr_t)v3346;
	i8 v3348 = (i8)(intptr_t)(ws+3312);
	i1 v3349 = *(i1*)(intptr_t)v3348;
	i8 v3350 = v3349;
	i8 v3351 = v3347+v3350;
	i1 v3352 = *(i1*)(intptr_t)v3351;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3352, v3345);

	i8 v3353 = (i8)(intptr_t)(ws+3312);
	i1 v3354 = *(i1*)(intptr_t)v3353;
	i1 v3355 = v3354+(+1);
	i8 v3356 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3356 = v3355;

	goto c02_02ad;

c02_02b0:;

	i8 v3357 = (i8)(intptr_t)(ws+3304);
	i8 v3358 = *(i8*)(intptr_t)v3357;
	i8 v3359 = v3358+(+136);
	i8 v3360 = *(i8*)(intptr_t)v3359;
	i8 v3361 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3361 = v3360;

	i8 v3362 = (i8)(intptr_t)(ws+3304);
	i8 v3363 = *(i8*)(intptr_t)v3362;

	void f32_Free(i8 /* block */);
	f32_Free(v3363);

	i8 v3364 = (i8)(intptr_t)(ws+3320);
	i8 v3365 = *(i8*)(intptr_t)v3364;
	i8 v3366 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3366 = v3365;

	goto c02_02a7;

c02_02aa:;

	i8 v3367 = (i8)(intptr_t)(ws+904);
	i8 v3368 = *(i8*)(intptr_t)v3367;
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3370 = v3369;

	i8 v3371 = (i8)(intptr_t)(ws+904);
	i8 v3372 = *(i8*)(intptr_t)v3371;

	void f32_Free(i8 /* block */);
	f32_Free(v3372);

	i8 v3373 = (i8)(intptr_t)(ws+3328);
	i8 v3374 = *(i8*)(intptr_t)v3373;
	i8 v3375 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v3375 = v3374;

endsub:;
}
const i1 c02_s0040[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+2888 length ws+8
void f177_EmitterOpenfile(i8 p3376 /* filename */) {
	*(i8*)(intptr_t)(ws+2888) = p3376; /*filename */

	i8 v3377 = (i8)(intptr_t)(ws+380);
	i8 v3378 = (i8)(intptr_t)(ws+2888);
	i8 v3379 = *(i8*)(intptr_t)v3378;

	void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v3380;
	f42_FCBOpenOut(&v3380, v3379, v3377);
	i1 v3381 = (i1)+0;
	if (v3380==v3381) goto c02_02b5; else goto c02_02b4;

c02_02b4:;

	i8 v3382 = (i8)(intptr_t)c02_s0040;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v3382);

	goto c02_02b1;

c02_02b5:;

c02_02b1:;

endsub:;
}
const i1 c02_s0041[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+2888 length ws+0
void f178_EmitterClosefile(void) {

	i8 v3383 = (i8)(intptr_t)(ws+380);
	i1 v3384 = (i1)+69;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3384, v3383);

	i8 v3385 = (i8)(intptr_t)(ws+380);
	i1 v3386 = (i1)+0;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3386, v3385);

	i8 v3387 = (i8)(intptr_t)(ws+380);
	i1 v3388 = (i1)+0;

	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v3388, v3387);

	i8 v3389 = (i8)(intptr_t)(ws+380);

	void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	i1 v3390;
	f43_FCBClose(&v3390, v3389);
	i1 v3391 = (i1)+0;
	if (v3390==v3391) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v3392 = (i8)(intptr_t)c02_s0041;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v3392);

	goto c02_02b6;

c02_02ba:;

c02_02b6:;

endsub:;
}

// EmitterDeclareSubroutine workspace at ws+3008 length ws+8
void f179_EmitterDeclareSubroutine(i8 p3393 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p3393; /*subr */


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v3394 = (i8)(intptr_t)(ws+3008);
	i8 v3395 = *(i8*)(intptr_t)v3394;
	i8 v3396 = v3395+(+56);
	i2 v3397 = *(i2*)(intptr_t)v3396;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3397);

	i8 v3398 = (i8)(intptr_t)(ws+3008);
	i8 v3399 = *(i8*)(intptr_t)v3398;
	i8 v3400 = *(i8*)(intptr_t)v3399;

	void f161_E(i8 /* text */);
	f161_E(v3400);

	i1 v3401 = (i1)+78;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v3401);

endsub:;
}

// EmitterDeclareExternalSubroutine workspace at ws+3008 length ws+16
void f180_EmitterDeclareExternalSubroutine(i8 p3402 /* external */, i2 p3403 /* id */) {
	*(i2*)(intptr_t)(ws+3008) = p3403; /*id */
	*(i8*)(intptr_t)(ws+3016) = p3402; /*external */


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v3404 = (i8)(intptr_t)(ws+3008);
	i2 v3405 = *(i2*)(intptr_t)v3404;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3405);

	i8 v3406 = (i8)(intptr_t)(ws+3016);
	i8 v3407 = *(i8*)(intptr_t)v3406;

	void f161_E(i8 /* text */);
	f161_E(v3407);

	i1 v3408 = (i1)+88;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v3408);

endsub:;
}

// EmitterReferenceSubroutine workspace at ws+3064 length ws+16
void f181_EmitterReferenceSubroutine(i8 p3409 /* used */, i8 p3410 /* user */) {
	*(i8*)(intptr_t)(ws+3064) = p3410; /*user */
	*(i8*)(intptr_t)(ws+3072) = p3409; /*used */


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v3411 = (i8)(intptr_t)(ws+3064);
	i8 v3412 = *(i8*)(intptr_t)v3411;
	i8 v3413 = v3412+(+56);
	i2 v3414 = *(i2*)(intptr_t)v3413;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3414);

	i8 v3415 = (i8)(intptr_t)(ws+3072);
	i8 v3416 = *(i8*)(intptr_t)v3415;
	i8 v3417 = v3416+(+56);
	i2 v3418 = *(i2*)(intptr_t)v3417;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3418);

	i1 v3419 = (i1)+82;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v3419);

endsub:;
}

// EmitterDeclareWorkspace workspace at ws+3280 length ws+12
void f182_EmitterDeclareWorkspace(i2 p3420 /* workspace */, i1 p3421 /* wid */, i8 p3422 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p3422; /*subr */
	*(i1*)(intptr_t)(ws+3288) = p3421; /*wid */
	*(i2*)(intptr_t)(ws+3290) = p3420; /*workspace */


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v3423 = (i8)(intptr_t)(ws+3280);
	i8 v3424 = *(i8*)(intptr_t)v3423;
	i8 v3425 = v3424+(+56);
	i2 v3426 = *(i2*)(intptr_t)v3425;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3426);

	i8 v3427 = (i8)(intptr_t)(ws+3288);
	i1 v3428 = *(i1*)(intptr_t)v3427;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v3428);

	i8 v3429 = (i8)(intptr_t)(ws+3290);
	i2 v3430 = *(i2*)(intptr_t)v3429;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v3430);

	i1 v3431 = (i1)+87;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v3431);

endsub:;
}

// LookupSymbolInNamespace workspace at ws+3096 length ws+24
void f192_LookupSymbolInNamespace(i8* p3756 /* symbol */, i8 p3757 /* name */, i8 p3758 /* namespace */) {
	*(i8*)(intptr_t)(ws+3096) = p3758; /*namespace */
	*(i8*)(intptr_t)(ws+3104) = p3757; /*name */

	i8 v3759 = (i8)(intptr_t)(ws+3096);
	i8 v3760 = *(i8*)(intptr_t)v3759;
	i8 v3761 = *(i8*)(intptr_t)v3760;
	i8 v3762 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v3762 = v3761;

c02_0345:;

	i8 v3763 = (i8)(intptr_t)(ws+3112);
	i8 v3764 = *(i8*)(intptr_t)v3763;
	i8 v3765 = (i8)+0;
	if (v3764==v3765) goto c02_0348; else goto c02_0347;

c02_0347:;

	i8 v3766 = (i8)(intptr_t)(ws+3112);
	i8 v3767 = *(i8*)(intptr_t)v3766;
	i8 v3768 = v3767+(+48);
	i8 v3769 = *(i8*)(intptr_t)v3768;
	i8 v3770 = (i8)(intptr_t)(ws+3104);
	i8 v3771 = *(i8*)(intptr_t)v3770;

	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v3772;
	f25_StrCmp(&v3772, v3771, v3769);
	i1 v3773 = (i1)+0;
	if (v3772==v3773) goto c02_034c; else goto c02_034d;

c02_034c:;

c02_0350:;

	i8 v3774 = (i8)(intptr_t)(ws+3112);
	i8 v3775 = *(i8*)(intptr_t)v3774;
	i8 v3776 = v3775+(+46);
	i1 v3777 = *(i1*)(intptr_t)v3776;
	i1 v3778 = (i1)+39;
	if (v3777==v3778) goto c02_0352; else goto c02_0353;

c02_0352:;

	i8 v3779 = (i8)(intptr_t)(ws+3112);
	i8 v3780 = *(i8*)(intptr_t)v3779;
	i8 v3781 = *(i8*)(intptr_t)v3780;
	i8 v3782 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v3782 = v3781;

	goto c02_0350;

c02_0353:;

	goto endsub;

c02_034d:;

c02_0349:;

	i8 v3783 = (i8)(intptr_t)(ws+3112);
	i8 v3784 = *(i8*)(intptr_t)v3783;
	i8 v3785 = v3784+(+56);
	i8 v3786 = *(i8*)(intptr_t)v3785;
	i8 v3787 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v3787 = v3786;

	goto c02_0345;

c02_0348:;

	i8 v3788 = (i8)+0;
	i8 v3789 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v3789 = v3788;

endsub:;
	*p3756 = *(i8*)(intptr_t)(ws+3112);
}

// LookupSymbol workspace at ws+3032 length ws+24
void f193_LookupSymbol(i8* p3790 /* symbol */, i8 p3791 /* name */, i8 p3792 /* namespace */) {
	*(i8*)(intptr_t)(ws+3032) = p3792; /*namespace */
	*(i8*)(intptr_t)(ws+3040) = p3791; /*name */

	i8 v3793 = (i8)(intptr_t)(ws+3032);
	i8 v3794 = *(i8*)(intptr_t)v3793;
	i8 v3795 = (i8)+0;
	if (v3794==v3795) goto c02_0357; else goto c02_0358;

c02_0357:;

	i8 v3796 = (i8)(intptr_t)(ws+40);
	i8 v3797 = *(i8*)(intptr_t)v3796;
	i8 v3798 = v3797+(+16);
	i8 v3799 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v3799 = v3798;

	goto c02_0354;

c02_0358:;

c02_0354:;

c02_035b:;

	i8 v3800 = (i8)(intptr_t)(ws+3032);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	i8 v3802 = (i8)+0;
	if (v3801==v3802) goto c02_035e; else goto c02_035d;

c02_035d:;

	i8 v3803 = (i8)(intptr_t)(ws+3032);
	i8 v3804 = *(i8*)(intptr_t)v3803;
	i8 v3805 = (i8)(intptr_t)(ws+3040);
	i8 v3806 = *(i8*)(intptr_t)v3805;

	void f192_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v3807;
	f192_LookupSymbolInNamespace(&v3807, v3806, v3804);
	i8 v3808 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v3808 = v3807;

	i8 v3809 = (i8)(intptr_t)(ws+3048);
	i8 v3810 = *(i8*)(intptr_t)v3809;
	i8 v3811 = (i8)+0;
	if (v3810==v3811) goto c02_0363; else goto c02_0362;

c02_0362:;

	goto endsub;

c02_0363:;

c02_035f:;

	i8 v3812 = (i8)(intptr_t)(ws+3032);
	i8 v3813 = *(i8*)(intptr_t)v3812;
	i8 v3814 = v3813+(+16);
	i8 v3815 = *(i8*)(intptr_t)v3814;
	i8 v3816 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v3816 = v3815;

	goto c02_035b;

c02_035e:;

	i8 v3817 = (i8)+0;
	i8 v3818 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v3818 = v3817;

endsub:;
	*p3790 = *(i8*)(intptr_t)(ws+3048);
}

// AddToNamespace workspace at ws+3096 length ws+16
void f194_AddToNamespace(i8 p3819 /* symbol */, i8 p3820 /* namespace */) {
	*(i8*)(intptr_t)(ws+3096) = p3820; /*namespace */
	*(i8*)(intptr_t)(ws+3104) = p3819; /*symbol */

	i8 v3821 = (i8)(intptr_t)(ws+3096);
	i8 v3822 = *(i8*)(intptr_t)v3821;
	i8 v3823 = v3822+(+8);
	i8 v3824 = *(i8*)(intptr_t)v3823;
	i8 v3825 = (i8)+0;
	if (v3824==v3825) goto c02_0367; else goto c02_0368;

c02_0367:;

	i8 v3826 = (i8)(intptr_t)(ws+3104);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = (i8)(intptr_t)(ws+3096);
	i8 v3829 = *(i8*)(intptr_t)v3828;
	*(i8*)(intptr_t)v3829 = v3827;

	i8 v3830 = (i8)(intptr_t)(ws+3104);
	i8 v3831 = *(i8*)(intptr_t)v3830;
	i8 v3832 = (i8)(intptr_t)(ws+3096);
	i8 v3833 = *(i8*)(intptr_t)v3832;
	i8 v3834 = v3833+(+8);
	*(i8*)(intptr_t)v3834 = v3831;

	goto c02_0364;

c02_0368:;

	i8 v3835 = (i8)(intptr_t)(ws+3104);
	i8 v3836 = *(i8*)(intptr_t)v3835;
	i8 v3837 = (i8)(intptr_t)(ws+3096);
	i8 v3838 = *(i8*)(intptr_t)v3837;
	i8 v3839 = v3838+(+8);
	i8 v3840 = *(i8*)(intptr_t)v3839;
	i8 v3841 = v3840+(+56);
	*(i8*)(intptr_t)v3841 = v3836;

	i8 v3842 = (i8)(intptr_t)(ws+3104);
	i8 v3843 = *(i8*)(intptr_t)v3842;
	i8 v3844 = (i8)(intptr_t)(ws+3096);
	i8 v3845 = *(i8*)(intptr_t)v3844;
	i8 v3846 = v3845+(+8);
	*(i8*)(intptr_t)v3846 = v3843;

c02_0364:;

endsub:;
}
const i1 c02_s0042[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s0043[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };

// AddSymbol workspace at ws+3072 length ws+24
void f195_AddSymbol(i8* p3847 /* symbol */, i8 p3848 /* name */, i8 p3849 /* namespace */) {
	*(i8*)(intptr_t)(ws+3072) = p3849; /*namespace */
	*(i8*)(intptr_t)(ws+3080) = p3848; /*name */

	i8 v3850 = (i8)(intptr_t)(ws+3072);
	i8 v3851 = *(i8*)(intptr_t)v3850;
	i8 v3852 = (i8)+0;
	if (v3851==v3852) goto c02_036c; else goto c02_036d;

c02_036c:;

	i8 v3853 = (i8)(intptr_t)(ws+40);
	i8 v3854 = *(i8*)(intptr_t)v3853;
	i8 v3855 = v3854+(+16);
	i8 v3856 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3856 = v3855;

	goto c02_0369;

c02_036d:;

c02_0369:;

	i8 v3857 = (i8)+64;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3858;
	f31_Alloc(&v3858, v3857);
	i8 v3859 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3859 = v3858;

	i8 v3860 = (i8)(intptr_t)(ws+3080);
	i8 v3861 = *(i8*)(intptr_t)v3860;
	i8 v3862 = (i8)+0;
	if (v3861==v3862) goto c02_0372; else goto c02_0371;

c02_0371:;

	i8 v3863 = (i8)(intptr_t)(ws+3072);
	i8 v3864 = *(i8*)(intptr_t)v3863;
	i8 v3865 = (i8)(intptr_t)(ws+3080);
	i8 v3866 = *(i8*)(intptr_t)v3865;

	void f192_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v3867;
	f192_LookupSymbolInNamespace(&v3867, v3866, v3864);
	i8 v3868 = (i8)+0;
	if (v3867==v3868) goto c02_0377; else goto c02_0376;

c02_0376:;


	void f59_StartError(void);
	f59_StartError();

	i8 v3869 = (i8)(intptr_t)c02_s0042;

	void f11_print(i8 /* ptr */);
	f11_print(v3869);

	i8 v3870 = (i8)(intptr_t)(ws+3080);
	i8 v3871 = *(i8*)(intptr_t)v3870;

	void f11_print(i8 /* ptr */);
	f11_print(v3871);

	i8 v3872 = (i8)(intptr_t)c02_s0043;

	void f11_print(i8 /* ptr */);
	f11_print(v3872);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0373;

c02_0377:;

c02_0373:;

	i8 v3873 = (i8)(intptr_t)(ws+3080);
	i8 v3874 = *(i8*)(intptr_t)v3873;
	i8 v3875 = (i8)(intptr_t)(ws+3088);
	i8 v3876 = *(i8*)(intptr_t)v3875;
	i8 v3877 = v3876+(+48);
	*(i8*)(intptr_t)v3877 = v3874;

	i8 v3878 = (i8)(intptr_t)(ws+3072);
	i8 v3879 = *(i8*)(intptr_t)v3878;
	i8 v3880 = (i8)(intptr_t)(ws+3088);
	i8 v3881 = *(i8*)(intptr_t)v3880;

	void f194_AddToNamespace(i8 /* symbol */, i8 /* namespace */);
	f194_AddToNamespace(v3881, v3879);

	goto c02_036e;

c02_0372:;

c02_036e:;

endsub:;
	*p3847 = *(i8*)(intptr_t)(ws+3088);
}

// AddAlias workspace at ws+3016 length ws+32
void f196_AddAlias(i8* p3882 /* symbol */, i8 p3883 /* real */, i8 p3884 /* name */, i8 p3885 /* namespace */) {
	*(i8*)(intptr_t)(ws+3016) = p3885; /*namespace */
	*(i8*)(intptr_t)(ws+3024) = p3884; /*name */
	*(i8*)(intptr_t)(ws+3032) = p3883; /*real */

	i8 v3886 = (i8)(intptr_t)(ws+3016);
	i8 v3887 = *(i8*)(intptr_t)v3886;
	i8 v3888 = (i8)(intptr_t)(ws+3024);
	i8 v3889 = *(i8*)(intptr_t)v3888;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v3890;
	f195_AddSymbol(&v3890, v3889, v3887);
	i8 v3891 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v3891 = v3890;

	i1 v3892 = (i1)+39;
	i8 v3893 = (i8)(intptr_t)(ws+3040);
	i8 v3894 = *(i8*)(intptr_t)v3893;
	i8 v3895 = v3894+(+46);
	*(i1*)(intptr_t)v3895 = v3892;

	i8 v3896 = (i8)(intptr_t)(ws+3032);
	i8 v3897 = *(i8*)(intptr_t)v3896;
	i8 v3898 = (i8)(intptr_t)(ws+3040);
	i8 v3899 = *(i8*)(intptr_t)v3898;
	*(i8*)(intptr_t)v3899 = v3897;

endsub:;
	*p3882 = *(i8*)(intptr_t)(ws+3040);
}

// AddAliasString workspace at ws+2888 length ws+24
void f197_AddAliasString(i8 p3900 /* real */, i8 p3901 /* name */) {
	*(i8*)(intptr_t)(ws+2888) = p3901; /*name */
	*(i8*)(intptr_t)(ws+2896) = p3900; /*real */

	i8 v3902 = (i8)+0;
	i8 v3903 = (i8)(intptr_t)(ws+2888);
	i8 v3904 = *(i8*)(intptr_t)v3903;
	i8 v3905 = (i8)(intptr_t)(ws+2896);
	i8 v3906 = *(i8*)(intptr_t)v3905;

	void f196_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	i8 v3907;
	f196_AddAlias(&v3907, v3906, v3904, v3902);
	i8 v3908 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v3908 = v3907;

endsub:;
}
const i1 c02_s0044[] = { 0x27,0 };
const i1 c02_s0045[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };

// CheckNotPartialType workspace at ws+3056 length ws+8
void f198_CheckNotPartialType(i8 p3909 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p3909; /*type */

	i8 v3910 = (i8)(intptr_t)(ws+3056);
	i8 v3911 = *(i8*)(intptr_t)v3910;
	i8 v3912 = v3911+(+40);
	i1 v3913 = *(i1*)(intptr_t)v3912;
	i1 v3914 = (i1)+1;
	if (v3913==v3914) goto c02_037b; else goto c02_037c;

c02_037b:;


	void f59_StartError(void);
	f59_StartError();

	i8 v3915 = (i8)(intptr_t)c02_s0044;

	void f11_print(i8 /* ptr */);
	f11_print(v3915);

	i8 v3916 = (i8)(intptr_t)(ws+3056);
	i8 v3917 = *(i8*)(intptr_t)v3916;
	i8 v3918 = v3917+(+48);
	i8 v3919 = *(i8*)(intptr_t)v3918;

	void f11_print(i8 /* ptr */);
	f11_print(v3919);

	i8 v3920 = (i8)(intptr_t)c02_s0045;

	void f11_print(i8 /* ptr */);
	f11_print(v3920);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0378;

c02_037c:;

c02_0378:;

endsub:;
}

// MakeNumberType workspace at ws+2888 length ws+24
void f199_MakeNumberType(i8* p3921 /* symbol */, i8 p3922 /* name */, i1 p3923 /* is_signed */, i1 p3924 /* alignment */, i1 p3925 /* width */) {
	*(i1*)(intptr_t)(ws+2888) = p3925; /*width */
	*(i1*)(intptr_t)(ws+2889) = p3924; /*alignment */
	*(i1*)(intptr_t)(ws+2890) = p3923; /*is_signed */
	*(i8*)(intptr_t)(ws+2896) = p3922; /*name */

	i8 v3926 = (i8)+64;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v3927;
	f31_Alloc(&v3927, v3926);
	i8 v3928 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v3928 = v3927;

	i1 v3929 = (i1)+30;
	i8 v3930 = (i8)(intptr_t)(ws+2904);
	i8 v3931 = *(i8*)(intptr_t)v3930;
	i8 v3932 = v3931+(+46);
	*(i1*)(intptr_t)v3932 = v3929;

	i1 v3933 = (i1)+2;
	i8 v3934 = (i8)(intptr_t)(ws+2904);
	i8 v3935 = *(i8*)(intptr_t)v3934;
	i8 v3936 = v3935+(+40);
	*(i1*)(intptr_t)v3936 = v3933;

	i8 v3937 = (i8)(intptr_t)(ws+2888);
	i1 v3938 = *(i1*)(intptr_t)v3937;
	i2 v3939 = v3938;
	i8 v3940 = (i8)(intptr_t)(ws+2904);
	i8 v3941 = *(i8*)(intptr_t)v3940;
	i8 v3942 = v3941+(+42);
	*(i2*)(intptr_t)v3942 = v3939;

	i8 v3943 = (i8)(intptr_t)(ws+2888);
	i1 v3944 = *(i1*)(intptr_t)v3943;
	i2 v3945 = v3944;
	i8 v3946 = (i8)(intptr_t)(ws+2904);
	i8 v3947 = *(i8*)(intptr_t)v3946;
	i8 v3948 = v3947+(+44);
	*(i2*)(intptr_t)v3948 = v3945;

	i8 v3949 = (i8)(intptr_t)(ws+2889);
	i1 v3950 = *(i1*)(intptr_t)v3949;
	i8 v3951 = (i8)(intptr_t)(ws+2904);
	i8 v3952 = *(i8*)(intptr_t)v3951;
	i8 v3953 = v3952+(+41);
	*(i1*)(intptr_t)v3953 = v3950;

	i8 v3954 = (i8)(intptr_t)(ws+2890);
	i1 v3955 = *(i1*)(intptr_t)v3954;
	i8 v3956 = (i8)(intptr_t)(ws+2904);
	i8 v3957 = *(i8*)(intptr_t)v3956;
	*(i1*)(intptr_t)v3957 = v3955;

	i8 v3958 = (i8)(intptr_t)(ws+2896);
	i8 v3959 = *(i8*)(intptr_t)v3958;
	i8 v3960 = (i8)(intptr_t)(ws+2904);
	i8 v3961 = *(i8*)(intptr_t)v3960;
	i8 v3962 = v3961+(+48);
	*(i8*)(intptr_t)v3962 = v3959;

	i8 v3963 = (i8)(intptr_t)(ws+40);
	i8 v3964 = *(i8*)(intptr_t)v3963;
	i8 v3965 = v3964+(+16);
	i8 v3966 = (i8)(intptr_t)(ws+2904);
	i8 v3967 = *(i8*)(intptr_t)v3966;

	void f194_AddToNamespace(i8 /* symbol */, i8 /* namespace */);
	f194_AddToNamespace(v3967, v3965);

endsub:;
	*p3921 = *(i8*)(intptr_t)(ws+2904);
}

// IsTypeOfKind workspace at ws+3120 length ws+10
void f200_IsTypeOfKind(i1* p3968 /* result */, i1 p3969 /* kind */, i8 p3970 /* type */) {
	*(i8*)(intptr_t)(ws+3120) = p3970; /*type */
	*(i1*)(intptr_t)(ws+3128) = p3969; /*kind */

	i1 v3971 = (i1)+0;
	i8 v3972 = (i8)(intptr_t)(ws+3129);
	*(i1*)(intptr_t)v3972 = v3971;

	i8 v3973 = (i8)(intptr_t)(ws+3120);
	i8 v3974 = *(i8*)(intptr_t)v3973;
	i8 v3975 = (i8)+0;
	if (v3974==v3975) goto c02_0385; else goto c02_0387;

c02_0387:;

	i8 v3976 = (i8)(intptr_t)(ws+3120);
	i8 v3977 = *(i8*)(intptr_t)v3976;
	i8 v3978 = v3977+(+46);
	i1 v3979 = *(i1*)(intptr_t)v3978;
	i1 v3980 = (i1)+30;
	if (v3979==v3980) goto c02_0386; else goto c02_0385;

c02_0386:;

	i8 v3981 = (i8)(intptr_t)(ws+3120);
	i8 v3982 = *(i8*)(intptr_t)v3981;
	i8 v3983 = v3982+(+40);
	i1 v3984 = *(i1*)(intptr_t)v3983;
	i8 v3985 = (i8)(intptr_t)(ws+3128);
	i1 v3986 = *(i1*)(intptr_t)v3985;
	if (v3984==v3986) goto c02_0384; else goto c02_0385;

c02_0384:;

	i1 v3987 = (i1)+1;
	i8 v3988 = (i8)(intptr_t)(ws+3129);
	*(i1*)(intptr_t)v3988 = v3987;

	goto c02_037d;

c02_0385:;

c02_037d:;

endsub:;
	*p3968 = *(i1*)(intptr_t)(ws+3129);
}

// IsArray workspace at ws+3064 length ws+9
void f201_IsArray(i1* p3989 /* result */, i8 p3990 /* type */) {
	*(i8*)(intptr_t)(ws+3064) = p3990; /*type */

	i8 v3991 = (i8)(intptr_t)(ws+3064);
	i8 v3992 = *(i8*)(intptr_t)v3991;
	i1 v3993 = (i1)+4;

	void f200_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v3994;
	f200_IsTypeOfKind(&v3994, v3993, v3992);
	i8 v3995 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v3995 = v3994;

endsub:;
	*p3989 = *(i1*)(intptr_t)(ws+3072);
}

// IsPtr workspace at ws+3104 length ws+9
void f202_IsPtr(i1* p3996 /* result */, i8 p3997 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p3997; /*type */

	i8 v3998 = (i8)(intptr_t)(ws+3104);
	i8 v3999 = *(i8*)(intptr_t)v3998;
	i1 v4000 = (i1)+3;

	void f200_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4001;
	f200_IsTypeOfKind(&v4001, v4000, v3999);
	i8 v4002 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4002 = v4001;

endsub:;
	*p3996 = *(i1*)(intptr_t)(ws+3112);
}

// IsNum workspace at ws+3104 length ws+9
void f203_IsNum(i1* p4003 /* result */, i8 p4004 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4004; /*type */

	i8 v4005 = (i8)(intptr_t)(ws+3104);
	i8 v4006 = *(i8*)(intptr_t)v4005;
	i8 v4007 = (i8)+0;
	if (v4006==v4007) goto c02_038b; else goto c02_038c;

c02_038b:;

	i1 v4008 = (i1)+1;
	i8 v4009 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4009 = v4008;

	goto c02_0388;

c02_038c:;

	i8 v4010 = (i8)(intptr_t)(ws+3104);
	i8 v4011 = *(i8*)(intptr_t)v4010;
	i1 v4012 = (i1)+2;

	void f200_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4013;
	f200_IsTypeOfKind(&v4013, v4012, v4011);
	i8 v4014 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4014 = v4013;

c02_0388:;

endsub:;
	*p4003 = *(i1*)(intptr_t)(ws+3112);
}

// IsSNum workspace at ws+3056 length ws+9
void f204_IsSNum(i1* p4015 /* result */, i8 p4016 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4016; /*type */

	i8 v4017 = (i8)(intptr_t)(ws+3056);
	i8 v4018 = *(i8*)(intptr_t)v4017;
	i8 v4019 = (i8)+0;
	if (v4018==v4019) goto c02_0390; else goto c02_0391;

c02_0390:;

	i1 v4020 = (i1)+1;
	i8 v4021 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4021 = v4020;

	goto c02_038d;

c02_0391:;

	i8 v4022 = (i8)(intptr_t)(ws+3056);
	i8 v4023 = *(i8*)(intptr_t)v4022;
	i1 v4024 = (i1)+2;

	void f200_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4025;
	f200_IsTypeOfKind(&v4025, v4024, v4023);
	i1 v4026 = (i1)+0;
	if (v4025==v4026) goto c02_0397; else goto c02_0398;

c02_0398:;

	i8 v4027 = (i8)(intptr_t)(ws+3056);
	i8 v4028 = *(i8*)(intptr_t)v4027;
	i1 v4029 = *(i1*)(intptr_t)v4028;
	i1 v4030 = (i1)+0;
	if (v4029==v4030) goto c02_0397; else goto c02_0396;

c02_0396:;

	i1 v4031 = (i1)+1;
	i8 v4032 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4032 = v4031;

	goto c02_038d;

c02_0397:;

	i1 v4033 = (i1)+0;
	i8 v4034 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4034 = v4033;

c02_038d:;

endsub:;
	*p4015 = *(i1*)(intptr_t)(ws+3064);
}

// IsScalar workspace at ws+3088 length ws+9
void f205_IsScalar(i1* p4035 /* result */, i8 p4036 /* type */) {
	*(i8*)(intptr_t)(ws+3088) = p4036; /*type */

	i8 v4037 = (i8)(intptr_t)(ws+3088);
	i8 v4038 = *(i8*)(intptr_t)v4037;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v4039;
	f202_IsPtr(&v4039, v4038);
	i1 v4040 = (i1)+0;
	if (v4039==v4040) goto c02_03a0; else goto c02_039e;

c02_03a0:;

	i8 v4041 = (i8)(intptr_t)(ws+3088);
	i8 v4042 = *(i8*)(intptr_t)v4041;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v4043;
	f203_IsNum(&v4043, v4042);
	i1 v4044 = (i1)+0;
	if (v4043==v4044) goto c02_039f; else goto c02_039e;

c02_039e:;

	i1 v4045 = (i1)+1;
	i8 v4046 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v4046 = v4045;

	goto c02_0399;

c02_039f:;

	i1 v4047 = (i1)+0;
	i8 v4048 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v4048 = v4047;

c02_0399:;

endsub:;
	*p4035 = *(i1*)(intptr_t)(ws+3096);
}

// IsRecord workspace at ws+3032 length ws+9
void f206_IsRecord(i1* p4049 /* result */, i8 p4050 /* type */) {
	*(i8*)(intptr_t)(ws+3032) = p4050; /*type */

	i8 v4051 = (i8)(intptr_t)(ws+3032);
	i8 v4052 = *(i8*)(intptr_t)v4051;
	i1 v4053 = (i1)+5;

	void f200_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);
	i1 v4054;
	f200_IsTypeOfKind(&v4054, v4053, v4052);
	i8 v4055 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v4055 = v4054;

endsub:;
	*p4049 = *(i1*)(intptr_t)(ws+3040);
}

// MakeLValue workspace at ws+3056 length ws+32
void f207_MakeLValue(i8* p4056 /* lvalue */, i8 p4057 /* address */) {
	*(i8*)(intptr_t)(ws+3056) = p4057; /*address */

	i1 v4058 = (i1)+0;
	i8 v4059 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4059 = v4058;

	i8 v4060 = (i8)(intptr_t)(ws+3056);
	i8 v4061 = *(i8*)(intptr_t)v4060;
	i8 v4062 = v4061+(+16);
	i8 v4063 = *(i8*)(intptr_t)v4062;
	i8 v4064 = *(i8*)(intptr_t)v4063;
	i8 v4065 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v4065 = v4064;

	i8 v4066 = (i8)(intptr_t)(ws+3080);
	i8 v4067 = *(i8*)(intptr_t)v4066;

	void f205_IsScalar(i1* /* result */, i8 /* type */);
	i1 v4068;
	f205_IsScalar(&v4068, v4067);
	i1 v4069 = (i1)+0;
	if (v4068==v4069) goto c02_03a5; else goto c02_03a4;

c02_03a4:;

	i8 v4070 = (i8)(intptr_t)(ws+3080);
	i8 v4071 = *(i8*)(intptr_t)v4070;
	i8 v4072 = v4071+(+42);
	i2 v4073 = *(i2*)(intptr_t)v4072;
	i1 v4074 = v4073;
	i8 v4075 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4075 = v4074;

	goto c02_03a1;

c02_03a5:;

c02_03a1:;

	i8 v4076 = (i8)(intptr_t)(ws+3072);
	i1 v4077 = *(i1*)(intptr_t)v4076;
	i8 v4078 = (i8)(intptr_t)(ws+3056);
	i8 v4079 = *(i8*)(intptr_t)v4078;

	void f97_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	i8 v4080;
	f97_MidLoad(&v4080, v4079, v4077);
	i8 v4081 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v4081 = v4080;

	i8 v4082 = (i8)(intptr_t)(ws+3080);
	i8 v4083 = *(i8*)(intptr_t)v4082;
	i8 v4084 = (i8)(intptr_t)(ws+3064);
	i8 v4085 = *(i8*)(intptr_t)v4084;
	i8 v4086 = v4085+(+16);
	*(i8*)(intptr_t)v4086 = v4083;

endsub:;
	*p4056 = *(i8*)(intptr_t)(ws+3064);
}
const i1 c02_s0046[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };

// UndoLValue workspace at ws+3056 length ws+17
void f208_UndoLValue(i8* p4087 /* address */, i8 p4088 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3056) = p4088; /*lvalue */

	i8 v4089 = (i8)(intptr_t)(ws+3056);
	i8 v4090 = *(i8*)(intptr_t)v4089;
	i8 v4091 = v4090+(+58);
	i1 v4092 = *(i1*)(intptr_t)v4091;
	i8 v4093 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4093 = v4092;

	i8 v4094 = (i8)(intptr_t)(ws+3072);
	i1 v4095 = *(i1*)(intptr_t)v4094;
	i1 v4096 = (i1)+43;
	if (v4095<v4096) goto c02_03ab; else goto c02_03ad;

c02_03ad:;

	i1 v4097 = (i1)+47;
	i8 v4098 = (i8)(intptr_t)(ws+3072);
	i1 v4099 = *(i1*)(intptr_t)v4098;
	if (v4097<v4099) goto c02_03ab; else goto c02_03ac;

c02_03ab:;

	i8 v4100 = (i8)(intptr_t)c02_s0046;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v4100);

	goto c02_03a6;

c02_03ac:;

c02_03a6:;

	i8 v4101 = (i8)(intptr_t)(ws+3056);
	i8 v4102 = *(i8*)(intptr_t)v4101;
	i8 v4103 = v4102+(+24);
	i8 v4104 = *(i8*)(intptr_t)v4103;
	i8 v4105 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v4105 = v4104;

	i8 v4106 = (i8)+0;
	i8 v4107 = (i8)(intptr_t)(ws+3056);
	i8 v4108 = *(i8*)(intptr_t)v4107;
	i8 v4109 = v4108+(+24);
	*(i8*)(intptr_t)v4109 = v4106;

	i8 v4110 = (i8)(intptr_t)(ws+3056);
	i8 v4111 = *(i8*)(intptr_t)v4110;

	void f56_Discard(i8 /* node */);
	f56_Discard(v4111);

endsub:;
	*p4087 = *(i8*)(intptr_t)(ws+3064);
}

// AllocLabel workspace at ws+3072 length ws+2
void f209_AllocLabel(i2* p4112 /* label */) {

	i8 v4113 = (i8)(intptr_t)(ws+48);
	i2 v4114 = *(i2*)(intptr_t)v4113;
	i8 v4115 = (i8)(intptr_t)(ws+3072);
	*(i2*)(intptr_t)v4115 = v4114;

	i8 v4116 = (i8)(intptr_t)(ws+48);
	i2 v4117 = *(i2*)(intptr_t)v4116;
	i2 v4118 = v4117+(+1);
	i8 v4119 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4119 = v4118;

endsub:;
	*p4112 = *(i2*)(intptr_t)(ws+3072);
}

// AllocSubrId workspace at ws+3008 length ws+2
void f210_AllocSubrId(i2* p4120 /* id */) {

	i8 v4121 = (i8)(intptr_t)(ws+50);
	i2 v4122 = *(i2*)(intptr_t)v4121;
	i8 v4123 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v4123 = v4122;

	i8 v4124 = (i8)(intptr_t)(ws+50);
	i2 v4125 = *(i2*)(intptr_t)v4124;
	i2 v4126 = v4125+(+1);
	i8 v4127 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4127 = v4126;

endsub:;
	*p4120 = *(i2*)(intptr_t)(ws+3008);
}

// FindConflictingRegisters workspace at ws+3184 length ws+16
void f211_FindConflictingRegisters(i1* p4128 /* conflicting */, i1 p4129 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4129; /*inreg */

	i1 v4130 = (i1)+0;
	i8 v4131 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4131 = v4130;

	i8 v4132 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4133 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4133 = v4132;

c02_03b0:;

	i8 v4134 = (i8)(intptr_t)(ws+3192);
	i8 v4135 = *(i8*)(intptr_t)v4134;
	i8 v4136 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4135==v4136) goto c02_03b3; else goto c02_03b2;

c02_03b2:;

	i8 v4137 = (i8)(intptr_t)(ws+3192);
	i8 v4138 = *(i8*)(intptr_t)v4137;
	i8 v4139 = v4138+(+8);
	i1 v4140 = *(i1*)(intptr_t)v4139;
	i8 v4141 = (i8)(intptr_t)(ws+3184);
	i1 v4142 = *(i1*)(intptr_t)v4141;
	i1 v4143 = v4140&v4142;
	i1 v4144 = (i1)+0;
	if (v4143==v4144) goto c02_03b8; else goto c02_03b7;

c02_03b7:;

	i8 v4145 = (i8)(intptr_t)(ws+3185);
	i1 v4146 = *(i1*)(intptr_t)v4145;
	i8 v4147 = (i8)(intptr_t)(ws+3192);
	i8 v4148 = *(i8*)(intptr_t)v4147;
	i8 v4149 = v4148+(+9);
	i1 v4150 = *(i1*)(intptr_t)v4149;
	i1 v4151 = v4146|v4150;
	i8 v4152 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4152 = v4151;

	goto c02_03b4;

c02_03b8:;

c02_03b4:;

	i8 v4153 = (i8)(intptr_t)(ws+3192);
	i8 v4154 = *(i8*)(intptr_t)v4153;
	i8 v4155 = v4154+(+16);
	i8 v4156 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4156 = v4155;

	goto c02_03b0;

c02_03b3:;

endsub:;
	*p4128 = *(i1*)(intptr_t)(ws+3185);
}

// FindCompatibleRegisters workspace at ws+3184 length ws+16
void f212_FindCompatibleRegisters(i1* p4157 /* compatible */, i1 p4158 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4158; /*inreg */

	i1 v4159 = (i1)-1;
	i8 v4160 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4160 = v4159;

	i8 v4161 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4162 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4162 = v4161;

c02_03bb:;

	i8 v4163 = (i8)(intptr_t)(ws+3192);
	i8 v4164 = *(i8*)(intptr_t)v4163;
	i8 v4165 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4164==v4165) goto c02_03be; else goto c02_03bd;

c02_03bd:;

	i8 v4166 = (i8)(intptr_t)(ws+3192);
	i8 v4167 = *(i8*)(intptr_t)v4166;
	i8 v4168 = v4167+(+8);
	i1 v4169 = *(i1*)(intptr_t)v4168;
	i8 v4170 = (i8)(intptr_t)(ws+3184);
	i1 v4171 = *(i1*)(intptr_t)v4170;
	i1 v4172 = v4169&v4171;
	i1 v4173 = (i1)+0;
	if (v4172==v4173) goto c02_03c3; else goto c02_03c2;

c02_03c2:;

	i8 v4174 = (i8)(intptr_t)(ws+3185);
	i1 v4175 = *(i1*)(intptr_t)v4174;
	i8 v4176 = (i8)(intptr_t)(ws+3192);
	i8 v4177 = *(i8*)(intptr_t)v4176;
	i8 v4178 = v4177+(+10);
	i1 v4179 = *(i1*)(intptr_t)v4178;
	i1 v4180 = v4175&v4179;
	i8 v4181 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4181 = v4180;

	goto c02_03bf;

c02_03c3:;

c02_03bf:;

	i8 v4182 = (i8)(intptr_t)(ws+3192);
	i8 v4183 = *(i8*)(intptr_t)v4182;
	i8 v4184 = v4183+(+16);
	i8 v4185 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4185 = v4184;

	goto c02_03bb;

c02_03be:;

endsub:;
	*p4157 = *(i1*)(intptr_t)(ws+3185);
}

// FindFirst workspace at ws+3184 length ws+2
void f213_FindFirst(i1* p4186 /* outreg */, i1 p4187 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4187; /*inreg */

	i1 v4188 = (i1)+1;
	i8 v4189 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4189 = v4188;

c02_03c6:;

	i8 v4190 = (i8)(intptr_t)(ws+3185);
	i1 v4191 = *(i1*)(intptr_t)v4190;
	i1 v4192 = (i1)+0;
	if (v4191==v4192) goto c02_03c9; else goto c02_03c8;

c02_03c8:;

	i8 v4193 = (i8)(intptr_t)(ws+3184);
	i1 v4194 = *(i1*)(intptr_t)v4193;
	i8 v4195 = (i8)(intptr_t)(ws+3185);
	i1 v4196 = *(i1*)(intptr_t)v4195;
	i1 v4197 = v4194&v4196;
	i1 v4198 = (i1)+0;
	if (v4197==v4198) goto c02_03ce; else goto c02_03cd;

c02_03cd:;

	goto endsub;

c02_03ce:;

c02_03ca:;

	i8 v4199 = (i8)(intptr_t)(ws+3185);
	i1 v4200 = *(i1*)(intptr_t)v4199;
	i1 v4201 = (i1)+1;
	i1 v4202 = ((i1)v4200)<<v4201;
	i8 v4203 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4203 = v4202;

	goto c02_03c6;

c02_03c9:;

	i1 v4204 = (i1)+0;
	i8 v4205 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4205 = v4204;

endsub:;
	*p4186 = *(i1*)(intptr_t)(ws+3185);
}

// ArchAlignUp workspace at ws+3064 length ws+8
void f214_ArchAlignUp(i2* p4210 /* newvalue */, i1 p4211 /* alignment */, i2 p4212 /* value */) {
	*(i2*)(intptr_t)(ws+3064) = p4212; /*value */
	*(i1*)(intptr_t)(ws+3066) = p4211; /*alignment */

	i8 v4213 = (i8)(intptr_t)(ws+3066);
	i1 v4214 = *(i1*)(intptr_t)v4213;
	i1 v4215 = v4214+(-1);
	i2 v4216 = v4215;
	i8 v4217 = (i8)(intptr_t)(ws+3070);
	*(i2*)(intptr_t)v4217 = v4216;

	i8 v4218 = (i8)(intptr_t)(ws+3064);
	i2 v4219 = *(i2*)(intptr_t)v4218;
	i8 v4220 = (i8)(intptr_t)(ws+3070);
	i2 v4221 = *(i2*)(intptr_t)v4220;
	i2 v4222 = v4219+v4221;
	i8 v4223 = (i8)(intptr_t)(ws+3070);
	i2 v4224 = *(i2*)(intptr_t)v4223;
	i2 v4225 = ~v4224;
	i2 v4226 = v4222&v4225;
	i8 v4227 = (i8)(intptr_t)(ws+3068);
	*(i2*)(intptr_t)v4227 = v4226;

endsub:;
	*p4210 = *(i2*)(intptr_t)(ws+3068);
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

// ArchInitTypes workspace at ws+2888 length ws+0
void f215_ArchInitTypes(void) {

	i1 v4228 = (i1)+8;
	i1 v4229 = (i1)+8;
	i1 v4230 = (i1)+0;
	i8 v4231 = (i8)(intptr_t)c02_s0047;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4232;
	f199_MakeNumberType(&v4232, v4231, v4230, v4229, v4228);
	i8 v4233 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v4233 = v4232;

	i1 v4234 = (i1)+8;
	i1 v4235 = (i1)+8;
	i1 v4236 = (i1)+1;
	i8 v4237 = (i8)(intptr_t)c02_s0048;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4238;
	f199_MakeNumberType(&v4238, v4237, v4236, v4235, v4234);
	i8 v4239 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v4239 = v4238;

	i1 v4240 = (i1)+4;
	i1 v4241 = (i1)+4;
	i1 v4242 = (i1)+0;
	i8 v4243 = (i8)(intptr_t)c02_s0049;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4244;
	f199_MakeNumberType(&v4244, v4243, v4242, v4241, v4240);
	i8 v4245 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v4245 = v4244;

	i1 v4246 = (i1)+4;
	i1 v4247 = (i1)+4;
	i1 v4248 = (i1)+1;
	i8 v4249 = (i8)(intptr_t)c02_s004a;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4250;
	f199_MakeNumberType(&v4250, v4249, v4248, v4247, v4246);
	i8 v4251 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v4251 = v4250;

	i1 v4252 = (i1)+2;
	i1 v4253 = (i1)+2;
	i1 v4254 = (i1)+0;
	i8 v4255 = (i8)(intptr_t)c02_s004b;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4256;
	f199_MakeNumberType(&v4256, v4255, v4254, v4253, v4252);
	i8 v4257 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v4257 = v4256;

	i1 v4258 = (i1)+2;
	i1 v4259 = (i1)+2;
	i1 v4260 = (i1)+1;
	i8 v4261 = (i8)(intptr_t)c02_s004c;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4262;
	f199_MakeNumberType(&v4262, v4261, v4260, v4259, v4258);
	i8 v4263 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v4263 = v4262;

	i1 v4264 = (i1)+1;
	i1 v4265 = (i1)+1;
	i1 v4266 = (i1)+0;
	i8 v4267 = (i8)(intptr_t)c02_s004d;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4268;
	f199_MakeNumberType(&v4268, v4267, v4266, v4265, v4264);
	i8 v4269 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v4269 = v4268;

	i1 v4270 = (i1)+1;
	i1 v4271 = (i1)+1;
	i1 v4272 = (i1)+1;
	i8 v4273 = (i8)(intptr_t)c02_s004e;

	void f199_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
	i8 v4274;
	f199_MakeNumberType(&v4274, v4273, v4272, v4271, v4270);
	i8 v4275 = (i8)(intptr_t)(ws+1048);
	*(i8*)(intptr_t)v4275 = v4274;

	i8 v4276 = (i8)(intptr_t)(ws+992);
	i8 v4277 = *(i8*)(intptr_t)v4276;
	i8 v4278 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v4278 = v4277;

	i8 v4279 = (i8)(intptr_t)c02_s004f;
	i8 v4280 = (i8)(intptr_t)(ws+1056);
	i8 v4281 = *(i8*)(intptr_t)v4280;

	void f197_AddAliasString(i8 /* real */, i8 /* name */);
	f197_AddAliasString(v4281, v4279);

endsub:;
}

// ArchGuessIntType workspace at ws+3040 length ws+16
void f216_ArchGuessIntType(i8* p4282 /* symbol */, i4 p4283 /* max */, i4 p4284 /* min */) {
	*(i4*)(intptr_t)(ws+3040) = p4284; /*min */
	*(i4*)(intptr_t)(ws+3044) = p4283; /*max */

	i8 v4285 = (i8)(intptr_t)(ws+3040);
	i4 v4286 = *(i4*)(intptr_t)v4285;
	i4 v4287 = (i4)+0;
	if ((s4)v4286<(s4)v4287) goto c02_03d5; else goto c02_03d6;

c02_03d6:;

	i4 v4288 = (i4)+255;
	i8 v4289 = (i8)(intptr_t)(ws+3044);
	i4 v4290 = *(i4*)(intptr_t)v4289;
	if ((s4)v4288<(s4)v4290) goto c02_03d5; else goto c02_03d4;

c02_03d4:;

	i8 v4291 = (i8)(intptr_t)(ws+1040);
	i8 v4292 = *(i8*)(intptr_t)v4291;
	i8 v4293 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4293 = v4292;

	goto c02_03cf;

c02_03d5:;

	i8 v4294 = (i8)(intptr_t)(ws+3040);
	i4 v4295 = *(i4*)(intptr_t)v4294;
	i4 v4296 = (i4)-128;
	if ((s4)v4295<(s4)v4296) goto c02_03dc; else goto c02_03dd;

c02_03dd:;

	i4 v4297 = (i4)+127;
	i8 v4298 = (i8)(intptr_t)(ws+3044);
	i4 v4299 = *(i4*)(intptr_t)v4298;
	if ((s4)v4297<(s4)v4299) goto c02_03dc; else goto c02_03db;

c02_03db:;

	i8 v4300 = (i8)(intptr_t)(ws+1048);
	i8 v4301 = *(i8*)(intptr_t)v4300;
	i8 v4302 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4302 = v4301;

	goto c02_03cf;

c02_03dc:;

	i8 v4303 = (i8)(intptr_t)(ws+3040);
	i4 v4304 = *(i4*)(intptr_t)v4303;
	i4 v4305 = (i4)+0;
	if ((s4)v4304<(s4)v4305) goto c02_03e3; else goto c02_03e4;

c02_03e4:;

	i4 v4306 = (i4)+65535;
	i8 v4307 = (i8)(intptr_t)(ws+3044);
	i4 v4308 = *(i4*)(intptr_t)v4307;
	if ((s4)v4306<(s4)v4308) goto c02_03e3; else goto c02_03e2;

c02_03e2:;

	i8 v4309 = (i8)(intptr_t)(ws+1024);
	i8 v4310 = *(i8*)(intptr_t)v4309;
	i8 v4311 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4311 = v4310;

	goto c02_03cf;

c02_03e3:;

	i8 v4312 = (i8)(intptr_t)(ws+3040);
	i4 v4313 = *(i4*)(intptr_t)v4312;
	i4 v4314 = (i4)-32768;
	if ((s4)v4313<(s4)v4314) goto c02_03ea; else goto c02_03eb;

c02_03eb:;

	i4 v4315 = (i4)+32767;
	i8 v4316 = (i8)(intptr_t)(ws+3044);
	i4 v4317 = *(i4*)(intptr_t)v4316;
	if ((s4)v4315<(s4)v4317) goto c02_03ea; else goto c02_03e9;

c02_03e9:;

	i8 v4318 = (i8)(intptr_t)(ws+1032);
	i8 v4319 = *(i8*)(intptr_t)v4318;
	i8 v4320 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4320 = v4319;

	goto c02_03cf;

c02_03ea:;

	i8 v4321 = (i8)(intptr_t)(ws+3040);
	i4 v4322 = *(i4*)(intptr_t)v4321;
	i4 v4323 = (i4)+0;
	if ((s4)v4322<(s4)v4323) goto c02_03ef; else goto c02_03ee;

c02_03ee:;

	i8 v4324 = (i8)(intptr_t)(ws+1008);
	i8 v4325 = *(i8*)(intptr_t)v4324;
	i8 v4326 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4326 = v4325;

	goto c02_03cf;

c02_03ef:;

	i8 v4327 = (i8)(intptr_t)(ws+1016);
	i8 v4328 = *(i8*)(intptr_t)v4327;
	i8 v4329 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4329 = v4328;

c02_03cf:;

endsub:;
	*p4282 = *(i8*)(intptr_t)(ws+3048);
}

// ArchInitVariable workspace at ws+3040 length ws+18
void f217_ArchInitVariable(i8 p4330 /* symbol */) {
	*(i8*)(intptr_t)(ws+3040) = p4330; /*symbol */

	i8 v4331 = (i8)(intptr_t)(ws+3040);
	i8 v4332 = *(i8*)(intptr_t)v4331;
	i8 v4333 = v4332+(+8);
	i8 v4334 = *(i8*)(intptr_t)v4333;
	i8 v4335 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4335 = v4334;

	i8 v4336 = (i8)(intptr_t)(ws+3048);
	i8 v4337 = *(i8*)(intptr_t)v4336;
	i8 v4338 = v4337+(+58);
	i2 v4339 = *(i2*)(intptr_t)v4338;
	i8 v4340 = (i8)(intptr_t)(ws+3056);
	*(i2*)(intptr_t)v4340 = v4339;

	i8 v4341 = (i8)(intptr_t)(ws+3056);
	i2 v4342 = *(i2*)(intptr_t)v4341;
	i8 v4343 = (i8)(intptr_t)(ws+3040);
	i8 v4344 = *(i8*)(intptr_t)v4343;
	i8 v4345 = *(i8*)(intptr_t)v4344;
	i8 v4346 = v4345+(+41);
	i1 v4347 = *(i1*)(intptr_t)v4346;

	void f214_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v4348;
	f214_ArchAlignUp(&v4348, v4347, v4342);
	i8 v4349 = (i8)(intptr_t)(ws+3056);
	*(i2*)(intptr_t)v4349 = v4348;

	i8 v4350 = (i8)(intptr_t)(ws+3056);
	i2 v4351 = *(i2*)(intptr_t)v4350;
	i8 v4352 = (i8)(intptr_t)(ws+3040);
	i8 v4353 = *(i8*)(intptr_t)v4352;
	i8 v4354 = v4353+(+32);
	*(i2*)(intptr_t)v4354 = v4351;

	i8 v4355 = (i8)(intptr_t)(ws+3056);
	i2 v4356 = *(i2*)(intptr_t)v4355;
	i8 v4357 = (i8)(intptr_t)(ws+3040);
	i8 v4358 = *(i8*)(intptr_t)v4357;
	i8 v4359 = *(i8*)(intptr_t)v4358;
	i8 v4360 = v4359+(+42);
	i2 v4361 = *(i2*)(intptr_t)v4360;
	i2 v4362 = v4356+v4361;
	i8 v4363 = (i8)(intptr_t)(ws+3048);
	i8 v4364 = *(i8*)(intptr_t)v4363;
	i8 v4365 = v4364+(+58);
	*(i2*)(intptr_t)v4365 = v4362;

endsub:;
}

// ArchInitMember workspace at ws+3008 length ws+18
void f218_ArchInitMember(i2 p4366 /* position */, i8 p4367 /* member */, i8 p4368 /* containing */) {
	*(i8*)(intptr_t)(ws+3008) = p4368; /*containing */
	*(i8*)(intptr_t)(ws+3016) = p4367; /*member */
	*(i2*)(intptr_t)(ws+3024) = p4366; /*position */

	i8 v4369 = (i8)(intptr_t)(ws+3024);
	i2 v4370 = *(i2*)(intptr_t)v4369;
	i8 v4371 = (i8)(intptr_t)(ws+3016);
	i8 v4372 = *(i8*)(intptr_t)v4371;
	i8 v4373 = *(i8*)(intptr_t)v4372;
	i8 v4374 = v4373+(+41);
	i1 v4375 = *(i1*)(intptr_t)v4374;

	void f214_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v4376;
	f214_ArchAlignUp(&v4376, v4375, v4370);
	i8 v4377 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v4377 = v4376;

	i8 v4378 = (i8)(intptr_t)(ws+3024);
	i2 v4379 = *(i2*)(intptr_t)v4378;
	i8 v4380 = (i8)(intptr_t)(ws+3016);
	i8 v4381 = *(i8*)(intptr_t)v4380;
	i8 v4382 = v4381+(+32);
	*(i2*)(intptr_t)v4382 = v4379;

	i8 v4383 = (i8)(intptr_t)(ws+3024);
	i2 v4384 = *(i2*)(intptr_t)v4383;
	i8 v4385 = (i8)(intptr_t)(ws+3016);
	i8 v4386 = *(i8*)(intptr_t)v4385;
	i8 v4387 = *(i8*)(intptr_t)v4386;
	i8 v4388 = v4387+(+42);
	i2 v4389 = *(i2*)(intptr_t)v4388;
	i2 v4390 = v4384+v4389;
	i8 v4391 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v4391 = v4390;

	i8 v4392 = (i8)(intptr_t)(ws+3008);
	i8 v4393 = *(i8*)(intptr_t)v4392;
	i8 v4394 = v4393+(+42);
	i2 v4395 = *(i2*)(intptr_t)v4394;
	i8 v4396 = (i8)(intptr_t)(ws+3024);
	i2 v4397 = *(i2*)(intptr_t)v4396;
	if (v4395<v4397) goto c02_03f3; else goto c02_03f4;

c02_03f3:;

	i8 v4398 = (i8)(intptr_t)(ws+3024);
	i2 v4399 = *(i2*)(intptr_t)v4398;
	i8 v4400 = (i8)(intptr_t)(ws+3008);
	i8 v4401 = *(i8*)(intptr_t)v4400;
	i8 v4402 = v4401+(+42);
	*(i2*)(intptr_t)v4402 = v4399;

	goto c02_03f0;

c02_03f4:;

c02_03f0:;

endsub:;
}
const i1 c02_s0050[] = { 0x28,0x28,0x69,0x31,0x2a,0x29,0 };
const i1 c02_s0051[] = { 0x29,0 };

// E_symref workspace at ws+3280 length ws+10
void f219_E_symref(i2 p4403 /* off */, i8 p4404 /* sym */) {
	*(i8*)(intptr_t)(ws+3280) = p4404; /*sym */
	*(i2*)(intptr_t)(ws+3288) = p4403; /*off */

	i8 v4405 = (i8)(intptr_t)(ws+3280);
	i8 v4406 = *(i8*)(intptr_t)v4405;
	i8 v4407 = v4406+(+24);
	i8 v4408 = *(i8*)(intptr_t)v4407;
	i8 v4409 = (i8)+0;
	if (v4408==v4409) goto c02_03f9; else goto c02_03f8;

c02_03f8:;

	i8 v4410 = (i8)(intptr_t)c02_s0050;

	void f161_E(i8 /* text */);
	f161_E(v4410);

	i8 v4411 = (i8)(intptr_t)(ws+3280);
	i8 v4412 = *(i8*)(intptr_t)v4411;
	i8 v4413 = v4412+(+24);
	i8 v4414 = *(i8*)(intptr_t)v4413;

	void f161_E(i8 /* text */);
	f161_E(v4414);

	i8 v4415 = (i8)(intptr_t)(ws+3288);
	i2 v4416 = *(i2*)(intptr_t)v4415;

	void f166_E_i16(i2 /* value */);
	f166_E_i16(v4416);

	i8 v4417 = (i8)(intptr_t)c02_s0051;

	void f161_E(i8 /* text */);
	f161_E(v4417);

	goto c02_03f5;

c02_03f9:;

	i1 v4418 = (i1)+2;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v4418);

	i8 v4419 = (i8)(intptr_t)(ws+3280);
	i8 v4420 = *(i8*)(intptr_t)v4419;
	i8 v4421 = v4420+(+8);
	i8 v4422 = *(i8*)(intptr_t)v4421;
	i8 v4423 = v4422+(+56);
	i2 v4424 = *(i2*)(intptr_t)v4423;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v4424);

	i1 v4425 = (i1)+0;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v4425);

	i8 v4426 = (i8)(intptr_t)(ws+3280);
	i8 v4427 = *(i8*)(intptr_t)v4426;
	i8 v4428 = v4427+(+32);
	i2 v4429 = *(i2*)(intptr_t)v4428;
	i8 v4430 = (i8)(intptr_t)(ws+3288);
	i2 v4431 = *(i2*)(intptr_t)v4430;
	i2 v4432 = v4429+v4431;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v4432);

c02_03f5:;

endsub:;
}

// ArchEndInstruction workspace at ws+3168 length ws+0
void f220_ArchEndInstruction(void) {

endsub:;
}

// ArchEndGroup workspace at ws+3160 length ws+0
void f221_ArchEndGroup(void) {


	void f158_E_nl(void);
	f158_E_nl();

endsub:;
}
const i1 c02_s0052[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// PushVid workspace at ws+3296 length ws+2
void f222_PushVid(i2 p4433 /* vid */) {
	*(i2*)(intptr_t)(ws+3296) = p4433; /*vid */

	i8 v4434 = (i8)(intptr_t)(ws+1192);
	i1 v4435 = *(i1*)(intptr_t)v4434;
	i1 v4436 = (i1)+64;
	if (v4435==v4436) goto c02_03fd; else goto c02_03fe;

c02_03fd:;

	i8 v4437 = (i8)(intptr_t)c02_s0052;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v4437);

	goto c02_03fa;

c02_03fe:;

c02_03fa:;

	i8 v4438 = (i8)(intptr_t)(ws+3296);
	i2 v4439 = *(i2*)(intptr_t)v4438;
	i8 v4440 = (i8)(intptr_t)(ws+1064);
	i8 v4441 = (i8)(intptr_t)(ws+1192);
	i1 v4442 = *(i1*)(intptr_t)v4441;
	i8 v4443 = v4442;
	i1 v4444 = (i1)+1;
	i8 v4445 = ((i8)v4443)<<v4444;
	i8 v4446 = v4440+v4445;
	*(i2*)(intptr_t)v4446 = v4439;

	i8 v4447 = (i8)(intptr_t)(ws+1192);
	i1 v4448 = *(i1*)(intptr_t)v4447;
	i1 v4449 = v4448+(+1);
	i8 v4450 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v4450 = v4449;

endsub:;
}

// Push workspace at ws+3288 length ws+2
void f223_Push(i2* p4451 /* vid */) {

	i8 v4452 = (i8)(intptr_t)(ws+1194);
	i2 v4453 = *(i2*)(intptr_t)v4452;
	i8 v4454 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v4454 = v4453;

	i8 v4455 = (i8)(intptr_t)(ws+1194);
	i2 v4456 = *(i2*)(intptr_t)v4455;
	i2 v4457 = v4456+(+1);
	i8 v4458 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4458 = v4457;

	i8 v4459 = (i8)(intptr_t)(ws+3288);
	i2 v4460 = *(i2*)(intptr_t)v4459;

	void f222_PushVid(i2 /* vid */);
	f222_PushVid(v4460);

endsub:;
	*p4451 = *(i2*)(intptr_t)(ws+3288);
}
const i1 c02_s0053[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// CheckVarstackUnderflow workspace at ws+3296 length ws+0
void f224_CheckVarstackUnderflow(void) {

	i8 v4461 = (i8)(intptr_t)(ws+1192);
	i1 v4462 = *(i1*)(intptr_t)v4461;
	i1 v4463 = (i1)+0;
	if (v4462==v4463) goto c02_0402; else goto c02_0403;

c02_0402:;

	i8 v4464 = (i8)(intptr_t)c02_s0053;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v4464);

	goto c02_03ff;

c02_0403:;

c02_03ff:;

endsub:;
}

// Pop workspace at ws+3288 length ws+2
void f225_Pop(i2* p4465 /* vid */) {


	void f224_CheckVarstackUnderflow(void);
	f224_CheckVarstackUnderflow();

	i8 v4466 = (i8)(intptr_t)(ws+1192);
	i1 v4467 = *(i1*)(intptr_t)v4466;
	i1 v4468 = v4467+(-1);
	i8 v4469 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v4469 = v4468;

	i8 v4470 = (i8)(intptr_t)(ws+1064);
	i8 v4471 = (i8)(intptr_t)(ws+1192);
	i1 v4472 = *(i1*)(intptr_t)v4471;
	i8 v4473 = v4472;
	i1 v4474 = (i1)+1;
	i8 v4475 = ((i8)v4473)<<v4474;
	i8 v4476 = v4470+v4475;
	i2 v4477 = *(i2*)(intptr_t)v4476;
	i8 v4478 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v4478 = v4477;

endsub:;
	*p4465 = *(i2*)(intptr_t)(ws+3288);
}

// ArchEmitMove workspace at ws+3200 length ws+2
void f227_ArchEmitMove(i1 p4490 /* dest */, i1 p4491 /* src */) {
	*(i1*)(intptr_t)(ws+3200) = p4491; /*src */
	*(i1*)(intptr_t)(ws+3201) = p4490; /*dest */

endsub:;
}
const i1 c02_s0054[] = { 0x0a,0x09,0x76,0x6f,0x69,0x64,0x20,0 };
const i1 c02_s0055[] = { 0x28,0 };
const i1 c02_s0056[] = { 0x2c,0x20,0 };

// comma workspace at ws+3288 length ws+0
void f229_comma(void) {

	i8 v4499 = (i8)(intptr_t)(ws+3264);
	i1 v4500 = *(i1*)(intptr_t)v4499;
	i1 v4501 = (i1)+0;
	if (v4500==v4501) goto c02_0407; else goto c02_0408;

c02_0407:;

	i8 v4502 = (i8)(intptr_t)c02_s0056;

	void f161_E(i8 /* text */);
	f161_E(v4502);

	goto c02_0404;

c02_0408:;

c02_0404:;

	i1 v4503 = (i1)+0;
	i8 v4504 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4504 = v4503;

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

// Call workspace at ws+3256 length ws+28
void f228_Call(i8 p4492 /* subr */) {
	*(i8*)(intptr_t)(ws+3256) = p4492; /*subr */

	i8 v4493 = (i8)(intptr_t)c02_s0054;

	void f161_E(i8 /* text */);
	f161_E(v4493);

	i8 v4494 = (i8)(intptr_t)(ws+3256);
	i8 v4495 = *(i8*)(intptr_t)v4494;

	void f173_E_subref(i8 /* subr */);
	f173_E_subref(v4495);

	i8 v4496 = (i8)(intptr_t)c02_s0055;

	void f161_E(i8 /* text */);
	f161_E(v4496);

	i1 v4497 = (i1)+1;
	i8 v4498 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4498 = v4497;


	i1 v4505 = (i1)+0;
	i8 v4506 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4506 = v4505;

c02_040b:;

	i8 v4507 = (i8)(intptr_t)(ws+3265);
	i1 v4508 = *(i1*)(intptr_t)v4507;
	i8 v4509 = (i8)(intptr_t)(ws+3256);
	i8 v4510 = *(i8*)(intptr_t)v4509;
	i8 v4511 = v4510+(+89);
	i1 v4512 = *(i1*)(intptr_t)v4511;
	if (v4508==v4512) goto c02_040e; else goto c02_040d;

c02_040d:;

	i8 v4513 = (i8)(intptr_t)(ws+3256);
	i8 v4514 = *(i8*)(intptr_t)v4513;
	i8 v4515 = (i8)(intptr_t)(ws+3265);
	i1 v4516 = *(i1*)(intptr_t)v4515;

	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4517;
	f85_GetOutputParameter(&v4517, v4516, v4514);
	i8 v4518 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v4518 = v4517;


	void f229_comma(void);
	f229_comma();

	i8 v4519 = (i8)(intptr_t)c02_s0057;

	void f161_E(i8 /* text */);
	f161_E(v4519);

	i8 v4520 = (i8)(intptr_t)(ws+3272);
	i8 v4521 = *(i8*)(intptr_t)v4520;
	i8 v4522 = *(i8*)(intptr_t)v4521;
	i8 v4523 = v4522+(+42);
	i2 v4524 = *(i2*)(intptr_t)v4523;
	i1 v4525 = v4524;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4525);

	i8 v4526 = (i8)(intptr_t)c02_s0058;

	void f161_E(i8 /* text */);
	f161_E(v4526);

	i8 v4527 = (i8)(intptr_t)(ws+3272);
	i8 v4528 = *(i8*)(intptr_t)v4527;
	i8 v4529 = v4528+(+48);
	i8 v4530 = *(i8*)(intptr_t)v4529;

	void f161_E(i8 /* text */);
	f161_E(v4530);

	i8 v4531 = (i8)(intptr_t)c02_s0059;

	void f161_E(i8 /* text */);
	f161_E(v4531);

	i8 v4532 = (i8)(intptr_t)(ws+3265);
	i1 v4533 = *(i1*)(intptr_t)v4532;
	i1 v4534 = v4533+(+1);
	i8 v4535 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4535 = v4534;

	goto c02_040b;

c02_040e:;

	i8 v4536 = (i8)(intptr_t)(ws+3256);
	i8 v4537 = *(i8*)(intptr_t)v4536;
	i8 v4538 = v4537+(+88);
	i1 v4539 = *(i1*)(intptr_t)v4538;
	i8 v4540 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4540 = v4539;

c02_0411:;

	i8 v4541 = (i8)(intptr_t)(ws+3265);
	i1 v4542 = *(i1*)(intptr_t)v4541;
	i1 v4543 = (i1)+0;
	if (v4542==v4543) goto c02_0414; else goto c02_0413;

c02_0413:;

	i8 v4544 = (i8)(intptr_t)(ws+3265);
	i1 v4545 = *(i1*)(intptr_t)v4544;
	i1 v4546 = v4545+(-1);
	i8 v4547 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4547 = v4546;

	i8 v4548 = (i8)(intptr_t)(ws+3256);
	i8 v4549 = *(i8*)(intptr_t)v4548;
	i8 v4550 = (i8)(intptr_t)(ws+3265);
	i1 v4551 = *(i1*)(intptr_t)v4550;

	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4552;
	f84_GetInputParameter(&v4552, v4551, v4549);
	i8 v4553 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v4553 = v4552;


	void f229_comma(void);
	f229_comma();

	i8 v4554 = (i8)(intptr_t)c02_s005a;

	void f161_E(i8 /* text */);
	f161_E(v4554);

	i8 v4555 = (i8)(intptr_t)(ws+3272);
	i8 v4556 = *(i8*)(intptr_t)v4555;
	i8 v4557 = *(i8*)(intptr_t)v4556;
	i8 v4558 = v4557+(+42);
	i2 v4559 = *(i2*)(intptr_t)v4558;
	i1 v4560 = v4559;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4560);

	i8 v4561 = (i8)(intptr_t)c02_s005b;

	void f161_E(i8 /* text */);
	f161_E(v4561);

	i8 v4562 = (i8)(intptr_t)(ws+3272);
	i8 v4563 = *(i8*)(intptr_t)v4562;
	i8 v4564 = v4563+(+48);
	i8 v4565 = *(i8*)(intptr_t)v4564;

	void f161_E(i8 /* text */);
	f161_E(v4565);

	i8 v4566 = (i8)(intptr_t)c02_s005c;

	void f161_E(i8 /* text */);
	f161_E(v4566);

	goto c02_0411;

c02_0414:;

	i8 v4567 = (i8)(intptr_t)(ws+3256);
	i8 v4568 = *(i8*)(intptr_t)v4567;
	i8 v4569 = v4568+(+88);
	i1 v4570 = *(i1*)(intptr_t)v4569;
	i8 v4571 = (i8)(intptr_t)(ws+3256);
	i8 v4572 = *(i8*)(intptr_t)v4571;
	i8 v4573 = v4572+(+89);
	i1 v4574 = *(i1*)(intptr_t)v4573;
	i1 v4575 = v4570+v4574;
	i1 v4576 = (i1)+0;
	if (v4575==v4576) goto c02_0418; else goto c02_0419;

c02_0418:;

	i8 v4577 = (i8)(intptr_t)c02_s005d;

	void f161_E(i8 /* text */);
	f161_E(v4577);

	goto c02_0415;

c02_0419:;

c02_0415:;

	i8 v4578 = (i8)(intptr_t)c02_s005e;

	void f161_E(i8 /* text */);
	f161_E(v4578);

	i8 v4579 = (i8)(intptr_t)(ws+1194);
	i2 v4580 = *(i2*)(intptr_t)v4579;
	i8 v4581 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4581 = v4580;

	i8 v4582 = (i8)(intptr_t)(ws+1194);
	i2 v4583 = *(i2*)(intptr_t)v4582;
	i8 v4584 = (i8)(intptr_t)(ws+3256);
	i8 v4585 = *(i8*)(intptr_t)v4584;
	i8 v4586 = v4585+(+89);
	i1 v4587 = *(i1*)(intptr_t)v4586;
	i2 v4588 = v4587;
	i2 v4589 = v4583+v4588;
	i8 v4590 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4590 = v4589;

	i1 v4591 = (i1)+0;
	i8 v4592 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4592 = v4591;

c02_041c:;

	i8 v4593 = (i8)(intptr_t)(ws+3265);
	i1 v4594 = *(i1*)(intptr_t)v4593;
	i8 v4595 = (i8)(intptr_t)(ws+3256);
	i8 v4596 = *(i8*)(intptr_t)v4595;
	i8 v4597 = v4596+(+89);
	i1 v4598 = *(i1*)(intptr_t)v4597;
	if (v4594==v4598) goto c02_041f; else goto c02_041e;

c02_041e:;

	i8 v4599 = (i8)(intptr_t)(ws+3256);
	i8 v4600 = *(i8*)(intptr_t)v4599;
	i8 v4601 = (i8)(intptr_t)(ws+3265);
	i1 v4602 = *(i1*)(intptr_t)v4601;

	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4603;
	f85_GetOutputParameter(&v4603, v4602, v4600);
	i8 v4604 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v4604 = v4603;

	i8 v4605 = (i8)(intptr_t)c02_s005f;

	void f161_E(i8 /* text */);
	f161_E(v4605);

	i8 v4606 = (i8)(intptr_t)(ws+3272);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i8 v4608 = *(i8*)(intptr_t)v4607;
	i8 v4609 = v4608+(+42);
	i2 v4610 = *(i2*)(intptr_t)v4609;
	i1 v4611 = v4610;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4611);

	i8 v4612 = (i8)(intptr_t)c02_s0060;

	void f161_E(i8 /* text */);
	f161_E(v4612);

	i8 v4613 = (i8)(intptr_t)(ws+3280);
	i2 v4614 = *(i2*)(intptr_t)v4613;
	i8 v4615 = (i8)(intptr_t)(ws+3265);
	i1 v4616 = *(i1*)(intptr_t)v4615;
	i2 v4617 = v4616;
	i2 v4618 = v4614+v4617;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4618);

	i8 v4619 = (i8)(intptr_t)c02_s0061;

	void f161_E(i8 /* text */);
	f161_E(v4619);

	i8 v4620 = (i8)(intptr_t)(ws+3265);
	i1 v4621 = *(i1*)(intptr_t)v4620;
	i1 v4622 = v4621+(+1);
	i8 v4623 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4623 = v4622;

	goto c02_041c;

c02_041f:;

	i8 v4624 = (i8)(intptr_t)c02_s0062;

	void f161_E(i8 /* text */);
	f161_E(v4624);

	i8 v4625 = (i8)(intptr_t)(ws+3256);
	i8 v4626 = *(i8*)(intptr_t)v4625;

	void f173_E_subref(i8 /* subr */);
	f173_E_subref(v4626);

	i8 v4627 = (i8)(intptr_t)c02_s0063;

	void f161_E(i8 /* text */);
	f161_E(v4627);

	i1 v4628 = (i1)+1;
	i8 v4629 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4629 = v4628;

	i1 v4630 = (i1)+0;
	i8 v4631 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4631 = v4630;

c02_0422:;

	i8 v4632 = (i8)(intptr_t)(ws+3265);
	i1 v4633 = *(i1*)(intptr_t)v4632;
	i8 v4634 = (i8)(intptr_t)(ws+3256);
	i8 v4635 = *(i8*)(intptr_t)v4634;
	i8 v4636 = v4635+(+89);
	i1 v4637 = *(i1*)(intptr_t)v4636;
	if (v4633==v4637) goto c02_0425; else goto c02_0424;

c02_0424:;

	i8 v4638 = (i8)(intptr_t)(ws+3256);
	i8 v4639 = *(i8*)(intptr_t)v4638;
	i8 v4640 = (i8)(intptr_t)(ws+3265);
	i1 v4641 = *(i1*)(intptr_t)v4640;

	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v4642;
	f85_GetOutputParameter(&v4642, v4641, v4639);
	i8 v4643 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v4643 = v4642;


	void f229_comma(void);
	f229_comma();

	i8 v4644 = (i8)(intptr_t)c02_s0064;

	void f161_E(i8 /* text */);
	f161_E(v4644);

	i8 v4645 = (i8)(intptr_t)(ws+3280);
	i2 v4646 = *(i2*)(intptr_t)v4645;
	i8 v4647 = (i8)(intptr_t)(ws+3265);
	i1 v4648 = *(i1*)(intptr_t)v4647;
	i2 v4649 = v4648;
	i2 v4650 = v4646+v4649;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4650);

	i8 v4651 = (i8)(intptr_t)(ws+3265);
	i1 v4652 = *(i1*)(intptr_t)v4651;
	i1 v4653 = v4652+(+1);
	i8 v4654 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4654 = v4653;

	goto c02_0422;

c02_0425:;

	i1 v4655 = (i1)+0;
	i8 v4656 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4656 = v4655;

c02_0428:;

	i8 v4657 = (i8)(intptr_t)(ws+3265);
	i1 v4658 = *(i1*)(intptr_t)v4657;
	i8 v4659 = (i8)(intptr_t)(ws+3256);
	i8 v4660 = *(i8*)(intptr_t)v4659;
	i8 v4661 = v4660+(+88);
	i1 v4662 = *(i1*)(intptr_t)v4661;
	if (v4658==v4662) goto c02_042b; else goto c02_042a;

c02_042a:;


	void f225_Pop(i2* /* vid */);
	i2 v4663;
	f225_Pop(&v4663);
	i8 v4664 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v4664 = v4663;


	void f229_comma(void);
	f229_comma();

	i8 v4665 = (i8)(intptr_t)c02_s0065;

	void f161_E(i8 /* text */);
	f161_E(v4665);

	i8 v4666 = (i8)(intptr_t)(ws+3282);
	i2 v4667 = *(i2*)(intptr_t)v4666;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4667);

	i8 v4668 = (i8)(intptr_t)(ws+3265);
	i1 v4669 = *(i1*)(intptr_t)v4668;
	i1 v4670 = v4669+(+1);
	i8 v4671 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4671 = v4670;

	goto c02_0428;

c02_042b:;

	i8 v4672 = (i8)(intptr_t)c02_s0066;

	void f161_E(i8 /* text */);
	f161_E(v4672);

	i1 v4673 = (i1)+0;
	i8 v4674 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4674 = v4673;

c02_042e:;

	i8 v4675 = (i8)(intptr_t)(ws+3265);
	i1 v4676 = *(i1*)(intptr_t)v4675;
	i8 v4677 = (i8)(intptr_t)(ws+3256);
	i8 v4678 = *(i8*)(intptr_t)v4677;
	i8 v4679 = v4678+(+89);
	i1 v4680 = *(i1*)(intptr_t)v4679;
	if (v4676==v4680) goto c02_0431; else goto c02_0430;

c02_0430:;

	i8 v4681 = (i8)(intptr_t)(ws+3280);
	i2 v4682 = *(i2*)(intptr_t)v4681;
	i8 v4683 = (i8)(intptr_t)(ws+3265);
	i1 v4684 = *(i1*)(intptr_t)v4683;
	i2 v4685 = v4684;
	i2 v4686 = v4682+v4685;
	i8 v4687 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v4687 = v4686;

	i8 v4688 = (i8)(intptr_t)(ws+3282);
	i2 v4689 = *(i2*)(intptr_t)v4688;

	void f222_PushVid(i2 /* vid */);
	f222_PushVid(v4689);

	i8 v4690 = (i8)(intptr_t)(ws+3265);
	i1 v4691 = *(i1*)(intptr_t)v4690;
	i1 v4692 = v4691+(+1);
	i8 v4693 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v4693 = v4692;

	goto c02_042e;

c02_0431:;

endsub:;
}
const i1 c02_s0067[] = { 0x09,0x69,0 };
const i1 c02_s0068[] = { 0x20,0x76,0 };
const i1 c02_s0069[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
const i1 c02_s006a[] = { 0x29,0 };
const i1 c02_s006b[] = { 0x3b,0x0a,0 };

// LoadConstant workspace at ws+3256 length ws+10
void f230_LoadConstant(i4 p4694 /* value */, i1 p4695 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4695; /*width */
	*(i4*)(intptr_t)(ws+3260) = p4694; /*value */


	void f223_Push(i2* /* vid */);
	i2 v4696;
	f223_Push(&v4696);
	i8 v4697 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v4697 = v4696;

	i8 v4698 = (i8)(intptr_t)c02_s0067;

	void f161_E(i8 /* text */);
	f161_E(v4698);

	i8 v4699 = (i8)(intptr_t)(ws+3256);
	i1 v4700 = *(i1*)(intptr_t)v4699;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4700);

	i8 v4701 = (i8)(intptr_t)c02_s0068;

	void f161_E(i8 /* text */);
	f161_E(v4701);

	i8 v4702 = (i8)(intptr_t)(ws+3264);
	i2 v4703 = *(i2*)(intptr_t)v4702;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4703);

	i8 v4704 = (i8)(intptr_t)c02_s0069;

	void f161_E(i8 /* text */);
	f161_E(v4704);

	i8 v4705 = (i8)(intptr_t)(ws+3256);
	i1 v4706 = *(i1*)(intptr_t)v4705;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4706);

	i8 v4707 = (i8)(intptr_t)c02_s006a;

	void f161_E(i8 /* text */);
	f161_E(v4707);

	i8 v4708 = (i8)(intptr_t)(ws+3260);
	i4 v4709 = *(i4*)(intptr_t)v4708;

	void f167_E_i32(i4 /* value */);
	f167_E_i32(v4709);

	i8 v4710 = (i8)(intptr_t)c02_s006b;

	void f161_E(i8 /* text */);
	f161_E(v4710);

endsub:;
}
const i1 c02_s006c[] = { 0x09,0x2a,0x28,0x69,0 };
const i1 c02_s006d[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
const i1 c02_s006e[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s006f[] = { 0x3b,0x0a,0 };

// StoreVV workspace at ws+3256 length ws+6
void f231_StoreVV(i1 p4711 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4711; /*width */


	void f225_Pop(i2* /* vid */);
	i2 v4712;
	f225_Pop(&v4712);
	i8 v4713 = (i8)(intptr_t)(ws+3258);
	*(i2*)(intptr_t)v4713 = v4712;


	void f225_Pop(i2* /* vid */);
	i2 v4714;
	f225_Pop(&v4714);
	i8 v4715 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v4715 = v4714;

	i8 v4716 = (i8)(intptr_t)c02_s006c;

	void f161_E(i8 /* text */);
	f161_E(v4716);

	i8 v4717 = (i8)(intptr_t)(ws+3256);
	i1 v4718 = *(i1*)(intptr_t)v4717;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4718);

	i8 v4719 = (i8)(intptr_t)c02_s006d;

	void f161_E(i8 /* text */);
	f161_E(v4719);

	i8 v4720 = (i8)(intptr_t)(ws+3258);
	i2 v4721 = *(i2*)(intptr_t)v4720;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4721);

	i8 v4722 = (i8)(intptr_t)c02_s006e;

	void f161_E(i8 /* text */);
	f161_E(v4722);

	i8 v4723 = (i8)(intptr_t)(ws+3260);
	i2 v4724 = *(i2*)(intptr_t)v4723;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4724);

	i8 v4725 = (i8)(intptr_t)c02_s006f;

	void f161_E(i8 /* text */);
	f161_E(v4725);

endsub:;
}
const i1 c02_s0070[] = { 0x09,0x69,0 };
const i1 c02_s0071[] = { 0x20,0x76,0 };
const i1 c02_s0072[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
const i1 c02_s0073[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
const i1 c02_s0074[] = { 0x3b,0x0a,0 };

// LoadVV workspace at ws+3256 length ws+6
void f232_LoadVV(i1 p4726 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4726; /*width */


	void f225_Pop(i2* /* vid */);
	i2 v4727;
	f225_Pop(&v4727);
	i8 v4728 = (i8)(intptr_t)(ws+3258);
	*(i2*)(intptr_t)v4728 = v4727;


	void f223_Push(i2* /* vid */);
	i2 v4729;
	f223_Push(&v4729);
	i8 v4730 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v4730 = v4729;

	i8 v4731 = (i8)(intptr_t)c02_s0070;

	void f161_E(i8 /* text */);
	f161_E(v4731);

	i8 v4732 = (i8)(intptr_t)(ws+3256);
	i1 v4733 = *(i1*)(intptr_t)v4732;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4733);

	i8 v4734 = (i8)(intptr_t)c02_s0071;

	void f161_E(i8 /* text */);
	f161_E(v4734);

	i8 v4735 = (i8)(intptr_t)(ws+3260);
	i2 v4736 = *(i2*)(intptr_t)v4735;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4736);

	i8 v4737 = (i8)(intptr_t)c02_s0072;

	void f161_E(i8 /* text */);
	f161_E(v4737);

	i8 v4738 = (i8)(intptr_t)(ws+3256);
	i1 v4739 = *(i1*)(intptr_t)v4738;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4739);

	i8 v4740 = (i8)(intptr_t)c02_s0073;

	void f161_E(i8 /* text */);
	f161_E(v4740);

	i8 v4741 = (i8)(intptr_t)(ws+3258);
	i2 v4742 = *(i2*)(intptr_t)v4741;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4742);

	i8 v4743 = (i8)(intptr_t)c02_s0074;

	void f161_E(i8 /* text */);
	f161_E(v4743);

endsub:;
}
const i1 c02_s0075[] = { 0x09,0x69,0 };
const i1 c02_s0076[] = { 0x20,0x76,0 };
const i1 c02_s0077[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s0078[] = { 0x76,0 };
const i1 c02_s0079[] = { 0x3b,0x0a,0 };

// Op2VV workspace at ws+3256 length ws+22
void f233_Op2VV(i8 p4744 /* op */, i1 p4745 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4745; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4744; /*op */


	void f225_Pop(i2* /* vid */);
	i2 v4746;
	f225_Pop(&v4746);
	i8 v4747 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4747 = v4746;


	void f225_Pop(i2* /* vid */);
	i2 v4748;
	f225_Pop(&v4748);
	i8 v4749 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4749 = v4748;


	void f223_Push(i2* /* vid */);
	i2 v4750;
	f223_Push(&v4750);
	i8 v4751 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v4751 = v4750;

	i8 v4752 = (i8)(intptr_t)c02_s0075;

	void f161_E(i8 /* text */);
	f161_E(v4752);

	i8 v4753 = (i8)(intptr_t)(ws+3256);
	i1 v4754 = *(i1*)(intptr_t)v4753;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4754);

	i8 v4755 = (i8)(intptr_t)c02_s0076;

	void f161_E(i8 /* text */);
	f161_E(v4755);

	i8 v4756 = (i8)(intptr_t)(ws+3276);
	i2 v4757 = *(i2*)(intptr_t)v4756;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4757);

	i8 v4758 = (i8)(intptr_t)c02_s0077;

	void f161_E(i8 /* text */);
	f161_E(v4758);

	i8 v4759 = (i8)(intptr_t)(ws+3274);
	i2 v4760 = *(i2*)(intptr_t)v4759;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4760);

	i8 v4761 = (i8)(intptr_t)(ws+3264);
	i8 v4762 = *(i8*)(intptr_t)v4761;

	void f161_E(i8 /* text */);
	f161_E(v4762);

	i8 v4763 = (i8)(intptr_t)c02_s0078;

	void f161_E(i8 /* text */);
	f161_E(v4763);

	i8 v4764 = (i8)(intptr_t)(ws+3272);
	i2 v4765 = *(i2*)(intptr_t)v4764;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4765);

	i8 v4766 = (i8)(intptr_t)c02_s0079;

	void f161_E(i8 /* text */);
	f161_E(v4766);

endsub:;
}
const i1 c02_s007a[] = { 0x09,0x69,0 };
const i1 c02_s007b[] = { 0x20,0x76,0 };
const i1 c02_s007c[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s007d[] = { 0x28,0 };
const i1 c02_s007e[] = { 0x29,0x3b,0x0a,0 };

// Op2VC workspace at ws+3256 length ws+24
void f234_Op2VC(i4 p4767 /* rhs */, i8 p4768 /* op */, i1 p4769 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4769; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4768; /*op */
	*(i4*)(intptr_t)(ws+3272) = p4767; /*rhs */


	void f225_Pop(i2* /* vid */);
	i2 v4770;
	f225_Pop(&v4770);
	i8 v4771 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v4771 = v4770;


	void f223_Push(i2* /* vid */);
	i2 v4772;
	f223_Push(&v4772);
	i8 v4773 = (i8)(intptr_t)(ws+3278);
	*(i2*)(intptr_t)v4773 = v4772;

	i8 v4774 = (i8)(intptr_t)c02_s007a;

	void f161_E(i8 /* text */);
	f161_E(v4774);

	i8 v4775 = (i8)(intptr_t)(ws+3256);
	i1 v4776 = *(i1*)(intptr_t)v4775;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4776);

	i8 v4777 = (i8)(intptr_t)c02_s007b;

	void f161_E(i8 /* text */);
	f161_E(v4777);

	i8 v4778 = (i8)(intptr_t)(ws+3278);
	i2 v4779 = *(i2*)(intptr_t)v4778;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4779);

	i8 v4780 = (i8)(intptr_t)c02_s007c;

	void f161_E(i8 /* text */);
	f161_E(v4780);

	i8 v4781 = (i8)(intptr_t)(ws+3276);
	i2 v4782 = *(i2*)(intptr_t)v4781;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4782);

	i8 v4783 = (i8)(intptr_t)(ws+3264);
	i8 v4784 = *(i8*)(intptr_t)v4783;

	void f161_E(i8 /* text */);
	f161_E(v4784);

	i8 v4785 = (i8)(intptr_t)c02_s007d;

	void f161_E(i8 /* text */);
	f161_E(v4785);

	i8 v4786 = (i8)(intptr_t)(ws+3272);
	i4 v4787 = *(i4*)(intptr_t)v4786;

	void f167_E_i32(i4 /* value */);
	f167_E_i32(v4787);

	i8 v4788 = (i8)(intptr_t)c02_s007e;

	void f161_E(i8 /* text */);
	f161_E(v4788);

endsub:;
}
const i1 c02_s007f[] = { 0x09,0x69,0 };
const i1 c02_s0080[] = { 0x20,0x76,0 };
const i1 c02_s0081[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
const i1 c02_s0082[] = { 0x29,0x76,0 };
const i1 c02_s0083[] = { 0x28,0x73,0 };
const i1 c02_s0084[] = { 0x29,0x76,0 };
const i1 c02_s0085[] = { 0x3b,0x0a,0 };

// Op2VVSigned workspace at ws+3256 length ws+22
void f235_Op2VVSigned(i8 p4789 /* op */, i1 p4790 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4790; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4789; /*op */


	void f225_Pop(i2* /* vid */);
	i2 v4791;
	f225_Pop(&v4791);
	i8 v4792 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4792 = v4791;


	void f225_Pop(i2* /* vid */);
	i2 v4793;
	f225_Pop(&v4793);
	i8 v4794 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4794 = v4793;


	void f223_Push(i2* /* vid */);
	i2 v4795;
	f223_Push(&v4795);
	i8 v4796 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v4796 = v4795;

	i8 v4797 = (i8)(intptr_t)c02_s007f;

	void f161_E(i8 /* text */);
	f161_E(v4797);

	i8 v4798 = (i8)(intptr_t)(ws+3256);
	i1 v4799 = *(i1*)(intptr_t)v4798;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4799);

	i8 v4800 = (i8)(intptr_t)c02_s0080;

	void f161_E(i8 /* text */);
	f161_E(v4800);

	i8 v4801 = (i8)(intptr_t)(ws+3276);
	i2 v4802 = *(i2*)(intptr_t)v4801;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4802);

	i8 v4803 = (i8)(intptr_t)c02_s0081;

	void f161_E(i8 /* text */);
	f161_E(v4803);

	i8 v4804 = (i8)(intptr_t)(ws+3256);
	i1 v4805 = *(i1*)(intptr_t)v4804;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4805);

	i8 v4806 = (i8)(intptr_t)c02_s0082;

	void f161_E(i8 /* text */);
	f161_E(v4806);

	i8 v4807 = (i8)(intptr_t)(ws+3274);
	i2 v4808 = *(i2*)(intptr_t)v4807;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4808);

	i8 v4809 = (i8)(intptr_t)(ws+3264);
	i8 v4810 = *(i8*)(intptr_t)v4809;

	void f161_E(i8 /* text */);
	f161_E(v4810);

	i8 v4811 = (i8)(intptr_t)c02_s0083;

	void f161_E(i8 /* text */);
	f161_E(v4811);

	i8 v4812 = (i8)(intptr_t)(ws+3256);
	i1 v4813 = *(i1*)(intptr_t)v4812;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4813);

	i8 v4814 = (i8)(intptr_t)c02_s0084;

	void f161_E(i8 /* text */);
	f161_E(v4814);

	i8 v4815 = (i8)(intptr_t)(ws+3272);
	i2 v4816 = *(i2*)(intptr_t)v4815;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4816);

	i8 v4817 = (i8)(intptr_t)c02_s0085;

	void f161_E(i8 /* text */);
	f161_E(v4817);

endsub:;
}
const i1 c02_s0086[] = { 0x09,0x69,0 };
const i1 c02_s0087[] = { 0x20,0x76,0 };
const i1 c02_s0088[] = { 0x20,0x3d,0x20,0x76,0 };
const i1 c02_s0089[] = { 0x28,0 };
const i1 c02_s008a[] = { 0x29,0x3b,0x0a,0 };

// Op2VCSigned workspace at ws+3256 length ws+24
void f236_Op2VCSigned(i4 p4818 /* rhs */, i8 p4819 /* op */, i1 p4820 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4820; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4819; /*op */
	*(i4*)(intptr_t)(ws+3272) = p4818; /*rhs */


	void f225_Pop(i2* /* vid */);
	i2 v4821;
	f225_Pop(&v4821);
	i8 v4822 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v4822 = v4821;


	void f223_Push(i2* /* vid */);
	i2 v4823;
	f223_Push(&v4823);
	i8 v4824 = (i8)(intptr_t)(ws+3278);
	*(i2*)(intptr_t)v4824 = v4823;

	i8 v4825 = (i8)(intptr_t)c02_s0086;

	void f161_E(i8 /* text */);
	f161_E(v4825);

	i8 v4826 = (i8)(intptr_t)(ws+3256);
	i1 v4827 = *(i1*)(intptr_t)v4826;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4827);

	i8 v4828 = (i8)(intptr_t)c02_s0087;

	void f161_E(i8 /* text */);
	f161_E(v4828);

	i8 v4829 = (i8)(intptr_t)(ws+3278);
	i2 v4830 = *(i2*)(intptr_t)v4829;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4830);

	i8 v4831 = (i8)(intptr_t)c02_s0088;

	void f161_E(i8 /* text */);
	f161_E(v4831);

	i8 v4832 = (i8)(intptr_t)(ws+3276);
	i2 v4833 = *(i2*)(intptr_t)v4832;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4833);

	i8 v4834 = (i8)(intptr_t)(ws+3264);
	i8 v4835 = *(i8*)(intptr_t)v4834;

	void f161_E(i8 /* text */);
	f161_E(v4835);

	i8 v4836 = (i8)(intptr_t)c02_s0089;

	void f161_E(i8 /* text */);
	f161_E(v4836);

	i8 v4837 = (i8)(intptr_t)(ws+3272);
	i4 v4838 = *(i4*)(intptr_t)v4837;

	void f167_E_i32(i4 /* value */);
	f167_E_i32(v4838);

	i8 v4839 = (i8)(intptr_t)c02_s008a;

	void f161_E(i8 /* text */);
	f161_E(v4839);

endsub:;
}
const i1 c02_s008b[] = { 0x09,0x69,0 };
const i1 c02_s008c[] = { 0x20,0x76,0 };
const i1 c02_s008d[] = { 0x20,0x3d,0x20,0 };
const i1 c02_s008e[] = { 0x76,0 };
const i1 c02_s008f[] = { 0x3b,0x0a,0 };

// Op1V workspace at ws+3256 length ws+20
void f237_Op1V(i8 p4840 /* op */, i1 p4841 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4841; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4840; /*op */


	void f225_Pop(i2* /* vid */);
	i2 v4842;
	f225_Pop(&v4842);
	i8 v4843 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4843 = v4842;


	void f223_Push(i2* /* vid */);
	i2 v4844;
	f223_Push(&v4844);
	i8 v4845 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4845 = v4844;

	i8 v4846 = (i8)(intptr_t)c02_s008b;

	void f161_E(i8 /* text */);
	f161_E(v4846);

	i8 v4847 = (i8)(intptr_t)(ws+3256);
	i1 v4848 = *(i1*)(intptr_t)v4847;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4848);

	i8 v4849 = (i8)(intptr_t)c02_s008c;

	void f161_E(i8 /* text */);
	f161_E(v4849);

	i8 v4850 = (i8)(intptr_t)(ws+3274);
	i2 v4851 = *(i2*)(intptr_t)v4850;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4851);

	i8 v4852 = (i8)(intptr_t)c02_s008d;

	void f161_E(i8 /* text */);
	f161_E(v4852);

	i8 v4853 = (i8)(intptr_t)(ws+3264);
	i8 v4854 = *(i8*)(intptr_t)v4853;

	void f161_E(i8 /* text */);
	f161_E(v4854);

	i8 v4855 = (i8)(intptr_t)c02_s008e;

	void f161_E(i8 /* text */);
	f161_E(v4855);

	i8 v4856 = (i8)(intptr_t)(ws+3272);
	i2 v4857 = *(i2*)(intptr_t)v4856;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4857);

	i8 v4858 = (i8)(intptr_t)c02_s008f;

	void f161_E(i8 /* text */);
	f161_E(v4858);

endsub:;
}
const i1 c02_s0090[] = { 0x09,0x69,0 };
const i1 c02_s0091[] = { 0x20,0x76,0 };
const i1 c02_s0092[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
const i1 c02_s0093[] = { 0x29,0x76,0 };
const i1 c02_s0094[] = { 0x29,0 };
const i1 c02_s0095[] = { 0x76,0 };
const i1 c02_s0096[] = { 0x3b,0x0a,0 };

// Shift workspace at ws+3256 length ws+30
void f238_Shift(i8 p4859 /* op */, i8 p4860 /* type */, i1 p4861 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p4861; /*width */
	*(i8*)(intptr_t)(ws+3264) = p4860; /*type */
	*(i8*)(intptr_t)(ws+3272) = p4859; /*op */


	void f225_Pop(i2* /* vid */);
	i2 v4862;
	f225_Pop(&v4862);
	i8 v4863 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4863 = v4862;


	void f225_Pop(i2* /* vid */);
	i2 v4864;
	f225_Pop(&v4864);
	i8 v4865 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v4865 = v4864;


	void f223_Push(i2* /* vid */);
	i2 v4866;
	f223_Push(&v4866);
	i8 v4867 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v4867 = v4866;

	i8 v4868 = (i8)(intptr_t)c02_s0090;

	void f161_E(i8 /* text */);
	f161_E(v4868);

	i8 v4869 = (i8)(intptr_t)(ws+3256);
	i1 v4870 = *(i1*)(intptr_t)v4869;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4870);

	i8 v4871 = (i8)(intptr_t)c02_s0091;

	void f161_E(i8 /* text */);
	f161_E(v4871);

	i8 v4872 = (i8)(intptr_t)(ws+3284);
	i2 v4873 = *(i2*)(intptr_t)v4872;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4873);

	i8 v4874 = (i8)(intptr_t)c02_s0092;

	void f161_E(i8 /* text */);
	f161_E(v4874);

	i8 v4875 = (i8)(intptr_t)(ws+3264);
	i8 v4876 = *(i8*)(intptr_t)v4875;

	void f161_E(i8 /* text */);
	f161_E(v4876);

	i8 v4877 = (i8)(intptr_t)c02_s0093;

	void f161_E(i8 /* text */);
	f161_E(v4877);

	i8 v4878 = (i8)(intptr_t)(ws+3282);
	i2 v4879 = *(i2*)(intptr_t)v4878;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4879);

	i8 v4880 = (i8)(intptr_t)c02_s0094;

	void f161_E(i8 /* text */);
	f161_E(v4880);

	i8 v4881 = (i8)(intptr_t)(ws+3272);
	i8 v4882 = *(i8*)(intptr_t)v4881;

	void f161_E(i8 /* text */);
	f161_E(v4882);

	i8 v4883 = (i8)(intptr_t)c02_s0095;

	void f161_E(i8 /* text */);
	f161_E(v4883);

	i8 v4884 = (i8)(intptr_t)(ws+3280);
	i2 v4885 = *(i2*)(intptr_t)v4884;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4885);

	i8 v4886 = (i8)(intptr_t)c02_s0096;

	void f161_E(i8 /* text */);
	f161_E(v4886);

endsub:;
}
const i1 c02_s0097[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
const i1 c02_s0098[] = { 0x76,0 };
const i1 c02_s0099[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s009a[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s009b[] = { 0x3b,0x0a,0 };

// Branch workspace at ws+3256 length ws+20
void f239_Branch(i8 p4887 /* op */, i8 p4888 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p4888; /*node */
	*(i8*)(intptr_t)(ws+3264) = p4887; /*op */


	void f225_Pop(i2* /* vid */);
	i2 v4889;
	f225_Pop(&v4889);
	i8 v4890 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v4890 = v4889;


	void f225_Pop(i2* /* vid */);
	i2 v4891;
	f225_Pop(&v4891);
	i8 v4892 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v4892 = v4891;

	i8 v4893 = (i8)(intptr_t)c02_s0097;

	void f161_E(i8 /* text */);
	f161_E(v4893);

	i8 v4894 = (i8)(intptr_t)(ws+3274);
	i2 v4895 = *(i2*)(intptr_t)v4894;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4895);

	i8 v4896 = (i8)(intptr_t)(ws+3264);
	i8 v4897 = *(i8*)(intptr_t)v4896;

	void f161_E(i8 /* text */);
	f161_E(v4897);

	i8 v4898 = (i8)(intptr_t)c02_s0098;

	void f161_E(i8 /* text */);
	f161_E(v4898);

	i8 v4899 = (i8)(intptr_t)(ws+3272);
	i2 v4900 = *(i2*)(intptr_t)v4899;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4900);

	i8 v4901 = (i8)(intptr_t)c02_s0099;

	void f161_E(i8 /* text */);
	f161_E(v4901);

	i8 v4902 = (i8)(intptr_t)(ws+3256);
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i2 v4904 = *(i2*)(intptr_t)v4903;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4904);

	i8 v4905 = (i8)(intptr_t)c02_s009a;

	void f161_E(i8 /* text */);
	f161_E(v4905);

	i8 v4906 = (i8)(intptr_t)(ws+3256);
	i8 v4907 = *(i8*)(intptr_t)v4906;
	i8 v4908 = v4907+(+2);
	i2 v4909 = *(i2*)(intptr_t)v4908;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4909);

	i8 v4910 = (i8)(intptr_t)c02_s009b;

	void f161_E(i8 /* text */);
	f161_E(v4910);

endsub:;
}
const i1 c02_s009c[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
const i1 c02_s009d[] = { 0x29,0x76,0 };
const i1 c02_s009e[] = { 0x28,0x73,0 };
const i1 c02_s009f[] = { 0x29,0x76,0 };
const i1 c02_s00a0[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a1[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a2[] = { 0x3b,0x0a,0 };

// BranchSigned workspace at ws+3256 length ws+28
void f240_BranchSigned(i8 p4911 /* op */, i1 p4912 /* width */, i8 p4913 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p4913; /*node */
	*(i1*)(intptr_t)(ws+3264) = p4912; /*width */
	*(i8*)(intptr_t)(ws+3272) = p4911; /*op */


	void f225_Pop(i2* /* vid */);
	i2 v4914;
	f225_Pop(&v4914);
	i8 v4915 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v4915 = v4914;


	void f225_Pop(i2* /* vid */);
	i2 v4916;
	f225_Pop(&v4916);
	i8 v4917 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v4917 = v4916;

	i8 v4918 = (i8)(intptr_t)c02_s009c;

	void f161_E(i8 /* text */);
	f161_E(v4918);

	i8 v4919 = (i8)(intptr_t)(ws+3264);
	i1 v4920 = *(i1*)(intptr_t)v4919;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4920);

	i8 v4921 = (i8)(intptr_t)c02_s009d;

	void f161_E(i8 /* text */);
	f161_E(v4921);

	i8 v4922 = (i8)(intptr_t)(ws+3282);
	i2 v4923 = *(i2*)(intptr_t)v4922;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4923);

	i8 v4924 = (i8)(intptr_t)(ws+3272);
	i8 v4925 = *(i8*)(intptr_t)v4924;

	void f161_E(i8 /* text */);
	f161_E(v4925);

	i8 v4926 = (i8)(intptr_t)c02_s009e;

	void f161_E(i8 /* text */);
	f161_E(v4926);

	i8 v4927 = (i8)(intptr_t)(ws+3264);
	i1 v4928 = *(i1*)(intptr_t)v4927;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4928);

	i8 v4929 = (i8)(intptr_t)c02_s009f;

	void f161_E(i8 /* text */);
	f161_E(v4929);

	i8 v4930 = (i8)(intptr_t)(ws+3280);
	i2 v4931 = *(i2*)(intptr_t)v4930;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4931);

	i8 v4932 = (i8)(intptr_t)c02_s00a0;

	void f161_E(i8 /* text */);
	f161_E(v4932);

	i8 v4933 = (i8)(intptr_t)(ws+3256);
	i8 v4934 = *(i8*)(intptr_t)v4933;
	i2 v4935 = *(i2*)(intptr_t)v4934;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4935);

	i8 v4936 = (i8)(intptr_t)c02_s00a1;

	void f161_E(i8 /* text */);
	f161_E(v4936);

	i8 v4937 = (i8)(intptr_t)(ws+3256);
	i8 v4938 = *(i8*)(intptr_t)v4937;
	i8 v4939 = v4938+(+2);
	i2 v4940 = *(i2*)(intptr_t)v4939;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4940);

	i8 v4941 = (i8)(intptr_t)c02_s00a2;

	void f161_E(i8 /* text */);
	f161_E(v4941);

endsub:;
}
const i1 c02_s00a3[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a4[] = { 0x3b,0x0a,0 };

// BranchConstant workspace at ws+3256 length ws+16
void f241_BranchConstant(i4 p4942 /* rhs */, i4 p4943 /* lhs */, i8 p4944 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p4944; /*node */
	*(i4*)(intptr_t)(ws+3264) = p4943; /*lhs */
	*(i4*)(intptr_t)(ws+3268) = p4942; /*rhs */

	i8 v4945 = (i8)(intptr_t)c02_s00a3;

	void f161_E(i8 /* text */);
	f161_E(v4945);

	i8 v4946 = (i8)(intptr_t)(ws+3264);
	i4 v4947 = *(i4*)(intptr_t)v4946;
	i8 v4948 = (i8)(intptr_t)(ws+3268);
	i4 v4949 = *(i4*)(intptr_t)v4948;
	if (v4947==v4949) goto c02_0435; else goto c02_0436;

c02_0435:;

	i8 v4950 = (i8)(intptr_t)(ws+3256);
	i8 v4951 = *(i8*)(intptr_t)v4950;
	i2 v4952 = *(i2*)(intptr_t)v4951;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4952);

	goto c02_0432;

c02_0436:;

	i8 v4953 = (i8)(intptr_t)(ws+3256);
	i8 v4954 = *(i8*)(intptr_t)v4953;
	i8 v4955 = v4954+(+2);
	i2 v4956 = *(i2*)(intptr_t)v4955;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4956);

c02_0432:;

	i8 v4957 = (i8)(intptr_t)c02_s00a4;

	void f161_E(i8 /* text */);
	f161_E(v4957);

endsub:;
}
const i1 c02_s00a5[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
const i1 c02_s00a6[] = { 0x20,0x21,0x3d,0x20,0 };
const i1 c02_s00a7[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00a8[] = { 0x3b,0x0a,0 };

// Whencase workspace at ws+3256 length ws+8
void f242_Whencase(i2 p4958 /* falselabel */, i4 p4959 /* value */) {
	*(i4*)(intptr_t)(ws+3256) = p4959; /*value */
	*(i2*)(intptr_t)(ws+3260) = p4958; /*falselabel */

	i8 v4960 = (i8)(intptr_t)(ws+1064);
	i8 v4961 = (i8)(intptr_t)(ws+1192);
	i1 v4962 = *(i1*)(intptr_t)v4961;
	i1 v4963 = v4962+(-1);
	i8 v4964 = v4963;
	i1 v4965 = (i1)+1;
	i8 v4966 = ((i8)v4964)<<v4965;
	i8 v4967 = v4960+v4966;
	i2 v4968 = *(i2*)(intptr_t)v4967;
	i8 v4969 = (i8)(intptr_t)(ws+3262);
	*(i2*)(intptr_t)v4969 = v4968;

	i8 v4970 = (i8)(intptr_t)c02_s00a5;

	void f161_E(i8 /* text */);
	f161_E(v4970);

	i8 v4971 = (i8)(intptr_t)(ws+3262);
	i2 v4972 = *(i2*)(intptr_t)v4971;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4972);

	i8 v4973 = (i8)(intptr_t)c02_s00a6;

	void f161_E(i8 /* text */);
	f161_E(v4973);

	i8 v4974 = (i8)(intptr_t)(ws+3256);
	i4 v4975 = *(i4*)(intptr_t)v4974;

	void f167_E_i32(i4 /* value */);
	f167_E_i32(v4975);

	i8 v4976 = (i8)(intptr_t)c02_s00a7;

	void f161_E(i8 /* text */);
	f161_E(v4976);

	i8 v4977 = (i8)(intptr_t)(ws+3260);
	i2 v4978 = *(i2*)(intptr_t)v4977;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v4978);

	i8 v4979 = (i8)(intptr_t)c02_s00a8;

	void f161_E(i8 /* text */);
	f161_E(v4979);

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

// Cast workspace at ws+3256 length ws+8
void f243_Cast(i1 p4980 /* sext */, i1 p4981 /* dest */, i1 p4982 /* src */) {
	*(i1*)(intptr_t)(ws+3256) = p4982; /*src */
	*(i1*)(intptr_t)(ws+3257) = p4981; /*dest */
	*(i1*)(intptr_t)(ws+3258) = p4980; /*sext */


	void f225_Pop(i2* /* vid */);
	i2 v4983;
	f225_Pop(&v4983);
	i8 v4984 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v4984 = v4983;


	void f223_Push(i2* /* vid */);
	i2 v4985;
	f223_Push(&v4985);
	i8 v4986 = (i8)(intptr_t)(ws+3262);
	*(i2*)(intptr_t)v4986 = v4985;

	i8 v4987 = (i8)(intptr_t)c02_s00a9;

	void f161_E(i8 /* text */);
	f161_E(v4987);

	i8 v4988 = (i8)(intptr_t)(ws+3257);
	i1 v4989 = *(i1*)(intptr_t)v4988;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4989);

	i8 v4990 = (i8)(intptr_t)c02_s00aa;

	void f161_E(i8 /* text */);
	f161_E(v4990);

	i8 v4991 = (i8)(intptr_t)(ws+3262);
	i2 v4992 = *(i2*)(intptr_t)v4991;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v4992);

	i8 v4993 = (i8)(intptr_t)c02_s00ab;

	void f161_E(i8 /* text */);
	f161_E(v4993);

	i8 v4994 = (i8)(intptr_t)(ws+3258);
	i1 v4995 = *(i1*)(intptr_t)v4994;
	i1 v4996 = (i1)+0;
	if (v4995==v4996) goto c02_043b; else goto c02_043a;

c02_043a:;

	i8 v4997 = (i8)(intptr_t)c02_s00ac;

	void f161_E(i8 /* text */);
	f161_E(v4997);

	i8 v4998 = (i8)(intptr_t)(ws+3257);
	i1 v4999 = *(i1*)(intptr_t)v4998;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v4999);

	i8 v5000 = (i8)(intptr_t)c02_s00ad;

	void f161_E(i8 /* text */);
	f161_E(v5000);

	i8 v5001 = (i8)(intptr_t)(ws+3256);
	i1 v5002 = *(i1*)(intptr_t)v5001;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v5002);

	i8 v5003 = (i8)(intptr_t)c02_s00ae;

	void f161_E(i8 /* text */);
	f161_E(v5003);

	goto c02_0437;

c02_043b:;

c02_0437:;

	i8 v5004 = (i8)(intptr_t)c02_s00af;

	void f161_E(i8 /* text */);
	f161_E(v5004);

	i8 v5005 = (i8)(intptr_t)(ws+3260);
	i2 v5006 = *(i2*)(intptr_t)v5005;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5006);

	i8 v5007 = (i8)(intptr_t)c02_s00b0;

	void f161_E(i8 /* text */);
	f161_E(v5007);

endsub:;
}
const i1 c02_s00b1[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
const i1 c02_s00b2[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
const i1 c02_s00b3[] = { 0x30,0x78,0 };
const i1 c02_s00b4[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };

// E_string workspace at ws+3264 length ws+12
void f244_E_string(i2* p5010 /* sid */, i8 p5011 /* text */) {
	*(i8*)(intptr_t)(ws+3264) = p5011; /*text */

	i8 v5012 = (i8)(intptr_t)(ws+1208);
	i2 v5013 = *(i2*)(intptr_t)v5012;
	i8 v5014 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5014 = v5013;

	i8 v5015 = (i8)(intptr_t)(ws+1208);
	i2 v5016 = *(i2*)(intptr_t)v5015;
	i2 v5017 = v5016+(+1);
	i8 v5018 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5018 = v5017;


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v5019 = (i8)(intptr_t)(ws+40);
	i8 v5020 = *(i8*)(intptr_t)v5019;
	i8 v5021 = v5020+(+56);
	i2 v5022 = *(i2*)(intptr_t)v5021;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v5022);

	i8 v5023 = (i8)(intptr_t)c02_s00b1;

	void f161_E(i8 /* text */);
	f161_E(v5023);

	i1 v5024 = (i1)+3;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5024);

	i1 v5025 = (i1)+115;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5025);

	i8 v5026 = (i8)(intptr_t)(ws+3272);
	i2 v5027 = *(i2*)(intptr_t)v5026;

	void f170_E_h16(i2 /* value */);
	f170_E_h16(v5027);

	i8 v5028 = (i8)(intptr_t)c02_s00b2;

	void f161_E(i8 /* text */);
	f161_E(v5028);

	i1 v5029 = (i1)+1;
	i8 v5030 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v5030 = v5029;

c02_043c:;

	i8 v5031 = (i8)(intptr_t)(ws+3264);
	i8 v5032 = *(i8*)(intptr_t)v5031;
	i1 v5033 = *(i1*)(intptr_t)v5032;
	i8 v5034 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v5034 = v5033;

	i8 v5035 = (i8)(intptr_t)(ws+3264);
	i8 v5036 = *(i8*)(intptr_t)v5035;
	i8 v5037 = v5036+(+1);
	i8 v5038 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5038 = v5037;

	i8 v5039 = (i8)(intptr_t)(ws+3275);
	i1 v5040 = *(i1*)(intptr_t)v5039;
	i1 v5041 = (i1)+0;
	if (v5040==v5041) goto c02_0441; else goto c02_0442;

c02_0441:;

	goto c02_043d;

c02_0442:;

c02_043e:;

	i8 v5042 = (i8)(intptr_t)(ws+3274);
	i1 v5043 = *(i1*)(intptr_t)v5042;
	i1 v5044 = (i1)+0;
	if (v5043==v5044) goto c02_0446; else goto c02_0447;

c02_0446:;


	void f156_E_comma(void);
	f156_E_comma();

	goto c02_0443;

c02_0447:;

c02_0443:;

	i1 v5045 = (i1)+0;
	i8 v5046 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v5046 = v5045;

	i8 v5047 = (i8)(intptr_t)c02_s00b3;

	void f161_E(i8 /* text */);
	f161_E(v5047);

	i8 v5048 = (i8)(intptr_t)(ws+3275);
	i1 v5049 = *(i1*)(intptr_t)v5048;

	void f169_E_h8(i1 /* value */);
	f169_E_h8(v5049);

	goto c02_043c;

c02_043d:;

	i8 v5050 = (i8)(intptr_t)(ws+3274);
	i1 v5051 = *(i1*)(intptr_t)v5050;
	i1 v5052 = (i1)+0;
	if (v5051==v5052) goto c02_044b; else goto c02_044c;

c02_044b:;


	void f156_E_comma(void);
	f156_E_comma();

	goto c02_0448;

c02_044c:;

c02_0448:;

	i8 v5053 = (i8)(intptr_t)c02_s00b4;

	void f161_E(i8 /* text */);
	f161_E(v5053);

	i1 v5054 = (i1)+83;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v5054);

endsub:;
	*p5010 = *(i2*)(intptr_t)(ws+3272);
}
const i1 c02_s00b5[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
const i1 c02_s00b6[] = { 0x30,0x78,0 };
const i1 c02_s00b7[] = { 0x7d,0x7d,0x2c,0x0a,0 };

// FlushInitialiserBuffer workspace at ws+3272 length ws+1
void f245_FlushInitialiserBuffer(void) {

	i8 v5057 = (i8)(intptr_t)(ws+1218);
	i1 v5058 = *(i1*)(intptr_t)v5057;
	i1 v5059 = (i1)+0;
	if (v5058==v5059) goto c02_0451; else goto c02_0450;

c02_0450:;

	i8 v5060 = (i8)(intptr_t)c02_s00b5;

	void f161_E(i8 /* text */);
	f161_E(v5060);

	i1 v5061 = (i1)+0;
	i8 v5062 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v5062 = v5061;

c02_0454:;

	i8 v5063 = (i8)(intptr_t)(ws+3272);
	i1 v5064 = *(i1*)(intptr_t)v5063;
	i8 v5065 = (i8)(intptr_t)(ws+1218);
	i1 v5066 = *(i1*)(intptr_t)v5065;
	if (v5064==v5066) goto c02_0457; else goto c02_0456;

c02_0456:;

	i8 v5067 = (i8)(intptr_t)(ws+3272);
	i1 v5068 = *(i1*)(intptr_t)v5067;
	i1 v5069 = (i1)+0;
	if (v5068==v5069) goto c02_045c; else goto c02_045b;

c02_045b:;


	void f156_E_comma(void);
	f156_E_comma();

	goto c02_0458;

c02_045c:;

c02_0458:;

	i8 v5070 = (i8)(intptr_t)c02_s00b6;

	void f161_E(i8 /* text */);
	f161_E(v5070);

	i8 v5071 = (i8)(intptr_t)(ws+1210);
	i8 v5072 = (i8)(intptr_t)(ws+3272);
	i1 v5073 = *(i1*)(intptr_t)v5072;
	i8 v5074 = v5073;
	i8 v5075 = v5071+v5074;
	i1 v5076 = *(i1*)(intptr_t)v5075;

	void f169_E_h8(i1 /* value */);
	f169_E_h8(v5076);

	i8 v5077 = (i8)(intptr_t)(ws+3272);
	i1 v5078 = *(i1*)(intptr_t)v5077;
	i1 v5079 = v5078+(+1);
	i8 v5080 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v5080 = v5079;

	goto c02_0454;

c02_0457:;

	i8 v5081 = (i8)(intptr_t)c02_s00b7;

	void f161_E(i8 /* text */);
	f161_E(v5081);

	i1 v5082 = (i1)+0;
	i8 v5083 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5083 = v5082;

	goto c02_044d;

c02_0451:;

c02_044d:;

endsub:;
}

// E_bytes workspace at ws+3256 length ws+9
void f246_E_bytes(i1 p5084 /* width */, i8 p5085 /* ptr */) {
	*(i8*)(intptr_t)(ws+3256) = p5085; /*ptr */
	*(i1*)(intptr_t)(ws+3264) = p5084; /*width */

c02_045f:;

	i8 v5086 = (i8)(intptr_t)(ws+3264);
	i1 v5087 = *(i1*)(intptr_t)v5086;
	i1 v5088 = (i1)+0;
	if (v5087==v5088) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5089 = (i8)(intptr_t)(ws+3256);
	i8 v5090 = *(i8*)(intptr_t)v5089;
	i1 v5091 = *(i1*)(intptr_t)v5090;
	i8 v5092 = (i8)(intptr_t)(ws+1210);
	i8 v5093 = (i8)(intptr_t)(ws+1218);
	i1 v5094 = *(i1*)(intptr_t)v5093;
	i8 v5095 = v5094;
	i8 v5096 = v5092+v5095;
	*(i1*)(intptr_t)v5096 = v5091;

	i8 v5097 = (i8)(intptr_t)(ws+3256);
	i8 v5098 = *(i8*)(intptr_t)v5097;
	i8 v5099 = v5098+(+1);
	i8 v5100 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5100 = v5099;

	i8 v5101 = (i8)(intptr_t)(ws+1218);
	i1 v5102 = *(i1*)(intptr_t)v5101;
	i1 v5103 = v5102+(+1);
	i8 v5104 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5104 = v5103;

	i8 v5105 = (i8)(intptr_t)(ws+1218);
	i1 v5106 = *(i1*)(intptr_t)v5105;
	i1 v5107 = (i1)+8;
	if (v5106==v5107) goto c02_0466; else goto c02_0467;

c02_0466:;


	void f245_FlushInitialiserBuffer(void);
	f245_FlushInitialiserBuffer();

	goto c02_0463;

c02_0467:;

c02_0463:;

	i8 v5108 = (i8)(intptr_t)(ws+3264);
	i1 v5109 = *(i1*)(intptr_t)v5108;
	i1 v5110 = v5109+(-1);
	i8 v5111 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5111 = v5110;

	goto c02_045f;

c02_0462:;

endsub:;
}

// MatchPredicate workspace at ws+3248 length ws+48
void f247_MatchPredicate(i1* p5112 /* matches */, i8 p5113 /* n */, i1 p5114 /* rule */) {
	*(i1*)(intptr_t)(ws+3248) = p5114; /*rule */
	*(i8*)(intptr_t)(ws+3256) = p5113; /*n */

	i8 v5115 = (i8)(intptr_t)(ws+3256);
	i8 v5116 = *(i8*)(intptr_t)v5115;
	i8 v5117 = (i8)+24;
	i8 v5118 = (i8)(intptr_t)(ws+3272);

	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	f30_MemCopy(v5118, v5117, v5116);

	i1 v5119 = (i1)+0;
	i8 v5120 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5120 = v5119;

	i8 v5121 = (i8)(intptr_t)(ws+3248);
	i1 v5122 = *(i1*)(intptr_t)v5121;

c02_0468:;


endsub:;
	*p5112 = *(i1*)(intptr_t)(ws+3264);
}

// emit_0 workspace at ws+3256 length ws+0
void f249_emit_0(void) {

	i8 v5172 = (i8)(intptr_t)(ws+3176);
	i8 v5173 = *(i8*)(intptr_t)v5172;
	i8 v5174 = v5173+(+16);
	i8 v5175 = *(i8*)(intptr_t)v5174;
	i8 v5176 = (i8)(intptr_t)(ws+3200);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i4 v5178 = *(i4*)(intptr_t)v5177;
	i8 v5179 = (i8)(intptr_t)(ws+3216);
	i8 v5180 = *(i8*)(intptr_t)v5179;
	i4 v5181 = *(i4*)(intptr_t)v5180;

	void f241_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);
	f241_BranchConstant(v5181, v5178, v5175);

endsub:;
}
const i1 c02_s00b8[] = { 0x2b,0 };

// emit_1 workspace at ws+3256 length ws+0
void f250_emit_1(void) {

	i1 v5182 = (i1)+1;
	i8 v5183 = (i8)(intptr_t)c02_s00b8;
	i8 v5184 = (i8)(intptr_t)(ws+3216);
	i8 v5185 = *(i8*)(intptr_t)v5184;
	i4 v5186 = *(i4*)(intptr_t)v5185;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5186, v5183, v5182);

endsub:;
}
const i1 c02_s00b9[] = { 0x2b,0 };

// emit_2 workspace at ws+3256 length ws+0
void f251_emit_2(void) {

	i1 v5187 = (i1)+2;
	i8 v5188 = (i8)(intptr_t)c02_s00b9;
	i8 v5189 = (i8)(intptr_t)(ws+3216);
	i8 v5190 = *(i8*)(intptr_t)v5189;
	i4 v5191 = *(i4*)(intptr_t)v5190;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5191, v5188, v5187);

endsub:;
}
const i1 c02_s00ba[] = { 0x2b,0 };

// emit_3 workspace at ws+3256 length ws+0
void f252_emit_3(void) {

	i1 v5192 = (i1)+4;
	i8 v5193 = (i8)(intptr_t)c02_s00ba;
	i8 v5194 = (i8)(intptr_t)(ws+3216);
	i8 v5195 = *(i8*)(intptr_t)v5194;
	i4 v5196 = *(i4*)(intptr_t)v5195;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5196, v5193, v5192);

endsub:;
}
const i1 c02_s00bb[] = { 0x2b,0 };

// emit_4 workspace at ws+3256 length ws+0
void f253_emit_4(void) {

	i1 v5197 = (i1)+8;
	i8 v5198 = (i8)(intptr_t)c02_s00bb;
	i8 v5199 = (i8)(intptr_t)(ws+3216);
	i8 v5200 = *(i8*)(intptr_t)v5199;
	i4 v5201 = *(i4*)(intptr_t)v5200;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5201, v5198, v5197);

endsub:;
}
const i1 c02_s00bc[] = { 0x2d,0 };

// emit_5 workspace at ws+3256 length ws+0
void f254_emit_5(void) {

	i1 v5202 = (i1)+1;
	i8 v5203 = (i8)(intptr_t)c02_s00bc;
	i8 v5204 = (i8)(intptr_t)(ws+3216);
	i8 v5205 = *(i8*)(intptr_t)v5204;
	i4 v5206 = *(i4*)(intptr_t)v5205;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5206, v5203, v5202);

endsub:;
}
const i1 c02_s00bd[] = { 0x2d,0 };

// emit_6 workspace at ws+3256 length ws+0
void f255_emit_6(void) {

	i1 v5207 = (i1)+2;
	i8 v5208 = (i8)(intptr_t)c02_s00bd;
	i8 v5209 = (i8)(intptr_t)(ws+3216);
	i8 v5210 = *(i8*)(intptr_t)v5209;
	i4 v5211 = *(i4*)(intptr_t)v5210;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5211, v5208, v5207);

endsub:;
}
const i1 c02_s00be[] = { 0x2d,0 };

// emit_7 workspace at ws+3256 length ws+0
void f256_emit_7(void) {

	i1 v5212 = (i1)+4;
	i8 v5213 = (i8)(intptr_t)c02_s00be;
	i8 v5214 = (i8)(intptr_t)(ws+3216);
	i8 v5215 = *(i8*)(intptr_t)v5214;
	i4 v5216 = *(i4*)(intptr_t)v5215;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5216, v5213, v5212);

endsub:;
}
const i1 c02_s00bf[] = { 0x2d,0 };

// emit_8 workspace at ws+3256 length ws+0
void f257_emit_8(void) {

	i1 v5217 = (i1)+8;
	i8 v5218 = (i8)(intptr_t)c02_s00bf;
	i8 v5219 = (i8)(intptr_t)(ws+3216);
	i8 v5220 = *(i8*)(intptr_t)v5219;
	i4 v5221 = *(i4*)(intptr_t)v5220;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5221, v5218, v5217);

endsub:;
}
const i1 c02_s00c0[] = { 0x2a,0 };

// emit_9 workspace at ws+3256 length ws+0
void f258_emit_9(void) {

	i1 v5222 = (i1)+1;
	i8 v5223 = (i8)(intptr_t)c02_s00c0;
	i8 v5224 = (i8)(intptr_t)(ws+3216);
	i8 v5225 = *(i8*)(intptr_t)v5224;
	i4 v5226 = *(i4*)(intptr_t)v5225;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5226, v5223, v5222);

endsub:;
}
const i1 c02_s00c1[] = { 0x2a,0 };

// emit_10 workspace at ws+3256 length ws+0
void f259_emit_10(void) {

	i1 v5227 = (i1)+2;
	i8 v5228 = (i8)(intptr_t)c02_s00c1;
	i8 v5229 = (i8)(intptr_t)(ws+3216);
	i8 v5230 = *(i8*)(intptr_t)v5229;
	i4 v5231 = *(i4*)(intptr_t)v5230;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5231, v5228, v5227);

endsub:;
}
const i1 c02_s00c2[] = { 0x2a,0 };

// emit_11 workspace at ws+3256 length ws+0
void f260_emit_11(void) {

	i1 v5232 = (i1)+4;
	i8 v5233 = (i8)(intptr_t)c02_s00c2;
	i8 v5234 = (i8)(intptr_t)(ws+3216);
	i8 v5235 = *(i8*)(intptr_t)v5234;
	i4 v5236 = *(i4*)(intptr_t)v5235;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5236, v5233, v5232);

endsub:;
}
const i1 c02_s00c3[] = { 0x2a,0 };

// emit_12 workspace at ws+3256 length ws+0
void f261_emit_12(void) {

	i1 v5237 = (i1)+8;
	i8 v5238 = (i8)(intptr_t)c02_s00c3;
	i8 v5239 = (i8)(intptr_t)(ws+3216);
	i8 v5240 = *(i8*)(intptr_t)v5239;
	i4 v5241 = *(i4*)(intptr_t)v5240;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5241, v5238, v5237);

endsub:;
}
const i1 c02_s00c4[] = { 0x2f,0 };

// emit_13 workspace at ws+3256 length ws+0
void f262_emit_13(void) {

	i1 v5242 = (i1)+1;
	i8 v5243 = (i8)(intptr_t)c02_s00c4;
	i8 v5244 = (i8)(intptr_t)(ws+3216);
	i8 v5245 = *(i8*)(intptr_t)v5244;
	i4 v5246 = *(i4*)(intptr_t)v5245;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5246, v5243, v5242);

endsub:;
}
const i1 c02_s00c5[] = { 0x2f,0 };

// emit_14 workspace at ws+3256 length ws+0
void f263_emit_14(void) {

	i1 v5247 = (i1)+2;
	i8 v5248 = (i8)(intptr_t)c02_s00c5;
	i8 v5249 = (i8)(intptr_t)(ws+3216);
	i8 v5250 = *(i8*)(intptr_t)v5249;
	i4 v5251 = *(i4*)(intptr_t)v5250;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5251, v5248, v5247);

endsub:;
}
const i1 c02_s00c6[] = { 0x2f,0 };

// emit_15 workspace at ws+3256 length ws+0
void f264_emit_15(void) {

	i1 v5252 = (i1)+4;
	i8 v5253 = (i8)(intptr_t)c02_s00c6;
	i8 v5254 = (i8)(intptr_t)(ws+3216);
	i8 v5255 = *(i8*)(intptr_t)v5254;
	i4 v5256 = *(i4*)(intptr_t)v5255;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5256, v5253, v5252);

endsub:;
}
const i1 c02_s00c7[] = { 0x2f,0 };

// emit_16 workspace at ws+3256 length ws+0
void f265_emit_16(void) {

	i1 v5257 = (i1)+8;
	i8 v5258 = (i8)(intptr_t)c02_s00c7;
	i8 v5259 = (i8)(intptr_t)(ws+3216);
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i4 v5261 = *(i4*)(intptr_t)v5260;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5261, v5258, v5257);

endsub:;
}
const i1 c02_s00c8[] = { 0x25,0 };

// emit_17 workspace at ws+3256 length ws+0
void f266_emit_17(void) {

	i1 v5262 = (i1)+1;
	i8 v5263 = (i8)(intptr_t)c02_s00c8;
	i8 v5264 = (i8)(intptr_t)(ws+3216);
	i8 v5265 = *(i8*)(intptr_t)v5264;
	i4 v5266 = *(i4*)(intptr_t)v5265;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5266, v5263, v5262);

endsub:;
}
const i1 c02_s00c9[] = { 0x25,0 };

// emit_18 workspace at ws+3256 length ws+0
void f267_emit_18(void) {

	i1 v5267 = (i1)+2;
	i8 v5268 = (i8)(intptr_t)c02_s00c9;
	i8 v5269 = (i8)(intptr_t)(ws+3216);
	i8 v5270 = *(i8*)(intptr_t)v5269;
	i4 v5271 = *(i4*)(intptr_t)v5270;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5271, v5268, v5267);

endsub:;
}
const i1 c02_s00ca[] = { 0x25,0 };

// emit_19 workspace at ws+3256 length ws+0
void f268_emit_19(void) {

	i1 v5272 = (i1)+4;
	i8 v5273 = (i8)(intptr_t)c02_s00ca;
	i8 v5274 = (i8)(intptr_t)(ws+3216);
	i8 v5275 = *(i8*)(intptr_t)v5274;
	i4 v5276 = *(i4*)(intptr_t)v5275;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5276, v5273, v5272);

endsub:;
}
const i1 c02_s00cb[] = { 0x25,0 };

// emit_20 workspace at ws+3256 length ws+0
void f269_emit_20(void) {

	i1 v5277 = (i1)+8;
	i8 v5278 = (i8)(intptr_t)c02_s00cb;
	i8 v5279 = (i8)(intptr_t)(ws+3216);
	i8 v5280 = *(i8*)(intptr_t)v5279;
	i4 v5281 = *(i4*)(intptr_t)v5280;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5281, v5278, v5277);

endsub:;
}
const i1 c02_s00cc[] = { 0x2f,0 };

// emit_21 workspace at ws+3256 length ws+0
void f270_emit_21(void) {

	i1 v5282 = (i1)+1;
	i8 v5283 = (i8)(intptr_t)c02_s00cc;
	i8 v5284 = (i8)(intptr_t)(ws+3216);
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i4 v5286 = *(i4*)(intptr_t)v5285;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5286, v5283, v5282);

endsub:;
}
const i1 c02_s00cd[] = { 0x2f,0 };

// emit_22 workspace at ws+3256 length ws+0
void f271_emit_22(void) {

	i1 v5287 = (i1)+2;
	i8 v5288 = (i8)(intptr_t)c02_s00cd;
	i8 v5289 = (i8)(intptr_t)(ws+3216);
	i8 v5290 = *(i8*)(intptr_t)v5289;
	i4 v5291 = *(i4*)(intptr_t)v5290;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5291, v5288, v5287);

endsub:;
}
const i1 c02_s00ce[] = { 0x2f,0 };

// emit_23 workspace at ws+3256 length ws+0
void f272_emit_23(void) {

	i1 v5292 = (i1)+4;
	i8 v5293 = (i8)(intptr_t)c02_s00ce;
	i8 v5294 = (i8)(intptr_t)(ws+3216);
	i8 v5295 = *(i8*)(intptr_t)v5294;
	i4 v5296 = *(i4*)(intptr_t)v5295;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5296, v5293, v5292);

endsub:;
}
const i1 c02_s00cf[] = { 0x2f,0 };

// emit_24 workspace at ws+3256 length ws+0
void f273_emit_24(void) {

	i1 v5297 = (i1)+8;
	i8 v5298 = (i8)(intptr_t)c02_s00cf;
	i8 v5299 = (i8)(intptr_t)(ws+3216);
	i8 v5300 = *(i8*)(intptr_t)v5299;
	i4 v5301 = *(i4*)(intptr_t)v5300;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5301, v5298, v5297);

endsub:;
}
const i1 c02_s00d0[] = { 0x25,0 };

// emit_25 workspace at ws+3256 length ws+0
void f274_emit_25(void) {

	i1 v5302 = (i1)+1;
	i8 v5303 = (i8)(intptr_t)c02_s00d0;
	i8 v5304 = (i8)(intptr_t)(ws+3216);
	i8 v5305 = *(i8*)(intptr_t)v5304;
	i4 v5306 = *(i4*)(intptr_t)v5305;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5306, v5303, v5302);

endsub:;
}
const i1 c02_s00d1[] = { 0x25,0 };

// emit_26 workspace at ws+3256 length ws+0
void f275_emit_26(void) {

	i1 v5307 = (i1)+2;
	i8 v5308 = (i8)(intptr_t)c02_s00d1;
	i8 v5309 = (i8)(intptr_t)(ws+3216);
	i8 v5310 = *(i8*)(intptr_t)v5309;
	i4 v5311 = *(i4*)(intptr_t)v5310;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5311, v5308, v5307);

endsub:;
}
const i1 c02_s00d2[] = { 0x25,0 };

// emit_27 workspace at ws+3256 length ws+0
void f276_emit_27(void) {

	i1 v5312 = (i1)+4;
	i8 v5313 = (i8)(intptr_t)c02_s00d2;
	i8 v5314 = (i8)(intptr_t)(ws+3216);
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i4 v5316 = *(i4*)(intptr_t)v5315;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5316, v5313, v5312);

endsub:;
}
const i1 c02_s00d3[] = { 0x25,0 };

// emit_28 workspace at ws+3256 length ws+0
void f277_emit_28(void) {

	i1 v5317 = (i1)+8;
	i8 v5318 = (i8)(intptr_t)c02_s00d3;
	i8 v5319 = (i8)(intptr_t)(ws+3216);
	i8 v5320 = *(i8*)(intptr_t)v5319;
	i4 v5321 = *(i4*)(intptr_t)v5320;

	void f236_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f236_Op2VCSigned(v5321, v5318, v5317);

endsub:;
}
const i1 c02_s00d4[] = { 0x26,0 };

// emit_29 workspace at ws+3256 length ws+0
void f278_emit_29(void) {

	i1 v5322 = (i1)+1;
	i8 v5323 = (i8)(intptr_t)c02_s00d4;
	i8 v5324 = (i8)(intptr_t)(ws+3216);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	i4 v5326 = *(i4*)(intptr_t)v5325;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5326, v5323, v5322);

endsub:;
}
const i1 c02_s00d5[] = { 0x26,0 };

// emit_30 workspace at ws+3256 length ws+0
void f279_emit_30(void) {

	i1 v5327 = (i1)+2;
	i8 v5328 = (i8)(intptr_t)c02_s00d5;
	i8 v5329 = (i8)(intptr_t)(ws+3216);
	i8 v5330 = *(i8*)(intptr_t)v5329;
	i4 v5331 = *(i4*)(intptr_t)v5330;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5331, v5328, v5327);

endsub:;
}
const i1 c02_s00d6[] = { 0x26,0 };

// emit_31 workspace at ws+3256 length ws+0
void f280_emit_31(void) {

	i1 v5332 = (i1)+4;
	i8 v5333 = (i8)(intptr_t)c02_s00d6;
	i8 v5334 = (i8)(intptr_t)(ws+3216);
	i8 v5335 = *(i8*)(intptr_t)v5334;
	i4 v5336 = *(i4*)(intptr_t)v5335;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5336, v5333, v5332);

endsub:;
}
const i1 c02_s00d7[] = { 0x26,0 };

// emit_32 workspace at ws+3256 length ws+0
void f281_emit_32(void) {

	i1 v5337 = (i1)+8;
	i8 v5338 = (i8)(intptr_t)c02_s00d7;
	i8 v5339 = (i8)(intptr_t)(ws+3216);
	i8 v5340 = *(i8*)(intptr_t)v5339;
	i4 v5341 = *(i4*)(intptr_t)v5340;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5341, v5338, v5337);

endsub:;
}
const i1 c02_s00d8[] = { 0x7c,0 };

// emit_33 workspace at ws+3256 length ws+0
void f282_emit_33(void) {

	i1 v5342 = (i1)+1;
	i8 v5343 = (i8)(intptr_t)c02_s00d8;
	i8 v5344 = (i8)(intptr_t)(ws+3216);
	i8 v5345 = *(i8*)(intptr_t)v5344;
	i4 v5346 = *(i4*)(intptr_t)v5345;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5346, v5343, v5342);

endsub:;
}
const i1 c02_s00d9[] = { 0x7c,0 };

// emit_34 workspace at ws+3256 length ws+0
void f283_emit_34(void) {

	i1 v5347 = (i1)+2;
	i8 v5348 = (i8)(intptr_t)c02_s00d9;
	i8 v5349 = (i8)(intptr_t)(ws+3216);
	i8 v5350 = *(i8*)(intptr_t)v5349;
	i4 v5351 = *(i4*)(intptr_t)v5350;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5351, v5348, v5347);

endsub:;
}
const i1 c02_s00da[] = { 0x7c,0 };

// emit_35 workspace at ws+3256 length ws+0
void f284_emit_35(void) {

	i1 v5352 = (i1)+4;
	i8 v5353 = (i8)(intptr_t)c02_s00da;
	i8 v5354 = (i8)(intptr_t)(ws+3216);
	i8 v5355 = *(i8*)(intptr_t)v5354;
	i4 v5356 = *(i4*)(intptr_t)v5355;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5356, v5353, v5352);

endsub:;
}
const i1 c02_s00db[] = { 0x7c,0 };

// emit_36 workspace at ws+3256 length ws+0
void f285_emit_36(void) {

	i1 v5357 = (i1)+8;
	i8 v5358 = (i8)(intptr_t)c02_s00db;
	i8 v5359 = (i8)(intptr_t)(ws+3216);
	i8 v5360 = *(i8*)(intptr_t)v5359;
	i4 v5361 = *(i4*)(intptr_t)v5360;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5361, v5358, v5357);

endsub:;
}
const i1 c02_s00dc[] = { 0x5e,0 };

// emit_37 workspace at ws+3256 length ws+0
void f286_emit_37(void) {

	i1 v5362 = (i1)+1;
	i8 v5363 = (i8)(intptr_t)c02_s00dc;
	i8 v5364 = (i8)(intptr_t)(ws+3216);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	i4 v5366 = *(i4*)(intptr_t)v5365;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5366, v5363, v5362);

endsub:;
}
const i1 c02_s00dd[] = { 0x5e,0 };

// emit_38 workspace at ws+3256 length ws+0
void f287_emit_38(void) {

	i1 v5367 = (i1)+2;
	i8 v5368 = (i8)(intptr_t)c02_s00dd;
	i8 v5369 = (i8)(intptr_t)(ws+3216);
	i8 v5370 = *(i8*)(intptr_t)v5369;
	i4 v5371 = *(i4*)(intptr_t)v5370;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5371, v5368, v5367);

endsub:;
}
const i1 c02_s00de[] = { 0x5e,0 };

// emit_39 workspace at ws+3256 length ws+0
void f288_emit_39(void) {

	i1 v5372 = (i1)+4;
	i8 v5373 = (i8)(intptr_t)c02_s00de;
	i8 v5374 = (i8)(intptr_t)(ws+3216);
	i8 v5375 = *(i8*)(intptr_t)v5374;
	i4 v5376 = *(i4*)(intptr_t)v5375;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5376, v5373, v5372);

endsub:;
}
const i1 c02_s00df[] = { 0x5e,0 };

// emit_40 workspace at ws+3256 length ws+0
void f289_emit_40(void) {

	i1 v5377 = (i1)+8;
	i8 v5378 = (i8)(intptr_t)c02_s00df;
	i8 v5379 = (i8)(intptr_t)(ws+3216);
	i8 v5380 = *(i8*)(intptr_t)v5379;
	i4 v5381 = *(i4*)(intptr_t)v5380;

	void f234_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);
	f234_Op2VC(v5381, v5378, v5377);

endsub:;
}
const i1 c02_s00e0[] = { 0x3a,0x3b,0x0a,0 };

// emit_43 workspace at ws+3256 length ws+0
void f290_emit_43(void) {

	i8 v5382 = (i8)(intptr_t)(ws+3184);
	i8 v5383 = *(i8*)(intptr_t)v5382;
	i2 v5384 = *(i2*)(intptr_t)v5383;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v5384);

	i8 v5385 = (i8)(intptr_t)c02_s00e0;

	void f161_E(i8 /* text */);
	f161_E(v5385);

endsub:;
}
const i1 c02_s00e1[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
const i1 c02_s00e2[] = { 0x3b,0x0a,0 };

// emit_44 workspace at ws+3256 length ws+0
void f291_emit_44(void) {

	i8 v5386 = (i8)(intptr_t)c02_s00e1;

	void f161_E(i8 /* text */);
	f161_E(v5386);

	i8 v5387 = (i8)(intptr_t)(ws+3184);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i2 v5389 = *(i2*)(intptr_t)v5388;

	void f172_E_labelref(i2 /* labelid */);
	f172_E_labelref(v5389);

	i8 v5390 = (i8)(intptr_t)c02_s00e2;

	void f161_E(i8 /* text */);
	f161_E(v5390);

endsub:;
}
const i1 c02_s00e3[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };

// emit_45 workspace at ws+3256 length ws+0
void f292_emit_45(void) {

	i8 v5391 = (i8)(intptr_t)c02_s00e3;

	void f161_E(i8 /* text */);
	f161_E(v5391);

endsub:;
}
const i1 c02_s00e4[] = { 0x0a,0x2f,0x2f,0x20,0 };
const i1 c02_s00e5[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
const i1 c02_s00e6[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
const i1 c02_s00e7[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
const i1 c02_s00e8[] = { 0x28,0 };
const i1 c02_s00e9[] = { 0x2c,0x20,0 };

// comma workspace at ws+3280 length ws+0
void f294_comma(void) {

	i8 v5426 = (i8)(intptr_t)(ws+3256);
	i1 v5427 = *(i1*)(intptr_t)v5426;
	i1 v5428 = (i1)+0;
	if (v5427==v5428) goto c02_04a5; else goto c02_04a6;

c02_04a5:;

	i8 v5429 = (i8)(intptr_t)c02_s00e9;

	void f161_E(i8 /* text */);
	f161_E(v5429);

	goto c02_04a2;

c02_04a6:;

c02_04a2:;

	i1 v5430 = (i1)+0;
	i8 v5431 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5431 = v5430;

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

// emit_46 workspace at ws+3256 length ws+18
void f293_emit_46(void) {


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v5392 = (i8)(intptr_t)(ws+3184);
	i8 v5393 = *(i8*)(intptr_t)v5392;
	i8 v5394 = *(i8*)(intptr_t)v5393;
	i8 v5395 = v5394+(+56);
	i2 v5396 = *(i2*)(intptr_t)v5395;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v5396);

	i8 v5397 = (i8)(intptr_t)c02_s00e4;

	void f161_E(i8 /* text */);
	f161_E(v5397);

	i8 v5398 = (i8)(intptr_t)(ws+3184);
	i8 v5399 = *(i8*)(intptr_t)v5398;
	i8 v5400 = *(i8*)(intptr_t)v5399;
	i8 v5401 = *(i8*)(intptr_t)v5400;

	void f161_E(i8 /* text */);
	f161_E(v5401);

	i8 v5402 = (i8)(intptr_t)c02_s00e5;

	void f161_E(i8 /* text */);
	f161_E(v5402);

	i1 v5403 = (i1)+2;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5403);

	i8 v5404 = (i8)(intptr_t)(ws+3184);
	i8 v5405 = *(i8*)(intptr_t)v5404;
	i8 v5406 = *(i8*)(intptr_t)v5405;
	i8 v5407 = v5406+(+56);
	i2 v5408 = *(i2*)(intptr_t)v5407;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v5408);

	i1 v5409 = (i1)+0;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5409);

	i2 v5410 = (i2)+0;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v5410);

	i8 v5411 = (i8)(intptr_t)c02_s00e6;

	void f161_E(i8 /* text */);
	f161_E(v5411);

	i1 v5412 = (i1)+5;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5412);

	i8 v5413 = (i8)(intptr_t)(ws+3184);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = *(i8*)(intptr_t)v5414;
	i8 v5416 = v5415+(+56);
	i2 v5417 = *(i2*)(intptr_t)v5416;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v5417);

	i1 v5418 = (i1)+0;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5418);

	i8 v5419 = (i8)(intptr_t)c02_s00e7;

	void f161_E(i8 /* text */);
	f161_E(v5419);

	i8 v5420 = (i8)(intptr_t)(ws+3184);
	i8 v5421 = *(i8*)(intptr_t)v5420;
	i8 v5422 = *(i8*)(intptr_t)v5421;

	void f173_E_subref(i8 /* subr */);
	f173_E_subref(v5422);

	i8 v5423 = (i8)(intptr_t)c02_s00e8;

	void f161_E(i8 /* text */);
	f161_E(v5423);

	i1 v5424 = (i1)+1;
	i8 v5425 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5425 = v5424;


	i1 v5432 = (i1)+0;
	i8 v5433 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v5433 = v5432;

c02_04a9:;

	i8 v5434 = (i8)(intptr_t)(ws+3257);
	i1 v5435 = *(i1*)(intptr_t)v5434;
	i8 v5436 = (i8)(intptr_t)(ws+3184);
	i8 v5437 = *(i8*)(intptr_t)v5436;
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i8 v5439 = v5438+(+89);
	i1 v5440 = *(i1*)(intptr_t)v5439;
	if (v5435==v5440) goto c02_04ac; else goto c02_04ab;

c02_04ab:;

	i8 v5441 = (i8)(intptr_t)(ws+3184);
	i8 v5442 = *(i8*)(intptr_t)v5441;
	i8 v5443 = *(i8*)(intptr_t)v5442;
	i8 v5444 = (i8)(intptr_t)(ws+3257);
	i1 v5445 = *(i1*)(intptr_t)v5444;

	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5446;
	f85_GetOutputParameter(&v5446, v5445, v5443);
	i8 v5447 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5447 = v5446;


	void f223_Push(i2* /* vid */);
	i2 v5448;
	f223_Push(&v5448);
	i8 v5449 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5449 = v5448;


	void f294_comma(void);
	f294_comma();

	i8 v5450 = (i8)(intptr_t)c02_s00ea;

	void f161_E(i8 /* text */);
	f161_E(v5450);

	i8 v5451 = (i8)(intptr_t)(ws+3264);
	i8 v5452 = *(i8*)(intptr_t)v5451;
	i8 v5453 = *(i8*)(intptr_t)v5452;
	i8 v5454 = v5453+(+42);
	i2 v5455 = *(i2*)(intptr_t)v5454;
	i1 v5456 = v5455;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v5456);

	i8 v5457 = (i8)(intptr_t)c02_s00eb;

	void f161_E(i8 /* text */);
	f161_E(v5457);

	i8 v5458 = (i8)(intptr_t)(ws+3272);
	i2 v5459 = *(i2*)(intptr_t)v5458;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5459);

	i8 v5460 = (i8)(intptr_t)c02_s00ec;

	void f161_E(i8 /* text */);
	f161_E(v5460);

	i8 v5461 = (i8)(intptr_t)(ws+3264);
	i8 v5462 = *(i8*)(intptr_t)v5461;
	i8 v5463 = v5462+(+48);
	i8 v5464 = *(i8*)(intptr_t)v5463;

	void f161_E(i8 /* text */);
	f161_E(v5464);

	i8 v5465 = (i8)(intptr_t)c02_s00ed;

	void f161_E(i8 /* text */);
	f161_E(v5465);

	i8 v5466 = (i8)(intptr_t)(ws+3257);
	i1 v5467 = *(i1*)(intptr_t)v5466;
	i1 v5468 = v5467+(+1);
	i8 v5469 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v5469 = v5468;

	goto c02_04a9;

c02_04ac:;

	i8 v5470 = (i8)(intptr_t)(ws+3184);
	i8 v5471 = *(i8*)(intptr_t)v5470;
	i8 v5472 = *(i8*)(intptr_t)v5471;
	i8 v5473 = v5472+(+88);
	i1 v5474 = *(i1*)(intptr_t)v5473;
	i8 v5475 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v5475 = v5474;

c02_04af:;

	i8 v5476 = (i8)(intptr_t)(ws+3257);
	i1 v5477 = *(i1*)(intptr_t)v5476;
	i1 v5478 = (i1)+0;
	if (v5477==v5478) goto c02_04b2; else goto c02_04b1;

c02_04b1:;

	i8 v5479 = (i8)(intptr_t)(ws+3257);
	i1 v5480 = *(i1*)(intptr_t)v5479;
	i1 v5481 = v5480+(-1);
	i8 v5482 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v5482 = v5481;

	i8 v5483 = (i8)(intptr_t)(ws+3184);
	i8 v5484 = *(i8*)(intptr_t)v5483;
	i8 v5485 = *(i8*)(intptr_t)v5484;
	i8 v5486 = (i8)(intptr_t)(ws+3257);
	i1 v5487 = *(i1*)(intptr_t)v5486;

	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5488;
	f84_GetInputParameter(&v5488, v5487, v5485);
	i8 v5489 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5489 = v5488;


	void f223_Push(i2* /* vid */);
	i2 v5490;
	f223_Push(&v5490);
	i8 v5491 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5491 = v5490;


	void f294_comma(void);
	f294_comma();

	i8 v5492 = (i8)(intptr_t)c02_s00ee;

	void f161_E(i8 /* text */);
	f161_E(v5492);

	i8 v5493 = (i8)(intptr_t)(ws+3264);
	i8 v5494 = *(i8*)(intptr_t)v5493;
	i8 v5495 = *(i8*)(intptr_t)v5494;
	i8 v5496 = v5495+(+42);
	i2 v5497 = *(i2*)(intptr_t)v5496;
	i1 v5498 = v5497;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v5498);

	i8 v5499 = (i8)(intptr_t)c02_s00ef;

	void f161_E(i8 /* text */);
	f161_E(v5499);

	i8 v5500 = (i8)(intptr_t)(ws+3272);
	i2 v5501 = *(i2*)(intptr_t)v5500;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5501);

	i8 v5502 = (i8)(intptr_t)c02_s00f0;

	void f161_E(i8 /* text */);
	f161_E(v5502);

	i8 v5503 = (i8)(intptr_t)(ws+3264);
	i8 v5504 = *(i8*)(intptr_t)v5503;
	i8 v5505 = v5504+(+48);
	i8 v5506 = *(i8*)(intptr_t)v5505;

	void f161_E(i8 /* text */);
	f161_E(v5506);

	i8 v5507 = (i8)(intptr_t)c02_s00f1;

	void f161_E(i8 /* text */);
	f161_E(v5507);

	goto c02_04af;

c02_04b2:;

	i8 v5508 = (i8)(intptr_t)(ws+3184);
	i8 v5509 = *(i8*)(intptr_t)v5508;
	i8 v5510 = *(i8*)(intptr_t)v5509;
	i8 v5511 = v5510+(+88);
	i1 v5512 = *(i1*)(intptr_t)v5511;
	i8 v5513 = (i8)(intptr_t)(ws+3184);
	i8 v5514 = *(i8*)(intptr_t)v5513;
	i8 v5515 = *(i8*)(intptr_t)v5514;
	i8 v5516 = v5515+(+89);
	i1 v5517 = *(i1*)(intptr_t)v5516;
	i1 v5518 = v5512+v5517;
	i1 v5519 = (i1)+0;
	if (v5518==v5519) goto c02_04b6; else goto c02_04b7;

c02_04b6:;

	i8 v5520 = (i8)(intptr_t)c02_s00f2;

	void f161_E(i8 /* text */);
	f161_E(v5520);

	goto c02_04b3;

c02_04b7:;

c02_04b3:;

	i8 v5521 = (i8)(intptr_t)c02_s00f3;

	void f161_E(i8 /* text */);
	f161_E(v5521);

	i1 v5522 = (i1)+0;
	i8 v5523 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v5523 = v5522;

c02_04ba:;

	i8 v5524 = (i8)(intptr_t)(ws+3257);
	i1 v5525 = *(i1*)(intptr_t)v5524;
	i8 v5526 = (i8)(intptr_t)(ws+3184);
	i8 v5527 = *(i8*)(intptr_t)v5526;
	i8 v5528 = *(i8*)(intptr_t)v5527;
	i8 v5529 = v5528+(+88);
	i1 v5530 = *(i1*)(intptr_t)v5529;
	if (v5525==v5530) goto c02_04bd; else goto c02_04bc;

c02_04bc:;

	i8 v5531 = (i8)(intptr_t)(ws+3184);
	i8 v5532 = *(i8*)(intptr_t)v5531;
	i8 v5533 = *(i8*)(intptr_t)v5532;
	i8 v5534 = (i8)(intptr_t)(ws+3257);
	i1 v5535 = *(i1*)(intptr_t)v5534;

	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5536;
	f84_GetInputParameter(&v5536, v5535, v5533);
	i8 v5537 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5537 = v5536;


	void f225_Pop(i2* /* vid */);
	i2 v5538;
	f225_Pop(&v5538);
	i8 v5539 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5539 = v5538;

	i8 v5540 = (i8)(intptr_t)c02_s00f4;

	void f161_E(i8 /* text */);
	f161_E(v5540);

	i8 v5541 = (i8)(intptr_t)(ws+3264);
	i8 v5542 = *(i8*)(intptr_t)v5541;
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = v5543+(+42);
	i2 v5545 = *(i2*)(intptr_t)v5544;
	i1 v5546 = v5545;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v5546);

	i8 v5547 = (i8)(intptr_t)c02_s00f5;

	void f161_E(i8 /* text */);
	f161_E(v5547);

	i8 v5548 = (i8)(intptr_t)(ws+3264);
	i8 v5549 = *(i8*)(intptr_t)v5548;
	i2 v5550 = (i2)+0;

	void f219_E_symref(i2 /* off */, i8 /* sym */);
	f219_E_symref(v5550, v5549);

	i8 v5551 = (i8)(intptr_t)c02_s00f6;

	void f161_E(i8 /* text */);
	f161_E(v5551);

	i8 v5552 = (i8)(intptr_t)(ws+3272);
	i2 v5553 = *(i2*)(intptr_t)v5552;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5553);

	i8 v5554 = (i8)(intptr_t)c02_s00f7;

	void f161_E(i8 /* text */);
	f161_E(v5554);

	i8 v5555 = (i8)(intptr_t)(ws+3264);
	i8 v5556 = *(i8*)(intptr_t)v5555;
	i8 v5557 = v5556+(+48);
	i8 v5558 = *(i8*)(intptr_t)v5557;

	void f161_E(i8 /* text */);
	f161_E(v5558);

	i8 v5559 = (i8)(intptr_t)c02_s00f8;

	void f161_E(i8 /* text */);
	f161_E(v5559);

	i8 v5560 = (i8)(intptr_t)(ws+3257);
	i1 v5561 = *(i1*)(intptr_t)v5560;
	i1 v5562 = v5561+(+1);
	i8 v5563 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v5563 = v5562;

	goto c02_04ba;

c02_04bd:;

endsub:;
}
const i1 c02_s00f9[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
const i1 c02_s00fa[] = { 0x09,0x2a,0x70,0 };
const i1 c02_s00fb[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
const i1 c02_s00fc[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s00fd[] = { 0x29,0x3b,0x0a,0 };
const i1 c02_s00fe[] = { 0x7d,0x0a,0 };

// emit_47 workspace at ws+3256 length ws+18
void f295_emit_47(void) {

	i8 v5564 = (i8)(intptr_t)c02_s00f9;

	void f161_E(i8 /* text */);
	f161_E(v5564);

	i8 v5565 = (i8)(intptr_t)(ws+3184);
	i8 v5566 = *(i8*)(intptr_t)v5565;
	i8 v5567 = *(i8*)(intptr_t)v5566;
	i8 v5568 = v5567+(+89);
	i1 v5569 = *(i1*)(intptr_t)v5568;
	i8 v5570 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5570 = v5569;

c02_04c1:;

	i8 v5571 = (i8)(intptr_t)(ws+3256);
	i1 v5572 = *(i1*)(intptr_t)v5571;
	i1 v5573 = (i1)+0;
	if (v5572==v5573) goto c02_04c4; else goto c02_04c3;

c02_04c3:;

	i8 v5574 = (i8)(intptr_t)(ws+3256);
	i1 v5575 = *(i1*)(intptr_t)v5574;
	i1 v5576 = v5575+(-1);
	i8 v5577 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v5577 = v5576;

	i8 v5578 = (i8)(intptr_t)(ws+3184);
	i8 v5579 = *(i8*)(intptr_t)v5578;
	i8 v5580 = *(i8*)(intptr_t)v5579;
	i8 v5581 = (i8)(intptr_t)(ws+3256);
	i1 v5582 = *(i1*)(intptr_t)v5581;

	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v5583;
	f85_GetOutputParameter(&v5583, v5582, v5580);
	i8 v5584 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5584 = v5583;


	void f225_Pop(i2* /* vid */);
	i2 v5585;
	f225_Pop(&v5585);
	i8 v5586 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5586 = v5585;

	i8 v5587 = (i8)(intptr_t)c02_s00fa;

	void f161_E(i8 /* text */);
	f161_E(v5587);

	i8 v5588 = (i8)(intptr_t)(ws+3272);
	i2 v5589 = *(i2*)(intptr_t)v5588;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5589);

	i8 v5590 = (i8)(intptr_t)c02_s00fb;

	void f161_E(i8 /* text */);
	f161_E(v5590);

	i8 v5591 = (i8)(intptr_t)(ws+3264);
	i8 v5592 = *(i8*)(intptr_t)v5591;
	i8 v5593 = *(i8*)(intptr_t)v5592;
	i8 v5594 = v5593+(+42);
	i2 v5595 = *(i2*)(intptr_t)v5594;
	i1 v5596 = v5595;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v5596);

	i8 v5597 = (i8)(intptr_t)c02_s00fc;

	void f161_E(i8 /* text */);
	f161_E(v5597);

	i8 v5598 = (i8)(intptr_t)(ws+3264);
	i8 v5599 = *(i8*)(intptr_t)v5598;
	i2 v5600 = (i2)+0;

	void f219_E_symref(i2 /* off */, i8 /* sym */);
	f219_E_symref(v5600, v5599);

	i8 v5601 = (i8)(intptr_t)c02_s00fd;

	void f161_E(i8 /* text */);
	f161_E(v5601);

	goto c02_04c1;

c02_04c4:;

	i8 v5602 = (i8)(intptr_t)c02_s00fe;

	void f161_E(i8 /* text */);
	f161_E(v5602);

	i8 v5603 = (i8)(intptr_t)(ws+3184);
	i8 v5604 = *(i8*)(intptr_t)v5603;
	i8 v5605 = *(i8*)(intptr_t)v5604;
	i1 v5606 = (i1)+0;
	i8 v5607 = (i8)(intptr_t)(ws+3184);
	i8 v5608 = *(i8*)(intptr_t)v5607;
	i8 v5609 = *(i8*)(intptr_t)v5608;
	i8 v5610 = v5609+(+58);
	i2 v5611 = *(i2*)(intptr_t)v5610;

	void f182_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);
	f182_EmitterDeclareWorkspace(v5611, v5606, v5605);

	i1 v5612 = (i1)+83;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v5612);

endsub:;
}

// emit_57 workspace at ws+3256 length ws+0
void f296_emit_57(void) {

	i8 v5613 = (i8)(intptr_t)(ws+3184);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	i8 v5615 = *(i8*)(intptr_t)v5614;

	void f228_Call(i8 /* subr */);
	f228_Call(v5615);

endsub:;
}

// emit_58 workspace at ws+3256 length ws+0
void f297_emit_58(void) {

	i8 v5616 = (i8)(intptr_t)(ws+3184);
	i8 v5617 = *(i8*)(intptr_t)v5616;
	i8 v5618 = *(i8*)(intptr_t)v5617;

	void f228_Call(i8 /* subr */);
	f228_Call(v5618);

endsub:;
}

// emit_59 workspace at ws+3256 length ws+0
void f298_emit_59(void) {

	i8 v5619 = (i8)(intptr_t)(ws+3184);
	i8 v5620 = *(i8*)(intptr_t)v5619;
	i8 v5621 = *(i8*)(intptr_t)v5620;

	void f228_Call(i8 /* subr */);
	f228_Call(v5621);

endsub:;
}

// emit_60 workspace at ws+3256 length ws+0
void f299_emit_60(void) {

	i8 v5622 = (i8)(intptr_t)(ws+3184);
	i8 v5623 = *(i8*)(intptr_t)v5622;
	i8 v5624 = *(i8*)(intptr_t)v5623;

	void f228_Call(i8 /* subr */);
	f228_Call(v5624);

endsub:;
}

// emit_61 workspace at ws+3256 length ws+0
void f300_emit_61(void) {

	i8 v5625 = (i8)(intptr_t)(ws+3184);
	i8 v5626 = *(i8*)(intptr_t)v5625;
	i8 v5627 = *(i8*)(intptr_t)v5626;

	void f228_Call(i8 /* subr */);
	f228_Call(v5627);

endsub:;
}

// emit_62 workspace at ws+3256 length ws+0
void f301_emit_62(void) {

	i1 v5628 = (i1)+1;
	i8 v5629 = (i8)(intptr_t)(ws+3184);
	i8 v5630 = *(i8*)(intptr_t)v5629;
	i4 v5631 = *(i4*)(intptr_t)v5630;

	void f230_LoadConstant(i4 /* value */, i1 /* width */);
	f230_LoadConstant(v5631, v5628);

endsub:;
}

// emit_63 workspace at ws+3256 length ws+0
void f302_emit_63(void) {

	i1 v5632 = (i1)+2;
	i8 v5633 = (i8)(intptr_t)(ws+3184);
	i8 v5634 = *(i8*)(intptr_t)v5633;
	i4 v5635 = *(i4*)(intptr_t)v5634;

	void f230_LoadConstant(i4 /* value */, i1 /* width */);
	f230_LoadConstant(v5635, v5632);

endsub:;
}

// emit_64 workspace at ws+3256 length ws+0
void f303_emit_64(void) {

	i1 v5636 = (i1)+4;
	i8 v5637 = (i8)(intptr_t)(ws+3184);
	i8 v5638 = *(i8*)(intptr_t)v5637;
	i4 v5639 = *(i4*)(intptr_t)v5638;

	void f230_LoadConstant(i4 /* value */, i1 /* width */);
	f230_LoadConstant(v5639, v5636);

endsub:;
}

// emit_65 workspace at ws+3256 length ws+0
void f304_emit_65(void) {

	i1 v5640 = (i1)+8;
	i8 v5641 = (i8)(intptr_t)(ws+3184);
	i8 v5642 = *(i8*)(intptr_t)v5641;
	i4 v5643 = *(i4*)(intptr_t)v5642;

	void f230_LoadConstant(i4 /* value */, i1 /* width */);
	f230_LoadConstant(v5643, v5640);

endsub:;
}
const i1 c02_s00ff[] = { 0x09,0x69,0x38,0x20,0x76,0 };
const i1 c02_s0100[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s0101[] = { 0x29,0x3b,0x0a,0 };

// emit_66 workspace at ws+3256 length ws+2
void f305_emit_66(void) {


	void f223_Push(i2* /* vid */);
	i2 v5644;
	f223_Push(&v5644);
	i8 v5645 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v5645 = v5644;

	i8 v5646 = (i8)(intptr_t)c02_s00ff;

	void f161_E(i8 /* text */);
	f161_E(v5646);

	i8 v5647 = (i8)(intptr_t)(ws+3256);
	i2 v5648 = *(i2*)(intptr_t)v5647;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5648);

	i8 v5649 = (i8)(intptr_t)c02_s0100;

	void f161_E(i8 /* text */);
	f161_E(v5649);

	i8 v5650 = (i8)(intptr_t)(ws+3184);
	i8 v5651 = *(i8*)(intptr_t)v5650;
	i8 v5652 = *(i8*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(ws+3184);
	i8 v5654 = *(i8*)(intptr_t)v5653;
	i8 v5655 = v5654+(+8);
	i2 v5656 = *(i2*)(intptr_t)v5655;

	void f219_E_symref(i2 /* off */, i8 /* sym */);
	f219_E_symref(v5656, v5652);

	i8 v5657 = (i8)(intptr_t)c02_s0101;

	void f161_E(i8 /* text */);
	f161_E(v5657);

endsub:;
}

// emit_67 workspace at ws+3256 length ws+0
void f306_emit_67(void) {

	i1 v5658 = (i1)+1;

	void f231_StoreVV(i1 /* width */);
	f231_StoreVV(v5658);

endsub:;
}

// emit_68 workspace at ws+3256 length ws+0
void f307_emit_68(void) {

	i1 v5659 = (i1)+2;

	void f231_StoreVV(i1 /* width */);
	f231_StoreVV(v5659);

endsub:;
}

// emit_69 workspace at ws+3256 length ws+0
void f308_emit_69(void) {

	i1 v5660 = (i1)+4;

	void f231_StoreVV(i1 /* width */);
	f231_StoreVV(v5660);

endsub:;
}

// emit_70 workspace at ws+3256 length ws+0
void f309_emit_70(void) {

	i1 v5661 = (i1)+8;

	void f231_StoreVV(i1 /* width */);
	f231_StoreVV(v5661);

endsub:;
}

// emit_71 workspace at ws+3256 length ws+0
void f310_emit_71(void) {

	i1 v5662 = (i1)+1;

	void f232_LoadVV(i1 /* width */);
	f232_LoadVV(v5662);

endsub:;
}

// emit_72 workspace at ws+3256 length ws+0
void f311_emit_72(void) {

	i1 v5663 = (i1)+2;

	void f232_LoadVV(i1 /* width */);
	f232_LoadVV(v5663);

endsub:;
}

// emit_73 workspace at ws+3256 length ws+0
void f312_emit_73(void) {

	i1 v5664 = (i1)+4;

	void f232_LoadVV(i1 /* width */);
	f232_LoadVV(v5664);

endsub:;
}

// emit_74 workspace at ws+3256 length ws+0
void f313_emit_74(void) {

	i1 v5665 = (i1)+8;

	void f232_LoadVV(i1 /* width */);
	f232_LoadVV(v5665);

endsub:;
}
const i1 c02_s0102[] = { 0x2b,0 };

// emit_75 workspace at ws+3256 length ws+0
void f314_emit_75(void) {

	i1 v5666 = (i1)+1;
	i8 v5667 = (i8)(intptr_t)c02_s0102;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5667, v5666);

endsub:;
}
const i1 c02_s0103[] = { 0x2b,0 };

// emit_76 workspace at ws+3256 length ws+0
void f315_emit_76(void) {

	i1 v5668 = (i1)+2;
	i8 v5669 = (i8)(intptr_t)c02_s0103;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5669, v5668);

endsub:;
}
const i1 c02_s0104[] = { 0x2b,0 };

// emit_77 workspace at ws+3256 length ws+0
void f316_emit_77(void) {

	i1 v5670 = (i1)+4;
	i8 v5671 = (i8)(intptr_t)c02_s0104;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5671, v5670);

endsub:;
}
const i1 c02_s0105[] = { 0x2b,0 };

// emit_78 workspace at ws+3256 length ws+0
void f317_emit_78(void) {

	i1 v5672 = (i1)+8;
	i8 v5673 = (i8)(intptr_t)c02_s0105;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5673, v5672);

endsub:;
}
const i1 c02_s0106[] = { 0x2d,0 };

// emit_79 workspace at ws+3256 length ws+0
void f318_emit_79(void) {

	i1 v5674 = (i1)+1;
	i8 v5675 = (i8)(intptr_t)c02_s0106;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5675, v5674);

endsub:;
}
const i1 c02_s0107[] = { 0x2d,0 };

// emit_80 workspace at ws+3256 length ws+0
void f319_emit_80(void) {

	i1 v5676 = (i1)+2;
	i8 v5677 = (i8)(intptr_t)c02_s0107;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5677, v5676);

endsub:;
}
const i1 c02_s0108[] = { 0x2d,0 };

// emit_81 workspace at ws+3256 length ws+0
void f320_emit_81(void) {

	i1 v5678 = (i1)+4;
	i8 v5679 = (i8)(intptr_t)c02_s0108;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5679, v5678);

endsub:;
}
const i1 c02_s0109[] = { 0x2d,0 };

// emit_82 workspace at ws+3256 length ws+0
void f321_emit_82(void) {

	i1 v5680 = (i1)+8;
	i8 v5681 = (i8)(intptr_t)c02_s0109;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5681, v5680);

endsub:;
}
const i1 c02_s010a[] = { 0x2a,0 };

// emit_83 workspace at ws+3256 length ws+0
void f322_emit_83(void) {

	i1 v5682 = (i1)+1;
	i8 v5683 = (i8)(intptr_t)c02_s010a;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5683, v5682);

endsub:;
}
const i1 c02_s010b[] = { 0x2a,0 };

// emit_84 workspace at ws+3256 length ws+0
void f323_emit_84(void) {

	i1 v5684 = (i1)+2;
	i8 v5685 = (i8)(intptr_t)c02_s010b;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5685, v5684);

endsub:;
}
const i1 c02_s010c[] = { 0x2a,0 };

// emit_85 workspace at ws+3256 length ws+0
void f324_emit_85(void) {

	i1 v5686 = (i1)+4;
	i8 v5687 = (i8)(intptr_t)c02_s010c;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5687, v5686);

endsub:;
}
const i1 c02_s010d[] = { 0x2a,0 };

// emit_86 workspace at ws+3256 length ws+0
void f325_emit_86(void) {

	i1 v5688 = (i1)+8;
	i8 v5689 = (i8)(intptr_t)c02_s010d;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5689, v5688);

endsub:;
}
const i1 c02_s010e[] = { 0x2f,0 };

// emit_87 workspace at ws+3256 length ws+0
void f326_emit_87(void) {

	i1 v5690 = (i1)+1;
	i8 v5691 = (i8)(intptr_t)c02_s010e;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5691, v5690);

endsub:;
}
const i1 c02_s010f[] = { 0x2f,0 };

// emit_88 workspace at ws+3256 length ws+0
void f327_emit_88(void) {

	i1 v5692 = (i1)+2;
	i8 v5693 = (i8)(intptr_t)c02_s010f;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5693, v5692);

endsub:;
}
const i1 c02_s0110[] = { 0x2f,0 };

// emit_89 workspace at ws+3256 length ws+0
void f328_emit_89(void) {

	i1 v5694 = (i1)+4;
	i8 v5695 = (i8)(intptr_t)c02_s0110;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5695, v5694);

endsub:;
}
const i1 c02_s0111[] = { 0x2f,0 };

// emit_90 workspace at ws+3256 length ws+0
void f329_emit_90(void) {

	i1 v5696 = (i1)+8;
	i8 v5697 = (i8)(intptr_t)c02_s0111;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5697, v5696);

endsub:;
}
const i1 c02_s0112[] = { 0x25,0 };

// emit_91 workspace at ws+3256 length ws+0
void f330_emit_91(void) {

	i1 v5698 = (i1)+1;
	i8 v5699 = (i8)(intptr_t)c02_s0112;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5699, v5698);

endsub:;
}
const i1 c02_s0113[] = { 0x25,0 };

// emit_92 workspace at ws+3256 length ws+0
void f331_emit_92(void) {

	i1 v5700 = (i1)+2;
	i8 v5701 = (i8)(intptr_t)c02_s0113;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5701, v5700);

endsub:;
}
const i1 c02_s0114[] = { 0x25,0 };

// emit_93 workspace at ws+3256 length ws+0
void f332_emit_93(void) {

	i1 v5702 = (i1)+4;
	i8 v5703 = (i8)(intptr_t)c02_s0114;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5703, v5702);

endsub:;
}
const i1 c02_s0115[] = { 0x25,0 };

// emit_94 workspace at ws+3256 length ws+0
void f333_emit_94(void) {

	i1 v5704 = (i1)+8;
	i8 v5705 = (i8)(intptr_t)c02_s0115;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5705, v5704);

endsub:;
}
const i1 c02_s0116[] = { 0x2f,0 };

// emit_95 workspace at ws+3256 length ws+0
void f334_emit_95(void) {

	i1 v5706 = (i1)+1;
	i8 v5707 = (i8)(intptr_t)c02_s0116;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5707, v5706);

endsub:;
}
const i1 c02_s0117[] = { 0x2f,0 };

// emit_96 workspace at ws+3256 length ws+0
void f335_emit_96(void) {

	i1 v5708 = (i1)+2;
	i8 v5709 = (i8)(intptr_t)c02_s0117;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5709, v5708);

endsub:;
}
const i1 c02_s0118[] = { 0x2f,0 };

// emit_97 workspace at ws+3256 length ws+0
void f336_emit_97(void) {

	i1 v5710 = (i1)+4;
	i8 v5711 = (i8)(intptr_t)c02_s0118;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5711, v5710);

endsub:;
}
const i1 c02_s0119[] = { 0x2f,0 };

// emit_98 workspace at ws+3256 length ws+0
void f337_emit_98(void) {

	i1 v5712 = (i1)+8;
	i8 v5713 = (i8)(intptr_t)c02_s0119;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5713, v5712);

endsub:;
}
const i1 c02_s011a[] = { 0x25,0 };

// emit_99 workspace at ws+3256 length ws+0
void f338_emit_99(void) {

	i1 v5714 = (i1)+1;
	i8 v5715 = (i8)(intptr_t)c02_s011a;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5715, v5714);

endsub:;
}
const i1 c02_s011b[] = { 0x25,0 };

// emit_100 workspace at ws+3256 length ws+0
void f339_emit_100(void) {

	i1 v5716 = (i1)+2;
	i8 v5717 = (i8)(intptr_t)c02_s011b;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5717, v5716);

endsub:;
}
const i1 c02_s011c[] = { 0x25,0 };

// emit_101 workspace at ws+3256 length ws+0
void f340_emit_101(void) {

	i1 v5718 = (i1)+4;
	i8 v5719 = (i8)(intptr_t)c02_s011c;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5719, v5718);

endsub:;
}
const i1 c02_s011d[] = { 0x25,0 };

// emit_102 workspace at ws+3256 length ws+0
void f341_emit_102(void) {

	i1 v5720 = (i1)+8;
	i8 v5721 = (i8)(intptr_t)c02_s011d;

	void f235_Op2VVSigned(i8 /* op */, i1 /* width */);
	f235_Op2VVSigned(v5721, v5720);

endsub:;
}
const i1 c02_s011e[] = { 0x26,0 };

// emit_103 workspace at ws+3256 length ws+0
void f342_emit_103(void) {

	i1 v5722 = (i1)+1;
	i8 v5723 = (i8)(intptr_t)c02_s011e;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5723, v5722);

endsub:;
}
const i1 c02_s011f[] = { 0x26,0 };

// emit_104 workspace at ws+3256 length ws+0
void f343_emit_104(void) {

	i1 v5724 = (i1)+2;
	i8 v5725 = (i8)(intptr_t)c02_s011f;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5725, v5724);

endsub:;
}
const i1 c02_s0120[] = { 0x26,0 };

// emit_105 workspace at ws+3256 length ws+0
void f344_emit_105(void) {

	i1 v5726 = (i1)+4;
	i8 v5727 = (i8)(intptr_t)c02_s0120;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5727, v5726);

endsub:;
}
const i1 c02_s0121[] = { 0x26,0 };

// emit_106 workspace at ws+3256 length ws+0
void f345_emit_106(void) {

	i1 v5728 = (i1)+8;
	i8 v5729 = (i8)(intptr_t)c02_s0121;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5729, v5728);

endsub:;
}
const i1 c02_s0122[] = { 0x7c,0 };

// emit_107 workspace at ws+3256 length ws+0
void f346_emit_107(void) {

	i1 v5730 = (i1)+1;
	i8 v5731 = (i8)(intptr_t)c02_s0122;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5731, v5730);

endsub:;
}
const i1 c02_s0123[] = { 0x7c,0 };

// emit_108 workspace at ws+3256 length ws+0
void f347_emit_108(void) {

	i1 v5732 = (i1)+2;
	i8 v5733 = (i8)(intptr_t)c02_s0123;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5733, v5732);

endsub:;
}
const i1 c02_s0124[] = { 0x7c,0 };

// emit_109 workspace at ws+3256 length ws+0
void f348_emit_109(void) {

	i1 v5734 = (i1)+4;
	i8 v5735 = (i8)(intptr_t)c02_s0124;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5735, v5734);

endsub:;
}
const i1 c02_s0125[] = { 0x7c,0 };

// emit_110 workspace at ws+3256 length ws+0
void f349_emit_110(void) {

	i1 v5736 = (i1)+8;
	i8 v5737 = (i8)(intptr_t)c02_s0125;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5737, v5736);

endsub:;
}
const i1 c02_s0126[] = { 0x5e,0 };

// emit_111 workspace at ws+3256 length ws+0
void f350_emit_111(void) {

	i1 v5738 = (i1)+1;
	i8 v5739 = (i8)(intptr_t)c02_s0126;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5739, v5738);

endsub:;
}
const i1 c02_s0127[] = { 0x5e,0 };

// emit_112 workspace at ws+3256 length ws+0
void f351_emit_112(void) {

	i1 v5740 = (i1)+2;
	i8 v5741 = (i8)(intptr_t)c02_s0127;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5741, v5740);

endsub:;
}
const i1 c02_s0128[] = { 0x5e,0 };

// emit_113 workspace at ws+3256 length ws+0
void f352_emit_113(void) {

	i1 v5742 = (i1)+4;
	i8 v5743 = (i8)(intptr_t)c02_s0128;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5743, v5742);

endsub:;
}
const i1 c02_s0129[] = { 0x5e,0 };

// emit_114 workspace at ws+3256 length ws+0
void f353_emit_114(void) {

	i1 v5744 = (i1)+8;
	i8 v5745 = (i8)(intptr_t)c02_s0129;

	void f233_Op2VV(i8 /* op */, i1 /* width */);
	f233_Op2VV(v5745, v5744);

endsub:;
}
const i1 c02_s012a[] = { 0x2d,0 };

// emit_115 workspace at ws+3256 length ws+0
void f354_emit_115(void) {

	i1 v5746 = (i1)+1;
	i8 v5747 = (i8)(intptr_t)c02_s012a;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5747, v5746);

endsub:;
}
const i1 c02_s012b[] = { 0x2d,0 };

// emit_116 workspace at ws+3256 length ws+0
void f355_emit_116(void) {

	i1 v5748 = (i1)+2;
	i8 v5749 = (i8)(intptr_t)c02_s012b;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5749, v5748);

endsub:;
}
const i1 c02_s012c[] = { 0x2d,0 };

// emit_117 workspace at ws+3256 length ws+0
void f356_emit_117(void) {

	i1 v5750 = (i1)+4;
	i8 v5751 = (i8)(intptr_t)c02_s012c;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5751, v5750);

endsub:;
}
const i1 c02_s012d[] = { 0x2d,0 };

// emit_118 workspace at ws+3256 length ws+0
void f357_emit_118(void) {

	i1 v5752 = (i1)+8;
	i8 v5753 = (i8)(intptr_t)c02_s012d;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5753, v5752);

endsub:;
}
const i1 c02_s012e[] = { 0x7e,0 };

// emit_119 workspace at ws+3256 length ws+0
void f358_emit_119(void) {

	i1 v5754 = (i1)+1;
	i8 v5755 = (i8)(intptr_t)c02_s012e;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5755, v5754);

endsub:;
}
const i1 c02_s012f[] = { 0x7e,0 };

// emit_120 workspace at ws+3256 length ws+0
void f359_emit_120(void) {

	i1 v5756 = (i1)+2;
	i8 v5757 = (i8)(intptr_t)c02_s012f;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5757, v5756);

endsub:;
}
const i1 c02_s0130[] = { 0x7e,0 };

// emit_121 workspace at ws+3256 length ws+0
void f360_emit_121(void) {

	i1 v5758 = (i1)+4;
	i8 v5759 = (i8)(intptr_t)c02_s0130;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5759, v5758);

endsub:;
}
const i1 c02_s0131[] = { 0x7e,0 };

// emit_122 workspace at ws+3256 length ws+0
void f361_emit_122(void) {

	i1 v5760 = (i1)+8;
	i8 v5761 = (i8)(intptr_t)c02_s0131;

	void f237_Op1V(i8 /* op */, i1 /* width */);
	f237_Op1V(v5761, v5760);

endsub:;
}
const i1 c02_s0132[] = { 0x69,0x31,0 };
const i1 c02_s0133[] = { 0x3c,0x3c,0 };

// emit_123 workspace at ws+3256 length ws+0
void f362_emit_123(void) {

	i1 v5762 = (i1)+1;
	i8 v5763 = (i8)(intptr_t)c02_s0132;
	i8 v5764 = (i8)(intptr_t)c02_s0133;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5764, v5763, v5762);

endsub:;
}
const i1 c02_s0134[] = { 0x69,0x32,0 };
const i1 c02_s0135[] = { 0x3c,0x3c,0 };

// emit_124 workspace at ws+3256 length ws+0
void f363_emit_124(void) {

	i1 v5765 = (i1)+2;
	i8 v5766 = (i8)(intptr_t)c02_s0134;
	i8 v5767 = (i8)(intptr_t)c02_s0135;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5767, v5766, v5765);

endsub:;
}
const i1 c02_s0136[] = { 0x69,0x34,0 };
const i1 c02_s0137[] = { 0x3c,0x3c,0 };

// emit_125 workspace at ws+3256 length ws+0
void f364_emit_125(void) {

	i1 v5768 = (i1)+4;
	i8 v5769 = (i8)(intptr_t)c02_s0136;
	i8 v5770 = (i8)(intptr_t)c02_s0137;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5770, v5769, v5768);

endsub:;
}
const i1 c02_s0138[] = { 0x69,0x38,0 };
const i1 c02_s0139[] = { 0x3c,0x3c,0 };

// emit_126 workspace at ws+3256 length ws+0
void f365_emit_126(void) {

	i1 v5771 = (i1)+8;
	i8 v5772 = (i8)(intptr_t)c02_s0138;
	i8 v5773 = (i8)(intptr_t)c02_s0139;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5773, v5772, v5771);

endsub:;
}
const i1 c02_s013a[] = { 0x69,0x31,0 };
const i1 c02_s013b[] = { 0x3e,0x3e,0 };

// emit_127 workspace at ws+3256 length ws+0
void f366_emit_127(void) {

	i1 v5774 = (i1)+1;
	i8 v5775 = (i8)(intptr_t)c02_s013a;
	i8 v5776 = (i8)(intptr_t)c02_s013b;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5776, v5775, v5774);

endsub:;
}
const i1 c02_s013c[] = { 0x69,0x32,0 };
const i1 c02_s013d[] = { 0x3e,0x3e,0 };

// emit_128 workspace at ws+3256 length ws+0
void f367_emit_128(void) {

	i1 v5777 = (i1)+2;
	i8 v5778 = (i8)(intptr_t)c02_s013c;
	i8 v5779 = (i8)(intptr_t)c02_s013d;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5779, v5778, v5777);

endsub:;
}
const i1 c02_s013e[] = { 0x69,0x34,0 };
const i1 c02_s013f[] = { 0x3e,0x3e,0 };

// emit_129 workspace at ws+3256 length ws+0
void f368_emit_129(void) {

	i1 v5780 = (i1)+4;
	i8 v5781 = (i8)(intptr_t)c02_s013e;
	i8 v5782 = (i8)(intptr_t)c02_s013f;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5782, v5781, v5780);

endsub:;
}
const i1 c02_s0140[] = { 0x69,0x38,0 };
const i1 c02_s0141[] = { 0x3e,0x3e,0 };

// emit_130 workspace at ws+3256 length ws+0
void f369_emit_130(void) {

	i1 v5783 = (i1)+8;
	i8 v5784 = (i8)(intptr_t)c02_s0140;
	i8 v5785 = (i8)(intptr_t)c02_s0141;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5785, v5784, v5783);

endsub:;
}
const i1 c02_s0142[] = { 0x73,0x31,0 };
const i1 c02_s0143[] = { 0x3e,0x3e,0 };

// emit_131 workspace at ws+3256 length ws+0
void f370_emit_131(void) {

	i1 v5786 = (i1)+1;
	i8 v5787 = (i8)(intptr_t)c02_s0142;
	i8 v5788 = (i8)(intptr_t)c02_s0143;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5788, v5787, v5786);

endsub:;
}
const i1 c02_s0144[] = { 0x73,0x32,0 };
const i1 c02_s0145[] = { 0x3e,0x3e,0 };

// emit_132 workspace at ws+3256 length ws+0
void f371_emit_132(void) {

	i1 v5789 = (i1)+2;
	i8 v5790 = (i8)(intptr_t)c02_s0144;
	i8 v5791 = (i8)(intptr_t)c02_s0145;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5791, v5790, v5789);

endsub:;
}
const i1 c02_s0146[] = { 0x73,0x34,0 };
const i1 c02_s0147[] = { 0x3e,0x3e,0 };

// emit_133 workspace at ws+3256 length ws+0
void f372_emit_133(void) {

	i1 v5792 = (i1)+4;
	i8 v5793 = (i8)(intptr_t)c02_s0146;
	i8 v5794 = (i8)(intptr_t)c02_s0147;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5794, v5793, v5792);

endsub:;
}
const i1 c02_s0148[] = { 0x73,0x38,0 };
const i1 c02_s0149[] = { 0x3e,0x3e,0 };

// emit_134 workspace at ws+3256 length ws+0
void f373_emit_134(void) {

	i1 v5795 = (i1)+8;
	i8 v5796 = (i8)(intptr_t)c02_s0148;
	i8 v5797 = (i8)(intptr_t)c02_s0149;

	void f238_Shift(i8 /* op */, i8 /* type */, i1 /* width */);
	f238_Shift(v5797, v5796, v5795);

endsub:;
}
const i1 c02_s014a[] = { 0x3d,0x3d,0 };

// emit_135 workspace at ws+3256 length ws+0
void f374_emit_135(void) {

	i8 v5798 = (i8)(intptr_t)(ws+3176);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = v5799+(+16);
	i8 v5801 = *(i8*)(intptr_t)v5800;
	i8 v5802 = (i8)(intptr_t)c02_s014a;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5802, v5801);

endsub:;
}
const i1 c02_s014b[] = { 0x3d,0x3d,0 };

// emit_136 workspace at ws+3256 length ws+0
void f375_emit_136(void) {

	i8 v5803 = (i8)(intptr_t)(ws+3176);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = v5804+(+16);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	i8 v5807 = (i8)(intptr_t)c02_s014b;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5807, v5806);

endsub:;
}
const i1 c02_s014c[] = { 0x3d,0x3d,0 };

// emit_137 workspace at ws+3256 length ws+0
void f376_emit_137(void) {

	i8 v5808 = (i8)(intptr_t)(ws+3176);
	i8 v5809 = *(i8*)(intptr_t)v5808;
	i8 v5810 = v5809+(+16);
	i8 v5811 = *(i8*)(intptr_t)v5810;
	i8 v5812 = (i8)(intptr_t)c02_s014c;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5812, v5811);

endsub:;
}
const i1 c02_s014d[] = { 0x3d,0x3d,0 };

// emit_138 workspace at ws+3256 length ws+0
void f377_emit_138(void) {

	i8 v5813 = (i8)(intptr_t)(ws+3176);
	i8 v5814 = *(i8*)(intptr_t)v5813;
	i8 v5815 = v5814+(+16);
	i8 v5816 = *(i8*)(intptr_t)v5815;
	i8 v5817 = (i8)(intptr_t)c02_s014d;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5817, v5816);

endsub:;
}
const i1 c02_s014e[] = { 0x3c,0 };

// emit_139 workspace at ws+3256 length ws+0
void f378_emit_139(void) {

	i8 v5818 = (i8)(intptr_t)(ws+3176);
	i8 v5819 = *(i8*)(intptr_t)v5818;
	i8 v5820 = v5819+(+16);
	i8 v5821 = *(i8*)(intptr_t)v5820;
	i8 v5822 = (i8)(intptr_t)c02_s014e;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5822, v5821);

endsub:;
}
const i1 c02_s014f[] = { 0x3c,0 };

// emit_140 workspace at ws+3256 length ws+0
void f379_emit_140(void) {

	i8 v5823 = (i8)(intptr_t)(ws+3176);
	i8 v5824 = *(i8*)(intptr_t)v5823;
	i8 v5825 = v5824+(+16);
	i8 v5826 = *(i8*)(intptr_t)v5825;
	i8 v5827 = (i8)(intptr_t)c02_s014f;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5827, v5826);

endsub:;
}
const i1 c02_s0150[] = { 0x3c,0 };

// emit_141 workspace at ws+3256 length ws+0
void f380_emit_141(void) {

	i8 v5828 = (i8)(intptr_t)(ws+3176);
	i8 v5829 = *(i8*)(intptr_t)v5828;
	i8 v5830 = v5829+(+16);
	i8 v5831 = *(i8*)(intptr_t)v5830;
	i8 v5832 = (i8)(intptr_t)c02_s0150;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5832, v5831);

endsub:;
}
const i1 c02_s0151[] = { 0x3c,0 };

// emit_142 workspace at ws+3256 length ws+0
void f381_emit_142(void) {

	i8 v5833 = (i8)(intptr_t)(ws+3176);
	i8 v5834 = *(i8*)(intptr_t)v5833;
	i8 v5835 = v5834+(+16);
	i8 v5836 = *(i8*)(intptr_t)v5835;
	i8 v5837 = (i8)(intptr_t)c02_s0151;

	void f239_Branch(i8 /* op */, i8 /* node */);
	f239_Branch(v5837, v5836);

endsub:;
}
const i1 c02_s0152[] = { 0x3c,0 };

// emit_143 workspace at ws+3256 length ws+0
void f382_emit_143(void) {

	i8 v5838 = (i8)(intptr_t)(ws+3176);
	i8 v5839 = *(i8*)(intptr_t)v5838;
	i8 v5840 = v5839+(+16);
	i8 v5841 = *(i8*)(intptr_t)v5840;
	i1 v5842 = (i1)+1;
	i8 v5843 = (i8)(intptr_t)c02_s0152;

	void f240_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f240_BranchSigned(v5843, v5842, v5841);

endsub:;
}
const i1 c02_s0153[] = { 0x3c,0 };

// emit_144 workspace at ws+3256 length ws+0
void f383_emit_144(void) {

	i8 v5844 = (i8)(intptr_t)(ws+3176);
	i8 v5845 = *(i8*)(intptr_t)v5844;
	i8 v5846 = v5845+(+16);
	i8 v5847 = *(i8*)(intptr_t)v5846;
	i1 v5848 = (i1)+2;
	i8 v5849 = (i8)(intptr_t)c02_s0153;

	void f240_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f240_BranchSigned(v5849, v5848, v5847);

endsub:;
}
const i1 c02_s0154[] = { 0x3c,0 };

// emit_145 workspace at ws+3256 length ws+0
void f384_emit_145(void) {

	i8 v5850 = (i8)(intptr_t)(ws+3176);
	i8 v5851 = *(i8*)(intptr_t)v5850;
	i8 v5852 = v5851+(+16);
	i8 v5853 = *(i8*)(intptr_t)v5852;
	i1 v5854 = (i1)+4;
	i8 v5855 = (i8)(intptr_t)c02_s0154;

	void f240_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f240_BranchSigned(v5855, v5854, v5853);

endsub:;
}
const i1 c02_s0155[] = { 0x3c,0 };

// emit_146 workspace at ws+3256 length ws+0
void f385_emit_146(void) {

	i8 v5856 = (i8)(intptr_t)(ws+3176);
	i8 v5857 = *(i8*)(intptr_t)v5856;
	i8 v5858 = v5857+(+16);
	i8 v5859 = *(i8*)(intptr_t)v5858;
	i1 v5860 = (i1)+8;
	i8 v5861 = (i8)(intptr_t)c02_s0155;

	void f240_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);
	f240_BranchSigned(v5861, v5860, v5859);

endsub:;
}

// emit_151 workspace at ws+3256 length ws+0
void f386_emit_151(void) {

	i8 v5862 = (i8)(intptr_t)(ws+3184);
	i8 v5863 = *(i8*)(intptr_t)v5862;
	i4 v5864 = *(i4*)(intptr_t)v5863;
	i4 v5865 = v5864&(+255);
	i8 v5866 = (i8)(intptr_t)(ws+3184);
	i8 v5867 = *(i8*)(intptr_t)v5866;
	i8 v5868 = v5867+(+4);
	i2 v5869 = *(i2*)(intptr_t)v5868;

	void f242_Whencase(i2 /* falselabel */, i4 /* value */);
	f242_Whencase(v5869, v5865);

endsub:;
}

// emit_152 workspace at ws+3256 length ws+0
void f387_emit_152(void) {

	i8 v5870 = (i8)(intptr_t)(ws+3184);
	i8 v5871 = *(i8*)(intptr_t)v5870;
	i4 v5872 = *(i4*)(intptr_t)v5871;
	i4 v5873 = v5872&(+65535);
	i8 v5874 = (i8)(intptr_t)(ws+3184);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = v5875+(+4);
	i2 v5877 = *(i2*)(intptr_t)v5876;

	void f242_Whencase(i2 /* falselabel */, i4 /* value */);
	f242_Whencase(v5877, v5873);

endsub:;
}

// emit_153 workspace at ws+3256 length ws+0
void f388_emit_153(void) {

	i8 v5878 = (i8)(intptr_t)(ws+3184);
	i8 v5879 = *(i8*)(intptr_t)v5878;
	i4 v5880 = *(i4*)(intptr_t)v5879;
	i4 v5881 = v5880&(-1);
	i8 v5882 = (i8)(intptr_t)(ws+3184);
	i8 v5883 = *(i8*)(intptr_t)v5882;
	i8 v5884 = v5883+(+4);
	i2 v5885 = *(i2*)(intptr_t)v5884;

	void f242_Whencase(i2 /* falselabel */, i4 /* value */);
	f242_Whencase(v5885, v5881);

endsub:;
}

// emit_154 workspace at ws+3256 length ws+0
void f389_emit_154(void) {

	i8 v5886 = (i8)(intptr_t)(ws+3184);
	i8 v5887 = *(i8*)(intptr_t)v5886;
	i4 v5888 = *(i4*)(intptr_t)v5887;
	i8 v5889 = (i8)(intptr_t)(ws+3184);
	i8 v5890 = *(i8*)(intptr_t)v5889;
	i8 v5891 = v5890+(+4);
	i2 v5892 = *(i2*)(intptr_t)v5891;

	void f242_Whencase(i2 /* falselabel */, i4 /* value */);
	f242_Whencase(v5892, v5888);

endsub:;
}

// emit_155 workspace at ws+3256 length ws+0
void f390_emit_155(void) {

	i8 v5893 = (i8)(intptr_t)(ws+1192);
	i1 v5894 = *(i1*)(intptr_t)v5893;
	i1 v5895 = v5894+(-1);
	i8 v5896 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5896 = v5895;

endsub:;
}

// emit_156 workspace at ws+3256 length ws+0
void f391_emit_156(void) {

	i8 v5897 = (i8)(intptr_t)(ws+1192);
	i1 v5898 = *(i1*)(intptr_t)v5897;
	i1 v5899 = v5898+(-1);
	i8 v5900 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5900 = v5899;

endsub:;
}

// emit_157 workspace at ws+3256 length ws+0
void f392_emit_157(void) {

	i8 v5901 = (i8)(intptr_t)(ws+1192);
	i1 v5902 = *(i1*)(intptr_t)v5901;
	i1 v5903 = v5902+(-1);
	i8 v5904 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5904 = v5903;

endsub:;
}

// emit_158 workspace at ws+3256 length ws+0
void f393_emit_158(void) {

	i8 v5905 = (i8)(intptr_t)(ws+1192);
	i1 v5906 = *(i1*)(intptr_t)v5905;
	i1 v5907 = v5906+(-1);
	i8 v5908 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5908 = v5907;

endsub:;
}

// emit_159 workspace at ws+3256 length ws+0
void f394_emit_159(void) {

	i1 v5909 = (i1)+1;
	i1 v5910 = (i1)+2;
	i8 v5911 = (i8)(intptr_t)(ws+3184);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i1 v5913 = *(i1*)(intptr_t)v5912;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5913, v5910, v5909);

endsub:;
}

// emit_160 workspace at ws+3256 length ws+0
void f395_emit_160(void) {

	i1 v5914 = (i1)+1;
	i1 v5915 = (i1)+4;
	i8 v5916 = (i8)(intptr_t)(ws+3184);
	i8 v5917 = *(i8*)(intptr_t)v5916;
	i1 v5918 = *(i1*)(intptr_t)v5917;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5918, v5915, v5914);

endsub:;
}

// emit_161 workspace at ws+3256 length ws+0
void f396_emit_161(void) {

	i1 v5919 = (i1)+1;
	i1 v5920 = (i1)+8;
	i8 v5921 = (i8)(intptr_t)(ws+3184);
	i8 v5922 = *(i8*)(intptr_t)v5921;
	i1 v5923 = *(i1*)(intptr_t)v5922;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5923, v5920, v5919);

endsub:;
}

// emit_162 workspace at ws+3256 length ws+0
void f397_emit_162(void) {

	i1 v5924 = (i1)+2;
	i1 v5925 = (i1)+1;
	i8 v5926 = (i8)(intptr_t)(ws+3184);
	i8 v5927 = *(i8*)(intptr_t)v5926;
	i1 v5928 = *(i1*)(intptr_t)v5927;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5928, v5925, v5924);

endsub:;
}

// emit_163 workspace at ws+3256 length ws+0
void f398_emit_163(void) {

	i1 v5929 = (i1)+2;
	i1 v5930 = (i1)+4;
	i8 v5931 = (i8)(intptr_t)(ws+3184);
	i8 v5932 = *(i8*)(intptr_t)v5931;
	i1 v5933 = *(i1*)(intptr_t)v5932;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5933, v5930, v5929);

endsub:;
}

// emit_164 workspace at ws+3256 length ws+0
void f399_emit_164(void) {

	i1 v5934 = (i1)+2;
	i1 v5935 = (i1)+8;
	i8 v5936 = (i8)(intptr_t)(ws+3184);
	i8 v5937 = *(i8*)(intptr_t)v5936;
	i1 v5938 = *(i1*)(intptr_t)v5937;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5938, v5935, v5934);

endsub:;
}

// emit_165 workspace at ws+3256 length ws+0
void f400_emit_165(void) {

	i1 v5939 = (i1)+4;
	i1 v5940 = (i1)+1;
	i8 v5941 = (i8)(intptr_t)(ws+3184);
	i8 v5942 = *(i8*)(intptr_t)v5941;
	i1 v5943 = *(i1*)(intptr_t)v5942;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5943, v5940, v5939);

endsub:;
}

// emit_166 workspace at ws+3256 length ws+0
void f401_emit_166(void) {

	i1 v5944 = (i1)+4;
	i1 v5945 = (i1)+2;
	i8 v5946 = (i8)(intptr_t)(ws+3184);
	i8 v5947 = *(i8*)(intptr_t)v5946;
	i1 v5948 = *(i1*)(intptr_t)v5947;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5948, v5945, v5944);

endsub:;
}

// emit_167 workspace at ws+3256 length ws+0
void f402_emit_167(void) {

	i1 v5949 = (i1)+4;
	i1 v5950 = (i1)+8;
	i8 v5951 = (i8)(intptr_t)(ws+3184);
	i8 v5952 = *(i8*)(intptr_t)v5951;
	i1 v5953 = *(i1*)(intptr_t)v5952;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5953, v5950, v5949);

endsub:;
}

// emit_168 workspace at ws+3256 length ws+0
void f403_emit_168(void) {

	i1 v5954 = (i1)+8;
	i1 v5955 = (i1)+1;
	i8 v5956 = (i8)(intptr_t)(ws+3184);
	i8 v5957 = *(i8*)(intptr_t)v5956;
	i1 v5958 = *(i1*)(intptr_t)v5957;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5958, v5955, v5954);

endsub:;
}

// emit_169 workspace at ws+3256 length ws+0
void f404_emit_169(void) {

	i1 v5959 = (i1)+8;
	i1 v5960 = (i1)+2;
	i8 v5961 = (i8)(intptr_t)(ws+3184);
	i8 v5962 = *(i8*)(intptr_t)v5961;
	i1 v5963 = *(i1*)(intptr_t)v5962;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5963, v5960, v5959);

endsub:;
}

// emit_170 workspace at ws+3256 length ws+0
void f405_emit_170(void) {

	i1 v5964 = (i1)+8;
	i1 v5965 = (i1)+4;
	i8 v5966 = (i8)(intptr_t)(ws+3184);
	i8 v5967 = *(i8*)(intptr_t)v5966;
	i1 v5968 = *(i1*)(intptr_t)v5967;

	void f243_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);
	f243_Cast(v5968, v5965, v5964);

endsub:;
}
const i1 c02_s0156[] = { 0x09,0x69,0x38,0x20,0x76,0 };
const i1 c02_s0157[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
const i1 c02_s0158[] = { 0x3b,0x0a,0 };

// emit_171 workspace at ws+3256 length ws+2
void f406_emit_171(void) {


	void f223_Push(i2* /* vid */);
	i2 v5969;
	f223_Push(&v5969);
	i8 v5970 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v5970 = v5969;

	i8 v5971 = (i8)(intptr_t)c02_s0156;

	void f161_E(i8 /* text */);
	f161_E(v5971);

	i8 v5972 = (i8)(intptr_t)(ws+3256);
	i2 v5973 = *(i2*)(intptr_t)v5972;

	void f163_E_u16(i2 /* value */);
	f163_E_u16(v5973);

	i8 v5974 = (i8)(intptr_t)c02_s0157;

	void f161_E(i8 /* text */);
	f161_E(v5974);

	i1 v5975 = (i1)+3;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5975);

	i1 v5976 = (i1)+115;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v5976);

	i8 v5977 = (i8)(intptr_t)(ws+3184);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i8 v5979 = *(i8*)(intptr_t)v5978;

	void f244_E_string(i2* /* sid */, i8 /* text */);
	i2 v5980;
	f244_E_string(&v5980, v5979);

	void f170_E_h16(i2 /* value */);
	f170_E_h16(v5980);

	i8 v5981 = (i8)(intptr_t)c02_s0158;

	void f161_E(i8 /* text */);
	f161_E(v5981);

endsub:;
}
const i1 c02_s0159[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
const i1 c02_s015a[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0x2f,0x2f,0x20,0 };

// emit_172 workspace at ws+3256 length ws+0
void f407_emit_172(void) {


	void f175_EmitterPushChunk(void);
	f175_EmitterPushChunk();

	i8 v5982 = (i8)(intptr_t)(ws+40);
	i8 v5983 = *(i8*)(intptr_t)v5982;
	i8 v5984 = v5983+(+56);
	i2 v5985 = *(i2*)(intptr_t)v5984;

	void f153_E_b16(i2 /* word */);
	f153_E_b16(v5985);

	i8 v5986 = (i8)(intptr_t)c02_s0159;

	void f161_E(i8 /* text */);
	f161_E(v5986);

	i8 v5987 = (i8)(intptr_t)(ws+3184);
	i8 v5988 = *(i8*)(intptr_t)v5987;
	i8 v5989 = *(i8*)(intptr_t)v5988;
	i8 v5990 = v5989+(+24);
	i8 v5991 = *(i8*)(intptr_t)v5990;

	void f161_E(i8 /* text */);
	f161_E(v5991);

	i8 v5992 = (i8)(intptr_t)c02_s015a;

	void f161_E(i8 /* text */);
	f161_E(v5992);

	i8 v5993 = (i8)(intptr_t)(ws+3184);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i8 v5995 = *(i8*)(intptr_t)v5994;
	i8 v5996 = v5995+(+48);
	i8 v5997 = *(i8*)(intptr_t)v5996;

	void f161_E(i8 /* text */);
	f161_E(v5997);


	void f158_E_nl(void);
	f158_E_nl();

	i1 v5998 = (i1)+0;
	i8 v5999 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5999 = v5998;

endsub:;
}

// emit_173 workspace at ws+3256 length ws+0
void f408_emit_173(void) {

	i8 v6000 = (i8)(intptr_t)(ws+3184);
	i8 v6001 = *(i8*)(intptr_t)v6000;
	i1 v6002 = (i1)+1;

	void f246_E_bytes(i1 /* width */, i8 /* ptr */);
	f246_E_bytes(v6002, v6001);

endsub:;
}

// emit_174 workspace at ws+3256 length ws+0
void f409_emit_174(void) {

	i8 v6003 = (i8)(intptr_t)(ws+3184);
	i8 v6004 = *(i8*)(intptr_t)v6003;
	i1 v6005 = (i1)+2;

	void f246_E_bytes(i1 /* width */, i8 /* ptr */);
	f246_E_bytes(v6005, v6004);

endsub:;
}

// emit_175 workspace at ws+3256 length ws+0
void f410_emit_175(void) {

	i8 v6006 = (i8)(intptr_t)(ws+3184);
	i8 v6007 = *(i8*)(intptr_t)v6006;
	i1 v6008 = (i1)+4;

	void f246_E_bytes(i1 /* width */, i8 /* ptr */);
	f246_E_bytes(v6008, v6007);

endsub:;
}

// emit_176 workspace at ws+3256 length ws+0
void f411_emit_176(void) {

	i8 v6009 = (i8)(intptr_t)(ws+3184);
	i8 v6010 = *(i8*)(intptr_t)v6009;
	i1 v6011 = (i1)+8;

	void f246_E_bytes(i1 /* width */, i8 /* ptr */);
	f246_E_bytes(v6011, v6010);

endsub:;
}
const i1 c02_s015b[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
const i1 c02_s015c[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
const i1 c02_s015d[] = { 0x20,0x7d,0x2c,0x0a,0 };

// emit_177 workspace at ws+3256 length ws+0
void f412_emit_177(void) {

	i8 v6012 = (i8)(intptr_t)(ws+1218);
	i1 v6013 = *(i1*)(intptr_t)v6012;
	i1 v6014 = (i1)+0;
	if (v6013==v6014) goto c02_053e; else goto c02_053d;

c02_053d:;


	void f59_StartError(void);
	f59_StartError();

	i8 v6015 = (i8)(intptr_t)c02_s015b;

	void f11_print(i8 /* ptr */);
	f11_print(v6015);

	i8 v6016 = (i8)(intptr_t)(ws+1218);
	i1 v6017 = *(i1*)(intptr_t)v6016;

	void f17_print_i8(i1 /* value */);
	f17_print_i8(v6017);


	void f60_EndError(void);
	f60_EndError();

	goto c02_053a;

c02_053e:;

c02_053a:;

	i8 v6018 = (i8)(intptr_t)c02_s015c;

	void f161_E(i8 /* text */);
	f161_E(v6018);

	i1 v6019 = (i1)+3;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v6019);

	i1 v6020 = (i1)+115;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v6020);

	i8 v6021 = (i8)(intptr_t)(ws+3184);
	i8 v6022 = *(i8*)(intptr_t)v6021;
	i8 v6023 = *(i8*)(intptr_t)v6022;

	void f244_E_string(i2* /* sid */, i8 /* text */);
	i2 v6024;
	f244_E_string(&v6024, v6023);

	void f170_E_h16(i2 /* value */);
	f170_E_h16(v6024);

	i8 v6025 = (i8)(intptr_t)c02_s015d;

	void f161_E(i8 /* text */);
	f161_E(v6025);

endsub:;
}
const i1 c02_s015e[] = { 0x7d,0x3b,0x0a,0 };

// emit_178 workspace at ws+3256 length ws+0
void f413_emit_178(void) {


	void f245_FlushInitialiserBuffer(void);
	f245_FlushInitialiserBuffer();

	i8 v6026 = (i8)(intptr_t)c02_s015e;

	void f161_E(i8 /* text */);
	f161_E(v6026);

	i1 v6027 = (i1)+83;

	void f176_EmitterPopChunk(i1 /* type */);
	f176_EmitterPopChunk(v6027);

endsub:;
}

// emit_179 workspace at ws+3256 length ws+0
void f414_emit_179(void) {


	void f157_E_tab(void);
	f157_E_tab();

endsub:;
}

// emit_180 workspace at ws+3256 length ws+0
void f415_emit_180(void) {

	i8 v6028 = (i8)(intptr_t)(ws+3184);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	i8 v6030 = *(i8*)(intptr_t)v6029;

	void f161_E(i8 /* text */);
	f161_E(v6030);


	void f155_E_space(void);
	f155_E_space();

endsub:;
}
const i1 c02_s015f[] = { 0x2a,0x28,0x69,0 };
const i1 c02_s0160[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
const i1 c02_s0161[] = { 0x29,0 };

// emit_181 workspace at ws+3256 length ws+0
void f416_emit_181(void) {

	i8 v6031 = (i8)(intptr_t)(ws+3184);
	i8 v6032 = *(i8*)(intptr_t)v6031;
	i8 v6033 = *(i8*)(intptr_t)v6032;
	i8 v6034 = v6033+(+46);
	i1 v6035 = *(i1*)(intptr_t)v6034;
	i1 v6036 = (i1)+28;
	if (v6035==v6036) goto c02_0546; else goto c02_0547;

c02_0546:;

	i8 v6037 = (i8)(intptr_t)c02_s015f;

	void f161_E(i8 /* text */);
	f161_E(v6037);

	i8 v6038 = (i8)(intptr_t)(ws+3184);
	i8 v6039 = *(i8*)(intptr_t)v6038;
	i8 v6040 = *(i8*)(intptr_t)v6039;
	i8 v6041 = *(i8*)(intptr_t)v6040;
	i8 v6042 = v6041+(+42);
	i2 v6043 = *(i2*)(intptr_t)v6042;
	i1 v6044 = v6043;

	void f164_E_u8(i1 /* value */);
	f164_E_u8(v6044);

	i8 v6045 = (i8)(intptr_t)c02_s0160;

	void f161_E(i8 /* text */);
	f161_E(v6045);

	i8 v6046 = (i8)(intptr_t)(ws+3184);
	i8 v6047 = *(i8*)(intptr_t)v6046;
	i8 v6048 = *(i8*)(intptr_t)v6047;
	i2 v6049 = (i2)+0;

	void f219_E_symref(i2 /* off */, i8 /* sym */);
	f219_E_symref(v6049, v6048);

	i8 v6050 = (i8)(intptr_t)c02_s0161;

	void f161_E(i8 /* text */);
	f161_E(v6050);

	goto c02_0543;

c02_0547:;

	i8 v6051 = (i8)(intptr_t)(ws+3184);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i8 v6053 = *(i8*)(intptr_t)v6052;
	i8 v6054 = *(i8*)(intptr_t)v6053;

	void f173_E_subref(i8 /* subr */);
	f173_E_subref(v6054);

c02_0543:;


	void f155_E_space(void);
	f155_E_space();

endsub:;
}

// emit_182 workspace at ws+3256 length ws+0
void f417_emit_182(void) {

	i1 v6055 = (i1)+40;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v6055);

	i8 v6056 = (i8)(intptr_t)(ws+3184);
	i8 v6057 = *(i8*)(intptr_t)v6056;
	i4 v6058 = *(i4*)(intptr_t)v6057;

	void f167_E_i32(i4 /* value */);
	f167_E_i32(v6058);

	i1 v6059 = (i1)+41;

	void f152_E_b8(i1 /* byte */);
	f152_E_b8(v6059);

endsub:;
}

// emit_183 workspace at ws+3256 length ws+0
void f418_emit_183(void) {


	void f158_E_nl(void);
	f158_E_nl();

endsub:;
}

// EmitOneInstruction workspace at ws+3168 length ws+82
void f248_EmitOneInstruction(i8 p5123 /* self */, i1 p5124 /* rule */) {
	*(i1*)(intptr_t)(ws+3168) = p5124; /*rule */
	*(i8*)(intptr_t)(ws+3176) = p5123; /*self */

	i8 v5125 = (i8)(intptr_t)(ws+3176);
	i8 v5126 = *(i8*)(intptr_t)v5125;
	i8 v5127 = v5126+(+16);
	i8 v5128 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5128 = v5127;

	i8 v5129 = (i8)(intptr_t)(ws+3184);
	i8 v5130 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v5130 = v5129;

	i1 v5131 = (i1)+3;
	i8 v5132 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5132 = v5131;

c02_046b:;

	i8 v5133 = (i8)(intptr_t)(ws+3248);
	i1 v5134 = *(i1*)(intptr_t)v5133;
	i1 v5135 = (i1)+0;
	if (v5134==v5135) goto c02_046e; else goto c02_046d;

c02_046d:;

	i8 v5136 = (i8)(intptr_t)(ws+3232);
	i8 v5137 = *(i8*)(intptr_t)v5136;
	i8 v5138 = *(i8*)(intptr_t)v5137;
	i8 v5139 = (i8)(intptr_t)(ws+3240);
	i8 v5140 = *(i8*)(intptr_t)v5139;
	*(i8*)(intptr_t)v5140 = v5138;

	i8 v5141 = (i8)(intptr_t)(ws+3240);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i8 v5143 = *(i8*)(intptr_t)v5142;
	i8 v5144 = (i8)+0;
	if (v5143==v5144) goto c02_0473; else goto c02_0472;

c02_0472:;

	i8 v5145 = (i8)(intptr_t)(ws+3240);
	i8 v5146 = *(i8*)(intptr_t)v5145;
	i8 v5147 = *(i8*)(intptr_t)v5146;
	i8 v5148 = v5147+(+57);
	i1 v5149 = *(i1*)(intptr_t)v5148;
	i8 v5150 = (i8)(intptr_t)(ws+3240);
	i8 v5151 = *(i8*)(intptr_t)v5150;
	i8 v5152 = v5151+(+8);
	*(i1*)(intptr_t)v5152 = v5149;

	goto c02_046f;

c02_0473:;

c02_046f:;

	i8 v5153 = (i8)(intptr_t)(ws+3232);
	i8 v5154 = *(i8*)(intptr_t)v5153;
	i8 v5155 = v5154+(+8);
	i8 v5156 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5156 = v5155;

	i8 v5157 = (i8)(intptr_t)(ws+3240);
	i8 v5158 = *(i8*)(intptr_t)v5157;
	i8 v5159 = v5158+(+16);
	i8 v5160 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v5160 = v5159;

	i8 v5161 = (i8)(intptr_t)(ws+3248);
	i1 v5162 = *(i1*)(intptr_t)v5161;
	i1 v5163 = v5162+(-1);
	i8 v5164 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5164 = v5163;

	goto c02_046b;

c02_046e:;

	i8 v5165 = (i8)(intptr_t)(ws+3176);
	i8 v5166 = *(i8*)(intptr_t)v5165;
	i8 v5167 = v5166+(+41);
	i1 v5168 = *(i1*)(intptr_t)v5167;
	i8 v5169 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5169 = v5168;

	i8 v5170 = (i8)(intptr_t)(ws+3168);
	i1 v5171 = *(i1*)(intptr_t)v5170;

	if (v5171 != +0) goto c02_0475;



	void f249_emit_0(void);
	f249_emit_0();

	goto c02_0474;

c02_0475:;

	if (v5171 != +1) goto c02_0476;



	void f250_emit_1(void);
	f250_emit_1();

	goto c02_0474;

c02_0476:;

	if (v5171 != +2) goto c02_0477;



	void f251_emit_2(void);
	f251_emit_2();

	goto c02_0474;

c02_0477:;

	if (v5171 != +3) goto c02_0478;



	void f252_emit_3(void);
	f252_emit_3();

	goto c02_0474;

c02_0478:;

	if (v5171 != +4) goto c02_0479;



	void f253_emit_4(void);
	f253_emit_4();

	goto c02_0474;

c02_0479:;

	if (v5171 != +5) goto c02_047a;



	void f254_emit_5(void);
	f254_emit_5();

	goto c02_0474;

c02_047a:;

	if (v5171 != +6) goto c02_047b;



	void f255_emit_6(void);
	f255_emit_6();

	goto c02_0474;

c02_047b:;

	if (v5171 != +7) goto c02_047c;



	void f256_emit_7(void);
	f256_emit_7();

	goto c02_0474;

c02_047c:;

	if (v5171 != +8) goto c02_047d;



	void f257_emit_8(void);
	f257_emit_8();

	goto c02_0474;

c02_047d:;

	if (v5171 != +9) goto c02_047e;



	void f258_emit_9(void);
	f258_emit_9();

	goto c02_0474;

c02_047e:;

	if (v5171 != +10) goto c02_047f;



	void f259_emit_10(void);
	f259_emit_10();

	goto c02_0474;

c02_047f:;

	if (v5171 != +11) goto c02_0480;



	void f260_emit_11(void);
	f260_emit_11();

	goto c02_0474;

c02_0480:;

	if (v5171 != +12) goto c02_0481;



	void f261_emit_12(void);
	f261_emit_12();

	goto c02_0474;

c02_0481:;

	if (v5171 != +13) goto c02_0482;



	void f262_emit_13(void);
	f262_emit_13();

	goto c02_0474;

c02_0482:;

	if (v5171 != +14) goto c02_0483;



	void f263_emit_14(void);
	f263_emit_14();

	goto c02_0474;

c02_0483:;

	if (v5171 != +15) goto c02_0484;



	void f264_emit_15(void);
	f264_emit_15();

	goto c02_0474;

c02_0484:;

	if (v5171 != +16) goto c02_0485;



	void f265_emit_16(void);
	f265_emit_16();

	goto c02_0474;

c02_0485:;

	if (v5171 != +17) goto c02_0486;



	void f266_emit_17(void);
	f266_emit_17();

	goto c02_0474;

c02_0486:;

	if (v5171 != +18) goto c02_0487;



	void f267_emit_18(void);
	f267_emit_18();

	goto c02_0474;

c02_0487:;

	if (v5171 != +19) goto c02_0488;



	void f268_emit_19(void);
	f268_emit_19();

	goto c02_0474;

c02_0488:;

	if (v5171 != +20) goto c02_0489;



	void f269_emit_20(void);
	f269_emit_20();

	goto c02_0474;

c02_0489:;

	if (v5171 != +21) goto c02_048a;



	void f270_emit_21(void);
	f270_emit_21();

	goto c02_0474;

c02_048a:;

	if (v5171 != +22) goto c02_048b;



	void f271_emit_22(void);
	f271_emit_22();

	goto c02_0474;

c02_048b:;

	if (v5171 != +23) goto c02_048c;



	void f272_emit_23(void);
	f272_emit_23();

	goto c02_0474;

c02_048c:;

	if (v5171 != +24) goto c02_048d;



	void f273_emit_24(void);
	f273_emit_24();

	goto c02_0474;

c02_048d:;

	if (v5171 != +25) goto c02_048e;



	void f274_emit_25(void);
	f274_emit_25();

	goto c02_0474;

c02_048e:;

	if (v5171 != +26) goto c02_048f;



	void f275_emit_26(void);
	f275_emit_26();

	goto c02_0474;

c02_048f:;

	if (v5171 != +27) goto c02_0490;



	void f276_emit_27(void);
	f276_emit_27();

	goto c02_0474;

c02_0490:;

	if (v5171 != +28) goto c02_0491;



	void f277_emit_28(void);
	f277_emit_28();

	goto c02_0474;

c02_0491:;

	if (v5171 != +29) goto c02_0492;



	void f278_emit_29(void);
	f278_emit_29();

	goto c02_0474;

c02_0492:;

	if (v5171 != +30) goto c02_0493;



	void f279_emit_30(void);
	f279_emit_30();

	goto c02_0474;

c02_0493:;

	if (v5171 != +31) goto c02_0494;



	void f280_emit_31(void);
	f280_emit_31();

	goto c02_0474;

c02_0494:;

	if (v5171 != +32) goto c02_0495;



	void f281_emit_32(void);
	f281_emit_32();

	goto c02_0474;

c02_0495:;

	if (v5171 != +33) goto c02_0496;



	void f282_emit_33(void);
	f282_emit_33();

	goto c02_0474;

c02_0496:;

	if (v5171 != +34) goto c02_0497;



	void f283_emit_34(void);
	f283_emit_34();

	goto c02_0474;

c02_0497:;

	if (v5171 != +35) goto c02_0498;



	void f284_emit_35(void);
	f284_emit_35();

	goto c02_0474;

c02_0498:;

	if (v5171 != +36) goto c02_0499;



	void f285_emit_36(void);
	f285_emit_36();

	goto c02_0474;

c02_0499:;

	if (v5171 != +37) goto c02_049a;



	void f286_emit_37(void);
	f286_emit_37();

	goto c02_0474;

c02_049a:;

	if (v5171 != +38) goto c02_049b;



	void f287_emit_38(void);
	f287_emit_38();

	goto c02_0474;

c02_049b:;

	if (v5171 != +39) goto c02_049c;



	void f288_emit_39(void);
	f288_emit_39();

	goto c02_0474;

c02_049c:;

	if (v5171 != +40) goto c02_049d;



	void f289_emit_40(void);
	f289_emit_40();

	goto c02_0474;

c02_049d:;

	if (v5171 != +43) goto c02_049e;



	void f290_emit_43(void);
	f290_emit_43();

	goto c02_0474;

c02_049e:;

	if (v5171 != +44) goto c02_049f;



	void f291_emit_44(void);
	f291_emit_44();

	goto c02_0474;

c02_049f:;

	if (v5171 != +45) goto c02_04a0;



	void f292_emit_45(void);
	f292_emit_45();

	goto c02_0474;

c02_04a0:;

	if (v5171 != +46) goto c02_04a1;



	void f293_emit_46(void);
	f293_emit_46();

	goto c02_0474;

c02_04a1:;

	if (v5171 != +47) goto c02_04be;



	void f295_emit_47(void);
	f295_emit_47();

	goto c02_0474;

c02_04be:;

	if (v5171 != +57) goto c02_04c5;



	void f296_emit_57(void);
	f296_emit_57();

	goto c02_0474;

c02_04c5:;

	if (v5171 != +58) goto c02_04c6;



	void f297_emit_58(void);
	f297_emit_58();

	goto c02_0474;

c02_04c6:;

	if (v5171 != +59) goto c02_04c7;



	void f298_emit_59(void);
	f298_emit_59();

	goto c02_0474;

c02_04c7:;

	if (v5171 != +60) goto c02_04c8;



	void f299_emit_60(void);
	f299_emit_60();

	goto c02_0474;

c02_04c8:;

	if (v5171 != +61) goto c02_04c9;



	void f300_emit_61(void);
	f300_emit_61();

	goto c02_0474;

c02_04c9:;

	if (v5171 != +62) goto c02_04ca;



	void f301_emit_62(void);
	f301_emit_62();

	goto c02_0474;

c02_04ca:;

	if (v5171 != +63) goto c02_04cb;



	void f302_emit_63(void);
	f302_emit_63();

	goto c02_0474;

c02_04cb:;

	if (v5171 != +64) goto c02_04cc;



	void f303_emit_64(void);
	f303_emit_64();

	goto c02_0474;

c02_04cc:;

	if (v5171 != +65) goto c02_04cd;



	void f304_emit_65(void);
	f304_emit_65();

	goto c02_0474;

c02_04cd:;

	if (v5171 != +66) goto c02_04ce;



	void f305_emit_66(void);
	f305_emit_66();

	goto c02_0474;

c02_04ce:;

	if (v5171 != +67) goto c02_04cf;



	void f306_emit_67(void);
	f306_emit_67();

	goto c02_0474;

c02_04cf:;

	if (v5171 != +68) goto c02_04d0;



	void f307_emit_68(void);
	f307_emit_68();

	goto c02_0474;

c02_04d0:;

	if (v5171 != +69) goto c02_04d1;



	void f308_emit_69(void);
	f308_emit_69();

	goto c02_0474;

c02_04d1:;

	if (v5171 != +70) goto c02_04d2;



	void f309_emit_70(void);
	f309_emit_70();

	goto c02_0474;

c02_04d2:;

	if (v5171 != +71) goto c02_04d3;



	void f310_emit_71(void);
	f310_emit_71();

	goto c02_0474;

c02_04d3:;

	if (v5171 != +72) goto c02_04d4;



	void f311_emit_72(void);
	f311_emit_72();

	goto c02_0474;

c02_04d4:;

	if (v5171 != +73) goto c02_04d5;



	void f312_emit_73(void);
	f312_emit_73();

	goto c02_0474;

c02_04d5:;

	if (v5171 != +74) goto c02_04d6;



	void f313_emit_74(void);
	f313_emit_74();

	goto c02_0474;

c02_04d6:;

	if (v5171 != +75) goto c02_04d7;



	void f314_emit_75(void);
	f314_emit_75();

	goto c02_0474;

c02_04d7:;

	if (v5171 != +76) goto c02_04d8;



	void f315_emit_76(void);
	f315_emit_76();

	goto c02_0474;

c02_04d8:;

	if (v5171 != +77) goto c02_04d9;



	void f316_emit_77(void);
	f316_emit_77();

	goto c02_0474;

c02_04d9:;

	if (v5171 != +78) goto c02_04da;



	void f317_emit_78(void);
	f317_emit_78();

	goto c02_0474;

c02_04da:;

	if (v5171 != +79) goto c02_04db;



	void f318_emit_79(void);
	f318_emit_79();

	goto c02_0474;

c02_04db:;

	if (v5171 != +80) goto c02_04dc;



	void f319_emit_80(void);
	f319_emit_80();

	goto c02_0474;

c02_04dc:;

	if (v5171 != +81) goto c02_04dd;



	void f320_emit_81(void);
	f320_emit_81();

	goto c02_0474;

c02_04dd:;

	if (v5171 != +82) goto c02_04de;



	void f321_emit_82(void);
	f321_emit_82();

	goto c02_0474;

c02_04de:;

	if (v5171 != +83) goto c02_04df;



	void f322_emit_83(void);
	f322_emit_83();

	goto c02_0474;

c02_04df:;

	if (v5171 != +84) goto c02_04e0;



	void f323_emit_84(void);
	f323_emit_84();

	goto c02_0474;

c02_04e0:;

	if (v5171 != +85) goto c02_04e1;



	void f324_emit_85(void);
	f324_emit_85();

	goto c02_0474;

c02_04e1:;

	if (v5171 != +86) goto c02_04e2;



	void f325_emit_86(void);
	f325_emit_86();

	goto c02_0474;

c02_04e2:;

	if (v5171 != +87) goto c02_04e3;



	void f326_emit_87(void);
	f326_emit_87();

	goto c02_0474;

c02_04e3:;

	if (v5171 != +88) goto c02_04e4;



	void f327_emit_88(void);
	f327_emit_88();

	goto c02_0474;

c02_04e4:;

	if (v5171 != +89) goto c02_04e5;



	void f328_emit_89(void);
	f328_emit_89();

	goto c02_0474;

c02_04e5:;

	if (v5171 != +90) goto c02_04e6;



	void f329_emit_90(void);
	f329_emit_90();

	goto c02_0474;

c02_04e6:;

	if (v5171 != +91) goto c02_04e7;



	void f330_emit_91(void);
	f330_emit_91();

	goto c02_0474;

c02_04e7:;

	if (v5171 != +92) goto c02_04e8;



	void f331_emit_92(void);
	f331_emit_92();

	goto c02_0474;

c02_04e8:;

	if (v5171 != +93) goto c02_04e9;



	void f332_emit_93(void);
	f332_emit_93();

	goto c02_0474;

c02_04e9:;

	if (v5171 != +94) goto c02_04ea;



	void f333_emit_94(void);
	f333_emit_94();

	goto c02_0474;

c02_04ea:;

	if (v5171 != +95) goto c02_04eb;



	void f334_emit_95(void);
	f334_emit_95();

	goto c02_0474;

c02_04eb:;

	if (v5171 != +96) goto c02_04ec;



	void f335_emit_96(void);
	f335_emit_96();

	goto c02_0474;

c02_04ec:;

	if (v5171 != +97) goto c02_04ed;



	void f336_emit_97(void);
	f336_emit_97();

	goto c02_0474;

c02_04ed:;

	if (v5171 != +98) goto c02_04ee;



	void f337_emit_98(void);
	f337_emit_98();

	goto c02_0474;

c02_04ee:;

	if (v5171 != +99) goto c02_04ef;



	void f338_emit_99(void);
	f338_emit_99();

	goto c02_0474;

c02_04ef:;

	if (v5171 != +100) goto c02_04f0;



	void f339_emit_100(void);
	f339_emit_100();

	goto c02_0474;

c02_04f0:;

	if (v5171 != +101) goto c02_04f1;



	void f340_emit_101(void);
	f340_emit_101();

	goto c02_0474;

c02_04f1:;

	if (v5171 != +102) goto c02_04f2;



	void f341_emit_102(void);
	f341_emit_102();

	goto c02_0474;

c02_04f2:;

	if (v5171 != +103) goto c02_04f3;



	void f342_emit_103(void);
	f342_emit_103();

	goto c02_0474;

c02_04f3:;

	if (v5171 != +104) goto c02_04f4;



	void f343_emit_104(void);
	f343_emit_104();

	goto c02_0474;

c02_04f4:;

	if (v5171 != +105) goto c02_04f5;



	void f344_emit_105(void);
	f344_emit_105();

	goto c02_0474;

c02_04f5:;

	if (v5171 != +106) goto c02_04f6;



	void f345_emit_106(void);
	f345_emit_106();

	goto c02_0474;

c02_04f6:;

	if (v5171 != +107) goto c02_04f7;



	void f346_emit_107(void);
	f346_emit_107();

	goto c02_0474;

c02_04f7:;

	if (v5171 != +108) goto c02_04f8;



	void f347_emit_108(void);
	f347_emit_108();

	goto c02_0474;

c02_04f8:;

	if (v5171 != +109) goto c02_04f9;



	void f348_emit_109(void);
	f348_emit_109();

	goto c02_0474;

c02_04f9:;

	if (v5171 != +110) goto c02_04fa;



	void f349_emit_110(void);
	f349_emit_110();

	goto c02_0474;

c02_04fa:;

	if (v5171 != +111) goto c02_04fb;



	void f350_emit_111(void);
	f350_emit_111();

	goto c02_0474;

c02_04fb:;

	if (v5171 != +112) goto c02_04fc;



	void f351_emit_112(void);
	f351_emit_112();

	goto c02_0474;

c02_04fc:;

	if (v5171 != +113) goto c02_04fd;



	void f352_emit_113(void);
	f352_emit_113();

	goto c02_0474;

c02_04fd:;

	if (v5171 != +114) goto c02_04fe;



	void f353_emit_114(void);
	f353_emit_114();

	goto c02_0474;

c02_04fe:;

	if (v5171 != +115) goto c02_04ff;



	void f354_emit_115(void);
	f354_emit_115();

	goto c02_0474;

c02_04ff:;

	if (v5171 != +116) goto c02_0500;



	void f355_emit_116(void);
	f355_emit_116();

	goto c02_0474;

c02_0500:;

	if (v5171 != +117) goto c02_0501;



	void f356_emit_117(void);
	f356_emit_117();

	goto c02_0474;

c02_0501:;

	if (v5171 != +118) goto c02_0502;



	void f357_emit_118(void);
	f357_emit_118();

	goto c02_0474;

c02_0502:;

	if (v5171 != +119) goto c02_0503;



	void f358_emit_119(void);
	f358_emit_119();

	goto c02_0474;

c02_0503:;

	if (v5171 != +120) goto c02_0504;



	void f359_emit_120(void);
	f359_emit_120();

	goto c02_0474;

c02_0504:;

	if (v5171 != +121) goto c02_0505;



	void f360_emit_121(void);
	f360_emit_121();

	goto c02_0474;

c02_0505:;

	if (v5171 != +122) goto c02_0506;



	void f361_emit_122(void);
	f361_emit_122();

	goto c02_0474;

c02_0506:;

	if (v5171 != +123) goto c02_0507;



	void f362_emit_123(void);
	f362_emit_123();

	goto c02_0474;

c02_0507:;

	if (v5171 != +124) goto c02_0508;



	void f363_emit_124(void);
	f363_emit_124();

	goto c02_0474;

c02_0508:;

	if (v5171 != +125) goto c02_0509;



	void f364_emit_125(void);
	f364_emit_125();

	goto c02_0474;

c02_0509:;

	if (v5171 != +126) goto c02_050a;



	void f365_emit_126(void);
	f365_emit_126();

	goto c02_0474;

c02_050a:;

	if (v5171 != +127) goto c02_050b;



	void f366_emit_127(void);
	f366_emit_127();

	goto c02_0474;

c02_050b:;

	if (v5171 != +128) goto c02_050c;



	void f367_emit_128(void);
	f367_emit_128();

	goto c02_0474;

c02_050c:;

	if (v5171 != +129) goto c02_050d;



	void f368_emit_129(void);
	f368_emit_129();

	goto c02_0474;

c02_050d:;

	if (v5171 != +130) goto c02_050e;



	void f369_emit_130(void);
	f369_emit_130();

	goto c02_0474;

c02_050e:;

	if (v5171 != +131) goto c02_050f;



	void f370_emit_131(void);
	f370_emit_131();

	goto c02_0474;

c02_050f:;

	if (v5171 != +132) goto c02_0510;



	void f371_emit_132(void);
	f371_emit_132();

	goto c02_0474;

c02_0510:;

	if (v5171 != +133) goto c02_0511;



	void f372_emit_133(void);
	f372_emit_133();

	goto c02_0474;

c02_0511:;

	if (v5171 != +134) goto c02_0512;



	void f373_emit_134(void);
	f373_emit_134();

	goto c02_0474;

c02_0512:;

	if (v5171 != +135) goto c02_0513;



	void f374_emit_135(void);
	f374_emit_135();

	goto c02_0474;

c02_0513:;

	if (v5171 != +136) goto c02_0514;



	void f375_emit_136(void);
	f375_emit_136();

	goto c02_0474;

c02_0514:;

	if (v5171 != +137) goto c02_0515;



	void f376_emit_137(void);
	f376_emit_137();

	goto c02_0474;

c02_0515:;

	if (v5171 != +138) goto c02_0516;



	void f377_emit_138(void);
	f377_emit_138();

	goto c02_0474;

c02_0516:;

	if (v5171 != +139) goto c02_0517;



	void f378_emit_139(void);
	f378_emit_139();

	goto c02_0474;

c02_0517:;

	if (v5171 != +140) goto c02_0518;



	void f379_emit_140(void);
	f379_emit_140();

	goto c02_0474;

c02_0518:;

	if (v5171 != +141) goto c02_0519;



	void f380_emit_141(void);
	f380_emit_141();

	goto c02_0474;

c02_0519:;

	if (v5171 != +142) goto c02_051a;



	void f381_emit_142(void);
	f381_emit_142();

	goto c02_0474;

c02_051a:;

	if (v5171 != +143) goto c02_051b;



	void f382_emit_143(void);
	f382_emit_143();

	goto c02_0474;

c02_051b:;

	if (v5171 != +144) goto c02_051c;



	void f383_emit_144(void);
	f383_emit_144();

	goto c02_0474;

c02_051c:;

	if (v5171 != +145) goto c02_051d;



	void f384_emit_145(void);
	f384_emit_145();

	goto c02_0474;

c02_051d:;

	if (v5171 != +146) goto c02_051e;



	void f385_emit_146(void);
	f385_emit_146();

	goto c02_0474;

c02_051e:;

	if (v5171 != +151) goto c02_051f;



	void f386_emit_151(void);
	f386_emit_151();

	goto c02_0474;

c02_051f:;

	if (v5171 != +152) goto c02_0520;



	void f387_emit_152(void);
	f387_emit_152();

	goto c02_0474;

c02_0520:;

	if (v5171 != +153) goto c02_0521;



	void f388_emit_153(void);
	f388_emit_153();

	goto c02_0474;

c02_0521:;

	if (v5171 != +154) goto c02_0522;



	void f389_emit_154(void);
	f389_emit_154();

	goto c02_0474;

c02_0522:;

	if (v5171 != +155) goto c02_0523;



	void f390_emit_155(void);
	f390_emit_155();

	goto c02_0474;

c02_0523:;

	if (v5171 != +156) goto c02_0524;



	void f391_emit_156(void);
	f391_emit_156();

	goto c02_0474;

c02_0524:;

	if (v5171 != +157) goto c02_0525;



	void f392_emit_157(void);
	f392_emit_157();

	goto c02_0474;

c02_0525:;

	if (v5171 != +158) goto c02_0526;



	void f393_emit_158(void);
	f393_emit_158();

	goto c02_0474;

c02_0526:;

	if (v5171 != +159) goto c02_0527;



	void f394_emit_159(void);
	f394_emit_159();

	goto c02_0474;

c02_0527:;

	if (v5171 != +160) goto c02_0528;



	void f395_emit_160(void);
	f395_emit_160();

	goto c02_0474;

c02_0528:;

	if (v5171 != +161) goto c02_0529;



	void f396_emit_161(void);
	f396_emit_161();

	goto c02_0474;

c02_0529:;

	if (v5171 != +162) goto c02_052a;



	void f397_emit_162(void);
	f397_emit_162();

	goto c02_0474;

c02_052a:;

	if (v5171 != +163) goto c02_052b;



	void f398_emit_163(void);
	f398_emit_163();

	goto c02_0474;

c02_052b:;

	if (v5171 != +164) goto c02_052c;



	void f399_emit_164(void);
	f399_emit_164();

	goto c02_0474;

c02_052c:;

	if (v5171 != +165) goto c02_052d;



	void f400_emit_165(void);
	f400_emit_165();

	goto c02_0474;

c02_052d:;

	if (v5171 != +166) goto c02_052e;



	void f401_emit_166(void);
	f401_emit_166();

	goto c02_0474;

c02_052e:;

	if (v5171 != +167) goto c02_052f;



	void f402_emit_167(void);
	f402_emit_167();

	goto c02_0474;

c02_052f:;

	if (v5171 != +168) goto c02_0530;



	void f403_emit_168(void);
	f403_emit_168();

	goto c02_0474;

c02_0530:;

	if (v5171 != +169) goto c02_0531;



	void f404_emit_169(void);
	f404_emit_169();

	goto c02_0474;

c02_0531:;

	if (v5171 != +170) goto c02_0532;



	void f405_emit_170(void);
	f405_emit_170();

	goto c02_0474;

c02_0532:;

	if (v5171 != +171) goto c02_0533;



	void f406_emit_171(void);
	f406_emit_171();

	goto c02_0474;

c02_0533:;

	if (v5171 != +172) goto c02_0534;



	void f407_emit_172(void);
	f407_emit_172();

	goto c02_0474;

c02_0534:;

	if (v5171 != +173) goto c02_0535;



	void f408_emit_173(void);
	f408_emit_173();

	goto c02_0474;

c02_0535:;

	if (v5171 != +174) goto c02_0536;



	void f409_emit_174(void);
	f409_emit_174();

	goto c02_0474;

c02_0536:;

	if (v5171 != +175) goto c02_0537;



	void f410_emit_175(void);
	f410_emit_175();

	goto c02_0474;

c02_0537:;

	if (v5171 != +176) goto c02_0538;



	void f411_emit_176(void);
	f411_emit_176();

	goto c02_0474;

c02_0538:;

	if (v5171 != +177) goto c02_0539;



	void f412_emit_177(void);
	f412_emit_177();

	goto c02_0474;

c02_0539:;

	if (v5171 != +178) goto c02_053f;



	void f413_emit_178(void);
	f413_emit_178();

	goto c02_0474;

c02_053f:;

	if (v5171 != +179) goto c02_0540;



	void f414_emit_179(void);
	f414_emit_179();

	goto c02_0474;

c02_0540:;

	if (v5171 != +180) goto c02_0541;



	void f415_emit_180(void);
	f415_emit_180();

	goto c02_0474;

c02_0541:;

	if (v5171 != +181) goto c02_0542;



	void f416_emit_181(void);
	f416_emit_181();

	goto c02_0474;

c02_0542:;

	if (v5171 != +182) goto c02_0548;



	void f417_emit_182(void);
	f417_emit_182();

	goto c02_0474;

c02_0548:;

	if (v5171 != +183) goto c02_0549;



	void f418_emit_183(void);
	f418_emit_183();

c02_0549:;

c02_0474:;


endsub:;
}
static data c02_a54a[] = { // codegen_midcodes








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
static data c02_a54b[] = { // codegen_registers








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
static data c02_a54c[] = { // codegen_rules








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

// PopulateMatchBuffer workspace at ws+3216 length ws+24
void f419_PopulateMatchBuffer(i8 p6060 /* matchbuf */, i8 p6061 /* n */, i8 p6062 /* insn */) {
	*(i8*)(intptr_t)(ws+3216) = p6062; /*insn */
	*(i8*)(intptr_t)(ws+3224) = p6061; /*n */
	*(i8*)(intptr_t)(ws+3232) = p6060; /*matchbuf */

	i8 v6063 = (i8)(intptr_t)(ws+3224);
	i8 v6064 = *(i8*)(intptr_t)v6063;
	i8 v6065 = *(i8*)(intptr_t)v6064;
	i8 v6066 = v6065+(+58);
	i1 v6067 = *(i1*)(intptr_t)v6066;
	i8 v6068 = (i8)(intptr_t)(ws+3232);
	i8 v6069 = *(i8*)(intptr_t)v6068;
	*(i1*)(intptr_t)v6069 = v6067;

	i8 v6070 = (i8)(intptr_t)(ws+3224);
	i8 v6071 = *(i8*)(intptr_t)v6070;
	i8 v6072 = *(i8*)(intptr_t)v6071;
	i8 v6073 = v6072+(+24);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i8 v6075 = (i8)(intptr_t)(ws+3224);
	i8 v6076 = *(i8*)(intptr_t)v6075;
	i8 v6077 = v6076+(+8);
	*(i8*)(intptr_t)v6077 = v6074;

	i8 v6078 = (i8)(intptr_t)(ws+3224);
	i8 v6079 = *(i8*)(intptr_t)v6078;
	i8 v6080 = v6079+(+8);
	i8 v6081 = *(i8*)(intptr_t)v6080;
	i8 v6082 = (i8)+0;
	if (v6081==v6082) goto c02_0551; else goto c02_0550;

c02_0550:;

	i8 v6083 = (i8)(intptr_t)(ws+3224);
	i8 v6084 = *(i8*)(intptr_t)v6083;
	i8 v6085 = v6084+(+8);
	i8 v6086 = *(i8*)(intptr_t)v6085;
	i8 v6087 = v6086+(+58);
	i1 v6088 = *(i1*)(intptr_t)v6087;
	i8 v6089 = (i8)(intptr_t)(ws+3232);
	i8 v6090 = *(i8*)(intptr_t)v6089;
	i8 v6091 = v6090+(+1);
	*(i1*)(intptr_t)v6091 = v6088;

	goto c02_054d;

c02_0551:;

c02_054d:;

	i8 v6092 = (i8)(intptr_t)(ws+3224);
	i8 v6093 = *(i8*)(intptr_t)v6092;
	i8 v6094 = *(i8*)(intptr_t)v6093;
	i8 v6095 = v6094+(+32);
	i8 v6096 = *(i8*)(intptr_t)v6095;
	i8 v6097 = (i8)(intptr_t)(ws+3224);
	i8 v6098 = *(i8*)(intptr_t)v6097;
	i8 v6099 = v6098+(+16);
	*(i8*)(intptr_t)v6099 = v6096;

	i8 v6100 = (i8)(intptr_t)(ws+3224);
	i8 v6101 = *(i8*)(intptr_t)v6100;
	i8 v6102 = v6101+(+16);
	i8 v6103 = *(i8*)(intptr_t)v6102;
	i8 v6104 = (i8)+0;
	if (v6103==v6104) goto c02_0556; else goto c02_0555;

c02_0555:;

	i8 v6105 = (i8)(intptr_t)(ws+3224);
	i8 v6106 = *(i8*)(intptr_t)v6105;
	i8 v6107 = v6106+(+16);
	i8 v6108 = *(i8*)(intptr_t)v6107;
	i8 v6109 = v6108+(+58);
	i1 v6110 = *(i1*)(intptr_t)v6109;
	i8 v6111 = (i8)(intptr_t)(ws+3232);
	i8 v6112 = *(i8*)(intptr_t)v6111;
	i8 v6113 = v6112+(+2);
	*(i1*)(intptr_t)v6113 = v6110;

	goto c02_0552;

c02_0556:;

c02_0552:;

endsub:;
}

// IsStackedRegister workspace at ws+3184 length ws+16
void f420_IsStackedRegister(i1* p6114 /* result */, i1 p6115 /* regid */) {
	*(i1*)(intptr_t)(ws+3184) = p6115; /*regid */

	i1 v6116 = (i1)+0;
	i8 v6117 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v6117 = v6116;

	i8 v6118 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v6119 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6119 = v6118;

c02_0559:;

	i8 v6120 = (i8)(intptr_t)(ws+3192);
	i8 v6121 = *(i8*)(intptr_t)v6120;
	i8 v6122 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v6121==v6122) goto c02_055c; else goto c02_055b;

c02_055b:;

	i8 v6123 = (i8)(intptr_t)(ws+3192);
	i8 v6124 = *(i8*)(intptr_t)v6123;
	i8 v6125 = v6124+(+8);
	i1 v6126 = *(i1*)(intptr_t)v6125;
	i8 v6127 = (i8)(intptr_t)(ws+3184);
	i1 v6128 = *(i1*)(intptr_t)v6127;
	i1 v6129 = v6126&v6128;
	i1 v6130 = (i1)+0;
	if (v6129==v6130) goto c02_0561; else goto c02_0560;

c02_0560:;

	i8 v6131 = (i8)(intptr_t)(ws+3192);
	i8 v6132 = *(i8*)(intptr_t)v6131;
	i8 v6133 = v6132+(+11);
	i1 v6134 = *(i1*)(intptr_t)v6133;
	i8 v6135 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v6135 = v6134;

	goto endsub;

c02_0561:;

c02_055d:;

	i8 v6136 = (i8)(intptr_t)(ws+3192);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = v6137+(+16);
	i8 v6139 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6139 = v6138;

	goto c02_0559;

c02_055c:;

endsub:;
	*p6114 = *(i1*)(intptr_t)(ws+3185);
}

// CalculateBlockedRegisters workspace at ws+3184 length ws+17
void f421_CalculateBlockedRegisters(i1* p6140 /* blocked */, i8 p6141 /* last */, i8 p6142 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p6142; /*insn */
	*(i8*)(intptr_t)(ws+3192) = p6141; /*last */

	i1 v6143 = (i1)+0;
	i8 v6144 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6144 = v6143;

	i8 v6145 = (i8)(intptr_t)(ws+3184);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = *(i8*)(intptr_t)v6146;
	i8 v6148 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6148 = v6147;

c02_0564:;

	i8 v6149 = (i8)(intptr_t)(ws+3184);
	i8 v6150 = *(i8*)(intptr_t)v6149;
	i8 v6151 = (i8)(intptr_t)(ws+3192);
	i8 v6152 = *(i8*)(intptr_t)v6151;
	if (v6150==v6152) goto c02_0567; else goto c02_0566;

c02_0566:;

	i8 v6153 = (i8)(intptr_t)(ws+3200);
	i1 v6154 = *(i1*)(intptr_t)v6153;
	i8 v6155 = (i8)(intptr_t)(ws+3184);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	i8 v6157 = v6156+(+42);
	i1 v6158 = *(i1*)(intptr_t)v6157;
	i1 v6159 = v6154|v6158;
	i8 v6160 = (i8)(intptr_t)(ws+3184);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = v6161+(+43);
	i1 v6163 = *(i1*)(intptr_t)v6162;
	i1 v6164 = v6159|v6163;
	i8 v6165 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v6165 = v6164;

	i8 v6166 = (i8)(intptr_t)(ws+3184);
	i8 v6167 = *(i8*)(intptr_t)v6166;
	i8 v6168 = (i8)(intptr_t)(ws+3192);
	i8 v6169 = *(i8*)(intptr_t)v6168;
	if (v6167==v6169) goto c02_056b; else goto c02_056c;

c02_056b:;

	goto c02_0567;

c02_056c:;

c02_0568:;

	i8 v6170 = (i8)(intptr_t)(ws+3184);
	i8 v6171 = *(i8*)(intptr_t)v6170;
	i8 v6172 = *(i8*)(intptr_t)v6171;
	i8 v6173 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6173 = v6172;

	goto c02_0564;

c02_0567:;

endsub:;
	*p6140 = *(i1*)(intptr_t)(ws+3200);
}

// BlockRegisters workspace at ws+3184 length ws+17
void f422_BlockRegisters(i1 p6174 /* blocked */, i8 p6175 /* last */, i8 p6176 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p6176; /*insn */
	*(i8*)(intptr_t)(ws+3192) = p6175; /*last */
	*(i1*)(intptr_t)(ws+3200) = p6174; /*blocked */

	i8 v6177 = (i8)(intptr_t)(ws+3184);
	i8 v6178 = *(i8*)(intptr_t)v6177;
	i8 v6179 = *(i8*)(intptr_t)v6178;
	i8 v6180 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6180 = v6179;

c02_056f:;

	i8 v6181 = (i8)(intptr_t)(ws+3184);
	i8 v6182 = *(i8*)(intptr_t)v6181;
	i8 v6183 = (i8)(intptr_t)(ws+3192);
	i8 v6184 = *(i8*)(intptr_t)v6183;
	if (v6182==v6184) goto c02_0572; else goto c02_0571;

c02_0571:;

	i8 v6185 = (i8)(intptr_t)(ws+3184);
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+42);
	i1 v6188 = *(i1*)(intptr_t)v6187;
	i8 v6189 = (i8)(intptr_t)(ws+3200);
	i1 v6190 = *(i1*)(intptr_t)v6189;
	i1 v6191 = v6188|v6190;
	i8 v6192 = (i8)(intptr_t)(ws+3184);
	i8 v6193 = *(i8*)(intptr_t)v6192;
	i8 v6194 = v6193+(+42);
	*(i1*)(intptr_t)v6194 = v6191;

	i8 v6195 = (i8)(intptr_t)(ws+3184);
	i8 v6196 = *(i8*)(intptr_t)v6195;
	i8 v6197 = v6196+(+43);
	i1 v6198 = *(i1*)(intptr_t)v6197;
	i8 v6199 = (i8)(intptr_t)(ws+3200);
	i1 v6200 = *(i1*)(intptr_t)v6199;
	i1 v6201 = v6198|v6200;
	i8 v6202 = (i8)(intptr_t)(ws+3184);
	i8 v6203 = *(i8*)(intptr_t)v6202;
	i8 v6204 = v6203+(+43);
	*(i1*)(intptr_t)v6204 = v6201;

	i8 v6205 = (i8)(intptr_t)(ws+3184);
	i8 v6206 = *(i8*)(intptr_t)v6205;
	i8 v6207 = (i8)(intptr_t)(ws+3192);
	i8 v6208 = *(i8*)(intptr_t)v6207;
	if (v6206==v6208) goto c02_0576; else goto c02_0577;

c02_0576:;

	goto c02_0572;

c02_0577:;

c02_0573:;

	i8 v6209 = (i8)(intptr_t)(ws+3184);
	i8 v6210 = *(i8*)(intptr_t)v6209;
	i8 v6211 = *(i8*)(intptr_t)v6210;
	i8 v6212 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6212 = v6211;

	goto c02_056f;

c02_0572:;

endsub:;
}
const i1 c02_s0162[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };

// CreateSpill workspace at ws+3184 length ws+24
void f423_CreateSpill(i1 p6213 /* dest */, i1 p6214 /* src */, i8 p6215 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p6215; /*insn */
	*(i1*)(intptr_t)(ws+3192) = p6214; /*src */
	*(i1*)(intptr_t)(ws+3193) = p6213; /*dest */

	i8 v6216 = (i8)(intptr_t)(ws+3184);
	i8 v6217 = *(i8*)(intptr_t)v6216;
	i8 v6218 = v6217+(+60);
	i1 v6219 = *(i1*)(intptr_t)v6218;
	i8 v6220 = (i8)(intptr_t)(ws+3194);
	*(i1*)(intptr_t)v6220 = v6219;

	i8 v6221 = (i8)(intptr_t)(ws+3194);
	i1 v6222 = *(i1*)(intptr_t)v6221;
	i1 v6223 = (i1)+5;
	if (v6222==v6223) goto c02_057b; else goto c02_057c;

c02_057b:;

	i8 v6224 = (i8)(intptr_t)c02_s0162;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v6224);

	goto c02_0578;

c02_057c:;

c02_0578:;

	i8 v6225 = (i8)(intptr_t)(ws+3184);
	i8 v6226 = *(i8*)(intptr_t)v6225;
	i8 v6227 = v6226+(+44);
	i8 v6228 = (i8)(intptr_t)(ws+3194);
	i1 v6229 = *(i1*)(intptr_t)v6228;
	i8 v6230 = v6229;
	i1 v6231 = (i1)+1;
	i8 v6232 = ((i8)v6230)<<v6231;
	i8 v6233 = v6227+v6232;
	i8 v6234 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6234 = v6233;

	i8 v6235 = (i8)(intptr_t)(ws+3192);
	i1 v6236 = *(i1*)(intptr_t)v6235;
	i8 v6237 = (i8)(intptr_t)(ws+3200);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	*(i1*)(intptr_t)v6238 = v6236;

	i8 v6239 = (i8)(intptr_t)(ws+3193);
	i1 v6240 = *(i1*)(intptr_t)v6239;
	i8 v6241 = (i8)(intptr_t)(ws+3200);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = v6242+(+1);
	*(i1*)(intptr_t)v6243 = v6240;

	i8 v6244 = (i8)(intptr_t)(ws+3194);
	i1 v6245 = *(i1*)(intptr_t)v6244;
	i1 v6246 = v6245+(+1);
	i8 v6247 = (i8)(intptr_t)(ws+3184);
	i8 v6248 = *(i8*)(intptr_t)v6247;
	i8 v6249 = v6248+(+60);
	*(i1*)(intptr_t)v6249 = v6246;

endsub:;
}
const i1 c02_s0163[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };

// CreateReload workspace at ws+3184 length ws+24
void f424_CreateReload(i1 p6250 /* dest */, i1 p6251 /* src */, i8 p6252 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p6252; /*insn */
	*(i1*)(intptr_t)(ws+3192) = p6251; /*src */
	*(i1*)(intptr_t)(ws+3193) = p6250; /*dest */

	i8 v6253 = (i8)(intptr_t)(ws+3184);
	i8 v6254 = *(i8*)(intptr_t)v6253;
	i8 v6255 = v6254+(+61);
	i1 v6256 = *(i1*)(intptr_t)v6255;
	i8 v6257 = (i8)(intptr_t)(ws+3194);
	*(i1*)(intptr_t)v6257 = v6256;

	i8 v6258 = (i8)(intptr_t)(ws+3194);
	i1 v6259 = *(i1*)(intptr_t)v6258;
	i1 v6260 = (i1)+5;
	if (v6259==v6260) goto c02_0580; else goto c02_0581;

c02_0580:;

	i8 v6261 = (i8)(intptr_t)c02_s0163;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v6261);

	goto c02_057d;

c02_0581:;

c02_057d:;

	i8 v6262 = (i8)(intptr_t)(ws+3184);
	i8 v6263 = *(i8*)(intptr_t)v6262;
	i8 v6264 = v6263+(+52);
	i8 v6265 = (i8)(intptr_t)(ws+3194);
	i1 v6266 = *(i1*)(intptr_t)v6265;
	i8 v6267 = v6266;
	i1 v6268 = (i1)+1;
	i8 v6269 = ((i8)v6267)<<v6268;
	i8 v6270 = v6264+v6269;
	i8 v6271 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6271 = v6270;

	i8 v6272 = (i8)(intptr_t)(ws+3192);
	i1 v6273 = *(i1*)(intptr_t)v6272;
	i8 v6274 = (i8)(intptr_t)(ws+3200);
	i8 v6275 = *(i8*)(intptr_t)v6274;
	*(i1*)(intptr_t)v6275 = v6273;

	i8 v6276 = (i8)(intptr_t)(ws+3193);
	i1 v6277 = *(i1*)(intptr_t)v6276;
	i8 v6278 = (i8)(intptr_t)(ws+3200);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = v6279+(+1);
	*(i1*)(intptr_t)v6280 = v6277;

	i8 v6281 = (i8)(intptr_t)(ws+3194);
	i1 v6282 = *(i1*)(intptr_t)v6281;
	i1 v6283 = v6282+(+1);
	i8 v6284 = (i8)(intptr_t)(ws+3184);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	i8 v6286 = v6285+(+61);
	*(i1*)(intptr_t)v6286 = v6283;

endsub:;
}

// ShuffleRegisters workspace at ws+3168 length ws+25
void f425_ShuffleRegisters(i8 p6287 /* moves */) {
	*(i8*)(intptr_t)(ws+3168) = p6287; /*moves */

	i1 v6288 = (i1)+0;
	i8 v6289 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v6289 = v6288;

	i1 v6290 = (i1)+0;
	i8 v6291 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6291 = v6290;

	i8 v6292 = (i8)(intptr_t)(ws+3168);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	i8 v6294 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6294 = v6293;

	i1 v6295 = (i1)+4;
	i8 v6296 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6296 = v6295;

c02_0584:;

	i8 v6297 = (i8)(intptr_t)(ws+3192);
	i1 v6298 = *(i1*)(intptr_t)v6297;
	i1 v6299 = (i1)+0;
	if (v6298==v6299) goto c02_0587; else goto c02_0586;

c02_0586:;

	i8 v6300 = (i8)(intptr_t)(ws+3176);
	i1 v6301 = *(i1*)(intptr_t)v6300;
	i8 v6302 = (i8)(intptr_t)(ws+3184);
	i8 v6303 = *(i8*)(intptr_t)v6302;
	i8 v6304 = v6303+(+1);
	i1 v6305 = *(i1*)(intptr_t)v6304;
	i1 v6306 = v6301|v6305;
	i8 v6307 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v6307 = v6306;

	i8 v6308 = (i8)(intptr_t)(ws+3177);
	i1 v6309 = *(i1*)(intptr_t)v6308;
	i8 v6310 = (i8)(intptr_t)(ws+3184);
	i8 v6311 = *(i8*)(intptr_t)v6310;
	i1 v6312 = *(i1*)(intptr_t)v6311;
	i1 v6313 = v6309|v6312;
	i8 v6314 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6314 = v6313;

	i8 v6315 = (i8)(intptr_t)(ws+3192);
	i1 v6316 = *(i1*)(intptr_t)v6315;
	i1 v6317 = v6316+(-1);
	i8 v6318 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6318 = v6317;

	i8 v6319 = (i8)(intptr_t)(ws+3184);
	i8 v6320 = *(i8*)(intptr_t)v6319;
	i8 v6321 = v6320+(+2);
	i8 v6322 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6322 = v6321;

	goto c02_0584;

c02_0587:;

c02_0588:;

	i8 v6323 = (i8)(intptr_t)(ws+3168);
	i8 v6324 = *(i8*)(intptr_t)v6323;
	i8 v6325 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6325 = v6324;

	i1 v6326 = (i1)+4;
	i8 v6327 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6327 = v6326;

c02_058c:;

	i8 v6328 = (i8)(intptr_t)(ws+3192);
	i1 v6329 = *(i1*)(intptr_t)v6328;
	i1 v6330 = (i1)+0;
	if (v6329==v6330) goto c02_058f; else goto c02_058e;

c02_058e:;

	i8 v6331 = (i8)(intptr_t)(ws+3184);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i1 v6333 = *(i1*)(intptr_t)v6332;
	i1 v6334 = (i1)+0;
	if (v6333==v6334) goto c02_0596; else goto c02_0597;

c02_0597:;

	i8 v6335 = (i8)(intptr_t)(ws+3184);
	i8 v6336 = *(i8*)(intptr_t)v6335;
	i8 v6337 = v6336+(+1);
	i1 v6338 = *(i1*)(intptr_t)v6337;
	i1 v6339 = (i1)+0;
	if (v6338==v6339) goto c02_0595; else goto c02_0596;

c02_0595:;

	goto c02_058f;

c02_0596:;

c02_0590:;

	i8 v6340 = (i8)(intptr_t)(ws+3184);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = v6341+(+2);
	i8 v6343 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6343 = v6342;

	i8 v6344 = (i8)(intptr_t)(ws+3192);
	i1 v6345 = *(i1*)(intptr_t)v6344;
	i1 v6346 = v6345+(-1);
	i8 v6347 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6347 = v6346;

	goto c02_058c;

c02_058f:;

	i8 v6348 = (i8)(intptr_t)(ws+3192);
	i1 v6349 = *(i1*)(intptr_t)v6348;
	i1 v6350 = (i1)+0;
	if (v6349==v6350) goto c02_059c; else goto c02_059b;

c02_059b:;

	i8 v6351 = (i8)(intptr_t)(ws+3184);
	i8 v6352 = *(i8*)(intptr_t)v6351;
	i1 v6353 = *(i1*)(intptr_t)v6352;
	i1 v6354 = (i1)+0;

	void f227_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f227_ArchEmitMove(v6354, v6353);

	i8 v6355 = (i8)(intptr_t)(ws+3177);
	i1 v6356 = *(i1*)(intptr_t)v6355;
	i8 v6357 = (i8)(intptr_t)(ws+3184);
	i8 v6358 = *(i8*)(intptr_t)v6357;
	i1 v6359 = *(i1*)(intptr_t)v6358;
	i1 v6360 = ~v6359;
	i1 v6361 = v6356&v6360;
	i8 v6362 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6362 = v6361;

	i1 v6363 = (i1)+0;
	i8 v6364 = (i8)(intptr_t)(ws+3184);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	*(i1*)(intptr_t)v6365 = v6363;

	goto c02_0588;

c02_059c:;

c02_0598:;

	i8 v6366 = (i8)(intptr_t)(ws+3168);
	i8 v6367 = *(i8*)(intptr_t)v6366;
	i8 v6368 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6368 = v6367;

	i1 v6369 = (i1)+4;
	i8 v6370 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6370 = v6369;

c02_059f:;

	i8 v6371 = (i8)(intptr_t)(ws+3192);
	i1 v6372 = *(i1*)(intptr_t)v6371;
	i1 v6373 = (i1)+0;
	if (v6372==v6373) goto c02_05a2; else goto c02_05a1;

c02_05a1:;

	i8 v6374 = (i8)(intptr_t)(ws+3184);
	i8 v6375 = *(i8*)(intptr_t)v6374;
	i1 v6376 = *(i1*)(intptr_t)v6375;
	i1 v6377 = (i1)+0;
	if (v6376==v6377) goto c02_05ab; else goto c02_05ad;

c02_05ad:;

	i8 v6378 = (i8)(intptr_t)(ws+3184);
	i8 v6379 = *(i8*)(intptr_t)v6378;
	i8 v6380 = v6379+(+1);
	i1 v6381 = *(i1*)(intptr_t)v6380;
	i1 v6382 = (i1)+0;
	if (v6381==v6382) goto c02_05ab; else goto c02_05ac;

c02_05ac:;

	i8 v6383 = (i8)(intptr_t)(ws+3184);
	i8 v6384 = *(i8*)(intptr_t)v6383;
	i8 v6385 = v6384+(+1);
	i1 v6386 = *(i1*)(intptr_t)v6385;
	i8 v6387 = (i8)(intptr_t)(ws+3177);
	i1 v6388 = *(i1*)(intptr_t)v6387;
	i1 v6389 = v6386&v6388;
	i1 v6390 = (i1)+0;
	if (v6389==v6390) goto c02_05aa; else goto c02_05ab;

c02_05aa:;

	goto c02_05a2;

c02_05ab:;

c02_05a3:;

	i8 v6391 = (i8)(intptr_t)(ws+3184);
	i8 v6392 = *(i8*)(intptr_t)v6391;
	i8 v6393 = v6392+(+2);
	i8 v6394 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6394 = v6393;

	i8 v6395 = (i8)(intptr_t)(ws+3192);
	i1 v6396 = *(i1*)(intptr_t)v6395;
	i1 v6397 = v6396+(-1);
	i8 v6398 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6398 = v6397;

	goto c02_059f;

c02_05a2:;

	i8 v6399 = (i8)(intptr_t)(ws+3192);
	i1 v6400 = *(i1*)(intptr_t)v6399;
	i1 v6401 = (i1)+0;
	if (v6400==v6401) goto c02_05b2; else goto c02_05b1;

c02_05b1:;

	i8 v6402 = (i8)(intptr_t)(ws+3184);
	i8 v6403 = *(i8*)(intptr_t)v6402;
	i1 v6404 = *(i1*)(intptr_t)v6403;
	i8 v6405 = (i8)(intptr_t)(ws+3184);
	i8 v6406 = *(i8*)(intptr_t)v6405;
	i8 v6407 = v6406+(+1);
	i1 v6408 = *(i1*)(intptr_t)v6407;

	void f227_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f227_ArchEmitMove(v6408, v6404);

	i8 v6409 = (i8)(intptr_t)(ws+3177);
	i1 v6410 = *(i1*)(intptr_t)v6409;
	i8 v6411 = (i8)(intptr_t)(ws+3184);
	i8 v6412 = *(i8*)(intptr_t)v6411;
	i1 v6413 = *(i1*)(intptr_t)v6412;
	i1 v6414 = ~v6413;
	i1 v6415 = v6410&v6414;
	i8 v6416 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6416 = v6415;

	i8 v6417 = (i8)(intptr_t)(ws+3176);
	i1 v6418 = *(i1*)(intptr_t)v6417;
	i8 v6419 = (i8)(intptr_t)(ws+3184);
	i8 v6420 = *(i8*)(intptr_t)v6419;
	i8 v6421 = v6420+(+1);
	i1 v6422 = *(i1*)(intptr_t)v6421;
	i1 v6423 = ~v6422;
	i1 v6424 = v6418&v6423;
	i8 v6425 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v6425 = v6424;

	i1 v6426 = (i1)+0;
	i8 v6427 = (i8)(intptr_t)(ws+3184);
	i8 v6428 = *(i8*)(intptr_t)v6427;
	*(i1*)(intptr_t)v6428 = v6426;

	i1 v6429 = (i1)+0;
	i8 v6430 = (i8)(intptr_t)(ws+3184);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = v6431+(+1);
	*(i1*)(intptr_t)v6432 = v6429;

	goto c02_0588;

c02_05b2:;

c02_05ae:;

	i8 v6433 = (i8)(intptr_t)(ws+3168);
	i8 v6434 = *(i8*)(intptr_t)v6433;
	i8 v6435 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6435 = v6434;

	i1 v6436 = (i1)+4;
	i8 v6437 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6437 = v6436;

c02_05b5:;

	i8 v6438 = (i8)(intptr_t)(ws+3192);
	i1 v6439 = *(i1*)(intptr_t)v6438;
	i1 v6440 = (i1)+0;
	if (v6439==v6440) goto c02_05b8; else goto c02_05b7;

c02_05b7:;

	i8 v6441 = (i8)(intptr_t)(ws+3184);
	i8 v6442 = *(i8*)(intptr_t)v6441;
	i1 v6443 = *(i1*)(intptr_t)v6442;
	i1 v6444 = (i1)+0;
	if (v6443==v6444) goto c02_05c0; else goto c02_05bf;

c02_05c0:;

	i8 v6445 = (i8)(intptr_t)(ws+3184);
	i8 v6446 = *(i8*)(intptr_t)v6445;
	i8 v6447 = v6446+(+1);
	i1 v6448 = *(i1*)(intptr_t)v6447;
	i1 v6449 = (i1)+0;
	if (v6448==v6449) goto c02_05bf; else goto c02_05be;

c02_05be:;

	goto c02_05b8;

c02_05bf:;

c02_05b9:;

	i8 v6450 = (i8)(intptr_t)(ws+3184);
	i8 v6451 = *(i8*)(intptr_t)v6450;
	i8 v6452 = v6451+(+2);
	i8 v6453 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6453 = v6452;

	i8 v6454 = (i8)(intptr_t)(ws+3192);
	i1 v6455 = *(i1*)(intptr_t)v6454;
	i1 v6456 = v6455+(-1);
	i8 v6457 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6457 = v6456;

	goto c02_05b5;

c02_05b8:;

	i8 v6458 = (i8)(intptr_t)(ws+3192);
	i1 v6459 = *(i1*)(intptr_t)v6458;
	i1 v6460 = (i1)+0;
	if (v6459==v6460) goto c02_05c5; else goto c02_05c4;

c02_05c4:;

	i1 v6461 = (i1)+0;
	i8 v6462 = (i8)(intptr_t)(ws+3184);
	i8 v6463 = *(i8*)(intptr_t)v6462;
	i8 v6464 = v6463+(+1);
	i1 v6465 = *(i1*)(intptr_t)v6464;

	void f227_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f227_ArchEmitMove(v6465, v6461);

	i8 v6466 = (i8)(intptr_t)(ws+3176);
	i1 v6467 = *(i1*)(intptr_t)v6466;
	i8 v6468 = (i8)(intptr_t)(ws+3184);
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = v6469+(+1);
	i1 v6471 = *(i1*)(intptr_t)v6470;
	i1 v6472 = ~v6471;
	i1 v6473 = v6467&v6472;
	i8 v6474 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v6474 = v6473;

	i1 v6475 = (i1)+0;
	i8 v6476 = (i8)(intptr_t)(ws+3184);
	i8 v6477 = *(i8*)(intptr_t)v6476;
	i8 v6478 = v6477+(+1);
	*(i1*)(intptr_t)v6478 = v6475;

	goto c02_0588;

c02_05c5:;

c02_05c1:;

	i8 v6479 = (i8)(intptr_t)(ws+3168);
	i8 v6480 = *(i8*)(intptr_t)v6479;
	i8 v6481 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6481 = v6480;

	i1 v6482 = (i1)+4;
	i8 v6483 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6483 = v6482;

c02_05c8:;

	i8 v6484 = (i8)(intptr_t)(ws+3192);
	i1 v6485 = *(i1*)(intptr_t)v6484;
	i1 v6486 = (i1)+0;
	if (v6485==v6486) goto c02_05cb; else goto c02_05ca;

c02_05ca:;

	i8 v6487 = (i8)(intptr_t)(ws+3184);
	i8 v6488 = *(i8*)(intptr_t)v6487;
	i1 v6489 = *(i1*)(intptr_t)v6488;
	i1 v6490 = (i1)+0;
	if (v6489==v6490) goto c02_05d2; else goto c02_05d3;

c02_05d3:;

	i8 v6491 = (i8)(intptr_t)(ws+3184);
	i8 v6492 = *(i8*)(intptr_t)v6491;
	i8 v6493 = v6492+(+1);
	i1 v6494 = *(i1*)(intptr_t)v6493;
	i1 v6495 = (i1)+0;
	if (v6494==v6495) goto c02_05d2; else goto c02_05d1;

c02_05d1:;

	goto c02_05cb;

c02_05d2:;

c02_05cc:;

	i8 v6496 = (i8)(intptr_t)(ws+3184);
	i8 v6497 = *(i8*)(intptr_t)v6496;
	i8 v6498 = v6497+(+2);
	i8 v6499 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v6499 = v6498;

	i8 v6500 = (i8)(intptr_t)(ws+3192);
	i1 v6501 = *(i1*)(intptr_t)v6500;
	i1 v6502 = v6501+(-1);
	i8 v6503 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v6503 = v6502;

	goto c02_05c8;

c02_05cb:;

	i8 v6504 = (i8)(intptr_t)(ws+3192);
	i1 v6505 = *(i1*)(intptr_t)v6504;
	i1 v6506 = (i1)+0;
	if (v6505==v6506) goto c02_05d8; else goto c02_05d7;

c02_05d7:;

	i8 v6507 = (i8)(intptr_t)(ws+3184);
	i8 v6508 = *(i8*)(intptr_t)v6507;
	i1 v6509 = *(i1*)(intptr_t)v6508;
	i1 v6510 = (i1)+0;

	void f227_ArchEmitMove(i1 /* dest */, i1 /* src */);
	f227_ArchEmitMove(v6510, v6509);

	i8 v6511 = (i8)(intptr_t)(ws+3177);
	i1 v6512 = *(i1*)(intptr_t)v6511;
	i8 v6513 = (i8)(intptr_t)(ws+3184);
	i8 v6514 = *(i8*)(intptr_t)v6513;
	i1 v6515 = *(i1*)(intptr_t)v6514;
	i1 v6516 = ~v6515;
	i1 v6517 = v6512&v6516;
	i8 v6518 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v6518 = v6517;

	i1 v6519 = (i1)+0;
	i8 v6520 = (i8)(intptr_t)(ws+3184);
	i8 v6521 = *(i8*)(intptr_t)v6520;
	*(i1*)(intptr_t)v6521 = v6519;

	goto c02_0588;

c02_05d8:;

c02_05d4:;

	goto c02_0589;

c02_0589:;

endsub:;
}

// PrintNodes workspace at ws+3184 length ws+24
void f426_PrintNodes(i8 p6522 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3184) = p6522; /*rootnode */

	i8 v6523 = (i8)(intptr_t)(ws+216);
	i8 v6524 = *(i8*)(intptr_t)v6523;
	i8 v6525 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6525 = v6524;

	i8 v6526 = (i8)(intptr_t)(ws+3184);
	i8 v6527 = *(i8*)(intptr_t)v6526;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v6527);

c02_05db:;

	i8 v6528 = (i8)(intptr_t)(ws+216);
	i8 v6529 = *(i8*)(intptr_t)v6528;
	i8 v6530 = (i8)(intptr_t)(ws+3192);
	i8 v6531 = *(i8*)(intptr_t)v6530;
	if (v6529==v6531) goto c02_05de; else goto c02_05dd;

c02_05dd:;


	void f55_NextNode(i8* /* node */);
	i8 v6532;
	f55_NextNode(&v6532);
	i8 v6533 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6533 = v6532;

	i8 v6534 = (i8)(intptr_t)(ws+3200);
	i8 v6535 = *(i8*)(intptr_t)v6534;
	i8 v6536 = (i8)+0;
	if (v6535==v6536) goto c02_05e2; else goto c02_05e3;

c02_05e2:;

	goto c02_05de;

c02_05e3:;

c02_05df:;

	i8 v6537 = (i8)(intptr_t)(ws+3200);
	i8 v6538 = *(i8*)(intptr_t)v6537;
	i4 v6539 = v6538;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6539);

	i1 v6540 = (i1)+32;

	void f8_print_char(i1 /* c */);
	f8_print_char(v6540);

	i8 v6541 = (i8)(intptr_t)(ws+3200);
	i8 v6542 = *(i8*)(intptr_t)v6541;
	i8 v6543 = v6542+(+58);
	i1 v6544 = *(i1*)(intptr_t)v6543;

	void f17_print_i8(i1 /* value */);
	f17_print_i8(v6544);

	i1 v6545 = (i1)+32;

	void f8_print_char(i1 /* c */);
	f8_print_char(v6545);

	i8 v6546 = (i8)(intptr_t)(ws+3200);
	i8 v6547 = *(i8*)(intptr_t)v6546;
	i8 v6548 = v6547+(+56);
	i1 v6549 = *(i1*)(intptr_t)v6548;
	i2 v6550 = v6549;

	void f19_print_hex_i16(i2 /* value */);
	f19_print_hex_i16(v6550);

	i1 v6551 = (i1)+32;

	void f8_print_char(i1 /* c */);
	f8_print_char(v6551);

	i8 v6552 = (i8)(intptr_t)(ws+3200);
	i8 v6553 = *(i8*)(intptr_t)v6552;
	i8 v6554 = v6553+(+57);
	i1 v6555 = *(i1*)(intptr_t)v6554;
	i2 v6556 = v6555;

	void f19_print_hex_i16(i2 /* value */);
	f19_print_hex_i16(v6556);

	i1 v6557 = (i1)+32;

	void f8_print_char(i1 /* c */);
	f8_print_char(v6557);

	i8 v6558 = (i8)(intptr_t)(ws+3200);
	i8 v6559 = *(i8*)(intptr_t)v6558;
	i8 v6560 = v6559+(+24);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	i4 v6562 = v6561;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6562);

	i1 v6563 = (i1)+32;

	void f8_print_char(i1 /* c */);
	f8_print_char(v6563);

	i8 v6564 = (i8)(intptr_t)(ws+3200);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	i8 v6566 = v6565+(+32);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	i4 v6568 = v6567;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6568);


	void f12_print_nl(void);
	f12_print_nl();

	goto c02_05db;

c02_05de:;

endsub:;
}

// RewindRulePointers workspace at ws+3216 length ws+0
void f429_RewindRulePointers(void) {

	i8 v6609 = (i8)(intptr_t)(ws+3160);
	i8 v6610 = (i8)+3;

	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	f22_MemZero(v6610, v6609);

	i8 v6611 = (i8)(intptr_t)(ws+3168);
	i8 v6612 = (i8)+24;

	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	f22_MemZero(v6612, v6611);

	i8 v6613 = (i8)(intptr_t)(ws+3136);
	i8 v6614 = *(i8*)(intptr_t)v6613;
	i8 v6615 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v6615 = v6614;

	i8 v6616 = (i8)(intptr_t)(ws+3128);
	i8 v6617 = *(i8*)(intptr_t)v6616;
	i8 v6618 = (i8)(intptr_t)(ws+3168);
	i8 v6619 = (i8)(intptr_t)(ws+3160);

	void f419_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);
	f419_PopulateMatchBuffer(v6619, v6618, v6617);

	i1 v6620 = (i1)+255;
	i8 v6621 = (i8)(intptr_t)(ws+3144);
	*(i1*)(intptr_t)v6621 = v6620;

	i8 v6622 = (i8)(intptr_t)(((i1*)c02_a54a+0));
	i8 v6623 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6623 = v6622;

	i8 v6624 = (i8)(intptr_t)(((i1*)c02_a54b+0));
	i8 v6625 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6625 = v6624;

	i8 v6626 = (i8)(intptr_t)(((i1*)c02_a54c-7));
	i8 v6627 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v6627 = v6626;

endsub:;
}

// TestRule workspace at ws+3216 length ws+27
void f430_TestRule(i1* p6628 /* result */) {

	i1 v6629 = (i1)+0;
	i8 v6630 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v6630 = v6629;

	i8 v6631 = (i8)(intptr_t)(ws+3152);
	i8 v6632 = *(i8*)(intptr_t)v6631;
	i8 v6633 = v6632+(+1);
	i1 v6634 = *(i1*)(intptr_t)v6633;
	i1 v6635 = (i1)+0;
	if (v6634==v6635) goto c02_05f3; else goto c02_05f2;

c02_05f2:;

	i8 v6636 = (i8)(intptr_t)(ws+3136);
	i8 v6637 = *(i8*)(intptr_t)v6636;
	i8 v6638 = v6637+(+56);
	i1 v6639 = *(i1*)(intptr_t)v6638;
	i8 v6640 = (i8)(intptr_t)(ws+3152);
	i8 v6641 = *(i8*)(intptr_t)v6640;
	i8 v6642 = v6641+(+1);
	i1 v6643 = *(i1*)(intptr_t)v6642;
	i1 v6644 = v6639&v6643;
	i1 v6645 = (i1)+0;
	if (v6644==v6645) goto c02_05f7; else goto c02_05f8;

c02_05f7:;

	goto endsub;

c02_05f8:;

c02_05f4:;

	goto c02_05ef;

c02_05f3:;

	i8 v6646 = (i8)(intptr_t)(ws+3136);
	i8 v6647 = *(i8*)(intptr_t)v6646;
	i8 v6648 = v6647+(+56);
	i1 v6649 = *(i1*)(intptr_t)v6648;
	i1 v6650 = (i1)+0;
	if (v6649==v6650) goto c02_05fd; else goto c02_05fc;

c02_05fc:;

	goto endsub;

c02_05fd:;

c02_05f9:;

c02_05ef:;

	i8 v6651 = (i8)(intptr_t)(ws+3160);
	i8 v6652 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6652 = v6651;

	i8 v6653 = (i8)(intptr_t)(ws+3192);
	i8 v6654 = *(i8*)(intptr_t)v6653;
	i8 v6655 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v6655 = v6654;

	i8 v6656 = (i8)(intptr_t)(ws+3152);
	i8 v6657 = *(i8*)(intptr_t)v6656;
	i8 v6658 = v6657+(+4);
	i1 v6659 = *(i1*)(intptr_t)v6658;
	i8 v6660 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v6660 = v6659;

c02_0600:;

	i8 v6661 = (i8)(intptr_t)(ws+3240);
	i1 v6662 = *(i1*)(intptr_t)v6661;
	i1 v6663 = (i1)+0;
	if (v6662==v6663) goto c02_0603; else goto c02_0602;

c02_0602:;

	i8 v6664 = (i8)(intptr_t)(ws+3224);
	i8 v6665 = *(i8*)(intptr_t)v6664;
	i1 v6666 = *(i1*)(intptr_t)v6665;
	i8 v6667 = (i8)(intptr_t)(ws+3241);
	*(i1*)(intptr_t)v6667 = v6666;

	i8 v6668 = (i8)(intptr_t)(ws+3224);
	i8 v6669 = *(i8*)(intptr_t)v6668;
	i8 v6670 = v6669+(+1);
	i8 v6671 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6671 = v6670;

	i8 v6672 = (i8)(intptr_t)(ws+3240);
	i1 v6673 = *(i1*)(intptr_t)v6672;
	i1 v6674 = v6673&(+1);
	i1 v6675 = (i1)+0;
	if (v6674==v6675) goto c02_0608; else goto c02_0607;

c02_0607:;

	i8 v6676 = (i8)(intptr_t)(ws+3232);
	i8 v6677 = *(i8*)(intptr_t)v6676;
	i1 v6678 = *(i1*)(intptr_t)v6677;
	i8 v6679 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v6679 = v6678;

	i8 v6680 = (i8)(intptr_t)(ws+3232);
	i8 v6681 = *(i8*)(intptr_t)v6680;
	i8 v6682 = v6681+(+1);
	i8 v6683 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v6683 = v6682;

	i8 v6684 = (i8)(intptr_t)(ws+3241);
	i1 v6685 = *(i1*)(intptr_t)v6684;
	i8 v6686 = (i8)(intptr_t)(ws+3242);
	i1 v6687 = *(i1*)(intptr_t)v6686;
	if (v6685==v6687) goto c02_060d; else goto c02_060c;

c02_060c:;

	goto endsub;

c02_060d:;

c02_0609:;

	goto c02_0604;

c02_0608:;

c02_0604:;

	i8 v6688 = (i8)(intptr_t)(ws+3240);
	i1 v6689 = *(i1*)(intptr_t)v6688;
	i1 v6690 = (i1)+1;
	i1 v6691 = ((i1)v6689)>>v6690;
	i8 v6692 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v6692 = v6691;

	goto c02_0600;

c02_0603:;

	i8 v6693 = (i8)(intptr_t)(ws+3152);
	i8 v6694 = *(i8*)(intptr_t)v6693;
	i1 v6695 = *(i1*)(intptr_t)v6694;
	i1 v6696 = v6695&(+1);
	i1 v6697 = (i1)+0;
	if (v6696==v6697) goto c02_0614; else goto c02_0615;

c02_0615:;

	i8 v6698 = (i8)(intptr_t)(ws+3144);
	i1 v6699 = *(i1*)(intptr_t)v6698;
	i8 v6700 = (i8)(intptr_t)(ws+3168);

	void f247_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);
	i1 v6701;
	f247_MatchPredicate(&v6701, v6700, v6699);
	i1 v6702 = (i1)+0;
	if (v6701==v6702) goto c02_0613; else goto c02_0614;

c02_0613:;

	goto endsub;

c02_0614:;

c02_060e:;

	i1 v6703 = (i1)+1;
	i8 v6704 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v6704 = v6703;

endsub:;
	*p6628 = *(i1*)(intptr_t)(ws+3216);
}

// ConvertNodeToFallback workspace at ws+3216 length ws+25
void f431_ConvertNodeToFallback(void) {

	i8 v6726 = (i8)(intptr_t)(ws+3136);
	i8 v6727 = *(i8*)(intptr_t)v6726;
	i8 v6728 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v6728 = v6727;

	i8 v6729 = (i8)(intptr_t)(ws+3216);
	i8 v6730 = *(i8*)(intptr_t)v6729;

	void f91_MidFallback(i8* /* m */, i8 /* left */);
	i8 v6731;
	f91_MidFallback(&v6731, v6730);
	i8 v6732 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v6732 = v6731;

	i8 v6733 = (i8)(intptr_t)(ws+3216);
	i8 v6734 = *(i8*)(intptr_t)v6733;
	i8 v6735 = v6734+(+48);
	i8 v6736 = *(i8*)(intptr_t)v6735;
	i8 v6737 = (i8)(intptr_t)(ws+3136);
	i8 v6738 = *(i8*)(intptr_t)v6737;
	i8 v6739 = v6738+(+48);
	*(i8*)(intptr_t)v6739 = v6736;

	i8 v6740 = (i8)(intptr_t)(ws+3136);
	i8 v6741 = *(i8*)(intptr_t)v6740;
	i8 v6742 = v6741+(+48);
	i8 v6743 = *(i8*)(intptr_t)v6742;
	i8 v6744 = v6743+(+16);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	i8 v6746 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6746 = v6745;

	i8 v6747 = (i8)(intptr_t)(ws+3216);
	i8 v6748 = *(i8*)(intptr_t)v6747;
	i8 v6749 = v6748+(+56);
	i1 v6750 = *(i1*)(intptr_t)v6749;
	i8 v6751 = (i8)(intptr_t)(ws+3136);
	i8 v6752 = *(i8*)(intptr_t)v6751;
	i8 v6753 = v6752+(+56);
	*(i1*)(intptr_t)v6753 = v6750;

	i8 v6754 = (i8)(intptr_t)(ws+3224);
	i8 v6755 = *(i8*)(intptr_t)v6754;
	i8 v6756 = v6755+(+40);
	i8 v6757 = *(i8*)(intptr_t)v6756;
	i8 v6758 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v6758 = v6757;

	i1 v6759 = (i1)+0;
	i8 v6760 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v6760 = v6759;

c02_0627:;

	i8 v6761 = (i8)(intptr_t)(ws+3240);
	i1 v6762 = *(i1*)(intptr_t)v6761;
	i1 v6763 = (i1)+3;
	if (v6762==v6763) goto c02_062a; else goto c02_0629;

c02_0629:;

	i8 v6764 = (i8)(intptr_t)(ws+3232);
	i8 v6765 = *(i8*)(intptr_t)v6764;
	i8 v6766 = v6765+(+16);
	i8 v6767 = (i8)(intptr_t)(ws+3240);
	i1 v6768 = *(i1*)(intptr_t)v6767;
	i8 v6769 = v6768;
	i1 v6770 = (i1)+3;
	i8 v6771 = ((i8)v6769)<<v6770;
	i8 v6772 = v6766+v6771;
	i8 v6773 = *(i8*)(intptr_t)v6772;
	i8 v6774 = (i8)(intptr_t)(ws+3216);
	i8 v6775 = *(i8*)(intptr_t)v6774;
	if (v6773==v6775) goto c02_062e; else goto c02_062f;

c02_062e:;

	i8 v6776 = (i8)(intptr_t)(ws+3136);
	i8 v6777 = *(i8*)(intptr_t)v6776;
	i8 v6778 = (i8)(intptr_t)(ws+3232);
	i8 v6779 = *(i8*)(intptr_t)v6778;
	i8 v6780 = v6779+(+16);
	i8 v6781 = (i8)(intptr_t)(ws+3240);
	i1 v6782 = *(i1*)(intptr_t)v6781;
	i8 v6783 = v6782;
	i1 v6784 = (i1)+3;
	i8 v6785 = ((i8)v6783)<<v6784;
	i8 v6786 = v6780+v6785;
	*(i8*)(intptr_t)v6786 = v6777;

	goto c02_062b;

c02_062f:;

c02_062b:;

	i8 v6787 = (i8)(intptr_t)(ws+3240);
	i1 v6788 = *(i1*)(intptr_t)v6787;
	i1 v6789 = v6788+(+1);
	i8 v6790 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v6790 = v6789;

	goto c02_0627;

c02_062a:;

endsub:;
}
const i1 c02_s0164[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
const i1 c02_s0165[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };

// CopyChildNodes workspace at ws+3216 length ws+16
void f432_CopyChildNodes(void) {

	i8 v6877 = (i8)(intptr_t)(ws+3152);
	i8 v6878 = *(i8*)(intptr_t)v6877;
	i8 v6879 = v6878+(+5);
	i1 v6880 = *(i1*)(intptr_t)v6879;
	i8 v6881 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v6881 = v6880;

	i8 v6882 = (i8)(intptr_t)(ws+3152);
	i8 v6883 = *(i8*)(intptr_t)v6882;
	i8 v6884 = v6883+(+6);
	i1 v6885 = *(i1*)(intptr_t)v6884;
	i8 v6886 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v6886 = v6885;

	i1 v6887 = (i1)+0;
	i8 v6888 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v6888 = v6887;

c02_0653:;

	i8 v6889 = (i8)(intptr_t)(ws+3096);
	i1 v6890 = *(i1*)(intptr_t)v6889;
	i1 v6891 = (i1)+3;
	if (v6890==v6891) goto c02_0656; else goto c02_0655;

c02_0655:;

	i8 v6892 = (i8)(intptr_t)(ws+3168);
	i8 v6893 = (i8)(intptr_t)(ws+3096);
	i1 v6894 = *(i1*)(intptr_t)v6893;
	i8 v6895 = v6894;
	i1 v6896 = (i1)+3;
	i8 v6897 = ((i8)v6895)<<v6896;
	i8 v6898 = v6892+v6897;
	i8 v6899 = *(i8*)(intptr_t)v6898;
	i8 v6900 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v6900 = v6899;

	i8 v6901 = (i8)(intptr_t)(ws+3216);
	i1 v6902 = *(i1*)(intptr_t)v6901;
	i1 v6903 = v6902&(+1);
	i1 v6904 = (i1)+0;
	if (v6903==v6904) goto c02_065b; else goto c02_065a;

c02_065a:;

	i8 v6905 = (i8)(intptr_t)(ws+3224);
	i8 v6906 = *(i8*)(intptr_t)v6905;
	i8 v6907 = (i8)(intptr_t)(ws+3128);
	i8 v6908 = *(i8*)(intptr_t)v6907;
	i8 v6909 = v6908+(+16);
	i8 v6910 = (i8)(intptr_t)(ws+3096);
	i1 v6911 = *(i1*)(intptr_t)v6910;
	i8 v6912 = v6911;
	i1 v6913 = (i1)+3;
	i8 v6914 = ((i8)v6912)<<v6913;
	i8 v6915 = v6909+v6914;
	*(i8*)(intptr_t)v6915 = v6906;

	i8 v6916 = (i8)(intptr_t)(ws+3217);
	i1 v6917 = *(i1*)(intptr_t)v6916;
	i1 v6918 = v6917&(+1);
	i1 v6919 = (i1)+0;
	if (v6918==v6919) goto c02_0660; else goto c02_065f;

c02_065f:;

	i8 v6920 = (i8)(intptr_t)(ws+3224);
	i8 v6921 = *(i8*)(intptr_t)v6920;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v6921);

	i8 v6922 = (i8)(intptr_t)(ws+3200);
	i8 v6923 = *(i8*)(intptr_t)v6922;
	i1 v6924 = *(i1*)(intptr_t)v6923;
	i8 v6925 = (i8)(intptr_t)(ws+3224);
	i8 v6926 = *(i8*)(intptr_t)v6925;
	i8 v6927 = v6926+(+56);
	*(i1*)(intptr_t)v6927 = v6924;

	i8 v6928 = (i8)(intptr_t)(ws+3200);
	i8 v6929 = *(i8*)(intptr_t)v6928;
	i8 v6930 = v6929+(+1);
	i8 v6931 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6931 = v6930;

	i8 v6932 = (i8)(intptr_t)(ws+3128);
	i8 v6933 = *(i8*)(intptr_t)v6932;
	i8 v6934 = (i8)(intptr_t)(ws+3224);
	i8 v6935 = *(i8*)(intptr_t)v6934;
	i8 v6936 = v6935+(+48);
	*(i8*)(intptr_t)v6936 = v6933;

	goto c02_065c;

c02_0660:;

c02_065c:;

	goto c02_0657;

c02_065b:;

c02_0657:;

	i8 v6937 = (i8)(intptr_t)(ws+3216);
	i1 v6938 = *(i1*)(intptr_t)v6937;
	i1 v6939 = (i1)+1;
	i1 v6940 = ((i1)v6938)>>v6939;
	i8 v6941 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v6941 = v6940;

	i8 v6942 = (i8)(intptr_t)(ws+3217);
	i1 v6943 = *(i1*)(intptr_t)v6942;
	i1 v6944 = (i1)+1;
	i1 v6945 = ((i1)v6943)>>v6944;
	i8 v6946 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v6946 = v6945;

	i8 v6947 = (i8)(intptr_t)(ws+3096);
	i1 v6948 = *(i1*)(intptr_t)v6947;
	i1 v6949 = v6948+(+1);
	i8 v6950 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v6950 = v6949;

	goto c02_0653;

c02_0656:;

	i8 v6951 = (i8)(intptr_t)(ws+3128);
	i8 v6952 = *(i8*)(intptr_t)v6951;
	i8 v6953 = (i8)(intptr_t)(ws+3136);
	i8 v6954 = *(i8*)(intptr_t)v6953;
	i8 v6955 = v6954+(+40);
	*(i8*)(intptr_t)v6955 = v6952;

endsub:;
}

// InstructionMatcher workspace at ws+3160 length ws+49
void f428_InstructionMatcher(void) {




	void f429_RewindRulePointers(void);
	f429_RewindRulePointers();

c02_0616:;

	i8 v6705 = (i8)(intptr_t)(ws+3152);
	i8 v6706 = *(i8*)(intptr_t)v6705;
	i8 v6707 = v6706+(+7);
	i8 v6708 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v6708 = v6707;

	i8 v6709 = (i8)(intptr_t)(ws+3144);
	i1 v6710 = *(i1*)(intptr_t)v6709;
	i1 v6711 = v6710+(+1);
	i8 v6712 = (i8)(intptr_t)(ws+3144);
	*(i1*)(intptr_t)v6712 = v6711;

	i8 v6713 = (i8)(intptr_t)(ws+3152);
	i8 v6714 = *(i8*)(intptr_t)v6713;
	i8 v6715 = (i8)(intptr_t)(((i1*)c02_a54c+1288));
	if (v6714==v6715) goto c02_061b; else goto c02_061c;

c02_061b:;

	i8 v6716 = (i8)(intptr_t)(ws+3136);
	i8 v6717 = *(i8*)(intptr_t)v6716;
	i8 v6718 = v6717+(+58);
	i1 v6719 = *(i1*)(intptr_t)v6718;
	i1 v6720 = (i1)+19;
	if (v6719==v6720) goto c02_0623; else goto c02_0624;

c02_0624:;

	i8 v6721 = (i8)(intptr_t)(ws+3136);
	i8 v6722 = *(i8*)(intptr_t)v6721;
	i8 v6723 = v6722+(+48);
	i8 v6724 = *(i8*)(intptr_t)v6723;
	i8 v6725 = (i8)+0;
	if (v6724==v6725) goto c02_0623; else goto c02_0622;

c02_0622:;



	void f431_ConvertNodeToFallback(void);
	f431_ConvertNodeToFallback();


	void f429_RewindRulePointers(void);
	f429_RewindRulePointers();

	goto c02_0616;

c02_0623:;

c02_061d:;


	void f59_StartError(void);
	f59_StartError();

	i8 v6791 = (i8)(intptr_t)c02_s0164;

	void f11_print(i8 /* ptr */);
	f11_print(v6791);

	i1 v6792 = (i1)+0;
	i8 v6793 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v6793 = v6792;

c02_0632:;

	i8 v6794 = (i8)(intptr_t)(ws+3096);
	i1 v6795 = *(i1*)(intptr_t)v6794;
	i1 v6796 = (i1)+3;
	if (v6795==v6796) goto c02_0635; else goto c02_0634;

c02_0634:;

	i8 v6797 = (i8)(intptr_t)(ws+3160);
	i8 v6798 = (i8)(intptr_t)(ws+3096);
	i1 v6799 = *(i1*)(intptr_t)v6798;
	i8 v6800 = v6799;
	i8 v6801 = v6797+v6800;
	i1 v6802 = *(i1*)(intptr_t)v6801;

	void f17_print_i8(i1 /* value */);
	f17_print_i8(v6802);

	i1 v6803 = (i1)+32;

	void f8_print_char(i1 /* c */);
	f8_print_char(v6803);

	i8 v6804 = (i8)(intptr_t)(ws+3096);
	i1 v6805 = *(i1*)(intptr_t)v6804;
	i1 v6806 = v6805+(+1);
	i8 v6807 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v6807 = v6806;

	goto c02_0632;

c02_0635:;

	i8 v6808 = (i8)(intptr_t)c02_s0165;

	void f11_print(i8 /* ptr */);
	f11_print(v6808);

	i8 v6809 = (i8)(intptr_t)(ws+3136);
	i8 v6810 = *(i8*)(intptr_t)v6809;
	i8 v6811 = v6810+(+56);
	i1 v6812 = *(i1*)(intptr_t)v6811;
	i4 v6813 = v6812;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v6813);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0618;

c02_061c:;

c02_0618:;


	void f430_TestRule(i1* /* result */);
	i1 v6814;
	f430_TestRule(&v6814);
	i1 v6815 = (i1)+0;
	if (v6814==v6815) goto c02_063a; else goto c02_0639;

c02_0639:;

	goto c02_0617;

c02_063a:;

c02_0636:;

	i8 v6816 = (i8)(intptr_t)(ws+3152);
	i8 v6817 = *(i8*)(intptr_t)v6816;
	i8 v6818 = v6817+(+4);
	i1 v6819 = *(i1*)(intptr_t)v6818;
	i8 v6820 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6820 = v6819;

c02_063d:;

	i8 v6821 = (i8)(intptr_t)(ws+3208);
	i1 v6822 = *(i1*)(intptr_t)v6821;
	i1 v6823 = (i1)+0;
	if (v6822==v6823) goto c02_0640; else goto c02_063f;

c02_063f:;

	i8 v6824 = (i8)(intptr_t)(ws+3208);
	i1 v6825 = *(i1*)(intptr_t)v6824;
	i1 v6826 = v6825&(+1);
	i1 v6827 = (i1)+0;
	if (v6826==v6827) goto c02_0645; else goto c02_0644;

c02_0644:;

	i8 v6828 = (i8)(intptr_t)(ws+3192);
	i8 v6829 = *(i8*)(intptr_t)v6828;
	i8 v6830 = v6829+(+1);
	i8 v6831 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v6831 = v6830;

	goto c02_0641;

c02_0645:;

c02_0641:;

	i8 v6832 = (i8)(intptr_t)(ws+3208);
	i1 v6833 = *(i1*)(intptr_t)v6832;
	i1 v6834 = (i1)+1;
	i1 v6835 = ((i1)v6833)>>v6834;
	i8 v6836 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6836 = v6835;

	goto c02_063d;

c02_0640:;

	i8 v6837 = (i8)(intptr_t)(ws+3152);
	i8 v6838 = *(i8*)(intptr_t)v6837;
	i8 v6839 = v6838+(+6);
	i1 v6840 = *(i1*)(intptr_t)v6839;
	i8 v6841 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6841 = v6840;

c02_0648:;

	i8 v6842 = (i8)(intptr_t)(ws+3208);
	i1 v6843 = *(i1*)(intptr_t)v6842;
	i1 v6844 = (i1)+0;
	if (v6843==v6844) goto c02_064b; else goto c02_064a;

c02_064a:;

	i8 v6845 = (i8)(intptr_t)(ws+3208);
	i1 v6846 = *(i1*)(intptr_t)v6845;
	i1 v6847 = v6846&(+1);
	i1 v6848 = (i1)+0;
	if (v6847==v6848) goto c02_0650; else goto c02_064f;

c02_064f:;

	i8 v6849 = (i8)(intptr_t)(ws+3200);
	i8 v6850 = *(i8*)(intptr_t)v6849;
	i8 v6851 = v6850+(+1);
	i8 v6852 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v6852 = v6851;

	goto c02_064c;

c02_0650:;

c02_064c:;

	i8 v6853 = (i8)(intptr_t)(ws+3208);
	i1 v6854 = *(i1*)(intptr_t)v6853;
	i1 v6855 = (i1)+1;
	i1 v6856 = ((i1)v6854)>>v6855;
	i8 v6857 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v6857 = v6856;

	goto c02_0648;

c02_064b:;

	goto c02_0616;

c02_0617:;

	i8 v6858 = (i8)(intptr_t)(ws+3144);
	i1 v6859 = *(i1*)(intptr_t)v6858;
	i8 v6860 = (i8)(intptr_t)(ws+3128);
	i8 v6861 = *(i8*)(intptr_t)v6860;
	i8 v6862 = v6861+(+62);
	*(i1*)(intptr_t)v6862 = v6859;

	i8 v6863 = (i8)(intptr_t)(ws+3152);
	i8 v6864 = *(i8*)(intptr_t)v6863;
	i8 v6865 = v6864+(+2);
	i1 v6866 = *(i1*)(intptr_t)v6865;
	i8 v6867 = (i8)(intptr_t)(ws+3128);
	i8 v6868 = *(i8*)(intptr_t)v6867;
	i8 v6869 = v6868+(+40);
	*(i1*)(intptr_t)v6869 = v6866;

	i8 v6870 = (i8)(intptr_t)(ws+3152);
	i8 v6871 = *(i8*)(intptr_t)v6870;
	i8 v6872 = v6871+(+3);
	i1 v6873 = *(i1*)(intptr_t)v6872;
	i8 v6874 = (i8)(intptr_t)(ws+3128);
	i8 v6875 = *(i8*)(intptr_t)v6874;
	i8 v6876 = v6875+(+43);
	*(i1*)(intptr_t)v6876 = v6873;



	void f432_CopyChildNodes(void);
	f432_CopyChildNodes();

endsub:;
}
const i1 c02_s0166[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
const i1 c02_s0167[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
const i1 c02_s0168[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s0169[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s016a[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
const i1 c02_s016b[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
const i1 c02_s016c[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };

// deadlock workspace at ws+3184 length ws+0
void f434_deadlock(void) {

	i8 v7293 = (i8)(intptr_t)(ws+3088);
	i8 v7294 = *(i8*)(intptr_t)v7293;

	void f426_PrintNodes(i8 /* rootnode */);
	f426_PrintNodes(v7294);

	i8 v7295 = (i8)(intptr_t)c02_s0166;

	void f11_print(i8 /* ptr */);
	f11_print(v7295);

	i8 v7296 = (i8)(intptr_t)(ws+3128);
	i8 v7297 = *(i8*)(intptr_t)v7296;
	i8 v7298 = v7297+(+16);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i4 v7300 = v7299;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7300);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v7301 = (i8)(intptr_t)c02_s0167;

	void f11_print(i8 /* ptr */);
	f11_print(v7301);

	i8 v7302 = (i8)(intptr_t)(ws+3168);
	i8 v7303 = *(i8*)(intptr_t)v7302;
	i8 v7304 = v7303+(+16);
	i8 v7305 = *(i8*)(intptr_t)v7304;
	i4 v7306 = v7305;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7306);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v7307 = (i8)(intptr_t)c02_s0168;

	void f11_print(i8 /* ptr */);
	f11_print(v7307);

	i8 v7308 = (i8)(intptr_t)(ws+3128);
	i8 v7309 = *(i8*)(intptr_t)v7308;
	i8 v7310 = v7309+(+40);
	i1 v7311 = *(i1*)(intptr_t)v7310;
	i4 v7312 = v7311;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7312);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v7313 = (i8)(intptr_t)c02_s0169;

	void f11_print(i8 /* ptr */);
	f11_print(v7313);

	i8 v7314 = (i8)(intptr_t)(ws+3128);
	i8 v7315 = *(i8*)(intptr_t)v7314;
	i8 v7316 = v7315+(+43);
	i1 v7317 = *(i1*)(intptr_t)v7316;
	i4 v7318 = v7317;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7318);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v7319 = (i8)(intptr_t)c02_s016a;

	void f11_print(i8 /* ptr */);
	f11_print(v7319);

	i8 v7320 = (i8)(intptr_t)(ws+3136);
	i8 v7321 = *(i8*)(intptr_t)v7320;
	i8 v7322 = v7321+(+56);
	i1 v7323 = *(i1*)(intptr_t)v7322;
	i4 v7324 = v7323;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7324);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v7325 = (i8)(intptr_t)c02_s016b;

	void f11_print(i8 /* ptr */);
	f11_print(v7325);

	i8 v7326 = (i8)(intptr_t)(ws+3168);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = v7327+(+42);
	i1 v7329 = *(i1*)(intptr_t)v7328;
	i4 v7330 = v7329;

	void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v7330);


	void f12_print_nl(void);
	f12_print_nl();

	i8 v7331 = (i8)(intptr_t)c02_s016c;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v7331);

endsub:;
}

// AllocateRegister workspace at ws+3160 length ws+20
void f433_AllocateRegister(void) {

	i8 v6961 = (i8)(intptr_t)(ws+3128);
	i8 v6962 = *(i8*)(intptr_t)v6961;
	i8 v6963 = v6962+(+40);
	i1 v6964 = *(i1*)(intptr_t)v6963;

	void f420_IsStackedRegister(i1* /* result */, i1 /* regid */);
	i1 v6965;
	f420_IsStackedRegister(&v6965, v6964);
	i1 v6966 = (i1)+0;
	if (v6965==v6966) goto c02_066a; else goto c02_0669;

c02_0669:;

	i8 v6967 = (i8)(intptr_t)(ws+3136);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i8 v6969 = v6968+(+56);
	i1 v6970 = *(i1*)(intptr_t)v6969;
	i8 v6971 = (i8)(intptr_t)(ws+3128);
	i8 v6972 = *(i8*)(intptr_t)v6971;
	i8 v6973 = v6972+(+40);
	i1 v6974 = *(i1*)(intptr_t)v6973;
	i1 v6975 = v6970&v6974;
	i8 v6976 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v6976 = v6975;

	i8 v6977 = (i8)(intptr_t)(ws+3160);
	i1 v6978 = *(i1*)(intptr_t)v6977;
	i1 v6979 = (i1)+0;
	if (v6978==v6979) goto c02_066f; else goto c02_066e;

c02_066e:;

	i8 v6980 = (i8)(intptr_t)(ws+3160);
	i1 v6981 = *(i1*)(intptr_t)v6980;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v6982;
	f213_FindFirst(&v6982, v6981);
	i8 v6983 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v6983 = v6982;

	i8 v6984 = (i8)(intptr_t)(ws+3160);
	i1 v6985 = *(i1*)(intptr_t)v6984;
	i8 v6986 = (i8)(intptr_t)(ws+3136);
	i8 v6987 = *(i8*)(intptr_t)v6986;
	i8 v6988 = v6987+(+57);
	*(i1*)(intptr_t)v6988 = v6985;

	i8 v6989 = (i8)(intptr_t)(ws+3160);
	i1 v6990 = *(i1*)(intptr_t)v6989;
	i8 v6991 = (i8)(intptr_t)(ws+3128);
	i8 v6992 = *(i8*)(intptr_t)v6991;
	i8 v6993 = v6992+(+41);
	*(i1*)(intptr_t)v6993 = v6990;

	goto c02_066b;

c02_066f:;

	i8 v6994 = (i8)(intptr_t)(ws+3128);
	i8 v6995 = *(i8*)(intptr_t)v6994;
	i8 v6996 = v6995+(+40);
	i1 v6997 = *(i1*)(intptr_t)v6996;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v6998;
	f213_FindFirst(&v6998, v6997);
	i8 v6999 = (i8)(intptr_t)(ws+3128);
	i8 v7000 = *(i8*)(intptr_t)v6999;
	i8 v7001 = v7000+(+41);
	*(i1*)(intptr_t)v7001 = v6998;

	i8 v7002 = (i8)(intptr_t)(ws+3136);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = v7003+(+56);
	i1 v7005 = *(i1*)(intptr_t)v7004;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7006;
	f213_FindFirst(&v7006, v7005);
	i8 v7007 = (i8)(intptr_t)(ws+3136);
	i8 v7008 = *(i8*)(intptr_t)v7007;
	i8 v7009 = v7008+(+57);
	*(i1*)(intptr_t)v7009 = v7006;

	i8 v7010 = (i8)(intptr_t)(ws+3128);
	i8 v7011 = *(i8*)(intptr_t)v7010;
	i8 v7012 = (i8)(intptr_t)(ws+3128);
	i8 v7013 = *(i8*)(intptr_t)v7012;
	i8 v7014 = v7013+(+41);
	i1 v7015 = *(i1*)(intptr_t)v7014;
	i8 v7016 = (i8)(intptr_t)(ws+3136);
	i8 v7017 = *(i8*)(intptr_t)v7016;
	i8 v7018 = v7017+(+57);
	i1 v7019 = *(i1*)(intptr_t)v7018;

	void f423_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f423_CreateSpill(v7019, v7015, v7011);

c02_066b:;

	goto c02_0666;

c02_066a:;

	i8 v7020 = (i8)(intptr_t)(ws+3136);
	i8 v7021 = *(i8*)(intptr_t)v7020;
	i8 v7022 = v7021+(+48);
	i8 v7023 = *(i8*)(intptr_t)v7022;
	i8 v7024 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v7024 = v7023;

	i8 v7025 = (i8)(intptr_t)(ws+3168);
	i8 v7026 = *(i8*)(intptr_t)v7025;
	i8 v7027 = (i8)(intptr_t)(ws+3128);
	i8 v7028 = *(i8*)(intptr_t)v7027;

	void f421_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	i1 v7029;
	f421_CalculateBlockedRegisters(&v7029, v7028, v7026);
	i8 v7030 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7030 = v7029;

	i8 v7031 = (i8)(intptr_t)(ws+3136);
	i8 v7032 = *(i8*)(intptr_t)v7031;
	i8 v7033 = v7032+(+56);
	i1 v7034 = *(i1*)(intptr_t)v7033;
	i8 v7035 = (i8)(intptr_t)(ws+3128);
	i8 v7036 = *(i8*)(intptr_t)v7035;
	i8 v7037 = v7036+(+40);
	i1 v7038 = *(i1*)(intptr_t)v7037;
	i1 v7039 = v7034&v7038;
	i8 v7040 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v7040 = v7039;

	i8 v7041 = (i8)(intptr_t)(ws+3160);
	i1 v7042 = *(i1*)(intptr_t)v7041;
	i8 v7043 = (i8)(intptr_t)(ws+3176);
	i1 v7044 = *(i1*)(intptr_t)v7043;
	i8 v7045 = (i8)(intptr_t)(ws+3128);
	i8 v7046 = *(i8*)(intptr_t)v7045;
	i8 v7047 = v7046+(+43);
	i1 v7048 = *(i1*)(intptr_t)v7047;
	i1 v7049 = v7044|v7048;
	i8 v7050 = (i8)(intptr_t)(ws+3168);
	i8 v7051 = *(i8*)(intptr_t)v7050;
	i8 v7052 = v7051+(+42);
	i1 v7053 = *(i1*)(intptr_t)v7052;
	i1 v7054 = v7049|v7053;
	i1 v7055 = ~v7054;
	i1 v7056 = v7042&v7055;
	i8 v7057 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7057 = v7056;

	i8 v7058 = (i8)(intptr_t)(ws+3177);
	i1 v7059 = *(i1*)(intptr_t)v7058;
	i1 v7060 = (i1)+0;
	if (v7059==v7060) goto c02_0674; else goto c02_0673;

c02_0673:;

	i8 v7061 = (i8)(intptr_t)(ws+3177);
	i1 v7062 = *(i1*)(intptr_t)v7061;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7063;
	f213_FindFirst(&v7063, v7062);
	i8 v7064 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v7064 = v7063;

	i8 v7065 = (i8)(intptr_t)(ws+3160);
	i1 v7066 = *(i1*)(intptr_t)v7065;
	i8 v7067 = (i8)(intptr_t)(ws+3136);
	i8 v7068 = *(i8*)(intptr_t)v7067;
	i8 v7069 = v7068+(+57);
	*(i1*)(intptr_t)v7069 = v7066;

	i8 v7070 = (i8)(intptr_t)(ws+3160);
	i1 v7071 = *(i1*)(intptr_t)v7070;
	i8 v7072 = (i8)(intptr_t)(ws+3128);
	i8 v7073 = *(i8*)(intptr_t)v7072;
	i8 v7074 = v7073+(+41);
	*(i1*)(intptr_t)v7074 = v7071;

	i8 v7075 = (i8)(intptr_t)(ws+3160);
	i1 v7076 = *(i1*)(intptr_t)v7075;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7077;
	f211_FindConflictingRegisters(&v7077, v7076);
	i8 v7078 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7078 = v7077;

	i8 v7079 = (i8)(intptr_t)(ws+3168);
	i8 v7080 = *(i8*)(intptr_t)v7079;
	i8 v7081 = v7080+(+42);
	i1 v7082 = *(i1*)(intptr_t)v7081;
	i8 v7083 = (i8)(intptr_t)(ws+3176);
	i1 v7084 = *(i1*)(intptr_t)v7083;
	i1 v7085 = v7082|v7084;
	i8 v7086 = (i8)(intptr_t)(ws+3168);
	i8 v7087 = *(i8*)(intptr_t)v7086;
	i8 v7088 = v7087+(+42);
	*(i1*)(intptr_t)v7088 = v7085;

	i8 v7089 = (i8)(intptr_t)(ws+3168);
	i8 v7090 = *(i8*)(intptr_t)v7089;
	i8 v7091 = (i8)(intptr_t)(ws+3128);
	i8 v7092 = *(i8*)(intptr_t)v7091;
	i8 v7093 = (i8)(intptr_t)(ws+3176);
	i1 v7094 = *(i1*)(intptr_t)v7093;

	void f422_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	f422_BlockRegisters(v7094, v7092, v7090);

	i8 v7095 = (i8)(intptr_t)(ws+3128);
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i8 v7097 = v7096+(+43);
	i1 v7098 = *(i1*)(intptr_t)v7097;
	i8 v7099 = (i8)(intptr_t)(ws+3176);
	i1 v7100 = *(i1*)(intptr_t)v7099;
	i1 v7101 = v7098|v7100;
	i8 v7102 = (i8)(intptr_t)(ws+3128);
	i8 v7103 = *(i8*)(intptr_t)v7102;
	i8 v7104 = v7103+(+43);
	*(i1*)(intptr_t)v7104 = v7101;

	goto c02_0670;

c02_0674:;

	i8 v7105 = (i8)(intptr_t)(ws+3136);
	i8 v7106 = *(i8*)(intptr_t)v7105;
	i8 v7107 = v7106+(+56);
	i1 v7108 = *(i1*)(intptr_t)v7107;

	void f212_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	i1 v7109;
	f212_FindCompatibleRegisters(&v7109, v7108);
	i8 v7110 = (i8)(intptr_t)(ws+3178);
	*(i1*)(intptr_t)v7110 = v7109;

	i8 v7111 = (i8)(intptr_t)(ws+3128);
	i8 v7112 = *(i8*)(intptr_t)v7111;
	i8 v7113 = v7112+(+40);
	i1 v7114 = *(i1*)(intptr_t)v7113;
	i8 v7115 = (i8)(intptr_t)(ws+3178);
	i1 v7116 = *(i1*)(intptr_t)v7115;
	i1 v7117 = v7114&v7116;
	i8 v7118 = (i8)(intptr_t)(ws+3176);
	i1 v7119 = *(i1*)(intptr_t)v7118;
	i8 v7120 = (i8)(intptr_t)(ws+3128);
	i8 v7121 = *(i8*)(intptr_t)v7120;
	i8 v7122 = v7121+(+43);
	i1 v7123 = *(i1*)(intptr_t)v7122;
	i1 v7124 = v7119|v7123;
	i1 v7125 = ~v7124;
	i1 v7126 = v7117&v7125;
	i8 v7127 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7127 = v7126;

	i8 v7128 = (i8)(intptr_t)(ws+3136);
	i8 v7129 = *(i8*)(intptr_t)v7128;
	i8 v7130 = v7129+(+56);
	i1 v7131 = *(i1*)(intptr_t)v7130;
	i8 v7132 = (i8)(intptr_t)(ws+3168);
	i8 v7133 = *(i8*)(intptr_t)v7132;
	i8 v7134 = v7133+(+42);
	i1 v7135 = *(i1*)(intptr_t)v7134;
	i1 v7136 = ~v7135;
	i1 v7137 = v7131&v7136;
	i8 v7138 = (i8)(intptr_t)(ws+3179);
	*(i1*)(intptr_t)v7138 = v7137;

	i8 v7139 = (i8)(intptr_t)(ws+3177);
	i1 v7140 = *(i1*)(intptr_t)v7139;
	i1 v7141 = (i1)+0;
	if (v7140==v7141) goto c02_067b; else goto c02_067c;

c02_067c:;

	i8 v7142 = (i8)(intptr_t)(ws+3179);
	i1 v7143 = *(i1*)(intptr_t)v7142;
	i1 v7144 = (i1)+0;
	if (v7143==v7144) goto c02_067b; else goto c02_067a;

c02_067a:;

	i8 v7145 = (i8)(intptr_t)(ws+3177);
	i1 v7146 = *(i1*)(intptr_t)v7145;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7147;
	f213_FindFirst(&v7147, v7146);
	i8 v7148 = (i8)(intptr_t)(ws+3128);
	i8 v7149 = *(i8*)(intptr_t)v7148;
	i8 v7150 = v7149+(+41);
	*(i1*)(intptr_t)v7150 = v7147;

	i8 v7151 = (i8)(intptr_t)(ws+3179);
	i1 v7152 = *(i1*)(intptr_t)v7151;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7153;
	f213_FindFirst(&v7153, v7152);
	i8 v7154 = (i8)(intptr_t)(ws+3136);
	i8 v7155 = *(i8*)(intptr_t)v7154;
	i8 v7156 = v7155+(+57);
	*(i1*)(intptr_t)v7156 = v7153;

	i8 v7157 = (i8)(intptr_t)(ws+3168);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = v7158+(+42);
	i1 v7160 = *(i1*)(intptr_t)v7159;
	i8 v7161 = (i8)(intptr_t)(ws+3136);
	i8 v7162 = *(i8*)(intptr_t)v7161;
	i8 v7163 = v7162+(+57);
	i1 v7164 = *(i1*)(intptr_t)v7163;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7165;
	f211_FindConflictingRegisters(&v7165, v7164);
	i1 v7166 = v7160|v7165;
	i8 v7167 = (i8)(intptr_t)(ws+3168);
	i8 v7168 = *(i8*)(intptr_t)v7167;
	i8 v7169 = v7168+(+42);
	*(i1*)(intptr_t)v7169 = v7166;

	i8 v7170 = (i8)(intptr_t)(ws+3128);
	i8 v7171 = *(i8*)(intptr_t)v7170;
	i8 v7172 = v7171+(+41);
	i1 v7173 = *(i1*)(intptr_t)v7172;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7174;
	f211_FindConflictingRegisters(&v7174, v7173);
	i8 v7175 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7175 = v7174;

	i8 v7176 = (i8)(intptr_t)(ws+3168);
	i8 v7177 = *(i8*)(intptr_t)v7176;
	i8 v7178 = (i8)(intptr_t)(ws+3128);
	i8 v7179 = *(i8*)(intptr_t)v7178;
	i8 v7180 = (i8)(intptr_t)(ws+3176);
	i1 v7181 = *(i1*)(intptr_t)v7180;

	void f422_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	f422_BlockRegisters(v7181, v7179, v7177);

	i8 v7182 = (i8)(intptr_t)(ws+3128);
	i8 v7183 = *(i8*)(intptr_t)v7182;
	i8 v7184 = v7183+(+43);
	i1 v7185 = *(i1*)(intptr_t)v7184;
	i8 v7186 = (i8)(intptr_t)(ws+3176);
	i1 v7187 = *(i1*)(intptr_t)v7186;
	i1 v7188 = v7185|v7187;
	i8 v7189 = (i8)(intptr_t)(ws+3128);
	i8 v7190 = *(i8*)(intptr_t)v7189;
	i8 v7191 = v7190+(+43);
	*(i1*)(intptr_t)v7191 = v7188;

	i8 v7192 = (i8)(intptr_t)(ws+3168);
	i8 v7193 = *(i8*)(intptr_t)v7192;
	i8 v7194 = (i8)(intptr_t)(ws+3128);
	i8 v7195 = *(i8*)(intptr_t)v7194;
	i8 v7196 = v7195+(+41);
	i1 v7197 = *(i1*)(intptr_t)v7196;
	i8 v7198 = (i8)(intptr_t)(ws+3136);
	i8 v7199 = *(i8*)(intptr_t)v7198;
	i8 v7200 = v7199+(+57);
	i1 v7201 = *(i1*)(intptr_t)v7200;

	void f424_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f424_CreateReload(v7201, v7197, v7193);

	goto c02_0675;

c02_067b:;

	i8 v7202 = (i8)(intptr_t)(ws+3136);
	i8 v7203 = *(i8*)(intptr_t)v7202;
	i8 v7204 = v7203+(+56);
	i1 v7205 = *(i1*)(intptr_t)v7204;
	i8 v7206 = (i8)(intptr_t)(ws+3176);
	i1 v7207 = *(i1*)(intptr_t)v7206;
	i8 v7208 = (i8)(intptr_t)(ws+3168);
	i8 v7209 = *(i8*)(intptr_t)v7208;
	i8 v7210 = v7209+(+42);
	i1 v7211 = *(i1*)(intptr_t)v7210;
	i1 v7212 = v7207|v7211;
	i1 v7213 = ~v7212;
	i1 v7214 = v7205&v7213;
	i8 v7215 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7215 = v7214;

	i8 v7216 = (i8)(intptr_t)(ws+3128);
	i8 v7217 = *(i8*)(intptr_t)v7216;
	i8 v7218 = v7217+(+40);
	i1 v7219 = *(i1*)(intptr_t)v7218;
	i8 v7220 = (i8)(intptr_t)(ws+3178);
	i1 v7221 = *(i1*)(intptr_t)v7220;
	i1 v7222 = v7219&v7221;
	i8 v7223 = (i8)(intptr_t)(ws+3128);
	i8 v7224 = *(i8*)(intptr_t)v7223;
	i8 v7225 = v7224+(+43);
	i1 v7226 = *(i1*)(intptr_t)v7225;
	i1 v7227 = ~v7226;
	i1 v7228 = v7222&v7227;
	i8 v7229 = (i8)(intptr_t)(ws+3179);
	*(i1*)(intptr_t)v7229 = v7228;

	i8 v7230 = (i8)(intptr_t)(ws+3177);
	i1 v7231 = *(i1*)(intptr_t)v7230;
	i1 v7232 = (i1)+0;
	if (v7231==v7232) goto c02_0683; else goto c02_0684;

c02_0684:;

	i8 v7233 = (i8)(intptr_t)(ws+3179);
	i1 v7234 = *(i1*)(intptr_t)v7233;
	i1 v7235 = (i1)+0;
	if (v7234==v7235) goto c02_0683; else goto c02_0682;

c02_0682:;

	i8 v7236 = (i8)(intptr_t)(ws+3179);
	i1 v7237 = *(i1*)(intptr_t)v7236;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7238;
	f213_FindFirst(&v7238, v7237);
	i8 v7239 = (i8)(intptr_t)(ws+3128);
	i8 v7240 = *(i8*)(intptr_t)v7239;
	i8 v7241 = v7240+(+41);
	*(i1*)(intptr_t)v7241 = v7238;

	i8 v7242 = (i8)(intptr_t)(ws+3177);
	i1 v7243 = *(i1*)(intptr_t)v7242;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7244;
	f213_FindFirst(&v7244, v7243);
	i8 v7245 = (i8)(intptr_t)(ws+3136);
	i8 v7246 = *(i8*)(intptr_t)v7245;
	i8 v7247 = v7246+(+57);
	*(i1*)(intptr_t)v7247 = v7244;

	i8 v7248 = (i8)(intptr_t)(ws+3136);
	i8 v7249 = *(i8*)(intptr_t)v7248;
	i8 v7250 = v7249+(+57);
	i1 v7251 = *(i1*)(intptr_t)v7250;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7252;
	f211_FindConflictingRegisters(&v7252, v7251);
	i8 v7253 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7253 = v7252;

	i8 v7254 = (i8)(intptr_t)(ws+3168);
	i8 v7255 = *(i8*)(intptr_t)v7254;
	i8 v7256 = v7255+(+42);
	i1 v7257 = *(i1*)(intptr_t)v7256;
	i8 v7258 = (i8)(intptr_t)(ws+3176);
	i1 v7259 = *(i1*)(intptr_t)v7258;
	i1 v7260 = v7257|v7259;
	i8 v7261 = (i8)(intptr_t)(ws+3168);
	i8 v7262 = *(i8*)(intptr_t)v7261;
	i8 v7263 = v7262+(+42);
	*(i1*)(intptr_t)v7263 = v7260;

	i8 v7264 = (i8)(intptr_t)(ws+3168);
	i8 v7265 = *(i8*)(intptr_t)v7264;
	i8 v7266 = (i8)(intptr_t)(ws+3128);
	i8 v7267 = *(i8*)(intptr_t)v7266;
	i8 v7268 = (i8)(intptr_t)(ws+3176);
	i1 v7269 = *(i1*)(intptr_t)v7268;

	void f422_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	f422_BlockRegisters(v7269, v7267, v7265);

	i8 v7270 = (i8)(intptr_t)(ws+3128);
	i8 v7271 = *(i8*)(intptr_t)v7270;
	i8 v7272 = v7271+(+43);
	i1 v7273 = *(i1*)(intptr_t)v7272;
	i8 v7274 = (i8)(intptr_t)(ws+3128);
	i8 v7275 = *(i8*)(intptr_t)v7274;
	i8 v7276 = v7275+(+41);
	i1 v7277 = *(i1*)(intptr_t)v7276;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7278;
	f211_FindConflictingRegisters(&v7278, v7277);
	i1 v7279 = v7273|v7278;
	i8 v7280 = (i8)(intptr_t)(ws+3128);
	i8 v7281 = *(i8*)(intptr_t)v7280;
	i8 v7282 = v7281+(+43);
	*(i1*)(intptr_t)v7282 = v7279;

	i8 v7283 = (i8)(intptr_t)(ws+3128);
	i8 v7284 = *(i8*)(intptr_t)v7283;
	i8 v7285 = (i8)(intptr_t)(ws+3128);
	i8 v7286 = *(i8*)(intptr_t)v7285;
	i8 v7287 = v7286+(+41);
	i1 v7288 = *(i1*)(intptr_t)v7287;
	i8 v7289 = (i8)(intptr_t)(ws+3136);
	i8 v7290 = *(i8*)(intptr_t)v7289;
	i8 v7291 = v7290+(+57);
	i1 v7292 = *(i1*)(intptr_t)v7291;

	void f423_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f423_CreateSpill(v7292, v7288, v7284);

	goto c02_067d;

c02_0683:;


	i8 v7332 = (i8)(intptr_t)(ws+3128);
	i8 v7333 = *(i8*)(intptr_t)v7332;
	i8 v7334 = v7333+(+40);
	i1 v7335 = *(i1*)(intptr_t)v7334;
	i8 v7336 = (i8)(intptr_t)(ws+3178);
	i1 v7337 = *(i1*)(intptr_t)v7336;
	i1 v7338 = v7335&v7337;
	i8 v7339 = (i8)(intptr_t)(ws+3128);
	i8 v7340 = *(i8*)(intptr_t)v7339;
	i8 v7341 = v7340+(+43);
	i1 v7342 = *(i1*)(intptr_t)v7341;
	i1 v7343 = ~v7342;
	i1 v7344 = v7338&v7343;
	i8 v7345 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v7345 = v7344;

	i8 v7346 = (i8)(intptr_t)(ws+3160);
	i1 v7347 = *(i1*)(intptr_t)v7346;
	i1 v7348 = (i1)+0;
	if (v7347==v7348) goto c02_0688; else goto c02_0689;

c02_0688:;


	void f434_deadlock(void);
	f434_deadlock();

	goto c02_0685;

c02_0689:;

c02_0685:;

	i8 v7349 = (i8)(intptr_t)(ws+3160);
	i1 v7350 = *(i1*)(intptr_t)v7349;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7351;
	f213_FindFirst(&v7351, v7350);
	i8 v7352 = (i8)(intptr_t)(ws+3128);
	i8 v7353 = *(i8*)(intptr_t)v7352;
	i8 v7354 = v7353+(+41);
	*(i1*)(intptr_t)v7354 = v7351;

	i8 v7355 = (i8)(intptr_t)(ws+3128);
	i8 v7356 = *(i8*)(intptr_t)v7355;
	i8 v7357 = v7356+(+43);
	i1 v7358 = *(i1*)(intptr_t)v7357;
	i8 v7359 = (i8)(intptr_t)(ws+3128);
	i8 v7360 = *(i8*)(intptr_t)v7359;
	i8 v7361 = v7360+(+41);
	i1 v7362 = *(i1*)(intptr_t)v7361;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7363;
	f211_FindConflictingRegisters(&v7363, v7362);
	i1 v7364 = v7358|v7363;
	i8 v7365 = (i8)(intptr_t)(ws+3128);
	i8 v7366 = *(i8*)(intptr_t)v7365;
	i8 v7367 = v7366+(+43);
	*(i1*)(intptr_t)v7367 = v7364;

	i8 v7368 = (i8)(intptr_t)(ws+3128);
	i8 v7369 = *(i8*)(intptr_t)v7368;
	i8 v7370 = (i8)(intptr_t)(ws+3128);
	i8 v7371 = *(i8*)(intptr_t)v7370;
	i8 v7372 = v7371+(+41);
	i1 v7373 = *(i1*)(intptr_t)v7372;
	i1 v7374 = (i1)+0;

	void f423_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f423_CreateSpill(v7374, v7373, v7369);

	i8 v7375 = (i8)(intptr_t)(ws+3136);
	i8 v7376 = *(i8*)(intptr_t)v7375;
	i8 v7377 = v7376+(+56);
	i1 v7378 = *(i1*)(intptr_t)v7377;
	i8 v7379 = (i8)(intptr_t)(ws+3168);
	i8 v7380 = *(i8*)(intptr_t)v7379;
	i8 v7381 = v7380+(+42);
	i1 v7382 = *(i1*)(intptr_t)v7381;
	i1 v7383 = ~v7382;
	i1 v7384 = v7378&v7383;
	i8 v7385 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v7385 = v7384;

	i8 v7386 = (i8)(intptr_t)(ws+3160);
	i1 v7387 = *(i1*)(intptr_t)v7386;
	i1 v7388 = (i1)+0;
	if (v7387==v7388) goto c02_068d; else goto c02_068e;

c02_068d:;


	void f434_deadlock(void);
	f434_deadlock();

	goto c02_068a;

c02_068e:;

c02_068a:;

	i8 v7389 = (i8)(intptr_t)(ws+3160);
	i1 v7390 = *(i1*)(intptr_t)v7389;

	void f213_FindFirst(i1* /* outreg */, i1 /* inreg */);
	i1 v7391;
	f213_FindFirst(&v7391, v7390);
	i8 v7392 = (i8)(intptr_t)(ws+3136);
	i8 v7393 = *(i8*)(intptr_t)v7392;
	i8 v7394 = v7393+(+57);
	*(i1*)(intptr_t)v7394 = v7391;

	i8 v7395 = (i8)(intptr_t)(ws+3168);
	i8 v7396 = *(i8*)(intptr_t)v7395;
	i8 v7397 = v7396+(+42);
	i1 v7398 = *(i1*)(intptr_t)v7397;
	i8 v7399 = (i8)(intptr_t)(ws+3136);
	i8 v7400 = *(i8*)(intptr_t)v7399;
	i8 v7401 = v7400+(+57);
	i1 v7402 = *(i1*)(intptr_t)v7401;

	void f211_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	i1 v7403;
	f211_FindConflictingRegisters(&v7403, v7402);
	i1 v7404 = v7398|v7403;
	i8 v7405 = (i8)(intptr_t)(ws+3168);
	i8 v7406 = *(i8*)(intptr_t)v7405;
	i8 v7407 = v7406+(+42);
	*(i1*)(intptr_t)v7407 = v7404;

	i8 v7408 = (i8)(intptr_t)(ws+3168);
	i8 v7409 = *(i8*)(intptr_t)v7408;
	i1 v7410 = (i1)+0;
	i8 v7411 = (i8)(intptr_t)(ws+3136);
	i8 v7412 = *(i8*)(intptr_t)v7411;
	i8 v7413 = v7412+(+57);
	i1 v7414 = *(i1*)(intptr_t)v7413;

	void f424_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	f424_CreateReload(v7414, v7410, v7409);

c02_067d:;

c02_0675:;

c02_0670:;

c02_0666:;

endsub:;
}

// UpdateProducedRegisters workspace at ws+3160 length ws+1
void f435_UpdateProducedRegisters(void) {

	i1 v7415 = (i1)+0;
	i8 v7416 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7416 = v7415;

c02_0691:;

	i8 v7417 = (i8)(intptr_t)(ws+3096);
	i1 v7418 = *(i1*)(intptr_t)v7417;
	i1 v7419 = (i1)+3;
	if (v7418==v7419) goto c02_0694; else goto c02_0693;

c02_0693:;

	i8 v7420 = (i8)(intptr_t)(ws+3128);
	i8 v7421 = *(i8*)(intptr_t)v7420;
	i8 v7422 = v7421+(+16);
	i8 v7423 = (i8)(intptr_t)(ws+3096);
	i1 v7424 = *(i1*)(intptr_t)v7423;
	i8 v7425 = v7424;
	i1 v7426 = (i1)+3;
	i8 v7427 = ((i8)v7425)<<v7426;
	i8 v7428 = v7422+v7427;
	i8 v7429 = *(i8*)(intptr_t)v7428;
	i8 v7430 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v7430 = v7429;

	i8 v7431 = (i8)(intptr_t)(ws+3136);
	i8 v7432 = *(i8*)(intptr_t)v7431;
	i8 v7433 = (i8)+0;
	if (v7432==v7433) goto c02_069b; else goto c02_069c;

c02_069c:;

	i8 v7434 = (i8)(intptr_t)(ws+3136);
	i8 v7435 = *(i8*)(intptr_t)v7434;
	i8 v7436 = v7435+(+56);
	i1 v7437 = *(i1*)(intptr_t)v7436;
	i1 v7438 = (i1)-1;
	if (v7437==v7438) goto c02_069a; else goto c02_069b;

c02_069a:;

	i8 v7439 = (i8)(intptr_t)(ws+3128);
	i8 v7440 = *(i8*)(intptr_t)v7439;
	i8 v7441 = v7440+(+41);
	i1 v7442 = *(i1*)(intptr_t)v7441;
	i8 v7443 = (i8)(intptr_t)(ws+3136);
	i8 v7444 = *(i8*)(intptr_t)v7443;
	i8 v7445 = v7444+(+56);
	*(i1*)(intptr_t)v7445 = v7442;

	i1 v7446 = (i1)+0;
	i8 v7447 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v7447 = v7446;

c02_069f:;

	i8 v7448 = (i8)(intptr_t)(ws+3160);
	i1 v7449 = *(i1*)(intptr_t)v7448;
	i1 v7450 = (i1)+3;
	if (v7449==v7450) goto c02_06a2; else goto c02_06a1;

c02_06a1:;

	i8 v7451 = (i8)(intptr_t)(ws+3096);
	i1 v7452 = *(i1*)(intptr_t)v7451;
	i8 v7453 = (i8)(intptr_t)(ws+3160);
	i1 v7454 = *(i1*)(intptr_t)v7453;
	if (v7452==v7454) goto c02_06a7; else goto c02_06a6;

c02_06a6:;

	i8 v7455 = (i8)(intptr_t)(ws+3128);
	i8 v7456 = *(i8*)(intptr_t)v7455;
	i8 v7457 = v7456+(+16);
	i8 v7458 = (i8)(intptr_t)(ws+3160);
	i1 v7459 = *(i1*)(intptr_t)v7458;
	i8 v7460 = v7459;
	i1 v7461 = (i1)+3;
	i8 v7462 = ((i8)v7460)<<v7461;
	i8 v7463 = v7457+v7462;
	i8 v7464 = *(i8*)(intptr_t)v7463;
	i8 v7465 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v7465 = v7464;

	i8 v7466 = (i8)(intptr_t)(ws+3136);
	i8 v7467 = *(i8*)(intptr_t)v7466;
	i8 v7468 = (i8)+0;
	if (v7467==v7468) goto c02_06ac; else goto c02_06ab;

c02_06ab:;

	i8 v7469 = (i8)(intptr_t)(ws+3136);
	i8 v7470 = *(i8*)(intptr_t)v7469;
	i8 v7471 = v7470+(+56);
	i1 v7472 = *(i1*)(intptr_t)v7471;
	i8 v7473 = (i8)(intptr_t)(ws+3128);
	i8 v7474 = *(i8*)(intptr_t)v7473;
	i8 v7475 = v7474+(+41);
	i1 v7476 = *(i1*)(intptr_t)v7475;
	i1 v7477 = ~v7476;
	i1 v7478 = v7472&v7477;
	i8 v7479 = (i8)(intptr_t)(ws+3136);
	i8 v7480 = *(i8*)(intptr_t)v7479;
	i8 v7481 = v7480+(+56);
	*(i1*)(intptr_t)v7481 = v7478;

	goto c02_06a8;

c02_06ac:;

c02_06a8:;

	goto c02_06a3;

c02_06a7:;

c02_06a3:;

	i8 v7482 = (i8)(intptr_t)(ws+3160);
	i1 v7483 = *(i1*)(intptr_t)v7482;
	i1 v7484 = v7483+(+1);
	i8 v7485 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v7485 = v7484;

	goto c02_069f;

c02_06a2:;

	goto c02_0695;

c02_069b:;

c02_0695:;

	i8 v7486 = (i8)(intptr_t)(ws+3096);
	i1 v7487 = *(i1*)(intptr_t)v7486;
	i1 v7488 = v7487+(+1);
	i8 v7489 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7489 = v7488;

	goto c02_0691;

c02_0694:;

endsub:;
}

// EmitAndFreeInstructions workspace at ws+3160 length ws+8
void f436_EmitAndFreeInstructions(void) {

c02_06ad:;

	i8 v7490 = (i8)(intptr_t)(ws+3112);
	i8 v7491 = *(i8*)(intptr_t)v7490;
	i8 v7492 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v7492 = v7491;

	i8 v7493 = (i8)(intptr_t)(ws+3160);
	i8 v7494 = *(i8*)(intptr_t)v7493;
	i8 v7495 = (i8)+0;
	if (v7494==v7495) goto c02_06b2; else goto c02_06b3;

c02_06b2:;

	goto c02_06ae;

c02_06b3:;

c02_06af:;

	i8 v7496 = (i8)(intptr_t)(ws+3112);
	i8 v7497 = *(i8*)(intptr_t)v7496;
	i8 v7498 = v7497+(+8);
	i8 v7499 = *(i8*)(intptr_t)v7498;
	i8 v7500 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7500 = v7499;

	i8 v7501 = (i8)(intptr_t)(ws+3160);
	i8 v7502 = *(i8*)(intptr_t)v7501;
	i8 v7503 = v7502+(+52);

	void f425_ShuffleRegisters(i8 /* moves */);
	f425_ShuffleRegisters(v7503);

	i8 v7504 = (i8)(intptr_t)(ws+3160);
	i8 v7505 = *(i8*)(intptr_t)v7504;
	i8 v7506 = v7505+(+62);
	i1 v7507 = *(i1*)(intptr_t)v7506;
	i8 v7508 = (i8)(intptr_t)(ws+3160);
	i8 v7509 = *(i8*)(intptr_t)v7508;

	void f248_EmitOneInstruction(i8 /* self */, i1 /* rule */);
	f248_EmitOneInstruction(v7509, v7507);

	i8 v7510 = (i8)(intptr_t)(ws+3160);
	i8 v7511 = *(i8*)(intptr_t)v7510;
	i8 v7512 = v7511+(+44);

	void f425_ShuffleRegisters(i8 /* moves */);
	f425_ShuffleRegisters(v7512);


	void f220_ArchEndInstruction(void);
	f220_ArchEndInstruction();

	i8 v7513 = (i8)(intptr_t)(ws+3160);
	i8 v7514 = *(i8*)(intptr_t)v7513;
	i8 v7515 = v7514+(+16);
	i8 v7516 = *(i8*)(intptr_t)v7515;
	i8 v7517 = v7516+(+58);
	i1 v7518 = *(i1*)(intptr_t)v7517;
	i1 v7519 = (i1)+19;
	if (v7518==v7519) goto c02_06b7; else goto c02_06b8;

c02_06b7:;

	i8 v7520 = (i8)(intptr_t)(ws+3160);
	i8 v7521 = *(i8*)(intptr_t)v7520;
	i8 v7522 = v7521+(+16);
	i8 v7523 = *(i8*)(intptr_t)v7522;

	void f32_Free(i8 /* block */);
	f32_Free(v7523);

	goto c02_06b4;

c02_06b8:;

c02_06b4:;

	i8 v7524 = (i8)(intptr_t)(ws+3160);
	i8 v7525 = *(i8*)(intptr_t)v7524;

	void f32_Free(i8 /* block */);
	f32_Free(v7525);

	goto c02_06ad;

c02_06ae:;

endsub:;
}

// ReallyGenerate workspace at ws+3088 length ws+72
void f427_ReallyGenerate(i8 p6569 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3088) = p6569; /*rootnode */

	i8 v6570 = (i8)+0;
	i8 v6571 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6571 = v6570;

	i8 v6572 = (i8)+0;
	i8 v6573 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v6573 = v6572;

	i8 v6574 = (i8)(intptr_t)(ws+216);
	i8 v6575 = *(i8*)(intptr_t)v6574;
	i8 v6576 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v6576 = v6575;

	i8 v6577 = (i8)(intptr_t)(ws+3088);
	i8 v6578 = *(i8*)(intptr_t)v6577;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v6578);

c02_05e6:;

	i8 v6579 = (i8)(intptr_t)(ws+216);
	i8 v6580 = *(i8*)(intptr_t)v6579;
	i8 v6581 = (i8)(intptr_t)(ws+3120);
	i8 v6582 = *(i8*)(intptr_t)v6581;
	if (v6580==v6582) goto c02_05e9; else goto c02_05e8;

c02_05e8:;

	i8 v6583 = (i8)+63;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v6584;
	f31_Alloc(&v6584, v6583);
	i8 v6585 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v6585 = v6584;

	i8 v6586 = (i8)(intptr_t)(ws+3104);
	i8 v6587 = *(i8*)(intptr_t)v6586;
	i8 v6588 = (i8)+0;
	if (v6587==v6588) goto c02_05ed; else goto c02_05ee;

c02_05ed:;

	i8 v6589 = (i8)(intptr_t)(ws+3128);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v6591 = v6590;

	i8 v6592 = (i8)(intptr_t)(ws+3128);
	i8 v6593 = *(i8*)(intptr_t)v6592;
	i8 v6594 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v6594 = v6593;

	goto c02_05ea;

c02_05ee:;

	i8 v6595 = (i8)(intptr_t)(ws+3128);
	i8 v6596 = *(i8*)(intptr_t)v6595;
	i8 v6597 = (i8)(intptr_t)(ws+3112);
	i8 v6598 = *(i8*)(intptr_t)v6597;
	*(i8*)(intptr_t)v6598 = v6596;

	i8 v6599 = (i8)(intptr_t)(ws+3112);
	i8 v6600 = *(i8*)(intptr_t)v6599;
	i8 v6601 = (i8)(intptr_t)(ws+3128);
	i8 v6602 = *(i8*)(intptr_t)v6601;
	i8 v6603 = v6602+(+8);
	*(i8*)(intptr_t)v6603 = v6600;

	i8 v6604 = (i8)(intptr_t)(ws+3128);
	i8 v6605 = *(i8*)(intptr_t)v6604;
	i8 v6606 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v6606 = v6605;

c02_05ea:;


	void f54_PopNode(i8* /* node */);
	i8 v6607;
	f54_PopNode(&v6607);
	i8 v6608 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v6608 = v6607;



	void f428_InstructionMatcher(void);
	f428_InstructionMatcher();

	i8 v6956 = (i8)(intptr_t)(ws+3128);
	i8 v6957 = *(i8*)(intptr_t)v6956;
	i8 v6958 = v6957+(+40);
	i1 v6959 = *(i1*)(intptr_t)v6958;
	i1 v6960 = (i1)+0;
	if (v6959==v6960) goto c02_0665; else goto c02_0664;

c02_0664:;



	void f433_AllocateRegister(void);
	f433_AllocateRegister();



	void f435_UpdateProducedRegisters(void);
	f435_UpdateProducedRegisters();

	goto c02_0661;

c02_0665:;

c02_0661:;

	goto c02_05e6;

c02_05e9:;



	void f436_EmitAndFreeInstructions(void);
	f436_EmitAndFreeInstructions();


	void f221_ArchEndGroup(void);
	f221_ArchEndGroup();

	i8 v7526 = (i8)(intptr_t)(ws+3088);
	i8 v7527 = *(i8*)(intptr_t)v7526;

	void f56_Discard(i8 /* node */);
	f56_Discard(v7527);

endsub:;
}

// Generate workspace at ws+3072 length ws+9
void f437_Generate(i8 p7530 /* statement */) {
	*(i8*)(intptr_t)(ws+3072) = p7530; /*statement */

	i8 v7531 = (i8)(intptr_t)(ws+3072);
	i8 v7532 = *(i8*)(intptr_t)v7531;
	i8 v7533 = v7532+(+58);
	i1 v7534 = *(i1*)(intptr_t)v7533;
	i8 v7535 = (i8)(intptr_t)(ws+3080);
	*(i1*)(intptr_t)v7535 = v7534;

	i8 v7536 = (i8)(intptr_t)(ws+1219);
	i1 v7537 = *(i1*)(intptr_t)v7536;
	i1 v7538 = (i1)+22;
	if (v7537==v7538) goto c02_06be; else goto c02_06c0;

c02_06c0:;

	i8 v7539 = (i8)(intptr_t)(ws+1219);
	i1 v7540 = *(i1*)(intptr_t)v7539;
	i1 v7541 = (i1)+23;
	if (v7540==v7541) goto c02_06be; else goto c02_06bf;

c02_06be:;

	i8 v7542 = (i8)(intptr_t)(ws+3080);
	i1 v7543 = *(i1*)(intptr_t)v7542;
	i1 v7544 = (i1)+21;
	if (v7543==v7544) goto c02_06c7; else goto c02_06c8;

c02_06c8:;

	i8 v7545 = (i8)(intptr_t)(ws+3080);
	i1 v7546 = *(i1*)(intptr_t)v7545;
	i1 v7547 = (i1)+5;
	if (v7546==v7547) goto c02_06c7; else goto c02_06c6;

c02_06c6:;

	i8 v7548 = (i8)(intptr_t)(ws+3072);
	i8 v7549 = *(i8*)(intptr_t)v7548;

	void f56_Discard(i8 /* node */);
	f56_Discard(v7549);

	goto endsub;

c02_06c7:;

c02_06c1:;

	goto c02_06b9;

c02_06bf:;

c02_06b9:;

	i8 v7550 = (i8)(intptr_t)(ws+3072);
	i8 v7551 = *(i8*)(intptr_t)v7550;
	i8 v7552 = v7551+(+58);
	i1 v7553 = *(i1*)(intptr_t)v7552;
	i8 v7554 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v7554 = v7553;

	i8 v7555 = (i8)(intptr_t)(ws+3072);
	i8 v7556 = *(i8*)(intptr_t)v7555;

	void f427_ReallyGenerate(i8 /* rootnode */);
	f427_ReallyGenerate(v7556);

endsub:;
}

// push_and_free workspace at ws+3072 length ws+0
void f439_push_and_free(void) {

	i8 v7598 = (i8)(intptr_t)(ws+3040);
	i2 v7599 = *(i2*)(intptr_t)v7598;
	i8 v7600 = (i8)(intptr_t)(ws+3056);
	i8 v7601 = *(i8*)(intptr_t)v7600;
	*(i2*)(intptr_t)v7601 = v7599;

	i8 v7602 = (i8)(intptr_t)(ws+3042);
	i2 v7603 = *(i2*)(intptr_t)v7602;
	i8 v7604 = (i8)(intptr_t)(ws+3056);
	i8 v7605 = *(i8*)(intptr_t)v7604;
	i8 v7606 = v7605+(+2);
	*(i2*)(intptr_t)v7606 = v7603;

	i8 v7607 = (i8)(intptr_t)(ws+3044);
	i2 v7608 = *(i2*)(intptr_t)v7607;
	i8 v7609 = (i8)(intptr_t)(ws+3056);
	i8 v7610 = *(i8*)(intptr_t)v7609;
	i8 v7611 = v7610+(+4);
	*(i2*)(intptr_t)v7611 = v7608;

	i8 v7612 = (i8)+0;
	i8 v7613 = (i8)(intptr_t)(ws+3032);
	i8 v7614 = *(i8*)(intptr_t)v7613;
	i8 v7615 = v7614+(+24);
	*(i8*)(intptr_t)v7615 = v7612;

	i8 v7616 = (i8)+0;
	i8 v7617 = (i8)(intptr_t)(ws+3032);
	i8 v7618 = *(i8*)(intptr_t)v7617;
	i8 v7619 = v7618+(+32);
	*(i8*)(intptr_t)v7619 = v7616;

	i8 v7620 = (i8)(intptr_t)(ws+3056);
	i8 v7621 = *(i8*)(intptr_t)v7620;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v7621);

	i8 v7622 = (i8)(intptr_t)(ws+3048);
	i8 v7623 = *(i8*)(intptr_t)v7622;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v7623);

	i8 v7624 = (i8)(intptr_t)(ws+3032);
	i8 v7625 = *(i8*)(intptr_t)v7624;

	void f56_Discard(i8 /* node */);
	f56_Discard(v7625);

endsub:;
}

// GenerateConditional workspace at ws+3016 length ws+52
void f438_GenerateConditional(i8 p7557 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3016) = p7557; /*rootnode */

	i8 v7558 = (i8)(intptr_t)(ws+216);
	i8 v7559 = *(i8*)(intptr_t)v7558;
	i8 v7560 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7560 = v7559;

	i8 v7561 = (i8)(intptr_t)(ws+3016);
	i8 v7562 = *(i8*)(intptr_t)v7561;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v7562);

c02_06cb:;

	i8 v7563 = (i8)(intptr_t)(ws+216);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = (i8)(intptr_t)(ws+3024);
	i8 v7566 = *(i8*)(intptr_t)v7565;
	if (v7564==v7566) goto c02_06ce; else goto c02_06cd;

c02_06cd:;


	void f54_PopNode(i8* /* node */);
	i8 v7567;
	f54_PopNode(&v7567);
	i8 v7568 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v7568 = v7567;

	i8 v7569 = (i8)(intptr_t)(ws+3032);
	i8 v7570 = *(i8*)(intptr_t)v7569;
	i2 v7571 = *(i2*)(intptr_t)v7570;
	i8 v7572 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v7572 = v7571;

	i8 v7573 = (i8)(intptr_t)(ws+3032);
	i8 v7574 = *(i8*)(intptr_t)v7573;
	i8 v7575 = v7574+(+2);
	i2 v7576 = *(i2*)(intptr_t)v7575;
	i8 v7577 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v7577 = v7576;

	i8 v7578 = (i8)(intptr_t)(ws+3032);
	i8 v7579 = *(i8*)(intptr_t)v7578;
	i8 v7580 = v7579+(+4);
	i2 v7581 = *(i2*)(intptr_t)v7580;
	i8 v7582 = (i8)(intptr_t)(ws+3044);
	*(i2*)(intptr_t)v7582 = v7581;

	i8 v7583 = (i8)(intptr_t)(ws+3032);
	i8 v7584 = *(i8*)(intptr_t)v7583;
	i8 v7585 = v7584+(+24);
	i8 v7586 = *(i8*)(intptr_t)v7585;
	i8 v7587 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v7587 = v7586;

	i8 v7588 = (i8)(intptr_t)(ws+3032);
	i8 v7589 = *(i8*)(intptr_t)v7588;
	i8 v7590 = v7589+(+32);
	i8 v7591 = *(i8*)(intptr_t)v7590;
	i8 v7592 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7592 = v7591;

	i8 v7593 = (i8)(intptr_t)(ws+3032);
	i8 v7594 = *(i8*)(intptr_t)v7593;
	i8 v7595 = v7594+(+58);
	i1 v7596 = *(i1*)(intptr_t)v7595;
	i8 v7597 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v7597 = v7596;


	i8 v7626 = (i8)(intptr_t)(ws+3064);
	i1 v7627 = *(i1*)(intptr_t)v7626;

	if (v7627 != +54) goto c02_06d0;


	void f209_AllocLabel(i2* /* label */);
	i2 v7628;
	f209_AllocLabel(&v7628);
	i8 v7629 = (i8)(intptr_t)(ws+3066);
	*(i2*)(intptr_t)v7629 = v7628;

	i8 v7630 = (i8)(intptr_t)(ws+3040);
	i2 v7631 = *(i2*)(intptr_t)v7630;
	i8 v7632 = (i8)(intptr_t)(ws+3048);
	i8 v7633 = *(i8*)(intptr_t)v7632;
	*(i2*)(intptr_t)v7633 = v7631;

	i8 v7634 = (i8)(intptr_t)(ws+3066);
	i2 v7635 = *(i2*)(intptr_t)v7634;
	i8 v7636 = (i8)(intptr_t)(ws+3048);
	i8 v7637 = *(i8*)(intptr_t)v7636;
	i8 v7638 = v7637+(+2);
	*(i2*)(intptr_t)v7638 = v7635;

	i8 v7639 = (i8)(intptr_t)(ws+3066);
	i2 v7640 = *(i2*)(intptr_t)v7639;
	i8 v7641 = (i8)(intptr_t)(ws+3048);
	i8 v7642 = *(i8*)(intptr_t)v7641;
	i8 v7643 = v7642+(+4);
	*(i2*)(intptr_t)v7643 = v7640;


	void f439_push_and_free(void);
	f439_push_and_free();

	goto c02_06cf;

c02_06d0:;

	if (v7627 != +53) goto c02_06d1;


	void f209_AllocLabel(i2* /* label */);
	i2 v7644;
	f209_AllocLabel(&v7644);
	i8 v7645 = (i8)(intptr_t)(ws+3066);
	*(i2*)(intptr_t)v7645 = v7644;

	i8 v7646 = (i8)(intptr_t)(ws+3066);
	i2 v7647 = *(i2*)(intptr_t)v7646;
	i8 v7648 = (i8)(intptr_t)(ws+3048);
	i8 v7649 = *(i8*)(intptr_t)v7648;
	*(i2*)(intptr_t)v7649 = v7647;

	i8 v7650 = (i8)(intptr_t)(ws+3042);
	i2 v7651 = *(i2*)(intptr_t)v7650;
	i8 v7652 = (i8)(intptr_t)(ws+3048);
	i8 v7653 = *(i8*)(intptr_t)v7652;
	i8 v7654 = v7653+(+2);
	*(i2*)(intptr_t)v7654 = v7651;

	i8 v7655 = (i8)(intptr_t)(ws+3066);
	i2 v7656 = *(i2*)(intptr_t)v7655;
	i8 v7657 = (i8)(intptr_t)(ws+3048);
	i8 v7658 = *(i8*)(intptr_t)v7657;
	i8 v7659 = v7658+(+4);
	*(i2*)(intptr_t)v7659 = v7656;


	void f439_push_and_free(void);
	f439_push_and_free();

	goto c02_06cf;

c02_06d1:;

	i8 v7660 = (i8)(intptr_t)(ws+3064);
	i1 v7661 = *(i1*)(intptr_t)v7660;
	i1 v7662 = (i1)+55;
	if (v7661<v7662) goto c02_06d8; else goto c02_06d9;

c02_06d9:;

	i1 v7663 = (i1)+69;
	i8 v7664 = (i8)(intptr_t)(ws+3064);
	i1 v7665 = *(i1*)(intptr_t)v7664;
	if (v7663<v7665) goto c02_06d8; else goto c02_06d7;

c02_06d7:;

	i8 v7666 = (i8)(intptr_t)(ws+3032);
	i8 v7667 = *(i8*)(intptr_t)v7666;
	i8 v7668 = v7667+(+6);
	i1 v7669 = *(i1*)(intptr_t)v7668;
	i1 v7670 = (i1)+0;
	if (v7669==v7670) goto c02_06de; else goto c02_06dd;

c02_06dd:;

	i8 v7671 = (i8)(intptr_t)(ws+3042);
	i2 v7672 = *(i2*)(intptr_t)v7671;
	i8 v7673 = (i8)(intptr_t)(ws+3032);
	i8 v7674 = *(i8*)(intptr_t)v7673;
	*(i2*)(intptr_t)v7674 = v7672;

	i8 v7675 = (i8)(intptr_t)(ws+3040);
	i2 v7676 = *(i2*)(intptr_t)v7675;
	i8 v7677 = (i8)(intptr_t)(ws+3032);
	i8 v7678 = *(i8*)(intptr_t)v7677;
	i8 v7679 = v7678+(+2);
	*(i2*)(intptr_t)v7679 = v7676;

	i1 v7680 = (i1)+0;
	i8 v7681 = (i8)(intptr_t)(ws+3032);
	i8 v7682 = *(i8*)(intptr_t)v7681;
	i8 v7683 = v7682+(+6);
	*(i1*)(intptr_t)v7683 = v7680;

	goto c02_06da;

c02_06de:;

c02_06da:;

	goto c02_06d2;

c02_06d8:;

c02_06d2:;

	i8 v7684 = (i8)(intptr_t)(ws+3032);
	i8 v7685 = *(i8*)(intptr_t)v7684;

	void f437_Generate(i8 /* statement */);
	f437_Generate(v7685);

	i8 v7686 = (i8)(intptr_t)(ws+3044);
	i2 v7687 = *(i2*)(intptr_t)v7686;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v7688;
	f126_MidLabel(&v7688, v7687);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v7688);

c02_06cf:;


	goto c02_06cb;

c02_06ce:;

endsub:;
}

// InitVariable workspace at ws+3016 length ws+24
void f440_InitVariable(i8 p7689 /* type */, i8 p7690 /* symbol */, i8 p7691 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p7691; /*subr */
	*(i8*)(intptr_t)(ws+3024) = p7690; /*symbol */
	*(i8*)(intptr_t)(ws+3032) = p7689; /*type */

	i8 v7692 = (i8)(intptr_t)(ws+3032);
	i8 v7693 = *(i8*)(intptr_t)v7692;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v7693);

	i8 v7694 = (i8)(intptr_t)(ws+3032);
	i8 v7695 = *(i8*)(intptr_t)v7694;
	i8 v7696 = (i8)(intptr_t)(ws+3024);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	*(i8*)(intptr_t)v7697 = v7695;

	i8 v7698 = (i8)(intptr_t)(ws+3016);
	i8 v7699 = *(i8*)(intptr_t)v7698;
	i8 v7700 = (i8)(intptr_t)(ws+3024);
	i8 v7701 = *(i8*)(intptr_t)v7700;
	i8 v7702 = v7701+(+8);
	*(i8*)(intptr_t)v7702 = v7699;

	i8 v7703 = (i8)(intptr_t)(ws+3024);
	i8 v7704 = *(i8*)(intptr_t)v7703;

	void f217_ArchInitVariable(i8 /* symbol */);
	f217_ArchInitVariable(v7704);

endsub:;
}

// MakePointerType workspace at ws+3056 length ws+16
void f441_MakePointerType(i8* p7705 /* ptrtype */, i8 p7706 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p7706; /*type */

	i8 v7707 = (i8)(intptr_t)(ws+3056);
	i8 v7708 = *(i8*)(intptr_t)v7707;
	i8 v7709 = v7708+(+32);
	i8 v7710 = *(i8*)(intptr_t)v7709;
	i8 v7711 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v7711 = v7710;

	i8 v7712 = (i8)(intptr_t)(ws+3064);
	i8 v7713 = *(i8*)(intptr_t)v7712;
	i8 v7714 = (i8)+0;
	if (v7713==v7714) goto c02_06e2; else goto c02_06e3;

c02_06e2:;

	i8 v7715 = (i8)+0;
	i8 v7716 = (i8)+0;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v7717;
	f195_AddSymbol(&v7717, v7716, v7715);
	i8 v7718 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v7718 = v7717;

	i8 v7719 = (i8)(intptr_t)(ws+3056);
	i8 v7720 = *(i8*)(intptr_t)v7719;
	i8 v7721 = v7720+(+48);
	i8 v7722 = *(i8*)(intptr_t)v7721;

	void f57_StrDupBraced(i8* /* news */, i8 /* s */);
	i8 v7723;
	f57_StrDupBraced(&v7723, v7722);
	i8 v7724 = (i8)(intptr_t)(ws+3064);
	i8 v7725 = *(i8*)(intptr_t)v7724;
	i8 v7726 = v7725+(+48);
	*(i8*)(intptr_t)v7726 = v7723;

	i1 v7727 = (i1)+30;
	i8 v7728 = (i8)(intptr_t)(ws+3064);
	i8 v7729 = *(i8*)(intptr_t)v7728;
	i8 v7730 = v7729+(+46);
	*(i1*)(intptr_t)v7730 = v7727;

	i1 v7731 = (i1)+3;
	i8 v7732 = (i8)(intptr_t)(ws+3064);
	i8 v7733 = *(i8*)(intptr_t)v7732;
	i8 v7734 = v7733+(+40);
	*(i1*)(intptr_t)v7734 = v7731;

	i8 v7735 = (i8)(intptr_t)(ws+1056);
	i8 v7736 = *(i8*)(intptr_t)v7735;
	i8 v7737 = v7736+(+42);
	i2 v7738 = *(i2*)(intptr_t)v7737;
	i8 v7739 = (i8)(intptr_t)(ws+3064);
	i8 v7740 = *(i8*)(intptr_t)v7739;
	i8 v7741 = v7740+(+42);
	*(i2*)(intptr_t)v7741 = v7738;

	i8 v7742 = (i8)(intptr_t)(ws+1056);
	i8 v7743 = *(i8*)(intptr_t)v7742;
	i8 v7744 = v7743+(+41);
	i1 v7745 = *(i1*)(intptr_t)v7744;
	i8 v7746 = (i8)(intptr_t)(ws+3064);
	i8 v7747 = *(i8*)(intptr_t)v7746;
	i8 v7748 = v7747+(+41);
	*(i1*)(intptr_t)v7748 = v7745;

	i8 v7749 = (i8)(intptr_t)(ws+1056);
	i8 v7750 = *(i8*)(intptr_t)v7749;
	i8 v7751 = v7750+(+44);
	i2 v7752 = *(i2*)(intptr_t)v7751;
	i8 v7753 = (i8)(intptr_t)(ws+3064);
	i8 v7754 = *(i8*)(intptr_t)v7753;
	i8 v7755 = v7754+(+44);
	*(i2*)(intptr_t)v7755 = v7752;

	i8 v7756 = (i8)(intptr_t)(ws+3056);
	i8 v7757 = *(i8*)(intptr_t)v7756;
	i8 v7758 = (i8)(intptr_t)(ws+3064);
	i8 v7759 = *(i8*)(intptr_t)v7758;
	*(i8*)(intptr_t)v7759 = v7757;

	i8 v7760 = (i8)(intptr_t)(ws+3064);
	i8 v7761 = *(i8*)(intptr_t)v7760;
	i8 v7762 = (i8)(intptr_t)(ws+3056);
	i8 v7763 = *(i8*)(intptr_t)v7762;
	i8 v7764 = v7763+(+32);
	*(i8*)(intptr_t)v7764 = v7761;

	goto c02_06df;

c02_06e3:;

c02_06df:;

endsub:;
	*p7705 = *(i8*)(intptr_t)(ws+3064);
}

// MakeArrayType workspace at ws+3008 length ws+26
void f442_MakeArrayType(i8* p7765 /* arraytype */, i2 p7766 /* size */, i8 p7767 /* type */) {
	*(i8*)(intptr_t)(ws+3008) = p7767; /*type */
	*(i2*)(intptr_t)(ws+3016) = p7766; /*size */

	i8 v7768 = (i8)(intptr_t)(ws+3008);
	i8 v7769 = *(i8*)(intptr_t)v7768;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v7769);

	i8 v7770 = (i8)+0;
	i8 v7771 = (i8)+0;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v7772;
	f195_AddSymbol(&v7772, v7771, v7770);
	i8 v7773 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7773 = v7772;

	i8 v7774 = (i8)(intptr_t)(ws+3008);
	i8 v7775 = *(i8*)(intptr_t)v7774;
	i8 v7776 = v7775+(+48);
	i8 v7777 = *(i8*)(intptr_t)v7776;
	i8 v7778 = (i8)(intptr_t)(ws+3016);
	i2 v7779 = *(i2*)(intptr_t)v7778;

	void f58_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	i8 v7780;
	f58_StrDupArrayed(&v7780, v7779, v7777);
	i8 v7781 = (i8)(intptr_t)(ws+3024);
	i8 v7782 = *(i8*)(intptr_t)v7781;
	i8 v7783 = v7782+(+48);
	*(i8*)(intptr_t)v7783 = v7780;

	i1 v7784 = (i1)+30;
	i8 v7785 = (i8)(intptr_t)(ws+3024);
	i8 v7786 = *(i8*)(intptr_t)v7785;
	i8 v7787 = v7786+(+46);
	*(i1*)(intptr_t)v7787 = v7784;

	i1 v7788 = (i1)+4;
	i8 v7789 = (i8)(intptr_t)(ws+3024);
	i8 v7790 = *(i8*)(intptr_t)v7789;
	i8 v7791 = v7790+(+40);
	*(i1*)(intptr_t)v7791 = v7788;

	i2 v7792 = (i2)+0;
	i8 v7793 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v7793 = v7792;

	i2 v7794 = (i2)+0;
	i8 v7795 = (i8)(intptr_t)(ws+3016);
	i2 v7796 = *(i2*)(intptr_t)v7795;
	if (v7794<v7796) goto c02_06e7; else goto c02_06e8;

c02_06e7:;

	i8 v7797 = (i8)(intptr_t)(ws+3008);
	i8 v7798 = *(i8*)(intptr_t)v7797;
	i8 v7799 = v7798+(+44);
	i2 v7800 = *(i2*)(intptr_t)v7799;
	i8 v7801 = (i8)(intptr_t)(ws+3016);
	i2 v7802 = *(i2*)(intptr_t)v7801;
	i2 v7803 = v7802+(-1);
	i2 v7804 = v7800*v7803;
	i8 v7805 = (i8)(intptr_t)(ws+3008);
	i8 v7806 = *(i8*)(intptr_t)v7805;
	i8 v7807 = v7806+(+42);
	i2 v7808 = *(i2*)(intptr_t)v7807;
	i2 v7809 = v7804+v7808;
	i8 v7810 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v7810 = v7809;

	goto c02_06e4;

c02_06e8:;

c02_06e4:;

	i8 v7811 = (i8)(intptr_t)(ws+3032);
	i2 v7812 = *(i2*)(intptr_t)v7811;
	i8 v7813 = (i8)(intptr_t)(ws+3024);
	i8 v7814 = *(i8*)(intptr_t)v7813;
	i8 v7815 = v7814+(+42);
	*(i2*)(intptr_t)v7815 = v7812;

	i8 v7816 = (i8)(intptr_t)(ws+3008);
	i8 v7817 = *(i8*)(intptr_t)v7816;
	i8 v7818 = v7817+(+41);
	i1 v7819 = *(i1*)(intptr_t)v7818;
	i8 v7820 = (i8)(intptr_t)(ws+3024);
	i8 v7821 = *(i8*)(intptr_t)v7820;
	i8 v7822 = v7821+(+41);
	*(i1*)(intptr_t)v7822 = v7819;

	i8 v7823 = (i8)(intptr_t)(ws+3008);
	i8 v7824 = *(i8*)(intptr_t)v7823;
	i8 v7825 = v7824+(+44);
	i2 v7826 = *(i2*)(intptr_t)v7825;
	i8 v7827 = (i8)(intptr_t)(ws+3016);
	i2 v7828 = *(i2*)(intptr_t)v7827;
	i2 v7829 = v7826*v7828;
	i8 v7830 = (i8)(intptr_t)(ws+3024);
	i8 v7831 = *(i8*)(intptr_t)v7830;
	i8 v7832 = v7831+(+44);
	*(i2*)(intptr_t)v7832 = v7829;

	i8 v7833 = (i8)(intptr_t)(ws+3008);
	i8 v7834 = *(i8*)(intptr_t)v7833;
	i8 v7835 = (i8)(intptr_t)(ws+3024);
	i8 v7836 = *(i8*)(intptr_t)v7835;
	*(i8*)(intptr_t)v7836 = v7834;

	i8 v7837 = (i8)(intptr_t)(ws+3016);
	i2 v7838 = *(i2*)(intptr_t)v7837;
	i8 v7839 = (i8)(intptr_t)(ws+3024);
	i8 v7840 = *(i8*)(intptr_t)v7839;
	i8 v7841 = v7840+(+8);
	*(i2*)(intptr_t)v7841 = v7838;

	i4 v7842 = (i4)+0;
	i8 v7843 = (i8)(intptr_t)(ws+3016);
	i2 v7844 = *(i2*)(intptr_t)v7843;
	i2 v7845 = v7844+(-1);
	i4 v7846 = v7845;

	void f216_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	i8 v7847;
	f216_ArchGuessIntType(&v7847, v7846, v7842);
	i8 v7848 = (i8)(intptr_t)(ws+3024);
	i8 v7849 = *(i8*)(intptr_t)v7848;
	i8 v7850 = v7849+(+16);
	*(i8*)(intptr_t)v7850 = v7847;

endsub:;
	*p7765 = *(i8*)(intptr_t)(ws+3024);
}

// DestructSymbol workspace at ws+3072 length ws+24
void f444_DestructSymbol(i8 p7852 /* symbol */) {
	*(i8*)(intptr_t)(ws+3072) = p7852; /*symbol */

	i8 v7853 = (i8)(intptr_t)(ws+3072);
	i8 v7854 = *(i8*)(intptr_t)v7853;
	i8 v7855 = v7854+(+46);
	i1 v7856 = *(i1*)(intptr_t)v7855;
	i1 v7857 = (i1)+30;
	if (v7856==v7857) goto c02_06ec; else goto c02_06ed;

c02_06ec:;

	i8 v7858 = (i8)(intptr_t)(ws+3072);
	i8 v7859 = *(i8*)(intptr_t)v7858;
	i8 v7860 = v7859+(+32);
	i8 v7861 = *(i8*)(intptr_t)v7860;
	i8 v7862 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v7862 = v7861;

c02_06f0:;

	i8 v7863 = (i8)(intptr_t)(ws+3080);
	i8 v7864 = *(i8*)(intptr_t)v7863;
	i8 v7865 = (i8)+0;
	if (v7864==v7865) goto c02_06f3; else goto c02_06f2;

c02_06f2:;

	i8 v7866 = (i8)(intptr_t)(ws+3080);
	i8 v7867 = *(i8*)(intptr_t)v7866;
	i8 v7868 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v7868 = v7867;

	i8 v7869 = (i8)(intptr_t)(ws+3080);
	i8 v7870 = *(i8*)(intptr_t)v7869;
	i8 v7871 = v7870+(+32);
	i8 v7872 = *(i8*)(intptr_t)v7871;
	i8 v7873 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v7873 = v7872;

	i8 v7874 = (i8)(intptr_t)(ws+3088);
	i8 v7875 = *(i8*)(intptr_t)v7874;
	i8 v7876 = v7875+(+48);
	i8 v7877 = *(i8*)(intptr_t)v7876;

	void f32_Free(i8 /* block */);
	f32_Free(v7877);

	i8 v7878 = (i8)(intptr_t)(ws+3088);
	i8 v7879 = *(i8*)(intptr_t)v7878;

	void f32_Free(i8 /* block */);
	f32_Free(v7879);

	goto c02_06f0;

c02_06f3:;

	goto c02_06e9;

c02_06ed:;

c02_06e9:;

	i8 v7880 = (i8)(intptr_t)(ws+3072);
	i8 v7881 = *(i8*)(intptr_t)v7880;
	i8 v7882 = v7881+(+48);
	i8 v7883 = *(i8*)(intptr_t)v7882;

	void f32_Free(i8 /* block */);
	f32_Free(v7883);

	i8 v7884 = (i8)(intptr_t)(ws+3072);
	i8 v7885 = *(i8*)(intptr_t)v7884;

	void f32_Free(i8 /* block */);
	f32_Free(v7885);

endsub:;
}

// DestructSubroutine workspace at ws+3048 length ws+24
void f445_DestructSubroutine(i8 p7886 /* subr */) {
	*(i8*)(intptr_t)(ws+3048) = p7886; /*subr */

	i8 v7887 = (i8)(intptr_t)(ws+3048);
	i8 v7888 = *(i8*)(intptr_t)v7887;
	i8 v7889 = v7888+(+16);
	i8 v7890 = *(i8*)(intptr_t)v7889;
	i8 v7891 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7891 = v7890;

c02_06f6:;

	i8 v7892 = (i8)(intptr_t)(ws+3056);
	i8 v7893 = *(i8*)(intptr_t)v7892;
	i8 v7894 = (i8)+0;
	if (v7893==v7894) goto c02_06f9; else goto c02_06f8;

c02_06f8:;

	i8 v7895 = (i8)(intptr_t)(ws+3056);
	i8 v7896 = *(i8*)(intptr_t)v7895;
	i8 v7897 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v7897 = v7896;

	i8 v7898 = (i8)(intptr_t)(ws+3056);
	i8 v7899 = *(i8*)(intptr_t)v7898;
	i8 v7900 = v7899+(+56);
	i8 v7901 = *(i8*)(intptr_t)v7900;
	i8 v7902 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v7902 = v7901;

	i8 v7903 = (i8)(intptr_t)(ws+3064);
	i8 v7904 = *(i8*)(intptr_t)v7903;

	void f444_DestructSymbol(i8 /* symbol */);
	f444_DestructSymbol(v7904);

	goto c02_06f6;

c02_06f9:;

	i8 v7905 = (i8)(intptr_t)(ws+3048);
	i8 v7906 = *(i8*)(intptr_t)v7905;

	void f32_Free(i8 /* block */);
	f32_Free(v7906);

endsub:;
}

// DestructSubroutineContents workspace at ws+3016 length ws+32
void f443_DestructSubroutineContents(i8 p7851 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p7851; /*subr */



	i8 v7907 = (i8)(intptr_t)(ws+3016);
	i8 v7908 = *(i8*)(intptr_t)v7907;
	i8 v7909 = v7908+(+48);
	i8 v7910 = *(i8*)(intptr_t)v7909;
	i8 v7911 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7911 = v7910;

	i8 v7912 = (i8)(intptr_t)(ws+3024);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = (i8)+0;
	if (v7913==v7914) goto c02_06fd; else goto c02_06fe;

c02_06fd:;

	i8 v7915 = (i8)(intptr_t)(ws+3016);
	i8 v7916 = *(i8*)(intptr_t)v7915;
	i8 v7917 = v7916+(+40);
	i8 v7918 = *(i8*)(intptr_t)v7917;
	i8 v7919 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7919 = v7918;

	goto c02_06fa;

c02_06fe:;

c02_06fa:;

	i8 v7920 = (i8)(intptr_t)(ws+3024);
	i8 v7921 = *(i8*)(intptr_t)v7920;
	i8 v7922 = (i8)+0;
	if (v7921==v7922) goto c02_0703; else goto c02_0702;

c02_0702:;

c02_0704:;

	i8 v7923 = (i8)(intptr_t)(ws+3024);
	i8 v7924 = *(i8*)(intptr_t)v7923;
	i8 v7925 = v7924+(+16);
	i8 v7926 = *(i8*)(intptr_t)v7925;
	i8 v7927 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v7927 = v7926;

	i8 v7928 = (i8)(intptr_t)(ws+3032);
	i8 v7929 = *(i8*)(intptr_t)v7928;
	i8 v7930 = (i8)+0;
	if (v7929==v7930) goto c02_0709; else goto c02_070a;

c02_0709:;

	goto c02_0705;

c02_070a:;

c02_0706:;

	i8 v7931 = (i8)(intptr_t)(ws+3032);
	i8 v7932 = *(i8*)(intptr_t)v7931;
	i8 v7933 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v7933 = v7932;

	goto c02_0704;

c02_0705:;

	goto c02_06ff;

c02_0703:;

c02_06ff:;

	i8 v7934 = (i8)(intptr_t)(ws+3016);
	i8 v7935 = *(i8*)(intptr_t)v7934;
	i8 v7936 = v7935+(+16);
	i8 v7937 = *(i8*)(intptr_t)v7936;
	i8 v7938 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v7938 = v7937;

	i8 v7939 = (i8)(intptr_t)(ws+3024);
	i8 v7940 = *(i8*)(intptr_t)v7939;
	i8 v7941 = (i8)+0;
	if (v7940==v7941) goto c02_070f; else goto c02_070e;

c02_070e:;

	i8 v7942 = (i8)(intptr_t)(ws+3024);
	i8 v7943 = *(i8*)(intptr_t)v7942;
	i8 v7944 = v7943+(+56);
	i8 v7945 = *(i8*)(intptr_t)v7944;
	i8 v7946 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v7946 = v7945;

	goto c02_070b;

c02_070f:;

c02_070b:;

c02_0712:;

	i8 v7947 = (i8)(intptr_t)(ws+3040);
	i8 v7948 = *(i8*)(intptr_t)v7947;
	i8 v7949 = (i8)+0;
	if (v7948==v7949) goto c02_0715; else goto c02_0714;

c02_0714:;

	i8 v7950 = (i8)(intptr_t)(ws+3040);
	i8 v7951 = *(i8*)(intptr_t)v7950;
	i8 v7952 = v7951+(+56);
	i8 v7953 = *(i8*)(intptr_t)v7952;
	i8 v7954 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v7954 = v7953;

	i8 v7955 = (i8)(intptr_t)(ws+3040);
	i8 v7956 = *(i8*)(intptr_t)v7955;
	i8 v7957 = v7956+(+46);
	i1 v7958 = *(i1*)(intptr_t)v7957;
	i1 v7959 = (i1)+25;
	if (v7958==v7959) goto c02_0719; else goto c02_071a;

c02_0719:;

	i8 v7960 = (i8)(intptr_t)(ws+3040);
	i8 v7961 = *(i8*)(intptr_t)v7960;
	i8 v7962 = *(i8*)(intptr_t)v7961;

	void f445_DestructSubroutine(i8 /* subr */);
	f445_DestructSubroutine(v7962);

	goto c02_0716;

c02_071a:;

c02_0716:;

	i8 v7963 = (i8)(intptr_t)(ws+3040);
	i8 v7964 = *(i8*)(intptr_t)v7963;

	void f444_DestructSymbol(i8 /* symbol */);
	f444_DestructSymbol(v7964);

	i8 v7965 = (i8)(intptr_t)(ws+3032);
	i8 v7966 = *(i8*)(intptr_t)v7965;
	i8 v7967 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v7967 = v7966;

	goto c02_0712;

c02_0715:;

	i8 v7968 = (i8)(intptr_t)(ws+3024);
	i8 v7969 = *(i8*)(intptr_t)v7968;
	i8 v7970 = (i8)+0;
	if (v7969==v7970) goto c02_071f; else goto c02_071e;

c02_071e:;

	i8 v7971 = (i8)+0;
	i8 v7972 = (i8)(intptr_t)(ws+3024);
	i8 v7973 = *(i8*)(intptr_t)v7972;
	i8 v7974 = v7973+(+56);
	*(i8*)(intptr_t)v7974 = v7971;

	goto c02_071b;

c02_071f:;

	i8 v7975 = (i8)+0;
	i8 v7976 = (i8)(intptr_t)(ws+3016);
	i8 v7977 = *(i8*)(intptr_t)v7976;
	i8 v7978 = v7977+(+16);
	*(i8*)(intptr_t)v7978 = v7975;

c02_071b:;

	i8 v7979 = (i8)(intptr_t)(ws+3024);
	i8 v7980 = *(i8*)(intptr_t)v7979;
	i8 v7981 = (i8)(intptr_t)(ws+3016);
	i8 v7982 = *(i8*)(intptr_t)v7981;
	i8 v7983 = v7982+(+24);
	*(i8*)(intptr_t)v7983 = v7980;

endsub:;
}
const i1 c02_s016d[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
const i1 c02_s016e[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };

// expr_i_cant_do_that workspace at ws+3104 length ws+16
void f446_expr_i_cant_do_that(i8 p7984 /* rhs */, i8 p7985 /* lhs */) {
	*(i8*)(intptr_t)(ws+3104) = p7985; /*lhs */
	*(i8*)(intptr_t)(ws+3112) = p7984; /*rhs */


	void f59_StartError(void);
	f59_StartError();

	i8 v7986 = (i8)(intptr_t)(ws+3104);
	i8 v7987 = *(i8*)(intptr_t)v7986;
	i8 v7988 = v7987+(+16);
	i8 v7989 = *(i8*)(intptr_t)v7988;
	i8 v7990 = v7989+(+48);
	i8 v7991 = *(i8*)(intptr_t)v7990;

	void f11_print(i8 /* ptr */);
	f11_print(v7991);

	i8 v7992 = (i8)(intptr_t)c02_s016d;

	void f11_print(i8 /* ptr */);
	f11_print(v7992);

	i8 v7993 = (i8)(intptr_t)(ws+3112);
	i8 v7994 = *(i8*)(intptr_t)v7993;
	i8 v7995 = v7994+(+16);
	i8 v7996 = *(i8*)(intptr_t)v7995;
	i8 v7997 = v7996+(+48);
	i8 v7998 = *(i8*)(intptr_t)v7997;

	void f11_print(i8 /* ptr */);
	f11_print(v7998);

	i8 v7999 = (i8)(intptr_t)c02_s016e;

	void f11_print(i8 /* ptr */);
	f11_print(v7999);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}
const i1 c02_s016f[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
const i1 c02_s0170[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
const i1 c02_s0171[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
const i1 c02_s0172[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };

// CheckExpressionType workspace at ws+3072 length ws+16
void f447_CheckExpressionType(i8 p8000 /* type */, i8 p8001 /* node */) {
	*(i8*)(intptr_t)(ws+3072) = p8001; /*node */
	*(i8*)(intptr_t)(ws+3080) = p8000; /*type */

	i8 v8002 = (i8)(intptr_t)(ws+3072);
	i8 v8003 = *(i8*)(intptr_t)v8002;
	i8 v8004 = v8003+(+16);
	i8 v8005 = *(i8*)(intptr_t)v8004;
	i8 v8006 = (i8)+0;
	if (v8005==v8006) goto c02_0723; else goto c02_0724;

c02_0723:;

	i8 v8007 = (i8)(intptr_t)(ws+3080);
	i8 v8008 = *(i8*)(intptr_t)v8007;
	i8 v8009 = (i8)(intptr_t)(ws+3072);
	i8 v8010 = *(i8*)(intptr_t)v8009;
	i8 v8011 = v8010+(+16);
	*(i8*)(intptr_t)v8011 = v8008;

	goto c02_0720;

c02_0724:;

c02_0720:;

	i8 v8012 = (i8)(intptr_t)(ws+3072);
	i8 v8013 = *(i8*)(intptr_t)v8012;
	i8 v8014 = v8013+(+16);
	i8 v8015 = *(i8*)(intptr_t)v8014;
	i8 v8016 = (i8)(intptr_t)(ws+3080);
	i8 v8017 = *(i8*)(intptr_t)v8016;
	if (v8015==v8017) goto c02_0729; else goto c02_0728;

c02_0728:;


	void f59_StartError(void);
	f59_StartError();

	i8 v8018 = (i8)(intptr_t)c02_s016f;

	void f11_print(i8 /* ptr */);
	f11_print(v8018);

	i8 v8019 = (i8)(intptr_t)(ws+3072);
	i8 v8020 = *(i8*)(intptr_t)v8019;
	i8 v8021 = v8020+(+16);
	i8 v8022 = *(i8*)(intptr_t)v8021;
	i8 v8023 = v8022+(+48);
	i8 v8024 = *(i8*)(intptr_t)v8023;

	void f11_print(i8 /* ptr */);
	f11_print(v8024);

	i8 v8025 = (i8)(intptr_t)c02_s0170;

	void f11_print(i8 /* ptr */);
	f11_print(v8025);

	i8 v8026 = (i8)(intptr_t)(ws+3080);
	i8 v8027 = *(i8*)(intptr_t)v8026;
	i8 v8028 = v8027+(+48);
	i8 v8029 = *(i8*)(intptr_t)v8028;

	void f11_print(i8 /* ptr */);
	f11_print(v8029);

	i8 v8030 = (i8)(intptr_t)c02_s0171;

	void f11_print(i8 /* ptr */);
	f11_print(v8030);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0725;

c02_0729:;

c02_0725:;

	i8 v8031 = (i8)(intptr_t)(ws+3080);
	i8 v8032 = *(i8*)(intptr_t)v8031;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8033;
	f202_IsPtr(&v8033, v8032);
	i1 v8034 = (i1)+0;
	if (v8033==v8034) goto c02_0731; else goto c02_0730;

c02_0731:;

	i8 v8035 = (i8)(intptr_t)(ws+3080);
	i8 v8036 = *(i8*)(intptr_t)v8035;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8037;
	f203_IsNum(&v8037, v8036);
	i1 v8038 = (i1)+0;
	if (v8037==v8038) goto c02_072f; else goto c02_0730;

c02_072f:;


	void f59_StartError(void);
	f59_StartError();

	i8 v8039 = (i8)(intptr_t)(ws+3080);
	i8 v8040 = *(i8*)(intptr_t)v8039;
	i8 v8041 = v8040+(+48);
	i8 v8042 = *(i8*)(intptr_t)v8041;

	void f11_print(i8 /* ptr */);
	f11_print(v8042);

	i8 v8043 = (i8)(intptr_t)c02_s0172;

	void f11_print(i8 /* ptr */);
	f11_print(v8043);


	void f60_EndError(void);
	f60_EndError();

	goto c02_072a;

c02_0730:;

c02_072a:;

endsub:;
}
const i1 c02_s0173[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
const i1 c02_s0174[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };

// ResolveUntypedConstantsForAddOrSub workspace at ws+3048 length ws+16
void f448_ResolveUntypedConstantsForAddOrSub(i8 p8044 /* rhs */, i8 p8045 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8045; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p8044; /*rhs */

	i8 v8046 = (i8)(intptr_t)(ws+3048);
	i8 v8047 = *(i8*)(intptr_t)v8046;
	i8 v8048 = v8047+(+16);
	i8 v8049 = *(i8*)(intptr_t)v8048;
	i8 v8050 = (i8)+0;
	if (v8049==v8050) goto c02_0738; else goto c02_0739;

c02_0739:;

	i8 v8051 = (i8)(intptr_t)(ws+3056);
	i8 v8052 = *(i8*)(intptr_t)v8051;
	i8 v8053 = v8052+(+16);
	i8 v8054 = *(i8*)(intptr_t)v8053;
	i8 v8055 = (i8)+0;
	if (v8054==v8055) goto c02_0737; else goto c02_0738;

c02_0737:;

	i8 v8056 = (i8)(intptr_t)(ws+3048);
	i8 v8057 = *(i8*)(intptr_t)v8056;
	i8 v8058 = v8057+(+16);
	i8 v8059 = *(i8*)(intptr_t)v8058;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8060;
	f203_IsNum(&v8060, v8059);
	i1 v8061 = (i1)+0;
	if (v8060==v8061) goto c02_073e; else goto c02_073d;

c02_073d:;

	i8 v8062 = (i8)(intptr_t)(ws+3048);
	i8 v8063 = *(i8*)(intptr_t)v8062;
	i8 v8064 = v8063+(+16);
	i8 v8065 = *(i8*)(intptr_t)v8064;
	i8 v8066 = (i8)(intptr_t)(ws+3056);
	i8 v8067 = *(i8*)(intptr_t)v8066;
	i8 v8068 = v8067+(+16);
	*(i8*)(intptr_t)v8068 = v8065;

	goto c02_073a;

c02_073e:;

	i8 v8069 = (i8)(intptr_t)(ws+3048);
	i8 v8070 = *(i8*)(intptr_t)v8069;
	i8 v8071 = v8070+(+16);
	i8 v8072 = *(i8*)(intptr_t)v8071;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8073;
	f202_IsPtr(&v8073, v8072);
	i1 v8074 = (i1)+0;
	if (v8073==v8074) goto c02_0742; else goto c02_0741;

c02_0741:;

	i8 v8075 = (i8)(intptr_t)(ws+1056);
	i8 v8076 = *(i8*)(intptr_t)v8075;
	i8 v8077 = (i8)(intptr_t)(ws+3056);
	i8 v8078 = *(i8*)(intptr_t)v8077;
	i8 v8079 = v8078+(+16);
	*(i8*)(intptr_t)v8079 = v8076;

	goto c02_073a;

c02_0742:;

	i8 v8080 = (i8)(intptr_t)c02_s0173;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8080);

c02_073a:;

	goto c02_0732;

c02_0738:;

c02_0732:;

	i8 v8081 = (i8)(intptr_t)(ws+3048);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	i8 v8083 = v8082+(+16);
	i8 v8084 = *(i8*)(intptr_t)v8083;
	i8 v8085 = (i8)+0;
	if (v8084==v8085) goto c02_074a; else goto c02_0749;

c02_074a:;

	i8 v8086 = (i8)(intptr_t)(ws+3056);
	i8 v8087 = *(i8*)(intptr_t)v8086;
	i8 v8088 = v8087+(+16);
	i8 v8089 = *(i8*)(intptr_t)v8088;
	i8 v8090 = (i8)+0;
	if (v8089==v8090) goto c02_0749; else goto c02_0748;

c02_0748:;

	i8 v8091 = (i8)(intptr_t)(ws+3056);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+16);
	i8 v8094 = *(i8*)(intptr_t)v8093;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8095;
	f203_IsNum(&v8095, v8094);
	i1 v8096 = (i1)+0;
	if (v8095==v8096) goto c02_074f; else goto c02_074e;

c02_074e:;

	i8 v8097 = (i8)(intptr_t)(ws+3056);
	i8 v8098 = *(i8*)(intptr_t)v8097;
	i8 v8099 = v8098+(+16);
	i8 v8100 = *(i8*)(intptr_t)v8099;
	i8 v8101 = (i8)(intptr_t)(ws+3048);
	i8 v8102 = *(i8*)(intptr_t)v8101;
	i8 v8103 = v8102+(+16);
	*(i8*)(intptr_t)v8103 = v8100;

	goto c02_074b;

c02_074f:;

	i8 v8104 = (i8)(intptr_t)(ws+3056);
	i8 v8105 = *(i8*)(intptr_t)v8104;
	i8 v8106 = v8105+(+16);
	i8 v8107 = *(i8*)(intptr_t)v8106;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8108;
	f202_IsPtr(&v8108, v8107);
	i1 v8109 = (i1)+0;
	if (v8108==v8109) goto c02_0753; else goto c02_0752;

c02_0752:;

	i8 v8110 = (i8)(intptr_t)c02_s0174;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8110);

	goto c02_074b;

c02_0753:;

c02_074b:;

	goto c02_0743;

c02_0749:;

c02_0743:;

endsub:;
}

// ResolveUntypedConstantsSimply workspace at ws+3072 length ws+32
void f449_ResolveUntypedConstantsSimply(i8 p8111 /* rhs */, i8 p8112 /* lhs */) {
	*(i8*)(intptr_t)(ws+3072) = p8112; /*lhs */
	*(i8*)(intptr_t)(ws+3080) = p8111; /*rhs */

	i8 v8113 = (i8)(intptr_t)(ws+3072);
	i8 v8114 = *(i8*)(intptr_t)v8113;
	i8 v8115 = v8114+(+16);
	i8 v8116 = *(i8*)(intptr_t)v8115;
	i8 v8117 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v8117 = v8116;

	i8 v8118 = (i8)(intptr_t)(ws+3080);
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = v8119+(+16);
	i8 v8121 = *(i8*)(intptr_t)v8120;
	i8 v8122 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v8122 = v8121;

	i8 v8123 = (i8)(intptr_t)(ws+3088);
	i8 v8124 = *(i8*)(intptr_t)v8123;
	i8 v8125 = (i8)+0;
	if (v8124==v8125) goto c02_075a; else goto c02_075b;

c02_075b:;

	i8 v8126 = (i8)(intptr_t)(ws+3096);
	i8 v8127 = *(i8*)(intptr_t)v8126;
	i8 v8128 = (i8)+0;
	if (v8127==v8128) goto c02_0759; else goto c02_075a;

c02_0759:;

	i8 v8129 = (i8)(intptr_t)(ws+3088);
	i8 v8130 = *(i8*)(intptr_t)v8129;
	i8 v8131 = (i8)(intptr_t)(ws+3080);
	i8 v8132 = *(i8*)(intptr_t)v8131;
	i8 v8133 = v8132+(+16);
	*(i8*)(intptr_t)v8133 = v8130;

	goto c02_0754;

c02_075a:;

	i8 v8134 = (i8)(intptr_t)(ws+3088);
	i8 v8135 = *(i8*)(intptr_t)v8134;
	i8 v8136 = (i8)+0;
	if (v8135==v8136) goto c02_0762; else goto c02_0761;

c02_0762:;

	i8 v8137 = (i8)(intptr_t)(ws+3096);
	i8 v8138 = *(i8*)(intptr_t)v8137;
	i8 v8139 = (i8)+0;
	if (v8138==v8139) goto c02_0761; else goto c02_0760;

c02_0760:;

	i8 v8140 = (i8)(intptr_t)(ws+3096);
	i8 v8141 = *(i8*)(intptr_t)v8140;
	i8 v8142 = (i8)(intptr_t)(ws+3072);
	i8 v8143 = *(i8*)(intptr_t)v8142;
	i8 v8144 = v8143+(+16);
	*(i8*)(intptr_t)v8144 = v8141;

	goto c02_0754;

c02_0761:;

	i8 v8145 = (i8)(intptr_t)(ws+3088);
	i8 v8146 = *(i8*)(intptr_t)v8145;
	i8 v8147 = (i8)(intptr_t)(ws+3096);
	i8 v8148 = *(i8*)(intptr_t)v8147;
	if (v8146==v8148) goto c02_0766; else goto c02_0765;

c02_0765:;

	i8 v8149 = (i8)(intptr_t)(ws+3072);
	i8 v8150 = *(i8*)(intptr_t)v8149;
	i8 v8151 = (i8)(intptr_t)(ws+3080);
	i8 v8152 = *(i8*)(intptr_t)v8151;

	void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8152, v8150);

	goto c02_0754;

c02_0766:;

c02_0754:;

endsub:;
}
const i1 c02_s0175[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };

// CheckNumber workspace at ws+3072 length ws+8
void f450_CheckNumber(i8 p8153 /* node */) {
	*(i8*)(intptr_t)(ws+3072) = p8153; /*node */

	i8 v8154 = (i8)(intptr_t)(ws+3072);
	i8 v8155 = *(i8*)(intptr_t)v8154;
	i8 v8156 = v8155+(+16);
	i8 v8157 = *(i8*)(intptr_t)v8156;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8158;
	f203_IsNum(&v8158, v8157);
	i1 v8159 = (i1)+0;
	if (v8158==v8159) goto c02_076a; else goto c02_076b;

c02_076a:;

	i8 v8160 = (i8)(intptr_t)c02_s0175;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8160);

	goto c02_0767;

c02_076b:;

c02_0767:;

endsub:;
}

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3056 length ws+16
void f451_ResolveUntypedConstantsNeedingNumbers(i8 p8161 /* rhs */, i8 p8162 /* lhs */) {
	*(i8*)(intptr_t)(ws+3056) = p8162; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p8161; /*rhs */

	i8 v8163 = (i8)(intptr_t)(ws+3056);
	i8 v8164 = *(i8*)(intptr_t)v8163;
	i8 v8165 = (i8)(intptr_t)(ws+3064);
	i8 v8166 = *(i8*)(intptr_t)v8165;

	void f449_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	f449_ResolveUntypedConstantsSimply(v8166, v8164);

	i8 v8167 = (i8)(intptr_t)(ws+3056);
	i8 v8168 = *(i8*)(intptr_t)v8167;

	void f450_CheckNumber(i8 /* node */);
	f450_CheckNumber(v8168);

	i8 v8169 = (i8)(intptr_t)(ws+3064);
	i8 v8170 = *(i8*)(intptr_t)v8169;

	void f450_CheckNumber(i8 /* node */);
	f450_CheckNumber(v8170);

endsub:;
}

// CondSimple workspace at ws+3048 length ws+16
void f452_CondSimple(i8 p8171 /* rhs */, i8 p8172 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p8172; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p8171; /*rhs */

	i8 v8173 = (i8)(intptr_t)(ws+3048);
	i8 v8174 = *(i8*)(intptr_t)v8173;
	i8 v8175 = (i8)(intptr_t)(ws+3056);
	i8 v8176 = *(i8*)(intptr_t)v8175;

	void f449_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	f449_ResolveUntypedConstantsSimply(v8176, v8174);

	i8 v8177 = (i8)(intptr_t)(ws+3048);
	i8 v8178 = *(i8*)(intptr_t)v8177;
	i8 v8179 = v8178+(+16);
	i8 v8180 = *(i8*)(intptr_t)v8179;
	i8 v8181 = (i8)(intptr_t)(ws+3056);
	i8 v8182 = *(i8*)(intptr_t)v8181;
	i8 v8183 = v8182+(+16);
	i8 v8184 = *(i8*)(intptr_t)v8183;
	if (v8180==v8184) goto c02_0770; else goto c02_076f;

c02_076f:;

	i8 v8185 = (i8)(intptr_t)(ws+3048);
	i8 v8186 = *(i8*)(intptr_t)v8185;
	i8 v8187 = (i8)(intptr_t)(ws+3056);
	i8 v8188 = *(i8*)(intptr_t)v8187;

	void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8188, v8186);

	goto c02_076c;

c02_0770:;

c02_076c:;

endsub:;
}

// Expr1Simple workspace at ws+3008 length ws+24
void f453_Expr1Simple(i8* p8189 /* result */, i8 p8190 /* lhs */, i1 p8191 /* op */) {
	*(i1*)(intptr_t)(ws+3008) = p8191; /*op */
	*(i8*)(intptr_t)(ws+3016) = p8190; /*lhs */

	i8 v8192 = (i8)(intptr_t)(ws+3008);
	i1 v8193 = *(i1*)(intptr_t)v8192;
	i8 v8194 = (i8)(intptr_t)(ws+3016);
	i8 v8195 = *(i8*)(intptr_t)v8194;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8196;
	f144_NodeWidth(&v8196, v8195);
	i8 v8197 = (i8)(intptr_t)(ws+3016);
	i8 v8198 = *(i8*)(intptr_t)v8197;

	void f148_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8199;
	f148_MidC1Op(&v8199, v8198, v8196, v8193);
	i8 v8200 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8200 = v8199;

	i8 v8201 = (i8)(intptr_t)(ws+3016);
	i8 v8202 = *(i8*)(intptr_t)v8201;
	i8 v8203 = v8202+(+16);
	i8 v8204 = *(i8*)(intptr_t)v8203;
	i8 v8205 = (i8)(intptr_t)(ws+3024);
	i8 v8206 = *(i8*)(intptr_t)v8205;
	i8 v8207 = v8206+(+16);
	*(i8*)(intptr_t)v8207 = v8204;

endsub:;
	*p8189 = *(i8*)(intptr_t)(ws+3024);
}

// cant_add_that workspace at ws+3048 length ws+0
void f455_cant_add_that(void) {

	i8 v8215 = (i8)(intptr_t)(ws+3008);
	i8 v8216 = *(i8*)(intptr_t)v8215;
	i8 v8217 = (i8)(intptr_t)(ws+3016);
	i8 v8218 = *(i8*)(intptr_t)v8217;

	void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8218, v8216);

endsub:;
}

// ExprAdd workspace at ws+3008 length ws+40
void f454_ExprAdd(i8* p8208 /* result */, i8 p8209 /* rhs */, i8 p8210 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p8210; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8209; /*rhs */

	i8 v8211 = (i8)(intptr_t)(ws+3008);
	i8 v8212 = *(i8*)(intptr_t)v8211;
	i8 v8213 = (i8)(intptr_t)(ws+3016);
	i8 v8214 = *(i8*)(intptr_t)v8213;

	void f448_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	f448_ResolveUntypedConstantsForAddOrSub(v8214, v8212);


	i8 v8219 = (i8)(intptr_t)(ws+3008);
	i8 v8220 = *(i8*)(intptr_t)v8219;
	i8 v8221 = v8220+(+16);
	i8 v8222 = *(i8*)(intptr_t)v8221;
	i8 v8223 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8223 = v8222;

	i8 v8224 = (i8)(intptr_t)(ws+3016);
	i8 v8225 = *(i8*)(intptr_t)v8224;
	i8 v8226 = v8225+(+16);
	i8 v8227 = *(i8*)(intptr_t)v8226;
	i8 v8228 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8228 = v8227;

	i8 v8229 = (i8)(intptr_t)(ws+3032);
	i8 v8230 = *(i8*)(intptr_t)v8229;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8231;
	f202_IsPtr(&v8231, v8230);
	i1 v8232 = (i1)+0;
	if (v8231==v8232) goto c02_0775; else goto c02_0774;

c02_0774:;

	i8 v8233 = (i8)(intptr_t)(ws+3040);
	i8 v8234 = *(i8*)(intptr_t)v8233;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8235;
	f202_IsPtr(&v8235, v8234);
	i1 v8236 = (i1)+0;
	if (v8235==v8236) goto c02_077d; else goto c02_077b;

c02_077d:;

	i8 v8237 = (i8)(intptr_t)(ws+3040);
	i8 v8238 = *(i8*)(intptr_t)v8237;
	i8 v8239 = (i8)(intptr_t)(ws+1056);
	i8 v8240 = *(i8*)(intptr_t)v8239;
	if (v8238==v8240) goto c02_077c; else goto c02_077b;

c02_077b:;


	void f455_cant_add_that(void);
	f455_cant_add_that();

	goto c02_0776;

c02_077c:;

c02_0776:;

	goto c02_0771;

c02_0775:;

	i8 v8241 = (i8)(intptr_t)(ws+3040);
	i8 v8242 = *(i8*)(intptr_t)v8241;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8243;
	f202_IsPtr(&v8243, v8242);
	i1 v8244 = (i1)+0;
	if (v8243==v8244) goto c02_0781; else goto c02_0780;

c02_0780:;


	void f455_cant_add_that(void);
	f455_cant_add_that();

	goto c02_0771;

c02_0781:;

	i8 v8245 = (i8)(intptr_t)(ws+3032);
	i8 v8246 = *(i8*)(intptr_t)v8245;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8247;
	f202_IsPtr(&v8247, v8246);
	i1 v8248 = (i1)+0;
	if (v8247==v8248) goto c02_0788; else goto c02_0787;

c02_0788:;

	i8 v8249 = (i8)(intptr_t)(ws+3032);
	i8 v8250 = *(i8*)(intptr_t)v8249;
	i8 v8251 = (i8)(intptr_t)(ws+3040);
	i8 v8252 = *(i8*)(intptr_t)v8251;
	if (v8250==v8252) goto c02_0787; else goto c02_0786;

c02_0786:;


	void f455_cant_add_that(void);
	f455_cant_add_that();

	goto c02_0771;

c02_0787:;

c02_0771:;

	i1 v8253 = (i1)+155;
	i8 v8254 = (i8)(intptr_t)(ws+3008);
	i8 v8255 = *(i8*)(intptr_t)v8254;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8256;
	f144_NodeWidth(&v8256, v8255);
	i8 v8257 = (i8)(intptr_t)(ws+3008);
	i8 v8258 = *(i8*)(intptr_t)v8257;
	i8 v8259 = (i8)(intptr_t)(ws+3016);
	i8 v8260 = *(i8*)(intptr_t)v8259;

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8261;
	f150_MidC2Op(&v8261, v8260, v8258, v8256, v8253);
	i8 v8262 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8262 = v8261;

	i8 v8263 = (i8)(intptr_t)(ws+3032);
	i8 v8264 = *(i8*)(intptr_t)v8263;
	i8 v8265 = (i8)(intptr_t)(ws+3024);
	i8 v8266 = *(i8*)(intptr_t)v8265;
	i8 v8267 = v8266+(+16);
	*(i8*)(intptr_t)v8267 = v8264;

endsub:;
	*p8208 = *(i8*)(intptr_t)(ws+3024);
}

// cant_sub_that workspace at ws+3048 length ws+0
void f457_cant_sub_that(void) {

	i8 v8275 = (i8)(intptr_t)(ws+3008);
	i8 v8276 = *(i8*)(intptr_t)v8275;
	i8 v8277 = (i8)(intptr_t)(ws+3016);
	i8 v8278 = *(i8*)(intptr_t)v8277;

	void f446_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);
	f446_expr_i_cant_do_that(v8278, v8276);

endsub:;
}

// ExprSub workspace at ws+3008 length ws+40
void f456_ExprSub(i8* p8268 /* result */, i8 p8269 /* rhs */, i8 p8270 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p8270; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8269; /*rhs */

	i8 v8271 = (i8)(intptr_t)(ws+3008);
	i8 v8272 = *(i8*)(intptr_t)v8271;
	i8 v8273 = (i8)(intptr_t)(ws+3016);
	i8 v8274 = *(i8*)(intptr_t)v8273;

	void f448_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	f448_ResolveUntypedConstantsForAddOrSub(v8274, v8272);


	i8 v8279 = (i8)(intptr_t)(ws+3008);
	i8 v8280 = *(i8*)(intptr_t)v8279;
	i8 v8281 = v8280+(+16);
	i8 v8282 = *(i8*)(intptr_t)v8281;
	i8 v8283 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8283 = v8282;

	i8 v8284 = (i8)(intptr_t)(ws+3016);
	i8 v8285 = *(i8*)(intptr_t)v8284;
	i8 v8286 = v8285+(+16);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	i8 v8288 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8288 = v8287;

	i8 v8289 = (i8)(intptr_t)(ws+3032);
	i8 v8290 = *(i8*)(intptr_t)v8289;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8291;
	f202_IsPtr(&v8291, v8290);
	i1 v8292 = (i1)+0;
	if (v8291==v8292) goto c02_0791; else goto c02_0793;

c02_0793:;

	i8 v8293 = (i8)(intptr_t)(ws+3040);
	i8 v8294 = *(i8*)(intptr_t)v8293;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8295;
	f202_IsPtr(&v8295, v8294);
	i1 v8296 = (i1)+0;
	if (v8295==v8296) goto c02_0792; else goto c02_0791;

c02_0792:;

	i8 v8297 = (i8)(intptr_t)(ws+3040);
	i8 v8298 = *(i8*)(intptr_t)v8297;
	i8 v8299 = (i8)(intptr_t)(ws+1056);
	i8 v8300 = *(i8*)(intptr_t)v8299;
	if (v8298==v8300) goto c02_0791; else goto c02_0790;

c02_0790:;


	void f457_cant_sub_that(void);
	f457_cant_sub_that();

	goto c02_0789;

c02_0791:;

	i8 v8301 = (i8)(intptr_t)(ws+3032);
	i8 v8302 = *(i8*)(intptr_t)v8301;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8303;
	f203_IsNum(&v8303, v8302);
	i1 v8304 = (i1)+0;
	if (v8303==v8304) goto c02_0799; else goto c02_079a;

c02_079a:;

	i8 v8305 = (i8)(intptr_t)(ws+3040);
	i8 v8306 = *(i8*)(intptr_t)v8305;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8307;
	f202_IsPtr(&v8307, v8306);
	i1 v8308 = (i1)+0;
	if (v8307==v8308) goto c02_0799; else goto c02_0798;

c02_0798:;


	void f457_cant_sub_that(void);
	f457_cant_sub_that();

	goto c02_0789;

c02_0799:;

	i8 v8309 = (i8)(intptr_t)(ws+3032);
	i8 v8310 = *(i8*)(intptr_t)v8309;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8311;
	f203_IsNum(&v8311, v8310);
	i1 v8312 = (i1)+0;
	if (v8311==v8312) goto c02_07a2; else goto c02_07a4;

c02_07a4:;

	i8 v8313 = (i8)(intptr_t)(ws+3040);
	i8 v8314 = *(i8*)(intptr_t)v8313;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8315;
	f203_IsNum(&v8315, v8314);
	i1 v8316 = (i1)+0;
	if (v8315==v8316) goto c02_07a2; else goto c02_07a3;

c02_07a3:;

	i8 v8317 = (i8)(intptr_t)(ws+3032);
	i8 v8318 = *(i8*)(intptr_t)v8317;
	i8 v8319 = (i8)(intptr_t)(ws+3040);
	i8 v8320 = *(i8*)(intptr_t)v8319;
	if (v8318==v8320) goto c02_07a2; else goto c02_07a1;

c02_07a1:;


	void f457_cant_sub_that(void);
	f457_cant_sub_that();

	goto c02_0789;

c02_07a2:;

c02_0789:;

	i1 v8321 = (i1)+130;
	i8 v8322 = (i8)(intptr_t)(ws+3008);
	i8 v8323 = *(i8*)(intptr_t)v8322;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8324;
	f144_NodeWidth(&v8324, v8323);
	i8 v8325 = (i8)(intptr_t)(ws+3008);
	i8 v8326 = *(i8*)(intptr_t)v8325;
	i8 v8327 = (i8)(intptr_t)(ws+3016);
	i8 v8328 = *(i8*)(intptr_t)v8327;

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8329;
	f150_MidC2Op(&v8329, v8328, v8326, v8324, v8321);
	i8 v8330 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8330 = v8329;

	i8 v8331 = (i8)(intptr_t)(ws+3032);
	i8 v8332 = *(i8*)(intptr_t)v8331;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v8333;
	f202_IsPtr(&v8333, v8332);
	i1 v8334 = (i1)+0;
	if (v8333==v8334) goto c02_07ab; else goto c02_07ac;

c02_07ac:;

	i8 v8335 = (i8)(intptr_t)(ws+3032);
	i8 v8336 = *(i8*)(intptr_t)v8335;
	i8 v8337 = (i8)(intptr_t)(ws+3040);
	i8 v8338 = *(i8*)(intptr_t)v8337;
	if (v8336==v8338) goto c02_07aa; else goto c02_07ab;

c02_07aa:;

	i8 v8339 = (i8)(intptr_t)(ws+1056);
	i8 v8340 = *(i8*)(intptr_t)v8339;
	i8 v8341 = (i8)(intptr_t)(ws+3024);
	i8 v8342 = *(i8*)(intptr_t)v8341;
	i8 v8343 = v8342+(+16);
	*(i8*)(intptr_t)v8343 = v8340;

	goto c02_07a5;

c02_07ab:;

	i8 v8344 = (i8)(intptr_t)(ws+3032);
	i8 v8345 = *(i8*)(intptr_t)v8344;
	i8 v8346 = (i8)(intptr_t)(ws+3024);
	i8 v8347 = *(i8*)(intptr_t)v8346;
	i8 v8348 = v8347+(+16);
	*(i8*)(intptr_t)v8348 = v8345;

c02_07a5:;

endsub:;
	*p8268 = *(i8*)(intptr_t)(ws+3024);
}

// Expr2Simple workspace at ws+3008 length ws+48
void f458_Expr2Simple(i8* p8349 /* result */, i8 p8350 /* rhs */, i8 p8351 /* lhs */, i1 p8352 /* uop */, i1 p8353 /* sop */) {
	*(i1*)(intptr_t)(ws+3008) = p8353; /*sop */
	*(i1*)(intptr_t)(ws+3009) = p8352; /*uop */
	*(i8*)(intptr_t)(ws+3016) = p8351; /*lhs */
	*(i8*)(intptr_t)(ws+3024) = p8350; /*rhs */

	i8 v8354 = (i8)(intptr_t)(ws+3016);
	i8 v8355 = *(i8*)(intptr_t)v8354;
	i8 v8356 = (i8)(intptr_t)(ws+3024);
	i8 v8357 = *(i8*)(intptr_t)v8356;

	void f451_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	f451_ResolveUntypedConstantsNeedingNumbers(v8357, v8355);

	i8 v8358 = (i8)(intptr_t)(ws+3009);
	i1 v8359 = *(i1*)(intptr_t)v8358;
	i8 v8360 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v8360 = v8359;

	i8 v8361 = (i8)(intptr_t)(ws+3016);
	i8 v8362 = *(i8*)(intptr_t)v8361;
	i8 v8363 = v8362+(+16);
	i8 v8364 = *(i8*)(intptr_t)v8363;

	void f204_IsSNum(i1* /* result */, i8 /* type */);
	i1 v8365;
	f204_IsSNum(&v8365, v8364);
	i1 v8366 = (i1)+0;
	if (v8365==v8366) goto c02_07b1; else goto c02_07b0;

c02_07b0:;

	i8 v8367 = (i8)(intptr_t)(ws+3008);
	i1 v8368 = *(i1*)(intptr_t)v8367;
	i8 v8369 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v8369 = v8368;

	goto c02_07ad;

c02_07b1:;

c02_07ad:;

	i8 v8370 = (i8)(intptr_t)(ws+3016);
	i8 v8371 = *(i8*)(intptr_t)v8370;
	i8 v8372 = v8371+(+16);
	i8 v8373 = *(i8*)(intptr_t)v8372;
	i8 v8374 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8374 = v8373;

	i8 v8375 = (i8)(intptr_t)(ws+3040);
	i1 v8376 = *(i1*)(intptr_t)v8375;
	i8 v8377 = (i8)(intptr_t)(ws+3016);
	i8 v8378 = *(i8*)(intptr_t)v8377;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8379;
	f144_NodeWidth(&v8379, v8378);
	i8 v8380 = (i8)(intptr_t)(ws+3016);
	i8 v8381 = *(i8*)(intptr_t)v8380;
	i8 v8382 = (i8)(intptr_t)(ws+3024);
	i8 v8383 = *(i8*)(intptr_t)v8382;

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8384;
	f150_MidC2Op(&v8384, v8383, v8381, v8379, v8376);
	i8 v8385 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8385 = v8384;

	i8 v8386 = (i8)(intptr_t)(ws+3048);
	i8 v8387 = *(i8*)(intptr_t)v8386;
	i8 v8388 = (i8)(intptr_t)(ws+3032);
	i8 v8389 = *(i8*)(intptr_t)v8388;
	i8 v8390 = v8389+(+16);
	*(i8*)(intptr_t)v8390 = v8387;

endsub:;
	*p8349 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s0176[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };

// expr_i_checkrhsconst workspace at ws+3056 length ws+8
void f459_expr_i_checkrhsconst(i8 p8391 /* rhs */) {
	*(i8*)(intptr_t)(ws+3056) = p8391; /*rhs */

	i8 v8392 = (i8)(intptr_t)(ws+3056);
	i8 v8393 = *(i8*)(intptr_t)v8392;
	i8 v8394 = v8393+(+58);
	i1 v8395 = *(i1*)(intptr_t)v8394;
	i1 v8396 = (i1)+40;
	if (v8395==v8396) goto c02_07b6; else goto c02_07b5;

c02_07b5:;

	i8 v8397 = (i8)(intptr_t)c02_s0176;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8397);

	goto c02_07b2;

c02_07b6:;

c02_07b2:;

endsub:;
}
const i1 c02_s0177[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };

// expr_i_checkshift workspace at ws+3056 length ws+16
void f460_expr_i_checkshift(i8 p8398 /* rhs */, i8 p8399 /* lhs */) {
	*(i8*)(intptr_t)(ws+3056) = p8399; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p8398; /*rhs */

	i8 v8400 = (i8)(intptr_t)(ws+3056);
	i8 v8401 = *(i8*)(intptr_t)v8400;
	i8 v8402 = v8401+(+16);
	i8 v8403 = *(i8*)(intptr_t)v8402;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v8404;
	f203_IsNum(&v8404, v8403);
	i1 v8405 = (i1)+0;
	if (v8404==v8405) goto c02_07ba; else goto c02_07bb;

c02_07ba:;

	i8 v8406 = (i8)(intptr_t)c02_s0177;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8406);

	goto c02_07b7;

c02_07bb:;

c02_07b7:;

	i8 v8407 = (i8)(intptr_t)(ws+3064);
	i8 v8408 = *(i8*)(intptr_t)v8407;
	i8 v8409 = (i8)(intptr_t)(ws+1040);
	i8 v8410 = *(i8*)(intptr_t)v8409;

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v8410, v8408);

endsub:;
}

// ExprShift workspace at ws+3008 length ws+48
void f461_ExprShift(i8* p8411 /* result */, i8 p8412 /* rhs */, i8 p8413 /* lhs */, i1 p8414 /* uop */, i1 p8415 /* sop */) {
	*(i1*)(intptr_t)(ws+3008) = p8415; /*sop */
	*(i1*)(intptr_t)(ws+3009) = p8414; /*uop */
	*(i8*)(intptr_t)(ws+3016) = p8413; /*lhs */
	*(i8*)(intptr_t)(ws+3024) = p8412; /*rhs */

	i8 v8416 = (i8)(intptr_t)(ws+3009);
	i1 v8417 = *(i1*)(intptr_t)v8416;
	i8 v8418 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v8418 = v8417;

	i8 v8419 = (i8)(intptr_t)(ws+3016);
	i8 v8420 = *(i8*)(intptr_t)v8419;
	i8 v8421 = v8420+(+16);
	i8 v8422 = *(i8*)(intptr_t)v8421;

	void f204_IsSNum(i1* /* result */, i8 /* type */);
	i1 v8423;
	f204_IsSNum(&v8423, v8422);
	i1 v8424 = (i1)+0;
	if (v8423==v8424) goto c02_07c0; else goto c02_07bf;

c02_07bf:;

	i8 v8425 = (i8)(intptr_t)(ws+3008);
	i1 v8426 = *(i1*)(intptr_t)v8425;
	i8 v8427 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v8427 = v8426;

	goto c02_07bc;

c02_07c0:;

c02_07bc:;

	i8 v8428 = (i8)(intptr_t)(ws+3016);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	i8 v8430 = v8429+(+58);
	i1 v8431 = *(i1*)(intptr_t)v8430;
	i1 v8432 = (i1)+40;
	if (v8431==v8432) goto c02_07c4; else goto c02_07c5;

c02_07c4:;

	i8 v8433 = (i8)(intptr_t)(ws+3024);
	i8 v8434 = *(i8*)(intptr_t)v8433;

	void f459_expr_i_checkrhsconst(i8 /* rhs */);
	f459_expr_i_checkrhsconst(v8434);

	i8 v8435 = (i8)(intptr_t)(ws+3040);
	i1 v8436 = *(i1*)(intptr_t)v8435;
	i8 v8437 = (i8)(intptr_t)(ws+3016);
	i8 v8438 = *(i8*)(intptr_t)v8437;
	i8 v8439 = (i8)(intptr_t)(ws+3024);
	i8 v8440 = *(i8*)(intptr_t)v8439;

	void f147_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	i4 v8441;
	f147_FoldConstant2(&v8441, v8440, v8438, v8436);
	i8 v8442 = (i8)(intptr_t)(ws+3016);
	i8 v8443 = *(i8*)(intptr_t)v8442;
	*(i4*)(intptr_t)v8443 = v8441;

	i8 v8444 = (i8)(intptr_t)(ws+3016);
	i8 v8445 = *(i8*)(intptr_t)v8444;
	i8 v8446 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8446 = v8445;

	i8 v8447 = (i8)(intptr_t)(ws+3024);
	i8 v8448 = *(i8*)(intptr_t)v8447;

	void f56_Discard(i8 /* node */);
	f56_Discard(v8448);

	goto endsub;

c02_07c5:;

c02_07c1:;

	i8 v8449 = (i8)(intptr_t)(ws+3016);
	i8 v8450 = *(i8*)(intptr_t)v8449;
	i8 v8451 = (i8)(intptr_t)(ws+3024);
	i8 v8452 = *(i8*)(intptr_t)v8451;

	void f460_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	f460_expr_i_checkshift(v8452, v8450);

	i8 v8453 = (i8)(intptr_t)(ws+3016);
	i8 v8454 = *(i8*)(intptr_t)v8453;
	i8 v8455 = v8454+(+16);
	i8 v8456 = *(i8*)(intptr_t)v8455;
	i8 v8457 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8457 = v8456;

	i8 v8458 = (i8)(intptr_t)(ws+3040);
	i1 v8459 = *(i1*)(intptr_t)v8458;
	i8 v8460 = (i8)(intptr_t)(ws+3016);
	i8 v8461 = *(i8*)(intptr_t)v8460;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8462;
	f144_NodeWidth(&v8462, v8461);
	i8 v8463 = (i8)(intptr_t)(ws+3016);
	i8 v8464 = *(i8*)(intptr_t)v8463;
	i8 v8465 = (i8)(intptr_t)(ws+3024);
	i8 v8466 = *(i8*)(intptr_t)v8465;

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v8467;
	f150_MidC2Op(&v8467, v8466, v8464, v8462, v8459);
	i8 v8468 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8468 = v8467;

	i8 v8469 = (i8)(intptr_t)(ws+3048);
	i8 v8470 = *(i8*)(intptr_t)v8469;
	i8 v8471 = (i8)(intptr_t)(ws+3032);
	i8 v8472 = *(i8*)(intptr_t)v8471;
	i8 v8473 = v8472+(+16);
	*(i8*)(intptr_t)v8473 = v8470;

endsub:;
	*p8411 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s0178[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// PushNode workspace at ws+3232 length ws+8
void f53_PushNode(i8 p8474 /* node */) {
	*(i8*)(intptr_t)(ws+3232) = p8474; /*node */

	i8 v8475 = (i8)(intptr_t)(ws+3232);
	i8 v8476 = *(i8*)(intptr_t)v8475;
	i8 v8477 = (i8)+0;
	if (v8476==v8477) goto c02_07ca; else goto c02_07c9;

c02_07c9:;

	i8 v8478 = (i8)(intptr_t)(ws+216);
	i8 v8479 = *(i8*)(intptr_t)v8478;
	i8 v8480 = (i8)(intptr_t)(ws+216);
	if (v8479==v8480) goto c02_07ce; else goto c02_07cf;

c02_07ce:;

	i8 v8481 = (i8)(intptr_t)c02_s0178;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8481);

	goto c02_07cb;

c02_07cf:;

c02_07cb:;

	i8 v8482 = (i8)(intptr_t)(ws+3232);
	i8 v8483 = *(i8*)(intptr_t)v8482;
	i8 v8484 = (i8)(intptr_t)(ws+216);
	i8 v8485 = *(i8*)(intptr_t)v8484;
	*(i8*)(intptr_t)v8485 = v8483;

	i8 v8486 = (i8)(intptr_t)(ws+216);
	i8 v8487 = *(i8*)(intptr_t)v8486;
	i8 v8488 = v8487+(+8);
	i8 v8489 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v8489 = v8488;

	goto c02_07c6;

c02_07ca:;

c02_07c6:;

endsub:;
}

// PopNode workspace at ws+3216 length ws+8
void f54_PopNode(i8* p8490 /* node */) {

	i8 v8491 = (i8)(intptr_t)(ws+216);
	i8 v8492 = *(i8*)(intptr_t)v8491;
	i8 v8493 = v8492+(-8);
	i8 v8494 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v8494 = v8493;

	i8 v8495 = (i8)(intptr_t)(ws+216);
	i8 v8496 = *(i8*)(intptr_t)v8495;
	i8 v8497 = *(i8*)(intptr_t)v8496;
	i8 v8498 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v8498 = v8497;

endsub:;
	*p8490 = *(i8*)(intptr_t)(ws+3216);
}

// NextNode workspace at ws+3208 length ws+8
void f55_NextNode(i8* p8499 /* node */) {


	void f54_PopNode(i8* /* node */);
	i8 v8500;
	f54_PopNode(&v8500);
	i8 v8501 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v8501 = v8500;

	i8 v8502 = (i8)(intptr_t)(ws+3208);
	i8 v8503 = *(i8*)(intptr_t)v8502;
	i8 v8504 = (i8)+0;
	if (v8503==v8504) goto c02_07d4; else goto c02_07d3;

c02_07d3:;

	i8 v8505 = (i8)(intptr_t)(ws+3208);
	i8 v8506 = *(i8*)(intptr_t)v8505;
	i8 v8507 = v8506+(+24);
	i8 v8508 = *(i8*)(intptr_t)v8507;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v8508);

	i8 v8509 = (i8)(intptr_t)(ws+3208);
	i8 v8510 = *(i8*)(intptr_t)v8509;
	i8 v8511 = v8510+(+32);
	i8 v8512 = *(i8*)(intptr_t)v8511;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v8512);

	goto c02_07d0;

c02_07d4:;

c02_07d0:;

endsub:;
	*p8499 = *(i8*)(intptr_t)(ws+3208);
}

// Discard workspace at ws+3160 length ws+24
void f56_Discard(i8 p8513 /* node */) {
	*(i8*)(intptr_t)(ws+3160) = p8513; /*node */

	i8 v8514 = (i8)(intptr_t)(ws+216);
	i8 v8515 = *(i8*)(intptr_t)v8514;
	i8 v8516 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v8516 = v8515;

	i8 v8517 = (i8)(intptr_t)(ws+3160);
	i8 v8518 = *(i8*)(intptr_t)v8517;

	void f53_PushNode(i8 /* node */);
	f53_PushNode(v8518);

c02_07d7:;

	i8 v8519 = (i8)(intptr_t)(ws+216);
	i8 v8520 = *(i8*)(intptr_t)v8519;
	i8 v8521 = (i8)(intptr_t)(ws+3168);
	i8 v8522 = *(i8*)(intptr_t)v8521;
	if (v8520==v8522) goto c02_07da; else goto c02_07d9;

c02_07d9:;


	void f54_PopNode(i8* /* node */);
	i8 v8523;
	f54_PopNode(&v8523);
	i8 v8524 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v8524 = v8523;

	i8 v8525 = (i8)(intptr_t)(ws+3176);
	i8 v8526 = *(i8*)(intptr_t)v8525;

	void f32_Free(i8 /* block */);
	f32_Free(v8526);

	goto c02_07d7;

c02_07da:;

endsub:;
}

// BeginNormalLoop workspace at ws+3016 length ws+8
void f462_BeginNormalLoop(i8* p8527 /* ll */) {

	i8 v8528 = (i8)+8;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v8529;
	f31_Alloc(&v8529, v8528);
	i8 v8530 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v8530 = v8529;


	void f209_AllocLabel(i2* /* label */);
	i2 v8531;
	f209_AllocLabel(&v8531);
	i8 v8532 = (i8)(intptr_t)(ws+3016);
	i8 v8533 = *(i8*)(intptr_t)v8532;
	*(i2*)(intptr_t)v8533 = v8531;


	void f209_AllocLabel(i2* /* label */);
	i2 v8534;
	f209_AllocLabel(&v8534);
	i8 v8535 = (i8)(intptr_t)(ws+3016);
	i8 v8536 = *(i8*)(intptr_t)v8535;
	i8 v8537 = v8536+(+2);
	*(i2*)(intptr_t)v8537 = v8534;

	i8 v8538 = (i8)(intptr_t)(ws+52);
	i2 v8539 = *(i2*)(intptr_t)v8538;
	i8 v8540 = (i8)(intptr_t)(ws+3016);
	i8 v8541 = *(i8*)(intptr_t)v8540;
	i8 v8542 = v8541+(+4);
	*(i2*)(intptr_t)v8542 = v8539;

	i8 v8543 = (i8)(intptr_t)(ws+54);
	i2 v8544 = *(i2*)(intptr_t)v8543;
	i8 v8545 = (i8)(intptr_t)(ws+3016);
	i8 v8546 = *(i8*)(intptr_t)v8545;
	i8 v8547 = v8546+(+6);
	*(i2*)(intptr_t)v8547 = v8544;

	i8 v8548 = (i8)(intptr_t)(ws+3016);
	i8 v8549 = *(i8*)(intptr_t)v8548;
	i8 v8550 = v8549+(+2);
	i2 v8551 = *(i2*)(intptr_t)v8550;
	i8 v8552 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8552 = v8551;

	i8 v8553 = (i8)(intptr_t)(ws+3016);
	i8 v8554 = *(i8*)(intptr_t)v8553;
	i2 v8555 = *(i2*)(intptr_t)v8554;
	i8 v8556 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8556 = v8555;

endsub:;
	*p8527 = *(i8*)(intptr_t)(ws+3016);
}

// TerminateNormalLoop workspace at ws+3008 length ws+8
void f463_TerminateNormalLoop(i8 p8557 /* ll */) {
	*(i8*)(intptr_t)(ws+3008) = p8557; /*ll */

	i8 v8558 = (i8)(intptr_t)(ws+54);
	i2 v8559 = *(i2*)(intptr_t)v8558;

	void f122_MidJump(i8* /* m */, i2 /* label */);
	i8 v8560;
	f122_MidJump(&v8560, v8559);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v8560);

	i8 v8561 = (i8)(intptr_t)(ws+52);
	i2 v8562 = *(i2*)(intptr_t)v8561;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v8563;
	f126_MidLabel(&v8563, v8562);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v8563);

	i8 v8564 = (i8)(intptr_t)(ws+3008);
	i8 v8565 = *(i8*)(intptr_t)v8564;
	i8 v8566 = v8565+(+4);
	i2 v8567 = *(i2*)(intptr_t)v8566;
	i8 v8568 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8568 = v8567;

	i8 v8569 = (i8)(intptr_t)(ws+3008);
	i8 v8570 = *(i8*)(intptr_t)v8569;
	i8 v8571 = v8570+(+6);
	i2 v8572 = *(i2*)(intptr_t)v8571;
	i8 v8573 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v8573 = v8572;

	i8 v8574 = (i8)(intptr_t)(ws+3008);
	i8 v8575 = *(i8*)(intptr_t)v8574;

	void f32_Free(i8 /* block */);
	f32_Free(v8575);

endsub:;
}

// Negate workspace at ws+3008 length ws+8
void f464_Negate(i8 p8576 /* node */) {
	*(i8*)(intptr_t)(ws+3008) = p8576; /*node */

	i8 v8577 = (i8)(intptr_t)(ws+3008);
	i8 v8578 = *(i8*)(intptr_t)v8577;
	i8 v8579 = v8578+(+6);
	i1 v8580 = *(i1*)(intptr_t)v8579;
	i1 v8581 = v8580^(+1);
	i8 v8582 = (i8)(intptr_t)(ws+3008);
	i8 v8583 = *(i8*)(intptr_t)v8582;
	i8 v8584 = v8583+(+6);
	*(i1*)(intptr_t)v8584 = v8581;

endsub:;
}

// ConditionalEq workspace at ws+3008 length ws+37
void f465_ConditionalEq(i8* p8585 /* result */, i1 p8586 /* negated */, i8 p8587 /* rhs */, i8 p8588 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p8588; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8587; /*rhs */
	*(i1*)(intptr_t)(ws+3024) = p8586; /*negated */

	i8 v8589 = (i8)(intptr_t)(ws+3008);
	i8 v8590 = *(i8*)(intptr_t)v8589;
	i8 v8591 = (i8)(intptr_t)(ws+3016);
	i8 v8592 = *(i8*)(intptr_t)v8591;

	void f452_CondSimple(i8 /* rhs */, i8 /* lhs */);
	f452_CondSimple(v8592, v8590);


	void f209_AllocLabel(i2* /* label */);
	i2 v8593;
	f209_AllocLabel(&v8593);
	i8 v8594 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v8594 = v8593;


	void f209_AllocLabel(i2* /* label */);
	i2 v8595;
	f209_AllocLabel(&v8595);
	i8 v8596 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v8596 = v8595;

	i8 v8597 = (i8)(intptr_t)(ws+3008);
	i8 v8598 = *(i8*)(intptr_t)v8597;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8599;
	f144_NodeWidth(&v8599, v8598);
	i8 v8600 = (i8)(intptr_t)(ws+3044);
	*(i1*)(intptr_t)v8600 = v8599;

	i8 v8601 = (i8)(intptr_t)(ws+3044);
	i1 v8602 = *(i1*)(intptr_t)v8601;
	i8 v8603 = (i8)(intptr_t)(ws+3008);
	i8 v8604 = *(i8*)(intptr_t)v8603;
	i8 v8605 = (i8)(intptr_t)(ws+3016);
	i8 v8606 = *(i8*)(intptr_t)v8605;
	i8 v8607 = (i8)(intptr_t)(ws+3040);
	i2 v8608 = *(i2*)(intptr_t)v8607;
	i8 v8609 = (i8)(intptr_t)(ws+3042);
	i2 v8610 = *(i2*)(intptr_t)v8609;
	i2 v8611 = (i2)+0;
	i8 v8612 = (i8)(intptr_t)(ws+3024);
	i1 v8613 = *(i1*)(intptr_t)v8612;

	void f102_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8614;
	f102_MidBeq(&v8614, v8613, v8611, v8610, v8608, v8606, v8604, v8602);
	i8 v8615 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8615 = v8614;

endsub:;
	*p8585 = *(i8*)(intptr_t)(ws+3032);
}

// ConditionalLt workspace at ws+3008 length ws+37
void f466_ConditionalLt(i8* p8616 /* result */, i1 p8617 /* negated */, i8 p8618 /* rhs */, i8 p8619 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p8619; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p8618; /*rhs */
	*(i1*)(intptr_t)(ws+3024) = p8617; /*negated */

	i8 v8620 = (i8)(intptr_t)(ws+3008);
	i8 v8621 = *(i8*)(intptr_t)v8620;
	i8 v8622 = (i8)(intptr_t)(ws+3016);
	i8 v8623 = *(i8*)(intptr_t)v8622;

	void f452_CondSimple(i8 /* rhs */, i8 /* lhs */);
	f452_CondSimple(v8623, v8621);


	void f209_AllocLabel(i2* /* label */);
	i2 v8624;
	f209_AllocLabel(&v8624);
	i8 v8625 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v8625 = v8624;


	void f209_AllocLabel(i2* /* label */);
	i2 v8626;
	f209_AllocLabel(&v8626);
	i8 v8627 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v8627 = v8626;

	i8 v8628 = (i8)(intptr_t)(ws+3008);
	i8 v8629 = *(i8*)(intptr_t)v8628;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v8630;
	f144_NodeWidth(&v8630, v8629);
	i8 v8631 = (i8)(intptr_t)(ws+3044);
	*(i1*)(intptr_t)v8631 = v8630;

	i8 v8632 = (i8)(intptr_t)(ws+3008);
	i8 v8633 = *(i8*)(intptr_t)v8632;
	i8 v8634 = v8633+(+16);
	i8 v8635 = *(i8*)(intptr_t)v8634;

	void f204_IsSNum(i1* /* result */, i8 /* type */);
	i1 v8636;
	f204_IsSNum(&v8636, v8635);
	i1 v8637 = (i1)+0;
	if (v8636==v8637) goto c02_07df; else goto c02_07de;

c02_07de:;

	i8 v8638 = (i8)(intptr_t)(ws+3044);
	i1 v8639 = *(i1*)(intptr_t)v8638;
	i8 v8640 = (i8)(intptr_t)(ws+3008);
	i8 v8641 = *(i8*)(intptr_t)v8640;
	i8 v8642 = (i8)(intptr_t)(ws+3016);
	i8 v8643 = *(i8*)(intptr_t)v8642;
	i8 v8644 = (i8)(intptr_t)(ws+3040);
	i2 v8645 = *(i2*)(intptr_t)v8644;
	i8 v8646 = (i8)(intptr_t)(ws+3042);
	i2 v8647 = *(i2*)(intptr_t)v8646;
	i2 v8648 = (i2)+0;
	i8 v8649 = (i8)(intptr_t)(ws+3024);
	i1 v8650 = *(i1*)(intptr_t)v8649;

	void f90_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8651;
	f90_MidBlts(&v8651, v8650, v8648, v8647, v8645, v8643, v8641, v8639);
	i8 v8652 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8652 = v8651;

	goto c02_07db;

c02_07df:;

	i8 v8653 = (i8)(intptr_t)(ws+3044);
	i1 v8654 = *(i1*)(intptr_t)v8653;
	i8 v8655 = (i8)(intptr_t)(ws+3008);
	i8 v8656 = *(i8*)(intptr_t)v8655;
	i8 v8657 = (i8)(intptr_t)(ws+3016);
	i8 v8658 = *(i8*)(intptr_t)v8657;
	i8 v8659 = (i8)(intptr_t)(ws+3040);
	i2 v8660 = *(i2*)(intptr_t)v8659;
	i8 v8661 = (i8)(intptr_t)(ws+3042);
	i2 v8662 = *(i2*)(intptr_t)v8661;
	i2 v8663 = (i2)+0;
	i8 v8664 = (i8)(intptr_t)(ws+3024);
	i1 v8665 = *(i1*)(intptr_t)v8664;

	void f114_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8666;
	f114_MidBltu(&v8666, v8665, v8663, v8662, v8660, v8658, v8656, v8654);
	i8 v8667 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8667 = v8666;

c02_07db:;

endsub:;
	*p8616 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s0179[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };

// parser_i_bad_next_prev workspace at ws+3008 length ws+0
void f467_parser_i_bad_next_prev(void) {

	i8 v8668 = (i8)(intptr_t)c02_s0179;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8668);

endsub:;
}
const i1 c02_s017a[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };

// parser_i_constant_error workspace at ws+3032 length ws+0
void f468_parser_i_constant_error(void) {

	i8 v8669 = (i8)(intptr_t)c02_s017a;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8669);

endsub:;
}
const i1 c02_s017b[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
const i1 c02_s017c[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
const i1 c02_s017d[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };

// i_check_sub_call_args workspace at ws+3056 length ws+8
void f469_i_check_sub_call_args(void) {

	i8 v8670 = (i8)(intptr_t)(ws+80);
	i8 v8671 = *(i8*)(intptr_t)v8670;
	i8 v8672 = *(i8*)(intptr_t)v8671;
	i8 v8673 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8673 = v8672;

	i8 v8674 = (i8)(intptr_t)(ws+80);
	i8 v8675 = *(i8*)(intptr_t)v8674;
	i8 v8676 = v8675+(+32);
	i1 v8677 = *(i1*)(intptr_t)v8676;
	i8 v8678 = (i8)(intptr_t)(ws+3056);
	i8 v8679 = *(i8*)(intptr_t)v8678;
	i8 v8680 = v8679+(+88);
	i1 v8681 = *(i1*)(intptr_t)v8680;
	if (v8677==v8681) goto c02_07e4; else goto c02_07e3;

c02_07e3:;


	void f59_StartError(void);
	f59_StartError();

	i8 v8682 = (i8)(intptr_t)c02_s017b;

	void f11_print(i8 /* ptr */);
	f11_print(v8682);

	i8 v8683 = (i8)(intptr_t)(ws+3056);
	i8 v8684 = *(i8*)(intptr_t)v8683;
	i8 v8685 = *(i8*)(intptr_t)v8684;

	void f11_print(i8 /* ptr */);
	f11_print(v8685);

	i8 v8686 = (i8)(intptr_t)c02_s017c;

	void f11_print(i8 /* ptr */);
	f11_print(v8686);

	i8 v8687 = (i8)(intptr_t)(ws+3056);
	i8 v8688 = *(i8*)(intptr_t)v8687;
	i8 v8689 = v8688+(+88);
	i1 v8690 = *(i1*)(intptr_t)v8689;

	void f17_print_i8(i1 /* value */);
	f17_print_i8(v8690);

	i8 v8691 = (i8)(intptr_t)c02_s017d;

	void f11_print(i8 /* ptr */);
	f11_print(v8691);

	i8 v8692 = (i8)(intptr_t)(ws+80);
	i8 v8693 = *(i8*)(intptr_t)v8692;
	i8 v8694 = v8693+(+32);
	i1 v8695 = *(i1*)(intptr_t)v8694;

	void f17_print_i8(i1 /* value */);
	f17_print_i8(v8695);


	void f60_EndError(void);
	f60_EndError();

	goto c02_07e0;

c02_07e4:;

c02_07e0:;

endsub:;
}

// i_end_call workspace at ws+3056 length ws+8
void f470_i_end_call(void) {

	i8 v8696 = (i8)(intptr_t)(ws+40);
	i8 v8697 = *(i8*)(intptr_t)v8696;
	i8 v8698 = (i8)(intptr_t)(ws+80);
	i8 v8699 = *(i8*)(intptr_t)v8698;
	i8 v8700 = *(i8*)(intptr_t)v8699;

	void f181_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	f181_EmitterReferenceSubroutine(v8700, v8697);

	i8 v8701 = (i8)(intptr_t)(ws+80);
	i8 v8702 = *(i8*)(intptr_t)v8701;
	i8 v8703 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8703 = v8702;

	i8 v8704 = (i8)(intptr_t)(ws+3056);
	i8 v8705 = *(i8*)(intptr_t)v8704;
	i8 v8706 = v8705+(+8);
	i8 v8707 = *(i8*)(intptr_t)v8706;
	i8 v8708 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v8708 = v8707;

	i8 v8709 = (i8)(intptr_t)(ws+3056);
	i8 v8710 = *(i8*)(intptr_t)v8709;

	void f32_Free(i8 /* block */);
	f32_Free(v8710);

endsub:;
}
const i1 c02_s017e[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };

// SymbolRedeclarationError workspace at ws+3008 length ws+0
void f471_SymbolRedeclarationError(void) {


	void f59_StartError(void);
	f59_StartError();

	i8 v8711 = (i8)(intptr_t)c02_s017e;

	void f11_print(i8 /* ptr */);
	f11_print(v8711);

	i8 v8712 = (i8)(intptr_t)(ws+72);
	i8 v8713 = *(i8*)(intptr_t)v8712;
	i8 v8714 = v8713+(+48);
	i8 v8715 = *(i8*)(intptr_t)v8714;

	void f11_print(i8 /* ptr */);
	f11_print(v8715);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}
const i1 c02_s017f[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };

// WrongNumberOfElementsError workspace at ws+3048 length ws+0
void f472_WrongNumberOfElementsError(void) {


	void f59_StartError(void);
	f59_StartError();

	i8 v8716 = (i8)(intptr_t)c02_s017f;

	void f11_print(i8 /* ptr */);
	f11_print(v8716);

	i8 v8717 = (i8)(intptr_t)(ws+72);
	i8 v8718 = *(i8*)(intptr_t)v8717;
	i8 v8719 = v8718+(+48);
	i8 v8720 = *(i8*)(intptr_t)v8719;

	void f11_print(i8 /* ptr */);
	f11_print(v8720);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}

// CheckEndOfInitialiser workspace at ws+3008 length ws+4
void f473_CheckEndOfInitialiser(void) {

	i8 v8721 = (i8)(intptr_t)(ws+72);
	i8 v8722 = *(i8*)(intptr_t)v8721;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v8723;
	f201_IsArray(&v8723, v8722);
	i1 v8724 = (i1)+0;
	if (v8723==v8724) goto c02_07e9; else goto c02_07e8;

c02_07e8:;

	i8 v8725 = (i8)(intptr_t)(ws+72);
	i8 v8726 = *(i8*)(intptr_t)v8725;
	i8 v8727 = *(i8*)(intptr_t)v8726;
	i8 v8728 = v8727+(+44);
	i2 v8729 = *(i2*)(intptr_t)v8728;
	i8 v8730 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v8730 = v8729;

	i8 v8731 = (i8)(intptr_t)(ws+72);
	i8 v8732 = *(i8*)(intptr_t)v8731;
	i8 v8733 = v8732+(+42);
	i2 v8734 = *(i2*)(intptr_t)v8733;
	i2 v8735 = (i2)+0;
	if (v8734==v8735) goto c02_07ed; else goto c02_07ee;

c02_07ed:;

	i8 v8736 = (i8)(intptr_t)(ws+1240);
	i2 v8737 = *(i2*)(intptr_t)v8736;
	i8 v8738 = (i8)(intptr_t)(ws+72);
	i8 v8739 = *(i8*)(intptr_t)v8738;
	i8 v8740 = v8739+(+42);
	*(i2*)(intptr_t)v8740 = v8737;

	i8 v8741 = (i8)(intptr_t)(ws+1240);
	i2 v8742 = *(i2*)(intptr_t)v8741;
	i8 v8743 = (i8)(intptr_t)(ws+3008);
	i2 v8744 = *(i2*)(intptr_t)v8743;
	i2 v8745 = v8742/v8744;
	i8 v8746 = (i8)(intptr_t)(ws+3010);
	*(i2*)(intptr_t)v8746 = v8745;

	i8 v8747 = (i8)(intptr_t)(ws+3010);
	i2 v8748 = *(i2*)(intptr_t)v8747;
	i8 v8749 = (i8)(intptr_t)(ws+72);
	i8 v8750 = *(i8*)(intptr_t)v8749;
	i8 v8751 = v8750+(+8);
	*(i2*)(intptr_t)v8751 = v8748;

	i4 v8752 = (i4)+0;
	i8 v8753 = (i8)(intptr_t)(ws+3010);
	i2 v8754 = *(i2*)(intptr_t)v8753;
	i2 v8755 = v8754+(-1);
	i4 v8756 = v8755;

	void f216_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	i8 v8757;
	f216_ArchGuessIntType(&v8757, v8756, v8752);
	i8 v8758 = (i8)(intptr_t)(ws+72);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	i8 v8760 = v8759+(+16);
	*(i8*)(intptr_t)v8760 = v8757;

	goto c02_07ea;

c02_07ee:;

c02_07ea:;

	i8 v8761 = (i8)(intptr_t)(ws+1240);
	i2 v8762 = *(i2*)(intptr_t)v8761;
	i8 v8763 = (i8)(intptr_t)(ws+72);
	i8 v8764 = *(i8*)(intptr_t)v8763;
	i8 v8765 = v8764+(+42);
	i2 v8766 = *(i2*)(intptr_t)v8765;
	if (v8762==v8766) goto c02_07f3; else goto c02_07f2;

c02_07f2:;


	void f472_WrongNumberOfElementsError(void);
	f472_WrongNumberOfElementsError();

	goto c02_07ef;

c02_07f3:;

c02_07ef:;

	goto c02_07e5;

c02_07e9:;

	i8 v8767 = (i8)(intptr_t)(ws+1232);
	i8 v8768 = *(i8*)(intptr_t)v8767;
	i8 v8769 = (i8)+0;
	if (v8768==v8769) goto c02_07f8; else goto c02_07f7;

c02_07f7:;


	void f472_WrongNumberOfElementsError(void);
	f472_WrongNumberOfElementsError();

	goto c02_07f4;

c02_07f8:;

c02_07f4:;

c02_07e5:;

endsub:;
}

// GetInitedMember workspace at ws+3048 length ws+16
void f474_GetInitedMember(i8* p8770 /* member */, i8* p8771 /* type */) {

	i8 v8772 = (i8)+0;
	i8 v8773 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8773 = v8772;

	i8 v8774 = (i8)(intptr_t)(ws+72);
	i8 v8775 = *(i8*)(intptr_t)v8774;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v8776;
	f201_IsArray(&v8776, v8775);
	i1 v8777 = (i1)+0;
	if (v8776==v8777) goto c02_07fd; else goto c02_07fc;

c02_07fc:;

	i8 v8778 = (i8)(intptr_t)(ws+72);
	i8 v8779 = *(i8*)(intptr_t)v8778;
	i8 v8780 = *(i8*)(intptr_t)v8779;
	i8 v8781 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8781 = v8780;

	goto c02_07f9;

c02_07fd:;

	i8 v8782 = (i8)(intptr_t)(ws+1232);
	i8 v8783 = *(i8*)(intptr_t)v8782;
	i8 v8784 = (i8)+0;
	if (v8783==v8784) goto c02_0801; else goto c02_0802;

c02_0801:;

	i8 v8785 = (i8)+0;
	i8 v8786 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8786 = v8785;

	goto endsub;

c02_0802:;

c02_07fe:;

	i8 v8787 = (i8)(intptr_t)(ws+1232);
	i8 v8788 = *(i8*)(intptr_t)v8787;
	i8 v8789 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8789 = v8788;

	i8 v8790 = (i8)(intptr_t)(ws+1232);
	i8 v8791 = *(i8*)(intptr_t)v8790;
	i8 v8792 = *(i8*)(intptr_t)v8791;
	i8 v8793 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8793 = v8792;

	i8 v8794 = (i8)(intptr_t)(ws+1232);
	i8 v8795 = *(i8*)(intptr_t)v8794;
	i8 v8796 = v8795+(+56);
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v8798 = v8797;

c02_07f9:;

endsub:;
	*p8771 = *(i8*)(intptr_t)(ws+3056);
	*p8770 = *(i8*)(intptr_t)(ws+3048);
}

// AlignTo workspace at ws+3048 length ws+4
void f475_AlignTo(i1 p8799 /* alignment */) {
	*(i1*)(intptr_t)(ws+3048) = p8799; /*alignment */

	i8 v8800 = (i8)(intptr_t)(ws+1242);
	i2 v8801 = *(i2*)(intptr_t)v8800;
	i8 v8802 = (i8)(intptr_t)(ws+3048);
	i1 v8803 = *(i1*)(intptr_t)v8802;

	void f214_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v8804;
	f214_ArchAlignUp(&v8804, v8803, v8801);
	i8 v8805 = (i8)(intptr_t)(ws+3050);
	*(i2*)(intptr_t)v8805 = v8804;

c02_0805:;

	i8 v8806 = (i8)(intptr_t)(ws+1242);
	i2 v8807 = *(i2*)(intptr_t)v8806;
	i8 v8808 = (i8)(intptr_t)(ws+3050);
	i2 v8809 = *(i2*)(intptr_t)v8808;
	if (v8807==v8809) goto c02_0808; else goto c02_0807;

c02_0807:;

	i1 v8810 = (i1)+1;
	i4 v8811 = (i4)+0;

	void f103_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	i8 v8812;
	f103_MidInit(&v8812, v8811, v8810);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v8812);

	i8 v8813 = (i8)(intptr_t)(ws+1240);
	i2 v8814 = *(i2*)(intptr_t)v8813;
	i2 v8815 = v8814+(+1);
	i8 v8816 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v8816 = v8815;

	i8 v8817 = (i8)(intptr_t)(ws+1242);
	i2 v8818 = *(i2*)(intptr_t)v8817;
	i2 v8819 = v8818+(+1);
	i8 v8820 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v8820 = v8819;

	goto c02_0805;

c02_0808:;

endsub:;
}
const i1 c02_s0180[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };

// CheckForOverlaps workspace at ws+3048 length ws+8
void f476_CheckForOverlaps(i8 p8821 /* member */) {
	*(i8*)(intptr_t)(ws+3048) = p8821; /*member */

	i8 v8822 = (i8)(intptr_t)(ws+3048);
	i8 v8823 = *(i8*)(intptr_t)v8822;
	i8 v8824 = (i8)+0;
	if (v8823==v8824) goto c02_080c; else goto c02_080d;

c02_080c:;

	goto endsub;

c02_080d:;

c02_0809:;

	i8 v8825 = (i8)(intptr_t)(ws+3048);
	i8 v8826 = *(i8*)(intptr_t)v8825;
	i8 v8827 = v8826+(+32);
	i2 v8828 = *(i2*)(intptr_t)v8827;
	i8 v8829 = (i8)(intptr_t)(ws+1240);
	i2 v8830 = *(i2*)(intptr_t)v8829;
	if (v8828<v8830) goto c02_0811; else goto c02_0812;

c02_0811:;

	i8 v8831 = (i8)(intptr_t)c02_s0180;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8831);

	goto c02_080e;

c02_0812:;

c02_080e:;

endsub:;
}

// GetInitedMemberChecked workspace at ws+3032 length ws+16
void f477_GetInitedMemberChecked(i8* p8832 /* member */, i8* p8833 /* type */) {


	void f474_GetInitedMember(i8* /* member */, i8* /* type */);
	i8 v8834;
	i8 v8835;
	f474_GetInitedMember(&v8834, &v8835);

	i8 v8836 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v8836 = v8835;

	i8 v8837 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8837 = v8834;

	i8 v8838 = (i8)(intptr_t)(ws+3040);
	i8 v8839 = *(i8*)(intptr_t)v8838;
	i8 v8840 = (i8)+0;
	if (v8839==v8840) goto c02_0816; else goto c02_0817;

c02_0816:;


	void f472_WrongNumberOfElementsError(void);
	f472_WrongNumberOfElementsError();

	goto c02_0813;

c02_0817:;

c02_0813:;

	i8 v8841 = (i8)(intptr_t)(ws+3040);
	i8 v8842 = *(i8*)(intptr_t)v8841;
	i8 v8843 = v8842+(+41);
	i1 v8844 = *(i1*)(intptr_t)v8843;

	void f475_AlignTo(i1 /* alignment */);
	f475_AlignTo(v8844);

	i8 v8845 = (i8)(intptr_t)(ws+3032);
	i8 v8846 = *(i8*)(intptr_t)v8845;

	void f476_CheckForOverlaps(i8 /* member */);
	f476_CheckForOverlaps(v8846);

endsub:;
	*p8833 = *(i8*)(intptr_t)(ws+3040);
	*p8832 = *(i8*)(intptr_t)(ws+3032);
}
static data c02_a818[] = { // yy_action




	{ .i1 = { 0x21,0x02,0x94,0x01,0x28,0x02,0xc6,0x00}},




	{ .i1 = { 0x32,0x02,0x3c,0x00,0x55,0x00,0x5e,0x00}},




	{ .i1 = { 0xaf,0x01,0x05,0x00,0xad,0x00,0x9f,0x00}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x21,0x02}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0x63,0x00,0xa6,0x00}},




	{ .i1 = { 0x4d,0x00,0xd2,0x00,0x9b,0x01,0xb4,0x00}},




	{ .i1 = { 0x0a,0x02,0x59,0x00,0x48,0x00,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x37,0x02,0xa2,0x00}},




	{ .i1 = { 0x64,0x00,0x68,0x01,0x44,0x01,0xeb,0x01}},




	{ .i1 = { 0x4c,0x00,0x12,0x02,0xd0,0x00,0xbd,0x00}},




	{ .i1 = { 0x4b,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0x36,0x00,0xa3,0x00,0xa2,0x00,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x38,0x00,0xab,0x00,0x3c,0x00}},




	{ .i1 = { 0x55,0x00,0x32,0x00,0x34,0x00,0x56,0x00}},




	{ .i1 = { 0x7f,0x00,0x90,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0xa8,0x00,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0xc3,0x00,0x94,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xa1,0x00,0x8d,0x01,0xcd,0x00,0x5e,0x00}},




	{ .i1 = { 0x5f,0x00,0xeb,0x01,0xc8,0x00,0x69,0x01}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0xb0,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0x68,0x01,0x96,0x01}},




	{ .i1 = { 0x4d,0x00,0xd2,0x00,0x9b,0x01,0x46,0x00}},




	{ .i1 = { 0x2f,0x00,0x59,0x00,0x95,0x01,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x7e,0x00,0xeb,0x01}},




	{ .i1 = { 0x6b,0x01,0x68,0x01,0x44,0x01,0x92,0x00}},




	{ .i1 = { 0x4c,0x00,0xb7,0x00,0xd0,0x00,0xbd,0x00}},




	{ .i1 = { 0x4b,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0xcd,0x00,0x16,0x00,0x5f,0x00,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x95,0x00,0xfc,0x01,0xeb,0x01}},




	{ .i1 = { 0xd0,0x00,0x32,0x00,0x34,0x00,0x10,0x00}},




	{ .i1 = { 0x7f,0x00,0x94,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x2b,0x00,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x16,0x00,0x94,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xca,0x00,0x8a,0x01,0xcd,0x00,0x5e,0x00}},




	{ .i1 = { 0x5f,0x00,0xeb,0x01,0xc9,0x00,0xb1,0x00}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x82,0x01}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0xb3,0x00,0xb2,0x00}},




	{ .i1 = { 0x4d,0x00,0xd2,0x00,0x9b,0x01,0x46,0x00}},




	{ .i1 = { 0x2f,0x00,0x59,0x00,0x7c,0x01,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x68,0x01,0x6d,0x00}},




	{ .i1 = { 0x76,0x00,0x68,0x01,0x44,0x01,0x44,0x00}},




	{ .i1 = { 0x4c,0x00,0x46,0x00,0x2f,0x00,0xbd,0x00}},




	{ .i1 = { 0x4b,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0xb1,0x00,0xcd,0x00,0xcd,0x00,0x5f,0x00}},




	{ .i1 = { 0x5f,0x00,0x65,0x00,0x2f,0x01,0x69,0x01}},




	{ .i1 = { 0xc1,0x00,0x00,0x02,0xb4,0x00,0x0a,0x02}},




	{ .i1 = { 0xce,0x00,0x25,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x47,0x00,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x22,0x02,0x94,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0x2a,0x02,0x66,0x00,0x45,0x00,0x5e,0x00}},




	{ .i1 = { 0x8e,0x00,0x8e,0x00,0x09,0x00,0xa9,0x00}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x4a,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0x14,0x00,0x12,0x00}},




	{ .i1 = { 0x4d,0x00,0xd2,0x00,0x9b,0x01,0x68,0x01}},




	{ .i1 = { 0xf9,0x01,0x59,0x00,0x5c,0x00,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x40,0x00,0x6e,0x00}},




	{ .i1 = { 0x76,0x00,0x68,0x01,0x44,0x01,0x39,0x00}},




	{ .i1 = { 0x4c,0x00,0x7f,0x00,0xac,0x00,0xbd,0x00}},




	{ .i1 = { 0x4b,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0x05,0x02,0xcd,0x00,0xcd,0x00,0x5f,0x00}},




	{ .i1 = { 0x5f,0x00,0xa7,0x00,0x16,0x00,0xcd,0x00}},




	{ .i1 = { 0x91,0x01,0x5f,0x00,0x6c,0x00,0x28,0x01}},




	{ .i1 = { 0x70,0x01,0xc5,0x01,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0x62,0x00,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x0c,0x00,0x94,0x01,0xcf,0x00,0xc6,0x00}},




	{ .i1 = { 0xcd,0x00,0x08,0x00,0x5f,0x00,0x5e,0x00}},




	{ .i1 = { 0x8f,0x00,0x8f,0x00,0x09,0x00,0x7c,0x01}},




	{ .i1 = { 0x68,0x00,0x2d,0x01,0x35,0x00,0x52,0x00}},




	{ .i1 = { 0x0f,0x00,0x26,0x00,0xef,0x01,0xf4,0x01}},




	{ .i1 = { 0x4d,0x00,0xd2,0x00,0x9b,0x01,0xe2,0x01}},




	{ .i1 = { 0xf4,0x01,0x59,0x00,0x67,0x01,0x33,0x00}},




	{ .i1 = { 0x60,0x00,0x15,0x00,0x76,0x00,0x77,0x00}},




	{ .i1 = { 0x1b,0x00,0x68,0x01,0x44,0x01,0x04,0x02}},




	{ .i1 = { 0x4c,0x00,0xe1,0x01,0xf4,0x01,0xbd,0x00}},




	{ .i1 = { 0x4b,0x00,0x5d,0x01,0xae,0x00,0x5b,0x00}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0x0f,0x02,0xb2,0x00,0xb7,0x00,0x6c,0x00}},




	{ .i1 = { 0x09,0x02,0xc0,0x00,0x8d,0x00,0x59,0x00}},




	{ .i1 = { 0x9d,0x00,0x93,0x00,0x2a,0x00,0x28,0x00}},




	{ .i1 = { 0x27,0x00,0xa3,0x01,0xc5,0x00,0x1d,0x00}},




	{ .i1 = { 0x45,0x01,0xcd,0x00,0xcf,0x00,0x5f,0x00}},




	{ .i1 = { 0xd0,0x00,0x14,0x00,0x12,0x00,0x34,0x02}},




	{ .i1 = { 0x09,0x00,0xeb,0x01,0x36,0x00,0x7f,0x00}},




	{ .i1 = { 0xa4,0x00,0x2b,0x00,0x31,0x00,0x38,0x00}},




	{ .i1 = { 0x3a,0x01,0x0e,0x00,0xd1,0x00,0x32,0x00}},




	{ .i1 = { 0x34,0x00,0x3e,0x00,0xd0,0x00,0xbe,0x00}},




	{ .i1 = { 0x0c,0x00,0xcd,0x00,0x6c,0x00,0x5f,0x00}},




	{ .i1 = { 0x36,0x00,0xc7,0x01,0x16,0x00,0x2b,0x00}},




	{ .i1 = { 0x31,0x00,0x38,0x00,0xeb,0x01,0x66,0x01}},




	{ .i1 = { 0x49,0x00,0x32,0x00,0x34,0x00,0x8c,0x00}},




	{ .i1 = { 0xcd,0x00,0xb9,0x00,0x5f,0x00,0x2e,0x00}},




	{ .i1 = { 0x30,0x00,0x21,0x00,0x1e,0x00,0x1f,0x00}},




	{ .i1 = { 0x20,0x00,0x23,0x00,0x22,0x00,0x2d,0x00}},




	{ .i1 = { 0x2c,0x00,0x46,0x00,0x2f,0x00,0xeb,0x01}},




	{ .i1 = { 0xbb,0x00,0x14,0x00,0x12,0x00,0xbf,0x00}},




	{ .i1 = { 0xf6,0x01,0x2e,0x00,0x30,0x00,0x21,0x00}},




	{ .i1 = { 0x1e,0x00,0x1f,0x00,0x20,0x00,0x23,0x00}},




	{ .i1 = { 0x22,0x00,0x2d,0x00,0x2c,0x00,0x46,0x00}},




	{ .i1 = { 0x2f,0x00,0x61,0x00,0x9c,0x00,0xd0,0x00}},




	{ .i1 = { 0x35,0x00,0x08,0x00,0x37,0x00,0x26,0x00}},




	{ .i1 = { 0x91,0x00,0x54,0x00,0x62,0x01,0x6c,0x00}},




	{ .i1 = { 0x2b,0x00,0x06,0x00,0x8d,0x00,0x53,0x00}},




	{ .i1 = { 0xc4,0x00,0x33,0x00,0x01,0x00,0x02,0x00}},




	{ .i1 = { 0x07,0x00,0x92,0x01,0x16,0x00,0x68,0x01}},




	{ .i1 = { 0x44,0x01,0xcd,0x00,0x4c,0x00,0x5f,0x00}},




	{ .i1 = { 0x50,0x00,0x0b,0x00,0x4b,0x00,0x5d,0x01}},




	{ .i1 = { 0x35,0x00,0x11,0x00,0x13,0x00,0x26,0x00}},




	{ .i1 = { 0x0d,0x00,0x03,0x00,0x04,0x00,0x6b,0x00}},




	{ .i1 = { 0x32,0x01,0x9e,0x00,0x8a,0x00,0x39,0x01}},




	{ .i1 = { 0x38,0x01,0x33,0x00,0x7e,0x00,0x78,0x00}},




	{ .i1 = { 0x2a,0x00,0x28,0x00,0x27,0x00,0x68,0x01}},




	{ .i1 = { 0x44,0x01,0xcd,0x00,0x4c,0x00,0x5f,0x00}},




	{ .i1 = { 0xcf,0x00,0x71,0x01,0x4b,0x00,0x5d,0x01}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0x3a,0x00,0x6c,0x00,0xfd,0x01,0x35,0x00}},




	{ .i1 = { 0xc7,0x00,0x37,0x00,0x26,0x00,0x93,0x01}},




	{ .i1 = { 0x8e,0x01,0x0a,0x00,0x16,0x00,0x17,0x00}},




	{ .i1 = { 0x2a,0x00,0x28,0x00,0x27,0x00,0xcd,0x00}},




	{ .i1 = { 0x33,0x00,0x5f,0x00,0x8c,0x01,0x41,0x00}},




	{ .i1 = { 0xcf,0x00,0x87,0x01,0x68,0x01,0x44,0x01}},




	{ .i1 = { 0x3d,0x00,0x4c,0x00,0xa0,0x00,0xa4,0x01}},




	{ .i1 = { 0xaa,0x00,0x4b,0x00,0x5d,0x01,0x35,0x00}},




	{ .i1 = { 0x42,0x00,0x37,0x00,0x26,0x00,0x7d,0x01}},




	{ .i1 = { 0x57,0x00,0x83,0x01,0x5a,0x00,0xb5,0x00}},




	{ .i1 = { 0x4e,0x00,0x79,0x01,0xa2,0x01,0x6e,0x01}},




	{ .i1 = { 0x33,0x00,0xb6,0x00,0x4f,0x00,0x2a,0x00}},




	{ .i1 = { 0x28,0x00,0x27,0x00,0x68,0x01,0x44,0x01}},




	{ .i1 = { 0x6d,0x01,0x4c,0x00,0x43,0x00,0xcf,0x00}},




	{ .i1 = { 0x64,0x01,0x4b,0x00,0x5d,0x01,0x18,0x00}},




	{ .i1 = { 0x5f,0x01,0xbc,0x00,0x75,0x01,0x19,0x00}},




	{ .i1 = { 0x36,0x01,0x35,0x00,0x6c,0x00,0x37,0x00}},




	{ .i1 = { 0x26,0x00,0x8b,0x00,0x31,0x01,0xc2,0x00}},




	{ .i1 = { 0x51,0x00,0x2e,0x01,0x7f,0x00,0x2a,0x00}},




	{ .i1 = { 0x28,0x00,0x27,0x00,0x33,0x00,0x79,0x00}},




	{ .i1 = { 0xcd,0x00,0x30,0x01,0x5f,0x00,0xcf,0x00}},




	{ .i1 = { 0x68,0x01,0x44,0x01,0xcb,0x00,0x4c,0x00}},




	{ .i1 = { 0xcd,0x00,0x12,0x00,0x5f,0x00,0x4b,0x00}},




	{ .i1 = { 0x5d,0x01,0xcd,0x00,0x2c,0x01,0x5f,0x00}},




	{ .i1 = { 0x1a,0x00,0x63,0x01,0x60,0x01,0x7a,0x00}},




	{ .i1 = { 0xf9,0x01,0x1c,0x00,0x5c,0x01,0x29,0x00}},




	{ .i1 = { 0x27,0x01,0xb0,0x01,0x7b,0x00,0x7f,0x00}},




	{ .i1 = { 0xb0,0x01,0x2a,0x00,0x28,0x00,0x27,0x00}},




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




	{ .i1 = { 0x5f,0x00,0x2d,0x00,0x2c,0x00,0x46,0x00}},




	{ .i1 = { 0x2f,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x2e,0x00}},




	{ .i1 = { 0x30,0x00,0xcd,0x00,0xb0,0x01,0x5f,0x00}},




	{ .i1 = { 0x72,0x00,0xb0,0x01,0xb0,0x01,0x2d,0x00}},




	{ .i1 = { 0x2c,0x00,0x46,0x00,0x2f,0x00,0xb0,0x01}},




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




	{ .i1 = { 0x2d,0x00,0x2c,0x00,0x46,0x00,0x2f,0x00}},




	{ .i1 = { 0xcd,0x00,0xb0,0x01,0x5f,0x00,0xb0,0x01}},




	{ .i1 = { 0x73,0x00,0x82,0x00,0x2e,0x00,0x30,0x00}},




	{ .i1 = { 0xcd,0x00,0xcd,0x00,0x5f,0x00,0x5f,0x00}},




	{ .i1 = { 0x83,0x00,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x46,0x00,0x2f,0x00,0xcd,0x00,0xcd,0x00}},




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




	{ .i1 = { 0x46,0x00,0x2f,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x89,0x00,0x2e,0x00,0x30,0x00}},




	{ .i1 = { 0x9b,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x87,0x00,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x46,0x00,0x2f,0x00,0xb0,0x01,0xcd,0x00}},




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




	{ .i1 = { 0x46,0x00,0x2f,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2e,0x00,0x30,0x00,0xcd,0x00,0xcd,0x00}},




	{ .i1 = { 0x5f,0x00,0x5f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2d,0x00,0x2c,0x00,0x46,0x00,0x2f,0x00}},




	{ .i1 = { 0xb0,0x01,0x24,0x02,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x70,0x00,0x6a,0x00,0x69,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x67,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5d,0x00,0xb0,0x01,0xba,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x24,0x02,0xb0,0x01,0x3f,0x00}},




	{ .i1 = { 0x70,0x00,0x6a,0x00,0x69,0x00,0xaf,0x00}},




	{ .i1 = { 0x58,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x67,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xa5,0x00}},




	{ .i1 = { 0x5d,0x00,0xb0,0x01,0xba,0x00,0x3b,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x3f,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb8,0x00}},




	{ .i1 = { 0x58,0x00,0x35,0x00,0xb0,0x01,0x37,0x00}},




	{ .i1 = { 0x26,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xa5,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x33,0x00,0x3b,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x68,0x01,0x44,0x01,0xb0,0x01,0x4c,0x00}},




	{ .i1 = { 0xd0,0x00,0xb0,0x01,0xb0,0x01,0x4b,0x00}},




	{ .i1 = { 0x5d,0x01,0xb0,0x01,0x36,0x00,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x2b,0x00,0x31,0x00,0x38,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x32,0x00}},




	{ .i1 = { 0x34,0x00,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0x2a,0x00,0x28,0x00,0x27,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xcf,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x2e,0x00}},




	{ .i1 = { 0x30,0x00,0x24,0x02,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x70,0x00,0x6a,0x00,0x69,0x00,0x2d,0x00}},




	{ .i1 = { 0x2c,0x00,0x46,0x00,0x2f,0x00,0xb0,0x01}},




	{ .i1 = { 0x67,0x00,0xb0,0x01,0xb0,0x01,0xd0,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xcd,0x00,0xb0,0x01}},




	{ .i1 = { 0x5d,0x00,0x36,0x00,0xba,0x00,0xb0,0x01}},




	{ .i1 = { 0x2b,0x00,0x31,0x00,0x38,0x00,0x3f,0x00}},




	{ .i1 = { 0xb0,0x01,0xd0,0x00,0x32,0x00,0x34,0x00}},




	{ .i1 = { 0x58,0x00,0xb0,0x01,0xb0,0x01,0x36,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2b,0x00,0x31,0x00}},




	{ .i1 = { 0x38,0x00,0xb0,0x01,0xb0,0x01,0xa5,0x00}},




	{ .i1 = { 0x32,0x00,0x34,0x00,0xb0,0x01,0x3b,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0x30,0x00}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0x2d,0x00,0x2c,0x00}},




	{ .i1 = { 0x46,0x00,0x2f,0x00,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0xb0,0x01,0xb0,0x01,0xb0,0x01,0xb0,0x01}},




	{ .i1 = { 0x2d,0x00,0x2c,0x00,0x46,0x00,0x2f,0x00}},

};
static data c02_a819[] = { // yy_lookahead








	{ .i1 = { 0x56,0x01,0x4f,0x03,0x6b,0x6c,0x6d,0x07}},








	{ .i1 = { 0x43,0x44,0x0a,0x4f,0x0c,0x0d,0x0e,0x56}},








	{ .i1 = { 0x10,0x11,0x60,0x47,0x14,0x15,0x16,0x65}},








	{ .i1 = { 0x66,0x19,0x10,0x1b,0x1c,0x1d,0x74,0x75}},








	{ .i1 = { 0x62,0x21,0x22,0x57,0x24,0x57,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x0e,0x74,0x75,0x11}},








	{ .i1 = { 0x12,0x13,0x6b,0x6c,0x6d,0x17,0x18,0x69}},








	{ .i1 = { 0x48,0x47,0x3a,0x3b,0x3c,0x23,0x3e,0x3f}},








	{ .i1 = { 0x0a,0x01,0x42,0x03,0x54,0x21,0x56,0x07}},








	{ .i1 = { 0x58,0x57,0x0a,0x21,0x0c,0x0d,0x0e,0x47}},








	{ .i1 = { 0x10,0x11,0x21,0x22,0x14,0x15,0x16,0x39}},








	{ .i1 = { 0x3a,0x19,0x29,0x1b,0x1c,0x1d,0x48,0x57}},








	{ .i1 = { 0x04,0x21,0x22,0x47,0x24,0x0b,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x56,0x11,0x58,0x11}},








	{ .i1 = { 0x12,0x5b,0x5c,0x57,0x08,0x17,0x18,0x41}},








	{ .i1 = { 0x48,0x47,0x3a,0x3b,0x3c,0x11,0x3e,0x3f}},








	{ .i1 = { 0x11,0x01,0x42,0x03,0x54,0x16,0x56,0x07}},








	{ .i1 = { 0x58,0x57,0x0a,0x21,0x0c,0x0d,0x0e,0x04}},








	{ .i1 = { 0x10,0x11,0x67,0x68,0x14,0x15,0x16,0x39}},








	{ .i1 = { 0x3a,0x19,0x40,0x1b,0x1c,0x1d,0x21,0x48}},








	{ .i1 = { 0x48,0x21,0x22,0x11,0x24,0x39,0x3a,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x21,0x56,0x56,0x58}},








	{ .i1 = { 0x58,0x60,0x0d,0x21,0x5d,0x5e,0x65,0x66}},








	{ .i1 = { 0x26,0x02,0x3a,0x3b,0x3c,0x06,0x3e,0x3f}},








	{ .i1 = { 0x00,0x01,0x42,0x03,0x52,0x53,0x10,0x07}},








	{ .i1 = { 0x70,0x71,0x72,0x6e,0x0c,0x0d,0x0e,0x3d}},








	{ .i1 = { 0x10,0x11,0x2d,0x2e,0x14,0x15,0x16,0x21}},








	{ .i1 = { 0x56,0x19,0x58,0x1b,0x1c,0x1d,0x06,0x48}},








	{ .i1 = { 0x48,0x21,0x22,0x02,0x24,0x48,0x6a,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x56,0x56,0x56,0x58}},








	{ .i1 = { 0x58,0x54,0x11,0x56,0x20,0x58,0x48,0x16}},








	{ .i1 = { 0x04,0x4b,0x3a,0x3b,0x3c,0x62,0x3e,0x3f}},








	{ .i1 = { 0x2c,0x01,0x42,0x03,0x56,0x44,0x58,0x07}},








	{ .i1 = { 0x70,0x71,0x72,0x40,0x0c,0x0d,0x0e,0x4e}},








	{ .i1 = { 0x10,0x11,0x55,0x56,0x14,0x15,0x16,0x55}},








	{ .i1 = { 0x56,0x19,0x21,0x1b,0x1c,0x1d,0x48,0x48}},








	{ .i1 = { 0x2c,0x21,0x22,0x46,0x24,0x55,0x56,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x56,0x56,0x58,0x58}},








	{ .i1 = { 0x67,0x68,0x0b,0x48,0x66,0x5e,0x4b,0x19}},








	{ .i1 = { 0x4d,0x47,0x3a,0x3b,0x3c,0x16,0x3e,0x3f}},








	{ .i1 = { 0x04,0x56,0x42,0x58,0x08,0x2d,0x2e,0x71}},








	{ .i1 = { 0x72,0x57,0x0e,0x48,0x20,0x11,0x12,0x13}},








	{ .i1 = { 0x04,0x10,0x47,0x17,0x18,0x5f,0x08,0x54}},








	{ .i1 = { 0x2c,0x56,0x48,0x58,0x0e,0x4b,0x11,0x11}},








	{ .i1 = { 0x12,0x13,0x57,0x16,0x51,0x17,0x18,0x47}},








	{ .i1 = { 0x56,0x59,0x58,0x2f,0x30,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x57}},








	{ .i1 = { 0x59,0x2d,0x2e,0x46,0x59,0x2f,0x30,0x31}},








	{ .i1 = { 0x32,0x33,0x34,0x35,0x36,0x37,0x38,0x39}},








	{ .i1 = { 0x3a,0x09,0x46,0x08,0x0e,0x44,0x10,0x11}},








	{ .i1 = { 0x61,0x61,0x05,0x48,0x11,0x44,0x4b,0x4e}},








	{ .i1 = { 0x4d,0x1b,0x44,0x44,0x44,0x1f,0x11,0x21}},








	{ .i1 = { 0x22,0x56,0x24,0x58,0x1a,0x25,0x28,0x29}},








	{ .i1 = { 0x0e,0x0f,0x10,0x11,0x4c,0x44,0x44,0x48}},








	{ .i1 = { 0x0c,0x0a,0x4b,0x06,0x06,0x1b,0x48,0x48}},








	{ .i1 = { 0x3a,0x3b,0x3c,0x21,0x22,0x56,0x24,0x58}},








	{ .i1 = { 0x42,0x04,0x28,0x29,0x56,0x56,0x58,0x58}},








	{ .i1 = { 0x2c,0x48,0x5c,0x0e,0x4b,0x10,0x11,0x16}},








	{ .i1 = { 0x16,0x1f,0x11,0x10,0x3a,0x3b,0x3c,0x56}},








	{ .i1 = { 0x1b,0x58,0x04,0x06,0x42,0x14,0x21,0x22}},








	{ .i1 = { 0x40,0x24,0x09,0x16,0x0a,0x28,0x29,0x0e}},








	{ .i1 = { 0x06,0x10,0x11,0x19,0x19,0x04,0x06,0x29}},








	{ .i1 = { 0x2c,0x04,0x16,0x16,0x1b,0x10,0x02,0x3a}},








	{ .i1 = { 0x3b,0x3c,0x21,0x22,0x16,0x24,0x40,0x42}},








	{ .i1 = { 0x05,0x28,0x29,0x02,0x16,0x21,0x04,0x2c}},








	{ .i1 = { 0x16,0x0e,0x48,0x10,0x11,0x4b,0x16,0x3f}},








	{ .i1 = { 0x1a,0x0d,0x48,0x3a,0x3b,0x3c,0x1b,0x48}},








	{ .i1 = { 0x56,0x16,0x58,0x42,0x21,0x22,0x54,0x24}},








	{ .i1 = { 0x56,0x2e,0x58,0x28,0x29,0x56,0x0d,0x58}},








	{ .i1 = { 0x2c,0x05,0x04,0x48,0x10,0x10,0x21,0x3a}},








	{ .i1 = { 0x16,0x76,0x48,0x48,0x76,0x3a,0x3b,0x3c}},








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
static data c02_a81a[] = { // yy_shift_ofst




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




	{ .i1 = { 0x24,0x00,0x24,0x00,0x0a,0x00,0x0a,0x00}},




	{ .i1 = { 0x92,0x00,0x92,0x00,0x92,0x00,0x92,0x00}},




	{ .i1 = { 0x92,0x00,0x92,0x00,0x92,0x00,0x92,0x00}},




	{ .i1 = { 0x8b,0x00,0x36,0x00,0xb6,0x00,0xb6,0x00}},




	{ .i1 = { 0xb6,0x00,0x2a,0x00,0x6a,0x00,0x7d,0x00}},




	{ .i1 = { 0x2c,0x04,0x2c,0x04,0x80,0x01,0x80,0x01}},




	{ .i1 = { 0x5a,0x00,0x1a,0x00,0xd8,0x00,0x7d,0x00}},




	{ .i1 = { 0xcb,0x00,0xf9,0x00,0x0a,0x00,0x1e,0x01}},




	{ .i1 = { 0x41,0x01,0x41,0x01,0xf9,0x00,0x41,0x01}},




	{ .i1 = { 0xf9,0x00,0x2c,0x04,0x2c,0x04,0x2c,0x04}},




	{ .i1 = { 0x2c,0x04,0x2c,0x04,0x2c,0x04,0x2c,0x04}},




	{ .i1 = { 0x2c,0x04,0x2c,0x04,0x2c,0x04,0x3c,0x01}},




	{ .i1 = { 0x4e,0x01,0x36,0x02,0x48,0x02,0x81,0x02}},




	{ .i1 = { 0x93,0x02,0xcb,0x02,0xdf,0x02,0x17,0x03}},




	{ .i1 = { 0x36,0x02,0x29,0x03,0xac,0x03,0xac,0x03}},




	{ .i1 = { 0xac,0x03,0xac,0x03,0xac,0x03,0xac,0x03}},




	{ .i1 = { 0xac,0x03,0xac,0x03,0xac,0x03,0xac,0x03}},




	{ .i1 = { 0xe3,0x03,0xf1,0x03,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x5e,0x00,0x5e,0x00,0x5e,0x00,0x6c,0x00}},




	{ .i1 = { 0x6c,0x00,0x6c,0x00,0x4c,0x01,0xa5,0x00}},




	{ .i1 = { 0xe1,0x00,0x18,0x01,0xd4,0x00,0x2c,0x01}},




	{ .i1 = { 0x6f,0x00,0x27,0x01,0x4d,0x01,0x5c,0x00}},




	{ .i1 = { 0x8d,0x01,0xf4,0x00,0x83,0x01,0x83,0x01}},




	{ .i1 = { 0x83,0x01,0x83,0x01,0x83,0x01,0x83,0x01}},




	{ .i1 = { 0xb7,0x00,0x8a,0x01,0xa4,0x01,0xa7,0x01}},




	{ .i1 = { 0xad,0x01,0xae,0x01,0x9c,0x01,0xb9,0x01}},




	{ .i1 = { 0xba,0x01,0xb2,0x01,0xc1,0x01,0xd6,0x01}},




	{ .i1 = { 0xc3,0x01,0xd5,0x01,0xc9,0x01,0xda,0x01}},




	{ .i1 = { 0xa0,0x01,0xd2,0x01,0xd3,0x01,0xcd,0x01}},




	{ .i1 = { 0xc1,0x01,0xe2,0x01,0xc4,0x01,0xe9,0x01}},




	{ .i1 = { 0xe8,0x01,0xed,0x01,0xc6,0x01,0xe5,0x01}},




	{ .i1 = { 0xdc,0x01,0xdd,0x01,0xf4,0x01,0xe6,0x01}},




	{ .i1 = { 0xbe,0x01,0xe4,0x01,0xee,0x01,0x01,0x02}},




	{ .i1 = { 0x02,0x02,0xdb,0x01,0xf2,0x01,0xd0,0x01}},




	{ .i1 = { 0xf6,0x01,0xf8,0x01,0x03,0x02,0xf3,0x01}},




	{ .i1 = { 0x04,0x02,0x19,0x02,0x24,0x02,0x26,0x02}},




	{ .i1 = { 0xfc,0x01,0x1c,0x02,0x1d,0x02,0xf5,0x01}},




	{ .i1 = { 0x0d,0x02,0xc1,0x01,0x1a,0x02}},
};
static data c02_a81b[] = { // yy_reduce_ofst




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




	{ .i1 = { 0x99,0xff,0xc7,0xff,0xb2,0xff,0x51,0x00}},




	{ .i1 = { 0xcc,0xff,0xf2,0xff,0x08,0x00,0x1c,0x00}},




	{ .i1 = { 0x32,0x00,0xf2,0x00,0x0b,0x01,0x20,0x01}},




	{ .i1 = { 0x2b,0x00,0x72,0x00,0xbd,0x00,0xc2,0x00}},




	{ .i1 = { 0xd0,0x00,0xce,0xff,0xc9,0x00,0x82,0x00}},




	{ .i1 = { 0xc1,0x00,0x49,0x01,0xb3,0xff,0xbc,0xff}},




	{ .i1 = { 0xbe,0xff,0x5d,0x00,0x7c,0x00,0x96,0x00}},




	{ .i1 = { 0x9b,0x00,0xdd,0x00,0xce,0x00,0xf6,0x00}},




	{ .i1 = { 0x10,0x01,0x1f,0x01,0x35,0x01,0x23,0x01}},




	{ .i1 = { 0x44,0x01,0x51,0x01,0x56,0x01,0x2f,0x01}},




	{ .i1 = { 0x57,0x01,0x30,0x01,0x58,0x01,0x13,0x01}},




	{ .i1 = { 0x60,0x01,0x69,0x01,0x6a,0x01}},
};
static data c02_a81c[] = { // yy_default




	{ .i1 = { 0x23,0x02,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0x27,0x02,0x2b,0x02}},




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




	{ .i1 = { 0xae,0x01,0x19,0x02,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0x31,0x02,0x31,0x02,0x0b,0x02,0x0b,0x02}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0x23,0x02,0x23,0x02,0x26,0x02,0x26,0x02}},




	{ .i1 = { 0xae,0x01,0x15,0x02,0x30,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0x23,0x02,0x23,0x02,0x2f,0x02}},




	{ .i1 = { 0x23,0x02,0x2f,0x02,0x23,0x02,0x29,0x02}},




	{ .i1 = { 0xbd,0x01,0x23,0x02,0x23,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0x02,0x02,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0x1a,0x02,0x02,0x02}},




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




	{ .i1 = { 0xae,0x01,0xae,0x01,0x13,0x02,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0xae,0x01,0xae,0x01,0xae,0x01,0xae,0x01}},




	{ .i1 = { 0x10,0x02,0xae,0x01,0x0e,0x02,0xae,0x01}},




	{ .i1 = { 0x08,0x02,0xae,0x01,0xae,0x01,0xae,0x01}},




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
static data c02_a81d[] = { // yyTokenName

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

// token_destructor workspace at ws+3072 length ws+0
void f479_token_destructor(void) {

	i8 v8849 = (i8)(intptr_t)(ws+3056);
	i1 v8850 = *(i1*)(intptr_t)v8849;
	i1 v8851 = (i1)+41;
	if (v8850==v8851) goto c02_0823; else goto c02_0825;

c02_0825:;

	i8 v8852 = (i8)(intptr_t)(ws+3056);
	i1 v8853 = *(i1*)(intptr_t)v8852;
	i1 v8854 = (i1)+33;
	if (v8853==v8854) goto c02_0823; else goto c02_0824;

c02_0823:;

	i8 v8855 = (i8)(intptr_t)c02_s01c4;

	void f11_print(i8 /* ptr */);
	f11_print(v8855);

	i8 v8856 = (i8)(intptr_t)(ws+3064);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	i8 v8858 = *(i8*)(intptr_t)v8857;

	void f32_Free(i8 /* block */);
	f32_Free(v8858);

	goto c02_081e;

c02_0824:;

c02_081e:;

endsub:;
}

// yy_destructor workspace at ws+3056 length ws+16
void f478_yy_destructor(i8 p8847 /* yypminor */, i1 p8848 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3056) = p8848; /*yymajor */
	*(i8*)(intptr_t)(ws+3064) = p8847; /*yypminor */


	i8 v8859 = (i8)(intptr_t)(ws+3056);
	i1 v8860 = *(i1*)(intptr_t)v8859;
	i1 v8861 = (i1)+0;
	if (v8860==v8861) goto c02_082c; else goto c02_082d;

c02_082d:;

	i8 v8862 = (i8)(intptr_t)(ws+3056);
	i1 v8863 = *(i1*)(intptr_t)v8862;
	i1 v8864 = (i1)+67;
	if (v8863<v8864) goto c02_082b; else goto c02_082c;

c02_082b:;


	void f479_token_destructor(void);
	f479_token_destructor();

	goto c02_0826;

c02_082c:;

c02_0826:;

endsub:;
}

// yy_pop_parser_stack workspace at ws+3008 length ws+0
void f480_yy_pop_parser_stack(void) {

	i8 v8865 = (i8)(intptr_t)(ws+1248);
	i8 v8866 = *(i8*)(intptr_t)v8865;
	i8 v8867 = v8866+(-16);
	i8 v8868 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v8868 = v8867;

	i8 v8869 = (i8)(intptr_t)(ws+1248);
	i8 v8870 = *(i8*)(intptr_t)v8869;
	i8 v8871 = v8870+(+2);
	i1 v8872 = *(i1*)(intptr_t)v8871;
	i8 v8873 = (i8)(intptr_t)(ws+1248);
	i8 v8874 = *(i8*)(intptr_t)v8873;
	i8 v8875 = v8874+(+8);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8875, v8872);

endsub:;
}

// yy_pop_all_parser_stack workspace at ws+3008 length ws+0
void f481_yy_pop_all_parser_stack(void) {

c02_0830:;

	i8 v8876 = (i8)(intptr_t)(ws+1248);
	i8 v8877 = *(i8*)(intptr_t)v8876;
	i8 v8878 = (i8)(intptr_t)(ws+1256);
	if (v8877==v8878) goto c02_0833; else goto c02_0832;

c02_0832:;


	void f480_yy_pop_parser_stack(void);
	f480_yy_pop_parser_stack();

	goto c02_0830;

c02_0833:;

endsub:;
}
const i1 c02_s01c5[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };

// yy_stack_overflow workspace at ws+3008 length ws+0
void f482_yy_stack_overflow(void) {


	void f481_yy_pop_all_parser_stack(void);
	f481_yy_pop_all_parser_stack();


	void f59_StartError(void);
	f59_StartError();

	i8 v8879 = (i8)(intptr_t)c02_s01c5;

	void f11_print(i8 /* ptr */);
	f11_print(v8879);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}
static data c02_a834[] = { // yyRuleInfoLhs








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








	{ .i1 = { 0x5d,0x5e,0x61,0x5f,0x64,0x62,0x63,0x60}},








	{ .i1 = { 0x60,0x65,0x65,0x66,0x66,0x67,0x67,0x68}},








	{ .i1 = { 0x45,0x69,0x6a,0x6c,0x6e,0x6e,0x6d,0x45}},








	{ .i1 = { 0x6f,0x71,0x71,0x72,0x45,0x73,0x75,0x75}},








	{ .i1 = { 0x75,0x43,0x44,0x44,0x45,0x4f,0x4f,0x4f}},








	{ .i1 = { 0x51,0x51,0x52,0x45,0x45,0x45,0x61,0x6a}},








	{ .i1 = { 0x6b,0x6b,0x70,0x70,0x71,0x74,0x74}},
};
static data c02_a835[] = { // yyRuleInfoNRhs








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








	{ .i1 = { 0x03,0x01,0x05,0x02,0x03,0x01,0x02,0x01}},








	{ .i1 = { 0x03,0x01,0x00,0x02,0x03,0x01,0x03,0x03}},








	{ .i1 = { 0x07,0x01,0x02,0x05,0x00,0x04,0x01,0x05}},








	{ .i1 = { 0x05,0x01,0x03,0x01,0x03,0x01,0x01,0x01}},








	{ .i1 = { 0x01,0x01,0x00,0x02,0x01,0x00,0x02,0x05}},








	{ .i1 = { 0x00,0x02,0x02,0x07,0x05,0x05,0x00,0x00}},








	{ .i1 = { 0x00,0x02,0x01,0x03,0x00,0x01,0x03}},
};

// reduce_0 workspace at ws+3008 length ws+0
void f485_reduce_0(void) {


	void f101_MidReturn(i8* /* m */);
	i8 v8938;
	f101_MidReturn(&v8938);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v8938);

	i1 v8939 = (i1)+22;
	i8 v8940 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8940, v8939);

endsub:;
}

// reduce_1 workspace at ws+3008 length ws+0
void f486_reduce_1(void) {

	i1 v8941 = (i1)+28;
	i8 v8942 = (i8)(intptr_t)(ws+2952);
	i8 v8943 = *(i8*)(intptr_t)v8942;
	i8 v8944 = v8943+(+46);
	*(i1*)(intptr_t)v8944 = v8941;

	i8 v8945 = (i8)(intptr_t)(ws+40);
	i8 v8946 = *(i8*)(intptr_t)v8945;
	i8 v8947 = (i8)(intptr_t)(ws+2952);
	i8 v8948 = *(i8*)(intptr_t)v8947;
	i8 v8949 = (i8)(intptr_t)(ws+2936);
	i8 v8950 = *(i8*)(intptr_t)v8949;

	void f440_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	f440_InitVariable(v8950, v8948, v8946);

	i1 v8951 = (i1)+6;
	i8 v8952 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8952, v8951);

	i1 v8953 = (i1)+22;
	i8 v8954 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8954, v8953);

endsub:;
}

// reduce_2 workspace at ws+3008 length ws+0
void f487_reduce_2(void) {

	i1 v8955 = (i1)+28;
	i8 v8956 = (i8)(intptr_t)(ws+2968);
	i8 v8957 = *(i8*)(intptr_t)v8956;
	i8 v8958 = v8957+(+46);
	*(i1*)(intptr_t)v8958 = v8955;

	i8 v8959 = (i8)(intptr_t)(ws+40);
	i8 v8960 = *(i8*)(intptr_t)v8959;
	i8 v8961 = (i8)(intptr_t)(ws+2968);
	i8 v8962 = *(i8*)(intptr_t)v8961;
	i8 v8963 = (i8)(intptr_t)(ws+2952);
	i8 v8964 = *(i8*)(intptr_t)v8963;

	void f440_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	f440_InitVariable(v8964, v8962, v8960);

	i8 v8965 = (i8)(intptr_t)(ws+2936);
	i8 v8966 = *(i8*)(intptr_t)v8965;
	i8 v8967 = (i8)(intptr_t)(ws+2968);
	i8 v8968 = *(i8*)(intptr_t)v8967;
	i8 v8969 = *(i8*)(intptr_t)v8968;

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v8969, v8966);

	i8 v8970 = (i8)(intptr_t)(ws+2936);
	i8 v8971 = *(i8*)(intptr_t)v8970;
	i8 v8972 = v8971+(+16);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974 = v8973+(+42);
	i2 v8975 = *(i2*)(intptr_t)v8974;
	i1 v8976 = v8975;
	i8 v8977 = (i8)(intptr_t)(ws+2936);
	i8 v8978 = *(i8*)(intptr_t)v8977;
	i8 v8979 = (i8)(intptr_t)(ws+2968);
	i8 v8980 = *(i8*)(intptr_t)v8979;
	i2 v8981 = (i2)+0;

	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	i8 v8982;
	f99_MidAddress(&v8982, v8981, v8980);

	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v8983;
	f106_MidStore(&v8983, v8982, v8978, v8976);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v8983);

	i1 v8984 = (i1)+6;
	i8 v8985 = (i8)(intptr_t)(ws+2960);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8985, v8984);

	i1 v8986 = (i1)+2;
	i8 v8987 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8987, v8986);

	i1 v8988 = (i1)+22;
	i8 v8989 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v8989, v8988);

endsub:;
}
const i1 c02_s01c8[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
const i1 c02_s01c9[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };

// reduce_3 workspace at ws+3008 length ws+8
void f488_reduce_3(void) {

	i8 v8990 = (i8)(intptr_t)(ws+2936);
	i8 v8991 = *(i8*)(intptr_t)v8990;
	i8 v8992 = v8991+(+16);
	i8 v8993 = *(i8*)(intptr_t)v8992;
	i8 v8994 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v8994 = v8993;

	i8 v8995 = (i8)(intptr_t)(ws+3008);
	i8 v8996 = *(i8*)(intptr_t)v8995;
	i8 v8997 = (i8)+0;
	if (v8996==v8997) goto c02_0844; else goto c02_0845;

c02_0844:;

	i8 v8998 = (i8)(intptr_t)c02_s01c8;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v8998);

	goto c02_0841;

c02_0845:;

c02_0841:;

	i8 v8999 = (i8)(intptr_t)(ws+3008);
	i8 v9000 = *(i8*)(intptr_t)v8999;

	void f205_IsScalar(i1* /* result */, i8 /* type */);
	i1 v9001;
	f205_IsScalar(&v9001, v9000);
	i1 v9002 = (i1)+0;
	if (v9001==v9002) goto c02_0849; else goto c02_084a;

c02_0849:;

	i8 v9003 = (i8)(intptr_t)c02_s01c9;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9003);

	goto c02_0846;

c02_084a:;

c02_0846:;

	i1 v9004 = (i1)+28;
	i8 v9005 = (i8)(intptr_t)(ws+2952);
	i8 v9006 = *(i8*)(intptr_t)v9005;
	i8 v9007 = v9006+(+46);
	*(i1*)(intptr_t)v9007 = v9004;

	i8 v9008 = (i8)(intptr_t)(ws+40);
	i8 v9009 = *(i8*)(intptr_t)v9008;
	i8 v9010 = (i8)(intptr_t)(ws+2952);
	i8 v9011 = *(i8*)(intptr_t)v9010;
	i8 v9012 = (i8)(intptr_t)(ws+3008);
	i8 v9013 = *(i8*)(intptr_t)v9012;

	void f440_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	f440_InitVariable(v9013, v9011, v9009);

	i8 v9014 = (i8)(intptr_t)(ws+2936);
	i8 v9015 = *(i8*)(intptr_t)v9014;
	i8 v9016 = (i8)(intptr_t)(ws+2952);
	i8 v9017 = *(i8*)(intptr_t)v9016;
	i8 v9018 = *(i8*)(intptr_t)v9017;

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9018, v9015);

	i8 v9019 = (i8)(intptr_t)(ws+2936);
	i8 v9020 = *(i8*)(intptr_t)v9019;
	i8 v9021 = v9020+(+16);
	i8 v9022 = *(i8*)(intptr_t)v9021;
	i8 v9023 = v9022+(+42);
	i2 v9024 = *(i2*)(intptr_t)v9023;
	i1 v9025 = v9024;
	i8 v9026 = (i8)(intptr_t)(ws+2936);
	i8 v9027 = *(i8*)(intptr_t)v9026;
	i8 v9028 = (i8)(intptr_t)(ws+2952);
	i8 v9029 = *(i8*)(intptr_t)v9028;
	i2 v9030 = (i2)+0;

	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	i8 v9031;
	f99_MidAddress(&v9031, v9030, v9029);

	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v9032;
	f106_MidStore(&v9032, v9031, v9027, v9025);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9032);

	i1 v9033 = (i1)+2;
	i8 v9034 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9034, v9033);

	i1 v9035 = (i1)+22;
	i8 v9036 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9036, v9035);

endsub:;
}

// reduce_4 workspace at ws+3008 length ws+16
void f489_reduce_4(void) {

	i8 v9037 = (i8)(intptr_t)(ws+2952);
	i8 v9038 = *(i8*)(intptr_t)v9037;
	i8 v9039 = v9038+(+16);
	i8 v9040 = *(i8*)(intptr_t)v9039;
	i8 v9041 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9041 = v9040;

	i8 v9042 = (i8)(intptr_t)(ws+2952);
	i8 v9043 = *(i8*)(intptr_t)v9042;

	void f208_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9044;
	f208_UndoLValue(&v9044, v9043);
	i8 v9045 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9045 = v9044;

	i8 v9046 = (i8)(intptr_t)(ws+2936);
	i8 v9047 = *(i8*)(intptr_t)v9046;
	i8 v9048 = (i8)(intptr_t)(ws+3008);
	i8 v9049 = *(i8*)(intptr_t)v9048;

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9049, v9047);

	i8 v9050 = (i8)(intptr_t)(ws+3008);
	i8 v9051 = *(i8*)(intptr_t)v9050;
	i8 v9052 = v9051+(+42);
	i2 v9053 = *(i2*)(intptr_t)v9052;
	i1 v9054 = v9053;
	i8 v9055 = (i8)(intptr_t)(ws+2936);
	i8 v9056 = *(i8*)(intptr_t)v9055;
	i8 v9057 = (i8)(intptr_t)(ws+3016);
	i8 v9058 = *(i8*)(intptr_t)v9057;

	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v9059;
	f106_MidStore(&v9059, v9058, v9056, v9054);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9059);

	i1 v9060 = (i1)+2;
	i8 v9061 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9061, v9060);

	i1 v9062 = (i1)+22;
	i8 v9063 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9063, v9062);

endsub:;
}

// reduce_5 workspace at ws+3008 length ws+0
void f490_reduce_5(void) {

	i8 v9064 = (i8)(intptr_t)(ws+2952);
	i8 v9065 = *(i8*)(intptr_t)v9064;

	void f463_TerminateNormalLoop(i8 /* ll */);
	f463_TerminateNormalLoop(v9065);

	i1 v9066 = (i1)+10;
	i8 v9067 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9067, v9066);

	i1 v9068 = (i1)+13;
	i8 v9069 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9069, v9068);

endsub:;
}

// reduce_6 workspace at ws+3008 length ws+0
void f491_reduce_6(void) {


	void f462_BeginNormalLoop(i8* /* ll */);
	i8 v9070;
	f462_BeginNormalLoop(&v9070);
	i8 v9071 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9071 = v9070;

	i8 v9072 = (i8)(intptr_t)(ws+54);
	i2 v9073 = *(i2*)(intptr_t)v9072;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9074;
	f126_MidLabel(&v9074, v9073);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9074);

endsub:;
}

// reduce_7 workspace at ws+3008 length ws+0
void f492_reduce_7(void) {

	i8 v9075 = (i8)(intptr_t)(ws+2952);
	i8 v9076 = *(i8*)(intptr_t)v9075;

	void f463_TerminateNormalLoop(i8 /* ll */);
	f463_TerminateNormalLoop(v9076);

	i1 v9077 = (i1)+10;
	i8 v9078 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9078, v9077);

	i1 v9079 = (i1)+13;
	i8 v9080 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9080, v9079);

endsub:;
}

// reduce_8 workspace at ws+3008 length ws+2
void f493_reduce_8(void) {


	void f462_BeginNormalLoop(i8* /* ll */);
	i8 v9081;
	f462_BeginNormalLoop(&v9081);
	i8 v9082 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9082 = v9081;

	i8 v9083 = (i8)(intptr_t)(ws+54);
	i2 v9084 = *(i2*)(intptr_t)v9083;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9085;
	f126_MidLabel(&v9085, v9084);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9085);


	void f209_AllocLabel(i2* /* label */);
	i2 v9086;
	f209_AllocLabel(&v9086);
	i8 v9087 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v9087 = v9086;


	void f209_AllocLabel(i2* /* label */);
	i2 v9088;
	f209_AllocLabel(&v9088);
	i8 v9089 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9089 = v9088;

	i8 v9090 = (i8)(intptr_t)(ws+3008);
	i2 v9091 = *(i2*)(intptr_t)v9090;
	i8 v9092 = (i8)(intptr_t)(ws+2936);
	i8 v9093 = *(i8*)(intptr_t)v9092;
	*(i2*)(intptr_t)v9093 = v9091;

	i8 v9094 = (i8)(intptr_t)(ws+52);
	i2 v9095 = *(i2*)(intptr_t)v9094;
	i8 v9096 = (i8)(intptr_t)(ws+2936);
	i8 v9097 = *(i8*)(intptr_t)v9096;
	i8 v9098 = v9097+(+2);
	*(i2*)(intptr_t)v9098 = v9095;

	i8 v9099 = (i8)(intptr_t)(ws+3008);
	i2 v9100 = *(i2*)(intptr_t)v9099;
	i8 v9101 = (i8)(intptr_t)(ws+2936);
	i8 v9102 = *(i8*)(intptr_t)v9101;
	i8 v9103 = v9102+(+4);
	*(i2*)(intptr_t)v9103 = v9100;

	i8 v9104 = (i8)(intptr_t)(ws+2936);
	i8 v9105 = *(i8*)(intptr_t)v9104;

	void f438_GenerateConditional(i8 /* rootnode */);
	f438_GenerateConditional(v9105);

	i8 v9106 = (i8)(intptr_t)(ws+52);
	i2 v9107 = *(i2*)(intptr_t)v9106;
	i8 v9108 = (i8)(intptr_t)(ws+2920);
	i8 v9109 = *(i8*)(intptr_t)v9108;
	i8 v9110 = v9109+(+2);
	*(i2*)(intptr_t)v9110 = v9107;

	i1 v9111 = (i1)+13;
	i8 v9112 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9112, v9111);

endsub:;
}
const i1 c02_s01ca[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };

// reduce_9 workspace at ws+3008 length ws+0
void f494_reduce_9(void) {

	i8 v9113 = (i8)(intptr_t)(ws+52);
	i2 v9114 = *(i2*)(intptr_t)v9113;
	i2 v9115 = (i2)+0;
	if (v9114==v9115) goto c02_084e; else goto c02_084f;

c02_084e:;

	i8 v9116 = (i8)(intptr_t)c02_s01ca;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9116);

	goto c02_084b;

c02_084f:;

c02_084b:;

	i8 v9117 = (i8)(intptr_t)(ws+52);
	i2 v9118 = *(i2*)(intptr_t)v9117;

	void f122_MidJump(i8* /* m */, i2 /* label */);
	i8 v9119;
	f122_MidJump(&v9119, v9118);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9119);

	i1 v9120 = (i1)+22;
	i8 v9121 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9121, v9120);

endsub:;
}
const i1 c02_s01cb[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };

// reduce_10 workspace at ws+3008 length ws+0
void f495_reduce_10(void) {

	i8 v9122 = (i8)(intptr_t)(ws+54);
	i2 v9123 = *(i2*)(intptr_t)v9122;
	i2 v9124 = (i2)+0;
	if (v9123==v9124) goto c02_0853; else goto c02_0854;

c02_0853:;

	i8 v9125 = (i8)(intptr_t)c02_s01cb;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9125);

	goto c02_0850;

c02_0854:;

c02_0850:;

	i8 v9126 = (i8)(intptr_t)(ws+54);
	i2 v9127 = *(i2*)(intptr_t)v9126;

	void f122_MidJump(i8* /* m */, i2 /* label */);
	i8 v9128;
	f122_MidJump(&v9128, v9127);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9128);

	i1 v9129 = (i1)+22;
	i8 v9130 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9130, v9129);

endsub:;
}

// reduce_11 workspace at ws+3008 length ws+8
void f496_reduce_11(void) {

	i8 v9131 = (i8)(intptr_t)(ws+56);
	i8 v9132 = *(i8*)(intptr_t)v9131;
	i2 v9133 = *(i2*)(intptr_t)v9132;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9134;
	f126_MidLabel(&v9134, v9133);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9134);

	i8 v9135 = (i8)(intptr_t)(ws+56);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9137 = v9136;

	i8 v9138 = (i8)(intptr_t)(ws+56);
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = v9139+(+8);
	i8 v9141 = *(i8*)(intptr_t)v9140;
	i8 v9142 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v9142 = v9141;

	i8 v9143 = (i8)(intptr_t)(ws+3008);
	i8 v9144 = *(i8*)(intptr_t)v9143;

	void f32_Free(i8 /* block */);
	f32_Free(v9144);

	i1 v9145 = (i1)+26;
	i8 v9146 = (i8)(intptr_t)(ws+2960);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9146, v9145);

	i1 v9147 = (i1)+10;
	i8 v9148 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9148, v9147);

	i1 v9149 = (i1)+12;
	i8 v9150 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9150, v9149);

endsub:;
}

// reduce_12 workspace at ws+3008 length ws+8
void f497_reduce_12(void) {

	i8 v9151 = (i8)+16;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v9152;
	f31_Alloc(&v9152, v9151);
	i8 v9153 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9153 = v9152;

	i8 v9154 = (i8)(intptr_t)(ws+56);
	i8 v9155 = *(i8*)(intptr_t)v9154;
	i8 v9156 = (i8)(intptr_t)(ws+3008);
	i8 v9157 = *(i8*)(intptr_t)v9156;
	i8 v9158 = v9157+(+8);
	*(i8*)(intptr_t)v9158 = v9155;

	i8 v9159 = (i8)(intptr_t)(ws+3008);
	i8 v9160 = *(i8*)(intptr_t)v9159;
	i8 v9161 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v9161 = v9160;


	void f209_AllocLabel(i2* /* label */);
	i2 v9162;
	f209_AllocLabel(&v9162);
	i8 v9163 = (i8)(intptr_t)(ws+56);
	i8 v9164 = *(i8*)(intptr_t)v9163;
	*(i2*)(intptr_t)v9164 = v9162;

endsub:;
}

// reduce_13 workspace at ws+3008 length ws+4
void f498_reduce_13(void) {


	void f209_AllocLabel(i2* /* label */);
	i2 v9165;
	f209_AllocLabel(&v9165);
	i8 v9166 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v9166 = v9165;


	void f209_AllocLabel(i2* /* label */);
	i2 v9167;
	f209_AllocLabel(&v9167);
	i8 v9168 = (i8)(intptr_t)(ws+3010);
	*(i2*)(intptr_t)v9168 = v9167;

	i8 v9169 = (i8)(intptr_t)(ws+3008);
	i2 v9170 = *(i2*)(intptr_t)v9169;
	i8 v9171 = (i8)(intptr_t)(ws+56);
	i8 v9172 = *(i8*)(intptr_t)v9171;
	i8 v9173 = v9172+(+2);
	*(i2*)(intptr_t)v9173 = v9170;

	i8 v9174 = (i8)(intptr_t)(ws+3010);
	i2 v9175 = *(i2*)(intptr_t)v9174;
	i8 v9176 = (i8)(intptr_t)(ws+56);
	i8 v9177 = *(i8*)(intptr_t)v9176;
	i8 v9178 = v9177+(+4);
	*(i2*)(intptr_t)v9178 = v9175;

	i8 v9179 = (i8)(intptr_t)(ws+3008);
	i2 v9180 = *(i2*)(intptr_t)v9179;
	i8 v9181 = (i8)(intptr_t)(ws+2928);
	i8 v9182 = *(i8*)(intptr_t)v9181;
	*(i2*)(intptr_t)v9182 = v9180;

	i8 v9183 = (i8)(intptr_t)(ws+3010);
	i2 v9184 = *(i2*)(intptr_t)v9183;
	i8 v9185 = (i8)(intptr_t)(ws+2928);
	i8 v9186 = *(i8*)(intptr_t)v9185;
	i8 v9187 = v9186+(+2);
	*(i2*)(intptr_t)v9187 = v9184;

	i8 v9188 = (i8)(intptr_t)(ws+3008);
	i2 v9189 = *(i2*)(intptr_t)v9188;
	i8 v9190 = (i8)(intptr_t)(ws+2928);
	i8 v9191 = *(i8*)(intptr_t)v9190;
	i8 v9192 = v9191+(+4);
	*(i2*)(intptr_t)v9192 = v9189;

	i8 v9193 = (i8)(intptr_t)(ws+2928);
	i8 v9194 = *(i8*)(intptr_t)v9193;

	void f438_GenerateConditional(i8 /* rootnode */);
	f438_GenerateConditional(v9194);

endsub:;
}

// reduce_14 workspace at ws+3008 length ws+0
void f499_reduce_14(void) {

	i8 v9195 = (i8)(intptr_t)(ws+56);
	i8 v9196 = *(i8*)(intptr_t)v9195;
	i2 v9197 = *(i2*)(intptr_t)v9196;

	void f122_MidJump(i8* /* m */, i2 /* label */);
	i8 v9198;
	f122_MidJump(&v9198, v9197);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9198);

	i8 v9199 = (i8)(intptr_t)(ws+56);
	i8 v9200 = *(i8*)(intptr_t)v9199;
	i8 v9201 = v9200+(+4);
	i2 v9202 = *(i2*)(intptr_t)v9201;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9203;
	f126_MidLabel(&v9203, v9202);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9203);

endsub:;
}

// reduce_15 workspace at ws+3008 length ws+8
void f500_reduce_15(void) {

	i8 v9204 = (i8)(intptr_t)(ws+64);
	i8 v9205 = *(i8*)(intptr_t)v9204;
	i8 v9206 = v9205+(+17);
	i1 v9207 = *(i1*)(intptr_t)v9206;
	i1 v9208 = (i1)+0;
	if (v9207==v9208) goto c02_085c; else goto c02_085b;

c02_085c:;

	i8 v9209 = (i8)(intptr_t)(ws+64);
	i8 v9210 = *(i8*)(intptr_t)v9209;
	i2 v9211 = *(i2*)(intptr_t)v9210;
	i2 v9212 = (i2)+0;
	if (v9211==v9212) goto c02_085b; else goto c02_085a;

c02_085a:;

	i8 v9213 = (i8)(intptr_t)(ws+64);
	i8 v9214 = *(i8*)(intptr_t)v9213;
	i2 v9215 = *(i2*)(intptr_t)v9214;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9216;
	f126_MidLabel(&v9216, v9215);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9216);

	goto c02_0855;

c02_085b:;

c02_0855:;

	i8 v9217 = (i8)(intptr_t)(ws+64);
	i8 v9218 = *(i8*)(intptr_t)v9217;
	i8 v9219 = v9218+(+2);
	i2 v9220 = *(i2*)(intptr_t)v9219;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9221;
	f126_MidLabel(&v9221, v9220);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9221);

	i8 v9222 = (i8)(intptr_t)(ws+64);
	i8 v9223 = *(i8*)(intptr_t)v9222;
	i8 v9224 = v9223+(+16);
	i1 v9225 = *(i1*)(intptr_t)v9224;

	void f139_MidEndcase(i8* /* m */, i1 /* width */);
	i8 v9226;
	f139_MidEndcase(&v9226, v9225);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9226);

	i8 v9227 = (i8)(intptr_t)(ws+64);
	i8 v9228 = *(i8*)(intptr_t)v9227;
	i8 v9229 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9229 = v9228;

	i8 v9230 = (i8)(intptr_t)(ws+3008);
	i8 v9231 = *(i8*)(intptr_t)v9230;
	i8 v9232 = v9231+(+8);
	i8 v9233 = *(i8*)(intptr_t)v9232;
	i8 v9234 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v9234 = v9233;

	i8 v9235 = (i8)(intptr_t)(ws+3008);
	i8 v9236 = *(i8*)(intptr_t)v9235;

	void f32_Free(i8 /* block */);
	f32_Free(v9236);

	i1 v9237 = (i1)+10;
	i8 v9238 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9238, v9237);

	i1 v9239 = (i1)+63;
	i8 v9240 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9240, v9239);

	i1 v9241 = (i1)+22;
	i8 v9242 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9242, v9241);

endsub:;
}
const i1 c02_s01cc[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };

// reduce_16 workspace at ws+3008 length ws+8
void f501_reduce_16(void) {

	i8 v9243 = (i8)+18;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v9244;
	f31_Alloc(&v9244, v9243);
	i8 v9245 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9245 = v9244;

	i8 v9246 = (i8)(intptr_t)(ws+64);
	i8 v9247 = *(i8*)(intptr_t)v9246;
	i8 v9248 = (i8)(intptr_t)(ws+3008);
	i8 v9249 = *(i8*)(intptr_t)v9248;
	i8 v9250 = v9249+(+8);
	*(i8*)(intptr_t)v9250 = v9247;

	i8 v9251 = (i8)(intptr_t)(ws+52);
	i2 v9252 = *(i2*)(intptr_t)v9251;
	i8 v9253 = (i8)(intptr_t)(ws+3008);
	i8 v9254 = *(i8*)(intptr_t)v9253;
	i8 v9255 = v9254+(+4);
	*(i2*)(intptr_t)v9255 = v9252;


	void f209_AllocLabel(i2* /* label */);
	i2 v9256;
	f209_AllocLabel(&v9256);
	i8 v9257 = (i8)(intptr_t)(ws+3008);
	i8 v9258 = *(i8*)(intptr_t)v9257;
	i8 v9259 = v9258+(+2);
	*(i2*)(intptr_t)v9259 = v9256;

	i8 v9260 = (i8)(intptr_t)(ws+3008);
	i8 v9261 = *(i8*)(intptr_t)v9260;
	i8 v9262 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v9262 = v9261;

	i8 v9263 = (i8)(intptr_t)(ws+2936);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = v9264+(+16);
	i8 v9266 = *(i8*)(intptr_t)v9265;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v9267;
	f203_IsNum(&v9267, v9266);
	i1 v9268 = (i1)+0;
	if (v9267==v9268) goto c02_0860; else goto c02_0861;

c02_0860:;

	i8 v9269 = (i8)(intptr_t)c02_s01cc;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9269);

	goto c02_085d;

c02_0861:;

c02_085d:;

	i8 v9270 = (i8)(intptr_t)(ws+2936);
	i8 v9271 = *(i8*)(intptr_t)v9270;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v9272;
	f144_NodeWidth(&v9272, v9271);
	i8 v9273 = (i8)(intptr_t)(ws+3008);
	i8 v9274 = *(i8*)(intptr_t)v9273;
	i8 v9275 = v9274+(+16);
	*(i1*)(intptr_t)v9275 = v9272;

	i8 v9276 = (i8)(intptr_t)(ws+3008);
	i8 v9277 = *(i8*)(intptr_t)v9276;
	i8 v9278 = v9277+(+16);
	i1 v9279 = *(i1*)(intptr_t)v9278;
	i8 v9280 = (i8)(intptr_t)(ws+2936);
	i8 v9281 = *(i8*)(intptr_t)v9280;

	void f138_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	i8 v9282;
	f138_MidStartcase(&v9282, v9281, v9279);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9282);

	i1 v9283 = (i1)+64;
	i8 v9284 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9284, v9283);

endsub:;
}
const i1 c02_s01cd[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };

// reduce_17 workspace at ws+3008 length ws+0
void f502_reduce_17(void) {

	i8 v9285 = (i8)(intptr_t)(ws+64);
	i8 v9286 = *(i8*)(intptr_t)v9285;
	i8 v9287 = v9286+(+17);
	i1 v9288 = *(i1*)(intptr_t)v9287;
	i1 v9289 = (i1)+0;
	if (v9288==v9289) goto c02_0866; else goto c02_0865;

c02_0865:;

	i8 v9290 = (i8)(intptr_t)c02_s01cd;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9290);

	goto c02_0862;

c02_0866:;

c02_0862:;

	i8 v9291 = (i8)(intptr_t)(ws+64);
	i8 v9292 = *(i8*)(intptr_t)v9291;
	i2 v9293 = *(i2*)(intptr_t)v9292;
	i2 v9294 = (i2)+0;
	if (v9293==v9294) goto c02_086b; else goto c02_086a;

c02_086a:;

	i8 v9295 = (i8)(intptr_t)(ws+64);
	i8 v9296 = *(i8*)(intptr_t)v9295;
	i8 v9297 = v9296+(+2);
	i2 v9298 = *(i2*)(intptr_t)v9297;

	void f122_MidJump(i8* /* m */, i2 /* label */);
	i8 v9299;
	f122_MidJump(&v9299, v9298);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9299);

	i8 v9300 = (i8)(intptr_t)(ws+64);
	i8 v9301 = *(i8*)(intptr_t)v9300;
	i2 v9302 = *(i2*)(intptr_t)v9301;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9303;
	f126_MidLabel(&v9303, v9302);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9303);

	goto c02_0867;

c02_086b:;

c02_0867:;


	void f209_AllocLabel(i2* /* label */);
	i2 v9304;
	f209_AllocLabel(&v9304);
	i8 v9305 = (i8)(intptr_t)(ws+64);
	i8 v9306 = *(i8*)(intptr_t)v9305;
	*(i2*)(intptr_t)v9306 = v9304;

	i8 v9307 = (i8)(intptr_t)(ws+64);
	i8 v9308 = *(i8*)(intptr_t)v9307;
	i8 v9309 = v9308+(+16);
	i1 v9310 = *(i1*)(intptr_t)v9309;
	i8 v9311 = (i8)(intptr_t)(ws+2936);
	i4 v9312 = *(i4*)(intptr_t)v9311;
	i8 v9313 = (i8)(intptr_t)(ws+64);
	i8 v9314 = *(i8*)(intptr_t)v9313;
	i2 v9315 = *(i2*)(intptr_t)v9314;

	void f94_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	i8 v9316;
	f94_MidWhencase(&v9316, v9315, v9312, v9310);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9316);

	i1 v9317 = (i1)+6;
	i8 v9318 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9318, v9317);

endsub:;
}
const i1 c02_s01ce[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };

// reduce_18 workspace at ws+3008 length ws+0
void f503_reduce_18(void) {

	i8 v9319 = (i8)(intptr_t)(ws+64);
	i8 v9320 = *(i8*)(intptr_t)v9319;
	i8 v9321 = v9320+(+17);
	i1 v9322 = *(i1*)(intptr_t)v9321;
	i1 v9323 = (i1)+0;
	if (v9322==v9323) goto c02_0870; else goto c02_086f;

c02_086f:;

	i8 v9324 = (i8)(intptr_t)c02_s01ce;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9324);

	goto c02_086c;

c02_0870:;

c02_086c:;

	i8 v9325 = (i8)(intptr_t)(ws+64);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i2 v9327 = *(i2*)(intptr_t)v9326;
	i2 v9328 = (i2)+0;
	if (v9327==v9328) goto c02_0875; else goto c02_0874;

c02_0874:;

	i8 v9329 = (i8)(intptr_t)(ws+64);
	i8 v9330 = *(i8*)(intptr_t)v9329;
	i8 v9331 = v9330+(+2);
	i2 v9332 = *(i2*)(intptr_t)v9331;

	void f122_MidJump(i8* /* m */, i2 /* label */);
	i8 v9333;
	f122_MidJump(&v9333, v9332);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9333);

	i8 v9334 = (i8)(intptr_t)(ws+64);
	i8 v9335 = *(i8*)(intptr_t)v9334;
	i2 v9336 = *(i2*)(intptr_t)v9335;

	void f126_MidLabel(i8* /* m */, i2 /* label */);
	i8 v9337;
	f126_MidLabel(&v9337, v9336);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v9337);

	goto c02_0871;

c02_0875:;

c02_0871:;

	i2 v9338 = (i2)+0;
	i8 v9339 = (i8)(intptr_t)(ws+64);
	i8 v9340 = *(i8*)(intptr_t)v9339;
	*(i2*)(intptr_t)v9340 = v9338;

	i1 v9341 = (i1)+1;
	i8 v9342 = (i8)(intptr_t)(ws+64);
	i8 v9343 = *(i8*)(intptr_t)v9342;
	i8 v9344 = v9343+(+17);
	*(i1*)(intptr_t)v9344 = v9341;

	i1 v9345 = (i1)+9;
	i8 v9346 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9346, v9345);

	i1 v9347 = (i1)+6;
	i8 v9348 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9348, v9347);

endsub:;
}

// reduce_19 workspace at ws+3008 length ws+0
void f504_reduce_19(void) {

	i8 v9349 = (i8)(intptr_t)(ws+2936);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	i8 v9351 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9351 = v9350;

	i1 v9352 = (i1)+4;
	i8 v9353 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9353, v9352);

endsub:;
}

// reduce_20 workspace at ws+3008 length ws+0
void f505_reduce_20(void) {

	i8 v9354 = (i8)(intptr_t)(ws+2928);
	i8 v9355 = *(i8*)(intptr_t)v9354;
	i8 v9356 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9356 = v9355;

	i8 v9357 = (i8)(intptr_t)(ws+2928);
	i8 v9358 = *(i8*)(intptr_t)v9357;

	void f464_Negate(i8 /* node */);
	f464_Negate(v9358);

endsub:;
}

// reduce_21 workspace at ws+3008 length ws+0
void f506_reduce_21(void) {

	i8 v9359 = (i8)(intptr_t)(ws+2944);
	i8 v9360 = *(i8*)(intptr_t)v9359;
	i8 v9361 = (i8)(intptr_t)(ws+2928);
	i8 v9362 = *(i8*)(intptr_t)v9361;
	i2 v9363 = (i2)+0;
	i2 v9364 = (i2)+0;
	i2 v9365 = (i2)+0;
	i1 v9366 = (i1)+0;

	void f89_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	i8 v9367;
	f89_MidBand(&v9367, v9366, v9365, v9364, v9363, v9362, v9360);
	i8 v9368 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9368 = v9367;

	i1 v9369 = (i1)+45;
	i8 v9370 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9370, v9369);

endsub:;
}

// reduce_22 workspace at ws+3008 length ws+0
void f507_reduce_22(void) {

	i8 v9371 = (i8)(intptr_t)(ws+2944);
	i8 v9372 = *(i8*)(intptr_t)v9371;
	i8 v9373 = (i8)(intptr_t)(ws+2928);
	i8 v9374 = *(i8*)(intptr_t)v9373;
	i2 v9375 = (i2)+0;
	i2 v9376 = (i2)+0;
	i2 v9377 = (i2)+0;
	i1 v9378 = (i1)+0;

	void f135_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	i8 v9379;
	f135_MidBor(&v9379, v9378, v9377, v9376, v9375, v9374, v9372);
	i8 v9380 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9380 = v9379;

	i1 v9381 = (i1)+46;
	i8 v9382 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9382, v9381);

endsub:;
}

// reduce_23 workspace at ws+3008 length ws+0
void f508_reduce_23(void) {

	i8 v9383 = (i8)(intptr_t)(ws+2944);
	i8 v9384 = *(i8*)(intptr_t)v9383;
	i8 v9385 = (i8)(intptr_t)(ws+2928);
	i8 v9386 = *(i8*)(intptr_t)v9385;
	i1 v9387 = (i1)+0;

	void f465_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9388;
	f465_ConditionalEq(&v9388, v9387, v9386, v9384);
	i8 v9389 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9389 = v9388;

	i1 v9390 = (i1)+53;
	i8 v9391 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9391, v9390);

endsub:;
}

// reduce_24 workspace at ws+3008 length ws+0
void f509_reduce_24(void) {

	i8 v9392 = (i8)(intptr_t)(ws+2944);
	i8 v9393 = *(i8*)(intptr_t)v9392;
	i8 v9394 = (i8)(intptr_t)(ws+2928);
	i8 v9395 = *(i8*)(intptr_t)v9394;
	i1 v9396 = (i1)+1;

	void f465_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9397;
	f465_ConditionalEq(&v9397, v9396, v9395, v9393);
	i8 v9398 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9398 = v9397;

	i1 v9399 = (i1)+54;
	i8 v9400 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9400, v9399);

endsub:;
}

// reduce_25 workspace at ws+3008 length ws+0
void f510_reduce_25(void) {

	i8 v9401 = (i8)(intptr_t)(ws+2944);
	i8 v9402 = *(i8*)(intptr_t)v9401;
	i8 v9403 = (i8)(intptr_t)(ws+2928);
	i8 v9404 = *(i8*)(intptr_t)v9403;
	i1 v9405 = (i1)+0;

	void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9406;
	f466_ConditionalLt(&v9406, v9405, v9404, v9402);
	i8 v9407 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9407 = v9406;

	i1 v9408 = (i1)+49;
	i8 v9409 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9409, v9408);

endsub:;
}

// reduce_26 workspace at ws+3008 length ws+0
void f511_reduce_26(void) {

	i8 v9410 = (i8)(intptr_t)(ws+2944);
	i8 v9411 = *(i8*)(intptr_t)v9410;
	i8 v9412 = (i8)(intptr_t)(ws+2928);
	i8 v9413 = *(i8*)(intptr_t)v9412;
	i1 v9414 = (i1)+1;

	void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9415;
	f466_ConditionalLt(&v9415, v9414, v9413, v9411);
	i8 v9416 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9416 = v9415;

	i1 v9417 = (i1)+52;
	i8 v9418 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9418, v9417);

endsub:;
}

// reduce_27 workspace at ws+3008 length ws+0
void f512_reduce_27(void) {

	i8 v9419 = (i8)(intptr_t)(ws+2928);
	i8 v9420 = *(i8*)(intptr_t)v9419;
	i8 v9421 = (i8)(intptr_t)(ws+2944);
	i8 v9422 = *(i8*)(intptr_t)v9421;
	i1 v9423 = (i1)+0;

	void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9424;
	f466_ConditionalLt(&v9424, v9423, v9422, v9420);
	i8 v9425 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9425 = v9424;

	i1 v9426 = (i1)+51;
	i8 v9427 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9427, v9426);

endsub:;
}

// reduce_28 workspace at ws+3008 length ws+0
void f513_reduce_28(void) {

	i8 v9428 = (i8)(intptr_t)(ws+2928);
	i8 v9429 = *(i8*)(intptr_t)v9428;
	i8 v9430 = (i8)(intptr_t)(ws+2944);
	i8 v9431 = *(i8*)(intptr_t)v9430;
	i1 v9432 = (i1)+1;

	void f466_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	i8 v9433;
	f466_ConditionalLt(&v9433, v9432, v9431, v9429);
	i8 v9434 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9434 = v9433;

	i1 v9435 = (i1)+50;
	i8 v9436 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9436, v9435);

endsub:;
}

// reduce_29 workspace at ws+3008 length ws+0
void f514_reduce_29(void) {

	i8 v9437 = (i8)(intptr_t)(ws+2928);
	i4 v9438 = *(i4*)(intptr_t)v9437;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9439;
	f107_MidConstant(&v9439, v9438);
	i8 v9440 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9440 = v9439;

endsub:;
}

// reduce_30 workspace at ws+3008 length ws+0
void f515_reduce_30(void) {

	i8 v9441 = (i8)(intptr_t)(ws+2936);
	i8 v9442 = *(i8*)(intptr_t)v9441;
	i8 v9443 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9443 = v9442;

	i1 v9444 = (i1)+4;
	i8 v9445 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9445, v9444);

endsub:;
}

// reduce_31 workspace at ws+3008 length ws+0
void f516_reduce_31(void) {

	i1 v9446 = (i1)+110;
	i8 v9447 = (i8)(intptr_t)(ws+2928);
	i8 v9448 = *(i8*)(intptr_t)v9447;

	void f453_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);
	i8 v9449;
	f453_Expr1Simple(&v9449, v9448, v9446);
	i8 v9450 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9450 = v9449;

endsub:;
}

// reduce_32 workspace at ws+3008 length ws+0
void f517_reduce_32(void) {

	i1 v9451 = (i1)+105;
	i8 v9452 = (i8)(intptr_t)(ws+2928);
	i8 v9453 = *(i8*)(intptr_t)v9452;

	void f453_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);
	i8 v9454;
	f453_Expr1Simple(&v9454, v9453, v9451);
	i8 v9455 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9455 = v9454;

endsub:;
}

// reduce_33 workspace at ws+3008 length ws+0
void f518_reduce_33(void) {

	i8 v9456 = (i8)(intptr_t)(ws+2944);
	i8 v9457 = *(i8*)(intptr_t)v9456;
	i8 v9458 = (i8)(intptr_t)(ws+2928);
	i8 v9459 = *(i8*)(intptr_t)v9458;

	void f454_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	i8 v9460;
	f454_ExprAdd(&v9460, v9459, v9457);
	i8 v9461 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9461 = v9460;

	i1 v9462 = (i1)+19;
	i8 v9463 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9463, v9462);

endsub:;
}

// reduce_34 workspace at ws+3008 length ws+0
void f519_reduce_34(void) {

	i8 v9464 = (i8)(intptr_t)(ws+2944);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = (i8)(intptr_t)(ws+2928);
	i8 v9467 = *(i8*)(intptr_t)v9466;

	void f456_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	i8 v9468;
	f456_ExprSub(&v9468, v9467, v9465);
	i8 v9469 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9469 = v9468;

	i1 v9470 = (i1)+14;
	i8 v9471 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9471, v9470);

endsub:;
}

// reduce_35 workspace at ws+3008 length ws+0
void f520_reduce_35(void) {

	i1 v9472 = (i1)+160;
	i1 v9473 = (i1)+160;
	i8 v9474 = (i8)(intptr_t)(ws+2944);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = (i8)(intptr_t)(ws+2928);
	i8 v9477 = *(i8*)(intptr_t)v9476;

	void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9478;
	f458_Expr2Simple(&v9478, v9477, v9475, v9473, v9472);
	i8 v9479 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9479 = v9478;

	i1 v9480 = (i1)+24;
	i8 v9481 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9481, v9480);

endsub:;
}

// reduce_36 workspace at ws+3008 length ws+0
void f521_reduce_36(void) {

	i1 v9482 = (i1)+140;
	i1 v9483 = (i1)+135;
	i8 v9484 = (i8)(intptr_t)(ws+2944);
	i8 v9485 = *(i8*)(intptr_t)v9484;
	i8 v9486 = (i8)(intptr_t)(ws+2928);
	i8 v9487 = *(i8*)(intptr_t)v9486;

	void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9488;
	f458_Expr2Simple(&v9488, v9487, v9485, v9483, v9482);
	i8 v9489 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9489 = v9488;

	i1 v9490 = (i1)+23;
	i8 v9491 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9491, v9490);

endsub:;
}

// reduce_37 workspace at ws+3008 length ws+0
void f522_reduce_37(void) {

	i1 v9492 = (i1)+150;
	i1 v9493 = (i1)+145;
	i8 v9494 = (i8)(intptr_t)(ws+2944);
	i8 v9495 = *(i8*)(intptr_t)v9494;
	i8 v9496 = (i8)(intptr_t)(ws+2928);
	i8 v9497 = *(i8*)(intptr_t)v9496;

	void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9498;
	f458_Expr2Simple(&v9498, v9497, v9495, v9493, v9492);
	i8 v9499 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9499 = v9498;

	i1 v9500 = (i1)+18;
	i8 v9501 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9501, v9500);

endsub:;
}

// reduce_38 workspace at ws+3008 length ws+0
void f523_reduce_38(void) {

	i1 v9502 = (i1)+175;
	i1 v9503 = (i1)+175;
	i8 v9504 = (i8)(intptr_t)(ws+2944);
	i8 v9505 = *(i8*)(intptr_t)v9504;
	i8 v9506 = (i8)(intptr_t)(ws+2928);
	i8 v9507 = *(i8*)(intptr_t)v9506;

	void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9508;
	f458_Expr2Simple(&v9508, v9507, v9505, v9503, v9502);
	i8 v9509 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9509 = v9508;

	i1 v9510 = (i1)+48;
	i8 v9511 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9511, v9510);

endsub:;
}

// reduce_39 workspace at ws+3008 length ws+0
void f524_reduce_39(void) {

	i1 v9512 = (i1)+165;
	i1 v9513 = (i1)+165;
	i8 v9514 = (i8)(intptr_t)(ws+2944);
	i8 v9515 = *(i8*)(intptr_t)v9514;
	i8 v9516 = (i8)(intptr_t)(ws+2928);
	i8 v9517 = *(i8*)(intptr_t)v9516;

	void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9518;
	f458_Expr2Simple(&v9518, v9517, v9515, v9513, v9512);
	i8 v9519 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9519 = v9518;

	i1 v9520 = (i1)+58;
	i8 v9521 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9521, v9520);

endsub:;
}

// reduce_40 workspace at ws+3008 length ws+0
void f525_reduce_40(void) {

	i1 v9522 = (i1)+170;
	i1 v9523 = (i1)+170;
	i8 v9524 = (i8)(intptr_t)(ws+2944);
	i8 v9525 = *(i8*)(intptr_t)v9524;
	i8 v9526 = (i8)(intptr_t)(ws+2928);
	i8 v9527 = *(i8*)(intptr_t)v9526;

	void f458_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9528;
	f458_Expr2Simple(&v9528, v9527, v9525, v9523, v9522);
	i8 v9529 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9529 = v9528;

	i1 v9530 = (i1)+47;
	i8 v9531 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9531, v9530);

endsub:;
}

// reduce_41 workspace at ws+3008 length ws+0
void f526_reduce_41(void) {

	i1 v9532 = (i1)+115;
	i1 v9533 = (i1)+115;
	i8 v9534 = (i8)(intptr_t)(ws+2944);
	i8 v9535 = *(i8*)(intptr_t)v9534;
	i8 v9536 = (i8)(intptr_t)(ws+2928);
	i8 v9537 = *(i8*)(intptr_t)v9536;

	void f461_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9538;
	f461_ExprShift(&v9538, v9537, v9535, v9533, v9532);
	i8 v9539 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9539 = v9538;

	i1 v9540 = (i1)+55;
	i8 v9541 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9541, v9540);

endsub:;
}

// reduce_42 workspace at ws+3008 length ws+0
void f527_reduce_42(void) {

	i1 v9542 = (i1)+125;
	i1 v9543 = (i1)+120;
	i8 v9544 = (i8)(intptr_t)(ws+2944);
	i8 v9545 = *(i8*)(intptr_t)v9544;
	i8 v9546 = (i8)(intptr_t)(ws+2928);
	i8 v9547 = *(i8*)(intptr_t)v9546;

	void f461_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	i8 v9548;
	f461_ExprShift(&v9548, v9547, v9545, v9543, v9542);
	i8 v9549 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9549 = v9548;

	i1 v9550 = (i1)+56;
	i8 v9551 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9551, v9550);

endsub:;
}
const i1 c02_s01cf[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };

// reduce_43 workspace at ws+3008 length ws+0
void f528_reduce_43(void) {

	i8 v9552 = (i8)(intptr_t)(ws+2928);
	i8 v9553 = *(i8*)(intptr_t)v9552;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v9553);

	i8 v9554 = (i8)(intptr_t)(ws+2944);
	i8 v9555 = *(i8*)(intptr_t)v9554;
	i8 v9556 = v9555+(+58);
	i1 v9557 = *(i1*)(intptr_t)v9556;
	i1 v9558 = (i1)+40;
	if (v9557==v9558) goto c02_087c; else goto c02_087d;

c02_087d:;

	i8 v9559 = (i8)(intptr_t)(ws+2944);
	i8 v9560 = *(i8*)(intptr_t)v9559;
	i8 v9561 = v9560+(+16);
	i8 v9562 = *(i8*)(intptr_t)v9561;
	i8 v9563 = v9562+(+42);
	i2 v9564 = *(i2*)(intptr_t)v9563;
	i8 v9565 = (i8)(intptr_t)(ws+2928);
	i8 v9566 = *(i8*)(intptr_t)v9565;
	i8 v9567 = v9566+(+42);
	i2 v9568 = *(i2*)(intptr_t)v9567;
	if (v9564==v9568) goto c02_087c; else goto c02_087b;

c02_087b:;

	i8 v9569 = (i8)(intptr_t)(ws+2944);
	i8 v9570 = *(i8*)(intptr_t)v9569;
	i8 v9571 = v9570+(+16);
	i8 v9572 = *(i8*)(intptr_t)v9571;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9573;
	f202_IsPtr(&v9573, v9572);
	i1 v9574 = (i1)+0;
	if (v9573==v9574) goto c02_0885; else goto c02_0883;

c02_0885:;

	i8 v9575 = (i8)(intptr_t)(ws+2928);
	i8 v9576 = *(i8*)(intptr_t)v9575;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9577;
	f202_IsPtr(&v9577, v9576);
	i1 v9578 = (i1)+0;
	if (v9577==v9578) goto c02_0884; else goto c02_0883;

c02_0883:;

	i8 v9579 = (i8)(intptr_t)c02_s01cf;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9579);

	goto c02_087e;

c02_0884:;

c02_087e:;

	i8 v9580 = (i8)(intptr_t)(ws+2928);
	i8 v9581 = *(i8*)(intptr_t)v9580;
	i8 v9582 = v9581+(+42);
	i2 v9583 = *(i2*)(intptr_t)v9582;
	i1 v9584 = v9583;
	i8 v9585 = (i8)(intptr_t)(ws+2944);
	i8 v9586 = *(i8*)(intptr_t)v9585;
	i8 v9587 = (i8)(intptr_t)(ws+2944);
	i8 v9588 = *(i8*)(intptr_t)v9587;
	i8 v9589 = v9588+(+16);
	i8 v9590 = *(i8*)(intptr_t)v9589;

	void f204_IsSNum(i1* /* result */, i8 /* type */);
	i1 v9591;
	f204_IsSNum(&v9591, v9590);

	void f151_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	i8 v9592;
	f151_MidCCast(&v9592, v9591, v9586, v9584);
	i8 v9593 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9593 = v9592;

	goto c02_0876;

c02_087c:;

	i8 v9594 = (i8)(intptr_t)(ws+2944);
	i8 v9595 = *(i8*)(intptr_t)v9594;
	i8 v9596 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9596 = v9595;

c02_0876:;

	i8 v9597 = (i8)(intptr_t)(ws+2928);
	i8 v9598 = *(i8*)(intptr_t)v9597;
	i8 v9599 = (i8)(intptr_t)(ws+2920);
	i8 v9600 = *(i8*)(intptr_t)v9599;
	i8 v9601 = v9600+(+16);
	*(i8*)(intptr_t)v9601 = v9598;

	i1 v9602 = (i1)+57;
	i8 v9603 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9603, v9602);

endsub:;
}
const i1 c02_s01d0[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };

// reduce_44 workspace at ws+3008 length ws+8
void f529_reduce_44(void) {

	i8 v9604 = (i8)(intptr_t)(ws+2928);
	i8 v9605 = *(i8*)(intptr_t)v9604;

	void f208_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9606;
	f208_UndoLValue(&v9606, v9605);
	i8 v9607 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9607 = v9606;

	i8 v9608 = (i8)(intptr_t)(ws+2920);
	i8 v9609 = *(i8*)(intptr_t)v9608;
	i8 v9610 = v9609+(+58);
	i1 v9611 = *(i1*)(intptr_t)v9610;
	i1 v9612 = (i1)+42;
	if (v9611==v9612) goto c02_0889; else goto c02_088a;

c02_0889:;

	i8 v9613 = (i8)(intptr_t)(ws+2920);
	i8 v9614 = *(i8*)(intptr_t)v9613;
	i8 v9615 = *(i8*)(intptr_t)v9614;
	i8 v9616 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9616 = v9615;

	i8 v9617 = (i8)(intptr_t)(ws+3008);
	i8 v9618 = *(i8*)(intptr_t)v9617;
	i8 v9619 = *(i8*)(intptr_t)v9618;

	void f205_IsScalar(i1* /* result */, i8 /* type */);
	i1 v9620;
	f205_IsScalar(&v9620, v9619);
	i1 v9621 = (i1)+0;
	if (v9620==v9621) goto c02_088f; else goto c02_088e;

c02_088e:;

	i8 v9622 = (i8)(intptr_t)c02_s01d0;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9622);

	goto c02_088b;

c02_088f:;

c02_088b:;

	goto c02_0886;

c02_088a:;

c02_0886:;

endsub:;
}

// reduce_45 workspace at ws+3008 length ws+0
void f530_reduce_45(void) {

	i8 v9623 = (i8)(intptr_t)(ws+2928);
	i8 v9624 = *(i8*)(intptr_t)v9623;

	void f208_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9625;
	f208_UndoLValue(&v9625, v9624);
	i8 v9626 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9626 = v9625;

	i1 v9627 = (i1)+58;
	i8 v9628 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9628, v9627);

endsub:;
}

// reduce_46 workspace at ws+3008 length ws+0
void f531_reduce_46(void) {

	i8 v9629 = (i8)(intptr_t)(ws+2928);
	i8 v9630 = *(i8*)(intptr_t)v9629;
	i8 v9631 = v9630+(+16);
	i8 v9632 = *(i8*)(intptr_t)v9631;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9633;
	f202_IsPtr(&v9633, v9632);
	i1 v9634 = (i1)+0;
	if (v9633==v9634) goto c02_0893; else goto c02_0894;

c02_0893:;


	void f467_parser_i_bad_next_prev(void);
	f467_parser_i_bad_next_prev();

	goto c02_0890;

c02_0894:;

c02_0890:;

	i1 v9635 = (i1)+155;
	i8 v9636 = (i8)(intptr_t)(ws+1056);
	i8 v9637 = *(i8*)(intptr_t)v9636;
	i8 v9638 = v9637+(+42);
	i2 v9639 = *(i2*)(intptr_t)v9638;
	i1 v9640 = v9639;
	i8 v9641 = (i8)(intptr_t)(ws+2928);
	i8 v9642 = *(i8*)(intptr_t)v9641;
	i8 v9643 = (i8)(intptr_t)(ws+2928);
	i8 v9644 = *(i8*)(intptr_t)v9643;
	i8 v9645 = v9644+(+16);
	i8 v9646 = *(i8*)(intptr_t)v9645;
	i8 v9647 = *(i8*)(intptr_t)v9646;
	i8 v9648 = v9647+(+44);
	i2 v9649 = *(i2*)(intptr_t)v9648;
	i4 v9650 = v9649;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9651;
	f107_MidConstant(&v9651, v9650);

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9652;
	f150_MidC2Op(&v9652, v9651, v9642, v9640, v9635);
	i8 v9653 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9653 = v9652;

	i8 v9654 = (i8)(intptr_t)(ws+2928);
	i8 v9655 = *(i8*)(intptr_t)v9654;
	i8 v9656 = v9655+(+16);
	i8 v9657 = *(i8*)(intptr_t)v9656;
	i8 v9658 = (i8)(intptr_t)(ws+2920);
	i8 v9659 = *(i8*)(intptr_t)v9658;
	i8 v9660 = v9659+(+16);
	*(i8*)(intptr_t)v9660 = v9657;

endsub:;
}

// reduce_47 workspace at ws+3008 length ws+0
void f532_reduce_47(void) {

	i8 v9661 = (i8)(intptr_t)(ws+2928);
	i8 v9662 = *(i8*)(intptr_t)v9661;
	i8 v9663 = v9662+(+16);
	i8 v9664 = *(i8*)(intptr_t)v9663;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9665;
	f202_IsPtr(&v9665, v9664);
	i1 v9666 = (i1)+0;
	if (v9665==v9666) goto c02_0898; else goto c02_0899;

c02_0898:;


	void f467_parser_i_bad_next_prev(void);
	f467_parser_i_bad_next_prev();

	goto c02_0895;

c02_0899:;

c02_0895:;

	i1 v9667 = (i1)+130;
	i8 v9668 = (i8)(intptr_t)(ws+1056);
	i8 v9669 = *(i8*)(intptr_t)v9668;
	i8 v9670 = v9669+(+42);
	i2 v9671 = *(i2*)(intptr_t)v9670;
	i1 v9672 = v9671;
	i8 v9673 = (i8)(intptr_t)(ws+2928);
	i8 v9674 = *(i8*)(intptr_t)v9673;
	i8 v9675 = (i8)(intptr_t)(ws+2928);
	i8 v9676 = *(i8*)(intptr_t)v9675;
	i8 v9677 = v9676+(+16);
	i8 v9678 = *(i8*)(intptr_t)v9677;
	i8 v9679 = *(i8*)(intptr_t)v9678;
	i8 v9680 = v9679+(+44);
	i2 v9681 = *(i2*)(intptr_t)v9680;
	i4 v9682 = v9681;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9683;
	f107_MidConstant(&v9683, v9682);

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9684;
	f150_MidC2Op(&v9684, v9683, v9674, v9672, v9667);
	i8 v9685 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9685 = v9684;

	i8 v9686 = (i8)(intptr_t)(ws+2928);
	i8 v9687 = *(i8*)(intptr_t)v9686;
	i8 v9688 = v9687+(+16);
	i8 v9689 = *(i8*)(intptr_t)v9688;
	i8 v9690 = (i8)(intptr_t)(ws+2920);
	i8 v9691 = *(i8*)(intptr_t)v9690;
	i8 v9692 = v9691+(+16);
	*(i8*)(intptr_t)v9692 = v9689;

endsub:;
}

// reduce_48 workspace at ws+3008 length ws+0
void f533_reduce_48(void) {

	i8 v9693 = (i8)(intptr_t)(ws+2928);
	i8 v9694 = *(i8*)(intptr_t)v9693;
	i8 v9695 = v9694+(+42);
	i2 v9696 = *(i2*)(intptr_t)v9695;
	i4 v9697 = v9696;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9698;
	f107_MidConstant(&v9698, v9697);
	i8 v9699 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9699 = v9698;

endsub:;
}
const i1 c02_s01d1[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };

// reduce_49 workspace at ws+3008 length ws+0
void f534_reduce_49(void) {

	i8 v9700 = (i8)(intptr_t)(ws+2928);
	i8 v9701 = *(i8*)(intptr_t)v9700;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v9702;
	f201_IsArray(&v9702, v9701);
	i1 v9703 = (i1)+0;
	if (v9702==v9703) goto c02_089d; else goto c02_089e;

c02_089d:;

	i8 v9704 = (i8)(intptr_t)c02_s01d1;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9704);

	goto c02_089a;

c02_089e:;

c02_089a:;

	i8 v9705 = (i8)(intptr_t)(ws+2928);
	i8 v9706 = *(i8*)(intptr_t)v9705;
	i8 v9707 = v9706+(+8);
	i2 v9708 = *(i2*)(intptr_t)v9707;
	i4 v9709 = v9708;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9710;
	f107_MidConstant(&v9710, v9709);
	i8 v9711 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9711 = v9710;

endsub:;
}
const i1 c02_s01d2[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };

// reduce_50 workspace at ws+3008 length ws+0
void f535_reduce_50(void) {

	i8 v9712 = (i8)(intptr_t)(ws+2928);
	i8 v9713 = *(i8*)(intptr_t)v9712;
	i8 v9714 = v9713+(+46);
	i1 v9715 = *(i1*)(intptr_t)v9714;

	if (v9715 != +7) goto c02_08a0;

	i8 v9716 = (i8)(intptr_t)(ws+2928);
	i8 v9717 = *(i8*)(intptr_t)v9716;
	i4 v9718 = *(i4*)(intptr_t)v9717;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9719;
	f107_MidConstant(&v9719, v9718);
	i8 v9720 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9720 = v9719;

	goto c02_089f;

c02_08a0:;

	if (v9715 != +28) goto c02_08a1;

	i8 v9721 = (i8)(intptr_t)(ws+2928);
	i8 v9722 = *(i8*)(intptr_t)v9721;
	i2 v9723 = (i2)+0;

	void f99_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	i8 v9724;
	f99_MidAddress(&v9724, v9723, v9722);
	i8 v9725 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9725 = v9724;

	i8 v9726 = (i8)(intptr_t)(ws+2928);
	i8 v9727 = *(i8*)(intptr_t)v9726;
	i8 v9728 = *(i8*)(intptr_t)v9727;

	void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9729;
	f441_MakePointerType(&v9729, v9728);
	i8 v9730 = (i8)(intptr_t)(ws+2920);
	i8 v9731 = *(i8*)(intptr_t)v9730;
	i8 v9732 = v9731+(+16);
	*(i8*)(intptr_t)v9732 = v9729;

	i8 v9733 = (i8)(intptr_t)(ws+2920);
	i8 v9734 = *(i8*)(intptr_t)v9733;

	void f207_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9735;
	f207_MakeLValue(&v9735, v9734);
	i8 v9736 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9736 = v9735;

	goto c02_089f;

c02_08a1:;


	void f59_StartError(void);
	f59_StartError();

	i8 v9737 = (i8)(intptr_t)(ws+2928);
	i8 v9738 = *(i8*)(intptr_t)v9737;
	i8 v9739 = v9738+(+48);
	i8 v9740 = *(i8*)(intptr_t)v9739;

	void f11_print(i8 /* ptr */);
	f11_print(v9740);

	i8 v9741 = (i8)(intptr_t)c02_s01d2;

	void f11_print(i8 /* ptr */);
	f11_print(v9741);


	void f60_EndError(void);
	f60_EndError();

c02_089f:;


endsub:;
}
const i1 c02_s01d3[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };

// reduce_51 workspace at ws+3008 length ws+0
void f536_reduce_51(void) {

	i8 v9742 = (i8)(intptr_t)(ws+2936);
	i8 v9743 = *(i8*)(intptr_t)v9742;
	i8 v9744 = v9743+(+16);
	i8 v9745 = *(i8*)(intptr_t)v9744;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9746;
	f202_IsPtr(&v9746, v9745);
	i1 v9747 = (i1)+0;
	if (v9746==v9747) goto c02_08a5; else goto c02_08a6;

c02_08a5:;

	i8 v9748 = (i8)(intptr_t)c02_s01d3;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9748);

	goto c02_08a2;

c02_08a6:;

c02_08a2:;

	i8 v9749 = (i8)(intptr_t)(ws+2936);
	i8 v9750 = *(i8*)(intptr_t)v9749;

	void f207_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9751;
	f207_MakeLValue(&v9751, v9750);
	i8 v9752 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9752 = v9751;

	i1 v9753 = (i1)+5;
	i8 v9754 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9754, v9753);

endsub:;
}
const i1 c02_s01d4[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
const i1 c02_s01d5[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };

// reduce_52 workspace at ws+3008 length ws+48
void f537_reduce_52(void) {

	i8 v9755 = (i8)(intptr_t)(ws+2952);
	i8 v9756 = *(i8*)(intptr_t)v9755;
	i8 v9757 = v9756+(+16);
	i8 v9758 = *(i8*)(intptr_t)v9757;
	i8 v9759 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9759 = v9758;

	i8 v9760 = (i8)(intptr_t)(ws+2952);
	i8 v9761 = *(i8*)(intptr_t)v9760;

	void f208_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9762;
	f208_UndoLValue(&v9762, v9761);
	i8 v9763 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9763 = v9762;

	i8 v9764 = (i8)(intptr_t)(ws+3008);
	i8 v9765 = *(i8*)(intptr_t)v9764;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v9766;
	f201_IsArray(&v9766, v9765);
	i1 v9767 = (i1)+0;
	if (v9766==v9767) goto c02_08aa; else goto c02_08ab;

c02_08aa:;


	void f59_StartError(void);
	f59_StartError();

	i8 v9768 = (i8)(intptr_t)c02_s01d4;

	void f11_print(i8 /* ptr */);
	f11_print(v9768);

	i8 v9769 = (i8)(intptr_t)(ws+3008);
	i8 v9770 = *(i8*)(intptr_t)v9769;
	i8 v9771 = v9770+(+48);
	i8 v9772 = *(i8*)(intptr_t)v9771;

	void f11_print(i8 /* ptr */);
	f11_print(v9772);


	void f60_EndError(void);
	f60_EndError();

	goto c02_08a7;

c02_08ab:;

c02_08a7:;

	i8 v9773 = (i8)(intptr_t)(ws+2936);
	i8 v9774 = *(i8*)(intptr_t)v9773;
	i8 v9775 = (i8)(intptr_t)(ws+3008);
	i8 v9776 = *(i8*)(intptr_t)v9775;
	i8 v9777 = v9776+(+16);
	i8 v9778 = *(i8*)(intptr_t)v9777;

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v9778, v9774);

	i8 v9779 = (i8)(intptr_t)(ws+2936);
	i8 v9780 = *(i8*)(intptr_t)v9779;
	i8 v9781 = v9780+(+16);
	i8 v9782 = *(i8*)(intptr_t)v9781;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v9783;
	f203_IsNum(&v9783, v9782);
	i1 v9784 = (i1)+0;
	if (v9783==v9784) goto c02_08af; else goto c02_08b0;

c02_08af:;

	i8 v9785 = (i8)(intptr_t)c02_s01d5;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9785);

	goto c02_08ac;

c02_08b0:;

c02_08ac:;

	i8 v9786 = (i8)(intptr_t)(ws+3008);
	i8 v9787 = *(i8*)(intptr_t)v9786;
	i8 v9788 = *(i8*)(intptr_t)v9787;
	i8 v9789 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9789 = v9788;

	i8 v9790 = (i8)(intptr_t)(ws+1056);
	i8 v9791 = *(i8*)(intptr_t)v9790;
	i8 v9792 = v9791+(+42);
	i2 v9793 = *(i2*)(intptr_t)v9792;
	i1 v9794 = v9793;
	i8 v9795 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v9795 = v9794;

	i1 v9796 = (i1)+160;
	i8 v9797 = (i8)(intptr_t)(ws+3032);
	i1 v9798 = *(i1*)(intptr_t)v9797;
	i8 v9799 = (i8)(intptr_t)(ws+1056);
	i8 v9800 = *(i8*)(intptr_t)v9799;
	i8 v9801 = v9800+(+42);
	i2 v9802 = *(i2*)(intptr_t)v9801;
	i1 v9803 = v9802;
	i8 v9804 = (i8)(intptr_t)(ws+2936);
	i8 v9805 = *(i8*)(intptr_t)v9804;
	i1 v9806 = (i1)+0;

	void f151_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	i8 v9807;
	f151_MidCCast(&v9807, v9806, v9805, v9803);
	i8 v9808 = (i8)(intptr_t)(ws+3024);
	i8 v9809 = *(i8*)(intptr_t)v9808;
	i8 v9810 = v9809+(+44);
	i2 v9811 = *(i2*)(intptr_t)v9810;
	i4 v9812 = v9811;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9813;
	f107_MidConstant(&v9813, v9812);

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9814;
	f150_MidC2Op(&v9814, v9813, v9807, v9798, v9796);
	i8 v9815 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9815 = v9814;

	i8 v9816 = (i8)(intptr_t)(ws+1056);
	i8 v9817 = *(i8*)(intptr_t)v9816;
	i8 v9818 = (i8)(intptr_t)(ws+3040);
	i8 v9819 = *(i8*)(intptr_t)v9818;
	i8 v9820 = v9819+(+16);
	*(i8*)(intptr_t)v9820 = v9817;

	i1 v9821 = (i1)+155;
	i8 v9822 = (i8)(intptr_t)(ws+3032);
	i1 v9823 = *(i1*)(intptr_t)v9822;
	i8 v9824 = (i8)(intptr_t)(ws+3016);
	i8 v9825 = *(i8*)(intptr_t)v9824;
	i8 v9826 = (i8)(intptr_t)(ws+3040);
	i8 v9827 = *(i8*)(intptr_t)v9826;

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9828;
	f150_MidC2Op(&v9828, v9827, v9825, v9823, v9821);
	i8 v9829 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9829 = v9828;

	i8 v9830 = (i8)(intptr_t)(ws+3024);
	i8 v9831 = *(i8*)(intptr_t)v9830;

	void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9832;
	f441_MakePointerType(&v9832, v9831);
	i8 v9833 = (i8)(intptr_t)(ws+3048);
	i8 v9834 = *(i8*)(intptr_t)v9833;
	i8 v9835 = v9834+(+16);
	*(i8*)(intptr_t)v9835 = v9832;

	i8 v9836 = (i8)(intptr_t)(ws+3048);
	i8 v9837 = *(i8*)(intptr_t)v9836;

	void f207_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9838;
	f207_MakeLValue(&v9838, v9837);
	i8 v9839 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9839 = v9838;

	i1 v9840 = (i1)+17;
	i8 v9841 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9841, v9840);

	i1 v9842 = (i1)+5;
	i8 v9843 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9843, v9842);

endsub:;
}
const i1 c02_s01d6[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s01d7[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
const i1 c02_s01d8[] = { 0x27,0 };

// reduce_53 workspace at ws+3008 length ws+24
void f538_reduce_53(void) {

	i8 v9844 = (i8)(intptr_t)(ws+2944);
	i8 v9845 = *(i8*)(intptr_t)v9844;
	i8 v9846 = v9845+(+16);
	i8 v9847 = *(i8*)(intptr_t)v9846;
	i8 v9848 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9848 = v9847;

	i8 v9849 = (i8)(intptr_t)(ws+2944);
	i8 v9850 = *(i8*)(intptr_t)v9849;

	void f208_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v9851;
	f208_UndoLValue(&v9851, v9850);
	i8 v9852 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9852 = v9851;

c02_08b3:;

	i8 v9853 = (i8)(intptr_t)(ws+3008);
	i8 v9854 = *(i8*)(intptr_t)v9853;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v9855;
	f202_IsPtr(&v9855, v9854);
	i1 v9856 = (i1)+0;
	if (v9855==v9856) goto c02_08b6; else goto c02_08b5;

c02_08b5:;

	i8 v9857 = (i8)(intptr_t)(ws+3008);
	i8 v9858 = *(i8*)(intptr_t)v9857;
	i8 v9859 = *(i8*)(intptr_t)v9858;
	i8 v9860 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9860 = v9859;

	i8 v9861 = (i8)(intptr_t)(ws+3008);
	i8 v9862 = *(i8*)(intptr_t)v9861;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v9862);

	i8 v9863 = (i8)(intptr_t)(ws+1056);
	i8 v9864 = *(i8*)(intptr_t)v9863;
	i8 v9865 = v9864+(+42);
	i2 v9866 = *(i2*)(intptr_t)v9865;
	i1 v9867 = v9866;
	i8 v9868 = (i8)(intptr_t)(ws+3016);
	i8 v9869 = *(i8*)(intptr_t)v9868;

	void f97_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	i8 v9870;
	f97_MidLoad(&v9870, v9869, v9867);
	i8 v9871 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9871 = v9870;

	goto c02_08b3;

c02_08b6:;

	i8 v9872 = (i8)(intptr_t)(ws+3008);
	i8 v9873 = *(i8*)(intptr_t)v9872;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v9873);

	i8 v9874 = (i8)(intptr_t)(ws+3008);
	i8 v9875 = *(i8*)(intptr_t)v9874;

	void f206_IsRecord(i1* /* result */, i8 /* type */);
	i1 v9876;
	f206_IsRecord(&v9876, v9875);
	i1 v9877 = (i1)+0;
	if (v9876==v9877) goto c02_08ba; else goto c02_08bb;

c02_08ba:;


	void f59_StartError(void);
	f59_StartError();

	i8 v9878 = (i8)(intptr_t)(ws+3008);
	i8 v9879 = *(i8*)(intptr_t)v9878;
	i8 v9880 = v9879+(+48);
	i8 v9881 = *(i8*)(intptr_t)v9880;

	void f11_print(i8 /* ptr */);
	f11_print(v9881);

	i8 v9882 = (i8)(intptr_t)c02_s01d6;

	void f11_print(i8 /* ptr */);
	f11_print(v9882);


	void f60_EndError(void);
	f60_EndError();

	goto c02_08b7;

c02_08bb:;

c02_08b7:;

	i8 v9883 = (i8)(intptr_t)(ws+3008);
	i8 v9884 = *(i8*)(intptr_t)v9883;
	i8 v9885 = (i8)(intptr_t)(ws+2928);
	i8 v9886 = *(i8*)(intptr_t)v9885;

	void f193_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v9887;
	f193_LookupSymbol(&v9887, v9886, v9884);
	i8 v9888 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9888 = v9887;

	i8 v9889 = (i8)(intptr_t)(ws+3024);
	i8 v9890 = *(i8*)(intptr_t)v9889;
	i8 v9891 = (i8)+0;
	if (v9890==v9891) goto c02_08bf; else goto c02_08c0;

c02_08bf:;


	void f59_StartError(void);
	f59_StartError();

	i8 v9892 = (i8)(intptr_t)(ws+3008);
	i8 v9893 = *(i8*)(intptr_t)v9892;
	i8 v9894 = v9893+(+48);
	i8 v9895 = *(i8*)(intptr_t)v9894;

	void f11_print(i8 /* ptr */);
	f11_print(v9895);

	i8 v9896 = (i8)(intptr_t)c02_s01d7;

	void f11_print(i8 /* ptr */);
	f11_print(v9896);

	i8 v9897 = (i8)(intptr_t)(ws+2928);
	i8 v9898 = *(i8*)(intptr_t)v9897;

	void f11_print(i8 /* ptr */);
	f11_print(v9898);

	i8 v9899 = (i8)(intptr_t)c02_s01d8;

	void f11_print(i8 /* ptr */);
	f11_print(v9899);


	void f60_EndError(void);
	f60_EndError();

	goto c02_08bc;

c02_08c0:;

c02_08bc:;

	i8 v9900 = (i8)(intptr_t)(ws+2928);
	i8 v9901 = *(i8*)(intptr_t)v9900;

	void f32_Free(i8 /* block */);
	f32_Free(v9901);

	i1 v9902 = (i1)+155;
	i8 v9903 = (i8)(intptr_t)(ws+1056);
	i8 v9904 = *(i8*)(intptr_t)v9903;
	i8 v9905 = v9904+(+42);
	i2 v9906 = *(i2*)(intptr_t)v9905;
	i1 v9907 = v9906;
	i8 v9908 = (i8)(intptr_t)(ws+3016);
	i8 v9909 = *(i8*)(intptr_t)v9908;
	i8 v9910 = (i8)(intptr_t)(ws+3024);
	i8 v9911 = *(i8*)(intptr_t)v9910;
	i8 v9912 = v9911+(+32);
	i2 v9913 = *(i2*)(intptr_t)v9912;
	i4 v9914 = v9913;

	void f107_MidConstant(i8* /* m */, i4 /* value */);
	i8 v9915;
	f107_MidConstant(&v9915, v9914);

	void f150_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	i8 v9916;
	f150_MidC2Op(&v9916, v9915, v9909, v9907, v9902);
	i8 v9917 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9917 = v9916;

	i8 v9918 = (i8)(intptr_t)(ws+3024);
	i8 v9919 = *(i8*)(intptr_t)v9918;
	i8 v9920 = *(i8*)(intptr_t)v9919;

	void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9921;
	f441_MakePointerType(&v9921, v9920);
	i8 v9922 = (i8)(intptr_t)(ws+2920);
	i8 v9923 = *(i8*)(intptr_t)v9922;
	i8 v9924 = v9923+(+16);
	*(i8*)(intptr_t)v9924 = v9921;

	i8 v9925 = (i8)(intptr_t)(ws+2920);
	i8 v9926 = *(i8*)(intptr_t)v9925;

	void f207_MakeLValue(i8* /* lvalue */, i8 /* address */);
	i8 v9927;
	f207_MakeLValue(&v9927, v9926);
	i8 v9928 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9928 = v9927;

	i1 v9929 = (i1)+8;
	i8 v9930 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9930, v9929);

endsub:;
}

// reduce_54 workspace at ws+3008 length ws+0
void f539_reduce_54(void) {

	i8 v9931 = (i8)(intptr_t)(ws+2928);
	i8 v9932 = *(i8*)(intptr_t)v9931;

	void f120_MidString(i8* /* m */, i8 /* text */);
	i8 v9933;
	f120_MidString(&v9933, v9932);
	i8 v9934 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9934 = v9933;

	i8 v9935 = (i8)(intptr_t)(ws+1040);
	i8 v9936 = *(i8*)(intptr_t)v9935;

	void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v9937;
	f441_MakePointerType(&v9937, v9936);
	i8 v9938 = (i8)(intptr_t)(ws+2920);
	i8 v9939 = *(i8*)(intptr_t)v9938;
	i8 v9940 = v9939+(+16);
	*(i8*)(intptr_t)v9940 = v9937;

endsub:;
}

// reduce_55 workspace at ws+3008 length ws+0
void f540_reduce_55(void) {

	i8 v9941 = (i8)(intptr_t)(ws+2928);
	i8 v9942 = *(i8*)(intptr_t)v9941;
	i8 v9943 = v9942+(+58);
	i1 v9944 = *(i1*)(intptr_t)v9943;
	i1 v9945 = (i1)+40;
	if (v9944==v9945) goto c02_08c5; else goto c02_08c4;

c02_08c4:;


	void f468_parser_i_constant_error(void);
	f468_parser_i_constant_error();

	goto c02_08c1;

c02_08c5:;

c02_08c1:;

	i8 v9946 = (i8)(intptr_t)(ws+2928);
	i8 v9947 = *(i8*)(intptr_t)v9946;
	i4 v9948 = *(i4*)(intptr_t)v9947;
	i8 v9949 = (i8)(intptr_t)(ws+2920);
	*(i4*)(intptr_t)v9949 = v9948;

	i8 v9950 = (i8)(intptr_t)(ws+2928);
	i8 v9951 = *(i8*)(intptr_t)v9950;

	void f56_Discard(i8 /* node */);
	f56_Discard(v9951);

endsub:;
}

// reduce_56 workspace at ws+3008 length ws+0
void f541_reduce_56(void) {

	i1 v9952 = (i1)+7;
	i8 v9953 = (i8)(intptr_t)(ws+2952);
	i8 v9954 = *(i8*)(intptr_t)v9953;
	i8 v9955 = v9954+(+46);
	*(i1*)(intptr_t)v9955 = v9952;

	i8 v9956 = (i8)(intptr_t)(ws+2936);
	i4 v9957 = *(i4*)(intptr_t)v9956;
	i8 v9958 = (i8)(intptr_t)(ws+2952);
	i8 v9959 = *(i8*)(intptr_t)v9958;
	*(i4*)(intptr_t)v9959 = v9957;

	i1 v9960 = (i1)+2;
	i8 v9961 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9961, v9960);

	i1 v9962 = (i1)+22;
	i8 v9963 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9963, v9962);

endsub:;
}
const i1 c02_s01d9[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };

// reduce_57 workspace at ws+3008 length ws+0
void f542_reduce_57(void) {

	i8 v9964 = (i8)(intptr_t)(ws+2952);
	i4 v9965 = *(i4*)(intptr_t)v9964;
	i8 v9966 = (i8)(intptr_t)(ws+2936);
	i4 v9967 = *(i4*)(intptr_t)v9966;
	if ((s4)v9965<(s4)v9967) goto c02_08ca; else goto c02_08c9;

c02_08c9:;

	i8 v9968 = (i8)(intptr_t)c02_s01d9;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v9968);

	goto c02_08c6;

c02_08ca:;

c02_08c6:;

	i8 v9969 = (i8)(intptr_t)(ws+2952);
	i4 v9970 = *(i4*)(intptr_t)v9969;
	i8 v9971 = (i8)(intptr_t)(ws+2936);
	i4 v9972 = *(i4*)(intptr_t)v9971;

	void f216_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	i8 v9973;
	f216_ArchGuessIntType(&v9973, v9972, v9970);
	i8 v9974 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v9974 = v9973;

	i1 v9975 = (i1)+16;
	i8 v9976 = (i8)(intptr_t)(ws+2960);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9976, v9975);

	i1 v9977 = (i1)+44;
	i8 v9978 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9978, v9977);

	i1 v9979 = (i1)+4;
	i8 v9980 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v9980, v9979);

endsub:;
}
const i1 c02_s01da[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
const i1 c02_s01db[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };

// reduce_58 workspace at ws+3008 length ws+8
void f543_reduce_58(void) {

	i8 v9981 = (i8)(intptr_t)(ws+2928);
	i8 v9982 = *(i8*)(intptr_t)v9981;
	i8 v9983 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v9983 = v9982;

	i8 v9984 = (i8)(intptr_t)(ws+3008);
	i8 v9985 = *(i8*)(intptr_t)v9984;
	i8 v9986 = v9985+(+46);
	i1 v9987 = *(i1*)(intptr_t)v9986;
	i1 v9988 = (i1)+0;
	if (v9987==v9988) goto c02_08ce; else goto c02_08cf;

c02_08ce:;

	i1 v9989 = (i1)+30;
	i8 v9990 = (i8)(intptr_t)(ws+3008);
	i8 v9991 = *(i8*)(intptr_t)v9990;
	i8 v9992 = v9991+(+46);
	*(i1*)(intptr_t)v9992 = v9989;

	i1 v9993 = (i1)+1;
	i8 v9994 = (i8)(intptr_t)(ws+3008);
	i8 v9995 = *(i8*)(intptr_t)v9994;
	i8 v9996 = v9995+(+40);
	*(i1*)(intptr_t)v9996 = v9993;

	goto c02_08cb;

c02_08cf:;

c02_08cb:;

	i8 v9997 = (i8)(intptr_t)(ws+3008);
	i8 v9998 = *(i8*)(intptr_t)v9997;
	i8 v9999 = v9998+(+46);
	i1 v10000 = *(i1*)(intptr_t)v9999;
	i1 v10001 = (i1)+30;
	if (v10000==v10001) goto c02_08d4; else goto c02_08d3;

c02_08d3:;


	void f59_StartError(void);
	f59_StartError();

	i8 v10002 = (i8)(intptr_t)c02_s01da;

	void f11_print(i8 /* ptr */);
	f11_print(v10002);

	i8 v10003 = (i8)(intptr_t)(ws+3008);
	i8 v10004 = *(i8*)(intptr_t)v10003;
	i8 v10005 = v10004+(+48);
	i8 v10006 = *(i8*)(intptr_t)v10005;

	void f11_print(i8 /* ptr */);
	f11_print(v10006);

	i8 v10007 = (i8)(intptr_t)c02_s01db;

	void f11_print(i8 /* ptr */);
	f11_print(v10007);


	void f60_EndError(void);
	f60_EndError();

	goto c02_08d0;

c02_08d4:;

c02_08d0:;

	i8 v10008 = (i8)(intptr_t)(ws+3008);
	i8 v10009 = *(i8*)(intptr_t)v10008;
	i8 v10010 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10010 = v10009;

endsub:;
}

// reduce_59 workspace at ws+3008 length ws+0
void f544_reduce_59(void) {

	i8 v10011 = (i8)(intptr_t)(ws+2936);
	i8 v10012 = *(i8*)(intptr_t)v10011;

	void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v10013;
	f441_MakePointerType(&v10013, v10012);
	i8 v10014 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10014 = v10013;

	i1 v10015 = (i1)+5;
	i8 v10016 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10016, v10015);

endsub:;
}

// reduce_60 workspace at ws+3008 length ws+0
void f545_reduce_60(void) {

	i8 v10017 = (i8)(intptr_t)(ws+2952);
	i8 v10018 = *(i8*)(intptr_t)v10017;
	i8 v10019 = (i8)(intptr_t)(ws+2936);
	i4 v10020 = *(i4*)(intptr_t)v10019;
	i2 v10021 = (s2)(s4)v10020;

	void f442_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	i8 v10022;
	f442_MakeArrayType(&v10022, v10021, v10018);
	i8 v10023 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10023 = v10022;

	i1 v10024 = (i1)+17;
	i8 v10025 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10025, v10024);

	i1 v10026 = (i1)+5;
	i8 v10027 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10027, v10026);

endsub:;
}

// reduce_61 workspace at ws+3008 length ws+0
void f546_reduce_61(void) {

	i8 v10028 = (i8)(intptr_t)(ws+2944);
	i8 v10029 = *(i8*)(intptr_t)v10028;
	i2 v10030 = (i2)+0;

	void f442_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	i8 v10031;
	f442_MakeArrayType(&v10031, v10030, v10029);
	i8 v10032 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10032 = v10031;

	i1 v10033 = (i1)+17;
	i8 v10034 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10034, v10033);

	i1 v10035 = (i1)+5;
	i8 v10036 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10036, v10035);

endsub:;
}
const i1 c02_s01dc[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };

// reduce_62 workspace at ws+3008 length ws+0
void f547_reduce_62(void) {

	i8 v10037 = (i8)(intptr_t)(ws+2928);
	i8 v10038 = *(i8*)(intptr_t)v10037;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v10039;
	f201_IsArray(&v10039, v10038);
	i1 v10040 = (i1)+0;
	if (v10039==v10040) goto c02_08d8; else goto c02_08d9;

c02_08d8:;


	void f59_StartError(void);
	f59_StartError();

	i8 v10041 = (i8)(intptr_t)(ws+2928);
	i8 v10042 = *(i8*)(intptr_t)v10041;
	i8 v10043 = v10042+(+48);
	i8 v10044 = *(i8*)(intptr_t)v10043;

	void f11_print(i8 /* ptr */);
	f11_print(v10044);

	i8 v10045 = (i8)(intptr_t)c02_s01dc;

	void f11_print(i8 /* ptr */);
	f11_print(v10045);


	void f60_EndError(void);
	f60_EndError();

	goto c02_08d5;

c02_08d9:;

c02_08d5:;

	i8 v10046 = (i8)(intptr_t)(ws+2928);
	i8 v10047 = *(i8*)(intptr_t)v10046;
	i8 v10048 = v10047+(+16);
	i8 v10049 = *(i8*)(intptr_t)v10048;
	i8 v10050 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10050 = v10049;

endsub:;
}

// reduce_63 workspace at ws+3008 length ws+8
void f548_reduce_63(void) {

	i8 v10051 = (i8)+0;
	i8 v10052 = (i8)(intptr_t)(ws+2952);
	i8 v10053 = *(i8*)(intptr_t)v10052;
	i8 v10054 = (i8)(intptr_t)(ws+2936);
	i8 v10055 = *(i8*)(intptr_t)v10054;

	void f196_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	i8 v10056;
	f196_AddAlias(&v10056, v10055, v10053, v10051);
	i8 v10057 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10057 = v10056;

	i1 v10058 = (i1)+64;
	i8 v10059 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10059, v10058);

	i1 v10060 = (i1)+22;
	i8 v10061 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10061, v10060);

endsub:;
}

// reduce_64 workspace at ws+3008 length ws+0
void f549_reduce_64(void) {

	i8 v10062 = (i8)+0;
	i8 v10063 = (i8)(intptr_t)(ws+2928);
	i8 v10064 = *(i8*)(intptr_t)v10063;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10065;
	f195_AddSymbol(&v10065, v10064, v10062);
	i8 v10066 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10066 = v10065;

endsub:;
}
const i1 c02_s01dd[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
const i1 c02_s01de[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };

// reduce_65 workspace at ws+3008 length ws+16
void f550_reduce_65(void) {

	i8 v10067 = (i8)(intptr_t)(ws+2928);
	i8 v10068 = *(i8*)(intptr_t)v10067;
	i8 v10069 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10069 = v10068;

	i8 v10070 = (i8)+0;
	i8 v10071 = (i8)(intptr_t)(ws+3008);
	i8 v10072 = *(i8*)(intptr_t)v10071;

	void f193_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10073;
	f193_LookupSymbol(&v10073, v10072, v10070);
	i8 v10074 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10074 = v10073;

	i8 v10075 = (i8)(intptr_t)(ws+3016);
	i8 v10076 = *(i8*)(intptr_t)v10075;
	i8 v10077 = (i8)+0;
	if (v10076==v10077) goto c02_08dd; else goto c02_08de;

c02_08dd:;


	void f59_StartError(void);
	f59_StartError();

	i8 v10078 = (i8)(intptr_t)c02_s01dd;

	void f11_print(i8 /* ptr */);
	f11_print(v10078);

	i8 v10079 = (i8)(intptr_t)(ws+3008);
	i8 v10080 = *(i8*)(intptr_t)v10079;

	void f11_print(i8 /* ptr */);
	f11_print(v10080);

	i8 v10081 = (i8)(intptr_t)c02_s01de;

	void f11_print(i8 /* ptr */);
	f11_print(v10081);


	void f60_EndError(void);
	f60_EndError();

	goto c02_08da;

c02_08de:;

c02_08da:;

	i8 v10082 = (i8)(intptr_t)(ws+3008);
	i8 v10083 = *(i8*)(intptr_t)v10082;

	void f32_Free(i8 /* block */);
	f32_Free(v10083);

	i8 v10084 = (i8)(intptr_t)(ws+3016);
	i8 v10085 = *(i8*)(intptr_t)v10084;
	i8 v10086 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10086 = v10085;

endsub:;
}

// reduce_66 workspace at ws+3008 length ws+16
void f551_reduce_66(void) {

	i8 v10087 = (i8)(intptr_t)(ws+2928);
	i8 v10088 = *(i8*)(intptr_t)v10087;
	i8 v10089 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10089 = v10088;

	i8 v10090 = (i8)+0;
	i8 v10091 = (i8)(intptr_t)(ws+3008);
	i8 v10092 = *(i8*)(intptr_t)v10091;

	void f193_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10093;
	f193_LookupSymbol(&v10093, v10092, v10090);
	i8 v10094 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10094 = v10093;

	i8 v10095 = (i8)(intptr_t)(ws+3016);
	i8 v10096 = *(i8*)(intptr_t)v10095;
	i8 v10097 = (i8)+0;
	if (v10096==v10097) goto c02_08e2; else goto c02_08e3;

c02_08e2:;

	i8 v10098 = (i8)+0;
	i8 v10099 = (i8)(intptr_t)(ws+3008);
	i8 v10100 = *(i8*)(intptr_t)v10099;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10101;
	f195_AddSymbol(&v10101, v10100, v10098);
	i8 v10102 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10102 = v10101;

	goto c02_08df;

c02_08e3:;

	i8 v10103 = (i8)(intptr_t)(ws+3008);
	i8 v10104 = *(i8*)(intptr_t)v10103;

	void f32_Free(i8 /* block */);
	f32_Free(v10104);

c02_08df:;

	i8 v10105 = (i8)(intptr_t)(ws+3016);
	i8 v10106 = *(i8*)(intptr_t)v10105;
	i8 v10107 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10107 = v10106;

endsub:;
}
const i1 c02_s01df[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };

// reduce_67 workspace at ws+3008 length ws+0
void f552_reduce_67(void) {

	i8 v10108 = (i8)(intptr_t)(ws+2928);
	i8 v10109 = *(i8*)(intptr_t)v10108;
	i8 v10110 = v10109+(+46);
	i1 v10111 = *(i1*)(intptr_t)v10110;
	i1 v10112 = (i1)+28;
	if (v10111==v10112) goto c02_08e7; else goto c02_08e8;

c02_08e7:;

	i8 v10113 = (i8)(intptr_t)(ws+2928);
	i8 v10114 = *(i8*)(intptr_t)v10113;
	i8 v10115 = *(i8*)(intptr_t)v10114;
	i8 v10116 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v10116 = v10115;

	goto c02_08e4;

c02_08e8:;

c02_08e4:;

	i8 v10117 = (i8)(intptr_t)(ws+2928);
	i8 v10118 = *(i8*)(intptr_t)v10117;
	i8 v10119 = v10118+(+46);
	i1 v10120 = *(i1*)(intptr_t)v10119;
	i1 v10121 = (i1)+30;
	if (v10120==v10121) goto c02_08ed; else goto c02_08ec;

c02_08ec:;

	i8 v10122 = (i8)(intptr_t)c02_s01df;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10122);

	goto c02_08e9;

c02_08ed:;

c02_08e9:;

	i8 v10123 = (i8)(intptr_t)(ws+2928);
	i8 v10124 = *(i8*)(intptr_t)v10123;
	i8 v10125 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10125 = v10124;

endsub:;
}

// reduce_68 workspace at ws+3008 length ws+0
void f553_reduce_68(void) {

	i8 v10126 = (i8)(intptr_t)(ws+2936);
	i8 v10127 = *(i8*)(intptr_t)v10126;
	i8 v10128 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10128 = v10127;

	i1 v10129 = (i1)+4;
	i8 v10130 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10130, v10129);

endsub:;
}
const i1 c02_s01e0[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };

// reduce_69 workspace at ws+3008 length ws+16
void f554_reduce_69(void) {

	i8 v10131 = (i8)(intptr_t)(ws+80);
	i8 v10132 = *(i8*)(intptr_t)v10131;
	i8 v10133 = *(i8*)(intptr_t)v10132;
	i8 v10134 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10134 = v10133;

	i1 v10135 = (i1)+1;
	i8 v10136 = (i8)(intptr_t)(ws+80);
	i8 v10137 = *(i8*)(intptr_t)v10136;
	i8 v10138 = v10137+(+33);
	*(i1*)(intptr_t)v10138 = v10135;


	void f469_i_check_sub_call_args(void);
	f469_i_check_sub_call_args();

	i8 v10139 = (i8)(intptr_t)(ws+3008);
	i8 v10140 = *(i8*)(intptr_t)v10139;
	i8 v10141 = v10140+(+89);
	i1 v10142 = *(i1*)(intptr_t)v10141;
	i1 v10143 = (i1)+1;
	if (v10142==v10143) goto c02_08f2; else goto c02_08f1;

c02_08f1:;

	i8 v10144 = (i8)(intptr_t)c02_s01e0;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10144);

	goto c02_08ee;

c02_08f2:;

c02_08ee:;

	i8 v10145 = (i8)(intptr_t)(ws+3008);
	i8 v10146 = *(i8*)(intptr_t)v10145;
	i8 v10147 = v10146+(+48);
	i8 v10148 = *(i8*)(intptr_t)v10147;
	i8 v10149 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10149 = v10148;

	i8 v10150 = (i8)(intptr_t)(ws+3016);
	i8 v10151 = *(i8*)(intptr_t)v10150;
	i8 v10152 = *(i8*)(intptr_t)v10151;
	i8 v10153 = v10152+(+42);
	i2 v10154 = *(i2*)(intptr_t)v10153;
	i1 v10155 = v10154;
	i8 v10156 = (i8)(intptr_t)(ws+2928);
	i8 v10157 = *(i8*)(intptr_t)v10156;
	i8 v10158 = (i8)(intptr_t)(ws+3008);
	i8 v10159 = *(i8*)(intptr_t)v10158;

	void f137_MidCalle(i8* /* m */, i8 /* subr */, i8 /* left */, i1 /* width */);
	i8 v10160;
	f137_MidCalle(&v10160, v10159, v10157, v10155);
	i8 v10161 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10161 = v10160;

	i8 v10162 = (i8)(intptr_t)(ws+3016);
	i8 v10163 = *(i8*)(intptr_t)v10162;
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = (i8)(intptr_t)(ws+2920);
	i8 v10166 = *(i8*)(intptr_t)v10165;
	i8 v10167 = v10166+(+16);
	*(i8*)(intptr_t)v10167 = v10164;


	void f470_i_end_call(void);
	f470_i_end_call();

endsub:;
}
const i1 c02_s01e1[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };

// reduce_70 workspace at ws+3008 length ws+8
void f555_reduce_70(void) {

	i8 v10168 = (i8)(intptr_t)(ws+80);
	i8 v10169 = *(i8*)(intptr_t)v10168;
	i8 v10170 = *(i8*)(intptr_t)v10169;
	i8 v10171 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10171 = v10170;


	void f469_i_check_sub_call_args(void);
	f469_i_check_sub_call_args();

	i8 v10172 = (i8)(intptr_t)(ws+3008);
	i8 v10173 = *(i8*)(intptr_t)v10172;
	i8 v10174 = v10173+(+89);
	i1 v10175 = *(i1*)(intptr_t)v10174;
	i1 v10176 = (i1)+0;
	if (v10175==v10176) goto c02_08f7; else goto c02_08f6;

c02_08f6:;

	i8 v10177 = (i8)(intptr_t)c02_s01e1;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10177);

	goto c02_08f3;

c02_08f7:;

c02_08f3:;

	i8 v10178 = (i8)(intptr_t)(ws+2936);
	i8 v10179 = *(i8*)(intptr_t)v10178;
	i8 v10180 = (i8)(intptr_t)(ws+3008);
	i8 v10181 = *(i8*)(intptr_t)v10180;

	void f100_MidCall(i8* /* m */, i8 /* subr */, i8 /* left */);
	i8 v10182;
	f100_MidCall(&v10182, v10181, v10179);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10182);


	void f470_i_end_call(void);
	f470_i_end_call();

	i1 v10183 = (i1)+22;
	i8 v10184 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10184, v10183);

endsub:;
}
const i1 c02_s01e2[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s01e3[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
const i1 c02_s01e4[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };

// reduce_71 workspace at ws+3008 length ws+41
void f556_reduce_71(void) {

	i8 v10185 = (i8)(intptr_t)(ws+80);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	i8 v10187 = *(i8*)(intptr_t)v10186;
	i8 v10188 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10188 = v10187;


	void f469_i_check_sub_call_args(void);
	f469_i_check_sub_call_args();

	i8 v10189 = (i8)(intptr_t)(ws+2936);
	i8 v10190 = *(i8*)(intptr_t)v10189;
	i8 v10191 = (i8)(intptr_t)(ws+3008);
	i8 v10192 = *(i8*)(intptr_t)v10191;

	void f100_MidCall(i8* /* m */, i8 /* subr */, i8 /* left */);
	i8 v10193;
	f100_MidCall(&v10193, v10192, v10190);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10193);

	i8 v10194 = (i8)(intptr_t)(ws+3008);
	i8 v10195 = *(i8*)(intptr_t)v10194;
	i8 v10196 = v10195+(+89);
	i1 v10197 = *(i1*)(intptr_t)v10196;
	i8 v10198 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v10198 = v10197;

	i1 v10199 = (i1)+0;
	i8 v10200 = (i8)(intptr_t)(ws+3017);
	*(i1*)(intptr_t)v10200 = v10199;

	i8 v10201 = (i8)(intptr_t)(ws+2960);
	i8 v10202 = *(i8*)(intptr_t)v10201;
	i8 v10203 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v10203 = v10202;

c02_08fa:;

	i8 v10204 = (i8)(intptr_t)(ws+3024);
	i8 v10205 = *(i8*)(intptr_t)v10204;
	i8 v10206 = (i8)+0;
	if (v10205==v10206) goto c02_08fd; else goto c02_08fc;

c02_08fc:;

	i8 v10207 = (i8)(intptr_t)(ws+3016);
	i1 v10208 = *(i1*)(intptr_t)v10207;
	i1 v10209 = (i1)+0;
	if (v10208==v10209) goto c02_0901; else goto c02_0902;

c02_0901:;

	i8 v10210 = (i8)(intptr_t)c02_s01e2;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10210);

	goto c02_08fe;

c02_0902:;

c02_08fe:;

	i8 v10211 = (i8)(intptr_t)(ws+3016);
	i1 v10212 = *(i1*)(intptr_t)v10211;
	i1 v10213 = v10212+(-1);
	i8 v10214 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v10214 = v10213;

	i8 v10215 = (i8)(intptr_t)(ws+3008);
	i8 v10216 = *(i8*)(intptr_t)v10215;
	i8 v10217 = (i8)(intptr_t)(ws+3016);
	i1 v10218 = *(i1*)(intptr_t)v10217;

	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	i8 v10219;
	f85_GetOutputParameter(&v10219, v10218, v10216);
	i8 v10220 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10220 = v10219;

	i8 v10221 = (i8)(intptr_t)(ws+3024);
	i8 v10222 = *(i8*)(intptr_t)v10221;
	i8 v10223 = v10222+(+24);
	i8 v10224 = *(i8*)(intptr_t)v10223;
	i8 v10225 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v10225 = v10224;

	i8 v10226 = (i8)+0;
	i8 v10227 = (i8)(intptr_t)(ws+3024);
	i8 v10228 = *(i8*)(intptr_t)v10227;
	i8 v10229 = v10228+(+24);
	*(i8*)(intptr_t)v10229 = v10226;

	i8 v10230 = (i8)(intptr_t)(ws+3024);
	i8 v10231 = *(i8*)(intptr_t)v10230;
	i8 v10232 = v10231+(+32);
	i8 v10233 = *(i8*)(intptr_t)v10232;
	i8 v10234 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v10234 = v10233;

	i8 v10235 = (i8)(intptr_t)(ws+3040);
	i8 v10236 = *(i8*)(intptr_t)v10235;
	i8 v10237 = v10236+(+16);
	i8 v10238 = *(i8*)(intptr_t)v10237;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v10239;
	f202_IsPtr(&v10239, v10238);
	i1 v10240 = (i1)+0;
	if (v10239==v10240) goto c02_0906; else goto c02_0907;

c02_0906:;

	i8 v10241 = (i8)(intptr_t)c02_s01e3;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10241);

	goto c02_0903;

c02_0907:;

c02_0903:;

	i8 v10242 = (i8)(intptr_t)(ws+3040);
	i8 v10243 = *(i8*)(intptr_t)v10242;
	i8 v10244 = (i8)(intptr_t)(ws+3032);
	i8 v10245 = *(i8*)(intptr_t)v10244;
	i8 v10246 = *(i8*)(intptr_t)v10245;

	void f441_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	i8 v10247;
	f441_MakePointerType(&v10247, v10246);

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v10247, v10243);

	i8 v10248 = (i8)(intptr_t)(ws+3032);
	i8 v10249 = *(i8*)(intptr_t)v10248;
	i8 v10250 = *(i8*)(intptr_t)v10249;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10250);

	i8 v10251 = (i8)(intptr_t)(ws+3040);
	i8 v10252 = *(i8*)(intptr_t)v10251;
	i8 v10253 = v10252+(+16);
	i8 v10254 = *(i8*)(intptr_t)v10253;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10254);

	i8 v10255 = (i8)(intptr_t)(ws+3032);
	i8 v10256 = *(i8*)(intptr_t)v10255;
	i8 v10257 = *(i8*)(intptr_t)v10256;
	i8 v10258 = v10257+(+42);
	i2 v10259 = *(i2*)(intptr_t)v10258;
	i1 v10260 = v10259;
	i8 v10261 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v10261 = v10260;

	i8 v10262 = (i8)(intptr_t)(ws+3048);
	i1 v10263 = *(i1*)(intptr_t)v10262;
	i8 v10264 = (i8)(intptr_t)(ws+3048);
	i1 v10265 = *(i1*)(intptr_t)v10264;
	i8 v10266 = (i8)(intptr_t)(ws+3008);
	i8 v10267 = *(i8*)(intptr_t)v10266;
	i8 v10268 = (i8)(intptr_t)(ws+3017);
	i1 v10269 = *(i1*)(intptr_t)v10268;

	void f104_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	i8 v10270;
	f104_MidPoparg(&v10270, v10269, v10267, v10265);
	i8 v10271 = (i8)(intptr_t)(ws+3040);
	i8 v10272 = *(i8*)(intptr_t)v10271;

	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v10273;
	f106_MidStore(&v10273, v10272, v10270, v10263);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10273);

	i8 v10274 = (i8)(intptr_t)(ws+3017);
	i1 v10275 = *(i1*)(intptr_t)v10274;
	i1 v10276 = v10275+(+1);
	i8 v10277 = (i8)(intptr_t)(ws+3017);
	*(i1*)(intptr_t)v10277 = v10276;

	i8 v10278 = (i8)(intptr_t)(ws+3032);
	i8 v10279 = *(i8*)(intptr_t)v10278;
	i8 v10280 = v10279+(+16);
	i8 v10281 = *(i8*)(intptr_t)v10280;
	i8 v10282 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10282 = v10281;

	goto c02_08fa;

c02_08fd:;

	i8 v10283 = (i8)(intptr_t)(ws+2960);
	i8 v10284 = *(i8*)(intptr_t)v10283;

	void f56_Discard(i8 /* node */);
	f56_Discard(v10284);

	i8 v10285 = (i8)(intptr_t)(ws+3017);
	i1 v10286 = *(i1*)(intptr_t)v10285;
	i8 v10287 = (i8)(intptr_t)(ws+3008);
	i8 v10288 = *(i8*)(intptr_t)v10287;
	i8 v10289 = v10288+(+89);
	i1 v10290 = *(i1*)(intptr_t)v10289;
	if (v10286==v10290) goto c02_090c; else goto c02_090b;

c02_090b:;

	i8 v10291 = (i8)(intptr_t)c02_s01e4;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10291);

	goto c02_0908;

c02_090c:;

c02_0908:;


	void f470_i_end_call(void);
	f470_i_end_call();

	i1 v10292 = (i1)+2;
	i8 v10293 = (i8)(intptr_t)(ws+2952);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10293, v10292);

	i1 v10294 = (i1)+22;
	i8 v10295 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10295, v10294);

endsub:;
}
const i1 c02_s01e5[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
const i1 c02_s01e6[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };

// reduce_72 workspace at ws+3008 length ws+8
void f557_reduce_72(void) {

	i8 v10296 = (i8)(intptr_t)(ws+2928);
	i8 v10297 = *(i8*)(intptr_t)v10296;
	i8 v10298 = v10297+(+46);
	i1 v10299 = *(i1*)(intptr_t)v10298;
	i1 v10300 = (i1)+25;
	if (v10299==v10300) goto c02_0911; else goto c02_0910;

c02_0910:;


	void f59_StartError(void);
	f59_StartError();

	i8 v10301 = (i8)(intptr_t)c02_s01e5;

	void f11_print(i8 /* ptr */);
	f11_print(v10301);

	i8 v10302 = (i8)(intptr_t)(ws+2928);
	i8 v10303 = *(i8*)(intptr_t)v10302;
	i8 v10304 = v10303+(+48);
	i8 v10305 = *(i8*)(intptr_t)v10304;

	void f11_print(i8 /* ptr */);
	f11_print(v10305);

	i8 v10306 = (i8)(intptr_t)c02_s01e6;

	void f11_print(i8 /* ptr */);
	f11_print(v10306);


	void f60_EndError(void);
	f60_EndError();

	goto c02_090d;

c02_0911:;

c02_090d:;

	i8 v10307 = (i8)+34;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10308;
	f31_Alloc(&v10308, v10307);
	i8 v10309 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10309 = v10308;

	i8 v10310 = (i8)(intptr_t)(ws+80);
	i8 v10311 = *(i8*)(intptr_t)v10310;
	i8 v10312 = (i8)(intptr_t)(ws+3008);
	i8 v10313 = *(i8*)(intptr_t)v10312;
	i8 v10314 = v10313+(+8);
	*(i8*)(intptr_t)v10314 = v10311;

	i8 v10315 = (i8)(intptr_t)(ws+2928);
	i8 v10316 = *(i8*)(intptr_t)v10315;
	i8 v10317 = *(i8*)(intptr_t)v10316;
	i8 v10318 = (i8)(intptr_t)(ws+3008);
	i8 v10319 = *(i8*)(intptr_t)v10318;
	*(i8*)(intptr_t)v10319 = v10317;

	i8 v10320 = (i8)(intptr_t)(ws+2928);
	i8 v10321 = *(i8*)(intptr_t)v10320;
	i8 v10322 = *(i8*)(intptr_t)v10321;
	i8 v10323 = v10322+(+40);
	i8 v10324 = *(i8*)(intptr_t)v10323;
	i8 v10325 = (i8)(intptr_t)(ws+3008);
	i8 v10326 = *(i8*)(intptr_t)v10325;
	i8 v10327 = v10326+(+16);
	*(i8*)(intptr_t)v10327 = v10324;

	i8 v10328 = (i8)(intptr_t)(ws+2928);
	i8 v10329 = *(i8*)(intptr_t)v10328;
	i8 v10330 = *(i8*)(intptr_t)v10329;
	i8 v10331 = v10330+(+48);
	i8 v10332 = *(i8*)(intptr_t)v10331;
	i8 v10333 = (i8)(intptr_t)(ws+3008);
	i8 v10334 = *(i8*)(intptr_t)v10333;
	i8 v10335 = v10334+(+24);
	*(i8*)(intptr_t)v10335 = v10332;

	i8 v10336 = (i8)(intptr_t)(ws+3008);
	i8 v10337 = *(i8*)(intptr_t)v10336;
	i8 v10338 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10338 = v10337;

endsub:;
}

// reduce_73 workspace at ws+3008 length ws+0
void f558_reduce_73(void) {

	i8 v10339 = (i8)(intptr_t)(ws+2936);
	i8 v10340 = *(i8*)(intptr_t)v10339;
	i8 v10341 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10341 = v10340;

	i1 v10342 = (i1)+4;
	i8 v10343 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10343, v10342);

endsub:;
}

// reduce_74 workspace at ws+3008 length ws+0
void f559_reduce_74(void) {


	void f108_MidEnd(i8* /* m */);
	i8 v10344;
	f108_MidEnd(&v10344);
	i8 v10345 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10345 = v10344;

	i1 v10346 = (i1)+4;
	i8 v10347 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10347, v10346);

endsub:;
}

// reduce_75 workspace at ws+3008 length ws+0
void f560_reduce_75(void) {

	i8 v10348 = (i8)(intptr_t)(ws+2928);
	i8 v10349 = *(i8*)(intptr_t)v10348;
	i8 v10350 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10350 = v10349;

endsub:;
}

// reduce_76 workspace at ws+3008 length ws+0
void f561_reduce_76(void) {

	i8 v10351 = (i8)(intptr_t)(ws+2928);
	i8 v10352 = *(i8*)(intptr_t)v10351;
	i8 v10353 = v10352+(+24);
	i8 v10354 = *(i8*)(intptr_t)v10353;

	void f56_Discard(i8 /* node */);
	f56_Discard(v10354);

	i8 v10355 = (i8)(intptr_t)(ws+2944);
	i8 v10356 = *(i8*)(intptr_t)v10355;
	i8 v10357 = (i8)(intptr_t)(ws+2928);
	i8 v10358 = *(i8*)(intptr_t)v10357;
	i8 v10359 = v10358+(+24);
	*(i8*)(intptr_t)v10359 = v10356;

	i8 v10360 = (i8)(intptr_t)(ws+2928);
	i8 v10361 = *(i8*)(intptr_t)v10360;
	i8 v10362 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10362 = v10361;

	i1 v10363 = (i1)+44;
	i8 v10364 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10364, v10363);

endsub:;
}
const i1 c02_s01e7[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };

// reduce_77 workspace at ws+3008 length ws+8
void f562_reduce_77(void) {

	i8 v10365 = (i8)(intptr_t)(ws+80);
	i8 v10366 = *(i8*)(intptr_t)v10365;
	i8 v10367 = v10366+(+16);
	i8 v10368 = *(i8*)(intptr_t)v10367;
	i8 v10369 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10369 = v10368;

	i8 v10370 = (i8)(intptr_t)(ws+3008);
	i8 v10371 = *(i8*)(intptr_t)v10370;
	i8 v10372 = (i8)+0;
	if (v10371==v10372) goto c02_0915; else goto c02_0916;

c02_0915:;


	void f59_StartError(void);
	f59_StartError();

	i8 v10373 = (i8)(intptr_t)c02_s01e7;

	void f11_print(i8 /* ptr */);
	f11_print(v10373);

	i8 v10374 = (i8)(intptr_t)(ws+80);
	i8 v10375 = *(i8*)(intptr_t)v10374;
	i8 v10376 = *(i8*)(intptr_t)v10375;
	i8 v10377 = *(i8*)(intptr_t)v10376;

	void f11_print(i8 /* ptr */);
	f11_print(v10377);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0912;

c02_0916:;

c02_0912:;

	i8 v10378 = (i8)(intptr_t)(ws+80);
	i8 v10379 = *(i8*)(intptr_t)v10378;
	i8 v10380 = v10379+(+16);
	i8 v10381 = *(i8*)(intptr_t)v10380;
	i8 v10382 = v10381+(+16);
	i8 v10383 = *(i8*)(intptr_t)v10382;
	i8 v10384 = (i8)(intptr_t)(ws+80);
	i8 v10385 = *(i8*)(intptr_t)v10384;
	i8 v10386 = v10385+(+16);
	*(i8*)(intptr_t)v10386 = v10383;

	i8 v10387 = (i8)(intptr_t)(ws+2928);
	i8 v10388 = *(i8*)(intptr_t)v10387;
	i8 v10389 = (i8)(intptr_t)(ws+3008);
	i8 v10390 = *(i8*)(intptr_t)v10389;
	i8 v10391 = *(i8*)(intptr_t)v10390;

	void f447_CheckExpressionType(i8 /* type */, i8 /* node */);
	f447_CheckExpressionType(v10391, v10388);

	i8 v10392 = (i8)(intptr_t)(ws+3008);
	i8 v10393 = *(i8*)(intptr_t)v10392;
	i8 v10394 = *(i8*)(intptr_t)v10393;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10394);

	i8 v10395 = (i8)(intptr_t)(ws+2928);
	i8 v10396 = *(i8*)(intptr_t)v10395;
	i8 v10397 = v10396+(+16);
	i8 v10398 = *(i8*)(intptr_t)v10397;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10398);

	i8 v10399 = (i8)(intptr_t)(ws+80);
	i8 v10400 = *(i8*)(intptr_t)v10399;
	i8 v10401 = v10400+(+32);
	i1 v10402 = *(i1*)(intptr_t)v10401;
	i1 v10403 = v10402+(+1);
	i8 v10404 = (i8)(intptr_t)(ws+80);
	i8 v10405 = *(i8*)(intptr_t)v10404;
	i8 v10406 = v10405+(+32);
	*(i1*)(intptr_t)v10406 = v10403;

	i8 v10407 = (i8)(intptr_t)(ws+2928);
	i8 v10408 = *(i8*)(intptr_t)v10407;

	void f144_NodeWidth(i1* /* width */, i8 /* node */);
	i1 v10409;
	f144_NodeWidth(&v10409, v10408);

	void f108_MidEnd(i8* /* m */);
	i8 v10410;
	f108_MidEnd(&v10410);
	i8 v10411 = (i8)(intptr_t)(ws+2928);
	i8 v10412 = *(i8*)(intptr_t)v10411;
	i8 v10413 = (i8)(intptr_t)(ws+80);
	i8 v10414 = *(i8*)(intptr_t)v10413;
	i8 v10415 = *(i8*)(intptr_t)v10414;
	i8 v10416 = (i8)(intptr_t)(ws+80);
	i8 v10417 = *(i8*)(intptr_t)v10416;
	i8 v10418 = *(i8*)(intptr_t)v10417;
	i8 v10419 = v10418+(+88);
	i1 v10420 = *(i1*)(intptr_t)v10419;
	i8 v10421 = (i8)(intptr_t)(ws+80);
	i8 v10422 = *(i8*)(intptr_t)v10421;
	i8 v10423 = v10422+(+32);
	i1 v10424 = *(i1*)(intptr_t)v10423;
	i1 v10425 = v10420-v10424;

	void f112_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	i8 v10426;
	f112_MidArg(&v10426, v10425, v10415, v10412, v10410, v10409);
	i8 v10427 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10427 = v10426;

endsub:;
}

// reduce_78 workspace at ws+3008 length ws+0
void f563_reduce_78(void) {

	i8 v10428 = (i8)(intptr_t)(ws+2936);
	i8 v10429 = *(i8*)(intptr_t)v10428;
	i8 v10430 = (i8)(intptr_t)(ws+2952);
	i8 v10431 = *(i8*)(intptr_t)v10430;

	void f136_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	i8 v10432;
	f136_MidPair(&v10432, v10431, v10429);
	i8 v10433 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10433 = v10432;

	i1 v10434 = (i1)+44;
	i8 v10435 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10435, v10434);

	i1 v10436 = (i1)+4;
	i8 v10437 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10437, v10436);

endsub:;
}

// reduce_79 workspace at ws+3008 length ws+0
void f564_reduce_79(void) {

	i8 v10438 = (i8)(intptr_t)(ws+2928);
	i8 v10439 = *(i8*)(intptr_t)v10438;
	i8 v10440 = (i8)+0;

	void f136_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	i8 v10441;
	f136_MidPair(&v10441, v10440, v10439);
	i8 v10442 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10442 = v10441;

endsub:;
}

// reduce_80 workspace at ws+3008 length ws+0
void f565_reduce_80(void) {

	i8 v10443 = (i8)(intptr_t)(ws+2928);
	i8 v10444 = *(i8*)(intptr_t)v10443;
	i8 v10445 = (i8)(intptr_t)(ws+2944);
	i8 v10446 = *(i8*)(intptr_t)v10445;

	void f136_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	i8 v10447;
	f136_MidPair(&v10447, v10446, v10444);
	i8 v10448 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10448 = v10447;

	i1 v10449 = (i1)+44;
	i8 v10450 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10450, v10449);

endsub:;
}

// reduce_81 workspace at ws+3008 length ws+0
void f566_reduce_81(void) {

	i8 v10451 = (i8)(intptr_t)(ws+2928);
	i8 v10452 = *(i8*)(intptr_t)v10451;

	void f208_UndoLValue(i8* /* address */, i8 /* lvalue */);
	i8 v10453;
	f208_UndoLValue(&v10453, v10452);
	i8 v10454 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10454 = v10453;

endsub:;
}

// reduce_82 workspace at ws+3008 length ws+0
void f567_reduce_82(void) {

	i8 v10455 = (i8)(intptr_t)(ws+1224);
	i8 v10456 = *(i8*)(intptr_t)v10455;
	i8 v10457 = v10456+(+56);
	i2 v10458 = *(i2*)(intptr_t)v10457;
	i8 v10459 = (i8)(intptr_t)(ws+2936);
	i8 v10460 = *(i8*)(intptr_t)v10459;

	void f180_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	f180_EmitterDeclareExternalSubroutine(v10460, v10458);

	i1 v10461 = (i1)+11;
	i8 v10462 = (i8)(intptr_t)(ws+2952);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10462, v10461);

	i1 v10463 = (i1)+16;
	i8 v10464 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10464, v10463);

	i1 v10465 = (i1)+4;
	i8 v10466 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10466, v10465);

endsub:;
}

// reduce_83 workspace at ws+3008 length ws+0
void f568_reduce_83(void) {

	i8 v10467 = (i8)+91;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10468;
	f31_Alloc(&v10468, v10467);
	i8 v10469 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10469 = v10468;

	i8 v10470 = (i8)(intptr_t)(ws+40);
	i8 v10471 = *(i8*)(intptr_t)v10470;
	i8 v10472 = v10471+(+16);
	i8 v10473 = (i8)(intptr_t)(ws+1224);
	i8 v10474 = *(i8*)(intptr_t)v10473;
	i8 v10475 = v10474+(+32);
	*(i8*)(intptr_t)v10475 = v10472;

	i8 v10476 = (i8)(intptr_t)(ws+40);
	i8 v10477 = *(i8*)(intptr_t)v10476;
	i8 v10478 = (i8)(intptr_t)(ws+1224);
	i8 v10479 = *(i8*)(intptr_t)v10478;
	i8 v10480 = v10479+(+8);
	*(i8*)(intptr_t)v10480 = v10477;


	void f210_AllocSubrId(i2* /* id */);
	i2 v10481;
	f210_AllocSubrId(&v10481);
	i8 v10482 = (i8)(intptr_t)(ws+1224);
	i8 v10483 = *(i8*)(intptr_t)v10482;
	i8 v10484 = v10483+(+56);
	*(i2*)(intptr_t)v10484 = v10481;

	i8 v10485 = (i8)(intptr_t)(ws+2928);
	i8 v10486 = *(i8*)(intptr_t)v10485;
	i8 v10487 = v10486+(+48);
	i8 v10488 = *(i8*)(intptr_t)v10487;
	i8 v10489 = (i8)(intptr_t)(ws+1224);
	i8 v10490 = *(i8*)(intptr_t)v10489;
	*(i8*)(intptr_t)v10490 = v10488;

	i1 v10491 = (i1)+25;
	i8 v10492 = (i8)(intptr_t)(ws+2928);
	i8 v10493 = *(i8*)(intptr_t)v10492;
	i8 v10494 = v10493+(+46);
	*(i1*)(intptr_t)v10494 = v10491;

	i8 v10495 = (i8)(intptr_t)(ws+1224);
	i8 v10496 = *(i8*)(intptr_t)v10495;
	i8 v10497 = (i8)(intptr_t)(ws+2928);
	i8 v10498 = *(i8*)(intptr_t)v10497;
	*(i8*)(intptr_t)v10498 = v10496;

	i8 v10499 = (i8)(intptr_t)(ws+1224);
	i8 v10500 = *(i8*)(intptr_t)v10499;

	void f179_EmitterDeclareSubroutine(i8 /* subr */);
	f179_EmitterDeclareSubroutine(v10500);

endsub:;
}
const i1 c02_s01e8[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
const i1 c02_s01e9[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
const i1 c02_s01ea[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };

// reduce_84 workspace at ws+3008 length ws+0
void f569_reduce_84(void) {

	i8 v10501 = (i8)(intptr_t)(ws+2928);
	i8 v10502 = *(i8*)(intptr_t)v10501;
	i8 v10503 = v10502+(+46);
	i1 v10504 = *(i1*)(intptr_t)v10503;
	i1 v10505 = (i1)+25;
	if (v10504==v10505) goto c02_091b; else goto c02_091a;

c02_091a:;

	i8 v10506 = (i8)(intptr_t)c02_s01e8;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10506);

	goto c02_0917;

c02_091b:;

c02_0917:;

	i8 v10507 = (i8)(intptr_t)(ws+2928);
	i8 v10508 = *(i8*)(intptr_t)v10507;
	i8 v10509 = *(i8*)(intptr_t)v10508;
	i8 v10510 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v10510 = v10509;

	i8 v10511 = (i8)(intptr_t)(ws+1224);
	i8 v10512 = *(i8*)(intptr_t)v10511;
	i8 v10513 = v10512+(+90);
	i1 v10514 = *(i1*)(intptr_t)v10513;
	i1 v10515 = v10514&(+1);
	i1 v10516 = (i1)+0;
	if (v10515==v10516) goto c02_0920; else goto c02_091f;

c02_091f:;

	i8 v10517 = (i8)(intptr_t)c02_s01e9;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10517);

	goto c02_091c;

c02_0920:;

c02_091c:;

	i8 v10518 = (i8)(intptr_t)(ws+1224);
	i8 v10519 = *(i8*)(intptr_t)v10518;
	i8 v10520 = v10519+(+8);
	i8 v10521 = *(i8*)(intptr_t)v10520;
	i8 v10522 = (i8)(intptr_t)(ws+40);
	i8 v10523 = *(i8*)(intptr_t)v10522;
	if (v10521==v10523) goto c02_0925; else goto c02_0924;

c02_0924:;

	i8 v10524 = (i8)(intptr_t)c02_s01ea;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10524);

	goto c02_0921;

c02_0925:;

c02_0921:;

	i1 v10525 = (i1)+25;
	i8 v10526 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10526, v10525);

endsub:;
}

// reduce_85 workspace at ws+3008 length ws+0
void f570_reduce_85(void) {

	i8 v10527 = (i8)(intptr_t)(ws+52);
	i2 v10528 = *(i2*)(intptr_t)v10527;
	i8 v10529 = (i8)(intptr_t)(ws+1224);
	i8 v10530 = *(i8*)(intptr_t)v10529;
	i8 v10531 = v10530+(+66);
	*(i2*)(intptr_t)v10531 = v10528;

	i2 v10532 = (i2)+0;
	i8 v10533 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10533 = v10532;

	i8 v10534 = (i8)(intptr_t)(ws+54);
	i2 v10535 = *(i2*)(intptr_t)v10534;
	i8 v10536 = (i8)(intptr_t)(ws+1224);
	i8 v10537 = *(i8*)(intptr_t)v10536;
	i8 v10538 = v10537+(+68);
	*(i2*)(intptr_t)v10538 = v10535;

	i2 v10539 = (i2)+0;
	i8 v10540 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10540 = v10539;

	i8 v10541 = (i8)(intptr_t)(ws+1224);
	i8 v10542 = *(i8*)(intptr_t)v10541;
	i8 v10543 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10543 = v10542;

	i8 v10544 = (i8)(intptr_t)(ws+40);
	i8 v10545 = *(i8*)(intptr_t)v10544;

	void f96_MidStartsub(i8* /* m */, i8 /* subr */);
	i8 v10546;
	f96_MidStartsub(&v10546, v10545);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10546);

	i8 v10547 = (i8)(intptr_t)(ws+40);
	i8 v10548 = *(i8*)(intptr_t)v10547;
	i8 v10549 = v10548+(+90);
	i1 v10550 = *(i1*)(intptr_t)v10549;
	i1 v10551 = v10550|(+1);
	i8 v10552 = (i8)(intptr_t)(ws+40);
	i8 v10553 = *(i8*)(intptr_t)v10552;
	i8 v10554 = v10553+(+90);
	*(i1*)(intptr_t)v10554 = v10551;

endsub:;
}

// reduce_86 workspace at ws+3008 length ws+8
void f571_reduce_86(void) {

	i8 v10555 = (i8)(intptr_t)(ws+40);
	i8 v10556 = *(i8*)(intptr_t)v10555;

	void f111_MidEndsub(i8* /* m */, i8 /* subr */);
	i8 v10557;
	f111_MidEndsub(&v10557, v10556);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10557);

	i8 v10558 = (i8)(intptr_t)(ws+40);
	i8 v10559 = *(i8*)(intptr_t)v10558;
	i8 v10560 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10560 = v10559;

	i8 v10561 = (i8)(intptr_t)(ws+3008);
	i8 v10562 = *(i8*)(intptr_t)v10561;
	i8 v10563 = v10562+(+66);
	i2 v10564 = *(i2*)(intptr_t)v10563;
	i8 v10565 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10565 = v10564;

	i8 v10566 = (i8)(intptr_t)(ws+3008);
	i8 v10567 = *(i8*)(intptr_t)v10566;
	i8 v10568 = v10567+(+68);
	i2 v10569 = *(i2*)(intptr_t)v10568;
	i8 v10570 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10570 = v10569;

	i8 v10571 = (i8)(intptr_t)(ws+3008);
	i8 v10572 = *(i8*)(intptr_t)v10571;
	i8 v10573 = v10572+(+8);
	i8 v10574 = *(i8*)(intptr_t)v10573;
	i8 v10575 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10575 = v10574;

	i8 v10576 = (i8)(intptr_t)(ws+3008);
	i8 v10577 = *(i8*)(intptr_t)v10576;

	void f443_DestructSubroutineContents(i8 /* subr */);
	f443_DestructSubroutineContents(v10577);

	i1 v10578 = (i1)+25;
	i8 v10579 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10579, v10578);

endsub:;
}

// reduce_87 workspace at ws+3008 length ws+0
void f572_reduce_87(void) {

	i1 v10580 = (i1)+0;
	i8 v10581 = (i8)(intptr_t)(ws+1224);
	i8 v10582 = *(i8*)(intptr_t)v10581;
	i8 v10583 = v10582+(+89);
	*(i1*)(intptr_t)v10583 = v10580;

endsub:;
}

// reduce_88 workspace at ws+3008 length ws+0
void f573_reduce_88(void) {

	i8 v10584 = (i8)(intptr_t)(ws+2928);
	i8 v10585 = *(i8*)(intptr_t)v10584;
	i8 v10586 = (i8)(intptr_t)(ws+1224);
	i8 v10587 = *(i8*)(intptr_t)v10586;
	i8 v10588 = v10587+(+48);
	*(i8*)(intptr_t)v10588 = v10585;

	i8 v10589 = (i8)(intptr_t)(ws+2928);
	i8 v10590 = *(i8*)(intptr_t)v10589;

	void f83_CountParameters(i1* /* count */, i8 /* param */);
	i1 v10591;
	f83_CountParameters(&v10591, v10590);
	i8 v10592 = (i8)(intptr_t)(ws+1224);
	i8 v10593 = *(i8*)(intptr_t)v10592;
	i8 v10594 = v10593+(+89);
	*(i1*)(intptr_t)v10594 = v10591;

	i1 v10595 = (i1)+6;
	i8 v10596 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10596, v10595);

endsub:;
}

// reduce_89 workspace at ws+3008 length ws+0
void f574_reduce_89(void) {

	i8 v10597 = (i8)(intptr_t)(ws+2928);
	i8 v10598 = *(i8*)(intptr_t)v10597;
	i8 v10599 = (i8)(intptr_t)(ws+1224);
	i8 v10600 = *(i8*)(intptr_t)v10599;
	i8 v10601 = v10600+(+40);
	*(i8*)(intptr_t)v10601 = v10598;

	i8 v10602 = (i8)(intptr_t)(ws+2928);
	i8 v10603 = *(i8*)(intptr_t)v10602;

	void f83_CountParameters(i1* /* count */, i8 /* param */);
	i1 v10604;
	f83_CountParameters(&v10604, v10603);
	i8 v10605 = (i8)(intptr_t)(ws+1224);
	i8 v10606 = *(i8*)(intptr_t)v10605;
	i8 v10607 = v10606+(+88);
	*(i1*)(intptr_t)v10607 = v10604;

endsub:;
}

// reduce_90 workspace at ws+3008 length ws+0
void f575_reduce_90(void) {

	i8 v10608 = (i8)+0;
	i8 v10609 = (i8)(intptr_t)(ws+1224);
	i8 v10610 = *(i8*)(intptr_t)v10609;
	i8 v10611 = v10610+(+40);
	*(i8*)(intptr_t)v10611 = v10608;

	i1 v10612 = (i1)+0;
	i8 v10613 = (i8)(intptr_t)(ws+1224);
	i8 v10614 = *(i8*)(intptr_t)v10613;
	i8 v10615 = v10614+(+88);
	*(i1*)(intptr_t)v10615 = v10612;

endsub:;
}

// reduce_91 workspace at ws+3008 length ws+0
void f576_reduce_91(void) {

	i8 v10616 = (i8)+0;
	i8 v10617 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10617 = v10616;

	i1 v10618 = (i1)+4;
	i8 v10619 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10619, v10618);

endsub:;
}

// reduce_92 workspace at ws+3008 length ws+0
void f577_reduce_92(void) {

	i8 v10620 = (i8)(intptr_t)(ws+2936);
	i8 v10621 = *(i8*)(intptr_t)v10620;
	i8 v10622 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10622 = v10621;

	i1 v10623 = (i1)+4;
	i8 v10624 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10624, v10623);

endsub:;
}

// reduce_93 workspace at ws+3008 length ws+0
void f578_reduce_93(void) {

	i8 v10625 = (i8)(intptr_t)(ws+2928);
	i8 v10626 = *(i8*)(intptr_t)v10625;
	i8 v10627 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10627 = v10626;

endsub:;
}

// reduce_94 workspace at ws+3008 length ws+0
void f579_reduce_94(void) {

	i8 v10628 = (i8)(intptr_t)(ws+2928);
	i8 v10629 = *(i8*)(intptr_t)v10628;
	i8 v10630 = (i8)(intptr_t)(ws+2944);
	i8 v10631 = *(i8*)(intptr_t)v10630;
	i8 v10632 = v10631+(+16);
	*(i8*)(intptr_t)v10632 = v10629;

	i8 v10633 = (i8)(intptr_t)(ws+2944);
	i8 v10634 = *(i8*)(intptr_t)v10633;
	i8 v10635 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10635 = v10634;

	i1 v10636 = (i1)+44;
	i8 v10637 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10637, v10636);

endsub:;
}

// reduce_95 workspace at ws+3008 length ws+0
void f580_reduce_95(void) {

	i8 v10638 = (i8)(intptr_t)(ws+1224);
	i8 v10639 = *(i8*)(intptr_t)v10638;
	i8 v10640 = v10639+(+16);
	i8 v10641 = (i8)(intptr_t)(ws+2944);
	i8 v10642 = *(i8*)(intptr_t)v10641;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10643;
	f195_AddSymbol(&v10643, v10642, v10640);
	i8 v10644 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10644 = v10643;

	i1 v10645 = (i1)+28;
	i8 v10646 = (i8)(intptr_t)(ws+2920);
	i8 v10647 = *(i8*)(intptr_t)v10646;
	i8 v10648 = v10647+(+46);
	*(i1*)(intptr_t)v10648 = v10645;

	i8 v10649 = (i8)(intptr_t)(ws+1224);
	i8 v10650 = *(i8*)(intptr_t)v10649;
	i8 v10651 = (i8)(intptr_t)(ws+2920);
	i8 v10652 = *(i8*)(intptr_t)v10651;
	i8 v10653 = (i8)(intptr_t)(ws+2928);
	i8 v10654 = *(i8*)(intptr_t)v10653;

	void f440_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	f440_InitVariable(v10654, v10652, v10650);

	i1 v10655 = (i1)+6;
	i8 v10656 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10656, v10655);

endsub:;
}

// reduce_96 workspace at ws+3008 length ws+0
void f581_reduce_96(void) {

	i8 v10657 = (i8)(intptr_t)(ws+72);
	i8 v10658 = *(i8*)(intptr_t)v10657;
	i8 v10659 = v10658+(+42);
	i2 v10660 = *(i2*)(intptr_t)v10659;
	i8 v10661 = (i8)(intptr_t)(ws+72);
	i8 v10662 = *(i8*)(intptr_t)v10661;
	i8 v10663 = v10662+(+41);
	i1 v10664 = *(i1*)(intptr_t)v10663;

	void f214_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v10665;
	f214_ArchAlignUp(&v10665, v10664, v10660);
	i8 v10666 = (i8)(intptr_t)(ws+72);
	i8 v10667 = *(i8*)(intptr_t)v10666;
	i8 v10668 = v10667+(+44);
	*(i2*)(intptr_t)v10668 = v10665;

	i1 v10669 = (i1)+64;
	i8 v10670 = (i8)(intptr_t)(ws+2952);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10670, v10669);

	i1 v10671 = (i1)+10;
	i8 v10672 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10672, v10671);

	i1 v10673 = (i1)+20;
	i8 v10674 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10674, v10673);

endsub:;
}

// reduce_97 workspace at ws+3008 length ws+0
void f582_reduce_97(void) {

	i8 v10675 = (i8)(intptr_t)(ws+2928);
	i8 v10676 = *(i8*)(intptr_t)v10675;
	i8 v10677 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10677 = v10676;

	i8 v10678 = (i8)(intptr_t)(ws+72);
	i8 v10679 = *(i8*)(intptr_t)v10678;
	i8 v10680 = v10679+(+46);
	i1 v10681 = *(i1*)(intptr_t)v10680;
	i1 v10682 = (i1)+0;
	if (v10681==v10682) goto c02_092c; else goto c02_092d;

c02_092d:;

	i8 v10683 = (i8)(intptr_t)(ws+72);
	i8 v10684 = *(i8*)(intptr_t)v10683;
	i8 v10685 = v10684+(+46);
	i1 v10686 = *(i1*)(intptr_t)v10685;
	i1 v10687 = (i1)+30;
	if (v10686==v10687) goto c02_092c; else goto c02_092b;

c02_092b:;


	void f471_SymbolRedeclarationError(void);
	f471_SymbolRedeclarationError();

	goto c02_0926;

c02_092c:;

c02_0926:;

	i8 v10688 = (i8)(intptr_t)(ws+72);
	i8 v10689 = *(i8*)(intptr_t)v10688;
	i8 v10690 = v10689+(+40);
	i1 v10691 = *(i1*)(intptr_t)v10690;
	i1 v10692 = (i1)+0;
	if (v10691==v10692) goto c02_0934; else goto c02_0935;

c02_0935:;

	i8 v10693 = (i8)(intptr_t)(ws+72);
	i8 v10694 = *(i8*)(intptr_t)v10693;
	i8 v10695 = v10694+(+40);
	i1 v10696 = *(i1*)(intptr_t)v10695;
	i1 v10697 = (i1)+1;
	if (v10696==v10697) goto c02_0934; else goto c02_0933;

c02_0933:;


	void f471_SymbolRedeclarationError(void);
	f471_SymbolRedeclarationError();

	goto c02_092e;

c02_0934:;

c02_092e:;

	i1 v10698 = (i1)+30;
	i8 v10699 = (i8)(intptr_t)(ws+72);
	i8 v10700 = *(i8*)(intptr_t)v10699;
	i8 v10701 = v10700+(+46);
	*(i1*)(intptr_t)v10701 = v10698;

	i1 v10702 = (i1)+5;
	i8 v10703 = (i8)(intptr_t)(ws+72);
	i8 v10704 = *(i8*)(intptr_t)v10703;
	i8 v10705 = v10704+(+40);
	*(i1*)(intptr_t)v10705 = v10702;

endsub:;
}
const i1 c02_s01eb[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };

// reduce_98 workspace at ws+3008 length ws+0
void f583_reduce_98(void) {

	i8 v10706 = (i8)(intptr_t)(ws+2928);
	i8 v10707 = *(i8*)(intptr_t)v10706;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10707);

	i8 v10708 = (i8)(intptr_t)(ws+2928);
	i8 v10709 = *(i8*)(intptr_t)v10708;

	void f206_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10710;
	f206_IsRecord(&v10710, v10709);
	i1 v10711 = (i1)+0;
	if (v10710==v10711) goto c02_0939; else goto c02_093a;

c02_0939:;


	void f59_StartError(void);
	f59_StartError();

	i8 v10712 = (i8)(intptr_t)(ws+2928);
	i8 v10713 = *(i8*)(intptr_t)v10712;
	i8 v10714 = v10713+(+48);
	i8 v10715 = *(i8*)(intptr_t)v10714;

	void f11_print(i8 /* ptr */);
	f11_print(v10715);

	i8 v10716 = (i8)(intptr_t)c02_s01eb;

	void f11_print(i8 /* ptr */);
	f11_print(v10716);


	void f60_EndError(void);
	f60_EndError();

	goto c02_0936;

c02_093a:;

c02_0936:;

	i8 v10717 = (i8)(intptr_t)(ws+2928);
	i8 v10718 = *(i8*)(intptr_t)v10717;
	i8 v10719 = v10718+(+41);
	i1 v10720 = *(i1*)(intptr_t)v10719;
	i8 v10721 = (i8)(intptr_t)(ws+72);
	i8 v10722 = *(i8*)(intptr_t)v10721;
	i8 v10723 = v10722+(+41);
	*(i1*)(intptr_t)v10723 = v10720;

	i8 v10724 = (i8)(intptr_t)(ws+2928);
	i8 v10725 = *(i8*)(intptr_t)v10724;
	i8 v10726 = v10725+(+42);
	i2 v10727 = *(i2*)(intptr_t)v10726;
	i8 v10728 = (i8)(intptr_t)(ws+72);
	i8 v10729 = *(i8*)(intptr_t)v10728;
	i8 v10730 = v10729+(+42);
	*(i2*)(intptr_t)v10730 = v10727;

	i8 v10731 = (i8)(intptr_t)(ws+2928);
	i8 v10732 = *(i8*)(intptr_t)v10731;
	i8 v10733 = (i8)(intptr_t)(ws+72);
	i8 v10734 = *(i8*)(intptr_t)v10733;
	i8 v10735 = v10734+(+16);
	*(i8*)(intptr_t)v10735 = v10732;

endsub:;
}

// reduce_99 workspace at ws+3008 length ws+0
void f584_reduce_99(void) {

	i8 v10736 = (i8)(intptr_t)(ws+2936);
	i8 v10737 = *(i8*)(intptr_t)v10736;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10737);

	i1 v10738 = (i1)+28;
	i8 v10739 = (i8)(intptr_t)(ws+2960);
	i8 v10740 = *(i8*)(intptr_t)v10739;
	i8 v10741 = v10740+(+46);
	*(i1*)(intptr_t)v10741 = v10738;

	i8 v10742 = (i8)(intptr_t)(ws+2936);
	i8 v10743 = *(i8*)(intptr_t)v10742;
	i8 v10744 = (i8)(intptr_t)(ws+2960);
	i8 v10745 = *(i8*)(intptr_t)v10744;
	*(i8*)(intptr_t)v10745 = v10743;

	i8 v10746 = (i8)(intptr_t)(ws+72);
	i8 v10747 = *(i8*)(intptr_t)v10746;
	i8 v10748 = v10747+(+41);
	i1 v10749 = *(i1*)(intptr_t)v10748;
	i8 v10750 = (i8)(intptr_t)(ws+2936);
	i8 v10751 = *(i8*)(intptr_t)v10750;
	i8 v10752 = v10751+(+41);
	i1 v10753 = *(i1*)(intptr_t)v10752;
	if (v10749<v10753) goto c02_093e; else goto c02_093f;

c02_093e:;

	i8 v10754 = (i8)(intptr_t)(ws+2936);
	i8 v10755 = *(i8*)(intptr_t)v10754;
	i8 v10756 = v10755+(+41);
	i1 v10757 = *(i1*)(intptr_t)v10756;
	i8 v10758 = (i8)(intptr_t)(ws+72);
	i8 v10759 = *(i8*)(intptr_t)v10758;
	i8 v10760 = v10759+(+41);
	*(i1*)(intptr_t)v10760 = v10757;

	goto c02_093b;

c02_093f:;

c02_093b:;

	i8 v10761 = (i8)(intptr_t)(ws+72);
	i8 v10762 = *(i8*)(intptr_t)v10761;
	i8 v10763 = (i8)(intptr_t)(ws+2960);
	i8 v10764 = *(i8*)(intptr_t)v10763;
	i8 v10765 = (i8)(intptr_t)(ws+2952);
	i2 v10766 = *(i2*)(intptr_t)v10765;

	void f218_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	f218_ArchInitMember(v10766, v10764, v10762);

	i1 v10767 = (i1)+6;
	i8 v10768 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10768, v10767);

	i1 v10769 = (i1)+22;
	i8 v10770 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10770, v10769);

endsub:;
}

// reduce_100 workspace at ws+3008 length ws+0
void f585_reduce_100(void) {

	i8 v10771 = (i8)(intptr_t)(ws+72);
	i8 v10772 = *(i8*)(intptr_t)v10771;
	i8 v10773 = v10772+(+42);
	i2 v10774 = *(i2*)(intptr_t)v10773;
	i8 v10775 = (i8)(intptr_t)(ws+2920);
	*(i2*)(intptr_t)v10775 = v10774;

endsub:;
}

// reduce_101 workspace at ws+3008 length ws+0
void f586_reduce_101(void) {

	i8 v10776 = (i8)(intptr_t)(ws+2936);
	i4 v10777 = *(i4*)(intptr_t)v10776;
	i2 v10778 = (s2)(s4)v10777;
	i8 v10779 = (i8)(intptr_t)(ws+2920);
	*(i2*)(intptr_t)v10779 = v10778;

	i1 v10780 = (i1)+16;
	i8 v10781 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10781, v10780);

	i1 v10782 = (i1)+4;
	i8 v10783 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10783, v10782);

endsub:;
}

// reduce_102 workspace at ws+3008 length ws+0
void f587_reduce_102(void) {

	i8 v10784 = (i8)(intptr_t)(ws+72);
	i8 v10785 = *(i8*)(intptr_t)v10784;
	i8 v10786 = (i8)(intptr_t)(ws+2928);
	i8 v10787 = *(i8*)(intptr_t)v10786;

	void f195_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	i8 v10788;
	f195_AddSymbol(&v10788, v10787, v10785);
	i8 v10789 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10789 = v10788;

	i8 v10790 = (i8)(intptr_t)(ws+72);
	i8 v10791 = *(i8*)(intptr_t)v10790;
	i8 v10792 = v10791+(+24);
	i1 v10793 = *(i1*)(intptr_t)v10792;
	i1 v10794 = v10793+(+1);
	i8 v10795 = (i8)(intptr_t)(ws+72);
	i8 v10796 = *(i8*)(intptr_t)v10795;
	i8 v10797 = v10796+(+24);
	*(i1*)(intptr_t)v10797 = v10794;

endsub:;
}

// reduce_103 workspace at ws+3008 length ws+0
void f588_reduce_103(void) {


	void f473_CheckEndOfInitialiser(void);
	f473_CheckEndOfInitialiser();


	void f141_MidEndinit(i8* /* m */);
	i8 v10798;
	f141_MidEndinit(&v10798);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10798);

	i1 v10799 = (i1)+31;
	i8 v10800 = (i8)(intptr_t)(ws+2952);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10800, v10799);

	i1 v10801 = (i1)+32;
	i8 v10802 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10802, v10801);

	i1 v10803 = (i1)+22;
	i8 v10804 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10804, v10803);

endsub:;
}
const i1 c02_s01ec[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
const i1 c02_s01ed[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };

// reduce_104 workspace at ws+3008 length ws+16
void f589_reduce_104(void) {

	i8 v10805 = (i8)(intptr_t)(ws+2936);
	i8 v10806 = *(i8*)(intptr_t)v10805;

	void f198_CheckNotPartialType(i8 /* type */);
	f198_CheckNotPartialType(v10806);

	i1 v10807 = (i1)+28;
	i8 v10808 = (i8)(intptr_t)(ws+2952);
	i8 v10809 = *(i8*)(intptr_t)v10808;
	i8 v10810 = v10809+(+46);
	*(i1*)(intptr_t)v10810 = v10807;

	i8 v10811 = (i8)(intptr_t)(ws+2936);
	i8 v10812 = *(i8*)(intptr_t)v10811;
	i8 v10813 = (i8)(intptr_t)(ws+2952);
	i8 v10814 = *(i8*)(intptr_t)v10813;
	*(i8*)(intptr_t)v10814 = v10812;

	i8 v10815 = (i8)(intptr_t)(ws+40);
	i8 v10816 = *(i8*)(intptr_t)v10815;
	i8 v10817 = (i8)(intptr_t)(ws+2952);
	i8 v10818 = *(i8*)(intptr_t)v10817;
	i8 v10819 = v10818+(+8);
	*(i8*)(intptr_t)v10819 = v10816;

	i8 v10820 = (i8)+8;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10821;
	f31_Alloc(&v10821, v10820);
	i8 v10822 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10822 = v10821;

	i8 v10823 = (i8)(intptr_t)(ws+3008);
	i8 v10824 = *(i8*)(intptr_t)v10823;
	i8 v10825 = (i8)(intptr_t)(ws+2952);
	i8 v10826 = *(i8*)(intptr_t)v10825;
	i8 v10827 = v10826+(+24);
	*(i8*)(intptr_t)v10827 = v10824;

	i1 v10828 = (i1)+3;
	i8 v10829 = (i8)(intptr_t)(ws+3008);
	i8 v10830 = *(i8*)(intptr_t)v10829;
	*(i1*)(intptr_t)v10830 = v10828;

	i1 v10831 = (i1)+97;
	i8 v10832 = (i8)(intptr_t)(ws+3008);
	i8 v10833 = *(i8*)(intptr_t)v10832;
	i8 v10834 = v10833+(+1);
	*(i1*)(intptr_t)v10834 = v10831;


	void f209_AllocLabel(i2* /* label */);
	i2 v10835;
	f209_AllocLabel(&v10835);
	i4 v10836 = v10835;
	i1 v10837 = (i1)+16;
	i8 v10838 = (i8)(intptr_t)(ws+3008);
	i8 v10839 = *(i8*)(intptr_t)v10838;
	i8 v10840 = v10839+(+2);

	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v10841;
	f13_UIToA(&v10841, v10840, v10837, v10836);
	i8 v10842 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10842 = v10841;

	i8 v10843 = (i8)(intptr_t)(ws+2936);
	i8 v10844 = *(i8*)(intptr_t)v10843;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v10845;
	f201_IsArray(&v10845, v10844);
	i1 v10846 = (i1)+0;
	if (v10845==v10846) goto c02_0947; else goto c02_0946;

c02_0947:;

	i8 v10847 = (i8)(intptr_t)(ws+2936);
	i8 v10848 = *(i8*)(intptr_t)v10847;

	void f206_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10849;
	f206_IsRecord(&v10849, v10848);
	i1 v10850 = (i1)+0;
	if (v10849==v10850) goto c02_0945; else goto c02_0946;

c02_0945:;

	i8 v10851 = (i8)(intptr_t)c02_s01ec;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10851);

	goto c02_0940;

c02_0946:;

c02_0940:;

	i8 v10852 = (i8)(intptr_t)(ws+2936);
	i8 v10853 = *(i8*)(intptr_t)v10852;

	void f206_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10854;
	f206_IsRecord(&v10854, v10853);
	i1 v10855 = (i1)+0;
	if (v10854==v10855) goto c02_094e; else goto c02_094f;

c02_094f:;

	i8 v10856 = (i8)(intptr_t)(ws+2936);
	i8 v10857 = *(i8*)(intptr_t)v10856;
	i8 v10858 = v10857+(+16);
	i8 v10859 = *(i8*)(intptr_t)v10858;
	i8 v10860 = (i8)+0;
	if (v10859==v10860) goto c02_094e; else goto c02_094d;

c02_094d:;

	i8 v10861 = (i8)(intptr_t)c02_s01ed;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10861);

	goto c02_0948;

c02_094e:;

c02_0948:;

	i8 v10862 = (i8)(intptr_t)(ws+2936);
	i8 v10863 = *(i8*)(intptr_t)v10862;

	void f206_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10864;
	f206_IsRecord(&v10864, v10863);
	i1 v10865 = (i1)+0;
	if (v10864==v10865) goto c02_0954; else goto c02_0953;

c02_0953:;

	i8 v10866 = (i8)(intptr_t)(ws+2936);
	i8 v10867 = *(i8*)(intptr_t)v10866;
	i8 v10868 = *(i8*)(intptr_t)v10867;
	i8 v10869 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v10869 = v10868;

	goto c02_0950;

c02_0954:;

c02_0950:;

	i8 v10870 = (i8)(intptr_t)(ws+2936);
	i8 v10871 = *(i8*)(intptr_t)v10870;
	i8 v10872 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10872 = v10871;

	i2 v10873 = (i2)+0;
	i8 v10874 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v10874 = v10873;

	i2 v10875 = (i2)+0;
	i8 v10876 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v10876 = v10875;

	i8 v10877 = (i8)(intptr_t)(ws+2952);
	i8 v10878 = *(i8*)(intptr_t)v10877;

	void f118_MidStartinit(i8* /* m */, i8 /* sym */);
	i8 v10879;
	f118_MidStartinit(&v10879, v10878);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10879);

	i1 v10880 = (i1)+6;
	i8 v10881 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10881, v10880);

	i1 v10882 = (i1)+2;
	i8 v10883 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10883, v10882);

endsub:;
}
const i1 c02_s01ee[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
const i1 c02_s01ef[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };

// reduce_105 workspace at ws+3008 length ws+18
void f590_reduce_105(void) {


	void f477_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	i8 v10884;
	i8 v10885;
	f477_GetInitedMemberChecked(&v10884, &v10885);

	i8 v10886 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10886 = v10885;

	i8 v10887 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10887 = v10884;

	i8 v10888 = (i8)(intptr_t)(ws+3016);
	i8 v10889 = *(i8*)(intptr_t)v10888;
	i8 v10890 = v10889+(+41);
	i1 v10891 = *(i1*)(intptr_t)v10890;

	void f475_AlignTo(i1 /* alignment */);
	f475_AlignTo(v10891);

	i8 v10892 = (i8)(intptr_t)(ws+3016);
	i8 v10893 = *(i8*)(intptr_t)v10892;
	i8 v10894 = v10893+(+42);
	i2 v10895 = *(i2*)(intptr_t)v10894;
	i8 v10896 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v10896 = v10895;

	i8 v10897 = (i8)(intptr_t)(ws+2928);
	i8 v10898 = *(i8*)(intptr_t)v10897;
	i8 v10899 = v10898+(+58);
	i1 v10900 = *(i1*)(intptr_t)v10899;

	if (v10900 != +40) goto c02_0956;

	i8 v10901 = (i8)(intptr_t)(ws+3016);
	i8 v10902 = *(i8*)(intptr_t)v10901;

	void f203_IsNum(i1* /* result */, i8 /* type */);
	i1 v10903;
	f203_IsNum(&v10903, v10902);
	i1 v10904 = (i1)+0;
	if (v10903==v10904) goto c02_095a; else goto c02_095b;

c02_095a:;

	i8 v10905 = (i8)(intptr_t)c02_s01ee;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10905);

	goto c02_0957;

c02_095b:;

c02_0957:;

	i8 v10906 = (i8)(intptr_t)(ws+3024);
	i2 v10907 = *(i2*)(intptr_t)v10906;
	i1 v10908 = v10907;
	i8 v10909 = (i8)(intptr_t)(ws+2928);
	i8 v10910 = *(i8*)(intptr_t)v10909;
	i4 v10911 = *(i4*)(intptr_t)v10910;

	void f103_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	i8 v10912;
	f103_MidInit(&v10912, v10911, v10908);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10912);

	goto c02_0955;

c02_0956:;

	if (v10900 != +41) goto c02_095c;

	i8 v10913 = (i8)(intptr_t)(ws+3016);
	i8 v10914 = *(i8*)(intptr_t)v10913;

	void f202_IsPtr(i1* /* result */, i8 /* type */);
	i1 v10915;
	f202_IsPtr(&v10915, v10914);
	i1 v10916 = (i1)+0;
	if (v10915==v10916) goto c02_0962; else goto c02_0964;

c02_0964:;

	i8 v10917 = (i8)(intptr_t)(ws+3016);
	i8 v10918 = *(i8*)(intptr_t)v10917;
	i8 v10919 = *(i8*)(intptr_t)v10918;
	i8 v10920 = (i8)(intptr_t)(ws+1040);
	i8 v10921 = *(i8*)(intptr_t)v10920;
	if (v10919==v10921) goto c02_0963; else goto c02_0962;

c02_0962:;

	i8 v10922 = (i8)(intptr_t)c02_s01ef;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v10922);

	goto c02_095d;

c02_0963:;

c02_095d:;

	i8 v10923 = (i8)(intptr_t)(ws+2928);
	i8 v10924 = *(i8*)(intptr_t)v10923;
	i8 v10925 = *(i8*)(intptr_t)v10924;

	void f98_MidInits(i8* /* m */, i8 /* text */);
	i8 v10926;
	f98_MidInits(&v10926, v10925);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v10926);

	goto c02_0955;

c02_095c:;


	void f468_parser_i_constant_error(void);
	f468_parser_i_constant_error();

c02_0955:;


	i8 v10927 = (i8)(intptr_t)(ws+2928);
	i8 v10928 = *(i8*)(intptr_t)v10927;

	void f56_Discard(i8 /* node */);
	f56_Discard(v10928);

	i8 v10929 = (i8)(intptr_t)(ws+1240);
	i2 v10930 = *(i2*)(intptr_t)v10929;
	i8 v10931 = (i8)(intptr_t)(ws+3024);
	i2 v10932 = *(i2*)(intptr_t)v10931;
	i2 v10933 = v10930+v10932;
	i8 v10934 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v10934 = v10933;

	i8 v10935 = (i8)(intptr_t)(ws+1242);
	i2 v10936 = *(i2*)(intptr_t)v10935;
	i8 v10937 = (i8)(intptr_t)(ws+3024);
	i2 v10938 = *(i2*)(intptr_t)v10937;
	i2 v10939 = v10936+v10938;
	i8 v10940 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v10940 = v10939;

endsub:;
}

// reduce_106 workspace at ws+3008 length ws+0
void f591_reduce_106(void) {


	void f473_CheckEndOfInitialiser(void);
	f473_CheckEndOfInitialiser();

	i8 v10941 = (i8)(intptr_t)(ws+2944);
	i8 v10942 = *(i8*)(intptr_t)v10941;
	i8 v10943 = *(i8*)(intptr_t)v10942;
	i8 v10944 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10944 = v10943;

	i8 v10945 = (i8)(intptr_t)(ws+2944);
	i8 v10946 = *(i8*)(intptr_t)v10945;
	i8 v10947 = v10946+(+8);
	i8 v10948 = *(i8*)(intptr_t)v10947;
	i8 v10949 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v10949 = v10948;

	i8 v10950 = (i8)(intptr_t)(ws+2944);
	i8 v10951 = *(i8*)(intptr_t)v10950;
	i8 v10952 = v10951+(+16);
	i2 v10953 = *(i2*)(intptr_t)v10952;
	i8 v10954 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v10954 = v10953;

	i8 v10955 = (i8)(intptr_t)(ws+2944);
	i8 v10956 = *(i8*)(intptr_t)v10955;

	void f32_Free(i8 /* block */);
	f32_Free(v10956);

	i1 v10957 = (i1)+32;
	i8 v10958 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v10958, v10957);

endsub:;
}
const i1 c02_s01f0[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };

// reduce_107 workspace at ws+3008 length ws+16
void f592_reduce_107(void) {


	void f477_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	i8 v10959;
	i8 v10960;
	f477_GetInitedMemberChecked(&v10959, &v10960);

	i8 v10961 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10961 = v10960;

	i8 v10962 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10962 = v10959;

	i8 v10963 = (i8)(intptr_t)(ws+3016);
	i8 v10964 = *(i8*)(intptr_t)v10963;
	i8 v10965 = v10964+(+41);
	i1 v10966 = *(i1*)(intptr_t)v10965;

	void f475_AlignTo(i1 /* alignment */);
	f475_AlignTo(v10966);

	i8 v10967 = (i8)+18;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v10968;
	f31_Alloc(&v10968, v10967);
	i8 v10969 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10969 = v10968;

	i8 v10970 = (i8)(intptr_t)(ws+72);
	i8 v10971 = *(i8*)(intptr_t)v10970;
	i8 v10972 = (i8)(intptr_t)(ws+2920);
	i8 v10973 = *(i8*)(intptr_t)v10972;
	*(i8*)(intptr_t)v10973 = v10971;

	i8 v10974 = (i8)(intptr_t)(ws+1232);
	i8 v10975 = *(i8*)(intptr_t)v10974;
	i8 v10976 = (i8)(intptr_t)(ws+2920);
	i8 v10977 = *(i8*)(intptr_t)v10976;
	i8 v10978 = v10977+(+8);
	*(i8*)(intptr_t)v10978 = v10975;

	i8 v10979 = (i8)(intptr_t)(ws+1240);
	i2 v10980 = *(i2*)(intptr_t)v10979;
	i8 v10981 = (i8)(intptr_t)(ws+2920);
	i8 v10982 = *(i8*)(intptr_t)v10981;
	i8 v10983 = v10982+(+16);
	*(i2*)(intptr_t)v10983 = v10980;

	i8 v10984 = (i8)(intptr_t)(ws+3016);
	i8 v10985 = *(i8*)(intptr_t)v10984;
	i8 v10986 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v10986 = v10985;

	i2 v10987 = (i2)+0;
	i8 v10988 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v10988 = v10987;

	i8 v10989 = (i8)(intptr_t)(ws+3016);
	i8 v10990 = *(i8*)(intptr_t)v10989;

	void f206_IsRecord(i1* /* result */, i8 /* type */);
	i1 v10991;
	f206_IsRecord(&v10991, v10990);
	i1 v10992 = (i1)+0;
	if (v10991==v10992) goto c02_0969; else goto c02_0968;

c02_0968:;

	i8 v10993 = (i8)(intptr_t)(ws+3016);
	i8 v10994 = *(i8*)(intptr_t)v10993;
	i8 v10995 = *(i8*)(intptr_t)v10994;
	i8 v10996 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v10996 = v10995;

	goto c02_0965;

c02_0969:;

	i8 v10997 = (i8)(intptr_t)(ws+3016);
	i8 v10998 = *(i8*)(intptr_t)v10997;

	void f201_IsArray(i1* /* result */, i8 /* type */);
	i1 v10999;
	f201_IsArray(&v10999, v10998);
	i1 v11000 = (i1)+0;
	if (v10999==v11000) goto c02_096d; else goto c02_096c;

c02_096c:;

	i8 v11001 = (i8)+0;
	i8 v11002 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v11002 = v11001;

	goto c02_0965;

c02_096d:;

	i8 v11003 = (i8)(intptr_t)c02_s01f0;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v11003);

c02_0965:;

endsub:;
}

// reduce_108 workspace at ws+3008 length ws+0
void f593_reduce_108(void) {


	void f116_MidAsmend(i8* /* m */);
	i8 v11004;
	f116_MidAsmend(&v11004);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11004);

	i1 v11005 = (i1)+22;
	i8 v11006 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11006, v11005);

endsub:;
}

// reduce_109 workspace at ws+3008 length ws+0
void f594_reduce_109(void) {


	void f128_MidAsmstart(i8* /* m */);
	i8 v11007;
	f128_MidAsmstart(&v11007);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11007);

endsub:;
}

// reduce_110 workspace at ws+3008 length ws+0
void f595_reduce_110(void) {

	i8 v11008 = (i8)(intptr_t)(ws+2928);
	i8 v11009 = *(i8*)(intptr_t)v11008;

	void f133_MidAsmtext(i8* /* m */, i8 /* text */);
	i8 v11010;
	f133_MidAsmtext(&v11010, v11009);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11010);

	i8 v11011 = (i8)(intptr_t)(ws+2928);
	i8 v11012 = *(i8*)(intptr_t)v11011;

	void f32_Free(i8 /* block */);
	f32_Free(v11012);

endsub:;
}

// reduce_111 workspace at ws+3008 length ws+0
void f596_reduce_111(void) {

	i8 v11013 = (i8)(intptr_t)(ws+2928);
	i4 v11014 = *(i4*)(intptr_t)v11013;

	void f109_MidAsmvalue(i8* /* m */, i4 /* value */);
	i8 v11015;
	f109_MidAsmvalue(&v11015, v11014);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11015);

endsub:;
}
const i1 c02_s01f1[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };

// reduce_112 workspace at ws+3008 length ws+1
void f597_reduce_112(void) {

	i8 v11016 = (i8)(intptr_t)(ws+2928);
	i8 v11017 = *(i8*)(intptr_t)v11016;
	i8 v11018 = v11017+(+46);
	i1 v11019 = *(i1*)(intptr_t)v11018;
	i8 v11020 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v11020 = v11019;

	i8 v11021 = (i8)(intptr_t)(ws+3008);
	i1 v11022 = *(i1*)(intptr_t)v11021;
	i1 v11023 = (i1)+28;
	if (v11022==v11023) goto c02_0973; else goto c02_0975;

c02_0975:;

	i8 v11024 = (i8)(intptr_t)(ws+3008);
	i1 v11025 = *(i1*)(intptr_t)v11024;
	i1 v11026 = (i1)+25;
	if (v11025==v11026) goto c02_0973; else goto c02_0974;

c02_0973:;

	i8 v11027 = (i8)(intptr_t)(ws+3008);
	i1 v11028 = *(i1*)(intptr_t)v11027;
	i1 v11029 = (i1)+25;
	if (v11028==v11029) goto c02_0979; else goto c02_097a;

c02_0979:;

	i8 v11030 = (i8)(intptr_t)(ws+40);
	i8 v11031 = *(i8*)(intptr_t)v11030;
	i8 v11032 = (i8)(intptr_t)(ws+2928);
	i8 v11033 = *(i8*)(intptr_t)v11032;
	i8 v11034 = *(i8*)(intptr_t)v11033;

	void f181_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	f181_EmitterReferenceSubroutine(v11034, v11031);

	goto c02_0976;

c02_097a:;

c02_0976:;

	i8 v11035 = (i8)(intptr_t)(ws+2928);
	i8 v11036 = *(i8*)(intptr_t)v11035;

	void f123_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	i8 v11037;
	f123_MidAsmsymbol(&v11037, v11036);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11037);

	goto c02_096e;

c02_0974:;

	i8 v11038 = (i8)(intptr_t)(ws+3008);
	i1 v11039 = *(i1*)(intptr_t)v11038;
	i1 v11040 = (i1)+7;
	if (v11039==v11040) goto c02_097d; else goto c02_097e;

c02_097d:;

	i8 v11041 = (i8)(intptr_t)(ws+2928);
	i8 v11042 = *(i8*)(intptr_t)v11041;
	i4 v11043 = *(i4*)(intptr_t)v11042;

	void f109_MidAsmvalue(i8* /* m */, i4 /* value */);
	i8 v11044;
	f109_MidAsmvalue(&v11044, v11043);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11044);

	goto c02_096e;

c02_097e:;

	i8 v11045 = (i8)(intptr_t)c02_s01f1;

	void f61_SimpleError(i8 /* message */);
	f61_SimpleError(v11045);

c02_096e:;

endsub:;
}

// reduce_119 workspace at ws+3008 length ws+0
void f598_reduce_119(void) {

	i1 v11046 = (i1)+26;
	i8 v11047 = (i8)(intptr_t)(ws+2944);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11047, v11046);

endsub:;
}

// reduce_123 workspace at ws+3008 length ws+0
void f599_reduce_123(void) {

	i1 v11048 = (i1)+22;
	i8 v11049 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11049, v11048);

endsub:;
}

// reduce_124 workspace at ws+3008 length ws+0
void f600_reduce_124(void) {

	i1 v11050 = (i1)+22;
	i8 v11051 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11051, v11050);

endsub:;
}

// reduce_125 workspace at ws+3008 length ws+0
void f601_reduce_125(void) {

	i1 v11052 = (i1)+22;
	i8 v11053 = (i8)(intptr_t)(ws+2928);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11053, v11052);

endsub:;
}

// reduce_131 workspace at ws+3008 length ws+0
void f602_reduce_131(void) {

	i1 v11054 = (i1)+44;
	i8 v11055 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11055, v11054);

endsub:;
}

// reduce_134 workspace at ws+3008 length ws+0
void f603_reduce_134(void) {

	i1 v11056 = (i1)+44;
	i8 v11057 = (i8)(intptr_t)(ws+2936);

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11057, v11056);

endsub:;
}

// yy_reduce workspace at ws+2912 length ws+94
void f484_yy_reduce(i2* p8898 /* yyact */, i1 p8899 /* yylookahead */, i2 p8900 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+2912) = p8900; /*yyruleno */
	*(i1*)(intptr_t)(ws+2914) = p8899; /*yylookahead */

	i8 v8901 = (i8)(intptr_t)(((i1*)c02_a835+0));
	i8 v8902 = (i8)(intptr_t)(ws+2912);
	i2 v8903 = *(i2*)(intptr_t)v8902;
	i1 v8904 = v8903;
	i8 v8905 = v8904;
	i8 v8906 = v8901+v8905;
	i1 v8907 = *(i1*)(intptr_t)v8906;
	i8 v8908 = (i8)(intptr_t)(ws+2918);
	*(i1*)(intptr_t)v8908 = v8907;

	i8 v8909 = (i8)(intptr_t)(ws+1248);
	i8 v8910 = *(i8*)(intptr_t)v8909;
	i8 v8911 = (i8)(intptr_t)(ws+2856);
	if (v8910==v8911) goto c02_0839; else goto c02_083a;

c02_0839:;


	void f482_yy_stack_overflow(void);
	f482_yy_stack_overflow();

	goto c02_0836;

c02_083a:;

c02_0836:;

	i8 v8912 = (i8)(intptr_t)(ws+2928);
	i8 v8913 = (i8)(intptr_t)(ws+2992);
	*(i8*)(intptr_t)v8913 = v8912;

	i8 v8914 = (i8)(intptr_t)(ws+2918);
	i1 v8915 = *(i1*)(intptr_t)v8914;
	i8 v8916 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v8916 = v8915;

c02_083d:;

	i8 v8917 = (i8)(intptr_t)(ws+3000);
	i1 v8918 = *(i1*)(intptr_t)v8917;
	i1 v8919 = (i1)+0;
	if (v8918==v8919) goto c02_0840; else goto c02_083f;

c02_083f:;

	i8 v8920 = (i8)(intptr_t)(ws+1248);
	i8 v8921 = *(i8*)(intptr_t)v8920;
	i8 v8922 = v8921+(+8);
	i8 v8923 = *(i8*)(intptr_t)v8922;
	i8 v8924 = (i8)(intptr_t)(ws+2992);
	i8 v8925 = *(i8*)(intptr_t)v8924;
	*(i8*)(intptr_t)v8925 = v8923;

	i8 v8926 = (i8)(intptr_t)(ws+1248);
	i8 v8927 = *(i8*)(intptr_t)v8926;
	i8 v8928 = v8927+(-16);
	i8 v8929 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v8929 = v8928;

	i8 v8930 = (i8)(intptr_t)(ws+2992);
	i8 v8931 = *(i8*)(intptr_t)v8930;
	i8 v8932 = v8931+(+8);
	i8 v8933 = (i8)(intptr_t)(ws+2992);
	*(i8*)(intptr_t)v8933 = v8932;

	i8 v8934 = (i8)(intptr_t)(ws+3000);
	i1 v8935 = *(i1*)(intptr_t)v8934;
	i1 v8936 = v8935+(-1);
	i8 v8937 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v8937 = v8936;

	goto c02_083d;

c02_0840:;
























































































































	i8 v11058 = (i8)(intptr_t)(ws+2912);
	i2 v11059 = *(i2*)(intptr_t)v11058;
	i1 v11060 = v11059;

	if (v11060 != +0) goto c02_0980;


	void f485_reduce_0(void);
	f485_reduce_0();

	goto c02_097f;

c02_0980:;

	if (v11060 != +1) goto c02_0981;


	void f486_reduce_1(void);
	f486_reduce_1();

	goto c02_097f;

c02_0981:;

	if (v11060 != +2) goto c02_0982;


	void f487_reduce_2(void);
	f487_reduce_2();

	goto c02_097f;

c02_0982:;

	if (v11060 != +3) goto c02_0983;


	void f488_reduce_3(void);
	f488_reduce_3();

	goto c02_097f;

c02_0983:;

	if (v11060 != +4) goto c02_0984;


	void f489_reduce_4(void);
	f489_reduce_4();

	goto c02_097f;

c02_0984:;

	if (v11060 != +5) goto c02_0985;


	void f490_reduce_5(void);
	f490_reduce_5();

	goto c02_097f;

c02_0985:;

	if (v11060 != +6) goto c02_0986;


	void f491_reduce_6(void);
	f491_reduce_6();

	goto c02_097f;

c02_0986:;

	if (v11060 != +7) goto c02_0987;


	void f492_reduce_7(void);
	f492_reduce_7();

	goto c02_097f;

c02_0987:;

	if (v11060 != +8) goto c02_0988;


	void f493_reduce_8(void);
	f493_reduce_8();

	goto c02_097f;

c02_0988:;

	if (v11060 != +9) goto c02_0989;


	void f494_reduce_9(void);
	f494_reduce_9();

	goto c02_097f;

c02_0989:;

	if (v11060 != +10) goto c02_098a;


	void f495_reduce_10(void);
	f495_reduce_10();

	goto c02_097f;

c02_098a:;

	if (v11060 != +11) goto c02_098b;


	void f496_reduce_11(void);
	f496_reduce_11();

	goto c02_097f;

c02_098b:;

	if (v11060 != +12) goto c02_098c;


	void f497_reduce_12(void);
	f497_reduce_12();

	goto c02_097f;

c02_098c:;

	if (v11060 != +13) goto c02_098d;


	void f498_reduce_13(void);
	f498_reduce_13();

	goto c02_097f;

c02_098d:;

	if (v11060 != +14) goto c02_098e;


	void f499_reduce_14(void);
	f499_reduce_14();

	goto c02_097f;

c02_098e:;

	if (v11060 != +15) goto c02_098f;


	void f500_reduce_15(void);
	f500_reduce_15();

	goto c02_097f;

c02_098f:;

	if (v11060 != +16) goto c02_0990;


	void f501_reduce_16(void);
	f501_reduce_16();

	goto c02_097f;

c02_0990:;

	if (v11060 != +17) goto c02_0991;


	void f502_reduce_17(void);
	f502_reduce_17();

	goto c02_097f;

c02_0991:;

	if (v11060 != +18) goto c02_0992;


	void f503_reduce_18(void);
	f503_reduce_18();

	goto c02_097f;

c02_0992:;

	if (v11060 != +19) goto c02_0993;


	void f504_reduce_19(void);
	f504_reduce_19();

	goto c02_097f;

c02_0993:;

	if (v11060 != +20) goto c02_0994;


	void f505_reduce_20(void);
	f505_reduce_20();

	goto c02_097f;

c02_0994:;

	if (v11060 != +21) goto c02_0995;


	void f506_reduce_21(void);
	f506_reduce_21();

	goto c02_097f;

c02_0995:;

	if (v11060 != +22) goto c02_0996;


	void f507_reduce_22(void);
	f507_reduce_22();

	goto c02_097f;

c02_0996:;

	if (v11060 != +23) goto c02_0997;


	void f508_reduce_23(void);
	f508_reduce_23();

	goto c02_097f;

c02_0997:;

	if (v11060 != +24) goto c02_0998;


	void f509_reduce_24(void);
	f509_reduce_24();

	goto c02_097f;

c02_0998:;

	if (v11060 != +25) goto c02_0999;


	void f510_reduce_25(void);
	f510_reduce_25();

	goto c02_097f;

c02_0999:;

	if (v11060 != +26) goto c02_099a;


	void f511_reduce_26(void);
	f511_reduce_26();

	goto c02_097f;

c02_099a:;

	if (v11060 != +27) goto c02_099b;


	void f512_reduce_27(void);
	f512_reduce_27();

	goto c02_097f;

c02_099b:;

	if (v11060 != +28) goto c02_099c;


	void f513_reduce_28(void);
	f513_reduce_28();

	goto c02_097f;

c02_099c:;

	if (v11060 != +29) goto c02_099d;


	void f514_reduce_29(void);
	f514_reduce_29();

	goto c02_097f;

c02_099d:;

	if (v11060 != +30) goto c02_099e;


	void f515_reduce_30(void);
	f515_reduce_30();

	goto c02_097f;

c02_099e:;

	if (v11060 != +31) goto c02_099f;


	void f516_reduce_31(void);
	f516_reduce_31();

	goto c02_097f;

c02_099f:;

	if (v11060 != +32) goto c02_09a0;


	void f517_reduce_32(void);
	f517_reduce_32();

	goto c02_097f;

c02_09a0:;

	if (v11060 != +33) goto c02_09a1;


	void f518_reduce_33(void);
	f518_reduce_33();

	goto c02_097f;

c02_09a1:;

	if (v11060 != +34) goto c02_09a2;


	void f519_reduce_34(void);
	f519_reduce_34();

	goto c02_097f;

c02_09a2:;

	if (v11060 != +35) goto c02_09a3;


	void f520_reduce_35(void);
	f520_reduce_35();

	goto c02_097f;

c02_09a3:;

	if (v11060 != +36) goto c02_09a4;


	void f521_reduce_36(void);
	f521_reduce_36();

	goto c02_097f;

c02_09a4:;

	if (v11060 != +37) goto c02_09a5;


	void f522_reduce_37(void);
	f522_reduce_37();

	goto c02_097f;

c02_09a5:;

	if (v11060 != +38) goto c02_09a6;


	void f523_reduce_38(void);
	f523_reduce_38();

	goto c02_097f;

c02_09a6:;

	if (v11060 != +39) goto c02_09a7;


	void f524_reduce_39(void);
	f524_reduce_39();

	goto c02_097f;

c02_09a7:;

	if (v11060 != +40) goto c02_09a8;


	void f525_reduce_40(void);
	f525_reduce_40();

	goto c02_097f;

c02_09a8:;

	if (v11060 != +41) goto c02_09a9;


	void f526_reduce_41(void);
	f526_reduce_41();

	goto c02_097f;

c02_09a9:;

	if (v11060 != +42) goto c02_09aa;


	void f527_reduce_42(void);
	f527_reduce_42();

	goto c02_097f;

c02_09aa:;

	if (v11060 != +43) goto c02_09ab;


	void f528_reduce_43(void);
	f528_reduce_43();

	goto c02_097f;

c02_09ab:;

	if (v11060 != +44) goto c02_09ac;


	void f529_reduce_44(void);
	f529_reduce_44();

	goto c02_097f;

c02_09ac:;

	if (v11060 != +45) goto c02_09ad;


	void f530_reduce_45(void);
	f530_reduce_45();

	goto c02_097f;

c02_09ad:;

	if (v11060 != +46) goto c02_09ae;


	void f531_reduce_46(void);
	f531_reduce_46();

	goto c02_097f;

c02_09ae:;

	if (v11060 != +47) goto c02_09af;


	void f532_reduce_47(void);
	f532_reduce_47();

	goto c02_097f;

c02_09af:;

	if (v11060 != +48) goto c02_09b0;


	void f533_reduce_48(void);
	f533_reduce_48();

	goto c02_097f;

c02_09b0:;

	if (v11060 != +49) goto c02_09b1;


	void f534_reduce_49(void);
	f534_reduce_49();

	goto c02_097f;

c02_09b1:;

	if (v11060 != +50) goto c02_09b2;


	void f535_reduce_50(void);
	f535_reduce_50();

	goto c02_097f;

c02_09b2:;

	if (v11060 != +51) goto c02_09b3;


	void f536_reduce_51(void);
	f536_reduce_51();

	goto c02_097f;

c02_09b3:;

	if (v11060 != +52) goto c02_09b4;


	void f537_reduce_52(void);
	f537_reduce_52();

	goto c02_097f;

c02_09b4:;

	if (v11060 != +53) goto c02_09b5;


	void f538_reduce_53(void);
	f538_reduce_53();

	goto c02_097f;

c02_09b5:;

	if (v11060 != +54) goto c02_09b6;


	void f539_reduce_54(void);
	f539_reduce_54();

	goto c02_097f;

c02_09b6:;

	if (v11060 != +55) goto c02_09b7;


	void f540_reduce_55(void);
	f540_reduce_55();

	goto c02_097f;

c02_09b7:;

	if (v11060 != +56) goto c02_09b8;


	void f541_reduce_56(void);
	f541_reduce_56();

	goto c02_097f;

c02_09b8:;

	if (v11060 != +57) goto c02_09b9;


	void f542_reduce_57(void);
	f542_reduce_57();

	goto c02_097f;

c02_09b9:;

	if (v11060 != +58) goto c02_09ba;


	void f543_reduce_58(void);
	f543_reduce_58();

	goto c02_097f;

c02_09ba:;

	if (v11060 != +59) goto c02_09bb;


	void f544_reduce_59(void);
	f544_reduce_59();

	goto c02_097f;

c02_09bb:;

	if (v11060 != +60) goto c02_09bc;


	void f545_reduce_60(void);
	f545_reduce_60();

	goto c02_097f;

c02_09bc:;

	if (v11060 != +61) goto c02_09bd;


	void f546_reduce_61(void);
	f546_reduce_61();

	goto c02_097f;

c02_09bd:;

	if (v11060 != +62) goto c02_09be;


	void f547_reduce_62(void);
	f547_reduce_62();

	goto c02_097f;

c02_09be:;

	if (v11060 != +63) goto c02_09bf;


	void f548_reduce_63(void);
	f548_reduce_63();

	goto c02_097f;

c02_09bf:;

	if (v11060 != +64) goto c02_09c0;


	void f549_reduce_64(void);
	f549_reduce_64();

	goto c02_097f;

c02_09c0:;

	if (v11060 != +65) goto c02_09c1;


	void f550_reduce_65(void);
	f550_reduce_65();

	goto c02_097f;

c02_09c1:;

	if (v11060 != +66) goto c02_09c2;


	void f551_reduce_66(void);
	f551_reduce_66();

	goto c02_097f;

c02_09c2:;

	if (v11060 != +67) goto c02_09c3;


	void f552_reduce_67(void);
	f552_reduce_67();

	goto c02_097f;

c02_09c3:;

	if (v11060 != +68) goto c02_09c4;


	void f553_reduce_68(void);
	f553_reduce_68();

	goto c02_097f;

c02_09c4:;

	if (v11060 != +69) goto c02_09c5;


	void f554_reduce_69(void);
	f554_reduce_69();

	goto c02_097f;

c02_09c5:;

	if (v11060 != +70) goto c02_09c6;


	void f555_reduce_70(void);
	f555_reduce_70();

	goto c02_097f;

c02_09c6:;

	if (v11060 != +71) goto c02_09c7;


	void f556_reduce_71(void);
	f556_reduce_71();

	goto c02_097f;

c02_09c7:;

	if (v11060 != +72) goto c02_09c8;


	void f557_reduce_72(void);
	f557_reduce_72();

	goto c02_097f;

c02_09c8:;

	if (v11060 != +73) goto c02_09c9;


	void f558_reduce_73(void);
	f558_reduce_73();

	goto c02_097f;

c02_09c9:;

	if (v11060 != +74) goto c02_09ca;


	void f559_reduce_74(void);
	f559_reduce_74();

	goto c02_097f;

c02_09ca:;

	if (v11060 != +75) goto c02_09cb;


	void f560_reduce_75(void);
	f560_reduce_75();

	goto c02_097f;

c02_09cb:;

	if (v11060 != +76) goto c02_09cc;


	void f561_reduce_76(void);
	f561_reduce_76();

	goto c02_097f;

c02_09cc:;

	if (v11060 != +77) goto c02_09cd;


	void f562_reduce_77(void);
	f562_reduce_77();

	goto c02_097f;

c02_09cd:;

	if (v11060 != +78) goto c02_09ce;


	void f563_reduce_78(void);
	f563_reduce_78();

	goto c02_097f;

c02_09ce:;

	if (v11060 != +79) goto c02_09cf;


	void f564_reduce_79(void);
	f564_reduce_79();

	goto c02_097f;

c02_09cf:;

	if (v11060 != +80) goto c02_09d0;


	void f565_reduce_80(void);
	f565_reduce_80();

	goto c02_097f;

c02_09d0:;

	if (v11060 != +81) goto c02_09d1;


	void f566_reduce_81(void);
	f566_reduce_81();

	goto c02_097f;

c02_09d1:;

	if (v11060 != +82) goto c02_09d2;


	void f567_reduce_82(void);
	f567_reduce_82();

	goto c02_097f;

c02_09d2:;

	if (v11060 != +83) goto c02_09d3;


	void f568_reduce_83(void);
	f568_reduce_83();

	goto c02_097f;

c02_09d3:;

	if (v11060 != +84) goto c02_09d4;


	void f569_reduce_84(void);
	f569_reduce_84();

	goto c02_097f;

c02_09d4:;

	if (v11060 != +85) goto c02_09d5;


	void f570_reduce_85(void);
	f570_reduce_85();

	goto c02_097f;

c02_09d5:;

	if (v11060 != +86) goto c02_09d6;


	void f571_reduce_86(void);
	f571_reduce_86();

	goto c02_097f;

c02_09d6:;

	if (v11060 != +87) goto c02_09d7;


	void f572_reduce_87(void);
	f572_reduce_87();

	goto c02_097f;

c02_09d7:;

	if (v11060 != +88) goto c02_09d8;


	void f573_reduce_88(void);
	f573_reduce_88();

	goto c02_097f;

c02_09d8:;

	if (v11060 != +89) goto c02_09d9;


	void f574_reduce_89(void);
	f574_reduce_89();

	goto c02_097f;

c02_09d9:;

	if (v11060 != +90) goto c02_09da;


	void f575_reduce_90(void);
	f575_reduce_90();

	goto c02_097f;

c02_09da:;

	if (v11060 != +91) goto c02_09db;


	void f576_reduce_91(void);
	f576_reduce_91();

	goto c02_097f;

c02_09db:;

	if (v11060 != +92) goto c02_09dc;


	void f577_reduce_92(void);
	f577_reduce_92();

	goto c02_097f;

c02_09dc:;

	if (v11060 != +93) goto c02_09dd;


	void f578_reduce_93(void);
	f578_reduce_93();

	goto c02_097f;

c02_09dd:;

	if (v11060 != +94) goto c02_09de;


	void f579_reduce_94(void);
	f579_reduce_94();

	goto c02_097f;

c02_09de:;

	if (v11060 != +95) goto c02_09df;


	void f580_reduce_95(void);
	f580_reduce_95();

	goto c02_097f;

c02_09df:;

	if (v11060 != +96) goto c02_09e0;


	void f581_reduce_96(void);
	f581_reduce_96();

	goto c02_097f;

c02_09e0:;

	if (v11060 != +97) goto c02_09e1;


	void f582_reduce_97(void);
	f582_reduce_97();

	goto c02_097f;

c02_09e1:;

	if (v11060 != +98) goto c02_09e2;


	void f583_reduce_98(void);
	f583_reduce_98();

	goto c02_097f;

c02_09e2:;

	if (v11060 != +99) goto c02_09e3;


	void f584_reduce_99(void);
	f584_reduce_99();

	goto c02_097f;

c02_09e3:;

	if (v11060 != +100) goto c02_09e4;


	void f585_reduce_100(void);
	f585_reduce_100();

	goto c02_097f;

c02_09e4:;

	if (v11060 != +101) goto c02_09e5;


	void f586_reduce_101(void);
	f586_reduce_101();

	goto c02_097f;

c02_09e5:;

	if (v11060 != +102) goto c02_09e6;


	void f587_reduce_102(void);
	f587_reduce_102();

	goto c02_097f;

c02_09e6:;

	if (v11060 != +103) goto c02_09e7;


	void f588_reduce_103(void);
	f588_reduce_103();

	goto c02_097f;

c02_09e7:;

	if (v11060 != +104) goto c02_09e8;


	void f589_reduce_104(void);
	f589_reduce_104();

	goto c02_097f;

c02_09e8:;

	if (v11060 != +105) goto c02_09e9;


	void f590_reduce_105(void);
	f590_reduce_105();

	goto c02_097f;

c02_09e9:;

	if (v11060 != +106) goto c02_09ea;


	void f591_reduce_106(void);
	f591_reduce_106();

	goto c02_097f;

c02_09ea:;

	if (v11060 != +107) goto c02_09eb;


	void f592_reduce_107(void);
	f592_reduce_107();

	goto c02_097f;

c02_09eb:;

	if (v11060 != +108) goto c02_09ec;


	void f593_reduce_108(void);
	f593_reduce_108();

	goto c02_097f;

c02_09ec:;

	if (v11060 != +109) goto c02_09ed;


	void f594_reduce_109(void);
	f594_reduce_109();

	goto c02_097f;

c02_09ed:;

	if (v11060 != +110) goto c02_09ee;


	void f595_reduce_110(void);
	f595_reduce_110();

	goto c02_097f;

c02_09ee:;

	if (v11060 != +111) goto c02_09ef;


	void f596_reduce_111(void);
	f596_reduce_111();

	goto c02_097f;

c02_09ef:;

	if (v11060 != +112) goto c02_09f0;


	void f597_reduce_112(void);
	f597_reduce_112();

	goto c02_097f;

c02_09f0:;

	if (v11060 != +119) goto c02_09f1;


	void f598_reduce_119(void);
	f598_reduce_119();

	goto c02_097f;

c02_09f1:;

	if (v11060 != +123) goto c02_09f2;


	void f599_reduce_123(void);
	f599_reduce_123();

	goto c02_097f;

c02_09f2:;

	if (v11060 != +124) goto c02_09f3;


	void f600_reduce_124(void);
	f600_reduce_124();

	goto c02_097f;

c02_09f3:;

	if (v11060 != +125) goto c02_09f4;


	void f601_reduce_125(void);
	f601_reduce_125();

	goto c02_097f;

c02_09f4:;

	if (v11060 != +131) goto c02_09f5;


	void f602_reduce_131(void);
	f602_reduce_131();

	goto c02_097f;

c02_09f5:;

	if (v11060 != +134) goto c02_09f6;


	void f603_reduce_134(void);
	f603_reduce_134();

	goto c02_097f;

c02_09f6:;

c02_097f:;


	i8 v11061 = (i8)(intptr_t)(ws+2920);
	i8 v11062 = *(i8*)(intptr_t)v11061;
	i8 v11063 = (i8)(intptr_t)(ws+1248);
	i8 v11064 = *(i8*)(intptr_t)v11063;
	i8 v11065 = v11064+(+24);
	*(i8*)(intptr_t)v11065 = v11062;

	i8 v11066 = (i8)(intptr_t)(((i1*)c02_a834+0));
	i8 v11067 = (i8)(intptr_t)(ws+2912);
	i2 v11068 = *(i2*)(intptr_t)v11067;
	i1 v11069 = v11068;
	i8 v11070 = v11069;
	i8 v11071 = v11066+v11070;
	i1 v11072 = *(i1*)(intptr_t)v11071;
	i8 v11073 = (i8)(intptr_t)(ws+3001);
	*(i1*)(intptr_t)v11073 = v11072;

	i8 v11074 = (i8)(intptr_t)(ws+1248);
	i8 v11075 = *(i8*)(intptr_t)v11074;
	i2 v11076 = *(i2*)(intptr_t)v11075;
	i8 v11077 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v11077 = v11076;

	i8 v11078 = (i8)(intptr_t)(((i1*)c02_a81c+0));
	i8 v11079 = (i8)(intptr_t)(ws+3002);
	i2 v11080 = *(i2*)(intptr_t)v11079;
	i1 v11081 = v11080;
	i8 v11082 = v11081;
	i1 v11083 = (i1)+1;
	i8 v11084 = ((i8)v11082)<<v11083;
	i8 v11085 = v11078+v11084;
	i2 v11086 = *(i2*)(intptr_t)v11085;
	i8 v11087 = (i8)(intptr_t)(ws+2916);
	*(i2*)(intptr_t)v11087 = v11086;

	i2 v11088 = (i2)+106;
	i8 v11089 = (i8)(intptr_t)(ws+3002);
	i2 v11090 = *(i2*)(intptr_t)v11089;
	if (v11088<v11090) goto c02_09fb; else goto c02_09fa;

c02_09fa:;

	i8 v11091 = (i8)(intptr_t)(((i1*)c02_a81b+0));
	i8 v11092 = (i8)(intptr_t)(ws+3002);
	i2 v11093 = *(i2*)(intptr_t)v11092;
	i1 v11094 = v11093;
	i8 v11095 = v11094;
	i1 v11096 = (i1)+1;
	i8 v11097 = ((i8)v11095)<<v11096;
	i8 v11098 = v11091+v11097;
	i2 v11099 = *(i2*)(intptr_t)v11098;
	i8 v11100 = (i8)(intptr_t)(ws+3001);
	i1 v11101 = *(i1*)(intptr_t)v11100;
	i2 v11102 = v11101;
	i2 v11103 = v11099+v11102;
	i8 v11104 = (i8)(intptr_t)(ws+3004);
	*(i2*)(intptr_t)v11104 = v11103;

	i8 v11105 = (i8)(intptr_t)(ws+3004);
	i2 v11106 = *(i2*)(intptr_t)v11105;
	i2 v11107 = (i2)+0;
	if (v11106<v11107) goto c02_0a04; else goto c02_0a06;

c02_0a06:;

	i8 v11108 = (i8)(intptr_t)(ws+3004);
	i2 v11109 = *(i2*)(intptr_t)v11108;
	i2 v11110 = (i2)+1068;
	if (v11109<v11110) goto c02_0a05; else goto c02_0a04;

c02_0a05:;

	i8 v11111 = (i8)(intptr_t)(((i1*)c02_a819+0));
	i8 v11112 = (i8)(intptr_t)(ws+3004);
	i2 v11113 = *(i2*)(intptr_t)v11112;
	i8 v11114 = v11113;
	i8 v11115 = v11111+v11114;
	i1 v11116 = *(i1*)(intptr_t)v11115;
	i8 v11117 = (i8)(intptr_t)(ws+3001);
	i1 v11118 = *(i1*)(intptr_t)v11117;
	if (v11116==v11118) goto c02_0a03; else goto c02_0a04;

c02_0a03:;

	i8 v11119 = (i8)(intptr_t)(((i1*)c02_a818+0));
	i8 v11120 = (i8)(intptr_t)(ws+3004);
	i2 v11121 = *(i2*)(intptr_t)v11120;
	i8 v11122 = v11121;
	i1 v11123 = (i1)+1;
	i8 v11124 = ((i8)v11122)<<v11123;
	i8 v11125 = v11119+v11124;
	i2 v11126 = *(i2*)(intptr_t)v11125;
	i8 v11127 = (i8)(intptr_t)(ws+2916);
	*(i2*)(intptr_t)v11127 = v11126;

	goto c02_09fc;

c02_0a04:;

c02_09fc:;

	goto c02_09f7;

c02_09fb:;

c02_09f7:;

	i8 v11128 = (i8)(intptr_t)(ws+1248);
	i8 v11129 = *(i8*)(intptr_t)v11128;
	i8 v11130 = v11129+(+16);
	i8 v11131 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v11131 = v11130;

	i8 v11132 = (i8)(intptr_t)(ws+2916);
	i2 v11133 = *(i2*)(intptr_t)v11132;
	i8 v11134 = (i8)(intptr_t)(ws+1248);
	i8 v11135 = *(i8*)(intptr_t)v11134;
	*(i2*)(intptr_t)v11135 = v11133;

	i8 v11136 = (i8)(intptr_t)(ws+3001);
	i1 v11137 = *(i1*)(intptr_t)v11136;
	i8 v11138 = (i8)(intptr_t)(ws+1248);
	i8 v11139 = *(i8*)(intptr_t)v11138;
	i8 v11140 = v11139+(+2);
	*(i1*)(intptr_t)v11140 = v11137;

endsub:;
	*p8898 = *(i2*)(intptr_t)(ws+2916);
}

// yy_parse_failed workspace at ws+2912 length ws+0
void f604_yy_parse_failed(void) {


	void f481_yy_pop_all_parser_stack(void);
	f481_yy_pop_all_parser_stack();

endsub:;
}
const i1 c02_s01f2[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };

// yy_syntax_error workspace at ws+2912 length ws+16
void f605_yy_syntax_error(i8 p11141 /* yyminor */, i1 p11142 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2912) = p11142; /*yymajor */
	*(i8*)(intptr_t)(ws+2920) = p11141; /*yyminor */


	void f59_StartError(void);
	f59_StartError();

	i8 v11143 = (i8)(intptr_t)c02_s01f2;

	void f11_print(i8 /* ptr */);
	f11_print(v11143);

	i8 v11144 = (i8)(intptr_t)(((i1*)c02_a81d+0));
	i8 v11145 = (i8)(intptr_t)(ws+2912);
	i1 v11146 = *(i1*)(intptr_t)v11145;
	i8 v11147 = v11146;
	i1 v11148 = (i1)+3;
	i8 v11149 = ((i8)v11147)<<v11148;
	i8 v11150 = v11144+v11149;
	i8 v11151 = *(i8*)(intptr_t)v11150;

	void f11_print(i8 /* ptr */);
	f11_print(v11151);


	void f60_EndError(void);
	f60_EndError();

endsub:;
}

// yy_accept workspace at ws+2912 length ws+0
void f606_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+2888 length ws+0
void f607_ParserInit(void) {

	i1 v11152 = (i1)-1;
	i8 v11153 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v11153 = v11152;

	i8 v11154 = (i8)(intptr_t)(ws+1256);
	i8 v11155 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v11155 = v11154;

	i2 v11156 = (i2)+0;
	i8 v11157 = (i8)(intptr_t)(ws+1256);
	*(i2*)(intptr_t)v11157 = v11156;

	i1 v11158 = (i1)+0;
	i8 v11159 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v11159 = v11158;

endsub:;
}

// ParserDeinit workspace at ws+2888 length ws+0
void f608_ParserDeinit(void) {

c02_0a09:;

	i8 v11160 = (i8)(intptr_t)(ws+1248);
	i8 v11161 = *(i8*)(intptr_t)v11160;
	i8 v11162 = (i8)(intptr_t)(ws+1256);
	if (v11161==v11162) goto c02_0a0c; else goto c02_0a0b;

c02_0a0b:;


	void f480_yy_pop_parser_stack(void);
	f480_yy_pop_parser_stack();

	goto c02_0a09;

c02_0a0c:;

endsub:;
}

// ParserFeedToken workspace at ws+2888 length ws+20
void f609_ParserFeedToken(i8 p11163 /* yyminor */, i1 p11164 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2888) = p11164; /*yymajor */
	*(i8*)(intptr_t)(ws+2896) = p11163; /*yyminor */

	i8 v11165 = (i8)(intptr_t)(ws+1248);
	i8 v11166 = *(i8*)(intptr_t)v11165;
	i2 v11167 = *(i2*)(intptr_t)v11166;
	i8 v11168 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v11168 = v11167;

c02_0a0d:;

	i2 v11169 = (i2)+210;
	i8 v11170 = (i8)(intptr_t)(ws+2904);
	i2 v11171 = *(i2*)(intptr_t)v11170;
	if (v11169<v11171) goto c02_0a13; else goto c02_0a12;

c02_0a12:;

	i8 v11172 = (i8)(intptr_t)(((i1*)c02_a81a+0));
	i8 v11173 = (i8)(intptr_t)(ws+2904);
	i2 v11174 = *(i2*)(intptr_t)v11173;
	i1 v11175 = v11174;
	i8 v11176 = v11175;
	i1 v11177 = (i1)+1;
	i8 v11178 = ((i8)v11176)<<v11177;
	i8 v11179 = v11172+v11178;
	i2 v11180 = *(i2*)(intptr_t)v11179;
	i8 v11181 = (i8)(intptr_t)(ws+2888);
	i1 v11182 = *(i1*)(intptr_t)v11181;
	i2 v11183 = v11182;
	i2 v11184 = v11180+v11183;
	i8 v11185 = (i8)(intptr_t)(ws+2906);
	*(i2*)(intptr_t)v11185 = v11184;

	i8 v11186 = (i8)(intptr_t)(((i1*)c02_a819+0));
	i8 v11187 = (i8)(intptr_t)(ws+2906);
	i2 v11188 = *(i2*)(intptr_t)v11187;
	i8 v11189 = v11188;
	i8 v11190 = v11186+v11189;
	i1 v11191 = *(i1*)(intptr_t)v11190;
	i8 v11192 = (i8)(intptr_t)(ws+2888);
	i1 v11193 = *(i1*)(intptr_t)v11192;
	if (v11191==v11193) goto c02_0a18; else goto c02_0a17;

c02_0a17:;

	i8 v11194 = (i8)(intptr_t)(((i1*)c02_a81c+0));
	i8 v11195 = (i8)(intptr_t)(ws+2904);
	i2 v11196 = *(i2*)(intptr_t)v11195;
	i1 v11197 = v11196;
	i8 v11198 = v11197;
	i1 v11199 = (i1)+1;
	i8 v11200 = ((i8)v11198)<<v11199;
	i8 v11201 = v11194+v11200;
	i2 v11202 = *(i2*)(intptr_t)v11201;
	i8 v11203 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v11203 = v11202;

	goto c02_0a14;

c02_0a18:;

	i8 v11204 = (i8)(intptr_t)(((i1*)c02_a818+0));
	i8 v11205 = (i8)(intptr_t)(ws+2906);
	i2 v11206 = *(i2*)(intptr_t)v11205;
	i8 v11207 = v11206;
	i1 v11208 = (i1)+1;
	i8 v11209 = ((i8)v11207)<<v11208;
	i8 v11210 = v11204+v11209;
	i2 v11211 = *(i2*)(intptr_t)v11210;
	i8 v11212 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v11212 = v11211;

c02_0a14:;

	goto c02_0a0f;

c02_0a13:;

c02_0a0f:;

	i8 v11213 = (i8)(intptr_t)(ws+2904);
	i2 v11214 = *(i2*)(intptr_t)v11213;
	i2 v11215 = (i2)+433;
	if (v11214<v11215) goto c02_0a1d; else goto c02_0a1c;

c02_0a1c:;

	i8 v11216 = (i8)(intptr_t)(ws+2904);
	i2 v11217 = *(i2*)(intptr_t)v11216;
	i2 v11218 = v11217+(-433);
	i8 v11219 = (i8)(intptr_t)(ws+2888);
	i1 v11220 = *(i1*)(intptr_t)v11219;

	void f484_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	i2 v11221;
	f484_yy_reduce(&v11221, v11220, v11218);
	i8 v11222 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v11222 = v11221;

	goto c02_0a19;

c02_0a1d:;

	i2 v11223 = (i2)+429;
	i8 v11224 = (i8)(intptr_t)(ws+2904);
	i2 v11225 = *(i2*)(intptr_t)v11224;
	if (v11223<v11225) goto c02_0a21; else goto c02_0a20;

c02_0a20:;

	i8 v11226 = (i8)(intptr_t)(ws+1248);
	i8 v11227 = *(i8*)(intptr_t)v11226;
	i8 v11228 = (i8)(intptr_t)(ws+2856);
	if (v11227==v11228) goto c02_0a25; else goto c02_0a26;

c02_0a25:;


	void f482_yy_stack_overflow(void);
	f482_yy_stack_overflow();

	goto endsub;

c02_0a26:;

c02_0a22:;

	i8 v11229 = (i8)(intptr_t)(ws+1248);
	i8 v11230 = *(i8*)(intptr_t)v11229;
	i8 v11231 = v11230+(+16);
	i8 v11232 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v11232 = v11231;

	i2 v11233 = (i2)+210;
	i8 v11234 = (i8)(intptr_t)(ws+2904);
	i2 v11235 = *(i2*)(intptr_t)v11234;
	if (v11233<v11235) goto c02_0a2a; else goto c02_0a2b;

c02_0a2a:;

	i8 v11236 = (i8)(intptr_t)(ws+2904);
	i2 v11237 = *(i2*)(intptr_t)v11236;
	i2 v11238 = v11237+(+138);
	i8 v11239 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v11239 = v11238;

	goto c02_0a27;

c02_0a2b:;

c02_0a27:;

	i8 v11240 = (i8)(intptr_t)(ws+2904);
	i2 v11241 = *(i2*)(intptr_t)v11240;
	i8 v11242 = (i8)(intptr_t)(ws+1248);
	i8 v11243 = *(i8*)(intptr_t)v11242;
	*(i2*)(intptr_t)v11243 = v11241;

	i8 v11244 = (i8)(intptr_t)(ws+2888);
	i1 v11245 = *(i1*)(intptr_t)v11244;
	i8 v11246 = (i8)(intptr_t)(ws+1248);
	i8 v11247 = *(i8*)(intptr_t)v11246;
	i8 v11248 = v11247+(+2);
	*(i1*)(intptr_t)v11248 = v11245;

	i8 v11249 = (i8)(intptr_t)(ws+2896);
	i8 v11250 = *(i8*)(intptr_t)v11249;
	i8 v11251 = *(i8*)(intptr_t)v11250;
	i8 v11252 = (i8)(intptr_t)(ws+1248);
	i8 v11253 = *(i8*)(intptr_t)v11252;
	i8 v11254 = v11253+(+8);
	*(i8*)(intptr_t)v11254 = v11251;

	i8 v11255 = (i8)(intptr_t)(ws+2872);
	i1 v11256 = *(i1*)(intptr_t)v11255;
	i1 v11257 = (i1)+0;
	if ((s1)v11256<(s1)v11257) goto c02_0a30; else goto c02_0a2f;

c02_0a2f:;

	i8 v11258 = (i8)(intptr_t)(ws+2872);
	i1 v11259 = *(i1*)(intptr_t)v11258;
	i1 v11260 = v11259+(-1);
	i8 v11261 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v11261 = v11260;

	goto c02_0a2c;

c02_0a30:;

c02_0a2c:;

	goto c02_0a0e;

c02_0a21:;

	i8 v11262 = (i8)(intptr_t)(ws+2904);
	i2 v11263 = *(i2*)(intptr_t)v11262;
	i2 v11264 = (i2)+431;
	if (v11263==v11264) goto c02_0a33; else goto c02_0a34;

c02_0a33:;

	i8 v11265 = (i8)(intptr_t)(ws+1248);
	i8 v11266 = *(i8*)(intptr_t)v11265;
	i8 v11267 = v11266+(-16);
	i8 v11268 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v11268 = v11267;


	void f606_yy_accept(void);
	f606_yy_accept();

	goto c02_0a0e;

c02_0a34:;

	i1 v11269 = (i1)+0;
	i8 v11270 = (i8)(intptr_t)(ws+2872);
	i1 v11271 = *(i1*)(intptr_t)v11270;
	if ((s1)v11269<(s1)v11271) goto c02_0a39; else goto c02_0a38;

c02_0a38:;

	i8 v11272 = (i8)(intptr_t)(ws+2888);
	i1 v11273 = *(i1*)(intptr_t)v11272;
	i8 v11274 = (i8)(intptr_t)(ws+2896);
	i8 v11275 = *(i8*)(intptr_t)v11274;

	void f605_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	f605_yy_syntax_error(v11275, v11273);

	goto c02_0a35;

c02_0a39:;

c02_0a35:;

	i1 v11276 = (i1)+3;
	i8 v11277 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v11277 = v11276;

	i8 v11278 = (i8)(intptr_t)(ws+2888);
	i1 v11279 = *(i1*)(intptr_t)v11278;
	i8 v11280 = (i8)(intptr_t)(ws+2896);
	i8 v11281 = *(i8*)(intptr_t)v11280;

	void f478_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	f478_yy_destructor(v11281, v11279);

	i8 v11282 = (i8)(intptr_t)(ws+2888);
	i1 v11283 = *(i1*)(intptr_t)v11282;
	i1 v11284 = (i1)+0;
	if (v11283==v11284) goto c02_0a3d; else goto c02_0a3e;

c02_0a3d:;


	void f604_yy_parse_failed(void);
	f604_yy_parse_failed();

	i1 v11285 = (i1)-1;
	i8 v11286 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v11286 = v11285;

	goto c02_0a3a;

c02_0a3e:;

c02_0a3a:;

	goto c02_0a0e;

c02_0a19:;

	i8 v11287 = (i8)(intptr_t)(ws+1248);
	i8 v11288 = *(i8*)(intptr_t)v11287;
	i8 v11289 = (i8)(intptr_t)(ws+1256);
	if (v11288==v11289) goto c02_0a42; else goto c02_0a43;

c02_0a42:;

	goto c02_0a0e;

c02_0a43:;

c02_0a3f:;

	goto c02_0a0d;

c02_0a0e:;

endsub:;
}
const i1 c02_s01f3[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

// PrintFreeMemory workspace at ws+2888 length ws+0
void f610_PrintFreeMemory(void) {


	void f35_GetFreeMemory(i8* /* i */);
	i8 v11290;
	f35_GetFreeMemory(&v11290);
	i1 v11291 = (i1)+10;
	i8 v11292 = ((i8)v11290)>>v11291;
	i2 v11293 = v11292;

	void f16_print_i16(i2 /* value */);
	f16_print_i16(v11293);

	i8 v11294 = (i8)(intptr_t)c02_s01f3;

	void f11_print(i8 /* ptr */);
	f11_print(v11294);

endsub:;
}
const i1 c02_s01f4[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };

// SyntaxError workspace at ws+2896 length ws+0
void f611_SyntaxError(void) {

	i8 v11295 = (i8)(intptr_t)c02_s01f4;

	void f11_print(i8 /* ptr */);
	f11_print(v11295);


	void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}

// ParseArguments workspace at ws+2888 length ws+8
void f612_ParseArguments(void) {


	void f23_ArgvInit(void);
	f23_ArgvInit();

c02_0a44:;


	void f24_ArgvNext(i8* /* arg */);
	i8 v11296;
	f24_ArgvNext(&v11296);
	i8 v11297 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v11297 = v11296;

	i8 v11298 = (i8)(intptr_t)(ws+2888);
	i8 v11299 = *(i8*)(intptr_t)v11298;
	i8 v11300 = (i8)+0;
	if (v11299==v11300) goto c02_0a49; else goto c02_0a4a;

c02_0a49:;

	goto c02_0a45;

c02_0a4a:;

c02_0a46:;

	i8 v11301 = (i8)(intptr_t)(ws+2888);
	i8 v11302 = *(i8*)(intptr_t)v11301;
	i1 v11303 = *(i1*)(intptr_t)v11302;
	i1 v11304 = (i1)+45;
	if (v11303==v11304) goto c02_0a4e; else goto c02_0a4f;

c02_0a4e:;

	i8 v11305 = (i8)(intptr_t)(ws+2888);
	i8 v11306 = *(i8*)(intptr_t)v11305;
	i8 v11307 = v11306+(+1);
	i8 v11308 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v11308 = v11307;

	i8 v11309 = (i8)(intptr_t)(ws+2888);
	i8 v11310 = *(i8*)(intptr_t)v11309;
	i1 v11311 = *(i1*)(intptr_t)v11310;
	i1 v11312 = (i1)+73;
	if (v11311==v11312) goto c02_0a53; else goto c02_0a54;

c02_0a53:;

	i8 v11313 = (i8)(intptr_t)(ws+2888);
	i8 v11314 = *(i8*)(intptr_t)v11313;
	i8 v11315 = v11314+(+1);
	i8 v11316 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v11316 = v11315;

	i8 v11317 = (i8)(intptr_t)(ws+2888);
	i8 v11318 = *(i8*)(intptr_t)v11317;

	void f62_LexerAddIncludePath(i8 /* path */);
	f62_LexerAddIncludePath(v11318);

	goto c02_0a50;

c02_0a54:;


	void f611_SyntaxError(void);
	f611_SyntaxError();

c02_0a50:;

	goto c02_0a4b;

c02_0a4f:;

	i8 v11319 = (i8)(intptr_t)(ws+24);
	i8 v11320 = *(i8*)(intptr_t)v11319;
	i8 v11321 = (i8)+0;
	if (v11320==v11321) goto c02_0a58; else goto c02_0a59;

c02_0a58:;

	i8 v11322 = (i8)(intptr_t)(ws+2888);
	i8 v11323 = *(i8*)(intptr_t)v11322;
	i8 v11324 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11324 = v11323;

	goto c02_0a55;

c02_0a59:;

	i8 v11325 = (i8)(intptr_t)(ws+32);
	i8 v11326 = *(i8*)(intptr_t)v11325;
	i8 v11327 = (i8)+0;
	if (v11326==v11327) goto c02_0a5c; else goto c02_0a5d;

c02_0a5c:;

	i8 v11328 = (i8)(intptr_t)(ws+2888);
	i8 v11329 = *(i8*)(intptr_t)v11328;
	i8 v11330 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11330 = v11329;

	goto c02_0a55;

c02_0a5d:;


	void f611_SyntaxError(void);
	f611_SyntaxError();

c02_0a55:;

c02_0a4b:;

	goto c02_0a44;

c02_0a45:;

	i8 v11331 = (i8)(intptr_t)(ws+24);
	i8 v11332 = *(i8*)(intptr_t)v11331;
	i8 v11333 = (i8)+0;
	if (v11332==v11333) goto c02_0a63; else goto c02_0a65;

c02_0a65:;

	i8 v11334 = (i8)(intptr_t)(ws+32);
	i8 v11335 = *(i8*)(intptr_t)v11334;
	i8 v11336 = (i8)+0;
	if (v11335==v11336) goto c02_0a63; else goto c02_0a64;

c02_0a63:;


	void f611_SyntaxError(void);
	f611_SyntaxError();

	goto c02_0a5e;

c02_0a64:;

c02_0a5e:;

endsub:;
}
const i1 c02_s01f5[] = { 0x43,0x4f,0x57,0x43,0x4f,0x4d,0x3a,0x20,0 };
const i1 c02_s01f6[] = { 0 };
const i1 c02_s01f7[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
const i1 c02_s01f8[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };

// __main workspace at ws+0 length ws+2888
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

	i8 v800 = (i8)(intptr_t)(ws+88);
	i8 v801 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v801 = v800;




	i8 v889 = (i8)+0;
	i8 v890 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v890 = v889;

	i8 v891 = (i8)+0;
	i8 v892 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v892 = v891;

	i1 v893 = (i1)+0;
	i8 v894 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v894 = v893;

	i1 v895 = (i1)+0;
	i8 v896 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v896 = v895;








	i1 v931 = (i1)+0;
	i8 v932 = (i8)(intptr_t)(ws+376);
	*(i1*)(intptr_t)v932 = v931;









































































































































	i2 v4206 = (i2)+1;
	i8 v4207 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4207 = v4206;

	i8 v4208 = (i8)+0;
	i8 v4209 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v4209 = v4208;






























	i2 v5008 = (i2)+0;
	i8 v5009 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5009 = v5008;


	i1 v5055 = (i1)+0;
	i8 v5056 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5056 = v5055;

















	i1 v7528 = (i1)+0;
	i8 v7529 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v7529 = v7528;
































































	i8 v11337 = (i8)(intptr_t)c02_s01f5;

	void f11_print(i8 /* ptr */);
	f11_print(v11337);


	void f610_PrintFreeMemory(void);
	f610_PrintFreeMemory();


	void f612_ParseArguments(void);
	f612_ParseArguments();

	i8 v11338 = (i8)(intptr_t)c02_s01f6;

	void f62_LexerAddIncludePath(i8 /* path */);
	f62_LexerAddIncludePath(v11338);

	i8 v11339 = (i8)(intptr_t)(ws+24);
	i8 v11340 = *(i8*)(intptr_t)v11339;

	void f66_LexerIncludeFile(i8 /* path */);
	f66_LexerIncludeFile(v11340);

	i8 v11341 = (i8)+91;

	void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v11342;
	f31_Alloc(&v11342, v11341);
	i8 v11343 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v11343 = v11342;

	i8 v11344 = (i8)(intptr_t)c02_s01f7;
	i8 v11345 = (i8)(intptr_t)(ws+40);
	i8 v11346 = *(i8*)(intptr_t)v11345;
	*(i8*)(intptr_t)v11346 = v11344;


	void f215_ArchInitTypes(void);
	f215_ArchInitTypes();

	i8 v11347 = (i8)(intptr_t)(ws+32);
	i8 v11348 = *(i8*)(intptr_t)v11347;

	void f177_EmitterOpenfile(i8 /* filename */);
	f177_EmitterOpenfile(v11348);

	i8 v11349 = (i8)(intptr_t)(ws+40);
	i8 v11350 = *(i8*)(intptr_t)v11349;

	void f179_EmitterDeclareSubroutine(i8 /* subr */);
	f179_EmitterDeclareSubroutine(v11350);


	void f95_MidStartfile(i8* /* m */);
	i8 v11351;
	f95_MidStartfile(&v11351);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11351);

	i8 v11352 = (i8)(intptr_t)(ws+40);
	i8 v11353 = *(i8*)(intptr_t)v11352;

	void f96_MidStartsub(i8* /* m */, i8 /* subr */);
	i8 v11354;
	f96_MidStartsub(&v11354, v11353);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11354);


	void f607_ParserInit(void);
	f607_ParserInit();

c02_0a66:;


	void f67_LexerReadToken(i1* /* token */);
	i1 v11355;
	f67_LexerReadToken(&v11355);
	i8 v11356 = (i8)(intptr_t)(ws+2873);
	*(i1*)(intptr_t)v11356 = v11355;

	i8 v11357 = (i8)(intptr_t)(ws+2873);
	i1 v11358 = *(i1*)(intptr_t)v11357;

	if (v11358 != +34) goto c02_0a69;

	i8 v11359 = (i8)(intptr_t)(ws+372);
	i4 v11360 = *(i4*)(intptr_t)v11359;
	i8 v11361 = (i8)(intptr_t)(ws+2880);
	*(i4*)(intptr_t)v11361 = v11360;

	goto c02_0a68;

c02_0a69:;

	if (v11358 != +33) goto c02_0a6a;

	i8 v11362 = (i8)(intptr_t)(ws+241);

	void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v11363;
	f33_StrDup(&v11363, v11362);
	i8 v11364 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11364 = v11363;

	goto c02_0a68;

c02_0a6a:;

	if (v11358 != +41) goto c02_0a6b;

	i8 v11365 = (i8)(intptr_t)(ws+241);

	void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v11366;
	f33_StrDup(&v11366, v11365);
	i8 v11367 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v11367 = v11366;

	goto c02_0a68;

c02_0a6b:;

	i4 v11368 = (i4)+0;
	i8 v11369 = (i8)(intptr_t)(ws+2880);
	*(i4*)(intptr_t)v11369 = v11368;

c02_0a68:;


	i8 v11370 = (i8)(intptr_t)(ws+2873);
	i1 v11371 = *(i1*)(intptr_t)v11370;
	i8 v11372 = (i8)(intptr_t)(ws+2880);

	void f609_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	f609_ParserFeedToken(v11372, v11371);

	i8 v11373 = (i8)(intptr_t)(ws+2873);
	i1 v11374 = *(i1*)(intptr_t)v11373;
	i1 v11375 = (i1)+0;
	if (v11374==v11375) goto c02_0a6f; else goto c02_0a70;

c02_0a6f:;

	goto c02_0a67;

c02_0a70:;

c02_0a6c:;

	goto c02_0a66;

c02_0a67:;


	void f608_ParserDeinit(void);
	f608_ParserDeinit();

	i8 v11376 = (i8)(intptr_t)(ws+40);
	i8 v11377 = *(i8*)(intptr_t)v11376;

	void f111_MidEndsub(i8* /* m */, i8 /* subr */);
	i8 v11378;
	f111_MidEndsub(&v11378, v11377);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11378);


	void f142_MidEndfile(i8* /* m */);
	i8 v11379;
	f142_MidEndfile(&v11379);

	void f437_Generate(i8 /* statement */);
	f437_Generate(v11379);


	void f178_EmitterClosefile(void);
	f178_EmitterClosefile();

	i8 v11380 = (i8)(intptr_t)c02_s01f8;

	void f11_print(i8 /* ptr */);
	f11_print(v11380);


	void f610_PrintFreeMemory(void);
	f610_PrintFreeMemory();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                      