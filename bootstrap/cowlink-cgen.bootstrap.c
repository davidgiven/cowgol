#include "cowgol.h"
static i8 workspace[0x01a8];
#define ws ((i1*)workspace)

// ExitWithError workspace at ws+3312 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+848 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+848) = p10; /* buf */
	*(i1*)(intptr_t)(ws+856) = p9; /* byte */
	*(i8*)(intptr_t)(ws+864) = p8; /* len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+848) 
,  
*(i1*)(intptr_t)(ws+856) 
,  
*(i8*)(intptr_t)(ws+864) 
); 



endsub:;
}

// print_char workspace at ws+3352 length ws+1
void f9_print_char(i1 p12 /* c */) {
	*(i1*)(intptr_t)(ws+3352) = p12; /* c */


	
putchar( 
*(i1*)(intptr_t)(ws+3352) 
); 



endsub:;
}
	void f9_print_char(i1 /* c */);

// print workspace at ws+3336 length ws+9
void f12_print(i8 p21 /* ptr */) {
	*(i8*)(intptr_t)(ws+3336) = p21; /* ptr */

c02_0001:;

	i8 v22 = (i8)(intptr_t)(ws+3336);
	i8 v23 = *(i8*)(intptr_t)v22;
	i1 v24 = *(i1*)(intptr_t)v23;
	i8 v25 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v25 = v24;

	i8 v26 = (i8)(intptr_t)(ws+3344);
	i1 v27 = *(i1*)(intptr_t)v26;
	i1 v28 = (i1)+0;
	if (v27==v28) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v29 = (i8)(intptr_t)(ws+3344);
	i1 v30 = *(i1*)(intptr_t)v29;
	i8 v31 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v31)(v30);

	i8 v32 = (i8)(intptr_t)(ws+3336);
	i8 v33 = *(i8*)(intptr_t)v32;
	i8 v34 = v33+(+1);
	i8 v35 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v35 = v34;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_nl workspace at ws+1056 length ws+0
void f13_print_nl(void) {

	i1 v36 = (i1)+10;
	i8 v37 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v37)(v36);

endsub:;
}

// UIToA workspace at ws+3336 length ws+49
void f14_UIToA(i8* p38 /* ptr */, i8 p39 /* buffer */, i1 p40 /* base */, i4 p41 /* value */) {
	*(i4*)(intptr_t)(ws+3336) = p41; /* value */
	*(i1*)(intptr_t)(ws+3340) = p40; /* base */
	*(i8*)(intptr_t)(ws+3344) = p39; /* buffer */

	i8 v42 = (i8)(intptr_t)(ws+3344);
	i8 v43 = *(i8*)(intptr_t)v42;
	i8 v44 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v44 = v43;

c02_0008:;

	i8 v45 = (i8)(intptr_t)(ws+3336);
	i4 v46 = *(i4*)(intptr_t)v45;
	i8 v47 = (i8)(intptr_t)(ws+3340);
	i1 v48 = *(i1*)(intptr_t)v47;
	i4 v49 = v48;
	i4 v50 = v46%v49;
	i8 v51 = (i8)(intptr_t)(ws+3360);
	*(i4*)(intptr_t)v51 = v50;

	i8 v52 = (i8)(intptr_t)(ws+3336);
	i4 v53 = *(i4*)(intptr_t)v52;
	i8 v54 = (i8)(intptr_t)(ws+3340);
	i1 v55 = *(i1*)(intptr_t)v54;
	i4 v56 = v55;
	i4 v57 = v53/v56;
	i8 v58 = (i8)(intptr_t)(ws+3336);
	*(i4*)(intptr_t)v58 = v57;

	i8 v59 = (i8)(intptr_t)(ws+3360);
	i4 v60 = *(i4*)(intptr_t)v59;
	i4 v61 = (i4)+10;
	if (v60<v61) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v62 = (i8)(intptr_t)(ws+3360);
	i4 v63 = *(i4*)(intptr_t)v62;
	i4 v64 = v63+(+48);
	i8 v65 = (i8)(intptr_t)(ws+3360);
	*(i4*)(intptr_t)v65 = v64;

	goto c02_000a;

c02_000e:;

	i8 v66 = (i8)(intptr_t)(ws+3360);
	i4 v67 = *(i4*)(intptr_t)v66;
	i4 v68 = v67+(+87);
	i8 v69 = (i8)(intptr_t)(ws+3360);
	*(i4*)(intptr_t)v69 = v68;

c02_000a:;

	i8 v70 = (i8)(intptr_t)(ws+3360);
	i4 v71 = *(i4*)(intptr_t)v70;
	i1 v72 = v71;
	i8 v73 = (i8)(intptr_t)(ws+3352);
	i8 v74 = *(i8*)(intptr_t)v73;
	*(i1*)(intptr_t)v74 = v72;

	i8 v75 = (i8)(intptr_t)(ws+3352);
	i8 v76 = *(i8*)(intptr_t)v75;
	i8 v77 = v76+(+1);
	i8 v78 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v78 = v77;

	i8 v79 = (i8)(intptr_t)(ws+3336);
	i4 v80 = *(i4*)(intptr_t)v79;
	i4 v81 = (i4)+0;
	if (v80==v81) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v82 = (i8)(intptr_t)(ws+3344);
	i8 v83 = *(i8*)(intptr_t)v82;
	i8 v84 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v84 = v83;

	i8 v85 = (i8)(intptr_t)(ws+3352);
	i8 v86 = *(i8*)(intptr_t)v85;
	i8 v87 = v86+(-1);
	i8 v88 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v88 = v87;

c02_0014:;

	i8 v89 = (i8)(intptr_t)(ws+3368);
	i8 v90 = *(i8*)(intptr_t)v89;
	i8 v91 = (i8)(intptr_t)(ws+3376);
	i8 v92 = *(i8*)(intptr_t)v91;
	if (v90<v92) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v93 = (i8)(intptr_t)(ws+3368);
	i8 v94 = *(i8*)(intptr_t)v93;
	i1 v95 = *(i1*)(intptr_t)v94;
	i8 v96 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v96 = v95;

	i8 v97 = (i8)(intptr_t)(ws+3376);
	i8 v98 = *(i8*)(intptr_t)v97;
	i1 v99 = *(i1*)(intptr_t)v98;
	i8 v100 = (i8)(intptr_t)(ws+3368);
	i8 v101 = *(i8*)(intptr_t)v100;
	*(i1*)(intptr_t)v101 = v99;

	i8 v102 = (i8)(intptr_t)(ws+3384);
	i1 v103 = *(i1*)(intptr_t)v102;
	i8 v104 = (i8)(intptr_t)(ws+3376);
	i8 v105 = *(i8*)(intptr_t)v104;
	*(i1*)(intptr_t)v105 = v103;

	i8 v106 = (i8)(intptr_t)(ws+3368);
	i8 v107 = *(i8*)(intptr_t)v106;
	i8 v108 = v107+(+1);
	i8 v109 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v109 = v108;

	i8 v110 = (i8)(intptr_t)(ws+3376);
	i8 v111 = *(i8*)(intptr_t)v110;
	i8 v112 = v111+(-1);
	i8 v113 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v113 = v112;

	goto c02_0014;

c02_0019:;

	i1 v114 = (i1)+0;
	i8 v115 = (i8)(intptr_t)(ws+3352);
	i8 v116 = *(i8*)(intptr_t)v115;
	*(i1*)(intptr_t)v116 = v114;

endsub:;
	*p38 = *(i8*)(intptr_t)(ws+3352);
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f12_print(i8 /* ptr */);

// print_i32 workspace at ws+3304 length ws+32
void f16_print_i32(i4 p147 /* value */) {
	*(i4*)(intptr_t)(ws+3304) = p147; /* value */

	i8 v148 = (i8)(intptr_t)(ws+3304);
	i4 v149 = *(i4*)(intptr_t)v148;
	i1 v150 = (i1)+10;
	i8 v151 = (i8)(intptr_t)(ws+3308);
	i8 v152 = (i8)(intptr_t)(f14_UIToA);
	i8 v153;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v152)(&v153, v151, v150, v149);

	i8 v154 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v154 = v153;

	i8 v155 = (i8)(intptr_t)(ws+3320);
	i8 v156 = *(i8*)(intptr_t)v155;
	i8 v157 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v157 = v156;

	i8 v158 = (i8)(intptr_t)(ws+3308);
	i8 v159 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v159)(v158);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i16 workspace at ws+3296 length ws+2
void f17_print_i16(i2 p160 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p160; /* value */

	i8 v161 = (i8)(intptr_t)(ws+3296);
	i2 v162 = *(i2*)(intptr_t)v161;
	i4 v163 = v162;
	i8 v164 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v164)(v163);

endsub:;
}
	void f16_print_i32(i4 /* value */);

// print_i8 workspace at ws+3296 length ws+1
void f18_print_i8(i1 p165 /* value */) {
	*(i1*)(intptr_t)(ws+3296) = p165; /* value */

	i8 v166 = (i8)(intptr_t)(ws+3296);
	i1 v167 = *(i1*)(intptr_t)v166;
	i4 v168 = v167;
	i8 v169 = (i8)(intptr_t)(f16_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v169)(v168);

endsub:;
}
	void f9_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+1056 length ws+3
void f19_print_hex_i8(i1 p170 /* value */) {
	*(i1*)(intptr_t)(ws+1056) = p170; /* value */

	i1 v171 = (i1)+2;
	i8 v172 = (i8)(intptr_t)(ws+1057);
	*(i1*)(intptr_t)v172 = v171;

c02_001f:;

	i8 v173 = (i8)(intptr_t)(ws+1056);
	i1 v174 = *(i1*)(intptr_t)v173;
	i1 v175 = (i1)+4;
	i1 v176 = ((i1)v174)>>v175;
	i8 v177 = (i8)(intptr_t)(ws+1058);
	*(i1*)(intptr_t)v177 = v176;

	i8 v178 = (i8)(intptr_t)(ws+1058);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = (i1)+10;
	if (v179<v180) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v181 = (i8)(intptr_t)(ws+1058);
	i1 v182 = *(i1*)(intptr_t)v181;
	i1 v183 = v182+(+48);
	i8 v184 = (i8)(intptr_t)(ws+1058);
	*(i1*)(intptr_t)v184 = v183;

	goto c02_0021;

c02_0025:;

	i8 v185 = (i8)(intptr_t)(ws+1058);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = v186+(+87);
	i8 v188 = (i8)(intptr_t)(ws+1058);
	*(i1*)(intptr_t)v188 = v187;

c02_0021:;

	i8 v189 = (i8)(intptr_t)(ws+1058);
	i1 v190 = *(i1*)(intptr_t)v189;
	i8 v191 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v191)(v190);

	i8 v192 = (i8)(intptr_t)(ws+1056);
	i1 v193 = *(i1*)(intptr_t)v192;
	i1 v194 = (i1)+4;
	i1 v195 = ((i1)v193)<<v194;
	i8 v196 = (i8)(intptr_t)(ws+1056);
	*(i1*)(intptr_t)v196 = v195;

	i8 v197 = (i8)(intptr_t)(ws+1057);
	i1 v198 = *(i1*)(intptr_t)v197;
	i1 v199 = v198+(-1);
	i8 v200 = (i8)(intptr_t)(ws+1057);
	*(i1*)(intptr_t)v200 = v199;

	i8 v201 = (i8)(intptr_t)(ws+1057);
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

// print_hex_i16 workspace at ws+992 length ws+2
void f20_print_hex_i16(i2 p204 /* value */) {
	*(i2*)(intptr_t)(ws+992) = p204; /* value */

	i8 v205 = (i8)(intptr_t)(ws+992);
	i2 v206 = *(i2*)(intptr_t)v205;
	i1 v207 = (i1)+8;
	i2 v208 = ((i2)v206)>>v207;
	i1 v209 = v208;
	i8 v210 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v210)(v209);

	i8 v211 = (i8)(intptr_t)(ws+992);
	i2 v212 = *(i2*)(intptr_t)v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

endsub:;
}
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);
	void f19_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+1048 length ws+4
void f21_print_hex_i32(i4 p215 /* value */) {
	*(i4*)(intptr_t)(ws+1048) = p215; /* value */

	i8 v216 = (i8)(intptr_t)(ws+1048);
	i4 v217 = *(i4*)(intptr_t)v216;
	i1 v218 = (i1)+24;
	i4 v219 = ((i4)v217)>>v218;
	i1 v220 = v219;
	i8 v221 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v221)(v220);

	i8 v222 = (i8)(intptr_t)(ws+1048);
	i4 v223 = *(i4*)(intptr_t)v222;
	i1 v224 = (i1)+16;
	i4 v225 = ((i4)v223)>>v224;
	i1 v226 = v225;
	i8 v227 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v227)(v226);

	i8 v228 = (i8)(intptr_t)(ws+1048);
	i4 v229 = *(i4*)(intptr_t)v228;
	i1 v230 = (i1)+8;
	i4 v231 = ((i4)v229)>>v230;
	i1 v232 = v231;
	i8 v233 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v233)(v232);

	i8 v234 = (i8)(intptr_t)(ws+1048);
	i4 v235 = *(i4*)(intptr_t)v234;
	i1 v236 = v235;
	i8 v237 = (i8)(intptr_t)(f19_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v237)(v236);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+832 length ws+16
void f23_MemZero(i8 p342 /* size */, i8 p343 /* ptr */) {
	*(i8*)(intptr_t)(ws+832) = p343; /* ptr */
	*(i8*)(intptr_t)(ws+840) = p342; /* size */

	i8 v344 = (i8)(intptr_t)(ws+832);
	i8 v345 = *(i8*)(intptr_t)v344;
	i1 v346 = (i1)+0;
	i8 v347 = (i8)(intptr_t)(ws+840);
	i8 v348 = *(i8*)(intptr_t)v347;
	i8 v349 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v349)(v348, v346, v345);

endsub:;
}

// ArgvInit workspace at ws+832 length ws+0
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

// ArgvNext workspace at ws+832 length ws+8
void f25_ArgvNext(i8* p354 /* arg */) {

	i8 v355 = (i8)(intptr_t)(ws+16);
	i8 v356 = *(i8*)(intptr_t)v355;
	i8 v357 = (i8)+0;
	if (v356==v357) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v358 = (i8)+0;
	i8 v359 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v359 = v358;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v360 = (i8)(intptr_t)(ws+16);
	i8 v361 = *(i8*)(intptr_t)v360;
	i8 v362 = *(i8*)(intptr_t)v361;
	i8 v363 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v363 = v362;

	i8 v364 = (i8)(intptr_t)(ws+832);
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
	*p354 = *(i8*)(intptr_t)(ws+832);
}

// StrCmp workspace at ws+1088 length ws+17
void f26_StrCmp(i1* p373 /* res */, i8 p374 /* s2 */, i8 p375 /* s1 */) {
	*(i8*)(intptr_t)(ws+1088) = p375; /* s1 */
	*(i8*)(intptr_t)(ws+1096) = p374; /* s2 */

c02_0059:;

	i8 v376 = (i8)(intptr_t)(ws+1088);
	i8 v377 = *(i8*)(intptr_t)v376;
	i1 v378 = *(i1*)(intptr_t)v377;
	i8 v379 = (i8)(intptr_t)(ws+1096);
	i8 v380 = *(i8*)(intptr_t)v379;
	i1 v381 = *(i1*)(intptr_t)v380;
	i1 v382 = v378-v381;
	i8 v383 = (i8)(intptr_t)(ws+1104);
	*(i1*)(intptr_t)v383 = v382;

	i8 v384 = (i8)(intptr_t)(ws+1104);
	i1 v385 = *(i1*)(intptr_t)v384;
	i1 v386 = (i1)+0;
	if (v385==v386) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v387 = (i8)(intptr_t)(ws+1088);
	i8 v388 = *(i8*)(intptr_t)v387;
	i1 v389 = *(i1*)(intptr_t)v388;
	i1 v390 = (i1)+0;
	if (v389==v390) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v391 = (i8)(intptr_t)(ws+1088);
	i8 v392 = *(i8*)(intptr_t)v391;
	i8 v393 = v392+(+1);
	i8 v394 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v394 = v393;

	i8 v395 = (i8)(intptr_t)(ws+1096);
	i8 v396 = *(i8*)(intptr_t)v395;
	i8 v397 = v396+(+1);
	i8 v398 = (i8)(intptr_t)(ws+1096);
	*(i8*)(intptr_t)v398 = v397;

	goto c02_0059;

c02_005a:;

endsub:;
	*p373 = *(i1*)(intptr_t)(ws+1104);
}

// ToLower workspace at ws+856 length ws+2
void f27_ToLower(i1* p399 /* cc */, i1 p400 /* c */) {
	*(i1*)(intptr_t)(ws+856) = p400; /* c */

	i8 v401 = (i8)(intptr_t)(ws+856);
	i1 v402 = *(i1*)(intptr_t)v401;
	i1 v403 = (i1)+65;
	if (v402<v403) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v404 = (i1)+90;
	i8 v405 = (i8)(intptr_t)(ws+856);
	i1 v406 = *(i1*)(intptr_t)v405;
	if (v404<v406) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v407 = (i8)(intptr_t)(ws+856);
	i1 v408 = *(i1*)(intptr_t)v407;
	i1 v409 = v408|(+32);
	i8 v410 = (i8)(intptr_t)(ws+857);
	*(i1*)(intptr_t)v410 = v409;

	goto c02_0063;

c02_0069:;

	i8 v411 = (i8)(intptr_t)(ws+856);
	i1 v412 = *(i1*)(intptr_t)v411;
	i8 v413 = (i8)(intptr_t)(ws+857);
	*(i1*)(intptr_t)v413 = v412;

c02_0063:;

endsub:;
	*p399 = *(i1*)(intptr_t)(ws+857);
}
	void f27_ToLower(i1* /* cc */, i1 /* c */);
	void f27_ToLower(i1* /* cc */, i1 /* c */);

// StrICmp workspace at ws+832 length ws+19
void f28_StrICmp(i1* p414 /* res */, i8 p415 /* s2 */, i8 p416 /* s1 */) {
	*(i8*)(intptr_t)(ws+832) = p416; /* s1 */
	*(i8*)(intptr_t)(ws+840) = p415; /* s2 */

c02_006b:;

	i8 v417 = (i8)(intptr_t)(ws+832);
	i8 v418 = *(i8*)(intptr_t)v417;
	i1 v419 = *(i1*)(intptr_t)v418;
	i8 v420 = (i8)(intptr_t)(f27_ToLower);
	i1 v421;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v420)(&v421, v419);

	i8 v422 = (i8)(intptr_t)(ws+849);
	*(i1*)(intptr_t)v422 = v421;

	i8 v423 = (i8)(intptr_t)(ws+840);
	i8 v424 = *(i8*)(intptr_t)v423;
	i1 v425 = *(i1*)(intptr_t)v424;
	i8 v426 = (i8)(intptr_t)(f27_ToLower);
	i1 v427;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v426)(&v427, v425);

	i8 v428 = (i8)(intptr_t)(ws+850);
	*(i1*)(intptr_t)v428 = v427;

	i8 v429 = (i8)(intptr_t)(ws+849);
	i1 v430 = *(i1*)(intptr_t)v429;
	i8 v431 = (i8)(intptr_t)(ws+850);
	i1 v432 = *(i1*)(intptr_t)v431;
	i1 v433 = v430-v432;
	i8 v434 = (i8)(intptr_t)(ws+848);
	*(i1*)(intptr_t)v434 = v433;

	i8 v435 = (i8)(intptr_t)(ws+848);
	i1 v436 = *(i1*)(intptr_t)v435;
	i1 v437 = (i1)+0;
	if (v436==v437) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v438 = (i8)(intptr_t)(ws+832);
	i8 v439 = *(i8*)(intptr_t)v438;
	i1 v440 = *(i1*)(intptr_t)v439;
	i1 v441 = (i1)+0;
	if (v440==v441) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

c02_0073:;

c02_006d:;

	i8 v442 = (i8)(intptr_t)(ws+832);
	i8 v443 = *(i8*)(intptr_t)v442;
	i8 v444 = v443+(+1);
	i8 v445 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v445 = v444;

	i8 v446 = (i8)(intptr_t)(ws+840);
	i8 v447 = *(i8*)(intptr_t)v446;
	i8 v448 = v447+(+1);
	i8 v449 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v449 = v448;

	goto c02_006b;

c02_006c:;

endsub:;
	*p414 = *(i1*)(intptr_t)(ws+848);
}

// RawAlloc workspace at ws+1160 length ws+16
void f32_RawAlloc(i8* p516 /* block */, i8 p517 /* length */) {
	*(i8*)(intptr_t)(ws+1160) = p517; /* length */


	
*(i8*)(intptr_t)(ws+1168) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+1160) 
); 



endsub:;
	*p516 = *(i8*)(intptr_t)(ws+1168);
}
	void f32_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0000[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// Alloc workspace at ws+1136 length ws+24
void f33_Alloc(i8* p518 /* block */, i8 p519 /* length */) {
	*(i8*)(intptr_t)(ws+1136) = p519; /* length */

	i8 v520 = (i8)(intptr_t)(ws+1136);
	i8 v521 = *(i8*)(intptr_t)v520;
	i8 v522 = (i8)(intptr_t)(f32_RawAlloc);
	i8 v523;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v522)(&v523, v521);

	i8 v524 = (i8)(intptr_t)(ws+1152);
	*(i8*)(intptr_t)v524 = v523;

	i8 v525 = (i8)(intptr_t)(ws+1152);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = (i8)(intptr_t)(ws+1144);
	*(i8*)(intptr_t)v527 = v526;

	i8 v528 = (i8)(intptr_t)(ws+1144);
	i8 v529 = *(i8*)(intptr_t)v528;
	i8 v530 = (i8)+0;
	if (v529==v530) goto c02_008c; else goto c02_008d;

c02_008c:;

	i8 v531 = (i8)(intptr_t)c02_s0000;
	i8 v532 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v532)(v531);

	i8 v533 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v533)();

c02_008d:;

c02_0089:;

endsub:;
	*p518 = *(i8*)(intptr_t)(ws+1144);
}

// Free workspace at ws+912 length ws+8
void f34_Free(i8 p534 /* block */) {
	*(i8*)(intptr_t)(ws+912) = p534; /* block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+912) 
); 



endsub:;
}

// StrDup workspace at ws+1088 length ws+16
void f35_StrDup(i8* p535 /* sout */, i8 p536 /* s */) {
	*(i8*)(intptr_t)(ws+1088) = p536; /* s */


	
*(i8*)(intptr_t)(ws+1096) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1088) 
); 



endsub:;
	*p535 = *(i8*)(intptr_t)(ws+1096);
}

// GetFreeMemory workspace at ws+832 length ws+8
void f38_GetFreeMemory(i8* p537 /* i */) {

	i8 v538 = (i8)+0;
	i8 v539 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v539 = v538;

endsub:;
	*p537 = *(i8*)(intptr_t)(ws+832);
}

// _fcb_init workspace at ws+1104 length ws+8
void f41__fcb_init(i8 p540 /* fcb */) {
	*(i8*)(intptr_t)(ws+1104) = p540; /* fcb */

	i4 v541 = (i4)+0;
	i8 v542 = (i8)(intptr_t)(ws+1104);
	i8 v543 = *(i8*)(intptr_t)v542;
	i8 v544 = v543+(+4);
	*(i4*)(intptr_t)v544 = v541;

	i2 v545 = (i2)+0;
	i8 v546 = (i8)(intptr_t)(ws+1104);
	i8 v547 = *(i8*)(intptr_t)v546;
	i8 v548 = v547+(+8);
	*(i2*)(intptr_t)v548 = v545;

	i2 v549 = (i2)+0;
	i8 v550 = (i8)(intptr_t)(ws+1104);
	i8 v551 = *(i8*)(intptr_t)v550;
	i8 v552 = v551+(+10);
	*(i2*)(intptr_t)v552 = v549;

	i1 v553 = (i1)+0;
	i8 v554 = (i8)(intptr_t)(ws+1104);
	i8 v555 = *(i8*)(intptr_t)v554;
	i8 v556 = v555+(+524);
	*(i1*)(intptr_t)v556 = v553;

endsub:;
}

// _fcb_advance workspace at ws+1152 length ws+8
void f42__fcb_advance(i8 p557 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p557; /* fcb */

	i8 v558 = (i8)(intptr_t)(ws+1152);
	i8 v559 = *(i8*)(intptr_t)v558;
	i8 v560 = v559+(+10);
	i2 v561 = *(i2*)(intptr_t)v560;
	i2 v562 = v561+(+1);
	i8 v563 = (i8)(intptr_t)(ws+1152);
	i8 v564 = *(i8*)(intptr_t)v563;
	i8 v565 = v564+(+10);
	*(i2*)(intptr_t)v565 = v562;

endsub:;
}
	void f39_FCBRawRead(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_fillbuffer workspace at ws+1128 length ws+18
void f43__fcb_fillbuffer(i1* p566 /* b */, i8 p567 /* fcb */) {
	*(i8*)(intptr_t)(ws+1128) = p567; /* fcb */

	i8 v568 = (i8)(intptr_t)(ws+1128);
	i8 v569 = *(i8*)(intptr_t)v568;
	i8 v570 = v569+(+4);
	i4 v571 = *(i4*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(ws+1128);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+10);
	i2 v575 = *(i2*)(intptr_t)v574;
	i4 v576 = v575;
	i4 v577 = v571+v576;
	i8 v578 = (i8)(intptr_t)(ws+1140);
	*(i4*)(intptr_t)v578 = v577;

	i8 v579 = (i8)(intptr_t)(ws+1128);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = (i8)(intptr_t)(ws+1140);
	i4 v582 = *(i4*)(intptr_t)v581;
	i2 v583 = (i2)+512;
	i8 v584 = (i8)(intptr_t)(f39_FCBRawRead);
	i2 v585;

	((void(*)(i2* /* amount */, i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v584)(&v585, v583, v582, v580);

	i8 v586 = (i8)(intptr_t)(ws+1144);
	*(i2*)(intptr_t)v586 = v585;

	i8 v587 = (i8)(intptr_t)(ws+1144);
	i2 v588 = *(i2*)(intptr_t)v587;
	i8 v589 = (i8)(intptr_t)(ws+1128);
	i8 v590 = *(i8*)(intptr_t)v589;
	i8 v591 = v590+(+8);
	*(i2*)(intptr_t)v591 = v588;

	i1 v592 = (i1)+0;
	i8 v593 = (i8)(intptr_t)(ws+1136);
	*(i1*)(intptr_t)v593 = v592;

	i8 v594 = (i8)(intptr_t)(ws+1128);
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
	i8 v601 = (i8)(intptr_t)(ws+1128);
	i8 v602 = *(i8*)(intptr_t)v601;
	i8 v603 = v602+(+524);
	*(i1*)(intptr_t)v603 = v600;

	i8 v604 = (i8)(intptr_t)(ws+1140);
	i4 v605 = *(i4*)(intptr_t)v604;
	i8 v606 = (i8)(intptr_t)(ws+1128);
	i8 v607 = *(i8*)(intptr_t)v606;
	i8 v608 = v607+(+4);
	*(i4*)(intptr_t)v608 = v605;

	i2 v609 = (i2)+0;
	i8 v610 = (i8)(intptr_t)(ws+1128);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = v611+(+10);
	*(i2*)(intptr_t)v612 = v609;

	i8 v613 = (i8)(intptr_t)(ws+1128);
	i8 v614 = *(i8*)(intptr_t)v613;
	i8 v615 = v614+(+8);
	i2 v616 = *(i2*)(intptr_t)v615;
	i2 v617 = (i2)+0;
	if (v616==v617) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v618 = (i8)(intptr_t)(ws+1128);
	i8 v619 = *(i8*)(intptr_t)v618;
	i8 v620 = v619+(+12);
	i1 v621 = *(i1*)(intptr_t)v620;
	i8 v622 = (i8)(intptr_t)(ws+1136);
	*(i1*)(intptr_t)v622 = v621;

	i8 v623 = (i8)(intptr_t)(ws+1128);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v625)(v624);

c02_0097:;

c02_0093:;

endsub:;
	*p566 = *(i1*)(intptr_t)(ws+1136);
}
	void f40_FCBRawWrite(i2 /* len */, i4 /* pos */, i8 /* fcb */);

// FCBFlush workspace at ws+1128 length ws+12
void f44_FCBFlush(i8 p626 /* fcb */) {
	*(i8*)(intptr_t)(ws+1128) = p626; /* fcb */

	i8 v627 = (i8)(intptr_t)(ws+1128);
	i8 v628 = *(i8*)(intptr_t)v627;
	i8 v629 = v628+(+4);
	i4 v630 = *(i4*)(intptr_t)v629;
	i8 v631 = (i8)(intptr_t)(ws+1136);
	*(i4*)(intptr_t)v631 = v630;

	i8 v632 = (i8)(intptr_t)(ws+1128);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = v633+(+524);
	i1 v635 = *(i1*)(intptr_t)v634;
	i1 v636 = v635&(+4);
	i1 v637 = (i1)+0;
	if (v636==v637) goto c02_009c; else goto c02_009b;

c02_009b:;

	i8 v638 = (i8)(intptr_t)(ws+1128);
	i8 v639 = *(i8*)(intptr_t)v638;
	i8 v640 = (i8)(intptr_t)(ws+1136);
	i4 v641 = *(i4*)(intptr_t)v640;
	i8 v642 = (i8)(intptr_t)(ws+1128);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = v643+(+10);
	i2 v645 = *(i2*)(intptr_t)v644;
	i8 v646 = (i8)(intptr_t)(f40_FCBRawWrite);

	((void(*)(i2 /* len */, i4 /* pos */, i8 /* fcb */))(intptr_t)v646)(v645, v641, v639);

	i8 v647 = (i8)(intptr_t)(ws+1128);
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

	i8 v653 = (i8)(intptr_t)(ws+1136);
	i4 v654 = *(i4*)(intptr_t)v653;
	i8 v655 = (i8)(intptr_t)(ws+1128);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = v656+(+10);
	i2 v658 = *(i2*)(intptr_t)v657;
	i4 v659 = v658;
	i4 v660 = v654+v659;
	i8 v661 = (i8)(intptr_t)(ws+1128);
	i8 v662 = *(i8*)(intptr_t)v661;
	i8 v663 = v662+(+4);
	*(i4*)(intptr_t)v663 = v660;

	i1 v664 = (i1)+0;
	i8 v665 = (i8)(intptr_t)(ws+1128);
	i8 v666 = *(i8*)(intptr_t)v665;
	i8 v667 = v666+(+524);
	*(i1*)(intptr_t)v667 = v664;

	i2 v668 = (i2)+0;
	i8 v669 = (i8)(intptr_t)(ws+1128);
	i8 v670 = *(i8*)(intptr_t)v669;
	i8 v671 = v670+(+10);
	*(i2*)(intptr_t)v671 = v668;

	i2 v672 = (i2)+0;
	i8 v673 = (i8)(intptr_t)(ws+1128);
	i8 v674 = *(i8*)(intptr_t)v673;
	i8 v675 = v674+(+8);
	*(i2*)(intptr_t)v675 = v672;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// _fcb_flushbuffer workspace at ws+1056 length ws+9
void f45__fcb_flushbuffer(i1 p676 /* b */, i8 p677 /* fcb */) {
	*(i8*)(intptr_t)(ws+1056) = p677; /* fcb */
	*(i1*)(intptr_t)(ws+1064) = p676; /* b */

	i8 v678 = (i8)(intptr_t)(ws+1056);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v680)(v679);

	i8 v681 = (i8)(intptr_t)(ws+1056);
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
	i8 v688 = (i8)(intptr_t)(ws+1056);
	i8 v689 = *(i8*)(intptr_t)v688;
	i8 v690 = v689+(+524);
	*(i1*)(intptr_t)v690 = v687;

	i8 v691 = (i8)(intptr_t)(ws+1064);
	i1 v692 = *(i1*)(intptr_t)v691;
	i8 v693 = (i8)(intptr_t)(ws+1056);
	i8 v694 = *(i8*)(intptr_t)v693;
	i8 v695 = v694+(+12);
	*(i1*)(intptr_t)v695 = v692;

	i8 v696 = (i8)(intptr_t)(ws+1056);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v698)(v697);

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);
	void f43__fcb_fillbuffer(i1* /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBGetChar workspace at ws+1112 length ws+13
void f46_FCBGetChar(i1* p699 /* b */, i8 p700 /* fcb */) {
	*(i8*)(intptr_t)(ws+1112) = p700; /* fcb */

	i8 v701 = (i8)(intptr_t)(ws+1112);
	i8 v702 = *(i8*)(intptr_t)v701;
	i8 v703 = v702+(+524);
	i1 v704 = *(i1*)(intptr_t)v703;
	i1 v705 = v704&(+4);
	i1 v706 = (i1)+0;
	if (v705==v706) goto c02_00ab; else goto c02_00aa;

c02_00aa:;

	i8 v707 = (i8)(intptr_t)(ws+1112);
	i8 v708 = *(i8*)(intptr_t)v707;
	i8 v709 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v709)(v708);

c02_00ab:;

c02_00a7:;

	i8 v710 = (i8)(intptr_t)(ws+1112);
	i8 v711 = *(i8*)(intptr_t)v710;
	i8 v712 = v711+(+10);
	i2 v713 = *(i2*)(intptr_t)v712;
	i8 v714 = (i8)(intptr_t)(ws+1122);
	*(i2*)(intptr_t)v714 = v713;

	i8 v715 = (i8)(intptr_t)(ws+1122);
	i2 v716 = *(i2*)(intptr_t)v715;
	i8 v717 = (i8)(intptr_t)(ws+1112);
	i8 v718 = *(i8*)(intptr_t)v717;
	i8 v719 = v718+(+8);
	i2 v720 = *(i2*)(intptr_t)v719;
	if (v716==v720) goto c02_00af; else goto c02_00b0;

c02_00af:;

	i8 v721 = (i8)(intptr_t)(ws+1112);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = (i8)(intptr_t)(f43__fcb_fillbuffer);
	i1 v724;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v723)(&v724, v722);

	i8 v725 = (i8)(intptr_t)(ws+1124);
	*(i1*)(intptr_t)v725 = v724;

	i8 v726 = (i8)(intptr_t)(ws+1124);
	i1 v727 = *(i1*)(intptr_t)v726;
	i8 v728 = (i8)(intptr_t)(ws+1120);
	*(i1*)(intptr_t)v728 = v727;

	goto c02_00ac;

c02_00b0:;

	i8 v729 = (i8)(intptr_t)(ws+1112);
	i8 v730 = *(i8*)(intptr_t)v729;
	i8 v731 = v730+(+12);
	i8 v732 = (i8)(intptr_t)(ws+1122);
	i2 v733 = *(i2*)(intptr_t)v732;
	i8 v734 = v733;
	i8 v735 = v731+v734;
	i1 v736 = *(i1*)(intptr_t)v735;
	i8 v737 = (i8)(intptr_t)(ws+1120);
	*(i1*)(intptr_t)v737 = v736;

	i8 v738 = (i8)(intptr_t)(ws+1112);
	i8 v739 = *(i8*)(intptr_t)v738;
	i8 v740 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v740)(v739);

c02_00ac:;

endsub:;
	*p699 = *(i1*)(intptr_t)(ws+1120);
}
	void f44_FCBFlush(i8 /* fcb */);
	void f45__fcb_flushbuffer(i1 /* b */, i8 /* fcb */);
	void f42__fcb_advance(i8 /* fcb */);

// FCBPutChar workspace at ws+1040 length ws+12
void f47_FCBPutChar(i1 p741 /* b */, i8 p742 /* fcb */) {
	*(i8*)(intptr_t)(ws+1040) = p742; /* fcb */
	*(i1*)(intptr_t)(ws+1048) = p741; /* b */

	i8 v743 = (i8)(intptr_t)(ws+1040);
	i8 v744 = *(i8*)(intptr_t)v743;
	i8 v745 = v744+(+524);
	i1 v746 = *(i1*)(intptr_t)v745;
	i1 v747 = v746&(+2);
	i1 v748 = (i1)+0;
	if (v747==v748) goto c02_00b5; else goto c02_00b4;

c02_00b4:;

	i8 v749 = (i8)(intptr_t)(ws+1040);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

c02_00b5:;

c02_00b1:;

	i8 v752 = (i8)(intptr_t)(ws+1040);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+10);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = (i8)(intptr_t)(ws+1050);
	*(i2*)(intptr_t)v756 = v755;

	i8 v757 = (i8)(intptr_t)(ws+1050);
	i2 v758 = *(i2*)(intptr_t)v757;
	i2 v759 = (i2)+512;
	if (v758==v759) goto c02_00b9; else goto c02_00ba;

c02_00b9:;

	i8 v760 = (i8)(intptr_t)(ws+1040);
	i8 v761 = *(i8*)(intptr_t)v760;
	i8 v762 = (i8)(intptr_t)(ws+1048);
	i1 v763 = *(i1*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f45__fcb_flushbuffer);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v764)(v763, v761);

	goto c02_00b6;

c02_00ba:;

	i8 v765 = (i8)(intptr_t)(ws+1048);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+1040);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+1050);
	i2 v771 = *(i2*)(intptr_t)v770;
	i8 v772 = v771;
	i8 v773 = v769+v772;
	*(i1*)(intptr_t)v773 = v766;

	i8 v774 = (i8)(intptr_t)(ws+1040);
	i8 v775 = *(i8*)(intptr_t)v774;
	i8 v776 = (i8)(intptr_t)(f42__fcb_advance);

	((void(*)(i8 /* fcb */))(intptr_t)v776)(v775);

c02_00b6:;

	i8 v777 = (i8)(intptr_t)(ws+1040);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+524);
	i1 v780 = *(i1*)(intptr_t)v779;
	i1 v781 = v780|(+4);
	i8 v782 = (i8)(intptr_t)(ws+1040);
	i8 v783 = *(i8*)(intptr_t)v782;
	i8 v784 = v783+(+524);
	*(i1*)(intptr_t)v784 = v781;

endsub:;
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBSeek workspace at ws+1048 length ws+16
void f50_FCBSeek(i4 p810 /* pos */, i8 p811 /* fcb */) {
	*(i8*)(intptr_t)(ws+1048) = p811; /* fcb */
	*(i4*)(intptr_t)(ws+1056) = p810; /* pos */

	i8 v812 = (i8)(intptr_t)(ws+1056);
	i4 v813 = *(i4*)(intptr_t)v812;
	i8 v814 = (i8)(intptr_t)(ws+1048);
	i8 v815 = *(i8*)(intptr_t)v814;
	i8 v816 = v815+(+4);
	i4 v817 = *(i4*)(intptr_t)v816;
	i4 v818 = v813-v817;
	i8 v819 = (i8)(intptr_t)(ws+1060);
	*(i4*)(intptr_t)v819 = v818;

	i8 v820 = (i8)(intptr_t)(ws+1048);
	i8 v821 = *(i8*)(intptr_t)v820;
	i8 v822 = v821+(+524);
	i1 v823 = *(i1*)(intptr_t)v822;
	i1 v824 = v823&(+2);
	i1 v825 = (i1)+0;
	if (v824==v825) goto c02_00c4; else goto c02_00c3;

c02_00c3:;

	i8 v826 = (i8)(intptr_t)(ws+1060);
	i4 v827 = *(i4*)(intptr_t)v826;
	i8 v828 = (i8)(intptr_t)(ws+1048);
	i8 v829 = *(i8*)(intptr_t)v828;
	i8 v830 = v829+(+8);
	i2 v831 = *(i2*)(intptr_t)v830;
	i4 v832 = v831;
	if (v827<v832) goto c02_00c8; else goto c02_00c9;

c02_00c8:;

	i8 v833 = (i8)(intptr_t)(ws+1060);
	i4 v834 = *(i4*)(intptr_t)v833;
	i2 v835 = v834;
	i8 v836 = (i8)(intptr_t)(ws+1048);
	i8 v837 = *(i8*)(intptr_t)v836;
	i8 v838 = v837+(+10);
	*(i2*)(intptr_t)v838 = v835;

	goto endsub;

c02_00c9:;

c02_00c5:;

	goto c02_00c0;

c02_00c4:;

	i8 v839 = (i8)(intptr_t)(ws+1048);
	i8 v840 = *(i8*)(intptr_t)v839;
	i8 v841 = v840+(+524);
	i1 v842 = *(i1*)(intptr_t)v841;
	i1 v843 = v842&(+4);
	i1 v844 = (i1)+0;
	if (v843==v844) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v845 = (i8)(intptr_t)(ws+1048);
	i8 v846 = *(i8*)(intptr_t)v845;
	i8 v847 = v846+(+10);
	i2 v848 = *(i2*)(intptr_t)v847;
	i4 v849 = v848;
	i8 v850 = (i8)(intptr_t)(ws+1060);
	i4 v851 = *(i4*)(intptr_t)v850;
	if (v849<v851) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v852 = (i8)(intptr_t)(ws+1060);
	i4 v853 = *(i4*)(intptr_t)v852;
	i2 v854 = v853;
	i8 v855 = (i8)(intptr_t)(ws+1048);
	i8 v856 = *(i8*)(intptr_t)v855;
	i8 v857 = v856+(+10);
	*(i2*)(intptr_t)v857 = v854;

	goto endsub;

c02_00d2:;

c02_00ce:;

c02_00cd:;

c02_00c0:;

	i8 v858 = (i8)(intptr_t)(ws+1048);
	i8 v859 = *(i8*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v860)(v859);

	i8 v861 = (i8)(intptr_t)(ws+1056);
	i4 v862 = *(i4*)(intptr_t)v861;
	i8 v863 = (i8)(intptr_t)(ws+1048);
	i8 v864 = *(i8*)(intptr_t)v863;
	i8 v865 = v864+(+4);
	*(i4*)(intptr_t)v865 = v862;

endsub:;
}

// FCBRawRead workspace at ws+1152 length ws+36
void f39_FCBRawRead(i2* p866 /* amount */, i2 p867 /* len */, i4 p868 /* pos */, i8 p869 /* fcb */) {
	*(i8*)(intptr_t)(ws+1152) = p869; /* fcb */
	*(i4*)(intptr_t)(ws+1160) = p868; /* pos */
	*(i2*)(intptr_t)(ws+1164) = p867; /* len */

	i8 v870 = (i8)(intptr_t)(ws+1152);
	i8 v871 = *(i8*)(intptr_t)v870;
	i4 v872 = *(i4*)(intptr_t)v871;
	i8 v873 = (i8)(intptr_t)(ws+1168);
	*(i4*)(intptr_t)v873 = v872;

	i8 v874 = (i8)(intptr_t)(ws+1152);
	i8 v875 = *(i8*)(intptr_t)v874;
	i8 v876 = v875+(+12);
	i8 v877 = (i8)(intptr_t)(ws+1176);
	*(i8*)(intptr_t)v877 = v876;


	
*(i4*)(intptr_t)(ws+1184) 
=pread( 
*(i4*)(intptr_t)(ws+1168) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1176) 
,  
*(i2*)(intptr_t)(ws+1164) 
,  
*(i4*)(intptr_t)(ws+1160) 
); 



	i8 v878 = (i8)(intptr_t)(ws+1184);
	i4 v879 = *(i4*)(intptr_t)v878;
	i4 v880 = (i4)-1;
	if (v879==v880) goto c02_00d6; else goto c02_00d7;

c02_00d6:;

	i2 v881 = (i2)+0;
	i8 v882 = (i8)(intptr_t)(ws+1166);
	*(i2*)(intptr_t)v882 = v881;

	i8 v883 = (i8)(intptr_t)(ws+1152);
	i8 v884 = *(i8*)(intptr_t)v883;
	i8 v885 = v884+(+524);
	i1 v886 = *(i1*)(intptr_t)v885;
	i1 v887 = v886|(+1);
	i8 v888 = (i8)(intptr_t)(ws+1152);
	i8 v889 = *(i8*)(intptr_t)v888;
	i8 v890 = v889+(+524);
	*(i1*)(intptr_t)v890 = v887;

	goto c02_00d3;

c02_00d7:;

	i8 v891 = (i8)(intptr_t)(ws+1184);
	i4 v892 = *(i4*)(intptr_t)v891;
	i2 v893 = (s2)(s4)v892;
	i8 v894 = (i8)(intptr_t)(ws+1166);
	*(i2*)(intptr_t)v894 = v893;

c02_00d3:;

endsub:;
	*p866 = *(i2*)(intptr_t)(ws+1166);
}

// FCBRawWrite workspace at ws+1144 length ws+36
void f40_FCBRawWrite(i2 p895 /* len */, i4 p896 /* pos */, i8 p897 /* fcb */) {
	*(i8*)(intptr_t)(ws+1144) = p897; /* fcb */
	*(i4*)(intptr_t)(ws+1152) = p896; /* pos */
	*(i2*)(intptr_t)(ws+1156) = p895; /* len */

	i8 v898 = (i8)(intptr_t)(ws+1144);
	i8 v899 = *(i8*)(intptr_t)v898;
	i4 v900 = *(i4*)(intptr_t)v899;
	i8 v901 = (i8)(intptr_t)(ws+1160);
	*(i4*)(intptr_t)v901 = v900;

	i8 v902 = (i8)(intptr_t)(ws+1144);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = v903+(+12);
	i8 v905 = (i8)(intptr_t)(ws+1168);
	*(i8*)(intptr_t)v905 = v904;


	
*(i4*)(intptr_t)(ws+1176) 
=pwrite( 
*(i4*)(intptr_t)(ws+1160) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+1168) 
,  
*(i2*)(intptr_t)(ws+1156) 
,  
*(i4*)(intptr_t)(ws+1152) 
); 



	i8 v906 = (i8)(intptr_t)(ws+1176);
	i4 v907 = *(i4*)(intptr_t)v906;
	i4 v908 = (i4)-1;
	if (v907==v908) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v909 = (i8)(intptr_t)(ws+1144);
	i8 v910 = *(i8*)(intptr_t)v909;
	i8 v911 = v910+(+524);
	i1 v912 = *(i1*)(intptr_t)v911;
	i1 v913 = v912|(+1);
	i8 v914 = (i8)(intptr_t)(ws+1144);
	i8 v915 = *(i8*)(intptr_t)v914;
	i8 v916 = v915+(+524);
	*(i1*)(intptr_t)v916 = v913;

c02_00dc:;

c02_00d8:;

endsub:;
}
	void f41__fcb_init(i8 /* fcb */);

// fcb_i_open workspace at ws+1072 length ws+28
void f51_fcb_i_open(i1* p917 /* errno */, i4 p918 /* flags */, i8 p919 /* filename */, i8 p920 /* fcb */) {
	*(i8*)(intptr_t)(ws+1072) = p920; /* fcb */
	*(i8*)(intptr_t)(ws+1080) = p919; /* filename */
	*(i4*)(intptr_t)(ws+1088) = p918; /* flags */

	i8 v921 = (i8)(intptr_t)(ws+1072);
	i8 v922 = *(i8*)(intptr_t)v921;
	i8 v923 = (i8)(intptr_t)(f41__fcb_init);

	((void(*)(i8 /* fcb */))(intptr_t)v923)(v922);


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+1096) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+1080) 
,  
*(i4*)(intptr_t)(ws+1088) 
,  
(+438)
); 



	i8 v924 = (i8)(intptr_t)(ws+1096);
	i4 v925 = *(i4*)(intptr_t)v924;
	i8 v926 = (i8)(intptr_t)(ws+1072);
	i8 v927 = *(i8*)(intptr_t)v926;
	*(i4*)(intptr_t)v927 = v925;

	i8 v928 = (i8)(intptr_t)(ws+1096);
	i4 v929 = *(i4*)(intptr_t)v928;
	i4 v930 = (i4)+0;
	if ((s4)v929<(s4)v930) goto c02_00e0; else goto c02_00e1;

c02_00e0:;


	
*(i1*)(intptr_t)(ws+1092) 
 = errno; 



	goto c02_00dd;

c02_00e1:;

	i1 v931 = (i1)+0;
	i8 v932 = (i8)(intptr_t)(ws+1092);
	*(i1*)(intptr_t)v932 = v931;

c02_00dd:;

endsub:;
	*p917 = *(i1*)(intptr_t)(ws+1092);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+1048 length ws+18
void f52_FCBOpenIn(i1* p933 /* errno */, i8 p934 /* filename */, i8 p935 /* fcb */) {
	*(i8*)(intptr_t)(ws+1048) = p935; /* fcb */
	*(i8*)(intptr_t)(ws+1056) = p934; /* filename */

	i8 v936 = (i8)(intptr_t)(ws+1048);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = (i8)(intptr_t)(ws+1056);
	i8 v939 = *(i8*)(intptr_t)v938;
	i4 v940 = (i4)+0;
	i8 v941 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v942;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v941)(&v942, v940, v939, v937);

	i8 v943 = (i8)(intptr_t)(ws+1065);
	*(i1*)(intptr_t)v943 = v942;

	i8 v944 = (i8)(intptr_t)(ws+1065);
	i1 v945 = *(i1*)(intptr_t)v944;
	i8 v946 = (i8)(intptr_t)(ws+1064);
	*(i1*)(intptr_t)v946 = v945;

endsub:;
	*p933 = *(i1*)(intptr_t)(ws+1064);
}
	void f51_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+848 length ws+18
void f54_FCBOpenOut(i1* p961 /* errno */, i8 p962 /* filename */, i8 p963 /* fcb */) {
	*(i8*)(intptr_t)(ws+848) = p963; /* fcb */
	*(i8*)(intptr_t)(ws+856) = p962; /* filename */

	i8 v964 = (i8)(intptr_t)(ws+848);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = (i8)(intptr_t)(ws+856);
	i8 v967 = *(i8*)(intptr_t)v966;
	i4 v968 = (i4)+578;
	i8 v969 = (i8)(intptr_t)(f51_fcb_i_open);
	i1 v970;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v969)(&v970, v968, v967, v965);

	i8 v971 = (i8)(intptr_t)(ws+865);
	*(i1*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+865);
	i1 v973 = *(i1*)(intptr_t)v972;
	i8 v974 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v974 = v973;

endsub:;
	*p961 = *(i1*)(intptr_t)(ws+864);
}
	void f44_FCBFlush(i8 /* fcb */);

// FCBClose workspace at ws+840 length ws+16
void f55_FCBClose(i1* p975 /* errno */, i8 p976 /* fcb */) {
	*(i8*)(intptr_t)(ws+840) = p976; /* fcb */

	i8 v977 = (i8)(intptr_t)(ws+840);
	i8 v978 = *(i8*)(intptr_t)v977;
	i8 v979 = (i8)(intptr_t)(f44_FCBFlush);

	((void(*)(i8 /* fcb */))(intptr_t)v979)(v978);

	i8 v980 = (i8)(intptr_t)(ws+840);
	i8 v981 = *(i8*)(intptr_t)v980;
	i4 v982 = *(i4*)(intptr_t)v981;
	i8 v983 = (i8)(intptr_t)(ws+852);
	*(i4*)(intptr_t)v983 = v982;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+852) 
); 


	
*(i1*)(intptr_t)(ws+848) 
 = errno; 



endsub:;
	*p975 = *(i1*)(intptr_t)(ws+848);
}
const i1 c02_s0001[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);

// StartError workspace at ws+1056 length ws+0
void f60_StartError(void) {

	i8 v1060 = (i8)(intptr_t)c02_s0001;
	i8 v1061 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1061)(v1060);

endsub:;
}
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+1056 length ws+0
void f61_EndError(void) {

	i8 v1062 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1062)();

	i8 v1063 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1063)();

endsub:;
}
	void f60_StartError(void);
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);

// SimpleError workspace at ws+912 length ws+8
void f62_SimpleError(i8 p1064 /* s */) {
	*(i8*)(intptr_t)(ws+912) = p1064; /* s */

	i8 v1065 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1065)();

	i8 v1066 = (i8)(intptr_t)(ws+912);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	i8 v1068 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1068)(v1067);

	i8 v1069 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1069)();

endsub:;
}
	void f60_StartError(void);
const i1 c02_s0002[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0003[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);

// CannotOpen workspace at ws+1048 length ws+8
void f63_CannotOpen(i8 p1070 /* filename */) {
	*(i8*)(intptr_t)(ws+1048) = p1070; /* filename */

	i8 v1071 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1071)();

	i8 v1072 = (i8)(intptr_t)c02_s0002;
	i8 v1073 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1073)(v1072);

	i8 v1074 = (i8)(intptr_t)(ws+1048);
	i8 v1075 = *(i8*)(intptr_t)v1074;
	i8 v1076 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1076)(v1075);

	i8 v1077 = (i8)(intptr_t)c02_s0003;
	i8 v1078 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1078)(v1077);

	i8 v1079 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1079)();

endsub:;
}
	void f47_FCBPutChar(i1 /* b */, i8 /* fcb */);

// E_b8 workspace at ws+1032 length ws+1
void f64_E_b8(i1 p1080 /* c */) {
	*(i1*)(intptr_t)(ws+1032) = p1080; /* c */

	i8 v1081 = (i8)(intptr_t)(ws+56);
	i8 v1082 = (i8)(intptr_t)(ws+1032);
	i1 v1083 = *(i1*)(intptr_t)v1082;
	i8 v1084 = (i8)(intptr_t)(f47_FCBPutChar);

	((void(*)(i1 /* b */, i8 /* fcb */))(intptr_t)v1084)(v1083, v1081);

endsub:;
}
	void f64_E_b8(i1 /* c */);

// E workspace at ws+1016 length ws+9
void f65_E(i8 p1085 /* text */) {
	*(i8*)(intptr_t)(ws+1016) = p1085; /* text */

c02_00f5:;

	i8 v1086 = (i8)(intptr_t)(ws+1016);
	i8 v1087 = *(i8*)(intptr_t)v1086;
	i1 v1088 = *(i1*)(intptr_t)v1087;
	i8 v1089 = (i8)(intptr_t)(ws+1024);
	*(i1*)(intptr_t)v1089 = v1088;

	i8 v1090 = (i8)(intptr_t)(ws+1016);
	i8 v1091 = *(i8*)(intptr_t)v1090;
	i8 v1092 = v1091+(+1);
	i8 v1093 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v1093 = v1092;

	i8 v1094 = (i8)(intptr_t)(ws+1024);
	i1 v1095 = *(i1*)(intptr_t)v1094;
	i1 v1096 = (i1)+0;
	if (v1095==v1096) goto c02_00fa; else goto c02_00fb;

c02_00fa:;

	goto c02_00f6;

c02_00fb:;

c02_00f7:;

	i8 v1097 = (i8)(intptr_t)(ws+1024);
	i1 v1098 = *(i1*)(intptr_t)v1097;
	i8 v1099 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1099)(v1098);

	goto c02_00f5;

c02_00f6:;

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f64_E_b8(i1 /* c */);

// E_u32 workspace at ws+984 length ws+41
void f66_E_u32(i4 p1100 /* value */) {
	*(i4*)(intptr_t)(ws+984) = p1100; /* value */

	i8 v1101 = (i8)(intptr_t)(ws+988);
	i8 v1102 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v1102 = v1101;

	i8 v1103 = (i8)(intptr_t)(ws+984);
	i4 v1104 = *(i4*)(intptr_t)v1103;
	i1 v1105 = (i1)+10;
	i8 v1106 = (i8)(intptr_t)(ws+1000);
	i8 v1107 = *(i8*)(intptr_t)v1106;
	i8 v1108 = (i8)(intptr_t)(f14_UIToA);
	i8 v1109;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1108)(&v1109, v1107, v1105, v1104);

	i8 v1110 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v1110 = v1109;

	i8 v1111 = (i8)(intptr_t)(ws+1008);
	i8 v1112 = *(i8*)(intptr_t)v1111;
	i8 v1113 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v1113 = v1112;

c02_00fc:;

	i8 v1114 = (i8)(intptr_t)(ws+1000);
	i8 v1115 = *(i8*)(intptr_t)v1114;
	i1 v1116 = *(i1*)(intptr_t)v1115;
	i8 v1117 = (i8)(intptr_t)(ws+1024);
	*(i1*)(intptr_t)v1117 = v1116;

	i8 v1118 = (i8)(intptr_t)(ws+1024);
	i1 v1119 = *(i1*)(intptr_t)v1118;
	i1 v1120 = (i1)+0;
	if (v1119==v1120) goto c02_0101; else goto c02_0102;

c02_0101:;

	goto c02_00fd;

c02_0102:;

c02_00fe:;

	i8 v1121 = (i8)(intptr_t)(ws+1024);
	i1 v1122 = *(i1*)(intptr_t)v1121;
	i8 v1123 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1123)(v1122);

	i8 v1124 = (i8)(intptr_t)(ws+1000);
	i8 v1125 = *(i8*)(intptr_t)v1124;
	i8 v1126 = v1125+(+1);
	i8 v1127 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v1127 = v1126;

	goto c02_00fc;

c02_00fd:;

endsub:;
}
	void f66_E_u32(i4 /* value */);

// E_u16 workspace at ws+976 length ws+2
void f67_E_u16(i2 p1128 /* value */) {
	*(i2*)(intptr_t)(ws+976) = p1128; /* value */

	i8 v1129 = (i8)(intptr_t)(ws+976);
	i2 v1130 = *(i2*)(intptr_t)v1129;
	i4 v1131 = v1130;
	i8 v1132 = (i8)(intptr_t)(f66_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v1132)(v1131);

endsub:;
}
	void f14_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f64_E_b8(i1 /* c */);
	void f65_E(i8 /* text */);

// E_h workspace at ws+976 length ws+33
void f70_E_h(i1 p1153 /* width */, i4 p1154 /* value */) {
	*(i4*)(intptr_t)(ws+976) = p1154; /* value */
	*(i1*)(intptr_t)(ws+980) = p1153; /* width */

	i8 v1155 = (i8)(intptr_t)(ws+976);
	i4 v1156 = *(i4*)(intptr_t)v1155;
	i1 v1157 = (i1)+16;
	i8 v1158 = (i8)(intptr_t)(ws+981);
	i8 v1159 = (i8)(intptr_t)(f14_UIToA);
	i8 v1160;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v1159)(&v1160, v1158, v1157, v1156);

	i8 v1161 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v1161 = v1160;

	i8 v1162 = (i8)(intptr_t)(ws+992);
	i8 v1163 = *(i8*)(intptr_t)v1162;
	i8 v1164 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v1164 = v1163;

	i8 v1165 = (i8)(intptr_t)(ws+980);
	i1 v1166 = *(i1*)(intptr_t)v1165;
	i8 v1167 = (i8)(intptr_t)(ws+1000);
	i8 v1168 = *(i8*)(intptr_t)v1167;
	i8 v1169 = (i8)(intptr_t)(ws+981);
	i8 v1170 = v1168-v1169;
	i1 v1171 = v1170;
	i1 v1172 = v1166-v1171;
	i8 v1173 = (i8)(intptr_t)(ws+1008);
	*(i1*)(intptr_t)v1173 = v1172;

c02_0108:;

	i8 v1174 = (i8)(intptr_t)(ws+1008);
	i1 v1175 = *(i1*)(intptr_t)v1174;
	i1 v1176 = (i1)+0;
	if (v1175==v1176) goto c02_010d; else goto c02_010c;

c02_010c:;

	i1 v1177 = (i1)+48;
	i8 v1178 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1178)(v1177);

	i8 v1179 = (i8)(intptr_t)(ws+1008);
	i1 v1180 = *(i1*)(intptr_t)v1179;
	i1 v1181 = v1180+(-1);
	i8 v1182 = (i8)(intptr_t)(ws+1008);
	*(i1*)(intptr_t)v1182 = v1181;

	goto c02_0108;

c02_010d:;

	i8 v1183 = (i8)(intptr_t)(ws+981);
	i8 v1184 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1184)(v1183);

endsub:;
}
	void f70_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+968 length ws+1
void f71_E_h8(i1 p1185 /* value */) {
	*(i1*)(intptr_t)(ws+968) = p1185; /* value */

	i8 v1186 = (i8)(intptr_t)(ws+968);
	i1 v1187 = *(i1*)(intptr_t)v1186;
	i4 v1188 = v1187;
	i1 v1189 = (i1)+2;
	i8 v1190 = (i8)(intptr_t)(f70_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1190)(v1189, v1188);

endsub:;
}
	void f70_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+840 length ws+2
void f72_E_h16(i2 p1191 /* value */) {
	*(i2*)(intptr_t)(ws+840) = p1191; /* value */

	i8 v1192 = (i8)(intptr_t)(ws+840);
	i2 v1193 = *(i2*)(intptr_t)v1192;
	i4 v1194 = v1193;
	i1 v1195 = (i1)+4;
	i8 v1196 = (i8)(intptr_t)(f70_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v1196)(v1195, v1194);

endsub:;
}
	void f54_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+832 length ws+9
void f73_EmitterOpenfile(i8 p1197 /* filename */) {
	*(i8*)(intptr_t)(ws+832) = p1197; /* filename */

	i8 v1198 = (i8)(intptr_t)(ws+56);
	i8 v1199 = (i8)(intptr_t)(ws+832);
	i8 v1200 = *(i8*)(intptr_t)v1199;
	i8 v1201 = (i8)(intptr_t)(f54_FCBOpenOut);
	i1 v1202;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1201)(&v1202, v1200, v1198);

	i8 v1203 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v1203 = v1202;

	i8 v1204 = (i8)(intptr_t)(ws+840);
	i1 v1205 = *(i1*)(intptr_t)v1204;
	i1 v1206 = (i1)+0;
	if (v1205==v1206) goto c02_0112; else goto c02_0111;

c02_0111:;

	i8 v1207 = (i8)(intptr_t)c02_s0004;
	i8 v1208 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1208)(v1207);

c02_0112:;

c02_010e:;

endsub:;
}
	void f55_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0005[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+832 length ws+1
void f74_EmitterClosefile(void) {

	i8 v1209 = (i8)(intptr_t)(ws+56);
	i8 v1210 = (i8)(intptr_t)(f55_FCBClose);
	i1 v1211;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1210)(&v1211, v1209);

	i8 v1212 = (i8)(intptr_t)(ws+832);
	*(i1*)(intptr_t)v1212 = v1211;

	i8 v1213 = (i8)(intptr_t)(ws+832);
	i1 v1214 = *(i1*)(intptr_t)v1213;
	i1 v1215 = (i1)+0;
	if (v1214==v1215) goto c02_0117; else goto c02_0116;

c02_0116:;

	i8 v1216 = (i8)(intptr_t)c02_s0005;
	i8 v1217 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1217)(v1216);

c02_0117:;

c02_0113:;

endsub:;
}

// ArchAlignUp workspace at ws+3296 length ws+8
void f75_ArchAlignUp(i2* p1218 /* newvalue */, i1 p1219 /* alignment */, i2 p1220 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p1220; /* value */
	*(i1*)(intptr_t)(ws+3298) = p1219; /* alignment */

	i8 v1221 = (i8)(intptr_t)(ws+3298);
	i1 v1222 = *(i1*)(intptr_t)v1221;
	i1 v1223 = v1222+(-1);
	i2 v1224 = v1223;
	i8 v1225 = (i8)(intptr_t)(ws+3302);
	*(i2*)(intptr_t)v1225 = v1224;

	i8 v1226 = (i8)(intptr_t)(ws+3296);
	i2 v1227 = *(i2*)(intptr_t)v1226;
	i8 v1228 = (i8)(intptr_t)(ws+3302);
	i2 v1229 = *(i2*)(intptr_t)v1228;
	i2 v1230 = v1227+v1229;
	i8 v1231 = (i8)(intptr_t)(ws+3302);
	i2 v1232 = *(i2*)(intptr_t)v1231;
	i2 v1233 = ~v1232;
	i2 v1234 = v1230&v1233;
	i8 v1235 = (i8)(intptr_t)(ws+3300);
	*(i2*)(intptr_t)v1235 = v1234;

endsub:;
	*p1218 = *(i2*)(intptr_t)(ws+3300);
}
	void f64_E_b8(i1 /* c */);

// E_nl workspace at ws+968 length ws+0
void f76_E_nl(void) {

	i1 v1236 = (i1)+10;
	i8 v1237 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1237)(v1236);

endsub:;
}
	void f64_E_b8(i1 /* c */);
	void f67_E_u16(i2 /* value */);
	void f64_E_b8(i1 /* c */);
	void f65_E(i8 /* text */);

// ArchEmitSubRef workspace at ws+968 length ws+8
void f77_ArchEmitSubRef(i8 p1238 /* subr */) {
	*(i8*)(intptr_t)(ws+968) = p1238; /* subr */

	i1 v1239 = (i1)+102;
	i8 v1240 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1240)(v1239);

	i8 v1241 = (i8)(intptr_t)(ws+968);
	i8 v1242 = *(i8*)(intptr_t)v1241;
	i8 v1243 = v1242+(+186);
	i2 v1244 = *(i2*)(intptr_t)v1243;
	i8 v1245 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1245)(v1244);

	i1 v1246 = (i1)+95;
	i8 v1247 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1247)(v1246);

	i8 v1248 = (i8)(intptr_t)(ws+968);
	i8 v1249 = *(i8*)(intptr_t)v1248;
	i8 v1250 = v1249+(+152);
	i8 v1251 = *(i8*)(intptr_t)v1250;
	i8 v1252 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1252)(v1251);

endsub:;
}
const i1 c02_s0006[] = { 0x77,0x73,0x2b,0 };
	void f65_E(i8 /* text */);
	void f67_E_u16(i2 /* value */);

// ArchEmitWSRef workspace at ws+968 length ws+4
void f78_ArchEmitWSRef(i2 p1253 /* address */, i1 p1254 /* wid */) {
	*(i1*)(intptr_t)(ws+968) = p1254; /* wid */
	*(i2*)(intptr_t)(ws+970) = p1253; /* address */

	i8 v1255 = (i8)(intptr_t)c02_s0006;
	i8 v1256 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1256)(v1255);

	i8 v1257 = (i8)(intptr_t)(ws+970);
	i2 v1258 = *(i2*)(intptr_t)v1257;
	i8 v1259 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1259)(v1258);

endsub:;
}
const i1 c02_s0007[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
	void f65_E(i8 /* text */);
const i1 c02_s0008[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
	void f65_E(i8 /* text */);
	void f72_E_h16(i2 /* value */);
const i1 c02_s0009[] = { 0x5d,0x3b,0x0a,0 };
	void f65_E(i8 /* text */);
const i1 c02_s000a[] = { 0x23,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0x77,0x73,0x20,0x28,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x29,0x0a,0 };
	void f65_E(i8 /* text */);

// ArchEmitHeader workspace at ws+832 length ws+8
void f79_ArchEmitHeader(i8 p1260 /* coo */) {
	*(i8*)(intptr_t)(ws+832) = p1260; /* coo */

	i8 v1261 = (i8)(intptr_t)c02_s0007;
	i8 v1262 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1262)(v1261);

	i8 v1263 = (i8)(intptr_t)c02_s0008;
	i8 v1264 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1264)(v1263);

	i8 v1265 = (i8)(intptr_t)(ws+582);
	i2 v1266 = *(i2*)(intptr_t)v1265;
	i2 v1267 = v1266+(+7);
	i1 v1268 = (i1)+3;
	i2 v1269 = ((i2)v1267)>>v1268;
	i8 v1270 = (i8)(intptr_t)(f72_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1270)(v1269);

	i8 v1271 = (i8)(intptr_t)c02_s0009;
	i8 v1272 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1272)(v1271);

	i8 v1273 = (i8)(intptr_t)c02_s000a;
	i8 v1274 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1274)(v1273);

endsub:;
}
const i1 c02_s000b[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f65_E(i8 /* text */);
	void f64_E_b8(i1 /* c */);
	void f77_ArchEmitSubRef(i8 /* subr */);
const i1 c02_s000c[] = { 0x28,0x29,0x3b,0x0a,0 };
	void f65_E(i8 /* text */);
const i1 c02_s000d[] = { 0x7d,0x0a,0 };
	void f65_E(i8 /* text */);

// ArchEmitFooter workspace at ws+832 length ws+16
void f80_ArchEmitFooter(i8 p1275 /* coo */) {
	*(i8*)(intptr_t)(ws+832) = p1275; /* coo */

	i8 v1276 = (i8)(intptr_t)c02_s000b;
	i8 v1277 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1277)(v1276);

c02_0118:;

	i8 v1278 = (i8)(intptr_t)(ws+832);
	i8 v1279 = *(i8*)(intptr_t)v1278;
	i8 v1280 = (i8)+0;
	if (v1279==v1280) goto c02_011d; else goto c02_011c;

c02_011c:;

	i8 v1281 = (i8)(intptr_t)(ws+832);
	i8 v1282 = *(i8*)(intptr_t)v1281;
	i8 v1283 = v1282+(+544);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v1285 = v1284;

	i8 v1286 = (i8)(intptr_t)(ws+840);
	i8 v1287 = *(i8*)(intptr_t)v1286;
	i8 v1288 = (i8)+0;
	if (v1287==v1288) goto c02_0122; else goto c02_0121;

c02_0121:;

	i1 v1289 = (i1)+9;
	i8 v1290 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1290)(v1289);

	i8 v1291 = (i8)(intptr_t)(ws+840);
	i8 v1292 = *(i8*)(intptr_t)v1291;
	i8 v1293 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1293)(v1292);

	i8 v1294 = (i8)(intptr_t)c02_s000c;
	i8 v1295 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1295)(v1294);

c02_0122:;

c02_011e:;

	i8 v1296 = (i8)(intptr_t)(ws+832);
	i8 v1297 = *(i8*)(intptr_t)v1296;
	i8 v1298 = v1297+(+672);
	i8 v1299 = *(i8*)(intptr_t)v1298;
	i8 v1300 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v1300 = v1299;

	goto c02_0118;

c02_011d:;

	i8 v1301 = (i8)(intptr_t)c02_s000d;
	i8 v1302 = (i8)(intptr_t)(f65_E);

	((void(*)(i8 /* text */))(intptr_t)v1302)(v1301);

endsub:;
}
	void f46_FCBGetChar(i1* /* b */, i8 /* fcb */);

// read_bin1 workspace at ws+1096 length ws+10
void f81_read_bin1(i1* p1305 /* c */, i8 p1306 /* fcb */) {
	*(i8*)(intptr_t)(ws+1096) = p1306; /* fcb */

	i8 v1307 = (i8)(intptr_t)(ws+1096);
	i8 v1308 = *(i8*)(intptr_t)v1307;
	i8 v1309 = (i8)(intptr_t)(f46_FCBGetChar);
	i1 v1310;

	((void(*)(i1* /* b */, i8 /* fcb */))(intptr_t)v1309)(&v1310, v1308);

	i8 v1311 = (i8)(intptr_t)(ws+1105);
	*(i1*)(intptr_t)v1311 = v1310;

	i8 v1312 = (i8)(intptr_t)(ws+1105);
	i1 v1313 = *(i1*)(intptr_t)v1312;
	i8 v1314 = (i8)(intptr_t)(ws+1104);
	*(i1*)(intptr_t)v1314 = v1313;

endsub:;
	*p1305 = *(i1*)(intptr_t)(ws+1104);
}
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);

// read_bin2 workspace at ws+1048 length ws+12
void f82_read_bin2(i2* p1315 /* val */, i8 p1316 /* fcb */) {
	*(i8*)(intptr_t)(ws+1048) = p1316; /* fcb */

	i8 v1317 = (i8)(intptr_t)(ws+1048);
	i8 v1318 = *(i8*)(intptr_t)v1317;
	i8 v1319 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1320;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1319)(&v1320, v1318);

	i8 v1321 = (i8)(intptr_t)(ws+1058);
	*(i1*)(intptr_t)v1321 = v1320;

	i8 v1322 = (i8)(intptr_t)(ws+1058);
	i1 v1323 = *(i1*)(intptr_t)v1322;
	i2 v1324 = v1323;
	i8 v1325 = (i8)(intptr_t)(ws+1056);
	*(i2*)(intptr_t)v1325 = v1324;

	i8 v1326 = (i8)(intptr_t)(ws+1048);
	i8 v1327 = *(i8*)(intptr_t)v1326;
	i8 v1328 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1329;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1328)(&v1329, v1327);

	i8 v1330 = (i8)(intptr_t)(ws+1059);
	*(i1*)(intptr_t)v1330 = v1329;

	i8 v1331 = (i8)(intptr_t)(ws+1056);
	i2 v1332 = *(i2*)(intptr_t)v1331;
	i8 v1333 = (i8)(intptr_t)(ws+1059);
	i1 v1334 = *(i1*)(intptr_t)v1333;
	i2 v1335 = v1334;
	i1 v1336 = (i1)+8;
	i2 v1337 = ((i2)v1335)<<v1336;
	i2 v1338 = v1332|v1337;
	i8 v1339 = (i8)(intptr_t)(ws+1056);
	*(i2*)(intptr_t)v1339 = v1338;

endsub:;
	*p1315 = *(i2*)(intptr_t)(ws+1056);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);

// read_string workspace at ws+1048 length ws+41
void f83_read_string(i8* p1340 /* ptr */, i1 p1341 /* len */, i8 p1342 /* fcb */) {
	*(i8*)(intptr_t)(ws+1048) = p1342; /* fcb */
	*(i1*)(intptr_t)(ws+1056) = p1341; /* len */

	i8 v1343 = (i8)(intptr_t)(ws+1056);
	i1 v1344 = *(i1*)(intptr_t)v1343;
	i1 v1345 = v1344+(+1);
	i8 v1346 = v1345;
	i8 v1347 = (i8)(intptr_t)(f33_Alloc);
	i8 v1348;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1347)(&v1348, v1346);

	i8 v1349 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1349 = v1348;

	i8 v1350 = (i8)(intptr_t)(ws+1072);
	i8 v1351 = *(i8*)(intptr_t)v1350;
	i8 v1352 = (i8)(intptr_t)(ws+1064);
	*(i8*)(intptr_t)v1352 = v1351;

	i8 v1353 = (i8)(intptr_t)(ws+1064);
	i8 v1354 = *(i8*)(intptr_t)v1353;
	i8 v1355 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1355 = v1354;

c02_0123:;

	i8 v1356 = (i8)(intptr_t)(ws+1056);
	i1 v1357 = *(i1*)(intptr_t)v1356;
	i1 v1358 = (i1)+0;
	if (v1357==v1358) goto c02_0128; else goto c02_0129;

c02_0128:;

	goto c02_0124;

c02_0129:;

c02_0125:;

	i8 v1359 = (i8)(intptr_t)(ws+1048);
	i8 v1360 = *(i8*)(intptr_t)v1359;
	i8 v1361 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1362;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1361)(&v1362, v1360);

	i8 v1363 = (i8)(intptr_t)(ws+1088);
	*(i1*)(intptr_t)v1363 = v1362;

	i8 v1364 = (i8)(intptr_t)(ws+1088);
	i1 v1365 = *(i1*)(intptr_t)v1364;
	i8 v1366 = (i8)(intptr_t)(ws+1080);
	i8 v1367 = *(i8*)(intptr_t)v1366;
	*(i1*)(intptr_t)v1367 = v1365;

	i8 v1368 = (i8)(intptr_t)(ws+1080);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = v1369+(+1);
	i8 v1371 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1371 = v1370;

	i8 v1372 = (i8)(intptr_t)(ws+1056);
	i1 v1373 = *(i1*)(intptr_t)v1372;
	i1 v1374 = v1373+(-1);
	i8 v1375 = (i8)(intptr_t)(ws+1056);
	*(i1*)(intptr_t)v1375 = v1374;

	goto c02_0123;

c02_0124:;

endsub:;
	*p1340 = *(i8*)(intptr_t)(ws+1064);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// AddRef workspace at ws+1048 length ws+40
void f84_AddRef(i8 p1376 /* calls */, i8 p1377 /* subr */) {
	*(i8*)(intptr_t)(ws+1048) = p1377; /* subr */
	*(i8*)(intptr_t)(ws+1056) = p1376; /* calls */

	i8 v1378 = (i8)(intptr_t)(ws+1048);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	i8 v1380 = v1379+(+184);
	i2 v1381 = *(i2*)(intptr_t)v1380;
	i8 v1382 = (i8)(intptr_t)(ws+1064);
	*(i2*)(intptr_t)v1382 = v1381;

	i8 v1383 = (i8)(intptr_t)(ws+1064);
	i2 v1384 = *(i2*)(intptr_t)v1383;
	i2 v1385 = v1384+(+1);
	i8 v1386 = (i8)(intptr_t)(ws+1048);
	i8 v1387 = *(i8*)(intptr_t)v1386;
	i8 v1388 = v1387+(+184);
	*(i2*)(intptr_t)v1388 = v1385;

	i8 v1389 = (i8)(intptr_t)(ws+1048);
	i8 v1390 = *(i8*)(intptr_t)v1389;
	i8 v1391 = v1390+(+16);
	i8 v1392 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1392 = v1391;

c02_012a:;

	i8 v1393 = (i8)(intptr_t)(ws+1064);
	i2 v1394 = *(i2*)(intptr_t)v1393;
	i2 v1395 = (i2)+16;
	if (v1394<v1395) goto c02_012f; else goto c02_012e;

c02_012e:;

	i8 v1396 = (i8)(intptr_t)(ws+1072);
	i8 v1397 = *(i8*)(intptr_t)v1396;
	i8 v1398 = *(i8*)(intptr_t)v1397;
	i8 v1399 = (i8)+0;
	if (v1398==v1399) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1400 = (i8)+136;
	i8 v1401 = (i8)(intptr_t)(f33_Alloc);
	i8 v1402;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1401)(&v1402, v1400);

	i8 v1403 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1403 = v1402;

	i8 v1404 = (i8)(intptr_t)(ws+1080);
	i8 v1405 = *(i8*)(intptr_t)v1404;
	i8 v1406 = (i8)(intptr_t)(ws+1072);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	*(i8*)(intptr_t)v1407 = v1405;

c02_0134:;

c02_0130:;

	i8 v1408 = (i8)(intptr_t)(ws+1072);
	i8 v1409 = *(i8*)(intptr_t)v1408;
	i8 v1410 = *(i8*)(intptr_t)v1409;
	i8 v1411 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1411 = v1410;

	i8 v1412 = (i8)(intptr_t)(ws+1064);
	i2 v1413 = *(i2*)(intptr_t)v1412;
	i2 v1414 = v1413+(-16);
	i8 v1415 = (i8)(intptr_t)(ws+1064);
	*(i2*)(intptr_t)v1415 = v1414;

	goto c02_012a;

c02_012f:;

	i8 v1416 = (i8)(intptr_t)(ws+1056);
	i8 v1417 = *(i8*)(intptr_t)v1416;
	i8 v1418 = (i8)(intptr_t)(ws+1072);
	i8 v1419 = *(i8*)(intptr_t)v1418;
	i8 v1420 = v1419+(+8);
	i8 v1421 = (i8)(intptr_t)(ws+1064);
	i2 v1422 = *(i2*)(intptr_t)v1421;
	i1 v1423 = v1422;
	i8 v1424 = v1423;
	i1 v1425 = (i1)+3;
	i8 v1426 = ((i8)v1424)<<v1425;
	i8 v1427 = v1420+v1426;
	*(i8*)(intptr_t)v1427 = v1417;

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// FindSub workspace at ws+1096 length ws+40
void f85_FindSub(i8* p1428 /* ptr */, i2 p1429 /* id */, i8 p1430 /* coo */) {
	*(i8*)(intptr_t)(ws+1096) = p1430; /* coo */
	*(i2*)(intptr_t)(ws+1104) = p1429; /* id */

	i8 v1431 = (i8)(intptr_t)(ws+1096);
	i8 v1432 = *(i8*)(intptr_t)v1431;
	i8 v1433 = v1432+(+536);
	i8 v1434 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1434 = v1433;

c02_0135:;

	i8 v1435 = (i8)(intptr_t)(ws+1104);
	i2 v1436 = *(i2*)(intptr_t)v1435;
	i2 v1437 = (i2)+16;
	if (v1436<v1437) goto c02_013a; else goto c02_0139;

c02_0139:;

	i8 v1438 = (i8)(intptr_t)(ws+1120);
	i8 v1439 = *(i8*)(intptr_t)v1438;
	i8 v1440 = *(i8*)(intptr_t)v1439;
	i8 v1441 = (i8)+0;
	if (v1440==v1441) goto c02_013e; else goto c02_013f;

c02_013e:;

	i8 v1442 = (i8)+136;
	i8 v1443 = (i8)(intptr_t)(f33_Alloc);
	i8 v1444;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1443)(&v1444, v1442);

	i8 v1445 = (i8)(intptr_t)(ws+1128);
	*(i8*)(intptr_t)v1445 = v1444;

	i8 v1446 = (i8)(intptr_t)(ws+1128);
	i8 v1447 = *(i8*)(intptr_t)v1446;
	i8 v1448 = (i8)(intptr_t)(ws+1120);
	i8 v1449 = *(i8*)(intptr_t)v1448;
	*(i8*)(intptr_t)v1449 = v1447;

c02_013f:;

c02_013b:;

	i8 v1450 = (i8)(intptr_t)(ws+1120);
	i8 v1451 = *(i8*)(intptr_t)v1450;
	i8 v1452 = *(i8*)(intptr_t)v1451;
	i8 v1453 = (i8)(intptr_t)(ws+1120);
	*(i8*)(intptr_t)v1453 = v1452;

	i8 v1454 = (i8)(intptr_t)(ws+1104);
	i2 v1455 = *(i2*)(intptr_t)v1454;
	i2 v1456 = v1455+(-16);
	i8 v1457 = (i8)(intptr_t)(ws+1104);
	*(i2*)(intptr_t)v1457 = v1456;

	goto c02_0135;

c02_013a:;

	i8 v1458 = (i8)(intptr_t)(ws+1120);
	i8 v1459 = *(i8*)(intptr_t)v1458;
	i8 v1460 = v1459+(+8);
	i8 v1461 = (i8)(intptr_t)(ws+1104);
	i2 v1462 = *(i2*)(intptr_t)v1461;
	i1 v1463 = v1462;
	i8 v1464 = v1463;
	i1 v1465 = (i1)+3;
	i8 v1466 = ((i8)v1464)<<v1465;
	i8 v1467 = v1460+v1466;
	i8 v1468 = (i8)(intptr_t)(ws+1112);
	*(i8*)(intptr_t)v1468 = v1467;

endsub:;
	*p1428 = *(i8*)(intptr_t)(ws+1112);
}
	void f85_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f33_Alloc(i8* /* block */, i8 /* length */);

// FindOrCreateSub workspace at ws+1048 length ws+48
void f86_FindOrCreateSub(i8* p1469 /* subroutine */, i2 p1470 /* id */, i8 p1471 /* coo */) {
	*(i8*)(intptr_t)(ws+1048) = p1471; /* coo */
	*(i2*)(intptr_t)(ws+1056) = p1470; /* id */

	i8 v1472 = (i8)(intptr_t)(ws+1048);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = (i8)(intptr_t)(ws+1056);
	i2 v1475 = *(i2*)(intptr_t)v1474;
	i8 v1476 = (i8)(intptr_t)(f85_FindSub);
	i8 v1477;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v1476)(&v1477, v1475, v1473);

	i8 v1478 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1478 = v1477;

	i8 v1479 = (i8)(intptr_t)(ws+1072);
	i8 v1480 = *(i8*)(intptr_t)v1479;
	i8 v1481 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1481 = v1480;

	i8 v1482 = (i8)(intptr_t)(ws+1080);
	i8 v1483 = *(i8*)(intptr_t)v1482;
	i8 v1484 = *(i8*)(intptr_t)v1483;
	i8 v1485 = (i8)(intptr_t)(ws+1064);
	*(i8*)(intptr_t)v1485 = v1484;

	i8 v1486 = (i8)(intptr_t)(ws+1064);
	i8 v1487 = *(i8*)(intptr_t)v1486;
	i8 v1488 = (i8)+0;
	if (v1487==v1488) goto c02_0143; else goto c02_0144;

c02_0143:;

	i8 v1489 = (i8)+189;
	i8 v1490 = (i8)(intptr_t)(f33_Alloc);
	i8 v1491;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1490)(&v1491, v1489);

	i8 v1492 = (i8)(intptr_t)(ws+1088);
	*(i8*)(intptr_t)v1492 = v1491;

	i8 v1493 = (i8)(intptr_t)(ws+1088);
	i8 v1494 = *(i8*)(intptr_t)v1493;
	i8 v1495 = (i8)(intptr_t)(ws+1064);
	*(i8*)(intptr_t)v1495 = v1494;

	i8 v1496 = (i8)(intptr_t)(ws+1048);
	i8 v1497 = *(i8*)(intptr_t)v1496;
	i8 v1498 = (i8)(intptr_t)(ws+1064);
	i8 v1499 = *(i8*)(intptr_t)v1498;
	*(i8*)(intptr_t)v1499 = v1497;

	i8 v1500 = (i8)(intptr_t)(ws+32);
	i8 v1501 = *(i8*)(intptr_t)v1500;
	i8 v1502 = (i8)(intptr_t)(ws+1064);
	i8 v1503 = *(i8*)(intptr_t)v1502;
	i8 v1504 = v1503+(+8);
	*(i8*)(intptr_t)v1504 = v1501;

	i8 v1505 = (i8)(intptr_t)(ws+1064);
	i8 v1506 = *(i8*)(intptr_t)v1505;
	i8 v1507 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1507 = v1506;

	i8 v1508 = (i8)(intptr_t)(ws+40);
	i2 v1509 = *(i2*)(intptr_t)v1508;
	i8 v1510 = (i8)(intptr_t)(ws+1064);
	i8 v1511 = *(i8*)(intptr_t)v1510;
	i8 v1512 = v1511+(+186);
	*(i2*)(intptr_t)v1512 = v1509;

	i8 v1513 = (i8)(intptr_t)(ws+1064);
	i8 v1514 = *(i8*)(intptr_t)v1513;
	i8 v1515 = (i8)(intptr_t)(ws+1080);
	i8 v1516 = *(i8*)(intptr_t)v1515;
	*(i8*)(intptr_t)v1516 = v1514;

	i8 v1517 = (i8)(intptr_t)(ws+40);
	i2 v1518 = *(i2*)(intptr_t)v1517;
	i2 v1519 = v1518+(+1);
	i8 v1520 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1520 = v1519;

c02_0144:;

c02_0140:;

endsub:;
	*p1469 = *(i8*)(intptr_t)(ws+1064);
}

// Deref workspace at ws+3296 length ws+24
void f87_Deref(i8* p1521 /* subout */, i8 p1522 /* subin */) {
	*(i8*)(intptr_t)(ws+3296) = p1522; /* subin */

	i8 v1523 = (i8)(intptr_t)(ws+3296);
	i8 v1524 = *(i8*)(intptr_t)v1523;
	i8 v1525 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1525 = v1524;

	i8 v1526 = (i8)(intptr_t)(ws+3296);
	i8 v1527 = *(i8*)(intptr_t)v1526;
	i8 v1528 = (i8)+0;
	if (v1527==v1528) goto c02_0149; else goto c02_0148;

c02_0148:;

	i8 v1529 = (i8)(intptr_t)(ws+3296);
	i8 v1530 = *(i8*)(intptr_t)v1529;
	i8 v1531 = v1530+(+160);
	i8 v1532 = *(i8*)(intptr_t)v1531;
	i8 v1533 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v1533 = v1532;

	i8 v1534 = (i8)(intptr_t)(ws+3312);
	i8 v1535 = *(i8*)(intptr_t)v1534;
	i8 v1536 = (i8)+0;
	if (v1535==v1536) goto c02_014e; else goto c02_014d;

c02_014d:;

	i8 v1537 = (i8)(intptr_t)(ws+3312);
	i8 v1538 = *(i8*)(intptr_t)v1537;
	i8 v1539 = v1538+(+16);
	i8 v1540 = *(i8*)(intptr_t)v1539;
	i8 v1541 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v1541 = v1540;

c02_014e:;

c02_014a:;

c02_0149:;

c02_0145:;

endsub:;
	*p1521 = *(i8*)(intptr_t)(ws+3304);
}
	void f26_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f35_StrDup(i8* /* sout */, i8 /* s */);

// FindOrCreateExternal workspace at ws+1048 length ws+40
void f88_FindOrCreateExternal(i8* p1542 /* external */, i8 p1543 /* name */) {
	*(i8*)(intptr_t)(ws+1048) = p1543; /* name */

	i8 v1544 = (i8)(intptr_t)(ws+24);
	i8 v1545 = *(i8*)(intptr_t)v1544;
	i8 v1546 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v1546 = v1545;

c02_014f:;

	i8 v1547 = (i8)(intptr_t)(ws+1056);
	i8 v1548 = *(i8*)(intptr_t)v1547;
	i8 v1549 = (i8)+0;
	if (v1548==v1549) goto c02_0154; else goto c02_0153;

c02_0153:;

	i8 v1550 = (i8)(intptr_t)(ws+1056);
	i8 v1551 = *(i8*)(intptr_t)v1550;
	i8 v1552 = v1551+(+8);
	i8 v1553 = *(i8*)(intptr_t)v1552;
	i8 v1554 = (i8)(intptr_t)(ws+1048);
	i8 v1555 = *(i8*)(intptr_t)v1554;
	i8 v1556 = (i8)(intptr_t)(f26_StrCmp);
	i1 v1557;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1556)(&v1557, v1555, v1553);

	i8 v1558 = (i8)(intptr_t)(ws+1064);
	*(i1*)(intptr_t)v1558 = v1557;

	i8 v1559 = (i8)(intptr_t)(ws+1064);
	i1 v1560 = *(i1*)(intptr_t)v1559;
	i1 v1561 = (i1)+0;
	if (v1560==v1561) goto c02_0158; else goto c02_0159;

c02_0158:;

	goto endsub;

c02_0159:;

c02_0155:;

	i8 v1562 = (i8)(intptr_t)(ws+1056);
	i8 v1563 = *(i8*)(intptr_t)v1562;
	i8 v1564 = *(i8*)(intptr_t)v1563;
	i8 v1565 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v1565 = v1564;

	goto c02_014f;

c02_0154:;

	i8 v1566 = (i8)+24;
	i8 v1567 = (i8)(intptr_t)(f33_Alloc);
	i8 v1568;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1567)(&v1568, v1566);

	i8 v1569 = (i8)(intptr_t)(ws+1072);
	*(i8*)(intptr_t)v1569 = v1568;

	i8 v1570 = (i8)(intptr_t)(ws+1072);
	i8 v1571 = *(i8*)(intptr_t)v1570;
	i8 v1572 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v1572 = v1571;

	i8 v1573 = (i8)(intptr_t)(ws+24);
	i8 v1574 = *(i8*)(intptr_t)v1573;
	i8 v1575 = (i8)(intptr_t)(ws+1056);
	i8 v1576 = *(i8*)(intptr_t)v1575;
	*(i8*)(intptr_t)v1576 = v1574;

	i8 v1577 = (i8)(intptr_t)(ws+1048);
	i8 v1578 = *(i8*)(intptr_t)v1577;
	i8 v1579 = (i8)(intptr_t)(f35_StrDup);
	i8 v1580;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1579)(&v1580, v1578);

	i8 v1581 = (i8)(intptr_t)(ws+1080);
	*(i8*)(intptr_t)v1581 = v1580;

	i8 v1582 = (i8)(intptr_t)(ws+1080);
	i8 v1583 = *(i8*)(intptr_t)v1582;
	i8 v1584 = (i8)(intptr_t)(ws+1056);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = v1585+(+8);
	*(i8*)(intptr_t)v1586 = v1583;

	i8 v1587 = (i8)(intptr_t)(ws+1056);
	i8 v1588 = *(i8*)(intptr_t)v1587;
	i8 v1589 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1589 = v1588;

endsub:;
	*p1542 = *(i8*)(intptr_t)(ws+1056);
}
	void f33_Alloc(i8* /* block */, i8 /* length */);
	void f52_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f63_CannotOpen(i8 /* filename */);
	void f50_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f84_AddRef(i8 /* calls */, i8 /* subr */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f83_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f83_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f88_FindOrCreateExternal(i8* /* external */, i8 /* name */);
	void f60_StartError(void);
const i1 c02_s000e[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6f,0x66,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s000f[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);
const i1 c02_s0010[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f9_print_char(i1 /* c */);
const i1 c02_s0011[] = { 0x27,0x20,0x69,0x6e,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0012[] = { 0x20,0x61,0x74,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f21_print_hex_i32(i4 /* value */);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// OpenAndLoadCoo workspace at ws+872 length ws+176
void f89_OpenAndLoadCoo(i8* p1590 /* coo */, i8 p1591 /* filename */) {
	*(i8*)(intptr_t)(ws+872) = p1591; /* filename */

	i8 v1592 = (i8)+682;
	i8 v1593 = (i8)(intptr_t)(f33_Alloc);
	i8 v1594;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1593)(&v1594, v1592);

	i8 v1595 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v1595 = v1594;

	i8 v1596 = (i8)(intptr_t)(ws+888);
	i8 v1597 = *(i8*)(intptr_t)v1596;
	i8 v1598 = (i8)(intptr_t)(ws+880);
	*(i8*)(intptr_t)v1598 = v1597;

	i8 v1599 = (i8)(intptr_t)(ws+40);
	i2 v1600 = *(i2*)(intptr_t)v1599;
	i8 v1601 = (i8)(intptr_t)(ws+880);
	i8 v1602 = *(i8*)(intptr_t)v1601;
	i8 v1603 = v1602+(+680);
	*(i2*)(intptr_t)v1603 = v1600;

	i8 v1604 = (i8)(intptr_t)(ws+872);
	i8 v1605 = *(i8*)(intptr_t)v1604;
	i8 v1606 = (i8)(intptr_t)(ws+880);
	i8 v1607 = *(i8*)(intptr_t)v1606;
	i8 v1608 = v1607+(+528);
	*(i8*)(intptr_t)v1608 = v1605;

	i8 v1609 = (i8)(intptr_t)(ws+40);
	i2 v1610 = *(i2*)(intptr_t)v1609;
	i2 v1611 = v1610+(+1);
	i8 v1612 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1612 = v1611;

	i8 v1613 = (i8)(intptr_t)(ws+880);
	i8 v1614 = *(i8*)(intptr_t)v1613;
	i8 v1615 = (i8)(intptr_t)(ws+872);
	i8 v1616 = *(i8*)(intptr_t)v1615;
	i8 v1617 = (i8)(intptr_t)(f52_FCBOpenIn);
	i1 v1618;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1617)(&v1618, v1616, v1614);

	i8 v1619 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v1619 = v1618;

	i8 v1620 = (i8)(intptr_t)(ws+896);
	i1 v1621 = *(i1*)(intptr_t)v1620;
	i1 v1622 = (i1)+0;
	if (v1621==v1622) goto c02_015e; else goto c02_015d;

c02_015d:;

	i8 v1623 = (i8)(intptr_t)(ws+872);
	i8 v1624 = *(i8*)(intptr_t)v1623;
	i8 v1625 = (i8)(intptr_t)(f63_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1625)(v1624);

c02_015e:;

c02_015a:;

	i4 v1626 = (i4)+0;
	i8 v1627 = (i8)(intptr_t)(ws+900);
	*(i4*)(intptr_t)v1627 = v1626;

c02_015f:;

	i8 v1628 = (i8)(intptr_t)(ws+880);
	i8 v1629 = *(i8*)(intptr_t)v1628;
	i8 v1630 = (i8)(intptr_t)(ws+900);
	i4 v1631 = *(i4*)(intptr_t)v1630;
	i8 v1632 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1632)(v1631, v1629);

	i8 v1633 = (i8)(intptr_t)(ws+880);
	i8 v1634 = *(i8*)(intptr_t)v1633;
	i8 v1635 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1636;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1635)(&v1636, v1634);

	i8 v1637 = (i8)(intptr_t)(ws+904);
	*(i1*)(intptr_t)v1637 = v1636;

	i8 v1638 = (i8)(intptr_t)(ws+904);
	i1 v1639 = *(i1*)(intptr_t)v1638;
	i8 v1640 = (i8)(intptr_t)(ws+905);
	*(i1*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(ws+880);
	i8 v1642 = *(i8*)(intptr_t)v1641;
	i8 v1643 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1644;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1643)(&v1644, v1642);

	i8 v1645 = (i8)(intptr_t)(ws+906);
	*(i2*)(intptr_t)v1645 = v1644;

	i8 v1646 = (i8)(intptr_t)(ws+906);
	i2 v1647 = *(i2*)(intptr_t)v1646;
	i8 v1648 = (i8)(intptr_t)(ws+908);
	*(i2*)(intptr_t)v1648 = v1647;

	i8 v1649 = (i8)(intptr_t)(ws+905);
	i1 v1650 = *(i1*)(intptr_t)v1649;
	i1 v1651 = (i1)+69;
	if (v1650==v1651) goto c02_0164; else goto c02_0165;

c02_0164:;

	goto c02_0160;

c02_0165:;

	i8 v1652 = (i8)(intptr_t)(ws+905);
	i1 v1653 = *(i1*)(intptr_t)v1652;
	i1 v1654 = (i1)+70;
	if (v1653==v1654) goto c02_0168; else goto c02_0169;

c02_0168:;

	i8 v1655 = (i8)(intptr_t)(ws+880);
	i8 v1656 = *(i8*)(intptr_t)v1655;
	i8 v1657 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1658;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1657)(&v1658, v1656);

	i8 v1659 = (i8)(intptr_t)(ws+920);
	*(i1*)(intptr_t)v1659 = v1658;

	i8 v1660 = (i8)(intptr_t)(ws+920);
	i1 v1661 = *(i1*)(intptr_t)v1660;
	i8 v1662 = (i8)(intptr_t)(ws+897);
	*(i1*)(intptr_t)v1662 = v1661;

	i8 v1663 = (i8)(intptr_t)(ws+880);
	i8 v1664 = *(i8*)(intptr_t)v1663;
	i8 v1665 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1666;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1665)(&v1666, v1664);

	i8 v1667 = (i8)(intptr_t)(ws+922);
	*(i2*)(intptr_t)v1667 = v1666;

	i8 v1668 = (i8)(intptr_t)(ws+922);
	i2 v1669 = *(i2*)(intptr_t)v1668;
	i8 v1670 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1670 = v1669;

	i8 v1671 = (i8)(intptr_t)(ws+880);
	i8 v1672 = *(i8*)(intptr_t)v1671;
	i8 v1673 = (i8)(intptr_t)(ws+898);
	i2 v1674 = *(i2*)(intptr_t)v1673;
	i8 v1675 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1676;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1675)(&v1676, v1674, v1672);

	i8 v1677 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v1677 = v1676;

	i8 v1678 = (i8)(intptr_t)(ws+928);
	i8 v1679 = *(i8*)(intptr_t)v1678;
	i8 v1680 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1680 = v1679;

	i8 v1681 = (i8)(intptr_t)(ws+912);
	i8 v1682 = *(i8*)(intptr_t)v1681;
	i8 v1683 = v1682+(+188);
	i1 v1684 = *(i1*)(intptr_t)v1683;
	i1 v1685 = v1684|(+2);
	i8 v1686 = (i8)(intptr_t)(ws+912);
	i8 v1687 = *(i8*)(intptr_t)v1686;
	i8 v1688 = v1687+(+188);
	*(i1*)(intptr_t)v1688 = v1685;

	goto c02_0161;

c02_0169:;

	i8 v1689 = (i8)(intptr_t)(ws+905);
	i1 v1690 = *(i1*)(intptr_t)v1689;
	i1 v1691 = (i1)+82;
	if (v1690==v1691) goto c02_016c; else goto c02_016d;

c02_016c:;

	i8 v1692 = (i8)(intptr_t)(ws+880);
	i8 v1693 = *(i8*)(intptr_t)v1692;
	i8 v1694 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1695;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1694)(&v1695, v1693);

	i8 v1696 = (i8)(intptr_t)(ws+936);
	*(i2*)(intptr_t)v1696 = v1695;

	i8 v1697 = (i8)(intptr_t)(ws+936);
	i2 v1698 = *(i2*)(intptr_t)v1697;
	i8 v1699 = (i8)(intptr_t)(ws+938);
	*(i2*)(intptr_t)v1699 = v1698;

	i8 v1700 = (i8)(intptr_t)(ws+880);
	i8 v1701 = *(i8*)(intptr_t)v1700;
	i8 v1702 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1703;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1702)(&v1703, v1701);

	i8 v1704 = (i8)(intptr_t)(ws+940);
	*(i2*)(intptr_t)v1704 = v1703;

	i8 v1705 = (i8)(intptr_t)(ws+940);
	i2 v1706 = *(i2*)(intptr_t)v1705;
	i8 v1707 = (i8)(intptr_t)(ws+942);
	*(i2*)(intptr_t)v1707 = v1706;

	i8 v1708 = (i8)(intptr_t)(ws+880);
	i8 v1709 = *(i8*)(intptr_t)v1708;
	i8 v1710 = (i8)(intptr_t)(ws+938);
	i2 v1711 = *(i2*)(intptr_t)v1710;
	i8 v1712 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1713;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1712)(&v1713, v1711, v1709);

	i8 v1714 = (i8)(intptr_t)(ws+944);
	*(i8*)(intptr_t)v1714 = v1713;

	i8 v1715 = (i8)(intptr_t)(ws+880);
	i8 v1716 = *(i8*)(intptr_t)v1715;
	i8 v1717 = (i8)(intptr_t)(ws+942);
	i2 v1718 = *(i2*)(intptr_t)v1717;
	i8 v1719 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1720;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1719)(&v1720, v1718, v1716);

	i8 v1721 = (i8)(intptr_t)(ws+952);
	*(i8*)(intptr_t)v1721 = v1720;

	i8 v1722 = (i8)(intptr_t)(ws+944);
	i8 v1723 = *(i8*)(intptr_t)v1722;
	i8 v1724 = (i8)(intptr_t)(ws+952);
	i8 v1725 = *(i8*)(intptr_t)v1724;
	i8 v1726 = (i8)(intptr_t)(f84_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v1726)(v1725, v1723);

	goto c02_0161;

c02_016d:;

	i8 v1727 = (i8)(intptr_t)(ws+905);
	i1 v1728 = *(i1*)(intptr_t)v1727;
	i1 v1729 = (i1)+87;
	if (v1728==v1729) goto c02_0170; else goto c02_0171;

c02_0170:;

	i8 v1730 = (i8)(intptr_t)(ws+880);
	i8 v1731 = *(i8*)(intptr_t)v1730;
	i8 v1732 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1733;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1732)(&v1733, v1731);

	i8 v1734 = (i8)(intptr_t)(ws+960);
	*(i2*)(intptr_t)v1734 = v1733;

	i8 v1735 = (i8)(intptr_t)(ws+960);
	i2 v1736 = *(i2*)(intptr_t)v1735;
	i8 v1737 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1737 = v1736;

	i8 v1738 = (i8)(intptr_t)(ws+880);
	i8 v1739 = *(i8*)(intptr_t)v1738;
	i8 v1740 = (i8)(intptr_t)(ws+898);
	i2 v1741 = *(i2*)(intptr_t)v1740;
	i8 v1742 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1743;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1742)(&v1743, v1741, v1739);

	i8 v1744 = (i8)(intptr_t)(ws+968);
	*(i8*)(intptr_t)v1744 = v1743;

	i8 v1745 = (i8)(intptr_t)(ws+968);
	i8 v1746 = *(i8*)(intptr_t)v1745;
	i8 v1747 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1747 = v1746;

	i8 v1748 = (i8)(intptr_t)(ws+880);
	i8 v1749 = *(i8*)(intptr_t)v1748;
	i8 v1750 = (i8)(intptr_t)(f81_read_bin1);
	i1 v1751;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1750)(&v1751, v1749);

	i8 v1752 = (i8)(intptr_t)(ws+976);
	*(i1*)(intptr_t)v1752 = v1751;

	i8 v1753 = (i8)(intptr_t)(ws+976);
	i1 v1754 = *(i1*)(intptr_t)v1753;
	i8 v1755 = (i8)(intptr_t)(ws+977);
	*(i1*)(intptr_t)v1755 = v1754;

	i8 v1756 = (i8)(intptr_t)(ws+880);
	i8 v1757 = *(i8*)(intptr_t)v1756;
	i8 v1758 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1759;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1758)(&v1759, v1757);

	i8 v1760 = (i8)(intptr_t)(ws+978);
	*(i2*)(intptr_t)v1760 = v1759;

	i8 v1761 = (i8)(intptr_t)(ws+978);
	i2 v1762 = *(i2*)(intptr_t)v1761;
	i8 v1763 = (i8)(intptr_t)(ws+912);
	i8 v1764 = *(i8*)(intptr_t)v1763;
	i8 v1765 = v1764+(+168);
	i8 v1766 = (i8)(intptr_t)(ws+977);
	i1 v1767 = *(i1*)(intptr_t)v1766;
	i8 v1768 = v1767;
	i1 v1769 = (i1)+1;
	i8 v1770 = ((i8)v1768)<<v1769;
	i8 v1771 = v1765+v1770;
	*(i2*)(intptr_t)v1771 = v1762;

	goto c02_0161;

c02_0171:;

	i8 v1772 = (i8)(intptr_t)(ws+905);
	i1 v1773 = *(i1*)(intptr_t)v1772;
	i1 v1774 = (i1)+78;
	if (v1773==v1774) goto c02_0174; else goto c02_0175;

c02_0174:;

	i8 v1775 = (i8)(intptr_t)(ws+880);
	i8 v1776 = *(i8*)(intptr_t)v1775;
	i8 v1777 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1778;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1777)(&v1778, v1776);

	i8 v1779 = (i8)(intptr_t)(ws+980);
	*(i2*)(intptr_t)v1779 = v1778;

	i8 v1780 = (i8)(intptr_t)(ws+980);
	i2 v1781 = *(i2*)(intptr_t)v1780;
	i8 v1782 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1782 = v1781;

	i8 v1783 = (i8)(intptr_t)(ws+880);
	i8 v1784 = *(i8*)(intptr_t)v1783;
	i8 v1785 = (i8)(intptr_t)(ws+898);
	i2 v1786 = *(i2*)(intptr_t)v1785;
	i8 v1787 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1788;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1787)(&v1788, v1786, v1784);

	i8 v1789 = (i8)(intptr_t)(ws+984);
	*(i8*)(intptr_t)v1789 = v1788;

	i8 v1790 = (i8)(intptr_t)(ws+984);
	i8 v1791 = *(i8*)(intptr_t)v1790;
	i8 v1792 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1792 = v1791;

	i8 v1793 = (i8)(intptr_t)(ws+880);
	i8 v1794 = *(i8*)(intptr_t)v1793;
	i8 v1795 = (i8)(intptr_t)(ws+908);
	i2 v1796 = *(i2*)(intptr_t)v1795;
	i1 v1797 = v1796;
	i1 v1798 = v1797+(-2);
	i8 v1799 = (i8)(intptr_t)(f83_read_string);
	i8 v1800;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1799)(&v1800, v1798, v1794);

	i8 v1801 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v1801 = v1800;

	i8 v1802 = (i8)(intptr_t)(ws+992);
	i8 v1803 = *(i8*)(intptr_t)v1802;
	i8 v1804 = (i8)(intptr_t)(ws+912);
	i8 v1805 = *(i8*)(intptr_t)v1804;
	i8 v1806 = v1805+(+152);
	*(i8*)(intptr_t)v1806 = v1803;

	goto c02_0161;

c02_0175:;

	i8 v1807 = (i8)(intptr_t)(ws+905);
	i1 v1808 = *(i1*)(intptr_t)v1807;
	i1 v1809 = (i1)+88;
	if (v1808==v1809) goto c02_0178; else goto c02_0179;

c02_0178:;

	i8 v1810 = (i8)(intptr_t)(ws+880);
	i8 v1811 = *(i8*)(intptr_t)v1810;
	i8 v1812 = (i8)(intptr_t)(f82_read_bin2);
	i2 v1813;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1812)(&v1813, v1811);

	i8 v1814 = (i8)(intptr_t)(ws+1000);
	*(i2*)(intptr_t)v1814 = v1813;

	i8 v1815 = (i8)(intptr_t)(ws+1000);
	i2 v1816 = *(i2*)(intptr_t)v1815;
	i8 v1817 = (i8)(intptr_t)(ws+898);
	*(i2*)(intptr_t)v1817 = v1816;

	i8 v1818 = (i8)(intptr_t)(ws+880);
	i8 v1819 = *(i8*)(intptr_t)v1818;
	i8 v1820 = (i8)(intptr_t)(ws+898);
	i2 v1821 = *(i2*)(intptr_t)v1820;
	i8 v1822 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v1823;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1822)(&v1823, v1821, v1819);

	i8 v1824 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v1824 = v1823;

	i8 v1825 = (i8)(intptr_t)(ws+1008);
	i8 v1826 = *(i8*)(intptr_t)v1825;
	i8 v1827 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v1827 = v1826;

	i8 v1828 = (i8)(intptr_t)(ws+880);
	i8 v1829 = *(i8*)(intptr_t)v1828;
	i8 v1830 = (i8)(intptr_t)(ws+908);
	i2 v1831 = *(i2*)(intptr_t)v1830;
	i1 v1832 = v1831;
	i1 v1833 = v1832+(-2);
	i8 v1834 = (i8)(intptr_t)(f83_read_string);
	i8 v1835;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1834)(&v1835, v1833, v1829);

	i8 v1836 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v1836 = v1835;

	i8 v1837 = (i8)(intptr_t)(ws+1016);
	i8 v1838 = *(i8*)(intptr_t)v1837;
	i8 v1839 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v1839 = v1838;

	i8 v1840 = (i8)(intptr_t)(ws+1024);
	i8 v1841 = *(i8*)(intptr_t)v1840;
	i8 v1842 = (i8)(intptr_t)(f88_FindOrCreateExternal);
	i8 v1843;

	((void(*)(i8* /* external */, i8 /* name */))(intptr_t)v1842)(&v1843, v1841);

	i8 v1844 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v1844 = v1843;

	i8 v1845 = (i8)(intptr_t)(ws+1032);
	i8 v1846 = *(i8*)(intptr_t)v1845;
	i8 v1847 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v1847 = v1846;

	i8 v1848 = (i8)(intptr_t)(ws+912);
	i8 v1849 = *(i8*)(intptr_t)v1848;
	i8 v1850 = v1849+(+160);
	i8 v1851 = *(i8*)(intptr_t)v1850;
	i8 v1852 = (i8)+0;
	if (v1851==v1852) goto c02_017e; else goto c02_017d;

c02_017d:;

	i8 v1853 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1853)();

	i8 v1854 = (i8)(intptr_t)c02_s000e;
	i8 v1855 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1855)(v1854);

	i8 v1856 = (i8)(intptr_t)(ws+1024);
	i8 v1857 = *(i8*)(intptr_t)v1856;
	i8 v1858 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1858)(v1857);

	i8 v1859 = (i8)(intptr_t)c02_s000f;
	i8 v1860 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1860)(v1859);

	i8 v1861 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1861)();

c02_017e:;

c02_017a:;

	i8 v1862 = (i8)(intptr_t)(ws+1040);
	i8 v1863 = *(i8*)(intptr_t)v1862;
	i8 v1864 = (i8)(intptr_t)(ws+912);
	i8 v1865 = *(i8*)(intptr_t)v1864;
	i8 v1866 = v1865+(+160);
	*(i8*)(intptr_t)v1866 = v1863;

	goto c02_0161;

c02_0179:;

	i8 v1867 = (i8)(intptr_t)c02_s0010;
	i8 v1868 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1868)(v1867);

	i8 v1869 = (i8)(intptr_t)(ws+905);
	i1 v1870 = *(i1*)(intptr_t)v1869;
	i8 v1871 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1871)(v1870);

	i8 v1872 = (i8)(intptr_t)c02_s0011;
	i8 v1873 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1873)(v1872);

	i8 v1874 = (i8)(intptr_t)(ws+872);
	i8 v1875 = *(i8*)(intptr_t)v1874;
	i8 v1876 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1876)(v1875);

	i8 v1877 = (i8)(intptr_t)c02_s0012;
	i8 v1878 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1878)(v1877);

	i8 v1879 = (i8)(intptr_t)(ws+900);
	i4 v1880 = *(i4*)(intptr_t)v1879;
	i8 v1881 = (i8)(intptr_t)(f21_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v1881)(v1880);

	i8 v1882 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v1882)();

	i8 v1883 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1883)();

c02_0161:;

	i8 v1884 = (i8)(intptr_t)(ws+900);
	i4 v1885 = *(i4*)(intptr_t)v1884;
	i8 v1886 = (i8)(intptr_t)(ws+908);
	i2 v1887 = *(i2*)(intptr_t)v1886;
	i4 v1888 = v1887;
	i4 v1889 = v1885+v1888;
	i4 v1890 = v1889+(+3);
	i8 v1891 = (i8)(intptr_t)(ws+900);
	*(i4*)(intptr_t)v1891 = v1890;

	goto c02_015f;

c02_0160:;

endsub:;
	*p1590 = *(i8*)(intptr_t)(ws+880);
}
	void f23_MemZero(i8 /* size */, i8 /* ptr */);

// InitStreams workspace at ws+832 length ws+0
void f90_InitStreams(void) {

	i8 v1892 = (i8)(intptr_t)(ws+592);
	i8 v1893 = (i8)+128;
	i8 v1894 = (i8)(intptr_t)(f23_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v1894)(v1893, v1892);

endsub:;
}
const i1 c02_s0013[] = { 0x73,0x74,0x72,0x65,0x61,0x6d,0x20,0x49,0x44,0x20,0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f62_SimpleError(i8 /* s */);
	void f33_Alloc(i8* /* block */, i8 /* length */);

// SetStream workspace at ws+888 length ws+24
void f91_SetStream(i1 p1895 /* sid */) {
	*(i1*)(intptr_t)(ws+888) = p1895; /* sid */

	i8 v1896 = (i8)(intptr_t)(ws+888);
	i1 v1897 = *(i1*)(intptr_t)v1896;
	i1 v1898 = (i1)+8;
	if (v1897<v1898) goto c02_0183; else goto c02_0182;

c02_0182:;

	i8 v1899 = (i8)(intptr_t)c02_s0013;
	i8 v1900 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1900)(v1899);

c02_0183:;

c02_017f:;

	i8 v1901 = (i8)(intptr_t)(ws+592);
	i8 v1902 = (i8)(intptr_t)(ws+888);
	i1 v1903 = *(i1*)(intptr_t)v1902;
	i8 v1904 = v1903;
	i1 v1905 = (i1)+4;
	i8 v1906 = ((i8)v1904)<<v1905;
	i8 v1907 = v1901+v1906;
	i8 v1908 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v1908 = v1907;

	i8 v1909 = (i8)(intptr_t)(ws+720);
	i8 v1910 = *(i8*)(intptr_t)v1909;
	i8 v1911 = v1910+(+8);
	i8 v1912 = *(i8*)(intptr_t)v1911;
	i8 v1913 = (i8)+0;
	if (v1912==v1913) goto c02_0187; else goto c02_0188;

c02_0187:;

	i8 v1914 = (i8)+264;
	i8 v1915 = (i8)(intptr_t)(f33_Alloc);
	i8 v1916;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1915)(&v1916, v1914);

	i8 v1917 = (i8)(intptr_t)(ws+896);
	*(i8*)(intptr_t)v1917 = v1916;

	i8 v1918 = (i8)(intptr_t)(ws+896);
	i8 v1919 = *(i8*)(intptr_t)v1918;
	i8 v1920 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v1920 = v1919;

	i8 v1921 = (i8)(intptr_t)(ws+904);
	i8 v1922 = *(i8*)(intptr_t)v1921;
	i8 v1923 = (i8)(intptr_t)(ws+720);
	i8 v1924 = *(i8*)(intptr_t)v1923;
	*(i8*)(intptr_t)v1924 = v1922;

	i8 v1925 = (i8)(intptr_t)(ws+904);
	i8 v1926 = *(i8*)(intptr_t)v1925;
	i8 v1927 = (i8)(intptr_t)(ws+720);
	i8 v1928 = *(i8*)(intptr_t)v1927;
	i8 v1929 = v1928+(+8);
	*(i8*)(intptr_t)v1929 = v1926;

c02_0188:;

c02_0184:;

endsub:;
}
	void f60_StartError(void);
const i1 c02_s0014[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f20_print_hex_i16(i2 /* value */);
	void f9_print_char(i1 /* c */);
const i1 c02_s0015[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s0016[] = { 0x27,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0017[] = { 0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x6e,0x6f,0x6e,0x79,0x6d,0x6f,0x75,0x73,0 };
	void f12_print(i8 /* ptr */);
	void f61_EndError(void);

// CheckSubExists workspace at ws+984 length ws+8
void f92_CheckSubExists(i8 p1930 /* subr */) {
	*(i8*)(intptr_t)(ws+984) = p1930; /* subr */

	i8 v1931 = (i8)(intptr_t)(ws+984);
	i8 v1932 = *(i8*)(intptr_t)v1931;
	i8 v1933 = v1932+(+188);
	i1 v1934 = *(i1*)(intptr_t)v1933;
	i1 v1935 = v1934&(+2);
	i1 v1936 = (i1)+0;
	if (v1935==v1936) goto c02_018c; else goto c02_018d;

c02_018c:;

	i8 v1937 = (i8)(intptr_t)(f60_StartError);

	((void(*)(void))(intptr_t)v1937)();

	i8 v1938 = (i8)(intptr_t)c02_s0014;
	i8 v1939 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1939)(v1938);

	i8 v1940 = (i8)(intptr_t)(ws+984);
	i8 v1941 = *(i8*)(intptr_t)v1940;
	i8 v1942 = v1941+(+186);
	i2 v1943 = *(i2*)(intptr_t)v1942;
	i8 v1944 = (i8)(intptr_t)(f20_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v1944)(v1943);

	i1 v1945 = (i1)+32;
	i8 v1946 = (i8)(intptr_t)(f9_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1946)(v1945);

	i8 v1947 = (i8)(intptr_t)(ws+984);
	i8 v1948 = *(i8*)(intptr_t)v1947;
	i8 v1949 = v1948+(+152);
	i8 v1950 = *(i8*)(intptr_t)v1949;
	i8 v1951 = (i8)+0;
	if (v1950==v1951) goto c02_0192; else goto c02_0191;

c02_0191:;

	i8 v1952 = (i8)(intptr_t)c02_s0015;
	i8 v1953 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1953)(v1952);

	i8 v1954 = (i8)(intptr_t)(ws+984);
	i8 v1955 = *(i8*)(intptr_t)v1954;
	i8 v1956 = v1955+(+152);
	i8 v1957 = *(i8*)(intptr_t)v1956;
	i8 v1958 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1958)(v1957);

	i8 v1959 = (i8)(intptr_t)c02_s0016;
	i8 v1960 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1960)(v1959);

	goto c02_018e;

c02_0192:;

	i8 v1961 = (i8)(intptr_t)c02_s0017;
	i8 v1962 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1962)(v1961);

c02_018e:;

	i8 v1963 = (i8)(intptr_t)(f61_EndError);

	((void(*)(void))(intptr_t)v1963)();

c02_018d:;

c02_0189:;

endsub:;
}
	void f64_E_b8(i1 /* c */);
	void f71_E_h8(i1 /* value */);
	void f64_E_b8(i1 /* c */);
	void f77_ArchEmitSubRef(i8 /* subr */);
	void f76_E_nl(void);
	void f64_E_b8(i1 /* c */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f92_CheckSubExists(i8 /* subr */);

// ParseWsRef workspace at ws+968 length ws+16
void f94_ParseWsRef(void) {

	i8 v2020 = (i8)(intptr_t)(ws+729);
	i1 v2021 = *(i1*)(intptr_t)v2020;
	i2 v2022 = v2021;
	i8 v2023 = (i8)(intptr_t)(ws+730);
	i1 v2024 = *(i1*)(intptr_t)v2023;
	i2 v2025 = v2024;
	i1 v2026 = (i1)+8;
	i2 v2027 = ((i2)v2025)<<v2026;
	i2 v2028 = v2022|v2027;
	i8 v2029 = (i8)(intptr_t)(ws+914);
	*(i2*)(intptr_t)v2029 = v2028;

	i8 v2030 = (i8)(intptr_t)(ws+731);
	i1 v2031 = *(i1*)(intptr_t)v2030;
	i8 v2032 = (i8)(intptr_t)(ws+928);
	*(i1*)(intptr_t)v2032 = v2031;

	i8 v2033 = (i8)(intptr_t)(ws+732);
	i1 v2034 = *(i1*)(intptr_t)v2033;
	i2 v2035 = v2034;
	i8 v2036 = (i8)(intptr_t)(ws+733);
	i1 v2037 = *(i1*)(intptr_t)v2036;
	i2 v2038 = v2037;
	i1 v2039 = (i1)+8;
	i2 v2040 = ((i2)v2038)<<v2039;
	i2 v2041 = v2035|v2040;
	i8 v2042 = (i8)(intptr_t)(ws+930);
	*(i2*)(intptr_t)v2042 = v2041;

	i8 v2043 = (i8)(intptr_t)(ws+48);
	i8 v2044 = *(i8*)(intptr_t)v2043;
	i8 v2045 = *(i8*)(intptr_t)v2044;
	i8 v2046 = (i8)(intptr_t)(ws+914);
	i2 v2047 = *(i2*)(intptr_t)v2046;
	i8 v2048 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v2049;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v2048)(&v2049, v2047, v2045);

	i8 v2050 = (i8)(intptr_t)(ws+968);
	*(i8*)(intptr_t)v2050 = v2049;

	i8 v2051 = (i8)(intptr_t)(ws+968);
	i8 v2052 = *(i8*)(intptr_t)v2051;
	i8 v2053 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2053 = v2052;

	i8 v2054 = (i8)(intptr_t)(ws+920);
	i8 v2055 = *(i8*)(intptr_t)v2054;
	i8 v2056 = (i8)(intptr_t)(f87_Deref);
	i8 v2057;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2056)(&v2057, v2055);

	i8 v2058 = (i8)(intptr_t)(ws+976);
	*(i8*)(intptr_t)v2058 = v2057;

	i8 v2059 = (i8)(intptr_t)(ws+976);
	i8 v2060 = *(i8*)(intptr_t)v2059;
	i8 v2061 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2061 = v2060;

	i8 v2062 = (i8)(intptr_t)(ws+920);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v2064)(v2063);

endsub:;
}
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f92_CheckSubExists(i8 /* subr */);
	void f77_ArchEmitSubRef(i8 /* subr */);
	void f94_ParseWsRef(void);
	void f78_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f92_CheckSubExists(i8 /* subr */);
	void f78_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	void f94_ParseWsRef(void);
	void f67_E_u16(i2 /* value */);

// WriteCharacterFromStream workspace at ws+912 length ws+56
void f93_WriteCharacterFromStream(i1 p1968 /* c */) {
	*(i1*)(intptr_t)(ws+912) = p1968; /* c */

	i8 v1969 = (i8)(intptr_t)(ws+736);
	i1 v1970 = *(i1*)(intptr_t)v1969;
	i1 v1971 = (i1)+0;
	if (v1970==v1971) goto c02_0196; else goto c02_0197;

c02_0196:;

	i8 v1972 = (i8)(intptr_t)(ws+912);
	i1 v1973 = *(i1*)(intptr_t)v1972;

	if (v1973 != +3) goto c02_0199;

	i1 v1974 = (i1)+99;
	i8 v1975 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1975)(v1974);

	i8 v1976 = (i8)(intptr_t)(ws+48);
	i8 v1977 = *(i8*)(intptr_t)v1976;
	i8 v1978 = *(i8*)(intptr_t)v1977;
	i8 v1979 = v1978+(+680);
	i2 v1980 = *(i2*)(intptr_t)v1979;
	i1 v1981 = v1980;
	i8 v1982 = (i8)(intptr_t)(f71_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v1982)(v1981);

	i1 v1983 = (i1)+95;
	i8 v1984 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1984)(v1983);

	goto endsub;

c02_0199:;

	if (v1973 != +4) goto c02_019a;

	i8 v1985 = (i8)(intptr_t)(ws+48);
	i8 v1986 = *(i8*)(intptr_t)v1985;
	i8 v1987 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1987)(v1986);

	goto endsub;

c02_019a:;

	if (v1973 != +1) goto c02_019b;

	i1 v1988 = (i1)+3;
	i8 v1989 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1989 = v1988;

	goto c02_0198;

c02_019b:;

	if (v1973 != +2) goto c02_019c;

	i1 v1990 = (i1)+6;
	i8 v1991 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1991 = v1990;

	goto c02_0198;

c02_019c:;

	if (v1973 != +5) goto c02_019d;

	i1 v1992 = (i1)+4;
	i8 v1993 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1993 = v1992;

	goto c02_0198;

c02_019d:;

	if (v1973 != +6) goto c02_019e;

	i1 v1994 = (i1)+6;
	i8 v1995 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1995 = v1994;

	goto c02_0198;

c02_019e:;

	if (v1973 != +10) goto c02_019f;

	i8 v1996 = (i8)(intptr_t)(f76_E_nl);

	((void(*)(void))(intptr_t)v1996)();

	goto endsub;

c02_019f:;

	i8 v1997 = (i8)(intptr_t)(ws+912);
	i1 v1998 = *(i1*)(intptr_t)v1997;
	i8 v1999 = (i8)(intptr_t)(f64_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1999)(v1998);

	goto endsub;

c02_0198:;


	i8 v2000 = (i8)(intptr_t)(ws+912);
	i1 v2001 = *(i1*)(intptr_t)v2000;
	i8 v2002 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v2002 = v2001;

	i1 v2003 = (i1)+1;
	i8 v2004 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v2004 = v2003;

	goto c02_0193;

c02_0197:;

	i8 v2005 = (i8)(intptr_t)(ws+912);
	i1 v2006 = *(i1*)(intptr_t)v2005;
	i8 v2007 = (i8)(intptr_t)(ws+728);
	i8 v2008 = (i8)(intptr_t)(ws+737);
	i1 v2009 = *(i1*)(intptr_t)v2008;
	i8 v2010 = v2009;
	i8 v2011 = v2007+v2010;
	*(i1*)(intptr_t)v2011 = v2006;

	i8 v2012 = (i8)(intptr_t)(ws+737);
	i1 v2013 = *(i1*)(intptr_t)v2012;
	i1 v2014 = v2013+(+1);
	i8 v2015 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v2015 = v2014;

	i8 v2016 = (i8)(intptr_t)(ws+737);
	i1 v2017 = *(i1*)(intptr_t)v2016;
	i8 v2018 = (i8)(intptr_t)(ws+736);
	i1 v2019 = *(i1*)(intptr_t)v2018;
	if (v2017==v2019) goto c02_01a4; else goto c02_01a3;

c02_01a3:;

	goto endsub;

c02_01a4:;

c02_01a0:;


	i8 v2065 = (i8)(intptr_t)(ws+728);
	i1 v2066 = *(i1*)(intptr_t)v2065;

	if (v2066 != +1) goto c02_01a6;

	i8 v2067 = (i8)(intptr_t)(ws+729);
	i1 v2068 = *(i1*)(intptr_t)v2067;
	i2 v2069 = v2068;
	i8 v2070 = (i8)(intptr_t)(ws+730);
	i1 v2071 = *(i1*)(intptr_t)v2070;
	i2 v2072 = v2071;
	i1 v2073 = (i1)+8;
	i2 v2074 = ((i2)v2072)<<v2073;
	i2 v2075 = v2069|v2074;
	i8 v2076 = (i8)(intptr_t)(ws+914);
	*(i2*)(intptr_t)v2076 = v2075;

	i8 v2077 = (i8)(intptr_t)(ws+48);
	i8 v2078 = *(i8*)(intptr_t)v2077;
	i8 v2079 = *(i8*)(intptr_t)v2078;
	i8 v2080 = (i8)(intptr_t)(ws+914);
	i2 v2081 = *(i2*)(intptr_t)v2080;
	i8 v2082 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v2083;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v2082)(&v2083, v2081, v2079);

	i8 v2084 = (i8)(intptr_t)(ws+936);
	*(i8*)(intptr_t)v2084 = v2083;

	i8 v2085 = (i8)(intptr_t)(ws+936);
	i8 v2086 = *(i8*)(intptr_t)v2085;
	i8 v2087 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2087 = v2086;

	i8 v2088 = (i8)(intptr_t)(ws+920);
	i8 v2089 = *(i8*)(intptr_t)v2088;
	i8 v2090 = (i8)(intptr_t)(f87_Deref);
	i8 v2091;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2090)(&v2091, v2089);

	i8 v2092 = (i8)(intptr_t)(ws+944);
	*(i8*)(intptr_t)v2092 = v2091;

	i8 v2093 = (i8)(intptr_t)(ws+944);
	i8 v2094 = *(i8*)(intptr_t)v2093;
	i8 v2095 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2095 = v2094;

	i8 v2096 = (i8)(intptr_t)(ws+920);
	i8 v2097 = *(i8*)(intptr_t)v2096;
	i8 v2098 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v2098)(v2097);

	i8 v2099 = (i8)(intptr_t)(ws+920);
	i8 v2100 = *(i8*)(intptr_t)v2099;
	i8 v2101 = (i8)(intptr_t)(f77_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v2101)(v2100);

	goto c02_01a5;

c02_01a6:;

	if (v2066 != +2) goto c02_01a7;

	i8 v2102 = (i8)(intptr_t)(f94_ParseWsRef);

	((void(*)(void))(intptr_t)v2102)();

	i8 v2103 = (i8)(intptr_t)(ws+928);
	i1 v2104 = *(i1*)(intptr_t)v2103;
	i8 v2105 = (i8)(intptr_t)(ws+920);
	i8 v2106 = *(i8*)(intptr_t)v2105;
	i8 v2107 = v2106+(+176);
	i8 v2108 = (i8)(intptr_t)(ws+928);
	i1 v2109 = *(i1*)(intptr_t)v2108;
	i8 v2110 = v2109;
	i1 v2111 = (i1)+1;
	i8 v2112 = ((i8)v2110)<<v2111;
	i8 v2113 = v2107+v2112;
	i2 v2114 = *(i2*)(intptr_t)v2113;
	i8 v2115 = (i8)(intptr_t)(ws+930);
	i2 v2116 = *(i2*)(intptr_t)v2115;
	i2 v2117 = v2114+v2116;
	i8 v2118 = (i8)(intptr_t)(f78_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v2118)(v2117, v2104);

	goto c02_01a5;

c02_01a7:;

	if (v2066 != +5) goto c02_01a8;

	i8 v2119 = (i8)(intptr_t)(ws+729);
	i1 v2120 = *(i1*)(intptr_t)v2119;
	i2 v2121 = v2120;
	i8 v2122 = (i8)(intptr_t)(ws+730);
	i1 v2123 = *(i1*)(intptr_t)v2122;
	i2 v2124 = v2123;
	i1 v2125 = (i1)+8;
	i2 v2126 = ((i2)v2124)<<v2125;
	i2 v2127 = v2121|v2126;
	i8 v2128 = (i8)(intptr_t)(ws+914);
	*(i2*)(intptr_t)v2128 = v2127;

	i8 v2129 = (i8)(intptr_t)(ws+731);
	i1 v2130 = *(i1*)(intptr_t)v2129;
	i8 v2131 = (i8)(intptr_t)(ws+928);
	*(i1*)(intptr_t)v2131 = v2130;

	i8 v2132 = (i8)(intptr_t)(ws+48);
	i8 v2133 = *(i8*)(intptr_t)v2132;
	i8 v2134 = *(i8*)(intptr_t)v2133;
	i8 v2135 = (i8)(intptr_t)(ws+914);
	i2 v2136 = *(i2*)(intptr_t)v2135;
	i8 v2137 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v2138;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v2137)(&v2138, v2136, v2134);

	i8 v2139 = (i8)(intptr_t)(ws+952);
	*(i8*)(intptr_t)v2139 = v2138;

	i8 v2140 = (i8)(intptr_t)(ws+952);
	i8 v2141 = *(i8*)(intptr_t)v2140;
	i8 v2142 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2142 = v2141;

	i8 v2143 = (i8)(intptr_t)(ws+920);
	i8 v2144 = *(i8*)(intptr_t)v2143;
	i8 v2145 = (i8)(intptr_t)(f87_Deref);
	i8 v2146;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2145)(&v2146, v2144);

	i8 v2147 = (i8)(intptr_t)(ws+960);
	*(i8*)(intptr_t)v2147 = v2146;

	i8 v2148 = (i8)(intptr_t)(ws+960);
	i8 v2149 = *(i8*)(intptr_t)v2148;
	i8 v2150 = (i8)(intptr_t)(ws+920);
	*(i8*)(intptr_t)v2150 = v2149;

	i8 v2151 = (i8)(intptr_t)(ws+920);
	i8 v2152 = *(i8*)(intptr_t)v2151;
	i8 v2153 = (i8)(intptr_t)(f92_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v2153)(v2152);

	i8 v2154 = (i8)(intptr_t)(ws+928);
	i1 v2155 = *(i1*)(intptr_t)v2154;
	i8 v2156 = (i8)(intptr_t)(ws+920);
	i8 v2157 = *(i8*)(intptr_t)v2156;
	i8 v2158 = v2157+(+168);
	i8 v2159 = (i8)(intptr_t)(ws+928);
	i1 v2160 = *(i1*)(intptr_t)v2159;
	i8 v2161 = v2160;
	i1 v2162 = (i1)+1;
	i8 v2163 = ((i8)v2161)<<v2162;
	i8 v2164 = v2158+v2163;
	i2 v2165 = *(i2*)(intptr_t)v2164;
	i8 v2166 = (i8)(intptr_t)(f78_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v2166)(v2165, v2155);

	goto c02_01a5;

c02_01a8:;

	if (v2066 != +6) goto c02_01a9;

	i8 v2167 = (i8)(intptr_t)(f94_ParseWsRef);

	((void(*)(void))(intptr_t)v2167)();

	i8 v2168 = (i8)(intptr_t)(ws+920);
	i8 v2169 = *(i8*)(intptr_t)v2168;
	i8 v2170 = v2169+(+176);
	i8 v2171 = (i8)(intptr_t)(ws+928);
	i1 v2172 = *(i1*)(intptr_t)v2171;
	i8 v2173 = v2172;
	i1 v2174 = (i1)+1;
	i8 v2175 = ((i8)v2173)<<v2174;
	i8 v2176 = v2170+v2175;
	i2 v2177 = *(i2*)(intptr_t)v2176;
	i8 v2178 = (i8)(intptr_t)(ws+930);
	i2 v2179 = *(i2*)(intptr_t)v2178;
	i2 v2180 = v2177+v2179;
	i8 v2181 = (i8)(intptr_t)(f67_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v2181)(v2180);

c02_01a9:;

c02_01a5:;


	i1 v2182 = (i1)+0;
	i8 v2183 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v2183 = v2182;

c02_0193:;

endsub:;
}
	void f93_WriteCharacterFromStream(i1 /* c */);
	void f34_Free(i8 /* block */);

// FlushStream workspace at ws+888 length ws+24
void f95_FlushStream(void) {

	i8 v2184 = (i8)(intptr_t)(ws+720);
	i8 v2185 = *(i8*)(intptr_t)v2184;
	i8 v2186 = *(i8*)(intptr_t)v2185;
	i8 v2187 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v2187 = v2186;

c02_01aa:;

	i8 v2188 = (i8)(intptr_t)(ws+888);
	i8 v2189 = *(i8*)(intptr_t)v2188;
	i8 v2190 = (i8)+0;
	if (v2189==v2190) goto c02_01af; else goto c02_01ae;

c02_01ae:;

	i1 v2191 = (i1)+0;
	i8 v2192 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v2192 = v2191;

c02_01b0:;

	i8 v2193 = (i8)(intptr_t)(ws+896);
	i1 v2194 = *(i1*)(intptr_t)v2193;
	i8 v2195 = (i8)(intptr_t)(ws+888);
	i8 v2196 = *(i8*)(intptr_t)v2195;
	i8 v2197 = v2196+(+255);
	i1 v2198 = *(i1*)(intptr_t)v2197;
	if (v2194==v2198) goto c02_01b5; else goto c02_01b4;

c02_01b4:;

	i8 v2199 = (i8)(intptr_t)(ws+888);
	i8 v2200 = *(i8*)(intptr_t)v2199;
	i8 v2201 = (i8)(intptr_t)(ws+896);
	i1 v2202 = *(i1*)(intptr_t)v2201;
	i8 v2203 = v2202;
	i8 v2204 = v2200+v2203;
	i1 v2205 = *(i1*)(intptr_t)v2204;
	i8 v2206 = (i8)(intptr_t)(f93_WriteCharacterFromStream);

	((void(*)(i1 /* c */))(intptr_t)v2206)(v2205);

	i8 v2207 = (i8)(intptr_t)(ws+896);
	i1 v2208 = *(i1*)(intptr_t)v2207;
	i1 v2209 = v2208+(+1);
	i8 v2210 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v2210 = v2209;

	goto c02_01b0;

c02_01b5:;

	i8 v2211 = (i8)(intptr_t)(ws+888);
	i8 v2212 = *(i8*)(intptr_t)v2211;
	i8 v2213 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v2213 = v2212;

	i8 v2214 = (i8)(intptr_t)(ws+888);
	i8 v2215 = *(i8*)(intptr_t)v2214;
	i8 v2216 = v2215+(+256);
	i8 v2217 = *(i8*)(intptr_t)v2216;
	i8 v2218 = (i8)(intptr_t)(ws+888);
	*(i8*)(intptr_t)v2218 = v2217;

	i8 v2219 = (i8)(intptr_t)(ws+904);
	i8 v2220 = *(i8*)(intptr_t)v2219;
	i8 v2221 = (i8)(intptr_t)(f34_Free);

	((void(*)(i8 /* block */))(intptr_t)v2221)(v2220);

	goto c02_01aa;

c02_01af:;

	i8 v2222 = (i8)+0;
	i8 v2223 = (i8)(intptr_t)(ws+720);
	i8 v2224 = *(i8*)(intptr_t)v2223;
	*(i8*)(intptr_t)v2224 = v2222;

	i8 v2225 = (i8)+0;
	i8 v2226 = (i8)(intptr_t)(ws+720);
	i8 v2227 = *(i8*)(intptr_t)v2226;
	i8 v2228 = v2227+(+8);
	*(i8*)(intptr_t)v2228 = v2225;

endsub:;
}
	void f33_Alloc(i8* /* block */, i8 /* length */);

// WriteStream workspace at ws+896 length ws+24
void f96_WriteStream(i1 p2229 /* c */) {
	*(i1*)(intptr_t)(ws+896) = p2229; /* c */

	i8 v2230 = (i8)(intptr_t)(ws+720);
	i8 v2231 = *(i8*)(intptr_t)v2230;
	i8 v2232 = v2231+(+8);
	i8 v2233 = *(i8*)(intptr_t)v2232;
	i8 v2234 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v2234 = v2233;

	i8 v2235 = (i8)(intptr_t)(ws+904);
	i8 v2236 = *(i8*)(intptr_t)v2235;
	i8 v2237 = v2236+(+255);
	i1 v2238 = *(i1*)(intptr_t)v2237;
	i1 v2239 = (i1)+255;
	if (v2238==v2239) goto c02_01b9; else goto c02_01ba;

c02_01b9:;

	i8 v2240 = (i8)+264;
	i8 v2241 = (i8)(intptr_t)(f33_Alloc);
	i8 v2242;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v2241)(&v2242, v2240);

	i8 v2243 = (i8)(intptr_t)(ws+912);
	*(i8*)(intptr_t)v2243 = v2242;

	i8 v2244 = (i8)(intptr_t)(ws+912);
	i8 v2245 = *(i8*)(intptr_t)v2244;
	i8 v2246 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v2246 = v2245;

	i8 v2247 = (i8)(intptr_t)(ws+904);
	i8 v2248 = *(i8*)(intptr_t)v2247;
	i8 v2249 = (i8)(intptr_t)(ws+720);
	i8 v2250 = *(i8*)(intptr_t)v2249;
	i8 v2251 = v2250+(+8);
	i8 v2252 = *(i8*)(intptr_t)v2251;
	i8 v2253 = v2252+(+256);
	*(i8*)(intptr_t)v2253 = v2248;

	i8 v2254 = (i8)(intptr_t)(ws+904);
	i8 v2255 = *(i8*)(intptr_t)v2254;
	i8 v2256 = (i8)(intptr_t)(ws+720);
	i8 v2257 = *(i8*)(intptr_t)v2256;
	i8 v2258 = v2257+(+8);
	*(i8*)(intptr_t)v2258 = v2255;

c02_01ba:;

c02_01b6:;

	i8 v2259 = (i8)(intptr_t)(ws+896);
	i1 v2260 = *(i1*)(intptr_t)v2259;
	i8 v2261 = (i8)(intptr_t)(ws+904);
	i8 v2262 = *(i8*)(intptr_t)v2261;
	i8 v2263 = (i8)(intptr_t)(ws+904);
	i8 v2264 = *(i8*)(intptr_t)v2263;
	i8 v2265 = v2264+(+255);
	i1 v2266 = *(i1*)(intptr_t)v2265;
	i8 v2267 = v2266;
	i8 v2268 = v2262+v2267;
	*(i1*)(intptr_t)v2268 = v2260;

	i8 v2269 = (i8)(intptr_t)(ws+904);
	i8 v2270 = *(i8*)(intptr_t)v2269;
	i8 v2271 = v2270+(+255);
	i1 v2272 = *(i1*)(intptr_t)v2271;
	i1 v2273 = v2272+(+1);
	i8 v2274 = (i8)(intptr_t)(ws+904);
	i8 v2275 = *(i8*)(intptr_t)v2274;
	i8 v2276 = v2275+(+255);
	*(i1*)(intptr_t)v2276 = v2273;

endsub:;
}
const i1 c02_s0018[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f6_ExitWithError(void);

// MalformedError workspace at ws+904 length ws+8
void f98_MalformedError(i8 p2278 /* s */) {
	*(i8*)(intptr_t)(ws+904) = p2278; /* s */

	i8 v2279 = (i8)(intptr_t)c02_s0018;
	i8 v2280 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2280)(v2279);

	i8 v2281 = (i8)(intptr_t)(ws+904);
	i8 v2282 = *(i8*)(intptr_t)v2281;
	i8 v2283 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2283)(v2282);

	i8 v2284 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2284)();

	i8 v2285 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2285)();

endsub:;
}
const i1 c02_s0019[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };
	void f98_MalformedError(i8 /* s */);

// UnexpectedEndOfChunk workspace at ws+904 length ws+0
void f99_UnexpectedEndOfChunk(void) {

	i8 v2286 = (i8)(intptr_t)c02_s0019;
	i8 v2287 = (i8)(intptr_t)(f98_MalformedError);

	((void(*)(i8 /* s */))(intptr_t)v2287)(v2286);

endsub:;
}
	void f99_UnexpectedEndOfChunk(void);
	void f81_read_bin1(i1* /* c */, i8 /* fcb */);

// ReadB1 workspace at ws+896 length ws+2
void f100_ReadB1(i1* p2288 /* result */) {

	i8 v2289 = (i8)(intptr_t)(ws+852);
	i2 v2290 = *(i2*)(intptr_t)v2289;
	i2 v2291 = (i2)+1;
	if (v2290<v2291) goto c02_01be; else goto c02_01bf;

c02_01be:;

	i8 v2292 = (i8)(intptr_t)(f99_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v2292)();

c02_01bf:;

c02_01bb:;

	i8 v2293 = (i8)(intptr_t)(ws+852);
	i2 v2294 = *(i2*)(intptr_t)v2293;
	i2 v2295 = v2294+(-1);
	i8 v2296 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2296 = v2295;

	i8 v2297 = (i8)(intptr_t)(ws+840);
	i8 v2298 = *(i8*)(intptr_t)v2297;
	i8 v2299 = (i8)(intptr_t)(f81_read_bin1);
	i1 v2300;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v2299)(&v2300, v2298);

	i8 v2301 = (i8)(intptr_t)(ws+897);
	*(i1*)(intptr_t)v2301 = v2300;

	i8 v2302 = (i8)(intptr_t)(ws+897);
	i1 v2303 = *(i1*)(intptr_t)v2302;
	i8 v2304 = (i8)(intptr_t)(ws+896);
	*(i1*)(intptr_t)v2304 = v2303;

endsub:;
	*p2288 = *(i1*)(intptr_t)(ws+896);
}
	void f99_UnexpectedEndOfChunk(void);
	void f82_read_bin2(i2* /* val */, i8 /* fcb */);

// ReadB2 workspace at ws+888 length ws+4
void f101_ReadB2(i2* p2305 /* result */) {

	i8 v2306 = (i8)(intptr_t)(ws+852);
	i2 v2307 = *(i2*)(intptr_t)v2306;
	i2 v2308 = (i2)+2;
	if (v2307<v2308) goto c02_01c3; else goto c02_01c4;

c02_01c3:;

	i8 v2309 = (i8)(intptr_t)(f99_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v2309)();

c02_01c4:;

c02_01c0:;

	i8 v2310 = (i8)(intptr_t)(ws+852);
	i2 v2311 = *(i2*)(intptr_t)v2310;
	i2 v2312 = v2311+(-2);
	i8 v2313 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2313 = v2312;

	i8 v2314 = (i8)(intptr_t)(ws+840);
	i8 v2315 = *(i8*)(intptr_t)v2314;
	i8 v2316 = (i8)(intptr_t)(f82_read_bin2);
	i2 v2317;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v2316)(&v2317, v2315);

	i8 v2318 = (i8)(intptr_t)(ws+890);
	*(i2*)(intptr_t)v2318 = v2317;

	i8 v2319 = (i8)(intptr_t)(ws+890);
	i2 v2320 = *(i2*)(intptr_t)v2319;
	i8 v2321 = (i8)(intptr_t)(ws+888);
	*(i2*)(intptr_t)v2321 = v2320;

endsub:;
	*p2305 = *(i2*)(intptr_t)(ws+888);
}
	void f100_ReadB1(i1* /* result */);
	void f96_WriteStream(i1 /* c */);

// CopySourceChunk workspace at ws+888 length ws+1
void f102_CopySourceChunk(void) {

c02_01c5:;

	i8 v2322 = (i8)(intptr_t)(ws+852);
	i2 v2323 = *(i2*)(intptr_t)v2322;
	i2 v2324 = (i2)+0;
	if (v2323==v2324) goto c02_01ca; else goto c02_01c9;

c02_01c9:;

	i8 v2325 = (i8)(intptr_t)(f100_ReadB1);
	i1 v2326;

	((void(*)(i1* /* result */))(intptr_t)v2325)(&v2326);

	i8 v2327 = (i8)(intptr_t)(ws+888);
	*(i1*)(intptr_t)v2327 = v2326;

	i8 v2328 = (i8)(intptr_t)(ws+888);
	i1 v2329 = *(i1*)(intptr_t)v2328;
	i8 v2330 = (i8)(intptr_t)(ws+850);
	*(i1*)(intptr_t)v2330 = v2329;

	i8 v2331 = (i8)(intptr_t)(ws+850);
	i1 v2332 = *(i1*)(intptr_t)v2331;
	i8 v2333 = (i8)(intptr_t)(f96_WriteStream);

	((void(*)(i1 /* c */))(intptr_t)v2333)(v2332);

	goto c02_01c5;

c02_01ca:;

endsub:;
}
	void f50_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f100_ReadB1(i1* /* result */);
	void f101_ReadB2(i2* /* result */);
	void f100_ReadB1(i1* /* result */);
	void f101_ReadB2(i2* /* result */);
	void f86_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f91_SetStream(i1 /* sid */);
	void f102_CopySourceChunk(void);
	void f95_FlushStream(void);

// WriteSubroutinesToOutputFile workspace at ws+840 length ws+48
void f97_WriteSubroutinesToOutputFile(i8 p2277 /* coo */) {
	*(i8*)(intptr_t)(ws+840) = p2277; /* coo */






	i4 v2334 = (i4)+0;
	i8 v2335 = (i8)(intptr_t)(ws+856);
	*(i4*)(intptr_t)v2335 = v2334;

c02_01cb:;

	i2 v2336 = (i2)+255;
	i8 v2337 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2337 = v2336;

	i8 v2338 = (i8)(intptr_t)(ws+840);
	i8 v2339 = *(i8*)(intptr_t)v2338;
	i8 v2340 = (i8)(intptr_t)(ws+856);
	i4 v2341 = *(i4*)(intptr_t)v2340;
	i8 v2342 = (i8)(intptr_t)(f50_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v2342)(v2341, v2339);

	i8 v2343 = (i8)(intptr_t)(f100_ReadB1);
	i1 v2344;

	((void(*)(i1* /* result */))(intptr_t)v2343)(&v2344);

	i8 v2345 = (i8)(intptr_t)(ws+860);
	*(i1*)(intptr_t)v2345 = v2344;

	i8 v2346 = (i8)(intptr_t)(ws+860);
	i1 v2347 = *(i1*)(intptr_t)v2346;
	i8 v2348 = (i8)(intptr_t)(ws+850);
	*(i1*)(intptr_t)v2348 = v2347;

	i8 v2349 = (i8)(intptr_t)(f101_ReadB2);
	i2 v2350;

	((void(*)(i2* /* result */))(intptr_t)v2349)(&v2350);

	i8 v2351 = (i8)(intptr_t)(ws+862);
	*(i2*)(intptr_t)v2351 = v2350;

	i8 v2352 = (i8)(intptr_t)(ws+862);
	i2 v2353 = *(i2*)(intptr_t)v2352;
	i8 v2354 = (i8)(intptr_t)(ws+852);
	*(i2*)(intptr_t)v2354 = v2353;

	i8 v2355 = (i8)(intptr_t)(ws+856);
	i4 v2356 = *(i4*)(intptr_t)v2355;
	i8 v2357 = (i8)(intptr_t)(ws+852);
	i2 v2358 = *(i2*)(intptr_t)v2357;
	i4 v2359 = v2358;
	i4 v2360 = v2356+v2359;
	i4 v2361 = v2360+(+3);
	i8 v2362 = (i8)(intptr_t)(ws+856);
	*(i4*)(intptr_t)v2362 = v2361;

	i8 v2363 = (i8)(intptr_t)(ws+850);
	i1 v2364 = *(i1*)(intptr_t)v2363;
	i1 v2365 = (i1)+69;
	if (v2364==v2365) goto c02_01d0; else goto c02_01d1;

c02_01d0:;

	goto c02_01cc;

c02_01d1:;

	i8 v2366 = (i8)(intptr_t)(ws+850);
	i1 v2367 = *(i1*)(intptr_t)v2366;
	i1 v2368 = (i1)+70;
	if (v2367==v2368) goto c02_01d4; else goto c02_01d5;

c02_01d4:;

	i8 v2369 = (i8)(intptr_t)(f100_ReadB1);
	i1 v2370;

	((void(*)(i1* /* result */))(intptr_t)v2369)(&v2370);

	i8 v2371 = (i8)(intptr_t)(ws+864);
	*(i1*)(intptr_t)v2371 = v2370;

	i8 v2372 = (i8)(intptr_t)(ws+864);
	i1 v2373 = *(i1*)(intptr_t)v2372;
	i8 v2374 = (i8)(intptr_t)(ws+854);
	*(i1*)(intptr_t)v2374 = v2373;

	i8 v2375 = (i8)(intptr_t)(f101_ReadB2);
	i2 v2376;

	((void(*)(i2* /* result */))(intptr_t)v2375)(&v2376);

	i8 v2377 = (i8)(intptr_t)(ws+866);
	*(i2*)(intptr_t)v2377 = v2376;

	i8 v2378 = (i8)(intptr_t)(ws+866);
	i2 v2379 = *(i2*)(intptr_t)v2378;
	i8 v2380 = (i8)(intptr_t)(ws+848);
	*(i2*)(intptr_t)v2380 = v2379;

	i8 v2381 = (i8)(intptr_t)(ws+840);
	i8 v2382 = *(i8*)(intptr_t)v2381;
	i8 v2383 = (i8)(intptr_t)(ws+848);
	i2 v2384 = *(i2*)(intptr_t)v2383;
	i8 v2385 = (i8)(intptr_t)(f86_FindOrCreateSub);
	i8 v2386;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v2385)(&v2386, v2384, v2382);

	i8 v2387 = (i8)(intptr_t)(ws+872);
	*(i8*)(intptr_t)v2387 = v2386;

	i8 v2388 = (i8)(intptr_t)(ws+872);
	i8 v2389 = *(i8*)(intptr_t)v2388;
	i8 v2390 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2390 = v2389;

	i8 v2391 = (i8)(intptr_t)(ws+48);
	i8 v2392 = *(i8*)(intptr_t)v2391;
	i8 v2393 = (i8)(intptr_t)(f87_Deref);
	i8 v2394;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2393)(&v2394, v2392);

	i8 v2395 = (i8)(intptr_t)(ws+880);
	*(i8*)(intptr_t)v2395 = v2394;

	i8 v2396 = (i8)(intptr_t)(ws+880);
	i8 v2397 = *(i8*)(intptr_t)v2396;
	i8 v2398 = (i8)(intptr_t)(ws+48);
	*(i8*)(intptr_t)v2398 = v2397;

	i8 v2399 = (i8)(intptr_t)(ws+48);
	i8 v2400 = *(i8*)(intptr_t)v2399;
	i8 v2401 = v2400+(+188);
	i1 v2402 = *(i1*)(intptr_t)v2401;
	i1 v2403 = v2402&(+1);
	i1 v2404 = (i1)+0;
	if (v2403==v2404) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v2405 = (i8)(intptr_t)(ws+854);
	i1 v2406 = *(i1*)(intptr_t)v2405;
	i1 v2407 = v2406&(+127);
	i8 v2408 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2408)(v2407);

	i8 v2409 = (i8)(intptr_t)(f102_CopySourceChunk);

	((void(*)(void))(intptr_t)v2409)();

	i8 v2410 = (i8)(intptr_t)(ws+854);
	i1 v2411 = *(i1*)(intptr_t)v2410;
	i1 v2412 = v2411&(+128);
	i1 v2413 = (i1)+0;
	if (v2412==v2413) goto c02_01df; else goto c02_01de;

c02_01de:;

	i8 v2414 = (i8)(intptr_t)(f95_FlushStream);

	((void(*)(void))(intptr_t)v2414)();

c02_01df:;

c02_01db:;

c02_01da:;

c02_01d6:;

c02_01d5:;

c02_01cd:;

	goto c02_01cb;

c02_01cc:;

endsub:;
}
const i1 c02_s001a[] = { 0x43,0x6f,0x70,0x79,0x69,0x6e,0x67,0x20,0x66,0x72,0x6f,0x6d,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f97_WriteSubroutinesToOutputFile(i8 /* coo */);

// WriteAllSubroutinesToOutputFile workspace at ws+832 length ws+8
void f103_WriteAllSubroutinesToOutputFile(i8 p2415 /* coos */) {
	*(i8*)(intptr_t)(ws+832) = p2415; /* coos */

c02_01e0:;

	i8 v2416 = (i8)(intptr_t)(ws+832);
	i8 v2417 = *(i8*)(intptr_t)v2416;
	i8 v2418 = (i8)+0;
	if (v2417==v2418) goto c02_01e5; else goto c02_01e4;

c02_01e4:;

	i8 v2419 = (i8)(intptr_t)c02_s001a;
	i8 v2420 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2420)(v2419);

	i8 v2421 = (i8)(intptr_t)(ws+832);
	i8 v2422 = *(i8*)(intptr_t)v2421;
	i8 v2423 = v2422+(+528);
	i8 v2424 = *(i8*)(intptr_t)v2423;
	i8 v2425 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2425)(v2424);

	i8 v2426 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2426)();

	i8 v2427 = (i8)(intptr_t)(ws+832);
	i8 v2428 = *(i8*)(intptr_t)v2427;
	i8 v2429 = (i8)(intptr_t)(f97_WriteSubroutinesToOutputFile);

	((void(*)(i8 /* coo */))(intptr_t)v2429)(v2428);

	i8 v2430 = (i8)(intptr_t)(ws+832);
	i8 v2431 = *(i8*)(intptr_t)v2430;
	i8 v2432 = v2431+(+672);
	i8 v2433 = *(i8*)(intptr_t)v2432;
	i8 v2434 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2434 = v2433;

	goto c02_01e0;

c02_01e5:;

endsub:;
}
const i1 c02_s001b[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
	void f62_SimpleError(i8 /* s */);
const i1 c02_s001c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
const i1 c02_s001d[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s001e[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };
	void f62_SimpleError(i8 /* s */);

// ResolveExternals workspace at ws+832 length ws+24
void f104_ResolveExternals(void) {

	i1 v2435 = (i1)+0;
	i8 v2436 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v2436 = v2435;

	i8 v2437 = (i8)(intptr_t)(ws+32);
	i8 v2438 = *(i8*)(intptr_t)v2437;
	i8 v2439 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2439 = v2438;

c02_01e6:;

	i8 v2440 = (i8)(intptr_t)(ws+848);
	i8 v2441 = *(i8*)(intptr_t)v2440;
	i8 v2442 = (i8)+0;
	if (v2441==v2442) goto c02_01eb; else goto c02_01ea;

c02_01ea:;

	i8 v2443 = (i8)(intptr_t)(ws+848);
	i8 v2444 = *(i8*)(intptr_t)v2443;
	i8 v2445 = v2444+(+188);
	i1 v2446 = *(i1*)(intptr_t)v2445;
	i1 v2447 = v2446&(+2);
	i1 v2448 = (i1)+0;
	if (v2447==v2448) goto c02_01f0; else goto c02_01ef;

c02_01ef:;

	i8 v2449 = (i8)(intptr_t)(ws+848);
	i8 v2450 = *(i8*)(intptr_t)v2449;
	i8 v2451 = v2450+(+160);
	i8 v2452 = *(i8*)(intptr_t)v2451;
	i8 v2453 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2453 = v2452;

	i8 v2454 = (i8)(intptr_t)(ws+832);
	i8 v2455 = *(i8*)(intptr_t)v2454;
	i8 v2456 = (i8)+0;
	if (v2455==v2456) goto c02_01f5; else goto c02_01f4;

c02_01f4:;

	i8 v2457 = (i8)(intptr_t)(ws+832);
	i8 v2458 = *(i8*)(intptr_t)v2457;
	i8 v2459 = v2458+(+16);
	i8 v2460 = *(i8*)(intptr_t)v2459;
	i8 v2461 = (i8)+0;
	if (v2460==v2461) goto c02_01fc; else goto c02_01fd;

c02_01fd:;

	i8 v2462 = (i8)(intptr_t)(ws+832);
	i8 v2463 = *(i8*)(intptr_t)v2462;
	i8 v2464 = v2463+(+16);
	i8 v2465 = *(i8*)(intptr_t)v2464;
	i8 v2466 = (i8)(intptr_t)(ws+848);
	i8 v2467 = *(i8*)(intptr_t)v2466;
	if (v2465==v2467) goto c02_01fc; else goto c02_01fb;

c02_01fb:;

	i8 v2468 = (i8)(intptr_t)c02_s001b;
	i8 v2469 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2469)(v2468);

c02_01fc:;

c02_01f6:;

	i8 v2470 = (i8)(intptr_t)(ws+848);
	i8 v2471 = *(i8*)(intptr_t)v2470;
	i8 v2472 = (i8)(intptr_t)(ws+832);
	i8 v2473 = *(i8*)(intptr_t)v2472;
	i8 v2474 = v2473+(+16);
	*(i8*)(intptr_t)v2474 = v2471;

c02_01f5:;

c02_01f1:;

c02_01f0:;

c02_01ec:;

	i8 v2475 = (i8)(intptr_t)(ws+848);
	i8 v2476 = *(i8*)(intptr_t)v2475;
	i8 v2477 = v2476+(+8);
	i8 v2478 = *(i8*)(intptr_t)v2477;
	i8 v2479 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2479 = v2478;

	goto c02_01e6;

c02_01eb:;

	i8 v2480 = (i8)(intptr_t)(ws+32);
	i8 v2481 = *(i8*)(intptr_t)v2480;
	i8 v2482 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2482 = v2481;

c02_01fe:;

	i8 v2483 = (i8)(intptr_t)(ws+848);
	i8 v2484 = *(i8*)(intptr_t)v2483;
	i8 v2485 = (i8)+0;
	if (v2484==v2485) goto c02_0203; else goto c02_0202;

c02_0202:;

	i8 v2486 = (i8)(intptr_t)(ws+848);
	i8 v2487 = *(i8*)(intptr_t)v2486;
	i8 v2488 = v2487+(+160);
	i8 v2489 = *(i8*)(intptr_t)v2488;
	i8 v2490 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2490 = v2489;

	i8 v2491 = (i8)(intptr_t)(ws+832);
	i8 v2492 = *(i8*)(intptr_t)v2491;
	i8 v2493 = (i8)+0;
	if (v2492==v2493) goto c02_020a; else goto c02_020b;

c02_020b:;

	i8 v2494 = (i8)(intptr_t)(ws+832);
	i8 v2495 = *(i8*)(intptr_t)v2494;
	i8 v2496 = v2495+(+16);
	i8 v2497 = *(i8*)(intptr_t)v2496;
	i8 v2498 = (i8)+0;
	if (v2497==v2498) goto c02_0209; else goto c02_020a;

c02_0209:;

	i8 v2499 = (i8)(intptr_t)c02_s001c;
	i8 v2500 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2500)(v2499);

	i8 v2501 = (i8)(intptr_t)(ws+832);
	i8 v2502 = *(i8*)(intptr_t)v2501;
	i8 v2503 = v2502+(+8);
	i8 v2504 = *(i8*)(intptr_t)v2503;
	i8 v2505 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2505)(v2504);

	i8 v2506 = (i8)(intptr_t)c02_s001d;
	i8 v2507 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2507)(v2506);

	i1 v2508 = (i1)+1;
	i8 v2509 = (i8)(intptr_t)(ws+840);
	*(i1*)(intptr_t)v2509 = v2508;

c02_020a:;

c02_0204:;

	i8 v2510 = (i8)(intptr_t)(ws+848);
	i8 v2511 = *(i8*)(intptr_t)v2510;
	i8 v2512 = v2511+(+8);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	i8 v2514 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2514 = v2513;

	goto c02_01fe;

c02_0203:;

	i8 v2515 = (i8)(intptr_t)(ws+840);
	i1 v2516 = *(i1*)(intptr_t)v2515;
	i1 v2517 = (i1)+0;
	if (v2516==v2517) goto c02_0210; else goto c02_020f;

c02_020f:;

	i8 v2518 = (i8)(intptr_t)c02_s001e;
	i8 v2519 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2519)(v2518);

c02_0210:;

c02_020c:;

endsub:;
}
const i1 c02_s001f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// push workspace at ws+3296 length ws+10
void f106_push(i8 p2540 /* subr */) {
	*(i8*)(intptr_t)(ws+3296) = p2540; /* subr */

	i8 v2541 = (i8)(intptr_t)(ws+3240);
	i2 v2542 = *(i2*)(intptr_t)v2541;
	i8 v2543 = (i8)(intptr_t)(ws+3304);
	*(i2*)(intptr_t)v2543 = v2542;

c02_0217:;

	i8 v2544 = (i8)(intptr_t)(ws+3304);
	i2 v2545 = *(i2*)(intptr_t)v2544;
	i2 v2546 = (i2)+0;
	if (v2545==v2546) goto c02_021c; else goto c02_021b;

c02_021b:;

	i8 v2547 = (i8)(intptr_t)(ws+3304);
	i2 v2548 = *(i2*)(intptr_t)v2547;
	i2 v2549 = v2548+(-1);
	i8 v2550 = (i8)(intptr_t)(ws+3304);
	*(i2*)(intptr_t)v2550 = v2549;

	i8 v2551 = (i8)(intptr_t)(ws+840);
	i8 v2552 = (i8)(intptr_t)(ws+3304);
	i2 v2553 = *(i2*)(intptr_t)v2552;
	i8 v2554 = v2553;
	i1 v2555 = (i1)+3;
	i8 v2556 = ((i8)v2554)<<v2555;
	i8 v2557 = v2551+v2556;
	i8 v2558 = *(i8*)(intptr_t)v2557;
	i8 v2559 = (i8)(intptr_t)(ws+3296);
	i8 v2560 = *(i8*)(intptr_t)v2559;
	if (v2558==v2560) goto c02_0220; else goto c02_0221;

c02_0220:;

	goto endsub;

c02_0221:;

c02_021d:;

	goto c02_0217;

c02_021c:;

	i8 v2561 = (i8)(intptr_t)(ws+3240);
	i2 v2562 = *(i2*)(intptr_t)v2561;
	i2 v2563 = (i2)+300;
	if (v2562==v2563) goto c02_0225; else goto c02_0226;

c02_0225:;

	i8 v2564 = (i8)(intptr_t)c02_s001f;
	i8 v2565 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2565)(v2564);

	i8 v2566 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v2566)();

c02_0226:;

c02_0222:;

	i8 v2567 = (i8)(intptr_t)(ws+3296);
	i8 v2568 = *(i8*)(intptr_t)v2567;
	i8 v2569 = (i8)(intptr_t)(ws+840);
	i8 v2570 = (i8)(intptr_t)(ws+3240);
	i2 v2571 = *(i2*)(intptr_t)v2570;
	i8 v2572 = v2571;
	i1 v2573 = (i1)+3;
	i8 v2574 = ((i8)v2572)<<v2573;
	i8 v2575 = v2569+v2574;
	*(i8*)(intptr_t)v2575 = v2568;

	i8 v2576 = (i8)(intptr_t)(ws+3240);
	i2 v2577 = *(i2*)(intptr_t)v2576;
	i2 v2578 = v2577+(+1);
	i8 v2579 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2579 = v2578;

endsub:;
}
	void f106_push(i8 /* subr */);
	void f75_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f87_Deref(i8* /* subout */, i8 /* subin */);
	void f106_push(i8 /* subr */);
	void f106_push(i8 /* subr */);
const i1 c02_s0020[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0021[] = { 0x20,0x20,0x23,0 };
	void f12_print(i8 /* ptr */);
	void f18_print_i8(i1 /* value */);
const i1 c02_s0022[] = { 0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0023[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };
	void f12_print(i8 /* ptr */);

// PlaceSubroutines workspace at ws+832 length ws+2460
void f105_PlaceSubroutines(i8 p2520 /* subroutine */) {
	*(i8*)(intptr_t)(ws+832) = p2520; /* subroutine */

	i2 v2521 = (i2)+0;
	i8 v2522 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2522 = v2521;

	i1 v2523 = (i1)+0;
	i8 v2524 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2524 = v2523;

c02_0211:;

	i8 v2525 = (i8)(intptr_t)(ws+3242);
	i1 v2526 = *(i1*)(intptr_t)v2525;
	i1 v2527 = (i1)+4;
	if (v2526==v2527) goto c02_0216; else goto c02_0215;

c02_0215:;

	i2 v2528 = (i2)+0;
	i8 v2529 = (i8)(intptr_t)(ws+582);
	i8 v2530 = (i8)(intptr_t)(ws+3242);
	i1 v2531 = *(i1*)(intptr_t)v2530;
	i8 v2532 = v2531;
	i1 v2533 = (i1)+1;
	i8 v2534 = ((i8)v2532)<<v2533;
	i8 v2535 = v2529+v2534;
	*(i2*)(intptr_t)v2535 = v2528;

	i8 v2536 = (i8)(intptr_t)(ws+3242);
	i1 v2537 = *(i1*)(intptr_t)v2536;
	i1 v2538 = v2537+(+1);
	i8 v2539 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2539 = v2538;

	goto c02_0211;

c02_0216:;


	i8 v2580 = (i8)(intptr_t)(ws+832);
	i8 v2581 = *(i8*)(intptr_t)v2580;
	i8 v2582 = (i8)(intptr_t)(f106_push);

	((void(*)(i8 /* subr */))(intptr_t)v2582)(v2581);

c02_0227:;

	i8 v2583 = (i8)(intptr_t)(ws+3240);
	i2 v2584 = *(i2*)(intptr_t)v2583;
	i2 v2585 = (i2)+0;
	if (v2584==v2585) goto c02_022c; else goto c02_022b;

c02_022b:;

	i8 v2586 = (i8)(intptr_t)(ws+3240);
	i2 v2587 = *(i2*)(intptr_t)v2586;
	i2 v2588 = v2587+(-1);
	i8 v2589 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v2589 = v2588;

	i8 v2590 = (i8)(intptr_t)(ws+840);
	i8 v2591 = (i8)(intptr_t)(ws+3240);
	i2 v2592 = *(i2*)(intptr_t)v2591;
	i8 v2593 = v2592;
	i1 v2594 = (i1)+3;
	i8 v2595 = ((i8)v2593)<<v2594;
	i8 v2596 = v2590+v2595;
	i8 v2597 = *(i8*)(intptr_t)v2596;
	i8 v2598 = (i8)(intptr_t)(ws+832);
	*(i8*)(intptr_t)v2598 = v2597;

	i8 v2599 = (i8)(intptr_t)(ws+832);
	i8 v2600 = *(i8*)(intptr_t)v2599;
	i8 v2601 = v2600+(+188);
	i1 v2602 = *(i1*)(intptr_t)v2601;
	i1 v2603 = v2602|(+1);
	i8 v2604 = (i8)(intptr_t)(ws+832);
	i8 v2605 = *(i8*)(intptr_t)v2604;
	i8 v2606 = v2605+(+188);
	*(i1*)(intptr_t)v2606 = v2603;

	i1 v2607 = (i1)+0;
	i8 v2608 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2608 = v2607;

c02_022d:;

	i8 v2609 = (i8)(intptr_t)(ws+3242);
	i1 v2610 = *(i1*)(intptr_t)v2609;
	i1 v2611 = (i1)+4;
	if (v2610==v2611) goto c02_0232; else goto c02_0231;

c02_0231:;

	i8 v2612 = (i8)(intptr_t)(ws+832);
	i8 v2613 = *(i8*)(intptr_t)v2612;
	i8 v2614 = v2613+(+176);
	i8 v2615 = (i8)(intptr_t)(ws+3242);
	i1 v2616 = *(i1*)(intptr_t)v2615;
	i8 v2617 = v2616;
	i1 v2618 = (i1)+1;
	i8 v2619 = ((i8)v2617)<<v2618;
	i8 v2620 = v2614+v2619;
	i2 v2621 = *(i2*)(intptr_t)v2620;
	i8 v2622 = (i8)(intptr_t)(ws+832);
	i8 v2623 = *(i8*)(intptr_t)v2622;
	i8 v2624 = v2623+(+168);
	i8 v2625 = (i8)(intptr_t)(ws+3242);
	i1 v2626 = *(i1*)(intptr_t)v2625;
	i8 v2627 = v2626;
	i1 v2628 = (i1)+1;
	i8 v2629 = ((i8)v2627)<<v2628;
	i8 v2630 = v2624+v2629;
	i2 v2631 = *(i2*)(intptr_t)v2630;
	i2 v2632 = v2621+v2631;
	i8 v2633 = (i8)(intptr_t)(ws+3252);
	*(i2*)(intptr_t)v2633 = v2632;

	i8 v2634 = (i8)(intptr_t)(ws+3252);
	i2 v2635 = *(i2*)(intptr_t)v2634;
	i1 v2636 = (i1)+8;
	i8 v2637 = (i8)(intptr_t)(f75_ArchAlignUp);
	i2 v2638;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v2637)(&v2638, v2636, v2635);

	i8 v2639 = (i8)(intptr_t)(ws+3254);
	*(i2*)(intptr_t)v2639 = v2638;

	i8 v2640 = (i8)(intptr_t)(ws+3254);
	i2 v2641 = *(i2*)(intptr_t)v2640;
	i8 v2642 = (i8)(intptr_t)(ws+3244);
	i8 v2643 = (i8)(intptr_t)(ws+3242);
	i1 v2644 = *(i1*)(intptr_t)v2643;
	i8 v2645 = v2644;
	i1 v2646 = (i1)+1;
	i8 v2647 = ((i8)v2645)<<v2646;
	i8 v2648 = v2642+v2647;
	*(i2*)(intptr_t)v2648 = v2641;

	i8 v2649 = (i8)(intptr_t)(ws+582);
	i8 v2650 = (i8)(intptr_t)(ws+3242);
	i1 v2651 = *(i1*)(intptr_t)v2650;
	i8 v2652 = v2651;
	i1 v2653 = (i1)+1;
	i8 v2654 = ((i8)v2652)<<v2653;
	i8 v2655 = v2649+v2654;
	i2 v2656 = *(i2*)(intptr_t)v2655;
	i8 v2657 = (i8)(intptr_t)(ws+3252);
	i2 v2658 = *(i2*)(intptr_t)v2657;
	if (v2656<v2658) goto c02_0236; else goto c02_0237;

c02_0236:;

	i8 v2659 = (i8)(intptr_t)(ws+3252);
	i2 v2660 = *(i2*)(intptr_t)v2659;
	i8 v2661 = (i8)(intptr_t)(ws+582);
	i8 v2662 = (i8)(intptr_t)(ws+3242);
	i1 v2663 = *(i1*)(intptr_t)v2662;
	i8 v2664 = v2663;
	i1 v2665 = (i1)+1;
	i8 v2666 = ((i8)v2664)<<v2665;
	i8 v2667 = v2661+v2666;
	*(i2*)(intptr_t)v2667 = v2660;

c02_0237:;

c02_0233:;

	i8 v2668 = (i8)(intptr_t)(ws+3242);
	i1 v2669 = *(i1*)(intptr_t)v2668;
	i1 v2670 = v2669+(+1);
	i8 v2671 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2671 = v2670;

	goto c02_022d;

c02_0232:;

	i8 v2672 = (i8)(intptr_t)(ws+832);
	i8 v2673 = *(i8*)(intptr_t)v2672;
	i8 v2674 = v2673+(+16);
	i8 v2675 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v2675 = v2674;

c02_0238:;

	i8 v2676 = (i8)(intptr_t)(ws+3256);
	i8 v2677 = *(i8*)(intptr_t)v2676;
	i8 v2678 = (i8)+0;
	if (v2677==v2678) goto c02_023d; else goto c02_023c;

c02_023c:;

	i1 v2679 = (i1)+0;
	i8 v2680 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2680 = v2679;

c02_023e:;

	i8 v2681 = (i8)(intptr_t)(ws+3264);
	i1 v2682 = *(i1*)(intptr_t)v2681;
	i1 v2683 = (i1)+16;
	if (v2682==v2683) goto c02_0243; else goto c02_0242;

c02_0242:;

	i8 v2684 = (i8)(intptr_t)(ws+3256);
	i8 v2685 = *(i8*)(intptr_t)v2684;
	i8 v2686 = v2685+(+8);
	i8 v2687 = (i8)(intptr_t)(ws+3264);
	i1 v2688 = *(i1*)(intptr_t)v2687;
	i8 v2689 = v2688;
	i1 v2690 = (i1)+3;
	i8 v2691 = ((i8)v2689)<<v2690;
	i8 v2692 = v2686+v2691;
	i8 v2693 = *(i8*)(intptr_t)v2692;
	i8 v2694 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2694 = v2693;

	i8 v2695 = (i8)(intptr_t)(ws+3264);
	i1 v2696 = *(i1*)(intptr_t)v2695;
	i1 v2697 = v2696+(+1);
	i8 v2698 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v2698 = v2697;

	i8 v2699 = (i8)(intptr_t)(ws+3272);
	i8 v2700 = *(i8*)(intptr_t)v2699;
	i8 v2701 = (i8)+0;
	if (v2700==v2701) goto c02_0247; else goto c02_0248;

c02_0247:;

	goto c02_0243;

c02_0248:;

c02_0244:;

	i8 v2702 = (i8)(intptr_t)(ws+3272);
	i8 v2703 = *(i8*)(intptr_t)v2702;
	i8 v2704 = (i8)(intptr_t)(f87_Deref);
	i8 v2705;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2704)(&v2705, v2703);

	i8 v2706 = (i8)(intptr_t)(ws+3280);
	*(i8*)(intptr_t)v2706 = v2705;

	i8 v2707 = (i8)(intptr_t)(ws+3280);
	i8 v2708 = *(i8*)(intptr_t)v2707;
	i8 v2709 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v2709 = v2708;

	i1 v2710 = (i1)+0;
	i8 v2711 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2711 = v2710;

c02_0249:;

	i8 v2712 = (i8)(intptr_t)(ws+3242);
	i1 v2713 = *(i1*)(intptr_t)v2712;
	i1 v2714 = (i1)+4;
	if (v2713==v2714) goto c02_024e; else goto c02_024d;

c02_024d:;

	i8 v2715 = (i8)(intptr_t)(ws+3272);
	i8 v2716 = *(i8*)(intptr_t)v2715;
	i8 v2717 = v2716+(+176);
	i8 v2718 = (i8)(intptr_t)(ws+3242);
	i1 v2719 = *(i1*)(intptr_t)v2718;
	i8 v2720 = v2719;
	i1 v2721 = (i1)+1;
	i8 v2722 = ((i8)v2720)<<v2721;
	i8 v2723 = v2717+v2722;
	i2 v2724 = *(i2*)(intptr_t)v2723;
	i8 v2725 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v2725 = v2724;

	i8 v2726 = (i8)(intptr_t)(ws+3244);
	i8 v2727 = (i8)(intptr_t)(ws+3242);
	i1 v2728 = *(i1*)(intptr_t)v2727;
	i8 v2729 = v2728;
	i1 v2730 = (i1)+1;
	i8 v2731 = ((i8)v2729)<<v2730;
	i8 v2732 = v2726+v2731;
	i2 v2733 = *(i2*)(intptr_t)v2732;
	i8 v2734 = (i8)(intptr_t)(ws+3290);
	*(i2*)(intptr_t)v2734 = v2733;

	i8 v2735 = (i8)(intptr_t)(ws+3288);
	i2 v2736 = *(i2*)(intptr_t)v2735;
	i8 v2737 = (i8)(intptr_t)(ws+3290);
	i2 v2738 = *(i2*)(intptr_t)v2737;
	if (v2736<v2738) goto c02_0252; else goto c02_0253;

c02_0252:;

	i8 v2739 = (i8)(intptr_t)(ws+3290);
	i2 v2740 = *(i2*)(intptr_t)v2739;
	i8 v2741 = (i8)(intptr_t)(ws+3272);
	i8 v2742 = *(i8*)(intptr_t)v2741;
	i8 v2743 = v2742+(+176);
	i8 v2744 = (i8)(intptr_t)(ws+3242);
	i1 v2745 = *(i1*)(intptr_t)v2744;
	i8 v2746 = v2745;
	i1 v2747 = (i1)+1;
	i8 v2748 = ((i8)v2746)<<v2747;
	i8 v2749 = v2743+v2748;
	*(i2*)(intptr_t)v2749 = v2740;

	i8 v2750 = (i8)(intptr_t)(ws+3272);
	i8 v2751 = *(i8*)(intptr_t)v2750;
	i8 v2752 = (i8)(intptr_t)(f106_push);

	((void(*)(i8 /* subr */))(intptr_t)v2752)(v2751);

c02_0253:;

c02_024f:;

	i8 v2753 = (i8)(intptr_t)(ws+3242);
	i1 v2754 = *(i1*)(intptr_t)v2753;
	i1 v2755 = v2754+(+1);
	i8 v2756 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2756 = v2755;

	goto c02_0249;

c02_024e:;

	i8 v2757 = (i8)(intptr_t)(ws+3272);
	i8 v2758 = *(i8*)(intptr_t)v2757;
	i8 v2759 = v2758+(+188);
	i1 v2760 = *(i1*)(intptr_t)v2759;
	i1 v2761 = v2760&(+1);
	i1 v2762 = (i1)+0;
	if (v2761==v2762) goto c02_0257; else goto c02_0258;

c02_0257:;

	i8 v2763 = (i8)(intptr_t)(ws+3272);
	i8 v2764 = *(i8*)(intptr_t)v2763;
	i8 v2765 = (i8)(intptr_t)(f106_push);

	((void(*)(i8 /* subr */))(intptr_t)v2765)(v2764);

	i8 v2766 = (i8)(intptr_t)(ws+3272);
	i8 v2767 = *(i8*)(intptr_t)v2766;
	i8 v2768 = v2767+(+188);
	i1 v2769 = *(i1*)(intptr_t)v2768;
	i1 v2770 = v2769|(+1);
	i8 v2771 = (i8)(intptr_t)(ws+3272);
	i8 v2772 = *(i8*)(intptr_t)v2771;
	i8 v2773 = v2772+(+188);
	*(i1*)(intptr_t)v2773 = v2770;

c02_0258:;

c02_0254:;

	goto c02_023e;

c02_0243:;

	i8 v2774 = (i8)(intptr_t)(ws+3256);
	i8 v2775 = *(i8*)(intptr_t)v2774;
	i8 v2776 = *(i8*)(intptr_t)v2775;
	i8 v2777 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v2777 = v2776;

	goto c02_0238;

c02_023d:;

	goto c02_0227;

c02_022c:;

	i8 v2778 = (i8)(intptr_t)c02_s0020;
	i8 v2779 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2779)(v2778);

	i1 v2780 = (i1)+0;
	i8 v2781 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2781 = v2780;

c02_0259:;

	i8 v2782 = (i8)(intptr_t)(ws+3242);
	i1 v2783 = *(i1*)(intptr_t)v2782;
	i1 v2784 = (i1)+4;
	if (v2783==v2784) goto c02_025e; else goto c02_025d;

c02_025d:;

	i8 v2785 = (i8)(intptr_t)c02_s0021;
	i8 v2786 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2786)(v2785);

	i8 v2787 = (i8)(intptr_t)(ws+3242);
	i1 v2788 = *(i1*)(intptr_t)v2787;
	i8 v2789 = (i8)(intptr_t)(f18_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v2789)(v2788);

	i8 v2790 = (i8)(intptr_t)c02_s0022;
	i8 v2791 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2791)(v2790);

	i8 v2792 = (i8)(intptr_t)(ws+582);
	i8 v2793 = (i8)(intptr_t)(ws+3242);
	i1 v2794 = *(i1*)(intptr_t)v2793;
	i8 v2795 = v2794;
	i1 v2796 = (i1)+1;
	i8 v2797 = ((i8)v2795)<<v2796;
	i8 v2798 = v2792+v2797;
	i2 v2799 = *(i2*)(intptr_t)v2798;
	i8 v2800 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2800)(v2799);

	i8 v2801 = (i8)(intptr_t)c02_s0023;
	i8 v2802 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2802)(v2801);

	i8 v2803 = (i8)(intptr_t)(ws+3242);
	i1 v2804 = *(i1*)(intptr_t)v2803;
	i1 v2805 = v2804+(+1);
	i8 v2806 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v2806 = v2805;

	goto c02_0259;

c02_025e:;

endsub:;
}
const i1 c02_s0024[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s0025[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);
const i1 c02_s0026[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };
	void f62_SimpleError(i8 /* s */);

// SyntaxError workspace at ws+832 length ws+0
void f107_SyntaxError(void) {

	i8 v2830 = (i8)(intptr_t)c02_s0026;
	i8 v2831 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2831)(v2830);

endsub:;
}
const i1 c02_s0027[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f89_OpenAndLoadCoo(i8* /* coo */, i8 /* filename */);
	void f85_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f84_AddRef(i8 /* calls */, i8 /* subr */);

// AddInputFile workspace at ws+832 length ws+40
void f108_AddInputFile(i8 p2832 /* filename */) {
	*(i8*)(intptr_t)(ws+832) = p2832; /* filename */

	i8 v2833 = (i8)(intptr_t)c02_s0027;
	i8 v2834 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2834)(v2833);

	i8 v2835 = (i8)(intptr_t)(ws+832);
	i8 v2836 = *(i8*)(intptr_t)v2835;
	i8 v2837 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2837)(v2836);

	i8 v2838 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2838)();

	i8 v2839 = (i8)(intptr_t)(ws+832);
	i8 v2840 = *(i8*)(intptr_t)v2839;
	i8 v2841 = (i8)(intptr_t)(f89_OpenAndLoadCoo);
	i8 v2842;

	((void(*)(i8* /* coo */, i8 /* filename */))(intptr_t)v2841)(&v2842, v2840);

	i8 v2843 = (i8)(intptr_t)(ws+840);
	*(i8*)(intptr_t)v2843 = v2842;

	i8 v2844 = (i8)(intptr_t)(ws+840);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	i8 v2846 = (i8)(intptr_t)(ws+848);
	*(i8*)(intptr_t)v2846 = v2845;

	i8 v2847 = (i8)(intptr_t)(ws+760);
	i8 v2848 = *(i8*)(intptr_t)v2847;
	i8 v2849 = (i8)+0;
	if (v2848==v2849) goto c02_0262; else goto c02_0263;

c02_0262:;

	i8 v2850 = (i8)(intptr_t)(ws+848);
	i8 v2851 = *(i8*)(intptr_t)v2850;
	i8 v2852 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2852 = v2851;

	i8 v2853 = (i8)(intptr_t)(ws+848);
	i8 v2854 = *(i8*)(intptr_t)v2853;
	i8 v2855 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2855 = v2854;

	goto c02_025f;

c02_0263:;

	i8 v2856 = (i8)(intptr_t)(ws+848);
	i8 v2857 = *(i8*)(intptr_t)v2856;
	i8 v2858 = (i8)(intptr_t)(ws+752);
	i8 v2859 = *(i8*)(intptr_t)v2858;
	i8 v2860 = v2859+(+672);
	*(i8*)(intptr_t)v2860 = v2857;

	i8 v2861 = (i8)(intptr_t)(ws+848);
	i8 v2862 = *(i8*)(intptr_t)v2861;
	i8 v2863 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2863 = v2862;

c02_025f:;

	i8 v2864 = (i8)(intptr_t)(ws+848);
	i8 v2865 = *(i8*)(intptr_t)v2864;
	i2 v2866 = (i2)+0;
	i8 v2867 = (i8)(intptr_t)(f85_FindSub);
	i8 v2868;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v2867)(&v2868, v2866, v2865);

	i8 v2869 = (i8)(intptr_t)(ws+856);
	*(i8*)(intptr_t)v2869 = v2868;

	i8 v2870 = (i8)(intptr_t)(ws+856);
	i8 v2871 = *(i8*)(intptr_t)v2870;
	i8 v2872 = *(i8*)(intptr_t)v2871;
	i8 v2873 = (i8)(intptr_t)(ws+864);
	*(i8*)(intptr_t)v2873 = v2872;

	i8 v2874 = (i8)(intptr_t)(ws+864);
	i8 v2875 = *(i8*)(intptr_t)v2874;
	i8 v2876 = (i8)+0;
	if (v2875==v2876) goto c02_0268; else goto c02_0267;

c02_0267:;

	i8 v2877 = (i8)(intptr_t)(ws+776);
	i8 v2878 = *(i8*)(intptr_t)v2877;
	i8 v2879 = (i8)+0;
	if (v2878==v2879) goto c02_026c; else goto c02_026d;

c02_026c:;

	i8 v2880 = (i8)(intptr_t)(ws+864);
	i8 v2881 = *(i8*)(intptr_t)v2880;
	i8 v2882 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2882 = v2881;

c02_026d:;

c02_0269:;

c02_0268:;

c02_0264:;

	i8 v2883 = (i8)(intptr_t)(ws+784);
	i8 v2884 = *(i8*)(intptr_t)v2883;
	i8 v2885 = (i8)+0;
	if (v2884==v2885) goto c02_0272; else goto c02_0271;

c02_0271:;

	i8 v2886 = (i8)(intptr_t)(ws+784);
	i8 v2887 = *(i8*)(intptr_t)v2886;
	i8 v2888 = (i8)(intptr_t)(ws+864);
	i8 v2889 = *(i8*)(intptr_t)v2888;
	i8 v2890 = (i8)(intptr_t)(f84_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v2890)(v2889, v2887);

c02_0272:;

c02_026e:;

	i8 v2891 = (i8)(intptr_t)(ws+864);
	i8 v2892 = *(i8*)(intptr_t)v2891;
	i8 v2893 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v2893 = v2892;

endsub:;
}
	void f24_ArgvInit(void);
	void f25_ArgvNext(i8* /* arg */);
const i1 c02_s0028[] = { 0x2d,0x6f,0 };
	void f28_StrICmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f25_ArgvNext(i8* /* arg */);
	void f107_SyntaxError(void);
	void f108_AddInputFile(i8 /* filename */);
const i1 c02_s0029[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
	void f62_SimpleError(i8 /* s */);
const i1 c02_s002a[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
	void f62_SimpleError(i8 /* s */);
const i1 c02_s002b[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
	void f12_print(i8 /* ptr */);
	void f104_ResolveExternals(void);
	void f105_PlaceSubroutines(i8 /* subroutine */);
	void f73_EmitterOpenfile(i8 /* filename */);
const i1 c02_s002c[] = { 0x43,0x72,0x65,0x61,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f12_print(i8 /* ptr */);
	void f13_print_nl(void);
	void f90_InitStreams(void);
	void f91_SetStream(i1 /* sid */);
	void f79_ArchEmitHeader(i8 /* coo */);
	void f95_FlushStream(void);
	void f103_WriteAllSubroutinesToOutputFile(i8 /* coos */);
	void f91_SetStream(i1 /* sid */);
	void f80_ArchEmitFooter(i8 /* coo */);
	void f95_FlushStream(void);
	void f74_EmitterClosefile(void);
const i1 c02_s002d[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f12_print(i8 /* ptr */);
	void f38_GetFreeMemory(i8* /* i */);
	void f17_print_i16(i2 /* value */);
const i1 c02_s002e[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f12_print(i8 /* ptr */);

// __main workspace at ws+0 length ws+832
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
	i8 v1059 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1059 = v1058;






















	i1 v1303 = (i1)+1;
	i8 v1304 = (i8)(intptr_t)(ws+590);
	*(i1*)(intptr_t)v1304 = v1303;













	i1 v1964 = (i1)+0;
	i8 v1965 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v1965 = v1964;

	i1 v1966 = (i1)+0;
	i8 v1967 = (i8)(intptr_t)(ws+737);
	*(i1*)(intptr_t)v1967 = v1966;








	i8 v2807 = (i8)(intptr_t)c02_s0024;
	i8 v2808 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2808)(v2807);

	i8 v2809 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v2810;

	((void(*)(i8* /* i */))(intptr_t)v2809)(&v2810);

	i8 v2811 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v2811 = v2810;

	i8 v2812 = (i8)(intptr_t)(ws+744);
	i8 v2813 = *(i8*)(intptr_t)v2812;
	i1 v2814 = (i1)+10;
	i8 v2815 = ((i8)v2813)>>v2814;
	i2 v2816 = v2815;
	i8 v2817 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2817)(v2816);

	i8 v2818 = (i8)(intptr_t)c02_s0025;
	i8 v2819 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2819)(v2818);

	i8 v2820 = (i8)+0;
	i8 v2821 = (i8)(intptr_t)(ws+752);
	*(i8*)(intptr_t)v2821 = v2820;

	i8 v2822 = (i8)+0;
	i8 v2823 = (i8)(intptr_t)(ws+760);
	*(i8*)(intptr_t)v2823 = v2822;

	i8 v2824 = (i8)+0;
	i8 v2825 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2825 = v2824;

	i8 v2826 = (i8)+0;
	i8 v2827 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v2827 = v2826;

	i8 v2828 = (i8)+0;
	i8 v2829 = (i8)(intptr_t)(ws+784);
	*(i8*)(intptr_t)v2829 = v2828;



	i8 v2894 = (i8)(intptr_t)(f24_ArgvInit);

	((void(*)(void))(intptr_t)v2894)();

c02_0273:;

	i8 v2895 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v2896;

	((void(*)(i8* /* arg */))(intptr_t)v2895)(&v2896);

	i8 v2897 = (i8)(intptr_t)(ws+792);
	*(i8*)(intptr_t)v2897 = v2896;

	i8 v2898 = (i8)(intptr_t)(ws+792);
	i8 v2899 = *(i8*)(intptr_t)v2898;
	i8 v2900 = (i8)(intptr_t)(ws+800);
	*(i8*)(intptr_t)v2900 = v2899;

	i8 v2901 = (i8)(intptr_t)(ws+800);
	i8 v2902 = *(i8*)(intptr_t)v2901;
	i8 v2903 = (i8)+0;
	if (v2902==v2903) goto c02_0278; else goto c02_0279;

c02_0278:;

	goto c02_0274;

c02_0279:;

c02_0275:;

	i8 v2904 = (i8)(intptr_t)(ws+800);
	i8 v2905 = *(i8*)(intptr_t)v2904;
	i8 v2906 = (i8)(intptr_t)c02_s0028;
	i8 v2907 = (i8)(intptr_t)(f28_StrICmp);
	i1 v2908;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v2907)(&v2908, v2906, v2905);

	i8 v2909 = (i8)(intptr_t)(ws+808);
	*(i1*)(intptr_t)v2909 = v2908;

	i8 v2910 = (i8)(intptr_t)(ws+808);
	i1 v2911 = *(i1*)(intptr_t)v2910;
	i1 v2912 = (i1)+0;
	if (v2911==v2912) goto c02_027d; else goto c02_027e;

c02_027d:;

	i8 v2913 = (i8)(intptr_t)(f25_ArgvNext);
	i8 v2914;

	((void(*)(i8* /* arg */))(intptr_t)v2913)(&v2914);

	i8 v2915 = (i8)(intptr_t)(ws+816);
	*(i8*)(intptr_t)v2915 = v2914;

	i8 v2916 = (i8)(intptr_t)(ws+816);
	i8 v2917 = *(i8*)(intptr_t)v2916;
	i8 v2918 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v2918 = v2917;

	goto c02_027a;

c02_027e:;

	i8 v2919 = (i8)(intptr_t)(ws+800);
	i8 v2920 = *(i8*)(intptr_t)v2919;
	i1 v2921 = *(i1*)(intptr_t)v2920;
	i1 v2922 = (i1)+45;
	if (v2921==v2922) goto c02_0281; else goto c02_0282;

c02_0281:;

	i8 v2923 = (i8)(intptr_t)(f107_SyntaxError);

	((void(*)(void))(intptr_t)v2923)();

	goto c02_027a;

c02_0282:;

	i8 v2924 = (i8)(intptr_t)(ws+800);
	i8 v2925 = *(i8*)(intptr_t)v2924;
	i8 v2926 = (i8)(intptr_t)(f108_AddInputFile);

	((void(*)(i8 /* filename */))(intptr_t)v2926)(v2925);

c02_027a:;

	goto c02_0273;

c02_0274:;

	i8 v2927 = (i8)(intptr_t)(ws+776);
	i8 v2928 = *(i8*)(intptr_t)v2927;
	i8 v2929 = (i8)+0;
	if (v2928==v2929) goto c02_0286; else goto c02_0287;

c02_0286:;

	i8 v2930 = (i8)(intptr_t)c02_s0029;
	i8 v2931 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2931)(v2930);

c02_0287:;

c02_0283:;

	i8 v2932 = (i8)(intptr_t)(ws+768);
	i8 v2933 = *(i8*)(intptr_t)v2932;
	i8 v2934 = (i8)+0;
	if (v2933==v2934) goto c02_028b; else goto c02_028c;

c02_028b:;

	i8 v2935 = (i8)(intptr_t)c02_s002a;
	i8 v2936 = (i8)(intptr_t)(f62_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2936)(v2935);

c02_028c:;

c02_0288:;

	i8 v2937 = (i8)(intptr_t)c02_s002b;
	i8 v2938 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2938)(v2937);

	i8 v2939 = (i8)(intptr_t)(f104_ResolveExternals);

	((void(*)(void))(intptr_t)v2939)();

	i8 v2940 = (i8)(intptr_t)(ws+776);
	i8 v2941 = *(i8*)(intptr_t)v2940;
	i8 v2942 = (i8)(intptr_t)(f105_PlaceSubroutines);

	((void(*)(i8 /* subroutine */))(intptr_t)v2942)(v2941);

	i8 v2943 = (i8)(intptr_t)(ws+768);
	i8 v2944 = *(i8*)(intptr_t)v2943;
	i8 v2945 = (i8)(intptr_t)(f73_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v2945)(v2944);

	i8 v2946 = (i8)(intptr_t)c02_s002c;
	i8 v2947 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2947)(v2946);

	i8 v2948 = (i8)(intptr_t)(ws+768);
	i8 v2949 = *(i8*)(intptr_t)v2948;
	i8 v2950 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2950)(v2949);

	i8 v2951 = (i8)(intptr_t)(f13_print_nl);

	((void(*)(void))(intptr_t)v2951)();

	i8 v2952 = (i8)(intptr_t)(f90_InitStreams);

	((void(*)(void))(intptr_t)v2952)();

	i1 v2953 = (i1)+7;
	i8 v2954 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2954)(v2953);

	i8 v2955 = (i8)(intptr_t)(ws+760);
	i8 v2956 = *(i8*)(intptr_t)v2955;
	i8 v2957 = (i8)(intptr_t)(f79_ArchEmitHeader);

	((void(*)(i8 /* coo */))(intptr_t)v2957)(v2956);

	i8 v2958 = (i8)(intptr_t)(f95_FlushStream);

	((void(*)(void))(intptr_t)v2958)();

	i8 v2959 = (i8)(intptr_t)(ws+760);
	i8 v2960 = *(i8*)(intptr_t)v2959;
	i8 v2961 = (i8)(intptr_t)(f103_WriteAllSubroutinesToOutputFile);

	((void(*)(i8 /* coos */))(intptr_t)v2961)(v2960);

	i1 v2962 = (i1)+7;
	i8 v2963 = (i8)(intptr_t)(f91_SetStream);

	((void(*)(i1 /* sid */))(intptr_t)v2963)(v2962);

	i8 v2964 = (i8)(intptr_t)(ws+760);
	i8 v2965 = *(i8*)(intptr_t)v2964;
	i8 v2966 = (i8)(intptr_t)(f80_ArchEmitFooter);

	((void(*)(i8 /* coo */))(intptr_t)v2966)(v2965);

	i8 v2967 = (i8)(intptr_t)(f95_FlushStream);

	((void(*)(void))(intptr_t)v2967)();

	i8 v2968 = (i8)(intptr_t)(f74_EmitterClosefile);

	((void(*)(void))(intptr_t)v2968)();

	i8 v2969 = (i8)(intptr_t)c02_s002d;
	i8 v2970 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2970)(v2969);

	i8 v2971 = (i8)(intptr_t)(f38_GetFreeMemory);
	i8 v2972;

	((void(*)(i8* /* i */))(intptr_t)v2971)(&v2972);

	i8 v2973 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v2973 = v2972;

	i8 v2974 = (i8)(intptr_t)(ws+824);
	i8 v2975 = *(i8*)(intptr_t)v2974;
	i1 v2976 = (i1)+10;
	i8 v2977 = ((i8)v2975)>>v2976;
	i2 v2978 = v2977;
	i8 v2979 = (i8)(intptr_t)(f17_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2979)(v2978);

	i8 v2980 = (i8)(intptr_t)c02_s002e;
	i8 v2981 = (i8)(intptr_t)(f12_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2981)(v2980);

endsub:;
}
void cmain(void) {
	f3___main();
}
