#include "cowgol.h"
static i8 workspace[0x01d5];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3672 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+3640 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+3640) = p10; /* buf */
	*(i1*)(intptr_t)(ws+3648) = p9; /* byte */
	*(i8*)(intptr_t)(ws+3656) = p8; /* len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3640) 
,  
*(i1*)(intptr_t)(ws+3648) 
,  
*(i8*)(intptr_t)(ws+3656) 
); 



endsub:;
}

// print_char workspace at ws+3712 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+3712) = p12; /* c */


	
putchar( 
*(i1*)(intptr_t)(ws+3712) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+3696 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+3696) = p21; /* ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+3696);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+3704);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+3704);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+3704);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+3696);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+3696);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+3656 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+3696 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+3696) = p41; /* value */
	*(i1*)(intptr_t)(ws+3700) = p40; /* base */
	*(i8*)(intptr_t)(ws+3704) = p39; /* buffer */

	i8 v42 = (i8)(intptr_t)(ws+3704);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+3696);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+3700);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+3696);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+3700);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+3696);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+3720);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+3720);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+3720);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+3720);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+3720);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+3712);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+3712);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+3712);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+3696);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+3704);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+3712);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v88 = v87;

c02_0014:;

	i8 v89 = (i8)(intptr_t)(ws+3728);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+3736);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+3728);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+3744);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+3736);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+3728);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+3744);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+3736);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+3728);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+3728);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+3736);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+3736);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0014;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+3712);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+3712);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+3664 length ws+32
void f16_print_i32(i4 p147 /* value */) {
	*(i4*)(intptr_t)(ws+3664) = p147; /* value */

	i8 v148 = (i8)(intptr_t)(ws+3664);
	i4 v149 = *(i4*)(intptr_t)v148;
	i1 v150 = (i1)+10;
	i8 v151 = (i8)(intptr_t)(ws+3668);
	i8 v152 = (i8)(intptr_t)(f14_UIToA);
	i8 v153;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v152)(&v153, v151, v150, v149);

	i8 v154 = (i8)(intptr_t)(ws+3680);
	*(i8*)(intptr_t)v154 = v153;

	i8 v155 = (i8)(intptr_t)(ws+3680);
	i8 v156 = *(i8*)(intptr_t)v155;
	i8 v157 = (i8)(intptr_t)(ws+3688);
	*(i8*)(intptr_t)v157 = v156;

	i8 v158 = (i8)(intptr_t)(ws+3668);
	i8 v159 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v159)(v158);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+3656 length ws+2
void f17_print_i16(i2 p160 /* value */) {
	*(i2*)(intptr_t)(ws+3656) = p160; /* value */

	i8 v161 = (i8)(intptr_t)(ws+3656);
	i2 v162 = *(i2*)(intptr_t)v161;
	i4 v163 = v162;
	i8 v164 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v164)(v163);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i8 workspace at ws+3496 length ws+1
void f18_print_i8(i1 p165 /* value */) {
	*(i1*)(intptr_t)(ws+3496) = p165; /* value */

	i8 v166 = (i8)(intptr_t)(ws+3496);
	i1 v167 = *(i1*)(intptr_t)v166;
	i4 v168 = v167;
	i8 v169 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v169)(v168);

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+3488 length ws+3
void f19_print_hex_i8(i1 p170 /* value */) {
	*(i1*)(intptr_t)(ws+3488) = p170; /* value */

	i1 v171 = (i1)+2;
	i8 v172 = (i8)(intptr_t)(ws+3489);
	*(i1*)(intptr_t)v172 = v171;

c02_001f:;

	i8 v173 = (i8)(intptr_t)(ws+3488);
	i1 v174 = *(i1*)(intptr_t)v173;
	i1 v175 = (i1)+4;
	i1 v176 = ((i1)v174)>>v175;
	i8 v177 = (i8)(intptr_t)(ws+3490);
	*(i1*)(intptr_t)v177 = v176;

	i8 v178 = (i8)(intptr_t)(ws+3490);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = (i1)+10;
	if (v179<v180) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v181 = (i8)(intptr_t)(ws+3490);
	i1 v182 = *(i1*)(intptr_t)v181;
	i1 v183 = v182+(+48);
	i8 v184 = (i8)(intptr_t)(ws+3490);
	*(i1*)(intptr_t)v184 = v183;

	goto c02_0021;

c02_0025:;

	i8 v185 = (i8)(intptr_t)(ws+3490);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = v186+(+87);
	i8 v188 = (i8)(intptr_t)(ws+3490);
	*(i1*)(intptr_t)v188 = v187;

c02_0021:;

	i8 v189 = (i8)(intptr_t)(ws+3490);
	i1 v190 = *(i1*)(intptr_t)v189;
	i8 v191 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v191)(v190);

	i8 v192 = (i8)(intptr_t)(ws+3488);
	i1 v193 = *(i1*)(intptr_t)v192;
	i1 v194 = (i1)+4;
	i1 v195 = ((i1)v193)<<v194;
	i8 v196 = (i8)(intptr_t)(ws+3488);
	*(i1*)(intptr_t)v196 = v195;

	i8 v197 = (i8)(intptr_t)(ws+3489);
	i1 v198 = *(i1*)(intptr_t)v197;
	i1 v199 = v198+(-1);
	i8 v200 = (i8)(intptr_t)(ws+3489);
	*(i1*)(intptr_t)v200 = v199;

	i8 v201 = (i8)(intptr_t)(ws+3489);
	i1 v202 = *(i1*)(intptr_t)v201;
	i1 v203 = (i1)+0;
	if (v202==v203) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+3480 length ws+4
void f21_print_hex_i32(i4 p215 /* value */) {
	*(i4*)(intptr_t)(ws+3480) = p215; /* value */

	i8 v216 = (i8)(intptr_t)(ws+3480);
	i4 v217 = *(i4*)(intptr_t)v216;
	i1 v218 = (i1)+24;
	i4 v219 = ((i4)v217)>>v218;
	i1 v220 = v219;
	i8 v221 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v221)(v220);

	i8 v222 = (i8)(intptr_t)(ws+3480);
	i4 v223 = *(i4*)(intptr_t)v222;
	i1 v224 = (i1)+16;
	i4 v225 = ((i4)v223)>>v224;
	i1 v226 = v225;
	i8 v227 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v227)(v226);

	i8 v228 = (i8)(intptr_t)(ws+3480);
	i4 v229 = *(i4*)(intptr_t)v228;
	i1 v230 = (i1)+8;
	i4 v231 = ((i4)v229)>>v230;
	i1 v232 = v231;
	i8 v233 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v233)(v232);

	i8 v234 = (i8)(intptr_t)(ws+3480);
	i4 v235 = *(i4*)(intptr_t)v234;
	i1 v236 = v235;
	i8 v237 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v237)(v236);

endsub:;
}

// ArgvInit workspace at ws+3280 length ws+0
void f24_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v350 = (i8)(intptr_t)(ws+16);
	i8 v351 = *(i8*)(intptr_t)v350;
	i8 v352 = v351+(+8);
	i8 v353 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v353 = v352;

endsub:;
}

// ArgvNext workspace at ws+3280 length ws+8
void f25_ArgvNext(i8* p354 /* arg */) {

	i8 v355 = (i8)(intptr_t)(ws+16);
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)+0;
	if (v356==v357) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v358 = (i8)+0;
	i8 v359 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v359 = v358;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v360 = (i8)(intptr_t)(ws+16);
	i8 v361 = *(i8*)(intptr_t)v360;
	i8 v362 = *(i8*)(intptr_t)v361;
	i8 v363 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v363 = v362;

	i8 v364 = (i8)(intptr_t)(ws+3280);
	i8 v365 = *(i8*)(intptr_t)v364;
	i8 v366 = (i8)+0;
	if (v365==v366) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v367 = (i8)+0;
	i8 v368 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v368 = v367;

	goto c02_0054;

c02_0058:;

	i8 v369 = (i8)(intptr_t)(ws+16);
	i8 v370 = *(i8*)(intptr_t)v369;
	i8 v371 = v370+(+8);
	i8 v372 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v372 = v371;

c02_0054:;

endsub:;
	*p354 = *(i8*)(intptr_t)(ws+3280);
}

// StrCmp workspace at ws+3560 length ws+17
void f26_StrCmp(i1* p373 /* res */, i8 p374 /* s2 */, i8 p375 /* s1 */) {
	*(i8*)(intptr_t)(ws+3560) = p375; /* s1 */
	*(i8*)(intptr_t)(ws+3568) = p374; /* s2 */

c02_0059:;

	i8 v376 = (i8)(intptr_t)(ws+3560);
	i8 v377 = *(i8*)(intptr_t)v376;
	i1 v378 = *(i1*)(intptr_t)v377;
	i8 v379 = (i8)(intptr_t)(ws+3568);
	i8 v380 = *(i8*)(intptr_t)v379;
	i1 v381 = *(i1*)(intptr_t)v380;
	i1 v382 = v378-v381;
	i8 v383 = (i8)(intptr_t)(ws+3576);
	*(i1*)(intptr_t)v383 = v382;

	i8 v384 = (i8)(intptr_t)(ws+3576);
	i1 v385 = *(i1*)(intptr_t)v384;
	i1 v386 = (i1)+0;
	if (v385==v386) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v387 = (i8)(intptr_t)(ws+3560);
	i8 v388 = *(i8*)(intptr_t)v387;
	i1 v389 = *(i1*)(intptr_t)v388;
	i1 v390 = (i1)+0;
	if (v389==v390) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v391 = (i8)(intptr_t)(ws+3560);
	i8 v392 = *(i8*)(intptr_t)v391;
	i8 v393 = v392+(+1);
	i8 v394 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v394 = v393;

	i8 v395 = (i8)(intptr_t)(ws+3568);
	i8 v396 = *(i8*)(intptr_t)v395;
	i8 v397 = v396+(+1);
	i8 v398 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v398 = v397;

	goto c02_0059;

c02_005a:;

endsub:;
	*p373 = *(i1*)(intptr_t)(ws+3576);
}

// ToLower workspace at ws+3312 length ws+2
void f27_ToLower(i1* p399 /* cc */, i1 p400 /* c */) {
	*(i1*)(intptr_t)(ws+3312) = p400; /* c */

	i8 v401 = (i8)(intptr_t)(ws+3312);
	i1 v402 = *(i1*)(intptr_t)v401;
	i1 v403 = (i1)+65;
	if (v402<v403) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v404 = (i1)+90;
	i8 v405 = (i8)(intptr_t)(ws+3312);
	i1 v406 = *(i1*)(intptr_t)v405;
	if (v404<v406) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v407 = (i8)(intptr_t)(ws+3312);
	i1 v408 = *(i1*)(intptr_t)v407;
	i1 v409 = v408|(+32);
	i8 v410 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v410 = v409;

	goto c02_0063;

c02_0069:;

	i8 v411 = (i8)(intptr_t)(ws+3312);
	i1 v412 = *(i1*)(intptr_t)v411;
	i8 v413 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v413 = v412;

c02_0063:;

endsub:;
	*p399 = *(i1*)(intptr_t)(ws+3313);
}

// StrLen workspace at ws+3584 length ws+25
void f29_StrLen(i8* p450 /* size */, i8 p451 /* s */) {
	*(i8*)(intptr_t)(ws+3584) = p451; /* s */

	i8 v452 = (i8)(intptr_t)(ws+3584);
	i8 v453 = *(i8*)(intptr_t)v452;
	i8 v454 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v454 = v453;

c02_0075:;

	i8 v455 = (i8)(intptr_t)(ws+3600);
	i8 v456 = *(i8*)(intptr_t)v455;
	i1 v457 = *(i1*)(intptr_t)v456;
	i8 v458 = (i8)(intptr_t)(ws+3608);
	*(i1*)(intptr_t)v458 = v457;

	i8 v459 = (i8)(intptr_t)(ws+3608);
	i1 v460 = *(i1*)(intptr_t)v459;
	i1 v461 = (i1)+0;
	if (v460==v461) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v462 = (i8)(intptr_t)(ws+3600);
	i8 v463 = *(i8*)(intptr_t)v462;
	i8 v464 = v463+(+1);
	i8 v465 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v465 = v464;

	goto c02_0075;

c02_0076:;

	i8 v466 = (i8)(intptr_t)(ws+3600);
	i8 v467 = *(i8*)(intptr_t)v466;
	i8 v468 = (i8)(intptr_t)(ws+3584);
	i8 v469 = *(i8*)(intptr_t)v468;
	i8 v470 = v467-v469;
	i8 v471 = (i8)(intptr_t)(ws+3592);
	*(i8*)(intptr_t)v471 = v470;

endsub:;
	*p450 = *(i8*)(intptr_t)(ws+3592);
}

// MemCopy workspace at ws+3576 length ws+24
void f31_MemCopy(i8 p493 /* dest */, i8 p494 /* size */, i8 p495 /* src */) {
	*(i8*)(intptr_t)(ws+3576) = p495; /* src */
	*(i8*)(intptr_t)(ws+3584) = p494; /* size */
	*(i8*)(intptr_t)(ws+3592) = p493; /* dest */

c02_0083:;

	i8 v496 = (i8)(intptr_t)(ws+3584);
	i8 v497 = *(i8*)(intptr_t)v496;
	i8 v498 = (i8)+0;
	if (v497==v498) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v499 = (i8)(intptr_t)(ws+3576);
	i8 v500 = *(i8*)(intptr_t)v499;
	i1 v501 = *(i1*)(intptr_t)v500;
	i8 v502 = (i8)(intptr_t)(ws+3592);
	i8 v503 = *(i8*)(intptr_t)v502;
	*(i1*)(intptr_t)v503 = v501;

	i8 v504 = (i8)(intptr_t)(ws+3592);
	i8 v505 = *(i8*)(intptr_t)v504;
	i8 v506 = v505+(+1);
	i8 v507 = (i8)(intptr_t)(ws+3592);
	*(i8*)(intptr_t)v507 = v506;

	i8 v508 = (i8)(intptr_t)(ws+3576);
	i8 v509 = *(i8*)(intptr_t)v508;
	i8 v510 = v509+(+1);
	i8 v511 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v511 = v510;

	i8 v512 = (i8)(intptr_t)(ws+3584);
	i8 v513 = *(i8*)(intptr_t)v512;
	i8 v514 = v513+(-1);
	i8 v515 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v515 = v514;

	goto c02_0083;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+3672 length ws+16
void f32_RawAlloc(i8* p516 /* block */, i8 p517 /* length */) {
	*(i8*)(intptr_t)(ws+3672) = p517; /* length */


	
*(i8*)(intptr_t)(ws+3680) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3672) 
); 



endsub:;
	*p516 = *(i8*)(intptr_t)(ws+3680);
}

// Free workspace at ws+3680 length ws+8
void f34_Free(i8 p534 /* block */) {
	*(i8*)(intptr_t)(ws+3680) = p534; /* block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3680) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3272 length ws+8
void f38_GetFreeMemory(i8* p537 /* i */) {

	i8 v538 = (i8)+0;
	i8 v539 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v539 = v538;

endsub:;
	*p537 = *(i8*)(intptr_t)(ws+3272);
}

// _fcb_init workspace at ws+3440 length ws+8
void f41__fcb_init(i8 p540 /* fcb */) {
	*(i8*)(intptr_t)(ws+3440) = p540; /* fcb */

	i4 v541 = (i4)+0;
	i8 v542 = (i8)(intptr_t)(ws+3440);
	i8 v543 = *(i8*)(intptr_t)v542;
	i8 v544 = v543+(+4);
	*(i4*)(intptr_t)v544 = v541;

	i2 v545 = (i2)+0;
	i8 v546 = (i8)(intptr_t)(ws+3440);
	i8 v547 = *(i8*)(intptr_t)v546;
	i8 v548 = v547+(+8);
	*(i2*)(intptr_t)v548 = v545;

	i2 v549 = (i2)+0;
	i8 v550 = (i8)(intptr_t)(ws+3440);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+10);
	*(i2*)(intptr_t)v552 = v549;

	i1 v553 = (i1)+0;
	i8 v554 = (i8)(intptr_t)(ws+3440);
	i8 v555 = *(i8*)(intptr_t)v554;
	i8 v556 = v555+(+524);
	*(i1*)(intptr_t)v556 = v553;

endsub:;
}

// _fcb_advance workspace at ws+3640 length ws+8
void f42__fcb_advance(i8 p557 /* fcb */) {
	*(i8*)(intptr_t)(ws+3640) = p557; /* fcb */

	i8 v558 = (i8)(intptr_t)(ws+3640);
	i8 v559 = *(i8*)(intptr_t)v558;
	i8 v560 = v559+(+10);
	i2 v561 = *(i2*)(intptr_t)v560;
	i2 v562 = v561+(+1);
	i8 v563 = (i8)(intptr_t)(ws+3640);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+10);
	*(i2*)(intptr_t)v565 = v562;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+3352 length ws+18
void f43__fcb_fillbuffer(i1* p566 /* b */, i8 p567 /* fcb */) {
	*(i8*)(intptr_t)(ws+3352) = p567; /* fcb */

	i8 v568 = (i8)(intptr_t)(ws+3352);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+4);
	i4 v571 = *(i4*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(ws+3352);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+10);
	i2 v575 = *(i2*)(intptr_t)v574;
	i4 v576 = v575;
	i4 v577 = v571+v576;
	i8 v578 = (i8)(intptr_t)(ws+3364);
	*(i4*)(intptr_t)v578 = v577;

	i8 v579 = (i8)(intptr_t)(ws+3352);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = (i8)(intptr_t)(ws+3364);
	i4 v582 = *(i4*)(intptr_t)v581;
	i2 v583 = (i2)+512;
	i8 v584 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v585;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v584)(&v585, v583, v582, v580);

	i8 v586 = (i8)(intptr_t)(ws+3368);
	*(i2*)(intptr_t)v586 = v585;

	i8 v587 = (i8)(intptr_t)(ws+3368);
	i2 v588 = *(i2*)(intptr_t)v587;
	i8 v589 = (i8)(intptr_t)(ws+3352);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = v590+(+8);
	*(i2*)(intptr_t)v591 = v588;

	i1 v592 = (i1)+0;
	i8 v593 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v593 = v592;

	i8 v594 = (i8)(intptr_t)(ws+3352);
	i8 v595 = *(i8*)(intptr_t)v594;
	i8 v596 = v595+(+524);
	i1 v597 = *(i1*)(intptr_t)v596;
	i1 v598 = v597&(+1);
	i1 v599 = (i1)+0;
	if (v598==v599) goto c02_0092; else goto c02_0091;

c02_0091:;

	goto endsub;

c02_0092:;

c02_008e:;

	i1 v600 = (i1)+2;
	i8 v601 = (i8)(intptr_t)(ws+3352);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i8 v604 = (i8)(intptr_t)(ws+3364);
	i4 v605 = *(i4*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+3352);
	i8 v607 = *(i8*)(intptr_t)v606;
	i8 v608 = v607+(+4);
	*(i4*)(intptr_t)v608 = v605;

	i2 v609 = (i2)+0;
	i8 v610 = (i8)(intptr_t)(ws+3352);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = v611+(+10);
	*(i2*)(intptr_t)v612 = v609;

	i8 v613 = (i8)(intptr_t)(ws+3352);
	i8 v614 = *(i8*)(intptr_t)v613;
	i8 v615 = v614+(+8);
	i2 v616 = *(i2*)(intptr_t)v615;
	i2 v617 = (i2)+0;
	if (v616==v617) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v618 = (i8)(intptr_t)(ws+3352);
	i8 v619 = *(i8*)(intptr_t)v618;
	i8 v620 = v619+(+12);
	i1 v621 = *(i1*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v622 = v621;

	i8 v623 = (i8)(intptr_t)(ws+3352);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v625)(v624);

c02_0097:;

c02_0093:;

endsub:;
	*p566 = *(i1*)(intptr_t)(ws+3360);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+3640 length ws+12
void f44_FCBFlush(i8 p626 /* fcb */) {
	*(i8*)(intptr_t)(ws+3640) = p626; /* fcb */

	i8 v627 = (i8)(intptr_t)(ws+3640);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+4);
	i4 v630 = *(i4*)(intptr_t)v629;
	i8 v631 = (i8)(intptr_t)(ws+3648);
	*(i4*)(intptr_t)v631 = v630;

	i8 v632 = (i8)(intptr_t)(ws+3640);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = v633+(+524);
	i1 v635 = *(i1*)(intptr_t)v634;
	i1 v636 = v635&(+4);
	i1 v637 = (i1)+0;
	if (v636==v637) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v638 = (i8)(intptr_t)(ws+3640);
	i8 v639 = *(i8*)(intptr_t)v638;
	i8 v640 = (i8)(intptr_t)(ws+3648);
	i4 v641 = *(i4*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+3640);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v646)(v645, v641, v639);

	i8 v647 = (i8)(intptr_t)(ws+3640);
	i8 v648 = *(i8*)(intptr_t)v647;
	i8 v649 = v648+(+524);
	i1 v650 = *(i1*)(intptr_t)v649;
	i1 v651 = v650&(+1);
	i1 v652 = (i1)+0;
	if (v651==v652) goto c02_00a1; else goto c02_00a0;

c02_00a0:;

	goto endsub;

c02_00a1:;

c02_009d:;

c02_009c:;

c02_0098:;

	i8 v653 = (i8)(intptr_t)(ws+3648);
	i4 v654 = *(i4*)(intptr_t)v653;
	i8 v655 = (i8)(intptr_t)(ws+3640);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+10);
	i2 v658 = *(i2*)(intptr_t)v657;
	i4 v659 = v658;
	i4 v660 = v654+v659;
	i8 v661 = (i8)(intptr_t)(ws+3640);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+4);
	*(i4*)(intptr_t)v663 = v660;

	i1 v664 = (i1)+0;
	i8 v665 = (i8)(intptr_t)(ws+3640);
	i8 v666 = *(i8*)(intptr_t)v665;
	i8 v667 = v666+(+524);
	*(i1*)(intptr_t)v667 = v664;

	i2 v668 = (i2)+0;
	i8 v669 = (i8)(intptr_t)(ws+3640);
	i8 v670 = *(i8*)(intptr_t)v669;
	i8 v671 = v670+(+10);
	*(i2*)(intptr_t)v671 = v668;

	i2 v672 = (i2)+0;
	i8 v673 = (i8)(intptr_t)(ws+3640);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+8);
	*(i2*)(intptr_t)v675 = v672;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+3624 length ws+9
void f45__fcb_flushbuffer(i1 p676 /* b */, i8 p677 /* fcb */) {
	*(i8*)(intptr_t)(ws+3624) = p677; /* fcb */
	*(i1*)(intptr_t)(ws+3632) = p676; /* b */

	i8 v678 = (i8)(intptr_t)(ws+3624);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

	i8 v681 = (i8)(intptr_t)(ws+3624);
	i8 v682 = *(i8*)(intptr_t)v681;
	i8 v683 = v682+(+524);
	i1 v684 = *(i1*)(intptr_t)v683;
	i1 v685 = v684&(+1);
	i1 v686 = (i1)+0;
	if (v685==v686) goto c02_00a6; else goto c02_00a5;

c02_00a5:;

	goto endsub;

c02_00a6:;

c02_00a2:;

	i1 v687 = (i1)+4;
	i8 v688 = (i8)(intptr_t)(ws+3624);
	i8 v689 = *(i8*)(intptr_t)v688;
	i8 v690 = v689+(+524);
	*(i1*)(intptr_t)v690 = v687;

	i8 v691 = (i8)(intptr_t)(ws+3632);
	i1 v692 = *(i1*)(intptr_t)v691;
	i8 v693 = (i8)(intptr_t)(ws+3624);
	i8 v694 = *(i8*)(intptr_t)v693;
	i8 v695 = v694+(+12);
	*(i1*)(intptr_t)v695 = v692;

	i8 v696 = (i8)(intptr_t)(ws+3624);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v698)(v697);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+3336 length ws+13
void f46_FCBGetChar(i1* p699 /* b */, i8 p700 /* fcb */) {
	*(i8*)(intptr_t)(ws+3336) = p700; /* fcb */

	i8 v701 = (i8)(intptr_t)(ws+3336);
	i8 v702 = *(i8*)(intptr_t)v701;
	i8 v703 = v702+(+524);
	i1 v704 = *(i1*)(intptr_t)v703;
	i1 v705 = v704&(+4);
	i1 v706 = (i1)+0;
	if (v705==v706) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v707 = (i8)(intptr_t)(ws+3336);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v709)(v708);

c02_00ab:;

c02_00a7:;

	i8 v710 = (i8)(intptr_t)(ws+3336);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+10);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = (i8)(intptr_t)(ws+3346);
	*(i2*)(intptr_t)v714 = v713;

	i8 v715 = (i8)(intptr_t)(ws+3346);
	i2 v716 = *(i2*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+3336);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = v718+(+8);
	i2 v720 = *(i2*)(intptr_t)v719;
	if (v716==v720) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v721 = (i8)(intptr_t)(ws+3336);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v724;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v723)(&v724, v722);

	i8 v725 = (i8)(intptr_t)(ws+3348);
	*(i1*)(intptr_t)v725 = v724;

	i8 v726 = (i8)(intptr_t)(ws+3348);
	i1 v727 = *(i1*)(intptr_t)v726;
	i8 v728 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v728 = v727;

	goto c02_00ac;

c02_00b0:;

	i8 v729 = (i8)(intptr_t)(ws+3336);
	i8 v730 = *(i8*)(intptr_t)v729;
	i8 v731 = v730+(+12);
	i8 v732 = (i8)(intptr_t)(ws+3346);
	i2 v733 = *(i2*)(intptr_t)v732;
	i8 v734 = v733;
	i8 v735 = v731+v734;
	i1 v736 = *(i1*)(intptr_t)v735;
	i8 v737 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v737 = v736;

	i8 v738 = (i8)(intptr_t)(ws+3336);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v740)(v739);

c02_00ac:;

endsub:;
	*p699 = *(i1*)(intptr_t)(ws+3344);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+3608 length ws+12
void f47_FCBPutChar(i1 p741 /* b */, i8 p742 /* fcb */) {
	*(i8*)(intptr_t)(ws+3608) = p742; /* fcb */
	*(i1*)(intptr_t)(ws+3616) = p741; /* b */

	i8 v743 = (i8)(intptr_t)(ws+3608);
	i8 v744 = *(i8*)(intptr_t)v743;
	i8 v745 = v744+(+524);
	i1 v746 = *(i1*)(intptr_t)v745;
	i1 v747 = v746&(+2);
	i1 v748 = (i1)+0;
	if (v747==v748) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v749 = (i8)(intptr_t)(ws+3608);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

c02_00b5:;

c02_00b1:;

	i8 v752 = (i8)(intptr_t)(ws+3608);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+10);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = (i8)(intptr_t)(ws+3618);
	*(i2*)(intptr_t)v756 = v755;

	i8 v757 = (i8)(intptr_t)(ws+3618);
	i2 v758 = *(i2*)(intptr_t)v757;
	i2 v759 = (i2)+512;
	if (v758==v759) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v760 = (i8)(intptr_t)(ws+3608);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = (i8)(intptr_t)(ws+3616);
	i1 v763 = *(i1*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v764)(v763, v761);

	goto c02_00b6;

c02_00ba:;

	i8 v765 = (i8)(intptr_t)(ws+3616);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+3608);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+3618);
	i2 v771 = *(i2*)(intptr_t)v770;
	i8 v772 = v771;
	i8 v773 = v769+v772;
	*(i1*)(intptr_t)v773 = v766;

	i8 v774 = (i8)(intptr_t)(ws+3608);
	i8 v775 = *(i8*)(intptr_t)v774;
	i8 v776 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v776)(v775);

c02_00b6:;

	i8 v777 = (i8)(intptr_t)(ws+3608);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+524);
	i1 v780 = *(i1*)(intptr_t)v779;
	i1 v781 = v780|(+4);
	i8 v782 = (i8)(intptr_t)(ws+3608);
	i8 v783 = *(i8*)(intptr_t)v782;
	i8 v784 = v783+(+524);
	*(i1*)(intptr_t)v784 = v781;

endsub:;
}

// FCBPos workspace at ws+3384 length ws+12
void f48_FCBPos(i4* p785 /* pos */, i8 p786 /* fcb */) {
	*(i8*)(intptr_t)(ws+3384) = p786; /* fcb */

	i8 v787 = (i8)(intptr_t)(ws+3384);
	i8 v788 = *(i8*)(intptr_t)v787;
	i8 v789 = v788+(+4);
	i4 v790 = *(i4*)(intptr_t)v789;
	i8 v791 = (i8)(intptr_t)(ws+3384);
	i8 v792 = *(i8*)(intptr_t)v791;
	i8 v793 = v792+(+10);
	i2 v794 = *(i2*)(intptr_t)v793;
	i4 v795 = v794;
	i4 v796 = v790+v795;
	i8 v797 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v797 = v796;

endsub:;
	*p785 = *(i4*)(intptr_t)(ws+3392);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBSeek workspace at ws+3384 length ws+16
void f50_FCBSeek(i4 p810 /* pos */, i8 p811 /* fcb */) {
	*(i8*)(intptr_t)(ws+3384) = p811; /* fcb */
	*(i4*)(intptr_t)(ws+3392) = p810; /* pos */

	i8 v812 = (i8)(intptr_t)(ws+3392);
	i4 v813 = *(i4*)(intptr_t)v812;
	i8 v814 = (i8)(intptr_t)(ws+3384);
	i8 v815 = *(i8*)(intptr_t)v814;
	i8 v816 = v815+(+4);
	i4 v817 = *(i4*)(intptr_t)v816;
	i4 v818 = v813-v817;
	i8 v819 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v819 = v818;

	i8 v820 = (i8)(intptr_t)(ws+3384);
	i8 v821 = *(i8*)(intptr_t)v820;
	i8 v822 = v821+(+524);
	i1 v823 = *(i1*)(intptr_t)v822;
	i1 v824 = v823&(+2);
	i1 v825 = (i1)+0;
	if (v824==v825) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v826 = (i8)(intptr_t)(ws+3396);
	i4 v827 = *(i4*)(intptr_t)v826;
	i8 v828 = (i8)(intptr_t)(ws+3384);
	i8 v829 = *(i8*)(intptr_t)v828;
	i8 v830 = v829+(+8);
	i2 v831 = *(i2*)(intptr_t)v830;
	i4 v832 = v831;
	if (v827<v832) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v833 = (i8)(intptr_t)(ws+3396);
	i4 v834 = *(i4*)(intptr_t)v833;
	i2 v835 = v834;
	i8 v836 = (i8)(intptr_t)(ws+3384);
	i8 v837 = *(i8*)(intptr_t)v836;
	i8 v838 = v837+(+10);
	*(i2*)(intptr_t)v838 = v835;

	goto endsub;

c02_00c9:;

c02_00c5:;

	goto c02_00c0;

c02_00c4:;

	i8 v839 = (i8)(intptr_t)(ws+3384);
	i8 v840 = *(i8*)(intptr_t)v839;
	i8 v841 = v840+(+524);
	i1 v842 = *(i1*)(intptr_t)v841;
	i1 v843 = v842&(+4);
	i1 v844 = (i1)+0;
	if (v843==v844) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v845 = (i8)(intptr_t)(ws+3384);
	i8 v846 = *(i8*)(intptr_t)v845;
	i8 v847 = v846+(+10);
	i2 v848 = *(i2*)(intptr_t)v847;
	i4 v849 = v848;
	i8 v850 = (i8)(intptr_t)(ws+3396);
	i4 v851 = *(i4*)(intptr_t)v850;
	if (v849<v851) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v852 = (i8)(intptr_t)(ws+3396);
	i4 v853 = *(i4*)(intptr_t)v852;
	i2 v854 = v853;
	i8 v855 = (i8)(intptr_t)(ws+3384);
	i8 v856 = *(i8*)(intptr_t)v855;
	i8 v857 = v856+(+10);
	*(i2*)(intptr_t)v857 = v854;

	goto endsub;

c02_00d2:;

c02_00ce:;

c02_00cd:;

c02_00c0:;

	i8 v858 = (i8)(intptr_t)(ws+3384);
	i8 v859 = *(i8*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v860)(v859);

	i8 v861 = (i8)(intptr_t)(ws+3392);
	i4 v862 = *(i4*)(intptr_t)v861;
	i8 v863 = (i8)(intptr_t)(ws+3384);
	i8 v864 = *(i8*)(intptr_t)v863;
	i8 v865 = v864+(+4);
	*(i4*)(intptr_t)v865 = v862;

endsub:;
}

// FCBRawRead workspace at ws+3376 length ws+36
void f39_FCBRawRead(i2* p866 /* amount */, i2 p867 /* len */, i4 p868 /* pos */, i8 p869 /* fcb */) {
	*(i8*)(intptr_t)(ws+3376) = p869; /* fcb */
	*(i4*)(intptr_t)(ws+3384) = p868; /* pos */
	*(i2*)(intptr_t)(ws+3388) = p867; /* len */

	i8 v870 = (i8)(intptr_t)(ws+3376);
	i8 v871 = *(i8*)(intptr_t)v870;
	i4 v872 = *(i4*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v873 = v872;

	i8 v874 = (i8)(intptr_t)(ws+3376);
	i8 v875 = *(i8*)(intptr_t)v874;
	i8 v876 = v875+(+12);
	i8 v877 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v877 = v876;


	
*(i4*)(intptr_t)(ws+3408) 
=pread( 
*(i4*)(intptr_t)(ws+3392) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3400) 
,  
*(i2*)(intptr_t)(ws+3388) 
,  
*(i4*)(intptr_t)(ws+3384) 
); 



	i8 v878 = (i8)(intptr_t)(ws+3408);
	i4 v879 = *(i4*)(intptr_t)v878;
	i4 v880 = (i4)-1;
	if (v879==v880) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v881 = (i2)+0;
	i8 v882 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v882 = v881;

	i8 v883 = (i8)(intptr_t)(ws+3376);
	i8 v884 = *(i8*)(intptr_t)v883;
	i8 v885 = v884+(+524);
	i1 v886 = *(i1*)(intptr_t)v885;
	i1 v887 = v886|(+1);
	i8 v888 = (i8)(intptr_t)(ws+3376);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	*(i1*)(intptr_t)v890 = v887;

	goto c02_00d3;

c02_00d7:;

	i8 v891 = (i8)(intptr_t)(ws+3408);
	i4 v892 = *(i4*)(intptr_t)v891;
	i2 v893 = (s2)(s4)v892;
	i8 v894 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v894 = v893;

c02_00d3:;

endsub:;
	*p866 = *(i2*)(intptr_t)(ws+3390);
}

// FCBRawWrite workspace at ws+3656 length ws+36
void f40_FCBRawWrite(i2 p895 /* len */, i4 p896 /* pos */, i8 p897 /* fcb */) {
	*(i8*)(intptr_t)(ws+3656) = p897; /* fcb */
	*(i4*)(intptr_t)(ws+3664) = p896; /* pos */
	*(i2*)(intptr_t)(ws+3668) = p895; /* len */

	i8 v898 = (i8)(intptr_t)(ws+3656);
	i8 v899 = *(i8*)(intptr_t)v898;
	i4 v900 = *(i4*)(intptr_t)v899;
	i8 v901 = (i8)(intptr_t)(ws+3672);
	*(i4*)(intptr_t)v901 = v900;

	i8 v902 = (i8)(intptr_t)(ws+3656);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+12);
	i8 v905 = (i8)(intptr_t)(ws+3680);
	*(i8*)(intptr_t)v905 = v904;


	
*(i4*)(intptr_t)(ws+3688) 
=pwrite( 
*(i4*)(intptr_t)(ws+3672) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3680) 
,  
*(i2*)(intptr_t)(ws+3668) 
,  
*(i4*)(intptr_t)(ws+3664) 
); 



	i8 v906 = (i8)(intptr_t)(ws+3688);
	i4 v907 = *(i4*)(intptr_t)v906;
	i4 v908 = (i4)-1;
	if (v907==v908) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v909 = (i8)(intptr_t)(ws+3656);
	i8 v910 = *(i8*)(intptr_t)v909;
	i8 v911 = v910+(+524);
	i1 v912 = *(i1*)(intptr_t)v911;
	i1 v913 = v912|(+1);
	i8 v914 = (i8)(intptr_t)(ws+3656);
	i8 v915 = *(i8*)(intptr_t)v914;
	i8 v916 = v915+(+524);
	*(i1*)(intptr_t)v916 = v913;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+3408 length ws+28
void f51_fcb_i_open(i1* p917 /* errno */, i4 p918 /* flags */, i8 p919 /* filename */, i8 p920 /* fcb */) {
	*(i8*)(intptr_t)(ws+3408) = p920; /* fcb */
	*(i8*)(intptr_t)(ws+3416) = p919; /* filename */
	*(i4*)(intptr_t)(ws+3424) = p918; /* flags */

	i8 v921 = (i8)(intptr_t)(ws+3408);
	i8 v922 = *(i8*)(intptr_t)v921;
	i8 v923 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v923)(v922);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3432) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3416) 
,  
*(i4*)(intptr_t)(ws+3424) 
,  
(+438)
); 



	i8 v924 = (i8)(intptr_t)(ws+3432);
	i4 v925 = *(i4*)(intptr_t)v924;
	i8 v926 = (i8)(intptr_t)(ws+3408);
	i8 v927 = *(i8*)(intptr_t)v926;
	*(i4*)(intptr_t)v927 = v925;

	i8 v928 = (i8)(intptr_t)(ws+3432);
	i4 v929 = *(i4*)(intptr_t)v928;
	i4 v930 = (i4)+0;
	if ((s4)v929<(s4)v930) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+3428) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v931 = (i1)+0;
	i8 v932 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v932 = v931;

c02_00dd:;

endsub:;
	*p917 = *(i1*)(intptr_t)(ws+3428);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+3384 length ws+18
void f52_FCBOpenIn(i1* p933 /* errno */, i8 p934 /* filename */, i8 p935 /* fcb */) {
	*(i8*)(intptr_t)(ws+3384) = p935; /* fcb */
	*(i8*)(intptr_t)(ws+3392) = p934; /* filename */

	i8 v936 = (i8)(intptr_t)(ws+3384);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = (i8)(intptr_t)(ws+3392);
	i8 v939 = *(i8*)(intptr_t)v938;
	i4 v940 = (i4)+0;
	i8 v941 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v942;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v941)(&v942, v940, v939, v937);

	i8 v943 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v943 = v942;

	i8 v944 = (i8)(intptr_t)(ws+3401);
	i1 v945 = *(i1*)(intptr_t)v944;
	i8 v946 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v946 = v945;

endsub:;
	*p933 = *(i1*)(intptr_t)(ws+3400);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+3280 length ws+18
void f54_FCBOpenOut(i1* p961 /* errno */, i8 p962 /* filename */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p963; /* fcb */
	*(i8*)(intptr_t)(ws+3288) = p962; /* filename */

	i8 v964 = (i8)(intptr_t)(ws+3280);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = (i8)(intptr_t)(ws+3288);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = (i4)+578;
	i8 v969 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v970;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v969)(&v970, v968, v967, v965);

	i8 v971 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+3297);
	i1 v973 = *(i1*)(intptr_t)v972;
	i8 v974 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v974 = v973;

endsub:;
	*p961 = *(i1*)(intptr_t)(ws+3296);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+3384 length ws+16
void f55_FCBClose(i1* p975 /* errno */, i8 p976 /* fcb */) {
	*(i8*)(intptr_t)(ws+3384) = p976; /* fcb */

	i8 v977 = (i8)(intptr_t)(ws+3384);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v979)(v978);

	i8 v980 = (i8)(intptr_t)(ws+3384);
	i8 v981 = *(i8*)(intptr_t)v980;
	i4 v982 = *(i4*)(intptr_t)v981;
	i8 v983 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v983 = v982;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+3396) 
); 


	
*(i1*)(intptr_t)(ws+3392) 
 = errno; 



endsub:;
	*p975 = *(i1*)(intptr_t)(ws+3392);
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupBraced workspace at ws+3528 length ws+48
void f70_StrDupBraced(i8* p1066 /* news */, i8 p1067 /* s */) {
	*(i8*)(intptr_t)(ws+3528) = p1067; /* s */

	i8 v1068 = (i8)(intptr_t)(ws+3528);
	i8 v1069 = *(i8*)(intptr_t)v1068;
	i8 v1070 = (i8)(intptr_t)(f29_StrLen);
	i8 v1071;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1070)(&v1071, v1069);

	i8 v1072 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v1072 = v1071;

	i8 v1073 = (i8)(intptr_t)(ws+3544);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v1075 = v1074;

	i8 v1076 = (i8)(intptr_t)(ws+3552);
	i8 v1077 = *(i8*)(intptr_t)v1076;
	i8 v1078 = v1077+(+3);
	i8 v1079 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1080;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1079)(&v1080, v1078);

	i8 v1081 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v1081 = v1080;

	i8 v1082 = (i8)(intptr_t)(ws+3560);
	i8 v1083 = *(i8*)(intptr_t)v1082;
	i8 v1084 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v1084 = v1083;

	i8 v1085 = (i8)(intptr_t)(ws+3536);
	i8 v1086 = *(i8*)(intptr_t)v1085;
	i8 v1087 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1087 = v1086;

	i1 v1088 = (i1)+91;
	i8 v1089 = (i8)(intptr_t)(ws+3568);
	i8 v1090 = *(i8*)(intptr_t)v1089;
	*(i1*)(intptr_t)v1090 = v1088;

	i8 v1091 = (i8)(intptr_t)(ws+3568);
	i8 v1092 = *(i8*)(intptr_t)v1091;
	i8 v1093 = v1092+(+1);
	i8 v1094 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1094 = v1093;

	i8 v1095 = (i8)(intptr_t)(ws+3528);
	i8 v1096 = *(i8*)(intptr_t)v1095;
	i8 v1097 = (i8)(intptr_t)(ws+3552);
	i8 v1098 = *(i8*)(intptr_t)v1097;
	i8 v1099 = (i8)(intptr_t)(ws+3568);
	i8 v1100 = *(i8*)(intptr_t)v1099;
	i8 v1101 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1101)(v1100, v1098, v1096);

	i8 v1102 = (i8)(intptr_t)(ws+3568);
	i8 v1103 = *(i8*)(intptr_t)v1102;
	i8 v1104 = (i8)(intptr_t)(ws+3552);
	i8 v1105 = *(i8*)(intptr_t)v1104;
	i8 v1106 = v1103+v1105;
	i8 v1107 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1107 = v1106;

	i1 v1108 = (i1)+93;
	i8 v1109 = (i8)(intptr_t)(ws+3568);
	i8 v1110 = *(i8*)(intptr_t)v1109;
	*(i1*)(intptr_t)v1110 = v1108;

	i8 v1111 = (i8)(intptr_t)(ws+3568);
	i8 v1112 = *(i8*)(intptr_t)v1111;
	i8 v1113 = v1112+(+1);
	i8 v1114 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1114 = v1113;

	i1 v1115 = (i1)+0;
	i8 v1116 = (i8)(intptr_t)(ws+3568);
	i8 v1117 = *(i8*)(intptr_t)v1116;
	*(i1*)(intptr_t)v1117 = v1115;

endsub:;
	*p1066 = *(i8*)(intptr_t)(ws+3536);
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupArrayed workspace at ws+3448 length ws+56
void f71_StrDupArrayed(i8* p1118 /* news */, i2 p1119 /* i */, i8 p1120 /* s */) {
	*(i8*)(intptr_t)(ws+3448) = p1120; /* s */
	*(i2*)(intptr_t)(ws+3456) = p1119; /* i */

	i8 v1121 = (i8)(intptr_t)(ws+3448);
	i8 v1122 = *(i8*)(intptr_t)v1121;
	i8 v1123 = (i8)(intptr_t)(f29_StrLen);
	i8 v1124;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1123)(&v1124, v1122);

	i8 v1125 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v1125 = v1124;

	i8 v1126 = (i8)(intptr_t)(ws+3472);
	i8 v1127 = *(i8*)(intptr_t)v1126;
	i8 v1128 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v1128 = v1127;

	i8 v1129 = (i8)(intptr_t)(ws+3480);
	i8 v1130 = *(i8*)(intptr_t)v1129;
	i8 v1131 = v1130+(+3);
	i8 v1132 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1133;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1132)(&v1133, v1131);

	i8 v1134 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v1134 = v1133;

	i8 v1135 = (i8)(intptr_t)(ws+3488);
	i8 v1136 = *(i8*)(intptr_t)v1135;
	i8 v1137 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1137 = v1136;

	i8 v1138 = (i8)(intptr_t)(ws+3464);
	i8 v1139 = *(i8*)(intptr_t)v1138;
	i8 v1140 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1140 = v1139;

	i8 v1141 = (i8)(intptr_t)(ws+3448);
	i8 v1142 = *(i8*)(intptr_t)v1141;
	i8 v1143 = (i8)(intptr_t)(ws+3480);
	i8 v1144 = *(i8*)(intptr_t)v1143;
	i8 v1145 = (i8)(intptr_t)(ws+3496);
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1147)(v1146, v1144, v1142);

	i8 v1148 = (i8)(intptr_t)(ws+3496);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	i8 v1150 = (i8)(intptr_t)(ws+3480);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = v1149+v1151;
	i8 v1153 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1153 = v1152;

	i1 v1154 = (i1)+91;
	i8 v1155 = (i8)(intptr_t)(ws+3496);
	i8 v1156 = *(i8*)(intptr_t)v1155;
	*(i1*)(intptr_t)v1156 = v1154;

	i8 v1157 = (i8)(intptr_t)(ws+3496);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = v1158+(+1);
	i8 v1160 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1160 = v1159;

	i1 v1161 = (i1)+93;
	i8 v1162 = (i8)(intptr_t)(ws+3496);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	*(i1*)(intptr_t)v1163 = v1161;

	i8 v1164 = (i8)(intptr_t)(ws+3496);
	i8 v1165 = *(i8*)(intptr_t)v1164;
	i8 v1166 = v1165+(+1);
	i8 v1167 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1167 = v1166;

	i1 v1168 = (i1)+0;
	i8 v1169 = (i8)(intptr_t)(ws+3496);
	i8 v1170 = *(i8*)(intptr_t)v1169;
	*(i1*)(intptr_t)v1170 = v1168;

endsub:;
	*p1118 = *(i8*)(intptr_t)(ws+3464);
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// InternalStrDup workspace at ws+3464 length ws+40
void f72_InternalStrDup(i8* p1171 /* news */, i8 p1172 /* s */) {
	*(i8*)(intptr_t)(ws+3464) = p1172; /* s */

	i8 v1173 = (i8)(intptr_t)(ws+3464);
	i8 v1174 = *(i8*)(intptr_t)v1173;
	i8 v1175 = (i8)(intptr_t)(f29_StrLen);
	i8 v1176;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1175)(&v1176, v1174);

	i8 v1177 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v1177 = v1176;

	i8 v1178 = (i8)(intptr_t)(ws+3480);
	i8 v1179 = *(i8*)(intptr_t)v1178;
	i8 v1180 = v1179+(+1);
	i8 v1181 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v1181 = v1180;

	i8 v1182 = (i8)(intptr_t)(ws+3488);
	i8 v1183 = *(i8*)(intptr_t)v1182;
	i8 v1184 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1185;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1184)(&v1185, v1183);

	i8 v1186 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v1186 = v1185;

	i8 v1187 = (i8)(intptr_t)(ws+3496);
	i8 v1188 = *(i8*)(intptr_t)v1187;
	i8 v1189 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v1189 = v1188;

	i8 v1190 = (i8)(intptr_t)(ws+3464);
	i8 v1191 = *(i8*)(intptr_t)v1190;
	i8 v1192 = (i8)(intptr_t)(ws+3488);
	i8 v1193 = *(i8*)(intptr_t)v1192;
	i8 v1194 = (i8)(intptr_t)(ws+3472);
	i8 v1195 = *(i8*)(intptr_t)v1194;
	i8 v1196 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1196)(v1195, v1193, v1191);

endsub:;
	*p1171 = *(i8*)(intptr_t)(ws+3472);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewSymbol workspace at ws+3568 length ws+16
void f64_AllocNewSymbol(i8* p1199 /* symbol */) {

	i8 v1200 = (i8)(intptr_t)(ws+232);
	i8 v1201 = *(i8*)(intptr_t)v1200;
	i8 v1202 = (i8)+0;
	if (v1201==v1202) goto c02_00f9; else goto c02_00f8;

c02_00f8:;

	i8 v1203 = (i8)(intptr_t)(ws+232);
	i8 v1204 = *(i8*)(intptr_t)v1203;
	i8 v1205 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1205 = v1204;

	i8 v1206 = (i8)(intptr_t)(ws+232);
	i8 v1207 = *(i8*)(intptr_t)v1206;
	i8 v1208 = v1207+(+24);
	i8 v1209 = *(i8*)(intptr_t)v1208;
	i8 v1210 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1210 = v1209;

	i8 v1211 = (i8)(intptr_t)(ws+3568);
	i8 v1212 = *(i8*)(intptr_t)v1211;
	i1 v1213 = (i1)+0;
	i8 v1214 = (i8)+33;
	i8 v1215 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1215)(v1214, v1213, v1212);

	goto c02_00f5;

c02_00f9:;

	i8 v1216 = (i8)+33;
	i8 v1217 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1218;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1217)(&v1218, v1216);

	i8 v1219 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v1219 = v1218;

	i8 v1220 = (i8)(intptr_t)(ws+3576);
	i8 v1221 = *(i8*)(intptr_t)v1220;
	i8 v1222 = (i8)(intptr_t)(ws+3568);
	*(i8*)(intptr_t)v1222 = v1221;

c02_00f5:;

endsub:;
	*p1199 = *(i8*)(intptr_t)(ws+3568);
}

// FreeSymbol workspace at ws+3464 length ws+8
void f65_FreeSymbol(i8 p1223 /* symbol */) {
	*(i8*)(intptr_t)(ws+3464) = p1223; /* symbol */

	i8 v1224 = (i8)(intptr_t)(ws+232);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	i8 v1226 = (i8)(intptr_t)(ws+3464);
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = v1227+(+24);
	*(i8*)(intptr_t)v1228 = v1225;

	i8 v1229 = (i8)(intptr_t)(ws+3464);
	i8 v1230 = *(i8*)(intptr_t)v1229;
	i8 v1231 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1231 = v1230;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewType workspace at ws+3528 length ws+16
void f66_AllocNewType(i8* p1234 /* type */) {

	i8 v1235 = (i8)(intptr_t)(ws+240);
	i8 v1236 = *(i8*)(intptr_t)v1235;
	i8 v1237 = (i8)+0;
	if (v1236==v1237) goto c02_00fe; else goto c02_00fd;

c02_00fd:;

	i8 v1238 = (i8)(intptr_t)(ws+240);
	i8 v1239 = *(i8*)(intptr_t)v1238;
	i8 v1240 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v1240 = v1239;

	i8 v1241 = (i8)(intptr_t)(ws+240);
	i8 v1242 = *(i8*)(intptr_t)v1241;
	i8 v1243 = v1242+(+40);
	i8 v1244 = *(i8*)(intptr_t)v1243;
	i8 v1245 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1245 = v1244;

	i8 v1246 = (i8)(intptr_t)(ws+3528);
	i8 v1247 = *(i8*)(intptr_t)v1246;
	i1 v1248 = (i1)+0;
	i8 v1249 = (i8)+54;
	i8 v1250 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1250)(v1249, v1248, v1247);

	goto c02_00fa;

c02_00fe:;

	i8 v1251 = (i8)+54;
	i8 v1252 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1253;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1252)(&v1253, v1251);

	i8 v1254 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v1254 = v1253;

	i8 v1255 = (i8)(intptr_t)(ws+3536);
	i8 v1256 = *(i8*)(intptr_t)v1255;
	i8 v1257 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v1257 = v1256;

c02_00fa:;

endsub:;
	*p1234 = *(i8*)(intptr_t)(ws+3528);
}

// FreeType workspace at ws+3464 length ws+8
void f67_FreeType(i8 p1258 /* type */) {
	*(i8*)(intptr_t)(ws+3464) = p1258; /* type */

	i8 v1259 = (i8)(intptr_t)(ws+240);
	i8 v1260 = *(i8*)(intptr_t)v1259;
	i8 v1261 = (i8)(intptr_t)(ws+3464);
	i8 v1262 = *(i8*)(intptr_t)v1261;
	i8 v1263 = v1262+(+40);
	*(i8*)(intptr_t)v1263 = v1260;

	i8 v1264 = (i8)(intptr_t)(ws+3464);
	i8 v1265 = *(i8*)(intptr_t)v1264;
	i8 v1266 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1266 = v1265;

endsub:;
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f73_PurgeAllFreeNodes(void);
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0001[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+3640 length ws+32
void f69_InternalAlloc(i8* p1267 /* block */, i8 p1268 /* length */) {
	*(i8*)(intptr_t)(ws+3640) = p1268; /* length */

	i8 v1269 = (i8)(intptr_t)(ws+3640);
	i8 v1270 = *(i8*)(intptr_t)v1269;
	i8 v1271 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1272;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1271)(&v1272, v1270);

	i8 v1273 = (i8)(intptr_t)(ws+3656);
	*(i8*)(intptr_t)v1273 = v1272;

	i8 v1274 = (i8)(intptr_t)(ws+3656);
	i8 v1275 = *(i8*)(intptr_t)v1274;
	i8 v1276 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1276 = v1275;

	i8 v1277 = (i8)(intptr_t)(ws+3648);
	i8 v1278 = *(i8*)(intptr_t)v1277;
	i8 v1279 = (i8)+0;
	if (v1278==v1279) goto c02_0102; else goto c02_0103;

c02_0102:;

c02_0104:;

	i8 v1280 = (i8)(intptr_t)(ws+232);
	i8 v1281 = *(i8*)(intptr_t)v1280;
	i8 v1282 = (i8)+0;
	if (v1281==v1282) goto c02_0109; else goto c02_0108;

c02_0108:;

	i8 v1283 = (i8)(intptr_t)(ws+232);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1285 = v1284;

	i8 v1286 = (i8)(intptr_t)(ws+232);
	i8 v1287 = *(i8*)(intptr_t)v1286;
	i8 v1288 = v1287+(+24);
	i8 v1289 = *(i8*)(intptr_t)v1288;
	i8 v1290 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1290 = v1289;

	i8 v1291 = (i8)(intptr_t)(ws+3648);
	i8 v1292 = *(i8*)(intptr_t)v1291;
	i8 v1293 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1293)(v1292);

	goto c02_0104;

c02_0109:;

c02_010a:;

	i8 v1294 = (i8)(intptr_t)(ws+240);
	i8 v1295 = *(i8*)(intptr_t)v1294;
	i8 v1296 = (i8)+0;
	if (v1295==v1296) goto c02_010f; else goto c02_010e;

c02_010e:;

	i8 v1297 = (i8)(intptr_t)(ws+240);
	i8 v1298 = *(i8*)(intptr_t)v1297;
	i8 v1299 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1299 = v1298;

	i8 v1300 = (i8)(intptr_t)(ws+240);
	i8 v1301 = *(i8*)(intptr_t)v1300;
	i8 v1302 = v1301+(+40);
	i8 v1303 = *(i8*)(intptr_t)v1302;
	i8 v1304 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1304 = v1303;

	i8 v1305 = (i8)(intptr_t)(ws+3648);
	i8 v1306 = *(i8*)(intptr_t)v1305;
	i8 v1307 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1307)(v1306);

	goto c02_010a;

c02_010f:;

	i8 v1308 = (i8)(intptr_t)(f73_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1308)();

	i8 v1309 = (i8)(intptr_t)(ws+3640);
	i8 v1310 = *(i8*)(intptr_t)v1309;
	i8 v1311 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v1312;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1311)(&v1312, v1310);

	i8 v1313 = (i8)(intptr_t)(ws+3664);
	*(i8*)(intptr_t)v1313 = v1312;

	i8 v1314 = (i8)(intptr_t)(ws+3664);
	i8 v1315 = *(i8*)(intptr_t)v1314;
	i8 v1316 = (i8)(intptr_t)(ws+3648);
	*(i8*)(intptr_t)v1316 = v1315;

	i8 v1317 = (i8)(intptr_t)(ws+3648);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	i8 v1319 = (i8)+0;
	if (v1318==v1319) goto c02_0113; else goto c02_0114;

c02_0113:;

	i8 v1320 = (i8)(intptr_t)c02_s0001;
	i8 v1321 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1321)(v1320);

	i8 v1322 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1322)();

c02_0114:;

c02_0110:;

c02_0103:;

c02_00ff:;

endsub:;
	*p1267 = *(i8*)(intptr_t)(ws+3648);
}
static data f3___main_s0115[] = {








	{ .i1 = { 0x00,0x00,0x00,0x00,0x92,0xbb,0x00,0x90}},








	{ .i1 = { 0x84,0x98,0x93,0xad,0x8e,0x88,0x97,0x21}},








	{ .i1 = { 0x21,0x21,0x21,0x21,0x21,0x21,0x21,0x21}},








	{ .i1 = { 0x21,0x86,0x96,0x00,0x00,0x00,0x00,0x10}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x91,0x00,0x85,0xb1,0x30,0x00}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},








	{ .i1 = { 0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x30}},







	{ .i1 = { 0x30,0x30,0x9f,0xb0,0xa0,0x9b}},
};
const i1 c02_s0002[] = { 0x40,0x61,0x6c,0x69,0x61,0x73,0 };
const i1 c02_s0003[] = { 0x40,0x61,0x73,0x6d,0 };
const i1 c02_s0004[] = { 0x40,0x61,0x74,0 };
const i1 c02_s0005[] = { 0x40,0x62,0x79,0x74,0x65,0x73,0x6f,0x66,0 };
const i1 c02_s0006[] = { 0x40,0x64,0x65,0x63,0x6c,0 };
const i1 c02_s0007[] = { 0x40,0x65,0x78,0x74,0x65,0x72,0x6e,0 };
const i1 c02_s0008[] = { 0x40,0x69,0x6e,0x64,0x65,0x78,0x6f,0x66,0 };
const i1 c02_s0009[] = { 0x40,0x69,0x6d,0x70,0x6c,0 };
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
const i1 c02_s001b[] = { 0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
const i1 c02_s001c[] = { 0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s001d[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c02_s001e[] = { 0x6e,0x6f,0x74,0 };
const i1 c02_s001f[] = { 0x6f,0x72,0 };
const i1 c02_s0020[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s0021[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c02_s0022[] = { 0x73,0x75,0x62,0 };
const i1 c02_s0023[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c02_s0024[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c02_s0025[] = { 0x76,0x61,0x72,0 };
const i1 c02_s0026[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c02_s0027[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
static data f3___main_s0116[] = {

	{ .ptr = (void*)c02_s0002 },

	{ .ptr = (void*)c02_s0003 },

	{ .ptr = (void*)c02_s0004 },

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

};
static data f3___main_s0117[] = {








	{ .i1 = { 0x43,0x01,0x23,0x24,0x2b,0x0b,0x3e,0x2a}},








	{ .i1 = { 0x28,0x3c,0x3d,0x2e,0x3a,0x03,0x40,0x07}},








	{ .i1 = { 0x3f,0x09,0x25,0x0a,0x0b,0x0c,0x41,0xff}},








	{ .i1 = { 0x26,0x2c,0x44,0x0d,0x0f,0x2f,0x14,0x15}},







	{ .i1 = { 0x19,0x1a,0x27,0x1c,0x42,0x1d}},
};
const i1 c02_s0028[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0029[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s002a[] = { 0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s002b[] = { 0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);

// StartError workspace at ws+3656 length ws+0
void f74_StartError(void) {

	i8 v1331 = (i8)(intptr_t)c02_s0028;
	i8 v1332 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1332)(v1331);

	i8 v1333 = (i8)(intptr_t)(ws+256);
	i8 v1334 = *(i8*)(intptr_t)v1333;
	i8 v1335 = (i8)+0;
	if (v1334==v1335) goto c02_011b; else goto c02_011c;

c02_011b:;

	i8 v1336 = (i8)(intptr_t)c02_s0029;
	i8 v1337 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1337)(v1336);

	goto c02_0118;

c02_011c:;

	i8 v1338 = (i8)(intptr_t)(ws+256);
	i8 v1339 = *(i8*)(intptr_t)v1338;
	i8 v1340 = v1339+(+8);
	i8 v1341 = *(i8*)(intptr_t)v1340;
	i8 v1342 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1342)(v1341);

	i8 v1343 = (i8)(intptr_t)c02_s002a;
	i8 v1344 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1344)(v1343);

	i8 v1345 = (i8)(intptr_t)(ws+256);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = v1346+(+16);
	i2 v1348 = *(i2*)(intptr_t)v1347;
	i8 v1349 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v1349)(v1348);

c02_0118:;

	i8 v1350 = (i8)(intptr_t)c02_s002b;
	i8 v1351 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1351)(v1350);

endsub:;
}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+3656 length ws+0
void f75_EndError(void) {

	i8 v1352 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1352)();

	i8 v1353 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1353)();

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// SimpleError workspace at ws+3648 length ws+8
void f76_SimpleError(i8 p1354 /* message */) {
	*(i8*)(intptr_t)(ws+3648) = p1354; /* message */

	i8 v1355 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1355)();

	i8 v1356 = (i8)(intptr_t)(ws+3648);
	i8 v1357 = *(i8*)(intptr_t)v1356;
	i8 v1358 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1358)(v1357);

	i8 v1359 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1359)();

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// LexerAddIncludePath workspace at ws+3280 length ws+24
void f77_LexerAddIncludePath(i8 p1360 /* path */) {
	*(i8*)(intptr_t)(ws+3280) = p1360; /* path */

	i8 v1361 = (i8)+16;
	i8 v1362 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1363;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1362)(&v1363, v1361);

	i8 v1364 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v1364 = v1363;

	i8 v1365 = (i8)(intptr_t)(ws+3288);
	i8 v1366 = *(i8*)(intptr_t)v1365;
	i8 v1367 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1367 = v1366;

	i8 v1368 = (i8)(intptr_t)(ws+248);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = (i8)(intptr_t)(ws+3296);
	i8 v1371 = *(i8*)(intptr_t)v1370;
	*(i8*)(intptr_t)v1371 = v1369;

	i8 v1372 = (i8)(intptr_t)(ws+3280);
	i8 v1373 = *(i8*)(intptr_t)v1372;
	i8 v1374 = (i8)(intptr_t)(ws+3296);
	i8 v1375 = *(i8*)(intptr_t)v1374;
	i8 v1376 = v1375+(+8);
	*(i8*)(intptr_t)v1376 = v1373;

	i8 v1377 = (i8)(intptr_t)(ws+3296);
	i8 v1378 = *(i8*)(intptr_t)v1377;
	i8 v1379 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1379 = v1378;

endsub:;
}
const i1 c02_s002c[] = { 0x20,0x20,0 };
	void f12_print(i8 /* ptr */);

// LexerPrintSpaces workspace at ws+3368 length ws+1
void f78_LexerPrintSpaces(void) {

	i8 v1382 = (i8)(intptr_t)(ws+925);
	i1 v1383 = *(i1*)(intptr_t)v1382;
	i8 v1384 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v1384 = v1383;

c02_011d:;

	i8 v1385 = (i8)(intptr_t)(ws+3368);
	i1 v1386 = *(i1*)(intptr_t)v1385;
	i1 v1387 = (i1)+0;
	if (v1386==v1387) goto c02_0122; else goto c02_0121;

c02_0121:;

	i8 v1388 = (i8)(intptr_t)c02_s002c;
	i8 v1389 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1389)(v1388);

	i8 v1390 = (i8)(intptr_t)(ws+3368);
	i1 v1391 = *(i1*)(intptr_t)v1390;
	i1 v1392 = v1391+(-1);
	i8 v1393 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v1393 = v1392;

	goto c02_011d;

c02_0122:;

endsub:;
}
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f50_FCBSeek(i4 /* pos */, i8 /* fcb */);

// lexer_i_open workspace at ws+3368 length ws+10
void f79_lexer_i_open(i1* p1394 /* result */, i8 p1395 /* file */) {
	*(i8*)(intptr_t)(ws+3368) = p1395; /* file */

	i8 v1396 = (i8)(intptr_t)(ws+400);
	i8 v1397 = (i8)(intptr_t)(ws+3368);
	i8 v1398 = *(i8*)(intptr_t)v1397;
	i8 v1399 = v1398+(+8);
	i8 v1400 = *(i8*)(intptr_t)v1399;
	i8 v1401 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1402;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1401)(&v1402, v1400, v1396);

	i8 v1403 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v1403 = v1402;

	i8 v1404 = (i8)(intptr_t)(ws+3377);
	i1 v1405 = *(i1*)(intptr_t)v1404;
	i1 v1406 = (i1)+0;
	if (v1405==v1406) goto c02_0126; else goto c02_0127;

c02_0126:;

	i8 v1407 = (i8)(intptr_t)(ws+400);
	i8 v1408 = (i8)(intptr_t)(ws+3368);
	i8 v1409 = *(i8*)(intptr_t)v1408;
	i8 v1410 = v1409+(+20);
	i4 v1411 = *(i4*)(intptr_t)v1410;
	i8 v1412 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1412)(v1411, v1407);

	i1 v1413 = (i1)+0;
	i8 v1414 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v1414 = v1413;

	goto c02_0123;

c02_0127:;

	i1 v1415 = (i1)+1;
	i8 v1416 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v1416 = v1415;

c02_0123:;

endsub:;
	*p1394 = *(i1*)(intptr_t)(ws+3376);
}
	void f48_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);

// lexer_i_close workspace at ws+3368 length ws+14
void f80_lexer_i_close(i8 p1417 /* file */) {
	*(i8*)(intptr_t)(ws+3368) = p1417; /* file */

	i8 v1418 = (i8)(intptr_t)(ws+400);
	i8 v1419 = (i8)(intptr_t)(f48_FCBPos);
	i4 v1420;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v1419)(&v1420, v1418);

	i8 v1421 = (i8)(intptr_t)(ws+3376);
	*(i4*)(intptr_t)v1421 = v1420;

	i8 v1422 = (i8)(intptr_t)(ws+3376);
	i4 v1423 = *(i4*)(intptr_t)v1422;
	i8 v1424 = (i8)(intptr_t)(ws+3368);
	i8 v1425 = *(i8*)(intptr_t)v1424;
	i8 v1426 = v1425+(+20);
	*(i4*)(intptr_t)v1426 = v1423;

	i8 v1427 = (i8)(intptr_t)(ws+400);
	i8 v1428 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1429;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1428)(&v1429, v1427);

	i8 v1430 = (i8)(intptr_t)(ws+3380);
	*(i1*)(intptr_t)v1430 = v1429;

	i8 v1431 = (i8)(intptr_t)(ws+3380);
	i1 v1432 = *(i1*)(intptr_t)v1431;
	i8 v1433 = (i8)(intptr_t)(ws+3381);
	*(i1*)(intptr_t)v1433 = v1432;

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f80_lexer_i_close(i8 /* file */);
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f79_lexer_i_open(i1* /* result */, i8 /* file */);
	void f78_LexerPrintSpaces(void);
const i1 c02_s002d[] = { 0x3e,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f34_Free(i8 /* block */);
	void f74_StartError(void);
const i1 c02_s002e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s002f[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// LexerIncludeFile workspace at ws+3288 length ws+73
void f81_LexerIncludeFile(i8 p1434 /* path */) {
	*(i8*)(intptr_t)(ws+3288) = p1434; /* path */

	i8 v1435 = (i8)+24;
	i8 v1436 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1437;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1436)(&v1437, v1435);

	i8 v1438 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v1438 = v1437;

	i8 v1439 = (i8)(intptr_t)(ws+3296);
	i8 v1440 = *(i8*)(intptr_t)v1439;
	i8 v1441 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1441 = v1440;

	i8 v1442 = (i8)(intptr_t)(ws+256);
	i8 v1443 = *(i8*)(intptr_t)v1442;
	i8 v1444 = (i8)(intptr_t)(ws+3304);
	i8 v1445 = *(i8*)(intptr_t)v1444;
	*(i8*)(intptr_t)v1445 = v1443;

	i2 v1446 = (i2)+1;
	i8 v1447 = (i8)(intptr_t)(ws+3304);
	i8 v1448 = *(i8*)(intptr_t)v1447;
	i8 v1449 = v1448+(+16);
	*(i2*)(intptr_t)v1449 = v1446;

	i8 v1450 = (i8)(intptr_t)(ws+256);
	i8 v1451 = *(i8*)(intptr_t)v1450;
	i8 v1452 = (i8)+0;
	if (v1451==v1452) goto c02_012c; else goto c02_012b;

c02_012b:;

	i8 v1453 = (i8)(intptr_t)(ws+256);
	i8 v1454 = *(i8*)(intptr_t)v1453;
	i8 v1455 = (i8)(intptr_t)(f80_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1455)(v1454);

c02_012c:;

c02_0128:;

	i8 v1456 = (i8)(intptr_t)(ws+248);
	i8 v1457 = *(i8*)(intptr_t)v1456;
	i8 v1458 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1458 = v1457;

	i8 v1459 = (i8)(intptr_t)(ws+3288);
	i8 v1460 = *(i8*)(intptr_t)v1459;
	i8 v1461 = (i8)(intptr_t)(f29_StrLen);
	i8 v1462;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1461)(&v1462, v1460);

	i8 v1463 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v1463 = v1462;

	i8 v1464 = (i8)(intptr_t)(ws+3320);
	i8 v1465 = *(i8*)(intptr_t)v1464;
	i8 v1466 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v1466 = v1465;

c02_012d:;

	i8 v1467 = (i8)(intptr_t)(ws+3312);
	i8 v1468 = *(i8*)(intptr_t)v1467;
	i8 v1469 = (i8)+0;
	if (v1468==v1469) goto c02_0132; else goto c02_0131;

c02_0131:;

	i8 v1470 = (i8)(intptr_t)(ws+3312);
	i8 v1471 = *(i8*)(intptr_t)v1470;
	i8 v1472 = v1471+(+8);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = (i8)(intptr_t)(f29_StrLen);
	i8 v1475;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1474)(&v1475, v1473);

	i8 v1476 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1476 = v1475;

	i8 v1477 = (i8)(intptr_t)(ws+3336);
	i8 v1478 = *(i8*)(intptr_t)v1477;
	i8 v1479 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v1479 = v1478;

	i8 v1480 = (i8)(intptr_t)(ws+3328);
	i8 v1481 = *(i8*)(intptr_t)v1480;
	i8 v1482 = (i8)(intptr_t)(ws+3344);
	i8 v1483 = *(i8*)(intptr_t)v1482;
	i8 v1484 = v1481+v1483;
	i8 v1485 = v1484+(+1);
	i8 v1486 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v1487;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1486)(&v1487, v1485);

	i8 v1488 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v1488 = v1487;

	i8 v1489 = (i8)(intptr_t)(ws+3352);
	i8 v1490 = *(i8*)(intptr_t)v1489;
	i8 v1491 = (i8)(intptr_t)(ws+3304);
	i8 v1492 = *(i8*)(intptr_t)v1491;
	i8 v1493 = v1492+(+8);
	*(i8*)(intptr_t)v1493 = v1490;

	i8 v1494 = (i8)(intptr_t)(ws+3312);
	i8 v1495 = *(i8*)(intptr_t)v1494;
	i8 v1496 = v1495+(+8);
	i8 v1497 = *(i8*)(intptr_t)v1496;
	i8 v1498 = (i8)(intptr_t)(ws+3344);
	i8 v1499 = *(i8*)(intptr_t)v1498;
	i8 v1500 = (i8)(intptr_t)(ws+3304);
	i8 v1501 = *(i8*)(intptr_t)v1500;
	i8 v1502 = v1501+(+8);
	i8 v1503 = *(i8*)(intptr_t)v1502;
	i8 v1504 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1504)(v1503, v1499, v1497);

	i8 v1505 = (i8)(intptr_t)(ws+3288);
	i8 v1506 = *(i8*)(intptr_t)v1505;
	i8 v1507 = (i8)(intptr_t)(ws+3328);
	i8 v1508 = *(i8*)(intptr_t)v1507;
	i8 v1509 = v1508+(+1);
	i8 v1510 = (i8)(intptr_t)(ws+3304);
	i8 v1511 = *(i8*)(intptr_t)v1510;
	i8 v1512 = v1511+(+8);
	i8 v1513 = *(i8*)(intptr_t)v1512;
	i8 v1514 = (i8)(intptr_t)(ws+3344);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	i8 v1516 = v1513+v1515;
	i8 v1517 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1517)(v1516, v1509, v1506);

	i8 v1518 = (i8)(intptr_t)(ws+3304);
	i8 v1519 = *(i8*)(intptr_t)v1518;
	i8 v1520 = (i8)(intptr_t)(f79_lexer_i_open);
	i1 v1521;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1520)(&v1521, v1519);

	i8 v1522 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v1522 = v1521;

	i8 v1523 = (i8)(intptr_t)(ws+3360);
	i1 v1524 = *(i1*)(intptr_t)v1523;
	i1 v1525 = (i1)+0;
	if (v1524==v1525) goto c02_0136; else goto c02_0137;

c02_0136:;

	i8 v1526 = (i8)(intptr_t)(ws+925);
	i1 v1527 = *(i1*)(intptr_t)v1526;
	i1 v1528 = v1527+(+1);
	i8 v1529 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1529 = v1528;

	i8 v1530 = (i8)(intptr_t)(f78_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1530)();

	i8 v1531 = (i8)(intptr_t)c02_s002d;
	i8 v1532 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1532)(v1531);

	i8 v1533 = (i8)(intptr_t)(ws+3304);
	i8 v1534 = *(i8*)(intptr_t)v1533;
	i8 v1535 = v1534+(+8);
	i8 v1536 = *(i8*)(intptr_t)v1535;
	i8 v1537 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1537)(v1536);

	i8 v1538 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1538)();

	i8 v1539 = (i8)(intptr_t)(ws+3304);
	i8 v1540 = *(i8*)(intptr_t)v1539;
	i8 v1541 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1541 = v1540;

	goto endsub;

c02_0137:;

c02_0133:;

	i8 v1542 = (i8)(intptr_t)(ws+3304);
	i8 v1543 = *(i8*)(intptr_t)v1542;
	i8 v1544 = v1543+(+8);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	i8 v1546 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1546)(v1545);

	i8 v1547 = (i8)(intptr_t)(ws+3312);
	i8 v1548 = *(i8*)(intptr_t)v1547;
	i8 v1549 = *(i8*)(intptr_t)v1548;
	i8 v1550 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1550 = v1549;

	goto c02_012d;

c02_0132:;

	i8 v1551 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1551)();

	i8 v1552 = (i8)(intptr_t)c02_s002e;
	i8 v1553 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1553)(v1552);

	i8 v1554 = (i8)(intptr_t)(ws+3288);
	i8 v1555 = *(i8*)(intptr_t)v1554;
	i8 v1556 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1556)(v1555);

	i8 v1557 = (i8)(intptr_t)c02_s002f;
	i8 v1558 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1558)(v1557);

	i8 v1559 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1559)();

endsub:;
}

// lexer_i_ctype workspace at ws+3312 length ws+3
void f83_lexer_i_ctype(i1* p1561 /* type */, i1* p1562 /* token */, i1 p1563 /* c */) {
	*(i1*)(intptr_t)(ws+3312) = p1563; /* c */

	i8 v1564 = (i8)(intptr_t)(ws+3312);
	i1 v1565 = *(i1*)(intptr_t)v1564;
	i1 v1566 = (i1)+33;
	if (v1565<v1566) goto c02_013e; else goto c02_013f;

c02_013f:;

	i1 v1567 = (i1)+127;
	i8 v1568 = (i8)(intptr_t)(ws+3312);
	i1 v1569 = *(i1*)(intptr_t)v1568;
	if (v1567<v1569) goto c02_013e; else goto c02_013d;

c02_013d:;

	i8 v1570 = (i8)(intptr_t)((i1*)f3___main_s0115);
	i8 v1571 = (i8)(intptr_t)(ws+3312);
	i1 v1572 = *(i1*)(intptr_t)v1571;
	i1 v1573 = v1572+(-33);
	i8 v1574 = v1573;
	i8 v1575 = v1570+v1574;
	i1 v1576 = *(i1*)(intptr_t)v1575;
	i8 v1577 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1577 = v1576;

	i8 v1578 = (i8)(intptr_t)(ws+3313);
	i1 v1579 = *(i1*)(intptr_t)v1578;
	i1 v1580 = v1579&(+128);
	i1 v1581 = (i1)+0;
	if (v1580==v1581) goto c02_0144; else goto c02_0143;

c02_0143:;

	i8 v1582 = (i8)(intptr_t)(ws+3313);
	i1 v1583 = *(i1*)(intptr_t)v1582;
	i1 v1584 = v1583&(-129);
	i8 v1585 = (i8)(intptr_t)(ws+3314);
	*(i1*)(intptr_t)v1585 = v1584;

	i1 v1586 = (i1)+128;
	i8 v1587 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1587 = v1586;

c02_0144:;

c02_0140:;

	goto c02_0138;

c02_013e:;

	i1 v1588 = (i1)+0;
	i8 v1589 = (i8)(intptr_t)(ws+3313);
	*(i1*)(intptr_t)v1589 = v1588;

	i1 v1590 = (i1)+0;
	i8 v1591 = (i8)(intptr_t)(ws+3314);
	*(i1*)(intptr_t)v1591 = v1590;

c02_0138:;

endsub:;
	*p1562 = *(i1*)(intptr_t)(ws+3314);
	*p1561 = *(i1*)(intptr_t)(ws+3313);
}
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);
	void f80_lexer_i_close(i8 /* file */);
	void f34_Free(i8 /* block */);
	void f78_LexerPrintSpaces(void);
const i1 c02_s0030[] = { 0x3c,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f79_lexer_i_open(i1* /* result */, i8 /* file */);
const i1 c02_s0031[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
	void f76_SimpleError(i8 /* message */);

// lexer_i_getchar workspace at ws+3312 length ws+18
void f84_lexer_i_getchar(i1* p1592 /* c */) {

	i8 v1593 = (i8)(intptr_t)(ws+264);
	i1 v1594 = *(i1*)(intptr_t)v1593;
	i1 v1595 = (i1)+0;
	if (v1594==v1595) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1596 = (i8)(intptr_t)(ws+264);
	i1 v1597 = *(i1*)(intptr_t)v1596;
	i8 v1598 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1598 = v1597;

	i1 v1599 = (i1)+0;
	i8 v1600 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1600 = v1599;

	goto endsub;

c02_0149:;

c02_0145:;

c02_014a:;

	i8 v1601 = (i8)(intptr_t)(ws+256);
	i8 v1602 = *(i8*)(intptr_t)v1601;
	i8 v1603 = (i8)+0;
	if (v1602==v1603) goto c02_014f; else goto c02_0150;

c02_014f:;

	i1 v1604 = (i1)+0;
	i8 v1605 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1605 = v1604;

	goto c02_014b;

c02_0150:;

c02_014c:;

	i8 v1606 = (i8)(intptr_t)(ws+256);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v1608 = v1607;

	i8 v1609 = (i8)(intptr_t)(ws+400);
	i8 v1610 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1611;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1610)(&v1611, v1609);

	i8 v1612 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v1612 = v1611;

	i8 v1613 = (i8)(intptr_t)(ws+3328);
	i1 v1614 = *(i1*)(intptr_t)v1613;
	i8 v1615 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1615 = v1614;

	i8 v1616 = (i8)(intptr_t)(ws+3312);
	i1 v1617 = *(i1*)(intptr_t)v1616;
	i1 v1618 = (i1)+26;
	if (v1617==v1618) goto c02_0154; else goto c02_0155;

c02_0154:;

	i1 v1619 = (i1)+0;
	i8 v1620 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v1620 = v1619;

c02_0155:;

c02_0151:;

	i8 v1621 = (i8)(intptr_t)(ws+3312);
	i1 v1622 = *(i1*)(intptr_t)v1621;
	i1 v1623 = (i1)+0;
	if (v1622==v1623) goto c02_015a; else goto c02_0159;

c02_0159:;

	goto c02_014b;

c02_015a:;

c02_0156:;

	i8 v1624 = (i8)(intptr_t)(ws+3320);
	i8 v1625 = *(i8*)(intptr_t)v1624;
	i8 v1626 = *(i8*)(intptr_t)v1625;
	i8 v1627 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1627 = v1626;

	i8 v1628 = (i8)(intptr_t)(ws+3320);
	i8 v1629 = *(i8*)(intptr_t)v1628;
	i8 v1630 = (i8)(intptr_t)(f80_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1630)(v1629);

	i8 v1631 = (i8)(intptr_t)(ws+3320);
	i8 v1632 = *(i8*)(intptr_t)v1631;
	i8 v1633 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v1633)(v1632);

	i8 v1634 = (i8)(intptr_t)(ws+256);
	i8 v1635 = *(i8*)(intptr_t)v1634;
	i8 v1636 = (i8)+0;
	if (v1635==v1636) goto c02_015f; else goto c02_015e;

c02_015e:;

	i8 v1637 = (i8)(intptr_t)(ws+925);
	i1 v1638 = *(i1*)(intptr_t)v1637;
	i1 v1639 = v1638+(-1);
	i8 v1640 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(f78_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1641)();

	i8 v1642 = (i8)(intptr_t)c02_s0030;
	i8 v1643 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1643)(v1642);

	i8 v1644 = (i8)(intptr_t)(ws+256);
	i8 v1645 = *(i8*)(intptr_t)v1644;
	i8 v1646 = v1645+(+8);
	i8 v1647 = *(i8*)(intptr_t)v1646;
	i8 v1648 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1648)(v1647);

	i8 v1649 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1649)();

	i8 v1650 = (i8)(intptr_t)(ws+256);
	i8 v1651 = *(i8*)(intptr_t)v1650;
	i8 v1652 = (i8)(intptr_t)(f79_lexer_i_open);
	i1 v1653;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1652)(&v1653, v1651);

	i8 v1654 = (i8)(intptr_t)(ws+3329);
	*(i1*)(intptr_t)v1654 = v1653;

	i8 v1655 = (i8)(intptr_t)(ws+3329);
	i1 v1656 = *(i1*)(intptr_t)v1655;
	i1 v1657 = (i1)+0;
	if (v1656==v1657) goto c02_0164; else goto c02_0163;

c02_0163:;

	i8 v1658 = (i8)(intptr_t)c02_s0031;
	i8 v1659 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v1659)(v1658);

c02_0164:;

c02_0160:;

c02_015f:;

c02_015b:;

	goto c02_014a;

c02_014b:;

endsub:;
	*p1592 = *(i1*)(intptr_t)(ws+3312);
}
	void f74_StartError(void);
const i1 c02_s0032[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f12_print(i8 /* ptr */);
	void f19_print_hex_i8(i1 /* value */);
	void f75_EndError(void);

// lexer_i_unparseable workspace at ws+3280 length ws+1
void f85_lexer_i_unparseable(i1 p1660 /* c */) {
	*(i1*)(intptr_t)(ws+3280) = p1660; /* c */

	i8 v1661 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1661)();

	i8 v1662 = (i8)(intptr_t)c02_s0032;
	i8 v1663 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1663)(v1662);

	i8 v1664 = (i8)(intptr_t)(ws+3280);
	i1 v1665 = *(i1*)(intptr_t)v1664;
	i8 v1666 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v1666)(v1665);

	i8 v1667 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1667)();

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);

// lexer_i_skipwhitespace workspace at ws+3296 length ws+2
void f86_lexer_i_skipwhitespace(void) {

c02_0165:;

	i8 v1668 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1669;

	((void(*)(i1* /* c */))(intptr_t)v1668)(&v1669);

	i8 v1670 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1670 = v1669;

	i8 v1671 = (i8)(intptr_t)(ws+3296);
	i1 v1672 = *(i1*)(intptr_t)v1671;
	i8 v1673 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1673 = v1672;

	i8 v1674 = (i8)(intptr_t)(ws+3297);
	i1 v1675 = *(i1*)(intptr_t)v1674;

	if (v1675 != +32) goto c02_0168;

	goto c02_0167;

c02_0168:;

	if (v1675 != +13) goto c02_0169;

	goto c02_0167;

c02_0169:;

	if (v1675 != +10) goto c02_016a;

	i8 v1676 = (i8)(intptr_t)(ws+256);
	i8 v1677 = *(i8*)(intptr_t)v1676;
	i8 v1678 = v1677+(+16);
	i2 v1679 = *(i2*)(intptr_t)v1678;
	i2 v1680 = v1679+(+1);
	i8 v1681 = (i8)(intptr_t)(ws+256);
	i8 v1682 = *(i8*)(intptr_t)v1681;
	i8 v1683 = v1682+(+16);
	*(i2*)(intptr_t)v1683 = v1680;

	goto c02_0167;

c02_016a:;

	if (v1675 != +9) goto c02_016b;

	goto c02_0167;

c02_016b:;

	goto c02_0166;

c02_0167:;


	goto c02_0165;

c02_0166:;

	i8 v1684 = (i8)(intptr_t)(ws+3297);
	i1 v1685 = *(i1*)(intptr_t)v1684;
	i8 v1686 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1686 = v1685;

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);
	void f83_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f74_StartError(void);
const i1 c02_s0033[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_read_identifier workspace at ws+3280 length ws+4
void f87_lexer_i_read_identifier(void) {

c02_016c:;

	i8 v1687 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1688;

	((void(*)(i1* /* c */))(intptr_t)v1687)(&v1688);

	i8 v1689 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1689 = v1688;

	i8 v1690 = (i8)(intptr_t)(ws+3280);
	i1 v1691 = *(i1*)(intptr_t)v1690;
	i8 v1692 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1692 = v1691;

	i8 v1693 = (i8)(intptr_t)(ws+3281);
	i1 v1694 = *(i1*)(intptr_t)v1693;
	i8 v1695 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v1696;
	i1 v1697;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1695)(&v1696, &v1697, v1694);

	i8 v1698 = (i8)(intptr_t)(ws+3283);
	*(i1*)(intptr_t)v1698 = v1697;

	i8 v1699 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1699 = v1696;

	i8 v1700 = (i8)(intptr_t)(ws+3282);
	i1 v1701 = *(i1*)(intptr_t)v1700;
	i1 v1702 = v1701&(+32);
	i1 v1703 = (i1)+0;
	if (v1702==v1703) goto c02_0172; else goto c02_0171;

c02_0171:;

	i8 v1704 = (i8)(intptr_t)(ws+3281);
	i1 v1705 = *(i1*)(intptr_t)v1704;
	i8 v1706 = (i8)(intptr_t)(ws+265);
	i8 v1707 = (i8)(intptr_t)(ws+393);
	i1 v1708 = *(i1*)(intptr_t)v1707;
	i8 v1709 = v1708;
	i8 v1710 = v1706+v1709;
	*(i1*)(intptr_t)v1710 = v1705;

	i8 v1711 = (i8)(intptr_t)(ws+393);
	i1 v1712 = *(i1*)(intptr_t)v1711;
	i1 v1713 = v1712+(+1);
	i8 v1714 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1714 = v1713;

	i8 v1715 = (i8)(intptr_t)(ws+393);
	i1 v1716 = *(i1*)(intptr_t)v1715;
	i1 v1717 = (i1)+128;
	if (v1716==v1717) goto c02_0176; else goto c02_0177;

c02_0176:;

	i8 v1718 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1718)();

	i8 v1719 = (i8)(intptr_t)c02_s0033;
	i8 v1720 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1720)(v1719);

	i8 v1721 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1721)();

c02_0177:;

c02_0173:;

	goto c02_016e;

c02_0172:;

	i8 v1722 = (i8)(intptr_t)(ws+3281);
	i1 v1723 = *(i1*)(intptr_t)v1722;
	i8 v1724 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1724 = v1723;

	goto c02_016d;

c02_016e:;

	goto c02_016c;

c02_016d:;

	i1 v1725 = (i1)+0;
	i8 v1726 = (i8)(intptr_t)(ws+265);
	i8 v1727 = (i8)(intptr_t)(ws+393);
	i1 v1728 = *(i1*)(intptr_t)v1727;
	i8 v1729 = v1728;
	i8 v1730 = v1726+v1729;
	*(i1*)(intptr_t)v1730 = v1725;

endsub:;
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// lexer_i_match_keyword workspace at ws+3280 length ws+3
void f88_lexer_i_match_keyword(i1* p1731 /* token */) {

	i1 v1732 = (i1)+0;
	i8 v1733 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1733 = v1732;

c02_0178:;

	i8 v1734 = (i8)(intptr_t)(ws+3281);
	i1 v1735 = *(i1*)(intptr_t)v1734;
	i1 v1736 = (i1)+38;
	if (v1735==v1736) goto c02_017d; else goto c02_017c;

c02_017c:;

	i8 v1737 = (i8)(intptr_t)(ws+265);
	i8 v1738 = (i8)(intptr_t)((i1*)f3___main_s0116);
	i8 v1739 = (i8)(intptr_t)(ws+3281);
	i1 v1740 = *(i1*)(intptr_t)v1739;
	i8 v1741 = v1740;
	i1 v1742 = (i1)+3;
	i8 v1743 = ((i8)v1741)<<v1742;
	i8 v1744 = v1738+v1743;
	i8 v1745 = *(i8*)(intptr_t)v1744;
	i8 v1746 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1747;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1746)(&v1747, v1745, v1737);

	i8 v1748 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1748 = v1747;

	i8 v1749 = (i8)(intptr_t)(ws+3282);
	i1 v1750 = *(i1*)(intptr_t)v1749;
	i1 v1751 = (i1)+0;
	if (v1750==v1751) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1752 = (i8)(intptr_t)((i1*)f3___main_s0117);
	i8 v1753 = (i8)(intptr_t)(ws+3281);
	i1 v1754 = *(i1*)(intptr_t)v1753;
	i8 v1755 = v1754;
	i8 v1756 = v1752+v1755;
	i1 v1757 = *(i1*)(intptr_t)v1756;
	i8 v1758 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1758 = v1757;

	goto endsub;

c02_0182:;

c02_017e:;

	i8 v1759 = (i8)(intptr_t)(ws+3281);
	i1 v1760 = *(i1*)(intptr_t)v1759;
	i1 v1761 = v1760+(+1);
	i8 v1762 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1762 = v1761;

	goto c02_0178;

c02_017d:;

	i1 v1763 = (i1)+33;
	i8 v1764 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1764 = v1763;

endsub:;
	*p1731 = *(i1*)(intptr_t)(ws+3280);
}
	void f84_lexer_i_getchar(i1* /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f83_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f27_ToLower(i1* /* cc */, i1 /* c */);
	void f83_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f74_StartError(void);
const i1 c02_s0034[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_read_number workspace at ws+3296 length ws+11
void f89_lexer_i_read_number(void) {

	i4 v1765 = (i4)+0;
	i8 v1766 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1766 = v1765;

	i4 v1767 = (i4)+10;
	i8 v1768 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1768 = v1767;

	i8 v1769 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1770;

	((void(*)(i1* /* c */))(intptr_t)v1769)(&v1770);

	i8 v1771 = (i8)(intptr_t)(ws+3302);
	*(i1*)(intptr_t)v1771 = v1770;

	i8 v1772 = (i8)(intptr_t)(ws+3302);
	i1 v1773 = *(i1*)(intptr_t)v1772;
	i8 v1774 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1774 = v1773;

	i8 v1775 = (i8)(intptr_t)(ws+3303);
	i1 v1776 = *(i1*)(intptr_t)v1775;
	i1 v1777 = (i1)+48;
	if (v1776==v1777) goto c02_0186; else goto c02_0187;

c02_0186:;

	i8 v1778 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1779;

	((void(*)(i1* /* c */))(intptr_t)v1778)(&v1779);

	i8 v1780 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1780 = v1779;

	i8 v1781 = (i8)(intptr_t)(ws+3304);
	i1 v1782 = *(i1*)(intptr_t)v1781;
	i8 v1783 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1783 = v1782;

	i8 v1784 = (i8)(intptr_t)(ws+3303);
	i1 v1785 = *(i1*)(intptr_t)v1784;

	if (v1785 != +98) goto c02_0189;

	i4 v1786 = (i4)+2;
	i8 v1787 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1787 = v1786;

	goto c02_0188;

c02_0189:;

	if (v1785 != +111) goto c02_018a;

	i4 v1788 = (i4)+8;
	i8 v1789 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1789 = v1788;

	goto c02_0188;

c02_018a:;

	if (v1785 != +100) goto c02_018b;

	i4 v1790 = (i4)+10;
	i8 v1791 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1791 = v1790;

	goto c02_0188;

c02_018b:;

	if (v1785 != +120) goto c02_018c;

	i4 v1792 = (i4)+16;
	i8 v1793 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v1793 = v1792;

	goto c02_0188;

c02_018c:;

	i8 v1794 = (i8)(intptr_t)(ws+3303);
	i1 v1795 = *(i1*)(intptr_t)v1794;
	i8 v1796 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1796 = v1795;

	i8 v1797 = (i8)(intptr_t)(ws+3303);
	i1 v1798 = *(i1*)(intptr_t)v1797;
	i8 v1799 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v1800;
	i1 v1801;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1799)(&v1800, &v1801, v1798);

	i8 v1802 = (i8)(intptr_t)(ws+3301);
	*(i1*)(intptr_t)v1802 = v1801;

	i8 v1803 = (i8)(intptr_t)(ws+3300);
	*(i1*)(intptr_t)v1803 = v1800;

	i8 v1804 = (i8)(intptr_t)(ws+3300);
	i1 v1805 = *(i1*)(intptr_t)v1804;
	i1 v1806 = v1805&(+32);
	i1 v1807 = (i1)+0;
	if (v1806==v1807) goto c02_0190; else goto c02_0191;

c02_0190:;

	goto endsub;

c02_0191:;

c02_018d:;

c02_0188:;


	goto c02_0183;

c02_0187:;

	i8 v1808 = (i8)(intptr_t)(ws+3303);
	i1 v1809 = *(i1*)(intptr_t)v1808;
	i8 v1810 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1810 = v1809;

c02_0183:;

c02_0192:;

	i8 v1811 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1812;

	((void(*)(i1* /* c */))(intptr_t)v1811)(&v1812);

	i8 v1813 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v1813 = v1812;

	i8 v1814 = (i8)(intptr_t)(ws+3305);
	i1 v1815 = *(i1*)(intptr_t)v1814;
	i8 v1816 = (i8)(intptr_t)(f27_ToLower);
	i1 v1817;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v1816)(&v1817, v1815);

	i8 v1818 = (i8)(intptr_t)(ws+3306);
	*(i1*)(intptr_t)v1818 = v1817;

	i8 v1819 = (i8)(intptr_t)(ws+3306);
	i1 v1820 = *(i1*)(intptr_t)v1819;
	i8 v1821 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1821 = v1820;

	i8 v1822 = (i8)(intptr_t)(ws+3303);
	i1 v1823 = *(i1*)(intptr_t)v1822;
	i8 v1824 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v1825;
	i1 v1826;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1824)(&v1825, &v1826, v1823);

	i8 v1827 = (i8)(intptr_t)(ws+3301);
	*(i1*)(intptr_t)v1827 = v1826;

	i8 v1828 = (i8)(intptr_t)(ws+3300);
	*(i1*)(intptr_t)v1828 = v1825;

	i8 v1829 = (i8)(intptr_t)(ws+3300);
	i1 v1830 = *(i1*)(intptr_t)v1829;
	i1 v1831 = v1830&(+32);
	i1 v1832 = (i1)+0;
	if (v1831==v1832) goto c02_0197; else goto c02_0198;

c02_0197:;

	i8 v1833 = (i8)(intptr_t)(ws+3303);
	i1 v1834 = *(i1*)(intptr_t)v1833;
	i8 v1835 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1835 = v1834;

	goto c02_0193;

c02_0198:;

c02_0194:;

	i8 v1836 = (i8)(intptr_t)(ws+3303);
	i1 v1837 = *(i1*)(intptr_t)v1836;
	i1 v1838 = (i1)+97;
	if (v1837<v1838) goto c02_019d; else goto c02_019c;

c02_019c:;

	i8 v1839 = (i8)(intptr_t)(ws+3303);
	i1 v1840 = *(i1*)(intptr_t)v1839;
	i1 v1841 = v1840+(-87);
	i8 v1842 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1842 = v1841;

	goto c02_0199;

c02_019d:;

	i8 v1843 = (i8)(intptr_t)(ws+3303);
	i1 v1844 = *(i1*)(intptr_t)v1843;
	i1 v1845 = v1844+(-48);
	i8 v1846 = (i8)(intptr_t)(ws+3303);
	*(i1*)(intptr_t)v1846 = v1845;

c02_0199:;

	i8 v1847 = (i8)(intptr_t)(ws+3303);
	i1 v1848 = *(i1*)(intptr_t)v1847;
	i8 v1849 = (i8)(intptr_t)(ws+3296);
	i4 v1850 = *(i4*)(intptr_t)v1849;
	i1 v1851 = (s1)(s4)v1850;
	if (v1848<v1851) goto c02_01a2; else goto c02_01a1;

c02_01a1:;

	i8 v1852 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1852)();

	i8 v1853 = (i8)(intptr_t)c02_s0034;
	i8 v1854 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1854)(v1853);

	i8 v1855 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1855)();

c02_01a2:;

c02_019e:;

	i8 v1856 = (i8)(intptr_t)(ws+396);
	i4 v1857 = *(i4*)(intptr_t)v1856;
	i8 v1858 = (i8)(intptr_t)(ws+3296);
	i4 v1859 = *(i4*)(intptr_t)v1858;
	i4 v1860 = v1857*v1859;
	i8 v1861 = (i8)(intptr_t)(ws+3303);
	i1 v1862 = *(i1*)(intptr_t)v1861;
	i4 v1863 = v1862;
	i4 v1864 = v1860+v1863;
	i8 v1865 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1865 = v1864;

	goto c02_0192;

c02_0193:;

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0035[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_malformed workspace at ws+3312 length ws+8
void f90_lexer_i_malformed(i8 p1866 /* s */) {
	*(i8*)(intptr_t)(ws+3312) = p1866; /* s */

	i8 v1867 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1867)();

	i8 v1868 = (i8)(intptr_t)c02_s0035;
	i8 v1869 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1869)(v1868);

	i8 v1870 = (i8)(intptr_t)(ws+3312);
	i8 v1871 = *(i8*)(intptr_t)v1870;
	i8 v1872 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1872)(v1871);

	i8 v1873 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1873)();

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);
const i1 c02_s0036[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f90_lexer_i_malformed(i8 /* s */);

// lexer_i_get_escaped workspace at ws+3304 length ws+2
void f91_lexer_i_get_escaped(i1* p1874 /* c */) {

	i8 v1875 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1876;

	((void(*)(i1* /* c */))(intptr_t)v1875)(&v1876);

	i8 v1877 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v1877 = v1876;

	i8 v1878 = (i8)(intptr_t)(ws+3305);
	i1 v1879 = *(i1*)(intptr_t)v1878;
	i8 v1880 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1880 = v1879;

	i8 v1881 = (i8)(intptr_t)(ws+3304);
	i1 v1882 = *(i1*)(intptr_t)v1881;

	if (v1882 != +110) goto c02_01a4;

	i1 v1883 = (i1)+10;
	i8 v1884 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1884 = v1883;

	goto c02_01a3;

c02_01a4:;

	if (v1882 != +114) goto c02_01a5;

	i1 v1885 = (i1)+13;
	i8 v1886 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1886 = v1885;

	goto c02_01a3;

c02_01a5:;

	if (v1882 != +116) goto c02_01a6;

	i1 v1887 = (i1)+9;
	i8 v1888 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1888 = v1887;

	goto c02_01a3;

c02_01a6:;

	if (v1882 != +92) goto c02_01a7;

	i1 v1889 = (i1)+92;
	i8 v1890 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1890 = v1889;

	goto c02_01a3;

c02_01a7:;

	if (v1882 != +39) goto c02_01a8;

	i1 v1891 = (i1)+39;
	i8 v1892 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1892 = v1891;

	goto c02_01a3;

c02_01a8:;

	if (v1882 != +34) goto c02_01a9;

	i1 v1893 = (i1)+34;
	i8 v1894 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1894 = v1893;

	goto c02_01a3;

c02_01a9:;

	if (v1882 != +48) goto c02_01aa;

	i1 v1895 = (i1)+0;
	i8 v1896 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v1896 = v1895;

	goto c02_01a3;

c02_01aa:;

	i8 v1897 = (i8)(intptr_t)c02_s0036;
	i8 v1898 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1898)(v1897);

c02_01a3:;


endsub:;
	*p1874 = *(i1*)(intptr_t)(ws+3304);
}
	void f84_lexer_i_getchar(i1* /* c */);
const i1 c02_s0037[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(i8 /* s */);
	void f91_lexer_i_get_escaped(i1* /* c */);
	void f74_StartError(void);
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// lexer_i_read_string workspace at ws+3296 length ws+3
void f92_lexer_i_read_string(void) {

	i1 v1899 = (i1)+0;
	i8 v1900 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1900 = v1899;

c02_01ab:;

	i8 v1901 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1902;

	((void(*)(i1* /* c */))(intptr_t)v1901)(&v1902);

	i8 v1903 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v1903 = v1902;

	i8 v1904 = (i8)(intptr_t)(ws+3296);
	i1 v1905 = *(i1*)(intptr_t)v1904;
	i8 v1906 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1906 = v1905;

	i8 v1907 = (i8)(intptr_t)(ws+3297);
	i1 v1908 = *(i1*)(intptr_t)v1907;
	i1 v1909 = (i1)+32;
	if (v1908<v1909) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	i8 v1910 = (i8)(intptr_t)c02_s0037;
	i8 v1911 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1911)(v1910);

c02_01b1:;

c02_01ad:;

	i8 v1912 = (i8)(intptr_t)(ws+3297);
	i1 v1913 = *(i1*)(intptr_t)v1912;

	if (v1913 != +34) goto c02_01b3;

	goto c02_01ac;

c02_01b3:;

	if (v1913 != +92) goto c02_01b4;

	i8 v1914 = (i8)(intptr_t)(f91_lexer_i_get_escaped);
	i1 v1915;

	((void(*)(i1* /* c */))(intptr_t)v1914)(&v1915);

	i8 v1916 = (i8)(intptr_t)(ws+3298);
	*(i1*)(intptr_t)v1916 = v1915;

	i8 v1917 = (i8)(intptr_t)(ws+3298);
	i1 v1918 = *(i1*)(intptr_t)v1917;
	i8 v1919 = (i8)(intptr_t)(ws+3297);
	*(i1*)(intptr_t)v1919 = v1918;

c02_01b4:;

c02_01b2:;


	i8 v1920 = (i8)(intptr_t)(ws+3297);
	i1 v1921 = *(i1*)(intptr_t)v1920;
	i8 v1922 = (i8)(intptr_t)(ws+265);
	i8 v1923 = (i8)(intptr_t)(ws+393);
	i1 v1924 = *(i1*)(intptr_t)v1923;
	i8 v1925 = v1924;
	i8 v1926 = v1922+v1925;
	*(i1*)(intptr_t)v1926 = v1921;

	i8 v1927 = (i8)(intptr_t)(ws+393);
	i1 v1928 = *(i1*)(intptr_t)v1927;
	i1 v1929 = v1928+(+1);
	i8 v1930 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1930 = v1929;

	i8 v1931 = (i8)(intptr_t)(ws+393);
	i1 v1932 = *(i1*)(intptr_t)v1931;
	i1 v1933 = (i1)+128;
	if (v1932==v1933) goto c02_01b8; else goto c02_01b9;

c02_01b8:;

	i8 v1934 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v1934)();

	i8 v1935 = (i8)(intptr_t)c02_s0038;
	i8 v1936 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1936)(v1935);

	i8 v1937 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v1937)();

c02_01b9:;

c02_01b5:;

	goto c02_01ab;

c02_01ac:;

	i1 v1938 = (i1)+0;
	i8 v1939 = (i8)(intptr_t)(ws+265);
	i8 v1940 = (i8)(intptr_t)(ws+393);
	i1 v1941 = *(i1*)(intptr_t)v1940;
	i8 v1942 = v1941;
	i8 v1943 = v1939+v1942;
	*(i1*)(intptr_t)v1943 = v1938;

endsub:;
}
const i1 c02_s0039[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f90_lexer_i_malformed(i8 /* s */);

// malformed workspace at ws+3288 length ws+0
void f94_malformed(void) {

	i8 v1944 = (i8)(intptr_t)c02_s0039;
	i8 v1945 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1945)(v1944);

endsub:;
}
	void f84_lexer_i_getchar(i1* /* c */);
	void f94_malformed(void);
	void f91_lexer_i_get_escaped(i1* /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f94_malformed(void);

// lexer_i_read_char workspace at ws+3280 length ws+4
void f93_lexer_i_read_char(void) {


	i8 v1946 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1947;

	((void(*)(i1* /* c */))(intptr_t)v1946)(&v1947);

	i8 v1948 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1948 = v1947;

	i8 v1949 = (i8)(intptr_t)(ws+3280);
	i1 v1950 = *(i1*)(intptr_t)v1949;
	i8 v1951 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1951 = v1950;

	i8 v1952 = (i8)(intptr_t)(ws+3281);
	i1 v1953 = *(i1*)(intptr_t)v1952;
	i1 v1954 = (i1)+32;
	if (v1953<v1954) goto c02_01bf; else goto c02_01c1;

c02_01c1:;

	i8 v1955 = (i8)(intptr_t)(ws+3281);
	i1 v1956 = *(i1*)(intptr_t)v1955;
	i1 v1957 = (i1)+39;
	if (v1956==v1957) goto c02_01bf; else goto c02_01c0;

c02_01bf:;

	i8 v1958 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1958)();

c02_01c0:;

c02_01ba:;

	i8 v1959 = (i8)(intptr_t)(ws+3281);
	i1 v1960 = *(i1*)(intptr_t)v1959;
	i1 v1961 = (i1)+92;
	if (v1960==v1961) goto c02_01c5; else goto c02_01c6;

c02_01c5:;

	i8 v1962 = (i8)(intptr_t)(f91_lexer_i_get_escaped);
	i1 v1963;

	((void(*)(i1* /* c */))(intptr_t)v1962)(&v1963);

	i8 v1964 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1964 = v1963;

	i8 v1965 = (i8)(intptr_t)(ws+3282);
	i1 v1966 = *(i1*)(intptr_t)v1965;
	i8 v1967 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1967 = v1966;

c02_01c6:;

c02_01c2:;

	i8 v1968 = (i8)(intptr_t)(ws+3281);
	i1 v1969 = *(i1*)(intptr_t)v1968;
	i4 v1970 = v1969;
	i8 v1971 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1971 = v1970;

	i8 v1972 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1973;

	((void(*)(i1* /* c */))(intptr_t)v1972)(&v1973);

	i8 v1974 = (i8)(intptr_t)(ws+3283);
	*(i1*)(intptr_t)v1974 = v1973;

	i8 v1975 = (i8)(intptr_t)(ws+3283);
	i1 v1976 = *(i1*)(intptr_t)v1975;
	i8 v1977 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1977 = v1976;

	i8 v1978 = (i8)(intptr_t)(ws+3281);
	i1 v1979 = *(i1*)(intptr_t)v1978;
	i1 v1980 = (i1)+39;
	if (v1979==v1980) goto c02_01cb; else goto c02_01ca;

c02_01ca:;

	i8 v1981 = (i8)(intptr_t)(f94_malformed);

	((void(*)(void))(intptr_t)v1981)();

c02_01cb:;

c02_01c7:;

endsub:;
}
const i1 c02_s003a[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(i8 /* s */);

// malformed_include workspace at ws+3288 length ws+0
void f96_malformed_include(void) {

	i8 v1982 = (i8)(intptr_t)c02_s003a;
	i8 v1983 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1983)(v1982);

endsub:;
}
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(i1* /* c */);
	void f96_malformed_include(void);
	void f92_lexer_i_read_string(void);
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(i1* /* c */);
	void f96_malformed_include(void);
	void f81_LexerIncludeFile(i8 /* path */);

// lexer_i_include workspace at ws+3280 length ws+3
void f95_lexer_i_include(void) {


	i8 v1984 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1984)();

	i8 v1985 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1986;

	((void(*)(i1* /* c */))(intptr_t)v1985)(&v1986);

	i8 v1987 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v1987 = v1986;

	i8 v1988 = (i8)(intptr_t)(ws+3280);
	i1 v1989 = *(i1*)(intptr_t)v1988;
	i8 v1990 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v1990 = v1989;

	i8 v1991 = (i8)(intptr_t)(ws+3281);
	i1 v1992 = *(i1*)(intptr_t)v1991;
	i1 v1993 = (i1)+34;
	if (v1992==v1993) goto c02_01d0; else goto c02_01cf;

c02_01cf:;

	i8 v1994 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v1994)();

c02_01d0:;

c02_01cc:;

	i8 v1995 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1995)();

	i8 v1996 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1996)();

	i8 v1997 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v1998;

	((void(*)(i1* /* c */))(intptr_t)v1997)(&v1998);

	i8 v1999 = (i8)(intptr_t)(ws+3282);
	*(i1*)(intptr_t)v1999 = v1998;

	i8 v2000 = (i8)(intptr_t)(ws+3282);
	i1 v2001 = *(i1*)(intptr_t)v2000;
	i8 v2002 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v2002 = v2001;

	i8 v2003 = (i8)(intptr_t)(ws+3281);
	i1 v2004 = *(i1*)(intptr_t)v2003;
	i1 v2005 = (i1)+59;
	if (v2004==v2005) goto c02_01d5; else goto c02_01d4;

c02_01d4:;

	i8 v2006 = (i8)(intptr_t)(f96_malformed_include);

	((void(*)(void))(intptr_t)v2006)();

c02_01d5:;

c02_01d1:;

	i8 v2007 = (i8)(intptr_t)(ws+265);
	i8 v2008 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v2008)(v2007);

endsub:;
}
	void f86_lexer_i_skipwhitespace(void);
	void f89_lexer_i_read_number(void);
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(i1* /* c */);
const i1 c02_s003b[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f90_lexer_i_malformed(i8 /* s */);
	void f92_lexer_i_read_string(void);
	void f34_Free(i8 /* block */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);

// lexer_i_line_directive workspace at ws+3280 length ws+16
void f97_lexer_i_line_directive(void) {

	i8 v2009 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v2009)();

	i8 v2010 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v2010)();

	i8 v2011 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v2011)();

	i8 v2012 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2013;

	((void(*)(i1* /* c */))(intptr_t)v2012)(&v2013);

	i8 v2014 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v2014 = v2013;

	i8 v2015 = (i8)(intptr_t)(ws+3280);
	i1 v2016 = *(i1*)(intptr_t)v2015;
	i8 v2017 = (i8)(intptr_t)(ws+3281);
	*(i1*)(intptr_t)v2017 = v2016;

	i8 v2018 = (i8)(intptr_t)(ws+3281);
	i1 v2019 = *(i1*)(intptr_t)v2018;
	i1 v2020 = (i1)+34;
	if (v2019==v2020) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v2021 = (i8)(intptr_t)c02_s003b;
	i8 v2022 = (i8)(intptr_t)(f90_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v2022)(v2021);

c02_01da:;

c02_01d6:;

	i8 v2023 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v2023)();

	i8 v2024 = (i8)(intptr_t)(ws+396);
	i4 v2025 = *(i4*)(intptr_t)v2024;
	i2 v2026 = (s2)(s4)v2025;
	i8 v2027 = (i8)(intptr_t)(ws+256);
	i8 v2028 = *(i8*)(intptr_t)v2027;
	i8 v2029 = v2028+(+16);
	*(i2*)(intptr_t)v2029 = v2026;

	i8 v2030 = (i8)(intptr_t)(ws+256);
	i8 v2031 = *(i8*)(intptr_t)v2030;
	i8 v2032 = v2031+(+8);
	i8 v2033 = *(i8*)(intptr_t)v2032;
	i8 v2034 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v2034)(v2033);

	i8 v2035 = (i8)(intptr_t)(ws+265);
	i8 v2036 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v2037;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v2036)(&v2037, v2035);

	i8 v2038 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v2038 = v2037;

	i8 v2039 = (i8)(intptr_t)(ws+3288);
	i8 v2040 = *(i8*)(intptr_t)v2039;
	i8 v2041 = (i8)(intptr_t)(ws+256);
	i8 v2042 = *(i8*)(intptr_t)v2041;
	i8 v2043 = v2042+(+8);
	*(i8*)(intptr_t)v2043 = v2040;

endsub:;
}
	void f86_lexer_i_skipwhitespace(void);
	void f84_lexer_i_getchar(i1* /* c */);
	void f87_lexer_i_read_identifier(void);
const i1 c02_s003c[] = { 0x6c,0x69,0x6e,0x65,0 };
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f97_lexer_i_line_directive(void);
	void f84_lexer_i_getchar(i1* /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f85_lexer_i_unparseable(i1 /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f85_lexer_i_unparseable(i1 /* c */);
	void f84_lexer_i_getchar(i1* /* c */);
	void f92_lexer_i_read_string(void);
	void f93_lexer_i_read_char(void);
	void f83_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f89_lexer_i_read_number(void);
	void f87_lexer_i_read_identifier(void);
	void f88_lexer_i_match_keyword(i1* /* token */);
	void f85_lexer_i_unparseable(i1 /* c */);
	void f95_lexer_i_include(void);

// LexerReadToken workspace at ws+3264 length ws+12
void f82_LexerReadToken(i1* p1560 /* token */) {














c02_01db:;

	i8 v2044 = (i8)(intptr_t)(f86_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v2044)();

	i8 v2045 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2046;

	((void(*)(i1* /* c */))(intptr_t)v2045)(&v2046);

	i8 v2047 = (i8)(intptr_t)(ws+3265);
	*(i1*)(intptr_t)v2047 = v2046;

	i8 v2048 = (i8)(intptr_t)(ws+3265);
	i1 v2049 = *(i1*)(intptr_t)v2048;
	i8 v2050 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2050 = v2049;

	i8 v2051 = (i8)(intptr_t)(ws+3266);
	i1 v2052 = *(i1*)(intptr_t)v2051;
	i1 v2053 = (i1)+35;
	if (v2052==v2053) goto c02_01e0; else goto c02_01e1;

c02_01e0:;

	i1 v2054 = (i1)+0;
	i8 v2055 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v2055 = v2054;

	i8 v2056 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v2056)();

	i8 v2057 = (i8)(intptr_t)(ws+265);
	i8 v2058 = (i8)(intptr_t)c02_s003c;
	i8 v2059 = (i8)(intptr_t)(f26_StrCmp);
	i1 v2060;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v2059)(&v2060, v2058, v2057);

	i8 v2061 = (i8)(intptr_t)(ws+3267);
	*(i1*)(intptr_t)v2061 = v2060;

	i8 v2062 = (i8)(intptr_t)(ws+3267);
	i1 v2063 = *(i1*)(intptr_t)v2062;
	i1 v2064 = (i1)+0;
	if (v2063==v2064) goto c02_01e5; else goto c02_01e6;

c02_01e5:;

	i8 v2065 = (i8)(intptr_t)(f97_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v2065)();

c02_01e6:;

c02_01e2:;

c02_01e7:;

	i8 v2066 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2067;

	((void(*)(i1* /* c */))(intptr_t)v2066)(&v2067);

	i8 v2068 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v2068 = v2067;

	i8 v2069 = (i8)(intptr_t)(ws+3268);
	i1 v2070 = *(i1*)(intptr_t)v2069;
	i8 v2071 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2071 = v2070;

	i8 v2072 = (i8)(intptr_t)(ws+3266);
	i1 v2073 = *(i1*)(intptr_t)v2072;
	i1 v2074 = (i1)+10;
	if (v2073==v2074) goto c02_01f0; else goto c02_01f3;

c02_01f3:;

	i8 v2075 = (i8)(intptr_t)(ws+3266);
	i1 v2076 = *(i1*)(intptr_t)v2075;
	i1 v2077 = (i1)+13;
	if (v2076==v2077) goto c02_01f0; else goto c02_01f2;

c02_01f2:;

	i8 v2078 = (i8)(intptr_t)(ws+3266);
	i1 v2079 = *(i1*)(intptr_t)v2078;
	i1 v2080 = (i1)+0;
	if (v2079==v2080) goto c02_01f0; else goto c02_01f1;

c02_01f0:;

	i8 v2081 = (i8)(intptr_t)(ws+3266);
	i1 v2082 = *(i1*)(intptr_t)v2081;
	i8 v2083 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2083 = v2082;

	goto c02_01e8;

c02_01f1:;

c02_01e9:;

	goto c02_01e7;

c02_01e8:;

	goto c02_01db;

c02_01e1:;

c02_01dd:;

	i8 v2084 = (i8)(intptr_t)(ws+3266);
	i1 v2085 = *(i1*)(intptr_t)v2084;

	if (v2085 != +0) goto c02_01f5;

	i1 v2086 = (i1)+0;
	i8 v2087 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2087 = v2086;

	goto c02_01f4;

c02_01f5:;

	if (v2085 != +58) goto c02_01f6;

	i8 v2088 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2089;

	((void(*)(i1* /* c */))(intptr_t)v2088)(&v2089);

	i8 v2090 = (i8)(intptr_t)(ws+3269);
	*(i1*)(intptr_t)v2090 = v2089;

	i8 v2091 = (i8)(intptr_t)(ws+3269);
	i1 v2092 = *(i1*)(intptr_t)v2091;
	i8 v2093 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2093 = v2092;

	i8 v2094 = (i8)(intptr_t)(ws+3266);
	i1 v2095 = *(i1*)(intptr_t)v2094;
	i1 v2096 = (i1)+61;
	if (v2095==v2096) goto c02_01fa; else goto c02_01fb;

c02_01fa:;

	i1 v2097 = (i1)+2;
	i8 v2098 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2098 = v2097;

	goto c02_01f7;

c02_01fb:;

	i8 v2099 = (i8)(intptr_t)(ws+3266);
	i1 v2100 = *(i1*)(intptr_t)v2099;
	i8 v2101 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2101 = v2100;

	i1 v2102 = (i1)+6;
	i8 v2103 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2103 = v2102;

c02_01f7:;

	goto c02_01f4;

c02_01f6:;

	if (v2085 != +60) goto c02_01fc;

	i8 v2104 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2105;

	((void(*)(i1* /* c */))(intptr_t)v2104)(&v2105);

	i8 v2106 = (i8)(intptr_t)(ws+3270);
	*(i1*)(intptr_t)v2106 = v2105;

	i8 v2107 = (i8)(intptr_t)(ws+3270);
	i1 v2108 = *(i1*)(intptr_t)v2107;
	i8 v2109 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2109 = v2108;

	i8 v2110 = (i8)(intptr_t)(ws+3266);
	i1 v2111 = *(i1*)(intptr_t)v2110;

	if (v2111 != +60) goto c02_01fe;

	i1 v2112 = (i1)+56;
	i8 v2113 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2113 = v2112;

	goto c02_01fd;

c02_01fe:;

	if (v2111 != +61) goto c02_01ff;

	i1 v2114 = (i1)+51;
	i8 v2115 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2115 = v2114;

	goto c02_01fd;

c02_01ff:;

	i8 v2116 = (i8)(intptr_t)(ws+3266);
	i1 v2117 = *(i1*)(intptr_t)v2116;
	i8 v2118 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2118 = v2117;

	i1 v2119 = (i1)+50;
	i8 v2120 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2120 = v2119;

c02_01fd:;


	goto c02_01f4;

c02_01fc:;

	if (v2085 != +61) goto c02_0200;

	i8 v2121 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2122;

	((void(*)(i1* /* c */))(intptr_t)v2121)(&v2122);

	i8 v2123 = (i8)(intptr_t)(ws+3271);
	*(i1*)(intptr_t)v2123 = v2122;

	i8 v2124 = (i8)(intptr_t)(ws+3271);
	i1 v2125 = *(i1*)(intptr_t)v2124;
	i8 v2126 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2126 = v2125;

	i8 v2127 = (i8)(intptr_t)(ws+3266);
	i1 v2128 = *(i1*)(intptr_t)v2127;
	i1 v2129 = (i1)+61;
	if (v2128==v2129) goto c02_0204; else goto c02_0205;

c02_0204:;

	i1 v2130 = (i1)+54;
	i8 v2131 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2131 = v2130;

	goto c02_0201;

c02_0205:;

	i8 v2132 = (i8)(intptr_t)(ws+3266);
	i1 v2133 = *(i1*)(intptr_t)v2132;
	i8 v2134 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v2134)(v2133);

c02_0201:;

	goto c02_01f4;

c02_0200:;

	if (v2085 != +33) goto c02_0206;

	i8 v2135 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2136;

	((void(*)(i1* /* c */))(intptr_t)v2135)(&v2136);

	i8 v2137 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v2137 = v2136;

	i8 v2138 = (i8)(intptr_t)(ws+3272);
	i1 v2139 = *(i1*)(intptr_t)v2138;
	i8 v2140 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2140 = v2139;

	i8 v2141 = (i8)(intptr_t)(ws+3266);
	i1 v2142 = *(i1*)(intptr_t)v2141;
	i1 v2143 = (i1)+61;
	if (v2142==v2143) goto c02_020a; else goto c02_020b;

c02_020a:;

	i1 v2144 = (i1)+55;
	i8 v2145 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2145 = v2144;

	goto c02_0207;

c02_020b:;

	i8 v2146 = (i8)(intptr_t)(ws+3266);
	i1 v2147 = *(i1*)(intptr_t)v2146;
	i8 v2148 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v2148)(v2147);

c02_0207:;

	goto c02_01f4;

c02_0206:;

	if (v2085 != +62) goto c02_020c;

	i8 v2149 = (i8)(intptr_t)(f84_lexer_i_getchar);
	i1 v2150;

	((void(*)(i1* /* c */))(intptr_t)v2149)(&v2150);

	i8 v2151 = (i8)(intptr_t)(ws+3273);
	*(i1*)(intptr_t)v2151 = v2150;

	i8 v2152 = (i8)(intptr_t)(ws+3273);
	i1 v2153 = *(i1*)(intptr_t)v2152;
	i8 v2154 = (i8)(intptr_t)(ws+3266);
	*(i1*)(intptr_t)v2154 = v2153;

	i8 v2155 = (i8)(intptr_t)(ws+3266);
	i1 v2156 = *(i1*)(intptr_t)v2155;

	if (v2156 != +62) goto c02_020e;

	i1 v2157 = (i1)+57;
	i8 v2158 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2158 = v2157;

	goto c02_020d;

c02_020e:;

	if (v2156 != +61) goto c02_020f;

	i1 v2159 = (i1)+53;
	i8 v2160 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2160 = v2159;

	goto c02_020d;

c02_020f:;

	i8 v2161 = (i8)(intptr_t)(ws+3266);
	i1 v2162 = *(i1*)(intptr_t)v2161;
	i8 v2163 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2163 = v2162;

	i1 v2164 = (i1)+52;
	i8 v2165 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2165 = v2164;

c02_020d:;


	goto c02_01f4;

c02_020c:;

	if (v2085 != +34) goto c02_0210;

	i8 v2166 = (i8)(intptr_t)(f92_lexer_i_read_string);

	((void(*)(void))(intptr_t)v2166)();

	i1 v2167 = (i1)+41;
	i8 v2168 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2168 = v2167;

	goto c02_01f4;

c02_0210:;

	if (v2085 != +39) goto c02_0211;

	i8 v2169 = (i8)(intptr_t)(f93_lexer_i_read_char);

	((void(*)(void))(intptr_t)v2169)();

	i1 v2170 = (i1)+34;
	i8 v2171 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2171 = v2170;

	goto c02_01f4;

c02_0211:;

	i8 v2172 = (i8)(intptr_t)(ws+3266);
	i1 v2173 = *(i1*)(intptr_t)v2172;
	i8 v2174 = (i8)(intptr_t)(f83_lexer_i_ctype);
	i1 v2175;
	i1 v2176;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v2174)(&v2175, &v2176, v2173);

	i8 v2177 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2177 = v2176;

	i8 v2178 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v2178 = v2175;

	i8 v2179 = (i8)(intptr_t)(ws+3274);
	i1 v2180 = *(i1*)(intptr_t)v2179;
	i1 v2181 = v2180&(+128);
	i1 v2182 = (i1)+0;
	if (v2181==v2182) goto c02_0216; else goto c02_0215;

c02_0215:;

	goto c02_0212;

c02_0216:;

	i8 v2183 = (i8)(intptr_t)(ws+3274);
	i1 v2184 = *(i1*)(intptr_t)v2183;
	i1 v2185 = v2184&(+1);
	i1 v2186 = (i1)+0;
	if (v2185==v2186) goto c02_021a; else goto c02_0219;

c02_0219:;

	i8 v2187 = (i8)(intptr_t)(ws+3266);
	i1 v2188 = *(i1*)(intptr_t)v2187;
	i8 v2189 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v2189 = v2188;

	i8 v2190 = (i8)(intptr_t)(f89_lexer_i_read_number);

	((void(*)(void))(intptr_t)v2190)();

	i1 v2191 = (i1)+34;
	i8 v2192 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2192 = v2191;

	goto c02_0212;

c02_021a:;

	i8 v2193 = (i8)(intptr_t)(ws+3274);
	i1 v2194 = *(i1*)(intptr_t)v2193;
	i1 v2195 = v2194&(+16);
	i1 v2196 = (i1)+0;
	if (v2195==v2196) goto c02_021e; else goto c02_021d;

c02_021d:;

	i1 v2197 = (i1)+1;
	i8 v2198 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v2198 = v2197;

	i8 v2199 = (i8)(intptr_t)(ws+3266);
	i1 v2200 = *(i1*)(intptr_t)v2199;
	i8 v2201 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v2201 = v2200;

	i8 v2202 = (i8)(intptr_t)(f87_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v2202)();

	i8 v2203 = (i8)(intptr_t)(f88_lexer_i_match_keyword);
	i1 v2204;

	((void(*)(i1* /* token */))(intptr_t)v2203)(&v2204);

	i8 v2205 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v2205 = v2204;

	i8 v2206 = (i8)(intptr_t)(ws+3275);
	i1 v2207 = *(i1*)(intptr_t)v2206;
	i8 v2208 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2208 = v2207;

	goto c02_0212;

c02_021e:;

	i8 v2209 = (i8)(intptr_t)(ws+3266);
	i1 v2210 = *(i1*)(intptr_t)v2209;
	i8 v2211 = (i8)(intptr_t)(f85_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v2211)(v2210);

c02_0212:;

c02_01f4:;


	i8 v2212 = (i8)(intptr_t)(ws+3264);
	i1 v2213 = *(i1*)(intptr_t)v2212;
	i1 v2214 = (i1)+255;
	if (v2213==v2214) goto c02_0222; else goto c02_0223;

c02_0222:;

	i8 v2215 = (i8)(intptr_t)(f95_lexer_i_include);

	((void(*)(void))(intptr_t)v2215)();

	goto c02_021f;

c02_0223:;

	goto c02_01dc;

c02_021f:;

	goto c02_01db;

c02_01dc:;

endsub:;
	*p1560 = *(i1*)(intptr_t)(ws+3264);
}

// CountParameters workspace at ws+3392 length ws+9
void f98_CountParameters(i1* p2216 /* count */, i8 p2217 /* param */) {
	*(i8*)(intptr_t)(ws+3392) = p2217; /* param */

	i1 v2218 = (i1)+0;
	i8 v2219 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2219 = v2218;

c02_0224:;

	i8 v2220 = (i8)(intptr_t)(ws+3392);
	i8 v2221 = *(i8*)(intptr_t)v2220;
	i8 v2222 = (i8)+0;
	if (v2221==v2222) goto c02_0229; else goto c02_0228;

c02_0228:;

	i8 v2223 = (i8)(intptr_t)(ws+3400);
	i1 v2224 = *(i1*)(intptr_t)v2223;
	i1 v2225 = v2224+(+1);
	i8 v2226 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v2226 = v2225;

	i8 v2227 = (i8)(intptr_t)(ws+3392);
	i8 v2228 = *(i8*)(intptr_t)v2227;
	i8 v2229 = *(i8*)(intptr_t)v2228;
	i8 v2230 = v2229+(+16);
	i8 v2231 = *(i8*)(intptr_t)v2230;
	i8 v2232 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2232 = v2231;

	goto c02_0224;

c02_0229:;

endsub:;
	*p2216 = *(i1*)(intptr_t)(ws+3400);
}

// GetInputParameter workspace at ws+3464 length ws+24
void f99_GetInputParameter(i8* p2233 /* param */, i1 p2234 /* count */, i8 p2235 /* subr */) {
	*(i8*)(intptr_t)(ws+3464) = p2235; /* subr */
	*(i1*)(intptr_t)(ws+3472) = p2234; /* count */

	i8 v2236 = (i8)(intptr_t)(ws+3464);
	i8 v2237 = *(i8*)(intptr_t)v2236;
	i8 v2238 = v2237+(+80);
	i1 v2239 = *(i1*)(intptr_t)v2238;
	i1 v2240 = (i1)+0;
	if (v2239==v2240) goto c02_022e; else goto c02_022d;

c02_022d:;

	i8 v2241 = (i8)(intptr_t)(ws+3464);
	i8 v2242 = *(i8*)(intptr_t)v2241;
	i8 v2243 = v2242+(+16);
	i8 v2244 = *(i8*)(intptr_t)v2243;
	i8 v2245 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2245 = v2244;

c02_022f:;

	i8 v2246 = (i8)(intptr_t)(ws+3472);
	i1 v2247 = *(i1*)(intptr_t)v2246;
	i1 v2248 = (i1)+0;
	if (v2247==v2248) goto c02_0234; else goto c02_0233;

c02_0233:;

	i8 v2249 = (i8)(intptr_t)(ws+3480);
	i8 v2250 = *(i8*)(intptr_t)v2249;
	i8 v2251 = v2250+(+24);
	i8 v2252 = *(i8*)(intptr_t)v2251;
	i8 v2253 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2253 = v2252;

	i8 v2254 = (i8)(intptr_t)(ws+3472);
	i1 v2255 = *(i1*)(intptr_t)v2254;
	i1 v2256 = v2255+(-1);
	i8 v2257 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v2257 = v2256;

	goto c02_022f;

c02_0234:;

	goto c02_022a;

c02_022e:;

	i8 v2258 = (i8)+0;
	i8 v2259 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2259 = v2258;

c02_022a:;

endsub:;
	*p2233 = *(i8*)(intptr_t)(ws+3480);
}

// GetOutputParameter workspace at ws+3488 length ws+24
void f100_GetOutputParameter(i8* p2260 /* param */, i1 p2261 /* count */, i8 p2262 /* subr */) {
	*(i8*)(intptr_t)(ws+3488) = p2262; /* subr */
	*(i1*)(intptr_t)(ws+3496) = p2261; /* count */

	i8 v2263 = (i8)(intptr_t)(ws+3488);
	i8 v2264 = *(i8*)(intptr_t)v2263;
	i8 v2265 = v2264+(+81);
	i1 v2266 = *(i1*)(intptr_t)v2265;
	i1 v2267 = (i1)+0;
	if (v2266==v2267) goto c02_0239; else goto c02_0238;

c02_0238:;

	i8 v2268 = (i8)(intptr_t)(ws+3496);
	i1 v2269 = *(i1*)(intptr_t)v2268;
	i8 v2270 = (i8)(intptr_t)(ws+3488);
	i8 v2271 = *(i8*)(intptr_t)v2270;
	i8 v2272 = v2271+(+80);
	i1 v2273 = *(i1*)(intptr_t)v2272;
	i1 v2274 = v2269+v2273;
	i8 v2275 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2275 = v2274;

	i8 v2276 = (i8)(intptr_t)(ws+3488);
	i8 v2277 = *(i8*)(intptr_t)v2276;
	i8 v2278 = v2277+(+16);
	i8 v2279 = *(i8*)(intptr_t)v2278;
	i8 v2280 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2280 = v2279;

c02_023a:;

	i8 v2281 = (i8)(intptr_t)(ws+3496);
	i1 v2282 = *(i1*)(intptr_t)v2281;
	i1 v2283 = (i1)+0;
	if (v2282==v2283) goto c02_023f; else goto c02_023e;

c02_023e:;

	i8 v2284 = (i8)(intptr_t)(ws+3504);
	i8 v2285 = *(i8*)(intptr_t)v2284;
	i8 v2286 = v2285+(+24);
	i8 v2287 = *(i8*)(intptr_t)v2286;
	i8 v2288 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2288 = v2287;

	i8 v2289 = (i8)(intptr_t)(ws+3496);
	i1 v2290 = *(i1*)(intptr_t)v2289;
	i1 v2291 = v2290+(-1);
	i8 v2292 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2292 = v2291;

	goto c02_023a;

c02_023f:;

	goto c02_0235;

c02_0239:;

	i8 v2293 = (i8)+0;
	i8 v2294 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2294 = v2293;

c02_0235:;

endsub:;
	*p2260 = *(i8*)(intptr_t)(ws+3504);
}

// WidthToIndex workspace at ws+3592 length ws+2
void f102_WidthToIndex(i1* p2303 /* index */, i1 p2304 /* width */) {
	*(i1*)(intptr_t)(ws+3592) = p2304; /* width */

	i8 v2305 = (i8)(intptr_t)(ws+3592);
	i1 v2306 = *(i1*)(intptr_t)v2305;

	if (v2306 != +4) goto c02_0241;

	i1 v2307 = (i1)+3;
	i8 v2308 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2308 = v2307;

	goto c02_0240;

c02_0241:;

	if (v2306 != +8) goto c02_0242;

	i1 v2309 = (i1)+4;
	i8 v2310 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2310 = v2309;

	goto c02_0240;

c02_0242:;

	i8 v2311 = (i8)(intptr_t)(ws+3592);
	i1 v2312 = *(i1*)(intptr_t)v2311;
	i8 v2313 = (i8)(intptr_t)(ws+3593);
	*(i1*)(intptr_t)v2313 = v2312;

c02_0240:;


endsub:;
	*p2303 = *(i1*)(intptr_t)(ws+3593);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3520 length ws+16
void f104_MidAsmgroupend(i8* p2314 /* m */) {

	i1 v2315 = (i1)+17;
	i8 v2316 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2317;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2316)(&v2317, v2315);

	i8 v2318 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v2318 = v2317;

	i8 v2319 = (i8)(intptr_t)(ws+3528);
	i8 v2320 = *(i8*)(intptr_t)v2319;
	i8 v2321 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2321 = v2320;

endsub:;
	*p2314 = *(i8*)(intptr_t)(ws+3520);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3416 length ws+24
void f105_MidAsmsymbol(i8* p2322 /* m */, i8 p2323 /* sym */) {
	*(i8*)(intptr_t)(ws+3416) = p2323; /* sym */

	i1 v2324 = (i1)+20;
	i8 v2325 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2326;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2325)(&v2326, v2324);

	i8 v2327 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2327 = v2326;

	i8 v2328 = (i8)(intptr_t)(ws+3432);
	i8 v2329 = *(i8*)(intptr_t)v2328;
	i8 v2330 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2330 = v2329;

	i8 v2331 = (i8)(intptr_t)(ws+3416);
	i8 v2332 = *(i8*)(intptr_t)v2331;
	i8 v2333 = (i8)(intptr_t)(ws+3424);
	i8 v2334 = *(i8*)(intptr_t)v2333;
	*(i8*)(intptr_t)v2334 = v2332;

endsub:;
	*p2322 = *(i8*)(intptr_t)(ws+3424);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidDeref workspace at ws+3544 length ws+40
void f106_MidDeref(i8* p2335 /* m */, i8 p2336 /* left */, i1 p2337 /* width */) {
	*(i1*)(intptr_t)(ws+3544) = p2337; /* width */
	*(i8*)(intptr_t)(ws+3552) = p2336; /* left */

	i8 v2338 = (i8)(intptr_t)(ws+3544);
	i1 v2339 = *(i1*)(intptr_t)v2338;
	i8 v2340 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2341;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2340)(&v2341, v2339);

	i8 v2342 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v2342 = v2341;

	i8 v2343 = (i8)(intptr_t)(ws+3568);
	i1 v2344 = *(i1*)(intptr_t)v2343;
	i1 v2345 = v2344+(+44);
	i8 v2346 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2347;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2346)(&v2347, v2345);

	i8 v2348 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v2348 = v2347;

	i8 v2349 = (i8)(intptr_t)(ws+3576);
	i8 v2350 = *(i8*)(intptr_t)v2349;
	i8 v2351 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v2351 = v2350;

	i8 v2352 = (i8)(intptr_t)(ws+3552);
	i8 v2353 = *(i8*)(intptr_t)v2352;
	i8 v2354 = (i8)(intptr_t)(ws+3560);
	i8 v2355 = *(i8*)(intptr_t)v2354;
	i8 v2356 = v2355+(+24);
	*(i8*)(intptr_t)v2356 = v2353;

endsub:;
	*p2335 = *(i8*)(intptr_t)(ws+3560);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3456 length ws+56
void f107_MidBlts(i8* p2357 /* m */, i1 p2358 /* negated */, i2 p2359 /* fallthrough */, i2 p2360 /* falselabel */, i2 p2361 /* truelabel */, i8 p2362 /* right */, i8 p2363 /* left */, i1 p2364 /* width */) {
	*(i1*)(intptr_t)(ws+3456) = p2364; /* width */
	*(i8*)(intptr_t)(ws+3464) = p2363; /* left */
	*(i8*)(intptr_t)(ws+3472) = p2362; /* right */
	*(i2*)(intptr_t)(ws+3480) = p2361; /* truelabel */
	*(i2*)(intptr_t)(ws+3482) = p2360; /* falselabel */
	*(i2*)(intptr_t)(ws+3484) = p2359; /* fallthrough */
	*(i1*)(intptr_t)(ws+3486) = p2358; /* negated */

	i8 v2365 = (i8)(intptr_t)(ws+3456);
	i1 v2366 = *(i1*)(intptr_t)v2365;
	i8 v2367 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2368;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2367)(&v2368, v2366);

	i8 v2369 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v2369 = v2368;

	i8 v2370 = (i8)(intptr_t)(ws+3496);
	i1 v2371 = *(i1*)(intptr_t)v2370;
	i1 v2372 = v2371+(+61);
	i8 v2373 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2374;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2373)(&v2374, v2372);

	i8 v2375 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v2375 = v2374;

	i8 v2376 = (i8)(intptr_t)(ws+3504);
	i8 v2377 = *(i8*)(intptr_t)v2376;
	i8 v2378 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2378 = v2377;

	i8 v2379 = (i8)(intptr_t)(ws+3464);
	i8 v2380 = *(i8*)(intptr_t)v2379;
	i8 v2381 = (i8)(intptr_t)(ws+3488);
	i8 v2382 = *(i8*)(intptr_t)v2381;
	i8 v2383 = v2382+(+24);
	*(i8*)(intptr_t)v2383 = v2380;

	i8 v2384 = (i8)(intptr_t)(ws+3472);
	i8 v2385 = *(i8*)(intptr_t)v2384;
	i8 v2386 = (i8)(intptr_t)(ws+3488);
	i8 v2387 = *(i8*)(intptr_t)v2386;
	i8 v2388 = v2387+(+32);
	*(i8*)(intptr_t)v2388 = v2385;

	i8 v2389 = (i8)(intptr_t)(ws+3480);
	i2 v2390 = *(i2*)(intptr_t)v2389;
	i8 v2391 = (i8)(intptr_t)(ws+3488);
	i8 v2392 = *(i8*)(intptr_t)v2391;
	*(i2*)(intptr_t)v2392 = v2390;

	i8 v2393 = (i8)(intptr_t)(ws+3482);
	i2 v2394 = *(i2*)(intptr_t)v2393;
	i8 v2395 = (i8)(intptr_t)(ws+3488);
	i8 v2396 = *(i8*)(intptr_t)v2395;
	i8 v2397 = v2396+(+2);
	*(i2*)(intptr_t)v2397 = v2394;

	i8 v2398 = (i8)(intptr_t)(ws+3484);
	i2 v2399 = *(i2*)(intptr_t)v2398;
	i8 v2400 = (i8)(intptr_t)(ws+3488);
	i8 v2401 = *(i8*)(intptr_t)v2400;
	i8 v2402 = v2401+(+4);
	*(i2*)(intptr_t)v2402 = v2399;

	i8 v2403 = (i8)(intptr_t)(ws+3486);
	i1 v2404 = *(i1*)(intptr_t)v2403;
	i8 v2405 = (i8)(intptr_t)(ws+3488);
	i8 v2406 = *(i8*)(intptr_t)v2405;
	i8 v2407 = v2406+(+6);
	*(i1*)(intptr_t)v2407 = v2404;

endsub:;
	*p2357 = *(i8*)(intptr_t)(ws+3488);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+3264 length ws+16
void f108_MidEndfile(i8* p2408 /* m */) {

	i1 v2409 = (i1)+3;
	i8 v2410 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2411;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2410)(&v2411, v2409);

	i8 v2412 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2412 = v2411;

	i8 v2413 = (i8)(intptr_t)(ws+3272);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v2415 = v2414;

endsub:;
	*p2408 = *(i8*)(intptr_t)(ws+3264);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3392 length ws+16
void f109_MidEndinit(i8* p2416 /* m */) {

	i1 v2417 = (i1)+15;
	i8 v2418 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2419;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2418)(&v2419, v2417);

	i8 v2420 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2420 = v2419;

	i8 v2421 = (i8)(intptr_t)(ws+3400);
	i8 v2422 = *(i8*)(intptr_t)v2421;
	i8 v2423 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v2423 = v2422;

endsub:;
	*p2416 = *(i8*)(intptr_t)(ws+3392);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3408 length ws+24
void f110_MidStartsub(i8* p2424 /* m */, i8 p2425 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p2425; /* subr */

	i1 v2426 = (i1)+4;
	i8 v2427 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2428;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2427)(&v2428, v2426);

	i8 v2429 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2429 = v2428;

	i8 v2430 = (i8)(intptr_t)(ws+3424);
	i8 v2431 = *(i8*)(intptr_t)v2430;
	i8 v2432 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2432 = v2431;

	i8 v2433 = (i8)(intptr_t)(ws+3408);
	i8 v2434 = *(i8*)(intptr_t)v2433;
	i8 v2435 = (i8)(intptr_t)(ws+3416);
	i8 v2436 = *(i8*)(intptr_t)v2435;
	*(i8*)(intptr_t)v2436 = v2434;

endsub:;
	*p2424 = *(i8*)(intptr_t)(ws+3416);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitsubref workspace at ws+3448 length ws+24
void f111_MidInitsubref(i8* p2437 /* m */, i8 p2438 /* subr */) {
	*(i8*)(intptr_t)(ws+3448) = p2438; /* subr */

	i1 v2439 = (i1)+14;
	i8 v2440 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2441;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2440)(&v2441, v2439);

	i8 v2442 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2442 = v2441;

	i8 v2443 = (i8)(intptr_t)(ws+3464);
	i8 v2444 = *(i8*)(intptr_t)v2443;
	i8 v2445 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2445 = v2444;

	i8 v2446 = (i8)(intptr_t)(ws+3448);
	i8 v2447 = *(i8*)(intptr_t)v2446;
	i8 v2448 = (i8)(intptr_t)(ws+3456);
	i8 v2449 = *(i8*)(intptr_t)v2448;
	*(i8*)(intptr_t)v2449 = v2447;

endsub:;
	*p2437 = *(i8*)(intptr_t)(ws+3456);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3592 length ws+24
void f113_MidConstant(i8* p2478 /* m */, i4 p2479 /* value */) {
	*(i4*)(intptr_t)(ws+3592) = p2479; /* value */

	i1 v2480 = (i1)+40;
	i8 v2481 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2482;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2481)(&v2482, v2480);

	i8 v2483 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v2483 = v2482;

	i8 v2484 = (i8)(intptr_t)(ws+3608);
	i8 v2485 = *(i8*)(intptr_t)v2484;
	i8 v2486 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v2486 = v2485;

	i8 v2487 = (i8)(intptr_t)(ws+3592);
	i4 v2488 = *(i4*)(intptr_t)v2487;
	i8 v2489 = (i8)(intptr_t)(ws+3600);
	i8 v2490 = *(i8*)(intptr_t)v2489;
	*(i4*)(intptr_t)v2490 = v2488;

endsub:;
	*p2478 = *(i8*)(intptr_t)(ws+3600);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3416 length ws+32
void f114_MidEndcase(i8* p2491 /* m */, i1 p2492 /* width */) {
	*(i1*)(intptr_t)(ws+3416) = p2492; /* width */

	i8 v2493 = (i8)(intptr_t)(ws+3416);
	i1 v2494 = *(i1*)(intptr_t)v2493;
	i8 v2495 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2496;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2495)(&v2496, v2494);

	i8 v2497 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v2497 = v2496;

	i8 v2498 = (i8)(intptr_t)(ws+3432);
	i1 v2499 = *(i1*)(intptr_t)v2498;
	i1 v2500 = v2499+(+81);
	i8 v2501 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2502;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2501)(&v2502, v2500);

	i8 v2503 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v2503 = v2502;

	i8 v2504 = (i8)(intptr_t)(ws+3440);
	i8 v2505 = *(i8*)(intptr_t)v2504;
	i8 v2506 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2506 = v2505;

endsub:;
	*p2491 = *(i8*)(intptr_t)(ws+3424);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3392 length ws+40
void f115_MidBand(i8* p2507 /* m */, i1 p2508 /* negated */, i2 p2509 /* fallthrough */, i2 p2510 /* falselabel */, i2 p2511 /* truelabel */, i8 p2512 /* right */, i8 p2513 /* left */) {
	*(i8*)(intptr_t)(ws+3392) = p2513; /* left */
	*(i8*)(intptr_t)(ws+3400) = p2512; /* right */
	*(i2*)(intptr_t)(ws+3408) = p2511; /* truelabel */
	*(i2*)(intptr_t)(ws+3410) = p2510; /* falselabel */
	*(i2*)(intptr_t)(ws+3412) = p2509; /* fallthrough */
	*(i1*)(intptr_t)(ws+3414) = p2508; /* negated */

	i1 v2514 = (i1)+54;
	i8 v2515 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2516;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2515)(&v2516, v2514);

	i8 v2517 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2517 = v2516;

	i8 v2518 = (i8)(intptr_t)(ws+3424);
	i8 v2519 = *(i8*)(intptr_t)v2518;
	i8 v2520 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2520 = v2519;

	i8 v2521 = (i8)(intptr_t)(ws+3392);
	i8 v2522 = *(i8*)(intptr_t)v2521;
	i8 v2523 = (i8)(intptr_t)(ws+3416);
	i8 v2524 = *(i8*)(intptr_t)v2523;
	i8 v2525 = v2524+(+24);
	*(i8*)(intptr_t)v2525 = v2522;

	i8 v2526 = (i8)(intptr_t)(ws+3400);
	i8 v2527 = *(i8*)(intptr_t)v2526;
	i8 v2528 = (i8)(intptr_t)(ws+3416);
	i8 v2529 = *(i8*)(intptr_t)v2528;
	i8 v2530 = v2529+(+32);
	*(i8*)(intptr_t)v2530 = v2527;

	i8 v2531 = (i8)(intptr_t)(ws+3408);
	i2 v2532 = *(i2*)(intptr_t)v2531;
	i8 v2533 = (i8)(intptr_t)(ws+3416);
	i8 v2534 = *(i8*)(intptr_t)v2533;
	*(i2*)(intptr_t)v2534 = v2532;

	i8 v2535 = (i8)(intptr_t)(ws+3410);
	i2 v2536 = *(i2*)(intptr_t)v2535;
	i8 v2537 = (i8)(intptr_t)(ws+3416);
	i8 v2538 = *(i8*)(intptr_t)v2537;
	i8 v2539 = v2538+(+2);
	*(i2*)(intptr_t)v2539 = v2536;

	i8 v2540 = (i8)(intptr_t)(ws+3412);
	i2 v2541 = *(i2*)(intptr_t)v2540;
	i8 v2542 = (i8)(intptr_t)(ws+3416);
	i8 v2543 = *(i8*)(intptr_t)v2542;
	i8 v2544 = v2543+(+4);
	*(i2*)(intptr_t)v2544 = v2541;

	i8 v2545 = (i8)(intptr_t)(ws+3414);
	i1 v2546 = *(i1*)(intptr_t)v2545;
	i8 v2547 = (i8)(intptr_t)(ws+3416);
	i8 v2548 = *(i8*)(intptr_t)v2547;
	i8 v2549 = v2548+(+6);
	*(i1*)(intptr_t)v2549 = v2546;

endsub:;
	*p2507 = *(i8*)(intptr_t)(ws+3416);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3416 length ws+40
void f116_MidWhencase(i8* p2550 /* m */, i2 p2551 /* falselabel */, i4 p2552 /* value */, i1 p2553 /* width */) {
	*(i1*)(intptr_t)(ws+3416) = p2553; /* width */
	*(i4*)(intptr_t)(ws+3420) = p2552; /* value */
	*(i2*)(intptr_t)(ws+3424) = p2551; /* falselabel */

	i8 v2554 = (i8)(intptr_t)(ws+3416);
	i1 v2555 = *(i1*)(intptr_t)v2554;
	i8 v2556 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2557;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2556)(&v2557, v2555);

	i8 v2558 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v2558 = v2557;

	i8 v2559 = (i8)(intptr_t)(ws+3440);
	i1 v2560 = *(i1*)(intptr_t)v2559;
	i1 v2561 = v2560+(+76);
	i8 v2562 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2563;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2562)(&v2563, v2561);

	i8 v2564 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2564 = v2563;

	i8 v2565 = (i8)(intptr_t)(ws+3448);
	i8 v2566 = *(i8*)(intptr_t)v2565;
	i8 v2567 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2567 = v2566;

	i8 v2568 = (i8)(intptr_t)(ws+3420);
	i4 v2569 = *(i4*)(intptr_t)v2568;
	i8 v2570 = (i8)(intptr_t)(ws+3432);
	i8 v2571 = *(i8*)(intptr_t)v2570;
	*(i4*)(intptr_t)v2571 = v2569;

	i8 v2572 = (i8)(intptr_t)(ws+3424);
	i2 v2573 = *(i2*)(intptr_t)v2572;
	i8 v2574 = (i8)(intptr_t)(ws+3432);
	i8 v2575 = *(i8*)(intptr_t)v2574;
	i8 v2576 = v2575+(+4);
	*(i2*)(intptr_t)v2576 = v2573;

endsub:;
	*p2550 = *(i8*)(intptr_t)(ws+3432);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3416 length ws+64
void f118_MidArg(i8* p2604 /* m */, i1 p2605 /* remaining */, i8 p2606 /* subr */, i8 p2607 /* right */, i8 p2608 /* left */, i1 p2609 /* width */) {
	*(i1*)(intptr_t)(ws+3416) = p2609; /* width */
	*(i8*)(intptr_t)(ws+3424) = p2608; /* left */
	*(i8*)(intptr_t)(ws+3432) = p2607; /* right */
	*(i8*)(intptr_t)(ws+3440) = p2606; /* subr */
	*(i1*)(intptr_t)(ws+3448) = p2605; /* remaining */

	i8 v2610 = (i8)(intptr_t)(ws+3416);
	i1 v2611 = *(i1*)(intptr_t)v2610;
	i8 v2612 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2613;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2612)(&v2613, v2611);

	i8 v2614 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v2614 = v2613;

	i8 v2615 = (i8)(intptr_t)(ws+3464);
	i1 v2616 = *(i1*)(intptr_t)v2615;
	i1 v2617 = v2616+(+30);
	i8 v2618 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2619;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2618)(&v2619, v2617);

	i8 v2620 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v2620 = v2619;

	i8 v2621 = (i8)(intptr_t)(ws+3472);
	i8 v2622 = *(i8*)(intptr_t)v2621;
	i8 v2623 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v2623 = v2622;

	i8 v2624 = (i8)(intptr_t)(ws+3424);
	i8 v2625 = *(i8*)(intptr_t)v2624;
	i8 v2626 = (i8)(intptr_t)(ws+3456);
	i8 v2627 = *(i8*)(intptr_t)v2626;
	i8 v2628 = v2627+(+24);
	*(i8*)(intptr_t)v2628 = v2625;

	i8 v2629 = (i8)(intptr_t)(ws+3432);
	i8 v2630 = *(i8*)(intptr_t)v2629;
	i8 v2631 = (i8)(intptr_t)(ws+3456);
	i8 v2632 = *(i8*)(intptr_t)v2631;
	i8 v2633 = v2632+(+32);
	*(i8*)(intptr_t)v2633 = v2630;

	i8 v2634 = (i8)(intptr_t)(ws+3440);
	i8 v2635 = *(i8*)(intptr_t)v2634;
	i8 v2636 = (i8)(intptr_t)(ws+3456);
	i8 v2637 = *(i8*)(intptr_t)v2636;
	*(i8*)(intptr_t)v2637 = v2635;

	i8 v2638 = (i8)(intptr_t)(ws+3448);
	i1 v2639 = *(i1*)(intptr_t)v2638;
	i8 v2640 = (i8)(intptr_t)(ws+3456);
	i8 v2641 = *(i8*)(intptr_t)v2640;
	i8 v2642 = v2641+(+8);
	*(i1*)(intptr_t)v2642 = v2639;

endsub:;
	*p2604 = *(i8*)(intptr_t)(ws+3456);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3488 length ws+40
void f119_MidCall(i8* p2643 /* m */, i8 p2644 /* subr */, i8 p2645 /* right */, i8 p2646 /* left */) {
	*(i8*)(intptr_t)(ws+3488) = p2646; /* left */
	*(i8*)(intptr_t)(ws+3496) = p2645; /* right */
	*(i8*)(intptr_t)(ws+3504) = p2644; /* subr */

	i1 v2647 = (i1)+29;
	i8 v2648 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2649;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2648)(&v2649, v2647);

	i8 v2650 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v2650 = v2649;

	i8 v2651 = (i8)(intptr_t)(ws+3520);
	i8 v2652 = *(i8*)(intptr_t)v2651;
	i8 v2653 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v2653 = v2652;

	i8 v2654 = (i8)(intptr_t)(ws+3488);
	i8 v2655 = *(i8*)(intptr_t)v2654;
	i8 v2656 = (i8)(intptr_t)(ws+3512);
	i8 v2657 = *(i8*)(intptr_t)v2656;
	i8 v2658 = v2657+(+24);
	*(i8*)(intptr_t)v2658 = v2655;

	i8 v2659 = (i8)(intptr_t)(ws+3496);
	i8 v2660 = *(i8*)(intptr_t)v2659;
	i8 v2661 = (i8)(intptr_t)(ws+3512);
	i8 v2662 = *(i8*)(intptr_t)v2661;
	i8 v2663 = v2662+(+32);
	*(i8*)(intptr_t)v2663 = v2660;

	i8 v2664 = (i8)(intptr_t)(ws+3504);
	i8 v2665 = *(i8*)(intptr_t)v2664;
	i8 v2666 = (i8)(intptr_t)(ws+3512);
	i8 v2667 = *(i8*)(intptr_t)v2666;
	*(i8*)(intptr_t)v2667 = v2665;

endsub:;
	*p2643 = *(i8*)(intptr_t)(ws+3512);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3472 length ws+24
void f120_MidLabel(i8* p2668 /* m */, i2 p2669 /* label */) {
	*(i2*)(intptr_t)(ws+3472) = p2669; /* label */

	i1 v2670 = (i1)+26;
	i8 v2671 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2672;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2671)(&v2672, v2670);

	i8 v2673 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v2673 = v2672;

	i8 v2674 = (i8)(intptr_t)(ws+3488);
	i8 v2675 = *(i8*)(intptr_t)v2674;
	i8 v2676 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2676 = v2675;

	i8 v2677 = (i8)(intptr_t)(ws+3472);
	i2 v2678 = *(i2*)(intptr_t)v2677;
	i8 v2679 = (i8)(intptr_t)(ws+3480);
	i8 v2680 = *(i8*)(intptr_t)v2679;
	*(i2*)(intptr_t)v2680 = v2678;

endsub:;
	*p2668 = *(i8*)(intptr_t)(ws+3480);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsubref workspace at ws+3416 length ws+24
void f121_MidAsmsubref(i8* p2681 /* m */, i8 p2682 /* subr */) {
	*(i8*)(intptr_t)(ws+3416) = p2682; /* subr */

	i1 v2683 = (i1)+21;
	i8 v2684 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2685;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2684)(&v2685, v2683);

	i8 v2686 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2686 = v2685;

	i8 v2687 = (i8)(intptr_t)(ws+3432);
	i8 v2688 = *(i8*)(intptr_t)v2687;
	i8 v2689 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2689 = v2688;

	i8 v2690 = (i8)(intptr_t)(ws+3416);
	i8 v2691 = *(i8*)(intptr_t)v2690;
	i8 v2692 = (i8)(intptr_t)(ws+3424);
	i8 v2693 = *(i8*)(intptr_t)v2692;
	*(i8*)(intptr_t)v2693 = v2691;

endsub:;
	*p2681 = *(i8*)(intptr_t)(ws+3424);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3400 length ws+24
void f122_MidString(i8* p2694 /* m */, i8 p2695 /* text */) {
	*(i8*)(intptr_t)(ws+3400) = p2695; /* text */

	i1 v2696 = (i1)+41;
	i8 v2697 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2698;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2697)(&v2698, v2696);

	i8 v2699 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v2699 = v2698;

	i8 v2700 = (i8)(intptr_t)(ws+3416);
	i8 v2701 = *(i8*)(intptr_t)v2700;
	i8 v2702 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2702 = v2701;

	i8 v2703 = (i8)(intptr_t)(ws+3400);
	i8 v2704 = *(i8*)(intptr_t)v2703;
	i8 v2705 = (i8)(intptr_t)(ws+3408);
	i8 v2706 = *(i8*)(intptr_t)v2705;
	*(i8*)(intptr_t)v2706 = v2704;

endsub:;
	*p2694 = *(i8*)(intptr_t)(ws+3408);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitaddress workspace at ws+3448 length ws+32
void f125_MidInitaddress(i8* p2757 /* m */, i2 p2758 /* off */, i8 p2759 /* sym */) {
	*(i8*)(intptr_t)(ws+3448) = p2759; /* sym */
	*(i2*)(intptr_t)(ws+3456) = p2758; /* off */

	i1 v2760 = (i1)+13;
	i8 v2761 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2762;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2761)(&v2762, v2760);

	i8 v2763 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v2763 = v2762;

	i8 v2764 = (i8)(intptr_t)(ws+3472);
	i8 v2765 = *(i8*)(intptr_t)v2764;
	i8 v2766 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v2766 = v2765;

	i8 v2767 = (i8)(intptr_t)(ws+3448);
	i8 v2768 = *(i8*)(intptr_t)v2767;
	i8 v2769 = (i8)(intptr_t)(ws+3464);
	i8 v2770 = *(i8*)(intptr_t)v2769;
	*(i8*)(intptr_t)v2770 = v2768;

	i8 v2771 = (i8)(intptr_t)(ws+3456);
	i2 v2772 = *(i2*)(intptr_t)v2771;
	i8 v2773 = (i8)(intptr_t)(ws+3464);
	i8 v2774 = *(i8*)(intptr_t)v2773;
	i8 v2775 = v2774+(+8);
	*(i2*)(intptr_t)v2775 = v2772;

endsub:;
	*p2757 = *(i8*)(intptr_t)(ws+3464);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3416 length ws+40
void f126_MidStartcase(i8* p2776 /* m */, i8 p2777 /* left */, i1 p2778 /* width */) {
	*(i1*)(intptr_t)(ws+3416) = p2778; /* width */
	*(i8*)(intptr_t)(ws+3424) = p2777; /* left */

	i8 v2779 = (i8)(intptr_t)(ws+3416);
	i1 v2780 = *(i1*)(intptr_t)v2779;
	i8 v2781 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2782;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2781)(&v2782, v2780);

	i8 v2783 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v2783 = v2782;

	i8 v2784 = (i8)(intptr_t)(ws+3440);
	i1 v2785 = *(i1*)(intptr_t)v2784;
	i1 v2786 = v2785+(+71);
	i8 v2787 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2788;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2787)(&v2788, v2786);

	i8 v2789 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v2789 = v2788;

	i8 v2790 = (i8)(intptr_t)(ws+3448);
	i8 v2791 = *(i8*)(intptr_t)v2790;
	i8 v2792 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2792 = v2791;

	i8 v2793 = (i8)(intptr_t)(ws+3424);
	i8 v2794 = *(i8*)(intptr_t)v2793;
	i8 v2795 = (i8)(intptr_t)(ws+3432);
	i8 v2796 = *(i8*)(intptr_t)v2795;
	i8 v2797 = v2796+(+24);
	*(i8*)(intptr_t)v2797 = v2794;

endsub:;
	*p2776 = *(i8*)(intptr_t)(ws+3432);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+3264 length ws+16
void f127_MidStartfile(i8* p2798 /* m */) {

	i1 v2799 = (i1)+2;
	i8 v2800 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2801;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2800)(&v2801, v2799);

	i8 v2802 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2802 = v2801;

	i8 v2803 = (i8)(intptr_t)(ws+3272);
	i8 v2804 = *(i8*)(intptr_t)v2803;
	i8 v2805 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v2805 = v2804;

endsub:;
	*p2798 = *(i8*)(intptr_t)(ws+3264);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3448 length ws+56
void f128_MidBeq(i8* p2806 /* m */, i1 p2807 /* negated */, i2 p2808 /* fallthrough */, i2 p2809 /* falselabel */, i2 p2810 /* truelabel */, i8 p2811 /* right */, i8 p2812 /* left */, i1 p2813 /* width */) {
	*(i1*)(intptr_t)(ws+3448) = p2813; /* width */
	*(i8*)(intptr_t)(ws+3456) = p2812; /* left */
	*(i8*)(intptr_t)(ws+3464) = p2811; /* right */
	*(i2*)(intptr_t)(ws+3472) = p2810; /* truelabel */
	*(i2*)(intptr_t)(ws+3474) = p2809; /* falselabel */
	*(i2*)(intptr_t)(ws+3476) = p2808; /* fallthrough */
	*(i1*)(intptr_t)(ws+3478) = p2807; /* negated */

	i8 v2814 = (i8)(intptr_t)(ws+3448);
	i1 v2815 = *(i1*)(intptr_t)v2814;
	i8 v2816 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v2817;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2816)(&v2817, v2815);

	i8 v2818 = (i8)(intptr_t)(ws+3488);
	*(i1*)(intptr_t)v2818 = v2817;

	i8 v2819 = (i8)(intptr_t)(ws+3488);
	i1 v2820 = *(i1*)(intptr_t)v2819;
	i1 v2821 = v2820+(+56);
	i8 v2822 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2823;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2822)(&v2823, v2821);

	i8 v2824 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v2824 = v2823;

	i8 v2825 = (i8)(intptr_t)(ws+3496);
	i8 v2826 = *(i8*)(intptr_t)v2825;
	i8 v2827 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v2827 = v2826;

	i8 v2828 = (i8)(intptr_t)(ws+3456);
	i8 v2829 = *(i8*)(intptr_t)v2828;
	i8 v2830 = (i8)(intptr_t)(ws+3480);
	i8 v2831 = *(i8*)(intptr_t)v2830;
	i8 v2832 = v2831+(+24);
	*(i8*)(intptr_t)v2832 = v2829;

	i8 v2833 = (i8)(intptr_t)(ws+3464);
	i8 v2834 = *(i8*)(intptr_t)v2833;
	i8 v2835 = (i8)(intptr_t)(ws+3480);
	i8 v2836 = *(i8*)(intptr_t)v2835;
	i8 v2837 = v2836+(+32);
	*(i8*)(intptr_t)v2837 = v2834;

	i8 v2838 = (i8)(intptr_t)(ws+3472);
	i2 v2839 = *(i2*)(intptr_t)v2838;
	i8 v2840 = (i8)(intptr_t)(ws+3480);
	i8 v2841 = *(i8*)(intptr_t)v2840;
	*(i2*)(intptr_t)v2841 = v2839;

	i8 v2842 = (i8)(intptr_t)(ws+3474);
	i2 v2843 = *(i2*)(intptr_t)v2842;
	i8 v2844 = (i8)(intptr_t)(ws+3480);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	i8 v2846 = v2845+(+2);
	*(i2*)(intptr_t)v2846 = v2843;

	i8 v2847 = (i8)(intptr_t)(ws+3476);
	i2 v2848 = *(i2*)(intptr_t)v2847;
	i8 v2849 = (i8)(intptr_t)(ws+3480);
	i8 v2850 = *(i8*)(intptr_t)v2849;
	i8 v2851 = v2850+(+4);
	*(i2*)(intptr_t)v2851 = v2848;

	i8 v2852 = (i8)(intptr_t)(ws+3478);
	i1 v2853 = *(i1*)(intptr_t)v2852;
	i8 v2854 = (i8)(intptr_t)(ws+3480);
	i8 v2855 = *(i8*)(intptr_t)v2854;
	i8 v2856 = v2855+(+6);
	*(i1*)(intptr_t)v2856 = v2853;

endsub:;
	*p2806 = *(i8*)(intptr_t)(ws+3480);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3416 length ws+24
void f132_MidJump(i8* p2941 /* m */, i2 p2942 /* label */) {
	*(i2*)(intptr_t)(ws+3416) = p2942; /* label */

	i1 v2943 = (i1)+27;
	i8 v2944 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v2945;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2944)(&v2945, v2943);

	i8 v2946 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2946 = v2945;

	i8 v2947 = (i8)(intptr_t)(ws+3432);
	i8 v2948 = *(i8*)(intptr_t)v2947;
	i8 v2949 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2949 = v2948;

	i8 v2950 = (i8)(intptr_t)(ws+3416);
	i2 v2951 = *(i2*)(intptr_t)v2950;
	i8 v2952 = (i8)(intptr_t)(ws+3424);
	i8 v2953 = *(i8*)(intptr_t)v2952;
	*(i2*)(intptr_t)v2953 = v2951;

endsub:;
	*p2941 = *(i8*)(intptr_t)(ws+3424);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3408 length ws+24
void f136_MidEndsub(i8* p3036 /* m */, i8 p3037 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p3037; /* subr */

	i1 v3038 = (i1)+5;
	i8 v3039 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3040;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3039)(&v3040, v3038);

	i8 v3041 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3041 = v3040;

	i8 v3042 = (i8)(intptr_t)(ws+3424);
	i8 v3043 = *(i8*)(intptr_t)v3042;
	i8 v3044 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3044 = v3043;

	i8 v3045 = (i8)(intptr_t)(ws+3408);
	i8 v3046 = *(i8*)(intptr_t)v3045;
	i8 v3047 = (i8)(intptr_t)(ws+3416);
	i8 v3048 = *(i8*)(intptr_t)v3047;
	*(i8*)(intptr_t)v3048 = v3046;

endsub:;
	*p3036 = *(i8*)(intptr_t)(ws+3416);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3416 length ws+24
void f139_MidAsmvalue(i8* p3105 /* m */, i4 p3106 /* value */) {
	*(i4*)(intptr_t)(ws+3416) = p3106; /* value */

	i1 v3107 = (i1)+22;
	i8 v3108 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3109;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3108)(&v3109, v3107);

	i8 v3110 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3110 = v3109;

	i8 v3111 = (i8)(intptr_t)(ws+3432);
	i8 v3112 = *(i8*)(intptr_t)v3111;
	i8 v3113 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3113 = v3112;

	i8 v3114 = (i8)(intptr_t)(ws+3416);
	i4 v3115 = *(i4*)(intptr_t)v3114;
	i8 v3116 = (i8)(intptr_t)(ws+3424);
	i8 v3117 = *(i8*)(intptr_t)v3116;
	*(i4*)(intptr_t)v3117 = v3115;

endsub:;
	*p3105 = *(i8*)(intptr_t)(ws+3424);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3456 length ws+56
void f141_MidBltu(i8* p3146 /* m */, i1 p3147 /* negated */, i2 p3148 /* fallthrough */, i2 p3149 /* falselabel */, i2 p3150 /* truelabel */, i8 p3151 /* right */, i8 p3152 /* left */, i1 p3153 /* width */) {
	*(i1*)(intptr_t)(ws+3456) = p3153; /* width */
	*(i8*)(intptr_t)(ws+3464) = p3152; /* left */
	*(i8*)(intptr_t)(ws+3472) = p3151; /* right */
	*(i2*)(intptr_t)(ws+3480) = p3150; /* truelabel */
	*(i2*)(intptr_t)(ws+3482) = p3149; /* falselabel */
	*(i2*)(intptr_t)(ws+3484) = p3148; /* fallthrough */
	*(i1*)(intptr_t)(ws+3486) = p3147; /* negated */

	i8 v3154 = (i8)(intptr_t)(ws+3456);
	i1 v3155 = *(i1*)(intptr_t)v3154;
	i8 v3156 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3157;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3156)(&v3157, v3155);

	i8 v3158 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3158 = v3157;

	i8 v3159 = (i8)(intptr_t)(ws+3496);
	i1 v3160 = *(i1*)(intptr_t)v3159;
	i1 v3161 = v3160+(+66);
	i8 v3162 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3163;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3162)(&v3163, v3161);

	i8 v3164 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3164 = v3163;

	i8 v3165 = (i8)(intptr_t)(ws+3504);
	i8 v3166 = *(i8*)(intptr_t)v3165;
	i8 v3167 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v3167 = v3166;

	i8 v3168 = (i8)(intptr_t)(ws+3464);
	i8 v3169 = *(i8*)(intptr_t)v3168;
	i8 v3170 = (i8)(intptr_t)(ws+3488);
	i8 v3171 = *(i8*)(intptr_t)v3170;
	i8 v3172 = v3171+(+24);
	*(i8*)(intptr_t)v3172 = v3169;

	i8 v3173 = (i8)(intptr_t)(ws+3472);
	i8 v3174 = *(i8*)(intptr_t)v3173;
	i8 v3175 = (i8)(intptr_t)(ws+3488);
	i8 v3176 = *(i8*)(intptr_t)v3175;
	i8 v3177 = v3176+(+32);
	*(i8*)(intptr_t)v3177 = v3174;

	i8 v3178 = (i8)(intptr_t)(ws+3480);
	i2 v3179 = *(i2*)(intptr_t)v3178;
	i8 v3180 = (i8)(intptr_t)(ws+3488);
	i8 v3181 = *(i8*)(intptr_t)v3180;
	*(i2*)(intptr_t)v3181 = v3179;

	i8 v3182 = (i8)(intptr_t)(ws+3482);
	i2 v3183 = *(i2*)(intptr_t)v3182;
	i8 v3184 = (i8)(intptr_t)(ws+3488);
	i8 v3185 = *(i8*)(intptr_t)v3184;
	i8 v3186 = v3185+(+2);
	*(i2*)(intptr_t)v3186 = v3183;

	i8 v3187 = (i8)(intptr_t)(ws+3484);
	i2 v3188 = *(i2*)(intptr_t)v3187;
	i8 v3189 = (i8)(intptr_t)(ws+3488);
	i8 v3190 = *(i8*)(intptr_t)v3189;
	i8 v3191 = v3190+(+4);
	*(i2*)(intptr_t)v3191 = v3188;

	i8 v3192 = (i8)(intptr_t)(ws+3486);
	i1 v3193 = *(i1*)(intptr_t)v3192;
	i8 v3194 = (i8)(intptr_t)(ws+3488);
	i8 v3195 = *(i8*)(intptr_t)v3194;
	i8 v3196 = v3195+(+6);
	*(i1*)(intptr_t)v3196 = v3193;

endsub:;
	*p3146 = *(i8*)(intptr_t)(ws+3488);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3488 length ws+48
void f142_MidStore(i8* p3197 /* m */, i8 p3198 /* right */, i8 p3199 /* left */, i1 p3200 /* width */) {
	*(i1*)(intptr_t)(ws+3488) = p3200; /* width */
	*(i8*)(intptr_t)(ws+3496) = p3199; /* left */
	*(i8*)(intptr_t)(ws+3504) = p3198; /* right */

	i8 v3201 = (i8)(intptr_t)(ws+3488);
	i1 v3202 = *(i1*)(intptr_t)v3201;
	i8 v3203 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3204;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3203)(&v3204, v3202);

	i8 v3205 = (i8)(intptr_t)(ws+3520);
	*(i1*)(intptr_t)v3205 = v3204;

	i8 v3206 = (i8)(intptr_t)(ws+3520);
	i1 v3207 = *(i1*)(intptr_t)v3206;
	i1 v3208 = v3207+(+49);
	i8 v3209 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3210;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3209)(&v3210, v3208);

	i8 v3211 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3211 = v3210;

	i8 v3212 = (i8)(intptr_t)(ws+3528);
	i8 v3213 = *(i8*)(intptr_t)v3212;
	i8 v3214 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3214 = v3213;

	i8 v3215 = (i8)(intptr_t)(ws+3496);
	i8 v3216 = *(i8*)(intptr_t)v3215;
	i8 v3217 = (i8)(intptr_t)(ws+3512);
	i8 v3218 = *(i8*)(intptr_t)v3217;
	i8 v3219 = v3218+(+24);
	*(i8*)(intptr_t)v3219 = v3216;

	i8 v3220 = (i8)(intptr_t)(ws+3504);
	i8 v3221 = *(i8*)(intptr_t)v3220;
	i8 v3222 = (i8)(intptr_t)(ws+3512);
	i8 v3223 = *(i8*)(intptr_t)v3222;
	i8 v3224 = v3223+(+32);
	*(i8*)(intptr_t)v3224 = v3221;

endsub:;
	*p3197 = *(i8*)(intptr_t)(ws+3512);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3480 length ws+32
void f146_MidInit(i8* p3295 /* m */, i4 p3296 /* value */, i1 p3297 /* width */) {
	*(i1*)(intptr_t)(ws+3480) = p3297; /* width */
	*(i4*)(intptr_t)(ws+3484) = p3296; /* value */

	i8 v3298 = (i8)(intptr_t)(ws+3480);
	i1 v3299 = *(i1*)(intptr_t)v3298;
	i8 v3300 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3301;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3300)(&v3301, v3299);

	i8 v3302 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3302 = v3301;

	i8 v3303 = (i8)(intptr_t)(ws+3496);
	i1 v3304 = *(i1*)(intptr_t)v3303;
	i1 v3305 = v3304+(+7);
	i8 v3306 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3307;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3306)(&v3307, v3305);

	i8 v3308 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3308 = v3307;

	i8 v3309 = (i8)(intptr_t)(ws+3504);
	i8 v3310 = *(i8*)(intptr_t)v3309;
	i8 v3311 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v3311 = v3310;

	i8 v3312 = (i8)(intptr_t)(ws+3484);
	i4 v3313 = *(i4*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(ws+3488);
	i8 v3315 = *(i8*)(intptr_t)v3314;
	*(i4*)(intptr_t)v3315 = v3313;

endsub:;
	*p3295 = *(i8*)(intptr_t)(ws+3488);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3488 length ws+48
void f149_MidPoparg(i8* p3365 /* m */, i1 p3366 /* remaining */, i8 p3367 /* subr */, i1 p3368 /* width */) {
	*(i1*)(intptr_t)(ws+3488) = p3368; /* width */
	*(i8*)(intptr_t)(ws+3496) = p3367; /* subr */
	*(i1*)(intptr_t)(ws+3504) = p3366; /* remaining */

	i8 v3369 = (i8)(intptr_t)(ws+3488);
	i1 v3370 = *(i1*)(intptr_t)v3369;
	i8 v3371 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3372;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3371)(&v3372, v3370);

	i8 v3373 = (i8)(intptr_t)(ws+3520);
	*(i1*)(intptr_t)v3373 = v3372;

	i8 v3374 = (i8)(intptr_t)(ws+3520);
	i1 v3375 = *(i1*)(intptr_t)v3374;
	i1 v3376 = v3375+(+35);
	i8 v3377 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3378;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3377)(&v3378, v3376);

	i8 v3379 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3379 = v3378;

	i8 v3380 = (i8)(intptr_t)(ws+3528);
	i8 v3381 = *(i8*)(intptr_t)v3380;
	i8 v3382 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3382 = v3381;

	i8 v3383 = (i8)(intptr_t)(ws+3496);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i8 v3385 = (i8)(intptr_t)(ws+3512);
	i8 v3386 = *(i8*)(intptr_t)v3385;
	*(i8*)(intptr_t)v3386 = v3384;

	i8 v3387 = (i8)(intptr_t)(ws+3504);
	i1 v3388 = *(i1*)(intptr_t)v3387;
	i8 v3389 = (i8)(intptr_t)(ws+3512);
	i8 v3390 = *(i8*)(intptr_t)v3389;
	i8 v3391 = v3390+(+8);
	*(i1*)(intptr_t)v3391 = v3388;

endsub:;
	*p3365 = *(i8*)(intptr_t)(ws+3512);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3392 length ws+40
void f151_MidBor(i8* p3420 /* m */, i1 p3421 /* negated */, i2 p3422 /* fallthrough */, i2 p3423 /* falselabel */, i2 p3424 /* truelabel */, i8 p3425 /* right */, i8 p3426 /* left */) {
	*(i8*)(intptr_t)(ws+3392) = p3426; /* left */
	*(i8*)(intptr_t)(ws+3400) = p3425; /* right */
	*(i2*)(intptr_t)(ws+3408) = p3424; /* truelabel */
	*(i2*)(intptr_t)(ws+3410) = p3423; /* falselabel */
	*(i2*)(intptr_t)(ws+3412) = p3422; /* fallthrough */
	*(i1*)(intptr_t)(ws+3414) = p3421; /* negated */

	i1 v3427 = (i1)+55;
	i8 v3428 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3429;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3428)(&v3429, v3427);

	i8 v3430 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3430 = v3429;

	i8 v3431 = (i8)(intptr_t)(ws+3424);
	i8 v3432 = *(i8*)(intptr_t)v3431;
	i8 v3433 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3433 = v3432;

	i8 v3434 = (i8)(intptr_t)(ws+3392);
	i8 v3435 = *(i8*)(intptr_t)v3434;
	i8 v3436 = (i8)(intptr_t)(ws+3416);
	i8 v3437 = *(i8*)(intptr_t)v3436;
	i8 v3438 = v3437+(+24);
	*(i8*)(intptr_t)v3438 = v3435;

	i8 v3439 = (i8)(intptr_t)(ws+3400);
	i8 v3440 = *(i8*)(intptr_t)v3439;
	i8 v3441 = (i8)(intptr_t)(ws+3416);
	i8 v3442 = *(i8*)(intptr_t)v3441;
	i8 v3443 = v3442+(+32);
	*(i8*)(intptr_t)v3443 = v3440;

	i8 v3444 = (i8)(intptr_t)(ws+3408);
	i2 v3445 = *(i2*)(intptr_t)v3444;
	i8 v3446 = (i8)(intptr_t)(ws+3416);
	i8 v3447 = *(i8*)(intptr_t)v3446;
	*(i2*)(intptr_t)v3447 = v3445;

	i8 v3448 = (i8)(intptr_t)(ws+3410);
	i2 v3449 = *(i2*)(intptr_t)v3448;
	i8 v3450 = (i8)(intptr_t)(ws+3416);
	i8 v3451 = *(i8*)(intptr_t)v3450;
	i8 v3452 = v3451+(+2);
	*(i2*)(intptr_t)v3452 = v3449;

	i8 v3453 = (i8)(intptr_t)(ws+3412);
	i2 v3454 = *(i2*)(intptr_t)v3453;
	i8 v3455 = (i8)(intptr_t)(ws+3416);
	i8 v3456 = *(i8*)(intptr_t)v3455;
	i8 v3457 = v3456+(+4);
	*(i2*)(intptr_t)v3457 = v3454;

	i8 v3458 = (i8)(intptr_t)(ws+3414);
	i1 v3459 = *(i1*)(intptr_t)v3458;
	i8 v3460 = (i8)(intptr_t)(ws+3416);
	i8 v3461 = *(i8*)(intptr_t)v3460;
	i8 v3462 = v3461+(+6);
	*(i1*)(intptr_t)v3462 = v3459;

endsub:;
	*p3420 = *(i8*)(intptr_t)(ws+3416);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3520 length ws+16
void f152_MidAsmgroupstart(i8* p3463 /* m */) {

	i1 v3464 = (i1)+16;
	i8 v3465 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3466;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3465)(&v3466, v3464);

	i8 v3467 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3467 = v3466;

	i8 v3468 = (i8)(intptr_t)(ws+3528);
	i8 v3469 = *(i8*)(intptr_t)v3468;
	i8 v3470 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v3470 = v3469;

endsub:;
	*p3463 = *(i8*)(intptr_t)(ws+3520);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3392 length ws+16
void f153_MidAsmend(i8* p3471 /* m */) {

	i1 v3472 = (i1)+23;
	i8 v3473 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3474;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3473)(&v3474, v3472);

	i8 v3475 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3475 = v3474;

	i8 v3476 = (i8)(intptr_t)(ws+3400);
	i8 v3477 = *(i8*)(intptr_t)v3476;
	i8 v3478 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3478 = v3477;

endsub:;
	*p3471 = *(i8*)(intptr_t)(ws+3392);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3392 length ws+16
void f154_MidAsmstart(i8* p3479 /* m */) {

	i1 v3480 = (i1)+18;
	i8 v3481 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3482;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3481)(&v3482, v3480);

	i8 v3483 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3483 = v3482;

	i8 v3484 = (i8)(intptr_t)(ws+3400);
	i8 v3485 = *(i8*)(intptr_t)v3484;
	i8 v3486 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3486 = v3485;

endsub:;
	*p3479 = *(i8*)(intptr_t)(ws+3392);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3416 length ws+16
void f155_MidEnd(i8* p3487 /* m */) {

	i1 v3488 = (i1)+1;
	i8 v3489 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3490;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3489)(&v3490, v3488);

	i8 v3491 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3491 = v3490;

	i8 v3492 = (i8)(intptr_t)(ws+3424);
	i8 v3493 = *(i8*)(intptr_t)v3492;
	i8 v3494 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3494 = v3493;

endsub:;
	*p3487 = *(i8*)(intptr_t)(ws+3416);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3392 length ws+32
void f156_MidPair(i8* p3495 /* m */, i8 p3496 /* right */, i8 p3497 /* left */) {
	*(i8*)(intptr_t)(ws+3392) = p3497; /* left */
	*(i8*)(intptr_t)(ws+3400) = p3496; /* right */

	i1 v3498 = (i1)+25;
	i8 v3499 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3500;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3499)(&v3500, v3498);

	i8 v3501 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3501 = v3500;

	i8 v3502 = (i8)(intptr_t)(ws+3416);
	i8 v3503 = *(i8*)(intptr_t)v3502;
	i8 v3504 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3504 = v3503;

	i8 v3505 = (i8)(intptr_t)(ws+3392);
	i8 v3506 = *(i8*)(intptr_t)v3505;
	i8 v3507 = (i8)(intptr_t)(ws+3408);
	i8 v3508 = *(i8*)(intptr_t)v3507;
	i8 v3509 = v3508+(+24);
	*(i8*)(intptr_t)v3509 = v3506;

	i8 v3510 = (i8)(intptr_t)(ws+3400);
	i8 v3511 = *(i8*)(intptr_t)v3510;
	i8 v3512 = (i8)(intptr_t)(ws+3408);
	i8 v3513 = *(i8*)(intptr_t)v3512;
	i8 v3514 = v3513+(+32);
	*(i8*)(intptr_t)v3514 = v3511;

endsub:;
	*p3495 = *(i8*)(intptr_t)(ws+3408);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3408 length ws+24
void f157_MidStartinit(i8* p3515 /* m */, i8 p3516 /* sym */) {
	*(i8*)(intptr_t)(ws+3408) = p3516; /* sym */

	i1 v3517 = (i1)+6;
	i8 v3518 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3519;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3518)(&v3519, v3517);

	i8 v3520 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v3520 = v3519;

	i8 v3521 = (i8)(intptr_t)(ws+3424);
	i8 v3522 = *(i8*)(intptr_t)v3521;
	i8 v3523 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v3523 = v3522;

	i8 v3524 = (i8)(intptr_t)(ws+3408);
	i8 v3525 = *(i8*)(intptr_t)v3524;
	i8 v3526 = (i8)(intptr_t)(ws+3416);
	i8 v3527 = *(i8*)(intptr_t)v3526;
	*(i8*)(intptr_t)v3527 = v3525;

endsub:;
	*p3515 = *(i8*)(intptr_t)(ws+3416);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidSubref workspace at ws+3424 length ws+24
void f158_MidSubref(i8* p3528 /* m */, i8 p3529 /* subr */) {
	*(i8*)(intptr_t)(ws+3424) = p3529; /* subr */

	i1 v3530 = (i1)+43;
	i8 v3531 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3532;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3531)(&v3532, v3530);

	i8 v3533 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v3533 = v3532;

	i8 v3534 = (i8)(intptr_t)(ws+3440);
	i8 v3535 = *(i8*)(intptr_t)v3534;
	i8 v3536 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v3536 = v3535;

	i8 v3537 = (i8)(intptr_t)(ws+3424);
	i8 v3538 = *(i8*)(intptr_t)v3537;
	i8 v3539 = (i8)(intptr_t)(ws+3432);
	i8 v3540 = *(i8*)(intptr_t)v3539;
	*(i8*)(intptr_t)v3540 = v3538;

endsub:;
	*p3528 = *(i8*)(intptr_t)(ws+3432);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3392 length ws+16
void f159_MidReturn(i8* p3541 /* m */) {

	i1 v3542 = (i1)+28;
	i8 v3543 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3544;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3543)(&v3544, v3542);

	i8 v3545 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3545 = v3544;

	i8 v3546 = (i8)(intptr_t)(ws+3400);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i8 v3548 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3548 = v3547;

endsub:;
	*p3541 = *(i8*)(intptr_t)(ws+3392);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3392 length ws+24
void f160_MidAsmtext(i8* p3549 /* m */, i8 p3550 /* text */) {
	*(i8*)(intptr_t)(ws+3392) = p3550; /* text */

	i1 v3551 = (i1)+19;
	i8 v3552 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3553;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3552)(&v3553, v3551);

	i8 v3554 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3554 = v3553;

	i8 v3555 = (i8)(intptr_t)(ws+3408);
	i8 v3556 = *(i8*)(intptr_t)v3555;
	i8 v3557 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3557 = v3556;

	i8 v3558 = (i8)(intptr_t)(ws+3392);
	i8 v3559 = *(i8*)(intptr_t)v3558;
	i8 v3560 = (i8)(intptr_t)(ws+3400);
	i8 v3561 = *(i8*)(intptr_t)v3560;
	*(i8*)(intptr_t)v3561 = v3559;

endsub:;
	*p3549 = *(i8*)(intptr_t)(ws+3400);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3488 length ws+32
void f162_MidAddress(i8* p3590 /* m */, i2 p3591 /* off */, i8 p3592 /* sym */) {
	*(i8*)(intptr_t)(ws+3488) = p3592; /* sym */
	*(i2*)(intptr_t)(ws+3496) = p3591; /* off */

	i1 v3593 = (i1)+42;
	i8 v3594 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3595;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3594)(&v3595, v3593);

	i8 v3596 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3596 = v3595;

	i8 v3597 = (i8)(intptr_t)(ws+3512);
	i8 v3598 = *(i8*)(intptr_t)v3597;
	i8 v3599 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3599 = v3598;

	i8 v3600 = (i8)(intptr_t)(ws+3488);
	i8 v3601 = *(i8*)(intptr_t)v3600;
	i8 v3602 = (i8)(intptr_t)(ws+3504);
	i8 v3603 = *(i8*)(intptr_t)v3602;
	*(i8*)(intptr_t)v3603 = v3601;

	i8 v3604 = (i8)(intptr_t)(ws+3496);
	i2 v3605 = *(i2*)(intptr_t)v3604;
	i8 v3606 = (i8)(intptr_t)(ws+3504);
	i8 v3607 = *(i8*)(intptr_t)v3606;
	i8 v3608 = v3607+(+8);
	*(i2*)(intptr_t)v3608 = v3605;

endsub:;
	*p3590 = *(i8*)(intptr_t)(ws+3504);
}
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitstring workspace at ws+3448 length ws+24
void f163_MidInitstring(i8* p3609 /* m */, i8 p3610 /* text */) {
	*(i8*)(intptr_t)(ws+3448) = p3610; /* text */

	i1 v3611 = (i1)+12;
	i8 v3612 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3613;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3612)(&v3613, v3611);

	i8 v3614 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3614 = v3613;

	i8 v3615 = (i8)(intptr_t)(ws+3464);
	i8 v3616 = *(i8*)(intptr_t)v3615;
	i8 v3617 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v3617 = v3616;

	i8 v3618 = (i8)(intptr_t)(ws+3448);
	i8 v3619 = *(i8*)(intptr_t)v3618;
	i8 v3620 = (i8)(intptr_t)(ws+3456);
	i8 v3621 = *(i8*)(intptr_t)v3620;
	*(i8*)(intptr_t)v3621 = v3619;

endsub:;
	*p3609 = *(i8*)(intptr_t)(ws+3456);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3616 length ws+24
void f103_AllocateNewNode(i8* p3636 /* m */, i1 p3637 /* code */) {
	*(i1*)(intptr_t)(ws+3616) = p3637; /* code */

	i8 v3638 = (i8)(intptr_t)(ws+928);
	i8 v3639 = *(i8*)(intptr_t)v3638;
	i8 v3640 = (i8)+0;
	if (v3639==v3640) goto c02_0248; else goto c02_0247;

c02_0247:;

	i8 v3641 = (i8)(intptr_t)(ws+928);
	i8 v3642 = *(i8*)(intptr_t)v3641;
	i8 v3643 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3643 = v3642;

	i8 v3644 = (i8)(intptr_t)(ws+928);
	i8 v3645 = *(i8*)(intptr_t)v3644;
	i8 v3646 = v3645+(+24);
	i8 v3647 = *(i8*)(intptr_t)v3646;
	i8 v3648 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3648 = v3647;

	i8 v3649 = (i8)(intptr_t)(ws+3624);
	i8 v3650 = *(i8*)(intptr_t)v3649;
	i1 v3651 = (i1)+0;
	i8 v3652 = (i8)+41;
	i8 v3653 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v3653)(v3652, v3651, v3650);

	goto c02_0244;

c02_0248:;

	i8 v3654 = (i8)+41;
	i8 v3655 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v3656;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3655)(&v3656, v3654);

	i8 v3657 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v3657 = v3656;

	i8 v3658 = (i8)(intptr_t)(ws+3632);
	i8 v3659 = *(i8*)(intptr_t)v3658;
	i8 v3660 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v3660 = v3659;

c02_0244:;

	i8 v3661 = (i8)(intptr_t)(ws+3616);
	i1 v3662 = *(i1*)(intptr_t)v3661;
	i8 v3663 = (i8)(intptr_t)(ws+3624);
	i8 v3664 = *(i8*)(intptr_t)v3663;
	i8 v3665 = v3664+(+40);
	*(i1*)(intptr_t)v3665 = v3662;

endsub:;
	*p3636 = *(i8*)(intptr_t)(ws+3624);
}

// FreeNode workspace at ws+3624 length ws+8
void f165_FreeNode(i8 p3666 /* node */) {
	*(i8*)(intptr_t)(ws+3624) = p3666; /* node */

	i8 v3667 = (i8)(intptr_t)(ws+928);
	i8 v3668 = *(i8*)(intptr_t)v3667;
	i8 v3669 = (i8)(intptr_t)(ws+3624);
	i8 v3670 = *(i8*)(intptr_t)v3669;
	i8 v3671 = v3670+(+24);
	*(i8*)(intptr_t)v3671 = v3668;

	i8 v3672 = (i8)(intptr_t)(ws+3624);
	i8 v3673 = *(i8*)(intptr_t)v3672;
	i8 v3674 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3674 = v3673;

endsub:;
}
	void f34_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+3672 length ws+8
void f73_PurgeAllFreeNodes(void) {

c02_0249:;

	i8 v3675 = (i8)(intptr_t)(ws+928);
	i8 v3676 = *(i8*)(intptr_t)v3675;
	i8 v3677 = (i8)+0;
	if (v3676==v3677) goto c02_024e; else goto c02_024d;

c02_024d:;

	i8 v3678 = (i8)(intptr_t)(ws+928);
	i8 v3679 = *(i8*)(intptr_t)v3678;
	i8 v3680 = (i8)(intptr_t)(ws+3672);
	*(i8*)(intptr_t)v3680 = v3679;

	i8 v3681 = (i8)(intptr_t)(ws+928);
	i8 v3682 = *(i8*)(intptr_t)v3681;
	i8 v3683 = v3682+(+24);
	i8 v3684 = *(i8*)(intptr_t)v3683;
	i8 v3685 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3685 = v3684;

	i8 v3686 = (i8)(intptr_t)(ws+3672);
	i8 v3687 = *(i8*)(intptr_t)v3686;
	i8 v3688 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v3688)(v3687);

	goto c02_0249;

c02_024e:;

endsub:;
}

// NodeWidth workspace at ws+3456 length ws+9
void f166_NodeWidth(i1* p3689 /* width */, i8 p3690 /* node */) {
	*(i8*)(intptr_t)(ws+3456) = p3690; /* node */

	i1 v3691 = (i1)+0;
	i8 v3692 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3692 = v3691;

	i8 v3693 = (i8)(intptr_t)(ws+3456);
	i8 v3694 = *(i8*)(intptr_t)v3693;
	i8 v3695 = v3694+(+16);
	i8 v3696 = *(i8*)(intptr_t)v3695;
	i8 v3697 = (i8)+0;
	if (v3696==v3697) goto c02_0253; else goto c02_0252;

c02_0252:;

	i8 v3698 = (i8)(intptr_t)(ws+3456);
	i8 v3699 = *(i8*)(intptr_t)v3698;
	i8 v3700 = v3699+(+16);
	i8 v3701 = *(i8*)(intptr_t)v3700;
	i8 v3702 = v3701+(+48);
	i2 v3703 = *(i2*)(intptr_t)v3702;
	i1 v3704 = v3703;
	i8 v3705 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3705 = v3704;

c02_0253:;

c02_024f:;

endsub:;
	*p3689 = *(i1*)(intptr_t)(ws+3464);
}
const i1 c02_s00f2[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3632 length ws+0
void f167_midcodec_i_bad_fold(void) {

	i8 v3706 = (i8)(intptr_t)c02_s00f2;
	i8 v3707 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3707)(v3706);

endsub:;
}
	void f167_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3472 length ws+24
void f168_FoldConstant1(i4* p3708 /* result */, i8 p3709 /* lhsp */, i1 p3710 /* op */) {
	*(i1*)(intptr_t)(ws+3472) = p3710; /* op */
	*(i8*)(intptr_t)(ws+3480) = p3709; /* lhsp */

	i8 v3711 = (i8)(intptr_t)(ws+3480);
	i8 v3712 = *(i8*)(intptr_t)v3711;
	i4 v3713 = *(i4*)(intptr_t)v3712;
	i8 v3714 = (i8)(intptr_t)(ws+3492);
	*(i4*)(intptr_t)v3714 = v3713;

	i8 v3715 = (i8)(intptr_t)(ws+3472);
	i1 v3716 = *(i1*)(intptr_t)v3715;

	if (v3716 != +106) goto c02_0255;

	i8 v3717 = (i8)(intptr_t)(ws+3492);
	i4 v3718 = *(i4*)(intptr_t)v3717;
	i4 v3719 = ~v3718;
	i8 v3720 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3720 = v3719;

	goto c02_0254;

c02_0255:;

	if (v3716 != +111) goto c02_0256;

	i8 v3721 = (i8)(intptr_t)(ws+3492);
	i4 v3722 = *(i4*)(intptr_t)v3721;
	i4 v3723 = -v3722;
	i8 v3724 = (i8)(intptr_t)(ws+3488);
	*(i4*)(intptr_t)v3724 = v3723;

	goto c02_0254;

c02_0256:;

	i8 v3725 = (i8)(intptr_t)(f167_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3725)();

c02_0254:;


endsub:;
	*p3708 = *(i4*)(intptr_t)(ws+3488);
}
	void f167_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3592 length ws+36
void f169_FoldConstant2(i4* p3726 /* result */, i8 p3727 /* rhsp */, i8 p3728 /* lhsp */, i1 p3729 /* op */) {
	*(i1*)(intptr_t)(ws+3592) = p3729; /* op */
	*(i8*)(intptr_t)(ws+3600) = p3728; /* lhsp */
	*(i8*)(intptr_t)(ws+3608) = p3727; /* rhsp */

	i8 v3730 = (i8)(intptr_t)(ws+3600);
	i8 v3731 = *(i8*)(intptr_t)v3730;
	i4 v3732 = *(i4*)(intptr_t)v3731;
	i8 v3733 = (i8)(intptr_t)(ws+3620);
	*(i4*)(intptr_t)v3733 = v3732;

	i8 v3734 = (i8)(intptr_t)(ws+3608);
	i8 v3735 = *(i8*)(intptr_t)v3734;
	i4 v3736 = *(i4*)(intptr_t)v3735;
	i8 v3737 = (i8)(intptr_t)(ws+3624);
	*(i4*)(intptr_t)v3737 = v3736;

	i8 v3738 = (i8)(intptr_t)(ws+3592);
	i1 v3739 = *(i1*)(intptr_t)v3738;

	if (v3739 != +156) goto c02_0258;

	i8 v3740 = (i8)(intptr_t)(ws+3620);
	i4 v3741 = *(i4*)(intptr_t)v3740;
	i8 v3742 = (i8)(intptr_t)(ws+3624);
	i4 v3743 = *(i4*)(intptr_t)v3742;
	i4 v3744 = v3741+v3743;
	i8 v3745 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3745 = v3744;

	goto c02_0257;

c02_0258:;

	if (v3739 != +131) goto c02_0259;

	i8 v3746 = (i8)(intptr_t)(ws+3620);
	i4 v3747 = *(i4*)(intptr_t)v3746;
	i8 v3748 = (i8)(intptr_t)(ws+3624);
	i4 v3749 = *(i4*)(intptr_t)v3748;
	i4 v3750 = v3747-v3749;
	i8 v3751 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3751 = v3750;

	goto c02_0257;

c02_0259:;

	if (v3739 != +161) goto c02_025a;

	i8 v3752 = (i8)(intptr_t)(ws+3620);
	i4 v3753 = *(i4*)(intptr_t)v3752;
	i8 v3754 = (i8)(intptr_t)(ws+3624);
	i4 v3755 = *(i4*)(intptr_t)v3754;
	i4 v3756 = v3753*v3755;
	i8 v3757 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3757 = v3756;

	goto c02_0257;

c02_025a:;

	if (v3739 != +136) goto c02_025b;

	i8 v3758 = (i8)(intptr_t)(ws+3620);
	i4 v3759 = *(i4*)(intptr_t)v3758;
	i8 v3760 = (i8)(intptr_t)(ws+3624);
	i4 v3761 = *(i4*)(intptr_t)v3760;
	i4 v3762 = v3759/v3761;
	i8 v3763 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3763 = v3762;

	goto c02_0257;

c02_025b:;

	if (v3739 != +141) goto c02_025c;

	i8 v3764 = (i8)(intptr_t)(ws+3620);
	i4 v3765 = *(i4*)(intptr_t)v3764;
	i8 v3766 = (i8)(intptr_t)(ws+3624);
	i4 v3767 = *(i4*)(intptr_t)v3766;
	i4 v3768 = (s4)v3765/(s4)v3767;
	i8 v3769 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3769 = v3768;

	goto c02_0257;

c02_025c:;

	if (v3739 != +146) goto c02_025d;

	i8 v3770 = (i8)(intptr_t)(ws+3620);
	i4 v3771 = *(i4*)(intptr_t)v3770;
	i8 v3772 = (i8)(intptr_t)(ws+3624);
	i4 v3773 = *(i4*)(intptr_t)v3772;
	i4 v3774 = v3771%v3773;
	i8 v3775 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3775 = v3774;

	goto c02_0257;

c02_025d:;

	if (v3739 != +151) goto c02_025e;

	i8 v3776 = (i8)(intptr_t)(ws+3620);
	i4 v3777 = *(i4*)(intptr_t)v3776;
	i8 v3778 = (i8)(intptr_t)(ws+3624);
	i4 v3779 = *(i4*)(intptr_t)v3778;
	i4 v3780 = (s4)v3777%(s4)v3779;
	i8 v3781 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3781 = v3780;

	goto c02_0257;

c02_025e:;

	if (v3739 != +166) goto c02_025f;

	i8 v3782 = (i8)(intptr_t)(ws+3620);
	i4 v3783 = *(i4*)(intptr_t)v3782;
	i8 v3784 = (i8)(intptr_t)(ws+3624);
	i4 v3785 = *(i4*)(intptr_t)v3784;
	i4 v3786 = v3783&v3785;
	i8 v3787 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3787 = v3786;

	goto c02_0257;

c02_025f:;

	if (v3739 != +171) goto c02_0260;

	i8 v3788 = (i8)(intptr_t)(ws+3620);
	i4 v3789 = *(i4*)(intptr_t)v3788;
	i8 v3790 = (i8)(intptr_t)(ws+3624);
	i4 v3791 = *(i4*)(intptr_t)v3790;
	i4 v3792 = v3789|v3791;
	i8 v3793 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3793 = v3792;

	goto c02_0257;

c02_0260:;

	if (v3739 != +176) goto c02_0261;

	i8 v3794 = (i8)(intptr_t)(ws+3620);
	i4 v3795 = *(i4*)(intptr_t)v3794;
	i8 v3796 = (i8)(intptr_t)(ws+3624);
	i4 v3797 = *(i4*)(intptr_t)v3796;
	i4 v3798 = v3795^v3797;
	i8 v3799 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3799 = v3798;

	goto c02_0257;

c02_0261:;

	if (v3739 != +116) goto c02_0262;

	i8 v3800 = (i8)(intptr_t)(ws+3620);
	i4 v3801 = *(i4*)(intptr_t)v3800;
	i8 v3802 = (i8)(intptr_t)(ws+3624);
	i4 v3803 = *(i4*)(intptr_t)v3802;
	i1 v3804 = (s1)(s4)v3803;
	i4 v3805 = ((i4)v3801)<<v3804;
	i8 v3806 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3806 = v3805;

	goto c02_0257;

c02_0262:;

	if (v3739 != +121) goto c02_0263;

	i8 v3807 = (i8)(intptr_t)(ws+3620);
	i4 v3808 = *(i4*)(intptr_t)v3807;
	i8 v3809 = (i8)(intptr_t)(ws+3624);
	i4 v3810 = *(i4*)(intptr_t)v3809;
	i1 v3811 = (s1)(s4)v3810;
	i4 v3812 = ((i4)v3808)>>v3811;
	i8 v3813 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3813 = v3812;

	goto c02_0257;

c02_0263:;

	if (v3739 != +126) goto c02_0264;

	i8 v3814 = (i8)(intptr_t)(ws+3620);
	i4 v3815 = *(i4*)(intptr_t)v3814;
	i8 v3816 = (i8)(intptr_t)(ws+3624);
	i4 v3817 = *(i4*)(intptr_t)v3816;
	i1 v3818 = (s1)(s4)v3817;
	i4 v3819 = ((s4)v3815)>>v3818;
	i8 v3820 = (i8)(intptr_t)(ws+3616);
	*(i4*)(intptr_t)v3820 = v3819;

	goto c02_0257;

c02_0264:;

	i8 v3821 = (i8)(intptr_t)(f167_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3821)();

c02_0257:;


endsub:;
	*p3726 = *(i4*)(intptr_t)(ws+3616);
}
	void f168_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3432 length ws+40
void f170_MidC1Op(i8* p3822 /* result */, i8 p3823 /* lhs */, i1 p3824 /* width */, i1 p3825 /* op */) {
	*(i1*)(intptr_t)(ws+3432) = p3825; /* op */
	*(i1*)(intptr_t)(ws+3433) = p3824; /* width */
	*(i8*)(intptr_t)(ws+3440) = p3823; /* lhs */

	i8 v3826 = (i8)(intptr_t)(ws+3440);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = v3827+(+40);
	i1 v3829 = *(i1*)(intptr_t)v3828;
	i1 v3830 = (i1)+40;
	if (v3829==v3830) goto c02_0268; else goto c02_0269;

c02_0268:;

	i8 v3831 = (i8)(intptr_t)(ws+3432);
	i1 v3832 = *(i1*)(intptr_t)v3831;
	i8 v3833 = (i8)(intptr_t)(ws+3440);
	i8 v3834 = *(i8*)(intptr_t)v3833;
	i8 v3835 = (i8)(intptr_t)(f168_FoldConstant1);
	i4 v3836;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3835)(&v3836, v3834, v3832);

	i8 v3837 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3837 = v3836;

	i8 v3838 = (i8)(intptr_t)(ws+3456);
	i4 v3839 = *(i4*)(intptr_t)v3838;
	i8 v3840 = (i8)(intptr_t)(ws+3440);
	i8 v3841 = *(i8*)(intptr_t)v3840;
	*(i4*)(intptr_t)v3841 = v3839;

	i8 v3842 = (i8)(intptr_t)(ws+3440);
	i8 v3843 = *(i8*)(intptr_t)v3842;
	i8 v3844 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3844 = v3843;

	goto c02_0265;

c02_0269:;

	i8 v3845 = (i8)(intptr_t)(ws+3433);
	i1 v3846 = *(i1*)(intptr_t)v3845;
	i8 v3847 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v3848;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3847)(&v3848, v3846);

	i8 v3849 = (i8)(intptr_t)(ws+3460);
	*(i1*)(intptr_t)v3849 = v3848;

	i8 v3850 = (i8)(intptr_t)(ws+3432);
	i1 v3851 = *(i1*)(intptr_t)v3850;
	i8 v3852 = (i8)(intptr_t)(ws+3460);
	i1 v3853 = *(i1*)(intptr_t)v3852;
	i1 v3854 = v3851+v3853;
	i8 v3855 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v3856;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3855)(&v3856, v3854);

	i8 v3857 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v3857 = v3856;

	i8 v3858 = (i8)(intptr_t)(ws+3464);
	i8 v3859 = *(i8*)(intptr_t)v3858;
	i8 v3860 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3860 = v3859;

	i8 v3861 = (i8)(intptr_t)(ws+3440);
	i8 v3862 = *(i8*)(intptr_t)v3861;
	i8 v3863 = (i8)(intptr_t)(ws+3448);
	i8 v3864 = *(i8*)(intptr_t)v3863;
	i8 v3865 = v3864+(+24);
	*(i8*)(intptr_t)v3865 = v3862;

c02_0265:;

endsub:;
	*p3822 = *(i8*)(intptr_t)(ws+3448);
}

// GetPowerOfTwo workspace at ws+3592 length ws+5
void f171_GetPowerOfTwo(i1* p3866 /* exp */, i4 p3867 /* value */) {
	*(i4*)(intptr_t)(ws+3592) = p3867; /* value */

	i1 v3868 = (i1)+0;
	i8 v3869 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3869 = v3868;

	i4 v3870 = (i4)+0;
	i8 v3871 = (i8)(intptr_t)(ws+3592);
	i4 v3872 = *(i4*)(intptr_t)v3871;
	if ((s4)v3870<(s4)v3872) goto c02_0271; else goto c02_0270;

c02_0271:;

	i8 v3873 = (i8)(intptr_t)(ws+3592);
	i4 v3874 = *(i4*)(intptr_t)v3873;
	i8 v3875 = (i8)(intptr_t)(ws+3592);
	i4 v3876 = *(i4*)(intptr_t)v3875;
	i4 v3877 = v3876+(-1);
	i4 v3878 = v3874&v3877;
	i4 v3879 = (i4)+0;
	if (v3878==v3879) goto c02_026f; else goto c02_0270;

c02_026f:;

c02_0272:;

	i8 v3880 = (i8)(intptr_t)(ws+3592);
	i4 v3881 = *(i4*)(intptr_t)v3880;
	i4 v3882 = (i4)+0;
	if (v3881==v3882) goto c02_0277; else goto c02_0276;

c02_0276:;

	i8 v3883 = (i8)(intptr_t)(ws+3596);
	i1 v3884 = *(i1*)(intptr_t)v3883;
	i1 v3885 = v3884+(+1);
	i8 v3886 = (i8)(intptr_t)(ws+3596);
	*(i1*)(intptr_t)v3886 = v3885;

	i8 v3887 = (i8)(intptr_t)(ws+3592);
	i4 v3888 = *(i4*)(intptr_t)v3887;
	i1 v3889 = (i1)+1;
	i4 v3890 = ((s4)v3888)>>v3889;
	i8 v3891 = (i8)(intptr_t)(ws+3592);
	*(i4*)(intptr_t)v3891 = v3890;

	goto c02_0272;

c02_0277:;

c02_0270:;

c02_026a:;

endsub:;
	*p3866 = *(i1*)(intptr_t)(ws+3596);
}
	void f169_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f171_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f63_Discard(i8 /* node */);
	void f169_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f63_Discard(i8 /* node */);
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3496 length ws+96
void f172_MidC2Op(i8* p3892 /* result */, i8 p3893 /* rhs */, i8 p3894 /* lhs */, i1 p3895 /* width */, i1 p3896 /* op */) {
	*(i1*)(intptr_t)(ws+3496) = p3896; /* op */
	*(i1*)(intptr_t)(ws+3497) = p3895; /* width */
	*(i8*)(intptr_t)(ws+3504) = p3894; /* lhs */
	*(i8*)(intptr_t)(ws+3512) = p3893; /* rhs */

	i8 v3897 = (i8)(intptr_t)(ws+3496);
	i1 v3898 = *(i1*)(intptr_t)v3897;
	i1 v3899 = (i1)+131;
	if (v3898==v3899) goto c02_027f; else goto c02_027e;

c02_027f:;

	i8 v3900 = (i8)(intptr_t)(ws+3512);
	i8 v3901 = *(i8*)(intptr_t)v3900;
	i8 v3902 = v3901+(+40);
	i1 v3903 = *(i1*)(intptr_t)v3902;
	i1 v3904 = (i1)+40;
	if (v3903==v3904) goto c02_027d; else goto c02_027e;

c02_027d:;

	i8 v3905 = (i8)(intptr_t)(ws+3512);
	i8 v3906 = *(i8*)(intptr_t)v3905;
	i4 v3907 = *(i4*)(intptr_t)v3906;
	i4 v3908 = -v3907;
	i8 v3909 = (i8)(intptr_t)(ws+3512);
	i8 v3910 = *(i8*)(intptr_t)v3909;
	*(i4*)(intptr_t)v3910 = v3908;

	i1 v3911 = (i1)+156;
	i8 v3912 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v3912 = v3911;

c02_027e:;

c02_0278:;

	i8 v3913 = (i8)(intptr_t)(ws+3496);
	i1 v3914 = *(i1*)(intptr_t)v3913;
	i1 v3915 = (i1)+156;
	if (v3914<v3915) goto c02_0284; else goto c02_0283;

c02_0283:;

	i8 v3916 = (i8)(intptr_t)(ws+3504);
	i8 v3917 = *(i8*)(intptr_t)v3916;
	i8 v3918 = v3917+(+40);
	i1 v3919 = *(i1*)(intptr_t)v3918;
	i1 v3920 = (i1)+40;
	if (v3919==v3920) goto c02_0288; else goto c02_0289;

c02_0288:;

	i8 v3921 = (i8)(intptr_t)(ws+3504);
	i8 v3922 = *(i8*)(intptr_t)v3921;
	i8 v3923 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3923 = v3922;

	i8 v3924 = (i8)(intptr_t)(ws+3512);
	i8 v3925 = *(i8*)(intptr_t)v3924;
	i8 v3926 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3926 = v3925;

	i8 v3927 = (i8)(intptr_t)(ws+3528);
	i8 v3928 = *(i8*)(intptr_t)v3927;
	i8 v3929 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3929 = v3928;

c02_0289:;

c02_0285:;

	i8 v3930 = (i8)(intptr_t)(ws+3512);
	i8 v3931 = *(i8*)(intptr_t)v3930;
	i8 v3932 = v3931+(+40);
	i1 v3933 = *(i1*)(intptr_t)v3932;
	i1 v3934 = (i1)+40;
	if (v3933==v3934) goto c02_0297; else goto c02_0294;

c02_0297:;

	i8 v3935 = (i8)(intptr_t)(ws+3504);
	i8 v3936 = *(i8*)(intptr_t)v3935;
	i8 v3937 = v3936+(+40);
	i1 v3938 = *(i1*)(intptr_t)v3937;
	i8 v3939 = (i8)(intptr_t)(ws+3496);
	i1 v3940 = *(i1*)(intptr_t)v3939;
	if (v3938<v3940) goto c02_0294; else goto c02_0296;

c02_0296:;

	i8 v3941 = (i8)(intptr_t)(ws+3496);
	i1 v3942 = *(i1*)(intptr_t)v3941;
	i1 v3943 = v3942+(+4);
	i8 v3944 = (i8)(intptr_t)(ws+3504);
	i8 v3945 = *(i8*)(intptr_t)v3944;
	i8 v3946 = v3945+(+40);
	i1 v3947 = *(i1*)(intptr_t)v3946;
	if (v3943<v3947) goto c02_0294; else goto c02_0295;

c02_0295:;

	i8 v3948 = (i8)(intptr_t)(ws+3504);
	i8 v3949 = *(i8*)(intptr_t)v3948;
	i8 v3950 = v3949+(+32);
	i8 v3951 = *(i8*)(intptr_t)v3950;
	i8 v3952 = v3951+(+40);
	i1 v3953 = *(i1*)(intptr_t)v3952;
	i1 v3954 = (i1)+40;
	if (v3953==v3954) goto c02_0293; else goto c02_0294;

c02_0293:;

	i8 v3955 = (i8)(intptr_t)(ws+3496);
	i1 v3956 = *(i1*)(intptr_t)v3955;
	i8 v3957 = (i8)(intptr_t)(ws+3504);
	i8 v3958 = *(i8*)(intptr_t)v3957;
	i8 v3959 = v3958+(+32);
	i8 v3960 = *(i8*)(intptr_t)v3959;
	i8 v3961 = (i8)(intptr_t)(ws+3512);
	i8 v3962 = *(i8*)(intptr_t)v3961;
	i8 v3963 = (i8)(intptr_t)(f169_FoldConstant2);
	i4 v3964;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3963)(&v3964, v3962, v3960, v3956);

	i8 v3965 = (i8)(intptr_t)(ws+3536);
	*(i4*)(intptr_t)v3965 = v3964;

	i8 v3966 = (i8)(intptr_t)(ws+3536);
	i4 v3967 = *(i4*)(intptr_t)v3966;
	i8 v3968 = (i8)(intptr_t)(f113_MidConstant);
	i8 v3969;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3968)(&v3969, v3967);

	i8 v3970 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v3970 = v3969;

	i8 v3971 = (i8)(intptr_t)(ws+3544);
	i8 v3972 = *(i8*)(intptr_t)v3971;
	i8 v3973 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3973 = v3972;

	i8 v3974 = (i8)(intptr_t)(ws+3512);
	i8 v3975 = *(i8*)(intptr_t)v3974;
	i8 v3976 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3976)(v3975);

	i8 v3977 = (i8)(intptr_t)(ws+3528);
	i8 v3978 = *(i8*)(intptr_t)v3977;
	i8 v3979 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v3979 = v3978;

	i8 v3980 = (i8)(intptr_t)(ws+3504);
	i8 v3981 = *(i8*)(intptr_t)v3980;
	i8 v3982 = v3981+(+24);
	i8 v3983 = *(i8*)(intptr_t)v3982;
	i8 v3984 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v3984 = v3983;

	i8 v3985 = (i8)+0;
	i8 v3986 = (i8)(intptr_t)(ws+3504);
	i8 v3987 = *(i8*)(intptr_t)v3986;
	i8 v3988 = v3987+(+24);
	*(i8*)(intptr_t)v3988 = v3985;

	i8 v3989 = (i8)(intptr_t)(ws+3504);
	i8 v3990 = *(i8*)(intptr_t)v3989;
	i8 v3991 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3991)(v3990);

	i8 v3992 = (i8)(intptr_t)(ws+3528);
	i8 v3993 = *(i8*)(intptr_t)v3992;
	i8 v3994 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v3994 = v3993;

c02_0294:;

c02_028a:;

c02_0284:;

c02_0280:;

	i8 v3995 = (i8)(intptr_t)(ws+3504);
	i8 v3996 = *(i8*)(intptr_t)v3995;
	i8 v3997 = v3996+(+40);
	i1 v3998 = *(i1*)(intptr_t)v3997;
	i1 v3999 = (i1)+40;
	if (v3998==v3999) goto c02_029e; else goto c02_029f;

c02_029f:;

	i8 v4000 = (i8)(intptr_t)(ws+3512);
	i8 v4001 = *(i8*)(intptr_t)v4000;
	i8 v4002 = v4001+(+40);
	i1 v4003 = *(i1*)(intptr_t)v4002;
	i1 v4004 = (i1)+40;
	if (v4003==v4004) goto c02_029d; else goto c02_029e;

c02_029d:;

	i8 v4005 = (i8)(intptr_t)(ws+3496);
	i1 v4006 = *(i1*)(intptr_t)v4005;
	i1 v4007 = (i1)+161;
	if (v4006==v4007) goto c02_02a7; else goto c02_02aa;

c02_02aa:;

	i8 v4008 = (i8)(intptr_t)(ws+3496);
	i1 v4009 = *(i1*)(intptr_t)v4008;
	i1 v4010 = (i1)+141;
	if (v4009==v4010) goto c02_02a7; else goto c02_02a9;

c02_02a9:;

	i8 v4011 = (i8)(intptr_t)(ws+3496);
	i1 v4012 = *(i1*)(intptr_t)v4011;
	i1 v4013 = (i1)+136;
	if (v4012==v4013) goto c02_02a7; else goto c02_02a8;

c02_02a7:;

	i8 v4014 = (i8)(intptr_t)(ws+3512);
	i8 v4015 = *(i8*)(intptr_t)v4014;
	i4 v4016 = *(i4*)(intptr_t)v4015;
	i8 v4017 = (i8)(intptr_t)(ws+3552);
	*(i4*)(intptr_t)v4017 = v4016;

	i8 v4018 = (i8)(intptr_t)(ws+3552);
	i4 v4019 = *(i4*)(intptr_t)v4018;
	i8 v4020 = (i8)(intptr_t)(f171_GetPowerOfTwo);
	i1 v4021;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v4020)(&v4021, v4019);

	i8 v4022 = (i8)(intptr_t)(ws+3556);
	*(i1*)(intptr_t)v4022 = v4021;

	i8 v4023 = (i8)(intptr_t)(ws+3556);
	i1 v4024 = *(i1*)(intptr_t)v4023;
	i8 v4025 = (i8)(intptr_t)(ws+3557);
	*(i1*)(intptr_t)v4025 = v4024;

	i8 v4026 = (i8)(intptr_t)(ws+3557);
	i1 v4027 = *(i1*)(intptr_t)v4026;
	i1 v4028 = (i1)+0;
	if (v4027==v4028) goto c02_02af; else goto c02_02ae;

c02_02ae:;

	i8 v4029 = (i8)(intptr_t)(ws+3512);
	i8 v4030 = *(i8*)(intptr_t)v4029;
	i8 v4031 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4031)(v4030);

	i8 v4032 = (i8)(intptr_t)(ws+3557);
	i1 v4033 = *(i1*)(intptr_t)v4032;
	i1 v4034 = v4033+(-1);
	i4 v4035 = v4034;
	i8 v4036 = (i8)(intptr_t)(f113_MidConstant);
	i8 v4037;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v4036)(&v4037, v4035);

	i8 v4038 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v4038 = v4037;

	i8 v4039 = (i8)(intptr_t)(ws+3560);
	i8 v4040 = *(i8*)(intptr_t)v4039;
	i8 v4041 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v4041 = v4040;

	i8 v4042 = (i8)(intptr_t)(ws+3496);
	i1 v4043 = *(i1*)(intptr_t)v4042;

	if (v4043 != +161) goto c02_02b1;

	i1 v4044 = (i1)+116;
	i8 v4045 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4045 = v4044;

	goto c02_02b0;

c02_02b1:;

	if (v4043 != +141) goto c02_02b2;

	i1 v4046 = (i1)+126;
	i8 v4047 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4047 = v4046;

	goto c02_02b0;

c02_02b2:;

	if (v4043 != +136) goto c02_02b3;

	i1 v4048 = (i1)+121;
	i8 v4049 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v4049 = v4048;

c02_02b3:;

c02_02b0:;


c02_02af:;

c02_02ab:;

c02_02a8:;

c02_02a0:;

	i8 v4050 = (i8)(intptr_t)(ws+3496);
	i1 v4051 = *(i1*)(intptr_t)v4050;
	i1 v4052 = (i1)+116;
	if (v4051==v4052) goto c02_02bb; else goto c02_02be;

c02_02be:;

	i8 v4053 = (i8)(intptr_t)(ws+3496);
	i1 v4054 = *(i1*)(intptr_t)v4053;
	i1 v4055 = (i1)+121;
	if (v4054==v4055) goto c02_02bb; else goto c02_02bd;

c02_02bd:;

	i8 v4056 = (i8)(intptr_t)(ws+3496);
	i1 v4057 = *(i1*)(intptr_t)v4056;
	i1 v4058 = (i1)+126;
	if (v4057==v4058) goto c02_02bb; else goto c02_02bc;

c02_02bb:;

	i8 v4059 = (i8)(intptr_t)(ws+3512);
	i8 v4060 = *(i8*)(intptr_t)v4059;
	i4 v4061 = *(i4*)(intptr_t)v4060;
	i4 v4062 = (i4)+0;
	if (v4061==v4062) goto c02_02c2; else goto c02_02c3;

c02_02c2:;

	i8 v4063 = (i8)(intptr_t)(ws+3512);
	i8 v4064 = *(i8*)(intptr_t)v4063;
	i8 v4065 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4065)(v4064);

	i8 v4066 = (i8)(intptr_t)(ws+3504);
	i8 v4067 = *(i8*)(intptr_t)v4066;
	i8 v4068 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4068 = v4067;

	goto endsub;

c02_02c3:;

c02_02bf:;

c02_02bc:;

c02_02b4:;

	i8 v4069 = (i8)(intptr_t)(ws+3496);
	i1 v4070 = *(i1*)(intptr_t)v4069;
	i1 v4071 = (i1)+156;
	if (v4070==v4071) goto c02_02c9; else goto c02_02cb;

c02_02cb:;

	i8 v4072 = (i8)(intptr_t)(ws+3496);
	i1 v4073 = *(i1*)(intptr_t)v4072;
	i1 v4074 = (i1)+131;
	if (v4073==v4074) goto c02_02c9; else goto c02_02ca;

c02_02c9:;

	i8 v4075 = (i8)(intptr_t)(ws+3512);
	i8 v4076 = *(i8*)(intptr_t)v4075;
	i4 v4077 = *(i4*)(intptr_t)v4076;
	i4 v4078 = (i4)+0;
	if (v4077==v4078) goto c02_02cf; else goto c02_02d0;

c02_02cf:;

	i8 v4079 = (i8)(intptr_t)(ws+3512);
	i8 v4080 = *(i8*)(intptr_t)v4079;
	i8 v4081 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4081)(v4080);

	i8 v4082 = (i8)(intptr_t)(ws+3504);
	i8 v4083 = *(i8*)(intptr_t)v4082;
	i8 v4084 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4084 = v4083;

	goto endsub;

c02_02d0:;

c02_02cc:;

	i8 v4085 = (i8)(intptr_t)(ws+3504);
	i8 v4086 = *(i8*)(intptr_t)v4085;
	i8 v4087 = v4086+(+40);
	i1 v4088 = *(i1*)(intptr_t)v4087;
	i1 v4089 = (i1)+42;
	if (v4088==v4089) goto c02_02d4; else goto c02_02d5;

c02_02d4:;

	i8 v4090 = (i8)(intptr_t)(ws+3512);
	i8 v4091 = *(i8*)(intptr_t)v4090;
	i4 v4092 = *(i4*)(intptr_t)v4091;
	i2 v4093 = (s2)(s4)v4092;
	i8 v4094 = (i8)(intptr_t)(ws+3568);
	*(i2*)(intptr_t)v4094 = v4093;

	i8 v4095 = (i8)(intptr_t)(ws+3496);
	i1 v4096 = *(i1*)(intptr_t)v4095;

	if (v4096 != +156) goto c02_02d7;

	i8 v4097 = (i8)(intptr_t)(ws+3504);
	i8 v4098 = *(i8*)(intptr_t)v4097;
	i8 v4099 = v4098+(+8);
	i2 v4100 = *(i2*)(intptr_t)v4099;
	i8 v4101 = (i8)(intptr_t)(ws+3568);
	i2 v4102 = *(i2*)(intptr_t)v4101;
	i2 v4103 = v4100+v4102;
	i8 v4104 = (i8)(intptr_t)(ws+3504);
	i8 v4105 = *(i8*)(intptr_t)v4104;
	i8 v4106 = v4105+(+8);
	*(i2*)(intptr_t)v4106 = v4103;

	i8 v4107 = (i8)(intptr_t)(ws+3512);
	i8 v4108 = *(i8*)(intptr_t)v4107;
	i8 v4109 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4109)(v4108);

	i8 v4110 = (i8)(intptr_t)(ws+3504);
	i8 v4111 = *(i8*)(intptr_t)v4110;
	i8 v4112 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4112 = v4111;

	goto endsub;

c02_02d7:;

	if (v4096 != +131) goto c02_02d8;

	i8 v4113 = (i8)(intptr_t)(ws+3504);
	i8 v4114 = *(i8*)(intptr_t)v4113;
	i8 v4115 = v4114+(+8);
	i2 v4116 = *(i2*)(intptr_t)v4115;
	i8 v4117 = (i8)(intptr_t)(ws+3568);
	i2 v4118 = *(i2*)(intptr_t)v4117;
	i2 v4119 = v4116-v4118;
	i8 v4120 = (i8)(intptr_t)(ws+3504);
	i8 v4121 = *(i8*)(intptr_t)v4120;
	i8 v4122 = v4121+(+8);
	*(i2*)(intptr_t)v4122 = v4119;

	i8 v4123 = (i8)(intptr_t)(ws+3512);
	i8 v4124 = *(i8*)(intptr_t)v4123;
	i8 v4125 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4125)(v4124);

	i8 v4126 = (i8)(intptr_t)(ws+3504);
	i8 v4127 = *(i8*)(intptr_t)v4126;
	i8 v4128 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4128 = v4127;

	goto endsub;

c02_02d8:;

c02_02d6:;


c02_02d5:;

c02_02d1:;

c02_02ca:;

c02_02c4:;

c02_029e:;

c02_0298:;

	i8 v4129 = (i8)(intptr_t)(ws+3504);
	i8 v4130 = *(i8*)(intptr_t)v4129;
	i8 v4131 = v4130+(+40);
	i1 v4132 = *(i1*)(intptr_t)v4131;
	i1 v4133 = (i1)+40;
	if (v4132==v4133) goto c02_02e0; else goto c02_02df;

c02_02e0:;

	i8 v4134 = (i8)(intptr_t)(ws+3512);
	i8 v4135 = *(i8*)(intptr_t)v4134;
	i8 v4136 = v4135+(+40);
	i1 v4137 = *(i1*)(intptr_t)v4136;
	i1 v4138 = (i1)+40;
	if (v4137==v4138) goto c02_02de; else goto c02_02df;

c02_02de:;

	i8 v4139 = (i8)(intptr_t)(ws+3496);
	i1 v4140 = *(i1*)(intptr_t)v4139;
	i8 v4141 = (i8)(intptr_t)(ws+3504);
	i8 v4142 = *(i8*)(intptr_t)v4141;
	i8 v4143 = (i8)(intptr_t)(ws+3512);
	i8 v4144 = *(i8*)(intptr_t)v4143;
	i8 v4145 = (i8)(intptr_t)(f169_FoldConstant2);
	i4 v4146;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v4145)(&v4146, v4144, v4142, v4140);

	i8 v4147 = (i8)(intptr_t)(ws+3572);
	*(i4*)(intptr_t)v4147 = v4146;

	i8 v4148 = (i8)(intptr_t)(ws+3572);
	i4 v4149 = *(i4*)(intptr_t)v4148;
	i8 v4150 = (i8)(intptr_t)(ws+3504);
	i8 v4151 = *(i8*)(intptr_t)v4150;
	*(i4*)(intptr_t)v4151 = v4149;

	i8 v4152 = (i8)(intptr_t)(ws+3512);
	i8 v4153 = *(i8*)(intptr_t)v4152;
	i8 v4154 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4154)(v4153);

	i8 v4155 = (i8)(intptr_t)(ws+3504);
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i8 v4157 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4157 = v4156;

	goto endsub;

c02_02df:;

c02_02d9:;

	i8 v4158 = (i8)(intptr_t)(ws+3497);
	i1 v4159 = *(i1*)(intptr_t)v4158;
	i8 v4160 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v4161;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v4160)(&v4161, v4159);

	i8 v4162 = (i8)(intptr_t)(ws+3576);
	*(i1*)(intptr_t)v4162 = v4161;

	i8 v4163 = (i8)(intptr_t)(ws+3496);
	i1 v4164 = *(i1*)(intptr_t)v4163;
	i8 v4165 = (i8)(intptr_t)(ws+3576);
	i1 v4166 = *(i1*)(intptr_t)v4165;
	i1 v4167 = v4164+v4166;
	i8 v4168 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v4169;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v4168)(&v4169, v4167);

	i8 v4170 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v4170 = v4169;

	i8 v4171 = (i8)(intptr_t)(ws+3584);
	i8 v4172 = *(i8*)(intptr_t)v4171;
	i8 v4173 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4173 = v4172;

	i8 v4174 = (i8)(intptr_t)(ws+3504);
	i8 v4175 = *(i8*)(intptr_t)v4174;
	i8 v4176 = (i8)(intptr_t)(ws+3520);
	i8 v4177 = *(i8*)(intptr_t)v4176;
	i8 v4178 = v4177+(+24);
	*(i8*)(intptr_t)v4178 = v4175;

	i8 v4179 = (i8)(intptr_t)(ws+3512);
	i8 v4180 = *(i8*)(intptr_t)v4179;
	i8 v4181 = (i8)(intptr_t)(ws+3520);
	i8 v4182 = *(i8*)(intptr_t)v4181;
	i8 v4183 = v4182+(+32);
	*(i8*)(intptr_t)v4183 = v4180;

endsub:;
	*p3892 = *(i8*)(intptr_t)(ws+3520);
}
	void f102_WidthToIndex(i1* /* index */, i1 /* width */);
	void f103_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3496 length ws+48
void f173_MidCCast(i8* p4184 /* result */, i1 p4185 /* issigned */, i8 p4186 /* lhs */, i1 p4187 /* width */) {
	*(i1*)(intptr_t)(ws+3496) = p4187; /* width */
	*(i8*)(intptr_t)(ws+3504) = p4186; /* lhs */
	*(i1*)(intptr_t)(ws+3512) = p4185; /* issigned */

	i8 v4188 = (i8)(intptr_t)(ws+3504);
	i8 v4189 = *(i8*)(intptr_t)v4188;
	i8 v4190 = v4189+(+40);
	i1 v4191 = *(i1*)(intptr_t)v4190;
	i1 v4192 = (i1)+40;
	if (v4191==v4192) goto c02_02e4; else goto c02_02e5;

c02_02e4:;

	i8 v4193 = (i8)(intptr_t)(ws+3504);
	i8 v4194 = *(i8*)(intptr_t)v4193;
	i8 v4195 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4195 = v4194;

	goto endsub;

c02_02e5:;

c02_02e1:;

	i8 v4196 = (i8)(intptr_t)(ws+3504);
	i8 v4197 = *(i8*)(intptr_t)v4196;
	i8 v4198 = v4197+(+16);
	i8 v4199 = *(i8*)(intptr_t)v4198;
	i8 v4200 = v4199+(+48);
	i2 v4201 = *(i2*)(intptr_t)v4200;
	i1 v4202 = v4201;
	i8 v4203 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v4203 = v4202;

	i8 v4204 = (i8)(intptr_t)(ws+3528);
	i1 v4205 = *(i1*)(intptr_t)v4204;
	i8 v4206 = (i8)(intptr_t)(ws+3496);
	i1 v4207 = *(i1*)(intptr_t)v4206;
	if (v4205==v4207) goto c02_02e9; else goto c02_02ea;

c02_02e9:;

	i8 v4208 = (i8)(intptr_t)(ws+3504);
	i8 v4209 = *(i8*)(intptr_t)v4208;
	i8 v4210 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4210 = v4209;

	goto c02_02e6;

c02_02ea:;

	i8 v4211 = (i8)(intptr_t)(ws+3528);
	i1 v4212 = *(i1*)(intptr_t)v4211;

	if (v4212 != +1) goto c02_02ec;

	i1 v4213 = (i1)+86;
	i8 v4214 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v4214 = v4213;

	goto c02_02eb;

c02_02ec:;

	if (v4212 != +2) goto c02_02ed;

	i1 v4215 = (i1)+91;
	i8 v4216 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v4216 = v4215;

	goto c02_02eb;

c02_02ed:;

	if (v4212 != +4) goto c02_02ee;

	i1 v4217 = (i1)+96;
	i8 v4218 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v4218 = v4217;

	goto c02_02eb;

c02_02ee:;

	if (v4212 != +8) goto c02_02ef;

	i1 v4219 = (i1)+101;
	i8 v4220 = (i8)(intptr_t)(ws+3529);
	*(i1*)(intptr_t)v4220 = v4219;

c02_02ef:;

c02_02eb:;


	i8 v4221 = (i8)(intptr_t)(ws+3496);
	i1 v4222 = *(i1*)(intptr_t)v4221;
	i8 v4223 = (i8)(intptr_t)(f102_WidthToIndex);
	i1 v4224;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v4223)(&v4224, v4222);

	i8 v4225 = (i8)(intptr_t)(ws+3530);
	*(i1*)(intptr_t)v4225 = v4224;

	i8 v4226 = (i8)(intptr_t)(ws+3529);
	i1 v4227 = *(i1*)(intptr_t)v4226;
	i8 v4228 = (i8)(intptr_t)(ws+3530);
	i1 v4229 = *(i1*)(intptr_t)v4228;
	i1 v4230 = v4227+v4229;
	i8 v4231 = (i8)(intptr_t)(f103_AllocateNewNode);
	i8 v4232;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v4231)(&v4232, v4230);

	i8 v4233 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v4233 = v4232;

	i8 v4234 = (i8)(intptr_t)(ws+3536);
	i8 v4235 = *(i8*)(intptr_t)v4234;
	i8 v4236 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v4236 = v4235;

	i8 v4237 = (i8)(intptr_t)(ws+3504);
	i8 v4238 = *(i8*)(intptr_t)v4237;
	i8 v4239 = (i8)(intptr_t)(ws+3520);
	i8 v4240 = *(i8*)(intptr_t)v4239;
	i8 v4241 = v4240+(+24);
	*(i8*)(intptr_t)v4241 = v4238;

	i8 v4242 = (i8)(intptr_t)(ws+3512);
	i1 v4243 = *(i1*)(intptr_t)v4242;
	i8 v4244 = (i8)(intptr_t)(ws+3520);
	i8 v4245 = *(i8*)(intptr_t)v4244;
	*(i1*)(intptr_t)v4245 = v4243;

c02_02e6:;

endsub:;
	*p4184 = *(i8*)(intptr_t)(ws+3520);
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// E_b8 workspace at ws+3600 length ws+1
void f174_E_b8(i1 p4246 /* byte */) {
	*(i1*)(intptr_t)(ws+3600) = p4246; /* byte */

	i8 v4247 = (i8)(intptr_t)(ws+936);
	i8 v4248 = (i8)(intptr_t)(ws+3600);
	i1 v4249 = *(i1*)(intptr_t)v4248;
	i8 v4250 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v4250)(v4249, v4247);

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f174_E_b8(i1 /* byte */);

// E_b16 workspace at ws+3576 length ws+2
void f175_E_b16(i2 p4251 /* word */) {
	*(i2*)(intptr_t)(ws+3576) = p4251; /* word */

	i8 v4252 = (i8)(intptr_t)(ws+3576);
	i2 v4253 = *(i2*)(intptr_t)v4252;
	i1 v4254 = v4253;
	i8 v4255 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4255)(v4254);

	i8 v4256 = (i8)(intptr_t)(ws+3576);
	i2 v4257 = *(i2*)(intptr_t)v4256;
	i1 v4258 = (i1)+8;
	i2 v4259 = ((i2)v4257)>>v4258;
	i1 v4260 = v4259;
	i8 v4261 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4261)(v4260);

endsub:;
}
	void f175_E_b16(i2 /* word */);
	void f175_E_b16(i2 /* word */);

// E_b32 workspace at ws+3568 length ws+4
void f176_E_b32(i4 p4262 /* quad */) {
	*(i4*)(intptr_t)(ws+3568) = p4262; /* quad */

	i8 v4263 = (i8)(intptr_t)(ws+3568);
	i4 v4264 = *(i4*)(intptr_t)v4263;
	i2 v4265 = v4264;
	i8 v4266 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4266)(v4265);

	i8 v4267 = (i8)(intptr_t)(ws+3568);
	i4 v4268 = *(i4*)(intptr_t)v4267;
	i1 v4269 = (i1)+16;
	i4 v4270 = ((i4)v4268)>>v4269;
	i2 v4271 = v4270;
	i8 v4272 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4272)(v4271);

endsub:;
}
	void f175_E_b16(i2 /* word */);

// E_bsize workspace at ws+3568 length ws+2
void f177_E_bsize(i2 p4273 /* size */) {
	*(i2*)(intptr_t)(ws+3568) = p4273; /* size */

	i8 v4274 = (i8)(intptr_t)(ws+3568);
	i2 v4275 = *(i2*)(intptr_t)v4274;
	i8 v4276 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4276)(v4275);

endsub:;
}
	void f174_E_b8(i1 /* byte */);

// E workspace at ws+3584 length ws+9
void f184_E(i8 p4289 /* text */) {
	*(i8*)(intptr_t)(ws+3584) = p4289; /* text */

c02_02f0:;

	i8 v4290 = (i8)(intptr_t)(ws+3584);
	i8 v4291 = *(i8*)(intptr_t)v4290;
	i1 v4292 = *(i1*)(intptr_t)v4291;
	i8 v4293 = (i8)(intptr_t)(ws+3592);
	*(i1*)(intptr_t)v4293 = v4292;

	i8 v4294 = (i8)(intptr_t)(ws+3584);
	i8 v4295 = *(i8*)(intptr_t)v4294;
	i8 v4296 = v4295+(+1);
	i8 v4297 = (i8)(intptr_t)(ws+3584);
	*(i8*)(intptr_t)v4297 = v4296;

	i8 v4298 = (i8)(intptr_t)(ws+3592);
	i1 v4299 = *(i1*)(intptr_t)v4298;
	i1 v4300 = (i1)+0;
	if (v4299==v4300) goto c02_02f5; else goto c02_02f6;

c02_02f5:;

	goto c02_02f1;

c02_02f6:;

c02_02f2:;

	i8 v4301 = (i8)(intptr_t)(ws+3592);
	i1 v4302 = *(i1*)(intptr_t)v4301;
	i8 v4303 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4303)(v4302);

	goto c02_02f0;

c02_02f1:;

endsub:;
}
	void f29_StrLen(i8* /* size */, i8 /* s */);
	void f174_E_b8(i1 /* byte */);
	void f184_E(i8 /* text */);

// E_countedstring workspace at ws+3568 length ws+16
void f185_E_countedstring(i8 p4304 /* text */) {
	*(i8*)(intptr_t)(ws+3568) = p4304; /* text */

	i8 v4305 = (i8)(intptr_t)(ws+3568);
	i8 v4306 = *(i8*)(intptr_t)v4305;
	i8 v4307 = (i8)(intptr_t)(f29_StrLen);
	i8 v4308;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v4307)(&v4308, v4306);

	i8 v4309 = (i8)(intptr_t)(ws+3576);
	*(i8*)(intptr_t)v4309 = v4308;

	i8 v4310 = (i8)(intptr_t)(ws+3576);
	i8 v4311 = *(i8*)(intptr_t)v4310;
	i1 v4312 = v4311;
	i8 v4313 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4313)(v4312);

	i8 v4314 = (i8)(intptr_t)(ws+3568);
	i8 v4315 = *(i8*)(intptr_t)v4314;
	i8 v4316 = (i8)(intptr_t)(f184_E);

	((void(*)(i8 /* text */))(intptr_t)v4316)(v4315);

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00f3[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+3264 length ws+9
void f196_EmitterOpenfile(i8 p4449 /* filename */) {
	*(i8*)(intptr_t)(ws+3264) = p4449; /* filename */

	i8 v4450 = (i8)(intptr_t)(ws+936);
	i8 v4451 = (i8)(intptr_t)(ws+3264);
	i8 v4452 = *(i8*)(intptr_t)v4451;
	i8 v4453 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v4454;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v4453)(&v4454, v4452, v4450);

	i8 v4455 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v4455 = v4454;

	i8 v4456 = (i8)(intptr_t)(ws+3272);
	i1 v4457 = *(i1*)(intptr_t)v4456;
	i1 v4458 = (i1)+0;
	if (v4457==v4458) goto c02_0317; else goto c02_0316;

c02_0316:;

	i8 v4459 = (i8)(intptr_t)c02_s00f3;
	i8 v4460 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4460)(v4459);

c02_0317:;

c02_0313:;

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00f4[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// EmitterClosefile workspace at ws+3264 length ws+1
void f197_EmitterClosefile(void) {

	i1 v4461 = (i1)+69;
	i8 v4462 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4462)(v4461);

	i8 v4463 = (i8)(intptr_t)(ws+936);
	i8 v4464 = (i8)(intptr_t)(f55_FCBClose);
	i1 v4465;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v4464)(&v4465, v4463);

	i8 v4466 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v4466 = v4465;

	i8 v4467 = (i8)(intptr_t)(ws+3264);
	i1 v4468 = *(i1*)(intptr_t)v4467;
	i1 v4469 = (i1)+0;
	if (v4468==v4469) goto c02_031c; else goto c02_031b;

c02_031b:;

	i8 v4470 = (i8)(intptr_t)c02_s00f4;
	i8 v4471 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4471)(v4470);

c02_031c:;

c02_0318:;

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f185_E_countedstring(i8 /* text */);

// EmitterDeclareSubroutine workspace at ws+3416 length ws+8
void f198_EmitterDeclareSubroutine(i8 p4472 /* subr */) {
	*(i8*)(intptr_t)(ws+3416) = p4472; /* subr */

	i1 v4473 = (i1)+78;
	i8 v4474 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4474)(v4473);

	i8 v4475 = (i8)(intptr_t)(ws+3416);
	i8 v4476 = *(i8*)(intptr_t)v4475;
	i8 v4477 = v4476+(+56);
	i2 v4478 = *(i2*)(intptr_t)v4477;
	i8 v4479 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4479)(v4478);

	i8 v4480 = (i8)(intptr_t)(ws+3416);
	i8 v4481 = *(i8*)(intptr_t)v4480;
	i8 v4482 = *(i8*)(intptr_t)v4481;
	i8 v4483 = v4482+(+8);
	i8 v4484 = *(i8*)(intptr_t)v4483;
	i8 v4485 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4485)(v4484);

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f185_E_countedstring(i8 /* text */);

// EmitterDeclareExternalSubroutine workspace at ws+3384 length ws+16
void f199_EmitterDeclareExternalSubroutine(i8 p4486 /* external */, i2 p4487 /* id */) {
	*(i2*)(intptr_t)(ws+3384) = p4487; /* id */
	*(i8*)(intptr_t)(ws+3392) = p4486; /* external */

	i1 v4488 = (i1)+88;
	i8 v4489 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4489)(v4488);

	i8 v4490 = (i8)(intptr_t)(ws+3384);
	i2 v4491 = *(i2*)(intptr_t)v4490;
	i8 v4492 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4492)(v4491);

	i8 v4493 = (i8)(intptr_t)(ws+3392);
	i8 v4494 = *(i8*)(intptr_t)v4493;
	i8 v4495 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4495)(v4494);

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f175_E_b16(i2 /* word */);

// EmitterReferenceSubroutineById workspace at ws+3512 length ws+4
void f200_EmitterReferenceSubroutineById(i2 p4496 /* used */, i2 p4497 /* user */) {
	*(i2*)(intptr_t)(ws+3512) = p4497; /* user */
	*(i2*)(intptr_t)(ws+3514) = p4496; /* used */

	i1 v4498 = (i1)+82;
	i8 v4499 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4499)(v4498);

	i8 v4500 = (i8)(intptr_t)(ws+3512);
	i2 v4501 = *(i2*)(intptr_t)v4500;
	i8 v4502 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4502)(v4501);

	i8 v4503 = (i8)(intptr_t)(ws+3514);
	i2 v4504 = *(i2*)(intptr_t)v4503;
	i8 v4505 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4505)(v4504);

endsub:;
}
	void f200_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// EmitterReferenceSubroutine workspace at ws+3496 length ws+16
void f201_EmitterReferenceSubroutine(i8 p4506 /* used */, i8 p4507 /* user */) {
	*(i8*)(intptr_t)(ws+3496) = p4507; /* user */
	*(i8*)(intptr_t)(ws+3504) = p4506; /* used */

	i8 v4508 = (i8)(intptr_t)(ws+3496);
	i8 v4509 = *(i8*)(intptr_t)v4508;
	i8 v4510 = v4509+(+56);
	i2 v4511 = *(i2*)(intptr_t)v4510;
	i8 v4512 = (i8)(intptr_t)(ws+3504);
	i8 v4513 = *(i8*)(intptr_t)v4512;
	i8 v4514 = v4513+(+56);
	i2 v4515 = *(i2*)(intptr_t)v4514;
	i8 v4516 = (i8)(intptr_t)(f200_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v4516)(v4515, v4511);

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);
	void f177_E_bsize(i2 /* size */);

// EmitterDeclareWorkspace workspace at ws+3424 length ws+12
void f202_EmitterDeclareWorkspace(i2 p4517 /* workspace */, i1 p4518 /* wid */, i8 p4519 /* subr */) {
	*(i8*)(intptr_t)(ws+3424) = p4519; /* subr */
	*(i1*)(intptr_t)(ws+3432) = p4518; /* wid */
	*(i2*)(intptr_t)(ws+3434) = p4517; /* workspace */

	i1 v4520 = (i1)+87;
	i8 v4521 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4521)(v4520);

	i8 v4522 = (i8)(intptr_t)(ws+3424);
	i8 v4523 = *(i8*)(intptr_t)v4522;
	i8 v4524 = v4523+(+56);
	i2 v4525 = *(i2*)(intptr_t)v4524;
	i8 v4526 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4526)(v4525);

	i8 v4527 = (i8)(intptr_t)(ws+3432);
	i1 v4528 = *(i1*)(intptr_t)v4527;
	i8 v4529 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4529)(v4528);

	i8 v4530 = (i8)(intptr_t)(ws+3434);
	i2 v4531 = *(i2*)(intptr_t)v4530;
	i8 v4532 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v4532)(v4531);

endsub:;
}
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);
	void f177_E_bsize(i2 /* size */);
	void f185_E_countedstring(i8 /* text */);
	void f174_E_b8(i1 /* byte */);

// EmitParameterList workspace at ws+3424 length ws+8
void f203_EmitParameterList(i8 p4533 /* param */) {
	*(i8*)(intptr_t)(ws+3424) = p4533; /* param */

c02_031d:;

	i8 v4534 = (i8)(intptr_t)(ws+3424);
	i8 v4535 = *(i8*)(intptr_t)v4534;
	i8 v4536 = (i8)+0;
	if (v4535==v4536) goto c02_0322; else goto c02_0321;

c02_0321:;

	i8 v4537 = (i8)(intptr_t)(ws+3424);
	i8 v4538 = *(i8*)(intptr_t)v4537;
	i8 v4539 = *(i8*)(intptr_t)v4538;
	i8 v4540 = v4539+(+8);
	i8 v4541 = *(i8*)(intptr_t)v4540;
	i8 v4542 = v4541+(+56);
	i2 v4543 = *(i2*)(intptr_t)v4542;
	i8 v4544 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4544)(v4543);

	i8 v4545 = (i8)(intptr_t)(ws+3424);
	i8 v4546 = *(i8*)(intptr_t)v4545;
	i8 v4547 = *(i8*)(intptr_t)v4546;
	i8 v4548 = v4547+(+26);
	i1 v4549 = *(i1*)(intptr_t)v4548;
	i8 v4550 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4550)(v4549);

	i8 v4551 = (i8)(intptr_t)(ws+3424);
	i8 v4552 = *(i8*)(intptr_t)v4551;
	i8 v4553 = *(i8*)(intptr_t)v4552;
	i8 v4554 = v4553+(+24);
	i2 v4555 = *(i2*)(intptr_t)v4554;
	i8 v4556 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v4556)(v4555);

	i8 v4557 = (i8)(intptr_t)(ws+3424);
	i8 v4558 = *(i8*)(intptr_t)v4557;
	i8 v4559 = v4558+(+8);
	i8 v4560 = *(i8*)(intptr_t)v4559;
	i8 v4561 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4561)(v4560);

	i8 v4562 = (i8)(intptr_t)(ws+3424);
	i8 v4563 = *(i8*)(intptr_t)v4562;
	i8 v4564 = *(i8*)(intptr_t)v4563;
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = v4565+(+48);
	i2 v4567 = *(i2*)(intptr_t)v4566;
	i1 v4568 = v4567;
	i8 v4569 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4569)(v4568);

	i8 v4570 = (i8)(intptr_t)(ws+3424);
	i8 v4571 = *(i8*)(intptr_t)v4570;
	i8 v4572 = *(i8*)(intptr_t)v4571;
	i8 v4573 = v4572+(+16);
	i8 v4574 = *(i8*)(intptr_t)v4573;
	i8 v4575 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v4575 = v4574;

	goto c02_031d;

c02_0322:;

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f203_EmitParameterList(i8 /* param */);

// EmitterEmitInputParameters workspace at ws+3408 length ws+16
void f204_EmitterEmitInputParameters(i8 p4576 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p4576; /* subr */

	i1 v4577 = (i1)+73;
	i8 v4578 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4578)(v4577);

	i8 v4579 = (i8)(intptr_t)(ws+3408);
	i8 v4580 = *(i8*)(intptr_t)v4579;
	i8 v4581 = v4580+(+56);
	i2 v4582 = *(i2*)(intptr_t)v4581;
	i8 v4583 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4583)(v4582);

	i8 v4584 = (i8)(intptr_t)(ws+3408);
	i8 v4585 = *(i8*)(intptr_t)v4584;
	i8 v4586 = v4585+(+80);
	i1 v4587 = *(i1*)(intptr_t)v4586;
	i8 v4588 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4588)(v4587);

	i8 v4589 = (i8)(intptr_t)(ws+3408);
	i8 v4590 = *(i8*)(intptr_t)v4589;
	i1 v4591 = (i1)+0;
	i8 v4592 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v4593;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4592)(&v4593, v4591, v4590);

	i8 v4594 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4594 = v4593;

	i8 v4595 = (i8)(intptr_t)(ws+3416);
	i8 v4596 = *(i8*)(intptr_t)v4595;
	i8 v4597 = (i8)(intptr_t)(f203_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v4597)(v4596);

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f203_EmitParameterList(i8 /* param */);

// EmitterEmitOutputParameters workspace at ws+3408 length ws+16
void f205_EmitterEmitOutputParameters(i8 p4598 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p4598; /* subr */

	i1 v4599 = (i1)+79;
	i8 v4600 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4600)(v4599);

	i8 v4601 = (i8)(intptr_t)(ws+3408);
	i8 v4602 = *(i8*)(intptr_t)v4601;
	i8 v4603 = v4602+(+56);
	i2 v4604 = *(i2*)(intptr_t)v4603;
	i8 v4605 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4605)(v4604);

	i8 v4606 = (i8)(intptr_t)(ws+3408);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i8 v4608 = v4607+(+81);
	i1 v4609 = *(i1*)(intptr_t)v4608;
	i8 v4610 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4610)(v4609);

	i8 v4611 = (i8)(intptr_t)(ws+3408);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	i1 v4613 = (i1)+0;
	i8 v4614 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v4615;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4614)(&v4615, v4613, v4612);

	i8 v4616 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4616 = v4615;

	i8 v4617 = (i8)(intptr_t)(ws+3416);
	i8 v4618 = *(i8*)(intptr_t)v4617;
	i8 v4619 = (i8)(intptr_t)(f203_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v4619)(v4618);

endsub:;
}
	void f174_E_b8(i1 /* byte */);
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);

// EmitterEmitSubroutineFlags workspace at ws+3408 length ws+8
void f206_EmitterEmitSubroutineFlags(i8 p4620 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p4620; /* subr */

	i1 v4621 = (i1)+70;
	i8 v4622 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4622)(v4621);

	i8 v4623 = (i8)(intptr_t)(ws+3408);
	i8 v4624 = *(i8*)(intptr_t)v4623;
	i8 v4625 = v4624+(+56);
	i2 v4626 = *(i2*)(intptr_t)v4625;
	i8 v4627 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4627)(v4626);

	i8 v4628 = (i8)(intptr_t)(ws+3408);
	i8 v4629 = *(i8*)(intptr_t)v4628;
	i8 v4630 = v4629+(+82);
	i1 v4631 = *(i1*)(intptr_t)v4630;
	i8 v4632 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4632)(v4631);

endsub:;
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3528 length ws+25
void f216_LookupSymbolInNamespace(i8* p4970 /* symbol */, i8 p4971 /* name */, i8 p4972 /* namespace */) {
	*(i8*)(intptr_t)(ws+3528) = p4972; /* namespace */
	*(i8*)(intptr_t)(ws+3536) = p4971; /* name */

	i8 v4973 = (i8)(intptr_t)(ws+3528);
	i8 v4974 = *(i8*)(intptr_t)v4973;
	i8 v4975 = *(i8*)(intptr_t)v4974;
	i8 v4976 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v4976 = v4975;

c02_03ab:;

	i8 v4977 = (i8)(intptr_t)(ws+3544);
	i8 v4978 = *(i8*)(intptr_t)v4977;
	i8 v4979 = (i8)+0;
	if (v4978==v4979) goto c02_03b0; else goto c02_03af;

c02_03af:;

	i8 v4980 = (i8)(intptr_t)(ws+3544);
	i8 v4981 = *(i8*)(intptr_t)v4980;
	i8 v4982 = v4981+(+8);
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i8 v4984 = (i8)(intptr_t)(ws+3536);
	i8 v4985 = *(i8*)(intptr_t)v4984;
	i8 v4986 = (i8)(intptr_t)(f26_StrCmp);
	i1 v4987;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4986)(&v4987, v4985, v4983);

	i8 v4988 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v4988 = v4987;

	i8 v4989 = (i8)(intptr_t)(ws+3552);
	i1 v4990 = *(i1*)(intptr_t)v4989;
	i1 v4991 = (i1)+0;
	if (v4990==v4991) goto c02_03b4; else goto c02_03b5;

c02_03b4:;

c02_03b6:;

	i8 v4992 = (i8)(intptr_t)(ws+3544);
	i8 v4993 = *(i8*)(intptr_t)v4992;
	i8 v4994 = v4993+(+32);
	i1 v4995 = *(i1*)(intptr_t)v4994;
	i1 v4996 = (i1)+39;
	if (v4995==v4996) goto c02_03ba; else goto c02_03bb;

c02_03ba:;

	i8 v4997 = (i8)(intptr_t)(ws+3544);
	i8 v4998 = *(i8*)(intptr_t)v4997;
	i8 v4999 = *(i8*)(intptr_t)v4998;
	i8 v5000 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5000 = v4999;

	goto c02_03b6;

c02_03bb:;

	goto endsub;

c02_03b5:;

c02_03b1:;

	i8 v5001 = (i8)(intptr_t)(ws+3544);
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i8 v5003 = v5002+(+24);
	i8 v5004 = *(i8*)(intptr_t)v5003;
	i8 v5005 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5005 = v5004;

	goto c02_03ab;

c02_03b0:;

	i8 v5006 = (i8)+0;
	i8 v5007 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5007 = v5006;

endsub:;
	*p4970 = *(i8*)(intptr_t)(ws+3544);
}
	void f216_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3488 length ws+32
void f217_LookupSymbol(i8* p5008 /* symbol */, i8 p5009 /* name */, i8 p5010 /* namespace */) {
	*(i8*)(intptr_t)(ws+3488) = p5010; /* namespace */
	*(i8*)(intptr_t)(ws+3496) = p5009; /* name */

	i8 v5011 = (i8)(intptr_t)(ws+3488);
	i8 v5012 = *(i8*)(intptr_t)v5011;
	i8 v5013 = (i8)+0;
	if (v5012==v5013) goto c02_03bf; else goto c02_03c0;

c02_03bf:;

	i8 v5014 = (i8)(intptr_t)(ws+40);
	i8 v5015 = *(i8*)(intptr_t)v5014;
	i8 v5016 = v5015+(+16);
	i8 v5017 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v5017 = v5016;

c02_03c0:;

c02_03bc:;

c02_03c1:;

	i8 v5018 = (i8)(intptr_t)(ws+3488);
	i8 v5019 = *(i8*)(intptr_t)v5018;
	i8 v5020 = (i8)+0;
	if (v5019==v5020) goto c02_03c6; else goto c02_03c5;

c02_03c5:;

	i8 v5021 = (i8)(intptr_t)(ws+3488);
	i8 v5022 = *(i8*)(intptr_t)v5021;
	i8 v5023 = (i8)(intptr_t)(ws+3496);
	i8 v5024 = *(i8*)(intptr_t)v5023;
	i8 v5025 = (i8)(intptr_t)(f216_LookupSymbolInNamespace);
	i8 v5026;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5025)(&v5026, v5024, v5022);

	i8 v5027 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5027 = v5026;

	i8 v5028 = (i8)(intptr_t)(ws+3512);
	i8 v5029 = *(i8*)(intptr_t)v5028;
	i8 v5030 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5030 = v5029;

	i8 v5031 = (i8)(intptr_t)(ws+3504);
	i8 v5032 = *(i8*)(intptr_t)v5031;
	i8 v5033 = (i8)+0;
	if (v5032==v5033) goto c02_03cb; else goto c02_03ca;

c02_03ca:;

	goto endsub;

c02_03cb:;

c02_03c7:;

	i8 v5034 = (i8)(intptr_t)(ws+3488);
	i8 v5035 = *(i8*)(intptr_t)v5034;
	i8 v5036 = v5035+(+16);
	i8 v5037 = *(i8*)(intptr_t)v5036;
	i8 v5038 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v5038 = v5037;

	goto c02_03c1;

c02_03c6:;

	i8 v5039 = (i8)+0;
	i8 v5040 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5040 = v5039;

endsub:;
	*p5008 = *(i8*)(intptr_t)(ws+3504);
}

// AddToNamespace workspace at ws+3568 length ws+16
void f218_AddToNamespace(i8 p5041 /* symbol */, i8 p5042 /* namespace */) {
	*(i8*)(intptr_t)(ws+3568) = p5042; /* namespace */
	*(i8*)(intptr_t)(ws+3576) = p5041; /* symbol */

	i8 v5043 = (i8)(intptr_t)(ws+3568);
	i8 v5044 = *(i8*)(intptr_t)v5043;
	i8 v5045 = v5044+(+8);
	i8 v5046 = *(i8*)(intptr_t)v5045;
	i8 v5047 = (i8)+0;
	if (v5046==v5047) goto c02_03cf; else goto c02_03d0;

c02_03cf:;

	i8 v5048 = (i8)(intptr_t)(ws+3576);
	i8 v5049 = *(i8*)(intptr_t)v5048;
	i8 v5050 = (i8)(intptr_t)(ws+3568);
	i8 v5051 = *(i8*)(intptr_t)v5050;
	*(i8*)(intptr_t)v5051 = v5049;

	i8 v5052 = (i8)(intptr_t)(ws+3576);
	i8 v5053 = *(i8*)(intptr_t)v5052;
	i8 v5054 = (i8)(intptr_t)(ws+3568);
	i8 v5055 = *(i8*)(intptr_t)v5054;
	i8 v5056 = v5055+(+8);
	*(i8*)(intptr_t)v5056 = v5053;

	goto c02_03cc;

c02_03d0:;

	i8 v5057 = (i8)(intptr_t)(ws+3576);
	i8 v5058 = *(i8*)(intptr_t)v5057;
	i8 v5059 = (i8)(intptr_t)(ws+3568);
	i8 v5060 = *(i8*)(intptr_t)v5059;
	i8 v5061 = v5060+(+8);
	i8 v5062 = *(i8*)(intptr_t)v5061;
	i8 v5063 = v5062+(+24);
	*(i8*)(intptr_t)v5063 = v5058;

	i8 v5064 = (i8)(intptr_t)(ws+3576);
	i8 v5065 = *(i8*)(intptr_t)v5064;
	i8 v5066 = (i8)(intptr_t)(ws+3568);
	i8 v5067 = *(i8*)(intptr_t)v5066;
	i8 v5068 = v5067+(+8);
	*(i8*)(intptr_t)v5068 = v5065;

c02_03cc:;

	i8 v5069 = (i8)(intptr_t)(ws+3568);
	i8 v5070 = *(i8*)(intptr_t)v5069;
	i8 v5071 = (i8)(intptr_t)(ws+3576);
	i8 v5072 = *(i8*)(intptr_t)v5071;
	i8 v5073 = v5072+(+16);
	*(i8*)(intptr_t)v5073 = v5070;

endsub:;
}
	void f64_AllocNewSymbol(i8* /* symbol */);
	void f216_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
const i1 c02_s00f5[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s00f6[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f218_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddSymbol workspace at ws+3488 length ws+40
void f219_AddSymbol(i8* p5074 /* symbol */, i8 p5075 /* name */, i8 p5076 /* namespace */) {
	*(i8*)(intptr_t)(ws+3488) = p5076; /* namespace */
	*(i8*)(intptr_t)(ws+3496) = p5075; /* name */

	i8 v5077 = (i8)(intptr_t)(ws+3488);
	i8 v5078 = *(i8*)(intptr_t)v5077;
	i8 v5079 = (i8)+0;
	if (v5078==v5079) goto c02_03d4; else goto c02_03d5;

c02_03d4:;

	i8 v5080 = (i8)(intptr_t)(ws+40);
	i8 v5081 = *(i8*)(intptr_t)v5080;
	i8 v5082 = v5081+(+16);
	i8 v5083 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v5083 = v5082;

c02_03d5:;

c02_03d1:;

	i8 v5084 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v5085;

	((void(*)(i8* /* symbol */))(intptr_t)v5084)(&v5085);

	i8 v5086 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v5086 = v5085;

	i8 v5087 = (i8)(intptr_t)(ws+3512);
	i8 v5088 = *(i8*)(intptr_t)v5087;
	i8 v5089 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5089 = v5088;

	i8 v5090 = (i8)(intptr_t)(ws+3496);
	i8 v5091 = *(i8*)(intptr_t)v5090;
	i8 v5092 = (i8)+0;
	if (v5091==v5092) goto c02_03da; else goto c02_03d9;

c02_03d9:;

	i8 v5093 = (i8)(intptr_t)(ws+3488);
	i8 v5094 = *(i8*)(intptr_t)v5093;
	i8 v5095 = (i8)(intptr_t)(ws+3496);
	i8 v5096 = *(i8*)(intptr_t)v5095;
	i8 v5097 = (i8)(intptr_t)(f216_LookupSymbolInNamespace);
	i8 v5098;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5097)(&v5098, v5096, v5094);

	i8 v5099 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v5099 = v5098;

	i8 v5100 = (i8)(intptr_t)(ws+3520);
	i8 v5101 = *(i8*)(intptr_t)v5100;
	i8 v5102 = (i8)+0;
	if (v5101==v5102) goto c02_03df; else goto c02_03de;

c02_03de:;

	i8 v5103 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v5103)();

	i8 v5104 = (i8)(intptr_t)c02_s00f5;
	i8 v5105 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5105)(v5104);

	i8 v5106 = (i8)(intptr_t)(ws+3496);
	i8 v5107 = *(i8*)(intptr_t)v5106;
	i8 v5108 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5108)(v5107);

	i8 v5109 = (i8)(intptr_t)c02_s00f6;
	i8 v5110 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5110)(v5109);

	i8 v5111 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v5111)();

c02_03df:;

c02_03db:;

	i8 v5112 = (i8)(intptr_t)(ws+3496);
	i8 v5113 = *(i8*)(intptr_t)v5112;
	i8 v5114 = (i8)(intptr_t)(ws+3504);
	i8 v5115 = *(i8*)(intptr_t)v5114;
	i8 v5116 = v5115+(+8);
	*(i8*)(intptr_t)v5116 = v5113;

	i8 v5117 = (i8)(intptr_t)(ws+3488);
	i8 v5118 = *(i8*)(intptr_t)v5117;
	i8 v5119 = (i8)(intptr_t)(ws+3504);
	i8 v5120 = *(i8*)(intptr_t)v5119;
	i8 v5121 = (i8)(intptr_t)(f218_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v5121)(v5120, v5118);

c02_03da:;

c02_03d6:;

endsub:;
	*p5074 = *(i8*)(intptr_t)(ws+3504);
}
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3400 length ws+40
void f220_AddAlias(i8* p5122 /* symbol */, i8 p5123 /* real */, i8 p5124 /* name */, i8 p5125 /* namespace */) {
	*(i8*)(intptr_t)(ws+3400) = p5125; /* namespace */
	*(i8*)(intptr_t)(ws+3408) = p5124; /* name */
	*(i8*)(intptr_t)(ws+3416) = p5123; /* real */

	i8 v5126 = (i8)(intptr_t)(ws+3400);
	i8 v5127 = *(i8*)(intptr_t)v5126;
	i8 v5128 = (i8)(intptr_t)(ws+3408);
	i8 v5129 = *(i8*)(intptr_t)v5128;
	i8 v5130 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v5131;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5130)(&v5131, v5129, v5127);

	i8 v5132 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v5132 = v5131;

	i8 v5133 = (i8)(intptr_t)(ws+3432);
	i8 v5134 = *(i8*)(intptr_t)v5133;
	i8 v5135 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5135 = v5134;

	i1 v5136 = (i1)+39;
	i8 v5137 = (i8)(intptr_t)(ws+3424);
	i8 v5138 = *(i8*)(intptr_t)v5137;
	i8 v5139 = v5138+(+32);
	*(i1*)(intptr_t)v5139 = v5136;

	i8 v5140 = (i8)(intptr_t)(ws+3416);
	i8 v5141 = *(i8*)(intptr_t)v5140;
	i8 v5142 = (i8)(intptr_t)(ws+3424);
	i8 v5143 = *(i8*)(intptr_t)v5142;
	*(i8*)(intptr_t)v5143 = v5141;

endsub:;
	*p5122 = *(i8*)(intptr_t)(ws+3424);
}
	void f220_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+3336 length ws+32
void f221_AddAliasString(i8 p5144 /* real */, i8 p5145 /* name */) {
	*(i8*)(intptr_t)(ws+3336) = p5145; /* name */
	*(i8*)(intptr_t)(ws+3344) = p5144; /* real */

	i8 v5146 = (i8)+0;
	i8 v5147 = (i8)(intptr_t)(ws+3336);
	i8 v5148 = *(i8*)(intptr_t)v5147;
	i8 v5149 = (i8)(intptr_t)(ws+3344);
	i8 v5150 = *(i8*)(intptr_t)v5149;
	i8 v5151 = (i8)(intptr_t)(f220_AddAlias);
	i8 v5152;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v5151)(&v5152, v5150, v5148, v5146);

	i8 v5153 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5153 = v5152;

	i8 v5154 = (i8)(intptr_t)(ws+3352);
	i8 v5155 = *(i8*)(intptr_t)v5154;
	i8 v5156 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5156 = v5155;

endsub:;
}
	void f74_StartError(void);
const i1 c02_s00f7[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s00f8[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// CheckNotPartialType workspace at ws+3520 length ws+8
void f222_CheckNotPartialType(i8 p5157 /* type */) {
	*(i8*)(intptr_t)(ws+3520) = p5157; /* type */

	i8 v5158 = (i8)(intptr_t)(ws+3520);
	i8 v5159 = *(i8*)(intptr_t)v5158;
	i8 v5160 = v5159+(+52);
	i1 v5161 = *(i1*)(intptr_t)v5160;
	i1 v5162 = (i1)+1;
	if (v5161==v5162) goto c02_03e3; else goto c02_03e4;

c02_03e3:;

	i8 v5163 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v5163)();

	i8 v5164 = (i8)(intptr_t)c02_s00f7;
	i8 v5165 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5165)(v5164);

	i8 v5166 = (i8)(intptr_t)(ws+3520);
	i8 v5167 = *(i8*)(intptr_t)v5166;
	i8 v5168 = v5167+(+32);
	i8 v5169 = *(i8*)(intptr_t)v5168;
	i8 v5170 = v5169+(+8);
	i8 v5171 = *(i8*)(intptr_t)v5170;
	i8 v5172 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5172)(v5171);

	i8 v5173 = (i8)(intptr_t)c02_s00f8;
	i8 v5174 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5174)(v5173);

	i8 v5175 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v5175)();

c02_03e4:;

c02_03e0:;

endsub:;
}
	void f64_AllocNewSymbol(i8* /* symbol */);
	void f218_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddTypeToNamespace workspace at ws+3528 length ws+40
void f223_AddTypeToNamespace(i8 p5176 /* name */, i8 p5177 /* type */, i8 p5178 /* namespace */) {
	*(i8*)(intptr_t)(ws+3528) = p5178; /* namespace */
	*(i8*)(intptr_t)(ws+3536) = p5177; /* type */
	*(i8*)(intptr_t)(ws+3544) = p5176; /* name */

	i8 v5179 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v5180;

	((void(*)(i8* /* symbol */))(intptr_t)v5179)(&v5180);

	i8 v5181 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v5181 = v5180;

	i8 v5182 = (i8)(intptr_t)(ws+3552);
	i8 v5183 = *(i8*)(intptr_t)v5182;
	i8 v5184 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v5184 = v5183;

	i1 v5185 = (i1)+30;
	i8 v5186 = (i8)(intptr_t)(ws+3560);
	i8 v5187 = *(i8*)(intptr_t)v5186;
	i8 v5188 = v5187+(+32);
	*(i1*)(intptr_t)v5188 = v5185;

	i8 v5189 = (i8)(intptr_t)(ws+3536);
	i8 v5190 = *(i8*)(intptr_t)v5189;
	i8 v5191 = (i8)(intptr_t)(ws+3560);
	i8 v5192 = *(i8*)(intptr_t)v5191;
	*(i8*)(intptr_t)v5192 = v5190;

	i8 v5193 = (i8)(intptr_t)(ws+3544);
	i8 v5194 = *(i8*)(intptr_t)v5193;
	i8 v5195 = (i8)(intptr_t)(ws+3560);
	i8 v5196 = *(i8*)(intptr_t)v5195;
	i8 v5197 = v5196+(+8);
	*(i8*)(intptr_t)v5197 = v5194;

	i8 v5198 = (i8)(intptr_t)(ws+3560);
	i8 v5199 = *(i8*)(intptr_t)v5198;
	i8 v5200 = (i8)(intptr_t)(ws+3536);
	i8 v5201 = *(i8*)(intptr_t)v5200;
	i8 v5202 = v5201+(+32);
	*(i8*)(intptr_t)v5202 = v5199;

	i8 v5203 = (i8)(intptr_t)(ws+3528);
	i8 v5204 = *(i8*)(intptr_t)v5203;
	i8 v5205 = (i8)(intptr_t)(ws+3560);
	i8 v5206 = *(i8*)(intptr_t)v5205;
	i8 v5207 = (i8)(intptr_t)(f218_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v5207)(v5206, v5204);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f223_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeNumberType workspace at ws+3336 length ws+32
void f224_MakeNumberType(i8* p5208 /* type */, i8 p5209 /* name */, i1 p5210 /* is_signed */, i1 p5211 /* alignment */, i1 p5212 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p5212; /* width */
	*(i1*)(intptr_t)(ws+3337) = p5211; /* alignment */
	*(i1*)(intptr_t)(ws+3338) = p5210; /* is_signed */
	*(i8*)(intptr_t)(ws+3344) = p5209; /* name */

	i8 v5213 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v5214;

	((void(*)(i8* /* type */))(intptr_t)v5213)(&v5214);

	i8 v5215 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5215 = v5214;

	i8 v5216 = (i8)(intptr_t)(ws+3360);
	i8 v5217 = *(i8*)(intptr_t)v5216;
	i8 v5218 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5218 = v5217;

	i1 v5219 = (i1)+2;
	i8 v5220 = (i8)(intptr_t)(ws+3352);
	i8 v5221 = *(i8*)(intptr_t)v5220;
	i8 v5222 = v5221+(+52);
	*(i1*)(intptr_t)v5222 = v5219;

	i8 v5223 = (i8)(intptr_t)(ws+3336);
	i1 v5224 = *(i1*)(intptr_t)v5223;
	i2 v5225 = v5224;
	i8 v5226 = (i8)(intptr_t)(ws+3352);
	i8 v5227 = *(i8*)(intptr_t)v5226;
	i8 v5228 = v5227+(+48);
	*(i2*)(intptr_t)v5228 = v5225;

	i8 v5229 = (i8)(intptr_t)(ws+3336);
	i1 v5230 = *(i1*)(intptr_t)v5229;
	i2 v5231 = v5230;
	i8 v5232 = (i8)(intptr_t)(ws+3352);
	i8 v5233 = *(i8*)(intptr_t)v5232;
	i8 v5234 = v5233+(+50);
	*(i2*)(intptr_t)v5234 = v5231;

	i8 v5235 = (i8)(intptr_t)(ws+3337);
	i1 v5236 = *(i1*)(intptr_t)v5235;
	i8 v5237 = (i8)(intptr_t)(ws+3352);
	i8 v5238 = *(i8*)(intptr_t)v5237;
	i8 v5239 = v5238+(+53);
	*(i1*)(intptr_t)v5239 = v5236;

	i8 v5240 = (i8)(intptr_t)(ws+3338);
	i1 v5241 = *(i1*)(intptr_t)v5240;
	i8 v5242 = (i8)(intptr_t)(ws+3352);
	i8 v5243 = *(i8*)(intptr_t)v5242;
	*(i1*)(intptr_t)v5243 = v5241;

	i8 v5244 = (i8)(intptr_t)(ws+40);
	i8 v5245 = *(i8*)(intptr_t)v5244;
	i8 v5246 = v5245+(+16);
	i8 v5247 = (i8)(intptr_t)(ws+3352);
	i8 v5248 = *(i8*)(intptr_t)v5247;
	i8 v5249 = (i8)(intptr_t)(ws+3344);
	i8 v5250 = *(i8*)(intptr_t)v5249;
	i8 v5251 = (i8)(intptr_t)(f223_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5251)(v5250, v5248, v5246);

endsub:;
	*p5208 = *(i8*)(intptr_t)(ws+3352);
}

// IsTypeOfKind workspace at ws+3576 length ws+10
void f225_IsTypeOfKind(i1* p5252 /* result */, i1 p5253 /* kind */, i8 p5254 /* type */) {
	*(i8*)(intptr_t)(ws+3576) = p5254; /* type */
	*(i1*)(intptr_t)(ws+3584) = p5253; /* kind */

	i1 v5255 = (i1)+0;
	i8 v5256 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v5256 = v5255;

	i8 v5257 = (i8)(intptr_t)(ws+3576);
	i8 v5258 = *(i8*)(intptr_t)v5257;
	i8 v5259 = (i8)+0;
	if (v5258==v5259) goto c02_03eb; else goto c02_03ec;

c02_03ec:;

	i8 v5260 = (i8)(intptr_t)(ws+3576);
	i8 v5261 = *(i8*)(intptr_t)v5260;
	i8 v5262 = v5261+(+52);
	i1 v5263 = *(i1*)(intptr_t)v5262;
	i8 v5264 = (i8)(intptr_t)(ws+3584);
	i1 v5265 = *(i1*)(intptr_t)v5264;
	if (v5263==v5265) goto c02_03ea; else goto c02_03eb;

c02_03ea:;

	i1 v5266 = (i1)+1;
	i8 v5267 = (i8)(intptr_t)(ws+3585);
	*(i1*)(intptr_t)v5267 = v5266;

c02_03eb:;

c02_03e5:;

endsub:;
	*p5252 = *(i1*)(intptr_t)(ws+3585);
}
	void f225_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3496 length ws+10
void f226_IsArray(i1* p5268 /* result */, i8 p5269 /* type */) {
	*(i8*)(intptr_t)(ws+3496) = p5269; /* type */

	i8 v5270 = (i8)(intptr_t)(ws+3496);
	i8 v5271 = *(i8*)(intptr_t)v5270;
	i1 v5272 = (i1)+4;
	i8 v5273 = (i8)(intptr_t)(f225_IsTypeOfKind);
	i1 v5274;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v5273)(&v5274, v5272, v5271);

	i8 v5275 = (i8)(intptr_t)(ws+3505);
	*(i1*)(intptr_t)v5275 = v5274;

	i8 v5276 = (i8)(intptr_t)(ws+3505);
	i1 v5277 = *(i1*)(intptr_t)v5276;
	i8 v5278 = (i8)(intptr_t)(ws+3504);
	*(i1*)(intptr_t)v5278 = v5277;

endsub:;
	*p5268 = *(i1*)(intptr_t)(ws+3504);
}
	void f225_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3560 length ws+10
void f68_IsPtr(i1* p5279 /* result */, i8 p5280 /* type */) {
	*(i8*)(intptr_t)(ws+3560) = p5280; /* type */

	i8 v5281 = (i8)(intptr_t)(ws+3560);
	i8 v5282 = *(i8*)(intptr_t)v5281;
	i1 v5283 = (i1)+3;
	i8 v5284 = (i8)(intptr_t)(f225_IsTypeOfKind);
	i1 v5285;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v5284)(&v5285, v5283, v5282);

	i8 v5286 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v5286 = v5285;

	i8 v5287 = (i8)(intptr_t)(ws+3569);
	i1 v5288 = *(i1*)(intptr_t)v5287;
	i8 v5289 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v5289 = v5288;

endsub:;
	*p5279 = *(i1*)(intptr_t)(ws+3568);
}
	void f225_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3560 length ws+10
void f227_IsSubroutine(i1* p5290 /* result */, i8 p5291 /* type */) {
	*(i8*)(intptr_t)(ws+3560) = p5291; /* type */

	i8 v5292 = (i8)(intptr_t)(ws+3560);
	i8 v5293 = *(i8*)(intptr_t)v5292;
	i1 v5294 = (i1)+6;
	i8 v5295 = (i8)(intptr_t)(f225_IsTypeOfKind);
	i1 v5296;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v5295)(&v5296, v5294, v5293);

	i8 v5297 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v5297 = v5296;

	i8 v5298 = (i8)(intptr_t)(ws+3569);
	i1 v5299 = *(i1*)(intptr_t)v5298;
	i8 v5300 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v5300 = v5299;

endsub:;
	*p5290 = *(i1*)(intptr_t)(ws+3568);
}
	void f225_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3560 length ws+10
void f228_IsNum(i1* p5301 /* result */, i8 p5302 /* type */) {
	*(i8*)(intptr_t)(ws+3560) = p5302; /* type */

	i8 v5303 = (i8)(intptr_t)(ws+3560);
	i8 v5304 = *(i8*)(intptr_t)v5303;
	i8 v5305 = (i8)+0;
	if (v5304==v5305) goto c02_03f0; else goto c02_03f1;

c02_03f0:;

	i1 v5306 = (i1)+1;
	i8 v5307 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v5307 = v5306;

	goto c02_03ed;

c02_03f1:;

	i8 v5308 = (i8)(intptr_t)(ws+3560);
	i8 v5309 = *(i8*)(intptr_t)v5308;
	i1 v5310 = (i1)+2;
	i8 v5311 = (i8)(intptr_t)(f225_IsTypeOfKind);
	i1 v5312;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v5311)(&v5312, v5310, v5309);

	i8 v5313 = (i8)(intptr_t)(ws+3569);
	*(i1*)(intptr_t)v5313 = v5312;

	i8 v5314 = (i8)(intptr_t)(ws+3569);
	i1 v5315 = *(i1*)(intptr_t)v5314;
	i8 v5316 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v5316 = v5315;

c02_03ed:;

endsub:;
	*p5301 = *(i1*)(intptr_t)(ws+3568);
}
	void f225_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3456 length ws+10
void f229_IsSNum(i1* p5317 /* result */, i8 p5318 /* type */) {
	*(i8*)(intptr_t)(ws+3456) = p5318; /* type */

	i8 v5319 = (i8)(intptr_t)(ws+3456);
	i8 v5320 = *(i8*)(intptr_t)v5319;
	i8 v5321 = (i8)+0;
	if (v5320==v5321) goto c02_03f5; else goto c02_03f6;

c02_03f5:;

	i1 v5322 = (i1)+1;
	i8 v5323 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v5323 = v5322;

	goto c02_03f2;

c02_03f6:;

	i8 v5324 = (i8)(intptr_t)(ws+3456);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	i1 v5326 = (i1)+2;
	i8 v5327 = (i8)(intptr_t)(f225_IsTypeOfKind);
	i1 v5328;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v5327)(&v5328, v5326, v5325);

	i8 v5329 = (i8)(intptr_t)(ws+3465);
	*(i1*)(intptr_t)v5329 = v5328;

	i8 v5330 = (i8)(intptr_t)(ws+3465);
	i1 v5331 = *(i1*)(intptr_t)v5330;
	i1 v5332 = (i1)+0;
	if (v5331==v5332) goto c02_03fc; else goto c02_03fd;

c02_03fd:;

	i8 v5333 = (i8)(intptr_t)(ws+3456);
	i8 v5334 = *(i8*)(intptr_t)v5333;
	i1 v5335 = *(i1*)(intptr_t)v5334;
	i1 v5336 = (i1)+0;
	if (v5335==v5336) goto c02_03fc; else goto c02_03fb;

c02_03fb:;

	i1 v5337 = (i1)+1;
	i8 v5338 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v5338 = v5337;

	goto c02_03f2;

c02_03fc:;

	i1 v5339 = (i1)+0;
	i8 v5340 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v5340 = v5339;

c02_03f2:;

endsub:;
	*p5317 = *(i1*)(intptr_t)(ws+3464);
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f228_IsNum(i1* /* result */, i8 /* type */);
	void f227_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3544 length ws+12
void f230_IsScalar(i1* p5341 /* result */, i8 p5342 /* type */) {
	*(i8*)(intptr_t)(ws+3544) = p5342; /* type */

	i8 v5343 = (i8)(intptr_t)(ws+3544);
	i8 v5344 = *(i8*)(intptr_t)v5343;
	i8 v5345 = (i8)(intptr_t)(f68_IsPtr);
	i1 v5346;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5345)(&v5346, v5344);

	i8 v5347 = (i8)(intptr_t)(ws+3553);
	*(i1*)(intptr_t)v5347 = v5346;

	i8 v5348 = (i8)(intptr_t)(ws+3544);
	i8 v5349 = *(i8*)(intptr_t)v5348;
	i8 v5350 = (i8)(intptr_t)(f228_IsNum);
	i1 v5351;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5350)(&v5351, v5349);

	i8 v5352 = (i8)(intptr_t)(ws+3554);
	*(i1*)(intptr_t)v5352 = v5351;

	i8 v5353 = (i8)(intptr_t)(ws+3544);
	i8 v5354 = *(i8*)(intptr_t)v5353;
	i8 v5355 = (i8)(intptr_t)(f227_IsSubroutine);
	i1 v5356;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5355)(&v5356, v5354);

	i8 v5357 = (i8)(intptr_t)(ws+3555);
	*(i1*)(intptr_t)v5357 = v5356;

	i8 v5358 = (i8)(intptr_t)(ws+3553);
	i1 v5359 = *(i1*)(intptr_t)v5358;
	i1 v5360 = (i1)+0;
	if (v5359==v5360) goto c02_0408; else goto c02_0405;

c02_0408:;

	i8 v5361 = (i8)(intptr_t)(ws+3554);
	i1 v5362 = *(i1*)(intptr_t)v5361;
	i1 v5363 = (i1)+0;
	if (v5362==v5363) goto c02_0407; else goto c02_0405;

c02_0407:;

	i8 v5364 = (i8)(intptr_t)(ws+3555);
	i1 v5365 = *(i1*)(intptr_t)v5364;
	i1 v5366 = (i1)+0;
	if (v5365==v5366) goto c02_0406; else goto c02_0405;

c02_0405:;

	i1 v5367 = (i1)+1;
	i8 v5368 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v5368 = v5367;

	goto c02_03fe;

c02_0406:;

	i1 v5369 = (i1)+0;
	i8 v5370 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v5370 = v5369;

c02_03fe:;

endsub:;
	*p5341 = *(i1*)(intptr_t)(ws+3552);
}
	void f225_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3488 length ws+10
void f231_IsRecord(i1* p5371 /* result */, i8 p5372 /* type */) {
	*(i8*)(intptr_t)(ws+3488) = p5372; /* type */

	i8 v5373 = (i8)(intptr_t)(ws+3488);
	i8 v5374 = *(i8*)(intptr_t)v5373;
	i1 v5375 = (i1)+5;
	i8 v5376 = (i8)(intptr_t)(f225_IsTypeOfKind);
	i1 v5377;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v5376)(&v5377, v5375, v5374);

	i8 v5378 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v5378 = v5377;

	i8 v5379 = (i8)(intptr_t)(ws+3497);
	i1 v5380 = *(i1*)(intptr_t)v5379;
	i8 v5381 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5381 = v5380;

endsub:;
	*p5371 = *(i1*)(intptr_t)(ws+3496);
}
	void f230_IsScalar(i1* /* result */, i8 /* type */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3496 length ws+48
void f232_MakeLValue(i8* p5382 /* lvalue */, i8 p5383 /* address */) {
	*(i8*)(intptr_t)(ws+3496) = p5383; /* address */

	i1 v5384 = (i1)+0;
	i8 v5385 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v5385 = v5384;

	i8 v5386 = (i8)(intptr_t)(ws+3496);
	i8 v5387 = *(i8*)(intptr_t)v5386;
	i8 v5388 = v5387+(+16);
	i8 v5389 = *(i8*)(intptr_t)v5388;
	i8 v5390 = *(i8*)(intptr_t)v5389;
	i8 v5391 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v5391 = v5390;

	i8 v5392 = (i8)(intptr_t)(ws+3520);
	i8 v5393 = *(i8*)(intptr_t)v5392;
	i8 v5394 = (i8)(intptr_t)(f230_IsScalar);
	i1 v5395;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5394)(&v5395, v5393);

	i8 v5396 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v5396 = v5395;

	i8 v5397 = (i8)(intptr_t)(ws+3528);
	i1 v5398 = *(i1*)(intptr_t)v5397;
	i1 v5399 = (i1)+0;
	if (v5398==v5399) goto c02_040d; else goto c02_040c;

c02_040c:;

	i8 v5400 = (i8)(intptr_t)(ws+3520);
	i8 v5401 = *(i8*)(intptr_t)v5400;
	i8 v5402 = v5401+(+48);
	i2 v5403 = *(i2*)(intptr_t)v5402;
	i1 v5404 = v5403;
	i8 v5405 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v5405 = v5404;

c02_040d:;

c02_0409:;

	i8 v5406 = (i8)(intptr_t)(ws+3512);
	i1 v5407 = *(i1*)(intptr_t)v5406;
	i8 v5408 = (i8)(intptr_t)(ws+3496);
	i8 v5409 = *(i8*)(intptr_t)v5408;
	i8 v5410 = (i8)(intptr_t)(f106_MidDeref);
	i8 v5411;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v5410)(&v5411, v5409, v5407);

	i8 v5412 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v5412 = v5411;

	i8 v5413 = (i8)(intptr_t)(ws+3536);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5415 = v5414;

	i8 v5416 = (i8)(intptr_t)(ws+3520);
	i8 v5417 = *(i8*)(intptr_t)v5416;
	i8 v5418 = (i8)(intptr_t)(ws+3504);
	i8 v5419 = *(i8*)(intptr_t)v5418;
	i8 v5420 = v5419+(+16);
	*(i8*)(intptr_t)v5420 = v5417;

endsub:;
	*p5382 = *(i8*)(intptr_t)(ws+3504);
}
const i1 c02_s00f9[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f63_Discard(i8 /* node */);

// UndoLValue workspace at ws+3432 length ws+17
void f233_UndoLValue(i8* p5421 /* address */, i8 p5422 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3432) = p5422; /* lvalue */

	i8 v5423 = (i8)(intptr_t)(ws+3432);
	i8 v5424 = *(i8*)(intptr_t)v5423;
	i8 v5425 = v5424+(+40);
	i1 v5426 = *(i1*)(intptr_t)v5425;
	i8 v5427 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v5427 = v5426;

	i8 v5428 = (i8)(intptr_t)(ws+3448);
	i1 v5429 = *(i1*)(intptr_t)v5428;
	i1 v5430 = (i1)+44;
	if (v5429<v5430) goto c02_0413; else goto c02_0415;

c02_0415:;

	i1 v5431 = (i1)+48;
	i8 v5432 = (i8)(intptr_t)(ws+3448);
	i1 v5433 = *(i1*)(intptr_t)v5432;
	if (v5431<v5433) goto c02_0413; else goto c02_0414;

c02_0413:;

	i8 v5434 = (i8)(intptr_t)c02_s00f9;
	i8 v5435 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5435)(v5434);

c02_0414:;

c02_040e:;

	i8 v5436 = (i8)(intptr_t)(ws+3432);
	i8 v5437 = *(i8*)(intptr_t)v5436;
	i8 v5438 = v5437+(+24);
	i8 v5439 = *(i8*)(intptr_t)v5438;
	i8 v5440 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v5440 = v5439;

	i8 v5441 = (i8)+0;
	i8 v5442 = (i8)(intptr_t)(ws+3432);
	i8 v5443 = *(i8*)(intptr_t)v5442;
	i8 v5444 = v5443+(+24);
	*(i8*)(intptr_t)v5444 = v5441;

	i8 v5445 = (i8)(intptr_t)(ws+3432);
	i8 v5446 = *(i8*)(intptr_t)v5445;
	i8 v5447 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5447)(v5446);

endsub:;
	*p5421 = *(i8*)(intptr_t)(ws+3440);
}

// IsLValue workspace at ws+3488 length ws+10
void f234_IsLValue(i1* p5448 /* result */, i8 p5449 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3488) = p5449; /* lvalue */

	i1 v5450 = (i1)+0;
	i8 v5451 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5451 = v5450;

	i8 v5452 = (i8)(intptr_t)(ws+3488);
	i8 v5453 = *(i8*)(intptr_t)v5452;
	i8 v5454 = v5453+(+40);
	i1 v5455 = *(i1*)(intptr_t)v5454;
	i8 v5456 = (i8)(intptr_t)(ws+3497);
	*(i1*)(intptr_t)v5456 = v5455;

	i8 v5457 = (i8)(intptr_t)(ws+3497);
	i1 v5458 = *(i1*)(intptr_t)v5457;
	i1 v5459 = (i1)+44;
	if (v5458<v5459) goto c02_041c; else goto c02_041d;

c02_041d:;

	i1 v5460 = (i1)+48;
	i8 v5461 = (i8)(intptr_t)(ws+3497);
	i1 v5462 = *(i1*)(intptr_t)v5461;
	if (v5460<v5462) goto c02_041c; else goto c02_041b;

c02_041b:;

	i1 v5463 = (i1)+1;
	i8 v5464 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v5464 = v5463;

c02_041c:;

c02_0416:;

endsub:;
	*p5448 = *(i1*)(intptr_t)(ws+3496);
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s00fa[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x72,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// MaybeUndoLValue workspace at ws+3496 length ws+18
void f235_MaybeUndoLValue(i8* p5465 /* address */, i8 p5466 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3496) = p5466; /* lvalue */

	i8 v5467 = (i8)(intptr_t)(ws+3496);
	i8 v5468 = *(i8*)(intptr_t)v5467;
	i8 v5469 = v5468+(+40);
	i1 v5470 = *(i1*)(intptr_t)v5469;
	i8 v5471 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v5471 = v5470;

	i8 v5472 = (i8)(intptr_t)(ws+3512);
	i1 v5473 = *(i1*)(intptr_t)v5472;
	i1 v5474 = (i1)+44;
	if (v5473<v5474) goto c02_0424; else goto c02_0425;

c02_0425:;

	i1 v5475 = (i1)+48;
	i8 v5476 = (i8)(intptr_t)(ws+3512);
	i1 v5477 = *(i1*)(intptr_t)v5476;
	if (v5475<v5477) goto c02_0424; else goto c02_0423;

c02_0423:;

	i8 v5478 = (i8)(intptr_t)(ws+3496);
	i8 v5479 = *(i8*)(intptr_t)v5478;
	i8 v5480 = v5479+(+24);
	i8 v5481 = *(i8*)(intptr_t)v5480;
	i8 v5482 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5482 = v5481;

	i8 v5483 = (i8)+0;
	i8 v5484 = (i8)(intptr_t)(ws+3496);
	i8 v5485 = *(i8*)(intptr_t)v5484;
	i8 v5486 = v5485+(+24);
	*(i8*)(intptr_t)v5486 = v5483;

	goto c02_041e;

c02_0424:;

	i8 v5487 = (i8)(intptr_t)(ws+3496);
	i8 v5488 = *(i8*)(intptr_t)v5487;
	i8 v5489 = v5488+(+16);
	i8 v5490 = *(i8*)(intptr_t)v5489;
	i8 v5491 = (i8)(intptr_t)(f68_IsPtr);
	i1 v5492;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5491)(&v5492, v5490);

	i8 v5493 = (i8)(intptr_t)(ws+3513);
	*(i1*)(intptr_t)v5493 = v5492;

	i8 v5494 = (i8)(intptr_t)(ws+3513);
	i1 v5495 = *(i1*)(intptr_t)v5494;
	i1 v5496 = (i1)+0;
	if (v5495==v5496) goto c02_0429; else goto c02_0428;

c02_0428:;

	i8 v5497 = (i8)(intptr_t)(ws+3496);
	i8 v5498 = *(i8*)(intptr_t)v5497;
	i8 v5499 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v5499 = v5498;

	goto c02_041e;

c02_0429:;

	i8 v5500 = (i8)(intptr_t)c02_s00fa;
	i8 v5501 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5501)(v5500);

c02_041e:;

endsub:;
	*p5465 = *(i8*)(intptr_t)(ws+3504);
}

// AllocLabel workspace at ws+3472 length ws+2
void f236_AllocLabel(i2* p5502 /* label */) {

	i8 v5503 = (i8)(intptr_t)(ws+48);
	i2 v5504 = *(i2*)(intptr_t)v5503;
	i8 v5505 = (i8)(intptr_t)(ws+3472);
	*(i2*)(intptr_t)v5505 = v5504;

	i8 v5506 = (i8)(intptr_t)(ws+48);
	i2 v5507 = *(i2*)(intptr_t)v5506;
	i2 v5508 = v5507+(+1);
	i8 v5509 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v5509 = v5508;

endsub:;
	*p5502 = *(i2*)(intptr_t)(ws+3472);
}

// AllocSubrId workspace at ws+3416 length ws+2
void f237_AllocSubrId(i2* p5510 /* id */) {

	i8 v5511 = (i8)(intptr_t)(ws+50);
	i2 v5512 = *(i2*)(intptr_t)v5511;
	i8 v5513 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v5513 = v5512;

	i8 v5514 = (i8)(intptr_t)(ws+50);
	i2 v5515 = *(i2*)(intptr_t)v5514;
	i2 v5516 = v5515+(+1);
	i8 v5517 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v5517 = v5516;

endsub:;
	*p5510 = *(i2*)(intptr_t)(ws+3416);
}

// MidWriter workspace at ws+3560 length ws+8
void f238_MidWriter(i8 p5518 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5518; /* node */

endsub:;
}

// ArchAlignUp workspace at ws+3544 length ws+8
void f239_ArchAlignUp(i2* p5519 /* newvalue */, i1 p5520 /* alignment */, i2 p5521 /* value */) {
	*(i2*)(intptr_t)(ws+3544) = p5521; /* value */
	*(i1*)(intptr_t)(ws+3546) = p5520; /* alignment */

	i8 v5522 = (i8)(intptr_t)(ws+3546);
	i1 v5523 = *(i1*)(intptr_t)v5522;
	i1 v5524 = v5523+(-1);
	i2 v5525 = v5524;
	i8 v5526 = (i8)(intptr_t)(ws+3550);
	*(i2*)(intptr_t)v5526 = v5525;

	i8 v5527 = (i8)(intptr_t)(ws+3544);
	i2 v5528 = *(i2*)(intptr_t)v5527;
	i8 v5529 = (i8)(intptr_t)(ws+3550);
	i2 v5530 = *(i2*)(intptr_t)v5529;
	i2 v5531 = v5528+v5530;
	i8 v5532 = (i8)(intptr_t)(ws+3550);
	i2 v5533 = *(i2*)(intptr_t)v5532;
	i2 v5534 = ~v5533;
	i2 v5535 = v5531&v5534;
	i8 v5536 = (i8)(intptr_t)(ws+3548);
	*(i2*)(intptr_t)v5536 = v5535;

endsub:;
	*p5519 = *(i2*)(intptr_t)(ws+3548);
}
const i1 c02_s00fb[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s00fc[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s00fd[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s00fe[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s00ff[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0100[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0101[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0102[] = { 0x69,0x6e,0x74,0x38,0 };
	void f224_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0103[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f217_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
const i1 c02_s0104[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
	void f221_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+3264 length ws+72
void f240_ArchInitTypes(void) {

	i1 v5537 = (i1)+8;
	i1 v5538 = (i1)+8;
	i1 v5539 = (i1)+0;
	i8 v5540 = (i8)(intptr_t)c02_s00fb;
	i8 v5541 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5542;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5541)(&v5542, v5540, v5539, v5538, v5537);

	i8 v5543 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5543 = v5542;

	i8 v5544 = (i8)(intptr_t)(ws+3264);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v5546 = v5545;

	i1 v5547 = (i1)+8;
	i1 v5548 = (i1)+8;
	i1 v5549 = (i1)+1;
	i8 v5550 = (i8)(intptr_t)c02_s00fc;
	i8 v5551 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5552;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5551)(&v5552, v5550, v5549, v5548, v5547);

	i8 v5553 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5553 = v5552;

	i8 v5554 = (i8)(intptr_t)(ws+3272);
	i8 v5555 = *(i8*)(intptr_t)v5554;
	i8 v5556 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v5556 = v5555;

	i1 v5557 = (i1)+4;
	i1 v5558 = (i1)+4;
	i1 v5559 = (i1)+0;
	i8 v5560 = (i8)(intptr_t)c02_s00fd;
	i8 v5561 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5562;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5561)(&v5562, v5560, v5559, v5558, v5557);

	i8 v5563 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v5563 = v5562;

	i8 v5564 = (i8)(intptr_t)(ws+3280);
	i8 v5565 = *(i8*)(intptr_t)v5564;
	i8 v5566 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v5566 = v5565;

	i1 v5567 = (i1)+4;
	i1 v5568 = (i1)+4;
	i1 v5569 = (i1)+1;
	i8 v5570 = (i8)(intptr_t)c02_s00fe;
	i8 v5571 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5572;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5571)(&v5572, v5570, v5569, v5568, v5567);

	i8 v5573 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v5573 = v5572;

	i8 v5574 = (i8)(intptr_t)(ws+3288);
	i8 v5575 = *(i8*)(intptr_t)v5574;
	i8 v5576 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v5576 = v5575;

	i1 v5577 = (i1)+2;
	i1 v5578 = (i1)+2;
	i1 v5579 = (i1)+0;
	i8 v5580 = (i8)(intptr_t)c02_s00ff;
	i8 v5581 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5582;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5581)(&v5582, v5580, v5579, v5578, v5577);

	i8 v5583 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v5583 = v5582;

	i8 v5584 = (i8)(intptr_t)(ws+3296);
	i8 v5585 = *(i8*)(intptr_t)v5584;
	i8 v5586 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v5586 = v5585;

	i1 v5587 = (i1)+2;
	i1 v5588 = (i1)+2;
	i1 v5589 = (i1)+1;
	i8 v5590 = (i8)(intptr_t)c02_s0100;
	i8 v5591 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5592;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5591)(&v5592, v5590, v5589, v5588, v5587);

	i8 v5593 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v5593 = v5592;

	i8 v5594 = (i8)(intptr_t)(ws+3304);
	i8 v5595 = *(i8*)(intptr_t)v5594;
	i8 v5596 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v5596 = v5595;

	i1 v5597 = (i1)+1;
	i1 v5598 = (i1)+1;
	i1 v5599 = (i1)+0;
	i8 v5600 = (i8)(intptr_t)c02_s0101;
	i8 v5601 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5602;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5601)(&v5602, v5600, v5599, v5598, v5597);

	i8 v5603 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v5603 = v5602;

	i8 v5604 = (i8)(intptr_t)(ws+3312);
	i8 v5605 = *(i8*)(intptr_t)v5604;
	i8 v5606 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v5606 = v5605;

	i1 v5607 = (i1)+1;
	i1 v5608 = (i1)+1;
	i1 v5609 = (i1)+1;
	i8 v5610 = (i8)(intptr_t)c02_s0102;
	i8 v5611 = (i8)(intptr_t)(f224_MakeNumberType);
	i8 v5612;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v5611)(&v5612, v5610, v5609, v5608, v5607);

	i8 v5613 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v5613 = v5612;

	i8 v5614 = (i8)(intptr_t)(ws+3320);
	i8 v5615 = *(i8*)(intptr_t)v5614;
	i8 v5616 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v5616 = v5615;

	i8 v5617 = (i8)(intptr_t)(ws+1464);
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v5619 = v5618;

	i8 v5620 = (i8)+0;
	i8 v5621 = (i8)(intptr_t)c02_s0103;
	i8 v5622 = (i8)(intptr_t)(f217_LookupSymbol);
	i8 v5623;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5622)(&v5623, v5621, v5620);

	i8 v5624 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v5624 = v5623;

	i8 v5625 = (i8)(intptr_t)c02_s0104;
	i8 v5626 = (i8)(intptr_t)(ws+3328);
	i8 v5627 = *(i8*)(intptr_t)v5626;
	i8 v5628 = (i8)(intptr_t)(f221_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v5628)(v5627, v5625);

endsub:;
}

// ArchGuessIntType workspace at ws+3448 length ws+16
void f241_ArchGuessIntType(i8* p5629 /* symbol */, i4 p5630 /* max */, i4 p5631 /* min */) {
	*(i4*)(intptr_t)(ws+3448) = p5631; /* min */
	*(i4*)(intptr_t)(ws+3452) = p5630; /* max */

	i8 v5632 = (i8)(intptr_t)(ws+3448);
	i4 v5633 = *(i4*)(intptr_t)v5632;
	i4 v5634 = (i4)+0;
	if ((s4)v5633<(s4)v5634) goto c02_0430; else goto c02_0431;

c02_0431:;

	i4 v5635 = (i4)+255;
	i8 v5636 = (i8)(intptr_t)(ws+3452);
	i4 v5637 = *(i4*)(intptr_t)v5636;
	if ((s4)v5635<(s4)v5637) goto c02_0430; else goto c02_042f;

c02_042f:;

	i8 v5638 = (i8)(intptr_t)(ws+1512);
	i8 v5639 = *(i8*)(intptr_t)v5638;
	i8 v5640 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5640 = v5639;

	goto c02_042a;

c02_0430:;

	i8 v5641 = (i8)(intptr_t)(ws+3448);
	i4 v5642 = *(i4*)(intptr_t)v5641;
	i4 v5643 = (i4)-128;
	if ((s4)v5642<(s4)v5643) goto c02_0437; else goto c02_0438;

c02_0438:;

	i4 v5644 = (i4)+127;
	i8 v5645 = (i8)(intptr_t)(ws+3452);
	i4 v5646 = *(i4*)(intptr_t)v5645;
	if ((s4)v5644<(s4)v5646) goto c02_0437; else goto c02_0436;

c02_0436:;

	i8 v5647 = (i8)(intptr_t)(ws+1520);
	i8 v5648 = *(i8*)(intptr_t)v5647;
	i8 v5649 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5649 = v5648;

	goto c02_042a;

c02_0437:;

	i8 v5650 = (i8)(intptr_t)(ws+3448);
	i4 v5651 = *(i4*)(intptr_t)v5650;
	i4 v5652 = (i4)+0;
	if ((s4)v5651<(s4)v5652) goto c02_043e; else goto c02_043f;

c02_043f:;

	i4 v5653 = (i4)+65535;
	i8 v5654 = (i8)(intptr_t)(ws+3452);
	i4 v5655 = *(i4*)(intptr_t)v5654;
	if ((s4)v5653<(s4)v5655) goto c02_043e; else goto c02_043d;

c02_043d:;

	i8 v5656 = (i8)(intptr_t)(ws+1496);
	i8 v5657 = *(i8*)(intptr_t)v5656;
	i8 v5658 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5658 = v5657;

	goto c02_042a;

c02_043e:;

	i8 v5659 = (i8)(intptr_t)(ws+3448);
	i4 v5660 = *(i4*)(intptr_t)v5659;
	i4 v5661 = (i4)-32768;
	if ((s4)v5660<(s4)v5661) goto c02_0445; else goto c02_0446;

c02_0446:;

	i4 v5662 = (i4)+32767;
	i8 v5663 = (i8)(intptr_t)(ws+3452);
	i4 v5664 = *(i4*)(intptr_t)v5663;
	if ((s4)v5662<(s4)v5664) goto c02_0445; else goto c02_0444;

c02_0444:;

	i8 v5665 = (i8)(intptr_t)(ws+1504);
	i8 v5666 = *(i8*)(intptr_t)v5665;
	i8 v5667 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5667 = v5666;

	goto c02_042a;

c02_0445:;

	i8 v5668 = (i8)(intptr_t)(ws+3448);
	i4 v5669 = *(i4*)(intptr_t)v5668;
	i4 v5670 = (i4)+0;
	if ((s4)v5669<(s4)v5670) goto c02_044a; else goto c02_0449;

c02_0449:;

	i8 v5671 = (i8)(intptr_t)(ws+1480);
	i8 v5672 = *(i8*)(intptr_t)v5671;
	i8 v5673 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5673 = v5672;

	goto c02_042a;

c02_044a:;

	i8 v5674 = (i8)(intptr_t)(ws+1488);
	i8 v5675 = *(i8*)(intptr_t)v5674;
	i8 v5676 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v5676 = v5675;

c02_042a:;

endsub:;
	*p5629 = *(i8*)(intptr_t)(ws+3456);
}
	void f239_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3520 length ws+20
void f242_ArchInitVariable(i8 p5677 /* symbol */) {
	*(i8*)(intptr_t)(ws+3520) = p5677; /* symbol */

	i8 v5678 = (i8)(intptr_t)(ws+3520);
	i8 v5679 = *(i8*)(intptr_t)v5678;
	i8 v5680 = *(i8*)(intptr_t)v5679;
	i8 v5681 = v5680+(+8);
	i8 v5682 = *(i8*)(intptr_t)v5681;
	i8 v5683 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5683 = v5682;

	i8 v5684 = (i8)(intptr_t)(ws+3528);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	i8 v5686 = v5685+(+58);
	i2 v5687 = *(i2*)(intptr_t)v5686;
	i8 v5688 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5688 = v5687;

	i8 v5689 = (i8)(intptr_t)(ws+3536);
	i2 v5690 = *(i2*)(intptr_t)v5689;
	i8 v5691 = (i8)(intptr_t)(ws+3520);
	i8 v5692 = *(i8*)(intptr_t)v5691;
	i8 v5693 = *(i8*)(intptr_t)v5692;
	i8 v5694 = *(i8*)(intptr_t)v5693;
	i8 v5695 = v5694+(+53);
	i1 v5696 = *(i1*)(intptr_t)v5695;
	i8 v5697 = (i8)(intptr_t)(f239_ArchAlignUp);
	i2 v5698;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5697)(&v5698, v5696, v5690);

	i8 v5699 = (i8)(intptr_t)(ws+3538);
	*(i2*)(intptr_t)v5699 = v5698;

	i8 v5700 = (i8)(intptr_t)(ws+3538);
	i2 v5701 = *(i2*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(ws+3536);
	*(i2*)(intptr_t)v5702 = v5701;

	i8 v5703 = (i8)(intptr_t)(ws+3536);
	i2 v5704 = *(i2*)(intptr_t)v5703;
	i8 v5705 = (i8)(intptr_t)(ws+3520);
	i8 v5706 = *(i8*)(intptr_t)v5705;
	i8 v5707 = *(i8*)(intptr_t)v5706;
	i8 v5708 = v5707+(+24);
	*(i2*)(intptr_t)v5708 = v5704;

	i8 v5709 = (i8)(intptr_t)(ws+3536);
	i2 v5710 = *(i2*)(intptr_t)v5709;
	i8 v5711 = (i8)(intptr_t)(ws+3520);
	i8 v5712 = *(i8*)(intptr_t)v5711;
	i8 v5713 = *(i8*)(intptr_t)v5712;
	i8 v5714 = *(i8*)(intptr_t)v5713;
	i8 v5715 = v5714+(+48);
	i2 v5716 = *(i2*)(intptr_t)v5715;
	i2 v5717 = v5710+v5716;
	i8 v5718 = (i8)(intptr_t)(ws+3528);
	i8 v5719 = *(i8*)(intptr_t)v5718;
	i8 v5720 = v5719+(+58);
	*(i2*)(intptr_t)v5720 = v5717;

endsub:;
}
	void f239_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3392 length ws+20
void f243_ArchInitMember(i2 p5721 /* position */, i8 p5722 /* member */, i8 p5723 /* containing */) {
	*(i8*)(intptr_t)(ws+3392) = p5723; /* containing */
	*(i8*)(intptr_t)(ws+3400) = p5722; /* member */
	*(i2*)(intptr_t)(ws+3408) = p5721; /* position */

	i8 v5724 = (i8)(intptr_t)(ws+3408);
	i2 v5725 = *(i2*)(intptr_t)v5724;
	i8 v5726 = (i8)(intptr_t)(ws+3400);
	i8 v5727 = *(i8*)(intptr_t)v5726;
	i8 v5728 = *(i8*)(intptr_t)v5727;
	i8 v5729 = *(i8*)(intptr_t)v5728;
	i8 v5730 = v5729+(+53);
	i1 v5731 = *(i1*)(intptr_t)v5730;
	i8 v5732 = (i8)(intptr_t)(f239_ArchAlignUp);
	i2 v5733;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v5732)(&v5733, v5731, v5725);

	i8 v5734 = (i8)(intptr_t)(ws+3410);
	*(i2*)(intptr_t)v5734 = v5733;

	i8 v5735 = (i8)(intptr_t)(ws+3410);
	i2 v5736 = *(i2*)(intptr_t)v5735;
	i8 v5737 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5737 = v5736;

	i8 v5738 = (i8)(intptr_t)(ws+3408);
	i2 v5739 = *(i2*)(intptr_t)v5738;
	i8 v5740 = (i8)(intptr_t)(ws+3400);
	i8 v5741 = *(i8*)(intptr_t)v5740;
	i8 v5742 = *(i8*)(intptr_t)v5741;
	i8 v5743 = v5742+(+24);
	*(i2*)(intptr_t)v5743 = v5739;

	i8 v5744 = (i8)(intptr_t)(ws+3408);
	i2 v5745 = *(i2*)(intptr_t)v5744;
	i8 v5746 = (i8)(intptr_t)(ws+3400);
	i8 v5747 = *(i8*)(intptr_t)v5746;
	i8 v5748 = *(i8*)(intptr_t)v5747;
	i8 v5749 = *(i8*)(intptr_t)v5748;
	i8 v5750 = v5749+(+48);
	i2 v5751 = *(i2*)(intptr_t)v5750;
	i2 v5752 = v5745+v5751;
	i8 v5753 = (i8)(intptr_t)(ws+3408);
	*(i2*)(intptr_t)v5753 = v5752;

	i8 v5754 = (i8)(intptr_t)(ws+3392);
	i8 v5755 = *(i8*)(intptr_t)v5754;
	i8 v5756 = v5755+(+48);
	i2 v5757 = *(i2*)(intptr_t)v5756;
	i8 v5758 = (i8)(intptr_t)(ws+3408);
	i2 v5759 = *(i2*)(intptr_t)v5758;
	if (v5757<v5759) goto c02_044e; else goto c02_044f;

c02_044e:;

	i8 v5760 = (i8)(intptr_t)(ws+3408);
	i2 v5761 = *(i2*)(intptr_t)v5760;
	i8 v5762 = (i8)(intptr_t)(ws+3392);
	i8 v5763 = *(i8*)(intptr_t)v5762;
	i8 v5764 = v5763+(+48);
	*(i2*)(intptr_t)v5764 = v5761;

c02_044f:;

c02_044b:;

endsub:;
}
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);

// WriteMid1 workspace at ws+3568 length ws+0
void f244_WriteMid1(i8 p5765 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5765; /* node */

	i8 v5766 = (i8)(intptr_t)(ws+3560);
	i8 v5767 = *(i8*)(intptr_t)v5766;
	i8 v5768 = *(i8*)(intptr_t)v5767;
	i8 v5769 = v5768+(+56);
	i2 v5770 = *(i2*)(intptr_t)v5769;
	i8 v5771 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5771)(v5770);

	i8 v5772 = (i8)(intptr_t)(ws+3560);
	i8 v5773 = *(i8*)(intptr_t)v5772;
	i8 v5774 = v5773+(+8);
	i1 v5775 = *(i1*)(intptr_t)v5774;
	i8 v5776 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5776)(v5775);

endsub:;
}
	void f175_E_b16(i2 /* word */);

// WriteMid2 workspace at ws+3568 length ws+0
void f245_WriteMid2(i8 p5777 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5777; /* node */

	i8 v5778 = (i8)(intptr_t)(ws+3560);
	i8 v5779 = *(i8*)(intptr_t)v5778;
	i2 v5780 = *(i2*)(intptr_t)v5779;
	i8 v5781 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5781)(v5780);

endsub:;
}

// WriteMid3 workspace at ws+3568 length ws+0
void f246_WriteMid3(i8 p5782 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5782; /* node */

endsub:;
}
	void f176_E_b32(i4 /* quad */);

// WriteMid4 workspace at ws+3568 length ws+0
void f247_WriteMid4(i8 p5783 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5783; /* node */

	i8 v5784 = (i8)(intptr_t)(ws+3560);
	i8 v5785 = *(i8*)(intptr_t)v5784;
	i4 v5786 = *(i4*)(intptr_t)v5785;
	i8 v5787 = (i8)(intptr_t)(f176_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5787)(v5786);

endsub:;
}
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);
	void f177_E_bsize(i2 /* size */);
	void f174_E_b8(i1 /* byte */);

// WriteMid5 workspace at ws+3568 length ws+0
void f248_WriteMid5(i8 p5788 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5788; /* node */

	i8 v5789 = (i8)(intptr_t)(ws+3560);
	i8 v5790 = *(i8*)(intptr_t)v5789;
	i8 v5791 = *(i8*)(intptr_t)v5790;
	i8 v5792 = *(i8*)(intptr_t)v5791;
	i8 v5793 = v5792+(+8);
	i8 v5794 = *(i8*)(intptr_t)v5793;
	i8 v5795 = v5794+(+56);
	i2 v5796 = *(i2*)(intptr_t)v5795;
	i8 v5797 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5797)(v5796);

	i8 v5798 = (i8)(intptr_t)(ws+3560);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = *(i8*)(intptr_t)v5799;
	i8 v5801 = *(i8*)(intptr_t)v5800;
	i8 v5802 = v5801+(+26);
	i1 v5803 = *(i1*)(intptr_t)v5802;
	i8 v5804 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5804)(v5803);

	i8 v5805 = (i8)(intptr_t)(ws+3560);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	i8 v5807 = *(i8*)(intptr_t)v5806;
	i8 v5808 = *(i8*)(intptr_t)v5807;
	i8 v5809 = v5808+(+24);
	i2 v5810 = *(i2*)(intptr_t)v5809;
	i8 v5811 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5811)(v5810);

	i8 v5812 = (i8)(intptr_t)(ws+3560);
	i8 v5813 = *(i8*)(intptr_t)v5812;
	i8 v5814 = *(i8*)(intptr_t)v5813;
	i8 v5815 = *(i8*)(intptr_t)v5814;
	i8 v5816 = *(i8*)(intptr_t)v5815;
	i8 v5817 = v5816+(+48);
	i2 v5818 = *(i2*)(intptr_t)v5817;
	i1 v5819 = v5818;
	i8 v5820 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5820)(v5819);

endsub:;
}
	void f176_E_b32(i4 /* quad */);
	void f175_E_b16(i2 /* word */);

// WriteMid6 workspace at ws+3568 length ws+0
void f249_WriteMid6(i8 p5821 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5821; /* node */

	i8 v5822 = (i8)(intptr_t)(ws+3560);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i4 v5824 = *(i4*)(intptr_t)v5823;
	i8 v5825 = (i8)(intptr_t)(f176_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5825)(v5824);

	i8 v5826 = (i8)(intptr_t)(ws+3560);
	i8 v5827 = *(i8*)(intptr_t)v5826;
	i8 v5828 = v5827+(+4);
	i2 v5829 = *(i2*)(intptr_t)v5828;
	i8 v5830 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5830)(v5829);

endsub:;
}
	void f175_E_b16(i2 /* word */);

// WriteMid7 workspace at ws+3568 length ws+0
void f250_WriteMid7(i8 p5831 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5831; /* node */

	i8 v5832 = (i8)(intptr_t)(ws+3560);
	i8 v5833 = *(i8*)(intptr_t)v5832;
	i8 v5834 = *(i8*)(intptr_t)v5833;
	i8 v5835 = v5834+(+56);
	i2 v5836 = *(i2*)(intptr_t)v5835;
	i8 v5837 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5837)(v5836);

endsub:;
}
	void f174_E_b8(i1 /* byte */);

// WriteMid8 workspace at ws+3568 length ws+0
void f251_WriteMid8(i8 p5838 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5838; /* node */

	i8 v5839 = (i8)(intptr_t)(ws+3560);
	i8 v5840 = *(i8*)(intptr_t)v5839;
	i1 v5841 = *(i1*)(intptr_t)v5840;
	i8 v5842 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5842)(v5841);

endsub:;
}
	void f175_E_b16(i2 /* word */);
	void f175_E_b16(i2 /* word */);
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);

// WriteMid9 workspace at ws+3568 length ws+0
void f252_WriteMid9(i8 p5843 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5843; /* node */

	i8 v5844 = (i8)(intptr_t)(ws+3560);
	i8 v5845 = *(i8*)(intptr_t)v5844;
	i2 v5846 = *(i2*)(intptr_t)v5845;
	i8 v5847 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5847)(v5846);

	i8 v5848 = (i8)(intptr_t)(ws+3560);
	i8 v5849 = *(i8*)(intptr_t)v5848;
	i8 v5850 = v5849+(+2);
	i2 v5851 = *(i2*)(intptr_t)v5850;
	i8 v5852 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5852)(v5851);

	i8 v5853 = (i8)(intptr_t)(ws+3560);
	i8 v5854 = *(i8*)(intptr_t)v5853;
	i8 v5855 = v5854+(+4);
	i2 v5856 = *(i2*)(intptr_t)v5855;
	i8 v5857 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5857)(v5856);

	i8 v5858 = (i8)(intptr_t)(ws+3560);
	i8 v5859 = *(i8*)(intptr_t)v5858;
	i8 v5860 = v5859+(+6);
	i1 v5861 = *(i1*)(intptr_t)v5860;
	i8 v5862 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5862)(v5861);

endsub:;
}
	void f175_E_b16(i2 /* word */);
	void f174_E_b8(i1 /* byte */);
	void f177_E_bsize(i2 /* size */);
	void f174_E_b8(i1 /* byte */);
	void f177_E_bsize(i2 /* size */);

// WriteMid10 workspace at ws+3568 length ws+0
void f253_WriteMid10(i8 p5863 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5863; /* node */

	i8 v5864 = (i8)(intptr_t)(ws+3560);
	i8 v5865 = *(i8*)(intptr_t)v5864;
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = *(i8*)(intptr_t)v5866;
	i8 v5868 = v5867+(+8);
	i8 v5869 = *(i8*)(intptr_t)v5868;
	i8 v5870 = v5869+(+56);
	i2 v5871 = *(i2*)(intptr_t)v5870;
	i8 v5872 = (i8)(intptr_t)(f175_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5872)(v5871);

	i8 v5873 = (i8)(intptr_t)(ws+3560);
	i8 v5874 = *(i8*)(intptr_t)v5873;
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = *(i8*)(intptr_t)v5875;
	i8 v5877 = v5876+(+26);
	i1 v5878 = *(i1*)(intptr_t)v5877;
	i8 v5879 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5879)(v5878);

	i8 v5880 = (i8)(intptr_t)(ws+3560);
	i8 v5881 = *(i8*)(intptr_t)v5880;
	i8 v5882 = *(i8*)(intptr_t)v5881;
	i8 v5883 = *(i8*)(intptr_t)v5882;
	i8 v5884 = v5883+(+24);
	i2 v5885 = *(i2*)(intptr_t)v5884;
	i8 v5886 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5886)(v5885);

	i8 v5887 = (i8)(intptr_t)(ws+3560);
	i8 v5888 = *(i8*)(intptr_t)v5887;
	i8 v5889 = *(i8*)(intptr_t)v5888;
	i8 v5890 = *(i8*)(intptr_t)v5889;
	i8 v5891 = *(i8*)(intptr_t)v5890;
	i8 v5892 = v5891+(+48);
	i2 v5893 = *(i2*)(intptr_t)v5892;
	i1 v5894 = v5893;
	i8 v5895 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5895)(v5894);

	i8 v5896 = (i8)(intptr_t)(ws+3560);
	i8 v5897 = *(i8*)(intptr_t)v5896;
	i8 v5898 = v5897+(+8);
	i2 v5899 = *(i2*)(intptr_t)v5898;
	i8 v5900 = (i8)(intptr_t)(f177_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5900)(v5899);

endsub:;
}
	void f185_E_countedstring(i8 /* text */);

// WriteMid11 workspace at ws+3568 length ws+0
void f254_WriteMid11(i8 p5901 /* node */) {
	*(i8*)(intptr_t)(ws+3560) = p5901; /* node */

	i8 v5902 = (i8)(intptr_t)(ws+3560);
	i8 v5903 = *(i8*)(intptr_t)v5902;
	i8 v5904 = *(i8*)(intptr_t)v5903;
	i8 v5905 = (i8)(intptr_t)(f185_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v5905)(v5904);

endsub:;
}
	void f244_WriteMid1(i8 /* node */);
	void f245_WriteMid2(i8 /* node */);
	void f246_WriteMid3(i8 /* node */);
	void f247_WriteMid4(i8 /* node */);
	void f248_WriteMid5(i8 /* node */);
	void f249_WriteMid6(i8 /* node */);
	void f250_WriteMid7(i8 /* node */);
	void f251_WriteMid8(i8 /* node */);
	void f252_WriteMid9(i8 /* node */);
	void f253_WriteMid10(i8 /* node */);
	void f254_WriteMid11(i8 /* node */);
static data f3___main_s0450[] = {

	{ .ptr = (void*)f244_WriteMid1 },

	{ .ptr = (void*)f245_WriteMid2 },

	{ .ptr = (void*)f246_WriteMid3 },

	{ .ptr = (void*)f247_WriteMid4 },

	{ .ptr = (void*)f248_WriteMid5 },

	{ .ptr = (void*)f249_WriteMid6 },

	{ .ptr = (void*)f250_WriteMid7 },

	{ .ptr = (void*)f251_WriteMid8 },

	{ .ptr = (void*)f252_WriteMid9 },

	{ .ptr = (void*)f253_WriteMid10 },

	{ .ptr = (void*)f254_WriteMid11 },

};
static data f3___main_s0451[] = {








	{ .i1 = { 0x02,0x02,0x02,0x06,0x06,0x04,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x0a,0x09,0x06,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x0a,0x04,0x06,0x03,0x02,0x02}},








	{ .i1 = { 0x02,0x01,0x01,0x02,0x06,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03}},








	{ .i1 = { 0x0a,0x09,0x06,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x07,0x07,0x07}},








	{ .i1 = { 0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07}},








	{ .i1 = { 0x07,0x07,0x07,0x07,0x07,0x07,0x07,0x07}},








	{ .i1 = { 0x07,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},





	{ .i1 = { 0x02,0x02,0x02,0x02}},
};
	void f174_E_b8(i1 /* byte */);
	void f60_PushNode(i8 /* node */);
	void f62_NextNode(i8* /* node */);
	void f174_E_b8(i1 /* byte */);
	void f63_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3520 length ws+33
void f256_ReallyGenerate(i8 p5954 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3520) = p5954; /* rootnode */

	i1 v5955 = (i1)+77;
	i8 v5956 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5956)(v5955);

	i8 v5957 = (i8)(intptr_t)(ws+224);
	i8 v5958 = *(i8*)(intptr_t)v5957;
	i8 v5959 = (i8)(intptr_t)(ws+3528);
	*(i8*)(intptr_t)v5959 = v5958;

	i8 v5960 = (i8)(intptr_t)(ws+3520);
	i8 v5961 = *(i8*)(intptr_t)v5960;
	i8 v5962 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5962)(v5961);

c02_045d:;

	i8 v5963 = (i8)(intptr_t)(ws+224);
	i8 v5964 = *(i8*)(intptr_t)v5963;
	i8 v5965 = (i8)(intptr_t)(ws+3528);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	if (v5964==v5966) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5967 = (i8)(intptr_t)(f62_NextNode);
	i8 v5968;

	((void(*)(i8* /* node */))(intptr_t)v5967)(&v5968);

	i8 v5969 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v5969 = v5968;

	i8 v5970 = (i8)(intptr_t)(ws+3536);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = (i8)(intptr_t)(ws+3544);
	*(i8*)(intptr_t)v5972 = v5971;

	i8 v5973 = (i8)(intptr_t)(ws+3544);
	i8 v5974 = *(i8*)(intptr_t)v5973;
	i8 v5975 = v5974+(+40);
	i1 v5976 = *(i1*)(intptr_t)v5975;
	i8 v5977 = (i8)(intptr_t)(f174_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5977)(v5976);

	i8 v5978 = (i8)(intptr_t)((i1*)f3___main_s0451);
	i8 v5979 = (i8)(intptr_t)(ws+3544);
	i8 v5980 = *(i8*)(intptr_t)v5979;
	i8 v5981 = v5980+(+40);
	i1 v5982 = *(i1*)(intptr_t)v5981;
	i1 v5983 = v5982+(-1);
	i8 v5984 = v5983;
	i8 v5985 = v5978+v5984;
	i1 v5986 = *(i1*)(intptr_t)v5985;
	i8 v5987 = (i8)(intptr_t)(ws+3552);
	*(i1*)(intptr_t)v5987 = v5986;

	i8 v5988 = (i8)(intptr_t)(ws+3544);
	i8 v5989 = *(i8*)(intptr_t)v5988;
	i8 v5990 = (i8)(intptr_t)((i1*)f3___main_s0450);
	i8 v5991 = (i8)(intptr_t)(ws+3552);
	i1 v5992 = *(i1*)(intptr_t)v5991;
	i8 v5993 = v5992;
	i1 v5994 = (i1)+3;
	i8 v5995 = ((i8)v5993)<<v5994;
	i8 v5996 = v5990+v5995;
	i8 v5997 = *(i8*)(intptr_t)v5996;

	((void(*)(i8 /* node */))(intptr_t)v5997)(v5989);

	goto c02_045d;

c02_0462:;

	i8 v5998 = (i8)(intptr_t)(ws+3520);
	i8 v5999 = *(i8*)(intptr_t)v5998;
	i8 v6000 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6000)(v5999);

endsub:;
}
	void f63_Discard(i8 /* node */);
	void f152_MidAsmgroupstart(i8* /* m */);
	void f256_ReallyGenerate(i8 /* rootnode */);
	void f104_MidAsmgroupend(i8* /* m */);
	void f256_ReallyGenerate(i8 /* rootnode */);
	void f256_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3488 length ws+32
void f257_Generate(i8 p6003 /* statement */) {
	*(i8*)(intptr_t)(ws+3488) = p6003; /* statement */

	i8 v6004 = (i8)(intptr_t)(ws+3488);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	i8 v6006 = v6005+(+40);
	i1 v6007 = *(i1*)(intptr_t)v6006;
	i8 v6008 = (i8)(intptr_t)(ws+3496);
	*(i1*)(intptr_t)v6008 = v6007;

	i8 v6009 = (i8)(intptr_t)(ws+1536);
	i1 v6010 = *(i1*)(intptr_t)v6009;
	i1 v6011 = (i1)+27;
	if (v6010==v6011) goto c02_0468; else goto c02_046a;

c02_046a:;

	i8 v6012 = (i8)(intptr_t)(ws+1536);
	i1 v6013 = *(i1*)(intptr_t)v6012;
	i1 v6014 = (i1)+28;
	if (v6013==v6014) goto c02_0468; else goto c02_0469;

c02_0468:;

	i8 v6015 = (i8)(intptr_t)(ws+3496);
	i1 v6016 = *(i1*)(intptr_t)v6015;
	i1 v6017 = (i1)+26;
	if (v6016==v6017) goto c02_0471; else goto c02_0472;

c02_0472:;

	i8 v6018 = (i8)(intptr_t)(ws+3496);
	i1 v6019 = *(i1*)(intptr_t)v6018;
	i1 v6020 = (i1)+5;
	if (v6019==v6020) goto c02_0471; else goto c02_0470;

c02_0470:;

	i8 v6021 = (i8)(intptr_t)(ws+3488);
	i8 v6022 = *(i8*)(intptr_t)v6021;
	i8 v6023 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6023)(v6022);

	goto endsub;

c02_0471:;

c02_046b:;

c02_0469:;

c02_0463:;

	i8 v6024 = (i8)(intptr_t)(ws+3496);
	i1 v6025 = *(i1*)(intptr_t)v6024;
	i1 v6026 = (i1)+18;
	if (v6025==v6026) goto c02_047a; else goto c02_0479;

c02_047a:;

	i8 v6027 = (i8)(intptr_t)(ws+1536);
	i1 v6028 = *(i1*)(intptr_t)v6027;
	i1 v6029 = (i1)+23;
	if (v6028==v6029) goto c02_0479; else goto c02_0478;

c02_0478:;

	i8 v6030 = (i8)(intptr_t)(f152_MidAsmgroupstart);
	i8 v6031;

	((void(*)(i8* /* m */))(intptr_t)v6030)(&v6031);

	i8 v6032 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v6032 = v6031;

	i8 v6033 = (i8)(intptr_t)(ws+3504);
	i8 v6034 = *(i8*)(intptr_t)v6033;
	i8 v6035 = (i8)(intptr_t)(f256_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v6035)(v6034);

c02_0479:;

c02_0473:;

	i8 v6036 = (i8)(intptr_t)(ws+1536);
	i1 v6037 = *(i1*)(intptr_t)v6036;
	i1 v6038 = (i1)+23;
	if (v6037==v6038) goto c02_0482; else goto c02_0481;

c02_0482:;

	i8 v6039 = (i8)(intptr_t)(ws+3496);
	i1 v6040 = *(i1*)(intptr_t)v6039;
	i1 v6041 = (i1)+18;
	if (v6040==v6041) goto c02_0481; else goto c02_0480;

c02_0480:;

	i8 v6042 = (i8)(intptr_t)(f104_MidAsmgroupend);
	i8 v6043;

	((void(*)(i8* /* m */))(intptr_t)v6042)(&v6043);

	i8 v6044 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v6044 = v6043;

	i8 v6045 = (i8)(intptr_t)(ws+3512);
	i8 v6046 = *(i8*)(intptr_t)v6045;
	i8 v6047 = (i8)(intptr_t)(f256_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v6047)(v6046);

c02_0481:;

c02_047b:;

	i8 v6048 = (i8)(intptr_t)(ws+3496);
	i1 v6049 = *(i1*)(intptr_t)v6048;
	i8 v6050 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v6050 = v6049;

	i8 v6051 = (i8)(intptr_t)(ws+3488);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i8 v6053 = (i8)(intptr_t)(f256_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v6053)(v6052);

endsub:;
}
	void f60_PushNode(i8 /* node */);
	void f61_PopNode(i8* /* node */);
	void f60_PushNode(i8 /* node */);
	void f60_PushNode(i8 /* node */);
	void f63_Discard(i8 /* node */);

// push_and_free workspace at ws+3472 length ws+0
void f259_push_and_free(void) {

	i8 v6114 = (i8)(intptr_t)(ws+3424);
	i2 v6115 = *(i2*)(intptr_t)v6114;
	i8 v6116 = (i8)(intptr_t)(ws+3440);
	i8 v6117 = *(i8*)(intptr_t)v6116;
	*(i2*)(intptr_t)v6117 = v6115;

	i8 v6118 = (i8)(intptr_t)(ws+3426);
	i2 v6119 = *(i2*)(intptr_t)v6118;
	i8 v6120 = (i8)(intptr_t)(ws+3440);
	i8 v6121 = *(i8*)(intptr_t)v6120;
	i8 v6122 = v6121+(+2);
	*(i2*)(intptr_t)v6122 = v6119;

	i8 v6123 = (i8)(intptr_t)(ws+3428);
	i2 v6124 = *(i2*)(intptr_t)v6123;
	i8 v6125 = (i8)(intptr_t)(ws+3440);
	i8 v6126 = *(i8*)(intptr_t)v6125;
	i8 v6127 = v6126+(+4);
	*(i2*)(intptr_t)v6127 = v6124;

	i8 v6128 = (i8)+0;
	i8 v6129 = (i8)(intptr_t)(ws+3416);
	i8 v6130 = *(i8*)(intptr_t)v6129;
	i8 v6131 = v6130+(+24);
	*(i8*)(intptr_t)v6131 = v6128;

	i8 v6132 = (i8)+0;
	i8 v6133 = (i8)(intptr_t)(ws+3416);
	i8 v6134 = *(i8*)(intptr_t)v6133;
	i8 v6135 = v6134+(+32);
	*(i8*)(intptr_t)v6135 = v6132;

	i8 v6136 = (i8)(intptr_t)(ws+3440);
	i8 v6137 = *(i8*)(intptr_t)v6136;
	i8 v6138 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6138)(v6137);

	i8 v6139 = (i8)(intptr_t)(ws+3432);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i8 v6141 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6141)(v6140);

	i8 v6142 = (i8)(intptr_t)(ws+3416);
	i8 v6143 = *(i8*)(intptr_t)v6142;
	i8 v6144 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6144)(v6143);

endsub:;
}
	void f236_AllocLabel(i2* /* label */);
	void f259_push_and_free(void);
	void f236_AllocLabel(i2* /* label */);
	void f259_push_and_free(void);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3392 length ws+80
void f258_GenerateConditional(i8 p6054 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3392) = p6054; /* rootnode */

	i8 v6055 = (i8)(intptr_t)(ws+224);
	i8 v6056 = *(i8*)(intptr_t)v6055;
	i8 v6057 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v6057 = v6056;

	i8 v6058 = (i8)(intptr_t)(ws+3392);
	i8 v6059 = *(i8*)(intptr_t)v6058;
	i8 v6060 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6060)(v6059);

c02_0483:;

	i8 v6061 = (i8)(intptr_t)(ws+224);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = (i8)(intptr_t)(ws+3400);
	i8 v6064 = *(i8*)(intptr_t)v6063;
	if (v6062==v6064) goto c02_0488; else goto c02_0487;

c02_0487:;

	i8 v6065 = (i8)(intptr_t)(f61_PopNode);
	i8 v6066;

	((void(*)(i8* /* node */))(intptr_t)v6065)(&v6066);

	i8 v6067 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6067 = v6066;

	i8 v6068 = (i8)(intptr_t)(ws+3408);
	i8 v6069 = *(i8*)(intptr_t)v6068;
	i8 v6070 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6070 = v6069;

	i8 v6071 = (i8)(intptr_t)(ws+3416);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	i2 v6073 = *(i2*)(intptr_t)v6072;
	i8 v6074 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v6074 = v6073;

	i8 v6075 = (i8)(intptr_t)(ws+3416);
	i8 v6076 = *(i8*)(intptr_t)v6075;
	i8 v6077 = v6076+(+2);
	i2 v6078 = *(i2*)(intptr_t)v6077;
	i8 v6079 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v6079 = v6078;

	i8 v6080 = (i8)(intptr_t)(ws+3416);
	i8 v6081 = *(i8*)(intptr_t)v6080;
	i8 v6082 = v6081+(+4);
	i2 v6083 = *(i2*)(intptr_t)v6082;
	i8 v6084 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v6084 = v6083;

	i8 v6085 = (i8)(intptr_t)(ws+3416);
	i8 v6086 = *(i8*)(intptr_t)v6085;
	i8 v6087 = v6086+(+24);
	i8 v6088 = *(i8*)(intptr_t)v6087;
	i8 v6089 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6089 = v6088;

	i8 v6090 = (i8)(intptr_t)(ws+3416);
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i8 v6092 = v6091+(+32);
	i8 v6093 = *(i8*)(intptr_t)v6092;
	i8 v6094 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6094 = v6093;

	i8 v6095 = (i8)(intptr_t)(ws+3416);
	i8 v6096 = *(i8*)(intptr_t)v6095;
	i8 v6097 = v6096+(+40);
	i1 v6098 = *(i1*)(intptr_t)v6097;
	i8 v6099 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v6099 = v6098;

	i8 v6100 = (i8)(intptr_t)(ws+3416);
	i8 v6101 = *(i8*)(intptr_t)v6100;
	i8 v6102 = v6101+(+6);
	i1 v6103 = *(i1*)(intptr_t)v6102;
	i1 v6104 = (i1)+0;
	if (v6103==v6104) goto c02_048d; else goto c02_048c;

c02_048c:;

	i8 v6105 = (i8)(intptr_t)(ws+3424);
	i2 v6106 = *(i2*)(intptr_t)v6105;
	i8 v6107 = (i8)(intptr_t)(ws+3450);
	*(i2*)(intptr_t)v6107 = v6106;

	i8 v6108 = (i8)(intptr_t)(ws+3426);
	i2 v6109 = *(i2*)(intptr_t)v6108;
	i8 v6110 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v6110 = v6109;

	i8 v6111 = (i8)(intptr_t)(ws+3450);
	i2 v6112 = *(i2*)(intptr_t)v6111;
	i8 v6113 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v6113 = v6112;

c02_048d:;

c02_0489:;


	i8 v6145 = (i8)(intptr_t)(ws+3448);
	i1 v6146 = *(i1*)(intptr_t)v6145;

	if (v6146 != +55) goto c02_048f;

	i8 v6147 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v6148;

	((void(*)(i2* /* label */))(intptr_t)v6147)(&v6148);

	i8 v6149 = (i8)(intptr_t)(ws+3454);
	*(i2*)(intptr_t)v6149 = v6148;

	i8 v6150 = (i8)(intptr_t)(ws+3454);
	i2 v6151 = *(i2*)(intptr_t)v6150;
	i8 v6152 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v6152 = v6151;

	i8 v6153 = (i8)(intptr_t)(ws+3424);
	i2 v6154 = *(i2*)(intptr_t)v6153;
	i8 v6155 = (i8)(intptr_t)(ws+3432);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	*(i2*)(intptr_t)v6156 = v6154;

	i8 v6157 = (i8)(intptr_t)(ws+3452);
	i2 v6158 = *(i2*)(intptr_t)v6157;
	i8 v6159 = (i8)(intptr_t)(ws+3432);
	i8 v6160 = *(i8*)(intptr_t)v6159;
	i8 v6161 = v6160+(+2);
	*(i2*)(intptr_t)v6161 = v6158;

	i8 v6162 = (i8)(intptr_t)(ws+3452);
	i2 v6163 = *(i2*)(intptr_t)v6162;
	i8 v6164 = (i8)(intptr_t)(ws+3432);
	i8 v6165 = *(i8*)(intptr_t)v6164;
	i8 v6166 = v6165+(+4);
	*(i2*)(intptr_t)v6166 = v6163;

	i8 v6167 = (i8)(intptr_t)(f259_push_and_free);

	((void(*)(void))(intptr_t)v6167)();

	goto c02_048e;

c02_048f:;

	if (v6146 != +54) goto c02_0490;

	i8 v6168 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v6169;

	((void(*)(i2* /* label */))(intptr_t)v6168)(&v6169);

	i8 v6170 = (i8)(intptr_t)(ws+3456);
	*(i2*)(intptr_t)v6170 = v6169;

	i8 v6171 = (i8)(intptr_t)(ws+3456);
	i2 v6172 = *(i2*)(intptr_t)v6171;
	i8 v6173 = (i8)(intptr_t)(ws+3452);
	*(i2*)(intptr_t)v6173 = v6172;

	i8 v6174 = (i8)(intptr_t)(ws+3452);
	i2 v6175 = *(i2*)(intptr_t)v6174;
	i8 v6176 = (i8)(intptr_t)(ws+3432);
	i8 v6177 = *(i8*)(intptr_t)v6176;
	*(i2*)(intptr_t)v6177 = v6175;

	i8 v6178 = (i8)(intptr_t)(ws+3426);
	i2 v6179 = *(i2*)(intptr_t)v6178;
	i8 v6180 = (i8)(intptr_t)(ws+3432);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	i8 v6182 = v6181+(+2);
	*(i2*)(intptr_t)v6182 = v6179;

	i8 v6183 = (i8)(intptr_t)(ws+3452);
	i2 v6184 = *(i2*)(intptr_t)v6183;
	i8 v6185 = (i8)(intptr_t)(ws+3432);
	i8 v6186 = *(i8*)(intptr_t)v6185;
	i8 v6187 = v6186+(+4);
	*(i2*)(intptr_t)v6187 = v6184;

	i8 v6188 = (i8)(intptr_t)(f259_push_and_free);

	((void(*)(void))(intptr_t)v6188)();

	goto c02_048e;

c02_0490:;

	i8 v6189 = (i8)(intptr_t)(ws+3424);
	i2 v6190 = *(i2*)(intptr_t)v6189;
	i8 v6191 = (i8)(intptr_t)(ws+3416);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	*(i2*)(intptr_t)v6192 = v6190;

	i8 v6193 = (i8)(intptr_t)(ws+3426);
	i2 v6194 = *(i2*)(intptr_t)v6193;
	i8 v6195 = (i8)(intptr_t)(ws+3416);
	i8 v6196 = *(i8*)(intptr_t)v6195;
	i8 v6197 = v6196+(+2);
	*(i2*)(intptr_t)v6197 = v6194;

	i8 v6198 = (i8)(intptr_t)(ws+3416);
	i8 v6199 = *(i8*)(intptr_t)v6198;
	i8 v6200 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6200)(v6199);

	i8 v6201 = (i8)(intptr_t)(ws+3428);
	i2 v6202 = *(i2*)(intptr_t)v6201;
	i8 v6203 = (i8)(intptr_t)(f120_MidLabel);
	i8 v6204;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6203)(&v6204, v6202);

	i8 v6205 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v6205 = v6204;

	i8 v6206 = (i8)(intptr_t)(ws+3464);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6208)(v6207);

c02_048e:;


	goto c02_0483;

c02_0488:;

endsub:;
}
	void f222_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f242_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3488 length ws+32
void f260_InitVariable(i8 p6209 /* type */, i8 p6210 /* symbol */, i8 p6211 /* subr */) {
	*(i8*)(intptr_t)(ws+3488) = p6211; /* subr */
	*(i8*)(intptr_t)(ws+3496) = p6210; /* symbol */
	*(i8*)(intptr_t)(ws+3504) = p6209; /* type */

	i8 v6212 = (i8)(intptr_t)(ws+3504);
	i8 v6213 = *(i8*)(intptr_t)v6212;
	i8 v6214 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v6214)(v6213);

	i1 v6215 = (i1)+28;
	i8 v6216 = (i8)(intptr_t)(ws+3496);
	i8 v6217 = *(i8*)(intptr_t)v6216;
	i8 v6218 = v6217+(+32);
	*(i1*)(intptr_t)v6218 = v6215;

	i8 v6219 = (i8)+27;
	i8 v6220 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v6221;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6220)(&v6221, v6219);

	i8 v6222 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v6222 = v6221;

	i8 v6223 = (i8)(intptr_t)(ws+3512);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i8 v6225 = (i8)(intptr_t)(ws+3496);
	i8 v6226 = *(i8*)(intptr_t)v6225;
	*(i8*)(intptr_t)v6226 = v6224;

	i8 v6227 = (i8)(intptr_t)(ws+3504);
	i8 v6228 = *(i8*)(intptr_t)v6227;
	i8 v6229 = (i8)(intptr_t)(ws+3496);
	i8 v6230 = *(i8*)(intptr_t)v6229;
	i8 v6231 = *(i8*)(intptr_t)v6230;
	*(i8*)(intptr_t)v6231 = v6228;

	i8 v6232 = (i8)(intptr_t)(ws+3488);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = (i8)(intptr_t)(ws+3496);
	i8 v6235 = *(i8*)(intptr_t)v6234;
	i8 v6236 = *(i8*)(intptr_t)v6235;
	i8 v6237 = v6236+(+8);
	*(i8*)(intptr_t)v6237 = v6233;

	i8 v6238 = (i8)(intptr_t)(ws+3496);
	i8 v6239 = *(i8*)(intptr_t)v6238;
	i8 v6240 = (i8)(intptr_t)(f242_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v6240)(v6239);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f70_StrDupBraced(i8* /* news */, i8 /* s */);
	void f223_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakePointerType workspace at ws+3496 length ws+32
void f261_MakePointerType(i8* p6241 /* ptrtype */, i8 p6242 /* type */) {
	*(i8*)(intptr_t)(ws+3496) = p6242; /* type */

	i8 v6243 = (i8)(intptr_t)(ws+3496);
	i8 v6244 = *(i8*)(intptr_t)v6243;
	i8 v6245 = v6244+(+40);
	i8 v6246 = *(i8*)(intptr_t)v6245;
	i8 v6247 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v6247 = v6246;

	i8 v6248 = (i8)(intptr_t)(ws+3504);
	i8 v6249 = *(i8*)(intptr_t)v6248;
	i8 v6250 = (i8)+0;
	if (v6249==v6250) goto c02_0494; else goto c02_0495;

c02_0494:;

	i8 v6251 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v6252;

	((void(*)(i8* /* type */))(intptr_t)v6251)(&v6252);

	i8 v6253 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v6253 = v6252;

	i8 v6254 = (i8)(intptr_t)(ws+3512);
	i8 v6255 = *(i8*)(intptr_t)v6254;
	i8 v6256 = (i8)(intptr_t)(ws+3504);
	*(i8*)(intptr_t)v6256 = v6255;

	i1 v6257 = (i1)+3;
	i8 v6258 = (i8)(intptr_t)(ws+3504);
	i8 v6259 = *(i8*)(intptr_t)v6258;
	i8 v6260 = v6259+(+52);
	*(i1*)(intptr_t)v6260 = v6257;

	i8 v6261 = (i8)(intptr_t)(ws+1528);
	i8 v6262 = *(i8*)(intptr_t)v6261;
	i8 v6263 = v6262+(+48);
	i2 v6264 = *(i2*)(intptr_t)v6263;
	i8 v6265 = (i8)(intptr_t)(ws+3504);
	i8 v6266 = *(i8*)(intptr_t)v6265;
	i8 v6267 = v6266+(+48);
	*(i2*)(intptr_t)v6267 = v6264;

	i8 v6268 = (i8)(intptr_t)(ws+1528);
	i8 v6269 = *(i8*)(intptr_t)v6268;
	i8 v6270 = v6269+(+53);
	i1 v6271 = *(i1*)(intptr_t)v6270;
	i8 v6272 = (i8)(intptr_t)(ws+3504);
	i8 v6273 = *(i8*)(intptr_t)v6272;
	i8 v6274 = v6273+(+53);
	*(i1*)(intptr_t)v6274 = v6271;

	i8 v6275 = (i8)(intptr_t)(ws+1528);
	i8 v6276 = *(i8*)(intptr_t)v6275;
	i8 v6277 = v6276+(+50);
	i2 v6278 = *(i2*)(intptr_t)v6277;
	i8 v6279 = (i8)(intptr_t)(ws+3504);
	i8 v6280 = *(i8*)(intptr_t)v6279;
	i8 v6281 = v6280+(+50);
	*(i2*)(intptr_t)v6281 = v6278;

	i8 v6282 = (i8)(intptr_t)(ws+3496);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = (i8)(intptr_t)(ws+3504);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	*(i8*)(intptr_t)v6285 = v6283;

	i8 v6286 = (i8)(intptr_t)(ws+3504);
	i8 v6287 = *(i8*)(intptr_t)v6286;
	i8 v6288 = (i8)(intptr_t)(ws+3496);
	i8 v6289 = *(i8*)(intptr_t)v6288;
	i8 v6290 = v6289+(+40);
	*(i8*)(intptr_t)v6290 = v6287;

	i8 v6291 = (i8)(intptr_t)(ws+3496);
	i8 v6292 = *(i8*)(intptr_t)v6291;
	i8 v6293 = v6292+(+32);
	i8 v6294 = *(i8*)(intptr_t)v6293;
	i8 v6295 = v6294+(+8);
	i8 v6296 = *(i8*)(intptr_t)v6295;
	i8 v6297 = (i8)(intptr_t)(f70_StrDupBraced);
	i8 v6298;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v6297)(&v6298, v6296);

	i8 v6299 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v6299 = v6298;

	i8 v6300 = (i8)(intptr_t)(ws+3496);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i8 v6302 = v6301+(+32);
	i8 v6303 = *(i8*)(intptr_t)v6302;
	i8 v6304 = v6303+(+16);
	i8 v6305 = *(i8*)(intptr_t)v6304;
	i8 v6306 = (i8)(intptr_t)(ws+3504);
	i8 v6307 = *(i8*)(intptr_t)v6306;
	i8 v6308 = (i8)(intptr_t)(ws+3520);
	i8 v6309 = *(i8*)(intptr_t)v6308;
	i8 v6310 = (i8)(intptr_t)(f223_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v6310)(v6309, v6307, v6305);

c02_0495:;

c02_0491:;

endsub:;
	*p6241 = *(i8*)(intptr_t)(ws+3504);
}
	void f222_CheckNotPartialType(i8 /* type */);
	void f66_AllocNewType(i8* /* type */);
	void f241_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f71_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f223_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeArrayType workspace at ws+3392 length ws+56
void f262_MakeArrayType(i8* p6311 /* arraytype */, i2 p6312 /* size */, i8 p6313 /* type */) {
	*(i8*)(intptr_t)(ws+3392) = p6313; /* type */
	*(i2*)(intptr_t)(ws+3400) = p6312; /* size */

	i8 v6314 = (i8)(intptr_t)(ws+3392);
	i8 v6315 = *(i8*)(intptr_t)v6314;
	i8 v6316 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v6316)(v6315);

	i8 v6317 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v6318;

	((void(*)(i8* /* type */))(intptr_t)v6317)(&v6318);

	i8 v6319 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6319 = v6318;

	i8 v6320 = (i8)(intptr_t)(ws+3416);
	i8 v6321 = *(i8*)(intptr_t)v6320;
	i8 v6322 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6322 = v6321;

	i1 v6323 = (i1)+4;
	i8 v6324 = (i8)(intptr_t)(ws+3408);
	i8 v6325 = *(i8*)(intptr_t)v6324;
	i8 v6326 = v6325+(+52);
	*(i1*)(intptr_t)v6326 = v6323;

	i2 v6327 = (i2)+0;
	i8 v6328 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v6328 = v6327;

	i2 v6329 = (i2)+0;
	i8 v6330 = (i8)(intptr_t)(ws+3400);
	i2 v6331 = *(i2*)(intptr_t)v6330;
	if (v6329<v6331) goto c02_0499; else goto c02_049a;

c02_0499:;

	i8 v6332 = (i8)(intptr_t)(ws+3392);
	i8 v6333 = *(i8*)(intptr_t)v6332;
	i8 v6334 = v6333+(+50);
	i2 v6335 = *(i2*)(intptr_t)v6334;
	i8 v6336 = (i8)(intptr_t)(ws+3400);
	i2 v6337 = *(i2*)(intptr_t)v6336;
	i2 v6338 = v6337+(-1);
	i2 v6339 = v6335*v6338;
	i8 v6340 = (i8)(intptr_t)(ws+3392);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = v6341+(+48);
	i2 v6343 = *(i2*)(intptr_t)v6342;
	i2 v6344 = v6339+v6343;
	i8 v6345 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v6345 = v6344;

c02_049a:;

c02_0496:;

	i8 v6346 = (i8)(intptr_t)(ws+3424);
	i2 v6347 = *(i2*)(intptr_t)v6346;
	i8 v6348 = (i8)(intptr_t)(ws+3408);
	i8 v6349 = *(i8*)(intptr_t)v6348;
	i8 v6350 = v6349+(+48);
	*(i2*)(intptr_t)v6350 = v6347;

	i8 v6351 = (i8)(intptr_t)(ws+3392);
	i8 v6352 = *(i8*)(intptr_t)v6351;
	i8 v6353 = v6352+(+53);
	i1 v6354 = *(i1*)(intptr_t)v6353;
	i8 v6355 = (i8)(intptr_t)(ws+3408);
	i8 v6356 = *(i8*)(intptr_t)v6355;
	i8 v6357 = v6356+(+53);
	*(i1*)(intptr_t)v6357 = v6354;

	i8 v6358 = (i8)(intptr_t)(ws+3392);
	i8 v6359 = *(i8*)(intptr_t)v6358;
	i8 v6360 = v6359+(+50);
	i2 v6361 = *(i2*)(intptr_t)v6360;
	i8 v6362 = (i8)(intptr_t)(ws+3400);
	i2 v6363 = *(i2*)(intptr_t)v6362;
	i2 v6364 = v6361*v6363;
	i8 v6365 = (i8)(intptr_t)(ws+3408);
	i8 v6366 = *(i8*)(intptr_t)v6365;
	i8 v6367 = v6366+(+50);
	*(i2*)(intptr_t)v6367 = v6364;

	i8 v6368 = (i8)(intptr_t)(ws+3392);
	i8 v6369 = *(i8*)(intptr_t)v6368;
	i8 v6370 = (i8)(intptr_t)(ws+3408);
	i8 v6371 = *(i8*)(intptr_t)v6370;
	*(i8*)(intptr_t)v6371 = v6369;

	i8 v6372 = (i8)(intptr_t)(ws+3400);
	i2 v6373 = *(i2*)(intptr_t)v6372;
	i8 v6374 = (i8)(intptr_t)(ws+3408);
	i8 v6375 = *(i8*)(intptr_t)v6374;
	i8 v6376 = v6375+(+8);
	*(i2*)(intptr_t)v6376 = v6373;

	i4 v6377 = (i4)+0;
	i8 v6378 = (i8)(intptr_t)(ws+3400);
	i2 v6379 = *(i2*)(intptr_t)v6378;
	i2 v6380 = v6379+(-1);
	i4 v6381 = v6380;
	i8 v6382 = (i8)(intptr_t)(f241_ArchGuessIntType);
	i8 v6383;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v6382)(&v6383, v6381, v6377);

	i8 v6384 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6384 = v6383;

	i8 v6385 = (i8)(intptr_t)(ws+3432);
	i8 v6386 = *(i8*)(intptr_t)v6385;
	i8 v6387 = (i8)(intptr_t)(ws+3408);
	i8 v6388 = *(i8*)(intptr_t)v6387;
	i8 v6389 = v6388+(+16);
	*(i8*)(intptr_t)v6389 = v6386;

	i8 v6390 = (i8)(intptr_t)(ws+3392);
	i8 v6391 = *(i8*)(intptr_t)v6390;
	i8 v6392 = v6391+(+32);
	i8 v6393 = *(i8*)(intptr_t)v6392;
	i8 v6394 = v6393+(+8);
	i8 v6395 = *(i8*)(intptr_t)v6394;
	i8 v6396 = (i8)(intptr_t)(ws+3400);
	i2 v6397 = *(i2*)(intptr_t)v6396;
	i8 v6398 = (i8)(intptr_t)(f71_StrDupArrayed);
	i8 v6399;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v6398)(&v6399, v6397, v6395);

	i8 v6400 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6400 = v6399;

	i8 v6401 = (i8)(intptr_t)(ws+3392);
	i8 v6402 = *(i8*)(intptr_t)v6401;
	i8 v6403 = v6402+(+32);
	i8 v6404 = *(i8*)(intptr_t)v6403;
	i8 v6405 = v6404+(+16);
	i8 v6406 = *(i8*)(intptr_t)v6405;
	i8 v6407 = (i8)(intptr_t)(ws+3408);
	i8 v6408 = *(i8*)(intptr_t)v6407;
	i8 v6409 = (i8)(intptr_t)(ws+3440);
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = (i8)(intptr_t)(f223_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v6411)(v6410, v6408, v6406);

endsub:;
	*p6311 = *(i8*)(intptr_t)(ws+3408);
}

// QueueNamespace workspace at ws+3464 length ws+16
void f264_QueueNamespace(i8 p6415 /* namespace */) {
	*(i8*)(intptr_t)(ws+3464) = p6415; /* namespace */

c02_049b:;

	i8 v6416 = (i8)(intptr_t)(ws+3464);
	i8 v6417 = *(i8*)(intptr_t)v6416;
	i8 v6418 = *(i8*)(intptr_t)v6417;
	i8 v6419 = (i8)+0;
	if (v6418==v6419) goto c02_04a0; else goto c02_049f;

c02_049f:;

	i8 v6420 = (i8)(intptr_t)(ws+3464);
	i8 v6421 = *(i8*)(intptr_t)v6420;
	i8 v6422 = *(i8*)(intptr_t)v6421;
	i8 v6423 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v6423 = v6422;

	i8 v6424 = (i8)(intptr_t)(ws+3472);
	i8 v6425 = *(i8*)(intptr_t)v6424;
	i8 v6426 = v6425+(+24);
	i8 v6427 = *(i8*)(intptr_t)v6426;
	i8 v6428 = (i8)(intptr_t)(ws+3464);
	i8 v6429 = *(i8*)(intptr_t)v6428;
	*(i8*)(intptr_t)v6429 = v6427;

	i8 v6430 = (i8)(intptr_t)(ws+3416);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = (i8)(intptr_t)(ws+3472);
	i8 v6433 = *(i8*)(intptr_t)v6432;
	i8 v6434 = v6433+(+24);
	*(i8*)(intptr_t)v6434 = v6431;

	i8 v6435 = (i8)(intptr_t)(ws+3472);
	i8 v6436 = *(i8*)(intptr_t)v6435;
	i8 v6437 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6437 = v6436;

	goto c02_049b;

c02_04a0:;

endsub:;
}
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f264_QueueNamespace(i8 /* namespace */);
	void f264_QueueNamespace(i8 /* namespace */);
	void f34_Free(i8 /* block */);
	void f67_FreeType(i8 /* type */);
	void f34_Free(i8 /* block */);
	void f34_Free(i8 /* block */);
	void f65_FreeSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3408 length ws+56
void f263_DestructSubroutineContents(i8 p6412 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p6412; /* subr */

	i8 v6413 = (i8)+0;
	i8 v6414 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6414 = v6413;


	i8 v6438 = (i8)(intptr_t)(ws+3408);
	i8 v6439 = *(i8*)(intptr_t)v6438;
	i8 v6440 = v6439+(+81);
	i1 v6441 = *(i1*)(intptr_t)v6440;
	i1 v6442 = (i1)+0;
	if (v6441==v6442) goto c02_04a5; else goto c02_04a4;

c02_04a4:;

	i8 v6443 = (i8)(intptr_t)(ws+3408);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = (i8)(intptr_t)(ws+3408);
	i8 v6446 = *(i8*)(intptr_t)v6445;
	i8 v6447 = v6446+(+81);
	i1 v6448 = *(i1*)(intptr_t)v6447;
	i1 v6449 = v6448+(-1);
	i8 v6450 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v6451;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6450)(&v6451, v6449, v6444);

	i8 v6452 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6452 = v6451;

	i8 v6453 = (i8)(intptr_t)(ws+3432);
	i8 v6454 = *(i8*)(intptr_t)v6453;
	i8 v6455 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6455 = v6454;

	goto c02_04a1;

c02_04a5:;

	i8 v6456 = (i8)(intptr_t)(ws+3408);
	i8 v6457 = *(i8*)(intptr_t)v6456;
	i8 v6458 = v6457+(+80);
	i1 v6459 = *(i1*)(intptr_t)v6458;
	i1 v6460 = (i1)+0;
	if (v6459==v6460) goto c02_04a9; else goto c02_04a8;

c02_04a8:;

	i8 v6461 = (i8)(intptr_t)(ws+3408);
	i8 v6462 = *(i8*)(intptr_t)v6461;
	i8 v6463 = (i8)(intptr_t)(ws+3408);
	i8 v6464 = *(i8*)(intptr_t)v6463;
	i8 v6465 = v6464+(+80);
	i1 v6466 = *(i1*)(intptr_t)v6465;
	i1 v6467 = v6466+(-1);
	i8 v6468 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v6469;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6468)(&v6469, v6467, v6462);

	i8 v6470 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6470 = v6469;

	i8 v6471 = (i8)(intptr_t)(ws+3440);
	i8 v6472 = *(i8*)(intptr_t)v6471;
	i8 v6473 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6473 = v6472;

	goto c02_04a1;

c02_04a9:;

	i8 v6474 = (i8)+0;
	i8 v6475 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6475 = v6474;

c02_04a1:;

	i8 v6476 = (i8)(intptr_t)(ws+3408);
	i8 v6477 = *(i8*)(intptr_t)v6476;
	i8 v6478 = v6477+(+16);
	i8 v6479 = *(i8*)(intptr_t)v6478;
	i8 v6480 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6480 = v6479;

	i8 v6481 = (i8)(intptr_t)(ws+3424);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = (i8)+0;
	if (v6482==v6483) goto c02_04ae; else goto c02_04ad;

c02_04ad:;

	i8 v6484 = (i8)(intptr_t)(ws+3424);
	i8 v6485 = *(i8*)(intptr_t)v6484;
	i8 v6486 = v6485+(+24);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i8 v6488 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6488 = v6487;

c02_04ae:;

c02_04aa:;

c02_04af:;

	i8 v6489 = (i8)(intptr_t)(ws+3416);
	i8 v6490 = *(i8*)(intptr_t)v6489;
	i8 v6491 = (i8)+0;
	if (v6490==v6491) goto c02_04b4; else goto c02_04b3;

c02_04b3:;

	i8 v6492 = (i8)(intptr_t)(ws+3416);
	i8 v6493 = *(i8*)(intptr_t)v6492;
	i8 v6494 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6494 = v6493;

	i8 v6495 = (i8)(intptr_t)(ws+3416);
	i8 v6496 = *(i8*)(intptr_t)v6495;
	i8 v6497 = v6496+(+24);
	i8 v6498 = *(i8*)(intptr_t)v6497;
	i8 v6499 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6499 = v6498;

	i8 v6500 = (i8)(intptr_t)(ws+3448);
	i8 v6501 = *(i8*)(intptr_t)v6500;
	i8 v6502 = v6501+(+32);
	i1 v6503 = *(i1*)(intptr_t)v6502;

	if (v6503 != +30) goto c02_04b6;

	i8 v6504 = (i8)(intptr_t)(ws+3448);
	i8 v6505 = *(i8*)(intptr_t)v6504;
	i8 v6506 = *(i8*)(intptr_t)v6505;
	i8 v6507 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6507 = v6506;

	i8 v6508 = (i8)(intptr_t)(ws+3456);
	i8 v6509 = *(i8*)(intptr_t)v6508;
	i8 v6510 = v6509+(+52);
	i1 v6511 = *(i1*)(intptr_t)v6510;

	if (v6511 != +5) goto c02_04b8;

	i8 v6512 = (i8)(intptr_t)(ws+3456);
	i8 v6513 = *(i8*)(intptr_t)v6512;
	i8 v6514 = (i8)(intptr_t)(f264_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v6514)(v6513);

	goto c02_04b7;

c02_04b8:;

	if (v6511 != +6) goto c02_04b9;

	i8 v6515 = (i8)(intptr_t)(ws+3456);
	i8 v6516 = *(i8*)(intptr_t)v6515;
	i8 v6517 = *(i8*)(intptr_t)v6516;
	i8 v6518 = v6517+(+16);
	i8 v6519 = (i8)(intptr_t)(f264_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v6519)(v6518);

	i8 v6520 = (i8)(intptr_t)(ws+3456);
	i8 v6521 = *(i8*)(intptr_t)v6520;
	i8 v6522 = *(i8*)(intptr_t)v6521;
	i8 v6523 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6523)(v6522);

c02_04b9:;

c02_04b7:;


	i8 v6524 = (i8)(intptr_t)(ws+3456);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	i8 v6526 = (i8)(intptr_t)(f67_FreeType);

	((void(*)(i8 /* type */))(intptr_t)v6526)(v6525);

	goto c02_04b5;

c02_04b6:;

	if (v6503 != +28) goto c02_04ba;

	i8 v6527 = (i8)(intptr_t)(ws+3448);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i8 v6529 = *(i8*)(intptr_t)v6528;
	i8 v6530 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6530)(v6529);

c02_04ba:;

c02_04b5:;


	i8 v6531 = (i8)(intptr_t)(ws+3448);
	i8 v6532 = *(i8*)(intptr_t)v6531;
	i8 v6533 = v6532+(+8);
	i8 v6534 = *(i8*)(intptr_t)v6533;
	i8 v6535 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v6535)(v6534);

	i8 v6536 = (i8)(intptr_t)(ws+3448);
	i8 v6537 = *(i8*)(intptr_t)v6536;
	i8 v6538 = (i8)(intptr_t)(f65_FreeSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v6538)(v6537);

	goto c02_04af;

c02_04b4:;

	i8 v6539 = (i8)(intptr_t)(ws+3424);
	i8 v6540 = *(i8*)(intptr_t)v6539;
	i8 v6541 = (i8)+0;
	if (v6540==v6541) goto c02_04bf; else goto c02_04be;

c02_04be:;

	i8 v6542 = (i8)+0;
	i8 v6543 = (i8)(intptr_t)(ws+3424);
	i8 v6544 = *(i8*)(intptr_t)v6543;
	i8 v6545 = v6544+(+24);
	*(i8*)(intptr_t)v6545 = v6542;

	goto c02_04bb;

c02_04bf:;

	i8 v6546 = (i8)+0;
	i8 v6547 = (i8)(intptr_t)(ws+3408);
	i8 v6548 = *(i8*)(intptr_t)v6547;
	i8 v6549 = v6548+(+16);
	*(i8*)(intptr_t)v6549 = v6546;

c02_04bb:;

	i8 v6550 = (i8)(intptr_t)(ws+3424);
	i8 v6551 = *(i8*)(intptr_t)v6550;
	i8 v6552 = (i8)(intptr_t)(ws+3408);
	i8 v6553 = *(i8*)(intptr_t)v6552;
	i8 v6554 = v6553+(+24);
	*(i8*)(intptr_t)v6554 = v6551;

endsub:;
}
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);

// CopyParameterList workspace at ws+3408 length ws+56
void f265_CopyParameterList(i8 p6555 /* subr */, i8 p6556 /* param */) {
	*(i8*)(intptr_t)(ws+3408) = p6556; /* param */
	*(i8*)(intptr_t)(ws+3416) = p6555; /* subr */

	i8 v6557 = (i8)+0;
	i8 v6558 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6558 = v6557;

c02_04c0:;

	i8 v6559 = (i8)(intptr_t)(ws+3408);
	i8 v6560 = *(i8*)(intptr_t)v6559;
	i8 v6561 = (i8)+0;
	if (v6560==v6561) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v6562 = (i8)(intptr_t)(ws+3408);
	i8 v6563 = *(i8*)(intptr_t)v6562;
	i8 v6564 = v6563+(+8);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	i8 v6566 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v6567;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v6566)(&v6567, v6565);

	i8 v6568 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v6568 = v6567;

	i8 v6569 = (i8)(intptr_t)(ws+3416);
	i8 v6570 = *(i8*)(intptr_t)v6569;
	i8 v6571 = v6570+(+16);
	i8 v6572 = (i8)(intptr_t)(ws+3432);
	i8 v6573 = *(i8*)(intptr_t)v6572;
	i8 v6574 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v6575;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v6574)(&v6575, v6573, v6571);

	i8 v6576 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v6576 = v6575;

	i8 v6577 = (i8)(intptr_t)(ws+3440);
	i8 v6578 = *(i8*)(intptr_t)v6577;
	i8 v6579 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6579 = v6578;

	i1 v6580 = (i1)+28;
	i8 v6581 = (i8)(intptr_t)(ws+3448);
	i8 v6582 = *(i8*)(intptr_t)v6581;
	i8 v6583 = v6582+(+32);
	*(i1*)(intptr_t)v6583 = v6580;

	i8 v6584 = (i8)+27;
	i8 v6585 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v6586;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6585)(&v6586, v6584);

	i8 v6587 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6587 = v6586;

	i8 v6588 = (i8)(intptr_t)(ws+3456);
	i8 v6589 = *(i8*)(intptr_t)v6588;
	i8 v6590 = (i8)(intptr_t)(ws+3448);
	i8 v6591 = *(i8*)(intptr_t)v6590;
	*(i8*)(intptr_t)v6591 = v6589;

	i8 v6592 = (i8)(intptr_t)(ws+3408);
	i8 v6593 = *(i8*)(intptr_t)v6592;
	i8 v6594 = *(i8*)(intptr_t)v6593;
	i8 v6595 = *(i8*)(intptr_t)v6594;
	i8 v6596 = (i8)(intptr_t)(ws+3448);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	i8 v6598 = *(i8*)(intptr_t)v6597;
	*(i8*)(intptr_t)v6598 = v6595;

	i8 v6599 = (i8)(intptr_t)(ws+3408);
	i8 v6600 = *(i8*)(intptr_t)v6599;
	i8 v6601 = *(i8*)(intptr_t)v6600;
	i8 v6602 = v6601+(+8);
	i8 v6603 = *(i8*)(intptr_t)v6602;
	i8 v6604 = (i8)(intptr_t)(ws+3448);
	i8 v6605 = *(i8*)(intptr_t)v6604;
	i8 v6606 = *(i8*)(intptr_t)v6605;
	i8 v6607 = v6606+(+8);
	*(i8*)(intptr_t)v6607 = v6603;

	i8 v6608 = (i8)(intptr_t)(ws+3408);
	i8 v6609 = *(i8*)(intptr_t)v6608;
	i8 v6610 = *(i8*)(intptr_t)v6609;
	i8 v6611 = v6610+(+26);
	i1 v6612 = *(i1*)(intptr_t)v6611;
	i8 v6613 = (i8)(intptr_t)(ws+3448);
	i8 v6614 = *(i8*)(intptr_t)v6613;
	i8 v6615 = *(i8*)(intptr_t)v6614;
	i8 v6616 = v6615+(+26);
	*(i1*)(intptr_t)v6616 = v6612;

	i8 v6617 = (i8)(intptr_t)(ws+3408);
	i8 v6618 = *(i8*)(intptr_t)v6617;
	i8 v6619 = *(i8*)(intptr_t)v6618;
	i8 v6620 = v6619+(+24);
	i2 v6621 = *(i2*)(intptr_t)v6620;
	i8 v6622 = (i8)(intptr_t)(ws+3448);
	i8 v6623 = *(i8*)(intptr_t)v6622;
	i8 v6624 = *(i8*)(intptr_t)v6623;
	i8 v6625 = v6624+(+24);
	*(i2*)(intptr_t)v6625 = v6621;

	i8 v6626 = (i8)(intptr_t)(ws+3424);
	i8 v6627 = *(i8*)(intptr_t)v6626;
	i8 v6628 = (i8)+0;
	if (v6627==v6628) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v6629 = (i8)(intptr_t)(ws+3448);
	i8 v6630 = *(i8*)(intptr_t)v6629;
	i8 v6631 = (i8)(intptr_t)(ws+3424);
	i8 v6632 = *(i8*)(intptr_t)v6631;
	i8 v6633 = *(i8*)(intptr_t)v6632;
	i8 v6634 = v6633+(+16);
	*(i8*)(intptr_t)v6634 = v6630;

c02_04ca:;

c02_04c6:;

	i8 v6635 = (i8)(intptr_t)(ws+3448);
	i8 v6636 = *(i8*)(intptr_t)v6635;
	i8 v6637 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v6637 = v6636;

	i8 v6638 = (i8)(intptr_t)(ws+3408);
	i8 v6639 = *(i8*)(intptr_t)v6638;
	i8 v6640 = *(i8*)(intptr_t)v6639;
	i8 v6641 = v6640+(+16);
	i8 v6642 = *(i8*)(intptr_t)v6641;
	i8 v6643 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6643 = v6642;

	goto c02_04c0;

c02_04c5:;

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f64_AllocNewSymbol(i8* /* symbol */);
const i1 c02_s0105[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f218_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// CreateMainSubroutine workspace at ws+3264 length ws+40
void f266_CreateMainSubroutine(void) {

	i8 v6644 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v6645;

	((void(*)(i8* /* type */))(intptr_t)v6644)(&v6645);

	i8 v6646 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6646 = v6645;

	i8 v6647 = (i8)(intptr_t)(ws+3264);
	i8 v6648 = *(i8*)(intptr_t)v6647;
	i8 v6649 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v6649 = v6648;

	i1 v6650 = (i1)+6;
	i8 v6651 = (i8)(intptr_t)(ws+3272);
	i8 v6652 = *(i8*)(intptr_t)v6651;
	i8 v6653 = v6652+(+52);
	*(i1*)(intptr_t)v6653 = v6650;

	i8 v6654 = (i8)(intptr_t)(f64_AllocNewSymbol);
	i8 v6655;

	((void(*)(i8* /* symbol */))(intptr_t)v6654)(&v6655);

	i8 v6656 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v6656 = v6655;

	i8 v6657 = (i8)(intptr_t)(ws+3280);
	i8 v6658 = *(i8*)(intptr_t)v6657;
	i8 v6659 = (i8)(intptr_t)(ws+3288);
	*(i8*)(intptr_t)v6659 = v6658;

	i1 v6660 = (i1)+30;
	i8 v6661 = (i8)(intptr_t)(ws+3288);
	i8 v6662 = *(i8*)(intptr_t)v6661;
	i8 v6663 = v6662+(+32);
	*(i1*)(intptr_t)v6663 = v6660;

	i8 v6664 = (i8)(intptr_t)c02_s0105;
	i8 v6665 = (i8)(intptr_t)(ws+3288);
	i8 v6666 = *(i8*)(intptr_t)v6665;
	i8 v6667 = v6666+(+8);
	*(i8*)(intptr_t)v6667 = v6664;

	i8 v6668 = (i8)(intptr_t)(ws+3272);
	i8 v6669 = *(i8*)(intptr_t)v6668;
	i8 v6670 = (i8)(intptr_t)(ws+3288);
	i8 v6671 = *(i8*)(intptr_t)v6670;
	*(i8*)(intptr_t)v6671 = v6669;

	i8 v6672 = (i8)(intptr_t)(ws+3288);
	i8 v6673 = *(i8*)(intptr_t)v6672;
	i8 v6674 = (i8)(intptr_t)(ws+3272);
	i8 v6675 = *(i8*)(intptr_t)v6674;
	i8 v6676 = v6675+(+32);
	*(i8*)(intptr_t)v6676 = v6673;

	i8 v6677 = (i8)+83;
	i8 v6678 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v6679;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6678)(&v6679, v6677);

	i8 v6680 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v6680 = v6679;

	i8 v6681 = (i8)(intptr_t)(ws+3296);
	i8 v6682 = *(i8*)(intptr_t)v6681;
	i8 v6683 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v6683 = v6682;

	i8 v6684 = (i8)(intptr_t)(ws+3288);
	i8 v6685 = *(i8*)(intptr_t)v6684;
	i8 v6686 = (i8)(intptr_t)(ws+40);
	i8 v6687 = *(i8*)(intptr_t)v6686;
	*(i8*)(intptr_t)v6687 = v6685;

	i8 v6688 = (i8)(intptr_t)(ws+3272);
	i8 v6689 = *(i8*)(intptr_t)v6688;
	i8 v6690 = (i8)(intptr_t)(ws+40);
	i8 v6691 = *(i8*)(intptr_t)v6690;
	i8 v6692 = v6691+(+40);
	*(i8*)(intptr_t)v6692 = v6689;

	i8 v6693 = (i8)(intptr_t)(ws+40);
	i8 v6694 = *(i8*)(intptr_t)v6693;
	i8 v6695 = (i8)(intptr_t)(ws+40);
	i8 v6696 = *(i8*)(intptr_t)v6695;
	i8 v6697 = v6696+(+48);
	*(i8*)(intptr_t)v6697 = v6694;

	i8 v6698 = (i8)(intptr_t)(ws+40);
	i8 v6699 = *(i8*)(intptr_t)v6698;
	i8 v6700 = (i8)(intptr_t)(ws+3272);
	i8 v6701 = *(i8*)(intptr_t)v6700;
	*(i8*)(intptr_t)v6701 = v6699;

	i8 v6702 = (i8)(intptr_t)(ws+40);
	i8 v6703 = *(i8*)(intptr_t)v6702;
	i8 v6704 = v6703+(+16);
	i8 v6705 = (i8)(intptr_t)(ws+3288);
	i8 v6706 = *(i8*)(intptr_t)v6705;
	i8 v6707 = (i8)(intptr_t)(f218_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v6707)(v6706, v6704);

endsub:;
}
	void f202_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);

// ReportWorkspaces workspace at ws+3408 length ws+12
void f267_ReportWorkspaces(i8 p6708 /* subr */) {
	*(i8*)(intptr_t)(ws+3408) = p6708; /* subr */

	i1 v6709 = (i1)+0;
	i8 v6710 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6710 = v6709;

c02_04cb:;

	i8 v6711 = (i8)(intptr_t)(ws+3416);
	i1 v6712 = *(i1*)(intptr_t)v6711;
	i1 v6713 = (i1)+4;
	if (v6712==v6713) goto c02_04d0; else goto c02_04cf;

c02_04cf:;

	i8 v6714 = (i8)(intptr_t)(ws+3408);
	i8 v6715 = *(i8*)(intptr_t)v6714;
	i8 v6716 = v6715+(+58);
	i8 v6717 = (i8)(intptr_t)(ws+3416);
	i1 v6718 = *(i1*)(intptr_t)v6717;
	i8 v6719 = v6718;
	i1 v6720 = (i1)+1;
	i8 v6721 = ((i8)v6719)<<v6720;
	i8 v6722 = v6716+v6721;
	i2 v6723 = *(i2*)(intptr_t)v6722;
	i8 v6724 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v6724 = v6723;

	i8 v6725 = (i8)(intptr_t)(ws+3418);
	i2 v6726 = *(i2*)(intptr_t)v6725;
	i2 v6727 = (i2)+0;
	if (v6726==v6727) goto c02_04d5; else goto c02_04d4;

c02_04d4:;

	i8 v6728 = (i8)(intptr_t)(ws+3408);
	i8 v6729 = *(i8*)(intptr_t)v6728;
	i8 v6730 = (i8)(intptr_t)(ws+3416);
	i1 v6731 = *(i1*)(intptr_t)v6730;
	i8 v6732 = (i8)(intptr_t)(ws+3418);
	i2 v6733 = *(i2*)(intptr_t)v6732;
	i8 v6734 = (i8)(intptr_t)(f202_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v6734)(v6733, v6731, v6729);

c02_04d5:;

c02_04d1:;

	i8 v6735 = (i8)(intptr_t)(ws+3416);
	i1 v6736 = *(i1*)(intptr_t)v6735;
	i1 v6737 = v6736+(+1);
	i8 v6738 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v6738 = v6737;

	goto c02_04cb;

c02_04d0:;

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0106[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0107[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// expr_i_cant_do_that workspace at ws+3504 length ws+16
void f268_expr_i_cant_do_that(i8 p6739 /* rhs */, i8 p6740 /* lhs */) {
	*(i8*)(intptr_t)(ws+3504) = p6740; /* lhs */
	*(i8*)(intptr_t)(ws+3512) = p6739; /* rhs */

	i8 v6741 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6741)();

	i8 v6742 = (i8)(intptr_t)(ws+3504);
	i8 v6743 = *(i8*)(intptr_t)v6742;
	i8 v6744 = v6743+(+16);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	i8 v6746 = v6745+(+32);
	i8 v6747 = *(i8*)(intptr_t)v6746;
	i8 v6748 = v6747+(+8);
	i8 v6749 = *(i8*)(intptr_t)v6748;
	i8 v6750 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6750)(v6749);

	i8 v6751 = (i8)(intptr_t)c02_s0106;
	i8 v6752 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6752)(v6751);

	i8 v6753 = (i8)(intptr_t)(ws+3512);
	i8 v6754 = *(i8*)(intptr_t)v6753;
	i8 v6755 = v6754+(+16);
	i8 v6756 = *(i8*)(intptr_t)v6755;
	i8 v6757 = v6756+(+32);
	i8 v6758 = *(i8*)(intptr_t)v6757;
	i8 v6759 = v6758+(+8);
	i8 v6760 = *(i8*)(intptr_t)v6759;
	i8 v6761 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6761)(v6760);

	i8 v6762 = (i8)(intptr_t)c02_s0107;
	i8 v6763 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6763)(v6762);

	i8 v6764 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6764)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0108[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0109[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s010a[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f230_IsScalar(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s010b[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// CheckExpressionType workspace at ws+3496 length ws+17
void f269_CheckExpressionType(i8 p6765 /* type */, i8 p6766 /* node */) {
	*(i8*)(intptr_t)(ws+3496) = p6766; /* node */
	*(i8*)(intptr_t)(ws+3504) = p6765; /* type */

	i8 v6767 = (i8)(intptr_t)(ws+3496);
	i8 v6768 = *(i8*)(intptr_t)v6767;
	i8 v6769 = v6768+(+16);
	i8 v6770 = *(i8*)(intptr_t)v6769;
	i8 v6771 = (i8)+0;
	if (v6770==v6771) goto c02_04d9; else goto c02_04da;

c02_04d9:;

	i8 v6772 = (i8)(intptr_t)(ws+3504);
	i8 v6773 = *(i8*)(intptr_t)v6772;
	i8 v6774 = (i8)(intptr_t)(ws+3496);
	i8 v6775 = *(i8*)(intptr_t)v6774;
	i8 v6776 = v6775+(+16);
	*(i8*)(intptr_t)v6776 = v6773;

c02_04da:;

c02_04d6:;

	i8 v6777 = (i8)(intptr_t)(ws+3496);
	i8 v6778 = *(i8*)(intptr_t)v6777;
	i8 v6779 = v6778+(+16);
	i8 v6780 = *(i8*)(intptr_t)v6779;
	i8 v6781 = (i8)(intptr_t)(ws+3504);
	i8 v6782 = *(i8*)(intptr_t)v6781;
	if (v6780==v6782) goto c02_04df; else goto c02_04de;

c02_04de:;

	i8 v6783 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6783)();

	i8 v6784 = (i8)(intptr_t)c02_s0108;
	i8 v6785 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6785)(v6784);

	i8 v6786 = (i8)(intptr_t)(ws+3496);
	i8 v6787 = *(i8*)(intptr_t)v6786;
	i8 v6788 = v6787+(+16);
	i8 v6789 = *(i8*)(intptr_t)v6788;
	i8 v6790 = v6789+(+32);
	i8 v6791 = *(i8*)(intptr_t)v6790;
	i8 v6792 = v6791+(+8);
	i8 v6793 = *(i8*)(intptr_t)v6792;
	i8 v6794 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6794)(v6793);

	i8 v6795 = (i8)(intptr_t)c02_s0109;
	i8 v6796 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6796)(v6795);

	i8 v6797 = (i8)(intptr_t)(ws+3504);
	i8 v6798 = *(i8*)(intptr_t)v6797;
	i8 v6799 = v6798+(+32);
	i8 v6800 = *(i8*)(intptr_t)v6799;
	i8 v6801 = v6800+(+8);
	i8 v6802 = *(i8*)(intptr_t)v6801;
	i8 v6803 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6803)(v6802);

	i8 v6804 = (i8)(intptr_t)c02_s010a;
	i8 v6805 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6805)(v6804);

	i8 v6806 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6806)();

c02_04df:;

c02_04db:;

	i8 v6807 = (i8)(intptr_t)(ws+3504);
	i8 v6808 = *(i8*)(intptr_t)v6807;
	i8 v6809 = (i8)(intptr_t)(f230_IsScalar);
	i1 v6810;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6809)(&v6810, v6808);

	i8 v6811 = (i8)(intptr_t)(ws+3512);
	*(i1*)(intptr_t)v6811 = v6810;

	i8 v6812 = (i8)(intptr_t)(ws+3512);
	i1 v6813 = *(i1*)(intptr_t)v6812;
	i1 v6814 = (i1)+0;
	if (v6813==v6814) goto c02_04e3; else goto c02_04e4;

c02_04e3:;

	i8 v6815 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v6815)();

	i8 v6816 = (i8)(intptr_t)(ws+3504);
	i8 v6817 = *(i8*)(intptr_t)v6816;
	i8 v6818 = v6817+(+32);
	i8 v6819 = *(i8*)(intptr_t)v6818;
	i8 v6820 = v6819+(+8);
	i8 v6821 = *(i8*)(intptr_t)v6820;
	i8 v6822 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6822)(v6821);

	i8 v6823 = (i8)(intptr_t)c02_s010b;
	i8 v6824 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6824)(v6823);

	i8 v6825 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v6825)();

c02_04e4:;

c02_04e0:;

endsub:;
}
	void f228_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s010c[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s010d[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
const i1 c02_s010e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f228_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s010f[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3456 length ws+20
void f270_ResolveUntypedConstantsForAddOrSub(i8 p6826 /* rhs */, i8 p6827 /* lhs */) {
	*(i8*)(intptr_t)(ws+3456) = p6827; /* lhs */
	*(i8*)(intptr_t)(ws+3464) = p6826; /* rhs */

	i8 v6828 = (i8)(intptr_t)(ws+3456);
	i8 v6829 = *(i8*)(intptr_t)v6828;
	i8 v6830 = v6829+(+16);
	i8 v6831 = *(i8*)(intptr_t)v6830;
	i8 v6832 = (i8)+0;
	if (v6831==v6832) goto c02_04eb; else goto c02_04ec;

c02_04ec:;

	i8 v6833 = (i8)(intptr_t)(ws+3464);
	i8 v6834 = *(i8*)(intptr_t)v6833;
	i8 v6835 = v6834+(+16);
	i8 v6836 = *(i8*)(intptr_t)v6835;
	i8 v6837 = (i8)+0;
	if (v6836==v6837) goto c02_04ea; else goto c02_04eb;

c02_04ea:;

	i8 v6838 = (i8)(intptr_t)(ws+3456);
	i8 v6839 = *(i8*)(intptr_t)v6838;
	i8 v6840 = v6839+(+16);
	i8 v6841 = *(i8*)(intptr_t)v6840;
	i8 v6842 = (i8)(intptr_t)(f228_IsNum);
	i1 v6843;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6842)(&v6843, v6841);

	i8 v6844 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v6844 = v6843;

	i8 v6845 = (i8)(intptr_t)(ws+3472);
	i1 v6846 = *(i1*)(intptr_t)v6845;
	i1 v6847 = (i1)+0;
	if (v6846==v6847) goto c02_04f1; else goto c02_04f0;

c02_04f0:;

	i8 v6848 = (i8)(intptr_t)(ws+3456);
	i8 v6849 = *(i8*)(intptr_t)v6848;
	i8 v6850 = v6849+(+16);
	i8 v6851 = *(i8*)(intptr_t)v6850;
	i8 v6852 = (i8)(intptr_t)(ws+3464);
	i8 v6853 = *(i8*)(intptr_t)v6852;
	i8 v6854 = v6853+(+16);
	*(i8*)(intptr_t)v6854 = v6851;

	goto c02_04ed;

c02_04f1:;

	i8 v6855 = (i8)(intptr_t)(ws+3456);
	i8 v6856 = *(i8*)(intptr_t)v6855;
	i8 v6857 = v6856+(+16);
	i8 v6858 = *(i8*)(intptr_t)v6857;
	i8 v6859 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6860;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6859)(&v6860, v6858);

	i8 v6861 = (i8)(intptr_t)(ws+3473);
	*(i1*)(intptr_t)v6861 = v6860;

	i8 v6862 = (i8)(intptr_t)(ws+3473);
	i1 v6863 = *(i1*)(intptr_t)v6862;
	i1 v6864 = (i1)+0;
	if (v6863==v6864) goto c02_04f5; else goto c02_04f4;

c02_04f4:;

	i8 v6865 = (i8)(intptr_t)(ws+1528);
	i8 v6866 = *(i8*)(intptr_t)v6865;
	i8 v6867 = (i8)(intptr_t)(ws+3464);
	i8 v6868 = *(i8*)(intptr_t)v6867;
	i8 v6869 = v6868+(+16);
	*(i8*)(intptr_t)v6869 = v6866;

	goto c02_04ed;

c02_04f5:;

	i8 v6870 = (i8)(intptr_t)c02_s010c;
	i8 v6871 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6871)(v6870);

	i8 v6872 = (i8)(intptr_t)(ws+3456);
	i8 v6873 = *(i8*)(intptr_t)v6872;
	i8 v6874 = v6873+(+16);
	i8 v6875 = *(i8*)(intptr_t)v6874;
	i4 v6876 = v6875;
	i8 v6877 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6877)(v6876);

	i8 v6878 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6878)();

	i8 v6879 = (i8)(intptr_t)c02_s010d;
	i8 v6880 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6880)(v6879);

	i8 v6881 = (i8)(intptr_t)(ws+3464);
	i8 v6882 = *(i8*)(intptr_t)v6881;
	i8 v6883 = v6882+(+16);
	i8 v6884 = *(i8*)(intptr_t)v6883;
	i4 v6885 = v6884;
	i8 v6886 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v6886)(v6885);

	i8 v6887 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v6887)();

	i8 v6888 = (i8)(intptr_t)c02_s010e;
	i8 v6889 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6889)(v6888);

c02_04ed:;

c02_04eb:;

c02_04e5:;

	i8 v6890 = (i8)(intptr_t)(ws+3456);
	i8 v6891 = *(i8*)(intptr_t)v6890;
	i8 v6892 = v6891+(+16);
	i8 v6893 = *(i8*)(intptr_t)v6892;
	i8 v6894 = (i8)+0;
	if (v6893==v6894) goto c02_04fd; else goto c02_04fc;

c02_04fd:;

	i8 v6895 = (i8)(intptr_t)(ws+3464);
	i8 v6896 = *(i8*)(intptr_t)v6895;
	i8 v6897 = v6896+(+16);
	i8 v6898 = *(i8*)(intptr_t)v6897;
	i8 v6899 = (i8)+0;
	if (v6898==v6899) goto c02_04fc; else goto c02_04fb;

c02_04fb:;

	i8 v6900 = (i8)(intptr_t)(ws+3464);
	i8 v6901 = *(i8*)(intptr_t)v6900;
	i8 v6902 = v6901+(+16);
	i8 v6903 = *(i8*)(intptr_t)v6902;
	i8 v6904 = (i8)(intptr_t)(f228_IsNum);
	i1 v6905;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6904)(&v6905, v6903);

	i8 v6906 = (i8)(intptr_t)(ws+3474);
	*(i1*)(intptr_t)v6906 = v6905;

	i8 v6907 = (i8)(intptr_t)(ws+3474);
	i1 v6908 = *(i1*)(intptr_t)v6907;
	i1 v6909 = (i1)+0;
	if (v6908==v6909) goto c02_0502; else goto c02_0501;

c02_0501:;

	i8 v6910 = (i8)(intptr_t)(ws+3464);
	i8 v6911 = *(i8*)(intptr_t)v6910;
	i8 v6912 = v6911+(+16);
	i8 v6913 = *(i8*)(intptr_t)v6912;
	i8 v6914 = (i8)(intptr_t)(ws+3456);
	i8 v6915 = *(i8*)(intptr_t)v6914;
	i8 v6916 = v6915+(+16);
	*(i8*)(intptr_t)v6916 = v6913;

	goto c02_04fe;

c02_0502:;

	i8 v6917 = (i8)(intptr_t)(ws+3464);
	i8 v6918 = *(i8*)(intptr_t)v6917;
	i8 v6919 = v6918+(+16);
	i8 v6920 = *(i8*)(intptr_t)v6919;
	i8 v6921 = (i8)(intptr_t)(f68_IsPtr);
	i1 v6922;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6921)(&v6922, v6920);

	i8 v6923 = (i8)(intptr_t)(ws+3475);
	*(i1*)(intptr_t)v6923 = v6922;

	i8 v6924 = (i8)(intptr_t)(ws+3475);
	i1 v6925 = *(i1*)(intptr_t)v6924;
	i1 v6926 = (i1)+0;
	if (v6925==v6926) goto c02_0506; else goto c02_0505;

c02_0505:;

	i8 v6927 = (i8)(intptr_t)c02_s010f;
	i8 v6928 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6928)(v6927);

c02_0506:;

c02_04fe:;

c02_04fc:;

c02_04f6:;

endsub:;
}
	void f268_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3472 length ws+32
void f271_ResolveUntypedConstantsSimply(i8 p6929 /* rhs */, i8 p6930 /* lhs */) {
	*(i8*)(intptr_t)(ws+3472) = p6930; /* lhs */
	*(i8*)(intptr_t)(ws+3480) = p6929; /* rhs */

	i8 v6931 = (i8)(intptr_t)(ws+3472);
	i8 v6932 = *(i8*)(intptr_t)v6931;
	i8 v6933 = v6932+(+16);
	i8 v6934 = *(i8*)(intptr_t)v6933;
	i8 v6935 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v6935 = v6934;

	i8 v6936 = (i8)(intptr_t)(ws+3480);
	i8 v6937 = *(i8*)(intptr_t)v6936;
	i8 v6938 = v6937+(+16);
	i8 v6939 = *(i8*)(intptr_t)v6938;
	i8 v6940 = (i8)(intptr_t)(ws+3496);
	*(i8*)(intptr_t)v6940 = v6939;

	i8 v6941 = (i8)(intptr_t)(ws+3488);
	i8 v6942 = *(i8*)(intptr_t)v6941;
	i8 v6943 = (i8)+0;
	if (v6942==v6943) goto c02_050d; else goto c02_050e;

c02_050e:;

	i8 v6944 = (i8)(intptr_t)(ws+3496);
	i8 v6945 = *(i8*)(intptr_t)v6944;
	i8 v6946 = (i8)+0;
	if (v6945==v6946) goto c02_050c; else goto c02_050d;

c02_050c:;

	i8 v6947 = (i8)(intptr_t)(ws+3488);
	i8 v6948 = *(i8*)(intptr_t)v6947;
	i8 v6949 = (i8)(intptr_t)(ws+3480);
	i8 v6950 = *(i8*)(intptr_t)v6949;
	i8 v6951 = v6950+(+16);
	*(i8*)(intptr_t)v6951 = v6948;

	goto c02_0507;

c02_050d:;

	i8 v6952 = (i8)(intptr_t)(ws+3488);
	i8 v6953 = *(i8*)(intptr_t)v6952;
	i8 v6954 = (i8)+0;
	if (v6953==v6954) goto c02_0515; else goto c02_0514;

c02_0515:;

	i8 v6955 = (i8)(intptr_t)(ws+3496);
	i8 v6956 = *(i8*)(intptr_t)v6955;
	i8 v6957 = (i8)+0;
	if (v6956==v6957) goto c02_0514; else goto c02_0513;

c02_0513:;

	i8 v6958 = (i8)(intptr_t)(ws+3496);
	i8 v6959 = *(i8*)(intptr_t)v6958;
	i8 v6960 = (i8)(intptr_t)(ws+3472);
	i8 v6961 = *(i8*)(intptr_t)v6960;
	i8 v6962 = v6961+(+16);
	*(i8*)(intptr_t)v6962 = v6959;

	goto c02_0507;

c02_0514:;

	i8 v6963 = (i8)(intptr_t)(ws+3488);
	i8 v6964 = *(i8*)(intptr_t)v6963;
	i8 v6965 = (i8)(intptr_t)(ws+3496);
	i8 v6966 = *(i8*)(intptr_t)v6965;
	if (v6964==v6966) goto c02_0519; else goto c02_0518;

c02_0518:;

	i8 v6967 = (i8)(intptr_t)(ws+3472);
	i8 v6968 = *(i8*)(intptr_t)v6967;
	i8 v6969 = (i8)(intptr_t)(ws+3480);
	i8 v6970 = *(i8*)(intptr_t)v6969;
	i8 v6971 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6971)(v6970, v6968);

c02_0519:;

c02_0507:;

endsub:;
}
	void f228_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0110[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3472 length ws+9
void f272_CheckNumber(i8 p6972 /* node */) {
	*(i8*)(intptr_t)(ws+3472) = p6972; /* node */

	i8 v6973 = (i8)(intptr_t)(ws+3472);
	i8 v6974 = *(i8*)(intptr_t)v6973;
	i8 v6975 = v6974+(+16);
	i8 v6976 = *(i8*)(intptr_t)v6975;
	i8 v6977 = (i8)(intptr_t)(f228_IsNum);
	i1 v6978;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6977)(&v6978, v6976);

	i8 v6979 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v6979 = v6978;

	i8 v6980 = (i8)(intptr_t)(ws+3480);
	i1 v6981 = *(i1*)(intptr_t)v6980;
	i1 v6982 = (i1)+0;
	if (v6981==v6982) goto c02_051d; else goto c02_051e;

c02_051d:;

	i8 v6983 = (i8)(intptr_t)c02_s0110;
	i8 v6984 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6984)(v6983);

c02_051e:;

c02_051a:;

endsub:;
}
	void f271_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f272_CheckNumber(i8 /* node */);
	void f272_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3456 length ws+16
void f273_ResolveUntypedConstantsNeedingNumbers(i8 p6985 /* rhs */, i8 p6986 /* lhs */) {
	*(i8*)(intptr_t)(ws+3456) = p6986; /* lhs */
	*(i8*)(intptr_t)(ws+3464) = p6985; /* rhs */

	i8 v6987 = (i8)(intptr_t)(ws+3456);
	i8 v6988 = *(i8*)(intptr_t)v6987;
	i8 v6989 = (i8)(intptr_t)(ws+3464);
	i8 v6990 = *(i8*)(intptr_t)v6989;
	i8 v6991 = (i8)(intptr_t)(f271_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6991)(v6990, v6988);

	i8 v6992 = (i8)(intptr_t)(ws+3456);
	i8 v6993 = *(i8*)(intptr_t)v6992;
	i8 v6994 = (i8)(intptr_t)(f272_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6994)(v6993);

	i8 v6995 = (i8)(intptr_t)(ws+3464);
	i8 v6996 = *(i8*)(intptr_t)v6995;
	i8 v6997 = (i8)(intptr_t)(f272_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6997)(v6996);

endsub:;
}
	void f271_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f268_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3456 length ws+16
void f274_CondSimple(i8 p6998 /* rhs */, i8 p6999 /* lhs */) {
	*(i8*)(intptr_t)(ws+3456) = p6999; /* lhs */
	*(i8*)(intptr_t)(ws+3464) = p6998; /* rhs */

	i8 v7000 = (i8)(intptr_t)(ws+3456);
	i8 v7001 = *(i8*)(intptr_t)v7000;
	i8 v7002 = (i8)(intptr_t)(ws+3464);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = (i8)(intptr_t)(f271_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7004)(v7003, v7001);

	i8 v7005 = (i8)(intptr_t)(ws+3456);
	i8 v7006 = *(i8*)(intptr_t)v7005;
	i8 v7007 = v7006+(+16);
	i8 v7008 = *(i8*)(intptr_t)v7007;
	i8 v7009 = (i8)(intptr_t)(ws+3464);
	i8 v7010 = *(i8*)(intptr_t)v7009;
	i8 v7011 = v7010+(+16);
	i8 v7012 = *(i8*)(intptr_t)v7011;
	if (v7008==v7012) goto c02_0523; else goto c02_0522;

c02_0522:;

	i8 v7013 = (i8)(intptr_t)(ws+3456);
	i8 v7014 = *(i8*)(intptr_t)v7013;
	i8 v7015 = (i8)(intptr_t)(ws+3464);
	i8 v7016 = *(i8*)(intptr_t)v7015;
	i8 v7017 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7017)(v7016, v7014);

c02_0523:;

c02_051f:;

endsub:;
}
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f170_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3392 length ws+40
void f275_Expr1Simple(i8* p7018 /* result */, i8 p7019 /* lhs */, i1 p7020 /* op */) {
	*(i1*)(intptr_t)(ws+3392) = p7020; /* op */
	*(i8*)(intptr_t)(ws+3400) = p7019; /* lhs */

	i8 v7021 = (i8)(intptr_t)(ws+3400);
	i8 v7022 = *(i8*)(intptr_t)v7021;
	i8 v7023 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7024;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7023)(&v7024, v7022);

	i8 v7025 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v7025 = v7024;

	i8 v7026 = (i8)(intptr_t)(ws+3392);
	i1 v7027 = *(i1*)(intptr_t)v7026;
	i8 v7028 = (i8)(intptr_t)(ws+3416);
	i1 v7029 = *(i1*)(intptr_t)v7028;
	i8 v7030 = (i8)(intptr_t)(ws+3400);
	i8 v7031 = *(i8*)(intptr_t)v7030;
	i8 v7032 = (i8)(intptr_t)(f170_MidC1Op);
	i8 v7033;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7032)(&v7033, v7031, v7029, v7027);

	i8 v7034 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v7034 = v7033;

	i8 v7035 = (i8)(intptr_t)(ws+3424);
	i8 v7036 = *(i8*)(intptr_t)v7035;
	i8 v7037 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7037 = v7036;

	i8 v7038 = (i8)(intptr_t)(ws+3400);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	i8 v7040 = v7039+(+16);
	i8 v7041 = *(i8*)(intptr_t)v7040;
	i8 v7042 = (i8)(intptr_t)(ws+3408);
	i8 v7043 = *(i8*)(intptr_t)v7042;
	i8 v7044 = v7043+(+16);
	*(i8*)(intptr_t)v7044 = v7041;

endsub:;
	*p7018 = *(i8*)(intptr_t)(ws+3408);
}
	void f270_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f268_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3448 length ws+0
void f277_cant_add_that(void) {

	i8 v7053 = (i8)(intptr_t)(ws+3392);
	i8 v7054 = *(i8*)(intptr_t)v7053;
	i8 v7055 = (i8)(intptr_t)(ws+3400);
	i8 v7056 = *(i8*)(intptr_t)v7055;
	i8 v7057 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7057)(v7056, v7054);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f277_cant_add_that(void);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f277_cant_add_that(void);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f277_cant_add_that(void);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3392 length ws+56
void f276_ExprAdd(i8* p7045 /* result */, i8 p7046 /* rhs */, i8 p7047 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p7047; /* lhs */
	*(i8*)(intptr_t)(ws+3400) = p7046; /* rhs */

	i8 v7048 = (i8)(intptr_t)(ws+3392);
	i8 v7049 = *(i8*)(intptr_t)v7048;
	i8 v7050 = (i8)(intptr_t)(ws+3400);
	i8 v7051 = *(i8*)(intptr_t)v7050;
	i8 v7052 = (i8)(intptr_t)(f270_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7052)(v7051, v7049);


	i8 v7058 = (i8)(intptr_t)(ws+3392);
	i8 v7059 = *(i8*)(intptr_t)v7058;
	i8 v7060 = v7059+(+16);
	i8 v7061 = *(i8*)(intptr_t)v7060;
	i8 v7062 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7062 = v7061;

	i8 v7063 = (i8)(intptr_t)(ws+3400);
	i8 v7064 = *(i8*)(intptr_t)v7063;
	i8 v7065 = v7064+(+16);
	i8 v7066 = *(i8*)(intptr_t)v7065;
	i8 v7067 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v7067 = v7066;

	i8 v7068 = (i8)(intptr_t)(ws+3416);
	i8 v7069 = *(i8*)(intptr_t)v7068;
	i8 v7070 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7071;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7070)(&v7071, v7069);

	i8 v7072 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7072 = v7071;

	i8 v7073 = (i8)(intptr_t)(ws+3432);
	i1 v7074 = *(i1*)(intptr_t)v7073;
	i1 v7075 = (i1)+0;
	if (v7074==v7075) goto c02_0528; else goto c02_0527;

c02_0527:;

	i8 v7076 = (i8)(intptr_t)(ws+3424);
	i8 v7077 = *(i8*)(intptr_t)v7076;
	i8 v7078 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7079;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7078)(&v7079, v7077);

	i8 v7080 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7080 = v7079;

	i8 v7081 = (i8)(intptr_t)(ws+3433);
	i1 v7082 = *(i1*)(intptr_t)v7081;
	i1 v7083 = (i1)+0;
	if (v7082==v7083) goto c02_0530; else goto c02_052e;

c02_0530:;

	i8 v7084 = (i8)(intptr_t)(ws+3424);
	i8 v7085 = *(i8*)(intptr_t)v7084;
	i8 v7086 = (i8)(intptr_t)(ws+1528);
	i8 v7087 = *(i8*)(intptr_t)v7086;
	if (v7085==v7087) goto c02_052f; else goto c02_052e;

c02_052e:;

	i8 v7088 = (i8)(intptr_t)(f277_cant_add_that);

	((void(*)(void))(intptr_t)v7088)();

c02_052f:;

c02_0529:;

	goto c02_0524;

c02_0528:;

	i8 v7089 = (i8)(intptr_t)(ws+3424);
	i8 v7090 = *(i8*)(intptr_t)v7089;
	i8 v7091 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7092;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7091)(&v7092, v7090);

	i8 v7093 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v7093 = v7092;

	i8 v7094 = (i8)(intptr_t)(ws+3434);
	i1 v7095 = *(i1*)(intptr_t)v7094;
	i1 v7096 = (i1)+0;
	if (v7095==v7096) goto c02_0534; else goto c02_0533;

c02_0533:;

	i8 v7097 = (i8)(intptr_t)(f277_cant_add_that);

	((void(*)(void))(intptr_t)v7097)();

	goto c02_0524;

c02_0534:;

	i8 v7098 = (i8)(intptr_t)(ws+3416);
	i8 v7099 = *(i8*)(intptr_t)v7098;
	i8 v7100 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7101;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7100)(&v7101, v7099);

	i8 v7102 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v7102 = v7101;

	i8 v7103 = (i8)(intptr_t)(ws+3435);
	i1 v7104 = *(i1*)(intptr_t)v7103;
	i1 v7105 = (i1)+0;
	if (v7104==v7105) goto c02_053b; else goto c02_053a;

c02_053b:;

	i8 v7106 = (i8)(intptr_t)(ws+3416);
	i8 v7107 = *(i8*)(intptr_t)v7106;
	i8 v7108 = (i8)(intptr_t)(ws+3424);
	i8 v7109 = *(i8*)(intptr_t)v7108;
	if (v7107==v7109) goto c02_053a; else goto c02_0539;

c02_0539:;

	i8 v7110 = (i8)(intptr_t)(f277_cant_add_that);

	((void(*)(void))(intptr_t)v7110)();

c02_053a:;

c02_0524:;

	i8 v7111 = (i8)(intptr_t)(ws+3392);
	i8 v7112 = *(i8*)(intptr_t)v7111;
	i8 v7113 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7114;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7113)(&v7114, v7112);

	i8 v7115 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v7115 = v7114;

	i1 v7116 = (i1)+156;
	i8 v7117 = (i8)(intptr_t)(ws+3436);
	i1 v7118 = *(i1*)(intptr_t)v7117;
	i8 v7119 = (i8)(intptr_t)(ws+3392);
	i8 v7120 = *(i8*)(intptr_t)v7119;
	i8 v7121 = (i8)(intptr_t)(ws+3400);
	i8 v7122 = *(i8*)(intptr_t)v7121;
	i8 v7123 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v7124;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7123)(&v7124, v7122, v7120, v7118, v7116);

	i8 v7125 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7125 = v7124;

	i8 v7126 = (i8)(intptr_t)(ws+3440);
	i8 v7127 = *(i8*)(intptr_t)v7126;
	i8 v7128 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7128 = v7127;

	i8 v7129 = (i8)(intptr_t)(ws+3416);
	i8 v7130 = *(i8*)(intptr_t)v7129;
	i8 v7131 = (i8)(intptr_t)(ws+3408);
	i8 v7132 = *(i8*)(intptr_t)v7131;
	i8 v7133 = v7132+(+16);
	*(i8*)(intptr_t)v7133 = v7130;

endsub:;
	*p7045 = *(i8*)(intptr_t)(ws+3408);
}
	void f270_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f268_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3456 length ws+0
void f279_cant_sub_that(void) {

	i8 v7142 = (i8)(intptr_t)(ws+3392);
	i8 v7143 = *(i8*)(intptr_t)v7142;
	i8 v7144 = (i8)(intptr_t)(ws+3400);
	i8 v7145 = *(i8*)(intptr_t)v7144;
	i8 v7146 = (i8)(intptr_t)(f268_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7146)(v7145, v7143);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f279_cant_sub_that(void);
	void f228_IsNum(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f279_cant_sub_that(void);
	void f228_IsNum(i1* /* result */, i8 /* type */);
	void f228_IsNum(i1* /* result */, i8 /* type */);
	void f279_cant_sub_that(void);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3392 length ws+57
void f278_ExprSub(i8* p7134 /* result */, i8 p7135 /* rhs */, i8 p7136 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p7136; /* lhs */
	*(i8*)(intptr_t)(ws+3400) = p7135; /* rhs */

	i8 v7137 = (i8)(intptr_t)(ws+3392);
	i8 v7138 = *(i8*)(intptr_t)v7137;
	i8 v7139 = (i8)(intptr_t)(ws+3400);
	i8 v7140 = *(i8*)(intptr_t)v7139;
	i8 v7141 = (i8)(intptr_t)(f270_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7141)(v7140, v7138);


	i8 v7147 = (i8)(intptr_t)(ws+3392);
	i8 v7148 = *(i8*)(intptr_t)v7147;
	i8 v7149 = v7148+(+16);
	i8 v7150 = *(i8*)(intptr_t)v7149;
	i8 v7151 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7151 = v7150;

	i8 v7152 = (i8)(intptr_t)(ws+3400);
	i8 v7153 = *(i8*)(intptr_t)v7152;
	i8 v7154 = v7153+(+16);
	i8 v7155 = *(i8*)(intptr_t)v7154;
	i8 v7156 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v7156 = v7155;

	i8 v7157 = (i8)(intptr_t)(ws+3416);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7160;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7159)(&v7160, v7158);

	i8 v7161 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7161 = v7160;

	i8 v7162 = (i8)(intptr_t)(ws+3424);
	i8 v7163 = *(i8*)(intptr_t)v7162;
	i8 v7164 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7165;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7164)(&v7165, v7163);

	i8 v7166 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7166 = v7165;

	i8 v7167 = (i8)(intptr_t)(ws+3432);
	i1 v7168 = *(i1*)(intptr_t)v7167;
	i1 v7169 = (i1)+0;
	if (v7168==v7169) goto c02_0544; else goto c02_0546;

c02_0546:;

	i8 v7170 = (i8)(intptr_t)(ws+3433);
	i1 v7171 = *(i1*)(intptr_t)v7170;
	i1 v7172 = (i1)+0;
	if (v7171==v7172) goto c02_0545; else goto c02_0544;

c02_0545:;

	i8 v7173 = (i8)(intptr_t)(ws+3424);
	i8 v7174 = *(i8*)(intptr_t)v7173;
	i8 v7175 = (i8)(intptr_t)(ws+1528);
	i8 v7176 = *(i8*)(intptr_t)v7175;
	if (v7174==v7176) goto c02_0544; else goto c02_0543;

c02_0543:;

	i8 v7177 = (i8)(intptr_t)(f279_cant_sub_that);

	((void(*)(void))(intptr_t)v7177)();

	goto c02_053c;

c02_0544:;

	i8 v7178 = (i8)(intptr_t)(ws+3416);
	i8 v7179 = *(i8*)(intptr_t)v7178;
	i8 v7180 = (i8)(intptr_t)(f228_IsNum);
	i1 v7181;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7180)(&v7181, v7179);

	i8 v7182 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v7182 = v7181;

	i8 v7183 = (i8)(intptr_t)(ws+3424);
	i8 v7184 = *(i8*)(intptr_t)v7183;
	i8 v7185 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7186;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7185)(&v7186, v7184);

	i8 v7187 = (i8)(intptr_t)(ws+3435);
	*(i1*)(intptr_t)v7187 = v7186;

	i8 v7188 = (i8)(intptr_t)(ws+3434);
	i1 v7189 = *(i1*)(intptr_t)v7188;
	i1 v7190 = (i1)+0;
	if (v7189==v7190) goto c02_054c; else goto c02_054d;

c02_054d:;

	i8 v7191 = (i8)(intptr_t)(ws+3435);
	i1 v7192 = *(i1*)(intptr_t)v7191;
	i1 v7193 = (i1)+0;
	if (v7192==v7193) goto c02_054c; else goto c02_054b;

c02_054b:;

	i8 v7194 = (i8)(intptr_t)(f279_cant_sub_that);

	((void(*)(void))(intptr_t)v7194)();

	goto c02_053c;

c02_054c:;

	i8 v7195 = (i8)(intptr_t)(ws+3416);
	i8 v7196 = *(i8*)(intptr_t)v7195;
	i8 v7197 = (i8)(intptr_t)(f228_IsNum);
	i1 v7198;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7197)(&v7198, v7196);

	i8 v7199 = (i8)(intptr_t)(ws+3436);
	*(i1*)(intptr_t)v7199 = v7198;

	i8 v7200 = (i8)(intptr_t)(ws+3424);
	i8 v7201 = *(i8*)(intptr_t)v7200;
	i8 v7202 = (i8)(intptr_t)(f228_IsNum);
	i1 v7203;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7202)(&v7203, v7201);

	i8 v7204 = (i8)(intptr_t)(ws+3437);
	*(i1*)(intptr_t)v7204 = v7203;

	i8 v7205 = (i8)(intptr_t)(ws+3436);
	i1 v7206 = *(i1*)(intptr_t)v7205;
	i1 v7207 = (i1)+0;
	if (v7206==v7207) goto c02_0555; else goto c02_0557;

c02_0557:;

	i8 v7208 = (i8)(intptr_t)(ws+3437);
	i1 v7209 = *(i1*)(intptr_t)v7208;
	i1 v7210 = (i1)+0;
	if (v7209==v7210) goto c02_0555; else goto c02_0556;

c02_0556:;

	i8 v7211 = (i8)(intptr_t)(ws+3416);
	i8 v7212 = *(i8*)(intptr_t)v7211;
	i8 v7213 = (i8)(intptr_t)(ws+3424);
	i8 v7214 = *(i8*)(intptr_t)v7213;
	if (v7212==v7214) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v7215 = (i8)(intptr_t)(f279_cant_sub_that);

	((void(*)(void))(intptr_t)v7215)();

c02_0555:;

c02_053c:;

	i8 v7216 = (i8)(intptr_t)(ws+3392);
	i8 v7217 = *(i8*)(intptr_t)v7216;
	i8 v7218 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7219;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7218)(&v7219, v7217);

	i8 v7220 = (i8)(intptr_t)(ws+3438);
	*(i1*)(intptr_t)v7220 = v7219;

	i1 v7221 = (i1)+131;
	i8 v7222 = (i8)(intptr_t)(ws+3438);
	i1 v7223 = *(i1*)(intptr_t)v7222;
	i8 v7224 = (i8)(intptr_t)(ws+3392);
	i8 v7225 = *(i8*)(intptr_t)v7224;
	i8 v7226 = (i8)(intptr_t)(ws+3400);
	i8 v7227 = *(i8*)(intptr_t)v7226;
	i8 v7228 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v7229;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7228)(&v7229, v7227, v7225, v7223, v7221);

	i8 v7230 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7230 = v7229;

	i8 v7231 = (i8)(intptr_t)(ws+3440);
	i8 v7232 = *(i8*)(intptr_t)v7231;
	i8 v7233 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7233 = v7232;

	i8 v7234 = (i8)(intptr_t)(ws+3416);
	i8 v7235 = *(i8*)(intptr_t)v7234;
	i8 v7236 = (i8)(intptr_t)(f68_IsPtr);
	i1 v7237;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7236)(&v7237, v7235);

	i8 v7238 = (i8)(intptr_t)(ws+3448);
	*(i1*)(intptr_t)v7238 = v7237;

	i8 v7239 = (i8)(intptr_t)(ws+3448);
	i1 v7240 = *(i1*)(intptr_t)v7239;
	i1 v7241 = (i1)+0;
	if (v7240==v7241) goto c02_055e; else goto c02_055f;

c02_055f:;

	i8 v7242 = (i8)(intptr_t)(ws+3416);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = (i8)(intptr_t)(ws+3424);
	i8 v7245 = *(i8*)(intptr_t)v7244;
	if (v7243==v7245) goto c02_055d; else goto c02_055e;

c02_055d:;

	i8 v7246 = (i8)(intptr_t)(ws+1528);
	i8 v7247 = *(i8*)(intptr_t)v7246;
	i8 v7248 = (i8)(intptr_t)(ws+3408);
	i8 v7249 = *(i8*)(intptr_t)v7248;
	i8 v7250 = v7249+(+16);
	*(i8*)(intptr_t)v7250 = v7247;

	goto c02_0558;

c02_055e:;

	i8 v7251 = (i8)(intptr_t)(ws+3416);
	i8 v7252 = *(i8*)(intptr_t)v7251;
	i8 v7253 = (i8)(intptr_t)(ws+3408);
	i8 v7254 = *(i8*)(intptr_t)v7253;
	i8 v7255 = v7254+(+16);
	*(i8*)(intptr_t)v7255 = v7252;

c02_0558:;

endsub:;
	*p7134 = *(i8*)(intptr_t)(ws+3408);
}
	void f273_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f229_IsSNum(i1* /* result */, i8 /* type */);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3392 length ws+64
void f280_Expr2Simple(i8* p7256 /* result */, i8 p7257 /* rhs */, i8 p7258 /* lhs */, i1 p7259 /* uop */, i1 p7260 /* sop */) {
	*(i1*)(intptr_t)(ws+3392) = p7260; /* sop */
	*(i1*)(intptr_t)(ws+3393) = p7259; /* uop */
	*(i8*)(intptr_t)(ws+3400) = p7258; /* lhs */
	*(i8*)(intptr_t)(ws+3408) = p7257; /* rhs */

	i8 v7261 = (i8)(intptr_t)(ws+3400);
	i8 v7262 = *(i8*)(intptr_t)v7261;
	i8 v7263 = (i8)(intptr_t)(ws+3408);
	i8 v7264 = *(i8*)(intptr_t)v7263;
	i8 v7265 = (i8)(intptr_t)(f273_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7265)(v7264, v7262);

	i8 v7266 = (i8)(intptr_t)(ws+3393);
	i1 v7267 = *(i1*)(intptr_t)v7266;
	i8 v7268 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v7268 = v7267;

	i8 v7269 = (i8)(intptr_t)(ws+3400);
	i8 v7270 = *(i8*)(intptr_t)v7269;
	i8 v7271 = v7270+(+16);
	i8 v7272 = *(i8*)(intptr_t)v7271;
	i8 v7273 = (i8)(intptr_t)(f229_IsSNum);
	i1 v7274;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7273)(&v7274, v7272);

	i8 v7275 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v7275 = v7274;

	i8 v7276 = (i8)(intptr_t)(ws+3425);
	i1 v7277 = *(i1*)(intptr_t)v7276;
	i1 v7278 = (i1)+0;
	if (v7277==v7278) goto c02_0564; else goto c02_0563;

c02_0563:;

	i8 v7279 = (i8)(intptr_t)(ws+3392);
	i1 v7280 = *(i1*)(intptr_t)v7279;
	i8 v7281 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v7281 = v7280;

c02_0564:;

c02_0560:;

	i8 v7282 = (i8)(intptr_t)(ws+3400);
	i8 v7283 = *(i8*)(intptr_t)v7282;
	i8 v7284 = v7283+(+16);
	i8 v7285 = *(i8*)(intptr_t)v7284;
	i8 v7286 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v7286 = v7285;

	i8 v7287 = (i8)(intptr_t)(ws+3400);
	i8 v7288 = *(i8*)(intptr_t)v7287;
	i8 v7289 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7290;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7289)(&v7290, v7288);

	i8 v7291 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v7291 = v7290;

	i8 v7292 = (i8)(intptr_t)(ws+3424);
	i1 v7293 = *(i1*)(intptr_t)v7292;
	i8 v7294 = (i8)(intptr_t)(ws+3440);
	i1 v7295 = *(i1*)(intptr_t)v7294;
	i8 v7296 = (i8)(intptr_t)(ws+3400);
	i8 v7297 = *(i8*)(intptr_t)v7296;
	i8 v7298 = (i8)(intptr_t)(ws+3408);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v7301;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7300)(&v7301, v7299, v7297, v7295, v7293);

	i8 v7302 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7302 = v7301;

	i8 v7303 = (i8)(intptr_t)(ws+3448);
	i8 v7304 = *(i8*)(intptr_t)v7303;
	i8 v7305 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7305 = v7304;

	i8 v7306 = (i8)(intptr_t)(ws+3432);
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = (i8)(intptr_t)(ws+3416);
	i8 v7309 = *(i8*)(intptr_t)v7308;
	i8 v7310 = v7309+(+16);
	*(i8*)(intptr_t)v7310 = v7307;

endsub:;
	*p7256 = *(i8*)(intptr_t)(ws+3416);
}
const i1 c02_s0111[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f76_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3456 length ws+8
void f281_expr_i_checkrhsconst(i8 p7311 /* rhs */) {
	*(i8*)(intptr_t)(ws+3456) = p7311; /* rhs */

	i8 v7312 = (i8)(intptr_t)(ws+3456);
	i8 v7313 = *(i8*)(intptr_t)v7312;
	i8 v7314 = v7313+(+40);
	i1 v7315 = *(i1*)(intptr_t)v7314;
	i1 v7316 = (i1)+40;
	if (v7315==v7316) goto c02_0569; else goto c02_0568;

c02_0568:;

	i8 v7317 = (i8)(intptr_t)c02_s0111;
	i8 v7318 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7318)(v7317);

c02_0569:;

c02_0565:;

endsub:;
}
	void f228_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0112[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3456 length ws+17
void f282_expr_i_checkshift(i8 p7319 /* rhs */, i8 p7320 /* lhs */) {
	*(i8*)(intptr_t)(ws+3456) = p7320; /* lhs */
	*(i8*)(intptr_t)(ws+3464) = p7319; /* rhs */

	i8 v7321 = (i8)(intptr_t)(ws+3456);
	i8 v7322 = *(i8*)(intptr_t)v7321;
	i8 v7323 = v7322+(+16);
	i8 v7324 = *(i8*)(intptr_t)v7323;
	i8 v7325 = (i8)(intptr_t)(f228_IsNum);
	i1 v7326;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7325)(&v7326, v7324);

	i8 v7327 = (i8)(intptr_t)(ws+3472);
	*(i1*)(intptr_t)v7327 = v7326;

	i8 v7328 = (i8)(intptr_t)(ws+3472);
	i1 v7329 = *(i1*)(intptr_t)v7328;
	i1 v7330 = (i1)+0;
	if (v7329==v7330) goto c02_056d; else goto c02_056e;

c02_056d:;

	i8 v7331 = (i8)(intptr_t)c02_s0112;
	i8 v7332 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7332)(v7331);

c02_056e:;

c02_056a:;

	i8 v7333 = (i8)(intptr_t)(ws+3464);
	i8 v7334 = *(i8*)(intptr_t)v7333;
	i8 v7335 = (i8)(intptr_t)(ws+1512);
	i8 v7336 = *(i8*)(intptr_t)v7335;
	i8 v7337 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7337)(v7336, v7334);

endsub:;
}
	void f229_IsSNum(i1* /* result */, i8 /* type */);
	void f281_expr_i_checkrhsconst(i8 /* rhs */);
	void f169_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f63_Discard(i8 /* node */);
	void f282_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3392 length ws+64
void f283_ExprShift(i8* p7338 /* result */, i8 p7339 /* rhs */, i8 p7340 /* lhs */, i1 p7341 /* uop */, i1 p7342 /* sop */) {
	*(i1*)(intptr_t)(ws+3392) = p7342; /* sop */
	*(i1*)(intptr_t)(ws+3393) = p7341; /* uop */
	*(i8*)(intptr_t)(ws+3400) = p7340; /* lhs */
	*(i8*)(intptr_t)(ws+3408) = p7339; /* rhs */

	i8 v7343 = (i8)(intptr_t)(ws+3393);
	i1 v7344 = *(i1*)(intptr_t)v7343;
	i8 v7345 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v7345 = v7344;

	i8 v7346 = (i8)(intptr_t)(ws+3400);
	i8 v7347 = *(i8*)(intptr_t)v7346;
	i8 v7348 = v7347+(+16);
	i8 v7349 = *(i8*)(intptr_t)v7348;
	i8 v7350 = (i8)(intptr_t)(f229_IsSNum);
	i1 v7351;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7350)(&v7351, v7349);

	i8 v7352 = (i8)(intptr_t)(ws+3425);
	*(i1*)(intptr_t)v7352 = v7351;

	i8 v7353 = (i8)(intptr_t)(ws+3425);
	i1 v7354 = *(i1*)(intptr_t)v7353;
	i1 v7355 = (i1)+0;
	if (v7354==v7355) goto c02_0573; else goto c02_0572;

c02_0572:;

	i8 v7356 = (i8)(intptr_t)(ws+3392);
	i1 v7357 = *(i1*)(intptr_t)v7356;
	i8 v7358 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v7358 = v7357;

c02_0573:;

c02_056f:;

	i8 v7359 = (i8)(intptr_t)(ws+3400);
	i8 v7360 = *(i8*)(intptr_t)v7359;
	i8 v7361 = v7360+(+40);
	i1 v7362 = *(i1*)(intptr_t)v7361;
	i1 v7363 = (i1)+40;
	if (v7362==v7363) goto c02_0577; else goto c02_0578;

c02_0577:;

	i8 v7364 = (i8)(intptr_t)(ws+3408);
	i8 v7365 = *(i8*)(intptr_t)v7364;
	i8 v7366 = (i8)(intptr_t)(f281_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v7366)(v7365);

	i8 v7367 = (i8)(intptr_t)(ws+3424);
	i1 v7368 = *(i1*)(intptr_t)v7367;
	i8 v7369 = (i8)(intptr_t)(ws+3400);
	i8 v7370 = *(i8*)(intptr_t)v7369;
	i8 v7371 = (i8)(intptr_t)(ws+3408);
	i8 v7372 = *(i8*)(intptr_t)v7371;
	i8 v7373 = (i8)(intptr_t)(f169_FoldConstant2);
	i4 v7374;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v7373)(&v7374, v7372, v7370, v7368);

	i8 v7375 = (i8)(intptr_t)(ws+3428);
	*(i4*)(intptr_t)v7375 = v7374;

	i8 v7376 = (i8)(intptr_t)(ws+3428);
	i4 v7377 = *(i4*)(intptr_t)v7376;
	i8 v7378 = (i8)(intptr_t)(ws+3400);
	i8 v7379 = *(i8*)(intptr_t)v7378;
	*(i4*)(intptr_t)v7379 = v7377;

	i8 v7380 = (i8)(intptr_t)(ws+3400);
	i8 v7381 = *(i8*)(intptr_t)v7380;
	i8 v7382 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7382 = v7381;

	i8 v7383 = (i8)(intptr_t)(ws+3408);
	i8 v7384 = *(i8*)(intptr_t)v7383;
	i8 v7385 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v7385)(v7384);

	goto endsub;

c02_0578:;

c02_0574:;

	i8 v7386 = (i8)(intptr_t)(ws+3400);
	i8 v7387 = *(i8*)(intptr_t)v7386;
	i8 v7388 = (i8)(intptr_t)(ws+3408);
	i8 v7389 = *(i8*)(intptr_t)v7388;
	i8 v7390 = (i8)(intptr_t)(f282_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7390)(v7389, v7387);

	i8 v7391 = (i8)(intptr_t)(ws+3400);
	i8 v7392 = *(i8*)(intptr_t)v7391;
	i8 v7393 = v7392+(+16);
	i8 v7394 = *(i8*)(intptr_t)v7393;
	i8 v7395 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v7395 = v7394;

	i8 v7396 = (i8)(intptr_t)(ws+3400);
	i8 v7397 = *(i8*)(intptr_t)v7396;
	i8 v7398 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7399;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7398)(&v7399, v7397);

	i8 v7400 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v7400 = v7399;

	i8 v7401 = (i8)(intptr_t)(ws+3424);
	i1 v7402 = *(i1*)(intptr_t)v7401;
	i8 v7403 = (i8)(intptr_t)(ws+3440);
	i1 v7404 = *(i1*)(intptr_t)v7403;
	i8 v7405 = (i8)(intptr_t)(ws+3400);
	i8 v7406 = *(i8*)(intptr_t)v7405;
	i8 v7407 = (i8)(intptr_t)(ws+3408);
	i8 v7408 = *(i8*)(intptr_t)v7407;
	i8 v7409 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v7410;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7409)(&v7410, v7408, v7406, v7404, v7402);

	i8 v7411 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7411 = v7410;

	i8 v7412 = (i8)(intptr_t)(ws+3448);
	i8 v7413 = *(i8*)(intptr_t)v7412;
	i8 v7414 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7414 = v7413;

	i8 v7415 = (i8)(intptr_t)(ws+3432);
	i8 v7416 = *(i8*)(intptr_t)v7415;
	i8 v7417 = (i8)(intptr_t)(ws+3416);
	i8 v7418 = *(i8*)(intptr_t)v7417;
	i8 v7419 = v7418+(+16);
	*(i8*)(intptr_t)v7419 = v7416;

endsub:;
	*p7338 = *(i8*)(intptr_t)(ws+3416);
}
const i1 c02_s0113[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f76_SimpleError(i8 /* message */);

// PushNode workspace at ws+3640 length ws+8
void f60_PushNode(i8 p7420 /* node */) {
	*(i8*)(intptr_t)(ws+3640) = p7420; /* node */

	i8 v7421 = (i8)(intptr_t)(ws+3640);
	i8 v7422 = *(i8*)(intptr_t)v7421;
	i8 v7423 = (i8)+0;
	if (v7422==v7423) goto c02_057d; else goto c02_057c;

c02_057c:;

	i8 v7424 = (i8)(intptr_t)(ws+224);
	i8 v7425 = *(i8*)(intptr_t)v7424;
	i8 v7426 = (i8)(intptr_t)(ws+224);
	if (v7425==v7426) goto c02_0581; else goto c02_0582;

c02_0581:;

	i8 v7427 = (i8)(intptr_t)c02_s0113;
	i8 v7428 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7428)(v7427);

c02_0582:;

c02_057e:;

	i8 v7429 = (i8)(intptr_t)(ws+3640);
	i8 v7430 = *(i8*)(intptr_t)v7429;
	i8 v7431 = (i8)(intptr_t)(ws+224);
	i8 v7432 = *(i8*)(intptr_t)v7431;
	*(i8*)(intptr_t)v7432 = v7430;

	i8 v7433 = (i8)(intptr_t)(ws+224);
	i8 v7434 = *(i8*)(intptr_t)v7433;
	i8 v7435 = v7434+(+8);
	i8 v7436 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v7436 = v7435;

c02_057d:;

c02_0579:;

endsub:;
}

// PopNode workspace at ws+3640 length ws+8
void f61_PopNode(i8* p7437 /* node */) {

	i8 v7438 = (i8)(intptr_t)(ws+224);
	i8 v7439 = *(i8*)(intptr_t)v7438;
	i8 v7440 = v7439+(-8);
	i8 v7441 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v7441 = v7440;

	i8 v7442 = (i8)(intptr_t)(ws+224);
	i8 v7443 = *(i8*)(intptr_t)v7442;
	i8 v7444 = *(i8*)(intptr_t)v7443;
	i8 v7445 = (i8)(intptr_t)(ws+3640);
	*(i8*)(intptr_t)v7445 = v7444;

endsub:;
	*p7437 = *(i8*)(intptr_t)(ws+3640);
}
	void f61_PopNode(i8* /* node */);
	void f60_PushNode(i8 /* node */);
	void f60_PushNode(i8 /* node */);

// NextNode workspace at ws+3624 length ws+16
void f62_NextNode(i8* p7446 /* node */) {

	i8 v7447 = (i8)(intptr_t)(f61_PopNode);
	i8 v7448;

	((void(*)(i8* /* node */))(intptr_t)v7447)(&v7448);

	i8 v7449 = (i8)(intptr_t)(ws+3632);
	*(i8*)(intptr_t)v7449 = v7448;

	i8 v7450 = (i8)(intptr_t)(ws+3632);
	i8 v7451 = *(i8*)(intptr_t)v7450;
	i8 v7452 = (i8)(intptr_t)(ws+3624);
	*(i8*)(intptr_t)v7452 = v7451;

	i8 v7453 = (i8)(intptr_t)(ws+3624);
	i8 v7454 = *(i8*)(intptr_t)v7453;
	i8 v7455 = (i8)+0;
	if (v7454==v7455) goto c02_0587; else goto c02_0586;

c02_0586:;

	i8 v7456 = (i8)(intptr_t)(ws+3624);
	i8 v7457 = *(i8*)(intptr_t)v7456;
	i8 v7458 = v7457+(+24);
	i8 v7459 = *(i8*)(intptr_t)v7458;
	i8 v7460 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7460)(v7459);

	i8 v7461 = (i8)(intptr_t)(ws+3624);
	i8 v7462 = *(i8*)(intptr_t)v7461;
	i8 v7463 = v7462+(+32);
	i8 v7464 = *(i8*)(intptr_t)v7463;
	i8 v7465 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7465)(v7464);

c02_0587:;

c02_0583:;

endsub:;
	*p7446 = *(i8*)(intptr_t)(ws+3624);
}
	void f60_PushNode(i8 /* node */);
	void f62_NextNode(i8* /* node */);
	void f165_FreeNode(i8 /* node */);

// Discard workspace at ws+3592 length ws+32
void f63_Discard(i8 p7466 /* node */) {
	*(i8*)(intptr_t)(ws+3592) = p7466; /* node */

	i8 v7467 = (i8)(intptr_t)(ws+224);
	i8 v7468 = *(i8*)(intptr_t)v7467;
	i8 v7469 = (i8)(intptr_t)(ws+3600);
	*(i8*)(intptr_t)v7469 = v7468;

	i8 v7470 = (i8)(intptr_t)(ws+3592);
	i8 v7471 = *(i8*)(intptr_t)v7470;
	i8 v7472 = (i8)(intptr_t)(f60_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7472)(v7471);

c02_0588:;

	i8 v7473 = (i8)(intptr_t)(ws+224);
	i8 v7474 = *(i8*)(intptr_t)v7473;
	i8 v7475 = (i8)(intptr_t)(ws+3600);
	i8 v7476 = *(i8*)(intptr_t)v7475;
	if (v7474==v7476) goto c02_058d; else goto c02_058c;

c02_058c:;

	i8 v7477 = (i8)(intptr_t)(f62_NextNode);
	i8 v7478;

	((void(*)(i8* /* node */))(intptr_t)v7477)(&v7478);

	i8 v7479 = (i8)(intptr_t)(ws+3608);
	*(i8*)(intptr_t)v7479 = v7478;

	i8 v7480 = (i8)(intptr_t)(ws+3608);
	i8 v7481 = *(i8*)(intptr_t)v7480;
	i8 v7482 = (i8)(intptr_t)(ws+3616);
	*(i8*)(intptr_t)v7482 = v7481;

	i8 v7483 = (i8)(intptr_t)(ws+3616);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	i8 v7485 = (i8)(intptr_t)(f165_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v7485)(v7484);

	goto c02_0588;

c02_058d:;

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_AllocLabel(i2* /* label */);
	void f236_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3400 length ws+20
void f284_BeginNormalLoop(i8* p7486 /* ll */) {

	i8 v7487 = (i8)+8;
	i8 v7488 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v7489;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7488)(&v7489, v7487);

	i8 v7490 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v7490 = v7489;

	i8 v7491 = (i8)(intptr_t)(ws+3408);
	i8 v7492 = *(i8*)(intptr_t)v7491;
	i8 v7493 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7493 = v7492;

	i8 v7494 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v7495;

	((void(*)(i2* /* label */))(intptr_t)v7494)(&v7495);

	i8 v7496 = (i8)(intptr_t)(ws+3416);
	*(i2*)(intptr_t)v7496 = v7495;

	i8 v7497 = (i8)(intptr_t)(ws+3416);
	i2 v7498 = *(i2*)(intptr_t)v7497;
	i8 v7499 = (i8)(intptr_t)(ws+3400);
	i8 v7500 = *(i8*)(intptr_t)v7499;
	*(i2*)(intptr_t)v7500 = v7498;

	i8 v7501 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v7502;

	((void(*)(i2* /* label */))(intptr_t)v7501)(&v7502);

	i8 v7503 = (i8)(intptr_t)(ws+3418);
	*(i2*)(intptr_t)v7503 = v7502;

	i8 v7504 = (i8)(intptr_t)(ws+3418);
	i2 v7505 = *(i2*)(intptr_t)v7504;
	i8 v7506 = (i8)(intptr_t)(ws+3400);
	i8 v7507 = *(i8*)(intptr_t)v7506;
	i8 v7508 = v7507+(+2);
	*(i2*)(intptr_t)v7508 = v7505;

	i8 v7509 = (i8)(intptr_t)(ws+52);
	i2 v7510 = *(i2*)(intptr_t)v7509;
	i8 v7511 = (i8)(intptr_t)(ws+3400);
	i8 v7512 = *(i8*)(intptr_t)v7511;
	i8 v7513 = v7512+(+4);
	*(i2*)(intptr_t)v7513 = v7510;

	i8 v7514 = (i8)(intptr_t)(ws+54);
	i2 v7515 = *(i2*)(intptr_t)v7514;
	i8 v7516 = (i8)(intptr_t)(ws+3400);
	i8 v7517 = *(i8*)(intptr_t)v7516;
	i8 v7518 = v7517+(+6);
	*(i2*)(intptr_t)v7518 = v7515;

	i8 v7519 = (i8)(intptr_t)(ws+3400);
	i8 v7520 = *(i8*)(intptr_t)v7519;
	i8 v7521 = v7520+(+2);
	i2 v7522 = *(i2*)(intptr_t)v7521;
	i8 v7523 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7523 = v7522;

	i8 v7524 = (i8)(intptr_t)(ws+3400);
	i8 v7525 = *(i8*)(intptr_t)v7524;
	i2 v7526 = *(i2*)(intptr_t)v7525;
	i8 v7527 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7527 = v7526;

endsub:;
	*p7486 = *(i8*)(intptr_t)(ws+3400);
}
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3384 length ws+24
void f285_TerminateNormalLoop(i8 p7528 /* ll */) {
	*(i8*)(intptr_t)(ws+3384) = p7528; /* ll */

	i8 v7529 = (i8)(intptr_t)(ws+54);
	i2 v7530 = *(i2*)(intptr_t)v7529;
	i8 v7531 = (i8)(intptr_t)(f132_MidJump);
	i8 v7532;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7531)(&v7532, v7530);

	i8 v7533 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v7533 = v7532;

	i8 v7534 = (i8)(intptr_t)(ws+3392);
	i8 v7535 = *(i8*)(intptr_t)v7534;
	i8 v7536 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7536)(v7535);

	i8 v7537 = (i8)(intptr_t)(ws+52);
	i2 v7538 = *(i2*)(intptr_t)v7537;
	i8 v7539 = (i8)(intptr_t)(f120_MidLabel);
	i8 v7540;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7539)(&v7540, v7538);

	i8 v7541 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7541 = v7540;

	i8 v7542 = (i8)(intptr_t)(ws+3400);
	i8 v7543 = *(i8*)(intptr_t)v7542;
	i8 v7544 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7544)(v7543);

	i8 v7545 = (i8)(intptr_t)(ws+3384);
	i8 v7546 = *(i8*)(intptr_t)v7545;
	i8 v7547 = v7546+(+4);
	i2 v7548 = *(i2*)(intptr_t)v7547;
	i8 v7549 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7549 = v7548;

	i8 v7550 = (i8)(intptr_t)(ws+3384);
	i8 v7551 = *(i8*)(intptr_t)v7550;
	i8 v7552 = v7551+(+6);
	i2 v7553 = *(i2*)(intptr_t)v7552;
	i8 v7554 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v7554 = v7553;

	i8 v7555 = (i8)(intptr_t)(ws+3384);
	i8 v7556 = *(i8*)(intptr_t)v7555;
	i8 v7557 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7557)(v7556);

endsub:;
}

// Negate workspace at ws+3384 length ws+8
void f286_Negate(i8 p7558 /* node */) {
	*(i8*)(intptr_t)(ws+3384) = p7558; /* node */

	i8 v7559 = (i8)(intptr_t)(ws+3384);
	i8 v7560 = *(i8*)(intptr_t)v7559;
	i8 v7561 = v7560+(+6);
	i1 v7562 = *(i1*)(intptr_t)v7561;
	i1 v7563 = v7562^(+1);
	i8 v7564 = (i8)(intptr_t)(ws+3384);
	i8 v7565 = *(i8*)(intptr_t)v7564;
	i8 v7566 = v7565+(+6);
	*(i1*)(intptr_t)v7566 = v7563;

endsub:;
}
	void f274_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f236_AllocLabel(i2* /* label */);
	void f236_AllocLabel(i2* /* label */);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f128_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3392 length ws+56
void f287_ConditionalEq(i8* p7567 /* result */, i1 p7568 /* negated */, i8 p7569 /* rhs */, i8 p7570 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p7570; /* lhs */
	*(i8*)(intptr_t)(ws+3400) = p7569; /* rhs */
	*(i1*)(intptr_t)(ws+3408) = p7568; /* negated */

	i8 v7571 = (i8)(intptr_t)(ws+3392);
	i8 v7572 = *(i8*)(intptr_t)v7571;
	i8 v7573 = (i8)(intptr_t)(ws+3400);
	i8 v7574 = *(i8*)(intptr_t)v7573;
	i8 v7575 = (i8)(intptr_t)(f274_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7575)(v7574, v7572);

	i8 v7576 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v7577;

	((void(*)(i2* /* label */))(intptr_t)v7576)(&v7577);

	i8 v7578 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7578 = v7577;

	i8 v7579 = (i8)(intptr_t)(ws+3424);
	i2 v7580 = *(i2*)(intptr_t)v7579;
	i8 v7581 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7581 = v7580;

	i8 v7582 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v7583;

	((void(*)(i2* /* label */))(intptr_t)v7582)(&v7583);

	i8 v7584 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7584 = v7583;

	i8 v7585 = (i8)(intptr_t)(ws+3428);
	i2 v7586 = *(i2*)(intptr_t)v7585;
	i8 v7587 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7587 = v7586;

	i8 v7588 = (i8)(intptr_t)(ws+3392);
	i8 v7589 = *(i8*)(intptr_t)v7588;
	i8 v7590 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7591;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7590)(&v7591, v7589);

	i8 v7592 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7592 = v7591;

	i8 v7593 = (i8)(intptr_t)(ws+3432);
	i1 v7594 = *(i1*)(intptr_t)v7593;
	i8 v7595 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7595 = v7594;

	i8 v7596 = (i8)(intptr_t)(ws+3433);
	i1 v7597 = *(i1*)(intptr_t)v7596;
	i8 v7598 = (i8)(intptr_t)(ws+3392);
	i8 v7599 = *(i8*)(intptr_t)v7598;
	i8 v7600 = (i8)(intptr_t)(ws+3400);
	i8 v7601 = *(i8*)(intptr_t)v7600;
	i8 v7602 = (i8)(intptr_t)(ws+3426);
	i2 v7603 = *(i2*)(intptr_t)v7602;
	i8 v7604 = (i8)(intptr_t)(ws+3430);
	i2 v7605 = *(i2*)(intptr_t)v7604;
	i2 v7606 = (i2)+0;
	i8 v7607 = (i8)(intptr_t)(ws+3408);
	i1 v7608 = *(i1*)(intptr_t)v7607;
	i8 v7609 = (i8)(intptr_t)(f128_MidBeq);
	i8 v7610;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7609)(&v7610, v7608, v7606, v7605, v7603, v7601, v7599, v7597);

	i8 v7611 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7611 = v7610;

	i8 v7612 = (i8)(intptr_t)(ws+3440);
	i8 v7613 = *(i8*)(intptr_t)v7612;
	i8 v7614 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7614 = v7613;

endsub:;
	*p7567 = *(i8*)(intptr_t)(ws+3416);
}
	void f274_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f236_AllocLabel(i2* /* label */);
	void f236_AllocLabel(i2* /* label */);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f229_IsSNum(i1* /* result */, i8 /* type */);
	void f107_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f141_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3392 length ws+64
void f288_ConditionalLt(i8* p7615 /* result */, i1 p7616 /* negated */, i8 p7617 /* rhs */, i8 p7618 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p7618; /* lhs */
	*(i8*)(intptr_t)(ws+3400) = p7617; /* rhs */
	*(i1*)(intptr_t)(ws+3408) = p7616; /* negated */

	i8 v7619 = (i8)(intptr_t)(ws+3392);
	i8 v7620 = *(i8*)(intptr_t)v7619;
	i8 v7621 = (i8)(intptr_t)(ws+3400);
	i8 v7622 = *(i8*)(intptr_t)v7621;
	i8 v7623 = (i8)(intptr_t)(f274_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v7623)(v7622, v7620);

	i8 v7624 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v7625;

	((void(*)(i2* /* label */))(intptr_t)v7624)(&v7625);

	i8 v7626 = (i8)(intptr_t)(ws+3424);
	*(i2*)(intptr_t)v7626 = v7625;

	i8 v7627 = (i8)(intptr_t)(ws+3424);
	i2 v7628 = *(i2*)(intptr_t)v7627;
	i8 v7629 = (i8)(intptr_t)(ws+3426);
	*(i2*)(intptr_t)v7629 = v7628;

	i8 v7630 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v7631;

	((void(*)(i2* /* label */))(intptr_t)v7630)(&v7631);

	i8 v7632 = (i8)(intptr_t)(ws+3428);
	*(i2*)(intptr_t)v7632 = v7631;

	i8 v7633 = (i8)(intptr_t)(ws+3428);
	i2 v7634 = *(i2*)(intptr_t)v7633;
	i8 v7635 = (i8)(intptr_t)(ws+3430);
	*(i2*)(intptr_t)v7635 = v7634;

	i8 v7636 = (i8)(intptr_t)(ws+3392);
	i8 v7637 = *(i8*)(intptr_t)v7636;
	i8 v7638 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v7639;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7638)(&v7639, v7637);

	i8 v7640 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v7640 = v7639;

	i8 v7641 = (i8)(intptr_t)(ws+3432);
	i1 v7642 = *(i1*)(intptr_t)v7641;
	i8 v7643 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v7643 = v7642;

	i8 v7644 = (i8)(intptr_t)(ws+3392);
	i8 v7645 = *(i8*)(intptr_t)v7644;
	i8 v7646 = v7645+(+16);
	i8 v7647 = *(i8*)(intptr_t)v7646;
	i8 v7648 = (i8)(intptr_t)(f229_IsSNum);
	i1 v7649;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7648)(&v7649, v7647);

	i8 v7650 = (i8)(intptr_t)(ws+3434);
	*(i1*)(intptr_t)v7650 = v7649;

	i8 v7651 = (i8)(intptr_t)(ws+3434);
	i1 v7652 = *(i1*)(intptr_t)v7651;
	i1 v7653 = (i1)+0;
	if (v7652==v7653) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v7654 = (i8)(intptr_t)(ws+3433);
	i1 v7655 = *(i1*)(intptr_t)v7654;
	i8 v7656 = (i8)(intptr_t)(ws+3392);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	i8 v7658 = (i8)(intptr_t)(ws+3400);
	i8 v7659 = *(i8*)(intptr_t)v7658;
	i8 v7660 = (i8)(intptr_t)(ws+3426);
	i2 v7661 = *(i2*)(intptr_t)v7660;
	i8 v7662 = (i8)(intptr_t)(ws+3430);
	i2 v7663 = *(i2*)(intptr_t)v7662;
	i2 v7664 = (i2)+0;
	i8 v7665 = (i8)(intptr_t)(ws+3408);
	i1 v7666 = *(i1*)(intptr_t)v7665;
	i8 v7667 = (i8)(intptr_t)(f107_MidBlts);
	i8 v7668;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7667)(&v7668, v7666, v7664, v7663, v7661, v7659, v7657, v7655);

	i8 v7669 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v7669 = v7668;

	i8 v7670 = (i8)(intptr_t)(ws+3440);
	i8 v7671 = *(i8*)(intptr_t)v7670;
	i8 v7672 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7672 = v7671;

	goto c02_058e;

c02_0592:;

	i8 v7673 = (i8)(intptr_t)(ws+3433);
	i1 v7674 = *(i1*)(intptr_t)v7673;
	i8 v7675 = (i8)(intptr_t)(ws+3392);
	i8 v7676 = *(i8*)(intptr_t)v7675;
	i8 v7677 = (i8)(intptr_t)(ws+3400);
	i8 v7678 = *(i8*)(intptr_t)v7677;
	i8 v7679 = (i8)(intptr_t)(ws+3426);
	i2 v7680 = *(i2*)(intptr_t)v7679;
	i8 v7681 = (i8)(intptr_t)(ws+3430);
	i2 v7682 = *(i2*)(intptr_t)v7681;
	i2 v7683 = (i2)+0;
	i8 v7684 = (i8)(intptr_t)(ws+3408);
	i1 v7685 = *(i1*)(intptr_t)v7684;
	i8 v7686 = (i8)(intptr_t)(f141_MidBltu);
	i8 v7687;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7686)(&v7687, v7685, v7683, v7682, v7680, v7678, v7676, v7674);

	i8 v7688 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7688 = v7687;

	i8 v7689 = (i8)(intptr_t)(ws+3448);
	i8 v7690 = *(i8*)(intptr_t)v7689;
	i8 v7691 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v7691 = v7690;

c02_058e:;

endsub:;
	*p7615 = *(i8*)(intptr_t)(ws+3416);
}
const i1 c02_s0114[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3408 length ws+0
void f289_parser_i_bad_next_prev(void) {

	i8 v7692 = (i8)(intptr_t)c02_s0114;
	i8 v7693 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7693)(v7692);

endsub:;
}
const i1 c02_s0115[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3448 length ws+0
void f290_parser_i_constant_error(void) {

	i8 v7694 = (i8)(intptr_t)c02_s0115;
	i8 v7695 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7695)(v7694);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0116[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0117[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
const i1 c02_s0118[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
	void f75_EndError(void);

// i_check_sub_call_args workspace at ws+3488 length ws+8
void f291_i_check_sub_call_args(void) {

	i8 v7696 = (i8)(intptr_t)(ws+80);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	i8 v7698 = v7697+(+8);
	i8 v7699 = *(i8*)(intptr_t)v7698;
	i8 v7700 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7700 = v7699;

	i8 v7701 = (i8)(intptr_t)(ws+80);
	i8 v7702 = *(i8*)(intptr_t)v7701;
	i8 v7703 = v7702+(+40);
	i1 v7704 = *(i1*)(intptr_t)v7703;
	i8 v7705 = (i8)(intptr_t)(ws+3488);
	i8 v7706 = *(i8*)(intptr_t)v7705;
	i8 v7707 = v7706+(+80);
	i1 v7708 = *(i1*)(intptr_t)v7707;
	if (v7704==v7708) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v7709 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7709)();

	i8 v7710 = (i8)(intptr_t)c02_s0116;
	i8 v7711 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7711)(v7710);

	i8 v7712 = (i8)(intptr_t)(ws+3488);
	i8 v7713 = *(i8*)(intptr_t)v7712;
	i8 v7714 = *(i8*)(intptr_t)v7713;
	i8 v7715 = v7714+(+8);
	i8 v7716 = *(i8*)(intptr_t)v7715;
	i8 v7717 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7717)(v7716);

	i8 v7718 = (i8)(intptr_t)c02_s0117;
	i8 v7719 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7719)(v7718);

	i8 v7720 = (i8)(intptr_t)(ws+3488);
	i8 v7721 = *(i8*)(intptr_t)v7720;
	i8 v7722 = v7721+(+80);
	i1 v7723 = *(i1*)(intptr_t)v7722;
	i8 v7724 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7724)(v7723);

	i8 v7725 = (i8)(intptr_t)c02_s0118;
	i8 v7726 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7726)(v7725);

	i8 v7727 = (i8)(intptr_t)(ws+80);
	i8 v7728 = *(i8*)(intptr_t)v7727;
	i8 v7729 = v7728+(+40);
	i1 v7730 = *(i1*)(intptr_t)v7729;
	i8 v7731 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7731)(v7730);

	i8 v7732 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7732)();

c02_0597:;

c02_0593:;

endsub:;
}
	void f201_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f34_Free(i8 /* block */);

// i_end_call workspace at ws+3488 length ws+8
void f292_i_end_call(void) {

	i8 v7733 = (i8)(intptr_t)(ws+40);
	i8 v7734 = *(i8*)(intptr_t)v7733;
	i8 v7735 = (i8)(intptr_t)(ws+80);
	i8 v7736 = *(i8*)(intptr_t)v7735;
	i8 v7737 = v7736+(+8);
	i8 v7738 = *(i8*)(intptr_t)v7737;
	i8 v7739 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v7739)(v7738, v7734);

	i8 v7740 = (i8)(intptr_t)(ws+80);
	i8 v7741 = *(i8*)(intptr_t)v7740;
	i8 v7742 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v7742 = v7741;

	i8 v7743 = (i8)(intptr_t)(ws+3488);
	i8 v7744 = *(i8*)(intptr_t)v7743;
	i8 v7745 = v7744+(+16);
	i8 v7746 = *(i8*)(intptr_t)v7745;
	i8 v7747 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v7747 = v7746;

	i8 v7748 = (i8)(intptr_t)(ws+3488);
	i8 v7749 = *(i8*)(intptr_t)v7748;
	i8 v7750 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7750)(v7749);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0119[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// SymbolRedeclarationError workspace at ws+3392 length ws+0
void f293_SymbolRedeclarationError(void) {

	i8 v7751 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7751)();

	i8 v7752 = (i8)(intptr_t)c02_s0119;
	i8 v7753 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7753)(v7752);

	i8 v7754 = (i8)(intptr_t)(ws+72);
	i8 v7755 = *(i8*)(intptr_t)v7754;
	i8 v7756 = v7755+(+32);
	i8 v7757 = *(i8*)(intptr_t)v7756;
	i8 v7758 = v7757+(+8);
	i8 v7759 = *(i8*)(intptr_t)v7758;
	i8 v7760 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7760)(v7759);

	i8 v7761 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7761)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s011a[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// WrongNumberOfElementsError workspace at ws+3464 length ws+0
void f294_WrongNumberOfElementsError(void) {

	i8 v7762 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7762)();

	i8 v7763 = (i8)(intptr_t)c02_s011a;
	i8 v7764 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7764)(v7763);

	i8 v7765 = (i8)(intptr_t)(ws+72);
	i8 v7766 = *(i8*)(intptr_t)v7765;
	i8 v7767 = v7766+(+32);
	i8 v7768 = *(i8*)(intptr_t)v7767;
	i8 v7769 = v7768+(+8);
	i8 v7770 = *(i8*)(intptr_t)v7769;
	i8 v7771 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7771)(v7770);

	i8 v7772 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7772)();

endsub:;
}
	void f226_IsArray(i1* /* result */, i8 /* type */);
	void f239_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f241_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f294_WrongNumberOfElementsError(void);
	void f294_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3392 length ws+16
void f295_CheckEndOfInitialiser(void) {

	i8 v7773 = (i8)(intptr_t)(ws+72);
	i8 v7774 = *(i8*)(intptr_t)v7773;
	i8 v7775 = (i8)(intptr_t)(f226_IsArray);
	i1 v7776;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7775)(&v7776, v7774);

	i8 v7777 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v7777 = v7776;

	i8 v7778 = (i8)(intptr_t)(ws+3392);
	i1 v7779 = *(i1*)(intptr_t)v7778;
	i1 v7780 = (i1)+0;
	if (v7779==v7780) goto c02_059c; else goto c02_059b;

c02_059b:;

	i8 v7781 = (i8)(intptr_t)(ws+72);
	i8 v7782 = *(i8*)(intptr_t)v7781;
	i8 v7783 = *(i8*)(intptr_t)v7782;
	i8 v7784 = v7783+(+50);
	i2 v7785 = *(i2*)(intptr_t)v7784;
	i8 v7786 = (i8)(intptr_t)(ws+3394);
	*(i2*)(intptr_t)v7786 = v7785;

	i8 v7787 = (i8)(intptr_t)(ws+1560);
	i2 v7788 = *(i2*)(intptr_t)v7787;
	i8 v7789 = (i8)(intptr_t)(ws+72);
	i8 v7790 = *(i8*)(intptr_t)v7789;
	i8 v7791 = *(i8*)(intptr_t)v7790;
	i8 v7792 = v7791+(+53);
	i1 v7793 = *(i1*)(intptr_t)v7792;
	i8 v7794 = (i8)(intptr_t)(f239_ArchAlignUp);
	i2 v7795;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v7794)(&v7795, v7793, v7788);

	i8 v7796 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v7796 = v7795;

	i8 v7797 = (i8)(intptr_t)(ws+3396);
	i2 v7798 = *(i2*)(intptr_t)v7797;
	i8 v7799 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7799 = v7798;

	i8 v7800 = (i8)(intptr_t)(ws+72);
	i8 v7801 = *(i8*)(intptr_t)v7800;
	i8 v7802 = v7801+(+48);
	i2 v7803 = *(i2*)(intptr_t)v7802;
	i2 v7804 = (i2)+0;
	if (v7803==v7804) goto c02_05a0; else goto c02_05a1;

c02_05a0:;

	i8 v7805 = (i8)(intptr_t)(ws+1560);
	i2 v7806 = *(i2*)(intptr_t)v7805;
	i8 v7807 = (i8)(intptr_t)(ws+72);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = v7808+(+48);
	*(i2*)(intptr_t)v7809 = v7806;

	i8 v7810 = (i8)(intptr_t)(ws+1560);
	i2 v7811 = *(i2*)(intptr_t)v7810;
	i8 v7812 = (i8)(intptr_t)(ws+3394);
	i2 v7813 = *(i2*)(intptr_t)v7812;
	i2 v7814 = v7811/v7813;
	i8 v7815 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v7815 = v7814;

	i8 v7816 = (i8)(intptr_t)(ws+3398);
	i2 v7817 = *(i2*)(intptr_t)v7816;
	i8 v7818 = (i8)(intptr_t)(ws+72);
	i8 v7819 = *(i8*)(intptr_t)v7818;
	i8 v7820 = v7819+(+8);
	*(i2*)(intptr_t)v7820 = v7817;

	i4 v7821 = (i4)+0;
	i8 v7822 = (i8)(intptr_t)(ws+3398);
	i2 v7823 = *(i2*)(intptr_t)v7822;
	i2 v7824 = v7823+(-1);
	i4 v7825 = v7824;
	i8 v7826 = (i8)(intptr_t)(f241_ArchGuessIntType);
	i8 v7827;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v7826)(&v7827, v7825, v7821);

	i8 v7828 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v7828 = v7827;

	i8 v7829 = (i8)(intptr_t)(ws+3400);
	i8 v7830 = *(i8*)(intptr_t)v7829;
	i8 v7831 = (i8)(intptr_t)(ws+72);
	i8 v7832 = *(i8*)(intptr_t)v7831;
	i8 v7833 = v7832+(+16);
	*(i8*)(intptr_t)v7833 = v7830;

c02_05a1:;

c02_059d:;

	i8 v7834 = (i8)(intptr_t)(ws+1560);
	i2 v7835 = *(i2*)(intptr_t)v7834;
	i8 v7836 = (i8)(intptr_t)(ws+72);
	i8 v7837 = *(i8*)(intptr_t)v7836;
	i8 v7838 = v7837+(+48);
	i2 v7839 = *(i2*)(intptr_t)v7838;
	if (v7835==v7839) goto c02_05a6; else goto c02_05a5;

c02_05a5:;

	i8 v7840 = (i8)(intptr_t)(f294_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7840)();

c02_05a6:;

c02_05a2:;

	goto c02_0598;

c02_059c:;

	i8 v7841 = (i8)(intptr_t)(ws+1552);
	i8 v7842 = *(i8*)(intptr_t)v7841;
	i8 v7843 = (i8)+0;
	if (v7842==v7843) goto c02_05ab; else goto c02_05aa;

c02_05aa:;

	i8 v7844 = (i8)(intptr_t)(f294_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7844)();

c02_05ab:;

c02_05a7:;

c02_0598:;

endsub:;
}
	void f226_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3464 length ws+17
void f296_GetInitedMember(i8* p7845 /* member */, i8* p7846 /* type */) {

	i8 v7847 = (i8)+0;
	i8 v7848 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7848 = v7847;

	i8 v7849 = (i8)(intptr_t)(ws+72);
	i8 v7850 = *(i8*)(intptr_t)v7849;
	i8 v7851 = (i8)(intptr_t)(f226_IsArray);
	i1 v7852;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7851)(&v7852, v7850);

	i8 v7853 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v7853 = v7852;

	i8 v7854 = (i8)(intptr_t)(ws+3480);
	i1 v7855 = *(i1*)(intptr_t)v7854;
	i1 v7856 = (i1)+0;
	if (v7855==v7856) goto c02_05b0; else goto c02_05af;

c02_05af:;

	i8 v7857 = (i8)(intptr_t)(ws+72);
	i8 v7858 = *(i8*)(intptr_t)v7857;
	i8 v7859 = *(i8*)(intptr_t)v7858;
	i8 v7860 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7860 = v7859;

	goto c02_05ac;

c02_05b0:;

	i8 v7861 = (i8)(intptr_t)(ws+1552);
	i8 v7862 = *(i8*)(intptr_t)v7861;
	i8 v7863 = (i8)+0;
	if (v7862==v7863) goto c02_05b4; else goto c02_05b5;

c02_05b4:;

	i8 v7864 = (i8)+0;
	i8 v7865 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7865 = v7864;

	goto endsub;

c02_05b5:;

c02_05b1:;

	i8 v7866 = (i8)(intptr_t)(ws+1552);
	i8 v7867 = *(i8*)(intptr_t)v7866;
	i8 v7868 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v7868 = v7867;

	i8 v7869 = (i8)(intptr_t)(ws+1552);
	i8 v7870 = *(i8*)(intptr_t)v7869;
	i8 v7871 = *(i8*)(intptr_t)v7870;
	i8 v7872 = *(i8*)(intptr_t)v7871;
	i8 v7873 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7873 = v7872;

	i8 v7874 = (i8)(intptr_t)(ws+1552);
	i8 v7875 = *(i8*)(intptr_t)v7874;
	i8 v7876 = v7875+(+24);
	i8 v7877 = *(i8*)(intptr_t)v7876;
	i8 v7878 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v7878 = v7877;

c02_05ac:;

endsub:;
	*p7846 = *(i8*)(intptr_t)(ws+3472);
	*p7845 = *(i8*)(intptr_t)(ws+3464);
}
	void f239_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f146_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f257_Generate(i8 /* statement */);

// AlignTo workspace at ws+3464 length ws+16
void f297_AlignTo(i1 p7879 /* alignment */) {
	*(i1*)(intptr_t)(ws+3464) = p7879; /* alignment */

	i8 v7880 = (i8)(intptr_t)(ws+1562);
	i2 v7881 = *(i2*)(intptr_t)v7880;
	i8 v7882 = (i8)(intptr_t)(ws+3464);
	i1 v7883 = *(i1*)(intptr_t)v7882;
	i8 v7884 = (i8)(intptr_t)(f239_ArchAlignUp);
	i2 v7885;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v7884)(&v7885, v7883, v7881);

	i8 v7886 = (i8)(intptr_t)(ws+3466);
	*(i2*)(intptr_t)v7886 = v7885;

	i8 v7887 = (i8)(intptr_t)(ws+3466);
	i2 v7888 = *(i2*)(intptr_t)v7887;
	i8 v7889 = (i8)(intptr_t)(ws+3468);
	*(i2*)(intptr_t)v7889 = v7888;

c02_05b6:;

	i8 v7890 = (i8)(intptr_t)(ws+1562);
	i2 v7891 = *(i2*)(intptr_t)v7890;
	i8 v7892 = (i8)(intptr_t)(ws+3468);
	i2 v7893 = *(i2*)(intptr_t)v7892;
	if (v7891==v7893) goto c02_05bb; else goto c02_05ba;

c02_05ba:;

	i1 v7894 = (i1)+1;
	i4 v7895 = (i4)+0;
	i8 v7896 = (i8)(intptr_t)(f146_MidInit);
	i8 v7897;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v7896)(&v7897, v7895, v7894);

	i8 v7898 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v7898 = v7897;

	i8 v7899 = (i8)(intptr_t)(ws+3472);
	i8 v7900 = *(i8*)(intptr_t)v7899;
	i8 v7901 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7901)(v7900);

	i8 v7902 = (i8)(intptr_t)(ws+1560);
	i2 v7903 = *(i2*)(intptr_t)v7902;
	i2 v7904 = v7903+(+1);
	i8 v7905 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v7905 = v7904;

	i8 v7906 = (i8)(intptr_t)(ws+1562);
	i2 v7907 = *(i2*)(intptr_t)v7906;
	i2 v7908 = v7907+(+1);
	i8 v7909 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v7909 = v7908;

	goto c02_05b6;

c02_05bb:;

endsub:;
}
const i1 c02_s011b[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f76_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3464 length ws+8
void f298_CheckForOverlaps(i8 p7910 /* member */) {
	*(i8*)(intptr_t)(ws+3464) = p7910; /* member */

	i8 v7911 = (i8)(intptr_t)(ws+3464);
	i8 v7912 = *(i8*)(intptr_t)v7911;
	i8 v7913 = (i8)+0;
	if (v7912==v7913) goto c02_05bf; else goto c02_05c0;

c02_05bf:;

	goto endsub;

c02_05c0:;

c02_05bc:;

	i8 v7914 = (i8)(intptr_t)(ws+3464);
	i8 v7915 = *(i8*)(intptr_t)v7914;
	i8 v7916 = *(i8*)(intptr_t)v7915;
	i8 v7917 = v7916+(+24);
	i2 v7918 = *(i2*)(intptr_t)v7917;
	i8 v7919 = (i8)(intptr_t)(ws+1560);
	i2 v7920 = *(i2*)(intptr_t)v7919;
	if (v7918<v7920) goto c02_05c4; else goto c02_05c5;

c02_05c4:;

	i8 v7921 = (i8)(intptr_t)c02_s011b;
	i8 v7922 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7922)(v7921);

c02_05c5:;

c02_05c1:;

endsub:;
}
	void f296_GetInitedMember(i8* /* member */, i8* /* type */);
	void f294_WrongNumberOfElementsError(void);
	void f297_AlignTo(i1 /* alignment */);
	void f298_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3448 length ws+16
void f299_GetInitedMemberChecked(i8* p7923 /* member */, i8* p7924 /* type */) {

	i8 v7925 = (i8)(intptr_t)(f296_GetInitedMember);
	i8 v7926;
	i8 v7927;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v7925)(&v7926, &v7927);

	i8 v7928 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v7928 = v7927;

	i8 v7929 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v7929 = v7926;

	i8 v7930 = (i8)(intptr_t)(ws+3456);
	i8 v7931 = *(i8*)(intptr_t)v7930;
	i8 v7932 = (i8)+0;
	if (v7931==v7932) goto c02_05c9; else goto c02_05ca;

c02_05c9:;

	i8 v7933 = (i8)(intptr_t)(f294_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v7933)();

c02_05ca:;

c02_05c6:;

	i8 v7934 = (i8)(intptr_t)(ws+3456);
	i8 v7935 = *(i8*)(intptr_t)v7934;
	i8 v7936 = v7935+(+53);
	i1 v7937 = *(i1*)(intptr_t)v7936;
	i8 v7938 = (i8)(intptr_t)(f297_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v7938)(v7937);

	i8 v7939 = (i8)(intptr_t)(ws+3448);
	i8 v7940 = *(i8*)(intptr_t)v7939;
	i8 v7941 = (i8)(intptr_t)(f298_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v7941)(v7940);

endsub:;
	*p7924 = *(i8*)(intptr_t)(ws+3456);
	*p7923 = *(i8*)(intptr_t)(ws+3448);
}
static data f3___main_s05cb[] = {




	{ .i1 = { 0x12,0x02,0xa9,0x01,0xfc,0x01,0xd0,0x00}},




	{ .i1 = { 0x5e,0x00,0xc4,0x01,0x08,0x00,0x60,0x00}},




	{ .i1 = { 0x68,0x00,0x47,0x01,0xba,0x00,0xb9,0x00}},




	{ .i1 = { 0x6e,0x00,0x3d,0x01,0x37,0x00,0x27,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x3b,0x02,0x4c,0x00}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb0,0x01,0xd9,0x00}},




	{ .i1 = { 0x69,0x00,0x56,0x00,0xa7,0x00,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x3f,0x01,0xbb,0x00,0x25,0x02}},




	{ .i1 = { 0x2d,0x00,0x7c,0x01,0x57,0x01,0x49,0x00}},




	{ .i1 = { 0x51,0x00,0x48,0x01,0xd9,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x71,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0x04,0x02,0xd9,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x51,0x02,0xa8,0x00,0x7d,0x01}},




	{ .i1 = { 0x3b,0x02,0x34,0x00,0x36,0x00,0x2d,0x00}},




	{ .i1 = { 0xd7,0x00,0x7c,0x01,0xab,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0x97,0x01,0xcf,0x00}},




	{ .i1 = { 0x1f,0x00,0xaa,0x01,0xa9,0x01,0xd8,0x00}},




	{ .i1 = { 0xd0,0x00,0x4c,0x02,0x40,0x00,0x58,0x00}},




	{ .i1 = { 0x60,0x00,0x4b,0x00,0x31,0x00,0xb3,0x00}},




	{ .i1 = { 0xa2,0x01,0x6e,0x00,0x3d,0x01,0x37,0x00}},




	{ .i1 = { 0x4f,0x00,0x11,0x00,0x28,0x00,0xa9,0x00}},




	{ .i1 = { 0xa8,0x00,0x52,0x00,0xdc,0x00,0xb0,0x01}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0x56,0x00,0xb8,0x00}},




	{ .i1 = { 0x35,0x00,0x62,0x00,0x3f,0x01,0x74,0x00}},




	{ .i1 = { 0x72,0x00,0x4d,0x00,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0x93,0x00,0x51,0x00,0xa4,0x00,0x7c,0x00}},




	{ .i1 = { 0xc5,0x00,0x50,0x00,0x71,0x01,0xb4,0x00}},




	{ .i1 = { 0xbf,0x00,0x53,0x00,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xfc,0x01,0xfc,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0x4d,0x00,0xa6,0x01,0xdb,0x00,0x72,0x00}},




	{ .i1 = { 0xfc,0x01,0x7d,0x01,0x61,0x00,0xdd,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x7b,0x01}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x0e,0x00,0xa9,0x01}},




	{ .i1 = { 0xd8,0x00,0xd0,0x00,0xdb,0x00,0xac,0x00}},




	{ .i1 = { 0xfc,0x01,0x60,0x00,0x61,0x00,0xcb,0x00}},




	{ .i1 = { 0xd2,0x00,0x76,0x01,0x6e,0x00,0x3d,0x01}},




	{ .i1 = { 0x37,0x00,0xbe,0x00,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0x4e,0x02,0x0b,0x00,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0xb0,0x01,0x18,0x00,0x04,0x02,0x56,0x00}},




	{ .i1 = { 0x8d,0x01,0x35,0x00,0x62,0x00,0x3f,0x01}},




	{ .i1 = { 0x84,0x00,0x72,0x00,0x96,0x00,0x7c,0x01}},




	{ .i1 = { 0x57,0x01,0x93,0x00,0x51,0x00,0xce,0x00}},




	{ .i1 = { 0x44,0x00,0xc5,0x00,0x50,0x00,0x71,0x01}},




	{ .i1 = { 0xb4,0x00,0xbf,0x00,0x53,0x00,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xfc,0x01,0xfc,0x01,0x61,0x00}},




	{ .i1 = { 0x61,0x00,0x04,0x02,0x9c,0x00,0x15,0x02}},




	{ .i1 = { 0x72,0x00,0xb1,0x00,0x40,0x00,0x58,0x00}},




	{ .i1 = { 0xdf,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xb8,0x00,0xcf,0x00,0x1f,0x00,0x12,0x00}},




	{ .i1 = { 0xa9,0x01,0xd8,0x00,0xd0,0x00,0xdb,0x00}},




	{ .i1 = { 0xb7,0x00,0xfc,0x01,0x60,0x00,0x61,0x00}},




	{ .i1 = { 0x4d,0x01,0xd3,0x00,0xae,0x00,0x6e,0x00}},




	{ .i1 = { 0x3d,0x01,0x37,0x00,0x4a,0x00,0x11,0x00}},




	{ .i1 = { 0x28,0x00,0x2c,0x02,0x99,0x00,0x52,0x00}},




	{ .i1 = { 0xdc,0x00,0xb0,0x01,0xaf,0x00,0x04,0x02}},




	{ .i1 = { 0x56,0x00,0xbe,0x00,0x35,0x00,0x62,0x00}},




	{ .i1 = { 0x3f,0x01,0x7c,0x00,0x73,0x00,0x7c,0x01}},




	{ .i1 = { 0x7c,0x01,0x57,0x01,0xb2,0x00,0x51,0x00}},




	{ .i1 = { 0x59,0x00,0x04,0x02,0xc5,0x00,0x50,0x00}},




	{ .i1 = { 0x71,0x01,0xb4,0x00,0xbf,0x00,0x53,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0x16,0x00,0x14,0x00}},




	{ .i1 = { 0x45,0x00,0x71,0x00,0xc9,0x00,0x19,0x02}},




	{ .i1 = { 0x18,0x00,0x90,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x9f,0x01,0xcf,0x00,0x1f,0x00}},




	{ .i1 = { 0x3c,0x02,0xa9,0x01,0xd8,0x00,0xd0,0x00}},




	{ .i1 = { 0xdb,0x00,0x9b,0x00,0xfc,0x01,0x60,0x00}},




	{ .i1 = { 0x61,0x00,0x94,0x00,0x94,0x00,0x0b,0x00}},




	{ .i1 = { 0x6e,0x00,0x3d,0x01,0x37,0x00,0x92,0x01}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x08,0x02,0x0d,0x02}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xb0,0x01,0x7c,0x01}},




	{ .i1 = { 0x04,0x02,0x56,0x00,0x92,0x01,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x3f,0x01,0x7c,0x00,0x72,0x00}},




	{ .i1 = { 0x20,0x02,0x7c,0x01,0x57,0x01,0xd1,0x00}},




	{ .i1 = { 0x51,0x00,0x85,0x00,0x7e,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x71,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x61,0x00,0xa6,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0x64,0x00,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xbe,0x00,0xcf,0x00}},




	{ .i1 = { 0x1f,0x00,0x66,0x00,0xa9,0x01,0xd8,0x00}},




	{ .i1 = { 0xd0,0x00,0x3b,0x00,0x43,0x02,0x6a,0x00}},




	{ .i1 = { 0x60,0x00,0xb7,0x01,0x95,0x00,0x95,0x00}},




	{ .i1 = { 0x0b,0x00,0x6e,0x00,0x3d,0x01,0x37,0x00}},




	{ .i1 = { 0x24,0x02,0x11,0x00,0x28,0x00,0xc1,0x00}},




	{ .i1 = { 0x18,0x00,0x52,0x00,0xdc,0x00,0xb0,0x01}},




	{ .i1 = { 0x10,0x00,0x38,0x01,0x56,0x00,0xc3,0x00}},




	{ .i1 = { 0x35,0x00,0x62,0x00,0x3f,0x01,0x7d,0x00}},




	{ .i1 = { 0x72,0x00,0xc7,0x00,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0x91,0x00,0x51,0x00,0x85,0x00,0x1f,0x02}},




	{ .i1 = { 0xc5,0x00,0x50,0x00,0x71,0x01,0xb4,0x00}},




	{ .i1 = { 0xbf,0x00,0x53,0x00,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xfc,0x01,0xfc,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0xd4,0x00,0xdb,0x00,0x0f,0x02,0xfc,0x01}},




	{ .i1 = { 0xc8,0x00,0x61,0x00,0x85,0x00,0x9a,0x00}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xda,0x00}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x58,0x01,0x42,0x00}},




	{ .i1 = { 0xd8,0x00,0xa3,0x00,0xd9,0x00,0x97,0x00}},




	{ .i1 = { 0xad,0x00,0xdb,0x00,0x7f,0x00,0xfc,0x01}},




	{ .i1 = { 0x38,0x00,0x61,0x00,0x04,0x02,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x04,0x02,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0x34,0x00,0x36,0x00,0x92,0x00}},




	{ .i1 = { 0xd9,0x00,0xdb,0x00,0x80,0x00,0xfc,0x01}},




	{ .i1 = { 0x01,0x00,0x61,0x00,0x38,0x00,0xfb,0x01}},




	{ .i1 = { 0x0d,0x02,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0x7c,0x01,0x57,0x01,0x03,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xdb,0x00,0x04,0x02,0xfc,0x01}},




	{ .i1 = { 0x71,0x01,0x61,0x00,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0x23,0x00,0x20,0x00,0x21,0x00,0x22,0x00}},




	{ .i1 = { 0x25,0x00,0x24,0x00,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0x40,0x01,0xfa,0x01}},




	{ .i1 = { 0x0d,0x02,0x04,0x00,0x1f,0x02,0x98,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0x23,0x00,0x20,0x00}},




	{ .i1 = { 0x21,0x00,0x22,0x00,0x25,0x00,0x24,0x00}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0x3e,0x02,0x05,0x00,0x65,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0x57,0x00}},




	{ .i1 = { 0xbb,0x00,0x25,0x02,0x41,0x02,0x6c,0x00}},




	{ .i1 = { 0x0d,0x00,0x6b,0x00,0x43,0x00,0x16,0x00}},




	{ .i1 = { 0x14,0x00,0x4e,0x00,0xdb,0x00,0x1f,0x02}},




	{ .i1 = { 0xfc,0x01,0x09,0x00,0x5f,0x00,0x85,0x00}},




	{ .i1 = { 0xc2,0x00,0x0f,0x00,0x81,0x00,0x29,0x02}},




	{ .i1 = { 0xb9,0x00,0x16,0x00,0x14,0x00,0x7f,0x01}},




	{ .i1 = { 0x0a,0x00,0x02,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0xaa,0x00,0xc6,0x00,0xdb,0x00,0x84,0x01}},




	{ .i1 = { 0xfc,0x01,0xdb,0x00,0x61,0x00,0xfc,0x01}},




	{ .i1 = { 0x18,0x00,0x61,0x00,0xab,0x00,0x3f,0x00}},




	{ .i1 = { 0x3e,0x02,0x0e,0x00,0x3e,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0x06,0x00}},




	{ .i1 = { 0x67,0x00,0x07,0x00,0xcd,0x00,0x6c,0x00}},




	{ .i1 = { 0x0d,0x00,0x6b,0x00,0xbb,0x00,0x25,0x02}},




	{ .i1 = { 0x18,0x00,0x63,0x00,0xdb,0x00,0x18,0x00}},




	{ .i1 = { 0xfc,0x01,0x7a,0x01,0x5f,0x00,0x3e,0x02}},




	{ .i1 = { 0xc2,0x00,0x85,0x00,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0x4c,0x01,0x4b,0x01}},




	{ .i1 = { 0x1d,0x00,0x3d,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x6b,0x00,0xa8,0x01,0xa3,0x01,0xd5,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x5f,0x00,0xab,0x00,0xc2,0x00}},




	{ .i1 = { 0x3e,0x02,0x0c,0x00,0x3e,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0xa1,0x01}},




	{ .i1 = { 0xb5,0x00,0x5c,0x00,0x5b,0x00,0x19,0x00}},




	{ .i1 = { 0x46,0x00,0x6b,0x00,0x9c,0x01,0xb0,0x00}},




	{ .i1 = { 0x93,0x01,0x41,0x00,0xdb,0x00,0xb9,0x01}},




	{ .i1 = { 0xfc,0x01,0xab,0x00,0x5f,0x00,0x5a,0x00}},




	{ .i1 = { 0xc2,0x00,0x3e,0x00,0xb8,0x01,0x47,0x00}},




	{ .i1 = { 0x54,0x00,0x98,0x01,0x5d,0x00,0x8f,0x01}},




	{ .i1 = { 0xbd,0x00,0xb6,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x3e,0x02,0xbc,0x00,0x84,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x17,0x00,0x55,0x00}},




	{ .i1 = { 0x3c,0x00,0xb6,0x01,0xab,0x00,0x48,0x00}},




	{ .i1 = { 0x82,0x01,0x6b,0x00,0x3e,0x00,0x81,0x01}},




	{ .i1 = { 0xc4,0x00,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x5f,0x00,0x3e,0x02}},




	{ .i1 = { 0xc2,0x00,0x16,0x02,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x17,0x00,0x73,0x01,0x1a,0x00}},




	{ .i1 = { 0x89,0x01,0xc0,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x6b,0x00,0x85,0x00,0x49,0x01,0x1b,0x00}},




	{ .i1 = { 0xca,0x00,0xdb,0x00,0x43,0x01,0xfc,0x01}},




	{ .i1 = { 0xcc,0x00,0x5f,0x00,0xab,0x00,0xc2,0x00}},




	{ .i1 = { 0x6d,0x00,0x42,0x01,0x3e,0x00,0xd6,0x00}},




	{ .i1 = { 0xdb,0x00,0x41,0x01,0xfc,0x01,0x3e,0x01}},




	{ .i1 = { 0x61,0x00,0x5c,0x00,0x5b,0x00,0x14,0x00}},




	{ .i1 = { 0x82,0x00,0x37,0x00,0x3c,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0x77,0x01,0x74,0x01,0x1e,0x00}},




	{ .i1 = { 0x1c,0x00,0xab,0x00,0x12,0x02,0x70,0x01}},




	{ .i1 = { 0x2b,0x00,0x3e,0x00,0x35,0x00,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xa7,0x01,0x61,0x00}},




	{ .i1 = { 0x7c,0x01,0x57,0x01,0xc5,0x01,0x51,0x00}},




	{ .i1 = { 0xc5,0x01,0x83,0x00,0x37,0x01,0x50,0x00}},




	{ .i1 = { 0x71,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x37,0x00,0x13,0x00,0x15,0x00,0x28,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0xc5,0x01}},




	{ .i1 = { 0x61,0x00,0xc5,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x35,0x00,0x75,0x00,0x77,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xd8,0x00,0x7c,0x01}},




	{ .i1 = { 0x57,0x01,0xc5,0x01,0x51,0x00,0xc5,0x01}},




	{ .i1 = { 0x78,0x00,0x85,0x01,0x50,0x00,0x71,0x01}},




	{ .i1 = { 0xc5,0x01,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x61,0x00,0x37,0x00}},




	{ .i1 = { 0xc5,0x01,0x39,0x00,0x28,0x00,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xc5,0x01,0x61,0x00}},




	{ .i1 = { 0xc5,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0x35,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x9d,0x00,0xd8,0x00,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0xc5,0x01,0x51,0x00,0xc5,0x01,0x9e,0x00}},




	{ .i1 = { 0xc5,0x01,0x50,0x00,0x71,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xa5,0x00,0xc5,0x01,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0x37,0x00,0x61,0x00}},




	{ .i1 = { 0x39,0x00,0x28,0x00,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xc5,0x01,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x35,0x00}},




	{ .i1 = { 0xc5,0x01,0x9f,0x00,0xa0,0x00,0xc5,0x01}},




	{ .i1 = { 0xd8,0x00,0x7c,0x01,0x57,0x01,0xc5,0x01}},




	{ .i1 = { 0x51,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x50,0x00,0x71,0x01,0x78,0x01,0xc5,0x01}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0x61,0x00,0x61,0x00,0xc5,0x01,0x37,0x00}},




	{ .i1 = { 0xc5,0x01,0x39,0x00,0x28,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x35,0x00,0xc5,0x01,0xc5,0x01,0xd8,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x7c,0x01,0x57,0x01}},




	{ .i1 = { 0x58,0x01,0x51,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0x50,0x00,0x71,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0x79,0x00,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x88,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x89,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xdb,0x00}},




	{ .i1 = { 0xc5,0x01,0xfc,0x01,0xc5,0x01,0x61,0x00}},




	{ .i1 = { 0xd8,0x00,0xdb,0x00,0xc5,0x01,0xfc,0x01}},




	{ .i1 = { 0xdb,0x00,0x61,0x00,0xfc,0x01,0xc5,0x01}},




	{ .i1 = { 0x61,0x00,0xc5,0x01,0xc5,0x01,0x86,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xa1,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xd9,0x00,0x61,0x00,0x87,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0x38,0x00}},




	{ .i1 = { 0x61,0x00,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xdb,0x00,0xd9,0x00}},




	{ .i1 = { 0xfc,0x01,0x8e,0x00,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x38,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x3b,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0xc5,0x01}},




	{ .i1 = { 0x61,0x00,0x30,0x00,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x8f,0x00,0xa2,0x00}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x4a,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xdb,0x00,0xdb,0x00,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0x61,0x00,0x61,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0x26,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xd9,0x00,0xc5,0x01,0x8d,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x38,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xdb,0x00,0xd9,0x00}},




	{ .i1 = { 0xfc,0x01,0x8c,0x00,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x38,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x3a,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xdb,0x00,0xc5,0x01,0xfc,0x01,0x8b,0x00}},




	{ .i1 = { 0x61,0x00,0x30,0x00,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x7a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc5,0x01,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xc5,0x01,0x61,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xdb,0x00,0x8a,0x00,0xfc,0x01}},




	{ .i1 = { 0xc5,0x01,0x61,0x00,0xc5,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x6e,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xdb,0x00,0xc5,0x01,0xfc,0x01}},




	{ .i1 = { 0xc5,0x01,0x61,0x00,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x6f,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0x7b,0x00}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xdb,0x00,0xc5,0x01}},




	{ .i1 = { 0xfc,0x01,0xc5,0x01,0x61,0x00,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x37,0x00,0xd9,0x00,0x39,0x00,0x28,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x38,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0x35,0x00,0xc5,0x01,0x39,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xc5,0x01,0x7c,0x01}},




	{ .i1 = { 0x57,0x01,0xc5,0x01,0x51,0x00,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xc5,0x01,0x50,0x00,0x71,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x30,0x00,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xd8,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xd9,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x38,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xc5,0x01,0xd9,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x38,0x00,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x32,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xd9,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x38,0x00,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0xc5,0x01,0xc5,0x01}},




	{ .i1 = { 0xc5,0x01,0xc5,0x01,0x4b,0x00,0x31,0x00}},

};
static data f3___main_s05cc[] = {








	{ .i1 = { 0x59,0x01,0x5b,0x03,0x5d,0x45,0x46,0x07}},








	{ .i1 = { 0x67,0x09,0x6d,0x6e,0x0c,0x0d,0x0e,0x02}},








	{ .i1 = { 0x10,0x11,0x5b,0x06,0x14,0x15,0x16,0x08}},








	{ .i1 = { 0x65,0x19,0x49,0x1b,0x1c,0x1d,0x6b,0x6c}},








	{ .i1 = { 0x11,0x21,0x22,0x11,0x24,0x25,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x5c,0x08,0x11}},








	{ .i1 = { 0x12,0x7a,0x7b,0x21,0x5b,0x17,0x18,0x11}},








	{ .i1 = { 0x26,0x21,0x22,0x3b,0x3c,0x3d,0x04,0x3f}},








	{ .i1 = { 0x40,0x29,0x01,0x43,0x03,0x71,0x72,0x73}},








	{ .i1 = { 0x07,0x3a,0x3b,0x0a,0x21,0x0c,0x0d,0x0e}},








	{ .i1 = { 0x3e,0x10,0x11,0x7a,0x7b,0x14,0x15,0x16}},








	{ .i1 = { 0x3a,0x3b,0x19,0x21,0x1b,0x1c,0x1d,0x4a}},








	{ .i1 = { 0x4a,0x10,0x21,0x22,0x4e,0x24,0x50,0x4a}},








	{ .i1 = { 0x27,0x28,0x29,0x2a,0x2b,0x2c,0x59,0x59}},








	{ .i1 = { 0x5b,0x5b,0x5d,0x5d,0x10,0x20,0x59,0x4a}},








	{ .i1 = { 0x5b,0x21,0x5d,0x4e,0x3b,0x3c,0x3d,0x21}},








	{ .i1 = { 0x3f,0x40,0x2d,0x01,0x43,0x03,0x59,0x49}},








	{ .i1 = { 0x5b,0x07,0x5d,0x0a,0x0a,0x05,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x0b,0x10,0x11,0x77,0x78,0x14,0x15}},








	{ .i1 = { 0x16,0x11,0x5c,0x19,0x16,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x4a,0x4a,0x49,0x21,0x22,0x4e,0x24,0x50}},








	{ .i1 = { 0x44,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x59}},








	{ .i1 = { 0x59,0x5b,0x5b,0x5d,0x5d,0x5c,0x60,0x61}},








	{ .i1 = { 0x4a,0x71,0x72,0x73,0x4e,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x21,0x3f,0x40,0x42,0x01,0x43,0x03,0x59}},








	{ .i1 = { 0x49,0x5b,0x07,0x5d,0x04,0x0a,0x23,0x0c}},








	{ .i1 = { 0x0d,0x0e,0x10,0x10,0x11,0x5c,0x49,0x14}},








	{ .i1 = { 0x15,0x16,0x74,0x5c,0x19,0x0b,0x1b,0x1c}},








	{ .i1 = { 0x1d,0x4a,0x4a,0x21,0x21,0x22,0x70,0x24}},








	{ .i1 = { 0x6f,0x5c,0x27,0x28,0x29,0x2a,0x2b,0x2c}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x2e,0x2f}},








	{ .i1 = { 0x06,0x4a,0x62,0x63,0x11,0x4e,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x16,0x3f,0x40,0x00,0x01,0x43,0x03}},








	{ .i1 = { 0x59,0x49,0x5b,0x07,0x5d,0x76,0x77,0x78}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x41,0x10,0x11,0x5a,0x5b}},








	{ .i1 = { 0x14,0x15,0x16,0x21,0x5c,0x19,0x41,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x4a,0x4a,0x5b,0x21,0x22,0x4e}},








	{ .i1 = { 0x24,0x4a,0x4a,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x58}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x67,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x0b,0x3f,0x40,0x67,0x01,0x43}},








	{ .i1 = { 0x03,0x02,0x56,0x57,0x07,0x16,0x76,0x77}},








	{ .i1 = { 0x78,0x0c,0x0d,0x0e,0x6c,0x10,0x11,0x5e}},








	{ .i1 = { 0x11,0x14,0x15,0x16,0x10,0x16,0x19,0x5e}},








	{ .i1 = { 0x1b,0x1c,0x1d,0x4a,0x4a,0x48,0x21,0x22}},








	{ .i1 = { 0x4e,0x24,0x4a,0x48,0x27,0x28,0x29,0x2a}},








	{ .i1 = { 0x2b,0x2c,0x59,0x59,0x5b,0x5b,0x5d,0x5d}},








	{ .i1 = { 0x58,0x59,0x5e,0x5b,0x63,0x5d,0x4a,0x49}},








	{ .i1 = { 0x3b,0x3c,0x3d,0x49,0x3f,0x40,0x04,0x64}},








	{ .i1 = { 0x43,0x48,0x08,0x66,0x58,0x59,0x4a,0x5b}},








	{ .i1 = { 0x0e,0x5d,0x5c,0x11,0x12,0x13,0x5c,0x10}},








	{ .i1 = { 0x11,0x17,0x18,0x49,0x08,0x59,0x4a,0x5b}},








	{ .i1 = { 0x46,0x5d,0x0e,0x5a,0x5b,0x11,0x12,0x13}},








	{ .i1 = { 0x21,0x22,0x46,0x17,0x18,0x59,0x5c,0x5b}},








	{ .i1 = { 0x29,0x5d,0x30,0x31,0x32,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x39,0x3a,0x3b,0x0d,0x5a}},








	{ .i1 = { 0x5b,0x46,0x48,0x66,0x30,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x47,0x46,0x65,0x4a,0x4b,0x4c,0x4d,0x66}},








	{ .i1 = { 0x6b,0x6c,0x51,0x52,0x53,0x54,0x64,0x2e}},








	{ .i1 = { 0x2f,0x55,0x59,0x48,0x5b,0x46,0x5d,0x4a}},








	{ .i1 = { 0x5f,0x4f,0x4a,0x6d,0x6e,0x2e,0x2f,0x04}},








	{ .i1 = { 0x46,0x46,0x69,0x6a,0x20,0x58,0x59,0x04}},








	{ .i1 = { 0x5b,0x59,0x5d,0x5b,0x11,0x5d,0x75,0x64}},








	{ .i1 = { 0x47,0x2d,0x79,0x4a,0x4b,0x4c,0x4d,0x46}},








	{ .i1 = { 0x65,0x46,0x51,0x52,0x53,0x54,0x6b,0x6c}},








	{ .i1 = { 0x11,0x1a,0x59,0x11,0x5b,0x16,0x5d,0x47}},








	{ .i1 = { 0x5f,0x4a,0x4a,0x4b,0x4c,0x4d,0x06,0x06}},








	{ .i1 = { 0x2d,0x2d,0x69,0x6a,0x54,0x16,0x16,0x58}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x75,0x5f}},








	{ .i1 = { 0x47,0x1f,0x79,0x4a,0x4b,0x4c,0x4d,0x04}},








	{ .i1 = { 0x68,0x69,0x6a,0x10,0x06,0x54,0x14,0x0a}},








	{ .i1 = { 0x19,0x41,0x59,0x16,0x5b,0x75,0x5d,0x19}},








	{ .i1 = { 0x5f,0x79,0x16,0x06,0x2d,0x04,0x06,0x04}},








	{ .i1 = { 0x10,0x68,0x69,0x6a,0x47,0x29,0x4a,0x4a}},








	{ .i1 = { 0x4b,0x4c,0x4d,0x19,0x02,0x16,0x75,0x41}},








	{ .i1 = { 0x16,0x54,0x79,0x16,0x21,0x59,0x59,0x5b}},








	{ .i1 = { 0x5b,0x5d,0x5d,0x47,0x5f,0x61,0x4a,0x4b}},








	{ .i1 = { 0x4c,0x4d,0x16,0x02,0x04,0x68,0x69,0x6a}},








	{ .i1 = { 0x54,0x4a,0x16,0x2d,0x40,0x59,0x0c,0x5b}},








	{ .i1 = { 0x0a,0x5d,0x75,0x5f,0x1a,0x16,0x79,0x58}},








	{ .i1 = { 0x59,0x16,0x5b,0x0d,0x5d,0x69,0x6a,0x2f}},








	{ .i1 = { 0x4a,0x0e,0x0d,0x10,0x11,0x05,0x04,0x10}},








	{ .i1 = { 0x2d,0x75,0x10,0x21,0x3b,0x79,0x1b,0x59}},








	{ .i1 = { 0x7c,0x5b,0x1f,0x5d,0x21,0x22,0x7c,0x24}},








	{ .i1 = { 0x7c,0x4a,0x16,0x28,0x29,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x0e,0x0f,0x10,0x11}},








	{ .i1 = { 0x59,0x7c,0x5b,0x7c,0x5d,0x7c,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x1b,0x4a,0x4a,0x7c,0x7c,0x43,0x21}},








	{ .i1 = { 0x22,0x7c,0x24,0x7c,0x4a,0x04,0x28,0x29}},








	{ .i1 = { 0x7c,0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x0e}},








	{ .i1 = { 0x7c,0x10,0x11,0x59,0x7c,0x5b,0x7c,0x5d}},








	{ .i1 = { 0x7c,0x3b,0x3c,0x3d,0x1b,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x4a,0x43,0x21,0x22,0x7c,0x24,0x7c,0x4a}},








	{ .i1 = { 0x7c,0x28,0x29,0x7c,0x7c,0x09,0x7c,0x59}},








	{ .i1 = { 0x7c,0x5b,0x0e,0x5d,0x10,0x11,0x59,0x7c}},








	{ .i1 = { 0x5b,0x7c,0x5d,0x7c,0x3b,0x3c,0x3d,0x1b}},








	{ .i1 = { 0x7c,0x4a,0x4a,0x7c,0x43,0x21,0x22,0x7c}},








	{ .i1 = { 0x24,0x7c,0x7c,0x7c,0x28,0x29,0x05,0x7c}},








	{ .i1 = { 0x59,0x59,0x5b,0x5b,0x5d,0x5d,0x7c,0x0e}},








	{ .i1 = { 0x7c,0x10,0x11,0x7c,0x7c,0x7c,0x7c,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x7c,0x7c,0x1b,0x7c,0x7c,0x43}},








	{ .i1 = { 0x7c,0x7c,0x21,0x22,0x04,0x24,0x7c,0x7c}},








	{ .i1 = { 0x08,0x28,0x29,0x7c,0x7c,0x7c,0x0e,0x7c}},








	{ .i1 = { 0x4a,0x11,0x12,0x13,0x7c,0x7c,0x4a,0x17}},








	{ .i1 = { 0x18,0x4a,0x7c,0x7c,0x3b,0x3c,0x3d,0x59}},








	{ .i1 = { 0x7c,0x5b,0x7c,0x5d,0x43,0x59,0x7c,0x5b}},








	{ .i1 = { 0x59,0x5d,0x5b,0x7c,0x5d,0x7c,0x7c,0x4a}},








	{ .i1 = { 0x30,0x31,0x7c,0x7c,0x7c,0x4a,0x7c,0x7c}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x7c,0x7c,0x59,0x7c}},








	{ .i1 = { 0x5b,0x08,0x5d,0x4a,0x59,0x7c,0x5b,0x0e}},








	{ .i1 = { 0x5d,0x7c,0x11,0x12,0x13,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x17,0x18,0x59,0x08,0x5b,0x4a,0x5d,0x7c}},








	{ .i1 = { 0x7c,0x0e,0x7c,0x7c,0x11,0x12,0x13,0x7c}},








	{ .i1 = { 0x7c,0x16,0x17,0x18,0x59,0x7c,0x5b,0x7c}},








	{ .i1 = { 0x5d,0x30,0x31,0x7c,0x7c,0x7c,0x4a,0x4a}},








	{ .i1 = { 0x7c,0x38,0x39,0x3a,0x3b,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x41,0x30,0x31,0x59,0x59,0x5b}},








	{ .i1 = { 0x5b,0x5d,0x5d,0x38,0x39,0x3a,0x3b,0x02}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x08,0x7c,0x4a}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12}},








	{ .i1 = { 0x13,0x7c,0x7c,0x7c,0x17,0x18,0x59,0x08}},








	{ .i1 = { 0x5b,0x4a,0x5d,0x7c,0x7c,0x0e,0x7c,0x7c}},








	{ .i1 = { 0x11,0x12,0x13,0x7c,0x7c,0x16,0x17,0x18}},








	{ .i1 = { 0x59,0x7c,0x5b,0x4a,0x5d,0x30,0x31,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x4a,0x7c,0x7c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7c,0x59,0x7c,0x5b,0x7c,0x5d,0x30}},








	{ .i1 = { 0x31,0x59,0x4a,0x5b,0x7c,0x5d,0x7c,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x7c,0x7c,0x05,0x7c,0x7c}},








	{ .i1 = { 0x08,0x59,0x7c,0x5b,0x7c,0x5d,0x0e,0x7c}},








	{ .i1 = { 0x7c,0x11,0x12,0x13,0x7c,0x7c,0x7c,0x17}},








	{ .i1 = { 0x18,0x05,0x7c,0x7c,0x08,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x0e,0x4a,0x7c,0x11,0x12,0x13}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x17,0x18,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x30,0x31,0x59,0x7c,0x5b,0x7c,0x5d,0x7c}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x30,0x31,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x0e,0x08,0x10,0x11}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12}},








	{ .i1 = { 0x13,0x1b,0x7c,0x16,0x17,0x18,0x7c,0x21}},








	{ .i1 = { 0x22,0x7c,0x24,0x7c,0x08,0x7c,0x28,0x29}},








	{ .i1 = { 0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12,0x13}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x17,0x18,0x30,0x31,0x7c}},








	{ .i1 = { 0x7c,0x3b,0x3c,0x3d,0x7c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x43,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x30,0x31,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x08,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x0e,0x7c,0x7c,0x11,0x12}},








	{ .i1 = { 0x13,0x7c,0x7c,0x7c,0x17,0x18,0x7c,0x08}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x0e,0x7c,0x7c}},








	{ .i1 = { 0x11,0x12,0x13,0x7c,0x7c,0x7c,0x17,0x18}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x31,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x08,0x7c,0x7c,0x7c,0x7c,0x7c,0x0e,0x7c}},








	{ .i1 = { 0x7c,0x11,0x12,0x13,0x7c,0x7c,0x7c,0x17}},








	{ .i1 = { 0x18,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x3a,0x3b,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x7c}},








	{ .i1 = { 0x7c,0x7c,0x7c,0x7c,0x7c,0x7c,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},


	{ .i1 = { 0x45}},
};
static data f3___main_s05cd[] = {




	{ .i1 = { 0x24,0x05,0x00,0x00,0x00,0x00,0x41,0x00}},




	{ .i1 = { 0x41,0x00,0x41,0x00,0x82,0x00,0xc3,0x00}},




	{ .i1 = { 0x04,0x01,0x45,0x01,0x45,0x01,0x83,0x02}},




	{ .i1 = { 0x83,0x02,0xa6,0x02,0x83,0x02,0xa6,0x02}},




	{ .i1 = { 0xc9,0x02,0x46,0x04,0xec,0x02,0xa6,0x02}},




	{ .i1 = { 0xa6,0x02,0xa6,0x02,0xa6,0x02,0xa6,0x02}},




	{ .i1 = { 0x11,0x03,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x46,0x04,0x46,0x04,0x46,0x04,0x46,0x04}},




	{ .i1 = { 0x87,0x01,0x18,0x00,0x18,0x00,0x64,0x00}},




	{ .i1 = { 0x2b,0x00,0x2b,0x00,0x51,0x00,0x51,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x3a,0x00,0x81,0x00,0xc2,0x00}},




	{ .i1 = { 0xc2,0x00,0xc2,0x00,0x58,0x00,0x5e,0x00}},




	{ .i1 = { 0x9f,0x00,0x5e,0x00,0x5e,0x00,0xd2,0x00}},




	{ .i1 = { 0xab,0x00,0xf2,0x00,0xfa,0x00,0xdd,0x00}},




	{ .i1 = { 0xdd,0x00,0x51,0x00,0x4c,0x01,0x4c,0x01}},




	{ .i1 = { 0x5e,0x00,0x4c,0x01,0x5e,0x00,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x24,0x05,0x24,0x05,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x24,0x05,0x24,0x05,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x24,0x05,0x24,0x05,0x24,0x05}},




	{ .i1 = { 0x24,0x05,0x82,0x01,0x94,0x01,0x30,0x03}},




	{ .i1 = { 0x69,0x03,0x7b,0x03,0xb5,0x03,0xc7,0x03}},




	{ .i1 = { 0x00,0x04,0x14,0x04,0x30,0x03,0x4d,0x04}},




	{ .i1 = { 0x64,0x04,0x64,0x04,0x64,0x04,0x64,0x04}},




	{ .i1 = { 0x64,0x04,0x64,0x04,0x64,0x04,0x64,0x04}},




	{ .i1 = { 0x64,0x04,0x64,0x04,0x9d,0x04,0xaf,0x04}},




	{ .i1 = { 0xe8,0x04,0xe8,0x04,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x1e,0x00,0x0f,0x00,0x0f,0x00,0x0f,0x00}},




	{ .i1 = { 0xc8,0x00,0xb1,0x01,0x47,0x01,0xbf,0x01}},




	{ .i1 = { 0x55,0x00,0xd4,0x01,0xeb,0x00,0x86,0x00}},




	{ .i1 = { 0x37,0x01,0xff,0x01,0xeb,0x01,0x88,0x00}},




	{ .i1 = { 0xf3,0x01,0x26,0x00,0x26,0x00,0x26,0x00}},




	{ .i1 = { 0x26,0x00,0x26,0x00,0x26,0x00,0x0d,0x00}},




	{ .i1 = { 0xf7,0x01,0x18,0x02,0x19,0x02,0x02,0x02}},




	{ .i1 = { 0xf4,0x01,0x0f,0x02,0x10,0x02,0x12,0x02}},




	{ .i1 = { 0x02,0x02,0x33,0x02,0x2b,0x02,0x36,0x02}},




	{ .i1 = { 0x2a,0x02,0x35,0x02,0x00,0x02,0x27,0x02}},




	{ .i1 = { 0x2e,0x02,0x2d,0x02,0x34,0x02,0x02,0x02}},




	{ .i1 = { 0x45,0x02,0x1f,0x02,0x49,0x02,0x48,0x02}},




	{ .i1 = { 0x4b,0x02,0x2c,0x02,0x40,0x02,0x42,0x02}},




	{ .i1 = { 0x47,0x02,0x4a,0x02,0x5a,0x02,0x4d,0x02}},




	{ .i1 = { 0x1e,0x02,0x43,0x02,0x5c,0x02,0x71,0x02}},




	{ .i1 = { 0x70,0x02,0x4e,0x02,0x64,0x02,0x3c,0x02}},




	{ .i1 = { 0x72,0x02,0x76,0x02,0x6a,0x02,0x6f,0x02}},




	{ .i1 = { 0x73,0x02,0x60,0x02,0x7e,0x02,0x85,0x02}},




	{ .i1 = { 0x90,0x02,0x92,0x02,0x6b,0x02,0x87,0x02}},




	{ .i1 = { 0x61,0x02,0x7a,0x02,0x02,0x02,0x8a,0x02}},


	{ .i1 = { 0x94,0x02}},
};
static data f3___main_s05ce[] = {




	{ .i1 = { 0xc0,0xff,0x89,0x01,0xb9,0x01,0xd0,0x01}},




	{ .i1 = { 0xe9,0x01,0x0d,0x02,0x24,0x02,0x24,0x02}},




	{ .i1 = { 0x24,0x02,0x24,0x02,0x24,0x02,0x97,0x00}},




	{ .i1 = { 0xd8,0x00,0x16,0x00,0x1d,0x00,0x57,0x00}},




	{ .i1 = { 0x56,0x00,0x98,0x00,0xdf,0x00,0x2d,0x00}},




	{ .i1 = { 0x6e,0x00,0xaf,0x00,0xd9,0x00,0x1a,0x01}},




	{ .i1 = { 0x20,0x01,0x34,0x01,0x9d,0x01,0x19,0x01}},




	{ .i1 = { 0xcf,0x01,0x0c,0x02,0x2f,0x02,0x15,0x00}},




	{ .i1 = { 0xe0,0x00,0x44,0x01,0x54,0x01,0xa0,0x01}},




	{ .i1 = { 0x46,0x02,0x5f,0x02,0x78,0x02,0x79,0x02}},




	{ .i1 = { 0x82,0x02,0x9e,0x02,0xa5,0x02,0xbf,0x02}},




	{ .i1 = { 0xc0,0x02,0xf6,0x02,0xfc,0x02,0xff,0x02}},




	{ .i1 = { 0x15,0x03,0x1b,0x03,0x29,0x03,0x3b,0x03}},




	{ .i1 = { 0x54,0x03,0x55,0x03,0x75,0x03,0x87,0x03}},




	{ .i1 = { 0x99,0x03,0xa0,0x03,0xb0,0x03,0xd9,0x03}},




	{ .i1 = { 0xa7,0xff,0xb7,0xff,0xd9,0xff,0xb3,0xff}},




	{ .i1 = { 0xd4,0xff,0x48,0x00,0x6d,0x01,0xa3,0x01}},




	{ .i1 = { 0xd1,0xff,0x3e,0x00,0x59,0x00,0x7f,0x00}},




	{ .i1 = { 0x8d,0x00,0xc0,0x00,0x36,0x01,0x3a,0x01}},




	{ .i1 = { 0x52,0x01,0x9d,0xff,0xf4,0x00,0xbc,0x00}},




	{ .i1 = { 0x49,0x01,0x65,0x01,0x79,0x00,0x23,0x01}},




	{ .i1 = { 0x7e,0x01,0x7a,0x01,0x9b,0x01,0xa1,0xff}},




	{ .i1 = { 0x66,0x00,0x76,0x00,0xc9,0x00,0xd7,0x00}},




	{ .i1 = { 0xde,0x00,0xe8,0x00,0xf9,0x00,0x01,0x01}},




	{ .i1 = { 0x1d,0x01,0x1c,0x01,0x41,0x01,0x5a,0x01}},




	{ .i1 = { 0x64,0x01,0x25,0x01,0x7b,0x01,0x5d,0x01}},




	{ .i1 = { 0x8b,0x01,0x71,0x01,0x9f,0x01,0x8c,0x01}},




	{ .i1 = { 0xaa,0x01,0xab,0x01,0x9a,0x01,0xc1,0x01}},


	{ .i1 = { 0xc3,0x01}},
};
static data f3___main_s05cf[] = {




	{ .i1 = { 0x3d,0x02,0xd5,0x01,0xd5,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x44,0x02,0x40,0x02,0x4f,0x02}},




	{ .i1 = { 0x4f,0x02,0xc3,0x01,0x4f,0x02,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x33,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x4b,0x02,0x4b,0x02,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2f,0x02,0x4a,0x02,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x3d,0x02}},




	{ .i1 = { 0x3d,0x02,0x49,0x02,0x3d,0x02,0x49,0x02}},




	{ .i1 = { 0x3d,0x02,0x49,0x02,0x3d,0x02,0x42,0x02}},




	{ .i1 = { 0x3d,0x02,0x3d,0x02,0xd3,0x01,0x3d,0x02}},




	{ .i1 = { 0x3d,0x02,0xc3,0x01,0xc3,0x01,0x1b,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x34,0x02,0x1b,0x02,0xe5,0x01,0xe4,0x01}},




	{ .i1 = { 0xe3,0x01,0xe2,0x01,0xe1,0x01,0xe0,0x01}},




	{ .i1 = { 0x17,0x02,0x01,0x02,0xf2,0x01,0xf0,0x01}},




	{ .i1 = { 0xf4,0x01,0xf3,0x01,0xeb,0x01,0xec,0x01}},




	{ .i1 = { 0xe9,0x01,0xed,0x01,0xef,0x01,0xee,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xd4,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0xf8,0x01,0xf7,0x01}},




	{ .i1 = { 0xf6,0x01,0xf1,0x01,0xea,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x1d,0x02}},




	{ .i1 = { 0x50,0x02,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2d,0x02,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x2a,0x02}},




	{ .i1 = { 0xc3,0x01,0x28,0x02,0xc3,0x01,0x23,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x0f,0x02}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x1a,0x02,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xde,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xf5,0x01,0xe8,0x01}},


	{ .i1 = { 0xc3,0x01}},
};
const i1 c02_s011c[] = { 0x24,0 };
const i1 c02_s011d[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s011e[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s011f[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0120[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0121[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0122[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0123[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0124[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0125[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0126[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s0127[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s0128[] = { 0x49,0x46,0 };
const i1 c02_s0129[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s012a[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s012b[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s012c[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s012d[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s012e[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s012f[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s0130[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s0131[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0132[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0133[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0134[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s0135[] = { 0x53,0x55,0x42,0 };
const i1 c02_s0136[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s0137[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s0138[] = { 0x56,0x41,0x52,0 };
const i1 c02_s0139[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s013a[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s013b[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s013c[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s013d[] = { 0x49,0x44,0 };
const i1 c02_s013e[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s013f[] = { 0x41,0x54,0 };
const i1 c02_s0140[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s0141[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s0142[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s0143[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s0144[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s0145[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s0146[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s0147[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s0148[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s0149[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s014a[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s014b[] = { 0x4f,0x52,0 };
const i1 c02_s014c[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s014d[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s014e[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s014f[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s0150[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s0151[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s0152[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s0153[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s0154[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s0155[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s0156[] = { 0x41,0x53,0 };
const i1 c02_s0157[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s0158[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s0159[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s015a[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s015b[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s015c[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s015d[] = { 0x49,0x53,0 };
const i1 c02_s015e[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s015f[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s0160[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data f3___main_s05d0[] = {

	{ .ptr = (void*)c02_s011c },

	{ .ptr = (void*)c02_s011d },

	{ .ptr = (void*)c02_s011e },

	{ .ptr = (void*)c02_s011f },

	{ .ptr = (void*)c02_s0120 },

	{ .ptr = (void*)c02_s0121 },

	{ .ptr = (void*)c02_s0122 },

	{ .ptr = (void*)c02_s0123 },

	{ .ptr = (void*)c02_s0124 },

	{ .ptr = (void*)c02_s0125 },

	{ .ptr = (void*)c02_s0126 },

	{ .ptr = (void*)c02_s0127 },

	{ .ptr = (void*)c02_s0128 },

	{ .ptr = (void*)c02_s0129 },

	{ .ptr = (void*)c02_s012a },

	{ .ptr = (void*)c02_s012b },

	{ .ptr = (void*)c02_s012c },

	{ .ptr = (void*)c02_s012d },

	{ .ptr = (void*)c02_s012e },

	{ .ptr = (void*)c02_s012f },

	{ .ptr = (void*)c02_s0130 },

	{ .ptr = (void*)c02_s0131 },

	{ .ptr = (void*)c02_s0132 },

	{ .ptr = (void*)c02_s0133 },

	{ .ptr = (void*)c02_s0134 },

	{ .ptr = (void*)c02_s0135 },

	{ .ptr = (void*)c02_s0136 },

	{ .ptr = (void*)c02_s0137 },

	{ .ptr = (void*)c02_s0138 },

	{ .ptr = (void*)c02_s0139 },

	{ .ptr = (void*)c02_s013a },

	{ .ptr = (void*)c02_s013b },

	{ .ptr = (void*)c02_s013c },

	{ .ptr = (void*)c02_s013d },

	{ .ptr = (void*)c02_s013e },

	{ .ptr = (void*)c02_s013f },

	{ .ptr = (void*)c02_s0140 },

	{ .ptr = (void*)c02_s0141 },

	{ .ptr = (void*)c02_s0142 },

	{ .ptr = (void*)c02_s0143 },

	{ .ptr = (void*)c02_s0144 },

	{ .ptr = (void*)c02_s0145 },

	{ .ptr = (void*)c02_s0146 },

	{ .ptr = (void*)c02_s0147 },

	{ .ptr = (void*)c02_s0148 },

	{ .ptr = (void*)c02_s0149 },

	{ .ptr = (void*)c02_s014a },

	{ .ptr = (void*)c02_s014b },

	{ .ptr = (void*)c02_s014c },

	{ .ptr = (void*)c02_s014d },

	{ .ptr = (void*)c02_s014e },

	{ .ptr = (void*)c02_s014f },

	{ .ptr = (void*)c02_s0150 },

	{ .ptr = (void*)c02_s0151 },

	{ .ptr = (void*)c02_s0152 },

	{ .ptr = (void*)c02_s0153 },

	{ .ptr = (void*)c02_s0154 },

	{ .ptr = (void*)c02_s0155 },

	{ .ptr = (void*)c02_s0156 },

	{ .ptr = (void*)c02_s0157 },

	{ .ptr = (void*)c02_s0158 },

	{ .ptr = (void*)c02_s0159 },

	{ .ptr = (void*)c02_s015a },

	{ .ptr = (void*)c02_s015b },

	{ .ptr = (void*)c02_s015c },

	{ .ptr = (void*)c02_s015d },

	{ .ptr = (void*)c02_s015e },

	{ .ptr = (void*)c02_s015f },

	{ .ptr = (void*)c02_s0160 },

};
const i1 c02_s0161[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f34_Free(i8 /* block */);

// token_destructor workspace at ws+3512 length ws+0
void f301_token_destructor(void) {

	i8 v7944 = (i8)(intptr_t)(ws+3496);
	i1 v7945 = *(i1*)(intptr_t)v7944;
	i1 v7946 = (i1)+41;
	if (v7945==v7946) goto c02_05d6; else goto c02_05d8;

c02_05d8:;

	i8 v7947 = (i8)(intptr_t)(ws+3496);
	i1 v7948 = *(i1*)(intptr_t)v7947;
	i1 v7949 = (i1)+33;
	if (v7948==v7949) goto c02_05d6; else goto c02_05d7;

c02_05d6:;

	i8 v7950 = (i8)(intptr_t)c02_s0161;
	i8 v7951 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7951)(v7950);

	i8 v7952 = (i8)(intptr_t)(ws+3504);
	i8 v7953 = *(i8*)(intptr_t)v7952;
	i8 v7954 = *(i8*)(intptr_t)v7953;
	i8 v7955 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v7955)(v7954);

c02_05d7:;

c02_05d1:;

endsub:;
}
	void f301_token_destructor(void);

// yy_destructor workspace at ws+3496 length ws+16
void f300_yy_destructor(i8 p7942 /* yypminor */, i1 p7943 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3496) = p7943; /* yymajor */
	*(i8*)(intptr_t)(ws+3504) = p7942; /* yypminor */


	i8 v7956 = (i8)(intptr_t)(ws+3496);
	i1 v7957 = *(i1*)(intptr_t)v7956;
	i1 v7958 = (i1)+0;
	if (v7957==v7958) goto c02_05df; else goto c02_05e0;

c02_05e0:;

	i8 v7959 = (i8)(intptr_t)(ws+3496);
	i1 v7960 = *(i1*)(intptr_t)v7959;
	i1 v7961 = (i1)+69;
	if (v7960<v7961) goto c02_05de; else goto c02_05df;

c02_05de:;

	i8 v7962 = (i8)(intptr_t)(f301_token_destructor);

	((void(*)(void))(intptr_t)v7962)();

c02_05df:;

c02_05d9:;

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3384 length ws+0
void f302_yy_pop_parser_stack(void) {

	i8 v7963 = (i8)(intptr_t)(ws+1568);
	i8 v7964 = *(i8*)(intptr_t)v7963;
	i8 v7965 = v7964+(-16);
	i8 v7966 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7966 = v7965;

	i8 v7967 = (i8)(intptr_t)(ws+1568);
	i8 v7968 = *(i8*)(intptr_t)v7967;
	i8 v7969 = v7968+(+2);
	i1 v7970 = *(i1*)(intptr_t)v7969;
	i8 v7971 = (i8)(intptr_t)(ws+1568);
	i8 v7972 = *(i8*)(intptr_t)v7971;
	i8 v7973 = v7972+(+8);
	i8 v7974 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7974)(v7973, v7970);

endsub:;
}
	void f302_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3384 length ws+0
void f303_yy_pop_all_parser_stack(void) {

c02_05e1:;

	i8 v7975 = (i8)(intptr_t)(ws+1568);
	i8 v7976 = *(i8*)(intptr_t)v7975;
	i8 v7977 = (i8)(intptr_t)(ws+1576);
	if (v7976==v7977) goto c02_05e6; else goto c02_05e5;

c02_05e5:;

	i8 v7978 = (i8)(intptr_t)(f302_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v7978)();

	goto c02_05e1;

c02_05e6:;

endsub:;
}
	void f303_yy_pop_all_parser_stack(void);
	void f74_StartError(void);
const i1 c02_s0162[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// yy_stack_overflow workspace at ws+3384 length ws+0
void f304_yy_stack_overflow(void) {

	i8 v7979 = (i8)(intptr_t)(f303_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v7979)();

	i8 v7980 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v7980)();

	i8 v7981 = (i8)(intptr_t)c02_s0162;
	i8 v7982 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7982)(v7981);

	i8 v7983 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v7983)();

endsub:;
}
static data f3___main_s05e7[] = {








	{ .i1 = { 0x47,0x47,0x47,0x47,0x47,0x47,0x4b,0x47}},








	{ .i1 = { 0x4d,0x4c,0x47,0x47,0x47,0x4f,0x50,0x51}},








	{ .i1 = { 0x52,0x53,0x47,0x54,0x57,0x57,0x4e,0x4e}},








	{ .i1 = { 0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e,0x4e}},








	{ .i1 = { 0x59,0x59,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x59,0x59}},








	{ .i1 = { 0x4a,0x4a,0x59,0x58,0x47,0x49,0x49,0x49}},








	{ .i1 = { 0x49,0x49,0x49,0x47,0x48,0x5b,0x5c,0x5a}},








	{ .i1 = { 0x5a,0x4a,0x47,0x47,0x5d,0x5e,0x5e,0x60}},








	{ .i1 = { 0x60,0x61,0x5f,0x62,0x62,0x63,0x47,0x6a}},








	{ .i1 = { 0x66,0x64,0x69,0x67,0x68,0x65,0x65,0x6b}},








	{ .i1 = { 0x6c,0x6c,0x6d,0x6d,0x6e,0x47,0x6f,0x70}},








	{ .i1 = { 0x72,0x74,0x74,0x73,0x47,0x75,0x77,0x77}},








	{ .i1 = { 0x78,0x47,0x79,0x7b,0x7b,0x7b,0x45,0x46}},








	{ .i1 = { 0x46,0x47,0x51,0x51,0x55,0x55,0x56,0x47}},








	{ .i1 = { 0x47,0x47,0x47,0x66,0x70,0x71,0x71,0x76}},





	{ .i1 = { 0x76,0x77,0x7a,0x7a}},
};
static data f3___main_s05e8[] = {








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x01,0x03,0x02,0x02,0x08,0x00,0x01,0x00}},








	{ .i1 = { 0x01,0x01,0x05,0x03,0x03,0x03,0x03,0x02}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x01,0x03,0x01,0x02,0x02,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x02,0x03,0x02,0x02,0x02,0x02,0x01,0x03}},








	{ .i1 = { 0x04,0x03,0x01,0x01,0x05,0x06,0x01,0x03}},








	{ .i1 = { 0x04,0x03,0x02,0x05,0x01,0x01,0x01,0x01}},








	{ .i1 = { 0x03,0x02,0x03,0x05,0x01,0x03,0x02,0x01}},








	{ .i1 = { 0x03,0x01,0x05,0x01,0x03,0x01,0x05,0x04}},








	{ .i1 = { 0x05,0x01,0x03,0x01,0x02,0x01,0x03,0x01}},








	{ .i1 = { 0x02,0x03,0x01,0x03,0x03,0x07,0x01,0x02}},








	{ .i1 = { 0x05,0x00,0x04,0x01,0x05,0x05,0x01,0x03}},








	{ .i1 = { 0x01,0x03,0x01,0x01,0x01,0x01,0x01,0x00}},








	{ .i1 = { 0x02,0x01,0x02,0x05,0x00,0x02,0x02,0x08}},








	{ .i1 = { 0x06,0x05,0x05,0x00,0x00,0x00,0x02,0x01}},





	{ .i1 = { 0x03,0x00,0x01,0x03}},
};
	void f31_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// CopyMinor workspace at ws+3384 length ws+16
void f306_CopyMinor(i8 p8008 /* dest */, i8 p8009 /* src */) {
	*(i8*)(intptr_t)(ws+3384) = p8009; /* src */
	*(i8*)(intptr_t)(ws+3392) = p8008; /* dest */

	i8 v8010 = (i8)(intptr_t)(ws+3384);
	i8 v8011 = *(i8*)(intptr_t)v8010;
	i8 v8012 = (i8)+8;
	i8 v8013 = (i8)(intptr_t)(ws+3392);
	i8 v8014 = *(i8*)(intptr_t)v8013;
	i8 v8015 = (i8)(intptr_t)(f31_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v8015)(v8014, v8012, v8011);

endsub:;
}
	void f304_yy_stack_overflow(void);
	void f306_CopyMinor(i8 /* dest */, i8 /* src */);

// Reducer workspace at ws+3384 length ws+0
void f308_Reducer(void) {

endsub:;
}
	void f159_MidReturn(i8* /* m */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3384 length ws+8
void f309_reduce_0(void) {

	i8 v8057 = (i8)(intptr_t)(f159_MidReturn);
	i8 v8058;

	((void(*)(i8* /* m */))(intptr_t)v8057)(&v8058);

	i8 v8059 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8059 = v8058;

	i8 v8060 = (i8)(intptr_t)(ws+3384);
	i8 v8061 = *(i8*)(intptr_t)v8060;
	i8 v8062 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8062)(v8061);

	i1 v8063 = (i1)+22;
	i8 v8064 = (i8)(intptr_t)(ws+3304);
	i8 v8065 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8065)(v8064, v8063);

endsub:;
}
	void f260_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3384 length ws+0
void f310_reduce_1(void) {

	i8 v8066 = (i8)(intptr_t)(ws+40);
	i8 v8067 = *(i8*)(intptr_t)v8066;
	i8 v8068 = (i8)(intptr_t)(ws+3328);
	i8 v8069 = *(i8*)(intptr_t)v8068;
	i8 v8070 = (i8)(intptr_t)(ws+3312);
	i8 v8071 = *(i8*)(intptr_t)v8070;
	i8 v8072 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v8072)(v8071, v8069, v8067);

	i1 v8073 = (i1)+6;
	i8 v8074 = (i8)(intptr_t)(ws+3320);
	i8 v8075 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8075)(v8074, v8073);

	i1 v8076 = (i1)+22;
	i8 v8077 = (i8)(intptr_t)(ws+3304);
	i8 v8078 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8078)(v8077, v8076);

endsub:;
}
	void f260_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f162_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f142_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3384 length ws+32
void f311_reduce_2(void) {

	i8 v8079 = (i8)(intptr_t)(ws+40);
	i8 v8080 = *(i8*)(intptr_t)v8079;
	i8 v8081 = (i8)(intptr_t)(ws+3344);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	i8 v8083 = (i8)(intptr_t)(ws+3328);
	i8 v8084 = *(i8*)(intptr_t)v8083;
	i8 v8085 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v8085)(v8084, v8082, v8080);

	i8 v8086 = (i8)(intptr_t)(ws+3312);
	i8 v8087 = *(i8*)(intptr_t)v8086;
	i8 v8088 = (i8)(intptr_t)(ws+3344);
	i8 v8089 = *(i8*)(intptr_t)v8088;
	i8 v8090 = *(i8*)(intptr_t)v8089;
	i8 v8091 = *(i8*)(intptr_t)v8090;
	i8 v8092 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8092)(v8091, v8087);

	i8 v8093 = (i8)(intptr_t)(ws+3312);
	i8 v8094 = *(i8*)(intptr_t)v8093;
	i8 v8095 = v8094+(+16);
	i8 v8096 = *(i8*)(intptr_t)v8095;
	i8 v8097 = v8096+(+48);
	i2 v8098 = *(i2*)(intptr_t)v8097;
	i1 v8099 = v8098;
	i8 v8100 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v8100 = v8099;

	i8 v8101 = (i8)(intptr_t)(ws+3344);
	i8 v8102 = *(i8*)(intptr_t)v8101;
	i2 v8103 = (i2)+0;
	i8 v8104 = (i8)(intptr_t)(f162_MidAddress);
	i8 v8105;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v8104)(&v8105, v8103, v8102);

	i8 v8106 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8106 = v8105;

	i8 v8107 = (i8)(intptr_t)(ws+3384);
	i1 v8108 = *(i1*)(intptr_t)v8107;
	i8 v8109 = (i8)(intptr_t)(ws+3392);
	i8 v8110 = *(i8*)(intptr_t)v8109;
	i8 v8111 = (i8)(intptr_t)(f106_MidDeref);
	i8 v8112;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8111)(&v8112, v8110, v8108);

	i8 v8113 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8113 = v8112;

	i8 v8114 = (i8)(intptr_t)(ws+3384);
	i1 v8115 = *(i1*)(intptr_t)v8114;
	i8 v8116 = (i8)(intptr_t)(ws+3312);
	i8 v8117 = *(i8*)(intptr_t)v8116;
	i8 v8118 = (i8)(intptr_t)(ws+3400);
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = (i8)(intptr_t)(f142_MidStore);
	i8 v8121;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8120)(&v8121, v8119, v8117, v8115);

	i8 v8122 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8122 = v8121;

	i8 v8123 = (i8)(intptr_t)(ws+3408);
	i8 v8124 = *(i8*)(intptr_t)v8123;
	i8 v8125 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8125)(v8124);

	i1 v8126 = (i1)+6;
	i8 v8127 = (i8)(intptr_t)(ws+3336);
	i8 v8128 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8128)(v8127, v8126);

	i1 v8129 = (i1)+2;
	i8 v8130 = (i8)(intptr_t)(ws+3320);
	i8 v8131 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8131)(v8130, v8129);

	i1 v8132 = (i1)+22;
	i8 v8133 = (i8)(intptr_t)(ws+3304);
	i8 v8134 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8134)(v8133, v8132);

endsub:;
}
const i1 c02_s0165[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f230_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s0166[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f260_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f162_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f142_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3384 length ws+40
void f312_reduce_3(void) {

	i8 v8135 = (i8)(intptr_t)(ws+3312);
	i8 v8136 = *(i8*)(intptr_t)v8135;
	i8 v8137 = v8136+(+16);
	i8 v8138 = *(i8*)(intptr_t)v8137;
	i8 v8139 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8139 = v8138;

	i8 v8140 = (i8)(intptr_t)(ws+3384);
	i8 v8141 = *(i8*)(intptr_t)v8140;
	i8 v8142 = (i8)+0;
	if (v8141==v8142) goto c02_05f7; else goto c02_05f8;

c02_05f7:;

	i8 v8143 = (i8)(intptr_t)c02_s0165;
	i8 v8144 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8144)(v8143);

c02_05f8:;

c02_05f4:;

	i8 v8145 = (i8)(intptr_t)(ws+3384);
	i8 v8146 = *(i8*)(intptr_t)v8145;
	i8 v8147 = (i8)(intptr_t)(f230_IsScalar);
	i1 v8148;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8147)(&v8148, v8146);

	i8 v8149 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v8149 = v8148;

	i8 v8150 = (i8)(intptr_t)(ws+3392);
	i1 v8151 = *(i1*)(intptr_t)v8150;
	i1 v8152 = (i1)+0;
	if (v8151==v8152) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v8153 = (i8)(intptr_t)c02_s0166;
	i8 v8154 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8154)(v8153);

c02_05fd:;

c02_05f9:;

	i8 v8155 = (i8)(intptr_t)(ws+40);
	i8 v8156 = *(i8*)(intptr_t)v8155;
	i8 v8157 = (i8)(intptr_t)(ws+3328);
	i8 v8158 = *(i8*)(intptr_t)v8157;
	i8 v8159 = (i8)(intptr_t)(ws+3384);
	i8 v8160 = *(i8*)(intptr_t)v8159;
	i8 v8161 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v8161)(v8160, v8158, v8156);

	i8 v8162 = (i8)(intptr_t)(ws+3312);
	i8 v8163 = *(i8*)(intptr_t)v8162;
	i8 v8164 = (i8)(intptr_t)(ws+3328);
	i8 v8165 = *(i8*)(intptr_t)v8164;
	i8 v8166 = *(i8*)(intptr_t)v8165;
	i8 v8167 = *(i8*)(intptr_t)v8166;
	i8 v8168 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8168)(v8167, v8163);

	i8 v8169 = (i8)(intptr_t)(ws+3312);
	i8 v8170 = *(i8*)(intptr_t)v8169;
	i8 v8171 = v8170+(+16);
	i8 v8172 = *(i8*)(intptr_t)v8171;
	i8 v8173 = v8172+(+48);
	i2 v8174 = *(i2*)(intptr_t)v8173;
	i1 v8175 = v8174;
	i8 v8176 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v8176 = v8175;

	i8 v8177 = (i8)(intptr_t)(ws+3328);
	i8 v8178 = *(i8*)(intptr_t)v8177;
	i2 v8179 = (i2)+0;
	i8 v8180 = (i8)(intptr_t)(f162_MidAddress);
	i8 v8181;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v8180)(&v8181, v8179, v8178);

	i8 v8182 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8182 = v8181;

	i8 v8183 = (i8)(intptr_t)(ws+3393);
	i1 v8184 = *(i1*)(intptr_t)v8183;
	i8 v8185 = (i8)(intptr_t)(ws+3400);
	i8 v8186 = *(i8*)(intptr_t)v8185;
	i8 v8187 = (i8)(intptr_t)(f106_MidDeref);
	i8 v8188;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8187)(&v8188, v8186, v8184);

	i8 v8189 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8189 = v8188;

	i8 v8190 = (i8)(intptr_t)(ws+3393);
	i1 v8191 = *(i1*)(intptr_t)v8190;
	i8 v8192 = (i8)(intptr_t)(ws+3312);
	i8 v8193 = *(i8*)(intptr_t)v8192;
	i8 v8194 = (i8)(intptr_t)(ws+3408);
	i8 v8195 = *(i8*)(intptr_t)v8194;
	i8 v8196 = (i8)(intptr_t)(f142_MidStore);
	i8 v8197;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8196)(&v8197, v8195, v8193, v8191);

	i8 v8198 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8198 = v8197;

	i8 v8199 = (i8)(intptr_t)(ws+3416);
	i8 v8200 = *(i8*)(intptr_t)v8199;
	i8 v8201 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8201)(v8200);

	i1 v8202 = (i1)+2;
	i8 v8203 = (i8)(intptr_t)(ws+3320);
	i8 v8204 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8204)(v8203, v8202);

	i1 v8205 = (i1)+22;
	i8 v8206 = (i8)(intptr_t)(ws+3304);
	i8 v8207 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8207)(v8206, v8205);

endsub:;
}
	void f233_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f142_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3384 length ws+48
void f313_reduce_4(void) {

	i8 v8208 = (i8)(intptr_t)(ws+3328);
	i8 v8209 = *(i8*)(intptr_t)v8208;
	i8 v8210 = v8209+(+16);
	i8 v8211 = *(i8*)(intptr_t)v8210;
	i8 v8212 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8212 = v8211;

	i8 v8213 = (i8)(intptr_t)(ws+3328);
	i8 v8214 = *(i8*)(intptr_t)v8213;
	i8 v8215 = (i8)(intptr_t)(f233_UndoLValue);
	i8 v8216;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8215)(&v8216, v8214);

	i8 v8217 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8217 = v8216;

	i8 v8218 = (i8)(intptr_t)(ws+3392);
	i8 v8219 = *(i8*)(intptr_t)v8218;
	i8 v8220 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8220 = v8219;

	i8 v8221 = (i8)(intptr_t)(ws+3312);
	i8 v8222 = *(i8*)(intptr_t)v8221;
	i8 v8223 = (i8)(intptr_t)(ws+3384);
	i8 v8224 = *(i8*)(intptr_t)v8223;
	i8 v8225 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8225)(v8224, v8222);

	i8 v8226 = (i8)(intptr_t)(ws+3384);
	i8 v8227 = *(i8*)(intptr_t)v8226;
	i8 v8228 = v8227+(+48);
	i2 v8229 = *(i2*)(intptr_t)v8228;
	i1 v8230 = v8229;
	i8 v8231 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v8231 = v8230;

	i8 v8232 = (i8)(intptr_t)(ws+3408);
	i1 v8233 = *(i1*)(intptr_t)v8232;
	i8 v8234 = (i8)(intptr_t)(ws+3400);
	i8 v8235 = *(i8*)(intptr_t)v8234;
	i8 v8236 = (i8)(intptr_t)(f106_MidDeref);
	i8 v8237;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8236)(&v8237, v8235, v8233);

	i8 v8238 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v8238 = v8237;

	i8 v8239 = (i8)(intptr_t)(ws+3408);
	i1 v8240 = *(i1*)(intptr_t)v8239;
	i8 v8241 = (i8)(intptr_t)(ws+3312);
	i8 v8242 = *(i8*)(intptr_t)v8241;
	i8 v8243 = (i8)(intptr_t)(ws+3416);
	i8 v8244 = *(i8*)(intptr_t)v8243;
	i8 v8245 = (i8)(intptr_t)(f142_MidStore);
	i8 v8246;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8245)(&v8246, v8244, v8242, v8240);

	i8 v8247 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v8247 = v8246;

	i8 v8248 = (i8)(intptr_t)(ws+3424);
	i8 v8249 = *(i8*)(intptr_t)v8248;
	i8 v8250 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8250)(v8249);

	i1 v8251 = (i1)+2;
	i8 v8252 = (i8)(intptr_t)(ws+3320);
	i8 v8253 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8253)(v8252, v8251);

	i1 v8254 = (i1)+22;
	i8 v8255 = (i8)(intptr_t)(ws+3304);
	i8 v8256 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8256)(v8255, v8254);

endsub:;
}
	void f285_TerminateNormalLoop(i8 /* ll */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3384 length ws+0
void f314_reduce_5(void) {

	i8 v8257 = (i8)(intptr_t)(ws+3328);
	i8 v8258 = *(i8*)(intptr_t)v8257;
	i8 v8259 = (i8)(intptr_t)(f285_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v8259)(v8258);

	i1 v8260 = (i1)+10;
	i8 v8261 = (i8)(intptr_t)(ws+3312);
	i8 v8262 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8262)(v8261, v8260);

	i1 v8263 = (i1)+13;
	i8 v8264 = (i8)(intptr_t)(ws+3304);
	i8 v8265 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8265)(v8264, v8263);

endsub:;
}
	void f284_BeginNormalLoop(i8* /* ll */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3384 length ws+16
void f315_reduce_6(void) {

	i8 v8266 = (i8)(intptr_t)(f284_BeginNormalLoop);
	i8 v8267;

	((void(*)(i8* /* ll */))(intptr_t)v8266)(&v8267);

	i8 v8268 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8268 = v8267;

	i8 v8269 = (i8)(intptr_t)(ws+3384);
	i8 v8270 = *(i8*)(intptr_t)v8269;
	i8 v8271 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8271 = v8270;

	i8 v8272 = (i8)(intptr_t)(ws+54);
	i2 v8273 = *(i2*)(intptr_t)v8272;
	i8 v8274 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8275;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8274)(&v8275, v8273);

	i8 v8276 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8276 = v8275;

	i8 v8277 = (i8)(intptr_t)(ws+3392);
	i8 v8278 = *(i8*)(intptr_t)v8277;
	i8 v8279 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8279)(v8278);

endsub:;
}
	void f285_TerminateNormalLoop(i8 /* ll */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3384 length ws+0
void f316_reduce_7(void) {

	i8 v8280 = (i8)(intptr_t)(ws+3328);
	i8 v8281 = *(i8*)(intptr_t)v8280;
	i8 v8282 = (i8)(intptr_t)(f285_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v8282)(v8281);

	i1 v8283 = (i1)+10;
	i8 v8284 = (i8)(intptr_t)(ws+3312);
	i8 v8285 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8285)(v8284, v8283);

	i1 v8286 = (i1)+13;
	i8 v8287 = (i8)(intptr_t)(ws+3304);
	i8 v8288 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8288)(v8287, v8286);

endsub:;
}
	void f284_BeginNormalLoop(i8* /* ll */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);

// reduce_8 workspace at ws+3384 length ws+16
void f317_reduce_8(void) {

	i8 v8289 = (i8)(intptr_t)(f284_BeginNormalLoop);
	i8 v8290;

	((void(*)(i8* /* ll */))(intptr_t)v8289)(&v8290);

	i8 v8291 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8291 = v8290;

	i8 v8292 = (i8)(intptr_t)(ws+3384);
	i8 v8293 = *(i8*)(intptr_t)v8292;
	i8 v8294 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8294 = v8293;

	i8 v8295 = (i8)(intptr_t)(ws+54);
	i2 v8296 = *(i2*)(intptr_t)v8295;
	i8 v8297 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8298;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8297)(&v8298, v8296);

	i8 v8299 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8299 = v8298;

	i8 v8300 = (i8)(intptr_t)(ws+3392);
	i8 v8301 = *(i8*)(intptr_t)v8300;
	i8 v8302 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8302)(v8301);

endsub:;
}
	void f236_AllocLabel(i2* /* label */);
	void f236_AllocLabel(i2* /* label */);
	void f258_GenerateConditional(i8 /* rootnode */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3384 length ws+6
void f318_reduce_9(void) {

	i8 v8303 = (i8)(intptr_t)(ws+3320);
	i8 v8304 = *(i8*)(intptr_t)v8303;
	i8 v8305 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8305 = v8304;

	i8 v8306 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8307;

	((void(*)(i2* /* label */))(intptr_t)v8306)(&v8307);

	i8 v8308 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v8308 = v8307;

	i8 v8309 = (i8)(intptr_t)(ws+3384);
	i2 v8310 = *(i2*)(intptr_t)v8309;
	i8 v8311 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v8311 = v8310;

	i8 v8312 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8313;

	((void(*)(i2* /* label */))(intptr_t)v8312)(&v8313);

	i8 v8314 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v8314 = v8313;

	i8 v8315 = (i8)(intptr_t)(ws+3388);
	i2 v8316 = *(i2*)(intptr_t)v8315;
	i8 v8317 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v8317 = v8316;

	i8 v8318 = (i8)(intptr_t)(ws+3386);
	i2 v8319 = *(i2*)(intptr_t)v8318;
	i8 v8320 = (i8)(intptr_t)(ws+3312);
	i8 v8321 = *(i8*)(intptr_t)v8320;
	*(i2*)(intptr_t)v8321 = v8319;

	i8 v8322 = (i8)(intptr_t)(ws+52);
	i2 v8323 = *(i2*)(intptr_t)v8322;
	i8 v8324 = (i8)(intptr_t)(ws+3312);
	i8 v8325 = *(i8*)(intptr_t)v8324;
	i8 v8326 = v8325+(+2);
	*(i2*)(intptr_t)v8326 = v8323;

	i8 v8327 = (i8)(intptr_t)(ws+3386);
	i2 v8328 = *(i2*)(intptr_t)v8327;
	i8 v8329 = (i8)(intptr_t)(ws+3312);
	i8 v8330 = *(i8*)(intptr_t)v8329;
	i8 v8331 = v8330+(+4);
	*(i2*)(intptr_t)v8331 = v8328;

	i8 v8332 = (i8)(intptr_t)(ws+3312);
	i8 v8333 = *(i8*)(intptr_t)v8332;
	i8 v8334 = (i8)(intptr_t)(f258_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v8334)(v8333);

	i8 v8335 = (i8)(intptr_t)(ws+52);
	i2 v8336 = *(i2*)(intptr_t)v8335;
	i8 v8337 = (i8)(intptr_t)(ws+3296);
	i8 v8338 = *(i8*)(intptr_t)v8337;
	i8 v8339 = v8338+(+2);
	*(i2*)(intptr_t)v8339 = v8336;

	i1 v8340 = (i1)+13;
	i8 v8341 = (i8)(intptr_t)(ws+3304);
	i8 v8342 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8342)(v8341, v8340);

endsub:;
}
const i1 c02_s0167[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f76_SimpleError(i8 /* message */);
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3384 length ws+8
void f319_reduce_10(void) {

	i8 v8343 = (i8)(intptr_t)(ws+52);
	i2 v8344 = *(i2*)(intptr_t)v8343;
	i2 v8345 = (i2)+0;
	if (v8344==v8345) goto c02_0601; else goto c02_0602;

c02_0601:;

	i8 v8346 = (i8)(intptr_t)c02_s0167;
	i8 v8347 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8347)(v8346);

c02_0602:;

c02_05fe:;

	i8 v8348 = (i8)(intptr_t)(ws+52);
	i2 v8349 = *(i2*)(intptr_t)v8348;
	i8 v8350 = (i8)(intptr_t)(f132_MidJump);
	i8 v8351;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8350)(&v8351, v8349);

	i8 v8352 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8352 = v8351;

	i8 v8353 = (i8)(intptr_t)(ws+3384);
	i8 v8354 = *(i8*)(intptr_t)v8353;
	i8 v8355 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8355)(v8354);

	i1 v8356 = (i1)+22;
	i8 v8357 = (i8)(intptr_t)(ws+3304);
	i8 v8358 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8358)(v8357, v8356);

endsub:;
}
const i1 c02_s0168[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f76_SimpleError(i8 /* message */);
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3384 length ws+8
void f320_reduce_11(void) {

	i8 v8359 = (i8)(intptr_t)(ws+54);
	i2 v8360 = *(i2*)(intptr_t)v8359;
	i2 v8361 = (i2)+0;
	if (v8360==v8361) goto c02_0606; else goto c02_0607;

c02_0606:;

	i8 v8362 = (i8)(intptr_t)c02_s0168;
	i8 v8363 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8363)(v8362);

c02_0607:;

c02_0603:;

	i8 v8364 = (i8)(intptr_t)(ws+54);
	i2 v8365 = *(i2*)(intptr_t)v8364;
	i8 v8366 = (i8)(intptr_t)(f132_MidJump);
	i8 v8367;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8366)(&v8367, v8365);

	i8 v8368 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8368 = v8367;

	i8 v8369 = (i8)(intptr_t)(ws+3384);
	i8 v8370 = *(i8*)(intptr_t)v8369;
	i8 v8371 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8371)(v8370);

	i1 v8372 = (i1)+22;
	i8 v8373 = (i8)(intptr_t)(ws+3304);
	i8 v8374 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8374)(v8373, v8372);

endsub:;
}
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_12 workspace at ws+3384 length ws+16
void f321_reduce_12(void) {

	i8 v8375 = (i8)(intptr_t)(ws+56);
	i8 v8376 = *(i8*)(intptr_t)v8375;
	i2 v8377 = *(i2*)(intptr_t)v8376;
	i8 v8378 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8379;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8378)(&v8379, v8377);

	i8 v8380 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8380 = v8379;

	i8 v8381 = (i8)(intptr_t)(ws+3384);
	i8 v8382 = *(i8*)(intptr_t)v8381;
	i8 v8383 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8383)(v8382);

	i8 v8384 = (i8)(intptr_t)(ws+56);
	i8 v8385 = *(i8*)(intptr_t)v8384;
	i8 v8386 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8386 = v8385;

	i8 v8387 = (i8)(intptr_t)(ws+56);
	i8 v8388 = *(i8*)(intptr_t)v8387;
	i8 v8389 = v8388+(+8);
	i8 v8390 = *(i8*)(intptr_t)v8389;
	i8 v8391 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v8391 = v8390;

	i8 v8392 = (i8)(intptr_t)(ws+3392);
	i8 v8393 = *(i8*)(intptr_t)v8392;
	i8 v8394 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8394)(v8393);

	i1 v8395 = (i1)+26;
	i8 v8396 = (i8)(intptr_t)(ws+3336);
	i8 v8397 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8397)(v8396, v8395);

	i1 v8398 = (i1)+10;
	i8 v8399 = (i8)(intptr_t)(ws+3312);
	i8 v8400 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8400)(v8399, v8398);

	i1 v8401 = (i1)+12;
	i8 v8402 = (i8)(intptr_t)(ws+3304);
	i8 v8403 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8403)(v8402, v8401);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_AllocLabel(i2* /* label */);

// reduce_13 workspace at ws+3384 length ws+18
void f322_reduce_13(void) {

	i8 v8404 = (i8)+16;
	i8 v8405 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v8406;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v8405)(&v8406, v8404);

	i8 v8407 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8407 = v8406;

	i8 v8408 = (i8)(intptr_t)(ws+3384);
	i8 v8409 = *(i8*)(intptr_t)v8408;
	i8 v8410 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8410 = v8409;

	i8 v8411 = (i8)(intptr_t)(ws+56);
	i8 v8412 = *(i8*)(intptr_t)v8411;
	i8 v8413 = (i8)(intptr_t)(ws+3392);
	i8 v8414 = *(i8*)(intptr_t)v8413;
	i8 v8415 = v8414+(+8);
	*(i8*)(intptr_t)v8415 = v8412;

	i8 v8416 = (i8)(intptr_t)(ws+3392);
	i8 v8417 = *(i8*)(intptr_t)v8416;
	i8 v8418 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v8418 = v8417;

	i8 v8419 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8420;

	((void(*)(i2* /* label */))(intptr_t)v8419)(&v8420);

	i8 v8421 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8421 = v8420;

	i8 v8422 = (i8)(intptr_t)(ws+3400);
	i2 v8423 = *(i2*)(intptr_t)v8422;
	i8 v8424 = (i8)(intptr_t)(ws+56);
	i8 v8425 = *(i8*)(intptr_t)v8424;
	*(i2*)(intptr_t)v8425 = v8423;

endsub:;
}
	void f236_AllocLabel(i2* /* label */);
	void f236_AllocLabel(i2* /* label */);
	void f258_GenerateConditional(i8 /* rootnode */);

// reduce_14 workspace at ws+3384 length ws+8
void f323_reduce_14(void) {

	i8 v8426 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8427;

	((void(*)(i2* /* label */))(intptr_t)v8426)(&v8427);

	i8 v8428 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v8428 = v8427;

	i8 v8429 = (i8)(intptr_t)(ws+3384);
	i2 v8430 = *(i2*)(intptr_t)v8429;
	i8 v8431 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v8431 = v8430;

	i8 v8432 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8433;

	((void(*)(i2* /* label */))(intptr_t)v8432)(&v8433);

	i8 v8434 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v8434 = v8433;

	i8 v8435 = (i8)(intptr_t)(ws+3388);
	i2 v8436 = *(i2*)(intptr_t)v8435;
	i8 v8437 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v8437 = v8436;

	i8 v8438 = (i8)(intptr_t)(ws+3386);
	i2 v8439 = *(i2*)(intptr_t)v8438;
	i8 v8440 = (i8)(intptr_t)(ws+56);
	i8 v8441 = *(i8*)(intptr_t)v8440;
	i8 v8442 = v8441+(+2);
	*(i2*)(intptr_t)v8442 = v8439;

	i8 v8443 = (i8)(intptr_t)(ws+3390);
	i2 v8444 = *(i2*)(intptr_t)v8443;
	i8 v8445 = (i8)(intptr_t)(ws+56);
	i8 v8446 = *(i8*)(intptr_t)v8445;
	i8 v8447 = v8446+(+4);
	*(i2*)(intptr_t)v8447 = v8444;

	i8 v8448 = (i8)(intptr_t)(ws+3386);
	i2 v8449 = *(i2*)(intptr_t)v8448;
	i8 v8450 = (i8)(intptr_t)(ws+3304);
	i8 v8451 = *(i8*)(intptr_t)v8450;
	*(i2*)(intptr_t)v8451 = v8449;

	i8 v8452 = (i8)(intptr_t)(ws+3390);
	i2 v8453 = *(i2*)(intptr_t)v8452;
	i8 v8454 = (i8)(intptr_t)(ws+3304);
	i8 v8455 = *(i8*)(intptr_t)v8454;
	i8 v8456 = v8455+(+2);
	*(i2*)(intptr_t)v8456 = v8453;

	i8 v8457 = (i8)(intptr_t)(ws+3386);
	i2 v8458 = *(i2*)(intptr_t)v8457;
	i8 v8459 = (i8)(intptr_t)(ws+3304);
	i8 v8460 = *(i8*)(intptr_t)v8459;
	i8 v8461 = v8460+(+4);
	*(i2*)(intptr_t)v8461 = v8458;

	i8 v8462 = (i8)(intptr_t)(ws+3304);
	i8 v8463 = *(i8*)(intptr_t)v8462;
	i8 v8464 = (i8)(intptr_t)(f258_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v8464)(v8463);

endsub:;
}
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);

// reduce_15 workspace at ws+3384 length ws+8
void f324_reduce_15(void) {

	i8 v8465 = (i8)(intptr_t)(ws+56);
	i8 v8466 = *(i8*)(intptr_t)v8465;
	i8 v8467 = v8466+(+4);
	i2 v8468 = *(i2*)(intptr_t)v8467;
	i8 v8469 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8470;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8469)(&v8470, v8468);

	i8 v8471 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8471 = v8470;

	i8 v8472 = (i8)(intptr_t)(ws+3384);
	i8 v8473 = *(i8*)(intptr_t)v8472;
	i8 v8474 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8474)(v8473);

endsub:;
}
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);

// reduce_16 workspace at ws+3384 length ws+16
void f325_reduce_16(void) {

	i8 v8475 = (i8)(intptr_t)(ws+56);
	i8 v8476 = *(i8*)(intptr_t)v8475;
	i2 v8477 = *(i2*)(intptr_t)v8476;
	i8 v8478 = (i8)(intptr_t)(f132_MidJump);
	i8 v8479;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8478)(&v8479, v8477);

	i8 v8480 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8480 = v8479;

	i8 v8481 = (i8)(intptr_t)(ws+3384);
	i8 v8482 = *(i8*)(intptr_t)v8481;
	i8 v8483 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8483)(v8482);

	i8 v8484 = (i8)(intptr_t)(ws+56);
	i8 v8485 = *(i8*)(intptr_t)v8484;
	i8 v8486 = v8485+(+4);
	i2 v8487 = *(i2*)(intptr_t)v8486;
	i8 v8488 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8489;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8488)(&v8489, v8487);

	i8 v8490 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8490 = v8489;

	i8 v8491 = (i8)(intptr_t)(ws+3392);
	i8 v8492 = *(i8*)(intptr_t)v8491;
	i8 v8493 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8493)(v8492);

endsub:;
}
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);

// reduce_17 workspace at ws+3384 length ws+16
void f326_reduce_17(void) {

	i8 v8494 = (i8)(intptr_t)(ws+56);
	i8 v8495 = *(i8*)(intptr_t)v8494;
	i2 v8496 = *(i2*)(intptr_t)v8495;
	i8 v8497 = (i8)(intptr_t)(f132_MidJump);
	i8 v8498;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8497)(&v8498, v8496);

	i8 v8499 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8499 = v8498;

	i8 v8500 = (i8)(intptr_t)(ws+3384);
	i8 v8501 = *(i8*)(intptr_t)v8500;
	i8 v8502 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8502)(v8501);

	i8 v8503 = (i8)(intptr_t)(ws+56);
	i8 v8504 = *(i8*)(intptr_t)v8503;
	i8 v8505 = v8504+(+4);
	i2 v8506 = *(i2*)(intptr_t)v8505;
	i8 v8507 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8508;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8507)(&v8508, v8506);

	i8 v8509 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8509 = v8508;

	i8 v8510 = (i8)(intptr_t)(ws+3392);
	i8 v8511 = *(i8*)(intptr_t)v8510;
	i8 v8512 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8512)(v8511);

endsub:;
}
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f114_MidEndcase(i8* /* m */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3384 length ws+32
void f327_reduce_18(void) {

	i8 v8513 = (i8)(intptr_t)(ws+64);
	i8 v8514 = *(i8*)(intptr_t)v8513;
	i8 v8515 = v8514+(+17);
	i1 v8516 = *(i1*)(intptr_t)v8515;
	i1 v8517 = (i1)+0;
	if (v8516==v8517) goto c02_060f; else goto c02_060e;

c02_060f:;

	i8 v8518 = (i8)(intptr_t)(ws+64);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	i2 v8520 = *(i2*)(intptr_t)v8519;
	i2 v8521 = (i2)+0;
	if (v8520==v8521) goto c02_060e; else goto c02_060d;

c02_060d:;

	i8 v8522 = (i8)(intptr_t)(ws+64);
	i8 v8523 = *(i8*)(intptr_t)v8522;
	i2 v8524 = *(i2*)(intptr_t)v8523;
	i8 v8525 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8526;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8525)(&v8526, v8524);

	i8 v8527 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8527 = v8526;

	i8 v8528 = (i8)(intptr_t)(ws+3384);
	i8 v8529 = *(i8*)(intptr_t)v8528;
	i8 v8530 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8530)(v8529);

c02_060e:;

c02_0608:;

	i8 v8531 = (i8)(intptr_t)(ws+64);
	i8 v8532 = *(i8*)(intptr_t)v8531;
	i8 v8533 = v8532+(+2);
	i2 v8534 = *(i2*)(intptr_t)v8533;
	i8 v8535 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8536;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8535)(&v8536, v8534);

	i8 v8537 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8537 = v8536;

	i8 v8538 = (i8)(intptr_t)(ws+3392);
	i8 v8539 = *(i8*)(intptr_t)v8538;
	i8 v8540 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8540)(v8539);

	i8 v8541 = (i8)(intptr_t)(ws+64);
	i8 v8542 = *(i8*)(intptr_t)v8541;
	i8 v8543 = v8542+(+16);
	i1 v8544 = *(i1*)(intptr_t)v8543;
	i8 v8545 = (i8)(intptr_t)(f114_MidEndcase);
	i8 v8546;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v8545)(&v8546, v8544);

	i8 v8547 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v8547 = v8546;

	i8 v8548 = (i8)(intptr_t)(ws+3400);
	i8 v8549 = *(i8*)(intptr_t)v8548;
	i8 v8550 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8550)(v8549);

	i8 v8551 = (i8)(intptr_t)(ws+64);
	i8 v8552 = *(i8*)(intptr_t)v8551;
	i8 v8553 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8553 = v8552;

	i8 v8554 = (i8)(intptr_t)(ws+3408);
	i8 v8555 = *(i8*)(intptr_t)v8554;
	i8 v8556 = v8555+(+8);
	i8 v8557 = *(i8*)(intptr_t)v8556;
	i8 v8558 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8558 = v8557;

	i8 v8559 = (i8)(intptr_t)(ws+3408);
	i8 v8560 = *(i8*)(intptr_t)v8559;
	i8 v8561 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v8561)(v8560);

	i1 v8562 = (i1)+10;
	i8 v8563 = (i8)(intptr_t)(ws+3320);
	i8 v8564 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8564)(v8563, v8562);

	i1 v8565 = (i1)+64;
	i8 v8566 = (i8)(intptr_t)(ws+3312);
	i8 v8567 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8567)(v8566, v8565);

	i1 v8568 = (i1)+22;
	i8 v8569 = (i8)(intptr_t)(ws+3304);
	i8 v8570 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8570)(v8569, v8568);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_AllocLabel(i2* /* label */);
	void f228_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0169[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f126_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3384 length ws+32
void f328_reduce_19(void) {

	i8 v8571 = (i8)+18;
	i8 v8572 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v8573;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v8572)(&v8573, v8571);

	i8 v8574 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8574 = v8573;

	i8 v8575 = (i8)(intptr_t)(ws+3384);
	i8 v8576 = *(i8*)(intptr_t)v8575;
	i8 v8577 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8577 = v8576;

	i8 v8578 = (i8)(intptr_t)(ws+64);
	i8 v8579 = *(i8*)(intptr_t)v8578;
	i8 v8580 = (i8)(intptr_t)(ws+3392);
	i8 v8581 = *(i8*)(intptr_t)v8580;
	i8 v8582 = v8581+(+8);
	*(i8*)(intptr_t)v8582 = v8579;

	i8 v8583 = (i8)(intptr_t)(ws+52);
	i2 v8584 = *(i2*)(intptr_t)v8583;
	i8 v8585 = (i8)(intptr_t)(ws+3392);
	i8 v8586 = *(i8*)(intptr_t)v8585;
	i8 v8587 = v8586+(+4);
	*(i2*)(intptr_t)v8587 = v8584;

	i8 v8588 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8589;

	((void(*)(i2* /* label */))(intptr_t)v8588)(&v8589);

	i8 v8590 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8590 = v8589;

	i8 v8591 = (i8)(intptr_t)(ws+3400);
	i2 v8592 = *(i2*)(intptr_t)v8591;
	i8 v8593 = (i8)(intptr_t)(ws+3392);
	i8 v8594 = *(i8*)(intptr_t)v8593;
	i8 v8595 = v8594+(+2);
	*(i2*)(intptr_t)v8595 = v8592;

	i8 v8596 = (i8)(intptr_t)(ws+3392);
	i8 v8597 = *(i8*)(intptr_t)v8596;
	i8 v8598 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v8598 = v8597;

	i8 v8599 = (i8)(intptr_t)(ws+3312);
	i8 v8600 = *(i8*)(intptr_t)v8599;
	i8 v8601 = v8600+(+16);
	i8 v8602 = *(i8*)(intptr_t)v8601;
	i8 v8603 = (i8)(intptr_t)(f228_IsNum);
	i1 v8604;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8603)(&v8604, v8602);

	i8 v8605 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v8605 = v8604;

	i8 v8606 = (i8)(intptr_t)(ws+3402);
	i1 v8607 = *(i1*)(intptr_t)v8606;
	i1 v8608 = (i1)+0;
	if (v8607==v8608) goto c02_0613; else goto c02_0614;

c02_0613:;

	i8 v8609 = (i8)(intptr_t)c02_s0169;
	i8 v8610 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8610)(v8609);

c02_0614:;

c02_0610:;

	i8 v8611 = (i8)(intptr_t)(ws+3312);
	i8 v8612 = *(i8*)(intptr_t)v8611;
	i8 v8613 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v8614;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v8613)(&v8614, v8612);

	i8 v8615 = (i8)(intptr_t)(ws+3403);
	*(i1*)(intptr_t)v8615 = v8614;

	i8 v8616 = (i8)(intptr_t)(ws+3403);
	i1 v8617 = *(i1*)(intptr_t)v8616;
	i8 v8618 = (i8)(intptr_t)(ws+3392);
	i8 v8619 = *(i8*)(intptr_t)v8618;
	i8 v8620 = v8619+(+16);
	*(i1*)(intptr_t)v8620 = v8617;

	i8 v8621 = (i8)(intptr_t)(ws+3392);
	i8 v8622 = *(i8*)(intptr_t)v8621;
	i8 v8623 = v8622+(+16);
	i1 v8624 = *(i1*)(intptr_t)v8623;
	i8 v8625 = (i8)(intptr_t)(ws+3312);
	i8 v8626 = *(i8*)(intptr_t)v8625;
	i8 v8627 = (i8)(intptr_t)(f126_MidStartcase);
	i8 v8628;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8627)(&v8628, v8626, v8624);

	i8 v8629 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8629 = v8628;

	i8 v8630 = (i8)(intptr_t)(ws+3408);
	i8 v8631 = *(i8*)(intptr_t)v8630;
	i8 v8632 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8632)(v8631);

	i1 v8633 = (i1)+65;
	i8 v8634 = (i8)(intptr_t)(ws+3304);
	i8 v8635 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8635)(v8634, v8633);

endsub:;
}
const i1 c02_s016a[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f76_SimpleError(i8 /* message */);
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f236_AllocLabel(i2* /* label */);
	void f116_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_20 workspace at ws+3384 length ws+32
void f329_reduce_20(void) {

	i8 v8636 = (i8)(intptr_t)(ws+64);
	i8 v8637 = *(i8*)(intptr_t)v8636;
	i8 v8638 = v8637+(+17);
	i1 v8639 = *(i1*)(intptr_t)v8638;
	i1 v8640 = (i1)+0;
	if (v8639==v8640) goto c02_0619; else goto c02_0618;

c02_0618:;

	i8 v8641 = (i8)(intptr_t)c02_s016a;
	i8 v8642 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8642)(v8641);

c02_0619:;

c02_0615:;

	i8 v8643 = (i8)(intptr_t)(ws+64);
	i8 v8644 = *(i8*)(intptr_t)v8643;
	i2 v8645 = *(i2*)(intptr_t)v8644;
	i2 v8646 = (i2)+0;
	if (v8645==v8646) goto c02_061e; else goto c02_061d;

c02_061d:;

	i8 v8647 = (i8)(intptr_t)(ws+64);
	i8 v8648 = *(i8*)(intptr_t)v8647;
	i8 v8649 = v8648+(+2);
	i2 v8650 = *(i2*)(intptr_t)v8649;
	i8 v8651 = (i8)(intptr_t)(f132_MidJump);
	i8 v8652;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8651)(&v8652, v8650);

	i8 v8653 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8653 = v8652;

	i8 v8654 = (i8)(intptr_t)(ws+3384);
	i8 v8655 = *(i8*)(intptr_t)v8654;
	i8 v8656 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8656)(v8655);

	i8 v8657 = (i8)(intptr_t)(ws+64);
	i8 v8658 = *(i8*)(intptr_t)v8657;
	i2 v8659 = *(i2*)(intptr_t)v8658;
	i8 v8660 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8661;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8660)(&v8661, v8659);

	i8 v8662 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8662 = v8661;

	i8 v8663 = (i8)(intptr_t)(ws+3392);
	i8 v8664 = *(i8*)(intptr_t)v8663;
	i8 v8665 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8665)(v8664);

c02_061e:;

c02_061a:;

	i8 v8666 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v8667;

	((void(*)(i2* /* label */))(intptr_t)v8666)(&v8667);

	i8 v8668 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v8668 = v8667;

	i8 v8669 = (i8)(intptr_t)(ws+3400);
	i2 v8670 = *(i2*)(intptr_t)v8669;
	i8 v8671 = (i8)(intptr_t)(ws+64);
	i8 v8672 = *(i8*)(intptr_t)v8671;
	*(i2*)(intptr_t)v8672 = v8670;

	i8 v8673 = (i8)(intptr_t)(ws+64);
	i8 v8674 = *(i8*)(intptr_t)v8673;
	i8 v8675 = v8674+(+16);
	i1 v8676 = *(i1*)(intptr_t)v8675;
	i8 v8677 = (i8)(intptr_t)(ws+3312);
	i4 v8678 = *(i4*)(intptr_t)v8677;
	i8 v8679 = (i8)(intptr_t)(ws+64);
	i8 v8680 = *(i8*)(intptr_t)v8679;
	i2 v8681 = *(i2*)(intptr_t)v8680;
	i8 v8682 = (i8)(intptr_t)(f116_MidWhencase);
	i8 v8683;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v8682)(&v8683, v8681, v8678, v8676);

	i8 v8684 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v8684 = v8683;

	i8 v8685 = (i8)(intptr_t)(ws+3408);
	i8 v8686 = *(i8*)(intptr_t)v8685;
	i8 v8687 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8687)(v8686);

	i1 v8688 = (i1)+6;
	i8 v8689 = (i8)(intptr_t)(ws+3304);
	i8 v8690 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8690)(v8689, v8688);

endsub:;
}
const i1 c02_s016b[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f132_MidJump(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f120_MidLabel(i8* /* m */, i2 /* label */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3384 length ws+16
void f330_reduce_21(void) {

	i8 v8691 = (i8)(intptr_t)(ws+64);
	i8 v8692 = *(i8*)(intptr_t)v8691;
	i8 v8693 = v8692+(+17);
	i1 v8694 = *(i1*)(intptr_t)v8693;
	i1 v8695 = (i1)+0;
	if (v8694==v8695) goto c02_0623; else goto c02_0622;

c02_0622:;

	i8 v8696 = (i8)(intptr_t)c02_s016b;
	i8 v8697 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8697)(v8696);

c02_0623:;

c02_061f:;

	i8 v8698 = (i8)(intptr_t)(ws+64);
	i8 v8699 = *(i8*)(intptr_t)v8698;
	i2 v8700 = *(i2*)(intptr_t)v8699;
	i2 v8701 = (i2)+0;
	if (v8700==v8701) goto c02_0628; else goto c02_0627;

c02_0627:;

	i8 v8702 = (i8)(intptr_t)(ws+64);
	i8 v8703 = *(i8*)(intptr_t)v8702;
	i8 v8704 = v8703+(+2);
	i2 v8705 = *(i2*)(intptr_t)v8704;
	i8 v8706 = (i8)(intptr_t)(f132_MidJump);
	i8 v8707;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8706)(&v8707, v8705);

	i8 v8708 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8708 = v8707;

	i8 v8709 = (i8)(intptr_t)(ws+3384);
	i8 v8710 = *(i8*)(intptr_t)v8709;
	i8 v8711 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8711)(v8710);

	i8 v8712 = (i8)(intptr_t)(ws+64);
	i8 v8713 = *(i8*)(intptr_t)v8712;
	i2 v8714 = *(i2*)(intptr_t)v8713;
	i8 v8715 = (i8)(intptr_t)(f120_MidLabel);
	i8 v8716;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8715)(&v8716, v8714);

	i8 v8717 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v8717 = v8716;

	i8 v8718 = (i8)(intptr_t)(ws+3392);
	i8 v8719 = *(i8*)(intptr_t)v8718;
	i8 v8720 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8720)(v8719);

c02_0628:;

c02_0624:;

	i2 v8721 = (i2)+0;
	i8 v8722 = (i8)(intptr_t)(ws+64);
	i8 v8723 = *(i8*)(intptr_t)v8722;
	*(i2*)(intptr_t)v8723 = v8721;

	i1 v8724 = (i1)+1;
	i8 v8725 = (i8)(intptr_t)(ws+64);
	i8 v8726 = *(i8*)(intptr_t)v8725;
	i8 v8727 = v8726+(+17);
	*(i1*)(intptr_t)v8727 = v8724;

	i1 v8728 = (i1)+9;
	i8 v8729 = (i8)(intptr_t)(ws+3312);
	i8 v8730 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8730)(v8729, v8728);

	i1 v8731 = (i1)+6;
	i8 v8732 = (i8)(intptr_t)(ws+3304);
	i8 v8733 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8733)(v8732, v8731);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_22 workspace at ws+3384 length ws+0
void f331_reduce_22(void) {

	i8 v8734 = (i8)(intptr_t)(ws+3312);
	i8 v8735 = *(i8*)(intptr_t)v8734;
	i8 v8736 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8736 = v8735;

	i1 v8737 = (i1)+4;
	i8 v8738 = (i8)(intptr_t)(ws+3304);
	i8 v8739 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8739)(v8738, v8737);

endsub:;
}
	void f286_Negate(i8 /* node */);

// reduce_23 workspace at ws+3384 length ws+0
void f332_reduce_23(void) {

	i8 v8740 = (i8)(intptr_t)(ws+3304);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8742 = v8741;

	i8 v8743 = (i8)(intptr_t)(ws+3304);
	i8 v8744 = *(i8*)(intptr_t)v8743;
	i8 v8745 = (i8)(intptr_t)(f286_Negate);

	((void(*)(i8 /* node */))(intptr_t)v8745)(v8744);

endsub:;
}
	void f115_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3384 length ws+8
void f333_reduce_24(void) {

	i8 v8746 = (i8)(intptr_t)(ws+3320);
	i8 v8747 = *(i8*)(intptr_t)v8746;
	i8 v8748 = (i8)(intptr_t)(ws+3304);
	i8 v8749 = *(i8*)(intptr_t)v8748;
	i2 v8750 = (i2)+0;
	i2 v8751 = (i2)+0;
	i2 v8752 = (i2)+0;
	i1 v8753 = (i1)+0;
	i8 v8754 = (i8)(intptr_t)(f115_MidBand);
	i8 v8755;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v8754)(&v8755, v8753, v8752, v8751, v8750, v8749, v8747);

	i8 v8756 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8756 = v8755;

	i8 v8757 = (i8)(intptr_t)(ws+3384);
	i8 v8758 = *(i8*)(intptr_t)v8757;
	i8 v8759 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8759 = v8758;

	i1 v8760 = (i1)+46;
	i8 v8761 = (i8)(intptr_t)(ws+3312);
	i8 v8762 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8762)(v8761, v8760);

endsub:;
}
	void f151_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3384 length ws+8
void f334_reduce_25(void) {

	i8 v8763 = (i8)(intptr_t)(ws+3320);
	i8 v8764 = *(i8*)(intptr_t)v8763;
	i8 v8765 = (i8)(intptr_t)(ws+3304);
	i8 v8766 = *(i8*)(intptr_t)v8765;
	i2 v8767 = (i2)+0;
	i2 v8768 = (i2)+0;
	i2 v8769 = (i2)+0;
	i1 v8770 = (i1)+0;
	i8 v8771 = (i8)(intptr_t)(f151_MidBor);
	i8 v8772;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v8771)(&v8772, v8770, v8769, v8768, v8767, v8766, v8764);

	i8 v8773 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8773 = v8772;

	i8 v8774 = (i8)(intptr_t)(ws+3384);
	i8 v8775 = *(i8*)(intptr_t)v8774;
	i8 v8776 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8776 = v8775;

	i1 v8777 = (i1)+47;
	i8 v8778 = (i8)(intptr_t)(ws+3312);
	i8 v8779 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8779)(v8778, v8777);

endsub:;
}
	void f287_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3384 length ws+8
void f335_reduce_26(void) {

	i8 v8780 = (i8)(intptr_t)(ws+3320);
	i8 v8781 = *(i8*)(intptr_t)v8780;
	i8 v8782 = (i8)(intptr_t)(ws+3304);
	i8 v8783 = *(i8*)(intptr_t)v8782;
	i1 v8784 = (i1)+0;
	i8 v8785 = (i8)(intptr_t)(f287_ConditionalEq);
	i8 v8786;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8785)(&v8786, v8784, v8783, v8781);

	i8 v8787 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8787 = v8786;

	i8 v8788 = (i8)(intptr_t)(ws+3384);
	i8 v8789 = *(i8*)(intptr_t)v8788;
	i8 v8790 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8790 = v8789;

	i1 v8791 = (i1)+54;
	i8 v8792 = (i8)(intptr_t)(ws+3312);
	i8 v8793 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8793)(v8792, v8791);

endsub:;
}
	void f287_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3384 length ws+8
void f336_reduce_27(void) {

	i8 v8794 = (i8)(intptr_t)(ws+3320);
	i8 v8795 = *(i8*)(intptr_t)v8794;
	i8 v8796 = (i8)(intptr_t)(ws+3304);
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i1 v8798 = (i1)+1;
	i8 v8799 = (i8)(intptr_t)(f287_ConditionalEq);
	i8 v8800;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8799)(&v8800, v8798, v8797, v8795);

	i8 v8801 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8801 = v8800;

	i8 v8802 = (i8)(intptr_t)(ws+3384);
	i8 v8803 = *(i8*)(intptr_t)v8802;
	i8 v8804 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8804 = v8803;

	i1 v8805 = (i1)+55;
	i8 v8806 = (i8)(intptr_t)(ws+3312);
	i8 v8807 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8807)(v8806, v8805);

endsub:;
}
	void f288_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3384 length ws+8
void f337_reduce_28(void) {

	i8 v8808 = (i8)(intptr_t)(ws+3320);
	i8 v8809 = *(i8*)(intptr_t)v8808;
	i8 v8810 = (i8)(intptr_t)(ws+3304);
	i8 v8811 = *(i8*)(intptr_t)v8810;
	i1 v8812 = (i1)+0;
	i8 v8813 = (i8)(intptr_t)(f288_ConditionalLt);
	i8 v8814;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8813)(&v8814, v8812, v8811, v8809);

	i8 v8815 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8815 = v8814;

	i8 v8816 = (i8)(intptr_t)(ws+3384);
	i8 v8817 = *(i8*)(intptr_t)v8816;
	i8 v8818 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8818 = v8817;

	i1 v8819 = (i1)+50;
	i8 v8820 = (i8)(intptr_t)(ws+3312);
	i8 v8821 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8821)(v8820, v8819);

endsub:;
}
	void f288_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_29 workspace at ws+3384 length ws+8
void f338_reduce_29(void) {

	i8 v8822 = (i8)(intptr_t)(ws+3320);
	i8 v8823 = *(i8*)(intptr_t)v8822;
	i8 v8824 = (i8)(intptr_t)(ws+3304);
	i8 v8825 = *(i8*)(intptr_t)v8824;
	i1 v8826 = (i1)+1;
	i8 v8827 = (i8)(intptr_t)(f288_ConditionalLt);
	i8 v8828;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8827)(&v8828, v8826, v8825, v8823);

	i8 v8829 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8829 = v8828;

	i8 v8830 = (i8)(intptr_t)(ws+3384);
	i8 v8831 = *(i8*)(intptr_t)v8830;
	i8 v8832 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8832 = v8831;

	i1 v8833 = (i1)+53;
	i8 v8834 = (i8)(intptr_t)(ws+3312);
	i8 v8835 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8835)(v8834, v8833);

endsub:;
}
	void f288_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3384 length ws+8
void f339_reduce_30(void) {

	i8 v8836 = (i8)(intptr_t)(ws+3304);
	i8 v8837 = *(i8*)(intptr_t)v8836;
	i8 v8838 = (i8)(intptr_t)(ws+3320);
	i8 v8839 = *(i8*)(intptr_t)v8838;
	i1 v8840 = (i1)+0;
	i8 v8841 = (i8)(intptr_t)(f288_ConditionalLt);
	i8 v8842;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8841)(&v8842, v8840, v8839, v8837);

	i8 v8843 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8843 = v8842;

	i8 v8844 = (i8)(intptr_t)(ws+3384);
	i8 v8845 = *(i8*)(intptr_t)v8844;
	i8 v8846 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8846 = v8845;

	i1 v8847 = (i1)+52;
	i8 v8848 = (i8)(intptr_t)(ws+3312);
	i8 v8849 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8849)(v8848, v8847);

endsub:;
}
	void f288_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_31 workspace at ws+3384 length ws+8
void f340_reduce_31(void) {

	i8 v8850 = (i8)(intptr_t)(ws+3304);
	i8 v8851 = *(i8*)(intptr_t)v8850;
	i8 v8852 = (i8)(intptr_t)(ws+3320);
	i8 v8853 = *(i8*)(intptr_t)v8852;
	i1 v8854 = (i1)+1;
	i8 v8855 = (i8)(intptr_t)(f288_ConditionalLt);
	i8 v8856;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8855)(&v8856, v8854, v8853, v8851);

	i8 v8857 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8857 = v8856;

	i8 v8858 = (i8)(intptr_t)(ws+3384);
	i8 v8859 = *(i8*)(intptr_t)v8858;
	i8 v8860 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8860 = v8859;

	i1 v8861 = (i1)+51;
	i8 v8862 = (i8)(intptr_t)(ws+3312);
	i8 v8863 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8863)(v8862, v8861);

endsub:;
}
	void f113_MidConstant(i8* /* m */, i4 /* value */);

// reduce_32 workspace at ws+3384 length ws+8
void f341_reduce_32(void) {

	i8 v8864 = (i8)(intptr_t)(ws+3304);
	i4 v8865 = *(i4*)(intptr_t)v8864;
	i8 v8866 = (i8)(intptr_t)(f113_MidConstant);
	i8 v8867;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8866)(&v8867, v8865);

	i8 v8868 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8868 = v8867;

	i8 v8869 = (i8)(intptr_t)(ws+3384);
	i8 v8870 = *(i8*)(intptr_t)v8869;
	i8 v8871 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8871 = v8870;

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_33 workspace at ws+3384 length ws+0
void f342_reduce_33(void) {

	i8 v8872 = (i8)(intptr_t)(ws+3312);
	i8 v8873 = *(i8*)(intptr_t)v8872;
	i8 v8874 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8874 = v8873;

	i1 v8875 = (i1)+4;
	i8 v8876 = (i8)(intptr_t)(ws+3304);
	i8 v8877 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8877)(v8876, v8875);

endsub:;
}

// reduce_34 workspace at ws+3384 length ws+0
void f343_reduce_34(void) {

	i8 v8878 = (i8)(intptr_t)(ws+3304);
	i8 v8879 = *(i8*)(intptr_t)v8878;
	i8 v8880 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8880 = v8879;

endsub:;
}
	void f275_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_35 workspace at ws+3384 length ws+8
void f344_reduce_35(void) {

	i1 v8881 = (i1)+111;
	i8 v8882 = (i8)(intptr_t)(ws+3304);
	i8 v8883 = *(i8*)(intptr_t)v8882;
	i8 v8884 = (i8)(intptr_t)(f275_Expr1Simple);
	i8 v8885;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v8884)(&v8885, v8883, v8881);

	i8 v8886 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8886 = v8885;

	i8 v8887 = (i8)(intptr_t)(ws+3384);
	i8 v8888 = *(i8*)(intptr_t)v8887;
	i8 v8889 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8889 = v8888;

endsub:;
}
	void f275_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_36 workspace at ws+3384 length ws+8
void f345_reduce_36(void) {

	i1 v8890 = (i1)+106;
	i8 v8891 = (i8)(intptr_t)(ws+3304);
	i8 v8892 = *(i8*)(intptr_t)v8891;
	i8 v8893 = (i8)(intptr_t)(f275_Expr1Simple);
	i8 v8894;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v8893)(&v8894, v8892, v8890);

	i8 v8895 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8895 = v8894;

	i8 v8896 = (i8)(intptr_t)(ws+3384);
	i8 v8897 = *(i8*)(intptr_t)v8896;
	i8 v8898 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8898 = v8897;

endsub:;
}
	void f276_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3384 length ws+8
void f346_reduce_37(void) {

	i8 v8899 = (i8)(intptr_t)(ws+3320);
	i8 v8900 = *(i8*)(intptr_t)v8899;
	i8 v8901 = (i8)(intptr_t)(ws+3304);
	i8 v8902 = *(i8*)(intptr_t)v8901;
	i8 v8903 = (i8)(intptr_t)(f276_ExprAdd);
	i8 v8904;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8903)(&v8904, v8902, v8900);

	i8 v8905 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8905 = v8904;

	i8 v8906 = (i8)(intptr_t)(ws+3384);
	i8 v8907 = *(i8*)(intptr_t)v8906;
	i8 v8908 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8908 = v8907;

	i1 v8909 = (i1)+19;
	i8 v8910 = (i8)(intptr_t)(ws+3312);
	i8 v8911 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8911)(v8910, v8909);

endsub:;
}
	void f278_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3384 length ws+8
void f347_reduce_38(void) {

	i8 v8912 = (i8)(intptr_t)(ws+3320);
	i8 v8913 = *(i8*)(intptr_t)v8912;
	i8 v8914 = (i8)(intptr_t)(ws+3304);
	i8 v8915 = *(i8*)(intptr_t)v8914;
	i8 v8916 = (i8)(intptr_t)(f278_ExprSub);
	i8 v8917;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v8916)(&v8917, v8915, v8913);

	i8 v8918 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8918 = v8917;

	i8 v8919 = (i8)(intptr_t)(ws+3384);
	i8 v8920 = *(i8*)(intptr_t)v8919;
	i8 v8921 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8921 = v8920;

	i1 v8922 = (i1)+14;
	i8 v8923 = (i8)(intptr_t)(ws+3312);
	i8 v8924 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8924)(v8923, v8922);

endsub:;
}
	void f280_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3384 length ws+8
void f348_reduce_39(void) {

	i1 v8925 = (i1)+161;
	i1 v8926 = (i1)+161;
	i8 v8927 = (i8)(intptr_t)(ws+3320);
	i8 v8928 = *(i8*)(intptr_t)v8927;
	i8 v8929 = (i8)(intptr_t)(ws+3304);
	i8 v8930 = *(i8*)(intptr_t)v8929;
	i8 v8931 = (i8)(intptr_t)(f280_Expr2Simple);
	i8 v8932;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8931)(&v8932, v8930, v8928, v8926, v8925);

	i8 v8933 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8933 = v8932;

	i8 v8934 = (i8)(intptr_t)(ws+3384);
	i8 v8935 = *(i8*)(intptr_t)v8934;
	i8 v8936 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8936 = v8935;

	i1 v8937 = (i1)+24;
	i8 v8938 = (i8)(intptr_t)(ws+3312);
	i8 v8939 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8939)(v8938, v8937);

endsub:;
}
	void f280_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3384 length ws+8
void f349_reduce_40(void) {

	i1 v8940 = (i1)+141;
	i1 v8941 = (i1)+136;
	i8 v8942 = (i8)(intptr_t)(ws+3320);
	i8 v8943 = *(i8*)(intptr_t)v8942;
	i8 v8944 = (i8)(intptr_t)(ws+3304);
	i8 v8945 = *(i8*)(intptr_t)v8944;
	i8 v8946 = (i8)(intptr_t)(f280_Expr2Simple);
	i8 v8947;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8946)(&v8947, v8945, v8943, v8941, v8940);

	i8 v8948 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8948 = v8947;

	i8 v8949 = (i8)(intptr_t)(ws+3384);
	i8 v8950 = *(i8*)(intptr_t)v8949;
	i8 v8951 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8951 = v8950;

	i1 v8952 = (i1)+23;
	i8 v8953 = (i8)(intptr_t)(ws+3312);
	i8 v8954 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8954)(v8953, v8952);

endsub:;
}
	void f280_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3384 length ws+8
void f350_reduce_41(void) {

	i1 v8955 = (i1)+151;
	i1 v8956 = (i1)+146;
	i8 v8957 = (i8)(intptr_t)(ws+3320);
	i8 v8958 = *(i8*)(intptr_t)v8957;
	i8 v8959 = (i8)(intptr_t)(ws+3304);
	i8 v8960 = *(i8*)(intptr_t)v8959;
	i8 v8961 = (i8)(intptr_t)(f280_Expr2Simple);
	i8 v8962;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8961)(&v8962, v8960, v8958, v8956, v8955);

	i8 v8963 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8963 = v8962;

	i8 v8964 = (i8)(intptr_t)(ws+3384);
	i8 v8965 = *(i8*)(intptr_t)v8964;
	i8 v8966 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8966 = v8965;

	i1 v8967 = (i1)+18;
	i8 v8968 = (i8)(intptr_t)(ws+3312);
	i8 v8969 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8969)(v8968, v8967);

endsub:;
}
	void f280_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3384 length ws+8
void f351_reduce_42(void) {

	i1 v8970 = (i1)+176;
	i1 v8971 = (i1)+176;
	i8 v8972 = (i8)(intptr_t)(ws+3320);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974 = (i8)(intptr_t)(ws+3304);
	i8 v8975 = *(i8*)(intptr_t)v8974;
	i8 v8976 = (i8)(intptr_t)(f280_Expr2Simple);
	i8 v8977;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8976)(&v8977, v8975, v8973, v8971, v8970);

	i8 v8978 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8978 = v8977;

	i8 v8979 = (i8)(intptr_t)(ws+3384);
	i8 v8980 = *(i8*)(intptr_t)v8979;
	i8 v8981 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8981 = v8980;

	i1 v8982 = (i1)+49;
	i8 v8983 = (i8)(intptr_t)(ws+3312);
	i8 v8984 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8984)(v8983, v8982);

endsub:;
}
	void f280_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3384 length ws+8
void f352_reduce_43(void) {

	i1 v8985 = (i1)+166;
	i1 v8986 = (i1)+166;
	i8 v8987 = (i8)(intptr_t)(ws+3320);
	i8 v8988 = *(i8*)(intptr_t)v8987;
	i8 v8989 = (i8)(intptr_t)(ws+3304);
	i8 v8990 = *(i8*)(intptr_t)v8989;
	i8 v8991 = (i8)(intptr_t)(f280_Expr2Simple);
	i8 v8992;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v8991)(&v8992, v8990, v8988, v8986, v8985);

	i8 v8993 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v8993 = v8992;

	i8 v8994 = (i8)(intptr_t)(ws+3384);
	i8 v8995 = *(i8*)(intptr_t)v8994;
	i8 v8996 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v8996 = v8995;

	i1 v8997 = (i1)+59;
	i8 v8998 = (i8)(intptr_t)(ws+3312);
	i8 v8999 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8999)(v8998, v8997);

endsub:;
}
	void f280_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3384 length ws+8
void f353_reduce_44(void) {

	i1 v9000 = (i1)+171;
	i1 v9001 = (i1)+171;
	i8 v9002 = (i8)(intptr_t)(ws+3320);
	i8 v9003 = *(i8*)(intptr_t)v9002;
	i8 v9004 = (i8)(intptr_t)(ws+3304);
	i8 v9005 = *(i8*)(intptr_t)v9004;
	i8 v9006 = (i8)(intptr_t)(f280_Expr2Simple);
	i8 v9007;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v9006)(&v9007, v9005, v9003, v9001, v9000);

	i8 v9008 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9008 = v9007;

	i8 v9009 = (i8)(intptr_t)(ws+3384);
	i8 v9010 = *(i8*)(intptr_t)v9009;
	i8 v9011 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9011 = v9010;

	i1 v9012 = (i1)+48;
	i8 v9013 = (i8)(intptr_t)(ws+3312);
	i8 v9014 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9014)(v9013, v9012);

endsub:;
}
	void f283_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_45 workspace at ws+3384 length ws+8
void f354_reduce_45(void) {

	i1 v9015 = (i1)+116;
	i1 v9016 = (i1)+116;
	i8 v9017 = (i8)(intptr_t)(ws+3320);
	i8 v9018 = *(i8*)(intptr_t)v9017;
	i8 v9019 = (i8)(intptr_t)(ws+3304);
	i8 v9020 = *(i8*)(intptr_t)v9019;
	i8 v9021 = (i8)(intptr_t)(f283_ExprShift);
	i8 v9022;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v9021)(&v9022, v9020, v9018, v9016, v9015);

	i8 v9023 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9023 = v9022;

	i8 v9024 = (i8)(intptr_t)(ws+3384);
	i8 v9025 = *(i8*)(intptr_t)v9024;
	i8 v9026 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9026 = v9025;

	i1 v9027 = (i1)+56;
	i8 v9028 = (i8)(intptr_t)(ws+3312);
	i8 v9029 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9029)(v9028, v9027);

endsub:;
}
	void f283_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3384 length ws+8
void f355_reduce_46(void) {

	i1 v9030 = (i1)+126;
	i1 v9031 = (i1)+121;
	i8 v9032 = (i8)(intptr_t)(ws+3320);
	i8 v9033 = *(i8*)(intptr_t)v9032;
	i8 v9034 = (i8)(intptr_t)(ws+3304);
	i8 v9035 = *(i8*)(intptr_t)v9034;
	i8 v9036 = (i8)(intptr_t)(f283_ExprShift);
	i8 v9037;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v9036)(&v9037, v9035, v9033, v9031, v9030);

	i8 v9038 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9038 = v9037;

	i8 v9039 = (i8)(intptr_t)(ws+3384);
	i8 v9040 = *(i8*)(intptr_t)v9039;
	i8 v9041 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9041 = v9040;

	i1 v9042 = (i1)+57;
	i8 v9043 = (i8)(intptr_t)(ws+3312);
	i8 v9044 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9044)(v9043, v9042);

endsub:;
}
	void f222_CheckNotPartialType(i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s016c[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f229_IsSNum(i1* /* result */, i8 /* type */);
	void f173_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_47 workspace at ws+3384 length ws+16
void f356_reduce_47(void) {

	i8 v9045 = (i8)(intptr_t)(ws+3304);
	i8 v9046 = *(i8*)(intptr_t)v9045;
	i8 v9047 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9047)(v9046);

	i8 v9048 = (i8)(intptr_t)(ws+3320);
	i8 v9049 = *(i8*)(intptr_t)v9048;
	i8 v9050 = v9049+(+40);
	i1 v9051 = *(i1*)(intptr_t)v9050;
	i1 v9052 = (i1)+40;
	if (v9051==v9052) goto c02_062f; else goto c02_0630;

c02_0630:;

	i8 v9053 = (i8)(intptr_t)(ws+3320);
	i8 v9054 = *(i8*)(intptr_t)v9053;
	i8 v9055 = v9054+(+16);
	i8 v9056 = *(i8*)(intptr_t)v9055;
	i8 v9057 = v9056+(+48);
	i2 v9058 = *(i2*)(intptr_t)v9057;
	i8 v9059 = (i8)(intptr_t)(ws+3304);
	i8 v9060 = *(i8*)(intptr_t)v9059;
	i8 v9061 = v9060+(+48);
	i2 v9062 = *(i2*)(intptr_t)v9061;
	if (v9058==v9062) goto c02_062f; else goto c02_062e;

c02_062e:;

	i8 v9063 = (i8)(intptr_t)(ws+3320);
	i8 v9064 = *(i8*)(intptr_t)v9063;
	i8 v9065 = v9064+(+16);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9068;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9067)(&v9068, v9066);

	i8 v9069 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9069 = v9068;

	i8 v9070 = (i8)(intptr_t)(ws+3304);
	i8 v9071 = *(i8*)(intptr_t)v9070;
	i8 v9072 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9073;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9072)(&v9073, v9071);

	i8 v9074 = (i8)(intptr_t)(ws+3385);
	*(i1*)(intptr_t)v9074 = v9073;

	i8 v9075 = (i8)(intptr_t)(ws+3384);
	i1 v9076 = *(i1*)(intptr_t)v9075;
	i1 v9077 = (i1)+0;
	if (v9076==v9077) goto c02_0638; else goto c02_0636;

c02_0638:;

	i8 v9078 = (i8)(intptr_t)(ws+3385);
	i1 v9079 = *(i1*)(intptr_t)v9078;
	i1 v9080 = (i1)+0;
	if (v9079==v9080) goto c02_0637; else goto c02_0636;

c02_0636:;

	i8 v9081 = (i8)(intptr_t)c02_s016c;
	i8 v9082 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9082)(v9081);

c02_0637:;

c02_0631:;

	i8 v9083 = (i8)(intptr_t)(ws+3320);
	i8 v9084 = *(i8*)(intptr_t)v9083;
	i8 v9085 = v9084+(+16);
	i8 v9086 = *(i8*)(intptr_t)v9085;
	i8 v9087 = (i8)(intptr_t)(f229_IsSNum);
	i1 v9088;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9087)(&v9088, v9086);

	i8 v9089 = (i8)(intptr_t)(ws+3386);
	*(i1*)(intptr_t)v9089 = v9088;

	i8 v9090 = (i8)(intptr_t)(ws+3304);
	i8 v9091 = *(i8*)(intptr_t)v9090;
	i8 v9092 = v9091+(+48);
	i2 v9093 = *(i2*)(intptr_t)v9092;
	i1 v9094 = v9093;
	i8 v9095 = (i8)(intptr_t)(ws+3320);
	i8 v9096 = *(i8*)(intptr_t)v9095;
	i8 v9097 = (i8)(intptr_t)(ws+3386);
	i1 v9098 = *(i1*)(intptr_t)v9097;
	i8 v9099 = (i8)(intptr_t)(f173_MidCCast);
	i8 v9100;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v9099)(&v9100, v9098, v9096, v9094);

	i8 v9101 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9101 = v9100;

	i8 v9102 = (i8)(intptr_t)(ws+3392);
	i8 v9103 = *(i8*)(intptr_t)v9102;
	i8 v9104 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9104 = v9103;

	goto c02_0629;

c02_062f:;

	i8 v9105 = (i8)(intptr_t)(ws+3320);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	i8 v9107 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9107 = v9106;

c02_0629:;

	i8 v9108 = (i8)(intptr_t)(ws+3304);
	i8 v9109 = *(i8*)(intptr_t)v9108;
	i8 v9110 = (i8)(intptr_t)(ws+3296);
	i8 v9111 = *(i8*)(intptr_t)v9110;
	i8 v9112 = v9111+(+16);
	*(i8*)(intptr_t)v9112 = v9109;

	i1 v9113 = (i1)+58;
	i8 v9114 = (i8)(intptr_t)(ws+3312);
	i8 v9115 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9115)(v9114, v9113);

endsub:;
}
	void f233_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f230_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s016d[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_48 workspace at ws+3384 length ws+17
void f357_reduce_48(void) {

	i8 v9116 = (i8)(intptr_t)(ws+3304);
	i8 v9117 = *(i8*)(intptr_t)v9116;
	i8 v9118 = (i8)(intptr_t)(f233_UndoLValue);
	i8 v9119;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v9118)(&v9119, v9117);

	i8 v9120 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9120 = v9119;

	i8 v9121 = (i8)(intptr_t)(ws+3384);
	i8 v9122 = *(i8*)(intptr_t)v9121;
	i8 v9123 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9123 = v9122;

	i8 v9124 = (i8)(intptr_t)(ws+3296);
	i8 v9125 = *(i8*)(intptr_t)v9124;
	i8 v9126 = v9125+(+40);
	i1 v9127 = *(i1*)(intptr_t)v9126;
	i1 v9128 = (i1)+42;
	if (v9127==v9128) goto c02_063c; else goto c02_063d;

c02_063c:;

	i8 v9129 = (i8)(intptr_t)(ws+3296);
	i8 v9130 = *(i8*)(intptr_t)v9129;
	i8 v9131 = *(i8*)(intptr_t)v9130;
	i8 v9132 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9132 = v9131;

	i8 v9133 = (i8)(intptr_t)(ws+3392);
	i8 v9134 = *(i8*)(intptr_t)v9133;
	i8 v9135 = *(i8*)(intptr_t)v9134;
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = (i8)(intptr_t)(f230_IsScalar);
	i1 v9138;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9137)(&v9138, v9136);

	i8 v9139 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9139 = v9138;

	i8 v9140 = (i8)(intptr_t)(ws+3400);
	i1 v9141 = *(i1*)(intptr_t)v9140;
	i1 v9142 = (i1)+0;
	if (v9141==v9142) goto c02_0642; else goto c02_0641;

c02_0641:;

	i8 v9143 = (i8)(intptr_t)c02_s016d;
	i8 v9144 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9144)(v9143);

c02_0642:;

c02_063e:;

c02_063d:;

c02_0639:;

endsub:;
}
	void f233_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_49 workspace at ws+3384 length ws+8
void f358_reduce_49(void) {

	i8 v9145 = (i8)(intptr_t)(ws+3304);
	i8 v9146 = *(i8*)(intptr_t)v9145;
	i8 v9147 = (i8)(intptr_t)(f233_UndoLValue);
	i8 v9148;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v9147)(&v9148, v9146);

	i8 v9149 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9149 = v9148;

	i8 v9150 = (i8)(intptr_t)(ws+3384);
	i8 v9151 = *(i8*)(intptr_t)v9150;
	i8 v9152 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9152 = v9151;

	i1 v9153 = (i1)+59;
	i8 v9154 = (i8)(intptr_t)(ws+3312);
	i8 v9155 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9155)(v9154, v9153);

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f289_parser_i_bad_next_prev(void);
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_50 workspace at ws+3384 length ws+24
void f359_reduce_50(void) {

	i8 v9156 = (i8)(intptr_t)(ws+3304);
	i8 v9157 = *(i8*)(intptr_t)v9156;
	i8 v9158 = v9157+(+16);
	i8 v9159 = *(i8*)(intptr_t)v9158;
	i8 v9160 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9161;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9160)(&v9161, v9159);

	i8 v9162 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9162 = v9161;

	i8 v9163 = (i8)(intptr_t)(ws+3384);
	i1 v9164 = *(i1*)(intptr_t)v9163;
	i1 v9165 = (i1)+0;
	if (v9164==v9165) goto c02_0646; else goto c02_0647;

c02_0646:;

	i8 v9166 = (i8)(intptr_t)(f289_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v9166)();

c02_0647:;

c02_0643:;

	i8 v9167 = (i8)(intptr_t)(ws+3304);
	i8 v9168 = *(i8*)(intptr_t)v9167;
	i8 v9169 = v9168+(+16);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = *(i8*)(intptr_t)v9170;
	i8 v9172 = v9171+(+50);
	i2 v9173 = *(i2*)(intptr_t)v9172;
	i4 v9174 = v9173;
	i8 v9175 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9176;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9175)(&v9176, v9174);

	i8 v9177 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9177 = v9176;

	i1 v9178 = (i1)+156;
	i8 v9179 = (i8)(intptr_t)(ws+1528);
	i8 v9180 = *(i8*)(intptr_t)v9179;
	i8 v9181 = v9180+(+48);
	i2 v9182 = *(i2*)(intptr_t)v9181;
	i1 v9183 = v9182;
	i8 v9184 = (i8)(intptr_t)(ws+3304);
	i8 v9185 = *(i8*)(intptr_t)v9184;
	i8 v9186 = (i8)(intptr_t)(ws+3392);
	i8 v9187 = *(i8*)(intptr_t)v9186;
	i8 v9188 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v9189;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9188)(&v9189, v9187, v9185, v9183, v9178);

	i8 v9190 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9190 = v9189;

	i8 v9191 = (i8)(intptr_t)(ws+3400);
	i8 v9192 = *(i8*)(intptr_t)v9191;
	i8 v9193 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9193 = v9192;

	i8 v9194 = (i8)(intptr_t)(ws+3304);
	i8 v9195 = *(i8*)(intptr_t)v9194;
	i8 v9196 = v9195+(+16);
	i8 v9197 = *(i8*)(intptr_t)v9196;
	i8 v9198 = (i8)(intptr_t)(ws+3296);
	i8 v9199 = *(i8*)(intptr_t)v9198;
	i8 v9200 = v9199+(+16);
	*(i8*)(intptr_t)v9200 = v9197;

endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f289_parser_i_bad_next_prev(void);
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_51 workspace at ws+3384 length ws+24
void f360_reduce_51(void) {

	i8 v9201 = (i8)(intptr_t)(ws+3304);
	i8 v9202 = *(i8*)(intptr_t)v9201;
	i8 v9203 = v9202+(+16);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	i8 v9205 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9206;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9205)(&v9206, v9204);

	i8 v9207 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9207 = v9206;

	i8 v9208 = (i8)(intptr_t)(ws+3384);
	i1 v9209 = *(i1*)(intptr_t)v9208;
	i1 v9210 = (i1)+0;
	if (v9209==v9210) goto c02_064b; else goto c02_064c;

c02_064b:;

	i8 v9211 = (i8)(intptr_t)(f289_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v9211)();

c02_064c:;

c02_0648:;

	i8 v9212 = (i8)(intptr_t)(ws+3304);
	i8 v9213 = *(i8*)(intptr_t)v9212;
	i8 v9214 = v9213+(+16);
	i8 v9215 = *(i8*)(intptr_t)v9214;
	i8 v9216 = *(i8*)(intptr_t)v9215;
	i8 v9217 = v9216+(+50);
	i2 v9218 = *(i2*)(intptr_t)v9217;
	i4 v9219 = v9218;
	i8 v9220 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9221;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9220)(&v9221, v9219);

	i8 v9222 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9222 = v9221;

	i1 v9223 = (i1)+131;
	i8 v9224 = (i8)(intptr_t)(ws+1528);
	i8 v9225 = *(i8*)(intptr_t)v9224;
	i8 v9226 = v9225+(+48);
	i2 v9227 = *(i2*)(intptr_t)v9226;
	i1 v9228 = v9227;
	i8 v9229 = (i8)(intptr_t)(ws+3304);
	i8 v9230 = *(i8*)(intptr_t)v9229;
	i8 v9231 = (i8)(intptr_t)(ws+3392);
	i8 v9232 = *(i8*)(intptr_t)v9231;
	i8 v9233 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v9234;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9233)(&v9234, v9232, v9230, v9228, v9223);

	i8 v9235 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9235 = v9234;

	i8 v9236 = (i8)(intptr_t)(ws+3400);
	i8 v9237 = *(i8*)(intptr_t)v9236;
	i8 v9238 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9238 = v9237;

	i8 v9239 = (i8)(intptr_t)(ws+3304);
	i8 v9240 = *(i8*)(intptr_t)v9239;
	i8 v9241 = v9240+(+16);
	i8 v9242 = *(i8*)(intptr_t)v9241;
	i8 v9243 = (i8)(intptr_t)(ws+3296);
	i8 v9244 = *(i8*)(intptr_t)v9243;
	i8 v9245 = v9244+(+16);
	*(i8*)(intptr_t)v9245 = v9242;

endsub:;
}
	void f113_MidConstant(i8* /* m */, i4 /* value */);

// reduce_52 workspace at ws+3384 length ws+8
void f361_reduce_52(void) {

	i8 v9246 = (i8)(intptr_t)(ws+3304);
	i8 v9247 = *(i8*)(intptr_t)v9246;
	i8 v9248 = v9247+(+48);
	i2 v9249 = *(i2*)(intptr_t)v9248;
	i4 v9250 = v9249;
	i8 v9251 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9252;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9251)(&v9252, v9250);

	i8 v9253 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9253 = v9252;

	i8 v9254 = (i8)(intptr_t)(ws+3384);
	i8 v9255 = *(i8*)(intptr_t)v9254;
	i8 v9256 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9256 = v9255;

endsub:;
}
	void f226_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s016e[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f113_MidConstant(i8* /* m */, i4 /* value */);

// reduce_53 workspace at ws+3384 length ws+16
void f362_reduce_53(void) {

	i8 v9257 = (i8)(intptr_t)(ws+3304);
	i8 v9258 = *(i8*)(intptr_t)v9257;
	i8 v9259 = (i8)(intptr_t)(f226_IsArray);
	i1 v9260;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9259)(&v9260, v9258);

	i8 v9261 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9261 = v9260;

	i8 v9262 = (i8)(intptr_t)(ws+3384);
	i1 v9263 = *(i1*)(intptr_t)v9262;
	i1 v9264 = (i1)+0;
	if (v9263==v9264) goto c02_0650; else goto c02_0651;

c02_0650:;

	i8 v9265 = (i8)(intptr_t)c02_s016e;
	i8 v9266 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9266)(v9265);

c02_0651:;

c02_064d:;

	i8 v9267 = (i8)(intptr_t)(ws+3304);
	i8 v9268 = *(i8*)(intptr_t)v9267;
	i8 v9269 = v9268+(+8);
	i2 v9270 = *(i2*)(intptr_t)v9269;
	i4 v9271 = v9270;
	i8 v9272 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9273;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9272)(&v9273, v9271);

	i8 v9274 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9274 = v9273;

	i8 v9275 = (i8)(intptr_t)(ws+3392);
	i8 v9276 = *(i8*)(intptr_t)v9275;
	i8 v9277 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9277 = v9276;

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s016f[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// not_a_value workspace at ws+3424 length ws+0
void f364_not_a_value(void) {

	i8 v9278 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9278)();

	i8 v9279 = (i8)(intptr_t)(ws+3304);
	i8 v9280 = *(i8*)(intptr_t)v9279;
	i8 v9281 = v9280+(+8);
	i8 v9282 = *(i8*)(intptr_t)v9281;
	i8 v9283 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9283)(v9282);

	i8 v9284 = (i8)(intptr_t)c02_s016f;
	i8 v9285 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9285)(v9284);

	i8 v9286 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9286)();

endsub:;
}
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f162_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f261_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f232_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f158_MidSubref(i8* /* m */, i8 /* subr */);
	void f364_not_a_value(void);
	void f364_not_a_value(void);

// reduce_54 workspace at ws+3384 length ws+40
void f363_reduce_54(void) {


	i8 v9287 = (i8)(intptr_t)(ws+3304);
	i8 v9288 = *(i8*)(intptr_t)v9287;
	i8 v9289 = v9288+(+32);
	i1 v9290 = *(i1*)(intptr_t)v9289;

	if (v9290 != +7) goto c02_0653;

	i8 v9291 = (i8)(intptr_t)(ws+3304);
	i8 v9292 = *(i8*)(intptr_t)v9291;
	i4 v9293 = *(i4*)(intptr_t)v9292;
	i8 v9294 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9295;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9294)(&v9295, v9293);

	i8 v9296 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9296 = v9295;

	i8 v9297 = (i8)(intptr_t)(ws+3384);
	i8 v9298 = *(i8*)(intptr_t)v9297;
	i8 v9299 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9299 = v9298;

	goto c02_0652;

c02_0653:;

	if (v9290 != +28) goto c02_0654;

	i8 v9300 = (i8)(intptr_t)(ws+3304);
	i8 v9301 = *(i8*)(intptr_t)v9300;
	i2 v9302 = (i2)+0;
	i8 v9303 = (i8)(intptr_t)(f162_MidAddress);
	i8 v9304;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v9303)(&v9304, v9302, v9301);

	i8 v9305 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9305 = v9304;

	i8 v9306 = (i8)(intptr_t)(ws+3392);
	i8 v9307 = *(i8*)(intptr_t)v9306;
	i8 v9308 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9308 = v9307;

	i8 v9309 = (i8)(intptr_t)(ws+3304);
	i8 v9310 = *(i8*)(intptr_t)v9309;
	i8 v9311 = *(i8*)(intptr_t)v9310;
	i8 v9312 = *(i8*)(intptr_t)v9311;
	i8 v9313 = (i8)(intptr_t)(f261_MakePointerType);
	i8 v9314;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v9313)(&v9314, v9312);

	i8 v9315 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9315 = v9314;

	i8 v9316 = (i8)(intptr_t)(ws+3400);
	i8 v9317 = *(i8*)(intptr_t)v9316;
	i8 v9318 = (i8)(intptr_t)(ws+3296);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	i8 v9320 = v9319+(+16);
	*(i8*)(intptr_t)v9320 = v9317;

	i8 v9321 = (i8)(intptr_t)(ws+3296);
	i8 v9322 = *(i8*)(intptr_t)v9321;
	i8 v9323 = (i8)(intptr_t)(f232_MakeLValue);
	i8 v9324;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v9323)(&v9324, v9322);

	i8 v9325 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9325 = v9324;

	i8 v9326 = (i8)(intptr_t)(ws+3408);
	i8 v9327 = *(i8*)(intptr_t)v9326;
	i8 v9328 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9328 = v9327;

	goto c02_0652;

c02_0654:;

	if (v9290 != +30) goto c02_0655;

	i8 v9329 = (i8)(intptr_t)(ws+3304);
	i8 v9330 = *(i8*)(intptr_t)v9329;
	i8 v9331 = *(i8*)(intptr_t)v9330;
	i8 v9332 = v9331+(+52);
	i1 v9333 = *(i1*)(intptr_t)v9332;
	i1 v9334 = (i1)+6;
	if (v9333==v9334) goto c02_0659; else goto c02_065a;

c02_0659:;

	i8 v9335 = (i8)(intptr_t)(ws+3304);
	i8 v9336 = *(i8*)(intptr_t)v9335;
	i8 v9337 = *(i8*)(intptr_t)v9336;
	i8 v9338 = *(i8*)(intptr_t)v9337;
	i8 v9339 = (i8)(intptr_t)(f158_MidSubref);
	i8 v9340;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9339)(&v9340, v9338);

	i8 v9341 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9341 = v9340;

	i8 v9342 = (i8)(intptr_t)(ws+3416);
	i8 v9343 = *(i8*)(intptr_t)v9342;
	i8 v9344 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9344 = v9343;

	i8 v9345 = (i8)(intptr_t)(ws+3304);
	i8 v9346 = *(i8*)(intptr_t)v9345;
	i8 v9347 = *(i8*)(intptr_t)v9346;
	i8 v9348 = *(i8*)(intptr_t)v9347;
	i8 v9349 = v9348+(+48);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	i8 v9351 = v9350+(+40);
	i8 v9352 = *(i8*)(intptr_t)v9351;
	i8 v9353 = (i8)(intptr_t)(ws+3296);
	i8 v9354 = *(i8*)(intptr_t)v9353;
	i8 v9355 = v9354+(+16);
	*(i8*)(intptr_t)v9355 = v9352;

	goto c02_0656;

c02_065a:;

	i8 v9356 = (i8)(intptr_t)(f364_not_a_value);

	((void(*)(void))(intptr_t)v9356)();

c02_0656:;

	goto c02_0652;

c02_0655:;

	i8 v9357 = (i8)(intptr_t)(f364_not_a_value);

	((void(*)(void))(intptr_t)v9357)();

c02_0652:;


endsub:;
}
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0170[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f232_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_55 workspace at ws+3384 length ws+16
void f365_reduce_55(void) {

	i8 v9358 = (i8)(intptr_t)(ws+3312);
	i8 v9359 = *(i8*)(intptr_t)v9358;
	i8 v9360 = v9359+(+16);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i8 v9362 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9363;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9362)(&v9363, v9361);

	i8 v9364 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9364 = v9363;

	i8 v9365 = (i8)(intptr_t)(ws+3384);
	i1 v9366 = *(i1*)(intptr_t)v9365;
	i1 v9367 = (i1)+0;
	if (v9366==v9367) goto c02_065e; else goto c02_065f;

c02_065e:;

	i8 v9368 = (i8)(intptr_t)c02_s0170;
	i8 v9369 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9369)(v9368);

c02_065f:;

c02_065b:;

	i8 v9370 = (i8)(intptr_t)(ws+3312);
	i8 v9371 = *(i8*)(intptr_t)v9370;
	i8 v9372 = (i8)(intptr_t)(f232_MakeLValue);
	i8 v9373;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v9372)(&v9373, v9371);

	i8 v9374 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9374 = v9373;

	i8 v9375 = (i8)(intptr_t)(ws+3392);
	i8 v9376 = *(i8*)(intptr_t)v9375;
	i8 v9377 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9377 = v9376;

	i1 v9378 = (i1)+5;
	i8 v9379 = (i8)(intptr_t)(ws+3304);
	i8 v9380 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9380)(v9379, v9378);

endsub:;
}
	void f235_MaybeUndoLValue(i8* /* address */, i8 /* lvalue */);
	void f226_IsArray(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
const i1 c02_s0171[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f228_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0172[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f173_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f261_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f232_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_56 workspace at ws+3384 length ws+112
void f366_reduce_56(void) {

	i8 v9381 = (i8)(intptr_t)(ws+3328);
	i8 v9382 = *(i8*)(intptr_t)v9381;
	i8 v9383 = v9382+(+16);
	i8 v9384 = *(i8*)(intptr_t)v9383;
	i8 v9385 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9385 = v9384;

	i8 v9386 = (i8)(intptr_t)(ws+3328);
	i8 v9387 = *(i8*)(intptr_t)v9386;
	i8 v9388 = (i8)(intptr_t)(f235_MaybeUndoLValue);
	i8 v9389;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v9388)(&v9389, v9387);

	i8 v9390 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9390 = v9389;

	i8 v9391 = (i8)(intptr_t)(ws+3392);
	i8 v9392 = *(i8*)(intptr_t)v9391;
	i8 v9393 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9393 = v9392;

	i8 v9394 = (i8)(intptr_t)(ws+3384);
	i8 v9395 = *(i8*)(intptr_t)v9394;
	i8 v9396 = (i8)(intptr_t)(f226_IsArray);
	i1 v9397;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9396)(&v9397, v9395);

	i8 v9398 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v9398 = v9397;

	i8 v9399 = (i8)(intptr_t)(ws+3408);
	i1 v9400 = *(i1*)(intptr_t)v9399;
	i1 v9401 = (i1)+0;
	if (v9400==v9401) goto c02_0663; else goto c02_0664;

c02_0663:;

	i8 v9402 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9402)();

	i8 v9403 = (i8)(intptr_t)c02_s0171;
	i8 v9404 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9404)(v9403);

	i8 v9405 = (i8)(intptr_t)(ws+3384);
	i8 v9406 = *(i8*)(intptr_t)v9405;
	i8 v9407 = v9406+(+32);
	i8 v9408 = *(i8*)(intptr_t)v9407;
	i8 v9409 = v9408+(+8);
	i8 v9410 = *(i8*)(intptr_t)v9409;
	i8 v9411 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9411)(v9410);

	i8 v9412 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9412)();

c02_0664:;

c02_0660:;

	i8 v9413 = (i8)(intptr_t)(ws+3312);
	i8 v9414 = *(i8*)(intptr_t)v9413;
	i8 v9415 = (i8)(intptr_t)(ws+3384);
	i8 v9416 = *(i8*)(intptr_t)v9415;
	i8 v9417 = v9416+(+16);
	i8 v9418 = *(i8*)(intptr_t)v9417;
	i8 v9419 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v9419)(v9418, v9414);

	i8 v9420 = (i8)(intptr_t)(ws+3312);
	i8 v9421 = *(i8*)(intptr_t)v9420;
	i8 v9422 = v9421+(+16);
	i8 v9423 = *(i8*)(intptr_t)v9422;
	i8 v9424 = (i8)(intptr_t)(f228_IsNum);
	i1 v9425;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9424)(&v9425, v9423);

	i8 v9426 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v9426 = v9425;

	i8 v9427 = (i8)(intptr_t)(ws+3409);
	i1 v9428 = *(i1*)(intptr_t)v9427;
	i1 v9429 = (i1)+0;
	if (v9428==v9429) goto c02_0668; else goto c02_0669;

c02_0668:;

	i8 v9430 = (i8)(intptr_t)c02_s0172;
	i8 v9431 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9431)(v9430);

c02_0669:;

c02_0665:;

	i8 v9432 = (i8)(intptr_t)(ws+3384);
	i8 v9433 = *(i8*)(intptr_t)v9432;
	i8 v9434 = *(i8*)(intptr_t)v9433;
	i8 v9435 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v9435 = v9434;

	i8 v9436 = (i8)(intptr_t)(ws+1528);
	i8 v9437 = *(i8*)(intptr_t)v9436;
	i8 v9438 = v9437+(+48);
	i2 v9439 = *(i2*)(intptr_t)v9438;
	i1 v9440 = v9439;
	i8 v9441 = (i8)(intptr_t)(ws+3424);
	*(i1*)(intptr_t)v9441 = v9440;

	i8 v9442 = (i8)(intptr_t)(ws+1528);
	i8 v9443 = *(i8*)(intptr_t)v9442;
	i8 v9444 = v9443+(+48);
	i2 v9445 = *(i2*)(intptr_t)v9444;
	i1 v9446 = v9445;
	i8 v9447 = (i8)(intptr_t)(ws+3312);
	i8 v9448 = *(i8*)(intptr_t)v9447;
	i1 v9449 = (i1)+0;
	i8 v9450 = (i8)(intptr_t)(f173_MidCCast);
	i8 v9451;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v9450)(&v9451, v9449, v9448, v9446);

	i8 v9452 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v9452 = v9451;

	i8 v9453 = (i8)(intptr_t)(ws+3416);
	i8 v9454 = *(i8*)(intptr_t)v9453;
	i8 v9455 = v9454+(+50);
	i2 v9456 = *(i2*)(intptr_t)v9455;
	i4 v9457 = v9456;
	i8 v9458 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9459;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9458)(&v9459, v9457);

	i8 v9460 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9460 = v9459;

	i1 v9461 = (i1)+161;
	i8 v9462 = (i8)(intptr_t)(ws+3424);
	i1 v9463 = *(i1*)(intptr_t)v9462;
	i8 v9464 = (i8)(intptr_t)(ws+3432);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = (i8)(intptr_t)(ws+3440);
	i8 v9467 = *(i8*)(intptr_t)v9466;
	i8 v9468 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v9469;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9468)(&v9469, v9467, v9465, v9463, v9461);

	i8 v9470 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9470 = v9469;

	i8 v9471 = (i8)(intptr_t)(ws+3448);
	i8 v9472 = *(i8*)(intptr_t)v9471;
	i8 v9473 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9473 = v9472;

	i8 v9474 = (i8)(intptr_t)(ws+1528);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = (i8)(intptr_t)(ws+3456);
	i8 v9477 = *(i8*)(intptr_t)v9476;
	i8 v9478 = v9477+(+16);
	*(i8*)(intptr_t)v9478 = v9475;

	i1 v9479 = (i1)+156;
	i8 v9480 = (i8)(intptr_t)(ws+3424);
	i1 v9481 = *(i1*)(intptr_t)v9480;
	i8 v9482 = (i8)(intptr_t)(ws+3400);
	i8 v9483 = *(i8*)(intptr_t)v9482;
	i8 v9484 = (i8)(intptr_t)(ws+3456);
	i8 v9485 = *(i8*)(intptr_t)v9484;
	i8 v9486 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v9487;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9486)(&v9487, v9485, v9483, v9481, v9479);

	i8 v9488 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9488 = v9487;

	i8 v9489 = (i8)(intptr_t)(ws+3464);
	i8 v9490 = *(i8*)(intptr_t)v9489;
	i8 v9491 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9491 = v9490;

	i8 v9492 = (i8)(intptr_t)(ws+3416);
	i8 v9493 = *(i8*)(intptr_t)v9492;
	i8 v9494 = (i8)(intptr_t)(f261_MakePointerType);
	i8 v9495;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v9494)(&v9495, v9493);

	i8 v9496 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9496 = v9495;

	i8 v9497 = (i8)(intptr_t)(ws+3480);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	i8 v9499 = (i8)(intptr_t)(ws+3472);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = v9500+(+16);
	*(i8*)(intptr_t)v9501 = v9498;

	i8 v9502 = (i8)(intptr_t)(ws+3472);
	i8 v9503 = *(i8*)(intptr_t)v9502;
	i8 v9504 = (i8)(intptr_t)(f232_MakeLValue);
	i8 v9505;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v9504)(&v9505, v9503);

	i8 v9506 = (i8)(intptr_t)(ws+3488);
	*(i8*)(intptr_t)v9506 = v9505;

	i8 v9507 = (i8)(intptr_t)(ws+3488);
	i8 v9508 = *(i8*)(intptr_t)v9507;
	i8 v9509 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9509 = v9508;

	i1 v9510 = (i1)+17;
	i8 v9511 = (i8)(intptr_t)(ws+3320);
	i8 v9512 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9512)(v9511, v9510);

	i1 v9513 = (i1)+5;
	i8 v9514 = (i8)(intptr_t)(ws+3304);
	i8 v9515 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9515)(v9514, v9513);

endsub:;
}
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0173[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// BadType workspace at ws+3488 length ws+0
void f368_BadType(void) {

	i8 v9524 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9524)();

	i8 v9525 = (i8)(intptr_t)(ws+3384);
	i8 v9526 = *(i8*)(intptr_t)v9525;
	i8 v9527 = v9526+(+32);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	i8 v9529 = v9528+(+8);
	i8 v9530 = *(i8*)(intptr_t)v9529;
	i8 v9531 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9531)(v9530);

	i8 v9532 = (i8)(intptr_t)c02_s0173;
	i8 v9533 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9533)(v9532);

	i8 v9534 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9534)();

endsub:;
}
	void f234_IsLValue(i1* /* result */, i8 /* lvalue */);
	void f235_MaybeUndoLValue(i8* /* address */, i8 /* lvalue */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f222_CheckNotPartialType(i8 /* type */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
	void f368_BadType(void);
	void f222_CheckNotPartialType(i8 /* type */);
	void f231_IsRecord(i1* /* result */, i8 /* type */);
	void f368_BadType(void);
	void f217_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0174[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0175[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f34_Free(i8 /* block */);
	void f113_MidConstant(i8* /* m */, i4 /* value */);
	void f172_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f261_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f232_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_57 workspace at ws+3384 length ws+104
void f367_reduce_57(void) {

	i8 v9516 = (i8)(intptr_t)(ws+3320);
	i8 v9517 = *(i8*)(intptr_t)v9516;
	i8 v9518 = v9517+(+16);
	i8 v9519 = *(i8*)(intptr_t)v9518;
	i8 v9520 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9520 = v9519;

	i8 v9521 = (i8)(intptr_t)(ws+3320);
	i8 v9522 = *(i8*)(intptr_t)v9521;
	i8 v9523 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9523 = v9522;


	i8 v9535 = (i8)(intptr_t)(ws+3392);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	i8 v9537 = (i8)(intptr_t)(f234_IsLValue);
	i1 v9538;

	((void(*)(i1* /* result */, i8 /* lvalue */))(intptr_t)v9537)(&v9538, v9536);

	i8 v9539 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v9539 = v9538;

	i8 v9540 = (i8)(intptr_t)(ws+3400);
	i1 v9541 = *(i1*)(intptr_t)v9540;
	i1 v9542 = (i1)+0;
	if (v9541==v9542) goto c02_066e; else goto c02_066d;

c02_066d:;

	i8 v9543 = (i8)(intptr_t)(ws+3320);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	i8 v9545 = (i8)(intptr_t)(f235_MaybeUndoLValue);
	i8 v9546;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v9545)(&v9546, v9544);

	i8 v9547 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9547 = v9546;

	i8 v9548 = (i8)(intptr_t)(ws+3408);
	i8 v9549 = *(i8*)(intptr_t)v9548;
	i8 v9550 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9550 = v9549;

c02_066f:;

	i8 v9551 = (i8)(intptr_t)(ws+3384);
	i8 v9552 = *(i8*)(intptr_t)v9551;
	i8 v9553 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9554;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9553)(&v9554, v9552);

	i8 v9555 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v9555 = v9554;

	i8 v9556 = (i8)(intptr_t)(ws+3416);
	i1 v9557 = *(i1*)(intptr_t)v9556;
	i1 v9558 = (i1)+0;
	if (v9557==v9558) goto c02_0674; else goto c02_0673;

c02_0673:;

	i8 v9559 = (i8)(intptr_t)(ws+3384);
	i8 v9560 = *(i8*)(intptr_t)v9559;
	i8 v9561 = *(i8*)(intptr_t)v9560;
	i8 v9562 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9562 = v9561;

	i8 v9563 = (i8)(intptr_t)(ws+3384);
	i8 v9564 = *(i8*)(intptr_t)v9563;
	i8 v9565 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9565)(v9564);

	i8 v9566 = (i8)(intptr_t)(ws+1528);
	i8 v9567 = *(i8*)(intptr_t)v9566;
	i8 v9568 = v9567+(+48);
	i2 v9569 = *(i2*)(intptr_t)v9568;
	i1 v9570 = v9569;
	i8 v9571 = (i8)(intptr_t)(ws+3392);
	i8 v9572 = *(i8*)(intptr_t)v9571;
	i8 v9573 = (i8)(intptr_t)(f106_MidDeref);
	i8 v9574;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v9573)(&v9574, v9572, v9570);

	i8 v9575 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v9575 = v9574;

	i8 v9576 = (i8)(intptr_t)(ws+3424);
	i8 v9577 = *(i8*)(intptr_t)v9576;
	i8 v9578 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9578 = v9577;

	goto c02_066f;

c02_0674:;

	goto c02_066a;

c02_066e:;

	i8 v9579 = (i8)(intptr_t)(ws+3384);
	i8 v9580 = *(i8*)(intptr_t)v9579;
	i8 v9581 = (i8)(intptr_t)(f68_IsPtr);
	i1 v9582;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9581)(&v9582, v9580);

	i8 v9583 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v9583 = v9582;

	i8 v9584 = (i8)(intptr_t)(ws+3432);
	i1 v9585 = *(i1*)(intptr_t)v9584;
	i1 v9586 = (i1)+0;
	if (v9585==v9586) goto c02_0678; else goto c02_0677;

c02_0677:;

	i8 v9587 = (i8)(intptr_t)(ws+3384);
	i8 v9588 = *(i8*)(intptr_t)v9587;
	i8 v9589 = *(i8*)(intptr_t)v9588;
	i8 v9590 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9590 = v9589;

	goto c02_066a;

c02_0678:;

	i8 v9591 = (i8)(intptr_t)(f368_BadType);

	((void(*)(void))(intptr_t)v9591)();

c02_066a:;

	i8 v9592 = (i8)(intptr_t)(ws+3384);
	i8 v9593 = *(i8*)(intptr_t)v9592;
	i8 v9594 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9594)(v9593);

	i8 v9595 = (i8)(intptr_t)(ws+3384);
	i8 v9596 = *(i8*)(intptr_t)v9595;
	i8 v9597 = (i8)(intptr_t)(f231_IsRecord);
	i1 v9598;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9597)(&v9598, v9596);

	i8 v9599 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v9599 = v9598;

	i8 v9600 = (i8)(intptr_t)(ws+3433);
	i1 v9601 = *(i1*)(intptr_t)v9600;
	i1 v9602 = (i1)+0;
	if (v9601==v9602) goto c02_067c; else goto c02_067d;

c02_067c:;

	i8 v9603 = (i8)(intptr_t)(f368_BadType);

	((void(*)(void))(intptr_t)v9603)();

c02_067d:;

c02_0679:;

	i8 v9604 = (i8)(intptr_t)(ws+3384);
	i8 v9605 = *(i8*)(intptr_t)v9604;
	i8 v9606 = (i8)(intptr_t)(ws+3304);
	i8 v9607 = *(i8*)(intptr_t)v9606;
	i8 v9608 = (i8)(intptr_t)(f217_LookupSymbol);
	i8 v9609;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9608)(&v9609, v9607, v9605);

	i8 v9610 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v9610 = v9609;

	i8 v9611 = (i8)(intptr_t)(ws+3440);
	i8 v9612 = *(i8*)(intptr_t)v9611;
	i8 v9613 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v9613 = v9612;

	i8 v9614 = (i8)(intptr_t)(ws+3448);
	i8 v9615 = *(i8*)(intptr_t)v9614;
	i8 v9616 = (i8)+0;
	if (v9615==v9616) goto c02_0681; else goto c02_0682;

c02_0681:;

	i8 v9617 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9617)();

	i8 v9618 = (i8)(intptr_t)(ws+3384);
	i8 v9619 = *(i8*)(intptr_t)v9618;
	i8 v9620 = v9619+(+32);
	i8 v9621 = *(i8*)(intptr_t)v9620;
	i8 v9622 = v9621+(+8);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	i8 v9624 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9624)(v9623);

	i8 v9625 = (i8)(intptr_t)c02_s0174;
	i8 v9626 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9626)(v9625);

	i8 v9627 = (i8)(intptr_t)(ws+3304);
	i8 v9628 = *(i8*)(intptr_t)v9627;
	i8 v9629 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9629)(v9628);

	i8 v9630 = (i8)(intptr_t)c02_s0175;
	i8 v9631 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9631)(v9630);

	i8 v9632 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9632)();

c02_0682:;

c02_067e:;

	i8 v9633 = (i8)(intptr_t)(ws+3304);
	i8 v9634 = *(i8*)(intptr_t)v9633;
	i8 v9635 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v9635)(v9634);

	i8 v9636 = (i8)(intptr_t)(ws+3448);
	i8 v9637 = *(i8*)(intptr_t)v9636;
	i8 v9638 = *(i8*)(intptr_t)v9637;
	i8 v9639 = v9638+(+24);
	i2 v9640 = *(i2*)(intptr_t)v9639;
	i4 v9641 = v9640;
	i8 v9642 = (i8)(intptr_t)(f113_MidConstant);
	i8 v9643;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9642)(&v9643, v9641);

	i8 v9644 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v9644 = v9643;

	i1 v9645 = (i1)+156;
	i8 v9646 = (i8)(intptr_t)(ws+1528);
	i8 v9647 = *(i8*)(intptr_t)v9646;
	i8 v9648 = v9647+(+48);
	i2 v9649 = *(i2*)(intptr_t)v9648;
	i1 v9650 = v9649;
	i8 v9651 = (i8)(intptr_t)(ws+3392);
	i8 v9652 = *(i8*)(intptr_t)v9651;
	i8 v9653 = (i8)(intptr_t)(ws+3456);
	i8 v9654 = *(i8*)(intptr_t)v9653;
	i8 v9655 = (i8)(intptr_t)(f172_MidC2Op);
	i8 v9656;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9655)(&v9656, v9654, v9652, v9650, v9645);

	i8 v9657 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v9657 = v9656;

	i8 v9658 = (i8)(intptr_t)(ws+3464);
	i8 v9659 = *(i8*)(intptr_t)v9658;
	i8 v9660 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9660 = v9659;

	i8 v9661 = (i8)(intptr_t)(ws+3448);
	i8 v9662 = *(i8*)(intptr_t)v9661;
	i8 v9663 = *(i8*)(intptr_t)v9662;
	i8 v9664 = *(i8*)(intptr_t)v9663;
	i8 v9665 = (i8)(intptr_t)(f261_MakePointerType);
	i8 v9666;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v9665)(&v9666, v9664);

	i8 v9667 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v9667 = v9666;

	i8 v9668 = (i8)(intptr_t)(ws+3472);
	i8 v9669 = *(i8*)(intptr_t)v9668;
	i8 v9670 = (i8)(intptr_t)(ws+3296);
	i8 v9671 = *(i8*)(intptr_t)v9670;
	i8 v9672 = v9671+(+16);
	*(i8*)(intptr_t)v9672 = v9669;

	i8 v9673 = (i8)(intptr_t)(ws+3296);
	i8 v9674 = *(i8*)(intptr_t)v9673;
	i8 v9675 = (i8)(intptr_t)(f232_MakeLValue);
	i8 v9676;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v9675)(&v9676, v9674);

	i8 v9677 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v9677 = v9676;

	i8 v9678 = (i8)(intptr_t)(ws+3480);
	i8 v9679 = *(i8*)(intptr_t)v9678;
	i8 v9680 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9680 = v9679;

	i1 v9681 = (i1)+8;
	i8 v9682 = (i8)(intptr_t)(ws+3312);
	i8 v9683 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9683)(v9682, v9681);

endsub:;
}
	void f122_MidString(i8* /* m */, i8 /* text */);
	void f261_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_58 workspace at ws+3384 length ws+16
void f369_reduce_58(void) {

	i8 v9684 = (i8)(intptr_t)(ws+3304);
	i8 v9685 = *(i8*)(intptr_t)v9684;
	i8 v9686 = (i8)(intptr_t)(f122_MidString);
	i8 v9687;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9686)(&v9687, v9685);

	i8 v9688 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9688 = v9687;

	i8 v9689 = (i8)(intptr_t)(ws+3384);
	i8 v9690 = *(i8*)(intptr_t)v9689;
	i8 v9691 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9691 = v9690;

	i8 v9692 = (i8)(intptr_t)(ws+1512);
	i8 v9693 = *(i8*)(intptr_t)v9692;
	i8 v9694 = (i8)(intptr_t)(f261_MakePointerType);
	i8 v9695;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v9694)(&v9695, v9693);

	i8 v9696 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9696 = v9695;

	i8 v9697 = (i8)(intptr_t)(ws+3392);
	i8 v9698 = *(i8*)(intptr_t)v9697;
	i8 v9699 = (i8)(intptr_t)(ws+3296);
	i8 v9700 = *(i8*)(intptr_t)v9699;
	i8 v9701 = v9700+(+16);
	*(i8*)(intptr_t)v9701 = v9698;

endsub:;
}
	void f290_parser_i_constant_error(void);
	void f63_Discard(i8 /* node */);

// reduce_59 workspace at ws+3384 length ws+0
void f370_reduce_59(void) {

	i8 v9702 = (i8)(intptr_t)(ws+3304);
	i8 v9703 = *(i8*)(intptr_t)v9702;
	i8 v9704 = v9703+(+40);
	i1 v9705 = *(i1*)(intptr_t)v9704;
	i1 v9706 = (i1)+40;
	if (v9705==v9706) goto c02_0687; else goto c02_0686;

c02_0686:;

	i8 v9707 = (i8)(intptr_t)(f290_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9707)();

c02_0687:;

c02_0683:;

	i8 v9708 = (i8)(intptr_t)(ws+3304);
	i8 v9709 = *(i8*)(intptr_t)v9708;
	i4 v9710 = *(i4*)(intptr_t)v9709;
	i8 v9711 = (i8)(intptr_t)(ws+3296);
	*(i4*)(intptr_t)v9711 = v9710;

	i8 v9712 = (i8)(intptr_t)(ws+3304);
	i8 v9713 = *(i8*)(intptr_t)v9712;
	i8 v9714 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9714)(v9713);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3384 length ws+0
void f371_reduce_60(void) {

	i1 v9715 = (i1)+7;
	i8 v9716 = (i8)(intptr_t)(ws+3328);
	i8 v9717 = *(i8*)(intptr_t)v9716;
	i8 v9718 = v9717+(+32);
	*(i1*)(intptr_t)v9718 = v9715;

	i8 v9719 = (i8)(intptr_t)(ws+3312);
	i4 v9720 = *(i4*)(intptr_t)v9719;
	i8 v9721 = (i8)(intptr_t)(ws+3328);
	i8 v9722 = *(i8*)(intptr_t)v9721;
	*(i4*)(intptr_t)v9722 = v9720;

	i1 v9723 = (i1)+2;
	i8 v9724 = (i8)(intptr_t)(ws+3320);
	i8 v9725 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9725)(v9724, v9723);

	i1 v9726 = (i1)+22;
	i8 v9727 = (i8)(intptr_t)(ws+3304);
	i8 v9728 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9728)(v9727, v9726);

endsub:;
}
const i1 c02_s0176[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f241_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_61 workspace at ws+3384 length ws+8
void f372_reduce_61(void) {

	i8 v9729 = (i8)(intptr_t)(ws+3328);
	i4 v9730 = *(i4*)(intptr_t)v9729;
	i8 v9731 = (i8)(intptr_t)(ws+3312);
	i4 v9732 = *(i4*)(intptr_t)v9731;
	if ((s4)v9730<(s4)v9732) goto c02_068c; else goto c02_068b;

c02_068b:;

	i8 v9733 = (i8)(intptr_t)c02_s0176;
	i8 v9734 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9734)(v9733);

c02_068c:;

c02_0688:;

	i8 v9735 = (i8)(intptr_t)(ws+3328);
	i4 v9736 = *(i4*)(intptr_t)v9735;
	i8 v9737 = (i8)(intptr_t)(ws+3312);
	i4 v9738 = *(i4*)(intptr_t)v9737;
	i8 v9739 = (i8)(intptr_t)(f241_ArchGuessIntType);
	i8 v9740;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v9739)(&v9740, v9738, v9736);

	i8 v9741 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9741 = v9740;

	i8 v9742 = (i8)(intptr_t)(ws+3384);
	i8 v9743 = *(i8*)(intptr_t)v9742;
	i8 v9744 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9744 = v9743;

	i1 v9745 = (i1)+16;
	i8 v9746 = (i8)(intptr_t)(ws+3336);
	i8 v9747 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9747)(v9746, v9745);

	i1 v9748 = (i1)+45;
	i8 v9749 = (i8)(intptr_t)(ws+3320);
	i8 v9750 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9750)(v9749, v9748);

	i1 v9751 = (i1)+4;
	i8 v9752 = (i8)(intptr_t)(ws+3304);
	i8 v9753 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9753)(v9752, v9751);

endsub:;
}
	void f66_AllocNewType(i8* /* type */);
	void f74_StartError(void);
const i1 c02_s0177[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0178[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_62 workspace at ws+3384 length ws+24
void f373_reduce_62(void) {

	i8 v9754 = (i8)(intptr_t)(ws+3304);
	i8 v9755 = *(i8*)(intptr_t)v9754;
	i8 v9756 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9756 = v9755;

	i8 v9757 = (i8)(intptr_t)(ws+3384);
	i8 v9758 = *(i8*)(intptr_t)v9757;
	i8 v9759 = v9758+(+32);
	i1 v9760 = *(i1*)(intptr_t)v9759;
	i1 v9761 = (i1)+0;
	if (v9760==v9761) goto c02_0690; else goto c02_0691;

c02_0690:;

	i8 v9762 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v9763;

	((void(*)(i8* /* type */))(intptr_t)v9762)(&v9763);

	i8 v9764 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9764 = v9763;

	i8 v9765 = (i8)(intptr_t)(ws+3392);
	i8 v9766 = *(i8*)(intptr_t)v9765;
	i8 v9767 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9767 = v9766;

	i1 v9768 = (i1)+1;
	i8 v9769 = (i8)(intptr_t)(ws+3400);
	i8 v9770 = *(i8*)(intptr_t)v9769;
	i8 v9771 = v9770+(+52);
	*(i1*)(intptr_t)v9771 = v9768;

	i1 v9772 = (i1)+30;
	i8 v9773 = (i8)(intptr_t)(ws+3384);
	i8 v9774 = *(i8*)(intptr_t)v9773;
	i8 v9775 = v9774+(+32);
	*(i1*)(intptr_t)v9775 = v9772;

	i8 v9776 = (i8)(intptr_t)(ws+3400);
	i8 v9777 = *(i8*)(intptr_t)v9776;
	i8 v9778 = (i8)(intptr_t)(ws+3384);
	i8 v9779 = *(i8*)(intptr_t)v9778;
	*(i8*)(intptr_t)v9779 = v9777;

	i8 v9780 = (i8)(intptr_t)(ws+3384);
	i8 v9781 = *(i8*)(intptr_t)v9780;
	i8 v9782 = (i8)(intptr_t)(ws+3400);
	i8 v9783 = *(i8*)(intptr_t)v9782;
	i8 v9784 = v9783+(+32);
	*(i8*)(intptr_t)v9784 = v9781;

c02_0691:;

c02_068d:;

	i8 v9785 = (i8)(intptr_t)(ws+3384);
	i8 v9786 = *(i8*)(intptr_t)v9785;
	i8 v9787 = v9786+(+32);
	i1 v9788 = *(i1*)(intptr_t)v9787;
	i1 v9789 = (i1)+30;
	if (v9788==v9789) goto c02_0696; else goto c02_0695;

c02_0695:;

	i8 v9790 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9790)();

	i8 v9791 = (i8)(intptr_t)c02_s0177;
	i8 v9792 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9792)(v9791);

	i8 v9793 = (i8)(intptr_t)(ws+3384);
	i8 v9794 = *(i8*)(intptr_t)v9793;
	i8 v9795 = v9794+(+8);
	i8 v9796 = *(i8*)(intptr_t)v9795;
	i8 v9797 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9797)(v9796);

	i8 v9798 = (i8)(intptr_t)c02_s0178;
	i8 v9799 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9799)(v9798);

	i8 v9800 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9800)();

c02_0696:;

c02_0692:;

	i8 v9801 = (i8)(intptr_t)(ws+3384);
	i8 v9802 = *(i8*)(intptr_t)v9801;
	i8 v9803 = *(i8*)(intptr_t)v9802;
	i8 v9804 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9804 = v9803;

endsub:;
}
	void f261_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_63 workspace at ws+3384 length ws+8
void f374_reduce_63(void) {

	i8 v9805 = (i8)(intptr_t)(ws+3312);
	i8 v9806 = *(i8*)(intptr_t)v9805;
	i8 v9807 = (i8)(intptr_t)(f261_MakePointerType);
	i8 v9808;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v9807)(&v9808, v9806);

	i8 v9809 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9809 = v9808;

	i8 v9810 = (i8)(intptr_t)(ws+3384);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9812 = v9811;

	i1 v9813 = (i1)+5;
	i8 v9814 = (i8)(intptr_t)(ws+3304);
	i8 v9815 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9815)(v9814, v9813);

endsub:;
}
	void f262_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3384 length ws+8
void f375_reduce_64(void) {

	i8 v9816 = (i8)(intptr_t)(ws+3328);
	i8 v9817 = *(i8*)(intptr_t)v9816;
	i8 v9818 = (i8)(intptr_t)(ws+3312);
	i4 v9819 = *(i4*)(intptr_t)v9818;
	i2 v9820 = (s2)(s4)v9819;
	i8 v9821 = (i8)(intptr_t)(f262_MakeArrayType);
	i8 v9822;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v9821)(&v9822, v9820, v9817);

	i8 v9823 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9823 = v9822;

	i8 v9824 = (i8)(intptr_t)(ws+3384);
	i8 v9825 = *(i8*)(intptr_t)v9824;
	i8 v9826 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9826 = v9825;

	i1 v9827 = (i1)+17;
	i8 v9828 = (i8)(intptr_t)(ws+3320);
	i8 v9829 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9829)(v9828, v9827);

	i1 v9830 = (i1)+5;
	i8 v9831 = (i8)(intptr_t)(ws+3304);
	i8 v9832 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9832)(v9831, v9830);

endsub:;
}
	void f262_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_65 workspace at ws+3384 length ws+8
void f376_reduce_65(void) {

	i8 v9833 = (i8)(intptr_t)(ws+3320);
	i8 v9834 = *(i8*)(intptr_t)v9833;
	i2 v9835 = (i2)+0;
	i8 v9836 = (i8)(intptr_t)(f262_MakeArrayType);
	i8 v9837;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v9836)(&v9837, v9835, v9834);

	i8 v9838 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9838 = v9837;

	i8 v9839 = (i8)(intptr_t)(ws+3384);
	i8 v9840 = *(i8*)(intptr_t)v9839;
	i8 v9841 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9841 = v9840;

	i1 v9842 = (i1)+17;
	i8 v9843 = (i8)(intptr_t)(ws+3312);
	i8 v9844 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9844)(v9843, v9842);

	i1 v9845 = (i1)+5;
	i8 v9846 = (i8)(intptr_t)(ws+3304);
	i8 v9847 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9847)(v9846, v9845);

endsub:;
}
	void f226_IsArray(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0179[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_66 workspace at ws+3384 length ws+1
void f377_reduce_66(void) {

	i8 v9848 = (i8)(intptr_t)(ws+3304);
	i8 v9849 = *(i8*)(intptr_t)v9848;
	i8 v9850 = (i8)(intptr_t)(f226_IsArray);
	i1 v9851;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9850)(&v9851, v9849);

	i8 v9852 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v9852 = v9851;

	i8 v9853 = (i8)(intptr_t)(ws+3384);
	i1 v9854 = *(i1*)(intptr_t)v9853;
	i1 v9855 = (i1)+0;
	if (v9854==v9855) goto c02_069a; else goto c02_069b;

c02_069a:;

	i8 v9856 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9856)();

	i8 v9857 = (i8)(intptr_t)(ws+3304);
	i8 v9858 = *(i8*)(intptr_t)v9857;
	i8 v9859 = v9858+(+32);
	i8 v9860 = *(i8*)(intptr_t)v9859;
	i8 v9861 = v9860+(+8);
	i8 v9862 = *(i8*)(intptr_t)v9861;
	i8 v9863 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9863)(v9862);

	i8 v9864 = (i8)(intptr_t)c02_s0179;
	i8 v9865 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9865)(v9864);

	i8 v9866 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9866)();

c02_069b:;

c02_0697:;

	i8 v9867 = (i8)(intptr_t)(ws+3304);
	i8 v9868 = *(i8*)(intptr_t)v9867;
	i8 v9869 = v9868+(+16);
	i8 v9870 = *(i8*)(intptr_t)v9869;
	i8 v9871 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9871 = v9870;

endsub:;
}
	void f220_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_67 workspace at ws+3384 length ws+16
void f378_reduce_67(void) {

	i8 v9872 = (i8)+0;
	i8 v9873 = (i8)(intptr_t)(ws+3328);
	i8 v9874 = *(i8*)(intptr_t)v9873;
	i8 v9875 = (i8)(intptr_t)(ws+3312);
	i8 v9876 = *(i8*)(intptr_t)v9875;
	i8 v9877 = v9876+(+32);
	i8 v9878 = *(i8*)(intptr_t)v9877;
	i8 v9879 = (i8)(intptr_t)(f220_AddAlias);
	i8 v9880;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v9879)(&v9880, v9878, v9874, v9872);

	i8 v9881 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9881 = v9880;

	i8 v9882 = (i8)(intptr_t)(ws+3384);
	i8 v9883 = *(i8*)(intptr_t)v9882;
	i8 v9884 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9884 = v9883;

	i1 v9885 = (i1)+65;
	i8 v9886 = (i8)(intptr_t)(ws+3320);
	i8 v9887 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9887)(v9886, v9885);

	i1 v9888 = (i1)+22;
	i8 v9889 = (i8)(intptr_t)(ws+3304);
	i8 v9890 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9890)(v9889, v9888);

endsub:;
}
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_68 workspace at ws+3384 length ws+8
void f379_reduce_68(void) {

	i8 v9891 = (i8)+0;
	i8 v9892 = (i8)(intptr_t)(ws+3304);
	i8 v9893 = *(i8*)(intptr_t)v9892;
	i8 v9894 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v9895;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9894)(&v9895, v9893, v9891);

	i8 v9896 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9896 = v9895;

	i8 v9897 = (i8)(intptr_t)(ws+3384);
	i8 v9898 = *(i8*)(intptr_t)v9897;
	i8 v9899 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9899 = v9898;

endsub:;
}
	void f217_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f74_StartError(void);
const i1 c02_s017a[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s017b[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f34_Free(i8 /* block */);

// reduce_69 workspace at ws+3384 length ws+24
void f380_reduce_69(void) {

	i8 v9900 = (i8)(intptr_t)(ws+3304);
	i8 v9901 = *(i8*)(intptr_t)v9900;
	i8 v9902 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9902 = v9901;

	i8 v9903 = (i8)+0;
	i8 v9904 = (i8)(intptr_t)(ws+3384);
	i8 v9905 = *(i8*)(intptr_t)v9904;
	i8 v9906 = (i8)(intptr_t)(f217_LookupSymbol);
	i8 v9907;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9906)(&v9907, v9905, v9903);

	i8 v9908 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9908 = v9907;

	i8 v9909 = (i8)(intptr_t)(ws+3392);
	i8 v9910 = *(i8*)(intptr_t)v9909;
	i8 v9911 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9911 = v9910;

	i8 v9912 = (i8)(intptr_t)(ws+3400);
	i8 v9913 = *(i8*)(intptr_t)v9912;
	i8 v9914 = (i8)+0;
	if (v9913==v9914) goto c02_069f; else goto c02_06a0;

c02_069f:;

	i8 v9915 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v9915)();

	i8 v9916 = (i8)(intptr_t)c02_s017a;
	i8 v9917 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9917)(v9916);

	i8 v9918 = (i8)(intptr_t)(ws+3384);
	i8 v9919 = *(i8*)(intptr_t)v9918;
	i8 v9920 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9920)(v9919);

	i8 v9921 = (i8)(intptr_t)c02_s017b;
	i8 v9922 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9922)(v9921);

	i8 v9923 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v9923)();

c02_06a0:;

c02_069c:;

	i8 v9924 = (i8)(intptr_t)(ws+3384);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	i8 v9926 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v9926)(v9925);

	i8 v9927 = (i8)(intptr_t)(ws+3400);
	i8 v9928 = *(i8*)(intptr_t)v9927;
	i8 v9929 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9929 = v9928;

endsub:;
}
	void f217_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f34_Free(i8 /* block */);

// reduce_70 workspace at ws+3384 length ws+32
void f381_reduce_70(void) {

	i8 v9930 = (i8)(intptr_t)(ws+3304);
	i8 v9931 = *(i8*)(intptr_t)v9930;
	i8 v9932 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9932 = v9931;

	i8 v9933 = (i8)+0;
	i8 v9934 = (i8)(intptr_t)(ws+3384);
	i8 v9935 = *(i8*)(intptr_t)v9934;
	i8 v9936 = (i8)(intptr_t)(f217_LookupSymbol);
	i8 v9937;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9936)(&v9937, v9935, v9933);

	i8 v9938 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v9938 = v9937;

	i8 v9939 = (i8)(intptr_t)(ws+3392);
	i8 v9940 = *(i8*)(intptr_t)v9939;
	i8 v9941 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9941 = v9940;

	i8 v9942 = (i8)(intptr_t)(ws+3400);
	i8 v9943 = *(i8*)(intptr_t)v9942;
	i8 v9944 = (i8)+0;
	if (v9943==v9944) goto c02_06a4; else goto c02_06a5;

c02_06a4:;

	i8 v9945 = (i8)+0;
	i8 v9946 = (i8)(intptr_t)(ws+3384);
	i8 v9947 = *(i8*)(intptr_t)v9946;
	i8 v9948 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v9949;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9948)(&v9949, v9947, v9945);

	i8 v9950 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v9950 = v9949;

	i8 v9951 = (i8)(intptr_t)(ws+3408);
	i8 v9952 = *(i8*)(intptr_t)v9951;
	i8 v9953 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v9953 = v9952;

	goto c02_06a1;

c02_06a5:;

	i8 v9954 = (i8)(intptr_t)(ws+3384);
	i8 v9955 = *(i8*)(intptr_t)v9954;
	i8 v9956 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v9956)(v9955);

c02_06a1:;

	i8 v9957 = (i8)(intptr_t)(ws+3400);
	i8 v9958 = *(i8*)(intptr_t)v9957;
	i8 v9959 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9959 = v9958;

endsub:;
}
const i1 c02_s017c[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_71 workspace at ws+3384 length ws+0
void f382_reduce_71(void) {

	i8 v9960 = (i8)(intptr_t)(ws+3304);
	i8 v9961 = *(i8*)(intptr_t)v9960;
	i8 v9962 = v9961+(+32);
	i1 v9963 = *(i1*)(intptr_t)v9962;

	if (v9963 != +28) goto c02_06a7;

	i8 v9964 = (i8)(intptr_t)(ws+3304);
	i8 v9965 = *(i8*)(intptr_t)v9964;
	i8 v9966 = *(i8*)(intptr_t)v9965;
	i8 v9967 = *(i8*)(intptr_t)v9966;
	i8 v9968 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9968 = v9967;

	goto c02_06a6;

c02_06a7:;

	if (v9963 != +30) goto c02_06a8;

	i8 v9969 = (i8)(intptr_t)(ws+3304);
	i8 v9970 = *(i8*)(intptr_t)v9969;
	i8 v9971 = *(i8*)(intptr_t)v9970;
	i8 v9972 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9972 = v9971;

	goto c02_06a6;

c02_06a8:;

	i8 v9973 = (i8)(intptr_t)c02_s017c;
	i8 v9974 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9974)(v9973);

c02_06a6:;


endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_72 workspace at ws+3384 length ws+0
void f383_reduce_72(void) {

	i8 v9975 = (i8)(intptr_t)(ws+3312);
	i8 v9976 = *(i8*)(intptr_t)v9975;
	i8 v9977 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v9977 = v9976;

	i1 v9978 = (i1)+4;
	i8 v9979 = (i8)(intptr_t)(ws+3304);
	i8 v9980 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9980)(v9979, v9978);

endsub:;
}
	void f291_i_check_sub_call_args(void);
const i1 c02_s017d[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f76_SimpleError(i8 /* message */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f260_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f119_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f257_Generate(i8 /* statement */);
	void f149_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f162_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f142_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f292_i_end_call(void);
	void f162_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);

// reduce_73 workspace at ws+3384 length ws+104
void f384_reduce_73(void) {

	i8 v9981 = (i8)(intptr_t)(ws+80);
	i8 v9982 = *(i8*)(intptr_t)v9981;
	i8 v9983 = v9982+(+8);
	i8 v9984 = *(i8*)(intptr_t)v9983;
	i8 v9985 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v9985 = v9984;

	i1 v9986 = (i1)+1;
	i8 v9987 = (i8)(intptr_t)(ws+80);
	i8 v9988 = *(i8*)(intptr_t)v9987;
	i8 v9989 = v9988+(+41);
	*(i1*)(intptr_t)v9989 = v9986;

	i8 v9990 = (i8)(intptr_t)(f291_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v9990)();

	i8 v9991 = (i8)(intptr_t)(ws+3384);
	i8 v9992 = *(i8*)(intptr_t)v9991;
	i8 v9993 = v9992+(+81);
	i1 v9994 = *(i1*)(intptr_t)v9993;
	i1 v9995 = (i1)+1;
	if (v9994==v9995) goto c02_06ad; else goto c02_06ac;

c02_06ac:;

	i8 v9996 = (i8)(intptr_t)c02_s017d;
	i8 v9997 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9997)(v9996);

c02_06ad:;

c02_06a9:;

	i8 v9998 = (i8)(intptr_t)(ws+3384);
	i8 v9999 = *(i8*)(intptr_t)v9998;
	i1 v10000 = (i1)+0;
	i8 v10001 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v10002;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v10001)(&v10002, v10000, v9999);

	i8 v10003 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10003 = v10002;

	i8 v10004 = (i8)(intptr_t)(ws+3392);
	i8 v10005 = *(i8*)(intptr_t)v10004;
	i8 v10006 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10006 = v10005;

	i8 v10007 = (i8)(intptr_t)(ws+3400);
	i8 v10008 = *(i8*)(intptr_t)v10007;
	i8 v10009 = *(i8*)(intptr_t)v10008;
	i8 v10010 = *(i8*)(intptr_t)v10009;
	i8 v10011 = v10010+(+48);
	i2 v10012 = *(i2*)(intptr_t)v10011;
	i1 v10013 = v10012;
	i8 v10014 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v10014 = v10013;

	i8 v10015 = (i8)(intptr_t)(ws+40);
	i8 v10016 = *(i8*)(intptr_t)v10015;
	i8 v10017 = v10016+(+16);
	i8 v10018 = (i8)+0;
	i8 v10019 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v10020;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v10019)(&v10020, v10018, v10017);

	i8 v10021 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v10021 = v10020;

	i8 v10022 = (i8)(intptr_t)(ws+3416);
	i8 v10023 = *(i8*)(intptr_t)v10022;
	i8 v10024 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10024 = v10023;

	i8 v10025 = (i8)(intptr_t)(ws+40);
	i8 v10026 = *(i8*)(intptr_t)v10025;
	i8 v10027 = (i8)(intptr_t)(ws+3424);
	i8 v10028 = *(i8*)(intptr_t)v10027;
	i8 v10029 = (i8)(intptr_t)(ws+3400);
	i8 v10030 = *(i8*)(intptr_t)v10029;
	i8 v10031 = *(i8*)(intptr_t)v10030;
	i8 v10032 = *(i8*)(intptr_t)v10031;
	i8 v10033 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10033)(v10032, v10028, v10026);

	i8 v10034 = (i8)(intptr_t)(ws+3304);
	i8 v10035 = *(i8*)(intptr_t)v10034;
	i8 v10036 = (i8)(intptr_t)(ws+80);
	i8 v10037 = *(i8*)(intptr_t)v10036;
	i8 v10038 = *(i8*)(intptr_t)v10037;
	i8 v10039 = (i8)(intptr_t)(ws+3384);
	i8 v10040 = *(i8*)(intptr_t)v10039;
	i8 v10041 = (i8)(intptr_t)(f119_MidCall);
	i8 v10042;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v10041)(&v10042, v10040, v10038, v10035);

	i8 v10043 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v10043 = v10042;

	i8 v10044 = (i8)(intptr_t)(ws+3432);
	i8 v10045 = *(i8*)(intptr_t)v10044;
	i8 v10046 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10046)(v10045);

	i8 v10047 = (i8)(intptr_t)(ws+3408);
	i1 v10048 = *(i1*)(intptr_t)v10047;
	i8 v10049 = (i8)(intptr_t)(ws+3384);
	i8 v10050 = *(i8*)(intptr_t)v10049;
	i1 v10051 = (i1)+0;
	i8 v10052 = (i8)(intptr_t)(f149_MidPoparg);
	i8 v10053;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v10052)(&v10053, v10051, v10050, v10048);

	i8 v10054 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v10054 = v10053;

	i8 v10055 = (i8)(intptr_t)(ws+3424);
	i8 v10056 = *(i8*)(intptr_t)v10055;
	i2 v10057 = (i2)+0;
	i8 v10058 = (i8)(intptr_t)(f162_MidAddress);
	i8 v10059;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10058)(&v10059, v10057, v10056);

	i8 v10060 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v10060 = v10059;

	i8 v10061 = (i8)(intptr_t)(ws+3408);
	i1 v10062 = *(i1*)(intptr_t)v10061;
	i8 v10063 = (i8)(intptr_t)(ws+3448);
	i8 v10064 = *(i8*)(intptr_t)v10063;
	i8 v10065 = (i8)(intptr_t)(f106_MidDeref);
	i8 v10066;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v10065)(&v10066, v10064, v10062);

	i8 v10067 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v10067 = v10066;

	i8 v10068 = (i8)(intptr_t)(ws+3408);
	i1 v10069 = *(i1*)(intptr_t)v10068;
	i8 v10070 = (i8)(intptr_t)(ws+3440);
	i8 v10071 = *(i8*)(intptr_t)v10070;
	i8 v10072 = (i8)(intptr_t)(ws+3456);
	i8 v10073 = *(i8*)(intptr_t)v10072;
	i8 v10074 = (i8)(intptr_t)(f142_MidStore);
	i8 v10075;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10074)(&v10075, v10073, v10071, v10069);

	i8 v10076 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v10076 = v10075;

	i8 v10077 = (i8)(intptr_t)(ws+3464);
	i8 v10078 = *(i8*)(intptr_t)v10077;
	i8 v10079 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10079)(v10078);

	i8 v10080 = (i8)(intptr_t)(f292_i_end_call);

	((void(*)(void))(intptr_t)v10080)();

	i8 v10081 = (i8)(intptr_t)(ws+3424);
	i8 v10082 = *(i8*)(intptr_t)v10081;
	i2 v10083 = (i2)+0;
	i8 v10084 = (i8)(intptr_t)(f162_MidAddress);
	i8 v10085;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10084)(&v10085, v10083, v10082);

	i8 v10086 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v10086 = v10085;

	i8 v10087 = (i8)(intptr_t)(ws+3408);
	i1 v10088 = *(i1*)(intptr_t)v10087;
	i8 v10089 = (i8)(intptr_t)(ws+3472);
	i8 v10090 = *(i8*)(intptr_t)v10089;
	i8 v10091 = (i8)(intptr_t)(f106_MidDeref);
	i8 v10092;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v10091)(&v10092, v10090, v10088);

	i8 v10093 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v10093 = v10092;

	i8 v10094 = (i8)(intptr_t)(ws+3480);
	i8 v10095 = *(i8*)(intptr_t)v10094;
	i8 v10096 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10096 = v10095;

	i8 v10097 = (i8)(intptr_t)(ws+3400);
	i8 v10098 = *(i8*)(intptr_t)v10097;
	i8 v10099 = *(i8*)(intptr_t)v10098;
	i8 v10100 = *(i8*)(intptr_t)v10099;
	i8 v10101 = (i8)(intptr_t)(ws+3296);
	i8 v10102 = *(i8*)(intptr_t)v10101;
	i8 v10103 = v10102+(+16);
	*(i8*)(intptr_t)v10103 = v10100;

endsub:;
}
	void f291_i_check_sub_call_args(void);
const i1 c02_s017e[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f119_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f257_Generate(i8 /* statement */);
	void f292_i_end_call(void);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3384 length ws+16
void f385_reduce_74(void) {

	i8 v10104 = (i8)(intptr_t)(ws+80);
	i8 v10105 = *(i8*)(intptr_t)v10104;
	i8 v10106 = v10105+(+8);
	i8 v10107 = *(i8*)(intptr_t)v10106;
	i8 v10108 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10108 = v10107;

	i8 v10109 = (i8)(intptr_t)(f291_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v10109)();

	i8 v10110 = (i8)(intptr_t)(ws+3384);
	i8 v10111 = *(i8*)(intptr_t)v10110;
	i8 v10112 = v10111+(+81);
	i1 v10113 = *(i1*)(intptr_t)v10112;
	i1 v10114 = (i1)+0;
	if (v10113==v10114) goto c02_06b2; else goto c02_06b1;

c02_06b1:;

	i8 v10115 = (i8)(intptr_t)c02_s017e;
	i8 v10116 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10116)(v10115);

c02_06b2:;

c02_06ae:;

	i8 v10117 = (i8)(intptr_t)(ws+3312);
	i8 v10118 = *(i8*)(intptr_t)v10117;
	i8 v10119 = (i8)(intptr_t)(ws+80);
	i8 v10120 = *(i8*)(intptr_t)v10119;
	i8 v10121 = *(i8*)(intptr_t)v10120;
	i8 v10122 = (i8)(intptr_t)(ws+3384);
	i8 v10123 = *(i8*)(intptr_t)v10122;
	i8 v10124 = (i8)(intptr_t)(f119_MidCall);
	i8 v10125;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v10124)(&v10125, v10123, v10121, v10118);

	i8 v10126 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10126 = v10125;

	i8 v10127 = (i8)(intptr_t)(ws+3392);
	i8 v10128 = *(i8*)(intptr_t)v10127;
	i8 v10129 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10129)(v10128);

	i8 v10130 = (i8)(intptr_t)(f292_i_end_call);

	((void(*)(void))(intptr_t)v10130)();

	i1 v10131 = (i1)+22;
	i8 v10132 = (i8)(intptr_t)(ws+3304);
	i8 v10133 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10133)(v10132, v10131);

endsub:;
}
	void f291_i_check_sub_call_args(void);
	void f119_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f257_Generate(i8 /* statement */);
const i1 c02_s017f[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0180[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f261_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f222_CheckNotPartialType(i8 /* type */);
	void f222_CheckNotPartialType(i8 /* type */);
	void f149_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f106_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f142_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f63_Discard(i8 /* node */);
const i1 c02_s0181[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f292_i_end_call(void);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_75 workspace at ws+3384 length ws+104
void f386_reduce_75(void) {

	i8 v10134 = (i8)(intptr_t)(ws+80);
	i8 v10135 = *(i8*)(intptr_t)v10134;
	i8 v10136 = v10135+(+8);
	i8 v10137 = *(i8*)(intptr_t)v10136;
	i8 v10138 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10138 = v10137;

	i8 v10139 = (i8)(intptr_t)(f291_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v10139)();

	i8 v10140 = (i8)(intptr_t)(ws+3312);
	i8 v10141 = *(i8*)(intptr_t)v10140;
	i8 v10142 = (i8)(intptr_t)(ws+80);
	i8 v10143 = *(i8*)(intptr_t)v10142;
	i8 v10144 = *(i8*)(intptr_t)v10143;
	i8 v10145 = (i8)(intptr_t)(ws+3384);
	i8 v10146 = *(i8*)(intptr_t)v10145;
	i8 v10147 = (i8)(intptr_t)(f119_MidCall);
	i8 v10148;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v10147)(&v10148, v10146, v10144, v10141);

	i8 v10149 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10149 = v10148;

	i8 v10150 = (i8)(intptr_t)(ws+3392);
	i8 v10151 = *(i8*)(intptr_t)v10150;
	i8 v10152 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10152)(v10151);

	i8 v10153 = (i8)(intptr_t)(ws+3384);
	i8 v10154 = *(i8*)(intptr_t)v10153;
	i8 v10155 = v10154+(+81);
	i1 v10156 = *(i1*)(intptr_t)v10155;
	i8 v10157 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v10157 = v10156;

	i1 v10158 = (i1)+0;
	i8 v10159 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v10159 = v10158;

	i8 v10160 = (i8)(intptr_t)(ws+3336);
	i8 v10161 = *(i8*)(intptr_t)v10160;
	i8 v10162 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10162 = v10161;

c02_06b3:;

	i8 v10163 = (i8)(intptr_t)(ws+3408);
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = (i8)+0;
	if (v10164==v10165) goto c02_06b8; else goto c02_06b7;

c02_06b7:;

	i8 v10166 = (i8)(intptr_t)(ws+3400);
	i1 v10167 = *(i1*)(intptr_t)v10166;
	i1 v10168 = (i1)+0;
	if (v10167==v10168) goto c02_06bc; else goto c02_06bd;

c02_06bc:;

	i8 v10169 = (i8)(intptr_t)c02_s017f;
	i8 v10170 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10170)(v10169);

c02_06bd:;

c02_06b9:;

	i8 v10171 = (i8)(intptr_t)(ws+3400);
	i1 v10172 = *(i1*)(intptr_t)v10171;
	i1 v10173 = v10172+(-1);
	i8 v10174 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v10174 = v10173;

	i8 v10175 = (i8)(intptr_t)(ws+3384);
	i8 v10176 = *(i8*)(intptr_t)v10175;
	i8 v10177 = (i8)(intptr_t)(ws+3400);
	i1 v10178 = *(i1*)(intptr_t)v10177;
	i8 v10179 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v10180;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v10179)(&v10180, v10178, v10176);

	i8 v10181 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v10181 = v10180;

	i8 v10182 = (i8)(intptr_t)(ws+3416);
	i8 v10183 = *(i8*)(intptr_t)v10182;
	i8 v10184 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10184 = v10183;

	i8 v10185 = (i8)(intptr_t)(ws+3408);
	i8 v10186 = *(i8*)(intptr_t)v10185;
	i8 v10187 = v10186+(+24);
	i8 v10188 = *(i8*)(intptr_t)v10187;
	i8 v10189 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v10189 = v10188;

	i8 v10190 = (i8)+0;
	i8 v10191 = (i8)(intptr_t)(ws+3408);
	i8 v10192 = *(i8*)(intptr_t)v10191;
	i8 v10193 = v10192+(+24);
	*(i8*)(intptr_t)v10193 = v10190;

	i8 v10194 = (i8)(intptr_t)(ws+3408);
	i8 v10195 = *(i8*)(intptr_t)v10194;
	i8 v10196 = v10195+(+32);
	i8 v10197 = *(i8*)(intptr_t)v10196;
	i8 v10198 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10198 = v10197;

	i8 v10199 = (i8)(intptr_t)(ws+3432);
	i8 v10200 = *(i8*)(intptr_t)v10199;
	i8 v10201 = v10200+(+16);
	i8 v10202 = *(i8*)(intptr_t)v10201;
	i8 v10203 = (i8)(intptr_t)(f68_IsPtr);
	i1 v10204;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10203)(&v10204, v10202);

	i8 v10205 = (i8)(intptr_t)(ws+3440);
	*(i1*)(intptr_t)v10205 = v10204;

	i8 v10206 = (i8)(intptr_t)(ws+3440);
	i1 v10207 = *(i1*)(intptr_t)v10206;
	i1 v10208 = (i1)+0;
	if (v10207==v10208) goto c02_06c1; else goto c02_06c2;

c02_06c1:;

	i8 v10209 = (i8)(intptr_t)c02_s0180;
	i8 v10210 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10210)(v10209);

c02_06c2:;

c02_06be:;

	i8 v10211 = (i8)(intptr_t)(ws+3424);
	i8 v10212 = *(i8*)(intptr_t)v10211;
	i8 v10213 = *(i8*)(intptr_t)v10212;
	i8 v10214 = *(i8*)(intptr_t)v10213;
	i8 v10215 = (i8)(intptr_t)(f261_MakePointerType);
	i8 v10216;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v10215)(&v10216, v10214);

	i8 v10217 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v10217 = v10216;

	i8 v10218 = (i8)(intptr_t)(ws+3432);
	i8 v10219 = *(i8*)(intptr_t)v10218;
	i8 v10220 = (i8)(intptr_t)(ws+3448);
	i8 v10221 = *(i8*)(intptr_t)v10220;
	i8 v10222 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10222)(v10221, v10219);

	i8 v10223 = (i8)(intptr_t)(ws+3424);
	i8 v10224 = *(i8*)(intptr_t)v10223;
	i8 v10225 = *(i8*)(intptr_t)v10224;
	i8 v10226 = *(i8*)(intptr_t)v10225;
	i8 v10227 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v10227)(v10226);

	i8 v10228 = (i8)(intptr_t)(ws+3432);
	i8 v10229 = *(i8*)(intptr_t)v10228;
	i8 v10230 = v10229+(+16);
	i8 v10231 = *(i8*)(intptr_t)v10230;
	i8 v10232 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v10232)(v10231);

	i8 v10233 = (i8)(intptr_t)(ws+3424);
	i8 v10234 = *(i8*)(intptr_t)v10233;
	i8 v10235 = *(i8*)(intptr_t)v10234;
	i8 v10236 = *(i8*)(intptr_t)v10235;
	i8 v10237 = v10236+(+48);
	i2 v10238 = *(i2*)(intptr_t)v10237;
	i1 v10239 = v10238;
	i8 v10240 = (i8)(intptr_t)(ws+3456);
	*(i1*)(intptr_t)v10240 = v10239;

	i8 v10241 = (i8)(intptr_t)(ws+3456);
	i1 v10242 = *(i1*)(intptr_t)v10241;
	i8 v10243 = (i8)(intptr_t)(ws+3384);
	i8 v10244 = *(i8*)(intptr_t)v10243;
	i8 v10245 = (i8)(intptr_t)(ws+3401);
	i1 v10246 = *(i1*)(intptr_t)v10245;
	i8 v10247 = (i8)(intptr_t)(f149_MidPoparg);
	i8 v10248;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v10247)(&v10248, v10246, v10244, v10242);

	i8 v10249 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v10249 = v10248;

	i8 v10250 = (i8)(intptr_t)(ws+3456);
	i1 v10251 = *(i1*)(intptr_t)v10250;
	i8 v10252 = (i8)(intptr_t)(ws+3432);
	i8 v10253 = *(i8*)(intptr_t)v10252;
	i8 v10254 = (i8)(intptr_t)(f106_MidDeref);
	i8 v10255;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v10254)(&v10255, v10253, v10251);

	i8 v10256 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v10256 = v10255;

	i8 v10257 = (i8)(intptr_t)(ws+3456);
	i1 v10258 = *(i1*)(intptr_t)v10257;
	i8 v10259 = (i8)(intptr_t)(ws+3464);
	i8 v10260 = *(i8*)(intptr_t)v10259;
	i8 v10261 = (i8)(intptr_t)(ws+3472);
	i8 v10262 = *(i8*)(intptr_t)v10261;
	i8 v10263 = (i8)(intptr_t)(f142_MidStore);
	i8 v10264;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10263)(&v10264, v10262, v10260, v10258);

	i8 v10265 = (i8)(intptr_t)(ws+3480);
	*(i8*)(intptr_t)v10265 = v10264;

	i8 v10266 = (i8)(intptr_t)(ws+3480);
	i8 v10267 = *(i8*)(intptr_t)v10266;
	i8 v10268 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10268)(v10267);

	i8 v10269 = (i8)(intptr_t)(ws+3401);
	i1 v10270 = *(i1*)(intptr_t)v10269;
	i1 v10271 = v10270+(+1);
	i8 v10272 = (i8)(intptr_t)(ws+3401);
	*(i1*)(intptr_t)v10272 = v10271;

	i8 v10273 = (i8)(intptr_t)(ws+3424);
	i8 v10274 = *(i8*)(intptr_t)v10273;
	i8 v10275 = *(i8*)(intptr_t)v10274;
	i8 v10276 = v10275+(+16);
	i8 v10277 = *(i8*)(intptr_t)v10276;
	i8 v10278 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10278 = v10277;

	goto c02_06b3;

c02_06b8:;

	i8 v10279 = (i8)(intptr_t)(ws+3336);
	i8 v10280 = *(i8*)(intptr_t)v10279;
	i8 v10281 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v10281)(v10280);

	i8 v10282 = (i8)(intptr_t)(ws+3401);
	i1 v10283 = *(i1*)(intptr_t)v10282;
	i8 v10284 = (i8)(intptr_t)(ws+3384);
	i8 v10285 = *(i8*)(intptr_t)v10284;
	i8 v10286 = v10285+(+81);
	i1 v10287 = *(i1*)(intptr_t)v10286;
	if (v10283==v10287) goto c02_06c7; else goto c02_06c6;

c02_06c6:;

	i8 v10288 = (i8)(intptr_t)c02_s0181;
	i8 v10289 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10289)(v10288);

c02_06c7:;

c02_06c3:;

	i8 v10290 = (i8)(intptr_t)(f292_i_end_call);

	((void(*)(void))(intptr_t)v10290)();

	i1 v10291 = (i1)+2;
	i8 v10292 = (i8)(intptr_t)(ws+3328);
	i8 v10293 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10293)(v10292, v10291);

	i1 v10294 = (i1)+22;
	i8 v10295 = (i8)(intptr_t)(ws+3304);
	i8 v10296 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10296)(v10295, v10294);

endsub:;
}
	void f227_IsSubroutine(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
const i1 c02_s0182[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0183[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f99_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);

// reduce_76 workspace at ws+3384 length ws+48
void f387_reduce_76(void) {

	i8 v10297 = (i8)(intptr_t)(ws+3304);
	i8 v10298 = *(i8*)(intptr_t)v10297;
	i8 v10299 = v10298+(+16);
	i8 v10300 = *(i8*)(intptr_t)v10299;
	i8 v10301 = (i8)(intptr_t)(f227_IsSubroutine);
	i1 v10302;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10301)(&v10302, v10300);

	i8 v10303 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10303 = v10302;

	i8 v10304 = (i8)(intptr_t)(ws+3384);
	i1 v10305 = *(i1*)(intptr_t)v10304;
	i1 v10306 = (i1)+0;
	if (v10305==v10306) goto c02_06cb; else goto c02_06cc;

c02_06cb:;

	i8 v10307 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10307)();

	i8 v10308 = (i8)(intptr_t)c02_s0182;
	i8 v10309 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10309)(v10308);

	i8 v10310 = (i8)(intptr_t)(ws+3304);
	i8 v10311 = *(i8*)(intptr_t)v10310;
	i8 v10312 = v10311+(+16);
	i8 v10313 = *(i8*)(intptr_t)v10312;
	i8 v10314 = v10313+(+32);
	i8 v10315 = *(i8*)(intptr_t)v10314;
	i8 v10316 = v10315+(+8);
	i8 v10317 = *(i8*)(intptr_t)v10316;
	i8 v10318 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10318)(v10317);

	i8 v10319 = (i8)(intptr_t)c02_s0183;
	i8 v10320 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10320)(v10319);

	i8 v10321 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10321)();

c02_06cc:;

c02_06c8:;

	i8 v10322 = (i8)+42;
	i8 v10323 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v10324;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10323)(&v10324, v10322);

	i8 v10325 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10325 = v10324;

	i8 v10326 = (i8)(intptr_t)(ws+3392);
	i8 v10327 = *(i8*)(intptr_t)v10326;
	i8 v10328 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10328 = v10327;

	i8 v10329 = (i8)(intptr_t)(ws+80);
	i8 v10330 = *(i8*)(intptr_t)v10329;
	i8 v10331 = (i8)(intptr_t)(ws+3400);
	i8 v10332 = *(i8*)(intptr_t)v10331;
	i8 v10333 = v10332+(+16);
	*(i8*)(intptr_t)v10333 = v10330;

	i8 v10334 = (i8)(intptr_t)(ws+3304);
	i8 v10335 = *(i8*)(intptr_t)v10334;
	i8 v10336 = v10335+(+16);
	i8 v10337 = *(i8*)(intptr_t)v10336;
	i8 v10338 = *(i8*)(intptr_t)v10337;
	i8 v10339 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10339 = v10338;

	i8 v10340 = (i8)(intptr_t)(ws+3304);
	i8 v10341 = *(i8*)(intptr_t)v10340;
	i8 v10342 = (i8)(intptr_t)(ws+3400);
	i8 v10343 = *(i8*)(intptr_t)v10342;
	*(i8*)(intptr_t)v10343 = v10341;

	i8 v10344 = (i8)(intptr_t)(ws+3408);
	i8 v10345 = *(i8*)(intptr_t)v10344;
	i8 v10346 = (i8)(intptr_t)(ws+3400);
	i8 v10347 = *(i8*)(intptr_t)v10346;
	i8 v10348 = v10347+(+8);
	*(i8*)(intptr_t)v10348 = v10345;

	i8 v10349 = (i8)(intptr_t)(ws+3408);
	i8 v10350 = *(i8*)(intptr_t)v10349;
	i1 v10351 = (i1)+0;
	i8 v10352 = (i8)(intptr_t)(f99_GetInputParameter);
	i8 v10353;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v10352)(&v10353, v10351, v10350);

	i8 v10354 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v10354 = v10353;

	i8 v10355 = (i8)(intptr_t)(ws+3416);
	i8 v10356 = *(i8*)(intptr_t)v10355;
	i8 v10357 = (i8)(intptr_t)(ws+3400);
	i8 v10358 = *(i8*)(intptr_t)v10357;
	i8 v10359 = v10358+(+24);
	*(i8*)(intptr_t)v10359 = v10356;

	i8 v10360 = (i8)(intptr_t)(ws+3408);
	i8 v10361 = *(i8*)(intptr_t)v10360;
	i1 v10362 = (i1)+0;
	i8 v10363 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v10364;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v10363)(&v10364, v10362, v10361);

	i8 v10365 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v10365 = v10364;

	i8 v10366 = (i8)(intptr_t)(ws+3424);
	i8 v10367 = *(i8*)(intptr_t)v10366;
	i8 v10368 = (i8)(intptr_t)(ws+3400);
	i8 v10369 = *(i8*)(intptr_t)v10368;
	i8 v10370 = v10369+(+32);
	*(i8*)(intptr_t)v10370 = v10367;

	i8 v10371 = (i8)(intptr_t)(ws+3400);
	i8 v10372 = *(i8*)(intptr_t)v10371;
	i8 v10373 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10373 = v10372;

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3384 length ws+0
void f388_reduce_77(void) {

	i8 v10374 = (i8)(intptr_t)(ws+3312);
	i8 v10375 = *(i8*)(intptr_t)v10374;
	i8 v10376 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10376 = v10375;

	i1 v10377 = (i1)+4;
	i8 v10378 = (i8)(intptr_t)(ws+3304);
	i8 v10379 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10379)(v10378, v10377);

endsub:;
}
	void f155_MidEnd(i8* /* m */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_78 workspace at ws+3384 length ws+8
void f389_reduce_78(void) {

	i8 v10380 = (i8)(intptr_t)(f155_MidEnd);
	i8 v10381;

	((void(*)(i8* /* m */))(intptr_t)v10380)(&v10381);

	i8 v10382 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10382 = v10381;

	i8 v10383 = (i8)(intptr_t)(ws+3384);
	i8 v10384 = *(i8*)(intptr_t)v10383;
	i8 v10385 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10385 = v10384;

	i1 v10386 = (i1)+4;
	i8 v10387 = (i8)(intptr_t)(ws+3304);
	i8 v10388 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10388)(v10387, v10386);

endsub:;
}

// reduce_79 workspace at ws+3384 length ws+0
void f390_reduce_79(void) {

	i8 v10389 = (i8)(intptr_t)(ws+3304);
	i8 v10390 = *(i8*)(intptr_t)v10389;
	i8 v10391 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10391 = v10390;

endsub:;
}
	void f63_Discard(i8 /* node */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_80 workspace at ws+3384 length ws+0
void f391_reduce_80(void) {

	i8 v10392 = (i8)(intptr_t)(ws+3304);
	i8 v10393 = *(i8*)(intptr_t)v10392;
	i8 v10394 = v10393+(+24);
	i8 v10395 = *(i8*)(intptr_t)v10394;
	i8 v10396 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v10396)(v10395);

	i8 v10397 = (i8)(intptr_t)(ws+3320);
	i8 v10398 = *(i8*)(intptr_t)v10397;
	i8 v10399 = (i8)(intptr_t)(ws+3304);
	i8 v10400 = *(i8*)(intptr_t)v10399;
	i8 v10401 = v10400+(+24);
	*(i8*)(intptr_t)v10401 = v10398;

	i8 v10402 = (i8)(intptr_t)(ws+3304);
	i8 v10403 = *(i8*)(intptr_t)v10402;
	i8 v10404 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10404 = v10403;

	i1 v10405 = (i1)+45;
	i8 v10406 = (i8)(intptr_t)(ws+3312);
	i8 v10407 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10407)(v10406, v10405);

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0184[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);
	void f269_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f222_CheckNotPartialType(i8 /* type */);
	void f222_CheckNotPartialType(i8 /* type */);
	void f166_NodeWidth(i1* /* width */, i8 /* node */);
	void f155_MidEnd(i8* /* m */);
	void f118_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_81 workspace at ws+3384 length ws+32
void f392_reduce_81(void) {

	i8 v10408 = (i8)(intptr_t)(ws+80);
	i8 v10409 = *(i8*)(intptr_t)v10408;
	i8 v10410 = v10409+(+24);
	i8 v10411 = *(i8*)(intptr_t)v10410;
	i8 v10412 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10412 = v10411;

	i8 v10413 = (i8)(intptr_t)(ws+3384);
	i8 v10414 = *(i8*)(intptr_t)v10413;
	i8 v10415 = (i8)+0;
	if (v10414==v10415) goto c02_06d0; else goto c02_06d1;

c02_06d0:;

	i8 v10416 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v10416)();

	i8 v10417 = (i8)(intptr_t)c02_s0184;
	i8 v10418 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10418)(v10417);

	i8 v10419 = (i8)(intptr_t)(ws+80);
	i8 v10420 = *(i8*)(intptr_t)v10419;
	i8 v10421 = v10420+(+8);
	i8 v10422 = *(i8*)(intptr_t)v10421;
	i8 v10423 = *(i8*)(intptr_t)v10422;
	i8 v10424 = v10423+(+8);
	i8 v10425 = *(i8*)(intptr_t)v10424;
	i8 v10426 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10426)(v10425);

	i8 v10427 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v10427)();

c02_06d1:;

c02_06cd:;

	i8 v10428 = (i8)(intptr_t)(ws+80);
	i8 v10429 = *(i8*)(intptr_t)v10428;
	i8 v10430 = v10429+(+24);
	i8 v10431 = *(i8*)(intptr_t)v10430;
	i8 v10432 = *(i8*)(intptr_t)v10431;
	i8 v10433 = v10432+(+16);
	i8 v10434 = *(i8*)(intptr_t)v10433;
	i8 v10435 = (i8)(intptr_t)(ws+80);
	i8 v10436 = *(i8*)(intptr_t)v10435;
	i8 v10437 = v10436+(+24);
	*(i8*)(intptr_t)v10437 = v10434;

	i8 v10438 = (i8)(intptr_t)(ws+3304);
	i8 v10439 = *(i8*)(intptr_t)v10438;
	i8 v10440 = (i8)(intptr_t)(ws+3384);
	i8 v10441 = *(i8*)(intptr_t)v10440;
	i8 v10442 = *(i8*)(intptr_t)v10441;
	i8 v10443 = *(i8*)(intptr_t)v10442;
	i8 v10444 = (i8)(intptr_t)(f269_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10444)(v10443, v10439);

	i8 v10445 = (i8)(intptr_t)(ws+3384);
	i8 v10446 = *(i8*)(intptr_t)v10445;
	i8 v10447 = *(i8*)(intptr_t)v10446;
	i8 v10448 = *(i8*)(intptr_t)v10447;
	i8 v10449 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v10449)(v10448);

	i8 v10450 = (i8)(intptr_t)(ws+3304);
	i8 v10451 = *(i8*)(intptr_t)v10450;
	i8 v10452 = v10451+(+16);
	i8 v10453 = *(i8*)(intptr_t)v10452;
	i8 v10454 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v10454)(v10453);

	i8 v10455 = (i8)(intptr_t)(ws+80);
	i8 v10456 = *(i8*)(intptr_t)v10455;
	i8 v10457 = v10456+(+40);
	i1 v10458 = *(i1*)(intptr_t)v10457;
	i1 v10459 = v10458+(+1);
	i8 v10460 = (i8)(intptr_t)(ws+80);
	i8 v10461 = *(i8*)(intptr_t)v10460;
	i8 v10462 = v10461+(+40);
	*(i1*)(intptr_t)v10462 = v10459;

	i8 v10463 = (i8)(intptr_t)(ws+3304);
	i8 v10464 = *(i8*)(intptr_t)v10463;
	i8 v10465 = (i8)(intptr_t)(f166_NodeWidth);
	i1 v10466;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10465)(&v10466, v10464);

	i8 v10467 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v10467 = v10466;

	i8 v10468 = (i8)(intptr_t)(f155_MidEnd);
	i8 v10469;

	((void(*)(i8* /* m */))(intptr_t)v10468)(&v10469);

	i8 v10470 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10470 = v10469;

	i8 v10471 = (i8)(intptr_t)(ws+3392);
	i1 v10472 = *(i1*)(intptr_t)v10471;
	i8 v10473 = (i8)(intptr_t)(ws+3400);
	i8 v10474 = *(i8*)(intptr_t)v10473;
	i8 v10475 = (i8)(intptr_t)(ws+3304);
	i8 v10476 = *(i8*)(intptr_t)v10475;
	i8 v10477 = (i8)(intptr_t)(ws+80);
	i8 v10478 = *(i8*)(intptr_t)v10477;
	i8 v10479 = v10478+(+8);
	i8 v10480 = *(i8*)(intptr_t)v10479;
	i8 v10481 = (i8)(intptr_t)(ws+80);
	i8 v10482 = *(i8*)(intptr_t)v10481;
	i8 v10483 = v10482+(+8);
	i8 v10484 = *(i8*)(intptr_t)v10483;
	i8 v10485 = v10484+(+80);
	i1 v10486 = *(i1*)(intptr_t)v10485;
	i8 v10487 = (i8)(intptr_t)(ws+80);
	i8 v10488 = *(i8*)(intptr_t)v10487;
	i8 v10489 = v10488+(+40);
	i1 v10490 = *(i1*)(intptr_t)v10489;
	i1 v10491 = v10486-v10490;
	i8 v10492 = (i8)(intptr_t)(f118_MidArg);
	i8 v10493;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10492)(&v10493, v10491, v10480, v10476, v10474, v10472);

	i8 v10494 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10494 = v10493;

	i8 v10495 = (i8)(intptr_t)(ws+3408);
	i8 v10496 = *(i8*)(intptr_t)v10495;
	i8 v10497 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10497 = v10496;

endsub:;
}
	void f156_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_82 workspace at ws+3384 length ws+8
void f393_reduce_82(void) {

	i8 v10498 = (i8)(intptr_t)(ws+3312);
	i8 v10499 = *(i8*)(intptr_t)v10498;
	i8 v10500 = (i8)(intptr_t)(ws+3328);
	i8 v10501 = *(i8*)(intptr_t)v10500;
	i8 v10502 = (i8)(intptr_t)(f156_MidPair);
	i8 v10503;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v10502)(&v10503, v10501, v10499);

	i8 v10504 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10504 = v10503;

	i8 v10505 = (i8)(intptr_t)(ws+3384);
	i8 v10506 = *(i8*)(intptr_t)v10505;
	i8 v10507 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10507 = v10506;

	i1 v10508 = (i1)+45;
	i8 v10509 = (i8)(intptr_t)(ws+3320);
	i8 v10510 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10510)(v10509, v10508);

	i1 v10511 = (i1)+4;
	i8 v10512 = (i8)(intptr_t)(ws+3304);
	i8 v10513 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10513)(v10512, v10511);

endsub:;
}
	void f156_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_83 workspace at ws+3384 length ws+8
void f394_reduce_83(void) {

	i8 v10514 = (i8)(intptr_t)(ws+3304);
	i8 v10515 = *(i8*)(intptr_t)v10514;
	i8 v10516 = (i8)+0;
	i8 v10517 = (i8)(intptr_t)(f156_MidPair);
	i8 v10518;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v10517)(&v10518, v10516, v10515);

	i8 v10519 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10519 = v10518;

	i8 v10520 = (i8)(intptr_t)(ws+3384);
	i8 v10521 = *(i8*)(intptr_t)v10520;
	i8 v10522 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10522 = v10521;

endsub:;
}
	void f156_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_84 workspace at ws+3384 length ws+8
void f395_reduce_84(void) {

	i8 v10523 = (i8)(intptr_t)(ws+3304);
	i8 v10524 = *(i8*)(intptr_t)v10523;
	i8 v10525 = (i8)(intptr_t)(ws+3320);
	i8 v10526 = *(i8*)(intptr_t)v10525;
	i8 v10527 = (i8)(intptr_t)(f156_MidPair);
	i8 v10528;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v10527)(&v10528, v10526, v10524);

	i8 v10529 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10529 = v10528;

	i8 v10530 = (i8)(intptr_t)(ws+3384);
	i8 v10531 = *(i8*)(intptr_t)v10530;
	i8 v10532 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10532 = v10531;

	i1 v10533 = (i1)+45;
	i8 v10534 = (i8)(intptr_t)(ws+3312);
	i8 v10535 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10535)(v10534, v10533);

endsub:;
}
	void f233_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_85 workspace at ws+3384 length ws+8
void f396_reduce_85(void) {

	i8 v10536 = (i8)(intptr_t)(ws+3304);
	i8 v10537 = *(i8*)(intptr_t)v10536;
	i8 v10538 = (i8)(intptr_t)(f233_UndoLValue);
	i8 v10539;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v10538)(&v10539, v10537);

	i8 v10540 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10540 = v10539;

	i8 v10541 = (i8)(intptr_t)(ws+3384);
	i8 v10542 = *(i8*)(intptr_t)v10541;
	i8 v10543 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10543 = v10542;

endsub:;
}
	void f206_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f110_MidStartsub(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f136_MidEndsub(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f267_ReportWorkspaces(i8 /* subr */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_86 workspace at ws+3384 length ws+16
void f397_reduce_86(void) {

	i8 v10544 = (i8)(intptr_t)(ws+1544);
	i8 v10545 = *(i8*)(intptr_t)v10544;
	i8 v10546 = v10545+(+82);
	i1 v10547 = *(i1*)(intptr_t)v10546;
	i1 v10548 = v10547|(+2);
	i8 v10549 = (i8)(intptr_t)(ws+1544);
	i8 v10550 = *(i8*)(intptr_t)v10549;
	i8 v10551 = v10550+(+82);
	*(i1*)(intptr_t)v10551 = v10548;

	i8 v10552 = (i8)(intptr_t)(ws+1544);
	i8 v10553 = *(i8*)(intptr_t)v10552;
	i8 v10554 = (i8)(intptr_t)(f206_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v10554)(v10553);

	i8 v10555 = (i8)(intptr_t)(ws+1544);
	i8 v10556 = *(i8*)(intptr_t)v10555;
	i8 v10557 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10557 = v10556;

	i8 v10558 = (i8)(intptr_t)(ws+40);
	i8 v10559 = *(i8*)(intptr_t)v10558;
	i8 v10560 = (i8)(intptr_t)(f110_MidStartsub);
	i8 v10561;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10560)(&v10561, v10559);

	i8 v10562 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10562 = v10561;

	i8 v10563 = (i8)(intptr_t)(ws+3384);
	i8 v10564 = *(i8*)(intptr_t)v10563;
	i8 v10565 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10565)(v10564);

	i8 v10566 = (i8)(intptr_t)(ws+40);
	i8 v10567 = *(i8*)(intptr_t)v10566;
	i8 v10568 = (i8)(intptr_t)(f136_MidEndsub);
	i8 v10569;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10568)(&v10569, v10567);

	i8 v10570 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10570 = v10569;

	i8 v10571 = (i8)(intptr_t)(ws+3392);
	i8 v10572 = *(i8*)(intptr_t)v10571;
	i8 v10573 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10573)(v10572);

	i8 v10574 = (i8)(intptr_t)(ws+40);
	i8 v10575 = *(i8*)(intptr_t)v10574;
	i8 v10576 = (i8)(intptr_t)(f267_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v10576)(v10575);

	i8 v10577 = (i8)(intptr_t)(ws+40);
	i8 v10578 = *(i8*)(intptr_t)v10577;
	i8 v10579 = v10578+(+8);
	i8 v10580 = *(i8*)(intptr_t)v10579;
	i8 v10581 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10581 = v10580;

	i1 v10582 = (i1)+22;
	i8 v10583 = (i8)(intptr_t)(ws+3304);
	i8 v10584 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10584)(v10583, v10582);

endsub:;
}
const i1 c02_s0185[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f76_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3408 length ws+0
void f399_not_an_interface(void) {

	i8 v10585 = (i8)(intptr_t)c02_s0185;
	i8 v10586 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10586)(v10585);

endsub:;
}
	void f227_IsSubroutine(i1* /* result */, i8 /* type */);
	void f399_not_an_interface(void);
	void f399_not_an_interface(void);
	void f201_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f201_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f265_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f100_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f265_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f204_EmitterEmitInputParameters(i8 /* subr */);
	void f205_EmitterEmitOutputParameters(i8 /* subr */);
	void f206_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3384 length ws+24
void f398_reduce_87(void) {


	i8 v10587 = (i8)(intptr_t)(ws+3304);
	i8 v10588 = *(i8*)(intptr_t)v10587;
	i8 v10589 = (i8)(intptr_t)(f227_IsSubroutine);
	i1 v10590;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10589)(&v10590, v10588);

	i8 v10591 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10591 = v10590;

	i8 v10592 = (i8)(intptr_t)(ws+3384);
	i1 v10593 = *(i1*)(intptr_t)v10592;
	i1 v10594 = (i1)+0;
	if (v10593==v10594) goto c02_06d5; else goto c02_06d6;

c02_06d5:;

	i8 v10595 = (i8)(intptr_t)(f399_not_an_interface);

	((void(*)(void))(intptr_t)v10595)();

c02_06d6:;

c02_06d2:;

	i8 v10596 = (i8)(intptr_t)(ws+3304);
	i8 v10597 = *(i8*)(intptr_t)v10596;
	i8 v10598 = *(i8*)(intptr_t)v10597;
	i8 v10599 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10599 = v10598;

	i8 v10600 = (i8)(intptr_t)(ws+3392);
	i8 v10601 = *(i8*)(intptr_t)v10600;
	i8 v10602 = v10601+(+82);
	i1 v10603 = *(i1*)(intptr_t)v10602;
	i1 v10604 = v10603&(+2);
	i1 v10605 = (i1)+0;
	if (v10604==v10605) goto c02_06da; else goto c02_06db;

c02_06da:;

	i8 v10606 = (i8)(intptr_t)(f399_not_an_interface);

	((void(*)(void))(intptr_t)v10606)();

c02_06db:;

c02_06d7:;

	i8 v10607 = (i8)(intptr_t)(ws+1544);
	i8 v10608 = *(i8*)(intptr_t)v10607;
	i8 v10609 = v10608+(+82);
	i1 v10610 = *(i1*)(intptr_t)v10609;
	i1 v10611 = v10610|(+4);
	i8 v10612 = (i8)(intptr_t)(ws+1544);
	i8 v10613 = *(i8*)(intptr_t)v10612;
	i8 v10614 = v10613+(+82);
	*(i1*)(intptr_t)v10614 = v10611;

	i8 v10615 = (i8)(intptr_t)(ws+3392);
	i8 v10616 = *(i8*)(intptr_t)v10615;
	i8 v10617 = (i8)(intptr_t)(ws+1544);
	i8 v10618 = *(i8*)(intptr_t)v10617;
	i8 v10619 = v10618+(+48);
	*(i8*)(intptr_t)v10619 = v10616;

	i8 v10620 = (i8)(intptr_t)(ws+3304);
	i8 v10621 = *(i8*)(intptr_t)v10620;
	i8 v10622 = (i8)(intptr_t)(ws+1544);
	i8 v10623 = *(i8*)(intptr_t)v10622;
	i8 v10624 = v10623+(+40);
	*(i8*)(intptr_t)v10624 = v10621;

	i8 v10625 = (i8)(intptr_t)(ws+40);
	i8 v10626 = *(i8*)(intptr_t)v10625;
	i8 v10627 = (i8)(intptr_t)(ws+3392);
	i8 v10628 = *(i8*)(intptr_t)v10627;
	i8 v10629 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10629)(v10628, v10626);

	i8 v10630 = (i8)(intptr_t)(ws+3392);
	i8 v10631 = *(i8*)(intptr_t)v10630;
	i8 v10632 = (i8)(intptr_t)(ws+1544);
	i8 v10633 = *(i8*)(intptr_t)v10632;
	i8 v10634 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10634)(v10633, v10631);

	i8 v10635 = (i8)(intptr_t)(ws+3392);
	i8 v10636 = *(i8*)(intptr_t)v10635;
	i8 v10637 = v10636+(+80);
	i1 v10638 = *(i1*)(intptr_t)v10637;
	i8 v10639 = (i8)(intptr_t)(ws+1544);
	i8 v10640 = *(i8*)(intptr_t)v10639;
	i8 v10641 = v10640+(+80);
	*(i1*)(intptr_t)v10641 = v10638;

	i8 v10642 = (i8)(intptr_t)(ws+1544);
	i8 v10643 = *(i8*)(intptr_t)v10642;
	i8 v10644 = v10643+(+80);
	i1 v10645 = *(i1*)(intptr_t)v10644;
	i1 v10646 = (i1)+0;
	if (v10645==v10646) goto c02_06e0; else goto c02_06df;

c02_06df:;

	i8 v10647 = (i8)(intptr_t)(ws+3392);
	i8 v10648 = *(i8*)(intptr_t)v10647;
	i8 v10649 = v10648+(+16);
	i8 v10650 = *(i8*)(intptr_t)v10649;
	i8 v10651 = (i8)(intptr_t)(ws+1544);
	i8 v10652 = *(i8*)(intptr_t)v10651;
	i8 v10653 = (i8)(intptr_t)(f265_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v10653)(v10652, v10650);

c02_06e0:;

c02_06dc:;

	i8 v10654 = (i8)(intptr_t)(ws+3392);
	i8 v10655 = *(i8*)(intptr_t)v10654;
	i8 v10656 = v10655+(+81);
	i1 v10657 = *(i1*)(intptr_t)v10656;
	i8 v10658 = (i8)(intptr_t)(ws+1544);
	i8 v10659 = *(i8*)(intptr_t)v10658;
	i8 v10660 = v10659+(+81);
	*(i1*)(intptr_t)v10660 = v10657;

	i8 v10661 = (i8)(intptr_t)(ws+1544);
	i8 v10662 = *(i8*)(intptr_t)v10661;
	i8 v10663 = v10662+(+81);
	i1 v10664 = *(i1*)(intptr_t)v10663;
	i1 v10665 = (i1)+0;
	if (v10664==v10665) goto c02_06e5; else goto c02_06e4;

c02_06e4:;

	i8 v10666 = (i8)(intptr_t)(ws+3392);
	i8 v10667 = *(i8*)(intptr_t)v10666;
	i1 v10668 = (i1)+0;
	i8 v10669 = (i8)(intptr_t)(f100_GetOutputParameter);
	i8 v10670;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v10669)(&v10670, v10668, v10667);

	i8 v10671 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10671 = v10670;

	i8 v10672 = (i8)(intptr_t)(ws+3400);
	i8 v10673 = *(i8*)(intptr_t)v10672;
	i8 v10674 = (i8)(intptr_t)(ws+1544);
	i8 v10675 = *(i8*)(intptr_t)v10674;
	i8 v10676 = (i8)(intptr_t)(f265_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v10676)(v10675, v10673);

c02_06e5:;

c02_06e1:;

	i8 v10677 = (i8)(intptr_t)(ws+1544);
	i8 v10678 = *(i8*)(intptr_t)v10677;
	i8 v10679 = (i8)(intptr_t)(f204_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v10679)(v10678);

	i8 v10680 = (i8)(intptr_t)(ws+1544);
	i8 v10681 = *(i8*)(intptr_t)v10680;
	i8 v10682 = (i8)(intptr_t)(f205_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v10682)(v10681);

	i8 v10683 = (i8)(intptr_t)(ws+1544);
	i8 v10684 = *(i8*)(intptr_t)v10683;
	i8 v10685 = (i8)(intptr_t)(f206_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v10685)(v10684);

	i1 v10686 = (i1)+68;
	i8 v10687 = (i8)(intptr_t)(ws+3312);
	i8 v10688 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10688)(v10687, v10686);

endsub:;
}
	void f199_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_88 workspace at ws+3384 length ws+0
void f400_reduce_88(void) {

	i8 v10689 = (i8)(intptr_t)(ws+1544);
	i8 v10690 = *(i8*)(intptr_t)v10689;
	i8 v10691 = v10690+(+56);
	i2 v10692 = *(i2*)(intptr_t)v10691;
	i8 v10693 = (i8)(intptr_t)(ws+3312);
	i8 v10694 = *(i8*)(intptr_t)v10693;
	i8 v10695 = (i8)(intptr_t)(f199_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v10695)(v10694, v10692);

	i1 v10696 = (i1)+11;
	i8 v10697 = (i8)(intptr_t)(ws+3328);
	i8 v10698 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10698)(v10697, v10696);

	i1 v10699 = (i1)+16;
	i8 v10700 = (i8)(intptr_t)(ws+3320);
	i8 v10701 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10701)(v10700, v10699);

	i1 v10702 = (i1)+4;
	i8 v10703 = (i8)(intptr_t)(ws+3304);
	i8 v10704 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10704)(v10703, v10702);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_AllocSubrId(i2* /* id */);
	void f66_AllocNewType(i8* /* type */);
	void f198_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_89 workspace at ws+3384 length ws+32
void f401_reduce_89(void) {

	i8 v10705 = (i8)+83;
	i8 v10706 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v10707;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10706)(&v10707, v10705);

	i8 v10708 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10708 = v10707;

	i8 v10709 = (i8)(intptr_t)(ws+3384);
	i8 v10710 = *(i8*)(intptr_t)v10709;
	i8 v10711 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10711 = v10710;

	i8 v10712 = (i8)(intptr_t)(ws+40);
	i8 v10713 = *(i8*)(intptr_t)v10712;
	i8 v10714 = v10713+(+16);
	i8 v10715 = (i8)(intptr_t)(ws+1544);
	i8 v10716 = *(i8*)(intptr_t)v10715;
	i8 v10717 = v10716+(+32);
	*(i8*)(intptr_t)v10717 = v10714;

	i8 v10718 = (i8)(intptr_t)(ws+40);
	i8 v10719 = *(i8*)(intptr_t)v10718;
	i8 v10720 = (i8)(intptr_t)(ws+1544);
	i8 v10721 = *(i8*)(intptr_t)v10720;
	i8 v10722 = v10721+(+8);
	*(i8*)(intptr_t)v10722 = v10719;

	i8 v10723 = (i8)(intptr_t)(f237_AllocSubrId);
	i2 v10724;

	((void(*)(i2* /* id */))(intptr_t)v10723)(&v10724);

	i8 v10725 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v10725 = v10724;

	i8 v10726 = (i8)(intptr_t)(ws+3392);
	i2 v10727 = *(i2*)(intptr_t)v10726;
	i8 v10728 = (i8)(intptr_t)(ws+1544);
	i8 v10729 = *(i8*)(intptr_t)v10728;
	i8 v10730 = v10729+(+56);
	*(i2*)(intptr_t)v10730 = v10727;

	i8 v10731 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v10732;

	((void(*)(i8* /* type */))(intptr_t)v10731)(&v10732);

	i8 v10733 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10733 = v10732;

	i8 v10734 = (i8)(intptr_t)(ws+3400);
	i8 v10735 = *(i8*)(intptr_t)v10734;
	i8 v10736 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v10736 = v10735;

	i1 v10737 = (i1)+6;
	i8 v10738 = (i8)(intptr_t)(ws+3408);
	i8 v10739 = *(i8*)(intptr_t)v10738;
	i8 v10740 = v10739+(+52);
	*(i1*)(intptr_t)v10740 = v10737;

	i8 v10741 = (i8)(intptr_t)(ws+1528);
	i8 v10742 = *(i8*)(intptr_t)v10741;
	i8 v10743 = v10742+(+48);
	i2 v10744 = *(i2*)(intptr_t)v10743;
	i8 v10745 = (i8)(intptr_t)(ws+3408);
	i8 v10746 = *(i8*)(intptr_t)v10745;
	i8 v10747 = v10746+(+48);
	*(i2*)(intptr_t)v10747 = v10744;

	i8 v10748 = (i8)(intptr_t)(ws+1528);
	i8 v10749 = *(i8*)(intptr_t)v10748;
	i8 v10750 = v10749+(+53);
	i1 v10751 = *(i1*)(intptr_t)v10750;
	i8 v10752 = (i8)(intptr_t)(ws+3408);
	i8 v10753 = *(i8*)(intptr_t)v10752;
	i8 v10754 = v10753+(+53);
	*(i1*)(intptr_t)v10754 = v10751;

	i8 v10755 = (i8)(intptr_t)(ws+1528);
	i8 v10756 = *(i8*)(intptr_t)v10755;
	i8 v10757 = v10756+(+50);
	i2 v10758 = *(i2*)(intptr_t)v10757;
	i8 v10759 = (i8)(intptr_t)(ws+3408);
	i8 v10760 = *(i8*)(intptr_t)v10759;
	i8 v10761 = v10760+(+50);
	*(i2*)(intptr_t)v10761 = v10758;

	i8 v10762 = (i8)(intptr_t)(ws+1544);
	i8 v10763 = *(i8*)(intptr_t)v10762;
	i8 v10764 = (i8)(intptr_t)(ws+3408);
	i8 v10765 = *(i8*)(intptr_t)v10764;
	*(i8*)(intptr_t)v10765 = v10763;

	i8 v10766 = (i8)(intptr_t)(ws+3408);
	i8 v10767 = *(i8*)(intptr_t)v10766;
	i8 v10768 = (i8)(intptr_t)(ws+1544);
	i8 v10769 = *(i8*)(intptr_t)v10768;
	i8 v10770 = v10769+(+40);
	*(i8*)(intptr_t)v10770 = v10767;

	i8 v10771 = (i8)(intptr_t)(ws+1544);
	i8 v10772 = *(i8*)(intptr_t)v10771;
	i8 v10773 = (i8)(intptr_t)(ws+1544);
	i8 v10774 = *(i8*)(intptr_t)v10773;
	i8 v10775 = v10774+(+48);
	*(i8*)(intptr_t)v10775 = v10772;

	i1 v10776 = (i1)+30;
	i8 v10777 = (i8)(intptr_t)(ws+3304);
	i8 v10778 = *(i8*)(intptr_t)v10777;
	i8 v10779 = v10778+(+32);
	*(i1*)(intptr_t)v10779 = v10776;

	i8 v10780 = (i8)(intptr_t)(ws+3408);
	i8 v10781 = *(i8*)(intptr_t)v10780;
	i8 v10782 = (i8)(intptr_t)(ws+3304);
	i8 v10783 = *(i8*)(intptr_t)v10782;
	*(i8*)(intptr_t)v10783 = v10781;

	i8 v10784 = (i8)(intptr_t)(ws+3304);
	i8 v10785 = *(i8*)(intptr_t)v10784;
	i8 v10786 = (i8)(intptr_t)(ws+3408);
	i8 v10787 = *(i8*)(intptr_t)v10786;
	i8 v10788 = v10787+(+32);
	*(i8*)(intptr_t)v10788 = v10785;

	i8 v10789 = (i8)(intptr_t)(ws+3304);
	i8 v10790 = *(i8*)(intptr_t)v10789;
	i8 v10791 = (i8)(intptr_t)(ws+1544);
	i8 v10792 = *(i8*)(intptr_t)v10791;
	*(i8*)(intptr_t)v10792 = v10790;

	i8 v10793 = (i8)(intptr_t)(ws+1544);
	i8 v10794 = *(i8*)(intptr_t)v10793;
	i8 v10795 = (i8)(intptr_t)(f198_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v10795)(v10794);

	i8 v10796 = (i8)(intptr_t)(ws+3304);
	i8 v10797 = *(i8*)(intptr_t)v10796;
	i8 v10798 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10798 = v10797;

endsub:;
}
	void f227_IsSubroutine(i1* /* result */, i8 /* type */);
const i1 c02_s0186[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f76_SimpleError(i8 /* message */);
const i1 c02_s0187[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f76_SimpleError(i8 /* message */);
const i1 c02_s0188[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_90 workspace at ws+3384 length ws+1
void f402_reduce_90(void) {

	i8 v10799 = (i8)(intptr_t)(ws+3304);
	i8 v10800 = *(i8*)(intptr_t)v10799;
	i8 v10801 = *(i8*)(intptr_t)v10800;
	i8 v10802 = (i8)(intptr_t)(f227_IsSubroutine);
	i1 v10803;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10802)(&v10803, v10801);

	i8 v10804 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10804 = v10803;

	i8 v10805 = (i8)(intptr_t)(ws+3304);
	i8 v10806 = *(i8*)(intptr_t)v10805;
	i8 v10807 = v10806+(+32);
	i1 v10808 = *(i1*)(intptr_t)v10807;
	i1 v10809 = (i1)+30;
	if (v10808==v10809) goto c02_06ed; else goto c02_06eb;

c02_06ed:;

	i8 v10810 = (i8)(intptr_t)(ws+3384);
	i1 v10811 = *(i1*)(intptr_t)v10810;
	i1 v10812 = (i1)+0;
	if (v10811==v10812) goto c02_06eb; else goto c02_06ec;

c02_06eb:;

	i8 v10813 = (i8)(intptr_t)c02_s0186;
	i8 v10814 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10814)(v10813);

c02_06ec:;

c02_06e6:;

	i8 v10815 = (i8)(intptr_t)(ws+3304);
	i8 v10816 = *(i8*)(intptr_t)v10815;
	i8 v10817 = *(i8*)(intptr_t)v10816;
	i8 v10818 = *(i8*)(intptr_t)v10817;
	i8 v10819 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v10819 = v10818;

	i8 v10820 = (i8)(intptr_t)(ws+1544);
	i8 v10821 = *(i8*)(intptr_t)v10820;
	i8 v10822 = v10821+(+82);
	i1 v10823 = *(i1*)(intptr_t)v10822;
	i1 v10824 = v10823&(+1);
	i1 v10825 = (i1)+0;
	if (v10824==v10825) goto c02_06f2; else goto c02_06f1;

c02_06f1:;

	i8 v10826 = (i8)(intptr_t)c02_s0187;
	i8 v10827 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10827)(v10826);

c02_06f2:;

c02_06ee:;

	i8 v10828 = (i8)(intptr_t)(ws+1544);
	i8 v10829 = *(i8*)(intptr_t)v10828;
	i8 v10830 = v10829+(+8);
	i8 v10831 = *(i8*)(intptr_t)v10830;
	i8 v10832 = (i8)(intptr_t)(ws+40);
	i8 v10833 = *(i8*)(intptr_t)v10832;
	if (v10831==v10833) goto c02_06f7; else goto c02_06f6;

c02_06f6:;

	i8 v10834 = (i8)(intptr_t)c02_s0188;
	i8 v10835 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10835)(v10834);

c02_06f7:;

c02_06f3:;

	i1 v10836 = (i1)+25;
	i8 v10837 = (i8)(intptr_t)(ws+3312);
	i8 v10838 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10838)(v10837, v10836);

endsub:;
}
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f110_MidStartsub(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);

// reduce_91 workspace at ws+3384 length ws+24
void f403_reduce_91(void) {

	i8 v10839 = (i8)+16;
	i8 v10840 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v10841;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10840)(&v10841, v10839);

	i8 v10842 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10842 = v10841;

	i8 v10843 = (i8)(intptr_t)(ws+3384);
	i8 v10844 = *(i8*)(intptr_t)v10843;
	i8 v10845 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10845 = v10844;

	i8 v10846 = (i8)(intptr_t)(ws+88);
	i8 v10847 = *(i8*)(intptr_t)v10846;
	i8 v10848 = (i8)(intptr_t)(ws+3392);
	i8 v10849 = *(i8*)(intptr_t)v10848;
	i8 v10850 = v10849+(+8);
	*(i8*)(intptr_t)v10850 = v10847;

	i8 v10851 = (i8)(intptr_t)(ws+52);
	i2 v10852 = *(i2*)(intptr_t)v10851;
	i8 v10853 = (i8)(intptr_t)(ws+3392);
	i8 v10854 = *(i8*)(intptr_t)v10853;
	*(i2*)(intptr_t)v10854 = v10852;

	i2 v10855 = (i2)+0;
	i8 v10856 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10856 = v10855;

	i8 v10857 = (i8)(intptr_t)(ws+54);
	i2 v10858 = *(i2*)(intptr_t)v10857;
	i8 v10859 = (i8)(intptr_t)(ws+3392);
	i8 v10860 = *(i8*)(intptr_t)v10859;
	i8 v10861 = v10860+(+2);
	*(i2*)(intptr_t)v10861 = v10858;

	i2 v10862 = (i2)+0;
	i8 v10863 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10863 = v10862;

	i8 v10864 = (i8)(intptr_t)(ws+3392);
	i8 v10865 = *(i8*)(intptr_t)v10864;
	i8 v10866 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10866 = v10865;

	i8 v10867 = (i8)(intptr_t)(ws+1544);
	i8 v10868 = *(i8*)(intptr_t)v10867;
	i8 v10869 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10869 = v10868;

	i8 v10870 = (i8)(intptr_t)(ws+40);
	i8 v10871 = *(i8*)(intptr_t)v10870;
	i8 v10872 = (i8)(intptr_t)(f110_MidStartsub);
	i8 v10873;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10872)(&v10873, v10871);

	i8 v10874 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10874 = v10873;

	i8 v10875 = (i8)(intptr_t)(ws+3400);
	i8 v10876 = *(i8*)(intptr_t)v10875;
	i8 v10877 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10877)(v10876);

	i8 v10878 = (i8)(intptr_t)(ws+40);
	i8 v10879 = *(i8*)(intptr_t)v10878;
	i8 v10880 = v10879+(+82);
	i1 v10881 = *(i1*)(intptr_t)v10880;
	i1 v10882 = v10881|(+1);
	i8 v10883 = (i8)(intptr_t)(ws+40);
	i8 v10884 = *(i8*)(intptr_t)v10883;
	i8 v10885 = v10884+(+82);
	*(i1*)(intptr_t)v10885 = v10882;

endsub:;
}
	void f136_MidEndsub(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f267_ReportWorkspaces(i8 /* subr */);
	void f34_Free(i8 /* block */);
	void f263_DestructSubroutineContents(i8 /* subr */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_92 workspace at ws+3384 length ws+24
void f404_reduce_92(void) {

	i8 v10886 = (i8)(intptr_t)(ws+40);
	i8 v10887 = *(i8*)(intptr_t)v10886;
	i8 v10888 = (i8)(intptr_t)(f136_MidEndsub);
	i8 v10889;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10888)(&v10889, v10887);

	i8 v10890 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v10890 = v10889;

	i8 v10891 = (i8)(intptr_t)(ws+3384);
	i8 v10892 = *(i8*)(intptr_t)v10891;
	i8 v10893 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10893)(v10892);

	i8 v10894 = (i8)(intptr_t)(ws+40);
	i8 v10895 = *(i8*)(intptr_t)v10894;
	i8 v10896 = (i8)(intptr_t)(f267_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v10896)(v10895);

	i8 v10897 = (i8)(intptr_t)(ws+88);
	i8 v10898 = *(i8*)(intptr_t)v10897;
	i2 v10899 = *(i2*)(intptr_t)v10898;
	i8 v10900 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10900 = v10899;

	i8 v10901 = (i8)(intptr_t)(ws+88);
	i8 v10902 = *(i8*)(intptr_t)v10901;
	i8 v10903 = v10902+(+2);
	i2 v10904 = *(i2*)(intptr_t)v10903;
	i8 v10905 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10905 = v10904;

	i8 v10906 = (i8)(intptr_t)(ws+88);
	i8 v10907 = *(i8*)(intptr_t)v10906;
	i8 v10908 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v10908 = v10907;

	i8 v10909 = (i8)(intptr_t)(ws+3392);
	i8 v10910 = *(i8*)(intptr_t)v10909;
	i8 v10911 = v10910+(+8);
	i8 v10912 = *(i8*)(intptr_t)v10911;
	i8 v10913 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v10913 = v10912;

	i8 v10914 = (i8)(intptr_t)(ws+3392);
	i8 v10915 = *(i8*)(intptr_t)v10914;
	i8 v10916 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v10916)(v10915);

	i8 v10917 = (i8)(intptr_t)(ws+40);
	i8 v10918 = *(i8*)(intptr_t)v10917;
	i8 v10919 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v10919 = v10918;

	i8 v10920 = (i8)(intptr_t)(ws+3400);
	i8 v10921 = *(i8*)(intptr_t)v10920;
	i8 v10922 = v10921+(+8);
	i8 v10923 = *(i8*)(intptr_t)v10922;
	i8 v10924 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v10924 = v10923;

	i8 v10925 = (i8)(intptr_t)(ws+3400);
	i8 v10926 = *(i8*)(intptr_t)v10925;
	i8 v10927 = (i8)(intptr_t)(f263_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v10927)(v10926);

	i1 v10928 = (i1)+25;
	i8 v10929 = (i8)(intptr_t)(ws+3304);
	i8 v10930 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10930)(v10929, v10928);

endsub:;
}
	void f204_EmitterEmitInputParameters(i8 /* subr */);
	void f205_EmitterEmitOutputParameters(i8 /* subr */);

// reduce_93 workspace at ws+3384 length ws+0
void f405_reduce_93(void) {

	i1 v10931 = (i1)+0;
	i8 v10932 = (i8)(intptr_t)(ws+1544);
	i8 v10933 = *(i8*)(intptr_t)v10932;
	i8 v10934 = v10933+(+81);
	*(i1*)(intptr_t)v10934 = v10931;

	i8 v10935 = (i8)(intptr_t)(ws+1544);
	i8 v10936 = *(i8*)(intptr_t)v10935;
	i8 v10937 = (i8)(intptr_t)(f204_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v10937)(v10936);

	i8 v10938 = (i8)(intptr_t)(ws+1544);
	i8 v10939 = *(i8*)(intptr_t)v10938;
	i8 v10940 = (i8)(intptr_t)(f205_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v10940)(v10939);

endsub:;
}
	void f98_CountParameters(i1* /* count */, i8 /* param */);
	void f204_EmitterEmitInputParameters(i8 /* subr */);
	void f205_EmitterEmitOutputParameters(i8 /* subr */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_94 workspace at ws+3384 length ws+1
void f406_reduce_94(void) {

	i8 v10941 = (i8)(intptr_t)(ws+3304);
	i8 v10942 = *(i8*)(intptr_t)v10941;
	i8 v10943 = (i8)(intptr_t)(f98_CountParameters);
	i1 v10944;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v10943)(&v10944, v10942);

	i8 v10945 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10945 = v10944;

	i8 v10946 = (i8)(intptr_t)(ws+3384);
	i1 v10947 = *(i1*)(intptr_t)v10946;
	i8 v10948 = (i8)(intptr_t)(ws+1544);
	i8 v10949 = *(i8*)(intptr_t)v10948;
	i8 v10950 = v10949+(+81);
	*(i1*)(intptr_t)v10950 = v10947;

	i8 v10951 = (i8)(intptr_t)(ws+1544);
	i8 v10952 = *(i8*)(intptr_t)v10951;
	i8 v10953 = (i8)(intptr_t)(f204_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v10953)(v10952);

	i8 v10954 = (i8)(intptr_t)(ws+1544);
	i8 v10955 = *(i8*)(intptr_t)v10954;
	i8 v10956 = (i8)(intptr_t)(f205_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v10956)(v10955);

	i1 v10957 = (i1)+6;
	i8 v10958 = (i8)(intptr_t)(ws+3312);
	i8 v10959 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10959)(v10958, v10957);

endsub:;
}
	void f98_CountParameters(i1* /* count */, i8 /* param */);

// reduce_95 workspace at ws+3384 length ws+1
void f407_reduce_95(void) {

	i8 v10960 = (i8)(intptr_t)(ws+3304);
	i8 v10961 = *(i8*)(intptr_t)v10960;
	i8 v10962 = (i8)(intptr_t)(f98_CountParameters);
	i1 v10963;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v10962)(&v10963, v10961);

	i8 v10964 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v10964 = v10963;

	i8 v10965 = (i8)(intptr_t)(ws+3384);
	i1 v10966 = *(i1*)(intptr_t)v10965;
	i8 v10967 = (i8)(intptr_t)(ws+1544);
	i8 v10968 = *(i8*)(intptr_t)v10967;
	i8 v10969 = v10968+(+80);
	*(i1*)(intptr_t)v10969 = v10966;

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_96 workspace at ws+3384 length ws+0
void f408_reduce_96(void) {

	i8 v10970 = (i8)+0;
	i8 v10971 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10971 = v10970;

	i1 v10972 = (i1)+4;
	i8 v10973 = (i8)(intptr_t)(ws+3304);
	i8 v10974 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10974)(v10973, v10972);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_97 workspace at ws+3384 length ws+0
void f409_reduce_97(void) {

	i8 v10975 = (i8)(intptr_t)(ws+3312);
	i8 v10976 = *(i8*)(intptr_t)v10975;
	i8 v10977 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10977 = v10976;

	i1 v10978 = (i1)+4;
	i8 v10979 = (i8)(intptr_t)(ws+3304);
	i8 v10980 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10980)(v10979, v10978);

endsub:;
}

// reduce_98 workspace at ws+3384 length ws+0
void f410_reduce_98(void) {

	i8 v10981 = (i8)(intptr_t)(ws+3304);
	i8 v10982 = *(i8*)(intptr_t)v10981;
	i8 v10983 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10983 = v10982;

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3384 length ws+0
void f411_reduce_99(void) {

	i8 v10984 = (i8)(intptr_t)(ws+3304);
	i8 v10985 = *(i8*)(intptr_t)v10984;
	i8 v10986 = (i8)(intptr_t)(ws+3320);
	i8 v10987 = *(i8*)(intptr_t)v10986;
	i8 v10988 = *(i8*)(intptr_t)v10987;
	i8 v10989 = v10988+(+16);
	*(i8*)(intptr_t)v10989 = v10985;

	i8 v10990 = (i8)(intptr_t)(ws+3320);
	i8 v10991 = *(i8*)(intptr_t)v10990;
	i8 v10992 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v10992 = v10991;

	i1 v10993 = (i1)+45;
	i8 v10994 = (i8)(intptr_t)(ws+3312);
	i8 v10995 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10995)(v10994, v10993);

endsub:;
}
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f260_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_100 workspace at ws+3384 length ws+8
void f412_reduce_100(void) {

	i8 v10996 = (i8)(intptr_t)(ws+1544);
	i8 v10997 = *(i8*)(intptr_t)v10996;
	i8 v10998 = v10997+(+16);
	i8 v10999 = (i8)(intptr_t)(ws+3320);
	i8 v11000 = *(i8*)(intptr_t)v10999;
	i8 v11001 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v11002;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11001)(&v11002, v11000, v10998);

	i8 v11003 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11003 = v11002;

	i8 v11004 = (i8)(intptr_t)(ws+3384);
	i8 v11005 = *(i8*)(intptr_t)v11004;
	i8 v11006 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v11006 = v11005;

	i8 v11007 = (i8)(intptr_t)(ws+1544);
	i8 v11008 = *(i8*)(intptr_t)v11007;
	i8 v11009 = (i8)(intptr_t)(ws+3296);
	i8 v11010 = *(i8*)(intptr_t)v11009;
	i8 v11011 = (i8)(intptr_t)(ws+3304);
	i8 v11012 = *(i8*)(intptr_t)v11011;
	i8 v11013 = (i8)(intptr_t)(f260_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v11013)(v11012, v11010, v11008);

	i1 v11014 = (i1)+6;
	i8 v11015 = (i8)(intptr_t)(ws+3312);
	i8 v11016 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11016)(v11015, v11014);

endsub:;
}
	void f239_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_101 workspace at ws+3384 length ws+2
void f413_reduce_101(void) {

	i8 v11017 = (i8)(intptr_t)(ws+72);
	i8 v11018 = *(i8*)(intptr_t)v11017;
	i8 v11019 = v11018+(+48);
	i2 v11020 = *(i2*)(intptr_t)v11019;
	i8 v11021 = (i8)(intptr_t)(ws+72);
	i8 v11022 = *(i8*)(intptr_t)v11021;
	i8 v11023 = v11022+(+53);
	i1 v11024 = *(i1*)(intptr_t)v11023;
	i8 v11025 = (i8)(intptr_t)(f239_ArchAlignUp);
	i2 v11026;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v11025)(&v11026, v11024, v11020);

	i8 v11027 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v11027 = v11026;

	i8 v11028 = (i8)(intptr_t)(ws+3384);
	i2 v11029 = *(i2*)(intptr_t)v11028;
	i8 v11030 = (i8)(intptr_t)(ws+72);
	i8 v11031 = *(i8*)(intptr_t)v11030;
	i8 v11032 = v11031+(+50);
	*(i2*)(intptr_t)v11032 = v11029;

	i1 v11033 = (i1)+65;
	i8 v11034 = (i8)(intptr_t)(ws+3328);
	i8 v11035 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11035)(v11034, v11033);

	i1 v11036 = (i1)+10;
	i8 v11037 = (i8)(intptr_t)(ws+3312);
	i8 v11038 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11038)(v11037, v11036);

	i1 v11039 = (i1)+20;
	i8 v11040 = (i8)(intptr_t)(ws+3304);
	i8 v11041 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11041)(v11040, v11039);

endsub:;
}
	void f293_SymbolRedeclarationError(void);
	void f66_AllocNewType(i8* /* type */);
	void f293_SymbolRedeclarationError(void);

// reduce_102 workspace at ws+3384 length ws+8
void f414_reduce_102(void) {

	i8 v11042 = (i8)(intptr_t)(ws+3304);
	i8 v11043 = *(i8*)(intptr_t)v11042;
	i8 v11044 = v11043+(+32);
	i1 v11045 = *(i1*)(intptr_t)v11044;

	if (v11045 != +30) goto c02_06f9;

	i8 v11046 = (i8)(intptr_t)(ws+3304);
	i8 v11047 = *(i8*)(intptr_t)v11046;
	i8 v11048 = *(i8*)(intptr_t)v11047;
	i8 v11049 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11049 = v11048;

	i8 v11050 = (i8)(intptr_t)(ws+72);
	i8 v11051 = *(i8*)(intptr_t)v11050;
	i8 v11052 = v11051+(+52);
	i1 v11053 = *(i1*)(intptr_t)v11052;
	i1 v11054 = (i1)+1;
	if (v11053==v11054) goto c02_06fe; else goto c02_06fd;

c02_06fd:;

	i8 v11055 = (i8)(intptr_t)(f293_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v11055)();

c02_06fe:;

c02_06fa:;

	goto c02_06f8;

c02_06f9:;

	if (v11045 != +0) goto c02_06ff;

	i8 v11056 = (i8)(intptr_t)(f66_AllocNewType);
	i8 v11057;

	((void(*)(i8* /* type */))(intptr_t)v11056)(&v11057);

	i8 v11058 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11058 = v11057;

	i8 v11059 = (i8)(intptr_t)(ws+3384);
	i8 v11060 = *(i8*)(intptr_t)v11059;
	i8 v11061 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11061 = v11060;

	i1 v11062 = (i1)+30;
	i8 v11063 = (i8)(intptr_t)(ws+3304);
	i8 v11064 = *(i8*)(intptr_t)v11063;
	i8 v11065 = v11064+(+32);
	*(i1*)(intptr_t)v11065 = v11062;

	i8 v11066 = (i8)(intptr_t)(ws+72);
	i8 v11067 = *(i8*)(intptr_t)v11066;
	i8 v11068 = (i8)(intptr_t)(ws+3304);
	i8 v11069 = *(i8*)(intptr_t)v11068;
	*(i8*)(intptr_t)v11069 = v11067;

	i8 v11070 = (i8)(intptr_t)(ws+3304);
	i8 v11071 = *(i8*)(intptr_t)v11070;
	i8 v11072 = (i8)(intptr_t)(ws+72);
	i8 v11073 = *(i8*)(intptr_t)v11072;
	i8 v11074 = v11073+(+32);
	*(i8*)(intptr_t)v11074 = v11071;

	goto c02_06f8;

c02_06ff:;

	i8 v11075 = (i8)(intptr_t)(f293_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v11075)();

c02_06f8:;


	i1 v11076 = (i1)+5;
	i8 v11077 = (i8)(intptr_t)(ws+72);
	i8 v11078 = *(i8*)(intptr_t)v11077;
	i8 v11079 = v11078+(+52);
	*(i1*)(intptr_t)v11079 = v11076;

endsub:;
}
	void f222_CheckNotPartialType(i8 /* type */);
	void f231_IsRecord(i1* /* result */, i8 /* type */);
	void f74_StartError(void);
	void f12_print(i8 /* ptr */);
const i1 c02_s0189[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// reduce_103 workspace at ws+3384 length ws+1
void f415_reduce_103(void) {

	i8 v11080 = (i8)(intptr_t)(ws+3304);
	i8 v11081 = *(i8*)(intptr_t)v11080;
	i8 v11082 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11082)(v11081);

	i8 v11083 = (i8)(intptr_t)(ws+3304);
	i8 v11084 = *(i8*)(intptr_t)v11083;
	i8 v11085 = (i8)(intptr_t)(f231_IsRecord);
	i1 v11086;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11085)(&v11086, v11084);

	i8 v11087 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v11087 = v11086;

	i8 v11088 = (i8)(intptr_t)(ws+3384);
	i1 v11089 = *(i1*)(intptr_t)v11088;
	i1 v11090 = (i1)+0;
	if (v11089==v11090) goto c02_0703; else goto c02_0704;

c02_0703:;

	i8 v11091 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v11091)();

	i8 v11092 = (i8)(intptr_t)(ws+3304);
	i8 v11093 = *(i8*)(intptr_t)v11092;
	i8 v11094 = v11093+(+32);
	i8 v11095 = *(i8*)(intptr_t)v11094;
	i8 v11096 = v11095+(+8);
	i8 v11097 = *(i8*)(intptr_t)v11096;
	i8 v11098 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11098)(v11097);

	i8 v11099 = (i8)(intptr_t)c02_s0189;
	i8 v11100 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11100)(v11099);

	i8 v11101 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v11101)();

c02_0704:;

c02_0700:;

	i8 v11102 = (i8)(intptr_t)(ws+3304);
	i8 v11103 = *(i8*)(intptr_t)v11102;
	i8 v11104 = v11103+(+53);
	i1 v11105 = *(i1*)(intptr_t)v11104;
	i8 v11106 = (i8)(intptr_t)(ws+72);
	i8 v11107 = *(i8*)(intptr_t)v11106;
	i8 v11108 = v11107+(+53);
	*(i1*)(intptr_t)v11108 = v11105;

	i8 v11109 = (i8)(intptr_t)(ws+3304);
	i8 v11110 = *(i8*)(intptr_t)v11109;
	i8 v11111 = v11110+(+48);
	i2 v11112 = *(i2*)(intptr_t)v11111;
	i8 v11113 = (i8)(intptr_t)(ws+72);
	i8 v11114 = *(i8*)(intptr_t)v11113;
	i8 v11115 = v11114+(+48);
	*(i2*)(intptr_t)v11115 = v11112;

	i8 v11116 = (i8)(intptr_t)(ws+3304);
	i8 v11117 = *(i8*)(intptr_t)v11116;
	i8 v11118 = (i8)(intptr_t)(ws+72);
	i8 v11119 = *(i8*)(intptr_t)v11118;
	i8 v11120 = v11119+(+16);
	*(i8*)(intptr_t)v11120 = v11117;

endsub:;
}
	void f222_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f243_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_104 workspace at ws+3384 length ws+8
void f416_reduce_104(void) {

	i8 v11121 = (i8)(intptr_t)(ws+3312);
	i8 v11122 = *(i8*)(intptr_t)v11121;
	i8 v11123 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11123)(v11122);

	i8 v11124 = (i8)(intptr_t)(ws+72);
	i8 v11125 = *(i8*)(intptr_t)v11124;
	i8 v11126 = v11125+(+53);
	i1 v11127 = *(i1*)(intptr_t)v11126;
	i8 v11128 = (i8)(intptr_t)(ws+3312);
	i8 v11129 = *(i8*)(intptr_t)v11128;
	i8 v11130 = v11129+(+53);
	i1 v11131 = *(i1*)(intptr_t)v11130;
	if (v11127<v11131) goto c02_0708; else goto c02_0709;

c02_0708:;

	i8 v11132 = (i8)(intptr_t)(ws+3312);
	i8 v11133 = *(i8*)(intptr_t)v11132;
	i8 v11134 = v11133+(+53);
	i1 v11135 = *(i1*)(intptr_t)v11134;
	i8 v11136 = (i8)(intptr_t)(ws+72);
	i8 v11137 = *(i8*)(intptr_t)v11136;
	i8 v11138 = v11137+(+53);
	*(i1*)(intptr_t)v11138 = v11135;

c02_0709:;

c02_0705:;

	i1 v11139 = (i1)+28;
	i8 v11140 = (i8)(intptr_t)(ws+3336);
	i8 v11141 = *(i8*)(intptr_t)v11140;
	i8 v11142 = v11141+(+32);
	*(i1*)(intptr_t)v11142 = v11139;

	i8 v11143 = (i8)+27;
	i8 v11144 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v11145;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v11144)(&v11145, v11143);

	i8 v11146 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11146 = v11145;

	i8 v11147 = (i8)(intptr_t)(ws+3384);
	i8 v11148 = *(i8*)(intptr_t)v11147;
	i8 v11149 = (i8)(intptr_t)(ws+3336);
	i8 v11150 = *(i8*)(intptr_t)v11149;
	*(i8*)(intptr_t)v11150 = v11148;

	i8 v11151 = (i8)(intptr_t)(ws+3312);
	i8 v11152 = *(i8*)(intptr_t)v11151;
	i8 v11153 = (i8)(intptr_t)(ws+3336);
	i8 v11154 = *(i8*)(intptr_t)v11153;
	i8 v11155 = *(i8*)(intptr_t)v11154;
	*(i8*)(intptr_t)v11155 = v11152;

	i8 v11156 = (i8)(intptr_t)(ws+72);
	i8 v11157 = *(i8*)(intptr_t)v11156;
	i8 v11158 = (i8)(intptr_t)(ws+3336);
	i8 v11159 = *(i8*)(intptr_t)v11158;
	i8 v11160 = (i8)(intptr_t)(ws+3328);
	i2 v11161 = *(i2*)(intptr_t)v11160;
	i8 v11162 = (i8)(intptr_t)(f243_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v11162)(v11161, v11159, v11157);

	i1 v11163 = (i1)+6;
	i8 v11164 = (i8)(intptr_t)(ws+3320);
	i8 v11165 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11165)(v11164, v11163);

	i1 v11166 = (i1)+22;
	i8 v11167 = (i8)(intptr_t)(ws+3304);
	i8 v11168 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11168)(v11167, v11166);

endsub:;
}

// reduce_105 workspace at ws+3384 length ws+0
void f417_reduce_105(void) {

	i8 v11169 = (i8)(intptr_t)(ws+72);
	i8 v11170 = *(i8*)(intptr_t)v11169;
	i8 v11171 = v11170+(+48);
	i2 v11172 = *(i2*)(intptr_t)v11171;
	i8 v11173 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v11173 = v11172;

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_106 workspace at ws+3384 length ws+0
void f418_reduce_106(void) {

	i8 v11174 = (i8)(intptr_t)(ws+3312);
	i4 v11175 = *(i4*)(intptr_t)v11174;
	i2 v11176 = (s2)(s4)v11175;
	i8 v11177 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v11177 = v11176;

	i1 v11178 = (i1)+16;
	i8 v11179 = (i8)(intptr_t)(ws+3320);
	i8 v11180 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11180)(v11179, v11178);

	i1 v11181 = (i1)+4;
	i8 v11182 = (i8)(intptr_t)(ws+3304);
	i8 v11183 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11183)(v11182, v11181);

endsub:;
}
	void f219_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_107 workspace at ws+3384 length ws+8
void f419_reduce_107(void) {

	i8 v11184 = (i8)(intptr_t)(ws+72);
	i8 v11185 = *(i8*)(intptr_t)v11184;
	i8 v11186 = (i8)(intptr_t)(ws+3304);
	i8 v11187 = *(i8*)(intptr_t)v11186;
	i8 v11188 = (i8)(intptr_t)(f219_AddSymbol);
	i8 v11189;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11188)(&v11189, v11187, v11185);

	i8 v11190 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11190 = v11189;

	i8 v11191 = (i8)(intptr_t)(ws+3384);
	i8 v11192 = *(i8*)(intptr_t)v11191;
	i8 v11193 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v11193 = v11192;

	i8 v11194 = (i8)(intptr_t)(ws+72);
	i8 v11195 = *(i8*)(intptr_t)v11194;
	i8 v11196 = v11195+(+24);
	i1 v11197 = *(i1*)(intptr_t)v11196;
	i1 v11198 = v11197+(+1);
	i8 v11199 = (i8)(intptr_t)(ws+72);
	i8 v11200 = *(i8*)(intptr_t)v11199;
	i8 v11201 = v11200+(+24);
	*(i1*)(intptr_t)v11201 = v11198;

endsub:;
}
	void f295_CheckEndOfInitialiser(void);
	void f109_MidEndinit(i8* /* m */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_108 workspace at ws+3384 length ws+8
void f420_reduce_108(void) {

	i8 v11202 = (i8)(intptr_t)(f295_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v11202)();

	i8 v11203 = (i8)(intptr_t)(f109_MidEndinit);
	i8 v11204;

	((void(*)(i8* /* m */))(intptr_t)v11203)(&v11204);

	i8 v11205 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11205 = v11204;

	i8 v11206 = (i8)(intptr_t)(ws+3384);
	i8 v11207 = *(i8*)(intptr_t)v11206;
	i8 v11208 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11208)(v11207);

	i1 v11209 = (i1)+31;
	i8 v11210 = (i8)(intptr_t)(ws+3328);
	i8 v11211 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11211)(v11210, v11209);

	i1 v11212 = (i1)+32;
	i8 v11213 = (i8)(intptr_t)(ws+3312);
	i8 v11214 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11214)(v11213, v11212);

	i1 v11215 = (i1)+22;
	i8 v11216 = (i8)(intptr_t)(ws+3304);
	i8 v11217 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11217)(v11216, v11215);

endsub:;
}
	void f222_CheckNotPartialType(i8 /* type */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_AllocLabel(i2* /* label */);
	void f226_IsArray(i1* /* result */, i8 /* type */);
	void f231_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018a[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(i8 /* message */);
	void f231_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018b[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f76_SimpleError(i8 /* message */);
	void f231_IsRecord(i1* /* result */, i8 /* type */);
	void f157_MidStartinit(i8* /* m */, i8 /* sym */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_109 workspace at ws+3384 length ws+24
void f421_reduce_109(void) {

	i8 v11218 = (i8)(intptr_t)(ws+3312);
	i8 v11219 = *(i8*)(intptr_t)v11218;
	i8 v11220 = (i8)(intptr_t)(f222_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11220)(v11219);

	i1 v11221 = (i1)+28;
	i8 v11222 = (i8)(intptr_t)(ws+3328);
	i8 v11223 = *(i8*)(intptr_t)v11222;
	i8 v11224 = v11223+(+32);
	*(i1*)(intptr_t)v11224 = v11221;

	i8 v11225 = (i8)+27;
	i8 v11226 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v11227;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v11226)(&v11227, v11225);

	i8 v11228 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11228 = v11227;

	i8 v11229 = (i8)(intptr_t)(ws+3384);
	i8 v11230 = *(i8*)(intptr_t)v11229;
	i8 v11231 = (i8)(intptr_t)(ws+3328);
	i8 v11232 = *(i8*)(intptr_t)v11231;
	*(i8*)(intptr_t)v11232 = v11230;

	i8 v11233 = (i8)(intptr_t)(ws+3312);
	i8 v11234 = *(i8*)(intptr_t)v11233;
	i8 v11235 = (i8)(intptr_t)(ws+3328);
	i8 v11236 = *(i8*)(intptr_t)v11235;
	i8 v11237 = *(i8*)(intptr_t)v11236;
	*(i8*)(intptr_t)v11237 = v11234;

	i8 v11238 = (i8)(intptr_t)(ws+40);
	i8 v11239 = *(i8*)(intptr_t)v11238;
	i8 v11240 = (i8)(intptr_t)(ws+3328);
	i8 v11241 = *(i8*)(intptr_t)v11240;
	i8 v11242 = *(i8*)(intptr_t)v11241;
	i8 v11243 = v11242+(+8);
	*(i8*)(intptr_t)v11243 = v11239;

	i1 v11244 = (i1)+255;
	i8 v11245 = (i8)(intptr_t)(ws+3328);
	i8 v11246 = *(i8*)(intptr_t)v11245;
	i8 v11247 = *(i8*)(intptr_t)v11246;
	i8 v11248 = v11247+(+26);
	*(i1*)(intptr_t)v11248 = v11244;

	i8 v11249 = (i8)(intptr_t)(f236_AllocLabel);
	i2 v11250;

	((void(*)(i2* /* label */))(intptr_t)v11249)(&v11250);

	i8 v11251 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v11251 = v11250;

	i8 v11252 = (i8)(intptr_t)(ws+3392);
	i2 v11253 = *(i2*)(intptr_t)v11252;
	i8 v11254 = (i8)(intptr_t)(ws+3328);
	i8 v11255 = *(i8*)(intptr_t)v11254;
	i8 v11256 = *(i8*)(intptr_t)v11255;
	i8 v11257 = v11256+(+24);
	*(i2*)(intptr_t)v11257 = v11253;

	i8 v11258 = (i8)(intptr_t)(ws+3312);
	i8 v11259 = *(i8*)(intptr_t)v11258;
	i8 v11260 = (i8)(intptr_t)(f226_IsArray);
	i1 v11261;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11260)(&v11261, v11259);

	i8 v11262 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v11262 = v11261;

	i8 v11263 = (i8)(intptr_t)(ws+3312);
	i8 v11264 = *(i8*)(intptr_t)v11263;
	i8 v11265 = (i8)(intptr_t)(f231_IsRecord);
	i1 v11266;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11265)(&v11266, v11264);

	i8 v11267 = (i8)(intptr_t)(ws+3395);
	*(i1*)(intptr_t)v11267 = v11266;

	i8 v11268 = (i8)(intptr_t)(ws+3394);
	i1 v11269 = *(i1*)(intptr_t)v11268;
	i1 v11270 = (i1)+0;
	if (v11269==v11270) goto c02_0711; else goto c02_0710;

c02_0711:;

	i8 v11271 = (i8)(intptr_t)(ws+3395);
	i1 v11272 = *(i1*)(intptr_t)v11271;
	i1 v11273 = (i1)+0;
	if (v11272==v11273) goto c02_070f; else goto c02_0710;

c02_070f:;

	i8 v11274 = (i8)(intptr_t)c02_s018a;
	i8 v11275 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11275)(v11274);

c02_0710:;

c02_070a:;

	i8 v11276 = (i8)(intptr_t)(ws+3312);
	i8 v11277 = *(i8*)(intptr_t)v11276;
	i8 v11278 = (i8)(intptr_t)(f231_IsRecord);
	i1 v11279;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11278)(&v11279, v11277);

	i8 v11280 = (i8)(intptr_t)(ws+3396);
	*(i1*)(intptr_t)v11280 = v11279;

	i8 v11281 = (i8)(intptr_t)(ws+3396);
	i1 v11282 = *(i1*)(intptr_t)v11281;
	i1 v11283 = (i1)+0;
	if (v11282==v11283) goto c02_0718; else goto c02_0719;

c02_0719:;

	i8 v11284 = (i8)(intptr_t)(ws+3312);
	i8 v11285 = *(i8*)(intptr_t)v11284;
	i8 v11286 = v11285+(+16);
	i8 v11287 = *(i8*)(intptr_t)v11286;
	i8 v11288 = (i8)+0;
	if (v11287==v11288) goto c02_0718; else goto c02_0717;

c02_0717:;

	i8 v11289 = (i8)(intptr_t)c02_s018b;
	i8 v11290 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11290)(v11289);

c02_0718:;

c02_0712:;

	i8 v11291 = (i8)(intptr_t)(ws+3312);
	i8 v11292 = *(i8*)(intptr_t)v11291;
	i8 v11293 = (i8)(intptr_t)(f231_IsRecord);
	i1 v11294;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11293)(&v11294, v11292);

	i8 v11295 = (i8)(intptr_t)(ws+3397);
	*(i1*)(intptr_t)v11295 = v11294;

	i8 v11296 = (i8)(intptr_t)(ws+3397);
	i1 v11297 = *(i1*)(intptr_t)v11296;
	i1 v11298 = (i1)+0;
	if (v11297==v11298) goto c02_071e; else goto c02_071d;

c02_071d:;

	i8 v11299 = (i8)(intptr_t)(ws+3312);
	i8 v11300 = *(i8*)(intptr_t)v11299;
	i8 v11301 = *(i8*)(intptr_t)v11300;
	i8 v11302 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11302 = v11301;

c02_071e:;

c02_071a:;

	i8 v11303 = (i8)(intptr_t)(ws+3312);
	i8 v11304 = *(i8*)(intptr_t)v11303;
	i8 v11305 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11305 = v11304;

	i2 v11306 = (i2)+0;
	i8 v11307 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11307 = v11306;

	i2 v11308 = (i2)+0;
	i8 v11309 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v11309 = v11308;

	i8 v11310 = (i8)(intptr_t)(ws+3328);
	i8 v11311 = *(i8*)(intptr_t)v11310;
	i8 v11312 = (i8)(intptr_t)(f157_MidStartinit);
	i8 v11313;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v11312)(&v11313, v11311);

	i8 v11314 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11314 = v11313;

	i8 v11315 = (i8)(intptr_t)(ws+3400);
	i8 v11316 = *(i8*)(intptr_t)v11315;
	i8 v11317 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11317)(v11316);

	i1 v11318 = (i1)+6;
	i8 v11319 = (i8)(intptr_t)(ws+3320);
	i8 v11320 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11320)(v11319, v11318);

	i1 v11321 = (i1)+2;
	i8 v11322 = (i8)(intptr_t)(ws+3304);
	i8 v11323 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11323)(v11322, v11321);

endsub:;
}
	void f299_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f297_AlignTo(i1 /* alignment */);
	void f228_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s018c[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f76_SimpleError(i8 /* message */);
	void f146_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f257_Generate(i8 /* statement */);
	void f68_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s018d[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f76_SimpleError(i8 /* message */);
	void f163_MidInitstring(i8* /* m */, i8 /* text */);
	void f257_Generate(i8 /* statement */);
const i1 c02_s018e[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f125_MidInitaddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f257_Generate(i8 /* statement */);
const i1 c02_s018f[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f76_SimpleError(i8 /* message */);
	void f111_MidInitsubref(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f290_parser_i_constant_error(void);
	void f63_Discard(i8 /* node */);

// reduce_110 workspace at ws+3384 length ws+64
void f422_reduce_110(void) {

	i8 v11324 = (i8)(intptr_t)(f299_GetInitedMemberChecked);
	i8 v11325;
	i8 v11326;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v11324)(&v11325, &v11326);

	i8 v11327 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11327 = v11326;

	i8 v11328 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11328 = v11325;

	i8 v11329 = (i8)(intptr_t)(ws+3392);
	i8 v11330 = *(i8*)(intptr_t)v11329;
	i8 v11331 = v11330+(+53);
	i1 v11332 = *(i1*)(intptr_t)v11331;
	i8 v11333 = (i8)(intptr_t)(f297_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v11333)(v11332);

	i8 v11334 = (i8)(intptr_t)(ws+3392);
	i8 v11335 = *(i8*)(intptr_t)v11334;
	i8 v11336 = v11335+(+48);
	i2 v11337 = *(i2*)(intptr_t)v11336;
	i8 v11338 = (i8)(intptr_t)(ws+3400);
	*(i2*)(intptr_t)v11338 = v11337;

	i8 v11339 = (i8)(intptr_t)(ws+3304);
	i8 v11340 = *(i8*)(intptr_t)v11339;
	i8 v11341 = v11340+(+40);
	i1 v11342 = *(i1*)(intptr_t)v11341;

	if (v11342 != +40) goto c02_0720;

	i8 v11343 = (i8)(intptr_t)(ws+3392);
	i8 v11344 = *(i8*)(intptr_t)v11343;
	i8 v11345 = (i8)(intptr_t)(f228_IsNum);
	i1 v11346;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11345)(&v11346, v11344);

	i8 v11347 = (i8)(intptr_t)(ws+3402);
	*(i1*)(intptr_t)v11347 = v11346;

	i8 v11348 = (i8)(intptr_t)(ws+3402);
	i1 v11349 = *(i1*)(intptr_t)v11348;
	i1 v11350 = (i1)+0;
	if (v11349==v11350) goto c02_0724; else goto c02_0725;

c02_0724:;

	i8 v11351 = (i8)(intptr_t)c02_s018c;
	i8 v11352 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11352)(v11351);

c02_0725:;

c02_0721:;

	i8 v11353 = (i8)(intptr_t)(ws+3400);
	i2 v11354 = *(i2*)(intptr_t)v11353;
	i1 v11355 = v11354;
	i8 v11356 = (i8)(intptr_t)(ws+3304);
	i8 v11357 = *(i8*)(intptr_t)v11356;
	i4 v11358 = *(i4*)(intptr_t)v11357;
	i8 v11359 = (i8)(intptr_t)(f146_MidInit);
	i8 v11360;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v11359)(&v11360, v11358, v11355);

	i8 v11361 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v11361 = v11360;

	i8 v11362 = (i8)(intptr_t)(ws+3408);
	i8 v11363 = *(i8*)(intptr_t)v11362;
	i8 v11364 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11364)(v11363);

	goto c02_071f;

c02_0720:;

	if (v11342 != +41) goto c02_0726;

	i8 v11365 = (i8)(intptr_t)(ws+3392);
	i8 v11366 = *(i8*)(intptr_t)v11365;
	i8 v11367 = (i8)(intptr_t)(f68_IsPtr);
	i1 v11368;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11367)(&v11368, v11366);

	i8 v11369 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v11369 = v11368;

	i8 v11370 = (i8)(intptr_t)(ws+3416);
	i1 v11371 = *(i1*)(intptr_t)v11370;
	i1 v11372 = (i1)+0;
	if (v11371==v11372) goto c02_072c; else goto c02_072e;

c02_072e:;

	i8 v11373 = (i8)(intptr_t)(ws+3392);
	i8 v11374 = *(i8*)(intptr_t)v11373;
	i8 v11375 = *(i8*)(intptr_t)v11374;
	i8 v11376 = (i8)(intptr_t)(ws+1512);
	i8 v11377 = *(i8*)(intptr_t)v11376;
	if (v11375==v11377) goto c02_072d; else goto c02_072c;

c02_072c:;

	i8 v11378 = (i8)(intptr_t)c02_s018d;
	i8 v11379 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11379)(v11378);

c02_072d:;

c02_0727:;

	i8 v11380 = (i8)(intptr_t)(ws+3304);
	i8 v11381 = *(i8*)(intptr_t)v11380;
	i8 v11382 = *(i8*)(intptr_t)v11381;
	i8 v11383 = (i8)(intptr_t)(f163_MidInitstring);
	i8 v11384;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v11383)(&v11384, v11382);

	i8 v11385 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v11385 = v11384;

	i8 v11386 = (i8)(intptr_t)(ws+3424);
	i8 v11387 = *(i8*)(intptr_t)v11386;
	i8 v11388 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11388)(v11387);

	goto c02_071f;

c02_0726:;

	if (v11342 != +42) goto c02_072f;

	i8 v11389 = (i8)(intptr_t)(ws+3392);
	i8 v11390 = *(i8*)(intptr_t)v11389;
	i8 v11391 = (i8)(intptr_t)(ws+3304);
	i8 v11392 = *(i8*)(intptr_t)v11391;
	i8 v11393 = v11392+(+16);
	i8 v11394 = *(i8*)(intptr_t)v11393;
	if (v11390==v11394) goto c02_0734; else goto c02_0733;

c02_0733:;

	i8 v11395 = (i8)(intptr_t)c02_s018e;
	i8 v11396 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11396)(v11395);

c02_0734:;

c02_0730:;

	i8 v11397 = (i8)(intptr_t)(ws+3304);
	i8 v11398 = *(i8*)(intptr_t)v11397;
	i8 v11399 = *(i8*)(intptr_t)v11398;
	i8 v11400 = (i8)(intptr_t)(ws+3304);
	i8 v11401 = *(i8*)(intptr_t)v11400;
	i8 v11402 = v11401+(+8);
	i2 v11403 = *(i2*)(intptr_t)v11402;
	i8 v11404 = (i8)(intptr_t)(f125_MidInitaddress);
	i8 v11405;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11404)(&v11405, v11403, v11399);

	i8 v11406 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v11406 = v11405;

	i8 v11407 = (i8)(intptr_t)(ws+3432);
	i8 v11408 = *(i8*)(intptr_t)v11407;
	i8 v11409 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11409)(v11408);

	goto c02_071f;

c02_072f:;

	if (v11342 != +43) goto c02_0735;

	i8 v11410 = (i8)(intptr_t)(ws+3392);
	i8 v11411 = *(i8*)(intptr_t)v11410;
	i8 v11412 = (i8)(intptr_t)(ws+3304);
	i8 v11413 = *(i8*)(intptr_t)v11412;
	i8 v11414 = v11413+(+16);
	i8 v11415 = *(i8*)(intptr_t)v11414;
	if (v11411==v11415) goto c02_073a; else goto c02_0739;

c02_0739:;

	i8 v11416 = (i8)(intptr_t)c02_s018f;
	i8 v11417 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11417)(v11416);

c02_073a:;

c02_0736:;

	i8 v11418 = (i8)(intptr_t)(ws+3304);
	i8 v11419 = *(i8*)(intptr_t)v11418;
	i8 v11420 = *(i8*)(intptr_t)v11419;
	i8 v11421 = (i8)(intptr_t)(f111_MidInitsubref);
	i8 v11422;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v11421)(&v11422, v11420);

	i8 v11423 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v11423 = v11422;

	i8 v11424 = (i8)(intptr_t)(ws+3440);
	i8 v11425 = *(i8*)(intptr_t)v11424;
	i8 v11426 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11426)(v11425);

	goto c02_071f;

c02_0735:;

	i8 v11427 = (i8)(intptr_t)(f290_parser_i_constant_error);

	((void(*)(void))(intptr_t)v11427)();

c02_071f:;


	i8 v11428 = (i8)(intptr_t)(ws+3304);
	i8 v11429 = *(i8*)(intptr_t)v11428;
	i8 v11430 = (i8)(intptr_t)(f63_Discard);

	((void(*)(i8 /* node */))(intptr_t)v11430)(v11429);

	i8 v11431 = (i8)(intptr_t)(ws+1560);
	i2 v11432 = *(i2*)(intptr_t)v11431;
	i8 v11433 = (i8)(intptr_t)(ws+3400);
	i2 v11434 = *(i2*)(intptr_t)v11433;
	i2 v11435 = v11432+v11434;
	i8 v11436 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11436 = v11435;

	i8 v11437 = (i8)(intptr_t)(ws+1562);
	i2 v11438 = *(i2*)(intptr_t)v11437;
	i8 v11439 = (i8)(intptr_t)(ws+3400);
	i2 v11440 = *(i2*)(intptr_t)v11439;
	i2 v11441 = v11438+v11440;
	i8 v11442 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v11442 = v11441;

endsub:;
}
	void f295_CheckEndOfInitialiser(void);
	void f34_Free(i8 /* block */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_111 workspace at ws+3384 length ws+0
void f423_reduce_111(void) {

	i8 v11443 = (i8)(intptr_t)(f295_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v11443)();

	i8 v11444 = (i8)(intptr_t)(ws+1560);
	i2 v11445 = *(i2*)(intptr_t)v11444;
	i8 v11446 = (i8)(intptr_t)(ws+3320);
	i8 v11447 = *(i8*)(intptr_t)v11446;
	i8 v11448 = v11447+(+16);
	i2 v11449 = *(i2*)(intptr_t)v11448;
	i2 v11450 = v11445+v11449;
	i8 v11451 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11451 = v11450;

	i8 v11452 = (i8)(intptr_t)(ws+3320);
	i8 v11453 = *(i8*)(intptr_t)v11452;
	i8 v11454 = *(i8*)(intptr_t)v11453;
	i8 v11455 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11455 = v11454;

	i8 v11456 = (i8)(intptr_t)(ws+3320);
	i8 v11457 = *(i8*)(intptr_t)v11456;
	i8 v11458 = v11457+(+8);
	i8 v11459 = *(i8*)(intptr_t)v11458;
	i8 v11460 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11460 = v11459;

	i8 v11461 = (i8)(intptr_t)(ws+3320);
	i8 v11462 = *(i8*)(intptr_t)v11461;
	i8 v11463 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v11463)(v11462);

	i1 v11464 = (i1)+32;
	i8 v11465 = (i8)(intptr_t)(ws+3304);
	i8 v11466 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11466)(v11465, v11464);

endsub:;
}
	void f299_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f297_AlignTo(i1 /* alignment */);
	void f69_InternalAlloc(i8* /* block */, i8 /* length */);
	void f231_IsRecord(i1* /* result */, i8 /* type */);
	void f226_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0190[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// reduce_112 workspace at ws+3384 length ws+26
void f424_reduce_112(void) {

	i8 v11467 = (i8)(intptr_t)(f299_GetInitedMemberChecked);
	i8 v11468;
	i8 v11469;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v11467)(&v11468, &v11469);

	i8 v11470 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11470 = v11469;

	i8 v11471 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11471 = v11468;

	i8 v11472 = (i8)(intptr_t)(ws+3392);
	i8 v11473 = *(i8*)(intptr_t)v11472;
	i8 v11474 = v11473+(+53);
	i1 v11475 = *(i1*)(intptr_t)v11474;
	i8 v11476 = (i8)(intptr_t)(f297_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v11476)(v11475);

	i8 v11477 = (i8)+18;
	i8 v11478 = (i8)(intptr_t)(f69_InternalAlloc);
	i8 v11479;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v11478)(&v11479, v11477);

	i8 v11480 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11480 = v11479;

	i8 v11481 = (i8)(intptr_t)(ws+3400);
	i8 v11482 = *(i8*)(intptr_t)v11481;
	i8 v11483 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v11483 = v11482;

	i8 v11484 = (i8)(intptr_t)(ws+72);
	i8 v11485 = *(i8*)(intptr_t)v11484;
	i8 v11486 = (i8)(intptr_t)(ws+3296);
	i8 v11487 = *(i8*)(intptr_t)v11486;
	*(i8*)(intptr_t)v11487 = v11485;

	i8 v11488 = (i8)(intptr_t)(ws+1552);
	i8 v11489 = *(i8*)(intptr_t)v11488;
	i8 v11490 = (i8)(intptr_t)(ws+3296);
	i8 v11491 = *(i8*)(intptr_t)v11490;
	i8 v11492 = v11491+(+8);
	*(i8*)(intptr_t)v11492 = v11489;

	i8 v11493 = (i8)(intptr_t)(ws+1560);
	i2 v11494 = *(i2*)(intptr_t)v11493;
	i8 v11495 = (i8)(intptr_t)(ws+3296);
	i8 v11496 = *(i8*)(intptr_t)v11495;
	i8 v11497 = v11496+(+16);
	*(i2*)(intptr_t)v11497 = v11494;

	i8 v11498 = (i8)(intptr_t)(ws+3392);
	i8 v11499 = *(i8*)(intptr_t)v11498;
	i8 v11500 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v11500 = v11499;

	i2 v11501 = (i2)+0;
	i8 v11502 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v11502 = v11501;

	i8 v11503 = (i8)(intptr_t)(ws+3392);
	i8 v11504 = *(i8*)(intptr_t)v11503;
	i8 v11505 = (i8)(intptr_t)(f231_IsRecord);
	i1 v11506;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11505)(&v11506, v11504);

	i8 v11507 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v11507 = v11506;

	i8 v11508 = (i8)(intptr_t)(ws+3408);
	i1 v11509 = *(i1*)(intptr_t)v11508;
	i1 v11510 = (i1)+0;
	if (v11509==v11510) goto c02_073f; else goto c02_073e;

c02_073e:;

	i8 v11511 = (i8)(intptr_t)(ws+3392);
	i8 v11512 = *(i8*)(intptr_t)v11511;
	i8 v11513 = *(i8*)(intptr_t)v11512;
	i8 v11514 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11514 = v11513;

	goto c02_073b;

c02_073f:;

	i8 v11515 = (i8)(intptr_t)(ws+3392);
	i8 v11516 = *(i8*)(intptr_t)v11515;
	i8 v11517 = (i8)(intptr_t)(f226_IsArray);
	i1 v11518;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11517)(&v11518, v11516);

	i8 v11519 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v11519 = v11518;

	i8 v11520 = (i8)(intptr_t)(ws+3409);
	i1 v11521 = *(i1*)(intptr_t)v11520;
	i1 v11522 = (i1)+0;
	if (v11521==v11522) goto c02_0743; else goto c02_0742;

c02_0742:;

	i8 v11523 = (i8)+0;
	i8 v11524 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v11524 = v11523;

	goto c02_073b;

c02_0743:;

	i8 v11525 = (i8)(intptr_t)c02_s0190;
	i8 v11526 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11526)(v11525);

c02_073b:;

endsub:;
}
	void f153_MidAsmend(i8* /* m */);
	void f257_Generate(i8 /* statement */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_113 workspace at ws+3384 length ws+8
void f425_reduce_113(void) {

	i8 v11527 = (i8)(intptr_t)(f153_MidAsmend);
	i8 v11528;

	((void(*)(i8* /* m */))(intptr_t)v11527)(&v11528);

	i8 v11529 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11529 = v11528;

	i8 v11530 = (i8)(intptr_t)(ws+3384);
	i8 v11531 = *(i8*)(intptr_t)v11530;
	i8 v11532 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11532)(v11531);

	i1 v11533 = (i1)+22;
	i8 v11534 = (i8)(intptr_t)(ws+3304);
	i8 v11535 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11535)(v11534, v11533);

endsub:;
}
	void f154_MidAsmstart(i8* /* m */);
	void f257_Generate(i8 /* statement */);

// reduce_114 workspace at ws+3384 length ws+8
void f426_reduce_114(void) {

	i8 v11536 = (i8)(intptr_t)(f154_MidAsmstart);
	i8 v11537;

	((void(*)(i8* /* m */))(intptr_t)v11536)(&v11537);

	i8 v11538 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11538 = v11537;

	i8 v11539 = (i8)(intptr_t)(ws+3384);
	i8 v11540 = *(i8*)(intptr_t)v11539;
	i8 v11541 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11541)(v11540);

endsub:;
}
	void f160_MidAsmtext(i8* /* m */, i8 /* text */);
	void f257_Generate(i8 /* statement */);
	void f34_Free(i8 /* block */);

// reduce_115 workspace at ws+3384 length ws+8
void f427_reduce_115(void) {

	i8 v11542 = (i8)(intptr_t)(ws+3304);
	i8 v11543 = *(i8*)(intptr_t)v11542;
	i8 v11544 = (i8)(intptr_t)(f160_MidAsmtext);
	i8 v11545;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v11544)(&v11545, v11543);

	i8 v11546 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11546 = v11545;

	i8 v11547 = (i8)(intptr_t)(ws+3384);
	i8 v11548 = *(i8*)(intptr_t)v11547;
	i8 v11549 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11549)(v11548);

	i8 v11550 = (i8)(intptr_t)(ws+3304);
	i8 v11551 = *(i8*)(intptr_t)v11550;
	i8 v11552 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v11552)(v11551);

endsub:;
}
	void f139_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f257_Generate(i8 /* statement */);

// reduce_116 workspace at ws+3384 length ws+8
void f428_reduce_116(void) {

	i8 v11553 = (i8)(intptr_t)(ws+3304);
	i4 v11554 = *(i4*)(intptr_t)v11553;
	i8 v11555 = (i8)(intptr_t)(f139_MidAsmvalue);
	i8 v11556;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11555)(&v11556, v11554);

	i8 v11557 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v11557 = v11556;

	i8 v11558 = (i8)(intptr_t)(ws+3384);
	i8 v11559 = *(i8*)(intptr_t)v11558;
	i8 v11560 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11560)(v11559);

endsub:;
}
const i1 c02_s0191[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f76_SimpleError(i8 /* message */);

// bad_reference workspace at ws+3416 length ws+0
void f430_bad_reference(void) {

	i8 v11561 = (i8)(intptr_t)c02_s0191;
	i8 v11562 = (i8)(intptr_t)(f76_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11562)(v11561);

endsub:;
}
	void f227_IsSubroutine(i1* /* result */, i8 /* type */);
	void f201_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f121_MidAsmsubref(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f430_bad_reference(void);
	void f105_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f257_Generate(i8 /* statement */);
	void f139_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f257_Generate(i8 /* statement */);
	void f430_bad_reference(void);

// reduce_117 workspace at ws+3384 length ws+32
void f429_reduce_117(void) {


	i8 v11563 = (i8)(intptr_t)(ws+3304);
	i8 v11564 = *(i8*)(intptr_t)v11563;
	i8 v11565 = v11564+(+32);
	i1 v11566 = *(i1*)(intptr_t)v11565;

	if (v11566 != +30) goto c02_0745;

	i8 v11567 = (i8)(intptr_t)(ws+3304);
	i8 v11568 = *(i8*)(intptr_t)v11567;
	i8 v11569 = *(i8*)(intptr_t)v11568;
	i8 v11570 = (i8)(intptr_t)(f227_IsSubroutine);
	i1 v11571;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11570)(&v11571, v11569);

	i8 v11572 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v11572 = v11571;

	i8 v11573 = (i8)(intptr_t)(ws+3384);
	i1 v11574 = *(i1*)(intptr_t)v11573;
	i1 v11575 = (i1)+0;
	if (v11574==v11575) goto c02_074a; else goto c02_0749;

c02_0749:;

	i8 v11576 = (i8)(intptr_t)(ws+40);
	i8 v11577 = *(i8*)(intptr_t)v11576;
	i8 v11578 = (i8)(intptr_t)(ws+3304);
	i8 v11579 = *(i8*)(intptr_t)v11578;
	i8 v11580 = *(i8*)(intptr_t)v11579;
	i8 v11581 = *(i8*)(intptr_t)v11580;
	i8 v11582 = (i8)(intptr_t)(f201_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v11582)(v11581, v11577);

	i8 v11583 = (i8)(intptr_t)(ws+3304);
	i8 v11584 = *(i8*)(intptr_t)v11583;
	i8 v11585 = *(i8*)(intptr_t)v11584;
	i8 v11586 = *(i8*)(intptr_t)v11585;
	i8 v11587 = (i8)(intptr_t)(f121_MidAsmsubref);
	i8 v11588;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v11587)(&v11588, v11586);

	i8 v11589 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v11589 = v11588;

	i8 v11590 = (i8)(intptr_t)(ws+3392);
	i8 v11591 = *(i8*)(intptr_t)v11590;
	i8 v11592 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11592)(v11591);

	goto c02_0746;

c02_074a:;

	i8 v11593 = (i8)(intptr_t)(f430_bad_reference);

	((void(*)(void))(intptr_t)v11593)();

c02_0746:;

	goto c02_0744;

c02_0745:;

	if (v11566 != +28) goto c02_074b;

	i8 v11594 = (i8)(intptr_t)(ws+3304);
	i8 v11595 = *(i8*)(intptr_t)v11594;
	i8 v11596 = (i8)(intptr_t)(f105_MidAsmsymbol);
	i8 v11597;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v11596)(&v11597, v11595);

	i8 v11598 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v11598 = v11597;

	i8 v11599 = (i8)(intptr_t)(ws+3400);
	i8 v11600 = *(i8*)(intptr_t)v11599;
	i8 v11601 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11601)(v11600);

	goto c02_0744;

c02_074b:;

	if (v11566 != +7) goto c02_074c;

	i8 v11602 = (i8)(intptr_t)(ws+3304);
	i8 v11603 = *(i8*)(intptr_t)v11602;
	i4 v11604 = *(i4*)(intptr_t)v11603;
	i8 v11605 = (i8)(intptr_t)(f139_MidAsmvalue);
	i8 v11606;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11605)(&v11606, v11604);

	i8 v11607 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v11607 = v11606;

	i8 v11608 = (i8)(intptr_t)(ws+3408);
	i8 v11609 = *(i8*)(intptr_t)v11608;
	i8 v11610 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11610)(v11609);

	goto c02_0744;

c02_074c:;

	i8 v11611 = (i8)(intptr_t)(f430_bad_reference);

	((void(*)(void))(intptr_t)v11611)();

c02_0744:;


endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_123 workspace at ws+3384 length ws+0
void f431_reduce_123(void) {

	i1 v11612 = (i1)+26;
	i8 v11613 = (i8)(intptr_t)(ws+3320);
	i8 v11614 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11614)(v11613, v11612);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3384 length ws+0
void f432_reduce_127(void) {

	i1 v11615 = (i1)+22;
	i8 v11616 = (i8)(intptr_t)(ws+3304);
	i8 v11617 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11617)(v11616, v11615);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3384 length ws+0
void f433_reduce_128(void) {

	i1 v11618 = (i1)+25;
	i8 v11619 = (i8)(intptr_t)(ws+3336);
	i8 v11620 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11620)(v11619, v11618);

	i1 v11621 = (i1)+22;
	i8 v11622 = (i8)(intptr_t)(ws+3304);
	i8 v11623 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11623)(v11622, v11621);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3384 length ws+0
void f434_reduce_129(void) {

	i1 v11624 = (i1)+22;
	i8 v11625 = (i8)(intptr_t)(ws+3304);
	i8 v11626 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11626)(v11625, v11624);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_130 workspace at ws+3384 length ws+0
void f435_reduce_130(void) {

	i1 v11627 = (i1)+22;
	i8 v11628 = (i8)(intptr_t)(ws+3304);
	i8 v11629 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11629)(v11628, v11627);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_136 workspace at ws+3384 length ws+0
void f436_reduce_136(void) {

	i1 v11630 = (i1)+45;
	i8 v11631 = (i8)(intptr_t)(ws+3312);
	i8 v11632 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11632)(v11631, v11630);

endsub:;
}
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_139 workspace at ws+3384 length ws+0
void f437_reduce_139(void) {

	i1 v11633 = (i1)+45;
	i8 v11634 = (i8)(intptr_t)(ws+3312);
	i8 v11635 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11635)(v11634, v11633);

endsub:;
}

// reduce_default workspace at ws+3384 length ws+0
void f438_reduce_default(void) {

endsub:;
}
	void f309_reduce_0(void);
	void f310_reduce_1(void);
	void f311_reduce_2(void);
	void f312_reduce_3(void);
	void f313_reduce_4(void);
	void f314_reduce_5(void);
	void f315_reduce_6(void);
	void f316_reduce_7(void);
	void f317_reduce_8(void);
	void f318_reduce_9(void);
	void f319_reduce_10(void);
	void f320_reduce_11(void);
	void f321_reduce_12(void);
	void f322_reduce_13(void);
	void f323_reduce_14(void);
	void f324_reduce_15(void);
	void f325_reduce_16(void);
	void f326_reduce_17(void);
	void f327_reduce_18(void);
	void f328_reduce_19(void);
	void f329_reduce_20(void);
	void f330_reduce_21(void);
	void f331_reduce_22(void);
	void f332_reduce_23(void);
	void f333_reduce_24(void);
	void f334_reduce_25(void);
	void f335_reduce_26(void);
	void f336_reduce_27(void);
	void f337_reduce_28(void);
	void f338_reduce_29(void);
	void f339_reduce_30(void);
	void f340_reduce_31(void);
	void f341_reduce_32(void);
	void f342_reduce_33(void);
	void f343_reduce_34(void);
	void f344_reduce_35(void);
	void f345_reduce_36(void);
	void f346_reduce_37(void);
	void f347_reduce_38(void);
	void f348_reduce_39(void);
	void f349_reduce_40(void);
	void f350_reduce_41(void);
	void f351_reduce_42(void);
	void f352_reduce_43(void);
	void f353_reduce_44(void);
	void f354_reduce_45(void);
	void f355_reduce_46(void);
	void f356_reduce_47(void);
	void f357_reduce_48(void);
	void f358_reduce_49(void);
	void f359_reduce_50(void);
	void f360_reduce_51(void);
	void f361_reduce_52(void);
	void f362_reduce_53(void);
	void f363_reduce_54(void);
	void f365_reduce_55(void);
	void f366_reduce_56(void);
	void f367_reduce_57(void);
	void f369_reduce_58(void);
	void f370_reduce_59(void);
	void f371_reduce_60(void);
	void f372_reduce_61(void);
	void f373_reduce_62(void);
	void f374_reduce_63(void);
	void f375_reduce_64(void);
	void f376_reduce_65(void);
	void f377_reduce_66(void);
	void f378_reduce_67(void);
	void f379_reduce_68(void);
	void f380_reduce_69(void);
	void f381_reduce_70(void);
	void f382_reduce_71(void);
	void f383_reduce_72(void);
	void f384_reduce_73(void);
	void f385_reduce_74(void);
	void f386_reduce_75(void);
	void f387_reduce_76(void);
	void f388_reduce_77(void);
	void f389_reduce_78(void);
	void f390_reduce_79(void);
	void f391_reduce_80(void);
	void f392_reduce_81(void);
	void f393_reduce_82(void);
	void f394_reduce_83(void);
	void f395_reduce_84(void);
	void f396_reduce_85(void);
	void f397_reduce_86(void);
	void f398_reduce_87(void);
	void f400_reduce_88(void);
	void f401_reduce_89(void);
	void f402_reduce_90(void);
	void f403_reduce_91(void);
	void f404_reduce_92(void);
	void f405_reduce_93(void);
	void f406_reduce_94(void);
	void f407_reduce_95(void);
	void f408_reduce_96(void);
	void f409_reduce_97(void);
	void f410_reduce_98(void);
	void f411_reduce_99(void);
	void f412_reduce_100(void);
	void f413_reduce_101(void);
	void f414_reduce_102(void);
	void f415_reduce_103(void);
	void f416_reduce_104(void);
	void f417_reduce_105(void);
	void f418_reduce_106(void);
	void f419_reduce_107(void);
	void f420_reduce_108(void);
	void f421_reduce_109(void);
	void f422_reduce_110(void);
	void f423_reduce_111(void);
	void f424_reduce_112(void);
	void f425_reduce_113(void);
	void f426_reduce_114(void);
	void f427_reduce_115(void);
	void f428_reduce_116(void);
	void f429_reduce_117(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f431_reduce_123(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f432_reduce_127(void);
	void f433_reduce_128(void);
	void f434_reduce_129(void);
	void f435_reduce_130(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f436_reduce_136(void);
	void f438_reduce_default(void);
	void f438_reduce_default(void);
	void f437_reduce_139(void);
static data f307_yy_reduce_s074d[] = {

	{ .ptr = (void*)f309_reduce_0 },

	{ .ptr = (void*)f310_reduce_1 },

	{ .ptr = (void*)f311_reduce_2 },

	{ .ptr = (void*)f312_reduce_3 },

	{ .ptr = (void*)f313_reduce_4 },

	{ .ptr = (void*)f314_reduce_5 },

	{ .ptr = (void*)f315_reduce_6 },

	{ .ptr = (void*)f316_reduce_7 },

	{ .ptr = (void*)f317_reduce_8 },

	{ .ptr = (void*)f318_reduce_9 },

	{ .ptr = (void*)f319_reduce_10 },

	{ .ptr = (void*)f320_reduce_11 },

	{ .ptr = (void*)f321_reduce_12 },

	{ .ptr = (void*)f322_reduce_13 },

	{ .ptr = (void*)f323_reduce_14 },

	{ .ptr = (void*)f324_reduce_15 },

	{ .ptr = (void*)f325_reduce_16 },

	{ .ptr = (void*)f326_reduce_17 },

	{ .ptr = (void*)f327_reduce_18 },

	{ .ptr = (void*)f328_reduce_19 },

	{ .ptr = (void*)f329_reduce_20 },

	{ .ptr = (void*)f330_reduce_21 },

	{ .ptr = (void*)f331_reduce_22 },

	{ .ptr = (void*)f332_reduce_23 },

	{ .ptr = (void*)f333_reduce_24 },

	{ .ptr = (void*)f334_reduce_25 },

	{ .ptr = (void*)f335_reduce_26 },

	{ .ptr = (void*)f336_reduce_27 },

	{ .ptr = (void*)f337_reduce_28 },

	{ .ptr = (void*)f338_reduce_29 },

	{ .ptr = (void*)f339_reduce_30 },

	{ .ptr = (void*)f340_reduce_31 },

	{ .ptr = (void*)f341_reduce_32 },

	{ .ptr = (void*)f342_reduce_33 },

	{ .ptr = (void*)f343_reduce_34 },

	{ .ptr = (void*)f344_reduce_35 },

	{ .ptr = (void*)f345_reduce_36 },

	{ .ptr = (void*)f346_reduce_37 },

	{ .ptr = (void*)f347_reduce_38 },

	{ .ptr = (void*)f348_reduce_39 },

	{ .ptr = (void*)f349_reduce_40 },

	{ .ptr = (void*)f350_reduce_41 },

	{ .ptr = (void*)f351_reduce_42 },

	{ .ptr = (void*)f352_reduce_43 },

	{ .ptr = (void*)f353_reduce_44 },

	{ .ptr = (void*)f354_reduce_45 },

	{ .ptr = (void*)f355_reduce_46 },

	{ .ptr = (void*)f356_reduce_47 },

	{ .ptr = (void*)f357_reduce_48 },

	{ .ptr = (void*)f358_reduce_49 },

	{ .ptr = (void*)f359_reduce_50 },

	{ .ptr = (void*)f360_reduce_51 },

	{ .ptr = (void*)f361_reduce_52 },

	{ .ptr = (void*)f362_reduce_53 },

	{ .ptr = (void*)f363_reduce_54 },

	{ .ptr = (void*)f365_reduce_55 },

	{ .ptr = (void*)f366_reduce_56 },

	{ .ptr = (void*)f367_reduce_57 },

	{ .ptr = (void*)f369_reduce_58 },

	{ .ptr = (void*)f370_reduce_59 },

	{ .ptr = (void*)f371_reduce_60 },

	{ .ptr = (void*)f372_reduce_61 },

	{ .ptr = (void*)f373_reduce_62 },

	{ .ptr = (void*)f374_reduce_63 },

	{ .ptr = (void*)f375_reduce_64 },

	{ .ptr = (void*)f376_reduce_65 },

	{ .ptr = (void*)f377_reduce_66 },

	{ .ptr = (void*)f378_reduce_67 },

	{ .ptr = (void*)f379_reduce_68 },

	{ .ptr = (void*)f380_reduce_69 },

	{ .ptr = (void*)f381_reduce_70 },

	{ .ptr = (void*)f382_reduce_71 },

	{ .ptr = (void*)f383_reduce_72 },

	{ .ptr = (void*)f384_reduce_73 },

	{ .ptr = (void*)f385_reduce_74 },

	{ .ptr = (void*)f386_reduce_75 },

	{ .ptr = (void*)f387_reduce_76 },

	{ .ptr = (void*)f388_reduce_77 },

	{ .ptr = (void*)f389_reduce_78 },

	{ .ptr = (void*)f390_reduce_79 },

	{ .ptr = (void*)f391_reduce_80 },

	{ .ptr = (void*)f392_reduce_81 },

	{ .ptr = (void*)f393_reduce_82 },

	{ .ptr = (void*)f394_reduce_83 },

	{ .ptr = (void*)f395_reduce_84 },

	{ .ptr = (void*)f396_reduce_85 },

	{ .ptr = (void*)f397_reduce_86 },

	{ .ptr = (void*)f398_reduce_87 },

	{ .ptr = (void*)f400_reduce_88 },

	{ .ptr = (void*)f401_reduce_89 },

	{ .ptr = (void*)f402_reduce_90 },

	{ .ptr = (void*)f403_reduce_91 },

	{ .ptr = (void*)f404_reduce_92 },

	{ .ptr = (void*)f405_reduce_93 },

	{ .ptr = (void*)f406_reduce_94 },

	{ .ptr = (void*)f407_reduce_95 },

	{ .ptr = (void*)f408_reduce_96 },

	{ .ptr = (void*)f409_reduce_97 },

	{ .ptr = (void*)f410_reduce_98 },

	{ .ptr = (void*)f411_reduce_99 },

	{ .ptr = (void*)f412_reduce_100 },

	{ .ptr = (void*)f413_reduce_101 },

	{ .ptr = (void*)f414_reduce_102 },

	{ .ptr = (void*)f415_reduce_103 },

	{ .ptr = (void*)f416_reduce_104 },

	{ .ptr = (void*)f417_reduce_105 },

	{ .ptr = (void*)f418_reduce_106 },

	{ .ptr = (void*)f419_reduce_107 },

	{ .ptr = (void*)f420_reduce_108 },

	{ .ptr = (void*)f421_reduce_109 },

	{ .ptr = (void*)f422_reduce_110 },

	{ .ptr = (void*)f423_reduce_111 },

	{ .ptr = (void*)f424_reduce_112 },

	{ .ptr = (void*)f425_reduce_113 },

	{ .ptr = (void*)f426_reduce_114 },

	{ .ptr = (void*)f427_reduce_115 },

	{ .ptr = (void*)f428_reduce_116 },

	{ .ptr = (void*)f429_reduce_117 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f431_reduce_123 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f432_reduce_127 },

	{ .ptr = (void*)f433_reduce_128 },

	{ .ptr = (void*)f434_reduce_129 },

	{ .ptr = (void*)f435_reduce_130 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f436_reduce_136 },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f438_reduce_default },

	{ .ptr = (void*)f437_reduce_139 },

};
	void f306_CopyMinor(i8 /* dest */, i8 /* src */);

// yy_reduce workspace at ws+3288 length ws+94
void f307_yy_reduce(i2* p8016 /* yyact */, i1 p8017 /* yylookahead */, i2 p8018 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+3288) = p8018; /* yyruleno */
	*(i1*)(intptr_t)(ws+3290) = p8017; /* yylookahead */

	i8 v8019 = (i8)(intptr_t)((i1*)f3___main_s05e8);
	i8 v8020 = (i8)(intptr_t)(ws+3288);
	i2 v8021 = *(i2*)(intptr_t)v8020;
	i1 v8022 = v8021;
	i8 v8023 = v8022;
	i8 v8024 = v8019+v8023;
	i1 v8025 = *(i1*)(intptr_t)v8024;
	i8 v8026 = (i8)(intptr_t)(ws+3294);
	*(i1*)(intptr_t)v8026 = v8025;

	i8 v8027 = (i8)(intptr_t)(ws+1568);
	i8 v8028 = *(i8*)(intptr_t)v8027;
	i8 v8029 = (i8)(intptr_t)(ws+3176);
	if (v8028==v8029) goto c02_05ec; else goto c02_05ed;

c02_05ec:;

	i8 v8030 = (i8)(intptr_t)(f304_yy_stack_overflow);

	((void(*)(void))(intptr_t)v8030)();

c02_05ed:;

c02_05e9:;

	i8 v8031 = (i8)(intptr_t)(ws+3304);
	i8 v8032 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v8032 = v8031;

	i8 v8033 = (i8)(intptr_t)(ws+3294);
	i1 v8034 = *(i1*)(intptr_t)v8033;
	i8 v8035 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v8035 = v8034;

c02_05ee:;

	i8 v8036 = (i8)(intptr_t)(ws+3376);
	i1 v8037 = *(i1*)(intptr_t)v8036;
	i1 v8038 = (i1)+0;
	if (v8037==v8038) goto c02_05f3; else goto c02_05f2;

c02_05f2:;

	i8 v8039 = (i8)(intptr_t)(ws+1568);
	i8 v8040 = *(i8*)(intptr_t)v8039;
	i8 v8041 = v8040+(+8);
	i8 v8042 = (i8)(intptr_t)(ws+3368);
	i8 v8043 = *(i8*)(intptr_t)v8042;
	i8 v8044 = (i8)(intptr_t)(f306_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v8044)(v8043, v8041);

	i8 v8045 = (i8)(intptr_t)(ws+1568);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	i8 v8047 = v8046+(-16);
	i8 v8048 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v8048 = v8047;

	i8 v8049 = (i8)(intptr_t)(ws+3368);
	i8 v8050 = *(i8*)(intptr_t)v8049;
	i8 v8051 = v8050+(+8);
	i8 v8052 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v8052 = v8051;

	i8 v8053 = (i8)(intptr_t)(ws+3376);
	i1 v8054 = *(i1*)(intptr_t)v8053;
	i1 v8055 = v8054+(-1);
	i8 v8056 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v8056 = v8055;

	goto c02_05ee;

c02_05f3:;

































































































































	i8 v11636 = (i8)(intptr_t)((i1*)f307_yy_reduce_s074d);
	i8 v11637 = (i8)(intptr_t)(ws+3288);
	i2 v11638 = *(i2*)(intptr_t)v11637;
	i1 v11639 = v11638;
	i8 v11640 = v11639;
	i1 v11641 = (i1)+3;
	i8 v11642 = ((i8)v11640)<<v11641;
	i8 v11643 = v11636+v11642;
	i8 v11644 = *(i8*)(intptr_t)v11643;

	((void(*)(void))(intptr_t)v11644)();

	i8 v11645 = (i8)(intptr_t)(ws+3296);
	i8 v11646 = (i8)(intptr_t)(ws+1568);
	i8 v11647 = *(i8*)(intptr_t)v11646;
	i8 v11648 = v11647+(+24);
	i8 v11649 = (i8)(intptr_t)(f306_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v11649)(v11648, v11645);

	i8 v11650 = (i8)(intptr_t)((i1*)f3___main_s05e7);
	i8 v11651 = (i8)(intptr_t)(ws+3288);
	i2 v11652 = *(i2*)(intptr_t)v11651;
	i1 v11653 = v11652;
	i8 v11654 = v11653;
	i8 v11655 = v11650+v11654;
	i1 v11656 = *(i1*)(intptr_t)v11655;
	i8 v11657 = (i8)(intptr_t)(ws+3377);
	*(i1*)(intptr_t)v11657 = v11656;

	i8 v11658 = (i8)(intptr_t)(ws+1568);
	i8 v11659 = *(i8*)(intptr_t)v11658;
	i2 v11660 = *(i2*)(intptr_t)v11659;
	i8 v11661 = (i8)(intptr_t)(ws+3378);
	*(i2*)(intptr_t)v11661 = v11660;

	i8 v11662 = (i8)(intptr_t)((i1*)f3___main_s05cf);
	i8 v11663 = (i8)(intptr_t)(ws+3378);
	i2 v11664 = *(i2*)(intptr_t)v11663;
	i1 v11665 = v11664;
	i8 v11666 = v11665;
	i1 v11667 = (i1)+1;
	i8 v11668 = ((i8)v11666)<<v11667;
	i8 v11669 = v11662+v11668;
	i2 v11670 = *(i2*)(intptr_t)v11669;
	i8 v11671 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11671 = v11670;

	i2 v11672 = (i2)+112;
	i8 v11673 = (i8)(intptr_t)(ws+3378);
	i2 v11674 = *(i2*)(intptr_t)v11673;
	if (v11672<v11674) goto c02_0752; else goto c02_0751;

c02_0751:;

	i8 v11675 = (i8)(intptr_t)((i1*)f3___main_s05ce);
	i8 v11676 = (i8)(intptr_t)(ws+3378);
	i2 v11677 = *(i2*)(intptr_t)v11676;
	i1 v11678 = v11677;
	i8 v11679 = v11678;
	i1 v11680 = (i1)+1;
	i8 v11681 = ((i8)v11679)<<v11680;
	i8 v11682 = v11675+v11681;
	i2 v11683 = *(i2*)(intptr_t)v11682;
	i8 v11684 = (i8)(intptr_t)(ws+3377);
	i1 v11685 = *(i1*)(intptr_t)v11684;
	i2 v11686 = v11685;
	i2 v11687 = v11683+v11686;
	i8 v11688 = (i8)(intptr_t)(ws+3380);
	*(i2*)(intptr_t)v11688 = v11687;

	i8 v11689 = (i8)(intptr_t)(ws+3380);
	i2 v11690 = *(i2*)(intptr_t)v11689;
	i2 v11691 = (i2)+0;
	if (v11690<v11691) goto c02_075b; else goto c02_075d;

c02_075d:;

	i8 v11692 = (i8)(intptr_t)(ws+3380);
	i2 v11693 = *(i2*)(intptr_t)v11692;
	i2 v11694 = (i2)+1316;
	if (v11693<v11694) goto c02_075c; else goto c02_075b;

c02_075c:;

	i8 v11695 = (i8)(intptr_t)((i1*)f3___main_s05cc);
	i8 v11696 = (i8)(intptr_t)(ws+3380);
	i2 v11697 = *(i2*)(intptr_t)v11696;
	i8 v11698 = v11697;
	i8 v11699 = v11695+v11698;
	i1 v11700 = *(i1*)(intptr_t)v11699;
	i8 v11701 = (i8)(intptr_t)(ws+3377);
	i1 v11702 = *(i1*)(intptr_t)v11701;
	if (v11700==v11702) goto c02_075a; else goto c02_075b;

c02_075a:;

	i8 v11703 = (i8)(intptr_t)((i1*)f3___main_s05cb);
	i8 v11704 = (i8)(intptr_t)(ws+3380);
	i2 v11705 = *(i2*)(intptr_t)v11704;
	i8 v11706 = v11705;
	i1 v11707 = (i1)+1;
	i8 v11708 = ((i8)v11706)<<v11707;
	i8 v11709 = v11703+v11708;
	i2 v11710 = *(i2*)(intptr_t)v11709;
	i8 v11711 = (i8)(intptr_t)(ws+3292);
	*(i2*)(intptr_t)v11711 = v11710;

c02_075b:;

c02_0753:;

c02_0752:;

c02_074e:;

	i8 v11712 = (i8)(intptr_t)(ws+1568);
	i8 v11713 = *(i8*)(intptr_t)v11712;
	i8 v11714 = v11713+(+16);
	i8 v11715 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11715 = v11714;

	i8 v11716 = (i8)(intptr_t)(ws+3292);
	i2 v11717 = *(i2*)(intptr_t)v11716;
	i8 v11718 = (i8)(intptr_t)(ws+1568);
	i8 v11719 = *(i8*)(intptr_t)v11718;
	*(i2*)(intptr_t)v11719 = v11717;

	i8 v11720 = (i8)(intptr_t)(ws+3377);
	i1 v11721 = *(i1*)(intptr_t)v11720;
	i8 v11722 = (i8)(intptr_t)(ws+1568);
	i8 v11723 = *(i8*)(intptr_t)v11722;
	i8 v11724 = v11723+(+2);
	*(i1*)(intptr_t)v11724 = v11721;

endsub:;
	*p8016 = *(i2*)(intptr_t)(ws+3292);
}
	void f303_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3288 length ws+0
void f439_yy_parse_failed(void) {

	i8 v11725 = (i8)(intptr_t)(f303_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v11725)();

endsub:;
}
	void f74_StartError(void);
const i1 c02_s0192[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f75_EndError(void);

// yy_syntax_error workspace at ws+3288 length ws+16
void f440_yy_syntax_error(i8 p11726 /* yyminor */, i1 p11727 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3288) = p11727; /* yymajor */
	*(i8*)(intptr_t)(ws+3296) = p11726; /* yyminor */

	i8 v11728 = (i8)(intptr_t)(f74_StartError);

	((void(*)(void))(intptr_t)v11728)();

	i8 v11729 = (i8)(intptr_t)c02_s0192;
	i8 v11730 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11730)(v11729);

	i8 v11731 = (i8)(intptr_t)((i1*)f3___main_s05d0);
	i8 v11732 = (i8)(intptr_t)(ws+3288);
	i1 v11733 = *(i1*)(intptr_t)v11732;
	i8 v11734 = v11733;
	i1 v11735 = (i1)+3;
	i8 v11736 = ((i8)v11734)<<v11735;
	i8 v11737 = v11731+v11736;
	i8 v11738 = *(i8*)(intptr_t)v11737;
	i8 v11739 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11739)(v11738);

	i8 v11740 = (i8)(intptr_t)(f75_EndError);

	((void(*)(void))(intptr_t)v11740)();

endsub:;
}

// yy_accept workspace at ws+3288 length ws+0
void f441_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+3264 length ws+0
void f442_ParserInit(void) {

	i1 v11741 = (i1)-1;
	i8 v11742 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11742 = v11741;

	i8 v11743 = (i8)(intptr_t)(ws+1576);
	i8 v11744 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11744 = v11743;

	i2 v11745 = (i2)+0;
	i8 v11746 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v11746 = v11745;

	i1 v11747 = (i1)+0;
	i8 v11748 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v11748 = v11747;

endsub:;
}
	void f302_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3264 length ws+0
void f443_ParserDeinit(void) {

c02_075e:;

	i8 v11749 = (i8)(intptr_t)(ws+1568);
	i8 v11750 = *(i8*)(intptr_t)v11749;
	i8 v11751 = (i8)(intptr_t)(ws+1576);
	if (v11750==v11751) goto c02_0763; else goto c02_0762;

c02_0762:;

	i8 v11752 = (i8)(intptr_t)(f302_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v11752)();

	goto c02_075e;

c02_0763:;

endsub:;
}
	void f307_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f304_yy_stack_overflow(void);
	void f306_CopyMinor(i8 /* dest */, i8 /* src */);
	void f441_yy_accept(void);
	void f440_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f300_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f439_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3264 length ws+22
void f444_ParserFeedToken(i8 p11753 /* yyminor */, i1 p11754 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3264) = p11754; /* yymajor */
	*(i8*)(intptr_t)(ws+3272) = p11753; /* yyminor */

	i8 v11755 = (i8)(intptr_t)(ws+1568);
	i8 v11756 = *(i8*)(intptr_t)v11755;
	i2 v11757 = *(i2*)(intptr_t)v11756;
	i8 v11758 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11758 = v11757;

c02_0764:;

	i2 v11759 = (i2)+220;
	i8 v11760 = (i8)(intptr_t)(ws+3280);
	i2 v11761 = *(i2*)(intptr_t)v11760;
	if (v11759<v11761) goto c02_076a; else goto c02_0769;

c02_0769:;

	i8 v11762 = (i8)(intptr_t)((i1*)f3___main_s05cd);
	i8 v11763 = (i8)(intptr_t)(ws+3280);
	i2 v11764 = *(i2*)(intptr_t)v11763;
	i1 v11765 = v11764;
	i8 v11766 = v11765;
	i1 v11767 = (i1)+1;
	i8 v11768 = ((i8)v11766)<<v11767;
	i8 v11769 = v11762+v11768;
	i2 v11770 = *(i2*)(intptr_t)v11769;
	i8 v11771 = (i8)(intptr_t)(ws+3264);
	i1 v11772 = *(i1*)(intptr_t)v11771;
	i2 v11773 = v11772;
	i2 v11774 = v11770+v11773;
	i8 v11775 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v11775 = v11774;

	i8 v11776 = (i8)(intptr_t)((i1*)f3___main_s05cc);
	i8 v11777 = (i8)(intptr_t)(ws+3282);
	i2 v11778 = *(i2*)(intptr_t)v11777;
	i8 v11779 = v11778;
	i8 v11780 = v11776+v11779;
	i1 v11781 = *(i1*)(intptr_t)v11780;
	i8 v11782 = (i8)(intptr_t)(ws+3264);
	i1 v11783 = *(i1*)(intptr_t)v11782;
	if (v11781==v11783) goto c02_076f; else goto c02_076e;

c02_076e:;

	i8 v11784 = (i8)(intptr_t)((i1*)f3___main_s05cf);
	i8 v11785 = (i8)(intptr_t)(ws+3280);
	i2 v11786 = *(i2*)(intptr_t)v11785;
	i1 v11787 = v11786;
	i8 v11788 = v11787;
	i1 v11789 = (i1)+1;
	i8 v11790 = ((i8)v11788)<<v11789;
	i8 v11791 = v11784+v11790;
	i2 v11792 = *(i2*)(intptr_t)v11791;
	i8 v11793 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11793 = v11792;

	goto c02_076b;

c02_076f:;

	i8 v11794 = (i8)(intptr_t)((i1*)f3___main_s05cb);
	i8 v11795 = (i8)(intptr_t)(ws+3282);
	i2 v11796 = *(i2*)(intptr_t)v11795;
	i8 v11797 = v11796;
	i1 v11798 = (i1)+1;
	i8 v11799 = ((i8)v11797)<<v11798;
	i8 v11800 = v11794+v11799;
	i2 v11801 = *(i2*)(intptr_t)v11800;
	i8 v11802 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11802 = v11801;

c02_076b:;

c02_076a:;

c02_0766:;

	i8 v11803 = (i8)(intptr_t)(ws+3280);
	i2 v11804 = *(i2*)(intptr_t)v11803;
	i2 v11805 = (i2)+454;
	if (v11804<v11805) goto c02_0774; else goto c02_0773;

c02_0773:;

	i8 v11806 = (i8)(intptr_t)(ws+3280);
	i2 v11807 = *(i2*)(intptr_t)v11806;
	i2 v11808 = v11807+(-454);
	i8 v11809 = (i8)(intptr_t)(ws+3264);
	i1 v11810 = *(i1*)(intptr_t)v11809;
	i8 v11811 = (i8)(intptr_t)(f307_yy_reduce);
	i2 v11812;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v11811)(&v11812, v11810, v11808);

	i8 v11813 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v11813 = v11812;

	i8 v11814 = (i8)(intptr_t)(ws+3284);
	i2 v11815 = *(i2*)(intptr_t)v11814;
	i8 v11816 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11816 = v11815;

	goto c02_0770;

c02_0774:;

	i2 v11817 = (i2)+450;
	i8 v11818 = (i8)(intptr_t)(ws+3280);
	i2 v11819 = *(i2*)(intptr_t)v11818;
	if (v11817<v11819) goto c02_0778; else goto c02_0777;

c02_0777:;

	i8 v11820 = (i8)(intptr_t)(ws+1568);
	i8 v11821 = *(i8*)(intptr_t)v11820;
	i8 v11822 = (i8)(intptr_t)(ws+3176);
	if (v11821==v11822) goto c02_077c; else goto c02_077d;

c02_077c:;

	i8 v11823 = (i8)(intptr_t)(f304_yy_stack_overflow);

	((void(*)(void))(intptr_t)v11823)();

	goto endsub;

c02_077d:;

c02_0779:;

	i8 v11824 = (i8)(intptr_t)(ws+1568);
	i8 v11825 = *(i8*)(intptr_t)v11824;
	i8 v11826 = v11825+(+16);
	i8 v11827 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11827 = v11826;

	i2 v11828 = (i2)+220;
	i8 v11829 = (i8)(intptr_t)(ws+3280);
	i2 v11830 = *(i2*)(intptr_t)v11829;
	if (v11828<v11830) goto c02_0781; else goto c02_0782;

c02_0781:;

	i8 v11831 = (i8)(intptr_t)(ws+3280);
	i2 v11832 = *(i2*)(intptr_t)v11831;
	i2 v11833 = v11832+(+143);
	i8 v11834 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v11834 = v11833;

c02_0782:;

c02_077e:;

	i8 v11835 = (i8)(intptr_t)(ws+3280);
	i2 v11836 = *(i2*)(intptr_t)v11835;
	i8 v11837 = (i8)(intptr_t)(ws+1568);
	i8 v11838 = *(i8*)(intptr_t)v11837;
	*(i2*)(intptr_t)v11838 = v11836;

	i8 v11839 = (i8)(intptr_t)(ws+3264);
	i1 v11840 = *(i1*)(intptr_t)v11839;
	i8 v11841 = (i8)(intptr_t)(ws+1568);
	i8 v11842 = *(i8*)(intptr_t)v11841;
	i8 v11843 = v11842+(+2);
	*(i1*)(intptr_t)v11843 = v11840;

	i8 v11844 = (i8)(intptr_t)(ws+3272);
	i8 v11845 = *(i8*)(intptr_t)v11844;
	i8 v11846 = (i8)(intptr_t)(ws+1568);
	i8 v11847 = *(i8*)(intptr_t)v11846;
	i8 v11848 = v11847+(+8);
	i8 v11849 = (i8)(intptr_t)(f306_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v11849)(v11848, v11845);

	i8 v11850 = (i8)(intptr_t)(ws+3192);
	i1 v11851 = *(i1*)(intptr_t)v11850;
	i1 v11852 = (i1)+0;
	if ((s1)v11851<(s1)v11852) goto c02_0787; else goto c02_0786;

c02_0786:;

	i8 v11853 = (i8)(intptr_t)(ws+3192);
	i1 v11854 = *(i1*)(intptr_t)v11853;
	i1 v11855 = v11854+(-1);
	i8 v11856 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11856 = v11855;

c02_0787:;

c02_0783:;

	goto c02_0765;

c02_0778:;

	i8 v11857 = (i8)(intptr_t)(ws+3280);
	i2 v11858 = *(i2*)(intptr_t)v11857;
	i2 v11859 = (i2)+452;
	if (v11858==v11859) goto c02_078a; else goto c02_078b;

c02_078a:;

	i8 v11860 = (i8)(intptr_t)(ws+1568);
	i8 v11861 = *(i8*)(intptr_t)v11860;
	i8 v11862 = v11861+(-16);
	i8 v11863 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v11863 = v11862;

	i8 v11864 = (i8)(intptr_t)(f441_yy_accept);

	((void(*)(void))(intptr_t)v11864)();

	goto c02_0765;

c02_078b:;

	i1 v11865 = (i1)+0;
	i8 v11866 = (i8)(intptr_t)(ws+3192);
	i1 v11867 = *(i1*)(intptr_t)v11866;
	if ((s1)v11865<(s1)v11867) goto c02_0790; else goto c02_078f;

c02_078f:;

	i8 v11868 = (i8)(intptr_t)(ws+3264);
	i1 v11869 = *(i1*)(intptr_t)v11868;
	i8 v11870 = (i8)(intptr_t)(ws+3272);
	i8 v11871 = *(i8*)(intptr_t)v11870;
	i8 v11872 = (i8)(intptr_t)(f440_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v11872)(v11871, v11869);

c02_0790:;

c02_078c:;

	i1 v11873 = (i1)+3;
	i8 v11874 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11874 = v11873;

	i8 v11875 = (i8)(intptr_t)(ws+3264);
	i1 v11876 = *(i1*)(intptr_t)v11875;
	i8 v11877 = (i8)(intptr_t)(ws+3272);
	i8 v11878 = *(i8*)(intptr_t)v11877;
	i8 v11879 = (i8)(intptr_t)(f300_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11879)(v11878, v11876);

	i8 v11880 = (i8)(intptr_t)(ws+3264);
	i1 v11881 = *(i1*)(intptr_t)v11880;
	i1 v11882 = (i1)+0;
	if (v11881==v11882) goto c02_0794; else goto c02_0795;

c02_0794:;

	i8 v11883 = (i8)(intptr_t)(f439_yy_parse_failed);

	((void(*)(void))(intptr_t)v11883)();

	i1 v11884 = (i1)-1;
	i8 v11885 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v11885 = v11884;

c02_0795:;

c02_0791:;

	goto c02_0765;

c02_0770:;

	i8 v11886 = (i8)(intptr_t)(ws+1568);
	i8 v11887 = *(i8*)(intptr_t)v11886;
	i8 v11888 = (i8)(intptr_t)(ws+1576);
	if (v11887==v11888) goto c02_0799; else goto c02_079a;

c02_0799:;

	goto c02_0765;

c02_079a:;

c02_0796:;

	goto c02_0764;

c02_0765:;

endsub:;
}
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0193[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3264 length ws+8
void f445_PrintFreeMemory(void) {

	i8 v11889 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v11890;

	((void(*)(i8* /* i */))(intptr_t)v11889)(&v11890);

	i8 v11891 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11891 = v11890;

	i8 v11892 = (i8)(intptr_t)(ws+3264);
	i8 v11893 = *(i8*)(intptr_t)v11892;
	i1 v11894 = (i1)+10;
	i8 v11895 = ((i8)v11893)>>v11894;
	i2 v11896 = v11895;
	i8 v11897 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v11897)(v11896);

	i8 v11898 = (i8)(intptr_t)c02_s0193;
	i8 v11899 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11899)(v11898);

endsub:;
}
const i1 c02_s0194[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x66,0x65,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3280 length ws+0
void f446_SyntaxError(void) {

	i8 v11900 = (i8)(intptr_t)c02_s0194;
	i8 v11901 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11901)(v11900);

	i8 v11902 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v11902)();

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
	void f77_LexerAddIncludePath(i8 /* path */);
	void f446_SyntaxError(void);
	void f446_SyntaxError(void);
	void f446_SyntaxError(void);

// ParseArguments workspace at ws+3264 length ws+16
void f447_ParseArguments(void) {

	i8 v11903 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v11903)();

c02_079b:;

	i8 v11904 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v11905;

	((void(*)(i8* /* arg */))(intptr_t)v11904)(&v11905);

	i8 v11906 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v11906 = v11905;

	i8 v11907 = (i8)(intptr_t)(ws+3264);
	i8 v11908 = *(i8*)(intptr_t)v11907;
	i8 v11909 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11909 = v11908;

	i8 v11910 = (i8)(intptr_t)(ws+3272);
	i8 v11911 = *(i8*)(intptr_t)v11910;
	i8 v11912 = (i8)+0;
	if (v11911==v11912) goto c02_07a0; else goto c02_07a1;

c02_07a0:;

	goto c02_079c;

c02_07a1:;

c02_079d:;

	i8 v11913 = (i8)(intptr_t)(ws+3272);
	i8 v11914 = *(i8*)(intptr_t)v11913;
	i1 v11915 = *(i1*)(intptr_t)v11914;
	i1 v11916 = (i1)+45;
	if (v11915==v11916) goto c02_07a5; else goto c02_07a6;

c02_07a5:;

	i8 v11917 = (i8)(intptr_t)(ws+3272);
	i8 v11918 = *(i8*)(intptr_t)v11917;
	i8 v11919 = v11918+(+1);
	i8 v11920 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11920 = v11919;

	i8 v11921 = (i8)(intptr_t)(ws+3272);
	i8 v11922 = *(i8*)(intptr_t)v11921;
	i1 v11923 = *(i1*)(intptr_t)v11922;
	i1 v11924 = (i1)+73;
	if (v11923==v11924) goto c02_07aa; else goto c02_07ab;

c02_07aa:;

	i8 v11925 = (i8)(intptr_t)(ws+3272);
	i8 v11926 = *(i8*)(intptr_t)v11925;
	i8 v11927 = v11926+(+1);
	i8 v11928 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v11928 = v11927;

	i8 v11929 = (i8)(intptr_t)(ws+3272);
	i8 v11930 = *(i8*)(intptr_t)v11929;
	i8 v11931 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v11931)(v11930);

	goto c02_07a7;

c02_07ab:;

	i8 v11932 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v11932)();

c02_07a7:;

	goto c02_07a2;

c02_07a6:;

	i8 v11933 = (i8)(intptr_t)(ws+24);
	i8 v11934 = *(i8*)(intptr_t)v11933;
	i8 v11935 = (i8)+0;
	if (v11934==v11935) goto c02_07af; else goto c02_07b0;

c02_07af:;

	i8 v11936 = (i8)(intptr_t)(ws+3272);
	i8 v11937 = *(i8*)(intptr_t)v11936;
	i8 v11938 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v11938 = v11937;

	goto c02_07ac;

c02_07b0:;

	i8 v11939 = (i8)(intptr_t)(ws+32);
	i8 v11940 = *(i8*)(intptr_t)v11939;
	i8 v11941 = (i8)+0;
	if (v11940==v11941) goto c02_07b3; else goto c02_07b4;

c02_07b3:;

	i8 v11942 = (i8)(intptr_t)(ws+3272);
	i8 v11943 = *(i8*)(intptr_t)v11942;
	i8 v11944 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v11944 = v11943;

	goto c02_07ac;

c02_07b4:;

	i8 v11945 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v11945)();

c02_07ac:;

c02_07a2:;

	goto c02_079b;

c02_079c:;

	i8 v11946 = (i8)(intptr_t)(ws+24);
	i8 v11947 = *(i8*)(intptr_t)v11946;
	i8 v11948 = (i8)+0;
	if (v11947==v11948) goto c02_07ba; else goto c02_07bc;

c02_07bc:;

	i8 v11949 = (i8)(intptr_t)(ws+32);
	i8 v11950 = *(i8*)(intptr_t)v11949;
	i8 v11951 = (i8)+0;
	if (v11950==v11951) goto c02_07ba; else goto c02_07bb;

c02_07ba:;

	i8 v11952 = (i8)(intptr_t)(f446_SyntaxError);

	((void(*)(void))(intptr_t)v11952)();

c02_07bb:;

c02_07b5:;

endsub:;
}
const i1 c02_s0195[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f445_PrintFreeMemory(void);
	void f447_ParseArguments(void);
const i1 c02_s0196[] = { 0 };
	void f77_LexerAddIncludePath(i8 /* path */);
	void f81_LexerIncludeFile(i8 /* path */);
	void f266_CreateMainSubroutine(void);
	void f240_ArchInitTypes(void);
	void f196_EmitterOpenfile(i8 /* filename */);
	void f198_EmitterDeclareSubroutine(i8 /* subr */);
	void f127_MidStartfile(i8* /* m */);
	void f257_Generate(i8 /* statement */);
	void f110_MidStartsub(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f442_ParserInit(void);
	void f82_LexerReadToken(i1* /* token */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f72_InternalStrDup(i8* /* news */, i8 /* s */);
	void f444_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f443_ParserDeinit(void);
	void f136_MidEndsub(i8* /* m */, i8 /* subr */);
	void f257_Generate(i8 /* statement */);
	void f267_ReportWorkspaces(i8 /* subr */);
	void f108_MidEndfile(i8* /* m */);
	void f257_Generate(i8 /* statement */);
	void f197_EmitterClosefile(void);
const i1 c02_s0197[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f445_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3264
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 



























































	i8 v1054 = (i8)+0;
	i8 v1055 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1055 = v1054;

	i8 v1056 = (i8)+0;
	i8 v1057 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1057 = v1056;

	i2 v1058 = (i2)+1;
	i8 v1059 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v1059 = v1058;

	i2 v1060 = (i2)+1;
	i8 v1061 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v1061 = v1060;

	i8 v1062 = (i8)+0;
	i8 v1063 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v1063 = v1062;

	i8 v1064 = (i8)(intptr_t)(ws+96);
	i8 v1065 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v1065 = v1064;




	i8 v1197 = (i8)+0;
	i8 v1198 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1198 = v1197;



	i8 v1232 = (i8)+0;
	i8 v1233 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1233 = v1232;




	i8 v1323 = (i8)+0;
	i8 v1324 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1324 = v1323;

	i8 v1325 = (i8)+0;
	i8 v1326 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1326 = v1325;

	i1 v1327 = (i1)+0;
	i8 v1328 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1328 = v1327;

	i1 v1329 = (i1)+0;
	i8 v1330 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1330 = v1329;








	i1 v1380 = (i1)+0;
	i8 v1381 = (i8)(intptr_t)(ws+925);
	*(i1*)(intptr_t)v1381 = v1380;








































































	i8 v3634 = (i8)+0;
	i8 v3635 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3635 = v3634;


































































































	i1 v6001 = (i1)+0;
	i8 v6002 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v6002 = v6001;




































































	i8 v11953 = (i8)(intptr_t)c02_s0195;
	i8 v11954 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11954)(v11953);

	i8 v11955 = (i8)(intptr_t)(f445_PrintFreeMemory);

	((void(*)(void))(intptr_t)v11955)();

	i8 v11956 = (i8)(intptr_t)(f447_ParseArguments);

	((void(*)(void))(intptr_t)v11956)();

	i8 v11957 = (i8)(intptr_t)c02_s0196;
	i8 v11958 = (i8)(intptr_t)(f77_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v11958)(v11957);

	i8 v11959 = (i8)(intptr_t)(ws+24);
	i8 v11960 = *(i8*)(intptr_t)v11959;
	i8 v11961 = (i8)(intptr_t)(f81_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v11961)(v11960);

	i8 v11962 = (i8)(intptr_t)(f266_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v11962)();

	i8 v11963 = (i8)(intptr_t)(f240_ArchInitTypes);

	((void(*)(void))(intptr_t)v11963)();

	i8 v11964 = (i8)(intptr_t)(ws+32);
	i8 v11965 = *(i8*)(intptr_t)v11964;
	i8 v11966 = (i8)(intptr_t)(f196_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v11966)(v11965);

	i8 v11967 = (i8)(intptr_t)(ws+40);
	i8 v11968 = *(i8*)(intptr_t)v11967;
	i8 v11969 = (i8)(intptr_t)(f198_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v11969)(v11968);

	i8 v11970 = (i8)(intptr_t)(f127_MidStartfile);
	i8 v11971;

	((void(*)(i8* /* m */))(intptr_t)v11970)(&v11971);

	i8 v11972 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v11972 = v11971;

	i8 v11973 = (i8)(intptr_t)(ws+3200);
	i8 v11974 = *(i8*)(intptr_t)v11973;
	i8 v11975 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11975)(v11974);

	i8 v11976 = (i8)(intptr_t)(ws+40);
	i8 v11977 = *(i8*)(intptr_t)v11976;
	i8 v11978 = (i8)(intptr_t)(f110_MidStartsub);
	i8 v11979;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v11978)(&v11979, v11977);

	i8 v11980 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v11980 = v11979;

	i8 v11981 = (i8)(intptr_t)(ws+3208);
	i8 v11982 = *(i8*)(intptr_t)v11981;
	i8 v11983 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11983)(v11982);

	i8 v11984 = (i8)(intptr_t)(f442_ParserInit);

	((void(*)(void))(intptr_t)v11984)();

c02_07bd:;

	i8 v11985 = (i8)(intptr_t)(f82_LexerReadToken);
	i1 v11986;

	((void(*)(i1* /* token */))(intptr_t)v11985)(&v11986);

	i8 v11987 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v11987 = v11986;

	i8 v11988 = (i8)(intptr_t)(ws+3216);
	i1 v11989 = *(i1*)(intptr_t)v11988;
	i8 v11990 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v11990 = v11989;

	i8 v11991 = (i8)(intptr_t)(ws+3217);
	i1 v11992 = *(i1*)(intptr_t)v11991;

	if (v11992 != +34) goto c02_07c0;

	i8 v11993 = (i8)(intptr_t)(ws+396);
	i4 v11994 = *(i4*)(intptr_t)v11993;
	i8 v11995 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v11995 = v11994;

	goto c02_07bf;

c02_07c0:;

	if (v11992 != +33) goto c02_07c1;

	i8 v11996 = (i8)(intptr_t)(ws+265);
	i8 v11997 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v11998;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v11997)(&v11998, v11996);

	i8 v11999 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v11999 = v11998;

	i8 v12000 = (i8)(intptr_t)(ws+3232);
	i8 v12001 = *(i8*)(intptr_t)v12000;
	i8 v12002 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v12002 = v12001;

	goto c02_07bf;

c02_07c1:;

	if (v11992 != +41) goto c02_07c2;

	i8 v12003 = (i8)(intptr_t)(ws+265);
	i8 v12004 = (i8)(intptr_t)(f72_InternalStrDup);
	i8 v12005;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v12004)(&v12005, v12003);

	i8 v12006 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v12006 = v12005;

	i8 v12007 = (i8)(intptr_t)(ws+3240);
	i8 v12008 = *(i8*)(intptr_t)v12007;
	i8 v12009 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v12009 = v12008;

	goto c02_07bf;

c02_07c2:;

	i4 v12010 = (i4)+0;
	i8 v12011 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v12011 = v12010;

c02_07bf:;


	i8 v12012 = (i8)(intptr_t)(ws+3217);
	i1 v12013 = *(i1*)(intptr_t)v12012;
	i8 v12014 = (i8)(intptr_t)(ws+3224);
	i8 v12015 = (i8)(intptr_t)(f444_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v12015)(v12014, v12013);

	i8 v12016 = (i8)(intptr_t)(ws+3217);
	i1 v12017 = *(i1*)(intptr_t)v12016;
	i1 v12018 = (i1)+0;
	if (v12017==v12018) goto c02_07c6; else goto c02_07c7;

c02_07c6:;

	goto c02_07be;

c02_07c7:;

c02_07c3:;

	goto c02_07bd;

c02_07be:;

	i8 v12019 = (i8)(intptr_t)(f443_ParserDeinit);

	((void(*)(void))(intptr_t)v12019)();

	i8 v12020 = (i8)(intptr_t)(ws+40);
	i8 v12021 = *(i8*)(intptr_t)v12020;
	i8 v12022 = (i8)(intptr_t)(f136_MidEndsub);
	i8 v12023;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12022)(&v12023, v12021);

	i8 v12024 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v12024 = v12023;

	i8 v12025 = (i8)(intptr_t)(ws+3248);
	i8 v12026 = *(i8*)(intptr_t)v12025;
	i8 v12027 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12027)(v12026);

	i8 v12028 = (i8)(intptr_t)(ws+40);
	i8 v12029 = *(i8*)(intptr_t)v12028;
	i8 v12030 = (i8)(intptr_t)(f267_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v12030)(v12029);

	i8 v12031 = (i8)(intptr_t)(f108_MidEndfile);
	i8 v12032;

	((void(*)(i8* /* m */))(intptr_t)v12031)(&v12032);

	i8 v12033 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v12033 = v12032;

	i8 v12034 = (i8)(intptr_t)(ws+3256);
	i8 v12035 = *(i8*)(intptr_t)v12034;
	i8 v12036 = (i8)(intptr_t)(f257_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12036)(v12035);

	i8 v12037 = (i8)(intptr_t)(f197_EmitterClosefile);

	((void(*)(void))(intptr_t)v12037)();

	i8 v12038 = (i8)(intptr_t)c02_s0197;
	i8 v12039 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12039)(v12038);

	i8 v12040 = (i8)(intptr_t)(f445_PrintFreeMemory);

	((void(*)(void))(intptr_t)v12040)();

endsub:;
}
void cmain(void) {
	f3___main();
}
