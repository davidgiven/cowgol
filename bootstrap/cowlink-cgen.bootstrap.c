#include "cowgol.h"
static i8 workspace[0x018d];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+3104 length ws+0
void f6_ExitWithError(void) {

	
exit(1); 


endsub:;
}

// MemSet workspace at ws+848 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+848) = p10; /*buf */
	*(i1*)(intptr_t)(ws+856) = p9; /*byte */
	*(i8*)(intptr_t)(ws+864) = p8; /*len */

	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+848) 
,  
*(i1*)(intptr_t)(ws+856) 
,  
*(i8*)(intptr_t)(ws+864) 
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

// print_nl workspace at ws+760 length ws+0
void f12_print_nl(void) {

	i1 v34 = (i1)+10;
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
	i8 v145;
	f13_UIToA(&v145, v144, v143, v142);
	i8 v146 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v146 = v145;

	i8 v147 = (i8)(intptr_t)(ws+3100);
	f11_print(v147);

endsub:;
}

// print_i16 workspace at ws+3088 length ws+2
void f16_print_i16(i2 p148 /* value */) {
	*(i2*)(intptr_t)(ws+3088) = p148; /*value */

	i8 v149 = (i8)(intptr_t)(ws+3088);
	i2 v150 = *(i2*)(intptr_t)v149;
	i4 v151 = v150;
	f15_print_i32(v151);

endsub:;
}

// print_i8 workspace at ws+3088 length ws+1
void f17_print_i8(i1 p152 /* value */) {
	*(i1*)(intptr_t)(ws+3088) = p152; /*value */

	i8 v153 = (i8)(intptr_t)(ws+3088);
	i1 v154 = *(i1*)(intptr_t)v153;
	i4 v155 = v154;
	f15_print_i32(v155);

endsub:;
}

// print_hex_i8 workspace at ws+768 length ws+3
void f18_print_hex_i8(i1 p156 /* value */) {
	*(i1*)(intptr_t)(ws+768) = p156; /*value */

	i1 v157 = (i1)+2;
	i8 v158 = (i8)(intptr_t)(ws+769);
	*(i1*)(intptr_t)v158 = v157;

c02_001f:;

	i8 v159 = (i8)(intptr_t)(ws+768);
	i1 v160 = *(i1*)(intptr_t)v159;
	i1 v161 = (i1)+4;
	i1 v162 = ((i1)v160)>>v161;
	i8 v163 = (i8)(intptr_t)(ws+770);
	*(i1*)(intptr_t)v163 = v162;

	i8 v164 = (i8)(intptr_t)(ws+770);
	i1 v165 = *(i1*)(intptr_t)v164;
	i1 v166 = (i1)+10;
	if (v165<v166) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v167 = (i8)(intptr_t)(ws+770);
	i1 v168 = *(i1*)(intptr_t)v167;
	i1 v169 = v168+(+48);
	i8 v170 = (i8)(intptr_t)(ws+770);
	*(i1*)(intptr_t)v170 = v169;

	goto c02_0021;

c02_0025:;

	i8 v171 = (i8)(intptr_t)(ws+770);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = v172+(+87);
	i8 v174 = (i8)(intptr_t)(ws+770);
	*(i1*)(intptr_t)v174 = v173;

c02_0021:;

	i8 v175 = (i8)(intptr_t)(ws+770);
	i1 v176 = *(i1*)(intptr_t)v175;
	f8_print_char(v176);

	i8 v177 = (i8)(intptr_t)(ws+768);
	i1 v178 = *(i1*)(intptr_t)v177;
	i1 v179 = (i1)+4;
	i1 v180 = ((i1)v178)<<v179;
	i8 v181 = (i8)(intptr_t)(ws+768);
	*(i1*)(intptr_t)v181 = v180;

	i8 v182 = (i8)(intptr_t)(ws+769);
	i1 v183 = *(i1*)(intptr_t)v182;
	i1 v184 = v183+(-1);
	i8 v185 = (i8)(intptr_t)(ws+769);
	*(i1*)(intptr_t)v185 = v184;

	i8 v186 = (i8)(intptr_t)(ws+769);
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

// print_hex_i32 workspace at ws+760 length ws+4
void f20_print_hex_i32(i4 p198 /* value */) {
	*(i4*)(intptr_t)(ws+760) = p198; /*value */

	i8 v199 = (i8)(intptr_t)(ws+760);
	i4 v200 = *(i4*)(intptr_t)v199;
	i1 v201 = (i1)+24;
	i4 v202 = ((i4)v200)>>v201;
	i1 v203 = v202;
	f18_print_hex_i8(v203);

	i8 v204 = (i8)(intptr_t)(ws+760);
	i4 v205 = *(i4*)(intptr_t)v204;
	i1 v206 = (i1)+16;
	i4 v207 = ((i4)v205)>>v206;
	i1 v208 = v207;
	f18_print_hex_i8(v208);

	i8 v209 = (i8)(intptr_t)(ws+760);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+8;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	f18_print_hex_i8(v213);

	i8 v214 = (i8)(intptr_t)(ws+760);
	i4 v215 = *(i4*)(intptr_t)v214;
	i1 v216 = v215;
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
	i1 v398;
	f26_ToLower(&v398, v397);
	i8 v399 = (i8)(intptr_t)(ws+640);
	i8 v400 = *(i8*)(intptr_t)v399;
	i1 v401 = *(i1*)(intptr_t)v400;
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

// fcb_i_blockin workspace at ws+816 length ws+28
void f36_fcb_i_blockin(i8 p494 /* fcb */) {
	*(i8*)(intptr_t)(ws+816) = p494; /*fcb */

	i8 v495 = (i8)(intptr_t)(ws+816);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+12);
	i1 v498 = (i1)+0;
	i8 v499 = (i8)+512;
	f7_MemSet(v499, v498, v497);

	i8 v500 = (i8)(intptr_t)(ws+816);
	i8 v501 = *(i8*)(intptr_t)v500;
	i4 v502 = *(i4*)(intptr_t)v501;
	i8 v503 = (i8)(intptr_t)(ws+824);
	*(i4*)(intptr_t)v503 = v502;

	i8 v504 = (i8)(intptr_t)(ws+816);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+12);
	i8 v507 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+816);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+8);
	i4 v511 = *(i4*)(intptr_t)v510;
	i1 v512 = (i1)+9;
	i4 v513 = ((i4)v511)<<v512;
	i8 v514 = (i8)(intptr_t)(ws+840);
	*(i4*)(intptr_t)v514 = v513;

	
pread( 
*(i4*)(intptr_t)(ws+824) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+832) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+840) 
); 


	i1 v515 = (i1)+0;
	i8 v516 = (i8)(intptr_t)(ws+816);
	i8 v517 = *(i8*)(intptr_t)v516;
	i8 v518 = v517+(+6);
	*(i1*)(intptr_t)v518 = v515;

endsub:;
}

// fcb_i_blockout workspace at ws+816 length ws+28
void f37_fcb_i_blockout(i8 p519 /* fcb */) {
	*(i8*)(intptr_t)(ws+816) = p519; /*fcb */

	i8 v520 = (i8)(intptr_t)(ws+816);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = v521+(+6);
	i1 v523 = *(i1*)(intptr_t)v522;
	i1 v524 = (i1)+0;
	if (v523==v524) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v525 = (i8)(intptr_t)(ws+816);
	i8 v526 = *(i8*)(intptr_t)v525;
	i4 v527 = *(i4*)(intptr_t)v526;
	i8 v528 = (i8)(intptr_t)(ws+824);
	*(i4*)(intptr_t)v528 = v527;

	i8 v529 = (i8)(intptr_t)(ws+816);
	i8 v530 = *(i8*)(intptr_t)v529;
	i8 v531 = v530+(+12);
	i8 v532 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v532 = v531;

	i8 v533 = (i8)(intptr_t)(ws+816);
	i8 v534 = *(i8*)(intptr_t)v533;
	i8 v535 = v534+(+8);
	i4 v536 = *(i4*)(intptr_t)v535;
	i1 v537 = (i1)+9;
	i4 v538 = ((i4)v536)<<v537;
	i8 v539 = (i8)(intptr_t)(ws+840);
	*(i4*)(intptr_t)v539 = v538;

	
pwrite( 
*(i4*)(intptr_t)(ws+824) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+832) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+840) 
); 


	i1 v540 = (i1)+0;
	i8 v541 = (i8)(intptr_t)(ws+816);
	i8 v542 = *(i8*)(intptr_t)v541;
	i8 v543 = v542+(+6);
	*(i1*)(intptr_t)v543 = v540;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}

// fcb_i_changeblock workspace at ws+800 length ws+12
void f38_fcb_i_changeblock(i4 p544 /* newblock */, i8 p545 /* fcb */) {
	*(i8*)(intptr_t)(ws+800) = p545; /*fcb */
	*(i4*)(intptr_t)(ws+808) = p544; /*newblock */

	i8 v546 = (i8)(intptr_t)(ws+808);
	i4 v547 = *(i4*)(intptr_t)v546;
	i8 v548 = (i8)(intptr_t)(ws+800);
	i8 v549 = *(i8*)(intptr_t)v548;
	i8 v550 = v549+(+8);
	i4 v551 = *(i4*)(intptr_t)v550;
	if (v547==v551) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v552 = (i8)(intptr_t)(ws+800);
	i8 v553 = *(i8*)(intptr_t)v552;
	f37_fcb_i_blockout(v553);

	i8 v554 = (i8)(intptr_t)(ws+808);
	i4 v555 = *(i4*)(intptr_t)v554;
	i8 v556 = (i8)(intptr_t)(ws+800);
	i8 v557 = *(i8*)(intptr_t)v556;
	i8 v558 = v557+(+8);
	*(i4*)(intptr_t)v558 = v555;

	i8 v559 = (i8)(intptr_t)(ws+800);
	i8 v560 = *(i8*)(intptr_t)v559;
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
	f38_fcb_i_changeblock(v643, v641);

	i8 v644 = (i8)(intptr_t)(ws+736);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(ws+720);
	i8 v647 = *(i8*)(intptr_t)v646;
	i8 v648 = v647+(+4);
	*(i2*)(intptr_t)v648 = v645;

endsub:;
}

// FCBPos workspace at ws+760 length ws+12
void f45_FCBPos(i4* p649 /* pos */, i8 p650 /* fcb */) {
	*(i8*)(intptr_t)(ws+760) = p650; /*fcb */

	i8 v651 = (i8)(intptr_t)(ws+760);
	i8 v652 = *(i8*)(intptr_t)v651;
	i8 v653 = v652+(+8);
	i4 v654 = *(i4*)(intptr_t)v653;
	i1 v655 = (i1)+9;
	i4 v656 = ((i4)v654)<<v655;
	i8 v657 = (i8)(intptr_t)(ws+760);
	i8 v658 = *(i8*)(intptr_t)v657;
	i8 v659 = v658+(+4);
	i2 v660 = *(i2*)(intptr_t)v659;
	i4 v661 = v660;
	i4 v662 = v656|v661;
	i4 v663 = v662+(+1);
	i8 v664 = (i8)(intptr_t)(ws+768);
	*(i4*)(intptr_t)v664 = v663;

endsub:;
	*p649 = *(i4*)(intptr_t)(ws+768);
}

// FCBExt workspace at ws+656 length ws+16
void f46_FCBExt(i4* p665 /* len */, i8 p666 /* fcb */) {
	*(i8*)(intptr_t)(ws+656) = p666; /*fcb */

	i8 v667 = (i8)(intptr_t)(ws+656);
	i8 v668 = *(i8*)(intptr_t)v667;
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

// fcb_i_nextchar workspace at ws+792 length ws+8
void f47_fcb_i_nextchar(i8 p678 /* fcb */) {
	*(i8*)(intptr_t)(ws+792) = p678; /*fcb */

	i8 v679 = (i8)(intptr_t)(ws+792);
	i8 v680 = *(i8*)(intptr_t)v679;
	i8 v681 = v680+(+4);
	i2 v682 = *(i2*)(intptr_t)v681;
	i2 v683 = v682+(+1);
	i8 v684 = (i8)(intptr_t)(ws+792);
	i8 v685 = *(i8*)(intptr_t)v684;
	i8 v686 = v685+(+4);
	*(i2*)(intptr_t)v686 = v683;

	i8 v687 = (i8)(intptr_t)(ws+792);
	i8 v688 = *(i8*)(intptr_t)v687;
	i8 v689 = v688+(+4);
	i2 v690 = *(i2*)(intptr_t)v689;
	i2 v691 = (i2)+512;
	if (v690==v691) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v692 = (i8)(intptr_t)(ws+792);
	i8 v693 = *(i8*)(intptr_t)v692;
	i8 v694 = (i8)(intptr_t)(ws+792);
	i8 v695 = *(i8*)(intptr_t)v694;
	i8 v696 = v695+(+8);
	i4 v697 = *(i4*)(intptr_t)v696;
	i4 v698 = v697+(+1);
	f38_fcb_i_changeblock(v698, v693);

	i2 v699 = (i2)+0;
	i8 v700 = (i8)(intptr_t)(ws+792);
	i8 v701 = *(i8*)(intptr_t)v700;
	i8 v702 = v701+(+4);
	*(i2*)(intptr_t)v702 = v699;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}

// FCBGetChar workspace at ws+776 length ws+9
void f48_FCBGetChar(i1* p703 /* c */, i8 p704 /* fcb */) {
	*(i8*)(intptr_t)(ws+776) = p704; /*fcb */

	i8 v705 = (i8)(intptr_t)(ws+776);
	i8 v706 = *(i8*)(intptr_t)v705;
	f47_fcb_i_nextchar(v706);

	i8 v707 = (i8)(intptr_t)(ws+776);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = v708+(+12);
	i8 v710 = (i8)(intptr_t)(ws+776);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+4);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = v713;
	i8 v715 = v709+v714;
	i1 v716 = *(i1*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+784);
	*(i1*)(intptr_t)v717 = v716;

endsub:;
	*p703 = *(i1*)(intptr_t)(ws+784);
}

// FCBPutChar workspace at ws+760 length ws+9
void f49_FCBPutChar(i1 p718 /* c */, i8 p719 /* fcb */) {
	*(i8*)(intptr_t)(ws+760) = p719; /*fcb */
	*(i1*)(intptr_t)(ws+768) = p718; /*c */

	i8 v720 = (i8)(intptr_t)(ws+760);
	i8 v721 = *(i8*)(intptr_t)v720;
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

// StartError workspace at ws+760 length ws+0
void f53_StartError(void) {

	i8 v798 = (i8)(intptr_t)c02_s0000;
	f11_print(v798);

endsub:;
}

// EndError workspace at ws+760 length ws+0
void f54_EndError(void) {

	f12_print_nl();

	f6_ExitWithError();

endsub:;
}

// SimpleError workspace at ws+720 length ws+8
void f55_SimpleError(i8 p799 /* s */) {
	*(i8*)(intptr_t)(ws+720) = p799; /*s */

	f53_StartError();

	i8 v800 = (i8)(intptr_t)(ws+720);
	i8 v801 = *(i8*)(intptr_t)v800;
	f11_print(v801);

	f54_EndError();

endsub:;
}
const i1 c02_s0001[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
const i1 c02_s0002[] = { 0x27,0 };

// CannotOpen workspace at ws+720 length ws+8
void f56_CannotOpen(i8 p802 /* filename */) {
	*(i8*)(intptr_t)(ws+720) = p802; /*filename */

	f53_StartError();

	i8 v803 = (i8)(intptr_t)c02_s0001;
	f11_print(v803);

	i8 v804 = (i8)(intptr_t)(ws+720);
	i8 v805 = *(i8*)(intptr_t)v804;
	f11_print(v805);

	i8 v806 = (i8)(intptr_t)c02_s0002;
	f11_print(v806);

	f54_EndError();

endsub:;
}

// EmitByte workspace at ws+752 length ws+1
void f57_EmitByte(i1 p807 /* c */) {
	*(i1*)(intptr_t)(ws+752) = p807; /*c */

	i8 v808 = (i8)(intptr_t)(ws+44);
	i8 v809 = (i8)(intptr_t)(ws+752);
	i1 v810 = *(i1*)(intptr_t)v809;
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
	f57_EmitByte(v824);

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
	f57_EmitByte(v843);

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
	f57_EmitByte(v888);

	i8 v889 = (i8)(intptr_t)(ws+728);
	i1 v890 = *(i1*)(intptr_t)v889;
	i1 v891 = v890+(-1);
	i8 v892 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v892 = v891;

	goto c02_00c5;

c02_00c8:;

	i8 v893 = (i8)(intptr_t)(ws+709);
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
	i1 v908;
	f42_FCBOpenOut(&v908, v907, v905);
	i1 v909 = (i1)+0;
	if (v908==v909) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v910 = (i8)(intptr_t)c02_s0003;
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
	i1 v912;
	f43_FCBClose(&v912, v911);
	i1 v913 = (i1)+0;
	if (v912==v913) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v914 = (i8)(intptr_t)c02_s0004;
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
	f57_EmitByte(v935);

	i8 v936 = (i8)(intptr_t)(ws+696);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = v937+(+186);
	i2 v939 = *(i2*)(intptr_t)v938;
	f60_E_u16(v939);

	i1 v940 = (i1)+95;
	f57_EmitByte(v940);

	i8 v941 = (i8)(intptr_t)(ws+696);
	i8 v942 = *(i8*)(intptr_t)v941;
	i8 v943 = v942+(+152);
	i8 v944 = *(i8*)(intptr_t)v943;
	f58_E(v944);

endsub:;
}
const i1 c02_s0005[] = { 0x77,0x73,0x2b,0 };

// ArchEmitWSRef workspace at ws+696 length ws+4
void f71_ArchEmitWSRef(i2 p945 /* address */, i1 p946 /* wid */) {
	*(i1*)(intptr_t)(ws+696) = p946; /*wid */
	*(i2*)(intptr_t)(ws+698) = p945; /*address */

	i8 v947 = (i8)(intptr_t)c02_s0005;
	f58_E(v947);

	i8 v948 = (i8)(intptr_t)(ws+698);
	i2 v949 = *(i2*)(intptr_t)v948;
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
	f58_E(v951);

	i8 v952 = (i8)(intptr_t)c02_s0007;
	f58_E(v952);

	i8 v953 = (i8)(intptr_t)(ws+568);
	i2 v954 = *(i2*)(intptr_t)v953;
	i2 v955 = v954+(+7);
	i1 v956 = (i1)+3;
	i2 v957 = ((i2)v955)>>v956;
	f65_E_h16(v957);

	i8 v958 = (i8)(intptr_t)c02_s0008;
	f58_E(v958);

	i8 v959 = (i8)(intptr_t)c02_s0009;
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
	f57_EmitByte(v973);

	i8 v974 = (i8)(intptr_t)(ws+640);
	i8 v975 = *(i8*)(intptr_t)v974;
	f70_ArchEmitSubRef(v975);

	i8 v976 = (i8)(intptr_t)c02_s000b;
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
	f58_E(v982);

	i8 v983 = (i8)(intptr_t)(ws+44);
	i4 v984;
	f46_FCBExt(&v984, v983);
	i8 v985 = (i8)(intptr_t)(ws+44);
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
	f57_EmitByte(v992);

	i8 v993 = (i8)(intptr_t)(ws+648);
	i4 v994 = *(i4*)(intptr_t)v993;
	i4 v995 = v994+(-1);
	i8 v996 = (i8)(intptr_t)(ws+648);
	*(i4*)(intptr_t)v996 = v995;

	goto c02_00e0;

c02_00e3:;

endsub:;
}

// getchar workspace at ws+760 length ws+9
void f74_getchar(i1* p1001 /* c */, i8 p1002 /* fcb */) {
	*(i8*)(intptr_t)(ws+760) = p1002; /*fcb */

	i8 v1003 = (i8)(intptr_t)(ws+577);
	i1 v1004 = *(i1*)(intptr_t)v1003;
	i1 v1005 = (i1)+0;
	if (v1004==v1005) goto c02_00e7; else goto c02_00e8;

c02_00e7:;

	i8 v1006 = (i8)(intptr_t)(ws+760);
	i8 v1007 = *(i8*)(intptr_t)v1006;
	i1 v1008;
	f48_FCBGetChar(&v1008, v1007);
	i8 v1009 = (i8)(intptr_t)(ws+768);
	*(i1*)(intptr_t)v1009 = v1008;

	goto c02_00e4;

c02_00e8:;

	i8 v1010 = (i8)(intptr_t)(ws+577);
	i1 v1011 = *(i1*)(intptr_t)v1010;
	i8 v1012 = (i8)(intptr_t)(ws+768);
	*(i1*)(intptr_t)v1012 = v1011;

	i1 v1013 = (i1)+0;
	i8 v1014 = (i8)(intptr_t)(ws+577);
	*(i1*)(intptr_t)v1014 = v1013;

c02_00e4:;

endsub:;
	*p1001 = *(i1*)(intptr_t)(ws+768);
}
const i1 c02_s000d[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x68,0x65,0x78,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x69,0x6e,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x20,0x61,0x74,0x20,0x6f,0x66,0x66,0x73,0x65,0x74,0x20,0x30,0x78,0 };

// read_hex workspace at ws+736 length ws+17
void f76_read_hex(i4* p1019 /* val */, i1 p1020 /* len */, i8 p1021 /* fcb */) {
	*(i8*)(intptr_t)(ws+736) = p1021; /*fcb */
	*(i1*)(intptr_t)(ws+744) = p1020; /*len */

	i4 v1022 = (i4)+0;
	i8 v1023 = (i8)(intptr_t)(ws+748);
	*(i4*)(intptr_t)v1023 = v1022;

c02_00e9:;

	i8 v1024 = (i8)(intptr_t)(ws+736);
	i8 v1025 = *(i8*)(intptr_t)v1024;
	i1 v1026;
	f74_getchar(&v1026, v1025);
	i8 v1027 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1027 = v1026;

	i8 v1028 = (i8)(intptr_t)(ws+752);
	i1 v1029 = *(i1*)(intptr_t)v1028;
	i1 v1030 = (i1)+48;
	if (v1029<v1030) goto c02_00f1; else goto c02_00f2;

c02_00f2:;

	i1 v1031 = (i1)+57;
	i8 v1032 = (i8)(intptr_t)(ws+752);
	i1 v1033 = *(i1*)(intptr_t)v1032;
	if (v1031<v1033) goto c02_00f1; else goto c02_00f0;

c02_00f0:;

	i8 v1034 = (i8)(intptr_t)(ws+752);
	i1 v1035 = *(i1*)(intptr_t)v1034;
	i1 v1036 = v1035+(-48);
	i8 v1037 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1037 = v1036;

	goto c02_00eb;

c02_00f1:;

	i8 v1038 = (i8)(intptr_t)(ws+752);
	i1 v1039 = *(i1*)(intptr_t)v1038;
	i1 v1040 = v1039&(-33);
	i8 v1041 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1041 = v1040;

	i8 v1042 = (i8)(intptr_t)(ws+752);
	i1 v1043 = *(i1*)(intptr_t)v1042;
	i1 v1044 = (i1)+65;
	if (v1043<v1044) goto c02_00f9; else goto c02_00fa;

c02_00fa:;

	i1 v1045 = (i1)+70;
	i8 v1046 = (i8)(intptr_t)(ws+752);
	i1 v1047 = *(i1*)(intptr_t)v1046;
	if (v1045<v1047) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

	i8 v1048 = (i8)(intptr_t)(ws+752);
	i1 v1049 = *(i1*)(intptr_t)v1048;
	i1 v1050 = v1049+(-55);
	i8 v1051 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v1051 = v1050;

	goto c02_00f3;

c02_00f9:;

	f53_StartError();

	i8 v1052 = (i8)(intptr_t)c02_s000d;
	f11_print(v1052);

	i8 v1053 = (i8)(intptr_t)(ws+736);
	i8 v1054 = *(i8*)(intptr_t)v1053;
	i4 v1055;
	f45_FCBPos(&v1055, v1054);
	i4 v1056 = v1055+(-1);
	f20_print_hex_i32(v1056);

	f54_EndError();

c02_00f3:;

c02_00eb:;

	i8 v1057 = (i8)(intptr_t)(ws+748);
	i4 v1058 = *(i4*)(intptr_t)v1057;
	i1 v1059 = (i1)+4;
	i4 v1060 = ((i4)v1058)<<v1059;
	i8 v1061 = (i8)(intptr_t)(ws+752);
	i1 v1062 = *(i1*)(intptr_t)v1061;
	i4 v1063 = v1062;
	i4 v1064 = v1060+v1063;
	i8 v1065 = (i8)(intptr_t)(ws+748);
	*(i4*)(intptr_t)v1065 = v1064;

	i8 v1066 = (i8)(intptr_t)(ws+744);
	i1 v1067 = *(i1*)(intptr_t)v1066;
	i1 v1068 = v1067+(-1);
	i8 v1069 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v1069 = v1068;

	i8 v1070 = (i8)(intptr_t)(ws+744);
	i1 v1071 = *(i1*)(intptr_t)v1070;
	i1 v1072 = (i1)+0;
	if (v1071==v1072) goto c02_00fe; else goto c02_00ff;

c02_00fe:;

	goto c02_00ea;

c02_00ff:;

c02_00fb:;

	goto c02_00e9;

c02_00ea:;

endsub:;
	*p1019 = *(i4*)(intptr_t)(ws+748);
}

// read_hex2 workspace at ws+720 length ws+9
void f77_read_hex2(i1* p1073 /* val */, i8 p1074 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1074; /*fcb */

	i8 v1075 = (i8)(intptr_t)(ws+720);
	i8 v1076 = *(i8*)(intptr_t)v1075;
	i1 v1077 = (i1)+2;
	i4 v1078;
	f76_read_hex(&v1078, v1077, v1076);
	i1 v1079 = v1078;
	i8 v1080 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1080 = v1079;

endsub:;
	*p1073 = *(i1*)(intptr_t)(ws+728);
}

// read_hex4 workspace at ws+720 length ws+10
void f78_read_hex4(i2* p1081 /* val */, i8 p1082 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1082; /*fcb */

	i8 v1083 = (i8)(intptr_t)(ws+720);
	i8 v1084 = *(i8*)(intptr_t)v1083;
	i1 v1085 = (i1)+4;
	i4 v1086;
	f76_read_hex(&v1086, v1085, v1084);
	i2 v1087 = v1086;
	i8 v1088 = (i8)(intptr_t)(ws+728);
	*(i2*)(intptr_t)v1088 = v1087;

endsub:;
	*p1081 = *(i2*)(intptr_t)(ws+728);
}

// read_string workspace at ws+720 length ws+32
void f79_read_string(i8* p1089 /* ptr */, i1 p1090 /* len */, i8 p1091 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1091; /*fcb */
	*(i1*)(intptr_t)(ws+728) = p1090; /*len */

	i8 v1092 = (i8)(intptr_t)(ws+728);
	i1 v1093 = *(i1*)(intptr_t)v1092;
	i1 v1094 = v1093+(+1);
	i8 v1095 = v1094;
	i8 v1096;
	f31_Alloc(&v1096, v1095);
	i8 v1097 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1097 = v1096;

	i8 v1098 = (i8)(intptr_t)(ws+736);
	i8 v1099 = *(i8*)(intptr_t)v1098;
	i8 v1100 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1100 = v1099;

c02_0100:;

	i8 v1101 = (i8)(intptr_t)(ws+728);
	i1 v1102 = *(i1*)(intptr_t)v1101;
	i1 v1103 = (i1)+0;
	if (v1102==v1103) goto c02_0105; else goto c02_0106;

c02_0105:;

	goto c02_0101;

c02_0106:;

c02_0102:;

	i8 v1104 = (i8)(intptr_t)(ws+720);
	i8 v1105 = *(i8*)(intptr_t)v1104;
	i1 v1106;
	f74_getchar(&v1106, v1105);
	i8 v1107 = (i8)(intptr_t)(ws+744);
	i8 v1108 = *(i8*)(intptr_t)v1107;
	*(i1*)(intptr_t)v1108 = v1106;

	i8 v1109 = (i8)(intptr_t)(ws+744);
	i8 v1110 = *(i8*)(intptr_t)v1109;
	i8 v1111 = v1110+(+1);
	i8 v1112 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1112 = v1111;

	i8 v1113 = (i8)(intptr_t)(ws+728);
	i1 v1114 = *(i1*)(intptr_t)v1113;
	i1 v1115 = v1114+(-1);
	i8 v1116 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1116 = v1115;

	goto c02_0100;

c02_0101:;

endsub:;
	*p1089 = *(i8*)(intptr_t)(ws+736);
}

// AddRef workspace at ws+720 length ws+32
void f80_AddRef(i8 p1117 /* calls */, i8 p1118 /* subr */) {
	*(i8*)(intptr_t)(ws+720) = p1118; /*subr */
	*(i8*)(intptr_t)(ws+728) = p1117; /*calls */

	i8 v1119 = (i8)(intptr_t)(ws+720);
	i8 v1120 = *(i8*)(intptr_t)v1119;
	i8 v1121 = v1120+(+184);
	i2 v1122 = *(i2*)(intptr_t)v1121;
	i8 v1123 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1123 = v1122;

	i8 v1124 = (i8)(intptr_t)(ws+736);
	i2 v1125 = *(i2*)(intptr_t)v1124;
	i2 v1126 = v1125+(+1);
	i8 v1127 = (i8)(intptr_t)(ws+720);
	i8 v1128 = *(i8*)(intptr_t)v1127;
	i8 v1129 = v1128+(+184);
	*(i2*)(intptr_t)v1129 = v1126;

	i8 v1130 = (i8)(intptr_t)(ws+720);
	i8 v1131 = *(i8*)(intptr_t)v1130;
	i8 v1132 = v1131+(+16);
	i8 v1133 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1133 = v1132;

c02_0109:;

	i8 v1134 = (i8)(intptr_t)(ws+736);
	i2 v1135 = *(i2*)(intptr_t)v1134;
	i2 v1136 = (i2)+16;
	if (v1135<v1136) goto c02_010c; else goto c02_010b;

c02_010b:;

	i8 v1137 = (i8)(intptr_t)(ws+744);
	i8 v1138 = *(i8*)(intptr_t)v1137;
	i8 v1139 = *(i8*)(intptr_t)v1138;
	i8 v1140 = (i8)+0;
	if (v1139==v1140) goto c02_0110; else goto c02_0111;

c02_0110:;

	i8 v1141 = (i8)+136;
	i8 v1142;
	f31_Alloc(&v1142, v1141);
	i8 v1143 = (i8)(intptr_t)(ws+744);
	i8 v1144 = *(i8*)(intptr_t)v1143;
	*(i8*)(intptr_t)v1144 = v1142;

	goto c02_010d;

c02_0111:;

c02_010d:;

	i8 v1145 = (i8)(intptr_t)(ws+744);
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = *(i8*)(intptr_t)v1146;
	i8 v1148 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1148 = v1147;

	i8 v1149 = (i8)(intptr_t)(ws+736);
	i2 v1150 = *(i2*)(intptr_t)v1149;
	i2 v1151 = v1150+(-16);
	i8 v1152 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1152 = v1151;

	goto c02_0109;

c02_010c:;

	i8 v1153 = (i8)(intptr_t)(ws+728);
	i8 v1154 = *(i8*)(intptr_t)v1153;
	i8 v1155 = (i8)(intptr_t)(ws+744);
	i8 v1156 = *(i8*)(intptr_t)v1155;
	i8 v1157 = v1156+(+8);
	i8 v1158 = (i8)(intptr_t)(ws+736);
	i2 v1159 = *(i2*)(intptr_t)v1158;
	i1 v1160 = v1159;
	i8 v1161 = v1160;
	i1 v1162 = (i1)+3;
	i8 v1163 = ((i8)v1161)<<v1162;
	i8 v1164 = v1157+v1163;
	*(i8*)(intptr_t)v1164 = v1154;

endsub:;
}

// FindSub workspace at ws+752 length ws+32
void f81_FindSub(i8* p1165 /* ptr */, i2 p1166 /* id */, i8 p1167 /* coo */) {
	*(i8*)(intptr_t)(ws+752) = p1167; /*coo */
	*(i2*)(intptr_t)(ws+760) = p1166; /*id */

	i8 v1168 = (i8)(intptr_t)(ws+752);
	i8 v1169 = *(i8*)(intptr_t)v1168;
	i8 v1170 = v1169+(+528);
	i8 v1171 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1171 = v1170;

c02_0114:;

	i8 v1172 = (i8)(intptr_t)(ws+760);
	i2 v1173 = *(i2*)(intptr_t)v1172;
	i2 v1174 = (i2)+16;
	if (v1173<v1174) goto c02_0117; else goto c02_0116;

c02_0116:;

	i8 v1175 = (i8)(intptr_t)(ws+776);
	i8 v1176 = *(i8*)(intptr_t)v1175;
	i8 v1177 = *(i8*)(intptr_t)v1176;
	i8 v1178 = (i8)+0;
	if (v1177==v1178) goto c02_011b; else goto c02_011c;

c02_011b:;

	i8 v1179 = (i8)+136;
	i8 v1180;
	f31_Alloc(&v1180, v1179);
	i8 v1181 = (i8)(intptr_t)(ws+776);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	*(i8*)(intptr_t)v1182 = v1180;

	goto c02_0118;

c02_011c:;

c02_0118:;

	i8 v1183 = (i8)(intptr_t)(ws+776);
	i8 v1184 = *(i8*)(intptr_t)v1183;
	i8 v1185 = *(i8*)(intptr_t)v1184;
	i8 v1186 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1186 = v1185;

	i8 v1187 = (i8)(intptr_t)(ws+760);
	i2 v1188 = *(i2*)(intptr_t)v1187;
	i2 v1189 = v1188+(-16);
	i8 v1190 = (i8)(intptr_t)(ws+760);
	*(i2*)(intptr_t)v1190 = v1189;

	goto c02_0114;

c02_0117:;

	i8 v1191 = (i8)(intptr_t)(ws+776);
	i8 v1192 = *(i8*)(intptr_t)v1191;
	i8 v1193 = v1192+(+8);
	i8 v1194 = (i8)(intptr_t)(ws+760);
	i2 v1195 = *(i2*)(intptr_t)v1194;
	i1 v1196 = v1195;
	i8 v1197 = v1196;
	i1 v1198 = (i1)+3;
	i8 v1199 = ((i8)v1197)<<v1198;
	i8 v1200 = v1193+v1199;
	i8 v1201 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v1201 = v1200;

endsub:;
	*p1165 = *(i8*)(intptr_t)(ws+768);
}

// FindOrCreateSub workspace at ws+720 length ws+32
void f82_FindOrCreateSub(i8* p1202 /* subroutine */, i2 p1203 /* id */, i8 p1204 /* coo */) {
	*(i8*)(intptr_t)(ws+720) = p1204; /*coo */
	*(i2*)(intptr_t)(ws+728) = p1203; /*id */

	i8 v1205 = (i8)(intptr_t)(ws+720);
	i8 v1206 = *(i8*)(intptr_t)v1205;
	i8 v1207 = (i8)(intptr_t)(ws+728);
	i2 v1208 = *(i2*)(intptr_t)v1207;
	i8 v1209;
	f81_FindSub(&v1209, v1208, v1206);
	i8 v1210 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1210 = v1209;

	i8 v1211 = (i8)(intptr_t)(ws+744);
	i8 v1212 = *(i8*)(intptr_t)v1211;
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1214 = v1213;

	i8 v1215 = (i8)(intptr_t)(ws+736);
	i8 v1216 = *(i8*)(intptr_t)v1215;
	i8 v1217 = (i8)+0;
	if (v1216==v1217) goto c02_0120; else goto c02_0121;

c02_0120:;

	i8 v1218 = (i8)+189;
	i8 v1219;
	f31_Alloc(&v1219, v1218);
	i8 v1220 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1220 = v1219;

	i8 v1221 = (i8)(intptr_t)(ws+720);
	i8 v1222 = *(i8*)(intptr_t)v1221;
	i8 v1223 = (i8)(intptr_t)(ws+736);
	i8 v1224 = *(i8*)(intptr_t)v1223;
	*(i8*)(intptr_t)v1224 = v1222;

	i8 v1225 = (i8)(intptr_t)(ws+32);
	i8 v1226 = *(i8*)(intptr_t)v1225;
	i8 v1227 = (i8)(intptr_t)(ws+736);
	i8 v1228 = *(i8*)(intptr_t)v1227;
	i8 v1229 = v1228+(+8);
	*(i8*)(intptr_t)v1229 = v1226;

	i8 v1230 = (i8)(intptr_t)(ws+736);
	i8 v1231 = *(i8*)(intptr_t)v1230;
	i8 v1232 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1232 = v1231;

	i8 v1233 = (i8)(intptr_t)(ws+40);
	i2 v1234 = *(i2*)(intptr_t)v1233;
	i8 v1235 = (i8)(intptr_t)(ws+736);
	i8 v1236 = *(i8*)(intptr_t)v1235;
	i8 v1237 = v1236+(+186);
	*(i2*)(intptr_t)v1237 = v1234;

	i8 v1238 = (i8)(intptr_t)(ws+736);
	i8 v1239 = *(i8*)(intptr_t)v1238;
	i8 v1240 = (i8)(intptr_t)(ws+744);
	i8 v1241 = *(i8*)(intptr_t)v1240;
	*(i8*)(intptr_t)v1241 = v1239;

	i8 v1242 = (i8)(intptr_t)(ws+40);
	i2 v1243 = *(i2*)(intptr_t)v1242;
	i2 v1244 = v1243+(+1);
	i8 v1245 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1245 = v1244;

	goto c02_011d;

c02_0121:;

c02_011d:;

endsub:;
	*p1202 = *(i8*)(intptr_t)(ws+736);
}

// Deref workspace at ws+3088 length ws+24
void f83_Deref(i8* p1246 /* subout */, i8 p1247 /* subin */) {
	*(i8*)(intptr_t)(ws+3088) = p1247; /*subin */

	i8 v1248 = (i8)(intptr_t)(ws+3088);
	i8 v1249 = *(i8*)(intptr_t)v1248;
	i8 v1250 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v1250 = v1249;

	i8 v1251 = (i8)(intptr_t)(ws+3088);
	i8 v1252 = *(i8*)(intptr_t)v1251;
	i8 v1253 = (i8)+0;
	if (v1252==v1253) goto c02_0126; else goto c02_0125;

c02_0125:;

	i8 v1254 = (i8)(intptr_t)(ws+3088);
	i8 v1255 = *(i8*)(intptr_t)v1254;
	i8 v1256 = v1255+(+160);
	i8 v1257 = *(i8*)(intptr_t)v1256;
	i8 v1258 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1258 = v1257;

	i8 v1259 = (i8)(intptr_t)(ws+3104);
	i8 v1260 = *(i8*)(intptr_t)v1259;
	i8 v1261 = (i8)+0;
	if (v1260==v1261) goto c02_012b; else goto c02_012a;

c02_012a:;

	i8 v1262 = (i8)(intptr_t)(ws+3104);
	i8 v1263 = *(i8*)(intptr_t)v1262;
	i8 v1264 = v1263+(+16);
	i8 v1265 = *(i8*)(intptr_t)v1264;
	i8 v1266 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v1266 = v1265;

	goto c02_0127;

c02_012b:;

c02_0127:;

	goto c02_0122;

c02_0126:;

c02_0122:;

endsub:;
	*p1246 = *(i8*)(intptr_t)(ws+3096);
}

// FindOrCreateExternal workspace at ws+720 length ws+16
void f84_FindOrCreateExternal(i8* p1267 /* external */, i8 p1268 /* name */) {
	*(i8*)(intptr_t)(ws+720) = p1268; /*name */

	i8 v1269 = (i8)(intptr_t)(ws+24);
	i8 v1270 = *(i8*)(intptr_t)v1269;
	i8 v1271 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1271 = v1270;

c02_012e:;

	i8 v1272 = (i8)(intptr_t)(ws+728);
	i8 v1273 = *(i8*)(intptr_t)v1272;
	i8 v1274 = (i8)+0;
	if (v1273==v1274) goto c02_0131; else goto c02_0130;

c02_0130:;

	i8 v1275 = (i8)(intptr_t)(ws+728);
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = v1276+(+8);
	i8 v1278 = *(i8*)(intptr_t)v1277;
	i8 v1279 = (i8)(intptr_t)(ws+720);
	i8 v1280 = *(i8*)(intptr_t)v1279;
	i1 v1281;
	f25_StrCmp(&v1281, v1280, v1278);
	i1 v1282 = (i1)+0;
	if (v1281==v1282) goto c02_0135; else goto c02_0136;

c02_0135:;

	goto endsub;

c02_0136:;

c02_0132:;

	i8 v1283 = (i8)(intptr_t)(ws+728);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = *(i8*)(intptr_t)v1284;
	i8 v1286 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1286 = v1285;

	goto c02_012e;

c02_0131:;

	i8 v1287 = (i8)+24;
	i8 v1288;
	f31_Alloc(&v1288, v1287);
	i8 v1289 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1289 = v1288;

	i8 v1290 = (i8)(intptr_t)(ws+24);
	i8 v1291 = *(i8*)(intptr_t)v1290;
	i8 v1292 = (i8)(intptr_t)(ws+728);
	i8 v1293 = *(i8*)(intptr_t)v1292;
	*(i8*)(intptr_t)v1293 = v1291;

	i8 v1294 = (i8)(intptr_t)(ws+720);
	i8 v1295 = *(i8*)(intptr_t)v1294;
	i8 v1296;
	f33_StrDup(&v1296, v1295);
	i8 v1297 = (i8)(intptr_t)(ws+728);
	i8 v1298 = *(i8*)(intptr_t)v1297;
	i8 v1299 = v1298+(+8);
	*(i8*)(intptr_t)v1299 = v1296;

	i8 v1300 = (i8)(intptr_t)(ws+728);
	i8 v1301 = *(i8*)(intptr_t)v1300;
	i8 v1302 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1302 = v1301;

endsub:;
	*p1267 = *(i8*)(intptr_t)(ws+728);
}
const i1 c02_s000e[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0 };
const i1 c02_s000f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
const i1 c02_s0010[] = { 0x27,0x20,0x69,0x6e,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x0a,0 };

// OpenAndLoadCoo workspace at ws+656 length ws+64
void f85_OpenAndLoadCoo(i8* p1303 /* coo */, i8 p1304 /* filename */) {
	*(i8*)(intptr_t)(ws+656) = p1304; /*filename */

	i8 v1305 = (i8)+674;
	i8 v1306;
	f31_Alloc(&v1306, v1305);
	i8 v1307 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1307 = v1306;

	i8 v1308 = (i8)(intptr_t)(ws+40);
	i2 v1309 = *(i2*)(intptr_t)v1308;
	i8 v1310 = (i8)(intptr_t)(ws+664);
	i8 v1311 = *(i8*)(intptr_t)v1310;
	i8 v1312 = v1311+(+672);
	*(i2*)(intptr_t)v1312 = v1309;

	i8 v1313 = (i8)(intptr_t)(ws+40);
	i2 v1314 = *(i2*)(intptr_t)v1313;
	i2 v1315 = v1314+(+1);
	i8 v1316 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1316 = v1315;

	i8 v1317 = (i8)(intptr_t)(ws+664);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	i8 v1319 = (i8)(intptr_t)(ws+656);
	i8 v1320 = *(i8*)(intptr_t)v1319;
	i1 v1321;
	f40_FCBOpenIn(&v1321, v1320, v1318);
	i1 v1322 = (i1)+0;
	if (v1321==v1322) goto c02_013b; else goto c02_013a;

c02_013a:;

	i8 v1323 = (i8)(intptr_t)(ws+656);
	i8 v1324 = *(i8*)(intptr_t)v1323;
	f56_CannotOpen(v1324);

	goto c02_0137;

c02_013b:;

c02_0137:;

c02_013c:;

	i8 v1325 = (i8)(intptr_t)(ws+664);
	i8 v1326 = *(i8*)(intptr_t)v1325;
	i1 v1327;
	f74_getchar(&v1327, v1326);
	i8 v1328 = (i8)(intptr_t)(ws+674);
	*(i1*)(intptr_t)v1328 = v1327;

	i8 v1329 = (i8)(intptr_t)(ws+664);
	i8 v1330 = *(i8*)(intptr_t)v1329;
	i2 v1331;
	f78_read_hex4(&v1331, v1330);
	i8 v1332 = (i8)(intptr_t)(ws+676);
	*(i2*)(intptr_t)v1332 = v1331;

	i8 v1333 = (i8)(intptr_t)(ws+664);
	i8 v1334 = *(i8*)(intptr_t)v1333;
	i4 v1335;
	f45_FCBPos(&v1335, v1334);
	i8 v1336 = (i8)(intptr_t)(ws+680);
	*(i4*)(intptr_t)v1336 = v1335;

	i8 v1337 = (i8)(intptr_t)(ws+674);
	i1 v1338 = *(i1*)(intptr_t)v1337;
	i1 v1339 = (i1)+69;
	if (v1338==v1339) goto c02_0141; else goto c02_0142;

c02_0141:;

	goto c02_013d;

c02_0142:;

	i8 v1340 = (i8)(intptr_t)(ws+674);
	i1 v1341 = *(i1*)(intptr_t)v1340;
	i1 v1342 = (i1)+83;
	if (v1341==v1342) goto c02_0145; else goto c02_0146;

c02_0145:;

	i8 v1343 = (i8)(intptr_t)(ws+664);
	i8 v1344 = *(i8*)(intptr_t)v1343;
	i2 v1345;
	f78_read_hex4(&v1345, v1344);
	i8 v1346 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1346 = v1345;

	i8 v1347 = (i8)(intptr_t)(ws+664);
	i8 v1348 = *(i8*)(intptr_t)v1347;
	i8 v1349 = (i8)(intptr_t)(ws+672);
	i2 v1350 = *(i2*)(intptr_t)v1349;
	i8 v1351;
	f82_FindOrCreateSub(&v1351, v1350, v1348);
	i8 v1352 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1352 = v1351;

	i8 v1353 = (i8)(intptr_t)(ws+688);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = v1354+(+188);
	i1 v1356 = *(i1*)(intptr_t)v1355;
	i1 v1357 = v1356|(+2);
	i8 v1358 = (i8)(intptr_t)(ws+688);
	i8 v1359 = *(i8*)(intptr_t)v1358;
	i8 v1360 = v1359+(+188);
	*(i1*)(intptr_t)v1360 = v1357;

	goto c02_013e;

c02_0146:;

	i8 v1361 = (i8)(intptr_t)(ws+674);
	i1 v1362 = *(i1*)(intptr_t)v1361;
	i1 v1363 = (i1)+82;
	if (v1362==v1363) goto c02_0149; else goto c02_014a;

c02_0149:;

	i8 v1364 = (i8)(intptr_t)(ws+664);
	i8 v1365 = *(i8*)(intptr_t)v1364;
	i2 v1366;
	f78_read_hex4(&v1366, v1365);
	i8 v1367 = (i8)(intptr_t)(ws+696);
	*(i2*)(intptr_t)v1367 = v1366;

	i8 v1368 = (i8)(intptr_t)(ws+664);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i2 v1370;
	f78_read_hex4(&v1370, v1369);
	i8 v1371 = (i8)(intptr_t)(ws+698);
	*(i2*)(intptr_t)v1371 = v1370;

	i8 v1372 = (i8)(intptr_t)(ws+664);
	i8 v1373 = *(i8*)(intptr_t)v1372;
	i8 v1374 = (i8)(intptr_t)(ws+696);
	i2 v1375 = *(i2*)(intptr_t)v1374;
	i8 v1376;
	f82_FindOrCreateSub(&v1376, v1375, v1373);
	i8 v1377 = (i8)(intptr_t)(ws+664);
	i8 v1378 = *(i8*)(intptr_t)v1377;
	i8 v1379 = (i8)(intptr_t)(ws+698);
	i2 v1380 = *(i2*)(intptr_t)v1379;
	i8 v1381;
	f82_FindOrCreateSub(&v1381, v1380, v1378);
	f80_AddRef(v1381, v1376);

	goto c02_013e;

c02_014a:;

	i8 v1382 = (i8)(intptr_t)(ws+674);
	i1 v1383 = *(i1*)(intptr_t)v1382;
	i1 v1384 = (i1)+87;
	if (v1383==v1384) goto c02_014d; else goto c02_014e;

c02_014d:;

	i8 v1385 = (i8)(intptr_t)(ws+664);
	i8 v1386 = *(i8*)(intptr_t)v1385;
	i2 v1387;
	f78_read_hex4(&v1387, v1386);
	i8 v1388 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1388 = v1387;

	i8 v1389 = (i8)(intptr_t)(ws+664);
	i8 v1390 = *(i8*)(intptr_t)v1389;
	i8 v1391 = (i8)(intptr_t)(ws+672);
	i2 v1392 = *(i2*)(intptr_t)v1391;
	i8 v1393;
	f82_FindOrCreateSub(&v1393, v1392, v1390);
	i8 v1394 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1394 = v1393;

	i8 v1395 = (i8)(intptr_t)(ws+664);
	i8 v1396 = *(i8*)(intptr_t)v1395;
	i1 v1397;
	f77_read_hex2(&v1397, v1396);
	i8 v1398 = (i8)(intptr_t)(ws+700);
	*(i1*)(intptr_t)v1398 = v1397;

	i8 v1399 = (i8)(intptr_t)(ws+664);
	i8 v1400 = *(i8*)(intptr_t)v1399;
	i2 v1401;
	f78_read_hex4(&v1401, v1400);
	i8 v1402 = (i8)(intptr_t)(ws+688);
	i8 v1403 = *(i8*)(intptr_t)v1402;
	i8 v1404 = v1403+(+168);
	i8 v1405 = (i8)(intptr_t)(ws+700);
	i1 v1406 = *(i1*)(intptr_t)v1405;
	i8 v1407 = v1406;
	i1 v1408 = (i1)+1;
	i8 v1409 = ((i8)v1407)<<v1408;
	i8 v1410 = v1404+v1409;
	*(i2*)(intptr_t)v1410 = v1401;

	goto c02_013e;

c02_014e:;

	i8 v1411 = (i8)(intptr_t)(ws+674);
	i1 v1412 = *(i1*)(intptr_t)v1411;
	i1 v1413 = (i1)+78;
	if (v1412==v1413) goto c02_0151; else goto c02_0152;

c02_0151:;

	i8 v1414 = (i8)(intptr_t)(ws+664);
	i8 v1415 = *(i8*)(intptr_t)v1414;
	i2 v1416;
	f78_read_hex4(&v1416, v1415);
	i8 v1417 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1417 = v1416;

	i8 v1418 = (i8)(intptr_t)(ws+664);
	i8 v1419 = *(i8*)(intptr_t)v1418;
	i8 v1420 = (i8)(intptr_t)(ws+672);
	i2 v1421 = *(i2*)(intptr_t)v1420;
	i8 v1422;
	f82_FindOrCreateSub(&v1422, v1421, v1419);
	i8 v1423 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1423 = v1422;

	i8 v1424 = (i8)(intptr_t)(ws+664);
	i8 v1425 = *(i8*)(intptr_t)v1424;
	i8 v1426 = (i8)(intptr_t)(ws+676);
	i2 v1427 = *(i2*)(intptr_t)v1426;
	i1 v1428 = v1427;
	i1 v1429 = v1428+(-4);
	i8 v1430;
	f79_read_string(&v1430, v1429, v1425);
	i8 v1431 = (i8)(intptr_t)(ws+688);
	i8 v1432 = *(i8*)(intptr_t)v1431;
	i8 v1433 = v1432+(+152);
	*(i8*)(intptr_t)v1433 = v1430;

	goto c02_013e;

c02_0152:;

	i8 v1434 = (i8)(intptr_t)(ws+674);
	i1 v1435 = *(i1*)(intptr_t)v1434;
	i1 v1436 = (i1)+88;
	if (v1435==v1436) goto c02_0155; else goto c02_0156;

c02_0155:;

	i8 v1437 = (i8)(intptr_t)(ws+664);
	i8 v1438 = *(i8*)(intptr_t)v1437;
	i2 v1439;
	f78_read_hex4(&v1439, v1438);
	i8 v1440 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1440 = v1439;

	i8 v1441 = (i8)(intptr_t)(ws+664);
	i8 v1442 = *(i8*)(intptr_t)v1441;
	i8 v1443 = (i8)(intptr_t)(ws+672);
	i2 v1444 = *(i2*)(intptr_t)v1443;
	i8 v1445;
	f82_FindOrCreateSub(&v1445, v1444, v1442);
	i8 v1446 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1446 = v1445;

	i8 v1447 = (i8)(intptr_t)(ws+664);
	i8 v1448 = *(i8*)(intptr_t)v1447;
	i8 v1449 = (i8)(intptr_t)(ws+676);
	i2 v1450 = *(i2*)(intptr_t)v1449;
	i1 v1451 = v1450;
	i1 v1452 = v1451+(-4);
	i8 v1453;
	f79_read_string(&v1453, v1452, v1448);
	i8 v1454 = (i8)(intptr_t)(ws+704);
	*(i8*)(intptr_t)v1454 = v1453;

	i8 v1455 = (i8)(intptr_t)(ws+704);
	i8 v1456 = *(i8*)(intptr_t)v1455;
	i8 v1457;
	f84_FindOrCreateExternal(&v1457, v1456);
	i8 v1458 = (i8)(intptr_t)(ws+712);
	*(i8*)(intptr_t)v1458 = v1457;

	i8 v1459 = (i8)(intptr_t)(ws+688);
	i8 v1460 = *(i8*)(intptr_t)v1459;
	i8 v1461 = v1460+(+160);
	i8 v1462 = *(i8*)(intptr_t)v1461;
	i8 v1463 = (i8)+0;
	if (v1462==v1463) goto c02_015b; else goto c02_015a;

c02_015a:;

	i8 v1464 = (i8)(intptr_t)c02_s000e;
	f55_SimpleError(v1464);

	goto c02_0157;

c02_015b:;

c02_0157:;

	i8 v1465 = (i8)(intptr_t)(ws+712);
	i8 v1466 = *(i8*)(intptr_t)v1465;
	i8 v1467 = (i8)(intptr_t)(ws+688);
	i8 v1468 = *(i8*)(intptr_t)v1467;
	i8 v1469 = v1468+(+160);
	*(i8*)(intptr_t)v1469 = v1466;

	goto c02_013e;

c02_0156:;

	i8 v1470 = (i8)(intptr_t)c02_s000f;
	f11_print(v1470);

	i8 v1471 = (i8)(intptr_t)(ws+674);
	i1 v1472 = *(i1*)(intptr_t)v1471;
	f8_print_char(v1472);

	i8 v1473 = (i8)(intptr_t)c02_s0010;
	f11_print(v1473);

	f6_ExitWithError();

c02_013e:;

	i8 v1474 = (i8)(intptr_t)(ws+664);
	i8 v1475 = *(i8*)(intptr_t)v1474;
	i8 v1476 = (i8)(intptr_t)(ws+680);
	i4 v1477 = *(i4*)(intptr_t)v1476;
	i8 v1478 = (i8)(intptr_t)(ws+676);
	i2 v1479 = *(i2*)(intptr_t)v1478;
	i4 v1480 = v1479;
	i4 v1481 = v1477+v1480;
	f44_FCBSeek(v1481, v1475);

	goto c02_013c;

c02_013d:;

endsub:;
	*p1303 = *(i8*)(intptr_t)(ws+664);
}
const i1 c02_s0011[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// MalformedError workspace at ws+704 length ws+8
void f87_MalformedError(i8 p1483 /* s */) {
	*(i8*)(intptr_t)(ws+704) = p1483; /*s */

	i8 v1484 = (i8)(intptr_t)c02_s0011;
	f11_print(v1484);

	i8 v1485 = (i8)(intptr_t)(ws+704);
	i8 v1486 = *(i8*)(intptr_t)v1485;
	f11_print(v1486);

	f12_print_nl();

	f6_ExitWithError();

endsub:;
}
const i1 c02_s0012[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };

// UnexpectedEndOfChunk workspace at ws+704 length ws+0
void f88_UnexpectedEndOfChunk(void) {

	i8 v1487 = (i8)(intptr_t)c02_s0012;
	f87_MalformedError(v1487);

endsub:;
}
const i1 c02_s0013[] = { 0x63,0x68,0x75,0x6e,0x6b,0x20,0x73,0x69,0x7a,0x65,0x20,0x69,0x6e,0x63,0x6f,0x6e,0x73,0x69,0x73,0x74,0x65,0x6e,0x74,0 };

// GetC workspace at ws+696 length ws+0
void f89_GetC(void) {

	i8 v1488 = (i8)(intptr_t)(ws+666);
	i2 v1489 = *(i2*)(intptr_t)v1488;
	i2 v1490 = (i2)+0;
	if (v1489==v1490) goto c02_015f; else goto c02_0160;

c02_015f:;

	i8 v1491 = (i8)(intptr_t)c02_s0013;
	f87_MalformedError(v1491);

	goto c02_015c;

c02_0160:;

c02_015c:;

	i8 v1492 = (i8)(intptr_t)(ws+666);
	i2 v1493 = *(i2*)(intptr_t)v1492;
	i2 v1494 = v1493+(-1);
	i8 v1495 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1495 = v1494;

	i8 v1496 = (i8)(intptr_t)(ws+640);
	i8 v1497 = *(i8*)(intptr_t)v1496;
	i1 v1498;
	f74_getchar(&v1498, v1497);
	i8 v1499 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v1499 = v1498;

endsub:;
}

// ReadH2 workspace at ws+696 length ws+1
void f91_ReadH2(i1* p1506 /* result */) {

	i8 v1507 = (i8)(intptr_t)(ws+666);
	i2 v1508 = *(i2*)(intptr_t)v1507;
	i2 v1509 = (i2)+2;
	if (v1508<v1509) goto c02_0164; else goto c02_0165;

c02_0164:;

	f88_UnexpectedEndOfChunk();

	goto c02_0161;

c02_0165:;

c02_0161:;

	i8 v1510 = (i8)(intptr_t)(ws+666);
	i2 v1511 = *(i2*)(intptr_t)v1510;
	i2 v1512 = v1511+(-2);
	i8 v1513 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1513 = v1512;

	i8 v1514 = (i8)(intptr_t)(ws+640);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	i1 v1516;
	f77_read_hex2(&v1516, v1515);
	i8 v1517 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1517 = v1516;

endsub:;
	*p1506 = *(i1*)(intptr_t)(ws+696);
}

// ReadH4 workspace at ws+696 length ws+2
void f92_ReadH4(i2* p1518 /* result */) {

	i8 v1519 = (i8)(intptr_t)(ws+666);
	i2 v1520 = *(i2*)(intptr_t)v1519;
	i2 v1521 = (i2)+4;
	if (v1520<v1521) goto c02_0169; else goto c02_016a;

c02_0169:;

	f88_UnexpectedEndOfChunk();

	goto c02_0166;

c02_016a:;

c02_0166:;

	i8 v1522 = (i8)(intptr_t)(ws+666);
	i2 v1523 = *(i2*)(intptr_t)v1522;
	i2 v1524 = v1523+(-4);
	i8 v1525 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1525 = v1524;

	i8 v1526 = (i8)(intptr_t)(ws+640);
	i8 v1527 = *(i8*)(intptr_t)v1526;
	i2 v1528;
	f78_read_hex4(&v1528, v1527);
	i8 v1529 = (i8)(intptr_t)(ws+696);
	*(i2*)(intptr_t)v1529 = v1528;

endsub:;
	*p1518 = *(i2*)(intptr_t)(ws+696);
}

// CopySourceChunk workspace at ws+672 length ws+20
void f93_CopySourceChunk(void) {

c02_016d:;

	i8 v1530 = (i8)(intptr_t)(ws+666);
	i2 v1531 = *(i2*)(intptr_t)v1530;
	i2 v1532 = (i2)+0;
	if (v1531==v1532) goto c02_0170; else goto c02_016f;

c02_016f:;

	f89_GetC();

	i8 v1533 = (i8)(intptr_t)(ws+664);
	i1 v1534 = *(i1*)(intptr_t)v1533;

	if (v1534 != +3) goto c02_0172;

	i1 v1535 = (i1)+99;
	f57_EmitByte(v1535);

	i8 v1536 = (i8)(intptr_t)(ws+640);
	i8 v1537 = *(i8*)(intptr_t)v1536;
	i8 v1538 = v1537+(+672);
	i2 v1539 = *(i2*)(intptr_t)v1538;
	i1 v1540 = v1539;
	f64_E_h8(v1540);

	i1 v1541 = (i1)+95;
	f57_EmitByte(v1541);

	goto c02_0171;

c02_0172:;

	if (v1534 != +4) goto c02_0173;

	i8 v1542 = (i8)(intptr_t)(ws+656);
	i8 v1543 = *(i8*)(intptr_t)v1542;
	f70_ArchEmitSubRef(v1543);

	goto c02_0171;

c02_0173:;

	if (v1534 != +1) goto c02_0174;

	i2 v1544;
	f92_ReadH4(&v1544);
	i8 v1545 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1545 = v1544;

	i8 v1546 = (i8)(intptr_t)(ws+640);
	i8 v1547 = *(i8*)(intptr_t)v1546;
	i8 v1548 = (i8)(intptr_t)(ws+672);
	i2 v1549 = *(i2*)(intptr_t)v1548;
	i8 v1550;
	f82_FindOrCreateSub(&v1550, v1549, v1547);
	i8 v1551 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1551 = v1550;

	i8 v1552 = (i8)(intptr_t)(ws+680);
	i8 v1553 = *(i8*)(intptr_t)v1552;
	i8 v1554;
	f83_Deref(&v1554, v1553);
	i8 v1555 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1555 = v1554;

	i8 v1556 = (i8)(intptr_t)(ws+680);
	i8 v1557 = *(i8*)(intptr_t)v1556;
	f70_ArchEmitSubRef(v1557);

	goto c02_0171;

c02_0174:;

	if (v1534 != +2) goto c02_0175;

	i2 v1558;
	f92_ReadH4(&v1558);
	i8 v1559 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1559 = v1558;

	i1 v1560;
	f91_ReadH2(&v1560);
	i8 v1561 = (i8)(intptr_t)(ws+688);
	*(i1*)(intptr_t)v1561 = v1560;

	i2 v1562;
	f92_ReadH4(&v1562);
	i8 v1563 = (i8)(intptr_t)(ws+690);
	*(i2*)(intptr_t)v1563 = v1562;

	i8 v1564 = (i8)(intptr_t)(ws+640);
	i8 v1565 = *(i8*)(intptr_t)v1564;
	i8 v1566 = (i8)(intptr_t)(ws+672);
	i2 v1567 = *(i2*)(intptr_t)v1566;
	i8 v1568;
	f82_FindOrCreateSub(&v1568, v1567, v1565);
	i8 v1569 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1569 = v1568;

	i8 v1570 = (i8)(intptr_t)(ws+680);
	i8 v1571 = *(i8*)(intptr_t)v1570;
	i8 v1572;
	f83_Deref(&v1572, v1571);
	i8 v1573 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1573 = v1572;

	i8 v1574 = (i8)(intptr_t)(ws+688);
	i1 v1575 = *(i1*)(intptr_t)v1574;
	i8 v1576 = (i8)(intptr_t)(ws+680);
	i8 v1577 = *(i8*)(intptr_t)v1576;
	i8 v1578 = v1577+(+176);
	i8 v1579 = (i8)(intptr_t)(ws+688);
	i1 v1580 = *(i1*)(intptr_t)v1579;
	i8 v1581 = v1580;
	i1 v1582 = (i1)+1;
	i8 v1583 = ((i8)v1581)<<v1582;
	i8 v1584 = v1578+v1583;
	i2 v1585 = *(i2*)(intptr_t)v1584;
	i8 v1586 = (i8)(intptr_t)(ws+690);
	i2 v1587 = *(i2*)(intptr_t)v1586;
	i2 v1588 = v1585+v1587;
	f71_ArchEmitWSRef(v1588, v1575);

	goto c02_0171;

c02_0175:;

	if (v1534 != +5) goto c02_0176;

	i2 v1589;
	f92_ReadH4(&v1589);
	i8 v1590 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1590 = v1589;

	i1 v1591;
	f91_ReadH2(&v1591);
	i8 v1592 = (i8)(intptr_t)(ws+688);
	*(i1*)(intptr_t)v1592 = v1591;

	i8 v1593 = (i8)(intptr_t)(ws+640);
	i8 v1594 = *(i8*)(intptr_t)v1593;
	i8 v1595 = (i8)(intptr_t)(ws+672);
	i2 v1596 = *(i2*)(intptr_t)v1595;
	i8 v1597;
	f82_FindOrCreateSub(&v1597, v1596, v1594);
	i8 v1598 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1598 = v1597;

	i8 v1599 = (i8)(intptr_t)(ws+680);
	i8 v1600 = *(i8*)(intptr_t)v1599;
	i8 v1601;
	f83_Deref(&v1601, v1600);
	i8 v1602 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1602 = v1601;

	i8 v1603 = (i8)(intptr_t)(ws+688);
	i1 v1604 = *(i1*)(intptr_t)v1603;
	i8 v1605 = (i8)(intptr_t)(ws+680);
	i8 v1606 = *(i8*)(intptr_t)v1605;
	i8 v1607 = v1606+(+168);
	i8 v1608 = (i8)(intptr_t)(ws+688);
	i1 v1609 = *(i1*)(intptr_t)v1608;
	i8 v1610 = v1609;
	i1 v1611 = (i1)+1;
	i8 v1612 = ((i8)v1610)<<v1611;
	i8 v1613 = v1607+v1612;
	i2 v1614 = *(i2*)(intptr_t)v1613;
	f71_ArchEmitWSRef(v1614, v1604);

	goto c02_0171;

c02_0176:;

	i8 v1615 = (i8)(intptr_t)(ws+664);
	i1 v1616 = *(i1*)(intptr_t)v1615;
	f57_EmitByte(v1616);

c02_0171:;


	goto c02_016d;

c02_0170:;

endsub:;
}

// WriteSubroutinesToOutputFile workspace at ws+640 length ws+32
void f86_WriteSubroutinesToOutputFile(i8 p1482 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1482; /*coo */








	i8 v1617 = (i8)(intptr_t)(ws+640);
	i8 v1618 = *(i8*)(intptr_t)v1617;
	i4 v1619 = (i4)+0;
	f44_FCBSeek(v1619, v1618);

c02_0177:;

	i2 v1620 = (i2)+255;
	i8 v1621 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1621 = v1620;

	f89_GetC();

	i2 v1622;
	f92_ReadH4(&v1622);
	i8 v1623 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1623 = v1622;

	i8 v1624 = (i8)(intptr_t)(ws+640);
	i8 v1625 = *(i8*)(intptr_t)v1624;
	i4 v1626;
	f45_FCBPos(&v1626, v1625);
	i8 v1627 = (i8)(intptr_t)(ws+666);
	i2 v1628 = *(i2*)(intptr_t)v1627;
	i4 v1629 = v1628;
	i4 v1630 = v1626+v1629;
	i8 v1631 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v1631 = v1630;

	i8 v1632 = (i8)(intptr_t)(ws+664);
	i1 v1633 = *(i1*)(intptr_t)v1632;
	i1 v1634 = (i1)+69;
	if (v1633==v1634) goto c02_017c; else goto c02_017d;

c02_017c:;

	goto c02_0178;

c02_017d:;

	i8 v1635 = (i8)(intptr_t)(ws+664);
	i1 v1636 = *(i1*)(intptr_t)v1635;
	i1 v1637 = (i1)+83;
	if (v1636==v1637) goto c02_0180; else goto c02_0181;

c02_0180:;

	i2 v1638;
	f92_ReadH4(&v1638);
	i8 v1639 = (i8)(intptr_t)(ws+648);
	*(i2*)(intptr_t)v1639 = v1638;

	i8 v1640 = (i8)(intptr_t)(ws+640);
	i8 v1641 = *(i8*)(intptr_t)v1640;
	i8 v1642 = (i8)(intptr_t)(ws+648);
	i2 v1643 = *(i2*)(intptr_t)v1642;
	i8 v1644;
	f82_FindOrCreateSub(&v1644, v1643, v1641);
	i8 v1645 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v1645 = v1644;

	i8 v1646 = (i8)(intptr_t)(ws+656);
	i8 v1647 = *(i8*)(intptr_t)v1646;
	i8 v1648;
	f83_Deref(&v1648, v1647);
	i8 v1649 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v1649 = v1648;

	i8 v1650 = (i8)(intptr_t)(ws+656);
	i8 v1651 = *(i8*)(intptr_t)v1650;
	i8 v1652 = v1651+(+188);
	i1 v1653 = *(i1*)(intptr_t)v1652;
	i1 v1654 = v1653&(+1);
	i1 v1655 = (i1)+0;
	if (v1654==v1655) goto c02_0186; else goto c02_0185;

c02_0185:;

	f93_CopySourceChunk();

	goto c02_0182;

c02_0186:;

c02_0182:;

	goto c02_0179;

c02_0181:;

c02_0179:;

	i8 v1656 = (i8)(intptr_t)(ws+640);
	i8 v1657 = *(i8*)(intptr_t)v1656;
	i8 v1658 = (i8)(intptr_t)(ws+668);
	i4 v1659 = *(i4*)(intptr_t)v1658;
	f44_FCBSeek(v1659, v1657);

	goto c02_0177;

c02_0178:;

endsub:;
}

// WriteAllSubroutinesToOutputFile workspace at ws+632 length ws+8
void f94_WriteAllSubroutinesToOutputFile(i8 p1660 /* coos */) {
	*(i8*)(intptr_t)(ws+632) = p1660; /*coos */

c02_0189:;

	i8 v1661 = (i8)(intptr_t)(ws+632);
	i8 v1662 = *(i8*)(intptr_t)v1661;
	i8 v1663 = (i8)+0;
	if (v1662==v1663) goto c02_018c; else goto c02_018b;

c02_018b:;

	i8 v1664 = (i8)(intptr_t)(ws+632);
	i8 v1665 = *(i8*)(intptr_t)v1664;
	f86_WriteSubroutinesToOutputFile(v1665);

	i8 v1666 = (i8)(intptr_t)(ws+632);
	i8 v1667 = *(i8*)(intptr_t)v1666;
	i8 v1668 = v1667+(+664);
	i8 v1669 = *(i8*)(intptr_t)v1668;
	i8 v1670 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1670 = v1669;

	goto c02_0189;

c02_018c:;

endsub:;
}
const i1 c02_s0014[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
const i1 c02_s0015[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
const i1 c02_s0016[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
const i1 c02_s0017[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };

// ResolveExternals workspace at ws+632 length ws+24
void f95_ResolveExternals(void) {

	i1 v1671 = (i1)+0;
	i8 v1672 = (i8)(intptr_t)(ws+640);
	*(i1*)(intptr_t)v1672 = v1671;

	i8 v1673 = (i8)(intptr_t)(ws+32);
	i8 v1674 = *(i8*)(intptr_t)v1673;
	i8 v1675 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1675 = v1674;

c02_018f:;

	i8 v1676 = (i8)(intptr_t)(ws+648);
	i8 v1677 = *(i8*)(intptr_t)v1676;
	i8 v1678 = (i8)+0;
	if (v1677==v1678) goto c02_0192; else goto c02_0191;

c02_0191:;

	i8 v1679 = (i8)(intptr_t)(ws+648);
	i8 v1680 = *(i8*)(intptr_t)v1679;
	i8 v1681 = v1680+(+188);
	i1 v1682 = *(i1*)(intptr_t)v1681;
	i1 v1683 = v1682&(+2);
	i1 v1684 = (i1)+0;
	if (v1683==v1684) goto c02_0197; else goto c02_0196;

c02_0196:;

	i8 v1685 = (i8)(intptr_t)(ws+648);
	i8 v1686 = *(i8*)(intptr_t)v1685;
	i8 v1687 = v1686+(+160);
	i8 v1688 = *(i8*)(intptr_t)v1687;
	i8 v1689 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1689 = v1688;

	i8 v1690 = (i8)(intptr_t)(ws+632);
	i8 v1691 = *(i8*)(intptr_t)v1690;
	i8 v1692 = (i8)+0;
	if (v1691==v1692) goto c02_019c; else goto c02_019b;

c02_019b:;

	i8 v1693 = (i8)(intptr_t)(ws+632);
	i8 v1694 = *(i8*)(intptr_t)v1693;
	i8 v1695 = v1694+(+16);
	i8 v1696 = *(i8*)(intptr_t)v1695;
	i8 v1697 = (i8)+0;
	if (v1696==v1697) goto c02_01a3; else goto c02_01a4;

c02_01a4:;

	i8 v1698 = (i8)(intptr_t)(ws+632);
	i8 v1699 = *(i8*)(intptr_t)v1698;
	i8 v1700 = v1699+(+16);
	i8 v1701 = *(i8*)(intptr_t)v1700;
	i8 v1702 = (i8)(intptr_t)(ws+648);
	i8 v1703 = *(i8*)(intptr_t)v1702;
	if (v1701==v1703) goto c02_01a3; else goto c02_01a2;

c02_01a2:;

	i8 v1704 = (i8)(intptr_t)c02_s0014;
	f55_SimpleError(v1704);

	goto c02_019d;

c02_01a3:;

c02_019d:;

	i8 v1705 = (i8)(intptr_t)(ws+648);
	i8 v1706 = *(i8*)(intptr_t)v1705;
	i8 v1707 = (i8)(intptr_t)(ws+632);
	i8 v1708 = *(i8*)(intptr_t)v1707;
	i8 v1709 = v1708+(+16);
	*(i8*)(intptr_t)v1709 = v1706;

	goto c02_0198;

c02_019c:;

c02_0198:;

	goto c02_0193;

c02_0197:;

c02_0193:;

	i8 v1710 = (i8)(intptr_t)(ws+648);
	i8 v1711 = *(i8*)(intptr_t)v1710;
	i8 v1712 = v1711+(+8);
	i8 v1713 = *(i8*)(intptr_t)v1712;
	i8 v1714 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1714 = v1713;

	goto c02_018f;

c02_0192:;

	i8 v1715 = (i8)(intptr_t)(ws+32);
	i8 v1716 = *(i8*)(intptr_t)v1715;
	i8 v1717 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1717 = v1716;

c02_01a7:;

	i8 v1718 = (i8)(intptr_t)(ws+648);
	i8 v1719 = *(i8*)(intptr_t)v1718;
	i8 v1720 = (i8)+0;
	if (v1719==v1720) goto c02_01aa; else goto c02_01a9;

c02_01a9:;

	i8 v1721 = (i8)(intptr_t)(ws+648);
	i8 v1722 = *(i8*)(intptr_t)v1721;
	i8 v1723 = v1722+(+160);
	i8 v1724 = *(i8*)(intptr_t)v1723;
	i8 v1725 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1725 = v1724;

	i8 v1726 = (i8)(intptr_t)(ws+632);
	i8 v1727 = *(i8*)(intptr_t)v1726;
	i8 v1728 = (i8)+0;
	if (v1727==v1728) goto c02_01b1; else goto c02_01b2;

c02_01b2:;

	i8 v1729 = (i8)(intptr_t)(ws+632);
	i8 v1730 = *(i8*)(intptr_t)v1729;
	i8 v1731 = v1730+(+16);
	i8 v1732 = *(i8*)(intptr_t)v1731;
	i8 v1733 = (i8)+0;
	if (v1732==v1733) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	i8 v1734 = (i8)(intptr_t)c02_s0015;
	f11_print(v1734);

	i8 v1735 = (i8)(intptr_t)(ws+632);
	i8 v1736 = *(i8*)(intptr_t)v1735;
	i8 v1737 = v1736+(+8);
	i8 v1738 = *(i8*)(intptr_t)v1737;
	f11_print(v1738);

	i8 v1739 = (i8)(intptr_t)c02_s0016;
	f11_print(v1739);

	i1 v1740 = (i1)+1;
	i8 v1741 = (i8)(intptr_t)(ws+640);
	*(i1*)(intptr_t)v1741 = v1740;

	goto c02_01ab;

c02_01b1:;

c02_01ab:;

	i8 v1742 = (i8)(intptr_t)(ws+648);
	i8 v1743 = *(i8*)(intptr_t)v1742;
	i8 v1744 = v1743+(+8);
	i8 v1745 = *(i8*)(intptr_t)v1744;
	i8 v1746 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1746 = v1745;

	goto c02_01a7;

c02_01aa:;

	i8 v1747 = (i8)(intptr_t)(ws+640);
	i1 v1748 = *(i1*)(intptr_t)v1747;
	i1 v1749 = (i1)+0;
	if (v1748==v1749) goto c02_01b7; else goto c02_01b6;

c02_01b6:;

	i8 v1750 = (i8)(intptr_t)c02_s0017;
	f55_SimpleError(v1750);

	goto c02_01b3;

c02_01b7:;

c02_01b3:;

endsub:;
}
const i1 c02_s0018[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };

// push workspace at ws+3088 length ws+10
void f97_push(i8 p1771 /* subr */) {
	*(i8*)(intptr_t)(ws+3088) = p1771; /*subr */

	i8 v1772 = (i8)(intptr_t)(ws+3040);
	i2 v1773 = *(i2*)(intptr_t)v1772;
	i8 v1774 = (i8)(intptr_t)(ws+3096);
	*(i2*)(intptr_t)v1774 = v1773;

c02_01c0:;

	i8 v1775 = (i8)(intptr_t)(ws+3096);
	i2 v1776 = *(i2*)(intptr_t)v1775;
	i2 v1777 = (i2)+0;
	if (v1776==v1777) goto c02_01c3; else goto c02_01c2;

c02_01c2:;

	i8 v1778 = (i8)(intptr_t)(ws+3096);
	i2 v1779 = *(i2*)(intptr_t)v1778;
	i2 v1780 = v1779+(-1);
	i8 v1781 = (i8)(intptr_t)(ws+3096);
	*(i2*)(intptr_t)v1781 = v1780;

	i8 v1782 = (i8)(intptr_t)(ws+640);
	i8 v1783 = (i8)(intptr_t)(ws+3096);
	i2 v1784 = *(i2*)(intptr_t)v1783;
	i8 v1785 = v1784;
	i1 v1786 = (i1)+3;
	i8 v1787 = ((i8)v1785)<<v1786;
	i8 v1788 = v1782+v1787;
	i8 v1789 = *(i8*)(intptr_t)v1788;
	i8 v1790 = (i8)(intptr_t)(ws+3088);
	i8 v1791 = *(i8*)(intptr_t)v1790;
	if (v1789==v1791) goto c02_01c7; else goto c02_01c8;

c02_01c7:;

	goto endsub;

c02_01c8:;

c02_01c4:;

	goto c02_01c0;

c02_01c3:;

	i8 v1792 = (i8)(intptr_t)(ws+3040);
	i2 v1793 = *(i2*)(intptr_t)v1792;
	i2 v1794 = (i2)+300;
	if (v1793==v1794) goto c02_01cc; else goto c02_01cd;

c02_01cc:;

	i8 v1795 = (i8)(intptr_t)c02_s0018;
	f11_print(v1795);

	f6_ExitWithError();

	goto c02_01c9;

c02_01cd:;

c02_01c9:;

	i8 v1796 = (i8)(intptr_t)(ws+3088);
	i8 v1797 = *(i8*)(intptr_t)v1796;
	i8 v1798 = (i8)(intptr_t)(ws+640);
	i8 v1799 = (i8)(intptr_t)(ws+3040);
	i2 v1800 = *(i2*)(intptr_t)v1799;
	i8 v1801 = v1800;
	i1 v1802 = (i1)+3;
	i8 v1803 = ((i8)v1801)<<v1802;
	i8 v1804 = v1798+v1803;
	*(i8*)(intptr_t)v1804 = v1797;

	i8 v1805 = (i8)(intptr_t)(ws+3040);
	i2 v1806 = *(i2*)(intptr_t)v1805;
	i2 v1807 = v1806+(+1);
	i8 v1808 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1808 = v1807;

endsub:;
}
const i1 c02_s0019[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
const i1 c02_s001a[] = { 0x20,0x20,0x23,0 };
const i1 c02_s001b[] = { 0x3a,0x20,0 };
const i1 c02_s001c[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };

// PlaceSubroutines workspace at ws+632 length ws+2452
void f96_PlaceSubroutines(i8 p1751 /* subroutine */) {
	*(i8*)(intptr_t)(ws+632) = p1751; /*subroutine */

	i2 v1752 = (i2)+0;
	i8 v1753 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1753 = v1752;

	i1 v1754 = (i1)+0;
	i8 v1755 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1755 = v1754;

c02_01ba:;

	i8 v1756 = (i8)(intptr_t)(ws+3042);
	i1 v1757 = *(i1*)(intptr_t)v1756;
	i1 v1758 = (i1)+4;
	if (v1757==v1758) goto c02_01bd; else goto c02_01bc;

c02_01bc:;

	i2 v1759 = (i2)+0;
	i8 v1760 = (i8)(intptr_t)(ws+568);
	i8 v1761 = (i8)(intptr_t)(ws+3042);
	i1 v1762 = *(i1*)(intptr_t)v1761;
	i8 v1763 = v1762;
	i1 v1764 = (i1)+1;
	i8 v1765 = ((i8)v1763)<<v1764;
	i8 v1766 = v1760+v1765;
	*(i2*)(intptr_t)v1766 = v1759;

	i8 v1767 = (i8)(intptr_t)(ws+3042);
	i1 v1768 = *(i1*)(intptr_t)v1767;
	i1 v1769 = v1768+(+1);
	i8 v1770 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1770 = v1769;

	goto c02_01ba;

c02_01bd:;


	i8 v1809 = (i8)(intptr_t)(ws+632);
	i8 v1810 = *(i8*)(intptr_t)v1809;
	f97_push(v1810);

c02_01d0:;

	i8 v1811 = (i8)(intptr_t)(ws+3040);
	i2 v1812 = *(i2*)(intptr_t)v1811;
	i2 v1813 = (i2)+0;
	if (v1812==v1813) goto c02_01d3; else goto c02_01d2;

c02_01d2:;

	i8 v1814 = (i8)(intptr_t)(ws+3040);
	i2 v1815 = *(i2*)(intptr_t)v1814;
	i2 v1816 = v1815+(-1);
	i8 v1817 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1817 = v1816;

	i8 v1818 = (i8)(intptr_t)(ws+640);
	i8 v1819 = (i8)(intptr_t)(ws+3040);
	i2 v1820 = *(i2*)(intptr_t)v1819;
	i8 v1821 = v1820;
	i1 v1822 = (i1)+3;
	i8 v1823 = ((i8)v1821)<<v1822;
	i8 v1824 = v1818+v1823;
	i8 v1825 = *(i8*)(intptr_t)v1824;
	i8 v1826 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1826 = v1825;

	i8 v1827 = (i8)(intptr_t)(ws+632);
	i8 v1828 = *(i8*)(intptr_t)v1827;
	i8 v1829 = v1828+(+188);
	i1 v1830 = *(i1*)(intptr_t)v1829;
	i1 v1831 = v1830|(+1);
	i8 v1832 = (i8)(intptr_t)(ws+632);
	i8 v1833 = *(i8*)(intptr_t)v1832;
	i8 v1834 = v1833+(+188);
	*(i1*)(intptr_t)v1834 = v1831;

	i1 v1835 = (i1)+0;
	i8 v1836 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1836 = v1835;

c02_01d6:;

	i8 v1837 = (i8)(intptr_t)(ws+3042);
	i1 v1838 = *(i1*)(intptr_t)v1837;
	i1 v1839 = (i1)+4;
	if (v1838==v1839) goto c02_01d9; else goto c02_01d8;

c02_01d8:;

	i8 v1840 = (i8)(intptr_t)(ws+632);
	i8 v1841 = *(i8*)(intptr_t)v1840;
	i8 v1842 = v1841+(+176);
	i8 v1843 = (i8)(intptr_t)(ws+3042);
	i1 v1844 = *(i1*)(intptr_t)v1843;
	i8 v1845 = v1844;
	i1 v1846 = (i1)+1;
	i8 v1847 = ((i8)v1845)<<v1846;
	i8 v1848 = v1842+v1847;
	i2 v1849 = *(i2*)(intptr_t)v1848;
	i8 v1850 = (i8)(intptr_t)(ws+632);
	i8 v1851 = *(i8*)(intptr_t)v1850;
	i8 v1852 = v1851+(+168);
	i8 v1853 = (i8)(intptr_t)(ws+3042);
	i1 v1854 = *(i1*)(intptr_t)v1853;
	i8 v1855 = v1854;
	i1 v1856 = (i1)+1;
	i8 v1857 = ((i8)v1855)<<v1856;
	i8 v1858 = v1852+v1857;
	i2 v1859 = *(i2*)(intptr_t)v1858;
	i2 v1860 = v1849+v1859;
	i8 v1861 = (i8)(intptr_t)(ws+3052);
	*(i2*)(intptr_t)v1861 = v1860;

	i8 v1862 = (i8)(intptr_t)(ws+3052);
	i2 v1863 = *(i2*)(intptr_t)v1862;
	i1 v1864 = (i1)+8;
	i2 v1865;
	f68_ArchAlignUp(&v1865, v1864, v1863);
	i8 v1866 = (i8)(intptr_t)(ws+3044);
	i8 v1867 = (i8)(intptr_t)(ws+3042);
	i1 v1868 = *(i1*)(intptr_t)v1867;
	i8 v1869 = v1868;
	i1 v1870 = (i1)+1;
	i8 v1871 = ((i8)v1869)<<v1870;
	i8 v1872 = v1866+v1871;
	*(i2*)(intptr_t)v1872 = v1865;

	i8 v1873 = (i8)(intptr_t)(ws+568);
	i8 v1874 = (i8)(intptr_t)(ws+3042);
	i1 v1875 = *(i1*)(intptr_t)v1874;
	i8 v1876 = v1875;
	i1 v1877 = (i1)+1;
	i8 v1878 = ((i8)v1876)<<v1877;
	i8 v1879 = v1873+v1878;
	i2 v1880 = *(i2*)(intptr_t)v1879;
	i8 v1881 = (i8)(intptr_t)(ws+3052);
	i2 v1882 = *(i2*)(intptr_t)v1881;
	if (v1880<v1882) goto c02_01dd; else goto c02_01de;

c02_01dd:;

	i8 v1883 = (i8)(intptr_t)(ws+3052);
	i2 v1884 = *(i2*)(intptr_t)v1883;
	i8 v1885 = (i8)(intptr_t)(ws+568);
	i8 v1886 = (i8)(intptr_t)(ws+3042);
	i1 v1887 = *(i1*)(intptr_t)v1886;
	i8 v1888 = v1887;
	i1 v1889 = (i1)+1;
	i8 v1890 = ((i8)v1888)<<v1889;
	i8 v1891 = v1885+v1890;
	*(i2*)(intptr_t)v1891 = v1884;

	goto c02_01da;

c02_01de:;

c02_01da:;

	i8 v1892 = (i8)(intptr_t)(ws+3042);
	i1 v1893 = *(i1*)(intptr_t)v1892;
	i1 v1894 = v1893+(+1);
	i8 v1895 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1895 = v1894;

	goto c02_01d6;

c02_01d9:;

	i8 v1896 = (i8)(intptr_t)(ws+632);
	i8 v1897 = *(i8*)(intptr_t)v1896;
	i8 v1898 = v1897+(+16);
	i8 v1899 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v1899 = v1898;

c02_01e1:;

	i8 v1900 = (i8)(intptr_t)(ws+3056);
	i8 v1901 = *(i8*)(intptr_t)v1900;
	i8 v1902 = (i8)+0;
	if (v1901==v1902) goto c02_01e4; else goto c02_01e3;

c02_01e3:;

	i1 v1903 = (i1)+0;
	i8 v1904 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v1904 = v1903;

c02_01e7:;

	i8 v1905 = (i8)(intptr_t)(ws+3064);
	i1 v1906 = *(i1*)(intptr_t)v1905;
	i1 v1907 = (i1)+16;
	if (v1906==v1907) goto c02_01ea; else goto c02_01e9;

c02_01e9:;

	i8 v1908 = (i8)(intptr_t)(ws+3056);
	i8 v1909 = *(i8*)(intptr_t)v1908;
	i8 v1910 = v1909+(+8);
	i8 v1911 = (i8)(intptr_t)(ws+3064);
	i1 v1912 = *(i1*)(intptr_t)v1911;
	i8 v1913 = v1912;
	i1 v1914 = (i1)+3;
	i8 v1915 = ((i8)v1913)<<v1914;
	i8 v1916 = v1910+v1915;
	i8 v1917 = *(i8*)(intptr_t)v1916;
	i8 v1918 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1918 = v1917;

	i8 v1919 = (i8)(intptr_t)(ws+3064);
	i1 v1920 = *(i1*)(intptr_t)v1919;
	i1 v1921 = v1920+(+1);
	i8 v1922 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v1922 = v1921;

	i8 v1923 = (i8)(intptr_t)(ws+3072);
	i8 v1924 = *(i8*)(intptr_t)v1923;
	i8 v1925 = (i8)+0;
	if (v1924==v1925) goto c02_01ee; else goto c02_01ef;

c02_01ee:;

	goto c02_01ea;

c02_01ef:;

c02_01eb:;

	i8 v1926 = (i8)(intptr_t)(ws+3072);
	i8 v1927 = *(i8*)(intptr_t)v1926;
	i8 v1928;
	f83_Deref(&v1928, v1927);
	i8 v1929 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v1929 = v1928;

	i1 v1930 = (i1)+0;
	i8 v1931 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1931 = v1930;

c02_01f2:;

	i8 v1932 = (i8)(intptr_t)(ws+3042);
	i1 v1933 = *(i1*)(intptr_t)v1932;
	i1 v1934 = (i1)+4;
	if (v1933==v1934) goto c02_01f5; else goto c02_01f4;

c02_01f4:;

	i8 v1935 = (i8)(intptr_t)(ws+3072);
	i8 v1936 = *(i8*)(intptr_t)v1935;
	i8 v1937 = v1936+(+176);
	i8 v1938 = (i8)(intptr_t)(ws+3042);
	i1 v1939 = *(i1*)(intptr_t)v1938;
	i8 v1940 = v1939;
	i1 v1941 = (i1)+1;
	i8 v1942 = ((i8)v1940)<<v1941;
	i8 v1943 = v1937+v1942;
	i2 v1944 = *(i2*)(intptr_t)v1943;
	i8 v1945 = (i8)(intptr_t)(ws+3080);
	*(i2*)(intptr_t)v1945 = v1944;

	i8 v1946 = (i8)(intptr_t)(ws+3044);
	i8 v1947 = (i8)(intptr_t)(ws+3042);
	i1 v1948 = *(i1*)(intptr_t)v1947;
	i8 v1949 = v1948;
	i1 v1950 = (i1)+1;
	i8 v1951 = ((i8)v1949)<<v1950;
	i8 v1952 = v1946+v1951;
	i2 v1953 = *(i2*)(intptr_t)v1952;
	i8 v1954 = (i8)(intptr_t)(ws+3082);
	*(i2*)(intptr_t)v1954 = v1953;

	i8 v1955 = (i8)(intptr_t)(ws+3080);
	i2 v1956 = *(i2*)(intptr_t)v1955;
	i8 v1957 = (i8)(intptr_t)(ws+3082);
	i2 v1958 = *(i2*)(intptr_t)v1957;
	if (v1956<v1958) goto c02_01f9; else goto c02_01fa;

c02_01f9:;

	i8 v1959 = (i8)(intptr_t)(ws+3082);
	i2 v1960 = *(i2*)(intptr_t)v1959;
	i8 v1961 = (i8)(intptr_t)(ws+3072);
	i8 v1962 = *(i8*)(intptr_t)v1961;
	i8 v1963 = v1962+(+176);
	i8 v1964 = (i8)(intptr_t)(ws+3042);
	i1 v1965 = *(i1*)(intptr_t)v1964;
	i8 v1966 = v1965;
	i1 v1967 = (i1)+1;
	i8 v1968 = ((i8)v1966)<<v1967;
	i8 v1969 = v1963+v1968;
	*(i2*)(intptr_t)v1969 = v1960;

	i8 v1970 = (i8)(intptr_t)(ws+3072);
	i8 v1971 = *(i8*)(intptr_t)v1970;
	f97_push(v1971);

	goto c02_01f6;

c02_01fa:;

c02_01f6:;

	i8 v1972 = (i8)(intptr_t)(ws+3042);
	i1 v1973 = *(i1*)(intptr_t)v1972;
	i1 v1974 = v1973+(+1);
	i8 v1975 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1975 = v1974;

	goto c02_01f2;

c02_01f5:;

	i8 v1976 = (i8)(intptr_t)(ws+3072);
	i8 v1977 = *(i8*)(intptr_t)v1976;
	i8 v1978 = v1977+(+188);
	i1 v1979 = *(i1*)(intptr_t)v1978;
	i1 v1980 = v1979&(+1);
	i1 v1981 = (i1)+0;
	if (v1980==v1981) goto c02_01fe; else goto c02_01ff;

c02_01fe:;

	i8 v1982 = (i8)(intptr_t)(ws+3072);
	i8 v1983 = *(i8*)(intptr_t)v1982;
	f97_push(v1983);

	i8 v1984 = (i8)(intptr_t)(ws+3072);
	i8 v1985 = *(i8*)(intptr_t)v1984;
	i8 v1986 = v1985+(+188);
	i1 v1987 = *(i1*)(intptr_t)v1986;
	i1 v1988 = v1987|(+1);
	i8 v1989 = (i8)(intptr_t)(ws+3072);
	i8 v1990 = *(i8*)(intptr_t)v1989;
	i8 v1991 = v1990+(+188);
	*(i1*)(intptr_t)v1991 = v1988;

	goto c02_01fb;

c02_01ff:;

c02_01fb:;

	goto c02_01e7;

c02_01ea:;

	i8 v1992 = (i8)(intptr_t)(ws+3056);
	i8 v1993 = *(i8*)(intptr_t)v1992;
	i8 v1994 = *(i8*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v1995 = v1994;

	goto c02_01e1;

c02_01e4:;

	goto c02_01d0;

c02_01d3:;

	i8 v1996 = (i8)(intptr_t)c02_s0019;
	f11_print(v1996);

	i1 v1997 = (i1)+0;
	i8 v1998 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1998 = v1997;

c02_0202:;

	i8 v1999 = (i8)(intptr_t)(ws+3042);
	i1 v2000 = *(i1*)(intptr_t)v1999;
	i1 v2001 = (i1)+4;
	if (v2000==v2001) goto c02_0205; else goto c02_0204;

c02_0204:;

	i8 v2002 = (i8)(intptr_t)c02_s001a;
	f11_print(v2002);

	i8 v2003 = (i8)(intptr_t)(ws+3042);
	i1 v2004 = *(i1*)(intptr_t)v2003;
	f17_print_i8(v2004);

	i8 v2005 = (i8)(intptr_t)c02_s001b;
	f11_print(v2005);

	i8 v2006 = (i8)(intptr_t)(ws+568);
	i8 v2007 = (i8)(intptr_t)(ws+3042);
	i1 v2008 = *(i1*)(intptr_t)v2007;
	i8 v2009 = v2008;
	i1 v2010 = (i1)+1;
	i8 v2011 = ((i8)v2009)<<v2010;
	i8 v2012 = v2006+v2011;
	i2 v2013 = *(i2*)(intptr_t)v2012;
	f16_print_i16(v2013);

	i8 v2014 = (i8)(intptr_t)c02_s001c;
	f11_print(v2014);

	i8 v2015 = (i8)(intptr_t)(ws+3042);
	i1 v2016 = *(i1*)(intptr_t)v2015;
	i1 v2017 = v2016+(+1);
	i8 v2018 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v2018 = v2017;

	goto c02_0202;

c02_0205:;

endsub:;
}
const i1 c02_s001d[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
const i1 c02_s001e[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
const i1 c02_s001f[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };

// SyntaxError workspace at ws+632 length ws+0
void f98_SyntaxError(void) {

	i8 v2035 = (i8)(intptr_t)c02_s001f;
	f55_SimpleError(v2035);

endsub:;
}
const i1 c02_s0020[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };

// AddInputFile workspace at ws+632 length ws+24
void f99_AddInputFile(i8 p2036 /* filename */) {
	*(i8*)(intptr_t)(ws+632) = p2036; /*filename */

	i8 v2037 = (i8)(intptr_t)c02_s0020;
	f11_print(v2037);

	i8 v2038 = (i8)(intptr_t)(ws+632);
	i8 v2039 = *(i8*)(intptr_t)v2038;
	f11_print(v2039);

	f12_print_nl();

	i8 v2040 = (i8)(intptr_t)(ws+632);
	i8 v2041 = *(i8*)(intptr_t)v2040;
	i8 v2042;
	f85_OpenAndLoadCoo(&v2042, v2041);
	i8 v2043 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2043 = v2042;

	i8 v2044 = (i8)(intptr_t)(ws+592);
	i8 v2045 = *(i8*)(intptr_t)v2044;
	i8 v2046 = (i8)+0;
	if (v2045==v2046) goto c02_0209; else goto c02_020a;

c02_0209:;

	i8 v2047 = (i8)(intptr_t)(ws+640);
	i8 v2048 = *(i8*)(intptr_t)v2047;
	i8 v2049 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2049 = v2048;

	i8 v2050 = (i8)(intptr_t)(ws+640);
	i8 v2051 = *(i8*)(intptr_t)v2050;
	i8 v2052 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2052 = v2051;

	goto c02_0206;

c02_020a:;

	i8 v2053 = (i8)(intptr_t)(ws+640);
	i8 v2054 = *(i8*)(intptr_t)v2053;
	i8 v2055 = (i8)(intptr_t)(ws+584);
	i8 v2056 = *(i8*)(intptr_t)v2055;
	i8 v2057 = v2056+(+664);
	*(i8*)(intptr_t)v2057 = v2054;

	i8 v2058 = (i8)(intptr_t)(ws+640);
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2060 = v2059;

c02_0206:;

	i8 v2061 = (i8)(intptr_t)(ws+640);
	i8 v2062 = *(i8*)(intptr_t)v2061;
	i2 v2063 = (i2)+0;
	i8 v2064;
	f81_FindSub(&v2064, v2063, v2062);
	i8 v2065 = *(i8*)(intptr_t)v2064;
	i8 v2066 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v2066 = v2065;

	i8 v2067 = (i8)(intptr_t)(ws+648);
	i8 v2068 = *(i8*)(intptr_t)v2067;
	i8 v2069 = (i8)+0;
	if (v2068==v2069) goto c02_020f; else goto c02_020e;

c02_020e:;

	i8 v2070 = (i8)(intptr_t)(ws+608);
	i8 v2071 = *(i8*)(intptr_t)v2070;
	i8 v2072 = (i8)+0;
	if (v2071==v2072) goto c02_0213; else goto c02_0214;

c02_0213:;

	i8 v2073 = (i8)(intptr_t)(ws+648);
	i8 v2074 = *(i8*)(intptr_t)v2073;
	i8 v2075 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2075 = v2074;

	goto c02_0210;

c02_0214:;

c02_0210:;

	goto c02_020b;

c02_020f:;

c02_020b:;

	i8 v2076 = (i8)(intptr_t)(ws+616);
	i8 v2077 = *(i8*)(intptr_t)v2076;
	i8 v2078 = (i8)+0;
	if (v2077==v2078) goto c02_0219; else goto c02_0218;

c02_0218:;

	i8 v2079 = (i8)(intptr_t)(ws+616);
	i8 v2080 = *(i8*)(intptr_t)v2079;
	i8 v2081 = (i8)(intptr_t)(ws+648);
	i8 v2082 = *(i8*)(intptr_t)v2081;
	f80_AddRef(v2082, v2080);

	goto c02_0215;

c02_0219:;

c02_0215:;

	i8 v2083 = (i8)(intptr_t)(ws+648);
	i8 v2084 = *(i8*)(intptr_t)v2083;
	i8 v2085 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2085 = v2084;

endsub:;
}
const i1 c02_s0021[] = { 0x2d,0x6f,0 };
const i1 c02_s0022[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
const i1 c02_s0023[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
const i1 c02_s0024[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s0025[] = { 0x57,0x72,0x69,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x2e,0x2e,0x2e,0x0a,0 };
const i1 c02_s0026[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
const i1 c02_s0027[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };

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

	i1 v999 = (i1)+0;
	i8 v1000 = (i8)(intptr_t)(ws+577);
	*(i1*)(intptr_t)v1000 = v999;

















	i8 v2019 = (i8)(intptr_t)c02_s001d;
	f11_print(v2019);

	i8 v2020;
	f35_GetFreeMemory(&v2020);
	i1 v2021 = (i1)+10;
	i8 v2022 = ((i8)v2020)>>v2021;
	i2 v2023 = v2022;
	f16_print_i16(v2023);

	i8 v2024 = (i8)(intptr_t)c02_s001e;
	f11_print(v2024);

	i8 v2025 = (i8)+0;
	i8 v2026 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2026 = v2025;

	i8 v2027 = (i8)+0;
	i8 v2028 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2028 = v2027;

	i8 v2029 = (i8)+0;
	i8 v2030 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2030 = v2029;

	i8 v2031 = (i8)+0;
	i8 v2032 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2032 = v2031;

	i8 v2033 = (i8)+0;
	i8 v2034 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2034 = v2033;



	f23_ArgvInit();

c02_021a:;

	i8 v2086;
	f24_ArgvNext(&v2086);
	i8 v2087 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2087 = v2086;

	i8 v2088 = (i8)(intptr_t)(ws+624);
	i8 v2089 = *(i8*)(intptr_t)v2088;
	i8 v2090 = (i8)+0;
	if (v2089==v2090) goto c02_021f; else goto c02_0220;

c02_021f:;

	goto c02_021b;

c02_0220:;

c02_021c:;

	i8 v2091 = (i8)(intptr_t)(ws+624);
	i8 v2092 = *(i8*)(intptr_t)v2091;
	i8 v2093 = (i8)(intptr_t)c02_s0021;
	i1 v2094;
	f27_StrICmp(&v2094, v2093, v2092);
	i1 v2095 = (i1)+0;
	if (v2094==v2095) goto c02_0224; else goto c02_0225;

c02_0224:;

	i8 v2096;
	f24_ArgvNext(&v2096);
	i8 v2097 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2097 = v2096;

	goto c02_0221;

c02_0225:;

	i8 v2098 = (i8)(intptr_t)(ws+624);
	i8 v2099 = *(i8*)(intptr_t)v2098;
	i1 v2100 = *(i1*)(intptr_t)v2099;
	i1 v2101 = (i1)+45;
	if (v2100==v2101) goto c02_0228; else goto c02_0229;

c02_0228:;

	f98_SyntaxError();

	goto c02_0221;

c02_0229:;

	i8 v2102 = (i8)(intptr_t)(ws+624);
	i8 v2103 = *(i8*)(intptr_t)v2102;
	f99_AddInputFile(v2103);

c02_0221:;

	goto c02_021a;

c02_021b:;

	i8 v2104 = (i8)(intptr_t)(ws+608);
	i8 v2105 = *(i8*)(intptr_t)v2104;
	i8 v2106 = (i8)+0;
	if (v2105==v2106) goto c02_022d; else goto c02_022e;

c02_022d:;

	i8 v2107 = (i8)(intptr_t)c02_s0022;
	f55_SimpleError(v2107);

	goto c02_022a;

c02_022e:;

c02_022a:;

	i8 v2108 = (i8)(intptr_t)(ws+600);
	i8 v2109 = *(i8*)(intptr_t)v2108;
	i8 v2110 = (i8)+0;
	if (v2109==v2110) goto c02_0232; else goto c02_0233;

c02_0232:;

	i8 v2111 = (i8)(intptr_t)c02_s0023;
	f55_SimpleError(v2111);

	goto c02_022f;

c02_0233:;

c02_022f:;

	i8 v2112 = (i8)(intptr_t)c02_s0024;
	f11_print(v2112);

	f95_ResolveExternals();

	i8 v2113 = (i8)(intptr_t)(ws+608);
	i8 v2114 = *(i8*)(intptr_t)v2113;
	f96_PlaceSubroutines(v2114);

	i8 v2115 = (i8)(intptr_t)(ws+600);
	i8 v2116 = *(i8*)(intptr_t)v2115;
	f66_EmitterOpenfile(v2116);

	i8 v2117 = (i8)(intptr_t)c02_s0025;
	f11_print(v2117);

	i8 v2118 = (i8)(intptr_t)(ws+592);
	i8 v2119 = *(i8*)(intptr_t)v2118;
	f72_ArchEmitHeader(v2119);

	i8 v2120 = (i8)(intptr_t)(ws+592);
	i8 v2121 = *(i8*)(intptr_t)v2120;
	f94_WriteAllSubroutinesToOutputFile(v2121);

	i8 v2122 = (i8)(intptr_t)(ws+592);
	i8 v2123 = *(i8*)(intptr_t)v2122;
	f73_ArchEmitFooter(v2123);

	f67_EmitterClosefile();

	i8 v2124 = (i8)(intptr_t)c02_s0026;
	f11_print(v2124);

	i8 v2125;
	f35_GetFreeMemory(&v2125);
	i1 v2126 = (i1)+10;
	i8 v2127 = ((i8)v2125)>>v2126;
	i2 v2128 = v2127;
	f16_print_i16(v2128);

	i8 v2129 = (i8)(intptr_t)c02_s0027;
	f11_print(v2129);

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                        