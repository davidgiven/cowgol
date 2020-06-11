#include "cowgol.h"
static i8 workspace[0x018d];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+3104 length ws+0
void f6_ExitWithError(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+840 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+840) = p10; /*buf */
	*(i1*)(intptr_t)(ws+848) = p9; /*byte */
	*(i8*)(intptr_t)(ws+856) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+840) 
,  
*(i1*)(intptr_t)(ws+848) 
,  
*(i8*)(intptr_t)(ws+856) 
); 


endsub:;
}

// print_char workspace at ws+3136 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+3136) = p11; /*c */

	
putchar( 
*(i1*)(intptr_t)(ws+3136) 
); 


endsub:;
}

// print workspace at ws+3120 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+3120) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+3120);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3128);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+3128);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+3128);
	i1 v29 = *(i1*)(intptr_t)v28;

void f8_print_char(i1 /* c */);
	f8_print_char(v29);

	i8 v30 = (i8)(intptr_t)(ws+3120);
	i8 v31 = *(i8*)(intptr_t)v30;
	i8 v32 = v31+(+1);
	i8 v33 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v33 = v32;

	goto c02_0001;

c02_0002:;

endsub:;
}

// print_nl workspace at ws+728 length ws+0
void f12_print_nl(void) {

	i1 v34 = (i1)+10;

void f8_print_char(i1 /* c */);
	f8_print_char(v34);

endsub:;
}

// UIToA workspace at ws+3120 length ws+49
void f13_UIToA(i8* p35 /* ptr */, i8 p36 /* buffer */, i1 p37 /* base */, i4 p38 /* value */) {
	*(i4*)(intptr_t)(ws+3120) = p38; /*value */
	*(i1*)(intptr_t)(ws+3124) = p37; /*base */
	*(i8*)(intptr_t)(ws+3128) = p36; /*buffer */

	i8 v39 = (i8)(intptr_t)(ws+3128);
	i8 v40 = *(i8*)(intptr_t)v39;
	i8 v41 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v41 = v40;

c02_0008:;

	i8 v42 = (i8)(intptr_t)(ws+3120);
	i4 v43 = *(i4*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3124);
	i1 v45 = *(i1*)(intptr_t)v44;
	i4 v46 = v45;
	i4 v47 = v43%v46;
	i8 v48 = (i8)(intptr_t)(ws+3144);
	*(i4*)(intptr_t)v48 = v47;

	i8 v49 = (i8)(intptr_t)(ws+3120);
	i4 v50 = *(i4*)(intptr_t)v49;
	i8 v51 = (i8)(intptr_t)(ws+3124);
	i1 v52 = *(i1*)(intptr_t)v51;
	i4 v53 = v52;
	i4 v54 = v50/v53;
	i8 v55 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v55 = v54;

	i8 v56 = (i8)(intptr_t)(ws+3144);
	i4 v57 = *(i4*)(intptr_t)v56;
	i4 v58 = (i4)+10;
	if (v57<v58) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v59 = (i8)(intptr_t)(ws+3144);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = v60+(+48);
	i8 v62 = (i8)(intptr_t)(ws+3144);
	*(i4*)(intptr_t)v62 = v61;

	goto c02_000a;

c02_000e:;

	i8 v63 = (i8)(intptr_t)(ws+3144);
	i4 v64 = *(i4*)(intptr_t)v63;
	i4 v65 = v64+(+87);
	i8 v66 = (i8)(intptr_t)(ws+3144);
	*(i4*)(intptr_t)v66 = v65;

c02_000a:;

	i8 v67 = (i8)(intptr_t)(ws+3144);
	i4 v68 = *(i4*)(intptr_t)v67;
	i1 v69 = v68;
	i8 v70 = (i8)(intptr_t)(ws+3136);
	i8 v71 = *(i8*)(intptr_t)v70;
	*(i1*)(intptr_t)v71 = v69;

	i8 v72 = (i8)(intptr_t)(ws+3136);
	i8 v73 = *(i8*)(intptr_t)v72;
	i8 v74 = v73+(+1);
	i8 v75 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v75 = v74;

	i8 v76 = (i8)(intptr_t)(ws+3120);
	i4 v77 = *(i4*)(intptr_t)v76;
	i4 v78 = (i4)+0;
	if (v77==v78) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v79 = (i8)(intptr_t)(ws+3128);
	i8 v80 = *(i8*)(intptr_t)v79;
	i8 v81 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v81 = v80;

	i8 v82 = (i8)(intptr_t)(ws+3136);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = v83+(-1);
	i8 v85 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v85 = v84;

c02_0016:;

	i8 v86 = (i8)(intptr_t)(ws+3152);
	i8 v87 = *(i8*)(intptr_t)v86;
	i8 v88 = (i8)(intptr_t)(ws+3160);
	i8 v89 = *(i8*)(intptr_t)v88;
	if (v87<v89) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v90 = (i8)(intptr_t)(ws+3152);
	i8 v91 = *(i8*)(intptr_t)v90;
	i1 v92 = *(i1*)(intptr_t)v91;
	i8 v93 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v93 = v92;

	i8 v94 = (i8)(intptr_t)(ws+3160);
	i8 v95 = *(i8*)(intptr_t)v94;
	i1 v96 = *(i1*)(intptr_t)v95;
	i8 v97 = (i8)(intptr_t)(ws+3152);
	i8 v98 = *(i8*)(intptr_t)v97;
	*(i1*)(intptr_t)v98 = v96;

	i8 v99 = (i8)(intptr_t)(ws+3168);
	i1 v100 = *(i1*)(intptr_t)v99;
	i8 v101 = (i8)(intptr_t)(ws+3160);
	i8 v102 = *(i8*)(intptr_t)v101;
	*(i1*)(intptr_t)v102 = v100;

	i8 v103 = (i8)(intptr_t)(ws+3152);
	i8 v104 = *(i8*)(intptr_t)v103;
	i8 v105 = v104+(+1);
	i8 v106 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v106 = v105;

	i8 v107 = (i8)(intptr_t)(ws+3160);
	i8 v108 = *(i8*)(intptr_t)v107;
	i8 v109 = v108+(-1);
	i8 v110 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v110 = v109;

	goto c02_0016;

c02_0019:;

	i1 v111 = (i1)+0;
	i8 v112 = (i8)(intptr_t)(ws+3136);
	i8 v113 = *(i8*)(intptr_t)v112;
	*(i1*)(intptr_t)v113 = v111;

endsub:;
	*p35 = *(i8*)(intptr_t)(ws+3136);
}

// print_i32 workspace at ws+3096 length ws+24
void f15_print_i32(i4 p140 /* value */) {
	*(i4*)(intptr_t)(ws+3096) = p140; /*value */

	i8 v141 = (i8)(intptr_t)(ws+3096);
	i4 v142 = *(i4*)(intptr_t)v141;
	i1 v143 = (i1)+10;
	i8 v144 = (i8)(intptr_t)(ws+3100);

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v145;
	f13_UIToA(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+3100);

void f11_print(i8 /* ptr */);
	f11_print(v147);

endsub:;
}

// print_i16 workspace at ws+3088 length ws+2
void f16_print_i16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+3088) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+3088);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;

void f15_print_i32(i4 /* value */);
	f15_print_i32(v151);

endsub:;
}

// print_i8 workspace at ws+3088 length ws+1
void f17_print_i8(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+3088) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+3088);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;

void f15_print_i32(i4 /* value */);
	f15_print_i32(v155);

endsub:;
}

// print_hex_i8 workspace at ws+728 length ws+3
void f18_print_hex_i8(i1 p156 /* value */) {
	*(i1*)(intptr_t)(ws+728) = p156; /*value */

	i1 v157 = (i1)+2;
	i8 v158 = (i8)(intptr_t)(ws+729);
	*(i1*)(intptr_t)v158 = v157;

c02_001f:;

	i8 v159 = (i8)(intptr_t)(ws+728);
	i1 v160 = *(i1*)(intptr_t)v159;
	i1 v161 = (i1)+4;
	i1 v162 = ((i1)v160)>>v161;
	i8 v163 = (i8)(intptr_t)(ws+730);
	*(i1*)(intptr_t)v163 = v162;

	i8 v164 = (i8)(intptr_t)(ws+730);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+10;
	if (v165<v166) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v167 = (i8)(intptr_t)(ws+730);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = v168+(+48);
	i8 v170 = (i8)(intptr_t)(ws+730);
	*(i1*)(intptr_t)v170 = v169;

	goto c02_0021;

c02_0025:;

	i8 v171 = (i8)(intptr_t)(ws+730);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = v172+(+87);
	i8 v174 = (i8)(intptr_t)(ws+730);
	*(i1*)(intptr_t)v174 = v173;

c02_0021:;

	i8 v175 = (i8)(intptr_t)(ws+730);
	i1 v176 = *(i1*)(intptr_t)v175;

void f8_print_char(i1 /* c */);
	f8_print_char(v176);

	i8 v177 = (i8)(intptr_t)(ws+728);
	i1 v178 = *(i1*)(intptr_t)v177;
	i1 v179 = (i1)+4;
	i1 v180 = ((i1)v178)<<v179;
	i8 v181 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v181 = v180;

	i8 v182 = (i8)(intptr_t)(ws+729);
	i1 v183 = *(i1*)(intptr_t)v182;
	i1 v184 = v183+(-1);
	i8 v185 = (i8)(intptr_t)(ws+729);
	*(i1*)(intptr_t)v185 = v184;

	i8 v186 = (i8)(intptr_t)(ws+729);
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

// print_hex_i32 workspace at ws+720 length ws+4
void f20_print_hex_i32(i4 p198 /* value */) {
	*(i4*)(intptr_t)(ws+720) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+720);
	i4 v200 = *(i4*)(intptr_t)v199;
	i1 v201 = (i1)+24;
	i4 v202 = ((i4)v200)>>v201;
	i1 v203 = v202;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v203);

	i8 v204 = (i8)(intptr_t)(ws+720);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v208);

	i8 v209 = (i8)(intptr_t)(ws+720);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v213);

	i8 v214 = (i8)(intptr_t)(ws+720);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;

void f18_print_hex_i8(i1 /* value */);
	f18_print_hex_i8(v216);

endsub:;
}

// ArgvInit workspace at ws+632 length ws+0
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

// ArgvNext workspace at ws+632 length ws+8
void f24_ArgvNext(i8* p332 /* arg */) {

	i8 v333 = (i8)(intptr_t)(ws+16);
	i8 v334 = *(i8*)(intptr_t)v333;
	i8 v335 = (i8)+0;
	if (v334==v335) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v336 = (i8)+0;
	i8 v337 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v337 = v336;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v338 = (i8)(intptr_t)(ws+16);
	i8 v339 = *(i8*)(intptr_t)v338;
	i8 v340 = *(i8*)(intptr_t)v339;
	i8 v341 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v341 = v340;

	i8 v342 = (i8)(intptr_t)(ws+632);
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
	*p332 = *(i8*)(intptr_t)(ws+632);
}

// StrCmp workspace at ws+736 length ws+17
void f25_StrCmp(i1* p351 /* res */, i8 p352 /* s2 */, i8 p353 /* s1 */) {
	*(i8*)(intptr_t)(ws+736) = p353; /*s1 */
	*(i8*)(intptr_t)(ws+744) = p352; /*s2 */

c02_0059:;

	i8 v354 = (i8)(intptr_t)(ws+736);
	i8 v355 = *(i8*)(intptr_t)v354;
	i1 v356 = *(i1*)(intptr_t)v355;
	i8 v357 = (i8)(intptr_t)(ws+744);
	i8 v358 = *(i8*)(intptr_t)v357;
	i1 v359 = *(i1*)(intptr_t)v358;
	i1 v360 = v356-v359;
	i8 v361 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v361 = v360;

	i8 v362 = (i8)(intptr_t)(ws+752);
	i1 v363 = *(i1*)(intptr_t)v362;
	i1 v364 = (i1)+0;
	if (v363==v364) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v365 = (i8)(intptr_t)(ws+736);
	i8 v366 = *(i8*)(intptr_t)v365;
	i1 v367 = *(i1*)(intptr_t)v366;
	i1 v368 = (i1)+0;
	if (v367==v368) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v369 = (i8)(intptr_t)(ws+736);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+1);
	i8 v372 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v372 = v371;

	i8 v373 = (i8)(intptr_t)(ws+744);
	i8 v374 = *(i8*)(intptr_t)v373;
	i8 v375 = v374+(+1);
	i8 v376 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v376 = v375;

	goto c02_0059;

c02_005a:;

endsub:;
	*p351 = *(i1*)(intptr_t)(ws+752);
}

// ToLower workspace at ws+656 length ws+2
void f26_ToLower(i1* p377 /* cc */, i1 p378 /* c */) {
	*(i1*)(intptr_t)(ws+656) = p378; /*c */

	i8 v379 = (i8)(intptr_t)(ws+656);
	i1 v380 = *(i1*)(intptr_t)v379;
	i1 v381 = (i1)+65;
	if (v380<v381) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v382 = (i1)+90;
	i8 v383 = (i8)(intptr_t)(ws+656);
	i1 v384 = *(i1*)(intptr_t)v383;
	if (v382<v384) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v385 = (i8)(intptr_t)(ws+656);
	i1 v386 = *(i1*)(intptr_t)v385;
	i1 v387 = v386|(+32);
	i8 v388 = (i8)(intptr_t)(ws+657);
	*(i1*)(intptr_t)v388 = v387;

	goto c02_0063;

c02_0069:;

	i8 v389 = (i8)(intptr_t)(ws+656);
	i1 v390 = *(i1*)(intptr_t)v389;
	i8 v391 = (i8)(intptr_t)(ws+657);
	*(i1*)(intptr_t)v391 = v390;

c02_0063:;

endsub:;
	*p377 = *(i1*)(intptr_t)(ws+657);
}

// StrICmp workspace at ws+632 length ws+17
void f27_StrICmp(i1* p392 /* res */, i8 p393 /* s2 */, i8 p394 /* s1 */) {
	*(i8*)(intptr_t)(ws+632) = p394; /*s1 */
	*(i8*)(intptr_t)(ws+640) = p393; /*s2 */

c02_006b:;

	i8 v395 = (i8)(intptr_t)(ws+632);
	i8 v396 = *(i8*)(intptr_t)v395;
	i1 v397 = *(i1*)(intptr_t)v396;

void f26_ToLower(i1* /* cc */, i1 /* c */);
	i1 v398;
	f26_ToLower(&v398, v397);
	i8 v399 = (i8)(intptr_t)(ws+640);
	i8 v400 = *(i8*)(intptr_t)v399;
	i1 v401 = *(i1*)(intptr_t)v400;

void f26_ToLower(i1* /* cc */, i1 /* c */);
	i1 v402;
	f26_ToLower(&v402, v401);
	i1 v403 = v398-v402;
	i8 v404 = (i8)(intptr_t)(ws+648);
	*(i1*)(intptr_t)v404 = v403;

	i8 v405 = (i8)(intptr_t)(ws+648);
	i1 v406 = *(i1*)(intptr_t)v405;
	i1 v407 = (i1)+0;
	if (v406==v407) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v408 = (i8)(intptr_t)(ws+632);
	i8 v409 = *(i8*)(intptr_t)v408;
	i1 v410 = *(i1*)(intptr_t)v409;
	i1 v411 = (i1)+0;
	if (v410==v411) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

c02_0073:;

c02_006d:;

	i8 v412 = (i8)(intptr_t)(ws+632);
	i8 v413 = *(i8*)(intptr_t)v412;
	i8 v414 = v413+(+1);
	i8 v415 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v415 = v414;

	i8 v416 = (i8)(intptr_t)(ws+640);
	i8 v417 = *(i8*)(intptr_t)v416;
	i8 v418 = v417+(+1);
	i8 v419 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v419 = v418;

	goto c02_006b;

c02_006c:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+648);
}

// Alloc workspace at ws+784 length ws+16
void f31_Alloc(i8* p486 /* block */, i8 p487 /* length */) {
	*(i8*)(intptr_t)(ws+784) = p487; /*length */

	
*(i8*)(intptr_t)(ws+792) 
=(i8)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+784) 
); 


endsub:;
	*p486 = *(i8*)(intptr_t)(ws+792);
}

// StrDup workspace at ws+736 length ws+16
void f33_StrDup(i8* p489 /* sout */, i8 p490 /* s */) {
	*(i8*)(intptr_t)(ws+736) = p490; /*s */

	
*(i8*)(intptr_t)(ws+744) 
=(i8)strdup((const char*) 
*(i8*)(intptr_t)(ws+736) 
); 


endsub:;
	*p489 = *(i8*)(intptr_t)(ws+744);
}

// GetFreeMemory workspace at ws+632 length ws+8
void f35_GetFreeMemory(i8* p491 /* i */) {

	i8 v492 = (i8)+0;
	i8 v493 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v493 = v492;

endsub:;
	*p491 = *(i8*)(intptr_t)(ws+632);
}

// fcb_i_blockin workspace at ws+808 length ws+28
void f36_fcb_i_blockin(i8 p494 /* fcb */) {
	*(i8*)(intptr_t)(ws+808) = p494; /*fcb */

	i8 v495 = (i8)(intptr_t)(ws+808);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+12);
	i1 v498 = (i1)+0;
	i8 v499 = (i8)+512;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v499, v498, v497);

	i8 v500 = (i8)(intptr_t)(ws+808);
	i8 v501 = *(i8*)(intptr_t)v500;
	i4 v502 = *(i4*)(intptr_t)v501;
	i8 v503 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v503 = v502;

	i8 v504 = (i8)(intptr_t)(ws+808);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+12);
	i8 v507 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+808);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+8);
	i4 v511 = *(i4*)(intptr_t)v510;
	i1 v512 = (i1)+9;
	i4 v513 = ((i4)v511)<<v512;
	i8 v514 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v514 = v513;

	
pread( 
*(i4*)(intptr_t)(ws+816) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+824) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+832) 
); 


	i1 v515 = (i1)+0;
	i8 v516 = (i8)(intptr_t)(ws+808);
	i8 v517 = *(i8*)(intptr_t)v516;
	i8 v518 = v517+(+6);
	*(i1*)(intptr_t)v518 = v515;

endsub:;
}

// fcb_i_blockout workspace at ws+808 length ws+28
void f37_fcb_i_blockout(i8 p519 /* fcb */) {
	*(i8*)(intptr_t)(ws+808) = p519; /*fcb */

	i8 v520 = (i8)(intptr_t)(ws+808);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = v521+(+6);
	i1 v523 = *(i1*)(intptr_t)v522;
	i1 v524 = (i1)+0;
	if (v523==v524) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v525 = (i8)(intptr_t)(ws+808);
	i8 v526 = *(i8*)(intptr_t)v525;
	i4 v527 = *(i4*)(intptr_t)v526;
	i8 v528 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v528 = v527;

	i8 v529 = (i8)(intptr_t)(ws+808);
	i8 v530 = *(i8*)(intptr_t)v529;
	i8 v531 = v530+(+12);
	i8 v532 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v532 = v531;

	i8 v533 = (i8)(intptr_t)(ws+808);
	i8 v534 = *(i8*)(intptr_t)v533;
	i8 v535 = v534+(+8);
	i4 v536 = *(i4*)(intptr_t)v535;
	i1 v537 = (i1)+9;
	i4 v538 = ((i4)v536)<<v537;
	i8 v539 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v539 = v538;

	
pwrite( 
*(i4*)(intptr_t)(ws+816) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+824) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+832) 
); 


	i1 v540 = (i1)+0;
	i8 v541 = (i8)(intptr_t)(ws+808);
	i8 v542 = *(i8*)(intptr_t)v541;
	i8 v543 = v542+(+6);
	*(i1*)(intptr_t)v543 = v540;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}

// fcb_i_changeblock workspace at ws+792 length ws+12
void f38_fcb_i_changeblock(i4 p544 /* newblock */, i8 p545 /* fcb */) {
	*(i8*)(intptr_t)(ws+792) = p545; /*fcb */
	*(i4*)(intptr_t)(ws+800) = p544; /*newblock */

	i8 v546 = (i8)(intptr_t)(ws+800);
	i4 v547 = *(i4*)(intptr_t)v546;
	i8 v548 = (i8)(intptr_t)(ws+792);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+8);
	i4 v551 = *(i4*)(intptr_t)v550;
	if (v547==v551) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v552 = (i8)(intptr_t)(ws+792);
	i8 v553 = *(i8*)(intptr_t)v552;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v553);

	i8 v554 = (i8)(intptr_t)(ws+800);
	i4 v555 = *(i4*)(intptr_t)v554;
	i8 v556 = (i8)(intptr_t)(ws+792);
	i8 v557 = *(i8*)(intptr_t)v556;
	i8 v558 = v557+(+8);
	*(i4*)(intptr_t)v558 = v555;

	i8 v559 = (i8)(intptr_t)(ws+792);
	i8 v560 = *(i8*)(intptr_t)v559;

void f36_fcb_i_blockin(i8 /* fcb */);
	f36_fcb_i_blockin(v560);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}

// fcb_i_open workspace at ws+744 length ws+28
void f39_fcb_i_open(i1* p561 /* errno */, i4 p562 /* flags */, i8 p563 /* filename */, i8 p564 /* fcb */) {
	*(i8*)(intptr_t)(ws+744) = p564; /*fcb */
	*(i8*)(intptr_t)(ws+752) = p563; /*filename */
	*(i4*)(intptr_t)(ws+760) = p562; /*flags */

	i8 v565 = (i8)(intptr_t)(ws+744);
	i8 v566 = *(i8*)(intptr_t)v565;
	i1 v567 = (i1)+0;
	i8 v568 = (i8)+524;

void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	f7_MemSet(v568, v567, v566);

	i2 v569 = (i2)+511;
	i8 v570 = (i8)(intptr_t)(ws+744);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = v571+(+4);
	*(i2*)(intptr_t)v572 = v569;

	i4 v573 = (i4)-1;
	i8 v574 = (i8)(intptr_t)(ws+744);
	i8 v575 = *(i8*)(intptr_t)v574;
	i8 v576 = v575+(+8);
	*(i4*)(intptr_t)v576 = v573;

	
errno = 0; 


	
*(i4*)(intptr_t)(ws+768) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+752) 
,  
*(i4*)(intptr_t)(ws+760) 
,  
(+438)
); 


	i8 v577 = (i8)(intptr_t)(ws+768);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+744);
	i8 v580 = *(i8*)(intptr_t)v579;
	*(i4*)(intptr_t)v580 = v578;

	i8 v581 = (i8)(intptr_t)(ws+768);
	i4 v582 = *(i4*)(intptr_t)v581;
	i4 v583 = (i4)+0;
	if ((s4)v582<(s4)v583) goto c02_0096; else goto c02_0097;

c02_0096:;

	
*(i1*)(intptr_t)(ws+764) 
 = errno; 


	goto c02_0093;

c02_0097:;

	i1 v584 = (i1)+0;
	i8 v585 = (i8)(intptr_t)(ws+764);
	*(i1*)(intptr_t)v585 = v584;

c02_0093:;

endsub:;
	*p561 = *(i1*)(intptr_t)(ws+764);
}

// FCBOpenIn workspace at ws+720 length ws+17
void f40_FCBOpenIn(i1* p586 /* errno */, i8 p587 /* filename */, i8 p588 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p588; /*fcb */
	*(i8*)(intptr_t)(ws+728) = p587; /*filename */

	i8 v589 = (i8)(intptr_t)(ws+720);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = (i8)(intptr_t)(ws+728);
	i8 v592 = *(i8*)(intptr_t)v591;
	i4 v593 = (i4)+0;

void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v594;
	f39_fcb_i_open(&v594, v593, v592, v590);
	i8 v595 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v595 = v594;

endsub:;
	*p586 = *(i1*)(intptr_t)(ws+736);
}

// FCBOpenOut workspace at ws+640 length ws+17
void f42_FCBOpenOut(i1* p606 /* errno */, i8 p607 /* filename */, i8 p608 /* fcb */) {
	*(i8*)(intptr_t)(ws+640) = p608; /*fcb */
	*(i8*)(intptr_t)(ws+648) = p607; /*filename */

	i8 v609 = (i8)(intptr_t)(ws+640);
	i8 v610 = *(i8*)(intptr_t)v609;
	i8 v611 = (i8)(intptr_t)(ws+648);
	i8 v612 = *(i8*)(intptr_t)v611;
	i4 v613 = (i4)+578;

void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);
	i1 v614;
	f39_fcb_i_open(&v614, v613, v612, v610);
	i8 v615 = (i8)(intptr_t)(ws+656);
	*(i1*)(intptr_t)v615 = v614;

endsub:;
	*p606 = *(i1*)(intptr_t)(ws+656);
}

// FCBClose workspace at ws+632 length ws+16
void f43_FCBClose(i1* p616 /* errno */, i8 p617 /* fcb */) {
	*(i8*)(intptr_t)(ws+632) = p617; /*fcb */

	i8 v618 = (i8)(intptr_t)(ws+632);
	i8 v619 = *(i8*)(intptr_t)v618;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v619);

	i8 v620 = (i8)(intptr_t)(ws+632);
	i8 v621 = *(i8*)(intptr_t)v620;
	i4 v622 = *(i4*)(intptr_t)v621;
	i8 v623 = (i8)(intptr_t)(ws+644);
	*(i4*)(intptr_t)v623 = v622;

	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+644) 
); 


	
*(i1*)(intptr_t)(ws+640) 
 = errno; 


endsub:;
	*p616 = *(i1*)(intptr_t)(ws+640);
}

// FCBSeek workspace at ws+720 length ws+18
void f44_FCBSeek(i4 p624 /* pos */, i8 p625 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p625; /*fcb */
	*(i4*)(intptr_t)(ws+728) = p624; /*pos */

	i8 v626 = (i8)(intptr_t)(ws+728);
	i4 v627 = *(i4*)(intptr_t)v626;
	i4 v628 = v627+(-1);
	i8 v629 = (i8)(intptr_t)(ws+728);
	*(i4*)(intptr_t)v629 = v628;

	i8 v630 = (i8)(intptr_t)(ws+728);
	i4 v631 = *(i4*)(intptr_t)v630;
	i1 v632 = (i1)+9;
	i4 v633 = ((i4)v631)>>v632;
	i8 v634 = (i8)(intptr_t)(ws+732);
	*(i4*)(intptr_t)v634 = v633;

	i8 v635 = (i8)(intptr_t)(ws+728);
	i4 v636 = *(i4*)(intptr_t)v635;
	i2 v637 = v636;
	i2 v638 = v637&(+511);
	i8 v639 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v639 = v638;

	i8 v640 = (i8)(intptr_t)(ws+720);
	i8 v641 = *(i8*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+732);
	i4 v643 = *(i4*)(intptr_t)v642;

void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v643, v641);

	i8 v644 = (i8)(intptr_t)(ws+736);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+720);
	i8 v647 = *(i8*)(intptr_t)v646;
	i8 v648 = v647+(+4);
	*(i2*)(intptr_t)v648 = v645;

endsub:;
}

// FCBPos workspace at ws+656 length ws+12
void f45_FCBPos(i4* p649 /* pos */, i8 p650 /* fcb */) {
	*(i8*)(intptr_t)(ws+656) = p650; /*fcb */

	i8 v651 = (i8)(intptr_t)(ws+656);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+8);
	i4 v654 = *(i4*)(intptr_t)v653;
	i1 v655 = (i1)+9;
	i4 v656 = ((i4)v654)<<v655;
	i8 v657 = (i8)(intptr_t)(ws+656);
	i8 v658 = *(i8*)(intptr_t)v657;
	i8 v659 = v658+(+4);
	i2 v660 = *(i2*)(intptr_t)v659;
	i4 v661 = v660;
	i4 v662 = v656|v661;
	i4 v663 = v662+(+1);
	i8 v664 = (i8)(intptr_t)(ws+664);
	*(i4*)(intptr_t)v664 = v663;

endsub:;
	*p649 = *(i4*)(intptr_t)(ws+664);
}

// FCBExt workspace at ws+656 length ws+16
void f46_FCBExt(i4* p665 /* len */, i8 p666 /* fcb */) {
	*(i8*)(intptr_t)(ws+656) = p666; /*fcb */

	i8 v667 = (i8)(intptr_t)(ws+656);
	i8 v668 = *(i8*)(intptr_t)v667;

void f37_fcb_i_blockout(i8 /* fcb */);
	f37_fcb_i_blockout(v668);

	i8 v669 = (i8)(intptr_t)(ws+656);
	i8 v670 = *(i8*)(intptr_t)v669;
	i4 v671 = *(i4*)(intptr_t)v670;
	i8 v672 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v672 = v671;

	
*(i4*)(intptr_t)(ws+664) 
 = lseek( 
*(i4*)(intptr_t)(ws+668) 
, 0, SEEK_END); 


	i8 v673 = (i8)(intptr_t)(ws+664);
	i4 v674 = *(i4*)(intptr_t)v673;
	i4 v675 = v674+(+511);
	i4 v676 = v675&(-512);
	i8 v677 = (i8)(intptr_t)(ws+664);
	*(i4*)(intptr_t)v677 = v676;

endsub:;
	*p665 = *(i4*)(intptr_t)(ws+664);
}

// fcb_i_nextchar workspace at ws+784 length ws+8
void f47_fcb_i_nextchar(i8 p678 /* fcb */) {
	*(i8*)(intptr_t)(ws+784) = p678; /*fcb */

	i8 v679 = (i8)(intptr_t)(ws+784);
	i8 v680 = *(i8*)(intptr_t)v679;
	i8 v681 = v680+(+4);
	i2 v682 = *(i2*)(intptr_t)v681;
	i2 v683 = v682+(+1);
	i8 v684 = (i8)(intptr_t)(ws+784);
	i8 v685 = *(i8*)(intptr_t)v684;
	i8 v686 = v685+(+4);
	*(i2*)(intptr_t)v686 = v683;

	i8 v687 = (i8)(intptr_t)(ws+784);
	i8 v688 = *(i8*)(intptr_t)v687;
	i8 v689 = v688+(+4);
	i2 v690 = *(i2*)(intptr_t)v689;
	i2 v691 = (i2)+512;
	if (v690==v691) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v692 = (i8)(intptr_t)(ws+784);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = (i8)(intptr_t)(ws+784);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v695+(+8);
	i4 v697 = *(i4*)(intptr_t)v696;
	i4 v698 = v697+(+1);

void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);
	f38_fcb_i_changeblock(v698, v693);

	i2 v699 = (i2)+0;
	i8 v700 = (i8)(intptr_t)(ws+784);
	i8 v701 = *(i8*)(intptr_t)v700;
	i8 v702 = v701+(+4);
	*(i2*)(intptr_t)v702 = v699;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}

// FCBGetChar workspace at ws+768 length ws+9
void f48_FCBGetChar(i1* p703 /* c */, i8 p704 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p704; /*fcb */

	i8 v705 = (i8)(intptr_t)(ws+768);
	i8 v706 = *(i8*)(intptr_t)v705;

void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v706);

	i8 v707 = (i8)(intptr_t)(ws+768);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+12);
	i8 v710 = (i8)(intptr_t)(ws+768);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+4);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = v713;
	i8 v715 = v709+v714;
	i1 v716 = *(i1*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v717 = v716;

endsub:;
	*p703 = *(i1*)(intptr_t)(ws+776);
}

// FCBPutChar workspace at ws+760 length ws+9
void f49_FCBPutChar(i1 p718 /* c */, i8 p719 /* fcb */) {
	*(i8*)(intptr_t)(ws+760) = p719; /*fcb */
	*(i1*)(intptr_t)(ws+768) = p718; /*c */

	i8 v720 = (i8)(intptr_t)(ws+760);
	i8 v721 = *(i8*)(intptr_t)v720;

void f47_fcb_i_nextchar(i8 /* fcb */);
	f47_fcb_i_nextchar(v721);

	i8 v722 = (i8)(intptr_t)(ws+768);
	i1 v723 = *(i1*)(intptr_t)v722;
	i8 v724 = (i8)(intptr_t)(ws+760);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+12);
	i8 v727 = (i8)(intptr_t)(ws+760);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i8 v731 = v730;
	i8 v732 = v726+v731;
	*(i1*)(intptr_t)v732 = v723;

	i1 v733 = (i1)+1;
	i8 v734 = (i8)(intptr_t)(ws+760);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+6);
	*(i1*)(intptr_t)v736 = v733;

endsub:;
}
const i1 c02_s0000[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };

// StartError workspace at ws+728 length ws+0
void f53_StartError(void) {

	i8 v798 = (i8)(intptr_t)c02_s0000;

void f11_print(i8 /* ptr */);
	f11_print(v798);

endsub:;
}

// EndError workspace at ws+728 length ws+0
void f54_EndError(void) {


void f12_print_nl(void);
	f12_print_nl();


void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}

// SimpleError workspace at ws+656 length ws+8
void f55_SimpleError(i8 p799 /* s */) {
	*(i8*)(intptr_t)(ws+656) = p799; /*s */


void f53_StartError(void);
	f53_StartError();

	i8 v800 = (i8)(intptr_t)(ws+656);
	i8 v801 = *(i8*)(intptr_t)v800;

void f11_print(i8 /* ptr */);
	f11_print(v801);


void f54_EndError(void);
	f54_EndError();

endsub:;
}
const i1 c02_s0001[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s0002[] = { 0x27,0 };

// CannotOpen workspace at ws+720 length ws+8
void f56_CannotOpen(i8 p802 /* filename */) {
	*(i8*)(intptr_t)(ws+720) = p802; /*filename */


void f53_StartError(void);
	f53_StartError();

	i8 v803 = (i8)(intptr_t)c02_s0001;

void f11_print(i8 /* ptr */);
	f11_print(v803);

	i8 v804 = (i8)(intptr_t)(ws+720);
	i8 v805 = *(i8*)(intptr_t)v804;

void f11_print(i8 /* ptr */);
	f11_print(v805);

	i8 v806 = (i8)(intptr_t)c02_s0002;

void f11_print(i8 /* ptr */);
	f11_print(v806);


void f54_EndError(void);
	f54_EndError();

endsub:;
}

// E_b8 workspace at ws+752 length ws+1
void f57_E_b8(i1 p807 /* c */) {
	*(i1*)(intptr_t)(ws+752) = p807; /*c */

	i8 v808 = (i8)(intptr_t)(ws+44);
	i8 v809 = (i8)(intptr_t)(ws+752);
	i1 v810 = *(i1*)(intptr_t)v809;

void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	f49_FCBPutChar(v810, v808);

endsub:;
}

// E workspace at ws+736 length ws+9
void f58_E(i8 p811 /* text */) {
	*(i8*)(intptr_t)(ws+736) = p811; /*text */

c02_00b0:;

	i8 v812 = (i8)(intptr_t)(ws+736);
	i8 v813 = *(i8*)(intptr_t)v812;
	i1 v814 = *(i1*)(intptr_t)v813;
	i8 v815 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v815 = v814;

	i8 v816 = (i8)(intptr_t)(ws+736);
	i8 v817 = *(i8*)(intptr_t)v816;
	i8 v818 = v817+(+1);
	i8 v819 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v819 = v818;

	i8 v820 = (i8)(intptr_t)(ws+744);
	i1 v821 = *(i1*)(intptr_t)v820;
	i1 v822 = (i1)+0;
	if (v821==v822) goto c02_00b5; else goto c02_00b6;

c02_00b5:;

	goto c02_00b1;

c02_00b6:;

c02_00b2:;

	i8 v823 = (i8)(intptr_t)(ws+744);
	i1 v824 = *(i1*)(intptr_t)v823;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v824);

	goto c02_00b0;

c02_00b1:;

endsub:;
}

// E_u32 workspace at ws+712 length ws+33
void f59_E_u32(i4 p825 /* value */) {
	*(i4*)(intptr_t)(ws+712) = p825; /*value */

	i8 v826 = (i8)(intptr_t)(ws+716);
	i8 v827 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v827 = v826;

	i8 v828 = (i8)(intptr_t)(ws+712);
	i4 v829 = *(i4*)(intptr_t)v828;
	i1 v830 = (i1)+10;
	i8 v831 = (i8)(intptr_t)(ws+728);
	i8 v832 = *(i8*)(intptr_t)v831;

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v833;
	f13_UIToA(&v833, v832, v830, v829);
	i8 v834 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v834 = v833;

c02_00b7:;

	i8 v835 = (i8)(intptr_t)(ws+728);
	i8 v836 = *(i8*)(intptr_t)v835;
	i1 v837 = *(i1*)(intptr_t)v836;
	i8 v838 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v838 = v837;

	i8 v839 = (i8)(intptr_t)(ws+744);
	i1 v840 = *(i1*)(intptr_t)v839;
	i1 v841 = (i1)+0;
	if (v840==v841) goto c02_00bc; else goto c02_00bd;

c02_00bc:;

	goto c02_00b8;

c02_00bd:;

c02_00b9:;

	i8 v842 = (i8)(intptr_t)(ws+744);
	i1 v843 = *(i1*)(intptr_t)v842;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v843);

	i8 v844 = (i8)(intptr_t)(ws+728);
	i8 v845 = *(i8*)(intptr_t)v844;
	i8 v846 = v845+(+1);
	i8 v847 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v847 = v846;

	goto c02_00b7;

c02_00b8:;

endsub:;
}

// E_u16 workspace at ws+704 length ws+2
void f60_E_u16(i2 p848 /* value */) {
	*(i2*)(intptr_t)(ws+704) = p848; /*value */

	i8 v849 = (i8)(intptr_t)(ws+704);
	i2 v850 = *(i2*)(intptr_t)v849;
	i4 v851 = v850;

void f59_E_u32(i4 /* value */);
	f59_E_u32(v851);

endsub:;
}

// E_h workspace at ws+704 length ws+25
void f63_E_h(i1 p868 /* width */, i4 p869 /* value */) {
	*(i4*)(intptr_t)(ws+704) = p869; /*value */
	*(i1*)(intptr_t)(ws+708) = p868; /*width */

	i8 v870 = (i8)(intptr_t)(ws+704);
	i4 v871 = *(i4*)(intptr_t)v870;
	i1 v872 = (i1)+16;
	i8 v873 = (i8)(intptr_t)(ws+709);

void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	i8 v874;
	f13_UIToA(&v874, v873, v872, v871);
	i8 v875 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v875 = v874;

	i8 v876 = (i8)(intptr_t)(ws+708);
	i1 v877 = *(i1*)(intptr_t)v876;
	i8 v878 = (i8)(intptr_t)(ws+720);
	i8 v879 = *(i8*)(intptr_t)v878;
	i8 v880 = (i8)(intptr_t)(ws+709);
	i8 v881 = v879-v880;
	i1 v882 = v881;
	i1 v883 = v877-v882;
	i8 v884 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v884 = v883;

c02_00c5:;

	i8 v885 = (i8)(intptr_t)(ws+728);
	i1 v886 = *(i1*)(intptr_t)v885;
	i1 v887 = (i1)+0;
	if (v886==v887) goto c02_00c8; else goto c02_00c7;

c02_00c7:;

	i1 v888 = (i1)+48;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v888);

	i8 v889 = (i8)(intptr_t)(ws+728);
	i1 v890 = *(i1*)(intptr_t)v889;
	i1 v891 = v890+(-1);
	i8 v892 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v892 = v891;

	goto c02_00c5;

c02_00c8:;

	i8 v893 = (i8)(intptr_t)(ws+709);

void f58_E(i8 /* text */);
	f58_E(v893);

endsub:;
}

// E_h8 workspace at ws+696 length ws+1
void f64_E_h8(i1 p894 /* value */) {
	*(i1*)(intptr_t)(ws+696) = p894; /*value */

	i8 v895 = (i8)(intptr_t)(ws+696);
	i1 v896 = *(i1*)(intptr_t)v895;
	i4 v897 = v896;
	i1 v898 = (i1)+2;

void f63_E_h(i1 /* width */, i4 /* value */);
	f63_E_h(v898, v897);

endsub:;
}

// E_h16 workspace at ws+640 length ws+2
void f65_E_h16(i2 p899 /* value */) {
	*(i2*)(intptr_t)(ws+640) = p899; /*value */

	i8 v900 = (i8)(intptr_t)(ws+640);
	i2 v901 = *(i2*)(intptr_t)v900;
	i4 v902 = v901;
	i1 v903 = (i1)+4;

void f63_E_h(i1 /* width */, i4 /* value */);
	f63_E_h(v903, v902);

endsub:;
}
const i1 c02_s0003[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterOpenfile workspace at ws+632 length ws+8
void f66_EmitterOpenfile(i8 p904 /* filename */) {
	*(i8*)(intptr_t)(ws+632) = p904; /*filename */

	i8 v905 = (i8)(intptr_t)(ws+44);
	i8 v906 = (i8)(intptr_t)(ws+632);
	i8 v907 = *(i8*)(intptr_t)v906;

void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v908;
	f42_FCBOpenOut(&v908, v907, v905);
	i1 v909 = (i1)+0;
	if (v908==v909) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v910 = (i8)(intptr_t)c02_s0003;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v910);

	goto c02_00c9;

c02_00cd:;

c02_00c9:;

endsub:;
}
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };

// EmitterClosefile workspace at ws+632 length ws+0
void f67_EmitterClosefile(void) {

	i8 v911 = (i8)(intptr_t)(ws+44);

void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	i1 v912;
	f43_FCBClose(&v912, v911);
	i1 v913 = (i1)+0;
	if (v912==v913) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v914 = (i8)(intptr_t)c02_s0004;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v914);

	goto c02_00ce;

c02_00d2:;

c02_00ce:;

endsub:;
}

// ArchAlignUp workspace at ws+3088 length ws+8
void f68_ArchAlignUp(i2* p915 /* newvalue */, i1 p916 /* alignment */, i2 p917 /* value */) {
	*(i2*)(intptr_t)(ws+3088) = p917; /*value */
	*(i1*)(intptr_t)(ws+3090) = p916; /*alignment */

	i8 v918 = (i8)(intptr_t)(ws+3090);
	i1 v919 = *(i1*)(intptr_t)v918;
	i1 v920 = v919+(-1);
	i2 v921 = v920;
	i8 v922 = (i8)(intptr_t)(ws+3094);
	*(i2*)(intptr_t)v922 = v921;

	i8 v923 = (i8)(intptr_t)(ws+3088);
	i2 v924 = *(i2*)(intptr_t)v923;
	i8 v925 = (i8)(intptr_t)(ws+3094);
	i2 v926 = *(i2*)(intptr_t)v925;
	i2 v927 = v924+v926;
	i8 v928 = (i8)(intptr_t)(ws+3094);
	i2 v929 = *(i2*)(intptr_t)v928;
	i2 v930 = ~v929;
	i2 v931 = v927&v930;
	i8 v932 = (i8)(intptr_t)(ws+3092);
	*(i2*)(intptr_t)v932 = v931;

endsub:;
	*p915 = *(i2*)(intptr_t)(ws+3092);
}

// ArchEmitSubRef workspace at ws+696 length ws+8
void f70_ArchEmitSubRef(i8 p934 /* subr */) {
	*(i8*)(intptr_t)(ws+696) = p934; /*subr */

	i1 v935 = (i1)+102;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v935);

	i8 v936 = (i8)(intptr_t)(ws+696);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = v937+(+186);
	i2 v939 = *(i2*)(intptr_t)v938;

void f60_E_u16(i2 /* value */);
	f60_E_u16(v939);

	i1 v940 = (i1)+95;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v940);

	i8 v941 = (i8)(intptr_t)(ws+696);
	i8 v942 = *(i8*)(intptr_t)v941;
	i8 v943 = v942+(+152);
	i8 v944 = *(i8*)(intptr_t)v943;

void f58_E(i8 /* text */);
	f58_E(v944);

endsub:;
}
const i1 c02_s0005[] = { 0x77,0x73,0x2b,0 };

// ArchEmitWSRef workspace at ws+696 length ws+4
void f71_ArchEmitWSRef(i2 p945 /* address */, i1 p946 /* wid */) {
	*(i1*)(intptr_t)(ws+696) = p946; /*wid */
	*(i2*)(intptr_t)(ws+698) = p945; /*address */

	i8 v947 = (i8)(intptr_t)c02_s0005;

void f58_E(i8 /* text */);
	f58_E(v947);

	i8 v948 = (i8)(intptr_t)(ws+698);
	i2 v949 = *(i2*)(intptr_t)v948;

void f60_E_u16(i2 /* value */);
	f60_E_u16(v949);

endsub:;
}
const i1 c02_s0006[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
const i1 c02_s0007[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
const i1 c02_s0008[] = { 0x5d,0x3b,0x0a,0 };
const i1 c02_s0009[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x31,0x2a,0x20,0x77,0x73,0x20,0x3d,0x20,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x3b,0x0a,0 };

// ArchEmitHeader workspace at ws+632 length ws+8
void f72_ArchEmitHeader(i8 p950 /* coo */) {
	*(i8*)(intptr_t)(ws+632) = p950; /*coo */

	i8 v951 = (i8)(intptr_t)c02_s0006;

void f58_E(i8 /* text */);
	f58_E(v951);

	i8 v952 = (i8)(intptr_t)c02_s0007;

void f58_E(i8 /* text */);
	f58_E(v952);

	i8 v953 = (i8)(intptr_t)(ws+568);
	i2 v954 = *(i2*)(intptr_t)v953;
	i2 v955 = v954+(+7);
	i1 v956 = (i1)+3;
	i2 v957 = ((i2)v955)>>v956;

void f65_E_h16(i2 /* value */);
	f65_E_h16(v957);

	i8 v958 = (i8)(intptr_t)c02_s0008;

void f58_E(i8 /* text */);
	f58_E(v958);

	i8 v959 = (i8)(intptr_t)c02_s0009;

void f58_E(i8 /* text */);
	f58_E(v959);

endsub:;
}
const i1 c02_s000a[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
const i1 c02_s000b[] = { 0x28,0x29,0x3b,0x0a,0 };
const i1 c02_s000c[] = { 0x7d,0x0a,0 };

// ArchEmitFooter workspace at ws+632 length ws+20
void f73_ArchEmitFooter(i8 p960 /* coo */) {
	*(i8*)(intptr_t)(ws+632) = p960; /*coo */

	i8 v961 = (i8)(intptr_t)c02_s000a;

void f58_E(i8 /* text */);
	f58_E(v961);

c02_00d5:;

	i8 v962 = (i8)(intptr_t)(ws+632);
	i8 v963 = *(i8*)(intptr_t)v962;
	i8 v964 = (i8)+0;
	if (v963==v964) goto c02_00d8; else goto c02_00d7;

c02_00d7:;

	i8 v965 = (i8)(intptr_t)(ws+632);
	i8 v966 = *(i8*)(intptr_t)v965;
	i8 v967 = v966+(+536);
	i8 v968 = *(i8*)(intptr_t)v967;
	i8 v969 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v969 = v968;

	i8 v970 = (i8)(intptr_t)(ws+640);
	i8 v971 = *(i8*)(intptr_t)v970;
	i8 v972 = (i8)+0;
	if (v971==v972) goto c02_00dd; else goto c02_00dc;

c02_00dc:;

	i1 v973 = (i1)+9;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v973);

	i8 v974 = (i8)(intptr_t)(ws+640);
	i8 v975 = *(i8*)(intptr_t)v974;

void f70_ArchEmitSubRef(i8 /* subr */);
	f70_ArchEmitSubRef(v975);

	i8 v976 = (i8)(intptr_t)c02_s000b;

void f58_E(i8 /* text */);
	f58_E(v976);

	goto c02_00d9;

c02_00dd:;

c02_00d9:;

	i8 v977 = (i8)(intptr_t)(ws+632);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = v978+(+664);
	i8 v980 = *(i8*)(intptr_t)v979;
	i8 v981 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v981 = v980;

	goto c02_00d5;

c02_00d8:;

	i8 v982 = (i8)(intptr_t)c02_s000c;

void f58_E(i8 /* text */);
	f58_E(v982);

	i8 v983 = (i8)(intptr_t)(ws+44);

void f46_FCBExt(i4* /* len */, i8 /* fcb */);
	i4 v984;
	f46_FCBExt(&v984, v983);
	i8 v985 = (i8)(intptr_t)(ws+44);

void f45_FCBPos(i4* /* pos */, i8 /* fcb */);
	i4 v986;
	f45_FCBPos(&v986, v985);
	i4 v987 = v984-v986;
	i8 v988 = (i8)(intptr_t)(ws+648);
	*(i4*)(intptr_t)v988 = v987;

c02_00e0:;

	i8 v989 = (i8)(intptr_t)(ws+648);
	i4 v990 = *(i4*)(intptr_t)v989;
	i4 v991 = (i4)+0;
	if (v990==v991) goto c02_00e3; else goto c02_00e2;

c02_00e2:;

	i1 v992 = (i1)+32;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v992);

	i8 v993 = (i8)(intptr_t)(ws+648);
	i4 v994 = *(i4*)(intptr_t)v993;
	i4 v995 = v994+(-1);
	i8 v996 = (i8)(intptr_t)(ws+648);
	*(i4*)(intptr_t)v996 = v995;

	goto c02_00e0;

c02_00e3:;

endsub:;
}

// read_bin1 workspace at ws+752 length ws+9
void f74_read_bin1(i1* p999 /* c */, i8 p1000 /* fcb */) {
	*(i8*)(intptr_t)(ws+752) = p1000; /*fcb */

	i8 v1001 = (i8)(intptr_t)(ws+752);
	i8 v1002 = *(i8*)(intptr_t)v1001;

void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);
	i1 v1003;
	f48_FCBGetChar(&v1003, v1002);
	i8 v1004 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1004 = v1003;

endsub:;
	*p999 = *(i1*)(intptr_t)(ws+760);
}

// read_bin2 workspace at ws+720 length ws+10
void f75_read_bin2(i2* p1005 /* val */, i8 p1006 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1006; /*fcb */

	i8 v1007 = (i8)(intptr_t)(ws+720);
	i8 v1008 = *(i8*)(intptr_t)v1007;

void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	i1 v1009;
	f74_read_bin1(&v1009, v1008);
	i2 v1010 = v1009;
	i8 v1011 = (i8)(intptr_t)(ws+728);
	*(i2*)(intptr_t)v1011 = v1010;

	i8 v1012 = (i8)(intptr_t)(ws+728);
	i2 v1013 = *(i2*)(intptr_t)v1012;
	i8 v1014 = (i8)(intptr_t)(ws+720);
	i8 v1015 = *(i8*)(intptr_t)v1014;

void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	i1 v1016;
	f74_read_bin1(&v1016, v1015);
	i2 v1017 = v1016;
	i1 v1018 = (i1)+8;
	i2 v1019 = ((i2)v1017)<<v1018;
	i2 v1020 = v1013|v1019;
	i8 v1021 = (i8)(intptr_t)(ws+728);
	*(i2*)(intptr_t)v1021 = v1020;

endsub:;
	*p1005 = *(i2*)(intptr_t)(ws+728);
}

// read_string workspace at ws+720 length ws+32
void f76_read_string(i8* p1022 /* ptr */, i1 p1023 /* len */, i8 p1024 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1024; /*fcb */
	*(i1*)(intptr_t)(ws+728) = p1023; /*len */

	i8 v1025 = (i8)(intptr_t)(ws+728);
	i1 v1026 = *(i1*)(intptr_t)v1025;
	i1 v1027 = v1026+(+1);
	i8 v1028 = v1027;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1029;
	f31_Alloc(&v1029, v1028);
	i8 v1030 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1030 = v1029;

	i8 v1031 = (i8)(intptr_t)(ws+736);
	i8 v1032 = *(i8*)(intptr_t)v1031;
	i8 v1033 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1033 = v1032;

c02_00e4:;

	i8 v1034 = (i8)(intptr_t)(ws+728);
	i1 v1035 = *(i1*)(intptr_t)v1034;
	i1 v1036 = (i1)+0;
	if (v1035==v1036) goto c02_00e9; else goto c02_00ea;

c02_00e9:;

	goto c02_00e5;

c02_00ea:;

c02_00e6:;

	i8 v1037 = (i8)(intptr_t)(ws+720);
	i8 v1038 = *(i8*)(intptr_t)v1037;

void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	i1 v1039;
	f74_read_bin1(&v1039, v1038);
	i8 v1040 = (i8)(intptr_t)(ws+744);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	*(i1*)(intptr_t)v1041 = v1039;

	i8 v1042 = (i8)(intptr_t)(ws+744);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	i8 v1044 = v1043+(+1);
	i8 v1045 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1045 = v1044;

	i8 v1046 = (i8)(intptr_t)(ws+728);
	i1 v1047 = *(i1*)(intptr_t)v1046;
	i1 v1048 = v1047+(-1);
	i8 v1049 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1049 = v1048;

	goto c02_00e4;

c02_00e5:;

endsub:;
	*p1022 = *(i8*)(intptr_t)(ws+736);
}

// AddRef workspace at ws+720 length ws+32
void f77_AddRef(i8 p1050 /* calls */, i8 p1051 /* subr */) {
	*(i8*)(intptr_t)(ws+720) = p1051; /*subr */
	*(i8*)(intptr_t)(ws+728) = p1050; /*calls */

	i8 v1052 = (i8)(intptr_t)(ws+720);
	i8 v1053 = *(i8*)(intptr_t)v1052;
	i8 v1054 = v1053+(+184);
	i2 v1055 = *(i2*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1056 = v1055;

	i8 v1057 = (i8)(intptr_t)(ws+736);
	i2 v1058 = *(i2*)(intptr_t)v1057;
	i2 v1059 = v1058+(+1);
	i8 v1060 = (i8)(intptr_t)(ws+720);
	i8 v1061 = *(i8*)(intptr_t)v1060;
	i8 v1062 = v1061+(+184);
	*(i2*)(intptr_t)v1062 = v1059;

	i8 v1063 = (i8)(intptr_t)(ws+720);
	i8 v1064 = *(i8*)(intptr_t)v1063;
	i8 v1065 = v1064+(+16);
	i8 v1066 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1066 = v1065;

c02_00ed:;

	i8 v1067 = (i8)(intptr_t)(ws+736);
	i2 v1068 = *(i2*)(intptr_t)v1067;
	i2 v1069 = (i2)+16;
	if (v1068<v1069) goto c02_00f0; else goto c02_00ef;

c02_00ef:;

	i8 v1070 = (i8)(intptr_t)(ws+744);
	i8 v1071 = *(i8*)(intptr_t)v1070;
	i8 v1072 = *(i8*)(intptr_t)v1071;
	i8 v1073 = (i8)+0;
	if (v1072==v1073) goto c02_00f4; else goto c02_00f5;

c02_00f4:;

	i8 v1074 = (i8)+136;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1075;
	f31_Alloc(&v1075, v1074);
	i8 v1076 = (i8)(intptr_t)(ws+744);
	i8 v1077 = *(i8*)(intptr_t)v1076;
	*(i8*)(intptr_t)v1077 = v1075;

	goto c02_00f1;

c02_00f5:;

c02_00f1:;

	i8 v1078 = (i8)(intptr_t)(ws+744);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = *(i8*)(intptr_t)v1079;
	i8 v1081 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1081 = v1080;

	i8 v1082 = (i8)(intptr_t)(ws+736);
	i2 v1083 = *(i2*)(intptr_t)v1082;
	i2 v1084 = v1083+(-16);
	i8 v1085 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1085 = v1084;

	goto c02_00ed;

c02_00f0:;

	i8 v1086 = (i8)(intptr_t)(ws+728);
	i8 v1087 = *(i8*)(intptr_t)v1086;
	i8 v1088 = (i8)(intptr_t)(ws+744);
	i8 v1089 = *(i8*)(intptr_t)v1088;
	i8 v1090 = v1089+(+8);
	i8 v1091 = (i8)(intptr_t)(ws+736);
	i2 v1092 = *(i2*)(intptr_t)v1091;
	i1 v1093 = v1092;
	i8 v1094 = v1093;
	i1 v1095 = (i1)+3;
	i8 v1096 = ((i8)v1094)<<v1095;
	i8 v1097 = v1090+v1096;
	*(i8*)(intptr_t)v1097 = v1087;

endsub:;
}

// FindSub workspace at ws+752 length ws+32
void f78_FindSub(i8* p1098 /* ptr */, i2 p1099 /* id */, i8 p1100 /* coo */) {
	*(i8*)(intptr_t)(ws+752) = p1100; /*coo */
	*(i2*)(intptr_t)(ws+760) = p1099; /*id */

	i8 v1101 = (i8)(intptr_t)(ws+752);
	i8 v1102 = *(i8*)(intptr_t)v1101;
	i8 v1103 = v1102+(+528);
	i8 v1104 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1104 = v1103;

c02_00f8:;

	i8 v1105 = (i8)(intptr_t)(ws+760);
	i2 v1106 = *(i2*)(intptr_t)v1105;
	i2 v1107 = (i2)+16;
	if (v1106<v1107) goto c02_00fb; else goto c02_00fa;

c02_00fa:;

	i8 v1108 = (i8)(intptr_t)(ws+776);
	i8 v1109 = *(i8*)(intptr_t)v1108;
	i8 v1110 = *(i8*)(intptr_t)v1109;
	i8 v1111 = (i8)+0;
	if (v1110==v1111) goto c02_00ff; else goto c02_0100;

c02_00ff:;

	i8 v1112 = (i8)+136;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1113;
	f31_Alloc(&v1113, v1112);
	i8 v1114 = (i8)(intptr_t)(ws+776);
	i8 v1115 = *(i8*)(intptr_t)v1114;
	*(i8*)(intptr_t)v1115 = v1113;

	goto c02_00fc;

c02_0100:;

c02_00fc:;

	i8 v1116 = (i8)(intptr_t)(ws+776);
	i8 v1117 = *(i8*)(intptr_t)v1116;
	i8 v1118 = *(i8*)(intptr_t)v1117;
	i8 v1119 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1119 = v1118;

	i8 v1120 = (i8)(intptr_t)(ws+760);
	i2 v1121 = *(i2*)(intptr_t)v1120;
	i2 v1122 = v1121+(-16);
	i8 v1123 = (i8)(intptr_t)(ws+760);
	*(i2*)(intptr_t)v1123 = v1122;

	goto c02_00f8;

c02_00fb:;

	i8 v1124 = (i8)(intptr_t)(ws+776);
	i8 v1125 = *(i8*)(intptr_t)v1124;
	i8 v1126 = v1125+(+8);
	i8 v1127 = (i8)(intptr_t)(ws+760);
	i2 v1128 = *(i2*)(intptr_t)v1127;
	i1 v1129 = v1128;
	i8 v1130 = v1129;
	i1 v1131 = (i1)+3;
	i8 v1132 = ((i8)v1130)<<v1131;
	i8 v1133 = v1126+v1132;
	i8 v1134 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v1134 = v1133;

endsub:;
	*p1098 = *(i8*)(intptr_t)(ws+768);
}

// FindOrCreateSub workspace at ws+720 length ws+32
void f79_FindOrCreateSub(i8* p1135 /* subroutine */, i2 p1136 /* id */, i8 p1137 /* coo */) {
	*(i8*)(intptr_t)(ws+720) = p1137; /*coo */
	*(i2*)(intptr_t)(ws+728) = p1136; /*id */

	i8 v1138 = (i8)(intptr_t)(ws+720);
	i8 v1139 = *(i8*)(intptr_t)v1138;
	i8 v1140 = (i8)(intptr_t)(ws+728);
	i2 v1141 = *(i2*)(intptr_t)v1140;

void f78_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	i8 v1142;
	f78_FindSub(&v1142, v1141, v1139);
	i8 v1143 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1143 = v1142;

	i8 v1144 = (i8)(intptr_t)(ws+744);
	i8 v1145 = *(i8*)(intptr_t)v1144;
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1147 = v1146;

	i8 v1148 = (i8)(intptr_t)(ws+736);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	i8 v1150 = (i8)+0;
	if (v1149==v1150) goto c02_0104; else goto c02_0105;

c02_0104:;

	i8 v1151 = (i8)+189;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1152;
	f31_Alloc(&v1152, v1151);
	i8 v1153 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1153 = v1152;

	i8 v1154 = (i8)(intptr_t)(ws+720);
	i8 v1155 = *(i8*)(intptr_t)v1154;
	i8 v1156 = (i8)(intptr_t)(ws+736);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	*(i8*)(intptr_t)v1157 = v1155;

	i8 v1158 = (i8)(intptr_t)(ws+32);
	i8 v1159 = *(i8*)(intptr_t)v1158;
	i8 v1160 = (i8)(intptr_t)(ws+736);
	i8 v1161 = *(i8*)(intptr_t)v1160;
	i8 v1162 = v1161+(+8);
	*(i8*)(intptr_t)v1162 = v1159;

	i8 v1163 = (i8)(intptr_t)(ws+736);
	i8 v1164 = *(i8*)(intptr_t)v1163;
	i8 v1165 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1165 = v1164;

	i8 v1166 = (i8)(intptr_t)(ws+40);
	i2 v1167 = *(i2*)(intptr_t)v1166;
	i8 v1168 = (i8)(intptr_t)(ws+736);
	i8 v1169 = *(i8*)(intptr_t)v1168;
	i8 v1170 = v1169+(+186);
	*(i2*)(intptr_t)v1170 = v1167;

	i8 v1171 = (i8)(intptr_t)(ws+736);
	i8 v1172 = *(i8*)(intptr_t)v1171;
	i8 v1173 = (i8)(intptr_t)(ws+744);
	i8 v1174 = *(i8*)(intptr_t)v1173;
	*(i8*)(intptr_t)v1174 = v1172;

	i8 v1175 = (i8)(intptr_t)(ws+40);
	i2 v1176 = *(i2*)(intptr_t)v1175;
	i2 v1177 = v1176+(+1);
	i8 v1178 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1178 = v1177;

	goto c02_0101;

c02_0105:;

c02_0101:;

endsub:;
	*p1135 = *(i8*)(intptr_t)(ws+736);
}

// Deref workspace at ws+3088 length ws+24
void f80_Deref(i8* p1179 /* subout */, i8 p1180 /* subin */) {
	*(i8*)(intptr_t)(ws+3088) = p1180; /*subin */

	i8 v1181 = (i8)(intptr_t)(ws+3088);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i8 v1183 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v1183 = v1182;

	i8 v1184 = (i8)(intptr_t)(ws+3088);
	i8 v1185 = *(i8*)(intptr_t)v1184;
	i8 v1186 = (i8)+0;
	if (v1185==v1186) goto c02_010a; else goto c02_0109;

c02_0109:;

	i8 v1187 = (i8)(intptr_t)(ws+3088);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = v1188+(+160);
	i8 v1190 = *(i8*)(intptr_t)v1189;
	i8 v1191 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1191 = v1190;

	i8 v1192 = (i8)(intptr_t)(ws+3104);
	i8 v1193 = *(i8*)(intptr_t)v1192;
	i8 v1194 = (i8)+0;
	if (v1193==v1194) goto c02_010f; else goto c02_010e;

c02_010e:;

	i8 v1195 = (i8)(intptr_t)(ws+3104);
	i8 v1196 = *(i8*)(intptr_t)v1195;
	i8 v1197 = v1196+(+16);
	i8 v1198 = *(i8*)(intptr_t)v1197;
	i8 v1199 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v1199 = v1198;

	goto c02_010b;

c02_010f:;

c02_010b:;

	goto c02_0106;

c02_010a:;

c02_0106:;

endsub:;
	*p1179 = *(i8*)(intptr_t)(ws+3096);
}

// FindOrCreateExternal workspace at ws+720 length ws+16
void f81_FindOrCreateExternal(i8* p1200 /* external */, i8 p1201 /* name */) {
	*(i8*)(intptr_t)(ws+720) = p1201; /*name */

	i8 v1202 = (i8)(intptr_t)(ws+24);
	i8 v1203 = *(i8*)(intptr_t)v1202;
	i8 v1204 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1204 = v1203;

c02_0112:;

	i8 v1205 = (i8)(intptr_t)(ws+728);
	i8 v1206 = *(i8*)(intptr_t)v1205;
	i8 v1207 = (i8)+0;
	if (v1206==v1207) goto c02_0115; else goto c02_0114;

c02_0114:;

	i8 v1208 = (i8)(intptr_t)(ws+728);
	i8 v1209 = *(i8*)(intptr_t)v1208;
	i8 v1210 = v1209+(+8);
	i8 v1211 = *(i8*)(intptr_t)v1210;
	i8 v1212 = (i8)(intptr_t)(ws+720);
	i8 v1213 = *(i8*)(intptr_t)v1212;

void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v1214;
	f25_StrCmp(&v1214, v1213, v1211);
	i1 v1215 = (i1)+0;
	if (v1214==v1215) goto c02_0119; else goto c02_011a;

c02_0119:;

	goto endsub;

c02_011a:;

c02_0116:;

	i8 v1216 = (i8)(intptr_t)(ws+728);
	i8 v1217 = *(i8*)(intptr_t)v1216;
	i8 v1218 = *(i8*)(intptr_t)v1217;
	i8 v1219 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1219 = v1218;

	goto c02_0112;

c02_0115:;

	i8 v1220 = (i8)+24;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1221;
	f31_Alloc(&v1221, v1220);
	i8 v1222 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1222 = v1221;

	i8 v1223 = (i8)(intptr_t)(ws+24);
	i8 v1224 = *(i8*)(intptr_t)v1223;
	i8 v1225 = (i8)(intptr_t)(ws+728);
	i8 v1226 = *(i8*)(intptr_t)v1225;
	*(i8*)(intptr_t)v1226 = v1224;

	i8 v1227 = (i8)(intptr_t)(ws+720);
	i8 v1228 = *(i8*)(intptr_t)v1227;

void f33_StrDup(i8* /* sout */, i8 /* s */);
	i8 v1229;
	f33_StrDup(&v1229, v1228);
	i8 v1230 = (i8)(intptr_t)(ws+728);
	i8 v1231 = *(i8*)(intptr_t)v1230;
	i8 v1232 = v1231+(+8);
	*(i8*)(intptr_t)v1232 = v1229;

	i8 v1233 = (i8)(intptr_t)(ws+728);
	i8 v1234 = *(i8*)(intptr_t)v1233;
	i8 v1235 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1235 = v1234;

endsub:;
	*p1200 = *(i8*)(intptr_t)(ws+728);
}
const i1 c02_s000d[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6f,0x66,0x20,0x27,0 };
const i1 c02_s000e[] = { 0x27,0 };
const i1 c02_s000f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
const i1 c02_s0010[] = { 0x27,0x20,0x69,0x6e,0x20,0 };
const i1 c02_s0011[] = { 0x20,0x61,0x74,0x20,0 };

// OpenAndLoadCoo workspace at ws+656 length ws+64
void f82_OpenAndLoadCoo(i8* p1236 /* coo */, i8 p1237 /* filename */) {
	*(i8*)(intptr_t)(ws+656) = p1237; /*filename */

	i8 v1238 = (i8)+674;

void f31_Alloc(i8* /* block */, i8 /* length */);
	i8 v1239;
	f31_Alloc(&v1239, v1238);
	i8 v1240 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1240 = v1239;

	i8 v1241 = (i8)(intptr_t)(ws+40);
	i2 v1242 = *(i2*)(intptr_t)v1241;
	i8 v1243 = (i8)(intptr_t)(ws+664);
	i8 v1244 = *(i8*)(intptr_t)v1243;
	i8 v1245 = v1244+(+672);
	*(i2*)(intptr_t)v1245 = v1242;

	i8 v1246 = (i8)(intptr_t)(ws+40);
	i2 v1247 = *(i2*)(intptr_t)v1246;
	i2 v1248 = v1247+(+1);
	i8 v1249 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1249 = v1248;

	i8 v1250 = (i8)(intptr_t)(ws+664);
	i8 v1251 = *(i8*)(intptr_t)v1250;
	i8 v1252 = (i8)(intptr_t)(ws+656);
	i8 v1253 = *(i8*)(intptr_t)v1252;

void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	i1 v1254;
	f40_FCBOpenIn(&v1254, v1253, v1251);
	i1 v1255 = (i1)+0;
	if (v1254==v1255) goto c02_011f; else goto c02_011e;

c02_011e:;

	i8 v1256 = (i8)(intptr_t)(ws+656);
	i8 v1257 = *(i8*)(intptr_t)v1256;

void f56_CannotOpen(i8 /* filename */);
	f56_CannotOpen(v1257);

	goto c02_011b;

c02_011f:;

c02_011b:;

	i4 v1258 = (i4)+0;
	i8 v1259 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1259 = v1258;

c02_0120:;

	i8 v1260 = (i8)(intptr_t)(ws+664);
	i8 v1261 = *(i8*)(intptr_t)v1260;
	i8 v1262 = (i8)(intptr_t)(ws+676);
	i4 v1263 = *(i4*)(intptr_t)v1262;

void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	f44_FCBSeek(v1263, v1261);

	i8 v1264 = (i8)(intptr_t)(ws+664);
	i8 v1265 = *(i8*)(intptr_t)v1264;

void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	i1 v1266;
	f74_read_bin1(&v1266, v1265);
	i8 v1267 = (i8)(intptr_t)(ws+680);
	*(i1*)(intptr_t)v1267 = v1266;

	i8 v1268 = (i8)(intptr_t)(ws+664);
	i8 v1269 = *(i8*)(intptr_t)v1268;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1270;
	f75_read_bin2(&v1270, v1269);
	i8 v1271 = (i8)(intptr_t)(ws+682);
	*(i2*)(intptr_t)v1271 = v1270;

	i8 v1272 = (i8)(intptr_t)(ws+680);
	i1 v1273 = *(i1*)(intptr_t)v1272;
	i1 v1274 = (i1)+69;
	if (v1273==v1274) goto c02_0125; else goto c02_0126;

c02_0125:;

	goto c02_0121;

c02_0126:;

	i8 v1275 = (i8)(intptr_t)(ws+680);
	i1 v1276 = *(i1*)(intptr_t)v1275;
	i1 v1277 = (i1)+83;
	if (v1276==v1277) goto c02_0129; else goto c02_012a;

c02_0129:;

	i8 v1278 = (i8)(intptr_t)(ws+664);
	i8 v1279 = *(i8*)(intptr_t)v1278;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1280;
	f75_read_bin2(&v1280, v1279);
	i8 v1281 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1281 = v1280;

	i8 v1282 = (i8)(intptr_t)(ws+664);
	i8 v1283 = *(i8*)(intptr_t)v1282;
	i8 v1284 = (i8)(intptr_t)(ws+672);
	i2 v1285 = *(i2*)(intptr_t)v1284;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1286;
	f79_FindOrCreateSub(&v1286, v1285, v1283);
	i8 v1287 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1287 = v1286;

	i8 v1288 = (i8)(intptr_t)(ws+688);
	i8 v1289 = *(i8*)(intptr_t)v1288;
	i8 v1290 = v1289+(+188);
	i1 v1291 = *(i1*)(intptr_t)v1290;
	i1 v1292 = v1291|(+2);
	i8 v1293 = (i8)(intptr_t)(ws+688);
	i8 v1294 = *(i8*)(intptr_t)v1293;
	i8 v1295 = v1294+(+188);
	*(i1*)(intptr_t)v1295 = v1292;

	goto c02_0122;

c02_012a:;

	i8 v1296 = (i8)(intptr_t)(ws+680);
	i1 v1297 = *(i1*)(intptr_t)v1296;
	i1 v1298 = (i1)+82;
	if (v1297==v1298) goto c02_012d; else goto c02_012e;

c02_012d:;

	i8 v1299 = (i8)(intptr_t)(ws+664);
	i8 v1300 = *(i8*)(intptr_t)v1299;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1301;
	f75_read_bin2(&v1301, v1300);
	i8 v1302 = (i8)(intptr_t)(ws+696);
	*(i2*)(intptr_t)v1302 = v1301;

	i8 v1303 = (i8)(intptr_t)(ws+664);
	i8 v1304 = *(i8*)(intptr_t)v1303;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1305;
	f75_read_bin2(&v1305, v1304);
	i8 v1306 = (i8)(intptr_t)(ws+698);
	*(i2*)(intptr_t)v1306 = v1305;

	i8 v1307 = (i8)(intptr_t)(ws+664);
	i8 v1308 = *(i8*)(intptr_t)v1307;
	i8 v1309 = (i8)(intptr_t)(ws+696);
	i2 v1310 = *(i2*)(intptr_t)v1309;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1311;
	f79_FindOrCreateSub(&v1311, v1310, v1308);
	i8 v1312 = (i8)(intptr_t)(ws+664);
	i8 v1313 = *(i8*)(intptr_t)v1312;
	i8 v1314 = (i8)(intptr_t)(ws+698);
	i2 v1315 = *(i2*)(intptr_t)v1314;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1316;
	f79_FindOrCreateSub(&v1316, v1315, v1313);

void f77_AddRef(i8 /* calls */, i8 /* subr */);
	f77_AddRef(v1316, v1311);

	goto c02_0122;

c02_012e:;

	i8 v1317 = (i8)(intptr_t)(ws+680);
	i1 v1318 = *(i1*)(intptr_t)v1317;
	i1 v1319 = (i1)+87;
	if (v1318==v1319) goto c02_0131; else goto c02_0132;

c02_0131:;

	i8 v1320 = (i8)(intptr_t)(ws+664);
	i8 v1321 = *(i8*)(intptr_t)v1320;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1322;
	f75_read_bin2(&v1322, v1321);
	i8 v1323 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1323 = v1322;

	i8 v1324 = (i8)(intptr_t)(ws+664);
	i8 v1325 = *(i8*)(intptr_t)v1324;
	i8 v1326 = (i8)(intptr_t)(ws+672);
	i2 v1327 = *(i2*)(intptr_t)v1326;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1328;
	f79_FindOrCreateSub(&v1328, v1327, v1325);
	i8 v1329 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1329 = v1328;

	i8 v1330 = (i8)(intptr_t)(ws+664);
	i8 v1331 = *(i8*)(intptr_t)v1330;

void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	i1 v1332;
	f74_read_bin1(&v1332, v1331);
	i8 v1333 = (i8)(intptr_t)(ws+700);
	*(i1*)(intptr_t)v1333 = v1332;

	i8 v1334 = (i8)(intptr_t)(ws+664);
	i8 v1335 = *(i8*)(intptr_t)v1334;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1336;
	f75_read_bin2(&v1336, v1335);
	i8 v1337 = (i8)(intptr_t)(ws+688);
	i8 v1338 = *(i8*)(intptr_t)v1337;
	i8 v1339 = v1338+(+168);
	i8 v1340 = (i8)(intptr_t)(ws+700);
	i1 v1341 = *(i1*)(intptr_t)v1340;
	i8 v1342 = v1341;
	i1 v1343 = (i1)+1;
	i8 v1344 = ((i8)v1342)<<v1343;
	i8 v1345 = v1339+v1344;
	*(i2*)(intptr_t)v1345 = v1336;

	goto c02_0122;

c02_0132:;

	i8 v1346 = (i8)(intptr_t)(ws+680);
	i1 v1347 = *(i1*)(intptr_t)v1346;
	i1 v1348 = (i1)+78;
	if (v1347==v1348) goto c02_0135; else goto c02_0136;

c02_0135:;

	i8 v1349 = (i8)(intptr_t)(ws+664);
	i8 v1350 = *(i8*)(intptr_t)v1349;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1351;
	f75_read_bin2(&v1351, v1350);
	i8 v1352 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1352 = v1351;

	i8 v1353 = (i8)(intptr_t)(ws+664);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = (i8)(intptr_t)(ws+672);
	i2 v1356 = *(i2*)(intptr_t)v1355;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1357;
	f79_FindOrCreateSub(&v1357, v1356, v1354);
	i8 v1358 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1358 = v1357;

	i8 v1359 = (i8)(intptr_t)(ws+664);
	i8 v1360 = *(i8*)(intptr_t)v1359;
	i8 v1361 = (i8)(intptr_t)(ws+682);
	i2 v1362 = *(i2*)(intptr_t)v1361;
	i1 v1363 = v1362;
	i1 v1364 = v1363+(-2);

void f76_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	i8 v1365;
	f76_read_string(&v1365, v1364, v1360);
	i8 v1366 = (i8)(intptr_t)(ws+688);
	i8 v1367 = *(i8*)(intptr_t)v1366;
	i8 v1368 = v1367+(+152);
	*(i8*)(intptr_t)v1368 = v1365;

	goto c02_0122;

c02_0136:;

	i8 v1369 = (i8)(intptr_t)(ws+680);
	i1 v1370 = *(i1*)(intptr_t)v1369;
	i1 v1371 = (i1)+88;
	if (v1370==v1371) goto c02_0139; else goto c02_013a;

c02_0139:;

	i8 v1372 = (i8)(intptr_t)(ws+664);
	i8 v1373 = *(i8*)(intptr_t)v1372;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1374;
	f75_read_bin2(&v1374, v1373);
	i8 v1375 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1375 = v1374;

	i8 v1376 = (i8)(intptr_t)(ws+664);
	i8 v1377 = *(i8*)(intptr_t)v1376;
	i8 v1378 = (i8)(intptr_t)(ws+672);
	i2 v1379 = *(i2*)(intptr_t)v1378;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1380;
	f79_FindOrCreateSub(&v1380, v1379, v1377);
	i8 v1381 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1381 = v1380;

	i8 v1382 = (i8)(intptr_t)(ws+664);
	i8 v1383 = *(i8*)(intptr_t)v1382;
	i8 v1384 = (i8)(intptr_t)(ws+682);
	i2 v1385 = *(i2*)(intptr_t)v1384;
	i1 v1386 = v1385;
	i1 v1387 = v1386+(-2);

void f76_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	i8 v1388;
	f76_read_string(&v1388, v1387, v1383);
	i8 v1389 = (i8)(intptr_t)(ws+704);
	*(i8*)(intptr_t)v1389 = v1388;

	i8 v1390 = (i8)(intptr_t)(ws+704);
	i8 v1391 = *(i8*)(intptr_t)v1390;

void f81_FindOrCreateExternal(i8* /* external */, i8 /* name */);
	i8 v1392;
	f81_FindOrCreateExternal(&v1392, v1391);
	i8 v1393 = (i8)(intptr_t)(ws+712);
	*(i8*)(intptr_t)v1393 = v1392;

	i8 v1394 = (i8)(intptr_t)(ws+688);
	i8 v1395 = *(i8*)(intptr_t)v1394;
	i8 v1396 = v1395+(+160);
	i8 v1397 = *(i8*)(intptr_t)v1396;
	i8 v1398 = (i8)+0;
	if (v1397==v1398) goto c02_013f; else goto c02_013e;

c02_013e:;


void f53_StartError(void);
	f53_StartError();

	i8 v1399 = (i8)(intptr_t)c02_s000d;

void f11_print(i8 /* ptr */);
	f11_print(v1399);

	i8 v1400 = (i8)(intptr_t)(ws+704);
	i8 v1401 = *(i8*)(intptr_t)v1400;

void f11_print(i8 /* ptr */);
	f11_print(v1401);

	i8 v1402 = (i8)(intptr_t)c02_s000e;

void f11_print(i8 /* ptr */);
	f11_print(v1402);


void f54_EndError(void);
	f54_EndError();

	goto c02_013b;

c02_013f:;

c02_013b:;

	i8 v1403 = (i8)(intptr_t)(ws+712);
	i8 v1404 = *(i8*)(intptr_t)v1403;
	i8 v1405 = (i8)(intptr_t)(ws+688);
	i8 v1406 = *(i8*)(intptr_t)v1405;
	i8 v1407 = v1406+(+160);
	*(i8*)(intptr_t)v1407 = v1404;

	goto c02_0122;

c02_013a:;

	i8 v1408 = (i8)(intptr_t)c02_s000f;

void f11_print(i8 /* ptr */);
	f11_print(v1408);

	i8 v1409 = (i8)(intptr_t)(ws+680);
	i1 v1410 = *(i1*)(intptr_t)v1409;

void f8_print_char(i1 /* c */);
	f8_print_char(v1410);

	i8 v1411 = (i8)(intptr_t)c02_s0010;

void f11_print(i8 /* ptr */);
	f11_print(v1411);

	i8 v1412 = (i8)(intptr_t)(ws+656);
	i8 v1413 = *(i8*)(intptr_t)v1412;

void f11_print(i8 /* ptr */);
	f11_print(v1413);

	i8 v1414 = (i8)(intptr_t)c02_s0011;

void f11_print(i8 /* ptr */);
	f11_print(v1414);

	i8 v1415 = (i8)(intptr_t)(ws+676);
	i4 v1416 = *(i4*)(intptr_t)v1415;

void f20_print_hex_i32(i4 /* value */);
	f20_print_hex_i32(v1416);


void f12_print_nl(void);
	f12_print_nl();


void f6_ExitWithError(void);
	f6_ExitWithError();

c02_0122:;

	i8 v1417 = (i8)(intptr_t)(ws+676);
	i4 v1418 = *(i4*)(intptr_t)v1417;
	i8 v1419 = (i8)(intptr_t)(ws+682);
	i2 v1420 = *(i2*)(intptr_t)v1419;
	i4 v1421 = v1420;
	i4 v1422 = v1418+v1421;
	i4 v1423 = v1422+(+3);
	i8 v1424 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1424 = v1423;

	goto c02_0120;

c02_0121:;

endsub:;
	*p1236 = *(i8*)(intptr_t)(ws+664);
}
const i1 c02_s0012[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// MalformedError workspace at ws+704 length ws+8
void f84_MalformedError(i8 p1426 /* s */) {
	*(i8*)(intptr_t)(ws+704) = p1426; /*s */

	i8 v1427 = (i8)(intptr_t)c02_s0012;

void f11_print(i8 /* ptr */);
	f11_print(v1427);

	i8 v1428 = (i8)(intptr_t)(ws+704);
	i8 v1429 = *(i8*)(intptr_t)v1428;

void f11_print(i8 /* ptr */);
	f11_print(v1429);


void f12_print_nl(void);
	f12_print_nl();


void f6_ExitWithError(void);
	f6_ExitWithError();

endsub:;
}
const i1 c02_s0013[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };

// UnexpectedEndOfChunk workspace at ws+704 length ws+0
void f85_UnexpectedEndOfChunk(void) {

	i8 v1430 = (i8)(intptr_t)c02_s0013;

void f84_MalformedError(i8 /* s */);
	f84_MalformedError(v1430);

endsub:;
}

// ReadB1 workspace at ws+696 length ws+1
void f86_ReadB1(i1* p1431 /* result */) {

	i8 v1432 = (i8)(intptr_t)(ws+666);
	i2 v1433 = *(i2*)(intptr_t)v1432;
	i2 v1434 = (i2)+1;
	if (v1433<v1434) goto c02_0143; else goto c02_0144;

c02_0143:;


void f85_UnexpectedEndOfChunk(void);
	f85_UnexpectedEndOfChunk();

	goto c02_0140;

c02_0144:;

c02_0140:;

	i8 v1435 = (i8)(intptr_t)(ws+666);
	i2 v1436 = *(i2*)(intptr_t)v1435;
	i2 v1437 = v1436+(-1);
	i8 v1438 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1438 = v1437;

	i8 v1439 = (i8)(intptr_t)(ws+640);
	i8 v1440 = *(i8*)(intptr_t)v1439;

void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	i1 v1441;
	f74_read_bin1(&v1441, v1440);
	i8 v1442 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1442 = v1441;

endsub:;
	*p1431 = *(i1*)(intptr_t)(ws+696);
}

// ReadB2 workspace at ws+696 length ws+2
void f87_ReadB2(i2* p1443 /* result */) {

	i8 v1444 = (i8)(intptr_t)(ws+666);
	i2 v1445 = *(i2*)(intptr_t)v1444;
	i2 v1446 = (i2)+2;
	if (v1445<v1446) goto c02_0148; else goto c02_0149;

c02_0148:;


void f85_UnexpectedEndOfChunk(void);
	f85_UnexpectedEndOfChunk();

	goto c02_0145;

c02_0149:;

c02_0145:;

	i8 v1447 = (i8)(intptr_t)(ws+666);
	i2 v1448 = *(i2*)(intptr_t)v1447;
	i2 v1449 = v1448+(-2);
	i8 v1450 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1450 = v1449;

	i8 v1451 = (i8)(intptr_t)(ws+640);
	i8 v1452 = *(i8*)(intptr_t)v1451;

void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	i2 v1453;
	f75_read_bin2(&v1453, v1452);
	i8 v1454 = (i8)(intptr_t)(ws+696);
	*(i2*)(intptr_t)v1454 = v1453;

endsub:;
	*p1443 = *(i2*)(intptr_t)(ws+696);
}
const i1 c02_s0014[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
const i1 c02_s0015[] = { 0x27,0 };
const i1 c02_s0016[] = { 0x27,0 };
const i1 c02_s0017[] = { 0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x6e,0x6f,0x6e,0x79,0x6d,0x6f,0x75,0x73,0 };

// CheckSubExists workspace at ws+696 length ws+8
void f88_CheckSubExists(i8 p1455 /* subr */) {
	*(i8*)(intptr_t)(ws+696) = p1455; /*subr */

	i8 v1456 = (i8)(intptr_t)(ws+696);
	i8 v1457 = *(i8*)(intptr_t)v1456;
	i8 v1458 = v1457+(+188);
	i1 v1459 = *(i1*)(intptr_t)v1458;
	i1 v1460 = v1459&(+2);
	i1 v1461 = (i1)+0;
	if (v1460==v1461) goto c02_014d; else goto c02_014e;

c02_014d:;


void f53_StartError(void);
	f53_StartError();

	i8 v1462 = (i8)(intptr_t)c02_s0014;

void f11_print(i8 /* ptr */);
	f11_print(v1462);

	i8 v1463 = (i8)(intptr_t)(ws+696);
	i8 v1464 = *(i8*)(intptr_t)v1463;
	i8 v1465 = v1464+(+152);
	i8 v1466 = *(i8*)(intptr_t)v1465;
	i8 v1467 = (i8)+0;
	if (v1466==v1467) goto c02_0153; else goto c02_0152;

c02_0152:;

	i8 v1468 = (i8)(intptr_t)c02_s0015;

void f11_print(i8 /* ptr */);
	f11_print(v1468);

	i8 v1469 = (i8)(intptr_t)(ws+696);
	i8 v1470 = *(i8*)(intptr_t)v1469;
	i8 v1471 = v1470+(+152);
	i8 v1472 = *(i8*)(intptr_t)v1471;

void f11_print(i8 /* ptr */);
	f11_print(v1472);

	i8 v1473 = (i8)(intptr_t)c02_s0016;

void f11_print(i8 /* ptr */);
	f11_print(v1473);

	goto c02_014f;

c02_0153:;

	i8 v1474 = (i8)(intptr_t)c02_s0017;

void f11_print(i8 /* ptr */);
	f11_print(v1474);

c02_014f:;


void f54_EndError(void);
	f54_EndError();

	goto c02_014a;

c02_014e:;

c02_014a:;

endsub:;
}

// CopySourceChunk workspace at ws+672 length ws+20
void f89_CopySourceChunk(void) {

c02_0156:;

	i8 v1475 = (i8)(intptr_t)(ws+666);
	i2 v1476 = *(i2*)(intptr_t)v1475;
	i2 v1477 = (i2)+0;
	if (v1476==v1477) goto c02_0159; else goto c02_0158;

c02_0158:;


void f86_ReadB1(i1* /* result */);
	i1 v1478;
	f86_ReadB1(&v1478);
	i8 v1479 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v1479 = v1478;

	i8 v1480 = (i8)(intptr_t)(ws+664);
	i1 v1481 = *(i1*)(intptr_t)v1480;

	if (v1481 != +3) goto c02_015b;

	i1 v1482 = (i1)+99;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v1482);

	i8 v1483 = (i8)(intptr_t)(ws+640);
	i8 v1484 = *(i8*)(intptr_t)v1483;
	i8 v1485 = v1484+(+672);
	i2 v1486 = *(i2*)(intptr_t)v1485;
	i1 v1487 = v1486;

void f64_E_h8(i1 /* value */);
	f64_E_h8(v1487);

	i1 v1488 = (i1)+95;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v1488);

	goto c02_015a;

c02_015b:;

	if (v1481 != +4) goto c02_015c;

	i8 v1489 = (i8)(intptr_t)(ws+656);
	i8 v1490 = *(i8*)(intptr_t)v1489;

void f70_ArchEmitSubRef(i8 /* subr */);
	f70_ArchEmitSubRef(v1490);

	goto c02_015a;

c02_015c:;

	if (v1481 != +1) goto c02_015d;


void f87_ReadB2(i2* /* result */);
	i2 v1491;
	f87_ReadB2(&v1491);
	i8 v1492 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1492 = v1491;

	i8 v1493 = (i8)(intptr_t)(ws+640);
	i8 v1494 = *(i8*)(intptr_t)v1493;
	i8 v1495 = (i8)(intptr_t)(ws+672);
	i2 v1496 = *(i2*)(intptr_t)v1495;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1497;
	f79_FindOrCreateSub(&v1497, v1496, v1494);
	i8 v1498 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1498 = v1497;

	i8 v1499 = (i8)(intptr_t)(ws+680);
	i8 v1500 = *(i8*)(intptr_t)v1499;

void f80_Deref(i8* /* subout */, i8 /* subin */);
	i8 v1501;
	f80_Deref(&v1501, v1500);
	i8 v1502 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(ws+680);
	i8 v1504 = *(i8*)(intptr_t)v1503;

void f88_CheckSubExists(i8 /* subr */);
	f88_CheckSubExists(v1504);

	i8 v1505 = (i8)(intptr_t)(ws+680);
	i8 v1506 = *(i8*)(intptr_t)v1505;

void f70_ArchEmitSubRef(i8 /* subr */);
	f70_ArchEmitSubRef(v1506);

	goto c02_015a;

c02_015d:;

	if (v1481 != +2) goto c02_015e;


void f87_ReadB2(i2* /* result */);
	i2 v1507;
	f87_ReadB2(&v1507);
	i8 v1508 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1508 = v1507;


void f86_ReadB1(i1* /* result */);
	i1 v1509;
	f86_ReadB1(&v1509);
	i8 v1510 = (i8)(intptr_t)(ws+688);
	*(i1*)(intptr_t)v1510 = v1509;


void f87_ReadB2(i2* /* result */);
	i2 v1511;
	f87_ReadB2(&v1511);
	i8 v1512 = (i8)(intptr_t)(ws+690);
	*(i2*)(intptr_t)v1512 = v1511;

	i8 v1513 = (i8)(intptr_t)(ws+640);
	i8 v1514 = *(i8*)(intptr_t)v1513;
	i8 v1515 = (i8)(intptr_t)(ws+672);
	i2 v1516 = *(i2*)(intptr_t)v1515;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1517;
	f79_FindOrCreateSub(&v1517, v1516, v1514);
	i8 v1518 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1518 = v1517;

	i8 v1519 = (i8)(intptr_t)(ws+680);
	i8 v1520 = *(i8*)(intptr_t)v1519;

void f80_Deref(i8* /* subout */, i8 /* subin */);
	i8 v1521;
	f80_Deref(&v1521, v1520);
	i8 v1522 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+680);
	i8 v1524 = *(i8*)(intptr_t)v1523;

void f88_CheckSubExists(i8 /* subr */);
	f88_CheckSubExists(v1524);

	i8 v1525 = (i8)(intptr_t)(ws+688);
	i1 v1526 = *(i1*)(intptr_t)v1525;
	i8 v1527 = (i8)(intptr_t)(ws+680);
	i8 v1528 = *(i8*)(intptr_t)v1527;
	i8 v1529 = v1528+(+176);
	i8 v1530 = (i8)(intptr_t)(ws+688);
	i1 v1531 = *(i1*)(intptr_t)v1530;
	i8 v1532 = v1531;
	i1 v1533 = (i1)+1;
	i8 v1534 = ((i8)v1532)<<v1533;
	i8 v1535 = v1529+v1534;
	i2 v1536 = *(i2*)(intptr_t)v1535;
	i8 v1537 = (i8)(intptr_t)(ws+690);
	i2 v1538 = *(i2*)(intptr_t)v1537;
	i2 v1539 = v1536+v1538;

void f71_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	f71_ArchEmitWSRef(v1539, v1526);

	goto c02_015a;

c02_015e:;

	if (v1481 != +5) goto c02_015f;


void f87_ReadB2(i2* /* result */);
	i2 v1540;
	f87_ReadB2(&v1540);
	i8 v1541 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1541 = v1540;


void f86_ReadB1(i1* /* result */);
	i1 v1542;
	f86_ReadB1(&v1542);
	i8 v1543 = (i8)(intptr_t)(ws+688);
	*(i1*)(intptr_t)v1543 = v1542;

	i8 v1544 = (i8)(intptr_t)(ws+640);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	i8 v1546 = (i8)(intptr_t)(ws+672);
	i2 v1547 = *(i2*)(intptr_t)v1546;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1548;
	f79_FindOrCreateSub(&v1548, v1547, v1545);
	i8 v1549 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1549 = v1548;

	i8 v1550 = (i8)(intptr_t)(ws+680);
	i8 v1551 = *(i8*)(intptr_t)v1550;

void f80_Deref(i8* /* subout */, i8 /* subin */);
	i8 v1552;
	f80_Deref(&v1552, v1551);
	i8 v1553 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1553 = v1552;

	i8 v1554 = (i8)(intptr_t)(ws+680);
	i8 v1555 = *(i8*)(intptr_t)v1554;

void f88_CheckSubExists(i8 /* subr */);
	f88_CheckSubExists(v1555);

	i8 v1556 = (i8)(intptr_t)(ws+688);
	i1 v1557 = *(i1*)(intptr_t)v1556;
	i8 v1558 = (i8)(intptr_t)(ws+680);
	i8 v1559 = *(i8*)(intptr_t)v1558;
	i8 v1560 = v1559+(+168);
	i8 v1561 = (i8)(intptr_t)(ws+688);
	i1 v1562 = *(i1*)(intptr_t)v1561;
	i8 v1563 = v1562;
	i1 v1564 = (i1)+1;
	i8 v1565 = ((i8)v1563)<<v1564;
	i8 v1566 = v1560+v1565;
	i2 v1567 = *(i2*)(intptr_t)v1566;

void f71_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	f71_ArchEmitWSRef(v1567, v1557);

	goto c02_015a;

c02_015f:;

	i8 v1568 = (i8)(intptr_t)(ws+664);
	i1 v1569 = *(i1*)(intptr_t)v1568;

void f57_E_b8(i1 /* c */);
	f57_E_b8(v1569);

c02_015a:;


	goto c02_0156;

c02_0159:;

endsub:;
}

// WriteSubroutinesToOutputFile workspace at ws+640 length ws+32
void f83_WriteSubroutinesToOutputFile(i8 p1425 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1425; /*coo */







	i4 v1570 = (i4)+0;
	i8 v1571 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v1571 = v1570;

c02_0160:;

	i2 v1572 = (i2)+255;
	i8 v1573 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1573 = v1572;

	i8 v1574 = (i8)(intptr_t)(ws+640);
	i8 v1575 = *(i8*)(intptr_t)v1574;
	i8 v1576 = (i8)(intptr_t)(ws+668);
	i4 v1577 = *(i4*)(intptr_t)v1576;

void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	f44_FCBSeek(v1577, v1575);


void f86_ReadB1(i1* /* result */);
	i1 v1578;
	f86_ReadB1(&v1578);
	i8 v1579 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v1579 = v1578;


void f87_ReadB2(i2* /* result */);
	i2 v1580;
	f87_ReadB2(&v1580);
	i8 v1581 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1581 = v1580;

	i8 v1582 = (i8)(intptr_t)(ws+668);
	i4 v1583 = *(i4*)(intptr_t)v1582;
	i8 v1584 = (i8)(intptr_t)(ws+666);
	i2 v1585 = *(i2*)(intptr_t)v1584;
	i4 v1586 = v1585;
	i4 v1587 = v1583+v1586;
	i4 v1588 = v1587+(+3);
	i8 v1589 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v1589 = v1588;

	i8 v1590 = (i8)(intptr_t)(ws+664);
	i1 v1591 = *(i1*)(intptr_t)v1590;
	i1 v1592 = (i1)+69;
	if (v1591==v1592) goto c02_0165; else goto c02_0166;

c02_0165:;

	goto c02_0161;

c02_0166:;

	i8 v1593 = (i8)(intptr_t)(ws+664);
	i1 v1594 = *(i1*)(intptr_t)v1593;
	i1 v1595 = (i1)+83;
	if (v1594==v1595) goto c02_0169; else goto c02_016a;

c02_0169:;


void f87_ReadB2(i2* /* result */);
	i2 v1596;
	f87_ReadB2(&v1596);
	i8 v1597 = (i8)(intptr_t)(ws+648);
	*(i2*)(intptr_t)v1597 = v1596;

	i8 v1598 = (i8)(intptr_t)(ws+640);
	i8 v1599 = *(i8*)(intptr_t)v1598;
	i8 v1600 = (i8)(intptr_t)(ws+648);
	i2 v1601 = *(i2*)(intptr_t)v1600;

void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	i8 v1602;
	f79_FindOrCreateSub(&v1602, v1601, v1599);
	i8 v1603 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v1603 = v1602;

	i8 v1604 = (i8)(intptr_t)(ws+656);
	i8 v1605 = *(i8*)(intptr_t)v1604;

void f80_Deref(i8* /* subout */, i8 /* subin */);
	i8 v1606;
	f80_Deref(&v1606, v1605);
	i8 v1607 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v1607 = v1606;

	i8 v1608 = (i8)(intptr_t)(ws+656);
	i8 v1609 = *(i8*)(intptr_t)v1608;
	i8 v1610 = v1609+(+188);
	i1 v1611 = *(i1*)(intptr_t)v1610;
	i1 v1612 = v1611&(+1);
	i1 v1613 = (i1)+0;
	if (v1612==v1613) goto c02_016f; else goto c02_016e;

c02_016e:;


void f89_CopySourceChunk(void);
	f89_CopySourceChunk();

	goto c02_016b;

c02_016f:;

c02_016b:;

	goto c02_0162;

c02_016a:;

c02_0162:;

	goto c02_0160;

c02_0161:;

endsub:;
}

// WriteAllSubroutinesToOutputFile workspace at ws+632 length ws+8
void f90_WriteAllSubroutinesToOutputFile(i8 p1614 /* coos */) {
	*(i8*)(intptr_t)(ws+632) = p1614; /*coos */

c02_0172:;

	i8 v1615 = (i8)(intptr_t)(ws+632);
	i8 v1616 = *(i8*)(intptr_t)v1615;
	i8 v1617 = (i8)+0;
	if (v1616==v1617) goto c02_0175; else goto c02_0174;

c02_0174:;

	i8 v1618 = (i8)(intptr_t)(ws+632);
	i8 v1619 = *(i8*)(intptr_t)v1618;

void f83_WriteSubroutinesToOutputFile(i8 /* coo */);
	f83_WriteSubroutinesToOutputFile(v1619);

	i8 v1620 = (i8)(intptr_t)(ws+632);
	i8 v1621 = *(i8*)(intptr_t)v1620;
	i8 v1622 = v1621+(+664);
	i8 v1623 = *(i8*)(intptr_t)v1622;
	i8 v1624 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1624 = v1623;

	goto c02_0172;

c02_0175:;

endsub:;
}
const i1 c02_s0018[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
const i1 c02_s0019[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
const i1 c02_s001a[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
const i1 c02_s001b[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };

// ResolveExternals workspace at ws+632 length ws+24
void f91_ResolveExternals(void) {

	i1 v1625 = (i1)+0;
	i8 v1626 = (i8)(intptr_t)(ws+640);
	*(i1*)(intptr_t)v1626 = v1625;

	i8 v1627 = (i8)(intptr_t)(ws+32);
	i8 v1628 = *(i8*)(intptr_t)v1627;
	i8 v1629 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1629 = v1628;

c02_0178:;

	i8 v1630 = (i8)(intptr_t)(ws+648);
	i8 v1631 = *(i8*)(intptr_t)v1630;
	i8 v1632 = (i8)+0;
	if (v1631==v1632) goto c02_017b; else goto c02_017a;

c02_017a:;

	i8 v1633 = (i8)(intptr_t)(ws+648);
	i8 v1634 = *(i8*)(intptr_t)v1633;
	i8 v1635 = v1634+(+188);
	i1 v1636 = *(i1*)(intptr_t)v1635;
	i1 v1637 = v1636&(+2);
	i1 v1638 = (i1)+0;
	if (v1637==v1638) goto c02_0180; else goto c02_017f;

c02_017f:;

	i8 v1639 = (i8)(intptr_t)(ws+648);
	i8 v1640 = *(i8*)(intptr_t)v1639;
	i8 v1641 = v1640+(+160);
	i8 v1642 = *(i8*)(intptr_t)v1641;
	i8 v1643 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1643 = v1642;

	i8 v1644 = (i8)(intptr_t)(ws+632);
	i8 v1645 = *(i8*)(intptr_t)v1644;
	i8 v1646 = (i8)+0;
	if (v1645==v1646) goto c02_0185; else goto c02_0184;

c02_0184:;

	i8 v1647 = (i8)(intptr_t)(ws+632);
	i8 v1648 = *(i8*)(intptr_t)v1647;
	i8 v1649 = v1648+(+16);
	i8 v1650 = *(i8*)(intptr_t)v1649;
	i8 v1651 = (i8)+0;
	if (v1650==v1651) goto c02_018c; else goto c02_018d;

c02_018d:;

	i8 v1652 = (i8)(intptr_t)(ws+632);
	i8 v1653 = *(i8*)(intptr_t)v1652;
	i8 v1654 = v1653+(+16);
	i8 v1655 = *(i8*)(intptr_t)v1654;
	i8 v1656 = (i8)(intptr_t)(ws+648);
	i8 v1657 = *(i8*)(intptr_t)v1656;
	if (v1655==v1657) goto c02_018c; else goto c02_018b;

c02_018b:;

	i8 v1658 = (i8)(intptr_t)c02_s0018;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v1658);

	goto c02_0186;

c02_018c:;

c02_0186:;

	i8 v1659 = (i8)(intptr_t)(ws+648);
	i8 v1660 = *(i8*)(intptr_t)v1659;
	i8 v1661 = (i8)(intptr_t)(ws+632);
	i8 v1662 = *(i8*)(intptr_t)v1661;
	i8 v1663 = v1662+(+16);
	*(i8*)(intptr_t)v1663 = v1660;

	goto c02_0181;

c02_0185:;

c02_0181:;

	goto c02_017c;

c02_0180:;

c02_017c:;

	i8 v1664 = (i8)(intptr_t)(ws+648);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	i8 v1666 = v1665+(+8);
	i8 v1667 = *(i8*)(intptr_t)v1666;
	i8 v1668 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1668 = v1667;

	goto c02_0178;

c02_017b:;

	i8 v1669 = (i8)(intptr_t)(ws+32);
	i8 v1670 = *(i8*)(intptr_t)v1669;
	i8 v1671 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1671 = v1670;

c02_0190:;

	i8 v1672 = (i8)(intptr_t)(ws+648);
	i8 v1673 = *(i8*)(intptr_t)v1672;
	i8 v1674 = (i8)+0;
	if (v1673==v1674) goto c02_0193; else goto c02_0192;

c02_0192:;

	i8 v1675 = (i8)(intptr_t)(ws+648);
	i8 v1676 = *(i8*)(intptr_t)v1675;
	i8 v1677 = v1676+(+160);
	i8 v1678 = *(i8*)(intptr_t)v1677;
	i8 v1679 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+632);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	i8 v1682 = (i8)+0;
	if (v1681==v1682) goto c02_019a; else goto c02_019b;

c02_019b:;

	i8 v1683 = (i8)(intptr_t)(ws+632);
	i8 v1684 = *(i8*)(intptr_t)v1683;
	i8 v1685 = v1684+(+16);
	i8 v1686 = *(i8*)(intptr_t)v1685;
	i8 v1687 = (i8)+0;
	if (v1686==v1687) goto c02_0199; else goto c02_019a;

c02_0199:;

	i8 v1688 = (i8)(intptr_t)c02_s0019;

void f11_print(i8 /* ptr */);
	f11_print(v1688);

	i8 v1689 = (i8)(intptr_t)(ws+632);
	i8 v1690 = *(i8*)(intptr_t)v1689;
	i8 v1691 = v1690+(+8);
	i8 v1692 = *(i8*)(intptr_t)v1691;

void f11_print(i8 /* ptr */);
	f11_print(v1692);

	i8 v1693 = (i8)(intptr_t)c02_s001a;

void f11_print(i8 /* ptr */);
	f11_print(v1693);

	i1 v1694 = (i1)+1;
	i8 v1695 = (i8)(intptr_t)(ws+640);
	*(i1*)(intptr_t)v1695 = v1694;

	goto c02_0194;

c02_019a:;

c02_0194:;

	i8 v1696 = (i8)(intptr_t)(ws+648);
	i8 v1697 = *(i8*)(intptr_t)v1696;
	i8 v1698 = v1697+(+8);
	i8 v1699 = *(i8*)(intptr_t)v1698;
	i8 v1700 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1700 = v1699;

	goto c02_0190;

c02_0193:;

	i8 v1701 = (i8)(intptr_t)(ws+640);
	i1 v1702 = *(i1*)(intptr_t)v1701;
	i1 v1703 = (i1)+0;
	if (v1702==v1703) goto c02_01a0; else goto c02_019f;

c02_019f:;

	i8 v1704 = (i8)(intptr_t)c02_s001b;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v1704);

	goto c02_019c;

c02_01a0:;

c02_019c:;

endsub:;
}
const i1 c02_s001c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };

// push workspace at ws+3088 length ws+10
void f93_push(i8 p1725 /* subr */) {
	*(i8*)(intptr_t)(ws+3088) = p1725; /*subr */

	i8 v1726 = (i8)(intptr_t)(ws+3040);
	i2 v1727 = *(i2*)(intptr_t)v1726;
	i8 v1728 = (i8)(intptr_t)(ws+3096);
	*(i2*)(intptr_t)v1728 = v1727;

c02_01a9:;

	i8 v1729 = (i8)(intptr_t)(ws+3096);
	i2 v1730 = *(i2*)(intptr_t)v1729;
	i2 v1731 = (i2)+0;
	if (v1730==v1731) goto c02_01ac; else goto c02_01ab;

c02_01ab:;

	i8 v1732 = (i8)(intptr_t)(ws+3096);
	i2 v1733 = *(i2*)(intptr_t)v1732;
	i2 v1734 = v1733+(-1);
	i8 v1735 = (i8)(intptr_t)(ws+3096);
	*(i2*)(intptr_t)v1735 = v1734;

	i8 v1736 = (i8)(intptr_t)(ws+640);
	i8 v1737 = (i8)(intptr_t)(ws+3096);
	i2 v1738 = *(i2*)(intptr_t)v1737;
	i8 v1739 = v1738;
	i1 v1740 = (i1)+3;
	i8 v1741 = ((i8)v1739)<<v1740;
	i8 v1742 = v1736+v1741;
	i8 v1743 = *(i8*)(intptr_t)v1742;
	i8 v1744 = (i8)(intptr_t)(ws+3088);
	i8 v1745 = *(i8*)(intptr_t)v1744;
	if (v1743==v1745) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	goto endsub;

c02_01b1:;

c02_01ad:;

	goto c02_01a9;

c02_01ac:;

	i8 v1746 = (i8)(intptr_t)(ws+3040);
	i2 v1747 = *(i2*)(intptr_t)v1746;
	i2 v1748 = (i2)+300;
	if (v1747==v1748) goto c02_01b5; else goto c02_01b6;

c02_01b5:;

	i8 v1749 = (i8)(intptr_t)c02_s001c;

void f11_print(i8 /* ptr */);
	f11_print(v1749);


void f6_ExitWithError(void);
	f6_ExitWithError();

	goto c02_01b2;

c02_01b6:;

c02_01b2:;

	i8 v1750 = (i8)(intptr_t)(ws+3088);
	i8 v1751 = *(i8*)(intptr_t)v1750;
	i8 v1752 = (i8)(intptr_t)(ws+640);
	i8 v1753 = (i8)(intptr_t)(ws+3040);
	i2 v1754 = *(i2*)(intptr_t)v1753;
	i8 v1755 = v1754;
	i1 v1756 = (i1)+3;
	i8 v1757 = ((i8)v1755)<<v1756;
	i8 v1758 = v1752+v1757;
	*(i8*)(intptr_t)v1758 = v1751;

	i8 v1759 = (i8)(intptr_t)(ws+3040);
	i2 v1760 = *(i2*)(intptr_t)v1759;
	i2 v1761 = v1760+(+1);
	i8 v1762 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1762 = v1761;

endsub:;
}
const i1 c02_s001d[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
const i1 c02_s001e[] = { 0x20,0x20,0x23,0 };
const i1 c02_s001f[] = { 0x3a,0x20,0 };
const i1 c02_s0020[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };

// PlaceSubroutines workspace at ws+632 length ws+2452
void f92_PlaceSubroutines(i8 p1705 /* subroutine */) {
	*(i8*)(intptr_t)(ws+632) = p1705; /*subroutine */

	i2 v1706 = (i2)+0;
	i8 v1707 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1707 = v1706;

	i1 v1708 = (i1)+0;
	i8 v1709 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1709 = v1708;

c02_01a3:;

	i8 v1710 = (i8)(intptr_t)(ws+3042);
	i1 v1711 = *(i1*)(intptr_t)v1710;
	i1 v1712 = (i1)+4;
	if (v1711==v1712) goto c02_01a6; else goto c02_01a5;

c02_01a5:;

	i2 v1713 = (i2)+0;
	i8 v1714 = (i8)(intptr_t)(ws+568);
	i8 v1715 = (i8)(intptr_t)(ws+3042);
	i1 v1716 = *(i1*)(intptr_t)v1715;
	i8 v1717 = v1716;
	i1 v1718 = (i1)+1;
	i8 v1719 = ((i8)v1717)<<v1718;
	i8 v1720 = v1714+v1719;
	*(i2*)(intptr_t)v1720 = v1713;

	i8 v1721 = (i8)(intptr_t)(ws+3042);
	i1 v1722 = *(i1*)(intptr_t)v1721;
	i1 v1723 = v1722+(+1);
	i8 v1724 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1724 = v1723;

	goto c02_01a3;

c02_01a6:;


	i8 v1763 = (i8)(intptr_t)(ws+632);
	i8 v1764 = *(i8*)(intptr_t)v1763;

void f93_push(i8 /* subr */);
	f93_push(v1764);

c02_01b9:;

	i8 v1765 = (i8)(intptr_t)(ws+3040);
	i2 v1766 = *(i2*)(intptr_t)v1765;
	i2 v1767 = (i2)+0;
	if (v1766==v1767) goto c02_01bc; else goto c02_01bb;

c02_01bb:;

	i8 v1768 = (i8)(intptr_t)(ws+3040);
	i2 v1769 = *(i2*)(intptr_t)v1768;
	i2 v1770 = v1769+(-1);
	i8 v1771 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1771 = v1770;

	i8 v1772 = (i8)(intptr_t)(ws+640);
	i8 v1773 = (i8)(intptr_t)(ws+3040);
	i2 v1774 = *(i2*)(intptr_t)v1773;
	i8 v1775 = v1774;
	i1 v1776 = (i1)+3;
	i8 v1777 = ((i8)v1775)<<v1776;
	i8 v1778 = v1772+v1777;
	i8 v1779 = *(i8*)(intptr_t)v1778;
	i8 v1780 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1780 = v1779;

	i8 v1781 = (i8)(intptr_t)(ws+632);
	i8 v1782 = *(i8*)(intptr_t)v1781;
	i8 v1783 = v1782+(+188);
	i1 v1784 = *(i1*)(intptr_t)v1783;
	i1 v1785 = v1784|(+1);
	i8 v1786 = (i8)(intptr_t)(ws+632);
	i8 v1787 = *(i8*)(intptr_t)v1786;
	i8 v1788 = v1787+(+188);
	*(i1*)(intptr_t)v1788 = v1785;

	i1 v1789 = (i1)+0;
	i8 v1790 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1790 = v1789;

c02_01bf:;

	i8 v1791 = (i8)(intptr_t)(ws+3042);
	i1 v1792 = *(i1*)(intptr_t)v1791;
	i1 v1793 = (i1)+4;
	if (v1792==v1793) goto c02_01c2; else goto c02_01c1;

c02_01c1:;

	i8 v1794 = (i8)(intptr_t)(ws+632);
	i8 v1795 = *(i8*)(intptr_t)v1794;
	i8 v1796 = v1795+(+176);
	i8 v1797 = (i8)(intptr_t)(ws+3042);
	i1 v1798 = *(i1*)(intptr_t)v1797;
	i8 v1799 = v1798;
	i1 v1800 = (i1)+1;
	i8 v1801 = ((i8)v1799)<<v1800;
	i8 v1802 = v1796+v1801;
	i2 v1803 = *(i2*)(intptr_t)v1802;
	i8 v1804 = (i8)(intptr_t)(ws+632);
	i8 v1805 = *(i8*)(intptr_t)v1804;
	i8 v1806 = v1805+(+168);
	i8 v1807 = (i8)(intptr_t)(ws+3042);
	i1 v1808 = *(i1*)(intptr_t)v1807;
	i8 v1809 = v1808;
	i1 v1810 = (i1)+1;
	i8 v1811 = ((i8)v1809)<<v1810;
	i8 v1812 = v1806+v1811;
	i2 v1813 = *(i2*)(intptr_t)v1812;
	i2 v1814 = v1803+v1813;
	i8 v1815 = (i8)(intptr_t)(ws+3052);
	*(i2*)(intptr_t)v1815 = v1814;

	i8 v1816 = (i8)(intptr_t)(ws+3052);
	i2 v1817 = *(i2*)(intptr_t)v1816;
	i1 v1818 = (i1)+8;

void f68_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	i2 v1819;
	f68_ArchAlignUp(&v1819, v1818, v1817);
	i8 v1820 = (i8)(intptr_t)(ws+3044);
	i8 v1821 = (i8)(intptr_t)(ws+3042);
	i1 v1822 = *(i1*)(intptr_t)v1821;
	i8 v1823 = v1822;
	i1 v1824 = (i1)+1;
	i8 v1825 = ((i8)v1823)<<v1824;
	i8 v1826 = v1820+v1825;
	*(i2*)(intptr_t)v1826 = v1819;

	i8 v1827 = (i8)(intptr_t)(ws+568);
	i8 v1828 = (i8)(intptr_t)(ws+3042);
	i1 v1829 = *(i1*)(intptr_t)v1828;
	i8 v1830 = v1829;
	i1 v1831 = (i1)+1;
	i8 v1832 = ((i8)v1830)<<v1831;
	i8 v1833 = v1827+v1832;
	i2 v1834 = *(i2*)(intptr_t)v1833;
	i8 v1835 = (i8)(intptr_t)(ws+3052);
	i2 v1836 = *(i2*)(intptr_t)v1835;
	if (v1834<v1836) goto c02_01c6; else goto c02_01c7;

c02_01c6:;

	i8 v1837 = (i8)(intptr_t)(ws+3052);
	i2 v1838 = *(i2*)(intptr_t)v1837;
	i8 v1839 = (i8)(intptr_t)(ws+568);
	i8 v1840 = (i8)(intptr_t)(ws+3042);
	i1 v1841 = *(i1*)(intptr_t)v1840;
	i8 v1842 = v1841;
	i1 v1843 = (i1)+1;
	i8 v1844 = ((i8)v1842)<<v1843;
	i8 v1845 = v1839+v1844;
	*(i2*)(intptr_t)v1845 = v1838;

	goto c02_01c3;

c02_01c7:;

c02_01c3:;

	i8 v1846 = (i8)(intptr_t)(ws+3042);
	i1 v1847 = *(i1*)(intptr_t)v1846;
	i1 v1848 = v1847+(+1);
	i8 v1849 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1849 = v1848;

	goto c02_01bf;

c02_01c2:;

	i8 v1850 = (i8)(intptr_t)(ws+632);
	i8 v1851 = *(i8*)(intptr_t)v1850;
	i8 v1852 = v1851+(+16);
	i8 v1853 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v1853 = v1852;

c02_01ca:;

	i8 v1854 = (i8)(intptr_t)(ws+3056);
	i8 v1855 = *(i8*)(intptr_t)v1854;
	i8 v1856 = (i8)+0;
	if (v1855==v1856) goto c02_01cd; else goto c02_01cc;

c02_01cc:;

	i1 v1857 = (i1)+0;
	i8 v1858 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v1858 = v1857;

c02_01d0:;

	i8 v1859 = (i8)(intptr_t)(ws+3064);
	i1 v1860 = *(i1*)(intptr_t)v1859;
	i1 v1861 = (i1)+16;
	if (v1860==v1861) goto c02_01d3; else goto c02_01d2;

c02_01d2:;

	i8 v1862 = (i8)(intptr_t)(ws+3056);
	i8 v1863 = *(i8*)(intptr_t)v1862;
	i8 v1864 = v1863+(+8);
	i8 v1865 = (i8)(intptr_t)(ws+3064);
	i1 v1866 = *(i1*)(intptr_t)v1865;
	i8 v1867 = v1866;
	i1 v1868 = (i1)+3;
	i8 v1869 = ((i8)v1867)<<v1868;
	i8 v1870 = v1864+v1869;
	i8 v1871 = *(i8*)(intptr_t)v1870;
	i8 v1872 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1872 = v1871;

	i8 v1873 = (i8)(intptr_t)(ws+3064);
	i1 v1874 = *(i1*)(intptr_t)v1873;
	i1 v1875 = v1874+(+1);
	i8 v1876 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v1876 = v1875;

	i8 v1877 = (i8)(intptr_t)(ws+3072);
	i8 v1878 = *(i8*)(intptr_t)v1877;
	i8 v1879 = (i8)+0;
	if (v1878==v1879) goto c02_01d7; else goto c02_01d8;

c02_01d7:;

	goto c02_01d3;

c02_01d8:;

c02_01d4:;

	i8 v1880 = (i8)(intptr_t)(ws+3072);
	i8 v1881 = *(i8*)(intptr_t)v1880;

void f80_Deref(i8* /* subout */, i8 /* subin */);
	i8 v1882;
	f80_Deref(&v1882, v1881);
	i8 v1883 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1883 = v1882;

	i1 v1884 = (i1)+0;
	i8 v1885 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1885 = v1884;

c02_01db:;

	i8 v1886 = (i8)(intptr_t)(ws+3042);
	i1 v1887 = *(i1*)(intptr_t)v1886;
	i1 v1888 = (i1)+4;
	if (v1887==v1888) goto c02_01de; else goto c02_01dd;

c02_01dd:;

	i8 v1889 = (i8)(intptr_t)(ws+3072);
	i8 v1890 = *(i8*)(intptr_t)v1889;
	i8 v1891 = v1890+(+176);
	i8 v1892 = (i8)(intptr_t)(ws+3042);
	i1 v1893 = *(i1*)(intptr_t)v1892;
	i8 v1894 = v1893;
	i1 v1895 = (i1)+1;
	i8 v1896 = ((i8)v1894)<<v1895;
	i8 v1897 = v1891+v1896;
	i2 v1898 = *(i2*)(intptr_t)v1897;
	i8 v1899 = (i8)(intptr_t)(ws+3080);
	*(i2*)(intptr_t)v1899 = v1898;

	i8 v1900 = (i8)(intptr_t)(ws+3044);
	i8 v1901 = (i8)(intptr_t)(ws+3042);
	i1 v1902 = *(i1*)(intptr_t)v1901;
	i8 v1903 = v1902;
	i1 v1904 = (i1)+1;
	i8 v1905 = ((i8)v1903)<<v1904;
	i8 v1906 = v1900+v1905;
	i2 v1907 = *(i2*)(intptr_t)v1906;
	i8 v1908 = (i8)(intptr_t)(ws+3082);
	*(i2*)(intptr_t)v1908 = v1907;

	i8 v1909 = (i8)(intptr_t)(ws+3080);
	i2 v1910 = *(i2*)(intptr_t)v1909;
	i8 v1911 = (i8)(intptr_t)(ws+3082);
	i2 v1912 = *(i2*)(intptr_t)v1911;
	if (v1910<v1912) goto c02_01e2; else goto c02_01e3;

c02_01e2:;

	i8 v1913 = (i8)(intptr_t)(ws+3082);
	i2 v1914 = *(i2*)(intptr_t)v1913;
	i8 v1915 = (i8)(intptr_t)(ws+3072);
	i8 v1916 = *(i8*)(intptr_t)v1915;
	i8 v1917 = v1916+(+176);
	i8 v1918 = (i8)(intptr_t)(ws+3042);
	i1 v1919 = *(i1*)(intptr_t)v1918;
	i8 v1920 = v1919;
	i1 v1921 = (i1)+1;
	i8 v1922 = ((i8)v1920)<<v1921;
	i8 v1923 = v1917+v1922;
	*(i2*)(intptr_t)v1923 = v1914;

	i8 v1924 = (i8)(intptr_t)(ws+3072);
	i8 v1925 = *(i8*)(intptr_t)v1924;

void f93_push(i8 /* subr */);
	f93_push(v1925);

	goto c02_01df;

c02_01e3:;

c02_01df:;

	i8 v1926 = (i8)(intptr_t)(ws+3042);
	i1 v1927 = *(i1*)(intptr_t)v1926;
	i1 v1928 = v1927+(+1);
	i8 v1929 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1929 = v1928;

	goto c02_01db;

c02_01de:;

	i8 v1930 = (i8)(intptr_t)(ws+3072);
	i8 v1931 = *(i8*)(intptr_t)v1930;
	i8 v1932 = v1931+(+188);
	i1 v1933 = *(i1*)(intptr_t)v1932;
	i1 v1934 = v1933&(+1);
	i1 v1935 = (i1)+0;
	if (v1934==v1935) goto c02_01e7; else goto c02_01e8;

c02_01e7:;

	i8 v1936 = (i8)(intptr_t)(ws+3072);
	i8 v1937 = *(i8*)(intptr_t)v1936;

void f93_push(i8 /* subr */);
	f93_push(v1937);

	i8 v1938 = (i8)(intptr_t)(ws+3072);
	i8 v1939 = *(i8*)(intptr_t)v1938;
	i8 v1940 = v1939+(+188);
	i1 v1941 = *(i1*)(intptr_t)v1940;
	i1 v1942 = v1941|(+1);
	i8 v1943 = (i8)(intptr_t)(ws+3072);
	i8 v1944 = *(i8*)(intptr_t)v1943;
	i8 v1945 = v1944+(+188);
	*(i1*)(intptr_t)v1945 = v1942;

	goto c02_01e4;

c02_01e8:;

c02_01e4:;

	goto c02_01d0;

c02_01d3:;

	i8 v1946 = (i8)(intptr_t)(ws+3056);
	i8 v1947 = *(i8*)(intptr_t)v1946;
	i8 v1948 = *(i8*)(intptr_t)v1947;
	i8 v1949 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v1949 = v1948;

	goto c02_01ca;

c02_01cd:;

	goto c02_01b9;

c02_01bc:;

	i8 v1950 = (i8)(intptr_t)c02_s001d;

void f11_print(i8 /* ptr */);
	f11_print(v1950);

	i1 v1951 = (i1)+0;
	i8 v1952 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1952 = v1951;

c02_01eb:;

	i8 v1953 = (i8)(intptr_t)(ws+3042);
	i1 v1954 = *(i1*)(intptr_t)v1953;
	i1 v1955 = (i1)+4;
	if (v1954==v1955) goto c02_01ee; else goto c02_01ed;

c02_01ed:;

	i8 v1956 = (i8)(intptr_t)c02_s001e;

void f11_print(i8 /* ptr */);
	f11_print(v1956);

	i8 v1957 = (i8)(intptr_t)(ws+3042);
	i1 v1958 = *(i1*)(intptr_t)v1957;

void f17_print_i8(i1 /* value */);
	f17_print_i8(v1958);

	i8 v1959 = (i8)(intptr_t)c02_s001f;

void f11_print(i8 /* ptr */);
	f11_print(v1959);

	i8 v1960 = (i8)(intptr_t)(ws+568);
	i8 v1961 = (i8)(intptr_t)(ws+3042);
	i1 v1962 = *(i1*)(intptr_t)v1961;
	i8 v1963 = v1962;
	i1 v1964 = (i1)+1;
	i8 v1965 = ((i8)v1963)<<v1964;
	i8 v1966 = v1960+v1965;
	i2 v1967 = *(i2*)(intptr_t)v1966;

void f16_print_i16(i2 /* value */);
	f16_print_i16(v1967);

	i8 v1968 = (i8)(intptr_t)c02_s0020;

void f11_print(i8 /* ptr */);
	f11_print(v1968);

	i8 v1969 = (i8)(intptr_t)(ws+3042);
	i1 v1970 = *(i1*)(intptr_t)v1969;
	i1 v1971 = v1970+(+1);
	i8 v1972 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1972 = v1971;

	goto c02_01eb;

c02_01ee:;

endsub:;
}
const i1 c02_s0021[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
const i1 c02_s0022[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
const i1 c02_s0023[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };

// SyntaxError workspace at ws+632 length ws+0
void f94_SyntaxError(void) {

	i8 v1989 = (i8)(intptr_t)c02_s0023;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v1989);

endsub:;
}
const i1 c02_s0024[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// AddInputFile workspace at ws+632 length ws+24
void f95_AddInputFile(i8 p1990 /* filename */) {
	*(i8*)(intptr_t)(ws+632) = p1990; /*filename */

	i8 v1991 = (i8)(intptr_t)c02_s0024;

void f11_print(i8 /* ptr */);
	f11_print(v1991);

	i8 v1992 = (i8)(intptr_t)(ws+632);
	i8 v1993 = *(i8*)(intptr_t)v1992;

void f11_print(i8 /* ptr */);
	f11_print(v1993);


void f12_print_nl(void);
	f12_print_nl();

	i8 v1994 = (i8)(intptr_t)(ws+632);
	i8 v1995 = *(i8*)(intptr_t)v1994;

void f82_OpenAndLoadCoo(i8* /* coo */, i8 /* filename */);
	i8 v1996;
	f82_OpenAndLoadCoo(&v1996, v1995);
	i8 v1997 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v1997 = v1996;

	i8 v1998 = (i8)(intptr_t)(ws+592);
	i8 v1999 = *(i8*)(intptr_t)v1998;
	i8 v2000 = (i8)+0;
	if (v1999==v2000) goto c02_01f2; else goto c02_01f3;

c02_01f2:;

	i8 v2001 = (i8)(intptr_t)(ws+640);
	i8 v2002 = *(i8*)(intptr_t)v2001;
	i8 v2003 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2003 = v2002;

	i8 v2004 = (i8)(intptr_t)(ws+640);
	i8 v2005 = *(i8*)(intptr_t)v2004;
	i8 v2006 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2006 = v2005;

	goto c02_01ef;

c02_01f3:;

	i8 v2007 = (i8)(intptr_t)(ws+640);
	i8 v2008 = *(i8*)(intptr_t)v2007;
	i8 v2009 = (i8)(intptr_t)(ws+584);
	i8 v2010 = *(i8*)(intptr_t)v2009;
	i8 v2011 = v2010+(+664);
	*(i8*)(intptr_t)v2011 = v2008;

	i8 v2012 = (i8)(intptr_t)(ws+640);
	i8 v2013 = *(i8*)(intptr_t)v2012;
	i8 v2014 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2014 = v2013;

c02_01ef:;

	i8 v2015 = (i8)(intptr_t)(ws+640);
	i8 v2016 = *(i8*)(intptr_t)v2015;
	i2 v2017 = (i2)+0;

void f78_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	i8 v2018;
	f78_FindSub(&v2018, v2017, v2016);
	i8 v2019 = *(i8*)(intptr_t)v2018;
	i8 v2020 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v2020 = v2019;

	i8 v2021 = (i8)(intptr_t)(ws+648);
	i8 v2022 = *(i8*)(intptr_t)v2021;
	i8 v2023 = (i8)+0;
	if (v2022==v2023) goto c02_01f8; else goto c02_01f7;

c02_01f7:;

	i8 v2024 = (i8)(intptr_t)(ws+608);
	i8 v2025 = *(i8*)(intptr_t)v2024;
	i8 v2026 = (i8)+0;
	if (v2025==v2026) goto c02_01fc; else goto c02_01fd;

c02_01fc:;

	i8 v2027 = (i8)(intptr_t)(ws+648);
	i8 v2028 = *(i8*)(intptr_t)v2027;
	i8 v2029 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2029 = v2028;

	goto c02_01f9;

c02_01fd:;

c02_01f9:;

	goto c02_01f4;

c02_01f8:;

c02_01f4:;

	i8 v2030 = (i8)(intptr_t)(ws+616);
	i8 v2031 = *(i8*)(intptr_t)v2030;
	i8 v2032 = (i8)+0;
	if (v2031==v2032) goto c02_0202; else goto c02_0201;

c02_0201:;

	i8 v2033 = (i8)(intptr_t)(ws+616);
	i8 v2034 = *(i8*)(intptr_t)v2033;
	i8 v2035 = (i8)(intptr_t)(ws+648);
	i8 v2036 = *(i8*)(intptr_t)v2035;

void f77_AddRef(i8 /* calls */, i8 /* subr */);
	f77_AddRef(v2036, v2034);

	goto c02_01fe;

c02_0202:;

c02_01fe:;

	i8 v2037 = (i8)(intptr_t)(ws+648);
	i8 v2038 = *(i8*)(intptr_t)v2037;
	i8 v2039 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2039 = v2038;

endsub:;
}
const i1 c02_s0025[] = { 0x2d,0x6f,0 };
const i1 c02_s0026[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
const i1 c02_s0027[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
const i1 c02_s0028[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s0029[] = { 0x57,0x72,0x69,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s002a[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
const i1 c02_s002b[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

// __main workspace at ws+0 length ws+632
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
	i8 v797 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v797 = v796;






















	i1 v997 = (i1)+1;
	i8 v998 = (i8)(intptr_t)(ws+576);
	*(i1*)(intptr_t)v998 = v997;














	i8 v1973 = (i8)(intptr_t)c02_s0021;

void f11_print(i8 /* ptr */);
	f11_print(v1973);


void f35_GetFreeMemory(i8* /* i */);
	i8 v1974;
	f35_GetFreeMemory(&v1974);
	i1 v1975 = (i1)+10;
	i8 v1976 = ((i8)v1974)>>v1975;
	i2 v1977 = v1976;

void f16_print_i16(i2 /* value */);
	f16_print_i16(v1977);

	i8 v1978 = (i8)(intptr_t)c02_s0022;

void f11_print(i8 /* ptr */);
	f11_print(v1978);

	i8 v1979 = (i8)+0;
	i8 v1980 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v1980 = v1979;

	i8 v1981 = (i8)+0;
	i8 v1982 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v1982 = v1981;

	i8 v1983 = (i8)+0;
	i8 v1984 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v1984 = v1983;

	i8 v1985 = (i8)+0;
	i8 v1986 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v1986 = v1985;

	i8 v1987 = (i8)+0;
	i8 v1988 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v1988 = v1987;




void f23_ArgvInit(void);
	f23_ArgvInit();

c02_0203:;


void f24_ArgvNext(i8* /* arg */);
	i8 v2040;
	f24_ArgvNext(&v2040);
	i8 v2041 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2041 = v2040;

	i8 v2042 = (i8)(intptr_t)(ws+624);
	i8 v2043 = *(i8*)(intptr_t)v2042;
	i8 v2044 = (i8)+0;
	if (v2043==v2044) goto c02_0208; else goto c02_0209;

c02_0208:;

	goto c02_0204;

c02_0209:;

c02_0205:;

	i8 v2045 = (i8)(intptr_t)(ws+624);
	i8 v2046 = *(i8*)(intptr_t)v2045;
	i8 v2047 = (i8)(intptr_t)c02_s0025;

void f27_StrICmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	i1 v2048;
	f27_StrICmp(&v2048, v2047, v2046);
	i1 v2049 = (i1)+0;
	if (v2048==v2049) goto c02_020d; else goto c02_020e;

c02_020d:;


void f24_ArgvNext(i8* /* arg */);
	i8 v2050;
	f24_ArgvNext(&v2050);
	i8 v2051 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2051 = v2050;

	goto c02_020a;

c02_020e:;

	i8 v2052 = (i8)(intptr_t)(ws+624);
	i8 v2053 = *(i8*)(intptr_t)v2052;
	i1 v2054 = *(i1*)(intptr_t)v2053;
	i1 v2055 = (i1)+45;
	if (v2054==v2055) goto c02_0211; else goto c02_0212;

c02_0211:;


void f94_SyntaxError(void);
	f94_SyntaxError();

	goto c02_020a;

c02_0212:;

	i8 v2056 = (i8)(intptr_t)(ws+624);
	i8 v2057 = *(i8*)(intptr_t)v2056;

void f95_AddInputFile(i8 /* filename */);
	f95_AddInputFile(v2057);

c02_020a:;

	goto c02_0203;

c02_0204:;

	i8 v2058 = (i8)(intptr_t)(ws+608);
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = (i8)+0;
	if (v2059==v2060) goto c02_0216; else goto c02_0217;

c02_0216:;

	i8 v2061 = (i8)(intptr_t)c02_s0026;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v2061);

	goto c02_0213;

c02_0217:;

c02_0213:;

	i8 v2062 = (i8)(intptr_t)(ws+600);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = (i8)+0;
	if (v2063==v2064) goto c02_021b; else goto c02_021c;

c02_021b:;

	i8 v2065 = (i8)(intptr_t)c02_s0027;

void f55_SimpleError(i8 /* s */);
	f55_SimpleError(v2065);

	goto c02_0218;

c02_021c:;

c02_0218:;

	i8 v2066 = (i8)(intptr_t)c02_s0028;

void f11_print(i8 /* ptr */);
	f11_print(v2066);


void f91_ResolveExternals(void);
	f91_ResolveExternals();

	i8 v2067 = (i8)(intptr_t)(ws+608);
	i8 v2068 = *(i8*)(intptr_t)v2067;

void f92_PlaceSubroutines(i8 /* subroutine */);
	f92_PlaceSubroutines(v2068);

	i8 v2069 = (i8)(intptr_t)(ws+600);
	i8 v2070 = *(i8*)(intptr_t)v2069;

void f66_EmitterOpenfile(i8 /* filename */);
	f66_EmitterOpenfile(v2070);

	i8 v2071 = (i8)(intptr_t)c02_s0029;

void f11_print(i8 /* ptr */);
	f11_print(v2071);

	i8 v2072 = (i8)(intptr_t)(ws+592);
	i8 v2073 = *(i8*)(intptr_t)v2072;

void f72_ArchEmitHeader(i8 /* coo */);
	f72_ArchEmitHeader(v2073);

	i8 v2074 = (i8)(intptr_t)(ws+592);
	i8 v2075 = *(i8*)(intptr_t)v2074;

void f90_WriteAllSubroutinesToOutputFile(i8 /* coos */);
	f90_WriteAllSubroutinesToOutputFile(v2075);

	i8 v2076 = (i8)(intptr_t)(ws+592);
	i8 v2077 = *(i8*)(intptr_t)v2076;

void f73_ArchEmitFooter(i8 /* coo */);
	f73_ArchEmitFooter(v2077);


void f67_EmitterClosefile(void);
	f67_EmitterClosefile();

	i8 v2078 = (i8)(intptr_t)c02_s002a;

void f11_print(i8 /* ptr */);
	f11_print(v2078);


void f35_GetFreeMemory(i8* /* i */);
	i8 v2079;
	f35_GetFreeMemory(&v2079);
	i1 v2080 = (i1)+10;
	i8 v2081 = ((i8)v2079)>>v2080;
	i2 v2082 = v2081;

void f16_print_i16(i2 /* value */);
	f16_print_i16(v2082);

	i8 v2083 = (i8)(intptr_t)c02_s002b;

void f11_print(i8 /* ptr */);
	f11_print(v2083);

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                        