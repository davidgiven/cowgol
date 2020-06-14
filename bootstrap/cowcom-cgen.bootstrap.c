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
	void f8_print_char(i1 /* c */);

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
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+3344);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+3312 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+3368 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+3368) = p40; /*value */
	*(i1*)(intptr_t)(ws+3372) = p39; /*base */
	*(i8*)(intptr_t)(ws+3376) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+3376);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+3368);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+3372);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+3368);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+3372);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+3368);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+3392);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+3392);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+3392);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+3392);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+3384);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+3384);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+3368);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+3376);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+3384);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+3400);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+3408);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+3400);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+3408);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+3400);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+3416);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+3408);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+3400);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+3408);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+3384);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+3384);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+3320 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+3320) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+3320);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+3324);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+3324);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+3312 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+3312) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+3312);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i8 workspace at ws+3256 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+3256) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+3256);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+3224 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+3224) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+3225);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+3224);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+3226);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+3226);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+3226);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+3226);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+3226);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+3226);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+3226);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+3224);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+3225);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+3225);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+3225);
	i1 v195 = *(i1*)(intptr_t)v194;
	i1 v196 = (i1)+0;
	if (v195==v196) goto c02_0029; else goto c02_002a;

c02_0029:;

	goto c02_0020;

c02_002a:;

c02_0026:;

	goto c02_001f;

c02_0020:;

endsub:;
}
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);

// print_hex_i16 workspace at ws+3208 length ws+2
void f19_print_hex_i16(i2 p197 /* value */) {
	*(i2*)(intptr_t)(ws+3208) = p197; /*value */

	i8 v198 = (i8)(intptr_t)(ws+3208);
	i2 v199 = *(i2*)(intptr_t)v198;
	i1 v200 = (i1)+8;
	i2 v201 = ((i2)v199)>>v200;
	i1 v202 = v201;
	i8 v203 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v203)(v202);

	i8 v204 = (i8)(intptr_t)(ws+3208);
	i2 v205 = *(i2*)(intptr_t)v204;
	i1 v206 = v205;
	i8 v207 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v207)(v206);

endsub:;
}
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+3216 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+3216) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+3216);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+3216);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+3216);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+3216);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// MemZero workspace at ws+3216 length ws+16
void f22_MemZero(i8 p335 /* size */, i8 p336 /* ptr */) {
	*(i8*)(intptr_t)(ws+3216) = p336; /*ptr */
	*(i8*)(intptr_t)(ws+3224) = p335; /*size */

	i8 v337 = (i8)(intptr_t)(ws+3216);
	i8 v338 = *(i8*)(intptr_t)v337;
	i1 v339 = (i1)+0;
	i8 v340 = (i8)(intptr_t)(ws+3224);
	i8 v341 = *(i8*)(intptr_t)v340;
	i8 v342 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v342)(v341, v339, v338);

endsub:;
}

// ArgvInit workspace at ws+2896 length ws+0
void f23_ArgvInit(void) {


	
*(i8*)(intptr_t)(ws+16) 
 = (i8)(intptr_t)global_argv; 



	i8 v343 = (i8)(intptr_t)(ws+16);
	i8 v344 = *(i8*)(intptr_t)v343;
	i8 v345 = v344+(+8);
	i8 v346 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v346 = v345;

endsub:;
}

// ArgvNext workspace at ws+2896 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+2896);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+2896);
	i8 v358 = *(i8*)(intptr_t)v357;
	i8 v359 = (i8)+0;
	if (v358==v359) goto c02_0057; else goto c02_0058;

c02_0057:;

	i8 v360 = (i8)+0;
	i8 v361 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v361 = v360;

	goto c02_0054;

c02_0058:;

	i8 v362 = (i8)(intptr_t)(ws+16);
	i8 v363 = *(i8*)(intptr_t)v362;
	i8 v364 = v363+(+8);
	i8 v365 = (i8)(intptr_t)(ws+16);
	*(i8*)(intptr_t)v365 = v364;

c02_0054:;

endsub:;
	*p347 = *(i8*)(intptr_t)(ws+2896);
}

// StrCmp workspace at ws+3120 length ws+17
void f25_StrCmp(i1* p366 /* res */, i8 p367 /* s2 */, i8 p368 /* s1 */) {
	*(i8*)(intptr_t)(ws+3120) = p368; /*s1 */
	*(i8*)(intptr_t)(ws+3128) = p367; /*s2 */

c02_0059:;

	i8 v369 = (i8)(intptr_t)(ws+3120);
	i8 v370 = *(i8*)(intptr_t)v369;
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+3128);
	i8 v373 = *(i8*)(intptr_t)v372;
	i1 v374 = *(i1*)(intptr_t)v373;
	i1 v375 = v371-v374;
	i8 v376 = (i8)(intptr_t)(ws+3136);
	*(i1*)(intptr_t)v376 = v375;

	i8 v377 = (i8)(intptr_t)(ws+3136);
	i1 v378 = *(i1*)(intptr_t)v377;
	i1 v379 = (i1)+0;
	if (v378==v379) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v380 = (i8)(intptr_t)(ws+3120);
	i8 v381 = *(i8*)(intptr_t)v380;
	i1 v382 = *(i1*)(intptr_t)v381;
	i1 v383 = (i1)+0;
	if (v382==v383) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v384 = (i8)(intptr_t)(ws+3120);
	i8 v385 = *(i8*)(intptr_t)v384;
	i8 v386 = v385+(+1);
	i8 v387 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v387 = v386;

	i8 v388 = (i8)(intptr_t)(ws+3128);
	i8 v389 = *(i8*)(intptr_t)v388;
	i8 v390 = v389+(+1);
	i8 v391 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v391 = v390;

	goto c02_0059;

c02_005a:;

endsub:;
	*p366 = *(i1*)(intptr_t)(ws+3136);
}

// ToLower workspace at ws+2912 length ws+2
void f26_ToLower(i1* p392 /* cc */, i1 p393 /* c */) {
	*(i1*)(intptr_t)(ws+2912) = p393; /*c */

	i8 v394 = (i8)(intptr_t)(ws+2912);
	i1 v395 = *(i1*)(intptr_t)v394;
	i1 v396 = (i1)+65;
	if (v395<v396) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v397 = (i1)+90;
	i8 v398 = (i8)(intptr_t)(ws+2912);
	i1 v399 = *(i1*)(intptr_t)v398;
	if (v397<v399) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v400 = (i8)(intptr_t)(ws+2912);
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402 = v401|(+32);
	i8 v403 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v403 = v402;

	goto c02_0063;

c02_0069:;

	i8 v404 = (i8)(intptr_t)(ws+2912);
	i1 v405 = *(i1*)(intptr_t)v404;
	i8 v406 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v406 = v405;

c02_0063:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+2913);
}

// StrLen workspace at ws+3104 length ws+25
void f28_StrLen(i8* p437 /* size */, i8 p438 /* s */) {
	*(i8*)(intptr_t)(ws+3104) = p438; /*s */

	i8 v439 = (i8)(intptr_t)(ws+3104);
	i8 v440 = *(i8*)(intptr_t)v439;
	i8 v441 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v441 = v440;

c02_0075:;

	i8 v442 = (i8)(intptr_t)(ws+3120);
	i8 v443 = *(i8*)(intptr_t)v442;
	i1 v444 = *(i1*)(intptr_t)v443;
	i8 v445 = (i8)(intptr_t)(ws+3128);
	*(i1*)(intptr_t)v445 = v444;

	i8 v446 = (i8)(intptr_t)(ws+3128);
	i1 v447 = *(i1*)(intptr_t)v446;
	i1 v448 = (i1)+0;
	if (v447==v448) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v449 = (i8)(intptr_t)(ws+3120);
	i8 v450 = *(i8*)(intptr_t)v449;
	i8 v451 = v450+(+1);
	i8 v452 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v452 = v451;

	goto c02_0075;

c02_0076:;

	i8 v453 = (i8)(intptr_t)(ws+3120);
	i8 v454 = *(i8*)(intptr_t)v453;
	i8 v455 = (i8)(intptr_t)(ws+3104);
	i8 v456 = *(i8*)(intptr_t)v455;
	i8 v457 = v454-v456;
	i8 v458 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v458 = v457;

endsub:;
	*p437 = *(i8*)(intptr_t)(ws+3112);
}

// MemCopy workspace at ws+3296 length ws+24
void f30_MemCopy(i8 p480 /* dest */, i8 p481 /* size */, i8 p482 /* src */) {
	*(i8*)(intptr_t)(ws+3296) = p482; /*src */
	*(i8*)(intptr_t)(ws+3304) = p481; /*size */
	*(i8*)(intptr_t)(ws+3312) = p480; /*dest */

c02_0085:;

	i8 v483 = (i8)(intptr_t)(ws+3304);
	i8 v484 = *(i8*)(intptr_t)v483;
	i8 v485 = (i8)+0;
	if (v484==v485) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v486 = (i8)(intptr_t)(ws+3296);
	i8 v487 = *(i8*)(intptr_t)v486;
	i1 v488 = *(i1*)(intptr_t)v487;
	i8 v489 = (i8)(intptr_t)(ws+3312);
	i8 v490 = *(i8*)(intptr_t)v489;
	*(i1*)(intptr_t)v490 = v488;

	i8 v491 = (i8)(intptr_t)(ws+3312);
	i8 v492 = *(i8*)(intptr_t)v491;
	i8 v493 = v492+(+1);
	i8 v494 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v494 = v493;

	i8 v495 = (i8)(intptr_t)(ws+3296);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+1);
	i8 v498 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v498 = v497;

	i8 v499 = (i8)(intptr_t)(ws+3304);
	i8 v500 = *(i8*)(intptr_t)v499;
	i8 v501 = v500+(-1);
	i8 v502 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v502 = v501;

	goto c02_0085;

c02_0088:;

endsub:;
}

// Alloc workspace at ws+3384 length ws+16
void f31_Alloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+3384) = p504; /*length */


	
*(i8*)(intptr_t)(ws+3392) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3384) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+3392);
}

// Free workspace at ws+3336 length ws+8
void f32_Free(i8 p505 /* block */) {
	*(i8*)(intptr_t)(ws+3336) = p505; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3336) 
); 



endsub:;
}

// StrDup workspace at ws+3056 length ws+16
void f33_StrDup(i8* p506 /* sout */, i8 p507 /* s */) {
	*(i8*)(intptr_t)(ws+3056) = p507; /*s */


	
*(i8*)(intptr_t)(ws+3064) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3056) 
); 



endsub:;
	*p506 = *(i8*)(intptr_t)(ws+3064);
}

// GetFreeMemory workspace at ws+2888 length ws+8
void f35_GetFreeMemory(i8* p508 /* i */) {

	i8 v509 = (i8)+0;
	i8 v510 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v510 = v509;

endsub:;
	*p508 = *(i8*)(intptr_t)(ws+2888);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+3376 length ws+28
void f36_fcb_i_blockin(i8 p511 /* fcb */) {
	*(i8*)(intptr_t)(ws+3376) = p511; /*fcb */

	i8 v512 = (i8)(intptr_t)(ws+3376);
	i8 v513 = *(i8*)(intptr_t)v512;
	i8 v514 = v513+(+12);
	i1 v515 = (i1)+0;
	i8 v516 = (i8)+512;
	i8 v517 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v517)(v516, v515, v514);

	i8 v518 = (i8)(intptr_t)(ws+3376);
	i8 v519 = *(i8*)(intptr_t)v518;
	i4 v520 = *(i4*)(intptr_t)v519;
	i8 v521 = (i8)(intptr_t)(ws+3384);
	*(i4*)(intptr_t)v521 = v520;

	i8 v522 = (i8)(intptr_t)(ws+3376);
	i8 v523 = *(i8*)(intptr_t)v522;
	i8 v524 = v523+(+12);
	i8 v525 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v525 = v524;

	i8 v526 = (i8)(intptr_t)(ws+3376);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	i4 v529 = *(i4*)(intptr_t)v528;
	i1 v530 = (i1)+9;
	i4 v531 = ((i4)v529)<<v530;
	i8 v532 = (i8)(intptr_t)(ws+3400);
	*(i4*)(intptr_t)v532 = v531;


	
pread( 
*(i4*)(intptr_t)(ws+3384) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3392) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3400) 
); 



	i1 v533 = (i1)+0;
	i8 v534 = (i8)(intptr_t)(ws+3376);
	i8 v535 = *(i8*)(intptr_t)v534;
	i8 v536 = v535+(+6);
	*(i1*)(intptr_t)v536 = v533;

endsub:;
}

// fcb_i_blockout workspace at ws+3376 length ws+28
void f37_fcb_i_blockout(i8 p537 /* fcb */) {
	*(i8*)(intptr_t)(ws+3376) = p537; /*fcb */

	i8 v538 = (i8)(intptr_t)(ws+3376);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+6);
	i1 v541 = *(i1*)(intptr_t)v540;
	i1 v542 = (i1)+0;
	if (v541==v542) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v543 = (i8)(intptr_t)(ws+3376);
	i8 v544 = *(i8*)(intptr_t)v543;
	i4 v545 = *(i4*)(intptr_t)v544;
	i8 v546 = (i8)(intptr_t)(ws+3384);
	*(i4*)(intptr_t)v546 = v545;

	i8 v547 = (i8)(intptr_t)(ws+3376);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+12);
	i8 v550 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v550 = v549;

	i8 v551 = (i8)(intptr_t)(ws+3376);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+8);
	i4 v554 = *(i4*)(intptr_t)v553;
	i1 v555 = (i1)+9;
	i4 v556 = ((i4)v554)<<v555;
	i8 v557 = (i8)(intptr_t)(ws+3400);
	*(i4*)(intptr_t)v557 = v556;


	
pwrite( 
*(i4*)(intptr_t)(ws+3384) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3392) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3400) 
); 



	i1 v558 = (i1)+0;
	i8 v559 = (i8)(intptr_t)(ws+3376);
	i8 v560 = *(i8*)(intptr_t)v559;
	i8 v561 = v560+(+6);
	*(i1*)(intptr_t)v561 = v558;

	goto c02_0089;

c02_008d:;

c02_0089:;

endsub:;
}
	void f37_fcb_i_blockout(i8 /* fcb */);
	void f36_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+3360 length ws+12
void f38_fcb_i_changeblock(i4 p562 /* newblock */, i8 p563 /* fcb */) {
	*(i8*)(intptr_t)(ws+3360) = p563; /*fcb */
	*(i4*)(intptr_t)(ws+3368) = p562; /*newblock */

	i8 v564 = (i8)(intptr_t)(ws+3368);
	i4 v565 = *(i4*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+3360);
	i8 v567 = *(i8*)(intptr_t)v566;
	i8 v568 = v567+(+8);
	i4 v569 = *(i4*)(intptr_t)v568;
	if (v565==v569) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v570 = (i8)(intptr_t)(ws+3360);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v572)(v571);

	i8 v573 = (i8)(intptr_t)(ws+3368);
	i4 v574 = *(i4*)(intptr_t)v573;
	i8 v575 = (i8)(intptr_t)(ws+3360);
	i8 v576 = *(i8*)(intptr_t)v575;
	i8 v577 = v576+(+8);
	*(i4*)(intptr_t)v577 = v574;

	i8 v578 = (i8)(intptr_t)(ws+3360);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = (i8)(intptr_t)(f36_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v580)(v579);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+2992 length ws+28
void f39_fcb_i_open(i1* p581 /* errno */, i4 p582 /* flags */, i8 p583 /* filename */, i8 p584 /* fcb */) {
	*(i8*)(intptr_t)(ws+2992) = p584; /*fcb */
	*(i8*)(intptr_t)(ws+3000) = p583; /*filename */
	*(i4*)(intptr_t)(ws+3008) = p582; /*flags */

	i8 v585 = (i8)(intptr_t)(ws+2992);
	i8 v586 = *(i8*)(intptr_t)v585;
	i1 v587 = (i1)+0;
	i8 v588 = (i8)+524;
	i8 v589 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v589)(v588, v587, v586);

	i2 v590 = (i2)+511;
	i8 v591 = (i8)(intptr_t)(ws+2992);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+4);
	*(i2*)(intptr_t)v593 = v590;

	i4 v594 = (i4)-1;
	i8 v595 = (i8)(intptr_t)(ws+2992);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	*(i4*)(intptr_t)v597 = v594;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3016) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3000) 
,  
*(i4*)(intptr_t)(ws+3008) 
,  
(+438)
); 



	i8 v598 = (i8)(intptr_t)(ws+3016);
	i4 v599 = *(i4*)(intptr_t)v598;
	i8 v600 = (i8)(intptr_t)(ws+2992);
	i8 v601 = *(i8*)(intptr_t)v600;
	*(i4*)(intptr_t)v601 = v599;

	i8 v602 = (i8)(intptr_t)(ws+3016);
	i4 v603 = *(i4*)(intptr_t)v602;
	i4 v604 = (i4)+0;
	if ((s4)v603<(s4)v604) goto c02_0096; else goto c02_0097;

c02_0096:;


	
*(i1*)(intptr_t)(ws+3012) 
 = errno; 



	goto c02_0093;

c02_0097:;

	i1 v605 = (i1)+0;
	i8 v606 = (i8)(intptr_t)(ws+3012);
	*(i1*)(intptr_t)v606 = v605;

c02_0093:;

endsub:;
	*p581 = *(i1*)(intptr_t)(ws+3012);
}
	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+2968 length ws+17
void f40_FCBOpenIn(i1* p607 /* errno */, i8 p608 /* filename */, i8 p609 /* fcb */) {
	*(i8*)(intptr_t)(ws+2968) = p609; /*fcb */
	*(i8*)(intptr_t)(ws+2976) = p608; /*filename */

	i8 v610 = (i8)(intptr_t)(ws+2968);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = (i8)(intptr_t)(ws+2976);
	i8 v613 = *(i8*)(intptr_t)v612;
	i4 v614 = (i4)+0;
	i8 v615 = (i8)(intptr_t)(f39_fcb_i_open);
	i1 v616;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v615)(&v616, v614, v613, v611);
	i8 v617 = (i8)(intptr_t)(ws+2984);
	*(i1*)(intptr_t)v617 = v616;

endsub:;
	*p607 = *(i1*)(intptr_t)(ws+2984);
}
	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+2896 length ws+17
void f42_FCBOpenOut(i1* p629 /* errno */, i8 p630 /* filename */, i8 p631 /* fcb */) {
	*(i8*)(intptr_t)(ws+2896) = p631; /*fcb */
	*(i8*)(intptr_t)(ws+2904) = p630; /*filename */

	i8 v632 = (i8)(intptr_t)(ws+2896);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = (i8)(intptr_t)(ws+2904);
	i8 v635 = *(i8*)(intptr_t)v634;
	i4 v636 = (i4)+578;
	i8 v637 = (i8)(intptr_t)(f39_fcb_i_open);
	i1 v638;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v637)(&v638, v636, v635, v633);
	i8 v639 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v639 = v638;

endsub:;
	*p629 = *(i1*)(intptr_t)(ws+2912);
}
	void f37_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+2960 length ws+16
void f43_FCBClose(i1* p640 /* errno */, i8 p641 /* fcb */) {
	*(i8*)(intptr_t)(ws+2960) = p641; /*fcb */

	i8 v642 = (i8)(intptr_t)(ws+2960);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v644)(v643);

	i8 v645 = (i8)(intptr_t)(ws+2960);
	i8 v646 = *(i8*)(intptr_t)v645;
	i4 v647 = *(i4*)(intptr_t)v646;
	i8 v648 = (i8)(intptr_t)(ws+2972);
	*(i4*)(intptr_t)v648 = v647;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+2972) 
); 


	
*(i1*)(intptr_t)(ws+2968) 
 = errno; 



endsub:;
	*p640 = *(i1*)(intptr_t)(ws+2968);
}
	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// FCBSeek workspace at ws+2968 length ws+18
void f44_FCBSeek(i4 p649 /* pos */, i8 p650 /* fcb */) {
	*(i8*)(intptr_t)(ws+2968) = p650; /*fcb */
	*(i4*)(intptr_t)(ws+2976) = p649; /*pos */

	i8 v651 = (i8)(intptr_t)(ws+2976);
	i4 v652 = *(i4*)(intptr_t)v651;
	i4 v653 = v652+(-1);
	i8 v654 = (i8)(intptr_t)(ws+2976);
	*(i4*)(intptr_t)v654 = v653;

	i8 v655 = (i8)(intptr_t)(ws+2976);
	i4 v656 = *(i4*)(intptr_t)v655;
	i1 v657 = (i1)+9;
	i4 v658 = ((i4)v656)>>v657;
	i8 v659 = (i8)(intptr_t)(ws+2980);
	*(i4*)(intptr_t)v659 = v658;

	i8 v660 = (i8)(intptr_t)(ws+2976);
	i4 v661 = *(i4*)(intptr_t)v660;
	i2 v662 = v661;
	i2 v663 = v662&(+511);
	i8 v664 = (i8)(intptr_t)(ws+2984);
	*(i2*)(intptr_t)v664 = v663;

	i8 v665 = (i8)(intptr_t)(ws+2968);
	i8 v666 = *(i8*)(intptr_t)v665;
	i8 v667 = (i8)(intptr_t)(ws+2980);
	i4 v668 = *(i4*)(intptr_t)v667;
	i8 v669 = (i8)(intptr_t)(f38_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v669)(v668, v666);

	i8 v670 = (i8)(intptr_t)(ws+2984);
	i2 v671 = *(i2*)(intptr_t)v670;
	i8 v672 = (i8)(intptr_t)(ws+2968);
	i8 v673 = *(i8*)(intptr_t)v672;
	i8 v674 = v673+(+4);
	*(i2*)(intptr_t)v674 = v671;

endsub:;
}

// FCBPos workspace at ws+2960 length ws+12
void f45_FCBPos(i4* p675 /* pos */, i8 p676 /* fcb */) {
	*(i8*)(intptr_t)(ws+2960) = p676; /*fcb */

	i8 v677 = (i8)(intptr_t)(ws+2960);
	i8 v678 = *(i8*)(intptr_t)v677;
	i8 v679 = v678+(+8);
	i4 v680 = *(i4*)(intptr_t)v679;
	i1 v681 = (i1)+9;
	i4 v682 = ((i4)v680)<<v681;
	i8 v683 = (i8)(intptr_t)(ws+2960);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+4);
	i2 v686 = *(i2*)(intptr_t)v685;
	i4 v687 = v686;
	i4 v688 = v682|v687;
	i4 v689 = v688+(+1);
	i8 v690 = (i8)(intptr_t)(ws+2968);
	*(i4*)(intptr_t)v690 = v689;

endsub:;
	*p675 = *(i4*)(intptr_t)(ws+2968);
}
	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+3352 length ws+8
void f47_fcb_i_nextchar(i8 p705 /* fcb */) {
	*(i8*)(intptr_t)(ws+3352) = p705; /*fcb */

	i8 v706 = (i8)(intptr_t)(ws+3352);
	i8 v707 = *(i8*)(intptr_t)v706;
	i8 v708 = v707+(+4);
	i2 v709 = *(i2*)(intptr_t)v708;
	i2 v710 = v709+(+1);
	i8 v711 = (i8)(intptr_t)(ws+3352);
	i8 v712 = *(i8*)(intptr_t)v711;
	i8 v713 = v712+(+4);
	*(i2*)(intptr_t)v713 = v710;

	i8 v714 = (i8)(intptr_t)(ws+3352);
	i8 v715 = *(i8*)(intptr_t)v714;
	i8 v716 = v715+(+4);
	i2 v717 = *(i2*)(intptr_t)v716;
	i2 v718 = (i2)+512;
	if (v717==v718) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v719 = (i8)(intptr_t)(ws+3352);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = (i8)(intptr_t)(ws+3352);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = v722+(+8);
	i4 v724 = *(i4*)(intptr_t)v723;
	i4 v725 = v724+(+1);
	i8 v726 = (i8)(intptr_t)(f38_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v726)(v725, v720);

	i2 v727 = (i2)+0;
	i8 v728 = (i8)(intptr_t)(ws+3352);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = v729+(+4);
	*(i2*)(intptr_t)v730 = v727;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}
	void f47_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+2936 length ws+9
void f48_FCBGetChar(i1* p731 /* c */, i8 p732 /* fcb */) {
	*(i8*)(intptr_t)(ws+2936) = p732; /*fcb */

	i8 v733 = (i8)(intptr_t)(ws+2936);
	i8 v734 = *(i8*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(f47_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v735)(v734);

	i8 v736 = (i8)(intptr_t)(ws+2936);
	i8 v737 = *(i8*)(intptr_t)v736;
	i8 v738 = v737+(+12);
	i8 v739 = (i8)(intptr_t)(ws+2936);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = v740+(+4);
	i2 v742 = *(i2*)(intptr_t)v741;
	i8 v743 = v742;
	i8 v744 = v738+v743;
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v746 = v745;

endsub:;
	*p731 = *(i1*)(intptr_t)(ws+2944);
}
	void f47_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+3336 length ws+9
void f49_FCBPutChar(i1 p747 /* c */, i8 p748 /* fcb */) {
	*(i8*)(intptr_t)(ws+3336) = p748; /*fcb */
	*(i1*)(intptr_t)(ws+3344) = p747; /*c */

	i8 v749 = (i8)(intptr_t)(ws+3336);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f47_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

	i8 v752 = (i8)(intptr_t)(ws+3344);
	i1 v753 = *(i1*)(intptr_t)v752;
	i8 v754 = (i8)(intptr_t)(ws+3336);
	i8 v755 = *(i8*)(intptr_t)v754;
	i8 v756 = v755+(+12);
	i8 v757 = (i8)(intptr_t)(ws+3336);
	i8 v758 = *(i8*)(intptr_t)v757;
	i8 v759 = v758+(+4);
	i2 v760 = *(i2*)(intptr_t)v759;
	i8 v761 = v760;
	i8 v762 = v756+v761;
	*(i1*)(intptr_t)v762 = v753;

	i1 v763 = (i1)+1;
	i8 v764 = (i8)(intptr_t)(ws+3336);
	i8 v765 = *(i8*)(intptr_t)v764;
	i8 v766 = v765+(+6);
	*(i1*)(intptr_t)v766 = v763;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupBraced workspace at ws+3072 length ws+32
void f57_StrDupBraced(i8* p835 /* news */, i8 p836 /* s */) {
	*(i8*)(intptr_t)(ws+3072) = p836; /*s */

	i8 v837 = (i8)(intptr_t)(ws+3072);
	i8 v838 = *(i8*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(f28_StrLen);
	i8 v840;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v839)(&v840, v838);
	i8 v841 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v841 = v840;

	i8 v842 = (i8)(intptr_t)(ws+3088);
	i8 v843 = *(i8*)(intptr_t)v842;
	i8 v844 = v843+(+3);
	i8 v845 = (i8)(intptr_t)(f31_Alloc);
	i8 v846;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v845)(&v846, v844);
	i8 v847 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v847 = v846;

	i8 v848 = (i8)(intptr_t)(ws+3080);
	i8 v849 = *(i8*)(intptr_t)v848;
	i8 v850 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v850 = v849;

	i1 v851 = (i1)+91;
	i8 v852 = (i8)(intptr_t)(ws+3096);
	i8 v853 = *(i8*)(intptr_t)v852;
	*(i1*)(intptr_t)v853 = v851;

	i8 v854 = (i8)(intptr_t)(ws+3096);
	i8 v855 = *(i8*)(intptr_t)v854;
	i8 v856 = v855+(+1);
	i8 v857 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v857 = v856;

	i8 v858 = (i8)(intptr_t)(ws+3072);
	i8 v859 = *(i8*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(ws+3088);
	i8 v861 = *(i8*)(intptr_t)v860;
	i8 v862 = (i8)(intptr_t)(ws+3096);
	i8 v863 = *(i8*)(intptr_t)v862;
	i8 v864 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v864)(v863, v861, v859);

	i8 v865 = (i8)(intptr_t)(ws+3096);
	i8 v866 = *(i8*)(intptr_t)v865;
	i8 v867 = (i8)(intptr_t)(ws+3088);
	i8 v868 = *(i8*)(intptr_t)v867;
	i8 v869 = v866+v868;
	i8 v870 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v870 = v869;

	i1 v871 = (i1)+93;
	i8 v872 = (i8)(intptr_t)(ws+3096);
	i8 v873 = *(i8*)(intptr_t)v872;
	*(i1*)(intptr_t)v873 = v871;

	i8 v874 = (i8)(intptr_t)(ws+3096);
	i8 v875 = *(i8*)(intptr_t)v874;
	i8 v876 = v875+(+1);
	i8 v877 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v877 = v876;

	i1 v878 = (i1)+0;
	i8 v879 = (i8)(intptr_t)(ws+3096);
	i8 v880 = *(i8*)(intptr_t)v879;
	*(i1*)(intptr_t)v880 = v878;

endsub:;
	*p835 = *(i8*)(intptr_t)(ws+3080);
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupArrayed workspace at ws+3040 length ws+40
void f58_StrDupArrayed(i8* p881 /* news */, i2 p882 /* i */, i8 p883 /* s */) {
	*(i8*)(intptr_t)(ws+3040) = p883; /*s */
	*(i2*)(intptr_t)(ws+3048) = p882; /*i */

	i8 v884 = (i8)(intptr_t)(ws+3040);
	i8 v885 = *(i8*)(intptr_t)v884;
	i8 v886 = (i8)(intptr_t)(f28_StrLen);
	i8 v887;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v886)(&v887, v885);
	i8 v888 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v888 = v887;

	i8 v889 = (i8)(intptr_t)(ws+3064);
	i8 v890 = *(i8*)(intptr_t)v889;
	i8 v891 = v890+(+3);
	i8 v892 = (i8)(intptr_t)(f31_Alloc);
	i8 v893;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v892)(&v893, v891);
	i8 v894 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v894 = v893;

	i8 v895 = (i8)(intptr_t)(ws+3056);
	i8 v896 = *(i8*)(intptr_t)v895;
	i8 v897 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v897 = v896;

	i8 v898 = (i8)(intptr_t)(ws+3040);
	i8 v899 = *(i8*)(intptr_t)v898;
	i8 v900 = (i8)(intptr_t)(ws+3064);
	i8 v901 = *(i8*)(intptr_t)v900;
	i8 v902 = (i8)(intptr_t)(ws+3072);
	i8 v903 = *(i8*)(intptr_t)v902;
	i8 v904 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v904)(v903, v901, v899);

	i8 v905 = (i8)(intptr_t)(ws+3072);
	i8 v906 = *(i8*)(intptr_t)v905;
	i8 v907 = (i8)(intptr_t)(ws+3064);
	i8 v908 = *(i8*)(intptr_t)v907;
	i8 v909 = v906+v908;
	i8 v910 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v910 = v909;

	i1 v911 = (i1)+91;
	i8 v912 = (i8)(intptr_t)(ws+3072);
	i8 v913 = *(i8*)(intptr_t)v912;
	*(i1*)(intptr_t)v913 = v911;

	i8 v914 = (i8)(intptr_t)(ws+3072);
	i8 v915 = *(i8*)(intptr_t)v914;
	i8 v916 = v915+(+1);
	i8 v917 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v917 = v916;

	i1 v918 = (i1)+93;
	i8 v919 = (i8)(intptr_t)(ws+3072);
	i8 v920 = *(i8*)(intptr_t)v919;
	*(i1*)(intptr_t)v920 = v918;

	i8 v921 = (i8)(intptr_t)(ws+3072);
	i8 v922 = *(i8*)(intptr_t)v921;
	i8 v923 = v922+(+1);
	i8 v924 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v924 = v923;

	i1 v925 = (i1)+0;
	i8 v926 = (i8)(intptr_t)(ws+3072);
	i8 v927 = *(i8*)(intptr_t)v926;
	*(i1*)(intptr_t)v927 = v925;

endsub:;
	*p881 = *(i8*)(intptr_t)(ws+3056);
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
const i1 c02_s001e[] = { 0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
const i1 c02_s001f[] = { 0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0 };
const i1 c02_s0020[] = { 0x6c,0x6f,0x6f,0x70,0 };
const i1 c02_s0021[] = { 0x6e,0x6f,0x74,0 };
const i1 c02_s0022[] = { 0x6f,0x72,0 };
const i1 c02_s0023[] = { 0x72,0x65,0x63,0x6f,0x72,0x64,0 };
const i1 c02_s0024[] = { 0x72,0x65,0x74,0x75,0x72,0x6e,0 };
const i1 c02_s0025[] = { 0x73,0x75,0x62,0 };
const i1 c02_s0026[] = { 0x74,0x68,0x65,0x6e,0 };
const i1 c02_s0027[] = { 0x74,0x79,0x70,0x65,0x64,0x65,0x66,0 };
const i1 c02_s0028[] = { 0x76,0x61,0x72,0 };
const i1 c02_s0029[] = { 0x77,0x68,0x65,0x6e,0 };
const i1 c02_s002a[] = { 0x77,0x68,0x69,0x6c,0x65,0 };
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

	{ .ptr = (void*)c02_s0029 },

	{ .ptr = (void*)c02_s002a },

};
static data c02_ab3[] = { // keyword_ids








	{ .i1 = { 0x43,0x01,0x23,0x24,0x2b,0x0b,0x3e,0x2a}},








	{ .i1 = { 0x28,0x3c,0x3d,0x2e,0x3a,0x03,0x40,0x07}},








	{ .i1 = { 0x3f,0x09,0x25,0x0a,0x0b,0x0c,0x41,0xff}},








	{ .i1 = { 0x26,0x2c,0x44,0x0d,0x0f,0x2f,0x14,0x15}},







	{ .i1 = { 0x19,0x1a,0x27,0x1c,0x42,0x1d}},
};
const i1 c02_s002b[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s002c[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s002d[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s002e[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);

// StartError workspace at ws+3312 length ws+0
void f59_StartError(void) {

	i8 v936 = (i8)(intptr_t)c02_s002b;
	i8 v937 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v937)(v936);

	i8 v938 = (i8)(intptr_t)(ws+232);
	i8 v939 = *(i8*)(intptr_t)v938;
	i8 v940 = (i8)+0;
	if (v939==v940) goto c02_00b7; else goto c02_00b8;

c02_00b7:;

	i8 v941 = (i8)(intptr_t)c02_s002c;
	i8 v942 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v942)(v941);

	goto c02_00b4;

c02_00b8:;

	i8 v943 = (i8)(intptr_t)(ws+232);
	i8 v944 = *(i8*)(intptr_t)v943;
	i8 v945 = v944+(+8);
	i8 v946 = *(i8*)(intptr_t)v945;
	i8 v947 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v947)(v946);

	i8 v948 = (i8)(intptr_t)c02_s002d;
	i8 v949 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v949)(v948);

	i8 v950 = (i8)(intptr_t)(ws+232);
	i8 v951 = *(i8*)(intptr_t)v950;
	i8 v952 = v951+(+16);
	i2 v953 = *(i2*)(intptr_t)v952;
	i8 v954 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v954)(v953);

c02_00b4:;

	i8 v955 = (i8)(intptr_t)c02_s002e;
	i8 v956 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v956)(v955);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+3312 length ws+0
void f60_EndError(void) {

	i8 v957 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v957)();

	i8 v958 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v958)();

endsub:;
}
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// SimpleError workspace at ws+3304 length ws+8
void f61_SimpleError(i8 p959 /* message */) {
	*(i8*)(intptr_t)(ws+3304) = p959; /*message */

	i8 v960 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v960)();

	i8 v961 = (i8)(intptr_t)(ws+3304);
	i8 v962 = *(i8*)(intptr_t)v961;
	i8 v963 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v963)(v962);

	i8 v964 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v964)();

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// LexerAddIncludePath workspace at ws+2896 length ws+16
void f62_LexerAddIncludePath(i8 p965 /* path */) {
	*(i8*)(intptr_t)(ws+2896) = p965; /*path */

	i8 v966 = (i8)+16;
	i8 v967 = (i8)(intptr_t)(f31_Alloc);
	i8 v968;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v967)(&v968, v966);
	i8 v969 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v969 = v968;

	i8 v970 = (i8)(intptr_t)(ws+224);
	i8 v971 = *(i8*)(intptr_t)v970;
	i8 v972 = (i8)(intptr_t)(ws+2904);
	i8 v973 = *(i8*)(intptr_t)v972;
	*(i8*)(intptr_t)v973 = v971;

	i8 v974 = (i8)(intptr_t)(ws+2896);
	i8 v975 = *(i8*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+2904);
	i8 v977 = *(i8*)(intptr_t)v976;
	i8 v978 = v977+(+8);
	*(i8*)(intptr_t)v978 = v975;

	i8 v979 = (i8)(intptr_t)(ws+2904);
	i8 v980 = *(i8*)(intptr_t)v979;
	i8 v981 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v981 = v980;

endsub:;
}
const i1 c02_s002f[] = { 0x20,0x20,0 };
	void f11_print(i8 /* ptr */);

// LexerPrintSpaces workspace at ws+2944 length ws+1
void f63_LexerPrintSpaces(void) {

	i8 v984 = (i8)(intptr_t)(ws+376);
	i1 v985 = *(i1*)(intptr_t)v984;
	i8 v986 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v986 = v985;

c02_00bb:;

	i8 v987 = (i8)(intptr_t)(ws+2944);
	i1 v988 = *(i1*)(intptr_t)v987;
	i1 v989 = (i1)+0;
	if (v988==v989) goto c02_00be; else goto c02_00bd;

c02_00bd:;

	i8 v990 = (i8)(intptr_t)c02_s002f;
	i8 v991 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v991)(v990);

	i8 v992 = (i8)(intptr_t)(ws+2944);
	i1 v993 = *(i1*)(intptr_t)v992;
	i1 v994 = v993+(-1);
	i8 v995 = (i8)(intptr_t)(ws+2944);
	*(i1*)(intptr_t)v995 = v994;

	goto c02_00bb;

c02_00be:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f32_Free(i8 /* block */);

// lexer_i_open workspace at ws+2944 length ws+24
void f64_lexer_i_open(i1* p996 /* result */, i8 p997 /* file */) {
	*(i8*)(intptr_t)(ws+2944) = p997; /*file */

	i8 v998 = (i8)+524;
	i8 v999 = (i8)(intptr_t)(f31_Alloc);
	i8 v1000;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v999)(&v1000, v998);
	i8 v1001 = (i8)(intptr_t)(ws+2960);
	*(i8*)(intptr_t)v1001 = v1000;

	i8 v1002 = (i8)(intptr_t)(ws+2960);
	i8 v1003 = *(i8*)(intptr_t)v1002;
	i8 v1004 = (i8)(intptr_t)(ws+2944);
	i8 v1005 = *(i8*)(intptr_t)v1004;
	i8 v1006 = v1005+(+8);
	i8 v1007 = *(i8*)(intptr_t)v1006;
	i8 v1008 = (i8)(intptr_t)(f40_FCBOpenIn);
	i1 v1009;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1008)(&v1009, v1007, v1003);
	i1 v1010 = (i1)+0;
	if (v1009==v1010) goto c02_00c2; else goto c02_00c3;

c02_00c2:;

	i8 v1011 = (i8)(intptr_t)(ws+2960);
	i8 v1012 = *(i8*)(intptr_t)v1011;
	i8 v1013 = (i8)(intptr_t)(ws+2944);
	i8 v1014 = *(i8*)(intptr_t)v1013;
	i8 v1015 = v1014+(+24);
	*(i8*)(intptr_t)v1015 = v1012;

	i8 v1016 = (i8)(intptr_t)(ws+2960);
	i8 v1017 = *(i8*)(intptr_t)v1016;
	i8 v1018 = (i8)(intptr_t)(ws+2944);
	i8 v1019 = *(i8*)(intptr_t)v1018;
	i8 v1020 = v1019+(+20);
	i4 v1021 = *(i4*)(intptr_t)v1020;
	i8 v1022 = (i8)(intptr_t)(f44_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1022)(v1021, v1017);

	i1 v1023 = (i1)+0;
	i8 v1024 = (i8)(intptr_t)(ws+2952);
	*(i1*)(intptr_t)v1024 = v1023;

	goto c02_00bf;

c02_00c3:;

	i8 v1025 = (i8)(intptr_t)(ws+2960);
	i8 v1026 = *(i8*)(intptr_t)v1025;
	i8 v1027 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1027)(v1026);

	i1 v1028 = (i1)+1;
	i8 v1029 = (i8)(intptr_t)(ws+2952);
	*(i1*)(intptr_t)v1029 = v1028;

c02_00bf:;

endsub:;
	*p996 = *(i1*)(intptr_t)(ws+2952);
}
	void f45_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
	void f32_Free(i8 /* block */);

// lexer_i_close workspace at ws+2944 length ws+9
void f65_lexer_i_close(i8 p1030 /* file */) {
	*(i8*)(intptr_t)(ws+2944) = p1030; /*file */

	i8 v1031 = (i8)(intptr_t)(ws+2944);
	i8 v1032 = *(i8*)(intptr_t)v1031;
	i8 v1033 = v1032+(+24);
	i8 v1034 = *(i8*)(intptr_t)v1033;
	i8 v1035 = (i8)(intptr_t)(f45_FCBPos);
	i4 v1036;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v1035)(&v1036, v1034);
	i8 v1037 = (i8)(intptr_t)(ws+2944);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = v1038+(+20);
	*(i4*)(intptr_t)v1039 = v1036;

	i8 v1040 = (i8)(intptr_t)(ws+2944);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = v1041+(+24);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	i8 v1044 = (i8)(intptr_t)(f43_FCBClose);
	i1 v1045;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1044)(&v1045, v1043);
	i8 v1046 = (i8)(intptr_t)(ws+2952);
	*(i1*)(intptr_t)v1046 = v1045;

	i8 v1047 = (i8)(intptr_t)(ws+2944);
	i8 v1048 = *(i8*)(intptr_t)v1047;
	i8 v1049 = v1048+(+24);
	i8 v1050 = *(i8*)(intptr_t)v1049;
	i8 v1051 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1051)(v1050);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f64_lexer_i_open(i1* /* result */, i8 /* file */);
	void f63_LexerPrintSpaces(void);
const i1 c02_s0030[] = { 0x3e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f65_lexer_i_close(i8 /* file */);
	void f32_Free(i8 /* block */);
	void f59_StartError(void);
const i1 c02_s0031[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0032[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// LexerIncludeFile workspace at ws+2904 length ws+40
void f66_LexerIncludeFile(i8 p1052 /* path */) {
	*(i8*)(intptr_t)(ws+2904) = p1052; /*path */

	i8 v1053 = (i8)+32;
	i8 v1054 = (i8)(intptr_t)(f31_Alloc);
	i8 v1055;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1054)(&v1055, v1053);
	i8 v1056 = (i8)(intptr_t)(ws+2912);
	*(i8*)(intptr_t)v1056 = v1055;

	i8 v1057 = (i8)(intptr_t)(ws+232);
	i8 v1058 = *(i8*)(intptr_t)v1057;
	i8 v1059 = (i8)(intptr_t)(ws+2912);
	i8 v1060 = *(i8*)(intptr_t)v1059;
	*(i8*)(intptr_t)v1060 = v1058;

	i2 v1061 = (i2)+1;
	i8 v1062 = (i8)(intptr_t)(ws+2912);
	i8 v1063 = *(i8*)(intptr_t)v1062;
	i8 v1064 = v1063+(+16);
	*(i2*)(intptr_t)v1064 = v1061;

	i8 v1065 = (i8)(intptr_t)(ws+224);
	i8 v1066 = *(i8*)(intptr_t)v1065;
	i8 v1067 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v1067 = v1066;

	i8 v1068 = (i8)(intptr_t)(ws+2904);
	i8 v1069 = *(i8*)(intptr_t)v1068;
	i8 v1070 = (i8)(intptr_t)(f28_StrLen);
	i8 v1071;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1070)(&v1071, v1069);
	i8 v1072 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v1072 = v1071;

c02_00c6:;

	i8 v1073 = (i8)(intptr_t)(ws+2920);
	i8 v1074 = *(i8*)(intptr_t)v1073;
	i8 v1075 = (i8)+0;
	if (v1074==v1075) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v1076 = (i8)(intptr_t)(ws+2920);
	i8 v1077 = *(i8*)(intptr_t)v1076;
	i8 v1078 = v1077+(+8);
	i8 v1079 = *(i8*)(intptr_t)v1078;
	i8 v1080 = (i8)(intptr_t)(f28_StrLen);
	i8 v1081;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1080)(&v1081, v1079);
	i8 v1082 = (i8)(intptr_t)(ws+2936);
	*(i8*)(intptr_t)v1082 = v1081;

	i8 v1083 = (i8)(intptr_t)(ws+2928);
	i8 v1084 = *(i8*)(intptr_t)v1083;
	i8 v1085 = (i8)(intptr_t)(ws+2936);
	i8 v1086 = *(i8*)(intptr_t)v1085;
	i8 v1087 = v1084+v1086;
	i8 v1088 = v1087+(+1);
	i8 v1089 = (i8)(intptr_t)(f31_Alloc);
	i8 v1090;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1089)(&v1090, v1088);
	i8 v1091 = (i8)(intptr_t)(ws+2912);
	i8 v1092 = *(i8*)(intptr_t)v1091;
	i8 v1093 = v1092+(+8);
	*(i8*)(intptr_t)v1093 = v1090;

	i8 v1094 = (i8)(intptr_t)(ws+2920);
	i8 v1095 = *(i8*)(intptr_t)v1094;
	i8 v1096 = v1095+(+8);
	i8 v1097 = *(i8*)(intptr_t)v1096;
	i8 v1098 = (i8)(intptr_t)(ws+2936);
	i8 v1099 = *(i8*)(intptr_t)v1098;
	i8 v1100 = (i8)(intptr_t)(ws+2912);
	i8 v1101 = *(i8*)(intptr_t)v1100;
	i8 v1102 = v1101+(+8);
	i8 v1103 = *(i8*)(intptr_t)v1102;
	i8 v1104 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1104)(v1103, v1099, v1097);

	i8 v1105 = (i8)(intptr_t)(ws+2904);
	i8 v1106 = *(i8*)(intptr_t)v1105;
	i8 v1107 = (i8)(intptr_t)(ws+2928);
	i8 v1108 = *(i8*)(intptr_t)v1107;
	i8 v1109 = v1108+(+1);
	i8 v1110 = (i8)(intptr_t)(ws+2912);
	i8 v1111 = *(i8*)(intptr_t)v1110;
	i8 v1112 = v1111+(+8);
	i8 v1113 = *(i8*)(intptr_t)v1112;
	i8 v1114 = (i8)(intptr_t)(ws+2936);
	i8 v1115 = *(i8*)(intptr_t)v1114;
	i8 v1116 = v1113+v1115;
	i8 v1117 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1117)(v1116, v1109, v1106);

	i8 v1118 = (i8)(intptr_t)(ws+2912);
	i8 v1119 = *(i8*)(intptr_t)v1118;
	i8 v1120 = (i8)(intptr_t)(f64_lexer_i_open);
	i1 v1121;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1120)(&v1121, v1119);
	i1 v1122 = (i1)+0;
	if (v1121==v1122) goto c02_00cd; else goto c02_00ce;

c02_00cd:;

	i8 v1123 = (i8)(intptr_t)(ws+376);
	i1 v1124 = *(i1*)(intptr_t)v1123;
	i1 v1125 = v1124+(+1);
	i8 v1126 = (i8)(intptr_t)(ws+376);
	*(i1*)(intptr_t)v1126 = v1125;

	i8 v1127 = (i8)(intptr_t)(f63_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1127)();

	i8 v1128 = (i8)(intptr_t)c02_s0030;
	i8 v1129 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1129)(v1128);

	i8 v1130 = (i8)(intptr_t)(ws+2912);
	i8 v1131 = *(i8*)(intptr_t)v1130;
	i8 v1132 = v1131+(+8);
	i8 v1133 = *(i8*)(intptr_t)v1132;
	i8 v1134 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1134)(v1133);

	i8 v1135 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1135)();

	i8 v1136 = (i8)(intptr_t)(ws+232);
	i8 v1137 = *(i8*)(intptr_t)v1136;
	i8 v1138 = (i8)+0;
	if (v1137==v1138) goto c02_00d3; else goto c02_00d2;

c02_00d2:;

	i8 v1139 = (i8)(intptr_t)(ws+232);
	i8 v1140 = *(i8*)(intptr_t)v1139;
	i8 v1141 = (i8)(intptr_t)(f65_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1141)(v1140);

	goto c02_00cf;

c02_00d3:;

c02_00cf:;

	i8 v1142 = (i8)(intptr_t)(ws+2912);
	i8 v1143 = *(i8*)(intptr_t)v1142;
	i8 v1144 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1144 = v1143;

	goto endsub;

c02_00ce:;

c02_00ca:;

	i8 v1145 = (i8)(intptr_t)(ws+2912);
	i8 v1146 = *(i8*)(intptr_t)v1145;
	i8 v1147 = v1146+(+8);
	i8 v1148 = *(i8*)(intptr_t)v1147;
	i8 v1149 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1149)(v1148);

	i8 v1150 = (i8)(intptr_t)(ws+2920);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = *(i8*)(intptr_t)v1151;
	i8 v1153 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v1153 = v1152;

	goto c02_00c6;

c02_00c9:;

	i8 v1154 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v1154)();

	i8 v1155 = (i8)(intptr_t)c02_s0031;
	i8 v1156 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1156)(v1155);

	i8 v1157 = (i8)(intptr_t)(ws+2904);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1159)(v1158);

	i8 v1160 = (i8)(intptr_t)c02_s0032;
	i8 v1161 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1161)(v1160);

	i8 v1162 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v1162)();

endsub:;
}

// lexer_i_ctype workspace at ws+2912 length ws+3
void f68_lexer_i_ctype(i1* p1164 /* type */, i1* p1165 /* token */, i1 p1166 /* c */) {
	*(i1*)(intptr_t)(ws+2912) = p1166; /*c */

	i8 v1167 = (i8)(intptr_t)(ws+2912);
	i1 v1168 = *(i1*)(intptr_t)v1167;
	i1 v1169 = (i1)+33;
	if (v1168<v1169) goto c02_00da; else goto c02_00db;

c02_00db:;

	i1 v1170 = (i1)+127;
	i8 v1171 = (i8)(intptr_t)(ws+2912);
	i1 v1172 = *(i1*)(intptr_t)v1171;
	if (v1170<v1172) goto c02_00da; else goto c02_00d9;

c02_00d9:;

	i8 v1173 = (i8)(intptr_t)(((i1*)c02_ab1+0));
	i8 v1174 = (i8)(intptr_t)(ws+2912);
	i1 v1175 = *(i1*)(intptr_t)v1174;
	i1 v1176 = v1175+(-33);
	i8 v1177 = v1176;
	i8 v1178 = v1173+v1177;
	i1 v1179 = *(i1*)(intptr_t)v1178;
	i8 v1180 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v1180 = v1179;

	i8 v1181 = (i8)(intptr_t)(ws+2913);
	i1 v1182 = *(i1*)(intptr_t)v1181;
	i1 v1183 = v1182&(+128);
	i1 v1184 = (i1)+0;
	if (v1183==v1184) goto c02_00e0; else goto c02_00df;

c02_00df:;

	i8 v1185 = (i8)(intptr_t)(ws+2913);
	i1 v1186 = *(i1*)(intptr_t)v1185;
	i1 v1187 = v1186&(-129);
	i8 v1188 = (i8)(intptr_t)(ws+2914);
	*(i1*)(intptr_t)v1188 = v1187;

	i1 v1189 = (i1)+128;
	i8 v1190 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v1190 = v1189;

	goto c02_00dc;

c02_00e0:;

c02_00dc:;

	goto c02_00d4;

c02_00da:;

	i1 v1191 = (i1)+0;
	i8 v1192 = (i8)(intptr_t)(ws+2913);
	*(i1*)(intptr_t)v1192 = v1191;

	i1 v1193 = (i1)+0;
	i8 v1194 = (i8)(intptr_t)(ws+2914);
	*(i1*)(intptr_t)v1194 = v1193;

c02_00d4:;

endsub:;
	*p1165 = *(i1*)(intptr_t)(ws+2914);
	*p1164 = *(i1*)(intptr_t)(ws+2913);
}
	void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);
	void f65_lexer_i_close(i8 /* file */);
	void f32_Free(i8 /* block */);
	void f63_LexerPrintSpaces(void);
const i1 c02_s0033[] = { 0x3c,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f64_lexer_i_open(i1* /* result */, i8 /* file */);
const i1 c02_s0034[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
	void f61_SimpleError(i8 /* message */);

// lexer_i_getchar workspace at ws+2920 length ws+16
void f69_lexer_i_getchar(i1* p1195 /* c */) {

	i8 v1196 = (i8)(intptr_t)(ws+240);
	i1 v1197 = *(i1*)(intptr_t)v1196;
	i1 v1198 = (i1)+0;
	if (v1197==v1198) goto c02_00e5; else goto c02_00e4;

c02_00e4:;

	i8 v1199 = (i8)(intptr_t)(ws+240);
	i1 v1200 = *(i1*)(intptr_t)v1199;
	i8 v1201 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1201 = v1200;

	i1 v1202 = (i1)+0;
	i8 v1203 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1203 = v1202;

	goto endsub;

c02_00e5:;

c02_00e1:;

c02_00e6:;

	i8 v1204 = (i8)(intptr_t)(ws+232);
	i8 v1205 = *(i8*)(intptr_t)v1204;
	i8 v1206 = (i8)+0;
	if (v1205==v1206) goto c02_00eb; else goto c02_00ec;

c02_00eb:;

	i1 v1207 = (i1)+0;
	i8 v1208 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1208 = v1207;

	goto c02_00e7;

c02_00ec:;

c02_00e8:;

	i8 v1209 = (i8)(intptr_t)(ws+232);
	i8 v1210 = *(i8*)(intptr_t)v1209;
	i8 v1211 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v1211 = v1210;

	i8 v1212 = (i8)(intptr_t)(ws+2928);
	i8 v1213 = *(i8*)(intptr_t)v1212;
	i8 v1214 = v1213+(+24);
	i8 v1215 = *(i8*)(intptr_t)v1214;
	i8 v1216 = (i8)(intptr_t)(f48_FCBGetChar);
	i1 v1217;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1216)(&v1217, v1215);
	i8 v1218 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1218 = v1217;

	i8 v1219 = (i8)(intptr_t)(ws+2920);
	i1 v1220 = *(i1*)(intptr_t)v1219;
	i1 v1221 = (i1)+26;
	if (v1220==v1221) goto c02_00f0; else goto c02_00f1;

c02_00f0:;

	i1 v1222 = (i1)+0;
	i8 v1223 = (i8)(intptr_t)(ws+2920);
	*(i1*)(intptr_t)v1223 = v1222;

	goto c02_00ed;

c02_00f1:;

c02_00ed:;

	i8 v1224 = (i8)(intptr_t)(ws+2920);
	i1 v1225 = *(i1*)(intptr_t)v1224;
	i1 v1226 = (i1)+0;
	if (v1225==v1226) goto c02_00f6; else goto c02_00f5;

c02_00f5:;

	goto c02_00e7;

c02_00f6:;

c02_00f2:;

	i8 v1227 = (i8)(intptr_t)(ws+2928);
	i8 v1228 = *(i8*)(intptr_t)v1227;
	i8 v1229 = *(i8*)(intptr_t)v1228;
	i8 v1230 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1230 = v1229;

	i8 v1231 = (i8)(intptr_t)(ws+2928);
	i8 v1232 = *(i8*)(intptr_t)v1231;
	i8 v1233 = (i8)(intptr_t)(f65_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1233)(v1232);

	i8 v1234 = (i8)(intptr_t)(ws+2928);
	i8 v1235 = *(i8*)(intptr_t)v1234;
	i8 v1236 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1236)(v1235);

	i8 v1237 = (i8)(intptr_t)(ws+232);
	i8 v1238 = *(i8*)(intptr_t)v1237;
	i8 v1239 = (i8)+0;
	if (v1238==v1239) goto c02_00fb; else goto c02_00fa;

c02_00fa:;

	i8 v1240 = (i8)(intptr_t)(ws+376);
	i1 v1241 = *(i1*)(intptr_t)v1240;
	i1 v1242 = v1241+(-1);
	i8 v1243 = (i8)(intptr_t)(ws+376);
	*(i1*)(intptr_t)v1243 = v1242;

	i8 v1244 = (i8)(intptr_t)(f63_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1244)();

	i8 v1245 = (i8)(intptr_t)c02_s0033;
	i8 v1246 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1246)(v1245);

	i8 v1247 = (i8)(intptr_t)(ws+232);
	i8 v1248 = *(i8*)(intptr_t)v1247;
	i8 v1249 = v1248+(+8);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1251)(v1250);

	i8 v1252 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1252)();

	i8 v1253 = (i8)(intptr_t)(ws+232);
	i8 v1254 = *(i8*)(intptr_t)v1253;
	i8 v1255 = (i8)(intptr_t)(f64_lexer_i_open);
	i1 v1256;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1255)(&v1256, v1254);
	i1 v1257 = (i1)+0;
	if (v1256==v1257) goto c02_0100; else goto c02_00ff;

c02_00ff:;

	i8 v1258 = (i8)(intptr_t)c02_s0034;
	i8 v1259 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v1259)(v1258);

	goto c02_00fc;

c02_0100:;

c02_00fc:;

	goto c02_00f7;

c02_00fb:;

c02_00f7:;

	goto c02_00e6;

c02_00e7:;

endsub:;
	*p1195 = *(i1*)(intptr_t)(ws+2920);
}
	void f59_StartError(void);
const i1 c02_s0035[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f18_print_hex_i8(i1 /* value */);
	void f60_EndError(void);

// lexer_i_unparseable workspace at ws+2896 length ws+1
void f70_lexer_i_unparseable(i1 p1260 /* c */) {
	*(i1*)(intptr_t)(ws+2896) = p1260; /*c */

	i8 v1261 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v1261)();

	i8 v1262 = (i8)(intptr_t)c02_s0035;
	i8 v1263 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1263)(v1262);

	i8 v1264 = (i8)(intptr_t)(ws+2896);
	i1 v1265 = *(i1*)(intptr_t)v1264;
	i8 v1266 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v1266)(v1265);

	i8 v1267 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v1267)();

endsub:;
}
	void f69_lexer_i_getchar(i1* /* c */);

// lexer_i_skipwhitespace workspace at ws+2904 length ws+1
void f71_lexer_i_skipwhitespace(void) {

c02_0101:;

	i8 v1268 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1269;

	((void(*)(i1* /* c */))(intptr_t)v1268)(&v1269);
	i8 v1270 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1270 = v1269;

	i8 v1271 = (i8)(intptr_t)(ws+2904);
	i1 v1272 = *(i1*)(intptr_t)v1271;

	if (v1272 != +32) goto c02_0104;

	goto c02_0103;

c02_0104:;

	if (v1272 != +13) goto c02_0105;

	goto c02_0103;

c02_0105:;

	if (v1272 != +10) goto c02_0106;

	i8 v1273 = (i8)(intptr_t)(ws+232);
	i8 v1274 = *(i8*)(intptr_t)v1273;
	i8 v1275 = v1274+(+16);
	i2 v1276 = *(i2*)(intptr_t)v1275;
	i2 v1277 = v1276+(+1);
	i8 v1278 = (i8)(intptr_t)(ws+232);
	i8 v1279 = *(i8*)(intptr_t)v1278;
	i8 v1280 = v1279+(+16);
	*(i2*)(intptr_t)v1280 = v1277;

	goto c02_0103;

c02_0106:;

	if (v1272 != +9) goto c02_0107;

	goto c02_0103;

c02_0107:;

	goto c02_0102;

c02_0103:;


	goto c02_0101;

c02_0102:;

	i8 v1281 = (i8)(intptr_t)(ws+2904);
	i1 v1282 = *(i1*)(intptr_t)v1281;
	i8 v1283 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1283 = v1282;

endsub:;
}
	void f69_lexer_i_getchar(i1* /* c */);
	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f59_StartError(void);
const i1 c02_s0036[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// lexer_i_read_identifier workspace at ws+2896 length ws+3
void f72_lexer_i_read_identifier(void) {

c02_0108:;

	i8 v1284 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1285;

	((void(*)(i1* /* c */))(intptr_t)v1284)(&v1285);
	i8 v1286 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1286 = v1285;

	i8 v1287 = (i8)(intptr_t)(ws+2896);
	i1 v1288 = *(i1*)(intptr_t)v1287;
	i8 v1289 = (i8)(intptr_t)(f68_lexer_i_ctype);
	i1 v1290;
	i1 v1291;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1289)(&v1290, &v1291, v1288);

	i8 v1292 = (i8)(intptr_t)(ws+2898);
	*(i1*)(intptr_t)v1292 = v1291;

	i8 v1293 = (i8)(intptr_t)(ws+2897);
	*(i1*)(intptr_t)v1293 = v1290;

	i8 v1294 = (i8)(intptr_t)(ws+2897);
	i1 v1295 = *(i1*)(intptr_t)v1294;
	i1 v1296 = v1295&(+32);
	i1 v1297 = (i1)+0;
	if (v1296==v1297) goto c02_010e; else goto c02_010d;

c02_010d:;

	i8 v1298 = (i8)(intptr_t)(ws+2896);
	i1 v1299 = *(i1*)(intptr_t)v1298;
	i8 v1300 = (i8)(intptr_t)(ws+241);
	i8 v1301 = (i8)(intptr_t)(ws+369);
	i1 v1302 = *(i1*)(intptr_t)v1301;
	i8 v1303 = v1302;
	i8 v1304 = v1300+v1303;
	*(i1*)(intptr_t)v1304 = v1299;

	i8 v1305 = (i8)(intptr_t)(ws+369);
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i1 v1307 = v1306+(+1);
	i8 v1308 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1308 = v1307;

	i8 v1309 = (i8)(intptr_t)(ws+369);
	i1 v1310 = *(i1*)(intptr_t)v1309;
	i1 v1311 = (i1)+128;
	if (v1310==v1311) goto c02_0112; else goto c02_0113;

c02_0112:;

	i8 v1312 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v1312)();

	i8 v1313 = (i8)(intptr_t)c02_s0036;
	i8 v1314 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1314)(v1313);

	i8 v1315 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v1315)();

	goto c02_010f;

c02_0113:;

c02_010f:;

	goto c02_010a;

c02_010e:;

	i8 v1316 = (i8)(intptr_t)(ws+2896);
	i1 v1317 = *(i1*)(intptr_t)v1316;
	i8 v1318 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1318 = v1317;

	goto c02_0109;

c02_010a:;

	goto c02_0108;

c02_0109:;

	i1 v1319 = (i1)+0;
	i8 v1320 = (i8)(intptr_t)(ws+241);
	i8 v1321 = (i8)(intptr_t)(ws+369);
	i1 v1322 = *(i1*)(intptr_t)v1321;
	i8 v1323 = v1322;
	i8 v1324 = v1320+v1323;
	*(i1*)(intptr_t)v1324 = v1319;

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// lexer_i_match_keyword workspace at ws+2896 length ws+2
void f73_lexer_i_match_keyword(i1* p1325 /* token */) {

	i1 v1326 = (i1)+0;
	i8 v1327 = (i8)(intptr_t)(ws+2897);
	*(i1*)(intptr_t)v1327 = v1326;

c02_0116:;

	i8 v1328 = (i8)(intptr_t)(ws+2897);
	i1 v1329 = *(i1*)(intptr_t)v1328;
	i1 v1330 = (i1)+38;
	if (v1329==v1330) goto c02_0119; else goto c02_0118;

c02_0118:;

	i8 v1331 = (i8)(intptr_t)(ws+241);
	i8 v1332 = (i8)(intptr_t)(((i1*)c02_ab2+0));
	i8 v1333 = (i8)(intptr_t)(ws+2897);
	i1 v1334 = *(i1*)(intptr_t)v1333;
	i8 v1335 = v1334;
	i1 v1336 = (i1)+3;
	i8 v1337 = ((i8)v1335)<<v1336;
	i8 v1338 = v1332+v1337;
	i8 v1339 = *(i8*)(intptr_t)v1338;
	i8 v1340 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1341;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1340)(&v1341, v1339, v1331);
	i1 v1342 = (i1)+0;
	if (v1341==v1342) goto c02_011d; else goto c02_011e;

c02_011d:;

	i8 v1343 = (i8)(intptr_t)(((i1*)c02_ab3+0));
	i8 v1344 = (i8)(intptr_t)(ws+2897);
	i1 v1345 = *(i1*)(intptr_t)v1344;
	i8 v1346 = v1345;
	i8 v1347 = v1343+v1346;
	i1 v1348 = *(i1*)(intptr_t)v1347;
	i8 v1349 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1349 = v1348;

	goto endsub;

c02_011e:;

c02_011a:;

	i8 v1350 = (i8)(intptr_t)(ws+2897);
	i1 v1351 = *(i1*)(intptr_t)v1350;
	i1 v1352 = v1351+(+1);
	i8 v1353 = (i8)(intptr_t)(ws+2897);
	*(i1*)(intptr_t)v1353 = v1352;

	goto c02_0116;

c02_0119:;

	i1 v1354 = (i1)+33;
	i8 v1355 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1355 = v1354;

endsub:;
	*p1325 = *(i1*)(intptr_t)(ws+2896);
}
	void f69_lexer_i_getchar(i1* /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f26_ToLower(i1* /* cc */, i1 /* c */);
	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f59_StartError(void);
const i1 c02_s0037[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// lexer_i_read_number workspace at ws+2904 length ws+7
void f74_lexer_i_read_number(void) {

	i4 v1356 = (i4)+0;
	i8 v1357 = (i8)(intptr_t)(ws+372);
	*(i4*)(intptr_t)v1357 = v1356;

	i4 v1358 = (i4)+10;
	i8 v1359 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1359 = v1358;

	i8 v1360 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1361;

	((void(*)(i1* /* c */))(intptr_t)v1360)(&v1361);
	i8 v1362 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1362 = v1361;

	i8 v1363 = (i8)(intptr_t)(ws+2910);
	i1 v1364 = *(i1*)(intptr_t)v1363;
	i1 v1365 = (i1)+48;
	if (v1364==v1365) goto c02_0122; else goto c02_0123;

c02_0122:;

	i8 v1366 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1367;

	((void(*)(i1* /* c */))(intptr_t)v1366)(&v1367);
	i8 v1368 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1368 = v1367;

	i8 v1369 = (i8)(intptr_t)(ws+2910);
	i1 v1370 = *(i1*)(intptr_t)v1369;

	if (v1370 != +98) goto c02_0125;

	i4 v1371 = (i4)+2;
	i8 v1372 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1372 = v1371;

	goto c02_0124;

c02_0125:;

	if (v1370 != +111) goto c02_0126;

	i4 v1373 = (i4)+8;
	i8 v1374 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1374 = v1373;

	goto c02_0124;

c02_0126:;

	if (v1370 != +100) goto c02_0127;

	i4 v1375 = (i4)+10;
	i8 v1376 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1376 = v1375;

	goto c02_0124;

c02_0127:;

	if (v1370 != +120) goto c02_0128;

	i4 v1377 = (i4)+16;
	i8 v1378 = (i8)(intptr_t)(ws+2904);
	*(i4*)(intptr_t)v1378 = v1377;

	goto c02_0124;

c02_0128:;

	i8 v1379 = (i8)(intptr_t)(ws+2910);
	i1 v1380 = *(i1*)(intptr_t)v1379;
	i8 v1381 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1381 = v1380;

	i8 v1382 = (i8)(intptr_t)(ws+2910);
	i1 v1383 = *(i1*)(intptr_t)v1382;
	i8 v1384 = (i8)(intptr_t)(f68_lexer_i_ctype);
	i1 v1385;
	i1 v1386;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1384)(&v1385, &v1386, v1383);

	i8 v1387 = (i8)(intptr_t)(ws+2909);
	*(i1*)(intptr_t)v1387 = v1386;

	i8 v1388 = (i8)(intptr_t)(ws+2908);
	*(i1*)(intptr_t)v1388 = v1385;

	i8 v1389 = (i8)(intptr_t)(ws+2908);
	i1 v1390 = *(i1*)(intptr_t)v1389;
	i1 v1391 = v1390&(+32);
	i1 v1392 = (i1)+0;
	if (v1391==v1392) goto c02_012c; else goto c02_012d;

c02_012c:;

	goto endsub;

c02_012d:;

c02_0129:;

c02_0124:;


	goto c02_011f;

c02_0123:;

	i8 v1393 = (i8)(intptr_t)(ws+2910);
	i1 v1394 = *(i1*)(intptr_t)v1393;
	i8 v1395 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1395 = v1394;

c02_011f:;

c02_012e:;

	i8 v1396 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1397;

	((void(*)(i1* /* c */))(intptr_t)v1396)(&v1397);
	i8 v1398 = (i8)(intptr_t)(f26_ToLower);
	i1 v1399;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v1398)(&v1399, v1397);
	i8 v1400 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1400 = v1399;

	i8 v1401 = (i8)(intptr_t)(ws+2910);
	i1 v1402 = *(i1*)(intptr_t)v1401;
	i8 v1403 = (i8)(intptr_t)(f68_lexer_i_ctype);
	i1 v1404;
	i1 v1405;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1403)(&v1404, &v1405, v1402);

	i8 v1406 = (i8)(intptr_t)(ws+2909);
	*(i1*)(intptr_t)v1406 = v1405;

	i8 v1407 = (i8)(intptr_t)(ws+2908);
	*(i1*)(intptr_t)v1407 = v1404;

	i8 v1408 = (i8)(intptr_t)(ws+2908);
	i1 v1409 = *(i1*)(intptr_t)v1408;
	i1 v1410 = v1409&(+32);
	i1 v1411 = (i1)+0;
	if (v1410==v1411) goto c02_0133; else goto c02_0134;

c02_0133:;

	i8 v1412 = (i8)(intptr_t)(ws+2910);
	i1 v1413 = *(i1*)(intptr_t)v1412;
	i8 v1414 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1414 = v1413;

	goto c02_012f;

c02_0134:;

c02_0130:;

	i8 v1415 = (i8)(intptr_t)(ws+2910);
	i1 v1416 = *(i1*)(intptr_t)v1415;
	i1 v1417 = (i1)+97;
	if (v1416<v1417) goto c02_0139; else goto c02_0138;

c02_0138:;

	i8 v1418 = (i8)(intptr_t)(ws+2910);
	i1 v1419 = *(i1*)(intptr_t)v1418;
	i1 v1420 = v1419+(-87);
	i8 v1421 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1421 = v1420;

	goto c02_0135;

c02_0139:;

	i8 v1422 = (i8)(intptr_t)(ws+2910);
	i1 v1423 = *(i1*)(intptr_t)v1422;
	i1 v1424 = v1423+(-48);
	i8 v1425 = (i8)(intptr_t)(ws+2910);
	*(i1*)(intptr_t)v1425 = v1424;

c02_0135:;

	i8 v1426 = (i8)(intptr_t)(ws+2910);
	i1 v1427 = *(i1*)(intptr_t)v1426;
	i8 v1428 = (i8)(intptr_t)(ws+2904);
	i4 v1429 = *(i4*)(intptr_t)v1428;
	i1 v1430 = (s1)(s4)v1429;
	if (v1427<v1430) goto c02_013e; else goto c02_013d;

c02_013d:;

	i8 v1431 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v1431)();

	i8 v1432 = (i8)(intptr_t)c02_s0037;
	i8 v1433 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1433)(v1432);

	i8 v1434 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v1434)();

	goto c02_013a;

c02_013e:;

c02_013a:;

	i8 v1435 = (i8)(intptr_t)(ws+372);
	i4 v1436 = *(i4*)(intptr_t)v1435;
	i8 v1437 = (i8)(intptr_t)(ws+2904);
	i4 v1438 = *(i4*)(intptr_t)v1437;
	i4 v1439 = v1436*v1438;
	i8 v1440 = (i8)(intptr_t)(ws+2910);
	i1 v1441 = *(i1*)(intptr_t)v1440;
	i4 v1442 = v1441;
	i4 v1443 = v1439+v1442;
	i8 v1444 = (i8)(intptr_t)(ws+372);
	*(i4*)(intptr_t)v1444 = v1443;

	goto c02_012e;

c02_012f:;

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0038[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// lexer_i_malformed workspace at ws+2920 length ws+8
void f75_lexer_i_malformed(i8 p1445 /* s */) {
	*(i8*)(intptr_t)(ws+2920) = p1445; /*s */

	i8 v1446 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v1446)();

	i8 v1447 = (i8)(intptr_t)c02_s0038;
	i8 v1448 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1448)(v1447);

	i8 v1449 = (i8)(intptr_t)(ws+2920);
	i8 v1450 = *(i8*)(intptr_t)v1449;
	i8 v1451 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1451)(v1450);

	i8 v1452 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v1452)();

endsub:;
}
	void f69_lexer_i_getchar(i1* /* c */);
const i1 c02_s0039[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f75_lexer_i_malformed(i8 /* s */);

// lexer_i_get_escaped workspace at ws+2912 length ws+1
void f76_lexer_i_get_escaped(i1* p1453 /* c */) {

	i8 v1454 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1455;

	((void(*)(i1* /* c */))(intptr_t)v1454)(&v1455);
	i8 v1456 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1456 = v1455;

	i8 v1457 = (i8)(intptr_t)(ws+2912);
	i1 v1458 = *(i1*)(intptr_t)v1457;

	if (v1458 != +110) goto c02_0140;

	i1 v1459 = (i1)+10;
	i8 v1460 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1460 = v1459;

	goto c02_013f;

c02_0140:;

	if (v1458 != +114) goto c02_0141;

	i1 v1461 = (i1)+13;
	i8 v1462 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1462 = v1461;

	goto c02_013f;

c02_0141:;

	if (v1458 != +116) goto c02_0142;

	i1 v1463 = (i1)+9;
	i8 v1464 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1464 = v1463;

	goto c02_013f;

c02_0142:;

	if (v1458 != +92) goto c02_0143;

	i1 v1465 = (i1)+92;
	i8 v1466 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1466 = v1465;

	goto c02_013f;

c02_0143:;

	if (v1458 != +39) goto c02_0144;

	i1 v1467 = (i1)+39;
	i8 v1468 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1468 = v1467;

	goto c02_013f;

c02_0144:;

	if (v1458 != +34) goto c02_0145;

	i1 v1469 = (i1)+34;
	i8 v1470 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1470 = v1469;

	goto c02_013f;

c02_0145:;

	if (v1458 != +48) goto c02_0146;

	i1 v1471 = (i1)+0;
	i8 v1472 = (i8)(intptr_t)(ws+2912);
	*(i1*)(intptr_t)v1472 = v1471;

	goto c02_013f;

c02_0146:;

	i8 v1473 = (i8)(intptr_t)c02_s0039;
	i8 v1474 = (i8)(intptr_t)(f75_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1474)(v1473);

c02_013f:;


endsub:;
	*p1453 = *(i1*)(intptr_t)(ws+2912);
}
	void f69_lexer_i_getchar(i1* /* c */);
const i1 c02_s003a[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f75_lexer_i_malformed(i8 /* s */);
	void f76_lexer_i_get_escaped(i1* /* c */);
	void f59_StartError(void);
const i1 c02_s003b[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// lexer_i_read_string workspace at ws+2904 length ws+1
void f77_lexer_i_read_string(void) {

	i1 v1475 = (i1)+0;
	i8 v1476 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1476 = v1475;

c02_0147:;

	i8 v1477 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1478;

	((void(*)(i1* /* c */))(intptr_t)v1477)(&v1478);
	i8 v1479 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1479 = v1478;

	i8 v1480 = (i8)(intptr_t)(ws+2904);
	i1 v1481 = *(i1*)(intptr_t)v1480;
	i1 v1482 = (i1)+32;
	if (v1481<v1482) goto c02_014c; else goto c02_014d;

c02_014c:;

	i8 v1483 = (i8)(intptr_t)c02_s003a;
	i8 v1484 = (i8)(intptr_t)(f75_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1484)(v1483);

	goto c02_0149;

c02_014d:;

c02_0149:;

	i8 v1485 = (i8)(intptr_t)(ws+2904);
	i1 v1486 = *(i1*)(intptr_t)v1485;

	if (v1486 != +34) goto c02_014f;

	goto c02_0148;

c02_014f:;

	if (v1486 != +92) goto c02_0150;

	i8 v1487 = (i8)(intptr_t)(f76_lexer_i_get_escaped);
	i1 v1488;

	((void(*)(i1* /* c */))(intptr_t)v1487)(&v1488);
	i8 v1489 = (i8)(intptr_t)(ws+2904);
	*(i1*)(intptr_t)v1489 = v1488;

c02_0150:;

c02_014e:;


	i8 v1490 = (i8)(intptr_t)(ws+2904);
	i1 v1491 = *(i1*)(intptr_t)v1490;
	i8 v1492 = (i8)(intptr_t)(ws+241);
	i8 v1493 = (i8)(intptr_t)(ws+369);
	i1 v1494 = *(i1*)(intptr_t)v1493;
	i8 v1495 = v1494;
	i8 v1496 = v1492+v1495;
	*(i1*)(intptr_t)v1496 = v1491;

	i8 v1497 = (i8)(intptr_t)(ws+369);
	i1 v1498 = *(i1*)(intptr_t)v1497;
	i1 v1499 = v1498+(+1);
	i8 v1500 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1500 = v1499;

	i8 v1501 = (i8)(intptr_t)(ws+369);
	i1 v1502 = *(i1*)(intptr_t)v1501;
	i1 v1503 = (i1)+128;
	if (v1502==v1503) goto c02_0154; else goto c02_0155;

c02_0154:;

	i8 v1504 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v1504)();

	i8 v1505 = (i8)(intptr_t)c02_s003b;
	i8 v1506 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1506)(v1505);

	i8 v1507 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v1507)();

	goto c02_0151;

c02_0155:;

c02_0151:;

	goto c02_0147;

c02_0148:;

	i1 v1508 = (i1)+0;
	i8 v1509 = (i8)(intptr_t)(ws+241);
	i8 v1510 = (i8)(intptr_t)(ws+369);
	i1 v1511 = *(i1*)(intptr_t)v1510;
	i8 v1512 = v1511;
	i8 v1513 = v1509+v1512;
	*(i1*)(intptr_t)v1513 = v1508;

endsub:;
}
const i1 c02_s003c[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f75_lexer_i_malformed(i8 /* s */);

// malformed workspace at ws+2904 length ws+0
void f79_malformed(void) {

	i8 v1514 = (i8)(intptr_t)c02_s003c;
	i8 v1515 = (i8)(intptr_t)(f75_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1515)(v1514);

endsub:;
}
	void f69_lexer_i_getchar(i1* /* c */);
	void f79_malformed(void);
	void f76_lexer_i_get_escaped(i1* /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f79_malformed(void);

// lexer_i_read_char workspace at ws+2896 length ws+1
void f78_lexer_i_read_char(void) {


	i8 v1516 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1517;

	((void(*)(i1* /* c */))(intptr_t)v1516)(&v1517);
	i8 v1518 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1518 = v1517;

	i8 v1519 = (i8)(intptr_t)(ws+2896);
	i1 v1520 = *(i1*)(intptr_t)v1519;
	i1 v1521 = (i1)+32;
	if (v1520<v1521) goto c02_015b; else goto c02_015d;

c02_015d:;

	i8 v1522 = (i8)(intptr_t)(ws+2896);
	i1 v1523 = *(i1*)(intptr_t)v1522;
	i1 v1524 = (i1)+39;
	if (v1523==v1524) goto c02_015b; else goto c02_015c;

c02_015b:;

	i8 v1525 = (i8)(intptr_t)(f79_malformed);

	((void(*)(void))(intptr_t)v1525)();

	goto c02_0156;

c02_015c:;

c02_0156:;

	i8 v1526 = (i8)(intptr_t)(ws+2896);
	i1 v1527 = *(i1*)(intptr_t)v1526;
	i1 v1528 = (i1)+92;
	if (v1527==v1528) goto c02_0161; else goto c02_0162;

c02_0161:;

	i8 v1529 = (i8)(intptr_t)(f76_lexer_i_get_escaped);
	i1 v1530;

	((void(*)(i1* /* c */))(intptr_t)v1529)(&v1530);
	i8 v1531 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1531 = v1530;

	goto c02_015e;

c02_0162:;

c02_015e:;

	i8 v1532 = (i8)(intptr_t)(ws+2896);
	i1 v1533 = *(i1*)(intptr_t)v1532;
	i4 v1534 = v1533;
	i8 v1535 = (i8)(intptr_t)(ws+372);
	*(i4*)(intptr_t)v1535 = v1534;

	i8 v1536 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1537;

	((void(*)(i1* /* c */))(intptr_t)v1536)(&v1537);
	i8 v1538 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1538 = v1537;

	i8 v1539 = (i8)(intptr_t)(ws+2896);
	i1 v1540 = *(i1*)(intptr_t)v1539;
	i1 v1541 = (i1)+39;
	if (v1540==v1541) goto c02_0167; else goto c02_0166;

c02_0166:;

	i8 v1542 = (i8)(intptr_t)(f79_malformed);

	((void(*)(void))(intptr_t)v1542)();

	goto c02_0163;

c02_0167:;

c02_0163:;

endsub:;
}
const i1 c02_s003d[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f75_lexer_i_malformed(i8 /* s */);

// malformed_include workspace at ws+2904 length ws+0
void f81_malformed_include(void) {

	i8 v1543 = (i8)(intptr_t)c02_s003d;
	i8 v1544 = (i8)(intptr_t)(f75_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1544)(v1543);

endsub:;
}
	void f71_lexer_i_skipwhitespace(void);
	void f69_lexer_i_getchar(i1* /* c */);
	void f81_malformed_include(void);
	void f77_lexer_i_read_string(void);
	void f71_lexer_i_skipwhitespace(void);
	void f69_lexer_i_getchar(i1* /* c */);
	void f81_malformed_include(void);
	void f66_LexerIncludeFile(i8 /* path */);

// lexer_i_include workspace at ws+2896 length ws+1
void f80_lexer_i_include(void) {


	i8 v1545 = (i8)(intptr_t)(f71_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1545)();

	i8 v1546 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1547;

	((void(*)(i1* /* c */))(intptr_t)v1546)(&v1547);
	i8 v1548 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1548 = v1547;

	i8 v1549 = (i8)(intptr_t)(ws+2896);
	i1 v1550 = *(i1*)(intptr_t)v1549;
	i1 v1551 = (i1)+34;
	if (v1550==v1551) goto c02_016c; else goto c02_016b;

c02_016b:;

	i8 v1552 = (i8)(intptr_t)(f81_malformed_include);

	((void(*)(void))(intptr_t)v1552)();

	goto c02_0168;

c02_016c:;

c02_0168:;

	i8 v1553 = (i8)(intptr_t)(f77_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1553)();

	i8 v1554 = (i8)(intptr_t)(f71_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1554)();

	i8 v1555 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1556;

	((void(*)(i1* /* c */))(intptr_t)v1555)(&v1556);
	i8 v1557 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1557 = v1556;

	i8 v1558 = (i8)(intptr_t)(ws+2896);
	i1 v1559 = *(i1*)(intptr_t)v1558;
	i1 v1560 = (i1)+59;
	if (v1559==v1560) goto c02_0171; else goto c02_0170;

c02_0170:;

	i8 v1561 = (i8)(intptr_t)(f81_malformed_include);

	((void(*)(void))(intptr_t)v1561)();

	goto c02_016d;

c02_0171:;

c02_016d:;

	i8 v1562 = (i8)(intptr_t)(ws+241);
	i8 v1563 = (i8)(intptr_t)(f66_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v1563)(v1562);

endsub:;
}
	void f71_lexer_i_skipwhitespace(void);
	void f74_lexer_i_read_number(void);
	void f71_lexer_i_skipwhitespace(void);
	void f69_lexer_i_getchar(i1* /* c */);
const i1 c02_s003e[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f75_lexer_i_malformed(i8 /* s */);
	void f77_lexer_i_read_string(void);
	void f32_Free(i8 /* block */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);

// lexer_i_line_directive workspace at ws+2896 length ws+1
void f82_lexer_i_line_directive(void) {

	i8 v1564 = (i8)(intptr_t)(f71_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1564)();

	i8 v1565 = (i8)(intptr_t)(f74_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1565)();

	i8 v1566 = (i8)(intptr_t)(f71_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1566)();

	i8 v1567 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1568;

	((void(*)(i1* /* c */))(intptr_t)v1567)(&v1568);
	i8 v1569 = (i8)(intptr_t)(ws+2896);
	*(i1*)(intptr_t)v1569 = v1568;

	i8 v1570 = (i8)(intptr_t)(ws+2896);
	i1 v1571 = *(i1*)(intptr_t)v1570;
	i1 v1572 = (i1)+34;
	if (v1571==v1572) goto c02_0176; else goto c02_0175;

c02_0175:;

	i8 v1573 = (i8)(intptr_t)c02_s003e;
	i8 v1574 = (i8)(intptr_t)(f75_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1574)(v1573);

	goto c02_0172;

c02_0176:;

c02_0172:;

	i8 v1575 = (i8)(intptr_t)(f77_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1575)();

	i8 v1576 = (i8)(intptr_t)(ws+372);
	i4 v1577 = *(i4*)(intptr_t)v1576;
	i2 v1578 = (s2)(s4)v1577;
	i8 v1579 = (i8)(intptr_t)(ws+232);
	i8 v1580 = *(i8*)(intptr_t)v1579;
	i8 v1581 = v1580+(+16);
	*(i2*)(intptr_t)v1581 = v1578;

	i8 v1582 = (i8)(intptr_t)(ws+232);
	i8 v1583 = *(i8*)(intptr_t)v1582;
	i8 v1584 = v1583+(+8);
	i8 v1585 = *(i8*)(intptr_t)v1584;
	i8 v1586 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v1586)(v1585);

	i8 v1587 = (i8)(intptr_t)(ws+241);
	i8 v1588 = (i8)(intptr_t)(f33_StrDup);
	i8 v1589;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1588)(&v1589, v1587);
	i8 v1590 = (i8)(intptr_t)(ws+232);
	i8 v1591 = *(i8*)(intptr_t)v1590;
	i8 v1592 = v1591+(+8);
	*(i8*)(intptr_t)v1592 = v1589;

endsub:;
}
	void f71_lexer_i_skipwhitespace(void);
	void f69_lexer_i_getchar(i1* /* c */);
	void f72_lexer_i_read_identifier(void);
const i1 c02_s003f[] = { 0x6c,0x69,0x6e,0x65,0 };
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f82_lexer_i_line_directive(void);
	void f69_lexer_i_getchar(i1* /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f70_lexer_i_unparseable(i1 /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f70_lexer_i_unparseable(i1 /* c */);
	void f69_lexer_i_getchar(i1* /* c */);
	void f77_lexer_i_read_string(void);
	void f78_lexer_i_read_char(void);
	void f68_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f74_lexer_i_read_number(void);
	void f72_lexer_i_read_identifier(void);
	void f73_lexer_i_match_keyword(i1* /* token */);
	void f70_lexer_i_unparseable(i1 /* c */);
	void f80_lexer_i_include(void);

// LexerReadToken workspace at ws+2888 length ws+3
void f67_LexerReadToken(i1* p1163 /* token */) {














c02_0177:;

	i8 v1593 = (i8)(intptr_t)(f71_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1593)();

	i8 v1594 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1595;

	((void(*)(i1* /* c */))(intptr_t)v1594)(&v1595);
	i8 v1596 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1596 = v1595;

	i8 v1597 = (i8)(intptr_t)(ws+2889);
	i1 v1598 = *(i1*)(intptr_t)v1597;
	i1 v1599 = (i1)+35;
	if (v1598==v1599) goto c02_017c; else goto c02_017d;

c02_017c:;

	i1 v1600 = (i1)+0;
	i8 v1601 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1601 = v1600;

	i8 v1602 = (i8)(intptr_t)(f72_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1602)();

	i8 v1603 = (i8)(intptr_t)(ws+241);
	i8 v1604 = (i8)(intptr_t)c02_s003f;
	i8 v1605 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1606;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1605)(&v1606, v1604, v1603);
	i1 v1607 = (i1)+0;
	if (v1606==v1607) goto c02_0181; else goto c02_0182;

c02_0181:;

	i8 v1608 = (i8)(intptr_t)(f82_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1608)();

	goto c02_017e;

c02_0182:;

c02_017e:;

c02_0183:;

	i8 v1609 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1610;

	((void(*)(i1* /* c */))(intptr_t)v1609)(&v1610);
	i8 v1611 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1611 = v1610;

	i8 v1612 = (i8)(intptr_t)(ws+2889);
	i1 v1613 = *(i1*)(intptr_t)v1612;
	i1 v1614 = (i1)+10;
	if (v1613==v1614) goto c02_018a; else goto c02_018c;

c02_018c:;

	i8 v1615 = (i8)(intptr_t)(ws+2889);
	i1 v1616 = *(i1*)(intptr_t)v1615;
	i1 v1617 = (i1)+0;
	if (v1616==v1617) goto c02_018a; else goto c02_018b;

c02_018a:;

	i8 v1618 = (i8)(intptr_t)(ws+2889);
	i1 v1619 = *(i1*)(intptr_t)v1618;
	i8 v1620 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1620 = v1619;

	goto c02_0184;

c02_018b:;

c02_0185:;

	goto c02_0183;

c02_0184:;

	goto c02_0177;

c02_017d:;

c02_0179:;

	i8 v1621 = (i8)(intptr_t)(ws+2889);
	i1 v1622 = *(i1*)(intptr_t)v1621;

	if (v1622 != +0) goto c02_018e;

	i1 v1623 = (i1)+0;
	i8 v1624 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1624 = v1623;

	goto c02_018d;

c02_018e:;

	if (v1622 != +58) goto c02_018f;

	i8 v1625 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1626;

	((void(*)(i1* /* c */))(intptr_t)v1625)(&v1626);
	i8 v1627 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1627 = v1626;

	i8 v1628 = (i8)(intptr_t)(ws+2889);
	i1 v1629 = *(i1*)(intptr_t)v1628;
	i1 v1630 = (i1)+61;
	if (v1629==v1630) goto c02_0193; else goto c02_0194;

c02_0193:;

	i1 v1631 = (i1)+2;
	i8 v1632 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1632 = v1631;

	goto c02_0190;

c02_0194:;

	i8 v1633 = (i8)(intptr_t)(ws+2889);
	i1 v1634 = *(i1*)(intptr_t)v1633;
	i8 v1635 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1635 = v1634;

	i1 v1636 = (i1)+6;
	i8 v1637 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1637 = v1636;

c02_0190:;

	goto c02_018d;

c02_018f:;

	if (v1622 != +60) goto c02_0195;

	i8 v1638 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1639;

	((void(*)(i1* /* c */))(intptr_t)v1638)(&v1639);
	i8 v1640 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1640 = v1639;

	i8 v1641 = (i8)(intptr_t)(ws+2889);
	i1 v1642 = *(i1*)(intptr_t)v1641;

	if (v1642 != +60) goto c02_0197;

	i1 v1643 = (i1)+56;
	i8 v1644 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1644 = v1643;

	goto c02_0196;

c02_0197:;

	if (v1642 != +61) goto c02_0198;

	i1 v1645 = (i1)+51;
	i8 v1646 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1646 = v1645;

	goto c02_0196;

c02_0198:;

	i8 v1647 = (i8)(intptr_t)(ws+2889);
	i1 v1648 = *(i1*)(intptr_t)v1647;
	i8 v1649 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1649 = v1648;

	i1 v1650 = (i1)+50;
	i8 v1651 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1651 = v1650;

c02_0196:;


	goto c02_018d;

c02_0195:;

	if (v1622 != +61) goto c02_0199;

	i8 v1652 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1653;

	((void(*)(i1* /* c */))(intptr_t)v1652)(&v1653);
	i8 v1654 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1654 = v1653;

	i8 v1655 = (i8)(intptr_t)(ws+2889);
	i1 v1656 = *(i1*)(intptr_t)v1655;
	i1 v1657 = (i1)+61;
	if (v1656==v1657) goto c02_019d; else goto c02_019e;

c02_019d:;

	i1 v1658 = (i1)+54;
	i8 v1659 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1659 = v1658;

	goto c02_019a;

c02_019e:;

	i8 v1660 = (i8)(intptr_t)(ws+2889);
	i1 v1661 = *(i1*)(intptr_t)v1660;
	i8 v1662 = (i8)(intptr_t)(f70_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1662)(v1661);

c02_019a:;

	goto c02_018d;

c02_0199:;

	if (v1622 != +33) goto c02_019f;

	i8 v1663 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1664;

	((void(*)(i1* /* c */))(intptr_t)v1663)(&v1664);
	i8 v1665 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1665 = v1664;

	i8 v1666 = (i8)(intptr_t)(ws+2889);
	i1 v1667 = *(i1*)(intptr_t)v1666;
	i1 v1668 = (i1)+61;
	if (v1667==v1668) goto c02_01a3; else goto c02_01a4;

c02_01a3:;

	i1 v1669 = (i1)+55;
	i8 v1670 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1670 = v1669;

	goto c02_01a0;

c02_01a4:;

	i8 v1671 = (i8)(intptr_t)(ws+2889);
	i1 v1672 = *(i1*)(intptr_t)v1671;
	i8 v1673 = (i8)(intptr_t)(f70_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1673)(v1672);

c02_01a0:;

	goto c02_018d;

c02_019f:;

	if (v1622 != +62) goto c02_01a5;

	i8 v1674 = (i8)(intptr_t)(f69_lexer_i_getchar);
	i1 v1675;

	((void(*)(i1* /* c */))(intptr_t)v1674)(&v1675);
	i8 v1676 = (i8)(intptr_t)(ws+2889);
	*(i1*)(intptr_t)v1676 = v1675;

	i8 v1677 = (i8)(intptr_t)(ws+2889);
	i1 v1678 = *(i1*)(intptr_t)v1677;

	if (v1678 != +62) goto c02_01a7;

	i1 v1679 = (i1)+57;
	i8 v1680 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1680 = v1679;

	goto c02_01a6;

c02_01a7:;

	if (v1678 != +61) goto c02_01a8;

	i1 v1681 = (i1)+53;
	i8 v1682 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1682 = v1681;

	goto c02_01a6;

c02_01a8:;

	i8 v1683 = (i8)(intptr_t)(ws+2889);
	i1 v1684 = *(i1*)(intptr_t)v1683;
	i8 v1685 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1685 = v1684;

	i1 v1686 = (i1)+52;
	i8 v1687 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1687 = v1686;

c02_01a6:;


	goto c02_018d;

c02_01a5:;

	if (v1622 != +34) goto c02_01a9;

	i8 v1688 = (i8)(intptr_t)(f77_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1688)();

	i1 v1689 = (i1)+41;
	i8 v1690 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1690 = v1689;

	goto c02_018d;

c02_01a9:;

	if (v1622 != +39) goto c02_01aa;

	i8 v1691 = (i8)(intptr_t)(f78_lexer_i_read_char);

	((void(*)(void))(intptr_t)v1691)();

	i1 v1692 = (i1)+34;
	i8 v1693 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1693 = v1692;

	goto c02_018d;

c02_01aa:;

	i8 v1694 = (i8)(intptr_t)(ws+2889);
	i1 v1695 = *(i1*)(intptr_t)v1694;
	i8 v1696 = (i8)(intptr_t)(f68_lexer_i_ctype);
	i1 v1697;
	i1 v1698;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1696)(&v1697, &v1698, v1695);

	i8 v1699 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1699 = v1698;

	i8 v1700 = (i8)(intptr_t)(ws+2890);
	*(i1*)(intptr_t)v1700 = v1697;

	i8 v1701 = (i8)(intptr_t)(ws+2890);
	i1 v1702 = *(i1*)(intptr_t)v1701;
	i1 v1703 = v1702&(+128);
	i1 v1704 = (i1)+0;
	if (v1703==v1704) goto c02_01af; else goto c02_01ae;

c02_01ae:;

	goto c02_01ab;

c02_01af:;

	i8 v1705 = (i8)(intptr_t)(ws+2890);
	i1 v1706 = *(i1*)(intptr_t)v1705;
	i1 v1707 = v1706&(+1);
	i1 v1708 = (i1)+0;
	if (v1707==v1708) goto c02_01b3; else goto c02_01b2;

c02_01b2:;

	i8 v1709 = (i8)(intptr_t)(ws+2889);
	i1 v1710 = *(i1*)(intptr_t)v1709;
	i8 v1711 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v1711 = v1710;

	i8 v1712 = (i8)(intptr_t)(f74_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1712)();

	i1 v1713 = (i1)+34;
	i8 v1714 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1714 = v1713;

	goto c02_01ab;

c02_01b3:;

	i8 v1715 = (i8)(intptr_t)(ws+2890);
	i1 v1716 = *(i1*)(intptr_t)v1715;
	i1 v1717 = v1716&(+16);
	i1 v1718 = (i1)+0;
	if (v1717==v1718) goto c02_01b7; else goto c02_01b6;

c02_01b6:;

	i1 v1719 = (i1)+1;
	i8 v1720 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v1720 = v1719;

	i8 v1721 = (i8)(intptr_t)(ws+2889);
	i1 v1722 = *(i1*)(intptr_t)v1721;
	i8 v1723 = (i8)(intptr_t)(ws+241);
	*(i1*)(intptr_t)v1723 = v1722;

	i8 v1724 = (i8)(intptr_t)(f72_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1724)();

	i8 v1725 = (i8)(intptr_t)(f73_lexer_i_match_keyword);
	i1 v1726;

	((void(*)(i1* /* token */))(intptr_t)v1725)(&v1726);
	i8 v1727 = (i8)(intptr_t)(ws+2888);
	*(i1*)(intptr_t)v1727 = v1726;

	goto c02_01ab;

c02_01b7:;

	i8 v1728 = (i8)(intptr_t)(ws+2889);
	i1 v1729 = *(i1*)(intptr_t)v1728;
	i8 v1730 = (i8)(intptr_t)(f70_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1730)(v1729);

c02_01ab:;

c02_018d:;


	i8 v1731 = (i8)(intptr_t)(ws+2888);
	i1 v1732 = *(i1*)(intptr_t)v1731;
	i1 v1733 = (i1)+255;
	if (v1732==v1733) goto c02_01bb; else goto c02_01bc;

c02_01bb:;

	i8 v1734 = (i8)(intptr_t)(f80_lexer_i_include);

	((void(*)(void))(intptr_t)v1734)();

	goto c02_01b8;

c02_01bc:;

	goto c02_0178;

c02_01b8:;

	goto c02_0177;

c02_0178:;

endsub:;
	*p1163 = *(i1*)(intptr_t)(ws+2888);
}

// CountParameters workspace at ws+3016 length ws+9
void f83_CountParameters(i1* p1735 /* count */, i8 p1736 /* param */) {
	*(i8*)(intptr_t)(ws+3016) = p1736; /*param */

	i1 v1737 = (i1)+0;
	i8 v1738 = (i8)(intptr_t)(ws+3024);
	*(i1*)(intptr_t)v1738 = v1737;

c02_01bf:;

	i8 v1739 = (i8)(intptr_t)(ws+3016);
	i8 v1740 = *(i8*)(intptr_t)v1739;
	i8 v1741 = (i8)+0;
	if (v1740==v1741) goto c02_01c2; else goto c02_01c1;

c02_01c1:;

	i8 v1742 = (i8)(intptr_t)(ws+3024);
	i1 v1743 = *(i1*)(intptr_t)v1742;
	i1 v1744 = v1743+(+1);
	i8 v1745 = (i8)(intptr_t)(ws+3024);
	*(i1*)(intptr_t)v1745 = v1744;

	i8 v1746 = (i8)(intptr_t)(ws+3016);
	i8 v1747 = *(i8*)(intptr_t)v1746;
	i8 v1748 = v1747+(+16);
	i8 v1749 = *(i8*)(intptr_t)v1748;
	i8 v1750 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v1750 = v1749;

	goto c02_01bf;

c02_01c2:;

endsub:;
	*p1735 = *(i1*)(intptr_t)(ws+3024);
}

// GetInputParameter workspace at ws+3320 length ws+24
void f84_GetInputParameter(i8* p1751 /* param */, i1 p1752 /* count */, i8 p1753 /* subr */) {
	*(i8*)(intptr_t)(ws+3320) = p1753; /*subr */
	*(i1*)(intptr_t)(ws+3328) = p1752; /*count */

	i8 v1754 = (i8)(intptr_t)(ws+3320);
	i8 v1755 = *(i8*)(intptr_t)v1754;
	i8 v1756 = v1755+(+40);
	i8 v1757 = *(i8*)(intptr_t)v1756;
	i8 v1758 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1758 = v1757;

c02_01c5:;

	i8 v1759 = (i8)(intptr_t)(ws+3328);
	i1 v1760 = *(i1*)(intptr_t)v1759;
	i1 v1761 = (i1)+0;
	if (v1760==v1761) goto c02_01c8; else goto c02_01c7;

c02_01c7:;

	i8 v1762 = (i8)(intptr_t)(ws+3336);
	i8 v1763 = *(i8*)(intptr_t)v1762;
	i8 v1764 = v1763+(+16);
	i8 v1765 = *(i8*)(intptr_t)v1764;
	i8 v1766 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1766 = v1765;

	i8 v1767 = (i8)(intptr_t)(ws+3328);
	i1 v1768 = *(i1*)(intptr_t)v1767;
	i1 v1769 = v1768+(-1);
	i8 v1770 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v1770 = v1769;

	goto c02_01c5;

c02_01c8:;

endsub:;
	*p1751 = *(i8*)(intptr_t)(ws+3336);
}

// GetOutputParameter workspace at ws+3320 length ws+24
void f85_GetOutputParameter(i8* p1771 /* param */, i1 p1772 /* count */, i8 p1773 /* subr */) {
	*(i8*)(intptr_t)(ws+3320) = p1773; /*subr */
	*(i1*)(intptr_t)(ws+3328) = p1772; /*count */

	i8 v1774 = (i8)(intptr_t)(ws+3320);
	i8 v1775 = *(i8*)(intptr_t)v1774;
	i8 v1776 = v1775+(+48);
	i8 v1777 = *(i8*)(intptr_t)v1776;
	i8 v1778 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1778 = v1777;

c02_01cb:;

	i8 v1779 = (i8)(intptr_t)(ws+3328);
	i1 v1780 = *(i1*)(intptr_t)v1779;
	i1 v1781 = (i1)+0;
	if (v1780==v1781) goto c02_01ce; else goto c02_01cd;

c02_01cd:;

	i8 v1782 = (i8)(intptr_t)(ws+3336);
	i8 v1783 = *(i8*)(intptr_t)v1782;
	i8 v1784 = v1783+(+16);
	i8 v1785 = *(i8*)(intptr_t)v1784;
	i8 v1786 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1786 = v1785;

	i8 v1787 = (i8)(intptr_t)(ws+3328);
	i1 v1788 = *(i1*)(intptr_t)v1787;
	i1 v1789 = v1788+(-1);
	i8 v1790 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v1790 = v1789;

	goto c02_01cb;

c02_01ce:;

endsub:;
	*p1771 = *(i8*)(intptr_t)(ws+3336);
}

// WidthToIndex workspace at ws+3112 length ws+2
void f87_WidthToIndex(i1* p1799 /* index */, i1 p1800 /* width */) {
	*(i1*)(intptr_t)(ws+3112) = p1800; /*width */

	i8 v1801 = (i8)(intptr_t)(ws+3112);
	i1 v1802 = *(i1*)(intptr_t)v1801;

	if (v1802 != +4) goto c02_01d0;

	i1 v1803 = (i1)+3;
	i8 v1804 = (i8)(intptr_t)(ws+3113);
	*(i1*)(intptr_t)v1804 = v1803;

	goto c02_01cf;

c02_01d0:;

	if (v1802 != +8) goto c02_01d1;

	i1 v1805 = (i1)+4;
	i8 v1806 = (i8)(intptr_t)(ws+3113);
	*(i1*)(intptr_t)v1806 = v1805;

	goto c02_01cf;

c02_01d1:;

	i8 v1807 = (i8)(intptr_t)(ws+3112);
	i1 v1808 = *(i1*)(intptr_t)v1807;
	i8 v1809 = (i8)(intptr_t)(ws+3113);
	*(i1*)(intptr_t)v1809 = v1808;

c02_01cf:;


endsub:;
	*p1799 = *(i1*)(intptr_t)(ws+3113);
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3264 length ws+16
void f88_AllocateNewNode(i8* p1810 /* m */, i1 p1811 /* code */) {
	*(i1*)(intptr_t)(ws+3264) = p1811; /*code */

	i8 v1812 = (i8)+59;
	i8 v1813 = (i8)(intptr_t)(f31_Alloc);
	i8 v1814;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1813)(&v1814, v1812);
	i8 v1815 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v1815 = v1814;

	i8 v1816 = (i8)(intptr_t)(ws+3264);
	i1 v1817 = *(i1*)(intptr_t)v1816;
	i8 v1818 = (i8)(intptr_t)(ws+3272);
	i8 v1819 = *(i8*)(intptr_t)v1818;
	i8 v1820 = v1819+(+58);
	*(i1*)(intptr_t)v1820 = v1817;

endsub:;
	*p1810 = *(i8*)(intptr_t)(ws+3272);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLoad workspace at ws+3088 length ws+24
void f89_MidLoad(i8* p1821 /* m */, i8 p1822 /* left */, i1 p1823 /* width */) {
	*(i1*)(intptr_t)(ws+3088) = p1823; /*width */
	*(i8*)(intptr_t)(ws+3096) = p1822; /*left */

	i8 v1824 = (i8)(intptr_t)(ws+3088);
	i1 v1825 = *(i1*)(intptr_t)v1824;
	i8 v1826 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1827;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1826)(&v1827, v1825);
	i1 v1828 = v1827+(+46);
	i8 v1829 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1830;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1829)(&v1830, v1828);
	i8 v1831 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1831 = v1830;

	i8 v1832 = (i8)(intptr_t)(ws+3096);
	i8 v1833 = *(i8*)(intptr_t)v1832;
	i8 v1834 = (i8)(intptr_t)(ws+3104);
	i8 v1835 = *(i8*)(intptr_t)v1834;
	i8 v1836 = v1835+(+24);
	*(i8*)(intptr_t)v1836 = v1833;

endsub:;
	*p1821 = *(i8*)(intptr_t)(ws+3104);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInita workspace at ws+3032 length ws+24
void f90_MidInita(i8* p1837 /* m */, i2 p1838 /* off */, i8 p1839 /* sym */) {
	*(i8*)(intptr_t)(ws+3032) = p1839; /*sym */
	*(i2*)(intptr_t)(ws+3040) = p1838; /*off */

	i1 v1840 = (i1)+13;
	i8 v1841 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1842;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1841)(&v1842, v1840);
	i8 v1843 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v1843 = v1842;

	i8 v1844 = (i8)(intptr_t)(ws+3032);
	i8 v1845 = *(i8*)(intptr_t)v1844;
	i8 v1846 = (i8)(intptr_t)(ws+3048);
	i8 v1847 = *(i8*)(intptr_t)v1846;
	*(i8*)(intptr_t)v1847 = v1845;

	i8 v1848 = (i8)(intptr_t)(ws+3040);
	i2 v1849 = *(i2*)(intptr_t)v1848;
	i8 v1850 = (i8)(intptr_t)(ws+3048);
	i8 v1851 = *(i8*)(intptr_t)v1850;
	i8 v1852 = v1851+(+8);
	*(i2*)(intptr_t)v1852 = v1849;

endsub:;
	*p1837 = *(i8*)(intptr_t)(ws+3048);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3008 length ws+8
void f91_MidEndinit(i8* p1853 /* m */) {

	i1 v1854 = (i1)+14;
	i8 v1855 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1856;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1855)(&v1856, v1854);
	i8 v1857 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1857 = v1856;

endsub:;
	*p1853 = *(i8*)(intptr_t)(ws+3008);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3016 length ws+16
void f92_MidEndcase(i8* p1858 /* m */, i1 p1859 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p1859; /*width */

	i8 v1860 = (i8)(intptr_t)(ws+3016);
	i1 v1861 = *(i1*)(intptr_t)v1860;
	i8 v1862 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1863;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1862)(&v1863, v1861);
	i1 v1864 = v1863+(+83);
	i8 v1865 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1866;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1865)(&v1866, v1864);
	i8 v1867 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1867 = v1866;

endsub:;
	*p1858 = *(i8*)(intptr_t)(ws+3024);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3048 length ws+40
void f93_MidBltu(i8* p1868 /* m */, i1 p1869 /* negated */, i2 p1870 /* fallthrough */, i2 p1871 /* falselabel */, i2 p1872 /* truelabel */, i8 p1873 /* right */, i8 p1874 /* left */, i1 p1875 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p1875; /*width */
	*(i8*)(intptr_t)(ws+3056) = p1874; /*left */
	*(i8*)(intptr_t)(ws+3064) = p1873; /*right */
	*(i2*)(intptr_t)(ws+3072) = p1872; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p1871; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p1870; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p1869; /*negated */

	i8 v1876 = (i8)(intptr_t)(ws+3048);
	i1 v1877 = *(i1*)(intptr_t)v1876;
	i8 v1878 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1879;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1878)(&v1879, v1877);
	i1 v1880 = v1879+(+68);
	i8 v1881 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1882;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1881)(&v1882, v1880);
	i8 v1883 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1883 = v1882;

	i8 v1884 = (i8)(intptr_t)(ws+3056);
	i8 v1885 = *(i8*)(intptr_t)v1884;
	i8 v1886 = (i8)(intptr_t)(ws+3080);
	i8 v1887 = *(i8*)(intptr_t)v1886;
	i8 v1888 = v1887+(+24);
	*(i8*)(intptr_t)v1888 = v1885;

	i8 v1889 = (i8)(intptr_t)(ws+3064);
	i8 v1890 = *(i8*)(intptr_t)v1889;
	i8 v1891 = (i8)(intptr_t)(ws+3080);
	i8 v1892 = *(i8*)(intptr_t)v1891;
	i8 v1893 = v1892+(+32);
	*(i8*)(intptr_t)v1893 = v1890;

	i8 v1894 = (i8)(intptr_t)(ws+3072);
	i2 v1895 = *(i2*)(intptr_t)v1894;
	i8 v1896 = (i8)(intptr_t)(ws+3080);
	i8 v1897 = *(i8*)(intptr_t)v1896;
	*(i2*)(intptr_t)v1897 = v1895;

	i8 v1898 = (i8)(intptr_t)(ws+3074);
	i2 v1899 = *(i2*)(intptr_t)v1898;
	i8 v1900 = (i8)(intptr_t)(ws+3080);
	i8 v1901 = *(i8*)(intptr_t)v1900;
	i8 v1902 = v1901+(+2);
	*(i2*)(intptr_t)v1902 = v1899;

	i8 v1903 = (i8)(intptr_t)(ws+3076);
	i2 v1904 = *(i2*)(intptr_t)v1903;
	i8 v1905 = (i8)(intptr_t)(ws+3080);
	i8 v1906 = *(i8*)(intptr_t)v1905;
	i8 v1907 = v1906+(+4);
	*(i2*)(intptr_t)v1907 = v1904;

	i8 v1908 = (i8)(intptr_t)(ws+3078);
	i1 v1909 = *(i1*)(intptr_t)v1908;
	i8 v1910 = (i8)(intptr_t)(ws+3080);
	i8 v1911 = *(i8*)(intptr_t)v1910;
	i8 v1912 = v1911+(+6);
	*(i1*)(intptr_t)v1912 = v1909;

endsub:;
	*p1868 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3048 length ws+40
void f95_MidBlts(i8* p1935 /* m */, i1 p1936 /* negated */, i2 p1937 /* fallthrough */, i2 p1938 /* falselabel */, i2 p1939 /* truelabel */, i8 p1940 /* right */, i8 p1941 /* left */, i1 p1942 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p1942; /*width */
	*(i8*)(intptr_t)(ws+3056) = p1941; /*left */
	*(i8*)(intptr_t)(ws+3064) = p1940; /*right */
	*(i2*)(intptr_t)(ws+3072) = p1939; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p1938; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p1937; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p1936; /*negated */

	i8 v1943 = (i8)(intptr_t)(ws+3048);
	i1 v1944 = *(i1*)(intptr_t)v1943;
	i8 v1945 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1946;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1945)(&v1946, v1944);
	i1 v1947 = v1946+(+63);
	i8 v1948 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1949;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1948)(&v1949, v1947);
	i8 v1950 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1950 = v1949;

	i8 v1951 = (i8)(intptr_t)(ws+3056);
	i8 v1952 = *(i8*)(intptr_t)v1951;
	i8 v1953 = (i8)(intptr_t)(ws+3080);
	i8 v1954 = *(i8*)(intptr_t)v1953;
	i8 v1955 = v1954+(+24);
	*(i8*)(intptr_t)v1955 = v1952;

	i8 v1956 = (i8)(intptr_t)(ws+3064);
	i8 v1957 = *(i8*)(intptr_t)v1956;
	i8 v1958 = (i8)(intptr_t)(ws+3080);
	i8 v1959 = *(i8*)(intptr_t)v1958;
	i8 v1960 = v1959+(+32);
	*(i8*)(intptr_t)v1960 = v1957;

	i8 v1961 = (i8)(intptr_t)(ws+3072);
	i2 v1962 = *(i2*)(intptr_t)v1961;
	i8 v1963 = (i8)(intptr_t)(ws+3080);
	i8 v1964 = *(i8*)(intptr_t)v1963;
	*(i2*)(intptr_t)v1964 = v1962;

	i8 v1965 = (i8)(intptr_t)(ws+3074);
	i2 v1966 = *(i2*)(intptr_t)v1965;
	i8 v1967 = (i8)(intptr_t)(ws+3080);
	i8 v1968 = *(i8*)(intptr_t)v1967;
	i8 v1969 = v1968+(+2);
	*(i2*)(intptr_t)v1969 = v1966;

	i8 v1970 = (i8)(intptr_t)(ws+3076);
	i2 v1971 = *(i2*)(intptr_t)v1970;
	i8 v1972 = (i8)(intptr_t)(ws+3080);
	i8 v1973 = *(i8*)(intptr_t)v1972;
	i8 v1974 = v1973+(+4);
	*(i2*)(intptr_t)v1974 = v1971;

	i8 v1975 = (i8)(intptr_t)(ws+3078);
	i1 v1976 = *(i1*)(intptr_t)v1975;
	i8 v1977 = (i8)(intptr_t)(ws+3080);
	i8 v1978 = *(i8*)(intptr_t)v1977;
	i8 v1979 = v1978+(+6);
	*(i1*)(intptr_t)v1979 = v1976;

endsub:;
	*p1935 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3088 length ws+8
void f96_MidAsmgroupstart(i8* p1980 /* m */) {

	i1 v1981 = (i1)+15;
	i8 v1982 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1983;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1982)(&v1983, v1981);
	i8 v1984 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v1984 = v1983;

endsub:;
	*p1980 = *(i8*)(intptr_t)(ws+3088);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3008 length ws+8
void f99_MidReturn(i8* p2023 /* m */) {

	i1 v2024 = (i1)+26;
	i8 v2025 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2026;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2025)(&v2026, v2024);
	i8 v2027 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2027 = v2026;

endsub:;
	*p2023 = *(i8*)(intptr_t)(ws+3008);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3008 length ws+24
void f100_MidPair(i8* p2028 /* m */, i8 p2029 /* right */, i8 p2030 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2030; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2029; /*right */

	i1 v2031 = (i1)+23;
	i8 v2032 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2033;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2032)(&v2033, v2031);
	i8 v2034 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2034 = v2033;

	i8 v2035 = (i8)(intptr_t)(ws+3008);
	i8 v2036 = *(i8*)(intptr_t)v2035;
	i8 v2037 = (i8)(intptr_t)(ws+3024);
	i8 v2038 = *(i8*)(intptr_t)v2037;
	i8 v2039 = v2038+(+24);
	*(i8*)(intptr_t)v2039 = v2036;

	i8 v2040 = (i8)(intptr_t)(ws+3016);
	i8 v2041 = *(i8*)(intptr_t)v2040;
	i8 v2042 = (i8)(intptr_t)(ws+3024);
	i8 v2043 = *(i8*)(intptr_t)v2042;
	i8 v2044 = v2043+(+32);
	*(i8*)(intptr_t)v2044 = v2041;

endsub:;
	*p2028 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3104 length ws+16
void f101_MidConstant(i8* p2045 /* m */, i4 p2046 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p2046; /*value */

	i1 v2047 = (i1)+43;
	i8 v2048 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2049;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2048)(&v2049, v2047);
	i8 v2050 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v2050 = v2049;

	i8 v2051 = (i8)(intptr_t)(ws+3104);
	i4 v2052 = *(i4*)(intptr_t)v2051;
	i8 v2053 = (i8)(intptr_t)(ws+3112);
	i8 v2054 = *(i8*)(intptr_t)v2053;
	*(i4*)(intptr_t)v2054 = v2052;

endsub:;
	*p2045 = *(i8*)(intptr_t)(ws+3112);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3008 length ws+24
void f105_MidWhencase(i8* p2120 /* m */, i2 p2121 /* falselabel */, i4 p2122 /* value */, i1 p2123 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p2123; /*width */
	*(i4*)(intptr_t)(ws+3012) = p2122; /*value */
	*(i2*)(intptr_t)(ws+3016) = p2121; /*falselabel */

	i8 v2124 = (i8)(intptr_t)(ws+3008);
	i1 v2125 = *(i1*)(intptr_t)v2124;
	i8 v2126 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2127;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2126)(&v2127, v2125);
	i1 v2128 = v2127+(+78);
	i8 v2129 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2130;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2129)(&v2130, v2128);
	i8 v2131 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2131 = v2130;

	i8 v2132 = (i8)(intptr_t)(ws+3012);
	i4 v2133 = *(i4*)(intptr_t)v2132;
	i8 v2134 = (i8)(intptr_t)(ws+3024);
	i8 v2135 = *(i8*)(intptr_t)v2134;
	*(i4*)(intptr_t)v2135 = v2133;

	i8 v2136 = (i8)(intptr_t)(ws+3016);
	i2 v2137 = *(i2*)(intptr_t)v2136;
	i8 v2138 = (i8)(intptr_t)(ws+3024);
	i8 v2139 = *(i8*)(intptr_t)v2138;
	i8 v2140 = v2139+(+4);
	*(i2*)(intptr_t)v2140 = v2137;

endsub:;
	*p2120 = *(i8*)(intptr_t)(ws+3024);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3056 length ws+32
void f106_MidPoparg(i8* p2141 /* m */, i1 p2142 /* remaining */, i8 p2143 /* subr */, i1 p2144 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p2144; /*width */
	*(i8*)(intptr_t)(ws+3064) = p2143; /*subr */
	*(i1*)(intptr_t)(ws+3072) = p2142; /*remaining */

	i8 v2145 = (i8)(intptr_t)(ws+3056);
	i1 v2146 = *(i1*)(intptr_t)v2145;
	i8 v2147 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2148;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2147)(&v2148, v2146);
	i1 v2149 = v2148+(+38);
	i8 v2150 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2151;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2150)(&v2151, v2149);
	i8 v2152 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2152 = v2151;

	i8 v2153 = (i8)(intptr_t)(ws+3064);
	i8 v2154 = *(i8*)(intptr_t)v2153;
	i8 v2155 = (i8)(intptr_t)(ws+3080);
	i8 v2156 = *(i8*)(intptr_t)v2155;
	*(i8*)(intptr_t)v2156 = v2154;

	i8 v2157 = (i8)(intptr_t)(ws+3072);
	i1 v2158 = *(i1*)(intptr_t)v2157;
	i8 v2159 = (i8)(intptr_t)(ws+3080);
	i8 v2160 = *(i8*)(intptr_t)v2159;
	i8 v2161 = v2160+(+8);
	*(i1*)(intptr_t)v2161 = v2158;

endsub:;
	*p2141 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3016 length ws+48
void f107_MidArg(i8* p2162 /* m */, i1 p2163 /* remaining */, i8 p2164 /* subr */, i8 p2165 /* right */, i8 p2166 /* left */, i1 p2167 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2167; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2166; /*left */
	*(i8*)(intptr_t)(ws+3032) = p2165; /*right */
	*(i8*)(intptr_t)(ws+3040) = p2164; /*subr */
	*(i1*)(intptr_t)(ws+3048) = p2163; /*remaining */

	i8 v2168 = (i8)(intptr_t)(ws+3016);
	i1 v2169 = *(i1*)(intptr_t)v2168;
	i8 v2170 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2171;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2170)(&v2171, v2169);
	i1 v2172 = v2171+(+33);
	i8 v2173 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2174;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2173)(&v2174, v2172);
	i8 v2175 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2175 = v2174;

	i8 v2176 = (i8)(intptr_t)(ws+3024);
	i8 v2177 = *(i8*)(intptr_t)v2176;
	i8 v2178 = (i8)(intptr_t)(ws+3056);
	i8 v2179 = *(i8*)(intptr_t)v2178;
	i8 v2180 = v2179+(+24);
	*(i8*)(intptr_t)v2180 = v2177;

	i8 v2181 = (i8)(intptr_t)(ws+3032);
	i8 v2182 = *(i8*)(intptr_t)v2181;
	i8 v2183 = (i8)(intptr_t)(ws+3056);
	i8 v2184 = *(i8*)(intptr_t)v2183;
	i8 v2185 = v2184+(+32);
	*(i8*)(intptr_t)v2185 = v2182;

	i8 v2186 = (i8)(intptr_t)(ws+3040);
	i8 v2187 = *(i8*)(intptr_t)v2186;
	i8 v2188 = (i8)(intptr_t)(ws+3056);
	i8 v2189 = *(i8*)(intptr_t)v2188;
	*(i8*)(intptr_t)v2189 = v2187;

	i8 v2190 = (i8)(intptr_t)(ws+3048);
	i1 v2191 = *(i1*)(intptr_t)v2190;
	i8 v2192 = (i8)(intptr_t)(ws+3056);
	i8 v2193 = *(i8*)(intptr_t)v2192;
	i8 v2194 = v2193+(+8);
	*(i1*)(intptr_t)v2194 = v2191;

endsub:;
	*p2162 = *(i8*)(intptr_t)(ws+3056);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3024 length ws+16
void f108_MidStartinit(i8* p2195 /* m */, i8 p2196 /* sym */) {
	*(i8*)(intptr_t)(ws+3024) = p2196; /*sym */

	i1 v2197 = (i1)+6;
	i8 v2198 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2199;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2198)(&v2199, v2197);
	i8 v2200 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2200 = v2199;

	i8 v2201 = (i8)(intptr_t)(ws+3024);
	i8 v2202 = *(i8*)(intptr_t)v2201;
	i8 v2203 = (i8)(intptr_t)(ws+3032);
	i8 v2204 = *(i8*)(intptr_t)v2203;
	*(i8*)(intptr_t)v2204 = v2202;

endsub:;
	*p2195 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3008 length ws+32
void f109_MidBand(i8* p2205 /* m */, i1 p2206 /* negated */, i2 p2207 /* fallthrough */, i2 p2208 /* falselabel */, i2 p2209 /* truelabel */, i8 p2210 /* right */, i8 p2211 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2211; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2210; /*right */
	*(i2*)(intptr_t)(ws+3024) = p2209; /*truelabel */
	*(i2*)(intptr_t)(ws+3026) = p2208; /*falselabel */
	*(i2*)(intptr_t)(ws+3028) = p2207; /*fallthrough */
	*(i1*)(intptr_t)(ws+3030) = p2206; /*negated */

	i1 v2212 = (i1)+56;
	i8 v2213 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2214;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2213)(&v2214, v2212);
	i8 v2215 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2215 = v2214;

	i8 v2216 = (i8)(intptr_t)(ws+3008);
	i8 v2217 = *(i8*)(intptr_t)v2216;
	i8 v2218 = (i8)(intptr_t)(ws+3032);
	i8 v2219 = *(i8*)(intptr_t)v2218;
	i8 v2220 = v2219+(+24);
	*(i8*)(intptr_t)v2220 = v2217;

	i8 v2221 = (i8)(intptr_t)(ws+3016);
	i8 v2222 = *(i8*)(intptr_t)v2221;
	i8 v2223 = (i8)(intptr_t)(ws+3032);
	i8 v2224 = *(i8*)(intptr_t)v2223;
	i8 v2225 = v2224+(+32);
	*(i8*)(intptr_t)v2225 = v2222;

	i8 v2226 = (i8)(intptr_t)(ws+3024);
	i2 v2227 = *(i2*)(intptr_t)v2226;
	i8 v2228 = (i8)(intptr_t)(ws+3032);
	i8 v2229 = *(i8*)(intptr_t)v2228;
	*(i2*)(intptr_t)v2229 = v2227;

	i8 v2230 = (i8)(intptr_t)(ws+3026);
	i2 v2231 = *(i2*)(intptr_t)v2230;
	i8 v2232 = (i8)(intptr_t)(ws+3032);
	i8 v2233 = *(i8*)(intptr_t)v2232;
	i8 v2234 = v2233+(+2);
	*(i2*)(intptr_t)v2234 = v2231;

	i8 v2235 = (i8)(intptr_t)(ws+3028);
	i2 v2236 = *(i2*)(intptr_t)v2235;
	i8 v2237 = (i8)(intptr_t)(ws+3032);
	i8 v2238 = *(i8*)(intptr_t)v2237;
	i8 v2239 = v2238+(+4);
	*(i2*)(intptr_t)v2239 = v2236;

	i8 v2240 = (i8)(intptr_t)(ws+3030);
	i1 v2241 = *(i1*)(intptr_t)v2240;
	i8 v2242 = (i8)(intptr_t)(ws+3032);
	i8 v2243 = *(i8*)(intptr_t)v2242;
	i8 v2244 = v2243+(+6);
	*(i1*)(intptr_t)v2244 = v2241;

endsub:;
	*p2205 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3016 length ws+16
void f110_MidJump(i8* p2245 /* m */, i2 p2246 /* label */) {
	*(i2*)(intptr_t)(ws+3016) = p2246; /*label */

	i1 v2247 = (i1)+25;
	i8 v2248 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2249;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2248)(&v2249, v2247);
	i8 v2250 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2250 = v2249;

	i8 v2251 = (i8)(intptr_t)(ws+3016);
	i2 v2252 = *(i2*)(intptr_t)v2251;
	i8 v2253 = (i8)(intptr_t)(ws+3024);
	i8 v2254 = *(i8*)(intptr_t)v2253;
	*(i2*)(intptr_t)v2254 = v2252;

endsub:;
	*p2245 = *(i8*)(intptr_t)(ws+3024);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3048 length ws+40
void f111_MidBeq(i8* p2255 /* m */, i1 p2256 /* negated */, i2 p2257 /* fallthrough */, i2 p2258 /* falselabel */, i2 p2259 /* truelabel */, i8 p2260 /* right */, i8 p2261 /* left */, i1 p2262 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2262; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2261; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2260; /*right */
	*(i2*)(intptr_t)(ws+3072) = p2259; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p2258; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p2257; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p2256; /*negated */

	i8 v2263 = (i8)(intptr_t)(ws+3048);
	i1 v2264 = *(i1*)(intptr_t)v2263;
	i8 v2265 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2266;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2265)(&v2266, v2264);
	i1 v2267 = v2266+(+58);
	i8 v2268 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2269;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2268)(&v2269, v2267);
	i8 v2270 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2270 = v2269;

	i8 v2271 = (i8)(intptr_t)(ws+3056);
	i8 v2272 = *(i8*)(intptr_t)v2271;
	i8 v2273 = (i8)(intptr_t)(ws+3080);
	i8 v2274 = *(i8*)(intptr_t)v2273;
	i8 v2275 = v2274+(+24);
	*(i8*)(intptr_t)v2275 = v2272;

	i8 v2276 = (i8)(intptr_t)(ws+3064);
	i8 v2277 = *(i8*)(intptr_t)v2276;
	i8 v2278 = (i8)(intptr_t)(ws+3080);
	i8 v2279 = *(i8*)(intptr_t)v2278;
	i8 v2280 = v2279+(+32);
	*(i8*)(intptr_t)v2280 = v2277;

	i8 v2281 = (i8)(intptr_t)(ws+3072);
	i2 v2282 = *(i2*)(intptr_t)v2281;
	i8 v2283 = (i8)(intptr_t)(ws+3080);
	i8 v2284 = *(i8*)(intptr_t)v2283;
	*(i2*)(intptr_t)v2284 = v2282;

	i8 v2285 = (i8)(intptr_t)(ws+3074);
	i2 v2286 = *(i2*)(intptr_t)v2285;
	i8 v2287 = (i8)(intptr_t)(ws+3080);
	i8 v2288 = *(i8*)(intptr_t)v2287;
	i8 v2289 = v2288+(+2);
	*(i2*)(intptr_t)v2289 = v2286;

	i8 v2290 = (i8)(intptr_t)(ws+3076);
	i2 v2291 = *(i2*)(intptr_t)v2290;
	i8 v2292 = (i8)(intptr_t)(ws+3080);
	i8 v2293 = *(i8*)(intptr_t)v2292;
	i8 v2294 = v2293+(+4);
	*(i2*)(intptr_t)v2294 = v2291;

	i8 v2295 = (i8)(intptr_t)(ws+3078);
	i1 v2296 = *(i1*)(intptr_t)v2295;
	i8 v2297 = (i8)(intptr_t)(ws+3080);
	i8 v2298 = *(i8*)(intptr_t)v2297;
	i8 v2299 = v2298+(+6);
	*(i1*)(intptr_t)v2299 = v2296;

endsub:;
	*p2255 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3016 length ws+16
void f112_MidEndsub(i8* p2300 /* m */, i8 p2301 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p2301; /*subr */

	i1 v2302 = (i1)+5;
	i8 v2303 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2304;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2303)(&v2304, v2302);
	i8 v2305 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2305 = v2304;

	i8 v2306 = (i8)(intptr_t)(ws+3016);
	i8 v2307 = *(i8*)(intptr_t)v2306;
	i8 v2308 = (i8)(intptr_t)(ws+3024);
	i8 v2309 = *(i8*)(intptr_t)v2308;
	*(i8*)(intptr_t)v2309 = v2307;

endsub:;
	*p2300 = *(i8*)(intptr_t)(ws+3024);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3056 length ws+16
void f113_MidInit(i8* p2310 /* m */, i4 p2311 /* value */, i1 p2312 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p2312; /*width */
	*(i4*)(intptr_t)(ws+3060) = p2311; /*value */

	i8 v2313 = (i8)(intptr_t)(ws+3056);
	i1 v2314 = *(i1*)(intptr_t)v2313;
	i8 v2315 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2316;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2315)(&v2316, v2314);
	i1 v2317 = v2316+(+7);
	i8 v2318 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2319;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2318)(&v2319, v2317);
	i8 v2320 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v2320 = v2319;

	i8 v2321 = (i8)(intptr_t)(ws+3060);
	i4 v2322 = *(i4*)(intptr_t)v2321;
	i8 v2323 = (i8)(intptr_t)(ws+3064);
	i8 v2324 = *(i8*)(intptr_t)v2323;
	*(i4*)(intptr_t)v2324 = v2322;

endsub:;
	*p2310 = *(i8*)(intptr_t)(ws+3064);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3008 length ws+32
void f116_MidBor(i8* p2369 /* m */, i1 p2370 /* negated */, i2 p2371 /* fallthrough */, i2 p2372 /* falselabel */, i2 p2373 /* truelabel */, i8 p2374 /* right */, i8 p2375 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2375; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2374; /*right */
	*(i2*)(intptr_t)(ws+3024) = p2373; /*truelabel */
	*(i2*)(intptr_t)(ws+3026) = p2372; /*falselabel */
	*(i2*)(intptr_t)(ws+3028) = p2371; /*fallthrough */
	*(i1*)(intptr_t)(ws+3030) = p2370; /*negated */

	i1 v2376 = (i1)+57;
	i8 v2377 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2378;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2377)(&v2378, v2376);
	i8 v2379 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2379 = v2378;

	i8 v2380 = (i8)(intptr_t)(ws+3008);
	i8 v2381 = *(i8*)(intptr_t)v2380;
	i8 v2382 = (i8)(intptr_t)(ws+3032);
	i8 v2383 = *(i8*)(intptr_t)v2382;
	i8 v2384 = v2383+(+24);
	*(i8*)(intptr_t)v2384 = v2381;

	i8 v2385 = (i8)(intptr_t)(ws+3016);
	i8 v2386 = *(i8*)(intptr_t)v2385;
	i8 v2387 = (i8)(intptr_t)(ws+3032);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	i8 v2389 = v2388+(+32);
	*(i8*)(intptr_t)v2389 = v2386;

	i8 v2390 = (i8)(intptr_t)(ws+3024);
	i2 v2391 = *(i2*)(intptr_t)v2390;
	i8 v2392 = (i8)(intptr_t)(ws+3032);
	i8 v2393 = *(i8*)(intptr_t)v2392;
	*(i2*)(intptr_t)v2393 = v2391;

	i8 v2394 = (i8)(intptr_t)(ws+3026);
	i2 v2395 = *(i2*)(intptr_t)v2394;
	i8 v2396 = (i8)(intptr_t)(ws+3032);
	i8 v2397 = *(i8*)(intptr_t)v2396;
	i8 v2398 = v2397+(+2);
	*(i2*)(intptr_t)v2398 = v2395;

	i8 v2399 = (i8)(intptr_t)(ws+3028);
	i2 v2400 = *(i2*)(intptr_t)v2399;
	i8 v2401 = (i8)(intptr_t)(ws+3032);
	i8 v2402 = *(i8*)(intptr_t)v2401;
	i8 v2403 = v2402+(+4);
	*(i2*)(intptr_t)v2403 = v2400;

	i8 v2404 = (i8)(intptr_t)(ws+3030);
	i1 v2405 = *(i1*)(intptr_t)v2404;
	i8 v2406 = (i8)(intptr_t)(ws+3032);
	i8 v2407 = *(i8*)(intptr_t)v2406;
	i8 v2408 = v2407+(+6);
	*(i1*)(intptr_t)v2408 = v2405;

endsub:;
	*p2369 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3008 length ws+16
void f117_MidAsmtext(i8* p2409 /* m */, i8 p2410 /* text */) {
	*(i8*)(intptr_t)(ws+3008) = p2410; /*text */

	i1 v2411 = (i1)+18;
	i8 v2412 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2413;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2412)(&v2413, v2411);
	i8 v2414 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2414 = v2413;

	i8 v2415 = (i8)(intptr_t)(ws+3008);
	i8 v2416 = *(i8*)(intptr_t)v2415;
	i8 v2417 = (i8)(intptr_t)(ws+3016);
	i8 v2418 = *(i8*)(intptr_t)v2417;
	*(i8*)(intptr_t)v2418 = v2416;

endsub:;
	*p2409 = *(i8*)(intptr_t)(ws+3016);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3088 length ws+8
void f120_MidAsmgroupend(i8* p2462 /* m */) {

	i1 v2463 = (i1)+16;
	i8 v2464 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2465;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2464)(&v2465, v2463);
	i8 v2466 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v2466 = v2465;

endsub:;
	*p2462 = *(i8*)(intptr_t)(ws+3088);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3008 length ws+16
void f121_MidString(i8* p2467 /* m */, i8 p2468 /* text */) {
	*(i8*)(intptr_t)(ws+3008) = p2468; /*text */

	i1 v2469 = (i1)+44;
	i8 v2470 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2471;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2470)(&v2471, v2469);
	i8 v2472 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2472 = v2471;

	i8 v2473 = (i8)(intptr_t)(ws+3008);
	i8 v2474 = *(i8*)(intptr_t)v2473;
	i8 v2475 = (i8)(intptr_t)(ws+3016);
	i8 v2476 = *(i8*)(intptr_t)v2475;
	*(i8*)(intptr_t)v2476 = v2474;

endsub:;
	*p2467 = *(i8*)(intptr_t)(ws+3016);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3024 length ws+40
void f122_MidCalle(i8* p2477 /* m */, i8 p2478 /* subr */, i8 p2479 /* right */, i8 p2480 /* left */, i1 p2481 /* width */) {
	*(i1*)(intptr_t)(ws+3024) = p2481; /*width */
	*(i8*)(intptr_t)(ws+3032) = p2480; /*left */
	*(i8*)(intptr_t)(ws+3040) = p2479; /*right */
	*(i8*)(intptr_t)(ws+3048) = p2478; /*subr */

	i8 v2482 = (i8)(intptr_t)(ws+3024);
	i1 v2483 = *(i1*)(intptr_t)v2482;
	i8 v2484 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2485;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2484)(&v2485, v2483);
	i1 v2486 = v2485+(+28);
	i8 v2487 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2488;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2487)(&v2488, v2486);
	i8 v2489 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2489 = v2488;

	i8 v2490 = (i8)(intptr_t)(ws+3032);
	i8 v2491 = *(i8*)(intptr_t)v2490;
	i8 v2492 = (i8)(intptr_t)(ws+3056);
	i8 v2493 = *(i8*)(intptr_t)v2492;
	i8 v2494 = v2493+(+24);
	*(i8*)(intptr_t)v2494 = v2491;

	i8 v2495 = (i8)(intptr_t)(ws+3040);
	i8 v2496 = *(i8*)(intptr_t)v2495;
	i8 v2497 = (i8)(intptr_t)(ws+3056);
	i8 v2498 = *(i8*)(intptr_t)v2497;
	i8 v2499 = v2498+(+32);
	*(i8*)(intptr_t)v2499 = v2496;

	i8 v2500 = (i8)(intptr_t)(ws+3048);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	i8 v2502 = (i8)(intptr_t)(ws+3056);
	i8 v2503 = *(i8*)(intptr_t)v2502;
	*(i8*)(intptr_t)v2503 = v2501;

endsub:;
	*p2477 = *(i8*)(intptr_t)(ws+3056);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3016 length ws+16
void f123_MidAsmvalue(i8* p2504 /* m */, i4 p2505 /* value */) {
	*(i4*)(intptr_t)(ws+3016) = p2505; /*value */

	i1 v2506 = (i1)+20;
	i8 v2507 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2508;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2507)(&v2508, v2506);
	i8 v2509 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2509 = v2508;

	i8 v2510 = (i8)(intptr_t)(ws+3016);
	i4 v2511 = *(i4*)(intptr_t)v2510;
	i8 v2512 = (i8)(intptr_t)(ws+3024);
	i8 v2513 = *(i8*)(intptr_t)v2512;
	*(i4*)(intptr_t)v2513 = v2511;

endsub:;
	*p2504 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3008 length ws+8
void f125_MidAsmstart(i8* p2536 /* m */) {

	i1 v2537 = (i1)+17;
	i8 v2538 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2539;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2538)(&v2539, v2537);
	i8 v2540 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2540 = v2539;

endsub:;
	*p2536 = *(i8*)(intptr_t)(ws+3008);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+2888 length ws+8
void f128_MidEndfile(i8* p2585 /* m */) {

	i1 v2586 = (i1)+3;
	i8 v2587 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2588;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2587)(&v2588, v2586);
	i8 v2589 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v2589 = v2588;

endsub:;
	*p2585 = *(i8*)(intptr_t)(ws+2888);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+2888 length ws+8
void f129_MidStartfile(i8* p2590 /* m */) {

	i1 v2591 = (i1)+2;
	i8 v2592 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2593;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2592)(&v2593, v2591);
	i8 v2594 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v2594 = v2593;

endsub:;
	*p2590 = *(i8*)(intptr_t)(ws+2888);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidFallback workspace at ws+3248 length ws+16
void f131_MidFallback(i8* p2617 /* m */, i8 p2618 /* left */) {
	*(i8*)(intptr_t)(ws+3248) = p2618; /*left */

	i1 v2619 = (i1)+22;
	i8 v2620 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2621;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2620)(&v2621, v2619);
	i8 v2622 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v2622 = v2621;

	i8 v2623 = (i8)(intptr_t)(ws+3248);
	i8 v2624 = *(i8*)(intptr_t)v2623;
	i8 v2625 = (i8)(intptr_t)(ws+3256);
	i8 v2626 = *(i8*)(intptr_t)v2625;
	i8 v2627 = v2626+(+24);
	*(i8*)(intptr_t)v2627 = v2624;

endsub:;
	*p2617 = *(i8*)(intptr_t)(ws+3256);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3056 length ws+32
void f132_MidStore(i8* p2628 /* m */, i8 p2629 /* right */, i8 p2630 /* left */, i1 p2631 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p2631; /*width */
	*(i8*)(intptr_t)(ws+3064) = p2630; /*left */
	*(i8*)(intptr_t)(ws+3072) = p2629; /*right */

	i8 v2632 = (i8)(intptr_t)(ws+3056);
	i1 v2633 = *(i1*)(intptr_t)v2632;
	i8 v2634 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2635;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2634)(&v2635, v2633);
	i1 v2636 = v2635+(+51);
	i8 v2637 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2638;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2637)(&v2638, v2636);
	i8 v2639 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2639 = v2638;

	i8 v2640 = (i8)(intptr_t)(ws+3064);
	i8 v2641 = *(i8*)(intptr_t)v2640;
	i8 v2642 = (i8)(intptr_t)(ws+3080);
	i8 v2643 = *(i8*)(intptr_t)v2642;
	i8 v2644 = v2643+(+24);
	*(i8*)(intptr_t)v2644 = v2641;

	i8 v2645 = (i8)(intptr_t)(ws+3072);
	i8 v2646 = *(i8*)(intptr_t)v2645;
	i8 v2647 = (i8)(intptr_t)(ws+3080);
	i8 v2648 = *(i8*)(intptr_t)v2647;
	i8 v2649 = v2648+(+32);
	*(i8*)(intptr_t)v2649 = v2646;

endsub:;
	*p2628 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3056 length ws+32
void f136_MidCall(i8* p2710 /* m */, i8 p2711 /* subr */, i8 p2712 /* right */, i8 p2713 /* left */) {
	*(i8*)(intptr_t)(ws+3056) = p2713; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2712; /*right */
	*(i8*)(intptr_t)(ws+3072) = p2711; /*subr */

	i1 v2714 = (i1)+27;
	i8 v2715 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2716;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2715)(&v2716, v2714);
	i8 v2717 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2717 = v2716;

	i8 v2718 = (i8)(intptr_t)(ws+3056);
	i8 v2719 = *(i8*)(intptr_t)v2718;
	i8 v2720 = (i8)(intptr_t)(ws+3080);
	i8 v2721 = *(i8*)(intptr_t)v2720;
	i8 v2722 = v2721+(+24);
	*(i8*)(intptr_t)v2722 = v2719;

	i8 v2723 = (i8)(intptr_t)(ws+3064);
	i8 v2724 = *(i8*)(intptr_t)v2723;
	i8 v2725 = (i8)(intptr_t)(ws+3080);
	i8 v2726 = *(i8*)(intptr_t)v2725;
	i8 v2727 = v2726+(+32);
	*(i8*)(intptr_t)v2727 = v2724;

	i8 v2728 = (i8)(intptr_t)(ws+3072);
	i8 v2729 = *(i8*)(intptr_t)v2728;
	i8 v2730 = (i8)(intptr_t)(ws+3080);
	i8 v2731 = *(i8*)(intptr_t)v2730;
	*(i8*)(intptr_t)v2731 = v2729;

endsub:;
	*p2710 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3016 length ws+24
void f138_MidStartcase(i8* p2753 /* m */, i8 p2754 /* left */, i1 p2755 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2755; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2754; /*left */

	i8 v2756 = (i8)(intptr_t)(ws+3016);
	i1 v2757 = *(i1*)(intptr_t)v2756;
	i8 v2758 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2759;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2758)(&v2759, v2757);
	i1 v2760 = v2759+(+73);
	i8 v2761 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2762;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2761)(&v2762, v2760);
	i8 v2763 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2763 = v2762;

	i8 v2764 = (i8)(intptr_t)(ws+3024);
	i8 v2765 = *(i8*)(intptr_t)v2764;
	i8 v2766 = (i8)(intptr_t)(ws+3032);
	i8 v2767 = *(i8*)(intptr_t)v2766;
	i8 v2768 = v2767+(+24);
	*(i8*)(intptr_t)v2768 = v2765;

endsub:;
	*p2753 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3008 length ws+16
void f139_MidStartsub(i8* p2769 /* m */, i8 p2770 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p2770; /*subr */

	i1 v2771 = (i1)+4;
	i8 v2772 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2773;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2772)(&v2773, v2771);
	i8 v2774 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2774 = v2773;

	i8 v2775 = (i8)(intptr_t)(ws+3008);
	i8 v2776 = *(i8*)(intptr_t)v2775;
	i8 v2777 = (i8)(intptr_t)(ws+3016);
	i8 v2778 = *(i8*)(intptr_t)v2777;
	*(i8*)(intptr_t)v2778 = v2776;

endsub:;
	*p2769 = *(i8*)(intptr_t)(ws+3016);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3008 length ws+8
void f140_MidAsmend(i8* p2779 /* m */) {

	i1 v2780 = (i1)+21;
	i8 v2781 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2782;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2781)(&v2782, v2780);
	i8 v2783 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2783 = v2782;

endsub:;
	*p2779 = *(i8*)(intptr_t)(ws+3008);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3016 length ws+8
void f141_MidEnd(i8* p2784 /* m */) {

	i1 v2785 = (i1)+1;
	i8 v2786 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2787;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2786)(&v2787, v2785);
	i8 v2788 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2788 = v2787;

endsub:;
	*p2784 = *(i8*)(intptr_t)(ws+3016);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3072 length ws+16
void f142_MidLabel(i8* p2789 /* m */, i2 p2790 /* label */) {
	*(i2*)(intptr_t)(ws+3072) = p2790; /*label */

	i1 v2791 = (i1)+24;
	i8 v2792 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2793;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2792)(&v2793, v2791);
	i8 v2794 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2794 = v2793;

	i8 v2795 = (i8)(intptr_t)(ws+3072);
	i2 v2796 = *(i2*)(intptr_t)v2795;
	i8 v2797 = (i8)(intptr_t)(ws+3080);
	i8 v2798 = *(i8*)(intptr_t)v2797;
	*(i2*)(intptr_t)v2798 = v2796;

endsub:;
	*p2789 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3016 length ws+24
void f143_MidAddress(i8* p2799 /* m */, i2 p2800 /* off */, i8 p2801 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p2801; /*sym */
	*(i2*)(intptr_t)(ws+3024) = p2800; /*off */

	i1 v2802 = (i1)+45;
	i8 v2803 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2804;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2803)(&v2804, v2802);
	i8 v2805 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2805 = v2804;

	i8 v2806 = (i8)(intptr_t)(ws+3016);
	i8 v2807 = *(i8*)(intptr_t)v2806;
	i8 v2808 = (i8)(intptr_t)(ws+3032);
	i8 v2809 = *(i8*)(intptr_t)v2808;
	*(i8*)(intptr_t)v2809 = v2807;

	i8 v2810 = (i8)(intptr_t)(ws+3024);
	i2 v2811 = *(i2*)(intptr_t)v2810;
	i8 v2812 = (i8)(intptr_t)(ws+3032);
	i8 v2813 = *(i8*)(intptr_t)v2812;
	i8 v2814 = v2813+(+8);
	*(i2*)(intptr_t)v2814 = v2811;

endsub:;
	*p2799 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInits workspace at ws+3032 length ws+16
void f145_MidInits(i8* p2836 /* m */, i8 p2837 /* text */) {
	*(i8*)(intptr_t)(ws+3032) = p2837; /*text */

	i1 v2838 = (i1)+12;
	i8 v2839 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2840;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2839)(&v2840, v2838);
	i8 v2841 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v2841 = v2840;

	i8 v2842 = (i8)(intptr_t)(ws+3032);
	i8 v2843 = *(i8*)(intptr_t)v2842;
	i8 v2844 = (i8)(intptr_t)(ws+3040);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	*(i8*)(intptr_t)v2845 = v2843;

endsub:;
	*p2836 = *(i8*)(intptr_t)(ws+3040);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3016 length ws+16
void f146_MidAsmsymbol(i8* p2846 /* m */, i8 p2847 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p2847; /*sym */

	i1 v2848 = (i1)+19;
	i8 v2849 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2850;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2849)(&v2850, v2848);
	i8 v2851 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2851 = v2850;

	i8 v2852 = (i8)(intptr_t)(ws+3016);
	i8 v2853 = *(i8*)(intptr_t)v2852;
	i8 v2854 = (i8)(intptr_t)(ws+3024);
	i8 v2855 = *(i8*)(intptr_t)v2854;
	*(i8*)(intptr_t)v2855 = v2853;

endsub:;
	*p2846 = *(i8*)(intptr_t)(ws+3024);
}

// NodeWidth workspace at ws+3056 length ws+9
void f147_NodeWidth(i1* p2856 /* width */, i8 p2857 /* node */) {
	*(i8*)(intptr_t)(ws+3056) = p2857; /*node */

	i1 v2858 = (i1)+0;
	i8 v2859 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2859 = v2858;

	i8 v2860 = (i8)(intptr_t)(ws+3056);
	i8 v2861 = *(i8*)(intptr_t)v2860;
	i8 v2862 = v2861+(+16);
	i8 v2863 = *(i8*)(intptr_t)v2862;
	i8 v2864 = (i8)+0;
	if (v2863==v2864) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	i8 v2865 = (i8)(intptr_t)(ws+3056);
	i8 v2866 = *(i8*)(intptr_t)v2865;
	i8 v2867 = v2866+(+16);
	i8 v2868 = *(i8*)(intptr_t)v2867;
	i8 v2869 = v2868+(+42);
	i2 v2870 = *(i2*)(intptr_t)v2869;
	i1 v2871 = v2870;
	i8 v2872 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2872 = v2871;

	goto c02_01d2;

c02_01d6:;

c02_01d2:;

endsub:;
	*p2856 = *(i1*)(intptr_t)(ws+3064);
}
const i1 c02_s0041[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f61_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3144 length ws+0
void f148_midcodec_i_bad_fold(void) {

	i8 v2873 = (i8)(intptr_t)c02_s0041;
	i8 v2874 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v2874)(v2873);

endsub:;
}
	void f148_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3056 length ws+24
void f149_FoldConstant1(i4* p2875 /* result */, i8 p2876 /* lhsp */, i1 p2877 /* op */) {
	*(i1*)(intptr_t)(ws+3056) = p2877; /*op */
	*(i8*)(intptr_t)(ws+3064) = p2876; /*lhsp */

	i8 v2878 = (i8)(intptr_t)(ws+3064);
	i8 v2879 = *(i8*)(intptr_t)v2878;
	i4 v2880 = *(i4*)(intptr_t)v2879;
	i8 v2881 = (i8)(intptr_t)(ws+3076);
	*(i4*)(intptr_t)v2881 = v2880;

	i8 v2882 = (i8)(intptr_t)(ws+3056);
	i1 v2883 = *(i1*)(intptr_t)v2882;

	if (v2883 != +108) goto c02_01d8;

	i8 v2884 = (i8)(intptr_t)(ws+3076);
	i4 v2885 = *(i4*)(intptr_t)v2884;
	i4 v2886 = ~v2885;
	i8 v2887 = (i8)(intptr_t)(ws+3072);
	*(i4*)(intptr_t)v2887 = v2886;

	goto c02_01d7;

c02_01d8:;

	if (v2883 != +113) goto c02_01d9;

	i8 v2888 = (i8)(intptr_t)(ws+3076);
	i4 v2889 = *(i4*)(intptr_t)v2888;
	i4 v2890 = -v2889;
	i8 v2891 = (i8)(intptr_t)(ws+3072);
	*(i4*)(intptr_t)v2891 = v2890;

	goto c02_01d7;

c02_01d9:;

	i8 v2892 = (i8)(intptr_t)(f148_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v2892)();

c02_01d7:;


endsub:;
	*p2875 = *(i4*)(intptr_t)(ws+3072);
}
	void f148_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3104 length ws+36
void f150_FoldConstant2(i4* p2893 /* result */, i8 p2894 /* rhsp */, i8 p2895 /* lhsp */, i1 p2896 /* op */) {
	*(i1*)(intptr_t)(ws+3104) = p2896; /*op */
	*(i8*)(intptr_t)(ws+3112) = p2895; /*lhsp */
	*(i8*)(intptr_t)(ws+3120) = p2894; /*rhsp */

	i8 v2897 = (i8)(intptr_t)(ws+3112);
	i8 v2898 = *(i8*)(intptr_t)v2897;
	i4 v2899 = *(i4*)(intptr_t)v2898;
	i8 v2900 = (i8)(intptr_t)(ws+3132);
	*(i4*)(intptr_t)v2900 = v2899;

	i8 v2901 = (i8)(intptr_t)(ws+3120);
	i8 v2902 = *(i8*)(intptr_t)v2901;
	i4 v2903 = *(i4*)(intptr_t)v2902;
	i8 v2904 = (i8)(intptr_t)(ws+3136);
	*(i4*)(intptr_t)v2904 = v2903;

	i8 v2905 = (i8)(intptr_t)(ws+3104);
	i1 v2906 = *(i1*)(intptr_t)v2905;

	if (v2906 != +158) goto c02_01db;

	i8 v2907 = (i8)(intptr_t)(ws+3132);
	i4 v2908 = *(i4*)(intptr_t)v2907;
	i8 v2909 = (i8)(intptr_t)(ws+3136);
	i4 v2910 = *(i4*)(intptr_t)v2909;
	i4 v2911 = v2908+v2910;
	i8 v2912 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2912 = v2911;

	goto c02_01da;

c02_01db:;

	if (v2906 != +133) goto c02_01dc;

	i8 v2913 = (i8)(intptr_t)(ws+3132);
	i4 v2914 = *(i4*)(intptr_t)v2913;
	i8 v2915 = (i8)(intptr_t)(ws+3136);
	i4 v2916 = *(i4*)(intptr_t)v2915;
	i4 v2917 = v2914-v2916;
	i8 v2918 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2918 = v2917;

	goto c02_01da;

c02_01dc:;

	if (v2906 != +163) goto c02_01dd;

	i8 v2919 = (i8)(intptr_t)(ws+3132);
	i4 v2920 = *(i4*)(intptr_t)v2919;
	i8 v2921 = (i8)(intptr_t)(ws+3136);
	i4 v2922 = *(i4*)(intptr_t)v2921;
	i4 v2923 = v2920*v2922;
	i8 v2924 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2924 = v2923;

	goto c02_01da;

c02_01dd:;

	if (v2906 != +138) goto c02_01de;

	i8 v2925 = (i8)(intptr_t)(ws+3132);
	i4 v2926 = *(i4*)(intptr_t)v2925;
	i8 v2927 = (i8)(intptr_t)(ws+3136);
	i4 v2928 = *(i4*)(intptr_t)v2927;
	i4 v2929 = v2926/v2928;
	i8 v2930 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2930 = v2929;

	goto c02_01da;

c02_01de:;

	if (v2906 != +143) goto c02_01df;

	i8 v2931 = (i8)(intptr_t)(ws+3132);
	i4 v2932 = *(i4*)(intptr_t)v2931;
	i8 v2933 = (i8)(intptr_t)(ws+3136);
	i4 v2934 = *(i4*)(intptr_t)v2933;
	i4 v2935 = (s4)v2932/(s4)v2934;
	i8 v2936 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2936 = v2935;

	goto c02_01da;

c02_01df:;

	if (v2906 != +148) goto c02_01e0;

	i8 v2937 = (i8)(intptr_t)(ws+3132);
	i4 v2938 = *(i4*)(intptr_t)v2937;
	i8 v2939 = (i8)(intptr_t)(ws+3136);
	i4 v2940 = *(i4*)(intptr_t)v2939;
	i4 v2941 = v2938%v2940;
	i8 v2942 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2942 = v2941;

	goto c02_01da;

c02_01e0:;

	if (v2906 != +153) goto c02_01e1;

	i8 v2943 = (i8)(intptr_t)(ws+3132);
	i4 v2944 = *(i4*)(intptr_t)v2943;
	i8 v2945 = (i8)(intptr_t)(ws+3136);
	i4 v2946 = *(i4*)(intptr_t)v2945;
	i4 v2947 = (s4)v2944%(s4)v2946;
	i8 v2948 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2948 = v2947;

	goto c02_01da;

c02_01e1:;

	if (v2906 != +168) goto c02_01e2;

	i8 v2949 = (i8)(intptr_t)(ws+3132);
	i4 v2950 = *(i4*)(intptr_t)v2949;
	i8 v2951 = (i8)(intptr_t)(ws+3136);
	i4 v2952 = *(i4*)(intptr_t)v2951;
	i4 v2953 = v2950&v2952;
	i8 v2954 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2954 = v2953;

	goto c02_01da;

c02_01e2:;

	if (v2906 != +173) goto c02_01e3;

	i8 v2955 = (i8)(intptr_t)(ws+3132);
	i4 v2956 = *(i4*)(intptr_t)v2955;
	i8 v2957 = (i8)(intptr_t)(ws+3136);
	i4 v2958 = *(i4*)(intptr_t)v2957;
	i4 v2959 = v2956|v2958;
	i8 v2960 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2960 = v2959;

	goto c02_01da;

c02_01e3:;

	if (v2906 != +178) goto c02_01e4;

	i8 v2961 = (i8)(intptr_t)(ws+3132);
	i4 v2962 = *(i4*)(intptr_t)v2961;
	i8 v2963 = (i8)(intptr_t)(ws+3136);
	i4 v2964 = *(i4*)(intptr_t)v2963;
	i4 v2965 = v2962^v2964;
	i8 v2966 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2966 = v2965;

	goto c02_01da;

c02_01e4:;

	if (v2906 != +118) goto c02_01e5;

	i8 v2967 = (i8)(intptr_t)(ws+3132);
	i4 v2968 = *(i4*)(intptr_t)v2967;
	i8 v2969 = (i8)(intptr_t)(ws+3136);
	i4 v2970 = *(i4*)(intptr_t)v2969;
	i1 v2971 = (s1)(s4)v2970;
	i4 v2972 = ((i4)v2968)<<v2971;
	i8 v2973 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2973 = v2972;

	goto c02_01da;

c02_01e5:;

	if (v2906 != +123) goto c02_01e6;

	i8 v2974 = (i8)(intptr_t)(ws+3132);
	i4 v2975 = *(i4*)(intptr_t)v2974;
	i8 v2976 = (i8)(intptr_t)(ws+3136);
	i4 v2977 = *(i4*)(intptr_t)v2976;
	i1 v2978 = (s1)(s4)v2977;
	i4 v2979 = ((i4)v2975)>>v2978;
	i8 v2980 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2980 = v2979;

	goto c02_01da;

c02_01e6:;

	if (v2906 != +128) goto c02_01e7;

	i8 v2981 = (i8)(intptr_t)(ws+3132);
	i4 v2982 = *(i4*)(intptr_t)v2981;
	i8 v2983 = (i8)(intptr_t)(ws+3136);
	i4 v2984 = *(i4*)(intptr_t)v2983;
	i1 v2985 = (s1)(s4)v2984;
	i4 v2986 = ((s4)v2982)>>v2985;
	i8 v2987 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2987 = v2986;

	goto c02_01da;

c02_01e7:;

	i8 v2988 = (i8)(intptr_t)(f148_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v2988)();

c02_01da:;


endsub:;
	*p2893 = *(i4*)(intptr_t)(ws+3128);
}
	void f149_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3032 length ws+24
void f151_MidC1Op(i8* p2989 /* result */, i8 p2990 /* lhs */, i1 p2991 /* width */, i1 p2992 /* op */) {
	*(i1*)(intptr_t)(ws+3032) = p2992; /*op */
	*(i1*)(intptr_t)(ws+3033) = p2991; /*width */
	*(i8*)(intptr_t)(ws+3040) = p2990; /*lhs */

	i8 v2993 = (i8)(intptr_t)(ws+3040);
	i8 v2994 = *(i8*)(intptr_t)v2993;
	i8 v2995 = v2994+(+58);
	i1 v2996 = *(i1*)(intptr_t)v2995;
	i1 v2997 = (i1)+43;
	if (v2996==v2997) goto c02_01eb; else goto c02_01ec;

c02_01eb:;

	i8 v2998 = (i8)(intptr_t)(ws+3032);
	i1 v2999 = *(i1*)(intptr_t)v2998;
	i8 v3000 = (i8)(intptr_t)(ws+3040);
	i8 v3001 = *(i8*)(intptr_t)v3000;
	i8 v3002 = (i8)(intptr_t)(f149_FoldConstant1);
	i4 v3003;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3002)(&v3003, v3001, v2999);
	i8 v3004 = (i8)(intptr_t)(ws+3040);
	i8 v3005 = *(i8*)(intptr_t)v3004;
	*(i4*)(intptr_t)v3005 = v3003;

	i8 v3006 = (i8)(intptr_t)(ws+3040);
	i8 v3007 = *(i8*)(intptr_t)v3006;
	i8 v3008 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v3008 = v3007;

	goto c02_01e8;

c02_01ec:;

	i8 v3009 = (i8)(intptr_t)(ws+3032);
	i1 v3010 = *(i1*)(intptr_t)v3009;
	i8 v3011 = (i8)(intptr_t)(ws+3033);
	i1 v3012 = *(i1*)(intptr_t)v3011;
	i8 v3013 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v3014;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3013)(&v3014, v3012);
	i1 v3015 = v3010+v3014;
	i8 v3016 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v3017;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3016)(&v3017, v3015);
	i8 v3018 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v3018 = v3017;

	i8 v3019 = (i8)(intptr_t)(ws+3040);
	i8 v3020 = *(i8*)(intptr_t)v3019;
	i8 v3021 = (i8)(intptr_t)(ws+3048);
	i8 v3022 = *(i8*)(intptr_t)v3021;
	i8 v3023 = v3022+(+24);
	*(i8*)(intptr_t)v3023 = v3020;

c02_01e8:;

endsub:;
	*p2989 = *(i8*)(intptr_t)(ws+3048);
}

// GetPowerOfTwo workspace at ws+3104 length ws+5
void f152_GetPowerOfTwo(i1* p3024 /* exp */, i4 p3025 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p3025; /*value */

	i1 v3026 = (i1)+0;
	i8 v3027 = (i8)(intptr_t)(ws+3108);
	*(i1*)(intptr_t)v3027 = v3026;

	i4 v3028 = (i4)+0;
	i8 v3029 = (i8)(intptr_t)(ws+3104);
	i4 v3030 = *(i4*)(intptr_t)v3029;
	if ((s4)v3028<(s4)v3030) goto c02_01f4; else goto c02_01f3;

c02_01f4:;

	i8 v3031 = (i8)(intptr_t)(ws+3104);
	i4 v3032 = *(i4*)(intptr_t)v3031;
	i8 v3033 = (i8)(intptr_t)(ws+3104);
	i4 v3034 = *(i4*)(intptr_t)v3033;
	i4 v3035 = v3034+(-1);
	i4 v3036 = v3032&v3035;
	i4 v3037 = (i4)+0;
	if (v3036==v3037) goto c02_01f2; else goto c02_01f3;

c02_01f2:;

c02_01f7:;

	i8 v3038 = (i8)(intptr_t)(ws+3104);
	i4 v3039 = *(i4*)(intptr_t)v3038;
	i4 v3040 = (i4)+0;
	if (v3039==v3040) goto c02_01fa; else goto c02_01f9;

c02_01f9:;

	i8 v3041 = (i8)(intptr_t)(ws+3108);
	i1 v3042 = *(i1*)(intptr_t)v3041;
	i1 v3043 = v3042+(+1);
	i8 v3044 = (i8)(intptr_t)(ws+3108);
	*(i1*)(intptr_t)v3044 = v3043;

	i8 v3045 = (i8)(intptr_t)(ws+3104);
	i4 v3046 = *(i4*)(intptr_t)v3045;
	i1 v3047 = (i1)+1;
	i4 v3048 = ((s4)v3046)>>v3047;
	i8 v3049 = (i8)(intptr_t)(ws+3104);
	*(i4*)(intptr_t)v3049 = v3048;

	goto c02_01f7;

c02_01fa:;

	goto c02_01ed;

c02_01f3:;

c02_01ed:;

endsub:;
	*p3024 = *(i1*)(intptr_t)(ws+3108);
}
	void f150_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f152_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f56_Discard(i8 /* node */);
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f150_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f56_Discard(i8 /* node */);
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3056 length ws+48
void f153_MidC2Op(i8* p3050 /* result */, i8 p3051 /* rhs */, i8 p3052 /* lhs */, i1 p3053 /* width */, i1 p3054 /* op */) {
	*(i1*)(intptr_t)(ws+3056) = p3054; /*op */
	*(i1*)(intptr_t)(ws+3057) = p3053; /*width */
	*(i8*)(intptr_t)(ws+3064) = p3052; /*lhs */
	*(i8*)(intptr_t)(ws+3072) = p3051; /*rhs */

	i8 v3055 = (i8)(intptr_t)(ws+3056);
	i1 v3056 = *(i1*)(intptr_t)v3055;
	i1 v3057 = (i1)+133;
	if (v3056==v3057) goto c02_0202; else goto c02_0201;

c02_0202:;

	i8 v3058 = (i8)(intptr_t)(ws+3072);
	i8 v3059 = *(i8*)(intptr_t)v3058;
	i8 v3060 = v3059+(+58);
	i1 v3061 = *(i1*)(intptr_t)v3060;
	i1 v3062 = (i1)+43;
	if (v3061==v3062) goto c02_0200; else goto c02_0201;

c02_0200:;

	i8 v3063 = (i8)(intptr_t)(ws+3072);
	i8 v3064 = *(i8*)(intptr_t)v3063;
	i4 v3065 = *(i4*)(intptr_t)v3064;
	i4 v3066 = -v3065;
	i8 v3067 = (i8)(intptr_t)(ws+3072);
	i8 v3068 = *(i8*)(intptr_t)v3067;
	*(i4*)(intptr_t)v3068 = v3066;

	i1 v3069 = (i1)+158;
	i8 v3070 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3070 = v3069;

	goto c02_01fb;

c02_0201:;

c02_01fb:;

	i8 v3071 = (i8)(intptr_t)(ws+3056);
	i1 v3072 = *(i1*)(intptr_t)v3071;
	i1 v3073 = (i1)+158;
	if (v3072<v3073) goto c02_0207; else goto c02_0206;

c02_0206:;

	i8 v3074 = (i8)(intptr_t)(ws+3064);
	i8 v3075 = *(i8*)(intptr_t)v3074;
	i8 v3076 = v3075+(+58);
	i1 v3077 = *(i1*)(intptr_t)v3076;
	i1 v3078 = (i1)+43;
	if (v3077==v3078) goto c02_020b; else goto c02_020c;

c02_020b:;

	i8 v3079 = (i8)(intptr_t)(ws+3064);
	i8 v3080 = *(i8*)(intptr_t)v3079;
	i8 v3081 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3081 = v3080;

	i8 v3082 = (i8)(intptr_t)(ws+3072);
	i8 v3083 = *(i8*)(intptr_t)v3082;
	i8 v3084 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v3084 = v3083;

	i8 v3085 = (i8)(intptr_t)(ws+3088);
	i8 v3086 = *(i8*)(intptr_t)v3085;
	i8 v3087 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3087 = v3086;

	goto c02_0208;

c02_020c:;

c02_0208:;

	i8 v3088 = (i8)(intptr_t)(ws+3072);
	i8 v3089 = *(i8*)(intptr_t)v3088;
	i8 v3090 = v3089+(+58);
	i1 v3091 = *(i1*)(intptr_t)v3090;
	i1 v3092 = (i1)+43;
	if (v3091==v3092) goto c02_021a; else goto c02_0217;

c02_021a:;

	i8 v3093 = (i8)(intptr_t)(ws+3064);
	i8 v3094 = *(i8*)(intptr_t)v3093;
	i8 v3095 = v3094+(+58);
	i1 v3096 = *(i1*)(intptr_t)v3095;
	i8 v3097 = (i8)(intptr_t)(ws+3056);
	i1 v3098 = *(i1*)(intptr_t)v3097;
	if (v3096<v3098) goto c02_0217; else goto c02_0219;

c02_0219:;

	i8 v3099 = (i8)(intptr_t)(ws+3056);
	i1 v3100 = *(i1*)(intptr_t)v3099;
	i1 v3101 = v3100+(+4);
	i8 v3102 = (i8)(intptr_t)(ws+3064);
	i8 v3103 = *(i8*)(intptr_t)v3102;
	i8 v3104 = v3103+(+58);
	i1 v3105 = *(i1*)(intptr_t)v3104;
	if (v3101<v3105) goto c02_0217; else goto c02_0218;

c02_0218:;

	i8 v3106 = (i8)(intptr_t)(ws+3064);
	i8 v3107 = *(i8*)(intptr_t)v3106;
	i8 v3108 = v3107+(+32);
	i8 v3109 = *(i8*)(intptr_t)v3108;
	i8 v3110 = v3109+(+58);
	i1 v3111 = *(i1*)(intptr_t)v3110;
	i1 v3112 = (i1)+43;
	if (v3111==v3112) goto c02_0216; else goto c02_0217;

c02_0216:;

	i8 v3113 = (i8)(intptr_t)(ws+3056);
	i1 v3114 = *(i1*)(intptr_t)v3113;
	i8 v3115 = (i8)(intptr_t)(ws+3064);
	i8 v3116 = *(i8*)(intptr_t)v3115;
	i8 v3117 = v3116+(+32);
	i8 v3118 = *(i8*)(intptr_t)v3117;
	i8 v3119 = (i8)(intptr_t)(ws+3072);
	i8 v3120 = *(i8*)(intptr_t)v3119;
	i8 v3121 = (i8)(intptr_t)(f150_FoldConstant2);
	i4 v3122;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3121)(&v3122, v3120, v3118, v3114);
	i8 v3123 = (i8)(intptr_t)(f101_MidConstant);
	i8 v3124;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3123)(&v3124, v3122);
	i8 v3125 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3125 = v3124;

	i8 v3126 = (i8)(intptr_t)(ws+3072);
	i8 v3127 = *(i8*)(intptr_t)v3126;
	i8 v3128 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3128)(v3127);

	i8 v3129 = (i8)(intptr_t)(ws+3088);
	i8 v3130 = *(i8*)(intptr_t)v3129;
	i8 v3131 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3131 = v3130;

	i8 v3132 = (i8)(intptr_t)(ws+3064);
	i8 v3133 = *(i8*)(intptr_t)v3132;
	i8 v3134 = v3133+(+24);
	i8 v3135 = *(i8*)(intptr_t)v3134;
	i8 v3136 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3136 = v3135;

	i8 v3137 = (i8)+0;
	i8 v3138 = (i8)(intptr_t)(ws+3064);
	i8 v3139 = *(i8*)(intptr_t)v3138;
	i8 v3140 = v3139+(+24);
	*(i8*)(intptr_t)v3140 = v3137;

	i8 v3141 = (i8)(intptr_t)(ws+3064);
	i8 v3142 = *(i8*)(intptr_t)v3141;
	i8 v3143 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3143)(v3142);

	i8 v3144 = (i8)(intptr_t)(ws+3088);
	i8 v3145 = *(i8*)(intptr_t)v3144;
	i8 v3146 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v3146 = v3145;

	goto c02_020d;

c02_0217:;

c02_020d:;

	goto c02_0203;

c02_0207:;

c02_0203:;

	i8 v3147 = (i8)(intptr_t)(ws+3064);
	i8 v3148 = *(i8*)(intptr_t)v3147;
	i8 v3149 = v3148+(+58);
	i1 v3150 = *(i1*)(intptr_t)v3149;
	i1 v3151 = (i1)+43;
	if (v3150==v3151) goto c02_0221; else goto c02_0222;

c02_0222:;

	i8 v3152 = (i8)(intptr_t)(ws+3072);
	i8 v3153 = *(i8*)(intptr_t)v3152;
	i8 v3154 = v3153+(+58);
	i1 v3155 = *(i1*)(intptr_t)v3154;
	i1 v3156 = (i1)+43;
	if (v3155==v3156) goto c02_0220; else goto c02_0221;

c02_0220:;

	i8 v3157 = (i8)(intptr_t)(ws+3056);
	i1 v3158 = *(i1*)(intptr_t)v3157;
	i1 v3159 = (i1)+163;
	if (v3158==v3159) goto c02_022a; else goto c02_022d;

c02_022d:;

	i8 v3160 = (i8)(intptr_t)(ws+3056);
	i1 v3161 = *(i1*)(intptr_t)v3160;
	i1 v3162 = (i1)+143;
	if (v3161==v3162) goto c02_022a; else goto c02_022c;

c02_022c:;

	i8 v3163 = (i8)(intptr_t)(ws+3056);
	i1 v3164 = *(i1*)(intptr_t)v3163;
	i1 v3165 = (i1)+138;
	if (v3164==v3165) goto c02_022a; else goto c02_022b;

c02_022a:;

	i8 v3166 = (i8)(intptr_t)(ws+3072);
	i8 v3167 = *(i8*)(intptr_t)v3166;
	i4 v3168 = *(i4*)(intptr_t)v3167;
	i8 v3169 = (i8)(intptr_t)(ws+3096);
	*(i4*)(intptr_t)v3169 = v3168;

	i8 v3170 = (i8)(intptr_t)(ws+3096);
	i4 v3171 = *(i4*)(intptr_t)v3170;
	i8 v3172 = (i8)(intptr_t)(f152_GetPowerOfTwo);
	i1 v3173;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v3172)(&v3173, v3171);
	i8 v3174 = (i8)(intptr_t)(ws+3100);
	*(i1*)(intptr_t)v3174 = v3173;

	i8 v3175 = (i8)(intptr_t)(ws+3100);
	i1 v3176 = *(i1*)(intptr_t)v3175;
	i1 v3177 = (i1)+0;
	if (v3176==v3177) goto c02_0232; else goto c02_0231;

c02_0231:;

	i8 v3178 = (i8)(intptr_t)(ws+3072);
	i8 v3179 = *(i8*)(intptr_t)v3178;
	i8 v3180 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3180)(v3179);

	i8 v3181 = (i8)(intptr_t)(ws+3100);
	i1 v3182 = *(i1*)(intptr_t)v3181;
	i1 v3183 = v3182+(-1);
	i4 v3184 = v3183;
	i8 v3185 = (i8)(intptr_t)(f101_MidConstant);
	i8 v3186;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3185)(&v3186, v3184);
	i8 v3187 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3187 = v3186;

	i8 v3188 = (i8)(intptr_t)(ws+3056);
	i1 v3189 = *(i1*)(intptr_t)v3188;

	if (v3189 != +163) goto c02_0234;

	i1 v3190 = (i1)+118;
	i8 v3191 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3191 = v3190;

	goto c02_0233;

c02_0234:;

	if (v3189 != +143) goto c02_0235;

	i1 v3192 = (i1)+128;
	i8 v3193 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3193 = v3192;

	goto c02_0233;

c02_0235:;

	if (v3189 != +138) goto c02_0236;

	i1 v3194 = (i1)+123;
	i8 v3195 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3195 = v3194;

c02_0236:;

c02_0233:;


	goto c02_022e;

c02_0232:;

c02_022e:;

	goto c02_0223;

c02_022b:;

c02_0223:;

	i8 v3196 = (i8)(intptr_t)(ws+3056);
	i1 v3197 = *(i1*)(intptr_t)v3196;
	i1 v3198 = (i1)+118;
	if (v3197==v3198) goto c02_023e; else goto c02_0241;

c02_0241:;

	i8 v3199 = (i8)(intptr_t)(ws+3056);
	i1 v3200 = *(i1*)(intptr_t)v3199;
	i1 v3201 = (i1)+123;
	if (v3200==v3201) goto c02_023e; else goto c02_0240;

c02_0240:;

	i8 v3202 = (i8)(intptr_t)(ws+3056);
	i1 v3203 = *(i1*)(intptr_t)v3202;
	i1 v3204 = (i1)+128;
	if (v3203==v3204) goto c02_023e; else goto c02_023f;

c02_023e:;

	i8 v3205 = (i8)(intptr_t)(ws+3072);
	i8 v3206 = *(i8*)(intptr_t)v3205;
	i4 v3207 = *(i4*)(intptr_t)v3206;
	i4 v3208 = (i4)+0;
	if (v3207==v3208) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v3209 = (i8)(intptr_t)(ws+3072);
	i8 v3210 = *(i8*)(intptr_t)v3209;
	i8 v3211 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3211)(v3210);

	i8 v3212 = (i8)(intptr_t)(ws+3064);
	i8 v3213 = *(i8*)(intptr_t)v3212;
	i8 v3214 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3214 = v3213;

	goto endsub;

c02_0246:;

c02_0242:;

	goto c02_0237;

c02_023f:;

c02_0237:;

	i8 v3215 = (i8)(intptr_t)(ws+3056);
	i1 v3216 = *(i1*)(intptr_t)v3215;
	i1 v3217 = (i1)+158;
	if (v3216==v3217) goto c02_024c; else goto c02_024e;

c02_024e:;

	i8 v3218 = (i8)(intptr_t)(ws+3056);
	i1 v3219 = *(i1*)(intptr_t)v3218;
	i1 v3220 = (i1)+133;
	if (v3219==v3220) goto c02_024c; else goto c02_024d;

c02_024c:;

	i8 v3221 = (i8)(intptr_t)(ws+3072);
	i8 v3222 = *(i8*)(intptr_t)v3221;
	i4 v3223 = *(i4*)(intptr_t)v3222;
	i4 v3224 = (i4)+0;
	if (v3223==v3224) goto c02_0252; else goto c02_0253;

c02_0252:;

	i8 v3225 = (i8)(intptr_t)(ws+3072);
	i8 v3226 = *(i8*)(intptr_t)v3225;
	i8 v3227 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3227)(v3226);

	i8 v3228 = (i8)(intptr_t)(ws+3064);
	i8 v3229 = *(i8*)(intptr_t)v3228;
	i8 v3230 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3230 = v3229;

	goto endsub;

c02_0253:;

c02_024f:;

	i8 v3231 = (i8)(intptr_t)(ws+3064);
	i8 v3232 = *(i8*)(intptr_t)v3231;
	i8 v3233 = v3232+(+58);
	i1 v3234 = *(i1*)(intptr_t)v3233;
	i1 v3235 = (i1)+45;
	if (v3234==v3235) goto c02_0257; else goto c02_0258;

c02_0257:;

	i8 v3236 = (i8)(intptr_t)(ws+3072);
	i8 v3237 = *(i8*)(intptr_t)v3236;
	i4 v3238 = *(i4*)(intptr_t)v3237;
	i2 v3239 = (s2)(s4)v3238;
	i8 v3240 = (i8)(intptr_t)(ws+3102);
	*(i2*)(intptr_t)v3240 = v3239;

	i8 v3241 = (i8)(intptr_t)(ws+3056);
	i1 v3242 = *(i1*)(intptr_t)v3241;

	if (v3242 != +158) goto c02_025a;

	i8 v3243 = (i8)(intptr_t)(ws+3064);
	i8 v3244 = *(i8*)(intptr_t)v3243;
	i8 v3245 = v3244+(+8);
	i2 v3246 = *(i2*)(intptr_t)v3245;
	i8 v3247 = (i8)(intptr_t)(ws+3102);
	i2 v3248 = *(i2*)(intptr_t)v3247;
	i2 v3249 = v3246+v3248;
	i8 v3250 = (i8)(intptr_t)(ws+3064);
	i8 v3251 = *(i8*)(intptr_t)v3250;
	i8 v3252 = v3251+(+8);
	*(i2*)(intptr_t)v3252 = v3249;

	i8 v3253 = (i8)(intptr_t)(ws+3072);
	i8 v3254 = *(i8*)(intptr_t)v3253;
	i8 v3255 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3255)(v3254);

	i8 v3256 = (i8)(intptr_t)(ws+3064);
	i8 v3257 = *(i8*)(intptr_t)v3256;
	i8 v3258 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3258 = v3257;

	goto endsub;

c02_025a:;

	if (v3242 != +133) goto c02_025b;

	i8 v3259 = (i8)(intptr_t)(ws+3064);
	i8 v3260 = *(i8*)(intptr_t)v3259;
	i8 v3261 = v3260+(+8);
	i2 v3262 = *(i2*)(intptr_t)v3261;
	i8 v3263 = (i8)(intptr_t)(ws+3102);
	i2 v3264 = *(i2*)(intptr_t)v3263;
	i2 v3265 = v3262-v3264;
	i8 v3266 = (i8)(intptr_t)(ws+3064);
	i8 v3267 = *(i8*)(intptr_t)v3266;
	i8 v3268 = v3267+(+8);
	*(i2*)(intptr_t)v3268 = v3265;

	i8 v3269 = (i8)(intptr_t)(ws+3072);
	i8 v3270 = *(i8*)(intptr_t)v3269;
	i8 v3271 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3271)(v3270);

	i8 v3272 = (i8)(intptr_t)(ws+3064);
	i8 v3273 = *(i8*)(intptr_t)v3272;
	i8 v3274 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3274 = v3273;

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

	i8 v3275 = (i8)(intptr_t)(ws+3064);
	i8 v3276 = *(i8*)(intptr_t)v3275;
	i8 v3277 = v3276+(+58);
	i1 v3278 = *(i1*)(intptr_t)v3277;
	i1 v3279 = (i1)+43;
	if (v3278==v3279) goto c02_0263; else goto c02_0262;

c02_0263:;

	i8 v3280 = (i8)(intptr_t)(ws+3072);
	i8 v3281 = *(i8*)(intptr_t)v3280;
	i8 v3282 = v3281+(+58);
	i1 v3283 = *(i1*)(intptr_t)v3282;
	i1 v3284 = (i1)+43;
	if (v3283==v3284) goto c02_0261; else goto c02_0262;

c02_0261:;

	i8 v3285 = (i8)(intptr_t)(ws+3056);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i8 v3287 = (i8)(intptr_t)(ws+3064);
	i8 v3288 = *(i8*)(intptr_t)v3287;
	i8 v3289 = (i8)(intptr_t)(ws+3072);
	i8 v3290 = *(i8*)(intptr_t)v3289;
	i8 v3291 = (i8)(intptr_t)(f150_FoldConstant2);
	i4 v3292;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3291)(&v3292, v3290, v3288, v3286);
	i8 v3293 = (i8)(intptr_t)(ws+3064);
	i8 v3294 = *(i8*)(intptr_t)v3293;
	*(i4*)(intptr_t)v3294 = v3292;

	i8 v3295 = (i8)(intptr_t)(ws+3072);
	i8 v3296 = *(i8*)(intptr_t)v3295;
	i8 v3297 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3297)(v3296);

	i8 v3298 = (i8)(intptr_t)(ws+3064);
	i8 v3299 = *(i8*)(intptr_t)v3298;
	i8 v3300 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3300 = v3299;

	goto endsub;

c02_0262:;

c02_025c:;

	i8 v3301 = (i8)(intptr_t)(ws+3056);
	i1 v3302 = *(i1*)(intptr_t)v3301;
	i8 v3303 = (i8)(intptr_t)(ws+3057);
	i1 v3304 = *(i1*)(intptr_t)v3303;
	i8 v3305 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v3306;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3305)(&v3306, v3304);
	i1 v3307 = v3302+v3306;
	i8 v3308 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v3309;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3308)(&v3309, v3307);
	i8 v3310 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3310 = v3309;

	i8 v3311 = (i8)(intptr_t)(ws+3064);
	i8 v3312 = *(i8*)(intptr_t)v3311;
	i8 v3313 = (i8)(intptr_t)(ws+3080);
	i8 v3314 = *(i8*)(intptr_t)v3313;
	i8 v3315 = v3314+(+24);
	*(i8*)(intptr_t)v3315 = v3312;

	i8 v3316 = (i8)(intptr_t)(ws+3072);
	i8 v3317 = *(i8*)(intptr_t)v3316;
	i8 v3318 = (i8)(intptr_t)(ws+3080);
	i8 v3319 = *(i8*)(intptr_t)v3318;
	i8 v3320 = v3319+(+32);
	*(i8*)(intptr_t)v3320 = v3317;

endsub:;
	*p3050 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3056 length ws+34
void f154_MidCCast(i8* p3321 /* result */, i1 p3322 /* issigned */, i8 p3323 /* lhs */, i1 p3324 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p3324; /*width */
	*(i8*)(intptr_t)(ws+3064) = p3323; /*lhs */
	*(i1*)(intptr_t)(ws+3072) = p3322; /*issigned */

	i8 v3325 = (i8)(intptr_t)(ws+3064);
	i8 v3326 = *(i8*)(intptr_t)v3325;
	i8 v3327 = v3326+(+58);
	i1 v3328 = *(i1*)(intptr_t)v3327;
	i1 v3329 = (i1)+43;
	if (v3328==v3329) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v3330 = (i8)(intptr_t)(ws+3064);
	i8 v3331 = *(i8*)(intptr_t)v3330;
	i8 v3332 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3332 = v3331;

	goto endsub;

c02_0268:;

c02_0264:;

	i8 v3333 = (i8)(intptr_t)(ws+3064);
	i8 v3334 = *(i8*)(intptr_t)v3333;
	i8 v3335 = v3334+(+16);
	i8 v3336 = *(i8*)(intptr_t)v3335;
	i8 v3337 = v3336+(+42);
	i2 v3338 = *(i2*)(intptr_t)v3337;
	i1 v3339 = v3338;
	i8 v3340 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v3340 = v3339;

	i8 v3341 = (i8)(intptr_t)(ws+3088);
	i1 v3342 = *(i1*)(intptr_t)v3341;
	i8 v3343 = (i8)(intptr_t)(ws+3056);
	i1 v3344 = *(i1*)(intptr_t)v3343;
	if (v3342==v3344) goto c02_026c; else goto c02_026d;

c02_026c:;

	i8 v3345 = (i8)(intptr_t)(ws+3064);
	i8 v3346 = *(i8*)(intptr_t)v3345;
	i8 v3347 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3347 = v3346;

	goto c02_0269;

c02_026d:;

	i8 v3348 = (i8)(intptr_t)(ws+3088);
	i1 v3349 = *(i1*)(intptr_t)v3348;

	if (v3349 != +1) goto c02_026f;

	i1 v3350 = (i1)+88;
	i8 v3351 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3351 = v3350;

	goto c02_026e;

c02_026f:;

	if (v3349 != +2) goto c02_0270;

	i1 v3352 = (i1)+93;
	i8 v3353 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3353 = v3352;

	goto c02_026e;

c02_0270:;

	if (v3349 != +4) goto c02_0271;

	i1 v3354 = (i1)+98;
	i8 v3355 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3355 = v3354;

	goto c02_026e;

c02_0271:;

	if (v3349 != +8) goto c02_0272;

	i1 v3356 = (i1)+103;
	i8 v3357 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3357 = v3356;

c02_0272:;

c02_026e:;


	i8 v3358 = (i8)(intptr_t)(ws+3089);
	i1 v3359 = *(i1*)(intptr_t)v3358;
	i8 v3360 = (i8)(intptr_t)(ws+3056);
	i1 v3361 = *(i1*)(intptr_t)v3360;
	i8 v3362 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v3363;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3362)(&v3363, v3361);
	i1 v3364 = v3359+v3363;
	i8 v3365 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v3366;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3365)(&v3366, v3364);
	i8 v3367 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3367 = v3366;

	i8 v3368 = (i8)(intptr_t)(ws+3064);
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(ws+3080);
	i8 v3371 = *(i8*)(intptr_t)v3370;
	i8 v3372 = v3371+(+24);
	*(i8*)(intptr_t)v3372 = v3369;

	i8 v3373 = (i8)(intptr_t)(ws+3072);
	i1 v3374 = *(i1*)(intptr_t)v3373;
	i8 v3375 = (i8)(intptr_t)(ws+3080);
	i8 v3376 = *(i8*)(intptr_t)v3375;
	*(i1*)(intptr_t)v3376 = v3374;

c02_0269:;

endsub:;
	*p3321 = *(i8*)(intptr_t)(ws+3080);
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// E_b8 workspace at ws+3368 length ws+16
void f155_E_b8(i1 p3377 /* byte */) {
	*(i1*)(intptr_t)(ws+3368) = p3377; /*byte */

	i8 v3378 = (i8)(intptr_t)(ws+904);
	i8 v3379 = *(i8*)(intptr_t)v3378;
	i8 v3380 = (i8)+0;
	if (v3379==v3380) goto c02_0277; else goto c02_0276;

c02_0276:;

	i8 v3381 = (i8)(intptr_t)(ws+904);
	i8 v3382 = *(i8*)(intptr_t)v3381;
	i8 v3383 = v3382+(+16);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i8 v3385 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3385 = v3384;

	i8 v3386 = (i8)(intptr_t)(ws+3376);
	i8 v3387 = *(i8*)(intptr_t)v3386;
	i8 v3388 = v3387+(+128);
	i1 v3389 = *(i1*)(intptr_t)v3388;
	i1 v3390 = (i1)+128;
	if (v3389==v3390) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v3391 = (i8)+144;
	i8 v3392 = (i8)(intptr_t)(f31_Alloc);
	i8 v3393;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3392)(&v3393, v3391);
	i8 v3394 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3394 = v3393;

	i8 v3395 = (i8)(intptr_t)(ws+3376);
	i8 v3396 = *(i8*)(intptr_t)v3395;
	i8 v3397 = (i8)(intptr_t)(ws+904);
	i8 v3398 = *(i8*)(intptr_t)v3397;
	i8 v3399 = v3398+(+16);
	i8 v3400 = *(i8*)(intptr_t)v3399;
	i8 v3401 = v3400+(+136);
	*(i8*)(intptr_t)v3401 = v3396;

	i8 v3402 = (i8)(intptr_t)(ws+3376);
	i8 v3403 = *(i8*)(intptr_t)v3402;
	i8 v3404 = (i8)(intptr_t)(ws+904);
	i8 v3405 = *(i8*)(intptr_t)v3404;
	i8 v3406 = v3405+(+16);
	*(i8*)(intptr_t)v3406 = v3403;

	goto c02_0278;

c02_027c:;

c02_0278:;

	i8 v3407 = (i8)(intptr_t)(ws+3368);
	i1 v3408 = *(i1*)(intptr_t)v3407;
	i8 v3409 = (i8)(intptr_t)(ws+3376);
	i8 v3410 = *(i8*)(intptr_t)v3409;
	i8 v3411 = (i8)(intptr_t)(ws+3376);
	i8 v3412 = *(i8*)(intptr_t)v3411;
	i8 v3413 = v3412+(+128);
	i1 v3414 = *(i1*)(intptr_t)v3413;
	i8 v3415 = v3414;
	i8 v3416 = v3410+v3415;
	*(i1*)(intptr_t)v3416 = v3408;

	i8 v3417 = (i8)(intptr_t)(ws+3376);
	i8 v3418 = *(i8*)(intptr_t)v3417;
	i8 v3419 = v3418+(+128);
	i1 v3420 = *(i1*)(intptr_t)v3419;
	i1 v3421 = v3420+(+1);
	i8 v3422 = (i8)(intptr_t)(ws+3376);
	i8 v3423 = *(i8*)(intptr_t)v3422;
	i8 v3424 = v3423+(+128);
	*(i1*)(intptr_t)v3424 = v3421;

	i8 v3425 = (i8)(intptr_t)(ws+904);
	i8 v3426 = *(i8*)(intptr_t)v3425;
	i8 v3427 = v3426+(+24);
	i2 v3428 = *(i2*)(intptr_t)v3427;
	i2 v3429 = v3428+(+1);
	i8 v3430 = (i8)(intptr_t)(ws+904);
	i8 v3431 = *(i8*)(intptr_t)v3430;
	i8 v3432 = v3431+(+24);
	*(i2*)(intptr_t)v3432 = v3429;

	goto c02_0273;

c02_0277:;

c02_0273:;

endsub:;
}
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);

// E_b16 workspace at ws+3304 length ws+2
void f156_E_b16(i2 p3433 /* word */) {
	*(i2*)(intptr_t)(ws+3304) = p3433; /*word */

	i8 v3434 = (i8)(intptr_t)(ws+3304);
	i2 v3435 = *(i2*)(intptr_t)v3434;
	i1 v3436 = v3435;
	i8 v3437 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3437)(v3436);

	i8 v3438 = (i8)(intptr_t)(ws+3304);
	i2 v3439 = *(i2*)(intptr_t)v3438;
	i1 v3440 = (i1)+8;
	i2 v3441 = ((i2)v3439)>>v3440;
	i1 v3442 = v3441;
	i8 v3443 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3443)(v3442);

endsub:;
}
	void f155_E_b8(i1 /* byte */);

// E_space workspace at ws+3256 length ws+0
void f158_E_space(void) {

	i1 v3455 = (i1)+32;
	i8 v3456 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3456)(v3455);

endsub:;
}
	void f155_E_b8(i1 /* byte */);

// E_comma workspace at ws+3280 length ws+0
void f159_E_comma(void) {

	i1 v3457 = (i1)+44;
	i8 v3458 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3458)(v3457);

endsub:;
}
	void f155_E_b8(i1 /* byte */);

// E_tab workspace at ws+3256 length ws+0
void f160_E_tab(void) {

	i1 v3459 = (i1)+9;
	i8 v3460 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3460)(v3459);

endsub:;
}
	void f155_E_b8(i1 /* byte */);

// E_nl workspace at ws+3256 length ws+0
void f161_E_nl(void) {

	i1 v3461 = (i1)+10;
	i8 v3462 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3462)(v3461);

endsub:;
}
	void f155_E_b8(i1 /* byte */);

// E workspace at ws+3336 length ws+9
void f164_E(i8 p3467 /* text */) {
	*(i8*)(intptr_t)(ws+3336) = p3467; /*text */

c02_027d:;

	i8 v3468 = (i8)(intptr_t)(ws+3336);
	i8 v3469 = *(i8*)(intptr_t)v3468;
	i1 v3470 = *(i1*)(intptr_t)v3469;
	i8 v3471 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v3471 = v3470;

	i8 v3472 = (i8)(intptr_t)(ws+3336);
	i8 v3473 = *(i8*)(intptr_t)v3472;
	i8 v3474 = v3473+(+1);
	i8 v3475 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3475 = v3474;

	i8 v3476 = (i8)(intptr_t)(ws+3344);
	i1 v3477 = *(i1*)(intptr_t)v3476;
	i1 v3478 = (i1)+0;
	if (v3477==v3478) goto c02_0282; else goto c02_0283;

c02_0282:;

	goto c02_027e;

c02_0283:;

c02_027f:;

	i8 v3479 = (i8)(intptr_t)(ws+3344);
	i1 v3480 = *(i1*)(intptr_t)v3479;
	i8 v3481 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3481)(v3480);

	goto c02_027d;

c02_027e:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f155_E_b8(i1 /* byte */);

// E_u32 workspace at ws+3328 length ws+33
void f165_E_u32(i4 p3482 /* value */) {
	*(i4*)(intptr_t)(ws+3328) = p3482; /*value */

	i8 v3483 = (i8)(intptr_t)(ws+3332);
	i8 v3484 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3484 = v3483;

	i8 v3485 = (i8)(intptr_t)(ws+3328);
	i4 v3486 = *(i4*)(intptr_t)v3485;
	i1 v3487 = (i1)+10;
	i8 v3488 = (i8)(intptr_t)(ws+3344);
	i8 v3489 = *(i8*)(intptr_t)v3488;
	i8 v3490 = (i8)(intptr_t)(f13_UIToA);
	i8 v3491;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v3490)(&v3491, v3489, v3487, v3486);
	i8 v3492 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v3492 = v3491;

c02_0284:;

	i8 v3493 = (i8)(intptr_t)(ws+3344);
	i8 v3494 = *(i8*)(intptr_t)v3493;
	i1 v3495 = *(i1*)(intptr_t)v3494;
	i8 v3496 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v3496 = v3495;

	i8 v3497 = (i8)(intptr_t)(ws+3360);
	i1 v3498 = *(i1*)(intptr_t)v3497;
	i1 v3499 = (i1)+0;
	if (v3498==v3499) goto c02_0289; else goto c02_028a;

c02_0289:;

	goto c02_0285;

c02_028a:;

c02_0286:;

	i8 v3500 = (i8)(intptr_t)(ws+3360);
	i1 v3501 = *(i1*)(intptr_t)v3500;
	i8 v3502 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3502)(v3501);

	i8 v3503 = (i8)(intptr_t)(ws+3344);
	i8 v3504 = *(i8*)(intptr_t)v3503;
	i8 v3505 = v3504+(+1);
	i8 v3506 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3506 = v3505;

	goto c02_0284;

c02_0285:;

endsub:;
}
	void f165_E_u32(i4 /* value */);

// E_u16 workspace at ws+3304 length ws+2
void f166_E_u16(i2 p3507 /* value */) {
	*(i2*)(intptr_t)(ws+3304) = p3507; /*value */

	i8 v3508 = (i8)(intptr_t)(ws+3304);
	i2 v3509 = *(i2*)(intptr_t)v3508;
	i4 v3510 = v3509;
	i8 v3511 = (i8)(intptr_t)(f165_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3511)(v3510);

endsub:;
}
	void f165_E_u32(i4 /* value */);

// E_u8 workspace at ws+3320 length ws+1
void f167_E_u8(i1 p3512 /* value */) {
	*(i1*)(intptr_t)(ws+3320) = p3512; /*value */

	i8 v3513 = (i8)(intptr_t)(ws+3320);
	i1 v3514 = *(i1*)(intptr_t)v3513;
	i4 v3515 = v3514;
	i8 v3516 = (i8)(intptr_t)(f165_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3516)(v3515);

endsub:;
}
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);
	void f166_E_u16(i2 /* value */);

// E_i16 workspace at ws+3296 length ws+2
void f169_E_i16(i2 p3532 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3532; /*value */

	i8 v3533 = (i8)(intptr_t)(ws+3296);
	i2 v3534 = *(i2*)(intptr_t)v3533;
	i2 v3535 = (i2)+0;
	if ((s2)v3534<(s2)v3535) goto c02_0293; else goto c02_0294;

c02_0293:;

	i1 v3536 = (i1)+45;
	i8 v3537 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3537)(v3536);

	i8 v3538 = (i8)(intptr_t)(ws+3296);
	i2 v3539 = *(i2*)(intptr_t)v3538;
	i2 v3540 = -v3539;
	i8 v3541 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v3541 = v3540;

	goto c02_0290;

c02_0294:;

	i1 v3542 = (i1)+43;
	i8 v3543 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3543)(v3542);

c02_0290:;

	i8 v3544 = (i8)(intptr_t)(ws+3296);
	i2 v3545 = *(i2*)(intptr_t)v3544;
	i8 v3546 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3546)(v3545);

endsub:;
}
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);
	void f165_E_u32(i4 /* value */);

// E_i32 workspace at ws+3280 length ws+4
void f170_E_i32(i4 p3547 /* value */) {
	*(i4*)(intptr_t)(ws+3280) = p3547; /*value */

	i8 v3548 = (i8)(intptr_t)(ws+3280);
	i4 v3549 = *(i4*)(intptr_t)v3548;
	i4 v3550 = (i4)+0;
	if ((s4)v3549<(s4)v3550) goto c02_0298; else goto c02_0299;

c02_0298:;

	i1 v3551 = (i1)+45;
	i8 v3552 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3552)(v3551);

	i8 v3553 = (i8)(intptr_t)(ws+3280);
	i4 v3554 = *(i4*)(intptr_t)v3553;
	i4 v3555 = -v3554;
	i8 v3556 = (i8)(intptr_t)(ws+3280);
	*(i4*)(intptr_t)v3556 = v3555;

	goto c02_0295;

c02_0299:;

	i1 v3557 = (i1)+43;
	i8 v3558 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3558)(v3557);

c02_0295:;

	i8 v3559 = (i8)(intptr_t)(ws+3280);
	i4 v3560 = *(i4*)(intptr_t)v3559;
	i8 v3561 = (i8)(intptr_t)(f165_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3561)(v3560);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f155_E_b8(i1 /* byte */);
	void f164_E(i8 /* text */);

// E_h workspace at ws+3304 length ws+25
void f171_E_h(i1 p3562 /* width */, i4 p3563 /* value */) {
	*(i4*)(intptr_t)(ws+3304) = p3563; /*value */
	*(i1*)(intptr_t)(ws+3308) = p3562; /*width */

	i8 v3564 = (i8)(intptr_t)(ws+3304);
	i4 v3565 = *(i4*)(intptr_t)v3564;
	i1 v3566 = (i1)+16;
	i8 v3567 = (i8)(intptr_t)(ws+3309);
	i8 v3568 = (i8)(intptr_t)(f13_UIToA);
	i8 v3569;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v3568)(&v3569, v3567, v3566, v3565);
	i8 v3570 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3570 = v3569;

	i8 v3571 = (i8)(intptr_t)(ws+3308);
	i1 v3572 = *(i1*)(intptr_t)v3571;
	i8 v3573 = (i8)(intptr_t)(ws+3320);
	i8 v3574 = *(i8*)(intptr_t)v3573;
	i8 v3575 = (i8)(intptr_t)(ws+3309);
	i8 v3576 = v3574-v3575;
	i1 v3577 = v3576;
	i1 v3578 = v3572-v3577;
	i8 v3579 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v3579 = v3578;

c02_029c:;

	i8 v3580 = (i8)(intptr_t)(ws+3328);
	i1 v3581 = *(i1*)(intptr_t)v3580;
	i1 v3582 = (i1)+0;
	if (v3581==v3582) goto c02_029f; else goto c02_029e;

c02_029e:;

	i1 v3583 = (i1)+48;
	i8 v3584 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3584)(v3583);

	i8 v3585 = (i8)(intptr_t)(ws+3328);
	i1 v3586 = *(i1*)(intptr_t)v3585;
	i1 v3587 = v3586+(-1);
	i8 v3588 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v3588 = v3587;

	goto c02_029c;

c02_029f:;

	i8 v3589 = (i8)(intptr_t)(ws+3309);
	i8 v3590 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v3590)(v3589);

endsub:;
}
	void f171_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+3280 length ws+1
void f172_E_h8(i1 p3591 /* value */) {
	*(i1*)(intptr_t)(ws+3280) = p3591; /*value */

	i8 v3592 = (i8)(intptr_t)(ws+3280);
	i1 v3593 = *(i1*)(intptr_t)v3592;
	i4 v3594 = v3593;
	i1 v3595 = (i1)+2;
	i8 v3596 = (i8)(intptr_t)(f171_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v3596)(v3595, v3594);

endsub:;
}
	void f171_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+3296 length ws+2
void f173_E_h16(i2 p3597 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3597; /*value */

	i8 v3598 = (i8)(intptr_t)(ws+3296);
	i2 v3599 = *(i2*)(intptr_t)v3598;
	i4 v3600 = v3599;
	i1 v3601 = (i1)+4;
	i8 v3602 = (i8)(intptr_t)(f171_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v3602)(v3601, v3600);

endsub:;
}
	void f155_E_b8(i1 /* byte */);
	void f173_E_h16(i2 /* value */);

// E_labelref workspace at ws+3288 length ws+2
void f175_E_labelref(i2 p3608 /* labelid */) {
	*(i2*)(intptr_t)(ws+3288) = p3608; /*labelid */

	i1 v3609 = (i1)+3;
	i8 v3610 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3610)(v3609);

	i8 v3611 = (i8)(intptr_t)(ws+3288);
	i2 v3612 = *(i2*)(intptr_t)v3611;
	i8 v3613 = (i8)(intptr_t)(f173_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3613)(v3612);

endsub:;
}
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);

// E_subref workspace at ws+3296 length ws+8
void f176_E_subref(i8 p3614 /* subr */) {
	*(i8*)(intptr_t)(ws+3296) = p3614; /*subr */

	i8 v3615 = (i8)(intptr_t)(ws+3296);
	i8 v3616 = *(i8*)(intptr_t)v3615;
	i8 v3617 = (i8)(intptr_t)(ws+40);
	i8 v3618 = *(i8*)(intptr_t)v3617;
	if (v3616==v3618) goto c02_02a3; else goto c02_02a4;

c02_02a3:;

	i1 v3619 = (i1)+4;
	i8 v3620 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3620)(v3619);

	goto c02_02a0;

c02_02a4:;

	i1 v3621 = (i1)+1;
	i8 v3622 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3622)(v3621);

	i8 v3623 = (i8)(intptr_t)(ws+3296);
	i8 v3624 = *(i8*)(intptr_t)v3623;
	i8 v3625 = v3624+(+72);
	i2 v3626 = *(i2*)(intptr_t)v3625;
	i8 v3627 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3627)(v3626);

c02_02a0:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f31_Alloc(i8* /* block */, i8 /* length */);

// EmitterPushChunk workspace at ws+3296 length ws+8
void f178_EmitterPushChunk(void) {

	i8 v3642 = (i8)+26;
	i8 v3643 = (i8)(intptr_t)(f31_Alloc);
	i8 v3644;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3643)(&v3644, v3642);
	i8 v3645 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v3645 = v3644;

	i8 v3646 = (i8)+144;
	i8 v3647 = (i8)(intptr_t)(f31_Alloc);
	i8 v3648;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3647)(&v3648, v3646);
	i8 v3649 = (i8)(intptr_t)(ws+3296);
	i8 v3650 = *(i8*)(intptr_t)v3649;
	i8 v3651 = v3650+(+16);
	*(i8*)(intptr_t)v3651 = v3648;

	i8 v3652 = (i8)(intptr_t)(ws+3296);
	i8 v3653 = *(i8*)(intptr_t)v3652;
	i8 v3654 = v3653+(+16);
	i8 v3655 = *(i8*)(intptr_t)v3654;
	i8 v3656 = (i8)(intptr_t)(ws+3296);
	i8 v3657 = *(i8*)(intptr_t)v3656;
	i8 v3658 = v3657+(+8);
	*(i8*)(intptr_t)v3658 = v3655;

	i8 v3659 = (i8)(intptr_t)(ws+904);
	i8 v3660 = *(i8*)(intptr_t)v3659;
	i8 v3661 = (i8)(intptr_t)(ws+3296);
	i8 v3662 = *(i8*)(intptr_t)v3661;
	*(i8*)(intptr_t)v3662 = v3660;

	i8 v3663 = (i8)(intptr_t)(ws+3296);
	i8 v3664 = *(i8*)(intptr_t)v3663;
	i8 v3665 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v3665 = v3664;

endsub:;
}
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// EmitterPopChunk workspace at ws+3296 length ws+40
void f179_EmitterPopChunk(i1 p3666 /* type */) {
	*(i1*)(intptr_t)(ws+3296) = p3666; /*type */

	i8 v3667 = (i8)(intptr_t)(ws+380);
	i8 v3668 = (i8)(intptr_t)(ws+3296);
	i1 v3669 = *(i1*)(intptr_t)v3668;
	i8 v3670 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3670)(v3669, v3667);

	i8 v3671 = (i8)(intptr_t)(ws+904);
	i8 v3672 = *(i8*)(intptr_t)v3671;
	i8 v3673 = v3672+(+24);
	i2 v3674 = *(i2*)(intptr_t)v3673;
	i8 v3675 = (i8)(intptr_t)(ws+3298);
	*(i2*)(intptr_t)v3675 = v3674;

	i8 v3676 = (i8)(intptr_t)(ws+380);
	i8 v3677 = (i8)(intptr_t)(ws+3298);
	i2 v3678 = *(i2*)(intptr_t)v3677;
	i1 v3679 = v3678;
	i8 v3680 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3680)(v3679, v3676);

	i8 v3681 = (i8)(intptr_t)(ws+380);
	i8 v3682 = (i8)(intptr_t)(ws+3298);
	i2 v3683 = *(i2*)(intptr_t)v3682;
	i1 v3684 = (i1)+8;
	i2 v3685 = ((i2)v3683)>>v3684;
	i1 v3686 = v3685;
	i8 v3687 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3687)(v3686, v3681);

	i8 v3688 = (i8)(intptr_t)(ws+904);
	i8 v3689 = *(i8*)(intptr_t)v3688;
	i8 v3690 = v3689+(+8);
	i8 v3691 = *(i8*)(intptr_t)v3690;
	i8 v3692 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3692 = v3691;

c02_02a7:;

	i8 v3693 = (i8)(intptr_t)(ws+3304);
	i8 v3694 = *(i8*)(intptr_t)v3693;
	i8 v3695 = (i8)+0;
	if (v3694==v3695) goto c02_02aa; else goto c02_02a9;

c02_02a9:;

	i1 v3696 = (i1)+0;
	i8 v3697 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3697 = v3696;

c02_02ad:;

	i8 v3698 = (i8)(intptr_t)(ws+3312);
	i1 v3699 = *(i1*)(intptr_t)v3698;
	i8 v3700 = (i8)(intptr_t)(ws+3304);
	i8 v3701 = *(i8*)(intptr_t)v3700;
	i8 v3702 = v3701+(+128);
	i1 v3703 = *(i1*)(intptr_t)v3702;
	if (v3699==v3703) goto c02_02b0; else goto c02_02af;

c02_02af:;

	i8 v3704 = (i8)(intptr_t)(ws+380);
	i8 v3705 = (i8)(intptr_t)(ws+3304);
	i8 v3706 = *(i8*)(intptr_t)v3705;
	i8 v3707 = (i8)(intptr_t)(ws+3312);
	i1 v3708 = *(i1*)(intptr_t)v3707;
	i8 v3709 = v3708;
	i8 v3710 = v3706+v3709;
	i1 v3711 = *(i1*)(intptr_t)v3710;
	i8 v3712 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3712)(v3711, v3704);

	i8 v3713 = (i8)(intptr_t)(ws+3312);
	i1 v3714 = *(i1*)(intptr_t)v3713;
	i1 v3715 = v3714+(+1);
	i8 v3716 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3716 = v3715;

	goto c02_02ad;

c02_02b0:;

	i8 v3717 = (i8)(intptr_t)(ws+3304);
	i8 v3718 = *(i8*)(intptr_t)v3717;
	i8 v3719 = v3718+(+136);
	i8 v3720 = *(i8*)(intptr_t)v3719;
	i8 v3721 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3721 = v3720;

	i8 v3722 = (i8)(intptr_t)(ws+3304);
	i8 v3723 = *(i8*)(intptr_t)v3722;
	i8 v3724 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v3724)(v3723);

	i8 v3725 = (i8)(intptr_t)(ws+3320);
	i8 v3726 = *(i8*)(intptr_t)v3725;
	i8 v3727 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3727 = v3726;

	goto c02_02a7;

c02_02aa:;

	i8 v3728 = (i8)(intptr_t)(ws+904);
	i8 v3729 = *(i8*)(intptr_t)v3728;
	i8 v3730 = *(i8*)(intptr_t)v3729;
	i8 v3731 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3731 = v3730;

	i8 v3732 = (i8)(intptr_t)(ws+904);
	i8 v3733 = *(i8*)(intptr_t)v3732;
	i8 v3734 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v3734)(v3733);

	i8 v3735 = (i8)(intptr_t)(ws+3328);
	i8 v3736 = *(i8*)(intptr_t)v3735;
	i8 v3737 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v3737 = v3736;

endsub:;
}
	void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0042[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+2888 length ws+8
void f180_EmitterOpenfile(i8 p3738 /* filename */) {
	*(i8*)(intptr_t)(ws+2888) = p3738; /*filename */

	i8 v3739 = (i8)(intptr_t)(ws+380);
	i8 v3740 = (i8)(intptr_t)(ws+2888);
	i8 v3741 = *(i8*)(intptr_t)v3740;
	i8 v3742 = (i8)(intptr_t)(f42_FCBOpenOut);
	i1 v3743;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v3742)(&v3743, v3741, v3739);
	i1 v3744 = (i1)+0;
	if (v3743==v3744) goto c02_02b5; else goto c02_02b4;

c02_02b4:;

	i8 v3745 = (i8)(intptr_t)c02_s0042;
	i8 v3746 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3746)(v3745);

	goto c02_02b1;

c02_02b5:;

c02_02b1:;

endsub:;
}
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0043[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// EmitterClosefile workspace at ws+2888 length ws+0
void f181_EmitterClosefile(void) {

	i8 v3747 = (i8)(intptr_t)(ws+380);
	i1 v3748 = (i1)+69;
	i8 v3749 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3749)(v3748, v3747);

	i8 v3750 = (i8)(intptr_t)(ws+380);
	i1 v3751 = (i1)+0;
	i8 v3752 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3752)(v3751, v3750);

	i8 v3753 = (i8)(intptr_t)(ws+380);
	i1 v3754 = (i1)+0;
	i8 v3755 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3755)(v3754, v3753);

	i8 v3756 = (i8)(intptr_t)(ws+380);
	i8 v3757 = (i8)(intptr_t)(f43_FCBClose);
	i1 v3758;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v3757)(&v3758, v3756);
	i1 v3759 = (i1)+0;
	if (v3758==v3759) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v3760 = (i8)(intptr_t)c02_s0043;
	i8 v3761 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3761)(v3760);

	goto c02_02b6;

c02_02ba:;

c02_02b6:;

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
	void f164_E(i8 /* text */);
	void f179_EmitterPopChunk(i1 /* type */);

// EmitterDeclareSubroutine workspace at ws+3008 length ws+8
void f182_EmitterDeclareSubroutine(i8 p3762 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p3762; /*subr */

	i8 v3763 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3763)();

	i8 v3764 = (i8)(intptr_t)(ws+3008);
	i8 v3765 = *(i8*)(intptr_t)v3764;
	i8 v3766 = v3765+(+72);
	i2 v3767 = *(i2*)(intptr_t)v3766;
	i8 v3768 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3768)(v3767);

	i8 v3769 = (i8)(intptr_t)(ws+3008);
	i8 v3770 = *(i8*)(intptr_t)v3769;
	i8 v3771 = *(i8*)(intptr_t)v3770;
	i8 v3772 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v3772)(v3771);

	i1 v3773 = (i1)+78;
	i8 v3774 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3774)(v3773);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
	void f164_E(i8 /* text */);
	void f179_EmitterPopChunk(i1 /* type */);

// EmitterDeclareExternalSubroutine workspace at ws+3008 length ws+16
void f183_EmitterDeclareExternalSubroutine(i8 p3775 /* external */, i2 p3776 /* id */) {
	*(i2*)(intptr_t)(ws+3008) = p3776; /*id */
	*(i8*)(intptr_t)(ws+3016) = p3775; /*external */

	i8 v3777 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3777)();

	i8 v3778 = (i8)(intptr_t)(ws+3008);
	i2 v3779 = *(i2*)(intptr_t)v3778;
	i8 v3780 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3780)(v3779);

	i8 v3781 = (i8)(intptr_t)(ws+3016);
	i8 v3782 = *(i8*)(intptr_t)v3781;
	i8 v3783 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v3783)(v3782);

	i1 v3784 = (i1)+88;
	i8 v3785 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3785)(v3784);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
	void f156_E_b16(i2 /* word */);
	void f179_EmitterPopChunk(i1 /* type */);

// EmitterReferenceSubroutine workspace at ws+3064 length ws+16
void f184_EmitterReferenceSubroutine(i8 p3786 /* used */, i8 p3787 /* user */) {
	*(i8*)(intptr_t)(ws+3064) = p3787; /*user */
	*(i8*)(intptr_t)(ws+3072) = p3786; /*used */

	i8 v3788 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3788)();

	i8 v3789 = (i8)(intptr_t)(ws+3064);
	i8 v3790 = *(i8*)(intptr_t)v3789;
	i8 v3791 = v3790+(+72);
	i2 v3792 = *(i2*)(intptr_t)v3791;
	i8 v3793 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3793)(v3792);

	i8 v3794 = (i8)(intptr_t)(ws+3072);
	i8 v3795 = *(i8*)(intptr_t)v3794;
	i8 v3796 = v3795+(+72);
	i2 v3797 = *(i2*)(intptr_t)v3796;
	i8 v3798 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3798)(v3797);

	i1 v3799 = (i1)+82;
	i8 v3800 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3800)(v3799);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);
	void f179_EmitterPopChunk(i1 /* type */);

// EmitterDeclareWorkspace workspace at ws+3280 length ws+12
void f185_EmitterDeclareWorkspace(i2 p3801 /* workspace */, i1 p3802 /* wid */, i8 p3803 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p3803; /*subr */
	*(i1*)(intptr_t)(ws+3288) = p3802; /*wid */
	*(i2*)(intptr_t)(ws+3290) = p3801; /*workspace */

	i8 v3804 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3804)();

	i8 v3805 = (i8)(intptr_t)(ws+3280);
	i8 v3806 = *(i8*)(intptr_t)v3805;
	i8 v3807 = v3806+(+72);
	i2 v3808 = *(i2*)(intptr_t)v3807;
	i8 v3809 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3809)(v3808);

	i8 v3810 = (i8)(intptr_t)(ws+3288);
	i1 v3811 = *(i1*)(intptr_t)v3810;
	i8 v3812 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3812)(v3811);

	i8 v3813 = (i8)(intptr_t)(ws+3290);
	i2 v3814 = *(i2*)(intptr_t)v3813;
	i8 v3815 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3815)(v3814);

	i1 v3816 = (i1)+87;
	i8 v3817 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3817)(v3816);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3096 length ws+24
void f195_LookupSymbolInNamespace(i8* p4146 /* symbol */, i8 p4147 /* name */, i8 p4148 /* namespace */) {
	*(i8*)(intptr_t)(ws+3096) = p4148; /*namespace */
	*(i8*)(intptr_t)(ws+3104) = p4147; /*name */

	i8 v4149 = (i8)(intptr_t)(ws+3096);
	i8 v4150 = *(i8*)(intptr_t)v4149;
	i8 v4151 = *(i8*)(intptr_t)v4150;
	i8 v4152 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4152 = v4151;

c02_0345:;

	i8 v4153 = (i8)(intptr_t)(ws+3112);
	i8 v4154 = *(i8*)(intptr_t)v4153;
	i8 v4155 = (i8)+0;
	if (v4154==v4155) goto c02_0348; else goto c02_0347;

c02_0347:;

	i8 v4156 = (i8)(intptr_t)(ws+3112);
	i8 v4157 = *(i8*)(intptr_t)v4156;
	i8 v4158 = v4157+(+48);
	i8 v4159 = *(i8*)(intptr_t)v4158;
	i8 v4160 = (i8)(intptr_t)(ws+3104);
	i8 v4161 = *(i8*)(intptr_t)v4160;
	i8 v4162 = (i8)(intptr_t)(f25_StrCmp);
	i1 v4163;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4162)(&v4163, v4161, v4159);
	i1 v4164 = (i1)+0;
	if (v4163==v4164) goto c02_034c; else goto c02_034d;

c02_034c:;

c02_0350:;

	i8 v4165 = (i8)(intptr_t)(ws+3112);
	i8 v4166 = *(i8*)(intptr_t)v4165;
	i8 v4167 = v4166+(+46);
	i1 v4168 = *(i1*)(intptr_t)v4167;
	i1 v4169 = (i1)+39;
	if (v4168==v4169) goto c02_0352; else goto c02_0353;

c02_0352:;

	i8 v4170 = (i8)(intptr_t)(ws+3112);
	i8 v4171 = *(i8*)(intptr_t)v4170;
	i8 v4172 = *(i8*)(intptr_t)v4171;
	i8 v4173 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4173 = v4172;

	goto c02_0350;

c02_0353:;

	goto endsub;

c02_034d:;

c02_0349:;

	i8 v4174 = (i8)(intptr_t)(ws+3112);
	i8 v4175 = *(i8*)(intptr_t)v4174;
	i8 v4176 = v4175+(+56);
	i8 v4177 = *(i8*)(intptr_t)v4176;
	i8 v4178 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4178 = v4177;

	goto c02_0345;

c02_0348:;

	i8 v4179 = (i8)+0;
	i8 v4180 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4180 = v4179;

endsub:;
	*p4146 = *(i8*)(intptr_t)(ws+3112);
}
	void f195_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3032 length ws+24
void f196_LookupSymbol(i8* p4181 /* symbol */, i8 p4182 /* name */, i8 p4183 /* namespace */) {
	*(i8*)(intptr_t)(ws+3032) = p4183; /*namespace */
	*(i8*)(intptr_t)(ws+3040) = p4182; /*name */

	i8 v4184 = (i8)(intptr_t)(ws+3032);
	i8 v4185 = *(i8*)(intptr_t)v4184;
	i8 v4186 = (i8)+0;
	if (v4185==v4186) goto c02_0357; else goto c02_0358;

c02_0357:;

	i8 v4187 = (i8)(intptr_t)(ws+40);
	i8 v4188 = *(i8*)(intptr_t)v4187;
	i8 v4189 = v4188+(+16);
	i8 v4190 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v4190 = v4189;

	goto c02_0354;

c02_0358:;

c02_0354:;

c02_035b:;

	i8 v4191 = (i8)(intptr_t)(ws+3032);
	i8 v4192 = *(i8*)(intptr_t)v4191;
	i8 v4193 = (i8)+0;
	if (v4192==v4193) goto c02_035e; else goto c02_035d;

c02_035d:;

	i8 v4194 = (i8)(intptr_t)(ws+3032);
	i8 v4195 = *(i8*)(intptr_t)v4194;
	i8 v4196 = (i8)(intptr_t)(ws+3040);
	i8 v4197 = *(i8*)(intptr_t)v4196;
	i8 v4198 = (i8)(intptr_t)(f195_LookupSymbolInNamespace);
	i8 v4199;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4198)(&v4199, v4197, v4195);
	i8 v4200 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4200 = v4199;

	i8 v4201 = (i8)(intptr_t)(ws+3048);
	i8 v4202 = *(i8*)(intptr_t)v4201;
	i8 v4203 = (i8)+0;
	if (v4202==v4203) goto c02_0363; else goto c02_0362;

c02_0362:;

	goto endsub;

c02_0363:;

c02_035f:;

	i8 v4204 = (i8)(intptr_t)(ws+3032);
	i8 v4205 = *(i8*)(intptr_t)v4204;
	i8 v4206 = v4205+(+16);
	i8 v4207 = *(i8*)(intptr_t)v4206;
	i8 v4208 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v4208 = v4207;

	goto c02_035b;

c02_035e:;

	i8 v4209 = (i8)+0;
	i8 v4210 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4210 = v4209;

endsub:;
	*p4181 = *(i8*)(intptr_t)(ws+3048);
}

// AddToNamespace workspace at ws+3096 length ws+16
void f197_AddToNamespace(i8 p4211 /* symbol */, i8 p4212 /* namespace */) {
	*(i8*)(intptr_t)(ws+3096) = p4212; /*namespace */
	*(i8*)(intptr_t)(ws+3104) = p4211; /*symbol */

	i8 v4213 = (i8)(intptr_t)(ws+3096);
	i8 v4214 = *(i8*)(intptr_t)v4213;
	i8 v4215 = v4214+(+8);
	i8 v4216 = *(i8*)(intptr_t)v4215;
	i8 v4217 = (i8)+0;
	if (v4216==v4217) goto c02_0367; else goto c02_0368;

c02_0367:;

	i8 v4218 = (i8)(intptr_t)(ws+3104);
	i8 v4219 = *(i8*)(intptr_t)v4218;
	i8 v4220 = (i8)(intptr_t)(ws+3096);
	i8 v4221 = *(i8*)(intptr_t)v4220;
	*(i8*)(intptr_t)v4221 = v4219;

	i8 v4222 = (i8)(intptr_t)(ws+3104);
	i8 v4223 = *(i8*)(intptr_t)v4222;
	i8 v4224 = (i8)(intptr_t)(ws+3096);
	i8 v4225 = *(i8*)(intptr_t)v4224;
	i8 v4226 = v4225+(+8);
	*(i8*)(intptr_t)v4226 = v4223;

	goto c02_0364;

c02_0368:;

	i8 v4227 = (i8)(intptr_t)(ws+3104);
	i8 v4228 = *(i8*)(intptr_t)v4227;
	i8 v4229 = (i8)(intptr_t)(ws+3096);
	i8 v4230 = *(i8*)(intptr_t)v4229;
	i8 v4231 = v4230+(+8);
	i8 v4232 = *(i8*)(intptr_t)v4231;
	i8 v4233 = v4232+(+56);
	*(i8*)(intptr_t)v4233 = v4228;

	i8 v4234 = (i8)(intptr_t)(ws+3104);
	i8 v4235 = *(i8*)(intptr_t)v4234;
	i8 v4236 = (i8)(intptr_t)(ws+3096);
	i8 v4237 = *(i8*)(intptr_t)v4236;
	i8 v4238 = v4237+(+8);
	*(i8*)(intptr_t)v4238 = v4235;

c02_0364:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f195_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f59_StartError(void);
const i1 c02_s0044[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0045[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f197_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddSymbol workspace at ws+3072 length ws+24
void f198_AddSymbol(i8* p4239 /* symbol */, i8 p4240 /* name */, i8 p4241 /* namespace */) {
	*(i8*)(intptr_t)(ws+3072) = p4241; /*namespace */
	*(i8*)(intptr_t)(ws+3080) = p4240; /*name */

	i8 v4242 = (i8)(intptr_t)(ws+3072);
	i8 v4243 = *(i8*)(intptr_t)v4242;
	i8 v4244 = (i8)+0;
	if (v4243==v4244) goto c02_036c; else goto c02_036d;

c02_036c:;

	i8 v4245 = (i8)(intptr_t)(ws+40);
	i8 v4246 = *(i8*)(intptr_t)v4245;
	i8 v4247 = v4246+(+16);
	i8 v4248 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v4248 = v4247;

	goto c02_0369;

c02_036d:;

c02_0369:;

	i8 v4249 = (i8)+64;
	i8 v4250 = (i8)(intptr_t)(f31_Alloc);
	i8 v4251;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v4250)(&v4251, v4249);
	i8 v4252 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v4252 = v4251;

	i8 v4253 = (i8)(intptr_t)(ws+3080);
	i8 v4254 = *(i8*)(intptr_t)v4253;
	i8 v4255 = (i8)+0;
	if (v4254==v4255) goto c02_0372; else goto c02_0371;

c02_0371:;

	i8 v4256 = (i8)(intptr_t)(ws+3072);
	i8 v4257 = *(i8*)(intptr_t)v4256;
	i8 v4258 = (i8)(intptr_t)(ws+3080);
	i8 v4259 = *(i8*)(intptr_t)v4258;
	i8 v4260 = (i8)(intptr_t)(f195_LookupSymbolInNamespace);
	i8 v4261;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4260)(&v4261, v4259, v4257);
	i8 v4262 = (i8)+0;
	if (v4261==v4262) goto c02_0377; else goto c02_0376;

c02_0376:;

	i8 v4263 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v4263)();

	i8 v4264 = (i8)(intptr_t)c02_s0044;
	i8 v4265 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4265)(v4264);

	i8 v4266 = (i8)(intptr_t)(ws+3080);
	i8 v4267 = *(i8*)(intptr_t)v4266;
	i8 v4268 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4268)(v4267);

	i8 v4269 = (i8)(intptr_t)c02_s0045;
	i8 v4270 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4270)(v4269);

	i8 v4271 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v4271)();

	goto c02_0373;

c02_0377:;

c02_0373:;

	i8 v4272 = (i8)(intptr_t)(ws+3080);
	i8 v4273 = *(i8*)(intptr_t)v4272;
	i8 v4274 = (i8)(intptr_t)(ws+3088);
	i8 v4275 = *(i8*)(intptr_t)v4274;
	i8 v4276 = v4275+(+48);
	*(i8*)(intptr_t)v4276 = v4273;

	i8 v4277 = (i8)(intptr_t)(ws+3072);
	i8 v4278 = *(i8*)(intptr_t)v4277;
	i8 v4279 = (i8)(intptr_t)(ws+3088);
	i8 v4280 = *(i8*)(intptr_t)v4279;
	i8 v4281 = (i8)(intptr_t)(f197_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4281)(v4280, v4278);

	goto c02_036e;

c02_0372:;

c02_036e:;

endsub:;
	*p4239 = *(i8*)(intptr_t)(ws+3088);
}
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3016 length ws+32
void f199_AddAlias(i8* p4282 /* symbol */, i8 p4283 /* real */, i8 p4284 /* name */, i8 p4285 /* namespace */) {
	*(i8*)(intptr_t)(ws+3016) = p4285; /*namespace */
	*(i8*)(intptr_t)(ws+3024) = p4284; /*name */
	*(i8*)(intptr_t)(ws+3032) = p4283; /*real */

	i8 v4286 = (i8)(intptr_t)(ws+3016);
	i8 v4287 = *(i8*)(intptr_t)v4286;
	i8 v4288 = (i8)(intptr_t)(ws+3024);
	i8 v4289 = *(i8*)(intptr_t)v4288;
	i8 v4290 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v4291;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4290)(&v4291, v4289, v4287);
	i8 v4292 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4292 = v4291;

	i1 v4293 = (i1)+39;
	i8 v4294 = (i8)(intptr_t)(ws+3040);
	i8 v4295 = *(i8*)(intptr_t)v4294;
	i8 v4296 = v4295+(+46);
	*(i1*)(intptr_t)v4296 = v4293;

	i8 v4297 = (i8)(intptr_t)(ws+3032);
	i8 v4298 = *(i8*)(intptr_t)v4297;
	i8 v4299 = (i8)(intptr_t)(ws+3040);
	i8 v4300 = *(i8*)(intptr_t)v4299;
	*(i8*)(intptr_t)v4300 = v4298;

endsub:;
	*p4282 = *(i8*)(intptr_t)(ws+3040);
}
	void f199_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+2888 length ws+24
void f200_AddAliasString(i8 p4301 /* real */, i8 p4302 /* name */) {
	*(i8*)(intptr_t)(ws+2888) = p4302; /*name */
	*(i8*)(intptr_t)(ws+2896) = p4301; /*real */

	i8 v4303 = (i8)+0;
	i8 v4304 = (i8)(intptr_t)(ws+2888);
	i8 v4305 = *(i8*)(intptr_t)v4304;
	i8 v4306 = (i8)(intptr_t)(ws+2896);
	i8 v4307 = *(i8*)(intptr_t)v4306;
	i8 v4308 = (i8)(intptr_t)(f199_AddAlias);
	i8 v4309;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v4308)(&v4309, v4307, v4305, v4303);
	i8 v4310 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v4310 = v4309;

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0046[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0047[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// CheckNotPartialType workspace at ws+3056 length ws+8
void f201_CheckNotPartialType(i8 p4311 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4311; /*type */

	i8 v4312 = (i8)(intptr_t)(ws+3056);
	i8 v4313 = *(i8*)(intptr_t)v4312;
	i8 v4314 = v4313+(+40);
	i1 v4315 = *(i1*)(intptr_t)v4314;
	i1 v4316 = (i1)+1;
	if (v4315==v4316) goto c02_037b; else goto c02_037c;

c02_037b:;

	i8 v4317 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v4317)();

	i8 v4318 = (i8)(intptr_t)c02_s0046;
	i8 v4319 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4319)(v4318);

	i8 v4320 = (i8)(intptr_t)(ws+3056);
	i8 v4321 = *(i8*)(intptr_t)v4320;
	i8 v4322 = v4321+(+48);
	i8 v4323 = *(i8*)(intptr_t)v4322;
	i8 v4324 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4324)(v4323);

	i8 v4325 = (i8)(intptr_t)c02_s0047;
	i8 v4326 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4326)(v4325);

	i8 v4327 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v4327)();

	goto c02_0378;

c02_037c:;

c02_0378:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f197_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// MakeNumberType workspace at ws+2888 length ws+24
void f202_MakeNumberType(i8* p4328 /* symbol */, i8 p4329 /* name */, i1 p4330 /* is_signed */, i1 p4331 /* alignment */, i1 p4332 /* width */) {
	*(i1*)(intptr_t)(ws+2888) = p4332; /*width */
	*(i1*)(intptr_t)(ws+2889) = p4331; /*alignment */
	*(i1*)(intptr_t)(ws+2890) = p4330; /*is_signed */
	*(i8*)(intptr_t)(ws+2896) = p4329; /*name */

	i8 v4333 = (i8)+64;
	i8 v4334 = (i8)(intptr_t)(f31_Alloc);
	i8 v4335;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v4334)(&v4335, v4333);
	i8 v4336 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v4336 = v4335;

	i1 v4337 = (i1)+30;
	i8 v4338 = (i8)(intptr_t)(ws+2904);
	i8 v4339 = *(i8*)(intptr_t)v4338;
	i8 v4340 = v4339+(+46);
	*(i1*)(intptr_t)v4340 = v4337;

	i1 v4341 = (i1)+2;
	i8 v4342 = (i8)(intptr_t)(ws+2904);
	i8 v4343 = *(i8*)(intptr_t)v4342;
	i8 v4344 = v4343+(+40);
	*(i1*)(intptr_t)v4344 = v4341;

	i8 v4345 = (i8)(intptr_t)(ws+2888);
	i1 v4346 = *(i1*)(intptr_t)v4345;
	i2 v4347 = v4346;
	i8 v4348 = (i8)(intptr_t)(ws+2904);
	i8 v4349 = *(i8*)(intptr_t)v4348;
	i8 v4350 = v4349+(+42);
	*(i2*)(intptr_t)v4350 = v4347;

	i8 v4351 = (i8)(intptr_t)(ws+2888);
	i1 v4352 = *(i1*)(intptr_t)v4351;
	i2 v4353 = v4352;
	i8 v4354 = (i8)(intptr_t)(ws+2904);
	i8 v4355 = *(i8*)(intptr_t)v4354;
	i8 v4356 = v4355+(+44);
	*(i2*)(intptr_t)v4356 = v4353;

	i8 v4357 = (i8)(intptr_t)(ws+2889);
	i1 v4358 = *(i1*)(intptr_t)v4357;
	i8 v4359 = (i8)(intptr_t)(ws+2904);
	i8 v4360 = *(i8*)(intptr_t)v4359;
	i8 v4361 = v4360+(+41);
	*(i1*)(intptr_t)v4361 = v4358;

	i8 v4362 = (i8)(intptr_t)(ws+2890);
	i1 v4363 = *(i1*)(intptr_t)v4362;
	i8 v4364 = (i8)(intptr_t)(ws+2904);
	i8 v4365 = *(i8*)(intptr_t)v4364;
	*(i1*)(intptr_t)v4365 = v4363;

	i8 v4366 = (i8)(intptr_t)(ws+2896);
	i8 v4367 = *(i8*)(intptr_t)v4366;
	i8 v4368 = (i8)(intptr_t)(ws+2904);
	i8 v4369 = *(i8*)(intptr_t)v4368;
	i8 v4370 = v4369+(+48);
	*(i8*)(intptr_t)v4370 = v4367;

	i8 v4371 = (i8)(intptr_t)(ws+40);
	i8 v4372 = *(i8*)(intptr_t)v4371;
	i8 v4373 = v4372+(+16);
	i8 v4374 = (i8)(intptr_t)(ws+2904);
	i8 v4375 = *(i8*)(intptr_t)v4374;
	i8 v4376 = (i8)(intptr_t)(f197_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4376)(v4375, v4373);

endsub:;
	*p4328 = *(i8*)(intptr_t)(ws+2904);
}

// IsTypeOfKind workspace at ws+3120 length ws+10
void f203_IsTypeOfKind(i1* p4377 /* result */, i1 p4378 /* kind */, i8 p4379 /* type */) {
	*(i8*)(intptr_t)(ws+3120) = p4379; /*type */
	*(i1*)(intptr_t)(ws+3128) = p4378; /*kind */

	i1 v4380 = (i1)+0;
	i8 v4381 = (i8)(intptr_t)(ws+3129);
	*(i1*)(intptr_t)v4381 = v4380;

	i8 v4382 = (i8)(intptr_t)(ws+3120);
	i8 v4383 = *(i8*)(intptr_t)v4382;
	i8 v4384 = (i8)+0;
	if (v4383==v4384) goto c02_0385; else goto c02_0387;

c02_0387:;

	i8 v4385 = (i8)(intptr_t)(ws+3120);
	i8 v4386 = *(i8*)(intptr_t)v4385;
	i8 v4387 = v4386+(+46);
	i1 v4388 = *(i1*)(intptr_t)v4387;
	i1 v4389 = (i1)+30;
	if (v4388==v4389) goto c02_0386; else goto c02_0385;

c02_0386:;

	i8 v4390 = (i8)(intptr_t)(ws+3120);
	i8 v4391 = *(i8*)(intptr_t)v4390;
	i8 v4392 = v4391+(+40);
	i1 v4393 = *(i1*)(intptr_t)v4392;
	i8 v4394 = (i8)(intptr_t)(ws+3128);
	i1 v4395 = *(i1*)(intptr_t)v4394;
	if (v4393==v4395) goto c02_0384; else goto c02_0385;

c02_0384:;

	i1 v4396 = (i1)+1;
	i8 v4397 = (i8)(intptr_t)(ws+3129);
	*(i1*)(intptr_t)v4397 = v4396;

	goto c02_037d;

c02_0385:;

c02_037d:;

endsub:;
	*p4377 = *(i1*)(intptr_t)(ws+3129);
}
	void f203_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3064 length ws+9
void f204_IsArray(i1* p4398 /* result */, i8 p4399 /* type */) {
	*(i8*)(intptr_t)(ws+3064) = p4399; /*type */

	i8 v4400 = (i8)(intptr_t)(ws+3064);
	i8 v4401 = *(i8*)(intptr_t)v4400;
	i1 v4402 = (i1)+4;
	i8 v4403 = (i8)(intptr_t)(f203_IsTypeOfKind);
	i1 v4404;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4403)(&v4404, v4402, v4401);
	i8 v4405 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4405 = v4404;

endsub:;
	*p4398 = *(i1*)(intptr_t)(ws+3072);
}
	void f203_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3104 length ws+9
void f205_IsPtr(i1* p4406 /* result */, i8 p4407 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4407; /*type */

	i8 v4408 = (i8)(intptr_t)(ws+3104);
	i8 v4409 = *(i8*)(intptr_t)v4408;
	i1 v4410 = (i1)+3;
	i8 v4411 = (i8)(intptr_t)(f203_IsTypeOfKind);
	i1 v4412;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4411)(&v4412, v4410, v4409);
	i8 v4413 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4413 = v4412;

endsub:;
	*p4406 = *(i1*)(intptr_t)(ws+3112);
}
	void f203_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3104 length ws+9
void f206_IsSubroutine(i1* p4414 /* result */, i8 p4415 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4415; /*type */

	i8 v4416 = (i8)(intptr_t)(ws+3104);
	i8 v4417 = *(i8*)(intptr_t)v4416;
	i1 v4418 = (i1)+6;
	i8 v4419 = (i8)(intptr_t)(f203_IsTypeOfKind);
	i1 v4420;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4419)(&v4420, v4418, v4417);
	i8 v4421 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4421 = v4420;

endsub:;
	*p4414 = *(i1*)(intptr_t)(ws+3112);
}
	void f203_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3104 length ws+9
void f207_IsNum(i1* p4422 /* result */, i8 p4423 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4423; /*type */

	i8 v4424 = (i8)(intptr_t)(ws+3104);
	i8 v4425 = *(i8*)(intptr_t)v4424;
	i8 v4426 = (i8)+0;
	if (v4425==v4426) goto c02_038b; else goto c02_038c;

c02_038b:;

	i1 v4427 = (i1)+1;
	i8 v4428 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4428 = v4427;

	goto c02_0388;

c02_038c:;

	i8 v4429 = (i8)(intptr_t)(ws+3104);
	i8 v4430 = *(i8*)(intptr_t)v4429;
	i1 v4431 = (i1)+2;
	i8 v4432 = (i8)(intptr_t)(f203_IsTypeOfKind);
	i1 v4433;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4432)(&v4433, v4431, v4430);
	i8 v4434 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4434 = v4433;

c02_0388:;

endsub:;
	*p4422 = *(i1*)(intptr_t)(ws+3112);
}
	void f203_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3056 length ws+9
void f208_IsSNum(i1* p4435 /* result */, i8 p4436 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4436; /*type */

	i8 v4437 = (i8)(intptr_t)(ws+3056);
	i8 v4438 = *(i8*)(intptr_t)v4437;
	i8 v4439 = (i8)+0;
	if (v4438==v4439) goto c02_0390; else goto c02_0391;

c02_0390:;

	i1 v4440 = (i1)+1;
	i8 v4441 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4441 = v4440;

	goto c02_038d;

c02_0391:;

	i8 v4442 = (i8)(intptr_t)(ws+3056);
	i8 v4443 = *(i8*)(intptr_t)v4442;
	i1 v4444 = (i1)+2;
	i8 v4445 = (i8)(intptr_t)(f203_IsTypeOfKind);
	i1 v4446;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4445)(&v4446, v4444, v4443);
	i1 v4447 = (i1)+0;
	if (v4446==v4447) goto c02_0397; else goto c02_0398;

c02_0398:;

	i8 v4448 = (i8)(intptr_t)(ws+3056);
	i8 v4449 = *(i8*)(intptr_t)v4448;
	i1 v4450 = *(i1*)(intptr_t)v4449;
	i1 v4451 = (i1)+0;
	if (v4450==v4451) goto c02_0397; else goto c02_0396;

c02_0396:;

	i1 v4452 = (i1)+1;
	i8 v4453 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4453 = v4452;

	goto c02_038d;

c02_0397:;

	i1 v4454 = (i1)+0;
	i8 v4455 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4455 = v4454;

c02_038d:;

endsub:;
	*p4435 = *(i1*)(intptr_t)(ws+3064);
}
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f207_IsNum(i1* /* result */, i8 /* type */);
	void f206_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3088 length ws+9
void f209_IsScalar(i1* p4456 /* result */, i8 p4457 /* type */) {
	*(i8*)(intptr_t)(ws+3088) = p4457; /*type */

	i8 v4458 = (i8)(intptr_t)(ws+3088);
	i8 v4459 = *(i8*)(intptr_t)v4458;
	i8 v4460 = (i8)(intptr_t)(f205_IsPtr);
	i1 v4461;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4460)(&v4461, v4459);
	i1 v4462 = (i1)+0;
	if (v4461==v4462) goto c02_03a3; else goto c02_03a0;

c02_03a3:;

	i8 v4463 = (i8)(intptr_t)(ws+3088);
	i8 v4464 = *(i8*)(intptr_t)v4463;
	i8 v4465 = (i8)(intptr_t)(f207_IsNum);
	i1 v4466;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4465)(&v4466, v4464);
	i1 v4467 = (i1)+0;
	if (v4466==v4467) goto c02_03a2; else goto c02_03a0;

c02_03a2:;

	i8 v4468 = (i8)(intptr_t)(ws+3088);
	i8 v4469 = *(i8*)(intptr_t)v4468;
	i8 v4470 = (i8)(intptr_t)(f206_IsSubroutine);
	i1 v4471;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4470)(&v4471, v4469);
	i1 v4472 = (i1)+0;
	if (v4471==v4472) goto c02_03a1; else goto c02_03a0;

c02_03a0:;

	i1 v4473 = (i1)+1;
	i8 v4474 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v4474 = v4473;

	goto c02_0399;

c02_03a1:;

	i1 v4475 = (i1)+0;
	i8 v4476 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v4476 = v4475;

c02_0399:;

endsub:;
	*p4456 = *(i1*)(intptr_t)(ws+3096);
}
	void f203_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3032 length ws+9
void f210_IsRecord(i1* p4477 /* result */, i8 p4478 /* type */) {
	*(i8*)(intptr_t)(ws+3032) = p4478; /*type */

	i8 v4479 = (i8)(intptr_t)(ws+3032);
	i8 v4480 = *(i8*)(intptr_t)v4479;
	i1 v4481 = (i1)+5;
	i8 v4482 = (i8)(intptr_t)(f203_IsTypeOfKind);
	i1 v4483;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4482)(&v4483, v4481, v4480);
	i8 v4484 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v4484 = v4483;

endsub:;
	*p4477 = *(i1*)(intptr_t)(ws+3040);
}
	void f209_IsScalar(i1* /* result */, i8 /* type */);
	void f89_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3056 length ws+32
void f211_MakeLValue(i8* p4485 /* lvalue */, i8 p4486 /* address */) {
	*(i8*)(intptr_t)(ws+3056) = p4486; /*address */

	i1 v4487 = (i1)+0;
	i8 v4488 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4488 = v4487;

	i8 v4489 = (i8)(intptr_t)(ws+3056);
	i8 v4490 = *(i8*)(intptr_t)v4489;
	i8 v4491 = v4490+(+16);
	i8 v4492 = *(i8*)(intptr_t)v4491;
	i8 v4493 = *(i8*)(intptr_t)v4492;
	i8 v4494 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v4494 = v4493;

	i8 v4495 = (i8)(intptr_t)(ws+3080);
	i8 v4496 = *(i8*)(intptr_t)v4495;
	i8 v4497 = (i8)(intptr_t)(f209_IsScalar);
	i1 v4498;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4497)(&v4498, v4496);
	i1 v4499 = (i1)+0;
	if (v4498==v4499) goto c02_03a8; else goto c02_03a7;

c02_03a7:;

	i8 v4500 = (i8)(intptr_t)(ws+3080);
	i8 v4501 = *(i8*)(intptr_t)v4500;
	i8 v4502 = v4501+(+42);
	i2 v4503 = *(i2*)(intptr_t)v4502;
	i1 v4504 = v4503;
	i8 v4505 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4505 = v4504;

	goto c02_03a4;

c02_03a8:;

c02_03a4:;

	i8 v4506 = (i8)(intptr_t)(ws+3072);
	i1 v4507 = *(i1*)(intptr_t)v4506;
	i8 v4508 = (i8)(intptr_t)(ws+3056);
	i8 v4509 = *(i8*)(intptr_t)v4508;
	i8 v4510 = (i8)(intptr_t)(f89_MidLoad);
	i8 v4511;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v4510)(&v4511, v4509, v4507);
	i8 v4512 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v4512 = v4511;

	i8 v4513 = (i8)(intptr_t)(ws+3080);
	i8 v4514 = *(i8*)(intptr_t)v4513;
	i8 v4515 = (i8)(intptr_t)(ws+3064);
	i8 v4516 = *(i8*)(intptr_t)v4515;
	i8 v4517 = v4516+(+16);
	*(i8*)(intptr_t)v4517 = v4514;

endsub:;
	*p4485 = *(i8*)(intptr_t)(ws+3064);
}
const i1 c02_s0048[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f56_Discard(i8 /* node */);

// UndoLValue workspace at ws+3056 length ws+17
void f212_UndoLValue(i8* p4518 /* address */, i8 p4519 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3056) = p4519; /*lvalue */

	i8 v4520 = (i8)(intptr_t)(ws+3056);
	i8 v4521 = *(i8*)(intptr_t)v4520;
	i8 v4522 = v4521+(+58);
	i1 v4523 = *(i1*)(intptr_t)v4522;
	i8 v4524 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4524 = v4523;

	i8 v4525 = (i8)(intptr_t)(ws+3072);
	i1 v4526 = *(i1*)(intptr_t)v4525;
	i1 v4527 = (i1)+46;
	if (v4526<v4527) goto c02_03ae; else goto c02_03b0;

c02_03b0:;

	i1 v4528 = (i1)+50;
	i8 v4529 = (i8)(intptr_t)(ws+3072);
	i1 v4530 = *(i1*)(intptr_t)v4529;
	if (v4528<v4530) goto c02_03ae; else goto c02_03af;

c02_03ae:;

	i8 v4531 = (i8)(intptr_t)c02_s0048;
	i8 v4532 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4532)(v4531);

	goto c02_03a9;

c02_03af:;

c02_03a9:;

	i8 v4533 = (i8)(intptr_t)(ws+3056);
	i8 v4534 = *(i8*)(intptr_t)v4533;
	i8 v4535 = v4534+(+24);
	i8 v4536 = *(i8*)(intptr_t)v4535;
	i8 v4537 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v4537 = v4536;

	i8 v4538 = (i8)+0;
	i8 v4539 = (i8)(intptr_t)(ws+3056);
	i8 v4540 = *(i8*)(intptr_t)v4539;
	i8 v4541 = v4540+(+24);
	*(i8*)(intptr_t)v4541 = v4538;

	i8 v4542 = (i8)(intptr_t)(ws+3056);
	i8 v4543 = *(i8*)(intptr_t)v4542;
	i8 v4544 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4544)(v4543);

endsub:;
	*p4518 = *(i8*)(intptr_t)(ws+3064);
}

// AllocLabel workspace at ws+3072 length ws+2
void f214_AllocLabel(i2* p4548 /* label */) {

	i8 v4549 = (i8)(intptr_t)(ws+48);
	i2 v4550 = *(i2*)(intptr_t)v4549;
	i8 v4551 = (i8)(intptr_t)(ws+3072);
	*(i2*)(intptr_t)v4551 = v4550;

	i8 v4552 = (i8)(intptr_t)(ws+48);
	i2 v4553 = *(i2*)(intptr_t)v4552;
	i2 v4554 = v4553+(+1);
	i8 v4555 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4555 = v4554;

endsub:;
	*p4548 = *(i2*)(intptr_t)(ws+3072);
}

// AllocSubrId workspace at ws+3008 length ws+2
void f215_AllocSubrId(i2* p4556 /* id */) {

	i8 v4557 = (i8)(intptr_t)(ws+50);
	i2 v4558 = *(i2*)(intptr_t)v4557;
	i8 v4559 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v4559 = v4558;

	i8 v4560 = (i8)(intptr_t)(ws+50);
	i2 v4561 = *(i2*)(intptr_t)v4560;
	i2 v4562 = v4561+(+1);
	i8 v4563 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4563 = v4562;

endsub:;
	*p4556 = *(i2*)(intptr_t)(ws+3008);
}

// FindConflictingRegisters workspace at ws+3184 length ws+16
void f216_FindConflictingRegisters(i1* p4564 /* conflicting */, i1 p4565 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4565; /*inreg */

	i1 v4566 = (i1)+0;
	i8 v4567 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4567 = v4566;

	i8 v4568 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4569 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4569 = v4568;

c02_03b3:;

	i8 v4570 = (i8)(intptr_t)(ws+3192);
	i8 v4571 = *(i8*)(intptr_t)v4570;
	i8 v4572 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4571==v4572) goto c02_03b6; else goto c02_03b5;

c02_03b5:;

	i8 v4573 = (i8)(intptr_t)(ws+3192);
	i8 v4574 = *(i8*)(intptr_t)v4573;
	i8 v4575 = v4574+(+8);
	i1 v4576 = *(i1*)(intptr_t)v4575;
	i8 v4577 = (i8)(intptr_t)(ws+3184);
	i1 v4578 = *(i1*)(intptr_t)v4577;
	i1 v4579 = v4576&v4578;
	i1 v4580 = (i1)+0;
	if (v4579==v4580) goto c02_03bb; else goto c02_03ba;

c02_03ba:;

	i8 v4581 = (i8)(intptr_t)(ws+3185);
	i1 v4582 = *(i1*)(intptr_t)v4581;
	i8 v4583 = (i8)(intptr_t)(ws+3192);
	i8 v4584 = *(i8*)(intptr_t)v4583;
	i8 v4585 = v4584+(+9);
	i1 v4586 = *(i1*)(intptr_t)v4585;
	i1 v4587 = v4582|v4586;
	i8 v4588 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4588 = v4587;

	goto c02_03b7;

c02_03bb:;

c02_03b7:;

	i8 v4589 = (i8)(intptr_t)(ws+3192);
	i8 v4590 = *(i8*)(intptr_t)v4589;
	i8 v4591 = v4590+(+16);
	i8 v4592 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4592 = v4591;

	goto c02_03b3;

c02_03b6:;

endsub:;
	*p4564 = *(i1*)(intptr_t)(ws+3185);
}

// FindCompatibleRegisters workspace at ws+3184 length ws+16
void f217_FindCompatibleRegisters(i1* p4593 /* compatible */, i1 p4594 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4594; /*inreg */

	i1 v4595 = (i1)-1;
	i8 v4596 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4596 = v4595;

	i8 v4597 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4598 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4598 = v4597;

c02_03be:;

	i8 v4599 = (i8)(intptr_t)(ws+3192);
	i8 v4600 = *(i8*)(intptr_t)v4599;
	i8 v4601 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4600==v4601) goto c02_03c1; else goto c02_03c0;

c02_03c0:;

	i8 v4602 = (i8)(intptr_t)(ws+3192);
	i8 v4603 = *(i8*)(intptr_t)v4602;
	i8 v4604 = v4603+(+8);
	i1 v4605 = *(i1*)(intptr_t)v4604;
	i8 v4606 = (i8)(intptr_t)(ws+3184);
	i1 v4607 = *(i1*)(intptr_t)v4606;
	i1 v4608 = v4605&v4607;
	i1 v4609 = (i1)+0;
	if (v4608==v4609) goto c02_03c6; else goto c02_03c5;

c02_03c5:;

	i8 v4610 = (i8)(intptr_t)(ws+3185);
	i1 v4611 = *(i1*)(intptr_t)v4610;
	i8 v4612 = (i8)(intptr_t)(ws+3192);
	i8 v4613 = *(i8*)(intptr_t)v4612;
	i8 v4614 = v4613+(+10);
	i1 v4615 = *(i1*)(intptr_t)v4614;
	i1 v4616 = v4611&v4615;
	i8 v4617 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4617 = v4616;

	goto c02_03c2;

c02_03c6:;

c02_03c2:;

	i8 v4618 = (i8)(intptr_t)(ws+3192);
	i8 v4619 = *(i8*)(intptr_t)v4618;
	i8 v4620 = v4619+(+16);
	i8 v4621 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4621 = v4620;

	goto c02_03be;

c02_03c1:;

endsub:;
	*p4593 = *(i1*)(intptr_t)(ws+3185);
}

// FindFirst workspace at ws+3184 length ws+2
void f218_FindFirst(i1* p4622 /* outreg */, i1 p4623 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4623; /*inreg */

	i1 v4624 = (i1)+1;
	i8 v4625 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4625 = v4624;

c02_03c9:;

	i8 v4626 = (i8)(intptr_t)(ws+3185);
	i1 v4627 = *(i1*)(intptr_t)v4626;
	i1 v4628 = (i1)+0;
	if (v4627==v4628) goto c02_03cc; else goto c02_03cb;

c02_03cb:;

	i8 v4629 = (i8)(intptr_t)(ws+3184);
	i1 v4630 = *(i1*)(intptr_t)v4629;
	i8 v4631 = (i8)(intptr_t)(ws+3185);
	i1 v4632 = *(i1*)(intptr_t)v4631;
	i1 v4633 = v4630&v4632;
	i1 v4634 = (i1)+0;
	if (v4633==v4634) goto c02_03d1; else goto c02_03d0;

c02_03d0:;

	goto endsub;

c02_03d1:;

c02_03cd:;

	i8 v4635 = (i8)(intptr_t)(ws+3185);
	i1 v4636 = *(i1*)(intptr_t)v4635;
	i1 v4637 = (i1)+1;
	i1 v4638 = ((i1)v4636)<<v4637;
	i8 v4639 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4639 = v4638;

	goto c02_03c9;

c02_03cc:;

	i1 v4640 = (i1)+0;
	i8 v4641 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4641 = v4640;

endsub:;
	*p4622 = *(i1*)(intptr_t)(ws+3185);
}

// ArchAlignUp workspace at ws+3064 length ws+8
void f219_ArchAlignUp(i2* p4646 /* newvalue */, i1 p4647 /* alignment */, i2 p4648 /* value */) {
	*(i2*)(intptr_t)(ws+3064) = p4648; /*value */
	*(i1*)(intptr_t)(ws+3066) = p4647; /*alignment */

	i8 v4649 = (i8)(intptr_t)(ws+3066);
	i1 v4650 = *(i1*)(intptr_t)v4649;
	i1 v4651 = v4650+(-1);
	i2 v4652 = v4651;
	i8 v4653 = (i8)(intptr_t)(ws+3070);
	*(i2*)(intptr_t)v4653 = v4652;

	i8 v4654 = (i8)(intptr_t)(ws+3064);
	i2 v4655 = *(i2*)(intptr_t)v4654;
	i8 v4656 = (i8)(intptr_t)(ws+3070);
	i2 v4657 = *(i2*)(intptr_t)v4656;
	i2 v4658 = v4655+v4657;
	i8 v4659 = (i8)(intptr_t)(ws+3070);
	i2 v4660 = *(i2*)(intptr_t)v4659;
	i2 v4661 = ~v4660;
	i2 v4662 = v4658&v4661;
	i8 v4663 = (i8)(intptr_t)(ws+3068);
	*(i2*)(intptr_t)v4663 = v4662;

endsub:;
	*p4646 = *(i2*)(intptr_t)(ws+3068);
}
const i1 c02_s0049[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004a[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004b[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004c[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004d[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004e[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004f[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0050[] = { 0x69,0x6e,0x74,0x38,0 };
	void f202_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0051[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
	void f200_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+2888 length ws+0
void f220_ArchInitTypes(void) {

	i1 v4664 = (i1)+8;
	i1 v4665 = (i1)+8;
	i1 v4666 = (i1)+0;
	i8 v4667 = (i8)(intptr_t)c02_s0049;
	i8 v4668 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4669;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4668)(&v4669, v4667, v4666, v4665, v4664);
	i8 v4670 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v4670 = v4669;

	i1 v4671 = (i1)+8;
	i1 v4672 = (i1)+8;
	i1 v4673 = (i1)+1;
	i8 v4674 = (i8)(intptr_t)c02_s004a;
	i8 v4675 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4676;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4675)(&v4676, v4674, v4673, v4672, v4671);
	i8 v4677 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v4677 = v4676;

	i1 v4678 = (i1)+4;
	i1 v4679 = (i1)+4;
	i1 v4680 = (i1)+0;
	i8 v4681 = (i8)(intptr_t)c02_s004b;
	i8 v4682 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4683;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4682)(&v4683, v4681, v4680, v4679, v4678);
	i8 v4684 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v4684 = v4683;

	i1 v4685 = (i1)+4;
	i1 v4686 = (i1)+4;
	i1 v4687 = (i1)+1;
	i8 v4688 = (i8)(intptr_t)c02_s004c;
	i8 v4689 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4690;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4689)(&v4690, v4688, v4687, v4686, v4685);
	i8 v4691 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v4691 = v4690;

	i1 v4692 = (i1)+2;
	i1 v4693 = (i1)+2;
	i1 v4694 = (i1)+0;
	i8 v4695 = (i8)(intptr_t)c02_s004d;
	i8 v4696 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4697;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4696)(&v4697, v4695, v4694, v4693, v4692);
	i8 v4698 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v4698 = v4697;

	i1 v4699 = (i1)+2;
	i1 v4700 = (i1)+2;
	i1 v4701 = (i1)+1;
	i8 v4702 = (i8)(intptr_t)c02_s004e;
	i8 v4703 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4704;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4703)(&v4704, v4702, v4701, v4700, v4699);
	i8 v4705 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v4705 = v4704;

	i1 v4706 = (i1)+1;
	i1 v4707 = (i1)+1;
	i1 v4708 = (i1)+0;
	i8 v4709 = (i8)(intptr_t)c02_s004f;
	i8 v4710 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4711;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4710)(&v4711, v4709, v4708, v4707, v4706);
	i8 v4712 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v4712 = v4711;

	i1 v4713 = (i1)+1;
	i1 v4714 = (i1)+1;
	i1 v4715 = (i1)+1;
	i8 v4716 = (i8)(intptr_t)c02_s0050;
	i8 v4717 = (i8)(intptr_t)(f202_MakeNumberType);
	i8 v4718;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4717)(&v4718, v4716, v4715, v4714, v4713);
	i8 v4719 = (i8)(intptr_t)(ws+1048);
	*(i8*)(intptr_t)v4719 = v4718;

	i8 v4720 = (i8)(intptr_t)(ws+992);
	i8 v4721 = *(i8*)(intptr_t)v4720;
	i8 v4722 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v4722 = v4721;

	i8 v4723 = (i8)(intptr_t)c02_s0051;
	i8 v4724 = (i8)(intptr_t)(ws+1056);
	i8 v4725 = *(i8*)(intptr_t)v4724;
	i8 v4726 = (i8)(intptr_t)(f200_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v4726)(v4725, v4723);

endsub:;
}

// ArchGuessIntType workspace at ws+3040 length ws+16
void f221_ArchGuessIntType(i8* p4727 /* symbol */, i4 p4728 /* max */, i4 p4729 /* min */) {
	*(i4*)(intptr_t)(ws+3040) = p4729; /*min */
	*(i4*)(intptr_t)(ws+3044) = p4728; /*max */

	i8 v4730 = (i8)(intptr_t)(ws+3040);
	i4 v4731 = *(i4*)(intptr_t)v4730;
	i4 v4732 = (i4)+0;
	if ((s4)v4731<(s4)v4732) goto c02_03d8; else goto c02_03d9;

c02_03d9:;

	i4 v4733 = (i4)+255;
	i8 v4734 = (i8)(intptr_t)(ws+3044);
	i4 v4735 = *(i4*)(intptr_t)v4734;
	if ((s4)v4733<(s4)v4735) goto c02_03d8; else goto c02_03d7;

c02_03d7:;

	i8 v4736 = (i8)(intptr_t)(ws+1040);
	i8 v4737 = *(i8*)(intptr_t)v4736;
	i8 v4738 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4738 = v4737;

	goto c02_03d2;

c02_03d8:;

	i8 v4739 = (i8)(intptr_t)(ws+3040);
	i4 v4740 = *(i4*)(intptr_t)v4739;
	i4 v4741 = (i4)-128;
	if ((s4)v4740<(s4)v4741) goto c02_03df; else goto c02_03e0;

c02_03e0:;

	i4 v4742 = (i4)+127;
	i8 v4743 = (i8)(intptr_t)(ws+3044);
	i4 v4744 = *(i4*)(intptr_t)v4743;
	if ((s4)v4742<(s4)v4744) goto c02_03df; else goto c02_03de;

c02_03de:;

	i8 v4745 = (i8)(intptr_t)(ws+1048);
	i8 v4746 = *(i8*)(intptr_t)v4745;
	i8 v4747 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4747 = v4746;

	goto c02_03d2;

c02_03df:;

	i8 v4748 = (i8)(intptr_t)(ws+3040);
	i4 v4749 = *(i4*)(intptr_t)v4748;
	i4 v4750 = (i4)+0;
	if ((s4)v4749<(s4)v4750) goto c02_03e6; else goto c02_03e7;

c02_03e7:;

	i4 v4751 = (i4)+65535;
	i8 v4752 = (i8)(intptr_t)(ws+3044);
	i4 v4753 = *(i4*)(intptr_t)v4752;
	if ((s4)v4751<(s4)v4753) goto c02_03e6; else goto c02_03e5;

c02_03e5:;

	i8 v4754 = (i8)(intptr_t)(ws+1024);
	i8 v4755 = *(i8*)(intptr_t)v4754;
	i8 v4756 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4756 = v4755;

	goto c02_03d2;

c02_03e6:;

	i8 v4757 = (i8)(intptr_t)(ws+3040);
	i4 v4758 = *(i4*)(intptr_t)v4757;
	i4 v4759 = (i4)-32768;
	if ((s4)v4758<(s4)v4759) goto c02_03ed; else goto c02_03ee;

c02_03ee:;

	i4 v4760 = (i4)+32767;
	i8 v4761 = (i8)(intptr_t)(ws+3044);
	i4 v4762 = *(i4*)(intptr_t)v4761;
	if ((s4)v4760<(s4)v4762) goto c02_03ed; else goto c02_03ec;

c02_03ec:;

	i8 v4763 = (i8)(intptr_t)(ws+1032);
	i8 v4764 = *(i8*)(intptr_t)v4763;
	i8 v4765 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4765 = v4764;

	goto c02_03d2;

c02_03ed:;

	i8 v4766 = (i8)(intptr_t)(ws+3040);
	i4 v4767 = *(i4*)(intptr_t)v4766;
	i4 v4768 = (i4)+0;
	if ((s4)v4767<(s4)v4768) goto c02_03f2; else goto c02_03f1;

c02_03f1:;

	i8 v4769 = (i8)(intptr_t)(ws+1008);
	i8 v4770 = *(i8*)(intptr_t)v4769;
	i8 v4771 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4771 = v4770;

	goto c02_03d2;

c02_03f2:;

	i8 v4772 = (i8)(intptr_t)(ws+1016);
	i8 v4773 = *(i8*)(intptr_t)v4772;
	i8 v4774 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4774 = v4773;

c02_03d2:;

endsub:;
	*p4727 = *(i8*)(intptr_t)(ws+3048);
}
	void f219_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3040 length ws+18
void f222_ArchInitVariable(i8 p4775 /* symbol */) {
	*(i8*)(intptr_t)(ws+3040) = p4775; /*symbol */

	i8 v4776 = (i8)(intptr_t)(ws+3040);
	i8 v4777 = *(i8*)(intptr_t)v4776;
	i8 v4778 = v4777+(+8);
	i8 v4779 = *(i8*)(intptr_t)v4778;
	i8 v4780 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4780 = v4779;

	i8 v4781 = (i8)(intptr_t)(ws+3048);
	i8 v4782 = *(i8*)(intptr_t)v4781;
	i8 v4783 = v4782+(+74);
	i2 v4784 = *(i2*)(intptr_t)v4783;
	i8 v4785 = (i8)(intptr_t)(ws+3056);
	*(i2*)(intptr_t)v4785 = v4784;

	i8 v4786 = (i8)(intptr_t)(ws+3056);
	i2 v4787 = *(i2*)(intptr_t)v4786;
	i8 v4788 = (i8)(intptr_t)(ws+3040);
	i8 v4789 = *(i8*)(intptr_t)v4788;
	i8 v4790 = *(i8*)(intptr_t)v4789;
	i8 v4791 = v4790+(+41);
	i1 v4792 = *(i1*)(intptr_t)v4791;
	i8 v4793 = (i8)(intptr_t)(f219_ArchAlignUp);
	i2 v4794;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4793)(&v4794, v4792, v4787);
	i8 v4795 = (i8)(intptr_t)(ws+3056);
	*(i2*)(intptr_t)v4795 = v4794;

	i8 v4796 = (i8)(intptr_t)(ws+3056);
	i2 v4797 = *(i2*)(intptr_t)v4796;
	i8 v4798 = (i8)(intptr_t)(ws+3040);
	i8 v4799 = *(i8*)(intptr_t)v4798;
	i8 v4800 = v4799+(+32);
	*(i2*)(intptr_t)v4800 = v4797;

	i8 v4801 = (i8)(intptr_t)(ws+3056);
	i2 v4802 = *(i2*)(intptr_t)v4801;
	i8 v4803 = (i8)(intptr_t)(ws+3040);
	i8 v4804 = *(i8*)(intptr_t)v4803;
	i8 v4805 = *(i8*)(intptr_t)v4804;
	i8 v4806 = v4805+(+42);
	i2 v4807 = *(i2*)(intptr_t)v4806;
	i2 v4808 = v4802+v4807;
	i8 v4809 = (i8)(intptr_t)(ws+3048);
	i8 v4810 = *(i8*)(intptr_t)v4809;
	i8 v4811 = v4810+(+74);
	*(i2*)(intptr_t)v4811 = v4808;

endsub:;
}
	void f219_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3008 length ws+18
void f223_ArchInitMember(i2 p4812 /* position */, i8 p4813 /* member */, i8 p4814 /* containing */) {
	*(i8*)(intptr_t)(ws+3008) = p4814; /*containing */
	*(i8*)(intptr_t)(ws+3016) = p4813; /*member */
	*(i2*)(intptr_t)(ws+3024) = p4812; /*position */

	i8 v4815 = (i8)(intptr_t)(ws+3024);
	i2 v4816 = *(i2*)(intptr_t)v4815;
	i8 v4817 = (i8)(intptr_t)(ws+3016);
	i8 v4818 = *(i8*)(intptr_t)v4817;
	i8 v4819 = *(i8*)(intptr_t)v4818;
	i8 v4820 = v4819+(+41);
	i1 v4821 = *(i1*)(intptr_t)v4820;
	i8 v4822 = (i8)(intptr_t)(f219_ArchAlignUp);
	i2 v4823;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4822)(&v4823, v4821, v4816);
	i8 v4824 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v4824 = v4823;

	i8 v4825 = (i8)(intptr_t)(ws+3024);
	i2 v4826 = *(i2*)(intptr_t)v4825;
	i8 v4827 = (i8)(intptr_t)(ws+3016);
	i8 v4828 = *(i8*)(intptr_t)v4827;
	i8 v4829 = v4828+(+32);
	*(i2*)(intptr_t)v4829 = v4826;

	i8 v4830 = (i8)(intptr_t)(ws+3024);
	i2 v4831 = *(i2*)(intptr_t)v4830;
	i8 v4832 = (i8)(intptr_t)(ws+3016);
	i8 v4833 = *(i8*)(intptr_t)v4832;
	i8 v4834 = *(i8*)(intptr_t)v4833;
	i8 v4835 = v4834+(+42);
	i2 v4836 = *(i2*)(intptr_t)v4835;
	i2 v4837 = v4831+v4836;
	i8 v4838 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v4838 = v4837;

	i8 v4839 = (i8)(intptr_t)(ws+3008);
	i8 v4840 = *(i8*)(intptr_t)v4839;
	i8 v4841 = v4840+(+42);
	i2 v4842 = *(i2*)(intptr_t)v4841;
	i8 v4843 = (i8)(intptr_t)(ws+3024);
	i2 v4844 = *(i2*)(intptr_t)v4843;
	if (v4842<v4844) goto c02_03f6; else goto c02_03f7;

c02_03f6:;

	i8 v4845 = (i8)(intptr_t)(ws+3024);
	i2 v4846 = *(i2*)(intptr_t)v4845;
	i8 v4847 = (i8)(intptr_t)(ws+3008);
	i8 v4848 = *(i8*)(intptr_t)v4847;
	i8 v4849 = v4848+(+42);
	*(i2*)(intptr_t)v4849 = v4846;

	goto c02_03f3;

c02_03f7:;

c02_03f3:;

endsub:;
}
const i1 c02_s0052[] = { 0x28,0 };
	void f164_E(i8 /* text */);
const i1 c02_s0053[] = { 0x2c,0x20,0 };
	void f164_E(i8 /* text */);

// comma workspace at ws+3320 length ws+0
void f225_comma(void) {

	i8 v4855 = (i8)(intptr_t)(ws+3304);
	i1 v4856 = *(i1*)(intptr_t)v4855;
	i1 v4857 = (i1)+0;
	if (v4856==v4857) goto c02_03fb; else goto c02_03fc;

c02_03fb:;

	i8 v4858 = (i8)(intptr_t)c02_s0053;
	i8 v4859 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4859)(v4858);

	goto c02_03f8;

c02_03fc:;

c02_03f8:;

	i1 v4860 = (i1)+0;
	i8 v4861 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v4861 = v4860;

endsub:;
}
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f225_comma(void);
const i1 c02_s0054[] = { 0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0055[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s0056[] = { 0x20,0x2a,0x2f,0 };
	void f164_E(i8 /* text */);
	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f225_comma(void);
const i1 c02_s0057[] = { 0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0058[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s0059[] = { 0x20,0x2a,0x2f,0 };
	void f164_E(i8 /* text */);
const i1 c02_s005a[] = { 0x76,0x6f,0x69,0x64,0 };
	void f164_E(i8 /* text */);
const i1 c02_s005b[] = { 0x29,0 };
	void f164_E(i8 /* text */);

// EmitFunctionSignature workspace at ws+3296 length ws+24
void f224_EmitFunctionSignature(i8 p4850 /* subr */) {
	*(i8*)(intptr_t)(ws+3296) = p4850; /*subr */

	i8 v4851 = (i8)(intptr_t)c02_s0052;
	i8 v4852 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4852)(v4851);

	i1 v4853 = (i1)+1;
	i8 v4854 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v4854 = v4853;


	i1 v4862 = (i1)+0;
	i8 v4863 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4863 = v4862;

c02_03ff:;

	i8 v4864 = (i8)(intptr_t)(ws+3305);
	i1 v4865 = *(i1*)(intptr_t)v4864;
	i8 v4866 = (i8)(intptr_t)(ws+3296);
	i8 v4867 = *(i8*)(intptr_t)v4866;
	i8 v4868 = v4867+(+105);
	i1 v4869 = *(i1*)(intptr_t)v4868;
	if (v4865==v4869) goto c02_0402; else goto c02_0401;

c02_0401:;

	i8 v4870 = (i8)(intptr_t)(ws+3296);
	i8 v4871 = *(i8*)(intptr_t)v4870;
	i8 v4872 = (i8)(intptr_t)(ws+3305);
	i1 v4873 = *(i1*)(intptr_t)v4872;
	i8 v4874 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v4875;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4874)(&v4875, v4873, v4871);
	i8 v4876 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v4876 = v4875;

	i8 v4877 = (i8)(intptr_t)(f225_comma);

	((void(*)(void))(intptr_t)v4877)();

	i8 v4878 = (i8)(intptr_t)c02_s0054;
	i8 v4879 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4879)(v4878);

	i8 v4880 = (i8)(intptr_t)(ws+3312);
	i8 v4881 = *(i8*)(intptr_t)v4880;
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i8 v4883 = v4882+(+42);
	i2 v4884 = *(i2*)(intptr_t)v4883;
	i1 v4885 = v4884;
	i8 v4886 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4886)(v4885);

	i8 v4887 = (i8)(intptr_t)c02_s0055;
	i8 v4888 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4888)(v4887);

	i8 v4889 = (i8)(intptr_t)(ws+3312);
	i8 v4890 = *(i8*)(intptr_t)v4889;
	i8 v4891 = v4890+(+48);
	i8 v4892 = *(i8*)(intptr_t)v4891;
	i8 v4893 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4893)(v4892);

	i8 v4894 = (i8)(intptr_t)c02_s0056;
	i8 v4895 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4895)(v4894);

	i8 v4896 = (i8)(intptr_t)(ws+3305);
	i1 v4897 = *(i1*)(intptr_t)v4896;
	i1 v4898 = v4897+(+1);
	i8 v4899 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4899 = v4898;

	goto c02_03ff;

c02_0402:;

	i8 v4900 = (i8)(intptr_t)(ws+3296);
	i8 v4901 = *(i8*)(intptr_t)v4900;
	i8 v4902 = v4901+(+104);
	i1 v4903 = *(i1*)(intptr_t)v4902;
	i8 v4904 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4904 = v4903;

c02_0405:;

	i8 v4905 = (i8)(intptr_t)(ws+3305);
	i1 v4906 = *(i1*)(intptr_t)v4905;
	i1 v4907 = (i1)+0;
	if (v4906==v4907) goto c02_0408; else goto c02_0407;

c02_0407:;

	i8 v4908 = (i8)(intptr_t)(ws+3305);
	i1 v4909 = *(i1*)(intptr_t)v4908;
	i1 v4910 = v4909+(-1);
	i8 v4911 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4911 = v4910;

	i8 v4912 = (i8)(intptr_t)(ws+3296);
	i8 v4913 = *(i8*)(intptr_t)v4912;
	i8 v4914 = (i8)(intptr_t)(ws+3305);
	i1 v4915 = *(i1*)(intptr_t)v4914;
	i8 v4916 = (i8)(intptr_t)(f84_GetInputParameter);
	i8 v4917;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4916)(&v4917, v4915, v4913);
	i8 v4918 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v4918 = v4917;

	i8 v4919 = (i8)(intptr_t)(f225_comma);

	((void(*)(void))(intptr_t)v4919)();

	i8 v4920 = (i8)(intptr_t)c02_s0057;
	i8 v4921 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4921)(v4920);

	i8 v4922 = (i8)(intptr_t)(ws+3312);
	i8 v4923 = *(i8*)(intptr_t)v4922;
	i8 v4924 = *(i8*)(intptr_t)v4923;
	i8 v4925 = v4924+(+42);
	i2 v4926 = *(i2*)(intptr_t)v4925;
	i1 v4927 = v4926;
	i8 v4928 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4928)(v4927);

	i8 v4929 = (i8)(intptr_t)c02_s0058;
	i8 v4930 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4930)(v4929);

	i8 v4931 = (i8)(intptr_t)(ws+3312);
	i8 v4932 = *(i8*)(intptr_t)v4931;
	i8 v4933 = v4932+(+48);
	i8 v4934 = *(i8*)(intptr_t)v4933;
	i8 v4935 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4935)(v4934);

	i8 v4936 = (i8)(intptr_t)c02_s0059;
	i8 v4937 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4937)(v4936);

	goto c02_0405;

c02_0408:;

	i8 v4938 = (i8)(intptr_t)(ws+3296);
	i8 v4939 = *(i8*)(intptr_t)v4938;
	i8 v4940 = v4939+(+104);
	i1 v4941 = *(i1*)(intptr_t)v4940;
	i8 v4942 = (i8)(intptr_t)(ws+3296);
	i8 v4943 = *(i8*)(intptr_t)v4942;
	i8 v4944 = v4943+(+105);
	i1 v4945 = *(i1*)(intptr_t)v4944;
	i1 v4946 = v4941+v4945;
	i1 v4947 = (i1)+0;
	if (v4946==v4947) goto c02_040c; else goto c02_040d;

c02_040c:;

	i8 v4948 = (i8)(intptr_t)c02_s005a;
	i8 v4949 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4949)(v4948);

	goto c02_0409;

c02_040d:;

c02_0409:;

	i8 v4950 = (i8)(intptr_t)c02_s005b;
	i8 v4951 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4951)(v4950);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
const i1 c02_s005c[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f164_E(i8 /* text */);
	void f176_E_subref(i8 /* subr */);
	void f224_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s005d[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
	void f179_EmitterPopChunk(i1 /* type */);
	void f176_E_subref(i8 /* subr */);
const i1 c02_s005e[] = { 0x28,0x28,0x69,0x31,0x2a,0x29,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
	void f169_E_i16(i2 /* value */);
const i1 c02_s005f[] = { 0x29,0 };
	void f164_E(i8 /* text */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);

// E_symref workspace at ws+3280 length ws+10
void f226_E_symref(i2 p4952 /* off */, i8 p4953 /* sym */) {
	*(i8*)(intptr_t)(ws+3280) = p4953; /*sym */
	*(i2*)(intptr_t)(ws+3288) = p4952; /*off */

	i8 v4954 = (i8)(intptr_t)(ws+3280);
	i8 v4955 = *(i8*)(intptr_t)v4954;
	i8 v4956 = v4955+(+46);
	i1 v4957 = *(i1*)(intptr_t)v4956;

	if (v4957 != +25) goto c02_040f;

	i8 v4958 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v4958)();

	i8 v4959 = (i8)(intptr_t)(ws+40);
	i8 v4960 = *(i8*)(intptr_t)v4959;
	i8 v4961 = v4960+(+72);
	i2 v4962 = *(i2*)(intptr_t)v4961;
	i8 v4963 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4963)(v4962);

	i8 v4964 = (i8)(intptr_t)c02_s005c;
	i8 v4965 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4965)(v4964);

	i8 v4966 = (i8)(intptr_t)(ws+3280);
	i8 v4967 = *(i8*)(intptr_t)v4966;
	i8 v4968 = *(i8*)(intptr_t)v4967;
	i8 v4969 = (i8)(intptr_t)(f176_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v4969)(v4968);

	i8 v4970 = (i8)(intptr_t)(ws+3280);
	i8 v4971 = *(i8*)(intptr_t)v4970;
	i8 v4972 = *(i8*)(intptr_t)v4971;
	i8 v4973 = (i8)(intptr_t)(f224_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v4973)(v4972);

	i8 v4974 = (i8)(intptr_t)c02_s005d;
	i8 v4975 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4975)(v4974);

	i1 v4976 = (i1)+83;
	i8 v4977 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v4977)(v4976);

	i8 v4978 = (i8)(intptr_t)(ws+3280);
	i8 v4979 = *(i8*)(intptr_t)v4978;
	i8 v4980 = *(i8*)(intptr_t)v4979;
	i8 v4981 = (i8)(intptr_t)(f176_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v4981)(v4980);

	goto c02_040e;

c02_040f:;

	if (v4957 != +28) goto c02_0410;

	i8 v4982 = (i8)(intptr_t)(ws+3280);
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i8 v4984 = v4983+(+24);
	i8 v4985 = *(i8*)(intptr_t)v4984;
	i8 v4986 = (i8)+0;
	if (v4985==v4986) goto c02_0415; else goto c02_0414;

c02_0414:;

	i8 v4987 = (i8)(intptr_t)c02_s005e;
	i8 v4988 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4988)(v4987);

	i8 v4989 = (i8)(intptr_t)(ws+3280);
	i8 v4990 = *(i8*)(intptr_t)v4989;
	i8 v4991 = v4990+(+24);
	i8 v4992 = *(i8*)(intptr_t)v4991;
	i8 v4993 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4993)(v4992);

	i8 v4994 = (i8)(intptr_t)(ws+3288);
	i2 v4995 = *(i2*)(intptr_t)v4994;
	i8 v4996 = (i8)(intptr_t)(f169_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v4996)(v4995);

	i8 v4997 = (i8)(intptr_t)c02_s005f;
	i8 v4998 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v4998)(v4997);

	goto c02_0411;

c02_0415:;

	i1 v4999 = (i1)+2;
	i8 v5000 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5000)(v4999);

	i8 v5001 = (i8)(intptr_t)(ws+3280);
	i8 v5002 = *(i8*)(intptr_t)v5001;
	i8 v5003 = v5002+(+8);
	i8 v5004 = *(i8*)(intptr_t)v5003;
	i8 v5005 = v5004+(+72);
	i2 v5006 = *(i2*)(intptr_t)v5005;
	i8 v5007 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5007)(v5006);

	i1 v5008 = (i1)+0;
	i8 v5009 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5009)(v5008);

	i8 v5010 = (i8)(intptr_t)(ws+3280);
	i8 v5011 = *(i8*)(intptr_t)v5010;
	i8 v5012 = v5011+(+32);
	i2 v5013 = *(i2*)(intptr_t)v5012;
	i8 v5014 = (i8)(intptr_t)(ws+3288);
	i2 v5015 = *(i2*)(intptr_t)v5014;
	i2 v5016 = v5013+v5015;
	i8 v5017 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5017)(v5016);

c02_0411:;

c02_0410:;

c02_040e:;


endsub:;
}

// ArchEndInstruction workspace at ws+3168 length ws+0
void f227_ArchEndInstruction(void) {

endsub:;
}
	void f161_E_nl(void);

// ArchEndGroup workspace at ws+3160 length ws+0
void f228_ArchEndGroup(void) {

	i8 v5018 = (i8)(intptr_t)(f161_E_nl);

	((void(*)(void))(intptr_t)v5018)();

endsub:;
}
const i1 c02_s0060[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f61_SimpleError(i8 /* message */);

// PushVid workspace at ws+3296 length ws+2
void f229_PushVid(i2 p5019 /* vid */) {
	*(i2*)(intptr_t)(ws+3296) = p5019; /*vid */

	i8 v5020 = (i8)(intptr_t)(ws+1192);
	i1 v5021 = *(i1*)(intptr_t)v5020;
	i1 v5022 = (i1)+64;
	if (v5021==v5022) goto c02_0419; else goto c02_041a;

c02_0419:;

	i8 v5023 = (i8)(intptr_t)c02_s0060;
	i8 v5024 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5024)(v5023);

	goto c02_0416;

c02_041a:;

c02_0416:;

	i8 v5025 = (i8)(intptr_t)(ws+3296);
	i2 v5026 = *(i2*)(intptr_t)v5025;
	i8 v5027 = (i8)(intptr_t)(ws+1064);
	i8 v5028 = (i8)(intptr_t)(ws+1192);
	i1 v5029 = *(i1*)(intptr_t)v5028;
	i8 v5030 = v5029;
	i1 v5031 = (i1)+1;
	i8 v5032 = ((i8)v5030)<<v5031;
	i8 v5033 = v5027+v5032;
	*(i2*)(intptr_t)v5033 = v5026;

	i8 v5034 = (i8)(intptr_t)(ws+1192);
	i1 v5035 = *(i1*)(intptr_t)v5034;
	i1 v5036 = v5035+(+1);
	i8 v5037 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5037 = v5036;

endsub:;
}
	void f229_PushVid(i2 /* vid */);

// Push workspace at ws+3288 length ws+2
void f230_Push(i2* p5038 /* vid */) {

	i8 v5039 = (i8)(intptr_t)(ws+1194);
	i2 v5040 = *(i2*)(intptr_t)v5039;
	i8 v5041 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v5041 = v5040;

	i8 v5042 = (i8)(intptr_t)(ws+1194);
	i2 v5043 = *(i2*)(intptr_t)v5042;
	i2 v5044 = v5043+(+1);
	i8 v5045 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v5045 = v5044;

	i8 v5046 = (i8)(intptr_t)(ws+3288);
	i2 v5047 = *(i2*)(intptr_t)v5046;
	i8 v5048 = (i8)(intptr_t)(f229_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v5048)(v5047);

endsub:;
	*p5038 = *(i2*)(intptr_t)(ws+3288);
}
const i1 c02_s0061[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f61_SimpleError(i8 /* message */);

// CheckVarstackUnderflow workspace at ws+3296 length ws+0
void f231_CheckVarstackUnderflow(void) {

	i8 v5049 = (i8)(intptr_t)(ws+1192);
	i1 v5050 = *(i1*)(intptr_t)v5049;
	i1 v5051 = (i1)+0;
	if (v5050==v5051) goto c02_041e; else goto c02_041f;

c02_041e:;

	i8 v5052 = (i8)(intptr_t)c02_s0061;
	i8 v5053 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5053)(v5052);

	goto c02_041b;

c02_041f:;

c02_041b:;

endsub:;
}
	void f231_CheckVarstackUnderflow(void);

// Pop workspace at ws+3288 length ws+2
void f232_Pop(i2* p5054 /* vid */) {

	i8 v5055 = (i8)(intptr_t)(f231_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v5055)();

	i8 v5056 = (i8)(intptr_t)(ws+1192);
	i1 v5057 = *(i1*)(intptr_t)v5056;
	i1 v5058 = v5057+(-1);
	i8 v5059 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5059 = v5058;

	i8 v5060 = (i8)(intptr_t)(ws+1064);
	i8 v5061 = (i8)(intptr_t)(ws+1192);
	i1 v5062 = *(i1*)(intptr_t)v5061;
	i8 v5063 = v5062;
	i1 v5064 = (i1)+1;
	i8 v5065 = ((i8)v5063)<<v5064;
	i8 v5066 = v5060+v5065;
	i2 v5067 = *(i2*)(intptr_t)v5066;
	i8 v5068 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v5068 = v5067;

endsub:;
	*p5054 = *(i2*)(intptr_t)(ws+3288);
}

// ArchEmitMove workspace at ws+3200 length ws+2
void f234_ArchEmitMove(i1 p5081 /* dest */, i1 p5082 /* src */) {
	*(i1*)(intptr_t)(ws+3200) = p5082; /*src */
	*(i1*)(intptr_t)(ws+3201) = p5081; /*dest */

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
const i1 c02_s0062[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0063[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0064[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
const i1 c02_s0065[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f164_E(i8 /* text */);
	void f224_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s0066[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0067[] = { 0x29,0x28,0 };
	void f164_E(i8 /* text */);
const i1 c02_s0068[] = { 0x2c,0x20,0 };
	void f164_E(i8 /* text */);

// comma workspace at ws+3288 length ws+0
void f236_comma(void) {

	i8 v5152 = (i8)(intptr_t)(ws+3280);
	i1 v5153 = *(i1*)(intptr_t)v5152;
	i1 v5154 = (i1)+0;
	if (v5153==v5154) goto c02_0429; else goto c02_042a;

c02_0429:;

	i8 v5155 = (i8)(intptr_t)c02_s0068;
	i8 v5156 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5156)(v5155);

	goto c02_0426;

c02_042a:;

c02_0426:;

	i1 v5157 = (i1)+0;
	i8 v5158 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v5158 = v5157;

endsub:;
}
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f236_comma(void);
const i1 c02_s0069[] = { 0x26,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f232_Pop(i2* /* vid */);
	void f236_comma(void);
const i1 c02_s006a[] = { 0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s006b[] = { 0x29,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
	void f229_PushVid(i2 /* vid */);

// Call workspace at ws+3256 length ws+28
void f235_Call(i8 p5083 /* subr */) {
	*(i8*)(intptr_t)(ws+3256) = p5083; /*subr */

	i8 v5084 = (i8)(intptr_t)(f232_Pop);
	i2 v5085;

	((void(*)(i2* /* vid */))(intptr_t)v5084)(&v5085);
	i8 v5086 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5086 = v5085;

	i8 v5087 = (i8)(intptr_t)(ws+1194);
	i2 v5088 = *(i2*)(intptr_t)v5087;
	i8 v5089 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v5089 = v5088;

	i8 v5090 = (i8)(intptr_t)(ws+1194);
	i2 v5091 = *(i2*)(intptr_t)v5090;
	i8 v5092 = (i8)(intptr_t)(ws+3256);
	i8 v5093 = *(i8*)(intptr_t)v5092;
	i8 v5094 = v5093+(+105);
	i1 v5095 = *(i1*)(intptr_t)v5094;
	i2 v5096 = v5095;
	i2 v5097 = v5091+v5096;
	i8 v5098 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v5098 = v5097;

	i1 v5099 = (i1)+0;
	i8 v5100 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5100 = v5099;

c02_0422:;

	i8 v5101 = (i8)(intptr_t)(ws+3268);
	i1 v5102 = *(i1*)(intptr_t)v5101;
	i8 v5103 = (i8)(intptr_t)(ws+3256);
	i8 v5104 = *(i8*)(intptr_t)v5103;
	i8 v5105 = v5104+(+105);
	i1 v5106 = *(i1*)(intptr_t)v5105;
	if (v5102==v5106) goto c02_0425; else goto c02_0424;

c02_0424:;

	i8 v5107 = (i8)(intptr_t)(ws+3256);
	i8 v5108 = *(i8*)(intptr_t)v5107;
	i8 v5109 = (i8)(intptr_t)(ws+3268);
	i1 v5110 = *(i1*)(intptr_t)v5109;
	i8 v5111 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v5112;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5111)(&v5112, v5110, v5108);
	i8 v5113 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5113 = v5112;

	i8 v5114 = (i8)(intptr_t)c02_s0062;
	i8 v5115 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5115)(v5114);

	i8 v5116 = (i8)(intptr_t)(ws+3272);
	i8 v5117 = *(i8*)(intptr_t)v5116;
	i8 v5118 = *(i8*)(intptr_t)v5117;
	i8 v5119 = v5118+(+42);
	i2 v5120 = *(i2*)(intptr_t)v5119;
	i1 v5121 = v5120;
	i8 v5122 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5122)(v5121);

	i8 v5123 = (i8)(intptr_t)c02_s0063;
	i8 v5124 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5124)(v5123);

	i8 v5125 = (i8)(intptr_t)(ws+3266);
	i2 v5126 = *(i2*)(intptr_t)v5125;
	i8 v5127 = (i8)(intptr_t)(ws+3268);
	i1 v5128 = *(i1*)(intptr_t)v5127;
	i2 v5129 = v5128;
	i2 v5130 = v5126+v5129;
	i8 v5131 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5131)(v5130);

	i8 v5132 = (i8)(intptr_t)c02_s0064;
	i8 v5133 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5133)(v5132);

	i8 v5134 = (i8)(intptr_t)(ws+3268);
	i1 v5135 = *(i1*)(intptr_t)v5134;
	i1 v5136 = v5135+(+1);
	i8 v5137 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5137 = v5136;

	goto c02_0422;

c02_0425:;

	i8 v5138 = (i8)(intptr_t)c02_s0065;
	i8 v5139 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5139)(v5138);

	i8 v5140 = (i8)(intptr_t)(ws+3256);
	i8 v5141 = *(i8*)(intptr_t)v5140;
	i8 v5142 = (i8)(intptr_t)(f224_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v5142)(v5141);

	i8 v5143 = (i8)(intptr_t)c02_s0066;
	i8 v5144 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5144)(v5143);

	i8 v5145 = (i8)(intptr_t)(ws+3264);
	i2 v5146 = *(i2*)(intptr_t)v5145;
	i8 v5147 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5147)(v5146);

	i8 v5148 = (i8)(intptr_t)c02_s0067;
	i8 v5149 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5149)(v5148);

	i1 v5150 = (i1)+1;
	i8 v5151 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v5151 = v5150;


	i1 v5159 = (i1)+0;
	i8 v5160 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5160 = v5159;

c02_042d:;

	i8 v5161 = (i8)(intptr_t)(ws+3268);
	i1 v5162 = *(i1*)(intptr_t)v5161;
	i8 v5163 = (i8)(intptr_t)(ws+3256);
	i8 v5164 = *(i8*)(intptr_t)v5163;
	i8 v5165 = v5164+(+105);
	i1 v5166 = *(i1*)(intptr_t)v5165;
	if (v5162==v5166) goto c02_0430; else goto c02_042f;

c02_042f:;

	i8 v5167 = (i8)(intptr_t)(ws+3256);
	i8 v5168 = *(i8*)(intptr_t)v5167;
	i8 v5169 = (i8)(intptr_t)(ws+3268);
	i1 v5170 = *(i1*)(intptr_t)v5169;
	i8 v5171 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v5172;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5171)(&v5172, v5170, v5168);
	i8 v5173 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5173 = v5172;

	i8 v5174 = (i8)(intptr_t)(f236_comma);

	((void(*)(void))(intptr_t)v5174)();

	i8 v5175 = (i8)(intptr_t)c02_s0069;
	i8 v5176 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5176)(v5175);

	i8 v5177 = (i8)(intptr_t)(ws+3266);
	i2 v5178 = *(i2*)(intptr_t)v5177;
	i8 v5179 = (i8)(intptr_t)(ws+3268);
	i1 v5180 = *(i1*)(intptr_t)v5179;
	i2 v5181 = v5180;
	i2 v5182 = v5178+v5181;
	i8 v5183 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5183)(v5182);

	i8 v5184 = (i8)(intptr_t)(ws+3268);
	i1 v5185 = *(i1*)(intptr_t)v5184;
	i1 v5186 = v5185+(+1);
	i8 v5187 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5187 = v5186;

	goto c02_042d;

c02_0430:;

	i1 v5188 = (i1)+0;
	i8 v5189 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5189 = v5188;

c02_0433:;

	i8 v5190 = (i8)(intptr_t)(ws+3268);
	i1 v5191 = *(i1*)(intptr_t)v5190;
	i8 v5192 = (i8)(intptr_t)(ws+3256);
	i8 v5193 = *(i8*)(intptr_t)v5192;
	i8 v5194 = v5193+(+104);
	i1 v5195 = *(i1*)(intptr_t)v5194;
	if (v5191==v5195) goto c02_0436; else goto c02_0435;

c02_0435:;

	i8 v5196 = (i8)(intptr_t)(f232_Pop);
	i2 v5197;

	((void(*)(i2* /* vid */))(intptr_t)v5196)(&v5197);
	i8 v5198 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5198 = v5197;

	i8 v5199 = (i8)(intptr_t)(f236_comma);

	((void(*)(void))(intptr_t)v5199)();

	i8 v5200 = (i8)(intptr_t)c02_s006a;
	i8 v5201 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5201)(v5200);

	i8 v5202 = (i8)(intptr_t)(ws+3282);
	i2 v5203 = *(i2*)(intptr_t)v5202;
	i8 v5204 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5204)(v5203);

	i8 v5205 = (i8)(intptr_t)(ws+3268);
	i1 v5206 = *(i1*)(intptr_t)v5205;
	i1 v5207 = v5206+(+1);
	i8 v5208 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5208 = v5207;

	goto c02_0433;

c02_0436:;

	i8 v5209 = (i8)(intptr_t)c02_s006b;
	i8 v5210 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5210)(v5209);

	i1 v5211 = (i1)+0;
	i8 v5212 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5212 = v5211;

c02_0439:;

	i8 v5213 = (i8)(intptr_t)(ws+3268);
	i1 v5214 = *(i1*)(intptr_t)v5213;
	i8 v5215 = (i8)(intptr_t)(ws+3256);
	i8 v5216 = *(i8*)(intptr_t)v5215;
	i8 v5217 = v5216+(+105);
	i1 v5218 = *(i1*)(intptr_t)v5217;
	if (v5214==v5218) goto c02_043c; else goto c02_043b;

c02_043b:;

	i8 v5219 = (i8)(intptr_t)(ws+3266);
	i2 v5220 = *(i2*)(intptr_t)v5219;
	i8 v5221 = (i8)(intptr_t)(ws+3268);
	i1 v5222 = *(i1*)(intptr_t)v5221;
	i2 v5223 = v5222;
	i2 v5224 = v5220+v5223;
	i8 v5225 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5225 = v5224;

	i8 v5226 = (i8)(intptr_t)(ws+3282);
	i2 v5227 = *(i2*)(intptr_t)v5226;
	i8 v5228 = (i8)(intptr_t)(f229_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v5228)(v5227);

	i8 v5229 = (i8)(intptr_t)(ws+3268);
	i1 v5230 = *(i1*)(intptr_t)v5229;
	i1 v5231 = v5230+(+1);
	i8 v5232 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5232 = v5231;

	goto c02_0439;

c02_043c:;

endsub:;
}
	void f230_Push(i2* /* vid */);
const i1 c02_s006c[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s006d[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s006e[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s006f[] = { 0x29,0 };
	void f164_E(i8 /* text */);
	void f170_E_i32(i4 /* value */);
const i1 c02_s0070[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// LoadConstant workspace at ws+3256 length ws+10
void f237_LoadConstant(i4 p5233 /* value */, i1 p5234 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5234; /*width */
	*(i4*)(intptr_t)(ws+3260) = p5233; /*value */

	i8 v5235 = (i8)(intptr_t)(f230_Push);
	i2 v5236;

	((void(*)(i2* /* vid */))(intptr_t)v5235)(&v5236);
	i8 v5237 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5237 = v5236;

	i8 v5238 = (i8)(intptr_t)c02_s006c;
	i8 v5239 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5239)(v5238);

	i8 v5240 = (i8)(intptr_t)(ws+3256);
	i1 v5241 = *(i1*)(intptr_t)v5240;
	i8 v5242 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5242)(v5241);

	i8 v5243 = (i8)(intptr_t)c02_s006d;
	i8 v5244 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5244)(v5243);

	i8 v5245 = (i8)(intptr_t)(ws+3264);
	i2 v5246 = *(i2*)(intptr_t)v5245;
	i8 v5247 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5247)(v5246);

	i8 v5248 = (i8)(intptr_t)c02_s006e;
	i8 v5249 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5249)(v5248);

	i8 v5250 = (i8)(intptr_t)(ws+3256);
	i1 v5251 = *(i1*)(intptr_t)v5250;
	i8 v5252 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5252)(v5251);

	i8 v5253 = (i8)(intptr_t)c02_s006f;
	i8 v5254 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5254)(v5253);

	i8 v5255 = (i8)(intptr_t)(ws+3260);
	i4 v5256 = *(i4*)(intptr_t)v5255;
	i8 v5257 = (i8)(intptr_t)(f170_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5257)(v5256);

	i8 v5258 = (i8)(intptr_t)c02_s0070;
	i8 v5259 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5259)(v5258);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f232_Pop(i2* /* vid */);
const i1 c02_s0071[] = { 0x09,0x2a,0x28,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0072[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0073[] = { 0x20,0x3d,0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0074[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// StoreVV workspace at ws+3256 length ws+6
void f238_StoreVV(i1 p5260 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5260; /*width */

	i8 v5261 = (i8)(intptr_t)(f232_Pop);
	i2 v5262;

	((void(*)(i2* /* vid */))(intptr_t)v5261)(&v5262);
	i8 v5263 = (i8)(intptr_t)(ws+3258);
	*(i2*)(intptr_t)v5263 = v5262;

	i8 v5264 = (i8)(intptr_t)(f232_Pop);
	i2 v5265;

	((void(*)(i2* /* vid */))(intptr_t)v5264)(&v5265);
	i8 v5266 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v5266 = v5265;

	i8 v5267 = (i8)(intptr_t)c02_s0071;
	i8 v5268 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5268)(v5267);

	i8 v5269 = (i8)(intptr_t)(ws+3256);
	i1 v5270 = *(i1*)(intptr_t)v5269;
	i8 v5271 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5271)(v5270);

	i8 v5272 = (i8)(intptr_t)c02_s0072;
	i8 v5273 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5273)(v5272);

	i8 v5274 = (i8)(intptr_t)(ws+3258);
	i2 v5275 = *(i2*)(intptr_t)v5274;
	i8 v5276 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5276)(v5275);

	i8 v5277 = (i8)(intptr_t)c02_s0073;
	i8 v5278 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5278)(v5277);

	i8 v5279 = (i8)(intptr_t)(ws+3260);
	i2 v5280 = *(i2*)(intptr_t)v5279;
	i8 v5281 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5281)(v5280);

	i8 v5282 = (i8)(intptr_t)c02_s0074;
	i8 v5283 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5283)(v5282);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s0075[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0076[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0077[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0078[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0079[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// LoadVV workspace at ws+3256 length ws+6
void f239_LoadVV(i1 p5284 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5284; /*width */

	i8 v5285 = (i8)(intptr_t)(f232_Pop);
	i2 v5286;

	((void(*)(i2* /* vid */))(intptr_t)v5285)(&v5286);
	i8 v5287 = (i8)(intptr_t)(ws+3258);
	*(i2*)(intptr_t)v5287 = v5286;

	i8 v5288 = (i8)(intptr_t)(f230_Push);
	i2 v5289;

	((void(*)(i2* /* vid */))(intptr_t)v5288)(&v5289);
	i8 v5290 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v5290 = v5289;

	i8 v5291 = (i8)(intptr_t)c02_s0075;
	i8 v5292 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5292)(v5291);

	i8 v5293 = (i8)(intptr_t)(ws+3256);
	i1 v5294 = *(i1*)(intptr_t)v5293;
	i8 v5295 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5295)(v5294);

	i8 v5296 = (i8)(intptr_t)c02_s0076;
	i8 v5297 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5297)(v5296);

	i8 v5298 = (i8)(intptr_t)(ws+3260);
	i2 v5299 = *(i2*)(intptr_t)v5298;
	i8 v5300 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5300)(v5299);

	i8 v5301 = (i8)(intptr_t)c02_s0077;
	i8 v5302 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5302)(v5301);

	i8 v5303 = (i8)(intptr_t)(ws+3256);
	i1 v5304 = *(i1*)(intptr_t)v5303;
	i8 v5305 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5305)(v5304);

	i8 v5306 = (i8)(intptr_t)c02_s0078;
	i8 v5307 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5307)(v5306);

	i8 v5308 = (i8)(intptr_t)(ws+3258);
	i2 v5309 = *(i2*)(intptr_t)v5308;
	i8 v5310 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5310)(v5309);

	i8 v5311 = (i8)(intptr_t)c02_s0079;
	i8 v5312 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5312)(v5311);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s007a[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s007b[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s007c[] = { 0x20,0x3d,0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f164_E(i8 /* text */);
const i1 c02_s007d[] = { 0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s007e[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Op2VV workspace at ws+3256 length ws+22
void f240_Op2VV(i8 p5313 /* op */, i1 p5314 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5314; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5313; /*op */

	i8 v5315 = (i8)(intptr_t)(f232_Pop);
	i2 v5316;

	((void(*)(i2* /* vid */))(intptr_t)v5315)(&v5316);
	i8 v5317 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5317 = v5316;

	i8 v5318 = (i8)(intptr_t)(f232_Pop);
	i2 v5319;

	((void(*)(i2* /* vid */))(intptr_t)v5318)(&v5319);
	i8 v5320 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5320 = v5319;

	i8 v5321 = (i8)(intptr_t)(f230_Push);
	i2 v5322;

	((void(*)(i2* /* vid */))(intptr_t)v5321)(&v5322);
	i8 v5323 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5323 = v5322;

	i8 v5324 = (i8)(intptr_t)c02_s007a;
	i8 v5325 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5325)(v5324);

	i8 v5326 = (i8)(intptr_t)(ws+3256);
	i1 v5327 = *(i1*)(intptr_t)v5326;
	i8 v5328 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5328)(v5327);

	i8 v5329 = (i8)(intptr_t)c02_s007b;
	i8 v5330 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5330)(v5329);

	i8 v5331 = (i8)(intptr_t)(ws+3276);
	i2 v5332 = *(i2*)(intptr_t)v5331;
	i8 v5333 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5333)(v5332);

	i8 v5334 = (i8)(intptr_t)c02_s007c;
	i8 v5335 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5335)(v5334);

	i8 v5336 = (i8)(intptr_t)(ws+3274);
	i2 v5337 = *(i2*)(intptr_t)v5336;
	i8 v5338 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5338)(v5337);

	i8 v5339 = (i8)(intptr_t)(ws+3264);
	i8 v5340 = *(i8*)(intptr_t)v5339;
	i8 v5341 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5341)(v5340);

	i8 v5342 = (i8)(intptr_t)c02_s007d;
	i8 v5343 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5343)(v5342);

	i8 v5344 = (i8)(intptr_t)(ws+3272);
	i2 v5345 = *(i2*)(intptr_t)v5344;
	i8 v5346 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5346)(v5345);

	i8 v5347 = (i8)(intptr_t)c02_s007e;
	i8 v5348 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5348)(v5347);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s007f[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0080[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0081[] = { 0x20,0x3d,0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f164_E(i8 /* text */);
const i1 c02_s0082[] = { 0x28,0 };
	void f164_E(i8 /* text */);
	void f170_E_i32(i4 /* value */);
const i1 c02_s0083[] = { 0x29,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Op2VC workspace at ws+3256 length ws+24
void f241_Op2VC(i4 p5349 /* rhs */, i8 p5350 /* op */, i1 p5351 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5351; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5350; /*op */
	*(i4*)(intptr_t)(ws+3272) = p5349; /*rhs */

	i8 v5352 = (i8)(intptr_t)(f232_Pop);
	i2 v5353;

	((void(*)(i2* /* vid */))(intptr_t)v5352)(&v5353);
	i8 v5354 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5354 = v5353;

	i8 v5355 = (i8)(intptr_t)(f230_Push);
	i2 v5356;

	((void(*)(i2* /* vid */))(intptr_t)v5355)(&v5356);
	i8 v5357 = (i8)(intptr_t)(ws+3278);
	*(i2*)(intptr_t)v5357 = v5356;

	i8 v5358 = (i8)(intptr_t)c02_s007f;
	i8 v5359 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5359)(v5358);

	i8 v5360 = (i8)(intptr_t)(ws+3256);
	i1 v5361 = *(i1*)(intptr_t)v5360;
	i8 v5362 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5362)(v5361);

	i8 v5363 = (i8)(intptr_t)c02_s0080;
	i8 v5364 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5364)(v5363);

	i8 v5365 = (i8)(intptr_t)(ws+3278);
	i2 v5366 = *(i2*)(intptr_t)v5365;
	i8 v5367 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5367)(v5366);

	i8 v5368 = (i8)(intptr_t)c02_s0081;
	i8 v5369 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5369)(v5368);

	i8 v5370 = (i8)(intptr_t)(ws+3276);
	i2 v5371 = *(i2*)(intptr_t)v5370;
	i8 v5372 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5372)(v5371);

	i8 v5373 = (i8)(intptr_t)(ws+3264);
	i8 v5374 = *(i8*)(intptr_t)v5373;
	i8 v5375 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5375)(v5374);

	i8 v5376 = (i8)(intptr_t)c02_s0082;
	i8 v5377 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5377)(v5376);

	i8 v5378 = (i8)(intptr_t)(ws+3272);
	i4 v5379 = *(i4*)(intptr_t)v5378;
	i8 v5380 = (i8)(intptr_t)(f170_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5380)(v5379);

	i8 v5381 = (i8)(intptr_t)c02_s0083;
	i8 v5382 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5382)(v5381);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s0084[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0085[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0086[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0087[] = { 0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f164_E(i8 /* text */);
const i1 c02_s0088[] = { 0x28,0x73,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0089[] = { 0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s008a[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Op2VVSigned workspace at ws+3256 length ws+22
void f242_Op2VVSigned(i8 p5383 /* op */, i1 p5384 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5384; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5383; /*op */

	i8 v5385 = (i8)(intptr_t)(f232_Pop);
	i2 v5386;

	((void(*)(i2* /* vid */))(intptr_t)v5385)(&v5386);
	i8 v5387 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5387 = v5386;

	i8 v5388 = (i8)(intptr_t)(f232_Pop);
	i2 v5389;

	((void(*)(i2* /* vid */))(intptr_t)v5388)(&v5389);
	i8 v5390 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5390 = v5389;

	i8 v5391 = (i8)(intptr_t)(f230_Push);
	i2 v5392;

	((void(*)(i2* /* vid */))(intptr_t)v5391)(&v5392);
	i8 v5393 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5393 = v5392;

	i8 v5394 = (i8)(intptr_t)c02_s0084;
	i8 v5395 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5395)(v5394);

	i8 v5396 = (i8)(intptr_t)(ws+3256);
	i1 v5397 = *(i1*)(intptr_t)v5396;
	i8 v5398 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5398)(v5397);

	i8 v5399 = (i8)(intptr_t)c02_s0085;
	i8 v5400 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5400)(v5399);

	i8 v5401 = (i8)(intptr_t)(ws+3276);
	i2 v5402 = *(i2*)(intptr_t)v5401;
	i8 v5403 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5403)(v5402);

	i8 v5404 = (i8)(intptr_t)c02_s0086;
	i8 v5405 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5405)(v5404);

	i8 v5406 = (i8)(intptr_t)(ws+3256);
	i1 v5407 = *(i1*)(intptr_t)v5406;
	i8 v5408 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5408)(v5407);

	i8 v5409 = (i8)(intptr_t)c02_s0087;
	i8 v5410 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5410)(v5409);

	i8 v5411 = (i8)(intptr_t)(ws+3274);
	i2 v5412 = *(i2*)(intptr_t)v5411;
	i8 v5413 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5413)(v5412);

	i8 v5414 = (i8)(intptr_t)(ws+3264);
	i8 v5415 = *(i8*)(intptr_t)v5414;
	i8 v5416 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5416)(v5415);

	i8 v5417 = (i8)(intptr_t)c02_s0088;
	i8 v5418 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5418)(v5417);

	i8 v5419 = (i8)(intptr_t)(ws+3256);
	i1 v5420 = *(i1*)(intptr_t)v5419;
	i8 v5421 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5421)(v5420);

	i8 v5422 = (i8)(intptr_t)c02_s0089;
	i8 v5423 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5423)(v5422);

	i8 v5424 = (i8)(intptr_t)(ws+3272);
	i2 v5425 = *(i2*)(intptr_t)v5424;
	i8 v5426 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5426)(v5425);

	i8 v5427 = (i8)(intptr_t)c02_s008a;
	i8 v5428 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5428)(v5427);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s008b[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s008c[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s008d[] = { 0x20,0x3d,0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f164_E(i8 /* text */);
const i1 c02_s008e[] = { 0x28,0 };
	void f164_E(i8 /* text */);
	void f170_E_i32(i4 /* value */);
const i1 c02_s008f[] = { 0x29,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Op2VCSigned workspace at ws+3256 length ws+24
void f243_Op2VCSigned(i4 p5429 /* rhs */, i8 p5430 /* op */, i1 p5431 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5431; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5430; /*op */
	*(i4*)(intptr_t)(ws+3272) = p5429; /*rhs */

	i8 v5432 = (i8)(intptr_t)(f232_Pop);
	i2 v5433;

	((void(*)(i2* /* vid */))(intptr_t)v5432)(&v5433);
	i8 v5434 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5434 = v5433;

	i8 v5435 = (i8)(intptr_t)(f230_Push);
	i2 v5436;

	((void(*)(i2* /* vid */))(intptr_t)v5435)(&v5436);
	i8 v5437 = (i8)(intptr_t)(ws+3278);
	*(i2*)(intptr_t)v5437 = v5436;

	i8 v5438 = (i8)(intptr_t)c02_s008b;
	i8 v5439 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5439)(v5438);

	i8 v5440 = (i8)(intptr_t)(ws+3256);
	i1 v5441 = *(i1*)(intptr_t)v5440;
	i8 v5442 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5442)(v5441);

	i8 v5443 = (i8)(intptr_t)c02_s008c;
	i8 v5444 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5444)(v5443);

	i8 v5445 = (i8)(intptr_t)(ws+3278);
	i2 v5446 = *(i2*)(intptr_t)v5445;
	i8 v5447 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5447)(v5446);

	i8 v5448 = (i8)(intptr_t)c02_s008d;
	i8 v5449 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5449)(v5448);

	i8 v5450 = (i8)(intptr_t)(ws+3276);
	i2 v5451 = *(i2*)(intptr_t)v5450;
	i8 v5452 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5452)(v5451);

	i8 v5453 = (i8)(intptr_t)(ws+3264);
	i8 v5454 = *(i8*)(intptr_t)v5453;
	i8 v5455 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5455)(v5454);

	i8 v5456 = (i8)(intptr_t)c02_s008e;
	i8 v5457 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5457)(v5456);

	i8 v5458 = (i8)(intptr_t)(ws+3272);
	i4 v5459 = *(i4*)(intptr_t)v5458;
	i8 v5460 = (i8)(intptr_t)(f170_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5460)(v5459);

	i8 v5461 = (i8)(intptr_t)c02_s008f;
	i8 v5462 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5462)(v5461);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s0090[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0091[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0092[] = { 0x20,0x3d,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s0093[] = { 0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0094[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Op1V workspace at ws+3256 length ws+20
void f244_Op1V(i8 p5463 /* op */, i1 p5464 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5464; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5463; /*op */

	i8 v5465 = (i8)(intptr_t)(f232_Pop);
	i2 v5466;

	((void(*)(i2* /* vid */))(intptr_t)v5465)(&v5466);
	i8 v5467 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5467 = v5466;

	i8 v5468 = (i8)(intptr_t)(f230_Push);
	i2 v5469;

	((void(*)(i2* /* vid */))(intptr_t)v5468)(&v5469);
	i8 v5470 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5470 = v5469;

	i8 v5471 = (i8)(intptr_t)c02_s0090;
	i8 v5472 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5472)(v5471);

	i8 v5473 = (i8)(intptr_t)(ws+3256);
	i1 v5474 = *(i1*)(intptr_t)v5473;
	i8 v5475 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5475)(v5474);

	i8 v5476 = (i8)(intptr_t)c02_s0091;
	i8 v5477 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5477)(v5476);

	i8 v5478 = (i8)(intptr_t)(ws+3274);
	i2 v5479 = *(i2*)(intptr_t)v5478;
	i8 v5480 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5480)(v5479);

	i8 v5481 = (i8)(intptr_t)c02_s0092;
	i8 v5482 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5482)(v5481);

	i8 v5483 = (i8)(intptr_t)(ws+3264);
	i8 v5484 = *(i8*)(intptr_t)v5483;
	i8 v5485 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5485)(v5484);

	i8 v5486 = (i8)(intptr_t)c02_s0093;
	i8 v5487 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5487)(v5486);

	i8 v5488 = (i8)(intptr_t)(ws+3272);
	i2 v5489 = *(i2*)(intptr_t)v5488;
	i8 v5490 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5490)(v5489);

	i8 v5491 = (i8)(intptr_t)c02_s0094;
	i8 v5492 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5492)(v5491);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s0095[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0096[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0097[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s0098[] = { 0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0099[] = { 0x29,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s009a[] = { 0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s009b[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Shift workspace at ws+3256 length ws+30
void f245_Shift(i8 p5493 /* op */, i8 p5494 /* type */, i1 p5495 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5495; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5494; /*type */
	*(i8*)(intptr_t)(ws+3272) = p5493; /*op */

	i8 v5496 = (i8)(intptr_t)(f232_Pop);
	i2 v5497;

	((void(*)(i2* /* vid */))(intptr_t)v5496)(&v5497);
	i8 v5498 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v5498 = v5497;

	i8 v5499 = (i8)(intptr_t)(f232_Pop);
	i2 v5500;

	((void(*)(i2* /* vid */))(intptr_t)v5499)(&v5500);
	i8 v5501 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5501 = v5500;

	i8 v5502 = (i8)(intptr_t)(f230_Push);
	i2 v5503;

	((void(*)(i2* /* vid */))(intptr_t)v5502)(&v5503);
	i8 v5504 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v5504 = v5503;

	i8 v5505 = (i8)(intptr_t)c02_s0095;
	i8 v5506 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5506)(v5505);

	i8 v5507 = (i8)(intptr_t)(ws+3256);
	i1 v5508 = *(i1*)(intptr_t)v5507;
	i8 v5509 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5509)(v5508);

	i8 v5510 = (i8)(intptr_t)c02_s0096;
	i8 v5511 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5511)(v5510);

	i8 v5512 = (i8)(intptr_t)(ws+3284);
	i2 v5513 = *(i2*)(intptr_t)v5512;
	i8 v5514 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5514)(v5513);

	i8 v5515 = (i8)(intptr_t)c02_s0097;
	i8 v5516 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5516)(v5515);

	i8 v5517 = (i8)(intptr_t)(ws+3264);
	i8 v5518 = *(i8*)(intptr_t)v5517;
	i8 v5519 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5519)(v5518);

	i8 v5520 = (i8)(intptr_t)c02_s0098;
	i8 v5521 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5521)(v5520);

	i8 v5522 = (i8)(intptr_t)(ws+3282);
	i2 v5523 = *(i2*)(intptr_t)v5522;
	i8 v5524 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5524)(v5523);

	i8 v5525 = (i8)(intptr_t)c02_s0099;
	i8 v5526 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5526)(v5525);

	i8 v5527 = (i8)(intptr_t)(ws+3272);
	i8 v5528 = *(i8*)(intptr_t)v5527;
	i8 v5529 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5529)(v5528);

	i8 v5530 = (i8)(intptr_t)c02_s009a;
	i8 v5531 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5531)(v5530);

	i8 v5532 = (i8)(intptr_t)(ws+3280);
	i2 v5533 = *(i2*)(intptr_t)v5532;
	i8 v5534 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5534)(v5533);

	i8 v5535 = (i8)(intptr_t)c02_s009b;
	i8 v5536 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5536)(v5535);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f232_Pop(i2* /* vid */);
const i1 c02_s009c[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f164_E(i8 /* text */);
const i1 c02_s009d[] = { 0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s009e[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s009f[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00a0[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Branch workspace at ws+3256 length ws+20
void f246_Branch(i8 p5537 /* op */, i8 p5538 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p5538; /*node */
	*(i8*)(intptr_t)(ws+3264) = p5537; /*op */

	i8 v5539 = (i8)(intptr_t)(f232_Pop);
	i2 v5540;

	((void(*)(i2* /* vid */))(intptr_t)v5539)(&v5540);
	i8 v5541 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5541 = v5540;

	i8 v5542 = (i8)(intptr_t)(f232_Pop);
	i2 v5543;

	((void(*)(i2* /* vid */))(intptr_t)v5542)(&v5543);
	i8 v5544 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5544 = v5543;

	i8 v5545 = (i8)(intptr_t)c02_s009c;
	i8 v5546 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5546)(v5545);

	i8 v5547 = (i8)(intptr_t)(ws+3274);
	i2 v5548 = *(i2*)(intptr_t)v5547;
	i8 v5549 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5549)(v5548);

	i8 v5550 = (i8)(intptr_t)(ws+3264);
	i8 v5551 = *(i8*)(intptr_t)v5550;
	i8 v5552 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5552)(v5551);

	i8 v5553 = (i8)(intptr_t)c02_s009d;
	i8 v5554 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5554)(v5553);

	i8 v5555 = (i8)(intptr_t)(ws+3272);
	i2 v5556 = *(i2*)(intptr_t)v5555;
	i8 v5557 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5557)(v5556);

	i8 v5558 = (i8)(intptr_t)c02_s009e;
	i8 v5559 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5559)(v5558);

	i8 v5560 = (i8)(intptr_t)(ws+3256);
	i8 v5561 = *(i8*)(intptr_t)v5560;
	i2 v5562 = *(i2*)(intptr_t)v5561;
	i8 v5563 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5563)(v5562);

	i8 v5564 = (i8)(intptr_t)c02_s009f;
	i8 v5565 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5565)(v5564);

	i8 v5566 = (i8)(intptr_t)(ws+3256);
	i8 v5567 = *(i8*)(intptr_t)v5566;
	i8 v5568 = v5567+(+2);
	i2 v5569 = *(i2*)(intptr_t)v5568;
	i8 v5570 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5570)(v5569);

	i8 v5571 = (i8)(intptr_t)c02_s00a0;
	i8 v5572 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5572)(v5571);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f232_Pop(i2* /* vid */);
const i1 c02_s00a1[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00a2[] = { 0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
	void f164_E(i8 /* text */);
const i1 c02_s00a3[] = { 0x28,0x73,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00a4[] = { 0x29,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00a5[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00a6[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00a7[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// BranchSigned workspace at ws+3256 length ws+28
void f247_BranchSigned(i8 p5573 /* op */, i1 p5574 /* width */, i8 p5575 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p5575; /*node */
	*(i1*)(intptr_t)(ws+3264) = p5574; /*width */
	*(i8*)(intptr_t)(ws+3272) = p5573; /*op */

	i8 v5576 = (i8)(intptr_t)(f232_Pop);
	i2 v5577;

	((void(*)(i2* /* vid */))(intptr_t)v5576)(&v5577);
	i8 v5578 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v5578 = v5577;

	i8 v5579 = (i8)(intptr_t)(f232_Pop);
	i2 v5580;

	((void(*)(i2* /* vid */))(intptr_t)v5579)(&v5580);
	i8 v5581 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5581 = v5580;

	i8 v5582 = (i8)(intptr_t)c02_s00a1;
	i8 v5583 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5583)(v5582);

	i8 v5584 = (i8)(intptr_t)(ws+3264);
	i1 v5585 = *(i1*)(intptr_t)v5584;
	i8 v5586 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5586)(v5585);

	i8 v5587 = (i8)(intptr_t)c02_s00a2;
	i8 v5588 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5588)(v5587);

	i8 v5589 = (i8)(intptr_t)(ws+3282);
	i2 v5590 = *(i2*)(intptr_t)v5589;
	i8 v5591 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5591)(v5590);

	i8 v5592 = (i8)(intptr_t)(ws+3272);
	i8 v5593 = *(i8*)(intptr_t)v5592;
	i8 v5594 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5594)(v5593);

	i8 v5595 = (i8)(intptr_t)c02_s00a3;
	i8 v5596 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5596)(v5595);

	i8 v5597 = (i8)(intptr_t)(ws+3264);
	i1 v5598 = *(i1*)(intptr_t)v5597;
	i8 v5599 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5599)(v5598);

	i8 v5600 = (i8)(intptr_t)c02_s00a4;
	i8 v5601 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5601)(v5600);

	i8 v5602 = (i8)(intptr_t)(ws+3280);
	i2 v5603 = *(i2*)(intptr_t)v5602;
	i8 v5604 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5604)(v5603);

	i8 v5605 = (i8)(intptr_t)c02_s00a5;
	i8 v5606 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5606)(v5605);

	i8 v5607 = (i8)(intptr_t)(ws+3256);
	i8 v5608 = *(i8*)(intptr_t)v5607;
	i2 v5609 = *(i2*)(intptr_t)v5608;
	i8 v5610 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5610)(v5609);

	i8 v5611 = (i8)(intptr_t)c02_s00a6;
	i8 v5612 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5612)(v5611);

	i8 v5613 = (i8)(intptr_t)(ws+3256);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	i8 v5615 = v5614+(+2);
	i2 v5616 = *(i2*)(intptr_t)v5615;
	i8 v5617 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5617)(v5616);

	i8 v5618 = (i8)(intptr_t)c02_s00a7;
	i8 v5619 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5619)(v5618);

endsub:;
}
const i1 c02_s00a8[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00a9[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// BranchConstant workspace at ws+3256 length ws+16
void f248_BranchConstant(i4 p5620 /* rhs */, i4 p5621 /* lhs */, i8 p5622 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p5622; /*node */
	*(i4*)(intptr_t)(ws+3264) = p5621; /*lhs */
	*(i4*)(intptr_t)(ws+3268) = p5620; /*rhs */

	i8 v5623 = (i8)(intptr_t)c02_s00a8;
	i8 v5624 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5624)(v5623);

	i8 v5625 = (i8)(intptr_t)(ws+3264);
	i4 v5626 = *(i4*)(intptr_t)v5625;
	i8 v5627 = (i8)(intptr_t)(ws+3268);
	i4 v5628 = *(i4*)(intptr_t)v5627;
	if (v5626==v5628) goto c02_0440; else goto c02_0441;

c02_0440:;

	i8 v5629 = (i8)(intptr_t)(ws+3256);
	i8 v5630 = *(i8*)(intptr_t)v5629;
	i2 v5631 = *(i2*)(intptr_t)v5630;
	i8 v5632 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5632)(v5631);

	goto c02_043d;

c02_0441:;

	i8 v5633 = (i8)(intptr_t)(ws+3256);
	i8 v5634 = *(i8*)(intptr_t)v5633;
	i8 v5635 = v5634+(+2);
	i2 v5636 = *(i2*)(intptr_t)v5635;
	i8 v5637 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5637)(v5636);

c02_043d:;

	i8 v5638 = (i8)(intptr_t)c02_s00a9;
	i8 v5639 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5639)(v5638);

endsub:;
}
const i1 c02_s00aa[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00ab[] = { 0x20,0x21,0x3d,0x20,0 };
	void f164_E(i8 /* text */);
	void f170_E_i32(i4 /* value */);
const i1 c02_s00ac[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00ad[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Whencase workspace at ws+3256 length ws+8
void f249_Whencase(i2 p5640 /* falselabel */, i4 p5641 /* value */) {
	*(i4*)(intptr_t)(ws+3256) = p5641; /*value */
	*(i2*)(intptr_t)(ws+3260) = p5640; /*falselabel */

	i8 v5642 = (i8)(intptr_t)(ws+1064);
	i8 v5643 = (i8)(intptr_t)(ws+1192);
	i1 v5644 = *(i1*)(intptr_t)v5643;
	i1 v5645 = v5644+(-1);
	i8 v5646 = v5645;
	i1 v5647 = (i1)+1;
	i8 v5648 = ((i8)v5646)<<v5647;
	i8 v5649 = v5642+v5648;
	i2 v5650 = *(i2*)(intptr_t)v5649;
	i8 v5651 = (i8)(intptr_t)(ws+3262);
	*(i2*)(intptr_t)v5651 = v5650;

	i8 v5652 = (i8)(intptr_t)c02_s00aa;
	i8 v5653 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5653)(v5652);

	i8 v5654 = (i8)(intptr_t)(ws+3262);
	i2 v5655 = *(i2*)(intptr_t)v5654;
	i8 v5656 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5656)(v5655);

	i8 v5657 = (i8)(intptr_t)c02_s00ab;
	i8 v5658 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5658)(v5657);

	i8 v5659 = (i8)(intptr_t)(ws+3256);
	i4 v5660 = *(i4*)(intptr_t)v5659;
	i8 v5661 = (i8)(intptr_t)(f170_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5661)(v5660);

	i8 v5662 = (i8)(intptr_t)c02_s00ac;
	i8 v5663 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5663)(v5662);

	i8 v5664 = (i8)(intptr_t)(ws+3260);
	i2 v5665 = *(i2*)(intptr_t)v5664;
	i8 v5666 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5666)(v5665);

	i8 v5667 = (i8)(intptr_t)c02_s00ad;
	i8 v5668 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5668)(v5667);

endsub:;
}
	void f232_Pop(i2* /* vid */);
	void f230_Push(i2* /* vid */);
const i1 c02_s00ae[] = { 0x09,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00af[] = { 0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00b0[] = { 0x20,0x3d,0x20,0 };
	void f164_E(i8 /* text */);
const i1 c02_s00b1[] = { 0x28,0x73,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00b2[] = { 0x29,0x28,0x73,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00b3[] = { 0x29,0 };
	void f164_E(i8 /* text */);
const i1 c02_s00b4[] = { 0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00b5[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// Cast workspace at ws+3256 length ws+8
void f250_Cast(i1 p5669 /* sext */, i1 p5670 /* dest */, i1 p5671 /* src */) {
	*(i1*)(intptr_t)(ws+3256) = p5671; /*src */
	*(i1*)(intptr_t)(ws+3257) = p5670; /*dest */
	*(i1*)(intptr_t)(ws+3258) = p5669; /*sext */

	i8 v5672 = (i8)(intptr_t)(f232_Pop);
	i2 v5673;

	((void(*)(i2* /* vid */))(intptr_t)v5672)(&v5673);
	i8 v5674 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v5674 = v5673;

	i8 v5675 = (i8)(intptr_t)(f230_Push);
	i2 v5676;

	((void(*)(i2* /* vid */))(intptr_t)v5675)(&v5676);
	i8 v5677 = (i8)(intptr_t)(ws+3262);
	*(i2*)(intptr_t)v5677 = v5676;

	i8 v5678 = (i8)(intptr_t)c02_s00ae;
	i8 v5679 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5679)(v5678);

	i8 v5680 = (i8)(intptr_t)(ws+3257);
	i1 v5681 = *(i1*)(intptr_t)v5680;
	i8 v5682 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5682)(v5681);

	i8 v5683 = (i8)(intptr_t)c02_s00af;
	i8 v5684 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5684)(v5683);

	i8 v5685 = (i8)(intptr_t)(ws+3262);
	i2 v5686 = *(i2*)(intptr_t)v5685;
	i8 v5687 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5687)(v5686);

	i8 v5688 = (i8)(intptr_t)c02_s00b0;
	i8 v5689 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5689)(v5688);

	i8 v5690 = (i8)(intptr_t)(ws+3258);
	i1 v5691 = *(i1*)(intptr_t)v5690;
	i1 v5692 = (i1)+0;
	if (v5691==v5692) goto c02_0446; else goto c02_0445;

c02_0445:;

	i8 v5693 = (i8)(intptr_t)c02_s00b1;
	i8 v5694 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5694)(v5693);

	i8 v5695 = (i8)(intptr_t)(ws+3257);
	i1 v5696 = *(i1*)(intptr_t)v5695;
	i8 v5697 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5697)(v5696);

	i8 v5698 = (i8)(intptr_t)c02_s00b2;
	i8 v5699 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5699)(v5698);

	i8 v5700 = (i8)(intptr_t)(ws+3256);
	i1 v5701 = *(i1*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5702)(v5701);

	i8 v5703 = (i8)(intptr_t)c02_s00b3;
	i8 v5704 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5704)(v5703);

	goto c02_0442;

c02_0446:;

c02_0442:;

	i8 v5705 = (i8)(intptr_t)c02_s00b4;
	i8 v5706 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5706)(v5705);

	i8 v5707 = (i8)(intptr_t)(ws+3260);
	i2 v5708 = *(i2*)(intptr_t)v5707;
	i8 v5709 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5709)(v5708);

	i8 v5710 = (i8)(intptr_t)c02_s00b5;
	i8 v5711 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5711)(v5710);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
const i1 c02_s00b6[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f164_E(i8 /* text */);
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);
	void f173_E_h16(i2 /* value */);
const i1 c02_s00b7[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f164_E(i8 /* text */);
	void f159_E_comma(void);
const i1 c02_s00b8[] = { 0x30,0x78,0 };
	void f164_E(i8 /* text */);
	void f172_E_h8(i1 /* value */);
	void f159_E_comma(void);
const i1 c02_s00b9[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
	void f179_EmitterPopChunk(i1 /* type */);

// E_string workspace at ws+3264 length ws+12
void f251_E_string(i2* p5714 /* sid */, i8 p5715 /* text */) {
	*(i8*)(intptr_t)(ws+3264) = p5715; /*text */

	i8 v5716 = (i8)(intptr_t)(ws+1208);
	i2 v5717 = *(i2*)(intptr_t)v5716;
	i8 v5718 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5718 = v5717;

	i8 v5719 = (i8)(intptr_t)(ws+1208);
	i2 v5720 = *(i2*)(intptr_t)v5719;
	i2 v5721 = v5720+(+1);
	i8 v5722 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5722 = v5721;

	i8 v5723 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v5723)();

	i8 v5724 = (i8)(intptr_t)(ws+40);
	i8 v5725 = *(i8*)(intptr_t)v5724;
	i8 v5726 = v5725+(+72);
	i2 v5727 = *(i2*)(intptr_t)v5726;
	i8 v5728 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5728)(v5727);

	i8 v5729 = (i8)(intptr_t)c02_s00b6;
	i8 v5730 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5730)(v5729);

	i1 v5731 = (i1)+3;
	i8 v5732 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5732)(v5731);

	i1 v5733 = (i1)+115;
	i8 v5734 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5734)(v5733);

	i8 v5735 = (i8)(intptr_t)(ws+3272);
	i2 v5736 = *(i2*)(intptr_t)v5735;
	i8 v5737 = (i8)(intptr_t)(f173_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v5737)(v5736);

	i8 v5738 = (i8)(intptr_t)c02_s00b7;
	i8 v5739 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5739)(v5738);

	i1 v5740 = (i1)+1;
	i8 v5741 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v5741 = v5740;

c02_0447:;

	i8 v5742 = (i8)(intptr_t)(ws+3264);
	i8 v5743 = *(i8*)(intptr_t)v5742;
	i1 v5744 = *(i1*)(intptr_t)v5743;
	i8 v5745 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v5745 = v5744;

	i8 v5746 = (i8)(intptr_t)(ws+3264);
	i8 v5747 = *(i8*)(intptr_t)v5746;
	i8 v5748 = v5747+(+1);
	i8 v5749 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5749 = v5748;

	i8 v5750 = (i8)(intptr_t)(ws+3275);
	i1 v5751 = *(i1*)(intptr_t)v5750;
	i1 v5752 = (i1)+0;
	if (v5751==v5752) goto c02_044c; else goto c02_044d;

c02_044c:;

	goto c02_0448;

c02_044d:;

c02_0449:;

	i8 v5753 = (i8)(intptr_t)(ws+3274);
	i1 v5754 = *(i1*)(intptr_t)v5753;
	i1 v5755 = (i1)+0;
	if (v5754==v5755) goto c02_0451; else goto c02_0452;

c02_0451:;

	i8 v5756 = (i8)(intptr_t)(f159_E_comma);

	((void(*)(void))(intptr_t)v5756)();

	goto c02_044e;

c02_0452:;

c02_044e:;

	i1 v5757 = (i1)+0;
	i8 v5758 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v5758 = v5757;

	i8 v5759 = (i8)(intptr_t)c02_s00b8;
	i8 v5760 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5760)(v5759);

	i8 v5761 = (i8)(intptr_t)(ws+3275);
	i1 v5762 = *(i1*)(intptr_t)v5761;
	i8 v5763 = (i8)(intptr_t)(f172_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v5763)(v5762);

	goto c02_0447;

c02_0448:;

	i8 v5764 = (i8)(intptr_t)(ws+3274);
	i1 v5765 = *(i1*)(intptr_t)v5764;
	i1 v5766 = (i1)+0;
	if (v5765==v5766) goto c02_0456; else goto c02_0457;

c02_0456:;

	i8 v5767 = (i8)(intptr_t)(f159_E_comma);

	((void(*)(void))(intptr_t)v5767)();

	goto c02_0453;

c02_0457:;

c02_0453:;

	i8 v5768 = (i8)(intptr_t)c02_s00b9;
	i8 v5769 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5769)(v5768);

	i1 v5770 = (i1)+83;
	i8 v5771 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v5771)(v5770);

endsub:;
	*p5714 = *(i2*)(intptr_t)(ws+3272);
}
const i1 c02_s00ba[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f164_E(i8 /* text */);
	void f159_E_comma(void);
const i1 c02_s00bb[] = { 0x30,0x78,0 };
	void f164_E(i8 /* text */);
	void f172_E_h8(i1 /* value */);
const i1 c02_s00bc[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f164_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+3272 length ws+1
void f252_FlushInitialiserBuffer(void) {

	i8 v5774 = (i8)(intptr_t)(ws+1218);
	i1 v5775 = *(i1*)(intptr_t)v5774;
	i1 v5776 = (i1)+0;
	if (v5775==v5776) goto c02_045c; else goto c02_045b;

c02_045b:;

	i8 v5777 = (i8)(intptr_t)c02_s00ba;
	i8 v5778 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5778)(v5777);

	i1 v5779 = (i1)+0;
	i8 v5780 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v5780 = v5779;

c02_045f:;

	i8 v5781 = (i8)(intptr_t)(ws+3272);
	i1 v5782 = *(i1*)(intptr_t)v5781;
	i8 v5783 = (i8)(intptr_t)(ws+1218);
	i1 v5784 = *(i1*)(intptr_t)v5783;
	if (v5782==v5784) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5785 = (i8)(intptr_t)(ws+3272);
	i1 v5786 = *(i1*)(intptr_t)v5785;
	i1 v5787 = (i1)+0;
	if (v5786==v5787) goto c02_0467; else goto c02_0466;

c02_0466:;

	i8 v5788 = (i8)(intptr_t)(f159_E_comma);

	((void(*)(void))(intptr_t)v5788)();

	goto c02_0463;

c02_0467:;

c02_0463:;

	i8 v5789 = (i8)(intptr_t)c02_s00bb;
	i8 v5790 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5790)(v5789);

	i8 v5791 = (i8)(intptr_t)(ws+1210);
	i8 v5792 = (i8)(intptr_t)(ws+3272);
	i1 v5793 = *(i1*)(intptr_t)v5792;
	i8 v5794 = v5793;
	i8 v5795 = v5791+v5794;
	i1 v5796 = *(i1*)(intptr_t)v5795;
	i8 v5797 = (i8)(intptr_t)(f172_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v5797)(v5796);

	i8 v5798 = (i8)(intptr_t)(ws+3272);
	i1 v5799 = *(i1*)(intptr_t)v5798;
	i1 v5800 = v5799+(+1);
	i8 v5801 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v5801 = v5800;

	goto c02_045f;

c02_0462:;

	i8 v5802 = (i8)(intptr_t)c02_s00bc;
	i8 v5803 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v5803)(v5802);

	i1 v5804 = (i1)+0;
	i8 v5805 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5805 = v5804;

	goto c02_0458;

c02_045c:;

c02_0458:;

endsub:;
}
	void f252_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+3256 length ws+9
void f253_E_bytes(i1 p5806 /* width */, i8 p5807 /* ptr */) {
	*(i8*)(intptr_t)(ws+3256) = p5807; /*ptr */
	*(i1*)(intptr_t)(ws+3264) = p5806; /*width */

c02_046a:;

	i8 v5808 = (i8)(intptr_t)(ws+3264);
	i1 v5809 = *(i1*)(intptr_t)v5808;
	i1 v5810 = (i1)+0;
	if (v5809==v5810) goto c02_046d; else goto c02_046c;

c02_046c:;

	i8 v5811 = (i8)(intptr_t)(ws+3256);
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i1 v5813 = *(i1*)(intptr_t)v5812;
	i8 v5814 = (i8)(intptr_t)(ws+1210);
	i8 v5815 = (i8)(intptr_t)(ws+1218);
	i1 v5816 = *(i1*)(intptr_t)v5815;
	i8 v5817 = v5816;
	i8 v5818 = v5814+v5817;
	*(i1*)(intptr_t)v5818 = v5813;

	i8 v5819 = (i8)(intptr_t)(ws+3256);
	i8 v5820 = *(i8*)(intptr_t)v5819;
	i8 v5821 = v5820+(+1);
	i8 v5822 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5822 = v5821;

	i8 v5823 = (i8)(intptr_t)(ws+1218);
	i1 v5824 = *(i1*)(intptr_t)v5823;
	i1 v5825 = v5824+(+1);
	i8 v5826 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5826 = v5825;

	i8 v5827 = (i8)(intptr_t)(ws+1218);
	i1 v5828 = *(i1*)(intptr_t)v5827;
	i1 v5829 = (i1)+8;
	if (v5828==v5829) goto c02_0471; else goto c02_0472;

c02_0471:;

	i8 v5830 = (i8)(intptr_t)(f252_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v5830)();

	goto c02_046e;

c02_0472:;

c02_046e:;

	i8 v5831 = (i8)(intptr_t)(ws+3264);
	i1 v5832 = *(i1*)(intptr_t)v5831;
	i1 v5833 = v5832+(-1);
	i8 v5834 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5834 = v5833;

	goto c02_046a;

c02_046d:;

endsub:;
}
	void f59_StartError(void);
const i1 c02_s00bd[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f60_EndError(void);

// CheckBufferAlignment workspace at ws+3256 length ws+0
void f254_CheckBufferAlignment(void) {

	i8 v5835 = (i8)(intptr_t)(ws+1218);
	i1 v5836 = *(i1*)(intptr_t)v5835;
	i1 v5837 = (i1)+0;
	if (v5836==v5837) goto c02_0477; else goto c02_0476;

c02_0476:;

	i8 v5838 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v5838)();

	i8 v5839 = (i8)(intptr_t)c02_s00bd;
	i8 v5840 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5840)(v5839);

	i8 v5841 = (i8)(intptr_t)(ws+1218);
	i1 v5842 = *(i1*)(intptr_t)v5841;
	i8 v5843 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v5843)(v5842);

	i8 v5844 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v5844)();

	goto c02_0473;

c02_0477:;

c02_0473:;

endsub:;
}
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+3248 length ws+48
void f255_MatchPredicate(i1* p5845 /* matches */, i8 p5846 /* n */, i1 p5847 /* rule */) {
	*(i1*)(intptr_t)(ws+3248) = p5847; /*rule */
	*(i8*)(intptr_t)(ws+3256) = p5846; /*n */

	i8 v5848 = (i8)(intptr_t)(ws+3256);
	i8 v5849 = *(i8*)(intptr_t)v5848;
	i8 v5850 = (i8)+24;
	i8 v5851 = (i8)(intptr_t)(ws+3272);
	i8 v5852 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v5852)(v5851, v5850, v5849);

	i1 v5853 = (i1)+0;
	i8 v5854 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5854 = v5853;

	i8 v5855 = (i8)(intptr_t)(ws+3248);
	i1 v5856 = *(i1*)(intptr_t)v5855;

c02_0478:;


endsub:;
	*p5845 = *(i1*)(intptr_t)(ws+3264);
}

// Emitter workspace at ws+3256 length ws+0
void f257_Emitter(void) {

endsub:;
}
	void f248_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+3256 length ws+0
void f258_emit_0(void) {

	i8 v5904 = (i8)(intptr_t)(ws+3176);
	i8 v5905 = *(i8*)(intptr_t)v5904;
	i8 v5906 = v5905+(+16);
	i8 v5907 = *(i8*)(intptr_t)v5906;
	i8 v5908 = (i8)(intptr_t)(ws+3200);
	i8 v5909 = *(i8*)(intptr_t)v5908;
	i4 v5910 = *(i4*)(intptr_t)v5909;
	i8 v5911 = (i8)(intptr_t)(ws+3216);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i4 v5913 = *(i4*)(intptr_t)v5912;
	i8 v5914 = (i8)(intptr_t)(f248_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v5914)(v5913, v5910, v5907);

endsub:;
}
const i1 c02_s00be[] = { 0x2b,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_1 workspace at ws+3256 length ws+0
void f259_emit_1(void) {

	i1 v5915 = (i1)+1;
	i8 v5916 = (i8)(intptr_t)c02_s00be;
	i8 v5917 = (i8)(intptr_t)(ws+3216);
	i8 v5918 = *(i8*)(intptr_t)v5917;
	i4 v5919 = *(i4*)(intptr_t)v5918;
	i8 v5920 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5920)(v5919, v5916, v5915);

endsub:;
}
const i1 c02_s00bf[] = { 0x2b,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_2 workspace at ws+3256 length ws+0
void f260_emit_2(void) {

	i1 v5921 = (i1)+2;
	i8 v5922 = (i8)(intptr_t)c02_s00bf;
	i8 v5923 = (i8)(intptr_t)(ws+3216);
	i8 v5924 = *(i8*)(intptr_t)v5923;
	i4 v5925 = *(i4*)(intptr_t)v5924;
	i8 v5926 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5926)(v5925, v5922, v5921);

endsub:;
}
const i1 c02_s00c0[] = { 0x2b,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_3 workspace at ws+3256 length ws+0
void f261_emit_3(void) {

	i1 v5927 = (i1)+4;
	i8 v5928 = (i8)(intptr_t)c02_s00c0;
	i8 v5929 = (i8)(intptr_t)(ws+3216);
	i8 v5930 = *(i8*)(intptr_t)v5929;
	i4 v5931 = *(i4*)(intptr_t)v5930;
	i8 v5932 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5932)(v5931, v5928, v5927);

endsub:;
}
const i1 c02_s00c1[] = { 0x2b,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_4 workspace at ws+3256 length ws+0
void f262_emit_4(void) {

	i1 v5933 = (i1)+8;
	i8 v5934 = (i8)(intptr_t)c02_s00c1;
	i8 v5935 = (i8)(intptr_t)(ws+3216);
	i8 v5936 = *(i8*)(intptr_t)v5935;
	i4 v5937 = *(i4*)(intptr_t)v5936;
	i8 v5938 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5938)(v5937, v5934, v5933);

endsub:;
}
const i1 c02_s00c2[] = { 0x2d,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+3256 length ws+0
void f263_emit_5(void) {

	i1 v5939 = (i1)+1;
	i8 v5940 = (i8)(intptr_t)c02_s00c2;
	i8 v5941 = (i8)(intptr_t)(ws+3216);
	i8 v5942 = *(i8*)(intptr_t)v5941;
	i4 v5943 = *(i4*)(intptr_t)v5942;
	i8 v5944 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5944)(v5943, v5940, v5939);

endsub:;
}
const i1 c02_s00c3[] = { 0x2d,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+3256 length ws+0
void f264_emit_6(void) {

	i1 v5945 = (i1)+2;
	i8 v5946 = (i8)(intptr_t)c02_s00c3;
	i8 v5947 = (i8)(intptr_t)(ws+3216);
	i8 v5948 = *(i8*)(intptr_t)v5947;
	i4 v5949 = *(i4*)(intptr_t)v5948;
	i8 v5950 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5950)(v5949, v5946, v5945);

endsub:;
}
const i1 c02_s00c4[] = { 0x2d,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+3256 length ws+0
void f265_emit_7(void) {

	i1 v5951 = (i1)+4;
	i8 v5952 = (i8)(intptr_t)c02_s00c4;
	i8 v5953 = (i8)(intptr_t)(ws+3216);
	i8 v5954 = *(i8*)(intptr_t)v5953;
	i4 v5955 = *(i4*)(intptr_t)v5954;
	i8 v5956 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5956)(v5955, v5952, v5951);

endsub:;
}
const i1 c02_s00c5[] = { 0x2d,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+3256 length ws+0
void f266_emit_8(void) {

	i1 v5957 = (i1)+8;
	i8 v5958 = (i8)(intptr_t)c02_s00c5;
	i8 v5959 = (i8)(intptr_t)(ws+3216);
	i8 v5960 = *(i8*)(intptr_t)v5959;
	i4 v5961 = *(i4*)(intptr_t)v5960;
	i8 v5962 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5962)(v5961, v5958, v5957);

endsub:;
}
const i1 c02_s00c6[] = { 0x2a,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+3256 length ws+0
void f267_emit_9(void) {

	i1 v5963 = (i1)+1;
	i8 v5964 = (i8)(intptr_t)c02_s00c6;
	i8 v5965 = (i8)(intptr_t)(ws+3216);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	i4 v5967 = *(i4*)(intptr_t)v5966;
	i8 v5968 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5968)(v5967, v5964, v5963);

endsub:;
}
const i1 c02_s00c7[] = { 0x2a,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+3256 length ws+0
void f268_emit_10(void) {

	i1 v5969 = (i1)+2;
	i8 v5970 = (i8)(intptr_t)c02_s00c7;
	i8 v5971 = (i8)(intptr_t)(ws+3216);
	i8 v5972 = *(i8*)(intptr_t)v5971;
	i4 v5973 = *(i4*)(intptr_t)v5972;
	i8 v5974 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5974)(v5973, v5970, v5969);

endsub:;
}
const i1 c02_s00c8[] = { 0x2a,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+3256 length ws+0
void f269_emit_11(void) {

	i1 v5975 = (i1)+4;
	i8 v5976 = (i8)(intptr_t)c02_s00c8;
	i8 v5977 = (i8)(intptr_t)(ws+3216);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i4 v5979 = *(i4*)(intptr_t)v5978;
	i8 v5980 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5980)(v5979, v5976, v5975);

endsub:;
}
const i1 c02_s00c9[] = { 0x2a,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+3256 length ws+0
void f270_emit_12(void) {

	i1 v5981 = (i1)+8;
	i8 v5982 = (i8)(intptr_t)c02_s00c9;
	i8 v5983 = (i8)(intptr_t)(ws+3216);
	i8 v5984 = *(i8*)(intptr_t)v5983;
	i4 v5985 = *(i4*)(intptr_t)v5984;
	i8 v5986 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5986)(v5985, v5982, v5981);

endsub:;
}
const i1 c02_s00ca[] = { 0x2f,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+3256 length ws+0
void f271_emit_13(void) {

	i1 v5987 = (i1)+1;
	i8 v5988 = (i8)(intptr_t)c02_s00ca;
	i8 v5989 = (i8)(intptr_t)(ws+3216);
	i8 v5990 = *(i8*)(intptr_t)v5989;
	i4 v5991 = *(i4*)(intptr_t)v5990;
	i8 v5992 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5992)(v5991, v5988, v5987);

endsub:;
}
const i1 c02_s00cb[] = { 0x2f,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+3256 length ws+0
void f272_emit_14(void) {

	i1 v5993 = (i1)+2;
	i8 v5994 = (i8)(intptr_t)c02_s00cb;
	i8 v5995 = (i8)(intptr_t)(ws+3216);
	i8 v5996 = *(i8*)(intptr_t)v5995;
	i4 v5997 = *(i4*)(intptr_t)v5996;
	i8 v5998 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5998)(v5997, v5994, v5993);

endsub:;
}
const i1 c02_s00cc[] = { 0x2f,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+3256 length ws+0
void f273_emit_15(void) {

	i1 v5999 = (i1)+4;
	i8 v6000 = (i8)(intptr_t)c02_s00cc;
	i8 v6001 = (i8)(intptr_t)(ws+3216);
	i8 v6002 = *(i8*)(intptr_t)v6001;
	i4 v6003 = *(i4*)(intptr_t)v6002;
	i8 v6004 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6004)(v6003, v6000, v5999);

endsub:;
}
const i1 c02_s00cd[] = { 0x2f,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+3256 length ws+0
void f274_emit_16(void) {

	i1 v6005 = (i1)+8;
	i8 v6006 = (i8)(intptr_t)c02_s00cd;
	i8 v6007 = (i8)(intptr_t)(ws+3216);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i4 v6009 = *(i4*)(intptr_t)v6008;
	i8 v6010 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6010)(v6009, v6006, v6005);

endsub:;
}
const i1 c02_s00ce[] = { 0x25,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+3256 length ws+0
void f275_emit_17(void) {

	i1 v6011 = (i1)+1;
	i8 v6012 = (i8)(intptr_t)c02_s00ce;
	i8 v6013 = (i8)(intptr_t)(ws+3216);
	i8 v6014 = *(i8*)(intptr_t)v6013;
	i4 v6015 = *(i4*)(intptr_t)v6014;
	i8 v6016 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6016)(v6015, v6012, v6011);

endsub:;
}
const i1 c02_s00cf[] = { 0x25,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+3256 length ws+0
void f276_emit_18(void) {

	i1 v6017 = (i1)+2;
	i8 v6018 = (i8)(intptr_t)c02_s00cf;
	i8 v6019 = (i8)(intptr_t)(ws+3216);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i4 v6021 = *(i4*)(intptr_t)v6020;
	i8 v6022 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6022)(v6021, v6018, v6017);

endsub:;
}
const i1 c02_s00d0[] = { 0x25,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+3256 length ws+0
void f277_emit_19(void) {

	i1 v6023 = (i1)+4;
	i8 v6024 = (i8)(intptr_t)c02_s00d0;
	i8 v6025 = (i8)(intptr_t)(ws+3216);
	i8 v6026 = *(i8*)(intptr_t)v6025;
	i4 v6027 = *(i4*)(intptr_t)v6026;
	i8 v6028 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6028)(v6027, v6024, v6023);

endsub:;
}
const i1 c02_s00d1[] = { 0x25,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+3256 length ws+0
void f278_emit_20(void) {

	i1 v6029 = (i1)+8;
	i8 v6030 = (i8)(intptr_t)c02_s00d1;
	i8 v6031 = (i8)(intptr_t)(ws+3216);
	i8 v6032 = *(i8*)(intptr_t)v6031;
	i4 v6033 = *(i4*)(intptr_t)v6032;
	i8 v6034 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6034)(v6033, v6030, v6029);

endsub:;
}
const i1 c02_s00d2[] = { 0x2f,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+3256 length ws+0
void f279_emit_21(void) {

	i1 v6035 = (i1)+1;
	i8 v6036 = (i8)(intptr_t)c02_s00d2;
	i8 v6037 = (i8)(intptr_t)(ws+3216);
	i8 v6038 = *(i8*)(intptr_t)v6037;
	i4 v6039 = *(i4*)(intptr_t)v6038;
	i8 v6040 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6040)(v6039, v6036, v6035);

endsub:;
}
const i1 c02_s00d3[] = { 0x2f,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+3256 length ws+0
void f280_emit_22(void) {

	i1 v6041 = (i1)+2;
	i8 v6042 = (i8)(intptr_t)c02_s00d3;
	i8 v6043 = (i8)(intptr_t)(ws+3216);
	i8 v6044 = *(i8*)(intptr_t)v6043;
	i4 v6045 = *(i4*)(intptr_t)v6044;
	i8 v6046 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6046)(v6045, v6042, v6041);

endsub:;
}
const i1 c02_s00d4[] = { 0x2f,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+3256 length ws+0
void f281_emit_23(void) {

	i1 v6047 = (i1)+4;
	i8 v6048 = (i8)(intptr_t)c02_s00d4;
	i8 v6049 = (i8)(intptr_t)(ws+3216);
	i8 v6050 = *(i8*)(intptr_t)v6049;
	i4 v6051 = *(i4*)(intptr_t)v6050;
	i8 v6052 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6052)(v6051, v6048, v6047);

endsub:;
}
const i1 c02_s00d5[] = { 0x2f,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+3256 length ws+0
void f282_emit_24(void) {

	i1 v6053 = (i1)+8;
	i8 v6054 = (i8)(intptr_t)c02_s00d5;
	i8 v6055 = (i8)(intptr_t)(ws+3216);
	i8 v6056 = *(i8*)(intptr_t)v6055;
	i4 v6057 = *(i4*)(intptr_t)v6056;
	i8 v6058 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6058)(v6057, v6054, v6053);

endsub:;
}
const i1 c02_s00d6[] = { 0x25,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+3256 length ws+0
void f283_emit_25(void) {

	i1 v6059 = (i1)+1;
	i8 v6060 = (i8)(intptr_t)c02_s00d6;
	i8 v6061 = (i8)(intptr_t)(ws+3216);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i4 v6063 = *(i4*)(intptr_t)v6062;
	i8 v6064 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6064)(v6063, v6060, v6059);

endsub:;
}
const i1 c02_s00d7[] = { 0x25,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+3256 length ws+0
void f284_emit_26(void) {

	i1 v6065 = (i1)+2;
	i8 v6066 = (i8)(intptr_t)c02_s00d7;
	i8 v6067 = (i8)(intptr_t)(ws+3216);
	i8 v6068 = *(i8*)(intptr_t)v6067;
	i4 v6069 = *(i4*)(intptr_t)v6068;
	i8 v6070 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6070)(v6069, v6066, v6065);

endsub:;
}
const i1 c02_s00d8[] = { 0x25,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+3256 length ws+0
void f285_emit_27(void) {

	i1 v6071 = (i1)+4;
	i8 v6072 = (i8)(intptr_t)c02_s00d8;
	i8 v6073 = (i8)(intptr_t)(ws+3216);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i4 v6075 = *(i4*)(intptr_t)v6074;
	i8 v6076 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6076)(v6075, v6072, v6071);

endsub:;
}
const i1 c02_s00d9[] = { 0x25,0 };
	void f243_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+3256 length ws+0
void f286_emit_28(void) {

	i1 v6077 = (i1)+8;
	i8 v6078 = (i8)(intptr_t)c02_s00d9;
	i8 v6079 = (i8)(intptr_t)(ws+3216);
	i8 v6080 = *(i8*)(intptr_t)v6079;
	i4 v6081 = *(i4*)(intptr_t)v6080;
	i8 v6082 = (i8)(intptr_t)(f243_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6082)(v6081, v6078, v6077);

endsub:;
}
const i1 c02_s00da[] = { 0x26,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+3256 length ws+0
void f287_emit_29(void) {

	i1 v6083 = (i1)+1;
	i8 v6084 = (i8)(intptr_t)c02_s00da;
	i8 v6085 = (i8)(intptr_t)(ws+3216);
	i8 v6086 = *(i8*)(intptr_t)v6085;
	i4 v6087 = *(i4*)(intptr_t)v6086;
	i8 v6088 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6088)(v6087, v6084, v6083);

endsub:;
}
const i1 c02_s00db[] = { 0x26,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+3256 length ws+0
void f288_emit_30(void) {

	i1 v6089 = (i1)+2;
	i8 v6090 = (i8)(intptr_t)c02_s00db;
	i8 v6091 = (i8)(intptr_t)(ws+3216);
	i8 v6092 = *(i8*)(intptr_t)v6091;
	i4 v6093 = *(i4*)(intptr_t)v6092;
	i8 v6094 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6094)(v6093, v6090, v6089);

endsub:;
}
const i1 c02_s00dc[] = { 0x26,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+3256 length ws+0
void f289_emit_31(void) {

	i1 v6095 = (i1)+4;
	i8 v6096 = (i8)(intptr_t)c02_s00dc;
	i8 v6097 = (i8)(intptr_t)(ws+3216);
	i8 v6098 = *(i8*)(intptr_t)v6097;
	i4 v6099 = *(i4*)(intptr_t)v6098;
	i8 v6100 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6100)(v6099, v6096, v6095);

endsub:;
}
const i1 c02_s00dd[] = { 0x26,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+3256 length ws+0
void f290_emit_32(void) {

	i1 v6101 = (i1)+8;
	i8 v6102 = (i8)(intptr_t)c02_s00dd;
	i8 v6103 = (i8)(intptr_t)(ws+3216);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i4 v6105 = *(i4*)(intptr_t)v6104;
	i8 v6106 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6106)(v6105, v6102, v6101);

endsub:;
}
const i1 c02_s00de[] = { 0x7c,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+3256 length ws+0
void f291_emit_33(void) {

	i1 v6107 = (i1)+1;
	i8 v6108 = (i8)(intptr_t)c02_s00de;
	i8 v6109 = (i8)(intptr_t)(ws+3216);
	i8 v6110 = *(i8*)(intptr_t)v6109;
	i4 v6111 = *(i4*)(intptr_t)v6110;
	i8 v6112 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6112)(v6111, v6108, v6107);

endsub:;
}
const i1 c02_s00df[] = { 0x7c,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+3256 length ws+0
void f292_emit_34(void) {

	i1 v6113 = (i1)+2;
	i8 v6114 = (i8)(intptr_t)c02_s00df;
	i8 v6115 = (i8)(intptr_t)(ws+3216);
	i8 v6116 = *(i8*)(intptr_t)v6115;
	i4 v6117 = *(i4*)(intptr_t)v6116;
	i8 v6118 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6118)(v6117, v6114, v6113);

endsub:;
}
const i1 c02_s00e0[] = { 0x7c,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+3256 length ws+0
void f293_emit_35(void) {

	i1 v6119 = (i1)+4;
	i8 v6120 = (i8)(intptr_t)c02_s00e0;
	i8 v6121 = (i8)(intptr_t)(ws+3216);
	i8 v6122 = *(i8*)(intptr_t)v6121;
	i4 v6123 = *(i4*)(intptr_t)v6122;
	i8 v6124 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6124)(v6123, v6120, v6119);

endsub:;
}
const i1 c02_s00e1[] = { 0x7c,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+3256 length ws+0
void f294_emit_36(void) {

	i1 v6125 = (i1)+8;
	i8 v6126 = (i8)(intptr_t)c02_s00e1;
	i8 v6127 = (i8)(intptr_t)(ws+3216);
	i8 v6128 = *(i8*)(intptr_t)v6127;
	i4 v6129 = *(i4*)(intptr_t)v6128;
	i8 v6130 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6130)(v6129, v6126, v6125);

endsub:;
}
const i1 c02_s00e2[] = { 0x5e,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+3256 length ws+0
void f295_emit_37(void) {

	i1 v6131 = (i1)+1;
	i8 v6132 = (i8)(intptr_t)c02_s00e2;
	i8 v6133 = (i8)(intptr_t)(ws+3216);
	i8 v6134 = *(i8*)(intptr_t)v6133;
	i4 v6135 = *(i4*)(intptr_t)v6134;
	i8 v6136 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6136)(v6135, v6132, v6131);

endsub:;
}
const i1 c02_s00e3[] = { 0x5e,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+3256 length ws+0
void f296_emit_38(void) {

	i1 v6137 = (i1)+2;
	i8 v6138 = (i8)(intptr_t)c02_s00e3;
	i8 v6139 = (i8)(intptr_t)(ws+3216);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i4 v6141 = *(i4*)(intptr_t)v6140;
	i8 v6142 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6142)(v6141, v6138, v6137);

endsub:;
}
const i1 c02_s00e4[] = { 0x5e,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+3256 length ws+0
void f297_emit_39(void) {

	i1 v6143 = (i1)+4;
	i8 v6144 = (i8)(intptr_t)c02_s00e4;
	i8 v6145 = (i8)(intptr_t)(ws+3216);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i4 v6147 = *(i4*)(intptr_t)v6146;
	i8 v6148 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6148)(v6147, v6144, v6143);

endsub:;
}
const i1 c02_s00e5[] = { 0x5e,0 };
	void f241_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+3256 length ws+0
void f298_emit_40(void) {

	i1 v6149 = (i1)+8;
	i8 v6150 = (i8)(intptr_t)c02_s00e5;
	i8 v6151 = (i8)(intptr_t)(ws+3216);
	i8 v6152 = *(i8*)(intptr_t)v6151;
	i4 v6153 = *(i4*)(intptr_t)v6152;
	i8 v6154 = (i8)(intptr_t)(f241_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6154)(v6153, v6150, v6149);

endsub:;
}
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00e6[] = { 0x3a,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_43 workspace at ws+3256 length ws+0
void f299_emit_43(void) {

	i8 v6155 = (i8)(intptr_t)(ws+3184);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	i2 v6157 = *(i2*)(intptr_t)v6156;
	i8 v6158 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v6158)(v6157);

	i8 v6159 = (i8)(intptr_t)c02_s00e6;
	i8 v6160 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6160)(v6159);

endsub:;
}
const i1 c02_s00e7[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f164_E(i8 /* text */);
	void f175_E_labelref(i2 /* labelid */);
const i1 c02_s00e8[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_44 workspace at ws+3256 length ws+0
void f300_emit_44(void) {

	i8 v6161 = (i8)(intptr_t)c02_s00e7;
	i8 v6162 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6162)(v6161);

	i8 v6163 = (i8)(intptr_t)(ws+3184);
	i8 v6164 = *(i8*)(intptr_t)v6163;
	i2 v6165 = *(i2*)(intptr_t)v6164;
	i8 v6166 = (i8)(intptr_t)(f175_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v6166)(v6165);

	i8 v6167 = (i8)(intptr_t)c02_s00e8;
	i8 v6168 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6168)(v6167);

endsub:;
}
const i1 c02_s00e9[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_45 workspace at ws+3256 length ws+0
void f301_emit_45(void) {

	i8 v6169 = (i8)(intptr_t)c02_s00e9;
	i8 v6170 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6170)(v6169);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
const i1 c02_s00ea[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s00eb[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f164_E(i8 /* text */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);
const i1 c02_s00ec[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f164_E(i8 /* text */);
	void f155_E_b8(i1 /* byte */);
	void f156_E_b16(i2 /* word */);
	void f155_E_b8(i1 /* byte */);
const i1 c02_s00ed[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f164_E(i8 /* text */);
	void f176_E_subref(i8 /* subr */);
const i1 c02_s00ee[] = { 0x28,0 };
	void f164_E(i8 /* text */);
const i1 c02_s00ef[] = { 0x2c,0x20,0 };
	void f164_E(i8 /* text */);

// comma workspace at ws+3280 length ws+0
void f303_comma(void) {

	i8 v6221 = (i8)(intptr_t)(ws+3256);
	i1 v6222 = *(i1*)(intptr_t)v6221;
	i1 v6223 = (i1)+0;
	if (v6222==v6223) goto c02_0487; else goto c02_0488;

c02_0487:;

	i8 v6224 = (i8)(intptr_t)c02_s00ef;
	i8 v6225 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6225)(v6224);

	goto c02_0484;

c02_0488:;

c02_0484:;

	i1 v6226 = (i1)+0;
	i8 v6227 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6227 = v6226;

endsub:;
}
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f230_Push(i2* /* vid */);
	void f303_comma(void);
const i1 c02_s00f0[] = { 0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00f1[] = { 0x2a,0x20,0x70,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00f2[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s00f3[] = { 0x20,0x2a,0x2f,0 };
	void f164_E(i8 /* text */);
	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f230_Push(i2* /* vid */);
	void f303_comma(void);
const i1 c02_s00f4[] = { 0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00f5[] = { 0x20,0x70,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00f6[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s00f7[] = { 0x20,0x2a,0x2f,0 };
	void f164_E(i8 /* text */);
const i1 c02_s00f8[] = { 0x76,0x6f,0x69,0x64,0 };
	void f164_E(i8 /* text */);
const i1 c02_s00f9[] = { 0x29,0x20,0x7b,0x0a,0 };
	void f164_E(i8 /* text */);
	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f232_Pop(i2* /* vid */);
const i1 c02_s00fa[] = { 0x09,0x2a,0x28,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s00fb[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f164_E(i8 /* text */);
	void f226_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s00fc[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s00fd[] = { 0x3b,0x20,0x2f,0x2a,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s00fe[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_46 workspace at ws+3256 length ws+18
void f302_emit_46(void) {

	i8 v6171 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v6171)();

	i8 v6172 = (i8)(intptr_t)(ws+3184);
	i8 v6173 = *(i8*)(intptr_t)v6172;
	i8 v6174 = *(i8*)(intptr_t)v6173;
	i8 v6175 = v6174+(+72);
	i2 v6176 = *(i2*)(intptr_t)v6175;
	i8 v6177 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6177)(v6176);

	i8 v6178 = (i8)(intptr_t)c02_s00ea;
	i8 v6179 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6179)(v6178);

	i8 v6180 = (i8)(intptr_t)(ws+3184);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	i8 v6182 = *(i8*)(intptr_t)v6181;
	i8 v6183 = *(i8*)(intptr_t)v6182;
	i8 v6184 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6184)(v6183);

	i8 v6185 = (i8)(intptr_t)c02_s00eb;
	i8 v6186 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6186)(v6185);

	i1 v6187 = (i1)+2;
	i8 v6188 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6188)(v6187);

	i8 v6189 = (i8)(intptr_t)(ws+3184);
	i8 v6190 = *(i8*)(intptr_t)v6189;
	i8 v6191 = *(i8*)(intptr_t)v6190;
	i8 v6192 = v6191+(+72);
	i2 v6193 = *(i2*)(intptr_t)v6192;
	i8 v6194 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6194)(v6193);

	i1 v6195 = (i1)+0;
	i8 v6196 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6196)(v6195);

	i2 v6197 = (i2)+0;
	i8 v6198 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6198)(v6197);

	i8 v6199 = (i8)(intptr_t)c02_s00ec;
	i8 v6200 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6200)(v6199);

	i1 v6201 = (i1)+5;
	i8 v6202 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6202)(v6201);

	i8 v6203 = (i8)(intptr_t)(ws+3184);
	i8 v6204 = *(i8*)(intptr_t)v6203;
	i8 v6205 = *(i8*)(intptr_t)v6204;
	i8 v6206 = v6205+(+72);
	i2 v6207 = *(i2*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6208)(v6207);

	i1 v6209 = (i1)+0;
	i8 v6210 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6210)(v6209);

	i8 v6211 = (i8)(intptr_t)c02_s00ed;
	i8 v6212 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6212)(v6211);

	i8 v6213 = (i8)(intptr_t)(ws+3184);
	i8 v6214 = *(i8*)(intptr_t)v6213;
	i8 v6215 = *(i8*)(intptr_t)v6214;
	i8 v6216 = (i8)(intptr_t)(f176_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v6216)(v6215);

	i8 v6217 = (i8)(intptr_t)c02_s00ee;
	i8 v6218 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6218)(v6217);

	i1 v6219 = (i1)+1;
	i8 v6220 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6220 = v6219;


	i1 v6228 = (i1)+0;
	i8 v6229 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6229 = v6228;

c02_048b:;

	i8 v6230 = (i8)(intptr_t)(ws+3257);
	i1 v6231 = *(i1*)(intptr_t)v6230;
	i8 v6232 = (i8)(intptr_t)(ws+3184);
	i8 v6233 = *(i8*)(intptr_t)v6232;
	i8 v6234 = *(i8*)(intptr_t)v6233;
	i8 v6235 = v6234+(+105);
	i1 v6236 = *(i1*)(intptr_t)v6235;
	if (v6231==v6236) goto c02_048e; else goto c02_048d;

c02_048d:;

	i8 v6237 = (i8)(intptr_t)(ws+3184);
	i8 v6238 = *(i8*)(intptr_t)v6237;
	i8 v6239 = *(i8*)(intptr_t)v6238;
	i8 v6240 = (i8)(intptr_t)(ws+3257);
	i1 v6241 = *(i1*)(intptr_t)v6240;
	i8 v6242 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v6243;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6242)(&v6243, v6241, v6239);
	i8 v6244 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6244 = v6243;

	i8 v6245 = (i8)(intptr_t)(f230_Push);
	i2 v6246;

	((void(*)(i2* /* vid */))(intptr_t)v6245)(&v6246);
	i8 v6247 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6247 = v6246;

	i8 v6248 = (i8)(intptr_t)(f303_comma);

	((void(*)(void))(intptr_t)v6248)();

	i8 v6249 = (i8)(intptr_t)c02_s00f0;
	i8 v6250 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6250)(v6249);

	i8 v6251 = (i8)(intptr_t)(ws+3264);
	i8 v6252 = *(i8*)(intptr_t)v6251;
	i8 v6253 = *(i8*)(intptr_t)v6252;
	i8 v6254 = v6253+(+42);
	i2 v6255 = *(i2*)(intptr_t)v6254;
	i1 v6256 = v6255;
	i8 v6257 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6257)(v6256);

	i8 v6258 = (i8)(intptr_t)c02_s00f1;
	i8 v6259 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6259)(v6258);

	i8 v6260 = (i8)(intptr_t)(ws+3272);
	i2 v6261 = *(i2*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6262)(v6261);

	i8 v6263 = (i8)(intptr_t)c02_s00f2;
	i8 v6264 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6264)(v6263);

	i8 v6265 = (i8)(intptr_t)(ws+3264);
	i8 v6266 = *(i8*)(intptr_t)v6265;
	i8 v6267 = v6266+(+48);
	i8 v6268 = *(i8*)(intptr_t)v6267;
	i8 v6269 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6269)(v6268);

	i8 v6270 = (i8)(intptr_t)c02_s00f3;
	i8 v6271 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6271)(v6270);

	i8 v6272 = (i8)(intptr_t)(ws+3257);
	i1 v6273 = *(i1*)(intptr_t)v6272;
	i1 v6274 = v6273+(+1);
	i8 v6275 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6275 = v6274;

	goto c02_048b;

c02_048e:;

	i8 v6276 = (i8)(intptr_t)(ws+3184);
	i8 v6277 = *(i8*)(intptr_t)v6276;
	i8 v6278 = *(i8*)(intptr_t)v6277;
	i8 v6279 = v6278+(+104);
	i1 v6280 = *(i1*)(intptr_t)v6279;
	i8 v6281 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6281 = v6280;

c02_0491:;

	i8 v6282 = (i8)(intptr_t)(ws+3257);
	i1 v6283 = *(i1*)(intptr_t)v6282;
	i1 v6284 = (i1)+0;
	if (v6283==v6284) goto c02_0494; else goto c02_0493;

c02_0493:;

	i8 v6285 = (i8)(intptr_t)(ws+3257);
	i1 v6286 = *(i1*)(intptr_t)v6285;
	i1 v6287 = v6286+(-1);
	i8 v6288 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6288 = v6287;

	i8 v6289 = (i8)(intptr_t)(ws+3184);
	i8 v6290 = *(i8*)(intptr_t)v6289;
	i8 v6291 = *(i8*)(intptr_t)v6290;
	i8 v6292 = (i8)(intptr_t)(ws+3257);
	i1 v6293 = *(i1*)(intptr_t)v6292;
	i8 v6294 = (i8)(intptr_t)(f84_GetInputParameter);
	i8 v6295;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6294)(&v6295, v6293, v6291);
	i8 v6296 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6296 = v6295;

	i8 v6297 = (i8)(intptr_t)(f230_Push);
	i2 v6298;

	((void(*)(i2* /* vid */))(intptr_t)v6297)(&v6298);
	i8 v6299 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6299 = v6298;

	i8 v6300 = (i8)(intptr_t)(f303_comma);

	((void(*)(void))(intptr_t)v6300)();

	i8 v6301 = (i8)(intptr_t)c02_s00f4;
	i8 v6302 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6302)(v6301);

	i8 v6303 = (i8)(intptr_t)(ws+3264);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = *(i8*)(intptr_t)v6304;
	i8 v6306 = v6305+(+42);
	i2 v6307 = *(i2*)(intptr_t)v6306;
	i1 v6308 = v6307;
	i8 v6309 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6309)(v6308);

	i8 v6310 = (i8)(intptr_t)c02_s00f5;
	i8 v6311 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6311)(v6310);

	i8 v6312 = (i8)(intptr_t)(ws+3272);
	i2 v6313 = *(i2*)(intptr_t)v6312;
	i8 v6314 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6314)(v6313);

	i8 v6315 = (i8)(intptr_t)c02_s00f6;
	i8 v6316 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6316)(v6315);

	i8 v6317 = (i8)(intptr_t)(ws+3264);
	i8 v6318 = *(i8*)(intptr_t)v6317;
	i8 v6319 = v6318+(+48);
	i8 v6320 = *(i8*)(intptr_t)v6319;
	i8 v6321 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6321)(v6320);

	i8 v6322 = (i8)(intptr_t)c02_s00f7;
	i8 v6323 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6323)(v6322);

	goto c02_0491;

c02_0494:;

	i8 v6324 = (i8)(intptr_t)(ws+3184);
	i8 v6325 = *(i8*)(intptr_t)v6324;
	i8 v6326 = *(i8*)(intptr_t)v6325;
	i8 v6327 = v6326+(+104);
	i1 v6328 = *(i1*)(intptr_t)v6327;
	i8 v6329 = (i8)(intptr_t)(ws+3184);
	i8 v6330 = *(i8*)(intptr_t)v6329;
	i8 v6331 = *(i8*)(intptr_t)v6330;
	i8 v6332 = v6331+(+105);
	i1 v6333 = *(i1*)(intptr_t)v6332;
	i1 v6334 = v6328+v6333;
	i1 v6335 = (i1)+0;
	if (v6334==v6335) goto c02_0498; else goto c02_0499;

c02_0498:;

	i8 v6336 = (i8)(intptr_t)c02_s00f8;
	i8 v6337 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6337)(v6336);

	goto c02_0495;

c02_0499:;

c02_0495:;

	i8 v6338 = (i8)(intptr_t)c02_s00f9;
	i8 v6339 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6339)(v6338);

	i1 v6340 = (i1)+0;
	i8 v6341 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6341 = v6340;

c02_049c:;

	i8 v6342 = (i8)(intptr_t)(ws+3257);
	i1 v6343 = *(i1*)(intptr_t)v6342;
	i8 v6344 = (i8)(intptr_t)(ws+3184);
	i8 v6345 = *(i8*)(intptr_t)v6344;
	i8 v6346 = *(i8*)(intptr_t)v6345;
	i8 v6347 = v6346+(+104);
	i1 v6348 = *(i1*)(intptr_t)v6347;
	if (v6343==v6348) goto c02_049f; else goto c02_049e;

c02_049e:;

	i8 v6349 = (i8)(intptr_t)(ws+3184);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i8 v6351 = *(i8*)(intptr_t)v6350;
	i8 v6352 = (i8)(intptr_t)(ws+3257);
	i1 v6353 = *(i1*)(intptr_t)v6352;
	i8 v6354 = (i8)(intptr_t)(f84_GetInputParameter);
	i8 v6355;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6354)(&v6355, v6353, v6351);
	i8 v6356 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6356 = v6355;

	i8 v6357 = (i8)(intptr_t)(f232_Pop);
	i2 v6358;

	((void(*)(i2* /* vid */))(intptr_t)v6357)(&v6358);
	i8 v6359 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6359 = v6358;

	i8 v6360 = (i8)(intptr_t)c02_s00fa;
	i8 v6361 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6361)(v6360);

	i8 v6362 = (i8)(intptr_t)(ws+3264);
	i8 v6363 = *(i8*)(intptr_t)v6362;
	i8 v6364 = *(i8*)(intptr_t)v6363;
	i8 v6365 = v6364+(+42);
	i2 v6366 = *(i2*)(intptr_t)v6365;
	i1 v6367 = v6366;
	i8 v6368 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6368)(v6367);

	i8 v6369 = (i8)(intptr_t)c02_s00fb;
	i8 v6370 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6370)(v6369);

	i8 v6371 = (i8)(intptr_t)(ws+3264);
	i8 v6372 = *(i8*)(intptr_t)v6371;
	i2 v6373 = (i2)+0;
	i8 v6374 = (i8)(intptr_t)(f226_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6374)(v6373, v6372);

	i8 v6375 = (i8)(intptr_t)c02_s00fc;
	i8 v6376 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6376)(v6375);

	i8 v6377 = (i8)(intptr_t)(ws+3272);
	i2 v6378 = *(i2*)(intptr_t)v6377;
	i8 v6379 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6379)(v6378);

	i8 v6380 = (i8)(intptr_t)c02_s00fd;
	i8 v6381 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6381)(v6380);

	i8 v6382 = (i8)(intptr_t)(ws+3264);
	i8 v6383 = *(i8*)(intptr_t)v6382;
	i8 v6384 = v6383+(+48);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6386)(v6385);

	i8 v6387 = (i8)(intptr_t)c02_s00fe;
	i8 v6388 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6388)(v6387);

	i8 v6389 = (i8)(intptr_t)(ws+3257);
	i1 v6390 = *(i1*)(intptr_t)v6389;
	i1 v6391 = v6390+(+1);
	i8 v6392 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6392 = v6391;

	goto c02_049c;

c02_049f:;

endsub:;
}
const i1 c02_s00ff[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f232_Pop(i2* /* vid */);
const i1 c02_s0100[] = { 0x09,0x2a,0x70,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0101[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0102[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f164_E(i8 /* text */);
	void f226_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0103[] = { 0x29,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
const i1 c02_s0104[] = { 0x7d,0x0a,0 };
	void f164_E(i8 /* text */);
	void f185_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);
	void f179_EmitterPopChunk(i1 /* type */);

// emit_47 workspace at ws+3256 length ws+18
void f304_emit_47(void) {

	i8 v6393 = (i8)(intptr_t)c02_s00ff;
	i8 v6394 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6394)(v6393);

	i8 v6395 = (i8)(intptr_t)(ws+3184);
	i8 v6396 = *(i8*)(intptr_t)v6395;
	i8 v6397 = *(i8*)(intptr_t)v6396;
	i8 v6398 = v6397+(+105);
	i1 v6399 = *(i1*)(intptr_t)v6398;
	i8 v6400 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6400 = v6399;

c02_04a2:;

	i8 v6401 = (i8)(intptr_t)(ws+3256);
	i1 v6402 = *(i1*)(intptr_t)v6401;
	i1 v6403 = (i1)+0;
	if (v6402==v6403) goto c02_04a5; else goto c02_04a4;

c02_04a4:;

	i8 v6404 = (i8)(intptr_t)(ws+3256);
	i1 v6405 = *(i1*)(intptr_t)v6404;
	i1 v6406 = v6405+(-1);
	i8 v6407 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6407 = v6406;

	i8 v6408 = (i8)(intptr_t)(ws+3184);
	i8 v6409 = *(i8*)(intptr_t)v6408;
	i8 v6410 = *(i8*)(intptr_t)v6409;
	i8 v6411 = (i8)(intptr_t)(ws+3256);
	i1 v6412 = *(i1*)(intptr_t)v6411;
	i8 v6413 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v6414;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6413)(&v6414, v6412, v6410);
	i8 v6415 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6415 = v6414;

	i8 v6416 = (i8)(intptr_t)(f232_Pop);
	i2 v6417;

	((void(*)(i2* /* vid */))(intptr_t)v6416)(&v6417);
	i8 v6418 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6418 = v6417;

	i8 v6419 = (i8)(intptr_t)c02_s0100;
	i8 v6420 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6420)(v6419);

	i8 v6421 = (i8)(intptr_t)(ws+3272);
	i2 v6422 = *(i2*)(intptr_t)v6421;
	i8 v6423 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6423)(v6422);

	i8 v6424 = (i8)(intptr_t)c02_s0101;
	i8 v6425 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6425)(v6424);

	i8 v6426 = (i8)(intptr_t)(ws+3264);
	i8 v6427 = *(i8*)(intptr_t)v6426;
	i8 v6428 = *(i8*)(intptr_t)v6427;
	i8 v6429 = v6428+(+42);
	i2 v6430 = *(i2*)(intptr_t)v6429;
	i1 v6431 = v6430;
	i8 v6432 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6432)(v6431);

	i8 v6433 = (i8)(intptr_t)c02_s0102;
	i8 v6434 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6434)(v6433);

	i8 v6435 = (i8)(intptr_t)(ws+3264);
	i8 v6436 = *(i8*)(intptr_t)v6435;
	i2 v6437 = (i2)+0;
	i8 v6438 = (i8)(intptr_t)(f226_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6438)(v6437, v6436);

	i8 v6439 = (i8)(intptr_t)c02_s0103;
	i8 v6440 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6440)(v6439);

	goto c02_04a2;

c02_04a5:;

	i8 v6441 = (i8)(intptr_t)c02_s0104;
	i8 v6442 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6442)(v6441);

	i8 v6443 = (i8)(intptr_t)(ws+3184);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = *(i8*)(intptr_t)v6444;
	i1 v6446 = (i1)+0;
	i8 v6447 = (i8)(intptr_t)(ws+3184);
	i8 v6448 = *(i8*)(intptr_t)v6447;
	i8 v6449 = *(i8*)(intptr_t)v6448;
	i8 v6450 = v6449+(+74);
	i2 v6451 = *(i2*)(intptr_t)v6450;
	i8 v6452 = (i8)(intptr_t)(f185_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v6452)(v6451, v6446, v6445);

	i1 v6453 = (i1)+83;
	i8 v6454 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v6454)(v6453);

endsub:;
}
	void f235_Call(i8 /* subr */);

// emit_48 workspace at ws+3256 length ws+0
void f305_emit_48(void) {

	i8 v6455 = (i8)(intptr_t)(ws+3184);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = *(i8*)(intptr_t)v6456;
	i8 v6458 = (i8)(intptr_t)(f235_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6458)(v6457);

endsub:;
}
	void f235_Call(i8 /* subr */);

// emit_49 workspace at ws+3256 length ws+0
void f306_emit_49(void) {

	i8 v6459 = (i8)(intptr_t)(ws+3184);
	i8 v6460 = *(i8*)(intptr_t)v6459;
	i8 v6461 = *(i8*)(intptr_t)v6460;
	i8 v6462 = (i8)(intptr_t)(f235_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6462)(v6461);

endsub:;
}
	void f235_Call(i8 /* subr */);

// emit_50 workspace at ws+3256 length ws+0
void f307_emit_50(void) {

	i8 v6463 = (i8)(intptr_t)(ws+3184);
	i8 v6464 = *(i8*)(intptr_t)v6463;
	i8 v6465 = *(i8*)(intptr_t)v6464;
	i8 v6466 = (i8)(intptr_t)(f235_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6466)(v6465);

endsub:;
}
	void f235_Call(i8 /* subr */);

// emit_51 workspace at ws+3256 length ws+0
void f308_emit_51(void) {

	i8 v6467 = (i8)(intptr_t)(ws+3184);
	i8 v6468 = *(i8*)(intptr_t)v6467;
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = (i8)(intptr_t)(f235_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6470)(v6469);

endsub:;
}
	void f235_Call(i8 /* subr */);

// emit_52 workspace at ws+3256 length ws+0
void f309_emit_52(void) {

	i8 v6471 = (i8)(intptr_t)(ws+3184);
	i8 v6472 = *(i8*)(intptr_t)v6471;
	i8 v6473 = *(i8*)(intptr_t)v6472;
	i8 v6474 = (i8)(intptr_t)(f235_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6474)(v6473);

endsub:;
}
	void f237_LoadConstant(i4 /* value */, i1 /* width */);

// emit_62 workspace at ws+3256 length ws+0
void f310_emit_62(void) {

	i1 v6475 = (i1)+1;
	i8 v6476 = (i8)(intptr_t)(ws+3184);
	i8 v6477 = *(i8*)(intptr_t)v6476;
	i4 v6478 = *(i4*)(intptr_t)v6477;
	i8 v6479 = (i8)(intptr_t)(f237_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6479)(v6478, v6475);

endsub:;
}
	void f237_LoadConstant(i4 /* value */, i1 /* width */);

// emit_63 workspace at ws+3256 length ws+0
void f311_emit_63(void) {

	i1 v6480 = (i1)+2;
	i8 v6481 = (i8)(intptr_t)(ws+3184);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i4 v6483 = *(i4*)(intptr_t)v6482;
	i8 v6484 = (i8)(intptr_t)(f237_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6484)(v6483, v6480);

endsub:;
}
	void f237_LoadConstant(i4 /* value */, i1 /* width */);

// emit_64 workspace at ws+3256 length ws+0
void f312_emit_64(void) {

	i1 v6485 = (i1)+4;
	i8 v6486 = (i8)(intptr_t)(ws+3184);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i4 v6488 = *(i4*)(intptr_t)v6487;
	i8 v6489 = (i8)(intptr_t)(f237_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6489)(v6488, v6485);

endsub:;
}
	void f237_LoadConstant(i4 /* value */, i1 /* width */);

// emit_65 workspace at ws+3256 length ws+0
void f313_emit_65(void) {

	i1 v6490 = (i1)+8;
	i8 v6491 = (i8)(intptr_t)(ws+3184);
	i8 v6492 = *(i8*)(intptr_t)v6491;
	i4 v6493 = *(i4*)(intptr_t)v6492;
	i8 v6494 = (i8)(intptr_t)(f237_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6494)(v6493, v6490);

endsub:;
}
	void f230_Push(i2* /* vid */);
const i1 c02_s0105[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s0106[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f164_E(i8 /* text */);
	void f226_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0107[] = { 0x29,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_66 workspace at ws+3256 length ws+2
void f314_emit_66(void) {

	i8 v6495 = (i8)(intptr_t)(f230_Push);
	i2 v6496;

	((void(*)(i2* /* vid */))(intptr_t)v6495)(&v6496);
	i8 v6497 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v6497 = v6496;

	i8 v6498 = (i8)(intptr_t)c02_s0105;
	i8 v6499 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6499)(v6498);

	i8 v6500 = (i8)(intptr_t)(ws+3256);
	i2 v6501 = *(i2*)(intptr_t)v6500;
	i8 v6502 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6502)(v6501);

	i8 v6503 = (i8)(intptr_t)c02_s0106;
	i8 v6504 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6504)(v6503);

	i8 v6505 = (i8)(intptr_t)(ws+3184);
	i8 v6506 = *(i8*)(intptr_t)v6505;
	i8 v6507 = *(i8*)(intptr_t)v6506;
	i8 v6508 = (i8)(intptr_t)(ws+3184);
	i8 v6509 = *(i8*)(intptr_t)v6508;
	i8 v6510 = v6509+(+8);
	i2 v6511 = *(i2*)(intptr_t)v6510;
	i8 v6512 = (i8)(intptr_t)(f226_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6512)(v6511, v6507);

	i8 v6513 = (i8)(intptr_t)c02_s0107;
	i8 v6514 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6514)(v6513);

endsub:;
}
	void f238_StoreVV(i1 /* width */);

// emit_67 workspace at ws+3256 length ws+0
void f315_emit_67(void) {

	i1 v6515 = (i1)+1;
	i8 v6516 = (i8)(intptr_t)(f238_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6516)(v6515);

endsub:;
}
	void f238_StoreVV(i1 /* width */);

// emit_68 workspace at ws+3256 length ws+0
void f316_emit_68(void) {

	i1 v6517 = (i1)+2;
	i8 v6518 = (i8)(intptr_t)(f238_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6518)(v6517);

endsub:;
}
	void f238_StoreVV(i1 /* width */);

// emit_69 workspace at ws+3256 length ws+0
void f317_emit_69(void) {

	i1 v6519 = (i1)+4;
	i8 v6520 = (i8)(intptr_t)(f238_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6520)(v6519);

endsub:;
}
	void f238_StoreVV(i1 /* width */);

// emit_70 workspace at ws+3256 length ws+0
void f318_emit_70(void) {

	i1 v6521 = (i1)+8;
	i8 v6522 = (i8)(intptr_t)(f238_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6522)(v6521);

endsub:;
}
	void f239_LoadVV(i1 /* width */);

// emit_71 workspace at ws+3256 length ws+0
void f319_emit_71(void) {

	i1 v6523 = (i1)+1;
	i8 v6524 = (i8)(intptr_t)(f239_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6524)(v6523);

endsub:;
}
	void f239_LoadVV(i1 /* width */);

// emit_72 workspace at ws+3256 length ws+0
void f320_emit_72(void) {

	i1 v6525 = (i1)+2;
	i8 v6526 = (i8)(intptr_t)(f239_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6526)(v6525);

endsub:;
}
	void f239_LoadVV(i1 /* width */);

// emit_73 workspace at ws+3256 length ws+0
void f321_emit_73(void) {

	i1 v6527 = (i1)+4;
	i8 v6528 = (i8)(intptr_t)(f239_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6528)(v6527);

endsub:;
}
	void f239_LoadVV(i1 /* width */);

// emit_74 workspace at ws+3256 length ws+0
void f322_emit_74(void) {

	i1 v6529 = (i1)+8;
	i8 v6530 = (i8)(intptr_t)(f239_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6530)(v6529);

endsub:;
}
const i1 c02_s0108[] = { 0x2b,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_75 workspace at ws+3256 length ws+0
void f323_emit_75(void) {

	i1 v6531 = (i1)+1;
	i8 v6532 = (i8)(intptr_t)c02_s0108;
	i8 v6533 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6533)(v6532, v6531);

endsub:;
}
const i1 c02_s0109[] = { 0x2b,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+3256 length ws+0
void f324_emit_76(void) {

	i1 v6534 = (i1)+2;
	i8 v6535 = (i8)(intptr_t)c02_s0109;
	i8 v6536 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6536)(v6535, v6534);

endsub:;
}
const i1 c02_s010a[] = { 0x2b,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+3256 length ws+0
void f325_emit_77(void) {

	i1 v6537 = (i1)+4;
	i8 v6538 = (i8)(intptr_t)c02_s010a;
	i8 v6539 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6539)(v6538, v6537);

endsub:;
}
const i1 c02_s010b[] = { 0x2b,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+3256 length ws+0
void f326_emit_78(void) {

	i1 v6540 = (i1)+8;
	i8 v6541 = (i8)(intptr_t)c02_s010b;
	i8 v6542 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6542)(v6541, v6540);

endsub:;
}
const i1 c02_s010c[] = { 0x2d,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+3256 length ws+0
void f327_emit_79(void) {

	i1 v6543 = (i1)+1;
	i8 v6544 = (i8)(intptr_t)c02_s010c;
	i8 v6545 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6545)(v6544, v6543);

endsub:;
}
const i1 c02_s010d[] = { 0x2d,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+3256 length ws+0
void f328_emit_80(void) {

	i1 v6546 = (i1)+2;
	i8 v6547 = (i8)(intptr_t)c02_s010d;
	i8 v6548 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6548)(v6547, v6546);

endsub:;
}
const i1 c02_s010e[] = { 0x2d,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+3256 length ws+0
void f329_emit_81(void) {

	i1 v6549 = (i1)+4;
	i8 v6550 = (i8)(intptr_t)c02_s010e;
	i8 v6551 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6551)(v6550, v6549);

endsub:;
}
const i1 c02_s010f[] = { 0x2d,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+3256 length ws+0
void f330_emit_82(void) {

	i1 v6552 = (i1)+8;
	i8 v6553 = (i8)(intptr_t)c02_s010f;
	i8 v6554 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6554)(v6553, v6552);

endsub:;
}
const i1 c02_s0110[] = { 0x2a,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+3256 length ws+0
void f331_emit_83(void) {

	i1 v6555 = (i1)+1;
	i8 v6556 = (i8)(intptr_t)c02_s0110;
	i8 v6557 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6557)(v6556, v6555);

endsub:;
}
const i1 c02_s0111[] = { 0x2a,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+3256 length ws+0
void f332_emit_84(void) {

	i1 v6558 = (i1)+2;
	i8 v6559 = (i8)(intptr_t)c02_s0111;
	i8 v6560 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6560)(v6559, v6558);

endsub:;
}
const i1 c02_s0112[] = { 0x2a,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+3256 length ws+0
void f333_emit_85(void) {

	i1 v6561 = (i1)+4;
	i8 v6562 = (i8)(intptr_t)c02_s0112;
	i8 v6563 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6563)(v6562, v6561);

endsub:;
}
const i1 c02_s0113[] = { 0x2a,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+3256 length ws+0
void f334_emit_86(void) {

	i1 v6564 = (i1)+8;
	i8 v6565 = (i8)(intptr_t)c02_s0113;
	i8 v6566 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6566)(v6565, v6564);

endsub:;
}
const i1 c02_s0114[] = { 0x2f,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+3256 length ws+0
void f335_emit_87(void) {

	i1 v6567 = (i1)+1;
	i8 v6568 = (i8)(intptr_t)c02_s0114;
	i8 v6569 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6569)(v6568, v6567);

endsub:;
}
const i1 c02_s0115[] = { 0x2f,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+3256 length ws+0
void f336_emit_88(void) {

	i1 v6570 = (i1)+2;
	i8 v6571 = (i8)(intptr_t)c02_s0115;
	i8 v6572 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6572)(v6571, v6570);

endsub:;
}
const i1 c02_s0116[] = { 0x2f,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+3256 length ws+0
void f337_emit_89(void) {

	i1 v6573 = (i1)+4;
	i8 v6574 = (i8)(intptr_t)c02_s0116;
	i8 v6575 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6575)(v6574, v6573);

endsub:;
}
const i1 c02_s0117[] = { 0x2f,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+3256 length ws+0
void f338_emit_90(void) {

	i1 v6576 = (i1)+8;
	i8 v6577 = (i8)(intptr_t)c02_s0117;
	i8 v6578 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6578)(v6577, v6576);

endsub:;
}
const i1 c02_s0118[] = { 0x25,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+3256 length ws+0
void f339_emit_91(void) {

	i1 v6579 = (i1)+1;
	i8 v6580 = (i8)(intptr_t)c02_s0118;
	i8 v6581 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6581)(v6580, v6579);

endsub:;
}
const i1 c02_s0119[] = { 0x25,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+3256 length ws+0
void f340_emit_92(void) {

	i1 v6582 = (i1)+2;
	i8 v6583 = (i8)(intptr_t)c02_s0119;
	i8 v6584 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6584)(v6583, v6582);

endsub:;
}
const i1 c02_s011a[] = { 0x25,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+3256 length ws+0
void f341_emit_93(void) {

	i1 v6585 = (i1)+4;
	i8 v6586 = (i8)(intptr_t)c02_s011a;
	i8 v6587 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6587)(v6586, v6585);

endsub:;
}
const i1 c02_s011b[] = { 0x25,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+3256 length ws+0
void f342_emit_94(void) {

	i1 v6588 = (i1)+8;
	i8 v6589 = (i8)(intptr_t)c02_s011b;
	i8 v6590 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6590)(v6589, v6588);

endsub:;
}
const i1 c02_s011c[] = { 0x2f,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+3256 length ws+0
void f343_emit_95(void) {

	i1 v6591 = (i1)+1;
	i8 v6592 = (i8)(intptr_t)c02_s011c;
	i8 v6593 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6593)(v6592, v6591);

endsub:;
}
const i1 c02_s011d[] = { 0x2f,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+3256 length ws+0
void f344_emit_96(void) {

	i1 v6594 = (i1)+2;
	i8 v6595 = (i8)(intptr_t)c02_s011d;
	i8 v6596 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6596)(v6595, v6594);

endsub:;
}
const i1 c02_s011e[] = { 0x2f,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+3256 length ws+0
void f345_emit_97(void) {

	i1 v6597 = (i1)+4;
	i8 v6598 = (i8)(intptr_t)c02_s011e;
	i8 v6599 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6599)(v6598, v6597);

endsub:;
}
const i1 c02_s011f[] = { 0x2f,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+3256 length ws+0
void f346_emit_98(void) {

	i1 v6600 = (i1)+8;
	i8 v6601 = (i8)(intptr_t)c02_s011f;
	i8 v6602 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6602)(v6601, v6600);

endsub:;
}
const i1 c02_s0120[] = { 0x25,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+3256 length ws+0
void f347_emit_99(void) {

	i1 v6603 = (i1)+1;
	i8 v6604 = (i8)(intptr_t)c02_s0120;
	i8 v6605 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6605)(v6604, v6603);

endsub:;
}
const i1 c02_s0121[] = { 0x25,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+3256 length ws+0
void f348_emit_100(void) {

	i1 v6606 = (i1)+2;
	i8 v6607 = (i8)(intptr_t)c02_s0121;
	i8 v6608 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6608)(v6607, v6606);

endsub:;
}
const i1 c02_s0122[] = { 0x25,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+3256 length ws+0
void f349_emit_101(void) {

	i1 v6609 = (i1)+4;
	i8 v6610 = (i8)(intptr_t)c02_s0122;
	i8 v6611 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6611)(v6610, v6609);

endsub:;
}
const i1 c02_s0123[] = { 0x25,0 };
	void f242_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+3256 length ws+0
void f350_emit_102(void) {

	i1 v6612 = (i1)+8;
	i8 v6613 = (i8)(intptr_t)c02_s0123;
	i8 v6614 = (i8)(intptr_t)(f242_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6614)(v6613, v6612);

endsub:;
}
const i1 c02_s0124[] = { 0x26,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+3256 length ws+0
void f351_emit_103(void) {

	i1 v6615 = (i1)+1;
	i8 v6616 = (i8)(intptr_t)c02_s0124;
	i8 v6617 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6617)(v6616, v6615);

endsub:;
}
const i1 c02_s0125[] = { 0x26,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+3256 length ws+0
void f352_emit_104(void) {

	i1 v6618 = (i1)+2;
	i8 v6619 = (i8)(intptr_t)c02_s0125;
	i8 v6620 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6620)(v6619, v6618);

endsub:;
}
const i1 c02_s0126[] = { 0x26,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+3256 length ws+0
void f353_emit_105(void) {

	i1 v6621 = (i1)+4;
	i8 v6622 = (i8)(intptr_t)c02_s0126;
	i8 v6623 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6623)(v6622, v6621);

endsub:;
}
const i1 c02_s0127[] = { 0x26,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+3256 length ws+0
void f354_emit_106(void) {

	i1 v6624 = (i1)+8;
	i8 v6625 = (i8)(intptr_t)c02_s0127;
	i8 v6626 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6626)(v6625, v6624);

endsub:;
}
const i1 c02_s0128[] = { 0x7c,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+3256 length ws+0
void f355_emit_107(void) {

	i1 v6627 = (i1)+1;
	i8 v6628 = (i8)(intptr_t)c02_s0128;
	i8 v6629 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6629)(v6628, v6627);

endsub:;
}
const i1 c02_s0129[] = { 0x7c,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+3256 length ws+0
void f356_emit_108(void) {

	i1 v6630 = (i1)+2;
	i8 v6631 = (i8)(intptr_t)c02_s0129;
	i8 v6632 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6632)(v6631, v6630);

endsub:;
}
const i1 c02_s012a[] = { 0x7c,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+3256 length ws+0
void f357_emit_109(void) {

	i1 v6633 = (i1)+4;
	i8 v6634 = (i8)(intptr_t)c02_s012a;
	i8 v6635 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6635)(v6634, v6633);

endsub:;
}
const i1 c02_s012b[] = { 0x7c,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+3256 length ws+0
void f358_emit_110(void) {

	i1 v6636 = (i1)+8;
	i8 v6637 = (i8)(intptr_t)c02_s012b;
	i8 v6638 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6638)(v6637, v6636);

endsub:;
}
const i1 c02_s012c[] = { 0x5e,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+3256 length ws+0
void f359_emit_111(void) {

	i1 v6639 = (i1)+1;
	i8 v6640 = (i8)(intptr_t)c02_s012c;
	i8 v6641 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6641)(v6640, v6639);

endsub:;
}
const i1 c02_s012d[] = { 0x5e,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+3256 length ws+0
void f360_emit_112(void) {

	i1 v6642 = (i1)+2;
	i8 v6643 = (i8)(intptr_t)c02_s012d;
	i8 v6644 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6644)(v6643, v6642);

endsub:;
}
const i1 c02_s012e[] = { 0x5e,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+3256 length ws+0
void f361_emit_113(void) {

	i1 v6645 = (i1)+4;
	i8 v6646 = (i8)(intptr_t)c02_s012e;
	i8 v6647 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6647)(v6646, v6645);

endsub:;
}
const i1 c02_s012f[] = { 0x5e,0 };
	void f240_Op2VV(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+3256 length ws+0
void f362_emit_114(void) {

	i1 v6648 = (i1)+8;
	i8 v6649 = (i8)(intptr_t)c02_s012f;
	i8 v6650 = (i8)(intptr_t)(f240_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6650)(v6649, v6648);

endsub:;
}
const i1 c02_s0130[] = { 0x2d,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+3256 length ws+0
void f363_emit_115(void) {

	i1 v6651 = (i1)+1;
	i8 v6652 = (i8)(intptr_t)c02_s0130;
	i8 v6653 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6653)(v6652, v6651);

endsub:;
}
const i1 c02_s0131[] = { 0x2d,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+3256 length ws+0
void f364_emit_116(void) {

	i1 v6654 = (i1)+2;
	i8 v6655 = (i8)(intptr_t)c02_s0131;
	i8 v6656 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6656)(v6655, v6654);

endsub:;
}
const i1 c02_s0132[] = { 0x2d,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+3256 length ws+0
void f365_emit_117(void) {

	i1 v6657 = (i1)+4;
	i8 v6658 = (i8)(intptr_t)c02_s0132;
	i8 v6659 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6659)(v6658, v6657);

endsub:;
}
const i1 c02_s0133[] = { 0x2d,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+3256 length ws+0
void f366_emit_118(void) {

	i1 v6660 = (i1)+8;
	i8 v6661 = (i8)(intptr_t)c02_s0133;
	i8 v6662 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6662)(v6661, v6660);

endsub:;
}
const i1 c02_s0134[] = { 0x7e,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+3256 length ws+0
void f367_emit_119(void) {

	i1 v6663 = (i1)+1;
	i8 v6664 = (i8)(intptr_t)c02_s0134;
	i8 v6665 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6665)(v6664, v6663);

endsub:;
}
const i1 c02_s0135[] = { 0x7e,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_120 workspace at ws+3256 length ws+0
void f368_emit_120(void) {

	i1 v6666 = (i1)+2;
	i8 v6667 = (i8)(intptr_t)c02_s0135;
	i8 v6668 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6668)(v6667, v6666);

endsub:;
}
const i1 c02_s0136[] = { 0x7e,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_121 workspace at ws+3256 length ws+0
void f369_emit_121(void) {

	i1 v6669 = (i1)+4;
	i8 v6670 = (i8)(intptr_t)c02_s0136;
	i8 v6671 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6671)(v6670, v6669);

endsub:;
}
const i1 c02_s0137[] = { 0x7e,0 };
	void f244_Op1V(i8 /* op */, i1 /* width */);

// emit_122 workspace at ws+3256 length ws+0
void f370_emit_122(void) {

	i1 v6672 = (i1)+8;
	i8 v6673 = (i8)(intptr_t)c02_s0137;
	i8 v6674 = (i8)(intptr_t)(f244_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6674)(v6673, v6672);

endsub:;
}
const i1 c02_s0138[] = { 0x69,0x31,0 };
const i1 c02_s0139[] = { 0x3c,0x3c,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_123 workspace at ws+3256 length ws+0
void f371_emit_123(void) {

	i1 v6675 = (i1)+1;
	i8 v6676 = (i8)(intptr_t)c02_s0138;
	i8 v6677 = (i8)(intptr_t)c02_s0139;
	i8 v6678 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6678)(v6677, v6676, v6675);

endsub:;
}
const i1 c02_s013a[] = { 0x69,0x32,0 };
const i1 c02_s013b[] = { 0x3c,0x3c,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+3256 length ws+0
void f372_emit_124(void) {

	i1 v6679 = (i1)+2;
	i8 v6680 = (i8)(intptr_t)c02_s013a;
	i8 v6681 = (i8)(intptr_t)c02_s013b;
	i8 v6682 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6682)(v6681, v6680, v6679);

endsub:;
}
const i1 c02_s013c[] = { 0x69,0x34,0 };
const i1 c02_s013d[] = { 0x3c,0x3c,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+3256 length ws+0
void f373_emit_125(void) {

	i1 v6683 = (i1)+4;
	i8 v6684 = (i8)(intptr_t)c02_s013c;
	i8 v6685 = (i8)(intptr_t)c02_s013d;
	i8 v6686 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6686)(v6685, v6684, v6683);

endsub:;
}
const i1 c02_s013e[] = { 0x69,0x38,0 };
const i1 c02_s013f[] = { 0x3c,0x3c,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+3256 length ws+0
void f374_emit_126(void) {

	i1 v6687 = (i1)+8;
	i8 v6688 = (i8)(intptr_t)c02_s013e;
	i8 v6689 = (i8)(intptr_t)c02_s013f;
	i8 v6690 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6690)(v6689, v6688, v6687);

endsub:;
}
const i1 c02_s0140[] = { 0x69,0x31,0 };
const i1 c02_s0141[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+3256 length ws+0
void f375_emit_127(void) {

	i1 v6691 = (i1)+1;
	i8 v6692 = (i8)(intptr_t)c02_s0140;
	i8 v6693 = (i8)(intptr_t)c02_s0141;
	i8 v6694 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6694)(v6693, v6692, v6691);

endsub:;
}
const i1 c02_s0142[] = { 0x69,0x32,0 };
const i1 c02_s0143[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+3256 length ws+0
void f376_emit_128(void) {

	i1 v6695 = (i1)+2;
	i8 v6696 = (i8)(intptr_t)c02_s0142;
	i8 v6697 = (i8)(intptr_t)c02_s0143;
	i8 v6698 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6698)(v6697, v6696, v6695);

endsub:;
}
const i1 c02_s0144[] = { 0x69,0x34,0 };
const i1 c02_s0145[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+3256 length ws+0
void f377_emit_129(void) {

	i1 v6699 = (i1)+4;
	i8 v6700 = (i8)(intptr_t)c02_s0144;
	i8 v6701 = (i8)(intptr_t)c02_s0145;
	i8 v6702 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6702)(v6701, v6700, v6699);

endsub:;
}
const i1 c02_s0146[] = { 0x69,0x38,0 };
const i1 c02_s0147[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+3256 length ws+0
void f378_emit_130(void) {

	i1 v6703 = (i1)+8;
	i8 v6704 = (i8)(intptr_t)c02_s0146;
	i8 v6705 = (i8)(intptr_t)c02_s0147;
	i8 v6706 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6706)(v6705, v6704, v6703);

endsub:;
}
const i1 c02_s0148[] = { 0x73,0x31,0 };
const i1 c02_s0149[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+3256 length ws+0
void f379_emit_131(void) {

	i1 v6707 = (i1)+1;
	i8 v6708 = (i8)(intptr_t)c02_s0148;
	i8 v6709 = (i8)(intptr_t)c02_s0149;
	i8 v6710 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6710)(v6709, v6708, v6707);

endsub:;
}
const i1 c02_s014a[] = { 0x73,0x32,0 };
const i1 c02_s014b[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_132 workspace at ws+3256 length ws+0
void f380_emit_132(void) {

	i1 v6711 = (i1)+2;
	i8 v6712 = (i8)(intptr_t)c02_s014a;
	i8 v6713 = (i8)(intptr_t)c02_s014b;
	i8 v6714 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6714)(v6713, v6712, v6711);

endsub:;
}
const i1 c02_s014c[] = { 0x73,0x34,0 };
const i1 c02_s014d[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_133 workspace at ws+3256 length ws+0
void f381_emit_133(void) {

	i1 v6715 = (i1)+4;
	i8 v6716 = (i8)(intptr_t)c02_s014c;
	i8 v6717 = (i8)(intptr_t)c02_s014d;
	i8 v6718 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6718)(v6717, v6716, v6715);

endsub:;
}
const i1 c02_s014e[] = { 0x73,0x38,0 };
const i1 c02_s014f[] = { 0x3e,0x3e,0 };
	void f245_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_134 workspace at ws+3256 length ws+0
void f382_emit_134(void) {

	i1 v6719 = (i1)+8;
	i8 v6720 = (i8)(intptr_t)c02_s014e;
	i8 v6721 = (i8)(intptr_t)c02_s014f;
	i8 v6722 = (i8)(intptr_t)(f245_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6722)(v6721, v6720, v6719);

endsub:;
}
const i1 c02_s0150[] = { 0x3d,0x3d,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_135 workspace at ws+3256 length ws+0
void f383_emit_135(void) {

	i8 v6723 = (i8)(intptr_t)(ws+3176);
	i8 v6724 = *(i8*)(intptr_t)v6723;
	i8 v6725 = v6724+(+16);
	i8 v6726 = *(i8*)(intptr_t)v6725;
	i8 v6727 = (i8)(intptr_t)c02_s0150;
	i8 v6728 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6728)(v6727, v6726);

endsub:;
}
const i1 c02_s0151[] = { 0x3d,0x3d,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+3256 length ws+0
void f384_emit_136(void) {

	i8 v6729 = (i8)(intptr_t)(ws+3176);
	i8 v6730 = *(i8*)(intptr_t)v6729;
	i8 v6731 = v6730+(+16);
	i8 v6732 = *(i8*)(intptr_t)v6731;
	i8 v6733 = (i8)(intptr_t)c02_s0151;
	i8 v6734 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6734)(v6733, v6732);

endsub:;
}
const i1 c02_s0152[] = { 0x3d,0x3d,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+3256 length ws+0
void f385_emit_137(void) {

	i8 v6735 = (i8)(intptr_t)(ws+3176);
	i8 v6736 = *(i8*)(intptr_t)v6735;
	i8 v6737 = v6736+(+16);
	i8 v6738 = *(i8*)(intptr_t)v6737;
	i8 v6739 = (i8)(intptr_t)c02_s0152;
	i8 v6740 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6740)(v6739, v6738);

endsub:;
}
const i1 c02_s0153[] = { 0x3d,0x3d,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+3256 length ws+0
void f386_emit_138(void) {

	i8 v6741 = (i8)(intptr_t)(ws+3176);
	i8 v6742 = *(i8*)(intptr_t)v6741;
	i8 v6743 = v6742+(+16);
	i8 v6744 = *(i8*)(intptr_t)v6743;
	i8 v6745 = (i8)(intptr_t)c02_s0153;
	i8 v6746 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6746)(v6745, v6744);

endsub:;
}
const i1 c02_s0154[] = { 0x3c,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+3256 length ws+0
void f387_emit_139(void) {

	i8 v6747 = (i8)(intptr_t)(ws+3176);
	i8 v6748 = *(i8*)(intptr_t)v6747;
	i8 v6749 = v6748+(+16);
	i8 v6750 = *(i8*)(intptr_t)v6749;
	i8 v6751 = (i8)(intptr_t)c02_s0154;
	i8 v6752 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6752)(v6751, v6750);

endsub:;
}
const i1 c02_s0155[] = { 0x3c,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_140 workspace at ws+3256 length ws+0
void f388_emit_140(void) {

	i8 v6753 = (i8)(intptr_t)(ws+3176);
	i8 v6754 = *(i8*)(intptr_t)v6753;
	i8 v6755 = v6754+(+16);
	i8 v6756 = *(i8*)(intptr_t)v6755;
	i8 v6757 = (i8)(intptr_t)c02_s0155;
	i8 v6758 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6758)(v6757, v6756);

endsub:;
}
const i1 c02_s0156[] = { 0x3c,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_141 workspace at ws+3256 length ws+0
void f389_emit_141(void) {

	i8 v6759 = (i8)(intptr_t)(ws+3176);
	i8 v6760 = *(i8*)(intptr_t)v6759;
	i8 v6761 = v6760+(+16);
	i8 v6762 = *(i8*)(intptr_t)v6761;
	i8 v6763 = (i8)(intptr_t)c02_s0156;
	i8 v6764 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6764)(v6763, v6762);

endsub:;
}
const i1 c02_s0157[] = { 0x3c,0 };
	void f246_Branch(i8 /* op */, i8 /* node */);

// emit_142 workspace at ws+3256 length ws+0
void f390_emit_142(void) {

	i8 v6765 = (i8)(intptr_t)(ws+3176);
	i8 v6766 = *(i8*)(intptr_t)v6765;
	i8 v6767 = v6766+(+16);
	i8 v6768 = *(i8*)(intptr_t)v6767;
	i8 v6769 = (i8)(intptr_t)c02_s0157;
	i8 v6770 = (i8)(intptr_t)(f246_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6770)(v6769, v6768);

endsub:;
}
const i1 c02_s0158[] = { 0x3c,0 };
	void f247_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_143 workspace at ws+3256 length ws+0
void f391_emit_143(void) {

	i8 v6771 = (i8)(intptr_t)(ws+3176);
	i8 v6772 = *(i8*)(intptr_t)v6771;
	i8 v6773 = v6772+(+16);
	i8 v6774 = *(i8*)(intptr_t)v6773;
	i1 v6775 = (i1)+1;
	i8 v6776 = (i8)(intptr_t)c02_s0158;
	i8 v6777 = (i8)(intptr_t)(f247_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6777)(v6776, v6775, v6774);

endsub:;
}
const i1 c02_s0159[] = { 0x3c,0 };
	void f247_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_144 workspace at ws+3256 length ws+0
void f392_emit_144(void) {

	i8 v6778 = (i8)(intptr_t)(ws+3176);
	i8 v6779 = *(i8*)(intptr_t)v6778;
	i8 v6780 = v6779+(+16);
	i8 v6781 = *(i8*)(intptr_t)v6780;
	i1 v6782 = (i1)+2;
	i8 v6783 = (i8)(intptr_t)c02_s0159;
	i8 v6784 = (i8)(intptr_t)(f247_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6784)(v6783, v6782, v6781);

endsub:;
}
const i1 c02_s015a[] = { 0x3c,0 };
	void f247_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_145 workspace at ws+3256 length ws+0
void f393_emit_145(void) {

	i8 v6785 = (i8)(intptr_t)(ws+3176);
	i8 v6786 = *(i8*)(intptr_t)v6785;
	i8 v6787 = v6786+(+16);
	i8 v6788 = *(i8*)(intptr_t)v6787;
	i1 v6789 = (i1)+4;
	i8 v6790 = (i8)(intptr_t)c02_s015a;
	i8 v6791 = (i8)(intptr_t)(f247_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6791)(v6790, v6789, v6788);

endsub:;
}
const i1 c02_s015b[] = { 0x3c,0 };
	void f247_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_146 workspace at ws+3256 length ws+0
void f394_emit_146(void) {

	i8 v6792 = (i8)(intptr_t)(ws+3176);
	i8 v6793 = *(i8*)(intptr_t)v6792;
	i8 v6794 = v6793+(+16);
	i8 v6795 = *(i8*)(intptr_t)v6794;
	i1 v6796 = (i1)+8;
	i8 v6797 = (i8)(intptr_t)c02_s015b;
	i8 v6798 = (i8)(intptr_t)(f247_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6798)(v6797, v6796, v6795);

endsub:;
}
	void f249_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_151 workspace at ws+3256 length ws+0
void f395_emit_151(void) {

	i8 v6799 = (i8)(intptr_t)(ws+3184);
	i8 v6800 = *(i8*)(intptr_t)v6799;
	i4 v6801 = *(i4*)(intptr_t)v6800;
	i4 v6802 = v6801&(+255);
	i8 v6803 = (i8)(intptr_t)(ws+3184);
	i8 v6804 = *(i8*)(intptr_t)v6803;
	i8 v6805 = v6804+(+4);
	i2 v6806 = *(i2*)(intptr_t)v6805;
	i8 v6807 = (i8)(intptr_t)(f249_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6807)(v6806, v6802);

endsub:;
}
	void f249_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_152 workspace at ws+3256 length ws+0
void f396_emit_152(void) {

	i8 v6808 = (i8)(intptr_t)(ws+3184);
	i8 v6809 = *(i8*)(intptr_t)v6808;
	i4 v6810 = *(i4*)(intptr_t)v6809;
	i4 v6811 = v6810&(+65535);
	i8 v6812 = (i8)(intptr_t)(ws+3184);
	i8 v6813 = *(i8*)(intptr_t)v6812;
	i8 v6814 = v6813+(+4);
	i2 v6815 = *(i2*)(intptr_t)v6814;
	i8 v6816 = (i8)(intptr_t)(f249_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6816)(v6815, v6811);

endsub:;
}
	void f249_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_153 workspace at ws+3256 length ws+0
void f397_emit_153(void) {

	i8 v6817 = (i8)(intptr_t)(ws+3184);
	i8 v6818 = *(i8*)(intptr_t)v6817;
	i4 v6819 = *(i4*)(intptr_t)v6818;
	i4 v6820 = v6819&(-1);
	i8 v6821 = (i8)(intptr_t)(ws+3184);
	i8 v6822 = *(i8*)(intptr_t)v6821;
	i8 v6823 = v6822+(+4);
	i2 v6824 = *(i2*)(intptr_t)v6823;
	i8 v6825 = (i8)(intptr_t)(f249_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6825)(v6824, v6820);

endsub:;
}
	void f249_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_154 workspace at ws+3256 length ws+0
void f398_emit_154(void) {

	i8 v6826 = (i8)(intptr_t)(ws+3184);
	i8 v6827 = *(i8*)(intptr_t)v6826;
	i4 v6828 = *(i4*)(intptr_t)v6827;
	i8 v6829 = (i8)(intptr_t)(ws+3184);
	i8 v6830 = *(i8*)(intptr_t)v6829;
	i8 v6831 = v6830+(+4);
	i2 v6832 = *(i2*)(intptr_t)v6831;
	i8 v6833 = (i8)(intptr_t)(f249_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6833)(v6832, v6828);

endsub:;
}

// emit_155 workspace at ws+3256 length ws+0
void f399_emit_155(void) {

	i8 v6834 = (i8)(intptr_t)(ws+1192);
	i1 v6835 = *(i1*)(intptr_t)v6834;
	i1 v6836 = v6835+(-1);
	i8 v6837 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6837 = v6836;

endsub:;
}

// emit_156 workspace at ws+3256 length ws+0
void f400_emit_156(void) {

	i8 v6838 = (i8)(intptr_t)(ws+1192);
	i1 v6839 = *(i1*)(intptr_t)v6838;
	i1 v6840 = v6839+(-1);
	i8 v6841 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6841 = v6840;

endsub:;
}

// emit_157 workspace at ws+3256 length ws+0
void f401_emit_157(void) {

	i8 v6842 = (i8)(intptr_t)(ws+1192);
	i1 v6843 = *(i1*)(intptr_t)v6842;
	i1 v6844 = v6843+(-1);
	i8 v6845 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6845 = v6844;

endsub:;
}

// emit_158 workspace at ws+3256 length ws+0
void f402_emit_158(void) {

	i8 v6846 = (i8)(intptr_t)(ws+1192);
	i1 v6847 = *(i1*)(intptr_t)v6846;
	i1 v6848 = v6847+(-1);
	i8 v6849 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6849 = v6848;

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_159 workspace at ws+3256 length ws+0
void f403_emit_159(void) {

	i1 v6850 = (i1)+1;
	i1 v6851 = (i1)+2;
	i8 v6852 = (i8)(intptr_t)(ws+3184);
	i8 v6853 = *(i8*)(intptr_t)v6852;
	i1 v6854 = *(i1*)(intptr_t)v6853;
	i8 v6855 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6855)(v6854, v6851, v6850);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+3256 length ws+0
void f404_emit_160(void) {

	i1 v6856 = (i1)+1;
	i1 v6857 = (i1)+4;
	i8 v6858 = (i8)(intptr_t)(ws+3184);
	i8 v6859 = *(i8*)(intptr_t)v6858;
	i1 v6860 = *(i1*)(intptr_t)v6859;
	i8 v6861 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6861)(v6860, v6857, v6856);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+3256 length ws+0
void f405_emit_161(void) {

	i1 v6862 = (i1)+1;
	i1 v6863 = (i1)+8;
	i8 v6864 = (i8)(intptr_t)(ws+3184);
	i8 v6865 = *(i8*)(intptr_t)v6864;
	i1 v6866 = *(i1*)(intptr_t)v6865;
	i8 v6867 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6867)(v6866, v6863, v6862);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+3256 length ws+0
void f406_emit_162(void) {

	i1 v6868 = (i1)+2;
	i1 v6869 = (i1)+1;
	i8 v6870 = (i8)(intptr_t)(ws+3184);
	i8 v6871 = *(i8*)(intptr_t)v6870;
	i1 v6872 = *(i1*)(intptr_t)v6871;
	i8 v6873 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6873)(v6872, v6869, v6868);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+3256 length ws+0
void f407_emit_163(void) {

	i1 v6874 = (i1)+2;
	i1 v6875 = (i1)+4;
	i8 v6876 = (i8)(intptr_t)(ws+3184);
	i8 v6877 = *(i8*)(intptr_t)v6876;
	i1 v6878 = *(i1*)(intptr_t)v6877;
	i8 v6879 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6879)(v6878, v6875, v6874);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+3256 length ws+0
void f408_emit_164(void) {

	i1 v6880 = (i1)+2;
	i1 v6881 = (i1)+8;
	i8 v6882 = (i8)(intptr_t)(ws+3184);
	i8 v6883 = *(i8*)(intptr_t)v6882;
	i1 v6884 = *(i1*)(intptr_t)v6883;
	i8 v6885 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6885)(v6884, v6881, v6880);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+3256 length ws+0
void f409_emit_165(void) {

	i1 v6886 = (i1)+4;
	i1 v6887 = (i1)+1;
	i8 v6888 = (i8)(intptr_t)(ws+3184);
	i8 v6889 = *(i8*)(intptr_t)v6888;
	i1 v6890 = *(i1*)(intptr_t)v6889;
	i8 v6891 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6891)(v6890, v6887, v6886);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+3256 length ws+0
void f410_emit_166(void) {

	i1 v6892 = (i1)+4;
	i1 v6893 = (i1)+2;
	i8 v6894 = (i8)(intptr_t)(ws+3184);
	i8 v6895 = *(i8*)(intptr_t)v6894;
	i1 v6896 = *(i1*)(intptr_t)v6895;
	i8 v6897 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6897)(v6896, v6893, v6892);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+3256 length ws+0
void f411_emit_167(void) {

	i1 v6898 = (i1)+4;
	i1 v6899 = (i1)+8;
	i8 v6900 = (i8)(intptr_t)(ws+3184);
	i8 v6901 = *(i8*)(intptr_t)v6900;
	i1 v6902 = *(i1*)(intptr_t)v6901;
	i8 v6903 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6903)(v6902, v6899, v6898);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_168 workspace at ws+3256 length ws+0
void f412_emit_168(void) {

	i1 v6904 = (i1)+8;
	i1 v6905 = (i1)+1;
	i8 v6906 = (i8)(intptr_t)(ws+3184);
	i8 v6907 = *(i8*)(intptr_t)v6906;
	i1 v6908 = *(i1*)(intptr_t)v6907;
	i8 v6909 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6909)(v6908, v6905, v6904);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_169 workspace at ws+3256 length ws+0
void f413_emit_169(void) {

	i1 v6910 = (i1)+8;
	i1 v6911 = (i1)+2;
	i8 v6912 = (i8)(intptr_t)(ws+3184);
	i8 v6913 = *(i8*)(intptr_t)v6912;
	i1 v6914 = *(i1*)(intptr_t)v6913;
	i8 v6915 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6915)(v6914, v6911, v6910);

endsub:;
}
	void f250_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_170 workspace at ws+3256 length ws+0
void f414_emit_170(void) {

	i1 v6916 = (i1)+8;
	i1 v6917 = (i1)+4;
	i8 v6918 = (i8)(intptr_t)(ws+3184);
	i8 v6919 = *(i8*)(intptr_t)v6918;
	i1 v6920 = *(i1*)(intptr_t)v6919;
	i8 v6921 = (i8)(intptr_t)(f250_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6921)(v6920, v6917, v6916);

endsub:;
}
	void f230_Push(i2* /* vid */);
const i1 c02_s015c[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f164_E(i8 /* text */);
	void f166_E_u16(i2 /* value */);
const i1 c02_s015d[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f164_E(i8 /* text */);
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);
	void f251_E_string(i2* /* sid */, i8 /* text */);
	void f173_E_h16(i2 /* value */);
const i1 c02_s015e[] = { 0x3b,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_171 workspace at ws+3256 length ws+2
void f415_emit_171(void) {

	i8 v6922 = (i8)(intptr_t)(f230_Push);
	i2 v6923;

	((void(*)(i2* /* vid */))(intptr_t)v6922)(&v6923);
	i8 v6924 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v6924 = v6923;

	i8 v6925 = (i8)(intptr_t)c02_s015c;
	i8 v6926 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6926)(v6925);

	i8 v6927 = (i8)(intptr_t)(ws+3256);
	i2 v6928 = *(i2*)(intptr_t)v6927;
	i8 v6929 = (i8)(intptr_t)(f166_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6929)(v6928);

	i8 v6930 = (i8)(intptr_t)c02_s015d;
	i8 v6931 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6931)(v6930);

	i1 v6932 = (i1)+3;
	i8 v6933 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6933)(v6932);

	i1 v6934 = (i1)+115;
	i8 v6935 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6935)(v6934);

	i8 v6936 = (i8)(intptr_t)(ws+3184);
	i8 v6937 = *(i8*)(intptr_t)v6936;
	i8 v6938 = *(i8*)(intptr_t)v6937;
	i8 v6939 = (i8)(intptr_t)(f251_E_string);
	i2 v6940;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v6939)(&v6940, v6938);
	i8 v6941 = (i8)(intptr_t)(f173_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v6941)(v6940);

	i8 v6942 = (i8)(intptr_t)c02_s015e;
	i8 v6943 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6943)(v6942);

endsub:;
}
	void f178_EmitterPushChunk(void);
	void f156_E_b16(i2 /* word */);
const i1 c02_s015f[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
const i1 c02_s0160[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0x2f,0x2f,0x20,0 };
	void f164_E(i8 /* text */);
	void f164_E(i8 /* text */);
	void f161_E_nl(void);

// emit_172 workspace at ws+3256 length ws+0
void f416_emit_172(void) {

	i8 v6944 = (i8)(intptr_t)(f178_EmitterPushChunk);

	((void(*)(void))(intptr_t)v6944)();

	i8 v6945 = (i8)(intptr_t)(ws+40);
	i8 v6946 = *(i8*)(intptr_t)v6945;
	i8 v6947 = v6946+(+72);
	i2 v6948 = *(i2*)(intptr_t)v6947;
	i8 v6949 = (i8)(intptr_t)(f156_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6949)(v6948);

	i8 v6950 = (i8)(intptr_t)c02_s015f;
	i8 v6951 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6951)(v6950);

	i8 v6952 = (i8)(intptr_t)(ws+3184);
	i8 v6953 = *(i8*)(intptr_t)v6952;
	i8 v6954 = *(i8*)(intptr_t)v6953;
	i8 v6955 = v6954+(+24);
	i8 v6956 = *(i8*)(intptr_t)v6955;
	i8 v6957 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6957)(v6956);

	i8 v6958 = (i8)(intptr_t)c02_s0160;
	i8 v6959 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6959)(v6958);

	i8 v6960 = (i8)(intptr_t)(ws+3184);
	i8 v6961 = *(i8*)(intptr_t)v6960;
	i8 v6962 = *(i8*)(intptr_t)v6961;
	i8 v6963 = v6962+(+48);
	i8 v6964 = *(i8*)(intptr_t)v6963;
	i8 v6965 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6965)(v6964);

	i8 v6966 = (i8)(intptr_t)(f161_E_nl);

	((void(*)(void))(intptr_t)v6966)();

	i1 v6967 = (i1)+0;
	i8 v6968 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v6968 = v6967;

endsub:;
}
	void f253_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_173 workspace at ws+3256 length ws+0
void f417_emit_173(void) {

	i8 v6969 = (i8)(intptr_t)(ws+3184);
	i8 v6970 = *(i8*)(intptr_t)v6969;
	i1 v6971 = (i1)+1;
	i8 v6972 = (i8)(intptr_t)(f253_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v6972)(v6971, v6970);

endsub:;
}
	void f253_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_174 workspace at ws+3256 length ws+0
void f418_emit_174(void) {

	i8 v6973 = (i8)(intptr_t)(ws+3184);
	i8 v6974 = *(i8*)(intptr_t)v6973;
	i1 v6975 = (i1)+2;
	i8 v6976 = (i8)(intptr_t)(f253_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v6976)(v6975, v6974);

endsub:;
}
	void f253_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_175 workspace at ws+3256 length ws+0
void f419_emit_175(void) {

	i8 v6977 = (i8)(intptr_t)(ws+3184);
	i8 v6978 = *(i8*)(intptr_t)v6977;
	i1 v6979 = (i1)+4;
	i8 v6980 = (i8)(intptr_t)(f253_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v6980)(v6979, v6978);

endsub:;
}
	void f253_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_176 workspace at ws+3256 length ws+0
void f420_emit_176(void) {

	i8 v6981 = (i8)(intptr_t)(ws+3184);
	i8 v6982 = *(i8*)(intptr_t)v6981;
	i1 v6983 = (i1)+8;
	i8 v6984 = (i8)(intptr_t)(f253_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v6984)(v6983, v6982);

endsub:;
}
	void f254_CheckBufferAlignment(void);
const i1 c02_s0161[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f164_E(i8 /* text */);
	void f226_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0162[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_177 workspace at ws+3256 length ws+0
void f421_emit_177(void) {

	i8 v6985 = (i8)(intptr_t)(f254_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v6985)();

	i8 v6986 = (i8)(intptr_t)c02_s0161;
	i8 v6987 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6987)(v6986);

	i8 v6988 = (i8)(intptr_t)(ws+3184);
	i8 v6989 = *(i8*)(intptr_t)v6988;
	i8 v6990 = *(i8*)(intptr_t)v6989;
	i8 v6991 = (i8)(intptr_t)(ws+3184);
	i8 v6992 = *(i8*)(intptr_t)v6991;
	i8 v6993 = v6992+(+8);
	i2 v6994 = *(i2*)(intptr_t)v6993;
	i8 v6995 = (i8)(intptr_t)(f226_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6995)(v6994, v6990);

	i8 v6996 = (i8)(intptr_t)c02_s0162;
	i8 v6997 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v6997)(v6996);

endsub:;
}
	void f254_CheckBufferAlignment(void);
const i1 c02_s0163[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f164_E(i8 /* text */);
	void f155_E_b8(i1 /* byte */);
	void f155_E_b8(i1 /* byte */);
	void f251_E_string(i2* /* sid */, i8 /* text */);
	void f173_E_h16(i2 /* value */);
const i1 c02_s0164[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f164_E(i8 /* text */);

// emit_178 workspace at ws+3256 length ws+0
void f422_emit_178(void) {

	i8 v6998 = (i8)(intptr_t)(f254_CheckBufferAlignment);

	((void(*)(void))(intptr_t)v6998)();

	i8 v6999 = (i8)(intptr_t)c02_s0163;
	i8 v7000 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7000)(v6999);

	i1 v7001 = (i1)+3;
	i8 v7002 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7002)(v7001);

	i1 v7003 = (i1)+115;
	i8 v7004 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7004)(v7003);

	i8 v7005 = (i8)(intptr_t)(ws+3184);
	i8 v7006 = *(i8*)(intptr_t)v7005;
	i8 v7007 = *(i8*)(intptr_t)v7006;
	i8 v7008 = (i8)(intptr_t)(f251_E_string);
	i2 v7009;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v7008)(&v7009, v7007);
	i8 v7010 = (i8)(intptr_t)(f173_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v7010)(v7009);

	i8 v7011 = (i8)(intptr_t)c02_s0164;
	i8 v7012 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7012)(v7011);

endsub:;
}
	void f252_FlushInitialiserBuffer(void);
const i1 c02_s0165[] = { 0x7d,0x3b,0x0a,0 };
	void f164_E(i8 /* text */);
	void f179_EmitterPopChunk(i1 /* type */);

// emit_179 workspace at ws+3256 length ws+0
void f423_emit_179(void) {

	i8 v7013 = (i8)(intptr_t)(f252_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v7013)();

	i8 v7014 = (i8)(intptr_t)c02_s0165;
	i8 v7015 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7015)(v7014);

	i1 v7016 = (i1)+83;
	i8 v7017 = (i8)(intptr_t)(f179_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v7017)(v7016);

endsub:;
}
	void f160_E_tab(void);

// emit_182 workspace at ws+3256 length ws+0
void f424_emit_182(void) {

	i8 v7018 = (i8)(intptr_t)(f160_E_tab);

	((void(*)(void))(intptr_t)v7018)();

endsub:;
}
	void f164_E(i8 /* text */);
	void f158_E_space(void);

// emit_183 workspace at ws+3256 length ws+0
void f425_emit_183(void) {

	i8 v7019 = (i8)(intptr_t)(ws+3184);
	i8 v7020 = *(i8*)(intptr_t)v7019;
	i8 v7021 = *(i8*)(intptr_t)v7020;
	i8 v7022 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7022)(v7021);

	i8 v7023 = (i8)(intptr_t)(f158_E_space);

	((void(*)(void))(intptr_t)v7023)();

endsub:;
}
const i1 c02_s0166[] = { 0x2a,0x28,0x69,0 };
	void f164_E(i8 /* text */);
	void f167_E_u8(i1 /* value */);
const i1 c02_s0167[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f164_E(i8 /* text */);
	void f226_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0168[] = { 0x29,0 };
	void f164_E(i8 /* text */);
	void f176_E_subref(i8 /* subr */);
	void f158_E_space(void);

// emit_184 workspace at ws+3256 length ws+0
void f426_emit_184(void) {

	i8 v7024 = (i8)(intptr_t)(ws+3184);
	i8 v7025 = *(i8*)(intptr_t)v7024;
	i8 v7026 = *(i8*)(intptr_t)v7025;
	i8 v7027 = v7026+(+46);
	i1 v7028 = *(i1*)(intptr_t)v7027;
	i1 v7029 = (i1)+28;
	if (v7028==v7029) goto c02_04a9; else goto c02_04aa;

c02_04a9:;

	i8 v7030 = (i8)(intptr_t)c02_s0166;
	i8 v7031 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7031)(v7030);

	i8 v7032 = (i8)(intptr_t)(ws+3184);
	i8 v7033 = *(i8*)(intptr_t)v7032;
	i8 v7034 = *(i8*)(intptr_t)v7033;
	i8 v7035 = *(i8*)(intptr_t)v7034;
	i8 v7036 = v7035+(+42);
	i2 v7037 = *(i2*)(intptr_t)v7036;
	i1 v7038 = v7037;
	i8 v7039 = (i8)(intptr_t)(f167_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v7039)(v7038);

	i8 v7040 = (i8)(intptr_t)c02_s0167;
	i8 v7041 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7041)(v7040);

	i8 v7042 = (i8)(intptr_t)(ws+3184);
	i8 v7043 = *(i8*)(intptr_t)v7042;
	i8 v7044 = *(i8*)(intptr_t)v7043;
	i2 v7045 = (i2)+0;
	i8 v7046 = (i8)(intptr_t)(f226_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v7046)(v7045, v7044);

	i8 v7047 = (i8)(intptr_t)c02_s0168;
	i8 v7048 = (i8)(intptr_t)(f164_E);

	((void(*)(i8 /* text */))(intptr_t)v7048)(v7047);

	goto c02_04a6;

c02_04aa:;

	i8 v7049 = (i8)(intptr_t)(ws+3184);
	i8 v7050 = *(i8*)(intptr_t)v7049;
	i8 v7051 = *(i8*)(intptr_t)v7050;
	i8 v7052 = *(i8*)(intptr_t)v7051;
	i8 v7053 = (i8)(intptr_t)(f176_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v7053)(v7052);

c02_04a6:;

	i8 v7054 = (i8)(intptr_t)(f158_E_space);

	((void(*)(void))(intptr_t)v7054)();

endsub:;
}
	void f155_E_b8(i1 /* byte */);
	void f170_E_i32(i4 /* value */);
	void f155_E_b8(i1 /* byte */);

// emit_185 workspace at ws+3256 length ws+0
void f427_emit_185(void) {

	i1 v7055 = (i1)+40;
	i8 v7056 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7056)(v7055);

	i8 v7057 = (i8)(intptr_t)(ws+3184);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i4 v7059 = *(i4*)(intptr_t)v7058;
	i8 v7060 = (i8)(intptr_t)(f170_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v7060)(v7059);

	i1 v7061 = (i1)+41;
	i8 v7062 = (i8)(intptr_t)(f155_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7062)(v7061);

endsub:;
}
	void f161_E_nl(void);

// emit_186 workspace at ws+3256 length ws+0
void f428_emit_186(void) {

	i8 v7063 = (i8)(intptr_t)(f161_E_nl);

	((void(*)(void))(intptr_t)v7063)();

endsub:;
}

// nop_emitter workspace at ws+3256 length ws+0
void f429_nop_emitter(void) {

endsub:;
}
	void f258_emit_0(void);
	void f259_emit_1(void);
	void f260_emit_2(void);
	void f261_emit_3(void);
	void f262_emit_4(void);
	void f263_emit_5(void);
	void f264_emit_6(void);
	void f265_emit_7(void);
	void f266_emit_8(void);
	void f267_emit_9(void);
	void f268_emit_10(void);
	void f269_emit_11(void);
	void f270_emit_12(void);
	void f271_emit_13(void);
	void f272_emit_14(void);
	void f273_emit_15(void);
	void f274_emit_16(void);
	void f275_emit_17(void);
	void f276_emit_18(void);
	void f277_emit_19(void);
	void f278_emit_20(void);
	void f279_emit_21(void);
	void f280_emit_22(void);
	void f281_emit_23(void);
	void f282_emit_24(void);
	void f283_emit_25(void);
	void f284_emit_26(void);
	void f285_emit_27(void);
	void f286_emit_28(void);
	void f287_emit_29(void);
	void f288_emit_30(void);
	void f289_emit_31(void);
	void f290_emit_32(void);
	void f291_emit_33(void);
	void f292_emit_34(void);
	void f293_emit_35(void);
	void f294_emit_36(void);
	void f295_emit_37(void);
	void f296_emit_38(void);
	void f297_emit_39(void);
	void f298_emit_40(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f299_emit_43(void);
	void f300_emit_44(void);
	void f301_emit_45(void);
	void f302_emit_46(void);
	void f304_emit_47(void);
	void f305_emit_48(void);
	void f306_emit_49(void);
	void f307_emit_50(void);
	void f308_emit_51(void);
	void f309_emit_52(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f310_emit_62(void);
	void f311_emit_63(void);
	void f312_emit_64(void);
	void f313_emit_65(void);
	void f314_emit_66(void);
	void f315_emit_67(void);
	void f316_emit_68(void);
	void f317_emit_69(void);
	void f318_emit_70(void);
	void f319_emit_71(void);
	void f320_emit_72(void);
	void f321_emit_73(void);
	void f322_emit_74(void);
	void f323_emit_75(void);
	void f324_emit_76(void);
	void f325_emit_77(void);
	void f326_emit_78(void);
	void f327_emit_79(void);
	void f328_emit_80(void);
	void f329_emit_81(void);
	void f330_emit_82(void);
	void f331_emit_83(void);
	void f332_emit_84(void);
	void f333_emit_85(void);
	void f334_emit_86(void);
	void f335_emit_87(void);
	void f336_emit_88(void);
	void f337_emit_89(void);
	void f338_emit_90(void);
	void f339_emit_91(void);
	void f340_emit_92(void);
	void f341_emit_93(void);
	void f342_emit_94(void);
	void f343_emit_95(void);
	void f344_emit_96(void);
	void f345_emit_97(void);
	void f346_emit_98(void);
	void f347_emit_99(void);
	void f348_emit_100(void);
	void f349_emit_101(void);
	void f350_emit_102(void);
	void f351_emit_103(void);
	void f352_emit_104(void);
	void f353_emit_105(void);
	void f354_emit_106(void);
	void f355_emit_107(void);
	void f356_emit_108(void);
	void f357_emit_109(void);
	void f358_emit_110(void);
	void f359_emit_111(void);
	void f360_emit_112(void);
	void f361_emit_113(void);
	void f362_emit_114(void);
	void f363_emit_115(void);
	void f364_emit_116(void);
	void f365_emit_117(void);
	void f366_emit_118(void);
	void f367_emit_119(void);
	void f368_emit_120(void);
	void f369_emit_121(void);
	void f370_emit_122(void);
	void f371_emit_123(void);
	void f372_emit_124(void);
	void f373_emit_125(void);
	void f374_emit_126(void);
	void f375_emit_127(void);
	void f376_emit_128(void);
	void f377_emit_129(void);
	void f378_emit_130(void);
	void f379_emit_131(void);
	void f380_emit_132(void);
	void f381_emit_133(void);
	void f382_emit_134(void);
	void f383_emit_135(void);
	void f384_emit_136(void);
	void f385_emit_137(void);
	void f386_emit_138(void);
	void f387_emit_139(void);
	void f388_emit_140(void);
	void f389_emit_141(void);
	void f390_emit_142(void);
	void f391_emit_143(void);
	void f392_emit_144(void);
	void f393_emit_145(void);
	void f394_emit_146(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f395_emit_151(void);
	void f396_emit_152(void);
	void f397_emit_153(void);
	void f398_emit_154(void);
	void f399_emit_155(void);
	void f400_emit_156(void);
	void f401_emit_157(void);
	void f402_emit_158(void);
	void f403_emit_159(void);
	void f404_emit_160(void);
	void f405_emit_161(void);
	void f406_emit_162(void);
	void f407_emit_163(void);
	void f408_emit_164(void);
	void f409_emit_165(void);
	void f410_emit_166(void);
	void f411_emit_167(void);
	void f412_emit_168(void);
	void f413_emit_169(void);
	void f414_emit_170(void);
	void f415_emit_171(void);
	void f416_emit_172(void);
	void f417_emit_173(void);
	void f418_emit_174(void);
	void f419_emit_175(void);
	void f420_emit_176(void);
	void f421_emit_177(void);
	void f422_emit_178(void);
	void f423_emit_179(void);
	void f429_nop_emitter(void);
	void f429_nop_emitter(void);
	void f424_emit_182(void);
	void f425_emit_183(void);
	void f426_emit_184(void);
	void f427_emit_185(void);
	void f428_emit_186(void);
static data c02_a4ab[] = { // emitters

	{ .ptr = (void*)f258_emit_0 },

	{ .ptr = (void*)f259_emit_1 },

	{ .ptr = (void*)f260_emit_2 },

	{ .ptr = (void*)f261_emit_3 },

	{ .ptr = (void*)f262_emit_4 },

	{ .ptr = (void*)f263_emit_5 },

	{ .ptr = (void*)f264_emit_6 },

	{ .ptr = (void*)f265_emit_7 },

	{ .ptr = (void*)f266_emit_8 },

	{ .ptr = (void*)f267_emit_9 },

	{ .ptr = (void*)f268_emit_10 },

	{ .ptr = (void*)f269_emit_11 },

	{ .ptr = (void*)f270_emit_12 },

	{ .ptr = (void*)f271_emit_13 },

	{ .ptr = (void*)f272_emit_14 },

	{ .ptr = (void*)f273_emit_15 },

	{ .ptr = (void*)f274_emit_16 },

	{ .ptr = (void*)f275_emit_17 },

	{ .ptr = (void*)f276_emit_18 },

	{ .ptr = (void*)f277_emit_19 },

	{ .ptr = (void*)f278_emit_20 },

	{ .ptr = (void*)f279_emit_21 },

	{ .ptr = (void*)f280_emit_22 },

	{ .ptr = (void*)f281_emit_23 },

	{ .ptr = (void*)f282_emit_24 },

	{ .ptr = (void*)f283_emit_25 },

	{ .ptr = (void*)f284_emit_26 },

	{ .ptr = (void*)f285_emit_27 },

	{ .ptr = (void*)f286_emit_28 },

	{ .ptr = (void*)f287_emit_29 },

	{ .ptr = (void*)f288_emit_30 },

	{ .ptr = (void*)f289_emit_31 },

	{ .ptr = (void*)f290_emit_32 },

	{ .ptr = (void*)f291_emit_33 },

	{ .ptr = (void*)f292_emit_34 },

	{ .ptr = (void*)f293_emit_35 },

	{ .ptr = (void*)f294_emit_36 },

	{ .ptr = (void*)f295_emit_37 },

	{ .ptr = (void*)f296_emit_38 },

	{ .ptr = (void*)f297_emit_39 },

	{ .ptr = (void*)f298_emit_40 },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f299_emit_43 },

	{ .ptr = (void*)f300_emit_44 },

	{ .ptr = (void*)f301_emit_45 },

	{ .ptr = (void*)f302_emit_46 },

	{ .ptr = (void*)f304_emit_47 },

	{ .ptr = (void*)f305_emit_48 },

	{ .ptr = (void*)f306_emit_49 },

	{ .ptr = (void*)f307_emit_50 },

	{ .ptr = (void*)f308_emit_51 },

	{ .ptr = (void*)f309_emit_52 },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f310_emit_62 },

	{ .ptr = (void*)f311_emit_63 },

	{ .ptr = (void*)f312_emit_64 },

	{ .ptr = (void*)f313_emit_65 },

	{ .ptr = (void*)f314_emit_66 },

	{ .ptr = (void*)f315_emit_67 },

	{ .ptr = (void*)f316_emit_68 },

	{ .ptr = (void*)f317_emit_69 },

	{ .ptr = (void*)f318_emit_70 },

	{ .ptr = (void*)f319_emit_71 },

	{ .ptr = (void*)f320_emit_72 },

	{ .ptr = (void*)f321_emit_73 },

	{ .ptr = (void*)f322_emit_74 },

	{ .ptr = (void*)f323_emit_75 },

	{ .ptr = (void*)f324_emit_76 },

	{ .ptr = (void*)f325_emit_77 },

	{ .ptr = (void*)f326_emit_78 },

	{ .ptr = (void*)f327_emit_79 },

	{ .ptr = (void*)f328_emit_80 },

	{ .ptr = (void*)f329_emit_81 },

	{ .ptr = (void*)f330_emit_82 },

	{ .ptr = (void*)f331_emit_83 },

	{ .ptr = (void*)f332_emit_84 },

	{ .ptr = (void*)f333_emit_85 },

	{ .ptr = (void*)f334_emit_86 },

	{ .ptr = (void*)f335_emit_87 },

	{ .ptr = (void*)f336_emit_88 },

	{ .ptr = (void*)f337_emit_89 },

	{ .ptr = (void*)f338_emit_90 },

	{ .ptr = (void*)f339_emit_91 },

	{ .ptr = (void*)f340_emit_92 },

	{ .ptr = (void*)f341_emit_93 },

	{ .ptr = (void*)f342_emit_94 },

	{ .ptr = (void*)f343_emit_95 },

	{ .ptr = (void*)f344_emit_96 },

	{ .ptr = (void*)f345_emit_97 },

	{ .ptr = (void*)f346_emit_98 },

	{ .ptr = (void*)f347_emit_99 },

	{ .ptr = (void*)f348_emit_100 },

	{ .ptr = (void*)f349_emit_101 },

	{ .ptr = (void*)f350_emit_102 },

	{ .ptr = (void*)f351_emit_103 },

	{ .ptr = (void*)f352_emit_104 },

	{ .ptr = (void*)f353_emit_105 },

	{ .ptr = (void*)f354_emit_106 },

	{ .ptr = (void*)f355_emit_107 },

	{ .ptr = (void*)f356_emit_108 },

	{ .ptr = (void*)f357_emit_109 },

	{ .ptr = (void*)f358_emit_110 },

	{ .ptr = (void*)f359_emit_111 },

	{ .ptr = (void*)f360_emit_112 },

	{ .ptr = (void*)f361_emit_113 },

	{ .ptr = (void*)f362_emit_114 },

	{ .ptr = (void*)f363_emit_115 },

	{ .ptr = (void*)f364_emit_116 },

	{ .ptr = (void*)f365_emit_117 },

	{ .ptr = (void*)f366_emit_118 },

	{ .ptr = (void*)f367_emit_119 },

	{ .ptr = (void*)f368_emit_120 },

	{ .ptr = (void*)f369_emit_121 },

	{ .ptr = (void*)f370_emit_122 },

	{ .ptr = (void*)f371_emit_123 },

	{ .ptr = (void*)f372_emit_124 },

	{ .ptr = (void*)f373_emit_125 },

	{ .ptr = (void*)f374_emit_126 },

	{ .ptr = (void*)f375_emit_127 },

	{ .ptr = (void*)f376_emit_128 },

	{ .ptr = (void*)f377_emit_129 },

	{ .ptr = (void*)f378_emit_130 },

	{ .ptr = (void*)f379_emit_131 },

	{ .ptr = (void*)f380_emit_132 },

	{ .ptr = (void*)f381_emit_133 },

	{ .ptr = (void*)f382_emit_134 },

	{ .ptr = (void*)f383_emit_135 },

	{ .ptr = (void*)f384_emit_136 },

	{ .ptr = (void*)f385_emit_137 },

	{ .ptr = (void*)f386_emit_138 },

	{ .ptr = (void*)f387_emit_139 },

	{ .ptr = (void*)f388_emit_140 },

	{ .ptr = (void*)f389_emit_141 },

	{ .ptr = (void*)f390_emit_142 },

	{ .ptr = (void*)f391_emit_143 },

	{ .ptr = (void*)f392_emit_144 },

	{ .ptr = (void*)f393_emit_145 },

	{ .ptr = (void*)f394_emit_146 },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f395_emit_151 },

	{ .ptr = (void*)f396_emit_152 },

	{ .ptr = (void*)f397_emit_153 },

	{ .ptr = (void*)f398_emit_154 },

	{ .ptr = (void*)f399_emit_155 },

	{ .ptr = (void*)f400_emit_156 },

	{ .ptr = (void*)f401_emit_157 },

	{ .ptr = (void*)f402_emit_158 },

	{ .ptr = (void*)f403_emit_159 },

	{ .ptr = (void*)f404_emit_160 },

	{ .ptr = (void*)f405_emit_161 },

	{ .ptr = (void*)f406_emit_162 },

	{ .ptr = (void*)f407_emit_163 },

	{ .ptr = (void*)f408_emit_164 },

	{ .ptr = (void*)f409_emit_165 },

	{ .ptr = (void*)f410_emit_166 },

	{ .ptr = (void*)f411_emit_167 },

	{ .ptr = (void*)f412_emit_168 },

	{ .ptr = (void*)f413_emit_169 },

	{ .ptr = (void*)f414_emit_170 },

	{ .ptr = (void*)f415_emit_171 },

	{ .ptr = (void*)f416_emit_172 },

	{ .ptr = (void*)f417_emit_173 },

	{ .ptr = (void*)f418_emit_174 },

	{ .ptr = (void*)f419_emit_175 },

	{ .ptr = (void*)f420_emit_176 },

	{ .ptr = (void*)f421_emit_177 },

	{ .ptr = (void*)f422_emit_178 },

	{ .ptr = (void*)f423_emit_179 },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f429_nop_emitter },

	{ .ptr = (void*)f424_emit_182 },

	{ .ptr = (void*)f425_emit_183 },

	{ .ptr = (void*)f426_emit_184 },

	{ .ptr = (void*)f427_emit_185 },

	{ .ptr = (void*)f428_emit_186 },

};

// EmitOneInstruction workspace at ws+3168 length ws+82
void f256_EmitOneInstruction(i8 p5857 /* self */, i1 p5858 /* ruleid */) {
	*(i1*)(intptr_t)(ws+3168) = p5858; /*ruleid */
	*(i8*)(intptr_t)(ws+3176) = p5857; /*self */

	i8 v5859 = (i8)(intptr_t)(ws+3176);
	i8 v5860 = *(i8*)(intptr_t)v5859;
	i8 v5861 = v5860+(+16);
	i8 v5862 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5862 = v5861;

	i8 v5863 = (i8)(intptr_t)(ws+3184);
	i8 v5864 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v5864 = v5863;

	i1 v5865 = (i1)+3;
	i8 v5866 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5866 = v5865;

c02_047b:;

	i8 v5867 = (i8)(intptr_t)(ws+3248);
	i1 v5868 = *(i1*)(intptr_t)v5867;
	i1 v5869 = (i1)+0;
	if (v5868==v5869) goto c02_047e; else goto c02_047d;

c02_047d:;

	i8 v5870 = (i8)(intptr_t)(ws+3232);
	i8 v5871 = *(i8*)(intptr_t)v5870;
	i8 v5872 = *(i8*)(intptr_t)v5871;
	i8 v5873 = (i8)(intptr_t)(ws+3240);
	i8 v5874 = *(i8*)(intptr_t)v5873;
	*(i8*)(intptr_t)v5874 = v5872;

	i8 v5875 = (i8)(intptr_t)(ws+3240);
	i8 v5876 = *(i8*)(intptr_t)v5875;
	i8 v5877 = *(i8*)(intptr_t)v5876;
	i8 v5878 = (i8)+0;
	if (v5877==v5878) goto c02_0483; else goto c02_0482;

c02_0482:;

	i8 v5879 = (i8)(intptr_t)(ws+3240);
	i8 v5880 = *(i8*)(intptr_t)v5879;
	i8 v5881 = *(i8*)(intptr_t)v5880;
	i8 v5882 = v5881+(+57);
	i1 v5883 = *(i1*)(intptr_t)v5882;
	i8 v5884 = (i8)(intptr_t)(ws+3240);
	i8 v5885 = *(i8*)(intptr_t)v5884;
	i8 v5886 = v5885+(+8);
	*(i1*)(intptr_t)v5886 = v5883;

	goto c02_047f;

c02_0483:;

c02_047f:;

	i8 v5887 = (i8)(intptr_t)(ws+3232);
	i8 v5888 = *(i8*)(intptr_t)v5887;
	i8 v5889 = v5888+(+8);
	i8 v5890 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5890 = v5889;

	i8 v5891 = (i8)(intptr_t)(ws+3240);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i8 v5893 = v5892+(+16);
	i8 v5894 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v5894 = v5893;

	i8 v5895 = (i8)(intptr_t)(ws+3248);
	i1 v5896 = *(i1*)(intptr_t)v5895;
	i1 v5897 = v5896+(-1);
	i8 v5898 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5898 = v5897;

	goto c02_047b;

c02_047e:;

	i8 v5899 = (i8)(intptr_t)(ws+3176);
	i8 v5900 = *(i8*)(intptr_t)v5899;
	i8 v5901 = v5900+(+41);
	i1 v5902 = *(i1*)(intptr_t)v5901;
	i8 v5903 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5903 = v5902;














































































































































































	i8 v7064 = (i8)(intptr_t)(((i1*)c02_a4ab+0));
	i8 v7065 = (i8)(intptr_t)(ws+3168);
	i1 v7066 = *(i1*)(intptr_t)v7065;
	i8 v7067 = v7066;
	i1 v7068 = (i1)+3;
	i8 v7069 = ((i8)v7067)<<v7068;
	i8 v7070 = v7064+v7069;
	i8 v7071 = *(i8*)(intptr_t)v7070;

	((void(*)(void))(intptr_t)v7071)();

endsub:;
}
static data c02_a4ac[] = { // codegen_midcodes








	{ .i1 = { 0x3a,0x2b,0x2b,0x9f,0x2b,0xa0,0x2b,0xa1}},








	{ .i1 = { 0x2b,0xa2,0x2b,0x86,0x2b,0x87,0x2b,0x88}},








	{ .i1 = { 0x2b,0x89,0x2b,0xa4,0x2b,0xa5,0x2b,0xa6}},








	{ .i1 = { 0x2b,0xa7,0x2b,0x8b,0x2b,0x8c,0x2b,0x8d}},








	{ .i1 = { 0x2b,0x8e,0x2b,0x95,0x2b,0x96,0x2b,0x97}},








	{ .i1 = { 0x2b,0x98,0x2b,0x90,0x2b,0x91,0x2b,0x92}},








	{ .i1 = { 0x2b,0x93,0x2b,0x9a,0x2b,0x9b,0x2b,0x9c}},








	{ .i1 = { 0x2b,0x9d,0x2b,0xa9,0x2b,0xaa,0x2b,0xab}},








	{ .i1 = { 0x2b,0xac,0x2b,0xae,0x2b,0xaf,0x2b,0xb0}},








	{ .i1 = { 0x2b,0xb1,0x2b,0xb3,0x2b,0xb4,0x2b,0xb5}},








	{ .i1 = { 0x2b,0xb6,0x2b,0x02,0x03,0x18,0x19,0x1a}},








	{ .i1 = { 0x04,0x05,0x1b,0x1d,0x1e,0x1f,0x20,0x01}},








	{ .i1 = { 0x22,0x23,0x24,0x25,0x27,0x28,0x29,0x2a}},








	{ .i1 = { 0x2b,0x2b,0x2b,0x2b,0x2d,0x34,0x35,0x36}},








	{ .i1 = { 0x37,0x2f,0x30,0x31,0x32,0x9f,0xa0,0xa1}},








	{ .i1 = { 0xa2,0x86,0x87,0x88,0x89,0xa4,0xa5,0xa6}},








	{ .i1 = { 0xa7,0x8b,0x8c,0x8d,0x8e,0x95,0x96,0x97}},








	{ .i1 = { 0x98,0x90,0x91,0x92,0x93,0x9a,0x9b,0x9c}},








	{ .i1 = { 0x9d,0xa9,0xaa,0xab,0xac,0xae,0xaf,0xb0}},








	{ .i1 = { 0xb1,0xb3,0xb4,0xb5,0xb6,0x72,0x73,0x74}},








	{ .i1 = { 0x75,0x6d,0x6e,0x6f,0x70,0x77,0x78,0x79}},








	{ .i1 = { 0x7a,0x7c,0x7d,0x7e,0x7f,0x81,0x82,0x83}},








	{ .i1 = { 0x84,0x3b,0x3c,0x3d,0x3e,0x45,0x46,0x47}},








	{ .i1 = { 0x48,0x40,0x41,0x42,0x43,0x4a,0x4b,0x4c}},








	{ .i1 = { 0x4d,0x4f,0x50,0x51,0x52,0x54,0x55,0x56}},








	{ .i1 = { 0x57,0x5a,0x5b,0x5c,0x5e,0x60,0x61,0x63}},








	{ .i1 = { 0x64,0x66,0x68,0x69,0x6a,0x2c,0x06,0x08}},








	{ .i1 = { 0x09,0x0a,0x0b,0x0d,0x0c,0x0e,0x0f,0x10}},






	{ .i1 = { 0x11,0x12,0x13,0x14,0x15}},
};
static data c02_a4ad[] = { // codegen_registers








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x01,0x02,0x04,0x08,0x01,0x02,0x04,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x08,0x10,0x08,0x10,0x08}},








	{ .i1 = { 0x10,0x08,0x10,0x01,0x10,0x02,0x10,0x04}},








	{ .i1 = { 0x10,0x08,0x01,0x08,0x02,0x08,0x04,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x02}},








	{ .i1 = { 0x04,0x08,0x01,0x02,0x04,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x01,0x04,0x01,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x01,0x04,0x01,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x01,0x04,0x01,0x08,0x01,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x01}},








	{ .i1 = { 0x02,0x02,0x04,0x04,0x08,0x08,0x01,0x02}},








	{ .i1 = { 0x04,0x08,0x01,0x01,0x01,0x02,0x02,0x02}},







	{ .i1 = { 0x04,0x04,0x04,0x08,0x08,0x08}},
};
static data c02_a4ae[] = { // codegen_rules








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








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x01,0x07,0x06,0x00,0x02}},








	{ .i1 = { 0x02,0x00,0x01,0x07,0x06,0x00,0x04,0x04}},








	{ .i1 = { 0x00,0x01,0x07,0x06,0x00,0x08,0x08,0x00}},








	{ .i1 = { 0x01,0x07,0x06,0x00,0x10,0x10,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x10,0x10,0x00,0x01,0x07}},








	{ .i1 = { 0x06,0x00,0x10,0x10,0x00,0x01,0x07,0x06}},








	{ .i1 = { 0x00,0x10,0x10,0x00,0x01,0x07,0x06,0x00}},








	{ .i1 = { 0x10,0x10,0x00,0x01,0x07,0x06,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x01,0x01,0x00,0x00,0x02,0x02}},








	{ .i1 = { 0x00,0x01,0x01,0x00,0x00,0x04,0x04,0x00}},








	{ .i1 = { 0x01,0x01,0x00,0x00,0x08,0x08,0x00,0x01}},








	{ .i1 = { 0x01,0x00,0x00,0x01,0x01,0x00,0x01,0x01}},








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








	{ .i1 = { 0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x00}},






	{ .i1 = { 0x00,0x00,0x01,0x01,0x00}},
};

// PopulateMatchBuffer workspace at ws+3216 length ws+24
void f430_PopulateMatchBuffer(i8 p7072 /* matchbuf */, i8 p7073 /* n */, i8 p7074 /* insn */) {
	*(i8*)(intptr_t)(ws+3216) = p7074; /*insn */
	*(i8*)(intptr_t)(ws+3224) = p7073; /*n */
	*(i8*)(intptr_t)(ws+3232) = p7072; /*matchbuf */

	i8 v7075 = (i8)(intptr_t)(ws+3224);
	i8 v7076 = *(i8*)(intptr_t)v7075;
	i8 v7077 = *(i8*)(intptr_t)v7076;
	i8 v7078 = v7077+(+58);
	i1 v7079 = *(i1*)(intptr_t)v7078;
	i8 v7080 = (i8)(intptr_t)(ws+3232);
	i8 v7081 = *(i8*)(intptr_t)v7080;
	*(i1*)(intptr_t)v7081 = v7079;

	i8 v7082 = (i8)(intptr_t)(ws+3224);
	i8 v7083 = *(i8*)(intptr_t)v7082;
	i8 v7084 = *(i8*)(intptr_t)v7083;
	i8 v7085 = v7084+(+24);
	i8 v7086 = *(i8*)(intptr_t)v7085;
	i8 v7087 = (i8)(intptr_t)(ws+3224);
	i8 v7088 = *(i8*)(intptr_t)v7087;
	i8 v7089 = v7088+(+8);
	*(i8*)(intptr_t)v7089 = v7086;

	i8 v7090 = (i8)(intptr_t)(ws+3224);
	i8 v7091 = *(i8*)(intptr_t)v7090;
	i8 v7092 = v7091+(+8);
	i8 v7093 = *(i8*)(intptr_t)v7092;
	i8 v7094 = (i8)+0;
	if (v7093==v7094) goto c02_04b3; else goto c02_04b2;

c02_04b2:;

	i8 v7095 = (i8)(intptr_t)(ws+3224);
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i8 v7097 = v7096+(+8);
	i8 v7098 = *(i8*)(intptr_t)v7097;
	i8 v7099 = v7098+(+58);
	i1 v7100 = *(i1*)(intptr_t)v7099;
	i8 v7101 = (i8)(intptr_t)(ws+3232);
	i8 v7102 = *(i8*)(intptr_t)v7101;
	i8 v7103 = v7102+(+1);
	*(i1*)(intptr_t)v7103 = v7100;

	goto c02_04af;

c02_04b3:;

c02_04af:;

	i8 v7104 = (i8)(intptr_t)(ws+3224);
	i8 v7105 = *(i8*)(intptr_t)v7104;
	i8 v7106 = *(i8*)(intptr_t)v7105;
	i8 v7107 = v7106+(+32);
	i8 v7108 = *(i8*)(intptr_t)v7107;
	i8 v7109 = (i8)(intptr_t)(ws+3224);
	i8 v7110 = *(i8*)(intptr_t)v7109;
	i8 v7111 = v7110+(+16);
	*(i8*)(intptr_t)v7111 = v7108;

	i8 v7112 = (i8)(intptr_t)(ws+3224);
	i8 v7113 = *(i8*)(intptr_t)v7112;
	i8 v7114 = v7113+(+16);
	i8 v7115 = *(i8*)(intptr_t)v7114;
	i8 v7116 = (i8)+0;
	if (v7115==v7116) goto c02_04b8; else goto c02_04b7;

c02_04b7:;

	i8 v7117 = (i8)(intptr_t)(ws+3224);
	i8 v7118 = *(i8*)(intptr_t)v7117;
	i8 v7119 = v7118+(+16);
	i8 v7120 = *(i8*)(intptr_t)v7119;
	i8 v7121 = v7120+(+58);
	i1 v7122 = *(i1*)(intptr_t)v7121;
	i8 v7123 = (i8)(intptr_t)(ws+3232);
	i8 v7124 = *(i8*)(intptr_t)v7123;
	i8 v7125 = v7124+(+2);
	*(i1*)(intptr_t)v7125 = v7122;

	goto c02_04b4;

c02_04b8:;

c02_04b4:;

endsub:;
}

// IsStackedRegister workspace at ws+3184 length ws+16
void f431_IsStackedRegister(i1* p7126 /* result */, i1 p7127 /* regid */) {
	*(i1*)(intptr_t)(ws+3184) = p7127; /*regid */

	i1 v7128 = (i1)+0;
	i8 v7129 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v7129 = v7128;

	i8 v7130 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v7131 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7131 = v7130;

c02_04bb:;

	i8 v7132 = (i8)(intptr_t)(ws+3192);
	i8 v7133 = *(i8*)(intptr_t)v7132;
	i8 v7134 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v7133==v7134) goto c02_04be; else goto c02_04bd;

c02_04bd:;

	i8 v7135 = (i8)(intptr_t)(ws+3192);
	i8 v7136 = *(i8*)(intptr_t)v7135;
	i8 v7137 = v7136+(+8);
	i1 v7138 = *(i1*)(intptr_t)v7137;
	i8 v7139 = (i8)(intptr_t)(ws+3184);
	i1 v7140 = *(i1*)(intptr_t)v7139;
	i1 v7141 = v7138&v7140;
	i1 v7142 = (i1)+0;
	if (v7141==v7142) goto c02_04c3; else goto c02_04c2;

c02_04c2:;

	i8 v7143 = (i8)(intptr_t)(ws+3192);
	i8 v7144 = *(i8*)(intptr_t)v7143;
	i8 v7145 = v7144+(+11);
	i1 v7146 = *(i1*)(intptr_t)v7145;
	i8 v7147 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v7147 = v7146;

	goto endsub;

c02_04c3:;

c02_04bf:;

	i8 v7148 = (i8)(intptr_t)(ws+3192);
	i8 v7149 = *(i8*)(intptr_t)v7148;
	i8 v7150 = v7149+(+16);
	i8 v7151 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7151 = v7150;

	goto c02_04bb;

c02_04be:;

endsub:;
	*p7126 = *(i1*)(intptr_t)(ws+3185);
}

// CalculateBlockedRegisters workspace at ws+3184 length ws+17
void f432_CalculateBlockedRegisters(i1* p7152 /* blocked */, i8 p7153 /* last */, i8 p7154 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7154; /*insn */
	*(i8*)(intptr_t)(ws+3192) = p7153; /*last */

	i1 v7155 = (i1)+0;
	i8 v7156 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v7156 = v7155;

	i8 v7157 = (i8)(intptr_t)(ws+3184);
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = *(i8*)(intptr_t)v7158;
	i8 v7160 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7160 = v7159;

c02_04c6:;

	i8 v7161 = (i8)(intptr_t)(ws+3184);
	i8 v7162 = *(i8*)(intptr_t)v7161;
	i8 v7163 = (i8)(intptr_t)(ws+3192);
	i8 v7164 = *(i8*)(intptr_t)v7163;
	if (v7162==v7164) goto c02_04c9; else goto c02_04c8;

c02_04c8:;

	i8 v7165 = (i8)(intptr_t)(ws+3200);
	i1 v7166 = *(i1*)(intptr_t)v7165;
	i8 v7167 = (i8)(intptr_t)(ws+3184);
	i8 v7168 = *(i8*)(intptr_t)v7167;
	i8 v7169 = v7168+(+42);
	i1 v7170 = *(i1*)(intptr_t)v7169;
	i1 v7171 = v7166|v7170;
	i8 v7172 = (i8)(intptr_t)(ws+3184);
	i8 v7173 = *(i8*)(intptr_t)v7172;
	i8 v7174 = v7173+(+43);
	i1 v7175 = *(i1*)(intptr_t)v7174;
	i1 v7176 = v7171|v7175;
	i8 v7177 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v7177 = v7176;

	i8 v7178 = (i8)(intptr_t)(ws+3184);
	i8 v7179 = *(i8*)(intptr_t)v7178;
	i8 v7180 = (i8)(intptr_t)(ws+3192);
	i8 v7181 = *(i8*)(intptr_t)v7180;
	if (v7179==v7181) goto c02_04cd; else goto c02_04ce;

c02_04cd:;

	goto c02_04c9;

c02_04ce:;

c02_04ca:;

	i8 v7182 = (i8)(intptr_t)(ws+3184);
	i8 v7183 = *(i8*)(intptr_t)v7182;
	i8 v7184 = *(i8*)(intptr_t)v7183;
	i8 v7185 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7185 = v7184;

	goto c02_04c6;

c02_04c9:;

endsub:;
	*p7152 = *(i1*)(intptr_t)(ws+3200);
}

// BlockRegisters workspace at ws+3184 length ws+17
void f433_BlockRegisters(i1 p7186 /* blocked */, i8 p7187 /* last */, i8 p7188 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7188; /*insn */
	*(i8*)(intptr_t)(ws+3192) = p7187; /*last */
	*(i1*)(intptr_t)(ws+3200) = p7186; /*blocked */

	i8 v7189 = (i8)(intptr_t)(ws+3184);
	i8 v7190 = *(i8*)(intptr_t)v7189;
	i8 v7191 = *(i8*)(intptr_t)v7190;
	i8 v7192 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7192 = v7191;

c02_04d1:;

	i8 v7193 = (i8)(intptr_t)(ws+3184);
	i8 v7194 = *(i8*)(intptr_t)v7193;
	i8 v7195 = (i8)(intptr_t)(ws+3192);
	i8 v7196 = *(i8*)(intptr_t)v7195;
	if (v7194==v7196) goto c02_04d4; else goto c02_04d3;

c02_04d3:;

	i8 v7197 = (i8)(intptr_t)(ws+3184);
	i8 v7198 = *(i8*)(intptr_t)v7197;
	i8 v7199 = v7198+(+42);
	i1 v7200 = *(i1*)(intptr_t)v7199;
	i8 v7201 = (i8)(intptr_t)(ws+3200);
	i1 v7202 = *(i1*)(intptr_t)v7201;
	i1 v7203 = v7200|v7202;
	i8 v7204 = (i8)(intptr_t)(ws+3184);
	i8 v7205 = *(i8*)(intptr_t)v7204;
	i8 v7206 = v7205+(+42);
	*(i1*)(intptr_t)v7206 = v7203;

	i8 v7207 = (i8)(intptr_t)(ws+3184);
	i8 v7208 = *(i8*)(intptr_t)v7207;
	i8 v7209 = v7208+(+43);
	i1 v7210 = *(i1*)(intptr_t)v7209;
	i8 v7211 = (i8)(intptr_t)(ws+3200);
	i1 v7212 = *(i1*)(intptr_t)v7211;
	i1 v7213 = v7210|v7212;
	i8 v7214 = (i8)(intptr_t)(ws+3184);
	i8 v7215 = *(i8*)(intptr_t)v7214;
	i8 v7216 = v7215+(+43);
	*(i1*)(intptr_t)v7216 = v7213;

	i8 v7217 = (i8)(intptr_t)(ws+3184);
	i8 v7218 = *(i8*)(intptr_t)v7217;
	i8 v7219 = (i8)(intptr_t)(ws+3192);
	i8 v7220 = *(i8*)(intptr_t)v7219;
	if (v7218==v7220) goto c02_04d8; else goto c02_04d9;

c02_04d8:;

	goto c02_04d4;

c02_04d9:;

c02_04d5:;

	i8 v7221 = (i8)(intptr_t)(ws+3184);
	i8 v7222 = *(i8*)(intptr_t)v7221;
	i8 v7223 = *(i8*)(intptr_t)v7222;
	i8 v7224 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7224 = v7223;

	goto c02_04d1;

c02_04d4:;

endsub:;
}
const i1 c02_s0169[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// CreateSpill workspace at ws+3184 length ws+24
void f434_CreateSpill(i1 p7225 /* dest */, i1 p7226 /* src */, i8 p7227 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7227; /*insn */
	*(i1*)(intptr_t)(ws+3192) = p7226; /*src */
	*(i1*)(intptr_t)(ws+3193) = p7225; /*dest */

	i8 v7228 = (i8)(intptr_t)(ws+3184);
	i8 v7229 = *(i8*)(intptr_t)v7228;
	i8 v7230 = v7229+(+60);
	i1 v7231 = *(i1*)(intptr_t)v7230;
	i8 v7232 = (i8)(intptr_t)(ws+3194);
	*(i1*)(intptr_t)v7232 = v7231;

	i8 v7233 = (i8)(intptr_t)(ws+3194);
	i1 v7234 = *(i1*)(intptr_t)v7233;
	i1 v7235 = (i1)+5;
	if (v7234==v7235) goto c02_04dd; else goto c02_04de;

c02_04dd:;

	i8 v7236 = (i8)(intptr_t)c02_s0169;
	i8 v7237 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7237)(v7236);

	goto c02_04da;

c02_04de:;

c02_04da:;

	i8 v7238 = (i8)(intptr_t)(ws+3184);
	i8 v7239 = *(i8*)(intptr_t)v7238;
	i8 v7240 = v7239+(+44);
	i8 v7241 = (i8)(intptr_t)(ws+3194);
	i1 v7242 = *(i1*)(intptr_t)v7241;
	i8 v7243 = v7242;
	i1 v7244 = (i1)+1;
	i8 v7245 = ((i8)v7243)<<v7244;
	i8 v7246 = v7240+v7245;
	i8 v7247 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7247 = v7246;

	i8 v7248 = (i8)(intptr_t)(ws+3192);
	i1 v7249 = *(i1*)(intptr_t)v7248;
	i8 v7250 = (i8)(intptr_t)(ws+3200);
	i8 v7251 = *(i8*)(intptr_t)v7250;
	*(i1*)(intptr_t)v7251 = v7249;

	i8 v7252 = (i8)(intptr_t)(ws+3193);
	i1 v7253 = *(i1*)(intptr_t)v7252;
	i8 v7254 = (i8)(intptr_t)(ws+3200);
	i8 v7255 = *(i8*)(intptr_t)v7254;
	i8 v7256 = v7255+(+1);
	*(i1*)(intptr_t)v7256 = v7253;

	i8 v7257 = (i8)(intptr_t)(ws+3194);
	i1 v7258 = *(i1*)(intptr_t)v7257;
	i1 v7259 = v7258+(+1);
	i8 v7260 = (i8)(intptr_t)(ws+3184);
	i8 v7261 = *(i8*)(intptr_t)v7260;
	i8 v7262 = v7261+(+60);
	*(i1*)(intptr_t)v7262 = v7259;

endsub:;
}
const i1 c02_s016a[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// CreateReload workspace at ws+3184 length ws+24
void f435_CreateReload(i1 p7263 /* dest */, i1 p7264 /* src */, i8 p7265 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7265; /*insn */
	*(i1*)(intptr_t)(ws+3192) = p7264; /*src */
	*(i1*)(intptr_t)(ws+3193) = p7263; /*dest */

	i8 v7266 = (i8)(intptr_t)(ws+3184);
	i8 v7267 = *(i8*)(intptr_t)v7266;
	i8 v7268 = v7267+(+61);
	i1 v7269 = *(i1*)(intptr_t)v7268;
	i8 v7270 = (i8)(intptr_t)(ws+3194);
	*(i1*)(intptr_t)v7270 = v7269;

	i8 v7271 = (i8)(intptr_t)(ws+3194);
	i1 v7272 = *(i1*)(intptr_t)v7271;
	i1 v7273 = (i1)+5;
	if (v7272==v7273) goto c02_04e2; else goto c02_04e3;

c02_04e2:;

	i8 v7274 = (i8)(intptr_t)c02_s016a;
	i8 v7275 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7275)(v7274);

	goto c02_04df;

c02_04e3:;

c02_04df:;

	i8 v7276 = (i8)(intptr_t)(ws+3184);
	i8 v7277 = *(i8*)(intptr_t)v7276;
	i8 v7278 = v7277+(+52);
	i8 v7279 = (i8)(intptr_t)(ws+3194);
	i1 v7280 = *(i1*)(intptr_t)v7279;
	i8 v7281 = v7280;
	i1 v7282 = (i1)+1;
	i8 v7283 = ((i8)v7281)<<v7282;
	i8 v7284 = v7278+v7283;
	i8 v7285 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7285 = v7284;

	i8 v7286 = (i8)(intptr_t)(ws+3192);
	i1 v7287 = *(i1*)(intptr_t)v7286;
	i8 v7288 = (i8)(intptr_t)(ws+3200);
	i8 v7289 = *(i8*)(intptr_t)v7288;
	*(i1*)(intptr_t)v7289 = v7287;

	i8 v7290 = (i8)(intptr_t)(ws+3193);
	i1 v7291 = *(i1*)(intptr_t)v7290;
	i8 v7292 = (i8)(intptr_t)(ws+3200);
	i8 v7293 = *(i8*)(intptr_t)v7292;
	i8 v7294 = v7293+(+1);
	*(i1*)(intptr_t)v7294 = v7291;

	i8 v7295 = (i8)(intptr_t)(ws+3194);
	i1 v7296 = *(i1*)(intptr_t)v7295;
	i1 v7297 = v7296+(+1);
	i8 v7298 = (i8)(intptr_t)(ws+3184);
	i8 v7299 = *(i8*)(intptr_t)v7298;
	i8 v7300 = v7299+(+61);
	*(i1*)(intptr_t)v7300 = v7297;

endsub:;
}
	void f234_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f234_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f234_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f234_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+3168 length ws+25
void f436_ShuffleRegisters(i8 p7301 /* moves */) {
	*(i8*)(intptr_t)(ws+3168) = p7301; /*moves */

	i1 v7302 = (i1)+0;
	i8 v7303 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7303 = v7302;

	i1 v7304 = (i1)+0;
	i8 v7305 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7305 = v7304;

	i8 v7306 = (i8)(intptr_t)(ws+3168);
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7308 = v7307;

	i1 v7309 = (i1)+4;
	i8 v7310 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7310 = v7309;

c02_04e6:;

	i8 v7311 = (i8)(intptr_t)(ws+3192);
	i1 v7312 = *(i1*)(intptr_t)v7311;
	i1 v7313 = (i1)+0;
	if (v7312==v7313) goto c02_04e9; else goto c02_04e8;

c02_04e8:;

	i8 v7314 = (i8)(intptr_t)(ws+3176);
	i1 v7315 = *(i1*)(intptr_t)v7314;
	i8 v7316 = (i8)(intptr_t)(ws+3184);
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = v7317+(+1);
	i1 v7319 = *(i1*)(intptr_t)v7318;
	i1 v7320 = v7315|v7319;
	i8 v7321 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7321 = v7320;

	i8 v7322 = (i8)(intptr_t)(ws+3177);
	i1 v7323 = *(i1*)(intptr_t)v7322;
	i8 v7324 = (i8)(intptr_t)(ws+3184);
	i8 v7325 = *(i8*)(intptr_t)v7324;
	i1 v7326 = *(i1*)(intptr_t)v7325;
	i1 v7327 = v7323|v7326;
	i8 v7328 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7328 = v7327;

	i8 v7329 = (i8)(intptr_t)(ws+3192);
	i1 v7330 = *(i1*)(intptr_t)v7329;
	i1 v7331 = v7330+(-1);
	i8 v7332 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7332 = v7331;

	i8 v7333 = (i8)(intptr_t)(ws+3184);
	i8 v7334 = *(i8*)(intptr_t)v7333;
	i8 v7335 = v7334+(+2);
	i8 v7336 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7336 = v7335;

	goto c02_04e6;

c02_04e9:;

c02_04ea:;

	i8 v7337 = (i8)(intptr_t)(ws+3168);
	i8 v7338 = *(i8*)(intptr_t)v7337;
	i8 v7339 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7339 = v7338;

	i1 v7340 = (i1)+4;
	i8 v7341 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7341 = v7340;

c02_04ee:;

	i8 v7342 = (i8)(intptr_t)(ws+3192);
	i1 v7343 = *(i1*)(intptr_t)v7342;
	i1 v7344 = (i1)+0;
	if (v7343==v7344) goto c02_04f1; else goto c02_04f0;

c02_04f0:;

	i8 v7345 = (i8)(intptr_t)(ws+3184);
	i8 v7346 = *(i8*)(intptr_t)v7345;
	i1 v7347 = *(i1*)(intptr_t)v7346;
	i1 v7348 = (i1)+0;
	if (v7347==v7348) goto c02_04f8; else goto c02_04f9;

c02_04f9:;

	i8 v7349 = (i8)(intptr_t)(ws+3184);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = v7350+(+1);
	i1 v7352 = *(i1*)(intptr_t)v7351;
	i1 v7353 = (i1)+0;
	if (v7352==v7353) goto c02_04f7; else goto c02_04f8;

c02_04f7:;

	goto c02_04f1;

c02_04f8:;

c02_04f2:;

	i8 v7354 = (i8)(intptr_t)(ws+3184);
	i8 v7355 = *(i8*)(intptr_t)v7354;
	i8 v7356 = v7355+(+2);
	i8 v7357 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7357 = v7356;

	i8 v7358 = (i8)(intptr_t)(ws+3192);
	i1 v7359 = *(i1*)(intptr_t)v7358;
	i1 v7360 = v7359+(-1);
	i8 v7361 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7361 = v7360;

	goto c02_04ee;

c02_04f1:;

	i8 v7362 = (i8)(intptr_t)(ws+3192);
	i1 v7363 = *(i1*)(intptr_t)v7362;
	i1 v7364 = (i1)+0;
	if (v7363==v7364) goto c02_04fe; else goto c02_04fd;

c02_04fd:;

	i8 v7365 = (i8)(intptr_t)(ws+3184);
	i8 v7366 = *(i8*)(intptr_t)v7365;
	i1 v7367 = *(i1*)(intptr_t)v7366;
	i1 v7368 = (i1)+0;
	i8 v7369 = (i8)(intptr_t)(f234_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7369)(v7368, v7367);

	i8 v7370 = (i8)(intptr_t)(ws+3177);
	i1 v7371 = *(i1*)(intptr_t)v7370;
	i8 v7372 = (i8)(intptr_t)(ws+3184);
	i8 v7373 = *(i8*)(intptr_t)v7372;
	i1 v7374 = *(i1*)(intptr_t)v7373;
	i1 v7375 = ~v7374;
	i1 v7376 = v7371&v7375;
	i8 v7377 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7377 = v7376;

	i1 v7378 = (i1)+0;
	i8 v7379 = (i8)(intptr_t)(ws+3184);
	i8 v7380 = *(i8*)(intptr_t)v7379;
	*(i1*)(intptr_t)v7380 = v7378;

	goto c02_04ea;

c02_04fe:;

c02_04fa:;

	i8 v7381 = (i8)(intptr_t)(ws+3168);
	i8 v7382 = *(i8*)(intptr_t)v7381;
	i8 v7383 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7383 = v7382;

	i1 v7384 = (i1)+4;
	i8 v7385 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7385 = v7384;

c02_0501:;

	i8 v7386 = (i8)(intptr_t)(ws+3192);
	i1 v7387 = *(i1*)(intptr_t)v7386;
	i1 v7388 = (i1)+0;
	if (v7387==v7388) goto c02_0504; else goto c02_0503;

c02_0503:;

	i8 v7389 = (i8)(intptr_t)(ws+3184);
	i8 v7390 = *(i8*)(intptr_t)v7389;
	i1 v7391 = *(i1*)(intptr_t)v7390;
	i1 v7392 = (i1)+0;
	if (v7391==v7392) goto c02_050d; else goto c02_050f;

c02_050f:;

	i8 v7393 = (i8)(intptr_t)(ws+3184);
	i8 v7394 = *(i8*)(intptr_t)v7393;
	i8 v7395 = v7394+(+1);
	i1 v7396 = *(i1*)(intptr_t)v7395;
	i1 v7397 = (i1)+0;
	if (v7396==v7397) goto c02_050d; else goto c02_050e;

c02_050e:;

	i8 v7398 = (i8)(intptr_t)(ws+3184);
	i8 v7399 = *(i8*)(intptr_t)v7398;
	i8 v7400 = v7399+(+1);
	i1 v7401 = *(i1*)(intptr_t)v7400;
	i8 v7402 = (i8)(intptr_t)(ws+3177);
	i1 v7403 = *(i1*)(intptr_t)v7402;
	i1 v7404 = v7401&v7403;
	i1 v7405 = (i1)+0;
	if (v7404==v7405) goto c02_050c; else goto c02_050d;

c02_050c:;

	goto c02_0504;

c02_050d:;

c02_0505:;

	i8 v7406 = (i8)(intptr_t)(ws+3184);
	i8 v7407 = *(i8*)(intptr_t)v7406;
	i8 v7408 = v7407+(+2);
	i8 v7409 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7409 = v7408;

	i8 v7410 = (i8)(intptr_t)(ws+3192);
	i1 v7411 = *(i1*)(intptr_t)v7410;
	i1 v7412 = v7411+(-1);
	i8 v7413 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7413 = v7412;

	goto c02_0501;

c02_0504:;

	i8 v7414 = (i8)(intptr_t)(ws+3192);
	i1 v7415 = *(i1*)(intptr_t)v7414;
	i1 v7416 = (i1)+0;
	if (v7415==v7416) goto c02_0514; else goto c02_0513;

c02_0513:;

	i8 v7417 = (i8)(intptr_t)(ws+3184);
	i8 v7418 = *(i8*)(intptr_t)v7417;
	i1 v7419 = *(i1*)(intptr_t)v7418;
	i8 v7420 = (i8)(intptr_t)(ws+3184);
	i8 v7421 = *(i8*)(intptr_t)v7420;
	i8 v7422 = v7421+(+1);
	i1 v7423 = *(i1*)(intptr_t)v7422;
	i8 v7424 = (i8)(intptr_t)(f234_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7424)(v7423, v7419);

	i8 v7425 = (i8)(intptr_t)(ws+3177);
	i1 v7426 = *(i1*)(intptr_t)v7425;
	i8 v7427 = (i8)(intptr_t)(ws+3184);
	i8 v7428 = *(i8*)(intptr_t)v7427;
	i1 v7429 = *(i1*)(intptr_t)v7428;
	i1 v7430 = ~v7429;
	i1 v7431 = v7426&v7430;
	i8 v7432 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7432 = v7431;

	i8 v7433 = (i8)(intptr_t)(ws+3176);
	i1 v7434 = *(i1*)(intptr_t)v7433;
	i8 v7435 = (i8)(intptr_t)(ws+3184);
	i8 v7436 = *(i8*)(intptr_t)v7435;
	i8 v7437 = v7436+(+1);
	i1 v7438 = *(i1*)(intptr_t)v7437;
	i1 v7439 = ~v7438;
	i1 v7440 = v7434&v7439;
	i8 v7441 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7441 = v7440;

	i1 v7442 = (i1)+0;
	i8 v7443 = (i8)(intptr_t)(ws+3184);
	i8 v7444 = *(i8*)(intptr_t)v7443;
	*(i1*)(intptr_t)v7444 = v7442;

	i1 v7445 = (i1)+0;
	i8 v7446 = (i8)(intptr_t)(ws+3184);
	i8 v7447 = *(i8*)(intptr_t)v7446;
	i8 v7448 = v7447+(+1);
	*(i1*)(intptr_t)v7448 = v7445;

	goto c02_04ea;

c02_0514:;

c02_0510:;

	i8 v7449 = (i8)(intptr_t)(ws+3168);
	i8 v7450 = *(i8*)(intptr_t)v7449;
	i8 v7451 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7451 = v7450;

	i1 v7452 = (i1)+4;
	i8 v7453 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7453 = v7452;

c02_0517:;

	i8 v7454 = (i8)(intptr_t)(ws+3192);
	i1 v7455 = *(i1*)(intptr_t)v7454;
	i1 v7456 = (i1)+0;
	if (v7455==v7456) goto c02_051a; else goto c02_0519;

c02_0519:;

	i8 v7457 = (i8)(intptr_t)(ws+3184);
	i8 v7458 = *(i8*)(intptr_t)v7457;
	i1 v7459 = *(i1*)(intptr_t)v7458;
	i1 v7460 = (i1)+0;
	if (v7459==v7460) goto c02_0522; else goto c02_0521;

c02_0522:;

	i8 v7461 = (i8)(intptr_t)(ws+3184);
	i8 v7462 = *(i8*)(intptr_t)v7461;
	i8 v7463 = v7462+(+1);
	i1 v7464 = *(i1*)(intptr_t)v7463;
	i1 v7465 = (i1)+0;
	if (v7464==v7465) goto c02_0521; else goto c02_0520;

c02_0520:;

	goto c02_051a;

c02_0521:;

c02_051b:;

	i8 v7466 = (i8)(intptr_t)(ws+3184);
	i8 v7467 = *(i8*)(intptr_t)v7466;
	i8 v7468 = v7467+(+2);
	i8 v7469 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7469 = v7468;

	i8 v7470 = (i8)(intptr_t)(ws+3192);
	i1 v7471 = *(i1*)(intptr_t)v7470;
	i1 v7472 = v7471+(-1);
	i8 v7473 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7473 = v7472;

	goto c02_0517;

c02_051a:;

	i8 v7474 = (i8)(intptr_t)(ws+3192);
	i1 v7475 = *(i1*)(intptr_t)v7474;
	i1 v7476 = (i1)+0;
	if (v7475==v7476) goto c02_0527; else goto c02_0526;

c02_0526:;

	i1 v7477 = (i1)+0;
	i8 v7478 = (i8)(intptr_t)(ws+3184);
	i8 v7479 = *(i8*)(intptr_t)v7478;
	i8 v7480 = v7479+(+1);
	i1 v7481 = *(i1*)(intptr_t)v7480;
	i8 v7482 = (i8)(intptr_t)(f234_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7482)(v7481, v7477);

	i8 v7483 = (i8)(intptr_t)(ws+3176);
	i1 v7484 = *(i1*)(intptr_t)v7483;
	i8 v7485 = (i8)(intptr_t)(ws+3184);
	i8 v7486 = *(i8*)(intptr_t)v7485;
	i8 v7487 = v7486+(+1);
	i1 v7488 = *(i1*)(intptr_t)v7487;
	i1 v7489 = ~v7488;
	i1 v7490 = v7484&v7489;
	i8 v7491 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7491 = v7490;

	i1 v7492 = (i1)+0;
	i8 v7493 = (i8)(intptr_t)(ws+3184);
	i8 v7494 = *(i8*)(intptr_t)v7493;
	i8 v7495 = v7494+(+1);
	*(i1*)(intptr_t)v7495 = v7492;

	goto c02_04ea;

c02_0527:;

c02_0523:;

	i8 v7496 = (i8)(intptr_t)(ws+3168);
	i8 v7497 = *(i8*)(intptr_t)v7496;
	i8 v7498 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7498 = v7497;

	i1 v7499 = (i1)+4;
	i8 v7500 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7500 = v7499;

c02_052a:;

	i8 v7501 = (i8)(intptr_t)(ws+3192);
	i1 v7502 = *(i1*)(intptr_t)v7501;
	i1 v7503 = (i1)+0;
	if (v7502==v7503) goto c02_052d; else goto c02_052c;

c02_052c:;

	i8 v7504 = (i8)(intptr_t)(ws+3184);
	i8 v7505 = *(i8*)(intptr_t)v7504;
	i1 v7506 = *(i1*)(intptr_t)v7505;
	i1 v7507 = (i1)+0;
	if (v7506==v7507) goto c02_0534; else goto c02_0535;

c02_0535:;

	i8 v7508 = (i8)(intptr_t)(ws+3184);
	i8 v7509 = *(i8*)(intptr_t)v7508;
	i8 v7510 = v7509+(+1);
	i1 v7511 = *(i1*)(intptr_t)v7510;
	i1 v7512 = (i1)+0;
	if (v7511==v7512) goto c02_0534; else goto c02_0533;

c02_0533:;

	goto c02_052d;

c02_0534:;

c02_052e:;

	i8 v7513 = (i8)(intptr_t)(ws+3184);
	i8 v7514 = *(i8*)(intptr_t)v7513;
	i8 v7515 = v7514+(+2);
	i8 v7516 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7516 = v7515;

	i8 v7517 = (i8)(intptr_t)(ws+3192);
	i1 v7518 = *(i1*)(intptr_t)v7517;
	i1 v7519 = v7518+(-1);
	i8 v7520 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7520 = v7519;

	goto c02_052a;

c02_052d:;

	i8 v7521 = (i8)(intptr_t)(ws+3192);
	i1 v7522 = *(i1*)(intptr_t)v7521;
	i1 v7523 = (i1)+0;
	if (v7522==v7523) goto c02_053a; else goto c02_0539;

c02_0539:;

	i8 v7524 = (i8)(intptr_t)(ws+3184);
	i8 v7525 = *(i8*)(intptr_t)v7524;
	i1 v7526 = *(i1*)(intptr_t)v7525;
	i1 v7527 = (i1)+0;
	i8 v7528 = (i8)(intptr_t)(f234_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7528)(v7527, v7526);

	i8 v7529 = (i8)(intptr_t)(ws+3177);
	i1 v7530 = *(i1*)(intptr_t)v7529;
	i8 v7531 = (i8)(intptr_t)(ws+3184);
	i8 v7532 = *(i8*)(intptr_t)v7531;
	i1 v7533 = *(i1*)(intptr_t)v7532;
	i1 v7534 = ~v7533;
	i1 v7535 = v7530&v7534;
	i8 v7536 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7536 = v7535;

	i1 v7537 = (i1)+0;
	i8 v7538 = (i8)(intptr_t)(ws+3184);
	i8 v7539 = *(i8*)(intptr_t)v7538;
	*(i1*)(intptr_t)v7539 = v7537;

	goto c02_04ea;

c02_053a:;

c02_0536:;

	goto c02_04eb;

c02_04eb:;

endsub:;
}
	void f53_PushNode(i8 /* node */);
	void f55_NextNode(i8* /* node */);
	void f20_print_hex_i32(i4 /* value */);
	void f8_print_char(i1 /* c */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
	void f19_print_hex_i16(i2 /* value */);
	void f8_print_char(i1 /* c */);
	void f19_print_hex_i16(i2 /* value */);
	void f8_print_char(i1 /* c */);
	void f20_print_hex_i32(i4 /* value */);
	void f8_print_char(i1 /* c */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);

// PrintNodes workspace at ws+3184 length ws+24
void f437_PrintNodes(i8 p7540 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3184) = p7540; /*rootnode */

	i8 v7541 = (i8)(intptr_t)(ws+216);
	i8 v7542 = *(i8*)(intptr_t)v7541;
	i8 v7543 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7543 = v7542;

	i8 v7544 = (i8)(intptr_t)(ws+3184);
	i8 v7545 = *(i8*)(intptr_t)v7544;
	i8 v7546 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7546)(v7545);

c02_053d:;

	i8 v7547 = (i8)(intptr_t)(ws+216);
	i8 v7548 = *(i8*)(intptr_t)v7547;
	i8 v7549 = (i8)(intptr_t)(ws+3192);
	i8 v7550 = *(i8*)(intptr_t)v7549;
	if (v7548==v7550) goto c02_0540; else goto c02_053f;

c02_053f:;

	i8 v7551 = (i8)(intptr_t)(f55_NextNode);
	i8 v7552;

	((void(*)(i8* /* node */))(intptr_t)v7551)(&v7552);
	i8 v7553 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7553 = v7552;

	i8 v7554 = (i8)(intptr_t)(ws+3200);
	i8 v7555 = *(i8*)(intptr_t)v7554;
	i8 v7556 = (i8)+0;
	if (v7555==v7556) goto c02_0544; else goto c02_0545;

c02_0544:;

	goto c02_0540;

c02_0545:;

c02_0541:;

	i8 v7557 = (i8)(intptr_t)(ws+3200);
	i8 v7558 = *(i8*)(intptr_t)v7557;
	i4 v7559 = v7558;
	i8 v7560 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7560)(v7559);

	i1 v7561 = (i1)+32;
	i8 v7562 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7562)(v7561);

	i8 v7563 = (i8)(intptr_t)(ws+3200);
	i8 v7564 = *(i8*)(intptr_t)v7563;
	i8 v7565 = v7564+(+58);
	i1 v7566 = *(i1*)(intptr_t)v7565;
	i8 v7567 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7567)(v7566);

	i1 v7568 = (i1)+32;
	i8 v7569 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7569)(v7568);

	i8 v7570 = (i8)(intptr_t)(ws+3200);
	i8 v7571 = *(i8*)(intptr_t)v7570;
	i8 v7572 = v7571+(+56);
	i1 v7573 = *(i1*)(intptr_t)v7572;
	i2 v7574 = v7573;
	i8 v7575 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7575)(v7574);

	i1 v7576 = (i1)+32;
	i8 v7577 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7577)(v7576);

	i8 v7578 = (i8)(intptr_t)(ws+3200);
	i8 v7579 = *(i8*)(intptr_t)v7578;
	i8 v7580 = v7579+(+57);
	i1 v7581 = *(i1*)(intptr_t)v7580;
	i2 v7582 = v7581;
	i8 v7583 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7583)(v7582);

	i1 v7584 = (i1)+32;
	i8 v7585 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7585)(v7584);

	i8 v7586 = (i8)(intptr_t)(ws+3200);
	i8 v7587 = *(i8*)(intptr_t)v7586;
	i8 v7588 = v7587+(+24);
	i8 v7589 = *(i8*)(intptr_t)v7588;
	i4 v7590 = v7589;
	i8 v7591 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7591)(v7590);

	i1 v7592 = (i1)+32;
	i8 v7593 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7593)(v7592);

	i8 v7594 = (i8)(intptr_t)(ws+3200);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = v7595+(+32);
	i8 v7597 = *(i8*)(intptr_t)v7596;
	i4 v7598 = v7597;
	i8 v7599 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7599)(v7598);

	i8 v7600 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v7600)();

	goto c02_053d;

c02_0540:;

endsub:;
}
	void f53_PushNode(i8 /* node */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f54_PopNode(i8* /* node */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f430_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+3216 length ws+0
void f440_RewindRulePointers(void) {

	i8 v7644 = (i8)(intptr_t)(ws+3160);
	i8 v7645 = (i8)+3;
	i8 v7646 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7646)(v7645, v7644);

	i8 v7647 = (i8)(intptr_t)(ws+3168);
	i8 v7648 = (i8)+24;
	i8 v7649 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7649)(v7648, v7647);

	i8 v7650 = (i8)(intptr_t)(ws+3136);
	i8 v7651 = *(i8*)(intptr_t)v7650;
	i8 v7652 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v7652 = v7651;

	i8 v7653 = (i8)(intptr_t)(ws+3128);
	i8 v7654 = *(i8*)(intptr_t)v7653;
	i8 v7655 = (i8)(intptr_t)(ws+3168);
	i8 v7656 = (i8)(intptr_t)(ws+3160);
	i8 v7657 = (i8)(intptr_t)(f430_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v7657)(v7656, v7655, v7654);

	i1 v7658 = (i1)+255;
	i8 v7659 = (i8)(intptr_t)(ws+3144);
	*(i1*)(intptr_t)v7659 = v7658;

	i8 v7660 = (i8)(intptr_t)(((i1*)c02_a4ac+0));
	i8 v7661 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7661 = v7660;

	i8 v7662 = (i8)(intptr_t)(((i1*)c02_a4ad+0));
	i8 v7663 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7663 = v7662;

	i8 v7664 = (i8)(intptr_t)(((i1*)c02_a4ae-7));
	i8 v7665 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v7665 = v7664;

endsub:;
}
	void f255_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+3216 length ws+27
void f441_TestRule(i1* p7666 /* result */) {

	i1 v7667 = (i1)+0;
	i8 v7668 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v7668 = v7667;

	i8 v7669 = (i8)(intptr_t)(ws+3152);
	i8 v7670 = *(i8*)(intptr_t)v7669;
	i8 v7671 = v7670+(+1);
	i1 v7672 = *(i1*)(intptr_t)v7671;
	i1 v7673 = (i1)+0;
	if (v7672==v7673) goto c02_0555; else goto c02_0554;

c02_0554:;

	i8 v7674 = (i8)(intptr_t)(ws+3136);
	i8 v7675 = *(i8*)(intptr_t)v7674;
	i8 v7676 = v7675+(+56);
	i1 v7677 = *(i1*)(intptr_t)v7676;
	i8 v7678 = (i8)(intptr_t)(ws+3152);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	i8 v7680 = v7679+(+1);
	i1 v7681 = *(i1*)(intptr_t)v7680;
	i1 v7682 = v7677&v7681;
	i1 v7683 = (i1)+0;
	if (v7682==v7683) goto c02_0559; else goto c02_055a;

c02_0559:;

	goto endsub;

c02_055a:;

c02_0556:;

	goto c02_0551;

c02_0555:;

	i8 v7684 = (i8)(intptr_t)(ws+3136);
	i8 v7685 = *(i8*)(intptr_t)v7684;
	i8 v7686 = v7685+(+56);
	i1 v7687 = *(i1*)(intptr_t)v7686;
	i1 v7688 = (i1)+0;
	if (v7687==v7688) goto c02_055f; else goto c02_055e;

c02_055e:;

	goto endsub;

c02_055f:;

c02_055b:;

c02_0551:;

	i8 v7689 = (i8)(intptr_t)(ws+3160);
	i8 v7690 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7690 = v7689;

	i8 v7691 = (i8)(intptr_t)(ws+3192);
	i8 v7692 = *(i8*)(intptr_t)v7691;
	i8 v7693 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v7693 = v7692;

	i8 v7694 = (i8)(intptr_t)(ws+3152);
	i8 v7695 = *(i8*)(intptr_t)v7694;
	i8 v7696 = v7695+(+4);
	i1 v7697 = *(i1*)(intptr_t)v7696;
	i8 v7698 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7698 = v7697;

c02_0562:;

	i8 v7699 = (i8)(intptr_t)(ws+3240);
	i1 v7700 = *(i1*)(intptr_t)v7699;
	i1 v7701 = (i1)+0;
	if (v7700==v7701) goto c02_0565; else goto c02_0564;

c02_0564:;

	i8 v7702 = (i8)(intptr_t)(ws+3224);
	i8 v7703 = *(i8*)(intptr_t)v7702;
	i1 v7704 = *(i1*)(intptr_t)v7703;
	i8 v7705 = (i8)(intptr_t)(ws+3241);
	*(i1*)(intptr_t)v7705 = v7704;

	i8 v7706 = (i8)(intptr_t)(ws+3224);
	i8 v7707 = *(i8*)(intptr_t)v7706;
	i8 v7708 = v7707+(+1);
	i8 v7709 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7709 = v7708;

	i8 v7710 = (i8)(intptr_t)(ws+3240);
	i1 v7711 = *(i1*)(intptr_t)v7710;
	i1 v7712 = v7711&(+1);
	i1 v7713 = (i1)+0;
	if (v7712==v7713) goto c02_056a; else goto c02_0569;

c02_0569:;

	i8 v7714 = (i8)(intptr_t)(ws+3232);
	i8 v7715 = *(i8*)(intptr_t)v7714;
	i1 v7716 = *(i1*)(intptr_t)v7715;
	i8 v7717 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v7717 = v7716;

	i8 v7718 = (i8)(intptr_t)(ws+3232);
	i8 v7719 = *(i8*)(intptr_t)v7718;
	i8 v7720 = v7719+(+1);
	i8 v7721 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v7721 = v7720;

	i8 v7722 = (i8)(intptr_t)(ws+3241);
	i1 v7723 = *(i1*)(intptr_t)v7722;
	i8 v7724 = (i8)(intptr_t)(ws+3242);
	i1 v7725 = *(i1*)(intptr_t)v7724;
	if (v7723==v7725) goto c02_056f; else goto c02_056e;

c02_056e:;

	goto endsub;

c02_056f:;

c02_056b:;

	goto c02_0566;

c02_056a:;

c02_0566:;

	i8 v7726 = (i8)(intptr_t)(ws+3240);
	i1 v7727 = *(i1*)(intptr_t)v7726;
	i1 v7728 = (i1)+1;
	i1 v7729 = ((i1)v7727)>>v7728;
	i8 v7730 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7730 = v7729;

	goto c02_0562;

c02_0565:;

	i8 v7731 = (i8)(intptr_t)(ws+3152);
	i8 v7732 = *(i8*)(intptr_t)v7731;
	i1 v7733 = *(i1*)(intptr_t)v7732;
	i1 v7734 = v7733&(+1);
	i1 v7735 = (i1)+0;
	if (v7734==v7735) goto c02_0576; else goto c02_0577;

c02_0577:;

	i8 v7736 = (i8)(intptr_t)(ws+3144);
	i1 v7737 = *(i1*)(intptr_t)v7736;
	i8 v7738 = (i8)(intptr_t)(ws+3168);
	i8 v7739 = (i8)(intptr_t)(f255_MatchPredicate);
	i1 v7740;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v7739)(&v7740, v7738, v7737);
	i1 v7741 = (i1)+0;
	if (v7740==v7741) goto c02_0575; else goto c02_0576;

c02_0575:;

	goto endsub;

c02_0576:;

c02_0570:;

	i1 v7742 = (i1)+1;
	i8 v7743 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v7743 = v7742;

endsub:;
	*p7666 = *(i1*)(intptr_t)(ws+3216);
}
	void f440_RewindRulePointers(void);
	void f131_MidFallback(i8* /* m */, i8 /* left */);

// ConvertNodeToFallback workspace at ws+3216 length ws+25
void f442_ConvertNodeToFallback(void) {

	i8 v7766 = (i8)(intptr_t)(ws+3136);
	i8 v7767 = *(i8*)(intptr_t)v7766;
	i8 v7768 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v7768 = v7767;

	i8 v7769 = (i8)(intptr_t)(ws+3216);
	i8 v7770 = *(i8*)(intptr_t)v7769;
	i8 v7771 = (i8)(intptr_t)(f131_MidFallback);
	i8 v7772;

	((void(*)(i8* /* m */, i8 /* left */))(intptr_t)v7771)(&v7772, v7770);
	i8 v7773 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v7773 = v7772;

	i8 v7774 = (i8)(intptr_t)(ws+3216);
	i8 v7775 = *(i8*)(intptr_t)v7774;
	i8 v7776 = v7775+(+48);
	i8 v7777 = *(i8*)(intptr_t)v7776;
	i8 v7778 = (i8)(intptr_t)(ws+3136);
	i8 v7779 = *(i8*)(intptr_t)v7778;
	i8 v7780 = v7779+(+48);
	*(i8*)(intptr_t)v7780 = v7777;

	i8 v7781 = (i8)(intptr_t)(ws+3136);
	i8 v7782 = *(i8*)(intptr_t)v7781;
	i8 v7783 = v7782+(+48);
	i8 v7784 = *(i8*)(intptr_t)v7783;
	i8 v7785 = v7784+(+16);
	i8 v7786 = *(i8*)(intptr_t)v7785;
	i8 v7787 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7787 = v7786;

	i8 v7788 = (i8)(intptr_t)(ws+3216);
	i8 v7789 = *(i8*)(intptr_t)v7788;
	i8 v7790 = v7789+(+56);
	i1 v7791 = *(i1*)(intptr_t)v7790;
	i8 v7792 = (i8)(intptr_t)(ws+3136);
	i8 v7793 = *(i8*)(intptr_t)v7792;
	i8 v7794 = v7793+(+56);
	*(i1*)(intptr_t)v7794 = v7791;

	i8 v7795 = (i8)(intptr_t)(ws+3224);
	i8 v7796 = *(i8*)(intptr_t)v7795;
	i8 v7797 = v7796+(+40);
	i8 v7798 = *(i8*)(intptr_t)v7797;
	i8 v7799 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v7799 = v7798;

	i1 v7800 = (i1)+0;
	i8 v7801 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7801 = v7800;

c02_0589:;

	i8 v7802 = (i8)(intptr_t)(ws+3240);
	i1 v7803 = *(i1*)(intptr_t)v7802;
	i1 v7804 = (i1)+3;
	if (v7803==v7804) goto c02_058c; else goto c02_058b;

c02_058b:;

	i8 v7805 = (i8)(intptr_t)(ws+3232);
	i8 v7806 = *(i8*)(intptr_t)v7805;
	i8 v7807 = v7806+(+16);
	i8 v7808 = (i8)(intptr_t)(ws+3240);
	i1 v7809 = *(i1*)(intptr_t)v7808;
	i8 v7810 = v7809;
	i1 v7811 = (i1)+3;
	i8 v7812 = ((i8)v7810)<<v7811;
	i8 v7813 = v7807+v7812;
	i8 v7814 = *(i8*)(intptr_t)v7813;
	i8 v7815 = (i8)(intptr_t)(ws+3216);
	i8 v7816 = *(i8*)(intptr_t)v7815;
	if (v7814==v7816) goto c02_0590; else goto c02_0591;

c02_0590:;

	i8 v7817 = (i8)(intptr_t)(ws+3136);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	i8 v7819 = (i8)(intptr_t)(ws+3232);
	i8 v7820 = *(i8*)(intptr_t)v7819;
	i8 v7821 = v7820+(+16);
	i8 v7822 = (i8)(intptr_t)(ws+3240);
	i1 v7823 = *(i1*)(intptr_t)v7822;
	i8 v7824 = v7823;
	i1 v7825 = (i1)+3;
	i8 v7826 = ((i8)v7824)<<v7825;
	i8 v7827 = v7821+v7826;
	*(i8*)(intptr_t)v7827 = v7818;

	goto c02_058d;

c02_0591:;

c02_058d:;

	i8 v7828 = (i8)(intptr_t)(ws+3240);
	i1 v7829 = *(i1*)(intptr_t)v7828;
	i1 v7830 = v7829+(+1);
	i8 v7831 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7831 = v7830;

	goto c02_0589;

c02_058c:;

endsub:;
}
	void f442_ConvertNodeToFallback(void);
	void f440_RewindRulePointers(void);
	void f59_StartError(void);
const i1 c02_s016b[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
const i1 c02_s016c[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f60_EndError(void);
	void f441_TestRule(i1* /* result */);
	void f53_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+3216 length ws+16
void f443_CopyChildNodes(void) {

	i8 v7928 = (i8)(intptr_t)(ws+3152);
	i8 v7929 = *(i8*)(intptr_t)v7928;
	i8 v7930 = v7929+(+5);
	i1 v7931 = *(i1*)(intptr_t)v7930;
	i8 v7932 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v7932 = v7931;

	i8 v7933 = (i8)(intptr_t)(ws+3152);
	i8 v7934 = *(i8*)(intptr_t)v7933;
	i8 v7935 = v7934+(+6);
	i1 v7936 = *(i1*)(intptr_t)v7935;
	i8 v7937 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v7937 = v7936;

	i1 v7938 = (i1)+0;
	i8 v7939 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7939 = v7938;

c02_05b5:;

	i8 v7940 = (i8)(intptr_t)(ws+3096);
	i1 v7941 = *(i1*)(intptr_t)v7940;
	i1 v7942 = (i1)+3;
	if (v7941==v7942) goto c02_05b8; else goto c02_05b7;

c02_05b7:;

	i8 v7943 = (i8)(intptr_t)(ws+3168);
	i8 v7944 = (i8)(intptr_t)(ws+3096);
	i1 v7945 = *(i1*)(intptr_t)v7944;
	i8 v7946 = v7945;
	i1 v7947 = (i1)+3;
	i8 v7948 = ((i8)v7946)<<v7947;
	i8 v7949 = v7943+v7948;
	i8 v7950 = *(i8*)(intptr_t)v7949;
	i8 v7951 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7951 = v7950;

	i8 v7952 = (i8)(intptr_t)(ws+3216);
	i1 v7953 = *(i1*)(intptr_t)v7952;
	i1 v7954 = v7953&(+1);
	i1 v7955 = (i1)+0;
	if (v7954==v7955) goto c02_05bd; else goto c02_05bc;

c02_05bc:;

	i8 v7956 = (i8)(intptr_t)(ws+3224);
	i8 v7957 = *(i8*)(intptr_t)v7956;
	i8 v7958 = (i8)(intptr_t)(ws+3128);
	i8 v7959 = *(i8*)(intptr_t)v7958;
	i8 v7960 = v7959+(+16);
	i8 v7961 = (i8)(intptr_t)(ws+3096);
	i1 v7962 = *(i1*)(intptr_t)v7961;
	i8 v7963 = v7962;
	i1 v7964 = (i1)+3;
	i8 v7965 = ((i8)v7963)<<v7964;
	i8 v7966 = v7960+v7965;
	*(i8*)(intptr_t)v7966 = v7957;

	i8 v7967 = (i8)(intptr_t)(ws+3217);
	i1 v7968 = *(i1*)(intptr_t)v7967;
	i1 v7969 = v7968&(+1);
	i1 v7970 = (i1)+0;
	if (v7969==v7970) goto c02_05c2; else goto c02_05c1;

c02_05c1:;

	i8 v7971 = (i8)(intptr_t)(ws+3224);
	i8 v7972 = *(i8*)(intptr_t)v7971;
	i8 v7973 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7973)(v7972);

	i8 v7974 = (i8)(intptr_t)(ws+3200);
	i8 v7975 = *(i8*)(intptr_t)v7974;
	i1 v7976 = *(i1*)(intptr_t)v7975;
	i8 v7977 = (i8)(intptr_t)(ws+3224);
	i8 v7978 = *(i8*)(intptr_t)v7977;
	i8 v7979 = v7978+(+56);
	*(i1*)(intptr_t)v7979 = v7976;

	i8 v7980 = (i8)(intptr_t)(ws+3200);
	i8 v7981 = *(i8*)(intptr_t)v7980;
	i8 v7982 = v7981+(+1);
	i8 v7983 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7983 = v7982;

	i8 v7984 = (i8)(intptr_t)(ws+3128);
	i8 v7985 = *(i8*)(intptr_t)v7984;
	i8 v7986 = (i8)(intptr_t)(ws+3224);
	i8 v7987 = *(i8*)(intptr_t)v7986;
	i8 v7988 = v7987+(+48);
	*(i8*)(intptr_t)v7988 = v7985;

	goto c02_05be;

c02_05c2:;

c02_05be:;

	goto c02_05b9;

c02_05bd:;

c02_05b9:;

	i8 v7989 = (i8)(intptr_t)(ws+3216);
	i1 v7990 = *(i1*)(intptr_t)v7989;
	i1 v7991 = (i1)+1;
	i1 v7992 = ((i1)v7990)>>v7991;
	i8 v7993 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v7993 = v7992;

	i8 v7994 = (i8)(intptr_t)(ws+3217);
	i1 v7995 = *(i1*)(intptr_t)v7994;
	i1 v7996 = (i1)+1;
	i1 v7997 = ((i1)v7995)>>v7996;
	i8 v7998 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v7998 = v7997;

	i8 v7999 = (i8)(intptr_t)(ws+3096);
	i1 v8000 = *(i1*)(intptr_t)v7999;
	i1 v8001 = v8000+(+1);
	i8 v8002 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8002 = v8001;

	goto c02_05b5;

c02_05b8:;

	i8 v8003 = (i8)(intptr_t)(ws+3128);
	i8 v8004 = *(i8*)(intptr_t)v8003;
	i8 v8005 = (i8)(intptr_t)(ws+3136);
	i8 v8006 = *(i8*)(intptr_t)v8005;
	i8 v8007 = v8006+(+40);
	*(i8*)(intptr_t)v8007 = v8004;

endsub:;
}
	void f443_CopyChildNodes(void);

// InstructionMatcher workspace at ws+3160 length ws+49
void f439_InstructionMatcher(void) {



	i8 v7744 = (i8)(intptr_t)(f440_RewindRulePointers);

	((void(*)(void))(intptr_t)v7744)();

c02_0578:;

	i8 v7745 = (i8)(intptr_t)(ws+3152);
	i8 v7746 = *(i8*)(intptr_t)v7745;
	i8 v7747 = v7746+(+7);
	i8 v7748 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v7748 = v7747;

	i8 v7749 = (i8)(intptr_t)(ws+3144);
	i1 v7750 = *(i1*)(intptr_t)v7749;
	i1 v7751 = v7750+(+1);
	i8 v7752 = (i8)(intptr_t)(ws+3144);
	*(i1*)(intptr_t)v7752 = v7751;

	i8 v7753 = (i8)(intptr_t)(ws+3152);
	i8 v7754 = *(i8*)(intptr_t)v7753;
	i8 v7755 = (i8)(intptr_t)(((i1*)c02_a4ae+1309));
	if (v7754==v7755) goto c02_057d; else goto c02_057e;

c02_057d:;

	i8 v7756 = (i8)(intptr_t)(ws+3136);
	i8 v7757 = *(i8*)(intptr_t)v7756;
	i8 v7758 = v7757+(+58);
	i1 v7759 = *(i1*)(intptr_t)v7758;
	i1 v7760 = (i1)+22;
	if (v7759==v7760) goto c02_0585; else goto c02_0586;

c02_0586:;

	i8 v7761 = (i8)(intptr_t)(ws+3136);
	i8 v7762 = *(i8*)(intptr_t)v7761;
	i8 v7763 = v7762+(+48);
	i8 v7764 = *(i8*)(intptr_t)v7763;
	i8 v7765 = (i8)+0;
	if (v7764==v7765) goto c02_0585; else goto c02_0584;

c02_0584:;


	i8 v7832 = (i8)(intptr_t)(f442_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v7832)();

	i8 v7833 = (i8)(intptr_t)(f440_RewindRulePointers);

	((void(*)(void))(intptr_t)v7833)();

	goto c02_0578;

c02_0585:;

c02_057f:;

	i8 v7834 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v7834)();

	i8 v7835 = (i8)(intptr_t)c02_s016b;
	i8 v7836 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7836)(v7835);

	i1 v7837 = (i1)+0;
	i8 v7838 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7838 = v7837;

c02_0594:;

	i8 v7839 = (i8)(intptr_t)(ws+3096);
	i1 v7840 = *(i1*)(intptr_t)v7839;
	i1 v7841 = (i1)+3;
	if (v7840==v7841) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v7842 = (i8)(intptr_t)(ws+3160);
	i8 v7843 = (i8)(intptr_t)(ws+3096);
	i1 v7844 = *(i1*)(intptr_t)v7843;
	i8 v7845 = v7844;
	i8 v7846 = v7842+v7845;
	i1 v7847 = *(i1*)(intptr_t)v7846;
	i8 v7848 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7848)(v7847);

	i1 v7849 = (i1)+32;
	i8 v7850 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7850)(v7849);

	i8 v7851 = (i8)(intptr_t)(ws+3096);
	i1 v7852 = *(i1*)(intptr_t)v7851;
	i1 v7853 = v7852+(+1);
	i8 v7854 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7854 = v7853;

	goto c02_0594;

c02_0597:;

	i8 v7855 = (i8)(intptr_t)c02_s016c;
	i8 v7856 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7856)(v7855);

	i8 v7857 = (i8)(intptr_t)(ws+3136);
	i8 v7858 = *(i8*)(intptr_t)v7857;
	i8 v7859 = v7858+(+56);
	i1 v7860 = *(i1*)(intptr_t)v7859;
	i4 v7861 = v7860;
	i8 v7862 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7862)(v7861);

	i8 v7863 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v7863)();

	goto c02_057a;

c02_057e:;

c02_057a:;

	i8 v7864 = (i8)(intptr_t)(f441_TestRule);
	i1 v7865;

	((void(*)(i1* /* result */))(intptr_t)v7864)(&v7865);
	i1 v7866 = (i1)+0;
	if (v7865==v7866) goto c02_059c; else goto c02_059b;

c02_059b:;

	goto c02_0579;

c02_059c:;

c02_0598:;

	i8 v7867 = (i8)(intptr_t)(ws+3152);
	i8 v7868 = *(i8*)(intptr_t)v7867;
	i8 v7869 = v7868+(+4);
	i1 v7870 = *(i1*)(intptr_t)v7869;
	i8 v7871 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v7871 = v7870;

c02_059f:;

	i8 v7872 = (i8)(intptr_t)(ws+3208);
	i1 v7873 = *(i1*)(intptr_t)v7872;
	i1 v7874 = (i1)+0;
	if (v7873==v7874) goto c02_05a2; else goto c02_05a1;

c02_05a1:;

	i8 v7875 = (i8)(intptr_t)(ws+3208);
	i1 v7876 = *(i1*)(intptr_t)v7875;
	i1 v7877 = v7876&(+1);
	i1 v7878 = (i1)+0;
	if (v7877==v7878) goto c02_05a7; else goto c02_05a6;

c02_05a6:;

	i8 v7879 = (i8)(intptr_t)(ws+3192);
	i8 v7880 = *(i8*)(intptr_t)v7879;
	i8 v7881 = v7880+(+1);
	i8 v7882 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7882 = v7881;

	goto c02_05a3;

c02_05a7:;

c02_05a3:;

	i8 v7883 = (i8)(intptr_t)(ws+3208);
	i1 v7884 = *(i1*)(intptr_t)v7883;
	i1 v7885 = (i1)+1;
	i1 v7886 = ((i1)v7884)>>v7885;
	i8 v7887 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v7887 = v7886;

	goto c02_059f;

c02_05a2:;

	i8 v7888 = (i8)(intptr_t)(ws+3152);
	i8 v7889 = *(i8*)(intptr_t)v7888;
	i8 v7890 = v7889+(+6);
	i1 v7891 = *(i1*)(intptr_t)v7890;
	i8 v7892 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v7892 = v7891;

c02_05aa:;

	i8 v7893 = (i8)(intptr_t)(ws+3208);
	i1 v7894 = *(i1*)(intptr_t)v7893;
	i1 v7895 = (i1)+0;
	if (v7894==v7895) goto c02_05ad; else goto c02_05ac;

c02_05ac:;

	i8 v7896 = (i8)(intptr_t)(ws+3208);
	i1 v7897 = *(i1*)(intptr_t)v7896;
	i1 v7898 = v7897&(+1);
	i1 v7899 = (i1)+0;
	if (v7898==v7899) goto c02_05b2; else goto c02_05b1;

c02_05b1:;

	i8 v7900 = (i8)(intptr_t)(ws+3200);
	i8 v7901 = *(i8*)(intptr_t)v7900;
	i8 v7902 = v7901+(+1);
	i8 v7903 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7903 = v7902;

	goto c02_05ae;

c02_05b2:;

c02_05ae:;

	i8 v7904 = (i8)(intptr_t)(ws+3208);
	i1 v7905 = *(i1*)(intptr_t)v7904;
	i1 v7906 = (i1)+1;
	i1 v7907 = ((i1)v7905)>>v7906;
	i8 v7908 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v7908 = v7907;

	goto c02_05aa;

c02_05ad:;

	goto c02_0578;

c02_0579:;

	i8 v7909 = (i8)(intptr_t)(ws+3144);
	i1 v7910 = *(i1*)(intptr_t)v7909;
	i8 v7911 = (i8)(intptr_t)(ws+3128);
	i8 v7912 = *(i8*)(intptr_t)v7911;
	i8 v7913 = v7912+(+62);
	*(i1*)(intptr_t)v7913 = v7910;

	i8 v7914 = (i8)(intptr_t)(ws+3152);
	i8 v7915 = *(i8*)(intptr_t)v7914;
	i8 v7916 = v7915+(+2);
	i1 v7917 = *(i1*)(intptr_t)v7916;
	i8 v7918 = (i8)(intptr_t)(ws+3128);
	i8 v7919 = *(i8*)(intptr_t)v7918;
	i8 v7920 = v7919+(+40);
	*(i1*)(intptr_t)v7920 = v7917;

	i8 v7921 = (i8)(intptr_t)(ws+3152);
	i8 v7922 = *(i8*)(intptr_t)v7921;
	i8 v7923 = v7922+(+3);
	i1 v7924 = *(i1*)(intptr_t)v7923;
	i8 v7925 = (i8)(intptr_t)(ws+3128);
	i8 v7926 = *(i8*)(intptr_t)v7925;
	i8 v7927 = v7926+(+43);
	*(i1*)(intptr_t)v7927 = v7924;


	i8 v8008 = (i8)(intptr_t)(f443_CopyChildNodes);

	((void(*)(void))(intptr_t)v8008)();

endsub:;
}
	void f439_InstructionMatcher(void);
	void f431_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f434_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f432_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f433_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f217_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f433_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f435_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f433_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f434_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f437_PrintNodes(i8 /* rootnode */);
const i1 c02_s016d[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s016e[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s016f[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0170[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0171[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0172[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0173[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };
	void f61_SimpleError(i8 /* message */);

// deadlock workspace at ws+3184 length ws+0
void f445_deadlock(void) {

	i8 v8369 = (i8)(intptr_t)(ws+3088);
	i8 v8370 = *(i8*)(intptr_t)v8369;
	i8 v8371 = (i8)(intptr_t)(f437_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v8371)(v8370);

	i8 v8372 = (i8)(intptr_t)c02_s016d;
	i8 v8373 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8373)(v8372);

	i8 v8374 = (i8)(intptr_t)(ws+3128);
	i8 v8375 = *(i8*)(intptr_t)v8374;
	i8 v8376 = v8375+(+16);
	i8 v8377 = *(i8*)(intptr_t)v8376;
	i4 v8378 = v8377;
	i8 v8379 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8379)(v8378);

	i8 v8380 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8380)();

	i8 v8381 = (i8)(intptr_t)c02_s016e;
	i8 v8382 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8382)(v8381);

	i8 v8383 = (i8)(intptr_t)(ws+3168);
	i8 v8384 = *(i8*)(intptr_t)v8383;
	i8 v8385 = v8384+(+16);
	i8 v8386 = *(i8*)(intptr_t)v8385;
	i4 v8387 = v8386;
	i8 v8388 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8388)(v8387);

	i8 v8389 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8389)();

	i8 v8390 = (i8)(intptr_t)c02_s016f;
	i8 v8391 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8391)(v8390);

	i8 v8392 = (i8)(intptr_t)(ws+3128);
	i8 v8393 = *(i8*)(intptr_t)v8392;
	i8 v8394 = v8393+(+40);
	i1 v8395 = *(i1*)(intptr_t)v8394;
	i4 v8396 = v8395;
	i8 v8397 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8397)(v8396);

	i8 v8398 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8398)();

	i8 v8399 = (i8)(intptr_t)c02_s0170;
	i8 v8400 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8400)(v8399);

	i8 v8401 = (i8)(intptr_t)(ws+3128);
	i8 v8402 = *(i8*)(intptr_t)v8401;
	i8 v8403 = v8402+(+43);
	i1 v8404 = *(i1*)(intptr_t)v8403;
	i4 v8405 = v8404;
	i8 v8406 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8406)(v8405);

	i8 v8407 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8407)();

	i8 v8408 = (i8)(intptr_t)c02_s0171;
	i8 v8409 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8409)(v8408);

	i8 v8410 = (i8)(intptr_t)(ws+3136);
	i8 v8411 = *(i8*)(intptr_t)v8410;
	i8 v8412 = v8411+(+56);
	i1 v8413 = *(i1*)(intptr_t)v8412;
	i4 v8414 = v8413;
	i8 v8415 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8415)(v8414);

	i8 v8416 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8416)();

	i8 v8417 = (i8)(intptr_t)c02_s0172;
	i8 v8418 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8418)(v8417);

	i8 v8419 = (i8)(intptr_t)(ws+3168);
	i8 v8420 = *(i8*)(intptr_t)v8419;
	i8 v8421 = v8420+(+42);
	i1 v8422 = *(i1*)(intptr_t)v8421;
	i4 v8423 = v8422;
	i8 v8424 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8424)(v8423);

	i8 v8425 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8425)();

	i8 v8426 = (i8)(intptr_t)c02_s0173;
	i8 v8427 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8427)(v8426);

endsub:;
}
	void f445_deadlock(void);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f434_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f445_deadlock(void);
	void f218_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f216_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f435_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+3160 length ws+20
void f444_AllocateRegister(void) {

	i8 v8015 = (i8)(intptr_t)(ws+3128);
	i8 v8016 = *(i8*)(intptr_t)v8015;
	i8 v8017 = v8016+(+40);
	i1 v8018 = *(i1*)(intptr_t)v8017;
	i8 v8019 = (i8)(intptr_t)(f431_IsStackedRegister);
	i1 v8020;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v8019)(&v8020, v8018);
	i1 v8021 = (i1)+0;
	if (v8020==v8021) goto c02_05cc; else goto c02_05cb;

c02_05cb:;

	i8 v8022 = (i8)(intptr_t)(ws+3136);
	i8 v8023 = *(i8*)(intptr_t)v8022;
	i8 v8024 = v8023+(+56);
	i1 v8025 = *(i1*)(intptr_t)v8024;
	i8 v8026 = (i8)(intptr_t)(ws+3128);
	i8 v8027 = *(i8*)(intptr_t)v8026;
	i8 v8028 = v8027+(+40);
	i1 v8029 = *(i1*)(intptr_t)v8028;
	i1 v8030 = v8025&v8029;
	i8 v8031 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8031 = v8030;

	i8 v8032 = (i8)(intptr_t)(ws+3160);
	i1 v8033 = *(i1*)(intptr_t)v8032;
	i1 v8034 = (i1)+0;
	if (v8033==v8034) goto c02_05d1; else goto c02_05d0;

c02_05d0:;

	i8 v8035 = (i8)(intptr_t)(ws+3160);
	i1 v8036 = *(i1*)(intptr_t)v8035;
	i8 v8037 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8038;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8037)(&v8038, v8036);
	i8 v8039 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8039 = v8038;

	i8 v8040 = (i8)(intptr_t)(ws+3160);
	i1 v8041 = *(i1*)(intptr_t)v8040;
	i8 v8042 = (i8)(intptr_t)(ws+3136);
	i8 v8043 = *(i8*)(intptr_t)v8042;
	i8 v8044 = v8043+(+57);
	*(i1*)(intptr_t)v8044 = v8041;

	i8 v8045 = (i8)(intptr_t)(ws+3160);
	i1 v8046 = *(i1*)(intptr_t)v8045;
	i8 v8047 = (i8)(intptr_t)(ws+3128);
	i8 v8048 = *(i8*)(intptr_t)v8047;
	i8 v8049 = v8048+(+41);
	*(i1*)(intptr_t)v8049 = v8046;

	goto c02_05cd;

c02_05d1:;

	i8 v8050 = (i8)(intptr_t)(ws+3128);
	i8 v8051 = *(i8*)(intptr_t)v8050;
	i8 v8052 = v8051+(+40);
	i1 v8053 = *(i1*)(intptr_t)v8052;
	i8 v8054 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8055;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8054)(&v8055, v8053);
	i8 v8056 = (i8)(intptr_t)(ws+3128);
	i8 v8057 = *(i8*)(intptr_t)v8056;
	i8 v8058 = v8057+(+41);
	*(i1*)(intptr_t)v8058 = v8055;

	i8 v8059 = (i8)(intptr_t)(ws+3136);
	i8 v8060 = *(i8*)(intptr_t)v8059;
	i8 v8061 = v8060+(+56);
	i1 v8062 = *(i1*)(intptr_t)v8061;
	i8 v8063 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8064;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8063)(&v8064, v8062);
	i8 v8065 = (i8)(intptr_t)(ws+3136);
	i8 v8066 = *(i8*)(intptr_t)v8065;
	i8 v8067 = v8066+(+57);
	*(i1*)(intptr_t)v8067 = v8064;

	i8 v8068 = (i8)(intptr_t)(ws+3128);
	i8 v8069 = *(i8*)(intptr_t)v8068;
	i8 v8070 = (i8)(intptr_t)(ws+3128);
	i8 v8071 = *(i8*)(intptr_t)v8070;
	i8 v8072 = v8071+(+41);
	i1 v8073 = *(i1*)(intptr_t)v8072;
	i8 v8074 = (i8)(intptr_t)(ws+3136);
	i8 v8075 = *(i8*)(intptr_t)v8074;
	i8 v8076 = v8075+(+57);
	i1 v8077 = *(i1*)(intptr_t)v8076;
	i8 v8078 = (i8)(intptr_t)(f434_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8078)(v8077, v8073, v8069);

c02_05cd:;

	goto c02_05c8;

c02_05cc:;

	i8 v8079 = (i8)(intptr_t)(ws+3136);
	i8 v8080 = *(i8*)(intptr_t)v8079;
	i8 v8081 = v8080+(+48);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	i8 v8083 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v8083 = v8082;

	i8 v8084 = (i8)(intptr_t)(ws+3168);
	i8 v8085 = *(i8*)(intptr_t)v8084;
	i8 v8086 = (i8)(intptr_t)(ws+3128);
	i8 v8087 = *(i8*)(intptr_t)v8086;
	i8 v8088 = (i8)(intptr_t)(f432_CalculateBlockedRegisters);
	i1 v8089;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8088)(&v8089, v8087, v8085);
	i8 v8090 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8090 = v8089;

	i8 v8091 = (i8)(intptr_t)(ws+3136);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+56);
	i1 v8094 = *(i1*)(intptr_t)v8093;
	i8 v8095 = (i8)(intptr_t)(ws+3128);
	i8 v8096 = *(i8*)(intptr_t)v8095;
	i8 v8097 = v8096+(+40);
	i1 v8098 = *(i1*)(intptr_t)v8097;
	i1 v8099 = v8094&v8098;
	i8 v8100 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8100 = v8099;

	i8 v8101 = (i8)(intptr_t)(ws+3160);
	i1 v8102 = *(i1*)(intptr_t)v8101;
	i8 v8103 = (i8)(intptr_t)(ws+3176);
	i1 v8104 = *(i1*)(intptr_t)v8103;
	i8 v8105 = (i8)(intptr_t)(ws+3128);
	i8 v8106 = *(i8*)(intptr_t)v8105;
	i8 v8107 = v8106+(+43);
	i1 v8108 = *(i1*)(intptr_t)v8107;
	i1 v8109 = v8104|v8108;
	i8 v8110 = (i8)(intptr_t)(ws+3168);
	i8 v8111 = *(i8*)(intptr_t)v8110;
	i8 v8112 = v8111+(+42);
	i1 v8113 = *(i1*)(intptr_t)v8112;
	i1 v8114 = v8109|v8113;
	i1 v8115 = ~v8114;
	i1 v8116 = v8102&v8115;
	i8 v8117 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v8117 = v8116;

	i8 v8118 = (i8)(intptr_t)(ws+3177);
	i1 v8119 = *(i1*)(intptr_t)v8118;
	i1 v8120 = (i1)+0;
	if (v8119==v8120) goto c02_05d6; else goto c02_05d5;

c02_05d5:;

	i8 v8121 = (i8)(intptr_t)(ws+3177);
	i1 v8122 = *(i1*)(intptr_t)v8121;
	i8 v8123 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8124;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8123)(&v8124, v8122);
	i8 v8125 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8125 = v8124;

	i8 v8126 = (i8)(intptr_t)(ws+3160);
	i1 v8127 = *(i1*)(intptr_t)v8126;
	i8 v8128 = (i8)(intptr_t)(ws+3136);
	i8 v8129 = *(i8*)(intptr_t)v8128;
	i8 v8130 = v8129+(+57);
	*(i1*)(intptr_t)v8130 = v8127;

	i8 v8131 = (i8)(intptr_t)(ws+3160);
	i1 v8132 = *(i1*)(intptr_t)v8131;
	i8 v8133 = (i8)(intptr_t)(ws+3128);
	i8 v8134 = *(i8*)(intptr_t)v8133;
	i8 v8135 = v8134+(+41);
	*(i1*)(intptr_t)v8135 = v8132;

	i8 v8136 = (i8)(intptr_t)(ws+3160);
	i1 v8137 = *(i1*)(intptr_t)v8136;
	i8 v8138 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8139;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8138)(&v8139, v8137);
	i8 v8140 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8140 = v8139;

	i8 v8141 = (i8)(intptr_t)(ws+3168);
	i8 v8142 = *(i8*)(intptr_t)v8141;
	i8 v8143 = v8142+(+42);
	i1 v8144 = *(i1*)(intptr_t)v8143;
	i8 v8145 = (i8)(intptr_t)(ws+3176);
	i1 v8146 = *(i1*)(intptr_t)v8145;
	i1 v8147 = v8144|v8146;
	i8 v8148 = (i8)(intptr_t)(ws+3168);
	i8 v8149 = *(i8*)(intptr_t)v8148;
	i8 v8150 = v8149+(+42);
	*(i1*)(intptr_t)v8150 = v8147;

	i8 v8151 = (i8)(intptr_t)(ws+3168);
	i8 v8152 = *(i8*)(intptr_t)v8151;
	i8 v8153 = (i8)(intptr_t)(ws+3128);
	i8 v8154 = *(i8*)(intptr_t)v8153;
	i8 v8155 = (i8)(intptr_t)(ws+3176);
	i1 v8156 = *(i1*)(intptr_t)v8155;
	i8 v8157 = (i8)(intptr_t)(f433_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8157)(v8156, v8154, v8152);

	i8 v8158 = (i8)(intptr_t)(ws+3128);
	i8 v8159 = *(i8*)(intptr_t)v8158;
	i8 v8160 = v8159+(+43);
	i1 v8161 = *(i1*)(intptr_t)v8160;
	i8 v8162 = (i8)(intptr_t)(ws+3176);
	i1 v8163 = *(i1*)(intptr_t)v8162;
	i1 v8164 = v8161|v8163;
	i8 v8165 = (i8)(intptr_t)(ws+3128);
	i8 v8166 = *(i8*)(intptr_t)v8165;
	i8 v8167 = v8166+(+43);
	*(i1*)(intptr_t)v8167 = v8164;

	goto c02_05d2;

c02_05d6:;

	i8 v8168 = (i8)(intptr_t)(ws+3136);
	i8 v8169 = *(i8*)(intptr_t)v8168;
	i8 v8170 = v8169+(+56);
	i1 v8171 = *(i1*)(intptr_t)v8170;
	i8 v8172 = (i8)(intptr_t)(f217_FindCompatibleRegisters);
	i1 v8173;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v8172)(&v8173, v8171);
	i8 v8174 = (i8)(intptr_t)(ws+3178);
	*(i1*)(intptr_t)v8174 = v8173;

	i8 v8175 = (i8)(intptr_t)(ws+3128);
	i8 v8176 = *(i8*)(intptr_t)v8175;
	i8 v8177 = v8176+(+40);
	i1 v8178 = *(i1*)(intptr_t)v8177;
	i8 v8179 = (i8)(intptr_t)(ws+3178);
	i1 v8180 = *(i1*)(intptr_t)v8179;
	i1 v8181 = v8178&v8180;
	i8 v8182 = (i8)(intptr_t)(ws+3176);
	i1 v8183 = *(i1*)(intptr_t)v8182;
	i8 v8184 = (i8)(intptr_t)(ws+3128);
	i8 v8185 = *(i8*)(intptr_t)v8184;
	i8 v8186 = v8185+(+43);
	i1 v8187 = *(i1*)(intptr_t)v8186;
	i1 v8188 = v8183|v8187;
	i1 v8189 = ~v8188;
	i1 v8190 = v8181&v8189;
	i8 v8191 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v8191 = v8190;

	i8 v8192 = (i8)(intptr_t)(ws+3136);
	i8 v8193 = *(i8*)(intptr_t)v8192;
	i8 v8194 = v8193+(+56);
	i1 v8195 = *(i1*)(intptr_t)v8194;
	i8 v8196 = (i8)(intptr_t)(ws+3168);
	i8 v8197 = *(i8*)(intptr_t)v8196;
	i8 v8198 = v8197+(+42);
	i1 v8199 = *(i1*)(intptr_t)v8198;
	i1 v8200 = ~v8199;
	i1 v8201 = v8195&v8200;
	i8 v8202 = (i8)(intptr_t)(ws+3179);
	*(i1*)(intptr_t)v8202 = v8201;

	i8 v8203 = (i8)(intptr_t)(ws+3177);
	i1 v8204 = *(i1*)(intptr_t)v8203;
	i1 v8205 = (i1)+0;
	if (v8204==v8205) goto c02_05dd; else goto c02_05de;

c02_05de:;

	i8 v8206 = (i8)(intptr_t)(ws+3179);
	i1 v8207 = *(i1*)(intptr_t)v8206;
	i1 v8208 = (i1)+0;
	if (v8207==v8208) goto c02_05dd; else goto c02_05dc;

c02_05dc:;

	i8 v8209 = (i8)(intptr_t)(ws+3177);
	i1 v8210 = *(i1*)(intptr_t)v8209;
	i8 v8211 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8212;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8211)(&v8212, v8210);
	i8 v8213 = (i8)(intptr_t)(ws+3128);
	i8 v8214 = *(i8*)(intptr_t)v8213;
	i8 v8215 = v8214+(+41);
	*(i1*)(intptr_t)v8215 = v8212;

	i8 v8216 = (i8)(intptr_t)(ws+3179);
	i1 v8217 = *(i1*)(intptr_t)v8216;
	i8 v8218 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8219;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8218)(&v8219, v8217);
	i8 v8220 = (i8)(intptr_t)(ws+3136);
	i8 v8221 = *(i8*)(intptr_t)v8220;
	i8 v8222 = v8221+(+57);
	*(i1*)(intptr_t)v8222 = v8219;

	i8 v8223 = (i8)(intptr_t)(ws+3168);
	i8 v8224 = *(i8*)(intptr_t)v8223;
	i8 v8225 = v8224+(+42);
	i1 v8226 = *(i1*)(intptr_t)v8225;
	i8 v8227 = (i8)(intptr_t)(ws+3136);
	i8 v8228 = *(i8*)(intptr_t)v8227;
	i8 v8229 = v8228+(+57);
	i1 v8230 = *(i1*)(intptr_t)v8229;
	i8 v8231 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8232;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8231)(&v8232, v8230);
	i1 v8233 = v8226|v8232;
	i8 v8234 = (i8)(intptr_t)(ws+3168);
	i8 v8235 = *(i8*)(intptr_t)v8234;
	i8 v8236 = v8235+(+42);
	*(i1*)(intptr_t)v8236 = v8233;

	i8 v8237 = (i8)(intptr_t)(ws+3128);
	i8 v8238 = *(i8*)(intptr_t)v8237;
	i8 v8239 = v8238+(+41);
	i1 v8240 = *(i1*)(intptr_t)v8239;
	i8 v8241 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8242;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8241)(&v8242, v8240);
	i8 v8243 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8243 = v8242;

	i8 v8244 = (i8)(intptr_t)(ws+3168);
	i8 v8245 = *(i8*)(intptr_t)v8244;
	i8 v8246 = (i8)(intptr_t)(ws+3128);
	i8 v8247 = *(i8*)(intptr_t)v8246;
	i8 v8248 = (i8)(intptr_t)(ws+3176);
	i1 v8249 = *(i1*)(intptr_t)v8248;
	i8 v8250 = (i8)(intptr_t)(f433_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8250)(v8249, v8247, v8245);

	i8 v8251 = (i8)(intptr_t)(ws+3128);
	i8 v8252 = *(i8*)(intptr_t)v8251;
	i8 v8253 = v8252+(+43);
	i1 v8254 = *(i1*)(intptr_t)v8253;
	i8 v8255 = (i8)(intptr_t)(ws+3176);
	i1 v8256 = *(i1*)(intptr_t)v8255;
	i1 v8257 = v8254|v8256;
	i8 v8258 = (i8)(intptr_t)(ws+3128);
	i8 v8259 = *(i8*)(intptr_t)v8258;
	i8 v8260 = v8259+(+43);
	*(i1*)(intptr_t)v8260 = v8257;

	i8 v8261 = (i8)(intptr_t)(ws+3168);
	i8 v8262 = *(i8*)(intptr_t)v8261;
	i8 v8263 = (i8)(intptr_t)(ws+3128);
	i8 v8264 = *(i8*)(intptr_t)v8263;
	i8 v8265 = v8264+(+41);
	i1 v8266 = *(i1*)(intptr_t)v8265;
	i8 v8267 = (i8)(intptr_t)(ws+3136);
	i8 v8268 = *(i8*)(intptr_t)v8267;
	i8 v8269 = v8268+(+57);
	i1 v8270 = *(i1*)(intptr_t)v8269;
	i8 v8271 = (i8)(intptr_t)(f435_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8271)(v8270, v8266, v8262);

	goto c02_05d7;

c02_05dd:;

	i8 v8272 = (i8)(intptr_t)(ws+3136);
	i8 v8273 = *(i8*)(intptr_t)v8272;
	i8 v8274 = v8273+(+56);
	i1 v8275 = *(i1*)(intptr_t)v8274;
	i8 v8276 = (i8)(intptr_t)(ws+3176);
	i1 v8277 = *(i1*)(intptr_t)v8276;
	i8 v8278 = (i8)(intptr_t)(ws+3168);
	i8 v8279 = *(i8*)(intptr_t)v8278;
	i8 v8280 = v8279+(+42);
	i1 v8281 = *(i1*)(intptr_t)v8280;
	i1 v8282 = v8277|v8281;
	i1 v8283 = ~v8282;
	i1 v8284 = v8275&v8283;
	i8 v8285 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v8285 = v8284;

	i8 v8286 = (i8)(intptr_t)(ws+3128);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	i8 v8288 = v8287+(+40);
	i1 v8289 = *(i1*)(intptr_t)v8288;
	i8 v8290 = (i8)(intptr_t)(ws+3178);
	i1 v8291 = *(i1*)(intptr_t)v8290;
	i1 v8292 = v8289&v8291;
	i8 v8293 = (i8)(intptr_t)(ws+3128);
	i8 v8294 = *(i8*)(intptr_t)v8293;
	i8 v8295 = v8294+(+43);
	i1 v8296 = *(i1*)(intptr_t)v8295;
	i1 v8297 = ~v8296;
	i1 v8298 = v8292&v8297;
	i8 v8299 = (i8)(intptr_t)(ws+3179);
	*(i1*)(intptr_t)v8299 = v8298;

	i8 v8300 = (i8)(intptr_t)(ws+3177);
	i1 v8301 = *(i1*)(intptr_t)v8300;
	i1 v8302 = (i1)+0;
	if (v8301==v8302) goto c02_05e5; else goto c02_05e6;

c02_05e6:;

	i8 v8303 = (i8)(intptr_t)(ws+3179);
	i1 v8304 = *(i1*)(intptr_t)v8303;
	i1 v8305 = (i1)+0;
	if (v8304==v8305) goto c02_05e5; else goto c02_05e4;

c02_05e4:;

	i8 v8306 = (i8)(intptr_t)(ws+3179);
	i1 v8307 = *(i1*)(intptr_t)v8306;
	i8 v8308 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8309;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8308)(&v8309, v8307);
	i8 v8310 = (i8)(intptr_t)(ws+3128);
	i8 v8311 = *(i8*)(intptr_t)v8310;
	i8 v8312 = v8311+(+41);
	*(i1*)(intptr_t)v8312 = v8309;

	i8 v8313 = (i8)(intptr_t)(ws+3177);
	i1 v8314 = *(i1*)(intptr_t)v8313;
	i8 v8315 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8316;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8315)(&v8316, v8314);
	i8 v8317 = (i8)(intptr_t)(ws+3136);
	i8 v8318 = *(i8*)(intptr_t)v8317;
	i8 v8319 = v8318+(+57);
	*(i1*)(intptr_t)v8319 = v8316;

	i8 v8320 = (i8)(intptr_t)(ws+3136);
	i8 v8321 = *(i8*)(intptr_t)v8320;
	i8 v8322 = v8321+(+57);
	i1 v8323 = *(i1*)(intptr_t)v8322;
	i8 v8324 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8325;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8324)(&v8325, v8323);
	i8 v8326 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8326 = v8325;

	i8 v8327 = (i8)(intptr_t)(ws+3168);
	i8 v8328 = *(i8*)(intptr_t)v8327;
	i8 v8329 = v8328+(+42);
	i1 v8330 = *(i1*)(intptr_t)v8329;
	i8 v8331 = (i8)(intptr_t)(ws+3176);
	i1 v8332 = *(i1*)(intptr_t)v8331;
	i1 v8333 = v8330|v8332;
	i8 v8334 = (i8)(intptr_t)(ws+3168);
	i8 v8335 = *(i8*)(intptr_t)v8334;
	i8 v8336 = v8335+(+42);
	*(i1*)(intptr_t)v8336 = v8333;

	i8 v8337 = (i8)(intptr_t)(ws+3168);
	i8 v8338 = *(i8*)(intptr_t)v8337;
	i8 v8339 = (i8)(intptr_t)(ws+3128);
	i8 v8340 = *(i8*)(intptr_t)v8339;
	i8 v8341 = (i8)(intptr_t)(ws+3176);
	i1 v8342 = *(i1*)(intptr_t)v8341;
	i8 v8343 = (i8)(intptr_t)(f433_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8343)(v8342, v8340, v8338);

	i8 v8344 = (i8)(intptr_t)(ws+3128);
	i8 v8345 = *(i8*)(intptr_t)v8344;
	i8 v8346 = v8345+(+43);
	i1 v8347 = *(i1*)(intptr_t)v8346;
	i8 v8348 = (i8)(intptr_t)(ws+3128);
	i8 v8349 = *(i8*)(intptr_t)v8348;
	i8 v8350 = v8349+(+41);
	i1 v8351 = *(i1*)(intptr_t)v8350;
	i8 v8352 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8353;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8352)(&v8353, v8351);
	i1 v8354 = v8347|v8353;
	i8 v8355 = (i8)(intptr_t)(ws+3128);
	i8 v8356 = *(i8*)(intptr_t)v8355;
	i8 v8357 = v8356+(+43);
	*(i1*)(intptr_t)v8357 = v8354;

	i8 v8358 = (i8)(intptr_t)(ws+3128);
	i8 v8359 = *(i8*)(intptr_t)v8358;
	i8 v8360 = (i8)(intptr_t)(ws+3128);
	i8 v8361 = *(i8*)(intptr_t)v8360;
	i8 v8362 = v8361+(+41);
	i1 v8363 = *(i1*)(intptr_t)v8362;
	i8 v8364 = (i8)(intptr_t)(ws+3136);
	i8 v8365 = *(i8*)(intptr_t)v8364;
	i8 v8366 = v8365+(+57);
	i1 v8367 = *(i1*)(intptr_t)v8366;
	i8 v8368 = (i8)(intptr_t)(f434_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8368)(v8367, v8363, v8359);

	goto c02_05df;

c02_05e5:;


	i8 v8428 = (i8)(intptr_t)(ws+3128);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	i8 v8430 = v8429+(+40);
	i1 v8431 = *(i1*)(intptr_t)v8430;
	i8 v8432 = (i8)(intptr_t)(ws+3178);
	i1 v8433 = *(i1*)(intptr_t)v8432;
	i1 v8434 = v8431&v8433;
	i8 v8435 = (i8)(intptr_t)(ws+3128);
	i8 v8436 = *(i8*)(intptr_t)v8435;
	i8 v8437 = v8436+(+43);
	i1 v8438 = *(i1*)(intptr_t)v8437;
	i1 v8439 = ~v8438;
	i1 v8440 = v8434&v8439;
	i8 v8441 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8441 = v8440;

	i8 v8442 = (i8)(intptr_t)(ws+3160);
	i1 v8443 = *(i1*)(intptr_t)v8442;
	i1 v8444 = (i1)+0;
	if (v8443==v8444) goto c02_05ea; else goto c02_05eb;

c02_05ea:;

	i8 v8445 = (i8)(intptr_t)(f445_deadlock);

	((void(*)(void))(intptr_t)v8445)();

	goto c02_05e7;

c02_05eb:;

c02_05e7:;

	i8 v8446 = (i8)(intptr_t)(ws+3160);
	i1 v8447 = *(i1*)(intptr_t)v8446;
	i8 v8448 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8449;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8448)(&v8449, v8447);
	i8 v8450 = (i8)(intptr_t)(ws+3128);
	i8 v8451 = *(i8*)(intptr_t)v8450;
	i8 v8452 = v8451+(+41);
	*(i1*)(intptr_t)v8452 = v8449;

	i8 v8453 = (i8)(intptr_t)(ws+3128);
	i8 v8454 = *(i8*)(intptr_t)v8453;
	i8 v8455 = v8454+(+43);
	i1 v8456 = *(i1*)(intptr_t)v8455;
	i8 v8457 = (i8)(intptr_t)(ws+3128);
	i8 v8458 = *(i8*)(intptr_t)v8457;
	i8 v8459 = v8458+(+41);
	i1 v8460 = *(i1*)(intptr_t)v8459;
	i8 v8461 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8462;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8461)(&v8462, v8460);
	i1 v8463 = v8456|v8462;
	i8 v8464 = (i8)(intptr_t)(ws+3128);
	i8 v8465 = *(i8*)(intptr_t)v8464;
	i8 v8466 = v8465+(+43);
	*(i1*)(intptr_t)v8466 = v8463;

	i8 v8467 = (i8)(intptr_t)(ws+3128);
	i8 v8468 = *(i8*)(intptr_t)v8467;
	i8 v8469 = (i8)(intptr_t)(ws+3128);
	i8 v8470 = *(i8*)(intptr_t)v8469;
	i8 v8471 = v8470+(+41);
	i1 v8472 = *(i1*)(intptr_t)v8471;
	i1 v8473 = (i1)+0;
	i8 v8474 = (i8)(intptr_t)(f434_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8474)(v8473, v8472, v8468);

	i8 v8475 = (i8)(intptr_t)(ws+3136);
	i8 v8476 = *(i8*)(intptr_t)v8475;
	i8 v8477 = v8476+(+56);
	i1 v8478 = *(i1*)(intptr_t)v8477;
	i8 v8479 = (i8)(intptr_t)(ws+3168);
	i8 v8480 = *(i8*)(intptr_t)v8479;
	i8 v8481 = v8480+(+42);
	i1 v8482 = *(i1*)(intptr_t)v8481;
	i1 v8483 = ~v8482;
	i1 v8484 = v8478&v8483;
	i8 v8485 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8485 = v8484;

	i8 v8486 = (i8)(intptr_t)(ws+3160);
	i1 v8487 = *(i1*)(intptr_t)v8486;
	i1 v8488 = (i1)+0;
	if (v8487==v8488) goto c02_05ef; else goto c02_05f0;

c02_05ef:;

	i8 v8489 = (i8)(intptr_t)(f445_deadlock);

	((void(*)(void))(intptr_t)v8489)();

	goto c02_05ec;

c02_05f0:;

c02_05ec:;

	i8 v8490 = (i8)(intptr_t)(ws+3160);
	i1 v8491 = *(i1*)(intptr_t)v8490;
	i8 v8492 = (i8)(intptr_t)(f218_FindFirst);
	i1 v8493;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8492)(&v8493, v8491);
	i8 v8494 = (i8)(intptr_t)(ws+3136);
	i8 v8495 = *(i8*)(intptr_t)v8494;
	i8 v8496 = v8495+(+57);
	*(i1*)(intptr_t)v8496 = v8493;

	i8 v8497 = (i8)(intptr_t)(ws+3168);
	i8 v8498 = *(i8*)(intptr_t)v8497;
	i8 v8499 = v8498+(+42);
	i1 v8500 = *(i1*)(intptr_t)v8499;
	i8 v8501 = (i8)(intptr_t)(ws+3136);
	i8 v8502 = *(i8*)(intptr_t)v8501;
	i8 v8503 = v8502+(+57);
	i1 v8504 = *(i1*)(intptr_t)v8503;
	i8 v8505 = (i8)(intptr_t)(f216_FindConflictingRegisters);
	i1 v8506;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8505)(&v8506, v8504);
	i1 v8507 = v8500|v8506;
	i8 v8508 = (i8)(intptr_t)(ws+3168);
	i8 v8509 = *(i8*)(intptr_t)v8508;
	i8 v8510 = v8509+(+42);
	*(i1*)(intptr_t)v8510 = v8507;

	i8 v8511 = (i8)(intptr_t)(ws+3168);
	i8 v8512 = *(i8*)(intptr_t)v8511;
	i1 v8513 = (i1)+0;
	i8 v8514 = (i8)(intptr_t)(ws+3136);
	i8 v8515 = *(i8*)(intptr_t)v8514;
	i8 v8516 = v8515+(+57);
	i1 v8517 = *(i1*)(intptr_t)v8516;
	i8 v8518 = (i8)(intptr_t)(f435_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8518)(v8517, v8513, v8512);

c02_05df:;

c02_05d7:;

c02_05d2:;

c02_05c8:;

endsub:;
}
	void f444_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+3160 length ws+1
void f446_UpdateProducedRegisters(void) {

	i1 v8520 = (i1)+0;
	i8 v8521 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8521 = v8520;

c02_05f3:;

	i8 v8522 = (i8)(intptr_t)(ws+3096);
	i1 v8523 = *(i1*)(intptr_t)v8522;
	i1 v8524 = (i1)+3;
	if (v8523==v8524) goto c02_05f6; else goto c02_05f5;

c02_05f5:;

	i8 v8525 = (i8)(intptr_t)(ws+3128);
	i8 v8526 = *(i8*)(intptr_t)v8525;
	i8 v8527 = v8526+(+16);
	i8 v8528 = (i8)(intptr_t)(ws+3096);
	i1 v8529 = *(i1*)(intptr_t)v8528;
	i8 v8530 = v8529;
	i1 v8531 = (i1)+3;
	i8 v8532 = ((i8)v8530)<<v8531;
	i8 v8533 = v8527+v8532;
	i8 v8534 = *(i8*)(intptr_t)v8533;
	i8 v8535 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v8535 = v8534;

	i8 v8536 = (i8)(intptr_t)(ws+3136);
	i8 v8537 = *(i8*)(intptr_t)v8536;
	i8 v8538 = (i8)+0;
	if (v8537==v8538) goto c02_05fd; else goto c02_05fe;

c02_05fe:;

	i8 v8539 = (i8)(intptr_t)(ws+3136);
	i8 v8540 = *(i8*)(intptr_t)v8539;
	i8 v8541 = v8540+(+56);
	i1 v8542 = *(i1*)(intptr_t)v8541;
	i1 v8543 = (i1)-1;
	if (v8542==v8543) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v8544 = (i8)(intptr_t)(ws+3128);
	i8 v8545 = *(i8*)(intptr_t)v8544;
	i8 v8546 = v8545+(+41);
	i1 v8547 = *(i1*)(intptr_t)v8546;
	i8 v8548 = (i8)(intptr_t)(ws+3136);
	i8 v8549 = *(i8*)(intptr_t)v8548;
	i8 v8550 = v8549+(+56);
	*(i1*)(intptr_t)v8550 = v8547;

	i1 v8551 = (i1)+0;
	i8 v8552 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8552 = v8551;

c02_0601:;

	i8 v8553 = (i8)(intptr_t)(ws+3160);
	i1 v8554 = *(i1*)(intptr_t)v8553;
	i1 v8555 = (i1)+3;
	if (v8554==v8555) goto c02_0604; else goto c02_0603;

c02_0603:;

	i8 v8556 = (i8)(intptr_t)(ws+3096);
	i1 v8557 = *(i1*)(intptr_t)v8556;
	i8 v8558 = (i8)(intptr_t)(ws+3160);
	i1 v8559 = *(i1*)(intptr_t)v8558;
	if (v8557==v8559) goto c02_0609; else goto c02_0608;

c02_0608:;

	i8 v8560 = (i8)(intptr_t)(ws+3128);
	i8 v8561 = *(i8*)(intptr_t)v8560;
	i8 v8562 = v8561+(+16);
	i8 v8563 = (i8)(intptr_t)(ws+3160);
	i1 v8564 = *(i1*)(intptr_t)v8563;
	i8 v8565 = v8564;
	i1 v8566 = (i1)+3;
	i8 v8567 = ((i8)v8565)<<v8566;
	i8 v8568 = v8562+v8567;
	i8 v8569 = *(i8*)(intptr_t)v8568;
	i8 v8570 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v8570 = v8569;

	i8 v8571 = (i8)(intptr_t)(ws+3136);
	i8 v8572 = *(i8*)(intptr_t)v8571;
	i8 v8573 = (i8)+0;
	if (v8572==v8573) goto c02_060e; else goto c02_060d;

c02_060d:;

	i8 v8574 = (i8)(intptr_t)(ws+3136);
	i8 v8575 = *(i8*)(intptr_t)v8574;
	i8 v8576 = v8575+(+56);
	i1 v8577 = *(i1*)(intptr_t)v8576;
	i8 v8578 = (i8)(intptr_t)(ws+3128);
	i8 v8579 = *(i8*)(intptr_t)v8578;
	i8 v8580 = v8579+(+41);
	i1 v8581 = *(i1*)(intptr_t)v8580;
	i1 v8582 = ~v8581;
	i1 v8583 = v8577&v8582;
	i8 v8584 = (i8)(intptr_t)(ws+3136);
	i8 v8585 = *(i8*)(intptr_t)v8584;
	i8 v8586 = v8585+(+56);
	*(i1*)(intptr_t)v8586 = v8583;

	goto c02_060a;

c02_060e:;

c02_060a:;

	goto c02_0605;

c02_0609:;

c02_0605:;

	i8 v8587 = (i8)(intptr_t)(ws+3160);
	i1 v8588 = *(i1*)(intptr_t)v8587;
	i1 v8589 = v8588+(+1);
	i8 v8590 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8590 = v8589;

	goto c02_0601;

c02_0604:;

	goto c02_05f7;

c02_05fd:;

c02_05f7:;

	i8 v8591 = (i8)(intptr_t)(ws+3096);
	i1 v8592 = *(i1*)(intptr_t)v8591;
	i1 v8593 = v8592+(+1);
	i8 v8594 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8594 = v8593;

	goto c02_05f3;

c02_05f6:;

endsub:;
}
	void f446_UpdateProducedRegisters(void);
	void f436_ShuffleRegisters(i8 /* moves */);
	void f256_EmitOneInstruction(i8 /* self */, i1 /* ruleid */);
	void f436_ShuffleRegisters(i8 /* moves */);
	void f227_ArchEndInstruction(void);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// EmitAndFreeInstructions workspace at ws+3160 length ws+8
void f447_EmitAndFreeInstructions(void) {

c02_060f:;

	i8 v8596 = (i8)(intptr_t)(ws+3112);
	i8 v8597 = *(i8*)(intptr_t)v8596;
	i8 v8598 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v8598 = v8597;

	i8 v8599 = (i8)(intptr_t)(ws+3160);
	i8 v8600 = *(i8*)(intptr_t)v8599;
	i8 v8601 = (i8)+0;
	if (v8600==v8601) goto c02_0614; else goto c02_0615;

c02_0614:;

	goto c02_0610;

c02_0615:;

c02_0611:;

	i8 v8602 = (i8)(intptr_t)(ws+3112);
	i8 v8603 = *(i8*)(intptr_t)v8602;
	i8 v8604 = v8603+(+8);
	i8 v8605 = *(i8*)(intptr_t)v8604;
	i8 v8606 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v8606 = v8605;

	i8 v8607 = (i8)(intptr_t)(ws+3160);
	i8 v8608 = *(i8*)(intptr_t)v8607;
	i8 v8609 = v8608+(+52);
	i8 v8610 = (i8)(intptr_t)(f436_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v8610)(v8609);

	i8 v8611 = (i8)(intptr_t)(ws+3160);
	i8 v8612 = *(i8*)(intptr_t)v8611;
	i8 v8613 = v8612+(+62);
	i1 v8614 = *(i1*)(intptr_t)v8613;
	i8 v8615 = (i8)(intptr_t)(ws+3160);
	i8 v8616 = *(i8*)(intptr_t)v8615;
	i8 v8617 = (i8)(intptr_t)(f256_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* ruleid */))(intptr_t)v8617)(v8616, v8614);

	i8 v8618 = (i8)(intptr_t)(ws+3160);
	i8 v8619 = *(i8*)(intptr_t)v8618;
	i8 v8620 = v8619+(+44);
	i8 v8621 = (i8)(intptr_t)(f436_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v8621)(v8620);

	i8 v8622 = (i8)(intptr_t)(f227_ArchEndInstruction);

	((void(*)(void))(intptr_t)v8622)();

	i8 v8623 = (i8)(intptr_t)(ws+3160);
	i8 v8624 = *(i8*)(intptr_t)v8623;
	i8 v8625 = v8624+(+16);
	i8 v8626 = *(i8*)(intptr_t)v8625;
	i8 v8627 = v8626+(+58);
	i1 v8628 = *(i1*)(intptr_t)v8627;
	i1 v8629 = (i1)+22;
	if (v8628==v8629) goto c02_0619; else goto c02_061a;

c02_0619:;

	i8 v8630 = (i8)(intptr_t)(ws+3160);
	i8 v8631 = *(i8*)(intptr_t)v8630;
	i8 v8632 = v8631+(+16);
	i8 v8633 = *(i8*)(intptr_t)v8632;
	i8 v8634 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v8634)(v8633);

	goto c02_0616;

c02_061a:;

c02_0616:;

	i8 v8635 = (i8)(intptr_t)(ws+3160);
	i8 v8636 = *(i8*)(intptr_t)v8635;
	i8 v8637 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v8637)(v8636);

	goto c02_060f;

c02_0610:;

endsub:;
}
	void f447_EmitAndFreeInstructions(void);
	void f228_ArchEndGroup(void);
	void f56_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3088 length ws+72
void f438_ReallyGenerate(i8 p7601 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3088) = p7601; /*rootnode */

	i8 v7602 = (i8)+0;
	i8 v7603 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v7603 = v7602;

	i8 v7604 = (i8)+0;
	i8 v7605 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7605 = v7604;

	i8 v7606 = (i8)(intptr_t)(ws+216);
	i8 v7607 = *(i8*)(intptr_t)v7606;
	i8 v7608 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v7608 = v7607;

	i8 v7609 = (i8)(intptr_t)(ws+3088);
	i8 v7610 = *(i8*)(intptr_t)v7609;
	i8 v7611 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7611)(v7610);

c02_0548:;

	i8 v7612 = (i8)(intptr_t)(ws+216);
	i8 v7613 = *(i8*)(intptr_t)v7612;
	i8 v7614 = (i8)(intptr_t)(ws+3120);
	i8 v7615 = *(i8*)(intptr_t)v7614;
	if (v7613==v7615) goto c02_054b; else goto c02_054a;

c02_054a:;

	i8 v7616 = (i8)+63;
	i8 v7617 = (i8)(intptr_t)(f31_Alloc);
	i8 v7618;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7617)(&v7618, v7616);
	i8 v7619 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v7619 = v7618;

	i8 v7620 = (i8)(intptr_t)(ws+3104);
	i8 v7621 = *(i8*)(intptr_t)v7620;
	i8 v7622 = (i8)+0;
	if (v7621==v7622) goto c02_054f; else goto c02_0550;

c02_054f:;

	i8 v7623 = (i8)(intptr_t)(ws+3128);
	i8 v7624 = *(i8*)(intptr_t)v7623;
	i8 v7625 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v7625 = v7624;

	i8 v7626 = (i8)(intptr_t)(ws+3128);
	i8 v7627 = *(i8*)(intptr_t)v7626;
	i8 v7628 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7628 = v7627;

	goto c02_054c;

c02_0550:;

	i8 v7629 = (i8)(intptr_t)(ws+3128);
	i8 v7630 = *(i8*)(intptr_t)v7629;
	i8 v7631 = (i8)(intptr_t)(ws+3112);
	i8 v7632 = *(i8*)(intptr_t)v7631;
	*(i8*)(intptr_t)v7632 = v7630;

	i8 v7633 = (i8)(intptr_t)(ws+3112);
	i8 v7634 = *(i8*)(intptr_t)v7633;
	i8 v7635 = (i8)(intptr_t)(ws+3128);
	i8 v7636 = *(i8*)(intptr_t)v7635;
	i8 v7637 = v7636+(+8);
	*(i8*)(intptr_t)v7637 = v7634;

	i8 v7638 = (i8)(intptr_t)(ws+3128);
	i8 v7639 = *(i8*)(intptr_t)v7638;
	i8 v7640 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7640 = v7639;

c02_054c:;

	i8 v7641 = (i8)(intptr_t)(f54_PopNode);
	i8 v7642;

	((void(*)(i8* /* node */))(intptr_t)v7641)(&v7642);
	i8 v7643 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v7643 = v7642;


	i8 v8009 = (i8)(intptr_t)(f439_InstructionMatcher);

	((void(*)(void))(intptr_t)v8009)();

	i8 v8010 = (i8)(intptr_t)(ws+3128);
	i8 v8011 = *(i8*)(intptr_t)v8010;
	i8 v8012 = v8011+(+40);
	i1 v8013 = *(i1*)(intptr_t)v8012;
	i1 v8014 = (i1)+0;
	if (v8013==v8014) goto c02_05c7; else goto c02_05c6;

c02_05c6:;


	i8 v8519 = (i8)(intptr_t)(f444_AllocateRegister);

	((void(*)(void))(intptr_t)v8519)();


	i8 v8595 = (i8)(intptr_t)(f446_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v8595)();

	goto c02_05c3;

c02_05c7:;

c02_05c3:;

	goto c02_0548;

c02_054b:;


	i8 v8638 = (i8)(intptr_t)(f447_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v8638)();

	i8 v8639 = (i8)(intptr_t)(f228_ArchEndGroup);

	((void(*)(void))(intptr_t)v8639)();

	i8 v8640 = (i8)(intptr_t)(ws+3088);
	i8 v8641 = *(i8*)(intptr_t)v8640;
	i8 v8642 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8642)(v8641);

endsub:;
}
	void f56_Discard(i8 /* node */);
	void f96_MidAsmgroupstart(i8* /* m */);
	void f438_ReallyGenerate(i8 /* rootnode */);
	void f120_MidAsmgroupend(i8* /* m */);
	void f438_ReallyGenerate(i8 /* rootnode */);
	void f438_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3072 length ws+9
void f448_Generate(i8 p8645 /* statement */) {
	*(i8*)(intptr_t)(ws+3072) = p8645; /*statement */

	i8 v8646 = (i8)(intptr_t)(ws+3072);
	i8 v8647 = *(i8*)(intptr_t)v8646;
	i8 v8648 = v8647+(+58);
	i1 v8649 = *(i1*)(intptr_t)v8648;
	i8 v8650 = (i8)(intptr_t)(ws+3080);
	*(i1*)(intptr_t)v8650 = v8649;

	i8 v8651 = (i8)(intptr_t)(ws+1219);
	i1 v8652 = *(i1*)(intptr_t)v8651;
	i1 v8653 = (i1)+25;
	if (v8652==v8653) goto c02_0620; else goto c02_0622;

c02_0622:;

	i8 v8654 = (i8)(intptr_t)(ws+1219);
	i1 v8655 = *(i1*)(intptr_t)v8654;
	i1 v8656 = (i1)+26;
	if (v8655==v8656) goto c02_0620; else goto c02_0621;

c02_0620:;

	i8 v8657 = (i8)(intptr_t)(ws+3080);
	i1 v8658 = *(i1*)(intptr_t)v8657;
	i1 v8659 = (i1)+24;
	if (v8658==v8659) goto c02_0629; else goto c02_062a;

c02_062a:;

	i8 v8660 = (i8)(intptr_t)(ws+3080);
	i1 v8661 = *(i1*)(intptr_t)v8660;
	i1 v8662 = (i1)+5;
	if (v8661==v8662) goto c02_0629; else goto c02_0628;

c02_0628:;

	i8 v8663 = (i8)(intptr_t)(ws+3072);
	i8 v8664 = *(i8*)(intptr_t)v8663;
	i8 v8665 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8665)(v8664);

	goto endsub;

c02_0629:;

c02_0623:;

	goto c02_061b;

c02_0621:;

c02_061b:;

	i8 v8666 = (i8)(intptr_t)(ws+3080);
	i1 v8667 = *(i1*)(intptr_t)v8666;
	i1 v8668 = (i1)+17;
	if (v8667==v8668) goto c02_0632; else goto c02_0631;

c02_0632:;

	i8 v8669 = (i8)(intptr_t)(ws+1219);
	i1 v8670 = *(i1*)(intptr_t)v8669;
	i1 v8671 = (i1)+21;
	if (v8670==v8671) goto c02_0631; else goto c02_0630;

c02_0630:;

	i8 v8672 = (i8)(intptr_t)(f96_MidAsmgroupstart);
	i8 v8673;

	((void(*)(i8* /* m */))(intptr_t)v8672)(&v8673);
	i8 v8674 = (i8)(intptr_t)(f438_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8674)(v8673);

	goto c02_062b;

c02_0631:;

c02_062b:;

	i8 v8675 = (i8)(intptr_t)(ws+1219);
	i1 v8676 = *(i1*)(intptr_t)v8675;
	i1 v8677 = (i1)+21;
	if (v8676==v8677) goto c02_063a; else goto c02_0639;

c02_063a:;

	i8 v8678 = (i8)(intptr_t)(ws+3080);
	i1 v8679 = *(i1*)(intptr_t)v8678;
	i1 v8680 = (i1)+17;
	if (v8679==v8680) goto c02_0639; else goto c02_0638;

c02_0638:;

	i8 v8681 = (i8)(intptr_t)(f120_MidAsmgroupend);
	i8 v8682;

	((void(*)(i8* /* m */))(intptr_t)v8681)(&v8682);
	i8 v8683 = (i8)(intptr_t)(f438_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8683)(v8682);

	goto c02_0633;

c02_0639:;

c02_0633:;

	i8 v8684 = (i8)(intptr_t)(ws+3080);
	i1 v8685 = *(i1*)(intptr_t)v8684;
	i8 v8686 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v8686 = v8685;

	i8 v8687 = (i8)(intptr_t)(ws+3072);
	i8 v8688 = *(i8*)(intptr_t)v8687;
	i8 v8689 = (i8)(intptr_t)(f438_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8689)(v8688);

endsub:;
}
	void f53_PushNode(i8 /* node */);
	void f54_PopNode(i8* /* node */);
	void f53_PushNode(i8 /* node */);
	void f53_PushNode(i8 /* node */);
	void f56_Discard(i8 /* node */);

// push_and_free workspace at ws+3072 length ws+0
void f450_push_and_free(void) {

	i8 v8733 = (i8)(intptr_t)(ws+3040);
	i2 v8734 = *(i2*)(intptr_t)v8733;
	i8 v8735 = (i8)(intptr_t)(ws+3056);
	i8 v8736 = *(i8*)(intptr_t)v8735;
	*(i2*)(intptr_t)v8736 = v8734;

	i8 v8737 = (i8)(intptr_t)(ws+3042);
	i2 v8738 = *(i2*)(intptr_t)v8737;
	i8 v8739 = (i8)(intptr_t)(ws+3056);
	i8 v8740 = *(i8*)(intptr_t)v8739;
	i8 v8741 = v8740+(+2);
	*(i2*)(intptr_t)v8741 = v8738;

	i8 v8742 = (i8)(intptr_t)(ws+3044);
	i2 v8743 = *(i2*)(intptr_t)v8742;
	i8 v8744 = (i8)(intptr_t)(ws+3056);
	i8 v8745 = *(i8*)(intptr_t)v8744;
	i8 v8746 = v8745+(+4);
	*(i2*)(intptr_t)v8746 = v8743;

	i8 v8747 = (i8)+0;
	i8 v8748 = (i8)(intptr_t)(ws+3032);
	i8 v8749 = *(i8*)(intptr_t)v8748;
	i8 v8750 = v8749+(+24);
	*(i8*)(intptr_t)v8750 = v8747;

	i8 v8751 = (i8)+0;
	i8 v8752 = (i8)(intptr_t)(ws+3032);
	i8 v8753 = *(i8*)(intptr_t)v8752;
	i8 v8754 = v8753+(+32);
	*(i8*)(intptr_t)v8754 = v8751;

	i8 v8755 = (i8)(intptr_t)(ws+3056);
	i8 v8756 = *(i8*)(intptr_t)v8755;
	i8 v8757 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8757)(v8756);

	i8 v8758 = (i8)(intptr_t)(ws+3048);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	i8 v8760 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8760)(v8759);

	i8 v8761 = (i8)(intptr_t)(ws+3032);
	i8 v8762 = *(i8*)(intptr_t)v8761;
	i8 v8763 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8763)(v8762);

endsub:;
}
	void f214_AllocLabel(i2* /* label */);
	void f450_push_and_free(void);
	void f214_AllocLabel(i2* /* label */);
	void f450_push_and_free(void);
	void f448_Generate(i8 /* statement */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3016 length ws+52
void f449_GenerateConditional(i8 p8690 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3016) = p8690; /*rootnode */

	i8 v8691 = (i8)(intptr_t)(ws+216);
	i8 v8692 = *(i8*)(intptr_t)v8691;
	i8 v8693 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8693 = v8692;

	i8 v8694 = (i8)(intptr_t)(ws+3016);
	i8 v8695 = *(i8*)(intptr_t)v8694;
	i8 v8696 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8696)(v8695);

c02_063d:;

	i8 v8697 = (i8)(intptr_t)(ws+216);
	i8 v8698 = *(i8*)(intptr_t)v8697;
	i8 v8699 = (i8)(intptr_t)(ws+3024);
	i8 v8700 = *(i8*)(intptr_t)v8699;
	if (v8698==v8700) goto c02_0640; else goto c02_063f;

c02_063f:;

	i8 v8701 = (i8)(intptr_t)(f54_PopNode);
	i8 v8702;

	((void(*)(i8* /* node */))(intptr_t)v8701)(&v8702);
	i8 v8703 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8703 = v8702;

	i8 v8704 = (i8)(intptr_t)(ws+3032);
	i8 v8705 = *(i8*)(intptr_t)v8704;
	i2 v8706 = *(i2*)(intptr_t)v8705;
	i8 v8707 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v8707 = v8706;

	i8 v8708 = (i8)(intptr_t)(ws+3032);
	i8 v8709 = *(i8*)(intptr_t)v8708;
	i8 v8710 = v8709+(+2);
	i2 v8711 = *(i2*)(intptr_t)v8710;
	i8 v8712 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v8712 = v8711;

	i8 v8713 = (i8)(intptr_t)(ws+3032);
	i8 v8714 = *(i8*)(intptr_t)v8713;
	i8 v8715 = v8714+(+4);
	i2 v8716 = *(i2*)(intptr_t)v8715;
	i8 v8717 = (i8)(intptr_t)(ws+3044);
	*(i2*)(intptr_t)v8717 = v8716;

	i8 v8718 = (i8)(intptr_t)(ws+3032);
	i8 v8719 = *(i8*)(intptr_t)v8718;
	i8 v8720 = v8719+(+24);
	i8 v8721 = *(i8*)(intptr_t)v8720;
	i8 v8722 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8722 = v8721;

	i8 v8723 = (i8)(intptr_t)(ws+3032);
	i8 v8724 = *(i8*)(intptr_t)v8723;
	i8 v8725 = v8724+(+32);
	i8 v8726 = *(i8*)(intptr_t)v8725;
	i8 v8727 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8727 = v8726;

	i8 v8728 = (i8)(intptr_t)(ws+3032);
	i8 v8729 = *(i8*)(intptr_t)v8728;
	i8 v8730 = v8729+(+58);
	i1 v8731 = *(i1*)(intptr_t)v8730;
	i8 v8732 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v8732 = v8731;


	i8 v8764 = (i8)(intptr_t)(ws+3064);
	i1 v8765 = *(i1*)(intptr_t)v8764;

	if (v8765 != +57) goto c02_0642;

	i8 v8766 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v8767;

	((void(*)(i2* /* label */))(intptr_t)v8766)(&v8767);
	i8 v8768 = (i8)(intptr_t)(ws+3066);
	*(i2*)(intptr_t)v8768 = v8767;

	i8 v8769 = (i8)(intptr_t)(ws+3040);
	i2 v8770 = *(i2*)(intptr_t)v8769;
	i8 v8771 = (i8)(intptr_t)(ws+3048);
	i8 v8772 = *(i8*)(intptr_t)v8771;
	*(i2*)(intptr_t)v8772 = v8770;

	i8 v8773 = (i8)(intptr_t)(ws+3066);
	i2 v8774 = *(i2*)(intptr_t)v8773;
	i8 v8775 = (i8)(intptr_t)(ws+3048);
	i8 v8776 = *(i8*)(intptr_t)v8775;
	i8 v8777 = v8776+(+2);
	*(i2*)(intptr_t)v8777 = v8774;

	i8 v8778 = (i8)(intptr_t)(ws+3066);
	i2 v8779 = *(i2*)(intptr_t)v8778;
	i8 v8780 = (i8)(intptr_t)(ws+3048);
	i8 v8781 = *(i8*)(intptr_t)v8780;
	i8 v8782 = v8781+(+4);
	*(i2*)(intptr_t)v8782 = v8779;

	i8 v8783 = (i8)(intptr_t)(f450_push_and_free);

	((void(*)(void))(intptr_t)v8783)();

	goto c02_0641;

c02_0642:;

	if (v8765 != +56) goto c02_0643;

	i8 v8784 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v8785;

	((void(*)(i2* /* label */))(intptr_t)v8784)(&v8785);
	i8 v8786 = (i8)(intptr_t)(ws+3066);
	*(i2*)(intptr_t)v8786 = v8785;

	i8 v8787 = (i8)(intptr_t)(ws+3066);
	i2 v8788 = *(i2*)(intptr_t)v8787;
	i8 v8789 = (i8)(intptr_t)(ws+3048);
	i8 v8790 = *(i8*)(intptr_t)v8789;
	*(i2*)(intptr_t)v8790 = v8788;

	i8 v8791 = (i8)(intptr_t)(ws+3042);
	i2 v8792 = *(i2*)(intptr_t)v8791;
	i8 v8793 = (i8)(intptr_t)(ws+3048);
	i8 v8794 = *(i8*)(intptr_t)v8793;
	i8 v8795 = v8794+(+2);
	*(i2*)(intptr_t)v8795 = v8792;

	i8 v8796 = (i8)(intptr_t)(ws+3066);
	i2 v8797 = *(i2*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(ws+3048);
	i8 v8799 = *(i8*)(intptr_t)v8798;
	i8 v8800 = v8799+(+4);
	*(i2*)(intptr_t)v8800 = v8797;

	i8 v8801 = (i8)(intptr_t)(f450_push_and_free);

	((void(*)(void))(intptr_t)v8801)();

	goto c02_0641;

c02_0643:;

	i8 v8802 = (i8)(intptr_t)(ws+3064);
	i1 v8803 = *(i1*)(intptr_t)v8802;
	i1 v8804 = (i1)+58;
	if (v8803<v8804) goto c02_064a; else goto c02_064b;

c02_064b:;

	i1 v8805 = (i1)+72;
	i8 v8806 = (i8)(intptr_t)(ws+3064);
	i1 v8807 = *(i1*)(intptr_t)v8806;
	if (v8805<v8807) goto c02_064a; else goto c02_0649;

c02_0649:;

	i8 v8808 = (i8)(intptr_t)(ws+3032);
	i8 v8809 = *(i8*)(intptr_t)v8808;
	i8 v8810 = v8809+(+6);
	i1 v8811 = *(i1*)(intptr_t)v8810;
	i1 v8812 = (i1)+0;
	if (v8811==v8812) goto c02_0650; else goto c02_064f;

c02_064f:;

	i8 v8813 = (i8)(intptr_t)(ws+3042);
	i2 v8814 = *(i2*)(intptr_t)v8813;
	i8 v8815 = (i8)(intptr_t)(ws+3032);
	i8 v8816 = *(i8*)(intptr_t)v8815;
	*(i2*)(intptr_t)v8816 = v8814;

	i8 v8817 = (i8)(intptr_t)(ws+3040);
	i2 v8818 = *(i2*)(intptr_t)v8817;
	i8 v8819 = (i8)(intptr_t)(ws+3032);
	i8 v8820 = *(i8*)(intptr_t)v8819;
	i8 v8821 = v8820+(+2);
	*(i2*)(intptr_t)v8821 = v8818;

	i1 v8822 = (i1)+0;
	i8 v8823 = (i8)(intptr_t)(ws+3032);
	i8 v8824 = *(i8*)(intptr_t)v8823;
	i8 v8825 = v8824+(+6);
	*(i1*)(intptr_t)v8825 = v8822;

	goto c02_064c;

c02_0650:;

c02_064c:;

	goto c02_0644;

c02_064a:;

c02_0644:;

	i8 v8826 = (i8)(intptr_t)(ws+3032);
	i8 v8827 = *(i8*)(intptr_t)v8826;
	i8 v8828 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8828)(v8827);

	i8 v8829 = (i8)(intptr_t)(ws+3044);
	i2 v8830 = *(i2*)(intptr_t)v8829;
	i8 v8831 = (i8)(intptr_t)(f142_MidLabel);
	i8 v8832;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8831)(&v8832, v8830);
	i8 v8833 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8833)(v8832);

c02_0641:;


	goto c02_063d;

c02_0640:;

endsub:;
}
	void f201_CheckNotPartialType(i8 /* type */);
	void f222_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3016 length ws+24
void f451_InitVariable(i8 p8834 /* type */, i8 p8835 /* symbol */, i8 p8836 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p8836; /*subr */
	*(i8*)(intptr_t)(ws+3024) = p8835; /*symbol */
	*(i8*)(intptr_t)(ws+3032) = p8834; /*type */

	i8 v8837 = (i8)(intptr_t)(ws+3032);
	i8 v8838 = *(i8*)(intptr_t)v8837;
	i8 v8839 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8839)(v8838);

	i8 v8840 = (i8)(intptr_t)(ws+3032);
	i8 v8841 = *(i8*)(intptr_t)v8840;
	i8 v8842 = (i8)(intptr_t)(ws+3024);
	i8 v8843 = *(i8*)(intptr_t)v8842;
	*(i8*)(intptr_t)v8843 = v8841;

	i8 v8844 = (i8)(intptr_t)(ws+3016);
	i8 v8845 = *(i8*)(intptr_t)v8844;
	i8 v8846 = (i8)(intptr_t)(ws+3024);
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = v8847+(+8);
	*(i8*)(intptr_t)v8848 = v8845;

	i8 v8849 = (i8)(intptr_t)(ws+3024);
	i8 v8850 = *(i8*)(intptr_t)v8849;
	i8 v8851 = (i8)(intptr_t)(f222_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v8851)(v8850);

endsub:;
}
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f57_StrDupBraced(i8* /* news */, i8 /* s */);

// MakePointerType workspace at ws+3056 length ws+16
void f452_MakePointerType(i8* p8852 /* ptrtype */, i8 p8853 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p8853; /*type */

	i8 v8854 = (i8)(intptr_t)(ws+3056);
	i8 v8855 = *(i8*)(intptr_t)v8854;
	i8 v8856 = v8855+(+32);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	i8 v8858 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v8858 = v8857;

	i8 v8859 = (i8)(intptr_t)(ws+3064);
	i8 v8860 = *(i8*)(intptr_t)v8859;
	i8 v8861 = (i8)+0;
	if (v8860==v8861) goto c02_0654; else goto c02_0655;

c02_0654:;

	i8 v8862 = (i8)+0;
	i8 v8863 = (i8)+0;
	i8 v8864 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v8865;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8864)(&v8865, v8863, v8862);
	i8 v8866 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v8866 = v8865;

	i8 v8867 = (i8)(intptr_t)(ws+3056);
	i8 v8868 = *(i8*)(intptr_t)v8867;
	i8 v8869 = v8868+(+48);
	i8 v8870 = *(i8*)(intptr_t)v8869;
	i8 v8871 = (i8)(intptr_t)(f57_StrDupBraced);
	i8 v8872;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v8871)(&v8872, v8870);
	i8 v8873 = (i8)(intptr_t)(ws+3064);
	i8 v8874 = *(i8*)(intptr_t)v8873;
	i8 v8875 = v8874+(+48);
	*(i8*)(intptr_t)v8875 = v8872;

	i1 v8876 = (i1)+30;
	i8 v8877 = (i8)(intptr_t)(ws+3064);
	i8 v8878 = *(i8*)(intptr_t)v8877;
	i8 v8879 = v8878+(+46);
	*(i1*)(intptr_t)v8879 = v8876;

	i1 v8880 = (i1)+3;
	i8 v8881 = (i8)(intptr_t)(ws+3064);
	i8 v8882 = *(i8*)(intptr_t)v8881;
	i8 v8883 = v8882+(+40);
	*(i1*)(intptr_t)v8883 = v8880;

	i8 v8884 = (i8)(intptr_t)(ws+1056);
	i8 v8885 = *(i8*)(intptr_t)v8884;
	i8 v8886 = v8885+(+42);
	i2 v8887 = *(i2*)(intptr_t)v8886;
	i8 v8888 = (i8)(intptr_t)(ws+3064);
	i8 v8889 = *(i8*)(intptr_t)v8888;
	i8 v8890 = v8889+(+42);
	*(i2*)(intptr_t)v8890 = v8887;

	i8 v8891 = (i8)(intptr_t)(ws+1056);
	i8 v8892 = *(i8*)(intptr_t)v8891;
	i8 v8893 = v8892+(+41);
	i1 v8894 = *(i1*)(intptr_t)v8893;
	i8 v8895 = (i8)(intptr_t)(ws+3064);
	i8 v8896 = *(i8*)(intptr_t)v8895;
	i8 v8897 = v8896+(+41);
	*(i1*)(intptr_t)v8897 = v8894;

	i8 v8898 = (i8)(intptr_t)(ws+1056);
	i8 v8899 = *(i8*)(intptr_t)v8898;
	i8 v8900 = v8899+(+44);
	i2 v8901 = *(i2*)(intptr_t)v8900;
	i8 v8902 = (i8)(intptr_t)(ws+3064);
	i8 v8903 = *(i8*)(intptr_t)v8902;
	i8 v8904 = v8903+(+44);
	*(i2*)(intptr_t)v8904 = v8901;

	i8 v8905 = (i8)(intptr_t)(ws+3056);
	i8 v8906 = *(i8*)(intptr_t)v8905;
	i8 v8907 = (i8)(intptr_t)(ws+3064);
	i8 v8908 = *(i8*)(intptr_t)v8907;
	*(i8*)(intptr_t)v8908 = v8906;

	i8 v8909 = (i8)(intptr_t)(ws+3064);
	i8 v8910 = *(i8*)(intptr_t)v8909;
	i8 v8911 = (i8)(intptr_t)(ws+3056);
	i8 v8912 = *(i8*)(intptr_t)v8911;
	i8 v8913 = v8912+(+32);
	*(i8*)(intptr_t)v8913 = v8910;

	goto c02_0651;

c02_0655:;

c02_0651:;

endsub:;
	*p8852 = *(i8*)(intptr_t)(ws+3064);
}
	void f201_CheckNotPartialType(i8 /* type */);
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f58_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f221_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);

// MakeArrayType workspace at ws+3008 length ws+26
void f453_MakeArrayType(i8* p8914 /* arraytype */, i2 p8915 /* size */, i8 p8916 /* type */) {
	*(i8*)(intptr_t)(ws+3008) = p8916; /*type */
	*(i2*)(intptr_t)(ws+3016) = p8915; /*size */

	i8 v8917 = (i8)(intptr_t)(ws+3008);
	i8 v8918 = *(i8*)(intptr_t)v8917;
	i8 v8919 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8919)(v8918);

	i8 v8920 = (i8)+0;
	i8 v8921 = (i8)+0;
	i8 v8922 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v8923;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8922)(&v8923, v8921, v8920);
	i8 v8924 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8924 = v8923;

	i8 v8925 = (i8)(intptr_t)(ws+3008);
	i8 v8926 = *(i8*)(intptr_t)v8925;
	i8 v8927 = v8926+(+48);
	i8 v8928 = *(i8*)(intptr_t)v8927;
	i8 v8929 = (i8)(intptr_t)(ws+3016);
	i2 v8930 = *(i2*)(intptr_t)v8929;
	i8 v8931 = (i8)(intptr_t)(f58_StrDupArrayed);
	i8 v8932;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v8931)(&v8932, v8930, v8928);
	i8 v8933 = (i8)(intptr_t)(ws+3024);
	i8 v8934 = *(i8*)(intptr_t)v8933;
	i8 v8935 = v8934+(+48);
	*(i8*)(intptr_t)v8935 = v8932;

	i1 v8936 = (i1)+30;
	i8 v8937 = (i8)(intptr_t)(ws+3024);
	i8 v8938 = *(i8*)(intptr_t)v8937;
	i8 v8939 = v8938+(+46);
	*(i1*)(intptr_t)v8939 = v8936;

	i1 v8940 = (i1)+4;
	i8 v8941 = (i8)(intptr_t)(ws+3024);
	i8 v8942 = *(i8*)(intptr_t)v8941;
	i8 v8943 = v8942+(+40);
	*(i1*)(intptr_t)v8943 = v8940;

	i2 v8944 = (i2)+0;
	i8 v8945 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v8945 = v8944;

	i2 v8946 = (i2)+0;
	i8 v8947 = (i8)(intptr_t)(ws+3016);
	i2 v8948 = *(i2*)(intptr_t)v8947;
	if (v8946<v8948) goto c02_0659; else goto c02_065a;

c02_0659:;

	i8 v8949 = (i8)(intptr_t)(ws+3008);
	i8 v8950 = *(i8*)(intptr_t)v8949;
	i8 v8951 = v8950+(+44);
	i2 v8952 = *(i2*)(intptr_t)v8951;
	i8 v8953 = (i8)(intptr_t)(ws+3016);
	i2 v8954 = *(i2*)(intptr_t)v8953;
	i2 v8955 = v8954+(-1);
	i2 v8956 = v8952*v8955;
	i8 v8957 = (i8)(intptr_t)(ws+3008);
	i8 v8958 = *(i8*)(intptr_t)v8957;
	i8 v8959 = v8958+(+42);
	i2 v8960 = *(i2*)(intptr_t)v8959;
	i2 v8961 = v8956+v8960;
	i8 v8962 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v8962 = v8961;

	goto c02_0656;

c02_065a:;

c02_0656:;

	i8 v8963 = (i8)(intptr_t)(ws+3032);
	i2 v8964 = *(i2*)(intptr_t)v8963;
	i8 v8965 = (i8)(intptr_t)(ws+3024);
	i8 v8966 = *(i8*)(intptr_t)v8965;
	i8 v8967 = v8966+(+42);
	*(i2*)(intptr_t)v8967 = v8964;

	i8 v8968 = (i8)(intptr_t)(ws+3008);
	i8 v8969 = *(i8*)(intptr_t)v8968;
	i8 v8970 = v8969+(+41);
	i1 v8971 = *(i1*)(intptr_t)v8970;
	i8 v8972 = (i8)(intptr_t)(ws+3024);
	i8 v8973 = *(i8*)(intptr_t)v8972;
	i8 v8974 = v8973+(+41);
	*(i1*)(intptr_t)v8974 = v8971;

	i8 v8975 = (i8)(intptr_t)(ws+3008);
	i8 v8976 = *(i8*)(intptr_t)v8975;
	i8 v8977 = v8976+(+44);
	i2 v8978 = *(i2*)(intptr_t)v8977;
	i8 v8979 = (i8)(intptr_t)(ws+3016);
	i2 v8980 = *(i2*)(intptr_t)v8979;
	i2 v8981 = v8978*v8980;
	i8 v8982 = (i8)(intptr_t)(ws+3024);
	i8 v8983 = *(i8*)(intptr_t)v8982;
	i8 v8984 = v8983+(+44);
	*(i2*)(intptr_t)v8984 = v8981;

	i8 v8985 = (i8)(intptr_t)(ws+3008);
	i8 v8986 = *(i8*)(intptr_t)v8985;
	i8 v8987 = (i8)(intptr_t)(ws+3024);
	i8 v8988 = *(i8*)(intptr_t)v8987;
	*(i8*)(intptr_t)v8988 = v8986;

	i8 v8989 = (i8)(intptr_t)(ws+3016);
	i2 v8990 = *(i2*)(intptr_t)v8989;
	i8 v8991 = (i8)(intptr_t)(ws+3024);
	i8 v8992 = *(i8*)(intptr_t)v8991;
	i8 v8993 = v8992+(+8);
	*(i2*)(intptr_t)v8993 = v8990;

	i4 v8994 = (i4)+0;
	i8 v8995 = (i8)(intptr_t)(ws+3016);
	i2 v8996 = *(i2*)(intptr_t)v8995;
	i2 v8997 = v8996+(-1);
	i4 v8998 = v8997;
	i8 v8999 = (i8)(intptr_t)(f221_ArchGuessIntType);
	i8 v9000;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v8999)(&v9000, v8998, v8994);
	i8 v9001 = (i8)(intptr_t)(ws+3024);
	i8 v9002 = *(i8*)(intptr_t)v9001;
	i8 v9003 = v9002+(+16);
	*(i8*)(intptr_t)v9003 = v9000;

endsub:;
	*p8914 = *(i8*)(intptr_t)(ws+3024);
}
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// MakeSubroutineType workspace at ws+3008 length ws+16
void f454_MakeSubroutineType(i8* p9004 /* type */, i8 p9005 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p9005; /*subr */

	i8 v9006 = (i8)(intptr_t)(ws+3008);
	i8 v9007 = *(i8*)(intptr_t)v9006;
	i8 v9008 = v9007+(+56);
	i8 v9009 = *(i8*)(intptr_t)v9008;
	i8 v9010 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9010 = v9009;

	i8 v9011 = (i8)(intptr_t)(ws+3016);
	i8 v9012 = *(i8*)(intptr_t)v9011;
	i8 v9013 = (i8)+0;
	if (v9012==v9013) goto c02_065e; else goto c02_065f;

c02_065e:;

	i8 v9014 = (i8)+0;
	i8 v9015 = (i8)+0;
	i8 v9016 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v9017;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9016)(&v9017, v9015, v9014);
	i8 v9018 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9018 = v9017;

	i8 v9019 = (i8)(intptr_t)(ws+3008);
	i8 v9020 = *(i8*)(intptr_t)v9019;
	i8 v9021 = *(i8*)(intptr_t)v9020;
	i8 v9022 = (i8)(intptr_t)(ws+3016);
	i8 v9023 = *(i8*)(intptr_t)v9022;
	i8 v9024 = v9023+(+48);
	*(i8*)(intptr_t)v9024 = v9021;

	i1 v9025 = (i1)+30;
	i8 v9026 = (i8)(intptr_t)(ws+3016);
	i8 v9027 = *(i8*)(intptr_t)v9026;
	i8 v9028 = v9027+(+46);
	*(i1*)(intptr_t)v9028 = v9025;

	i1 v9029 = (i1)+6;
	i8 v9030 = (i8)(intptr_t)(ws+3016);
	i8 v9031 = *(i8*)(intptr_t)v9030;
	i8 v9032 = v9031+(+40);
	*(i1*)(intptr_t)v9032 = v9029;

	i8 v9033 = (i8)(intptr_t)(ws+1056);
	i8 v9034 = *(i8*)(intptr_t)v9033;
	i8 v9035 = v9034+(+42);
	i2 v9036 = *(i2*)(intptr_t)v9035;
	i8 v9037 = (i8)(intptr_t)(ws+3016);
	i8 v9038 = *(i8*)(intptr_t)v9037;
	i8 v9039 = v9038+(+42);
	*(i2*)(intptr_t)v9039 = v9036;

	i8 v9040 = (i8)(intptr_t)(ws+1056);
	i8 v9041 = *(i8*)(intptr_t)v9040;
	i8 v9042 = v9041+(+41);
	i1 v9043 = *(i1*)(intptr_t)v9042;
	i8 v9044 = (i8)(intptr_t)(ws+3016);
	i8 v9045 = *(i8*)(intptr_t)v9044;
	i8 v9046 = v9045+(+41);
	*(i1*)(intptr_t)v9046 = v9043;

	i8 v9047 = (i8)(intptr_t)(ws+1056);
	i8 v9048 = *(i8*)(intptr_t)v9047;
	i8 v9049 = v9048+(+44);
	i2 v9050 = *(i2*)(intptr_t)v9049;
	i8 v9051 = (i8)(intptr_t)(ws+3016);
	i8 v9052 = *(i8*)(intptr_t)v9051;
	i8 v9053 = v9052+(+44);
	*(i2*)(intptr_t)v9053 = v9050;

	i8 v9054 = (i8)(intptr_t)(ws+3008);
	i8 v9055 = *(i8*)(intptr_t)v9054;
	i8 v9056 = (i8)(intptr_t)(ws+3016);
	i8 v9057 = *(i8*)(intptr_t)v9056;
	*(i8*)(intptr_t)v9057 = v9055;

	i8 v9058 = (i8)(intptr_t)(ws+3016);
	i8 v9059 = *(i8*)(intptr_t)v9058;
	i8 v9060 = (i8)(intptr_t)(ws+3008);
	i8 v9061 = *(i8*)(intptr_t)v9060;
	i8 v9062 = v9061+(+56);
	*(i8*)(intptr_t)v9062 = v9059;

	goto c02_065b;

c02_065f:;

c02_065b:;

endsub:;
	*p9004 = *(i8*)(intptr_t)(ws+3016);
}
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// DestructSymbol workspace at ws+3072 length ws+24
void f456_DestructSymbol(i8 p9064 /* symbol */) {
	*(i8*)(intptr_t)(ws+3072) = p9064; /*symbol */

	i8 v9065 = (i8)(intptr_t)(ws+3072);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = v9066+(+46);
	i1 v9068 = *(i1*)(intptr_t)v9067;
	i1 v9069 = (i1)+30;
	if (v9068==v9069) goto c02_0663; else goto c02_0664;

c02_0663:;

	i8 v9070 = (i8)(intptr_t)(ws+3072);
	i8 v9071 = *(i8*)(intptr_t)v9070;
	i8 v9072 = v9071+(+32);
	i8 v9073 = *(i8*)(intptr_t)v9072;
	i8 v9074 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v9074 = v9073;

c02_0667:;

	i8 v9075 = (i8)(intptr_t)(ws+3080);
	i8 v9076 = *(i8*)(intptr_t)v9075;
	i8 v9077 = (i8)+0;
	if (v9076==v9077) goto c02_066a; else goto c02_0669;

c02_0669:;

	i8 v9078 = (i8)(intptr_t)(ws+3080);
	i8 v9079 = *(i8*)(intptr_t)v9078;
	i8 v9080 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v9080 = v9079;

	i8 v9081 = (i8)(intptr_t)(ws+3080);
	i8 v9082 = *(i8*)(intptr_t)v9081;
	i8 v9083 = v9082+(+32);
	i8 v9084 = *(i8*)(intptr_t)v9083;
	i8 v9085 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v9085 = v9084;

	i8 v9086 = (i8)(intptr_t)(ws+3088);
	i8 v9087 = *(i8*)(intptr_t)v9086;
	i8 v9088 = v9087+(+48);
	i8 v9089 = *(i8*)(intptr_t)v9088;
	i8 v9090 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9090)(v9089);

	i8 v9091 = (i8)(intptr_t)(ws+3088);
	i8 v9092 = *(i8*)(intptr_t)v9091;
	i8 v9093 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9093)(v9092);

	goto c02_0667;

c02_066a:;

	goto c02_0660;

c02_0664:;

c02_0660:;

	i8 v9094 = (i8)(intptr_t)(ws+3072);
	i8 v9095 = *(i8*)(intptr_t)v9094;
	i8 v9096 = v9095+(+48);
	i8 v9097 = *(i8*)(intptr_t)v9096;
	i8 v9098 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9098)(v9097);

	i8 v9099 = (i8)(intptr_t)(ws+3072);
	i8 v9100 = *(i8*)(intptr_t)v9099;
	i8 v9101 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9101)(v9100);

endsub:;
}
	void f456_DestructSymbol(i8 /* symbol */);
	void f32_Free(i8 /* block */);

// DestructSubroutine workspace at ws+3048 length ws+24
void f457_DestructSubroutine(i8 p9102 /* subr */) {
	*(i8*)(intptr_t)(ws+3048) = p9102; /*subr */

	i8 v9103 = (i8)(intptr_t)(ws+3048);
	i8 v9104 = *(i8*)(intptr_t)v9103;
	i8 v9105 = v9104+(+16);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	i8 v9107 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v9107 = v9106;

c02_066d:;

	i8 v9108 = (i8)(intptr_t)(ws+3056);
	i8 v9109 = *(i8*)(intptr_t)v9108;
	i8 v9110 = (i8)+0;
	if (v9109==v9110) goto c02_0670; else goto c02_066f;

c02_066f:;

	i8 v9111 = (i8)(intptr_t)(ws+3056);
	i8 v9112 = *(i8*)(intptr_t)v9111;
	i8 v9113 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v9113 = v9112;

	i8 v9114 = (i8)(intptr_t)(ws+3056);
	i8 v9115 = *(i8*)(intptr_t)v9114;
	i8 v9116 = v9115+(+56);
	i8 v9117 = *(i8*)(intptr_t)v9116;
	i8 v9118 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v9118 = v9117;

	i8 v9119 = (i8)(intptr_t)(ws+3064);
	i8 v9120 = *(i8*)(intptr_t)v9119;
	i8 v9121 = (i8)(intptr_t)(f456_DestructSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v9121)(v9120);

	goto c02_066d;

c02_0670:;

	i8 v9122 = (i8)(intptr_t)(ws+3048);
	i8 v9123 = *(i8*)(intptr_t)v9122;
	i8 v9124 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9124)(v9123);

endsub:;
}
	void f457_DestructSubroutine(i8 /* subr */);
	void f456_DestructSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3016 length ws+32
void f455_DestructSubroutineContents(i8 p9063 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p9063; /*subr */



	i8 v9125 = (i8)(intptr_t)(ws+3016);
	i8 v9126 = *(i8*)(intptr_t)v9125;
	i8 v9127 = v9126+(+48);
	i8 v9128 = *(i8*)(intptr_t)v9127;
	i8 v9129 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9129 = v9128;

	i8 v9130 = (i8)(intptr_t)(ws+3024);
	i8 v9131 = *(i8*)(intptr_t)v9130;
	i8 v9132 = (i8)+0;
	if (v9131==v9132) goto c02_0674; else goto c02_0675;

c02_0674:;

	i8 v9133 = (i8)(intptr_t)(ws+3016);
	i8 v9134 = *(i8*)(intptr_t)v9133;
	i8 v9135 = v9134+(+40);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9137 = v9136;

	goto c02_0671;

c02_0675:;

c02_0671:;

	i8 v9138 = (i8)(intptr_t)(ws+3024);
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = (i8)+0;
	if (v9139==v9140) goto c02_067a; else goto c02_0679;

c02_0679:;

c02_067b:;

	i8 v9141 = (i8)(intptr_t)(ws+3024);
	i8 v9142 = *(i8*)(intptr_t)v9141;
	i8 v9143 = v9142+(+16);
	i8 v9144 = *(i8*)(intptr_t)v9143;
	i8 v9145 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9145 = v9144;

	i8 v9146 = (i8)(intptr_t)(ws+3032);
	i8 v9147 = *(i8*)(intptr_t)v9146;
	i8 v9148 = (i8)+0;
	if (v9147==v9148) goto c02_0680; else goto c02_0681;

c02_0680:;

	goto c02_067c;

c02_0681:;

c02_067d:;

	i8 v9149 = (i8)(intptr_t)(ws+3032);
	i8 v9150 = *(i8*)(intptr_t)v9149;
	i8 v9151 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9151 = v9150;

	goto c02_067b;

c02_067c:;

	goto c02_0676;

c02_067a:;

c02_0676:;

	i8 v9152 = (i8)(intptr_t)(ws+3016);
	i8 v9153 = *(i8*)(intptr_t)v9152;
	i8 v9154 = v9153+(+16);
	i8 v9155 = *(i8*)(intptr_t)v9154;
	i8 v9156 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9156 = v9155;

	i8 v9157 = (i8)(intptr_t)(ws+3024);
	i8 v9158 = *(i8*)(intptr_t)v9157;
	i8 v9159 = (i8)+0;
	if (v9158==v9159) goto c02_0686; else goto c02_0685;

c02_0685:;

	i8 v9160 = (i8)(intptr_t)(ws+3024);
	i8 v9161 = *(i8*)(intptr_t)v9160;
	i8 v9162 = v9161+(+56);
	i8 v9163 = *(i8*)(intptr_t)v9162;
	i8 v9164 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9164 = v9163;

	goto c02_0682;

c02_0686:;

c02_0682:;

c02_0689:;

	i8 v9165 = (i8)(intptr_t)(ws+3040);
	i8 v9166 = *(i8*)(intptr_t)v9165;
	i8 v9167 = (i8)+0;
	if (v9166==v9167) goto c02_068c; else goto c02_068b;

c02_068b:;

	i8 v9168 = (i8)(intptr_t)(ws+3040);
	i8 v9169 = *(i8*)(intptr_t)v9168;
	i8 v9170 = v9169+(+56);
	i8 v9171 = *(i8*)(intptr_t)v9170;
	i8 v9172 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9172 = v9171;

	i8 v9173 = (i8)(intptr_t)(ws+3040);
	i8 v9174 = *(i8*)(intptr_t)v9173;
	i8 v9175 = v9174+(+46);
	i1 v9176 = *(i1*)(intptr_t)v9175;
	i1 v9177 = (i1)+25;
	if (v9176==v9177) goto c02_0690; else goto c02_0691;

c02_0690:;

	i8 v9178 = (i8)(intptr_t)(ws+3040);
	i8 v9179 = *(i8*)(intptr_t)v9178;
	i8 v9180 = *(i8*)(intptr_t)v9179;
	i8 v9181 = (i8)(intptr_t)(f457_DestructSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v9181)(v9180);

	goto c02_068d;

c02_0691:;

c02_068d:;

	i8 v9182 = (i8)(intptr_t)(ws+3040);
	i8 v9183 = *(i8*)(intptr_t)v9182;
	i8 v9184 = (i8)(intptr_t)(f456_DestructSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v9184)(v9183);

	i8 v9185 = (i8)(intptr_t)(ws+3032);
	i8 v9186 = *(i8*)(intptr_t)v9185;
	i8 v9187 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9187 = v9186;

	goto c02_0689;

c02_068c:;

	i8 v9188 = (i8)(intptr_t)(ws+3024);
	i8 v9189 = *(i8*)(intptr_t)v9188;
	i8 v9190 = (i8)+0;
	if (v9189==v9190) goto c02_0696; else goto c02_0695;

c02_0695:;

	i8 v9191 = (i8)+0;
	i8 v9192 = (i8)(intptr_t)(ws+3024);
	i8 v9193 = *(i8*)(intptr_t)v9192;
	i8 v9194 = v9193+(+56);
	*(i8*)(intptr_t)v9194 = v9191;

	goto c02_0692;

c02_0696:;

	i8 v9195 = (i8)+0;
	i8 v9196 = (i8)(intptr_t)(ws+3016);
	i8 v9197 = *(i8*)(intptr_t)v9196;
	i8 v9198 = v9197+(+16);
	*(i8*)(intptr_t)v9198 = v9195;

c02_0692:;

	i8 v9199 = (i8)(intptr_t)(ws+3024);
	i8 v9200 = *(i8*)(intptr_t)v9199;
	i8 v9201 = (i8)(intptr_t)(ws+3016);
	i8 v9202 = *(i8*)(intptr_t)v9201;
	i8 v9203 = v9202+(+24);
	*(i8*)(intptr_t)v9203 = v9200;

endsub:;
}
	void f33_StrDup(i8* /* sout */, i8 /* s */);
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// CopyParameterList workspace at ws+3016 length ws+40
void f458_CopyParameterList(i8* p9204 /* newparam */, i8 p9205 /* subr */, i8 p9206 /* param */) {
	*(i8*)(intptr_t)(ws+3016) = p9206; /*param */
	*(i8*)(intptr_t)(ws+3024) = p9205; /*subr */

	i8 v9207 = (i8)+0;
	i8 v9208 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9208 = v9207;

	i8 v9209 = (i8)+0;
	i8 v9210 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9210 = v9209;

c02_0699:;

	i8 v9211 = (i8)(intptr_t)(ws+3016);
	i8 v9212 = *(i8*)(intptr_t)v9211;
	i8 v9213 = (i8)+0;
	if (v9212==v9213) goto c02_069c; else goto c02_069b;

c02_069b:;

	i8 v9214 = (i8)(intptr_t)(ws+3024);
	i8 v9215 = *(i8*)(intptr_t)v9214;
	i8 v9216 = v9215+(+16);
	i8 v9217 = (i8)(intptr_t)(ws+3016);
	i8 v9218 = *(i8*)(intptr_t)v9217;
	i8 v9219 = v9218+(+48);
	i8 v9220 = *(i8*)(intptr_t)v9219;
	i8 v9221 = (i8)(intptr_t)(f33_StrDup);
	i8 v9222;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v9221)(&v9222, v9220);
	i8 v9223 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v9224;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9223)(&v9224, v9222, v9216);
	i8 v9225 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9225 = v9224;

	i1 v9226 = (i1)+28;
	i8 v9227 = (i8)(intptr_t)(ws+3048);
	i8 v9228 = *(i8*)(intptr_t)v9227;
	i8 v9229 = v9228+(+46);
	*(i1*)(intptr_t)v9229 = v9226;

	i8 v9230 = (i8)(intptr_t)(ws+3016);
	i8 v9231 = *(i8*)(intptr_t)v9230;
	i8 v9232 = *(i8*)(intptr_t)v9231;
	i8 v9233 = (i8)(intptr_t)(ws+3048);
	i8 v9234 = *(i8*)(intptr_t)v9233;
	*(i8*)(intptr_t)v9234 = v9232;

	i8 v9235 = (i8)(intptr_t)(ws+3016);
	i8 v9236 = *(i8*)(intptr_t)v9235;
	i8 v9237 = v9236+(+8);
	i8 v9238 = *(i8*)(intptr_t)v9237;
	i8 v9239 = (i8)(intptr_t)(ws+3048);
	i8 v9240 = *(i8*)(intptr_t)v9239;
	i8 v9241 = v9240+(+8);
	*(i8*)(intptr_t)v9241 = v9238;

	i8 v9242 = (i8)(intptr_t)(ws+3016);
	i8 v9243 = *(i8*)(intptr_t)v9242;
	i8 v9244 = v9243+(+32);
	i2 v9245 = *(i2*)(intptr_t)v9244;
	i8 v9246 = (i8)(intptr_t)(ws+3048);
	i8 v9247 = *(i8*)(intptr_t)v9246;
	i8 v9248 = v9247+(+32);
	*(i2*)(intptr_t)v9248 = v9245;

	i8 v9249 = (i8)(intptr_t)(ws+3040);
	i8 v9250 = *(i8*)(intptr_t)v9249;
	i8 v9251 = (i8)+0;
	if (v9250==v9251) goto c02_06a1; else goto c02_06a0;

c02_06a0:;

	i8 v9252 = (i8)(intptr_t)(ws+3048);
	i8 v9253 = *(i8*)(intptr_t)v9252;
	i8 v9254 = (i8)(intptr_t)(ws+3040);
	i8 v9255 = *(i8*)(intptr_t)v9254;
	i8 v9256 = v9255+(+16);
	*(i8*)(intptr_t)v9256 = v9253;

	goto c02_069d;

c02_06a1:;

c02_069d:;

	i8 v9257 = (i8)(intptr_t)(ws+3048);
	i8 v9258 = *(i8*)(intptr_t)v9257;
	i8 v9259 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9259 = v9258;

	i8 v9260 = (i8)(intptr_t)(ws+3032);
	i8 v9261 = *(i8*)(intptr_t)v9260;
	i8 v9262 = (i8)+0;
	if (v9261==v9262) goto c02_06a5; else goto c02_06a6;

c02_06a5:;

	i8 v9263 = (i8)(intptr_t)(ws+3048);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9265 = v9264;

	goto c02_06a2;

c02_06a6:;

c02_06a2:;

	i8 v9266 = (i8)(intptr_t)(ws+3016);
	i8 v9267 = *(i8*)(intptr_t)v9266;
	i8 v9268 = v9267+(+16);
	i8 v9269 = *(i8*)(intptr_t)v9268;
	i8 v9270 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9270 = v9269;

	goto c02_0699;

c02_069c:;

endsub:;
	*p9204 = *(i8*)(intptr_t)(ws+3032);
}
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0174[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0175[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// expr_i_cant_do_that workspace at ws+3104 length ws+16
void f459_expr_i_cant_do_that(i8 p9271 /* rhs */, i8 p9272 /* lhs */) {
	*(i8*)(intptr_t)(ws+3104) = p9272; /*lhs */
	*(i8*)(intptr_t)(ws+3112) = p9271; /*rhs */

	i8 v9273 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v9273)();

	i8 v9274 = (i8)(intptr_t)(ws+3104);
	i8 v9275 = *(i8*)(intptr_t)v9274;
	i8 v9276 = v9275+(+16);
	i8 v9277 = *(i8*)(intptr_t)v9276;
	i8 v9278 = v9277+(+48);
	i8 v9279 = *(i8*)(intptr_t)v9278;
	i8 v9280 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9280)(v9279);

	i8 v9281 = (i8)(intptr_t)c02_s0174;
	i8 v9282 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9282)(v9281);

	i8 v9283 = (i8)(intptr_t)(ws+3112);
	i8 v9284 = *(i8*)(intptr_t)v9283;
	i8 v9285 = v9284+(+16);
	i8 v9286 = *(i8*)(intptr_t)v9285;
	i8 v9287 = v9286+(+48);
	i8 v9288 = *(i8*)(intptr_t)v9287;
	i8 v9289 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9289)(v9288);

	i8 v9290 = (i8)(intptr_t)c02_s0175;
	i8 v9291 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9291)(v9290);

	i8 v9292 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v9292)();

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0176[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0177[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0178[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f209_IsScalar(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0179[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// CheckExpressionType workspace at ws+3072 length ws+16
void f460_CheckExpressionType(i8 p9293 /* type */, i8 p9294 /* node */) {
	*(i8*)(intptr_t)(ws+3072) = p9294; /*node */
	*(i8*)(intptr_t)(ws+3080) = p9293; /*type */

	i8 v9295 = (i8)(intptr_t)(ws+3072);
	i8 v9296 = *(i8*)(intptr_t)v9295;
	i8 v9297 = v9296+(+16);
	i8 v9298 = *(i8*)(intptr_t)v9297;
	i8 v9299 = (i8)+0;
	if (v9298==v9299) goto c02_06aa; else goto c02_06ab;

c02_06aa:;

	i8 v9300 = (i8)(intptr_t)(ws+3080);
	i8 v9301 = *(i8*)(intptr_t)v9300;
	i8 v9302 = (i8)(intptr_t)(ws+3072);
	i8 v9303 = *(i8*)(intptr_t)v9302;
	i8 v9304 = v9303+(+16);
	*(i8*)(intptr_t)v9304 = v9301;

	goto c02_06a7;

c02_06ab:;

c02_06a7:;

	i8 v9305 = (i8)(intptr_t)(ws+3072);
	i8 v9306 = *(i8*)(intptr_t)v9305;
	i8 v9307 = v9306+(+16);
	i8 v9308 = *(i8*)(intptr_t)v9307;
	i8 v9309 = (i8)(intptr_t)(ws+3080);
	i8 v9310 = *(i8*)(intptr_t)v9309;
	if (v9308==v9310) goto c02_06b0; else goto c02_06af;

c02_06af:;

	i8 v9311 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v9311)();

	i8 v9312 = (i8)(intptr_t)c02_s0176;
	i8 v9313 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9313)(v9312);

	i8 v9314 = (i8)(intptr_t)(ws+3072);
	i8 v9315 = *(i8*)(intptr_t)v9314;
	i8 v9316 = v9315+(+16);
	i8 v9317 = *(i8*)(intptr_t)v9316;
	i8 v9318 = v9317+(+48);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	i8 v9320 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9320)(v9319);

	i8 v9321 = (i8)(intptr_t)c02_s0177;
	i8 v9322 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9322)(v9321);

	i8 v9323 = (i8)(intptr_t)(ws+3080);
	i8 v9324 = *(i8*)(intptr_t)v9323;
	i8 v9325 = v9324+(+48);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9327)(v9326);

	i8 v9328 = (i8)(intptr_t)c02_s0178;
	i8 v9329 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9329)(v9328);

	i8 v9330 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v9330)();

	goto c02_06ac;

c02_06b0:;

c02_06ac:;

	i8 v9331 = (i8)(intptr_t)(ws+3080);
	i8 v9332 = *(i8*)(intptr_t)v9331;
	i8 v9333 = (i8)(intptr_t)(f209_IsScalar);
	i1 v9334;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9333)(&v9334, v9332);
	i1 v9335 = (i1)+0;
	if (v9334==v9335) goto c02_06b4; else goto c02_06b5;

c02_06b4:;

	i8 v9336 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v9336)();

	i8 v9337 = (i8)(intptr_t)(ws+3080);
	i8 v9338 = *(i8*)(intptr_t)v9337;
	i8 v9339 = v9338+(+48);
	i8 v9340 = *(i8*)(intptr_t)v9339;
	i8 v9341 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9341)(v9340);

	i8 v9342 = (i8)(intptr_t)c02_s0179;
	i8 v9343 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9343)(v9342);

	i8 v9344 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v9344)();

	goto c02_06b1;

c02_06b5:;

c02_06b1:;

endsub:;
}
	void f207_IsNum(i1* /* result */, i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s017a[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f61_SimpleError(i8 /* message */);
	void f207_IsNum(i1* /* result */, i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s017b[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f61_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3048 length ws+16
void f461_ResolveUntypedConstantsForAddOrSub(i8 p9345 /* rhs */, i8 p9346 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p9346; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p9345; /*rhs */

	i8 v9347 = (i8)(intptr_t)(ws+3048);
	i8 v9348 = *(i8*)(intptr_t)v9347;
	i8 v9349 = v9348+(+16);
	i8 v9350 = *(i8*)(intptr_t)v9349;
	i8 v9351 = (i8)+0;
	if (v9350==v9351) goto c02_06bc; else goto c02_06bd;

c02_06bd:;

	i8 v9352 = (i8)(intptr_t)(ws+3056);
	i8 v9353 = *(i8*)(intptr_t)v9352;
	i8 v9354 = v9353+(+16);
	i8 v9355 = *(i8*)(intptr_t)v9354;
	i8 v9356 = (i8)+0;
	if (v9355==v9356) goto c02_06bb; else goto c02_06bc;

c02_06bb:;

	i8 v9357 = (i8)(intptr_t)(ws+3048);
	i8 v9358 = *(i8*)(intptr_t)v9357;
	i8 v9359 = v9358+(+16);
	i8 v9360 = *(i8*)(intptr_t)v9359;
	i8 v9361 = (i8)(intptr_t)(f207_IsNum);
	i1 v9362;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9361)(&v9362, v9360);
	i1 v9363 = (i1)+0;
	if (v9362==v9363) goto c02_06c2; else goto c02_06c1;

c02_06c1:;

	i8 v9364 = (i8)(intptr_t)(ws+3048);
	i8 v9365 = *(i8*)(intptr_t)v9364;
	i8 v9366 = v9365+(+16);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	i8 v9368 = (i8)(intptr_t)(ws+3056);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	i8 v9370 = v9369+(+16);
	*(i8*)(intptr_t)v9370 = v9367;

	goto c02_06be;

c02_06c2:;

	i8 v9371 = (i8)(intptr_t)(ws+3048);
	i8 v9372 = *(i8*)(intptr_t)v9371;
	i8 v9373 = v9372+(+16);
	i8 v9374 = *(i8*)(intptr_t)v9373;
	i8 v9375 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9376;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9375)(&v9376, v9374);
	i1 v9377 = (i1)+0;
	if (v9376==v9377) goto c02_06c6; else goto c02_06c5;

c02_06c5:;

	i8 v9378 = (i8)(intptr_t)(ws+1056);
	i8 v9379 = *(i8*)(intptr_t)v9378;
	i8 v9380 = (i8)(intptr_t)(ws+3056);
	i8 v9381 = *(i8*)(intptr_t)v9380;
	i8 v9382 = v9381+(+16);
	*(i8*)(intptr_t)v9382 = v9379;

	goto c02_06be;

c02_06c6:;

	i8 v9383 = (i8)(intptr_t)c02_s017a;
	i8 v9384 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9384)(v9383);

c02_06be:;

	goto c02_06b6;

c02_06bc:;

c02_06b6:;

	i8 v9385 = (i8)(intptr_t)(ws+3048);
	i8 v9386 = *(i8*)(intptr_t)v9385;
	i8 v9387 = v9386+(+16);
	i8 v9388 = *(i8*)(intptr_t)v9387;
	i8 v9389 = (i8)+0;
	if (v9388==v9389) goto c02_06ce; else goto c02_06cd;

c02_06ce:;

	i8 v9390 = (i8)(intptr_t)(ws+3056);
	i8 v9391 = *(i8*)(intptr_t)v9390;
	i8 v9392 = v9391+(+16);
	i8 v9393 = *(i8*)(intptr_t)v9392;
	i8 v9394 = (i8)+0;
	if (v9393==v9394) goto c02_06cd; else goto c02_06cc;

c02_06cc:;

	i8 v9395 = (i8)(intptr_t)(ws+3056);
	i8 v9396 = *(i8*)(intptr_t)v9395;
	i8 v9397 = v9396+(+16);
	i8 v9398 = *(i8*)(intptr_t)v9397;
	i8 v9399 = (i8)(intptr_t)(f207_IsNum);
	i1 v9400;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9399)(&v9400, v9398);
	i1 v9401 = (i1)+0;
	if (v9400==v9401) goto c02_06d3; else goto c02_06d2;

c02_06d2:;

	i8 v9402 = (i8)(intptr_t)(ws+3056);
	i8 v9403 = *(i8*)(intptr_t)v9402;
	i8 v9404 = v9403+(+16);
	i8 v9405 = *(i8*)(intptr_t)v9404;
	i8 v9406 = (i8)(intptr_t)(ws+3048);
	i8 v9407 = *(i8*)(intptr_t)v9406;
	i8 v9408 = v9407+(+16);
	*(i8*)(intptr_t)v9408 = v9405;

	goto c02_06cf;

c02_06d3:;

	i8 v9409 = (i8)(intptr_t)(ws+3056);
	i8 v9410 = *(i8*)(intptr_t)v9409;
	i8 v9411 = v9410+(+16);
	i8 v9412 = *(i8*)(intptr_t)v9411;
	i8 v9413 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9414;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9413)(&v9414, v9412);
	i1 v9415 = (i1)+0;
	if (v9414==v9415) goto c02_06d7; else goto c02_06d6;

c02_06d6:;

	i8 v9416 = (i8)(intptr_t)c02_s017b;
	i8 v9417 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9417)(v9416);

	goto c02_06cf;

c02_06d7:;

c02_06cf:;

	goto c02_06c7;

c02_06cd:;

c02_06c7:;

endsub:;
}
	void f459_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3072 length ws+32
void f462_ResolveUntypedConstantsSimply(i8 p9418 /* rhs */, i8 p9419 /* lhs */) {
	*(i8*)(intptr_t)(ws+3072) = p9419; /*lhs */
	*(i8*)(intptr_t)(ws+3080) = p9418; /*rhs */

	i8 v9420 = (i8)(intptr_t)(ws+3072);
	i8 v9421 = *(i8*)(intptr_t)v9420;
	i8 v9422 = v9421+(+16);
	i8 v9423 = *(i8*)(intptr_t)v9422;
	i8 v9424 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v9424 = v9423;

	i8 v9425 = (i8)(intptr_t)(ws+3080);
	i8 v9426 = *(i8*)(intptr_t)v9425;
	i8 v9427 = v9426+(+16);
	i8 v9428 = *(i8*)(intptr_t)v9427;
	i8 v9429 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v9429 = v9428;

	i8 v9430 = (i8)(intptr_t)(ws+3088);
	i8 v9431 = *(i8*)(intptr_t)v9430;
	i8 v9432 = (i8)+0;
	if (v9431==v9432) goto c02_06de; else goto c02_06df;

c02_06df:;

	i8 v9433 = (i8)(intptr_t)(ws+3096);
	i8 v9434 = *(i8*)(intptr_t)v9433;
	i8 v9435 = (i8)+0;
	if (v9434==v9435) goto c02_06dd; else goto c02_06de;

c02_06dd:;

	i8 v9436 = (i8)(intptr_t)(ws+3088);
	i8 v9437 = *(i8*)(intptr_t)v9436;
	i8 v9438 = (i8)(intptr_t)(ws+3080);
	i8 v9439 = *(i8*)(intptr_t)v9438;
	i8 v9440 = v9439+(+16);
	*(i8*)(intptr_t)v9440 = v9437;

	goto c02_06d8;

c02_06de:;

	i8 v9441 = (i8)(intptr_t)(ws+3088);
	i8 v9442 = *(i8*)(intptr_t)v9441;
	i8 v9443 = (i8)+0;
	if (v9442==v9443) goto c02_06e6; else goto c02_06e5;

c02_06e6:;

	i8 v9444 = (i8)(intptr_t)(ws+3096);
	i8 v9445 = *(i8*)(intptr_t)v9444;
	i8 v9446 = (i8)+0;
	if (v9445==v9446) goto c02_06e5; else goto c02_06e4;

c02_06e4:;

	i8 v9447 = (i8)(intptr_t)(ws+3096);
	i8 v9448 = *(i8*)(intptr_t)v9447;
	i8 v9449 = (i8)(intptr_t)(ws+3072);
	i8 v9450 = *(i8*)(intptr_t)v9449;
	i8 v9451 = v9450+(+16);
	*(i8*)(intptr_t)v9451 = v9448;

	goto c02_06d8;

c02_06e5:;

	i8 v9452 = (i8)(intptr_t)(ws+3088);
	i8 v9453 = *(i8*)(intptr_t)v9452;
	i8 v9454 = (i8)(intptr_t)(ws+3096);
	i8 v9455 = *(i8*)(intptr_t)v9454;
	if (v9453==v9455) goto c02_06ea; else goto c02_06e9;

c02_06e9:;

	i8 v9456 = (i8)(intptr_t)(ws+3072);
	i8 v9457 = *(i8*)(intptr_t)v9456;
	i8 v9458 = (i8)(intptr_t)(ws+3080);
	i8 v9459 = *(i8*)(intptr_t)v9458;
	i8 v9460 = (i8)(intptr_t)(f459_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9460)(v9459, v9457);

	goto c02_06d8;

c02_06ea:;

c02_06d8:;

endsub:;
}
	void f207_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s017c[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3072 length ws+8
void f463_CheckNumber(i8 p9461 /* node */) {
	*(i8*)(intptr_t)(ws+3072) = p9461; /*node */

	i8 v9462 = (i8)(intptr_t)(ws+3072);
	i8 v9463 = *(i8*)(intptr_t)v9462;
	i8 v9464 = v9463+(+16);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = (i8)(intptr_t)(f207_IsNum);
	i1 v9467;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9466)(&v9467, v9465);
	i1 v9468 = (i1)+0;
	if (v9467==v9468) goto c02_06ee; else goto c02_06ef;

c02_06ee:;

	i8 v9469 = (i8)(intptr_t)c02_s017c;
	i8 v9470 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9470)(v9469);

	goto c02_06eb;

c02_06ef:;

c02_06eb:;

endsub:;
}
	void f462_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f463_CheckNumber(i8 /* node */);
	void f463_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3056 length ws+16
void f464_ResolveUntypedConstantsNeedingNumbers(i8 p9471 /* rhs */, i8 p9472 /* lhs */) {
	*(i8*)(intptr_t)(ws+3056) = p9472; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p9471; /*rhs */

	i8 v9473 = (i8)(intptr_t)(ws+3056);
	i8 v9474 = *(i8*)(intptr_t)v9473;
	i8 v9475 = (i8)(intptr_t)(ws+3064);
	i8 v9476 = *(i8*)(intptr_t)v9475;
	i8 v9477 = (i8)(intptr_t)(f462_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9477)(v9476, v9474);

	i8 v9478 = (i8)(intptr_t)(ws+3056);
	i8 v9479 = *(i8*)(intptr_t)v9478;
	i8 v9480 = (i8)(intptr_t)(f463_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v9480)(v9479);

	i8 v9481 = (i8)(intptr_t)(ws+3064);
	i8 v9482 = *(i8*)(intptr_t)v9481;
	i8 v9483 = (i8)(intptr_t)(f463_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v9483)(v9482);

endsub:;
}
	void f462_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f459_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3048 length ws+16
void f465_CondSimple(i8 p9484 /* rhs */, i8 p9485 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p9485; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p9484; /*rhs */

	i8 v9486 = (i8)(intptr_t)(ws+3048);
	i8 v9487 = *(i8*)(intptr_t)v9486;
	i8 v9488 = (i8)(intptr_t)(ws+3056);
	i8 v9489 = *(i8*)(intptr_t)v9488;
	i8 v9490 = (i8)(intptr_t)(f462_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9490)(v9489, v9487);

	i8 v9491 = (i8)(intptr_t)(ws+3048);
	i8 v9492 = *(i8*)(intptr_t)v9491;
	i8 v9493 = v9492+(+16);
	i8 v9494 = *(i8*)(intptr_t)v9493;
	i8 v9495 = (i8)(intptr_t)(ws+3056);
	i8 v9496 = *(i8*)(intptr_t)v9495;
	i8 v9497 = v9496+(+16);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	if (v9494==v9498) goto c02_06f4; else goto c02_06f3;

c02_06f3:;

	i8 v9499 = (i8)(intptr_t)(ws+3048);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = (i8)(intptr_t)(ws+3056);
	i8 v9502 = *(i8*)(intptr_t)v9501;
	i8 v9503 = (i8)(intptr_t)(f459_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9503)(v9502, v9500);

	goto c02_06f0;

c02_06f4:;

c02_06f0:;

endsub:;
}
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f151_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3008 length ws+24
void f466_Expr1Simple(i8* p9504 /* result */, i8 p9505 /* lhs */, i1 p9506 /* op */) {
	*(i1*)(intptr_t)(ws+3008) = p9506; /*op */
	*(i8*)(intptr_t)(ws+3016) = p9505; /*lhs */

	i8 v9507 = (i8)(intptr_t)(ws+3008);
	i1 v9508 = *(i1*)(intptr_t)v9507;
	i8 v9509 = (i8)(intptr_t)(ws+3016);
	i8 v9510 = *(i8*)(intptr_t)v9509;
	i8 v9511 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v9512;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9511)(&v9512, v9510);
	i8 v9513 = (i8)(intptr_t)(ws+3016);
	i8 v9514 = *(i8*)(intptr_t)v9513;
	i8 v9515 = (i8)(intptr_t)(f151_MidC1Op);
	i8 v9516;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9515)(&v9516, v9514, v9512, v9508);
	i8 v9517 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9517 = v9516;

	i8 v9518 = (i8)(intptr_t)(ws+3016);
	i8 v9519 = *(i8*)(intptr_t)v9518;
	i8 v9520 = v9519+(+16);
	i8 v9521 = *(i8*)(intptr_t)v9520;
	i8 v9522 = (i8)(intptr_t)(ws+3024);
	i8 v9523 = *(i8*)(intptr_t)v9522;
	i8 v9524 = v9523+(+16);
	*(i8*)(intptr_t)v9524 = v9521;

endsub:;
	*p9504 = *(i8*)(intptr_t)(ws+3024);
}
	void f461_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f459_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3048 length ws+0
void f468_cant_add_that(void) {

	i8 v9533 = (i8)(intptr_t)(ws+3008);
	i8 v9534 = *(i8*)(intptr_t)v9533;
	i8 v9535 = (i8)(intptr_t)(ws+3016);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	i8 v9537 = (i8)(intptr_t)(f459_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9537)(v9536, v9534);

endsub:;
}
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f468_cant_add_that(void);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f468_cant_add_that(void);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f468_cant_add_that(void);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3008 length ws+40
void f467_ExprAdd(i8* p9525 /* result */, i8 p9526 /* rhs */, i8 p9527 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p9527; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p9526; /*rhs */

	i8 v9528 = (i8)(intptr_t)(ws+3008);
	i8 v9529 = *(i8*)(intptr_t)v9528;
	i8 v9530 = (i8)(intptr_t)(ws+3016);
	i8 v9531 = *(i8*)(intptr_t)v9530;
	i8 v9532 = (i8)(intptr_t)(f461_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9532)(v9531, v9529);


	i8 v9538 = (i8)(intptr_t)(ws+3008);
	i8 v9539 = *(i8*)(intptr_t)v9538;
	i8 v9540 = v9539+(+16);
	i8 v9541 = *(i8*)(intptr_t)v9540;
	i8 v9542 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9542 = v9541;

	i8 v9543 = (i8)(intptr_t)(ws+3016);
	i8 v9544 = *(i8*)(intptr_t)v9543;
	i8 v9545 = v9544+(+16);
	i8 v9546 = *(i8*)(intptr_t)v9545;
	i8 v9547 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9547 = v9546;

	i8 v9548 = (i8)(intptr_t)(ws+3032);
	i8 v9549 = *(i8*)(intptr_t)v9548;
	i8 v9550 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9551;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9550)(&v9551, v9549);
	i1 v9552 = (i1)+0;
	if (v9551==v9552) goto c02_06f9; else goto c02_06f8;

c02_06f8:;

	i8 v9553 = (i8)(intptr_t)(ws+3040);
	i8 v9554 = *(i8*)(intptr_t)v9553;
	i8 v9555 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9556;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9555)(&v9556, v9554);
	i1 v9557 = (i1)+0;
	if (v9556==v9557) goto c02_0701; else goto c02_06ff;

c02_0701:;

	i8 v9558 = (i8)(intptr_t)(ws+3040);
	i8 v9559 = *(i8*)(intptr_t)v9558;
	i8 v9560 = (i8)(intptr_t)(ws+1056);
	i8 v9561 = *(i8*)(intptr_t)v9560;
	if (v9559==v9561) goto c02_0700; else goto c02_06ff;

c02_06ff:;

	i8 v9562 = (i8)(intptr_t)(f468_cant_add_that);

	((void(*)(void))(intptr_t)v9562)();

	goto c02_06fa;

c02_0700:;

c02_06fa:;

	goto c02_06f5;

c02_06f9:;

	i8 v9563 = (i8)(intptr_t)(ws+3040);
	i8 v9564 = *(i8*)(intptr_t)v9563;
	i8 v9565 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9566;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9565)(&v9566, v9564);
	i1 v9567 = (i1)+0;
	if (v9566==v9567) goto c02_0705; else goto c02_0704;

c02_0704:;

	i8 v9568 = (i8)(intptr_t)(f468_cant_add_that);

	((void(*)(void))(intptr_t)v9568)();

	goto c02_06f5;

c02_0705:;

	i8 v9569 = (i8)(intptr_t)(ws+3032);
	i8 v9570 = *(i8*)(intptr_t)v9569;
	i8 v9571 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9572;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9571)(&v9572, v9570);
	i1 v9573 = (i1)+0;
	if (v9572==v9573) goto c02_070c; else goto c02_070b;

c02_070c:;

	i8 v9574 = (i8)(intptr_t)(ws+3032);
	i8 v9575 = *(i8*)(intptr_t)v9574;
	i8 v9576 = (i8)(intptr_t)(ws+3040);
	i8 v9577 = *(i8*)(intptr_t)v9576;
	if (v9575==v9577) goto c02_070b; else goto c02_070a;

c02_070a:;

	i8 v9578 = (i8)(intptr_t)(f468_cant_add_that);

	((void(*)(void))(intptr_t)v9578)();

	goto c02_06f5;

c02_070b:;

c02_06f5:;

	i1 v9579 = (i1)+158;
	i8 v9580 = (i8)(intptr_t)(ws+3008);
	i8 v9581 = *(i8*)(intptr_t)v9580;
	i8 v9582 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v9583;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9582)(&v9583, v9581);
	i8 v9584 = (i8)(intptr_t)(ws+3008);
	i8 v9585 = *(i8*)(intptr_t)v9584;
	i8 v9586 = (i8)(intptr_t)(ws+3016);
	i8 v9587 = *(i8*)(intptr_t)v9586;
	i8 v9588 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v9589;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9588)(&v9589, v9587, v9585, v9583, v9579);
	i8 v9590 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9590 = v9589;

	i8 v9591 = (i8)(intptr_t)(ws+3032);
	i8 v9592 = *(i8*)(intptr_t)v9591;
	i8 v9593 = (i8)(intptr_t)(ws+3024);
	i8 v9594 = *(i8*)(intptr_t)v9593;
	i8 v9595 = v9594+(+16);
	*(i8*)(intptr_t)v9595 = v9592;

endsub:;
	*p9525 = *(i8*)(intptr_t)(ws+3024);
}
	void f461_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f459_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3048 length ws+0
void f470_cant_sub_that(void) {

	i8 v9604 = (i8)(intptr_t)(ws+3008);
	i8 v9605 = *(i8*)(intptr_t)v9604;
	i8 v9606 = (i8)(intptr_t)(ws+3016);
	i8 v9607 = *(i8*)(intptr_t)v9606;
	i8 v9608 = (i8)(intptr_t)(f459_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9608)(v9607, v9605);

endsub:;
}
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f470_cant_sub_that(void);
	void f207_IsNum(i1* /* result */, i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f470_cant_sub_that(void);
	void f207_IsNum(i1* /* result */, i8 /* type */);
	void f207_IsNum(i1* /* result */, i8 /* type */);
	void f470_cant_sub_that(void);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3008 length ws+40
void f469_ExprSub(i8* p9596 /* result */, i8 p9597 /* rhs */, i8 p9598 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p9598; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p9597; /*rhs */

	i8 v9599 = (i8)(intptr_t)(ws+3008);
	i8 v9600 = *(i8*)(intptr_t)v9599;
	i8 v9601 = (i8)(intptr_t)(ws+3016);
	i8 v9602 = *(i8*)(intptr_t)v9601;
	i8 v9603 = (i8)(intptr_t)(f461_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9603)(v9602, v9600);


	i8 v9609 = (i8)(intptr_t)(ws+3008);
	i8 v9610 = *(i8*)(intptr_t)v9609;
	i8 v9611 = v9610+(+16);
	i8 v9612 = *(i8*)(intptr_t)v9611;
	i8 v9613 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9613 = v9612;

	i8 v9614 = (i8)(intptr_t)(ws+3016);
	i8 v9615 = *(i8*)(intptr_t)v9614;
	i8 v9616 = v9615+(+16);
	i8 v9617 = *(i8*)(intptr_t)v9616;
	i8 v9618 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9618 = v9617;

	i8 v9619 = (i8)(intptr_t)(ws+3032);
	i8 v9620 = *(i8*)(intptr_t)v9619;
	i8 v9621 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9622;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9621)(&v9622, v9620);
	i1 v9623 = (i1)+0;
	if (v9622==v9623) goto c02_0715; else goto c02_0717;

c02_0717:;

	i8 v9624 = (i8)(intptr_t)(ws+3040);
	i8 v9625 = *(i8*)(intptr_t)v9624;
	i8 v9626 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9627;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9626)(&v9627, v9625);
	i1 v9628 = (i1)+0;
	if (v9627==v9628) goto c02_0716; else goto c02_0715;

c02_0716:;

	i8 v9629 = (i8)(intptr_t)(ws+3040);
	i8 v9630 = *(i8*)(intptr_t)v9629;
	i8 v9631 = (i8)(intptr_t)(ws+1056);
	i8 v9632 = *(i8*)(intptr_t)v9631;
	if (v9630==v9632) goto c02_0715; else goto c02_0714;

c02_0714:;

	i8 v9633 = (i8)(intptr_t)(f470_cant_sub_that);

	((void(*)(void))(intptr_t)v9633)();

	goto c02_070d;

c02_0715:;

	i8 v9634 = (i8)(intptr_t)(ws+3032);
	i8 v9635 = *(i8*)(intptr_t)v9634;
	i8 v9636 = (i8)(intptr_t)(f207_IsNum);
	i1 v9637;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9636)(&v9637, v9635);
	i1 v9638 = (i1)+0;
	if (v9637==v9638) goto c02_071d; else goto c02_071e;

c02_071e:;

	i8 v9639 = (i8)(intptr_t)(ws+3040);
	i8 v9640 = *(i8*)(intptr_t)v9639;
	i8 v9641 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9642;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9641)(&v9642, v9640);
	i1 v9643 = (i1)+0;
	if (v9642==v9643) goto c02_071d; else goto c02_071c;

c02_071c:;

	i8 v9644 = (i8)(intptr_t)(f470_cant_sub_that);

	((void(*)(void))(intptr_t)v9644)();

	goto c02_070d;

c02_071d:;

	i8 v9645 = (i8)(intptr_t)(ws+3032);
	i8 v9646 = *(i8*)(intptr_t)v9645;
	i8 v9647 = (i8)(intptr_t)(f207_IsNum);
	i1 v9648;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9647)(&v9648, v9646);
	i1 v9649 = (i1)+0;
	if (v9648==v9649) goto c02_0726; else goto c02_0728;

c02_0728:;

	i8 v9650 = (i8)(intptr_t)(ws+3040);
	i8 v9651 = *(i8*)(intptr_t)v9650;
	i8 v9652 = (i8)(intptr_t)(f207_IsNum);
	i1 v9653;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9652)(&v9653, v9651);
	i1 v9654 = (i1)+0;
	if (v9653==v9654) goto c02_0726; else goto c02_0727;

c02_0727:;

	i8 v9655 = (i8)(intptr_t)(ws+3032);
	i8 v9656 = *(i8*)(intptr_t)v9655;
	i8 v9657 = (i8)(intptr_t)(ws+3040);
	i8 v9658 = *(i8*)(intptr_t)v9657;
	if (v9656==v9658) goto c02_0726; else goto c02_0725;

c02_0725:;

	i8 v9659 = (i8)(intptr_t)(f470_cant_sub_that);

	((void(*)(void))(intptr_t)v9659)();

	goto c02_070d;

c02_0726:;

c02_070d:;

	i1 v9660 = (i1)+133;
	i8 v9661 = (i8)(intptr_t)(ws+3008);
	i8 v9662 = *(i8*)(intptr_t)v9661;
	i8 v9663 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v9664;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9663)(&v9664, v9662);
	i8 v9665 = (i8)(intptr_t)(ws+3008);
	i8 v9666 = *(i8*)(intptr_t)v9665;
	i8 v9667 = (i8)(intptr_t)(ws+3016);
	i8 v9668 = *(i8*)(intptr_t)v9667;
	i8 v9669 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v9670;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9669)(&v9670, v9668, v9666, v9664, v9660);
	i8 v9671 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9671 = v9670;

	i8 v9672 = (i8)(intptr_t)(ws+3032);
	i8 v9673 = *(i8*)(intptr_t)v9672;
	i8 v9674 = (i8)(intptr_t)(f205_IsPtr);
	i1 v9675;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9674)(&v9675, v9673);
	i1 v9676 = (i1)+0;
	if (v9675==v9676) goto c02_072f; else goto c02_0730;

c02_0730:;

	i8 v9677 = (i8)(intptr_t)(ws+3032);
	i8 v9678 = *(i8*)(intptr_t)v9677;
	i8 v9679 = (i8)(intptr_t)(ws+3040);
	i8 v9680 = *(i8*)(intptr_t)v9679;
	if (v9678==v9680) goto c02_072e; else goto c02_072f;

c02_072e:;

	i8 v9681 = (i8)(intptr_t)(ws+1056);
	i8 v9682 = *(i8*)(intptr_t)v9681;
	i8 v9683 = (i8)(intptr_t)(ws+3024);
	i8 v9684 = *(i8*)(intptr_t)v9683;
	i8 v9685 = v9684+(+16);
	*(i8*)(intptr_t)v9685 = v9682;

	goto c02_0729;

c02_072f:;

	i8 v9686 = (i8)(intptr_t)(ws+3032);
	i8 v9687 = *(i8*)(intptr_t)v9686;
	i8 v9688 = (i8)(intptr_t)(ws+3024);
	i8 v9689 = *(i8*)(intptr_t)v9688;
	i8 v9690 = v9689+(+16);
	*(i8*)(intptr_t)v9690 = v9687;

c02_0729:;

endsub:;
	*p9596 = *(i8*)(intptr_t)(ws+3024);
}
	void f464_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f208_IsSNum(i1* /* result */, i8 /* type */);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3008 length ws+48
void f471_Expr2Simple(i8* p9691 /* result */, i8 p9692 /* rhs */, i8 p9693 /* lhs */, i1 p9694 /* uop */, i1 p9695 /* sop */) {
	*(i1*)(intptr_t)(ws+3008) = p9695; /*sop */
	*(i1*)(intptr_t)(ws+3009) = p9694; /*uop */
	*(i8*)(intptr_t)(ws+3016) = p9693; /*lhs */
	*(i8*)(intptr_t)(ws+3024) = p9692; /*rhs */

	i8 v9696 = (i8)(intptr_t)(ws+3016);
	i8 v9697 = *(i8*)(intptr_t)v9696;
	i8 v9698 = (i8)(intptr_t)(ws+3024);
	i8 v9699 = *(i8*)(intptr_t)v9698;
	i8 v9700 = (i8)(intptr_t)(f464_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9700)(v9699, v9697);

	i8 v9701 = (i8)(intptr_t)(ws+3009);
	i1 v9702 = *(i1*)(intptr_t)v9701;
	i8 v9703 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9703 = v9702;

	i8 v9704 = (i8)(intptr_t)(ws+3016);
	i8 v9705 = *(i8*)(intptr_t)v9704;
	i8 v9706 = v9705+(+16);
	i8 v9707 = *(i8*)(intptr_t)v9706;
	i8 v9708 = (i8)(intptr_t)(f208_IsSNum);
	i1 v9709;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9708)(&v9709, v9707);
	i1 v9710 = (i1)+0;
	if (v9709==v9710) goto c02_0735; else goto c02_0734;

c02_0734:;

	i8 v9711 = (i8)(intptr_t)(ws+3008);
	i1 v9712 = *(i1*)(intptr_t)v9711;
	i8 v9713 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9713 = v9712;

	goto c02_0731;

c02_0735:;

c02_0731:;

	i8 v9714 = (i8)(intptr_t)(ws+3016);
	i8 v9715 = *(i8*)(intptr_t)v9714;
	i8 v9716 = v9715+(+16);
	i8 v9717 = *(i8*)(intptr_t)v9716;
	i8 v9718 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9718 = v9717;

	i8 v9719 = (i8)(intptr_t)(ws+3040);
	i1 v9720 = *(i1*)(intptr_t)v9719;
	i8 v9721 = (i8)(intptr_t)(ws+3016);
	i8 v9722 = *(i8*)(intptr_t)v9721;
	i8 v9723 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v9724;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9723)(&v9724, v9722);
	i8 v9725 = (i8)(intptr_t)(ws+3016);
	i8 v9726 = *(i8*)(intptr_t)v9725;
	i8 v9727 = (i8)(intptr_t)(ws+3024);
	i8 v9728 = *(i8*)(intptr_t)v9727;
	i8 v9729 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v9730;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9729)(&v9730, v9728, v9726, v9724, v9720);
	i8 v9731 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9731 = v9730;

	i8 v9732 = (i8)(intptr_t)(ws+3048);
	i8 v9733 = *(i8*)(intptr_t)v9732;
	i8 v9734 = (i8)(intptr_t)(ws+3032);
	i8 v9735 = *(i8*)(intptr_t)v9734;
	i8 v9736 = v9735+(+16);
	*(i8*)(intptr_t)v9736 = v9733;

endsub:;
	*p9691 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s017d[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f61_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3056 length ws+8
void f472_expr_i_checkrhsconst(i8 p9737 /* rhs */) {
	*(i8*)(intptr_t)(ws+3056) = p9737; /*rhs */

	i8 v9738 = (i8)(intptr_t)(ws+3056);
	i8 v9739 = *(i8*)(intptr_t)v9738;
	i8 v9740 = v9739+(+58);
	i1 v9741 = *(i1*)(intptr_t)v9740;
	i1 v9742 = (i1)+43;
	if (v9741==v9742) goto c02_073a; else goto c02_0739;

c02_0739:;

	i8 v9743 = (i8)(intptr_t)c02_s017d;
	i8 v9744 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9744)(v9743);

	goto c02_0736;

c02_073a:;

c02_0736:;

endsub:;
}
	void f207_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s017e[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f61_SimpleError(i8 /* message */);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3056 length ws+16
void f473_expr_i_checkshift(i8 p9745 /* rhs */, i8 p9746 /* lhs */) {
	*(i8*)(intptr_t)(ws+3056) = p9746; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p9745; /*rhs */

	i8 v9747 = (i8)(intptr_t)(ws+3056);
	i8 v9748 = *(i8*)(intptr_t)v9747;
	i8 v9749 = v9748+(+16);
	i8 v9750 = *(i8*)(intptr_t)v9749;
	i8 v9751 = (i8)(intptr_t)(f207_IsNum);
	i1 v9752;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9751)(&v9752, v9750);
	i1 v9753 = (i1)+0;
	if (v9752==v9753) goto c02_073e; else goto c02_073f;

c02_073e:;

	i8 v9754 = (i8)(intptr_t)c02_s017e;
	i8 v9755 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9755)(v9754);

	goto c02_073b;

c02_073f:;

c02_073b:;

	i8 v9756 = (i8)(intptr_t)(ws+3064);
	i8 v9757 = *(i8*)(intptr_t)v9756;
	i8 v9758 = (i8)(intptr_t)(ws+1040);
	i8 v9759 = *(i8*)(intptr_t)v9758;
	i8 v9760 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v9760)(v9759, v9757);

endsub:;
}
	void f208_IsSNum(i1* /* result */, i8 /* type */);
	void f472_expr_i_checkrhsconst(i8 /* rhs */);
	void f150_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f56_Discard(i8 /* node */);
	void f473_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3008 length ws+48
void f474_ExprShift(i8* p9761 /* result */, i8 p9762 /* rhs */, i8 p9763 /* lhs */, i1 p9764 /* uop */, i1 p9765 /* sop */) {
	*(i1*)(intptr_t)(ws+3008) = p9765; /*sop */
	*(i1*)(intptr_t)(ws+3009) = p9764; /*uop */
	*(i8*)(intptr_t)(ws+3016) = p9763; /*lhs */
	*(i8*)(intptr_t)(ws+3024) = p9762; /*rhs */

	i8 v9766 = (i8)(intptr_t)(ws+3009);
	i1 v9767 = *(i1*)(intptr_t)v9766;
	i8 v9768 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9768 = v9767;

	i8 v9769 = (i8)(intptr_t)(ws+3016);
	i8 v9770 = *(i8*)(intptr_t)v9769;
	i8 v9771 = v9770+(+16);
	i8 v9772 = *(i8*)(intptr_t)v9771;
	i8 v9773 = (i8)(intptr_t)(f208_IsSNum);
	i1 v9774;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9773)(&v9774, v9772);
	i1 v9775 = (i1)+0;
	if (v9774==v9775) goto c02_0744; else goto c02_0743;

c02_0743:;

	i8 v9776 = (i8)(intptr_t)(ws+3008);
	i1 v9777 = *(i1*)(intptr_t)v9776;
	i8 v9778 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9778 = v9777;

	goto c02_0740;

c02_0744:;

c02_0740:;

	i8 v9779 = (i8)(intptr_t)(ws+3016);
	i8 v9780 = *(i8*)(intptr_t)v9779;
	i8 v9781 = v9780+(+58);
	i1 v9782 = *(i1*)(intptr_t)v9781;
	i1 v9783 = (i1)+43;
	if (v9782==v9783) goto c02_0748; else goto c02_0749;

c02_0748:;

	i8 v9784 = (i8)(intptr_t)(ws+3024);
	i8 v9785 = *(i8*)(intptr_t)v9784;
	i8 v9786 = (i8)(intptr_t)(f472_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v9786)(v9785);

	i8 v9787 = (i8)(intptr_t)(ws+3040);
	i1 v9788 = *(i1*)(intptr_t)v9787;
	i8 v9789 = (i8)(intptr_t)(ws+3016);
	i8 v9790 = *(i8*)(intptr_t)v9789;
	i8 v9791 = (i8)(intptr_t)(ws+3024);
	i8 v9792 = *(i8*)(intptr_t)v9791;
	i8 v9793 = (i8)(intptr_t)(f150_FoldConstant2);
	i4 v9794;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v9793)(&v9794, v9792, v9790, v9788);
	i8 v9795 = (i8)(intptr_t)(ws+3016);
	i8 v9796 = *(i8*)(intptr_t)v9795;
	*(i4*)(intptr_t)v9796 = v9794;

	i8 v9797 = (i8)(intptr_t)(ws+3016);
	i8 v9798 = *(i8*)(intptr_t)v9797;
	i8 v9799 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9799 = v9798;

	i8 v9800 = (i8)(intptr_t)(ws+3024);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9802)(v9801);

	goto endsub;

c02_0749:;

c02_0745:;

	i8 v9803 = (i8)(intptr_t)(ws+3016);
	i8 v9804 = *(i8*)(intptr_t)v9803;
	i8 v9805 = (i8)(intptr_t)(ws+3024);
	i8 v9806 = *(i8*)(intptr_t)v9805;
	i8 v9807 = (i8)(intptr_t)(f473_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9807)(v9806, v9804);

	i8 v9808 = (i8)(intptr_t)(ws+3016);
	i8 v9809 = *(i8*)(intptr_t)v9808;
	i8 v9810 = v9809+(+16);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9812 = v9811;

	i8 v9813 = (i8)(intptr_t)(ws+3040);
	i1 v9814 = *(i1*)(intptr_t)v9813;
	i8 v9815 = (i8)(intptr_t)(ws+3016);
	i8 v9816 = *(i8*)(intptr_t)v9815;
	i8 v9817 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v9818;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9817)(&v9818, v9816);
	i8 v9819 = (i8)(intptr_t)(ws+3016);
	i8 v9820 = *(i8*)(intptr_t)v9819;
	i8 v9821 = (i8)(intptr_t)(ws+3024);
	i8 v9822 = *(i8*)(intptr_t)v9821;
	i8 v9823 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v9824;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9823)(&v9824, v9822, v9820, v9818, v9814);
	i8 v9825 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9825 = v9824;

	i8 v9826 = (i8)(intptr_t)(ws+3048);
	i8 v9827 = *(i8*)(intptr_t)v9826;
	i8 v9828 = (i8)(intptr_t)(ws+3032);
	i8 v9829 = *(i8*)(intptr_t)v9828;
	i8 v9830 = v9829+(+16);
	*(i8*)(intptr_t)v9830 = v9827;

endsub:;
	*p9761 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s017f[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f61_SimpleError(i8 /* message */);

// PushNode workspace at ws+3232 length ws+8
void f53_PushNode(i8 p9831 /* node */) {
	*(i8*)(intptr_t)(ws+3232) = p9831; /*node */

	i8 v9832 = (i8)(intptr_t)(ws+3232);
	i8 v9833 = *(i8*)(intptr_t)v9832;
	i8 v9834 = (i8)+0;
	if (v9833==v9834) goto c02_074e; else goto c02_074d;

c02_074d:;

	i8 v9835 = (i8)(intptr_t)(ws+216);
	i8 v9836 = *(i8*)(intptr_t)v9835;
	i8 v9837 = (i8)(intptr_t)(ws+216);
	if (v9836==v9837) goto c02_0752; else goto c02_0753;

c02_0752:;

	i8 v9838 = (i8)(intptr_t)c02_s017f;
	i8 v9839 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9839)(v9838);

	goto c02_074f;

c02_0753:;

c02_074f:;

	i8 v9840 = (i8)(intptr_t)(ws+3232);
	i8 v9841 = *(i8*)(intptr_t)v9840;
	i8 v9842 = (i8)(intptr_t)(ws+216);
	i8 v9843 = *(i8*)(intptr_t)v9842;
	*(i8*)(intptr_t)v9843 = v9841;

	i8 v9844 = (i8)(intptr_t)(ws+216);
	i8 v9845 = *(i8*)(intptr_t)v9844;
	i8 v9846 = v9845+(+8);
	i8 v9847 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v9847 = v9846;

	goto c02_074a;

c02_074e:;

c02_074a:;

endsub:;
}

// PopNode workspace at ws+3216 length ws+8
void f54_PopNode(i8* p9848 /* node */) {

	i8 v9849 = (i8)(intptr_t)(ws+216);
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851 = v9850+(-8);
	i8 v9852 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v9852 = v9851;

	i8 v9853 = (i8)(intptr_t)(ws+216);
	i8 v9854 = *(i8*)(intptr_t)v9853;
	i8 v9855 = *(i8*)(intptr_t)v9854;
	i8 v9856 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v9856 = v9855;

endsub:;
	*p9848 = *(i8*)(intptr_t)(ws+3216);
}
	void f54_PopNode(i8* /* node */);
	void f53_PushNode(i8 /* node */);
	void f53_PushNode(i8 /* node */);

// NextNode workspace at ws+3208 length ws+8
void f55_NextNode(i8* p9857 /* node */) {

	i8 v9858 = (i8)(intptr_t)(f54_PopNode);
	i8 v9859;

	((void(*)(i8* /* node */))(intptr_t)v9858)(&v9859);
	i8 v9860 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v9860 = v9859;

	i8 v9861 = (i8)(intptr_t)(ws+3208);
	i8 v9862 = *(i8*)(intptr_t)v9861;
	i8 v9863 = (i8)+0;
	if (v9862==v9863) goto c02_0758; else goto c02_0757;

c02_0757:;

	i8 v9864 = (i8)(intptr_t)(ws+3208);
	i8 v9865 = *(i8*)(intptr_t)v9864;
	i8 v9866 = v9865+(+24);
	i8 v9867 = *(i8*)(intptr_t)v9866;
	i8 v9868 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v9868)(v9867);

	i8 v9869 = (i8)(intptr_t)(ws+3208);
	i8 v9870 = *(i8*)(intptr_t)v9869;
	i8 v9871 = v9870+(+32);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v9873)(v9872);

	goto c02_0754;

c02_0758:;

c02_0754:;

endsub:;
	*p9857 = *(i8*)(intptr_t)(ws+3208);
}
	void f53_PushNode(i8 /* node */);
	void f54_PopNode(i8* /* node */);
	void f32_Free(i8 /* block */);

// Discard workspace at ws+3160 length ws+24
void f56_Discard(i8 p9874 /* node */) {
	*(i8*)(intptr_t)(ws+3160) = p9874; /*node */

	i8 v9875 = (i8)(intptr_t)(ws+216);
	i8 v9876 = *(i8*)(intptr_t)v9875;
	i8 v9877 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v9877 = v9876;

	i8 v9878 = (i8)(intptr_t)(ws+3160);
	i8 v9879 = *(i8*)(intptr_t)v9878;
	i8 v9880 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v9880)(v9879);

c02_075b:;

	i8 v9881 = (i8)(intptr_t)(ws+216);
	i8 v9882 = *(i8*)(intptr_t)v9881;
	i8 v9883 = (i8)(intptr_t)(ws+3168);
	i8 v9884 = *(i8*)(intptr_t)v9883;
	if (v9882==v9884) goto c02_075e; else goto c02_075d;

c02_075d:;

	i8 v9885 = (i8)(intptr_t)(f54_PopNode);
	i8 v9886;

	((void(*)(i8* /* node */))(intptr_t)v9885)(&v9886);
	i8 v9887 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v9887 = v9886;

	i8 v9888 = (i8)(intptr_t)(ws+3176);
	i8 v9889 = *(i8*)(intptr_t)v9888;
	i8 v9890 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9890)(v9889);

	goto c02_075b;

c02_075e:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f214_AllocLabel(i2* /* label */);
	void f214_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3016 length ws+8
void f475_BeginNormalLoop(i8* p9891 /* ll */) {

	i8 v9892 = (i8)+8;
	i8 v9893 = (i8)(intptr_t)(f31_Alloc);
	i8 v9894;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9893)(&v9894, v9892);
	i8 v9895 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9895 = v9894;

	i8 v9896 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v9897;

	((void(*)(i2* /* label */))(intptr_t)v9896)(&v9897);
	i8 v9898 = (i8)(intptr_t)(ws+3016);
	i8 v9899 = *(i8*)(intptr_t)v9898;
	*(i2*)(intptr_t)v9899 = v9897;

	i8 v9900 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v9901;

	((void(*)(i2* /* label */))(intptr_t)v9900)(&v9901);
	i8 v9902 = (i8)(intptr_t)(ws+3016);
	i8 v9903 = *(i8*)(intptr_t)v9902;
	i8 v9904 = v9903+(+2);
	*(i2*)(intptr_t)v9904 = v9901;

	i8 v9905 = (i8)(intptr_t)(ws+52);
	i2 v9906 = *(i2*)(intptr_t)v9905;
	i8 v9907 = (i8)(intptr_t)(ws+3016);
	i8 v9908 = *(i8*)(intptr_t)v9907;
	i8 v9909 = v9908+(+4);
	*(i2*)(intptr_t)v9909 = v9906;

	i8 v9910 = (i8)(intptr_t)(ws+54);
	i2 v9911 = *(i2*)(intptr_t)v9910;
	i8 v9912 = (i8)(intptr_t)(ws+3016);
	i8 v9913 = *(i8*)(intptr_t)v9912;
	i8 v9914 = v9913+(+6);
	*(i2*)(intptr_t)v9914 = v9911;

	i8 v9915 = (i8)(intptr_t)(ws+3016);
	i8 v9916 = *(i8*)(intptr_t)v9915;
	i8 v9917 = v9916+(+2);
	i2 v9918 = *(i2*)(intptr_t)v9917;
	i8 v9919 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9919 = v9918;

	i8 v9920 = (i8)(intptr_t)(ws+3016);
	i8 v9921 = *(i8*)(intptr_t)v9920;
	i2 v9922 = *(i2*)(intptr_t)v9921;
	i8 v9923 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9923 = v9922;

endsub:;
	*p9891 = *(i8*)(intptr_t)(ws+3016);
}
	void f110_MidJump(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3008 length ws+8
void f476_TerminateNormalLoop(i8 p9924 /* ll */) {
	*(i8*)(intptr_t)(ws+3008) = p9924; /*ll */

	i8 v9925 = (i8)(intptr_t)(ws+54);
	i2 v9926 = *(i2*)(intptr_t)v9925;
	i8 v9927 = (i8)(intptr_t)(f110_MidJump);
	i8 v9928;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v9927)(&v9928, v9926);
	i8 v9929 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9929)(v9928);

	i8 v9930 = (i8)(intptr_t)(ws+52);
	i2 v9931 = *(i2*)(intptr_t)v9930;
	i8 v9932 = (i8)(intptr_t)(f142_MidLabel);
	i8 v9933;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v9932)(&v9933, v9931);
	i8 v9934 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9934)(v9933);

	i8 v9935 = (i8)(intptr_t)(ws+3008);
	i8 v9936 = *(i8*)(intptr_t)v9935;
	i8 v9937 = v9936+(+4);
	i2 v9938 = *(i2*)(intptr_t)v9937;
	i8 v9939 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9939 = v9938;

	i8 v9940 = (i8)(intptr_t)(ws+3008);
	i8 v9941 = *(i8*)(intptr_t)v9940;
	i8 v9942 = v9941+(+6);
	i2 v9943 = *(i2*)(intptr_t)v9942;
	i8 v9944 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9944 = v9943;

	i8 v9945 = (i8)(intptr_t)(ws+3008);
	i8 v9946 = *(i8*)(intptr_t)v9945;
	i8 v9947 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9947)(v9946);

endsub:;
}

// Negate workspace at ws+3008 length ws+8
void f477_Negate(i8 p9948 /* node */) {
	*(i8*)(intptr_t)(ws+3008) = p9948; /*node */

	i8 v9949 = (i8)(intptr_t)(ws+3008);
	i8 v9950 = *(i8*)(intptr_t)v9949;
	i8 v9951 = v9950+(+6);
	i1 v9952 = *(i1*)(intptr_t)v9951;
	i1 v9953 = v9952^(+1);
	i8 v9954 = (i8)(intptr_t)(ws+3008);
	i8 v9955 = *(i8*)(intptr_t)v9954;
	i8 v9956 = v9955+(+6);
	*(i1*)(intptr_t)v9956 = v9953;

endsub:;
}
	void f465_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f214_AllocLabel(i2* /* label */);
	void f214_AllocLabel(i2* /* label */);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f111_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3008 length ws+37
void f478_ConditionalEq(i8* p9957 /* result */, i1 p9958 /* negated */, i8 p9959 /* rhs */, i8 p9960 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p9960; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p9959; /*rhs */
	*(i1*)(intptr_t)(ws+3024) = p9958; /*negated */

	i8 v9961 = (i8)(intptr_t)(ws+3008);
	i8 v9962 = *(i8*)(intptr_t)v9961;
	i8 v9963 = (i8)(intptr_t)(ws+3016);
	i8 v9964 = *(i8*)(intptr_t)v9963;
	i8 v9965 = (i8)(intptr_t)(f465_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9965)(v9964, v9962);

	i8 v9966 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v9967;

	((void(*)(i2* /* label */))(intptr_t)v9966)(&v9967);
	i8 v9968 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v9968 = v9967;

	i8 v9969 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v9970;

	((void(*)(i2* /* label */))(intptr_t)v9969)(&v9970);
	i8 v9971 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v9971 = v9970;

	i8 v9972 = (i8)(intptr_t)(ws+3008);
	i8 v9973 = *(i8*)(intptr_t)v9972;
	i8 v9974 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v9975;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9974)(&v9975, v9973);
	i8 v9976 = (i8)(intptr_t)(ws+3044);
	*(i1*)(intptr_t)v9976 = v9975;

	i8 v9977 = (i8)(intptr_t)(ws+3044);
	i1 v9978 = *(i1*)(intptr_t)v9977;
	i8 v9979 = (i8)(intptr_t)(ws+3008);
	i8 v9980 = *(i8*)(intptr_t)v9979;
	i8 v9981 = (i8)(intptr_t)(ws+3016);
	i8 v9982 = *(i8*)(intptr_t)v9981;
	i8 v9983 = (i8)(intptr_t)(ws+3040);
	i2 v9984 = *(i2*)(intptr_t)v9983;
	i8 v9985 = (i8)(intptr_t)(ws+3042);
	i2 v9986 = *(i2*)(intptr_t)v9985;
	i2 v9987 = (i2)+0;
	i8 v9988 = (i8)(intptr_t)(ws+3024);
	i1 v9989 = *(i1*)(intptr_t)v9988;
	i8 v9990 = (i8)(intptr_t)(f111_MidBeq);
	i8 v9991;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v9990)(&v9991, v9989, v9987, v9986, v9984, v9982, v9980, v9978);
	i8 v9992 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9992 = v9991;

endsub:;
	*p9957 = *(i8*)(intptr_t)(ws+3032);
}
	void f465_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f214_AllocLabel(i2* /* label */);
	void f214_AllocLabel(i2* /* label */);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f208_IsSNum(i1* /* result */, i8 /* type */);
	void f95_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f93_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3008 length ws+37
void f479_ConditionalLt(i8* p9993 /* result */, i1 p9994 /* negated */, i8 p9995 /* rhs */, i8 p9996 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p9996; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p9995; /*rhs */
	*(i1*)(intptr_t)(ws+3024) = p9994; /*negated */

	i8 v9997 = (i8)(intptr_t)(ws+3008);
	i8 v9998 = *(i8*)(intptr_t)v9997;
	i8 v9999 = (i8)(intptr_t)(ws+3016);
	i8 v10000 = *(i8*)(intptr_t)v9999;
	i8 v10001 = (i8)(intptr_t)(f465_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v10001)(v10000, v9998);

	i8 v10002 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10003;

	((void(*)(i2* /* label */))(intptr_t)v10002)(&v10003);
	i8 v10004 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v10004 = v10003;

	i8 v10005 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10006;

	((void(*)(i2* /* label */))(intptr_t)v10005)(&v10006);
	i8 v10007 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v10007 = v10006;

	i8 v10008 = (i8)(intptr_t)(ws+3008);
	i8 v10009 = *(i8*)(intptr_t)v10008;
	i8 v10010 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v10011;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10010)(&v10011, v10009);
	i8 v10012 = (i8)(intptr_t)(ws+3044);
	*(i1*)(intptr_t)v10012 = v10011;

	i8 v10013 = (i8)(intptr_t)(ws+3008);
	i8 v10014 = *(i8*)(intptr_t)v10013;
	i8 v10015 = v10014+(+16);
	i8 v10016 = *(i8*)(intptr_t)v10015;
	i8 v10017 = (i8)(intptr_t)(f208_IsSNum);
	i1 v10018;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10017)(&v10018, v10016);
	i1 v10019 = (i1)+0;
	if (v10018==v10019) goto c02_0763; else goto c02_0762;

c02_0762:;

	i8 v10020 = (i8)(intptr_t)(ws+3044);
	i1 v10021 = *(i1*)(intptr_t)v10020;
	i8 v10022 = (i8)(intptr_t)(ws+3008);
	i8 v10023 = *(i8*)(intptr_t)v10022;
	i8 v10024 = (i8)(intptr_t)(ws+3016);
	i8 v10025 = *(i8*)(intptr_t)v10024;
	i8 v10026 = (i8)(intptr_t)(ws+3040);
	i2 v10027 = *(i2*)(intptr_t)v10026;
	i8 v10028 = (i8)(intptr_t)(ws+3042);
	i2 v10029 = *(i2*)(intptr_t)v10028;
	i2 v10030 = (i2)+0;
	i8 v10031 = (i8)(intptr_t)(ws+3024);
	i1 v10032 = *(i1*)(intptr_t)v10031;
	i8 v10033 = (i8)(intptr_t)(f95_MidBlts);
	i8 v10034;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10033)(&v10034, v10032, v10030, v10029, v10027, v10025, v10023, v10021);
	i8 v10035 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10035 = v10034;

	goto c02_075f;

c02_0763:;

	i8 v10036 = (i8)(intptr_t)(ws+3044);
	i1 v10037 = *(i1*)(intptr_t)v10036;
	i8 v10038 = (i8)(intptr_t)(ws+3008);
	i8 v10039 = *(i8*)(intptr_t)v10038;
	i8 v10040 = (i8)(intptr_t)(ws+3016);
	i8 v10041 = *(i8*)(intptr_t)v10040;
	i8 v10042 = (i8)(intptr_t)(ws+3040);
	i2 v10043 = *(i2*)(intptr_t)v10042;
	i8 v10044 = (i8)(intptr_t)(ws+3042);
	i2 v10045 = *(i2*)(intptr_t)v10044;
	i2 v10046 = (i2)+0;
	i8 v10047 = (i8)(intptr_t)(ws+3024);
	i1 v10048 = *(i1*)(intptr_t)v10047;
	i8 v10049 = (i8)(intptr_t)(f93_MidBltu);
	i8 v10050;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10049)(&v10050, v10048, v10046, v10045, v10043, v10041, v10039, v10037);
	i8 v10051 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10051 = v10050;

c02_075f:;

endsub:;
	*p9993 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s0180[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3008 length ws+0
void f480_parser_i_bad_next_prev(void) {

	i8 v10052 = (i8)(intptr_t)c02_s0180;
	i8 v10053 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10053)(v10052);

endsub:;
}
const i1 c02_s0181[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3032 length ws+0
void f481_parser_i_constant_error(void) {

	i8 v10054 = (i8)(intptr_t)c02_s0181;
	i8 v10055 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10055)(v10054);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0182[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0183[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
const i1 c02_s0184[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f60_EndError(void);

// i_check_sub_call_args workspace at ws+3056 length ws+8
void f482_i_check_sub_call_args(void) {

	i8 v10056 = (i8)(intptr_t)(ws+80);
	i8 v10057 = *(i8*)(intptr_t)v10056;
	i8 v10058 = v10057+(+8);
	i8 v10059 = *(i8*)(intptr_t)v10058;
	i8 v10060 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10060 = v10059;

	i8 v10061 = (i8)(intptr_t)(ws+80);
	i8 v10062 = *(i8*)(intptr_t)v10061;
	i8 v10063 = v10062+(+40);
	i1 v10064 = *(i1*)(intptr_t)v10063;
	i8 v10065 = (i8)(intptr_t)(ws+3056);
	i8 v10066 = *(i8*)(intptr_t)v10065;
	i8 v10067 = v10066+(+104);
	i1 v10068 = *(i1*)(intptr_t)v10067;
	if (v10064==v10068) goto c02_0768; else goto c02_0767;

c02_0767:;

	i8 v10069 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10069)();

	i8 v10070 = (i8)(intptr_t)c02_s0182;
	i8 v10071 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10071)(v10070);

	i8 v10072 = (i8)(intptr_t)(ws+3056);
	i8 v10073 = *(i8*)(intptr_t)v10072;
	i8 v10074 = *(i8*)(intptr_t)v10073;
	i8 v10075 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10075)(v10074);

	i8 v10076 = (i8)(intptr_t)c02_s0183;
	i8 v10077 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10077)(v10076);

	i8 v10078 = (i8)(intptr_t)(ws+3056);
	i8 v10079 = *(i8*)(intptr_t)v10078;
	i8 v10080 = v10079+(+104);
	i1 v10081 = *(i1*)(intptr_t)v10080;
	i8 v10082 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v10082)(v10081);

	i8 v10083 = (i8)(intptr_t)c02_s0184;
	i8 v10084 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10084)(v10083);

	i8 v10085 = (i8)(intptr_t)(ws+80);
	i8 v10086 = *(i8*)(intptr_t)v10085;
	i8 v10087 = v10086+(+40);
	i1 v10088 = *(i1*)(intptr_t)v10087;
	i8 v10089 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v10089)(v10088);

	i8 v10090 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10090)();

	goto c02_0764;

c02_0768:;

c02_0764:;

endsub:;
}
	void f184_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f32_Free(i8 /* block */);

// i_end_call workspace at ws+3056 length ws+8
void f483_i_end_call(void) {

	i8 v10091 = (i8)(intptr_t)(ws+40);
	i8 v10092 = *(i8*)(intptr_t)v10091;
	i8 v10093 = (i8)(intptr_t)(ws+80);
	i8 v10094 = *(i8*)(intptr_t)v10093;
	i8 v10095 = v10094+(+8);
	i8 v10096 = *(i8*)(intptr_t)v10095;
	i8 v10097 = (i8)(intptr_t)(f184_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10097)(v10096, v10092);

	i8 v10098 = (i8)(intptr_t)(ws+80);
	i8 v10099 = *(i8*)(intptr_t)v10098;
	i8 v10100 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10100 = v10099;

	i8 v10101 = (i8)(intptr_t)(ws+3056);
	i8 v10102 = *(i8*)(intptr_t)v10101;
	i8 v10103 = v10102+(+16);
	i8 v10104 = *(i8*)(intptr_t)v10103;
	i8 v10105 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10105 = v10104;

	i8 v10106 = (i8)(intptr_t)(ws+3056);
	i8 v10107 = *(i8*)(intptr_t)v10106;
	i8 v10108 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10108)(v10107);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0185[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// SymbolRedeclarationError workspace at ws+3008 length ws+0
void f484_SymbolRedeclarationError(void) {

	i8 v10109 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10109)();

	i8 v10110 = (i8)(intptr_t)c02_s0185;
	i8 v10111 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10111)(v10110);

	i8 v10112 = (i8)(intptr_t)(ws+72);
	i8 v10113 = *(i8*)(intptr_t)v10112;
	i8 v10114 = v10113+(+48);
	i8 v10115 = *(i8*)(intptr_t)v10114;
	i8 v10116 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10116)(v10115);

	i8 v10117 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10117)();

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0186[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// WrongNumberOfElementsError workspace at ws+3048 length ws+0
void f485_WrongNumberOfElementsError(void) {

	i8 v10118 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10118)();

	i8 v10119 = (i8)(intptr_t)c02_s0186;
	i8 v10120 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10120)(v10119);

	i8 v10121 = (i8)(intptr_t)(ws+72);
	i8 v10122 = *(i8*)(intptr_t)v10121;
	i8 v10123 = v10122+(+48);
	i8 v10124 = *(i8*)(intptr_t)v10123;
	i8 v10125 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10125)(v10124);

	i8 v10126 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10126)();

endsub:;
}
	void f204_IsArray(i1* /* result */, i8 /* type */);
	void f221_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f485_WrongNumberOfElementsError(void);
	void f485_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3008 length ws+4
void f486_CheckEndOfInitialiser(void) {

	i8 v10127 = (i8)(intptr_t)(ws+72);
	i8 v10128 = *(i8*)(intptr_t)v10127;
	i8 v10129 = (i8)(intptr_t)(f204_IsArray);
	i1 v10130;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10129)(&v10130, v10128);
	i1 v10131 = (i1)+0;
	if (v10130==v10131) goto c02_076d; else goto c02_076c;

c02_076c:;

	i8 v10132 = (i8)(intptr_t)(ws+72);
	i8 v10133 = *(i8*)(intptr_t)v10132;
	i8 v10134 = *(i8*)(intptr_t)v10133;
	i8 v10135 = v10134+(+44);
	i2 v10136 = *(i2*)(intptr_t)v10135;
	i8 v10137 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v10137 = v10136;

	i8 v10138 = (i8)(intptr_t)(ws+72);
	i8 v10139 = *(i8*)(intptr_t)v10138;
	i8 v10140 = v10139+(+42);
	i2 v10141 = *(i2*)(intptr_t)v10140;
	i2 v10142 = (i2)+0;
	if (v10141==v10142) goto c02_0771; else goto c02_0772;

c02_0771:;

	i8 v10143 = (i8)(intptr_t)(ws+1240);
	i2 v10144 = *(i2*)(intptr_t)v10143;
	i8 v10145 = (i8)(intptr_t)(ws+72);
	i8 v10146 = *(i8*)(intptr_t)v10145;
	i8 v10147 = v10146+(+42);
	*(i2*)(intptr_t)v10147 = v10144;

	i8 v10148 = (i8)(intptr_t)(ws+1240);
	i2 v10149 = *(i2*)(intptr_t)v10148;
	i8 v10150 = (i8)(intptr_t)(ws+3008);
	i2 v10151 = *(i2*)(intptr_t)v10150;
	i2 v10152 = v10149/v10151;
	i8 v10153 = (i8)(intptr_t)(ws+3010);
	*(i2*)(intptr_t)v10153 = v10152;

	i8 v10154 = (i8)(intptr_t)(ws+3010);
	i2 v10155 = *(i2*)(intptr_t)v10154;
	i8 v10156 = (i8)(intptr_t)(ws+72);
	i8 v10157 = *(i8*)(intptr_t)v10156;
	i8 v10158 = v10157+(+8);
	*(i2*)(intptr_t)v10158 = v10155;

	i4 v10159 = (i4)+0;
	i8 v10160 = (i8)(intptr_t)(ws+3010);
	i2 v10161 = *(i2*)(intptr_t)v10160;
	i2 v10162 = v10161+(-1);
	i4 v10163 = v10162;
	i8 v10164 = (i8)(intptr_t)(f221_ArchGuessIntType);
	i8 v10165;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v10164)(&v10165, v10163, v10159);
	i8 v10166 = (i8)(intptr_t)(ws+72);
	i8 v10167 = *(i8*)(intptr_t)v10166;
	i8 v10168 = v10167+(+16);
	*(i8*)(intptr_t)v10168 = v10165;

	goto c02_076e;

c02_0772:;

c02_076e:;

	i8 v10169 = (i8)(intptr_t)(ws+1240);
	i2 v10170 = *(i2*)(intptr_t)v10169;
	i8 v10171 = (i8)(intptr_t)(ws+72);
	i8 v10172 = *(i8*)(intptr_t)v10171;
	i8 v10173 = v10172+(+42);
	i2 v10174 = *(i2*)(intptr_t)v10173;
	if (v10170==v10174) goto c02_0777; else goto c02_0776;

c02_0776:;

	i8 v10175 = (i8)(intptr_t)(f485_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10175)();

	goto c02_0773;

c02_0777:;

c02_0773:;

	goto c02_0769;

c02_076d:;

	i8 v10176 = (i8)(intptr_t)(ws+1232);
	i8 v10177 = *(i8*)(intptr_t)v10176;
	i8 v10178 = (i8)+0;
	if (v10177==v10178) goto c02_077c; else goto c02_077b;

c02_077b:;

	i8 v10179 = (i8)(intptr_t)(f485_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10179)();

	goto c02_0778;

c02_077c:;

c02_0778:;

c02_0769:;

endsub:;
}
	void f204_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3048 length ws+16
void f487_GetInitedMember(i8* p10180 /* member */, i8* p10181 /* type */) {

	i8 v10182 = (i8)+0;
	i8 v10183 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v10183 = v10182;

	i8 v10184 = (i8)(intptr_t)(ws+72);
	i8 v10185 = *(i8*)(intptr_t)v10184;
	i8 v10186 = (i8)(intptr_t)(f204_IsArray);
	i1 v10187;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10186)(&v10187, v10185);
	i1 v10188 = (i1)+0;
	if (v10187==v10188) goto c02_0781; else goto c02_0780;

c02_0780:;

	i8 v10189 = (i8)(intptr_t)(ws+72);
	i8 v10190 = *(i8*)(intptr_t)v10189;
	i8 v10191 = *(i8*)(intptr_t)v10190;
	i8 v10192 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10192 = v10191;

	goto c02_077d;

c02_0781:;

	i8 v10193 = (i8)(intptr_t)(ws+1232);
	i8 v10194 = *(i8*)(intptr_t)v10193;
	i8 v10195 = (i8)+0;
	if (v10194==v10195) goto c02_0785; else goto c02_0786;

c02_0785:;

	i8 v10196 = (i8)+0;
	i8 v10197 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10197 = v10196;

	goto endsub;

c02_0786:;

c02_0782:;

	i8 v10198 = (i8)(intptr_t)(ws+1232);
	i8 v10199 = *(i8*)(intptr_t)v10198;
	i8 v10200 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v10200 = v10199;

	i8 v10201 = (i8)(intptr_t)(ws+1232);
	i8 v10202 = *(i8*)(intptr_t)v10201;
	i8 v10203 = *(i8*)(intptr_t)v10202;
	i8 v10204 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10204 = v10203;

	i8 v10205 = (i8)(intptr_t)(ws+1232);
	i8 v10206 = *(i8*)(intptr_t)v10205;
	i8 v10207 = v10206+(+56);
	i8 v10208 = *(i8*)(intptr_t)v10207;
	i8 v10209 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v10209 = v10208;

c02_077d:;

endsub:;
	*p10181 = *(i8*)(intptr_t)(ws+3056);
	*p10180 = *(i8*)(intptr_t)(ws+3048);
}
	void f219_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f113_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f448_Generate(i8 /* statement */);

// AlignTo workspace at ws+3048 length ws+4
void f488_AlignTo(i1 p10210 /* alignment */) {
	*(i1*)(intptr_t)(ws+3048) = p10210; /*alignment */

	i8 v10211 = (i8)(intptr_t)(ws+1242);
	i2 v10212 = *(i2*)(intptr_t)v10211;
	i8 v10213 = (i8)(intptr_t)(ws+3048);
	i1 v10214 = *(i1*)(intptr_t)v10213;
	i8 v10215 = (i8)(intptr_t)(f219_ArchAlignUp);
	i2 v10216;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v10215)(&v10216, v10214, v10212);
	i8 v10217 = (i8)(intptr_t)(ws+3050);
	*(i2*)(intptr_t)v10217 = v10216;

c02_0789:;

	i8 v10218 = (i8)(intptr_t)(ws+1242);
	i2 v10219 = *(i2*)(intptr_t)v10218;
	i8 v10220 = (i8)(intptr_t)(ws+3050);
	i2 v10221 = *(i2*)(intptr_t)v10220;
	if (v10219==v10221) goto c02_078c; else goto c02_078b;

c02_078b:;

	i1 v10222 = (i1)+1;
	i4 v10223 = (i4)+0;
	i8 v10224 = (i8)(intptr_t)(f113_MidInit);
	i8 v10225;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v10224)(&v10225, v10223, v10222);
	i8 v10226 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10226)(v10225);

	i8 v10227 = (i8)(intptr_t)(ws+1240);
	i2 v10228 = *(i2*)(intptr_t)v10227;
	i2 v10229 = v10228+(+1);
	i8 v10230 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v10230 = v10229;

	i8 v10231 = (i8)(intptr_t)(ws+1242);
	i2 v10232 = *(i2*)(intptr_t)v10231;
	i2 v10233 = v10232+(+1);
	i8 v10234 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v10234 = v10233;

	goto c02_0789;

c02_078c:;

endsub:;
}
const i1 c02_s0187[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f61_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3048 length ws+8
void f489_CheckForOverlaps(i8 p10235 /* member */) {
	*(i8*)(intptr_t)(ws+3048) = p10235; /*member */

	i8 v10236 = (i8)(intptr_t)(ws+3048);
	i8 v10237 = *(i8*)(intptr_t)v10236;
	i8 v10238 = (i8)+0;
	if (v10237==v10238) goto c02_0790; else goto c02_0791;

c02_0790:;

	goto endsub;

c02_0791:;

c02_078d:;

	i8 v10239 = (i8)(intptr_t)(ws+3048);
	i8 v10240 = *(i8*)(intptr_t)v10239;
	i8 v10241 = v10240+(+32);
	i2 v10242 = *(i2*)(intptr_t)v10241;
	i8 v10243 = (i8)(intptr_t)(ws+1240);
	i2 v10244 = *(i2*)(intptr_t)v10243;
	if (v10242<v10244) goto c02_0795; else goto c02_0796;

c02_0795:;

	i8 v10245 = (i8)(intptr_t)c02_s0187;
	i8 v10246 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10246)(v10245);

	goto c02_0792;

c02_0796:;

c02_0792:;

endsub:;
}
	void f487_GetInitedMember(i8* /* member */, i8* /* type */);
	void f485_WrongNumberOfElementsError(void);
	void f488_AlignTo(i1 /* alignment */);
	void f489_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3032 length ws+16
void f490_GetInitedMemberChecked(i8* p10247 /* member */, i8* p10248 /* type */) {

	i8 v10249 = (i8)(intptr_t)(f487_GetInitedMember);
	i8 v10250;
	i8 v10251;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v10249)(&v10250, &v10251);

	i8 v10252 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v10252 = v10251;

	i8 v10253 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10253 = v10250;

	i8 v10254 = (i8)(intptr_t)(ws+3040);
	i8 v10255 = *(i8*)(intptr_t)v10254;
	i8 v10256 = (i8)+0;
	if (v10255==v10256) goto c02_079a; else goto c02_079b;

c02_079a:;

	i8 v10257 = (i8)(intptr_t)(f485_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10257)();

	goto c02_0797;

c02_079b:;

c02_0797:;

	i8 v10258 = (i8)(intptr_t)(ws+3040);
	i8 v10259 = *(i8*)(intptr_t)v10258;
	i8 v10260 = v10259+(+41);
	i1 v10261 = *(i1*)(intptr_t)v10260;
	i8 v10262 = (i8)(intptr_t)(f488_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v10262)(v10261);

	i8 v10263 = (i8)(intptr_t)(ws+3032);
	i8 v10264 = *(i8*)(intptr_t)v10263;
	i8 v10265 = (i8)(intptr_t)(f489_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v10265)(v10264);

endsub:;
	*p10248 = *(i8*)(intptr_t)(ws+3040);
	*p10247 = *(i8*)(intptr_t)(ws+3032);
}
static data c02_a79c[] = { // yy_action




	{ .i1 = { 0x0c,0x02,0xa5,0x01,0xf6,0x01,0xd1,0x00}},




	{ .i1 = { 0x61,0x00,0xc1,0x01,0x06,0x00,0x63,0x00}},




	{ .i1 = { 0x93,0x01,0x09,0x00,0xb6,0x00,0x3d,0x02}},




	{ .i1 = { 0x6f,0x00,0x3b,0x01,0x36,0x00,0xaa,0x00}},




	{ .i1 = { 0x10,0x00,0x27,0x00,0xaf,0x00,0x58,0x00}},




	{ .i1 = { 0x51,0x00,0xdd,0x00,0xac,0x01,0x19,0x02}},




	{ .i1 = { 0x6c,0x00,0x55,0x00,0xc1,0x00,0x34,0x00}},




	{ .i1 = { 0x65,0x00,0x16,0x00,0xbe,0x00,0x1f,0x02}},




	{ .i1 = { 0xfe,0x01,0x77,0x01,0x52,0x01,0xfe,0x01}},




	{ .i1 = { 0x50,0x00,0xbb,0x00,0xda,0x00,0xc8,0x00}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0xb7,0x00,0xc2,0x00}},




	{ .i1 = { 0x52,0x00,0x97,0x00,0x9e,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x41,0x00,0x77,0x01,0xa7,0x01}},




	{ .i1 = { 0x36,0x02,0x33,0x00,0x35,0x00,0xce,0x00}},




	{ .i1 = { 0x75,0x00,0xba,0x00,0xa6,0x01,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0xfe,0x01,0xd0,0x00}},




	{ .i1 = { 0x1e,0x00,0x4c,0x00,0xa5,0x01,0xd9,0x00}},




	{ .i1 = { 0xd1,0x00,0xdc,0x00,0x4c,0x00,0xf6,0x01}},




	{ .i1 = { 0x63,0x00,0x64,0x00,0xfe,0x01,0xd3,0x00}},




	{ .i1 = { 0x27,0x02,0x6f,0x00,0x3b,0x01,0x36,0x00}},




	{ .i1 = { 0x8d,0x01,0x10,0x00,0x27,0x00,0x4d,0x02}},




	{ .i1 = { 0xab,0x00,0x51,0x00,0xdd,0x00,0xac,0x01}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0x55,0x00,0x36,0x02}},




	{ .i1 = { 0x34,0x00,0x65,0x00,0x16,0x00,0x5c,0x00}},




	{ .i1 = { 0x48,0x01,0x73,0x00,0x77,0x01,0x52,0x01}},




	{ .i1 = { 0x94,0x00,0x50,0x00,0xa5,0x00,0x86,0x00}},




	{ .i1 = { 0xc8,0x00,0x4f,0x00,0x6c,0x01,0xb7,0x00}},




	{ .i1 = { 0xc2,0x00,0x52,0x00,0xdc,0x00,0x11,0x00}},




	{ .i1 = { 0xf6,0x01,0x9a,0x00,0x64,0x00,0xa9,0x00}},




	{ .i1 = { 0xdc,0x00,0x43,0x00,0xf6,0x01,0x78,0x01}},




	{ .i1 = { 0x64,0x00,0x3a,0x00,0xac,0x00,0xab,0x00}},




	{ .i1 = { 0x2b,0x00,0x29,0x00,0x28,0x00,0x76,0x01}},




	{ .i1 = { 0xd0,0x00,0x1e,0x00,0xfe,0x01,0xa5,0x01}},




	{ .i1 = { 0xd9,0x00,0xd1,0x00,0x3d,0x01,0x7f,0x01}},




	{ .i1 = { 0x17,0x00,0x63,0x00,0x15,0x00,0x13,0x00}},




	{ .i1 = { 0xd4,0x00,0x36,0x01,0x6f,0x00,0x3b,0x01}},




	{ .i1 = { 0x36,0x00,0xc1,0x00,0x10,0x00,0x27,0x00}},




	{ .i1 = { 0xbd,0x00,0xbc,0x00,0x51,0x00,0xdd,0x00}},




	{ .i1 = { 0xac,0x01,0xbb,0x00,0x68,0x00,0x55,0x00}},




	{ .i1 = { 0x88,0x01,0x34,0x00,0x65,0x00,0x16,0x00}},




	{ .i1 = { 0xbe,0x00,0x1f,0x02,0x7d,0x00,0x77,0x01}},




	{ .i1 = { 0x52,0x01,0x85,0x00,0x50,0x00,0x15,0x00}},




	{ .i1 = { 0x13,0x00,0xc8,0x00,0x4f,0x00,0x6c,0x01}},




	{ .i1 = { 0xb7,0x00,0xc2,0x00,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0x1c,0x00,0xf6,0x01,0xdc,0x00,0x64,0x00}},




	{ .i1 = { 0xf6,0x01,0x6a,0x00,0x64,0x00,0x9c,0x00}},




	{ .i1 = { 0x9b,0x00,0x9d,0x00,0x0f,0x02,0xbe,0x00}},




	{ .i1 = { 0x1f,0x02,0x2b,0x00,0x29,0x00,0x28,0x00}},




	{ .i1 = { 0xc1,0x00,0xd0,0x00,0x1e,0x00,0x37,0x02}},




	{ .i1 = { 0xa5,0x01,0xd9,0x00,0xd1,0x00,0xa7,0x00}},




	{ .i1 = { 0xfe,0x01,0xfe,0x01,0x63,0x00,0xb4,0x01}},




	{ .i1 = { 0x95,0x00,0x95,0x00,0x0a,0x00,0x6f,0x00}},




	{ .i1 = { 0x3b,0x01,0x36,0x00,0x6b,0x00,0x10,0x00}},




	{ .i1 = { 0x27,0x00,0x3f,0x02,0x6d,0x00,0x51,0x00}},




	{ .i1 = { 0xdd,0x00,0xac,0x01,0x66,0x00,0xb1,0x00}},




	{ .i1 = { 0x55,0x00,0xb2,0x00,0x34,0x00,0x65,0x00}},




	{ .i1 = { 0x16,0x00,0x02,0x02,0x07,0x02,0x7d,0x00}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0x74,0x00,0x50,0x00}},




	{ .i1 = { 0x38,0x00,0x27,0x00,0xc8,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xb7,0x00,0xc2,0x00,0x52,0x00}},




	{ .i1 = { 0xdc,0x00,0x44,0x00,0xf6,0x01,0xdc,0x00}},




	{ .i1 = { 0x64,0x00,0xf6,0x01,0x0c,0x00,0x64,0x00}},




	{ .i1 = { 0xdb,0x00,0x77,0x01,0x52,0x01,0x93,0x00}},




	{ .i1 = { 0xcc,0x00,0x13,0x02,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0x6c,0x01,0xd0,0x00,0x1e,0x00}},




	{ .i1 = { 0x19,0x02,0xa5,0x01,0xd9,0x00,0xd1,0x00}},




	{ .i1 = { 0xb5,0x00,0xfe,0x01,0x49,0x00,0x63,0x00}},




	{ .i1 = { 0xfe,0x01,0x96,0x00,0x96,0x00,0x0a,0x00}},




	{ .i1 = { 0x6f,0x00,0x3b,0x01,0x36,0x00,0xda,0x00}},




	{ .i1 = { 0x10,0x00,0x27,0x00,0xf5,0x01,0x07,0x02}},




	{ .i1 = { 0x51,0x00,0xdd,0x00,0xac,0x01,0x77,0x01}},




	{ .i1 = { 0x2c,0x00,0x55,0x00,0x42,0x00,0x34,0x00}},




	{ .i1 = { 0x65,0x00,0x16,0x00,0xf4,0x01,0x07,0x02}},




	{ .i1 = { 0x73,0x00,0x77,0x01,0x52,0x01,0x94,0x00}},




	{ .i1 = { 0x50,0x00,0xcf,0x00,0x7d,0x00,0xc8,0x00}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0xb7,0x00,0xc2,0x00}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0x09,0x00,0xf6,0x01}},




	{ .i1 = { 0x26,0x00,0x64,0x00,0x48,0x00,0xdc,0x00}},




	{ .i1 = { 0x4b,0x00,0xf6,0x01,0x77,0x01,0x64,0x00}},




	{ .i1 = { 0x59,0x00,0x7f,0x00,0x1a,0x02,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0x8d,0x01,0xd0,0x00}},




	{ .i1 = { 0x1e,0x00,0x53,0x01,0x78,0x01,0xd9,0x00}},




	{ .i1 = { 0x67,0x00,0xda,0x00,0xdc,0x00,0xd8,0x00}},




	{ .i1 = { 0xf6,0x01,0x73,0x00,0x64,0x00,0x37,0x00}},




	{ .i1 = { 0xd7,0x01,0x71,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0x4a,0x02,0x0a,0x00,0x69,0x00}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xdc,0x00,0xda,0x00}},




	{ .i1 = { 0xf6,0x01,0x17,0x00,0x64,0x00,0x73,0x00}},




	{ .i1 = { 0xa2,0x01,0x37,0x00,0xd9,0x01,0x4e,0x00}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0x48,0x02}},




	{ .i1 = { 0x3f,0x00,0x5b,0x00,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xdc,0x00,0x0d,0x00,0xf6,0x01,0x1e,0x02}},




	{ .i1 = { 0x64,0x00,0x2f,0x00,0x31,0x00,0x22,0x00}},




	{ .i1 = { 0x1f,0x00,0x20,0x00,0x21,0x00,0x24,0x00}},




	{ .i1 = { 0x23,0x00,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0xb4,0x00,0x3f,0x00,0x5b,0x00}},




	{ .i1 = { 0x0f,0x00,0x24,0x02,0xbc,0x00,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0x22,0x00,0x1f,0x00,0x20,0x00}},




	{ .i1 = { 0x21,0x00,0x24,0x00,0x23,0x00,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0x39,0x02}},




	{ .i1 = { 0x15,0x00,0x13,0x00,0x77,0x00,0x71,0x00}},




	{ .i1 = { 0x70,0x00,0x80,0x00,0xc4,0x00,0xda,0x00}},




	{ .i1 = { 0x17,0x00,0xc6,0x00,0x6e,0x00,0x72,0x00}},




	{ .i1 = { 0xad,0x00,0x9b,0x01,0x91,0x00,0xdc,0x00}},




	{ .i1 = { 0x2c,0x00,0xf6,0x01,0xdc,0x00,0x62,0x00}},




	{ .i1 = { 0xf6,0x01,0xc5,0x00,0x64,0x00,0x19,0x02}},




	{ .i1 = { 0xdc,0x00,0x0d,0x00,0xf6,0x01,0x09,0x02}},




	{ .i1 = { 0x64,0x00,0x86,0x00,0xb8,0x00,0x5f,0x00}},




	{ .i1 = { 0x5e,0x00,0xca,0x00,0x39,0x02,0x17,0x00}},




	{ .i1 = { 0xa4,0x00,0x77,0x00,0x71,0x00,0x70,0x00}},




	{ .i1 = { 0x75,0x01,0xd5,0x00,0xdc,0x00,0xae,0x00}},




	{ .i1 = { 0xf6,0x01,0x6e,0x00,0x64,0x00,0x3d,0x00}},




	{ .i1 = { 0x7a,0x01,0x3e,0x00,0xdc,0x00,0x07,0x00}},




	{ .i1 = { 0xf6,0x01,0x01,0x00,0x62,0x00,0x02,0x00}},




	{ .i1 = { 0xc5,0x00,0x4a,0x00,0x30,0x00,0x39,0x02}},




	{ .i1 = { 0x98,0x00,0x17,0x00,0x77,0x00,0x71,0x00}},




	{ .i1 = { 0x70,0x00,0xb9,0x00,0x5f,0x00,0x5e,0x00}},




	{ .i1 = { 0x03,0x00,0x99,0x00,0x6e,0x00,0x73,0x00}},




	{ .i1 = { 0x5a,0x00,0x08,0x00,0xd2,0x00,0xdc,0x00}},




	{ .i1 = { 0x4d,0x00,0xf6,0x01,0xae,0x00,0x62,0x00}},




	{ .i1 = { 0x0e,0x00,0xc5,0x00,0x3d,0x00,0x04,0x00}},




	{ .i1 = { 0xdc,0x00,0x86,0x00,0xf6,0x01,0x05,0x00}},




	{ .i1 = { 0x64,0x00,0x56,0x00,0xc3,0x00,0x5f,0x00}},




	{ .i1 = { 0x5e,0x00,0x36,0x00,0x40,0x01,0x38,0x00}},




	{ .i1 = { 0x27,0x00,0xb0,0x00,0xdc,0x00,0xa6,0x00}},




	{ .i1 = { 0xf6,0x01,0x73,0x00,0x64,0x00,0xae,0x00}},




	{ .i1 = { 0x92,0x00,0x17,0x00,0x34,0x00,0x3d,0x00}},




	{ .i1 = { 0x47,0x01,0x46,0x01,0xa3,0x01,0x3c,0x00}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0xdc,0x00,0x50,0x00}},




	{ .i1 = { 0xf6,0x01,0xa4,0x01,0x64,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xda,0x00,0x36,0x00,0x12,0x00}},




	{ .i1 = { 0x14,0x00,0x27,0x00,0x9f,0x01,0x37,0x00}},




	{ .i1 = { 0x0b,0x00,0x9d,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0x18,0x00,0x45,0x00,0x34,0x00}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0x77,0x01,0x52,0x01,0x98,0x01}},




	{ .i1 = { 0x50,0x00,0xb3,0x00,0xd9,0x00,0x80,0x01}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0x40,0x00,0x46,0x00}},




	{ .i1 = { 0x8e,0x01,0xb6,0x01,0x5d,0x00,0xb5,0x01}},




	{ .i1 = { 0x53,0x00,0x36,0x00,0x94,0x01,0x38,0x00}},




	{ .i1 = { 0x27,0x00,0x60,0x00,0x8a,0x01,0xbf,0x00}},




	{ .i1 = { 0xc0,0x00,0x81,0x00,0x54,0x00,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0x34,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0x86,0x00,0xb3,0x01,0xd9,0x00}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0xdc,0x00,0x50,0x00}},




	{ .i1 = { 0xf6,0x01,0x7d,0x01,0x64,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xc9,0x00,0xdc,0x00,0xa8,0x00}},




	{ .i1 = { 0xf6,0x01,0x3b,0x00,0x64,0x00,0x7c,0x01}},




	{ .i1 = { 0x36,0x00,0xc7,0x00,0x38,0x00,0x27,0x00}},




	{ .i1 = { 0x6e,0x01,0x47,0x00,0x19,0x00,0x84,0x01}},




	{ .i1 = { 0x7e,0x00,0x1a,0x00,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0x34,0x00,0x44,0x01,0x57,0x00}},




	{ .i1 = { 0xcd,0x00,0x13,0x00,0xd9,0x00,0x77,0x01}},




	{ .i1 = { 0x52,0x01,0xdc,0x00,0x50,0x00,0xf6,0x01}},




	{ .i1 = { 0x3f,0x01,0x64,0x00,0x4f,0x00,0x6c,0x01}},




	{ .i1 = { 0x73,0x01,0x3e,0x01,0x3c,0x01,0xcb,0x00}},




	{ .i1 = { 0x3a,0x01,0x72,0x01,0x6f,0x01,0x1b,0x00}},




	{ .i1 = { 0x1d,0x00,0x36,0x00,0x2a,0x00,0x38,0x00}},




	{ .i1 = { 0x27,0x00,0x6b,0x01,0x0c,0x02,0x35,0x01}},




	{ .i1 = { 0xc2,0x01,0x2b,0x00,0x29,0x00,0x28,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x34,0x00,0xc2,0x01}},




	{ .i1 = { 0x82,0x00,0xd9,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x77,0x01,0x52,0x01,0x53,0x01,0x50,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xda,0x00,0x4f,0x00}},




	{ .i1 = { 0x6c,0x01,0xdc,0x00,0xc2,0x01,0xf6,0x01}},




	{ .i1 = { 0x37,0x00,0x64,0x00,0xc2,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2b,0x00,0x29,0x00}},




	{ .i1 = { 0x28,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xd9,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x85,0x00,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xda,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x10,0x02,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x37,0x00,0xc2,0x01,0x83,0x00}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0xda,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0x37,0x00}},




	{ .i1 = { 0x64,0x00,0xc2,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0xc2,0x01,0xc2,0x01,0x39,0x01}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x84,0x00,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0xc2,0x01,0x64,0x00}},




	{ .i1 = { 0x45,0x01,0x2f,0x00,0x31,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0x25,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xda,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x37,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0xda,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x76,0x00,0xc2,0x01,0x37,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0xc2,0x01,0xc2,0x01,0x38,0x01}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x78,0x00,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x2f,0x00,0x31,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0xc2,0x01,0x64,0x00}},




	{ .i1 = { 0x86,0x00,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0xc2,0x01,0xc2,0x01,0x69,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xda,0x00,0xc2,0x01}},




	{ .i1 = { 0xd6,0x00,0xdc,0x00,0xc2,0x01,0xf6,0x01}},




	{ .i1 = { 0x37,0x00,0x64,0x00,0xc2,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0x6a,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xda,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x37,0x00,0xc2,0x01,0xc2,0x01,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x79,0x00,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2f,0x00,0x31,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x9e,0x00,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x36,0x00,0xda,0x00}},




	{ .i1 = { 0x38,0x00,0x27,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0x37,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0x34,0x00}},




	{ .i1 = { 0xc2,0x01,0x37,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0x77,0x01,0x52,0x01,0xc2,0x01}},




	{ .i1 = { 0x50,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x4f,0x00,0x6c,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0xc2,0x01,0x2b,0x00}},




	{ .i1 = { 0x29,0x00,0x28,0x00,0xc2,0x01,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xd9,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x39,0x02,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x77,0x00,0x71,0x00,0x70,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x6e,0x00,0xc2,0x01,0x9f,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x62,0x00,0xc2,0x01}},




	{ .i1 = { 0xc5,0x00,0xc2,0x01,0xc2,0x01,0xda,0x00}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0xc2,0x01}},




	{ .i1 = { 0x64,0x00,0x37,0x00,0x5f,0x00,0x5e,0x00}},




	{ .i1 = { 0x2c,0x00,0x32,0x00,0x39,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x33,0x00,0x35,0x00}},




	{ .i1 = { 0xc2,0x01,0xda,0x00,0xae,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x3d,0x00,0x37,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2c,0x00,0x32,0x00}},




	{ .i1 = { 0x39,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0x33,0x00,0x35,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2f,0x00}},




	{ .i1 = { 0x31,0x00,0xc2,0x01,0x86,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0x2e,0x00}},




	{ .i1 = { 0x2d,0x00,0x4a,0x00,0x30,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xd7,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0x31,0x00,0x64,0x00}},




	{ .i1 = { 0xa0,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x2e,0x00,0x2d,0x00,0x4a,0x00}},




	{ .i1 = { 0x30,0x00,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xdc,0x00,0xda,0x00,0xf6,0x01}},




	{ .i1 = { 0xc2,0x01,0x64,0x00,0xc2,0x01,0xa1,0x00}},




	{ .i1 = { 0x37,0x00,0xc2,0x01,0x7a,0x00,0x2c,0x00}},




	{ .i1 = { 0x32,0x00,0x39,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x33,0x00,0x35,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0x89,0x00,0xf6,0x01,0xdc,0x00}},




	{ .i1 = { 0x64,0x00,0xf6,0x01,0x8a,0x00,0x64,0x00}},




	{ .i1 = { 0xc2,0x01,0x87,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xdc,0x00}},




	{ .i1 = { 0xc2,0x01,0xf6,0x01,0xdc,0x00,0x64,0x00}},




	{ .i1 = { 0xf6,0x01,0xa2,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0x2e,0x00,0x2d,0x00}},




	{ .i1 = { 0x4a,0x00,0x30,0x00,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x88,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0x8f,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xc2,0x01,0xc2,0x01}},




	{ .i1 = { 0xc2,0x01,0x90,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xa3,0x00,0xf6,0x01,0xc2,0x01}},




	{ .i1 = { 0x64,0x00,0xc2,0x01,0xdc,0x00,0x8e,0x00}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0x8d,0x00,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0x8c,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0x7b,0x00}},




	{ .i1 = { 0x64,0x00,0xdc,0x00,0x8b,0x00,0xf6,0x01}},




	{ .i1 = { 0xc2,0x01,0x64,0x00,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0x7c,0x00,0x64,0x00,0xc2,0x01}},




	{ .i1 = { 0xdc,0x00,0xc2,0x01,0xf6,0x01,0xdc,0x00}},




	{ .i1 = { 0x64,0x00,0xf6,0x01,0xc2,0x01,0x64,0x00}},




	{ .i1 = { 0xc2,0x01,0xc2,0x01,0xdc,0x00,0xc2,0x01}},




	{ .i1 = { 0xf6,0x01,0xc2,0x01,0x64,0x00}},
};
static data c02_a79d[] = { // yy_lookahead








	{ .i1 = { 0x57,0x01,0x59,0x03,0x5b,0x45,0x46,0x07}},








	{ .i1 = { 0x04,0x46,0x0a,0x51,0x0c,0x0d,0x0e,0x49}},








	{ .i1 = { 0x10,0x11,0x49,0x50,0x14,0x15,0x16,0x48}},








	{ .i1 = { 0x63,0x19,0x0b,0x1b,0x1c,0x1d,0x69,0x6a}},








	{ .i1 = { 0x5a,0x21,0x22,0x5a,0x24,0x21,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x49,0x21,0x11}},








	{ .i1 = { 0x12,0x62,0x21,0x22,0x59,0x17,0x18,0x0a}},








	{ .i1 = { 0x4a,0x49,0x29,0x3b,0x3c,0x3d,0x5a,0x3f}},








	{ .i1 = { 0x40,0x10,0x01,0x43,0x03,0x57,0x10,0x59}},








	{ .i1 = { 0x07,0x5b,0x5a,0x0a,0x5a,0x0c,0x0d,0x0e}},








	{ .i1 = { 0x41,0x10,0x11,0x78,0x79,0x14,0x15,0x16}},








	{ .i1 = { 0x3a,0x3b,0x19,0x59,0x1b,0x1c,0x1d,0x6d}},








	{ .i1 = { 0x04,0x4a,0x21,0x22,0x4d,0x24,0x4f,0x4a}},








	{ .i1 = { 0x27,0x28,0x29,0x2a,0x2b,0x2c,0x57,0x42}},








	{ .i1 = { 0x59,0x49,0x5b,0x56,0x57,0x44,0x59,0x21}},








	{ .i1 = { 0x5b,0x02,0x78,0x79,0x3b,0x3c,0x3d,0x21}},








	{ .i1 = { 0x3f,0x40,0x5a,0x01,0x43,0x03,0x0d,0x04}},








	{ .i1 = { 0x11,0x07,0x2e,0x2f,0x0a,0x16,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x0b,0x10,0x11,0x6b,0x6c,0x14,0x15}},








	{ .i1 = { 0x16,0x21,0x63,0x19,0x16,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x69,0x6a,0x4a,0x21,0x22,0x4a,0x24,0x2e}},








	{ .i1 = { 0x2f,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x57}},








	{ .i1 = { 0x2d,0x59,0x57,0x5b,0x59,0x63,0x5b,0x49}},








	{ .i1 = { 0x49,0x5e,0x5f,0x69,0x6a,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x0b,0x3f,0x40,0x00,0x01,0x43,0x03,0x51}},








	{ .i1 = { 0x5a,0x5a,0x07,0x16,0x74,0x75,0x76,0x0c}},








	{ .i1 = { 0x0d,0x0e,0x65,0x10,0x11,0x54,0x55,0x14}},








	{ .i1 = { 0x15,0x16,0x09,0x23,0x19,0x72,0x1b,0x1c}},








	{ .i1 = { 0x1d,0x58,0x59,0x4a,0x21,0x22,0x4a,0x24}},








	{ .i1 = { 0x10,0x11,0x27,0x28,0x29,0x2a,0x2b,0x2c}},








	{ .i1 = { 0x57,0x06,0x59,0x57,0x5b,0x59,0x25,0x5b}},








	{ .i1 = { 0x49,0x21,0x22,0x49,0x60,0x61,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x29,0x3f,0x40,0x48,0x01,0x43,0x03}},








	{ .i1 = { 0x6e,0x5a,0x10,0x07,0x5a,0x74,0x75,0x76}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x08,0x10,0x11,0x58,0x59}},








	{ .i1 = { 0x14,0x15,0x16,0x21,0x11,0x19,0x62,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x58,0x59,0x4a,0x21,0x22,0x4d}},








	{ .i1 = { 0x24,0x4f,0x4a,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x57,0x46,0x59,0x02,0x5b,0x11,0x57}},








	{ .i1 = { 0x06,0x59,0x21,0x5b,0x50,0x4a,0x59,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x41,0x3f,0x40,0x04,0x21,0x43}},








	{ .i1 = { 0x65,0x08,0x57,0x26,0x59,0x4a,0x5b,0x0e}},








	{ .i1 = { 0x4d,0x05,0x11,0x12,0x13,0x75,0x76,0x65}},








	{ .i1 = { 0x17,0x18,0x57,0x08,0x59,0x11,0x5b,0x4a}},








	{ .i1 = { 0x20,0x0e,0x4d,0x3e,0x11,0x12,0x13,0x6f}},








	{ .i1 = { 0x70,0x71,0x17,0x18,0x57,0x2d,0x59,0x6a}},








	{ .i1 = { 0x5b,0x30,0x31,0x32,0x33,0x34,0x35,0x36}},








	{ .i1 = { 0x37,0x38,0x39,0x3a,0x3b,0x6f,0x70,0x71}},








	{ .i1 = { 0x10,0x6b,0x6c,0x30,0x31,0x32,0x33,0x34}},








	{ .i1 = { 0x35,0x36,0x37,0x38,0x39,0x3a,0x3b,0x47}},








	{ .i1 = { 0x2e,0x2f,0x4a,0x4b,0x4c,0x4a,0x5c,0x08}},








	{ .i1 = { 0x11,0x5c,0x52,0x4a,0x20,0x16,0x4d,0x57}},








	{ .i1 = { 0x11,0x59,0x57,0x5b,0x59,0x5d,0x5b,0x48}},








	{ .i1 = { 0x57,0x2d,0x59,0x5c,0x5b,0x4a,0x66,0x67}},








	{ .i1 = { 0x68,0x48,0x47,0x11,0x48,0x4a,0x4b,0x4c}},








	{ .i1 = { 0x16,0x56,0x57,0x73,0x59,0x52,0x5b,0x77}},








	{ .i1 = { 0x04,0x62,0x57,0x46,0x59,0x46,0x5b,0x46}},








	{ .i1 = { 0x5d,0x3a,0x3b,0x47,0x64,0x11,0x4a,0x4b}},








	{ .i1 = { 0x4c,0x66,0x67,0x68,0x46,0x64,0x52,0x4a}},








	{ .i1 = { 0x64,0x46,0x4d,0x57,0x53,0x59,0x73,0x5b}},








	{ .i1 = { 0x4e,0x5d,0x77,0x46,0x57,0x4a,0x59,0x46}},








	{ .i1 = { 0x5b,0x1a,0x66,0x67,0x68,0x0e,0x0c,0x10}},








	{ .i1 = { 0x11,0x56,0x57,0x0a,0x59,0x4a,0x5b,0x73}},








	{ .i1 = { 0x4d,0x11,0x1b,0x77,0x06,0x06,0x1f,0x2d}},








	{ .i1 = { 0x21,0x22,0x57,0x24,0x59,0x16,0x5b,0x28}},








	{ .i1 = { 0x29,0x08,0x0e,0x0f,0x10,0x11,0x16,0x0e}},








	{ .i1 = { 0x1f,0x04,0x11,0x12,0x13,0x10,0x06,0x1b}},








	{ .i1 = { 0x17,0x18,0x3b,0x3c,0x3d,0x21,0x22,0x14}},








	{ .i1 = { 0x24,0x0a,0x43,0x04,0x28,0x29,0x41,0x06}},








	{ .i1 = { 0x19,0x16,0x19,0x16,0x2d,0x0e,0x04,0x10}},








	{ .i1 = { 0x11,0x06,0x04,0x29,0x10,0x4a,0x19,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x1b,0x3a,0x3b,0x4a,0x16,0x43}},








	{ .i1 = { 0x21,0x22,0x57,0x24,0x59,0x16,0x5b,0x28}},








	{ .i1 = { 0x29,0x56,0x57,0x09,0x59,0x02,0x5b,0x16}},








	{ .i1 = { 0x0e,0x21,0x10,0x11,0x16,0x41,0x02,0x04}},








	{ .i1 = { 0x4a,0x2d,0x3b,0x3c,0x3d,0x1b,0x16,0x1a}},








	{ .i1 = { 0x40,0x2f,0x43,0x21,0x22,0x57,0x24,0x59}},








	{ .i1 = { 0x16,0x5b,0x28,0x29,0x05,0x16,0x0d,0x61}},








	{ .i1 = { 0x0d,0x05,0x04,0x2d,0x10,0x0e,0x3b,0x10}},








	{ .i1 = { 0x11,0x21,0x10,0x16,0x7a,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x7a,0x7a,0x1b,0x7a,0x4a,0x43,0x7a,0x7a}},








	{ .i1 = { 0x21,0x22,0x04,0x24,0x7a,0x7a,0x08,0x28}},








	{ .i1 = { 0x29,0x57,0x7a,0x59,0x0e,0x5b,0x7a,0x11}},








	{ .i1 = { 0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x3b,0x3c,0x3d,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x43,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x4a,0x30,0x31}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x57,0x7a,0x59,0x7a,0x5b,0x08}},








	{ .i1 = { 0x7a,0x7a,0x5f,0x7a,0x7a,0x0e,0x7a,0x4a}},








	{ .i1 = { 0x11,0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18}},








	{ .i1 = { 0x7a,0x08,0x7a,0x7a,0x57,0x7a,0x59,0x0e}},








	{ .i1 = { 0x5b,0x7a,0x11,0x12,0x13,0x7a,0x7a,0x16}},








	{ .i1 = { 0x17,0x18,0x7a,0x7a,0x7a,0x7a,0x4a,0x30}},








	{ .i1 = { 0x31,0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x57,0x7a,0x59,0x7a,0x5b}},








	{ .i1 = { 0x41,0x30,0x31,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x38,0x39,0x3a,0x3b,0x02,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x08,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x0e,0x7a,0x7a,0x11,0x12,0x13,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x17,0x18,0x7a,0x08,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x4a,0x7a,0x0e,0x7a,0x7a,0x11,0x12}},








	{ .i1 = { 0x13,0x7a,0x7a,0x16,0x17,0x18,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x30,0x31,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x4a,0x38,0x39,0x3a,0x3b,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x30,0x31,0x57}},








	{ .i1 = { 0x7a,0x59,0x7a,0x5b,0x4a,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7a,0x7a,0x05,0x7a,0x7a,0x08,0x7a}},








	{ .i1 = { 0x56,0x57,0x7a,0x59,0x0e,0x5b,0x7a,0x11}},








	{ .i1 = { 0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18,0x05}},








	{ .i1 = { 0x7a,0x7a,0x08,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x0e,0x7a,0x7a,0x11,0x12,0x13,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x17,0x18,0x7a,0x7a,0x4a,0x30,0x31}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x57,0x7a,0x59,0x7a,0x5b,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x30,0x31,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x4a,0x38,0x39,0x3a,0x3b,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x0e,0x08,0x10,0x11,0x57,0x7a}},








	{ .i1 = { 0x59,0x0e,0x5b,0x7a,0x11,0x12,0x13,0x1b}},








	{ .i1 = { 0x7a,0x16,0x17,0x18,0x7a,0x21,0x22,0x7a}},








	{ .i1 = { 0x24,0x7a,0x7a,0x7a,0x28,0x29,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x30,0x31,0x7a,0x7a,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x7a,0x38,0x39,0x3a,0x3b,0x43}},








	{ .i1 = { 0x7a,0x7a,0x47,0x7a,0x7a,0x4a,0x4b,0x4c}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x7a,0x7a,0x52,0x7a,0x4a}},








	{ .i1 = { 0x7a,0x7a,0x57,0x7a,0x59,0x7a,0x5b,0x7a}},








	{ .i1 = { 0x5d,0x7a,0x7a,0x08,0x57,0x7a,0x59,0x7a}},








	{ .i1 = { 0x5b,0x0e,0x67,0x68,0x11,0x12,0x13,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x17,0x18,0x7a,0x08,0x73,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x77,0x0e,0x7a,0x7a,0x11,0x12}},








	{ .i1 = { 0x13,0x7a,0x7a,0x7a,0x17,0x18,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x30,0x31,0x7a,0x4a,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x7a,0x38,0x39,0x3a,0x3b,0x7a}},








	{ .i1 = { 0x7a,0x7a,0x56,0x57,0x7a,0x59,0x31,0x5b}},








	{ .i1 = { 0x4a,0x7a,0x7a,0x7a,0x7a,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x7a,0x7a,0x7a,0x7a,0x57,0x08,0x59}},








	{ .i1 = { 0x7a,0x5b,0x7a,0x4a,0x0e,0x7a,0x4a,0x11}},








	{ .i1 = { 0x12,0x13,0x7a,0x7a,0x7a,0x17,0x18,0x7a}},








	{ .i1 = { 0x57,0x4a,0x59,0x57,0x5b,0x59,0x4a,0x5b}},








	{ .i1 = { 0x7a,0x4a,0x7a,0x7a,0x7a,0x7a,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x57,0x7a,0x59,0x57,0x5b}},








	{ .i1 = { 0x59,0x4a,0x5b,0x7a,0x7a,0x7a,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x7a,0x7a,0x7a,0x4a,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x4a,0x7a,0x7a,0x7a,0x7a}},








	{ .i1 = { 0x7a,0x4a,0x57,0x7a,0x59,0x7a,0x5b,0x7a}},








	{ .i1 = { 0x57,0x4a,0x59,0x7a,0x5b,0x7a,0x57,0x4a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x7a,0x4a,0x7a,0x57,0x7a}},








	{ .i1 = { 0x59,0x4a,0x5b,0x7a,0x57,0x7a,0x59,0x4a}},








	{ .i1 = { 0x5b,0x57,0x4a,0x59,0x7a,0x5b,0x57,0x7a}},








	{ .i1 = { 0x59,0x4a,0x5b,0x7a,0x57,0x7a,0x59,0x57}},








	{ .i1 = { 0x5b,0x59,0x7a,0x5b,0x7a,0x7a,0x57,0x7a}},








	{ .i1 = { 0x59,0x7a,0x5b,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},

};
static data c02_a79e[] = { // yy_shift_ofst




	{ .i1 = { 0xc3,0x04,0x00,0x00,0x00,0x00,0x00,0x00}},




	{ .i1 = { 0x41,0x00,0x82,0x00,0xc3,0x00,0x04,0x01}},




	{ .i1 = { 0x04,0x01,0x04,0x01,0xdf,0x01,0xdf,0x01}},




	{ .i1 = { 0xfc,0x01,0xdf,0x01,0xfc,0x01,0x1f,0x02}},




	{ .i1 = { 0x9c,0x03,0x42,0x02,0xfc,0x01,0xfc,0x01}},




	{ .i1 = { 0xfc,0x01,0xfc,0x01,0xfc,0x01,0x67,0x02}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0x9c,0x03}},




	{ .i1 = { 0x9c,0x03,0x9c,0x03,0x9c,0x03,0xd8,0x00}},




	{ .i1 = { 0x11,0x00,0x11,0x00,0x31,0x00,0x0d,0x00}},




	{ .i1 = { 0x0d,0x00,0x36,0x00,0x36,0x00,0x25,0x01}},




	{ .i1 = { 0x25,0x01,0x25,0x01,0x25,0x01,0x25,0x01}},




	{ .i1 = { 0x25,0x01,0x25,0x01,0x25,0x01,0x25,0x01}},




	{ .i1 = { 0x04,0x00,0x2d,0x00,0xfa,0x00,0xfa,0x00}},




	{ .i1 = { 0xfa,0x00,0x56,0x00,0x5e,0x00,0x78,0x00}},




	{ .i1 = { 0x5e,0x00,0x5e,0x00,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xd1,0x00,0xd1,0x00,0x0f,0x00,0xb8,0x00}},




	{ .i1 = { 0xeb,0x00,0x19,0x01,0x01,0x01,0x01,0x01}},




	{ .i1 = { 0x36,0x00,0x70,0x01,0x70,0x01,0x5e,0x00}},




	{ .i1 = { 0x70,0x01,0x5e,0x00,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xc3,0x04,0xc3,0x04,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xc3,0x04,0xc3,0x04,0xc3,0x04,0xc3,0x04}},




	{ .i1 = { 0xc3,0x04,0xc3,0x04,0x41,0x01,0x53,0x01}},




	{ .i1 = { 0x86,0x02,0xbf,0x02,0xd1,0x02,0x0b,0x03}},




	{ .i1 = { 0x1d,0x03,0x56,0x03,0x6a,0x03,0x86,0x02}},




	{ .i1 = { 0xa3,0x03,0xf3,0x03,0xf3,0x03,0xf3,0x03}},




	{ .i1 = { 0xf3,0x03,0xf3,0x03,0xf3,0x03,0xf3,0x03}},




	{ .i1 = { 0xf3,0x03,0xf3,0x03,0xf3,0x03,0x05,0x04}},




	{ .i1 = { 0x3e,0x04,0x01,0x02,0x01,0x02,0x1e,0x00}},




	{ .i1 = { 0x1e,0x00,0x1e,0x00,0x8f,0x01,0x8f,0x01}},




	{ .i1 = { 0x8f,0x01,0x5c,0x00,0x79,0x00,0x77,0x00}},




	{ .i1 = { 0x62,0x01,0x40,0x01,0x7c,0x01,0x87,0x01}},




	{ .i1 = { 0x86,0x00,0xb5,0x00,0xa2,0x01,0xbc,0x01}},




	{ .i1 = { 0x4c,0x01,0x83,0x00,0x0b,0x01,0x0b,0x01}},




	{ .i1 = { 0x0b,0x01,0x0b,0x01,0x0b,0x01,0x0b,0x01}},




	{ .i1 = { 0x32,0x01,0xcf,0x01,0xe2,0x01,0xe9,0x01}},




	{ .i1 = { 0xf6,0x01,0xf7,0x01,0xe8,0x01,0xd2,0x01}},




	{ .i1 = { 0xef,0x01,0xf8,0x01,0xf1,0x01,0xe8,0x01}},




	{ .i1 = { 0x0d,0x02,0x05,0x02,0x10,0x02,0x0b,0x02}},




	{ .i1 = { 0x17,0x02,0xe5,0x01,0x0f,0x02,0x11,0x02}},




	{ .i1 = { 0x13,0x02,0x15,0x02,0xe8,0x01,0x21,0x02}},




	{ .i1 = { 0xff,0x01,0x2a,0x02,0x2b,0x02,0x2e,0x02}},




	{ .i1 = { 0x0a,0x02,0x24,0x02,0x1d,0x02,0x28,0x02}},




	{ .i1 = { 0x2f,0x02,0x4b,0x02,0x39,0x02,0x14,0x02}},




	{ .i1 = { 0x30,0x02,0x3e,0x02,0x54,0x02,0x53,0x02}},




	{ .i1 = { 0x2c,0x02,0x48,0x02,0x20,0x02,0x45,0x02}},




	{ .i1 = { 0x52,0x02,0x57,0x02,0x32,0x02,0x61,0x02}},




	{ .i1 = { 0x63,0x02,0x6c,0x02,0x6e,0x02,0x46,0x02}},




	{ .i1 = { 0x64,0x02,0x3b,0x02,0x58,0x02,0xe8,0x01}},



	{ .i1 = { 0x6a,0x02,0x65,0x02}},
};
static data c02_a79f[] = { // yy_reduce_ofst




	{ .i1 = { 0xc0,0xff,0x48,0x01,0x6b,0x01,0x84,0x01}},




	{ .i1 = { 0x9b,0x03,0x9b,0x03,0x9b,0x03,0x9b,0x03}},




	{ .i1 = { 0x9b,0x03,0x9b,0x03,0x58,0x00,0x99,0x00}},




	{ .i1 = { 0x17,0x00,0xe0,0x00,0xda,0x00,0x5b,0x00}},




	{ .i1 = { 0x9c,0x00,0x1d,0x00,0x03,0x01,0x15,0x01}},




	{ .i1 = { 0x51,0x01,0x8d,0x01,0xab,0x01,0x63,0x01}},




	{ .i1 = { 0x9b,0x01,0xf3,0x01,0x0e,0x02,0x0a,0x03}},




	{ .i1 = { 0x6b,0x02,0xdc,0x03,0xee,0xff,0xf3,0x00}},




	{ .i1 = { 0x4b,0x01,0xeb,0x01,0x3a,0x02,0x85,0x02}},




	{ .i1 = { 0xa4,0x02,0xdf,0x02,0xf8,0x02,0x3b,0x03}},




	{ .i1 = { 0x57,0x03,0xa5,0x03,0xee,0x03,0x01,0x04}},




	{ .i1 = { 0x04,0x04,0x0f,0x04,0x14,0x04,0x17,0x04}},




	{ .i1 = { 0x27,0x04,0x33,0x04,0x39,0x04,0x3f,0x04}},




	{ .i1 = { 0x47,0x04,0x4d,0x04,0x52,0x04,0x57,0x04}},




	{ .i1 = { 0x5d,0x04,0x60,0x04,0x67,0x04,0xa9,0xff}},




	{ .i1 = { 0xdb,0xff,0x02,0x00,0xb5,0xff,0xf8,0x00}},




	{ .i1 = { 0x0e,0x01,0x37,0x00,0x52,0x00,0xc6,0xff}},




	{ .i1 = { 0xc9,0xff,0xe4,0xff,0xf0,0xff,0x28,0x00}},




	{ .i1 = { 0x6e,0x00,0x6f,0x00,0xaf,0x00,0xb2,0x00}},




	{ .i1 = { 0x29,0x00,0x81,0x00,0x89,0x00,0xbe,0x00}},




	{ .i1 = { 0xca,0x00,0xf2,0xff,0xcf,0xff,0x16,0x01}},




	{ .i1 = { 0xbc,0x00,0x5f,0x01,0xc3,0xff,0xec,0x00}},




	{ .i1 = { 0xba,0xff,0x76,0x00,0x6d,0x00,0x6b,0x00}},




	{ .i1 = { 0x9a,0x00,0xe5,0x00,0xe3,0x00,0xf2,0x00}},




	{ .i1 = { 0x05,0x01,0x3a,0x01,0x3d,0x01,0x69,0x01}},




	{ .i1 = { 0x4f,0x01,0x6c,0x01,0x7d,0x01,0x7f,0x01}},




	{ .i1 = { 0x68,0x01,0x81,0x01,0x71,0x01,0x8e,0x01}},




	{ .i1 = { 0x74,0x01,0x93,0x01,0x89,0x01,0x92,0x01}},



	{ .i1 = { 0x9d,0x01,0xa1,0x01}},
};
static data c02_a7a0[] = { // yy_default




	{ .i1 = { 0x38,0x02,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0x3c,0x02}},




	{ .i1 = { 0x40,0x02,0xd1,0x01,0x4b,0x02,0x4b,0x02}},




	{ .i1 = { 0xc0,0x01,0x4b,0x02,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x2e,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x20,0x02,0x47,0x02}},




	{ .i1 = { 0x47,0x02,0x20,0x02,0x20,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x38,0x02,0x38,0x02}},




	{ .i1 = { 0x3b,0x02,0x3b,0x02,0xc0,0x01,0x2a,0x02}},




	{ .i1 = { 0x46,0x02,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x38,0x02,0x38,0x02}},




	{ .i1 = { 0x45,0x02,0x38,0x02,0x45,0x02,0x38,0x02}},




	{ .i1 = { 0x45,0x02,0x38,0x02,0x3e,0x02,0xcf,0x01}},




	{ .i1 = { 0x38,0x02,0x38,0x02,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0x15,0x02,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0x2f,0x02,0x15,0x02,0xdf,0x01}},




	{ .i1 = { 0xde,0x01,0xdd,0x01,0xdc,0x01,0xdb,0x01}},




	{ .i1 = { 0xda,0x01,0x11,0x02,0xfb,0x01,0xec,0x01}},




	{ .i1 = { 0xea,0x01,0xee,0x01,0xed,0x01,0xe5,0x01}},




	{ .i1 = { 0xe6,0x01,0xe3,0x01,0xe7,0x01,0xe9,0x01}},




	{ .i1 = { 0xe8,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xd0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xf3,0x01,0xf2,0x01}},




	{ .i1 = { 0xf1,0x01,0xf0,0x01,0xeb,0x01,0xe4,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x17,0x02,0x4c,0x02}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0x28,0x02}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x25,0x02,0xc0,0x01}},




	{ .i1 = { 0x23,0x02,0xc0,0x01,0x1d,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0x09,0x02,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0x14,0x02}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xd8,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xc0,0x01}},




	{ .i1 = { 0xc0,0x01,0xc0,0x01,0xc0,0x01,0xef,0x01}},



	{ .i1 = { 0xe2,0x01,0xc0,0x01}},
};
const i1 c02_s0188[] = { 0x24,0 };
const i1 c02_s0189[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s018a[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s018b[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s018c[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s018d[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s018e[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s018f[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0190[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0191[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0192[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s0193[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s0194[] = { 0x49,0x46,0 };
const i1 c02_s0195[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s0196[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s0197[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s0198[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0199[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s019a[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s019b[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s019c[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s019d[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s019e[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s019f[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s01a0[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s01a1[] = { 0x53,0x55,0x42,0 };
const i1 c02_s01a2[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s01a3[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s01a4[] = { 0x56,0x41,0x52,0 };
const i1 c02_s01a5[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s01a6[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s01a7[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s01a8[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s01a9[] = { 0x49,0x44,0 };
const i1 c02_s01aa[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s01ab[] = { 0x41,0x54,0 };
const i1 c02_s01ac[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s01ad[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s01ae[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s01af[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s01b0[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s01b1[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s01b2[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s01b3[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s01b4[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s01b5[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s01b6[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s01b7[] = { 0x4f,0x52,0 };
const i1 c02_s01b8[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s01b9[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s01ba[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s01bb[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s01bc[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s01bd[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s01be[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s01bf[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s01c0[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01c1[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01c2[] = { 0x41,0x53,0 };
const i1 c02_s01c3[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s01c4[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s01c5[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s01c6[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s01c7[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s01c8[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s01c9[] = { 0x49,0x53,0 };
const i1 c02_s01ca[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s01cb[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s01cc[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data c02_a7a1[] = { // yyTokenName

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

	{ .ptr = (void*)c02_s01c4 },

	{ .ptr = (void*)c02_s01c5 },

	{ .ptr = (void*)c02_s01c6 },

	{ .ptr = (void*)c02_s01c7 },

	{ .ptr = (void*)c02_s01c8 },

	{ .ptr = (void*)c02_s01c9 },

	{ .ptr = (void*)c02_s01ca },

	{ .ptr = (void*)c02_s01cb },

	{ .ptr = (void*)c02_s01cc },

};
const i1 c02_s01cd[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f32_Free(i8 /* block */);

// token_destructor workspace at ws+3072 length ws+0
void f492_token_destructor(void) {

	i8 v10268 = (i8)(intptr_t)(ws+3056);
	i1 v10269 = *(i1*)(intptr_t)v10268;
	i1 v10270 = (i1)+41;
	if (v10269==v10270) goto c02_07a7; else goto c02_07a9;

c02_07a9:;

	i8 v10271 = (i8)(intptr_t)(ws+3056);
	i1 v10272 = *(i1*)(intptr_t)v10271;
	i1 v10273 = (i1)+33;
	if (v10272==v10273) goto c02_07a7; else goto c02_07a8;

c02_07a7:;

	i8 v10274 = (i8)(intptr_t)c02_s01cd;
	i8 v10275 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10275)(v10274);

	i8 v10276 = (i8)(intptr_t)(ws+3064);
	i8 v10277 = *(i8*)(intptr_t)v10276;
	i8 v10278 = *(i8*)(intptr_t)v10277;
	i8 v10279 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10279)(v10278);

	goto c02_07a2;

c02_07a8:;

c02_07a2:;

endsub:;
}
	void f492_token_destructor(void);

// yy_destructor workspace at ws+3056 length ws+16
void f491_yy_destructor(i8 p10266 /* yypminor */, i1 p10267 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3056) = p10267; /*yymajor */
	*(i8*)(intptr_t)(ws+3064) = p10266; /*yypminor */


	i8 v10280 = (i8)(intptr_t)(ws+3056);
	i1 v10281 = *(i1*)(intptr_t)v10280;
	i1 v10282 = (i1)+0;
	if (v10281==v10282) goto c02_07b0; else goto c02_07b1;

c02_07b1:;

	i8 v10283 = (i8)(intptr_t)(ws+3056);
	i1 v10284 = *(i1*)(intptr_t)v10283;
	i1 v10285 = (i1)+69;
	if (v10284<v10285) goto c02_07af; else goto c02_07b0;

c02_07af:;

	i8 v10286 = (i8)(intptr_t)(f492_token_destructor);

	((void(*)(void))(intptr_t)v10286)();

	goto c02_07aa;

c02_07b0:;

c02_07aa:;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3008 length ws+0
void f493_yy_pop_parser_stack(void) {

	i8 v10287 = (i8)(intptr_t)(ws+1248);
	i8 v10288 = *(i8*)(intptr_t)v10287;
	i8 v10289 = v10288+(-16);
	i8 v10290 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v10290 = v10289;

	i8 v10291 = (i8)(intptr_t)(ws+1248);
	i8 v10292 = *(i8*)(intptr_t)v10291;
	i8 v10293 = v10292+(+2);
	i1 v10294 = *(i1*)(intptr_t)v10293;
	i8 v10295 = (i8)(intptr_t)(ws+1248);
	i8 v10296 = *(i8*)(intptr_t)v10295;
	i8 v10297 = v10296+(+8);
	i8 v10298 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10298)(v10297, v10294);

endsub:;
}
	void f493_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3008 length ws+0
void f494_yy_pop_all_parser_stack(void) {

c02_07b4:;

	i8 v10299 = (i8)(intptr_t)(ws+1248);
	i8 v10300 = *(i8*)(intptr_t)v10299;
	i8 v10301 = (i8)(intptr_t)(ws+1256);
	if (v10300==v10301) goto c02_07b7; else goto c02_07b6;

c02_07b6:;

	i8 v10302 = (i8)(intptr_t)(f493_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10302)();

	goto c02_07b4;

c02_07b7:;

endsub:;
}
	void f494_yy_pop_all_parser_stack(void);
	void f59_StartError(void);
const i1 c02_s01ce[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// yy_stack_overflow workspace at ws+3008 length ws+0
void f495_yy_stack_overflow(void) {

	i8 v10303 = (i8)(intptr_t)(f494_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v10303)();

	i8 v10304 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10304)();

	i8 v10305 = (i8)(intptr_t)c02_s01ce;
	i8 v10306 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10306)(v10305);

	i8 v10307 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10307)();

endsub:;
}
static data c02_a7b8[] = { // yyRuleInfoLhs








	{ .i1 = { 0x47,0x47,0x47,0x47,0x47,0x47,0x4b,0x47}},








	{ .i1 = { 0x4c,0x47,0x47,0x47,0x4e,0x4f,0x50,0x47}},








	{ .i1 = { 0x52,0x55,0x55,0x4d,0x4d,0x4d,0x4d,0x4d}},








	{ .i1 = { 0x4d,0x4d,0x4d,0x4d,0x4d,0x57,0x57,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x57,0x57,0x4a,0x4a,0x57}},








	{ .i1 = { 0x56,0x47,0x49,0x49,0x49,0x49,0x49,0x49}},








	{ .i1 = { 0x47,0x48,0x59,0x5a,0x58,0x58,0x4a,0x47}},








	{ .i1 = { 0x47,0x5b,0x5c,0x5c,0x5e,0x5e,0x5f,0x5d}},








	{ .i1 = { 0x60,0x60,0x61,0x47,0x68,0x64,0x62,0x67}},








	{ .i1 = { 0x65,0x66,0x63,0x63,0x69,0x69,0x6a,0x6a}},








	{ .i1 = { 0x6b,0x6b,0x6c,0x47,0x6d,0x6e,0x70,0x72}},








	{ .i1 = { 0x72,0x71,0x47,0x73,0x75,0x75,0x76,0x47}},








	{ .i1 = { 0x77,0x79,0x79,0x79,0x45,0x46,0x46,0x47}},








	{ .i1 = { 0x51,0x51,0x51,0x53,0x53,0x54,0x47,0x47}},








	{ .i1 = { 0x47,0x47,0x64,0x6e,0x6f,0x6f,0x74,0x74}},




	{ .i1 = { 0x75,0x78,0x78}},
};
static data c02_a7b9[] = { // yyRuleInfoNRhs








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x03,0x02,0x02,0x08,0x00,0x01,0x01,0x05}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x02,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x01,0x03,0x01}},








	{ .i1 = { 0x02,0x02,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x02,0x03,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x01,0x03,0x04,0x03,0x01}},








	{ .i1 = { 0x01,0x05,0x06,0x01,0x03,0x04,0x03,0x02}},








	{ .i1 = { 0x05,0x01,0x01,0x01,0x01,0x03,0x02,0x03}},








	{ .i1 = { 0x05,0x01,0x03,0x02,0x01,0x03,0x01,0x05}},








	{ .i1 = { 0x01,0x03,0x01,0x05,0x04,0x05,0x01,0x03}},








	{ .i1 = { 0x01,0x02,0x01,0x03,0x01,0x00,0x02,0x03}},








	{ .i1 = { 0x01,0x03,0x03,0x07,0x01,0x02,0x05,0x00}},








	{ .i1 = { 0x04,0x01,0x05,0x05,0x01,0x03,0x01,0x03}},








	{ .i1 = { 0x01,0x01,0x01,0x01,0x01,0x00,0x02,0x01}},








	{ .i1 = { 0x00,0x02,0x05,0x00,0x02,0x02,0x08,0x06}},








	{ .i1 = { 0x05,0x05,0x00,0x00,0x00,0x02,0x01,0x03}},




	{ .i1 = { 0x00,0x01,0x03}},
};
	void f495_yy_stack_overflow(void);

// Reducer workspace at ws+3008 length ws+0
void f498_Reducer(void) {

endsub:;
}
	void f99_MidReturn(i8* /* m */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3008 length ws+0
void f499_reduce_0(void) {

	i8 v10373 = (i8)(intptr_t)(f99_MidReturn);
	i8 v10374;

	((void(*)(i8* /* m */))(intptr_t)v10373)(&v10374);
	i8 v10375 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10375)(v10374);

	i1 v10376 = (i1)+22;
	i8 v10377 = (i8)(intptr_t)(ws+2928);
	i8 v10378 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10378)(v10377, v10376);

endsub:;
}
	void f451_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3008 length ws+0
void f500_reduce_1(void) {

	i1 v10379 = (i1)+28;
	i8 v10380 = (i8)(intptr_t)(ws+2952);
	i8 v10381 = *(i8*)(intptr_t)v10380;
	i8 v10382 = v10381+(+46);
	*(i1*)(intptr_t)v10382 = v10379;

	i8 v10383 = (i8)(intptr_t)(ws+40);
	i8 v10384 = *(i8*)(intptr_t)v10383;
	i8 v10385 = (i8)(intptr_t)(ws+2952);
	i8 v10386 = *(i8*)(intptr_t)v10385;
	i8 v10387 = (i8)(intptr_t)(ws+2936);
	i8 v10388 = *(i8*)(intptr_t)v10387;
	i8 v10389 = (i8)(intptr_t)(f451_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10389)(v10388, v10386, v10384);

	i1 v10390 = (i1)+6;
	i8 v10391 = (i8)(intptr_t)(ws+2944);
	i8 v10392 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10392)(v10391, v10390);

	i1 v10393 = (i1)+22;
	i8 v10394 = (i8)(intptr_t)(ws+2928);
	i8 v10395 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10395)(v10394, v10393);

endsub:;
}
	void f451_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f143_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f132_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3008 length ws+0
void f501_reduce_2(void) {

	i1 v10396 = (i1)+28;
	i8 v10397 = (i8)(intptr_t)(ws+2968);
	i8 v10398 = *(i8*)(intptr_t)v10397;
	i8 v10399 = v10398+(+46);
	*(i1*)(intptr_t)v10399 = v10396;

	i8 v10400 = (i8)(intptr_t)(ws+40);
	i8 v10401 = *(i8*)(intptr_t)v10400;
	i8 v10402 = (i8)(intptr_t)(ws+2968);
	i8 v10403 = *(i8*)(intptr_t)v10402;
	i8 v10404 = (i8)(intptr_t)(ws+2952);
	i8 v10405 = *(i8*)(intptr_t)v10404;
	i8 v10406 = (i8)(intptr_t)(f451_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10406)(v10405, v10403, v10401);

	i8 v10407 = (i8)(intptr_t)(ws+2936);
	i8 v10408 = *(i8*)(intptr_t)v10407;
	i8 v10409 = (i8)(intptr_t)(ws+2968);
	i8 v10410 = *(i8*)(intptr_t)v10409;
	i8 v10411 = *(i8*)(intptr_t)v10410;
	i8 v10412 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10412)(v10411, v10408);

	i8 v10413 = (i8)(intptr_t)(ws+2936);
	i8 v10414 = *(i8*)(intptr_t)v10413;
	i8 v10415 = v10414+(+16);
	i8 v10416 = *(i8*)(intptr_t)v10415;
	i8 v10417 = v10416+(+42);
	i2 v10418 = *(i2*)(intptr_t)v10417;
	i1 v10419 = v10418;
	i8 v10420 = (i8)(intptr_t)(ws+2936);
	i8 v10421 = *(i8*)(intptr_t)v10420;
	i8 v10422 = (i8)(intptr_t)(ws+2968);
	i8 v10423 = *(i8*)(intptr_t)v10422;
	i2 v10424 = (i2)+0;
	i8 v10425 = (i8)(intptr_t)(f143_MidAddress);
	i8 v10426;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10425)(&v10426, v10424, v10423);
	i8 v10427 = (i8)(intptr_t)(f132_MidStore);
	i8 v10428;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10427)(&v10428, v10426, v10421, v10419);
	i8 v10429 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10429)(v10428);

	i1 v10430 = (i1)+6;
	i8 v10431 = (i8)(intptr_t)(ws+2960);
	i8 v10432 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10432)(v10431, v10430);

	i1 v10433 = (i1)+2;
	i8 v10434 = (i8)(intptr_t)(ws+2944);
	i8 v10435 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10435)(v10434, v10433);

	i1 v10436 = (i1)+22;
	i8 v10437 = (i8)(intptr_t)(ws+2928);
	i8 v10438 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10438)(v10437, v10436);

endsub:;
}
const i1 c02_s01d1[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f209_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s01d2[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f451_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f143_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f132_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3008 length ws+8
void f502_reduce_3(void) {

	i8 v10439 = (i8)(intptr_t)(ws+2936);
	i8 v10440 = *(i8*)(intptr_t)v10439;
	i8 v10441 = v10440+(+16);
	i8 v10442 = *(i8*)(intptr_t)v10441;
	i8 v10443 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10443 = v10442;

	i8 v10444 = (i8)(intptr_t)(ws+3008);
	i8 v10445 = *(i8*)(intptr_t)v10444;
	i8 v10446 = (i8)+0;
	if (v10445==v10446) goto c02_07c8; else goto c02_07c9;

c02_07c8:;

	i8 v10447 = (i8)(intptr_t)c02_s01d1;
	i8 v10448 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10448)(v10447);

	goto c02_07c5;

c02_07c9:;

c02_07c5:;

	i8 v10449 = (i8)(intptr_t)(ws+3008);
	i8 v10450 = *(i8*)(intptr_t)v10449;
	i8 v10451 = (i8)(intptr_t)(f209_IsScalar);
	i1 v10452;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10451)(&v10452, v10450);
	i1 v10453 = (i1)+0;
	if (v10452==v10453) goto c02_07cd; else goto c02_07ce;

c02_07cd:;

	i8 v10454 = (i8)(intptr_t)c02_s01d2;
	i8 v10455 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10455)(v10454);

	goto c02_07ca;

c02_07ce:;

c02_07ca:;

	i1 v10456 = (i1)+28;
	i8 v10457 = (i8)(intptr_t)(ws+2952);
	i8 v10458 = *(i8*)(intptr_t)v10457;
	i8 v10459 = v10458+(+46);
	*(i1*)(intptr_t)v10459 = v10456;

	i8 v10460 = (i8)(intptr_t)(ws+40);
	i8 v10461 = *(i8*)(intptr_t)v10460;
	i8 v10462 = (i8)(intptr_t)(ws+2952);
	i8 v10463 = *(i8*)(intptr_t)v10462;
	i8 v10464 = (i8)(intptr_t)(ws+3008);
	i8 v10465 = *(i8*)(intptr_t)v10464;
	i8 v10466 = (i8)(intptr_t)(f451_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10466)(v10465, v10463, v10461);

	i8 v10467 = (i8)(intptr_t)(ws+2936);
	i8 v10468 = *(i8*)(intptr_t)v10467;
	i8 v10469 = (i8)(intptr_t)(ws+2952);
	i8 v10470 = *(i8*)(intptr_t)v10469;
	i8 v10471 = *(i8*)(intptr_t)v10470;
	i8 v10472 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10472)(v10471, v10468);

	i8 v10473 = (i8)(intptr_t)(ws+2936);
	i8 v10474 = *(i8*)(intptr_t)v10473;
	i8 v10475 = v10474+(+16);
	i8 v10476 = *(i8*)(intptr_t)v10475;
	i8 v10477 = v10476+(+42);
	i2 v10478 = *(i2*)(intptr_t)v10477;
	i1 v10479 = v10478;
	i8 v10480 = (i8)(intptr_t)(ws+2936);
	i8 v10481 = *(i8*)(intptr_t)v10480;
	i8 v10482 = (i8)(intptr_t)(ws+2952);
	i8 v10483 = *(i8*)(intptr_t)v10482;
	i2 v10484 = (i2)+0;
	i8 v10485 = (i8)(intptr_t)(f143_MidAddress);
	i8 v10486;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10485)(&v10486, v10484, v10483);
	i8 v10487 = (i8)(intptr_t)(f132_MidStore);
	i8 v10488;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10487)(&v10488, v10486, v10481, v10479);
	i8 v10489 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10489)(v10488);

	i1 v10490 = (i1)+2;
	i8 v10491 = (i8)(intptr_t)(ws+2944);
	i8 v10492 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10492)(v10491, v10490);

	i1 v10493 = (i1)+22;
	i8 v10494 = (i8)(intptr_t)(ws+2928);
	i8 v10495 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10495)(v10494, v10493);

endsub:;
}
	void f212_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f132_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3008 length ws+16
void f503_reduce_4(void) {

	i8 v10496 = (i8)(intptr_t)(ws+2952);
	i8 v10497 = *(i8*)(intptr_t)v10496;
	i8 v10498 = v10497+(+16);
	i8 v10499 = *(i8*)(intptr_t)v10498;
	i8 v10500 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10500 = v10499;

	i8 v10501 = (i8)(intptr_t)(ws+2952);
	i8 v10502 = *(i8*)(intptr_t)v10501;
	i8 v10503 = (i8)(intptr_t)(f212_UndoLValue);
	i8 v10504;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v10503)(&v10504, v10502);
	i8 v10505 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10505 = v10504;

	i8 v10506 = (i8)(intptr_t)(ws+2936);
	i8 v10507 = *(i8*)(intptr_t)v10506;
	i8 v10508 = (i8)(intptr_t)(ws+3008);
	i8 v10509 = *(i8*)(intptr_t)v10508;
	i8 v10510 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10510)(v10509, v10507);

	i8 v10511 = (i8)(intptr_t)(ws+3008);
	i8 v10512 = *(i8*)(intptr_t)v10511;
	i8 v10513 = v10512+(+42);
	i2 v10514 = *(i2*)(intptr_t)v10513;
	i1 v10515 = v10514;
	i8 v10516 = (i8)(intptr_t)(ws+2936);
	i8 v10517 = *(i8*)(intptr_t)v10516;
	i8 v10518 = (i8)(intptr_t)(ws+3016);
	i8 v10519 = *(i8*)(intptr_t)v10518;
	i8 v10520 = (i8)(intptr_t)(f132_MidStore);
	i8 v10521;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10520)(&v10521, v10519, v10517, v10515);
	i8 v10522 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10522)(v10521);

	i1 v10523 = (i1)+2;
	i8 v10524 = (i8)(intptr_t)(ws+2944);
	i8 v10525 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10525)(v10524, v10523);

	i1 v10526 = (i1)+22;
	i8 v10527 = (i8)(intptr_t)(ws+2928);
	i8 v10528 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10528)(v10527, v10526);

endsub:;
}
	void f476_TerminateNormalLoop(i8 /* ll */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3008 length ws+0
void f504_reduce_5(void) {

	i8 v10529 = (i8)(intptr_t)(ws+2952);
	i8 v10530 = *(i8*)(intptr_t)v10529;
	i8 v10531 = (i8)(intptr_t)(f476_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v10531)(v10530);

	i1 v10532 = (i1)+10;
	i8 v10533 = (i8)(intptr_t)(ws+2936);
	i8 v10534 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10534)(v10533, v10532);

	i1 v10535 = (i1)+13;
	i8 v10536 = (i8)(intptr_t)(ws+2928);
	i8 v10537 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10537)(v10536, v10535);

endsub:;
}
	void f475_BeginNormalLoop(i8* /* ll */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3008 length ws+0
void f505_reduce_6(void) {

	i8 v10538 = (i8)(intptr_t)(f475_BeginNormalLoop);
	i8 v10539;

	((void(*)(i8* /* ll */))(intptr_t)v10538)(&v10539);
	i8 v10540 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10540 = v10539;

	i8 v10541 = (i8)(intptr_t)(ws+54);
	i2 v10542 = *(i2*)(intptr_t)v10541;
	i8 v10543 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10544;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10543)(&v10544, v10542);
	i8 v10545 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10545)(v10544);

endsub:;
}
	void f476_TerminateNormalLoop(i8 /* ll */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3008 length ws+0
void f506_reduce_7(void) {

	i8 v10546 = (i8)(intptr_t)(ws+2952);
	i8 v10547 = *(i8*)(intptr_t)v10546;
	i8 v10548 = (i8)(intptr_t)(f476_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v10548)(v10547);

	i1 v10549 = (i1)+10;
	i8 v10550 = (i8)(intptr_t)(ws+2936);
	i8 v10551 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10551)(v10550, v10549);

	i1 v10552 = (i1)+13;
	i8 v10553 = (i8)(intptr_t)(ws+2928);
	i8 v10554 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10554)(v10553, v10552);

endsub:;
}
	void f475_BeginNormalLoop(i8* /* ll */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f214_AllocLabel(i2* /* label */);
	void f214_AllocLabel(i2* /* label */);
	void f449_GenerateConditional(i8 /* rootnode */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3008 length ws+2
void f507_reduce_8(void) {

	i8 v10555 = (i8)(intptr_t)(f475_BeginNormalLoop);
	i8 v10556;

	((void(*)(i8* /* ll */))(intptr_t)v10555)(&v10556);
	i8 v10557 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10557 = v10556;

	i8 v10558 = (i8)(intptr_t)(ws+54);
	i2 v10559 = *(i2*)(intptr_t)v10558;
	i8 v10560 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10561;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10560)(&v10561, v10559);
	i8 v10562 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10562)(v10561);

	i8 v10563 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10564;

	((void(*)(i2* /* label */))(intptr_t)v10563)(&v10564);
	i8 v10565 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v10565 = v10564;

	i8 v10566 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10567;

	((void(*)(i2* /* label */))(intptr_t)v10566)(&v10567);
	i8 v10568 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10568 = v10567;

	i8 v10569 = (i8)(intptr_t)(ws+3008);
	i2 v10570 = *(i2*)(intptr_t)v10569;
	i8 v10571 = (i8)(intptr_t)(ws+2936);
	i8 v10572 = *(i8*)(intptr_t)v10571;
	*(i2*)(intptr_t)v10572 = v10570;

	i8 v10573 = (i8)(intptr_t)(ws+52);
	i2 v10574 = *(i2*)(intptr_t)v10573;
	i8 v10575 = (i8)(intptr_t)(ws+2936);
	i8 v10576 = *(i8*)(intptr_t)v10575;
	i8 v10577 = v10576+(+2);
	*(i2*)(intptr_t)v10577 = v10574;

	i8 v10578 = (i8)(intptr_t)(ws+3008);
	i2 v10579 = *(i2*)(intptr_t)v10578;
	i8 v10580 = (i8)(intptr_t)(ws+2936);
	i8 v10581 = *(i8*)(intptr_t)v10580;
	i8 v10582 = v10581+(+4);
	*(i2*)(intptr_t)v10582 = v10579;

	i8 v10583 = (i8)(intptr_t)(ws+2936);
	i8 v10584 = *(i8*)(intptr_t)v10583;
	i8 v10585 = (i8)(intptr_t)(f449_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v10585)(v10584);

	i8 v10586 = (i8)(intptr_t)(ws+52);
	i2 v10587 = *(i2*)(intptr_t)v10586;
	i8 v10588 = (i8)(intptr_t)(ws+2920);
	i8 v10589 = *(i8*)(intptr_t)v10588;
	i8 v10590 = v10589+(+2);
	*(i2*)(intptr_t)v10590 = v10587;

	i1 v10591 = (i1)+13;
	i8 v10592 = (i8)(intptr_t)(ws+2928);
	i8 v10593 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10593)(v10592, v10591);

endsub:;
}
const i1 c02_s01d3[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f61_SimpleError(i8 /* message */);
	void f110_MidJump(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3008 length ws+0
void f508_reduce_9(void) {

	i8 v10594 = (i8)(intptr_t)(ws+52);
	i2 v10595 = *(i2*)(intptr_t)v10594;
	i2 v10596 = (i2)+0;
	if (v10595==v10596) goto c02_07d2; else goto c02_07d3;

c02_07d2:;

	i8 v10597 = (i8)(intptr_t)c02_s01d3;
	i8 v10598 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10598)(v10597);

	goto c02_07cf;

c02_07d3:;

c02_07cf:;

	i8 v10599 = (i8)(intptr_t)(ws+52);
	i2 v10600 = *(i2*)(intptr_t)v10599;
	i8 v10601 = (i8)(intptr_t)(f110_MidJump);
	i8 v10602;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10601)(&v10602, v10600);
	i8 v10603 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10603)(v10602);

	i1 v10604 = (i1)+22;
	i8 v10605 = (i8)(intptr_t)(ws+2928);
	i8 v10606 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10606)(v10605, v10604);

endsub:;
}
const i1 c02_s01d4[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f61_SimpleError(i8 /* message */);
	void f110_MidJump(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3008 length ws+0
void f509_reduce_10(void) {

	i8 v10607 = (i8)(intptr_t)(ws+54);
	i2 v10608 = *(i2*)(intptr_t)v10607;
	i2 v10609 = (i2)+0;
	if (v10608==v10609) goto c02_07d7; else goto c02_07d8;

c02_07d7:;

	i8 v10610 = (i8)(intptr_t)c02_s01d4;
	i8 v10611 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10611)(v10610);

	goto c02_07d4;

c02_07d8:;

c02_07d4:;

	i8 v10612 = (i8)(intptr_t)(ws+54);
	i2 v10613 = *(i2*)(intptr_t)v10612;
	i8 v10614 = (i8)(intptr_t)(f110_MidJump);
	i8 v10615;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10614)(&v10615, v10613);
	i8 v10616 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10616)(v10615);

	i1 v10617 = (i1)+22;
	i8 v10618 = (i8)(intptr_t)(ws+2928);
	i8 v10619 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10619)(v10618, v10617);

endsub:;
}
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3008 length ws+8
void f510_reduce_11(void) {

	i8 v10620 = (i8)(intptr_t)(ws+56);
	i8 v10621 = *(i8*)(intptr_t)v10620;
	i2 v10622 = *(i2*)(intptr_t)v10621;
	i8 v10623 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10624;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10623)(&v10624, v10622);
	i8 v10625 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10625)(v10624);

	i8 v10626 = (i8)(intptr_t)(ws+56);
	i8 v10627 = *(i8*)(intptr_t)v10626;
	i8 v10628 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10628 = v10627;

	i8 v10629 = (i8)(intptr_t)(ws+56);
	i8 v10630 = *(i8*)(intptr_t)v10629;
	i8 v10631 = v10630+(+8);
	i8 v10632 = *(i8*)(intptr_t)v10631;
	i8 v10633 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v10633 = v10632;

	i8 v10634 = (i8)(intptr_t)(ws+3008);
	i8 v10635 = *(i8*)(intptr_t)v10634;
	i8 v10636 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10636)(v10635);

	i1 v10637 = (i1)+26;
	i8 v10638 = (i8)(intptr_t)(ws+2960);
	i8 v10639 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10639)(v10638, v10637);

	i1 v10640 = (i1)+10;
	i8 v10641 = (i8)(intptr_t)(ws+2936);
	i8 v10642 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10642)(v10641, v10640);

	i1 v10643 = (i1)+12;
	i8 v10644 = (i8)(intptr_t)(ws+2928);
	i8 v10645 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10645)(v10644, v10643);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f214_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3008 length ws+8
void f511_reduce_12(void) {

	i8 v10646 = (i8)+16;
	i8 v10647 = (i8)(intptr_t)(f31_Alloc);
	i8 v10648;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10647)(&v10648, v10646);
	i8 v10649 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10649 = v10648;

	i8 v10650 = (i8)(intptr_t)(ws+56);
	i8 v10651 = *(i8*)(intptr_t)v10650;
	i8 v10652 = (i8)(intptr_t)(ws+3008);
	i8 v10653 = *(i8*)(intptr_t)v10652;
	i8 v10654 = v10653+(+8);
	*(i8*)(intptr_t)v10654 = v10651;

	i8 v10655 = (i8)(intptr_t)(ws+3008);
	i8 v10656 = *(i8*)(intptr_t)v10655;
	i8 v10657 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v10657 = v10656;

	i8 v10658 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10659;

	((void(*)(i2* /* label */))(intptr_t)v10658)(&v10659);
	i8 v10660 = (i8)(intptr_t)(ws+56);
	i8 v10661 = *(i8*)(intptr_t)v10660;
	*(i2*)(intptr_t)v10661 = v10659;

endsub:;
}
	void f214_AllocLabel(i2* /* label */);
	void f214_AllocLabel(i2* /* label */);
	void f449_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3008 length ws+4
void f512_reduce_13(void) {

	i8 v10662 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10663;

	((void(*)(i2* /* label */))(intptr_t)v10662)(&v10663);
	i8 v10664 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v10664 = v10663;

	i8 v10665 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10666;

	((void(*)(i2* /* label */))(intptr_t)v10665)(&v10666);
	i8 v10667 = (i8)(intptr_t)(ws+3010);
	*(i2*)(intptr_t)v10667 = v10666;

	i8 v10668 = (i8)(intptr_t)(ws+3008);
	i2 v10669 = *(i2*)(intptr_t)v10668;
	i8 v10670 = (i8)(intptr_t)(ws+56);
	i8 v10671 = *(i8*)(intptr_t)v10670;
	i8 v10672 = v10671+(+2);
	*(i2*)(intptr_t)v10672 = v10669;

	i8 v10673 = (i8)(intptr_t)(ws+3010);
	i2 v10674 = *(i2*)(intptr_t)v10673;
	i8 v10675 = (i8)(intptr_t)(ws+56);
	i8 v10676 = *(i8*)(intptr_t)v10675;
	i8 v10677 = v10676+(+4);
	*(i2*)(intptr_t)v10677 = v10674;

	i8 v10678 = (i8)(intptr_t)(ws+3008);
	i2 v10679 = *(i2*)(intptr_t)v10678;
	i8 v10680 = (i8)(intptr_t)(ws+2928);
	i8 v10681 = *(i8*)(intptr_t)v10680;
	*(i2*)(intptr_t)v10681 = v10679;

	i8 v10682 = (i8)(intptr_t)(ws+3010);
	i2 v10683 = *(i2*)(intptr_t)v10682;
	i8 v10684 = (i8)(intptr_t)(ws+2928);
	i8 v10685 = *(i8*)(intptr_t)v10684;
	i8 v10686 = v10685+(+2);
	*(i2*)(intptr_t)v10686 = v10683;

	i8 v10687 = (i8)(intptr_t)(ws+3008);
	i2 v10688 = *(i2*)(intptr_t)v10687;
	i8 v10689 = (i8)(intptr_t)(ws+2928);
	i8 v10690 = *(i8*)(intptr_t)v10689;
	i8 v10691 = v10690+(+4);
	*(i2*)(intptr_t)v10691 = v10688;

	i8 v10692 = (i8)(intptr_t)(ws+2928);
	i8 v10693 = *(i8*)(intptr_t)v10692;
	i8 v10694 = (i8)(intptr_t)(f449_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v10694)(v10693);

endsub:;
}
	void f110_MidJump(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3008 length ws+0
void f513_reduce_14(void) {

	i8 v10695 = (i8)(intptr_t)(ws+56);
	i8 v10696 = *(i8*)(intptr_t)v10695;
	i2 v10697 = *(i2*)(intptr_t)v10696;
	i8 v10698 = (i8)(intptr_t)(f110_MidJump);
	i8 v10699;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10698)(&v10699, v10697);
	i8 v10700 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10700)(v10699);

	i8 v10701 = (i8)(intptr_t)(ws+56);
	i8 v10702 = *(i8*)(intptr_t)v10701;
	i8 v10703 = v10702+(+4);
	i2 v10704 = *(i2*)(intptr_t)v10703;
	i8 v10705 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10706;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10705)(&v10706, v10704);
	i8 v10707 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10707)(v10706);

endsub:;
}
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f92_MidEndcase(i8* /* m */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_15 workspace at ws+3008 length ws+8
void f514_reduce_15(void) {

	i8 v10708 = (i8)(intptr_t)(ws+64);
	i8 v10709 = *(i8*)(intptr_t)v10708;
	i8 v10710 = v10709+(+17);
	i1 v10711 = *(i1*)(intptr_t)v10710;
	i1 v10712 = (i1)+0;
	if (v10711==v10712) goto c02_07e0; else goto c02_07df;

c02_07e0:;

	i8 v10713 = (i8)(intptr_t)(ws+64);
	i8 v10714 = *(i8*)(intptr_t)v10713;
	i2 v10715 = *(i2*)(intptr_t)v10714;
	i2 v10716 = (i2)+0;
	if (v10715==v10716) goto c02_07df; else goto c02_07de;

c02_07de:;

	i8 v10717 = (i8)(intptr_t)(ws+64);
	i8 v10718 = *(i8*)(intptr_t)v10717;
	i2 v10719 = *(i2*)(intptr_t)v10718;
	i8 v10720 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10721;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10720)(&v10721, v10719);
	i8 v10722 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10722)(v10721);

	goto c02_07d9;

c02_07df:;

c02_07d9:;

	i8 v10723 = (i8)(intptr_t)(ws+64);
	i8 v10724 = *(i8*)(intptr_t)v10723;
	i8 v10725 = v10724+(+2);
	i2 v10726 = *(i2*)(intptr_t)v10725;
	i8 v10727 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10728;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10727)(&v10728, v10726);
	i8 v10729 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10729)(v10728);

	i8 v10730 = (i8)(intptr_t)(ws+64);
	i8 v10731 = *(i8*)(intptr_t)v10730;
	i8 v10732 = v10731+(+16);
	i1 v10733 = *(i1*)(intptr_t)v10732;
	i8 v10734 = (i8)(intptr_t)(f92_MidEndcase);
	i8 v10735;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v10734)(&v10735, v10733);
	i8 v10736 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10736)(v10735);

	i8 v10737 = (i8)(intptr_t)(ws+64);
	i8 v10738 = *(i8*)(intptr_t)v10737;
	i8 v10739 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10739 = v10738;

	i8 v10740 = (i8)(intptr_t)(ws+3008);
	i8 v10741 = *(i8*)(intptr_t)v10740;
	i8 v10742 = v10741+(+8);
	i8 v10743 = *(i8*)(intptr_t)v10742;
	i8 v10744 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v10744 = v10743;

	i8 v10745 = (i8)(intptr_t)(ws+3008);
	i8 v10746 = *(i8*)(intptr_t)v10745;
	i8 v10747 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10747)(v10746);

	i1 v10748 = (i1)+10;
	i8 v10749 = (i8)(intptr_t)(ws+2944);
	i8 v10750 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10750)(v10749, v10748);

	i1 v10751 = (i1)+64;
	i8 v10752 = (i8)(intptr_t)(ws+2936);
	i8 v10753 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10753)(v10752, v10751);

	i1 v10754 = (i1)+22;
	i8 v10755 = (i8)(intptr_t)(ws+2928);
	i8 v10756 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10756)(v10755, v10754);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f214_AllocLabel(i2* /* label */);
	void f207_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01d5[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f138_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_16 workspace at ws+3008 length ws+8
void f515_reduce_16(void) {

	i8 v10757 = (i8)+18;
	i8 v10758 = (i8)(intptr_t)(f31_Alloc);
	i8 v10759;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10758)(&v10759, v10757);
	i8 v10760 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10760 = v10759;

	i8 v10761 = (i8)(intptr_t)(ws+64);
	i8 v10762 = *(i8*)(intptr_t)v10761;
	i8 v10763 = (i8)(intptr_t)(ws+3008);
	i8 v10764 = *(i8*)(intptr_t)v10763;
	i8 v10765 = v10764+(+8);
	*(i8*)(intptr_t)v10765 = v10762;

	i8 v10766 = (i8)(intptr_t)(ws+52);
	i2 v10767 = *(i2*)(intptr_t)v10766;
	i8 v10768 = (i8)(intptr_t)(ws+3008);
	i8 v10769 = *(i8*)(intptr_t)v10768;
	i8 v10770 = v10769+(+4);
	*(i2*)(intptr_t)v10770 = v10767;

	i8 v10771 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10772;

	((void(*)(i2* /* label */))(intptr_t)v10771)(&v10772);
	i8 v10773 = (i8)(intptr_t)(ws+3008);
	i8 v10774 = *(i8*)(intptr_t)v10773;
	i8 v10775 = v10774+(+2);
	*(i2*)(intptr_t)v10775 = v10772;

	i8 v10776 = (i8)(intptr_t)(ws+3008);
	i8 v10777 = *(i8*)(intptr_t)v10776;
	i8 v10778 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v10778 = v10777;

	i8 v10779 = (i8)(intptr_t)(ws+2936);
	i8 v10780 = *(i8*)(intptr_t)v10779;
	i8 v10781 = v10780+(+16);
	i8 v10782 = *(i8*)(intptr_t)v10781;
	i8 v10783 = (i8)(intptr_t)(f207_IsNum);
	i1 v10784;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10783)(&v10784, v10782);
	i1 v10785 = (i1)+0;
	if (v10784==v10785) goto c02_07e4; else goto c02_07e5;

c02_07e4:;

	i8 v10786 = (i8)(intptr_t)c02_s01d5;
	i8 v10787 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10787)(v10786);

	goto c02_07e1;

c02_07e5:;

c02_07e1:;

	i8 v10788 = (i8)(intptr_t)(ws+2936);
	i8 v10789 = *(i8*)(intptr_t)v10788;
	i8 v10790 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v10791;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10790)(&v10791, v10789);
	i8 v10792 = (i8)(intptr_t)(ws+3008);
	i8 v10793 = *(i8*)(intptr_t)v10792;
	i8 v10794 = v10793+(+16);
	*(i1*)(intptr_t)v10794 = v10791;

	i8 v10795 = (i8)(intptr_t)(ws+3008);
	i8 v10796 = *(i8*)(intptr_t)v10795;
	i8 v10797 = v10796+(+16);
	i1 v10798 = *(i1*)(intptr_t)v10797;
	i8 v10799 = (i8)(intptr_t)(ws+2936);
	i8 v10800 = *(i8*)(intptr_t)v10799;
	i8 v10801 = (i8)(intptr_t)(f138_MidStartcase);
	i8 v10802;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v10801)(&v10802, v10800, v10798);
	i8 v10803 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10803)(v10802);

	i1 v10804 = (i1)+65;
	i8 v10805 = (i8)(intptr_t)(ws+2928);
	i8 v10806 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10806)(v10805, v10804);

endsub:;
}
const i1 c02_s01d6[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f61_SimpleError(i8 /* message */);
	void f110_MidJump(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f214_AllocLabel(i2* /* label */);
	void f105_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3008 length ws+0
void f516_reduce_17(void) {

	i8 v10807 = (i8)(intptr_t)(ws+64);
	i8 v10808 = *(i8*)(intptr_t)v10807;
	i8 v10809 = v10808+(+17);
	i1 v10810 = *(i1*)(intptr_t)v10809;
	i1 v10811 = (i1)+0;
	if (v10810==v10811) goto c02_07ea; else goto c02_07e9;

c02_07e9:;

	i8 v10812 = (i8)(intptr_t)c02_s01d6;
	i8 v10813 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10813)(v10812);

	goto c02_07e6;

c02_07ea:;

c02_07e6:;

	i8 v10814 = (i8)(intptr_t)(ws+64);
	i8 v10815 = *(i8*)(intptr_t)v10814;
	i2 v10816 = *(i2*)(intptr_t)v10815;
	i2 v10817 = (i2)+0;
	if (v10816==v10817) goto c02_07ef; else goto c02_07ee;

c02_07ee:;

	i8 v10818 = (i8)(intptr_t)(ws+64);
	i8 v10819 = *(i8*)(intptr_t)v10818;
	i8 v10820 = v10819+(+2);
	i2 v10821 = *(i2*)(intptr_t)v10820;
	i8 v10822 = (i8)(intptr_t)(f110_MidJump);
	i8 v10823;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10822)(&v10823, v10821);
	i8 v10824 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10824)(v10823);

	i8 v10825 = (i8)(intptr_t)(ws+64);
	i8 v10826 = *(i8*)(intptr_t)v10825;
	i2 v10827 = *(i2*)(intptr_t)v10826;
	i8 v10828 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10829;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10828)(&v10829, v10827);
	i8 v10830 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10830)(v10829);

	goto c02_07eb;

c02_07ef:;

c02_07eb:;

	i8 v10831 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v10832;

	((void(*)(i2* /* label */))(intptr_t)v10831)(&v10832);
	i8 v10833 = (i8)(intptr_t)(ws+64);
	i8 v10834 = *(i8*)(intptr_t)v10833;
	*(i2*)(intptr_t)v10834 = v10832;

	i8 v10835 = (i8)(intptr_t)(ws+64);
	i8 v10836 = *(i8*)(intptr_t)v10835;
	i8 v10837 = v10836+(+16);
	i1 v10838 = *(i1*)(intptr_t)v10837;
	i8 v10839 = (i8)(intptr_t)(ws+2936);
	i4 v10840 = *(i4*)(intptr_t)v10839;
	i8 v10841 = (i8)(intptr_t)(ws+64);
	i8 v10842 = *(i8*)(intptr_t)v10841;
	i2 v10843 = *(i2*)(intptr_t)v10842;
	i8 v10844 = (i8)(intptr_t)(f105_MidWhencase);
	i8 v10845;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v10844)(&v10845, v10843, v10840, v10838);
	i8 v10846 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10846)(v10845);

	i1 v10847 = (i1)+6;
	i8 v10848 = (i8)(intptr_t)(ws+2928);
	i8 v10849 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10849)(v10848, v10847);

endsub:;
}
const i1 c02_s01d7[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f110_MidJump(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f142_MidLabel(i8* /* m */, i2 /* label */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3008 length ws+0
void f517_reduce_18(void) {

	i8 v10850 = (i8)(intptr_t)(ws+64);
	i8 v10851 = *(i8*)(intptr_t)v10850;
	i8 v10852 = v10851+(+17);
	i1 v10853 = *(i1*)(intptr_t)v10852;
	i1 v10854 = (i1)+0;
	if (v10853==v10854) goto c02_07f4; else goto c02_07f3;

c02_07f3:;

	i8 v10855 = (i8)(intptr_t)c02_s01d7;
	i8 v10856 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10856)(v10855);

	goto c02_07f0;

c02_07f4:;

c02_07f0:;

	i8 v10857 = (i8)(intptr_t)(ws+64);
	i8 v10858 = *(i8*)(intptr_t)v10857;
	i2 v10859 = *(i2*)(intptr_t)v10858;
	i2 v10860 = (i2)+0;
	if (v10859==v10860) goto c02_07f9; else goto c02_07f8;

c02_07f8:;

	i8 v10861 = (i8)(intptr_t)(ws+64);
	i8 v10862 = *(i8*)(intptr_t)v10861;
	i8 v10863 = v10862+(+2);
	i2 v10864 = *(i2*)(intptr_t)v10863;
	i8 v10865 = (i8)(intptr_t)(f110_MidJump);
	i8 v10866;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10865)(&v10866, v10864);
	i8 v10867 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10867)(v10866);

	i8 v10868 = (i8)(intptr_t)(ws+64);
	i8 v10869 = *(i8*)(intptr_t)v10868;
	i2 v10870 = *(i2*)(intptr_t)v10869;
	i8 v10871 = (i8)(intptr_t)(f142_MidLabel);
	i8 v10872;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10871)(&v10872, v10870);
	i8 v10873 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10873)(v10872);

	goto c02_07f5;

c02_07f9:;

c02_07f5:;

	i2 v10874 = (i2)+0;
	i8 v10875 = (i8)(intptr_t)(ws+64);
	i8 v10876 = *(i8*)(intptr_t)v10875;
	*(i2*)(intptr_t)v10876 = v10874;

	i1 v10877 = (i1)+1;
	i8 v10878 = (i8)(intptr_t)(ws+64);
	i8 v10879 = *(i8*)(intptr_t)v10878;
	i8 v10880 = v10879+(+17);
	*(i1*)(intptr_t)v10880 = v10877;

	i1 v10881 = (i1)+9;
	i8 v10882 = (i8)(intptr_t)(ws+2936);
	i8 v10883 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10883)(v10882, v10881);

	i1 v10884 = (i1)+6;
	i8 v10885 = (i8)(intptr_t)(ws+2928);
	i8 v10886 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10886)(v10885, v10884);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3008 length ws+0
void f518_reduce_19(void) {

	i8 v10887 = (i8)(intptr_t)(ws+2936);
	i8 v10888 = *(i8*)(intptr_t)v10887;
	i8 v10889 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10889 = v10888;

	i1 v10890 = (i1)+4;
	i8 v10891 = (i8)(intptr_t)(ws+2928);
	i8 v10892 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10892)(v10891, v10890);

endsub:;
}
	void f477_Negate(i8 /* node */);

// reduce_20 workspace at ws+3008 length ws+0
void f519_reduce_20(void) {

	i8 v10893 = (i8)(intptr_t)(ws+2928);
	i8 v10894 = *(i8*)(intptr_t)v10893;
	i8 v10895 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10895 = v10894;

	i8 v10896 = (i8)(intptr_t)(ws+2928);
	i8 v10897 = *(i8*)(intptr_t)v10896;
	i8 v10898 = (i8)(intptr_t)(f477_Negate);

	((void(*)(i8 /* node */))(intptr_t)v10898)(v10897);

endsub:;
}
	void f109_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3008 length ws+0
void f520_reduce_21(void) {

	i8 v10899 = (i8)(intptr_t)(ws+2944);
	i8 v10900 = *(i8*)(intptr_t)v10899;
	i8 v10901 = (i8)(intptr_t)(ws+2928);
	i8 v10902 = *(i8*)(intptr_t)v10901;
	i2 v10903 = (i2)+0;
	i2 v10904 = (i2)+0;
	i2 v10905 = (i2)+0;
	i1 v10906 = (i1)+0;
	i8 v10907 = (i8)(intptr_t)(f109_MidBand);
	i8 v10908;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v10907)(&v10908, v10906, v10905, v10904, v10903, v10902, v10900);
	i8 v10909 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10909 = v10908;

	i1 v10910 = (i1)+46;
	i8 v10911 = (i8)(intptr_t)(ws+2936);
	i8 v10912 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10912)(v10911, v10910);

endsub:;
}
	void f116_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_22 workspace at ws+3008 length ws+0
void f521_reduce_22(void) {

	i8 v10913 = (i8)(intptr_t)(ws+2944);
	i8 v10914 = *(i8*)(intptr_t)v10913;
	i8 v10915 = (i8)(intptr_t)(ws+2928);
	i8 v10916 = *(i8*)(intptr_t)v10915;
	i2 v10917 = (i2)+0;
	i2 v10918 = (i2)+0;
	i2 v10919 = (i2)+0;
	i1 v10920 = (i1)+0;
	i8 v10921 = (i8)(intptr_t)(f116_MidBor);
	i8 v10922;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v10921)(&v10922, v10920, v10919, v10918, v10917, v10916, v10914);
	i8 v10923 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10923 = v10922;

	i1 v10924 = (i1)+47;
	i8 v10925 = (i8)(intptr_t)(ws+2936);
	i8 v10926 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10926)(v10925, v10924);

endsub:;
}
	void f478_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3008 length ws+0
void f522_reduce_23(void) {

	i8 v10927 = (i8)(intptr_t)(ws+2944);
	i8 v10928 = *(i8*)(intptr_t)v10927;
	i8 v10929 = (i8)(intptr_t)(ws+2928);
	i8 v10930 = *(i8*)(intptr_t)v10929;
	i1 v10931 = (i1)+0;
	i8 v10932 = (i8)(intptr_t)(f478_ConditionalEq);
	i8 v10933;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v10932)(&v10933, v10931, v10930, v10928);
	i8 v10934 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10934 = v10933;

	i1 v10935 = (i1)+54;
	i8 v10936 = (i8)(intptr_t)(ws+2936);
	i8 v10937 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10937)(v10936, v10935);

endsub:;
}
	void f478_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3008 length ws+0
void f523_reduce_24(void) {

	i8 v10938 = (i8)(intptr_t)(ws+2944);
	i8 v10939 = *(i8*)(intptr_t)v10938;
	i8 v10940 = (i8)(intptr_t)(ws+2928);
	i8 v10941 = *(i8*)(intptr_t)v10940;
	i1 v10942 = (i1)+1;
	i8 v10943 = (i8)(intptr_t)(f478_ConditionalEq);
	i8 v10944;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v10943)(&v10944, v10942, v10941, v10939);
	i8 v10945 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10945 = v10944;

	i1 v10946 = (i1)+55;
	i8 v10947 = (i8)(intptr_t)(ws+2936);
	i8 v10948 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10948)(v10947, v10946);

endsub:;
}
	void f479_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3008 length ws+0
void f524_reduce_25(void) {

	i8 v10949 = (i8)(intptr_t)(ws+2944);
	i8 v10950 = *(i8*)(intptr_t)v10949;
	i8 v10951 = (i8)(intptr_t)(ws+2928);
	i8 v10952 = *(i8*)(intptr_t)v10951;
	i1 v10953 = (i1)+0;
	i8 v10954 = (i8)(intptr_t)(f479_ConditionalLt);
	i8 v10955;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v10954)(&v10955, v10953, v10952, v10950);
	i8 v10956 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10956 = v10955;

	i1 v10957 = (i1)+50;
	i8 v10958 = (i8)(intptr_t)(ws+2936);
	i8 v10959 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10959)(v10958, v10957);

endsub:;
}
	void f479_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3008 length ws+0
void f525_reduce_26(void) {

	i8 v10960 = (i8)(intptr_t)(ws+2944);
	i8 v10961 = *(i8*)(intptr_t)v10960;
	i8 v10962 = (i8)(intptr_t)(ws+2928);
	i8 v10963 = *(i8*)(intptr_t)v10962;
	i1 v10964 = (i1)+1;
	i8 v10965 = (i8)(intptr_t)(f479_ConditionalLt);
	i8 v10966;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v10965)(&v10966, v10964, v10963, v10961);
	i8 v10967 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10967 = v10966;

	i1 v10968 = (i1)+53;
	i8 v10969 = (i8)(intptr_t)(ws+2936);
	i8 v10970 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10970)(v10969, v10968);

endsub:;
}
	void f479_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3008 length ws+0
void f526_reduce_27(void) {

	i8 v10971 = (i8)(intptr_t)(ws+2928);
	i8 v10972 = *(i8*)(intptr_t)v10971;
	i8 v10973 = (i8)(intptr_t)(ws+2944);
	i8 v10974 = *(i8*)(intptr_t)v10973;
	i1 v10975 = (i1)+0;
	i8 v10976 = (i8)(intptr_t)(f479_ConditionalLt);
	i8 v10977;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v10976)(&v10977, v10975, v10974, v10972);
	i8 v10978 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10978 = v10977;

	i1 v10979 = (i1)+52;
	i8 v10980 = (i8)(intptr_t)(ws+2936);
	i8 v10981 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10981)(v10980, v10979);

endsub:;
}
	void f479_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3008 length ws+0
void f527_reduce_28(void) {

	i8 v10982 = (i8)(intptr_t)(ws+2928);
	i8 v10983 = *(i8*)(intptr_t)v10982;
	i8 v10984 = (i8)(intptr_t)(ws+2944);
	i8 v10985 = *(i8*)(intptr_t)v10984;
	i1 v10986 = (i1)+1;
	i8 v10987 = (i8)(intptr_t)(f479_ConditionalLt);
	i8 v10988;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v10987)(&v10988, v10986, v10985, v10983);
	i8 v10989 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10989 = v10988;

	i1 v10990 = (i1)+51;
	i8 v10991 = (i8)(intptr_t)(ws+2936);
	i8 v10992 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10992)(v10991, v10990);

endsub:;
}
	void f101_MidConstant(i8* /* m */, i4 /* value */);

// reduce_29 workspace at ws+3008 length ws+0
void f528_reduce_29(void) {

	i8 v10993 = (i8)(intptr_t)(ws+2928);
	i4 v10994 = *(i4*)(intptr_t)v10993;
	i8 v10995 = (i8)(intptr_t)(f101_MidConstant);
	i8 v10996;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v10995)(&v10996, v10994);
	i8 v10997 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10997 = v10996;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3008 length ws+0
void f529_reduce_30(void) {

	i8 v10998 = (i8)(intptr_t)(ws+2936);
	i8 v10999 = *(i8*)(intptr_t)v10998;
	i8 v11000 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11000 = v10999;

	i1 v11001 = (i1)+4;
	i8 v11002 = (i8)(intptr_t)(ws+2928);
	i8 v11003 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11003)(v11002, v11001);

endsub:;
}

// reduce_31 workspace at ws+3008 length ws+0
void f530_reduce_31(void) {

	i8 v11004 = (i8)(intptr_t)(ws+2928);
	i8 v11005 = *(i8*)(intptr_t)v11004;
	i8 v11006 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11006 = v11005;

endsub:;
}
	void f466_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_32 workspace at ws+3008 length ws+0
void f531_reduce_32(void) {

	i1 v11007 = (i1)+113;
	i8 v11008 = (i8)(intptr_t)(ws+2928);
	i8 v11009 = *(i8*)(intptr_t)v11008;
	i8 v11010 = (i8)(intptr_t)(f466_Expr1Simple);
	i8 v11011;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v11010)(&v11011, v11009, v11007);
	i8 v11012 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11012 = v11011;

endsub:;
}
	void f466_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_33 workspace at ws+3008 length ws+0
void f532_reduce_33(void) {

	i1 v11013 = (i1)+108;
	i8 v11014 = (i8)(intptr_t)(ws+2928);
	i8 v11015 = *(i8*)(intptr_t)v11014;
	i8 v11016 = (i8)(intptr_t)(f466_Expr1Simple);
	i8 v11017;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v11016)(&v11017, v11015, v11013);
	i8 v11018 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11018 = v11017;

endsub:;
}
	void f467_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_34 workspace at ws+3008 length ws+0
void f533_reduce_34(void) {

	i8 v11019 = (i8)(intptr_t)(ws+2944);
	i8 v11020 = *(i8*)(intptr_t)v11019;
	i8 v11021 = (i8)(intptr_t)(ws+2928);
	i8 v11022 = *(i8*)(intptr_t)v11021;
	i8 v11023 = (i8)(intptr_t)(f467_ExprAdd);
	i8 v11024;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11023)(&v11024, v11022, v11020);
	i8 v11025 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11025 = v11024;

	i1 v11026 = (i1)+19;
	i8 v11027 = (i8)(intptr_t)(ws+2936);
	i8 v11028 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11028)(v11027, v11026);

endsub:;
}
	void f469_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_35 workspace at ws+3008 length ws+0
void f534_reduce_35(void) {

	i8 v11029 = (i8)(intptr_t)(ws+2944);
	i8 v11030 = *(i8*)(intptr_t)v11029;
	i8 v11031 = (i8)(intptr_t)(ws+2928);
	i8 v11032 = *(i8*)(intptr_t)v11031;
	i8 v11033 = (i8)(intptr_t)(f469_ExprSub);
	i8 v11034;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11033)(&v11034, v11032, v11030);
	i8 v11035 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11035 = v11034;

	i1 v11036 = (i1)+14;
	i8 v11037 = (i8)(intptr_t)(ws+2936);
	i8 v11038 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11038)(v11037, v11036);

endsub:;
}
	void f471_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3008 length ws+0
void f535_reduce_36(void) {

	i1 v11039 = (i1)+163;
	i1 v11040 = (i1)+163;
	i8 v11041 = (i8)(intptr_t)(ws+2944);
	i8 v11042 = *(i8*)(intptr_t)v11041;
	i8 v11043 = (i8)(intptr_t)(ws+2928);
	i8 v11044 = *(i8*)(intptr_t)v11043;
	i8 v11045 = (i8)(intptr_t)(f471_Expr2Simple);
	i8 v11046;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11045)(&v11046, v11044, v11042, v11040, v11039);
	i8 v11047 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11047 = v11046;

	i1 v11048 = (i1)+24;
	i8 v11049 = (i8)(intptr_t)(ws+2936);
	i8 v11050 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11050)(v11049, v11048);

endsub:;
}
	void f471_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3008 length ws+0
void f536_reduce_37(void) {

	i1 v11051 = (i1)+143;
	i1 v11052 = (i1)+138;
	i8 v11053 = (i8)(intptr_t)(ws+2944);
	i8 v11054 = *(i8*)(intptr_t)v11053;
	i8 v11055 = (i8)(intptr_t)(ws+2928);
	i8 v11056 = *(i8*)(intptr_t)v11055;
	i8 v11057 = (i8)(intptr_t)(f471_Expr2Simple);
	i8 v11058;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11057)(&v11058, v11056, v11054, v11052, v11051);
	i8 v11059 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11059 = v11058;

	i1 v11060 = (i1)+23;
	i8 v11061 = (i8)(intptr_t)(ws+2936);
	i8 v11062 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11062)(v11061, v11060);

endsub:;
}
	void f471_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3008 length ws+0
void f537_reduce_38(void) {

	i1 v11063 = (i1)+153;
	i1 v11064 = (i1)+148;
	i8 v11065 = (i8)(intptr_t)(ws+2944);
	i8 v11066 = *(i8*)(intptr_t)v11065;
	i8 v11067 = (i8)(intptr_t)(ws+2928);
	i8 v11068 = *(i8*)(intptr_t)v11067;
	i8 v11069 = (i8)(intptr_t)(f471_Expr2Simple);
	i8 v11070;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11069)(&v11070, v11068, v11066, v11064, v11063);
	i8 v11071 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11071 = v11070;

	i1 v11072 = (i1)+18;
	i8 v11073 = (i8)(intptr_t)(ws+2936);
	i8 v11074 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11074)(v11073, v11072);

endsub:;
}
	void f471_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3008 length ws+0
void f538_reduce_39(void) {

	i1 v11075 = (i1)+178;
	i1 v11076 = (i1)+178;
	i8 v11077 = (i8)(intptr_t)(ws+2944);
	i8 v11078 = *(i8*)(intptr_t)v11077;
	i8 v11079 = (i8)(intptr_t)(ws+2928);
	i8 v11080 = *(i8*)(intptr_t)v11079;
	i8 v11081 = (i8)(intptr_t)(f471_Expr2Simple);
	i8 v11082;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11081)(&v11082, v11080, v11078, v11076, v11075);
	i8 v11083 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11083 = v11082;

	i1 v11084 = (i1)+49;
	i8 v11085 = (i8)(intptr_t)(ws+2936);
	i8 v11086 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11086)(v11085, v11084);

endsub:;
}
	void f471_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3008 length ws+0
void f539_reduce_40(void) {

	i1 v11087 = (i1)+168;
	i1 v11088 = (i1)+168;
	i8 v11089 = (i8)(intptr_t)(ws+2944);
	i8 v11090 = *(i8*)(intptr_t)v11089;
	i8 v11091 = (i8)(intptr_t)(ws+2928);
	i8 v11092 = *(i8*)(intptr_t)v11091;
	i8 v11093 = (i8)(intptr_t)(f471_Expr2Simple);
	i8 v11094;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11093)(&v11094, v11092, v11090, v11088, v11087);
	i8 v11095 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11095 = v11094;

	i1 v11096 = (i1)+59;
	i8 v11097 = (i8)(intptr_t)(ws+2936);
	i8 v11098 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11098)(v11097, v11096);

endsub:;
}
	void f471_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3008 length ws+0
void f540_reduce_41(void) {

	i1 v11099 = (i1)+173;
	i1 v11100 = (i1)+173;
	i8 v11101 = (i8)(intptr_t)(ws+2944);
	i8 v11102 = *(i8*)(intptr_t)v11101;
	i8 v11103 = (i8)(intptr_t)(ws+2928);
	i8 v11104 = *(i8*)(intptr_t)v11103;
	i8 v11105 = (i8)(intptr_t)(f471_Expr2Simple);
	i8 v11106;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11105)(&v11106, v11104, v11102, v11100, v11099);
	i8 v11107 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11107 = v11106;

	i1 v11108 = (i1)+48;
	i8 v11109 = (i8)(intptr_t)(ws+2936);
	i8 v11110 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11110)(v11109, v11108);

endsub:;
}
	void f474_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3008 length ws+0
void f541_reduce_42(void) {

	i1 v11111 = (i1)+118;
	i1 v11112 = (i1)+118;
	i8 v11113 = (i8)(intptr_t)(ws+2944);
	i8 v11114 = *(i8*)(intptr_t)v11113;
	i8 v11115 = (i8)(intptr_t)(ws+2928);
	i8 v11116 = *(i8*)(intptr_t)v11115;
	i8 v11117 = (i8)(intptr_t)(f474_ExprShift);
	i8 v11118;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11117)(&v11118, v11116, v11114, v11112, v11111);
	i8 v11119 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11119 = v11118;

	i1 v11120 = (i1)+56;
	i8 v11121 = (i8)(intptr_t)(ws+2936);
	i8 v11122 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11122)(v11121, v11120);

endsub:;
}
	void f474_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3008 length ws+0
void f542_reduce_43(void) {

	i1 v11123 = (i1)+128;
	i1 v11124 = (i1)+123;
	i8 v11125 = (i8)(intptr_t)(ws+2944);
	i8 v11126 = *(i8*)(intptr_t)v11125;
	i8 v11127 = (i8)(intptr_t)(ws+2928);
	i8 v11128 = *(i8*)(intptr_t)v11127;
	i8 v11129 = (i8)(intptr_t)(f474_ExprShift);
	i8 v11130;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11129)(&v11130, v11128, v11126, v11124, v11123);
	i8 v11131 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11131 = v11130;

	i1 v11132 = (i1)+57;
	i8 v11133 = (i8)(intptr_t)(ws+2936);
	i8 v11134 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11134)(v11133, v11132);

endsub:;
}
	void f201_CheckNotPartialType(i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01d8[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f208_IsSNum(i1* /* result */, i8 /* type */);
	void f154_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3008 length ws+0
void f543_reduce_44(void) {

	i8 v11135 = (i8)(intptr_t)(ws+2928);
	i8 v11136 = *(i8*)(intptr_t)v11135;
	i8 v11137 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11137)(v11136);

	i8 v11138 = (i8)(intptr_t)(ws+2944);
	i8 v11139 = *(i8*)(intptr_t)v11138;
	i8 v11140 = v11139+(+58);
	i1 v11141 = *(i1*)(intptr_t)v11140;
	i1 v11142 = (i1)+43;
	if (v11141==v11142) goto c02_0800; else goto c02_0801;

c02_0801:;

	i8 v11143 = (i8)(intptr_t)(ws+2944);
	i8 v11144 = *(i8*)(intptr_t)v11143;
	i8 v11145 = v11144+(+16);
	i8 v11146 = *(i8*)(intptr_t)v11145;
	i8 v11147 = v11146+(+42);
	i2 v11148 = *(i2*)(intptr_t)v11147;
	i8 v11149 = (i8)(intptr_t)(ws+2928);
	i8 v11150 = *(i8*)(intptr_t)v11149;
	i8 v11151 = v11150+(+42);
	i2 v11152 = *(i2*)(intptr_t)v11151;
	if (v11148==v11152) goto c02_0800; else goto c02_07ff;

c02_07ff:;

	i8 v11153 = (i8)(intptr_t)(ws+2944);
	i8 v11154 = *(i8*)(intptr_t)v11153;
	i8 v11155 = v11154+(+16);
	i8 v11156 = *(i8*)(intptr_t)v11155;
	i8 v11157 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11158;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11157)(&v11158, v11156);
	i1 v11159 = (i1)+0;
	if (v11158==v11159) goto c02_0809; else goto c02_0807;

c02_0809:;

	i8 v11160 = (i8)(intptr_t)(ws+2928);
	i8 v11161 = *(i8*)(intptr_t)v11160;
	i8 v11162 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11163;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11162)(&v11163, v11161);
	i1 v11164 = (i1)+0;
	if (v11163==v11164) goto c02_0808; else goto c02_0807;

c02_0807:;

	i8 v11165 = (i8)(intptr_t)c02_s01d8;
	i8 v11166 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11166)(v11165);

	goto c02_0802;

c02_0808:;

c02_0802:;

	i8 v11167 = (i8)(intptr_t)(ws+2928);
	i8 v11168 = *(i8*)(intptr_t)v11167;
	i8 v11169 = v11168+(+42);
	i2 v11170 = *(i2*)(intptr_t)v11169;
	i1 v11171 = v11170;
	i8 v11172 = (i8)(intptr_t)(ws+2944);
	i8 v11173 = *(i8*)(intptr_t)v11172;
	i8 v11174 = (i8)(intptr_t)(ws+2944);
	i8 v11175 = *(i8*)(intptr_t)v11174;
	i8 v11176 = v11175+(+16);
	i8 v11177 = *(i8*)(intptr_t)v11176;
	i8 v11178 = (i8)(intptr_t)(f208_IsSNum);
	i1 v11179;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11178)(&v11179, v11177);
	i8 v11180 = (i8)(intptr_t)(f154_MidCCast);
	i8 v11181;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v11180)(&v11181, v11179, v11173, v11171);
	i8 v11182 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11182 = v11181;

	goto c02_07fa;

c02_0800:;

	i8 v11183 = (i8)(intptr_t)(ws+2944);
	i8 v11184 = *(i8*)(intptr_t)v11183;
	i8 v11185 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11185 = v11184;

c02_07fa:;

	i8 v11186 = (i8)(intptr_t)(ws+2928);
	i8 v11187 = *(i8*)(intptr_t)v11186;
	i8 v11188 = (i8)(intptr_t)(ws+2920);
	i8 v11189 = *(i8*)(intptr_t)v11188;
	i8 v11190 = v11189+(+16);
	*(i8*)(intptr_t)v11190 = v11187;

	i1 v11191 = (i1)+58;
	i8 v11192 = (i8)(intptr_t)(ws+2936);
	i8 v11193 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11193)(v11192, v11191);

endsub:;
}
	void f212_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f209_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s01d9[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_45 workspace at ws+3008 length ws+8
void f544_reduce_45(void) {

	i8 v11194 = (i8)(intptr_t)(ws+2928);
	i8 v11195 = *(i8*)(intptr_t)v11194;
	i8 v11196 = (i8)(intptr_t)(f212_UndoLValue);
	i8 v11197;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11196)(&v11197, v11195);
	i8 v11198 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11198 = v11197;

	i8 v11199 = (i8)(intptr_t)(ws+2920);
	i8 v11200 = *(i8*)(intptr_t)v11199;
	i8 v11201 = v11200+(+58);
	i1 v11202 = *(i1*)(intptr_t)v11201;
	i1 v11203 = (i1)+45;
	if (v11202==v11203) goto c02_080d; else goto c02_080e;

c02_080d:;

	i8 v11204 = (i8)(intptr_t)(ws+2920);
	i8 v11205 = *(i8*)(intptr_t)v11204;
	i8 v11206 = *(i8*)(intptr_t)v11205;
	i8 v11207 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11207 = v11206;

	i8 v11208 = (i8)(intptr_t)(ws+3008);
	i8 v11209 = *(i8*)(intptr_t)v11208;
	i8 v11210 = *(i8*)(intptr_t)v11209;
	i8 v11211 = (i8)(intptr_t)(f209_IsScalar);
	i1 v11212;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11211)(&v11212, v11210);
	i1 v11213 = (i1)+0;
	if (v11212==v11213) goto c02_0813; else goto c02_0812;

c02_0812:;

	i8 v11214 = (i8)(intptr_t)c02_s01d9;
	i8 v11215 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11215)(v11214);

	goto c02_080f;

c02_0813:;

c02_080f:;

	goto c02_080a;

c02_080e:;

c02_080a:;

endsub:;
}
	void f212_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3008 length ws+0
void f545_reduce_46(void) {

	i8 v11216 = (i8)(intptr_t)(ws+2928);
	i8 v11217 = *(i8*)(intptr_t)v11216;
	i8 v11218 = (i8)(intptr_t)(f212_UndoLValue);
	i8 v11219;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11218)(&v11219, v11217);
	i8 v11220 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11220 = v11219;

	i1 v11221 = (i1)+59;
	i8 v11222 = (i8)(intptr_t)(ws+2936);
	i8 v11223 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11223)(v11222, v11221);

endsub:;
}
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f480_parser_i_bad_next_prev(void);
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_47 workspace at ws+3008 length ws+0
void f546_reduce_47(void) {

	i8 v11224 = (i8)(intptr_t)(ws+2928);
	i8 v11225 = *(i8*)(intptr_t)v11224;
	i8 v11226 = v11225+(+16);
	i8 v11227 = *(i8*)(intptr_t)v11226;
	i8 v11228 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11229;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11228)(&v11229, v11227);
	i1 v11230 = (i1)+0;
	if (v11229==v11230) goto c02_0817; else goto c02_0818;

c02_0817:;

	i8 v11231 = (i8)(intptr_t)(f480_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v11231)();

	goto c02_0814;

c02_0818:;

c02_0814:;

	i1 v11232 = (i1)+158;
	i8 v11233 = (i8)(intptr_t)(ws+1056);
	i8 v11234 = *(i8*)(intptr_t)v11233;
	i8 v11235 = v11234+(+42);
	i2 v11236 = *(i2*)(intptr_t)v11235;
	i1 v11237 = v11236;
	i8 v11238 = (i8)(intptr_t)(ws+2928);
	i8 v11239 = *(i8*)(intptr_t)v11238;
	i8 v11240 = (i8)(intptr_t)(ws+2928);
	i8 v11241 = *(i8*)(intptr_t)v11240;
	i8 v11242 = v11241+(+16);
	i8 v11243 = *(i8*)(intptr_t)v11242;
	i8 v11244 = *(i8*)(intptr_t)v11243;
	i8 v11245 = v11244+(+44);
	i2 v11246 = *(i2*)(intptr_t)v11245;
	i4 v11247 = v11246;
	i8 v11248 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11249;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11248)(&v11249, v11247);
	i8 v11250 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v11251;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11250)(&v11251, v11249, v11239, v11237, v11232);
	i8 v11252 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11252 = v11251;

	i8 v11253 = (i8)(intptr_t)(ws+2928);
	i8 v11254 = *(i8*)(intptr_t)v11253;
	i8 v11255 = v11254+(+16);
	i8 v11256 = *(i8*)(intptr_t)v11255;
	i8 v11257 = (i8)(intptr_t)(ws+2920);
	i8 v11258 = *(i8*)(intptr_t)v11257;
	i8 v11259 = v11258+(+16);
	*(i8*)(intptr_t)v11259 = v11256;

endsub:;
}
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f480_parser_i_bad_next_prev(void);
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_48 workspace at ws+3008 length ws+0
void f547_reduce_48(void) {

	i8 v11260 = (i8)(intptr_t)(ws+2928);
	i8 v11261 = *(i8*)(intptr_t)v11260;
	i8 v11262 = v11261+(+16);
	i8 v11263 = *(i8*)(intptr_t)v11262;
	i8 v11264 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11265;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11264)(&v11265, v11263);
	i1 v11266 = (i1)+0;
	if (v11265==v11266) goto c02_081c; else goto c02_081d;

c02_081c:;

	i8 v11267 = (i8)(intptr_t)(f480_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v11267)();

	goto c02_0819;

c02_081d:;

c02_0819:;

	i1 v11268 = (i1)+133;
	i8 v11269 = (i8)(intptr_t)(ws+1056);
	i8 v11270 = *(i8*)(intptr_t)v11269;
	i8 v11271 = v11270+(+42);
	i2 v11272 = *(i2*)(intptr_t)v11271;
	i1 v11273 = v11272;
	i8 v11274 = (i8)(intptr_t)(ws+2928);
	i8 v11275 = *(i8*)(intptr_t)v11274;
	i8 v11276 = (i8)(intptr_t)(ws+2928);
	i8 v11277 = *(i8*)(intptr_t)v11276;
	i8 v11278 = v11277+(+16);
	i8 v11279 = *(i8*)(intptr_t)v11278;
	i8 v11280 = *(i8*)(intptr_t)v11279;
	i8 v11281 = v11280+(+44);
	i2 v11282 = *(i2*)(intptr_t)v11281;
	i4 v11283 = v11282;
	i8 v11284 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11285;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11284)(&v11285, v11283);
	i8 v11286 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v11287;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11286)(&v11287, v11285, v11275, v11273, v11268);
	i8 v11288 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11288 = v11287;

	i8 v11289 = (i8)(intptr_t)(ws+2928);
	i8 v11290 = *(i8*)(intptr_t)v11289;
	i8 v11291 = v11290+(+16);
	i8 v11292 = *(i8*)(intptr_t)v11291;
	i8 v11293 = (i8)(intptr_t)(ws+2920);
	i8 v11294 = *(i8*)(intptr_t)v11293;
	i8 v11295 = v11294+(+16);
	*(i8*)(intptr_t)v11295 = v11292;

endsub:;
}
	void f101_MidConstant(i8* /* m */, i4 /* value */);

// reduce_49 workspace at ws+3008 length ws+0
void f548_reduce_49(void) {

	i8 v11296 = (i8)(intptr_t)(ws+2928);
	i8 v11297 = *(i8*)(intptr_t)v11296;
	i8 v11298 = v11297+(+42);
	i2 v11299 = *(i2*)(intptr_t)v11298;
	i4 v11300 = v11299;
	i8 v11301 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11302;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11301)(&v11302, v11300);
	i8 v11303 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11303 = v11302;

endsub:;
}
	void f204_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s01da[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f101_MidConstant(i8* /* m */, i4 /* value */);

// reduce_50 workspace at ws+3008 length ws+0
void f549_reduce_50(void) {

	i8 v11304 = (i8)(intptr_t)(ws+2928);
	i8 v11305 = *(i8*)(intptr_t)v11304;
	i8 v11306 = (i8)(intptr_t)(f204_IsArray);
	i1 v11307;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11306)(&v11307, v11305);
	i1 v11308 = (i1)+0;
	if (v11307==v11308) goto c02_0821; else goto c02_0822;

c02_0821:;

	i8 v11309 = (i8)(intptr_t)c02_s01da;
	i8 v11310 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11310)(v11309);

	goto c02_081e;

c02_0822:;

c02_081e:;

	i8 v11311 = (i8)(intptr_t)(ws+2928);
	i8 v11312 = *(i8*)(intptr_t)v11311;
	i8 v11313 = v11312+(+8);
	i2 v11314 = *(i2*)(intptr_t)v11313;
	i4 v11315 = v11314;
	i8 v11316 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11317;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11316)(&v11317, v11315);
	i8 v11318 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11318 = v11317;

endsub:;
}
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f143_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f452_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f211_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f143_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f454_MakeSubroutineType(i8* /* type */, i8 /* subr */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01db[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_51 workspace at ws+3008 length ws+0
void f550_reduce_51(void) {

	i8 v11319 = (i8)(intptr_t)(ws+2928);
	i8 v11320 = *(i8*)(intptr_t)v11319;
	i8 v11321 = v11320+(+46);
	i1 v11322 = *(i1*)(intptr_t)v11321;

	if (v11322 != +7) goto c02_0824;

	i8 v11323 = (i8)(intptr_t)(ws+2928);
	i8 v11324 = *(i8*)(intptr_t)v11323;
	i4 v11325 = *(i4*)(intptr_t)v11324;
	i8 v11326 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11327;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11326)(&v11327, v11325);
	i8 v11328 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11328 = v11327;

	goto c02_0823;

c02_0824:;

	if (v11322 != +28) goto c02_0825;

	i8 v11329 = (i8)(intptr_t)(ws+2928);
	i8 v11330 = *(i8*)(intptr_t)v11329;
	i2 v11331 = (i2)+0;
	i8 v11332 = (i8)(intptr_t)(f143_MidAddress);
	i8 v11333;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11332)(&v11333, v11331, v11330);
	i8 v11334 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11334 = v11333;

	i8 v11335 = (i8)(intptr_t)(ws+2928);
	i8 v11336 = *(i8*)(intptr_t)v11335;
	i8 v11337 = *(i8*)(intptr_t)v11336;
	i8 v11338 = (i8)(intptr_t)(f452_MakePointerType);
	i8 v11339;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11338)(&v11339, v11337);
	i8 v11340 = (i8)(intptr_t)(ws+2920);
	i8 v11341 = *(i8*)(intptr_t)v11340;
	i8 v11342 = v11341+(+16);
	*(i8*)(intptr_t)v11342 = v11339;

	i8 v11343 = (i8)(intptr_t)(ws+2920);
	i8 v11344 = *(i8*)(intptr_t)v11343;
	i8 v11345 = (i8)(intptr_t)(f211_MakeLValue);
	i8 v11346;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11345)(&v11346, v11344);
	i8 v11347 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11347 = v11346;

	goto c02_0823;

c02_0825:;

	if (v11322 != +25) goto c02_0826;

	i8 v11348 = (i8)(intptr_t)(ws+2928);
	i8 v11349 = *(i8*)(intptr_t)v11348;
	i2 v11350 = (i2)+0;
	i8 v11351 = (i8)(intptr_t)(f143_MidAddress);
	i8 v11352;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11351)(&v11352, v11350, v11349);
	i8 v11353 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11353 = v11352;

	i8 v11354 = (i8)(intptr_t)(ws+2928);
	i8 v11355 = *(i8*)(intptr_t)v11354;
	i8 v11356 = *(i8*)(intptr_t)v11355;
	i8 v11357 = (i8)(intptr_t)(f454_MakeSubroutineType);
	i8 v11358;

	((void(*)(i8* /* type */, i8 /* subr */))(intptr_t)v11357)(&v11358, v11356);
	i8 v11359 = (i8)(intptr_t)(ws+2920);
	i8 v11360 = *(i8*)(intptr_t)v11359;
	i8 v11361 = v11360+(+16);
	*(i8*)(intptr_t)v11361 = v11358;

	goto c02_0823;

c02_0826:;

	i8 v11362 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11362)();

	i8 v11363 = (i8)(intptr_t)(ws+2928);
	i8 v11364 = *(i8*)(intptr_t)v11363;
	i8 v11365 = v11364+(+48);
	i8 v11366 = *(i8*)(intptr_t)v11365;
	i8 v11367 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11367)(v11366);

	i8 v11368 = (i8)(intptr_t)c02_s01db;
	i8 v11369 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11369)(v11368);

	i8 v11370 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11370)();

c02_0823:;


endsub:;
}
	void f205_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01dc[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f211_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_52 workspace at ws+3008 length ws+0
void f551_reduce_52(void) {

	i8 v11371 = (i8)(intptr_t)(ws+2936);
	i8 v11372 = *(i8*)(intptr_t)v11371;
	i8 v11373 = v11372+(+16);
	i8 v11374 = *(i8*)(intptr_t)v11373;
	i8 v11375 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11376;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11375)(&v11376, v11374);
	i1 v11377 = (i1)+0;
	if (v11376==v11377) goto c02_082a; else goto c02_082b;

c02_082a:;

	i8 v11378 = (i8)(intptr_t)c02_s01dc;
	i8 v11379 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11379)(v11378);

	goto c02_0827;

c02_082b:;

c02_0827:;

	i8 v11380 = (i8)(intptr_t)(ws+2936);
	i8 v11381 = *(i8*)(intptr_t)v11380;
	i8 v11382 = (i8)(intptr_t)(f211_MakeLValue);
	i8 v11383;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11382)(&v11383, v11381);
	i8 v11384 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11384 = v11383;

	i1 v11385 = (i1)+5;
	i8 v11386 = (i8)(intptr_t)(ws+2928);
	i8 v11387 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11387)(v11386, v11385);

endsub:;
}
	void f212_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f204_IsArray(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
const i1 c02_s01dd[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f207_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01de[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f154_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f452_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f211_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_53 workspace at ws+3008 length ws+48
void f552_reduce_53(void) {

	i8 v11388 = (i8)(intptr_t)(ws+2952);
	i8 v11389 = *(i8*)(intptr_t)v11388;
	i8 v11390 = v11389+(+16);
	i8 v11391 = *(i8*)(intptr_t)v11390;
	i8 v11392 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11392 = v11391;

	i8 v11393 = (i8)(intptr_t)(ws+2952);
	i8 v11394 = *(i8*)(intptr_t)v11393;
	i8 v11395 = (i8)(intptr_t)(f212_UndoLValue);
	i8 v11396;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11395)(&v11396, v11394);
	i8 v11397 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11397 = v11396;

	i8 v11398 = (i8)(intptr_t)(ws+3008);
	i8 v11399 = *(i8*)(intptr_t)v11398;
	i8 v11400 = (i8)(intptr_t)(f204_IsArray);
	i1 v11401;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11400)(&v11401, v11399);
	i1 v11402 = (i1)+0;
	if (v11401==v11402) goto c02_082f; else goto c02_0830;

c02_082f:;

	i8 v11403 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11403)();

	i8 v11404 = (i8)(intptr_t)c02_s01dd;
	i8 v11405 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11405)(v11404);

	i8 v11406 = (i8)(intptr_t)(ws+3008);
	i8 v11407 = *(i8*)(intptr_t)v11406;
	i8 v11408 = v11407+(+48);
	i8 v11409 = *(i8*)(intptr_t)v11408;
	i8 v11410 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11410)(v11409);

	i8 v11411 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11411)();

	goto c02_082c;

c02_0830:;

c02_082c:;

	i8 v11412 = (i8)(intptr_t)(ws+2936);
	i8 v11413 = *(i8*)(intptr_t)v11412;
	i8 v11414 = (i8)(intptr_t)(ws+3008);
	i8 v11415 = *(i8*)(intptr_t)v11414;
	i8 v11416 = v11415+(+16);
	i8 v11417 = *(i8*)(intptr_t)v11416;
	i8 v11418 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v11418)(v11417, v11413);

	i8 v11419 = (i8)(intptr_t)(ws+2936);
	i8 v11420 = *(i8*)(intptr_t)v11419;
	i8 v11421 = v11420+(+16);
	i8 v11422 = *(i8*)(intptr_t)v11421;
	i8 v11423 = (i8)(intptr_t)(f207_IsNum);
	i1 v11424;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11423)(&v11424, v11422);
	i1 v11425 = (i1)+0;
	if (v11424==v11425) goto c02_0834; else goto c02_0835;

c02_0834:;

	i8 v11426 = (i8)(intptr_t)c02_s01de;
	i8 v11427 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11427)(v11426);

	goto c02_0831;

c02_0835:;

c02_0831:;

	i8 v11428 = (i8)(intptr_t)(ws+3008);
	i8 v11429 = *(i8*)(intptr_t)v11428;
	i8 v11430 = *(i8*)(intptr_t)v11429;
	i8 v11431 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v11431 = v11430;

	i8 v11432 = (i8)(intptr_t)(ws+1056);
	i8 v11433 = *(i8*)(intptr_t)v11432;
	i8 v11434 = v11433+(+42);
	i2 v11435 = *(i2*)(intptr_t)v11434;
	i1 v11436 = v11435;
	i8 v11437 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v11437 = v11436;

	i1 v11438 = (i1)+163;
	i8 v11439 = (i8)(intptr_t)(ws+3032);
	i1 v11440 = *(i1*)(intptr_t)v11439;
	i8 v11441 = (i8)(intptr_t)(ws+1056);
	i8 v11442 = *(i8*)(intptr_t)v11441;
	i8 v11443 = v11442+(+42);
	i2 v11444 = *(i2*)(intptr_t)v11443;
	i1 v11445 = v11444;
	i8 v11446 = (i8)(intptr_t)(ws+2936);
	i8 v11447 = *(i8*)(intptr_t)v11446;
	i1 v11448 = (i1)+0;
	i8 v11449 = (i8)(intptr_t)(f154_MidCCast);
	i8 v11450;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v11449)(&v11450, v11448, v11447, v11445);
	i8 v11451 = (i8)(intptr_t)(ws+3024);
	i8 v11452 = *(i8*)(intptr_t)v11451;
	i8 v11453 = v11452+(+44);
	i2 v11454 = *(i2*)(intptr_t)v11453;
	i4 v11455 = v11454;
	i8 v11456 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11457;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11456)(&v11457, v11455);
	i8 v11458 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v11459;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11458)(&v11459, v11457, v11450, v11440, v11438);
	i8 v11460 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v11460 = v11459;

	i8 v11461 = (i8)(intptr_t)(ws+1056);
	i8 v11462 = *(i8*)(intptr_t)v11461;
	i8 v11463 = (i8)(intptr_t)(ws+3040);
	i8 v11464 = *(i8*)(intptr_t)v11463;
	i8 v11465 = v11464+(+16);
	*(i8*)(intptr_t)v11465 = v11462;

	i1 v11466 = (i1)+158;
	i8 v11467 = (i8)(intptr_t)(ws+3032);
	i1 v11468 = *(i1*)(intptr_t)v11467;
	i8 v11469 = (i8)(intptr_t)(ws+3016);
	i8 v11470 = *(i8*)(intptr_t)v11469;
	i8 v11471 = (i8)(intptr_t)(ws+3040);
	i8 v11472 = *(i8*)(intptr_t)v11471;
	i8 v11473 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v11474;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11473)(&v11474, v11472, v11470, v11468, v11466);
	i8 v11475 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v11475 = v11474;

	i8 v11476 = (i8)(intptr_t)(ws+3024);
	i8 v11477 = *(i8*)(intptr_t)v11476;
	i8 v11478 = (i8)(intptr_t)(f452_MakePointerType);
	i8 v11479;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11478)(&v11479, v11477);
	i8 v11480 = (i8)(intptr_t)(ws+3048);
	i8 v11481 = *(i8*)(intptr_t)v11480;
	i8 v11482 = v11481+(+16);
	*(i8*)(intptr_t)v11482 = v11479;

	i8 v11483 = (i8)(intptr_t)(ws+3048);
	i8 v11484 = *(i8*)(intptr_t)v11483;
	i8 v11485 = (i8)(intptr_t)(f211_MakeLValue);
	i8 v11486;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11485)(&v11486, v11484);
	i8 v11487 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11487 = v11486;

	i1 v11488 = (i1)+17;
	i8 v11489 = (i8)(intptr_t)(ws+2944);
	i8 v11490 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11490)(v11489, v11488);

	i1 v11491 = (i1)+5;
	i8 v11492 = (i8)(intptr_t)(ws+2928);
	i8 v11493 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11493)(v11492, v11491);

endsub:;
}
	void f212_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
	void f201_CheckNotPartialType(i8 /* type */);
	void f89_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	void f201_CheckNotPartialType(i8 /* type */);
	void f210_IsRecord(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01df[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f196_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e0[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e1[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f32_Free(i8 /* block */);
	void f101_MidConstant(i8* /* m */, i4 /* value */);
	void f153_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f452_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f211_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3008 length ws+24
void f553_reduce_54(void) {

	i8 v11494 = (i8)(intptr_t)(ws+2944);
	i8 v11495 = *(i8*)(intptr_t)v11494;
	i8 v11496 = v11495+(+16);
	i8 v11497 = *(i8*)(intptr_t)v11496;
	i8 v11498 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11498 = v11497;

	i8 v11499 = (i8)(intptr_t)(ws+2944);
	i8 v11500 = *(i8*)(intptr_t)v11499;
	i8 v11501 = (i8)(intptr_t)(f212_UndoLValue);
	i8 v11502;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11501)(&v11502, v11500);
	i8 v11503 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11503 = v11502;

c02_0838:;

	i8 v11504 = (i8)(intptr_t)(ws+3008);
	i8 v11505 = *(i8*)(intptr_t)v11504;
	i8 v11506 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11507;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11506)(&v11507, v11505);
	i1 v11508 = (i1)+0;
	if (v11507==v11508) goto c02_083b; else goto c02_083a;

c02_083a:;

	i8 v11509 = (i8)(intptr_t)(ws+3008);
	i8 v11510 = *(i8*)(intptr_t)v11509;
	i8 v11511 = *(i8*)(intptr_t)v11510;
	i8 v11512 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11512 = v11511;

	i8 v11513 = (i8)(intptr_t)(ws+3008);
	i8 v11514 = *(i8*)(intptr_t)v11513;
	i8 v11515 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11515)(v11514);

	i8 v11516 = (i8)(intptr_t)(ws+1056);
	i8 v11517 = *(i8*)(intptr_t)v11516;
	i8 v11518 = v11517+(+42);
	i2 v11519 = *(i2*)(intptr_t)v11518;
	i1 v11520 = v11519;
	i8 v11521 = (i8)(intptr_t)(ws+3016);
	i8 v11522 = *(i8*)(intptr_t)v11521;
	i8 v11523 = (i8)(intptr_t)(f89_MidLoad);
	i8 v11524;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v11523)(&v11524, v11522, v11520);
	i8 v11525 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11525 = v11524;

	goto c02_0838;

c02_083b:;

	i8 v11526 = (i8)(intptr_t)(ws+3008);
	i8 v11527 = *(i8*)(intptr_t)v11526;
	i8 v11528 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11528)(v11527);

	i8 v11529 = (i8)(intptr_t)(ws+3008);
	i8 v11530 = *(i8*)(intptr_t)v11529;
	i8 v11531 = (i8)(intptr_t)(f210_IsRecord);
	i1 v11532;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11531)(&v11532, v11530);
	i1 v11533 = (i1)+0;
	if (v11532==v11533) goto c02_083f; else goto c02_0840;

c02_083f:;

	i8 v11534 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11534)();

	i8 v11535 = (i8)(intptr_t)(ws+3008);
	i8 v11536 = *(i8*)(intptr_t)v11535;
	i8 v11537 = v11536+(+48);
	i8 v11538 = *(i8*)(intptr_t)v11537;
	i8 v11539 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11539)(v11538);

	i8 v11540 = (i8)(intptr_t)c02_s01df;
	i8 v11541 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11541)(v11540);

	i8 v11542 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11542)();

	goto c02_083c;

c02_0840:;

c02_083c:;

	i8 v11543 = (i8)(intptr_t)(ws+3008);
	i8 v11544 = *(i8*)(intptr_t)v11543;
	i8 v11545 = (i8)(intptr_t)(ws+2928);
	i8 v11546 = *(i8*)(intptr_t)v11545;
	i8 v11547 = (i8)(intptr_t)(f196_LookupSymbol);
	i8 v11548;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11547)(&v11548, v11546, v11544);
	i8 v11549 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v11549 = v11548;

	i8 v11550 = (i8)(intptr_t)(ws+3024);
	i8 v11551 = *(i8*)(intptr_t)v11550;
	i8 v11552 = (i8)+0;
	if (v11551==v11552) goto c02_0844; else goto c02_0845;

c02_0844:;

	i8 v11553 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11553)();

	i8 v11554 = (i8)(intptr_t)(ws+3008);
	i8 v11555 = *(i8*)(intptr_t)v11554;
	i8 v11556 = v11555+(+48);
	i8 v11557 = *(i8*)(intptr_t)v11556;
	i8 v11558 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11558)(v11557);

	i8 v11559 = (i8)(intptr_t)c02_s01e0;
	i8 v11560 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11560)(v11559);

	i8 v11561 = (i8)(intptr_t)(ws+2928);
	i8 v11562 = *(i8*)(intptr_t)v11561;
	i8 v11563 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11563)(v11562);

	i8 v11564 = (i8)(intptr_t)c02_s01e1;
	i8 v11565 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11565)(v11564);

	i8 v11566 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11566)();

	goto c02_0841;

c02_0845:;

c02_0841:;

	i8 v11567 = (i8)(intptr_t)(ws+2928);
	i8 v11568 = *(i8*)(intptr_t)v11567;
	i8 v11569 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v11569)(v11568);

	i1 v11570 = (i1)+158;
	i8 v11571 = (i8)(intptr_t)(ws+1056);
	i8 v11572 = *(i8*)(intptr_t)v11571;
	i8 v11573 = v11572+(+42);
	i2 v11574 = *(i2*)(intptr_t)v11573;
	i1 v11575 = v11574;
	i8 v11576 = (i8)(intptr_t)(ws+3016);
	i8 v11577 = *(i8*)(intptr_t)v11576;
	i8 v11578 = (i8)(intptr_t)(ws+3024);
	i8 v11579 = *(i8*)(intptr_t)v11578;
	i8 v11580 = v11579+(+32);
	i2 v11581 = *(i2*)(intptr_t)v11580;
	i4 v11582 = v11581;
	i8 v11583 = (i8)(intptr_t)(f101_MidConstant);
	i8 v11584;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11583)(&v11584, v11582);
	i8 v11585 = (i8)(intptr_t)(f153_MidC2Op);
	i8 v11586;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11585)(&v11586, v11584, v11577, v11575, v11570);
	i8 v11587 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11587 = v11586;

	i8 v11588 = (i8)(intptr_t)(ws+3024);
	i8 v11589 = *(i8*)(intptr_t)v11588;
	i8 v11590 = *(i8*)(intptr_t)v11589;
	i8 v11591 = (i8)(intptr_t)(f452_MakePointerType);
	i8 v11592;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11591)(&v11592, v11590);
	i8 v11593 = (i8)(intptr_t)(ws+2920);
	i8 v11594 = *(i8*)(intptr_t)v11593;
	i8 v11595 = v11594+(+16);
	*(i8*)(intptr_t)v11595 = v11592;

	i8 v11596 = (i8)(intptr_t)(ws+2920);
	i8 v11597 = *(i8*)(intptr_t)v11596;
	i8 v11598 = (i8)(intptr_t)(f211_MakeLValue);
	i8 v11599;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11598)(&v11599, v11597);
	i8 v11600 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11600 = v11599;

	i1 v11601 = (i1)+8;
	i8 v11602 = (i8)(intptr_t)(ws+2936);
	i8 v11603 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11603)(v11602, v11601);

endsub:;
}
	void f121_MidString(i8* /* m */, i8 /* text */);
	void f452_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_55 workspace at ws+3008 length ws+0
void f554_reduce_55(void) {

	i8 v11604 = (i8)(intptr_t)(ws+2928);
	i8 v11605 = *(i8*)(intptr_t)v11604;
	i8 v11606 = (i8)(intptr_t)(f121_MidString);
	i8 v11607;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v11606)(&v11607, v11605);
	i8 v11608 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11608 = v11607;

	i8 v11609 = (i8)(intptr_t)(ws+1040);
	i8 v11610 = *(i8*)(intptr_t)v11609;
	i8 v11611 = (i8)(intptr_t)(f452_MakePointerType);
	i8 v11612;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11611)(&v11612, v11610);
	i8 v11613 = (i8)(intptr_t)(ws+2920);
	i8 v11614 = *(i8*)(intptr_t)v11613;
	i8 v11615 = v11614+(+16);
	*(i8*)(intptr_t)v11615 = v11612;

endsub:;
}
	void f481_parser_i_constant_error(void);
	void f56_Discard(i8 /* node */);

// reduce_56 workspace at ws+3008 length ws+0
void f555_reduce_56(void) {

	i8 v11616 = (i8)(intptr_t)(ws+2928);
	i8 v11617 = *(i8*)(intptr_t)v11616;
	i8 v11618 = v11617+(+58);
	i1 v11619 = *(i1*)(intptr_t)v11618;
	i1 v11620 = (i1)+43;
	if (v11619==v11620) goto c02_084a; else goto c02_0849;

c02_0849:;

	i8 v11621 = (i8)(intptr_t)(f481_parser_i_constant_error);

	((void(*)(void))(intptr_t)v11621)();

	goto c02_0846;

c02_084a:;

c02_0846:;

	i8 v11622 = (i8)(intptr_t)(ws+2928);
	i8 v11623 = *(i8*)(intptr_t)v11622;
	i4 v11624 = *(i4*)(intptr_t)v11623;
	i8 v11625 = (i8)(intptr_t)(ws+2920);
	*(i4*)(intptr_t)v11625 = v11624;

	i8 v11626 = (i8)(intptr_t)(ws+2928);
	i8 v11627 = *(i8*)(intptr_t)v11626;
	i8 v11628 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v11628)(v11627);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_57 workspace at ws+3008 length ws+0
void f556_reduce_57(void) {

	i1 v11629 = (i1)+7;
	i8 v11630 = (i8)(intptr_t)(ws+2952);
	i8 v11631 = *(i8*)(intptr_t)v11630;
	i8 v11632 = v11631+(+46);
	*(i1*)(intptr_t)v11632 = v11629;

	i8 v11633 = (i8)(intptr_t)(ws+2936);
	i4 v11634 = *(i4*)(intptr_t)v11633;
	i8 v11635 = (i8)(intptr_t)(ws+2952);
	i8 v11636 = *(i8*)(intptr_t)v11635;
	*(i4*)(intptr_t)v11636 = v11634;

	i1 v11637 = (i1)+2;
	i8 v11638 = (i8)(intptr_t)(ws+2944);
	i8 v11639 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11639)(v11638, v11637);

	i1 v11640 = (i1)+22;
	i8 v11641 = (i8)(intptr_t)(ws+2928);
	i8 v11642 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11642)(v11641, v11640);

endsub:;
}
const i1 c02_s01e2[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f221_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_58 workspace at ws+3008 length ws+0
void f557_reduce_58(void) {

	i8 v11643 = (i8)(intptr_t)(ws+2952);
	i4 v11644 = *(i4*)(intptr_t)v11643;
	i8 v11645 = (i8)(intptr_t)(ws+2936);
	i4 v11646 = *(i4*)(intptr_t)v11645;
	if ((s4)v11644<(s4)v11646) goto c02_084f; else goto c02_084e;

c02_084e:;

	i8 v11647 = (i8)(intptr_t)c02_s01e2;
	i8 v11648 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11648)(v11647);

	goto c02_084b;

c02_084f:;

c02_084b:;

	i8 v11649 = (i8)(intptr_t)(ws+2952);
	i4 v11650 = *(i4*)(intptr_t)v11649;
	i8 v11651 = (i8)(intptr_t)(ws+2936);
	i4 v11652 = *(i4*)(intptr_t)v11651;
	i8 v11653 = (i8)(intptr_t)(f221_ArchGuessIntType);
	i8 v11654;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v11653)(&v11654, v11652, v11650);
	i8 v11655 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11655 = v11654;

	i1 v11656 = (i1)+16;
	i8 v11657 = (i8)(intptr_t)(ws+2960);
	i8 v11658 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11658)(v11657, v11656);

	i1 v11659 = (i1)+45;
	i8 v11660 = (i8)(intptr_t)(ws+2944);
	i8 v11661 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11661)(v11660, v11659);

	i1 v11662 = (i1)+4;
	i8 v11663 = (i8)(intptr_t)(ws+2928);
	i8 v11664 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11664)(v11663, v11662);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s01e3[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e4[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_59 workspace at ws+3008 length ws+8
void f558_reduce_59(void) {

	i8 v11665 = (i8)(intptr_t)(ws+2928);
	i8 v11666 = *(i8*)(intptr_t)v11665;
	i8 v11667 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11667 = v11666;

	i8 v11668 = (i8)(intptr_t)(ws+3008);
	i8 v11669 = *(i8*)(intptr_t)v11668;
	i8 v11670 = v11669+(+46);
	i1 v11671 = *(i1*)(intptr_t)v11670;
	i1 v11672 = (i1)+0;
	if (v11671==v11672) goto c02_0853; else goto c02_0854;

c02_0853:;

	i1 v11673 = (i1)+30;
	i8 v11674 = (i8)(intptr_t)(ws+3008);
	i8 v11675 = *(i8*)(intptr_t)v11674;
	i8 v11676 = v11675+(+46);
	*(i1*)(intptr_t)v11676 = v11673;

	i1 v11677 = (i1)+1;
	i8 v11678 = (i8)(intptr_t)(ws+3008);
	i8 v11679 = *(i8*)(intptr_t)v11678;
	i8 v11680 = v11679+(+40);
	*(i1*)(intptr_t)v11680 = v11677;

	goto c02_0850;

c02_0854:;

c02_0850:;

	i8 v11681 = (i8)(intptr_t)(ws+3008);
	i8 v11682 = *(i8*)(intptr_t)v11681;
	i8 v11683 = v11682+(+46);
	i1 v11684 = *(i1*)(intptr_t)v11683;
	i1 v11685 = (i1)+30;
	if (v11684==v11685) goto c02_0859; else goto c02_0858;

c02_0858:;

	i8 v11686 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11686)();

	i8 v11687 = (i8)(intptr_t)c02_s01e3;
	i8 v11688 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11688)(v11687);

	i8 v11689 = (i8)(intptr_t)(ws+3008);
	i8 v11690 = *(i8*)(intptr_t)v11689;
	i8 v11691 = v11690+(+48);
	i8 v11692 = *(i8*)(intptr_t)v11691;
	i8 v11693 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11693)(v11692);

	i8 v11694 = (i8)(intptr_t)c02_s01e4;
	i8 v11695 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11695)(v11694);

	i8 v11696 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11696)();

	goto c02_0855;

c02_0859:;

c02_0855:;

	i8 v11697 = (i8)(intptr_t)(ws+3008);
	i8 v11698 = *(i8*)(intptr_t)v11697;
	i8 v11699 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11699 = v11698;

endsub:;
}
	void f452_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3008 length ws+0
void f559_reduce_60(void) {

	i8 v11700 = (i8)(intptr_t)(ws+2936);
	i8 v11701 = *(i8*)(intptr_t)v11700;
	i8 v11702 = (i8)(intptr_t)(f452_MakePointerType);
	i8 v11703;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11702)(&v11703, v11701);
	i8 v11704 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11704 = v11703;

	i1 v11705 = (i1)+5;
	i8 v11706 = (i8)(intptr_t)(ws+2928);
	i8 v11707 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11707)(v11706, v11705);

endsub:;
}
	void f453_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_61 workspace at ws+3008 length ws+0
void f560_reduce_61(void) {

	i8 v11708 = (i8)(intptr_t)(ws+2952);
	i8 v11709 = *(i8*)(intptr_t)v11708;
	i8 v11710 = (i8)(intptr_t)(ws+2936);
	i4 v11711 = *(i4*)(intptr_t)v11710;
	i2 v11712 = (s2)(s4)v11711;
	i8 v11713 = (i8)(intptr_t)(f453_MakeArrayType);
	i8 v11714;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v11713)(&v11714, v11712, v11709);
	i8 v11715 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11715 = v11714;

	i1 v11716 = (i1)+17;
	i8 v11717 = (i8)(intptr_t)(ws+2944);
	i8 v11718 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11718)(v11717, v11716);

	i1 v11719 = (i1)+5;
	i8 v11720 = (i8)(intptr_t)(ws+2928);
	i8 v11721 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11721)(v11720, v11719);

endsub:;
}
	void f453_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3008 length ws+0
void f561_reduce_62(void) {

	i8 v11722 = (i8)(intptr_t)(ws+2944);
	i8 v11723 = *(i8*)(intptr_t)v11722;
	i2 v11724 = (i2)+0;
	i8 v11725 = (i8)(intptr_t)(f453_MakeArrayType);
	i8 v11726;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v11725)(&v11726, v11724, v11723);
	i8 v11727 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11727 = v11726;

	i1 v11728 = (i1)+17;
	i8 v11729 = (i8)(intptr_t)(ws+2936);
	i8 v11730 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11730)(v11729, v11728);

	i1 v11731 = (i1)+5;
	i8 v11732 = (i8)(intptr_t)(ws+2928);
	i8 v11733 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11733)(v11732, v11731);

endsub:;
}
	void f204_IsArray(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e5[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_63 workspace at ws+3008 length ws+0
void f562_reduce_63(void) {

	i8 v11734 = (i8)(intptr_t)(ws+2928);
	i8 v11735 = *(i8*)(intptr_t)v11734;
	i8 v11736 = (i8)(intptr_t)(f204_IsArray);
	i1 v11737;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11736)(&v11737, v11735);
	i1 v11738 = (i1)+0;
	if (v11737==v11738) goto c02_085d; else goto c02_085e;

c02_085d:;

	i8 v11739 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11739)();

	i8 v11740 = (i8)(intptr_t)(ws+2928);
	i8 v11741 = *(i8*)(intptr_t)v11740;
	i8 v11742 = v11741+(+48);
	i8 v11743 = *(i8*)(intptr_t)v11742;
	i8 v11744 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11744)(v11743);

	i8 v11745 = (i8)(intptr_t)c02_s01e5;
	i8 v11746 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11746)(v11745);

	i8 v11747 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11747)();

	goto c02_085a;

c02_085e:;

c02_085a:;

	i8 v11748 = (i8)(intptr_t)(ws+2928);
	i8 v11749 = *(i8*)(intptr_t)v11748;
	i8 v11750 = v11749+(+16);
	i8 v11751 = *(i8*)(intptr_t)v11750;
	i8 v11752 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11752 = v11751;

endsub:;
}
	void f199_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3008 length ws+8
void f563_reduce_64(void) {

	i8 v11753 = (i8)+0;
	i8 v11754 = (i8)(intptr_t)(ws+2952);
	i8 v11755 = *(i8*)(intptr_t)v11754;
	i8 v11756 = (i8)(intptr_t)(ws+2936);
	i8 v11757 = *(i8*)(intptr_t)v11756;
	i8 v11758 = (i8)(intptr_t)(f199_AddAlias);
	i8 v11759;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v11758)(&v11759, v11757, v11755, v11753);
	i8 v11760 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11760 = v11759;

	i1 v11761 = (i1)+65;
	i8 v11762 = (i8)(intptr_t)(ws+2944);
	i8 v11763 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11763)(v11762, v11761);

	i1 v11764 = (i1)+22;
	i8 v11765 = (i8)(intptr_t)(ws+2928);
	i8 v11766 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11766)(v11765, v11764);

endsub:;
}
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_65 workspace at ws+3008 length ws+0
void f564_reduce_65(void) {

	i8 v11767 = (i8)+0;
	i8 v11768 = (i8)(intptr_t)(ws+2928);
	i8 v11769 = *(i8*)(intptr_t)v11768;
	i8 v11770 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v11771;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11770)(&v11771, v11769, v11767);
	i8 v11772 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11772 = v11771;

endsub:;
}
	void f196_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f59_StartError(void);
const i1 c02_s01e6[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e7[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f32_Free(i8 /* block */);

// reduce_66 workspace at ws+3008 length ws+16
void f565_reduce_66(void) {

	i8 v11773 = (i8)(intptr_t)(ws+2928);
	i8 v11774 = *(i8*)(intptr_t)v11773;
	i8 v11775 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11775 = v11774;

	i8 v11776 = (i8)+0;
	i8 v11777 = (i8)(intptr_t)(ws+3008);
	i8 v11778 = *(i8*)(intptr_t)v11777;
	i8 v11779 = (i8)(intptr_t)(f196_LookupSymbol);
	i8 v11780;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11779)(&v11780, v11778, v11776);
	i8 v11781 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11781 = v11780;

	i8 v11782 = (i8)(intptr_t)(ws+3016);
	i8 v11783 = *(i8*)(intptr_t)v11782;
	i8 v11784 = (i8)+0;
	if (v11783==v11784) goto c02_0862; else goto c02_0863;

c02_0862:;

	i8 v11785 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11785)();

	i8 v11786 = (i8)(intptr_t)c02_s01e6;
	i8 v11787 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11787)(v11786);

	i8 v11788 = (i8)(intptr_t)(ws+3008);
	i8 v11789 = *(i8*)(intptr_t)v11788;
	i8 v11790 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11790)(v11789);

	i8 v11791 = (i8)(intptr_t)c02_s01e7;
	i8 v11792 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11792)(v11791);

	i8 v11793 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11793)();

	goto c02_085f;

c02_0863:;

c02_085f:;

	i8 v11794 = (i8)(intptr_t)(ws+3008);
	i8 v11795 = *(i8*)(intptr_t)v11794;
	i8 v11796 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v11796)(v11795);

	i8 v11797 = (i8)(intptr_t)(ws+3016);
	i8 v11798 = *(i8*)(intptr_t)v11797;
	i8 v11799 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11799 = v11798;

endsub:;
}
	void f196_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f32_Free(i8 /* block */);

// reduce_67 workspace at ws+3008 length ws+16
void f566_reduce_67(void) {

	i8 v11800 = (i8)(intptr_t)(ws+2928);
	i8 v11801 = *(i8*)(intptr_t)v11800;
	i8 v11802 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11802 = v11801;

	i8 v11803 = (i8)+0;
	i8 v11804 = (i8)(intptr_t)(ws+3008);
	i8 v11805 = *(i8*)(intptr_t)v11804;
	i8 v11806 = (i8)(intptr_t)(f196_LookupSymbol);
	i8 v11807;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11806)(&v11807, v11805, v11803);
	i8 v11808 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11808 = v11807;

	i8 v11809 = (i8)(intptr_t)(ws+3016);
	i8 v11810 = *(i8*)(intptr_t)v11809;
	i8 v11811 = (i8)+0;
	if (v11810==v11811) goto c02_0867; else goto c02_0868;

c02_0867:;

	i8 v11812 = (i8)+0;
	i8 v11813 = (i8)(intptr_t)(ws+3008);
	i8 v11814 = *(i8*)(intptr_t)v11813;
	i8 v11815 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v11816;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11815)(&v11816, v11814, v11812);
	i8 v11817 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11817 = v11816;

	goto c02_0864;

c02_0868:;

	i8 v11818 = (i8)(intptr_t)(ws+3008);
	i8 v11819 = *(i8*)(intptr_t)v11818;
	i8 v11820 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v11820)(v11819);

c02_0864:;

	i8 v11821 = (i8)(intptr_t)(ws+3016);
	i8 v11822 = *(i8*)(intptr_t)v11821;
	i8 v11823 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11823 = v11822;

endsub:;
}
const i1 c02_s01e8[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_68 workspace at ws+3008 length ws+0
void f567_reduce_68(void) {

	i8 v11824 = (i8)(intptr_t)(ws+2928);
	i8 v11825 = *(i8*)(intptr_t)v11824;
	i8 v11826 = v11825+(+46);
	i1 v11827 = *(i1*)(intptr_t)v11826;
	i1 v11828 = (i1)+28;
	if (v11827==v11828) goto c02_086c; else goto c02_086d;

c02_086c:;

	i8 v11829 = (i8)(intptr_t)(ws+2928);
	i8 v11830 = *(i8*)(intptr_t)v11829;
	i8 v11831 = *(i8*)(intptr_t)v11830;
	i8 v11832 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v11832 = v11831;

	goto c02_0869;

c02_086d:;

c02_0869:;

	i8 v11833 = (i8)(intptr_t)(ws+2928);
	i8 v11834 = *(i8*)(intptr_t)v11833;
	i8 v11835 = v11834+(+46);
	i1 v11836 = *(i1*)(intptr_t)v11835;
	i1 v11837 = (i1)+30;
	if (v11836==v11837) goto c02_0872; else goto c02_0871;

c02_0871:;

	i8 v11838 = (i8)(intptr_t)c02_s01e8;
	i8 v11839 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11839)(v11838);

	goto c02_086e;

c02_0872:;

c02_086e:;

	i8 v11840 = (i8)(intptr_t)(ws+2928);
	i8 v11841 = *(i8*)(intptr_t)v11840;
	i8 v11842 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11842 = v11841;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_69 workspace at ws+3008 length ws+0
void f568_reduce_69(void) {

	i8 v11843 = (i8)(intptr_t)(ws+2936);
	i8 v11844 = *(i8*)(intptr_t)v11843;
	i8 v11845 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11845 = v11844;

	i1 v11846 = (i1)+4;
	i8 v11847 = (i8)(intptr_t)(ws+2928);
	i8 v11848 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11848)(v11847, v11846);

endsub:;
}
	void f482_i_check_sub_call_args(void);
const i1 c02_s01e9[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f61_SimpleError(i8 /* message */);
	void f122_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f483_i_end_call(void);

// reduce_70 workspace at ws+3008 length ws+16
void f569_reduce_70(void) {

	i8 v11849 = (i8)(intptr_t)(ws+80);
	i8 v11850 = *(i8*)(intptr_t)v11849;
	i8 v11851 = v11850+(+8);
	i8 v11852 = *(i8*)(intptr_t)v11851;
	i8 v11853 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11853 = v11852;

	i1 v11854 = (i1)+1;
	i8 v11855 = (i8)(intptr_t)(ws+80);
	i8 v11856 = *(i8*)(intptr_t)v11855;
	i8 v11857 = v11856+(+41);
	*(i1*)(intptr_t)v11857 = v11854;

	i8 v11858 = (i8)(intptr_t)(f482_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v11858)();

	i8 v11859 = (i8)(intptr_t)(ws+3008);
	i8 v11860 = *(i8*)(intptr_t)v11859;
	i8 v11861 = v11860+(+105);
	i1 v11862 = *(i1*)(intptr_t)v11861;
	i1 v11863 = (i1)+1;
	if (v11862==v11863) goto c02_0877; else goto c02_0876;

c02_0876:;

	i8 v11864 = (i8)(intptr_t)c02_s01e9;
	i8 v11865 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11865)(v11864);

	goto c02_0873;

c02_0877:;

c02_0873:;

	i8 v11866 = (i8)(intptr_t)(ws+3008);
	i8 v11867 = *(i8*)(intptr_t)v11866;
	i8 v11868 = v11867+(+48);
	i8 v11869 = *(i8*)(intptr_t)v11868;
	i8 v11870 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11870 = v11869;

	i8 v11871 = (i8)(intptr_t)(ws+3016);
	i8 v11872 = *(i8*)(intptr_t)v11871;
	i8 v11873 = *(i8*)(intptr_t)v11872;
	i8 v11874 = v11873+(+42);
	i2 v11875 = *(i2*)(intptr_t)v11874;
	i1 v11876 = v11875;
	i8 v11877 = (i8)(intptr_t)(ws+2928);
	i8 v11878 = *(i8*)(intptr_t)v11877;
	i8 v11879 = (i8)(intptr_t)(ws+80);
	i8 v11880 = *(i8*)(intptr_t)v11879;
	i8 v11881 = *(i8*)(intptr_t)v11880;
	i8 v11882 = (i8)(intptr_t)(ws+3008);
	i8 v11883 = *(i8*)(intptr_t)v11882;
	i8 v11884 = (i8)(intptr_t)(f122_MidCalle);
	i8 v11885;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v11884)(&v11885, v11883, v11881, v11878, v11876);
	i8 v11886 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11886 = v11885;

	i8 v11887 = (i8)(intptr_t)(ws+3016);
	i8 v11888 = *(i8*)(intptr_t)v11887;
	i8 v11889 = *(i8*)(intptr_t)v11888;
	i8 v11890 = (i8)(intptr_t)(ws+2920);
	i8 v11891 = *(i8*)(intptr_t)v11890;
	i8 v11892 = v11891+(+16);
	*(i8*)(intptr_t)v11892 = v11889;

	i8 v11893 = (i8)(intptr_t)(f483_i_end_call);

	((void(*)(void))(intptr_t)v11893)();

endsub:;
}
	void f482_i_check_sub_call_args(void);
const i1 c02_s01ea[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f136_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f448_Generate(i8 /* statement */);
	void f483_i_end_call(void);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3008 length ws+8
void f570_reduce_71(void) {

	i8 v11894 = (i8)(intptr_t)(ws+80);
	i8 v11895 = *(i8*)(intptr_t)v11894;
	i8 v11896 = v11895+(+8);
	i8 v11897 = *(i8*)(intptr_t)v11896;
	i8 v11898 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11898 = v11897;

	i8 v11899 = (i8)(intptr_t)(f482_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v11899)();

	i8 v11900 = (i8)(intptr_t)(ws+3008);
	i8 v11901 = *(i8*)(intptr_t)v11900;
	i8 v11902 = v11901+(+105);
	i1 v11903 = *(i1*)(intptr_t)v11902;
	i1 v11904 = (i1)+0;
	if (v11903==v11904) goto c02_087c; else goto c02_087b;

c02_087b:;

	i8 v11905 = (i8)(intptr_t)c02_s01ea;
	i8 v11906 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11906)(v11905);

	goto c02_0878;

c02_087c:;

c02_0878:;

	i8 v11907 = (i8)(intptr_t)(ws+2936);
	i8 v11908 = *(i8*)(intptr_t)v11907;
	i8 v11909 = (i8)(intptr_t)(ws+80);
	i8 v11910 = *(i8*)(intptr_t)v11909;
	i8 v11911 = *(i8*)(intptr_t)v11910;
	i8 v11912 = (i8)(intptr_t)(ws+3008);
	i8 v11913 = *(i8*)(intptr_t)v11912;
	i8 v11914 = (i8)(intptr_t)(f136_MidCall);
	i8 v11915;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v11914)(&v11915, v11913, v11911, v11908);
	i8 v11916 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11916)(v11915);

	i8 v11917 = (i8)(intptr_t)(f483_i_end_call);

	((void(*)(void))(intptr_t)v11917)();

	i1 v11918 = (i1)+22;
	i8 v11919 = (i8)(intptr_t)(ws+2928);
	i8 v11920 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11920)(v11919, v11918);

endsub:;
}
	void f482_i_check_sub_call_args(void);
	void f136_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f448_Generate(i8 /* statement */);
const i1 c02_s01eb[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01ec[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f452_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f201_CheckNotPartialType(i8 /* type */);
	void f201_CheckNotPartialType(i8 /* type */);
	void f106_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f132_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f56_Discard(i8 /* node */);
const i1 c02_s01ed[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f483_i_end_call(void);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_72 workspace at ws+3008 length ws+41
void f571_reduce_72(void) {

	i8 v11921 = (i8)(intptr_t)(ws+80);
	i8 v11922 = *(i8*)(intptr_t)v11921;
	i8 v11923 = v11922+(+8);
	i8 v11924 = *(i8*)(intptr_t)v11923;
	i8 v11925 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11925 = v11924;

	i8 v11926 = (i8)(intptr_t)(f482_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v11926)();

	i8 v11927 = (i8)(intptr_t)(ws+2936);
	i8 v11928 = *(i8*)(intptr_t)v11927;
	i8 v11929 = (i8)(intptr_t)(ws+80);
	i8 v11930 = *(i8*)(intptr_t)v11929;
	i8 v11931 = *(i8*)(intptr_t)v11930;
	i8 v11932 = (i8)(intptr_t)(ws+3008);
	i8 v11933 = *(i8*)(intptr_t)v11932;
	i8 v11934 = (i8)(intptr_t)(f136_MidCall);
	i8 v11935;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v11934)(&v11935, v11933, v11931, v11928);
	i8 v11936 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11936)(v11935);

	i8 v11937 = (i8)(intptr_t)(ws+3008);
	i8 v11938 = *(i8*)(intptr_t)v11937;
	i8 v11939 = v11938+(+105);
	i1 v11940 = *(i1*)(intptr_t)v11939;
	i8 v11941 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v11941 = v11940;

	i1 v11942 = (i1)+0;
	i8 v11943 = (i8)(intptr_t)(ws+3017);
	*(i1*)(intptr_t)v11943 = v11942;

	i8 v11944 = (i8)(intptr_t)(ws+2960);
	i8 v11945 = *(i8*)(intptr_t)v11944;
	i8 v11946 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v11946 = v11945;

c02_087f:;

	i8 v11947 = (i8)(intptr_t)(ws+3024);
	i8 v11948 = *(i8*)(intptr_t)v11947;
	i8 v11949 = (i8)+0;
	if (v11948==v11949) goto c02_0882; else goto c02_0881;

c02_0881:;

	i8 v11950 = (i8)(intptr_t)(ws+3016);
	i1 v11951 = *(i1*)(intptr_t)v11950;
	i1 v11952 = (i1)+0;
	if (v11951==v11952) goto c02_0886; else goto c02_0887;

c02_0886:;

	i8 v11953 = (i8)(intptr_t)c02_s01eb;
	i8 v11954 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11954)(v11953);

	goto c02_0883;

c02_0887:;

c02_0883:;

	i8 v11955 = (i8)(intptr_t)(ws+3016);
	i1 v11956 = *(i1*)(intptr_t)v11955;
	i1 v11957 = v11956+(-1);
	i8 v11958 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v11958 = v11957;

	i8 v11959 = (i8)(intptr_t)(ws+3008);
	i8 v11960 = *(i8*)(intptr_t)v11959;
	i8 v11961 = (i8)(intptr_t)(ws+3016);
	i1 v11962 = *(i1*)(intptr_t)v11961;
	i8 v11963 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v11964;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v11963)(&v11964, v11962, v11960);
	i8 v11965 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v11965 = v11964;

	i8 v11966 = (i8)(intptr_t)(ws+3024);
	i8 v11967 = *(i8*)(intptr_t)v11966;
	i8 v11968 = v11967+(+24);
	i8 v11969 = *(i8*)(intptr_t)v11968;
	i8 v11970 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v11970 = v11969;

	i8 v11971 = (i8)+0;
	i8 v11972 = (i8)(intptr_t)(ws+3024);
	i8 v11973 = *(i8*)(intptr_t)v11972;
	i8 v11974 = v11973+(+24);
	*(i8*)(intptr_t)v11974 = v11971;

	i8 v11975 = (i8)(intptr_t)(ws+3024);
	i8 v11976 = *(i8*)(intptr_t)v11975;
	i8 v11977 = v11976+(+32);
	i8 v11978 = *(i8*)(intptr_t)v11977;
	i8 v11979 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v11979 = v11978;

	i8 v11980 = (i8)(intptr_t)(ws+3040);
	i8 v11981 = *(i8*)(intptr_t)v11980;
	i8 v11982 = v11981+(+16);
	i8 v11983 = *(i8*)(intptr_t)v11982;
	i8 v11984 = (i8)(intptr_t)(f205_IsPtr);
	i1 v11985;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11984)(&v11985, v11983);
	i1 v11986 = (i1)+0;
	if (v11985==v11986) goto c02_088b; else goto c02_088c;

c02_088b:;

	i8 v11987 = (i8)(intptr_t)c02_s01ec;
	i8 v11988 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11988)(v11987);

	goto c02_0888;

c02_088c:;

c02_0888:;

	i8 v11989 = (i8)(intptr_t)(ws+3040);
	i8 v11990 = *(i8*)(intptr_t)v11989;
	i8 v11991 = (i8)(intptr_t)(ws+3032);
	i8 v11992 = *(i8*)(intptr_t)v11991;
	i8 v11993 = *(i8*)(intptr_t)v11992;
	i8 v11994 = (i8)(intptr_t)(f452_MakePointerType);
	i8 v11995;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11994)(&v11995, v11993);
	i8 v11996 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v11996)(v11995, v11990);

	i8 v11997 = (i8)(intptr_t)(ws+3032);
	i8 v11998 = *(i8*)(intptr_t)v11997;
	i8 v11999 = *(i8*)(intptr_t)v11998;
	i8 v12000 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12000)(v11999);

	i8 v12001 = (i8)(intptr_t)(ws+3040);
	i8 v12002 = *(i8*)(intptr_t)v12001;
	i8 v12003 = v12002+(+16);
	i8 v12004 = *(i8*)(intptr_t)v12003;
	i8 v12005 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12005)(v12004);

	i8 v12006 = (i8)(intptr_t)(ws+3032);
	i8 v12007 = *(i8*)(intptr_t)v12006;
	i8 v12008 = *(i8*)(intptr_t)v12007;
	i8 v12009 = v12008+(+42);
	i2 v12010 = *(i2*)(intptr_t)v12009;
	i1 v12011 = v12010;
	i8 v12012 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v12012 = v12011;

	i8 v12013 = (i8)(intptr_t)(ws+3048);
	i1 v12014 = *(i1*)(intptr_t)v12013;
	i8 v12015 = (i8)(intptr_t)(ws+3048);
	i1 v12016 = *(i1*)(intptr_t)v12015;
	i8 v12017 = (i8)(intptr_t)(ws+3008);
	i8 v12018 = *(i8*)(intptr_t)v12017;
	i8 v12019 = (i8)(intptr_t)(ws+3017);
	i1 v12020 = *(i1*)(intptr_t)v12019;
	i8 v12021 = (i8)(intptr_t)(f106_MidPoparg);
	i8 v12022;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v12021)(&v12022, v12020, v12018, v12016);
	i8 v12023 = (i8)(intptr_t)(ws+3040);
	i8 v12024 = *(i8*)(intptr_t)v12023;
	i8 v12025 = (i8)(intptr_t)(f132_MidStore);
	i8 v12026;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12025)(&v12026, v12024, v12022, v12014);
	i8 v12027 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12027)(v12026);

	i8 v12028 = (i8)(intptr_t)(ws+3017);
	i1 v12029 = *(i1*)(intptr_t)v12028;
	i1 v12030 = v12029+(+1);
	i8 v12031 = (i8)(intptr_t)(ws+3017);
	*(i1*)(intptr_t)v12031 = v12030;

	i8 v12032 = (i8)(intptr_t)(ws+3032);
	i8 v12033 = *(i8*)(intptr_t)v12032;
	i8 v12034 = v12033+(+16);
	i8 v12035 = *(i8*)(intptr_t)v12034;
	i8 v12036 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v12036 = v12035;

	goto c02_087f;

c02_0882:;

	i8 v12037 = (i8)(intptr_t)(ws+2960);
	i8 v12038 = *(i8*)(intptr_t)v12037;
	i8 v12039 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12039)(v12038);

	i8 v12040 = (i8)(intptr_t)(ws+3017);
	i1 v12041 = *(i1*)(intptr_t)v12040;
	i8 v12042 = (i8)(intptr_t)(ws+3008);
	i8 v12043 = *(i8*)(intptr_t)v12042;
	i8 v12044 = v12043+(+105);
	i1 v12045 = *(i1*)(intptr_t)v12044;
	if (v12041==v12045) goto c02_0891; else goto c02_0890;

c02_0890:;

	i8 v12046 = (i8)(intptr_t)c02_s01ed;
	i8 v12047 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12047)(v12046);

	goto c02_088d;

c02_0891:;

c02_088d:;

	i8 v12048 = (i8)(intptr_t)(f483_i_end_call);

	((void(*)(void))(intptr_t)v12048)();

	i1 v12049 = (i1)+2;
	i8 v12050 = (i8)(intptr_t)(ws+2952);
	i8 v12051 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12051)(v12050, v12049);

	i1 v12052 = (i1)+22;
	i8 v12053 = (i8)(intptr_t)(ws+2928);
	i8 v12054 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12054)(v12053, v12052);

endsub:;
}
	void f206_IsSubroutine(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
const i1 c02_s01ee[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01ef[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f31_Alloc(i8* /* block */, i8 /* length */);

// reduce_73 workspace at ws+3008 length ws+16
void f572_reduce_73(void) {

	i8 v12055 = (i8)(intptr_t)(ws+2928);
	i8 v12056 = *(i8*)(intptr_t)v12055;
	i8 v12057 = v12056+(+16);
	i8 v12058 = *(i8*)(intptr_t)v12057;
	i8 v12059 = (i8)(intptr_t)(f206_IsSubroutine);
	i1 v12060;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12059)(&v12060, v12058);
	i1 v12061 = (i1)+0;
	if (v12060==v12061) goto c02_0895; else goto c02_0896;

c02_0895:;

	i8 v12062 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v12062)();

	i8 v12063 = (i8)(intptr_t)c02_s01ee;
	i8 v12064 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12064)(v12063);

	i8 v12065 = (i8)(intptr_t)(ws+2928);
	i8 v12066 = *(i8*)(intptr_t)v12065;
	i8 v12067 = v12066+(+16);
	i8 v12068 = *(i8*)(intptr_t)v12067;
	i8 v12069 = v12068+(+48);
	i8 v12070 = *(i8*)(intptr_t)v12069;
	i8 v12071 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12071)(v12070);

	i8 v12072 = (i8)(intptr_t)c02_s01ef;
	i8 v12073 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12073)(v12072);

	i8 v12074 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v12074)();

	goto c02_0892;

c02_0896:;

c02_0892:;

	i8 v12075 = (i8)+42;
	i8 v12076 = (i8)(intptr_t)(f31_Alloc);
	i8 v12077;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12076)(&v12077, v12075);
	i8 v12078 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12078 = v12077;

	i8 v12079 = (i8)(intptr_t)(ws+80);
	i8 v12080 = *(i8*)(intptr_t)v12079;
	i8 v12081 = (i8)(intptr_t)(ws+3008);
	i8 v12082 = *(i8*)(intptr_t)v12081;
	i8 v12083 = v12082+(+16);
	*(i8*)(intptr_t)v12083 = v12080;

	i8 v12084 = (i8)(intptr_t)(ws+2928);
	i8 v12085 = *(i8*)(intptr_t)v12084;
	i8 v12086 = v12085+(+16);
	i8 v12087 = *(i8*)(intptr_t)v12086;
	i8 v12088 = *(i8*)(intptr_t)v12087;
	i8 v12089 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v12089 = v12088;

	i8 v12090 = (i8)(intptr_t)(ws+2928);
	i8 v12091 = *(i8*)(intptr_t)v12090;
	i8 v12092 = (i8)(intptr_t)(ws+3008);
	i8 v12093 = *(i8*)(intptr_t)v12092;
	*(i8*)(intptr_t)v12093 = v12091;

	i8 v12094 = (i8)(intptr_t)(ws+3016);
	i8 v12095 = *(i8*)(intptr_t)v12094;
	i8 v12096 = (i8)(intptr_t)(ws+3008);
	i8 v12097 = *(i8*)(intptr_t)v12096;
	i8 v12098 = v12097+(+8);
	*(i8*)(intptr_t)v12098 = v12095;

	i8 v12099 = (i8)(intptr_t)(ws+3016);
	i8 v12100 = *(i8*)(intptr_t)v12099;
	i8 v12101 = v12100+(+40);
	i8 v12102 = *(i8*)(intptr_t)v12101;
	i8 v12103 = (i8)(intptr_t)(ws+3008);
	i8 v12104 = *(i8*)(intptr_t)v12103;
	i8 v12105 = v12104+(+24);
	*(i8*)(intptr_t)v12105 = v12102;

	i8 v12106 = (i8)(intptr_t)(ws+3016);
	i8 v12107 = *(i8*)(intptr_t)v12106;
	i8 v12108 = v12107+(+48);
	i8 v12109 = *(i8*)(intptr_t)v12108;
	i8 v12110 = (i8)(intptr_t)(ws+3008);
	i8 v12111 = *(i8*)(intptr_t)v12110;
	i8 v12112 = v12111+(+32);
	*(i8*)(intptr_t)v12112 = v12109;

	i8 v12113 = (i8)(intptr_t)(ws+3008);
	i8 v12114 = *(i8*)(intptr_t)v12113;
	i8 v12115 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v12115 = v12114;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3008 length ws+0
void f573_reduce_74(void) {

	i8 v12116 = (i8)(intptr_t)(ws+2936);
	i8 v12117 = *(i8*)(intptr_t)v12116;
	i8 v12118 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12118 = v12117;

	i1 v12119 = (i1)+4;
	i8 v12120 = (i8)(intptr_t)(ws+2928);
	i8 v12121 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12121)(v12120, v12119);

endsub:;
}
	void f141_MidEnd(i8* /* m */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_75 workspace at ws+3008 length ws+0
void f574_reduce_75(void) {

	i8 v12122 = (i8)(intptr_t)(f141_MidEnd);
	i8 v12123;

	((void(*)(i8* /* m */))(intptr_t)v12122)(&v12123);
	i8 v12124 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12124 = v12123;

	i1 v12125 = (i1)+4;
	i8 v12126 = (i8)(intptr_t)(ws+2928);
	i8 v12127 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12127)(v12126, v12125);

endsub:;
}

// reduce_76 workspace at ws+3008 length ws+0
void f575_reduce_76(void) {

	i8 v12128 = (i8)(intptr_t)(ws+2928);
	i8 v12129 = *(i8*)(intptr_t)v12128;
	i8 v12130 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12130 = v12129;

endsub:;
}
	void f56_Discard(i8 /* node */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3008 length ws+0
void f576_reduce_77(void) {

	i8 v12131 = (i8)(intptr_t)(ws+2928);
	i8 v12132 = *(i8*)(intptr_t)v12131;
	i8 v12133 = v12132+(+24);
	i8 v12134 = *(i8*)(intptr_t)v12133;
	i8 v12135 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12135)(v12134);

	i8 v12136 = (i8)(intptr_t)(ws+2944);
	i8 v12137 = *(i8*)(intptr_t)v12136;
	i8 v12138 = (i8)(intptr_t)(ws+2928);
	i8 v12139 = *(i8*)(intptr_t)v12138;
	i8 v12140 = v12139+(+24);
	*(i8*)(intptr_t)v12140 = v12137;

	i8 v12141 = (i8)(intptr_t)(ws+2928);
	i8 v12142 = *(i8*)(intptr_t)v12141;
	i8 v12143 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12143 = v12142;

	i1 v12144 = (i1)+45;
	i8 v12145 = (i8)(intptr_t)(ws+2936);
	i8 v12146 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12146)(v12145, v12144);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s01f0[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f460_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f201_CheckNotPartialType(i8 /* type */);
	void f201_CheckNotPartialType(i8 /* type */);
	void f147_NodeWidth(i1* /* width */, i8 /* node */);
	void f141_MidEnd(i8* /* m */);
	void f107_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_78 workspace at ws+3008 length ws+8
void f577_reduce_78(void) {

	i8 v12147 = (i8)(intptr_t)(ws+80);
	i8 v12148 = *(i8*)(intptr_t)v12147;
	i8 v12149 = v12148+(+24);
	i8 v12150 = *(i8*)(intptr_t)v12149;
	i8 v12151 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12151 = v12150;

	i8 v12152 = (i8)(intptr_t)(ws+3008);
	i8 v12153 = *(i8*)(intptr_t)v12152;
	i8 v12154 = (i8)+0;
	if (v12153==v12154) goto c02_089a; else goto c02_089b;

c02_089a:;

	i8 v12155 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v12155)();

	i8 v12156 = (i8)(intptr_t)c02_s01f0;
	i8 v12157 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12157)(v12156);

	i8 v12158 = (i8)(intptr_t)(ws+80);
	i8 v12159 = *(i8*)(intptr_t)v12158;
	i8 v12160 = v12159+(+8);
	i8 v12161 = *(i8*)(intptr_t)v12160;
	i8 v12162 = *(i8*)(intptr_t)v12161;
	i8 v12163 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12163)(v12162);

	i8 v12164 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v12164)();

	goto c02_0897;

c02_089b:;

c02_0897:;

	i8 v12165 = (i8)(intptr_t)(ws+80);
	i8 v12166 = *(i8*)(intptr_t)v12165;
	i8 v12167 = v12166+(+24);
	i8 v12168 = *(i8*)(intptr_t)v12167;
	i8 v12169 = v12168+(+16);
	i8 v12170 = *(i8*)(intptr_t)v12169;
	i8 v12171 = (i8)(intptr_t)(ws+80);
	i8 v12172 = *(i8*)(intptr_t)v12171;
	i8 v12173 = v12172+(+24);
	*(i8*)(intptr_t)v12173 = v12170;

	i8 v12174 = (i8)(intptr_t)(ws+2928);
	i8 v12175 = *(i8*)(intptr_t)v12174;
	i8 v12176 = (i8)(intptr_t)(ws+3008);
	i8 v12177 = *(i8*)(intptr_t)v12176;
	i8 v12178 = *(i8*)(intptr_t)v12177;
	i8 v12179 = (i8)(intptr_t)(f460_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v12179)(v12178, v12175);

	i8 v12180 = (i8)(intptr_t)(ws+3008);
	i8 v12181 = *(i8*)(intptr_t)v12180;
	i8 v12182 = *(i8*)(intptr_t)v12181;
	i8 v12183 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12183)(v12182);

	i8 v12184 = (i8)(intptr_t)(ws+2928);
	i8 v12185 = *(i8*)(intptr_t)v12184;
	i8 v12186 = v12185+(+16);
	i8 v12187 = *(i8*)(intptr_t)v12186;
	i8 v12188 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12188)(v12187);

	i8 v12189 = (i8)(intptr_t)(ws+80);
	i8 v12190 = *(i8*)(intptr_t)v12189;
	i8 v12191 = v12190+(+40);
	i1 v12192 = *(i1*)(intptr_t)v12191;
	i1 v12193 = v12192+(+1);
	i8 v12194 = (i8)(intptr_t)(ws+80);
	i8 v12195 = *(i8*)(intptr_t)v12194;
	i8 v12196 = v12195+(+40);
	*(i1*)(intptr_t)v12196 = v12193;

	i8 v12197 = (i8)(intptr_t)(ws+2928);
	i8 v12198 = *(i8*)(intptr_t)v12197;
	i8 v12199 = (i8)(intptr_t)(f147_NodeWidth);
	i1 v12200;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v12199)(&v12200, v12198);
	i8 v12201 = (i8)(intptr_t)(f141_MidEnd);
	i8 v12202;

	((void(*)(i8* /* m */))(intptr_t)v12201)(&v12202);
	i8 v12203 = (i8)(intptr_t)(ws+2928);
	i8 v12204 = *(i8*)(intptr_t)v12203;
	i8 v12205 = (i8)(intptr_t)(ws+80);
	i8 v12206 = *(i8*)(intptr_t)v12205;
	i8 v12207 = v12206+(+8);
	i8 v12208 = *(i8*)(intptr_t)v12207;
	i8 v12209 = (i8)(intptr_t)(ws+80);
	i8 v12210 = *(i8*)(intptr_t)v12209;
	i8 v12211 = v12210+(+8);
	i8 v12212 = *(i8*)(intptr_t)v12211;
	i8 v12213 = v12212+(+104);
	i1 v12214 = *(i1*)(intptr_t)v12213;
	i8 v12215 = (i8)(intptr_t)(ws+80);
	i8 v12216 = *(i8*)(intptr_t)v12215;
	i8 v12217 = v12216+(+40);
	i1 v12218 = *(i1*)(intptr_t)v12217;
	i1 v12219 = v12214-v12218;
	i8 v12220 = (i8)(intptr_t)(f107_MidArg);
	i8 v12221;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12220)(&v12221, v12219, v12208, v12204, v12202, v12200);
	i8 v12222 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12222 = v12221;

endsub:;
}
	void f100_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3008 length ws+0
void f578_reduce_79(void) {

	i8 v12223 = (i8)(intptr_t)(ws+2936);
	i8 v12224 = *(i8*)(intptr_t)v12223;
	i8 v12225 = (i8)(intptr_t)(ws+2952);
	i8 v12226 = *(i8*)(intptr_t)v12225;
	i8 v12227 = (i8)(intptr_t)(f100_MidPair);
	i8 v12228;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12227)(&v12228, v12226, v12224);
	i8 v12229 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12229 = v12228;

	i1 v12230 = (i1)+45;
	i8 v12231 = (i8)(intptr_t)(ws+2944);
	i8 v12232 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12232)(v12231, v12230);

	i1 v12233 = (i1)+4;
	i8 v12234 = (i8)(intptr_t)(ws+2928);
	i8 v12235 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12235)(v12234, v12233);

endsub:;
}
	void f100_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_80 workspace at ws+3008 length ws+0
void f579_reduce_80(void) {

	i8 v12236 = (i8)(intptr_t)(ws+2928);
	i8 v12237 = *(i8*)(intptr_t)v12236;
	i8 v12238 = (i8)+0;
	i8 v12239 = (i8)(intptr_t)(f100_MidPair);
	i8 v12240;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12239)(&v12240, v12238, v12237);
	i8 v12241 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12241 = v12240;

endsub:;
}
	void f100_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3008 length ws+0
void f580_reduce_81(void) {

	i8 v12242 = (i8)(intptr_t)(ws+2928);
	i8 v12243 = *(i8*)(intptr_t)v12242;
	i8 v12244 = (i8)(intptr_t)(ws+2944);
	i8 v12245 = *(i8*)(intptr_t)v12244;
	i8 v12246 = (i8)(intptr_t)(f100_MidPair);
	i8 v12247;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12246)(&v12247, v12245, v12243);
	i8 v12248 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12248 = v12247;

	i1 v12249 = (i1)+45;
	i8 v12250 = (i8)(intptr_t)(ws+2936);
	i8 v12251 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12251)(v12250, v12249);

endsub:;
}
	void f212_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_82 workspace at ws+3008 length ws+0
void f581_reduce_82(void) {

	i8 v12252 = (i8)(intptr_t)(ws+2928);
	i8 v12253 = *(i8*)(intptr_t)v12252;
	i8 v12254 = (i8)(intptr_t)(f212_UndoLValue);
	i8 v12255;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v12254)(&v12255, v12253);
	i8 v12256 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12256 = v12255;

endsub:;
}
	void f139_MidStartsub(i8* /* m */, i8 /* subr */);
	void f448_Generate(i8 /* statement */);
	void f112_MidEndsub(i8* /* m */, i8 /* subr */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3008 length ws+0
void f582_reduce_83(void) {

	i1 v12257 = (i1)+30;
	i8 v12258 = (i8)(intptr_t)(ws+2952);
	i8 v12259 = *(i8*)(intptr_t)v12258;
	i8 v12260 = v12259+(+46);
	*(i1*)(intptr_t)v12260 = v12257;

	i1 v12261 = (i1)+6;
	i8 v12262 = (i8)(intptr_t)(ws+2952);
	i8 v12263 = *(i8*)(intptr_t)v12262;
	i8 v12264 = v12263+(+40);
	*(i1*)(intptr_t)v12264 = v12261;

	i8 v12265 = (i8)(intptr_t)(ws+1056);
	i8 v12266 = *(i8*)(intptr_t)v12265;
	i8 v12267 = v12266+(+42);
	i2 v12268 = *(i2*)(intptr_t)v12267;
	i8 v12269 = (i8)(intptr_t)(ws+2952);
	i8 v12270 = *(i8*)(intptr_t)v12269;
	i8 v12271 = v12270+(+42);
	*(i2*)(intptr_t)v12271 = v12268;

	i8 v12272 = (i8)(intptr_t)(ws+1056);
	i8 v12273 = *(i8*)(intptr_t)v12272;
	i8 v12274 = v12273+(+41);
	i1 v12275 = *(i1*)(intptr_t)v12274;
	i8 v12276 = (i8)(intptr_t)(ws+2952);
	i8 v12277 = *(i8*)(intptr_t)v12276;
	i8 v12278 = v12277+(+41);
	*(i1*)(intptr_t)v12278 = v12275;

	i8 v12279 = (i8)(intptr_t)(ws+1056);
	i8 v12280 = *(i8*)(intptr_t)v12279;
	i8 v12281 = v12280+(+44);
	i2 v12282 = *(i2*)(intptr_t)v12281;
	i8 v12283 = (i8)(intptr_t)(ws+2952);
	i8 v12284 = *(i8*)(intptr_t)v12283;
	i8 v12285 = v12284+(+44);
	*(i2*)(intptr_t)v12285 = v12282;

	i8 v12286 = (i8)(intptr_t)(ws+1224);
	i8 v12287 = *(i8*)(intptr_t)v12286;
	i8 v12288 = (i8)(intptr_t)(ws+2952);
	i8 v12289 = *(i8*)(intptr_t)v12288;
	*(i8*)(intptr_t)v12289 = v12287;

	i8 v12290 = (i8)(intptr_t)(ws+1224);
	i8 v12291 = *(i8*)(intptr_t)v12290;
	i8 v12292 = v12291+(+106);
	i1 v12293 = *(i1*)(intptr_t)v12292;
	i1 v12294 = v12293|(+2);
	i8 v12295 = (i8)(intptr_t)(ws+1224);
	i8 v12296 = *(i8*)(intptr_t)v12295;
	i8 v12297 = v12296+(+106);
	*(i1*)(intptr_t)v12297 = v12294;

	i8 v12298 = (i8)(intptr_t)(ws+1224);
	i8 v12299 = *(i8*)(intptr_t)v12298;
	i8 v12300 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12300 = v12299;

	i8 v12301 = (i8)(intptr_t)(ws+40);
	i8 v12302 = *(i8*)(intptr_t)v12301;
	i8 v12303 = (i8)(intptr_t)(f139_MidStartsub);
	i8 v12304;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12303)(&v12304, v12302);
	i8 v12305 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12305)(v12304);

	i8 v12306 = (i8)(intptr_t)(ws+40);
	i8 v12307 = *(i8*)(intptr_t)v12306;
	i8 v12308 = (i8)(intptr_t)(f112_MidEndsub);
	i8 v12309;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12308)(&v12309, v12307);
	i8 v12310 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12310)(v12309);

	i8 v12311 = (i8)(intptr_t)(ws+40);
	i8 v12312 = *(i8*)(intptr_t)v12311;
	i8 v12313 = v12312+(+8);
	i8 v12314 = *(i8*)(intptr_t)v12313;
	i8 v12315 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12315 = v12314;

	i1 v12316 = (i1)+22;
	i8 v12317 = (i8)(intptr_t)(ws+2928);
	i8 v12318 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12318)(v12317, v12316);

endsub:;
}
const i1 c02_s01f1[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3016 length ws+0
void f584_not_an_interface(void) {

	i8 v12319 = (i8)(intptr_t)c02_s01f1;
	i8 v12320 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12320)(v12319);

endsub:;
}
	void f206_IsSubroutine(i1* /* result */, i8 /* type */);
	void f584_not_an_interface(void);
	void f584_not_an_interface(void);
	void f184_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f184_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f458_CopyParameterList(i8* /* newparam */, i8 /* subr */, i8 /* param */);
	void f83_CountParameters(i1* /* count */, i8 /* param */);
	void f458_CopyParameterList(i8* /* newparam */, i8 /* subr */, i8 /* param */);
	void f83_CountParameters(i1* /* count */, i8 /* param */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_84 workspace at ws+3008 length ws+8
void f583_reduce_84(void) {


	i8 v12321 = (i8)(intptr_t)(ws+2928);
	i8 v12322 = *(i8*)(intptr_t)v12321;
	i8 v12323 = (i8)(intptr_t)(f206_IsSubroutine);
	i1 v12324;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12323)(&v12324, v12322);
	i1 v12325 = (i1)+0;
	if (v12324==v12325) goto c02_089f; else goto c02_08a0;

c02_089f:;

	i8 v12326 = (i8)(intptr_t)(f584_not_an_interface);

	((void(*)(void))(intptr_t)v12326)();

	goto c02_089c;

c02_08a0:;

c02_089c:;

	i8 v12327 = (i8)(intptr_t)(ws+2928);
	i8 v12328 = *(i8*)(intptr_t)v12327;
	i8 v12329 = *(i8*)(intptr_t)v12328;
	i8 v12330 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12330 = v12329;

	i8 v12331 = (i8)(intptr_t)(ws+3008);
	i8 v12332 = *(i8*)(intptr_t)v12331;
	i8 v12333 = v12332+(+106);
	i1 v12334 = *(i1*)(intptr_t)v12333;
	i1 v12335 = v12334&(+2);
	i1 v12336 = (i1)+0;
	if (v12335==v12336) goto c02_08a4; else goto c02_08a5;

c02_08a4:;

	i8 v12337 = (i8)(intptr_t)(f584_not_an_interface);

	((void(*)(void))(intptr_t)v12337)();

	goto c02_08a1;

c02_08a5:;

c02_08a1:;

	i8 v12338 = (i8)(intptr_t)(ws+1224);
	i8 v12339 = *(i8*)(intptr_t)v12338;
	i8 v12340 = v12339+(+106);
	i1 v12341 = *(i1*)(intptr_t)v12340;
	i1 v12342 = v12341|(+4);
	i8 v12343 = (i8)(intptr_t)(ws+1224);
	i8 v12344 = *(i8*)(intptr_t)v12343;
	i8 v12345 = v12344+(+106);
	*(i1*)(intptr_t)v12345 = v12342;

	i8 v12346 = (i8)(intptr_t)(ws+3008);
	i8 v12347 = *(i8*)(intptr_t)v12346;
	i8 v12348 = (i8)(intptr_t)(ws+1224);
	i8 v12349 = *(i8*)(intptr_t)v12348;
	i8 v12350 = v12349+(+64);
	*(i8*)(intptr_t)v12350 = v12347;

	i8 v12351 = (i8)(intptr_t)(ws+2928);
	i8 v12352 = *(i8*)(intptr_t)v12351;
	i8 v12353 = (i8)(intptr_t)(ws+1224);
	i8 v12354 = *(i8*)(intptr_t)v12353;
	i8 v12355 = v12354+(+56);
	*(i8*)(intptr_t)v12355 = v12352;

	i8 v12356 = (i8)(intptr_t)(ws+40);
	i8 v12357 = *(i8*)(intptr_t)v12356;
	i8 v12358 = (i8)(intptr_t)(ws+3008);
	i8 v12359 = *(i8*)(intptr_t)v12358;
	i8 v12360 = (i8)(intptr_t)(f184_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v12360)(v12359, v12357);

	i8 v12361 = (i8)(intptr_t)(ws+3008);
	i8 v12362 = *(i8*)(intptr_t)v12361;
	i8 v12363 = (i8)(intptr_t)(ws+1224);
	i8 v12364 = *(i8*)(intptr_t)v12363;
	i8 v12365 = (i8)(intptr_t)(f184_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v12365)(v12364, v12362);

	i8 v12366 = (i8)(intptr_t)(ws+3008);
	i8 v12367 = *(i8*)(intptr_t)v12366;
	i8 v12368 = v12367+(+40);
	i8 v12369 = *(i8*)(intptr_t)v12368;
	i8 v12370 = (i8)(intptr_t)(ws+1224);
	i8 v12371 = *(i8*)(intptr_t)v12370;
	i8 v12372 = (i8)(intptr_t)(f458_CopyParameterList);
	i8 v12373;

	((void(*)(i8* /* newparam */, i8 /* subr */, i8 /* param */))(intptr_t)v12372)(&v12373, v12371, v12369);
	i8 v12374 = (i8)(intptr_t)(ws+1224);
	i8 v12375 = *(i8*)(intptr_t)v12374;
	i8 v12376 = v12375+(+40);
	*(i8*)(intptr_t)v12376 = v12373;

	i8 v12377 = (i8)(intptr_t)(ws+1224);
	i8 v12378 = *(i8*)(intptr_t)v12377;
	i8 v12379 = v12378+(+40);
	i8 v12380 = *(i8*)(intptr_t)v12379;
	i8 v12381 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12382;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12381)(&v12382, v12380);
	i8 v12383 = (i8)(intptr_t)(ws+1224);
	i8 v12384 = *(i8*)(intptr_t)v12383;
	i8 v12385 = v12384+(+104);
	*(i1*)(intptr_t)v12385 = v12382;

	i8 v12386 = (i8)(intptr_t)(ws+3008);
	i8 v12387 = *(i8*)(intptr_t)v12386;
	i8 v12388 = v12387+(+48);
	i8 v12389 = *(i8*)(intptr_t)v12388;
	i8 v12390 = (i8)(intptr_t)(ws+1224);
	i8 v12391 = *(i8*)(intptr_t)v12390;
	i8 v12392 = (i8)(intptr_t)(f458_CopyParameterList);
	i8 v12393;

	((void(*)(i8* /* newparam */, i8 /* subr */, i8 /* param */))(intptr_t)v12392)(&v12393, v12391, v12389);
	i8 v12394 = (i8)(intptr_t)(ws+1224);
	i8 v12395 = *(i8*)(intptr_t)v12394;
	i8 v12396 = v12395+(+48);
	*(i8*)(intptr_t)v12396 = v12393;

	i8 v12397 = (i8)(intptr_t)(ws+1224);
	i8 v12398 = *(i8*)(intptr_t)v12397;
	i8 v12399 = v12398+(+48);
	i8 v12400 = *(i8*)(intptr_t)v12399;
	i8 v12401 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12402;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12401)(&v12402, v12400);
	i8 v12403 = (i8)(intptr_t)(ws+1224);
	i8 v12404 = *(i8*)(intptr_t)v12403;
	i8 v12405 = v12404+(+105);
	*(i1*)(intptr_t)v12405 = v12402;

	i1 v12406 = (i1)+68;
	i8 v12407 = (i8)(intptr_t)(ws+2936);
	i8 v12408 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12408)(v12407, v12406);

endsub:;
}
	void f183_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3008 length ws+0
void f585_reduce_85(void) {

	i8 v12409 = (i8)(intptr_t)(ws+1224);
	i8 v12410 = *(i8*)(intptr_t)v12409;
	i8 v12411 = v12410+(+72);
	i2 v12412 = *(i2*)(intptr_t)v12411;
	i8 v12413 = (i8)(intptr_t)(ws+2936);
	i8 v12414 = *(i8*)(intptr_t)v12413;
	i8 v12415 = (i8)(intptr_t)(f183_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v12415)(v12414, v12412);

	i1 v12416 = (i1)+11;
	i8 v12417 = (i8)(intptr_t)(ws+2952);
	i8 v12418 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12418)(v12417, v12416);

	i1 v12419 = (i1)+16;
	i8 v12420 = (i8)(intptr_t)(ws+2944);
	i8 v12421 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12421)(v12420, v12419);

	i1 v12422 = (i1)+4;
	i8 v12423 = (i8)(intptr_t)(ws+2928);
	i8 v12424 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12424)(v12423, v12422);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f215_AllocSubrId(i2* /* id */);
	void f182_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_86 workspace at ws+3008 length ws+0
void f586_reduce_86(void) {

	i8 v12425 = (i8)+107;
	i8 v12426 = (i8)(intptr_t)(f31_Alloc);
	i8 v12427;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12426)(&v12427, v12425);
	i8 v12428 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v12428 = v12427;

	i8 v12429 = (i8)(intptr_t)(ws+40);
	i8 v12430 = *(i8*)(intptr_t)v12429;
	i8 v12431 = v12430+(+16);
	i8 v12432 = (i8)(intptr_t)(ws+1224);
	i8 v12433 = *(i8*)(intptr_t)v12432;
	i8 v12434 = v12433+(+32);
	*(i8*)(intptr_t)v12434 = v12431;

	i8 v12435 = (i8)(intptr_t)(ws+40);
	i8 v12436 = *(i8*)(intptr_t)v12435;
	i8 v12437 = (i8)(intptr_t)(ws+1224);
	i8 v12438 = *(i8*)(intptr_t)v12437;
	i8 v12439 = v12438+(+8);
	*(i8*)(intptr_t)v12439 = v12436;

	i8 v12440 = (i8)(intptr_t)(f215_AllocSubrId);
	i2 v12441;

	((void(*)(i2* /* id */))(intptr_t)v12440)(&v12441);
	i8 v12442 = (i8)(intptr_t)(ws+1224);
	i8 v12443 = *(i8*)(intptr_t)v12442;
	i8 v12444 = v12443+(+72);
	*(i2*)(intptr_t)v12444 = v12441;

	i8 v12445 = (i8)(intptr_t)(ws+2928);
	i8 v12446 = *(i8*)(intptr_t)v12445;
	i8 v12447 = v12446+(+48);
	i8 v12448 = *(i8*)(intptr_t)v12447;
	i8 v12449 = (i8)(intptr_t)(ws+1224);
	i8 v12450 = *(i8*)(intptr_t)v12449;
	*(i8*)(intptr_t)v12450 = v12448;

	i1 v12451 = (i1)+25;
	i8 v12452 = (i8)(intptr_t)(ws+2928);
	i8 v12453 = *(i8*)(intptr_t)v12452;
	i8 v12454 = v12453+(+46);
	*(i1*)(intptr_t)v12454 = v12451;

	i8 v12455 = (i8)(intptr_t)(ws+1224);
	i8 v12456 = *(i8*)(intptr_t)v12455;
	i8 v12457 = (i8)(intptr_t)(ws+2928);
	i8 v12458 = *(i8*)(intptr_t)v12457;
	*(i8*)(intptr_t)v12458 = v12456;

	i8 v12459 = (i8)(intptr_t)(ws+1224);
	i8 v12460 = *(i8*)(intptr_t)v12459;
	i8 v12461 = (i8)(intptr_t)(f182_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v12461)(v12460);

	i8 v12462 = (i8)(intptr_t)(ws+2928);
	i8 v12463 = *(i8*)(intptr_t)v12462;
	i8 v12464 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12464 = v12463;

endsub:;
}
const i1 c02_s01f2[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f61_SimpleError(i8 /* message */);
const i1 c02_s01f3[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
const i1 c02_s01f4[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3008 length ws+0
void f587_reduce_87(void) {

	i8 v12465 = (i8)(intptr_t)(ws+2928);
	i8 v12466 = *(i8*)(intptr_t)v12465;
	i8 v12467 = v12466+(+46);
	i1 v12468 = *(i1*)(intptr_t)v12467;
	i1 v12469 = (i1)+25;
	if (v12468==v12469) goto c02_08aa; else goto c02_08a9;

c02_08a9:;

	i8 v12470 = (i8)(intptr_t)c02_s01f2;
	i8 v12471 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12471)(v12470);

	goto c02_08a6;

c02_08aa:;

c02_08a6:;

	i8 v12472 = (i8)(intptr_t)(ws+2928);
	i8 v12473 = *(i8*)(intptr_t)v12472;
	i8 v12474 = *(i8*)(intptr_t)v12473;
	i8 v12475 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v12475 = v12474;

	i8 v12476 = (i8)(intptr_t)(ws+1224);
	i8 v12477 = *(i8*)(intptr_t)v12476;
	i8 v12478 = v12477+(+106);
	i1 v12479 = *(i1*)(intptr_t)v12478;
	i1 v12480 = v12479&(+1);
	i1 v12481 = (i1)+0;
	if (v12480==v12481) goto c02_08af; else goto c02_08ae;

c02_08ae:;

	i8 v12482 = (i8)(intptr_t)c02_s01f3;
	i8 v12483 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12483)(v12482);

	goto c02_08ab;

c02_08af:;

c02_08ab:;

	i8 v12484 = (i8)(intptr_t)(ws+1224);
	i8 v12485 = *(i8*)(intptr_t)v12484;
	i8 v12486 = v12485+(+8);
	i8 v12487 = *(i8*)(intptr_t)v12486;
	i8 v12488 = (i8)(intptr_t)(ws+40);
	i8 v12489 = *(i8*)(intptr_t)v12488;
	if (v12487==v12489) goto c02_08b4; else goto c02_08b3;

c02_08b3:;

	i8 v12490 = (i8)(intptr_t)c02_s01f4;
	i8 v12491 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12491)(v12490);

	goto c02_08b0;

c02_08b4:;

c02_08b0:;

	i1 v12492 = (i1)+25;
	i8 v12493 = (i8)(intptr_t)(ws+2936);
	i8 v12494 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12494)(v12493, v12492);

endsub:;
}
	void f139_MidStartsub(i8* /* m */, i8 /* subr */);
	void f448_Generate(i8 /* statement */);

// reduce_88 workspace at ws+3008 length ws+0
void f588_reduce_88(void) {

	i8 v12495 = (i8)(intptr_t)(ws+52);
	i2 v12496 = *(i2*)(intptr_t)v12495;
	i8 v12497 = (i8)(intptr_t)(ws+1224);
	i8 v12498 = *(i8*)(intptr_t)v12497;
	i8 v12499 = v12498+(+82);
	*(i2*)(intptr_t)v12499 = v12496;

	i2 v12500 = (i2)+0;
	i8 v12501 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v12501 = v12500;

	i8 v12502 = (i8)(intptr_t)(ws+54);
	i2 v12503 = *(i2*)(intptr_t)v12502;
	i8 v12504 = (i8)(intptr_t)(ws+1224);
	i8 v12505 = *(i8*)(intptr_t)v12504;
	i8 v12506 = v12505+(+84);
	*(i2*)(intptr_t)v12506 = v12503;

	i2 v12507 = (i2)+0;
	i8 v12508 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v12508 = v12507;

	i8 v12509 = (i8)(intptr_t)(ws+1224);
	i8 v12510 = *(i8*)(intptr_t)v12509;
	i8 v12511 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12511 = v12510;

	i8 v12512 = (i8)(intptr_t)(ws+40);
	i8 v12513 = *(i8*)(intptr_t)v12512;
	i8 v12514 = (i8)(intptr_t)(f139_MidStartsub);
	i8 v12515;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12514)(&v12515, v12513);
	i8 v12516 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12516)(v12515);

	i8 v12517 = (i8)(intptr_t)(ws+40);
	i8 v12518 = *(i8*)(intptr_t)v12517;
	i8 v12519 = v12518+(+106);
	i1 v12520 = *(i1*)(intptr_t)v12519;
	i1 v12521 = v12520|(+1);
	i8 v12522 = (i8)(intptr_t)(ws+40);
	i8 v12523 = *(i8*)(intptr_t)v12522;
	i8 v12524 = v12523+(+106);
	*(i1*)(intptr_t)v12524 = v12521;

endsub:;
}
	void f112_MidEndsub(i8* /* m */, i8 /* subr */);
	void f448_Generate(i8 /* statement */);
	void f455_DestructSubroutineContents(i8 /* subr */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_89 workspace at ws+3008 length ws+8
void f589_reduce_89(void) {

	i8 v12525 = (i8)(intptr_t)(ws+40);
	i8 v12526 = *(i8*)(intptr_t)v12525;
	i8 v12527 = (i8)(intptr_t)(f112_MidEndsub);
	i8 v12528;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12527)(&v12528, v12526);
	i8 v12529 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12529)(v12528);

	i8 v12530 = (i8)(intptr_t)(ws+40);
	i8 v12531 = *(i8*)(intptr_t)v12530;
	i8 v12532 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12532 = v12531;

	i8 v12533 = (i8)(intptr_t)(ws+3008);
	i8 v12534 = *(i8*)(intptr_t)v12533;
	i8 v12535 = v12534+(+82);
	i2 v12536 = *(i2*)(intptr_t)v12535;
	i8 v12537 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v12537 = v12536;

	i8 v12538 = (i8)(intptr_t)(ws+3008);
	i8 v12539 = *(i8*)(intptr_t)v12538;
	i8 v12540 = v12539+(+84);
	i2 v12541 = *(i2*)(intptr_t)v12540;
	i8 v12542 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v12542 = v12541;

	i8 v12543 = (i8)(intptr_t)(ws+3008);
	i8 v12544 = *(i8*)(intptr_t)v12543;
	i8 v12545 = v12544+(+8);
	i8 v12546 = *(i8*)(intptr_t)v12545;
	i8 v12547 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12547 = v12546;

	i8 v12548 = (i8)(intptr_t)(ws+3008);
	i8 v12549 = *(i8*)(intptr_t)v12548;
	i8 v12550 = (i8)(intptr_t)(f455_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v12550)(v12549);

	i1 v12551 = (i1)+25;
	i8 v12552 = (i8)(intptr_t)(ws+2928);
	i8 v12553 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12553)(v12552, v12551);

endsub:;
}

// reduce_90 workspace at ws+3008 length ws+0
void f590_reduce_90(void) {

	i1 v12554 = (i1)+0;
	i8 v12555 = (i8)(intptr_t)(ws+1224);
	i8 v12556 = *(i8*)(intptr_t)v12555;
	i8 v12557 = v12556+(+105);
	*(i1*)(intptr_t)v12557 = v12554;

endsub:;
}
	void f83_CountParameters(i1* /* count */, i8 /* param */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3008 length ws+0
void f591_reduce_91(void) {

	i8 v12558 = (i8)(intptr_t)(ws+2928);
	i8 v12559 = *(i8*)(intptr_t)v12558;
	i8 v12560 = (i8)(intptr_t)(ws+1224);
	i8 v12561 = *(i8*)(intptr_t)v12560;
	i8 v12562 = v12561+(+48);
	*(i8*)(intptr_t)v12562 = v12559;

	i8 v12563 = (i8)(intptr_t)(ws+2928);
	i8 v12564 = *(i8*)(intptr_t)v12563;
	i8 v12565 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12566;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12565)(&v12566, v12564);
	i8 v12567 = (i8)(intptr_t)(ws+1224);
	i8 v12568 = *(i8*)(intptr_t)v12567;
	i8 v12569 = v12568+(+105);
	*(i1*)(intptr_t)v12569 = v12566;

	i1 v12570 = (i1)+6;
	i8 v12571 = (i8)(intptr_t)(ws+2936);
	i8 v12572 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12572)(v12571, v12570);

endsub:;
}
	void f83_CountParameters(i1* /* count */, i8 /* param */);

// reduce_92 workspace at ws+3008 length ws+0
void f592_reduce_92(void) {

	i8 v12573 = (i8)(intptr_t)(ws+2928);
	i8 v12574 = *(i8*)(intptr_t)v12573;
	i8 v12575 = (i8)(intptr_t)(ws+1224);
	i8 v12576 = *(i8*)(intptr_t)v12575;
	i8 v12577 = v12576+(+40);
	*(i8*)(intptr_t)v12577 = v12574;

	i8 v12578 = (i8)(intptr_t)(ws+2928);
	i8 v12579 = *(i8*)(intptr_t)v12578;
	i8 v12580 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12581;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12580)(&v12581, v12579);
	i8 v12582 = (i8)(intptr_t)(ws+1224);
	i8 v12583 = *(i8*)(intptr_t)v12582;
	i8 v12584 = v12583+(+104);
	*(i1*)(intptr_t)v12584 = v12581;

endsub:;
}

// reduce_93 workspace at ws+3008 length ws+0
void f593_reduce_93(void) {

	i8 v12585 = (i8)+0;
	i8 v12586 = (i8)(intptr_t)(ws+1224);
	i8 v12587 = *(i8*)(intptr_t)v12586;
	i8 v12588 = v12587+(+40);
	*(i8*)(intptr_t)v12588 = v12585;

	i1 v12589 = (i1)+0;
	i8 v12590 = (i8)(intptr_t)(ws+1224);
	i8 v12591 = *(i8*)(intptr_t)v12590;
	i8 v12592 = v12591+(+104);
	*(i1*)(intptr_t)v12592 = v12589;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_94 workspace at ws+3008 length ws+0
void f594_reduce_94(void) {

	i8 v12593 = (i8)+0;
	i8 v12594 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12594 = v12593;

	i1 v12595 = (i1)+4;
	i8 v12596 = (i8)(intptr_t)(ws+2928);
	i8 v12597 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12597)(v12596, v12595);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3008 length ws+0
void f595_reduce_95(void) {

	i8 v12598 = (i8)(intptr_t)(ws+2936);
	i8 v12599 = *(i8*)(intptr_t)v12598;
	i8 v12600 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12600 = v12599;

	i1 v12601 = (i1)+4;
	i8 v12602 = (i8)(intptr_t)(ws+2928);
	i8 v12603 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12603)(v12602, v12601);

endsub:;
}

// reduce_96 workspace at ws+3008 length ws+0
void f596_reduce_96(void) {

	i8 v12604 = (i8)(intptr_t)(ws+2928);
	i8 v12605 = *(i8*)(intptr_t)v12604;
	i8 v12606 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12606 = v12605;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_97 workspace at ws+3008 length ws+0
void f597_reduce_97(void) {

	i8 v12607 = (i8)(intptr_t)(ws+2928);
	i8 v12608 = *(i8*)(intptr_t)v12607;
	i8 v12609 = (i8)(intptr_t)(ws+2944);
	i8 v12610 = *(i8*)(intptr_t)v12609;
	i8 v12611 = v12610+(+16);
	*(i8*)(intptr_t)v12611 = v12608;

	i8 v12612 = (i8)(intptr_t)(ws+2944);
	i8 v12613 = *(i8*)(intptr_t)v12612;
	i8 v12614 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12614 = v12613;

	i1 v12615 = (i1)+45;
	i8 v12616 = (i8)(intptr_t)(ws+2936);
	i8 v12617 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12617)(v12616, v12615);

endsub:;
}
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f451_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3008 length ws+0
void f598_reduce_98(void) {

	i8 v12618 = (i8)(intptr_t)(ws+1224);
	i8 v12619 = *(i8*)(intptr_t)v12618;
	i8 v12620 = v12619+(+16);
	i8 v12621 = (i8)(intptr_t)(ws+2944);
	i8 v12622 = *(i8*)(intptr_t)v12621;
	i8 v12623 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v12624;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12623)(&v12624, v12622, v12620);
	i8 v12625 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12625 = v12624;

	i1 v12626 = (i1)+28;
	i8 v12627 = (i8)(intptr_t)(ws+2920);
	i8 v12628 = *(i8*)(intptr_t)v12627;
	i8 v12629 = v12628+(+46);
	*(i1*)(intptr_t)v12629 = v12626;

	i8 v12630 = (i8)(intptr_t)(ws+1224);
	i8 v12631 = *(i8*)(intptr_t)v12630;
	i8 v12632 = (i8)(intptr_t)(ws+2920);
	i8 v12633 = *(i8*)(intptr_t)v12632;
	i8 v12634 = (i8)(intptr_t)(ws+2928);
	i8 v12635 = *(i8*)(intptr_t)v12634;
	i8 v12636 = (i8)(intptr_t)(f451_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v12636)(v12635, v12633, v12631);

	i1 v12637 = (i1)+6;
	i8 v12638 = (i8)(intptr_t)(ws+2936);
	i8 v12639 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12639)(v12638, v12637);

endsub:;
}
	void f219_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3008 length ws+0
void f599_reduce_99(void) {

	i8 v12640 = (i8)(intptr_t)(ws+72);
	i8 v12641 = *(i8*)(intptr_t)v12640;
	i8 v12642 = v12641+(+42);
	i2 v12643 = *(i2*)(intptr_t)v12642;
	i8 v12644 = (i8)(intptr_t)(ws+72);
	i8 v12645 = *(i8*)(intptr_t)v12644;
	i8 v12646 = v12645+(+41);
	i1 v12647 = *(i1*)(intptr_t)v12646;
	i8 v12648 = (i8)(intptr_t)(f219_ArchAlignUp);
	i2 v12649;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v12648)(&v12649, v12647, v12643);
	i8 v12650 = (i8)(intptr_t)(ws+72);
	i8 v12651 = *(i8*)(intptr_t)v12650;
	i8 v12652 = v12651+(+44);
	*(i2*)(intptr_t)v12652 = v12649;

	i1 v12653 = (i1)+65;
	i8 v12654 = (i8)(intptr_t)(ws+2952);
	i8 v12655 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12655)(v12654, v12653);

	i1 v12656 = (i1)+10;
	i8 v12657 = (i8)(intptr_t)(ws+2936);
	i8 v12658 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12658)(v12657, v12656);

	i1 v12659 = (i1)+20;
	i8 v12660 = (i8)(intptr_t)(ws+2928);
	i8 v12661 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12661)(v12660, v12659);

endsub:;
}
	void f484_SymbolRedeclarationError(void);
	void f484_SymbolRedeclarationError(void);

// reduce_100 workspace at ws+3008 length ws+0
void f600_reduce_100(void) {

	i8 v12662 = (i8)(intptr_t)(ws+2928);
	i8 v12663 = *(i8*)(intptr_t)v12662;
	i8 v12664 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v12664 = v12663;

	i8 v12665 = (i8)(intptr_t)(ws+72);
	i8 v12666 = *(i8*)(intptr_t)v12665;
	i8 v12667 = v12666+(+46);
	i1 v12668 = *(i1*)(intptr_t)v12667;
	i1 v12669 = (i1)+0;
	if (v12668==v12669) goto c02_08bb; else goto c02_08bc;

c02_08bc:;

	i8 v12670 = (i8)(intptr_t)(ws+72);
	i8 v12671 = *(i8*)(intptr_t)v12670;
	i8 v12672 = v12671+(+46);
	i1 v12673 = *(i1*)(intptr_t)v12672;
	i1 v12674 = (i1)+30;
	if (v12673==v12674) goto c02_08bb; else goto c02_08ba;

c02_08ba:;

	i8 v12675 = (i8)(intptr_t)(f484_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v12675)();

	goto c02_08b5;

c02_08bb:;

c02_08b5:;

	i8 v12676 = (i8)(intptr_t)(ws+72);
	i8 v12677 = *(i8*)(intptr_t)v12676;
	i8 v12678 = v12677+(+40);
	i1 v12679 = *(i1*)(intptr_t)v12678;
	i1 v12680 = (i1)+0;
	if (v12679==v12680) goto c02_08c3; else goto c02_08c4;

c02_08c4:;

	i8 v12681 = (i8)(intptr_t)(ws+72);
	i8 v12682 = *(i8*)(intptr_t)v12681;
	i8 v12683 = v12682+(+40);
	i1 v12684 = *(i1*)(intptr_t)v12683;
	i1 v12685 = (i1)+1;
	if (v12684==v12685) goto c02_08c3; else goto c02_08c2;

c02_08c2:;

	i8 v12686 = (i8)(intptr_t)(f484_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v12686)();

	goto c02_08bd;

c02_08c3:;

c02_08bd:;

	i1 v12687 = (i1)+30;
	i8 v12688 = (i8)(intptr_t)(ws+72);
	i8 v12689 = *(i8*)(intptr_t)v12688;
	i8 v12690 = v12689+(+46);
	*(i1*)(intptr_t)v12690 = v12687;

	i1 v12691 = (i1)+5;
	i8 v12692 = (i8)(intptr_t)(ws+72);
	i8 v12693 = *(i8*)(intptr_t)v12692;
	i8 v12694 = v12693+(+40);
	*(i1*)(intptr_t)v12694 = v12691;

endsub:;
}
	void f201_CheckNotPartialType(i8 /* type */);
	void f210_IsRecord(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01f5[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_101 workspace at ws+3008 length ws+0
void f601_reduce_101(void) {

	i8 v12695 = (i8)(intptr_t)(ws+2928);
	i8 v12696 = *(i8*)(intptr_t)v12695;
	i8 v12697 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12697)(v12696);

	i8 v12698 = (i8)(intptr_t)(ws+2928);
	i8 v12699 = *(i8*)(intptr_t)v12698;
	i8 v12700 = (i8)(intptr_t)(f210_IsRecord);
	i1 v12701;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12700)(&v12701, v12699);
	i1 v12702 = (i1)+0;
	if (v12701==v12702) goto c02_08c8; else goto c02_08c9;

c02_08c8:;

	i8 v12703 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v12703)();

	i8 v12704 = (i8)(intptr_t)(ws+2928);
	i8 v12705 = *(i8*)(intptr_t)v12704;
	i8 v12706 = v12705+(+48);
	i8 v12707 = *(i8*)(intptr_t)v12706;
	i8 v12708 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12708)(v12707);

	i8 v12709 = (i8)(intptr_t)c02_s01f5;
	i8 v12710 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12710)(v12709);

	i8 v12711 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v12711)();

	goto c02_08c5;

c02_08c9:;

c02_08c5:;

	i8 v12712 = (i8)(intptr_t)(ws+2928);
	i8 v12713 = *(i8*)(intptr_t)v12712;
	i8 v12714 = v12713+(+41);
	i1 v12715 = *(i1*)(intptr_t)v12714;
	i8 v12716 = (i8)(intptr_t)(ws+72);
	i8 v12717 = *(i8*)(intptr_t)v12716;
	i8 v12718 = v12717+(+41);
	*(i1*)(intptr_t)v12718 = v12715;

	i8 v12719 = (i8)(intptr_t)(ws+2928);
	i8 v12720 = *(i8*)(intptr_t)v12719;
	i8 v12721 = v12720+(+42);
	i2 v12722 = *(i2*)(intptr_t)v12721;
	i8 v12723 = (i8)(intptr_t)(ws+72);
	i8 v12724 = *(i8*)(intptr_t)v12723;
	i8 v12725 = v12724+(+42);
	*(i2*)(intptr_t)v12725 = v12722;

	i8 v12726 = (i8)(intptr_t)(ws+2928);
	i8 v12727 = *(i8*)(intptr_t)v12726;
	i8 v12728 = (i8)(intptr_t)(ws+72);
	i8 v12729 = *(i8*)(intptr_t)v12728;
	i8 v12730 = v12729+(+16);
	*(i8*)(intptr_t)v12730 = v12727;

endsub:;
}
	void f201_CheckNotPartialType(i8 /* type */);
	void f223_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_102 workspace at ws+3008 length ws+0
void f602_reduce_102(void) {

	i8 v12731 = (i8)(intptr_t)(ws+2936);
	i8 v12732 = *(i8*)(intptr_t)v12731;
	i8 v12733 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12733)(v12732);

	i1 v12734 = (i1)+28;
	i8 v12735 = (i8)(intptr_t)(ws+2960);
	i8 v12736 = *(i8*)(intptr_t)v12735;
	i8 v12737 = v12736+(+46);
	*(i1*)(intptr_t)v12737 = v12734;

	i8 v12738 = (i8)(intptr_t)(ws+2936);
	i8 v12739 = *(i8*)(intptr_t)v12738;
	i8 v12740 = (i8)(intptr_t)(ws+2960);
	i8 v12741 = *(i8*)(intptr_t)v12740;
	*(i8*)(intptr_t)v12741 = v12739;

	i8 v12742 = (i8)(intptr_t)(ws+72);
	i8 v12743 = *(i8*)(intptr_t)v12742;
	i8 v12744 = v12743+(+41);
	i1 v12745 = *(i1*)(intptr_t)v12744;
	i8 v12746 = (i8)(intptr_t)(ws+2936);
	i8 v12747 = *(i8*)(intptr_t)v12746;
	i8 v12748 = v12747+(+41);
	i1 v12749 = *(i1*)(intptr_t)v12748;
	if (v12745<v12749) goto c02_08cd; else goto c02_08ce;

c02_08cd:;

	i8 v12750 = (i8)(intptr_t)(ws+2936);
	i8 v12751 = *(i8*)(intptr_t)v12750;
	i8 v12752 = v12751+(+41);
	i1 v12753 = *(i1*)(intptr_t)v12752;
	i8 v12754 = (i8)(intptr_t)(ws+72);
	i8 v12755 = *(i8*)(intptr_t)v12754;
	i8 v12756 = v12755+(+41);
	*(i1*)(intptr_t)v12756 = v12753;

	goto c02_08ca;

c02_08ce:;

c02_08ca:;

	i8 v12757 = (i8)(intptr_t)(ws+72);
	i8 v12758 = *(i8*)(intptr_t)v12757;
	i8 v12759 = (i8)(intptr_t)(ws+2960);
	i8 v12760 = *(i8*)(intptr_t)v12759;
	i8 v12761 = (i8)(intptr_t)(ws+2952);
	i2 v12762 = *(i2*)(intptr_t)v12761;
	i8 v12763 = (i8)(intptr_t)(f223_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v12763)(v12762, v12760, v12758);

	i1 v12764 = (i1)+6;
	i8 v12765 = (i8)(intptr_t)(ws+2944);
	i8 v12766 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12766)(v12765, v12764);

	i1 v12767 = (i1)+22;
	i8 v12768 = (i8)(intptr_t)(ws+2928);
	i8 v12769 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12769)(v12768, v12767);

endsub:;
}

// reduce_103 workspace at ws+3008 length ws+0
void f603_reduce_103(void) {

	i8 v12770 = (i8)(intptr_t)(ws+72);
	i8 v12771 = *(i8*)(intptr_t)v12770;
	i8 v12772 = v12771+(+42);
	i2 v12773 = *(i2*)(intptr_t)v12772;
	i8 v12774 = (i8)(intptr_t)(ws+2920);
	*(i2*)(intptr_t)v12774 = v12773;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_104 workspace at ws+3008 length ws+0
void f604_reduce_104(void) {

	i8 v12775 = (i8)(intptr_t)(ws+2936);
	i4 v12776 = *(i4*)(intptr_t)v12775;
	i2 v12777 = (s2)(s4)v12776;
	i8 v12778 = (i8)(intptr_t)(ws+2920);
	*(i2*)(intptr_t)v12778 = v12777;

	i1 v12779 = (i1)+16;
	i8 v12780 = (i8)(intptr_t)(ws+2944);
	i8 v12781 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12781)(v12780, v12779);

	i1 v12782 = (i1)+4;
	i8 v12783 = (i8)(intptr_t)(ws+2928);
	i8 v12784 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12784)(v12783, v12782);

endsub:;
}
	void f198_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_105 workspace at ws+3008 length ws+0
void f605_reduce_105(void) {

	i8 v12785 = (i8)(intptr_t)(ws+72);
	i8 v12786 = *(i8*)(intptr_t)v12785;
	i8 v12787 = (i8)(intptr_t)(ws+2928);
	i8 v12788 = *(i8*)(intptr_t)v12787;
	i8 v12789 = (i8)(intptr_t)(f198_AddSymbol);
	i8 v12790;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12789)(&v12790, v12788, v12786);
	i8 v12791 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12791 = v12790;

	i8 v12792 = (i8)(intptr_t)(ws+72);
	i8 v12793 = *(i8*)(intptr_t)v12792;
	i8 v12794 = v12793+(+24);
	i1 v12795 = *(i1*)(intptr_t)v12794;
	i1 v12796 = v12795+(+1);
	i8 v12797 = (i8)(intptr_t)(ws+72);
	i8 v12798 = *(i8*)(intptr_t)v12797;
	i8 v12799 = v12798+(+24);
	*(i1*)(intptr_t)v12799 = v12796;

endsub:;
}
	void f486_CheckEndOfInitialiser(void);
	void f91_MidEndinit(i8* /* m */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_106 workspace at ws+3008 length ws+0
void f606_reduce_106(void) {

	i8 v12800 = (i8)(intptr_t)(f486_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v12800)();

	i8 v12801 = (i8)(intptr_t)(f91_MidEndinit);
	i8 v12802;

	((void(*)(i8* /* m */))(intptr_t)v12801)(&v12802);
	i8 v12803 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12803)(v12802);

	i1 v12804 = (i1)+31;
	i8 v12805 = (i8)(intptr_t)(ws+2952);
	i8 v12806 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12806)(v12805, v12804);

	i1 v12807 = (i1)+32;
	i8 v12808 = (i8)(intptr_t)(ws+2936);
	i8 v12809 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12809)(v12808, v12807);

	i1 v12810 = (i1)+22;
	i8 v12811 = (i8)(intptr_t)(ws+2928);
	i8 v12812 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12812)(v12811, v12810);

endsub:;
}
	void f201_CheckNotPartialType(i8 /* type */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f214_AllocLabel(i2* /* label */);
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f204_IsArray(i1* /* result */, i8 /* type */);
	void f210_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s01f6[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f210_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s01f7[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f210_IsRecord(i1* /* result */, i8 /* type */);
	void f108_MidStartinit(i8* /* m */, i8 /* sym */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3008 length ws+16
void f607_reduce_107(void) {

	i8 v12813 = (i8)(intptr_t)(ws+2936);
	i8 v12814 = *(i8*)(intptr_t)v12813;
	i8 v12815 = (i8)(intptr_t)(f201_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12815)(v12814);

	i1 v12816 = (i1)+28;
	i8 v12817 = (i8)(intptr_t)(ws+2952);
	i8 v12818 = *(i8*)(intptr_t)v12817;
	i8 v12819 = v12818+(+46);
	*(i1*)(intptr_t)v12819 = v12816;

	i8 v12820 = (i8)(intptr_t)(ws+2936);
	i8 v12821 = *(i8*)(intptr_t)v12820;
	i8 v12822 = (i8)(intptr_t)(ws+2952);
	i8 v12823 = *(i8*)(intptr_t)v12822;
	*(i8*)(intptr_t)v12823 = v12821;

	i8 v12824 = (i8)(intptr_t)(ws+40);
	i8 v12825 = *(i8*)(intptr_t)v12824;
	i8 v12826 = (i8)(intptr_t)(ws+2952);
	i8 v12827 = *(i8*)(intptr_t)v12826;
	i8 v12828 = v12827+(+8);
	*(i8*)(intptr_t)v12828 = v12825;

	i8 v12829 = (i8)+8;
	i8 v12830 = (i8)(intptr_t)(f31_Alloc);
	i8 v12831;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12830)(&v12831, v12829);
	i8 v12832 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12832 = v12831;

	i8 v12833 = (i8)(intptr_t)(ws+3008);
	i8 v12834 = *(i8*)(intptr_t)v12833;
	i8 v12835 = (i8)(intptr_t)(ws+2952);
	i8 v12836 = *(i8*)(intptr_t)v12835;
	i8 v12837 = v12836+(+24);
	*(i8*)(intptr_t)v12837 = v12834;

	i1 v12838 = (i1)+3;
	i8 v12839 = (i8)(intptr_t)(ws+3008);
	i8 v12840 = *(i8*)(intptr_t)v12839;
	*(i1*)(intptr_t)v12840 = v12838;

	i1 v12841 = (i1)+97;
	i8 v12842 = (i8)(intptr_t)(ws+3008);
	i8 v12843 = *(i8*)(intptr_t)v12842;
	i8 v12844 = v12843+(+1);
	*(i1*)(intptr_t)v12844 = v12841;

	i8 v12845 = (i8)(intptr_t)(f214_AllocLabel);
	i2 v12846;

	((void(*)(i2* /* label */))(intptr_t)v12845)(&v12846);
	i4 v12847 = v12846;
	i1 v12848 = (i1)+16;
	i8 v12849 = (i8)(intptr_t)(ws+3008);
	i8 v12850 = *(i8*)(intptr_t)v12849;
	i8 v12851 = v12850+(+2);
	i8 v12852 = (i8)(intptr_t)(f13_UIToA);
	i8 v12853;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v12852)(&v12853, v12851, v12848, v12847);
	i8 v12854 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v12854 = v12853;

	i8 v12855 = (i8)(intptr_t)(ws+2936);
	i8 v12856 = *(i8*)(intptr_t)v12855;
	i8 v12857 = (i8)(intptr_t)(f204_IsArray);
	i1 v12858;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12857)(&v12858, v12856);
	i1 v12859 = (i1)+0;
	if (v12858==v12859) goto c02_08d6; else goto c02_08d5;

c02_08d6:;

	i8 v12860 = (i8)(intptr_t)(ws+2936);
	i8 v12861 = *(i8*)(intptr_t)v12860;
	i8 v12862 = (i8)(intptr_t)(f210_IsRecord);
	i1 v12863;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12862)(&v12863, v12861);
	i1 v12864 = (i1)+0;
	if (v12863==v12864) goto c02_08d4; else goto c02_08d5;

c02_08d4:;

	i8 v12865 = (i8)(intptr_t)c02_s01f6;
	i8 v12866 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12866)(v12865);

	goto c02_08cf;

c02_08d5:;

c02_08cf:;

	i8 v12867 = (i8)(intptr_t)(ws+2936);
	i8 v12868 = *(i8*)(intptr_t)v12867;
	i8 v12869 = (i8)(intptr_t)(f210_IsRecord);
	i1 v12870;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12869)(&v12870, v12868);
	i1 v12871 = (i1)+0;
	if (v12870==v12871) goto c02_08dd; else goto c02_08de;

c02_08de:;

	i8 v12872 = (i8)(intptr_t)(ws+2936);
	i8 v12873 = *(i8*)(intptr_t)v12872;
	i8 v12874 = v12873+(+16);
	i8 v12875 = *(i8*)(intptr_t)v12874;
	i8 v12876 = (i8)+0;
	if (v12875==v12876) goto c02_08dd; else goto c02_08dc;

c02_08dc:;

	i8 v12877 = (i8)(intptr_t)c02_s01f7;
	i8 v12878 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12878)(v12877);

	goto c02_08d7;

c02_08dd:;

c02_08d7:;

	i8 v12879 = (i8)(intptr_t)(ws+2936);
	i8 v12880 = *(i8*)(intptr_t)v12879;
	i8 v12881 = (i8)(intptr_t)(f210_IsRecord);
	i1 v12882;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12881)(&v12882, v12880);
	i1 v12883 = (i1)+0;
	if (v12882==v12883) goto c02_08e3; else goto c02_08e2;

c02_08e2:;

	i8 v12884 = (i8)(intptr_t)(ws+2936);
	i8 v12885 = *(i8*)(intptr_t)v12884;
	i8 v12886 = *(i8*)(intptr_t)v12885;
	i8 v12887 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v12887 = v12886;

	goto c02_08df;

c02_08e3:;

c02_08df:;

	i8 v12888 = (i8)(intptr_t)(ws+2936);
	i8 v12889 = *(i8*)(intptr_t)v12888;
	i8 v12890 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v12890 = v12889;

	i2 v12891 = (i2)+0;
	i8 v12892 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v12892 = v12891;

	i2 v12893 = (i2)+0;
	i8 v12894 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v12894 = v12893;

	i8 v12895 = (i8)(intptr_t)(ws+2952);
	i8 v12896 = *(i8*)(intptr_t)v12895;
	i8 v12897 = (i8)(intptr_t)(f108_MidStartinit);
	i8 v12898;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v12897)(&v12898, v12896);
	i8 v12899 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12899)(v12898);

	i1 v12900 = (i1)+6;
	i8 v12901 = (i8)(intptr_t)(ws+2944);
	i8 v12902 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12902)(v12901, v12900);

	i1 v12903 = (i1)+2;
	i8 v12904 = (i8)(intptr_t)(ws+2928);
	i8 v12905 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12905)(v12904, v12903);

endsub:;
}
	void f490_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f488_AlignTo(i1 /* alignment */);
	void f207_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01f8[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f61_SimpleError(i8 /* message */);
	void f113_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f448_Generate(i8 /* statement */);
	void f205_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01f9[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f61_SimpleError(i8 /* message */);
	void f145_MidInits(i8* /* m */, i8 /* text */);
	void f448_Generate(i8 /* statement */);
const i1 c02_s01fa[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f90_MidInita(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f448_Generate(i8 /* statement */);
	void f481_parser_i_constant_error(void);
	void f56_Discard(i8 /* node */);

// reduce_108 workspace at ws+3008 length ws+18
void f608_reduce_108(void) {

	i8 v12906 = (i8)(intptr_t)(f490_GetInitedMemberChecked);
	i8 v12907;
	i8 v12908;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v12906)(&v12907, &v12908);

	i8 v12909 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v12909 = v12908;

	i8 v12910 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12910 = v12907;

	i8 v12911 = (i8)(intptr_t)(ws+3016);
	i8 v12912 = *(i8*)(intptr_t)v12911;
	i8 v12913 = v12912+(+41);
	i1 v12914 = *(i1*)(intptr_t)v12913;
	i8 v12915 = (i8)(intptr_t)(f488_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v12915)(v12914);

	i8 v12916 = (i8)(intptr_t)(ws+3016);
	i8 v12917 = *(i8*)(intptr_t)v12916;
	i8 v12918 = v12917+(+42);
	i2 v12919 = *(i2*)(intptr_t)v12918;
	i8 v12920 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v12920 = v12919;

	i8 v12921 = (i8)(intptr_t)(ws+2928);
	i8 v12922 = *(i8*)(intptr_t)v12921;
	i8 v12923 = v12922+(+58);
	i1 v12924 = *(i1*)(intptr_t)v12923;

	if (v12924 != +43) goto c02_08e5;

	i8 v12925 = (i8)(intptr_t)(ws+3016);
	i8 v12926 = *(i8*)(intptr_t)v12925;
	i8 v12927 = (i8)(intptr_t)(f207_IsNum);
	i1 v12928;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12927)(&v12928, v12926);
	i1 v12929 = (i1)+0;
	if (v12928==v12929) goto c02_08e9; else goto c02_08ea;

c02_08e9:;

	i8 v12930 = (i8)(intptr_t)c02_s01f8;
	i8 v12931 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12931)(v12930);

	goto c02_08e6;

c02_08ea:;

c02_08e6:;

	i8 v12932 = (i8)(intptr_t)(ws+3024);
	i2 v12933 = *(i2*)(intptr_t)v12932;
	i1 v12934 = v12933;
	i8 v12935 = (i8)(intptr_t)(ws+2928);
	i8 v12936 = *(i8*)(intptr_t)v12935;
	i4 v12937 = *(i4*)(intptr_t)v12936;
	i8 v12938 = (i8)(intptr_t)(f113_MidInit);
	i8 v12939;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v12938)(&v12939, v12937, v12934);
	i8 v12940 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12940)(v12939);

	goto c02_08e4;

c02_08e5:;

	if (v12924 != +44) goto c02_08eb;

	i8 v12941 = (i8)(intptr_t)(ws+3016);
	i8 v12942 = *(i8*)(intptr_t)v12941;
	i8 v12943 = (i8)(intptr_t)(f205_IsPtr);
	i1 v12944;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12943)(&v12944, v12942);
	i1 v12945 = (i1)+0;
	if (v12944==v12945) goto c02_08f1; else goto c02_08f3;

c02_08f3:;

	i8 v12946 = (i8)(intptr_t)(ws+3016);
	i8 v12947 = *(i8*)(intptr_t)v12946;
	i8 v12948 = *(i8*)(intptr_t)v12947;
	i8 v12949 = (i8)(intptr_t)(ws+1040);
	i8 v12950 = *(i8*)(intptr_t)v12949;
	if (v12948==v12950) goto c02_08f2; else goto c02_08f1;

c02_08f1:;

	i8 v12951 = (i8)(intptr_t)c02_s01f9;
	i8 v12952 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12952)(v12951);

	goto c02_08ec;

c02_08f2:;

c02_08ec:;

	i8 v12953 = (i8)(intptr_t)(ws+2928);
	i8 v12954 = *(i8*)(intptr_t)v12953;
	i8 v12955 = *(i8*)(intptr_t)v12954;
	i8 v12956 = (i8)(intptr_t)(f145_MidInits);
	i8 v12957;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v12956)(&v12957, v12955);
	i8 v12958 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12958)(v12957);

	goto c02_08e4;

c02_08eb:;

	if (v12924 != +45) goto c02_08f4;

	i8 v12959 = (i8)(intptr_t)(ws+3016);
	i8 v12960 = *(i8*)(intptr_t)v12959;
	i8 v12961 = (i8)(intptr_t)(ws+2928);
	i8 v12962 = *(i8*)(intptr_t)v12961;
	i8 v12963 = v12962+(+16);
	i8 v12964 = *(i8*)(intptr_t)v12963;
	if (v12960==v12964) goto c02_08f9; else goto c02_08f8;

c02_08f8:;

	i8 v12965 = (i8)(intptr_t)c02_s01fa;
	i8 v12966 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12966)(v12965);

	goto c02_08f5;

c02_08f9:;

c02_08f5:;

	i8 v12967 = (i8)(intptr_t)(ws+2928);
	i8 v12968 = *(i8*)(intptr_t)v12967;
	i8 v12969 = *(i8*)(intptr_t)v12968;
	i8 v12970 = (i8)(intptr_t)(ws+2928);
	i8 v12971 = *(i8*)(intptr_t)v12970;
	i8 v12972 = v12971+(+8);
	i2 v12973 = *(i2*)(intptr_t)v12972;
	i8 v12974 = (i8)(intptr_t)(f90_MidInita);
	i8 v12975;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v12974)(&v12975, v12973, v12969);
	i8 v12976 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12976)(v12975);

	goto c02_08e4;

c02_08f4:;

	i8 v12977 = (i8)(intptr_t)(f481_parser_i_constant_error);

	((void(*)(void))(intptr_t)v12977)();

c02_08e4:;


	i8 v12978 = (i8)(intptr_t)(ws+2928);
	i8 v12979 = *(i8*)(intptr_t)v12978;
	i8 v12980 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12980)(v12979);

	i8 v12981 = (i8)(intptr_t)(ws+1240);
	i2 v12982 = *(i2*)(intptr_t)v12981;
	i8 v12983 = (i8)(intptr_t)(ws+3024);
	i2 v12984 = *(i2*)(intptr_t)v12983;
	i2 v12985 = v12982+v12984;
	i8 v12986 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v12986 = v12985;

	i8 v12987 = (i8)(intptr_t)(ws+1242);
	i2 v12988 = *(i2*)(intptr_t)v12987;
	i8 v12989 = (i8)(intptr_t)(ws+3024);
	i2 v12990 = *(i2*)(intptr_t)v12989;
	i2 v12991 = v12988+v12990;
	i8 v12992 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v12992 = v12991;

endsub:;
}
	void f486_CheckEndOfInitialiser(void);
	void f32_Free(i8 /* block */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_109 workspace at ws+3008 length ws+0
void f609_reduce_109(void) {

	i8 v12993 = (i8)(intptr_t)(f486_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v12993)();

	i8 v12994 = (i8)(intptr_t)(ws+2944);
	i8 v12995 = *(i8*)(intptr_t)v12994;
	i8 v12996 = *(i8*)(intptr_t)v12995;
	i8 v12997 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v12997 = v12996;

	i8 v12998 = (i8)(intptr_t)(ws+2944);
	i8 v12999 = *(i8*)(intptr_t)v12998;
	i8 v13000 = v12999+(+8);
	i8 v13001 = *(i8*)(intptr_t)v13000;
	i8 v13002 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13002 = v13001;

	i8 v13003 = (i8)(intptr_t)(ws+2944);
	i8 v13004 = *(i8*)(intptr_t)v13003;
	i8 v13005 = v13004+(+16);
	i2 v13006 = *(i2*)(intptr_t)v13005;
	i8 v13007 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v13007 = v13006;

	i8 v13008 = (i8)(intptr_t)(ws+2944);
	i8 v13009 = *(i8*)(intptr_t)v13008;
	i8 v13010 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v13010)(v13009);

	i1 v13011 = (i1)+32;
	i8 v13012 = (i8)(intptr_t)(ws+2928);
	i8 v13013 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13013)(v13012, v13011);

endsub:;
}
	void f490_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f488_AlignTo(i1 /* alignment */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f210_IsRecord(i1* /* result */, i8 /* type */);
	void f204_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s01fb[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_110 workspace at ws+3008 length ws+16
void f610_reduce_110(void) {

	i8 v13014 = (i8)(intptr_t)(f490_GetInitedMemberChecked);
	i8 v13015;
	i8 v13016;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v13014)(&v13015, &v13016);

	i8 v13017 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v13017 = v13016;

	i8 v13018 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v13018 = v13015;

	i8 v13019 = (i8)(intptr_t)(ws+3016);
	i8 v13020 = *(i8*)(intptr_t)v13019;
	i8 v13021 = v13020+(+41);
	i1 v13022 = *(i1*)(intptr_t)v13021;
	i8 v13023 = (i8)(intptr_t)(f488_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v13023)(v13022);

	i8 v13024 = (i8)+18;
	i8 v13025 = (i8)(intptr_t)(f31_Alloc);
	i8 v13026;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13025)(&v13026, v13024);
	i8 v13027 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v13027 = v13026;

	i8 v13028 = (i8)(intptr_t)(ws+72);
	i8 v13029 = *(i8*)(intptr_t)v13028;
	i8 v13030 = (i8)(intptr_t)(ws+2920);
	i8 v13031 = *(i8*)(intptr_t)v13030;
	*(i8*)(intptr_t)v13031 = v13029;

	i8 v13032 = (i8)(intptr_t)(ws+1232);
	i8 v13033 = *(i8*)(intptr_t)v13032;
	i8 v13034 = (i8)(intptr_t)(ws+2920);
	i8 v13035 = *(i8*)(intptr_t)v13034;
	i8 v13036 = v13035+(+8);
	*(i8*)(intptr_t)v13036 = v13033;

	i8 v13037 = (i8)(intptr_t)(ws+1240);
	i2 v13038 = *(i2*)(intptr_t)v13037;
	i8 v13039 = (i8)(intptr_t)(ws+2920);
	i8 v13040 = *(i8*)(intptr_t)v13039;
	i8 v13041 = v13040+(+16);
	*(i2*)(intptr_t)v13041 = v13038;

	i8 v13042 = (i8)(intptr_t)(ws+3016);
	i8 v13043 = *(i8*)(intptr_t)v13042;
	i8 v13044 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13044 = v13043;

	i2 v13045 = (i2)+0;
	i8 v13046 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v13046 = v13045;

	i8 v13047 = (i8)(intptr_t)(ws+3016);
	i8 v13048 = *(i8*)(intptr_t)v13047;
	i8 v13049 = (i8)(intptr_t)(f210_IsRecord);
	i1 v13050;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13049)(&v13050, v13048);
	i1 v13051 = (i1)+0;
	if (v13050==v13051) goto c02_08fe; else goto c02_08fd;

c02_08fd:;

	i8 v13052 = (i8)(intptr_t)(ws+3016);
	i8 v13053 = *(i8*)(intptr_t)v13052;
	i8 v13054 = *(i8*)(intptr_t)v13053;
	i8 v13055 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13055 = v13054;

	goto c02_08fa;

c02_08fe:;

	i8 v13056 = (i8)(intptr_t)(ws+3016);
	i8 v13057 = *(i8*)(intptr_t)v13056;
	i8 v13058 = (i8)(intptr_t)(f204_IsArray);
	i1 v13059;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13058)(&v13059, v13057);
	i1 v13060 = (i1)+0;
	if (v13059==v13060) goto c02_0902; else goto c02_0901;

c02_0901:;

	i8 v13061 = (i8)+0;
	i8 v13062 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13062 = v13061;

	goto c02_08fa;

c02_0902:;

	i8 v13063 = (i8)(intptr_t)c02_s01fb;
	i8 v13064 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13064)(v13063);

c02_08fa:;

endsub:;
}
	void f140_MidAsmend(i8* /* m */);
	void f448_Generate(i8 /* statement */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_111 workspace at ws+3008 length ws+0
void f611_reduce_111(void) {

	i8 v13065 = (i8)(intptr_t)(f140_MidAsmend);
	i8 v13066;

	((void(*)(i8* /* m */))(intptr_t)v13065)(&v13066);
	i8 v13067 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13067)(v13066);

	i1 v13068 = (i1)+22;
	i8 v13069 = (i8)(intptr_t)(ws+2928);
	i8 v13070 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13070)(v13069, v13068);

endsub:;
}
	void f125_MidAsmstart(i8* /* m */);
	void f448_Generate(i8 /* statement */);

// reduce_112 workspace at ws+3008 length ws+0
void f612_reduce_112(void) {

	i8 v13071 = (i8)(intptr_t)(f125_MidAsmstart);
	i8 v13072;

	((void(*)(i8* /* m */))(intptr_t)v13071)(&v13072);
	i8 v13073 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13073)(v13072);

endsub:;
}
	void f117_MidAsmtext(i8* /* m */, i8 /* text */);
	void f448_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);

// reduce_113 workspace at ws+3008 length ws+0
void f613_reduce_113(void) {

	i8 v13074 = (i8)(intptr_t)(ws+2928);
	i8 v13075 = *(i8*)(intptr_t)v13074;
	i8 v13076 = (i8)(intptr_t)(f117_MidAsmtext);
	i8 v13077;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v13076)(&v13077, v13075);
	i8 v13078 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13078)(v13077);

	i8 v13079 = (i8)(intptr_t)(ws+2928);
	i8 v13080 = *(i8*)(intptr_t)v13079;
	i8 v13081 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v13081)(v13080);

endsub:;
}
	void f123_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f448_Generate(i8 /* statement */);

// reduce_114 workspace at ws+3008 length ws+0
void f614_reduce_114(void) {

	i8 v13082 = (i8)(intptr_t)(ws+2928);
	i4 v13083 = *(i4*)(intptr_t)v13082;
	i8 v13084 = (i8)(intptr_t)(f123_MidAsmvalue);
	i8 v13085;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v13084)(&v13085, v13083);
	i8 v13086 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13086)(v13085);

endsub:;
}
	void f184_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f146_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f448_Generate(i8 /* statement */);
	void f123_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f448_Generate(i8 /* statement */);
const i1 c02_s01fc[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_115 workspace at ws+3008 length ws+1
void f615_reduce_115(void) {

	i8 v13087 = (i8)(intptr_t)(ws+2928);
	i8 v13088 = *(i8*)(intptr_t)v13087;
	i8 v13089 = v13088+(+46);
	i1 v13090 = *(i1*)(intptr_t)v13089;
	i8 v13091 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v13091 = v13090;

	i8 v13092 = (i8)(intptr_t)(ws+3008);
	i1 v13093 = *(i1*)(intptr_t)v13092;
	i1 v13094 = (i1)+28;
	if (v13093==v13094) goto c02_0908; else goto c02_090a;

c02_090a:;

	i8 v13095 = (i8)(intptr_t)(ws+3008);
	i1 v13096 = *(i1*)(intptr_t)v13095;
	i1 v13097 = (i1)+25;
	if (v13096==v13097) goto c02_0908; else goto c02_0909;

c02_0908:;

	i8 v13098 = (i8)(intptr_t)(ws+3008);
	i1 v13099 = *(i1*)(intptr_t)v13098;
	i1 v13100 = (i1)+25;
	if (v13099==v13100) goto c02_090e; else goto c02_090f;

c02_090e:;

	i8 v13101 = (i8)(intptr_t)(ws+40);
	i8 v13102 = *(i8*)(intptr_t)v13101;
	i8 v13103 = (i8)(intptr_t)(ws+2928);
	i8 v13104 = *(i8*)(intptr_t)v13103;
	i8 v13105 = *(i8*)(intptr_t)v13104;
	i8 v13106 = (i8)(intptr_t)(f184_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v13106)(v13105, v13102);

	goto c02_090b;

c02_090f:;

c02_090b:;

	i8 v13107 = (i8)(intptr_t)(ws+2928);
	i8 v13108 = *(i8*)(intptr_t)v13107;
	i8 v13109 = (i8)(intptr_t)(f146_MidAsmsymbol);
	i8 v13110;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v13109)(&v13110, v13108);
	i8 v13111 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13111)(v13110);

	goto c02_0903;

c02_0909:;

	i8 v13112 = (i8)(intptr_t)(ws+3008);
	i1 v13113 = *(i1*)(intptr_t)v13112;
	i1 v13114 = (i1)+7;
	if (v13113==v13114) goto c02_0912; else goto c02_0913;

c02_0912:;

	i8 v13115 = (i8)(intptr_t)(ws+2928);
	i8 v13116 = *(i8*)(intptr_t)v13115;
	i4 v13117 = *(i4*)(intptr_t)v13116;
	i8 v13118 = (i8)(intptr_t)(f123_MidAsmvalue);
	i8 v13119;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v13118)(&v13119, v13117);
	i8 v13120 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13120)(v13119);

	goto c02_0903;

c02_0913:;

	i8 v13121 = (i8)(intptr_t)c02_s01fc;
	i8 v13122 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13122)(v13121);

c02_0903:;

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3008 length ws+0
void f616_reduce_122(void) {

	i1 v13123 = (i1)+26;
	i8 v13124 = (i8)(intptr_t)(ws+2944);
	i8 v13125 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13125)(v13124, v13123);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3008 length ws+0
void f617_reduce_126(void) {

	i1 v13126 = (i1)+22;
	i8 v13127 = (i8)(intptr_t)(ws+2928);
	i8 v13128 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13128)(v13127, v13126);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3008 length ws+0
void f618_reduce_127(void) {

	i1 v13129 = (i1)+25;
	i8 v13130 = (i8)(intptr_t)(ws+2960);
	i8 v13131 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13131)(v13130, v13129);

	i1 v13132 = (i1)+22;
	i8 v13133 = (i8)(intptr_t)(ws+2928);
	i8 v13134 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13134)(v13133, v13132);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3008 length ws+0
void f619_reduce_128(void) {

	i1 v13135 = (i1)+22;
	i8 v13136 = (i8)(intptr_t)(ws+2928);
	i8 v13137 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13137)(v13136, v13135);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3008 length ws+0
void f620_reduce_129(void) {

	i1 v13138 = (i1)+22;
	i8 v13139 = (i8)(intptr_t)(ws+2928);
	i8 v13140 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13140)(v13139, v13138);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3008 length ws+0
void f621_reduce_135(void) {

	i1 v13141 = (i1)+45;
	i8 v13142 = (i8)(intptr_t)(ws+2936);
	i8 v13143 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13143)(v13142, v13141);

endsub:;
}
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3008 length ws+0
void f622_reduce_138(void) {

	i1 v13144 = (i1)+45;
	i8 v13145 = (i8)(intptr_t)(ws+2936);
	i8 v13146 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13146)(v13145, v13144);

endsub:;
}

// reduce_default workspace at ws+3008 length ws+0
void f623_reduce_default(void) {

endsub:;
}
	void f499_reduce_0(void);
	void f500_reduce_1(void);
	void f501_reduce_2(void);
	void f502_reduce_3(void);
	void f503_reduce_4(void);
	void f504_reduce_5(void);
	void f505_reduce_6(void);
	void f506_reduce_7(void);
	void f507_reduce_8(void);
	void f508_reduce_9(void);
	void f509_reduce_10(void);
	void f510_reduce_11(void);
	void f511_reduce_12(void);
	void f512_reduce_13(void);
	void f513_reduce_14(void);
	void f514_reduce_15(void);
	void f515_reduce_16(void);
	void f516_reduce_17(void);
	void f517_reduce_18(void);
	void f518_reduce_19(void);
	void f519_reduce_20(void);
	void f520_reduce_21(void);
	void f521_reduce_22(void);
	void f522_reduce_23(void);
	void f523_reduce_24(void);
	void f524_reduce_25(void);
	void f525_reduce_26(void);
	void f526_reduce_27(void);
	void f527_reduce_28(void);
	void f528_reduce_29(void);
	void f529_reduce_30(void);
	void f530_reduce_31(void);
	void f531_reduce_32(void);
	void f532_reduce_33(void);
	void f533_reduce_34(void);
	void f534_reduce_35(void);
	void f535_reduce_36(void);
	void f536_reduce_37(void);
	void f537_reduce_38(void);
	void f538_reduce_39(void);
	void f539_reduce_40(void);
	void f540_reduce_41(void);
	void f541_reduce_42(void);
	void f542_reduce_43(void);
	void f543_reduce_44(void);
	void f544_reduce_45(void);
	void f545_reduce_46(void);
	void f546_reduce_47(void);
	void f547_reduce_48(void);
	void f548_reduce_49(void);
	void f549_reduce_50(void);
	void f550_reduce_51(void);
	void f551_reduce_52(void);
	void f552_reduce_53(void);
	void f553_reduce_54(void);
	void f554_reduce_55(void);
	void f555_reduce_56(void);
	void f556_reduce_57(void);
	void f557_reduce_58(void);
	void f558_reduce_59(void);
	void f559_reduce_60(void);
	void f560_reduce_61(void);
	void f561_reduce_62(void);
	void f562_reduce_63(void);
	void f563_reduce_64(void);
	void f564_reduce_65(void);
	void f565_reduce_66(void);
	void f566_reduce_67(void);
	void f567_reduce_68(void);
	void f568_reduce_69(void);
	void f569_reduce_70(void);
	void f570_reduce_71(void);
	void f571_reduce_72(void);
	void f572_reduce_73(void);
	void f573_reduce_74(void);
	void f574_reduce_75(void);
	void f575_reduce_76(void);
	void f576_reduce_77(void);
	void f577_reduce_78(void);
	void f578_reduce_79(void);
	void f579_reduce_80(void);
	void f580_reduce_81(void);
	void f581_reduce_82(void);
	void f582_reduce_83(void);
	void f583_reduce_84(void);
	void f585_reduce_85(void);
	void f586_reduce_86(void);
	void f587_reduce_87(void);
	void f588_reduce_88(void);
	void f589_reduce_89(void);
	void f590_reduce_90(void);
	void f591_reduce_91(void);
	void f592_reduce_92(void);
	void f593_reduce_93(void);
	void f594_reduce_94(void);
	void f595_reduce_95(void);
	void f596_reduce_96(void);
	void f597_reduce_97(void);
	void f598_reduce_98(void);
	void f599_reduce_99(void);
	void f600_reduce_100(void);
	void f601_reduce_101(void);
	void f602_reduce_102(void);
	void f603_reduce_103(void);
	void f604_reduce_104(void);
	void f605_reduce_105(void);
	void f606_reduce_106(void);
	void f607_reduce_107(void);
	void f608_reduce_108(void);
	void f609_reduce_109(void);
	void f610_reduce_110(void);
	void f611_reduce_111(void);
	void f612_reduce_112(void);
	void f613_reduce_113(void);
	void f614_reduce_114(void);
	void f615_reduce_115(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f616_reduce_122(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f617_reduce_126(void);
	void f618_reduce_127(void);
	void f619_reduce_128(void);
	void f620_reduce_129(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f621_reduce_135(void);
	void f623_reduce_default(void);
	void f623_reduce_default(void);
	void f622_reduce_138(void);
static data c02_a914[] = { // reducers

	{ .ptr = (void*)f499_reduce_0 },

	{ .ptr = (void*)f500_reduce_1 },

	{ .ptr = (void*)f501_reduce_2 },

	{ .ptr = (void*)f502_reduce_3 },

	{ .ptr = (void*)f503_reduce_4 },

	{ .ptr = (void*)f504_reduce_5 },

	{ .ptr = (void*)f505_reduce_6 },

	{ .ptr = (void*)f506_reduce_7 },

	{ .ptr = (void*)f507_reduce_8 },

	{ .ptr = (void*)f508_reduce_9 },

	{ .ptr = (void*)f509_reduce_10 },

	{ .ptr = (void*)f510_reduce_11 },

	{ .ptr = (void*)f511_reduce_12 },

	{ .ptr = (void*)f512_reduce_13 },

	{ .ptr = (void*)f513_reduce_14 },

	{ .ptr = (void*)f514_reduce_15 },

	{ .ptr = (void*)f515_reduce_16 },

	{ .ptr = (void*)f516_reduce_17 },

	{ .ptr = (void*)f517_reduce_18 },

	{ .ptr = (void*)f518_reduce_19 },

	{ .ptr = (void*)f519_reduce_20 },

	{ .ptr = (void*)f520_reduce_21 },

	{ .ptr = (void*)f521_reduce_22 },

	{ .ptr = (void*)f522_reduce_23 },

	{ .ptr = (void*)f523_reduce_24 },

	{ .ptr = (void*)f524_reduce_25 },

	{ .ptr = (void*)f525_reduce_26 },

	{ .ptr = (void*)f526_reduce_27 },

	{ .ptr = (void*)f527_reduce_28 },

	{ .ptr = (void*)f528_reduce_29 },

	{ .ptr = (void*)f529_reduce_30 },

	{ .ptr = (void*)f530_reduce_31 },

	{ .ptr = (void*)f531_reduce_32 },

	{ .ptr = (void*)f532_reduce_33 },

	{ .ptr = (void*)f533_reduce_34 },

	{ .ptr = (void*)f534_reduce_35 },

	{ .ptr = (void*)f535_reduce_36 },

	{ .ptr = (void*)f536_reduce_37 },

	{ .ptr = (void*)f537_reduce_38 },

	{ .ptr = (void*)f538_reduce_39 },

	{ .ptr = (void*)f539_reduce_40 },

	{ .ptr = (void*)f540_reduce_41 },

	{ .ptr = (void*)f541_reduce_42 },

	{ .ptr = (void*)f542_reduce_43 },

	{ .ptr = (void*)f543_reduce_44 },

	{ .ptr = (void*)f544_reduce_45 },

	{ .ptr = (void*)f545_reduce_46 },

	{ .ptr = (void*)f546_reduce_47 },

	{ .ptr = (void*)f547_reduce_48 },

	{ .ptr = (void*)f548_reduce_49 },

	{ .ptr = (void*)f549_reduce_50 },

	{ .ptr = (void*)f550_reduce_51 },

	{ .ptr = (void*)f551_reduce_52 },

	{ .ptr = (void*)f552_reduce_53 },

	{ .ptr = (void*)f553_reduce_54 },

	{ .ptr = (void*)f554_reduce_55 },

	{ .ptr = (void*)f555_reduce_56 },

	{ .ptr = (void*)f556_reduce_57 },

	{ .ptr = (void*)f557_reduce_58 },

	{ .ptr = (void*)f558_reduce_59 },

	{ .ptr = (void*)f559_reduce_60 },

	{ .ptr = (void*)f560_reduce_61 },

	{ .ptr = (void*)f561_reduce_62 },

	{ .ptr = (void*)f562_reduce_63 },

	{ .ptr = (void*)f563_reduce_64 },

	{ .ptr = (void*)f564_reduce_65 },

	{ .ptr = (void*)f565_reduce_66 },

	{ .ptr = (void*)f566_reduce_67 },

	{ .ptr = (void*)f567_reduce_68 },

	{ .ptr = (void*)f568_reduce_69 },

	{ .ptr = (void*)f569_reduce_70 },

	{ .ptr = (void*)f570_reduce_71 },

	{ .ptr = (void*)f571_reduce_72 },

	{ .ptr = (void*)f572_reduce_73 },

	{ .ptr = (void*)f573_reduce_74 },

	{ .ptr = (void*)f574_reduce_75 },

	{ .ptr = (void*)f575_reduce_76 },

	{ .ptr = (void*)f576_reduce_77 },

	{ .ptr = (void*)f577_reduce_78 },

	{ .ptr = (void*)f578_reduce_79 },

	{ .ptr = (void*)f579_reduce_80 },

	{ .ptr = (void*)f580_reduce_81 },

	{ .ptr = (void*)f581_reduce_82 },

	{ .ptr = (void*)f582_reduce_83 },

	{ .ptr = (void*)f583_reduce_84 },

	{ .ptr = (void*)f585_reduce_85 },

	{ .ptr = (void*)f586_reduce_86 },

	{ .ptr = (void*)f587_reduce_87 },

	{ .ptr = (void*)f588_reduce_88 },

	{ .ptr = (void*)f589_reduce_89 },

	{ .ptr = (void*)f590_reduce_90 },

	{ .ptr = (void*)f591_reduce_91 },

	{ .ptr = (void*)f592_reduce_92 },

	{ .ptr = (void*)f593_reduce_93 },

	{ .ptr = (void*)f594_reduce_94 },

	{ .ptr = (void*)f595_reduce_95 },

	{ .ptr = (void*)f596_reduce_96 },

	{ .ptr = (void*)f597_reduce_97 },

	{ .ptr = (void*)f598_reduce_98 },

	{ .ptr = (void*)f599_reduce_99 },

	{ .ptr = (void*)f600_reduce_100 },

	{ .ptr = (void*)f601_reduce_101 },

	{ .ptr = (void*)f602_reduce_102 },

	{ .ptr = (void*)f603_reduce_103 },

	{ .ptr = (void*)f604_reduce_104 },

	{ .ptr = (void*)f605_reduce_105 },

	{ .ptr = (void*)f606_reduce_106 },

	{ .ptr = (void*)f607_reduce_107 },

	{ .ptr = (void*)f608_reduce_108 },

	{ .ptr = (void*)f609_reduce_109 },

	{ .ptr = (void*)f610_reduce_110 },

	{ .ptr = (void*)f611_reduce_111 },

	{ .ptr = (void*)f612_reduce_112 },

	{ .ptr = (void*)f613_reduce_113 },

	{ .ptr = (void*)f614_reduce_114 },

	{ .ptr = (void*)f615_reduce_115 },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f616_reduce_122 },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f617_reduce_126 },

	{ .ptr = (void*)f618_reduce_127 },

	{ .ptr = (void*)f619_reduce_128 },

	{ .ptr = (void*)f620_reduce_129 },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f621_reduce_135 },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f623_reduce_default },

	{ .ptr = (void*)f622_reduce_138 },

};

// yy_reduce workspace at ws+2912 length ws+94
void f497_yy_reduce(i2* p10332 /* yyact */, i1 p10333 /* yylookahead */, i2 p10334 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+2912) = p10334; /*yyruleno */
	*(i1*)(intptr_t)(ws+2914) = p10333; /*yylookahead */

	i8 v10335 = (i8)(intptr_t)(((i1*)c02_a7b9+0));
	i8 v10336 = (i8)(intptr_t)(ws+2912);
	i2 v10337 = *(i2*)(intptr_t)v10336;
	i1 v10338 = v10337;
	i8 v10339 = v10338;
	i8 v10340 = v10335+v10339;
	i1 v10341 = *(i1*)(intptr_t)v10340;
	i8 v10342 = (i8)(intptr_t)(ws+2918);
	*(i1*)(intptr_t)v10342 = v10341;

	i8 v10343 = (i8)(intptr_t)(ws+1248);
	i8 v10344 = *(i8*)(intptr_t)v10343;
	i8 v10345 = (i8)(intptr_t)(ws+2856);
	if (v10344==v10345) goto c02_07bd; else goto c02_07be;

c02_07bd:;

	i8 v10346 = (i8)(intptr_t)(f495_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10346)();

	goto c02_07ba;

c02_07be:;

c02_07ba:;

	i8 v10347 = (i8)(intptr_t)(ws+2928);
	i8 v10348 = (i8)(intptr_t)(ws+2992);
	*(i8*)(intptr_t)v10348 = v10347;

	i8 v10349 = (i8)(intptr_t)(ws+2918);
	i1 v10350 = *(i1*)(intptr_t)v10349;
	i8 v10351 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v10351 = v10350;

c02_07c1:;

	i8 v10352 = (i8)(intptr_t)(ws+3000);
	i1 v10353 = *(i1*)(intptr_t)v10352;
	i1 v10354 = (i1)+0;
	if (v10353==v10354) goto c02_07c4; else goto c02_07c3;

c02_07c3:;

	i8 v10355 = (i8)(intptr_t)(ws+1248);
	i8 v10356 = *(i8*)(intptr_t)v10355;
	i8 v10357 = v10356+(+8);
	i8 v10358 = *(i8*)(intptr_t)v10357;
	i8 v10359 = (i8)(intptr_t)(ws+2992);
	i8 v10360 = *(i8*)(intptr_t)v10359;
	*(i8*)(intptr_t)v10360 = v10358;

	i8 v10361 = (i8)(intptr_t)(ws+1248);
	i8 v10362 = *(i8*)(intptr_t)v10361;
	i8 v10363 = v10362+(-16);
	i8 v10364 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v10364 = v10363;

	i8 v10365 = (i8)(intptr_t)(ws+2992);
	i8 v10366 = *(i8*)(intptr_t)v10365;
	i8 v10367 = v10366+(+8);
	i8 v10368 = (i8)(intptr_t)(ws+2992);
	*(i8*)(intptr_t)v10368 = v10367;

	i8 v10369 = (i8)(intptr_t)(ws+3000);
	i1 v10370 = *(i1*)(intptr_t)v10369;
	i1 v10371 = v10370+(-1);
	i8 v10372 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v10372 = v10371;

	goto c02_07c1;

c02_07c4:;































































































































	i8 v13147 = (i8)(intptr_t)(((i1*)c02_a914+0));
	i8 v13148 = (i8)(intptr_t)(ws+2912);
	i2 v13149 = *(i2*)(intptr_t)v13148;
	i1 v13150 = v13149;
	i8 v13151 = v13150;
	i1 v13152 = (i1)+3;
	i8 v13153 = ((i8)v13151)<<v13152;
	i8 v13154 = v13147+v13153;
	i8 v13155 = *(i8*)(intptr_t)v13154;

	((void(*)(void))(intptr_t)v13155)();

	i8 v13156 = (i8)(intptr_t)(ws+2920);
	i8 v13157 = *(i8*)(intptr_t)v13156;
	i8 v13158 = (i8)(intptr_t)(ws+1248);
	i8 v13159 = *(i8*)(intptr_t)v13158;
	i8 v13160 = v13159+(+24);
	*(i8*)(intptr_t)v13160 = v13157;

	i8 v13161 = (i8)(intptr_t)(((i1*)c02_a7b8+0));
	i8 v13162 = (i8)(intptr_t)(ws+2912);
	i2 v13163 = *(i2*)(intptr_t)v13162;
	i1 v13164 = v13163;
	i8 v13165 = v13164;
	i8 v13166 = v13161+v13165;
	i1 v13167 = *(i1*)(intptr_t)v13166;
	i8 v13168 = (i8)(intptr_t)(ws+3001);
	*(i1*)(intptr_t)v13168 = v13167;

	i8 v13169 = (i8)(intptr_t)(ws+1248);
	i8 v13170 = *(i8*)(intptr_t)v13169;
	i2 v13171 = *(i2*)(intptr_t)v13170;
	i8 v13172 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v13172 = v13171;

	i8 v13173 = (i8)(intptr_t)(((i1*)c02_a7a0+0));
	i8 v13174 = (i8)(intptr_t)(ws+3002);
	i2 v13175 = *(i2*)(intptr_t)v13174;
	i1 v13176 = v13175;
	i8 v13177 = v13176;
	i1 v13178 = (i1)+1;
	i8 v13179 = ((i8)v13177)<<v13178;
	i8 v13180 = v13173+v13179;
	i2 v13181 = *(i2*)(intptr_t)v13180;
	i8 v13182 = (i8)(intptr_t)(ws+2916);
	*(i2*)(intptr_t)v13182 = v13181;

	i2 v13183 = (i2)+113;
	i8 v13184 = (i8)(intptr_t)(ws+3002);
	i2 v13185 = *(i2*)(intptr_t)v13184;
	if (v13183<v13185) goto c02_0919; else goto c02_0918;

c02_0918:;

	i8 v13186 = (i8)(intptr_t)(((i1*)c02_a79f+0));
	i8 v13187 = (i8)(intptr_t)(ws+3002);
	i2 v13188 = *(i2*)(intptr_t)v13187;
	i1 v13189 = v13188;
	i8 v13190 = v13189;
	i1 v13191 = (i1)+1;
	i8 v13192 = ((i8)v13190)<<v13191;
	i8 v13193 = v13186+v13192;
	i2 v13194 = *(i2*)(intptr_t)v13193;
	i8 v13195 = (i8)(intptr_t)(ws+3001);
	i1 v13196 = *(i1*)(intptr_t)v13195;
	i2 v13197 = v13196;
	i2 v13198 = v13194+v13197;
	i8 v13199 = (i8)(intptr_t)(ws+3004);
	*(i2*)(intptr_t)v13199 = v13198;

	i8 v13200 = (i8)(intptr_t)(ws+3004);
	i2 v13201 = *(i2*)(intptr_t)v13200;
	i2 v13202 = (i2)+0;
	if (v13201<v13202) goto c02_0922; else goto c02_0924;

c02_0924:;

	i8 v13203 = (i8)(intptr_t)(ws+3004);
	i2 v13204 = *(i2*)(intptr_t)v13203;
	i2 v13205 = (i2)+1219;
	if (v13204<v13205) goto c02_0923; else goto c02_0922;

c02_0923:;

	i8 v13206 = (i8)(intptr_t)(((i1*)c02_a79d+0));
	i8 v13207 = (i8)(intptr_t)(ws+3004);
	i2 v13208 = *(i2*)(intptr_t)v13207;
	i8 v13209 = v13208;
	i8 v13210 = v13206+v13209;
	i1 v13211 = *(i1*)(intptr_t)v13210;
	i8 v13212 = (i8)(intptr_t)(ws+3001);
	i1 v13213 = *(i1*)(intptr_t)v13212;
	if (v13211==v13213) goto c02_0921; else goto c02_0922;

c02_0921:;

	i8 v13214 = (i8)(intptr_t)(((i1*)c02_a79c+0));
	i8 v13215 = (i8)(intptr_t)(ws+3004);
	i2 v13216 = *(i2*)(intptr_t)v13215;
	i8 v13217 = v13216;
	i1 v13218 = (i1)+1;
	i8 v13219 = ((i8)v13217)<<v13218;
	i8 v13220 = v13214+v13219;
	i2 v13221 = *(i2*)(intptr_t)v13220;
	i8 v13222 = (i8)(intptr_t)(ws+2916);
	*(i2*)(intptr_t)v13222 = v13221;

	goto c02_091a;

c02_0922:;

c02_091a:;

	goto c02_0915;

c02_0919:;

c02_0915:;

	i8 v13223 = (i8)(intptr_t)(ws+1248);
	i8 v13224 = *(i8*)(intptr_t)v13223;
	i8 v13225 = v13224+(+16);
	i8 v13226 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13226 = v13225;

	i8 v13227 = (i8)(intptr_t)(ws+2916);
	i2 v13228 = *(i2*)(intptr_t)v13227;
	i8 v13229 = (i8)(intptr_t)(ws+1248);
	i8 v13230 = *(i8*)(intptr_t)v13229;
	*(i2*)(intptr_t)v13230 = v13228;

	i8 v13231 = (i8)(intptr_t)(ws+3001);
	i1 v13232 = *(i1*)(intptr_t)v13231;
	i8 v13233 = (i8)(intptr_t)(ws+1248);
	i8 v13234 = *(i8*)(intptr_t)v13233;
	i8 v13235 = v13234+(+2);
	*(i1*)(intptr_t)v13235 = v13232;

endsub:;
	*p10332 = *(i2*)(intptr_t)(ws+2916);
}
	void f494_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+2912 length ws+0
void f624_yy_parse_failed(void) {

	i8 v13236 = (i8)(intptr_t)(f494_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v13236)();

endsub:;
}
	void f59_StartError(void);
const i1 c02_s01fd[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// yy_syntax_error workspace at ws+2912 length ws+16
void f625_yy_syntax_error(i8 p13237 /* yyminor */, i1 p13238 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2912) = p13238; /*yymajor */
	*(i8*)(intptr_t)(ws+2920) = p13237; /*yyminor */

	i8 v13239 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v13239)();

	i8 v13240 = (i8)(intptr_t)c02_s01fd;
	i8 v13241 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13241)(v13240);

	i8 v13242 = (i8)(intptr_t)(((i1*)c02_a7a1+0));
	i8 v13243 = (i8)(intptr_t)(ws+2912);
	i1 v13244 = *(i1*)(intptr_t)v13243;
	i8 v13245 = v13244;
	i1 v13246 = (i1)+3;
	i8 v13247 = ((i8)v13245)<<v13246;
	i8 v13248 = v13242+v13247;
	i8 v13249 = *(i8*)(intptr_t)v13248;
	i8 v13250 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13250)(v13249);

	i8 v13251 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v13251)();

endsub:;
}

// yy_accept workspace at ws+2912 length ws+0
void f626_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+2888 length ws+0
void f627_ParserInit(void) {

	i1 v13252 = (i1)-1;
	i8 v13253 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13253 = v13252;

	i8 v13254 = (i8)(intptr_t)(ws+1256);
	i8 v13255 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13255 = v13254;

	i2 v13256 = (i2)+0;
	i8 v13257 = (i8)(intptr_t)(ws+1256);
	*(i2*)(intptr_t)v13257 = v13256;

	i1 v13258 = (i1)+0;
	i8 v13259 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v13259 = v13258;

endsub:;
}
	void f493_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+2888 length ws+0
void f628_ParserDeinit(void) {

c02_0927:;

	i8 v13260 = (i8)(intptr_t)(ws+1248);
	i8 v13261 = *(i8*)(intptr_t)v13260;
	i8 v13262 = (i8)(intptr_t)(ws+1256);
	if (v13261==v13262) goto c02_092a; else goto c02_0929;

c02_0929:;

	i8 v13263 = (i8)(intptr_t)(f493_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v13263)();

	goto c02_0927;

c02_092a:;

endsub:;
}
	void f497_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f495_yy_stack_overflow(void);
	void f626_yy_accept(void);
	void f625_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f491_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f624_yy_parse_failed(void);

// ParserFeedToken workspace at ws+2888 length ws+20
void f629_ParserFeedToken(i8 p13264 /* yyminor */, i1 p13265 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2888) = p13265; /*yymajor */
	*(i8*)(intptr_t)(ws+2896) = p13264; /*yyminor */

	i8 v13266 = (i8)(intptr_t)(ws+1248);
	i8 v13267 = *(i8*)(intptr_t)v13266;
	i2 v13268 = *(i2*)(intptr_t)v13267;
	i8 v13269 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13269 = v13268;

c02_092b:;

	i2 v13270 = (i2)+221;
	i8 v13271 = (i8)(intptr_t)(ws+2904);
	i2 v13272 = *(i2*)(intptr_t)v13271;
	if (v13270<v13272) goto c02_0931; else goto c02_0930;

c02_0930:;

	i8 v13273 = (i8)(intptr_t)(((i1*)c02_a79e+0));
	i8 v13274 = (i8)(intptr_t)(ws+2904);
	i2 v13275 = *(i2*)(intptr_t)v13274;
	i1 v13276 = v13275;
	i8 v13277 = v13276;
	i1 v13278 = (i1)+1;
	i8 v13279 = ((i8)v13277)<<v13278;
	i8 v13280 = v13273+v13279;
	i2 v13281 = *(i2*)(intptr_t)v13280;
	i8 v13282 = (i8)(intptr_t)(ws+2888);
	i1 v13283 = *(i1*)(intptr_t)v13282;
	i2 v13284 = v13283;
	i2 v13285 = v13281+v13284;
	i8 v13286 = (i8)(intptr_t)(ws+2906);
	*(i2*)(intptr_t)v13286 = v13285;

	i8 v13287 = (i8)(intptr_t)(((i1*)c02_a79d+0));
	i8 v13288 = (i8)(intptr_t)(ws+2906);
	i2 v13289 = *(i2*)(intptr_t)v13288;
	i8 v13290 = v13289;
	i8 v13291 = v13287+v13290;
	i1 v13292 = *(i1*)(intptr_t)v13291;
	i8 v13293 = (i8)(intptr_t)(ws+2888);
	i1 v13294 = *(i1*)(intptr_t)v13293;
	if (v13292==v13294) goto c02_0936; else goto c02_0935;

c02_0935:;

	i8 v13295 = (i8)(intptr_t)(((i1*)c02_a7a0+0));
	i8 v13296 = (i8)(intptr_t)(ws+2904);
	i2 v13297 = *(i2*)(intptr_t)v13296;
	i1 v13298 = v13297;
	i8 v13299 = v13298;
	i1 v13300 = (i1)+1;
	i8 v13301 = ((i8)v13299)<<v13300;
	i8 v13302 = v13295+v13301;
	i2 v13303 = *(i2*)(intptr_t)v13302;
	i8 v13304 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13304 = v13303;

	goto c02_0932;

c02_0936:;

	i8 v13305 = (i8)(intptr_t)(((i1*)c02_a79c+0));
	i8 v13306 = (i8)(intptr_t)(ws+2906);
	i2 v13307 = *(i2*)(intptr_t)v13306;
	i8 v13308 = v13307;
	i1 v13309 = (i1)+1;
	i8 v13310 = ((i8)v13308)<<v13309;
	i8 v13311 = v13305+v13310;
	i2 v13312 = *(i2*)(intptr_t)v13311;
	i8 v13313 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13313 = v13312;

c02_0932:;

	goto c02_092d;

c02_0931:;

c02_092d:;

	i8 v13314 = (i8)(intptr_t)(ws+2904);
	i2 v13315 = *(i2*)(intptr_t)v13314;
	i2 v13316 = (i2)+451;
	if (v13315<v13316) goto c02_093b; else goto c02_093a;

c02_093a:;

	i8 v13317 = (i8)(intptr_t)(ws+2904);
	i2 v13318 = *(i2*)(intptr_t)v13317;
	i2 v13319 = v13318+(-451);
	i8 v13320 = (i8)(intptr_t)(ws+2888);
	i1 v13321 = *(i1*)(intptr_t)v13320;
	i8 v13322 = (i8)(intptr_t)(f497_yy_reduce);
	i2 v13323;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v13322)(&v13323, v13321, v13319);
	i8 v13324 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13324 = v13323;

	goto c02_0937;

c02_093b:;

	i2 v13325 = (i2)+447;
	i8 v13326 = (i8)(intptr_t)(ws+2904);
	i2 v13327 = *(i2*)(intptr_t)v13326;
	if (v13325<v13327) goto c02_093f; else goto c02_093e;

c02_093e:;

	i8 v13328 = (i8)(intptr_t)(ws+1248);
	i8 v13329 = *(i8*)(intptr_t)v13328;
	i8 v13330 = (i8)(intptr_t)(ws+2856);
	if (v13329==v13330) goto c02_0943; else goto c02_0944;

c02_0943:;

	i8 v13331 = (i8)(intptr_t)(f495_yy_stack_overflow);

	((void(*)(void))(intptr_t)v13331)();

	goto endsub;

c02_0944:;

c02_0940:;

	i8 v13332 = (i8)(intptr_t)(ws+1248);
	i8 v13333 = *(i8*)(intptr_t)v13332;
	i8 v13334 = v13333+(+16);
	i8 v13335 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13335 = v13334;

	i2 v13336 = (i2)+221;
	i8 v13337 = (i8)(intptr_t)(ws+2904);
	i2 v13338 = *(i2*)(intptr_t)v13337;
	if (v13336<v13338) goto c02_0948; else goto c02_0949;

c02_0948:;

	i8 v13339 = (i8)(intptr_t)(ws+2904);
	i2 v13340 = *(i2*)(intptr_t)v13339;
	i2 v13341 = v13340+(+142);
	i8 v13342 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13342 = v13341;

	goto c02_0945;

c02_0949:;

c02_0945:;

	i8 v13343 = (i8)(intptr_t)(ws+2904);
	i2 v13344 = *(i2*)(intptr_t)v13343;
	i8 v13345 = (i8)(intptr_t)(ws+1248);
	i8 v13346 = *(i8*)(intptr_t)v13345;
	*(i2*)(intptr_t)v13346 = v13344;

	i8 v13347 = (i8)(intptr_t)(ws+2888);
	i1 v13348 = *(i1*)(intptr_t)v13347;
	i8 v13349 = (i8)(intptr_t)(ws+1248);
	i8 v13350 = *(i8*)(intptr_t)v13349;
	i8 v13351 = v13350+(+2);
	*(i1*)(intptr_t)v13351 = v13348;

	i8 v13352 = (i8)(intptr_t)(ws+2896);
	i8 v13353 = *(i8*)(intptr_t)v13352;
	i8 v13354 = *(i8*)(intptr_t)v13353;
	i8 v13355 = (i8)(intptr_t)(ws+1248);
	i8 v13356 = *(i8*)(intptr_t)v13355;
	i8 v13357 = v13356+(+8);
	*(i8*)(intptr_t)v13357 = v13354;

	i8 v13358 = (i8)(intptr_t)(ws+2872);
	i1 v13359 = *(i1*)(intptr_t)v13358;
	i1 v13360 = (i1)+0;
	if ((s1)v13359<(s1)v13360) goto c02_094e; else goto c02_094d;

c02_094d:;

	i8 v13361 = (i8)(intptr_t)(ws+2872);
	i1 v13362 = *(i1*)(intptr_t)v13361;
	i1 v13363 = v13362+(-1);
	i8 v13364 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13364 = v13363;

	goto c02_094a;

c02_094e:;

c02_094a:;

	goto c02_092c;

c02_093f:;

	i8 v13365 = (i8)(intptr_t)(ws+2904);
	i2 v13366 = *(i2*)(intptr_t)v13365;
	i2 v13367 = (i2)+449;
	if (v13366==v13367) goto c02_0951; else goto c02_0952;

c02_0951:;

	i8 v13368 = (i8)(intptr_t)(ws+1248);
	i8 v13369 = *(i8*)(intptr_t)v13368;
	i8 v13370 = v13369+(-16);
	i8 v13371 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13371 = v13370;

	i8 v13372 = (i8)(intptr_t)(f626_yy_accept);

	((void(*)(void))(intptr_t)v13372)();

	goto c02_092c;

c02_0952:;

	i1 v13373 = (i1)+0;
	i8 v13374 = (i8)(intptr_t)(ws+2872);
	i1 v13375 = *(i1*)(intptr_t)v13374;
	if ((s1)v13373<(s1)v13375) goto c02_0957; else goto c02_0956;

c02_0956:;

	i8 v13376 = (i8)(intptr_t)(ws+2888);
	i1 v13377 = *(i1*)(intptr_t)v13376;
	i8 v13378 = (i8)(intptr_t)(ws+2896);
	i8 v13379 = *(i8*)(intptr_t)v13378;
	i8 v13380 = (i8)(intptr_t)(f625_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v13380)(v13379, v13377);

	goto c02_0953;

c02_0957:;

c02_0953:;

	i1 v13381 = (i1)+3;
	i8 v13382 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13382 = v13381;

	i8 v13383 = (i8)(intptr_t)(ws+2888);
	i1 v13384 = *(i1*)(intptr_t)v13383;
	i8 v13385 = (i8)(intptr_t)(ws+2896);
	i8 v13386 = *(i8*)(intptr_t)v13385;
	i8 v13387 = (i8)(intptr_t)(f491_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13387)(v13386, v13384);

	i8 v13388 = (i8)(intptr_t)(ws+2888);
	i1 v13389 = *(i1*)(intptr_t)v13388;
	i1 v13390 = (i1)+0;
	if (v13389==v13390) goto c02_095b; else goto c02_095c;

c02_095b:;

	i8 v13391 = (i8)(intptr_t)(f624_yy_parse_failed);

	((void(*)(void))(intptr_t)v13391)();

	i1 v13392 = (i1)-1;
	i8 v13393 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13393 = v13392;

	goto c02_0958;

c02_095c:;

c02_0958:;

	goto c02_092c;

c02_0937:;

	i8 v13394 = (i8)(intptr_t)(ws+1248);
	i8 v13395 = *(i8*)(intptr_t)v13394;
	i8 v13396 = (i8)(intptr_t)(ws+1256);
	if (v13395==v13396) goto c02_0960; else goto c02_0961;

c02_0960:;

	goto c02_092c;

c02_0961:;

c02_095d:;

	goto c02_092b;

c02_092c:;

endsub:;
}
	void f35_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s01fe[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+2888 length ws+0
void f630_PrintFreeMemory(void) {

	i8 v13397 = (i8)(intptr_t)(f35_GetFreeMemory);
	i8 v13398;

	((void(*)(i8* /* i */))(intptr_t)v13397)(&v13398);
	i1 v13399 = (i1)+10;
	i8 v13400 = ((i8)v13398)>>v13399;
	i2 v13401 = v13400;
	i8 v13402 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v13402)(v13401);

	i8 v13403 = (i8)(intptr_t)c02_s01fe;
	i8 v13404 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13404)(v13403);

endsub:;
}
const i1 c02_s01ff[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+2896 length ws+0
void f631_SyntaxError(void) {

	i8 v13405 = (i8)(intptr_t)c02_s01ff;
	i8 v13406 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13406)(v13405);

	i8 v13407 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v13407)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f62_LexerAddIncludePath(i8 /* path */);
	void f631_SyntaxError(void);
	void f631_SyntaxError(void);
	void f631_SyntaxError(void);

// ParseArguments workspace at ws+2888 length ws+8
void f632_ParseArguments(void) {

	i8 v13408 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v13408)();

c02_0962:;

	i8 v13409 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v13410;

	((void(*)(i8* /* arg */))(intptr_t)v13409)(&v13410);
	i8 v13411 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v13411 = v13410;

	i8 v13412 = (i8)(intptr_t)(ws+2888);
	i8 v13413 = *(i8*)(intptr_t)v13412;
	i8 v13414 = (i8)+0;
	if (v13413==v13414) goto c02_0967; else goto c02_0968;

c02_0967:;

	goto c02_0963;

c02_0968:;

c02_0964:;

	i8 v13415 = (i8)(intptr_t)(ws+2888);
	i8 v13416 = *(i8*)(intptr_t)v13415;
	i1 v13417 = *(i1*)(intptr_t)v13416;
	i1 v13418 = (i1)+45;
	if (v13417==v13418) goto c02_096c; else goto c02_096d;

c02_096c:;

	i8 v13419 = (i8)(intptr_t)(ws+2888);
	i8 v13420 = *(i8*)(intptr_t)v13419;
	i8 v13421 = v13420+(+1);
	i8 v13422 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v13422 = v13421;

	i8 v13423 = (i8)(intptr_t)(ws+2888);
	i8 v13424 = *(i8*)(intptr_t)v13423;
	i1 v13425 = *(i1*)(intptr_t)v13424;
	i1 v13426 = (i1)+73;
	if (v13425==v13426) goto c02_0971; else goto c02_0972;

c02_0971:;

	i8 v13427 = (i8)(intptr_t)(ws+2888);
	i8 v13428 = *(i8*)(intptr_t)v13427;
	i8 v13429 = v13428+(+1);
	i8 v13430 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v13430 = v13429;

	i8 v13431 = (i8)(intptr_t)(ws+2888);
	i8 v13432 = *(i8*)(intptr_t)v13431;
	i8 v13433 = (i8)(intptr_t)(f62_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v13433)(v13432);

	goto c02_096e;

c02_0972:;

	i8 v13434 = (i8)(intptr_t)(f631_SyntaxError);

	((void(*)(void))(intptr_t)v13434)();

c02_096e:;

	goto c02_0969;

c02_096d:;

	i8 v13435 = (i8)(intptr_t)(ws+24);
	i8 v13436 = *(i8*)(intptr_t)v13435;
	i8 v13437 = (i8)+0;
	if (v13436==v13437) goto c02_0976; else goto c02_0977;

c02_0976:;

	i8 v13438 = (i8)(intptr_t)(ws+2888);
	i8 v13439 = *(i8*)(intptr_t)v13438;
	i8 v13440 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v13440 = v13439;

	goto c02_0973;

c02_0977:;

	i8 v13441 = (i8)(intptr_t)(ws+32);
	i8 v13442 = *(i8*)(intptr_t)v13441;
	i8 v13443 = (i8)+0;
	if (v13442==v13443) goto c02_097a; else goto c02_097b;

c02_097a:;

	i8 v13444 = (i8)(intptr_t)(ws+2888);
	i8 v13445 = *(i8*)(intptr_t)v13444;
	i8 v13446 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v13446 = v13445;

	goto c02_0973;

c02_097b:;

	i8 v13447 = (i8)(intptr_t)(f631_SyntaxError);

	((void(*)(void))(intptr_t)v13447)();

c02_0973:;

c02_0969:;

	goto c02_0962;

c02_0963:;

	i8 v13448 = (i8)(intptr_t)(ws+24);
	i8 v13449 = *(i8*)(intptr_t)v13448;
	i8 v13450 = (i8)+0;
	if (v13449==v13450) goto c02_0981; else goto c02_0983;

c02_0983:;

	i8 v13451 = (i8)(intptr_t)(ws+32);
	i8 v13452 = *(i8*)(intptr_t)v13451;
	i8 v13453 = (i8)+0;
	if (v13452==v13453) goto c02_0981; else goto c02_0982;

c02_0981:;

	i8 v13454 = (i8)(intptr_t)(f631_SyntaxError);

	((void(*)(void))(intptr_t)v13454)();

	goto c02_097c;

c02_0982:;

c02_097c:;

endsub:;
}
const i1 c02_s0200[] = { 0x43,0x4f,0x57,0x43,0x4f,0x4d,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f630_PrintFreeMemory(void);
	void f632_ParseArguments(void);
const i1 c02_s0201[] = { 0 };
	void f62_LexerAddIncludePath(i8 /* path */);
	void f66_LexerIncludeFile(i8 /* path */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
const i1 c02_s0202[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f220_ArchInitTypes(void);
	void f180_EmitterOpenfile(i8 /* filename */);
	void f182_EmitterDeclareSubroutine(i8 /* subr */);
	void f129_MidStartfile(i8* /* m */);
	void f448_Generate(i8 /* statement */);
	void f139_MidStartsub(i8* /* m */, i8 /* subr */);
	void f448_Generate(i8 /* statement */);
	void f627_ParserInit(void);
	void f67_LexerReadToken(i1* /* token */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);
	void f629_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f628_ParserDeinit(void);
	void f112_MidEndsub(i8* /* m */, i8 /* subr */);
	void f448_Generate(i8 /* statement */);
	void f128_MidEndfile(i8* /* m */);
	void f448_Generate(i8 /* statement */);
	void f181_EmitterClosefile(void);
const i1 c02_s0203[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f630_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+2888
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 




















































	i8 v825 = (i8)+0;
	i8 v826 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v826 = v825;

	i8 v827 = (i8)+0;
	i8 v828 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v828 = v827;

	i2 v829 = (i2)+1;
	i8 v830 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v830 = v829;

	i2 v831 = (i2)+1;
	i8 v832 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v832 = v831;

	i8 v833 = (i8)(intptr_t)(ws+88);
	i8 v834 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v834 = v833;




	i8 v928 = (i8)+0;
	i8 v929 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v929 = v928;

	i8 v930 = (i8)+0;
	i8 v931 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v931 = v930;

	i1 v932 = (i1)+0;
	i8 v933 = (i8)(intptr_t)(ws+240);
	*(i1*)(intptr_t)v933 = v932;

	i1 v934 = (i1)+0;
	i8 v935 = (i8)(intptr_t)(ws+369);
	*(i1*)(intptr_t)v935 = v934;








	i1 v982 = (i1)+0;
	i8 v983 = (i8)(intptr_t)(ws+376);
	*(i1*)(intptr_t)v983 = v982;














































































































































	i2 v4642 = (i2)+1;
	i8 v4643 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4643 = v4642;

	i8 v4644 = (i8)+0;
	i8 v4645 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v4645 = v4644;































	i2 v5712 = (i2)+0;
	i8 v5713 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5713 = v5712;


	i1 v5772 = (i1)+0;
	i8 v5773 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5773 = v5772;


















	i1 v8643 = (i1)+0;
	i8 v8644 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v8644 = v8643;


































































	i8 v13455 = (i8)(intptr_t)c02_s0200;
	i8 v13456 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13456)(v13455);

	i8 v13457 = (i8)(intptr_t)(f630_PrintFreeMemory);

	((void(*)(void))(intptr_t)v13457)();

	i8 v13458 = (i8)(intptr_t)(f632_ParseArguments);

	((void(*)(void))(intptr_t)v13458)();

	i8 v13459 = (i8)(intptr_t)c02_s0201;
	i8 v13460 = (i8)(intptr_t)(f62_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v13460)(v13459);

	i8 v13461 = (i8)(intptr_t)(ws+24);
	i8 v13462 = *(i8*)(intptr_t)v13461;
	i8 v13463 = (i8)(intptr_t)(f66_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v13463)(v13462);

	i8 v13464 = (i8)+107;
	i8 v13465 = (i8)(intptr_t)(f31_Alloc);
	i8 v13466;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13465)(&v13466, v13464);
	i8 v13467 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v13467 = v13466;

	i8 v13468 = (i8)(intptr_t)c02_s0202;
	i8 v13469 = (i8)(intptr_t)(ws+40);
	i8 v13470 = *(i8*)(intptr_t)v13469;
	*(i8*)(intptr_t)v13470 = v13468;

	i8 v13471 = (i8)(intptr_t)(f220_ArchInitTypes);

	((void(*)(void))(intptr_t)v13471)();

	i8 v13472 = (i8)(intptr_t)(ws+32);
	i8 v13473 = *(i8*)(intptr_t)v13472;
	i8 v13474 = (i8)(intptr_t)(f180_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v13474)(v13473);

	i8 v13475 = (i8)(intptr_t)(ws+40);
	i8 v13476 = *(i8*)(intptr_t)v13475;
	i8 v13477 = (i8)(intptr_t)(f182_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v13477)(v13476);

	i8 v13478 = (i8)(intptr_t)(f129_MidStartfile);
	i8 v13479;

	((void(*)(i8* /* m */))(intptr_t)v13478)(&v13479);
	i8 v13480 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13480)(v13479);

	i8 v13481 = (i8)(intptr_t)(ws+40);
	i8 v13482 = *(i8*)(intptr_t)v13481;
	i8 v13483 = (i8)(intptr_t)(f139_MidStartsub);
	i8 v13484;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v13483)(&v13484, v13482);
	i8 v13485 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13485)(v13484);

	i8 v13486 = (i8)(intptr_t)(f627_ParserInit);

	((void(*)(void))(intptr_t)v13486)();

c02_0984:;

	i8 v13487 = (i8)(intptr_t)(f67_LexerReadToken);
	i1 v13488;

	((void(*)(i1* /* token */))(intptr_t)v13487)(&v13488);
	i8 v13489 = (i8)(intptr_t)(ws+2873);
	*(i1*)(intptr_t)v13489 = v13488;

	i8 v13490 = (i8)(intptr_t)(ws+2873);
	i1 v13491 = *(i1*)(intptr_t)v13490;

	if (v13491 != +34) goto c02_0987;

	i8 v13492 = (i8)(intptr_t)(ws+372);
	i4 v13493 = *(i4*)(intptr_t)v13492;
	i8 v13494 = (i8)(intptr_t)(ws+2880);
	*(i4*)(intptr_t)v13494 = v13493;

	goto c02_0986;

c02_0987:;

	if (v13491 != +33) goto c02_0988;

	i8 v13495 = (i8)(intptr_t)(ws+241);
	i8 v13496 = (i8)(intptr_t)(f33_StrDup);
	i8 v13497;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v13496)(&v13497, v13495);
	i8 v13498 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v13498 = v13497;

	goto c02_0986;

c02_0988:;

	if (v13491 != +41) goto c02_0989;

	i8 v13499 = (i8)(intptr_t)(ws+241);
	i8 v13500 = (i8)(intptr_t)(f33_StrDup);
	i8 v13501;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v13500)(&v13501, v13499);
	i8 v13502 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v13502 = v13501;

	goto c02_0986;

c02_0989:;

	i4 v13503 = (i4)+0;
	i8 v13504 = (i8)(intptr_t)(ws+2880);
	*(i4*)(intptr_t)v13504 = v13503;

c02_0986:;


	i8 v13505 = (i8)(intptr_t)(ws+2873);
	i1 v13506 = *(i1*)(intptr_t)v13505;
	i8 v13507 = (i8)(intptr_t)(ws+2880);
	i8 v13508 = (i8)(intptr_t)(f629_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v13508)(v13507, v13506);

	i8 v13509 = (i8)(intptr_t)(ws+2873);
	i1 v13510 = *(i1*)(intptr_t)v13509;
	i1 v13511 = (i1)+0;
	if (v13510==v13511) goto c02_098d; else goto c02_098e;

c02_098d:;

	goto c02_0985;

c02_098e:;

c02_098a:;

	goto c02_0984;

c02_0985:;

	i8 v13512 = (i8)(intptr_t)(f628_ParserDeinit);

	((void(*)(void))(intptr_t)v13512)();

	i8 v13513 = (i8)(intptr_t)(ws+40);
	i8 v13514 = *(i8*)(intptr_t)v13513;
	i8 v13515 = (i8)(intptr_t)(f112_MidEndsub);
	i8 v13516;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v13515)(&v13516, v13514);
	i8 v13517 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13517)(v13516);

	i8 v13518 = (i8)(intptr_t)(f128_MidEndfile);
	i8 v13519;

	((void(*)(i8* /* m */))(intptr_t)v13518)(&v13519);
	i8 v13520 = (i8)(intptr_t)(f448_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13520)(v13519);

	i8 v13521 = (i8)(intptr_t)(f181_EmitterClosefile);

	((void(*)(void))(intptr_t)v13521)();

	i8 v13522 = (i8)(intptr_t)c02_s0203;
	i8 v13523 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13523)(v13522);

	i8 v13524 = (i8)(intptr_t)(f630_PrintFreeMemory);

	((void(*)(void))(intptr_t)v13524)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                                                                                              