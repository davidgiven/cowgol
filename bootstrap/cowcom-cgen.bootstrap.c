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
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3016 length ws+24
void f91_MidAddress(i8* p1864 /* m */, i2 p1865 /* off */, i8 p1866 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p1866; /*sym */
	*(i2*)(intptr_t)(ws+3024) = p1865; /*off */

	i1 v1867 = (i1)+44;
	i8 v1868 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1869;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1868)(&v1869, v1867);
	i8 v1870 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v1870 = v1869;

	i8 v1871 = (i8)(intptr_t)(ws+3016);
	i8 v1872 = *(i8*)(intptr_t)v1871;
	i8 v1873 = (i8)(intptr_t)(ws+3032);
	i8 v1874 = *(i8*)(intptr_t)v1873;
	*(i8*)(intptr_t)v1874 = v1872;

	i8 v1875 = (i8)(intptr_t)(ws+3024);
	i2 v1876 = *(i2*)(intptr_t)v1875;
	i8 v1877 = (i8)(intptr_t)(ws+3032);
	i8 v1878 = *(i8*)(intptr_t)v1877;
	i8 v1879 = v1878+(+8);
	*(i2*)(intptr_t)v1879 = v1876;

endsub:;
	*p1864 = *(i8*)(intptr_t)(ws+3032);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3008 length ws+24
void f92_MidWhencase(i8* p1880 /* m */, i2 p1881 /* falselabel */, i4 p1882 /* value */, i1 p1883 /* width */) {
	*(i1*)(intptr_t)(ws+3008) = p1883; /*width */
	*(i4*)(intptr_t)(ws+3012) = p1882; /*value */
	*(i2*)(intptr_t)(ws+3016) = p1881; /*falselabel */

	i8 v1884 = (i8)(intptr_t)(ws+3008);
	i1 v1885 = *(i1*)(intptr_t)v1884;
	i8 v1886 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1887;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1886)(&v1887, v1885);
	i1 v1888 = v1887+(+77);
	i8 v1889 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1890;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1889)(&v1890, v1888);
	i8 v1891 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1891 = v1890;

	i8 v1892 = (i8)(intptr_t)(ws+3012);
	i4 v1893 = *(i4*)(intptr_t)v1892;
	i8 v1894 = (i8)(intptr_t)(ws+3024);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	*(i4*)(intptr_t)v1895 = v1893;

	i8 v1896 = (i8)(intptr_t)(ws+3016);
	i2 v1897 = *(i2*)(intptr_t)v1896;
	i8 v1898 = (i8)(intptr_t)(ws+3024);
	i8 v1899 = *(i8*)(intptr_t)v1898;
	i8 v1900 = v1899+(+4);
	*(i2*)(intptr_t)v1900 = v1897;

endsub:;
	*p1880 = *(i8*)(intptr_t)(ws+3024);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3056 length ws+16
void f93_MidInit(i8* p1901 /* m */, i4 p1902 /* value */, i1 p1903 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p1903; /*width */
	*(i4*)(intptr_t)(ws+3060) = p1902; /*value */

	i8 v1904 = (i8)(intptr_t)(ws+3056);
	i1 v1905 = *(i1*)(intptr_t)v1904;
	i8 v1906 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1907;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1906)(&v1907, v1905);
	i1 v1908 = v1907+(+7);
	i8 v1909 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1910;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1909)(&v1910, v1908);
	i8 v1911 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v1911 = v1910;

	i8 v1912 = (i8)(intptr_t)(ws+3060);
	i4 v1913 = *(i4*)(intptr_t)v1912;
	i8 v1914 = (i8)(intptr_t)(ws+3064);
	i8 v1915 = *(i8*)(intptr_t)v1914;
	*(i4*)(intptr_t)v1915 = v1913;

endsub:;
	*p1901 = *(i8*)(intptr_t)(ws+3064);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3016 length ws+16
void f94_MidEndcase(i8* p1916 /* m */, i1 p1917 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p1917; /*width */

	i8 v1918 = (i8)(intptr_t)(ws+3016);
	i1 v1919 = *(i1*)(intptr_t)v1918;
	i8 v1920 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1921;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1920)(&v1921, v1919);
	i1 v1922 = v1921+(+82);
	i8 v1923 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1924;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1923)(&v1924, v1922);
	i8 v1925 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v1925 = v1924;

endsub:;
	*p1916 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3008 length ws+8
void f95_MidAsmstart(i8* p1926 /* m */) {

	i1 v1927 = (i1)+16;
	i8 v1928 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1929;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1928)(&v1929, v1927);
	i8 v1930 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1930 = v1929;

endsub:;
	*p1926 = *(i8*)(intptr_t)(ws+3008);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3008 length ws+8
void f97_MidReturn(i8* p1953 /* m */) {

	i1 v1954 = (i1)+25;
	i8 v1955 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1956;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1955)(&v1956, v1954);
	i8 v1957 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v1957 = v1956;

endsub:;
	*p1953 = *(i8*)(intptr_t)(ws+3008);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3024 length ws+40
void f98_MidCalle(i8* p1958 /* m */, i8 p1959 /* subr */, i8 p1960 /* right */, i8 p1961 /* left */, i1 p1962 /* width */) {
	*(i1*)(intptr_t)(ws+3024) = p1962; /*width */
	*(i8*)(intptr_t)(ws+3032) = p1961; /*left */
	*(i8*)(intptr_t)(ws+3040) = p1960; /*right */
	*(i8*)(intptr_t)(ws+3048) = p1959; /*subr */

	i8 v1963 = (i8)(intptr_t)(ws+3024);
	i1 v1964 = *(i1*)(intptr_t)v1963;
	i8 v1965 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v1966;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v1965)(&v1966, v1964);
	i1 v1967 = v1966+(+27);
	i8 v1968 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1969;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1968)(&v1969, v1967);
	i8 v1970 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v1970 = v1969;

	i8 v1971 = (i8)(intptr_t)(ws+3032);
	i8 v1972 = *(i8*)(intptr_t)v1971;
	i8 v1973 = (i8)(intptr_t)(ws+3056);
	i8 v1974 = *(i8*)(intptr_t)v1973;
	i8 v1975 = v1974+(+24);
	*(i8*)(intptr_t)v1975 = v1972;

	i8 v1976 = (i8)(intptr_t)(ws+3040);
	i8 v1977 = *(i8*)(intptr_t)v1976;
	i8 v1978 = (i8)(intptr_t)(ws+3056);
	i8 v1979 = *(i8*)(intptr_t)v1978;
	i8 v1980 = v1979+(+32);
	*(i8*)(intptr_t)v1980 = v1977;

	i8 v1981 = (i8)(intptr_t)(ws+3048);
	i8 v1982 = *(i8*)(intptr_t)v1981;
	i8 v1983 = (i8)(intptr_t)(ws+3056);
	i8 v1984 = *(i8*)(intptr_t)v1983;
	*(i8*)(intptr_t)v1984 = v1982;

endsub:;
	*p1958 = *(i8*)(intptr_t)(ws+3056);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3056 length ws+32
void f99_MidCall(i8* p1985 /* m */, i8 p1986 /* subr */, i8 p1987 /* right */, i8 p1988 /* left */) {
	*(i8*)(intptr_t)(ws+3056) = p1988; /*left */
	*(i8*)(intptr_t)(ws+3064) = p1987; /*right */
	*(i8*)(intptr_t)(ws+3072) = p1986; /*subr */

	i1 v1989 = (i1)+26;
	i8 v1990 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v1991;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1990)(&v1991, v1989);
	i8 v1992 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v1992 = v1991;

	i8 v1993 = (i8)(intptr_t)(ws+3056);
	i8 v1994 = *(i8*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(ws+3080);
	i8 v1996 = *(i8*)(intptr_t)v1995;
	i8 v1997 = v1996+(+24);
	*(i8*)(intptr_t)v1997 = v1994;

	i8 v1998 = (i8)(intptr_t)(ws+3064);
	i8 v1999 = *(i8*)(intptr_t)v1998;
	i8 v2000 = (i8)(intptr_t)(ws+3080);
	i8 v2001 = *(i8*)(intptr_t)v2000;
	i8 v2002 = v2001+(+32);
	*(i8*)(intptr_t)v2002 = v1999;

	i8 v2003 = (i8)(intptr_t)(ws+3072);
	i8 v2004 = *(i8*)(intptr_t)v2003;
	i8 v2005 = (i8)(intptr_t)(ws+3080);
	i8 v2006 = *(i8*)(intptr_t)v2005;
	*(i8*)(intptr_t)v2006 = v2004;

endsub:;
	*p1985 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInits workspace at ws+3032 length ws+16
void f101_MidInits(i8* p2029 /* m */, i8 p2030 /* text */) {
	*(i8*)(intptr_t)(ws+3032) = p2030; /*text */

	i1 v2031 = (i1)+12;
	i8 v2032 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2033;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2032)(&v2033, v2031);
	i8 v2034 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v2034 = v2033;

	i8 v2035 = (i8)(intptr_t)(ws+3032);
	i8 v2036 = *(i8*)(intptr_t)v2035;
	i8 v2037 = (i8)(intptr_t)(ws+3040);
	i8 v2038 = *(i8*)(intptr_t)v2037;
	*(i8*)(intptr_t)v2038 = v2036;

endsub:;
	*p2029 = *(i8*)(intptr_t)(ws+3040);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3048 length ws+40
void f102_MidBltu(i8* p2039 /* m */, i1 p2040 /* negated */, i2 p2041 /* fallthrough */, i2 p2042 /* falselabel */, i2 p2043 /* truelabel */, i8 p2044 /* right */, i8 p2045 /* left */, i1 p2046 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2046; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2045; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2044; /*right */
	*(i2*)(intptr_t)(ws+3072) = p2043; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p2042; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p2041; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p2040; /*negated */

	i8 v2047 = (i8)(intptr_t)(ws+3048);
	i1 v2048 = *(i1*)(intptr_t)v2047;
	i8 v2049 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2050;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2049)(&v2050, v2048);
	i1 v2051 = v2050+(+67);
	i8 v2052 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2053;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2052)(&v2053, v2051);
	i8 v2054 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2054 = v2053;

	i8 v2055 = (i8)(intptr_t)(ws+3056);
	i8 v2056 = *(i8*)(intptr_t)v2055;
	i8 v2057 = (i8)(intptr_t)(ws+3080);
	i8 v2058 = *(i8*)(intptr_t)v2057;
	i8 v2059 = v2058+(+24);
	*(i8*)(intptr_t)v2059 = v2056;

	i8 v2060 = (i8)(intptr_t)(ws+3064);
	i8 v2061 = *(i8*)(intptr_t)v2060;
	i8 v2062 = (i8)(intptr_t)(ws+3080);
	i8 v2063 = *(i8*)(intptr_t)v2062;
	i8 v2064 = v2063+(+32);
	*(i8*)(intptr_t)v2064 = v2061;

	i8 v2065 = (i8)(intptr_t)(ws+3072);
	i2 v2066 = *(i2*)(intptr_t)v2065;
	i8 v2067 = (i8)(intptr_t)(ws+3080);
	i8 v2068 = *(i8*)(intptr_t)v2067;
	*(i2*)(intptr_t)v2068 = v2066;

	i8 v2069 = (i8)(intptr_t)(ws+3074);
	i2 v2070 = *(i2*)(intptr_t)v2069;
	i8 v2071 = (i8)(intptr_t)(ws+3080);
	i8 v2072 = *(i8*)(intptr_t)v2071;
	i8 v2073 = v2072+(+2);
	*(i2*)(intptr_t)v2073 = v2070;

	i8 v2074 = (i8)(intptr_t)(ws+3076);
	i2 v2075 = *(i2*)(intptr_t)v2074;
	i8 v2076 = (i8)(intptr_t)(ws+3080);
	i8 v2077 = *(i8*)(intptr_t)v2076;
	i8 v2078 = v2077+(+4);
	*(i2*)(intptr_t)v2078 = v2075;

	i8 v2079 = (i8)(intptr_t)(ws+3078);
	i1 v2080 = *(i1*)(intptr_t)v2079;
	i8 v2081 = (i8)(intptr_t)(ws+3080);
	i8 v2082 = *(i8*)(intptr_t)v2081;
	i8 v2083 = v2082+(+6);
	*(i1*)(intptr_t)v2083 = v2080;

endsub:;
	*p2039 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3008 length ws+8
void f103_MidEndinit(i8* p2084 /* m */) {

	i1 v2085 = (i1)+13;
	i8 v2086 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2087;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2086)(&v2087, v2085);
	i8 v2088 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2088 = v2087;

endsub:;
	*p2084 = *(i8*)(intptr_t)(ws+3008);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3008 length ws+8
void f104_MidAsmend(i8* p2089 /* m */) {

	i1 v2090 = (i1)+20;
	i8 v2091 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2092;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2091)(&v2092, v2090);
	i8 v2093 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v2093 = v2092;

endsub:;
	*p2089 = *(i8*)(intptr_t)(ws+3008);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3056 length ws+32
void f106_MidStore(i8* p2116 /* m */, i8 p2117 /* right */, i8 p2118 /* left */, i1 p2119 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p2119; /*width */
	*(i8*)(intptr_t)(ws+3064) = p2118; /*left */
	*(i8*)(intptr_t)(ws+3072) = p2117; /*right */

	i8 v2120 = (i8)(intptr_t)(ws+3056);
	i1 v2121 = *(i1*)(intptr_t)v2120;
	i8 v2122 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2123;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2122)(&v2123, v2121);
	i1 v2124 = v2123+(+50);
	i8 v2125 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2126;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2125)(&v2126, v2124);
	i8 v2127 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2127 = v2126;

	i8 v2128 = (i8)(intptr_t)(ws+3064);
	i8 v2129 = *(i8*)(intptr_t)v2128;
	i8 v2130 = (i8)(intptr_t)(ws+3080);
	i8 v2131 = *(i8*)(intptr_t)v2130;
	i8 v2132 = v2131+(+24);
	*(i8*)(intptr_t)v2132 = v2129;

	i8 v2133 = (i8)(intptr_t)(ws+3072);
	i8 v2134 = *(i8*)(intptr_t)v2133;
	i8 v2135 = (i8)(intptr_t)(ws+3080);
	i8 v2136 = *(i8*)(intptr_t)v2135;
	i8 v2137 = v2136+(+32);
	*(i8*)(intptr_t)v2137 = v2134;

endsub:;
	*p2116 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3024 length ws+16
void f107_MidStartinit(i8* p2138 /* m */, i8 p2139 /* sym */) {
	*(i8*)(intptr_t)(ws+3024) = p2139; /*sym */

	i1 v2140 = (i1)+6;
	i8 v2141 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2142;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2141)(&v2142, v2140);
	i8 v2143 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2143 = v2142;

	i8 v2144 = (i8)(intptr_t)(ws+3024);
	i8 v2145 = *(i8*)(intptr_t)v2144;
	i8 v2146 = (i8)(intptr_t)(ws+3032);
	i8 v2147 = *(i8*)(intptr_t)v2146;
	*(i8*)(intptr_t)v2147 = v2145;

endsub:;
	*p2138 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3008 length ws+32
void f108_MidBor(i8* p2148 /* m */, i1 p2149 /* negated */, i2 p2150 /* fallthrough */, i2 p2151 /* falselabel */, i2 p2152 /* truelabel */, i8 p2153 /* right */, i8 p2154 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2154; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2153; /*right */
	*(i2*)(intptr_t)(ws+3024) = p2152; /*truelabel */
	*(i2*)(intptr_t)(ws+3026) = p2151; /*falselabel */
	*(i2*)(intptr_t)(ws+3028) = p2150; /*fallthrough */
	*(i1*)(intptr_t)(ws+3030) = p2149; /*negated */

	i1 v2155 = (i1)+56;
	i8 v2156 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2157;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2156)(&v2157, v2155);
	i8 v2158 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2158 = v2157;

	i8 v2159 = (i8)(intptr_t)(ws+3008);
	i8 v2160 = *(i8*)(intptr_t)v2159;
	i8 v2161 = (i8)(intptr_t)(ws+3032);
	i8 v2162 = *(i8*)(intptr_t)v2161;
	i8 v2163 = v2162+(+24);
	*(i8*)(intptr_t)v2163 = v2160;

	i8 v2164 = (i8)(intptr_t)(ws+3016);
	i8 v2165 = *(i8*)(intptr_t)v2164;
	i8 v2166 = (i8)(intptr_t)(ws+3032);
	i8 v2167 = *(i8*)(intptr_t)v2166;
	i8 v2168 = v2167+(+32);
	*(i8*)(intptr_t)v2168 = v2165;

	i8 v2169 = (i8)(intptr_t)(ws+3024);
	i2 v2170 = *(i2*)(intptr_t)v2169;
	i8 v2171 = (i8)(intptr_t)(ws+3032);
	i8 v2172 = *(i8*)(intptr_t)v2171;
	*(i2*)(intptr_t)v2172 = v2170;

	i8 v2173 = (i8)(intptr_t)(ws+3026);
	i2 v2174 = *(i2*)(intptr_t)v2173;
	i8 v2175 = (i8)(intptr_t)(ws+3032);
	i8 v2176 = *(i8*)(intptr_t)v2175;
	i8 v2177 = v2176+(+2);
	*(i2*)(intptr_t)v2177 = v2174;

	i8 v2178 = (i8)(intptr_t)(ws+3028);
	i2 v2179 = *(i2*)(intptr_t)v2178;
	i8 v2180 = (i8)(intptr_t)(ws+3032);
	i8 v2181 = *(i8*)(intptr_t)v2180;
	i8 v2182 = v2181+(+4);
	*(i2*)(intptr_t)v2182 = v2179;

	i8 v2183 = (i8)(intptr_t)(ws+3030);
	i1 v2184 = *(i1*)(intptr_t)v2183;
	i8 v2185 = (i8)(intptr_t)(ws+3032);
	i8 v2186 = *(i8*)(intptr_t)v2185;
	i8 v2187 = v2186+(+6);
	*(i1*)(intptr_t)v2187 = v2184;

endsub:;
	*p2148 = *(i8*)(intptr_t)(ws+3032);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3016 length ws+24
void f110_MidStartcase(i8* p2210 /* m */, i8 p2211 /* left */, i1 p2212 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2212; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2211; /*left */

	i8 v2213 = (i8)(intptr_t)(ws+3016);
	i1 v2214 = *(i1*)(intptr_t)v2213;
	i8 v2215 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2216;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2215)(&v2216, v2214);
	i1 v2217 = v2216+(+72);
	i8 v2218 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2219;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2218)(&v2219, v2217);
	i8 v2220 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2220 = v2219;

	i8 v2221 = (i8)(intptr_t)(ws+3024);
	i8 v2222 = *(i8*)(intptr_t)v2221;
	i8 v2223 = (i8)(intptr_t)(ws+3032);
	i8 v2224 = *(i8*)(intptr_t)v2223;
	i8 v2225 = v2224+(+24);
	*(i8*)(intptr_t)v2225 = v2222;

endsub:;
	*p2210 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3016 length ws+16
void f111_MidAsmvalue(i8* p2226 /* m */, i4 p2227 /* value */) {
	*(i4*)(intptr_t)(ws+3016) = p2227; /*value */

	i1 v2228 = (i1)+19;
	i8 v2229 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2230;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2229)(&v2230, v2228);
	i8 v2231 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2231 = v2230;

	i8 v2232 = (i8)(intptr_t)(ws+3016);
	i4 v2233 = *(i4*)(intptr_t)v2232;
	i8 v2234 = (i8)(intptr_t)(ws+3024);
	i8 v2235 = *(i8*)(intptr_t)v2234;
	*(i4*)(intptr_t)v2235 = v2233;

endsub:;
	*p2226 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3016 length ws+16
void f113_MidAsmsymbol(i8* p2258 /* m */, i8 p2259 /* sym */) {
	*(i8*)(intptr_t)(ws+3016) = p2259; /*sym */

	i1 v2260 = (i1)+18;
	i8 v2261 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2262;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2261)(&v2262, v2260);
	i8 v2263 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2263 = v2262;

	i8 v2264 = (i8)(intptr_t)(ws+3016);
	i8 v2265 = *(i8*)(intptr_t)v2264;
	i8 v2266 = (i8)(intptr_t)(ws+3024);
	i8 v2267 = *(i8*)(intptr_t)v2266;
	*(i8*)(intptr_t)v2267 = v2265;

endsub:;
	*p2258 = *(i8*)(intptr_t)(ws+3024);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3048 length ws+40
void f114_MidBeq(i8* p2268 /* m */, i1 p2269 /* negated */, i2 p2270 /* fallthrough */, i2 p2271 /* falselabel */, i2 p2272 /* truelabel */, i8 p2273 /* right */, i8 p2274 /* left */, i1 p2275 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2275; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2274; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2273; /*right */
	*(i2*)(intptr_t)(ws+3072) = p2272; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p2271; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p2270; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p2269; /*negated */

	i8 v2276 = (i8)(intptr_t)(ws+3048);
	i1 v2277 = *(i1*)(intptr_t)v2276;
	i8 v2278 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2279;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2278)(&v2279, v2277);
	i1 v2280 = v2279+(+57);
	i8 v2281 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2282;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2281)(&v2282, v2280);
	i8 v2283 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2283 = v2282;

	i8 v2284 = (i8)(intptr_t)(ws+3056);
	i8 v2285 = *(i8*)(intptr_t)v2284;
	i8 v2286 = (i8)(intptr_t)(ws+3080);
	i8 v2287 = *(i8*)(intptr_t)v2286;
	i8 v2288 = v2287+(+24);
	*(i8*)(intptr_t)v2288 = v2285;

	i8 v2289 = (i8)(intptr_t)(ws+3064);
	i8 v2290 = *(i8*)(intptr_t)v2289;
	i8 v2291 = (i8)(intptr_t)(ws+3080);
	i8 v2292 = *(i8*)(intptr_t)v2291;
	i8 v2293 = v2292+(+32);
	*(i8*)(intptr_t)v2293 = v2290;

	i8 v2294 = (i8)(intptr_t)(ws+3072);
	i2 v2295 = *(i2*)(intptr_t)v2294;
	i8 v2296 = (i8)(intptr_t)(ws+3080);
	i8 v2297 = *(i8*)(intptr_t)v2296;
	*(i2*)(intptr_t)v2297 = v2295;

	i8 v2298 = (i8)(intptr_t)(ws+3074);
	i2 v2299 = *(i2*)(intptr_t)v2298;
	i8 v2300 = (i8)(intptr_t)(ws+3080);
	i8 v2301 = *(i8*)(intptr_t)v2300;
	i8 v2302 = v2301+(+2);
	*(i2*)(intptr_t)v2302 = v2299;

	i8 v2303 = (i8)(intptr_t)(ws+3076);
	i2 v2304 = *(i2*)(intptr_t)v2303;
	i8 v2305 = (i8)(intptr_t)(ws+3080);
	i8 v2306 = *(i8*)(intptr_t)v2305;
	i8 v2307 = v2306+(+4);
	*(i2*)(intptr_t)v2307 = v2304;

	i8 v2308 = (i8)(intptr_t)(ws+3078);
	i1 v2309 = *(i1*)(intptr_t)v2308;
	i8 v2310 = (i8)(intptr_t)(ws+3080);
	i8 v2311 = *(i8*)(intptr_t)v2310;
	i8 v2312 = v2311+(+6);
	*(i1*)(intptr_t)v2312 = v2309;

endsub:;
	*p2268 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3048 length ws+40
void f115_MidBlts(i8* p2313 /* m */, i1 p2314 /* negated */, i2 p2315 /* fallthrough */, i2 p2316 /* falselabel */, i2 p2317 /* truelabel */, i8 p2318 /* right */, i8 p2319 /* left */, i1 p2320 /* width */) {
	*(i1*)(intptr_t)(ws+3048) = p2320; /*width */
	*(i8*)(intptr_t)(ws+3056) = p2319; /*left */
	*(i8*)(intptr_t)(ws+3064) = p2318; /*right */
	*(i2*)(intptr_t)(ws+3072) = p2317; /*truelabel */
	*(i2*)(intptr_t)(ws+3074) = p2316; /*falselabel */
	*(i2*)(intptr_t)(ws+3076) = p2315; /*fallthrough */
	*(i1*)(intptr_t)(ws+3078) = p2314; /*negated */

	i8 v2321 = (i8)(intptr_t)(ws+3048);
	i1 v2322 = *(i1*)(intptr_t)v2321;
	i8 v2323 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2324;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2323)(&v2324, v2322);
	i1 v2325 = v2324+(+62);
	i8 v2326 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2327;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2326)(&v2327, v2325);
	i8 v2328 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2328 = v2327;

	i8 v2329 = (i8)(intptr_t)(ws+3056);
	i8 v2330 = *(i8*)(intptr_t)v2329;
	i8 v2331 = (i8)(intptr_t)(ws+3080);
	i8 v2332 = *(i8*)(intptr_t)v2331;
	i8 v2333 = v2332+(+24);
	*(i8*)(intptr_t)v2333 = v2330;

	i8 v2334 = (i8)(intptr_t)(ws+3064);
	i8 v2335 = *(i8*)(intptr_t)v2334;
	i8 v2336 = (i8)(intptr_t)(ws+3080);
	i8 v2337 = *(i8*)(intptr_t)v2336;
	i8 v2338 = v2337+(+32);
	*(i8*)(intptr_t)v2338 = v2335;

	i8 v2339 = (i8)(intptr_t)(ws+3072);
	i2 v2340 = *(i2*)(intptr_t)v2339;
	i8 v2341 = (i8)(intptr_t)(ws+3080);
	i8 v2342 = *(i8*)(intptr_t)v2341;
	*(i2*)(intptr_t)v2342 = v2340;

	i8 v2343 = (i8)(intptr_t)(ws+3074);
	i2 v2344 = *(i2*)(intptr_t)v2343;
	i8 v2345 = (i8)(intptr_t)(ws+3080);
	i8 v2346 = *(i8*)(intptr_t)v2345;
	i8 v2347 = v2346+(+2);
	*(i2*)(intptr_t)v2347 = v2344;

	i8 v2348 = (i8)(intptr_t)(ws+3076);
	i2 v2349 = *(i2*)(intptr_t)v2348;
	i8 v2350 = (i8)(intptr_t)(ws+3080);
	i8 v2351 = *(i8*)(intptr_t)v2350;
	i8 v2352 = v2351+(+4);
	*(i2*)(intptr_t)v2352 = v2349;

	i8 v2353 = (i8)(intptr_t)(ws+3078);
	i1 v2354 = *(i1*)(intptr_t)v2353;
	i8 v2355 = (i8)(intptr_t)(ws+3080);
	i8 v2356 = *(i8*)(intptr_t)v2355;
	i8 v2357 = v2356+(+6);
	*(i1*)(intptr_t)v2357 = v2354;

endsub:;
	*p2313 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3008 length ws+16
void f117_MidStartsub(i8* p2379 /* m */, i8 p2380 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p2380; /*subr */

	i1 v2381 = (i1)+4;
	i8 v2382 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2383;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2382)(&v2383, v2381);
	i8 v2384 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2384 = v2383;

	i8 v2385 = (i8)(intptr_t)(ws+3008);
	i8 v2386 = *(i8*)(intptr_t)v2385;
	i8 v2387 = (i8)(intptr_t)(ws+3016);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	*(i8*)(intptr_t)v2388 = v2386;

endsub:;
	*p2379 = *(i8*)(intptr_t)(ws+3016);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3016 length ws+16
void f119_MidJump(i8* p2411 /* m */, i2 p2412 /* label */) {
	*(i2*)(intptr_t)(ws+3016) = p2412; /*label */

	i1 v2413 = (i1)+24;
	i8 v2414 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2415;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2414)(&v2415, v2413);
	i8 v2416 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2416 = v2415;

	i8 v2417 = (i8)(intptr_t)(ws+3016);
	i2 v2418 = *(i2*)(intptr_t)v2417;
	i8 v2419 = (i8)(intptr_t)(ws+3024);
	i8 v2420 = *(i8*)(intptr_t)v2419;
	*(i2*)(intptr_t)v2420 = v2418;

endsub:;
	*p2411 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3016 length ws+8
void f120_MidEnd(i8* p2421 /* m */) {

	i1 v2422 = (i1)+1;
	i8 v2423 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2424;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2423)(&v2424, v2422);
	i8 v2425 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2425 = v2424;

endsub:;
	*p2421 = *(i8*)(intptr_t)(ws+3016);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3056 length ws+32
void f124_MidPoparg(i8* p2486 /* m */, i1 p2487 /* remaining */, i8 p2488 /* subr */, i1 p2489 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p2489; /*width */
	*(i8*)(intptr_t)(ws+3064) = p2488; /*subr */
	*(i1*)(intptr_t)(ws+3072) = p2487; /*remaining */

	i8 v2490 = (i8)(intptr_t)(ws+3056);
	i1 v2491 = *(i1*)(intptr_t)v2490;
	i8 v2492 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2493;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2492)(&v2493, v2491);
	i1 v2494 = v2493+(+37);
	i8 v2495 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2496;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2495)(&v2496, v2494);
	i8 v2497 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2497 = v2496;

	i8 v2498 = (i8)(intptr_t)(ws+3064);
	i8 v2499 = *(i8*)(intptr_t)v2498;
	i8 v2500 = (i8)(intptr_t)(ws+3080);
	i8 v2501 = *(i8*)(intptr_t)v2500;
	*(i8*)(intptr_t)v2501 = v2499;

	i8 v2502 = (i8)(intptr_t)(ws+3072);
	i1 v2503 = *(i1*)(intptr_t)v2502;
	i8 v2504 = (i8)(intptr_t)(ws+3080);
	i8 v2505 = *(i8*)(intptr_t)v2504;
	i8 v2506 = v2505+(+8);
	*(i1*)(intptr_t)v2506 = v2503;

endsub:;
	*p2486 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3016 length ws+48
void f125_MidArg(i8* p2507 /* m */, i1 p2508 /* remaining */, i8 p2509 /* subr */, i8 p2510 /* right */, i8 p2511 /* left */, i1 p2512 /* width */) {
	*(i1*)(intptr_t)(ws+3016) = p2512; /*width */
	*(i8*)(intptr_t)(ws+3024) = p2511; /*left */
	*(i8*)(intptr_t)(ws+3032) = p2510; /*right */
	*(i8*)(intptr_t)(ws+3040) = p2509; /*subr */
	*(i1*)(intptr_t)(ws+3048) = p2508; /*remaining */

	i8 v2513 = (i8)(intptr_t)(ws+3016);
	i1 v2514 = *(i1*)(intptr_t)v2513;
	i8 v2515 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2516;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2515)(&v2516, v2514);
	i1 v2517 = v2516+(+32);
	i8 v2518 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2519;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2518)(&v2519, v2517);
	i8 v2520 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2520 = v2519;

	i8 v2521 = (i8)(intptr_t)(ws+3024);
	i8 v2522 = *(i8*)(intptr_t)v2521;
	i8 v2523 = (i8)(intptr_t)(ws+3056);
	i8 v2524 = *(i8*)(intptr_t)v2523;
	i8 v2525 = v2524+(+24);
	*(i8*)(intptr_t)v2525 = v2522;

	i8 v2526 = (i8)(intptr_t)(ws+3032);
	i8 v2527 = *(i8*)(intptr_t)v2526;
	i8 v2528 = (i8)(intptr_t)(ws+3056);
	i8 v2529 = *(i8*)(intptr_t)v2528;
	i8 v2530 = v2529+(+32);
	*(i8*)(intptr_t)v2530 = v2527;

	i8 v2531 = (i8)(intptr_t)(ws+3040);
	i8 v2532 = *(i8*)(intptr_t)v2531;
	i8 v2533 = (i8)(intptr_t)(ws+3056);
	i8 v2534 = *(i8*)(intptr_t)v2533;
	*(i8*)(intptr_t)v2534 = v2532;

	i8 v2535 = (i8)(intptr_t)(ws+3048);
	i1 v2536 = *(i1*)(intptr_t)v2535;
	i8 v2537 = (i8)(intptr_t)(ws+3056);
	i8 v2538 = *(i8*)(intptr_t)v2537;
	i8 v2539 = v2538+(+8);
	*(i1*)(intptr_t)v2539 = v2536;

endsub:;
	*p2507 = *(i8*)(intptr_t)(ws+3056);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3016 length ws+16
void f126_MidEndsub(i8* p2540 /* m */, i8 p2541 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p2541; /*subr */

	i1 v2542 = (i1)+5;
	i8 v2543 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2544;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2543)(&v2544, v2542);
	i8 v2545 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2545 = v2544;

	i8 v2546 = (i8)(intptr_t)(ws+3016);
	i8 v2547 = *(i8*)(intptr_t)v2546;
	i8 v2548 = (i8)(intptr_t)(ws+3024);
	i8 v2549 = *(i8*)(intptr_t)v2548;
	*(i8*)(intptr_t)v2549 = v2547;

endsub:;
	*p2540 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3088 length ws+8
void f127_MidAsmgroupstart(i8* p2550 /* m */) {

	i1 v2551 = (i1)+14;
	i8 v2552 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2553;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2552)(&v2553, v2551);
	i8 v2554 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v2554 = v2553;

endsub:;
	*p2550 = *(i8*)(intptr_t)(ws+3088);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+2888 length ws+8
void f131_MidStartfile(i8* p2619 /* m */) {

	i1 v2620 = (i1)+2;
	i8 v2621 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2622;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2621)(&v2622, v2620);
	i8 v2623 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v2623 = v2622;

endsub:;
	*p2619 = *(i8*)(intptr_t)(ws+2888);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3008 length ws+16
void f133_MidAsmtext(i8* p2646 /* m */, i8 p2647 /* text */) {
	*(i8*)(intptr_t)(ws+3008) = p2647; /*text */

	i1 v2648 = (i1)+17;
	i8 v2649 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2650;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2649)(&v2650, v2648);
	i8 v2651 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2651 = v2650;

	i8 v2652 = (i8)(intptr_t)(ws+3008);
	i8 v2653 = *(i8*)(intptr_t)v2652;
	i8 v2654 = (i8)(intptr_t)(ws+3016);
	i8 v2655 = *(i8*)(intptr_t)v2654;
	*(i8*)(intptr_t)v2655 = v2653;

endsub:;
	*p2646 = *(i8*)(intptr_t)(ws+3016);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3008 length ws+32
void f134_MidBand(i8* p2656 /* m */, i1 p2657 /* negated */, i2 p2658 /* fallthrough */, i2 p2659 /* falselabel */, i2 p2660 /* truelabel */, i8 p2661 /* right */, i8 p2662 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2662; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2661; /*right */
	*(i2*)(intptr_t)(ws+3024) = p2660; /*truelabel */
	*(i2*)(intptr_t)(ws+3026) = p2659; /*falselabel */
	*(i2*)(intptr_t)(ws+3028) = p2658; /*fallthrough */
	*(i1*)(intptr_t)(ws+3030) = p2657; /*negated */

	i1 v2663 = (i1)+55;
	i8 v2664 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2665;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2664)(&v2665, v2663);
	i8 v2666 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v2666 = v2665;

	i8 v2667 = (i8)(intptr_t)(ws+3008);
	i8 v2668 = *(i8*)(intptr_t)v2667;
	i8 v2669 = (i8)(intptr_t)(ws+3032);
	i8 v2670 = *(i8*)(intptr_t)v2669;
	i8 v2671 = v2670+(+24);
	*(i8*)(intptr_t)v2671 = v2668;

	i8 v2672 = (i8)(intptr_t)(ws+3016);
	i8 v2673 = *(i8*)(intptr_t)v2672;
	i8 v2674 = (i8)(intptr_t)(ws+3032);
	i8 v2675 = *(i8*)(intptr_t)v2674;
	i8 v2676 = v2675+(+32);
	*(i8*)(intptr_t)v2676 = v2673;

	i8 v2677 = (i8)(intptr_t)(ws+3024);
	i2 v2678 = *(i2*)(intptr_t)v2677;
	i8 v2679 = (i8)(intptr_t)(ws+3032);
	i8 v2680 = *(i8*)(intptr_t)v2679;
	*(i2*)(intptr_t)v2680 = v2678;

	i8 v2681 = (i8)(intptr_t)(ws+3026);
	i2 v2682 = *(i2*)(intptr_t)v2681;
	i8 v2683 = (i8)(intptr_t)(ws+3032);
	i8 v2684 = *(i8*)(intptr_t)v2683;
	i8 v2685 = v2684+(+2);
	*(i2*)(intptr_t)v2685 = v2682;

	i8 v2686 = (i8)(intptr_t)(ws+3028);
	i2 v2687 = *(i2*)(intptr_t)v2686;
	i8 v2688 = (i8)(intptr_t)(ws+3032);
	i8 v2689 = *(i8*)(intptr_t)v2688;
	i8 v2690 = v2689+(+4);
	*(i2*)(intptr_t)v2690 = v2687;

	i8 v2691 = (i8)(intptr_t)(ws+3030);
	i1 v2692 = *(i1*)(intptr_t)v2691;
	i8 v2693 = (i8)(intptr_t)(ws+3032);
	i8 v2694 = *(i8*)(intptr_t)v2693;
	i8 v2695 = v2694+(+6);
	*(i1*)(intptr_t)v2695 = v2692;

endsub:;
	*p2656 = *(i8*)(intptr_t)(ws+3032);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidFallback workspace at ws+3248 length ws+16
void f135_MidFallback(i8* p2696 /* m */, i8 p2697 /* left */) {
	*(i8*)(intptr_t)(ws+3248) = p2697; /*left */

	i1 v2698 = (i1)+21;
	i8 v2699 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2700;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2699)(&v2700, v2698);
	i8 v2701 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v2701 = v2700;

	i8 v2702 = (i8)(intptr_t)(ws+3248);
	i8 v2703 = *(i8*)(intptr_t)v2702;
	i8 v2704 = (i8)(intptr_t)(ws+3256);
	i8 v2705 = *(i8*)(intptr_t)v2704;
	i8 v2706 = v2705+(+24);
	*(i8*)(intptr_t)v2706 = v2703;

endsub:;
	*p2696 = *(i8*)(intptr_t)(ws+3256);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3008 length ws+16
void f136_MidString(i8* p2707 /* m */, i8 p2708 /* text */) {
	*(i8*)(intptr_t)(ws+3008) = p2708; /*text */

	i1 v2709 = (i1)+43;
	i8 v2710 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2711;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2710)(&v2711, v2709);
	i8 v2712 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v2712 = v2711;

	i8 v2713 = (i8)(intptr_t)(ws+3008);
	i8 v2714 = *(i8*)(intptr_t)v2713;
	i8 v2715 = (i8)(intptr_t)(ws+3016);
	i8 v2716 = *(i8*)(intptr_t)v2715;
	*(i8*)(intptr_t)v2716 = v2714;

endsub:;
	*p2707 = *(i8*)(intptr_t)(ws+3016);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLoad workspace at ws+3088 length ws+24
void f137_MidLoad(i8* p2717 /* m */, i8 p2718 /* left */, i1 p2719 /* width */) {
	*(i1*)(intptr_t)(ws+3088) = p2719; /*width */
	*(i8*)(intptr_t)(ws+3096) = p2718; /*left */

	i8 v2720 = (i8)(intptr_t)(ws+3088);
	i1 v2721 = *(i1*)(intptr_t)v2720;
	i8 v2722 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2723;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2722)(&v2723, v2721);
	i1 v2724 = v2723+(+45);
	i8 v2725 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2726;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2725)(&v2726, v2724);
	i8 v2727 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v2727 = v2726;

	i8 v2728 = (i8)(intptr_t)(ws+3096);
	i8 v2729 = *(i8*)(intptr_t)v2728;
	i8 v2730 = (i8)(intptr_t)(ws+3104);
	i8 v2731 = *(i8*)(intptr_t)v2730;
	i8 v2732 = v2731+(+24);
	*(i8*)(intptr_t)v2732 = v2729;

endsub:;
	*p2717 = *(i8*)(intptr_t)(ws+3104);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3072 length ws+16
void f138_MidLabel(i8* p2733 /* m */, i2 p2734 /* label */) {
	*(i2*)(intptr_t)(ws+3072) = p2734; /*label */

	i1 v2735 = (i1)+23;
	i8 v2736 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2737;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2736)(&v2737, v2735);
	i8 v2738 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v2738 = v2737;

	i8 v2739 = (i8)(intptr_t)(ws+3072);
	i2 v2740 = *(i2*)(intptr_t)v2739;
	i8 v2741 = (i8)(intptr_t)(ws+3080);
	i8 v2742 = *(i8*)(intptr_t)v2741;
	*(i2*)(intptr_t)v2742 = v2740;

endsub:;
	*p2733 = *(i8*)(intptr_t)(ws+3080);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+2888 length ws+8
void f139_MidEndfile(i8* p2743 /* m */) {

	i1 v2744 = (i1)+3;
	i8 v2745 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2746;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2745)(&v2746, v2744);
	i8 v2747 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v2747 = v2746;

endsub:;
	*p2743 = *(i8*)(intptr_t)(ws+2888);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3008 length ws+24
void f143_MidPair(i8* p2808 /* m */, i8 p2809 /* right */, i8 p2810 /* left */) {
	*(i8*)(intptr_t)(ws+3008) = p2810; /*left */
	*(i8*)(intptr_t)(ws+3016) = p2809; /*right */

	i1 v2811 = (i1)+22;
	i8 v2812 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2813;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2812)(&v2813, v2811);
	i8 v2814 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v2814 = v2813;

	i8 v2815 = (i8)(intptr_t)(ws+3008);
	i8 v2816 = *(i8*)(intptr_t)v2815;
	i8 v2817 = (i8)(intptr_t)(ws+3024);
	i8 v2818 = *(i8*)(intptr_t)v2817;
	i8 v2819 = v2818+(+24);
	*(i8*)(intptr_t)v2819 = v2816;

	i8 v2820 = (i8)(intptr_t)(ws+3016);
	i8 v2821 = *(i8*)(intptr_t)v2820;
	i8 v2822 = (i8)(intptr_t)(ws+3024);
	i8 v2823 = *(i8*)(intptr_t)v2822;
	i8 v2824 = v2823+(+32);
	*(i8*)(intptr_t)v2824 = v2821;

endsub:;
	*p2808 = *(i8*)(intptr_t)(ws+3024);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3104 length ws+16
void f144_MidConstant(i8* p2825 /* m */, i4 p2826 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p2826; /*value */

	i1 v2827 = (i1)+42;
	i8 v2828 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2829;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2828)(&v2829, v2827);
	i8 v2830 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v2830 = v2829;

	i8 v2831 = (i8)(intptr_t)(ws+3104);
	i4 v2832 = *(i4*)(intptr_t)v2831;
	i8 v2833 = (i8)(intptr_t)(ws+3112);
	i8 v2834 = *(i8*)(intptr_t)v2833;
	*(i4*)(intptr_t)v2834 = v2832;

endsub:;
	*p2825 = *(i8*)(intptr_t)(ws+3112);
}
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3088 length ws+8
void f145_MidAsmgroupend(i8* p2835 /* m */) {

	i1 v2836 = (i1)+15;
	i8 v2837 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v2838;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2837)(&v2838, v2836);
	i8 v2839 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v2839 = v2838;

endsub:;
	*p2835 = *(i8*)(intptr_t)(ws+3088);
}

// NodeWidth workspace at ws+3056 length ws+9
void f146_NodeWidth(i1* p2840 /* width */, i8 p2841 /* node */) {
	*(i8*)(intptr_t)(ws+3056) = p2841; /*node */

	i1 v2842 = (i1)+0;
	i8 v2843 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2843 = v2842;

	i8 v2844 = (i8)(intptr_t)(ws+3056);
	i8 v2845 = *(i8*)(intptr_t)v2844;
	i8 v2846 = v2845+(+16);
	i8 v2847 = *(i8*)(intptr_t)v2846;
	i8 v2848 = (i8)+0;
	if (v2847==v2848) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	i8 v2849 = (i8)(intptr_t)(ws+3056);
	i8 v2850 = *(i8*)(intptr_t)v2849;
	i8 v2851 = v2850+(+16);
	i8 v2852 = *(i8*)(intptr_t)v2851;
	i8 v2853 = v2852+(+42);
	i2 v2854 = *(i2*)(intptr_t)v2853;
	i1 v2855 = v2854;
	i8 v2856 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2856 = v2855;

	goto c02_01d2;

c02_01d6:;

c02_01d2:;

endsub:;
	*p2840 = *(i1*)(intptr_t)(ws+3064);
}
const i1 c02_s0041[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f61_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3144 length ws+0
void f147_midcodec_i_bad_fold(void) {

	i8 v2857 = (i8)(intptr_t)c02_s0041;
	i8 v2858 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v2858)(v2857);

endsub:;
}
	void f147_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3056 length ws+24
void f148_FoldConstant1(i4* p2859 /* result */, i8 p2860 /* lhsp */, i1 p2861 /* op */) {
	*(i1*)(intptr_t)(ws+3056) = p2861; /*op */
	*(i8*)(intptr_t)(ws+3064) = p2860; /*lhsp */

	i8 v2862 = (i8)(intptr_t)(ws+3064);
	i8 v2863 = *(i8*)(intptr_t)v2862;
	i4 v2864 = *(i4*)(intptr_t)v2863;
	i8 v2865 = (i8)(intptr_t)(ws+3076);
	*(i4*)(intptr_t)v2865 = v2864;

	i8 v2866 = (i8)(intptr_t)(ws+3056);
	i1 v2867 = *(i1*)(intptr_t)v2866;

	if (v2867 != +107) goto c02_01d8;

	i8 v2868 = (i8)(intptr_t)(ws+3076);
	i4 v2869 = *(i4*)(intptr_t)v2868;
	i4 v2870 = ~v2869;
	i8 v2871 = (i8)(intptr_t)(ws+3072);
	*(i4*)(intptr_t)v2871 = v2870;

	goto c02_01d7;

c02_01d8:;

	if (v2867 != +112) goto c02_01d9;

	i8 v2872 = (i8)(intptr_t)(ws+3076);
	i4 v2873 = *(i4*)(intptr_t)v2872;
	i4 v2874 = -v2873;
	i8 v2875 = (i8)(intptr_t)(ws+3072);
	*(i4*)(intptr_t)v2875 = v2874;

	goto c02_01d7;

c02_01d9:;

	i8 v2876 = (i8)(intptr_t)(f147_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v2876)();

c02_01d7:;


endsub:;
	*p2859 = *(i4*)(intptr_t)(ws+3072);
}
	void f147_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3104 length ws+36
void f149_FoldConstant2(i4* p2877 /* result */, i8 p2878 /* rhsp */, i8 p2879 /* lhsp */, i1 p2880 /* op */) {
	*(i1*)(intptr_t)(ws+3104) = p2880; /*op */
	*(i8*)(intptr_t)(ws+3112) = p2879; /*lhsp */
	*(i8*)(intptr_t)(ws+3120) = p2878; /*rhsp */

	i8 v2881 = (i8)(intptr_t)(ws+3112);
	i8 v2882 = *(i8*)(intptr_t)v2881;
	i4 v2883 = *(i4*)(intptr_t)v2882;
	i8 v2884 = (i8)(intptr_t)(ws+3132);
	*(i4*)(intptr_t)v2884 = v2883;

	i8 v2885 = (i8)(intptr_t)(ws+3120);
	i8 v2886 = *(i8*)(intptr_t)v2885;
	i4 v2887 = *(i4*)(intptr_t)v2886;
	i8 v2888 = (i8)(intptr_t)(ws+3136);
	*(i4*)(intptr_t)v2888 = v2887;

	i8 v2889 = (i8)(intptr_t)(ws+3104);
	i1 v2890 = *(i1*)(intptr_t)v2889;

	if (v2890 != +157) goto c02_01db;

	i8 v2891 = (i8)(intptr_t)(ws+3132);
	i4 v2892 = *(i4*)(intptr_t)v2891;
	i8 v2893 = (i8)(intptr_t)(ws+3136);
	i4 v2894 = *(i4*)(intptr_t)v2893;
	i4 v2895 = v2892+v2894;
	i8 v2896 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2896 = v2895;

	goto c02_01da;

c02_01db:;

	if (v2890 != +132) goto c02_01dc;

	i8 v2897 = (i8)(intptr_t)(ws+3132);
	i4 v2898 = *(i4*)(intptr_t)v2897;
	i8 v2899 = (i8)(intptr_t)(ws+3136);
	i4 v2900 = *(i4*)(intptr_t)v2899;
	i4 v2901 = v2898-v2900;
	i8 v2902 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2902 = v2901;

	goto c02_01da;

c02_01dc:;

	if (v2890 != +162) goto c02_01dd;

	i8 v2903 = (i8)(intptr_t)(ws+3132);
	i4 v2904 = *(i4*)(intptr_t)v2903;
	i8 v2905 = (i8)(intptr_t)(ws+3136);
	i4 v2906 = *(i4*)(intptr_t)v2905;
	i4 v2907 = v2904*v2906;
	i8 v2908 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2908 = v2907;

	goto c02_01da;

c02_01dd:;

	if (v2890 != +137) goto c02_01de;

	i8 v2909 = (i8)(intptr_t)(ws+3132);
	i4 v2910 = *(i4*)(intptr_t)v2909;
	i8 v2911 = (i8)(intptr_t)(ws+3136);
	i4 v2912 = *(i4*)(intptr_t)v2911;
	i4 v2913 = v2910/v2912;
	i8 v2914 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2914 = v2913;

	goto c02_01da;

c02_01de:;

	if (v2890 != +142) goto c02_01df;

	i8 v2915 = (i8)(intptr_t)(ws+3132);
	i4 v2916 = *(i4*)(intptr_t)v2915;
	i8 v2917 = (i8)(intptr_t)(ws+3136);
	i4 v2918 = *(i4*)(intptr_t)v2917;
	i4 v2919 = (s4)v2916/(s4)v2918;
	i8 v2920 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2920 = v2919;

	goto c02_01da;

c02_01df:;

	if (v2890 != +147) goto c02_01e0;

	i8 v2921 = (i8)(intptr_t)(ws+3132);
	i4 v2922 = *(i4*)(intptr_t)v2921;
	i8 v2923 = (i8)(intptr_t)(ws+3136);
	i4 v2924 = *(i4*)(intptr_t)v2923;
	i4 v2925 = v2922%v2924;
	i8 v2926 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2926 = v2925;

	goto c02_01da;

c02_01e0:;

	if (v2890 != +152) goto c02_01e1;

	i8 v2927 = (i8)(intptr_t)(ws+3132);
	i4 v2928 = *(i4*)(intptr_t)v2927;
	i8 v2929 = (i8)(intptr_t)(ws+3136);
	i4 v2930 = *(i4*)(intptr_t)v2929;
	i4 v2931 = (s4)v2928%(s4)v2930;
	i8 v2932 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2932 = v2931;

	goto c02_01da;

c02_01e1:;

	if (v2890 != +167) goto c02_01e2;

	i8 v2933 = (i8)(intptr_t)(ws+3132);
	i4 v2934 = *(i4*)(intptr_t)v2933;
	i8 v2935 = (i8)(intptr_t)(ws+3136);
	i4 v2936 = *(i4*)(intptr_t)v2935;
	i4 v2937 = v2934&v2936;
	i8 v2938 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2938 = v2937;

	goto c02_01da;

c02_01e2:;

	if (v2890 != +172) goto c02_01e3;

	i8 v2939 = (i8)(intptr_t)(ws+3132);
	i4 v2940 = *(i4*)(intptr_t)v2939;
	i8 v2941 = (i8)(intptr_t)(ws+3136);
	i4 v2942 = *(i4*)(intptr_t)v2941;
	i4 v2943 = v2940|v2942;
	i8 v2944 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2944 = v2943;

	goto c02_01da;

c02_01e3:;

	if (v2890 != +177) goto c02_01e4;

	i8 v2945 = (i8)(intptr_t)(ws+3132);
	i4 v2946 = *(i4*)(intptr_t)v2945;
	i8 v2947 = (i8)(intptr_t)(ws+3136);
	i4 v2948 = *(i4*)(intptr_t)v2947;
	i4 v2949 = v2946^v2948;
	i8 v2950 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2950 = v2949;

	goto c02_01da;

c02_01e4:;

	if (v2890 != +117) goto c02_01e5;

	i8 v2951 = (i8)(intptr_t)(ws+3132);
	i4 v2952 = *(i4*)(intptr_t)v2951;
	i8 v2953 = (i8)(intptr_t)(ws+3136);
	i4 v2954 = *(i4*)(intptr_t)v2953;
	i1 v2955 = (s1)(s4)v2954;
	i4 v2956 = ((i4)v2952)<<v2955;
	i8 v2957 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2957 = v2956;

	goto c02_01da;

c02_01e5:;

	if (v2890 != +122) goto c02_01e6;

	i8 v2958 = (i8)(intptr_t)(ws+3132);
	i4 v2959 = *(i4*)(intptr_t)v2958;
	i8 v2960 = (i8)(intptr_t)(ws+3136);
	i4 v2961 = *(i4*)(intptr_t)v2960;
	i1 v2962 = (s1)(s4)v2961;
	i4 v2963 = ((i4)v2959)>>v2962;
	i8 v2964 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2964 = v2963;

	goto c02_01da;

c02_01e6:;

	if (v2890 != +127) goto c02_01e7;

	i8 v2965 = (i8)(intptr_t)(ws+3132);
	i4 v2966 = *(i4*)(intptr_t)v2965;
	i8 v2967 = (i8)(intptr_t)(ws+3136);
	i4 v2968 = *(i4*)(intptr_t)v2967;
	i1 v2969 = (s1)(s4)v2968;
	i4 v2970 = ((s4)v2966)>>v2969;
	i8 v2971 = (i8)(intptr_t)(ws+3128);
	*(i4*)(intptr_t)v2971 = v2970;

	goto c02_01da;

c02_01e7:;

	i8 v2972 = (i8)(intptr_t)(f147_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v2972)();

c02_01da:;


endsub:;
	*p2877 = *(i4*)(intptr_t)(ws+3128);
}
	void f148_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3032 length ws+24
void f150_MidC1Op(i8* p2973 /* result */, i8 p2974 /* lhs */, i1 p2975 /* width */, i1 p2976 /* op */) {
	*(i1*)(intptr_t)(ws+3032) = p2976; /*op */
	*(i1*)(intptr_t)(ws+3033) = p2975; /*width */
	*(i8*)(intptr_t)(ws+3040) = p2974; /*lhs */

	i8 v2977 = (i8)(intptr_t)(ws+3040);
	i8 v2978 = *(i8*)(intptr_t)v2977;
	i8 v2979 = v2978+(+58);
	i1 v2980 = *(i1*)(intptr_t)v2979;
	i1 v2981 = (i1)+42;
	if (v2980==v2981) goto c02_01eb; else goto c02_01ec;

c02_01eb:;

	i8 v2982 = (i8)(intptr_t)(ws+3032);
	i1 v2983 = *(i1*)(intptr_t)v2982;
	i8 v2984 = (i8)(intptr_t)(ws+3040);
	i8 v2985 = *(i8*)(intptr_t)v2984;
	i8 v2986 = (i8)(intptr_t)(f148_FoldConstant1);
	i4 v2987;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v2986)(&v2987, v2985, v2983);
	i8 v2988 = (i8)(intptr_t)(ws+3040);
	i8 v2989 = *(i8*)(intptr_t)v2988;
	*(i4*)(intptr_t)v2989 = v2987;

	i8 v2990 = (i8)(intptr_t)(ws+3040);
	i8 v2991 = *(i8*)(intptr_t)v2990;
	i8 v2992 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v2992 = v2991;

	goto c02_01e8;

c02_01ec:;

	i8 v2993 = (i8)(intptr_t)(ws+3032);
	i1 v2994 = *(i1*)(intptr_t)v2993;
	i8 v2995 = (i8)(intptr_t)(ws+3033);
	i1 v2996 = *(i1*)(intptr_t)v2995;
	i8 v2997 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v2998;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2997)(&v2998, v2996);
	i1 v2999 = v2994+v2998;
	i8 v3000 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v3001;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3000)(&v3001, v2999);
	i8 v3002 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v3002 = v3001;

	i8 v3003 = (i8)(intptr_t)(ws+3040);
	i8 v3004 = *(i8*)(intptr_t)v3003;
	i8 v3005 = (i8)(intptr_t)(ws+3048);
	i8 v3006 = *(i8*)(intptr_t)v3005;
	i8 v3007 = v3006+(+24);
	*(i8*)(intptr_t)v3007 = v3004;

c02_01e8:;

endsub:;
	*p2973 = *(i8*)(intptr_t)(ws+3048);
}

// GetPowerOfTwo workspace at ws+3104 length ws+5
void f151_GetPowerOfTwo(i1* p3008 /* exp */, i4 p3009 /* value */) {
	*(i4*)(intptr_t)(ws+3104) = p3009; /*value */

	i1 v3010 = (i1)+0;
	i8 v3011 = (i8)(intptr_t)(ws+3108);
	*(i1*)(intptr_t)v3011 = v3010;

	i4 v3012 = (i4)+0;
	i8 v3013 = (i8)(intptr_t)(ws+3104);
	i4 v3014 = *(i4*)(intptr_t)v3013;
	if ((s4)v3012<(s4)v3014) goto c02_01f4; else goto c02_01f3;

c02_01f4:;

	i8 v3015 = (i8)(intptr_t)(ws+3104);
	i4 v3016 = *(i4*)(intptr_t)v3015;
	i8 v3017 = (i8)(intptr_t)(ws+3104);
	i4 v3018 = *(i4*)(intptr_t)v3017;
	i4 v3019 = v3018+(-1);
	i4 v3020 = v3016&v3019;
	i4 v3021 = (i4)+0;
	if (v3020==v3021) goto c02_01f2; else goto c02_01f3;

c02_01f2:;

c02_01f7:;

	i8 v3022 = (i8)(intptr_t)(ws+3104);
	i4 v3023 = *(i4*)(intptr_t)v3022;
	i4 v3024 = (i4)+0;
	if (v3023==v3024) goto c02_01fa; else goto c02_01f9;

c02_01f9:;

	i8 v3025 = (i8)(intptr_t)(ws+3108);
	i1 v3026 = *(i1*)(intptr_t)v3025;
	i1 v3027 = v3026+(+1);
	i8 v3028 = (i8)(intptr_t)(ws+3108);
	*(i1*)(intptr_t)v3028 = v3027;

	i8 v3029 = (i8)(intptr_t)(ws+3104);
	i4 v3030 = *(i4*)(intptr_t)v3029;
	i1 v3031 = (i1)+1;
	i4 v3032 = ((s4)v3030)>>v3031;
	i8 v3033 = (i8)(intptr_t)(ws+3104);
	*(i4*)(intptr_t)v3033 = v3032;

	goto c02_01f7;

c02_01fa:;

	goto c02_01ed;

c02_01f3:;

c02_01ed:;

endsub:;
	*p3008 = *(i1*)(intptr_t)(ws+3108);
}
	void f149_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f151_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f56_Discard(i8 /* node */);
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f56_Discard(i8 /* node */);
	void f149_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f56_Discard(i8 /* node */);
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3056 length ws+48
void f152_MidC2Op(i8* p3034 /* result */, i8 p3035 /* rhs */, i8 p3036 /* lhs */, i1 p3037 /* width */, i1 p3038 /* op */) {
	*(i1*)(intptr_t)(ws+3056) = p3038; /*op */
	*(i1*)(intptr_t)(ws+3057) = p3037; /*width */
	*(i8*)(intptr_t)(ws+3064) = p3036; /*lhs */
	*(i8*)(intptr_t)(ws+3072) = p3035; /*rhs */

	i8 v3039 = (i8)(intptr_t)(ws+3056);
	i1 v3040 = *(i1*)(intptr_t)v3039;
	i1 v3041 = (i1)+132;
	if (v3040==v3041) goto c02_0202; else goto c02_0201;

c02_0202:;

	i8 v3042 = (i8)(intptr_t)(ws+3072);
	i8 v3043 = *(i8*)(intptr_t)v3042;
	i8 v3044 = v3043+(+58);
	i1 v3045 = *(i1*)(intptr_t)v3044;
	i1 v3046 = (i1)+42;
	if (v3045==v3046) goto c02_0200; else goto c02_0201;

c02_0200:;

	i8 v3047 = (i8)(intptr_t)(ws+3072);
	i8 v3048 = *(i8*)(intptr_t)v3047;
	i4 v3049 = *(i4*)(intptr_t)v3048;
	i4 v3050 = -v3049;
	i8 v3051 = (i8)(intptr_t)(ws+3072);
	i8 v3052 = *(i8*)(intptr_t)v3051;
	*(i4*)(intptr_t)v3052 = v3050;

	i1 v3053 = (i1)+157;
	i8 v3054 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3054 = v3053;

	goto c02_01fb;

c02_0201:;

c02_01fb:;

	i8 v3055 = (i8)(intptr_t)(ws+3056);
	i1 v3056 = *(i1*)(intptr_t)v3055;
	i1 v3057 = (i1)+157;
	if (v3056<v3057) goto c02_0207; else goto c02_0206;

c02_0206:;

	i8 v3058 = (i8)(intptr_t)(ws+3064);
	i8 v3059 = *(i8*)(intptr_t)v3058;
	i8 v3060 = v3059+(+58);
	i1 v3061 = *(i1*)(intptr_t)v3060;
	i1 v3062 = (i1)+42;
	if (v3061==v3062) goto c02_020b; else goto c02_020c;

c02_020b:;

	i8 v3063 = (i8)(intptr_t)(ws+3064);
	i8 v3064 = *(i8*)(intptr_t)v3063;
	i8 v3065 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3065 = v3064;

	i8 v3066 = (i8)(intptr_t)(ws+3072);
	i8 v3067 = *(i8*)(intptr_t)v3066;
	i8 v3068 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v3068 = v3067;

	i8 v3069 = (i8)(intptr_t)(ws+3088);
	i8 v3070 = *(i8*)(intptr_t)v3069;
	i8 v3071 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3071 = v3070;

	goto c02_0208;

c02_020c:;

c02_0208:;

	i8 v3072 = (i8)(intptr_t)(ws+3072);
	i8 v3073 = *(i8*)(intptr_t)v3072;
	i8 v3074 = v3073+(+58);
	i1 v3075 = *(i1*)(intptr_t)v3074;
	i1 v3076 = (i1)+42;
	if (v3075==v3076) goto c02_021a; else goto c02_0217;

c02_021a:;

	i8 v3077 = (i8)(intptr_t)(ws+3064);
	i8 v3078 = *(i8*)(intptr_t)v3077;
	i8 v3079 = v3078+(+58);
	i1 v3080 = *(i1*)(intptr_t)v3079;
	i8 v3081 = (i8)(intptr_t)(ws+3056);
	i1 v3082 = *(i1*)(intptr_t)v3081;
	if (v3080<v3082) goto c02_0217; else goto c02_0219;

c02_0219:;

	i8 v3083 = (i8)(intptr_t)(ws+3056);
	i1 v3084 = *(i1*)(intptr_t)v3083;
	i1 v3085 = v3084+(+4);
	i8 v3086 = (i8)(intptr_t)(ws+3064);
	i8 v3087 = *(i8*)(intptr_t)v3086;
	i8 v3088 = v3087+(+58);
	i1 v3089 = *(i1*)(intptr_t)v3088;
	if (v3085<v3089) goto c02_0217; else goto c02_0218;

c02_0218:;

	i8 v3090 = (i8)(intptr_t)(ws+3064);
	i8 v3091 = *(i8*)(intptr_t)v3090;
	i8 v3092 = v3091+(+32);
	i8 v3093 = *(i8*)(intptr_t)v3092;
	i8 v3094 = v3093+(+58);
	i1 v3095 = *(i1*)(intptr_t)v3094;
	i1 v3096 = (i1)+42;
	if (v3095==v3096) goto c02_0216; else goto c02_0217;

c02_0216:;

	i8 v3097 = (i8)(intptr_t)(ws+3056);
	i1 v3098 = *(i1*)(intptr_t)v3097;
	i8 v3099 = (i8)(intptr_t)(ws+3064);
	i8 v3100 = *(i8*)(intptr_t)v3099;
	i8 v3101 = v3100+(+32);
	i8 v3102 = *(i8*)(intptr_t)v3101;
	i8 v3103 = (i8)(intptr_t)(ws+3072);
	i8 v3104 = *(i8*)(intptr_t)v3103;
	i8 v3105 = (i8)(intptr_t)(f149_FoldConstant2);
	i4 v3106;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3105)(&v3106, v3104, v3102, v3098);
	i8 v3107 = (i8)(intptr_t)(f144_MidConstant);
	i8 v3108;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3107)(&v3108, v3106);
	i8 v3109 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3109 = v3108;

	i8 v3110 = (i8)(intptr_t)(ws+3072);
	i8 v3111 = *(i8*)(intptr_t)v3110;
	i8 v3112 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3112)(v3111);

	i8 v3113 = (i8)(intptr_t)(ws+3088);
	i8 v3114 = *(i8*)(intptr_t)v3113;
	i8 v3115 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3115 = v3114;

	i8 v3116 = (i8)(intptr_t)(ws+3064);
	i8 v3117 = *(i8*)(intptr_t)v3116;
	i8 v3118 = v3117+(+24);
	i8 v3119 = *(i8*)(intptr_t)v3118;
	i8 v3120 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v3120 = v3119;

	i8 v3121 = (i8)+0;
	i8 v3122 = (i8)(intptr_t)(ws+3064);
	i8 v3123 = *(i8*)(intptr_t)v3122;
	i8 v3124 = v3123+(+24);
	*(i8*)(intptr_t)v3124 = v3121;

	i8 v3125 = (i8)(intptr_t)(ws+3064);
	i8 v3126 = *(i8*)(intptr_t)v3125;
	i8 v3127 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3127)(v3126);

	i8 v3128 = (i8)(intptr_t)(ws+3088);
	i8 v3129 = *(i8*)(intptr_t)v3128;
	i8 v3130 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v3130 = v3129;

	goto c02_020d;

c02_0217:;

c02_020d:;

	goto c02_0203;

c02_0207:;

c02_0203:;

	i8 v3131 = (i8)(intptr_t)(ws+3064);
	i8 v3132 = *(i8*)(intptr_t)v3131;
	i8 v3133 = v3132+(+58);
	i1 v3134 = *(i1*)(intptr_t)v3133;
	i1 v3135 = (i1)+42;
	if (v3134==v3135) goto c02_0221; else goto c02_0222;

c02_0222:;

	i8 v3136 = (i8)(intptr_t)(ws+3072);
	i8 v3137 = *(i8*)(intptr_t)v3136;
	i8 v3138 = v3137+(+58);
	i1 v3139 = *(i1*)(intptr_t)v3138;
	i1 v3140 = (i1)+42;
	if (v3139==v3140) goto c02_0220; else goto c02_0221;

c02_0220:;

	i8 v3141 = (i8)(intptr_t)(ws+3056);
	i1 v3142 = *(i1*)(intptr_t)v3141;
	i1 v3143 = (i1)+162;
	if (v3142==v3143) goto c02_022a; else goto c02_022d;

c02_022d:;

	i8 v3144 = (i8)(intptr_t)(ws+3056);
	i1 v3145 = *(i1*)(intptr_t)v3144;
	i1 v3146 = (i1)+142;
	if (v3145==v3146) goto c02_022a; else goto c02_022c;

c02_022c:;

	i8 v3147 = (i8)(intptr_t)(ws+3056);
	i1 v3148 = *(i1*)(intptr_t)v3147;
	i1 v3149 = (i1)+137;
	if (v3148==v3149) goto c02_022a; else goto c02_022b;

c02_022a:;

	i8 v3150 = (i8)(intptr_t)(ws+3072);
	i8 v3151 = *(i8*)(intptr_t)v3150;
	i4 v3152 = *(i4*)(intptr_t)v3151;
	i8 v3153 = (i8)(intptr_t)(ws+3096);
	*(i4*)(intptr_t)v3153 = v3152;

	i8 v3154 = (i8)(intptr_t)(ws+3096);
	i4 v3155 = *(i4*)(intptr_t)v3154;
	i8 v3156 = (i8)(intptr_t)(f151_GetPowerOfTwo);
	i1 v3157;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v3156)(&v3157, v3155);
	i8 v3158 = (i8)(intptr_t)(ws+3100);
	*(i1*)(intptr_t)v3158 = v3157;

	i8 v3159 = (i8)(intptr_t)(ws+3100);
	i1 v3160 = *(i1*)(intptr_t)v3159;
	i1 v3161 = (i1)+0;
	if (v3160==v3161) goto c02_0232; else goto c02_0231;

c02_0231:;

	i8 v3162 = (i8)(intptr_t)(ws+3072);
	i8 v3163 = *(i8*)(intptr_t)v3162;
	i8 v3164 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3164)(v3163);

	i8 v3165 = (i8)(intptr_t)(ws+3100);
	i1 v3166 = *(i1*)(intptr_t)v3165;
	i1 v3167 = v3166+(-1);
	i4 v3168 = v3167;
	i8 v3169 = (i8)(intptr_t)(f144_MidConstant);
	i8 v3170;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3169)(&v3170, v3168);
	i8 v3171 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v3171 = v3170;

	i8 v3172 = (i8)(intptr_t)(ws+3056);
	i1 v3173 = *(i1*)(intptr_t)v3172;

	if (v3173 != +162) goto c02_0234;

	i1 v3174 = (i1)+117;
	i8 v3175 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3175 = v3174;

	goto c02_0233;

c02_0234:;

	if (v3173 != +142) goto c02_0235;

	i1 v3176 = (i1)+127;
	i8 v3177 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3177 = v3176;

	goto c02_0233;

c02_0235:;

	if (v3173 != +137) goto c02_0236;

	i1 v3178 = (i1)+122;
	i8 v3179 = (i8)(intptr_t)(ws+3056);
	*(i1*)(intptr_t)v3179 = v3178;

c02_0236:;

c02_0233:;


	goto c02_022e;

c02_0232:;

c02_022e:;

	goto c02_0223;

c02_022b:;

c02_0223:;

	i8 v3180 = (i8)(intptr_t)(ws+3056);
	i1 v3181 = *(i1*)(intptr_t)v3180;
	i1 v3182 = (i1)+117;
	if (v3181==v3182) goto c02_023e; else goto c02_0241;

c02_0241:;

	i8 v3183 = (i8)(intptr_t)(ws+3056);
	i1 v3184 = *(i1*)(intptr_t)v3183;
	i1 v3185 = (i1)+122;
	if (v3184==v3185) goto c02_023e; else goto c02_0240;

c02_0240:;

	i8 v3186 = (i8)(intptr_t)(ws+3056);
	i1 v3187 = *(i1*)(intptr_t)v3186;
	i1 v3188 = (i1)+127;
	if (v3187==v3188) goto c02_023e; else goto c02_023f;

c02_023e:;

	i8 v3189 = (i8)(intptr_t)(ws+3072);
	i8 v3190 = *(i8*)(intptr_t)v3189;
	i4 v3191 = *(i4*)(intptr_t)v3190;
	i4 v3192 = (i4)+0;
	if (v3191==v3192) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v3193 = (i8)(intptr_t)(ws+3072);
	i8 v3194 = *(i8*)(intptr_t)v3193;
	i8 v3195 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3195)(v3194);

	i8 v3196 = (i8)(intptr_t)(ws+3064);
	i8 v3197 = *(i8*)(intptr_t)v3196;
	i8 v3198 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3198 = v3197;

	goto endsub;

c02_0246:;

c02_0242:;

	goto c02_0237;

c02_023f:;

c02_0237:;

	i8 v3199 = (i8)(intptr_t)(ws+3056);
	i1 v3200 = *(i1*)(intptr_t)v3199;
	i1 v3201 = (i1)+157;
	if (v3200==v3201) goto c02_024c; else goto c02_024e;

c02_024e:;

	i8 v3202 = (i8)(intptr_t)(ws+3056);
	i1 v3203 = *(i1*)(intptr_t)v3202;
	i1 v3204 = (i1)+132;
	if (v3203==v3204) goto c02_024c; else goto c02_024d;

c02_024c:;

	i8 v3205 = (i8)(intptr_t)(ws+3072);
	i8 v3206 = *(i8*)(intptr_t)v3205;
	i4 v3207 = *(i4*)(intptr_t)v3206;
	i4 v3208 = (i4)+0;
	if (v3207==v3208) goto c02_0252; else goto c02_0253;

c02_0252:;

	i8 v3209 = (i8)(intptr_t)(ws+3072);
	i8 v3210 = *(i8*)(intptr_t)v3209;
	i8 v3211 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3211)(v3210);

	i8 v3212 = (i8)(intptr_t)(ws+3064);
	i8 v3213 = *(i8*)(intptr_t)v3212;
	i8 v3214 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3214 = v3213;

	goto endsub;

c02_0253:;

c02_024f:;

	i8 v3215 = (i8)(intptr_t)(ws+3064);
	i8 v3216 = *(i8*)(intptr_t)v3215;
	i8 v3217 = v3216+(+58);
	i1 v3218 = *(i1*)(intptr_t)v3217;
	i1 v3219 = (i1)+44;
	if (v3218==v3219) goto c02_0257; else goto c02_0258;

c02_0257:;

	i8 v3220 = (i8)(intptr_t)(ws+3072);
	i8 v3221 = *(i8*)(intptr_t)v3220;
	i4 v3222 = *(i4*)(intptr_t)v3221;
	i2 v3223 = (s2)(s4)v3222;
	i8 v3224 = (i8)(intptr_t)(ws+3102);
	*(i2*)(intptr_t)v3224 = v3223;

	i8 v3225 = (i8)(intptr_t)(ws+3056);
	i1 v3226 = *(i1*)(intptr_t)v3225;

	if (v3226 != +157) goto c02_025a;

	i8 v3227 = (i8)(intptr_t)(ws+3064);
	i8 v3228 = *(i8*)(intptr_t)v3227;
	i8 v3229 = v3228+(+8);
	i2 v3230 = *(i2*)(intptr_t)v3229;
	i8 v3231 = (i8)(intptr_t)(ws+3102);
	i2 v3232 = *(i2*)(intptr_t)v3231;
	i2 v3233 = v3230+v3232;
	i8 v3234 = (i8)(intptr_t)(ws+3064);
	i8 v3235 = *(i8*)(intptr_t)v3234;
	i8 v3236 = v3235+(+8);
	*(i2*)(intptr_t)v3236 = v3233;

	i8 v3237 = (i8)(intptr_t)(ws+3072);
	i8 v3238 = *(i8*)(intptr_t)v3237;
	i8 v3239 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3239)(v3238);

	i8 v3240 = (i8)(intptr_t)(ws+3064);
	i8 v3241 = *(i8*)(intptr_t)v3240;
	i8 v3242 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3242 = v3241;

	goto endsub;

c02_025a:;

	if (v3226 != +132) goto c02_025b;

	i8 v3243 = (i8)(intptr_t)(ws+3064);
	i8 v3244 = *(i8*)(intptr_t)v3243;
	i8 v3245 = v3244+(+8);
	i2 v3246 = *(i2*)(intptr_t)v3245;
	i8 v3247 = (i8)(intptr_t)(ws+3102);
	i2 v3248 = *(i2*)(intptr_t)v3247;
	i2 v3249 = v3246-v3248;
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

	i8 v3259 = (i8)(intptr_t)(ws+3064);
	i8 v3260 = *(i8*)(intptr_t)v3259;
	i8 v3261 = v3260+(+58);
	i1 v3262 = *(i1*)(intptr_t)v3261;
	i1 v3263 = (i1)+42;
	if (v3262==v3263) goto c02_0263; else goto c02_0262;

c02_0263:;

	i8 v3264 = (i8)(intptr_t)(ws+3072);
	i8 v3265 = *(i8*)(intptr_t)v3264;
	i8 v3266 = v3265+(+58);
	i1 v3267 = *(i1*)(intptr_t)v3266;
	i1 v3268 = (i1)+42;
	if (v3267==v3268) goto c02_0261; else goto c02_0262;

c02_0261:;

	i8 v3269 = (i8)(intptr_t)(ws+3056);
	i1 v3270 = *(i1*)(intptr_t)v3269;
	i8 v3271 = (i8)(intptr_t)(ws+3064);
	i8 v3272 = *(i8*)(intptr_t)v3271;
	i8 v3273 = (i8)(intptr_t)(ws+3072);
	i8 v3274 = *(i8*)(intptr_t)v3273;
	i8 v3275 = (i8)(intptr_t)(f149_FoldConstant2);
	i4 v3276;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3275)(&v3276, v3274, v3272, v3270);
	i8 v3277 = (i8)(intptr_t)(ws+3064);
	i8 v3278 = *(i8*)(intptr_t)v3277;
	*(i4*)(intptr_t)v3278 = v3276;

	i8 v3279 = (i8)(intptr_t)(ws+3072);
	i8 v3280 = *(i8*)(intptr_t)v3279;
	i8 v3281 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3281)(v3280);

	i8 v3282 = (i8)(intptr_t)(ws+3064);
	i8 v3283 = *(i8*)(intptr_t)v3282;
	i8 v3284 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3284 = v3283;

	goto endsub;

c02_0262:;

c02_025c:;

	i8 v3285 = (i8)(intptr_t)(ws+3056);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i8 v3287 = (i8)(intptr_t)(ws+3057);
	i1 v3288 = *(i1*)(intptr_t)v3287;
	i8 v3289 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v3290;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3289)(&v3290, v3288);
	i1 v3291 = v3286+v3290;
	i8 v3292 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v3293;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3292)(&v3293, v3291);
	i8 v3294 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3294 = v3293;

	i8 v3295 = (i8)(intptr_t)(ws+3064);
	i8 v3296 = *(i8*)(intptr_t)v3295;
	i8 v3297 = (i8)(intptr_t)(ws+3080);
	i8 v3298 = *(i8*)(intptr_t)v3297;
	i8 v3299 = v3298+(+24);
	*(i8*)(intptr_t)v3299 = v3296;

	i8 v3300 = (i8)(intptr_t)(ws+3072);
	i8 v3301 = *(i8*)(intptr_t)v3300;
	i8 v3302 = (i8)(intptr_t)(ws+3080);
	i8 v3303 = *(i8*)(intptr_t)v3302;
	i8 v3304 = v3303+(+32);
	*(i8*)(intptr_t)v3304 = v3301;

endsub:;
	*p3034 = *(i8*)(intptr_t)(ws+3080);
}
	void f87_WidthToIndex(i1* /* index */, i1 /* width */);
	void f88_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3056 length ws+34
void f153_MidCCast(i8* p3305 /* result */, i1 p3306 /* issigned */, i8 p3307 /* lhs */, i1 p3308 /* width */) {
	*(i1*)(intptr_t)(ws+3056) = p3308; /*width */
	*(i8*)(intptr_t)(ws+3064) = p3307; /*lhs */
	*(i1*)(intptr_t)(ws+3072) = p3306; /*issigned */

	i8 v3309 = (i8)(intptr_t)(ws+3064);
	i8 v3310 = *(i8*)(intptr_t)v3309;
	i8 v3311 = v3310+(+58);
	i1 v3312 = *(i1*)(intptr_t)v3311;
	i1 v3313 = (i1)+42;
	if (v3312==v3313) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v3314 = (i8)(intptr_t)(ws+3064);
	i8 v3315 = *(i8*)(intptr_t)v3314;
	i8 v3316 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3316 = v3315;

	goto endsub;

c02_0268:;

c02_0264:;

	i8 v3317 = (i8)(intptr_t)(ws+3064);
	i8 v3318 = *(i8*)(intptr_t)v3317;
	i8 v3319 = v3318+(+16);
	i8 v3320 = *(i8*)(intptr_t)v3319;
	i8 v3321 = v3320+(+42);
	i2 v3322 = *(i2*)(intptr_t)v3321;
	i1 v3323 = v3322;
	i8 v3324 = (i8)(intptr_t)(ws+3088);
	*(i1*)(intptr_t)v3324 = v3323;

	i8 v3325 = (i8)(intptr_t)(ws+3088);
	i1 v3326 = *(i1*)(intptr_t)v3325;
	i8 v3327 = (i8)(intptr_t)(ws+3056);
	i1 v3328 = *(i1*)(intptr_t)v3327;
	if (v3326==v3328) goto c02_026c; else goto c02_026d;

c02_026c:;

	i8 v3329 = (i8)(intptr_t)(ws+3064);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i8 v3331 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3331 = v3330;

	goto c02_0269;

c02_026d:;

	i8 v3332 = (i8)(intptr_t)(ws+3088);
	i1 v3333 = *(i1*)(intptr_t)v3332;

	if (v3333 != +1) goto c02_026f;

	i1 v3334 = (i1)+87;
	i8 v3335 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3335 = v3334;

	goto c02_026e;

c02_026f:;

	if (v3333 != +2) goto c02_0270;

	i1 v3336 = (i1)+92;
	i8 v3337 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3337 = v3336;

	goto c02_026e;

c02_0270:;

	if (v3333 != +4) goto c02_0271;

	i1 v3338 = (i1)+97;
	i8 v3339 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3339 = v3338;

	goto c02_026e;

c02_0271:;

	if (v3333 != +8) goto c02_0272;

	i1 v3340 = (i1)+102;
	i8 v3341 = (i8)(intptr_t)(ws+3089);
	*(i1*)(intptr_t)v3341 = v3340;

c02_0272:;

c02_026e:;


	i8 v3342 = (i8)(intptr_t)(ws+3089);
	i1 v3343 = *(i1*)(intptr_t)v3342;
	i8 v3344 = (i8)(intptr_t)(ws+3056);
	i1 v3345 = *(i1*)(intptr_t)v3344;
	i8 v3346 = (i8)(intptr_t)(f87_WidthToIndex);
	i1 v3347;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3346)(&v3347, v3345);
	i1 v3348 = v3343+v3347;
	i8 v3349 = (i8)(intptr_t)(f88_AllocateNewNode);
	i8 v3350;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3349)(&v3350, v3348);
	i8 v3351 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v3351 = v3350;

	i8 v3352 = (i8)(intptr_t)(ws+3064);
	i8 v3353 = *(i8*)(intptr_t)v3352;
	i8 v3354 = (i8)(intptr_t)(ws+3080);
	i8 v3355 = *(i8*)(intptr_t)v3354;
	i8 v3356 = v3355+(+24);
	*(i8*)(intptr_t)v3356 = v3353;

	i8 v3357 = (i8)(intptr_t)(ws+3072);
	i1 v3358 = *(i1*)(intptr_t)v3357;
	i8 v3359 = (i8)(intptr_t)(ws+3080);
	i8 v3360 = *(i8*)(intptr_t)v3359;
	*(i1*)(intptr_t)v3360 = v3358;

c02_0269:;

endsub:;
	*p3305 = *(i8*)(intptr_t)(ws+3080);
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// E_b8 workspace at ws+3368 length ws+16
void f154_E_b8(i1 p3361 /* byte */) {
	*(i1*)(intptr_t)(ws+3368) = p3361; /*byte */

	i8 v3362 = (i8)(intptr_t)(ws+904);
	i8 v3363 = *(i8*)(intptr_t)v3362;
	i8 v3364 = (i8)+0;
	if (v3363==v3364) goto c02_0277; else goto c02_0276;

c02_0276:;

	i8 v3365 = (i8)(intptr_t)(ws+904);
	i8 v3366 = *(i8*)(intptr_t)v3365;
	i8 v3367 = v3366+(+16);
	i8 v3368 = *(i8*)(intptr_t)v3367;
	i8 v3369 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3369 = v3368;

	i8 v3370 = (i8)(intptr_t)(ws+3376);
	i8 v3371 = *(i8*)(intptr_t)v3370;
	i8 v3372 = v3371+(+128);
	i1 v3373 = *(i1*)(intptr_t)v3372;
	i1 v3374 = (i1)+128;
	if (v3373==v3374) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v3375 = (i8)+144;
	i8 v3376 = (i8)(intptr_t)(f31_Alloc);
	i8 v3377;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3376)(&v3377, v3375);
	i8 v3378 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v3378 = v3377;

	i8 v3379 = (i8)(intptr_t)(ws+3376);
	i8 v3380 = *(i8*)(intptr_t)v3379;
	i8 v3381 = (i8)(intptr_t)(ws+904);
	i8 v3382 = *(i8*)(intptr_t)v3381;
	i8 v3383 = v3382+(+16);
	i8 v3384 = *(i8*)(intptr_t)v3383;
	i8 v3385 = v3384+(+136);
	*(i8*)(intptr_t)v3385 = v3380;

	i8 v3386 = (i8)(intptr_t)(ws+3376);
	i8 v3387 = *(i8*)(intptr_t)v3386;
	i8 v3388 = (i8)(intptr_t)(ws+904);
	i8 v3389 = *(i8*)(intptr_t)v3388;
	i8 v3390 = v3389+(+16);
	*(i8*)(intptr_t)v3390 = v3387;

	goto c02_0278;

c02_027c:;

c02_0278:;

	i8 v3391 = (i8)(intptr_t)(ws+3368);
	i1 v3392 = *(i1*)(intptr_t)v3391;
	i8 v3393 = (i8)(intptr_t)(ws+3376);
	i8 v3394 = *(i8*)(intptr_t)v3393;
	i8 v3395 = (i8)(intptr_t)(ws+3376);
	i8 v3396 = *(i8*)(intptr_t)v3395;
	i8 v3397 = v3396+(+128);
	i1 v3398 = *(i1*)(intptr_t)v3397;
	i8 v3399 = v3398;
	i8 v3400 = v3394+v3399;
	*(i1*)(intptr_t)v3400 = v3392;

	i8 v3401 = (i8)(intptr_t)(ws+3376);
	i8 v3402 = *(i8*)(intptr_t)v3401;
	i8 v3403 = v3402+(+128);
	i1 v3404 = *(i1*)(intptr_t)v3403;
	i1 v3405 = v3404+(+1);
	i8 v3406 = (i8)(intptr_t)(ws+3376);
	i8 v3407 = *(i8*)(intptr_t)v3406;
	i8 v3408 = v3407+(+128);
	*(i1*)(intptr_t)v3408 = v3405;

	i8 v3409 = (i8)(intptr_t)(ws+904);
	i8 v3410 = *(i8*)(intptr_t)v3409;
	i8 v3411 = v3410+(+24);
	i2 v3412 = *(i2*)(intptr_t)v3411;
	i2 v3413 = v3412+(+1);
	i8 v3414 = (i8)(intptr_t)(ws+904);
	i8 v3415 = *(i8*)(intptr_t)v3414;
	i8 v3416 = v3415+(+24);
	*(i2*)(intptr_t)v3416 = v3413;

	goto c02_0273;

c02_0277:;

c02_0273:;

endsub:;
}
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);

// E_b16 workspace at ws+3304 length ws+2
void f155_E_b16(i2 p3417 /* word */) {
	*(i2*)(intptr_t)(ws+3304) = p3417; /*word */

	i8 v3418 = (i8)(intptr_t)(ws+3304);
	i2 v3419 = *(i2*)(intptr_t)v3418;
	i1 v3420 = v3419;
	i8 v3421 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3421)(v3420);

	i8 v3422 = (i8)(intptr_t)(ws+3304);
	i2 v3423 = *(i2*)(intptr_t)v3422;
	i1 v3424 = (i1)+8;
	i2 v3425 = ((i2)v3423)>>v3424;
	i1 v3426 = v3425;
	i8 v3427 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3427)(v3426);

endsub:;
}
	void f154_E_b8(i1 /* byte */);

// E_space workspace at ws+3256 length ws+0
void f157_E_space(void) {

	i1 v3439 = (i1)+32;
	i8 v3440 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3440)(v3439);

endsub:;
}
	void f154_E_b8(i1 /* byte */);

// E_comma workspace at ws+3280 length ws+0
void f158_E_comma(void) {

	i1 v3441 = (i1)+44;
	i8 v3442 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3442)(v3441);

endsub:;
}
	void f154_E_b8(i1 /* byte */);

// E_tab workspace at ws+3256 length ws+0
void f159_E_tab(void) {

	i1 v3443 = (i1)+9;
	i8 v3444 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3444)(v3443);

endsub:;
}
	void f154_E_b8(i1 /* byte */);

// E_nl workspace at ws+3256 length ws+0
void f160_E_nl(void) {

	i1 v3445 = (i1)+10;
	i8 v3446 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3446)(v3445);

endsub:;
}
	void f154_E_b8(i1 /* byte */);

// E workspace at ws+3336 length ws+9
void f163_E(i8 p3451 /* text */) {
	*(i8*)(intptr_t)(ws+3336) = p3451; /*text */

c02_027d:;

	i8 v3452 = (i8)(intptr_t)(ws+3336);
	i8 v3453 = *(i8*)(intptr_t)v3452;
	i1 v3454 = *(i1*)(intptr_t)v3453;
	i8 v3455 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v3455 = v3454;

	i8 v3456 = (i8)(intptr_t)(ws+3336);
	i8 v3457 = *(i8*)(intptr_t)v3456;
	i8 v3458 = v3457+(+1);
	i8 v3459 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3459 = v3458;

	i8 v3460 = (i8)(intptr_t)(ws+3344);
	i1 v3461 = *(i1*)(intptr_t)v3460;
	i1 v3462 = (i1)+0;
	if (v3461==v3462) goto c02_0282; else goto c02_0283;

c02_0282:;

	goto c02_027e;

c02_0283:;

c02_027f:;

	i8 v3463 = (i8)(intptr_t)(ws+3344);
	i1 v3464 = *(i1*)(intptr_t)v3463;
	i8 v3465 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3465)(v3464);

	goto c02_027d;

c02_027e:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f154_E_b8(i1 /* byte */);

// E_u32 workspace at ws+3328 length ws+33
void f164_E_u32(i4 p3466 /* value */) {
	*(i4*)(intptr_t)(ws+3328) = p3466; /*value */

	i8 v3467 = (i8)(intptr_t)(ws+3332);
	i8 v3468 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3468 = v3467;

	i8 v3469 = (i8)(intptr_t)(ws+3328);
	i4 v3470 = *(i4*)(intptr_t)v3469;
	i1 v3471 = (i1)+10;
	i8 v3472 = (i8)(intptr_t)(ws+3344);
	i8 v3473 = *(i8*)(intptr_t)v3472;
	i8 v3474 = (i8)(intptr_t)(f13_UIToA);
	i8 v3475;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v3474)(&v3475, v3473, v3471, v3470);
	i8 v3476 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v3476 = v3475;

c02_0284:;

	i8 v3477 = (i8)(intptr_t)(ws+3344);
	i8 v3478 = *(i8*)(intptr_t)v3477;
	i1 v3479 = *(i1*)(intptr_t)v3478;
	i8 v3480 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v3480 = v3479;

	i8 v3481 = (i8)(intptr_t)(ws+3360);
	i1 v3482 = *(i1*)(intptr_t)v3481;
	i1 v3483 = (i1)+0;
	if (v3482==v3483) goto c02_0289; else goto c02_028a;

c02_0289:;

	goto c02_0285;

c02_028a:;

c02_0286:;

	i8 v3484 = (i8)(intptr_t)(ws+3360);
	i1 v3485 = *(i1*)(intptr_t)v3484;
	i8 v3486 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3486)(v3485);

	i8 v3487 = (i8)(intptr_t)(ws+3344);
	i8 v3488 = *(i8*)(intptr_t)v3487;
	i8 v3489 = v3488+(+1);
	i8 v3490 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3490 = v3489;

	goto c02_0284;

c02_0285:;

endsub:;
}
	void f164_E_u32(i4 /* value */);

// E_u16 workspace at ws+3304 length ws+2
void f165_E_u16(i2 p3491 /* value */) {
	*(i2*)(intptr_t)(ws+3304) = p3491; /*value */

	i8 v3492 = (i8)(intptr_t)(ws+3304);
	i2 v3493 = *(i2*)(intptr_t)v3492;
	i4 v3494 = v3493;
	i8 v3495 = (i8)(intptr_t)(f164_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3495)(v3494);

endsub:;
}
	void f164_E_u32(i4 /* value */);

// E_u8 workspace at ws+3320 length ws+1
void f166_E_u8(i1 p3496 /* value */) {
	*(i1*)(intptr_t)(ws+3320) = p3496; /*value */

	i8 v3497 = (i8)(intptr_t)(ws+3320);
	i1 v3498 = *(i1*)(intptr_t)v3497;
	i4 v3499 = v3498;
	i8 v3500 = (i8)(intptr_t)(f164_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3500)(v3499);

endsub:;
}
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);
	void f165_E_u16(i2 /* value */);

// E_i16 workspace at ws+3296 length ws+2
void f168_E_i16(i2 p3516 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3516; /*value */

	i8 v3517 = (i8)(intptr_t)(ws+3296);
	i2 v3518 = *(i2*)(intptr_t)v3517;
	i2 v3519 = (i2)+0;
	if ((s2)v3518<(s2)v3519) goto c02_0293; else goto c02_0294;

c02_0293:;

	i1 v3520 = (i1)+45;
	i8 v3521 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3521)(v3520);

	i8 v3522 = (i8)(intptr_t)(ws+3296);
	i2 v3523 = *(i2*)(intptr_t)v3522;
	i2 v3524 = -v3523;
	i8 v3525 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v3525 = v3524;

	goto c02_0290;

c02_0294:;

	i1 v3526 = (i1)+43;
	i8 v3527 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3527)(v3526);

c02_0290:;

	i8 v3528 = (i8)(intptr_t)(ws+3296);
	i2 v3529 = *(i2*)(intptr_t)v3528;
	i8 v3530 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v3530)(v3529);

endsub:;
}
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);
	void f164_E_u32(i4 /* value */);

// E_i32 workspace at ws+3280 length ws+4
void f169_E_i32(i4 p3531 /* value */) {
	*(i4*)(intptr_t)(ws+3280) = p3531; /*value */

	i8 v3532 = (i8)(intptr_t)(ws+3280);
	i4 v3533 = *(i4*)(intptr_t)v3532;
	i4 v3534 = (i4)+0;
	if ((s4)v3533<(s4)v3534) goto c02_0298; else goto c02_0299;

c02_0298:;

	i1 v3535 = (i1)+45;
	i8 v3536 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3536)(v3535);

	i8 v3537 = (i8)(intptr_t)(ws+3280);
	i4 v3538 = *(i4*)(intptr_t)v3537;
	i4 v3539 = -v3538;
	i8 v3540 = (i8)(intptr_t)(ws+3280);
	*(i4*)(intptr_t)v3540 = v3539;

	goto c02_0295;

c02_0299:;

	i1 v3541 = (i1)+43;
	i8 v3542 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3542)(v3541);

c02_0295:;

	i8 v3543 = (i8)(intptr_t)(ws+3280);
	i4 v3544 = *(i4*)(intptr_t)v3543;
	i8 v3545 = (i8)(intptr_t)(f164_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v3545)(v3544);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f154_E_b8(i1 /* byte */);
	void f163_E(i8 /* text */);

// E_h workspace at ws+3304 length ws+25
void f170_E_h(i1 p3546 /* width */, i4 p3547 /* value */) {
	*(i4*)(intptr_t)(ws+3304) = p3547; /*value */
	*(i1*)(intptr_t)(ws+3308) = p3546; /*width */

	i8 v3548 = (i8)(intptr_t)(ws+3304);
	i4 v3549 = *(i4*)(intptr_t)v3548;
	i1 v3550 = (i1)+16;
	i8 v3551 = (i8)(intptr_t)(ws+3309);
	i8 v3552 = (i8)(intptr_t)(f13_UIToA);
	i8 v3553;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v3552)(&v3553, v3551, v3550, v3549);
	i8 v3554 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3554 = v3553;

	i8 v3555 = (i8)(intptr_t)(ws+3308);
	i1 v3556 = *(i1*)(intptr_t)v3555;
	i8 v3557 = (i8)(intptr_t)(ws+3320);
	i8 v3558 = *(i8*)(intptr_t)v3557;
	i8 v3559 = (i8)(intptr_t)(ws+3309);
	i8 v3560 = v3558-v3559;
	i1 v3561 = v3560;
	i1 v3562 = v3556-v3561;
	i8 v3563 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v3563 = v3562;

c02_029c:;

	i8 v3564 = (i8)(intptr_t)(ws+3328);
	i1 v3565 = *(i1*)(intptr_t)v3564;
	i1 v3566 = (i1)+0;
	if (v3565==v3566) goto c02_029f; else goto c02_029e;

c02_029e:;

	i1 v3567 = (i1)+48;
	i8 v3568 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3568)(v3567);

	i8 v3569 = (i8)(intptr_t)(ws+3328);
	i1 v3570 = *(i1*)(intptr_t)v3569;
	i1 v3571 = v3570+(-1);
	i8 v3572 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v3572 = v3571;

	goto c02_029c;

c02_029f:;

	i8 v3573 = (i8)(intptr_t)(ws+3309);
	i8 v3574 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v3574)(v3573);

endsub:;
}
	void f170_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+3280 length ws+1
void f171_E_h8(i1 p3575 /* value */) {
	*(i1*)(intptr_t)(ws+3280) = p3575; /*value */

	i8 v3576 = (i8)(intptr_t)(ws+3280);
	i1 v3577 = *(i1*)(intptr_t)v3576;
	i4 v3578 = v3577;
	i1 v3579 = (i1)+2;
	i8 v3580 = (i8)(intptr_t)(f170_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v3580)(v3579, v3578);

endsub:;
}
	void f170_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+3296 length ws+2
void f172_E_h16(i2 p3581 /* value */) {
	*(i2*)(intptr_t)(ws+3296) = p3581; /*value */

	i8 v3582 = (i8)(intptr_t)(ws+3296);
	i2 v3583 = *(i2*)(intptr_t)v3582;
	i4 v3584 = v3583;
	i1 v3585 = (i1)+4;
	i8 v3586 = (i8)(intptr_t)(f170_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v3586)(v3585, v3584);

endsub:;
}
	void f154_E_b8(i1 /* byte */);
	void f172_E_h16(i2 /* value */);

// E_labelref workspace at ws+3288 length ws+2
void f174_E_labelref(i2 p3592 /* labelid */) {
	*(i2*)(intptr_t)(ws+3288) = p3592; /*labelid */

	i1 v3593 = (i1)+3;
	i8 v3594 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3594)(v3593);

	i8 v3595 = (i8)(intptr_t)(ws+3288);
	i2 v3596 = *(i2*)(intptr_t)v3595;
	i8 v3597 = (i8)(intptr_t)(f172_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v3597)(v3596);

endsub:;
}
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);

// E_subref workspace at ws+3296 length ws+8
void f175_E_subref(i8 p3598 /* subr */) {
	*(i8*)(intptr_t)(ws+3296) = p3598; /*subr */

	i8 v3599 = (i8)(intptr_t)(ws+3296);
	i8 v3600 = *(i8*)(intptr_t)v3599;
	i8 v3601 = (i8)(intptr_t)(ws+40);
	i8 v3602 = *(i8*)(intptr_t)v3601;
	if (v3600==v3602) goto c02_02a3; else goto c02_02a4;

c02_02a3:;

	i1 v3603 = (i1)+4;
	i8 v3604 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3604)(v3603);

	goto c02_02a0;

c02_02a4:;

	i1 v3605 = (i1)+1;
	i8 v3606 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3606)(v3605);

	i8 v3607 = (i8)(intptr_t)(ws+3296);
	i8 v3608 = *(i8*)(intptr_t)v3607;
	i8 v3609 = v3608+(+72);
	i2 v3610 = *(i2*)(intptr_t)v3609;
	i8 v3611 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3611)(v3610);

c02_02a0:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f31_Alloc(i8* /* block */, i8 /* length */);

// EmitterPushChunk workspace at ws+3296 length ws+8
void f177_EmitterPushChunk(void) {

	i8 v3626 = (i8)+26;
	i8 v3627 = (i8)(intptr_t)(f31_Alloc);
	i8 v3628;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3627)(&v3628, v3626);
	i8 v3629 = (i8)(intptr_t)(ws+3296);
	*(i8*)(intptr_t)v3629 = v3628;

	i8 v3630 = (i8)+144;
	i8 v3631 = (i8)(intptr_t)(f31_Alloc);
	i8 v3632;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3631)(&v3632, v3630);
	i8 v3633 = (i8)(intptr_t)(ws+3296);
	i8 v3634 = *(i8*)(intptr_t)v3633;
	i8 v3635 = v3634+(+16);
	*(i8*)(intptr_t)v3635 = v3632;

	i8 v3636 = (i8)(intptr_t)(ws+3296);
	i8 v3637 = *(i8*)(intptr_t)v3636;
	i8 v3638 = v3637+(+16);
	i8 v3639 = *(i8*)(intptr_t)v3638;
	i8 v3640 = (i8)(intptr_t)(ws+3296);
	i8 v3641 = *(i8*)(intptr_t)v3640;
	i8 v3642 = v3641+(+8);
	*(i8*)(intptr_t)v3642 = v3639;

	i8 v3643 = (i8)(intptr_t)(ws+904);
	i8 v3644 = *(i8*)(intptr_t)v3643;
	i8 v3645 = (i8)(intptr_t)(ws+3296);
	i8 v3646 = *(i8*)(intptr_t)v3645;
	*(i8*)(intptr_t)v3646 = v3644;

	i8 v3647 = (i8)(intptr_t)(ws+3296);
	i8 v3648 = *(i8*)(intptr_t)v3647;
	i8 v3649 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v3649 = v3648;

endsub:;
}
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// EmitterPopChunk workspace at ws+3296 length ws+40
void f178_EmitterPopChunk(i1 p3650 /* type */) {
	*(i1*)(intptr_t)(ws+3296) = p3650; /*type */

	i8 v3651 = (i8)(intptr_t)(ws+380);
	i8 v3652 = (i8)(intptr_t)(ws+3296);
	i1 v3653 = *(i1*)(intptr_t)v3652;
	i8 v3654 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3654)(v3653, v3651);

	i8 v3655 = (i8)(intptr_t)(ws+904);
	i8 v3656 = *(i8*)(intptr_t)v3655;
	i8 v3657 = v3656+(+24);
	i2 v3658 = *(i2*)(intptr_t)v3657;
	i8 v3659 = (i8)(intptr_t)(ws+3298);
	*(i2*)(intptr_t)v3659 = v3658;

	i8 v3660 = (i8)(intptr_t)(ws+380);
	i8 v3661 = (i8)(intptr_t)(ws+3298);
	i2 v3662 = *(i2*)(intptr_t)v3661;
	i1 v3663 = v3662;
	i8 v3664 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3664)(v3663, v3660);

	i8 v3665 = (i8)(intptr_t)(ws+380);
	i8 v3666 = (i8)(intptr_t)(ws+3298);
	i2 v3667 = *(i2*)(intptr_t)v3666;
	i1 v3668 = (i1)+8;
	i2 v3669 = ((i2)v3667)>>v3668;
	i1 v3670 = v3669;
	i8 v3671 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3671)(v3670, v3665);

	i8 v3672 = (i8)(intptr_t)(ws+904);
	i8 v3673 = *(i8*)(intptr_t)v3672;
	i8 v3674 = v3673+(+8);
	i8 v3675 = *(i8*)(intptr_t)v3674;
	i8 v3676 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3676 = v3675;

c02_02a7:;

	i8 v3677 = (i8)(intptr_t)(ws+3304);
	i8 v3678 = *(i8*)(intptr_t)v3677;
	i8 v3679 = (i8)+0;
	if (v3678==v3679) goto c02_02aa; else goto c02_02a9;

c02_02a9:;

	i1 v3680 = (i1)+0;
	i8 v3681 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3681 = v3680;

c02_02ad:;

	i8 v3682 = (i8)(intptr_t)(ws+3312);
	i1 v3683 = *(i1*)(intptr_t)v3682;
	i8 v3684 = (i8)(intptr_t)(ws+3304);
	i8 v3685 = *(i8*)(intptr_t)v3684;
	i8 v3686 = v3685+(+128);
	i1 v3687 = *(i1*)(intptr_t)v3686;
	if (v3683==v3687) goto c02_02b0; else goto c02_02af;

c02_02af:;

	i8 v3688 = (i8)(intptr_t)(ws+380);
	i8 v3689 = (i8)(intptr_t)(ws+3304);
	i8 v3690 = *(i8*)(intptr_t)v3689;
	i8 v3691 = (i8)(intptr_t)(ws+3312);
	i1 v3692 = *(i1*)(intptr_t)v3691;
	i8 v3693 = v3692;
	i8 v3694 = v3690+v3693;
	i1 v3695 = *(i1*)(intptr_t)v3694;
	i8 v3696 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3696)(v3695, v3688);

	i8 v3697 = (i8)(intptr_t)(ws+3312);
	i1 v3698 = *(i1*)(intptr_t)v3697;
	i1 v3699 = v3698+(+1);
	i8 v3700 = (i8)(intptr_t)(ws+3312);
	*(i1*)(intptr_t)v3700 = v3699;

	goto c02_02ad;

c02_02b0:;

	i8 v3701 = (i8)(intptr_t)(ws+3304);
	i8 v3702 = *(i8*)(intptr_t)v3701;
	i8 v3703 = v3702+(+136);
	i8 v3704 = *(i8*)(intptr_t)v3703;
	i8 v3705 = (i8)(intptr_t)(ws+3320);
	*(i8*)(intptr_t)v3705 = v3704;

	i8 v3706 = (i8)(intptr_t)(ws+3304);
	i8 v3707 = *(i8*)(intptr_t)v3706;
	i8 v3708 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v3708)(v3707);

	i8 v3709 = (i8)(intptr_t)(ws+3320);
	i8 v3710 = *(i8*)(intptr_t)v3709;
	i8 v3711 = (i8)(intptr_t)(ws+3304);
	*(i8*)(intptr_t)v3711 = v3710;

	goto c02_02a7;

c02_02aa:;

	i8 v3712 = (i8)(intptr_t)(ws+904);
	i8 v3713 = *(i8*)(intptr_t)v3712;
	i8 v3714 = *(i8*)(intptr_t)v3713;
	i8 v3715 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3715 = v3714;

	i8 v3716 = (i8)(intptr_t)(ws+904);
	i8 v3717 = *(i8*)(intptr_t)v3716;
	i8 v3718 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v3718)(v3717);

	i8 v3719 = (i8)(intptr_t)(ws+3328);
	i8 v3720 = *(i8*)(intptr_t)v3719;
	i8 v3721 = (i8)(intptr_t)(ws+904);
	*(i8*)(intptr_t)v3721 = v3720;

endsub:;
}
	void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0042[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+2888 length ws+8
void f179_EmitterOpenfile(i8 p3722 /* filename */) {
	*(i8*)(intptr_t)(ws+2888) = p3722; /*filename */

	i8 v3723 = (i8)(intptr_t)(ws+380);
	i8 v3724 = (i8)(intptr_t)(ws+2888);
	i8 v3725 = *(i8*)(intptr_t)v3724;
	i8 v3726 = (i8)(intptr_t)(f42_FCBOpenOut);
	i1 v3727;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v3726)(&v3727, v3725, v3723);
	i1 v3728 = (i1)+0;
	if (v3727==v3728) goto c02_02b5; else goto c02_02b4;

c02_02b4:;

	i8 v3729 = (i8)(intptr_t)c02_s0042;
	i8 v3730 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3730)(v3729);

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
void f180_EmitterClosefile(void) {

	i8 v3731 = (i8)(intptr_t)(ws+380);
	i1 v3732 = (i1)+69;
	i8 v3733 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3733)(v3732, v3731);

	i8 v3734 = (i8)(intptr_t)(ws+380);
	i1 v3735 = (i1)+0;
	i8 v3736 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3736)(v3735, v3734);

	i8 v3737 = (i8)(intptr_t)(ws+380);
	i1 v3738 = (i1)+0;
	i8 v3739 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3739)(v3738, v3737);

	i8 v3740 = (i8)(intptr_t)(ws+380);
	i8 v3741 = (i8)(intptr_t)(f43_FCBClose);
	i1 v3742;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v3741)(&v3742, v3740);
	i1 v3743 = (i1)+0;
	if (v3742==v3743) goto c02_02ba; else goto c02_02b9;

c02_02b9:;

	i8 v3744 = (i8)(intptr_t)c02_s0043;
	i8 v3745 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3745)(v3744);

	goto c02_02b6;

c02_02ba:;

c02_02b6:;

endsub:;
}
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
	void f163_E(i8 /* text */);
	void f178_EmitterPopChunk(i1 /* type */);

// EmitterDeclareSubroutine workspace at ws+3008 length ws+8
void f181_EmitterDeclareSubroutine(i8 p3746 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p3746; /*subr */

	i8 v3747 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3747)();

	i8 v3748 = (i8)(intptr_t)(ws+3008);
	i8 v3749 = *(i8*)(intptr_t)v3748;
	i8 v3750 = v3749+(+72);
	i2 v3751 = *(i2*)(intptr_t)v3750;
	i8 v3752 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3752)(v3751);

	i8 v3753 = (i8)(intptr_t)(ws+3008);
	i8 v3754 = *(i8*)(intptr_t)v3753;
	i8 v3755 = *(i8*)(intptr_t)v3754;
	i8 v3756 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v3756)(v3755);

	i1 v3757 = (i1)+78;
	i8 v3758 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3758)(v3757);

endsub:;
}
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
	void f163_E(i8 /* text */);
	void f178_EmitterPopChunk(i1 /* type */);

// EmitterDeclareExternalSubroutine workspace at ws+3008 length ws+16
void f182_EmitterDeclareExternalSubroutine(i8 p3759 /* external */, i2 p3760 /* id */) {
	*(i2*)(intptr_t)(ws+3008) = p3760; /*id */
	*(i8*)(intptr_t)(ws+3016) = p3759; /*external */

	i8 v3761 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3761)();

	i8 v3762 = (i8)(intptr_t)(ws+3008);
	i2 v3763 = *(i2*)(intptr_t)v3762;
	i8 v3764 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3764)(v3763);

	i8 v3765 = (i8)(intptr_t)(ws+3016);
	i8 v3766 = *(i8*)(intptr_t)v3765;
	i8 v3767 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v3767)(v3766);

	i1 v3768 = (i1)+88;
	i8 v3769 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3769)(v3768);

endsub:;
}
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
	void f155_E_b16(i2 /* word */);
	void f178_EmitterPopChunk(i1 /* type */);

// EmitterReferenceSubroutine workspace at ws+3064 length ws+16
void f183_EmitterReferenceSubroutine(i8 p3770 /* used */, i8 p3771 /* user */) {
	*(i8*)(intptr_t)(ws+3064) = p3771; /*user */
	*(i8*)(intptr_t)(ws+3072) = p3770; /*used */

	i8 v3772 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3772)();

	i8 v3773 = (i8)(intptr_t)(ws+3064);
	i8 v3774 = *(i8*)(intptr_t)v3773;
	i8 v3775 = v3774+(+72);
	i2 v3776 = *(i2*)(intptr_t)v3775;
	i8 v3777 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3777)(v3776);

	i8 v3778 = (i8)(intptr_t)(ws+3072);
	i8 v3779 = *(i8*)(intptr_t)v3778;
	i8 v3780 = v3779+(+72);
	i2 v3781 = *(i2*)(intptr_t)v3780;
	i8 v3782 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3782)(v3781);

	i1 v3783 = (i1)+82;
	i8 v3784 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3784)(v3783);

endsub:;
}
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);
	void f178_EmitterPopChunk(i1 /* type */);

// EmitterDeclareWorkspace workspace at ws+3280 length ws+12
void f184_EmitterDeclareWorkspace(i2 p3785 /* workspace */, i1 p3786 /* wid */, i8 p3787 /* subr */) {
	*(i8*)(intptr_t)(ws+3280) = p3787; /*subr */
	*(i1*)(intptr_t)(ws+3288) = p3786; /*wid */
	*(i2*)(intptr_t)(ws+3290) = p3785; /*workspace */

	i8 v3788 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v3788)();

	i8 v3789 = (i8)(intptr_t)(ws+3280);
	i8 v3790 = *(i8*)(intptr_t)v3789;
	i8 v3791 = v3790+(+72);
	i2 v3792 = *(i2*)(intptr_t)v3791;
	i8 v3793 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3793)(v3792);

	i8 v3794 = (i8)(intptr_t)(ws+3288);
	i1 v3795 = *(i1*)(intptr_t)v3794;
	i8 v3796 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3796)(v3795);

	i8 v3797 = (i8)(intptr_t)(ws+3290);
	i2 v3798 = *(i2*)(intptr_t)v3797;
	i8 v3799 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3799)(v3798);

	i1 v3800 = (i1)+87;
	i8 v3801 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v3801)(v3800);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3096 length ws+24
void f194_LookupSymbolInNamespace(i8* p4130 /* symbol */, i8 p4131 /* name */, i8 p4132 /* namespace */) {
	*(i8*)(intptr_t)(ws+3096) = p4132; /*namespace */
	*(i8*)(intptr_t)(ws+3104) = p4131; /*name */

	i8 v4133 = (i8)(intptr_t)(ws+3096);
	i8 v4134 = *(i8*)(intptr_t)v4133;
	i8 v4135 = *(i8*)(intptr_t)v4134;
	i8 v4136 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4136 = v4135;

c02_0345:;

	i8 v4137 = (i8)(intptr_t)(ws+3112);
	i8 v4138 = *(i8*)(intptr_t)v4137;
	i8 v4139 = (i8)+0;
	if (v4138==v4139) goto c02_0348; else goto c02_0347;

c02_0347:;

	i8 v4140 = (i8)(intptr_t)(ws+3112);
	i8 v4141 = *(i8*)(intptr_t)v4140;
	i8 v4142 = v4141+(+48);
	i8 v4143 = *(i8*)(intptr_t)v4142;
	i8 v4144 = (i8)(intptr_t)(ws+3104);
	i8 v4145 = *(i8*)(intptr_t)v4144;
	i8 v4146 = (i8)(intptr_t)(f25_StrCmp);
	i1 v4147;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4146)(&v4147, v4145, v4143);
	i1 v4148 = (i1)+0;
	if (v4147==v4148) goto c02_034c; else goto c02_034d;

c02_034c:;

c02_0350:;

	i8 v4149 = (i8)(intptr_t)(ws+3112);
	i8 v4150 = *(i8*)(intptr_t)v4149;
	i8 v4151 = v4150+(+46);
	i1 v4152 = *(i1*)(intptr_t)v4151;
	i1 v4153 = (i1)+39;
	if (v4152==v4153) goto c02_0352; else goto c02_0353;

c02_0352:;

	i8 v4154 = (i8)(intptr_t)(ws+3112);
	i8 v4155 = *(i8*)(intptr_t)v4154;
	i8 v4156 = *(i8*)(intptr_t)v4155;
	i8 v4157 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4157 = v4156;

	goto c02_0350;

c02_0353:;

	goto endsub;

c02_034d:;

c02_0349:;

	i8 v4158 = (i8)(intptr_t)(ws+3112);
	i8 v4159 = *(i8*)(intptr_t)v4158;
	i8 v4160 = v4159+(+56);
	i8 v4161 = *(i8*)(intptr_t)v4160;
	i8 v4162 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4162 = v4161;

	goto c02_0345;

c02_0348:;

	i8 v4163 = (i8)+0;
	i8 v4164 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v4164 = v4163;

endsub:;
	*p4130 = *(i8*)(intptr_t)(ws+3112);
}
	void f194_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3032 length ws+24
void f195_LookupSymbol(i8* p4165 /* symbol */, i8 p4166 /* name */, i8 p4167 /* namespace */) {
	*(i8*)(intptr_t)(ws+3032) = p4167; /*namespace */
	*(i8*)(intptr_t)(ws+3040) = p4166; /*name */

	i8 v4168 = (i8)(intptr_t)(ws+3032);
	i8 v4169 = *(i8*)(intptr_t)v4168;
	i8 v4170 = (i8)+0;
	if (v4169==v4170) goto c02_0357; else goto c02_0358;

c02_0357:;

	i8 v4171 = (i8)(intptr_t)(ws+40);
	i8 v4172 = *(i8*)(intptr_t)v4171;
	i8 v4173 = v4172+(+16);
	i8 v4174 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v4174 = v4173;

	goto c02_0354;

c02_0358:;

c02_0354:;

c02_035b:;

	i8 v4175 = (i8)(intptr_t)(ws+3032);
	i8 v4176 = *(i8*)(intptr_t)v4175;
	i8 v4177 = (i8)+0;
	if (v4176==v4177) goto c02_035e; else goto c02_035d;

c02_035d:;

	i8 v4178 = (i8)(intptr_t)(ws+3032);
	i8 v4179 = *(i8*)(intptr_t)v4178;
	i8 v4180 = (i8)(intptr_t)(ws+3040);
	i8 v4181 = *(i8*)(intptr_t)v4180;
	i8 v4182 = (i8)(intptr_t)(f194_LookupSymbolInNamespace);
	i8 v4183;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4182)(&v4183, v4181, v4179);
	i8 v4184 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4184 = v4183;

	i8 v4185 = (i8)(intptr_t)(ws+3048);
	i8 v4186 = *(i8*)(intptr_t)v4185;
	i8 v4187 = (i8)+0;
	if (v4186==v4187) goto c02_0363; else goto c02_0362;

c02_0362:;

	goto endsub;

c02_0363:;

c02_035f:;

	i8 v4188 = (i8)(intptr_t)(ws+3032);
	i8 v4189 = *(i8*)(intptr_t)v4188;
	i8 v4190 = v4189+(+16);
	i8 v4191 = *(i8*)(intptr_t)v4190;
	i8 v4192 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v4192 = v4191;

	goto c02_035b;

c02_035e:;

	i8 v4193 = (i8)+0;
	i8 v4194 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4194 = v4193;

endsub:;
	*p4165 = *(i8*)(intptr_t)(ws+3048);
}

// AddToNamespace workspace at ws+3096 length ws+16
void f196_AddToNamespace(i8 p4195 /* symbol */, i8 p4196 /* namespace */) {
	*(i8*)(intptr_t)(ws+3096) = p4196; /*namespace */
	*(i8*)(intptr_t)(ws+3104) = p4195; /*symbol */

	i8 v4197 = (i8)(intptr_t)(ws+3096);
	i8 v4198 = *(i8*)(intptr_t)v4197;
	i8 v4199 = v4198+(+8);
	i8 v4200 = *(i8*)(intptr_t)v4199;
	i8 v4201 = (i8)+0;
	if (v4200==v4201) goto c02_0367; else goto c02_0368;

c02_0367:;

	i8 v4202 = (i8)(intptr_t)(ws+3104);
	i8 v4203 = *(i8*)(intptr_t)v4202;
	i8 v4204 = (i8)(intptr_t)(ws+3096);
	i8 v4205 = *(i8*)(intptr_t)v4204;
	*(i8*)(intptr_t)v4205 = v4203;

	i8 v4206 = (i8)(intptr_t)(ws+3104);
	i8 v4207 = *(i8*)(intptr_t)v4206;
	i8 v4208 = (i8)(intptr_t)(ws+3096);
	i8 v4209 = *(i8*)(intptr_t)v4208;
	i8 v4210 = v4209+(+8);
	*(i8*)(intptr_t)v4210 = v4207;

	goto c02_0364;

c02_0368:;

	i8 v4211 = (i8)(intptr_t)(ws+3104);
	i8 v4212 = *(i8*)(intptr_t)v4211;
	i8 v4213 = (i8)(intptr_t)(ws+3096);
	i8 v4214 = *(i8*)(intptr_t)v4213;
	i8 v4215 = v4214+(+8);
	i8 v4216 = *(i8*)(intptr_t)v4215;
	i8 v4217 = v4216+(+56);
	*(i8*)(intptr_t)v4217 = v4212;

	i8 v4218 = (i8)(intptr_t)(ws+3104);
	i8 v4219 = *(i8*)(intptr_t)v4218;
	i8 v4220 = (i8)(intptr_t)(ws+3096);
	i8 v4221 = *(i8*)(intptr_t)v4220;
	i8 v4222 = v4221+(+8);
	*(i8*)(intptr_t)v4222 = v4219;

c02_0364:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f194_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f59_StartError(void);
const i1 c02_s0044[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0045[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f196_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddSymbol workspace at ws+3072 length ws+24
void f197_AddSymbol(i8* p4223 /* symbol */, i8 p4224 /* name */, i8 p4225 /* namespace */) {
	*(i8*)(intptr_t)(ws+3072) = p4225; /*namespace */
	*(i8*)(intptr_t)(ws+3080) = p4224; /*name */

	i8 v4226 = (i8)(intptr_t)(ws+3072);
	i8 v4227 = *(i8*)(intptr_t)v4226;
	i8 v4228 = (i8)+0;
	if (v4227==v4228) goto c02_036c; else goto c02_036d;

c02_036c:;

	i8 v4229 = (i8)(intptr_t)(ws+40);
	i8 v4230 = *(i8*)(intptr_t)v4229;
	i8 v4231 = v4230+(+16);
	i8 v4232 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v4232 = v4231;

	goto c02_0369;

c02_036d:;

c02_0369:;

	i8 v4233 = (i8)+64;
	i8 v4234 = (i8)(intptr_t)(f31_Alloc);
	i8 v4235;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v4234)(&v4235, v4233);
	i8 v4236 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v4236 = v4235;

	i8 v4237 = (i8)(intptr_t)(ws+3080);
	i8 v4238 = *(i8*)(intptr_t)v4237;
	i8 v4239 = (i8)+0;
	if (v4238==v4239) goto c02_0372; else goto c02_0371;

c02_0371:;

	i8 v4240 = (i8)(intptr_t)(ws+3072);
	i8 v4241 = *(i8*)(intptr_t)v4240;
	i8 v4242 = (i8)(intptr_t)(ws+3080);
	i8 v4243 = *(i8*)(intptr_t)v4242;
	i8 v4244 = (i8)(intptr_t)(f194_LookupSymbolInNamespace);
	i8 v4245;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4244)(&v4245, v4243, v4241);
	i8 v4246 = (i8)+0;
	if (v4245==v4246) goto c02_0377; else goto c02_0376;

c02_0376:;

	i8 v4247 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v4247)();

	i8 v4248 = (i8)(intptr_t)c02_s0044;
	i8 v4249 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4249)(v4248);

	i8 v4250 = (i8)(intptr_t)(ws+3080);
	i8 v4251 = *(i8*)(intptr_t)v4250;
	i8 v4252 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4252)(v4251);

	i8 v4253 = (i8)(intptr_t)c02_s0045;
	i8 v4254 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4254)(v4253);

	i8 v4255 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v4255)();

	goto c02_0373;

c02_0377:;

c02_0373:;

	i8 v4256 = (i8)(intptr_t)(ws+3080);
	i8 v4257 = *(i8*)(intptr_t)v4256;
	i8 v4258 = (i8)(intptr_t)(ws+3088);
	i8 v4259 = *(i8*)(intptr_t)v4258;
	i8 v4260 = v4259+(+48);
	*(i8*)(intptr_t)v4260 = v4257;

	i8 v4261 = (i8)(intptr_t)(ws+3072);
	i8 v4262 = *(i8*)(intptr_t)v4261;
	i8 v4263 = (i8)(intptr_t)(ws+3088);
	i8 v4264 = *(i8*)(intptr_t)v4263;
	i8 v4265 = (i8)(intptr_t)(f196_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4265)(v4264, v4262);

	goto c02_036e;

c02_0372:;

c02_036e:;

endsub:;
	*p4223 = *(i8*)(intptr_t)(ws+3088);
}
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3016 length ws+32
void f198_AddAlias(i8* p4266 /* symbol */, i8 p4267 /* real */, i8 p4268 /* name */, i8 p4269 /* namespace */) {
	*(i8*)(intptr_t)(ws+3016) = p4269; /*namespace */
	*(i8*)(intptr_t)(ws+3024) = p4268; /*name */
	*(i8*)(intptr_t)(ws+3032) = p4267; /*real */

	i8 v4270 = (i8)(intptr_t)(ws+3016);
	i8 v4271 = *(i8*)(intptr_t)v4270;
	i8 v4272 = (i8)(intptr_t)(ws+3024);
	i8 v4273 = *(i8*)(intptr_t)v4272;
	i8 v4274 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v4275;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4274)(&v4275, v4273, v4271);
	i8 v4276 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v4276 = v4275;

	i1 v4277 = (i1)+39;
	i8 v4278 = (i8)(intptr_t)(ws+3040);
	i8 v4279 = *(i8*)(intptr_t)v4278;
	i8 v4280 = v4279+(+46);
	*(i1*)(intptr_t)v4280 = v4277;

	i8 v4281 = (i8)(intptr_t)(ws+3032);
	i8 v4282 = *(i8*)(intptr_t)v4281;
	i8 v4283 = (i8)(intptr_t)(ws+3040);
	i8 v4284 = *(i8*)(intptr_t)v4283;
	*(i8*)(intptr_t)v4284 = v4282;

endsub:;
	*p4266 = *(i8*)(intptr_t)(ws+3040);
}
	void f198_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+2888 length ws+24
void f199_AddAliasString(i8 p4285 /* real */, i8 p4286 /* name */) {
	*(i8*)(intptr_t)(ws+2888) = p4286; /*name */
	*(i8*)(intptr_t)(ws+2896) = p4285; /*real */

	i8 v4287 = (i8)+0;
	i8 v4288 = (i8)(intptr_t)(ws+2888);
	i8 v4289 = *(i8*)(intptr_t)v4288;
	i8 v4290 = (i8)(intptr_t)(ws+2896);
	i8 v4291 = *(i8*)(intptr_t)v4290;
	i8 v4292 = (i8)(intptr_t)(f198_AddAlias);
	i8 v4293;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v4292)(&v4293, v4291, v4289, v4287);
	i8 v4294 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v4294 = v4293;

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
void f200_CheckNotPartialType(i8 p4295 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4295; /*type */

	i8 v4296 = (i8)(intptr_t)(ws+3056);
	i8 v4297 = *(i8*)(intptr_t)v4296;
	i8 v4298 = v4297+(+40);
	i1 v4299 = *(i1*)(intptr_t)v4298;
	i1 v4300 = (i1)+1;
	if (v4299==v4300) goto c02_037b; else goto c02_037c;

c02_037b:;

	i8 v4301 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v4301)();

	i8 v4302 = (i8)(intptr_t)c02_s0046;
	i8 v4303 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4303)(v4302);

	i8 v4304 = (i8)(intptr_t)(ws+3056);
	i8 v4305 = *(i8*)(intptr_t)v4304;
	i8 v4306 = v4305+(+48);
	i8 v4307 = *(i8*)(intptr_t)v4306;
	i8 v4308 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4308)(v4307);

	i8 v4309 = (i8)(intptr_t)c02_s0047;
	i8 v4310 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4310)(v4309);

	i8 v4311 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v4311)();

	goto c02_0378;

c02_037c:;

c02_0378:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f196_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// MakeNumberType workspace at ws+2888 length ws+24
void f201_MakeNumberType(i8* p4312 /* symbol */, i8 p4313 /* name */, i1 p4314 /* is_signed */, i1 p4315 /* alignment */, i1 p4316 /* width */) {
	*(i1*)(intptr_t)(ws+2888) = p4316; /*width */
	*(i1*)(intptr_t)(ws+2889) = p4315; /*alignment */
	*(i1*)(intptr_t)(ws+2890) = p4314; /*is_signed */
	*(i8*)(intptr_t)(ws+2896) = p4313; /*name */

	i8 v4317 = (i8)+64;
	i8 v4318 = (i8)(intptr_t)(f31_Alloc);
	i8 v4319;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v4318)(&v4319, v4317);
	i8 v4320 = (i8)(intptr_t)(ws+2904);
	*(i8*)(intptr_t)v4320 = v4319;

	i1 v4321 = (i1)+30;
	i8 v4322 = (i8)(intptr_t)(ws+2904);
	i8 v4323 = *(i8*)(intptr_t)v4322;
	i8 v4324 = v4323+(+46);
	*(i1*)(intptr_t)v4324 = v4321;

	i1 v4325 = (i1)+2;
	i8 v4326 = (i8)(intptr_t)(ws+2904);
	i8 v4327 = *(i8*)(intptr_t)v4326;
	i8 v4328 = v4327+(+40);
	*(i1*)(intptr_t)v4328 = v4325;

	i8 v4329 = (i8)(intptr_t)(ws+2888);
	i1 v4330 = *(i1*)(intptr_t)v4329;
	i2 v4331 = v4330;
	i8 v4332 = (i8)(intptr_t)(ws+2904);
	i8 v4333 = *(i8*)(intptr_t)v4332;
	i8 v4334 = v4333+(+42);
	*(i2*)(intptr_t)v4334 = v4331;

	i8 v4335 = (i8)(intptr_t)(ws+2888);
	i1 v4336 = *(i1*)(intptr_t)v4335;
	i2 v4337 = v4336;
	i8 v4338 = (i8)(intptr_t)(ws+2904);
	i8 v4339 = *(i8*)(intptr_t)v4338;
	i8 v4340 = v4339+(+44);
	*(i2*)(intptr_t)v4340 = v4337;

	i8 v4341 = (i8)(intptr_t)(ws+2889);
	i1 v4342 = *(i1*)(intptr_t)v4341;
	i8 v4343 = (i8)(intptr_t)(ws+2904);
	i8 v4344 = *(i8*)(intptr_t)v4343;
	i8 v4345 = v4344+(+41);
	*(i1*)(intptr_t)v4345 = v4342;

	i8 v4346 = (i8)(intptr_t)(ws+2890);
	i1 v4347 = *(i1*)(intptr_t)v4346;
	i8 v4348 = (i8)(intptr_t)(ws+2904);
	i8 v4349 = *(i8*)(intptr_t)v4348;
	*(i1*)(intptr_t)v4349 = v4347;

	i8 v4350 = (i8)(intptr_t)(ws+2896);
	i8 v4351 = *(i8*)(intptr_t)v4350;
	i8 v4352 = (i8)(intptr_t)(ws+2904);
	i8 v4353 = *(i8*)(intptr_t)v4352;
	i8 v4354 = v4353+(+48);
	*(i8*)(intptr_t)v4354 = v4351;

	i8 v4355 = (i8)(intptr_t)(ws+40);
	i8 v4356 = *(i8*)(intptr_t)v4355;
	i8 v4357 = v4356+(+16);
	i8 v4358 = (i8)(intptr_t)(ws+2904);
	i8 v4359 = *(i8*)(intptr_t)v4358;
	i8 v4360 = (i8)(intptr_t)(f196_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4360)(v4359, v4357);

endsub:;
	*p4312 = *(i8*)(intptr_t)(ws+2904);
}

// IsTypeOfKind workspace at ws+3120 length ws+10
void f202_IsTypeOfKind(i1* p4361 /* result */, i1 p4362 /* kind */, i8 p4363 /* type */) {
	*(i8*)(intptr_t)(ws+3120) = p4363; /*type */
	*(i1*)(intptr_t)(ws+3128) = p4362; /*kind */

	i1 v4364 = (i1)+0;
	i8 v4365 = (i8)(intptr_t)(ws+3129);
	*(i1*)(intptr_t)v4365 = v4364;

	i8 v4366 = (i8)(intptr_t)(ws+3120);
	i8 v4367 = *(i8*)(intptr_t)v4366;
	i8 v4368 = (i8)+0;
	if (v4367==v4368) goto c02_0385; else goto c02_0387;

c02_0387:;

	i8 v4369 = (i8)(intptr_t)(ws+3120);
	i8 v4370 = *(i8*)(intptr_t)v4369;
	i8 v4371 = v4370+(+46);
	i1 v4372 = *(i1*)(intptr_t)v4371;
	i1 v4373 = (i1)+30;
	if (v4372==v4373) goto c02_0386; else goto c02_0385;

c02_0386:;

	i8 v4374 = (i8)(intptr_t)(ws+3120);
	i8 v4375 = *(i8*)(intptr_t)v4374;
	i8 v4376 = v4375+(+40);
	i1 v4377 = *(i1*)(intptr_t)v4376;
	i8 v4378 = (i8)(intptr_t)(ws+3128);
	i1 v4379 = *(i1*)(intptr_t)v4378;
	if (v4377==v4379) goto c02_0384; else goto c02_0385;

c02_0384:;

	i1 v4380 = (i1)+1;
	i8 v4381 = (i8)(intptr_t)(ws+3129);
	*(i1*)(intptr_t)v4381 = v4380;

	goto c02_037d;

c02_0385:;

c02_037d:;

endsub:;
	*p4361 = *(i1*)(intptr_t)(ws+3129);
}
	void f202_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3064 length ws+9
void f203_IsArray(i1* p4382 /* result */, i8 p4383 /* type */) {
	*(i8*)(intptr_t)(ws+3064) = p4383; /*type */

	i8 v4384 = (i8)(intptr_t)(ws+3064);
	i8 v4385 = *(i8*)(intptr_t)v4384;
	i1 v4386 = (i1)+4;
	i8 v4387 = (i8)(intptr_t)(f202_IsTypeOfKind);
	i1 v4388;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4387)(&v4388, v4386, v4385);
	i8 v4389 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4389 = v4388;

endsub:;
	*p4382 = *(i1*)(intptr_t)(ws+3072);
}
	void f202_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3104 length ws+9
void f204_IsPtr(i1* p4390 /* result */, i8 p4391 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4391; /*type */

	i8 v4392 = (i8)(intptr_t)(ws+3104);
	i8 v4393 = *(i8*)(intptr_t)v4392;
	i1 v4394 = (i1)+3;
	i8 v4395 = (i8)(intptr_t)(f202_IsTypeOfKind);
	i1 v4396;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4395)(&v4396, v4394, v4393);
	i8 v4397 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4397 = v4396;

endsub:;
	*p4390 = *(i1*)(intptr_t)(ws+3112);
}
	void f202_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3104 length ws+9
void f205_IsSubroutine(i1* p4398 /* result */, i8 p4399 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4399; /*type */

	i8 v4400 = (i8)(intptr_t)(ws+3104);
	i8 v4401 = *(i8*)(intptr_t)v4400;
	i1 v4402 = (i1)+6;
	i8 v4403 = (i8)(intptr_t)(f202_IsTypeOfKind);
	i1 v4404;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4403)(&v4404, v4402, v4401);
	i8 v4405 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4405 = v4404;

endsub:;
	*p4398 = *(i1*)(intptr_t)(ws+3112);
}
	void f202_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3104 length ws+9
void f206_IsNum(i1* p4406 /* result */, i8 p4407 /* type */) {
	*(i8*)(intptr_t)(ws+3104) = p4407; /*type */

	i8 v4408 = (i8)(intptr_t)(ws+3104);
	i8 v4409 = *(i8*)(intptr_t)v4408;
	i8 v4410 = (i8)+0;
	if (v4409==v4410) goto c02_038b; else goto c02_038c;

c02_038b:;

	i1 v4411 = (i1)+1;
	i8 v4412 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4412 = v4411;

	goto c02_0388;

c02_038c:;

	i8 v4413 = (i8)(intptr_t)(ws+3104);
	i8 v4414 = *(i8*)(intptr_t)v4413;
	i1 v4415 = (i1)+2;
	i8 v4416 = (i8)(intptr_t)(f202_IsTypeOfKind);
	i1 v4417;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4416)(&v4417, v4415, v4414);
	i8 v4418 = (i8)(intptr_t)(ws+3112);
	*(i1*)(intptr_t)v4418 = v4417;

c02_0388:;

endsub:;
	*p4406 = *(i1*)(intptr_t)(ws+3112);
}
	void f202_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3056 length ws+9
void f207_IsSNum(i1* p4419 /* result */, i8 p4420 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p4420; /*type */

	i8 v4421 = (i8)(intptr_t)(ws+3056);
	i8 v4422 = *(i8*)(intptr_t)v4421;
	i8 v4423 = (i8)+0;
	if (v4422==v4423) goto c02_0390; else goto c02_0391;

c02_0390:;

	i1 v4424 = (i1)+1;
	i8 v4425 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4425 = v4424;

	goto c02_038d;

c02_0391:;

	i8 v4426 = (i8)(intptr_t)(ws+3056);
	i8 v4427 = *(i8*)(intptr_t)v4426;
	i1 v4428 = (i1)+2;
	i8 v4429 = (i8)(intptr_t)(f202_IsTypeOfKind);
	i1 v4430;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4429)(&v4430, v4428, v4427);
	i1 v4431 = (i1)+0;
	if (v4430==v4431) goto c02_0397; else goto c02_0398;

c02_0398:;

	i8 v4432 = (i8)(intptr_t)(ws+3056);
	i8 v4433 = *(i8*)(intptr_t)v4432;
	i1 v4434 = *(i1*)(intptr_t)v4433;
	i1 v4435 = (i1)+0;
	if (v4434==v4435) goto c02_0397; else goto c02_0396;

c02_0396:;

	i1 v4436 = (i1)+1;
	i8 v4437 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4437 = v4436;

	goto c02_038d;

c02_0397:;

	i1 v4438 = (i1)+0;
	i8 v4439 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v4439 = v4438;

c02_038d:;

endsub:;
	*p4419 = *(i1*)(intptr_t)(ws+3064);
}
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f206_IsNum(i1* /* result */, i8 /* type */);
	void f205_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3088 length ws+9
void f208_IsScalar(i1* p4440 /* result */, i8 p4441 /* type */) {
	*(i8*)(intptr_t)(ws+3088) = p4441; /*type */

	i8 v4442 = (i8)(intptr_t)(ws+3088);
	i8 v4443 = *(i8*)(intptr_t)v4442;
	i8 v4444 = (i8)(intptr_t)(f204_IsPtr);
	i1 v4445;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4444)(&v4445, v4443);
	i1 v4446 = (i1)+0;
	if (v4445==v4446) goto c02_03a3; else goto c02_03a0;

c02_03a3:;

	i8 v4447 = (i8)(intptr_t)(ws+3088);
	i8 v4448 = *(i8*)(intptr_t)v4447;
	i8 v4449 = (i8)(intptr_t)(f206_IsNum);
	i1 v4450;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4449)(&v4450, v4448);
	i1 v4451 = (i1)+0;
	if (v4450==v4451) goto c02_03a2; else goto c02_03a0;

c02_03a2:;

	i8 v4452 = (i8)(intptr_t)(ws+3088);
	i8 v4453 = *(i8*)(intptr_t)v4452;
	i8 v4454 = (i8)(intptr_t)(f205_IsSubroutine);
	i1 v4455;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4454)(&v4455, v4453);
	i1 v4456 = (i1)+0;
	if (v4455==v4456) goto c02_03a1; else goto c02_03a0;

c02_03a0:;

	i1 v4457 = (i1)+1;
	i8 v4458 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v4458 = v4457;

	goto c02_0399;

c02_03a1:;

	i1 v4459 = (i1)+0;
	i8 v4460 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v4460 = v4459;

c02_0399:;

endsub:;
	*p4440 = *(i1*)(intptr_t)(ws+3096);
}
	void f202_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3032 length ws+9
void f209_IsRecord(i1* p4461 /* result */, i8 p4462 /* type */) {
	*(i8*)(intptr_t)(ws+3032) = p4462; /*type */

	i8 v4463 = (i8)(intptr_t)(ws+3032);
	i8 v4464 = *(i8*)(intptr_t)v4463;
	i1 v4465 = (i1)+5;
	i8 v4466 = (i8)(intptr_t)(f202_IsTypeOfKind);
	i1 v4467;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4466)(&v4467, v4465, v4464);
	i8 v4468 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v4468 = v4467;

endsub:;
	*p4461 = *(i1*)(intptr_t)(ws+3040);
}
	void f208_IsScalar(i1* /* result */, i8 /* type */);
	void f137_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3056 length ws+32
void f210_MakeLValue(i8* p4469 /* lvalue */, i8 p4470 /* address */) {
	*(i8*)(intptr_t)(ws+3056) = p4470; /*address */

	i1 v4471 = (i1)+0;
	i8 v4472 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4472 = v4471;

	i8 v4473 = (i8)(intptr_t)(ws+3056);
	i8 v4474 = *(i8*)(intptr_t)v4473;
	i8 v4475 = v4474+(+16);
	i8 v4476 = *(i8*)(intptr_t)v4475;
	i8 v4477 = *(i8*)(intptr_t)v4476;
	i8 v4478 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v4478 = v4477;

	i8 v4479 = (i8)(intptr_t)(ws+3080);
	i8 v4480 = *(i8*)(intptr_t)v4479;
	i8 v4481 = (i8)(intptr_t)(f208_IsScalar);
	i1 v4482;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4481)(&v4482, v4480);
	i1 v4483 = (i1)+0;
	if (v4482==v4483) goto c02_03a8; else goto c02_03a7;

c02_03a7:;

	i8 v4484 = (i8)(intptr_t)(ws+3080);
	i8 v4485 = *(i8*)(intptr_t)v4484;
	i8 v4486 = v4485+(+42);
	i2 v4487 = *(i2*)(intptr_t)v4486;
	i1 v4488 = v4487;
	i8 v4489 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4489 = v4488;

	goto c02_03a4;

c02_03a8:;

c02_03a4:;

	i8 v4490 = (i8)(intptr_t)(ws+3072);
	i1 v4491 = *(i1*)(intptr_t)v4490;
	i8 v4492 = (i8)(intptr_t)(ws+3056);
	i8 v4493 = *(i8*)(intptr_t)v4492;
	i8 v4494 = (i8)(intptr_t)(f137_MidLoad);
	i8 v4495;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v4494)(&v4495, v4493, v4491);
	i8 v4496 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v4496 = v4495;

	i8 v4497 = (i8)(intptr_t)(ws+3080);
	i8 v4498 = *(i8*)(intptr_t)v4497;
	i8 v4499 = (i8)(intptr_t)(ws+3064);
	i8 v4500 = *(i8*)(intptr_t)v4499;
	i8 v4501 = v4500+(+16);
	*(i8*)(intptr_t)v4501 = v4498;

endsub:;
	*p4469 = *(i8*)(intptr_t)(ws+3064);
}
const i1 c02_s0048[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f56_Discard(i8 /* node */);

// UndoLValue workspace at ws+3056 length ws+17
void f211_UndoLValue(i8* p4502 /* address */, i8 p4503 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3056) = p4503; /*lvalue */

	i8 v4504 = (i8)(intptr_t)(ws+3056);
	i8 v4505 = *(i8*)(intptr_t)v4504;
	i8 v4506 = v4505+(+58);
	i1 v4507 = *(i1*)(intptr_t)v4506;
	i8 v4508 = (i8)(intptr_t)(ws+3072);
	*(i1*)(intptr_t)v4508 = v4507;

	i8 v4509 = (i8)(intptr_t)(ws+3072);
	i1 v4510 = *(i1*)(intptr_t)v4509;
	i1 v4511 = (i1)+45;
	if (v4510<v4511) goto c02_03ae; else goto c02_03b0;

c02_03b0:;

	i1 v4512 = (i1)+49;
	i8 v4513 = (i8)(intptr_t)(ws+3072);
	i1 v4514 = *(i1*)(intptr_t)v4513;
	if (v4512<v4514) goto c02_03ae; else goto c02_03af;

c02_03ae:;

	i8 v4515 = (i8)(intptr_t)c02_s0048;
	i8 v4516 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4516)(v4515);

	goto c02_03a9;

c02_03af:;

c02_03a9:;

	i8 v4517 = (i8)(intptr_t)(ws+3056);
	i8 v4518 = *(i8*)(intptr_t)v4517;
	i8 v4519 = v4518+(+24);
	i8 v4520 = *(i8*)(intptr_t)v4519;
	i8 v4521 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v4521 = v4520;

	i8 v4522 = (i8)+0;
	i8 v4523 = (i8)(intptr_t)(ws+3056);
	i8 v4524 = *(i8*)(intptr_t)v4523;
	i8 v4525 = v4524+(+24);
	*(i8*)(intptr_t)v4525 = v4522;

	i8 v4526 = (i8)(intptr_t)(ws+3056);
	i8 v4527 = *(i8*)(intptr_t)v4526;
	i8 v4528 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4528)(v4527);

endsub:;
	*p4502 = *(i8*)(intptr_t)(ws+3064);
}

// AllocLabel workspace at ws+3072 length ws+2
void f213_AllocLabel(i2* p4532 /* label */) {

	i8 v4533 = (i8)(intptr_t)(ws+48);
	i2 v4534 = *(i2*)(intptr_t)v4533;
	i8 v4535 = (i8)(intptr_t)(ws+3072);
	*(i2*)(intptr_t)v4535 = v4534;

	i8 v4536 = (i8)(intptr_t)(ws+48);
	i2 v4537 = *(i2*)(intptr_t)v4536;
	i2 v4538 = v4537+(+1);
	i8 v4539 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4539 = v4538;

endsub:;
	*p4532 = *(i2*)(intptr_t)(ws+3072);
}

// AllocSubrId workspace at ws+3008 length ws+2
void f214_AllocSubrId(i2* p4540 /* id */) {

	i8 v4541 = (i8)(intptr_t)(ws+50);
	i2 v4542 = *(i2*)(intptr_t)v4541;
	i8 v4543 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v4543 = v4542;

	i8 v4544 = (i8)(intptr_t)(ws+50);
	i2 v4545 = *(i2*)(intptr_t)v4544;
	i2 v4546 = v4545+(+1);
	i8 v4547 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4547 = v4546;

endsub:;
	*p4540 = *(i2*)(intptr_t)(ws+3008);
}

// FindConflictingRegisters workspace at ws+3184 length ws+16
void f215_FindConflictingRegisters(i1* p4548 /* conflicting */, i1 p4549 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4549; /*inreg */

	i1 v4550 = (i1)+0;
	i8 v4551 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4551 = v4550;

	i8 v4552 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4553 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4553 = v4552;

c02_03b3:;

	i8 v4554 = (i8)(intptr_t)(ws+3192);
	i8 v4555 = *(i8*)(intptr_t)v4554;
	i8 v4556 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4555==v4556) goto c02_03b6; else goto c02_03b5;

c02_03b5:;

	i8 v4557 = (i8)(intptr_t)(ws+3192);
	i8 v4558 = *(i8*)(intptr_t)v4557;
	i8 v4559 = v4558+(+8);
	i1 v4560 = *(i1*)(intptr_t)v4559;
	i8 v4561 = (i8)(intptr_t)(ws+3184);
	i1 v4562 = *(i1*)(intptr_t)v4561;
	i1 v4563 = v4560&v4562;
	i1 v4564 = (i1)+0;
	if (v4563==v4564) goto c02_03bb; else goto c02_03ba;

c02_03ba:;

	i8 v4565 = (i8)(intptr_t)(ws+3185);
	i1 v4566 = *(i1*)(intptr_t)v4565;
	i8 v4567 = (i8)(intptr_t)(ws+3192);
	i8 v4568 = *(i8*)(intptr_t)v4567;
	i8 v4569 = v4568+(+9);
	i1 v4570 = *(i1*)(intptr_t)v4569;
	i1 v4571 = v4566|v4570;
	i8 v4572 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4572 = v4571;

	goto c02_03b7;

c02_03bb:;

c02_03b7:;

	i8 v4573 = (i8)(intptr_t)(ws+3192);
	i8 v4574 = *(i8*)(intptr_t)v4573;
	i8 v4575 = v4574+(+16);
	i8 v4576 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4576 = v4575;

	goto c02_03b3;

c02_03b6:;

endsub:;
	*p4548 = *(i1*)(intptr_t)(ws+3185);
}

// FindCompatibleRegisters workspace at ws+3184 length ws+16
void f216_FindCompatibleRegisters(i1* p4577 /* compatible */, i1 p4578 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4578; /*inreg */

	i1 v4579 = (i1)-1;
	i8 v4580 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4580 = v4579;

	i8 v4581 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v4582 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4582 = v4581;

c02_03be:;

	i8 v4583 = (i8)(intptr_t)(ws+3192);
	i8 v4584 = *(i8*)(intptr_t)v4583;
	i8 v4585 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v4584==v4585) goto c02_03c1; else goto c02_03c0;

c02_03c0:;

	i8 v4586 = (i8)(intptr_t)(ws+3192);
	i8 v4587 = *(i8*)(intptr_t)v4586;
	i8 v4588 = v4587+(+8);
	i1 v4589 = *(i1*)(intptr_t)v4588;
	i8 v4590 = (i8)(intptr_t)(ws+3184);
	i1 v4591 = *(i1*)(intptr_t)v4590;
	i1 v4592 = v4589&v4591;
	i1 v4593 = (i1)+0;
	if (v4592==v4593) goto c02_03c6; else goto c02_03c5;

c02_03c5:;

	i8 v4594 = (i8)(intptr_t)(ws+3185);
	i1 v4595 = *(i1*)(intptr_t)v4594;
	i8 v4596 = (i8)(intptr_t)(ws+3192);
	i8 v4597 = *(i8*)(intptr_t)v4596;
	i8 v4598 = v4597+(+10);
	i1 v4599 = *(i1*)(intptr_t)v4598;
	i1 v4600 = v4595&v4599;
	i8 v4601 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4601 = v4600;

	goto c02_03c2;

c02_03c6:;

c02_03c2:;

	i8 v4602 = (i8)(intptr_t)(ws+3192);
	i8 v4603 = *(i8*)(intptr_t)v4602;
	i8 v4604 = v4603+(+16);
	i8 v4605 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v4605 = v4604;

	goto c02_03be;

c02_03c1:;

endsub:;
	*p4577 = *(i1*)(intptr_t)(ws+3185);
}

// FindFirst workspace at ws+3184 length ws+2
void f217_FindFirst(i1* p4606 /* outreg */, i1 p4607 /* inreg */) {
	*(i1*)(intptr_t)(ws+3184) = p4607; /*inreg */

	i1 v4608 = (i1)+1;
	i8 v4609 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4609 = v4608;

c02_03c9:;

	i8 v4610 = (i8)(intptr_t)(ws+3185);
	i1 v4611 = *(i1*)(intptr_t)v4610;
	i1 v4612 = (i1)+0;
	if (v4611==v4612) goto c02_03cc; else goto c02_03cb;

c02_03cb:;

	i8 v4613 = (i8)(intptr_t)(ws+3184);
	i1 v4614 = *(i1*)(intptr_t)v4613;
	i8 v4615 = (i8)(intptr_t)(ws+3185);
	i1 v4616 = *(i1*)(intptr_t)v4615;
	i1 v4617 = v4614&v4616;
	i1 v4618 = (i1)+0;
	if (v4617==v4618) goto c02_03d1; else goto c02_03d0;

c02_03d0:;

	goto endsub;

c02_03d1:;

c02_03cd:;

	i8 v4619 = (i8)(intptr_t)(ws+3185);
	i1 v4620 = *(i1*)(intptr_t)v4619;
	i1 v4621 = (i1)+1;
	i1 v4622 = ((i1)v4620)<<v4621;
	i8 v4623 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4623 = v4622;

	goto c02_03c9;

c02_03cc:;

	i1 v4624 = (i1)+0;
	i8 v4625 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v4625 = v4624;

endsub:;
	*p4606 = *(i1*)(intptr_t)(ws+3185);
}

// ArchAlignUp workspace at ws+3064 length ws+8
void f218_ArchAlignUp(i2* p4630 /* newvalue */, i1 p4631 /* alignment */, i2 p4632 /* value */) {
	*(i2*)(intptr_t)(ws+3064) = p4632; /*value */
	*(i1*)(intptr_t)(ws+3066) = p4631; /*alignment */

	i8 v4633 = (i8)(intptr_t)(ws+3066);
	i1 v4634 = *(i1*)(intptr_t)v4633;
	i1 v4635 = v4634+(-1);
	i2 v4636 = v4635;
	i8 v4637 = (i8)(intptr_t)(ws+3070);
	*(i2*)(intptr_t)v4637 = v4636;

	i8 v4638 = (i8)(intptr_t)(ws+3064);
	i2 v4639 = *(i2*)(intptr_t)v4638;
	i8 v4640 = (i8)(intptr_t)(ws+3070);
	i2 v4641 = *(i2*)(intptr_t)v4640;
	i2 v4642 = v4639+v4641;
	i8 v4643 = (i8)(intptr_t)(ws+3070);
	i2 v4644 = *(i2*)(intptr_t)v4643;
	i2 v4645 = ~v4644;
	i2 v4646 = v4642&v4645;
	i8 v4647 = (i8)(intptr_t)(ws+3068);
	*(i2*)(intptr_t)v4647 = v4646;

endsub:;
	*p4630 = *(i2*)(intptr_t)(ws+3068);
}
const i1 c02_s0049[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004a[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004b[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004c[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004d[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004e[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s004f[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0050[] = { 0x69,0x6e,0x74,0x38,0 };
	void f201_MakeNumberType(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0051[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
	void f199_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+2888 length ws+0
void f219_ArchInitTypes(void) {

	i1 v4648 = (i1)+8;
	i1 v4649 = (i1)+8;
	i1 v4650 = (i1)+0;
	i8 v4651 = (i8)(intptr_t)c02_s0049;
	i8 v4652 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4653;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4652)(&v4653, v4651, v4650, v4649, v4648);
	i8 v4654 = (i8)(intptr_t)(ws+992);
	*(i8*)(intptr_t)v4654 = v4653;

	i1 v4655 = (i1)+8;
	i1 v4656 = (i1)+8;
	i1 v4657 = (i1)+1;
	i8 v4658 = (i8)(intptr_t)c02_s004a;
	i8 v4659 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4660;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4659)(&v4660, v4658, v4657, v4656, v4655);
	i8 v4661 = (i8)(intptr_t)(ws+1000);
	*(i8*)(intptr_t)v4661 = v4660;

	i1 v4662 = (i1)+4;
	i1 v4663 = (i1)+4;
	i1 v4664 = (i1)+0;
	i8 v4665 = (i8)(intptr_t)c02_s004b;
	i8 v4666 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4667;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4666)(&v4667, v4665, v4664, v4663, v4662);
	i8 v4668 = (i8)(intptr_t)(ws+1008);
	*(i8*)(intptr_t)v4668 = v4667;

	i1 v4669 = (i1)+4;
	i1 v4670 = (i1)+4;
	i1 v4671 = (i1)+1;
	i8 v4672 = (i8)(intptr_t)c02_s004c;
	i8 v4673 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4674;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4673)(&v4674, v4672, v4671, v4670, v4669);
	i8 v4675 = (i8)(intptr_t)(ws+1016);
	*(i8*)(intptr_t)v4675 = v4674;

	i1 v4676 = (i1)+2;
	i1 v4677 = (i1)+2;
	i1 v4678 = (i1)+0;
	i8 v4679 = (i8)(intptr_t)c02_s004d;
	i8 v4680 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4681;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4680)(&v4681, v4679, v4678, v4677, v4676);
	i8 v4682 = (i8)(intptr_t)(ws+1024);
	*(i8*)(intptr_t)v4682 = v4681;

	i1 v4683 = (i1)+2;
	i1 v4684 = (i1)+2;
	i1 v4685 = (i1)+1;
	i8 v4686 = (i8)(intptr_t)c02_s004e;
	i8 v4687 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4688;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4687)(&v4688, v4686, v4685, v4684, v4683);
	i8 v4689 = (i8)(intptr_t)(ws+1032);
	*(i8*)(intptr_t)v4689 = v4688;

	i1 v4690 = (i1)+1;
	i1 v4691 = (i1)+1;
	i1 v4692 = (i1)+0;
	i8 v4693 = (i8)(intptr_t)c02_s004f;
	i8 v4694 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4695;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4694)(&v4695, v4693, v4692, v4691, v4690);
	i8 v4696 = (i8)(intptr_t)(ws+1040);
	*(i8*)(intptr_t)v4696 = v4695;

	i1 v4697 = (i1)+1;
	i1 v4698 = (i1)+1;
	i1 v4699 = (i1)+1;
	i8 v4700 = (i8)(intptr_t)c02_s0050;
	i8 v4701 = (i8)(intptr_t)(f201_MakeNumberType);
	i8 v4702;

	((void(*)(i8* /* symbol */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4701)(&v4702, v4700, v4699, v4698, v4697);
	i8 v4703 = (i8)(intptr_t)(ws+1048);
	*(i8*)(intptr_t)v4703 = v4702;

	i8 v4704 = (i8)(intptr_t)(ws+992);
	i8 v4705 = *(i8*)(intptr_t)v4704;
	i8 v4706 = (i8)(intptr_t)(ws+1056);
	*(i8*)(intptr_t)v4706 = v4705;

	i8 v4707 = (i8)(intptr_t)c02_s0051;
	i8 v4708 = (i8)(intptr_t)(ws+1056);
	i8 v4709 = *(i8*)(intptr_t)v4708;
	i8 v4710 = (i8)(intptr_t)(f199_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v4710)(v4709, v4707);

endsub:;
}

// ArchGuessIntType workspace at ws+3040 length ws+16
void f220_ArchGuessIntType(i8* p4711 /* symbol */, i4 p4712 /* max */, i4 p4713 /* min */) {
	*(i4*)(intptr_t)(ws+3040) = p4713; /*min */
	*(i4*)(intptr_t)(ws+3044) = p4712; /*max */

	i8 v4714 = (i8)(intptr_t)(ws+3040);
	i4 v4715 = *(i4*)(intptr_t)v4714;
	i4 v4716 = (i4)+0;
	if ((s4)v4715<(s4)v4716) goto c02_03d8; else goto c02_03d9;

c02_03d9:;

	i4 v4717 = (i4)+255;
	i8 v4718 = (i8)(intptr_t)(ws+3044);
	i4 v4719 = *(i4*)(intptr_t)v4718;
	if ((s4)v4717<(s4)v4719) goto c02_03d8; else goto c02_03d7;

c02_03d7:;

	i8 v4720 = (i8)(intptr_t)(ws+1040);
	i8 v4721 = *(i8*)(intptr_t)v4720;
	i8 v4722 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4722 = v4721;

	goto c02_03d2;

c02_03d8:;

	i8 v4723 = (i8)(intptr_t)(ws+3040);
	i4 v4724 = *(i4*)(intptr_t)v4723;
	i4 v4725 = (i4)-128;
	if ((s4)v4724<(s4)v4725) goto c02_03df; else goto c02_03e0;

c02_03e0:;

	i4 v4726 = (i4)+127;
	i8 v4727 = (i8)(intptr_t)(ws+3044);
	i4 v4728 = *(i4*)(intptr_t)v4727;
	if ((s4)v4726<(s4)v4728) goto c02_03df; else goto c02_03de;

c02_03de:;

	i8 v4729 = (i8)(intptr_t)(ws+1048);
	i8 v4730 = *(i8*)(intptr_t)v4729;
	i8 v4731 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4731 = v4730;

	goto c02_03d2;

c02_03df:;

	i8 v4732 = (i8)(intptr_t)(ws+3040);
	i4 v4733 = *(i4*)(intptr_t)v4732;
	i4 v4734 = (i4)+0;
	if ((s4)v4733<(s4)v4734) goto c02_03e6; else goto c02_03e7;

c02_03e7:;

	i4 v4735 = (i4)+65535;
	i8 v4736 = (i8)(intptr_t)(ws+3044);
	i4 v4737 = *(i4*)(intptr_t)v4736;
	if ((s4)v4735<(s4)v4737) goto c02_03e6; else goto c02_03e5;

c02_03e5:;

	i8 v4738 = (i8)(intptr_t)(ws+1024);
	i8 v4739 = *(i8*)(intptr_t)v4738;
	i8 v4740 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4740 = v4739;

	goto c02_03d2;

c02_03e6:;

	i8 v4741 = (i8)(intptr_t)(ws+3040);
	i4 v4742 = *(i4*)(intptr_t)v4741;
	i4 v4743 = (i4)-32768;
	if ((s4)v4742<(s4)v4743) goto c02_03ed; else goto c02_03ee;

c02_03ee:;

	i4 v4744 = (i4)+32767;
	i8 v4745 = (i8)(intptr_t)(ws+3044);
	i4 v4746 = *(i4*)(intptr_t)v4745;
	if ((s4)v4744<(s4)v4746) goto c02_03ed; else goto c02_03ec;

c02_03ec:;

	i8 v4747 = (i8)(intptr_t)(ws+1032);
	i8 v4748 = *(i8*)(intptr_t)v4747;
	i8 v4749 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4749 = v4748;

	goto c02_03d2;

c02_03ed:;

	i8 v4750 = (i8)(intptr_t)(ws+3040);
	i4 v4751 = *(i4*)(intptr_t)v4750;
	i4 v4752 = (i4)+0;
	if ((s4)v4751<(s4)v4752) goto c02_03f2; else goto c02_03f1;

c02_03f1:;

	i8 v4753 = (i8)(intptr_t)(ws+1008);
	i8 v4754 = *(i8*)(intptr_t)v4753;
	i8 v4755 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4755 = v4754;

	goto c02_03d2;

c02_03f2:;

	i8 v4756 = (i8)(intptr_t)(ws+1016);
	i8 v4757 = *(i8*)(intptr_t)v4756;
	i8 v4758 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4758 = v4757;

c02_03d2:;

endsub:;
	*p4711 = *(i8*)(intptr_t)(ws+3048);
}
	void f218_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3040 length ws+18
void f221_ArchInitVariable(i8 p4759 /* symbol */) {
	*(i8*)(intptr_t)(ws+3040) = p4759; /*symbol */

	i8 v4760 = (i8)(intptr_t)(ws+3040);
	i8 v4761 = *(i8*)(intptr_t)v4760;
	i8 v4762 = v4761+(+8);
	i8 v4763 = *(i8*)(intptr_t)v4762;
	i8 v4764 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v4764 = v4763;

	i8 v4765 = (i8)(intptr_t)(ws+3048);
	i8 v4766 = *(i8*)(intptr_t)v4765;
	i8 v4767 = v4766+(+74);
	i2 v4768 = *(i2*)(intptr_t)v4767;
	i8 v4769 = (i8)(intptr_t)(ws+3056);
	*(i2*)(intptr_t)v4769 = v4768;

	i8 v4770 = (i8)(intptr_t)(ws+3056);
	i2 v4771 = *(i2*)(intptr_t)v4770;
	i8 v4772 = (i8)(intptr_t)(ws+3040);
	i8 v4773 = *(i8*)(intptr_t)v4772;
	i8 v4774 = *(i8*)(intptr_t)v4773;
	i8 v4775 = v4774+(+41);
	i1 v4776 = *(i1*)(intptr_t)v4775;
	i8 v4777 = (i8)(intptr_t)(f218_ArchAlignUp);
	i2 v4778;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4777)(&v4778, v4776, v4771);
	i8 v4779 = (i8)(intptr_t)(ws+3056);
	*(i2*)(intptr_t)v4779 = v4778;

	i8 v4780 = (i8)(intptr_t)(ws+3056);
	i2 v4781 = *(i2*)(intptr_t)v4780;
	i8 v4782 = (i8)(intptr_t)(ws+3040);
	i8 v4783 = *(i8*)(intptr_t)v4782;
	i8 v4784 = v4783+(+32);
	*(i2*)(intptr_t)v4784 = v4781;

	i8 v4785 = (i8)(intptr_t)(ws+3056);
	i2 v4786 = *(i2*)(intptr_t)v4785;
	i8 v4787 = (i8)(intptr_t)(ws+3040);
	i8 v4788 = *(i8*)(intptr_t)v4787;
	i8 v4789 = *(i8*)(intptr_t)v4788;
	i8 v4790 = v4789+(+42);
	i2 v4791 = *(i2*)(intptr_t)v4790;
	i2 v4792 = v4786+v4791;
	i8 v4793 = (i8)(intptr_t)(ws+3048);
	i8 v4794 = *(i8*)(intptr_t)v4793;
	i8 v4795 = v4794+(+74);
	*(i2*)(intptr_t)v4795 = v4792;

endsub:;
}
	void f218_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3008 length ws+18
void f222_ArchInitMember(i2 p4796 /* position */, i8 p4797 /* member */, i8 p4798 /* containing */) {
	*(i8*)(intptr_t)(ws+3008) = p4798; /*containing */
	*(i8*)(intptr_t)(ws+3016) = p4797; /*member */
	*(i2*)(intptr_t)(ws+3024) = p4796; /*position */

	i8 v4799 = (i8)(intptr_t)(ws+3024);
	i2 v4800 = *(i2*)(intptr_t)v4799;
	i8 v4801 = (i8)(intptr_t)(ws+3016);
	i8 v4802 = *(i8*)(intptr_t)v4801;
	i8 v4803 = *(i8*)(intptr_t)v4802;
	i8 v4804 = v4803+(+41);
	i1 v4805 = *(i1*)(intptr_t)v4804;
	i8 v4806 = (i8)(intptr_t)(f218_ArchAlignUp);
	i2 v4807;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4806)(&v4807, v4805, v4800);
	i8 v4808 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v4808 = v4807;

	i8 v4809 = (i8)(intptr_t)(ws+3024);
	i2 v4810 = *(i2*)(intptr_t)v4809;
	i8 v4811 = (i8)(intptr_t)(ws+3016);
	i8 v4812 = *(i8*)(intptr_t)v4811;
	i8 v4813 = v4812+(+32);
	*(i2*)(intptr_t)v4813 = v4810;

	i8 v4814 = (i8)(intptr_t)(ws+3024);
	i2 v4815 = *(i2*)(intptr_t)v4814;
	i8 v4816 = (i8)(intptr_t)(ws+3016);
	i8 v4817 = *(i8*)(intptr_t)v4816;
	i8 v4818 = *(i8*)(intptr_t)v4817;
	i8 v4819 = v4818+(+42);
	i2 v4820 = *(i2*)(intptr_t)v4819;
	i2 v4821 = v4815+v4820;
	i8 v4822 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v4822 = v4821;

	i8 v4823 = (i8)(intptr_t)(ws+3008);
	i8 v4824 = *(i8*)(intptr_t)v4823;
	i8 v4825 = v4824+(+42);
	i2 v4826 = *(i2*)(intptr_t)v4825;
	i8 v4827 = (i8)(intptr_t)(ws+3024);
	i2 v4828 = *(i2*)(intptr_t)v4827;
	if (v4826<v4828) goto c02_03f6; else goto c02_03f7;

c02_03f6:;

	i8 v4829 = (i8)(intptr_t)(ws+3024);
	i2 v4830 = *(i2*)(intptr_t)v4829;
	i8 v4831 = (i8)(intptr_t)(ws+3008);
	i8 v4832 = *(i8*)(intptr_t)v4831;
	i8 v4833 = v4832+(+42);
	*(i2*)(intptr_t)v4833 = v4830;

	goto c02_03f3;

c02_03f7:;

c02_03f3:;

endsub:;
}
const i1 c02_s0052[] = { 0x28,0 };
	void f163_E(i8 /* text */);
const i1 c02_s0053[] = { 0x2c,0x20,0 };
	void f163_E(i8 /* text */);

// comma workspace at ws+3320 length ws+0
void f224_comma(void) {

	i8 v4839 = (i8)(intptr_t)(ws+3304);
	i1 v4840 = *(i1*)(intptr_t)v4839;
	i1 v4841 = (i1)+0;
	if (v4840==v4841) goto c02_03fb; else goto c02_03fc;

c02_03fb:;

	i8 v4842 = (i8)(intptr_t)c02_s0053;
	i8 v4843 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4843)(v4842);

	goto c02_03f8;

c02_03fc:;

c02_03f8:;

	i1 v4844 = (i1)+0;
	i8 v4845 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v4845 = v4844;

endsub:;
}
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f224_comma(void);
const i1 c02_s0054[] = { 0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0055[] = { 0x2a,0x20,0x2f,0x2a,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s0056[] = { 0x20,0x2a,0x2f,0 };
	void f163_E(i8 /* text */);
	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f224_comma(void);
const i1 c02_s0057[] = { 0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0058[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s0059[] = { 0x20,0x2a,0x2f,0 };
	void f163_E(i8 /* text */);
const i1 c02_s005a[] = { 0x76,0x6f,0x69,0x64,0 };
	void f163_E(i8 /* text */);
const i1 c02_s005b[] = { 0x29,0 };
	void f163_E(i8 /* text */);

// EmitFunctionSignature workspace at ws+3296 length ws+24
void f223_EmitFunctionSignature(i8 p4834 /* subr */) {
	*(i8*)(intptr_t)(ws+3296) = p4834; /*subr */

	i8 v4835 = (i8)(intptr_t)c02_s0052;
	i8 v4836 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4836)(v4835);

	i1 v4837 = (i1)+1;
	i8 v4838 = (i8)(intptr_t)(ws+3304);
	*(i1*)(intptr_t)v4838 = v4837;


	i1 v4846 = (i1)+0;
	i8 v4847 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4847 = v4846;

c02_03ff:;

	i8 v4848 = (i8)(intptr_t)(ws+3305);
	i1 v4849 = *(i1*)(intptr_t)v4848;
	i8 v4850 = (i8)(intptr_t)(ws+3296);
	i8 v4851 = *(i8*)(intptr_t)v4850;
	i8 v4852 = v4851+(+105);
	i1 v4853 = *(i1*)(intptr_t)v4852;
	if (v4849==v4853) goto c02_0402; else goto c02_0401;

c02_0401:;

	i8 v4854 = (i8)(intptr_t)(ws+3296);
	i8 v4855 = *(i8*)(intptr_t)v4854;
	i8 v4856 = (i8)(intptr_t)(ws+3305);
	i1 v4857 = *(i1*)(intptr_t)v4856;
	i8 v4858 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v4859;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4858)(&v4859, v4857, v4855);
	i8 v4860 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v4860 = v4859;

	i8 v4861 = (i8)(intptr_t)(f224_comma);

	((void(*)(void))(intptr_t)v4861)();

	i8 v4862 = (i8)(intptr_t)c02_s0054;
	i8 v4863 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4863)(v4862);

	i8 v4864 = (i8)(intptr_t)(ws+3312);
	i8 v4865 = *(i8*)(intptr_t)v4864;
	i8 v4866 = *(i8*)(intptr_t)v4865;
	i8 v4867 = v4866+(+42);
	i2 v4868 = *(i2*)(intptr_t)v4867;
	i1 v4869 = v4868;
	i8 v4870 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4870)(v4869);

	i8 v4871 = (i8)(intptr_t)c02_s0055;
	i8 v4872 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4872)(v4871);

	i8 v4873 = (i8)(intptr_t)(ws+3312);
	i8 v4874 = *(i8*)(intptr_t)v4873;
	i8 v4875 = v4874+(+48);
	i8 v4876 = *(i8*)(intptr_t)v4875;
	i8 v4877 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4877)(v4876);

	i8 v4878 = (i8)(intptr_t)c02_s0056;
	i8 v4879 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4879)(v4878);

	i8 v4880 = (i8)(intptr_t)(ws+3305);
	i1 v4881 = *(i1*)(intptr_t)v4880;
	i1 v4882 = v4881+(+1);
	i8 v4883 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4883 = v4882;

	goto c02_03ff;

c02_0402:;

	i8 v4884 = (i8)(intptr_t)(ws+3296);
	i8 v4885 = *(i8*)(intptr_t)v4884;
	i8 v4886 = v4885+(+104);
	i1 v4887 = *(i1*)(intptr_t)v4886;
	i8 v4888 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4888 = v4887;

c02_0405:;

	i8 v4889 = (i8)(intptr_t)(ws+3305);
	i1 v4890 = *(i1*)(intptr_t)v4889;
	i1 v4891 = (i1)+0;
	if (v4890==v4891) goto c02_0408; else goto c02_0407;

c02_0407:;

	i8 v4892 = (i8)(intptr_t)(ws+3305);
	i1 v4893 = *(i1*)(intptr_t)v4892;
	i1 v4894 = v4893+(-1);
	i8 v4895 = (i8)(intptr_t)(ws+3305);
	*(i1*)(intptr_t)v4895 = v4894;

	i8 v4896 = (i8)(intptr_t)(ws+3296);
	i8 v4897 = *(i8*)(intptr_t)v4896;
	i8 v4898 = (i8)(intptr_t)(ws+3305);
	i1 v4899 = *(i1*)(intptr_t)v4898;
	i8 v4900 = (i8)(intptr_t)(f84_GetInputParameter);
	i8 v4901;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v4900)(&v4901, v4899, v4897);
	i8 v4902 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v4902 = v4901;

	i8 v4903 = (i8)(intptr_t)(f224_comma);

	((void(*)(void))(intptr_t)v4903)();

	i8 v4904 = (i8)(intptr_t)c02_s0057;
	i8 v4905 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4905)(v4904);

	i8 v4906 = (i8)(intptr_t)(ws+3312);
	i8 v4907 = *(i8*)(intptr_t)v4906;
	i8 v4908 = *(i8*)(intptr_t)v4907;
	i8 v4909 = v4908+(+42);
	i2 v4910 = *(i2*)(intptr_t)v4909;
	i1 v4911 = v4910;
	i8 v4912 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v4912)(v4911);

	i8 v4913 = (i8)(intptr_t)c02_s0058;
	i8 v4914 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4914)(v4913);

	i8 v4915 = (i8)(intptr_t)(ws+3312);
	i8 v4916 = *(i8*)(intptr_t)v4915;
	i8 v4917 = v4916+(+48);
	i8 v4918 = *(i8*)(intptr_t)v4917;
	i8 v4919 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4919)(v4918);

	i8 v4920 = (i8)(intptr_t)c02_s0059;
	i8 v4921 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4921)(v4920);

	goto c02_0405;

c02_0408:;

	i8 v4922 = (i8)(intptr_t)(ws+3296);
	i8 v4923 = *(i8*)(intptr_t)v4922;
	i8 v4924 = v4923+(+104);
	i1 v4925 = *(i1*)(intptr_t)v4924;
	i8 v4926 = (i8)(intptr_t)(ws+3296);
	i8 v4927 = *(i8*)(intptr_t)v4926;
	i8 v4928 = v4927+(+105);
	i1 v4929 = *(i1*)(intptr_t)v4928;
	i1 v4930 = v4925+v4929;
	i1 v4931 = (i1)+0;
	if (v4930==v4931) goto c02_040c; else goto c02_040d;

c02_040c:;

	i8 v4932 = (i8)(intptr_t)c02_s005a;
	i8 v4933 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4933)(v4932);

	goto c02_0409;

c02_040d:;

c02_0409:;

	i8 v4934 = (i8)(intptr_t)c02_s005b;
	i8 v4935 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4935)(v4934);

endsub:;
}
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
const i1 c02_s005c[] = { 0x09,0x76,0x6f,0x69,0x64,0x20,0 };
	void f163_E(i8 /* text */);
	void f175_E_subref(i8 /* subr */);
	void f223_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s005d[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
	void f178_EmitterPopChunk(i1 /* type */);
	void f175_E_subref(i8 /* subr */);
const i1 c02_s005e[] = { 0x28,0x28,0x69,0x31,0x2a,0x29,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
	void f168_E_i16(i2 /* value */);
const i1 c02_s005f[] = { 0x29,0 };
	void f163_E(i8 /* text */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);

// E_symref workspace at ws+3280 length ws+10
void f225_E_symref(i2 p4936 /* off */, i8 p4937 /* sym */) {
	*(i8*)(intptr_t)(ws+3280) = p4937; /*sym */
	*(i2*)(intptr_t)(ws+3288) = p4936; /*off */

	i8 v4938 = (i8)(intptr_t)(ws+3280);
	i8 v4939 = *(i8*)(intptr_t)v4938;
	i8 v4940 = v4939+(+46);
	i1 v4941 = *(i1*)(intptr_t)v4940;

	if (v4941 != +25) goto c02_040f;

	i8 v4942 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v4942)();

	i8 v4943 = (i8)(intptr_t)(ws+40);
	i8 v4944 = *(i8*)(intptr_t)v4943;
	i8 v4945 = v4944+(+72);
	i2 v4946 = *(i2*)(intptr_t)v4945;
	i8 v4947 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4947)(v4946);

	i8 v4948 = (i8)(intptr_t)c02_s005c;
	i8 v4949 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4949)(v4948);

	i8 v4950 = (i8)(intptr_t)(ws+3280);
	i8 v4951 = *(i8*)(intptr_t)v4950;
	i8 v4952 = *(i8*)(intptr_t)v4951;
	i8 v4953 = (i8)(intptr_t)(f175_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v4953)(v4952);

	i8 v4954 = (i8)(intptr_t)(ws+3280);
	i8 v4955 = *(i8*)(intptr_t)v4954;
	i8 v4956 = *(i8*)(intptr_t)v4955;
	i8 v4957 = (i8)(intptr_t)(f223_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v4957)(v4956);

	i8 v4958 = (i8)(intptr_t)c02_s005d;
	i8 v4959 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4959)(v4958);

	i1 v4960 = (i1)+83;
	i8 v4961 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v4961)(v4960);

	i8 v4962 = (i8)(intptr_t)(ws+3280);
	i8 v4963 = *(i8*)(intptr_t)v4962;
	i8 v4964 = *(i8*)(intptr_t)v4963;
	i8 v4965 = (i8)(intptr_t)(f175_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v4965)(v4964);

	goto c02_040e;

c02_040f:;

	if (v4941 != +28) goto c02_0410;

	i8 v4966 = (i8)(intptr_t)(ws+3280);
	i8 v4967 = *(i8*)(intptr_t)v4966;
	i8 v4968 = v4967+(+24);
	i8 v4969 = *(i8*)(intptr_t)v4968;
	i8 v4970 = (i8)+0;
	if (v4969==v4970) goto c02_0415; else goto c02_0414;

c02_0414:;

	i8 v4971 = (i8)(intptr_t)c02_s005e;
	i8 v4972 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4972)(v4971);

	i8 v4973 = (i8)(intptr_t)(ws+3280);
	i8 v4974 = *(i8*)(intptr_t)v4973;
	i8 v4975 = v4974+(+24);
	i8 v4976 = *(i8*)(intptr_t)v4975;
	i8 v4977 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4977)(v4976);

	i8 v4978 = (i8)(intptr_t)(ws+3288);
	i2 v4979 = *(i2*)(intptr_t)v4978;
	i8 v4980 = (i8)(intptr_t)(f168_E_i16);

	((void(*)(i2 /* value */))(intptr_t)v4980)(v4979);

	i8 v4981 = (i8)(intptr_t)c02_s005f;
	i8 v4982 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v4982)(v4981);

	goto c02_0411;

c02_0415:;

	i1 v4983 = (i1)+2;
	i8 v4984 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4984)(v4983);

	i8 v4985 = (i8)(intptr_t)(ws+3280);
	i8 v4986 = *(i8*)(intptr_t)v4985;
	i8 v4987 = v4986+(+8);
	i8 v4988 = *(i8*)(intptr_t)v4987;
	i8 v4989 = v4988+(+72);
	i2 v4990 = *(i2*)(intptr_t)v4989;
	i8 v4991 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4991)(v4990);

	i1 v4992 = (i1)+0;
	i8 v4993 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4993)(v4992);

	i8 v4994 = (i8)(intptr_t)(ws+3280);
	i8 v4995 = *(i8*)(intptr_t)v4994;
	i8 v4996 = v4995+(+32);
	i2 v4997 = *(i2*)(intptr_t)v4996;
	i8 v4998 = (i8)(intptr_t)(ws+3288);
	i2 v4999 = *(i2*)(intptr_t)v4998;
	i2 v5000 = v4997+v4999;
	i8 v5001 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5001)(v5000);

c02_0411:;

c02_0410:;

c02_040e:;


endsub:;
}

// ArchEndInstruction workspace at ws+3168 length ws+0
void f226_ArchEndInstruction(void) {

endsub:;
}
	void f160_E_nl(void);

// ArchEndGroup workspace at ws+3160 length ws+0
void f227_ArchEndGroup(void) {

	i8 v5002 = (i8)(intptr_t)(f160_E_nl);

	((void(*)(void))(intptr_t)v5002)();

endsub:;
}
const i1 c02_s0060[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f61_SimpleError(i8 /* message */);

// PushVid workspace at ws+3296 length ws+2
void f228_PushVid(i2 p5003 /* vid */) {
	*(i2*)(intptr_t)(ws+3296) = p5003; /*vid */

	i8 v5004 = (i8)(intptr_t)(ws+1192);
	i1 v5005 = *(i1*)(intptr_t)v5004;
	i1 v5006 = (i1)+64;
	if (v5005==v5006) goto c02_0419; else goto c02_041a;

c02_0419:;

	i8 v5007 = (i8)(intptr_t)c02_s0060;
	i8 v5008 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5008)(v5007);

	goto c02_0416;

c02_041a:;

c02_0416:;

	i8 v5009 = (i8)(intptr_t)(ws+3296);
	i2 v5010 = *(i2*)(intptr_t)v5009;
	i8 v5011 = (i8)(intptr_t)(ws+1064);
	i8 v5012 = (i8)(intptr_t)(ws+1192);
	i1 v5013 = *(i1*)(intptr_t)v5012;
	i8 v5014 = v5013;
	i1 v5015 = (i1)+1;
	i8 v5016 = ((i8)v5014)<<v5015;
	i8 v5017 = v5011+v5016;
	*(i2*)(intptr_t)v5017 = v5010;

	i8 v5018 = (i8)(intptr_t)(ws+1192);
	i1 v5019 = *(i1*)(intptr_t)v5018;
	i1 v5020 = v5019+(+1);
	i8 v5021 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5021 = v5020;

endsub:;
}
	void f228_PushVid(i2 /* vid */);

// Push workspace at ws+3288 length ws+2
void f229_Push(i2* p5022 /* vid */) {

	i8 v5023 = (i8)(intptr_t)(ws+1194);
	i2 v5024 = *(i2*)(intptr_t)v5023;
	i8 v5025 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v5025 = v5024;

	i8 v5026 = (i8)(intptr_t)(ws+1194);
	i2 v5027 = *(i2*)(intptr_t)v5026;
	i2 v5028 = v5027+(+1);
	i8 v5029 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v5029 = v5028;

	i8 v5030 = (i8)(intptr_t)(ws+3288);
	i2 v5031 = *(i2*)(intptr_t)v5030;
	i8 v5032 = (i8)(intptr_t)(f228_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v5032)(v5031);

endsub:;
	*p5022 = *(i2*)(intptr_t)(ws+3288);
}
const i1 c02_s0061[] = { 0x76,0x61,0x72,0x73,0x74,0x61,0x63,0x6b,0x20,0x75,0x6e,0x64,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f61_SimpleError(i8 /* message */);

// CheckVarstackUnderflow workspace at ws+3296 length ws+0
void f230_CheckVarstackUnderflow(void) {

	i8 v5033 = (i8)(intptr_t)(ws+1192);
	i1 v5034 = *(i1*)(intptr_t)v5033;
	i1 v5035 = (i1)+0;
	if (v5034==v5035) goto c02_041e; else goto c02_041f;

c02_041e:;

	i8 v5036 = (i8)(intptr_t)c02_s0061;
	i8 v5037 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5037)(v5036);

	goto c02_041b;

c02_041f:;

c02_041b:;

endsub:;
}
	void f230_CheckVarstackUnderflow(void);

// Pop workspace at ws+3288 length ws+2
void f231_Pop(i2* p5038 /* vid */) {

	i8 v5039 = (i8)(intptr_t)(f230_CheckVarstackUnderflow);

	((void(*)(void))(intptr_t)v5039)();

	i8 v5040 = (i8)(intptr_t)(ws+1192);
	i1 v5041 = *(i1*)(intptr_t)v5040;
	i1 v5042 = v5041+(-1);
	i8 v5043 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v5043 = v5042;

	i8 v5044 = (i8)(intptr_t)(ws+1064);
	i8 v5045 = (i8)(intptr_t)(ws+1192);
	i1 v5046 = *(i1*)(intptr_t)v5045;
	i8 v5047 = v5046;
	i1 v5048 = (i1)+1;
	i8 v5049 = ((i8)v5047)<<v5048;
	i8 v5050 = v5044+v5049;
	i2 v5051 = *(i2*)(intptr_t)v5050;
	i8 v5052 = (i8)(intptr_t)(ws+3288);
	*(i2*)(intptr_t)v5052 = v5051;

endsub:;
	*p5038 = *(i2*)(intptr_t)(ws+3288);
}

// ArchEmitMove workspace at ws+3200 length ws+2
void f233_ArchEmitMove(i1 p5065 /* dest */, i1 p5066 /* src */) {
	*(i1*)(intptr_t)(ws+3200) = p5066; /*src */
	*(i1*)(intptr_t)(ws+3201) = p5065; /*dest */

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
const i1 c02_s0062[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0063[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0064[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
const i1 c02_s0065[] = { 0x0a,0x09,0x28,0x28,0x76,0x6f,0x69,0x64,0x28,0x2a,0x29,0 };
	void f163_E(i8 /* text */);
	void f223_EmitFunctionSignature(i8 /* subr */);
const i1 c02_s0066[] = { 0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0067[] = { 0x29,0x28,0 };
	void f163_E(i8 /* text */);
const i1 c02_s0068[] = { 0x2c,0x20,0 };
	void f163_E(i8 /* text */);

// comma workspace at ws+3288 length ws+0
void f235_comma(void) {

	i8 v5136 = (i8)(intptr_t)(ws+3280);
	i1 v5137 = *(i1*)(intptr_t)v5136;
	i1 v5138 = (i1)+0;
	if (v5137==v5138) goto c02_0429; else goto c02_042a;

c02_0429:;

	i8 v5139 = (i8)(intptr_t)c02_s0068;
	i8 v5140 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5140)(v5139);

	goto c02_0426;

c02_042a:;

c02_0426:;

	i1 v5141 = (i1)+0;
	i8 v5142 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v5142 = v5141;

endsub:;
}
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f235_comma(void);
const i1 c02_s0069[] = { 0x26,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f231_Pop(i2* /* vid */);
	void f235_comma(void);
const i1 c02_s006a[] = { 0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s006b[] = { 0x29,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
	void f228_PushVid(i2 /* vid */);

// Call workspace at ws+3256 length ws+28
void f234_Call(i8 p5067 /* subr */) {
	*(i8*)(intptr_t)(ws+3256) = p5067; /*subr */

	i8 v5068 = (i8)(intptr_t)(f231_Pop);
	i2 v5069;

	((void(*)(i2* /* vid */))(intptr_t)v5068)(&v5069);
	i8 v5070 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5070 = v5069;

	i8 v5071 = (i8)(intptr_t)(ws+1194);
	i2 v5072 = *(i2*)(intptr_t)v5071;
	i8 v5073 = (i8)(intptr_t)(ws+3266);
	*(i2*)(intptr_t)v5073 = v5072;

	i8 v5074 = (i8)(intptr_t)(ws+1194);
	i2 v5075 = *(i2*)(intptr_t)v5074;
	i8 v5076 = (i8)(intptr_t)(ws+3256);
	i8 v5077 = *(i8*)(intptr_t)v5076;
	i8 v5078 = v5077+(+105);
	i1 v5079 = *(i1*)(intptr_t)v5078;
	i2 v5080 = v5079;
	i2 v5081 = v5075+v5080;
	i8 v5082 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v5082 = v5081;

	i1 v5083 = (i1)+0;
	i8 v5084 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5084 = v5083;

c02_0422:;

	i8 v5085 = (i8)(intptr_t)(ws+3268);
	i1 v5086 = *(i1*)(intptr_t)v5085;
	i8 v5087 = (i8)(intptr_t)(ws+3256);
	i8 v5088 = *(i8*)(intptr_t)v5087;
	i8 v5089 = v5088+(+105);
	i1 v5090 = *(i1*)(intptr_t)v5089;
	if (v5086==v5090) goto c02_0425; else goto c02_0424;

c02_0424:;

	i8 v5091 = (i8)(intptr_t)(ws+3256);
	i8 v5092 = *(i8*)(intptr_t)v5091;
	i8 v5093 = (i8)(intptr_t)(ws+3268);
	i1 v5094 = *(i1*)(intptr_t)v5093;
	i8 v5095 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v5096;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5095)(&v5096, v5094, v5092);
	i8 v5097 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5097 = v5096;

	i8 v5098 = (i8)(intptr_t)c02_s0062;
	i8 v5099 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5099)(v5098);

	i8 v5100 = (i8)(intptr_t)(ws+3272);
	i8 v5101 = *(i8*)(intptr_t)v5100;
	i8 v5102 = *(i8*)(intptr_t)v5101;
	i8 v5103 = v5102+(+42);
	i2 v5104 = *(i2*)(intptr_t)v5103;
	i1 v5105 = v5104;
	i8 v5106 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5106)(v5105);

	i8 v5107 = (i8)(intptr_t)c02_s0063;
	i8 v5108 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5108)(v5107);

	i8 v5109 = (i8)(intptr_t)(ws+3266);
	i2 v5110 = *(i2*)(intptr_t)v5109;
	i8 v5111 = (i8)(intptr_t)(ws+3268);
	i1 v5112 = *(i1*)(intptr_t)v5111;
	i2 v5113 = v5112;
	i2 v5114 = v5110+v5113;
	i8 v5115 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5115)(v5114);

	i8 v5116 = (i8)(intptr_t)c02_s0064;
	i8 v5117 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5117)(v5116);

	i8 v5118 = (i8)(intptr_t)(ws+3268);
	i1 v5119 = *(i1*)(intptr_t)v5118;
	i1 v5120 = v5119+(+1);
	i8 v5121 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5121 = v5120;

	goto c02_0422;

c02_0425:;

	i8 v5122 = (i8)(intptr_t)c02_s0065;
	i8 v5123 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5123)(v5122);

	i8 v5124 = (i8)(intptr_t)(ws+3256);
	i8 v5125 = *(i8*)(intptr_t)v5124;
	i8 v5126 = (i8)(intptr_t)(f223_EmitFunctionSignature);

	((void(*)(i8 /* subr */))(intptr_t)v5126)(v5125);

	i8 v5127 = (i8)(intptr_t)c02_s0066;
	i8 v5128 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5128)(v5127);

	i8 v5129 = (i8)(intptr_t)(ws+3264);
	i2 v5130 = *(i2*)(intptr_t)v5129;
	i8 v5131 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5131)(v5130);

	i8 v5132 = (i8)(intptr_t)c02_s0067;
	i8 v5133 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5133)(v5132);

	i1 v5134 = (i1)+1;
	i8 v5135 = (i8)(intptr_t)(ws+3280);
	*(i1*)(intptr_t)v5135 = v5134;


	i1 v5143 = (i1)+0;
	i8 v5144 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5144 = v5143;

c02_042d:;

	i8 v5145 = (i8)(intptr_t)(ws+3268);
	i1 v5146 = *(i1*)(intptr_t)v5145;
	i8 v5147 = (i8)(intptr_t)(ws+3256);
	i8 v5148 = *(i8*)(intptr_t)v5147;
	i8 v5149 = v5148+(+105);
	i1 v5150 = *(i1*)(intptr_t)v5149;
	if (v5146==v5150) goto c02_0430; else goto c02_042f;

c02_042f:;

	i8 v5151 = (i8)(intptr_t)(ws+3256);
	i8 v5152 = *(i8*)(intptr_t)v5151;
	i8 v5153 = (i8)(intptr_t)(ws+3268);
	i1 v5154 = *(i1*)(intptr_t)v5153;
	i8 v5155 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v5156;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5155)(&v5156, v5154, v5152);
	i8 v5157 = (i8)(intptr_t)(ws+3272);
	*(i8*)(intptr_t)v5157 = v5156;

	i8 v5158 = (i8)(intptr_t)(f235_comma);

	((void(*)(void))(intptr_t)v5158)();

	i8 v5159 = (i8)(intptr_t)c02_s0069;
	i8 v5160 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5160)(v5159);

	i8 v5161 = (i8)(intptr_t)(ws+3266);
	i2 v5162 = *(i2*)(intptr_t)v5161;
	i8 v5163 = (i8)(intptr_t)(ws+3268);
	i1 v5164 = *(i1*)(intptr_t)v5163;
	i2 v5165 = v5164;
	i2 v5166 = v5162+v5165;
	i8 v5167 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5167)(v5166);

	i8 v5168 = (i8)(intptr_t)(ws+3268);
	i1 v5169 = *(i1*)(intptr_t)v5168;
	i1 v5170 = v5169+(+1);
	i8 v5171 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5171 = v5170;

	goto c02_042d;

c02_0430:;

	i1 v5172 = (i1)+0;
	i8 v5173 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5173 = v5172;

c02_0433:;

	i8 v5174 = (i8)(intptr_t)(ws+3268);
	i1 v5175 = *(i1*)(intptr_t)v5174;
	i8 v5176 = (i8)(intptr_t)(ws+3256);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i8 v5178 = v5177+(+104);
	i1 v5179 = *(i1*)(intptr_t)v5178;
	if (v5175==v5179) goto c02_0436; else goto c02_0435;

c02_0435:;

	i8 v5180 = (i8)(intptr_t)(f231_Pop);
	i2 v5181;

	((void(*)(i2* /* vid */))(intptr_t)v5180)(&v5181);
	i8 v5182 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5182 = v5181;

	i8 v5183 = (i8)(intptr_t)(f235_comma);

	((void(*)(void))(intptr_t)v5183)();

	i8 v5184 = (i8)(intptr_t)c02_s006a;
	i8 v5185 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5185)(v5184);

	i8 v5186 = (i8)(intptr_t)(ws+3282);
	i2 v5187 = *(i2*)(intptr_t)v5186;
	i8 v5188 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5188)(v5187);

	i8 v5189 = (i8)(intptr_t)(ws+3268);
	i1 v5190 = *(i1*)(intptr_t)v5189;
	i1 v5191 = v5190+(+1);
	i8 v5192 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5192 = v5191;

	goto c02_0433;

c02_0436:;

	i8 v5193 = (i8)(intptr_t)c02_s006b;
	i8 v5194 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5194)(v5193);

	i1 v5195 = (i1)+0;
	i8 v5196 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5196 = v5195;

c02_0439:;

	i8 v5197 = (i8)(intptr_t)(ws+3268);
	i1 v5198 = *(i1*)(intptr_t)v5197;
	i8 v5199 = (i8)(intptr_t)(ws+3256);
	i8 v5200 = *(i8*)(intptr_t)v5199;
	i8 v5201 = v5200+(+105);
	i1 v5202 = *(i1*)(intptr_t)v5201;
	if (v5198==v5202) goto c02_043c; else goto c02_043b;

c02_043b:;

	i8 v5203 = (i8)(intptr_t)(ws+3266);
	i2 v5204 = *(i2*)(intptr_t)v5203;
	i8 v5205 = (i8)(intptr_t)(ws+3268);
	i1 v5206 = *(i1*)(intptr_t)v5205;
	i2 v5207 = v5206;
	i2 v5208 = v5204+v5207;
	i8 v5209 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5209 = v5208;

	i8 v5210 = (i8)(intptr_t)(ws+3282);
	i2 v5211 = *(i2*)(intptr_t)v5210;
	i8 v5212 = (i8)(intptr_t)(f228_PushVid);

	((void(*)(i2 /* vid */))(intptr_t)v5212)(v5211);

	i8 v5213 = (i8)(intptr_t)(ws+3268);
	i1 v5214 = *(i1*)(intptr_t)v5213;
	i1 v5215 = v5214+(+1);
	i8 v5216 = (i8)(intptr_t)(ws+3268);
	*(i1*)(intptr_t)v5216 = v5215;

	goto c02_0439;

c02_043c:;

endsub:;
}
	void f229_Push(i2* /* vid */);
const i1 c02_s006c[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s006d[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s006e[] = { 0x20,0x3d,0x20,0x28,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s006f[] = { 0x29,0 };
	void f163_E(i8 /* text */);
	void f169_E_i32(i4 /* value */);
const i1 c02_s0070[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// LoadConstant workspace at ws+3256 length ws+10
void f236_LoadConstant(i4 p5217 /* value */, i1 p5218 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5218; /*width */
	*(i4*)(intptr_t)(ws+3260) = p5217; /*value */

	i8 v5219 = (i8)(intptr_t)(f229_Push);
	i2 v5220;

	((void(*)(i2* /* vid */))(intptr_t)v5219)(&v5220);
	i8 v5221 = (i8)(intptr_t)(ws+3264);
	*(i2*)(intptr_t)v5221 = v5220;

	i8 v5222 = (i8)(intptr_t)c02_s006c;
	i8 v5223 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5223)(v5222);

	i8 v5224 = (i8)(intptr_t)(ws+3256);
	i1 v5225 = *(i1*)(intptr_t)v5224;
	i8 v5226 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5226)(v5225);

	i8 v5227 = (i8)(intptr_t)c02_s006d;
	i8 v5228 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5228)(v5227);

	i8 v5229 = (i8)(intptr_t)(ws+3264);
	i2 v5230 = *(i2*)(intptr_t)v5229;
	i8 v5231 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5231)(v5230);

	i8 v5232 = (i8)(intptr_t)c02_s006e;
	i8 v5233 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5233)(v5232);

	i8 v5234 = (i8)(intptr_t)(ws+3256);
	i1 v5235 = *(i1*)(intptr_t)v5234;
	i8 v5236 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5236)(v5235);

	i8 v5237 = (i8)(intptr_t)c02_s006f;
	i8 v5238 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5238)(v5237);

	i8 v5239 = (i8)(intptr_t)(ws+3260);
	i4 v5240 = *(i4*)(intptr_t)v5239;
	i8 v5241 = (i8)(intptr_t)(f169_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5241)(v5240);

	i8 v5242 = (i8)(intptr_t)c02_s0070;
	i8 v5243 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5243)(v5242);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f231_Pop(i2* /* vid */);
const i1 c02_s0071[] = { 0x09,0x2a,0x28,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0072[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0073[] = { 0x20,0x3d,0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0074[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// StoreVV workspace at ws+3256 length ws+6
void f237_StoreVV(i1 p5244 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5244; /*width */

	i8 v5245 = (i8)(intptr_t)(f231_Pop);
	i2 v5246;

	((void(*)(i2* /* vid */))(intptr_t)v5245)(&v5246);
	i8 v5247 = (i8)(intptr_t)(ws+3258);
	*(i2*)(intptr_t)v5247 = v5246;

	i8 v5248 = (i8)(intptr_t)(f231_Pop);
	i2 v5249;

	((void(*)(i2* /* vid */))(intptr_t)v5248)(&v5249);
	i8 v5250 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v5250 = v5249;

	i8 v5251 = (i8)(intptr_t)c02_s0071;
	i8 v5252 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5252)(v5251);

	i8 v5253 = (i8)(intptr_t)(ws+3256);
	i1 v5254 = *(i1*)(intptr_t)v5253;
	i8 v5255 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5255)(v5254);

	i8 v5256 = (i8)(intptr_t)c02_s0072;
	i8 v5257 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5257)(v5256);

	i8 v5258 = (i8)(intptr_t)(ws+3258);
	i2 v5259 = *(i2*)(intptr_t)v5258;
	i8 v5260 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5260)(v5259);

	i8 v5261 = (i8)(intptr_t)c02_s0073;
	i8 v5262 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5262)(v5261);

	i8 v5263 = (i8)(intptr_t)(ws+3260);
	i2 v5264 = *(i2*)(intptr_t)v5263;
	i8 v5265 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5265)(v5264);

	i8 v5266 = (i8)(intptr_t)c02_s0074;
	i8 v5267 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5267)(v5266);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s0075[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0076[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0077[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0078[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0079[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// LoadVV workspace at ws+3256 length ws+6
void f238_LoadVV(i1 p5268 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5268; /*width */

	i8 v5269 = (i8)(intptr_t)(f231_Pop);
	i2 v5270;

	((void(*)(i2* /* vid */))(intptr_t)v5269)(&v5270);
	i8 v5271 = (i8)(intptr_t)(ws+3258);
	*(i2*)(intptr_t)v5271 = v5270;

	i8 v5272 = (i8)(intptr_t)(f229_Push);
	i2 v5273;

	((void(*)(i2* /* vid */))(intptr_t)v5272)(&v5273);
	i8 v5274 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v5274 = v5273;

	i8 v5275 = (i8)(intptr_t)c02_s0075;
	i8 v5276 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5276)(v5275);

	i8 v5277 = (i8)(intptr_t)(ws+3256);
	i1 v5278 = *(i1*)(intptr_t)v5277;
	i8 v5279 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5279)(v5278);

	i8 v5280 = (i8)(intptr_t)c02_s0076;
	i8 v5281 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5281)(v5280);

	i8 v5282 = (i8)(intptr_t)(ws+3260);
	i2 v5283 = *(i2*)(intptr_t)v5282;
	i8 v5284 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5284)(v5283);

	i8 v5285 = (i8)(intptr_t)c02_s0077;
	i8 v5286 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5286)(v5285);

	i8 v5287 = (i8)(intptr_t)(ws+3256);
	i1 v5288 = *(i1*)(intptr_t)v5287;
	i8 v5289 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5289)(v5288);

	i8 v5290 = (i8)(intptr_t)c02_s0078;
	i8 v5291 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5291)(v5290);

	i8 v5292 = (i8)(intptr_t)(ws+3258);
	i2 v5293 = *(i2*)(intptr_t)v5292;
	i8 v5294 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5294)(v5293);

	i8 v5295 = (i8)(intptr_t)c02_s0079;
	i8 v5296 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5296)(v5295);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s007a[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s007b[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s007c[] = { 0x20,0x3d,0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f163_E(i8 /* text */);
const i1 c02_s007d[] = { 0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s007e[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Op2VV workspace at ws+3256 length ws+22
void f239_Op2VV(i8 p5297 /* op */, i1 p5298 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5298; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5297; /*op */

	i8 v5299 = (i8)(intptr_t)(f231_Pop);
	i2 v5300;

	((void(*)(i2* /* vid */))(intptr_t)v5299)(&v5300);
	i8 v5301 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5301 = v5300;

	i8 v5302 = (i8)(intptr_t)(f231_Pop);
	i2 v5303;

	((void(*)(i2* /* vid */))(intptr_t)v5302)(&v5303);
	i8 v5304 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5304 = v5303;

	i8 v5305 = (i8)(intptr_t)(f229_Push);
	i2 v5306;

	((void(*)(i2* /* vid */))(intptr_t)v5305)(&v5306);
	i8 v5307 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5307 = v5306;

	i8 v5308 = (i8)(intptr_t)c02_s007a;
	i8 v5309 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5309)(v5308);

	i8 v5310 = (i8)(intptr_t)(ws+3256);
	i1 v5311 = *(i1*)(intptr_t)v5310;
	i8 v5312 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5312)(v5311);

	i8 v5313 = (i8)(intptr_t)c02_s007b;
	i8 v5314 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5314)(v5313);

	i8 v5315 = (i8)(intptr_t)(ws+3276);
	i2 v5316 = *(i2*)(intptr_t)v5315;
	i8 v5317 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5317)(v5316);

	i8 v5318 = (i8)(intptr_t)c02_s007c;
	i8 v5319 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5319)(v5318);

	i8 v5320 = (i8)(intptr_t)(ws+3274);
	i2 v5321 = *(i2*)(intptr_t)v5320;
	i8 v5322 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5322)(v5321);

	i8 v5323 = (i8)(intptr_t)(ws+3264);
	i8 v5324 = *(i8*)(intptr_t)v5323;
	i8 v5325 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5325)(v5324);

	i8 v5326 = (i8)(intptr_t)c02_s007d;
	i8 v5327 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5327)(v5326);

	i8 v5328 = (i8)(intptr_t)(ws+3272);
	i2 v5329 = *(i2*)(intptr_t)v5328;
	i8 v5330 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5330)(v5329);

	i8 v5331 = (i8)(intptr_t)c02_s007e;
	i8 v5332 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5332)(v5331);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s007f[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0080[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0081[] = { 0x20,0x3d,0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f163_E(i8 /* text */);
const i1 c02_s0082[] = { 0x28,0 };
	void f163_E(i8 /* text */);
	void f169_E_i32(i4 /* value */);
const i1 c02_s0083[] = { 0x29,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Op2VC workspace at ws+3256 length ws+24
void f240_Op2VC(i4 p5333 /* rhs */, i8 p5334 /* op */, i1 p5335 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5335; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5334; /*op */
	*(i4*)(intptr_t)(ws+3272) = p5333; /*rhs */

	i8 v5336 = (i8)(intptr_t)(f231_Pop);
	i2 v5337;

	((void(*)(i2* /* vid */))(intptr_t)v5336)(&v5337);
	i8 v5338 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5338 = v5337;

	i8 v5339 = (i8)(intptr_t)(f229_Push);
	i2 v5340;

	((void(*)(i2* /* vid */))(intptr_t)v5339)(&v5340);
	i8 v5341 = (i8)(intptr_t)(ws+3278);
	*(i2*)(intptr_t)v5341 = v5340;

	i8 v5342 = (i8)(intptr_t)c02_s007f;
	i8 v5343 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5343)(v5342);

	i8 v5344 = (i8)(intptr_t)(ws+3256);
	i1 v5345 = *(i1*)(intptr_t)v5344;
	i8 v5346 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5346)(v5345);

	i8 v5347 = (i8)(intptr_t)c02_s0080;
	i8 v5348 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5348)(v5347);

	i8 v5349 = (i8)(intptr_t)(ws+3278);
	i2 v5350 = *(i2*)(intptr_t)v5349;
	i8 v5351 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5351)(v5350);

	i8 v5352 = (i8)(intptr_t)c02_s0081;
	i8 v5353 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5353)(v5352);

	i8 v5354 = (i8)(intptr_t)(ws+3276);
	i2 v5355 = *(i2*)(intptr_t)v5354;
	i8 v5356 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5356)(v5355);

	i8 v5357 = (i8)(intptr_t)(ws+3264);
	i8 v5358 = *(i8*)(intptr_t)v5357;
	i8 v5359 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5359)(v5358);

	i8 v5360 = (i8)(intptr_t)c02_s0082;
	i8 v5361 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5361)(v5360);

	i8 v5362 = (i8)(intptr_t)(ws+3272);
	i4 v5363 = *(i4*)(intptr_t)v5362;
	i8 v5364 = (i8)(intptr_t)(f169_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5364)(v5363);

	i8 v5365 = (i8)(intptr_t)c02_s0083;
	i8 v5366 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5366)(v5365);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s0084[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0085[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0086[] = { 0x20,0x3d,0x20,0x28,0x73,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0087[] = { 0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f163_E(i8 /* text */);
const i1 c02_s0088[] = { 0x28,0x73,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0089[] = { 0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s008a[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Op2VVSigned workspace at ws+3256 length ws+22
void f241_Op2VVSigned(i8 p5367 /* op */, i1 p5368 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5368; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5367; /*op */

	i8 v5369 = (i8)(intptr_t)(f231_Pop);
	i2 v5370;

	((void(*)(i2* /* vid */))(intptr_t)v5369)(&v5370);
	i8 v5371 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5371 = v5370;

	i8 v5372 = (i8)(intptr_t)(f231_Pop);
	i2 v5373;

	((void(*)(i2* /* vid */))(intptr_t)v5372)(&v5373);
	i8 v5374 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5374 = v5373;

	i8 v5375 = (i8)(intptr_t)(f229_Push);
	i2 v5376;

	((void(*)(i2* /* vid */))(intptr_t)v5375)(&v5376);
	i8 v5377 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5377 = v5376;

	i8 v5378 = (i8)(intptr_t)c02_s0084;
	i8 v5379 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5379)(v5378);

	i8 v5380 = (i8)(intptr_t)(ws+3256);
	i1 v5381 = *(i1*)(intptr_t)v5380;
	i8 v5382 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5382)(v5381);

	i8 v5383 = (i8)(intptr_t)c02_s0085;
	i8 v5384 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5384)(v5383);

	i8 v5385 = (i8)(intptr_t)(ws+3276);
	i2 v5386 = *(i2*)(intptr_t)v5385;
	i8 v5387 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5387)(v5386);

	i8 v5388 = (i8)(intptr_t)c02_s0086;
	i8 v5389 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5389)(v5388);

	i8 v5390 = (i8)(intptr_t)(ws+3256);
	i1 v5391 = *(i1*)(intptr_t)v5390;
	i8 v5392 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5392)(v5391);

	i8 v5393 = (i8)(intptr_t)c02_s0087;
	i8 v5394 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5394)(v5393);

	i8 v5395 = (i8)(intptr_t)(ws+3274);
	i2 v5396 = *(i2*)(intptr_t)v5395;
	i8 v5397 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5397)(v5396);

	i8 v5398 = (i8)(intptr_t)(ws+3264);
	i8 v5399 = *(i8*)(intptr_t)v5398;
	i8 v5400 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5400)(v5399);

	i8 v5401 = (i8)(intptr_t)c02_s0088;
	i8 v5402 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5402)(v5401);

	i8 v5403 = (i8)(intptr_t)(ws+3256);
	i1 v5404 = *(i1*)(intptr_t)v5403;
	i8 v5405 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5405)(v5404);

	i8 v5406 = (i8)(intptr_t)c02_s0089;
	i8 v5407 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5407)(v5406);

	i8 v5408 = (i8)(intptr_t)(ws+3272);
	i2 v5409 = *(i2*)(intptr_t)v5408;
	i8 v5410 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5410)(v5409);

	i8 v5411 = (i8)(intptr_t)c02_s008a;
	i8 v5412 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5412)(v5411);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s008b[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s008c[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s008d[] = { 0x20,0x3d,0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f163_E(i8 /* text */);
const i1 c02_s008e[] = { 0x28,0 };
	void f163_E(i8 /* text */);
	void f169_E_i32(i4 /* value */);
const i1 c02_s008f[] = { 0x29,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Op2VCSigned workspace at ws+3256 length ws+24
void f242_Op2VCSigned(i4 p5413 /* rhs */, i8 p5414 /* op */, i1 p5415 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5415; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5414; /*op */
	*(i4*)(intptr_t)(ws+3272) = p5413; /*rhs */

	i8 v5416 = (i8)(intptr_t)(f231_Pop);
	i2 v5417;

	((void(*)(i2* /* vid */))(intptr_t)v5416)(&v5417);
	i8 v5418 = (i8)(intptr_t)(ws+3276);
	*(i2*)(intptr_t)v5418 = v5417;

	i8 v5419 = (i8)(intptr_t)(f229_Push);
	i2 v5420;

	((void(*)(i2* /* vid */))(intptr_t)v5419)(&v5420);
	i8 v5421 = (i8)(intptr_t)(ws+3278);
	*(i2*)(intptr_t)v5421 = v5420;

	i8 v5422 = (i8)(intptr_t)c02_s008b;
	i8 v5423 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5423)(v5422);

	i8 v5424 = (i8)(intptr_t)(ws+3256);
	i1 v5425 = *(i1*)(intptr_t)v5424;
	i8 v5426 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5426)(v5425);

	i8 v5427 = (i8)(intptr_t)c02_s008c;
	i8 v5428 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5428)(v5427);

	i8 v5429 = (i8)(intptr_t)(ws+3278);
	i2 v5430 = *(i2*)(intptr_t)v5429;
	i8 v5431 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5431)(v5430);

	i8 v5432 = (i8)(intptr_t)c02_s008d;
	i8 v5433 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5433)(v5432);

	i8 v5434 = (i8)(intptr_t)(ws+3276);
	i2 v5435 = *(i2*)(intptr_t)v5434;
	i8 v5436 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5436)(v5435);

	i8 v5437 = (i8)(intptr_t)(ws+3264);
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i8 v5439 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5439)(v5438);

	i8 v5440 = (i8)(intptr_t)c02_s008e;
	i8 v5441 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5441)(v5440);

	i8 v5442 = (i8)(intptr_t)(ws+3272);
	i4 v5443 = *(i4*)(intptr_t)v5442;
	i8 v5444 = (i8)(intptr_t)(f169_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5444)(v5443);

	i8 v5445 = (i8)(intptr_t)c02_s008f;
	i8 v5446 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5446)(v5445);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s0090[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0091[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0092[] = { 0x20,0x3d,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s0093[] = { 0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0094[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Op1V workspace at ws+3256 length ws+20
void f243_Op1V(i8 p5447 /* op */, i1 p5448 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5448; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5447; /*op */

	i8 v5449 = (i8)(intptr_t)(f231_Pop);
	i2 v5450;

	((void(*)(i2* /* vid */))(intptr_t)v5449)(&v5450);
	i8 v5451 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5451 = v5450;

	i8 v5452 = (i8)(intptr_t)(f229_Push);
	i2 v5453;

	((void(*)(i2* /* vid */))(intptr_t)v5452)(&v5453);
	i8 v5454 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5454 = v5453;

	i8 v5455 = (i8)(intptr_t)c02_s0090;
	i8 v5456 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5456)(v5455);

	i8 v5457 = (i8)(intptr_t)(ws+3256);
	i1 v5458 = *(i1*)(intptr_t)v5457;
	i8 v5459 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5459)(v5458);

	i8 v5460 = (i8)(intptr_t)c02_s0091;
	i8 v5461 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5461)(v5460);

	i8 v5462 = (i8)(intptr_t)(ws+3274);
	i2 v5463 = *(i2*)(intptr_t)v5462;
	i8 v5464 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5464)(v5463);

	i8 v5465 = (i8)(intptr_t)c02_s0092;
	i8 v5466 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5466)(v5465);

	i8 v5467 = (i8)(intptr_t)(ws+3264);
	i8 v5468 = *(i8*)(intptr_t)v5467;
	i8 v5469 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5469)(v5468);

	i8 v5470 = (i8)(intptr_t)c02_s0093;
	i8 v5471 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5471)(v5470);

	i8 v5472 = (i8)(intptr_t)(ws+3272);
	i2 v5473 = *(i2*)(intptr_t)v5472;
	i8 v5474 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5474)(v5473);

	i8 v5475 = (i8)(intptr_t)c02_s0094;
	i8 v5476 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5476)(v5475);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s0095[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0096[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0097[] = { 0x20,0x3d,0x20,0x28,0x28,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s0098[] = { 0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0099[] = { 0x29,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s009a[] = { 0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s009b[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Shift workspace at ws+3256 length ws+30
void f244_Shift(i8 p5477 /* op */, i8 p5478 /* type */, i1 p5479 /* width */) {
	*(i1*)(intptr_t)(ws+3256) = p5479; /*width */
	*(i8*)(intptr_t)(ws+3264) = p5478; /*type */
	*(i8*)(intptr_t)(ws+3272) = p5477; /*op */

	i8 v5480 = (i8)(intptr_t)(f231_Pop);
	i2 v5481;

	((void(*)(i2* /* vid */))(intptr_t)v5480)(&v5481);
	i8 v5482 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v5482 = v5481;

	i8 v5483 = (i8)(intptr_t)(f231_Pop);
	i2 v5484;

	((void(*)(i2* /* vid */))(intptr_t)v5483)(&v5484);
	i8 v5485 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5485 = v5484;

	i8 v5486 = (i8)(intptr_t)(f229_Push);
	i2 v5487;

	((void(*)(i2* /* vid */))(intptr_t)v5486)(&v5487);
	i8 v5488 = (i8)(intptr_t)(ws+3284);
	*(i2*)(intptr_t)v5488 = v5487;

	i8 v5489 = (i8)(intptr_t)c02_s0095;
	i8 v5490 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5490)(v5489);

	i8 v5491 = (i8)(intptr_t)(ws+3256);
	i1 v5492 = *(i1*)(intptr_t)v5491;
	i8 v5493 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5493)(v5492);

	i8 v5494 = (i8)(intptr_t)c02_s0096;
	i8 v5495 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5495)(v5494);

	i8 v5496 = (i8)(intptr_t)(ws+3284);
	i2 v5497 = *(i2*)(intptr_t)v5496;
	i8 v5498 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5498)(v5497);

	i8 v5499 = (i8)(intptr_t)c02_s0097;
	i8 v5500 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5500)(v5499);

	i8 v5501 = (i8)(intptr_t)(ws+3264);
	i8 v5502 = *(i8*)(intptr_t)v5501;
	i8 v5503 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5503)(v5502);

	i8 v5504 = (i8)(intptr_t)c02_s0098;
	i8 v5505 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5505)(v5504);

	i8 v5506 = (i8)(intptr_t)(ws+3282);
	i2 v5507 = *(i2*)(intptr_t)v5506;
	i8 v5508 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5508)(v5507);

	i8 v5509 = (i8)(intptr_t)c02_s0099;
	i8 v5510 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5510)(v5509);

	i8 v5511 = (i8)(intptr_t)(ws+3272);
	i8 v5512 = *(i8*)(intptr_t)v5511;
	i8 v5513 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5513)(v5512);

	i8 v5514 = (i8)(intptr_t)c02_s009a;
	i8 v5515 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5515)(v5514);

	i8 v5516 = (i8)(intptr_t)(ws+3280);
	i2 v5517 = *(i2*)(intptr_t)v5516;
	i8 v5518 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5518)(v5517);

	i8 v5519 = (i8)(intptr_t)c02_s009b;
	i8 v5520 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5520)(v5519);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f231_Pop(i2* /* vid */);
const i1 c02_s009c[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f163_E(i8 /* text */);
const i1 c02_s009d[] = { 0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s009e[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s009f[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00a0[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Branch workspace at ws+3256 length ws+20
void f245_Branch(i8 p5521 /* op */, i8 p5522 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p5522; /*node */
	*(i8*)(intptr_t)(ws+3264) = p5521; /*op */

	i8 v5523 = (i8)(intptr_t)(f231_Pop);
	i2 v5524;

	((void(*)(i2* /* vid */))(intptr_t)v5523)(&v5524);
	i8 v5525 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5525 = v5524;

	i8 v5526 = (i8)(intptr_t)(f231_Pop);
	i2 v5527;

	((void(*)(i2* /* vid */))(intptr_t)v5526)(&v5527);
	i8 v5528 = (i8)(intptr_t)(ws+3274);
	*(i2*)(intptr_t)v5528 = v5527;

	i8 v5529 = (i8)(intptr_t)c02_s009c;
	i8 v5530 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5530)(v5529);

	i8 v5531 = (i8)(intptr_t)(ws+3274);
	i2 v5532 = *(i2*)(intptr_t)v5531;
	i8 v5533 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5533)(v5532);

	i8 v5534 = (i8)(intptr_t)(ws+3264);
	i8 v5535 = *(i8*)(intptr_t)v5534;
	i8 v5536 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5536)(v5535);

	i8 v5537 = (i8)(intptr_t)c02_s009d;
	i8 v5538 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5538)(v5537);

	i8 v5539 = (i8)(intptr_t)(ws+3272);
	i2 v5540 = *(i2*)(intptr_t)v5539;
	i8 v5541 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5541)(v5540);

	i8 v5542 = (i8)(intptr_t)c02_s009e;
	i8 v5543 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5543)(v5542);

	i8 v5544 = (i8)(intptr_t)(ws+3256);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i2 v5546 = *(i2*)(intptr_t)v5545;
	i8 v5547 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5547)(v5546);

	i8 v5548 = (i8)(intptr_t)c02_s009f;
	i8 v5549 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5549)(v5548);

	i8 v5550 = (i8)(intptr_t)(ws+3256);
	i8 v5551 = *(i8*)(intptr_t)v5550;
	i8 v5552 = v5551+(+2);
	i2 v5553 = *(i2*)(intptr_t)v5552;
	i8 v5554 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5554)(v5553);

	i8 v5555 = (i8)(intptr_t)c02_s00a0;
	i8 v5556 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5556)(v5555);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f231_Pop(i2* /* vid */);
const i1 c02_s00a1[] = { 0x09,0x69,0x66,0x20,0x28,0x28,0x73,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00a2[] = { 0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
	void f163_E(i8 /* text */);
const i1 c02_s00a3[] = { 0x28,0x73,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00a4[] = { 0x29,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00a5[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00a6[] = { 0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00a7[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// BranchSigned workspace at ws+3256 length ws+28
void f246_BranchSigned(i8 p5557 /* op */, i1 p5558 /* width */, i8 p5559 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p5559; /*node */
	*(i1*)(intptr_t)(ws+3264) = p5558; /*width */
	*(i8*)(intptr_t)(ws+3272) = p5557; /*op */

	i8 v5560 = (i8)(intptr_t)(f231_Pop);
	i2 v5561;

	((void(*)(i2* /* vid */))(intptr_t)v5560)(&v5561);
	i8 v5562 = (i8)(intptr_t)(ws+3280);
	*(i2*)(intptr_t)v5562 = v5561;

	i8 v5563 = (i8)(intptr_t)(f231_Pop);
	i2 v5564;

	((void(*)(i2* /* vid */))(intptr_t)v5563)(&v5564);
	i8 v5565 = (i8)(intptr_t)(ws+3282);
	*(i2*)(intptr_t)v5565 = v5564;

	i8 v5566 = (i8)(intptr_t)c02_s00a1;
	i8 v5567 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5567)(v5566);

	i8 v5568 = (i8)(intptr_t)(ws+3264);
	i1 v5569 = *(i1*)(intptr_t)v5568;
	i8 v5570 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5570)(v5569);

	i8 v5571 = (i8)(intptr_t)c02_s00a2;
	i8 v5572 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5572)(v5571);

	i8 v5573 = (i8)(intptr_t)(ws+3282);
	i2 v5574 = *(i2*)(intptr_t)v5573;
	i8 v5575 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5575)(v5574);

	i8 v5576 = (i8)(intptr_t)(ws+3272);
	i8 v5577 = *(i8*)(intptr_t)v5576;
	i8 v5578 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5578)(v5577);

	i8 v5579 = (i8)(intptr_t)c02_s00a3;
	i8 v5580 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5580)(v5579);

	i8 v5581 = (i8)(intptr_t)(ws+3264);
	i1 v5582 = *(i1*)(intptr_t)v5581;
	i8 v5583 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5583)(v5582);

	i8 v5584 = (i8)(intptr_t)c02_s00a4;
	i8 v5585 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5585)(v5584);

	i8 v5586 = (i8)(intptr_t)(ws+3280);
	i2 v5587 = *(i2*)(intptr_t)v5586;
	i8 v5588 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5588)(v5587);

	i8 v5589 = (i8)(intptr_t)c02_s00a5;
	i8 v5590 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5590)(v5589);

	i8 v5591 = (i8)(intptr_t)(ws+3256);
	i8 v5592 = *(i8*)(intptr_t)v5591;
	i2 v5593 = *(i2*)(intptr_t)v5592;
	i8 v5594 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5594)(v5593);

	i8 v5595 = (i8)(intptr_t)c02_s00a6;
	i8 v5596 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5596)(v5595);

	i8 v5597 = (i8)(intptr_t)(ws+3256);
	i8 v5598 = *(i8*)(intptr_t)v5597;
	i8 v5599 = v5598+(+2);
	i2 v5600 = *(i2*)(intptr_t)v5599;
	i8 v5601 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5601)(v5600);

	i8 v5602 = (i8)(intptr_t)c02_s00a7;
	i8 v5603 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5603)(v5602);

endsub:;
}
const i1 c02_s00a8[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00a9[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// BranchConstant workspace at ws+3256 length ws+16
void f247_BranchConstant(i4 p5604 /* rhs */, i4 p5605 /* lhs */, i8 p5606 /* node */) {
	*(i8*)(intptr_t)(ws+3256) = p5606; /*node */
	*(i4*)(intptr_t)(ws+3264) = p5605; /*lhs */
	*(i4*)(intptr_t)(ws+3268) = p5604; /*rhs */

	i8 v5607 = (i8)(intptr_t)c02_s00a8;
	i8 v5608 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5608)(v5607);

	i8 v5609 = (i8)(intptr_t)(ws+3264);
	i4 v5610 = *(i4*)(intptr_t)v5609;
	i8 v5611 = (i8)(intptr_t)(ws+3268);
	i4 v5612 = *(i4*)(intptr_t)v5611;
	if (v5610==v5612) goto c02_0440; else goto c02_0441;

c02_0440:;

	i8 v5613 = (i8)(intptr_t)(ws+3256);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	i2 v5615 = *(i2*)(intptr_t)v5614;
	i8 v5616 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5616)(v5615);

	goto c02_043d;

c02_0441:;

	i8 v5617 = (i8)(intptr_t)(ws+3256);
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = v5618+(+2);
	i2 v5620 = *(i2*)(intptr_t)v5619;
	i8 v5621 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5621)(v5620);

c02_043d:;

	i8 v5622 = (i8)(intptr_t)c02_s00a9;
	i8 v5623 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5623)(v5622);

endsub:;
}
const i1 c02_s00aa[] = { 0x09,0x69,0x66,0x20,0x28,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00ab[] = { 0x20,0x21,0x3d,0x20,0 };
	void f163_E(i8 /* text */);
	void f169_E_i32(i4 /* value */);
const i1 c02_s00ac[] = { 0x29,0x20,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00ad[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Whencase workspace at ws+3256 length ws+8
void f248_Whencase(i2 p5624 /* falselabel */, i4 p5625 /* value */) {
	*(i4*)(intptr_t)(ws+3256) = p5625; /*value */
	*(i2*)(intptr_t)(ws+3260) = p5624; /*falselabel */

	i8 v5626 = (i8)(intptr_t)(ws+1064);
	i8 v5627 = (i8)(intptr_t)(ws+1192);
	i1 v5628 = *(i1*)(intptr_t)v5627;
	i1 v5629 = v5628+(-1);
	i8 v5630 = v5629;
	i1 v5631 = (i1)+1;
	i8 v5632 = ((i8)v5630)<<v5631;
	i8 v5633 = v5626+v5632;
	i2 v5634 = *(i2*)(intptr_t)v5633;
	i8 v5635 = (i8)(intptr_t)(ws+3262);
	*(i2*)(intptr_t)v5635 = v5634;

	i8 v5636 = (i8)(intptr_t)c02_s00aa;
	i8 v5637 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5637)(v5636);

	i8 v5638 = (i8)(intptr_t)(ws+3262);
	i2 v5639 = *(i2*)(intptr_t)v5638;
	i8 v5640 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5640)(v5639);

	i8 v5641 = (i8)(intptr_t)c02_s00ab;
	i8 v5642 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5642)(v5641);

	i8 v5643 = (i8)(intptr_t)(ws+3256);
	i4 v5644 = *(i4*)(intptr_t)v5643;
	i8 v5645 = (i8)(intptr_t)(f169_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v5645)(v5644);

	i8 v5646 = (i8)(intptr_t)c02_s00ac;
	i8 v5647 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5647)(v5646);

	i8 v5648 = (i8)(intptr_t)(ws+3260);
	i2 v5649 = *(i2*)(intptr_t)v5648;
	i8 v5650 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v5650)(v5649);

	i8 v5651 = (i8)(intptr_t)c02_s00ad;
	i8 v5652 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5652)(v5651);

endsub:;
}
	void f231_Pop(i2* /* vid */);
	void f229_Push(i2* /* vid */);
const i1 c02_s00ae[] = { 0x09,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00af[] = { 0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00b0[] = { 0x20,0x3d,0x20,0 };
	void f163_E(i8 /* text */);
const i1 c02_s00b1[] = { 0x28,0x73,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00b2[] = { 0x29,0x28,0x73,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00b3[] = { 0x29,0 };
	void f163_E(i8 /* text */);
const i1 c02_s00b4[] = { 0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00b5[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// Cast workspace at ws+3256 length ws+8
void f249_Cast(i1 p5653 /* sext */, i1 p5654 /* dest */, i1 p5655 /* src */) {
	*(i1*)(intptr_t)(ws+3256) = p5655; /*src */
	*(i1*)(intptr_t)(ws+3257) = p5654; /*dest */
	*(i1*)(intptr_t)(ws+3258) = p5653; /*sext */

	i8 v5656 = (i8)(intptr_t)(f231_Pop);
	i2 v5657;

	((void(*)(i2* /* vid */))(intptr_t)v5656)(&v5657);
	i8 v5658 = (i8)(intptr_t)(ws+3260);
	*(i2*)(intptr_t)v5658 = v5657;

	i8 v5659 = (i8)(intptr_t)(f229_Push);
	i2 v5660;

	((void(*)(i2* /* vid */))(intptr_t)v5659)(&v5660);
	i8 v5661 = (i8)(intptr_t)(ws+3262);
	*(i2*)(intptr_t)v5661 = v5660;

	i8 v5662 = (i8)(intptr_t)c02_s00ae;
	i8 v5663 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5663)(v5662);

	i8 v5664 = (i8)(intptr_t)(ws+3257);
	i1 v5665 = *(i1*)(intptr_t)v5664;
	i8 v5666 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5666)(v5665);

	i8 v5667 = (i8)(intptr_t)c02_s00af;
	i8 v5668 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5668)(v5667);

	i8 v5669 = (i8)(intptr_t)(ws+3262);
	i2 v5670 = *(i2*)(intptr_t)v5669;
	i8 v5671 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5671)(v5670);

	i8 v5672 = (i8)(intptr_t)c02_s00b0;
	i8 v5673 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5673)(v5672);

	i8 v5674 = (i8)(intptr_t)(ws+3258);
	i1 v5675 = *(i1*)(intptr_t)v5674;
	i1 v5676 = (i1)+0;
	if (v5675==v5676) goto c02_0446; else goto c02_0445;

c02_0445:;

	i8 v5677 = (i8)(intptr_t)c02_s00b1;
	i8 v5678 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5678)(v5677);

	i8 v5679 = (i8)(intptr_t)(ws+3257);
	i1 v5680 = *(i1*)(intptr_t)v5679;
	i8 v5681 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5681)(v5680);

	i8 v5682 = (i8)(intptr_t)c02_s00b2;
	i8 v5683 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5683)(v5682);

	i8 v5684 = (i8)(intptr_t)(ws+3256);
	i1 v5685 = *(i1*)(intptr_t)v5684;
	i8 v5686 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v5686)(v5685);

	i8 v5687 = (i8)(intptr_t)c02_s00b3;
	i8 v5688 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5688)(v5687);

	goto c02_0442;

c02_0446:;

c02_0442:;

	i8 v5689 = (i8)(intptr_t)c02_s00b4;
	i8 v5690 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5690)(v5689);

	i8 v5691 = (i8)(intptr_t)(ws+3260);
	i2 v5692 = *(i2*)(intptr_t)v5691;
	i8 v5693 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v5693)(v5692);

	i8 v5694 = (i8)(intptr_t)c02_s00b5;
	i8 v5695 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5695)(v5694);

endsub:;
}
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
const i1 c02_s00b6[] = { 0x63,0x6f,0x6e,0x73,0x74,0x20,0x69,0x31,0x20,0 };
	void f163_E(i8 /* text */);
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);
	void f172_E_h16(i2 /* value */);
const i1 c02_s00b7[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f163_E(i8 /* text */);
	void f158_E_comma(void);
const i1 c02_s00b8[] = { 0x30,0x78,0 };
	void f163_E(i8 /* text */);
	void f171_E_h8(i1 /* value */);
	void f158_E_comma(void);
const i1 c02_s00b9[] = { 0x30,0x20,0x7d,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
	void f178_EmitterPopChunk(i1 /* type */);

// E_string workspace at ws+3264 length ws+12
void f250_E_string(i2* p5698 /* sid */, i8 p5699 /* text */) {
	*(i8*)(intptr_t)(ws+3264) = p5699; /*text */

	i8 v5700 = (i8)(intptr_t)(ws+1208);
	i2 v5701 = *(i2*)(intptr_t)v5700;
	i8 v5702 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v5702 = v5701;

	i8 v5703 = (i8)(intptr_t)(ws+1208);
	i2 v5704 = *(i2*)(intptr_t)v5703;
	i2 v5705 = v5704+(+1);
	i8 v5706 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5706 = v5705;

	i8 v5707 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v5707)();

	i8 v5708 = (i8)(intptr_t)(ws+40);
	i8 v5709 = *(i8*)(intptr_t)v5708;
	i8 v5710 = v5709+(+72);
	i2 v5711 = *(i2*)(intptr_t)v5710;
	i8 v5712 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5712)(v5711);

	i8 v5713 = (i8)(intptr_t)c02_s00b6;
	i8 v5714 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5714)(v5713);

	i1 v5715 = (i1)+3;
	i8 v5716 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5716)(v5715);

	i1 v5717 = (i1)+115;
	i8 v5718 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5718)(v5717);

	i8 v5719 = (i8)(intptr_t)(ws+3272);
	i2 v5720 = *(i2*)(intptr_t)v5719;
	i8 v5721 = (i8)(intptr_t)(f172_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v5721)(v5720);

	i8 v5722 = (i8)(intptr_t)c02_s00b7;
	i8 v5723 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5723)(v5722);

	i1 v5724 = (i1)+1;
	i8 v5725 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v5725 = v5724;

c02_0447:;

	i8 v5726 = (i8)(intptr_t)(ws+3264);
	i8 v5727 = *(i8*)(intptr_t)v5726;
	i1 v5728 = *(i1*)(intptr_t)v5727;
	i8 v5729 = (i8)(intptr_t)(ws+3275);
	*(i1*)(intptr_t)v5729 = v5728;

	i8 v5730 = (i8)(intptr_t)(ws+3264);
	i8 v5731 = *(i8*)(intptr_t)v5730;
	i8 v5732 = v5731+(+1);
	i8 v5733 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v5733 = v5732;

	i8 v5734 = (i8)(intptr_t)(ws+3275);
	i1 v5735 = *(i1*)(intptr_t)v5734;
	i1 v5736 = (i1)+0;
	if (v5735==v5736) goto c02_044c; else goto c02_044d;

c02_044c:;

	goto c02_0448;

c02_044d:;

c02_0449:;

	i8 v5737 = (i8)(intptr_t)(ws+3274);
	i1 v5738 = *(i1*)(intptr_t)v5737;
	i1 v5739 = (i1)+0;
	if (v5738==v5739) goto c02_0451; else goto c02_0452;

c02_0451:;

	i8 v5740 = (i8)(intptr_t)(f158_E_comma);

	((void(*)(void))(intptr_t)v5740)();

	goto c02_044e;

c02_0452:;

c02_044e:;

	i1 v5741 = (i1)+0;
	i8 v5742 = (i8)(intptr_t)(ws+3274);
	*(i1*)(intptr_t)v5742 = v5741;

	i8 v5743 = (i8)(intptr_t)c02_s00b8;
	i8 v5744 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5744)(v5743);

	i8 v5745 = (i8)(intptr_t)(ws+3275);
	i1 v5746 = *(i1*)(intptr_t)v5745;
	i8 v5747 = (i8)(intptr_t)(f171_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v5747)(v5746);

	goto c02_0447;

c02_0448:;

	i8 v5748 = (i8)(intptr_t)(ws+3274);
	i1 v5749 = *(i1*)(intptr_t)v5748;
	i1 v5750 = (i1)+0;
	if (v5749==v5750) goto c02_0456; else goto c02_0457;

c02_0456:;

	i8 v5751 = (i8)(intptr_t)(f158_E_comma);

	((void(*)(void))(intptr_t)v5751)();

	goto c02_0453;

c02_0457:;

c02_0453:;

	i8 v5752 = (i8)(intptr_t)c02_s00b9;
	i8 v5753 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5753)(v5752);

	i1 v5754 = (i1)+83;
	i8 v5755 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v5755)(v5754);

endsub:;
	*p5698 = *(i2*)(intptr_t)(ws+3272);
}
const i1 c02_s00ba[] = { 0x09,0x7b,0x20,0x2e,0x69,0x31,0x20,0x3d,0x20,0x7b,0x20,0 };
	void f163_E(i8 /* text */);
	void f158_E_comma(void);
const i1 c02_s00bb[] = { 0x30,0x78,0 };
	void f163_E(i8 /* text */);
	void f171_E_h8(i1 /* value */);
const i1 c02_s00bc[] = { 0x7d,0x7d,0x2c,0x0a,0 };
	void f163_E(i8 /* text */);

// FlushInitialiserBuffer workspace at ws+3272 length ws+1
void f251_FlushInitialiserBuffer(void) {

	i8 v5758 = (i8)(intptr_t)(ws+1218);
	i1 v5759 = *(i1*)(intptr_t)v5758;
	i1 v5760 = (i1)+0;
	if (v5759==v5760) goto c02_045c; else goto c02_045b;

c02_045b:;

	i8 v5761 = (i8)(intptr_t)c02_s00ba;
	i8 v5762 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5762)(v5761);

	i1 v5763 = (i1)+0;
	i8 v5764 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v5764 = v5763;

c02_045f:;

	i8 v5765 = (i8)(intptr_t)(ws+3272);
	i1 v5766 = *(i1*)(intptr_t)v5765;
	i8 v5767 = (i8)(intptr_t)(ws+1218);
	i1 v5768 = *(i1*)(intptr_t)v5767;
	if (v5766==v5768) goto c02_0462; else goto c02_0461;

c02_0461:;

	i8 v5769 = (i8)(intptr_t)(ws+3272);
	i1 v5770 = *(i1*)(intptr_t)v5769;
	i1 v5771 = (i1)+0;
	if (v5770==v5771) goto c02_0467; else goto c02_0466;

c02_0466:;

	i8 v5772 = (i8)(intptr_t)(f158_E_comma);

	((void(*)(void))(intptr_t)v5772)();

	goto c02_0463;

c02_0467:;

c02_0463:;

	i8 v5773 = (i8)(intptr_t)c02_s00bb;
	i8 v5774 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5774)(v5773);

	i8 v5775 = (i8)(intptr_t)(ws+1210);
	i8 v5776 = (i8)(intptr_t)(ws+3272);
	i1 v5777 = *(i1*)(intptr_t)v5776;
	i8 v5778 = v5777;
	i8 v5779 = v5775+v5778;
	i1 v5780 = *(i1*)(intptr_t)v5779;
	i8 v5781 = (i8)(intptr_t)(f171_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v5781)(v5780);

	i8 v5782 = (i8)(intptr_t)(ws+3272);
	i1 v5783 = *(i1*)(intptr_t)v5782;
	i1 v5784 = v5783+(+1);
	i8 v5785 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v5785 = v5784;

	goto c02_045f;

c02_0462:;

	i8 v5786 = (i8)(intptr_t)c02_s00bc;
	i8 v5787 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v5787)(v5786);

	i1 v5788 = (i1)+0;
	i8 v5789 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5789 = v5788;

	goto c02_0458;

c02_045c:;

c02_0458:;

endsub:;
}
	void f251_FlushInitialiserBuffer(void);

// E_bytes workspace at ws+3256 length ws+9
void f252_E_bytes(i1 p5790 /* width */, i8 p5791 /* ptr */) {
	*(i8*)(intptr_t)(ws+3256) = p5791; /*ptr */
	*(i1*)(intptr_t)(ws+3264) = p5790; /*width */

c02_046a:;

	i8 v5792 = (i8)(intptr_t)(ws+3264);
	i1 v5793 = *(i1*)(intptr_t)v5792;
	i1 v5794 = (i1)+0;
	if (v5793==v5794) goto c02_046d; else goto c02_046c;

c02_046c:;

	i8 v5795 = (i8)(intptr_t)(ws+3256);
	i8 v5796 = *(i8*)(intptr_t)v5795;
	i1 v5797 = *(i1*)(intptr_t)v5796;
	i8 v5798 = (i8)(intptr_t)(ws+1210);
	i8 v5799 = (i8)(intptr_t)(ws+1218);
	i1 v5800 = *(i1*)(intptr_t)v5799;
	i8 v5801 = v5800;
	i8 v5802 = v5798+v5801;
	*(i1*)(intptr_t)v5802 = v5797;

	i8 v5803 = (i8)(intptr_t)(ws+3256);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = v5804+(+1);
	i8 v5806 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v5806 = v5805;

	i8 v5807 = (i8)(intptr_t)(ws+1218);
	i1 v5808 = *(i1*)(intptr_t)v5807;
	i1 v5809 = v5808+(+1);
	i8 v5810 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5810 = v5809;

	i8 v5811 = (i8)(intptr_t)(ws+1218);
	i1 v5812 = *(i1*)(intptr_t)v5811;
	i1 v5813 = (i1)+8;
	if (v5812==v5813) goto c02_0471; else goto c02_0472;

c02_0471:;

	i8 v5814 = (i8)(intptr_t)(f251_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v5814)();

	goto c02_046e;

c02_0472:;

c02_046e:;

	i8 v5815 = (i8)(intptr_t)(ws+3264);
	i1 v5816 = *(i1*)(intptr_t)v5815;
	i1 v5817 = v5816+(-1);
	i8 v5818 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5818 = v5817;

	goto c02_046a;

c02_046d:;

endsub:;
}
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// MatchPredicate workspace at ws+3248 length ws+48
void f253_MatchPredicate(i1* p5819 /* matches */, i8 p5820 /* n */, i1 p5821 /* rule */) {
	*(i1*)(intptr_t)(ws+3248) = p5821; /*rule */
	*(i8*)(intptr_t)(ws+3256) = p5820; /*n */

	i8 v5822 = (i8)(intptr_t)(ws+3256);
	i8 v5823 = *(i8*)(intptr_t)v5822;
	i8 v5824 = (i8)+24;
	i8 v5825 = (i8)(intptr_t)(ws+3272);
	i8 v5826 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v5826)(v5825, v5824, v5823);

	i1 v5827 = (i1)+0;
	i8 v5828 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v5828 = v5827;

	i8 v5829 = (i8)(intptr_t)(ws+3248);
	i1 v5830 = *(i1*)(intptr_t)v5829;

c02_0473:;


endsub:;
	*p5819 = *(i1*)(intptr_t)(ws+3264);
}
	void f247_BranchConstant(i4 /* rhs */, i4 /* lhs */, i8 /* node */);

// emit_0 workspace at ws+3256 length ws+0
void f255_emit_0(void) {

	i8 v5880 = (i8)(intptr_t)(ws+3176);
	i8 v5881 = *(i8*)(intptr_t)v5880;
	i8 v5882 = v5881+(+16);
	i8 v5883 = *(i8*)(intptr_t)v5882;
	i8 v5884 = (i8)(intptr_t)(ws+3200);
	i8 v5885 = *(i8*)(intptr_t)v5884;
	i4 v5886 = *(i4*)(intptr_t)v5885;
	i8 v5887 = (i8)(intptr_t)(ws+3216);
	i8 v5888 = *(i8*)(intptr_t)v5887;
	i4 v5889 = *(i4*)(intptr_t)v5888;
	i8 v5890 = (i8)(intptr_t)(f247_BranchConstant);

	((void(*)(i4 /* rhs */, i4 /* lhs */, i8 /* node */))(intptr_t)v5890)(v5889, v5886, v5883);

endsub:;
}
	void f255_emit_0(void);
const i1 c02_s00bd[] = { 0x2b,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_1 workspace at ws+3256 length ws+0
void f256_emit_1(void) {

	i1 v5892 = (i1)+1;
	i8 v5893 = (i8)(intptr_t)c02_s00bd;
	i8 v5894 = (i8)(intptr_t)(ws+3216);
	i8 v5895 = *(i8*)(intptr_t)v5894;
	i4 v5896 = *(i4*)(intptr_t)v5895;
	i8 v5897 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5897)(v5896, v5893, v5892);

endsub:;
}
	void f256_emit_1(void);
const i1 c02_s00be[] = { 0x2b,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_2 workspace at ws+3256 length ws+0
void f257_emit_2(void) {

	i1 v5899 = (i1)+2;
	i8 v5900 = (i8)(intptr_t)c02_s00be;
	i8 v5901 = (i8)(intptr_t)(ws+3216);
	i8 v5902 = *(i8*)(intptr_t)v5901;
	i4 v5903 = *(i4*)(intptr_t)v5902;
	i8 v5904 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5904)(v5903, v5900, v5899);

endsub:;
}
	void f257_emit_2(void);
const i1 c02_s00bf[] = { 0x2b,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_3 workspace at ws+3256 length ws+0
void f258_emit_3(void) {

	i1 v5906 = (i1)+4;
	i8 v5907 = (i8)(intptr_t)c02_s00bf;
	i8 v5908 = (i8)(intptr_t)(ws+3216);
	i8 v5909 = *(i8*)(intptr_t)v5908;
	i4 v5910 = *(i4*)(intptr_t)v5909;
	i8 v5911 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5911)(v5910, v5907, v5906);

endsub:;
}
	void f258_emit_3(void);
const i1 c02_s00c0[] = { 0x2b,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_4 workspace at ws+3256 length ws+0
void f259_emit_4(void) {

	i1 v5913 = (i1)+8;
	i8 v5914 = (i8)(intptr_t)c02_s00c0;
	i8 v5915 = (i8)(intptr_t)(ws+3216);
	i8 v5916 = *(i8*)(intptr_t)v5915;
	i4 v5917 = *(i4*)(intptr_t)v5916;
	i8 v5918 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5918)(v5917, v5914, v5913);

endsub:;
}
	void f259_emit_4(void);
const i1 c02_s00c1[] = { 0x2d,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_5 workspace at ws+3256 length ws+0
void f260_emit_5(void) {

	i1 v5920 = (i1)+1;
	i8 v5921 = (i8)(intptr_t)c02_s00c1;
	i8 v5922 = (i8)(intptr_t)(ws+3216);
	i8 v5923 = *(i8*)(intptr_t)v5922;
	i4 v5924 = *(i4*)(intptr_t)v5923;
	i8 v5925 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5925)(v5924, v5921, v5920);

endsub:;
}
	void f260_emit_5(void);
const i1 c02_s00c2[] = { 0x2d,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_6 workspace at ws+3256 length ws+0
void f261_emit_6(void) {

	i1 v5927 = (i1)+2;
	i8 v5928 = (i8)(intptr_t)c02_s00c2;
	i8 v5929 = (i8)(intptr_t)(ws+3216);
	i8 v5930 = *(i8*)(intptr_t)v5929;
	i4 v5931 = *(i4*)(intptr_t)v5930;
	i8 v5932 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5932)(v5931, v5928, v5927);

endsub:;
}
	void f261_emit_6(void);
const i1 c02_s00c3[] = { 0x2d,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_7 workspace at ws+3256 length ws+0
void f262_emit_7(void) {

	i1 v5934 = (i1)+4;
	i8 v5935 = (i8)(intptr_t)c02_s00c3;
	i8 v5936 = (i8)(intptr_t)(ws+3216);
	i8 v5937 = *(i8*)(intptr_t)v5936;
	i4 v5938 = *(i4*)(intptr_t)v5937;
	i8 v5939 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5939)(v5938, v5935, v5934);

endsub:;
}
	void f262_emit_7(void);
const i1 c02_s00c4[] = { 0x2d,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_8 workspace at ws+3256 length ws+0
void f263_emit_8(void) {

	i1 v5941 = (i1)+8;
	i8 v5942 = (i8)(intptr_t)c02_s00c4;
	i8 v5943 = (i8)(intptr_t)(ws+3216);
	i8 v5944 = *(i8*)(intptr_t)v5943;
	i4 v5945 = *(i4*)(intptr_t)v5944;
	i8 v5946 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5946)(v5945, v5942, v5941);

endsub:;
}
	void f263_emit_8(void);
const i1 c02_s00c5[] = { 0x2a,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_9 workspace at ws+3256 length ws+0
void f264_emit_9(void) {

	i1 v5948 = (i1)+1;
	i8 v5949 = (i8)(intptr_t)c02_s00c5;
	i8 v5950 = (i8)(intptr_t)(ws+3216);
	i8 v5951 = *(i8*)(intptr_t)v5950;
	i4 v5952 = *(i4*)(intptr_t)v5951;
	i8 v5953 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5953)(v5952, v5949, v5948);

endsub:;
}
	void f264_emit_9(void);
const i1 c02_s00c6[] = { 0x2a,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_10 workspace at ws+3256 length ws+0
void f265_emit_10(void) {

	i1 v5955 = (i1)+2;
	i8 v5956 = (i8)(intptr_t)c02_s00c6;
	i8 v5957 = (i8)(intptr_t)(ws+3216);
	i8 v5958 = *(i8*)(intptr_t)v5957;
	i4 v5959 = *(i4*)(intptr_t)v5958;
	i8 v5960 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5960)(v5959, v5956, v5955);

endsub:;
}
	void f265_emit_10(void);
const i1 c02_s00c7[] = { 0x2a,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_11 workspace at ws+3256 length ws+0
void f266_emit_11(void) {

	i1 v5962 = (i1)+4;
	i8 v5963 = (i8)(intptr_t)c02_s00c7;
	i8 v5964 = (i8)(intptr_t)(ws+3216);
	i8 v5965 = *(i8*)(intptr_t)v5964;
	i4 v5966 = *(i4*)(intptr_t)v5965;
	i8 v5967 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5967)(v5966, v5963, v5962);

endsub:;
}
	void f266_emit_11(void);
const i1 c02_s00c8[] = { 0x2a,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_12 workspace at ws+3256 length ws+0
void f267_emit_12(void) {

	i1 v5969 = (i1)+8;
	i8 v5970 = (i8)(intptr_t)c02_s00c8;
	i8 v5971 = (i8)(intptr_t)(ws+3216);
	i8 v5972 = *(i8*)(intptr_t)v5971;
	i4 v5973 = *(i4*)(intptr_t)v5972;
	i8 v5974 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5974)(v5973, v5970, v5969);

endsub:;
}
	void f267_emit_12(void);
const i1 c02_s00c9[] = { 0x2f,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_13 workspace at ws+3256 length ws+0
void f268_emit_13(void) {

	i1 v5976 = (i1)+1;
	i8 v5977 = (i8)(intptr_t)c02_s00c9;
	i8 v5978 = (i8)(intptr_t)(ws+3216);
	i8 v5979 = *(i8*)(intptr_t)v5978;
	i4 v5980 = *(i4*)(intptr_t)v5979;
	i8 v5981 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5981)(v5980, v5977, v5976);

endsub:;
}
	void f268_emit_13(void);
const i1 c02_s00ca[] = { 0x2f,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_14 workspace at ws+3256 length ws+0
void f269_emit_14(void) {

	i1 v5983 = (i1)+2;
	i8 v5984 = (i8)(intptr_t)c02_s00ca;
	i8 v5985 = (i8)(intptr_t)(ws+3216);
	i8 v5986 = *(i8*)(intptr_t)v5985;
	i4 v5987 = *(i4*)(intptr_t)v5986;
	i8 v5988 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5988)(v5987, v5984, v5983);

endsub:;
}
	void f269_emit_14(void);
const i1 c02_s00cb[] = { 0x2f,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_15 workspace at ws+3256 length ws+0
void f270_emit_15(void) {

	i1 v5990 = (i1)+4;
	i8 v5991 = (i8)(intptr_t)c02_s00cb;
	i8 v5992 = (i8)(intptr_t)(ws+3216);
	i8 v5993 = *(i8*)(intptr_t)v5992;
	i4 v5994 = *(i4*)(intptr_t)v5993;
	i8 v5995 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v5995)(v5994, v5991, v5990);

endsub:;
}
	void f270_emit_15(void);
const i1 c02_s00cc[] = { 0x2f,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_16 workspace at ws+3256 length ws+0
void f271_emit_16(void) {

	i1 v5997 = (i1)+8;
	i8 v5998 = (i8)(intptr_t)c02_s00cc;
	i8 v5999 = (i8)(intptr_t)(ws+3216);
	i8 v6000 = *(i8*)(intptr_t)v5999;
	i4 v6001 = *(i4*)(intptr_t)v6000;
	i8 v6002 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6002)(v6001, v5998, v5997);

endsub:;
}
	void f271_emit_16(void);
const i1 c02_s00cd[] = { 0x25,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_17 workspace at ws+3256 length ws+0
void f272_emit_17(void) {

	i1 v6004 = (i1)+1;
	i8 v6005 = (i8)(intptr_t)c02_s00cd;
	i8 v6006 = (i8)(intptr_t)(ws+3216);
	i8 v6007 = *(i8*)(intptr_t)v6006;
	i4 v6008 = *(i4*)(intptr_t)v6007;
	i8 v6009 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6009)(v6008, v6005, v6004);

endsub:;
}
	void f272_emit_17(void);
const i1 c02_s00ce[] = { 0x25,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_18 workspace at ws+3256 length ws+0
void f273_emit_18(void) {

	i1 v6011 = (i1)+2;
	i8 v6012 = (i8)(intptr_t)c02_s00ce;
	i8 v6013 = (i8)(intptr_t)(ws+3216);
	i8 v6014 = *(i8*)(intptr_t)v6013;
	i4 v6015 = *(i4*)(intptr_t)v6014;
	i8 v6016 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6016)(v6015, v6012, v6011);

endsub:;
}
	void f273_emit_18(void);
const i1 c02_s00cf[] = { 0x25,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_19 workspace at ws+3256 length ws+0
void f274_emit_19(void) {

	i1 v6018 = (i1)+4;
	i8 v6019 = (i8)(intptr_t)c02_s00cf;
	i8 v6020 = (i8)(intptr_t)(ws+3216);
	i8 v6021 = *(i8*)(intptr_t)v6020;
	i4 v6022 = *(i4*)(intptr_t)v6021;
	i8 v6023 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6023)(v6022, v6019, v6018);

endsub:;
}
	void f274_emit_19(void);
const i1 c02_s00d0[] = { 0x25,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_20 workspace at ws+3256 length ws+0
void f275_emit_20(void) {

	i1 v6025 = (i1)+8;
	i8 v6026 = (i8)(intptr_t)c02_s00d0;
	i8 v6027 = (i8)(intptr_t)(ws+3216);
	i8 v6028 = *(i8*)(intptr_t)v6027;
	i4 v6029 = *(i4*)(intptr_t)v6028;
	i8 v6030 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6030)(v6029, v6026, v6025);

endsub:;
}
	void f275_emit_20(void);
const i1 c02_s00d1[] = { 0x2f,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_21 workspace at ws+3256 length ws+0
void f276_emit_21(void) {

	i1 v6032 = (i1)+1;
	i8 v6033 = (i8)(intptr_t)c02_s00d1;
	i8 v6034 = (i8)(intptr_t)(ws+3216);
	i8 v6035 = *(i8*)(intptr_t)v6034;
	i4 v6036 = *(i4*)(intptr_t)v6035;
	i8 v6037 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6037)(v6036, v6033, v6032);

endsub:;
}
	void f276_emit_21(void);
const i1 c02_s00d2[] = { 0x2f,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_22 workspace at ws+3256 length ws+0
void f277_emit_22(void) {

	i1 v6039 = (i1)+2;
	i8 v6040 = (i8)(intptr_t)c02_s00d2;
	i8 v6041 = (i8)(intptr_t)(ws+3216);
	i8 v6042 = *(i8*)(intptr_t)v6041;
	i4 v6043 = *(i4*)(intptr_t)v6042;
	i8 v6044 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6044)(v6043, v6040, v6039);

endsub:;
}
	void f277_emit_22(void);
const i1 c02_s00d3[] = { 0x2f,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_23 workspace at ws+3256 length ws+0
void f278_emit_23(void) {

	i1 v6046 = (i1)+4;
	i8 v6047 = (i8)(intptr_t)c02_s00d3;
	i8 v6048 = (i8)(intptr_t)(ws+3216);
	i8 v6049 = *(i8*)(intptr_t)v6048;
	i4 v6050 = *(i4*)(intptr_t)v6049;
	i8 v6051 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6051)(v6050, v6047, v6046);

endsub:;
}
	void f278_emit_23(void);
const i1 c02_s00d4[] = { 0x2f,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_24 workspace at ws+3256 length ws+0
void f279_emit_24(void) {

	i1 v6053 = (i1)+8;
	i8 v6054 = (i8)(intptr_t)c02_s00d4;
	i8 v6055 = (i8)(intptr_t)(ws+3216);
	i8 v6056 = *(i8*)(intptr_t)v6055;
	i4 v6057 = *(i4*)(intptr_t)v6056;
	i8 v6058 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6058)(v6057, v6054, v6053);

endsub:;
}
	void f279_emit_24(void);
const i1 c02_s00d5[] = { 0x25,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_25 workspace at ws+3256 length ws+0
void f280_emit_25(void) {

	i1 v6060 = (i1)+1;
	i8 v6061 = (i8)(intptr_t)c02_s00d5;
	i8 v6062 = (i8)(intptr_t)(ws+3216);
	i8 v6063 = *(i8*)(intptr_t)v6062;
	i4 v6064 = *(i4*)(intptr_t)v6063;
	i8 v6065 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6065)(v6064, v6061, v6060);

endsub:;
}
	void f280_emit_25(void);
const i1 c02_s00d6[] = { 0x25,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_26 workspace at ws+3256 length ws+0
void f281_emit_26(void) {

	i1 v6067 = (i1)+2;
	i8 v6068 = (i8)(intptr_t)c02_s00d6;
	i8 v6069 = (i8)(intptr_t)(ws+3216);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	i4 v6071 = *(i4*)(intptr_t)v6070;
	i8 v6072 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6072)(v6071, v6068, v6067);

endsub:;
}
	void f281_emit_26(void);
const i1 c02_s00d7[] = { 0x25,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_27 workspace at ws+3256 length ws+0
void f282_emit_27(void) {

	i1 v6074 = (i1)+4;
	i8 v6075 = (i8)(intptr_t)c02_s00d7;
	i8 v6076 = (i8)(intptr_t)(ws+3216);
	i8 v6077 = *(i8*)(intptr_t)v6076;
	i4 v6078 = *(i4*)(intptr_t)v6077;
	i8 v6079 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6079)(v6078, v6075, v6074);

endsub:;
}
	void f282_emit_27(void);
const i1 c02_s00d8[] = { 0x25,0 };
	void f242_Op2VCSigned(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_28 workspace at ws+3256 length ws+0
void f283_emit_28(void) {

	i1 v6081 = (i1)+8;
	i8 v6082 = (i8)(intptr_t)c02_s00d8;
	i8 v6083 = (i8)(intptr_t)(ws+3216);
	i8 v6084 = *(i8*)(intptr_t)v6083;
	i4 v6085 = *(i4*)(intptr_t)v6084;
	i8 v6086 = (i8)(intptr_t)(f242_Op2VCSigned);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6086)(v6085, v6082, v6081);

endsub:;
}
	void f283_emit_28(void);
const i1 c02_s00d9[] = { 0x26,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_29 workspace at ws+3256 length ws+0
void f284_emit_29(void) {

	i1 v6088 = (i1)+1;
	i8 v6089 = (i8)(intptr_t)c02_s00d9;
	i8 v6090 = (i8)(intptr_t)(ws+3216);
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i4 v6092 = *(i4*)(intptr_t)v6091;
	i8 v6093 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6093)(v6092, v6089, v6088);

endsub:;
}
	void f284_emit_29(void);
const i1 c02_s00da[] = { 0x26,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_30 workspace at ws+3256 length ws+0
void f285_emit_30(void) {

	i1 v6095 = (i1)+2;
	i8 v6096 = (i8)(intptr_t)c02_s00da;
	i8 v6097 = (i8)(intptr_t)(ws+3216);
	i8 v6098 = *(i8*)(intptr_t)v6097;
	i4 v6099 = *(i4*)(intptr_t)v6098;
	i8 v6100 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6100)(v6099, v6096, v6095);

endsub:;
}
	void f285_emit_30(void);
const i1 c02_s00db[] = { 0x26,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_31 workspace at ws+3256 length ws+0
void f286_emit_31(void) {

	i1 v6102 = (i1)+4;
	i8 v6103 = (i8)(intptr_t)c02_s00db;
	i8 v6104 = (i8)(intptr_t)(ws+3216);
	i8 v6105 = *(i8*)(intptr_t)v6104;
	i4 v6106 = *(i4*)(intptr_t)v6105;
	i8 v6107 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6107)(v6106, v6103, v6102);

endsub:;
}
	void f286_emit_31(void);
const i1 c02_s00dc[] = { 0x26,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_32 workspace at ws+3256 length ws+0
void f287_emit_32(void) {

	i1 v6109 = (i1)+8;
	i8 v6110 = (i8)(intptr_t)c02_s00dc;
	i8 v6111 = (i8)(intptr_t)(ws+3216);
	i8 v6112 = *(i8*)(intptr_t)v6111;
	i4 v6113 = *(i4*)(intptr_t)v6112;
	i8 v6114 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6114)(v6113, v6110, v6109);

endsub:;
}
	void f287_emit_32(void);
const i1 c02_s00dd[] = { 0x7c,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_33 workspace at ws+3256 length ws+0
void f288_emit_33(void) {

	i1 v6116 = (i1)+1;
	i8 v6117 = (i8)(intptr_t)c02_s00dd;
	i8 v6118 = (i8)(intptr_t)(ws+3216);
	i8 v6119 = *(i8*)(intptr_t)v6118;
	i4 v6120 = *(i4*)(intptr_t)v6119;
	i8 v6121 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6121)(v6120, v6117, v6116);

endsub:;
}
	void f288_emit_33(void);
const i1 c02_s00de[] = { 0x7c,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_34 workspace at ws+3256 length ws+0
void f289_emit_34(void) {

	i1 v6123 = (i1)+2;
	i8 v6124 = (i8)(intptr_t)c02_s00de;
	i8 v6125 = (i8)(intptr_t)(ws+3216);
	i8 v6126 = *(i8*)(intptr_t)v6125;
	i4 v6127 = *(i4*)(intptr_t)v6126;
	i8 v6128 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6128)(v6127, v6124, v6123);

endsub:;
}
	void f289_emit_34(void);
const i1 c02_s00df[] = { 0x7c,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_35 workspace at ws+3256 length ws+0
void f290_emit_35(void) {

	i1 v6130 = (i1)+4;
	i8 v6131 = (i8)(intptr_t)c02_s00df;
	i8 v6132 = (i8)(intptr_t)(ws+3216);
	i8 v6133 = *(i8*)(intptr_t)v6132;
	i4 v6134 = *(i4*)(intptr_t)v6133;
	i8 v6135 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6135)(v6134, v6131, v6130);

endsub:;
}
	void f290_emit_35(void);
const i1 c02_s00e0[] = { 0x7c,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_36 workspace at ws+3256 length ws+0
void f291_emit_36(void) {

	i1 v6137 = (i1)+8;
	i8 v6138 = (i8)(intptr_t)c02_s00e0;
	i8 v6139 = (i8)(intptr_t)(ws+3216);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i4 v6141 = *(i4*)(intptr_t)v6140;
	i8 v6142 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6142)(v6141, v6138, v6137);

endsub:;
}
	void f291_emit_36(void);
const i1 c02_s00e1[] = { 0x5e,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_37 workspace at ws+3256 length ws+0
void f292_emit_37(void) {

	i1 v6144 = (i1)+1;
	i8 v6145 = (i8)(intptr_t)c02_s00e1;
	i8 v6146 = (i8)(intptr_t)(ws+3216);
	i8 v6147 = *(i8*)(intptr_t)v6146;
	i4 v6148 = *(i4*)(intptr_t)v6147;
	i8 v6149 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6149)(v6148, v6145, v6144);

endsub:;
}
	void f292_emit_37(void);
const i1 c02_s00e2[] = { 0x5e,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_38 workspace at ws+3256 length ws+0
void f293_emit_38(void) {

	i1 v6151 = (i1)+2;
	i8 v6152 = (i8)(intptr_t)c02_s00e2;
	i8 v6153 = (i8)(intptr_t)(ws+3216);
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i4 v6155 = *(i4*)(intptr_t)v6154;
	i8 v6156 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6156)(v6155, v6152, v6151);

endsub:;
}
	void f293_emit_38(void);
const i1 c02_s00e3[] = { 0x5e,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_39 workspace at ws+3256 length ws+0
void f294_emit_39(void) {

	i1 v6158 = (i1)+4;
	i8 v6159 = (i8)(intptr_t)c02_s00e3;
	i8 v6160 = (i8)(intptr_t)(ws+3216);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i4 v6162 = *(i4*)(intptr_t)v6161;
	i8 v6163 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6163)(v6162, v6159, v6158);

endsub:;
}
	void f294_emit_39(void);
const i1 c02_s00e4[] = { 0x5e,0 };
	void f240_Op2VC(i4 /* rhs */, i8 /* op */, i1 /* width */);

// emit_40 workspace at ws+3256 length ws+0
void f295_emit_40(void) {

	i1 v6165 = (i1)+8;
	i8 v6166 = (i8)(intptr_t)c02_s00e4;
	i8 v6167 = (i8)(intptr_t)(ws+3216);
	i8 v6168 = *(i8*)(intptr_t)v6167;
	i4 v6169 = *(i4*)(intptr_t)v6168;
	i8 v6170 = (i8)(intptr_t)(f240_Op2VC);

	((void(*)(i4 /* rhs */, i8 /* op */, i1 /* width */))(intptr_t)v6170)(v6169, v6166, v6165);

endsub:;
}
	void f295_emit_40(void);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00e5[] = { 0x3a,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_43 workspace at ws+3256 length ws+0
void f296_emit_43(void) {

	i8 v6172 = (i8)(intptr_t)(ws+3184);
	i8 v6173 = *(i8*)(intptr_t)v6172;
	i2 v6174 = *(i2*)(intptr_t)v6173;
	i8 v6175 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v6175)(v6174);

	i8 v6176 = (i8)(intptr_t)c02_s00e5;
	i8 v6177 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6177)(v6176);

endsub:;
}
	void f296_emit_43(void);
const i1 c02_s00e6[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0 };
	void f163_E(i8 /* text */);
	void f174_E_labelref(i2 /* labelid */);
const i1 c02_s00e7[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_44 workspace at ws+3256 length ws+0
void f297_emit_44(void) {

	i8 v6179 = (i8)(intptr_t)c02_s00e6;
	i8 v6180 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6180)(v6179);

	i8 v6181 = (i8)(intptr_t)(ws+3184);
	i8 v6182 = *(i8*)(intptr_t)v6181;
	i2 v6183 = *(i2*)(intptr_t)v6182;
	i8 v6184 = (i8)(intptr_t)(f174_E_labelref);

	((void(*)(i2 /* labelid */))(intptr_t)v6184)(v6183);

	i8 v6185 = (i8)(intptr_t)c02_s00e7;
	i8 v6186 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6186)(v6185);

endsub:;
}
	void f297_emit_44(void);
const i1 c02_s00e8[] = { 0x09,0x67,0x6f,0x74,0x6f,0x20,0x65,0x6e,0x64,0x73,0x75,0x62,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_45 workspace at ws+3256 length ws+0
void f298_emit_45(void) {

	i8 v6188 = (i8)(intptr_t)c02_s00e8;
	i8 v6189 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6189)(v6188);

endsub:;
}
	void f298_emit_45(void);
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
const i1 c02_s00e9[] = { 0x0a,0x2f,0x2f,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s00ea[] = { 0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x61,0x74,0x20,0 };
	void f163_E(i8 /* text */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);
const i1 c02_s00eb[] = { 0x20,0x6c,0x65,0x6e,0x67,0x74,0x68,0x20,0 };
	void f163_E(i8 /* text */);
	void f154_E_b8(i1 /* byte */);
	void f155_E_b16(i2 /* word */);
	void f154_E_b8(i1 /* byte */);
const i1 c02_s00ec[] = { 0x0a,0x76,0x6f,0x69,0x64,0x20,0 };
	void f163_E(i8 /* text */);
	void f175_E_subref(i8 /* subr */);
const i1 c02_s00ed[] = { 0x28,0 };
	void f163_E(i8 /* text */);
const i1 c02_s00ee[] = { 0x2c,0x20,0 };
	void f163_E(i8 /* text */);

// comma workspace at ws+3280 length ws+0
void f300_comma(void) {

	i8 v6241 = (i8)(intptr_t)(ws+3256);
	i1 v6242 = *(i1*)(intptr_t)v6241;
	i1 v6243 = (i1)+0;
	if (v6242==v6243) goto c02_04b0; else goto c02_04b1;

c02_04b0:;

	i8 v6244 = (i8)(intptr_t)c02_s00ee;
	i8 v6245 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6245)(v6244);

	goto c02_04ad;

c02_04b1:;

c02_04ad:;

	i1 v6246 = (i1)+0;
	i8 v6247 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6247 = v6246;

endsub:;
}
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f229_Push(i2* /* vid */);
	void f300_comma(void);
const i1 c02_s00ef[] = { 0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00f0[] = { 0x2a,0x20,0x70,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00f1[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s00f2[] = { 0x20,0x2a,0x2f,0 };
	void f163_E(i8 /* text */);
	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f229_Push(i2* /* vid */);
	void f300_comma(void);
const i1 c02_s00f3[] = { 0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00f4[] = { 0x20,0x70,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00f5[] = { 0x20,0x2f,0x2a,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s00f6[] = { 0x20,0x2a,0x2f,0 };
	void f163_E(i8 /* text */);
const i1 c02_s00f7[] = { 0x76,0x6f,0x69,0x64,0 };
	void f163_E(i8 /* text */);
const i1 c02_s00f8[] = { 0x29,0x20,0x7b,0x0a,0 };
	void f163_E(i8 /* text */);
	void f84_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f231_Pop(i2* /* vid */);
const i1 c02_s00f9[] = { 0x09,0x2a,0x28,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s00fa[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f163_E(i8 /* text */);
	void f225_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s00fb[] = { 0x29,0x20,0x3d,0x20,0x70,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s00fc[] = { 0x3b,0x20,0x2f,0x2a,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s00fd[] = { 0x20,0x2a,0x2f,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_46 workspace at ws+3256 length ws+18
void f299_emit_46(void) {

	i8 v6191 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v6191)();

	i8 v6192 = (i8)(intptr_t)(ws+3184);
	i8 v6193 = *(i8*)(intptr_t)v6192;
	i8 v6194 = *(i8*)(intptr_t)v6193;
	i8 v6195 = v6194+(+72);
	i2 v6196 = *(i2*)(intptr_t)v6195;
	i8 v6197 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6197)(v6196);

	i8 v6198 = (i8)(intptr_t)c02_s00e9;
	i8 v6199 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6199)(v6198);

	i8 v6200 = (i8)(intptr_t)(ws+3184);
	i8 v6201 = *(i8*)(intptr_t)v6200;
	i8 v6202 = *(i8*)(intptr_t)v6201;
	i8 v6203 = *(i8*)(intptr_t)v6202;
	i8 v6204 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6204)(v6203);

	i8 v6205 = (i8)(intptr_t)c02_s00ea;
	i8 v6206 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6206)(v6205);

	i1 v6207 = (i1)+2;
	i8 v6208 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6208)(v6207);

	i8 v6209 = (i8)(intptr_t)(ws+3184);
	i8 v6210 = *(i8*)(intptr_t)v6209;
	i8 v6211 = *(i8*)(intptr_t)v6210;
	i8 v6212 = v6211+(+72);
	i2 v6213 = *(i2*)(intptr_t)v6212;
	i8 v6214 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6214)(v6213);

	i1 v6215 = (i1)+0;
	i8 v6216 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6216)(v6215);

	i2 v6217 = (i2)+0;
	i8 v6218 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6218)(v6217);

	i8 v6219 = (i8)(intptr_t)c02_s00eb;
	i8 v6220 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6220)(v6219);

	i1 v6221 = (i1)+5;
	i8 v6222 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6222)(v6221);

	i8 v6223 = (i8)(intptr_t)(ws+3184);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i8 v6225 = *(i8*)(intptr_t)v6224;
	i8 v6226 = v6225+(+72);
	i2 v6227 = *(i2*)(intptr_t)v6226;
	i8 v6228 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v6228)(v6227);

	i1 v6229 = (i1)+0;
	i8 v6230 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v6230)(v6229);

	i8 v6231 = (i8)(intptr_t)c02_s00ec;
	i8 v6232 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6232)(v6231);

	i8 v6233 = (i8)(intptr_t)(ws+3184);
	i8 v6234 = *(i8*)(intptr_t)v6233;
	i8 v6235 = *(i8*)(intptr_t)v6234;
	i8 v6236 = (i8)(intptr_t)(f175_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v6236)(v6235);

	i8 v6237 = (i8)(intptr_t)c02_s00ed;
	i8 v6238 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6238)(v6237);

	i1 v6239 = (i1)+1;
	i8 v6240 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6240 = v6239;


	i1 v6248 = (i1)+0;
	i8 v6249 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6249 = v6248;

c02_04b4:;

	i8 v6250 = (i8)(intptr_t)(ws+3257);
	i1 v6251 = *(i1*)(intptr_t)v6250;
	i8 v6252 = (i8)(intptr_t)(ws+3184);
	i8 v6253 = *(i8*)(intptr_t)v6252;
	i8 v6254 = *(i8*)(intptr_t)v6253;
	i8 v6255 = v6254+(+105);
	i1 v6256 = *(i1*)(intptr_t)v6255;
	if (v6251==v6256) goto c02_04b7; else goto c02_04b6;

c02_04b6:;

	i8 v6257 = (i8)(intptr_t)(ws+3184);
	i8 v6258 = *(i8*)(intptr_t)v6257;
	i8 v6259 = *(i8*)(intptr_t)v6258;
	i8 v6260 = (i8)(intptr_t)(ws+3257);
	i1 v6261 = *(i1*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v6263;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6262)(&v6263, v6261, v6259);
	i8 v6264 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6264 = v6263;

	i8 v6265 = (i8)(intptr_t)(f229_Push);
	i2 v6266;

	((void(*)(i2* /* vid */))(intptr_t)v6265)(&v6266);
	i8 v6267 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6267 = v6266;

	i8 v6268 = (i8)(intptr_t)(f300_comma);

	((void(*)(void))(intptr_t)v6268)();

	i8 v6269 = (i8)(intptr_t)c02_s00ef;
	i8 v6270 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6270)(v6269);

	i8 v6271 = (i8)(intptr_t)(ws+3264);
	i8 v6272 = *(i8*)(intptr_t)v6271;
	i8 v6273 = *(i8*)(intptr_t)v6272;
	i8 v6274 = v6273+(+42);
	i2 v6275 = *(i2*)(intptr_t)v6274;
	i1 v6276 = v6275;
	i8 v6277 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6277)(v6276);

	i8 v6278 = (i8)(intptr_t)c02_s00f0;
	i8 v6279 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6279)(v6278);

	i8 v6280 = (i8)(intptr_t)(ws+3272);
	i2 v6281 = *(i2*)(intptr_t)v6280;
	i8 v6282 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6282)(v6281);

	i8 v6283 = (i8)(intptr_t)c02_s00f1;
	i8 v6284 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6284)(v6283);

	i8 v6285 = (i8)(intptr_t)(ws+3264);
	i8 v6286 = *(i8*)(intptr_t)v6285;
	i8 v6287 = v6286+(+48);
	i8 v6288 = *(i8*)(intptr_t)v6287;
	i8 v6289 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6289)(v6288);

	i8 v6290 = (i8)(intptr_t)c02_s00f2;
	i8 v6291 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6291)(v6290);

	i8 v6292 = (i8)(intptr_t)(ws+3257);
	i1 v6293 = *(i1*)(intptr_t)v6292;
	i1 v6294 = v6293+(+1);
	i8 v6295 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6295 = v6294;

	goto c02_04b4;

c02_04b7:;

	i8 v6296 = (i8)(intptr_t)(ws+3184);
	i8 v6297 = *(i8*)(intptr_t)v6296;
	i8 v6298 = *(i8*)(intptr_t)v6297;
	i8 v6299 = v6298+(+104);
	i1 v6300 = *(i1*)(intptr_t)v6299;
	i8 v6301 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6301 = v6300;

c02_04ba:;

	i8 v6302 = (i8)(intptr_t)(ws+3257);
	i1 v6303 = *(i1*)(intptr_t)v6302;
	i1 v6304 = (i1)+0;
	if (v6303==v6304) goto c02_04bd; else goto c02_04bc;

c02_04bc:;

	i8 v6305 = (i8)(intptr_t)(ws+3257);
	i1 v6306 = *(i1*)(intptr_t)v6305;
	i1 v6307 = v6306+(-1);
	i8 v6308 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6308 = v6307;

	i8 v6309 = (i8)(intptr_t)(ws+3184);
	i8 v6310 = *(i8*)(intptr_t)v6309;
	i8 v6311 = *(i8*)(intptr_t)v6310;
	i8 v6312 = (i8)(intptr_t)(ws+3257);
	i1 v6313 = *(i1*)(intptr_t)v6312;
	i8 v6314 = (i8)(intptr_t)(f84_GetInputParameter);
	i8 v6315;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6314)(&v6315, v6313, v6311);
	i8 v6316 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6316 = v6315;

	i8 v6317 = (i8)(intptr_t)(f229_Push);
	i2 v6318;

	((void(*)(i2* /* vid */))(intptr_t)v6317)(&v6318);
	i8 v6319 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6319 = v6318;

	i8 v6320 = (i8)(intptr_t)(f300_comma);

	((void(*)(void))(intptr_t)v6320)();

	i8 v6321 = (i8)(intptr_t)c02_s00f3;
	i8 v6322 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6322)(v6321);

	i8 v6323 = (i8)(intptr_t)(ws+3264);
	i8 v6324 = *(i8*)(intptr_t)v6323;
	i8 v6325 = *(i8*)(intptr_t)v6324;
	i8 v6326 = v6325+(+42);
	i2 v6327 = *(i2*)(intptr_t)v6326;
	i1 v6328 = v6327;
	i8 v6329 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6329)(v6328);

	i8 v6330 = (i8)(intptr_t)c02_s00f4;
	i8 v6331 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6331)(v6330);

	i8 v6332 = (i8)(intptr_t)(ws+3272);
	i2 v6333 = *(i2*)(intptr_t)v6332;
	i8 v6334 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6334)(v6333);

	i8 v6335 = (i8)(intptr_t)c02_s00f5;
	i8 v6336 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6336)(v6335);

	i8 v6337 = (i8)(intptr_t)(ws+3264);
	i8 v6338 = *(i8*)(intptr_t)v6337;
	i8 v6339 = v6338+(+48);
	i8 v6340 = *(i8*)(intptr_t)v6339;
	i8 v6341 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6341)(v6340);

	i8 v6342 = (i8)(intptr_t)c02_s00f6;
	i8 v6343 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6343)(v6342);

	goto c02_04ba;

c02_04bd:;

	i8 v6344 = (i8)(intptr_t)(ws+3184);
	i8 v6345 = *(i8*)(intptr_t)v6344;
	i8 v6346 = *(i8*)(intptr_t)v6345;
	i8 v6347 = v6346+(+104);
	i1 v6348 = *(i1*)(intptr_t)v6347;
	i8 v6349 = (i8)(intptr_t)(ws+3184);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i8 v6351 = *(i8*)(intptr_t)v6350;
	i8 v6352 = v6351+(+105);
	i1 v6353 = *(i1*)(intptr_t)v6352;
	i1 v6354 = v6348+v6353;
	i1 v6355 = (i1)+0;
	if (v6354==v6355) goto c02_04c1; else goto c02_04c2;

c02_04c1:;

	i8 v6356 = (i8)(intptr_t)c02_s00f7;
	i8 v6357 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6357)(v6356);

	goto c02_04be;

c02_04c2:;

c02_04be:;

	i8 v6358 = (i8)(intptr_t)c02_s00f8;
	i8 v6359 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6359)(v6358);

	i1 v6360 = (i1)+0;
	i8 v6361 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6361 = v6360;

c02_04c5:;

	i8 v6362 = (i8)(intptr_t)(ws+3257);
	i1 v6363 = *(i1*)(intptr_t)v6362;
	i8 v6364 = (i8)(intptr_t)(ws+3184);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i8 v6366 = *(i8*)(intptr_t)v6365;
	i8 v6367 = v6366+(+104);
	i1 v6368 = *(i1*)(intptr_t)v6367;
	if (v6363==v6368) goto c02_04c8; else goto c02_04c7;

c02_04c7:;

	i8 v6369 = (i8)(intptr_t)(ws+3184);
	i8 v6370 = *(i8*)(intptr_t)v6369;
	i8 v6371 = *(i8*)(intptr_t)v6370;
	i8 v6372 = (i8)(intptr_t)(ws+3257);
	i1 v6373 = *(i1*)(intptr_t)v6372;
	i8 v6374 = (i8)(intptr_t)(f84_GetInputParameter);
	i8 v6375;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6374)(&v6375, v6373, v6371);
	i8 v6376 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6376 = v6375;

	i8 v6377 = (i8)(intptr_t)(f231_Pop);
	i2 v6378;

	((void(*)(i2* /* vid */))(intptr_t)v6377)(&v6378);
	i8 v6379 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6379 = v6378;

	i8 v6380 = (i8)(intptr_t)c02_s00f9;
	i8 v6381 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6381)(v6380);

	i8 v6382 = (i8)(intptr_t)(ws+3264);
	i8 v6383 = *(i8*)(intptr_t)v6382;
	i8 v6384 = *(i8*)(intptr_t)v6383;
	i8 v6385 = v6384+(+42);
	i2 v6386 = *(i2*)(intptr_t)v6385;
	i1 v6387 = v6386;
	i8 v6388 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6388)(v6387);

	i8 v6389 = (i8)(intptr_t)c02_s00fa;
	i8 v6390 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6390)(v6389);

	i8 v6391 = (i8)(intptr_t)(ws+3264);
	i8 v6392 = *(i8*)(intptr_t)v6391;
	i2 v6393 = (i2)+0;
	i8 v6394 = (i8)(intptr_t)(f225_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6394)(v6393, v6392);

	i8 v6395 = (i8)(intptr_t)c02_s00fb;
	i8 v6396 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6396)(v6395);

	i8 v6397 = (i8)(intptr_t)(ws+3272);
	i2 v6398 = *(i2*)(intptr_t)v6397;
	i8 v6399 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6399)(v6398);

	i8 v6400 = (i8)(intptr_t)c02_s00fc;
	i8 v6401 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6401)(v6400);

	i8 v6402 = (i8)(intptr_t)(ws+3264);
	i8 v6403 = *(i8*)(intptr_t)v6402;
	i8 v6404 = v6403+(+48);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6406)(v6405);

	i8 v6407 = (i8)(intptr_t)c02_s00fd;
	i8 v6408 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6408)(v6407);

	i8 v6409 = (i8)(intptr_t)(ws+3257);
	i1 v6410 = *(i1*)(intptr_t)v6409;
	i1 v6411 = v6410+(+1);
	i8 v6412 = (i8)(intptr_t)(ws+3257);
	*(i1*)(intptr_t)v6412 = v6411;

	goto c02_04c5;

c02_04c8:;

endsub:;
}
	void f299_emit_46(void);
const i1 c02_s00fe[] = { 0x65,0x6e,0x64,0x73,0x75,0x62,0x3a,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f231_Pop(i2* /* vid */);
const i1 c02_s00ff[] = { 0x09,0x2a,0x70,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0100[] = { 0x20,0x3d,0x20,0x2a,0x28,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0101[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f163_E(i8 /* text */);
	void f225_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0102[] = { 0x29,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
const i1 c02_s0103[] = { 0x7d,0x0a,0 };
	void f163_E(i8 /* text */);
	void f184_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);
	void f178_EmitterPopChunk(i1 /* type */);

// emit_47 workspace at ws+3256 length ws+18
void f301_emit_47(void) {

	i8 v6414 = (i8)(intptr_t)c02_s00fe;
	i8 v6415 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6415)(v6414);

	i8 v6416 = (i8)(intptr_t)(ws+3184);
	i8 v6417 = *(i8*)(intptr_t)v6416;
	i8 v6418 = *(i8*)(intptr_t)v6417;
	i8 v6419 = v6418+(+105);
	i1 v6420 = *(i1*)(intptr_t)v6419;
	i8 v6421 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6421 = v6420;

c02_04cc:;

	i8 v6422 = (i8)(intptr_t)(ws+3256);
	i1 v6423 = *(i1*)(intptr_t)v6422;
	i1 v6424 = (i1)+0;
	if (v6423==v6424) goto c02_04cf; else goto c02_04ce;

c02_04ce:;

	i8 v6425 = (i8)(intptr_t)(ws+3256);
	i1 v6426 = *(i1*)(intptr_t)v6425;
	i1 v6427 = v6426+(-1);
	i8 v6428 = (i8)(intptr_t)(ws+3256);
	*(i1*)(intptr_t)v6428 = v6427;

	i8 v6429 = (i8)(intptr_t)(ws+3184);
	i8 v6430 = *(i8*)(intptr_t)v6429;
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = (i8)(intptr_t)(ws+3256);
	i1 v6433 = *(i1*)(intptr_t)v6432;
	i8 v6434 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v6435;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v6434)(&v6435, v6433, v6431);
	i8 v6436 = (i8)(intptr_t)(ws+3264);
	*(i8*)(intptr_t)v6436 = v6435;

	i8 v6437 = (i8)(intptr_t)(f231_Pop);
	i2 v6438;

	((void(*)(i2* /* vid */))(intptr_t)v6437)(&v6438);
	i8 v6439 = (i8)(intptr_t)(ws+3272);
	*(i2*)(intptr_t)v6439 = v6438;

	i8 v6440 = (i8)(intptr_t)c02_s00ff;
	i8 v6441 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6441)(v6440);

	i8 v6442 = (i8)(intptr_t)(ws+3272);
	i2 v6443 = *(i2*)(intptr_t)v6442;
	i8 v6444 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6444)(v6443);

	i8 v6445 = (i8)(intptr_t)c02_s0100;
	i8 v6446 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6446)(v6445);

	i8 v6447 = (i8)(intptr_t)(ws+3264);
	i8 v6448 = *(i8*)(intptr_t)v6447;
	i8 v6449 = *(i8*)(intptr_t)v6448;
	i8 v6450 = v6449+(+42);
	i2 v6451 = *(i2*)(intptr_t)v6450;
	i1 v6452 = v6451;
	i8 v6453 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v6453)(v6452);

	i8 v6454 = (i8)(intptr_t)c02_s0101;
	i8 v6455 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6455)(v6454);

	i8 v6456 = (i8)(intptr_t)(ws+3264);
	i8 v6457 = *(i8*)(intptr_t)v6456;
	i2 v6458 = (i2)+0;
	i8 v6459 = (i8)(intptr_t)(f225_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6459)(v6458, v6457);

	i8 v6460 = (i8)(intptr_t)c02_s0102;
	i8 v6461 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6461)(v6460);

	goto c02_04cc;

c02_04cf:;

	i8 v6462 = (i8)(intptr_t)c02_s0103;
	i8 v6463 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6463)(v6462);

	i8 v6464 = (i8)(intptr_t)(ws+3184);
	i8 v6465 = *(i8*)(intptr_t)v6464;
	i8 v6466 = *(i8*)(intptr_t)v6465;
	i1 v6467 = (i1)+0;
	i8 v6468 = (i8)(intptr_t)(ws+3184);
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = *(i8*)(intptr_t)v6469;
	i8 v6471 = v6470+(+74);
	i2 v6472 = *(i2*)(intptr_t)v6471;
	i8 v6473 = (i8)(intptr_t)(f184_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v6473)(v6472, v6467, v6466);

	i1 v6474 = (i1)+83;
	i8 v6475 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v6475)(v6474);

endsub:;
}
	void f301_emit_47(void);
	void f234_Call(i8 /* subr */);

// emit_48 workspace at ws+3256 length ws+0
void f302_emit_48(void) {

	i8 v6477 = (i8)(intptr_t)(ws+3184);
	i8 v6478 = *(i8*)(intptr_t)v6477;
	i8 v6479 = *(i8*)(intptr_t)v6478;
	i8 v6480 = (i8)(intptr_t)(f234_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6480)(v6479);

endsub:;
}
	void f302_emit_48(void);
	void f234_Call(i8 /* subr */);

// emit_49 workspace at ws+3256 length ws+0
void f303_emit_49(void) {

	i8 v6482 = (i8)(intptr_t)(ws+3184);
	i8 v6483 = *(i8*)(intptr_t)v6482;
	i8 v6484 = *(i8*)(intptr_t)v6483;
	i8 v6485 = (i8)(intptr_t)(f234_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6485)(v6484);

endsub:;
}
	void f303_emit_49(void);
	void f234_Call(i8 /* subr */);

// emit_50 workspace at ws+3256 length ws+0
void f304_emit_50(void) {

	i8 v6487 = (i8)(intptr_t)(ws+3184);
	i8 v6488 = *(i8*)(intptr_t)v6487;
	i8 v6489 = *(i8*)(intptr_t)v6488;
	i8 v6490 = (i8)(intptr_t)(f234_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6490)(v6489);

endsub:;
}
	void f304_emit_50(void);
	void f234_Call(i8 /* subr */);

// emit_51 workspace at ws+3256 length ws+0
void f305_emit_51(void) {

	i8 v6492 = (i8)(intptr_t)(ws+3184);
	i8 v6493 = *(i8*)(intptr_t)v6492;
	i8 v6494 = *(i8*)(intptr_t)v6493;
	i8 v6495 = (i8)(intptr_t)(f234_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6495)(v6494);

endsub:;
}
	void f305_emit_51(void);
	void f234_Call(i8 /* subr */);

// emit_52 workspace at ws+3256 length ws+0
void f306_emit_52(void) {

	i8 v6497 = (i8)(intptr_t)(ws+3184);
	i8 v6498 = *(i8*)(intptr_t)v6497;
	i8 v6499 = *(i8*)(intptr_t)v6498;
	i8 v6500 = (i8)(intptr_t)(f234_Call);

	((void(*)(i8 /* subr */))(intptr_t)v6500)(v6499);

endsub:;
}
	void f306_emit_52(void);
	void f236_LoadConstant(i4 /* value */, i1 /* width */);

// emit_62 workspace at ws+3256 length ws+0
void f307_emit_62(void) {

	i1 v6502 = (i1)+1;
	i8 v6503 = (i8)(intptr_t)(ws+3184);
	i8 v6504 = *(i8*)(intptr_t)v6503;
	i4 v6505 = *(i4*)(intptr_t)v6504;
	i8 v6506 = (i8)(intptr_t)(f236_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6506)(v6505, v6502);

endsub:;
}
	void f307_emit_62(void);
	void f236_LoadConstant(i4 /* value */, i1 /* width */);

// emit_63 workspace at ws+3256 length ws+0
void f308_emit_63(void) {

	i1 v6508 = (i1)+2;
	i8 v6509 = (i8)(intptr_t)(ws+3184);
	i8 v6510 = *(i8*)(intptr_t)v6509;
	i4 v6511 = *(i4*)(intptr_t)v6510;
	i8 v6512 = (i8)(intptr_t)(f236_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6512)(v6511, v6508);

endsub:;
}
	void f308_emit_63(void);
	void f236_LoadConstant(i4 /* value */, i1 /* width */);

// emit_64 workspace at ws+3256 length ws+0
void f309_emit_64(void) {

	i1 v6514 = (i1)+4;
	i8 v6515 = (i8)(intptr_t)(ws+3184);
	i8 v6516 = *(i8*)(intptr_t)v6515;
	i4 v6517 = *(i4*)(intptr_t)v6516;
	i8 v6518 = (i8)(intptr_t)(f236_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6518)(v6517, v6514);

endsub:;
}
	void f309_emit_64(void);
	void f236_LoadConstant(i4 /* value */, i1 /* width */);

// emit_65 workspace at ws+3256 length ws+0
void f310_emit_65(void) {

	i1 v6520 = (i1)+8;
	i8 v6521 = (i8)(intptr_t)(ws+3184);
	i8 v6522 = *(i8*)(intptr_t)v6521;
	i4 v6523 = *(i4*)(intptr_t)v6522;
	i8 v6524 = (i8)(intptr_t)(f236_LoadConstant);

	((void(*)(i4 /* value */, i1 /* width */))(intptr_t)v6524)(v6523, v6520);

endsub:;
}
	void f310_emit_65(void);
	void f229_Push(i2* /* vid */);
const i1 c02_s0104[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s0105[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f163_E(i8 /* text */);
	void f225_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0106[] = { 0x29,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_66 workspace at ws+3256 length ws+2
void f311_emit_66(void) {

	i8 v6526 = (i8)(intptr_t)(f229_Push);
	i2 v6527;

	((void(*)(i2* /* vid */))(intptr_t)v6526)(&v6527);
	i8 v6528 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v6528 = v6527;

	i8 v6529 = (i8)(intptr_t)c02_s0104;
	i8 v6530 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6530)(v6529);

	i8 v6531 = (i8)(intptr_t)(ws+3256);
	i2 v6532 = *(i2*)(intptr_t)v6531;
	i8 v6533 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v6533)(v6532);

	i8 v6534 = (i8)(intptr_t)c02_s0105;
	i8 v6535 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6535)(v6534);

	i8 v6536 = (i8)(intptr_t)(ws+3184);
	i8 v6537 = *(i8*)(intptr_t)v6536;
	i8 v6538 = *(i8*)(intptr_t)v6537;
	i8 v6539 = (i8)(intptr_t)(ws+3184);
	i8 v6540 = *(i8*)(intptr_t)v6539;
	i8 v6541 = v6540+(+8);
	i2 v6542 = *(i2*)(intptr_t)v6541;
	i8 v6543 = (i8)(intptr_t)(f225_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v6543)(v6542, v6538);

	i8 v6544 = (i8)(intptr_t)c02_s0106;
	i8 v6545 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v6545)(v6544);

endsub:;
}
	void f311_emit_66(void);
	void f237_StoreVV(i1 /* width */);

// emit_67 workspace at ws+3256 length ws+0
void f312_emit_67(void) {

	i1 v6547 = (i1)+1;
	i8 v6548 = (i8)(intptr_t)(f237_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6548)(v6547);

endsub:;
}
	void f312_emit_67(void);
	void f237_StoreVV(i1 /* width */);

// emit_68 workspace at ws+3256 length ws+0
void f313_emit_68(void) {

	i1 v6550 = (i1)+2;
	i8 v6551 = (i8)(intptr_t)(f237_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6551)(v6550);

endsub:;
}
	void f313_emit_68(void);
	void f237_StoreVV(i1 /* width */);

// emit_69 workspace at ws+3256 length ws+0
void f314_emit_69(void) {

	i1 v6553 = (i1)+4;
	i8 v6554 = (i8)(intptr_t)(f237_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6554)(v6553);

endsub:;
}
	void f314_emit_69(void);
	void f237_StoreVV(i1 /* width */);

// emit_70 workspace at ws+3256 length ws+0
void f315_emit_70(void) {

	i1 v6556 = (i1)+8;
	i8 v6557 = (i8)(intptr_t)(f237_StoreVV);

	((void(*)(i1 /* width */))(intptr_t)v6557)(v6556);

endsub:;
}
	void f315_emit_70(void);
	void f238_LoadVV(i1 /* width */);

// emit_71 workspace at ws+3256 length ws+0
void f316_emit_71(void) {

	i1 v6559 = (i1)+1;
	i8 v6560 = (i8)(intptr_t)(f238_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6560)(v6559);

endsub:;
}
	void f316_emit_71(void);
	void f238_LoadVV(i1 /* width */);

// emit_72 workspace at ws+3256 length ws+0
void f317_emit_72(void) {

	i1 v6562 = (i1)+2;
	i8 v6563 = (i8)(intptr_t)(f238_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6563)(v6562);

endsub:;
}
	void f317_emit_72(void);
	void f238_LoadVV(i1 /* width */);

// emit_73 workspace at ws+3256 length ws+0
void f318_emit_73(void) {

	i1 v6565 = (i1)+4;
	i8 v6566 = (i8)(intptr_t)(f238_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6566)(v6565);

endsub:;
}
	void f318_emit_73(void);
	void f238_LoadVV(i1 /* width */);

// emit_74 workspace at ws+3256 length ws+0
void f319_emit_74(void) {

	i1 v6568 = (i1)+8;
	i8 v6569 = (i8)(intptr_t)(f238_LoadVV);

	((void(*)(i1 /* width */))(intptr_t)v6569)(v6568);

endsub:;
}
	void f319_emit_74(void);
const i1 c02_s0107[] = { 0x2b,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_75 workspace at ws+3256 length ws+0
void f320_emit_75(void) {

	i1 v6571 = (i1)+1;
	i8 v6572 = (i8)(intptr_t)c02_s0107;
	i8 v6573 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6573)(v6572, v6571);

endsub:;
}
	void f320_emit_75(void);
const i1 c02_s0108[] = { 0x2b,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_76 workspace at ws+3256 length ws+0
void f321_emit_76(void) {

	i1 v6575 = (i1)+2;
	i8 v6576 = (i8)(intptr_t)c02_s0108;
	i8 v6577 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6577)(v6576, v6575);

endsub:;
}
	void f321_emit_76(void);
const i1 c02_s0109[] = { 0x2b,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_77 workspace at ws+3256 length ws+0
void f322_emit_77(void) {

	i1 v6579 = (i1)+4;
	i8 v6580 = (i8)(intptr_t)c02_s0109;
	i8 v6581 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6581)(v6580, v6579);

endsub:;
}
	void f322_emit_77(void);
const i1 c02_s010a[] = { 0x2b,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_78 workspace at ws+3256 length ws+0
void f323_emit_78(void) {

	i1 v6583 = (i1)+8;
	i8 v6584 = (i8)(intptr_t)c02_s010a;
	i8 v6585 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6585)(v6584, v6583);

endsub:;
}
	void f323_emit_78(void);
const i1 c02_s010b[] = { 0x2d,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_79 workspace at ws+3256 length ws+0
void f324_emit_79(void) {

	i1 v6587 = (i1)+1;
	i8 v6588 = (i8)(intptr_t)c02_s010b;
	i8 v6589 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6589)(v6588, v6587);

endsub:;
}
	void f324_emit_79(void);
const i1 c02_s010c[] = { 0x2d,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_80 workspace at ws+3256 length ws+0
void f325_emit_80(void) {

	i1 v6591 = (i1)+2;
	i8 v6592 = (i8)(intptr_t)c02_s010c;
	i8 v6593 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6593)(v6592, v6591);

endsub:;
}
	void f325_emit_80(void);
const i1 c02_s010d[] = { 0x2d,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_81 workspace at ws+3256 length ws+0
void f326_emit_81(void) {

	i1 v6595 = (i1)+4;
	i8 v6596 = (i8)(intptr_t)c02_s010d;
	i8 v6597 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6597)(v6596, v6595);

endsub:;
}
	void f326_emit_81(void);
const i1 c02_s010e[] = { 0x2d,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_82 workspace at ws+3256 length ws+0
void f327_emit_82(void) {

	i1 v6599 = (i1)+8;
	i8 v6600 = (i8)(intptr_t)c02_s010e;
	i8 v6601 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6601)(v6600, v6599);

endsub:;
}
	void f327_emit_82(void);
const i1 c02_s010f[] = { 0x2a,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_83 workspace at ws+3256 length ws+0
void f328_emit_83(void) {

	i1 v6603 = (i1)+1;
	i8 v6604 = (i8)(intptr_t)c02_s010f;
	i8 v6605 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6605)(v6604, v6603);

endsub:;
}
	void f328_emit_83(void);
const i1 c02_s0110[] = { 0x2a,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_84 workspace at ws+3256 length ws+0
void f329_emit_84(void) {

	i1 v6607 = (i1)+2;
	i8 v6608 = (i8)(intptr_t)c02_s0110;
	i8 v6609 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6609)(v6608, v6607);

endsub:;
}
	void f329_emit_84(void);
const i1 c02_s0111[] = { 0x2a,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_85 workspace at ws+3256 length ws+0
void f330_emit_85(void) {

	i1 v6611 = (i1)+4;
	i8 v6612 = (i8)(intptr_t)c02_s0111;
	i8 v6613 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6613)(v6612, v6611);

endsub:;
}
	void f330_emit_85(void);
const i1 c02_s0112[] = { 0x2a,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_86 workspace at ws+3256 length ws+0
void f331_emit_86(void) {

	i1 v6615 = (i1)+8;
	i8 v6616 = (i8)(intptr_t)c02_s0112;
	i8 v6617 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6617)(v6616, v6615);

endsub:;
}
	void f331_emit_86(void);
const i1 c02_s0113[] = { 0x2f,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_87 workspace at ws+3256 length ws+0
void f332_emit_87(void) {

	i1 v6619 = (i1)+1;
	i8 v6620 = (i8)(intptr_t)c02_s0113;
	i8 v6621 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6621)(v6620, v6619);

endsub:;
}
	void f332_emit_87(void);
const i1 c02_s0114[] = { 0x2f,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_88 workspace at ws+3256 length ws+0
void f333_emit_88(void) {

	i1 v6623 = (i1)+2;
	i8 v6624 = (i8)(intptr_t)c02_s0114;
	i8 v6625 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6625)(v6624, v6623);

endsub:;
}
	void f333_emit_88(void);
const i1 c02_s0115[] = { 0x2f,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_89 workspace at ws+3256 length ws+0
void f334_emit_89(void) {

	i1 v6627 = (i1)+4;
	i8 v6628 = (i8)(intptr_t)c02_s0115;
	i8 v6629 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6629)(v6628, v6627);

endsub:;
}
	void f334_emit_89(void);
const i1 c02_s0116[] = { 0x2f,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_90 workspace at ws+3256 length ws+0
void f335_emit_90(void) {

	i1 v6631 = (i1)+8;
	i8 v6632 = (i8)(intptr_t)c02_s0116;
	i8 v6633 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6633)(v6632, v6631);

endsub:;
}
	void f335_emit_90(void);
const i1 c02_s0117[] = { 0x25,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_91 workspace at ws+3256 length ws+0
void f336_emit_91(void) {

	i1 v6635 = (i1)+1;
	i8 v6636 = (i8)(intptr_t)c02_s0117;
	i8 v6637 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6637)(v6636, v6635);

endsub:;
}
	void f336_emit_91(void);
const i1 c02_s0118[] = { 0x25,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_92 workspace at ws+3256 length ws+0
void f337_emit_92(void) {

	i1 v6639 = (i1)+2;
	i8 v6640 = (i8)(intptr_t)c02_s0118;
	i8 v6641 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6641)(v6640, v6639);

endsub:;
}
	void f337_emit_92(void);
const i1 c02_s0119[] = { 0x25,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_93 workspace at ws+3256 length ws+0
void f338_emit_93(void) {

	i1 v6643 = (i1)+4;
	i8 v6644 = (i8)(intptr_t)c02_s0119;
	i8 v6645 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6645)(v6644, v6643);

endsub:;
}
	void f338_emit_93(void);
const i1 c02_s011a[] = { 0x25,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_94 workspace at ws+3256 length ws+0
void f339_emit_94(void) {

	i1 v6647 = (i1)+8;
	i8 v6648 = (i8)(intptr_t)c02_s011a;
	i8 v6649 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6649)(v6648, v6647);

endsub:;
}
	void f339_emit_94(void);
const i1 c02_s011b[] = { 0x2f,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_95 workspace at ws+3256 length ws+0
void f340_emit_95(void) {

	i1 v6651 = (i1)+1;
	i8 v6652 = (i8)(intptr_t)c02_s011b;
	i8 v6653 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6653)(v6652, v6651);

endsub:;
}
	void f340_emit_95(void);
const i1 c02_s011c[] = { 0x2f,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_96 workspace at ws+3256 length ws+0
void f341_emit_96(void) {

	i1 v6655 = (i1)+2;
	i8 v6656 = (i8)(intptr_t)c02_s011c;
	i8 v6657 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6657)(v6656, v6655);

endsub:;
}
	void f341_emit_96(void);
const i1 c02_s011d[] = { 0x2f,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_97 workspace at ws+3256 length ws+0
void f342_emit_97(void) {

	i1 v6659 = (i1)+4;
	i8 v6660 = (i8)(intptr_t)c02_s011d;
	i8 v6661 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6661)(v6660, v6659);

endsub:;
}
	void f342_emit_97(void);
const i1 c02_s011e[] = { 0x2f,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_98 workspace at ws+3256 length ws+0
void f343_emit_98(void) {

	i1 v6663 = (i1)+8;
	i8 v6664 = (i8)(intptr_t)c02_s011e;
	i8 v6665 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6665)(v6664, v6663);

endsub:;
}
	void f343_emit_98(void);
const i1 c02_s011f[] = { 0x25,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_99 workspace at ws+3256 length ws+0
void f344_emit_99(void) {

	i1 v6667 = (i1)+1;
	i8 v6668 = (i8)(intptr_t)c02_s011f;
	i8 v6669 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6669)(v6668, v6667);

endsub:;
}
	void f344_emit_99(void);
const i1 c02_s0120[] = { 0x25,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_100 workspace at ws+3256 length ws+0
void f345_emit_100(void) {

	i1 v6671 = (i1)+2;
	i8 v6672 = (i8)(intptr_t)c02_s0120;
	i8 v6673 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6673)(v6672, v6671);

endsub:;
}
	void f345_emit_100(void);
const i1 c02_s0121[] = { 0x25,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_101 workspace at ws+3256 length ws+0
void f346_emit_101(void) {

	i1 v6675 = (i1)+4;
	i8 v6676 = (i8)(intptr_t)c02_s0121;
	i8 v6677 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6677)(v6676, v6675);

endsub:;
}
	void f346_emit_101(void);
const i1 c02_s0122[] = { 0x25,0 };
	void f241_Op2VVSigned(i8 /* op */, i1 /* width */);

// emit_102 workspace at ws+3256 length ws+0
void f347_emit_102(void) {

	i1 v6679 = (i1)+8;
	i8 v6680 = (i8)(intptr_t)c02_s0122;
	i8 v6681 = (i8)(intptr_t)(f241_Op2VVSigned);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6681)(v6680, v6679);

endsub:;
}
	void f347_emit_102(void);
const i1 c02_s0123[] = { 0x26,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_103 workspace at ws+3256 length ws+0
void f348_emit_103(void) {

	i1 v6683 = (i1)+1;
	i8 v6684 = (i8)(intptr_t)c02_s0123;
	i8 v6685 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6685)(v6684, v6683);

endsub:;
}
	void f348_emit_103(void);
const i1 c02_s0124[] = { 0x26,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_104 workspace at ws+3256 length ws+0
void f349_emit_104(void) {

	i1 v6687 = (i1)+2;
	i8 v6688 = (i8)(intptr_t)c02_s0124;
	i8 v6689 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6689)(v6688, v6687);

endsub:;
}
	void f349_emit_104(void);
const i1 c02_s0125[] = { 0x26,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_105 workspace at ws+3256 length ws+0
void f350_emit_105(void) {

	i1 v6691 = (i1)+4;
	i8 v6692 = (i8)(intptr_t)c02_s0125;
	i8 v6693 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6693)(v6692, v6691);

endsub:;
}
	void f350_emit_105(void);
const i1 c02_s0126[] = { 0x26,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_106 workspace at ws+3256 length ws+0
void f351_emit_106(void) {

	i1 v6695 = (i1)+8;
	i8 v6696 = (i8)(intptr_t)c02_s0126;
	i8 v6697 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6697)(v6696, v6695);

endsub:;
}
	void f351_emit_106(void);
const i1 c02_s0127[] = { 0x7c,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_107 workspace at ws+3256 length ws+0
void f352_emit_107(void) {

	i1 v6699 = (i1)+1;
	i8 v6700 = (i8)(intptr_t)c02_s0127;
	i8 v6701 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6701)(v6700, v6699);

endsub:;
}
	void f352_emit_107(void);
const i1 c02_s0128[] = { 0x7c,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_108 workspace at ws+3256 length ws+0
void f353_emit_108(void) {

	i1 v6703 = (i1)+2;
	i8 v6704 = (i8)(intptr_t)c02_s0128;
	i8 v6705 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6705)(v6704, v6703);

endsub:;
}
	void f353_emit_108(void);
const i1 c02_s0129[] = { 0x7c,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_109 workspace at ws+3256 length ws+0
void f354_emit_109(void) {

	i1 v6707 = (i1)+4;
	i8 v6708 = (i8)(intptr_t)c02_s0129;
	i8 v6709 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6709)(v6708, v6707);

endsub:;
}
	void f354_emit_109(void);
const i1 c02_s012a[] = { 0x7c,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_110 workspace at ws+3256 length ws+0
void f355_emit_110(void) {

	i1 v6711 = (i1)+8;
	i8 v6712 = (i8)(intptr_t)c02_s012a;
	i8 v6713 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6713)(v6712, v6711);

endsub:;
}
	void f355_emit_110(void);
const i1 c02_s012b[] = { 0x5e,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_111 workspace at ws+3256 length ws+0
void f356_emit_111(void) {

	i1 v6715 = (i1)+1;
	i8 v6716 = (i8)(intptr_t)c02_s012b;
	i8 v6717 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6717)(v6716, v6715);

endsub:;
}
	void f356_emit_111(void);
const i1 c02_s012c[] = { 0x5e,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_112 workspace at ws+3256 length ws+0
void f357_emit_112(void) {

	i1 v6719 = (i1)+2;
	i8 v6720 = (i8)(intptr_t)c02_s012c;
	i8 v6721 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6721)(v6720, v6719);

endsub:;
}
	void f357_emit_112(void);
const i1 c02_s012d[] = { 0x5e,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_113 workspace at ws+3256 length ws+0
void f358_emit_113(void) {

	i1 v6723 = (i1)+4;
	i8 v6724 = (i8)(intptr_t)c02_s012d;
	i8 v6725 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6725)(v6724, v6723);

endsub:;
}
	void f358_emit_113(void);
const i1 c02_s012e[] = { 0x5e,0 };
	void f239_Op2VV(i8 /* op */, i1 /* width */);

// emit_114 workspace at ws+3256 length ws+0
void f359_emit_114(void) {

	i1 v6727 = (i1)+8;
	i8 v6728 = (i8)(intptr_t)c02_s012e;
	i8 v6729 = (i8)(intptr_t)(f239_Op2VV);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6729)(v6728, v6727);

endsub:;
}
	void f359_emit_114(void);
const i1 c02_s012f[] = { 0x2d,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_115 workspace at ws+3256 length ws+0
void f360_emit_115(void) {

	i1 v6731 = (i1)+1;
	i8 v6732 = (i8)(intptr_t)c02_s012f;
	i8 v6733 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6733)(v6732, v6731);

endsub:;
}
	void f360_emit_115(void);
const i1 c02_s0130[] = { 0x2d,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_116 workspace at ws+3256 length ws+0
void f361_emit_116(void) {

	i1 v6735 = (i1)+2;
	i8 v6736 = (i8)(intptr_t)c02_s0130;
	i8 v6737 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6737)(v6736, v6735);

endsub:;
}
	void f361_emit_116(void);
const i1 c02_s0131[] = { 0x2d,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_117 workspace at ws+3256 length ws+0
void f362_emit_117(void) {

	i1 v6739 = (i1)+4;
	i8 v6740 = (i8)(intptr_t)c02_s0131;
	i8 v6741 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6741)(v6740, v6739);

endsub:;
}
	void f362_emit_117(void);
const i1 c02_s0132[] = { 0x2d,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_118 workspace at ws+3256 length ws+0
void f363_emit_118(void) {

	i1 v6743 = (i1)+8;
	i8 v6744 = (i8)(intptr_t)c02_s0132;
	i8 v6745 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6745)(v6744, v6743);

endsub:;
}
	void f363_emit_118(void);
const i1 c02_s0133[] = { 0x7e,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_119 workspace at ws+3256 length ws+0
void f364_emit_119(void) {

	i1 v6747 = (i1)+1;
	i8 v6748 = (i8)(intptr_t)c02_s0133;
	i8 v6749 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6749)(v6748, v6747);

endsub:;
}
	void f364_emit_119(void);
const i1 c02_s0134[] = { 0x7e,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_120 workspace at ws+3256 length ws+0
void f365_emit_120(void) {

	i1 v6751 = (i1)+2;
	i8 v6752 = (i8)(intptr_t)c02_s0134;
	i8 v6753 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6753)(v6752, v6751);

endsub:;
}
	void f365_emit_120(void);
const i1 c02_s0135[] = { 0x7e,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_121 workspace at ws+3256 length ws+0
void f366_emit_121(void) {

	i1 v6755 = (i1)+4;
	i8 v6756 = (i8)(intptr_t)c02_s0135;
	i8 v6757 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6757)(v6756, v6755);

endsub:;
}
	void f366_emit_121(void);
const i1 c02_s0136[] = { 0x7e,0 };
	void f243_Op1V(i8 /* op */, i1 /* width */);

// emit_122 workspace at ws+3256 length ws+0
void f367_emit_122(void) {

	i1 v6759 = (i1)+8;
	i8 v6760 = (i8)(intptr_t)c02_s0136;
	i8 v6761 = (i8)(intptr_t)(f243_Op1V);

	((void(*)(i8 /* op */, i1 /* width */))(intptr_t)v6761)(v6760, v6759);

endsub:;
}
	void f367_emit_122(void);
const i1 c02_s0137[] = { 0x69,0x31,0 };
const i1 c02_s0138[] = { 0x3c,0x3c,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_123 workspace at ws+3256 length ws+0
void f368_emit_123(void) {

	i1 v6763 = (i1)+1;
	i8 v6764 = (i8)(intptr_t)c02_s0137;
	i8 v6765 = (i8)(intptr_t)c02_s0138;
	i8 v6766 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6766)(v6765, v6764, v6763);

endsub:;
}
	void f368_emit_123(void);
const i1 c02_s0139[] = { 0x69,0x32,0 };
const i1 c02_s013a[] = { 0x3c,0x3c,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_124 workspace at ws+3256 length ws+0
void f369_emit_124(void) {

	i1 v6768 = (i1)+2;
	i8 v6769 = (i8)(intptr_t)c02_s0139;
	i8 v6770 = (i8)(intptr_t)c02_s013a;
	i8 v6771 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6771)(v6770, v6769, v6768);

endsub:;
}
	void f369_emit_124(void);
const i1 c02_s013b[] = { 0x69,0x34,0 };
const i1 c02_s013c[] = { 0x3c,0x3c,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_125 workspace at ws+3256 length ws+0
void f370_emit_125(void) {

	i1 v6773 = (i1)+4;
	i8 v6774 = (i8)(intptr_t)c02_s013b;
	i8 v6775 = (i8)(intptr_t)c02_s013c;
	i8 v6776 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6776)(v6775, v6774, v6773);

endsub:;
}
	void f370_emit_125(void);
const i1 c02_s013d[] = { 0x69,0x38,0 };
const i1 c02_s013e[] = { 0x3c,0x3c,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_126 workspace at ws+3256 length ws+0
void f371_emit_126(void) {

	i1 v6778 = (i1)+8;
	i8 v6779 = (i8)(intptr_t)c02_s013d;
	i8 v6780 = (i8)(intptr_t)c02_s013e;
	i8 v6781 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6781)(v6780, v6779, v6778);

endsub:;
}
	void f371_emit_126(void);
const i1 c02_s013f[] = { 0x69,0x31,0 };
const i1 c02_s0140[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_127 workspace at ws+3256 length ws+0
void f372_emit_127(void) {

	i1 v6783 = (i1)+1;
	i8 v6784 = (i8)(intptr_t)c02_s013f;
	i8 v6785 = (i8)(intptr_t)c02_s0140;
	i8 v6786 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6786)(v6785, v6784, v6783);

endsub:;
}
	void f372_emit_127(void);
const i1 c02_s0141[] = { 0x69,0x32,0 };
const i1 c02_s0142[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_128 workspace at ws+3256 length ws+0
void f373_emit_128(void) {

	i1 v6788 = (i1)+2;
	i8 v6789 = (i8)(intptr_t)c02_s0141;
	i8 v6790 = (i8)(intptr_t)c02_s0142;
	i8 v6791 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6791)(v6790, v6789, v6788);

endsub:;
}
	void f373_emit_128(void);
const i1 c02_s0143[] = { 0x69,0x34,0 };
const i1 c02_s0144[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_129 workspace at ws+3256 length ws+0
void f374_emit_129(void) {

	i1 v6793 = (i1)+4;
	i8 v6794 = (i8)(intptr_t)c02_s0143;
	i8 v6795 = (i8)(intptr_t)c02_s0144;
	i8 v6796 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6796)(v6795, v6794, v6793);

endsub:;
}
	void f374_emit_129(void);
const i1 c02_s0145[] = { 0x69,0x38,0 };
const i1 c02_s0146[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_130 workspace at ws+3256 length ws+0
void f375_emit_130(void) {

	i1 v6798 = (i1)+8;
	i8 v6799 = (i8)(intptr_t)c02_s0145;
	i8 v6800 = (i8)(intptr_t)c02_s0146;
	i8 v6801 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6801)(v6800, v6799, v6798);

endsub:;
}
	void f375_emit_130(void);
const i1 c02_s0147[] = { 0x73,0x31,0 };
const i1 c02_s0148[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_131 workspace at ws+3256 length ws+0
void f376_emit_131(void) {

	i1 v6803 = (i1)+1;
	i8 v6804 = (i8)(intptr_t)c02_s0147;
	i8 v6805 = (i8)(intptr_t)c02_s0148;
	i8 v6806 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6806)(v6805, v6804, v6803);

endsub:;
}
	void f376_emit_131(void);
const i1 c02_s0149[] = { 0x73,0x32,0 };
const i1 c02_s014a[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_132 workspace at ws+3256 length ws+0
void f377_emit_132(void) {

	i1 v6808 = (i1)+2;
	i8 v6809 = (i8)(intptr_t)c02_s0149;
	i8 v6810 = (i8)(intptr_t)c02_s014a;
	i8 v6811 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6811)(v6810, v6809, v6808);

endsub:;
}
	void f377_emit_132(void);
const i1 c02_s014b[] = { 0x73,0x34,0 };
const i1 c02_s014c[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_133 workspace at ws+3256 length ws+0
void f378_emit_133(void) {

	i1 v6813 = (i1)+4;
	i8 v6814 = (i8)(intptr_t)c02_s014b;
	i8 v6815 = (i8)(intptr_t)c02_s014c;
	i8 v6816 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6816)(v6815, v6814, v6813);

endsub:;
}
	void f378_emit_133(void);
const i1 c02_s014d[] = { 0x73,0x38,0 };
const i1 c02_s014e[] = { 0x3e,0x3e,0 };
	void f244_Shift(i8 /* op */, i8 /* type */, i1 /* width */);

// emit_134 workspace at ws+3256 length ws+0
void f379_emit_134(void) {

	i1 v6818 = (i1)+8;
	i8 v6819 = (i8)(intptr_t)c02_s014d;
	i8 v6820 = (i8)(intptr_t)c02_s014e;
	i8 v6821 = (i8)(intptr_t)(f244_Shift);

	((void(*)(i8 /* op */, i8 /* type */, i1 /* width */))(intptr_t)v6821)(v6820, v6819, v6818);

endsub:;
}
	void f379_emit_134(void);
const i1 c02_s014f[] = { 0x3d,0x3d,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_135 workspace at ws+3256 length ws+0
void f380_emit_135(void) {

	i8 v6823 = (i8)(intptr_t)(ws+3176);
	i8 v6824 = *(i8*)(intptr_t)v6823;
	i8 v6825 = v6824+(+16);
	i8 v6826 = *(i8*)(intptr_t)v6825;
	i8 v6827 = (i8)(intptr_t)c02_s014f;
	i8 v6828 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6828)(v6827, v6826);

endsub:;
}
	void f380_emit_135(void);
const i1 c02_s0150[] = { 0x3d,0x3d,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_136 workspace at ws+3256 length ws+0
void f381_emit_136(void) {

	i8 v6830 = (i8)(intptr_t)(ws+3176);
	i8 v6831 = *(i8*)(intptr_t)v6830;
	i8 v6832 = v6831+(+16);
	i8 v6833 = *(i8*)(intptr_t)v6832;
	i8 v6834 = (i8)(intptr_t)c02_s0150;
	i8 v6835 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6835)(v6834, v6833);

endsub:;
}
	void f381_emit_136(void);
const i1 c02_s0151[] = { 0x3d,0x3d,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_137 workspace at ws+3256 length ws+0
void f382_emit_137(void) {

	i8 v6837 = (i8)(intptr_t)(ws+3176);
	i8 v6838 = *(i8*)(intptr_t)v6837;
	i8 v6839 = v6838+(+16);
	i8 v6840 = *(i8*)(intptr_t)v6839;
	i8 v6841 = (i8)(intptr_t)c02_s0151;
	i8 v6842 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6842)(v6841, v6840);

endsub:;
}
	void f382_emit_137(void);
const i1 c02_s0152[] = { 0x3d,0x3d,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_138 workspace at ws+3256 length ws+0
void f383_emit_138(void) {

	i8 v6844 = (i8)(intptr_t)(ws+3176);
	i8 v6845 = *(i8*)(intptr_t)v6844;
	i8 v6846 = v6845+(+16);
	i8 v6847 = *(i8*)(intptr_t)v6846;
	i8 v6848 = (i8)(intptr_t)c02_s0152;
	i8 v6849 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6849)(v6848, v6847);

endsub:;
}
	void f383_emit_138(void);
const i1 c02_s0153[] = { 0x3c,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_139 workspace at ws+3256 length ws+0
void f384_emit_139(void) {

	i8 v6851 = (i8)(intptr_t)(ws+3176);
	i8 v6852 = *(i8*)(intptr_t)v6851;
	i8 v6853 = v6852+(+16);
	i8 v6854 = *(i8*)(intptr_t)v6853;
	i8 v6855 = (i8)(intptr_t)c02_s0153;
	i8 v6856 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6856)(v6855, v6854);

endsub:;
}
	void f384_emit_139(void);
const i1 c02_s0154[] = { 0x3c,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_140 workspace at ws+3256 length ws+0
void f385_emit_140(void) {

	i8 v6858 = (i8)(intptr_t)(ws+3176);
	i8 v6859 = *(i8*)(intptr_t)v6858;
	i8 v6860 = v6859+(+16);
	i8 v6861 = *(i8*)(intptr_t)v6860;
	i8 v6862 = (i8)(intptr_t)c02_s0154;
	i8 v6863 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6863)(v6862, v6861);

endsub:;
}
	void f385_emit_140(void);
const i1 c02_s0155[] = { 0x3c,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_141 workspace at ws+3256 length ws+0
void f386_emit_141(void) {

	i8 v6865 = (i8)(intptr_t)(ws+3176);
	i8 v6866 = *(i8*)(intptr_t)v6865;
	i8 v6867 = v6866+(+16);
	i8 v6868 = *(i8*)(intptr_t)v6867;
	i8 v6869 = (i8)(intptr_t)c02_s0155;
	i8 v6870 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6870)(v6869, v6868);

endsub:;
}
	void f386_emit_141(void);
const i1 c02_s0156[] = { 0x3c,0 };
	void f245_Branch(i8 /* op */, i8 /* node */);

// emit_142 workspace at ws+3256 length ws+0
void f387_emit_142(void) {

	i8 v6872 = (i8)(intptr_t)(ws+3176);
	i8 v6873 = *(i8*)(intptr_t)v6872;
	i8 v6874 = v6873+(+16);
	i8 v6875 = *(i8*)(intptr_t)v6874;
	i8 v6876 = (i8)(intptr_t)c02_s0156;
	i8 v6877 = (i8)(intptr_t)(f245_Branch);

	((void(*)(i8 /* op */, i8 /* node */))(intptr_t)v6877)(v6876, v6875);

endsub:;
}
	void f387_emit_142(void);
const i1 c02_s0157[] = { 0x3c,0 };
	void f246_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_143 workspace at ws+3256 length ws+0
void f388_emit_143(void) {

	i8 v6879 = (i8)(intptr_t)(ws+3176);
	i8 v6880 = *(i8*)(intptr_t)v6879;
	i8 v6881 = v6880+(+16);
	i8 v6882 = *(i8*)(intptr_t)v6881;
	i1 v6883 = (i1)+1;
	i8 v6884 = (i8)(intptr_t)c02_s0157;
	i8 v6885 = (i8)(intptr_t)(f246_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6885)(v6884, v6883, v6882);

endsub:;
}
	void f388_emit_143(void);
const i1 c02_s0158[] = { 0x3c,0 };
	void f246_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_144 workspace at ws+3256 length ws+0
void f389_emit_144(void) {

	i8 v6887 = (i8)(intptr_t)(ws+3176);
	i8 v6888 = *(i8*)(intptr_t)v6887;
	i8 v6889 = v6888+(+16);
	i8 v6890 = *(i8*)(intptr_t)v6889;
	i1 v6891 = (i1)+2;
	i8 v6892 = (i8)(intptr_t)c02_s0158;
	i8 v6893 = (i8)(intptr_t)(f246_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6893)(v6892, v6891, v6890);

endsub:;
}
	void f389_emit_144(void);
const i1 c02_s0159[] = { 0x3c,0 };
	void f246_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_145 workspace at ws+3256 length ws+0
void f390_emit_145(void) {

	i8 v6895 = (i8)(intptr_t)(ws+3176);
	i8 v6896 = *(i8*)(intptr_t)v6895;
	i8 v6897 = v6896+(+16);
	i8 v6898 = *(i8*)(intptr_t)v6897;
	i1 v6899 = (i1)+4;
	i8 v6900 = (i8)(intptr_t)c02_s0159;
	i8 v6901 = (i8)(intptr_t)(f246_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6901)(v6900, v6899, v6898);

endsub:;
}
	void f390_emit_145(void);
const i1 c02_s015a[] = { 0x3c,0 };
	void f246_BranchSigned(i8 /* op */, i1 /* width */, i8 /* node */);

// emit_146 workspace at ws+3256 length ws+0
void f391_emit_146(void) {

	i8 v6903 = (i8)(intptr_t)(ws+3176);
	i8 v6904 = *(i8*)(intptr_t)v6903;
	i8 v6905 = v6904+(+16);
	i8 v6906 = *(i8*)(intptr_t)v6905;
	i1 v6907 = (i1)+8;
	i8 v6908 = (i8)(intptr_t)c02_s015a;
	i8 v6909 = (i8)(intptr_t)(f246_BranchSigned);

	((void(*)(i8 /* op */, i1 /* width */, i8 /* node */))(intptr_t)v6909)(v6908, v6907, v6906);

endsub:;
}
	void f391_emit_146(void);
	void f248_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_151 workspace at ws+3256 length ws+0
void f392_emit_151(void) {

	i8 v6911 = (i8)(intptr_t)(ws+3184);
	i8 v6912 = *(i8*)(intptr_t)v6911;
	i4 v6913 = *(i4*)(intptr_t)v6912;
	i4 v6914 = v6913&(+255);
	i8 v6915 = (i8)(intptr_t)(ws+3184);
	i8 v6916 = *(i8*)(intptr_t)v6915;
	i8 v6917 = v6916+(+4);
	i2 v6918 = *(i2*)(intptr_t)v6917;
	i8 v6919 = (i8)(intptr_t)(f248_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6919)(v6918, v6914);

endsub:;
}
	void f392_emit_151(void);
	void f248_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_152 workspace at ws+3256 length ws+0
void f393_emit_152(void) {

	i8 v6921 = (i8)(intptr_t)(ws+3184);
	i8 v6922 = *(i8*)(intptr_t)v6921;
	i4 v6923 = *(i4*)(intptr_t)v6922;
	i4 v6924 = v6923&(+65535);
	i8 v6925 = (i8)(intptr_t)(ws+3184);
	i8 v6926 = *(i8*)(intptr_t)v6925;
	i8 v6927 = v6926+(+4);
	i2 v6928 = *(i2*)(intptr_t)v6927;
	i8 v6929 = (i8)(intptr_t)(f248_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6929)(v6928, v6924);

endsub:;
}
	void f393_emit_152(void);
	void f248_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_153 workspace at ws+3256 length ws+0
void f394_emit_153(void) {

	i8 v6931 = (i8)(intptr_t)(ws+3184);
	i8 v6932 = *(i8*)(intptr_t)v6931;
	i4 v6933 = *(i4*)(intptr_t)v6932;
	i4 v6934 = v6933&(-1);
	i8 v6935 = (i8)(intptr_t)(ws+3184);
	i8 v6936 = *(i8*)(intptr_t)v6935;
	i8 v6937 = v6936+(+4);
	i2 v6938 = *(i2*)(intptr_t)v6937;
	i8 v6939 = (i8)(intptr_t)(f248_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6939)(v6938, v6934);

endsub:;
}
	void f394_emit_153(void);
	void f248_Whencase(i2 /* falselabel */, i4 /* value */);

// emit_154 workspace at ws+3256 length ws+0
void f395_emit_154(void) {

	i8 v6941 = (i8)(intptr_t)(ws+3184);
	i8 v6942 = *(i8*)(intptr_t)v6941;
	i4 v6943 = *(i4*)(intptr_t)v6942;
	i8 v6944 = (i8)(intptr_t)(ws+3184);
	i8 v6945 = *(i8*)(intptr_t)v6944;
	i8 v6946 = v6945+(+4);
	i2 v6947 = *(i2*)(intptr_t)v6946;
	i8 v6948 = (i8)(intptr_t)(f248_Whencase);

	((void(*)(i2 /* falselabel */, i4 /* value */))(intptr_t)v6948)(v6947, v6943);

endsub:;
}
	void f395_emit_154(void);

// emit_155 workspace at ws+3256 length ws+0
void f396_emit_155(void) {

	i8 v6950 = (i8)(intptr_t)(ws+1192);
	i1 v6951 = *(i1*)(intptr_t)v6950;
	i1 v6952 = v6951+(-1);
	i8 v6953 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6953 = v6952;

endsub:;
}
	void f396_emit_155(void);

// emit_156 workspace at ws+3256 length ws+0
void f397_emit_156(void) {

	i8 v6955 = (i8)(intptr_t)(ws+1192);
	i1 v6956 = *(i1*)(intptr_t)v6955;
	i1 v6957 = v6956+(-1);
	i8 v6958 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6958 = v6957;

endsub:;
}
	void f397_emit_156(void);

// emit_157 workspace at ws+3256 length ws+0
void f398_emit_157(void) {

	i8 v6960 = (i8)(intptr_t)(ws+1192);
	i1 v6961 = *(i1*)(intptr_t)v6960;
	i1 v6962 = v6961+(-1);
	i8 v6963 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6963 = v6962;

endsub:;
}
	void f398_emit_157(void);

// emit_158 workspace at ws+3256 length ws+0
void f399_emit_158(void) {

	i8 v6965 = (i8)(intptr_t)(ws+1192);
	i1 v6966 = *(i1*)(intptr_t)v6965;
	i1 v6967 = v6966+(-1);
	i8 v6968 = (i8)(intptr_t)(ws+1192);
	*(i1*)(intptr_t)v6968 = v6967;

endsub:;
}
	void f399_emit_158(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_159 workspace at ws+3256 length ws+0
void f400_emit_159(void) {

	i1 v6970 = (i1)+1;
	i1 v6971 = (i1)+2;
	i8 v6972 = (i8)(intptr_t)(ws+3184);
	i8 v6973 = *(i8*)(intptr_t)v6972;
	i1 v6974 = *(i1*)(intptr_t)v6973;
	i8 v6975 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6975)(v6974, v6971, v6970);

endsub:;
}
	void f400_emit_159(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_160 workspace at ws+3256 length ws+0
void f401_emit_160(void) {

	i1 v6977 = (i1)+1;
	i1 v6978 = (i1)+4;
	i8 v6979 = (i8)(intptr_t)(ws+3184);
	i8 v6980 = *(i8*)(intptr_t)v6979;
	i1 v6981 = *(i1*)(intptr_t)v6980;
	i8 v6982 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6982)(v6981, v6978, v6977);

endsub:;
}
	void f401_emit_160(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_161 workspace at ws+3256 length ws+0
void f402_emit_161(void) {

	i1 v6984 = (i1)+1;
	i1 v6985 = (i1)+8;
	i8 v6986 = (i8)(intptr_t)(ws+3184);
	i8 v6987 = *(i8*)(intptr_t)v6986;
	i1 v6988 = *(i1*)(intptr_t)v6987;
	i8 v6989 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6989)(v6988, v6985, v6984);

endsub:;
}
	void f402_emit_161(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_162 workspace at ws+3256 length ws+0
void f403_emit_162(void) {

	i1 v6991 = (i1)+2;
	i1 v6992 = (i1)+1;
	i8 v6993 = (i8)(intptr_t)(ws+3184);
	i8 v6994 = *(i8*)(intptr_t)v6993;
	i1 v6995 = *(i1*)(intptr_t)v6994;
	i8 v6996 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v6996)(v6995, v6992, v6991);

endsub:;
}
	void f403_emit_162(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_163 workspace at ws+3256 length ws+0
void f404_emit_163(void) {

	i1 v6998 = (i1)+2;
	i1 v6999 = (i1)+4;
	i8 v7000 = (i8)(intptr_t)(ws+3184);
	i8 v7001 = *(i8*)(intptr_t)v7000;
	i1 v7002 = *(i1*)(intptr_t)v7001;
	i8 v7003 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7003)(v7002, v6999, v6998);

endsub:;
}
	void f404_emit_163(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_164 workspace at ws+3256 length ws+0
void f405_emit_164(void) {

	i1 v7005 = (i1)+2;
	i1 v7006 = (i1)+8;
	i8 v7007 = (i8)(intptr_t)(ws+3184);
	i8 v7008 = *(i8*)(intptr_t)v7007;
	i1 v7009 = *(i1*)(intptr_t)v7008;
	i8 v7010 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7010)(v7009, v7006, v7005);

endsub:;
}
	void f405_emit_164(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_165 workspace at ws+3256 length ws+0
void f406_emit_165(void) {

	i1 v7012 = (i1)+4;
	i1 v7013 = (i1)+1;
	i8 v7014 = (i8)(intptr_t)(ws+3184);
	i8 v7015 = *(i8*)(intptr_t)v7014;
	i1 v7016 = *(i1*)(intptr_t)v7015;
	i8 v7017 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7017)(v7016, v7013, v7012);

endsub:;
}
	void f406_emit_165(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_166 workspace at ws+3256 length ws+0
void f407_emit_166(void) {

	i1 v7019 = (i1)+4;
	i1 v7020 = (i1)+2;
	i8 v7021 = (i8)(intptr_t)(ws+3184);
	i8 v7022 = *(i8*)(intptr_t)v7021;
	i1 v7023 = *(i1*)(intptr_t)v7022;
	i8 v7024 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7024)(v7023, v7020, v7019);

endsub:;
}
	void f407_emit_166(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_167 workspace at ws+3256 length ws+0
void f408_emit_167(void) {

	i1 v7026 = (i1)+4;
	i1 v7027 = (i1)+8;
	i8 v7028 = (i8)(intptr_t)(ws+3184);
	i8 v7029 = *(i8*)(intptr_t)v7028;
	i1 v7030 = *(i1*)(intptr_t)v7029;
	i8 v7031 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7031)(v7030, v7027, v7026);

endsub:;
}
	void f408_emit_167(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_168 workspace at ws+3256 length ws+0
void f409_emit_168(void) {

	i1 v7033 = (i1)+8;
	i1 v7034 = (i1)+1;
	i8 v7035 = (i8)(intptr_t)(ws+3184);
	i8 v7036 = *(i8*)(intptr_t)v7035;
	i1 v7037 = *(i1*)(intptr_t)v7036;
	i8 v7038 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7038)(v7037, v7034, v7033);

endsub:;
}
	void f409_emit_168(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_169 workspace at ws+3256 length ws+0
void f410_emit_169(void) {

	i1 v7040 = (i1)+8;
	i1 v7041 = (i1)+2;
	i8 v7042 = (i8)(intptr_t)(ws+3184);
	i8 v7043 = *(i8*)(intptr_t)v7042;
	i1 v7044 = *(i1*)(intptr_t)v7043;
	i8 v7045 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7045)(v7044, v7041, v7040);

endsub:;
}
	void f410_emit_169(void);
	void f249_Cast(i1 /* sext */, i1 /* dest */, i1 /* src */);

// emit_170 workspace at ws+3256 length ws+0
void f411_emit_170(void) {

	i1 v7047 = (i1)+8;
	i1 v7048 = (i1)+4;
	i8 v7049 = (i8)(intptr_t)(ws+3184);
	i8 v7050 = *(i8*)(intptr_t)v7049;
	i1 v7051 = *(i1*)(intptr_t)v7050;
	i8 v7052 = (i8)(intptr_t)(f249_Cast);

	((void(*)(i1 /* sext */, i1 /* dest */, i1 /* src */))(intptr_t)v7052)(v7051, v7048, v7047);

endsub:;
}
	void f411_emit_170(void);
	void f229_Push(i2* /* vid */);
const i1 c02_s015b[] = { 0x09,0x69,0x38,0x20,0x76,0 };
	void f163_E(i8 /* text */);
	void f165_E_u16(i2 /* value */);
const i1 c02_s015c[] = { 0x20,0x3d,0x20,0x28,0x69,0x38,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0 };
	void f163_E(i8 /* text */);
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);
	void f250_E_string(i2* /* sid */, i8 /* text */);
	void f172_E_h16(i2 /* value */);
const i1 c02_s015d[] = { 0x3b,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_171 workspace at ws+3256 length ws+2
void f412_emit_171(void) {

	i8 v7054 = (i8)(intptr_t)(f229_Push);
	i2 v7055;

	((void(*)(i2* /* vid */))(intptr_t)v7054)(&v7055);
	i8 v7056 = (i8)(intptr_t)(ws+3256);
	*(i2*)(intptr_t)v7056 = v7055;

	i8 v7057 = (i8)(intptr_t)c02_s015b;
	i8 v7058 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7058)(v7057);

	i8 v7059 = (i8)(intptr_t)(ws+3256);
	i2 v7060 = *(i2*)(intptr_t)v7059;
	i8 v7061 = (i8)(intptr_t)(f165_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v7061)(v7060);

	i8 v7062 = (i8)(intptr_t)c02_s015c;
	i8 v7063 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7063)(v7062);

	i1 v7064 = (i1)+3;
	i8 v7065 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7065)(v7064);

	i1 v7066 = (i1)+115;
	i8 v7067 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7067)(v7066);

	i8 v7068 = (i8)(intptr_t)(ws+3184);
	i8 v7069 = *(i8*)(intptr_t)v7068;
	i8 v7070 = *(i8*)(intptr_t)v7069;
	i8 v7071 = (i8)(intptr_t)(f250_E_string);
	i2 v7072;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v7071)(&v7072, v7070);
	i8 v7073 = (i8)(intptr_t)(f172_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v7073)(v7072);

	i8 v7074 = (i8)(intptr_t)c02_s015d;
	i8 v7075 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7075)(v7074);

endsub:;
}
	void f412_emit_171(void);
	void f177_EmitterPushChunk(void);
	void f155_E_b16(i2 /* word */);
const i1 c02_s015e[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x64,0x61,0x74,0x61,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
const i1 c02_s015f[] = { 0x5b,0x5d,0x20,0x3d,0x20,0x7b,0x20,0x2f,0x2f,0x20,0 };
	void f163_E(i8 /* text */);
	void f163_E(i8 /* text */);
	void f160_E_nl(void);

// emit_172 workspace at ws+3256 length ws+0
void f413_emit_172(void) {

	i8 v7077 = (i8)(intptr_t)(f177_EmitterPushChunk);

	((void(*)(void))(intptr_t)v7077)();

	i8 v7078 = (i8)(intptr_t)(ws+40);
	i8 v7079 = *(i8*)(intptr_t)v7078;
	i8 v7080 = v7079+(+72);
	i2 v7081 = *(i2*)(intptr_t)v7080;
	i8 v7082 = (i8)(intptr_t)(f155_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v7082)(v7081);

	i8 v7083 = (i8)(intptr_t)c02_s015e;
	i8 v7084 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7084)(v7083);

	i8 v7085 = (i8)(intptr_t)(ws+3184);
	i8 v7086 = *(i8*)(intptr_t)v7085;
	i8 v7087 = *(i8*)(intptr_t)v7086;
	i8 v7088 = v7087+(+24);
	i8 v7089 = *(i8*)(intptr_t)v7088;
	i8 v7090 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7090)(v7089);

	i8 v7091 = (i8)(intptr_t)c02_s015f;
	i8 v7092 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7092)(v7091);

	i8 v7093 = (i8)(intptr_t)(ws+3184);
	i8 v7094 = *(i8*)(intptr_t)v7093;
	i8 v7095 = *(i8*)(intptr_t)v7094;
	i8 v7096 = v7095+(+48);
	i8 v7097 = *(i8*)(intptr_t)v7096;
	i8 v7098 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7098)(v7097);

	i8 v7099 = (i8)(intptr_t)(f160_E_nl);

	((void(*)(void))(intptr_t)v7099)();

	i1 v7100 = (i1)+0;
	i8 v7101 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v7101 = v7100;

endsub:;
}
	void f413_emit_172(void);
	void f252_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_173 workspace at ws+3256 length ws+0
void f414_emit_173(void) {

	i8 v7103 = (i8)(intptr_t)(ws+3184);
	i8 v7104 = *(i8*)(intptr_t)v7103;
	i1 v7105 = (i1)+1;
	i8 v7106 = (i8)(intptr_t)(f252_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7106)(v7105, v7104);

endsub:;
}
	void f414_emit_173(void);
	void f252_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_174 workspace at ws+3256 length ws+0
void f415_emit_174(void) {

	i8 v7108 = (i8)(intptr_t)(ws+3184);
	i8 v7109 = *(i8*)(intptr_t)v7108;
	i1 v7110 = (i1)+2;
	i8 v7111 = (i8)(intptr_t)(f252_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7111)(v7110, v7109);

endsub:;
}
	void f415_emit_174(void);
	void f252_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_175 workspace at ws+3256 length ws+0
void f416_emit_175(void) {

	i8 v7113 = (i8)(intptr_t)(ws+3184);
	i8 v7114 = *(i8*)(intptr_t)v7113;
	i1 v7115 = (i1)+4;
	i8 v7116 = (i8)(intptr_t)(f252_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7116)(v7115, v7114);

endsub:;
}
	void f416_emit_175(void);
	void f252_E_bytes(i1 /* width */, i8 /* ptr */);

// emit_176 workspace at ws+3256 length ws+0
void f417_emit_176(void) {

	i8 v7118 = (i8)(intptr_t)(ws+3184);
	i8 v7119 = *(i8*)(intptr_t)v7118;
	i1 v7120 = (i1)+8;
	i8 v7121 = (i8)(intptr_t)(f252_E_bytes);

	((void(*)(i1 /* width */, i8 /* ptr */))(intptr_t)v7121)(v7120, v7119);

endsub:;
}
	void f417_emit_176(void);
	void f59_StartError(void);
const i1 c02_s0160[] = { 0x62,0x61,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x61,0x6c,0x69,0x67,0x6e,0x6d,0x65,0x6e,0x74,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f60_EndError(void);
const i1 c02_s0161[] = { 0x09,0x7b,0x20,0x2e,0x70,0x74,0x72,0x20,0x3d,0x20,0x28,0x76,0x6f,0x69,0x64,0x2a,0x29,0 };
	void f163_E(i8 /* text */);
	void f154_E_b8(i1 /* byte */);
	void f154_E_b8(i1 /* byte */);
	void f250_E_string(i2* /* sid */, i8 /* text */);
	void f172_E_h16(i2 /* value */);
const i1 c02_s0162[] = { 0x20,0x7d,0x2c,0x0a,0 };
	void f163_E(i8 /* text */);

// emit_177 workspace at ws+3256 length ws+0
void f418_emit_177(void) {

	i8 v7123 = (i8)(intptr_t)(ws+1218);
	i1 v7124 = *(i1*)(intptr_t)v7123;
	i1 v7125 = (i1)+0;
	if (v7124==v7125) goto c02_0549; else goto c02_0548;

c02_0548:;

	i8 v7126 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v7126)();

	i8 v7127 = (i8)(intptr_t)c02_s0160;
	i8 v7128 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7128)(v7127);

	i8 v7129 = (i8)(intptr_t)(ws+1218);
	i1 v7130 = *(i1*)(intptr_t)v7129;
	i8 v7131 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7131)(v7130);

	i8 v7132 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v7132)();

	goto c02_0545;

c02_0549:;

c02_0545:;

	i8 v7133 = (i8)(intptr_t)c02_s0161;
	i8 v7134 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7134)(v7133);

	i1 v7135 = (i1)+3;
	i8 v7136 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7136)(v7135);

	i1 v7137 = (i1)+115;
	i8 v7138 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7138)(v7137);

	i8 v7139 = (i8)(intptr_t)(ws+3184);
	i8 v7140 = *(i8*)(intptr_t)v7139;
	i8 v7141 = *(i8*)(intptr_t)v7140;
	i8 v7142 = (i8)(intptr_t)(f250_E_string);
	i2 v7143;

	((void(*)(i2* /* sid */, i8 /* text */))(intptr_t)v7142)(&v7143, v7141);
	i8 v7144 = (i8)(intptr_t)(f172_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v7144)(v7143);

	i8 v7145 = (i8)(intptr_t)c02_s0162;
	i8 v7146 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7146)(v7145);

endsub:;
}
	void f418_emit_177(void);
	void f251_FlushInitialiserBuffer(void);
const i1 c02_s0163[] = { 0x7d,0x3b,0x0a,0 };
	void f163_E(i8 /* text */);
	void f178_EmitterPopChunk(i1 /* type */);

// emit_178 workspace at ws+3256 length ws+0
void f419_emit_178(void) {

	i8 v7148 = (i8)(intptr_t)(f251_FlushInitialiserBuffer);

	((void(*)(void))(intptr_t)v7148)();

	i8 v7149 = (i8)(intptr_t)c02_s0163;
	i8 v7150 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7150)(v7149);

	i1 v7151 = (i1)+83;
	i8 v7152 = (i8)(intptr_t)(f178_EmitterPopChunk);

	((void(*)(i1 /* type */))(intptr_t)v7152)(v7151);

endsub:;
}
	void f419_emit_178(void);
	void f159_E_tab(void);

// emit_181 workspace at ws+3256 length ws+0
void f420_emit_181(void) {

	i8 v7154 = (i8)(intptr_t)(f159_E_tab);

	((void(*)(void))(intptr_t)v7154)();

endsub:;
}
	void f420_emit_181(void);
	void f163_E(i8 /* text */);
	void f157_E_space(void);

// emit_182 workspace at ws+3256 length ws+0
void f421_emit_182(void) {

	i8 v7156 = (i8)(intptr_t)(ws+3184);
	i8 v7157 = *(i8*)(intptr_t)v7156;
	i8 v7158 = *(i8*)(intptr_t)v7157;
	i8 v7159 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7159)(v7158);

	i8 v7160 = (i8)(intptr_t)(f157_E_space);

	((void(*)(void))(intptr_t)v7160)();

endsub:;
}
	void f421_emit_182(void);
const i1 c02_s0164[] = { 0x2a,0x28,0x69,0 };
	void f163_E(i8 /* text */);
	void f166_E_u8(i1 /* value */);
const i1 c02_s0165[] = { 0x2a,0x29,0x28,0x69,0x6e,0x74,0x70,0x74,0x72,0x5f,0x74,0x29,0x28,0 };
	void f163_E(i8 /* text */);
	void f225_E_symref(i2 /* off */, i8 /* sym */);
const i1 c02_s0166[] = { 0x29,0 };
	void f163_E(i8 /* text */);
	void f175_E_subref(i8 /* subr */);
	void f157_E_space(void);

// emit_183 workspace at ws+3256 length ws+0
void f422_emit_183(void) {

	i8 v7162 = (i8)(intptr_t)(ws+3184);
	i8 v7163 = *(i8*)(intptr_t)v7162;
	i8 v7164 = *(i8*)(intptr_t)v7163;
	i8 v7165 = v7164+(+46);
	i1 v7166 = *(i1*)(intptr_t)v7165;
	i1 v7167 = (i1)+28;
	if (v7166==v7167) goto c02_0551; else goto c02_0552;

c02_0551:;

	i8 v7168 = (i8)(intptr_t)c02_s0164;
	i8 v7169 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7169)(v7168);

	i8 v7170 = (i8)(intptr_t)(ws+3184);
	i8 v7171 = *(i8*)(intptr_t)v7170;
	i8 v7172 = *(i8*)(intptr_t)v7171;
	i8 v7173 = *(i8*)(intptr_t)v7172;
	i8 v7174 = v7173+(+42);
	i2 v7175 = *(i2*)(intptr_t)v7174;
	i1 v7176 = v7175;
	i8 v7177 = (i8)(intptr_t)(f166_E_u8);

	((void(*)(i1 /* value */))(intptr_t)v7177)(v7176);

	i8 v7178 = (i8)(intptr_t)c02_s0165;
	i8 v7179 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7179)(v7178);

	i8 v7180 = (i8)(intptr_t)(ws+3184);
	i8 v7181 = *(i8*)(intptr_t)v7180;
	i8 v7182 = *(i8*)(intptr_t)v7181;
	i2 v7183 = (i2)+0;
	i8 v7184 = (i8)(intptr_t)(f225_E_symref);

	((void(*)(i2 /* off */, i8 /* sym */))(intptr_t)v7184)(v7183, v7182);

	i8 v7185 = (i8)(intptr_t)c02_s0166;
	i8 v7186 = (i8)(intptr_t)(f163_E);

	((void(*)(i8 /* text */))(intptr_t)v7186)(v7185);

	goto c02_054e;

c02_0552:;

	i8 v7187 = (i8)(intptr_t)(ws+3184);
	i8 v7188 = *(i8*)(intptr_t)v7187;
	i8 v7189 = *(i8*)(intptr_t)v7188;
	i8 v7190 = *(i8*)(intptr_t)v7189;
	i8 v7191 = (i8)(intptr_t)(f175_E_subref);

	((void(*)(i8 /* subr */))(intptr_t)v7191)(v7190);

c02_054e:;

	i8 v7192 = (i8)(intptr_t)(f157_E_space);

	((void(*)(void))(intptr_t)v7192)();

endsub:;
}
	void f422_emit_183(void);
	void f154_E_b8(i1 /* byte */);
	void f169_E_i32(i4 /* value */);
	void f154_E_b8(i1 /* byte */);

// emit_184 workspace at ws+3256 length ws+0
void f423_emit_184(void) {

	i1 v7194 = (i1)+40;
	i8 v7195 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7195)(v7194);

	i8 v7196 = (i8)(intptr_t)(ws+3184);
	i8 v7197 = *(i8*)(intptr_t)v7196;
	i4 v7198 = *(i4*)(intptr_t)v7197;
	i8 v7199 = (i8)(intptr_t)(f169_E_i32);

	((void(*)(i4 /* value */))(intptr_t)v7199)(v7198);

	i1 v7200 = (i1)+41;
	i8 v7201 = (i8)(intptr_t)(f154_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v7201)(v7200);

endsub:;
}
	void f423_emit_184(void);
	void f160_E_nl(void);

// emit_185 workspace at ws+3256 length ws+0
void f424_emit_185(void) {

	i8 v7203 = (i8)(intptr_t)(f160_E_nl);

	((void(*)(void))(intptr_t)v7203)();

endsub:;
}
	void f424_emit_185(void);

// EmitOneInstruction workspace at ws+3168 length ws+82
void f254_EmitOneInstruction(i8 p5831 /* self */, i1 p5832 /* rule */) {
	*(i1*)(intptr_t)(ws+3168) = p5832; /*rule */
	*(i8*)(intptr_t)(ws+3176) = p5831; /*self */

	i8 v5833 = (i8)(intptr_t)(ws+3176);
	i8 v5834 = *(i8*)(intptr_t)v5833;
	i8 v5835 = v5834+(+16);
	i8 v5836 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5836 = v5835;

	i8 v5837 = (i8)(intptr_t)(ws+3184);
	i8 v5838 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v5838 = v5837;

	i1 v5839 = (i1)+3;
	i8 v5840 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5840 = v5839;

c02_0476:;

	i8 v5841 = (i8)(intptr_t)(ws+3248);
	i1 v5842 = *(i1*)(intptr_t)v5841;
	i1 v5843 = (i1)+0;
	if (v5842==v5843) goto c02_0479; else goto c02_0478;

c02_0478:;

	i8 v5844 = (i8)(intptr_t)(ws+3232);
	i8 v5845 = *(i8*)(intptr_t)v5844;
	i8 v5846 = *(i8*)(intptr_t)v5845;
	i8 v5847 = (i8)(intptr_t)(ws+3240);
	i8 v5848 = *(i8*)(intptr_t)v5847;
	*(i8*)(intptr_t)v5848 = v5846;

	i8 v5849 = (i8)(intptr_t)(ws+3240);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	i8 v5851 = *(i8*)(intptr_t)v5850;
	i8 v5852 = (i8)+0;
	if (v5851==v5852) goto c02_047e; else goto c02_047d;

c02_047d:;

	i8 v5853 = (i8)(intptr_t)(ws+3240);
	i8 v5854 = *(i8*)(intptr_t)v5853;
	i8 v5855 = *(i8*)(intptr_t)v5854;
	i8 v5856 = v5855+(+57);
	i1 v5857 = *(i1*)(intptr_t)v5856;
	i8 v5858 = (i8)(intptr_t)(ws+3240);
	i8 v5859 = *(i8*)(intptr_t)v5858;
	i8 v5860 = v5859+(+8);
	*(i1*)(intptr_t)v5860 = v5857;

	goto c02_047a;

c02_047e:;

c02_047a:;

	i8 v5861 = (i8)(intptr_t)(ws+3232);
	i8 v5862 = *(i8*)(intptr_t)v5861;
	i8 v5863 = v5862+(+8);
	i8 v5864 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v5864 = v5863;

	i8 v5865 = (i8)(intptr_t)(ws+3240);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+16);
	i8 v5868 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v5868 = v5867;

	i8 v5869 = (i8)(intptr_t)(ws+3248);
	i1 v5870 = *(i1*)(intptr_t)v5869;
	i1 v5871 = v5870+(-1);
	i8 v5872 = (i8)(intptr_t)(ws+3248);
	*(i1*)(intptr_t)v5872 = v5871;

	goto c02_0476;

c02_0479:;

	i8 v5873 = (i8)(intptr_t)(ws+3176);
	i8 v5874 = *(i8*)(intptr_t)v5873;
	i8 v5875 = v5874+(+41);
	i1 v5876 = *(i1*)(intptr_t)v5875;
	i8 v5877 = (i8)(intptr_t)(ws+3249);
	*(i1*)(intptr_t)v5877 = v5876;

	i8 v5878 = (i8)(intptr_t)(ws+3168);
	i1 v5879 = *(i1*)(intptr_t)v5878;

	if (v5879 != +0) goto c02_0480;


	i8 v5891 = (i8)(intptr_t)(f255_emit_0);

	((void(*)(void))(intptr_t)v5891)();

	goto c02_047f;

c02_0480:;

	if (v5879 != +1) goto c02_0481;


	i8 v5898 = (i8)(intptr_t)(f256_emit_1);

	((void(*)(void))(intptr_t)v5898)();

	goto c02_047f;

c02_0481:;

	if (v5879 != +2) goto c02_0482;


	i8 v5905 = (i8)(intptr_t)(f257_emit_2);

	((void(*)(void))(intptr_t)v5905)();

	goto c02_047f;

c02_0482:;

	if (v5879 != +3) goto c02_0483;


	i8 v5912 = (i8)(intptr_t)(f258_emit_3);

	((void(*)(void))(intptr_t)v5912)();

	goto c02_047f;

c02_0483:;

	if (v5879 != +4) goto c02_0484;


	i8 v5919 = (i8)(intptr_t)(f259_emit_4);

	((void(*)(void))(intptr_t)v5919)();

	goto c02_047f;

c02_0484:;

	if (v5879 != +5) goto c02_0485;


	i8 v5926 = (i8)(intptr_t)(f260_emit_5);

	((void(*)(void))(intptr_t)v5926)();

	goto c02_047f;

c02_0485:;

	if (v5879 != +6) goto c02_0486;


	i8 v5933 = (i8)(intptr_t)(f261_emit_6);

	((void(*)(void))(intptr_t)v5933)();

	goto c02_047f;

c02_0486:;

	if (v5879 != +7) goto c02_0487;


	i8 v5940 = (i8)(intptr_t)(f262_emit_7);

	((void(*)(void))(intptr_t)v5940)();

	goto c02_047f;

c02_0487:;

	if (v5879 != +8) goto c02_0488;


	i8 v5947 = (i8)(intptr_t)(f263_emit_8);

	((void(*)(void))(intptr_t)v5947)();

	goto c02_047f;

c02_0488:;

	if (v5879 != +9) goto c02_0489;


	i8 v5954 = (i8)(intptr_t)(f264_emit_9);

	((void(*)(void))(intptr_t)v5954)();

	goto c02_047f;

c02_0489:;

	if (v5879 != +10) goto c02_048a;


	i8 v5961 = (i8)(intptr_t)(f265_emit_10);

	((void(*)(void))(intptr_t)v5961)();

	goto c02_047f;

c02_048a:;

	if (v5879 != +11) goto c02_048b;


	i8 v5968 = (i8)(intptr_t)(f266_emit_11);

	((void(*)(void))(intptr_t)v5968)();

	goto c02_047f;

c02_048b:;

	if (v5879 != +12) goto c02_048c;


	i8 v5975 = (i8)(intptr_t)(f267_emit_12);

	((void(*)(void))(intptr_t)v5975)();

	goto c02_047f;

c02_048c:;

	if (v5879 != +13) goto c02_048d;


	i8 v5982 = (i8)(intptr_t)(f268_emit_13);

	((void(*)(void))(intptr_t)v5982)();

	goto c02_047f;

c02_048d:;

	if (v5879 != +14) goto c02_048e;


	i8 v5989 = (i8)(intptr_t)(f269_emit_14);

	((void(*)(void))(intptr_t)v5989)();

	goto c02_047f;

c02_048e:;

	if (v5879 != +15) goto c02_048f;


	i8 v5996 = (i8)(intptr_t)(f270_emit_15);

	((void(*)(void))(intptr_t)v5996)();

	goto c02_047f;

c02_048f:;

	if (v5879 != +16) goto c02_0490;


	i8 v6003 = (i8)(intptr_t)(f271_emit_16);

	((void(*)(void))(intptr_t)v6003)();

	goto c02_047f;

c02_0490:;

	if (v5879 != +17) goto c02_0491;


	i8 v6010 = (i8)(intptr_t)(f272_emit_17);

	((void(*)(void))(intptr_t)v6010)();

	goto c02_047f;

c02_0491:;

	if (v5879 != +18) goto c02_0492;


	i8 v6017 = (i8)(intptr_t)(f273_emit_18);

	((void(*)(void))(intptr_t)v6017)();

	goto c02_047f;

c02_0492:;

	if (v5879 != +19) goto c02_0493;


	i8 v6024 = (i8)(intptr_t)(f274_emit_19);

	((void(*)(void))(intptr_t)v6024)();

	goto c02_047f;

c02_0493:;

	if (v5879 != +20) goto c02_0494;


	i8 v6031 = (i8)(intptr_t)(f275_emit_20);

	((void(*)(void))(intptr_t)v6031)();

	goto c02_047f;

c02_0494:;

	if (v5879 != +21) goto c02_0495;


	i8 v6038 = (i8)(intptr_t)(f276_emit_21);

	((void(*)(void))(intptr_t)v6038)();

	goto c02_047f;

c02_0495:;

	if (v5879 != +22) goto c02_0496;


	i8 v6045 = (i8)(intptr_t)(f277_emit_22);

	((void(*)(void))(intptr_t)v6045)();

	goto c02_047f;

c02_0496:;

	if (v5879 != +23) goto c02_0497;


	i8 v6052 = (i8)(intptr_t)(f278_emit_23);

	((void(*)(void))(intptr_t)v6052)();

	goto c02_047f;

c02_0497:;

	if (v5879 != +24) goto c02_0498;


	i8 v6059 = (i8)(intptr_t)(f279_emit_24);

	((void(*)(void))(intptr_t)v6059)();

	goto c02_047f;

c02_0498:;

	if (v5879 != +25) goto c02_0499;


	i8 v6066 = (i8)(intptr_t)(f280_emit_25);

	((void(*)(void))(intptr_t)v6066)();

	goto c02_047f;

c02_0499:;

	if (v5879 != +26) goto c02_049a;


	i8 v6073 = (i8)(intptr_t)(f281_emit_26);

	((void(*)(void))(intptr_t)v6073)();

	goto c02_047f;

c02_049a:;

	if (v5879 != +27) goto c02_049b;


	i8 v6080 = (i8)(intptr_t)(f282_emit_27);

	((void(*)(void))(intptr_t)v6080)();

	goto c02_047f;

c02_049b:;

	if (v5879 != +28) goto c02_049c;


	i8 v6087 = (i8)(intptr_t)(f283_emit_28);

	((void(*)(void))(intptr_t)v6087)();

	goto c02_047f;

c02_049c:;

	if (v5879 != +29) goto c02_049d;


	i8 v6094 = (i8)(intptr_t)(f284_emit_29);

	((void(*)(void))(intptr_t)v6094)();

	goto c02_047f;

c02_049d:;

	if (v5879 != +30) goto c02_049e;


	i8 v6101 = (i8)(intptr_t)(f285_emit_30);

	((void(*)(void))(intptr_t)v6101)();

	goto c02_047f;

c02_049e:;

	if (v5879 != +31) goto c02_049f;


	i8 v6108 = (i8)(intptr_t)(f286_emit_31);

	((void(*)(void))(intptr_t)v6108)();

	goto c02_047f;

c02_049f:;

	if (v5879 != +32) goto c02_04a0;


	i8 v6115 = (i8)(intptr_t)(f287_emit_32);

	((void(*)(void))(intptr_t)v6115)();

	goto c02_047f;

c02_04a0:;

	if (v5879 != +33) goto c02_04a1;


	i8 v6122 = (i8)(intptr_t)(f288_emit_33);

	((void(*)(void))(intptr_t)v6122)();

	goto c02_047f;

c02_04a1:;

	if (v5879 != +34) goto c02_04a2;


	i8 v6129 = (i8)(intptr_t)(f289_emit_34);

	((void(*)(void))(intptr_t)v6129)();

	goto c02_047f;

c02_04a2:;

	if (v5879 != +35) goto c02_04a3;


	i8 v6136 = (i8)(intptr_t)(f290_emit_35);

	((void(*)(void))(intptr_t)v6136)();

	goto c02_047f;

c02_04a3:;

	if (v5879 != +36) goto c02_04a4;


	i8 v6143 = (i8)(intptr_t)(f291_emit_36);

	((void(*)(void))(intptr_t)v6143)();

	goto c02_047f;

c02_04a4:;

	if (v5879 != +37) goto c02_04a5;


	i8 v6150 = (i8)(intptr_t)(f292_emit_37);

	((void(*)(void))(intptr_t)v6150)();

	goto c02_047f;

c02_04a5:;

	if (v5879 != +38) goto c02_04a6;


	i8 v6157 = (i8)(intptr_t)(f293_emit_38);

	((void(*)(void))(intptr_t)v6157)();

	goto c02_047f;

c02_04a6:;

	if (v5879 != +39) goto c02_04a7;


	i8 v6164 = (i8)(intptr_t)(f294_emit_39);

	((void(*)(void))(intptr_t)v6164)();

	goto c02_047f;

c02_04a7:;

	if (v5879 != +40) goto c02_04a8;


	i8 v6171 = (i8)(intptr_t)(f295_emit_40);

	((void(*)(void))(intptr_t)v6171)();

	goto c02_047f;

c02_04a8:;

	if (v5879 != +43) goto c02_04a9;


	i8 v6178 = (i8)(intptr_t)(f296_emit_43);

	((void(*)(void))(intptr_t)v6178)();

	goto c02_047f;

c02_04a9:;

	if (v5879 != +44) goto c02_04aa;


	i8 v6187 = (i8)(intptr_t)(f297_emit_44);

	((void(*)(void))(intptr_t)v6187)();

	goto c02_047f;

c02_04aa:;

	if (v5879 != +45) goto c02_04ab;


	i8 v6190 = (i8)(intptr_t)(f298_emit_45);

	((void(*)(void))(intptr_t)v6190)();

	goto c02_047f;

c02_04ab:;

	if (v5879 != +46) goto c02_04ac;


	i8 v6413 = (i8)(intptr_t)(f299_emit_46);

	((void(*)(void))(intptr_t)v6413)();

	goto c02_047f;

c02_04ac:;

	if (v5879 != +47) goto c02_04c9;


	i8 v6476 = (i8)(intptr_t)(f301_emit_47);

	((void(*)(void))(intptr_t)v6476)();

	goto c02_047f;

c02_04c9:;

	if (v5879 != +48) goto c02_04d0;


	i8 v6481 = (i8)(intptr_t)(f302_emit_48);

	((void(*)(void))(intptr_t)v6481)();

	goto c02_047f;

c02_04d0:;

	if (v5879 != +49) goto c02_04d1;


	i8 v6486 = (i8)(intptr_t)(f303_emit_49);

	((void(*)(void))(intptr_t)v6486)();

	goto c02_047f;

c02_04d1:;

	if (v5879 != +50) goto c02_04d2;


	i8 v6491 = (i8)(intptr_t)(f304_emit_50);

	((void(*)(void))(intptr_t)v6491)();

	goto c02_047f;

c02_04d2:;

	if (v5879 != +51) goto c02_04d3;


	i8 v6496 = (i8)(intptr_t)(f305_emit_51);

	((void(*)(void))(intptr_t)v6496)();

	goto c02_047f;

c02_04d3:;

	if (v5879 != +52) goto c02_04d4;


	i8 v6501 = (i8)(intptr_t)(f306_emit_52);

	((void(*)(void))(intptr_t)v6501)();

	goto c02_047f;

c02_04d4:;

	if (v5879 != +62) goto c02_04d5;


	i8 v6507 = (i8)(intptr_t)(f307_emit_62);

	((void(*)(void))(intptr_t)v6507)();

	goto c02_047f;

c02_04d5:;

	if (v5879 != +63) goto c02_04d6;


	i8 v6513 = (i8)(intptr_t)(f308_emit_63);

	((void(*)(void))(intptr_t)v6513)();

	goto c02_047f;

c02_04d6:;

	if (v5879 != +64) goto c02_04d7;


	i8 v6519 = (i8)(intptr_t)(f309_emit_64);

	((void(*)(void))(intptr_t)v6519)();

	goto c02_047f;

c02_04d7:;

	if (v5879 != +65) goto c02_04d8;


	i8 v6525 = (i8)(intptr_t)(f310_emit_65);

	((void(*)(void))(intptr_t)v6525)();

	goto c02_047f;

c02_04d8:;

	if (v5879 != +66) goto c02_04d9;


	i8 v6546 = (i8)(intptr_t)(f311_emit_66);

	((void(*)(void))(intptr_t)v6546)();

	goto c02_047f;

c02_04d9:;

	if (v5879 != +67) goto c02_04da;


	i8 v6549 = (i8)(intptr_t)(f312_emit_67);

	((void(*)(void))(intptr_t)v6549)();

	goto c02_047f;

c02_04da:;

	if (v5879 != +68) goto c02_04db;


	i8 v6552 = (i8)(intptr_t)(f313_emit_68);

	((void(*)(void))(intptr_t)v6552)();

	goto c02_047f;

c02_04db:;

	if (v5879 != +69) goto c02_04dc;


	i8 v6555 = (i8)(intptr_t)(f314_emit_69);

	((void(*)(void))(intptr_t)v6555)();

	goto c02_047f;

c02_04dc:;

	if (v5879 != +70) goto c02_04dd;


	i8 v6558 = (i8)(intptr_t)(f315_emit_70);

	((void(*)(void))(intptr_t)v6558)();

	goto c02_047f;

c02_04dd:;

	if (v5879 != +71) goto c02_04de;


	i8 v6561 = (i8)(intptr_t)(f316_emit_71);

	((void(*)(void))(intptr_t)v6561)();

	goto c02_047f;

c02_04de:;

	if (v5879 != +72) goto c02_04df;


	i8 v6564 = (i8)(intptr_t)(f317_emit_72);

	((void(*)(void))(intptr_t)v6564)();

	goto c02_047f;

c02_04df:;

	if (v5879 != +73) goto c02_04e0;


	i8 v6567 = (i8)(intptr_t)(f318_emit_73);

	((void(*)(void))(intptr_t)v6567)();

	goto c02_047f;

c02_04e0:;

	if (v5879 != +74) goto c02_04e1;


	i8 v6570 = (i8)(intptr_t)(f319_emit_74);

	((void(*)(void))(intptr_t)v6570)();

	goto c02_047f;

c02_04e1:;

	if (v5879 != +75) goto c02_04e2;


	i8 v6574 = (i8)(intptr_t)(f320_emit_75);

	((void(*)(void))(intptr_t)v6574)();

	goto c02_047f;

c02_04e2:;

	if (v5879 != +76) goto c02_04e3;


	i8 v6578 = (i8)(intptr_t)(f321_emit_76);

	((void(*)(void))(intptr_t)v6578)();

	goto c02_047f;

c02_04e3:;

	if (v5879 != +77) goto c02_04e4;


	i8 v6582 = (i8)(intptr_t)(f322_emit_77);

	((void(*)(void))(intptr_t)v6582)();

	goto c02_047f;

c02_04e4:;

	if (v5879 != +78) goto c02_04e5;


	i8 v6586 = (i8)(intptr_t)(f323_emit_78);

	((void(*)(void))(intptr_t)v6586)();

	goto c02_047f;

c02_04e5:;

	if (v5879 != +79) goto c02_04e6;


	i8 v6590 = (i8)(intptr_t)(f324_emit_79);

	((void(*)(void))(intptr_t)v6590)();

	goto c02_047f;

c02_04e6:;

	if (v5879 != +80) goto c02_04e7;


	i8 v6594 = (i8)(intptr_t)(f325_emit_80);

	((void(*)(void))(intptr_t)v6594)();

	goto c02_047f;

c02_04e7:;

	if (v5879 != +81) goto c02_04e8;


	i8 v6598 = (i8)(intptr_t)(f326_emit_81);

	((void(*)(void))(intptr_t)v6598)();

	goto c02_047f;

c02_04e8:;

	if (v5879 != +82) goto c02_04e9;


	i8 v6602 = (i8)(intptr_t)(f327_emit_82);

	((void(*)(void))(intptr_t)v6602)();

	goto c02_047f;

c02_04e9:;

	if (v5879 != +83) goto c02_04ea;


	i8 v6606 = (i8)(intptr_t)(f328_emit_83);

	((void(*)(void))(intptr_t)v6606)();

	goto c02_047f;

c02_04ea:;

	if (v5879 != +84) goto c02_04eb;


	i8 v6610 = (i8)(intptr_t)(f329_emit_84);

	((void(*)(void))(intptr_t)v6610)();

	goto c02_047f;

c02_04eb:;

	if (v5879 != +85) goto c02_04ec;


	i8 v6614 = (i8)(intptr_t)(f330_emit_85);

	((void(*)(void))(intptr_t)v6614)();

	goto c02_047f;

c02_04ec:;

	if (v5879 != +86) goto c02_04ed;


	i8 v6618 = (i8)(intptr_t)(f331_emit_86);

	((void(*)(void))(intptr_t)v6618)();

	goto c02_047f;

c02_04ed:;

	if (v5879 != +87) goto c02_04ee;


	i8 v6622 = (i8)(intptr_t)(f332_emit_87);

	((void(*)(void))(intptr_t)v6622)();

	goto c02_047f;

c02_04ee:;

	if (v5879 != +88) goto c02_04ef;


	i8 v6626 = (i8)(intptr_t)(f333_emit_88);

	((void(*)(void))(intptr_t)v6626)();

	goto c02_047f;

c02_04ef:;

	if (v5879 != +89) goto c02_04f0;


	i8 v6630 = (i8)(intptr_t)(f334_emit_89);

	((void(*)(void))(intptr_t)v6630)();

	goto c02_047f;

c02_04f0:;

	if (v5879 != +90) goto c02_04f1;


	i8 v6634 = (i8)(intptr_t)(f335_emit_90);

	((void(*)(void))(intptr_t)v6634)();

	goto c02_047f;

c02_04f1:;

	if (v5879 != +91) goto c02_04f2;


	i8 v6638 = (i8)(intptr_t)(f336_emit_91);

	((void(*)(void))(intptr_t)v6638)();

	goto c02_047f;

c02_04f2:;

	if (v5879 != +92) goto c02_04f3;


	i8 v6642 = (i8)(intptr_t)(f337_emit_92);

	((void(*)(void))(intptr_t)v6642)();

	goto c02_047f;

c02_04f3:;

	if (v5879 != +93) goto c02_04f4;


	i8 v6646 = (i8)(intptr_t)(f338_emit_93);

	((void(*)(void))(intptr_t)v6646)();

	goto c02_047f;

c02_04f4:;

	if (v5879 != +94) goto c02_04f5;


	i8 v6650 = (i8)(intptr_t)(f339_emit_94);

	((void(*)(void))(intptr_t)v6650)();

	goto c02_047f;

c02_04f5:;

	if (v5879 != +95) goto c02_04f6;


	i8 v6654 = (i8)(intptr_t)(f340_emit_95);

	((void(*)(void))(intptr_t)v6654)();

	goto c02_047f;

c02_04f6:;

	if (v5879 != +96) goto c02_04f7;


	i8 v6658 = (i8)(intptr_t)(f341_emit_96);

	((void(*)(void))(intptr_t)v6658)();

	goto c02_047f;

c02_04f7:;

	if (v5879 != +97) goto c02_04f8;


	i8 v6662 = (i8)(intptr_t)(f342_emit_97);

	((void(*)(void))(intptr_t)v6662)();

	goto c02_047f;

c02_04f8:;

	if (v5879 != +98) goto c02_04f9;


	i8 v6666 = (i8)(intptr_t)(f343_emit_98);

	((void(*)(void))(intptr_t)v6666)();

	goto c02_047f;

c02_04f9:;

	if (v5879 != +99) goto c02_04fa;


	i8 v6670 = (i8)(intptr_t)(f344_emit_99);

	((void(*)(void))(intptr_t)v6670)();

	goto c02_047f;

c02_04fa:;

	if (v5879 != +100) goto c02_04fb;


	i8 v6674 = (i8)(intptr_t)(f345_emit_100);

	((void(*)(void))(intptr_t)v6674)();

	goto c02_047f;

c02_04fb:;

	if (v5879 != +101) goto c02_04fc;


	i8 v6678 = (i8)(intptr_t)(f346_emit_101);

	((void(*)(void))(intptr_t)v6678)();

	goto c02_047f;

c02_04fc:;

	if (v5879 != +102) goto c02_04fd;


	i8 v6682 = (i8)(intptr_t)(f347_emit_102);

	((void(*)(void))(intptr_t)v6682)();

	goto c02_047f;

c02_04fd:;

	if (v5879 != +103) goto c02_04fe;


	i8 v6686 = (i8)(intptr_t)(f348_emit_103);

	((void(*)(void))(intptr_t)v6686)();

	goto c02_047f;

c02_04fe:;

	if (v5879 != +104) goto c02_04ff;


	i8 v6690 = (i8)(intptr_t)(f349_emit_104);

	((void(*)(void))(intptr_t)v6690)();

	goto c02_047f;

c02_04ff:;

	if (v5879 != +105) goto c02_0500;


	i8 v6694 = (i8)(intptr_t)(f350_emit_105);

	((void(*)(void))(intptr_t)v6694)();

	goto c02_047f;

c02_0500:;

	if (v5879 != +106) goto c02_0501;


	i8 v6698 = (i8)(intptr_t)(f351_emit_106);

	((void(*)(void))(intptr_t)v6698)();

	goto c02_047f;

c02_0501:;

	if (v5879 != +107) goto c02_0502;


	i8 v6702 = (i8)(intptr_t)(f352_emit_107);

	((void(*)(void))(intptr_t)v6702)();

	goto c02_047f;

c02_0502:;

	if (v5879 != +108) goto c02_0503;


	i8 v6706 = (i8)(intptr_t)(f353_emit_108);

	((void(*)(void))(intptr_t)v6706)();

	goto c02_047f;

c02_0503:;

	if (v5879 != +109) goto c02_0504;


	i8 v6710 = (i8)(intptr_t)(f354_emit_109);

	((void(*)(void))(intptr_t)v6710)();

	goto c02_047f;

c02_0504:;

	if (v5879 != +110) goto c02_0505;


	i8 v6714 = (i8)(intptr_t)(f355_emit_110);

	((void(*)(void))(intptr_t)v6714)();

	goto c02_047f;

c02_0505:;

	if (v5879 != +111) goto c02_0506;


	i8 v6718 = (i8)(intptr_t)(f356_emit_111);

	((void(*)(void))(intptr_t)v6718)();

	goto c02_047f;

c02_0506:;

	if (v5879 != +112) goto c02_0507;


	i8 v6722 = (i8)(intptr_t)(f357_emit_112);

	((void(*)(void))(intptr_t)v6722)();

	goto c02_047f;

c02_0507:;

	if (v5879 != +113) goto c02_0508;


	i8 v6726 = (i8)(intptr_t)(f358_emit_113);

	((void(*)(void))(intptr_t)v6726)();

	goto c02_047f;

c02_0508:;

	if (v5879 != +114) goto c02_0509;


	i8 v6730 = (i8)(intptr_t)(f359_emit_114);

	((void(*)(void))(intptr_t)v6730)();

	goto c02_047f;

c02_0509:;

	if (v5879 != +115) goto c02_050a;


	i8 v6734 = (i8)(intptr_t)(f360_emit_115);

	((void(*)(void))(intptr_t)v6734)();

	goto c02_047f;

c02_050a:;

	if (v5879 != +116) goto c02_050b;


	i8 v6738 = (i8)(intptr_t)(f361_emit_116);

	((void(*)(void))(intptr_t)v6738)();

	goto c02_047f;

c02_050b:;

	if (v5879 != +117) goto c02_050c;


	i8 v6742 = (i8)(intptr_t)(f362_emit_117);

	((void(*)(void))(intptr_t)v6742)();

	goto c02_047f;

c02_050c:;

	if (v5879 != +118) goto c02_050d;


	i8 v6746 = (i8)(intptr_t)(f363_emit_118);

	((void(*)(void))(intptr_t)v6746)();

	goto c02_047f;

c02_050d:;

	if (v5879 != +119) goto c02_050e;


	i8 v6750 = (i8)(intptr_t)(f364_emit_119);

	((void(*)(void))(intptr_t)v6750)();

	goto c02_047f;

c02_050e:;

	if (v5879 != +120) goto c02_050f;


	i8 v6754 = (i8)(intptr_t)(f365_emit_120);

	((void(*)(void))(intptr_t)v6754)();

	goto c02_047f;

c02_050f:;

	if (v5879 != +121) goto c02_0510;


	i8 v6758 = (i8)(intptr_t)(f366_emit_121);

	((void(*)(void))(intptr_t)v6758)();

	goto c02_047f;

c02_0510:;

	if (v5879 != +122) goto c02_0511;


	i8 v6762 = (i8)(intptr_t)(f367_emit_122);

	((void(*)(void))(intptr_t)v6762)();

	goto c02_047f;

c02_0511:;

	if (v5879 != +123) goto c02_0512;


	i8 v6767 = (i8)(intptr_t)(f368_emit_123);

	((void(*)(void))(intptr_t)v6767)();

	goto c02_047f;

c02_0512:;

	if (v5879 != +124) goto c02_0513;


	i8 v6772 = (i8)(intptr_t)(f369_emit_124);

	((void(*)(void))(intptr_t)v6772)();

	goto c02_047f;

c02_0513:;

	if (v5879 != +125) goto c02_0514;


	i8 v6777 = (i8)(intptr_t)(f370_emit_125);

	((void(*)(void))(intptr_t)v6777)();

	goto c02_047f;

c02_0514:;

	if (v5879 != +126) goto c02_0515;


	i8 v6782 = (i8)(intptr_t)(f371_emit_126);

	((void(*)(void))(intptr_t)v6782)();

	goto c02_047f;

c02_0515:;

	if (v5879 != +127) goto c02_0516;


	i8 v6787 = (i8)(intptr_t)(f372_emit_127);

	((void(*)(void))(intptr_t)v6787)();

	goto c02_047f;

c02_0516:;

	if (v5879 != +128) goto c02_0517;


	i8 v6792 = (i8)(intptr_t)(f373_emit_128);

	((void(*)(void))(intptr_t)v6792)();

	goto c02_047f;

c02_0517:;

	if (v5879 != +129) goto c02_0518;


	i8 v6797 = (i8)(intptr_t)(f374_emit_129);

	((void(*)(void))(intptr_t)v6797)();

	goto c02_047f;

c02_0518:;

	if (v5879 != +130) goto c02_0519;


	i8 v6802 = (i8)(intptr_t)(f375_emit_130);

	((void(*)(void))(intptr_t)v6802)();

	goto c02_047f;

c02_0519:;

	if (v5879 != +131) goto c02_051a;


	i8 v6807 = (i8)(intptr_t)(f376_emit_131);

	((void(*)(void))(intptr_t)v6807)();

	goto c02_047f;

c02_051a:;

	if (v5879 != +132) goto c02_051b;


	i8 v6812 = (i8)(intptr_t)(f377_emit_132);

	((void(*)(void))(intptr_t)v6812)();

	goto c02_047f;

c02_051b:;

	if (v5879 != +133) goto c02_051c;


	i8 v6817 = (i8)(intptr_t)(f378_emit_133);

	((void(*)(void))(intptr_t)v6817)();

	goto c02_047f;

c02_051c:;

	if (v5879 != +134) goto c02_051d;


	i8 v6822 = (i8)(intptr_t)(f379_emit_134);

	((void(*)(void))(intptr_t)v6822)();

	goto c02_047f;

c02_051d:;

	if (v5879 != +135) goto c02_051e;


	i8 v6829 = (i8)(intptr_t)(f380_emit_135);

	((void(*)(void))(intptr_t)v6829)();

	goto c02_047f;

c02_051e:;

	if (v5879 != +136) goto c02_051f;


	i8 v6836 = (i8)(intptr_t)(f381_emit_136);

	((void(*)(void))(intptr_t)v6836)();

	goto c02_047f;

c02_051f:;

	if (v5879 != +137) goto c02_0520;


	i8 v6843 = (i8)(intptr_t)(f382_emit_137);

	((void(*)(void))(intptr_t)v6843)();

	goto c02_047f;

c02_0520:;

	if (v5879 != +138) goto c02_0521;


	i8 v6850 = (i8)(intptr_t)(f383_emit_138);

	((void(*)(void))(intptr_t)v6850)();

	goto c02_047f;

c02_0521:;

	if (v5879 != +139) goto c02_0522;


	i8 v6857 = (i8)(intptr_t)(f384_emit_139);

	((void(*)(void))(intptr_t)v6857)();

	goto c02_047f;

c02_0522:;

	if (v5879 != +140) goto c02_0523;


	i8 v6864 = (i8)(intptr_t)(f385_emit_140);

	((void(*)(void))(intptr_t)v6864)();

	goto c02_047f;

c02_0523:;

	if (v5879 != +141) goto c02_0524;


	i8 v6871 = (i8)(intptr_t)(f386_emit_141);

	((void(*)(void))(intptr_t)v6871)();

	goto c02_047f;

c02_0524:;

	if (v5879 != +142) goto c02_0525;


	i8 v6878 = (i8)(intptr_t)(f387_emit_142);

	((void(*)(void))(intptr_t)v6878)();

	goto c02_047f;

c02_0525:;

	if (v5879 != +143) goto c02_0526;


	i8 v6886 = (i8)(intptr_t)(f388_emit_143);

	((void(*)(void))(intptr_t)v6886)();

	goto c02_047f;

c02_0526:;

	if (v5879 != +144) goto c02_0527;


	i8 v6894 = (i8)(intptr_t)(f389_emit_144);

	((void(*)(void))(intptr_t)v6894)();

	goto c02_047f;

c02_0527:;

	if (v5879 != +145) goto c02_0528;


	i8 v6902 = (i8)(intptr_t)(f390_emit_145);

	((void(*)(void))(intptr_t)v6902)();

	goto c02_047f;

c02_0528:;

	if (v5879 != +146) goto c02_0529;


	i8 v6910 = (i8)(intptr_t)(f391_emit_146);

	((void(*)(void))(intptr_t)v6910)();

	goto c02_047f;

c02_0529:;

	if (v5879 != +151) goto c02_052a;


	i8 v6920 = (i8)(intptr_t)(f392_emit_151);

	((void(*)(void))(intptr_t)v6920)();

	goto c02_047f;

c02_052a:;

	if (v5879 != +152) goto c02_052b;


	i8 v6930 = (i8)(intptr_t)(f393_emit_152);

	((void(*)(void))(intptr_t)v6930)();

	goto c02_047f;

c02_052b:;

	if (v5879 != +153) goto c02_052c;


	i8 v6940 = (i8)(intptr_t)(f394_emit_153);

	((void(*)(void))(intptr_t)v6940)();

	goto c02_047f;

c02_052c:;

	if (v5879 != +154) goto c02_052d;


	i8 v6949 = (i8)(intptr_t)(f395_emit_154);

	((void(*)(void))(intptr_t)v6949)();

	goto c02_047f;

c02_052d:;

	if (v5879 != +155) goto c02_052e;


	i8 v6954 = (i8)(intptr_t)(f396_emit_155);

	((void(*)(void))(intptr_t)v6954)();

	goto c02_047f;

c02_052e:;

	if (v5879 != +156) goto c02_052f;


	i8 v6959 = (i8)(intptr_t)(f397_emit_156);

	((void(*)(void))(intptr_t)v6959)();

	goto c02_047f;

c02_052f:;

	if (v5879 != +157) goto c02_0530;


	i8 v6964 = (i8)(intptr_t)(f398_emit_157);

	((void(*)(void))(intptr_t)v6964)();

	goto c02_047f;

c02_0530:;

	if (v5879 != +158) goto c02_0531;


	i8 v6969 = (i8)(intptr_t)(f399_emit_158);

	((void(*)(void))(intptr_t)v6969)();

	goto c02_047f;

c02_0531:;

	if (v5879 != +159) goto c02_0532;


	i8 v6976 = (i8)(intptr_t)(f400_emit_159);

	((void(*)(void))(intptr_t)v6976)();

	goto c02_047f;

c02_0532:;

	if (v5879 != +160) goto c02_0533;


	i8 v6983 = (i8)(intptr_t)(f401_emit_160);

	((void(*)(void))(intptr_t)v6983)();

	goto c02_047f;

c02_0533:;

	if (v5879 != +161) goto c02_0534;


	i8 v6990 = (i8)(intptr_t)(f402_emit_161);

	((void(*)(void))(intptr_t)v6990)();

	goto c02_047f;

c02_0534:;

	if (v5879 != +162) goto c02_0535;


	i8 v6997 = (i8)(intptr_t)(f403_emit_162);

	((void(*)(void))(intptr_t)v6997)();

	goto c02_047f;

c02_0535:;

	if (v5879 != +163) goto c02_0536;


	i8 v7004 = (i8)(intptr_t)(f404_emit_163);

	((void(*)(void))(intptr_t)v7004)();

	goto c02_047f;

c02_0536:;

	if (v5879 != +164) goto c02_0537;


	i8 v7011 = (i8)(intptr_t)(f405_emit_164);

	((void(*)(void))(intptr_t)v7011)();

	goto c02_047f;

c02_0537:;

	if (v5879 != +165) goto c02_0538;


	i8 v7018 = (i8)(intptr_t)(f406_emit_165);

	((void(*)(void))(intptr_t)v7018)();

	goto c02_047f;

c02_0538:;

	if (v5879 != +166) goto c02_0539;


	i8 v7025 = (i8)(intptr_t)(f407_emit_166);

	((void(*)(void))(intptr_t)v7025)();

	goto c02_047f;

c02_0539:;

	if (v5879 != +167) goto c02_053a;


	i8 v7032 = (i8)(intptr_t)(f408_emit_167);

	((void(*)(void))(intptr_t)v7032)();

	goto c02_047f;

c02_053a:;

	if (v5879 != +168) goto c02_053b;


	i8 v7039 = (i8)(intptr_t)(f409_emit_168);

	((void(*)(void))(intptr_t)v7039)();

	goto c02_047f;

c02_053b:;

	if (v5879 != +169) goto c02_053c;


	i8 v7046 = (i8)(intptr_t)(f410_emit_169);

	((void(*)(void))(intptr_t)v7046)();

	goto c02_047f;

c02_053c:;

	if (v5879 != +170) goto c02_053d;


	i8 v7053 = (i8)(intptr_t)(f411_emit_170);

	((void(*)(void))(intptr_t)v7053)();

	goto c02_047f;

c02_053d:;

	if (v5879 != +171) goto c02_053e;


	i8 v7076 = (i8)(intptr_t)(f412_emit_171);

	((void(*)(void))(intptr_t)v7076)();

	goto c02_047f;

c02_053e:;

	if (v5879 != +172) goto c02_053f;


	i8 v7102 = (i8)(intptr_t)(f413_emit_172);

	((void(*)(void))(intptr_t)v7102)();

	goto c02_047f;

c02_053f:;

	if (v5879 != +173) goto c02_0540;


	i8 v7107 = (i8)(intptr_t)(f414_emit_173);

	((void(*)(void))(intptr_t)v7107)();

	goto c02_047f;

c02_0540:;

	if (v5879 != +174) goto c02_0541;


	i8 v7112 = (i8)(intptr_t)(f415_emit_174);

	((void(*)(void))(intptr_t)v7112)();

	goto c02_047f;

c02_0541:;

	if (v5879 != +175) goto c02_0542;


	i8 v7117 = (i8)(intptr_t)(f416_emit_175);

	((void(*)(void))(intptr_t)v7117)();

	goto c02_047f;

c02_0542:;

	if (v5879 != +176) goto c02_0543;


	i8 v7122 = (i8)(intptr_t)(f417_emit_176);

	((void(*)(void))(intptr_t)v7122)();

	goto c02_047f;

c02_0543:;

	if (v5879 != +177) goto c02_0544;


	i8 v7147 = (i8)(intptr_t)(f418_emit_177);

	((void(*)(void))(intptr_t)v7147)();

	goto c02_047f;

c02_0544:;

	if (v5879 != +178) goto c02_054a;


	i8 v7153 = (i8)(intptr_t)(f419_emit_178);

	((void(*)(void))(intptr_t)v7153)();

	goto c02_047f;

c02_054a:;

	if (v5879 != +181) goto c02_054b;


	i8 v7155 = (i8)(intptr_t)(f420_emit_181);

	((void(*)(void))(intptr_t)v7155)();

	goto c02_047f;

c02_054b:;

	if (v5879 != +182) goto c02_054c;


	i8 v7161 = (i8)(intptr_t)(f421_emit_182);

	((void(*)(void))(intptr_t)v7161)();

	goto c02_047f;

c02_054c:;

	if (v5879 != +183) goto c02_054d;


	i8 v7193 = (i8)(intptr_t)(f422_emit_183);

	((void(*)(void))(intptr_t)v7193)();

	goto c02_047f;

c02_054d:;

	if (v5879 != +184) goto c02_0553;


	i8 v7202 = (i8)(intptr_t)(f423_emit_184);

	((void(*)(void))(intptr_t)v7202)();

	goto c02_047f;

c02_0553:;

	if (v5879 != +185) goto c02_0554;


	i8 v7204 = (i8)(intptr_t)(f424_emit_185);

	((void(*)(void))(intptr_t)v7204)();

c02_0554:;

c02_047f:;


endsub:;
}
static data c02_a555[] = { // codegen_midcodes








	{ .i1 = { 0x39,0x2a,0x2a,0x9e,0x2a,0x9f,0x2a,0xa0}},








	{ .i1 = { 0x2a,0xa1,0x2a,0x85,0x2a,0x86,0x2a,0x87}},








	{ .i1 = { 0x2a,0x88,0x2a,0xa3,0x2a,0xa4,0x2a,0xa5}},








	{ .i1 = { 0x2a,0xa6,0x2a,0x8a,0x2a,0x8b,0x2a,0x8c}},








	{ .i1 = { 0x2a,0x8d,0x2a,0x94,0x2a,0x95,0x2a,0x96}},








	{ .i1 = { 0x2a,0x97,0x2a,0x8f,0x2a,0x90,0x2a,0x91}},








	{ .i1 = { 0x2a,0x92,0x2a,0x99,0x2a,0x9a,0x2a,0x9b}},








	{ .i1 = { 0x2a,0x9c,0x2a,0xa8,0x2a,0xa9,0x2a,0xaa}},








	{ .i1 = { 0x2a,0xab,0x2a,0xad,0x2a,0xae,0x2a,0xaf}},








	{ .i1 = { 0x2a,0xb0,0x2a,0xb2,0x2a,0xb3,0x2a,0xb4}},








	{ .i1 = { 0x2a,0xb5,0x2a,0x02,0x03,0x17,0x18,0x19}},








	{ .i1 = { 0x04,0x05,0x1a,0x1c,0x1d,0x1e,0x1f,0x01}},








	{ .i1 = { 0x21,0x22,0x23,0x24,0x26,0x27,0x28,0x29}},








	{ .i1 = { 0x2a,0x2a,0x2a,0x2a,0x2c,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x2e,0x2f,0x30,0x31,0x9e,0x9f,0xa0}},








	{ .i1 = { 0xa1,0x85,0x86,0x87,0x88,0xa3,0xa4,0xa5}},








	{ .i1 = { 0xa6,0x8a,0x8b,0x8c,0x8d,0x94,0x95,0x96}},








	{ .i1 = { 0x97,0x8f,0x90,0x91,0x92,0x99,0x9a,0x9b}},








	{ .i1 = { 0x9c,0xa8,0xa9,0xaa,0xab,0xad,0xae,0xaf}},








	{ .i1 = { 0xb0,0xb2,0xb3,0xb4,0xb5,0x71,0x72,0x73}},








	{ .i1 = { 0x74,0x6c,0x6d,0x6e,0x6f,0x76,0x77,0x78}},








	{ .i1 = { 0x79,0x7b,0x7c,0x7d,0x7e,0x80,0x81,0x82}},








	{ .i1 = { 0x83,0x3a,0x3b,0x3c,0x3d,0x44,0x45,0x46}},








	{ .i1 = { 0x47,0x3f,0x40,0x41,0x42,0x49,0x4a,0x4b}},








	{ .i1 = { 0x4c,0x4e,0x4f,0x50,0x51,0x53,0x54,0x55}},








	{ .i1 = { 0x56,0x59,0x5a,0x5b,0x5d,0x5f,0x60,0x62}},








	{ .i1 = { 0x63,0x65,0x67,0x68,0x69,0x2b,0x06,0x08}},








	{ .i1 = { 0x09,0x0a,0x0b,0x0c,0x0d,0x0e,0x0f,0x10}},





	{ .i1 = { 0x11,0x12,0x13,0x14}},
};
static data c02_a556[] = { // codegen_registers








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
static data c02_a557[] = { // codegen_rules








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







	{ .i1 = { 0x00,0x00,0x00,0x01,0x01,0x00}},
};

// PopulateMatchBuffer workspace at ws+3216 length ws+24
void f425_PopulateMatchBuffer(i8 p7205 /* matchbuf */, i8 p7206 /* n */, i8 p7207 /* insn */) {
	*(i8*)(intptr_t)(ws+3216) = p7207; /*insn */
	*(i8*)(intptr_t)(ws+3224) = p7206; /*n */
	*(i8*)(intptr_t)(ws+3232) = p7205; /*matchbuf */

	i8 v7208 = (i8)(intptr_t)(ws+3224);
	i8 v7209 = *(i8*)(intptr_t)v7208;
	i8 v7210 = *(i8*)(intptr_t)v7209;
	i8 v7211 = v7210+(+58);
	i1 v7212 = *(i1*)(intptr_t)v7211;
	i8 v7213 = (i8)(intptr_t)(ws+3232);
	i8 v7214 = *(i8*)(intptr_t)v7213;
	*(i1*)(intptr_t)v7214 = v7212;

	i8 v7215 = (i8)(intptr_t)(ws+3224);
	i8 v7216 = *(i8*)(intptr_t)v7215;
	i8 v7217 = *(i8*)(intptr_t)v7216;
	i8 v7218 = v7217+(+24);
	i8 v7219 = *(i8*)(intptr_t)v7218;
	i8 v7220 = (i8)(intptr_t)(ws+3224);
	i8 v7221 = *(i8*)(intptr_t)v7220;
	i8 v7222 = v7221+(+8);
	*(i8*)(intptr_t)v7222 = v7219;

	i8 v7223 = (i8)(intptr_t)(ws+3224);
	i8 v7224 = *(i8*)(intptr_t)v7223;
	i8 v7225 = v7224+(+8);
	i8 v7226 = *(i8*)(intptr_t)v7225;
	i8 v7227 = (i8)+0;
	if (v7226==v7227) goto c02_055c; else goto c02_055b;

c02_055b:;

	i8 v7228 = (i8)(intptr_t)(ws+3224);
	i8 v7229 = *(i8*)(intptr_t)v7228;
	i8 v7230 = v7229+(+8);
	i8 v7231 = *(i8*)(intptr_t)v7230;
	i8 v7232 = v7231+(+58);
	i1 v7233 = *(i1*)(intptr_t)v7232;
	i8 v7234 = (i8)(intptr_t)(ws+3232);
	i8 v7235 = *(i8*)(intptr_t)v7234;
	i8 v7236 = v7235+(+1);
	*(i1*)(intptr_t)v7236 = v7233;

	goto c02_0558;

c02_055c:;

c02_0558:;

	i8 v7237 = (i8)(intptr_t)(ws+3224);
	i8 v7238 = *(i8*)(intptr_t)v7237;
	i8 v7239 = *(i8*)(intptr_t)v7238;
	i8 v7240 = v7239+(+32);
	i8 v7241 = *(i8*)(intptr_t)v7240;
	i8 v7242 = (i8)(intptr_t)(ws+3224);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = v7243+(+16);
	*(i8*)(intptr_t)v7244 = v7241;

	i8 v7245 = (i8)(intptr_t)(ws+3224);
	i8 v7246 = *(i8*)(intptr_t)v7245;
	i8 v7247 = v7246+(+16);
	i8 v7248 = *(i8*)(intptr_t)v7247;
	i8 v7249 = (i8)+0;
	if (v7248==v7249) goto c02_0561; else goto c02_0560;

c02_0560:;

	i8 v7250 = (i8)(intptr_t)(ws+3224);
	i8 v7251 = *(i8*)(intptr_t)v7250;
	i8 v7252 = v7251+(+16);
	i8 v7253 = *(i8*)(intptr_t)v7252;
	i8 v7254 = v7253+(+58);
	i1 v7255 = *(i1*)(intptr_t)v7254;
	i8 v7256 = (i8)(intptr_t)(ws+3232);
	i8 v7257 = *(i8*)(intptr_t)v7256;
	i8 v7258 = v7257+(+2);
	*(i1*)(intptr_t)v7258 = v7255;

	goto c02_055d;

c02_0561:;

c02_055d:;

endsub:;
}

// IsStackedRegister workspace at ws+3184 length ws+16
void f426_IsStackedRegister(i1* p7259 /* result */, i1 p7260 /* regid */) {
	*(i1*)(intptr_t)(ws+3184) = p7260; /*regid */

	i1 v7261 = (i1)+0;
	i8 v7262 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v7262 = v7261;

	i8 v7263 = (i8)(intptr_t)(((i1*)c02_ab0+0));
	i8 v7264 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7264 = v7263;

c02_0564:;

	i8 v7265 = (i8)(intptr_t)(ws+3192);
	i8 v7266 = *(i8*)(intptr_t)v7265;
	i8 v7267 = (i8)(intptr_t)(((i1*)c02_ab0+80));
	if (v7266==v7267) goto c02_0567; else goto c02_0566;

c02_0566:;

	i8 v7268 = (i8)(intptr_t)(ws+3192);
	i8 v7269 = *(i8*)(intptr_t)v7268;
	i8 v7270 = v7269+(+8);
	i1 v7271 = *(i1*)(intptr_t)v7270;
	i8 v7272 = (i8)(intptr_t)(ws+3184);
	i1 v7273 = *(i1*)(intptr_t)v7272;
	i1 v7274 = v7271&v7273;
	i1 v7275 = (i1)+0;
	if (v7274==v7275) goto c02_056c; else goto c02_056b;

c02_056b:;

	i8 v7276 = (i8)(intptr_t)(ws+3192);
	i8 v7277 = *(i8*)(intptr_t)v7276;
	i8 v7278 = v7277+(+11);
	i1 v7279 = *(i1*)(intptr_t)v7278;
	i8 v7280 = (i8)(intptr_t)(ws+3185);
	*(i1*)(intptr_t)v7280 = v7279;

	goto endsub;

c02_056c:;

c02_0568:;

	i8 v7281 = (i8)(intptr_t)(ws+3192);
	i8 v7282 = *(i8*)(intptr_t)v7281;
	i8 v7283 = v7282+(+16);
	i8 v7284 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7284 = v7283;

	goto c02_0564;

c02_0567:;

endsub:;
	*p7259 = *(i1*)(intptr_t)(ws+3185);
}

// CalculateBlockedRegisters workspace at ws+3184 length ws+17
void f427_CalculateBlockedRegisters(i1* p7285 /* blocked */, i8 p7286 /* last */, i8 p7287 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7287; /*insn */
	*(i8*)(intptr_t)(ws+3192) = p7286; /*last */

	i1 v7288 = (i1)+0;
	i8 v7289 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v7289 = v7288;

	i8 v7290 = (i8)(intptr_t)(ws+3184);
	i8 v7291 = *(i8*)(intptr_t)v7290;
	i8 v7292 = *(i8*)(intptr_t)v7291;
	i8 v7293 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7293 = v7292;

c02_056f:;

	i8 v7294 = (i8)(intptr_t)(ws+3184);
	i8 v7295 = *(i8*)(intptr_t)v7294;
	i8 v7296 = (i8)(intptr_t)(ws+3192);
	i8 v7297 = *(i8*)(intptr_t)v7296;
	if (v7295==v7297) goto c02_0572; else goto c02_0571;

c02_0571:;

	i8 v7298 = (i8)(intptr_t)(ws+3200);
	i1 v7299 = *(i1*)(intptr_t)v7298;
	i8 v7300 = (i8)(intptr_t)(ws+3184);
	i8 v7301 = *(i8*)(intptr_t)v7300;
	i8 v7302 = v7301+(+42);
	i1 v7303 = *(i1*)(intptr_t)v7302;
	i1 v7304 = v7299|v7303;
	i8 v7305 = (i8)(intptr_t)(ws+3184);
	i8 v7306 = *(i8*)(intptr_t)v7305;
	i8 v7307 = v7306+(+43);
	i1 v7308 = *(i1*)(intptr_t)v7307;
	i1 v7309 = v7304|v7308;
	i8 v7310 = (i8)(intptr_t)(ws+3200);
	*(i1*)(intptr_t)v7310 = v7309;

	i8 v7311 = (i8)(intptr_t)(ws+3184);
	i8 v7312 = *(i8*)(intptr_t)v7311;
	i8 v7313 = (i8)(intptr_t)(ws+3192);
	i8 v7314 = *(i8*)(intptr_t)v7313;
	if (v7312==v7314) goto c02_0576; else goto c02_0577;

c02_0576:;

	goto c02_0572;

c02_0577:;

c02_0573:;

	i8 v7315 = (i8)(intptr_t)(ws+3184);
	i8 v7316 = *(i8*)(intptr_t)v7315;
	i8 v7317 = *(i8*)(intptr_t)v7316;
	i8 v7318 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7318 = v7317;

	goto c02_056f;

c02_0572:;

endsub:;
	*p7285 = *(i1*)(intptr_t)(ws+3200);
}

// BlockRegisters workspace at ws+3184 length ws+17
void f428_BlockRegisters(i1 p7319 /* blocked */, i8 p7320 /* last */, i8 p7321 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7321; /*insn */
	*(i8*)(intptr_t)(ws+3192) = p7320; /*last */
	*(i1*)(intptr_t)(ws+3200) = p7319; /*blocked */

	i8 v7322 = (i8)(intptr_t)(ws+3184);
	i8 v7323 = *(i8*)(intptr_t)v7322;
	i8 v7324 = *(i8*)(intptr_t)v7323;
	i8 v7325 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7325 = v7324;

c02_057a:;

	i8 v7326 = (i8)(intptr_t)(ws+3184);
	i8 v7327 = *(i8*)(intptr_t)v7326;
	i8 v7328 = (i8)(intptr_t)(ws+3192);
	i8 v7329 = *(i8*)(intptr_t)v7328;
	if (v7327==v7329) goto c02_057d; else goto c02_057c;

c02_057c:;

	i8 v7330 = (i8)(intptr_t)(ws+3184);
	i8 v7331 = *(i8*)(intptr_t)v7330;
	i8 v7332 = v7331+(+42);
	i1 v7333 = *(i1*)(intptr_t)v7332;
	i8 v7334 = (i8)(intptr_t)(ws+3200);
	i1 v7335 = *(i1*)(intptr_t)v7334;
	i1 v7336 = v7333|v7335;
	i8 v7337 = (i8)(intptr_t)(ws+3184);
	i8 v7338 = *(i8*)(intptr_t)v7337;
	i8 v7339 = v7338+(+42);
	*(i1*)(intptr_t)v7339 = v7336;

	i8 v7340 = (i8)(intptr_t)(ws+3184);
	i8 v7341 = *(i8*)(intptr_t)v7340;
	i8 v7342 = v7341+(+43);
	i1 v7343 = *(i1*)(intptr_t)v7342;
	i8 v7344 = (i8)(intptr_t)(ws+3200);
	i1 v7345 = *(i1*)(intptr_t)v7344;
	i1 v7346 = v7343|v7345;
	i8 v7347 = (i8)(intptr_t)(ws+3184);
	i8 v7348 = *(i8*)(intptr_t)v7347;
	i8 v7349 = v7348+(+43);
	*(i1*)(intptr_t)v7349 = v7346;

	i8 v7350 = (i8)(intptr_t)(ws+3184);
	i8 v7351 = *(i8*)(intptr_t)v7350;
	i8 v7352 = (i8)(intptr_t)(ws+3192);
	i8 v7353 = *(i8*)(intptr_t)v7352;
	if (v7351==v7353) goto c02_0581; else goto c02_0582;

c02_0581:;

	goto c02_057d;

c02_0582:;

c02_057e:;

	i8 v7354 = (i8)(intptr_t)(ws+3184);
	i8 v7355 = *(i8*)(intptr_t)v7354;
	i8 v7356 = *(i8*)(intptr_t)v7355;
	i8 v7357 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7357 = v7356;

	goto c02_057a;

c02_057d:;

endsub:;
}
const i1 c02_s0167[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x73,0x70,0x69,0x6c,0x6c,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// CreateSpill workspace at ws+3184 length ws+24
void f429_CreateSpill(i1 p7358 /* dest */, i1 p7359 /* src */, i8 p7360 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7360; /*insn */
	*(i1*)(intptr_t)(ws+3192) = p7359; /*src */
	*(i1*)(intptr_t)(ws+3193) = p7358; /*dest */

	i8 v7361 = (i8)(intptr_t)(ws+3184);
	i8 v7362 = *(i8*)(intptr_t)v7361;
	i8 v7363 = v7362+(+60);
	i1 v7364 = *(i1*)(intptr_t)v7363;
	i8 v7365 = (i8)(intptr_t)(ws+3194);
	*(i1*)(intptr_t)v7365 = v7364;

	i8 v7366 = (i8)(intptr_t)(ws+3194);
	i1 v7367 = *(i1*)(intptr_t)v7366;
	i1 v7368 = (i1)+5;
	if (v7367==v7368) goto c02_0586; else goto c02_0587;

c02_0586:;

	i8 v7369 = (i8)(intptr_t)c02_s0167;
	i8 v7370 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7370)(v7369);

	goto c02_0583;

c02_0587:;

c02_0583:;

	i8 v7371 = (i8)(intptr_t)(ws+3184);
	i8 v7372 = *(i8*)(intptr_t)v7371;
	i8 v7373 = v7372+(+44);
	i8 v7374 = (i8)(intptr_t)(ws+3194);
	i1 v7375 = *(i1*)(intptr_t)v7374;
	i8 v7376 = v7375;
	i1 v7377 = (i1)+1;
	i8 v7378 = ((i8)v7376)<<v7377;
	i8 v7379 = v7373+v7378;
	i8 v7380 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7380 = v7379;

	i8 v7381 = (i8)(intptr_t)(ws+3192);
	i1 v7382 = *(i1*)(intptr_t)v7381;
	i8 v7383 = (i8)(intptr_t)(ws+3200);
	i8 v7384 = *(i8*)(intptr_t)v7383;
	*(i1*)(intptr_t)v7384 = v7382;

	i8 v7385 = (i8)(intptr_t)(ws+3193);
	i1 v7386 = *(i1*)(intptr_t)v7385;
	i8 v7387 = (i8)(intptr_t)(ws+3200);
	i8 v7388 = *(i8*)(intptr_t)v7387;
	i8 v7389 = v7388+(+1);
	*(i1*)(intptr_t)v7389 = v7386;

	i8 v7390 = (i8)(intptr_t)(ws+3194);
	i1 v7391 = *(i1*)(intptr_t)v7390;
	i1 v7392 = v7391+(+1);
	i8 v7393 = (i8)(intptr_t)(ws+3184);
	i8 v7394 = *(i8*)(intptr_t)v7393;
	i8 v7395 = v7394+(+60);
	*(i1*)(intptr_t)v7395 = v7392;

endsub:;
}
const i1 c02_s0168[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x72,0x65,0x6c,0x6f,0x61,0x64,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// CreateReload workspace at ws+3184 length ws+24
void f430_CreateReload(i1 p7396 /* dest */, i1 p7397 /* src */, i8 p7398 /* insn */) {
	*(i8*)(intptr_t)(ws+3184) = p7398; /*insn */
	*(i1*)(intptr_t)(ws+3192) = p7397; /*src */
	*(i1*)(intptr_t)(ws+3193) = p7396; /*dest */

	i8 v7399 = (i8)(intptr_t)(ws+3184);
	i8 v7400 = *(i8*)(intptr_t)v7399;
	i8 v7401 = v7400+(+61);
	i1 v7402 = *(i1*)(intptr_t)v7401;
	i8 v7403 = (i8)(intptr_t)(ws+3194);
	*(i1*)(intptr_t)v7403 = v7402;

	i8 v7404 = (i8)(intptr_t)(ws+3194);
	i1 v7405 = *(i1*)(intptr_t)v7404;
	i1 v7406 = (i1)+5;
	if (v7405==v7406) goto c02_058b; else goto c02_058c;

c02_058b:;

	i8 v7407 = (i8)(intptr_t)c02_s0168;
	i8 v7408 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7408)(v7407);

	goto c02_0588;

c02_058c:;

c02_0588:;

	i8 v7409 = (i8)(intptr_t)(ws+3184);
	i8 v7410 = *(i8*)(intptr_t)v7409;
	i8 v7411 = v7410+(+52);
	i8 v7412 = (i8)(intptr_t)(ws+3194);
	i1 v7413 = *(i1*)(intptr_t)v7412;
	i8 v7414 = v7413;
	i1 v7415 = (i1)+1;
	i8 v7416 = ((i8)v7414)<<v7415;
	i8 v7417 = v7411+v7416;
	i8 v7418 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7418 = v7417;

	i8 v7419 = (i8)(intptr_t)(ws+3192);
	i1 v7420 = *(i1*)(intptr_t)v7419;
	i8 v7421 = (i8)(intptr_t)(ws+3200);
	i8 v7422 = *(i8*)(intptr_t)v7421;
	*(i1*)(intptr_t)v7422 = v7420;

	i8 v7423 = (i8)(intptr_t)(ws+3193);
	i1 v7424 = *(i1*)(intptr_t)v7423;
	i8 v7425 = (i8)(intptr_t)(ws+3200);
	i8 v7426 = *(i8*)(intptr_t)v7425;
	i8 v7427 = v7426+(+1);
	*(i1*)(intptr_t)v7427 = v7424;

	i8 v7428 = (i8)(intptr_t)(ws+3194);
	i1 v7429 = *(i1*)(intptr_t)v7428;
	i1 v7430 = v7429+(+1);
	i8 v7431 = (i8)(intptr_t)(ws+3184);
	i8 v7432 = *(i8*)(intptr_t)v7431;
	i8 v7433 = v7432+(+61);
	*(i1*)(intptr_t)v7433 = v7430;

endsub:;
}
	void f233_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f233_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f233_ArchEmitMove(i1 /* dest */, i1 /* src */);
	void f233_ArchEmitMove(i1 /* dest */, i1 /* src */);

// ShuffleRegisters workspace at ws+3168 length ws+25
void f431_ShuffleRegisters(i8 p7434 /* moves */) {
	*(i8*)(intptr_t)(ws+3168) = p7434; /*moves */

	i1 v7435 = (i1)+0;
	i8 v7436 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7436 = v7435;

	i1 v7437 = (i1)+0;
	i8 v7438 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7438 = v7437;

	i8 v7439 = (i8)(intptr_t)(ws+3168);
	i8 v7440 = *(i8*)(intptr_t)v7439;
	i8 v7441 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7441 = v7440;

	i1 v7442 = (i1)+4;
	i8 v7443 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7443 = v7442;

c02_058f:;

	i8 v7444 = (i8)(intptr_t)(ws+3192);
	i1 v7445 = *(i1*)(intptr_t)v7444;
	i1 v7446 = (i1)+0;
	if (v7445==v7446) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v7447 = (i8)(intptr_t)(ws+3176);
	i1 v7448 = *(i1*)(intptr_t)v7447;
	i8 v7449 = (i8)(intptr_t)(ws+3184);
	i8 v7450 = *(i8*)(intptr_t)v7449;
	i8 v7451 = v7450+(+1);
	i1 v7452 = *(i1*)(intptr_t)v7451;
	i1 v7453 = v7448|v7452;
	i8 v7454 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7454 = v7453;

	i8 v7455 = (i8)(intptr_t)(ws+3177);
	i1 v7456 = *(i1*)(intptr_t)v7455;
	i8 v7457 = (i8)(intptr_t)(ws+3184);
	i8 v7458 = *(i8*)(intptr_t)v7457;
	i1 v7459 = *(i1*)(intptr_t)v7458;
	i1 v7460 = v7456|v7459;
	i8 v7461 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7461 = v7460;

	i8 v7462 = (i8)(intptr_t)(ws+3192);
	i1 v7463 = *(i1*)(intptr_t)v7462;
	i1 v7464 = v7463+(-1);
	i8 v7465 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7465 = v7464;

	i8 v7466 = (i8)(intptr_t)(ws+3184);
	i8 v7467 = *(i8*)(intptr_t)v7466;
	i8 v7468 = v7467+(+2);
	i8 v7469 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7469 = v7468;

	goto c02_058f;

c02_0592:;

c02_0593:;

	i8 v7470 = (i8)(intptr_t)(ws+3168);
	i8 v7471 = *(i8*)(intptr_t)v7470;
	i8 v7472 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7472 = v7471;

	i1 v7473 = (i1)+4;
	i8 v7474 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7474 = v7473;

c02_0597:;

	i8 v7475 = (i8)(intptr_t)(ws+3192);
	i1 v7476 = *(i1*)(intptr_t)v7475;
	i1 v7477 = (i1)+0;
	if (v7476==v7477) goto c02_059a; else goto c02_0599;

c02_0599:;

	i8 v7478 = (i8)(intptr_t)(ws+3184);
	i8 v7479 = *(i8*)(intptr_t)v7478;
	i1 v7480 = *(i1*)(intptr_t)v7479;
	i1 v7481 = (i1)+0;
	if (v7480==v7481) goto c02_05a1; else goto c02_05a2;

c02_05a2:;

	i8 v7482 = (i8)(intptr_t)(ws+3184);
	i8 v7483 = *(i8*)(intptr_t)v7482;
	i8 v7484 = v7483+(+1);
	i1 v7485 = *(i1*)(intptr_t)v7484;
	i1 v7486 = (i1)+0;
	if (v7485==v7486) goto c02_05a0; else goto c02_05a1;

c02_05a0:;

	goto c02_059a;

c02_05a1:;

c02_059b:;

	i8 v7487 = (i8)(intptr_t)(ws+3184);
	i8 v7488 = *(i8*)(intptr_t)v7487;
	i8 v7489 = v7488+(+2);
	i8 v7490 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7490 = v7489;

	i8 v7491 = (i8)(intptr_t)(ws+3192);
	i1 v7492 = *(i1*)(intptr_t)v7491;
	i1 v7493 = v7492+(-1);
	i8 v7494 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7494 = v7493;

	goto c02_0597;

c02_059a:;

	i8 v7495 = (i8)(intptr_t)(ws+3192);
	i1 v7496 = *(i1*)(intptr_t)v7495;
	i1 v7497 = (i1)+0;
	if (v7496==v7497) goto c02_05a7; else goto c02_05a6;

c02_05a6:;

	i8 v7498 = (i8)(intptr_t)(ws+3184);
	i8 v7499 = *(i8*)(intptr_t)v7498;
	i1 v7500 = *(i1*)(intptr_t)v7499;
	i1 v7501 = (i1)+0;
	i8 v7502 = (i8)(intptr_t)(f233_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7502)(v7501, v7500);

	i8 v7503 = (i8)(intptr_t)(ws+3177);
	i1 v7504 = *(i1*)(intptr_t)v7503;
	i8 v7505 = (i8)(intptr_t)(ws+3184);
	i8 v7506 = *(i8*)(intptr_t)v7505;
	i1 v7507 = *(i1*)(intptr_t)v7506;
	i1 v7508 = ~v7507;
	i1 v7509 = v7504&v7508;
	i8 v7510 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7510 = v7509;

	i1 v7511 = (i1)+0;
	i8 v7512 = (i8)(intptr_t)(ws+3184);
	i8 v7513 = *(i8*)(intptr_t)v7512;
	*(i1*)(intptr_t)v7513 = v7511;

	goto c02_0593;

c02_05a7:;

c02_05a3:;

	i8 v7514 = (i8)(intptr_t)(ws+3168);
	i8 v7515 = *(i8*)(intptr_t)v7514;
	i8 v7516 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7516 = v7515;

	i1 v7517 = (i1)+4;
	i8 v7518 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7518 = v7517;

c02_05aa:;

	i8 v7519 = (i8)(intptr_t)(ws+3192);
	i1 v7520 = *(i1*)(intptr_t)v7519;
	i1 v7521 = (i1)+0;
	if (v7520==v7521) goto c02_05ad; else goto c02_05ac;

c02_05ac:;

	i8 v7522 = (i8)(intptr_t)(ws+3184);
	i8 v7523 = *(i8*)(intptr_t)v7522;
	i1 v7524 = *(i1*)(intptr_t)v7523;
	i1 v7525 = (i1)+0;
	if (v7524==v7525) goto c02_05b6; else goto c02_05b8;

c02_05b8:;

	i8 v7526 = (i8)(intptr_t)(ws+3184);
	i8 v7527 = *(i8*)(intptr_t)v7526;
	i8 v7528 = v7527+(+1);
	i1 v7529 = *(i1*)(intptr_t)v7528;
	i1 v7530 = (i1)+0;
	if (v7529==v7530) goto c02_05b6; else goto c02_05b7;

c02_05b7:;

	i8 v7531 = (i8)(intptr_t)(ws+3184);
	i8 v7532 = *(i8*)(intptr_t)v7531;
	i8 v7533 = v7532+(+1);
	i1 v7534 = *(i1*)(intptr_t)v7533;
	i8 v7535 = (i8)(intptr_t)(ws+3177);
	i1 v7536 = *(i1*)(intptr_t)v7535;
	i1 v7537 = v7534&v7536;
	i1 v7538 = (i1)+0;
	if (v7537==v7538) goto c02_05b5; else goto c02_05b6;

c02_05b5:;

	goto c02_05ad;

c02_05b6:;

c02_05ae:;

	i8 v7539 = (i8)(intptr_t)(ws+3184);
	i8 v7540 = *(i8*)(intptr_t)v7539;
	i8 v7541 = v7540+(+2);
	i8 v7542 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7542 = v7541;

	i8 v7543 = (i8)(intptr_t)(ws+3192);
	i1 v7544 = *(i1*)(intptr_t)v7543;
	i1 v7545 = v7544+(-1);
	i8 v7546 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7546 = v7545;

	goto c02_05aa;

c02_05ad:;

	i8 v7547 = (i8)(intptr_t)(ws+3192);
	i1 v7548 = *(i1*)(intptr_t)v7547;
	i1 v7549 = (i1)+0;
	if (v7548==v7549) goto c02_05bd; else goto c02_05bc;

c02_05bc:;

	i8 v7550 = (i8)(intptr_t)(ws+3184);
	i8 v7551 = *(i8*)(intptr_t)v7550;
	i1 v7552 = *(i1*)(intptr_t)v7551;
	i8 v7553 = (i8)(intptr_t)(ws+3184);
	i8 v7554 = *(i8*)(intptr_t)v7553;
	i8 v7555 = v7554+(+1);
	i1 v7556 = *(i1*)(intptr_t)v7555;
	i8 v7557 = (i8)(intptr_t)(f233_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7557)(v7556, v7552);

	i8 v7558 = (i8)(intptr_t)(ws+3177);
	i1 v7559 = *(i1*)(intptr_t)v7558;
	i8 v7560 = (i8)(intptr_t)(ws+3184);
	i8 v7561 = *(i8*)(intptr_t)v7560;
	i1 v7562 = *(i1*)(intptr_t)v7561;
	i1 v7563 = ~v7562;
	i1 v7564 = v7559&v7563;
	i8 v7565 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7565 = v7564;

	i8 v7566 = (i8)(intptr_t)(ws+3176);
	i1 v7567 = *(i1*)(intptr_t)v7566;
	i8 v7568 = (i8)(intptr_t)(ws+3184);
	i8 v7569 = *(i8*)(intptr_t)v7568;
	i8 v7570 = v7569+(+1);
	i1 v7571 = *(i1*)(intptr_t)v7570;
	i1 v7572 = ~v7571;
	i1 v7573 = v7567&v7572;
	i8 v7574 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7574 = v7573;

	i1 v7575 = (i1)+0;
	i8 v7576 = (i8)(intptr_t)(ws+3184);
	i8 v7577 = *(i8*)(intptr_t)v7576;
	*(i1*)(intptr_t)v7577 = v7575;

	i1 v7578 = (i1)+0;
	i8 v7579 = (i8)(intptr_t)(ws+3184);
	i8 v7580 = *(i8*)(intptr_t)v7579;
	i8 v7581 = v7580+(+1);
	*(i1*)(intptr_t)v7581 = v7578;

	goto c02_0593;

c02_05bd:;

c02_05b9:;

	i8 v7582 = (i8)(intptr_t)(ws+3168);
	i8 v7583 = *(i8*)(intptr_t)v7582;
	i8 v7584 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7584 = v7583;

	i1 v7585 = (i1)+4;
	i8 v7586 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7586 = v7585;

c02_05c0:;

	i8 v7587 = (i8)(intptr_t)(ws+3192);
	i1 v7588 = *(i1*)(intptr_t)v7587;
	i1 v7589 = (i1)+0;
	if (v7588==v7589) goto c02_05c3; else goto c02_05c2;

c02_05c2:;

	i8 v7590 = (i8)(intptr_t)(ws+3184);
	i8 v7591 = *(i8*)(intptr_t)v7590;
	i1 v7592 = *(i1*)(intptr_t)v7591;
	i1 v7593 = (i1)+0;
	if (v7592==v7593) goto c02_05cb; else goto c02_05ca;

c02_05cb:;

	i8 v7594 = (i8)(intptr_t)(ws+3184);
	i8 v7595 = *(i8*)(intptr_t)v7594;
	i8 v7596 = v7595+(+1);
	i1 v7597 = *(i1*)(intptr_t)v7596;
	i1 v7598 = (i1)+0;
	if (v7597==v7598) goto c02_05ca; else goto c02_05c9;

c02_05c9:;

	goto c02_05c3;

c02_05ca:;

c02_05c4:;

	i8 v7599 = (i8)(intptr_t)(ws+3184);
	i8 v7600 = *(i8*)(intptr_t)v7599;
	i8 v7601 = v7600+(+2);
	i8 v7602 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7602 = v7601;

	i8 v7603 = (i8)(intptr_t)(ws+3192);
	i1 v7604 = *(i1*)(intptr_t)v7603;
	i1 v7605 = v7604+(-1);
	i8 v7606 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7606 = v7605;

	goto c02_05c0;

c02_05c3:;

	i8 v7607 = (i8)(intptr_t)(ws+3192);
	i1 v7608 = *(i1*)(intptr_t)v7607;
	i1 v7609 = (i1)+0;
	if (v7608==v7609) goto c02_05d0; else goto c02_05cf;

c02_05cf:;

	i1 v7610 = (i1)+0;
	i8 v7611 = (i8)(intptr_t)(ws+3184);
	i8 v7612 = *(i8*)(intptr_t)v7611;
	i8 v7613 = v7612+(+1);
	i1 v7614 = *(i1*)(intptr_t)v7613;
	i8 v7615 = (i8)(intptr_t)(f233_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7615)(v7614, v7610);

	i8 v7616 = (i8)(intptr_t)(ws+3176);
	i1 v7617 = *(i1*)(intptr_t)v7616;
	i8 v7618 = (i8)(intptr_t)(ws+3184);
	i8 v7619 = *(i8*)(intptr_t)v7618;
	i8 v7620 = v7619+(+1);
	i1 v7621 = *(i1*)(intptr_t)v7620;
	i1 v7622 = ~v7621;
	i1 v7623 = v7617&v7622;
	i8 v7624 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v7624 = v7623;

	i1 v7625 = (i1)+0;
	i8 v7626 = (i8)(intptr_t)(ws+3184);
	i8 v7627 = *(i8*)(intptr_t)v7626;
	i8 v7628 = v7627+(+1);
	*(i1*)(intptr_t)v7628 = v7625;

	goto c02_0593;

c02_05d0:;

c02_05cc:;

	i8 v7629 = (i8)(intptr_t)(ws+3168);
	i8 v7630 = *(i8*)(intptr_t)v7629;
	i8 v7631 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7631 = v7630;

	i1 v7632 = (i1)+4;
	i8 v7633 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7633 = v7632;

c02_05d3:;

	i8 v7634 = (i8)(intptr_t)(ws+3192);
	i1 v7635 = *(i1*)(intptr_t)v7634;
	i1 v7636 = (i1)+0;
	if (v7635==v7636) goto c02_05d6; else goto c02_05d5;

c02_05d5:;

	i8 v7637 = (i8)(intptr_t)(ws+3184);
	i8 v7638 = *(i8*)(intptr_t)v7637;
	i1 v7639 = *(i1*)(intptr_t)v7638;
	i1 v7640 = (i1)+0;
	if (v7639==v7640) goto c02_05dd; else goto c02_05de;

c02_05de:;

	i8 v7641 = (i8)(intptr_t)(ws+3184);
	i8 v7642 = *(i8*)(intptr_t)v7641;
	i8 v7643 = v7642+(+1);
	i1 v7644 = *(i1*)(intptr_t)v7643;
	i1 v7645 = (i1)+0;
	if (v7644==v7645) goto c02_05dd; else goto c02_05dc;

c02_05dc:;

	goto c02_05d6;

c02_05dd:;

c02_05d7:;

	i8 v7646 = (i8)(intptr_t)(ws+3184);
	i8 v7647 = *(i8*)(intptr_t)v7646;
	i8 v7648 = v7647+(+2);
	i8 v7649 = (i8)(intptr_t)(ws+3184);
	*(i8*)(intptr_t)v7649 = v7648;

	i8 v7650 = (i8)(intptr_t)(ws+3192);
	i1 v7651 = *(i1*)(intptr_t)v7650;
	i1 v7652 = v7651+(-1);
	i8 v7653 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v7653 = v7652;

	goto c02_05d3;

c02_05d6:;

	i8 v7654 = (i8)(intptr_t)(ws+3192);
	i1 v7655 = *(i1*)(intptr_t)v7654;
	i1 v7656 = (i1)+0;
	if (v7655==v7656) goto c02_05e3; else goto c02_05e2;

c02_05e2:;

	i8 v7657 = (i8)(intptr_t)(ws+3184);
	i8 v7658 = *(i8*)(intptr_t)v7657;
	i1 v7659 = *(i1*)(intptr_t)v7658;
	i1 v7660 = (i1)+0;
	i8 v7661 = (i8)(intptr_t)(f233_ArchEmitMove);

	((void(*)(i1 /* dest */, i1 /* src */))(intptr_t)v7661)(v7660, v7659);

	i8 v7662 = (i8)(intptr_t)(ws+3177);
	i1 v7663 = *(i1*)(intptr_t)v7662;
	i8 v7664 = (i8)(intptr_t)(ws+3184);
	i8 v7665 = *(i8*)(intptr_t)v7664;
	i1 v7666 = *(i1*)(intptr_t)v7665;
	i1 v7667 = ~v7666;
	i1 v7668 = v7663&v7667;
	i8 v7669 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v7669 = v7668;

	i1 v7670 = (i1)+0;
	i8 v7671 = (i8)(intptr_t)(ws+3184);
	i8 v7672 = *(i8*)(intptr_t)v7671;
	*(i1*)(intptr_t)v7672 = v7670;

	goto c02_0593;

c02_05e3:;

c02_05df:;

	goto c02_0594;

c02_0594:;

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
void f432_PrintNodes(i8 p7673 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3184) = p7673; /*rootnode */

	i8 v7674 = (i8)(intptr_t)(ws+216);
	i8 v7675 = *(i8*)(intptr_t)v7674;
	i8 v7676 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7676 = v7675;

	i8 v7677 = (i8)(intptr_t)(ws+3184);
	i8 v7678 = *(i8*)(intptr_t)v7677;
	i8 v7679 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7679)(v7678);

c02_05e6:;

	i8 v7680 = (i8)(intptr_t)(ws+216);
	i8 v7681 = *(i8*)(intptr_t)v7680;
	i8 v7682 = (i8)(intptr_t)(ws+3192);
	i8 v7683 = *(i8*)(intptr_t)v7682;
	if (v7681==v7683) goto c02_05e9; else goto c02_05e8;

c02_05e8:;

	i8 v7684 = (i8)(intptr_t)(f55_NextNode);
	i8 v7685;

	((void(*)(i8* /* node */))(intptr_t)v7684)(&v7685);
	i8 v7686 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7686 = v7685;

	i8 v7687 = (i8)(intptr_t)(ws+3200);
	i8 v7688 = *(i8*)(intptr_t)v7687;
	i8 v7689 = (i8)+0;
	if (v7688==v7689) goto c02_05ed; else goto c02_05ee;

c02_05ed:;

	goto c02_05e9;

c02_05ee:;

c02_05ea:;

	i8 v7690 = (i8)(intptr_t)(ws+3200);
	i8 v7691 = *(i8*)(intptr_t)v7690;
	i4 v7692 = v7691;
	i8 v7693 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7693)(v7692);

	i1 v7694 = (i1)+32;
	i8 v7695 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7695)(v7694);

	i8 v7696 = (i8)(intptr_t)(ws+3200);
	i8 v7697 = *(i8*)(intptr_t)v7696;
	i8 v7698 = v7697+(+58);
	i1 v7699 = *(i1*)(intptr_t)v7698;
	i8 v7700 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7700)(v7699);

	i1 v7701 = (i1)+32;
	i8 v7702 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7702)(v7701);

	i8 v7703 = (i8)(intptr_t)(ws+3200);
	i8 v7704 = *(i8*)(intptr_t)v7703;
	i8 v7705 = v7704+(+56);
	i1 v7706 = *(i1*)(intptr_t)v7705;
	i2 v7707 = v7706;
	i8 v7708 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7708)(v7707);

	i1 v7709 = (i1)+32;
	i8 v7710 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7710)(v7709);

	i8 v7711 = (i8)(intptr_t)(ws+3200);
	i8 v7712 = *(i8*)(intptr_t)v7711;
	i8 v7713 = v7712+(+57);
	i1 v7714 = *(i1*)(intptr_t)v7713;
	i2 v7715 = v7714;
	i8 v7716 = (i8)(intptr_t)(f19_print_hex_i16);

	((void(*)(i2 /* value */))(intptr_t)v7716)(v7715);

	i1 v7717 = (i1)+32;
	i8 v7718 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7718)(v7717);

	i8 v7719 = (i8)(intptr_t)(ws+3200);
	i8 v7720 = *(i8*)(intptr_t)v7719;
	i8 v7721 = v7720+(+24);
	i8 v7722 = *(i8*)(intptr_t)v7721;
	i4 v7723 = v7722;
	i8 v7724 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7724)(v7723);

	i1 v7725 = (i1)+32;
	i8 v7726 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7726)(v7725);

	i8 v7727 = (i8)(intptr_t)(ws+3200);
	i8 v7728 = *(i8*)(intptr_t)v7727;
	i8 v7729 = v7728+(+32);
	i8 v7730 = *(i8*)(intptr_t)v7729;
	i4 v7731 = v7730;
	i8 v7732 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7732)(v7731);

	i8 v7733 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v7733)();

	goto c02_05e6;

c02_05e9:;

endsub:;
}
	void f53_PushNode(i8 /* node */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f54_PopNode(i8* /* node */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f22_MemZero(i8 /* size */, i8 /* ptr */);
	void f425_PopulateMatchBuffer(i8 /* matchbuf */, i8 /* n */, i8 /* insn */);

// RewindRulePointers workspace at ws+3216 length ws+0
void f435_RewindRulePointers(void) {

	i8 v7777 = (i8)(intptr_t)(ws+3160);
	i8 v7778 = (i8)+3;
	i8 v7779 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7779)(v7778, v7777);

	i8 v7780 = (i8)(intptr_t)(ws+3168);
	i8 v7781 = (i8)+24;
	i8 v7782 = (i8)(intptr_t)(f22_MemZero);

	((void(*)(i8 /* size */, i8 /* ptr */))(intptr_t)v7782)(v7781, v7780);

	i8 v7783 = (i8)(intptr_t)(ws+3136);
	i8 v7784 = *(i8*)(intptr_t)v7783;
	i8 v7785 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v7785 = v7784;

	i8 v7786 = (i8)(intptr_t)(ws+3128);
	i8 v7787 = *(i8*)(intptr_t)v7786;
	i8 v7788 = (i8)(intptr_t)(ws+3168);
	i8 v7789 = (i8)(intptr_t)(ws+3160);
	i8 v7790 = (i8)(intptr_t)(f425_PopulateMatchBuffer);

	((void(*)(i8 /* matchbuf */, i8 /* n */, i8 /* insn */))(intptr_t)v7790)(v7789, v7788, v7787);

	i1 v7791 = (i1)+255;
	i8 v7792 = (i8)(intptr_t)(ws+3144);
	*(i1*)(intptr_t)v7792 = v7791;

	i8 v7793 = (i8)(intptr_t)(((i1*)c02_a555+0));
	i8 v7794 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v7794 = v7793;

	i8 v7795 = (i8)(intptr_t)(((i1*)c02_a556+0));
	i8 v7796 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v7796 = v7795;

	i8 v7797 = (i8)(intptr_t)(((i1*)c02_a557-7));
	i8 v7798 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v7798 = v7797;

endsub:;
}
	void f253_MatchPredicate(i1* /* matches */, i8 /* n */, i1 /* rule */);

// TestRule workspace at ws+3216 length ws+27
void f436_TestRule(i1* p7799 /* result */) {

	i1 v7800 = (i1)+0;
	i8 v7801 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v7801 = v7800;

	i8 v7802 = (i8)(intptr_t)(ws+3152);
	i8 v7803 = *(i8*)(intptr_t)v7802;
	i8 v7804 = v7803+(+1);
	i1 v7805 = *(i1*)(intptr_t)v7804;
	i1 v7806 = (i1)+0;
	if (v7805==v7806) goto c02_05fe; else goto c02_05fd;

c02_05fd:;

	i8 v7807 = (i8)(intptr_t)(ws+3136);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = v7808+(+56);
	i1 v7810 = *(i1*)(intptr_t)v7809;
	i8 v7811 = (i8)(intptr_t)(ws+3152);
	i8 v7812 = *(i8*)(intptr_t)v7811;
	i8 v7813 = v7812+(+1);
	i1 v7814 = *(i1*)(intptr_t)v7813;
	i1 v7815 = v7810&v7814;
	i1 v7816 = (i1)+0;
	if (v7815==v7816) goto c02_0602; else goto c02_0603;

c02_0602:;

	goto endsub;

c02_0603:;

c02_05ff:;

	goto c02_05fa;

c02_05fe:;

	i8 v7817 = (i8)(intptr_t)(ws+3136);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	i8 v7819 = v7818+(+56);
	i1 v7820 = *(i1*)(intptr_t)v7819;
	i1 v7821 = (i1)+0;
	if (v7820==v7821) goto c02_0608; else goto c02_0607;

c02_0607:;

	goto endsub;

c02_0608:;

c02_0604:;

c02_05fa:;

	i8 v7822 = (i8)(intptr_t)(ws+3160);
	i8 v7823 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7823 = v7822;

	i8 v7824 = (i8)(intptr_t)(ws+3192);
	i8 v7825 = *(i8*)(intptr_t)v7824;
	i8 v7826 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v7826 = v7825;

	i8 v7827 = (i8)(intptr_t)(ws+3152);
	i8 v7828 = *(i8*)(intptr_t)v7827;
	i8 v7829 = v7828+(+4);
	i1 v7830 = *(i1*)(intptr_t)v7829;
	i8 v7831 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7831 = v7830;

c02_060b:;

	i8 v7832 = (i8)(intptr_t)(ws+3240);
	i1 v7833 = *(i1*)(intptr_t)v7832;
	i1 v7834 = (i1)+0;
	if (v7833==v7834) goto c02_060e; else goto c02_060d;

c02_060d:;

	i8 v7835 = (i8)(intptr_t)(ws+3224);
	i8 v7836 = *(i8*)(intptr_t)v7835;
	i1 v7837 = *(i1*)(intptr_t)v7836;
	i8 v7838 = (i8)(intptr_t)(ws+3241);
	*(i1*)(intptr_t)v7838 = v7837;

	i8 v7839 = (i8)(intptr_t)(ws+3224);
	i8 v7840 = *(i8*)(intptr_t)v7839;
	i8 v7841 = v7840+(+1);
	i8 v7842 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7842 = v7841;

	i8 v7843 = (i8)(intptr_t)(ws+3240);
	i1 v7844 = *(i1*)(intptr_t)v7843;
	i1 v7845 = v7844&(+1);
	i1 v7846 = (i1)+0;
	if (v7845==v7846) goto c02_0613; else goto c02_0612;

c02_0612:;

	i8 v7847 = (i8)(intptr_t)(ws+3232);
	i8 v7848 = *(i8*)(intptr_t)v7847;
	i1 v7849 = *(i1*)(intptr_t)v7848;
	i8 v7850 = (i8)(intptr_t)(ws+3242);
	*(i1*)(intptr_t)v7850 = v7849;

	i8 v7851 = (i8)(intptr_t)(ws+3232);
	i8 v7852 = *(i8*)(intptr_t)v7851;
	i8 v7853 = v7852+(+1);
	i8 v7854 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v7854 = v7853;

	i8 v7855 = (i8)(intptr_t)(ws+3241);
	i1 v7856 = *(i1*)(intptr_t)v7855;
	i8 v7857 = (i8)(intptr_t)(ws+3242);
	i1 v7858 = *(i1*)(intptr_t)v7857;
	if (v7856==v7858) goto c02_0618; else goto c02_0617;

c02_0617:;

	goto endsub;

c02_0618:;

c02_0614:;

	goto c02_060f;

c02_0613:;

c02_060f:;

	i8 v7859 = (i8)(intptr_t)(ws+3240);
	i1 v7860 = *(i1*)(intptr_t)v7859;
	i1 v7861 = (i1)+1;
	i1 v7862 = ((i1)v7860)>>v7861;
	i8 v7863 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7863 = v7862;

	goto c02_060b;

c02_060e:;

	i8 v7864 = (i8)(intptr_t)(ws+3152);
	i8 v7865 = *(i8*)(intptr_t)v7864;
	i1 v7866 = *(i1*)(intptr_t)v7865;
	i1 v7867 = v7866&(+1);
	i1 v7868 = (i1)+0;
	if (v7867==v7868) goto c02_061f; else goto c02_0620;

c02_0620:;

	i8 v7869 = (i8)(intptr_t)(ws+3144);
	i1 v7870 = *(i1*)(intptr_t)v7869;
	i8 v7871 = (i8)(intptr_t)(ws+3168);
	i8 v7872 = (i8)(intptr_t)(f253_MatchPredicate);
	i1 v7873;

	((void(*)(i1* /* matches */, i8 /* n */, i1 /* rule */))(intptr_t)v7872)(&v7873, v7871, v7870);
	i1 v7874 = (i1)+0;
	if (v7873==v7874) goto c02_061e; else goto c02_061f;

c02_061e:;

	goto endsub;

c02_061f:;

c02_0619:;

	i1 v7875 = (i1)+1;
	i8 v7876 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v7876 = v7875;

endsub:;
	*p7799 = *(i1*)(intptr_t)(ws+3216);
}
	void f435_RewindRulePointers(void);
	void f135_MidFallback(i8* /* m */, i8 /* left */);

// ConvertNodeToFallback workspace at ws+3216 length ws+25
void f437_ConvertNodeToFallback(void) {

	i8 v7899 = (i8)(intptr_t)(ws+3136);
	i8 v7900 = *(i8*)(intptr_t)v7899;
	i8 v7901 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v7901 = v7900;

	i8 v7902 = (i8)(intptr_t)(ws+3216);
	i8 v7903 = *(i8*)(intptr_t)v7902;
	i8 v7904 = (i8)(intptr_t)(f135_MidFallback);
	i8 v7905;

	((void(*)(i8* /* m */, i8 /* left */))(intptr_t)v7904)(&v7905, v7903);
	i8 v7906 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v7906 = v7905;

	i8 v7907 = (i8)(intptr_t)(ws+3216);
	i8 v7908 = *(i8*)(intptr_t)v7907;
	i8 v7909 = v7908+(+48);
	i8 v7910 = *(i8*)(intptr_t)v7909;
	i8 v7911 = (i8)(intptr_t)(ws+3136);
	i8 v7912 = *(i8*)(intptr_t)v7911;
	i8 v7913 = v7912+(+48);
	*(i8*)(intptr_t)v7913 = v7910;

	i8 v7914 = (i8)(intptr_t)(ws+3136);
	i8 v7915 = *(i8*)(intptr_t)v7914;
	i8 v7916 = v7915+(+48);
	i8 v7917 = *(i8*)(intptr_t)v7916;
	i8 v7918 = v7917+(+16);
	i8 v7919 = *(i8*)(intptr_t)v7918;
	i8 v7920 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v7920 = v7919;

	i8 v7921 = (i8)(intptr_t)(ws+3216);
	i8 v7922 = *(i8*)(intptr_t)v7921;
	i8 v7923 = v7922+(+56);
	i1 v7924 = *(i1*)(intptr_t)v7923;
	i8 v7925 = (i8)(intptr_t)(ws+3136);
	i8 v7926 = *(i8*)(intptr_t)v7925;
	i8 v7927 = v7926+(+56);
	*(i1*)(intptr_t)v7927 = v7924;

	i8 v7928 = (i8)(intptr_t)(ws+3224);
	i8 v7929 = *(i8*)(intptr_t)v7928;
	i8 v7930 = v7929+(+40);
	i8 v7931 = *(i8*)(intptr_t)v7930;
	i8 v7932 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v7932 = v7931;

	i1 v7933 = (i1)+0;
	i8 v7934 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7934 = v7933;

c02_0632:;

	i8 v7935 = (i8)(intptr_t)(ws+3240);
	i1 v7936 = *(i1*)(intptr_t)v7935;
	i1 v7937 = (i1)+3;
	if (v7936==v7937) goto c02_0635; else goto c02_0634;

c02_0634:;

	i8 v7938 = (i8)(intptr_t)(ws+3232);
	i8 v7939 = *(i8*)(intptr_t)v7938;
	i8 v7940 = v7939+(+16);
	i8 v7941 = (i8)(intptr_t)(ws+3240);
	i1 v7942 = *(i1*)(intptr_t)v7941;
	i8 v7943 = v7942;
	i1 v7944 = (i1)+3;
	i8 v7945 = ((i8)v7943)<<v7944;
	i8 v7946 = v7940+v7945;
	i8 v7947 = *(i8*)(intptr_t)v7946;
	i8 v7948 = (i8)(intptr_t)(ws+3216);
	i8 v7949 = *(i8*)(intptr_t)v7948;
	if (v7947==v7949) goto c02_0639; else goto c02_063a;

c02_0639:;

	i8 v7950 = (i8)(intptr_t)(ws+3136);
	i8 v7951 = *(i8*)(intptr_t)v7950;
	i8 v7952 = (i8)(intptr_t)(ws+3232);
	i8 v7953 = *(i8*)(intptr_t)v7952;
	i8 v7954 = v7953+(+16);
	i8 v7955 = (i8)(intptr_t)(ws+3240);
	i1 v7956 = *(i1*)(intptr_t)v7955;
	i8 v7957 = v7956;
	i1 v7958 = (i1)+3;
	i8 v7959 = ((i8)v7957)<<v7958;
	i8 v7960 = v7954+v7959;
	*(i8*)(intptr_t)v7960 = v7951;

	goto c02_0636;

c02_063a:;

c02_0636:;

	i8 v7961 = (i8)(intptr_t)(ws+3240);
	i1 v7962 = *(i1*)(intptr_t)v7961;
	i1 v7963 = v7962+(+1);
	i8 v7964 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v7964 = v7963;

	goto c02_0632;

c02_0635:;

endsub:;
}
	void f437_ConvertNodeToFallback(void);
	void f435_RewindRulePointers(void);
	void f59_StartError(void);
const i1 c02_s0169[] = { 0x75,0x6e,0x6d,0x61,0x74,0x63,0x68,0x65,0x64,0x20,0x69,0x6e,0x73,0x74,0x72,0x75,0x63,0x74,0x69,0x6f,0x6e,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f8_print_char(i1 /* c */);
const i1 c02_s016a[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x69,0x6e,0x67,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f60_EndError(void);
	void f436_TestRule(i1* /* result */);
	void f53_PushNode(i8 /* node */);

// CopyChildNodes workspace at ws+3216 length ws+16
void f438_CopyChildNodes(void) {

	i8 v8061 = (i8)(intptr_t)(ws+3152);
	i8 v8062 = *(i8*)(intptr_t)v8061;
	i8 v8063 = v8062+(+5);
	i1 v8064 = *(i1*)(intptr_t)v8063;
	i8 v8065 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v8065 = v8064;

	i8 v8066 = (i8)(intptr_t)(ws+3152);
	i8 v8067 = *(i8*)(intptr_t)v8066;
	i8 v8068 = v8067+(+6);
	i1 v8069 = *(i1*)(intptr_t)v8068;
	i8 v8070 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v8070 = v8069;

	i1 v8071 = (i1)+0;
	i8 v8072 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8072 = v8071;

c02_065e:;

	i8 v8073 = (i8)(intptr_t)(ws+3096);
	i1 v8074 = *(i1*)(intptr_t)v8073;
	i1 v8075 = (i1)+3;
	if (v8074==v8075) goto c02_0661; else goto c02_0660;

c02_0660:;

	i8 v8076 = (i8)(intptr_t)(ws+3168);
	i8 v8077 = (i8)(intptr_t)(ws+3096);
	i1 v8078 = *(i1*)(intptr_t)v8077;
	i8 v8079 = v8078;
	i1 v8080 = (i1)+3;
	i8 v8081 = ((i8)v8079)<<v8080;
	i8 v8082 = v8076+v8081;
	i8 v8083 = *(i8*)(intptr_t)v8082;
	i8 v8084 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v8084 = v8083;

	i8 v8085 = (i8)(intptr_t)(ws+3216);
	i1 v8086 = *(i1*)(intptr_t)v8085;
	i1 v8087 = v8086&(+1);
	i1 v8088 = (i1)+0;
	if (v8087==v8088) goto c02_0666; else goto c02_0665;

c02_0665:;

	i8 v8089 = (i8)(intptr_t)(ws+3224);
	i8 v8090 = *(i8*)(intptr_t)v8089;
	i8 v8091 = (i8)(intptr_t)(ws+3128);
	i8 v8092 = *(i8*)(intptr_t)v8091;
	i8 v8093 = v8092+(+16);
	i8 v8094 = (i8)(intptr_t)(ws+3096);
	i1 v8095 = *(i1*)(intptr_t)v8094;
	i8 v8096 = v8095;
	i1 v8097 = (i1)+3;
	i8 v8098 = ((i8)v8096)<<v8097;
	i8 v8099 = v8093+v8098;
	*(i8*)(intptr_t)v8099 = v8090;

	i8 v8100 = (i8)(intptr_t)(ws+3217);
	i1 v8101 = *(i1*)(intptr_t)v8100;
	i1 v8102 = v8101&(+1);
	i1 v8103 = (i1)+0;
	if (v8102==v8103) goto c02_066b; else goto c02_066a;

c02_066a:;

	i8 v8104 = (i8)(intptr_t)(ws+3224);
	i8 v8105 = *(i8*)(intptr_t)v8104;
	i8 v8106 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8106)(v8105);

	i8 v8107 = (i8)(intptr_t)(ws+3200);
	i8 v8108 = *(i8*)(intptr_t)v8107;
	i1 v8109 = *(i1*)(intptr_t)v8108;
	i8 v8110 = (i8)(intptr_t)(ws+3224);
	i8 v8111 = *(i8*)(intptr_t)v8110;
	i8 v8112 = v8111+(+56);
	*(i1*)(intptr_t)v8112 = v8109;

	i8 v8113 = (i8)(intptr_t)(ws+3200);
	i8 v8114 = *(i8*)(intptr_t)v8113;
	i8 v8115 = v8114+(+1);
	i8 v8116 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v8116 = v8115;

	i8 v8117 = (i8)(intptr_t)(ws+3128);
	i8 v8118 = *(i8*)(intptr_t)v8117;
	i8 v8119 = (i8)(intptr_t)(ws+3224);
	i8 v8120 = *(i8*)(intptr_t)v8119;
	i8 v8121 = v8120+(+48);
	*(i8*)(intptr_t)v8121 = v8118;

	goto c02_0667;

c02_066b:;

c02_0667:;

	goto c02_0662;

c02_0666:;

c02_0662:;

	i8 v8122 = (i8)(intptr_t)(ws+3216);
	i1 v8123 = *(i1*)(intptr_t)v8122;
	i1 v8124 = (i1)+1;
	i1 v8125 = ((i1)v8123)>>v8124;
	i8 v8126 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v8126 = v8125;

	i8 v8127 = (i8)(intptr_t)(ws+3217);
	i1 v8128 = *(i1*)(intptr_t)v8127;
	i1 v8129 = (i1)+1;
	i1 v8130 = ((i1)v8128)>>v8129;
	i8 v8131 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v8131 = v8130;

	i8 v8132 = (i8)(intptr_t)(ws+3096);
	i1 v8133 = *(i1*)(intptr_t)v8132;
	i1 v8134 = v8133+(+1);
	i8 v8135 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8135 = v8134;

	goto c02_065e;

c02_0661:;

	i8 v8136 = (i8)(intptr_t)(ws+3128);
	i8 v8137 = *(i8*)(intptr_t)v8136;
	i8 v8138 = (i8)(intptr_t)(ws+3136);
	i8 v8139 = *(i8*)(intptr_t)v8138;
	i8 v8140 = v8139+(+40);
	*(i8*)(intptr_t)v8140 = v8137;

endsub:;
}
	void f438_CopyChildNodes(void);

// InstructionMatcher workspace at ws+3160 length ws+49
void f434_InstructionMatcher(void) {



	i8 v7877 = (i8)(intptr_t)(f435_RewindRulePointers);

	((void(*)(void))(intptr_t)v7877)();

c02_0621:;

	i8 v7878 = (i8)(intptr_t)(ws+3152);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = v7879+(+7);
	i8 v7881 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v7881 = v7880;

	i8 v7882 = (i8)(intptr_t)(ws+3144);
	i1 v7883 = *(i1*)(intptr_t)v7882;
	i1 v7884 = v7883+(+1);
	i8 v7885 = (i8)(intptr_t)(ws+3144);
	*(i1*)(intptr_t)v7885 = v7884;

	i8 v7886 = (i8)(intptr_t)(ws+3152);
	i8 v7887 = *(i8*)(intptr_t)v7886;
	i8 v7888 = (i8)(intptr_t)(((i1*)c02_a557+1302));
	if (v7887==v7888) goto c02_0626; else goto c02_0627;

c02_0626:;

	i8 v7889 = (i8)(intptr_t)(ws+3136);
	i8 v7890 = *(i8*)(intptr_t)v7889;
	i8 v7891 = v7890+(+58);
	i1 v7892 = *(i1*)(intptr_t)v7891;
	i1 v7893 = (i1)+21;
	if (v7892==v7893) goto c02_062e; else goto c02_062f;

c02_062f:;

	i8 v7894 = (i8)(intptr_t)(ws+3136);
	i8 v7895 = *(i8*)(intptr_t)v7894;
	i8 v7896 = v7895+(+48);
	i8 v7897 = *(i8*)(intptr_t)v7896;
	i8 v7898 = (i8)+0;
	if (v7897==v7898) goto c02_062e; else goto c02_062d;

c02_062d:;


	i8 v7965 = (i8)(intptr_t)(f437_ConvertNodeToFallback);

	((void(*)(void))(intptr_t)v7965)();

	i8 v7966 = (i8)(intptr_t)(f435_RewindRulePointers);

	((void(*)(void))(intptr_t)v7966)();

	goto c02_0621;

c02_062e:;

c02_0628:;

	i8 v7967 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v7967)();

	i8 v7968 = (i8)(intptr_t)c02_s0169;
	i8 v7969 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7969)(v7968);

	i1 v7970 = (i1)+0;
	i8 v7971 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7971 = v7970;

c02_063d:;

	i8 v7972 = (i8)(intptr_t)(ws+3096);
	i1 v7973 = *(i1*)(intptr_t)v7972;
	i1 v7974 = (i1)+3;
	if (v7973==v7974) goto c02_0640; else goto c02_063f;

c02_063f:;

	i8 v7975 = (i8)(intptr_t)(ws+3160);
	i8 v7976 = (i8)(intptr_t)(ws+3096);
	i1 v7977 = *(i1*)(intptr_t)v7976;
	i8 v7978 = v7977;
	i8 v7979 = v7975+v7978;
	i1 v7980 = *(i1*)(intptr_t)v7979;
	i8 v7981 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v7981)(v7980);

	i1 v7982 = (i1)+32;
	i8 v7983 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v7983)(v7982);

	i8 v7984 = (i8)(intptr_t)(ws+3096);
	i1 v7985 = *(i1*)(intptr_t)v7984;
	i1 v7986 = v7985+(+1);
	i8 v7987 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v7987 = v7986;

	goto c02_063d;

c02_0640:;

	i8 v7988 = (i8)(intptr_t)c02_s016a;
	i8 v7989 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7989)(v7988);

	i8 v7990 = (i8)(intptr_t)(ws+3136);
	i8 v7991 = *(i8*)(intptr_t)v7990;
	i8 v7992 = v7991+(+56);
	i1 v7993 = *(i1*)(intptr_t)v7992;
	i4 v7994 = v7993;
	i8 v7995 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v7995)(v7994);

	i8 v7996 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v7996)();

	goto c02_0623;

c02_0627:;

c02_0623:;

	i8 v7997 = (i8)(intptr_t)(f436_TestRule);
	i1 v7998;

	((void(*)(i1* /* result */))(intptr_t)v7997)(&v7998);
	i1 v7999 = (i1)+0;
	if (v7998==v7999) goto c02_0645; else goto c02_0644;

c02_0644:;

	goto c02_0622;

c02_0645:;

c02_0641:;

	i8 v8000 = (i8)(intptr_t)(ws+3152);
	i8 v8001 = *(i8*)(intptr_t)v8000;
	i8 v8002 = v8001+(+4);
	i1 v8003 = *(i1*)(intptr_t)v8002;
	i8 v8004 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v8004 = v8003;

c02_0648:;

	i8 v8005 = (i8)(intptr_t)(ws+3208);
	i1 v8006 = *(i1*)(intptr_t)v8005;
	i1 v8007 = (i1)+0;
	if (v8006==v8007) goto c02_064b; else goto c02_064a;

c02_064a:;

	i8 v8008 = (i8)(intptr_t)(ws+3208);
	i1 v8009 = *(i1*)(intptr_t)v8008;
	i1 v8010 = v8009&(+1);
	i1 v8011 = (i1)+0;
	if (v8010==v8011) goto c02_0650; else goto c02_064f;

c02_064f:;

	i8 v8012 = (i8)(intptr_t)(ws+3192);
	i8 v8013 = *(i8*)(intptr_t)v8012;
	i8 v8014 = v8013+(+1);
	i8 v8015 = (i8)(intptr_t)(ws+3192);
	*(i8*)(intptr_t)v8015 = v8014;

	goto c02_064c;

c02_0650:;

c02_064c:;

	i8 v8016 = (i8)(intptr_t)(ws+3208);
	i1 v8017 = *(i1*)(intptr_t)v8016;
	i1 v8018 = (i1)+1;
	i1 v8019 = ((i1)v8017)>>v8018;
	i8 v8020 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v8020 = v8019;

	goto c02_0648;

c02_064b:;

	i8 v8021 = (i8)(intptr_t)(ws+3152);
	i8 v8022 = *(i8*)(intptr_t)v8021;
	i8 v8023 = v8022+(+6);
	i1 v8024 = *(i1*)(intptr_t)v8023;
	i8 v8025 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v8025 = v8024;

c02_0653:;

	i8 v8026 = (i8)(intptr_t)(ws+3208);
	i1 v8027 = *(i1*)(intptr_t)v8026;
	i1 v8028 = (i1)+0;
	if (v8027==v8028) goto c02_0656; else goto c02_0655;

c02_0655:;

	i8 v8029 = (i8)(intptr_t)(ws+3208);
	i1 v8030 = *(i1*)(intptr_t)v8029;
	i1 v8031 = v8030&(+1);
	i1 v8032 = (i1)+0;
	if (v8031==v8032) goto c02_065b; else goto c02_065a;

c02_065a:;

	i8 v8033 = (i8)(intptr_t)(ws+3200);
	i8 v8034 = *(i8*)(intptr_t)v8033;
	i8 v8035 = v8034+(+1);
	i8 v8036 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v8036 = v8035;

	goto c02_0657;

c02_065b:;

c02_0657:;

	i8 v8037 = (i8)(intptr_t)(ws+3208);
	i1 v8038 = *(i1*)(intptr_t)v8037;
	i1 v8039 = (i1)+1;
	i1 v8040 = ((i1)v8038)>>v8039;
	i8 v8041 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v8041 = v8040;

	goto c02_0653;

c02_0656:;

	goto c02_0621;

c02_0622:;

	i8 v8042 = (i8)(intptr_t)(ws+3144);
	i1 v8043 = *(i1*)(intptr_t)v8042;
	i8 v8044 = (i8)(intptr_t)(ws+3128);
	i8 v8045 = *(i8*)(intptr_t)v8044;
	i8 v8046 = v8045+(+62);
	*(i1*)(intptr_t)v8046 = v8043;

	i8 v8047 = (i8)(intptr_t)(ws+3152);
	i8 v8048 = *(i8*)(intptr_t)v8047;
	i8 v8049 = v8048+(+2);
	i1 v8050 = *(i1*)(intptr_t)v8049;
	i8 v8051 = (i8)(intptr_t)(ws+3128);
	i8 v8052 = *(i8*)(intptr_t)v8051;
	i8 v8053 = v8052+(+40);
	*(i1*)(intptr_t)v8053 = v8050;

	i8 v8054 = (i8)(intptr_t)(ws+3152);
	i8 v8055 = *(i8*)(intptr_t)v8054;
	i8 v8056 = v8055+(+3);
	i1 v8057 = *(i1*)(intptr_t)v8056;
	i8 v8058 = (i8)(intptr_t)(ws+3128);
	i8 v8059 = *(i8*)(intptr_t)v8058;
	i8 v8060 = v8059+(+43);
	*(i1*)(intptr_t)v8060 = v8057;


	i8 v8141 = (i8)(intptr_t)(f438_CopyChildNodes);

	((void(*)(void))(intptr_t)v8141)();

endsub:;
}
	void f434_InstructionMatcher(void);
	void f426_IsStackedRegister(i1* /* result */, i1 /* regid */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f429_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f427_CalculateBlockedRegisters(i1* /* blocked */, i8 /* last */, i8 /* insn */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f428_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f216_FindCompatibleRegisters(i1* /* compatible */, i1 /* inreg */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f428_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f430_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f428_BlockRegisters(i1 /* blocked */, i8 /* last */, i8 /* insn */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f429_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f432_PrintNodes(i8 /* rootnode */);
const i1 c02_s016b[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s016c[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s016d[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x70,0x72,0x6f,0x64,0x75,0x63,0x61,0x62,0x6c,0x65,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s016e[] = { 0x70,0x72,0x6f,0x64,0x75,0x63,0x65,0x72,0x2e,0x6f,0x75,0x74,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s016f[] = { 0x6e,0x6f,0x64,0x65,0x2e,0x64,0x65,0x73,0x69,0x72,0x65,0x64,0x5f,0x72,0x65,0x67,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0170[] = { 0x63,0x6f,0x6e,0x73,0x75,0x6d,0x65,0x72,0x2e,0x69,0x6e,0x70,0x75,0x74,0x5f,0x72,0x65,0x67,0x73,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0171[] = { 0x72,0x65,0x67,0x69,0x73,0x74,0x65,0x72,0x20,0x61,0x6c,0x6c,0x6f,0x63,0x61,0x74,0x69,0x6f,0x6e,0x20,0x64,0x65,0x61,0x64,0x6c,0x6f,0x63,0x6b,0 };
	void f61_SimpleError(i8 /* message */);

// deadlock workspace at ws+3184 length ws+0
void f440_deadlock(void) {

	i8 v8502 = (i8)(intptr_t)(ws+3088);
	i8 v8503 = *(i8*)(intptr_t)v8502;
	i8 v8504 = (i8)(intptr_t)(f432_PrintNodes);

	((void(*)(i8 /* rootnode */))(intptr_t)v8504)(v8503);

	i8 v8505 = (i8)(intptr_t)c02_s016b;
	i8 v8506 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8506)(v8505);

	i8 v8507 = (i8)(intptr_t)(ws+3128);
	i8 v8508 = *(i8*)(intptr_t)v8507;
	i8 v8509 = v8508+(+16);
	i8 v8510 = *(i8*)(intptr_t)v8509;
	i4 v8511 = v8510;
	i8 v8512 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8512)(v8511);

	i8 v8513 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8513)();

	i8 v8514 = (i8)(intptr_t)c02_s016c;
	i8 v8515 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8515)(v8514);

	i8 v8516 = (i8)(intptr_t)(ws+3168);
	i8 v8517 = *(i8*)(intptr_t)v8516;
	i8 v8518 = v8517+(+16);
	i8 v8519 = *(i8*)(intptr_t)v8518;
	i4 v8520 = v8519;
	i8 v8521 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8521)(v8520);

	i8 v8522 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8522)();

	i8 v8523 = (i8)(intptr_t)c02_s016d;
	i8 v8524 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8524)(v8523);

	i8 v8525 = (i8)(intptr_t)(ws+3128);
	i8 v8526 = *(i8*)(intptr_t)v8525;
	i8 v8527 = v8526+(+40);
	i1 v8528 = *(i1*)(intptr_t)v8527;
	i4 v8529 = v8528;
	i8 v8530 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8530)(v8529);

	i8 v8531 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8531)();

	i8 v8532 = (i8)(intptr_t)c02_s016e;
	i8 v8533 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8533)(v8532);

	i8 v8534 = (i8)(intptr_t)(ws+3128);
	i8 v8535 = *(i8*)(intptr_t)v8534;
	i8 v8536 = v8535+(+43);
	i1 v8537 = *(i1*)(intptr_t)v8536;
	i4 v8538 = v8537;
	i8 v8539 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8539)(v8538);

	i8 v8540 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8540)();

	i8 v8541 = (i8)(intptr_t)c02_s016f;
	i8 v8542 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8542)(v8541);

	i8 v8543 = (i8)(intptr_t)(ws+3136);
	i8 v8544 = *(i8*)(intptr_t)v8543;
	i8 v8545 = v8544+(+56);
	i1 v8546 = *(i1*)(intptr_t)v8545;
	i4 v8547 = v8546;
	i8 v8548 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8548)(v8547);

	i8 v8549 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8549)();

	i8 v8550 = (i8)(intptr_t)c02_s0170;
	i8 v8551 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8551)(v8550);

	i8 v8552 = (i8)(intptr_t)(ws+3168);
	i8 v8553 = *(i8*)(intptr_t)v8552;
	i8 v8554 = v8553+(+42);
	i1 v8555 = *(i1*)(intptr_t)v8554;
	i4 v8556 = v8555;
	i8 v8557 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v8557)(v8556);

	i8 v8558 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v8558)();

	i8 v8559 = (i8)(intptr_t)c02_s0171;
	i8 v8560 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8560)(v8559);

endsub:;
}
	void f440_deadlock(void);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f429_CreateSpill(i1 /* dest */, i1 /* src */, i8 /* insn */);
	void f440_deadlock(void);
	void f217_FindFirst(i1* /* outreg */, i1 /* inreg */);
	void f215_FindConflictingRegisters(i1* /* conflicting */, i1 /* inreg */);
	void f430_CreateReload(i1 /* dest */, i1 /* src */, i8 /* insn */);

// AllocateRegister workspace at ws+3160 length ws+20
void f439_AllocateRegister(void) {

	i8 v8148 = (i8)(intptr_t)(ws+3128);
	i8 v8149 = *(i8*)(intptr_t)v8148;
	i8 v8150 = v8149+(+40);
	i1 v8151 = *(i1*)(intptr_t)v8150;
	i8 v8152 = (i8)(intptr_t)(f426_IsStackedRegister);
	i1 v8153;

	((void(*)(i1* /* result */, i1 /* regid */))(intptr_t)v8152)(&v8153, v8151);
	i1 v8154 = (i1)+0;
	if (v8153==v8154) goto c02_0675; else goto c02_0674;

c02_0674:;

	i8 v8155 = (i8)(intptr_t)(ws+3136);
	i8 v8156 = *(i8*)(intptr_t)v8155;
	i8 v8157 = v8156+(+56);
	i1 v8158 = *(i1*)(intptr_t)v8157;
	i8 v8159 = (i8)(intptr_t)(ws+3128);
	i8 v8160 = *(i8*)(intptr_t)v8159;
	i8 v8161 = v8160+(+40);
	i1 v8162 = *(i1*)(intptr_t)v8161;
	i1 v8163 = v8158&v8162;
	i8 v8164 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8164 = v8163;

	i8 v8165 = (i8)(intptr_t)(ws+3160);
	i1 v8166 = *(i1*)(intptr_t)v8165;
	i1 v8167 = (i1)+0;
	if (v8166==v8167) goto c02_067a; else goto c02_0679;

c02_0679:;

	i8 v8168 = (i8)(intptr_t)(ws+3160);
	i1 v8169 = *(i1*)(intptr_t)v8168;
	i8 v8170 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8171;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8170)(&v8171, v8169);
	i8 v8172 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8172 = v8171;

	i8 v8173 = (i8)(intptr_t)(ws+3160);
	i1 v8174 = *(i1*)(intptr_t)v8173;
	i8 v8175 = (i8)(intptr_t)(ws+3136);
	i8 v8176 = *(i8*)(intptr_t)v8175;
	i8 v8177 = v8176+(+57);
	*(i1*)(intptr_t)v8177 = v8174;

	i8 v8178 = (i8)(intptr_t)(ws+3160);
	i1 v8179 = *(i1*)(intptr_t)v8178;
	i8 v8180 = (i8)(intptr_t)(ws+3128);
	i8 v8181 = *(i8*)(intptr_t)v8180;
	i8 v8182 = v8181+(+41);
	*(i1*)(intptr_t)v8182 = v8179;

	goto c02_0676;

c02_067a:;

	i8 v8183 = (i8)(intptr_t)(ws+3128);
	i8 v8184 = *(i8*)(intptr_t)v8183;
	i8 v8185 = v8184+(+40);
	i1 v8186 = *(i1*)(intptr_t)v8185;
	i8 v8187 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8188;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8187)(&v8188, v8186);
	i8 v8189 = (i8)(intptr_t)(ws+3128);
	i8 v8190 = *(i8*)(intptr_t)v8189;
	i8 v8191 = v8190+(+41);
	*(i1*)(intptr_t)v8191 = v8188;

	i8 v8192 = (i8)(intptr_t)(ws+3136);
	i8 v8193 = *(i8*)(intptr_t)v8192;
	i8 v8194 = v8193+(+56);
	i1 v8195 = *(i1*)(intptr_t)v8194;
	i8 v8196 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8197;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8196)(&v8197, v8195);
	i8 v8198 = (i8)(intptr_t)(ws+3136);
	i8 v8199 = *(i8*)(intptr_t)v8198;
	i8 v8200 = v8199+(+57);
	*(i1*)(intptr_t)v8200 = v8197;

	i8 v8201 = (i8)(intptr_t)(ws+3128);
	i8 v8202 = *(i8*)(intptr_t)v8201;
	i8 v8203 = (i8)(intptr_t)(ws+3128);
	i8 v8204 = *(i8*)(intptr_t)v8203;
	i8 v8205 = v8204+(+41);
	i1 v8206 = *(i1*)(intptr_t)v8205;
	i8 v8207 = (i8)(intptr_t)(ws+3136);
	i8 v8208 = *(i8*)(intptr_t)v8207;
	i8 v8209 = v8208+(+57);
	i1 v8210 = *(i1*)(intptr_t)v8209;
	i8 v8211 = (i8)(intptr_t)(f429_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8211)(v8210, v8206, v8202);

c02_0676:;

	goto c02_0671;

c02_0675:;

	i8 v8212 = (i8)(intptr_t)(ws+3136);
	i8 v8213 = *(i8*)(intptr_t)v8212;
	i8 v8214 = v8213+(+48);
	i8 v8215 = *(i8*)(intptr_t)v8214;
	i8 v8216 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v8216 = v8215;

	i8 v8217 = (i8)(intptr_t)(ws+3168);
	i8 v8218 = *(i8*)(intptr_t)v8217;
	i8 v8219 = (i8)(intptr_t)(ws+3128);
	i8 v8220 = *(i8*)(intptr_t)v8219;
	i8 v8221 = (i8)(intptr_t)(f427_CalculateBlockedRegisters);
	i1 v8222;

	((void(*)(i1* /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8221)(&v8222, v8220, v8218);
	i8 v8223 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8223 = v8222;

	i8 v8224 = (i8)(intptr_t)(ws+3136);
	i8 v8225 = *(i8*)(intptr_t)v8224;
	i8 v8226 = v8225+(+56);
	i1 v8227 = *(i1*)(intptr_t)v8226;
	i8 v8228 = (i8)(intptr_t)(ws+3128);
	i8 v8229 = *(i8*)(intptr_t)v8228;
	i8 v8230 = v8229+(+40);
	i1 v8231 = *(i1*)(intptr_t)v8230;
	i1 v8232 = v8227&v8231;
	i8 v8233 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8233 = v8232;

	i8 v8234 = (i8)(intptr_t)(ws+3160);
	i1 v8235 = *(i1*)(intptr_t)v8234;
	i8 v8236 = (i8)(intptr_t)(ws+3176);
	i1 v8237 = *(i1*)(intptr_t)v8236;
	i8 v8238 = (i8)(intptr_t)(ws+3128);
	i8 v8239 = *(i8*)(intptr_t)v8238;
	i8 v8240 = v8239+(+43);
	i1 v8241 = *(i1*)(intptr_t)v8240;
	i1 v8242 = v8237|v8241;
	i8 v8243 = (i8)(intptr_t)(ws+3168);
	i8 v8244 = *(i8*)(intptr_t)v8243;
	i8 v8245 = v8244+(+42);
	i1 v8246 = *(i1*)(intptr_t)v8245;
	i1 v8247 = v8242|v8246;
	i1 v8248 = ~v8247;
	i1 v8249 = v8235&v8248;
	i8 v8250 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v8250 = v8249;

	i8 v8251 = (i8)(intptr_t)(ws+3177);
	i1 v8252 = *(i1*)(intptr_t)v8251;
	i1 v8253 = (i1)+0;
	if (v8252==v8253) goto c02_067f; else goto c02_067e;

c02_067e:;

	i8 v8254 = (i8)(intptr_t)(ws+3177);
	i1 v8255 = *(i1*)(intptr_t)v8254;
	i8 v8256 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8257;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8256)(&v8257, v8255);
	i8 v8258 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8258 = v8257;

	i8 v8259 = (i8)(intptr_t)(ws+3160);
	i1 v8260 = *(i1*)(intptr_t)v8259;
	i8 v8261 = (i8)(intptr_t)(ws+3136);
	i8 v8262 = *(i8*)(intptr_t)v8261;
	i8 v8263 = v8262+(+57);
	*(i1*)(intptr_t)v8263 = v8260;

	i8 v8264 = (i8)(intptr_t)(ws+3160);
	i1 v8265 = *(i1*)(intptr_t)v8264;
	i8 v8266 = (i8)(intptr_t)(ws+3128);
	i8 v8267 = *(i8*)(intptr_t)v8266;
	i8 v8268 = v8267+(+41);
	*(i1*)(intptr_t)v8268 = v8265;

	i8 v8269 = (i8)(intptr_t)(ws+3160);
	i1 v8270 = *(i1*)(intptr_t)v8269;
	i8 v8271 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8272;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8271)(&v8272, v8270);
	i8 v8273 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8273 = v8272;

	i8 v8274 = (i8)(intptr_t)(ws+3168);
	i8 v8275 = *(i8*)(intptr_t)v8274;
	i8 v8276 = v8275+(+42);
	i1 v8277 = *(i1*)(intptr_t)v8276;
	i8 v8278 = (i8)(intptr_t)(ws+3176);
	i1 v8279 = *(i1*)(intptr_t)v8278;
	i1 v8280 = v8277|v8279;
	i8 v8281 = (i8)(intptr_t)(ws+3168);
	i8 v8282 = *(i8*)(intptr_t)v8281;
	i8 v8283 = v8282+(+42);
	*(i1*)(intptr_t)v8283 = v8280;

	i8 v8284 = (i8)(intptr_t)(ws+3168);
	i8 v8285 = *(i8*)(intptr_t)v8284;
	i8 v8286 = (i8)(intptr_t)(ws+3128);
	i8 v8287 = *(i8*)(intptr_t)v8286;
	i8 v8288 = (i8)(intptr_t)(ws+3176);
	i1 v8289 = *(i1*)(intptr_t)v8288;
	i8 v8290 = (i8)(intptr_t)(f428_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8290)(v8289, v8287, v8285);

	i8 v8291 = (i8)(intptr_t)(ws+3128);
	i8 v8292 = *(i8*)(intptr_t)v8291;
	i8 v8293 = v8292+(+43);
	i1 v8294 = *(i1*)(intptr_t)v8293;
	i8 v8295 = (i8)(intptr_t)(ws+3176);
	i1 v8296 = *(i1*)(intptr_t)v8295;
	i1 v8297 = v8294|v8296;
	i8 v8298 = (i8)(intptr_t)(ws+3128);
	i8 v8299 = *(i8*)(intptr_t)v8298;
	i8 v8300 = v8299+(+43);
	*(i1*)(intptr_t)v8300 = v8297;

	goto c02_067b;

c02_067f:;

	i8 v8301 = (i8)(intptr_t)(ws+3136);
	i8 v8302 = *(i8*)(intptr_t)v8301;
	i8 v8303 = v8302+(+56);
	i1 v8304 = *(i1*)(intptr_t)v8303;
	i8 v8305 = (i8)(intptr_t)(f216_FindCompatibleRegisters);
	i1 v8306;

	((void(*)(i1* /* compatible */, i1 /* inreg */))(intptr_t)v8305)(&v8306, v8304);
	i8 v8307 = (i8)(intptr_t)(ws+3178);
	*(i1*)(intptr_t)v8307 = v8306;

	i8 v8308 = (i8)(intptr_t)(ws+3128);
	i8 v8309 = *(i8*)(intptr_t)v8308;
	i8 v8310 = v8309+(+40);
	i1 v8311 = *(i1*)(intptr_t)v8310;
	i8 v8312 = (i8)(intptr_t)(ws+3178);
	i1 v8313 = *(i1*)(intptr_t)v8312;
	i1 v8314 = v8311&v8313;
	i8 v8315 = (i8)(intptr_t)(ws+3176);
	i1 v8316 = *(i1*)(intptr_t)v8315;
	i8 v8317 = (i8)(intptr_t)(ws+3128);
	i8 v8318 = *(i8*)(intptr_t)v8317;
	i8 v8319 = v8318+(+43);
	i1 v8320 = *(i1*)(intptr_t)v8319;
	i1 v8321 = v8316|v8320;
	i1 v8322 = ~v8321;
	i1 v8323 = v8314&v8322;
	i8 v8324 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v8324 = v8323;

	i8 v8325 = (i8)(intptr_t)(ws+3136);
	i8 v8326 = *(i8*)(intptr_t)v8325;
	i8 v8327 = v8326+(+56);
	i1 v8328 = *(i1*)(intptr_t)v8327;
	i8 v8329 = (i8)(intptr_t)(ws+3168);
	i8 v8330 = *(i8*)(intptr_t)v8329;
	i8 v8331 = v8330+(+42);
	i1 v8332 = *(i1*)(intptr_t)v8331;
	i1 v8333 = ~v8332;
	i1 v8334 = v8328&v8333;
	i8 v8335 = (i8)(intptr_t)(ws+3179);
	*(i1*)(intptr_t)v8335 = v8334;

	i8 v8336 = (i8)(intptr_t)(ws+3177);
	i1 v8337 = *(i1*)(intptr_t)v8336;
	i1 v8338 = (i1)+0;
	if (v8337==v8338) goto c02_0686; else goto c02_0687;

c02_0687:;

	i8 v8339 = (i8)(intptr_t)(ws+3179);
	i1 v8340 = *(i1*)(intptr_t)v8339;
	i1 v8341 = (i1)+0;
	if (v8340==v8341) goto c02_0686; else goto c02_0685;

c02_0685:;

	i8 v8342 = (i8)(intptr_t)(ws+3177);
	i1 v8343 = *(i1*)(intptr_t)v8342;
	i8 v8344 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8345;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8344)(&v8345, v8343);
	i8 v8346 = (i8)(intptr_t)(ws+3128);
	i8 v8347 = *(i8*)(intptr_t)v8346;
	i8 v8348 = v8347+(+41);
	*(i1*)(intptr_t)v8348 = v8345;

	i8 v8349 = (i8)(intptr_t)(ws+3179);
	i1 v8350 = *(i1*)(intptr_t)v8349;
	i8 v8351 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8352;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8351)(&v8352, v8350);
	i8 v8353 = (i8)(intptr_t)(ws+3136);
	i8 v8354 = *(i8*)(intptr_t)v8353;
	i8 v8355 = v8354+(+57);
	*(i1*)(intptr_t)v8355 = v8352;

	i8 v8356 = (i8)(intptr_t)(ws+3168);
	i8 v8357 = *(i8*)(intptr_t)v8356;
	i8 v8358 = v8357+(+42);
	i1 v8359 = *(i1*)(intptr_t)v8358;
	i8 v8360 = (i8)(intptr_t)(ws+3136);
	i8 v8361 = *(i8*)(intptr_t)v8360;
	i8 v8362 = v8361+(+57);
	i1 v8363 = *(i1*)(intptr_t)v8362;
	i8 v8364 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8365;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8364)(&v8365, v8363);
	i1 v8366 = v8359|v8365;
	i8 v8367 = (i8)(intptr_t)(ws+3168);
	i8 v8368 = *(i8*)(intptr_t)v8367;
	i8 v8369 = v8368+(+42);
	*(i1*)(intptr_t)v8369 = v8366;

	i8 v8370 = (i8)(intptr_t)(ws+3128);
	i8 v8371 = *(i8*)(intptr_t)v8370;
	i8 v8372 = v8371+(+41);
	i1 v8373 = *(i1*)(intptr_t)v8372;
	i8 v8374 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8375;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8374)(&v8375, v8373);
	i8 v8376 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8376 = v8375;

	i8 v8377 = (i8)(intptr_t)(ws+3168);
	i8 v8378 = *(i8*)(intptr_t)v8377;
	i8 v8379 = (i8)(intptr_t)(ws+3128);
	i8 v8380 = *(i8*)(intptr_t)v8379;
	i8 v8381 = (i8)(intptr_t)(ws+3176);
	i1 v8382 = *(i1*)(intptr_t)v8381;
	i8 v8383 = (i8)(intptr_t)(f428_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8383)(v8382, v8380, v8378);

	i8 v8384 = (i8)(intptr_t)(ws+3128);
	i8 v8385 = *(i8*)(intptr_t)v8384;
	i8 v8386 = v8385+(+43);
	i1 v8387 = *(i1*)(intptr_t)v8386;
	i8 v8388 = (i8)(intptr_t)(ws+3176);
	i1 v8389 = *(i1*)(intptr_t)v8388;
	i1 v8390 = v8387|v8389;
	i8 v8391 = (i8)(intptr_t)(ws+3128);
	i8 v8392 = *(i8*)(intptr_t)v8391;
	i8 v8393 = v8392+(+43);
	*(i1*)(intptr_t)v8393 = v8390;

	i8 v8394 = (i8)(intptr_t)(ws+3168);
	i8 v8395 = *(i8*)(intptr_t)v8394;
	i8 v8396 = (i8)(intptr_t)(ws+3128);
	i8 v8397 = *(i8*)(intptr_t)v8396;
	i8 v8398 = v8397+(+41);
	i1 v8399 = *(i1*)(intptr_t)v8398;
	i8 v8400 = (i8)(intptr_t)(ws+3136);
	i8 v8401 = *(i8*)(intptr_t)v8400;
	i8 v8402 = v8401+(+57);
	i1 v8403 = *(i1*)(intptr_t)v8402;
	i8 v8404 = (i8)(intptr_t)(f430_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8404)(v8403, v8399, v8395);

	goto c02_0680;

c02_0686:;

	i8 v8405 = (i8)(intptr_t)(ws+3136);
	i8 v8406 = *(i8*)(intptr_t)v8405;
	i8 v8407 = v8406+(+56);
	i1 v8408 = *(i1*)(intptr_t)v8407;
	i8 v8409 = (i8)(intptr_t)(ws+3176);
	i1 v8410 = *(i1*)(intptr_t)v8409;
	i8 v8411 = (i8)(intptr_t)(ws+3168);
	i8 v8412 = *(i8*)(intptr_t)v8411;
	i8 v8413 = v8412+(+42);
	i1 v8414 = *(i1*)(intptr_t)v8413;
	i1 v8415 = v8410|v8414;
	i1 v8416 = ~v8415;
	i1 v8417 = v8408&v8416;
	i8 v8418 = (i8)(intptr_t)(ws+3177);
	*(i1*)(intptr_t)v8418 = v8417;

	i8 v8419 = (i8)(intptr_t)(ws+3128);
	i8 v8420 = *(i8*)(intptr_t)v8419;
	i8 v8421 = v8420+(+40);
	i1 v8422 = *(i1*)(intptr_t)v8421;
	i8 v8423 = (i8)(intptr_t)(ws+3178);
	i1 v8424 = *(i1*)(intptr_t)v8423;
	i1 v8425 = v8422&v8424;
	i8 v8426 = (i8)(intptr_t)(ws+3128);
	i8 v8427 = *(i8*)(intptr_t)v8426;
	i8 v8428 = v8427+(+43);
	i1 v8429 = *(i1*)(intptr_t)v8428;
	i1 v8430 = ~v8429;
	i1 v8431 = v8425&v8430;
	i8 v8432 = (i8)(intptr_t)(ws+3179);
	*(i1*)(intptr_t)v8432 = v8431;

	i8 v8433 = (i8)(intptr_t)(ws+3177);
	i1 v8434 = *(i1*)(intptr_t)v8433;
	i1 v8435 = (i1)+0;
	if (v8434==v8435) goto c02_068e; else goto c02_068f;

c02_068f:;

	i8 v8436 = (i8)(intptr_t)(ws+3179);
	i1 v8437 = *(i1*)(intptr_t)v8436;
	i1 v8438 = (i1)+0;
	if (v8437==v8438) goto c02_068e; else goto c02_068d;

c02_068d:;

	i8 v8439 = (i8)(intptr_t)(ws+3179);
	i1 v8440 = *(i1*)(intptr_t)v8439;
	i8 v8441 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8442;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8441)(&v8442, v8440);
	i8 v8443 = (i8)(intptr_t)(ws+3128);
	i8 v8444 = *(i8*)(intptr_t)v8443;
	i8 v8445 = v8444+(+41);
	*(i1*)(intptr_t)v8445 = v8442;

	i8 v8446 = (i8)(intptr_t)(ws+3177);
	i1 v8447 = *(i1*)(intptr_t)v8446;
	i8 v8448 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8449;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8448)(&v8449, v8447);
	i8 v8450 = (i8)(intptr_t)(ws+3136);
	i8 v8451 = *(i8*)(intptr_t)v8450;
	i8 v8452 = v8451+(+57);
	*(i1*)(intptr_t)v8452 = v8449;

	i8 v8453 = (i8)(intptr_t)(ws+3136);
	i8 v8454 = *(i8*)(intptr_t)v8453;
	i8 v8455 = v8454+(+57);
	i1 v8456 = *(i1*)(intptr_t)v8455;
	i8 v8457 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8458;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8457)(&v8458, v8456);
	i8 v8459 = (i8)(intptr_t)(ws+3176);
	*(i1*)(intptr_t)v8459 = v8458;

	i8 v8460 = (i8)(intptr_t)(ws+3168);
	i8 v8461 = *(i8*)(intptr_t)v8460;
	i8 v8462 = v8461+(+42);
	i1 v8463 = *(i1*)(intptr_t)v8462;
	i8 v8464 = (i8)(intptr_t)(ws+3176);
	i1 v8465 = *(i1*)(intptr_t)v8464;
	i1 v8466 = v8463|v8465;
	i8 v8467 = (i8)(intptr_t)(ws+3168);
	i8 v8468 = *(i8*)(intptr_t)v8467;
	i8 v8469 = v8468+(+42);
	*(i1*)(intptr_t)v8469 = v8466;

	i8 v8470 = (i8)(intptr_t)(ws+3168);
	i8 v8471 = *(i8*)(intptr_t)v8470;
	i8 v8472 = (i8)(intptr_t)(ws+3128);
	i8 v8473 = *(i8*)(intptr_t)v8472;
	i8 v8474 = (i8)(intptr_t)(ws+3176);
	i1 v8475 = *(i1*)(intptr_t)v8474;
	i8 v8476 = (i8)(intptr_t)(f428_BlockRegisters);

	((void(*)(i1 /* blocked */, i8 /* last */, i8 /* insn */))(intptr_t)v8476)(v8475, v8473, v8471);

	i8 v8477 = (i8)(intptr_t)(ws+3128);
	i8 v8478 = *(i8*)(intptr_t)v8477;
	i8 v8479 = v8478+(+43);
	i1 v8480 = *(i1*)(intptr_t)v8479;
	i8 v8481 = (i8)(intptr_t)(ws+3128);
	i8 v8482 = *(i8*)(intptr_t)v8481;
	i8 v8483 = v8482+(+41);
	i1 v8484 = *(i1*)(intptr_t)v8483;
	i8 v8485 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8486;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8485)(&v8486, v8484);
	i1 v8487 = v8480|v8486;
	i8 v8488 = (i8)(intptr_t)(ws+3128);
	i8 v8489 = *(i8*)(intptr_t)v8488;
	i8 v8490 = v8489+(+43);
	*(i1*)(intptr_t)v8490 = v8487;

	i8 v8491 = (i8)(intptr_t)(ws+3128);
	i8 v8492 = *(i8*)(intptr_t)v8491;
	i8 v8493 = (i8)(intptr_t)(ws+3128);
	i8 v8494 = *(i8*)(intptr_t)v8493;
	i8 v8495 = v8494+(+41);
	i1 v8496 = *(i1*)(intptr_t)v8495;
	i8 v8497 = (i8)(intptr_t)(ws+3136);
	i8 v8498 = *(i8*)(intptr_t)v8497;
	i8 v8499 = v8498+(+57);
	i1 v8500 = *(i1*)(intptr_t)v8499;
	i8 v8501 = (i8)(intptr_t)(f429_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8501)(v8500, v8496, v8492);

	goto c02_0688;

c02_068e:;


	i8 v8561 = (i8)(intptr_t)(ws+3128);
	i8 v8562 = *(i8*)(intptr_t)v8561;
	i8 v8563 = v8562+(+40);
	i1 v8564 = *(i1*)(intptr_t)v8563;
	i8 v8565 = (i8)(intptr_t)(ws+3178);
	i1 v8566 = *(i1*)(intptr_t)v8565;
	i1 v8567 = v8564&v8566;
	i8 v8568 = (i8)(intptr_t)(ws+3128);
	i8 v8569 = *(i8*)(intptr_t)v8568;
	i8 v8570 = v8569+(+43);
	i1 v8571 = *(i1*)(intptr_t)v8570;
	i1 v8572 = ~v8571;
	i1 v8573 = v8567&v8572;
	i8 v8574 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8574 = v8573;

	i8 v8575 = (i8)(intptr_t)(ws+3160);
	i1 v8576 = *(i1*)(intptr_t)v8575;
	i1 v8577 = (i1)+0;
	if (v8576==v8577) goto c02_0693; else goto c02_0694;

c02_0693:;

	i8 v8578 = (i8)(intptr_t)(f440_deadlock);

	((void(*)(void))(intptr_t)v8578)();

	goto c02_0690;

c02_0694:;

c02_0690:;

	i8 v8579 = (i8)(intptr_t)(ws+3160);
	i1 v8580 = *(i1*)(intptr_t)v8579;
	i8 v8581 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8582;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8581)(&v8582, v8580);
	i8 v8583 = (i8)(intptr_t)(ws+3128);
	i8 v8584 = *(i8*)(intptr_t)v8583;
	i8 v8585 = v8584+(+41);
	*(i1*)(intptr_t)v8585 = v8582;

	i8 v8586 = (i8)(intptr_t)(ws+3128);
	i8 v8587 = *(i8*)(intptr_t)v8586;
	i8 v8588 = v8587+(+43);
	i1 v8589 = *(i1*)(intptr_t)v8588;
	i8 v8590 = (i8)(intptr_t)(ws+3128);
	i8 v8591 = *(i8*)(intptr_t)v8590;
	i8 v8592 = v8591+(+41);
	i1 v8593 = *(i1*)(intptr_t)v8592;
	i8 v8594 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8595;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8594)(&v8595, v8593);
	i1 v8596 = v8589|v8595;
	i8 v8597 = (i8)(intptr_t)(ws+3128);
	i8 v8598 = *(i8*)(intptr_t)v8597;
	i8 v8599 = v8598+(+43);
	*(i1*)(intptr_t)v8599 = v8596;

	i8 v8600 = (i8)(intptr_t)(ws+3128);
	i8 v8601 = *(i8*)(intptr_t)v8600;
	i8 v8602 = (i8)(intptr_t)(ws+3128);
	i8 v8603 = *(i8*)(intptr_t)v8602;
	i8 v8604 = v8603+(+41);
	i1 v8605 = *(i1*)(intptr_t)v8604;
	i1 v8606 = (i1)+0;
	i8 v8607 = (i8)(intptr_t)(f429_CreateSpill);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8607)(v8606, v8605, v8601);

	i8 v8608 = (i8)(intptr_t)(ws+3136);
	i8 v8609 = *(i8*)(intptr_t)v8608;
	i8 v8610 = v8609+(+56);
	i1 v8611 = *(i1*)(intptr_t)v8610;
	i8 v8612 = (i8)(intptr_t)(ws+3168);
	i8 v8613 = *(i8*)(intptr_t)v8612;
	i8 v8614 = v8613+(+42);
	i1 v8615 = *(i1*)(intptr_t)v8614;
	i1 v8616 = ~v8615;
	i1 v8617 = v8611&v8616;
	i8 v8618 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8618 = v8617;

	i8 v8619 = (i8)(intptr_t)(ws+3160);
	i1 v8620 = *(i1*)(intptr_t)v8619;
	i1 v8621 = (i1)+0;
	if (v8620==v8621) goto c02_0698; else goto c02_0699;

c02_0698:;

	i8 v8622 = (i8)(intptr_t)(f440_deadlock);

	((void(*)(void))(intptr_t)v8622)();

	goto c02_0695;

c02_0699:;

c02_0695:;

	i8 v8623 = (i8)(intptr_t)(ws+3160);
	i1 v8624 = *(i1*)(intptr_t)v8623;
	i8 v8625 = (i8)(intptr_t)(f217_FindFirst);
	i1 v8626;

	((void(*)(i1* /* outreg */, i1 /* inreg */))(intptr_t)v8625)(&v8626, v8624);
	i8 v8627 = (i8)(intptr_t)(ws+3136);
	i8 v8628 = *(i8*)(intptr_t)v8627;
	i8 v8629 = v8628+(+57);
	*(i1*)(intptr_t)v8629 = v8626;

	i8 v8630 = (i8)(intptr_t)(ws+3168);
	i8 v8631 = *(i8*)(intptr_t)v8630;
	i8 v8632 = v8631+(+42);
	i1 v8633 = *(i1*)(intptr_t)v8632;
	i8 v8634 = (i8)(intptr_t)(ws+3136);
	i8 v8635 = *(i8*)(intptr_t)v8634;
	i8 v8636 = v8635+(+57);
	i1 v8637 = *(i1*)(intptr_t)v8636;
	i8 v8638 = (i8)(intptr_t)(f215_FindConflictingRegisters);
	i1 v8639;

	((void(*)(i1* /* conflicting */, i1 /* inreg */))(intptr_t)v8638)(&v8639, v8637);
	i1 v8640 = v8633|v8639;
	i8 v8641 = (i8)(intptr_t)(ws+3168);
	i8 v8642 = *(i8*)(intptr_t)v8641;
	i8 v8643 = v8642+(+42);
	*(i1*)(intptr_t)v8643 = v8640;

	i8 v8644 = (i8)(intptr_t)(ws+3168);
	i8 v8645 = *(i8*)(intptr_t)v8644;
	i1 v8646 = (i1)+0;
	i8 v8647 = (i8)(intptr_t)(ws+3136);
	i8 v8648 = *(i8*)(intptr_t)v8647;
	i8 v8649 = v8648+(+57);
	i1 v8650 = *(i1*)(intptr_t)v8649;
	i8 v8651 = (i8)(intptr_t)(f430_CreateReload);

	((void(*)(i1 /* dest */, i1 /* src */, i8 /* insn */))(intptr_t)v8651)(v8650, v8646, v8645);

c02_0688:;

c02_0680:;

c02_067b:;

c02_0671:;

endsub:;
}
	void f439_AllocateRegister(void);

// UpdateProducedRegisters workspace at ws+3160 length ws+1
void f441_UpdateProducedRegisters(void) {

	i1 v8653 = (i1)+0;
	i8 v8654 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8654 = v8653;

c02_069c:;

	i8 v8655 = (i8)(intptr_t)(ws+3096);
	i1 v8656 = *(i1*)(intptr_t)v8655;
	i1 v8657 = (i1)+3;
	if (v8656==v8657) goto c02_069f; else goto c02_069e;

c02_069e:;

	i8 v8658 = (i8)(intptr_t)(ws+3128);
	i8 v8659 = *(i8*)(intptr_t)v8658;
	i8 v8660 = v8659+(+16);
	i8 v8661 = (i8)(intptr_t)(ws+3096);
	i1 v8662 = *(i1*)(intptr_t)v8661;
	i8 v8663 = v8662;
	i1 v8664 = (i1)+3;
	i8 v8665 = ((i8)v8663)<<v8664;
	i8 v8666 = v8660+v8665;
	i8 v8667 = *(i8*)(intptr_t)v8666;
	i8 v8668 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v8668 = v8667;

	i8 v8669 = (i8)(intptr_t)(ws+3136);
	i8 v8670 = *(i8*)(intptr_t)v8669;
	i8 v8671 = (i8)+0;
	if (v8670==v8671) goto c02_06a6; else goto c02_06a7;

c02_06a7:;

	i8 v8672 = (i8)(intptr_t)(ws+3136);
	i8 v8673 = *(i8*)(intptr_t)v8672;
	i8 v8674 = v8673+(+56);
	i1 v8675 = *(i1*)(intptr_t)v8674;
	i1 v8676 = (i1)-1;
	if (v8675==v8676) goto c02_06a5; else goto c02_06a6;

c02_06a5:;

	i8 v8677 = (i8)(intptr_t)(ws+3128);
	i8 v8678 = *(i8*)(intptr_t)v8677;
	i8 v8679 = v8678+(+41);
	i1 v8680 = *(i1*)(intptr_t)v8679;
	i8 v8681 = (i8)(intptr_t)(ws+3136);
	i8 v8682 = *(i8*)(intptr_t)v8681;
	i8 v8683 = v8682+(+56);
	*(i1*)(intptr_t)v8683 = v8680;

	i1 v8684 = (i1)+0;
	i8 v8685 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8685 = v8684;

c02_06aa:;

	i8 v8686 = (i8)(intptr_t)(ws+3160);
	i1 v8687 = *(i1*)(intptr_t)v8686;
	i1 v8688 = (i1)+3;
	if (v8687==v8688) goto c02_06ad; else goto c02_06ac;

c02_06ac:;

	i8 v8689 = (i8)(intptr_t)(ws+3096);
	i1 v8690 = *(i1*)(intptr_t)v8689;
	i8 v8691 = (i8)(intptr_t)(ws+3160);
	i1 v8692 = *(i1*)(intptr_t)v8691;
	if (v8690==v8692) goto c02_06b2; else goto c02_06b1;

c02_06b1:;

	i8 v8693 = (i8)(intptr_t)(ws+3128);
	i8 v8694 = *(i8*)(intptr_t)v8693;
	i8 v8695 = v8694+(+16);
	i8 v8696 = (i8)(intptr_t)(ws+3160);
	i1 v8697 = *(i1*)(intptr_t)v8696;
	i8 v8698 = v8697;
	i1 v8699 = (i1)+3;
	i8 v8700 = ((i8)v8698)<<v8699;
	i8 v8701 = v8695+v8700;
	i8 v8702 = *(i8*)(intptr_t)v8701;
	i8 v8703 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v8703 = v8702;

	i8 v8704 = (i8)(intptr_t)(ws+3136);
	i8 v8705 = *(i8*)(intptr_t)v8704;
	i8 v8706 = (i8)+0;
	if (v8705==v8706) goto c02_06b7; else goto c02_06b6;

c02_06b6:;

	i8 v8707 = (i8)(intptr_t)(ws+3136);
	i8 v8708 = *(i8*)(intptr_t)v8707;
	i8 v8709 = v8708+(+56);
	i1 v8710 = *(i1*)(intptr_t)v8709;
	i8 v8711 = (i8)(intptr_t)(ws+3128);
	i8 v8712 = *(i8*)(intptr_t)v8711;
	i8 v8713 = v8712+(+41);
	i1 v8714 = *(i1*)(intptr_t)v8713;
	i1 v8715 = ~v8714;
	i1 v8716 = v8710&v8715;
	i8 v8717 = (i8)(intptr_t)(ws+3136);
	i8 v8718 = *(i8*)(intptr_t)v8717;
	i8 v8719 = v8718+(+56);
	*(i1*)(intptr_t)v8719 = v8716;

	goto c02_06b3;

c02_06b7:;

c02_06b3:;

	goto c02_06ae;

c02_06b2:;

c02_06ae:;

	i8 v8720 = (i8)(intptr_t)(ws+3160);
	i1 v8721 = *(i1*)(intptr_t)v8720;
	i1 v8722 = v8721+(+1);
	i8 v8723 = (i8)(intptr_t)(ws+3160);
	*(i1*)(intptr_t)v8723 = v8722;

	goto c02_06aa;

c02_06ad:;

	goto c02_06a0;

c02_06a6:;

c02_06a0:;

	i8 v8724 = (i8)(intptr_t)(ws+3096);
	i1 v8725 = *(i1*)(intptr_t)v8724;
	i1 v8726 = v8725+(+1);
	i8 v8727 = (i8)(intptr_t)(ws+3096);
	*(i1*)(intptr_t)v8727 = v8726;

	goto c02_069c;

c02_069f:;

endsub:;
}
	void f441_UpdateProducedRegisters(void);
	void f431_ShuffleRegisters(i8 /* moves */);
	void f254_EmitOneInstruction(i8 /* self */, i1 /* rule */);
	void f431_ShuffleRegisters(i8 /* moves */);
	void f226_ArchEndInstruction(void);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// EmitAndFreeInstructions workspace at ws+3160 length ws+8
void f442_EmitAndFreeInstructions(void) {

c02_06b8:;

	i8 v8729 = (i8)(intptr_t)(ws+3112);
	i8 v8730 = *(i8*)(intptr_t)v8729;
	i8 v8731 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v8731 = v8730;

	i8 v8732 = (i8)(intptr_t)(ws+3160);
	i8 v8733 = *(i8*)(intptr_t)v8732;
	i8 v8734 = (i8)+0;
	if (v8733==v8734) goto c02_06bd; else goto c02_06be;

c02_06bd:;

	goto c02_06b9;

c02_06be:;

c02_06ba:;

	i8 v8735 = (i8)(intptr_t)(ws+3112);
	i8 v8736 = *(i8*)(intptr_t)v8735;
	i8 v8737 = v8736+(+8);
	i8 v8738 = *(i8*)(intptr_t)v8737;
	i8 v8739 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v8739 = v8738;

	i8 v8740 = (i8)(intptr_t)(ws+3160);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = v8741+(+52);
	i8 v8743 = (i8)(intptr_t)(f431_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v8743)(v8742);

	i8 v8744 = (i8)(intptr_t)(ws+3160);
	i8 v8745 = *(i8*)(intptr_t)v8744;
	i8 v8746 = v8745+(+62);
	i1 v8747 = *(i1*)(intptr_t)v8746;
	i8 v8748 = (i8)(intptr_t)(ws+3160);
	i8 v8749 = *(i8*)(intptr_t)v8748;
	i8 v8750 = (i8)(intptr_t)(f254_EmitOneInstruction);

	((void(*)(i8 /* self */, i1 /* rule */))(intptr_t)v8750)(v8749, v8747);

	i8 v8751 = (i8)(intptr_t)(ws+3160);
	i8 v8752 = *(i8*)(intptr_t)v8751;
	i8 v8753 = v8752+(+44);
	i8 v8754 = (i8)(intptr_t)(f431_ShuffleRegisters);

	((void(*)(i8 /* moves */))(intptr_t)v8754)(v8753);

	i8 v8755 = (i8)(intptr_t)(f226_ArchEndInstruction);

	((void(*)(void))(intptr_t)v8755)();

	i8 v8756 = (i8)(intptr_t)(ws+3160);
	i8 v8757 = *(i8*)(intptr_t)v8756;
	i8 v8758 = v8757+(+16);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	i8 v8760 = v8759+(+58);
	i1 v8761 = *(i1*)(intptr_t)v8760;
	i1 v8762 = (i1)+21;
	if (v8761==v8762) goto c02_06c2; else goto c02_06c3;

c02_06c2:;

	i8 v8763 = (i8)(intptr_t)(ws+3160);
	i8 v8764 = *(i8*)(intptr_t)v8763;
	i8 v8765 = v8764+(+16);
	i8 v8766 = *(i8*)(intptr_t)v8765;
	i8 v8767 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v8767)(v8766);

	goto c02_06bf;

c02_06c3:;

c02_06bf:;

	i8 v8768 = (i8)(intptr_t)(ws+3160);
	i8 v8769 = *(i8*)(intptr_t)v8768;
	i8 v8770 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v8770)(v8769);

	goto c02_06b8;

c02_06b9:;

endsub:;
}
	void f442_EmitAndFreeInstructions(void);
	void f227_ArchEndGroup(void);
	void f56_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3088 length ws+72
void f433_ReallyGenerate(i8 p7734 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3088) = p7734; /*rootnode */

	i8 v7735 = (i8)+0;
	i8 v7736 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v7736 = v7735;

	i8 v7737 = (i8)+0;
	i8 v7738 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7738 = v7737;

	i8 v7739 = (i8)(intptr_t)(ws+216);
	i8 v7740 = *(i8*)(intptr_t)v7739;
	i8 v7741 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v7741 = v7740;

	i8 v7742 = (i8)(intptr_t)(ws+3088);
	i8 v7743 = *(i8*)(intptr_t)v7742;
	i8 v7744 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v7744)(v7743);

c02_05f1:;

	i8 v7745 = (i8)(intptr_t)(ws+216);
	i8 v7746 = *(i8*)(intptr_t)v7745;
	i8 v7747 = (i8)(intptr_t)(ws+3120);
	i8 v7748 = *(i8*)(intptr_t)v7747;
	if (v7746==v7748) goto c02_05f4; else goto c02_05f3;

c02_05f3:;

	i8 v7749 = (i8)+63;
	i8 v7750 = (i8)(intptr_t)(f31_Alloc);
	i8 v7751;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7750)(&v7751, v7749);
	i8 v7752 = (i8)(intptr_t)(ws+3128);
	*(i8*)(intptr_t)v7752 = v7751;

	i8 v7753 = (i8)(intptr_t)(ws+3104);
	i8 v7754 = *(i8*)(intptr_t)v7753;
	i8 v7755 = (i8)+0;
	if (v7754==v7755) goto c02_05f8; else goto c02_05f9;

c02_05f8:;

	i8 v7756 = (i8)(intptr_t)(ws+3128);
	i8 v7757 = *(i8*)(intptr_t)v7756;
	i8 v7758 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v7758 = v7757;

	i8 v7759 = (i8)(intptr_t)(ws+3128);
	i8 v7760 = *(i8*)(intptr_t)v7759;
	i8 v7761 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7761 = v7760;

	goto c02_05f5;

c02_05f9:;

	i8 v7762 = (i8)(intptr_t)(ws+3128);
	i8 v7763 = *(i8*)(intptr_t)v7762;
	i8 v7764 = (i8)(intptr_t)(ws+3112);
	i8 v7765 = *(i8*)(intptr_t)v7764;
	*(i8*)(intptr_t)v7765 = v7763;

	i8 v7766 = (i8)(intptr_t)(ws+3112);
	i8 v7767 = *(i8*)(intptr_t)v7766;
	i8 v7768 = (i8)(intptr_t)(ws+3128);
	i8 v7769 = *(i8*)(intptr_t)v7768;
	i8 v7770 = v7769+(+8);
	*(i8*)(intptr_t)v7770 = v7767;

	i8 v7771 = (i8)(intptr_t)(ws+3128);
	i8 v7772 = *(i8*)(intptr_t)v7771;
	i8 v7773 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v7773 = v7772;

c02_05f5:;

	i8 v7774 = (i8)(intptr_t)(f54_PopNode);
	i8 v7775;

	((void(*)(i8* /* node */))(intptr_t)v7774)(&v7775);
	i8 v7776 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v7776 = v7775;


	i8 v8142 = (i8)(intptr_t)(f434_InstructionMatcher);

	((void(*)(void))(intptr_t)v8142)();

	i8 v8143 = (i8)(intptr_t)(ws+3128);
	i8 v8144 = *(i8*)(intptr_t)v8143;
	i8 v8145 = v8144+(+40);
	i1 v8146 = *(i1*)(intptr_t)v8145;
	i1 v8147 = (i1)+0;
	if (v8146==v8147) goto c02_0670; else goto c02_066f;

c02_066f:;


	i8 v8652 = (i8)(intptr_t)(f439_AllocateRegister);

	((void(*)(void))(intptr_t)v8652)();


	i8 v8728 = (i8)(intptr_t)(f441_UpdateProducedRegisters);

	((void(*)(void))(intptr_t)v8728)();

	goto c02_066c;

c02_0670:;

c02_066c:;

	goto c02_05f1;

c02_05f4:;


	i8 v8771 = (i8)(intptr_t)(f442_EmitAndFreeInstructions);

	((void(*)(void))(intptr_t)v8771)();

	i8 v8772 = (i8)(intptr_t)(f227_ArchEndGroup);

	((void(*)(void))(intptr_t)v8772)();

	i8 v8773 = (i8)(intptr_t)(ws+3088);
	i8 v8774 = *(i8*)(intptr_t)v8773;
	i8 v8775 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8775)(v8774);

endsub:;
}
	void f56_Discard(i8 /* node */);
	void f127_MidAsmgroupstart(i8* /* m */);
	void f433_ReallyGenerate(i8 /* rootnode */);
	void f145_MidAsmgroupend(i8* /* m */);
	void f433_ReallyGenerate(i8 /* rootnode */);
	void f433_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3072 length ws+9
void f443_Generate(i8 p8778 /* statement */) {
	*(i8*)(intptr_t)(ws+3072) = p8778; /*statement */

	i8 v8779 = (i8)(intptr_t)(ws+3072);
	i8 v8780 = *(i8*)(intptr_t)v8779;
	i8 v8781 = v8780+(+58);
	i1 v8782 = *(i1*)(intptr_t)v8781;
	i8 v8783 = (i8)(intptr_t)(ws+3080);
	*(i1*)(intptr_t)v8783 = v8782;

	i8 v8784 = (i8)(intptr_t)(ws+1219);
	i1 v8785 = *(i1*)(intptr_t)v8784;
	i1 v8786 = (i1)+24;
	if (v8785==v8786) goto c02_06c9; else goto c02_06cb;

c02_06cb:;

	i8 v8787 = (i8)(intptr_t)(ws+1219);
	i1 v8788 = *(i1*)(intptr_t)v8787;
	i1 v8789 = (i1)+25;
	if (v8788==v8789) goto c02_06c9; else goto c02_06ca;

c02_06c9:;

	i8 v8790 = (i8)(intptr_t)(ws+3080);
	i1 v8791 = *(i1*)(intptr_t)v8790;
	i1 v8792 = (i1)+23;
	if (v8791==v8792) goto c02_06d2; else goto c02_06d3;

c02_06d3:;

	i8 v8793 = (i8)(intptr_t)(ws+3080);
	i1 v8794 = *(i1*)(intptr_t)v8793;
	i1 v8795 = (i1)+5;
	if (v8794==v8795) goto c02_06d2; else goto c02_06d1;

c02_06d1:;

	i8 v8796 = (i8)(intptr_t)(ws+3072);
	i8 v8797 = *(i8*)(intptr_t)v8796;
	i8 v8798 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8798)(v8797);

	goto endsub;

c02_06d2:;

c02_06cc:;

	goto c02_06c4;

c02_06ca:;

c02_06c4:;

	i8 v8799 = (i8)(intptr_t)(ws+3080);
	i1 v8800 = *(i1*)(intptr_t)v8799;
	i1 v8801 = (i1)+16;
	if (v8800==v8801) goto c02_06db; else goto c02_06da;

c02_06db:;

	i8 v8802 = (i8)(intptr_t)(ws+1219);
	i1 v8803 = *(i1*)(intptr_t)v8802;
	i1 v8804 = (i1)+20;
	if (v8803==v8804) goto c02_06da; else goto c02_06d9;

c02_06d9:;

	i8 v8805 = (i8)(intptr_t)(f127_MidAsmgroupstart);
	i8 v8806;

	((void(*)(i8* /* m */))(intptr_t)v8805)(&v8806);
	i8 v8807 = (i8)(intptr_t)(f433_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8807)(v8806);

	goto c02_06d4;

c02_06da:;

c02_06d4:;

	i8 v8808 = (i8)(intptr_t)(ws+1219);
	i1 v8809 = *(i1*)(intptr_t)v8808;
	i1 v8810 = (i1)+20;
	if (v8809==v8810) goto c02_06e3; else goto c02_06e2;

c02_06e3:;

	i8 v8811 = (i8)(intptr_t)(ws+3080);
	i1 v8812 = *(i1*)(intptr_t)v8811;
	i1 v8813 = (i1)+16;
	if (v8812==v8813) goto c02_06e2; else goto c02_06e1;

c02_06e1:;

	i8 v8814 = (i8)(intptr_t)(f145_MidAsmgroupend);
	i8 v8815;

	((void(*)(i8* /* m */))(intptr_t)v8814)(&v8815);
	i8 v8816 = (i8)(intptr_t)(f433_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8816)(v8815);

	goto c02_06dc;

c02_06e2:;

c02_06dc:;

	i8 v8817 = (i8)(intptr_t)(ws+3080);
	i1 v8818 = *(i1*)(intptr_t)v8817;
	i8 v8819 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v8819 = v8818;

	i8 v8820 = (i8)(intptr_t)(ws+3072);
	i8 v8821 = *(i8*)(intptr_t)v8820;
	i8 v8822 = (i8)(intptr_t)(f433_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v8822)(v8821);

endsub:;
}
	void f53_PushNode(i8 /* node */);
	void f54_PopNode(i8* /* node */);
	void f53_PushNode(i8 /* node */);
	void f53_PushNode(i8 /* node */);
	void f56_Discard(i8 /* node */);

// push_and_free workspace at ws+3072 length ws+0
void f445_push_and_free(void) {

	i8 v8866 = (i8)(intptr_t)(ws+3040);
	i2 v8867 = *(i2*)(intptr_t)v8866;
	i8 v8868 = (i8)(intptr_t)(ws+3056);
	i8 v8869 = *(i8*)(intptr_t)v8868;
	*(i2*)(intptr_t)v8869 = v8867;

	i8 v8870 = (i8)(intptr_t)(ws+3042);
	i2 v8871 = *(i2*)(intptr_t)v8870;
	i8 v8872 = (i8)(intptr_t)(ws+3056);
	i8 v8873 = *(i8*)(intptr_t)v8872;
	i8 v8874 = v8873+(+2);
	*(i2*)(intptr_t)v8874 = v8871;

	i8 v8875 = (i8)(intptr_t)(ws+3044);
	i2 v8876 = *(i2*)(intptr_t)v8875;
	i8 v8877 = (i8)(intptr_t)(ws+3056);
	i8 v8878 = *(i8*)(intptr_t)v8877;
	i8 v8879 = v8878+(+4);
	*(i2*)(intptr_t)v8879 = v8876;

	i8 v8880 = (i8)+0;
	i8 v8881 = (i8)(intptr_t)(ws+3032);
	i8 v8882 = *(i8*)(intptr_t)v8881;
	i8 v8883 = v8882+(+24);
	*(i8*)(intptr_t)v8883 = v8880;

	i8 v8884 = (i8)+0;
	i8 v8885 = (i8)(intptr_t)(ws+3032);
	i8 v8886 = *(i8*)(intptr_t)v8885;
	i8 v8887 = v8886+(+32);
	*(i8*)(intptr_t)v8887 = v8884;

	i8 v8888 = (i8)(intptr_t)(ws+3056);
	i8 v8889 = *(i8*)(intptr_t)v8888;
	i8 v8890 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8890)(v8889);

	i8 v8891 = (i8)(intptr_t)(ws+3048);
	i8 v8892 = *(i8*)(intptr_t)v8891;
	i8 v8893 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8893)(v8892);

	i8 v8894 = (i8)(intptr_t)(ws+3032);
	i8 v8895 = *(i8*)(intptr_t)v8894;
	i8 v8896 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8896)(v8895);

endsub:;
}
	void f213_AllocLabel(i2* /* label */);
	void f445_push_and_free(void);
	void f213_AllocLabel(i2* /* label */);
	void f445_push_and_free(void);
	void f443_Generate(i8 /* statement */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3016 length ws+52
void f444_GenerateConditional(i8 p8823 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3016) = p8823; /*rootnode */

	i8 v8824 = (i8)(intptr_t)(ws+216);
	i8 v8825 = *(i8*)(intptr_t)v8824;
	i8 v8826 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v8826 = v8825;

	i8 v8827 = (i8)(intptr_t)(ws+3016);
	i8 v8828 = *(i8*)(intptr_t)v8827;
	i8 v8829 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v8829)(v8828);

c02_06e6:;

	i8 v8830 = (i8)(intptr_t)(ws+216);
	i8 v8831 = *(i8*)(intptr_t)v8830;
	i8 v8832 = (i8)(intptr_t)(ws+3024);
	i8 v8833 = *(i8*)(intptr_t)v8832;
	if (v8831==v8833) goto c02_06e9; else goto c02_06e8;

c02_06e8:;

	i8 v8834 = (i8)(intptr_t)(f54_PopNode);
	i8 v8835;

	((void(*)(i8* /* node */))(intptr_t)v8834)(&v8835);
	i8 v8836 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v8836 = v8835;

	i8 v8837 = (i8)(intptr_t)(ws+3032);
	i8 v8838 = *(i8*)(intptr_t)v8837;
	i2 v8839 = *(i2*)(intptr_t)v8838;
	i8 v8840 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v8840 = v8839;

	i8 v8841 = (i8)(intptr_t)(ws+3032);
	i8 v8842 = *(i8*)(intptr_t)v8841;
	i8 v8843 = v8842+(+2);
	i2 v8844 = *(i2*)(intptr_t)v8843;
	i8 v8845 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v8845 = v8844;

	i8 v8846 = (i8)(intptr_t)(ws+3032);
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = v8847+(+4);
	i2 v8849 = *(i2*)(intptr_t)v8848;
	i8 v8850 = (i8)(intptr_t)(ws+3044);
	*(i2*)(intptr_t)v8850 = v8849;

	i8 v8851 = (i8)(intptr_t)(ws+3032);
	i8 v8852 = *(i8*)(intptr_t)v8851;
	i8 v8853 = v8852+(+24);
	i8 v8854 = *(i8*)(intptr_t)v8853;
	i8 v8855 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v8855 = v8854;

	i8 v8856 = (i8)(intptr_t)(ws+3032);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	i8 v8858 = v8857+(+32);
	i8 v8859 = *(i8*)(intptr_t)v8858;
	i8 v8860 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v8860 = v8859;

	i8 v8861 = (i8)(intptr_t)(ws+3032);
	i8 v8862 = *(i8*)(intptr_t)v8861;
	i8 v8863 = v8862+(+58);
	i1 v8864 = *(i1*)(intptr_t)v8863;
	i8 v8865 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v8865 = v8864;


	i8 v8897 = (i8)(intptr_t)(ws+3064);
	i1 v8898 = *(i1*)(intptr_t)v8897;

	if (v8898 != +56) goto c02_06eb;

	i8 v8899 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v8900;

	((void(*)(i2* /* label */))(intptr_t)v8899)(&v8900);
	i8 v8901 = (i8)(intptr_t)(ws+3066);
	*(i2*)(intptr_t)v8901 = v8900;

	i8 v8902 = (i8)(intptr_t)(ws+3040);
	i2 v8903 = *(i2*)(intptr_t)v8902;
	i8 v8904 = (i8)(intptr_t)(ws+3048);
	i8 v8905 = *(i8*)(intptr_t)v8904;
	*(i2*)(intptr_t)v8905 = v8903;

	i8 v8906 = (i8)(intptr_t)(ws+3066);
	i2 v8907 = *(i2*)(intptr_t)v8906;
	i8 v8908 = (i8)(intptr_t)(ws+3048);
	i8 v8909 = *(i8*)(intptr_t)v8908;
	i8 v8910 = v8909+(+2);
	*(i2*)(intptr_t)v8910 = v8907;

	i8 v8911 = (i8)(intptr_t)(ws+3066);
	i2 v8912 = *(i2*)(intptr_t)v8911;
	i8 v8913 = (i8)(intptr_t)(ws+3048);
	i8 v8914 = *(i8*)(intptr_t)v8913;
	i8 v8915 = v8914+(+4);
	*(i2*)(intptr_t)v8915 = v8912;

	i8 v8916 = (i8)(intptr_t)(f445_push_and_free);

	((void(*)(void))(intptr_t)v8916)();

	goto c02_06ea;

c02_06eb:;

	if (v8898 != +55) goto c02_06ec;

	i8 v8917 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v8918;

	((void(*)(i2* /* label */))(intptr_t)v8917)(&v8918);
	i8 v8919 = (i8)(intptr_t)(ws+3066);
	*(i2*)(intptr_t)v8919 = v8918;

	i8 v8920 = (i8)(intptr_t)(ws+3066);
	i2 v8921 = *(i2*)(intptr_t)v8920;
	i8 v8922 = (i8)(intptr_t)(ws+3048);
	i8 v8923 = *(i8*)(intptr_t)v8922;
	*(i2*)(intptr_t)v8923 = v8921;

	i8 v8924 = (i8)(intptr_t)(ws+3042);
	i2 v8925 = *(i2*)(intptr_t)v8924;
	i8 v8926 = (i8)(intptr_t)(ws+3048);
	i8 v8927 = *(i8*)(intptr_t)v8926;
	i8 v8928 = v8927+(+2);
	*(i2*)(intptr_t)v8928 = v8925;

	i8 v8929 = (i8)(intptr_t)(ws+3066);
	i2 v8930 = *(i2*)(intptr_t)v8929;
	i8 v8931 = (i8)(intptr_t)(ws+3048);
	i8 v8932 = *(i8*)(intptr_t)v8931;
	i8 v8933 = v8932+(+4);
	*(i2*)(intptr_t)v8933 = v8930;

	i8 v8934 = (i8)(intptr_t)(f445_push_and_free);

	((void(*)(void))(intptr_t)v8934)();

	goto c02_06ea;

c02_06ec:;

	i8 v8935 = (i8)(intptr_t)(ws+3064);
	i1 v8936 = *(i1*)(intptr_t)v8935;
	i1 v8937 = (i1)+57;
	if (v8936<v8937) goto c02_06f3; else goto c02_06f4;

c02_06f4:;

	i1 v8938 = (i1)+71;
	i8 v8939 = (i8)(intptr_t)(ws+3064);
	i1 v8940 = *(i1*)(intptr_t)v8939;
	if (v8938<v8940) goto c02_06f3; else goto c02_06f2;

c02_06f2:;

	i8 v8941 = (i8)(intptr_t)(ws+3032);
	i8 v8942 = *(i8*)(intptr_t)v8941;
	i8 v8943 = v8942+(+6);
	i1 v8944 = *(i1*)(intptr_t)v8943;
	i1 v8945 = (i1)+0;
	if (v8944==v8945) goto c02_06f9; else goto c02_06f8;

c02_06f8:;

	i8 v8946 = (i8)(intptr_t)(ws+3042);
	i2 v8947 = *(i2*)(intptr_t)v8946;
	i8 v8948 = (i8)(intptr_t)(ws+3032);
	i8 v8949 = *(i8*)(intptr_t)v8948;
	*(i2*)(intptr_t)v8949 = v8947;

	i8 v8950 = (i8)(intptr_t)(ws+3040);
	i2 v8951 = *(i2*)(intptr_t)v8950;
	i8 v8952 = (i8)(intptr_t)(ws+3032);
	i8 v8953 = *(i8*)(intptr_t)v8952;
	i8 v8954 = v8953+(+2);
	*(i2*)(intptr_t)v8954 = v8951;

	i1 v8955 = (i1)+0;
	i8 v8956 = (i8)(intptr_t)(ws+3032);
	i8 v8957 = *(i8*)(intptr_t)v8956;
	i8 v8958 = v8957+(+6);
	*(i1*)(intptr_t)v8958 = v8955;

	goto c02_06f5;

c02_06f9:;

c02_06f5:;

	goto c02_06ed;

c02_06f3:;

c02_06ed:;

	i8 v8959 = (i8)(intptr_t)(ws+3032);
	i8 v8960 = *(i8*)(intptr_t)v8959;
	i8 v8961 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8961)(v8960);

	i8 v8962 = (i8)(intptr_t)(ws+3044);
	i2 v8963 = *(i2*)(intptr_t)v8962;
	i8 v8964 = (i8)(intptr_t)(f138_MidLabel);
	i8 v8965;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v8964)(&v8965, v8963);
	i8 v8966 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8966)(v8965);

c02_06ea:;


	goto c02_06e6;

c02_06e9:;

endsub:;
}
	void f200_CheckNotPartialType(i8 /* type */);
	void f221_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3016 length ws+24
void f446_InitVariable(i8 p8967 /* type */, i8 p8968 /* symbol */, i8 p8969 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p8969; /*subr */
	*(i8*)(intptr_t)(ws+3024) = p8968; /*symbol */
	*(i8*)(intptr_t)(ws+3032) = p8967; /*type */

	i8 v8970 = (i8)(intptr_t)(ws+3032);
	i8 v8971 = *(i8*)(intptr_t)v8970;
	i8 v8972 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8972)(v8971);

	i8 v8973 = (i8)(intptr_t)(ws+3032);
	i8 v8974 = *(i8*)(intptr_t)v8973;
	i8 v8975 = (i8)(intptr_t)(ws+3024);
	i8 v8976 = *(i8*)(intptr_t)v8975;
	*(i8*)(intptr_t)v8976 = v8974;

	i8 v8977 = (i8)(intptr_t)(ws+3016);
	i8 v8978 = *(i8*)(intptr_t)v8977;
	i8 v8979 = (i8)(intptr_t)(ws+3024);
	i8 v8980 = *(i8*)(intptr_t)v8979;
	i8 v8981 = v8980+(+8);
	*(i8*)(intptr_t)v8981 = v8978;

	i8 v8982 = (i8)(intptr_t)(ws+3024);
	i8 v8983 = *(i8*)(intptr_t)v8982;
	i8 v8984 = (i8)(intptr_t)(f221_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v8984)(v8983);

endsub:;
}
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f57_StrDupBraced(i8* /* news */, i8 /* s */);

// MakePointerType workspace at ws+3056 length ws+16
void f447_MakePointerType(i8* p8985 /* ptrtype */, i8 p8986 /* type */) {
	*(i8*)(intptr_t)(ws+3056) = p8986; /*type */

	i8 v8987 = (i8)(intptr_t)(ws+3056);
	i8 v8988 = *(i8*)(intptr_t)v8987;
	i8 v8989 = v8988+(+32);
	i8 v8990 = *(i8*)(intptr_t)v8989;
	i8 v8991 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v8991 = v8990;

	i8 v8992 = (i8)(intptr_t)(ws+3064);
	i8 v8993 = *(i8*)(intptr_t)v8992;
	i8 v8994 = (i8)+0;
	if (v8993==v8994) goto c02_06fd; else goto c02_06fe;

c02_06fd:;

	i8 v8995 = (i8)+0;
	i8 v8996 = (i8)+0;
	i8 v8997 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v8998;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8997)(&v8998, v8996, v8995);
	i8 v8999 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v8999 = v8998;

	i8 v9000 = (i8)(intptr_t)(ws+3056);
	i8 v9001 = *(i8*)(intptr_t)v9000;
	i8 v9002 = v9001+(+48);
	i8 v9003 = *(i8*)(intptr_t)v9002;
	i8 v9004 = (i8)(intptr_t)(f57_StrDupBraced);
	i8 v9005;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v9004)(&v9005, v9003);
	i8 v9006 = (i8)(intptr_t)(ws+3064);
	i8 v9007 = *(i8*)(intptr_t)v9006;
	i8 v9008 = v9007+(+48);
	*(i8*)(intptr_t)v9008 = v9005;

	i1 v9009 = (i1)+30;
	i8 v9010 = (i8)(intptr_t)(ws+3064);
	i8 v9011 = *(i8*)(intptr_t)v9010;
	i8 v9012 = v9011+(+46);
	*(i1*)(intptr_t)v9012 = v9009;

	i1 v9013 = (i1)+3;
	i8 v9014 = (i8)(intptr_t)(ws+3064);
	i8 v9015 = *(i8*)(intptr_t)v9014;
	i8 v9016 = v9015+(+40);
	*(i1*)(intptr_t)v9016 = v9013;

	i8 v9017 = (i8)(intptr_t)(ws+1056);
	i8 v9018 = *(i8*)(intptr_t)v9017;
	i8 v9019 = v9018+(+42);
	i2 v9020 = *(i2*)(intptr_t)v9019;
	i8 v9021 = (i8)(intptr_t)(ws+3064);
	i8 v9022 = *(i8*)(intptr_t)v9021;
	i8 v9023 = v9022+(+42);
	*(i2*)(intptr_t)v9023 = v9020;

	i8 v9024 = (i8)(intptr_t)(ws+1056);
	i8 v9025 = *(i8*)(intptr_t)v9024;
	i8 v9026 = v9025+(+41);
	i1 v9027 = *(i1*)(intptr_t)v9026;
	i8 v9028 = (i8)(intptr_t)(ws+3064);
	i8 v9029 = *(i8*)(intptr_t)v9028;
	i8 v9030 = v9029+(+41);
	*(i1*)(intptr_t)v9030 = v9027;

	i8 v9031 = (i8)(intptr_t)(ws+1056);
	i8 v9032 = *(i8*)(intptr_t)v9031;
	i8 v9033 = v9032+(+44);
	i2 v9034 = *(i2*)(intptr_t)v9033;
	i8 v9035 = (i8)(intptr_t)(ws+3064);
	i8 v9036 = *(i8*)(intptr_t)v9035;
	i8 v9037 = v9036+(+44);
	*(i2*)(intptr_t)v9037 = v9034;

	i8 v9038 = (i8)(intptr_t)(ws+3056);
	i8 v9039 = *(i8*)(intptr_t)v9038;
	i8 v9040 = (i8)(intptr_t)(ws+3064);
	i8 v9041 = *(i8*)(intptr_t)v9040;
	*(i8*)(intptr_t)v9041 = v9039;

	i8 v9042 = (i8)(intptr_t)(ws+3064);
	i8 v9043 = *(i8*)(intptr_t)v9042;
	i8 v9044 = (i8)(intptr_t)(ws+3056);
	i8 v9045 = *(i8*)(intptr_t)v9044;
	i8 v9046 = v9045+(+32);
	*(i8*)(intptr_t)v9046 = v9043;

	goto c02_06fa;

c02_06fe:;

c02_06fa:;

endsub:;
	*p8985 = *(i8*)(intptr_t)(ws+3064);
}
	void f200_CheckNotPartialType(i8 /* type */);
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f58_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f220_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);

// MakeArrayType workspace at ws+3008 length ws+26
void f448_MakeArrayType(i8* p9047 /* arraytype */, i2 p9048 /* size */, i8 p9049 /* type */) {
	*(i8*)(intptr_t)(ws+3008) = p9049; /*type */
	*(i2*)(intptr_t)(ws+3016) = p9048; /*size */

	i8 v9050 = (i8)(intptr_t)(ws+3008);
	i8 v9051 = *(i8*)(intptr_t)v9050;
	i8 v9052 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9052)(v9051);

	i8 v9053 = (i8)+0;
	i8 v9054 = (i8)+0;
	i8 v9055 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v9056;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9055)(&v9056, v9054, v9053);
	i8 v9057 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9057 = v9056;

	i8 v9058 = (i8)(intptr_t)(ws+3008);
	i8 v9059 = *(i8*)(intptr_t)v9058;
	i8 v9060 = v9059+(+48);
	i8 v9061 = *(i8*)(intptr_t)v9060;
	i8 v9062 = (i8)(intptr_t)(ws+3016);
	i2 v9063 = *(i2*)(intptr_t)v9062;
	i8 v9064 = (i8)(intptr_t)(f58_StrDupArrayed);
	i8 v9065;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v9064)(&v9065, v9063, v9061);
	i8 v9066 = (i8)(intptr_t)(ws+3024);
	i8 v9067 = *(i8*)(intptr_t)v9066;
	i8 v9068 = v9067+(+48);
	*(i8*)(intptr_t)v9068 = v9065;

	i1 v9069 = (i1)+30;
	i8 v9070 = (i8)(intptr_t)(ws+3024);
	i8 v9071 = *(i8*)(intptr_t)v9070;
	i8 v9072 = v9071+(+46);
	*(i1*)(intptr_t)v9072 = v9069;

	i1 v9073 = (i1)+4;
	i8 v9074 = (i8)(intptr_t)(ws+3024);
	i8 v9075 = *(i8*)(intptr_t)v9074;
	i8 v9076 = v9075+(+40);
	*(i1*)(intptr_t)v9076 = v9073;

	i2 v9077 = (i2)+0;
	i8 v9078 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v9078 = v9077;

	i2 v9079 = (i2)+0;
	i8 v9080 = (i8)(intptr_t)(ws+3016);
	i2 v9081 = *(i2*)(intptr_t)v9080;
	if (v9079<v9081) goto c02_0702; else goto c02_0703;

c02_0702:;

	i8 v9082 = (i8)(intptr_t)(ws+3008);
	i8 v9083 = *(i8*)(intptr_t)v9082;
	i8 v9084 = v9083+(+44);
	i2 v9085 = *(i2*)(intptr_t)v9084;
	i8 v9086 = (i8)(intptr_t)(ws+3016);
	i2 v9087 = *(i2*)(intptr_t)v9086;
	i2 v9088 = v9087+(-1);
	i2 v9089 = v9085*v9088;
	i8 v9090 = (i8)(intptr_t)(ws+3008);
	i8 v9091 = *(i8*)(intptr_t)v9090;
	i8 v9092 = v9091+(+42);
	i2 v9093 = *(i2*)(intptr_t)v9092;
	i2 v9094 = v9089+v9093;
	i8 v9095 = (i8)(intptr_t)(ws+3032);
	*(i2*)(intptr_t)v9095 = v9094;

	goto c02_06ff;

c02_0703:;

c02_06ff:;

	i8 v9096 = (i8)(intptr_t)(ws+3032);
	i2 v9097 = *(i2*)(intptr_t)v9096;
	i8 v9098 = (i8)(intptr_t)(ws+3024);
	i8 v9099 = *(i8*)(intptr_t)v9098;
	i8 v9100 = v9099+(+42);
	*(i2*)(intptr_t)v9100 = v9097;

	i8 v9101 = (i8)(intptr_t)(ws+3008);
	i8 v9102 = *(i8*)(intptr_t)v9101;
	i8 v9103 = v9102+(+41);
	i1 v9104 = *(i1*)(intptr_t)v9103;
	i8 v9105 = (i8)(intptr_t)(ws+3024);
	i8 v9106 = *(i8*)(intptr_t)v9105;
	i8 v9107 = v9106+(+41);
	*(i1*)(intptr_t)v9107 = v9104;

	i8 v9108 = (i8)(intptr_t)(ws+3008);
	i8 v9109 = *(i8*)(intptr_t)v9108;
	i8 v9110 = v9109+(+44);
	i2 v9111 = *(i2*)(intptr_t)v9110;
	i8 v9112 = (i8)(intptr_t)(ws+3016);
	i2 v9113 = *(i2*)(intptr_t)v9112;
	i2 v9114 = v9111*v9113;
	i8 v9115 = (i8)(intptr_t)(ws+3024);
	i8 v9116 = *(i8*)(intptr_t)v9115;
	i8 v9117 = v9116+(+44);
	*(i2*)(intptr_t)v9117 = v9114;

	i8 v9118 = (i8)(intptr_t)(ws+3008);
	i8 v9119 = *(i8*)(intptr_t)v9118;
	i8 v9120 = (i8)(intptr_t)(ws+3024);
	i8 v9121 = *(i8*)(intptr_t)v9120;
	*(i8*)(intptr_t)v9121 = v9119;

	i8 v9122 = (i8)(intptr_t)(ws+3016);
	i2 v9123 = *(i2*)(intptr_t)v9122;
	i8 v9124 = (i8)(intptr_t)(ws+3024);
	i8 v9125 = *(i8*)(intptr_t)v9124;
	i8 v9126 = v9125+(+8);
	*(i2*)(intptr_t)v9126 = v9123;

	i4 v9127 = (i4)+0;
	i8 v9128 = (i8)(intptr_t)(ws+3016);
	i2 v9129 = *(i2*)(intptr_t)v9128;
	i2 v9130 = v9129+(-1);
	i4 v9131 = v9130;
	i8 v9132 = (i8)(intptr_t)(f220_ArchGuessIntType);
	i8 v9133;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v9132)(&v9133, v9131, v9127);
	i8 v9134 = (i8)(intptr_t)(ws+3024);
	i8 v9135 = *(i8*)(intptr_t)v9134;
	i8 v9136 = v9135+(+16);
	*(i8*)(intptr_t)v9136 = v9133;

endsub:;
	*p9047 = *(i8*)(intptr_t)(ws+3024);
}
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// MakeSubroutineType workspace at ws+3008 length ws+16
void f449_MakeSubroutineType(i8* p9137 /* type */, i8 p9138 /* subr */) {
	*(i8*)(intptr_t)(ws+3008) = p9138; /*subr */

	i8 v9139 = (i8)(intptr_t)(ws+3008);
	i8 v9140 = *(i8*)(intptr_t)v9139;
	i8 v9141 = v9140+(+56);
	i8 v9142 = *(i8*)(intptr_t)v9141;
	i8 v9143 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9143 = v9142;

	i8 v9144 = (i8)(intptr_t)(ws+3016);
	i8 v9145 = *(i8*)(intptr_t)v9144;
	i8 v9146 = (i8)+0;
	if (v9145==v9146) goto c02_0707; else goto c02_0708;

c02_0707:;

	i8 v9147 = (i8)+0;
	i8 v9148 = (i8)+0;
	i8 v9149 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v9150;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9149)(&v9150, v9148, v9147);
	i8 v9151 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9151 = v9150;

	i8 v9152 = (i8)(intptr_t)(ws+3008);
	i8 v9153 = *(i8*)(intptr_t)v9152;
	i8 v9154 = *(i8*)(intptr_t)v9153;
	i8 v9155 = (i8)(intptr_t)(ws+3016);
	i8 v9156 = *(i8*)(intptr_t)v9155;
	i8 v9157 = v9156+(+48);
	*(i8*)(intptr_t)v9157 = v9154;

	i1 v9158 = (i1)+30;
	i8 v9159 = (i8)(intptr_t)(ws+3016);
	i8 v9160 = *(i8*)(intptr_t)v9159;
	i8 v9161 = v9160+(+46);
	*(i1*)(intptr_t)v9161 = v9158;

	i1 v9162 = (i1)+6;
	i8 v9163 = (i8)(intptr_t)(ws+3016);
	i8 v9164 = *(i8*)(intptr_t)v9163;
	i8 v9165 = v9164+(+40);
	*(i1*)(intptr_t)v9165 = v9162;

	i8 v9166 = (i8)(intptr_t)(ws+1056);
	i8 v9167 = *(i8*)(intptr_t)v9166;
	i8 v9168 = v9167+(+42);
	i2 v9169 = *(i2*)(intptr_t)v9168;
	i8 v9170 = (i8)(intptr_t)(ws+3016);
	i8 v9171 = *(i8*)(intptr_t)v9170;
	i8 v9172 = v9171+(+42);
	*(i2*)(intptr_t)v9172 = v9169;

	i8 v9173 = (i8)(intptr_t)(ws+1056);
	i8 v9174 = *(i8*)(intptr_t)v9173;
	i8 v9175 = v9174+(+41);
	i1 v9176 = *(i1*)(intptr_t)v9175;
	i8 v9177 = (i8)(intptr_t)(ws+3016);
	i8 v9178 = *(i8*)(intptr_t)v9177;
	i8 v9179 = v9178+(+41);
	*(i1*)(intptr_t)v9179 = v9176;

	i8 v9180 = (i8)(intptr_t)(ws+1056);
	i8 v9181 = *(i8*)(intptr_t)v9180;
	i8 v9182 = v9181+(+44);
	i2 v9183 = *(i2*)(intptr_t)v9182;
	i8 v9184 = (i8)(intptr_t)(ws+3016);
	i8 v9185 = *(i8*)(intptr_t)v9184;
	i8 v9186 = v9185+(+44);
	*(i2*)(intptr_t)v9186 = v9183;

	i8 v9187 = (i8)(intptr_t)(ws+3008);
	i8 v9188 = *(i8*)(intptr_t)v9187;
	i8 v9189 = (i8)(intptr_t)(ws+3016);
	i8 v9190 = *(i8*)(intptr_t)v9189;
	*(i8*)(intptr_t)v9190 = v9188;

	i8 v9191 = (i8)(intptr_t)(ws+3016);
	i8 v9192 = *(i8*)(intptr_t)v9191;
	i8 v9193 = (i8)(intptr_t)(ws+3008);
	i8 v9194 = *(i8*)(intptr_t)v9193;
	i8 v9195 = v9194+(+56);
	*(i8*)(intptr_t)v9195 = v9192;

	goto c02_0704;

c02_0708:;

c02_0704:;

endsub:;
	*p9137 = *(i8*)(intptr_t)(ws+3016);
}
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);
	void f32_Free(i8 /* block */);

// DestructSymbol workspace at ws+3072 length ws+24
void f451_DestructSymbol(i8 p9197 /* symbol */) {
	*(i8*)(intptr_t)(ws+3072) = p9197; /*symbol */

	i8 v9198 = (i8)(intptr_t)(ws+3072);
	i8 v9199 = *(i8*)(intptr_t)v9198;
	i8 v9200 = v9199+(+46);
	i1 v9201 = *(i1*)(intptr_t)v9200;
	i1 v9202 = (i1)+30;
	if (v9201==v9202) goto c02_070c; else goto c02_070d;

c02_070c:;

	i8 v9203 = (i8)(intptr_t)(ws+3072);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	i8 v9205 = v9204+(+32);
	i8 v9206 = *(i8*)(intptr_t)v9205;
	i8 v9207 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v9207 = v9206;

c02_0710:;

	i8 v9208 = (i8)(intptr_t)(ws+3080);
	i8 v9209 = *(i8*)(intptr_t)v9208;
	i8 v9210 = (i8)+0;
	if (v9209==v9210) goto c02_0713; else goto c02_0712;

c02_0712:;

	i8 v9211 = (i8)(intptr_t)(ws+3080);
	i8 v9212 = *(i8*)(intptr_t)v9211;
	i8 v9213 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v9213 = v9212;

	i8 v9214 = (i8)(intptr_t)(ws+3080);
	i8 v9215 = *(i8*)(intptr_t)v9214;
	i8 v9216 = v9215+(+32);
	i8 v9217 = *(i8*)(intptr_t)v9216;
	i8 v9218 = (i8)(intptr_t)(ws+3080);
	*(i8*)(intptr_t)v9218 = v9217;

	i8 v9219 = (i8)(intptr_t)(ws+3088);
	i8 v9220 = *(i8*)(intptr_t)v9219;
	i8 v9221 = v9220+(+48);
	i8 v9222 = *(i8*)(intptr_t)v9221;
	i8 v9223 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9223)(v9222);

	i8 v9224 = (i8)(intptr_t)(ws+3088);
	i8 v9225 = *(i8*)(intptr_t)v9224;
	i8 v9226 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9226)(v9225);

	goto c02_0710;

c02_0713:;

	goto c02_0709;

c02_070d:;

c02_0709:;

	i8 v9227 = (i8)(intptr_t)(ws+3072);
	i8 v9228 = *(i8*)(intptr_t)v9227;
	i8 v9229 = v9228+(+48);
	i8 v9230 = *(i8*)(intptr_t)v9229;
	i8 v9231 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9231)(v9230);

	i8 v9232 = (i8)(intptr_t)(ws+3072);
	i8 v9233 = *(i8*)(intptr_t)v9232;
	i8 v9234 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9234)(v9233);

endsub:;
}
	void f451_DestructSymbol(i8 /* symbol */);
	void f32_Free(i8 /* block */);

// DestructSubroutine workspace at ws+3048 length ws+24
void f452_DestructSubroutine(i8 p9235 /* subr */) {
	*(i8*)(intptr_t)(ws+3048) = p9235; /*subr */

	i8 v9236 = (i8)(intptr_t)(ws+3048);
	i8 v9237 = *(i8*)(intptr_t)v9236;
	i8 v9238 = v9237+(+16);
	i8 v9239 = *(i8*)(intptr_t)v9238;
	i8 v9240 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v9240 = v9239;

c02_0716:;

	i8 v9241 = (i8)(intptr_t)(ws+3056);
	i8 v9242 = *(i8*)(intptr_t)v9241;
	i8 v9243 = (i8)+0;
	if (v9242==v9243) goto c02_0719; else goto c02_0718;

c02_0718:;

	i8 v9244 = (i8)(intptr_t)(ws+3056);
	i8 v9245 = *(i8*)(intptr_t)v9244;
	i8 v9246 = (i8)(intptr_t)(ws+3064);
	*(i8*)(intptr_t)v9246 = v9245;

	i8 v9247 = (i8)(intptr_t)(ws+3056);
	i8 v9248 = *(i8*)(intptr_t)v9247;
	i8 v9249 = v9248+(+56);
	i8 v9250 = *(i8*)(intptr_t)v9249;
	i8 v9251 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v9251 = v9250;

	i8 v9252 = (i8)(intptr_t)(ws+3064);
	i8 v9253 = *(i8*)(intptr_t)v9252;
	i8 v9254 = (i8)(intptr_t)(f451_DestructSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v9254)(v9253);

	goto c02_0716;

c02_0719:;

	i8 v9255 = (i8)(intptr_t)(ws+3048);
	i8 v9256 = *(i8*)(intptr_t)v9255;
	i8 v9257 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v9257)(v9256);

endsub:;
}
	void f452_DestructSubroutine(i8 /* subr */);
	void f451_DestructSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3016 length ws+32
void f450_DestructSubroutineContents(i8 p9196 /* subr */) {
	*(i8*)(intptr_t)(ws+3016) = p9196; /*subr */



	i8 v9258 = (i8)(intptr_t)(ws+3016);
	i8 v9259 = *(i8*)(intptr_t)v9258;
	i8 v9260 = v9259+(+48);
	i8 v9261 = *(i8*)(intptr_t)v9260;
	i8 v9262 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9262 = v9261;

	i8 v9263 = (i8)(intptr_t)(ws+3024);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = (i8)+0;
	if (v9264==v9265) goto c02_071d; else goto c02_071e;

c02_071d:;

	i8 v9266 = (i8)(intptr_t)(ws+3016);
	i8 v9267 = *(i8*)(intptr_t)v9266;
	i8 v9268 = v9267+(+40);
	i8 v9269 = *(i8*)(intptr_t)v9268;
	i8 v9270 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9270 = v9269;

	goto c02_071a;

c02_071e:;

c02_071a:;

	i8 v9271 = (i8)(intptr_t)(ws+3024);
	i8 v9272 = *(i8*)(intptr_t)v9271;
	i8 v9273 = (i8)+0;
	if (v9272==v9273) goto c02_0723; else goto c02_0722;

c02_0722:;

c02_0724:;

	i8 v9274 = (i8)(intptr_t)(ws+3024);
	i8 v9275 = *(i8*)(intptr_t)v9274;
	i8 v9276 = v9275+(+16);
	i8 v9277 = *(i8*)(intptr_t)v9276;
	i8 v9278 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9278 = v9277;

	i8 v9279 = (i8)(intptr_t)(ws+3032);
	i8 v9280 = *(i8*)(intptr_t)v9279;
	i8 v9281 = (i8)+0;
	if (v9280==v9281) goto c02_0729; else goto c02_072a;

c02_0729:;

	goto c02_0725;

c02_072a:;

c02_0726:;

	i8 v9282 = (i8)(intptr_t)(ws+3032);
	i8 v9283 = *(i8*)(intptr_t)v9282;
	i8 v9284 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9284 = v9283;

	goto c02_0724;

c02_0725:;

	goto c02_071f;

c02_0723:;

c02_071f:;

	i8 v9285 = (i8)(intptr_t)(ws+3016);
	i8 v9286 = *(i8*)(intptr_t)v9285;
	i8 v9287 = v9286+(+16);
	i8 v9288 = *(i8*)(intptr_t)v9287;
	i8 v9289 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9289 = v9288;

	i8 v9290 = (i8)(intptr_t)(ws+3024);
	i8 v9291 = *(i8*)(intptr_t)v9290;
	i8 v9292 = (i8)+0;
	if (v9291==v9292) goto c02_072f; else goto c02_072e;

c02_072e:;

	i8 v9293 = (i8)(intptr_t)(ws+3024);
	i8 v9294 = *(i8*)(intptr_t)v9293;
	i8 v9295 = v9294+(+56);
	i8 v9296 = *(i8*)(intptr_t)v9295;
	i8 v9297 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9297 = v9296;

	goto c02_072b;

c02_072f:;

c02_072b:;

c02_0732:;

	i8 v9298 = (i8)(intptr_t)(ws+3040);
	i8 v9299 = *(i8*)(intptr_t)v9298;
	i8 v9300 = (i8)+0;
	if (v9299==v9300) goto c02_0735; else goto c02_0734;

c02_0734:;

	i8 v9301 = (i8)(intptr_t)(ws+3040);
	i8 v9302 = *(i8*)(intptr_t)v9301;
	i8 v9303 = v9302+(+56);
	i8 v9304 = *(i8*)(intptr_t)v9303;
	i8 v9305 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9305 = v9304;

	i8 v9306 = (i8)(intptr_t)(ws+3040);
	i8 v9307 = *(i8*)(intptr_t)v9306;
	i8 v9308 = v9307+(+46);
	i1 v9309 = *(i1*)(intptr_t)v9308;
	i1 v9310 = (i1)+25;
	if (v9309==v9310) goto c02_0739; else goto c02_073a;

c02_0739:;

	i8 v9311 = (i8)(intptr_t)(ws+3040);
	i8 v9312 = *(i8*)(intptr_t)v9311;
	i8 v9313 = *(i8*)(intptr_t)v9312;
	i8 v9314 = (i8)(intptr_t)(f452_DestructSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v9314)(v9313);

	goto c02_0736;

c02_073a:;

c02_0736:;

	i8 v9315 = (i8)(intptr_t)(ws+3040);
	i8 v9316 = *(i8*)(intptr_t)v9315;
	i8 v9317 = (i8)(intptr_t)(f451_DestructSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v9317)(v9316);

	i8 v9318 = (i8)(intptr_t)(ws+3032);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	i8 v9320 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9320 = v9319;

	goto c02_0732;

c02_0735:;

	i8 v9321 = (i8)(intptr_t)(ws+3024);
	i8 v9322 = *(i8*)(intptr_t)v9321;
	i8 v9323 = (i8)+0;
	if (v9322==v9323) goto c02_073f; else goto c02_073e;

c02_073e:;

	i8 v9324 = (i8)+0;
	i8 v9325 = (i8)(intptr_t)(ws+3024);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = v9326+(+56);
	*(i8*)(intptr_t)v9327 = v9324;

	goto c02_073b;

c02_073f:;

	i8 v9328 = (i8)+0;
	i8 v9329 = (i8)(intptr_t)(ws+3016);
	i8 v9330 = *(i8*)(intptr_t)v9329;
	i8 v9331 = v9330+(+16);
	*(i8*)(intptr_t)v9331 = v9328;

c02_073b:;

	i8 v9332 = (i8)(intptr_t)(ws+3024);
	i8 v9333 = *(i8*)(intptr_t)v9332;
	i8 v9334 = (i8)(intptr_t)(ws+3016);
	i8 v9335 = *(i8*)(intptr_t)v9334;
	i8 v9336 = v9335+(+24);
	*(i8*)(intptr_t)v9336 = v9333;

endsub:;
}
	void f33_StrDup(i8* /* sout */, i8 /* s */);
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// CopyParameterList workspace at ws+3016 length ws+40
void f453_CopyParameterList(i8* p9337 /* newparam */, i8 p9338 /* subr */, i8 p9339 /* param */) {
	*(i8*)(intptr_t)(ws+3016) = p9339; /*param */
	*(i8*)(intptr_t)(ws+3024) = p9338; /*subr */

	i8 v9340 = (i8)+0;
	i8 v9341 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9341 = v9340;

	i8 v9342 = (i8)+0;
	i8 v9343 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9343 = v9342;

c02_0742:;

	i8 v9344 = (i8)(intptr_t)(ws+3016);
	i8 v9345 = *(i8*)(intptr_t)v9344;
	i8 v9346 = (i8)+0;
	if (v9345==v9346) goto c02_0745; else goto c02_0744;

c02_0744:;

	i8 v9347 = (i8)(intptr_t)(ws+3024);
	i8 v9348 = *(i8*)(intptr_t)v9347;
	i8 v9349 = v9348+(+16);
	i8 v9350 = (i8)(intptr_t)(ws+3016);
	i8 v9351 = *(i8*)(intptr_t)v9350;
	i8 v9352 = v9351+(+48);
	i8 v9353 = *(i8*)(intptr_t)v9352;
	i8 v9354 = (i8)(intptr_t)(f33_StrDup);
	i8 v9355;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v9354)(&v9355, v9353);
	i8 v9356 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v9357;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9356)(&v9357, v9355, v9349);
	i8 v9358 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9358 = v9357;

	i1 v9359 = (i1)+28;
	i8 v9360 = (i8)(intptr_t)(ws+3048);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i8 v9362 = v9361+(+46);
	*(i1*)(intptr_t)v9362 = v9359;

	i8 v9363 = (i8)(intptr_t)(ws+3016);
	i8 v9364 = *(i8*)(intptr_t)v9363;
	i8 v9365 = *(i8*)(intptr_t)v9364;
	i8 v9366 = (i8)(intptr_t)(ws+3048);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	*(i8*)(intptr_t)v9367 = v9365;

	i8 v9368 = (i8)(intptr_t)(ws+3016);
	i8 v9369 = *(i8*)(intptr_t)v9368;
	i8 v9370 = v9369+(+8);
	i8 v9371 = *(i8*)(intptr_t)v9370;
	i8 v9372 = (i8)(intptr_t)(ws+3048);
	i8 v9373 = *(i8*)(intptr_t)v9372;
	i8 v9374 = v9373+(+8);
	*(i8*)(intptr_t)v9374 = v9371;

	i8 v9375 = (i8)(intptr_t)(ws+3016);
	i8 v9376 = *(i8*)(intptr_t)v9375;
	i8 v9377 = v9376+(+32);
	i2 v9378 = *(i2*)(intptr_t)v9377;
	i8 v9379 = (i8)(intptr_t)(ws+3048);
	i8 v9380 = *(i8*)(intptr_t)v9379;
	i8 v9381 = v9380+(+32);
	*(i2*)(intptr_t)v9381 = v9378;

	i8 v9382 = (i8)(intptr_t)(ws+3040);
	i8 v9383 = *(i8*)(intptr_t)v9382;
	i8 v9384 = (i8)+0;
	if (v9383==v9384) goto c02_074a; else goto c02_0749;

c02_0749:;

	i8 v9385 = (i8)(intptr_t)(ws+3048);
	i8 v9386 = *(i8*)(intptr_t)v9385;
	i8 v9387 = (i8)(intptr_t)(ws+3040);
	i8 v9388 = *(i8*)(intptr_t)v9387;
	i8 v9389 = v9388+(+16);
	*(i8*)(intptr_t)v9389 = v9386;

	goto c02_0746;

c02_074a:;

c02_0746:;

	i8 v9390 = (i8)(intptr_t)(ws+3048);
	i8 v9391 = *(i8*)(intptr_t)v9390;
	i8 v9392 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9392 = v9391;

	i8 v9393 = (i8)(intptr_t)(ws+3032);
	i8 v9394 = *(i8*)(intptr_t)v9393;
	i8 v9395 = (i8)+0;
	if (v9394==v9395) goto c02_074e; else goto c02_074f;

c02_074e:;

	i8 v9396 = (i8)(intptr_t)(ws+3048);
	i8 v9397 = *(i8*)(intptr_t)v9396;
	i8 v9398 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9398 = v9397;

	goto c02_074b;

c02_074f:;

c02_074b:;

	i8 v9399 = (i8)(intptr_t)(ws+3016);
	i8 v9400 = *(i8*)(intptr_t)v9399;
	i8 v9401 = v9400+(+16);
	i8 v9402 = *(i8*)(intptr_t)v9401;
	i8 v9403 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v9403 = v9402;

	goto c02_0742;

c02_0745:;

endsub:;
	*p9337 = *(i8*)(intptr_t)(ws+3032);
}
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0172[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0173[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// expr_i_cant_do_that workspace at ws+3104 length ws+16
void f454_expr_i_cant_do_that(i8 p9404 /* rhs */, i8 p9405 /* lhs */) {
	*(i8*)(intptr_t)(ws+3104) = p9405; /*lhs */
	*(i8*)(intptr_t)(ws+3112) = p9404; /*rhs */

	i8 v9406 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v9406)();

	i8 v9407 = (i8)(intptr_t)(ws+3104);
	i8 v9408 = *(i8*)(intptr_t)v9407;
	i8 v9409 = v9408+(+16);
	i8 v9410 = *(i8*)(intptr_t)v9409;
	i8 v9411 = v9410+(+48);
	i8 v9412 = *(i8*)(intptr_t)v9411;
	i8 v9413 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9413)(v9412);

	i8 v9414 = (i8)(intptr_t)c02_s0172;
	i8 v9415 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9415)(v9414);

	i8 v9416 = (i8)(intptr_t)(ws+3112);
	i8 v9417 = *(i8*)(intptr_t)v9416;
	i8 v9418 = v9417+(+16);
	i8 v9419 = *(i8*)(intptr_t)v9418;
	i8 v9420 = v9419+(+48);
	i8 v9421 = *(i8*)(intptr_t)v9420;
	i8 v9422 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9422)(v9421);

	i8 v9423 = (i8)(intptr_t)c02_s0173;
	i8 v9424 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9424)(v9423);

	i8 v9425 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v9425)();

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0174[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0175[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0176[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f208_IsScalar(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0177[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// CheckExpressionType workspace at ws+3072 length ws+16
void f455_CheckExpressionType(i8 p9426 /* type */, i8 p9427 /* node */) {
	*(i8*)(intptr_t)(ws+3072) = p9427; /*node */
	*(i8*)(intptr_t)(ws+3080) = p9426; /*type */

	i8 v9428 = (i8)(intptr_t)(ws+3072);
	i8 v9429 = *(i8*)(intptr_t)v9428;
	i8 v9430 = v9429+(+16);
	i8 v9431 = *(i8*)(intptr_t)v9430;
	i8 v9432 = (i8)+0;
	if (v9431==v9432) goto c02_0753; else goto c02_0754;

c02_0753:;

	i8 v9433 = (i8)(intptr_t)(ws+3080);
	i8 v9434 = *(i8*)(intptr_t)v9433;
	i8 v9435 = (i8)(intptr_t)(ws+3072);
	i8 v9436 = *(i8*)(intptr_t)v9435;
	i8 v9437 = v9436+(+16);
	*(i8*)(intptr_t)v9437 = v9434;

	goto c02_0750;

c02_0754:;

c02_0750:;

	i8 v9438 = (i8)(intptr_t)(ws+3072);
	i8 v9439 = *(i8*)(intptr_t)v9438;
	i8 v9440 = v9439+(+16);
	i8 v9441 = *(i8*)(intptr_t)v9440;
	i8 v9442 = (i8)(intptr_t)(ws+3080);
	i8 v9443 = *(i8*)(intptr_t)v9442;
	if (v9441==v9443) goto c02_0759; else goto c02_0758;

c02_0758:;

	i8 v9444 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v9444)();

	i8 v9445 = (i8)(intptr_t)c02_s0174;
	i8 v9446 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9446)(v9445);

	i8 v9447 = (i8)(intptr_t)(ws+3072);
	i8 v9448 = *(i8*)(intptr_t)v9447;
	i8 v9449 = v9448+(+16);
	i8 v9450 = *(i8*)(intptr_t)v9449;
	i8 v9451 = v9450+(+48);
	i8 v9452 = *(i8*)(intptr_t)v9451;
	i8 v9453 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9453)(v9452);

	i8 v9454 = (i8)(intptr_t)c02_s0175;
	i8 v9455 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9455)(v9454);

	i8 v9456 = (i8)(intptr_t)(ws+3080);
	i8 v9457 = *(i8*)(intptr_t)v9456;
	i8 v9458 = v9457+(+48);
	i8 v9459 = *(i8*)(intptr_t)v9458;
	i8 v9460 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9460)(v9459);

	i8 v9461 = (i8)(intptr_t)c02_s0176;
	i8 v9462 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9462)(v9461);

	i8 v9463 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v9463)();

	goto c02_0755;

c02_0759:;

c02_0755:;

	i8 v9464 = (i8)(intptr_t)(ws+3080);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = (i8)(intptr_t)(f208_IsScalar);
	i1 v9467;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9466)(&v9467, v9465);
	i1 v9468 = (i1)+0;
	if (v9467==v9468) goto c02_075d; else goto c02_075e;

c02_075d:;

	i8 v9469 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v9469)();

	i8 v9470 = (i8)(intptr_t)(ws+3080);
	i8 v9471 = *(i8*)(intptr_t)v9470;
	i8 v9472 = v9471+(+48);
	i8 v9473 = *(i8*)(intptr_t)v9472;
	i8 v9474 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9474)(v9473);

	i8 v9475 = (i8)(intptr_t)c02_s0177;
	i8 v9476 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9476)(v9475);

	i8 v9477 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v9477)();

	goto c02_075a;

c02_075e:;

c02_075a:;

endsub:;
}
	void f206_IsNum(i1* /* result */, i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0178[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f61_SimpleError(i8 /* message */);
	void f206_IsNum(i1* /* result */, i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0179[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f61_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3048 length ws+16
void f456_ResolveUntypedConstantsForAddOrSub(i8 p9478 /* rhs */, i8 p9479 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p9479; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p9478; /*rhs */

	i8 v9480 = (i8)(intptr_t)(ws+3048);
	i8 v9481 = *(i8*)(intptr_t)v9480;
	i8 v9482 = v9481+(+16);
	i8 v9483 = *(i8*)(intptr_t)v9482;
	i8 v9484 = (i8)+0;
	if (v9483==v9484) goto c02_0765; else goto c02_0766;

c02_0766:;

	i8 v9485 = (i8)(intptr_t)(ws+3056);
	i8 v9486 = *(i8*)(intptr_t)v9485;
	i8 v9487 = v9486+(+16);
	i8 v9488 = *(i8*)(intptr_t)v9487;
	i8 v9489 = (i8)+0;
	if (v9488==v9489) goto c02_0764; else goto c02_0765;

c02_0764:;

	i8 v9490 = (i8)(intptr_t)(ws+3048);
	i8 v9491 = *(i8*)(intptr_t)v9490;
	i8 v9492 = v9491+(+16);
	i8 v9493 = *(i8*)(intptr_t)v9492;
	i8 v9494 = (i8)(intptr_t)(f206_IsNum);
	i1 v9495;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9494)(&v9495, v9493);
	i1 v9496 = (i1)+0;
	if (v9495==v9496) goto c02_076b; else goto c02_076a;

c02_076a:;

	i8 v9497 = (i8)(intptr_t)(ws+3048);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	i8 v9499 = v9498+(+16);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = (i8)(intptr_t)(ws+3056);
	i8 v9502 = *(i8*)(intptr_t)v9501;
	i8 v9503 = v9502+(+16);
	*(i8*)(intptr_t)v9503 = v9500;

	goto c02_0767;

c02_076b:;

	i8 v9504 = (i8)(intptr_t)(ws+3048);
	i8 v9505 = *(i8*)(intptr_t)v9504;
	i8 v9506 = v9505+(+16);
	i8 v9507 = *(i8*)(intptr_t)v9506;
	i8 v9508 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9509;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9508)(&v9509, v9507);
	i1 v9510 = (i1)+0;
	if (v9509==v9510) goto c02_076f; else goto c02_076e;

c02_076e:;

	i8 v9511 = (i8)(intptr_t)(ws+1056);
	i8 v9512 = *(i8*)(intptr_t)v9511;
	i8 v9513 = (i8)(intptr_t)(ws+3056);
	i8 v9514 = *(i8*)(intptr_t)v9513;
	i8 v9515 = v9514+(+16);
	*(i8*)(intptr_t)v9515 = v9512;

	goto c02_0767;

c02_076f:;

	i8 v9516 = (i8)(intptr_t)c02_s0178;
	i8 v9517 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9517)(v9516);

c02_0767:;

	goto c02_075f;

c02_0765:;

c02_075f:;

	i8 v9518 = (i8)(intptr_t)(ws+3048);
	i8 v9519 = *(i8*)(intptr_t)v9518;
	i8 v9520 = v9519+(+16);
	i8 v9521 = *(i8*)(intptr_t)v9520;
	i8 v9522 = (i8)+0;
	if (v9521==v9522) goto c02_0777; else goto c02_0776;

c02_0777:;

	i8 v9523 = (i8)(intptr_t)(ws+3056);
	i8 v9524 = *(i8*)(intptr_t)v9523;
	i8 v9525 = v9524+(+16);
	i8 v9526 = *(i8*)(intptr_t)v9525;
	i8 v9527 = (i8)+0;
	if (v9526==v9527) goto c02_0776; else goto c02_0775;

c02_0775:;

	i8 v9528 = (i8)(intptr_t)(ws+3056);
	i8 v9529 = *(i8*)(intptr_t)v9528;
	i8 v9530 = v9529+(+16);
	i8 v9531 = *(i8*)(intptr_t)v9530;
	i8 v9532 = (i8)(intptr_t)(f206_IsNum);
	i1 v9533;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9532)(&v9533, v9531);
	i1 v9534 = (i1)+0;
	if (v9533==v9534) goto c02_077c; else goto c02_077b;

c02_077b:;

	i8 v9535 = (i8)(intptr_t)(ws+3056);
	i8 v9536 = *(i8*)(intptr_t)v9535;
	i8 v9537 = v9536+(+16);
	i8 v9538 = *(i8*)(intptr_t)v9537;
	i8 v9539 = (i8)(intptr_t)(ws+3048);
	i8 v9540 = *(i8*)(intptr_t)v9539;
	i8 v9541 = v9540+(+16);
	*(i8*)(intptr_t)v9541 = v9538;

	goto c02_0778;

c02_077c:;

	i8 v9542 = (i8)(intptr_t)(ws+3056);
	i8 v9543 = *(i8*)(intptr_t)v9542;
	i8 v9544 = v9543+(+16);
	i8 v9545 = *(i8*)(intptr_t)v9544;
	i8 v9546 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9547;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9546)(&v9547, v9545);
	i1 v9548 = (i1)+0;
	if (v9547==v9548) goto c02_0780; else goto c02_077f;

c02_077f:;

	i8 v9549 = (i8)(intptr_t)c02_s0179;
	i8 v9550 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9550)(v9549);

	goto c02_0778;

c02_0780:;

c02_0778:;

	goto c02_0770;

c02_0776:;

c02_0770:;

endsub:;
}
	void f454_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3072 length ws+32
void f457_ResolveUntypedConstantsSimply(i8 p9551 /* rhs */, i8 p9552 /* lhs */) {
	*(i8*)(intptr_t)(ws+3072) = p9552; /*lhs */
	*(i8*)(intptr_t)(ws+3080) = p9551; /*rhs */

	i8 v9553 = (i8)(intptr_t)(ws+3072);
	i8 v9554 = *(i8*)(intptr_t)v9553;
	i8 v9555 = v9554+(+16);
	i8 v9556 = *(i8*)(intptr_t)v9555;
	i8 v9557 = (i8)(intptr_t)(ws+3088);
	*(i8*)(intptr_t)v9557 = v9556;

	i8 v9558 = (i8)(intptr_t)(ws+3080);
	i8 v9559 = *(i8*)(intptr_t)v9558;
	i8 v9560 = v9559+(+16);
	i8 v9561 = *(i8*)(intptr_t)v9560;
	i8 v9562 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v9562 = v9561;

	i8 v9563 = (i8)(intptr_t)(ws+3088);
	i8 v9564 = *(i8*)(intptr_t)v9563;
	i8 v9565 = (i8)+0;
	if (v9564==v9565) goto c02_0787; else goto c02_0788;

c02_0788:;

	i8 v9566 = (i8)(intptr_t)(ws+3096);
	i8 v9567 = *(i8*)(intptr_t)v9566;
	i8 v9568 = (i8)+0;
	if (v9567==v9568) goto c02_0786; else goto c02_0787;

c02_0786:;

	i8 v9569 = (i8)(intptr_t)(ws+3088);
	i8 v9570 = *(i8*)(intptr_t)v9569;
	i8 v9571 = (i8)(intptr_t)(ws+3080);
	i8 v9572 = *(i8*)(intptr_t)v9571;
	i8 v9573 = v9572+(+16);
	*(i8*)(intptr_t)v9573 = v9570;

	goto c02_0781;

c02_0787:;

	i8 v9574 = (i8)(intptr_t)(ws+3088);
	i8 v9575 = *(i8*)(intptr_t)v9574;
	i8 v9576 = (i8)+0;
	if (v9575==v9576) goto c02_078f; else goto c02_078e;

c02_078f:;

	i8 v9577 = (i8)(intptr_t)(ws+3096);
	i8 v9578 = *(i8*)(intptr_t)v9577;
	i8 v9579 = (i8)+0;
	if (v9578==v9579) goto c02_078e; else goto c02_078d;

c02_078d:;

	i8 v9580 = (i8)(intptr_t)(ws+3096);
	i8 v9581 = *(i8*)(intptr_t)v9580;
	i8 v9582 = (i8)(intptr_t)(ws+3072);
	i8 v9583 = *(i8*)(intptr_t)v9582;
	i8 v9584 = v9583+(+16);
	*(i8*)(intptr_t)v9584 = v9581;

	goto c02_0781;

c02_078e:;

	i8 v9585 = (i8)(intptr_t)(ws+3088);
	i8 v9586 = *(i8*)(intptr_t)v9585;
	i8 v9587 = (i8)(intptr_t)(ws+3096);
	i8 v9588 = *(i8*)(intptr_t)v9587;
	if (v9586==v9588) goto c02_0793; else goto c02_0792;

c02_0792:;

	i8 v9589 = (i8)(intptr_t)(ws+3072);
	i8 v9590 = *(i8*)(intptr_t)v9589;
	i8 v9591 = (i8)(intptr_t)(ws+3080);
	i8 v9592 = *(i8*)(intptr_t)v9591;
	i8 v9593 = (i8)(intptr_t)(f454_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9593)(v9592, v9590);

	goto c02_0781;

c02_0793:;

c02_0781:;

endsub:;
}
	void f206_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s017a[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3072 length ws+8
void f458_CheckNumber(i8 p9594 /* node */) {
	*(i8*)(intptr_t)(ws+3072) = p9594; /*node */

	i8 v9595 = (i8)(intptr_t)(ws+3072);
	i8 v9596 = *(i8*)(intptr_t)v9595;
	i8 v9597 = v9596+(+16);
	i8 v9598 = *(i8*)(intptr_t)v9597;
	i8 v9599 = (i8)(intptr_t)(f206_IsNum);
	i1 v9600;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9599)(&v9600, v9598);
	i1 v9601 = (i1)+0;
	if (v9600==v9601) goto c02_0797; else goto c02_0798;

c02_0797:;

	i8 v9602 = (i8)(intptr_t)c02_s017a;
	i8 v9603 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9603)(v9602);

	goto c02_0794;

c02_0798:;

c02_0794:;

endsub:;
}
	void f457_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f458_CheckNumber(i8 /* node */);
	void f458_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3056 length ws+16
void f459_ResolveUntypedConstantsNeedingNumbers(i8 p9604 /* rhs */, i8 p9605 /* lhs */) {
	*(i8*)(intptr_t)(ws+3056) = p9605; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p9604; /*rhs */

	i8 v9606 = (i8)(intptr_t)(ws+3056);
	i8 v9607 = *(i8*)(intptr_t)v9606;
	i8 v9608 = (i8)(intptr_t)(ws+3064);
	i8 v9609 = *(i8*)(intptr_t)v9608;
	i8 v9610 = (i8)(intptr_t)(f457_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9610)(v9609, v9607);

	i8 v9611 = (i8)(intptr_t)(ws+3056);
	i8 v9612 = *(i8*)(intptr_t)v9611;
	i8 v9613 = (i8)(intptr_t)(f458_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v9613)(v9612);

	i8 v9614 = (i8)(intptr_t)(ws+3064);
	i8 v9615 = *(i8*)(intptr_t)v9614;
	i8 v9616 = (i8)(intptr_t)(f458_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v9616)(v9615);

endsub:;
}
	void f457_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f454_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3048 length ws+16
void f460_CondSimple(i8 p9617 /* rhs */, i8 p9618 /* lhs */) {
	*(i8*)(intptr_t)(ws+3048) = p9618; /*lhs */
	*(i8*)(intptr_t)(ws+3056) = p9617; /*rhs */

	i8 v9619 = (i8)(intptr_t)(ws+3048);
	i8 v9620 = *(i8*)(intptr_t)v9619;
	i8 v9621 = (i8)(intptr_t)(ws+3056);
	i8 v9622 = *(i8*)(intptr_t)v9621;
	i8 v9623 = (i8)(intptr_t)(f457_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9623)(v9622, v9620);

	i8 v9624 = (i8)(intptr_t)(ws+3048);
	i8 v9625 = *(i8*)(intptr_t)v9624;
	i8 v9626 = v9625+(+16);
	i8 v9627 = *(i8*)(intptr_t)v9626;
	i8 v9628 = (i8)(intptr_t)(ws+3056);
	i8 v9629 = *(i8*)(intptr_t)v9628;
	i8 v9630 = v9629+(+16);
	i8 v9631 = *(i8*)(intptr_t)v9630;
	if (v9627==v9631) goto c02_079d; else goto c02_079c;

c02_079c:;

	i8 v9632 = (i8)(intptr_t)(ws+3048);
	i8 v9633 = *(i8*)(intptr_t)v9632;
	i8 v9634 = (i8)(intptr_t)(ws+3056);
	i8 v9635 = *(i8*)(intptr_t)v9634;
	i8 v9636 = (i8)(intptr_t)(f454_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9636)(v9635, v9633);

	goto c02_0799;

c02_079d:;

c02_0799:;

endsub:;
}
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f150_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3008 length ws+24
void f461_Expr1Simple(i8* p9637 /* result */, i8 p9638 /* lhs */, i1 p9639 /* op */) {
	*(i1*)(intptr_t)(ws+3008) = p9639; /*op */
	*(i8*)(intptr_t)(ws+3016) = p9638; /*lhs */

	i8 v9640 = (i8)(intptr_t)(ws+3008);
	i1 v9641 = *(i1*)(intptr_t)v9640;
	i8 v9642 = (i8)(intptr_t)(ws+3016);
	i8 v9643 = *(i8*)(intptr_t)v9642;
	i8 v9644 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v9645;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9644)(&v9645, v9643);
	i8 v9646 = (i8)(intptr_t)(ws+3016);
	i8 v9647 = *(i8*)(intptr_t)v9646;
	i8 v9648 = (i8)(intptr_t)(f150_MidC1Op);
	i8 v9649;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9648)(&v9649, v9647, v9645, v9641);
	i8 v9650 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9650 = v9649;

	i8 v9651 = (i8)(intptr_t)(ws+3016);
	i8 v9652 = *(i8*)(intptr_t)v9651;
	i8 v9653 = v9652+(+16);
	i8 v9654 = *(i8*)(intptr_t)v9653;
	i8 v9655 = (i8)(intptr_t)(ws+3024);
	i8 v9656 = *(i8*)(intptr_t)v9655;
	i8 v9657 = v9656+(+16);
	*(i8*)(intptr_t)v9657 = v9654;

endsub:;
	*p9637 = *(i8*)(intptr_t)(ws+3024);
}
	void f456_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f454_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3048 length ws+0
void f463_cant_add_that(void) {

	i8 v9666 = (i8)(intptr_t)(ws+3008);
	i8 v9667 = *(i8*)(intptr_t)v9666;
	i8 v9668 = (i8)(intptr_t)(ws+3016);
	i8 v9669 = *(i8*)(intptr_t)v9668;
	i8 v9670 = (i8)(intptr_t)(f454_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9670)(v9669, v9667);

endsub:;
}
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f463_cant_add_that(void);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f463_cant_add_that(void);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f463_cant_add_that(void);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3008 length ws+40
void f462_ExprAdd(i8* p9658 /* result */, i8 p9659 /* rhs */, i8 p9660 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p9660; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p9659; /*rhs */

	i8 v9661 = (i8)(intptr_t)(ws+3008);
	i8 v9662 = *(i8*)(intptr_t)v9661;
	i8 v9663 = (i8)(intptr_t)(ws+3016);
	i8 v9664 = *(i8*)(intptr_t)v9663;
	i8 v9665 = (i8)(intptr_t)(f456_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9665)(v9664, v9662);


	i8 v9671 = (i8)(intptr_t)(ws+3008);
	i8 v9672 = *(i8*)(intptr_t)v9671;
	i8 v9673 = v9672+(+16);
	i8 v9674 = *(i8*)(intptr_t)v9673;
	i8 v9675 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9675 = v9674;

	i8 v9676 = (i8)(intptr_t)(ws+3016);
	i8 v9677 = *(i8*)(intptr_t)v9676;
	i8 v9678 = v9677+(+16);
	i8 v9679 = *(i8*)(intptr_t)v9678;
	i8 v9680 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9680 = v9679;

	i8 v9681 = (i8)(intptr_t)(ws+3032);
	i8 v9682 = *(i8*)(intptr_t)v9681;
	i8 v9683 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9684;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9683)(&v9684, v9682);
	i1 v9685 = (i1)+0;
	if (v9684==v9685) goto c02_07a2; else goto c02_07a1;

c02_07a1:;

	i8 v9686 = (i8)(intptr_t)(ws+3040);
	i8 v9687 = *(i8*)(intptr_t)v9686;
	i8 v9688 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9689;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9688)(&v9689, v9687);
	i1 v9690 = (i1)+0;
	if (v9689==v9690) goto c02_07aa; else goto c02_07a8;

c02_07aa:;

	i8 v9691 = (i8)(intptr_t)(ws+3040);
	i8 v9692 = *(i8*)(intptr_t)v9691;
	i8 v9693 = (i8)(intptr_t)(ws+1056);
	i8 v9694 = *(i8*)(intptr_t)v9693;
	if (v9692==v9694) goto c02_07a9; else goto c02_07a8;

c02_07a8:;

	i8 v9695 = (i8)(intptr_t)(f463_cant_add_that);

	((void(*)(void))(intptr_t)v9695)();

	goto c02_07a3;

c02_07a9:;

c02_07a3:;

	goto c02_079e;

c02_07a2:;

	i8 v9696 = (i8)(intptr_t)(ws+3040);
	i8 v9697 = *(i8*)(intptr_t)v9696;
	i8 v9698 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9699;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9698)(&v9699, v9697);
	i1 v9700 = (i1)+0;
	if (v9699==v9700) goto c02_07ae; else goto c02_07ad;

c02_07ad:;

	i8 v9701 = (i8)(intptr_t)(f463_cant_add_that);

	((void(*)(void))(intptr_t)v9701)();

	goto c02_079e;

c02_07ae:;

	i8 v9702 = (i8)(intptr_t)(ws+3032);
	i8 v9703 = *(i8*)(intptr_t)v9702;
	i8 v9704 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9705;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9704)(&v9705, v9703);
	i1 v9706 = (i1)+0;
	if (v9705==v9706) goto c02_07b5; else goto c02_07b4;

c02_07b5:;

	i8 v9707 = (i8)(intptr_t)(ws+3032);
	i8 v9708 = *(i8*)(intptr_t)v9707;
	i8 v9709 = (i8)(intptr_t)(ws+3040);
	i8 v9710 = *(i8*)(intptr_t)v9709;
	if (v9708==v9710) goto c02_07b4; else goto c02_07b3;

c02_07b3:;

	i8 v9711 = (i8)(intptr_t)(f463_cant_add_that);

	((void(*)(void))(intptr_t)v9711)();

	goto c02_079e;

c02_07b4:;

c02_079e:;

	i1 v9712 = (i1)+157;
	i8 v9713 = (i8)(intptr_t)(ws+3008);
	i8 v9714 = *(i8*)(intptr_t)v9713;
	i8 v9715 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v9716;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9715)(&v9716, v9714);
	i8 v9717 = (i8)(intptr_t)(ws+3008);
	i8 v9718 = *(i8*)(intptr_t)v9717;
	i8 v9719 = (i8)(intptr_t)(ws+3016);
	i8 v9720 = *(i8*)(intptr_t)v9719;
	i8 v9721 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v9722;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9721)(&v9722, v9720, v9718, v9716, v9712);
	i8 v9723 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9723 = v9722;

	i8 v9724 = (i8)(intptr_t)(ws+3032);
	i8 v9725 = *(i8*)(intptr_t)v9724;
	i8 v9726 = (i8)(intptr_t)(ws+3024);
	i8 v9727 = *(i8*)(intptr_t)v9726;
	i8 v9728 = v9727+(+16);
	*(i8*)(intptr_t)v9728 = v9725;

endsub:;
	*p9658 = *(i8*)(intptr_t)(ws+3024);
}
	void f456_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f454_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3048 length ws+0
void f465_cant_sub_that(void) {

	i8 v9737 = (i8)(intptr_t)(ws+3008);
	i8 v9738 = *(i8*)(intptr_t)v9737;
	i8 v9739 = (i8)(intptr_t)(ws+3016);
	i8 v9740 = *(i8*)(intptr_t)v9739;
	i8 v9741 = (i8)(intptr_t)(f454_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9741)(v9740, v9738);

endsub:;
}
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f465_cant_sub_that(void);
	void f206_IsNum(i1* /* result */, i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f465_cant_sub_that(void);
	void f206_IsNum(i1* /* result */, i8 /* type */);
	void f206_IsNum(i1* /* result */, i8 /* type */);
	void f465_cant_sub_that(void);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3008 length ws+40
void f464_ExprSub(i8* p9729 /* result */, i8 p9730 /* rhs */, i8 p9731 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p9731; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p9730; /*rhs */

	i8 v9732 = (i8)(intptr_t)(ws+3008);
	i8 v9733 = *(i8*)(intptr_t)v9732;
	i8 v9734 = (i8)(intptr_t)(ws+3016);
	i8 v9735 = *(i8*)(intptr_t)v9734;
	i8 v9736 = (i8)(intptr_t)(f456_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9736)(v9735, v9733);


	i8 v9742 = (i8)(intptr_t)(ws+3008);
	i8 v9743 = *(i8*)(intptr_t)v9742;
	i8 v9744 = v9743+(+16);
	i8 v9745 = *(i8*)(intptr_t)v9744;
	i8 v9746 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9746 = v9745;

	i8 v9747 = (i8)(intptr_t)(ws+3016);
	i8 v9748 = *(i8*)(intptr_t)v9747;
	i8 v9749 = v9748+(+16);
	i8 v9750 = *(i8*)(intptr_t)v9749;
	i8 v9751 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v9751 = v9750;

	i8 v9752 = (i8)(intptr_t)(ws+3032);
	i8 v9753 = *(i8*)(intptr_t)v9752;
	i8 v9754 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9755;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9754)(&v9755, v9753);
	i1 v9756 = (i1)+0;
	if (v9755==v9756) goto c02_07be; else goto c02_07c0;

c02_07c0:;

	i8 v9757 = (i8)(intptr_t)(ws+3040);
	i8 v9758 = *(i8*)(intptr_t)v9757;
	i8 v9759 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9760;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9759)(&v9760, v9758);
	i1 v9761 = (i1)+0;
	if (v9760==v9761) goto c02_07bf; else goto c02_07be;

c02_07bf:;

	i8 v9762 = (i8)(intptr_t)(ws+3040);
	i8 v9763 = *(i8*)(intptr_t)v9762;
	i8 v9764 = (i8)(intptr_t)(ws+1056);
	i8 v9765 = *(i8*)(intptr_t)v9764;
	if (v9763==v9765) goto c02_07be; else goto c02_07bd;

c02_07bd:;

	i8 v9766 = (i8)(intptr_t)(f465_cant_sub_that);

	((void(*)(void))(intptr_t)v9766)();

	goto c02_07b6;

c02_07be:;

	i8 v9767 = (i8)(intptr_t)(ws+3032);
	i8 v9768 = *(i8*)(intptr_t)v9767;
	i8 v9769 = (i8)(intptr_t)(f206_IsNum);
	i1 v9770;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9769)(&v9770, v9768);
	i1 v9771 = (i1)+0;
	if (v9770==v9771) goto c02_07c6; else goto c02_07c7;

c02_07c7:;

	i8 v9772 = (i8)(intptr_t)(ws+3040);
	i8 v9773 = *(i8*)(intptr_t)v9772;
	i8 v9774 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9775;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9774)(&v9775, v9773);
	i1 v9776 = (i1)+0;
	if (v9775==v9776) goto c02_07c6; else goto c02_07c5;

c02_07c5:;

	i8 v9777 = (i8)(intptr_t)(f465_cant_sub_that);

	((void(*)(void))(intptr_t)v9777)();

	goto c02_07b6;

c02_07c6:;

	i8 v9778 = (i8)(intptr_t)(ws+3032);
	i8 v9779 = *(i8*)(intptr_t)v9778;
	i8 v9780 = (i8)(intptr_t)(f206_IsNum);
	i1 v9781;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9780)(&v9781, v9779);
	i1 v9782 = (i1)+0;
	if (v9781==v9782) goto c02_07cf; else goto c02_07d1;

c02_07d1:;

	i8 v9783 = (i8)(intptr_t)(ws+3040);
	i8 v9784 = *(i8*)(intptr_t)v9783;
	i8 v9785 = (i8)(intptr_t)(f206_IsNum);
	i1 v9786;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9785)(&v9786, v9784);
	i1 v9787 = (i1)+0;
	if (v9786==v9787) goto c02_07cf; else goto c02_07d0;

c02_07d0:;

	i8 v9788 = (i8)(intptr_t)(ws+3032);
	i8 v9789 = *(i8*)(intptr_t)v9788;
	i8 v9790 = (i8)(intptr_t)(ws+3040);
	i8 v9791 = *(i8*)(intptr_t)v9790;
	if (v9789==v9791) goto c02_07cf; else goto c02_07ce;

c02_07ce:;

	i8 v9792 = (i8)(intptr_t)(f465_cant_sub_that);

	((void(*)(void))(intptr_t)v9792)();

	goto c02_07b6;

c02_07cf:;

c02_07b6:;

	i1 v9793 = (i1)+132;
	i8 v9794 = (i8)(intptr_t)(ws+3008);
	i8 v9795 = *(i8*)(intptr_t)v9794;
	i8 v9796 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v9797;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9796)(&v9797, v9795);
	i8 v9798 = (i8)(intptr_t)(ws+3008);
	i8 v9799 = *(i8*)(intptr_t)v9798;
	i8 v9800 = (i8)(intptr_t)(ws+3016);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v9803;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9802)(&v9803, v9801, v9799, v9797, v9793);
	i8 v9804 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v9804 = v9803;

	i8 v9805 = (i8)(intptr_t)(ws+3032);
	i8 v9806 = *(i8*)(intptr_t)v9805;
	i8 v9807 = (i8)(intptr_t)(f204_IsPtr);
	i1 v9808;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9807)(&v9808, v9806);
	i1 v9809 = (i1)+0;
	if (v9808==v9809) goto c02_07d8; else goto c02_07d9;

c02_07d9:;

	i8 v9810 = (i8)(intptr_t)(ws+3032);
	i8 v9811 = *(i8*)(intptr_t)v9810;
	i8 v9812 = (i8)(intptr_t)(ws+3040);
	i8 v9813 = *(i8*)(intptr_t)v9812;
	if (v9811==v9813) goto c02_07d7; else goto c02_07d8;

c02_07d7:;

	i8 v9814 = (i8)(intptr_t)(ws+1056);
	i8 v9815 = *(i8*)(intptr_t)v9814;
	i8 v9816 = (i8)(intptr_t)(ws+3024);
	i8 v9817 = *(i8*)(intptr_t)v9816;
	i8 v9818 = v9817+(+16);
	*(i8*)(intptr_t)v9818 = v9815;

	goto c02_07d2;

c02_07d8:;

	i8 v9819 = (i8)(intptr_t)(ws+3032);
	i8 v9820 = *(i8*)(intptr_t)v9819;
	i8 v9821 = (i8)(intptr_t)(ws+3024);
	i8 v9822 = *(i8*)(intptr_t)v9821;
	i8 v9823 = v9822+(+16);
	*(i8*)(intptr_t)v9823 = v9820;

c02_07d2:;

endsub:;
	*p9729 = *(i8*)(intptr_t)(ws+3024);
}
	void f459_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f207_IsSNum(i1* /* result */, i8 /* type */);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3008 length ws+48
void f466_Expr2Simple(i8* p9824 /* result */, i8 p9825 /* rhs */, i8 p9826 /* lhs */, i1 p9827 /* uop */, i1 p9828 /* sop */) {
	*(i1*)(intptr_t)(ws+3008) = p9828; /*sop */
	*(i1*)(intptr_t)(ws+3009) = p9827; /*uop */
	*(i8*)(intptr_t)(ws+3016) = p9826; /*lhs */
	*(i8*)(intptr_t)(ws+3024) = p9825; /*rhs */

	i8 v9829 = (i8)(intptr_t)(ws+3016);
	i8 v9830 = *(i8*)(intptr_t)v9829;
	i8 v9831 = (i8)(intptr_t)(ws+3024);
	i8 v9832 = *(i8*)(intptr_t)v9831;
	i8 v9833 = (i8)(intptr_t)(f459_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9833)(v9832, v9830);

	i8 v9834 = (i8)(intptr_t)(ws+3009);
	i1 v9835 = *(i1*)(intptr_t)v9834;
	i8 v9836 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9836 = v9835;

	i8 v9837 = (i8)(intptr_t)(ws+3016);
	i8 v9838 = *(i8*)(intptr_t)v9837;
	i8 v9839 = v9838+(+16);
	i8 v9840 = *(i8*)(intptr_t)v9839;
	i8 v9841 = (i8)(intptr_t)(f207_IsSNum);
	i1 v9842;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9841)(&v9842, v9840);
	i1 v9843 = (i1)+0;
	if (v9842==v9843) goto c02_07de; else goto c02_07dd;

c02_07dd:;

	i8 v9844 = (i8)(intptr_t)(ws+3008);
	i1 v9845 = *(i1*)(intptr_t)v9844;
	i8 v9846 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9846 = v9845;

	goto c02_07da;

c02_07de:;

c02_07da:;

	i8 v9847 = (i8)(intptr_t)(ws+3016);
	i8 v9848 = *(i8*)(intptr_t)v9847;
	i8 v9849 = v9848+(+16);
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9851 = v9850;

	i8 v9852 = (i8)(intptr_t)(ws+3040);
	i1 v9853 = *(i1*)(intptr_t)v9852;
	i8 v9854 = (i8)(intptr_t)(ws+3016);
	i8 v9855 = *(i8*)(intptr_t)v9854;
	i8 v9856 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v9857;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9856)(&v9857, v9855);
	i8 v9858 = (i8)(intptr_t)(ws+3016);
	i8 v9859 = *(i8*)(intptr_t)v9858;
	i8 v9860 = (i8)(intptr_t)(ws+3024);
	i8 v9861 = *(i8*)(intptr_t)v9860;
	i8 v9862 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v9863;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9862)(&v9863, v9861, v9859, v9857, v9853);
	i8 v9864 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9864 = v9863;

	i8 v9865 = (i8)(intptr_t)(ws+3048);
	i8 v9866 = *(i8*)(intptr_t)v9865;
	i8 v9867 = (i8)(intptr_t)(ws+3032);
	i8 v9868 = *(i8*)(intptr_t)v9867;
	i8 v9869 = v9868+(+16);
	*(i8*)(intptr_t)v9869 = v9866;

endsub:;
	*p9824 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s017b[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f61_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3056 length ws+8
void f467_expr_i_checkrhsconst(i8 p9870 /* rhs */) {
	*(i8*)(intptr_t)(ws+3056) = p9870; /*rhs */

	i8 v9871 = (i8)(intptr_t)(ws+3056);
	i8 v9872 = *(i8*)(intptr_t)v9871;
	i8 v9873 = v9872+(+58);
	i1 v9874 = *(i1*)(intptr_t)v9873;
	i1 v9875 = (i1)+42;
	if (v9874==v9875) goto c02_07e3; else goto c02_07e2;

c02_07e2:;

	i8 v9876 = (i8)(intptr_t)c02_s017b;
	i8 v9877 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9877)(v9876);

	goto c02_07df;

c02_07e3:;

c02_07df:;

endsub:;
}
	void f206_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s017c[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f61_SimpleError(i8 /* message */);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3056 length ws+16
void f468_expr_i_checkshift(i8 p9878 /* rhs */, i8 p9879 /* lhs */) {
	*(i8*)(intptr_t)(ws+3056) = p9879; /*lhs */
	*(i8*)(intptr_t)(ws+3064) = p9878; /*rhs */

	i8 v9880 = (i8)(intptr_t)(ws+3056);
	i8 v9881 = *(i8*)(intptr_t)v9880;
	i8 v9882 = v9881+(+16);
	i8 v9883 = *(i8*)(intptr_t)v9882;
	i8 v9884 = (i8)(intptr_t)(f206_IsNum);
	i1 v9885;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9884)(&v9885, v9883);
	i1 v9886 = (i1)+0;
	if (v9885==v9886) goto c02_07e7; else goto c02_07e8;

c02_07e7:;

	i8 v9887 = (i8)(intptr_t)c02_s017c;
	i8 v9888 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9888)(v9887);

	goto c02_07e4;

c02_07e8:;

c02_07e4:;

	i8 v9889 = (i8)(intptr_t)(ws+3064);
	i8 v9890 = *(i8*)(intptr_t)v9889;
	i8 v9891 = (i8)(intptr_t)(ws+1040);
	i8 v9892 = *(i8*)(intptr_t)v9891;
	i8 v9893 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v9893)(v9892, v9890);

endsub:;
}
	void f207_IsSNum(i1* /* result */, i8 /* type */);
	void f467_expr_i_checkrhsconst(i8 /* rhs */);
	void f149_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f56_Discard(i8 /* node */);
	void f468_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3008 length ws+48
void f469_ExprShift(i8* p9894 /* result */, i8 p9895 /* rhs */, i8 p9896 /* lhs */, i1 p9897 /* uop */, i1 p9898 /* sop */) {
	*(i1*)(intptr_t)(ws+3008) = p9898; /*sop */
	*(i1*)(intptr_t)(ws+3009) = p9897; /*uop */
	*(i8*)(intptr_t)(ws+3016) = p9896; /*lhs */
	*(i8*)(intptr_t)(ws+3024) = p9895; /*rhs */

	i8 v9899 = (i8)(intptr_t)(ws+3009);
	i1 v9900 = *(i1*)(intptr_t)v9899;
	i8 v9901 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9901 = v9900;

	i8 v9902 = (i8)(intptr_t)(ws+3016);
	i8 v9903 = *(i8*)(intptr_t)v9902;
	i8 v9904 = v9903+(+16);
	i8 v9905 = *(i8*)(intptr_t)v9904;
	i8 v9906 = (i8)(intptr_t)(f207_IsSNum);
	i1 v9907;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9906)(&v9907, v9905);
	i1 v9908 = (i1)+0;
	if (v9907==v9908) goto c02_07ed; else goto c02_07ec;

c02_07ec:;

	i8 v9909 = (i8)(intptr_t)(ws+3008);
	i1 v9910 = *(i1*)(intptr_t)v9909;
	i8 v9911 = (i8)(intptr_t)(ws+3040);
	*(i1*)(intptr_t)v9911 = v9910;

	goto c02_07e9;

c02_07ed:;

c02_07e9:;

	i8 v9912 = (i8)(intptr_t)(ws+3016);
	i8 v9913 = *(i8*)(intptr_t)v9912;
	i8 v9914 = v9913+(+58);
	i1 v9915 = *(i1*)(intptr_t)v9914;
	i1 v9916 = (i1)+42;
	if (v9915==v9916) goto c02_07f1; else goto c02_07f2;

c02_07f1:;

	i8 v9917 = (i8)(intptr_t)(ws+3024);
	i8 v9918 = *(i8*)(intptr_t)v9917;
	i8 v9919 = (i8)(intptr_t)(f467_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v9919)(v9918);

	i8 v9920 = (i8)(intptr_t)(ws+3040);
	i1 v9921 = *(i1*)(intptr_t)v9920;
	i8 v9922 = (i8)(intptr_t)(ws+3016);
	i8 v9923 = *(i8*)(intptr_t)v9922;
	i8 v9924 = (i8)(intptr_t)(ws+3024);
	i8 v9925 = *(i8*)(intptr_t)v9924;
	i8 v9926 = (i8)(intptr_t)(f149_FoldConstant2);
	i4 v9927;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v9926)(&v9927, v9925, v9923, v9921);
	i8 v9928 = (i8)(intptr_t)(ws+3016);
	i8 v9929 = *(i8*)(intptr_t)v9928;
	*(i4*)(intptr_t)v9929 = v9927;

	i8 v9930 = (i8)(intptr_t)(ws+3016);
	i8 v9931 = *(i8*)(intptr_t)v9930;
	i8 v9932 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9932 = v9931;

	i8 v9933 = (i8)(intptr_t)(ws+3024);
	i8 v9934 = *(i8*)(intptr_t)v9933;
	i8 v9935 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9935)(v9934);

	goto endsub;

c02_07f2:;

c02_07ee:;

	i8 v9936 = (i8)(intptr_t)(ws+3016);
	i8 v9937 = *(i8*)(intptr_t)v9936;
	i8 v9938 = (i8)(intptr_t)(ws+3024);
	i8 v9939 = *(i8*)(intptr_t)v9938;
	i8 v9940 = (i8)(intptr_t)(f468_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v9940)(v9939, v9937);

	i8 v9941 = (i8)(intptr_t)(ws+3016);
	i8 v9942 = *(i8*)(intptr_t)v9941;
	i8 v9943 = v9942+(+16);
	i8 v9944 = *(i8*)(intptr_t)v9943;
	i8 v9945 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v9945 = v9944;

	i8 v9946 = (i8)(intptr_t)(ws+3040);
	i1 v9947 = *(i1*)(intptr_t)v9946;
	i8 v9948 = (i8)(intptr_t)(ws+3016);
	i8 v9949 = *(i8*)(intptr_t)v9948;
	i8 v9950 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v9951;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v9950)(&v9951, v9949);
	i8 v9952 = (i8)(intptr_t)(ws+3016);
	i8 v9953 = *(i8*)(intptr_t)v9952;
	i8 v9954 = (i8)(intptr_t)(ws+3024);
	i8 v9955 = *(i8*)(intptr_t)v9954;
	i8 v9956 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v9957;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v9956)(&v9957, v9955, v9953, v9951, v9947);
	i8 v9958 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v9958 = v9957;

	i8 v9959 = (i8)(intptr_t)(ws+3048);
	i8 v9960 = *(i8*)(intptr_t)v9959;
	i8 v9961 = (i8)(intptr_t)(ws+3032);
	i8 v9962 = *(i8*)(intptr_t)v9961;
	i8 v9963 = v9962+(+16);
	*(i8*)(intptr_t)v9963 = v9960;

endsub:;
	*p9894 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s017d[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f61_SimpleError(i8 /* message */);

// PushNode workspace at ws+3232 length ws+8
void f53_PushNode(i8 p9964 /* node */) {
	*(i8*)(intptr_t)(ws+3232) = p9964; /*node */

	i8 v9965 = (i8)(intptr_t)(ws+3232);
	i8 v9966 = *(i8*)(intptr_t)v9965;
	i8 v9967 = (i8)+0;
	if (v9966==v9967) goto c02_07f7; else goto c02_07f6;

c02_07f6:;

	i8 v9968 = (i8)(intptr_t)(ws+216);
	i8 v9969 = *(i8*)(intptr_t)v9968;
	i8 v9970 = (i8)(intptr_t)(ws+216);
	if (v9969==v9970) goto c02_07fb; else goto c02_07fc;

c02_07fb:;

	i8 v9971 = (i8)(intptr_t)c02_s017d;
	i8 v9972 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9972)(v9971);

	goto c02_07f8;

c02_07fc:;

c02_07f8:;

	i8 v9973 = (i8)(intptr_t)(ws+3232);
	i8 v9974 = *(i8*)(intptr_t)v9973;
	i8 v9975 = (i8)(intptr_t)(ws+216);
	i8 v9976 = *(i8*)(intptr_t)v9975;
	*(i8*)(intptr_t)v9976 = v9974;

	i8 v9977 = (i8)(intptr_t)(ws+216);
	i8 v9978 = *(i8*)(intptr_t)v9977;
	i8 v9979 = v9978+(+8);
	i8 v9980 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v9980 = v9979;

	goto c02_07f3;

c02_07f7:;

c02_07f3:;

endsub:;
}

// PopNode workspace at ws+3216 length ws+8
void f54_PopNode(i8* p9981 /* node */) {

	i8 v9982 = (i8)(intptr_t)(ws+216);
	i8 v9983 = *(i8*)(intptr_t)v9982;
	i8 v9984 = v9983+(-8);
	i8 v9985 = (i8)(intptr_t)(ws+216);
	*(i8*)(intptr_t)v9985 = v9984;

	i8 v9986 = (i8)(intptr_t)(ws+216);
	i8 v9987 = *(i8*)(intptr_t)v9986;
	i8 v9988 = *(i8*)(intptr_t)v9987;
	i8 v9989 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v9989 = v9988;

endsub:;
	*p9981 = *(i8*)(intptr_t)(ws+3216);
}
	void f54_PopNode(i8* /* node */);
	void f53_PushNode(i8 /* node */);
	void f53_PushNode(i8 /* node */);

// NextNode workspace at ws+3208 length ws+8
void f55_NextNode(i8* p9990 /* node */) {

	i8 v9991 = (i8)(intptr_t)(f54_PopNode);
	i8 v9992;

	((void(*)(i8* /* node */))(intptr_t)v9991)(&v9992);
	i8 v9993 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v9993 = v9992;

	i8 v9994 = (i8)(intptr_t)(ws+3208);
	i8 v9995 = *(i8*)(intptr_t)v9994;
	i8 v9996 = (i8)+0;
	if (v9995==v9996) goto c02_0801; else goto c02_0800;

c02_0800:;

	i8 v9997 = (i8)(intptr_t)(ws+3208);
	i8 v9998 = *(i8*)(intptr_t)v9997;
	i8 v9999 = v9998+(+24);
	i8 v10000 = *(i8*)(intptr_t)v9999;
	i8 v10001 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v10001)(v10000);

	i8 v10002 = (i8)(intptr_t)(ws+3208);
	i8 v10003 = *(i8*)(intptr_t)v10002;
	i8 v10004 = v10003+(+32);
	i8 v10005 = *(i8*)(intptr_t)v10004;
	i8 v10006 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v10006)(v10005);

	goto c02_07fd;

c02_0801:;

c02_07fd:;

endsub:;
	*p9990 = *(i8*)(intptr_t)(ws+3208);
}
	void f53_PushNode(i8 /* node */);
	void f54_PopNode(i8* /* node */);
	void f32_Free(i8 /* block */);

// Discard workspace at ws+3160 length ws+24
void f56_Discard(i8 p10007 /* node */) {
	*(i8*)(intptr_t)(ws+3160) = p10007; /*node */

	i8 v10008 = (i8)(intptr_t)(ws+216);
	i8 v10009 = *(i8*)(intptr_t)v10008;
	i8 v10010 = (i8)(intptr_t)(ws+3168);
	*(i8*)(intptr_t)v10010 = v10009;

	i8 v10011 = (i8)(intptr_t)(ws+3160);
	i8 v10012 = *(i8*)(intptr_t)v10011;
	i8 v10013 = (i8)(intptr_t)(f53_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v10013)(v10012);

c02_0804:;

	i8 v10014 = (i8)(intptr_t)(ws+216);
	i8 v10015 = *(i8*)(intptr_t)v10014;
	i8 v10016 = (i8)(intptr_t)(ws+3168);
	i8 v10017 = *(i8*)(intptr_t)v10016;
	if (v10015==v10017) goto c02_0807; else goto c02_0806;

c02_0806:;

	i8 v10018 = (i8)(intptr_t)(f54_PopNode);
	i8 v10019;

	((void(*)(i8* /* node */))(intptr_t)v10018)(&v10019);
	i8 v10020 = (i8)(intptr_t)(ws+3176);
	*(i8*)(intptr_t)v10020 = v10019;

	i8 v10021 = (i8)(intptr_t)(ws+3176);
	i8 v10022 = *(i8*)(intptr_t)v10021;
	i8 v10023 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10023)(v10022);

	goto c02_0804;

c02_0807:;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f213_AllocLabel(i2* /* label */);
	void f213_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3016 length ws+8
void f470_BeginNormalLoop(i8* p10024 /* ll */) {

	i8 v10025 = (i8)+8;
	i8 v10026 = (i8)(intptr_t)(f31_Alloc);
	i8 v10027;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10026)(&v10027, v10025);
	i8 v10028 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10028 = v10027;

	i8 v10029 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10030;

	((void(*)(i2* /* label */))(intptr_t)v10029)(&v10030);
	i8 v10031 = (i8)(intptr_t)(ws+3016);
	i8 v10032 = *(i8*)(intptr_t)v10031;
	*(i2*)(intptr_t)v10032 = v10030;

	i8 v10033 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10034;

	((void(*)(i2* /* label */))(intptr_t)v10033)(&v10034);
	i8 v10035 = (i8)(intptr_t)(ws+3016);
	i8 v10036 = *(i8*)(intptr_t)v10035;
	i8 v10037 = v10036+(+2);
	*(i2*)(intptr_t)v10037 = v10034;

	i8 v10038 = (i8)(intptr_t)(ws+52);
	i2 v10039 = *(i2*)(intptr_t)v10038;
	i8 v10040 = (i8)(intptr_t)(ws+3016);
	i8 v10041 = *(i8*)(intptr_t)v10040;
	i8 v10042 = v10041+(+4);
	*(i2*)(intptr_t)v10042 = v10039;

	i8 v10043 = (i8)(intptr_t)(ws+54);
	i2 v10044 = *(i2*)(intptr_t)v10043;
	i8 v10045 = (i8)(intptr_t)(ws+3016);
	i8 v10046 = *(i8*)(intptr_t)v10045;
	i8 v10047 = v10046+(+6);
	*(i2*)(intptr_t)v10047 = v10044;

	i8 v10048 = (i8)(intptr_t)(ws+3016);
	i8 v10049 = *(i8*)(intptr_t)v10048;
	i8 v10050 = v10049+(+2);
	i2 v10051 = *(i2*)(intptr_t)v10050;
	i8 v10052 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10052 = v10051;

	i8 v10053 = (i8)(intptr_t)(ws+3016);
	i8 v10054 = *(i8*)(intptr_t)v10053;
	i2 v10055 = *(i2*)(intptr_t)v10054;
	i8 v10056 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10056 = v10055;

endsub:;
	*p10024 = *(i8*)(intptr_t)(ws+3016);
}
	void f119_MidJump(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3008 length ws+8
void f471_TerminateNormalLoop(i8 p10057 /* ll */) {
	*(i8*)(intptr_t)(ws+3008) = p10057; /*ll */

	i8 v10058 = (i8)(intptr_t)(ws+54);
	i2 v10059 = *(i2*)(intptr_t)v10058;
	i8 v10060 = (i8)(intptr_t)(f119_MidJump);
	i8 v10061;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10060)(&v10061, v10059);
	i8 v10062 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10062)(v10061);

	i8 v10063 = (i8)(intptr_t)(ws+52);
	i2 v10064 = *(i2*)(intptr_t)v10063;
	i8 v10065 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10066;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10065)(&v10066, v10064);
	i8 v10067 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10067)(v10066);

	i8 v10068 = (i8)(intptr_t)(ws+3008);
	i8 v10069 = *(i8*)(intptr_t)v10068;
	i8 v10070 = v10069+(+4);
	i2 v10071 = *(i2*)(intptr_t)v10070;
	i8 v10072 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10072 = v10071;

	i8 v10073 = (i8)(intptr_t)(ws+3008);
	i8 v10074 = *(i8*)(intptr_t)v10073;
	i8 v10075 = v10074+(+6);
	i2 v10076 = *(i2*)(intptr_t)v10075;
	i8 v10077 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v10077 = v10076;

	i8 v10078 = (i8)(intptr_t)(ws+3008);
	i8 v10079 = *(i8*)(intptr_t)v10078;
	i8 v10080 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10080)(v10079);

endsub:;
}

// Negate workspace at ws+3008 length ws+8
void f472_Negate(i8 p10081 /* node */) {
	*(i8*)(intptr_t)(ws+3008) = p10081; /*node */

	i8 v10082 = (i8)(intptr_t)(ws+3008);
	i8 v10083 = *(i8*)(intptr_t)v10082;
	i8 v10084 = v10083+(+6);
	i1 v10085 = *(i1*)(intptr_t)v10084;
	i1 v10086 = v10085^(+1);
	i8 v10087 = (i8)(intptr_t)(ws+3008);
	i8 v10088 = *(i8*)(intptr_t)v10087;
	i8 v10089 = v10088+(+6);
	*(i1*)(intptr_t)v10089 = v10086;

endsub:;
}
	void f460_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f213_AllocLabel(i2* /* label */);
	void f213_AllocLabel(i2* /* label */);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f114_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3008 length ws+37
void f473_ConditionalEq(i8* p10090 /* result */, i1 p10091 /* negated */, i8 p10092 /* rhs */, i8 p10093 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p10093; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p10092; /*rhs */
	*(i1*)(intptr_t)(ws+3024) = p10091; /*negated */

	i8 v10094 = (i8)(intptr_t)(ws+3008);
	i8 v10095 = *(i8*)(intptr_t)v10094;
	i8 v10096 = (i8)(intptr_t)(ws+3016);
	i8 v10097 = *(i8*)(intptr_t)v10096;
	i8 v10098 = (i8)(intptr_t)(f460_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v10098)(v10097, v10095);

	i8 v10099 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10100;

	((void(*)(i2* /* label */))(intptr_t)v10099)(&v10100);
	i8 v10101 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v10101 = v10100;

	i8 v10102 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10103;

	((void(*)(i2* /* label */))(intptr_t)v10102)(&v10103);
	i8 v10104 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v10104 = v10103;

	i8 v10105 = (i8)(intptr_t)(ws+3008);
	i8 v10106 = *(i8*)(intptr_t)v10105;
	i8 v10107 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v10108;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10107)(&v10108, v10106);
	i8 v10109 = (i8)(intptr_t)(ws+3044);
	*(i1*)(intptr_t)v10109 = v10108;

	i8 v10110 = (i8)(intptr_t)(ws+3044);
	i1 v10111 = *(i1*)(intptr_t)v10110;
	i8 v10112 = (i8)(intptr_t)(ws+3008);
	i8 v10113 = *(i8*)(intptr_t)v10112;
	i8 v10114 = (i8)(intptr_t)(ws+3016);
	i8 v10115 = *(i8*)(intptr_t)v10114;
	i8 v10116 = (i8)(intptr_t)(ws+3040);
	i2 v10117 = *(i2*)(intptr_t)v10116;
	i8 v10118 = (i8)(intptr_t)(ws+3042);
	i2 v10119 = *(i2*)(intptr_t)v10118;
	i2 v10120 = (i2)+0;
	i8 v10121 = (i8)(intptr_t)(ws+3024);
	i1 v10122 = *(i1*)(intptr_t)v10121;
	i8 v10123 = (i8)(intptr_t)(f114_MidBeq);
	i8 v10124;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10123)(&v10124, v10122, v10120, v10119, v10117, v10115, v10113, v10111);
	i8 v10125 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10125 = v10124;

endsub:;
	*p10090 = *(i8*)(intptr_t)(ws+3032);
}
	void f460_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f213_AllocLabel(i2* /* label */);
	void f213_AllocLabel(i2* /* label */);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f207_IsSNum(i1* /* result */, i8 /* type */);
	void f115_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f102_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3008 length ws+37
void f474_ConditionalLt(i8* p10126 /* result */, i1 p10127 /* negated */, i8 p10128 /* rhs */, i8 p10129 /* lhs */) {
	*(i8*)(intptr_t)(ws+3008) = p10129; /*lhs */
	*(i8*)(intptr_t)(ws+3016) = p10128; /*rhs */
	*(i1*)(intptr_t)(ws+3024) = p10127; /*negated */

	i8 v10130 = (i8)(intptr_t)(ws+3008);
	i8 v10131 = *(i8*)(intptr_t)v10130;
	i8 v10132 = (i8)(intptr_t)(ws+3016);
	i8 v10133 = *(i8*)(intptr_t)v10132;
	i8 v10134 = (i8)(intptr_t)(f460_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v10134)(v10133, v10131);

	i8 v10135 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10136;

	((void(*)(i2* /* label */))(intptr_t)v10135)(&v10136);
	i8 v10137 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v10137 = v10136;

	i8 v10138 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10139;

	((void(*)(i2* /* label */))(intptr_t)v10138)(&v10139);
	i8 v10140 = (i8)(intptr_t)(ws+3042);
	*(i2*)(intptr_t)v10140 = v10139;

	i8 v10141 = (i8)(intptr_t)(ws+3008);
	i8 v10142 = *(i8*)(intptr_t)v10141;
	i8 v10143 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v10144;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10143)(&v10144, v10142);
	i8 v10145 = (i8)(intptr_t)(ws+3044);
	*(i1*)(intptr_t)v10145 = v10144;

	i8 v10146 = (i8)(intptr_t)(ws+3008);
	i8 v10147 = *(i8*)(intptr_t)v10146;
	i8 v10148 = v10147+(+16);
	i8 v10149 = *(i8*)(intptr_t)v10148;
	i8 v10150 = (i8)(intptr_t)(f207_IsSNum);
	i1 v10151;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10150)(&v10151, v10149);
	i1 v10152 = (i1)+0;
	if (v10151==v10152) goto c02_080c; else goto c02_080b;

c02_080b:;

	i8 v10153 = (i8)(intptr_t)(ws+3044);
	i1 v10154 = *(i1*)(intptr_t)v10153;
	i8 v10155 = (i8)(intptr_t)(ws+3008);
	i8 v10156 = *(i8*)(intptr_t)v10155;
	i8 v10157 = (i8)(intptr_t)(ws+3016);
	i8 v10158 = *(i8*)(intptr_t)v10157;
	i8 v10159 = (i8)(intptr_t)(ws+3040);
	i2 v10160 = *(i2*)(intptr_t)v10159;
	i8 v10161 = (i8)(intptr_t)(ws+3042);
	i2 v10162 = *(i2*)(intptr_t)v10161;
	i2 v10163 = (i2)+0;
	i8 v10164 = (i8)(intptr_t)(ws+3024);
	i1 v10165 = *(i1*)(intptr_t)v10164;
	i8 v10166 = (i8)(intptr_t)(f115_MidBlts);
	i8 v10167;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10166)(&v10167, v10165, v10163, v10162, v10160, v10158, v10156, v10154);
	i8 v10168 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10168 = v10167;

	goto c02_0808;

c02_080c:;

	i8 v10169 = (i8)(intptr_t)(ws+3044);
	i1 v10170 = *(i1*)(intptr_t)v10169;
	i8 v10171 = (i8)(intptr_t)(ws+3008);
	i8 v10172 = *(i8*)(intptr_t)v10171;
	i8 v10173 = (i8)(intptr_t)(ws+3016);
	i8 v10174 = *(i8*)(intptr_t)v10173;
	i8 v10175 = (i8)(intptr_t)(ws+3040);
	i2 v10176 = *(i2*)(intptr_t)v10175;
	i8 v10177 = (i8)(intptr_t)(ws+3042);
	i2 v10178 = *(i2*)(intptr_t)v10177;
	i2 v10179 = (i2)+0;
	i8 v10180 = (i8)(intptr_t)(ws+3024);
	i1 v10181 = *(i1*)(intptr_t)v10180;
	i8 v10182 = (i8)(intptr_t)(f102_MidBltu);
	i8 v10183;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10182)(&v10183, v10181, v10179, v10178, v10176, v10174, v10172, v10170);
	i8 v10184 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10184 = v10183;

c02_0808:;

endsub:;
	*p10126 = *(i8*)(intptr_t)(ws+3032);
}
const i1 c02_s017e[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3008 length ws+0
void f475_parser_i_bad_next_prev(void) {

	i8 v10185 = (i8)(intptr_t)c02_s017e;
	i8 v10186 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10186)(v10185);

endsub:;
}
const i1 c02_s017f[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3032 length ws+0
void f476_parser_i_constant_error(void) {

	i8 v10187 = (i8)(intptr_t)c02_s017f;
	i8 v10188 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10188)(v10187);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0180[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0181[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
const i1 c02_s0182[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f60_EndError(void);

// i_check_sub_call_args workspace at ws+3056 length ws+8
void f477_i_check_sub_call_args(void) {

	i8 v10189 = (i8)(intptr_t)(ws+80);
	i8 v10190 = *(i8*)(intptr_t)v10189;
	i8 v10191 = v10190+(+8);
	i8 v10192 = *(i8*)(intptr_t)v10191;
	i8 v10193 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10193 = v10192;

	i8 v10194 = (i8)(intptr_t)(ws+80);
	i8 v10195 = *(i8*)(intptr_t)v10194;
	i8 v10196 = v10195+(+40);
	i1 v10197 = *(i1*)(intptr_t)v10196;
	i8 v10198 = (i8)(intptr_t)(ws+3056);
	i8 v10199 = *(i8*)(intptr_t)v10198;
	i8 v10200 = v10199+(+104);
	i1 v10201 = *(i1*)(intptr_t)v10200;
	if (v10197==v10201) goto c02_0811; else goto c02_0810;

c02_0810:;

	i8 v10202 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10202)();

	i8 v10203 = (i8)(intptr_t)c02_s0180;
	i8 v10204 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10204)(v10203);

	i8 v10205 = (i8)(intptr_t)(ws+3056);
	i8 v10206 = *(i8*)(intptr_t)v10205;
	i8 v10207 = *(i8*)(intptr_t)v10206;
	i8 v10208 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10208)(v10207);

	i8 v10209 = (i8)(intptr_t)c02_s0181;
	i8 v10210 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10210)(v10209);

	i8 v10211 = (i8)(intptr_t)(ws+3056);
	i8 v10212 = *(i8*)(intptr_t)v10211;
	i8 v10213 = v10212+(+104);
	i1 v10214 = *(i1*)(intptr_t)v10213;
	i8 v10215 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v10215)(v10214);

	i8 v10216 = (i8)(intptr_t)c02_s0182;
	i8 v10217 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10217)(v10216);

	i8 v10218 = (i8)(intptr_t)(ws+80);
	i8 v10219 = *(i8*)(intptr_t)v10218;
	i8 v10220 = v10219+(+40);
	i1 v10221 = *(i1*)(intptr_t)v10220;
	i8 v10222 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v10222)(v10221);

	i8 v10223 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10223)();

	goto c02_080d;

c02_0811:;

c02_080d:;

endsub:;
}
	void f183_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f32_Free(i8 /* block */);

// i_end_call workspace at ws+3056 length ws+8
void f478_i_end_call(void) {

	i8 v10224 = (i8)(intptr_t)(ws+40);
	i8 v10225 = *(i8*)(intptr_t)v10224;
	i8 v10226 = (i8)(intptr_t)(ws+80);
	i8 v10227 = *(i8*)(intptr_t)v10226;
	i8 v10228 = v10227+(+8);
	i8 v10229 = *(i8*)(intptr_t)v10228;
	i8 v10230 = (i8)(intptr_t)(f183_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v10230)(v10229, v10225);

	i8 v10231 = (i8)(intptr_t)(ws+80);
	i8 v10232 = *(i8*)(intptr_t)v10231;
	i8 v10233 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10233 = v10232;

	i8 v10234 = (i8)(intptr_t)(ws+3056);
	i8 v10235 = *(i8*)(intptr_t)v10234;
	i8 v10236 = v10235+(+16);
	i8 v10237 = *(i8*)(intptr_t)v10236;
	i8 v10238 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v10238 = v10237;

	i8 v10239 = (i8)(intptr_t)(ws+3056);
	i8 v10240 = *(i8*)(intptr_t)v10239;
	i8 v10241 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10241)(v10240);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0183[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// SymbolRedeclarationError workspace at ws+3008 length ws+0
void f479_SymbolRedeclarationError(void) {

	i8 v10242 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10242)();

	i8 v10243 = (i8)(intptr_t)c02_s0183;
	i8 v10244 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10244)(v10243);

	i8 v10245 = (i8)(intptr_t)(ws+72);
	i8 v10246 = *(i8*)(intptr_t)v10245;
	i8 v10247 = v10246+(+48);
	i8 v10248 = *(i8*)(intptr_t)v10247;
	i8 v10249 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10249)(v10248);

	i8 v10250 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10250)();

endsub:;
}
	void f59_StartError(void);
const i1 c02_s0184[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// WrongNumberOfElementsError workspace at ws+3048 length ws+0
void f480_WrongNumberOfElementsError(void) {

	i8 v10251 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10251)();

	i8 v10252 = (i8)(intptr_t)c02_s0184;
	i8 v10253 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10253)(v10252);

	i8 v10254 = (i8)(intptr_t)(ws+72);
	i8 v10255 = *(i8*)(intptr_t)v10254;
	i8 v10256 = v10255+(+48);
	i8 v10257 = *(i8*)(intptr_t)v10256;
	i8 v10258 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10258)(v10257);

	i8 v10259 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10259)();

endsub:;
}
	void f203_IsArray(i1* /* result */, i8 /* type */);
	void f220_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f480_WrongNumberOfElementsError(void);
	void f480_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3008 length ws+4
void f481_CheckEndOfInitialiser(void) {

	i8 v10260 = (i8)(intptr_t)(ws+72);
	i8 v10261 = *(i8*)(intptr_t)v10260;
	i8 v10262 = (i8)(intptr_t)(f203_IsArray);
	i1 v10263;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10262)(&v10263, v10261);
	i1 v10264 = (i1)+0;
	if (v10263==v10264) goto c02_0816; else goto c02_0815;

c02_0815:;

	i8 v10265 = (i8)(intptr_t)(ws+72);
	i8 v10266 = *(i8*)(intptr_t)v10265;
	i8 v10267 = *(i8*)(intptr_t)v10266;
	i8 v10268 = v10267+(+44);
	i2 v10269 = *(i2*)(intptr_t)v10268;
	i8 v10270 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v10270 = v10269;

	i8 v10271 = (i8)(intptr_t)(ws+72);
	i8 v10272 = *(i8*)(intptr_t)v10271;
	i8 v10273 = v10272+(+42);
	i2 v10274 = *(i2*)(intptr_t)v10273;
	i2 v10275 = (i2)+0;
	if (v10274==v10275) goto c02_081a; else goto c02_081b;

c02_081a:;

	i8 v10276 = (i8)(intptr_t)(ws+1240);
	i2 v10277 = *(i2*)(intptr_t)v10276;
	i8 v10278 = (i8)(intptr_t)(ws+72);
	i8 v10279 = *(i8*)(intptr_t)v10278;
	i8 v10280 = v10279+(+42);
	*(i2*)(intptr_t)v10280 = v10277;

	i8 v10281 = (i8)(intptr_t)(ws+1240);
	i2 v10282 = *(i2*)(intptr_t)v10281;
	i8 v10283 = (i8)(intptr_t)(ws+3008);
	i2 v10284 = *(i2*)(intptr_t)v10283;
	i2 v10285 = v10282/v10284;
	i8 v10286 = (i8)(intptr_t)(ws+3010);
	*(i2*)(intptr_t)v10286 = v10285;

	i8 v10287 = (i8)(intptr_t)(ws+3010);
	i2 v10288 = *(i2*)(intptr_t)v10287;
	i8 v10289 = (i8)(intptr_t)(ws+72);
	i8 v10290 = *(i8*)(intptr_t)v10289;
	i8 v10291 = v10290+(+8);
	*(i2*)(intptr_t)v10291 = v10288;

	i4 v10292 = (i4)+0;
	i8 v10293 = (i8)(intptr_t)(ws+3010);
	i2 v10294 = *(i2*)(intptr_t)v10293;
	i2 v10295 = v10294+(-1);
	i4 v10296 = v10295;
	i8 v10297 = (i8)(intptr_t)(f220_ArchGuessIntType);
	i8 v10298;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v10297)(&v10298, v10296, v10292);
	i8 v10299 = (i8)(intptr_t)(ws+72);
	i8 v10300 = *(i8*)(intptr_t)v10299;
	i8 v10301 = v10300+(+16);
	*(i8*)(intptr_t)v10301 = v10298;

	goto c02_0817;

c02_081b:;

c02_0817:;

	i8 v10302 = (i8)(intptr_t)(ws+1240);
	i2 v10303 = *(i2*)(intptr_t)v10302;
	i8 v10304 = (i8)(intptr_t)(ws+72);
	i8 v10305 = *(i8*)(intptr_t)v10304;
	i8 v10306 = v10305+(+42);
	i2 v10307 = *(i2*)(intptr_t)v10306;
	if (v10303==v10307) goto c02_0820; else goto c02_081f;

c02_081f:;

	i8 v10308 = (i8)(intptr_t)(f480_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10308)();

	goto c02_081c;

c02_0820:;

c02_081c:;

	goto c02_0812;

c02_0816:;

	i8 v10309 = (i8)(intptr_t)(ws+1232);
	i8 v10310 = *(i8*)(intptr_t)v10309;
	i8 v10311 = (i8)+0;
	if (v10310==v10311) goto c02_0825; else goto c02_0824;

c02_0824:;

	i8 v10312 = (i8)(intptr_t)(f480_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10312)();

	goto c02_0821;

c02_0825:;

c02_0821:;

c02_0812:;

endsub:;
}
	void f203_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3048 length ws+16
void f482_GetInitedMember(i8* p10313 /* member */, i8* p10314 /* type */) {

	i8 v10315 = (i8)+0;
	i8 v10316 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v10316 = v10315;

	i8 v10317 = (i8)(intptr_t)(ws+72);
	i8 v10318 = *(i8*)(intptr_t)v10317;
	i8 v10319 = (i8)(intptr_t)(f203_IsArray);
	i1 v10320;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10319)(&v10320, v10318);
	i1 v10321 = (i1)+0;
	if (v10320==v10321) goto c02_082a; else goto c02_0829;

c02_0829:;

	i8 v10322 = (i8)(intptr_t)(ws+72);
	i8 v10323 = *(i8*)(intptr_t)v10322;
	i8 v10324 = *(i8*)(intptr_t)v10323;
	i8 v10325 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10325 = v10324;

	goto c02_0826;

c02_082a:;

	i8 v10326 = (i8)(intptr_t)(ws+1232);
	i8 v10327 = *(i8*)(intptr_t)v10326;
	i8 v10328 = (i8)+0;
	if (v10327==v10328) goto c02_082e; else goto c02_082f;

c02_082e:;

	i8 v10329 = (i8)+0;
	i8 v10330 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10330 = v10329;

	goto endsub;

c02_082f:;

c02_082b:;

	i8 v10331 = (i8)(intptr_t)(ws+1232);
	i8 v10332 = *(i8*)(intptr_t)v10331;
	i8 v10333 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v10333 = v10332;

	i8 v10334 = (i8)(intptr_t)(ws+1232);
	i8 v10335 = *(i8*)(intptr_t)v10334;
	i8 v10336 = *(i8*)(intptr_t)v10335;
	i8 v10337 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v10337 = v10336;

	i8 v10338 = (i8)(intptr_t)(ws+1232);
	i8 v10339 = *(i8*)(intptr_t)v10338;
	i8 v10340 = v10339+(+56);
	i8 v10341 = *(i8*)(intptr_t)v10340;
	i8 v10342 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v10342 = v10341;

c02_0826:;

endsub:;
	*p10314 = *(i8*)(intptr_t)(ws+3056);
	*p10313 = *(i8*)(intptr_t)(ws+3048);
}
	void f218_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f93_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f443_Generate(i8 /* statement */);

// AlignTo workspace at ws+3048 length ws+4
void f483_AlignTo(i1 p10343 /* alignment */) {
	*(i1*)(intptr_t)(ws+3048) = p10343; /*alignment */

	i8 v10344 = (i8)(intptr_t)(ws+1242);
	i2 v10345 = *(i2*)(intptr_t)v10344;
	i8 v10346 = (i8)(intptr_t)(ws+3048);
	i1 v10347 = *(i1*)(intptr_t)v10346;
	i8 v10348 = (i8)(intptr_t)(f218_ArchAlignUp);
	i2 v10349;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v10348)(&v10349, v10347, v10345);
	i8 v10350 = (i8)(intptr_t)(ws+3050);
	*(i2*)(intptr_t)v10350 = v10349;

c02_0832:;

	i8 v10351 = (i8)(intptr_t)(ws+1242);
	i2 v10352 = *(i2*)(intptr_t)v10351;
	i8 v10353 = (i8)(intptr_t)(ws+3050);
	i2 v10354 = *(i2*)(intptr_t)v10353;
	if (v10352==v10354) goto c02_0835; else goto c02_0834;

c02_0834:;

	i1 v10355 = (i1)+1;
	i4 v10356 = (i4)+0;
	i8 v10357 = (i8)(intptr_t)(f93_MidInit);
	i8 v10358;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v10357)(&v10358, v10356, v10355);
	i8 v10359 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10359)(v10358);

	i8 v10360 = (i8)(intptr_t)(ws+1240);
	i2 v10361 = *(i2*)(intptr_t)v10360;
	i2 v10362 = v10361+(+1);
	i8 v10363 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v10363 = v10362;

	i8 v10364 = (i8)(intptr_t)(ws+1242);
	i2 v10365 = *(i2*)(intptr_t)v10364;
	i2 v10366 = v10365+(+1);
	i8 v10367 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v10367 = v10366;

	goto c02_0832;

c02_0835:;

endsub:;
}
const i1 c02_s0185[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f61_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3048 length ws+8
void f484_CheckForOverlaps(i8 p10368 /* member */) {
	*(i8*)(intptr_t)(ws+3048) = p10368; /*member */

	i8 v10369 = (i8)(intptr_t)(ws+3048);
	i8 v10370 = *(i8*)(intptr_t)v10369;
	i8 v10371 = (i8)+0;
	if (v10370==v10371) goto c02_0839; else goto c02_083a;

c02_0839:;

	goto endsub;

c02_083a:;

c02_0836:;

	i8 v10372 = (i8)(intptr_t)(ws+3048);
	i8 v10373 = *(i8*)(intptr_t)v10372;
	i8 v10374 = v10373+(+32);
	i2 v10375 = *(i2*)(intptr_t)v10374;
	i8 v10376 = (i8)(intptr_t)(ws+1240);
	i2 v10377 = *(i2*)(intptr_t)v10376;
	if (v10375<v10377) goto c02_083e; else goto c02_083f;

c02_083e:;

	i8 v10378 = (i8)(intptr_t)c02_s0185;
	i8 v10379 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10379)(v10378);

	goto c02_083b;

c02_083f:;

c02_083b:;

endsub:;
}
	void f482_GetInitedMember(i8* /* member */, i8* /* type */);
	void f480_WrongNumberOfElementsError(void);
	void f483_AlignTo(i1 /* alignment */);
	void f484_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3032 length ws+16
void f485_GetInitedMemberChecked(i8* p10380 /* member */, i8* p10381 /* type */) {

	i8 v10382 = (i8)(intptr_t)(f482_GetInitedMember);
	i8 v10383;
	i8 v10384;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v10382)(&v10383, &v10384);

	i8 v10385 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v10385 = v10384;

	i8 v10386 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v10386 = v10383;

	i8 v10387 = (i8)(intptr_t)(ws+3040);
	i8 v10388 = *(i8*)(intptr_t)v10387;
	i8 v10389 = (i8)+0;
	if (v10388==v10389) goto c02_0843; else goto c02_0844;

c02_0843:;

	i8 v10390 = (i8)(intptr_t)(f480_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v10390)();

	goto c02_0840;

c02_0844:;

c02_0840:;

	i8 v10391 = (i8)(intptr_t)(ws+3040);
	i8 v10392 = *(i8*)(intptr_t)v10391;
	i8 v10393 = v10392+(+41);
	i1 v10394 = *(i1*)(intptr_t)v10393;
	i8 v10395 = (i8)(intptr_t)(f483_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v10395)(v10394);

	i8 v10396 = (i8)(intptr_t)(ws+3032);
	i8 v10397 = *(i8*)(intptr_t)v10396;
	i8 v10398 = (i8)(intptr_t)(f484_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v10398)(v10397);

endsub:;
	*p10381 = *(i8*)(intptr_t)(ws+3040);
	*p10380 = *(i8*)(intptr_t)(ws+3032);
}
static data c02_a845[] = { // yy_action




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
static data c02_a846[] = { // yy_lookahead








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
static data c02_a847[] = { // yy_shift_ofst




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
static data c02_a848[] = { // yy_reduce_ofst




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
static data c02_a849[] = { // yy_default




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
const i1 c02_s0186[] = { 0x24,0 };
const i1 c02_s0187[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s0188[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s0189[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s018a[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s018b[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s018c[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s018d[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s018e[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s018f[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s0190[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s0191[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s0192[] = { 0x49,0x46,0 };
const i1 c02_s0193[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s0194[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s0195[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s0196[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0197[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s0198[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s0199[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s019a[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s019b[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s019c[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s019d[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s019e[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s019f[] = { 0x53,0x55,0x42,0 };
const i1 c02_s01a0[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s01a1[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s01a2[] = { 0x56,0x41,0x52,0 };
const i1 c02_s01a3[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s01a4[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s01a5[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s01a6[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s01a7[] = { 0x49,0x44,0 };
const i1 c02_s01a8[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s01a9[] = { 0x41,0x54,0 };
const i1 c02_s01aa[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s01ab[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s01ac[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s01ad[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s01ae[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s01af[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s01b0[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s01b1[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s01b2[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s01b3[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s01b4[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s01b5[] = { 0x4f,0x52,0 };
const i1 c02_s01b6[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s01b7[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s01b8[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s01b9[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s01ba[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s01bb[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s01bc[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s01bd[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s01be[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01bf[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s01c0[] = { 0x41,0x53,0 };
const i1 c02_s01c1[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s01c2[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s01c3[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s01c4[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s01c5[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s01c6[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s01c7[] = { 0x49,0x53,0 };
const i1 c02_s01c8[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s01c9[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s01ca[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data c02_a84a[] = { // yyTokenName

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

	{ .ptr = (void*)c02_s01c4 },

	{ .ptr = (void*)c02_s01c5 },

	{ .ptr = (void*)c02_s01c6 },

	{ .ptr = (void*)c02_s01c7 },

	{ .ptr = (void*)c02_s01c8 },

	{ .ptr = (void*)c02_s01c9 },

	{ .ptr = (void*)c02_s01ca },

};
const i1 c02_s01cb[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f32_Free(i8 /* block */);

// token_destructor workspace at ws+3072 length ws+0
void f487_token_destructor(void) {

	i8 v10401 = (i8)(intptr_t)(ws+3056);
	i1 v10402 = *(i1*)(intptr_t)v10401;
	i1 v10403 = (i1)+41;
	if (v10402==v10403) goto c02_0850; else goto c02_0852;

c02_0852:;

	i8 v10404 = (i8)(intptr_t)(ws+3056);
	i1 v10405 = *(i1*)(intptr_t)v10404;
	i1 v10406 = (i1)+33;
	if (v10405==v10406) goto c02_0850; else goto c02_0851;

c02_0850:;

	i8 v10407 = (i8)(intptr_t)c02_s01cb;
	i8 v10408 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10408)(v10407);

	i8 v10409 = (i8)(intptr_t)(ws+3064);
	i8 v10410 = *(i8*)(intptr_t)v10409;
	i8 v10411 = *(i8*)(intptr_t)v10410;
	i8 v10412 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10412)(v10411);

	goto c02_084b;

c02_0851:;

c02_084b:;

endsub:;
}
	void f487_token_destructor(void);

// yy_destructor workspace at ws+3056 length ws+16
void f486_yy_destructor(i8 p10399 /* yypminor */, i1 p10400 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3056) = p10400; /*yymajor */
	*(i8*)(intptr_t)(ws+3064) = p10399; /*yypminor */


	i8 v10413 = (i8)(intptr_t)(ws+3056);
	i1 v10414 = *(i1*)(intptr_t)v10413;
	i1 v10415 = (i1)+0;
	if (v10414==v10415) goto c02_0859; else goto c02_085a;

c02_085a:;

	i8 v10416 = (i8)(intptr_t)(ws+3056);
	i1 v10417 = *(i1*)(intptr_t)v10416;
	i1 v10418 = (i1)+69;
	if (v10417<v10418) goto c02_0858; else goto c02_0859;

c02_0858:;

	i8 v10419 = (i8)(intptr_t)(f487_token_destructor);

	((void(*)(void))(intptr_t)v10419)();

	goto c02_0853;

c02_0859:;

c02_0853:;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3008 length ws+0
void f488_yy_pop_parser_stack(void) {

	i8 v10420 = (i8)(intptr_t)(ws+1248);
	i8 v10421 = *(i8*)(intptr_t)v10420;
	i8 v10422 = v10421+(-16);
	i8 v10423 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v10423 = v10422;

	i8 v10424 = (i8)(intptr_t)(ws+1248);
	i8 v10425 = *(i8*)(intptr_t)v10424;
	i8 v10426 = v10425+(+2);
	i1 v10427 = *(i1*)(intptr_t)v10426;
	i8 v10428 = (i8)(intptr_t)(ws+1248);
	i8 v10429 = *(i8*)(intptr_t)v10428;
	i8 v10430 = v10429+(+8);
	i8 v10431 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10431)(v10430, v10427);

endsub:;
}
	void f488_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3008 length ws+0
void f489_yy_pop_all_parser_stack(void) {

c02_085d:;

	i8 v10432 = (i8)(intptr_t)(ws+1248);
	i8 v10433 = *(i8*)(intptr_t)v10432;
	i8 v10434 = (i8)(intptr_t)(ws+1256);
	if (v10433==v10434) goto c02_0860; else goto c02_085f;

c02_085f:;

	i8 v10435 = (i8)(intptr_t)(f488_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10435)();

	goto c02_085d;

c02_0860:;

endsub:;
}
	void f489_yy_pop_all_parser_stack(void);
	void f59_StartError(void);
const i1 c02_s01cc[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// yy_stack_overflow workspace at ws+3008 length ws+0
void f490_yy_stack_overflow(void) {

	i8 v10436 = (i8)(intptr_t)(f489_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v10436)();

	i8 v10437 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v10437)();

	i8 v10438 = (i8)(intptr_t)c02_s01cc;
	i8 v10439 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10439)(v10438);

	i8 v10440 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v10440)();

endsub:;
}
static data c02_a861[] = { // yyRuleInfoLhs








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
static data c02_a862[] = { // yyRuleInfoNRhs








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
	void f490_yy_stack_overflow(void);
	void f97_MidReturn(i8* /* m */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3008 length ws+0
void f493_reduce_0(void) {

	i8 v10506 = (i8)(intptr_t)(f97_MidReturn);
	i8 v10507;

	((void(*)(i8* /* m */))(intptr_t)v10506)(&v10507);
	i8 v10508 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10508)(v10507);

	i1 v10509 = (i1)+22;
	i8 v10510 = (i8)(intptr_t)(ws+2928);
	i8 v10511 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10511)(v10510, v10509);

endsub:;
}
	void f446_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3008 length ws+0
void f494_reduce_1(void) {

	i1 v10512 = (i1)+28;
	i8 v10513 = (i8)(intptr_t)(ws+2952);
	i8 v10514 = *(i8*)(intptr_t)v10513;
	i8 v10515 = v10514+(+46);
	*(i1*)(intptr_t)v10515 = v10512;

	i8 v10516 = (i8)(intptr_t)(ws+40);
	i8 v10517 = *(i8*)(intptr_t)v10516;
	i8 v10518 = (i8)(intptr_t)(ws+2952);
	i8 v10519 = *(i8*)(intptr_t)v10518;
	i8 v10520 = (i8)(intptr_t)(ws+2936);
	i8 v10521 = *(i8*)(intptr_t)v10520;
	i8 v10522 = (i8)(intptr_t)(f446_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10522)(v10521, v10519, v10517);

	i1 v10523 = (i1)+6;
	i8 v10524 = (i8)(intptr_t)(ws+2944);
	i8 v10525 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10525)(v10524, v10523);

	i1 v10526 = (i1)+22;
	i8 v10527 = (i8)(intptr_t)(ws+2928);
	i8 v10528 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10528)(v10527, v10526);

endsub:;
}
	void f446_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f91_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3008 length ws+0
void f495_reduce_2(void) {

	i1 v10529 = (i1)+28;
	i8 v10530 = (i8)(intptr_t)(ws+2968);
	i8 v10531 = *(i8*)(intptr_t)v10530;
	i8 v10532 = v10531+(+46);
	*(i1*)(intptr_t)v10532 = v10529;

	i8 v10533 = (i8)(intptr_t)(ws+40);
	i8 v10534 = *(i8*)(intptr_t)v10533;
	i8 v10535 = (i8)(intptr_t)(ws+2968);
	i8 v10536 = *(i8*)(intptr_t)v10535;
	i8 v10537 = (i8)(intptr_t)(ws+2952);
	i8 v10538 = *(i8*)(intptr_t)v10537;
	i8 v10539 = (i8)(intptr_t)(f446_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10539)(v10538, v10536, v10534);

	i8 v10540 = (i8)(intptr_t)(ws+2936);
	i8 v10541 = *(i8*)(intptr_t)v10540;
	i8 v10542 = (i8)(intptr_t)(ws+2968);
	i8 v10543 = *(i8*)(intptr_t)v10542;
	i8 v10544 = *(i8*)(intptr_t)v10543;
	i8 v10545 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10545)(v10544, v10541);

	i8 v10546 = (i8)(intptr_t)(ws+2936);
	i8 v10547 = *(i8*)(intptr_t)v10546;
	i8 v10548 = v10547+(+16);
	i8 v10549 = *(i8*)(intptr_t)v10548;
	i8 v10550 = v10549+(+42);
	i2 v10551 = *(i2*)(intptr_t)v10550;
	i1 v10552 = v10551;
	i8 v10553 = (i8)(intptr_t)(ws+2936);
	i8 v10554 = *(i8*)(intptr_t)v10553;
	i8 v10555 = (i8)(intptr_t)(ws+2968);
	i8 v10556 = *(i8*)(intptr_t)v10555;
	i2 v10557 = (i2)+0;
	i8 v10558 = (i8)(intptr_t)(f91_MidAddress);
	i8 v10559;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10558)(&v10559, v10557, v10556);
	i8 v10560 = (i8)(intptr_t)(f106_MidStore);
	i8 v10561;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10560)(&v10561, v10559, v10554, v10552);
	i8 v10562 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10562)(v10561);

	i1 v10563 = (i1)+6;
	i8 v10564 = (i8)(intptr_t)(ws+2960);
	i8 v10565 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10565)(v10564, v10563);

	i1 v10566 = (i1)+2;
	i8 v10567 = (i8)(intptr_t)(ws+2944);
	i8 v10568 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10568)(v10567, v10566);

	i1 v10569 = (i1)+22;
	i8 v10570 = (i8)(intptr_t)(ws+2928);
	i8 v10571 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10571)(v10570, v10569);

endsub:;
}
const i1 c02_s01cf[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f208_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s01d0[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f446_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f91_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3008 length ws+8
void f496_reduce_3(void) {

	i8 v10572 = (i8)(intptr_t)(ws+2936);
	i8 v10573 = *(i8*)(intptr_t)v10572;
	i8 v10574 = v10573+(+16);
	i8 v10575 = *(i8*)(intptr_t)v10574;
	i8 v10576 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10576 = v10575;

	i8 v10577 = (i8)(intptr_t)(ws+3008);
	i8 v10578 = *(i8*)(intptr_t)v10577;
	i8 v10579 = (i8)+0;
	if (v10578==v10579) goto c02_0871; else goto c02_0872;

c02_0871:;

	i8 v10580 = (i8)(intptr_t)c02_s01cf;
	i8 v10581 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10581)(v10580);

	goto c02_086e;

c02_0872:;

c02_086e:;

	i8 v10582 = (i8)(intptr_t)(ws+3008);
	i8 v10583 = *(i8*)(intptr_t)v10582;
	i8 v10584 = (i8)(intptr_t)(f208_IsScalar);
	i1 v10585;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10584)(&v10585, v10583);
	i1 v10586 = (i1)+0;
	if (v10585==v10586) goto c02_0876; else goto c02_0877;

c02_0876:;

	i8 v10587 = (i8)(intptr_t)c02_s01d0;
	i8 v10588 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10588)(v10587);

	goto c02_0873;

c02_0877:;

c02_0873:;

	i1 v10589 = (i1)+28;
	i8 v10590 = (i8)(intptr_t)(ws+2952);
	i8 v10591 = *(i8*)(intptr_t)v10590;
	i8 v10592 = v10591+(+46);
	*(i1*)(intptr_t)v10592 = v10589;

	i8 v10593 = (i8)(intptr_t)(ws+40);
	i8 v10594 = *(i8*)(intptr_t)v10593;
	i8 v10595 = (i8)(intptr_t)(ws+2952);
	i8 v10596 = *(i8*)(intptr_t)v10595;
	i8 v10597 = (i8)(intptr_t)(ws+3008);
	i8 v10598 = *(i8*)(intptr_t)v10597;
	i8 v10599 = (i8)(intptr_t)(f446_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v10599)(v10598, v10596, v10594);

	i8 v10600 = (i8)(intptr_t)(ws+2936);
	i8 v10601 = *(i8*)(intptr_t)v10600;
	i8 v10602 = (i8)(intptr_t)(ws+2952);
	i8 v10603 = *(i8*)(intptr_t)v10602;
	i8 v10604 = *(i8*)(intptr_t)v10603;
	i8 v10605 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10605)(v10604, v10601);

	i8 v10606 = (i8)(intptr_t)(ws+2936);
	i8 v10607 = *(i8*)(intptr_t)v10606;
	i8 v10608 = v10607+(+16);
	i8 v10609 = *(i8*)(intptr_t)v10608;
	i8 v10610 = v10609+(+42);
	i2 v10611 = *(i2*)(intptr_t)v10610;
	i1 v10612 = v10611;
	i8 v10613 = (i8)(intptr_t)(ws+2936);
	i8 v10614 = *(i8*)(intptr_t)v10613;
	i8 v10615 = (i8)(intptr_t)(ws+2952);
	i8 v10616 = *(i8*)(intptr_t)v10615;
	i2 v10617 = (i2)+0;
	i8 v10618 = (i8)(intptr_t)(f91_MidAddress);
	i8 v10619;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v10618)(&v10619, v10617, v10616);
	i8 v10620 = (i8)(intptr_t)(f106_MidStore);
	i8 v10621;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10620)(&v10621, v10619, v10614, v10612);
	i8 v10622 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10622)(v10621);

	i1 v10623 = (i1)+2;
	i8 v10624 = (i8)(intptr_t)(ws+2944);
	i8 v10625 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10625)(v10624, v10623);

	i1 v10626 = (i1)+22;
	i8 v10627 = (i8)(intptr_t)(ws+2928);
	i8 v10628 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10628)(v10627, v10626);

endsub:;
}
	void f211_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3008 length ws+16
void f497_reduce_4(void) {

	i8 v10629 = (i8)(intptr_t)(ws+2952);
	i8 v10630 = *(i8*)(intptr_t)v10629;
	i8 v10631 = v10630+(+16);
	i8 v10632 = *(i8*)(intptr_t)v10631;
	i8 v10633 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10633 = v10632;

	i8 v10634 = (i8)(intptr_t)(ws+2952);
	i8 v10635 = *(i8*)(intptr_t)v10634;
	i8 v10636 = (i8)(intptr_t)(f211_UndoLValue);
	i8 v10637;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v10636)(&v10637, v10635);
	i8 v10638 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v10638 = v10637;

	i8 v10639 = (i8)(intptr_t)(ws+2936);
	i8 v10640 = *(i8*)(intptr_t)v10639;
	i8 v10641 = (i8)(intptr_t)(ws+3008);
	i8 v10642 = *(i8*)(intptr_t)v10641;
	i8 v10643 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v10643)(v10642, v10640);

	i8 v10644 = (i8)(intptr_t)(ws+3008);
	i8 v10645 = *(i8*)(intptr_t)v10644;
	i8 v10646 = v10645+(+42);
	i2 v10647 = *(i2*)(intptr_t)v10646;
	i1 v10648 = v10647;
	i8 v10649 = (i8)(intptr_t)(ws+2936);
	i8 v10650 = *(i8*)(intptr_t)v10649;
	i8 v10651 = (i8)(intptr_t)(ws+3016);
	i8 v10652 = *(i8*)(intptr_t)v10651;
	i8 v10653 = (i8)(intptr_t)(f106_MidStore);
	i8 v10654;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v10653)(&v10654, v10652, v10650, v10648);
	i8 v10655 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10655)(v10654);

	i1 v10656 = (i1)+2;
	i8 v10657 = (i8)(intptr_t)(ws+2944);
	i8 v10658 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10658)(v10657, v10656);

	i1 v10659 = (i1)+22;
	i8 v10660 = (i8)(intptr_t)(ws+2928);
	i8 v10661 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10661)(v10660, v10659);

endsub:;
}
	void f471_TerminateNormalLoop(i8 /* ll */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3008 length ws+0
void f498_reduce_5(void) {

	i8 v10662 = (i8)(intptr_t)(ws+2952);
	i8 v10663 = *(i8*)(intptr_t)v10662;
	i8 v10664 = (i8)(intptr_t)(f471_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v10664)(v10663);

	i1 v10665 = (i1)+10;
	i8 v10666 = (i8)(intptr_t)(ws+2936);
	i8 v10667 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10667)(v10666, v10665);

	i1 v10668 = (i1)+13;
	i8 v10669 = (i8)(intptr_t)(ws+2928);
	i8 v10670 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10670)(v10669, v10668);

endsub:;
}
	void f470_BeginNormalLoop(i8* /* ll */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3008 length ws+0
void f499_reduce_6(void) {

	i8 v10671 = (i8)(intptr_t)(f470_BeginNormalLoop);
	i8 v10672;

	((void(*)(i8* /* ll */))(intptr_t)v10671)(&v10672);
	i8 v10673 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10673 = v10672;

	i8 v10674 = (i8)(intptr_t)(ws+54);
	i2 v10675 = *(i2*)(intptr_t)v10674;
	i8 v10676 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10677;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10676)(&v10677, v10675);
	i8 v10678 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10678)(v10677);

endsub:;
}
	void f471_TerminateNormalLoop(i8 /* ll */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3008 length ws+0
void f500_reduce_7(void) {

	i8 v10679 = (i8)(intptr_t)(ws+2952);
	i8 v10680 = *(i8*)(intptr_t)v10679;
	i8 v10681 = (i8)(intptr_t)(f471_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v10681)(v10680);

	i1 v10682 = (i1)+10;
	i8 v10683 = (i8)(intptr_t)(ws+2936);
	i8 v10684 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10684)(v10683, v10682);

	i1 v10685 = (i1)+13;
	i8 v10686 = (i8)(intptr_t)(ws+2928);
	i8 v10687 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10687)(v10686, v10685);

endsub:;
}
	void f470_BeginNormalLoop(i8* /* ll */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f213_AllocLabel(i2* /* label */);
	void f213_AllocLabel(i2* /* label */);
	void f444_GenerateConditional(i8 /* rootnode */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3008 length ws+2
void f501_reduce_8(void) {

	i8 v10688 = (i8)(intptr_t)(f470_BeginNormalLoop);
	i8 v10689;

	((void(*)(i8* /* ll */))(intptr_t)v10688)(&v10689);
	i8 v10690 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v10690 = v10689;

	i8 v10691 = (i8)(intptr_t)(ws+54);
	i2 v10692 = *(i2*)(intptr_t)v10691;
	i8 v10693 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10694;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10693)(&v10694, v10692);
	i8 v10695 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10695)(v10694);

	i8 v10696 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10697;

	((void(*)(i2* /* label */))(intptr_t)v10696)(&v10697);
	i8 v10698 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v10698 = v10697;

	i8 v10699 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10700;

	((void(*)(i2* /* label */))(intptr_t)v10699)(&v10700);
	i8 v10701 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v10701 = v10700;

	i8 v10702 = (i8)(intptr_t)(ws+3008);
	i2 v10703 = *(i2*)(intptr_t)v10702;
	i8 v10704 = (i8)(intptr_t)(ws+2936);
	i8 v10705 = *(i8*)(intptr_t)v10704;
	*(i2*)(intptr_t)v10705 = v10703;

	i8 v10706 = (i8)(intptr_t)(ws+52);
	i2 v10707 = *(i2*)(intptr_t)v10706;
	i8 v10708 = (i8)(intptr_t)(ws+2936);
	i8 v10709 = *(i8*)(intptr_t)v10708;
	i8 v10710 = v10709+(+2);
	*(i2*)(intptr_t)v10710 = v10707;

	i8 v10711 = (i8)(intptr_t)(ws+3008);
	i2 v10712 = *(i2*)(intptr_t)v10711;
	i8 v10713 = (i8)(intptr_t)(ws+2936);
	i8 v10714 = *(i8*)(intptr_t)v10713;
	i8 v10715 = v10714+(+4);
	*(i2*)(intptr_t)v10715 = v10712;

	i8 v10716 = (i8)(intptr_t)(ws+2936);
	i8 v10717 = *(i8*)(intptr_t)v10716;
	i8 v10718 = (i8)(intptr_t)(f444_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v10718)(v10717);

	i8 v10719 = (i8)(intptr_t)(ws+52);
	i2 v10720 = *(i2*)(intptr_t)v10719;
	i8 v10721 = (i8)(intptr_t)(ws+2920);
	i8 v10722 = *(i8*)(intptr_t)v10721;
	i8 v10723 = v10722+(+2);
	*(i2*)(intptr_t)v10723 = v10720;

	i1 v10724 = (i1)+13;
	i8 v10725 = (i8)(intptr_t)(ws+2928);
	i8 v10726 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10726)(v10725, v10724);

endsub:;
}
const i1 c02_s01d1[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f61_SimpleError(i8 /* message */);
	void f119_MidJump(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3008 length ws+0
void f502_reduce_9(void) {

	i8 v10727 = (i8)(intptr_t)(ws+52);
	i2 v10728 = *(i2*)(intptr_t)v10727;
	i2 v10729 = (i2)+0;
	if (v10728==v10729) goto c02_087b; else goto c02_087c;

c02_087b:;

	i8 v10730 = (i8)(intptr_t)c02_s01d1;
	i8 v10731 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10731)(v10730);

	goto c02_0878;

c02_087c:;

c02_0878:;

	i8 v10732 = (i8)(intptr_t)(ws+52);
	i2 v10733 = *(i2*)(intptr_t)v10732;
	i8 v10734 = (i8)(intptr_t)(f119_MidJump);
	i8 v10735;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10734)(&v10735, v10733);
	i8 v10736 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10736)(v10735);

	i1 v10737 = (i1)+22;
	i8 v10738 = (i8)(intptr_t)(ws+2928);
	i8 v10739 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10739)(v10738, v10737);

endsub:;
}
const i1 c02_s01d2[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f61_SimpleError(i8 /* message */);
	void f119_MidJump(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3008 length ws+0
void f503_reduce_10(void) {

	i8 v10740 = (i8)(intptr_t)(ws+54);
	i2 v10741 = *(i2*)(intptr_t)v10740;
	i2 v10742 = (i2)+0;
	if (v10741==v10742) goto c02_0880; else goto c02_0881;

c02_0880:;

	i8 v10743 = (i8)(intptr_t)c02_s01d2;
	i8 v10744 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10744)(v10743);

	goto c02_087d;

c02_0881:;

c02_087d:;

	i8 v10745 = (i8)(intptr_t)(ws+54);
	i2 v10746 = *(i2*)(intptr_t)v10745;
	i8 v10747 = (i8)(intptr_t)(f119_MidJump);
	i8 v10748;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10747)(&v10748, v10746);
	i8 v10749 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10749)(v10748);

	i1 v10750 = (i1)+22;
	i8 v10751 = (i8)(intptr_t)(ws+2928);
	i8 v10752 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10752)(v10751, v10750);

endsub:;
}
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3008 length ws+8
void f504_reduce_11(void) {

	i8 v10753 = (i8)(intptr_t)(ws+56);
	i8 v10754 = *(i8*)(intptr_t)v10753;
	i2 v10755 = *(i2*)(intptr_t)v10754;
	i8 v10756 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10757;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10756)(&v10757, v10755);
	i8 v10758 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10758)(v10757);

	i8 v10759 = (i8)(intptr_t)(ws+56);
	i8 v10760 = *(i8*)(intptr_t)v10759;
	i8 v10761 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10761 = v10760;

	i8 v10762 = (i8)(intptr_t)(ws+56);
	i8 v10763 = *(i8*)(intptr_t)v10762;
	i8 v10764 = v10763+(+8);
	i8 v10765 = *(i8*)(intptr_t)v10764;
	i8 v10766 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v10766 = v10765;

	i8 v10767 = (i8)(intptr_t)(ws+3008);
	i8 v10768 = *(i8*)(intptr_t)v10767;
	i8 v10769 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10769)(v10768);

	i1 v10770 = (i1)+26;
	i8 v10771 = (i8)(intptr_t)(ws+2960);
	i8 v10772 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10772)(v10771, v10770);

	i1 v10773 = (i1)+10;
	i8 v10774 = (i8)(intptr_t)(ws+2936);
	i8 v10775 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10775)(v10774, v10773);

	i1 v10776 = (i1)+12;
	i8 v10777 = (i8)(intptr_t)(ws+2928);
	i8 v10778 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10778)(v10777, v10776);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f213_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3008 length ws+8
void f505_reduce_12(void) {

	i8 v10779 = (i8)+16;
	i8 v10780 = (i8)(intptr_t)(f31_Alloc);
	i8 v10781;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10780)(&v10781, v10779);
	i8 v10782 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10782 = v10781;

	i8 v10783 = (i8)(intptr_t)(ws+56);
	i8 v10784 = *(i8*)(intptr_t)v10783;
	i8 v10785 = (i8)(intptr_t)(ws+3008);
	i8 v10786 = *(i8*)(intptr_t)v10785;
	i8 v10787 = v10786+(+8);
	*(i8*)(intptr_t)v10787 = v10784;

	i8 v10788 = (i8)(intptr_t)(ws+3008);
	i8 v10789 = *(i8*)(intptr_t)v10788;
	i8 v10790 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v10790 = v10789;

	i8 v10791 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10792;

	((void(*)(i2* /* label */))(intptr_t)v10791)(&v10792);
	i8 v10793 = (i8)(intptr_t)(ws+56);
	i8 v10794 = *(i8*)(intptr_t)v10793;
	*(i2*)(intptr_t)v10794 = v10792;

endsub:;
}
	void f213_AllocLabel(i2* /* label */);
	void f213_AllocLabel(i2* /* label */);
	void f444_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3008 length ws+4
void f506_reduce_13(void) {

	i8 v10795 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10796;

	((void(*)(i2* /* label */))(intptr_t)v10795)(&v10796);
	i8 v10797 = (i8)(intptr_t)(ws+3008);
	*(i2*)(intptr_t)v10797 = v10796;

	i8 v10798 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10799;

	((void(*)(i2* /* label */))(intptr_t)v10798)(&v10799);
	i8 v10800 = (i8)(intptr_t)(ws+3010);
	*(i2*)(intptr_t)v10800 = v10799;

	i8 v10801 = (i8)(intptr_t)(ws+3008);
	i2 v10802 = *(i2*)(intptr_t)v10801;
	i8 v10803 = (i8)(intptr_t)(ws+56);
	i8 v10804 = *(i8*)(intptr_t)v10803;
	i8 v10805 = v10804+(+2);
	*(i2*)(intptr_t)v10805 = v10802;

	i8 v10806 = (i8)(intptr_t)(ws+3010);
	i2 v10807 = *(i2*)(intptr_t)v10806;
	i8 v10808 = (i8)(intptr_t)(ws+56);
	i8 v10809 = *(i8*)(intptr_t)v10808;
	i8 v10810 = v10809+(+4);
	*(i2*)(intptr_t)v10810 = v10807;

	i8 v10811 = (i8)(intptr_t)(ws+3008);
	i2 v10812 = *(i2*)(intptr_t)v10811;
	i8 v10813 = (i8)(intptr_t)(ws+2928);
	i8 v10814 = *(i8*)(intptr_t)v10813;
	*(i2*)(intptr_t)v10814 = v10812;

	i8 v10815 = (i8)(intptr_t)(ws+3010);
	i2 v10816 = *(i2*)(intptr_t)v10815;
	i8 v10817 = (i8)(intptr_t)(ws+2928);
	i8 v10818 = *(i8*)(intptr_t)v10817;
	i8 v10819 = v10818+(+2);
	*(i2*)(intptr_t)v10819 = v10816;

	i8 v10820 = (i8)(intptr_t)(ws+3008);
	i2 v10821 = *(i2*)(intptr_t)v10820;
	i8 v10822 = (i8)(intptr_t)(ws+2928);
	i8 v10823 = *(i8*)(intptr_t)v10822;
	i8 v10824 = v10823+(+4);
	*(i2*)(intptr_t)v10824 = v10821;

	i8 v10825 = (i8)(intptr_t)(ws+2928);
	i8 v10826 = *(i8*)(intptr_t)v10825;
	i8 v10827 = (i8)(intptr_t)(f444_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v10827)(v10826);

endsub:;
}
	void f119_MidJump(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3008 length ws+0
void f507_reduce_14(void) {

	i8 v10828 = (i8)(intptr_t)(ws+56);
	i8 v10829 = *(i8*)(intptr_t)v10828;
	i2 v10830 = *(i2*)(intptr_t)v10829;
	i8 v10831 = (i8)(intptr_t)(f119_MidJump);
	i8 v10832;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10831)(&v10832, v10830);
	i8 v10833 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10833)(v10832);

	i8 v10834 = (i8)(intptr_t)(ws+56);
	i8 v10835 = *(i8*)(intptr_t)v10834;
	i8 v10836 = v10835+(+4);
	i2 v10837 = *(i2*)(intptr_t)v10836;
	i8 v10838 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10839;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10838)(&v10839, v10837);
	i8 v10840 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10840)(v10839);

endsub:;
}
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f94_MidEndcase(i8* /* m */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_15 workspace at ws+3008 length ws+8
void f508_reduce_15(void) {

	i8 v10841 = (i8)(intptr_t)(ws+64);
	i8 v10842 = *(i8*)(intptr_t)v10841;
	i8 v10843 = v10842+(+17);
	i1 v10844 = *(i1*)(intptr_t)v10843;
	i1 v10845 = (i1)+0;
	if (v10844==v10845) goto c02_0889; else goto c02_0888;

c02_0889:;

	i8 v10846 = (i8)(intptr_t)(ws+64);
	i8 v10847 = *(i8*)(intptr_t)v10846;
	i2 v10848 = *(i2*)(intptr_t)v10847;
	i2 v10849 = (i2)+0;
	if (v10848==v10849) goto c02_0888; else goto c02_0887;

c02_0887:;

	i8 v10850 = (i8)(intptr_t)(ws+64);
	i8 v10851 = *(i8*)(intptr_t)v10850;
	i2 v10852 = *(i2*)(intptr_t)v10851;
	i8 v10853 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10854;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10853)(&v10854, v10852);
	i8 v10855 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10855)(v10854);

	goto c02_0882;

c02_0888:;

c02_0882:;

	i8 v10856 = (i8)(intptr_t)(ws+64);
	i8 v10857 = *(i8*)(intptr_t)v10856;
	i8 v10858 = v10857+(+2);
	i2 v10859 = *(i2*)(intptr_t)v10858;
	i8 v10860 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10861;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10860)(&v10861, v10859);
	i8 v10862 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10862)(v10861);

	i8 v10863 = (i8)(intptr_t)(ws+64);
	i8 v10864 = *(i8*)(intptr_t)v10863;
	i8 v10865 = v10864+(+16);
	i1 v10866 = *(i1*)(intptr_t)v10865;
	i8 v10867 = (i8)(intptr_t)(f94_MidEndcase);
	i8 v10868;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v10867)(&v10868, v10866);
	i8 v10869 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10869)(v10868);

	i8 v10870 = (i8)(intptr_t)(ws+64);
	i8 v10871 = *(i8*)(intptr_t)v10870;
	i8 v10872 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10872 = v10871;

	i8 v10873 = (i8)(intptr_t)(ws+3008);
	i8 v10874 = *(i8*)(intptr_t)v10873;
	i8 v10875 = v10874+(+8);
	i8 v10876 = *(i8*)(intptr_t)v10875;
	i8 v10877 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v10877 = v10876;

	i8 v10878 = (i8)(intptr_t)(ws+3008);
	i8 v10879 = *(i8*)(intptr_t)v10878;
	i8 v10880 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v10880)(v10879);

	i1 v10881 = (i1)+10;
	i8 v10882 = (i8)(intptr_t)(ws+2944);
	i8 v10883 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10883)(v10882, v10881);

	i1 v10884 = (i1)+64;
	i8 v10885 = (i8)(intptr_t)(ws+2936);
	i8 v10886 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10886)(v10885, v10884);

	i1 v10887 = (i1)+22;
	i8 v10888 = (i8)(intptr_t)(ws+2928);
	i8 v10889 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10889)(v10888, v10887);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f213_AllocLabel(i2* /* label */);
	void f206_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01d3[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f110_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_16 workspace at ws+3008 length ws+8
void f509_reduce_16(void) {

	i8 v10890 = (i8)+18;
	i8 v10891 = (i8)(intptr_t)(f31_Alloc);
	i8 v10892;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v10891)(&v10892, v10890);
	i8 v10893 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v10893 = v10892;

	i8 v10894 = (i8)(intptr_t)(ws+64);
	i8 v10895 = *(i8*)(intptr_t)v10894;
	i8 v10896 = (i8)(intptr_t)(ws+3008);
	i8 v10897 = *(i8*)(intptr_t)v10896;
	i8 v10898 = v10897+(+8);
	*(i8*)(intptr_t)v10898 = v10895;

	i8 v10899 = (i8)(intptr_t)(ws+52);
	i2 v10900 = *(i2*)(intptr_t)v10899;
	i8 v10901 = (i8)(intptr_t)(ws+3008);
	i8 v10902 = *(i8*)(intptr_t)v10901;
	i8 v10903 = v10902+(+4);
	*(i2*)(intptr_t)v10903 = v10900;

	i8 v10904 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10905;

	((void(*)(i2* /* label */))(intptr_t)v10904)(&v10905);
	i8 v10906 = (i8)(intptr_t)(ws+3008);
	i8 v10907 = *(i8*)(intptr_t)v10906;
	i8 v10908 = v10907+(+2);
	*(i2*)(intptr_t)v10908 = v10905;

	i8 v10909 = (i8)(intptr_t)(ws+3008);
	i8 v10910 = *(i8*)(intptr_t)v10909;
	i8 v10911 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v10911 = v10910;

	i8 v10912 = (i8)(intptr_t)(ws+2936);
	i8 v10913 = *(i8*)(intptr_t)v10912;
	i8 v10914 = v10913+(+16);
	i8 v10915 = *(i8*)(intptr_t)v10914;
	i8 v10916 = (i8)(intptr_t)(f206_IsNum);
	i1 v10917;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v10916)(&v10917, v10915);
	i1 v10918 = (i1)+0;
	if (v10917==v10918) goto c02_088d; else goto c02_088e;

c02_088d:;

	i8 v10919 = (i8)(intptr_t)c02_s01d3;
	i8 v10920 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10920)(v10919);

	goto c02_088a;

c02_088e:;

c02_088a:;

	i8 v10921 = (i8)(intptr_t)(ws+2936);
	i8 v10922 = *(i8*)(intptr_t)v10921;
	i8 v10923 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v10924;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v10923)(&v10924, v10922);
	i8 v10925 = (i8)(intptr_t)(ws+3008);
	i8 v10926 = *(i8*)(intptr_t)v10925;
	i8 v10927 = v10926+(+16);
	*(i1*)(intptr_t)v10927 = v10924;

	i8 v10928 = (i8)(intptr_t)(ws+3008);
	i8 v10929 = *(i8*)(intptr_t)v10928;
	i8 v10930 = v10929+(+16);
	i1 v10931 = *(i1*)(intptr_t)v10930;
	i8 v10932 = (i8)(intptr_t)(ws+2936);
	i8 v10933 = *(i8*)(intptr_t)v10932;
	i8 v10934 = (i8)(intptr_t)(f110_MidStartcase);
	i8 v10935;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v10934)(&v10935, v10933, v10931);
	i8 v10936 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10936)(v10935);

	i1 v10937 = (i1)+65;
	i8 v10938 = (i8)(intptr_t)(ws+2928);
	i8 v10939 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10939)(v10938, v10937);

endsub:;
}
const i1 c02_s01d4[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f61_SimpleError(i8 /* message */);
	void f119_MidJump(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f213_AllocLabel(i2* /* label */);
	void f92_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3008 length ws+0
void f510_reduce_17(void) {

	i8 v10940 = (i8)(intptr_t)(ws+64);
	i8 v10941 = *(i8*)(intptr_t)v10940;
	i8 v10942 = v10941+(+17);
	i1 v10943 = *(i1*)(intptr_t)v10942;
	i1 v10944 = (i1)+0;
	if (v10943==v10944) goto c02_0893; else goto c02_0892;

c02_0892:;

	i8 v10945 = (i8)(intptr_t)c02_s01d4;
	i8 v10946 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10946)(v10945);

	goto c02_088f;

c02_0893:;

c02_088f:;

	i8 v10947 = (i8)(intptr_t)(ws+64);
	i8 v10948 = *(i8*)(intptr_t)v10947;
	i2 v10949 = *(i2*)(intptr_t)v10948;
	i2 v10950 = (i2)+0;
	if (v10949==v10950) goto c02_0898; else goto c02_0897;

c02_0897:;

	i8 v10951 = (i8)(intptr_t)(ws+64);
	i8 v10952 = *(i8*)(intptr_t)v10951;
	i8 v10953 = v10952+(+2);
	i2 v10954 = *(i2*)(intptr_t)v10953;
	i8 v10955 = (i8)(intptr_t)(f119_MidJump);
	i8 v10956;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10955)(&v10956, v10954);
	i8 v10957 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10957)(v10956);

	i8 v10958 = (i8)(intptr_t)(ws+64);
	i8 v10959 = *(i8*)(intptr_t)v10958;
	i2 v10960 = *(i2*)(intptr_t)v10959;
	i8 v10961 = (i8)(intptr_t)(f138_MidLabel);
	i8 v10962;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10961)(&v10962, v10960);
	i8 v10963 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10963)(v10962);

	goto c02_0894;

c02_0898:;

c02_0894:;

	i8 v10964 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v10965;

	((void(*)(i2* /* label */))(intptr_t)v10964)(&v10965);
	i8 v10966 = (i8)(intptr_t)(ws+64);
	i8 v10967 = *(i8*)(intptr_t)v10966;
	*(i2*)(intptr_t)v10967 = v10965;

	i8 v10968 = (i8)(intptr_t)(ws+64);
	i8 v10969 = *(i8*)(intptr_t)v10968;
	i8 v10970 = v10969+(+16);
	i1 v10971 = *(i1*)(intptr_t)v10970;
	i8 v10972 = (i8)(intptr_t)(ws+2936);
	i4 v10973 = *(i4*)(intptr_t)v10972;
	i8 v10974 = (i8)(intptr_t)(ws+64);
	i8 v10975 = *(i8*)(intptr_t)v10974;
	i2 v10976 = *(i2*)(intptr_t)v10975;
	i8 v10977 = (i8)(intptr_t)(f92_MidWhencase);
	i8 v10978;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v10977)(&v10978, v10976, v10973, v10971);
	i8 v10979 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10979)(v10978);

	i1 v10980 = (i1)+6;
	i8 v10981 = (i8)(intptr_t)(ws+2928);
	i8 v10982 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10982)(v10981, v10980);

endsub:;
}
const i1 c02_s01d5[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f119_MidJump(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f138_MidLabel(i8* /* m */, i2 /* label */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3008 length ws+0
void f511_reduce_18(void) {

	i8 v10983 = (i8)(intptr_t)(ws+64);
	i8 v10984 = *(i8*)(intptr_t)v10983;
	i8 v10985 = v10984+(+17);
	i1 v10986 = *(i1*)(intptr_t)v10985;
	i1 v10987 = (i1)+0;
	if (v10986==v10987) goto c02_089d; else goto c02_089c;

c02_089c:;

	i8 v10988 = (i8)(intptr_t)c02_s01d5;
	i8 v10989 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v10989)(v10988);

	goto c02_0899;

c02_089d:;

c02_0899:;

	i8 v10990 = (i8)(intptr_t)(ws+64);
	i8 v10991 = *(i8*)(intptr_t)v10990;
	i2 v10992 = *(i2*)(intptr_t)v10991;
	i2 v10993 = (i2)+0;
	if (v10992==v10993) goto c02_08a2; else goto c02_08a1;

c02_08a1:;

	i8 v10994 = (i8)(intptr_t)(ws+64);
	i8 v10995 = *(i8*)(intptr_t)v10994;
	i8 v10996 = v10995+(+2);
	i2 v10997 = *(i2*)(intptr_t)v10996;
	i8 v10998 = (i8)(intptr_t)(f119_MidJump);
	i8 v10999;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v10998)(&v10999, v10997);
	i8 v11000 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11000)(v10999);

	i8 v11001 = (i8)(intptr_t)(ws+64);
	i8 v11002 = *(i8*)(intptr_t)v11001;
	i2 v11003 = *(i2*)(intptr_t)v11002;
	i8 v11004 = (i8)(intptr_t)(f138_MidLabel);
	i8 v11005;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v11004)(&v11005, v11003);
	i8 v11006 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v11006)(v11005);

	goto c02_089e;

c02_08a2:;

c02_089e:;

	i2 v11007 = (i2)+0;
	i8 v11008 = (i8)(intptr_t)(ws+64);
	i8 v11009 = *(i8*)(intptr_t)v11008;
	*(i2*)(intptr_t)v11009 = v11007;

	i1 v11010 = (i1)+1;
	i8 v11011 = (i8)(intptr_t)(ws+64);
	i8 v11012 = *(i8*)(intptr_t)v11011;
	i8 v11013 = v11012+(+17);
	*(i1*)(intptr_t)v11013 = v11010;

	i1 v11014 = (i1)+9;
	i8 v11015 = (i8)(intptr_t)(ws+2936);
	i8 v11016 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11016)(v11015, v11014);

	i1 v11017 = (i1)+6;
	i8 v11018 = (i8)(intptr_t)(ws+2928);
	i8 v11019 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11019)(v11018, v11017);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3008 length ws+0
void f512_reduce_19(void) {

	i8 v11020 = (i8)(intptr_t)(ws+2936);
	i8 v11021 = *(i8*)(intptr_t)v11020;
	i8 v11022 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11022 = v11021;

	i1 v11023 = (i1)+4;
	i8 v11024 = (i8)(intptr_t)(ws+2928);
	i8 v11025 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11025)(v11024, v11023);

endsub:;
}
	void f472_Negate(i8 /* node */);

// reduce_20 workspace at ws+3008 length ws+0
void f513_reduce_20(void) {

	i8 v11026 = (i8)(intptr_t)(ws+2928);
	i8 v11027 = *(i8*)(intptr_t)v11026;
	i8 v11028 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11028 = v11027;

	i8 v11029 = (i8)(intptr_t)(ws+2928);
	i8 v11030 = *(i8*)(intptr_t)v11029;
	i8 v11031 = (i8)(intptr_t)(f472_Negate);

	((void(*)(i8 /* node */))(intptr_t)v11031)(v11030);

endsub:;
}
	void f134_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3008 length ws+0
void f514_reduce_21(void) {

	i8 v11032 = (i8)(intptr_t)(ws+2944);
	i8 v11033 = *(i8*)(intptr_t)v11032;
	i8 v11034 = (i8)(intptr_t)(ws+2928);
	i8 v11035 = *(i8*)(intptr_t)v11034;
	i2 v11036 = (i2)+0;
	i2 v11037 = (i2)+0;
	i2 v11038 = (i2)+0;
	i1 v11039 = (i1)+0;
	i8 v11040 = (i8)(intptr_t)(f134_MidBand);
	i8 v11041;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v11040)(&v11041, v11039, v11038, v11037, v11036, v11035, v11033);
	i8 v11042 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11042 = v11041;

	i1 v11043 = (i1)+46;
	i8 v11044 = (i8)(intptr_t)(ws+2936);
	i8 v11045 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11045)(v11044, v11043);

endsub:;
}
	void f108_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_22 workspace at ws+3008 length ws+0
void f515_reduce_22(void) {

	i8 v11046 = (i8)(intptr_t)(ws+2944);
	i8 v11047 = *(i8*)(intptr_t)v11046;
	i8 v11048 = (i8)(intptr_t)(ws+2928);
	i8 v11049 = *(i8*)(intptr_t)v11048;
	i2 v11050 = (i2)+0;
	i2 v11051 = (i2)+0;
	i2 v11052 = (i2)+0;
	i1 v11053 = (i1)+0;
	i8 v11054 = (i8)(intptr_t)(f108_MidBor);
	i8 v11055;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v11054)(&v11055, v11053, v11052, v11051, v11050, v11049, v11047);
	i8 v11056 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11056 = v11055;

	i1 v11057 = (i1)+47;
	i8 v11058 = (i8)(intptr_t)(ws+2936);
	i8 v11059 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11059)(v11058, v11057);

endsub:;
}
	void f473_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3008 length ws+0
void f516_reduce_23(void) {

	i8 v11060 = (i8)(intptr_t)(ws+2944);
	i8 v11061 = *(i8*)(intptr_t)v11060;
	i8 v11062 = (i8)(intptr_t)(ws+2928);
	i8 v11063 = *(i8*)(intptr_t)v11062;
	i1 v11064 = (i1)+0;
	i8 v11065 = (i8)(intptr_t)(f473_ConditionalEq);
	i8 v11066;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11065)(&v11066, v11064, v11063, v11061);
	i8 v11067 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11067 = v11066;

	i1 v11068 = (i1)+54;
	i8 v11069 = (i8)(intptr_t)(ws+2936);
	i8 v11070 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11070)(v11069, v11068);

endsub:;
}
	void f473_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3008 length ws+0
void f517_reduce_24(void) {

	i8 v11071 = (i8)(intptr_t)(ws+2944);
	i8 v11072 = *(i8*)(intptr_t)v11071;
	i8 v11073 = (i8)(intptr_t)(ws+2928);
	i8 v11074 = *(i8*)(intptr_t)v11073;
	i1 v11075 = (i1)+1;
	i8 v11076 = (i8)(intptr_t)(f473_ConditionalEq);
	i8 v11077;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11076)(&v11077, v11075, v11074, v11072);
	i8 v11078 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11078 = v11077;

	i1 v11079 = (i1)+55;
	i8 v11080 = (i8)(intptr_t)(ws+2936);
	i8 v11081 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11081)(v11080, v11079);

endsub:;
}
	void f474_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3008 length ws+0
void f518_reduce_25(void) {

	i8 v11082 = (i8)(intptr_t)(ws+2944);
	i8 v11083 = *(i8*)(intptr_t)v11082;
	i8 v11084 = (i8)(intptr_t)(ws+2928);
	i8 v11085 = *(i8*)(intptr_t)v11084;
	i1 v11086 = (i1)+0;
	i8 v11087 = (i8)(intptr_t)(f474_ConditionalLt);
	i8 v11088;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11087)(&v11088, v11086, v11085, v11083);
	i8 v11089 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11089 = v11088;

	i1 v11090 = (i1)+50;
	i8 v11091 = (i8)(intptr_t)(ws+2936);
	i8 v11092 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11092)(v11091, v11090);

endsub:;
}
	void f474_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3008 length ws+0
void f519_reduce_26(void) {

	i8 v11093 = (i8)(intptr_t)(ws+2944);
	i8 v11094 = *(i8*)(intptr_t)v11093;
	i8 v11095 = (i8)(intptr_t)(ws+2928);
	i8 v11096 = *(i8*)(intptr_t)v11095;
	i1 v11097 = (i1)+1;
	i8 v11098 = (i8)(intptr_t)(f474_ConditionalLt);
	i8 v11099;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11098)(&v11099, v11097, v11096, v11094);
	i8 v11100 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11100 = v11099;

	i1 v11101 = (i1)+53;
	i8 v11102 = (i8)(intptr_t)(ws+2936);
	i8 v11103 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11103)(v11102, v11101);

endsub:;
}
	void f474_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3008 length ws+0
void f520_reduce_27(void) {

	i8 v11104 = (i8)(intptr_t)(ws+2928);
	i8 v11105 = *(i8*)(intptr_t)v11104;
	i8 v11106 = (i8)(intptr_t)(ws+2944);
	i8 v11107 = *(i8*)(intptr_t)v11106;
	i1 v11108 = (i1)+0;
	i8 v11109 = (i8)(intptr_t)(f474_ConditionalLt);
	i8 v11110;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11109)(&v11110, v11108, v11107, v11105);
	i8 v11111 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11111 = v11110;

	i1 v11112 = (i1)+52;
	i8 v11113 = (i8)(intptr_t)(ws+2936);
	i8 v11114 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11114)(v11113, v11112);

endsub:;
}
	void f474_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3008 length ws+0
void f521_reduce_28(void) {

	i8 v11115 = (i8)(intptr_t)(ws+2928);
	i8 v11116 = *(i8*)(intptr_t)v11115;
	i8 v11117 = (i8)(intptr_t)(ws+2944);
	i8 v11118 = *(i8*)(intptr_t)v11117;
	i1 v11119 = (i1)+1;
	i8 v11120 = (i8)(intptr_t)(f474_ConditionalLt);
	i8 v11121;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11120)(&v11121, v11119, v11118, v11116);
	i8 v11122 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11122 = v11121;

	i1 v11123 = (i1)+51;
	i8 v11124 = (i8)(intptr_t)(ws+2936);
	i8 v11125 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11125)(v11124, v11123);

endsub:;
}
	void f144_MidConstant(i8* /* m */, i4 /* value */);

// reduce_29 workspace at ws+3008 length ws+0
void f522_reduce_29(void) {

	i8 v11126 = (i8)(intptr_t)(ws+2928);
	i4 v11127 = *(i4*)(intptr_t)v11126;
	i8 v11128 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11129;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11128)(&v11129, v11127);
	i8 v11130 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11130 = v11129;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3008 length ws+0
void f523_reduce_30(void) {

	i8 v11131 = (i8)(intptr_t)(ws+2936);
	i8 v11132 = *(i8*)(intptr_t)v11131;
	i8 v11133 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11133 = v11132;

	i1 v11134 = (i1)+4;
	i8 v11135 = (i8)(intptr_t)(ws+2928);
	i8 v11136 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11136)(v11135, v11134);

endsub:;
}

// reduce_31 workspace at ws+3008 length ws+0
void f524_reduce_31(void) {

	i8 v11137 = (i8)(intptr_t)(ws+2928);
	i8 v11138 = *(i8*)(intptr_t)v11137;
	i8 v11139 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11139 = v11138;

endsub:;
}
	void f461_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_32 workspace at ws+3008 length ws+0
void f525_reduce_32(void) {

	i1 v11140 = (i1)+112;
	i8 v11141 = (i8)(intptr_t)(ws+2928);
	i8 v11142 = *(i8*)(intptr_t)v11141;
	i8 v11143 = (i8)(intptr_t)(f461_Expr1Simple);
	i8 v11144;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v11143)(&v11144, v11142, v11140);
	i8 v11145 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11145 = v11144;

endsub:;
}
	void f461_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_33 workspace at ws+3008 length ws+0
void f526_reduce_33(void) {

	i1 v11146 = (i1)+107;
	i8 v11147 = (i8)(intptr_t)(ws+2928);
	i8 v11148 = *(i8*)(intptr_t)v11147;
	i8 v11149 = (i8)(intptr_t)(f461_Expr1Simple);
	i8 v11150;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v11149)(&v11150, v11148, v11146);
	i8 v11151 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11151 = v11150;

endsub:;
}
	void f462_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_34 workspace at ws+3008 length ws+0
void f527_reduce_34(void) {

	i8 v11152 = (i8)(intptr_t)(ws+2944);
	i8 v11153 = *(i8*)(intptr_t)v11152;
	i8 v11154 = (i8)(intptr_t)(ws+2928);
	i8 v11155 = *(i8*)(intptr_t)v11154;
	i8 v11156 = (i8)(intptr_t)(f462_ExprAdd);
	i8 v11157;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11156)(&v11157, v11155, v11153);
	i8 v11158 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11158 = v11157;

	i1 v11159 = (i1)+19;
	i8 v11160 = (i8)(intptr_t)(ws+2936);
	i8 v11161 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11161)(v11160, v11159);

endsub:;
}
	void f464_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_35 workspace at ws+3008 length ws+0
void f528_reduce_35(void) {

	i8 v11162 = (i8)(intptr_t)(ws+2944);
	i8 v11163 = *(i8*)(intptr_t)v11162;
	i8 v11164 = (i8)(intptr_t)(ws+2928);
	i8 v11165 = *(i8*)(intptr_t)v11164;
	i8 v11166 = (i8)(intptr_t)(f464_ExprSub);
	i8 v11167;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v11166)(&v11167, v11165, v11163);
	i8 v11168 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11168 = v11167;

	i1 v11169 = (i1)+14;
	i8 v11170 = (i8)(intptr_t)(ws+2936);
	i8 v11171 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11171)(v11170, v11169);

endsub:;
}
	void f466_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3008 length ws+0
void f529_reduce_36(void) {

	i1 v11172 = (i1)+162;
	i1 v11173 = (i1)+162;
	i8 v11174 = (i8)(intptr_t)(ws+2944);
	i8 v11175 = *(i8*)(intptr_t)v11174;
	i8 v11176 = (i8)(intptr_t)(ws+2928);
	i8 v11177 = *(i8*)(intptr_t)v11176;
	i8 v11178 = (i8)(intptr_t)(f466_Expr2Simple);
	i8 v11179;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11178)(&v11179, v11177, v11175, v11173, v11172);
	i8 v11180 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11180 = v11179;

	i1 v11181 = (i1)+24;
	i8 v11182 = (i8)(intptr_t)(ws+2936);
	i8 v11183 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11183)(v11182, v11181);

endsub:;
}
	void f466_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3008 length ws+0
void f530_reduce_37(void) {

	i1 v11184 = (i1)+142;
	i1 v11185 = (i1)+137;
	i8 v11186 = (i8)(intptr_t)(ws+2944);
	i8 v11187 = *(i8*)(intptr_t)v11186;
	i8 v11188 = (i8)(intptr_t)(ws+2928);
	i8 v11189 = *(i8*)(intptr_t)v11188;
	i8 v11190 = (i8)(intptr_t)(f466_Expr2Simple);
	i8 v11191;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11190)(&v11191, v11189, v11187, v11185, v11184);
	i8 v11192 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11192 = v11191;

	i1 v11193 = (i1)+23;
	i8 v11194 = (i8)(intptr_t)(ws+2936);
	i8 v11195 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11195)(v11194, v11193);

endsub:;
}
	void f466_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3008 length ws+0
void f531_reduce_38(void) {

	i1 v11196 = (i1)+152;
	i1 v11197 = (i1)+147;
	i8 v11198 = (i8)(intptr_t)(ws+2944);
	i8 v11199 = *(i8*)(intptr_t)v11198;
	i8 v11200 = (i8)(intptr_t)(ws+2928);
	i8 v11201 = *(i8*)(intptr_t)v11200;
	i8 v11202 = (i8)(intptr_t)(f466_Expr2Simple);
	i8 v11203;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11202)(&v11203, v11201, v11199, v11197, v11196);
	i8 v11204 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11204 = v11203;

	i1 v11205 = (i1)+18;
	i8 v11206 = (i8)(intptr_t)(ws+2936);
	i8 v11207 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11207)(v11206, v11205);

endsub:;
}
	void f466_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3008 length ws+0
void f532_reduce_39(void) {

	i1 v11208 = (i1)+177;
	i1 v11209 = (i1)+177;
	i8 v11210 = (i8)(intptr_t)(ws+2944);
	i8 v11211 = *(i8*)(intptr_t)v11210;
	i8 v11212 = (i8)(intptr_t)(ws+2928);
	i8 v11213 = *(i8*)(intptr_t)v11212;
	i8 v11214 = (i8)(intptr_t)(f466_Expr2Simple);
	i8 v11215;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11214)(&v11215, v11213, v11211, v11209, v11208);
	i8 v11216 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11216 = v11215;

	i1 v11217 = (i1)+49;
	i8 v11218 = (i8)(intptr_t)(ws+2936);
	i8 v11219 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11219)(v11218, v11217);

endsub:;
}
	void f466_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3008 length ws+0
void f533_reduce_40(void) {

	i1 v11220 = (i1)+167;
	i1 v11221 = (i1)+167;
	i8 v11222 = (i8)(intptr_t)(ws+2944);
	i8 v11223 = *(i8*)(intptr_t)v11222;
	i8 v11224 = (i8)(intptr_t)(ws+2928);
	i8 v11225 = *(i8*)(intptr_t)v11224;
	i8 v11226 = (i8)(intptr_t)(f466_Expr2Simple);
	i8 v11227;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11226)(&v11227, v11225, v11223, v11221, v11220);
	i8 v11228 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11228 = v11227;

	i1 v11229 = (i1)+59;
	i8 v11230 = (i8)(intptr_t)(ws+2936);
	i8 v11231 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11231)(v11230, v11229);

endsub:;
}
	void f466_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3008 length ws+0
void f534_reduce_41(void) {

	i1 v11232 = (i1)+172;
	i1 v11233 = (i1)+172;
	i8 v11234 = (i8)(intptr_t)(ws+2944);
	i8 v11235 = *(i8*)(intptr_t)v11234;
	i8 v11236 = (i8)(intptr_t)(ws+2928);
	i8 v11237 = *(i8*)(intptr_t)v11236;
	i8 v11238 = (i8)(intptr_t)(f466_Expr2Simple);
	i8 v11239;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11238)(&v11239, v11237, v11235, v11233, v11232);
	i8 v11240 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11240 = v11239;

	i1 v11241 = (i1)+48;
	i8 v11242 = (i8)(intptr_t)(ws+2936);
	i8 v11243 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11243)(v11242, v11241);

endsub:;
}
	void f469_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3008 length ws+0
void f535_reduce_42(void) {

	i1 v11244 = (i1)+117;
	i1 v11245 = (i1)+117;
	i8 v11246 = (i8)(intptr_t)(ws+2944);
	i8 v11247 = *(i8*)(intptr_t)v11246;
	i8 v11248 = (i8)(intptr_t)(ws+2928);
	i8 v11249 = *(i8*)(intptr_t)v11248;
	i8 v11250 = (i8)(intptr_t)(f469_ExprShift);
	i8 v11251;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11250)(&v11251, v11249, v11247, v11245, v11244);
	i8 v11252 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11252 = v11251;

	i1 v11253 = (i1)+56;
	i8 v11254 = (i8)(intptr_t)(ws+2936);
	i8 v11255 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11255)(v11254, v11253);

endsub:;
}
	void f469_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3008 length ws+0
void f536_reduce_43(void) {

	i1 v11256 = (i1)+127;
	i1 v11257 = (i1)+122;
	i8 v11258 = (i8)(intptr_t)(ws+2944);
	i8 v11259 = *(i8*)(intptr_t)v11258;
	i8 v11260 = (i8)(intptr_t)(ws+2928);
	i8 v11261 = *(i8*)(intptr_t)v11260;
	i8 v11262 = (i8)(intptr_t)(f469_ExprShift);
	i8 v11263;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v11262)(&v11263, v11261, v11259, v11257, v11256);
	i8 v11264 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11264 = v11263;

	i1 v11265 = (i1)+57;
	i8 v11266 = (i8)(intptr_t)(ws+2936);
	i8 v11267 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11267)(v11266, v11265);

endsub:;
}
	void f200_CheckNotPartialType(i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01d6[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f207_IsSNum(i1* /* result */, i8 /* type */);
	void f153_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3008 length ws+0
void f537_reduce_44(void) {

	i8 v11268 = (i8)(intptr_t)(ws+2928);
	i8 v11269 = *(i8*)(intptr_t)v11268;
	i8 v11270 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11270)(v11269);

	i8 v11271 = (i8)(intptr_t)(ws+2944);
	i8 v11272 = *(i8*)(intptr_t)v11271;
	i8 v11273 = v11272+(+58);
	i1 v11274 = *(i1*)(intptr_t)v11273;
	i1 v11275 = (i1)+42;
	if (v11274==v11275) goto c02_08a9; else goto c02_08aa;

c02_08aa:;

	i8 v11276 = (i8)(intptr_t)(ws+2944);
	i8 v11277 = *(i8*)(intptr_t)v11276;
	i8 v11278 = v11277+(+16);
	i8 v11279 = *(i8*)(intptr_t)v11278;
	i8 v11280 = v11279+(+42);
	i2 v11281 = *(i2*)(intptr_t)v11280;
	i8 v11282 = (i8)(intptr_t)(ws+2928);
	i8 v11283 = *(i8*)(intptr_t)v11282;
	i8 v11284 = v11283+(+42);
	i2 v11285 = *(i2*)(intptr_t)v11284;
	if (v11281==v11285) goto c02_08a9; else goto c02_08a8;

c02_08a8:;

	i8 v11286 = (i8)(intptr_t)(ws+2944);
	i8 v11287 = *(i8*)(intptr_t)v11286;
	i8 v11288 = v11287+(+16);
	i8 v11289 = *(i8*)(intptr_t)v11288;
	i8 v11290 = (i8)(intptr_t)(f204_IsPtr);
	i1 v11291;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11290)(&v11291, v11289);
	i1 v11292 = (i1)+0;
	if (v11291==v11292) goto c02_08b2; else goto c02_08b0;

c02_08b2:;

	i8 v11293 = (i8)(intptr_t)(ws+2928);
	i8 v11294 = *(i8*)(intptr_t)v11293;
	i8 v11295 = (i8)(intptr_t)(f204_IsPtr);
	i1 v11296;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11295)(&v11296, v11294);
	i1 v11297 = (i1)+0;
	if (v11296==v11297) goto c02_08b1; else goto c02_08b0;

c02_08b0:;

	i8 v11298 = (i8)(intptr_t)c02_s01d6;
	i8 v11299 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11299)(v11298);

	goto c02_08ab;

c02_08b1:;

c02_08ab:;

	i8 v11300 = (i8)(intptr_t)(ws+2928);
	i8 v11301 = *(i8*)(intptr_t)v11300;
	i8 v11302 = v11301+(+42);
	i2 v11303 = *(i2*)(intptr_t)v11302;
	i1 v11304 = v11303;
	i8 v11305 = (i8)(intptr_t)(ws+2944);
	i8 v11306 = *(i8*)(intptr_t)v11305;
	i8 v11307 = (i8)(intptr_t)(ws+2944);
	i8 v11308 = *(i8*)(intptr_t)v11307;
	i8 v11309 = v11308+(+16);
	i8 v11310 = *(i8*)(intptr_t)v11309;
	i8 v11311 = (i8)(intptr_t)(f207_IsSNum);
	i1 v11312;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11311)(&v11312, v11310);
	i8 v11313 = (i8)(intptr_t)(f153_MidCCast);
	i8 v11314;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v11313)(&v11314, v11312, v11306, v11304);
	i8 v11315 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11315 = v11314;

	goto c02_08a3;

c02_08a9:;

	i8 v11316 = (i8)(intptr_t)(ws+2944);
	i8 v11317 = *(i8*)(intptr_t)v11316;
	i8 v11318 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11318 = v11317;

c02_08a3:;

	i8 v11319 = (i8)(intptr_t)(ws+2928);
	i8 v11320 = *(i8*)(intptr_t)v11319;
	i8 v11321 = (i8)(intptr_t)(ws+2920);
	i8 v11322 = *(i8*)(intptr_t)v11321;
	i8 v11323 = v11322+(+16);
	*(i8*)(intptr_t)v11323 = v11320;

	i1 v11324 = (i1)+58;
	i8 v11325 = (i8)(intptr_t)(ws+2936);
	i8 v11326 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11326)(v11325, v11324);

endsub:;
}
	void f211_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f208_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s01d7[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_45 workspace at ws+3008 length ws+8
void f538_reduce_45(void) {

	i8 v11327 = (i8)(intptr_t)(ws+2928);
	i8 v11328 = *(i8*)(intptr_t)v11327;
	i8 v11329 = (i8)(intptr_t)(f211_UndoLValue);
	i8 v11330;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11329)(&v11330, v11328);
	i8 v11331 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11331 = v11330;

	i8 v11332 = (i8)(intptr_t)(ws+2920);
	i8 v11333 = *(i8*)(intptr_t)v11332;
	i8 v11334 = v11333+(+58);
	i1 v11335 = *(i1*)(intptr_t)v11334;
	i1 v11336 = (i1)+44;
	if (v11335==v11336) goto c02_08b6; else goto c02_08b7;

c02_08b6:;

	i8 v11337 = (i8)(intptr_t)(ws+2920);
	i8 v11338 = *(i8*)(intptr_t)v11337;
	i8 v11339 = *(i8*)(intptr_t)v11338;
	i8 v11340 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11340 = v11339;

	i8 v11341 = (i8)(intptr_t)(ws+3008);
	i8 v11342 = *(i8*)(intptr_t)v11341;
	i8 v11343 = *(i8*)(intptr_t)v11342;
	i8 v11344 = (i8)(intptr_t)(f208_IsScalar);
	i1 v11345;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11344)(&v11345, v11343);
	i1 v11346 = (i1)+0;
	if (v11345==v11346) goto c02_08bc; else goto c02_08bb;

c02_08bb:;

	i8 v11347 = (i8)(intptr_t)c02_s01d7;
	i8 v11348 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11348)(v11347);

	goto c02_08b8;

c02_08bc:;

c02_08b8:;

	goto c02_08b3;

c02_08b7:;

c02_08b3:;

endsub:;
}
	void f211_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3008 length ws+0
void f539_reduce_46(void) {

	i8 v11349 = (i8)(intptr_t)(ws+2928);
	i8 v11350 = *(i8*)(intptr_t)v11349;
	i8 v11351 = (i8)(intptr_t)(f211_UndoLValue);
	i8 v11352;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11351)(&v11352, v11350);
	i8 v11353 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11353 = v11352;

	i1 v11354 = (i1)+59;
	i8 v11355 = (i8)(intptr_t)(ws+2936);
	i8 v11356 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11356)(v11355, v11354);

endsub:;
}
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f475_parser_i_bad_next_prev(void);
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_47 workspace at ws+3008 length ws+0
void f540_reduce_47(void) {

	i8 v11357 = (i8)(intptr_t)(ws+2928);
	i8 v11358 = *(i8*)(intptr_t)v11357;
	i8 v11359 = v11358+(+16);
	i8 v11360 = *(i8*)(intptr_t)v11359;
	i8 v11361 = (i8)(intptr_t)(f204_IsPtr);
	i1 v11362;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11361)(&v11362, v11360);
	i1 v11363 = (i1)+0;
	if (v11362==v11363) goto c02_08c0; else goto c02_08c1;

c02_08c0:;

	i8 v11364 = (i8)(intptr_t)(f475_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v11364)();

	goto c02_08bd;

c02_08c1:;

c02_08bd:;

	i1 v11365 = (i1)+157;
	i8 v11366 = (i8)(intptr_t)(ws+1056);
	i8 v11367 = *(i8*)(intptr_t)v11366;
	i8 v11368 = v11367+(+42);
	i2 v11369 = *(i2*)(intptr_t)v11368;
	i1 v11370 = v11369;
	i8 v11371 = (i8)(intptr_t)(ws+2928);
	i8 v11372 = *(i8*)(intptr_t)v11371;
	i8 v11373 = (i8)(intptr_t)(ws+2928);
	i8 v11374 = *(i8*)(intptr_t)v11373;
	i8 v11375 = v11374+(+16);
	i8 v11376 = *(i8*)(intptr_t)v11375;
	i8 v11377 = *(i8*)(intptr_t)v11376;
	i8 v11378 = v11377+(+44);
	i2 v11379 = *(i2*)(intptr_t)v11378;
	i4 v11380 = v11379;
	i8 v11381 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11382;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11381)(&v11382, v11380);
	i8 v11383 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v11384;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11383)(&v11384, v11382, v11372, v11370, v11365);
	i8 v11385 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11385 = v11384;

	i8 v11386 = (i8)(intptr_t)(ws+2928);
	i8 v11387 = *(i8*)(intptr_t)v11386;
	i8 v11388 = v11387+(+16);
	i8 v11389 = *(i8*)(intptr_t)v11388;
	i8 v11390 = (i8)(intptr_t)(ws+2920);
	i8 v11391 = *(i8*)(intptr_t)v11390;
	i8 v11392 = v11391+(+16);
	*(i8*)(intptr_t)v11392 = v11389;

endsub:;
}
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f475_parser_i_bad_next_prev(void);
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_48 workspace at ws+3008 length ws+0
void f541_reduce_48(void) {

	i8 v11393 = (i8)(intptr_t)(ws+2928);
	i8 v11394 = *(i8*)(intptr_t)v11393;
	i8 v11395 = v11394+(+16);
	i8 v11396 = *(i8*)(intptr_t)v11395;
	i8 v11397 = (i8)(intptr_t)(f204_IsPtr);
	i1 v11398;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11397)(&v11398, v11396);
	i1 v11399 = (i1)+0;
	if (v11398==v11399) goto c02_08c5; else goto c02_08c6;

c02_08c5:;

	i8 v11400 = (i8)(intptr_t)(f475_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v11400)();

	goto c02_08c2;

c02_08c6:;

c02_08c2:;

	i1 v11401 = (i1)+132;
	i8 v11402 = (i8)(intptr_t)(ws+1056);
	i8 v11403 = *(i8*)(intptr_t)v11402;
	i8 v11404 = v11403+(+42);
	i2 v11405 = *(i2*)(intptr_t)v11404;
	i1 v11406 = v11405;
	i8 v11407 = (i8)(intptr_t)(ws+2928);
	i8 v11408 = *(i8*)(intptr_t)v11407;
	i8 v11409 = (i8)(intptr_t)(ws+2928);
	i8 v11410 = *(i8*)(intptr_t)v11409;
	i8 v11411 = v11410+(+16);
	i8 v11412 = *(i8*)(intptr_t)v11411;
	i8 v11413 = *(i8*)(intptr_t)v11412;
	i8 v11414 = v11413+(+44);
	i2 v11415 = *(i2*)(intptr_t)v11414;
	i4 v11416 = v11415;
	i8 v11417 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11418;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11417)(&v11418, v11416);
	i8 v11419 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v11420;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11419)(&v11420, v11418, v11408, v11406, v11401);
	i8 v11421 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11421 = v11420;

	i8 v11422 = (i8)(intptr_t)(ws+2928);
	i8 v11423 = *(i8*)(intptr_t)v11422;
	i8 v11424 = v11423+(+16);
	i8 v11425 = *(i8*)(intptr_t)v11424;
	i8 v11426 = (i8)(intptr_t)(ws+2920);
	i8 v11427 = *(i8*)(intptr_t)v11426;
	i8 v11428 = v11427+(+16);
	*(i8*)(intptr_t)v11428 = v11425;

endsub:;
}
	void f144_MidConstant(i8* /* m */, i4 /* value */);

// reduce_49 workspace at ws+3008 length ws+0
void f542_reduce_49(void) {

	i8 v11429 = (i8)(intptr_t)(ws+2928);
	i8 v11430 = *(i8*)(intptr_t)v11429;
	i8 v11431 = v11430+(+42);
	i2 v11432 = *(i2*)(intptr_t)v11431;
	i4 v11433 = v11432;
	i8 v11434 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11435;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11434)(&v11435, v11433);
	i8 v11436 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11436 = v11435;

endsub:;
}
	void f203_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s01d8[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f144_MidConstant(i8* /* m */, i4 /* value */);

// reduce_50 workspace at ws+3008 length ws+0
void f543_reduce_50(void) {

	i8 v11437 = (i8)(intptr_t)(ws+2928);
	i8 v11438 = *(i8*)(intptr_t)v11437;
	i8 v11439 = (i8)(intptr_t)(f203_IsArray);
	i1 v11440;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11439)(&v11440, v11438);
	i1 v11441 = (i1)+0;
	if (v11440==v11441) goto c02_08ca; else goto c02_08cb;

c02_08ca:;

	i8 v11442 = (i8)(intptr_t)c02_s01d8;
	i8 v11443 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11443)(v11442);

	goto c02_08c7;

c02_08cb:;

c02_08c7:;

	i8 v11444 = (i8)(intptr_t)(ws+2928);
	i8 v11445 = *(i8*)(intptr_t)v11444;
	i8 v11446 = v11445+(+8);
	i2 v11447 = *(i2*)(intptr_t)v11446;
	i4 v11448 = v11447;
	i8 v11449 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11450;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11449)(&v11450, v11448);
	i8 v11451 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11451 = v11450;

endsub:;
}
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f91_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f447_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f210_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f91_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f449_MakeSubroutineType(i8* /* type */, i8 /* subr */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01d9[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_51 workspace at ws+3008 length ws+0
void f544_reduce_51(void) {

	i8 v11452 = (i8)(intptr_t)(ws+2928);
	i8 v11453 = *(i8*)(intptr_t)v11452;
	i8 v11454 = v11453+(+46);
	i1 v11455 = *(i1*)(intptr_t)v11454;

	if (v11455 != +7) goto c02_08cd;

	i8 v11456 = (i8)(intptr_t)(ws+2928);
	i8 v11457 = *(i8*)(intptr_t)v11456;
	i4 v11458 = *(i4*)(intptr_t)v11457;
	i8 v11459 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11460;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11459)(&v11460, v11458);
	i8 v11461 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11461 = v11460;

	goto c02_08cc;

c02_08cd:;

	if (v11455 != +28) goto c02_08ce;

	i8 v11462 = (i8)(intptr_t)(ws+2928);
	i8 v11463 = *(i8*)(intptr_t)v11462;
	i2 v11464 = (i2)+0;
	i8 v11465 = (i8)(intptr_t)(f91_MidAddress);
	i8 v11466;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11465)(&v11466, v11464, v11463);
	i8 v11467 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11467 = v11466;

	i8 v11468 = (i8)(intptr_t)(ws+2928);
	i8 v11469 = *(i8*)(intptr_t)v11468;
	i8 v11470 = *(i8*)(intptr_t)v11469;
	i8 v11471 = (i8)(intptr_t)(f447_MakePointerType);
	i8 v11472;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11471)(&v11472, v11470);
	i8 v11473 = (i8)(intptr_t)(ws+2920);
	i8 v11474 = *(i8*)(intptr_t)v11473;
	i8 v11475 = v11474+(+16);
	*(i8*)(intptr_t)v11475 = v11472;

	i8 v11476 = (i8)(intptr_t)(ws+2920);
	i8 v11477 = *(i8*)(intptr_t)v11476;
	i8 v11478 = (i8)(intptr_t)(f210_MakeLValue);
	i8 v11479;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11478)(&v11479, v11477);
	i8 v11480 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11480 = v11479;

	goto c02_08cc;

c02_08ce:;

	if (v11455 != +25) goto c02_08cf;

	i8 v11481 = (i8)(intptr_t)(ws+2928);
	i8 v11482 = *(i8*)(intptr_t)v11481;
	i2 v11483 = (i2)+0;
	i8 v11484 = (i8)(intptr_t)(f91_MidAddress);
	i8 v11485;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v11484)(&v11485, v11483, v11482);
	i8 v11486 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11486 = v11485;

	i8 v11487 = (i8)(intptr_t)(ws+2928);
	i8 v11488 = *(i8*)(intptr_t)v11487;
	i8 v11489 = *(i8*)(intptr_t)v11488;
	i8 v11490 = (i8)(intptr_t)(f449_MakeSubroutineType);
	i8 v11491;

	((void(*)(i8* /* type */, i8 /* subr */))(intptr_t)v11490)(&v11491, v11489);
	i8 v11492 = (i8)(intptr_t)(ws+2920);
	i8 v11493 = *(i8*)(intptr_t)v11492;
	i8 v11494 = v11493+(+16);
	*(i8*)(intptr_t)v11494 = v11491;

	goto c02_08cc;

c02_08cf:;

	i8 v11495 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11495)();

	i8 v11496 = (i8)(intptr_t)(ws+2928);
	i8 v11497 = *(i8*)(intptr_t)v11496;
	i8 v11498 = v11497+(+48);
	i8 v11499 = *(i8*)(intptr_t)v11498;
	i8 v11500 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11500)(v11499);

	i8 v11501 = (i8)(intptr_t)c02_s01d9;
	i8 v11502 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11502)(v11501);

	i8 v11503 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11503)();

c02_08cc:;


endsub:;
}
	void f204_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01da[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f210_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_52 workspace at ws+3008 length ws+0
void f545_reduce_52(void) {

	i8 v11504 = (i8)(intptr_t)(ws+2936);
	i8 v11505 = *(i8*)(intptr_t)v11504;
	i8 v11506 = v11505+(+16);
	i8 v11507 = *(i8*)(intptr_t)v11506;
	i8 v11508 = (i8)(intptr_t)(f204_IsPtr);
	i1 v11509;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11508)(&v11509, v11507);
	i1 v11510 = (i1)+0;
	if (v11509==v11510) goto c02_08d3; else goto c02_08d4;

c02_08d3:;

	i8 v11511 = (i8)(intptr_t)c02_s01da;
	i8 v11512 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11512)(v11511);

	goto c02_08d0;

c02_08d4:;

c02_08d0:;

	i8 v11513 = (i8)(intptr_t)(ws+2936);
	i8 v11514 = *(i8*)(intptr_t)v11513;
	i8 v11515 = (i8)(intptr_t)(f210_MakeLValue);
	i8 v11516;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11515)(&v11516, v11514);
	i8 v11517 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11517 = v11516;

	i1 v11518 = (i1)+5;
	i8 v11519 = (i8)(intptr_t)(ws+2928);
	i8 v11520 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11520)(v11519, v11518);

endsub:;
}
	void f211_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f203_IsArray(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
const i1 c02_s01db[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f206_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01dc[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f153_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f447_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f210_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_53 workspace at ws+3008 length ws+48
void f546_reduce_53(void) {

	i8 v11521 = (i8)(intptr_t)(ws+2952);
	i8 v11522 = *(i8*)(intptr_t)v11521;
	i8 v11523 = v11522+(+16);
	i8 v11524 = *(i8*)(intptr_t)v11523;
	i8 v11525 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11525 = v11524;

	i8 v11526 = (i8)(intptr_t)(ws+2952);
	i8 v11527 = *(i8*)(intptr_t)v11526;
	i8 v11528 = (i8)(intptr_t)(f211_UndoLValue);
	i8 v11529;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11528)(&v11529, v11527);
	i8 v11530 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11530 = v11529;

	i8 v11531 = (i8)(intptr_t)(ws+3008);
	i8 v11532 = *(i8*)(intptr_t)v11531;
	i8 v11533 = (i8)(intptr_t)(f203_IsArray);
	i1 v11534;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11533)(&v11534, v11532);
	i1 v11535 = (i1)+0;
	if (v11534==v11535) goto c02_08d8; else goto c02_08d9;

c02_08d8:;

	i8 v11536 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11536)();

	i8 v11537 = (i8)(intptr_t)c02_s01db;
	i8 v11538 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11538)(v11537);

	i8 v11539 = (i8)(intptr_t)(ws+3008);
	i8 v11540 = *(i8*)(intptr_t)v11539;
	i8 v11541 = v11540+(+48);
	i8 v11542 = *(i8*)(intptr_t)v11541;
	i8 v11543 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11543)(v11542);

	i8 v11544 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11544)();

	goto c02_08d5;

c02_08d9:;

c02_08d5:;

	i8 v11545 = (i8)(intptr_t)(ws+2936);
	i8 v11546 = *(i8*)(intptr_t)v11545;
	i8 v11547 = (i8)(intptr_t)(ws+3008);
	i8 v11548 = *(i8*)(intptr_t)v11547;
	i8 v11549 = v11548+(+16);
	i8 v11550 = *(i8*)(intptr_t)v11549;
	i8 v11551 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v11551)(v11550, v11546);

	i8 v11552 = (i8)(intptr_t)(ws+2936);
	i8 v11553 = *(i8*)(intptr_t)v11552;
	i8 v11554 = v11553+(+16);
	i8 v11555 = *(i8*)(intptr_t)v11554;
	i8 v11556 = (i8)(intptr_t)(f206_IsNum);
	i1 v11557;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11556)(&v11557, v11555);
	i1 v11558 = (i1)+0;
	if (v11557==v11558) goto c02_08dd; else goto c02_08de;

c02_08dd:;

	i8 v11559 = (i8)(intptr_t)c02_s01dc;
	i8 v11560 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11560)(v11559);

	goto c02_08da;

c02_08de:;

c02_08da:;

	i8 v11561 = (i8)(intptr_t)(ws+3008);
	i8 v11562 = *(i8*)(intptr_t)v11561;
	i8 v11563 = *(i8*)(intptr_t)v11562;
	i8 v11564 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v11564 = v11563;

	i8 v11565 = (i8)(intptr_t)(ws+1056);
	i8 v11566 = *(i8*)(intptr_t)v11565;
	i8 v11567 = v11566+(+42);
	i2 v11568 = *(i2*)(intptr_t)v11567;
	i1 v11569 = v11568;
	i8 v11570 = (i8)(intptr_t)(ws+3032);
	*(i1*)(intptr_t)v11570 = v11569;

	i1 v11571 = (i1)+162;
	i8 v11572 = (i8)(intptr_t)(ws+3032);
	i1 v11573 = *(i1*)(intptr_t)v11572;
	i8 v11574 = (i8)(intptr_t)(ws+1056);
	i8 v11575 = *(i8*)(intptr_t)v11574;
	i8 v11576 = v11575+(+42);
	i2 v11577 = *(i2*)(intptr_t)v11576;
	i1 v11578 = v11577;
	i8 v11579 = (i8)(intptr_t)(ws+2936);
	i8 v11580 = *(i8*)(intptr_t)v11579;
	i1 v11581 = (i1)+0;
	i8 v11582 = (i8)(intptr_t)(f153_MidCCast);
	i8 v11583;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v11582)(&v11583, v11581, v11580, v11578);
	i8 v11584 = (i8)(intptr_t)(ws+3024);
	i8 v11585 = *(i8*)(intptr_t)v11584;
	i8 v11586 = v11585+(+44);
	i2 v11587 = *(i2*)(intptr_t)v11586;
	i4 v11588 = v11587;
	i8 v11589 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11590;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11589)(&v11590, v11588);
	i8 v11591 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v11592;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11591)(&v11592, v11590, v11583, v11573, v11571);
	i8 v11593 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v11593 = v11592;

	i8 v11594 = (i8)(intptr_t)(ws+1056);
	i8 v11595 = *(i8*)(intptr_t)v11594;
	i8 v11596 = (i8)(intptr_t)(ws+3040);
	i8 v11597 = *(i8*)(intptr_t)v11596;
	i8 v11598 = v11597+(+16);
	*(i8*)(intptr_t)v11598 = v11595;

	i1 v11599 = (i1)+157;
	i8 v11600 = (i8)(intptr_t)(ws+3032);
	i1 v11601 = *(i1*)(intptr_t)v11600;
	i8 v11602 = (i8)(intptr_t)(ws+3016);
	i8 v11603 = *(i8*)(intptr_t)v11602;
	i8 v11604 = (i8)(intptr_t)(ws+3040);
	i8 v11605 = *(i8*)(intptr_t)v11604;
	i8 v11606 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v11607;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11606)(&v11607, v11605, v11603, v11601, v11599);
	i8 v11608 = (i8)(intptr_t)(ws+3048);
	*(i8*)(intptr_t)v11608 = v11607;

	i8 v11609 = (i8)(intptr_t)(ws+3024);
	i8 v11610 = *(i8*)(intptr_t)v11609;
	i8 v11611 = (i8)(intptr_t)(f447_MakePointerType);
	i8 v11612;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11611)(&v11612, v11610);
	i8 v11613 = (i8)(intptr_t)(ws+3048);
	i8 v11614 = *(i8*)(intptr_t)v11613;
	i8 v11615 = v11614+(+16);
	*(i8*)(intptr_t)v11615 = v11612;

	i8 v11616 = (i8)(intptr_t)(ws+3048);
	i8 v11617 = *(i8*)(intptr_t)v11616;
	i8 v11618 = (i8)(intptr_t)(f210_MakeLValue);
	i8 v11619;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11618)(&v11619, v11617);
	i8 v11620 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11620 = v11619;

	i1 v11621 = (i1)+17;
	i8 v11622 = (i8)(intptr_t)(ws+2944);
	i8 v11623 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11623)(v11622, v11621);

	i1 v11624 = (i1)+5;
	i8 v11625 = (i8)(intptr_t)(ws+2928);
	i8 v11626 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11626)(v11625, v11624);

endsub:;
}
	void f211_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
	void f200_CheckNotPartialType(i8 /* type */);
	void f137_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	void f200_CheckNotPartialType(i8 /* type */);
	void f209_IsRecord(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01dd[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f195_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01de[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01df[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f32_Free(i8 /* block */);
	void f144_MidConstant(i8* /* m */, i4 /* value */);
	void f152_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f447_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f210_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3008 length ws+24
void f547_reduce_54(void) {

	i8 v11627 = (i8)(intptr_t)(ws+2944);
	i8 v11628 = *(i8*)(intptr_t)v11627;
	i8 v11629 = v11628+(+16);
	i8 v11630 = *(i8*)(intptr_t)v11629;
	i8 v11631 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11631 = v11630;

	i8 v11632 = (i8)(intptr_t)(ws+2944);
	i8 v11633 = *(i8*)(intptr_t)v11632;
	i8 v11634 = (i8)(intptr_t)(f211_UndoLValue);
	i8 v11635;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v11634)(&v11635, v11633);
	i8 v11636 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11636 = v11635;

c02_08e1:;

	i8 v11637 = (i8)(intptr_t)(ws+3008);
	i8 v11638 = *(i8*)(intptr_t)v11637;
	i8 v11639 = (i8)(intptr_t)(f204_IsPtr);
	i1 v11640;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11639)(&v11640, v11638);
	i1 v11641 = (i1)+0;
	if (v11640==v11641) goto c02_08e4; else goto c02_08e3;

c02_08e3:;

	i8 v11642 = (i8)(intptr_t)(ws+3008);
	i8 v11643 = *(i8*)(intptr_t)v11642;
	i8 v11644 = *(i8*)(intptr_t)v11643;
	i8 v11645 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11645 = v11644;

	i8 v11646 = (i8)(intptr_t)(ws+3008);
	i8 v11647 = *(i8*)(intptr_t)v11646;
	i8 v11648 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11648)(v11647);

	i8 v11649 = (i8)(intptr_t)(ws+1056);
	i8 v11650 = *(i8*)(intptr_t)v11649;
	i8 v11651 = v11650+(+42);
	i2 v11652 = *(i2*)(intptr_t)v11651;
	i1 v11653 = v11652;
	i8 v11654 = (i8)(intptr_t)(ws+3016);
	i8 v11655 = *(i8*)(intptr_t)v11654;
	i8 v11656 = (i8)(intptr_t)(f137_MidLoad);
	i8 v11657;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v11656)(&v11657, v11655, v11653);
	i8 v11658 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11658 = v11657;

	goto c02_08e1;

c02_08e4:;

	i8 v11659 = (i8)(intptr_t)(ws+3008);
	i8 v11660 = *(i8*)(intptr_t)v11659;
	i8 v11661 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v11661)(v11660);

	i8 v11662 = (i8)(intptr_t)(ws+3008);
	i8 v11663 = *(i8*)(intptr_t)v11662;
	i8 v11664 = (i8)(intptr_t)(f209_IsRecord);
	i1 v11665;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11664)(&v11665, v11663);
	i1 v11666 = (i1)+0;
	if (v11665==v11666) goto c02_08e8; else goto c02_08e9;

c02_08e8:;

	i8 v11667 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11667)();

	i8 v11668 = (i8)(intptr_t)(ws+3008);
	i8 v11669 = *(i8*)(intptr_t)v11668;
	i8 v11670 = v11669+(+48);
	i8 v11671 = *(i8*)(intptr_t)v11670;
	i8 v11672 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11672)(v11671);

	i8 v11673 = (i8)(intptr_t)c02_s01dd;
	i8 v11674 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11674)(v11673);

	i8 v11675 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11675)();

	goto c02_08e5;

c02_08e9:;

c02_08e5:;

	i8 v11676 = (i8)(intptr_t)(ws+3008);
	i8 v11677 = *(i8*)(intptr_t)v11676;
	i8 v11678 = (i8)(intptr_t)(ws+2928);
	i8 v11679 = *(i8*)(intptr_t)v11678;
	i8 v11680 = (i8)(intptr_t)(f195_LookupSymbol);
	i8 v11681;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11680)(&v11681, v11679, v11677);
	i8 v11682 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v11682 = v11681;

	i8 v11683 = (i8)(intptr_t)(ws+3024);
	i8 v11684 = *(i8*)(intptr_t)v11683;
	i8 v11685 = (i8)+0;
	if (v11684==v11685) goto c02_08ed; else goto c02_08ee;

c02_08ed:;

	i8 v11686 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11686)();

	i8 v11687 = (i8)(intptr_t)(ws+3008);
	i8 v11688 = *(i8*)(intptr_t)v11687;
	i8 v11689 = v11688+(+48);
	i8 v11690 = *(i8*)(intptr_t)v11689;
	i8 v11691 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11691)(v11690);

	i8 v11692 = (i8)(intptr_t)c02_s01de;
	i8 v11693 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11693)(v11692);

	i8 v11694 = (i8)(intptr_t)(ws+2928);
	i8 v11695 = *(i8*)(intptr_t)v11694;
	i8 v11696 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11696)(v11695);

	i8 v11697 = (i8)(intptr_t)c02_s01df;
	i8 v11698 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11698)(v11697);

	i8 v11699 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11699)();

	goto c02_08ea;

c02_08ee:;

c02_08ea:;

	i8 v11700 = (i8)(intptr_t)(ws+2928);
	i8 v11701 = *(i8*)(intptr_t)v11700;
	i8 v11702 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v11702)(v11701);

	i1 v11703 = (i1)+157;
	i8 v11704 = (i8)(intptr_t)(ws+1056);
	i8 v11705 = *(i8*)(intptr_t)v11704;
	i8 v11706 = v11705+(+42);
	i2 v11707 = *(i2*)(intptr_t)v11706;
	i1 v11708 = v11707;
	i8 v11709 = (i8)(intptr_t)(ws+3016);
	i8 v11710 = *(i8*)(intptr_t)v11709;
	i8 v11711 = (i8)(intptr_t)(ws+3024);
	i8 v11712 = *(i8*)(intptr_t)v11711;
	i8 v11713 = v11712+(+32);
	i2 v11714 = *(i2*)(intptr_t)v11713;
	i4 v11715 = v11714;
	i8 v11716 = (i8)(intptr_t)(f144_MidConstant);
	i8 v11717;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v11716)(&v11717, v11715);
	i8 v11718 = (i8)(intptr_t)(f152_MidC2Op);
	i8 v11719;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v11718)(&v11719, v11717, v11710, v11708, v11703);
	i8 v11720 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11720 = v11719;

	i8 v11721 = (i8)(intptr_t)(ws+3024);
	i8 v11722 = *(i8*)(intptr_t)v11721;
	i8 v11723 = *(i8*)(intptr_t)v11722;
	i8 v11724 = (i8)(intptr_t)(f447_MakePointerType);
	i8 v11725;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11724)(&v11725, v11723);
	i8 v11726 = (i8)(intptr_t)(ws+2920);
	i8 v11727 = *(i8*)(intptr_t)v11726;
	i8 v11728 = v11727+(+16);
	*(i8*)(intptr_t)v11728 = v11725;

	i8 v11729 = (i8)(intptr_t)(ws+2920);
	i8 v11730 = *(i8*)(intptr_t)v11729;
	i8 v11731 = (i8)(intptr_t)(f210_MakeLValue);
	i8 v11732;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v11731)(&v11732, v11730);
	i8 v11733 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11733 = v11732;

	i1 v11734 = (i1)+8;
	i8 v11735 = (i8)(intptr_t)(ws+2936);
	i8 v11736 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11736)(v11735, v11734);

endsub:;
}
	void f136_MidString(i8* /* m */, i8 /* text */);
	void f447_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_55 workspace at ws+3008 length ws+0
void f548_reduce_55(void) {

	i8 v11737 = (i8)(intptr_t)(ws+2928);
	i8 v11738 = *(i8*)(intptr_t)v11737;
	i8 v11739 = (i8)(intptr_t)(f136_MidString);
	i8 v11740;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v11739)(&v11740, v11738);
	i8 v11741 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11741 = v11740;

	i8 v11742 = (i8)(intptr_t)(ws+1040);
	i8 v11743 = *(i8*)(intptr_t)v11742;
	i8 v11744 = (i8)(intptr_t)(f447_MakePointerType);
	i8 v11745;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11744)(&v11745, v11743);
	i8 v11746 = (i8)(intptr_t)(ws+2920);
	i8 v11747 = *(i8*)(intptr_t)v11746;
	i8 v11748 = v11747+(+16);
	*(i8*)(intptr_t)v11748 = v11745;

endsub:;
}
	void f476_parser_i_constant_error(void);
	void f56_Discard(i8 /* node */);

// reduce_56 workspace at ws+3008 length ws+0
void f549_reduce_56(void) {

	i8 v11749 = (i8)(intptr_t)(ws+2928);
	i8 v11750 = *(i8*)(intptr_t)v11749;
	i8 v11751 = v11750+(+58);
	i1 v11752 = *(i1*)(intptr_t)v11751;
	i1 v11753 = (i1)+42;
	if (v11752==v11753) goto c02_08f3; else goto c02_08f2;

c02_08f2:;

	i8 v11754 = (i8)(intptr_t)(f476_parser_i_constant_error);

	((void(*)(void))(intptr_t)v11754)();

	goto c02_08ef;

c02_08f3:;

c02_08ef:;

	i8 v11755 = (i8)(intptr_t)(ws+2928);
	i8 v11756 = *(i8*)(intptr_t)v11755;
	i4 v11757 = *(i4*)(intptr_t)v11756;
	i8 v11758 = (i8)(intptr_t)(ws+2920);
	*(i4*)(intptr_t)v11758 = v11757;

	i8 v11759 = (i8)(intptr_t)(ws+2928);
	i8 v11760 = *(i8*)(intptr_t)v11759;
	i8 v11761 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v11761)(v11760);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_57 workspace at ws+3008 length ws+0
void f550_reduce_57(void) {

	i1 v11762 = (i1)+7;
	i8 v11763 = (i8)(intptr_t)(ws+2952);
	i8 v11764 = *(i8*)(intptr_t)v11763;
	i8 v11765 = v11764+(+46);
	*(i1*)(intptr_t)v11765 = v11762;

	i8 v11766 = (i8)(intptr_t)(ws+2936);
	i4 v11767 = *(i4*)(intptr_t)v11766;
	i8 v11768 = (i8)(intptr_t)(ws+2952);
	i8 v11769 = *(i8*)(intptr_t)v11768;
	*(i4*)(intptr_t)v11769 = v11767;

	i1 v11770 = (i1)+2;
	i8 v11771 = (i8)(intptr_t)(ws+2944);
	i8 v11772 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11772)(v11771, v11770);

	i1 v11773 = (i1)+22;
	i8 v11774 = (i8)(intptr_t)(ws+2928);
	i8 v11775 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11775)(v11774, v11773);

endsub:;
}
const i1 c02_s01e0[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f220_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_58 workspace at ws+3008 length ws+0
void f551_reduce_58(void) {

	i8 v11776 = (i8)(intptr_t)(ws+2952);
	i4 v11777 = *(i4*)(intptr_t)v11776;
	i8 v11778 = (i8)(intptr_t)(ws+2936);
	i4 v11779 = *(i4*)(intptr_t)v11778;
	if ((s4)v11777<(s4)v11779) goto c02_08f8; else goto c02_08f7;

c02_08f7:;

	i8 v11780 = (i8)(intptr_t)c02_s01e0;
	i8 v11781 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11781)(v11780);

	goto c02_08f4;

c02_08f8:;

c02_08f4:;

	i8 v11782 = (i8)(intptr_t)(ws+2952);
	i4 v11783 = *(i4*)(intptr_t)v11782;
	i8 v11784 = (i8)(intptr_t)(ws+2936);
	i4 v11785 = *(i4*)(intptr_t)v11784;
	i8 v11786 = (i8)(intptr_t)(f220_ArchGuessIntType);
	i8 v11787;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v11786)(&v11787, v11785, v11783);
	i8 v11788 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11788 = v11787;

	i1 v11789 = (i1)+16;
	i8 v11790 = (i8)(intptr_t)(ws+2960);
	i8 v11791 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11791)(v11790, v11789);

	i1 v11792 = (i1)+45;
	i8 v11793 = (i8)(intptr_t)(ws+2944);
	i8 v11794 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11794)(v11793, v11792);

	i1 v11795 = (i1)+4;
	i8 v11796 = (i8)(intptr_t)(ws+2928);
	i8 v11797 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11797)(v11796, v11795);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s01e1[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e2[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_59 workspace at ws+3008 length ws+8
void f552_reduce_59(void) {

	i8 v11798 = (i8)(intptr_t)(ws+2928);
	i8 v11799 = *(i8*)(intptr_t)v11798;
	i8 v11800 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11800 = v11799;

	i8 v11801 = (i8)(intptr_t)(ws+3008);
	i8 v11802 = *(i8*)(intptr_t)v11801;
	i8 v11803 = v11802+(+46);
	i1 v11804 = *(i1*)(intptr_t)v11803;
	i1 v11805 = (i1)+0;
	if (v11804==v11805) goto c02_08fc; else goto c02_08fd;

c02_08fc:;

	i1 v11806 = (i1)+30;
	i8 v11807 = (i8)(intptr_t)(ws+3008);
	i8 v11808 = *(i8*)(intptr_t)v11807;
	i8 v11809 = v11808+(+46);
	*(i1*)(intptr_t)v11809 = v11806;

	i1 v11810 = (i1)+1;
	i8 v11811 = (i8)(intptr_t)(ws+3008);
	i8 v11812 = *(i8*)(intptr_t)v11811;
	i8 v11813 = v11812+(+40);
	*(i1*)(intptr_t)v11813 = v11810;

	goto c02_08f9;

c02_08fd:;

c02_08f9:;

	i8 v11814 = (i8)(intptr_t)(ws+3008);
	i8 v11815 = *(i8*)(intptr_t)v11814;
	i8 v11816 = v11815+(+46);
	i1 v11817 = *(i1*)(intptr_t)v11816;
	i1 v11818 = (i1)+30;
	if (v11817==v11818) goto c02_0902; else goto c02_0901;

c02_0901:;

	i8 v11819 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11819)();

	i8 v11820 = (i8)(intptr_t)c02_s01e1;
	i8 v11821 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11821)(v11820);

	i8 v11822 = (i8)(intptr_t)(ws+3008);
	i8 v11823 = *(i8*)(intptr_t)v11822;
	i8 v11824 = v11823+(+48);
	i8 v11825 = *(i8*)(intptr_t)v11824;
	i8 v11826 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11826)(v11825);

	i8 v11827 = (i8)(intptr_t)c02_s01e2;
	i8 v11828 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11828)(v11827);

	i8 v11829 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11829)();

	goto c02_08fe;

c02_0902:;

c02_08fe:;

	i8 v11830 = (i8)(intptr_t)(ws+3008);
	i8 v11831 = *(i8*)(intptr_t)v11830;
	i8 v11832 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11832 = v11831;

endsub:;
}
	void f447_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3008 length ws+0
void f553_reduce_60(void) {

	i8 v11833 = (i8)(intptr_t)(ws+2936);
	i8 v11834 = *(i8*)(intptr_t)v11833;
	i8 v11835 = (i8)(intptr_t)(f447_MakePointerType);
	i8 v11836;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v11835)(&v11836, v11834);
	i8 v11837 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11837 = v11836;

	i1 v11838 = (i1)+5;
	i8 v11839 = (i8)(intptr_t)(ws+2928);
	i8 v11840 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11840)(v11839, v11838);

endsub:;
}
	void f448_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_61 workspace at ws+3008 length ws+0
void f554_reduce_61(void) {

	i8 v11841 = (i8)(intptr_t)(ws+2952);
	i8 v11842 = *(i8*)(intptr_t)v11841;
	i8 v11843 = (i8)(intptr_t)(ws+2936);
	i4 v11844 = *(i4*)(intptr_t)v11843;
	i2 v11845 = (s2)(s4)v11844;
	i8 v11846 = (i8)(intptr_t)(f448_MakeArrayType);
	i8 v11847;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v11846)(&v11847, v11845, v11842);
	i8 v11848 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11848 = v11847;

	i1 v11849 = (i1)+17;
	i8 v11850 = (i8)(intptr_t)(ws+2944);
	i8 v11851 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11851)(v11850, v11849);

	i1 v11852 = (i1)+5;
	i8 v11853 = (i8)(intptr_t)(ws+2928);
	i8 v11854 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11854)(v11853, v11852);

endsub:;
}
	void f448_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3008 length ws+0
void f555_reduce_62(void) {

	i8 v11855 = (i8)(intptr_t)(ws+2944);
	i8 v11856 = *(i8*)(intptr_t)v11855;
	i2 v11857 = (i2)+0;
	i8 v11858 = (i8)(intptr_t)(f448_MakeArrayType);
	i8 v11859;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v11858)(&v11859, v11857, v11856);
	i8 v11860 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11860 = v11859;

	i1 v11861 = (i1)+17;
	i8 v11862 = (i8)(intptr_t)(ws+2936);
	i8 v11863 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11863)(v11862, v11861);

	i1 v11864 = (i1)+5;
	i8 v11865 = (i8)(intptr_t)(ws+2928);
	i8 v11866 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11866)(v11865, v11864);

endsub:;
}
	void f203_IsArray(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e3[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_63 workspace at ws+3008 length ws+0
void f556_reduce_63(void) {

	i8 v11867 = (i8)(intptr_t)(ws+2928);
	i8 v11868 = *(i8*)(intptr_t)v11867;
	i8 v11869 = (i8)(intptr_t)(f203_IsArray);
	i1 v11870;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v11869)(&v11870, v11868);
	i1 v11871 = (i1)+0;
	if (v11870==v11871) goto c02_0906; else goto c02_0907;

c02_0906:;

	i8 v11872 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11872)();

	i8 v11873 = (i8)(intptr_t)(ws+2928);
	i8 v11874 = *(i8*)(intptr_t)v11873;
	i8 v11875 = v11874+(+48);
	i8 v11876 = *(i8*)(intptr_t)v11875;
	i8 v11877 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11877)(v11876);

	i8 v11878 = (i8)(intptr_t)c02_s01e3;
	i8 v11879 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11879)(v11878);

	i8 v11880 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11880)();

	goto c02_0903;

c02_0907:;

c02_0903:;

	i8 v11881 = (i8)(intptr_t)(ws+2928);
	i8 v11882 = *(i8*)(intptr_t)v11881;
	i8 v11883 = v11882+(+16);
	i8 v11884 = *(i8*)(intptr_t)v11883;
	i8 v11885 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11885 = v11884;

endsub:;
}
	void f198_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3008 length ws+8
void f557_reduce_64(void) {

	i8 v11886 = (i8)+0;
	i8 v11887 = (i8)(intptr_t)(ws+2952);
	i8 v11888 = *(i8*)(intptr_t)v11887;
	i8 v11889 = (i8)(intptr_t)(ws+2936);
	i8 v11890 = *(i8*)(intptr_t)v11889;
	i8 v11891 = (i8)(intptr_t)(f198_AddAlias);
	i8 v11892;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v11891)(&v11892, v11890, v11888, v11886);
	i8 v11893 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11893 = v11892;

	i1 v11894 = (i1)+65;
	i8 v11895 = (i8)(intptr_t)(ws+2944);
	i8 v11896 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11896)(v11895, v11894);

	i1 v11897 = (i1)+22;
	i8 v11898 = (i8)(intptr_t)(ws+2928);
	i8 v11899 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11899)(v11898, v11897);

endsub:;
}
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_65 workspace at ws+3008 length ws+0
void f558_reduce_65(void) {

	i8 v11900 = (i8)+0;
	i8 v11901 = (i8)(intptr_t)(ws+2928);
	i8 v11902 = *(i8*)(intptr_t)v11901;
	i8 v11903 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v11904;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11903)(&v11904, v11902, v11900);
	i8 v11905 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11905 = v11904;

endsub:;
}
	void f195_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f59_StartError(void);
const i1 c02_s01e4[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01e5[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f32_Free(i8 /* block */);

// reduce_66 workspace at ws+3008 length ws+16
void f559_reduce_66(void) {

	i8 v11906 = (i8)(intptr_t)(ws+2928);
	i8 v11907 = *(i8*)(intptr_t)v11906;
	i8 v11908 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11908 = v11907;

	i8 v11909 = (i8)+0;
	i8 v11910 = (i8)(intptr_t)(ws+3008);
	i8 v11911 = *(i8*)(intptr_t)v11910;
	i8 v11912 = (i8)(intptr_t)(f195_LookupSymbol);
	i8 v11913;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11912)(&v11913, v11911, v11909);
	i8 v11914 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11914 = v11913;

	i8 v11915 = (i8)(intptr_t)(ws+3016);
	i8 v11916 = *(i8*)(intptr_t)v11915;
	i8 v11917 = (i8)+0;
	if (v11916==v11917) goto c02_090b; else goto c02_090c;

c02_090b:;

	i8 v11918 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v11918)();

	i8 v11919 = (i8)(intptr_t)c02_s01e4;
	i8 v11920 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11920)(v11919);

	i8 v11921 = (i8)(intptr_t)(ws+3008);
	i8 v11922 = *(i8*)(intptr_t)v11921;
	i8 v11923 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11923)(v11922);

	i8 v11924 = (i8)(intptr_t)c02_s01e5;
	i8 v11925 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v11925)(v11924);

	i8 v11926 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v11926)();

	goto c02_0908;

c02_090c:;

c02_0908:;

	i8 v11927 = (i8)(intptr_t)(ws+3008);
	i8 v11928 = *(i8*)(intptr_t)v11927;
	i8 v11929 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v11929)(v11928);

	i8 v11930 = (i8)(intptr_t)(ws+3016);
	i8 v11931 = *(i8*)(intptr_t)v11930;
	i8 v11932 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11932 = v11931;

endsub:;
}
	void f195_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f32_Free(i8 /* block */);

// reduce_67 workspace at ws+3008 length ws+16
void f560_reduce_67(void) {

	i8 v11933 = (i8)(intptr_t)(ws+2928);
	i8 v11934 = *(i8*)(intptr_t)v11933;
	i8 v11935 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11935 = v11934;

	i8 v11936 = (i8)+0;
	i8 v11937 = (i8)(intptr_t)(ws+3008);
	i8 v11938 = *(i8*)(intptr_t)v11937;
	i8 v11939 = (i8)(intptr_t)(f195_LookupSymbol);
	i8 v11940;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11939)(&v11940, v11938, v11936);
	i8 v11941 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11941 = v11940;

	i8 v11942 = (i8)(intptr_t)(ws+3016);
	i8 v11943 = *(i8*)(intptr_t)v11942;
	i8 v11944 = (i8)+0;
	if (v11943==v11944) goto c02_0910; else goto c02_0911;

c02_0910:;

	i8 v11945 = (i8)+0;
	i8 v11946 = (i8)(intptr_t)(ws+3008);
	i8 v11947 = *(i8*)(intptr_t)v11946;
	i8 v11948 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v11949;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v11948)(&v11949, v11947, v11945);
	i8 v11950 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v11950 = v11949;

	goto c02_090d;

c02_0911:;

	i8 v11951 = (i8)(intptr_t)(ws+3008);
	i8 v11952 = *(i8*)(intptr_t)v11951;
	i8 v11953 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v11953)(v11952);

c02_090d:;

	i8 v11954 = (i8)(intptr_t)(ws+3016);
	i8 v11955 = *(i8*)(intptr_t)v11954;
	i8 v11956 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11956 = v11955;

endsub:;
}
const i1 c02_s01e6[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_68 workspace at ws+3008 length ws+0
void f561_reduce_68(void) {

	i8 v11957 = (i8)(intptr_t)(ws+2928);
	i8 v11958 = *(i8*)(intptr_t)v11957;
	i8 v11959 = v11958+(+46);
	i1 v11960 = *(i1*)(intptr_t)v11959;
	i1 v11961 = (i1)+28;
	if (v11960==v11961) goto c02_0915; else goto c02_0916;

c02_0915:;

	i8 v11962 = (i8)(intptr_t)(ws+2928);
	i8 v11963 = *(i8*)(intptr_t)v11962;
	i8 v11964 = *(i8*)(intptr_t)v11963;
	i8 v11965 = (i8)(intptr_t)(ws+2928);
	*(i8*)(intptr_t)v11965 = v11964;

	goto c02_0912;

c02_0916:;

c02_0912:;

	i8 v11966 = (i8)(intptr_t)(ws+2928);
	i8 v11967 = *(i8*)(intptr_t)v11966;
	i8 v11968 = v11967+(+46);
	i1 v11969 = *(i1*)(intptr_t)v11968;
	i1 v11970 = (i1)+30;
	if (v11969==v11970) goto c02_091b; else goto c02_091a;

c02_091a:;

	i8 v11971 = (i8)(intptr_t)c02_s01e6;
	i8 v11972 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11972)(v11971);

	goto c02_0917;

c02_091b:;

c02_0917:;

	i8 v11973 = (i8)(intptr_t)(ws+2928);
	i8 v11974 = *(i8*)(intptr_t)v11973;
	i8 v11975 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11975 = v11974;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_69 workspace at ws+3008 length ws+0
void f562_reduce_69(void) {

	i8 v11976 = (i8)(intptr_t)(ws+2936);
	i8 v11977 = *(i8*)(intptr_t)v11976;
	i8 v11978 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v11978 = v11977;

	i1 v11979 = (i1)+4;
	i8 v11980 = (i8)(intptr_t)(ws+2928);
	i8 v11981 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v11981)(v11980, v11979);

endsub:;
}
	void f477_i_check_sub_call_args(void);
const i1 c02_s01e7[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f61_SimpleError(i8 /* message */);
	void f98_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f478_i_end_call(void);

// reduce_70 workspace at ws+3008 length ws+16
void f563_reduce_70(void) {

	i8 v11982 = (i8)(intptr_t)(ws+80);
	i8 v11983 = *(i8*)(intptr_t)v11982;
	i8 v11984 = v11983+(+8);
	i8 v11985 = *(i8*)(intptr_t)v11984;
	i8 v11986 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v11986 = v11985;

	i1 v11987 = (i1)+1;
	i8 v11988 = (i8)(intptr_t)(ws+80);
	i8 v11989 = *(i8*)(intptr_t)v11988;
	i8 v11990 = v11989+(+41);
	*(i1*)(intptr_t)v11990 = v11987;

	i8 v11991 = (i8)(intptr_t)(f477_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v11991)();

	i8 v11992 = (i8)(intptr_t)(ws+3008);
	i8 v11993 = *(i8*)(intptr_t)v11992;
	i8 v11994 = v11993+(+105);
	i1 v11995 = *(i1*)(intptr_t)v11994;
	i1 v11996 = (i1)+1;
	if (v11995==v11996) goto c02_0920; else goto c02_091f;

c02_091f:;

	i8 v11997 = (i8)(intptr_t)c02_s01e7;
	i8 v11998 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v11998)(v11997);

	goto c02_091c;

c02_0920:;

c02_091c:;

	i8 v11999 = (i8)(intptr_t)(ws+3008);
	i8 v12000 = *(i8*)(intptr_t)v11999;
	i8 v12001 = v12000+(+48);
	i8 v12002 = *(i8*)(intptr_t)v12001;
	i8 v12003 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v12003 = v12002;

	i8 v12004 = (i8)(intptr_t)(ws+3016);
	i8 v12005 = *(i8*)(intptr_t)v12004;
	i8 v12006 = *(i8*)(intptr_t)v12005;
	i8 v12007 = v12006+(+42);
	i2 v12008 = *(i2*)(intptr_t)v12007;
	i1 v12009 = v12008;
	i8 v12010 = (i8)(intptr_t)(ws+2928);
	i8 v12011 = *(i8*)(intptr_t)v12010;
	i8 v12012 = (i8)(intptr_t)(ws+80);
	i8 v12013 = *(i8*)(intptr_t)v12012;
	i8 v12014 = *(i8*)(intptr_t)v12013;
	i8 v12015 = (i8)(intptr_t)(ws+3008);
	i8 v12016 = *(i8*)(intptr_t)v12015;
	i8 v12017 = (i8)(intptr_t)(f98_MidCalle);
	i8 v12018;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12017)(&v12018, v12016, v12014, v12011, v12009);
	i8 v12019 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12019 = v12018;

	i8 v12020 = (i8)(intptr_t)(ws+3016);
	i8 v12021 = *(i8*)(intptr_t)v12020;
	i8 v12022 = *(i8*)(intptr_t)v12021;
	i8 v12023 = (i8)(intptr_t)(ws+2920);
	i8 v12024 = *(i8*)(intptr_t)v12023;
	i8 v12025 = v12024+(+16);
	*(i8*)(intptr_t)v12025 = v12022;

	i8 v12026 = (i8)(intptr_t)(f478_i_end_call);

	((void(*)(void))(intptr_t)v12026)();

endsub:;
}
	void f477_i_check_sub_call_args(void);
const i1 c02_s01e8[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f99_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f443_Generate(i8 /* statement */);
	void f478_i_end_call(void);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3008 length ws+8
void f564_reduce_71(void) {

	i8 v12027 = (i8)(intptr_t)(ws+80);
	i8 v12028 = *(i8*)(intptr_t)v12027;
	i8 v12029 = v12028+(+8);
	i8 v12030 = *(i8*)(intptr_t)v12029;
	i8 v12031 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12031 = v12030;

	i8 v12032 = (i8)(intptr_t)(f477_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v12032)();

	i8 v12033 = (i8)(intptr_t)(ws+3008);
	i8 v12034 = *(i8*)(intptr_t)v12033;
	i8 v12035 = v12034+(+105);
	i1 v12036 = *(i1*)(intptr_t)v12035;
	i1 v12037 = (i1)+0;
	if (v12036==v12037) goto c02_0925; else goto c02_0924;

c02_0924:;

	i8 v12038 = (i8)(intptr_t)c02_s01e8;
	i8 v12039 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12039)(v12038);

	goto c02_0921;

c02_0925:;

c02_0921:;

	i8 v12040 = (i8)(intptr_t)(ws+2936);
	i8 v12041 = *(i8*)(intptr_t)v12040;
	i8 v12042 = (i8)(intptr_t)(ws+80);
	i8 v12043 = *(i8*)(intptr_t)v12042;
	i8 v12044 = *(i8*)(intptr_t)v12043;
	i8 v12045 = (i8)(intptr_t)(ws+3008);
	i8 v12046 = *(i8*)(intptr_t)v12045;
	i8 v12047 = (i8)(intptr_t)(f99_MidCall);
	i8 v12048;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v12047)(&v12048, v12046, v12044, v12041);
	i8 v12049 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12049)(v12048);

	i8 v12050 = (i8)(intptr_t)(f478_i_end_call);

	((void(*)(void))(intptr_t)v12050)();

	i1 v12051 = (i1)+22;
	i8 v12052 = (i8)(intptr_t)(ws+2928);
	i8 v12053 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12053)(v12052, v12051);

endsub:;
}
	void f477_i_check_sub_call_args(void);
	void f99_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f443_Generate(i8 /* statement */);
const i1 c02_s01e9[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f85_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01ea[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f447_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f200_CheckNotPartialType(i8 /* type */);
	void f200_CheckNotPartialType(i8 /* type */);
	void f124_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f106_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f56_Discard(i8 /* node */);
const i1 c02_s01eb[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f478_i_end_call(void);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_72 workspace at ws+3008 length ws+41
void f565_reduce_72(void) {

	i8 v12054 = (i8)(intptr_t)(ws+80);
	i8 v12055 = *(i8*)(intptr_t)v12054;
	i8 v12056 = v12055+(+8);
	i8 v12057 = *(i8*)(intptr_t)v12056;
	i8 v12058 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12058 = v12057;

	i8 v12059 = (i8)(intptr_t)(f477_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v12059)();

	i8 v12060 = (i8)(intptr_t)(ws+2936);
	i8 v12061 = *(i8*)(intptr_t)v12060;
	i8 v12062 = (i8)(intptr_t)(ws+80);
	i8 v12063 = *(i8*)(intptr_t)v12062;
	i8 v12064 = *(i8*)(intptr_t)v12063;
	i8 v12065 = (i8)(intptr_t)(ws+3008);
	i8 v12066 = *(i8*)(intptr_t)v12065;
	i8 v12067 = (i8)(intptr_t)(f99_MidCall);
	i8 v12068;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v12067)(&v12068, v12066, v12064, v12061);
	i8 v12069 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12069)(v12068);

	i8 v12070 = (i8)(intptr_t)(ws+3008);
	i8 v12071 = *(i8*)(intptr_t)v12070;
	i8 v12072 = v12071+(+105);
	i1 v12073 = *(i1*)(intptr_t)v12072;
	i8 v12074 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v12074 = v12073;

	i1 v12075 = (i1)+0;
	i8 v12076 = (i8)(intptr_t)(ws+3017);
	*(i1*)(intptr_t)v12076 = v12075;

	i8 v12077 = (i8)(intptr_t)(ws+2960);
	i8 v12078 = *(i8*)(intptr_t)v12077;
	i8 v12079 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v12079 = v12078;

c02_0928:;

	i8 v12080 = (i8)(intptr_t)(ws+3024);
	i8 v12081 = *(i8*)(intptr_t)v12080;
	i8 v12082 = (i8)+0;
	if (v12081==v12082) goto c02_092b; else goto c02_092a;

c02_092a:;

	i8 v12083 = (i8)(intptr_t)(ws+3016);
	i1 v12084 = *(i1*)(intptr_t)v12083;
	i1 v12085 = (i1)+0;
	if (v12084==v12085) goto c02_092f; else goto c02_0930;

c02_092f:;

	i8 v12086 = (i8)(intptr_t)c02_s01e9;
	i8 v12087 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12087)(v12086);

	goto c02_092c;

c02_0930:;

c02_092c:;

	i8 v12088 = (i8)(intptr_t)(ws+3016);
	i1 v12089 = *(i1*)(intptr_t)v12088;
	i1 v12090 = v12089+(-1);
	i8 v12091 = (i8)(intptr_t)(ws+3016);
	*(i1*)(intptr_t)v12091 = v12090;

	i8 v12092 = (i8)(intptr_t)(ws+3008);
	i8 v12093 = *(i8*)(intptr_t)v12092;
	i8 v12094 = (i8)(intptr_t)(ws+3016);
	i1 v12095 = *(i1*)(intptr_t)v12094;
	i8 v12096 = (i8)(intptr_t)(f85_GetOutputParameter);
	i8 v12097;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v12096)(&v12097, v12095, v12093);
	i8 v12098 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v12098 = v12097;

	i8 v12099 = (i8)(intptr_t)(ws+3024);
	i8 v12100 = *(i8*)(intptr_t)v12099;
	i8 v12101 = v12100+(+24);
	i8 v12102 = *(i8*)(intptr_t)v12101;
	i8 v12103 = (i8)(intptr_t)(ws+3040);
	*(i8*)(intptr_t)v12103 = v12102;

	i8 v12104 = (i8)+0;
	i8 v12105 = (i8)(intptr_t)(ws+3024);
	i8 v12106 = *(i8*)(intptr_t)v12105;
	i8 v12107 = v12106+(+24);
	*(i8*)(intptr_t)v12107 = v12104;

	i8 v12108 = (i8)(intptr_t)(ws+3024);
	i8 v12109 = *(i8*)(intptr_t)v12108;
	i8 v12110 = v12109+(+32);
	i8 v12111 = *(i8*)(intptr_t)v12110;
	i8 v12112 = (i8)(intptr_t)(ws+3024);
	*(i8*)(intptr_t)v12112 = v12111;

	i8 v12113 = (i8)(intptr_t)(ws+3040);
	i8 v12114 = *(i8*)(intptr_t)v12113;
	i8 v12115 = v12114+(+16);
	i8 v12116 = *(i8*)(intptr_t)v12115;
	i8 v12117 = (i8)(intptr_t)(f204_IsPtr);
	i1 v12118;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12117)(&v12118, v12116);
	i1 v12119 = (i1)+0;
	if (v12118==v12119) goto c02_0934; else goto c02_0935;

c02_0934:;

	i8 v12120 = (i8)(intptr_t)c02_s01ea;
	i8 v12121 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12121)(v12120);

	goto c02_0931;

c02_0935:;

c02_0931:;

	i8 v12122 = (i8)(intptr_t)(ws+3040);
	i8 v12123 = *(i8*)(intptr_t)v12122;
	i8 v12124 = (i8)(intptr_t)(ws+3032);
	i8 v12125 = *(i8*)(intptr_t)v12124;
	i8 v12126 = *(i8*)(intptr_t)v12125;
	i8 v12127 = (i8)(intptr_t)(f447_MakePointerType);
	i8 v12128;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v12127)(&v12128, v12126);
	i8 v12129 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v12129)(v12128, v12123);

	i8 v12130 = (i8)(intptr_t)(ws+3032);
	i8 v12131 = *(i8*)(intptr_t)v12130;
	i8 v12132 = *(i8*)(intptr_t)v12131;
	i8 v12133 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12133)(v12132);

	i8 v12134 = (i8)(intptr_t)(ws+3040);
	i8 v12135 = *(i8*)(intptr_t)v12134;
	i8 v12136 = v12135+(+16);
	i8 v12137 = *(i8*)(intptr_t)v12136;
	i8 v12138 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12138)(v12137);

	i8 v12139 = (i8)(intptr_t)(ws+3032);
	i8 v12140 = *(i8*)(intptr_t)v12139;
	i8 v12141 = *(i8*)(intptr_t)v12140;
	i8 v12142 = v12141+(+42);
	i2 v12143 = *(i2*)(intptr_t)v12142;
	i1 v12144 = v12143;
	i8 v12145 = (i8)(intptr_t)(ws+3048);
	*(i1*)(intptr_t)v12145 = v12144;

	i8 v12146 = (i8)(intptr_t)(ws+3048);
	i1 v12147 = *(i1*)(intptr_t)v12146;
	i8 v12148 = (i8)(intptr_t)(ws+3048);
	i1 v12149 = *(i1*)(intptr_t)v12148;
	i8 v12150 = (i8)(intptr_t)(ws+3008);
	i8 v12151 = *(i8*)(intptr_t)v12150;
	i8 v12152 = (i8)(intptr_t)(ws+3017);
	i1 v12153 = *(i1*)(intptr_t)v12152;
	i8 v12154 = (i8)(intptr_t)(f124_MidPoparg);
	i8 v12155;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v12154)(&v12155, v12153, v12151, v12149);
	i8 v12156 = (i8)(intptr_t)(ws+3040);
	i8 v12157 = *(i8*)(intptr_t)v12156;
	i8 v12158 = (i8)(intptr_t)(f106_MidStore);
	i8 v12159;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12158)(&v12159, v12157, v12155, v12147);
	i8 v12160 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12160)(v12159);

	i8 v12161 = (i8)(intptr_t)(ws+3017);
	i1 v12162 = *(i1*)(intptr_t)v12161;
	i1 v12163 = v12162+(+1);
	i8 v12164 = (i8)(intptr_t)(ws+3017);
	*(i1*)(intptr_t)v12164 = v12163;

	i8 v12165 = (i8)(intptr_t)(ws+3032);
	i8 v12166 = *(i8*)(intptr_t)v12165;
	i8 v12167 = v12166+(+16);
	i8 v12168 = *(i8*)(intptr_t)v12167;
	i8 v12169 = (i8)(intptr_t)(ws+3032);
	*(i8*)(intptr_t)v12169 = v12168;

	goto c02_0928;

c02_092b:;

	i8 v12170 = (i8)(intptr_t)(ws+2960);
	i8 v12171 = *(i8*)(intptr_t)v12170;
	i8 v12172 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12172)(v12171);

	i8 v12173 = (i8)(intptr_t)(ws+3017);
	i1 v12174 = *(i1*)(intptr_t)v12173;
	i8 v12175 = (i8)(intptr_t)(ws+3008);
	i8 v12176 = *(i8*)(intptr_t)v12175;
	i8 v12177 = v12176+(+105);
	i1 v12178 = *(i1*)(intptr_t)v12177;
	if (v12174==v12178) goto c02_093a; else goto c02_0939;

c02_0939:;

	i8 v12179 = (i8)(intptr_t)c02_s01eb;
	i8 v12180 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12180)(v12179);

	goto c02_0936;

c02_093a:;

c02_0936:;

	i8 v12181 = (i8)(intptr_t)(f478_i_end_call);

	((void(*)(void))(intptr_t)v12181)();

	i1 v12182 = (i1)+2;
	i8 v12183 = (i8)(intptr_t)(ws+2952);
	i8 v12184 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12184)(v12183, v12182);

	i1 v12185 = (i1)+22;
	i8 v12186 = (i8)(intptr_t)(ws+2928);
	i8 v12187 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12187)(v12186, v12185);

endsub:;
}
	void f205_IsSubroutine(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
const i1 c02_s01ec[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s01ed[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f31_Alloc(i8* /* block */, i8 /* length */);

// reduce_73 workspace at ws+3008 length ws+16
void f566_reduce_73(void) {

	i8 v12188 = (i8)(intptr_t)(ws+2928);
	i8 v12189 = *(i8*)(intptr_t)v12188;
	i8 v12190 = v12189+(+16);
	i8 v12191 = *(i8*)(intptr_t)v12190;
	i8 v12192 = (i8)(intptr_t)(f205_IsSubroutine);
	i1 v12193;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12192)(&v12193, v12191);
	i1 v12194 = (i1)+0;
	if (v12193==v12194) goto c02_093e; else goto c02_093f;

c02_093e:;

	i8 v12195 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v12195)();

	i8 v12196 = (i8)(intptr_t)c02_s01ec;
	i8 v12197 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12197)(v12196);

	i8 v12198 = (i8)(intptr_t)(ws+2928);
	i8 v12199 = *(i8*)(intptr_t)v12198;
	i8 v12200 = v12199+(+16);
	i8 v12201 = *(i8*)(intptr_t)v12200;
	i8 v12202 = v12201+(+48);
	i8 v12203 = *(i8*)(intptr_t)v12202;
	i8 v12204 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12204)(v12203);

	i8 v12205 = (i8)(intptr_t)c02_s01ed;
	i8 v12206 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12206)(v12205);

	i8 v12207 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v12207)();

	goto c02_093b;

c02_093f:;

c02_093b:;

	i8 v12208 = (i8)+42;
	i8 v12209 = (i8)(intptr_t)(f31_Alloc);
	i8 v12210;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12209)(&v12210, v12208);
	i8 v12211 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12211 = v12210;

	i8 v12212 = (i8)(intptr_t)(ws+80);
	i8 v12213 = *(i8*)(intptr_t)v12212;
	i8 v12214 = (i8)(intptr_t)(ws+3008);
	i8 v12215 = *(i8*)(intptr_t)v12214;
	i8 v12216 = v12215+(+16);
	*(i8*)(intptr_t)v12216 = v12213;

	i8 v12217 = (i8)(intptr_t)(ws+2928);
	i8 v12218 = *(i8*)(intptr_t)v12217;
	i8 v12219 = v12218+(+16);
	i8 v12220 = *(i8*)(intptr_t)v12219;
	i8 v12221 = *(i8*)(intptr_t)v12220;
	i8 v12222 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v12222 = v12221;

	i8 v12223 = (i8)(intptr_t)(ws+2928);
	i8 v12224 = *(i8*)(intptr_t)v12223;
	i8 v12225 = (i8)(intptr_t)(ws+3008);
	i8 v12226 = *(i8*)(intptr_t)v12225;
	*(i8*)(intptr_t)v12226 = v12224;

	i8 v12227 = (i8)(intptr_t)(ws+3016);
	i8 v12228 = *(i8*)(intptr_t)v12227;
	i8 v12229 = (i8)(intptr_t)(ws+3008);
	i8 v12230 = *(i8*)(intptr_t)v12229;
	i8 v12231 = v12230+(+8);
	*(i8*)(intptr_t)v12231 = v12228;

	i8 v12232 = (i8)(intptr_t)(ws+3016);
	i8 v12233 = *(i8*)(intptr_t)v12232;
	i8 v12234 = v12233+(+40);
	i8 v12235 = *(i8*)(intptr_t)v12234;
	i8 v12236 = (i8)(intptr_t)(ws+3008);
	i8 v12237 = *(i8*)(intptr_t)v12236;
	i8 v12238 = v12237+(+24);
	*(i8*)(intptr_t)v12238 = v12235;

	i8 v12239 = (i8)(intptr_t)(ws+3016);
	i8 v12240 = *(i8*)(intptr_t)v12239;
	i8 v12241 = v12240+(+48);
	i8 v12242 = *(i8*)(intptr_t)v12241;
	i8 v12243 = (i8)(intptr_t)(ws+3008);
	i8 v12244 = *(i8*)(intptr_t)v12243;
	i8 v12245 = v12244+(+32);
	*(i8*)(intptr_t)v12245 = v12242;

	i8 v12246 = (i8)(intptr_t)(ws+3008);
	i8 v12247 = *(i8*)(intptr_t)v12246;
	i8 v12248 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v12248 = v12247;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3008 length ws+0
void f567_reduce_74(void) {

	i8 v12249 = (i8)(intptr_t)(ws+2936);
	i8 v12250 = *(i8*)(intptr_t)v12249;
	i8 v12251 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12251 = v12250;

	i1 v12252 = (i1)+4;
	i8 v12253 = (i8)(intptr_t)(ws+2928);
	i8 v12254 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12254)(v12253, v12252);

endsub:;
}
	void f120_MidEnd(i8* /* m */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_75 workspace at ws+3008 length ws+0
void f568_reduce_75(void) {

	i8 v12255 = (i8)(intptr_t)(f120_MidEnd);
	i8 v12256;

	((void(*)(i8* /* m */))(intptr_t)v12255)(&v12256);
	i8 v12257 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12257 = v12256;

	i1 v12258 = (i1)+4;
	i8 v12259 = (i8)(intptr_t)(ws+2928);
	i8 v12260 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12260)(v12259, v12258);

endsub:;
}

// reduce_76 workspace at ws+3008 length ws+0
void f569_reduce_76(void) {

	i8 v12261 = (i8)(intptr_t)(ws+2928);
	i8 v12262 = *(i8*)(intptr_t)v12261;
	i8 v12263 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12263 = v12262;

endsub:;
}
	void f56_Discard(i8 /* node */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3008 length ws+0
void f570_reduce_77(void) {

	i8 v12264 = (i8)(intptr_t)(ws+2928);
	i8 v12265 = *(i8*)(intptr_t)v12264;
	i8 v12266 = v12265+(+24);
	i8 v12267 = *(i8*)(intptr_t)v12266;
	i8 v12268 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v12268)(v12267);

	i8 v12269 = (i8)(intptr_t)(ws+2944);
	i8 v12270 = *(i8*)(intptr_t)v12269;
	i8 v12271 = (i8)(intptr_t)(ws+2928);
	i8 v12272 = *(i8*)(intptr_t)v12271;
	i8 v12273 = v12272+(+24);
	*(i8*)(intptr_t)v12273 = v12270;

	i8 v12274 = (i8)(intptr_t)(ws+2928);
	i8 v12275 = *(i8*)(intptr_t)v12274;
	i8 v12276 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12276 = v12275;

	i1 v12277 = (i1)+45;
	i8 v12278 = (i8)(intptr_t)(ws+2936);
	i8 v12279 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12279)(v12278, v12277);

endsub:;
}
	void f59_StartError(void);
const i1 c02_s01ee[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);
	void f455_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f200_CheckNotPartialType(i8 /* type */);
	void f200_CheckNotPartialType(i8 /* type */);
	void f146_NodeWidth(i1* /* width */, i8 /* node */);
	void f120_MidEnd(i8* /* m */);
	void f125_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_78 workspace at ws+3008 length ws+8
void f571_reduce_78(void) {

	i8 v12280 = (i8)(intptr_t)(ws+80);
	i8 v12281 = *(i8*)(intptr_t)v12280;
	i8 v12282 = v12281+(+24);
	i8 v12283 = *(i8*)(intptr_t)v12282;
	i8 v12284 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12284 = v12283;

	i8 v12285 = (i8)(intptr_t)(ws+3008);
	i8 v12286 = *(i8*)(intptr_t)v12285;
	i8 v12287 = (i8)+0;
	if (v12286==v12287) goto c02_0943; else goto c02_0944;

c02_0943:;

	i8 v12288 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v12288)();

	i8 v12289 = (i8)(intptr_t)c02_s01ee;
	i8 v12290 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12290)(v12289);

	i8 v12291 = (i8)(intptr_t)(ws+80);
	i8 v12292 = *(i8*)(intptr_t)v12291;
	i8 v12293 = v12292+(+8);
	i8 v12294 = *(i8*)(intptr_t)v12293;
	i8 v12295 = *(i8*)(intptr_t)v12294;
	i8 v12296 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12296)(v12295);

	i8 v12297 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v12297)();

	goto c02_0940;

c02_0944:;

c02_0940:;

	i8 v12298 = (i8)(intptr_t)(ws+80);
	i8 v12299 = *(i8*)(intptr_t)v12298;
	i8 v12300 = v12299+(+24);
	i8 v12301 = *(i8*)(intptr_t)v12300;
	i8 v12302 = v12301+(+16);
	i8 v12303 = *(i8*)(intptr_t)v12302;
	i8 v12304 = (i8)(intptr_t)(ws+80);
	i8 v12305 = *(i8*)(intptr_t)v12304;
	i8 v12306 = v12305+(+24);
	*(i8*)(intptr_t)v12306 = v12303;

	i8 v12307 = (i8)(intptr_t)(ws+2928);
	i8 v12308 = *(i8*)(intptr_t)v12307;
	i8 v12309 = (i8)(intptr_t)(ws+3008);
	i8 v12310 = *(i8*)(intptr_t)v12309;
	i8 v12311 = *(i8*)(intptr_t)v12310;
	i8 v12312 = (i8)(intptr_t)(f455_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v12312)(v12311, v12308);

	i8 v12313 = (i8)(intptr_t)(ws+3008);
	i8 v12314 = *(i8*)(intptr_t)v12313;
	i8 v12315 = *(i8*)(intptr_t)v12314;
	i8 v12316 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12316)(v12315);

	i8 v12317 = (i8)(intptr_t)(ws+2928);
	i8 v12318 = *(i8*)(intptr_t)v12317;
	i8 v12319 = v12318+(+16);
	i8 v12320 = *(i8*)(intptr_t)v12319;
	i8 v12321 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12321)(v12320);

	i8 v12322 = (i8)(intptr_t)(ws+80);
	i8 v12323 = *(i8*)(intptr_t)v12322;
	i8 v12324 = v12323+(+40);
	i1 v12325 = *(i1*)(intptr_t)v12324;
	i1 v12326 = v12325+(+1);
	i8 v12327 = (i8)(intptr_t)(ws+80);
	i8 v12328 = *(i8*)(intptr_t)v12327;
	i8 v12329 = v12328+(+40);
	*(i1*)(intptr_t)v12329 = v12326;

	i8 v12330 = (i8)(intptr_t)(ws+2928);
	i8 v12331 = *(i8*)(intptr_t)v12330;
	i8 v12332 = (i8)(intptr_t)(f146_NodeWidth);
	i1 v12333;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v12332)(&v12333, v12331);
	i8 v12334 = (i8)(intptr_t)(f120_MidEnd);
	i8 v12335;

	((void(*)(i8* /* m */))(intptr_t)v12334)(&v12335);
	i8 v12336 = (i8)(intptr_t)(ws+2928);
	i8 v12337 = *(i8*)(intptr_t)v12336;
	i8 v12338 = (i8)(intptr_t)(ws+80);
	i8 v12339 = *(i8*)(intptr_t)v12338;
	i8 v12340 = v12339+(+8);
	i8 v12341 = *(i8*)(intptr_t)v12340;
	i8 v12342 = (i8)(intptr_t)(ws+80);
	i8 v12343 = *(i8*)(intptr_t)v12342;
	i8 v12344 = v12343+(+8);
	i8 v12345 = *(i8*)(intptr_t)v12344;
	i8 v12346 = v12345+(+104);
	i1 v12347 = *(i1*)(intptr_t)v12346;
	i8 v12348 = (i8)(intptr_t)(ws+80);
	i8 v12349 = *(i8*)(intptr_t)v12348;
	i8 v12350 = v12349+(+40);
	i1 v12351 = *(i1*)(intptr_t)v12350;
	i1 v12352 = v12347-v12351;
	i8 v12353 = (i8)(intptr_t)(f125_MidArg);
	i8 v12354;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v12353)(&v12354, v12352, v12341, v12337, v12335, v12333);
	i8 v12355 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12355 = v12354;

endsub:;
}
	void f143_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3008 length ws+0
void f572_reduce_79(void) {

	i8 v12356 = (i8)(intptr_t)(ws+2936);
	i8 v12357 = *(i8*)(intptr_t)v12356;
	i8 v12358 = (i8)(intptr_t)(ws+2952);
	i8 v12359 = *(i8*)(intptr_t)v12358;
	i8 v12360 = (i8)(intptr_t)(f143_MidPair);
	i8 v12361;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12360)(&v12361, v12359, v12357);
	i8 v12362 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12362 = v12361;

	i1 v12363 = (i1)+45;
	i8 v12364 = (i8)(intptr_t)(ws+2944);
	i8 v12365 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12365)(v12364, v12363);

	i1 v12366 = (i1)+4;
	i8 v12367 = (i8)(intptr_t)(ws+2928);
	i8 v12368 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12368)(v12367, v12366);

endsub:;
}
	void f143_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_80 workspace at ws+3008 length ws+0
void f573_reduce_80(void) {

	i8 v12369 = (i8)(intptr_t)(ws+2928);
	i8 v12370 = *(i8*)(intptr_t)v12369;
	i8 v12371 = (i8)+0;
	i8 v12372 = (i8)(intptr_t)(f143_MidPair);
	i8 v12373;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12372)(&v12373, v12371, v12370);
	i8 v12374 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12374 = v12373;

endsub:;
}
	void f143_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3008 length ws+0
void f574_reduce_81(void) {

	i8 v12375 = (i8)(intptr_t)(ws+2928);
	i8 v12376 = *(i8*)(intptr_t)v12375;
	i8 v12377 = (i8)(intptr_t)(ws+2944);
	i8 v12378 = *(i8*)(intptr_t)v12377;
	i8 v12379 = (i8)(intptr_t)(f143_MidPair);
	i8 v12380;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v12379)(&v12380, v12378, v12376);
	i8 v12381 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12381 = v12380;

	i1 v12382 = (i1)+45;
	i8 v12383 = (i8)(intptr_t)(ws+2936);
	i8 v12384 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12384)(v12383, v12382);

endsub:;
}
	void f211_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_82 workspace at ws+3008 length ws+0
void f575_reduce_82(void) {

	i8 v12385 = (i8)(intptr_t)(ws+2928);
	i8 v12386 = *(i8*)(intptr_t)v12385;
	i8 v12387 = (i8)(intptr_t)(f211_UndoLValue);
	i8 v12388;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v12387)(&v12388, v12386);
	i8 v12389 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12389 = v12388;

endsub:;
}
	void f117_MidStartsub(i8* /* m */, i8 /* subr */);
	void f443_Generate(i8 /* statement */);
	void f126_MidEndsub(i8* /* m */, i8 /* subr */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3008 length ws+0
void f576_reduce_83(void) {

	i1 v12390 = (i1)+30;
	i8 v12391 = (i8)(intptr_t)(ws+2952);
	i8 v12392 = *(i8*)(intptr_t)v12391;
	i8 v12393 = v12392+(+46);
	*(i1*)(intptr_t)v12393 = v12390;

	i1 v12394 = (i1)+6;
	i8 v12395 = (i8)(intptr_t)(ws+2952);
	i8 v12396 = *(i8*)(intptr_t)v12395;
	i8 v12397 = v12396+(+40);
	*(i1*)(intptr_t)v12397 = v12394;

	i8 v12398 = (i8)(intptr_t)(ws+1056);
	i8 v12399 = *(i8*)(intptr_t)v12398;
	i8 v12400 = v12399+(+42);
	i2 v12401 = *(i2*)(intptr_t)v12400;
	i8 v12402 = (i8)(intptr_t)(ws+2952);
	i8 v12403 = *(i8*)(intptr_t)v12402;
	i8 v12404 = v12403+(+42);
	*(i2*)(intptr_t)v12404 = v12401;

	i8 v12405 = (i8)(intptr_t)(ws+1056);
	i8 v12406 = *(i8*)(intptr_t)v12405;
	i8 v12407 = v12406+(+41);
	i1 v12408 = *(i1*)(intptr_t)v12407;
	i8 v12409 = (i8)(intptr_t)(ws+2952);
	i8 v12410 = *(i8*)(intptr_t)v12409;
	i8 v12411 = v12410+(+41);
	*(i1*)(intptr_t)v12411 = v12408;

	i8 v12412 = (i8)(intptr_t)(ws+1056);
	i8 v12413 = *(i8*)(intptr_t)v12412;
	i8 v12414 = v12413+(+44);
	i2 v12415 = *(i2*)(intptr_t)v12414;
	i8 v12416 = (i8)(intptr_t)(ws+2952);
	i8 v12417 = *(i8*)(intptr_t)v12416;
	i8 v12418 = v12417+(+44);
	*(i2*)(intptr_t)v12418 = v12415;

	i8 v12419 = (i8)(intptr_t)(ws+1224);
	i8 v12420 = *(i8*)(intptr_t)v12419;
	i8 v12421 = (i8)(intptr_t)(ws+2952);
	i8 v12422 = *(i8*)(intptr_t)v12421;
	*(i8*)(intptr_t)v12422 = v12420;

	i8 v12423 = (i8)(intptr_t)(ws+1224);
	i8 v12424 = *(i8*)(intptr_t)v12423;
	i8 v12425 = v12424+(+106);
	i1 v12426 = *(i1*)(intptr_t)v12425;
	i1 v12427 = v12426|(+2);
	i8 v12428 = (i8)(intptr_t)(ws+1224);
	i8 v12429 = *(i8*)(intptr_t)v12428;
	i8 v12430 = v12429+(+106);
	*(i1*)(intptr_t)v12430 = v12427;

	i8 v12431 = (i8)(intptr_t)(ws+1224);
	i8 v12432 = *(i8*)(intptr_t)v12431;
	i8 v12433 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12433 = v12432;

	i8 v12434 = (i8)(intptr_t)(ws+40);
	i8 v12435 = *(i8*)(intptr_t)v12434;
	i8 v12436 = (i8)(intptr_t)(f117_MidStartsub);
	i8 v12437;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12436)(&v12437, v12435);
	i8 v12438 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12438)(v12437);

	i8 v12439 = (i8)(intptr_t)(ws+40);
	i8 v12440 = *(i8*)(intptr_t)v12439;
	i8 v12441 = (i8)(intptr_t)(f126_MidEndsub);
	i8 v12442;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12441)(&v12442, v12440);
	i8 v12443 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12443)(v12442);

	i8 v12444 = (i8)(intptr_t)(ws+40);
	i8 v12445 = *(i8*)(intptr_t)v12444;
	i8 v12446 = v12445+(+8);
	i8 v12447 = *(i8*)(intptr_t)v12446;
	i8 v12448 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12448 = v12447;

	i1 v12449 = (i1)+22;
	i8 v12450 = (i8)(intptr_t)(ws+2928);
	i8 v12451 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12451)(v12450, v12449);

endsub:;
}
const i1 c02_s01ef[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f61_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3016 length ws+0
void f578_not_an_interface(void) {

	i8 v12452 = (i8)(intptr_t)c02_s01ef;
	i8 v12453 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12453)(v12452);

endsub:;
}
	void f205_IsSubroutine(i1* /* result */, i8 /* type */);
	void f578_not_an_interface(void);
	void f578_not_an_interface(void);
	void f183_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f183_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f453_CopyParameterList(i8* /* newparam */, i8 /* subr */, i8 /* param */);
	void f83_CountParameters(i1* /* count */, i8 /* param */);
	void f453_CopyParameterList(i8* /* newparam */, i8 /* subr */, i8 /* param */);
	void f83_CountParameters(i1* /* count */, i8 /* param */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_84 workspace at ws+3008 length ws+8
void f577_reduce_84(void) {


	i8 v12454 = (i8)(intptr_t)(ws+2928);
	i8 v12455 = *(i8*)(intptr_t)v12454;
	i8 v12456 = (i8)(intptr_t)(f205_IsSubroutine);
	i1 v12457;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12456)(&v12457, v12455);
	i1 v12458 = (i1)+0;
	if (v12457==v12458) goto c02_0948; else goto c02_0949;

c02_0948:;

	i8 v12459 = (i8)(intptr_t)(f578_not_an_interface);

	((void(*)(void))(intptr_t)v12459)();

	goto c02_0945;

c02_0949:;

c02_0945:;

	i8 v12460 = (i8)(intptr_t)(ws+2928);
	i8 v12461 = *(i8*)(intptr_t)v12460;
	i8 v12462 = *(i8*)(intptr_t)v12461;
	i8 v12463 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12463 = v12462;

	i8 v12464 = (i8)(intptr_t)(ws+3008);
	i8 v12465 = *(i8*)(intptr_t)v12464;
	i8 v12466 = v12465+(+106);
	i1 v12467 = *(i1*)(intptr_t)v12466;
	i1 v12468 = v12467&(+2);
	i1 v12469 = (i1)+0;
	if (v12468==v12469) goto c02_094d; else goto c02_094e;

c02_094d:;

	i8 v12470 = (i8)(intptr_t)(f578_not_an_interface);

	((void(*)(void))(intptr_t)v12470)();

	goto c02_094a;

c02_094e:;

c02_094a:;

	i8 v12471 = (i8)(intptr_t)(ws+1224);
	i8 v12472 = *(i8*)(intptr_t)v12471;
	i8 v12473 = v12472+(+106);
	i1 v12474 = *(i1*)(intptr_t)v12473;
	i1 v12475 = v12474|(+4);
	i8 v12476 = (i8)(intptr_t)(ws+1224);
	i8 v12477 = *(i8*)(intptr_t)v12476;
	i8 v12478 = v12477+(+106);
	*(i1*)(intptr_t)v12478 = v12475;

	i8 v12479 = (i8)(intptr_t)(ws+3008);
	i8 v12480 = *(i8*)(intptr_t)v12479;
	i8 v12481 = (i8)(intptr_t)(ws+1224);
	i8 v12482 = *(i8*)(intptr_t)v12481;
	i8 v12483 = v12482+(+64);
	*(i8*)(intptr_t)v12483 = v12480;

	i8 v12484 = (i8)(intptr_t)(ws+2928);
	i8 v12485 = *(i8*)(intptr_t)v12484;
	i8 v12486 = (i8)(intptr_t)(ws+1224);
	i8 v12487 = *(i8*)(intptr_t)v12486;
	i8 v12488 = v12487+(+56);
	*(i8*)(intptr_t)v12488 = v12485;

	i8 v12489 = (i8)(intptr_t)(ws+40);
	i8 v12490 = *(i8*)(intptr_t)v12489;
	i8 v12491 = (i8)(intptr_t)(ws+3008);
	i8 v12492 = *(i8*)(intptr_t)v12491;
	i8 v12493 = (i8)(intptr_t)(f183_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v12493)(v12492, v12490);

	i8 v12494 = (i8)(intptr_t)(ws+3008);
	i8 v12495 = *(i8*)(intptr_t)v12494;
	i8 v12496 = (i8)(intptr_t)(ws+1224);
	i8 v12497 = *(i8*)(intptr_t)v12496;
	i8 v12498 = (i8)(intptr_t)(f183_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v12498)(v12497, v12495);

	i8 v12499 = (i8)(intptr_t)(ws+3008);
	i8 v12500 = *(i8*)(intptr_t)v12499;
	i8 v12501 = v12500+(+40);
	i8 v12502 = *(i8*)(intptr_t)v12501;
	i8 v12503 = (i8)(intptr_t)(ws+1224);
	i8 v12504 = *(i8*)(intptr_t)v12503;
	i8 v12505 = (i8)(intptr_t)(f453_CopyParameterList);
	i8 v12506;

	((void(*)(i8* /* newparam */, i8 /* subr */, i8 /* param */))(intptr_t)v12505)(&v12506, v12504, v12502);
	i8 v12507 = (i8)(intptr_t)(ws+1224);
	i8 v12508 = *(i8*)(intptr_t)v12507;
	i8 v12509 = v12508+(+40);
	*(i8*)(intptr_t)v12509 = v12506;

	i8 v12510 = (i8)(intptr_t)(ws+1224);
	i8 v12511 = *(i8*)(intptr_t)v12510;
	i8 v12512 = v12511+(+40);
	i8 v12513 = *(i8*)(intptr_t)v12512;
	i8 v12514 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12515;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12514)(&v12515, v12513);
	i8 v12516 = (i8)(intptr_t)(ws+1224);
	i8 v12517 = *(i8*)(intptr_t)v12516;
	i8 v12518 = v12517+(+104);
	*(i1*)(intptr_t)v12518 = v12515;

	i8 v12519 = (i8)(intptr_t)(ws+3008);
	i8 v12520 = *(i8*)(intptr_t)v12519;
	i8 v12521 = v12520+(+48);
	i8 v12522 = *(i8*)(intptr_t)v12521;
	i8 v12523 = (i8)(intptr_t)(ws+1224);
	i8 v12524 = *(i8*)(intptr_t)v12523;
	i8 v12525 = (i8)(intptr_t)(f453_CopyParameterList);
	i8 v12526;

	((void(*)(i8* /* newparam */, i8 /* subr */, i8 /* param */))(intptr_t)v12525)(&v12526, v12524, v12522);
	i8 v12527 = (i8)(intptr_t)(ws+1224);
	i8 v12528 = *(i8*)(intptr_t)v12527;
	i8 v12529 = v12528+(+48);
	*(i8*)(intptr_t)v12529 = v12526;

	i8 v12530 = (i8)(intptr_t)(ws+1224);
	i8 v12531 = *(i8*)(intptr_t)v12530;
	i8 v12532 = v12531+(+48);
	i8 v12533 = *(i8*)(intptr_t)v12532;
	i8 v12534 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12535;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12534)(&v12535, v12533);
	i8 v12536 = (i8)(intptr_t)(ws+1224);
	i8 v12537 = *(i8*)(intptr_t)v12536;
	i8 v12538 = v12537+(+105);
	*(i1*)(intptr_t)v12538 = v12535;

	i1 v12539 = (i1)+68;
	i8 v12540 = (i8)(intptr_t)(ws+2936);
	i8 v12541 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12541)(v12540, v12539);

endsub:;
}
	void f182_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3008 length ws+0
void f579_reduce_85(void) {

	i8 v12542 = (i8)(intptr_t)(ws+1224);
	i8 v12543 = *(i8*)(intptr_t)v12542;
	i8 v12544 = v12543+(+72);
	i2 v12545 = *(i2*)(intptr_t)v12544;
	i8 v12546 = (i8)(intptr_t)(ws+2936);
	i8 v12547 = *(i8*)(intptr_t)v12546;
	i8 v12548 = (i8)(intptr_t)(f182_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v12548)(v12547, v12545);

	i1 v12549 = (i1)+11;
	i8 v12550 = (i8)(intptr_t)(ws+2952);
	i8 v12551 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12551)(v12550, v12549);

	i1 v12552 = (i1)+16;
	i8 v12553 = (i8)(intptr_t)(ws+2944);
	i8 v12554 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12554)(v12553, v12552);

	i1 v12555 = (i1)+4;
	i8 v12556 = (i8)(intptr_t)(ws+2928);
	i8 v12557 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12557)(v12556, v12555);

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f214_AllocSubrId(i2* /* id */);
	void f181_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_86 workspace at ws+3008 length ws+0
void f580_reduce_86(void) {

	i8 v12558 = (i8)+107;
	i8 v12559 = (i8)(intptr_t)(f31_Alloc);
	i8 v12560;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12559)(&v12560, v12558);
	i8 v12561 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v12561 = v12560;

	i8 v12562 = (i8)(intptr_t)(ws+40);
	i8 v12563 = *(i8*)(intptr_t)v12562;
	i8 v12564 = v12563+(+16);
	i8 v12565 = (i8)(intptr_t)(ws+1224);
	i8 v12566 = *(i8*)(intptr_t)v12565;
	i8 v12567 = v12566+(+32);
	*(i8*)(intptr_t)v12567 = v12564;

	i8 v12568 = (i8)(intptr_t)(ws+40);
	i8 v12569 = *(i8*)(intptr_t)v12568;
	i8 v12570 = (i8)(intptr_t)(ws+1224);
	i8 v12571 = *(i8*)(intptr_t)v12570;
	i8 v12572 = v12571+(+8);
	*(i8*)(intptr_t)v12572 = v12569;

	i8 v12573 = (i8)(intptr_t)(f214_AllocSubrId);
	i2 v12574;

	((void(*)(i2* /* id */))(intptr_t)v12573)(&v12574);
	i8 v12575 = (i8)(intptr_t)(ws+1224);
	i8 v12576 = *(i8*)(intptr_t)v12575;
	i8 v12577 = v12576+(+72);
	*(i2*)(intptr_t)v12577 = v12574;

	i8 v12578 = (i8)(intptr_t)(ws+2928);
	i8 v12579 = *(i8*)(intptr_t)v12578;
	i8 v12580 = v12579+(+48);
	i8 v12581 = *(i8*)(intptr_t)v12580;
	i8 v12582 = (i8)(intptr_t)(ws+1224);
	i8 v12583 = *(i8*)(intptr_t)v12582;
	*(i8*)(intptr_t)v12583 = v12581;

	i1 v12584 = (i1)+25;
	i8 v12585 = (i8)(intptr_t)(ws+2928);
	i8 v12586 = *(i8*)(intptr_t)v12585;
	i8 v12587 = v12586+(+46);
	*(i1*)(intptr_t)v12587 = v12584;

	i8 v12588 = (i8)(intptr_t)(ws+1224);
	i8 v12589 = *(i8*)(intptr_t)v12588;
	i8 v12590 = (i8)(intptr_t)(ws+2928);
	i8 v12591 = *(i8*)(intptr_t)v12590;
	*(i8*)(intptr_t)v12591 = v12589;

	i8 v12592 = (i8)(intptr_t)(ws+1224);
	i8 v12593 = *(i8*)(intptr_t)v12592;
	i8 v12594 = (i8)(intptr_t)(f181_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v12594)(v12593);

	i8 v12595 = (i8)(intptr_t)(ws+2928);
	i8 v12596 = *(i8*)(intptr_t)v12595;
	i8 v12597 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12597 = v12596;

endsub:;
}
const i1 c02_s01f0[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f61_SimpleError(i8 /* message */);
const i1 c02_s01f1[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f61_SimpleError(i8 /* message */);
const i1 c02_s01f2[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f61_SimpleError(i8 /* message */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3008 length ws+0
void f581_reduce_87(void) {

	i8 v12598 = (i8)(intptr_t)(ws+2928);
	i8 v12599 = *(i8*)(intptr_t)v12598;
	i8 v12600 = v12599+(+46);
	i1 v12601 = *(i1*)(intptr_t)v12600;
	i1 v12602 = (i1)+25;
	if (v12601==v12602) goto c02_0953; else goto c02_0952;

c02_0952:;

	i8 v12603 = (i8)(intptr_t)c02_s01f0;
	i8 v12604 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12604)(v12603);

	goto c02_094f;

c02_0953:;

c02_094f:;

	i8 v12605 = (i8)(intptr_t)(ws+2928);
	i8 v12606 = *(i8*)(intptr_t)v12605;
	i8 v12607 = *(i8*)(intptr_t)v12606;
	i8 v12608 = (i8)(intptr_t)(ws+1224);
	*(i8*)(intptr_t)v12608 = v12607;

	i8 v12609 = (i8)(intptr_t)(ws+1224);
	i8 v12610 = *(i8*)(intptr_t)v12609;
	i8 v12611 = v12610+(+106);
	i1 v12612 = *(i1*)(intptr_t)v12611;
	i1 v12613 = v12612&(+1);
	i1 v12614 = (i1)+0;
	if (v12613==v12614) goto c02_0958; else goto c02_0957;

c02_0957:;

	i8 v12615 = (i8)(intptr_t)c02_s01f1;
	i8 v12616 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12616)(v12615);

	goto c02_0954;

c02_0958:;

c02_0954:;

	i8 v12617 = (i8)(intptr_t)(ws+1224);
	i8 v12618 = *(i8*)(intptr_t)v12617;
	i8 v12619 = v12618+(+8);
	i8 v12620 = *(i8*)(intptr_t)v12619;
	i8 v12621 = (i8)(intptr_t)(ws+40);
	i8 v12622 = *(i8*)(intptr_t)v12621;
	if (v12620==v12622) goto c02_095d; else goto c02_095c;

c02_095c:;

	i8 v12623 = (i8)(intptr_t)c02_s01f2;
	i8 v12624 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12624)(v12623);

	goto c02_0959;

c02_095d:;

c02_0959:;

	i1 v12625 = (i1)+25;
	i8 v12626 = (i8)(intptr_t)(ws+2936);
	i8 v12627 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12627)(v12626, v12625);

endsub:;
}
	void f117_MidStartsub(i8* /* m */, i8 /* subr */);
	void f443_Generate(i8 /* statement */);

// reduce_88 workspace at ws+3008 length ws+0
void f582_reduce_88(void) {

	i8 v12628 = (i8)(intptr_t)(ws+52);
	i2 v12629 = *(i2*)(intptr_t)v12628;
	i8 v12630 = (i8)(intptr_t)(ws+1224);
	i8 v12631 = *(i8*)(intptr_t)v12630;
	i8 v12632 = v12631+(+82);
	*(i2*)(intptr_t)v12632 = v12629;

	i2 v12633 = (i2)+0;
	i8 v12634 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v12634 = v12633;

	i8 v12635 = (i8)(intptr_t)(ws+54);
	i2 v12636 = *(i2*)(intptr_t)v12635;
	i8 v12637 = (i8)(intptr_t)(ws+1224);
	i8 v12638 = *(i8*)(intptr_t)v12637;
	i8 v12639 = v12638+(+84);
	*(i2*)(intptr_t)v12639 = v12636;

	i2 v12640 = (i2)+0;
	i8 v12641 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v12641 = v12640;

	i8 v12642 = (i8)(intptr_t)(ws+1224);
	i8 v12643 = *(i8*)(intptr_t)v12642;
	i8 v12644 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12644 = v12643;

	i8 v12645 = (i8)(intptr_t)(ws+40);
	i8 v12646 = *(i8*)(intptr_t)v12645;
	i8 v12647 = (i8)(intptr_t)(f117_MidStartsub);
	i8 v12648;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12647)(&v12648, v12646);
	i8 v12649 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12649)(v12648);

	i8 v12650 = (i8)(intptr_t)(ws+40);
	i8 v12651 = *(i8*)(intptr_t)v12650;
	i8 v12652 = v12651+(+106);
	i1 v12653 = *(i1*)(intptr_t)v12652;
	i1 v12654 = v12653|(+1);
	i8 v12655 = (i8)(intptr_t)(ws+40);
	i8 v12656 = *(i8*)(intptr_t)v12655;
	i8 v12657 = v12656+(+106);
	*(i1*)(intptr_t)v12657 = v12654;

endsub:;
}
	void f126_MidEndsub(i8* /* m */, i8 /* subr */);
	void f443_Generate(i8 /* statement */);
	void f450_DestructSubroutineContents(i8 /* subr */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_89 workspace at ws+3008 length ws+8
void f583_reduce_89(void) {

	i8 v12658 = (i8)(intptr_t)(ws+40);
	i8 v12659 = *(i8*)(intptr_t)v12658;
	i8 v12660 = (i8)(intptr_t)(f126_MidEndsub);
	i8 v12661;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v12660)(&v12661, v12659);
	i8 v12662 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12662)(v12661);

	i8 v12663 = (i8)(intptr_t)(ws+40);
	i8 v12664 = *(i8*)(intptr_t)v12663;
	i8 v12665 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12665 = v12664;

	i8 v12666 = (i8)(intptr_t)(ws+3008);
	i8 v12667 = *(i8*)(intptr_t)v12666;
	i8 v12668 = v12667+(+82);
	i2 v12669 = *(i2*)(intptr_t)v12668;
	i8 v12670 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v12670 = v12669;

	i8 v12671 = (i8)(intptr_t)(ws+3008);
	i8 v12672 = *(i8*)(intptr_t)v12671;
	i8 v12673 = v12672+(+84);
	i2 v12674 = *(i2*)(intptr_t)v12673;
	i8 v12675 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v12675 = v12674;

	i8 v12676 = (i8)(intptr_t)(ws+3008);
	i8 v12677 = *(i8*)(intptr_t)v12676;
	i8 v12678 = v12677+(+8);
	i8 v12679 = *(i8*)(intptr_t)v12678;
	i8 v12680 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v12680 = v12679;

	i8 v12681 = (i8)(intptr_t)(ws+3008);
	i8 v12682 = *(i8*)(intptr_t)v12681;
	i8 v12683 = (i8)(intptr_t)(f450_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v12683)(v12682);

	i1 v12684 = (i1)+25;
	i8 v12685 = (i8)(intptr_t)(ws+2928);
	i8 v12686 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12686)(v12685, v12684);

endsub:;
}

// reduce_90 workspace at ws+3008 length ws+0
void f584_reduce_90(void) {

	i1 v12687 = (i1)+0;
	i8 v12688 = (i8)(intptr_t)(ws+1224);
	i8 v12689 = *(i8*)(intptr_t)v12688;
	i8 v12690 = v12689+(+105);
	*(i1*)(intptr_t)v12690 = v12687;

endsub:;
}
	void f83_CountParameters(i1* /* count */, i8 /* param */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3008 length ws+0
void f585_reduce_91(void) {

	i8 v12691 = (i8)(intptr_t)(ws+2928);
	i8 v12692 = *(i8*)(intptr_t)v12691;
	i8 v12693 = (i8)(intptr_t)(ws+1224);
	i8 v12694 = *(i8*)(intptr_t)v12693;
	i8 v12695 = v12694+(+48);
	*(i8*)(intptr_t)v12695 = v12692;

	i8 v12696 = (i8)(intptr_t)(ws+2928);
	i8 v12697 = *(i8*)(intptr_t)v12696;
	i8 v12698 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12699;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12698)(&v12699, v12697);
	i8 v12700 = (i8)(intptr_t)(ws+1224);
	i8 v12701 = *(i8*)(intptr_t)v12700;
	i8 v12702 = v12701+(+105);
	*(i1*)(intptr_t)v12702 = v12699;

	i1 v12703 = (i1)+6;
	i8 v12704 = (i8)(intptr_t)(ws+2936);
	i8 v12705 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12705)(v12704, v12703);

endsub:;
}
	void f83_CountParameters(i1* /* count */, i8 /* param */);

// reduce_92 workspace at ws+3008 length ws+0
void f586_reduce_92(void) {

	i8 v12706 = (i8)(intptr_t)(ws+2928);
	i8 v12707 = *(i8*)(intptr_t)v12706;
	i8 v12708 = (i8)(intptr_t)(ws+1224);
	i8 v12709 = *(i8*)(intptr_t)v12708;
	i8 v12710 = v12709+(+40);
	*(i8*)(intptr_t)v12710 = v12707;

	i8 v12711 = (i8)(intptr_t)(ws+2928);
	i8 v12712 = *(i8*)(intptr_t)v12711;
	i8 v12713 = (i8)(intptr_t)(f83_CountParameters);
	i1 v12714;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v12713)(&v12714, v12712);
	i8 v12715 = (i8)(intptr_t)(ws+1224);
	i8 v12716 = *(i8*)(intptr_t)v12715;
	i8 v12717 = v12716+(+104);
	*(i1*)(intptr_t)v12717 = v12714;

endsub:;
}

// reduce_93 workspace at ws+3008 length ws+0
void f587_reduce_93(void) {

	i8 v12718 = (i8)+0;
	i8 v12719 = (i8)(intptr_t)(ws+1224);
	i8 v12720 = *(i8*)(intptr_t)v12719;
	i8 v12721 = v12720+(+40);
	*(i8*)(intptr_t)v12721 = v12718;

	i1 v12722 = (i1)+0;
	i8 v12723 = (i8)(intptr_t)(ws+1224);
	i8 v12724 = *(i8*)(intptr_t)v12723;
	i8 v12725 = v12724+(+104);
	*(i1*)(intptr_t)v12725 = v12722;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_94 workspace at ws+3008 length ws+0
void f588_reduce_94(void) {

	i8 v12726 = (i8)+0;
	i8 v12727 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12727 = v12726;

	i1 v12728 = (i1)+4;
	i8 v12729 = (i8)(intptr_t)(ws+2928);
	i8 v12730 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12730)(v12729, v12728);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3008 length ws+0
void f589_reduce_95(void) {

	i8 v12731 = (i8)(intptr_t)(ws+2936);
	i8 v12732 = *(i8*)(intptr_t)v12731;
	i8 v12733 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12733 = v12732;

	i1 v12734 = (i1)+4;
	i8 v12735 = (i8)(intptr_t)(ws+2928);
	i8 v12736 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12736)(v12735, v12734);

endsub:;
}

// reduce_96 workspace at ws+3008 length ws+0
void f590_reduce_96(void) {

	i8 v12737 = (i8)(intptr_t)(ws+2928);
	i8 v12738 = *(i8*)(intptr_t)v12737;
	i8 v12739 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12739 = v12738;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_97 workspace at ws+3008 length ws+0
void f591_reduce_97(void) {

	i8 v12740 = (i8)(intptr_t)(ws+2928);
	i8 v12741 = *(i8*)(intptr_t)v12740;
	i8 v12742 = (i8)(intptr_t)(ws+2944);
	i8 v12743 = *(i8*)(intptr_t)v12742;
	i8 v12744 = v12743+(+16);
	*(i8*)(intptr_t)v12744 = v12741;

	i8 v12745 = (i8)(intptr_t)(ws+2944);
	i8 v12746 = *(i8*)(intptr_t)v12745;
	i8 v12747 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12747 = v12746;

	i1 v12748 = (i1)+45;
	i8 v12749 = (i8)(intptr_t)(ws+2936);
	i8 v12750 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12750)(v12749, v12748);

endsub:;
}
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f446_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3008 length ws+0
void f592_reduce_98(void) {

	i8 v12751 = (i8)(intptr_t)(ws+1224);
	i8 v12752 = *(i8*)(intptr_t)v12751;
	i8 v12753 = v12752+(+16);
	i8 v12754 = (i8)(intptr_t)(ws+2944);
	i8 v12755 = *(i8*)(intptr_t)v12754;
	i8 v12756 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v12757;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12756)(&v12757, v12755, v12753);
	i8 v12758 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12758 = v12757;

	i1 v12759 = (i1)+28;
	i8 v12760 = (i8)(intptr_t)(ws+2920);
	i8 v12761 = *(i8*)(intptr_t)v12760;
	i8 v12762 = v12761+(+46);
	*(i1*)(intptr_t)v12762 = v12759;

	i8 v12763 = (i8)(intptr_t)(ws+1224);
	i8 v12764 = *(i8*)(intptr_t)v12763;
	i8 v12765 = (i8)(intptr_t)(ws+2920);
	i8 v12766 = *(i8*)(intptr_t)v12765;
	i8 v12767 = (i8)(intptr_t)(ws+2928);
	i8 v12768 = *(i8*)(intptr_t)v12767;
	i8 v12769 = (i8)(intptr_t)(f446_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v12769)(v12768, v12766, v12764);

	i1 v12770 = (i1)+6;
	i8 v12771 = (i8)(intptr_t)(ws+2936);
	i8 v12772 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12772)(v12771, v12770);

endsub:;
}
	void f218_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3008 length ws+0
void f593_reduce_99(void) {

	i8 v12773 = (i8)(intptr_t)(ws+72);
	i8 v12774 = *(i8*)(intptr_t)v12773;
	i8 v12775 = v12774+(+42);
	i2 v12776 = *(i2*)(intptr_t)v12775;
	i8 v12777 = (i8)(intptr_t)(ws+72);
	i8 v12778 = *(i8*)(intptr_t)v12777;
	i8 v12779 = v12778+(+41);
	i1 v12780 = *(i1*)(intptr_t)v12779;
	i8 v12781 = (i8)(intptr_t)(f218_ArchAlignUp);
	i2 v12782;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v12781)(&v12782, v12780, v12776);
	i8 v12783 = (i8)(intptr_t)(ws+72);
	i8 v12784 = *(i8*)(intptr_t)v12783;
	i8 v12785 = v12784+(+44);
	*(i2*)(intptr_t)v12785 = v12782;

	i1 v12786 = (i1)+65;
	i8 v12787 = (i8)(intptr_t)(ws+2952);
	i8 v12788 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12788)(v12787, v12786);

	i1 v12789 = (i1)+10;
	i8 v12790 = (i8)(intptr_t)(ws+2936);
	i8 v12791 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12791)(v12790, v12789);

	i1 v12792 = (i1)+20;
	i8 v12793 = (i8)(intptr_t)(ws+2928);
	i8 v12794 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12794)(v12793, v12792);

endsub:;
}
	void f479_SymbolRedeclarationError(void);
	void f479_SymbolRedeclarationError(void);

// reduce_100 workspace at ws+3008 length ws+0
void f594_reduce_100(void) {

	i8 v12795 = (i8)(intptr_t)(ws+2928);
	i8 v12796 = *(i8*)(intptr_t)v12795;
	i8 v12797 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v12797 = v12796;

	i8 v12798 = (i8)(intptr_t)(ws+72);
	i8 v12799 = *(i8*)(intptr_t)v12798;
	i8 v12800 = v12799+(+46);
	i1 v12801 = *(i1*)(intptr_t)v12800;
	i1 v12802 = (i1)+0;
	if (v12801==v12802) goto c02_0964; else goto c02_0965;

c02_0965:;

	i8 v12803 = (i8)(intptr_t)(ws+72);
	i8 v12804 = *(i8*)(intptr_t)v12803;
	i8 v12805 = v12804+(+46);
	i1 v12806 = *(i1*)(intptr_t)v12805;
	i1 v12807 = (i1)+30;
	if (v12806==v12807) goto c02_0964; else goto c02_0963;

c02_0963:;

	i8 v12808 = (i8)(intptr_t)(f479_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v12808)();

	goto c02_095e;

c02_0964:;

c02_095e:;

	i8 v12809 = (i8)(intptr_t)(ws+72);
	i8 v12810 = *(i8*)(intptr_t)v12809;
	i8 v12811 = v12810+(+40);
	i1 v12812 = *(i1*)(intptr_t)v12811;
	i1 v12813 = (i1)+0;
	if (v12812==v12813) goto c02_096c; else goto c02_096d;

c02_096d:;

	i8 v12814 = (i8)(intptr_t)(ws+72);
	i8 v12815 = *(i8*)(intptr_t)v12814;
	i8 v12816 = v12815+(+40);
	i1 v12817 = *(i1*)(intptr_t)v12816;
	i1 v12818 = (i1)+1;
	if (v12817==v12818) goto c02_096c; else goto c02_096b;

c02_096b:;

	i8 v12819 = (i8)(intptr_t)(f479_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v12819)();

	goto c02_0966;

c02_096c:;

c02_0966:;

	i1 v12820 = (i1)+30;
	i8 v12821 = (i8)(intptr_t)(ws+72);
	i8 v12822 = *(i8*)(intptr_t)v12821;
	i8 v12823 = v12822+(+46);
	*(i1*)(intptr_t)v12823 = v12820;

	i1 v12824 = (i1)+5;
	i8 v12825 = (i8)(intptr_t)(ws+72);
	i8 v12826 = *(i8*)(intptr_t)v12825;
	i8 v12827 = v12826+(+40);
	*(i1*)(intptr_t)v12827 = v12824;

endsub:;
}
	void f200_CheckNotPartialType(i8 /* type */);
	void f209_IsRecord(i1* /* result */, i8 /* type */);
	void f59_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s01f3[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// reduce_101 workspace at ws+3008 length ws+0
void f595_reduce_101(void) {

	i8 v12828 = (i8)(intptr_t)(ws+2928);
	i8 v12829 = *(i8*)(intptr_t)v12828;
	i8 v12830 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12830)(v12829);

	i8 v12831 = (i8)(intptr_t)(ws+2928);
	i8 v12832 = *(i8*)(intptr_t)v12831;
	i8 v12833 = (i8)(intptr_t)(f209_IsRecord);
	i1 v12834;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12833)(&v12834, v12832);
	i1 v12835 = (i1)+0;
	if (v12834==v12835) goto c02_0971; else goto c02_0972;

c02_0971:;

	i8 v12836 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v12836)();

	i8 v12837 = (i8)(intptr_t)(ws+2928);
	i8 v12838 = *(i8*)(intptr_t)v12837;
	i8 v12839 = v12838+(+48);
	i8 v12840 = *(i8*)(intptr_t)v12839;
	i8 v12841 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12841)(v12840);

	i8 v12842 = (i8)(intptr_t)c02_s01f3;
	i8 v12843 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v12843)(v12842);

	i8 v12844 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v12844)();

	goto c02_096e;

c02_0972:;

c02_096e:;

	i8 v12845 = (i8)(intptr_t)(ws+2928);
	i8 v12846 = *(i8*)(intptr_t)v12845;
	i8 v12847 = v12846+(+41);
	i1 v12848 = *(i1*)(intptr_t)v12847;
	i8 v12849 = (i8)(intptr_t)(ws+72);
	i8 v12850 = *(i8*)(intptr_t)v12849;
	i8 v12851 = v12850+(+41);
	*(i1*)(intptr_t)v12851 = v12848;

	i8 v12852 = (i8)(intptr_t)(ws+2928);
	i8 v12853 = *(i8*)(intptr_t)v12852;
	i8 v12854 = v12853+(+42);
	i2 v12855 = *(i2*)(intptr_t)v12854;
	i8 v12856 = (i8)(intptr_t)(ws+72);
	i8 v12857 = *(i8*)(intptr_t)v12856;
	i8 v12858 = v12857+(+42);
	*(i2*)(intptr_t)v12858 = v12855;

	i8 v12859 = (i8)(intptr_t)(ws+2928);
	i8 v12860 = *(i8*)(intptr_t)v12859;
	i8 v12861 = (i8)(intptr_t)(ws+72);
	i8 v12862 = *(i8*)(intptr_t)v12861;
	i8 v12863 = v12862+(+16);
	*(i8*)(intptr_t)v12863 = v12860;

endsub:;
}
	void f200_CheckNotPartialType(i8 /* type */);
	void f222_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_102 workspace at ws+3008 length ws+0
void f596_reduce_102(void) {

	i8 v12864 = (i8)(intptr_t)(ws+2936);
	i8 v12865 = *(i8*)(intptr_t)v12864;
	i8 v12866 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12866)(v12865);

	i1 v12867 = (i1)+28;
	i8 v12868 = (i8)(intptr_t)(ws+2960);
	i8 v12869 = *(i8*)(intptr_t)v12868;
	i8 v12870 = v12869+(+46);
	*(i1*)(intptr_t)v12870 = v12867;

	i8 v12871 = (i8)(intptr_t)(ws+2936);
	i8 v12872 = *(i8*)(intptr_t)v12871;
	i8 v12873 = (i8)(intptr_t)(ws+2960);
	i8 v12874 = *(i8*)(intptr_t)v12873;
	*(i8*)(intptr_t)v12874 = v12872;

	i8 v12875 = (i8)(intptr_t)(ws+72);
	i8 v12876 = *(i8*)(intptr_t)v12875;
	i8 v12877 = v12876+(+41);
	i1 v12878 = *(i1*)(intptr_t)v12877;
	i8 v12879 = (i8)(intptr_t)(ws+2936);
	i8 v12880 = *(i8*)(intptr_t)v12879;
	i8 v12881 = v12880+(+41);
	i1 v12882 = *(i1*)(intptr_t)v12881;
	if (v12878<v12882) goto c02_0976; else goto c02_0977;

c02_0976:;

	i8 v12883 = (i8)(intptr_t)(ws+2936);
	i8 v12884 = *(i8*)(intptr_t)v12883;
	i8 v12885 = v12884+(+41);
	i1 v12886 = *(i1*)(intptr_t)v12885;
	i8 v12887 = (i8)(intptr_t)(ws+72);
	i8 v12888 = *(i8*)(intptr_t)v12887;
	i8 v12889 = v12888+(+41);
	*(i1*)(intptr_t)v12889 = v12886;

	goto c02_0973;

c02_0977:;

c02_0973:;

	i8 v12890 = (i8)(intptr_t)(ws+72);
	i8 v12891 = *(i8*)(intptr_t)v12890;
	i8 v12892 = (i8)(intptr_t)(ws+2960);
	i8 v12893 = *(i8*)(intptr_t)v12892;
	i8 v12894 = (i8)(intptr_t)(ws+2952);
	i2 v12895 = *(i2*)(intptr_t)v12894;
	i8 v12896 = (i8)(intptr_t)(f222_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v12896)(v12895, v12893, v12891);

	i1 v12897 = (i1)+6;
	i8 v12898 = (i8)(intptr_t)(ws+2944);
	i8 v12899 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12899)(v12898, v12897);

	i1 v12900 = (i1)+22;
	i8 v12901 = (i8)(intptr_t)(ws+2928);
	i8 v12902 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12902)(v12901, v12900);

endsub:;
}

// reduce_103 workspace at ws+3008 length ws+0
void f597_reduce_103(void) {

	i8 v12903 = (i8)(intptr_t)(ws+72);
	i8 v12904 = *(i8*)(intptr_t)v12903;
	i8 v12905 = v12904+(+42);
	i2 v12906 = *(i2*)(intptr_t)v12905;
	i8 v12907 = (i8)(intptr_t)(ws+2920);
	*(i2*)(intptr_t)v12907 = v12906;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_104 workspace at ws+3008 length ws+0
void f598_reduce_104(void) {

	i8 v12908 = (i8)(intptr_t)(ws+2936);
	i4 v12909 = *(i4*)(intptr_t)v12908;
	i2 v12910 = (s2)(s4)v12909;
	i8 v12911 = (i8)(intptr_t)(ws+2920);
	*(i2*)(intptr_t)v12911 = v12910;

	i1 v12912 = (i1)+16;
	i8 v12913 = (i8)(intptr_t)(ws+2944);
	i8 v12914 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12914)(v12913, v12912);

	i1 v12915 = (i1)+4;
	i8 v12916 = (i8)(intptr_t)(ws+2928);
	i8 v12917 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12917)(v12916, v12915);

endsub:;
}
	void f197_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_105 workspace at ws+3008 length ws+0
void f599_reduce_105(void) {

	i8 v12918 = (i8)(intptr_t)(ws+72);
	i8 v12919 = *(i8*)(intptr_t)v12918;
	i8 v12920 = (i8)(intptr_t)(ws+2928);
	i8 v12921 = *(i8*)(intptr_t)v12920;
	i8 v12922 = (i8)(intptr_t)(f197_AddSymbol);
	i8 v12923;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v12922)(&v12923, v12921, v12919);
	i8 v12924 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v12924 = v12923;

	i8 v12925 = (i8)(intptr_t)(ws+72);
	i8 v12926 = *(i8*)(intptr_t)v12925;
	i8 v12927 = v12926+(+24);
	i1 v12928 = *(i1*)(intptr_t)v12927;
	i1 v12929 = v12928+(+1);
	i8 v12930 = (i8)(intptr_t)(ws+72);
	i8 v12931 = *(i8*)(intptr_t)v12930;
	i8 v12932 = v12931+(+24);
	*(i1*)(intptr_t)v12932 = v12929;

endsub:;
}
	void f481_CheckEndOfInitialiser(void);
	void f103_MidEndinit(i8* /* m */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_106 workspace at ws+3008 length ws+0
void f600_reduce_106(void) {

	i8 v12933 = (i8)(intptr_t)(f481_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v12933)();

	i8 v12934 = (i8)(intptr_t)(f103_MidEndinit);
	i8 v12935;

	((void(*)(i8* /* m */))(intptr_t)v12934)(&v12935);
	i8 v12936 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v12936)(v12935);

	i1 v12937 = (i1)+31;
	i8 v12938 = (i8)(intptr_t)(ws+2952);
	i8 v12939 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12939)(v12938, v12937);

	i1 v12940 = (i1)+32;
	i8 v12941 = (i8)(intptr_t)(ws+2936);
	i8 v12942 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12942)(v12941, v12940);

	i1 v12943 = (i1)+22;
	i8 v12944 = (i8)(intptr_t)(ws+2928);
	i8 v12945 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v12945)(v12944, v12943);

endsub:;
}
	void f200_CheckNotPartialType(i8 /* type */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f213_AllocLabel(i2* /* label */);
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f203_IsArray(i1* /* result */, i8 /* type */);
	void f209_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s01f4[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f61_SimpleError(i8 /* message */);
	void f209_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s01f5[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f61_SimpleError(i8 /* message */);
	void f209_IsRecord(i1* /* result */, i8 /* type */);
	void f107_MidStartinit(i8* /* m */, i8 /* sym */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3008 length ws+16
void f601_reduce_107(void) {

	i8 v12946 = (i8)(intptr_t)(ws+2936);
	i8 v12947 = *(i8*)(intptr_t)v12946;
	i8 v12948 = (i8)(intptr_t)(f200_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v12948)(v12947);

	i1 v12949 = (i1)+28;
	i8 v12950 = (i8)(intptr_t)(ws+2952);
	i8 v12951 = *(i8*)(intptr_t)v12950;
	i8 v12952 = v12951+(+46);
	*(i1*)(intptr_t)v12952 = v12949;

	i8 v12953 = (i8)(intptr_t)(ws+2936);
	i8 v12954 = *(i8*)(intptr_t)v12953;
	i8 v12955 = (i8)(intptr_t)(ws+2952);
	i8 v12956 = *(i8*)(intptr_t)v12955;
	*(i8*)(intptr_t)v12956 = v12954;

	i8 v12957 = (i8)(intptr_t)(ws+40);
	i8 v12958 = *(i8*)(intptr_t)v12957;
	i8 v12959 = (i8)(intptr_t)(ws+2952);
	i8 v12960 = *(i8*)(intptr_t)v12959;
	i8 v12961 = v12960+(+8);
	*(i8*)(intptr_t)v12961 = v12958;

	i8 v12962 = (i8)+8;
	i8 v12963 = (i8)(intptr_t)(f31_Alloc);
	i8 v12964;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v12963)(&v12964, v12962);
	i8 v12965 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v12965 = v12964;

	i8 v12966 = (i8)(intptr_t)(ws+3008);
	i8 v12967 = *(i8*)(intptr_t)v12966;
	i8 v12968 = (i8)(intptr_t)(ws+2952);
	i8 v12969 = *(i8*)(intptr_t)v12968;
	i8 v12970 = v12969+(+24);
	*(i8*)(intptr_t)v12970 = v12967;

	i1 v12971 = (i1)+3;
	i8 v12972 = (i8)(intptr_t)(ws+3008);
	i8 v12973 = *(i8*)(intptr_t)v12972;
	*(i1*)(intptr_t)v12973 = v12971;

	i1 v12974 = (i1)+97;
	i8 v12975 = (i8)(intptr_t)(ws+3008);
	i8 v12976 = *(i8*)(intptr_t)v12975;
	i8 v12977 = v12976+(+1);
	*(i1*)(intptr_t)v12977 = v12974;

	i8 v12978 = (i8)(intptr_t)(f213_AllocLabel);
	i2 v12979;

	((void(*)(i2* /* label */))(intptr_t)v12978)(&v12979);
	i4 v12980 = v12979;
	i1 v12981 = (i1)+16;
	i8 v12982 = (i8)(intptr_t)(ws+3008);
	i8 v12983 = *(i8*)(intptr_t)v12982;
	i8 v12984 = v12983+(+2);
	i8 v12985 = (i8)(intptr_t)(f13_UIToA);
	i8 v12986;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v12985)(&v12986, v12984, v12981, v12980);
	i8 v12987 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v12987 = v12986;

	i8 v12988 = (i8)(intptr_t)(ws+2936);
	i8 v12989 = *(i8*)(intptr_t)v12988;
	i8 v12990 = (i8)(intptr_t)(f203_IsArray);
	i1 v12991;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12990)(&v12991, v12989);
	i1 v12992 = (i1)+0;
	if (v12991==v12992) goto c02_097f; else goto c02_097e;

c02_097f:;

	i8 v12993 = (i8)(intptr_t)(ws+2936);
	i8 v12994 = *(i8*)(intptr_t)v12993;
	i8 v12995 = (i8)(intptr_t)(f209_IsRecord);
	i1 v12996;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v12995)(&v12996, v12994);
	i1 v12997 = (i1)+0;
	if (v12996==v12997) goto c02_097d; else goto c02_097e;

c02_097d:;

	i8 v12998 = (i8)(intptr_t)c02_s01f4;
	i8 v12999 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v12999)(v12998);

	goto c02_0978;

c02_097e:;

c02_0978:;

	i8 v13000 = (i8)(intptr_t)(ws+2936);
	i8 v13001 = *(i8*)(intptr_t)v13000;
	i8 v13002 = (i8)(intptr_t)(f209_IsRecord);
	i1 v13003;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13002)(&v13003, v13001);
	i1 v13004 = (i1)+0;
	if (v13003==v13004) goto c02_0986; else goto c02_0987;

c02_0987:;

	i8 v13005 = (i8)(intptr_t)(ws+2936);
	i8 v13006 = *(i8*)(intptr_t)v13005;
	i8 v13007 = v13006+(+16);
	i8 v13008 = *(i8*)(intptr_t)v13007;
	i8 v13009 = (i8)+0;
	if (v13008==v13009) goto c02_0986; else goto c02_0985;

c02_0985:;

	i8 v13010 = (i8)(intptr_t)c02_s01f5;
	i8 v13011 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13011)(v13010);

	goto c02_0980;

c02_0986:;

c02_0980:;

	i8 v13012 = (i8)(intptr_t)(ws+2936);
	i8 v13013 = *(i8*)(intptr_t)v13012;
	i8 v13014 = (i8)(intptr_t)(f209_IsRecord);
	i1 v13015;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13014)(&v13015, v13013);
	i1 v13016 = (i1)+0;
	if (v13015==v13016) goto c02_098c; else goto c02_098b;

c02_098b:;

	i8 v13017 = (i8)(intptr_t)(ws+2936);
	i8 v13018 = *(i8*)(intptr_t)v13017;
	i8 v13019 = *(i8*)(intptr_t)v13018;
	i8 v13020 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13020 = v13019;

	goto c02_0988;

c02_098c:;

c02_0988:;

	i8 v13021 = (i8)(intptr_t)(ws+2936);
	i8 v13022 = *(i8*)(intptr_t)v13021;
	i8 v13023 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13023 = v13022;

	i2 v13024 = (i2)+0;
	i8 v13025 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v13025 = v13024;

	i2 v13026 = (i2)+0;
	i8 v13027 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v13027 = v13026;

	i8 v13028 = (i8)(intptr_t)(ws+2952);
	i8 v13029 = *(i8*)(intptr_t)v13028;
	i8 v13030 = (i8)(intptr_t)(f107_MidStartinit);
	i8 v13031;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v13030)(&v13031, v13029);
	i8 v13032 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13032)(v13031);

	i1 v13033 = (i1)+6;
	i8 v13034 = (i8)(intptr_t)(ws+2944);
	i8 v13035 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13035)(v13034, v13033);

	i1 v13036 = (i1)+2;
	i8 v13037 = (i8)(intptr_t)(ws+2928);
	i8 v13038 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13038)(v13037, v13036);

endsub:;
}
	void f485_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f483_AlignTo(i1 /* alignment */);
	void f206_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s01f6[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f61_SimpleError(i8 /* message */);
	void f93_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f443_Generate(i8 /* statement */);
	void f204_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s01f7[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f61_SimpleError(i8 /* message */);
	void f101_MidInits(i8* /* m */, i8 /* text */);
	void f443_Generate(i8 /* statement */);
	void f476_parser_i_constant_error(void);
	void f56_Discard(i8 /* node */);

// reduce_108 workspace at ws+3008 length ws+18
void f602_reduce_108(void) {

	i8 v13039 = (i8)(intptr_t)(f485_GetInitedMemberChecked);
	i8 v13040;
	i8 v13041;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v13039)(&v13040, &v13041);

	i8 v13042 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v13042 = v13041;

	i8 v13043 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v13043 = v13040;

	i8 v13044 = (i8)(intptr_t)(ws+3016);
	i8 v13045 = *(i8*)(intptr_t)v13044;
	i8 v13046 = v13045+(+41);
	i1 v13047 = *(i1*)(intptr_t)v13046;
	i8 v13048 = (i8)(intptr_t)(f483_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v13048)(v13047);

	i8 v13049 = (i8)(intptr_t)(ws+3016);
	i8 v13050 = *(i8*)(intptr_t)v13049;
	i8 v13051 = v13050+(+42);
	i2 v13052 = *(i2*)(intptr_t)v13051;
	i8 v13053 = (i8)(intptr_t)(ws+3024);
	*(i2*)(intptr_t)v13053 = v13052;

	i8 v13054 = (i8)(intptr_t)(ws+2928);
	i8 v13055 = *(i8*)(intptr_t)v13054;
	i8 v13056 = v13055+(+58);
	i1 v13057 = *(i1*)(intptr_t)v13056;

	if (v13057 != +42) goto c02_098e;

	i8 v13058 = (i8)(intptr_t)(ws+3016);
	i8 v13059 = *(i8*)(intptr_t)v13058;
	i8 v13060 = (i8)(intptr_t)(f206_IsNum);
	i1 v13061;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13060)(&v13061, v13059);
	i1 v13062 = (i1)+0;
	if (v13061==v13062) goto c02_0992; else goto c02_0993;

c02_0992:;

	i8 v13063 = (i8)(intptr_t)c02_s01f6;
	i8 v13064 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13064)(v13063);

	goto c02_098f;

c02_0993:;

c02_098f:;

	i8 v13065 = (i8)(intptr_t)(ws+3024);
	i2 v13066 = *(i2*)(intptr_t)v13065;
	i1 v13067 = v13066;
	i8 v13068 = (i8)(intptr_t)(ws+2928);
	i8 v13069 = *(i8*)(intptr_t)v13068;
	i4 v13070 = *(i4*)(intptr_t)v13069;
	i8 v13071 = (i8)(intptr_t)(f93_MidInit);
	i8 v13072;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v13071)(&v13072, v13070, v13067);
	i8 v13073 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13073)(v13072);

	goto c02_098d;

c02_098e:;

	if (v13057 != +43) goto c02_0994;

	i8 v13074 = (i8)(intptr_t)(ws+3016);
	i8 v13075 = *(i8*)(intptr_t)v13074;
	i8 v13076 = (i8)(intptr_t)(f204_IsPtr);
	i1 v13077;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13076)(&v13077, v13075);
	i1 v13078 = (i1)+0;
	if (v13077==v13078) goto c02_099a; else goto c02_099c;

c02_099c:;

	i8 v13079 = (i8)(intptr_t)(ws+3016);
	i8 v13080 = *(i8*)(intptr_t)v13079;
	i8 v13081 = *(i8*)(intptr_t)v13080;
	i8 v13082 = (i8)(intptr_t)(ws+1040);
	i8 v13083 = *(i8*)(intptr_t)v13082;
	if (v13081==v13083) goto c02_099b; else goto c02_099a;

c02_099a:;

	i8 v13084 = (i8)(intptr_t)c02_s01f7;
	i8 v13085 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13085)(v13084);

	goto c02_0995;

c02_099b:;

c02_0995:;

	i8 v13086 = (i8)(intptr_t)(ws+2928);
	i8 v13087 = *(i8*)(intptr_t)v13086;
	i8 v13088 = *(i8*)(intptr_t)v13087;
	i8 v13089 = (i8)(intptr_t)(f101_MidInits);
	i8 v13090;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v13089)(&v13090, v13088);
	i8 v13091 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13091)(v13090);

	goto c02_098d;

c02_0994:;

	i8 v13092 = (i8)(intptr_t)(f476_parser_i_constant_error);

	((void(*)(void))(intptr_t)v13092)();

c02_098d:;


	i8 v13093 = (i8)(intptr_t)(ws+2928);
	i8 v13094 = *(i8*)(intptr_t)v13093;
	i8 v13095 = (i8)(intptr_t)(f56_Discard);

	((void(*)(i8 /* node */))(intptr_t)v13095)(v13094);

	i8 v13096 = (i8)(intptr_t)(ws+1240);
	i2 v13097 = *(i2*)(intptr_t)v13096;
	i8 v13098 = (i8)(intptr_t)(ws+3024);
	i2 v13099 = *(i2*)(intptr_t)v13098;
	i2 v13100 = v13097+v13099;
	i8 v13101 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v13101 = v13100;

	i8 v13102 = (i8)(intptr_t)(ws+1242);
	i2 v13103 = *(i2*)(intptr_t)v13102;
	i8 v13104 = (i8)(intptr_t)(ws+3024);
	i2 v13105 = *(i2*)(intptr_t)v13104;
	i2 v13106 = v13103+v13105;
	i8 v13107 = (i8)(intptr_t)(ws+1242);
	*(i2*)(intptr_t)v13107 = v13106;

endsub:;
}
	void f481_CheckEndOfInitialiser(void);
	void f32_Free(i8 /* block */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_109 workspace at ws+3008 length ws+0
void f603_reduce_109(void) {

	i8 v13108 = (i8)(intptr_t)(f481_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v13108)();

	i8 v13109 = (i8)(intptr_t)(ws+2944);
	i8 v13110 = *(i8*)(intptr_t)v13109;
	i8 v13111 = *(i8*)(intptr_t)v13110;
	i8 v13112 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13112 = v13111;

	i8 v13113 = (i8)(intptr_t)(ws+2944);
	i8 v13114 = *(i8*)(intptr_t)v13113;
	i8 v13115 = v13114+(+8);
	i8 v13116 = *(i8*)(intptr_t)v13115;
	i8 v13117 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13117 = v13116;

	i8 v13118 = (i8)(intptr_t)(ws+2944);
	i8 v13119 = *(i8*)(intptr_t)v13118;
	i8 v13120 = v13119+(+16);
	i2 v13121 = *(i2*)(intptr_t)v13120;
	i8 v13122 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v13122 = v13121;

	i8 v13123 = (i8)(intptr_t)(ws+2944);
	i8 v13124 = *(i8*)(intptr_t)v13123;
	i8 v13125 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v13125)(v13124);

	i1 v13126 = (i1)+32;
	i8 v13127 = (i8)(intptr_t)(ws+2928);
	i8 v13128 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13128)(v13127, v13126);

endsub:;
}
	void f485_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f483_AlignTo(i1 /* alignment */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f209_IsRecord(i1* /* result */, i8 /* type */);
	void f203_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s01f8[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_110 workspace at ws+3008 length ws+16
void f604_reduce_110(void) {

	i8 v13129 = (i8)(intptr_t)(f485_GetInitedMemberChecked);
	i8 v13130;
	i8 v13131;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v13129)(&v13130, &v13131);

	i8 v13132 = (i8)(intptr_t)(ws+3016);
	*(i8*)(intptr_t)v13132 = v13131;

	i8 v13133 = (i8)(intptr_t)(ws+3008);
	*(i8*)(intptr_t)v13133 = v13130;

	i8 v13134 = (i8)(intptr_t)(ws+3016);
	i8 v13135 = *(i8*)(intptr_t)v13134;
	i8 v13136 = v13135+(+41);
	i1 v13137 = *(i1*)(intptr_t)v13136;
	i8 v13138 = (i8)(intptr_t)(f483_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v13138)(v13137);

	i8 v13139 = (i8)+18;
	i8 v13140 = (i8)(intptr_t)(f31_Alloc);
	i8 v13141;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13140)(&v13141, v13139);
	i8 v13142 = (i8)(intptr_t)(ws+2920);
	*(i8*)(intptr_t)v13142 = v13141;

	i8 v13143 = (i8)(intptr_t)(ws+72);
	i8 v13144 = *(i8*)(intptr_t)v13143;
	i8 v13145 = (i8)(intptr_t)(ws+2920);
	i8 v13146 = *(i8*)(intptr_t)v13145;
	*(i8*)(intptr_t)v13146 = v13144;

	i8 v13147 = (i8)(intptr_t)(ws+1232);
	i8 v13148 = *(i8*)(intptr_t)v13147;
	i8 v13149 = (i8)(intptr_t)(ws+2920);
	i8 v13150 = *(i8*)(intptr_t)v13149;
	i8 v13151 = v13150+(+8);
	*(i8*)(intptr_t)v13151 = v13148;

	i8 v13152 = (i8)(intptr_t)(ws+1240);
	i2 v13153 = *(i2*)(intptr_t)v13152;
	i8 v13154 = (i8)(intptr_t)(ws+2920);
	i8 v13155 = *(i8*)(intptr_t)v13154;
	i8 v13156 = v13155+(+16);
	*(i2*)(intptr_t)v13156 = v13153;

	i8 v13157 = (i8)(intptr_t)(ws+3016);
	i8 v13158 = *(i8*)(intptr_t)v13157;
	i8 v13159 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v13159 = v13158;

	i2 v13160 = (i2)+0;
	i8 v13161 = (i8)(intptr_t)(ws+1240);
	*(i2*)(intptr_t)v13161 = v13160;

	i8 v13162 = (i8)(intptr_t)(ws+3016);
	i8 v13163 = *(i8*)(intptr_t)v13162;
	i8 v13164 = (i8)(intptr_t)(f209_IsRecord);
	i1 v13165;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13164)(&v13165, v13163);
	i1 v13166 = (i1)+0;
	if (v13165==v13166) goto c02_09a1; else goto c02_09a0;

c02_09a0:;

	i8 v13167 = (i8)(intptr_t)(ws+3016);
	i8 v13168 = *(i8*)(intptr_t)v13167;
	i8 v13169 = *(i8*)(intptr_t)v13168;
	i8 v13170 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13170 = v13169;

	goto c02_099d;

c02_09a1:;

	i8 v13171 = (i8)(intptr_t)(ws+3016);
	i8 v13172 = *(i8*)(intptr_t)v13171;
	i8 v13173 = (i8)(intptr_t)(f203_IsArray);
	i1 v13174;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v13173)(&v13174, v13172);
	i1 v13175 = (i1)+0;
	if (v13174==v13175) goto c02_09a5; else goto c02_09a4;

c02_09a4:;

	i8 v13176 = (i8)+0;
	i8 v13177 = (i8)(intptr_t)(ws+1232);
	*(i8*)(intptr_t)v13177 = v13176;

	goto c02_099d;

c02_09a5:;

	i8 v13178 = (i8)(intptr_t)c02_s01f8;
	i8 v13179 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13179)(v13178);

c02_099d:;

endsub:;
}
	void f104_MidAsmend(i8* /* m */);
	void f443_Generate(i8 /* statement */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_111 workspace at ws+3008 length ws+0
void f605_reduce_111(void) {

	i8 v13180 = (i8)(intptr_t)(f104_MidAsmend);
	i8 v13181;

	((void(*)(i8* /* m */))(intptr_t)v13180)(&v13181);
	i8 v13182 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13182)(v13181);

	i1 v13183 = (i1)+22;
	i8 v13184 = (i8)(intptr_t)(ws+2928);
	i8 v13185 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13185)(v13184, v13183);

endsub:;
}
	void f95_MidAsmstart(i8* /* m */);
	void f443_Generate(i8 /* statement */);

// reduce_112 workspace at ws+3008 length ws+0
void f606_reduce_112(void) {

	i8 v13186 = (i8)(intptr_t)(f95_MidAsmstart);
	i8 v13187;

	((void(*)(i8* /* m */))(intptr_t)v13186)(&v13187);
	i8 v13188 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13188)(v13187);

endsub:;
}
	void f133_MidAsmtext(i8* /* m */, i8 /* text */);
	void f443_Generate(i8 /* statement */);
	void f32_Free(i8 /* block */);

// reduce_113 workspace at ws+3008 length ws+0
void f607_reduce_113(void) {

	i8 v13189 = (i8)(intptr_t)(ws+2928);
	i8 v13190 = *(i8*)(intptr_t)v13189;
	i8 v13191 = (i8)(intptr_t)(f133_MidAsmtext);
	i8 v13192;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v13191)(&v13192, v13190);
	i8 v13193 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13193)(v13192);

	i8 v13194 = (i8)(intptr_t)(ws+2928);
	i8 v13195 = *(i8*)(intptr_t)v13194;
	i8 v13196 = (i8)(intptr_t)(f32_Free);

	((void(*)(i8 /* block */))(intptr_t)v13196)(v13195);

endsub:;
}
	void f111_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f443_Generate(i8 /* statement */);

// reduce_114 workspace at ws+3008 length ws+0
void f608_reduce_114(void) {

	i8 v13197 = (i8)(intptr_t)(ws+2928);
	i4 v13198 = *(i4*)(intptr_t)v13197;
	i8 v13199 = (i8)(intptr_t)(f111_MidAsmvalue);
	i8 v13200;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v13199)(&v13200, v13198);
	i8 v13201 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13201)(v13200);

endsub:;
}
	void f183_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f113_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f443_Generate(i8 /* statement */);
	void f111_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f443_Generate(i8 /* statement */);
const i1 c02_s01f9[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f61_SimpleError(i8 /* message */);

// reduce_115 workspace at ws+3008 length ws+1
void f609_reduce_115(void) {

	i8 v13202 = (i8)(intptr_t)(ws+2928);
	i8 v13203 = *(i8*)(intptr_t)v13202;
	i8 v13204 = v13203+(+46);
	i1 v13205 = *(i1*)(intptr_t)v13204;
	i8 v13206 = (i8)(intptr_t)(ws+3008);
	*(i1*)(intptr_t)v13206 = v13205;

	i8 v13207 = (i8)(intptr_t)(ws+3008);
	i1 v13208 = *(i1*)(intptr_t)v13207;
	i1 v13209 = (i1)+28;
	if (v13208==v13209) goto c02_09ab; else goto c02_09ad;

c02_09ad:;

	i8 v13210 = (i8)(intptr_t)(ws+3008);
	i1 v13211 = *(i1*)(intptr_t)v13210;
	i1 v13212 = (i1)+25;
	if (v13211==v13212) goto c02_09ab; else goto c02_09ac;

c02_09ab:;

	i8 v13213 = (i8)(intptr_t)(ws+3008);
	i1 v13214 = *(i1*)(intptr_t)v13213;
	i1 v13215 = (i1)+25;
	if (v13214==v13215) goto c02_09b1; else goto c02_09b2;

c02_09b1:;

	i8 v13216 = (i8)(intptr_t)(ws+40);
	i8 v13217 = *(i8*)(intptr_t)v13216;
	i8 v13218 = (i8)(intptr_t)(ws+2928);
	i8 v13219 = *(i8*)(intptr_t)v13218;
	i8 v13220 = *(i8*)(intptr_t)v13219;
	i8 v13221 = (i8)(intptr_t)(f183_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v13221)(v13220, v13217);

	goto c02_09ae;

c02_09b2:;

c02_09ae:;

	i8 v13222 = (i8)(intptr_t)(ws+2928);
	i8 v13223 = *(i8*)(intptr_t)v13222;
	i8 v13224 = (i8)(intptr_t)(f113_MidAsmsymbol);
	i8 v13225;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v13224)(&v13225, v13223);
	i8 v13226 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13226)(v13225);

	goto c02_09a6;

c02_09ac:;

	i8 v13227 = (i8)(intptr_t)(ws+3008);
	i1 v13228 = *(i1*)(intptr_t)v13227;
	i1 v13229 = (i1)+7;
	if (v13228==v13229) goto c02_09b5; else goto c02_09b6;

c02_09b5:;

	i8 v13230 = (i8)(intptr_t)(ws+2928);
	i8 v13231 = *(i8*)(intptr_t)v13230;
	i4 v13232 = *(i4*)(intptr_t)v13231;
	i8 v13233 = (i8)(intptr_t)(f111_MidAsmvalue);
	i8 v13234;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v13233)(&v13234, v13232);
	i8 v13235 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13235)(v13234);

	goto c02_09a6;

c02_09b6:;

	i8 v13236 = (i8)(intptr_t)c02_s01f9;
	i8 v13237 = (i8)(intptr_t)(f61_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v13237)(v13236);

c02_09a6:;

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3008 length ws+0
void f610_reduce_122(void) {

	i1 v13238 = (i1)+26;
	i8 v13239 = (i8)(intptr_t)(ws+2944);
	i8 v13240 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13240)(v13239, v13238);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3008 length ws+0
void f611_reduce_126(void) {

	i1 v13241 = (i1)+22;
	i8 v13242 = (i8)(intptr_t)(ws+2928);
	i8 v13243 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13243)(v13242, v13241);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3008 length ws+0
void f612_reduce_127(void) {

	i1 v13244 = (i1)+25;
	i8 v13245 = (i8)(intptr_t)(ws+2960);
	i8 v13246 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13246)(v13245, v13244);

	i1 v13247 = (i1)+22;
	i8 v13248 = (i8)(intptr_t)(ws+2928);
	i8 v13249 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13249)(v13248, v13247);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3008 length ws+0
void f613_reduce_128(void) {

	i1 v13250 = (i1)+22;
	i8 v13251 = (i8)(intptr_t)(ws+2928);
	i8 v13252 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13252)(v13251, v13250);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3008 length ws+0
void f614_reduce_129(void) {

	i1 v13253 = (i1)+22;
	i8 v13254 = (i8)(intptr_t)(ws+2928);
	i8 v13255 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13255)(v13254, v13253);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3008 length ws+0
void f615_reduce_135(void) {

	i1 v13256 = (i1)+45;
	i8 v13257 = (i8)(intptr_t)(ws+2936);
	i8 v13258 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13258)(v13257, v13256);

endsub:;
}
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3008 length ws+0
void f616_reduce_138(void) {

	i1 v13259 = (i1)+45;
	i8 v13260 = (i8)(intptr_t)(ws+2936);
	i8 v13261 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13261)(v13260, v13259);

endsub:;
}
	void f493_reduce_0(void);
	void f494_reduce_1(void);
	void f495_reduce_2(void);
	void f496_reduce_3(void);
	void f497_reduce_4(void);
	void f498_reduce_5(void);
	void f499_reduce_6(void);
	void f500_reduce_7(void);
	void f501_reduce_8(void);
	void f502_reduce_9(void);
	void f503_reduce_10(void);
	void f504_reduce_11(void);
	void f505_reduce_12(void);
	void f506_reduce_13(void);
	void f507_reduce_14(void);
	void f508_reduce_15(void);
	void f509_reduce_16(void);
	void f510_reduce_17(void);
	void f511_reduce_18(void);
	void f512_reduce_19(void);
	void f513_reduce_20(void);
	void f514_reduce_21(void);
	void f515_reduce_22(void);
	void f516_reduce_23(void);
	void f517_reduce_24(void);
	void f518_reduce_25(void);
	void f519_reduce_26(void);
	void f520_reduce_27(void);
	void f521_reduce_28(void);
	void f522_reduce_29(void);
	void f523_reduce_30(void);
	void f524_reduce_31(void);
	void f525_reduce_32(void);
	void f526_reduce_33(void);
	void f527_reduce_34(void);
	void f528_reduce_35(void);
	void f529_reduce_36(void);
	void f530_reduce_37(void);
	void f531_reduce_38(void);
	void f532_reduce_39(void);
	void f533_reduce_40(void);
	void f534_reduce_41(void);
	void f535_reduce_42(void);
	void f536_reduce_43(void);
	void f537_reduce_44(void);
	void f538_reduce_45(void);
	void f539_reduce_46(void);
	void f540_reduce_47(void);
	void f541_reduce_48(void);
	void f542_reduce_49(void);
	void f543_reduce_50(void);
	void f544_reduce_51(void);
	void f545_reduce_52(void);
	void f546_reduce_53(void);
	void f547_reduce_54(void);
	void f548_reduce_55(void);
	void f549_reduce_56(void);
	void f550_reduce_57(void);
	void f551_reduce_58(void);
	void f552_reduce_59(void);
	void f553_reduce_60(void);
	void f554_reduce_61(void);
	void f555_reduce_62(void);
	void f556_reduce_63(void);
	void f557_reduce_64(void);
	void f558_reduce_65(void);
	void f559_reduce_66(void);
	void f560_reduce_67(void);
	void f561_reduce_68(void);
	void f562_reduce_69(void);
	void f563_reduce_70(void);
	void f564_reduce_71(void);
	void f565_reduce_72(void);
	void f566_reduce_73(void);
	void f567_reduce_74(void);
	void f568_reduce_75(void);
	void f569_reduce_76(void);
	void f570_reduce_77(void);
	void f571_reduce_78(void);
	void f572_reduce_79(void);
	void f573_reduce_80(void);
	void f574_reduce_81(void);
	void f575_reduce_82(void);
	void f576_reduce_83(void);
	void f577_reduce_84(void);
	void f579_reduce_85(void);
	void f580_reduce_86(void);
	void f581_reduce_87(void);
	void f582_reduce_88(void);
	void f583_reduce_89(void);
	void f584_reduce_90(void);
	void f585_reduce_91(void);
	void f586_reduce_92(void);
	void f587_reduce_93(void);
	void f588_reduce_94(void);
	void f589_reduce_95(void);
	void f590_reduce_96(void);
	void f591_reduce_97(void);
	void f592_reduce_98(void);
	void f593_reduce_99(void);
	void f594_reduce_100(void);
	void f595_reduce_101(void);
	void f596_reduce_102(void);
	void f597_reduce_103(void);
	void f598_reduce_104(void);
	void f599_reduce_105(void);
	void f600_reduce_106(void);
	void f601_reduce_107(void);
	void f602_reduce_108(void);
	void f603_reduce_109(void);
	void f604_reduce_110(void);
	void f605_reduce_111(void);
	void f606_reduce_112(void);
	void f607_reduce_113(void);
	void f608_reduce_114(void);
	void f609_reduce_115(void);
	void f610_reduce_122(void);
	void f611_reduce_126(void);
	void f612_reduce_127(void);
	void f613_reduce_128(void);
	void f614_reduce_129(void);
	void f615_reduce_135(void);
	void f616_reduce_138(void);

// yy_reduce workspace at ws+2912 length ws+94
void f492_yy_reduce(i2* p10465 /* yyact */, i1 p10466 /* yylookahead */, i2 p10467 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+2912) = p10467; /*yyruleno */
	*(i1*)(intptr_t)(ws+2914) = p10466; /*yylookahead */

	i8 v10468 = (i8)(intptr_t)(((i1*)c02_a862+0));
	i8 v10469 = (i8)(intptr_t)(ws+2912);
	i2 v10470 = *(i2*)(intptr_t)v10469;
	i1 v10471 = v10470;
	i8 v10472 = v10471;
	i8 v10473 = v10468+v10472;
	i1 v10474 = *(i1*)(intptr_t)v10473;
	i8 v10475 = (i8)(intptr_t)(ws+2918);
	*(i1*)(intptr_t)v10475 = v10474;

	i8 v10476 = (i8)(intptr_t)(ws+1248);
	i8 v10477 = *(i8*)(intptr_t)v10476;
	i8 v10478 = (i8)(intptr_t)(ws+2856);
	if (v10477==v10478) goto c02_0866; else goto c02_0867;

c02_0866:;

	i8 v10479 = (i8)(intptr_t)(f490_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10479)();

	goto c02_0863;

c02_0867:;

c02_0863:;

	i8 v10480 = (i8)(intptr_t)(ws+2928);
	i8 v10481 = (i8)(intptr_t)(ws+2992);
	*(i8*)(intptr_t)v10481 = v10480;

	i8 v10482 = (i8)(intptr_t)(ws+2918);
	i1 v10483 = *(i1*)(intptr_t)v10482;
	i8 v10484 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v10484 = v10483;

c02_086a:;

	i8 v10485 = (i8)(intptr_t)(ws+3000);
	i1 v10486 = *(i1*)(intptr_t)v10485;
	i1 v10487 = (i1)+0;
	if (v10486==v10487) goto c02_086d; else goto c02_086c;

c02_086c:;

	i8 v10488 = (i8)(intptr_t)(ws+1248);
	i8 v10489 = *(i8*)(intptr_t)v10488;
	i8 v10490 = v10489+(+8);
	i8 v10491 = *(i8*)(intptr_t)v10490;
	i8 v10492 = (i8)(intptr_t)(ws+2992);
	i8 v10493 = *(i8*)(intptr_t)v10492;
	*(i8*)(intptr_t)v10493 = v10491;

	i8 v10494 = (i8)(intptr_t)(ws+1248);
	i8 v10495 = *(i8*)(intptr_t)v10494;
	i8 v10496 = v10495+(-16);
	i8 v10497 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v10497 = v10496;

	i8 v10498 = (i8)(intptr_t)(ws+2992);
	i8 v10499 = *(i8*)(intptr_t)v10498;
	i8 v10500 = v10499+(+8);
	i8 v10501 = (i8)(intptr_t)(ws+2992);
	*(i8*)(intptr_t)v10501 = v10500;

	i8 v10502 = (i8)(intptr_t)(ws+3000);
	i1 v10503 = *(i1*)(intptr_t)v10502;
	i1 v10504 = v10503+(-1);
	i8 v10505 = (i8)(intptr_t)(ws+3000);
	*(i1*)(intptr_t)v10505 = v10504;

	goto c02_086a;

c02_086d:;




























































































































	i8 v13262 = (i8)(intptr_t)(ws+2912);
	i2 v13263 = *(i2*)(intptr_t)v13262;
	i1 v13264 = v13263;

	if (v13264 != +0) goto c02_09b8;

	i8 v13265 = (i8)(intptr_t)(f493_reduce_0);

	((void(*)(void))(intptr_t)v13265)();

	goto c02_09b7;

c02_09b8:;

	if (v13264 != +1) goto c02_09b9;

	i8 v13266 = (i8)(intptr_t)(f494_reduce_1);

	((void(*)(void))(intptr_t)v13266)();

	goto c02_09b7;

c02_09b9:;

	if (v13264 != +2) goto c02_09ba;

	i8 v13267 = (i8)(intptr_t)(f495_reduce_2);

	((void(*)(void))(intptr_t)v13267)();

	goto c02_09b7;

c02_09ba:;

	if (v13264 != +3) goto c02_09bb;

	i8 v13268 = (i8)(intptr_t)(f496_reduce_3);

	((void(*)(void))(intptr_t)v13268)();

	goto c02_09b7;

c02_09bb:;

	if (v13264 != +4) goto c02_09bc;

	i8 v13269 = (i8)(intptr_t)(f497_reduce_4);

	((void(*)(void))(intptr_t)v13269)();

	goto c02_09b7;

c02_09bc:;

	if (v13264 != +5) goto c02_09bd;

	i8 v13270 = (i8)(intptr_t)(f498_reduce_5);

	((void(*)(void))(intptr_t)v13270)();

	goto c02_09b7;

c02_09bd:;

	if (v13264 != +6) goto c02_09be;

	i8 v13271 = (i8)(intptr_t)(f499_reduce_6);

	((void(*)(void))(intptr_t)v13271)();

	goto c02_09b7;

c02_09be:;

	if (v13264 != +7) goto c02_09bf;

	i8 v13272 = (i8)(intptr_t)(f500_reduce_7);

	((void(*)(void))(intptr_t)v13272)();

	goto c02_09b7;

c02_09bf:;

	if (v13264 != +8) goto c02_09c0;

	i8 v13273 = (i8)(intptr_t)(f501_reduce_8);

	((void(*)(void))(intptr_t)v13273)();

	goto c02_09b7;

c02_09c0:;

	if (v13264 != +9) goto c02_09c1;

	i8 v13274 = (i8)(intptr_t)(f502_reduce_9);

	((void(*)(void))(intptr_t)v13274)();

	goto c02_09b7;

c02_09c1:;

	if (v13264 != +10) goto c02_09c2;

	i8 v13275 = (i8)(intptr_t)(f503_reduce_10);

	((void(*)(void))(intptr_t)v13275)();

	goto c02_09b7;

c02_09c2:;

	if (v13264 != +11) goto c02_09c3;

	i8 v13276 = (i8)(intptr_t)(f504_reduce_11);

	((void(*)(void))(intptr_t)v13276)();

	goto c02_09b7;

c02_09c3:;

	if (v13264 != +12) goto c02_09c4;

	i8 v13277 = (i8)(intptr_t)(f505_reduce_12);

	((void(*)(void))(intptr_t)v13277)();

	goto c02_09b7;

c02_09c4:;

	if (v13264 != +13) goto c02_09c5;

	i8 v13278 = (i8)(intptr_t)(f506_reduce_13);

	((void(*)(void))(intptr_t)v13278)();

	goto c02_09b7;

c02_09c5:;

	if (v13264 != +14) goto c02_09c6;

	i8 v13279 = (i8)(intptr_t)(f507_reduce_14);

	((void(*)(void))(intptr_t)v13279)();

	goto c02_09b7;

c02_09c6:;

	if (v13264 != +15) goto c02_09c7;

	i8 v13280 = (i8)(intptr_t)(f508_reduce_15);

	((void(*)(void))(intptr_t)v13280)();

	goto c02_09b7;

c02_09c7:;

	if (v13264 != +16) goto c02_09c8;

	i8 v13281 = (i8)(intptr_t)(f509_reduce_16);

	((void(*)(void))(intptr_t)v13281)();

	goto c02_09b7;

c02_09c8:;

	if (v13264 != +17) goto c02_09c9;

	i8 v13282 = (i8)(intptr_t)(f510_reduce_17);

	((void(*)(void))(intptr_t)v13282)();

	goto c02_09b7;

c02_09c9:;

	if (v13264 != +18) goto c02_09ca;

	i8 v13283 = (i8)(intptr_t)(f511_reduce_18);

	((void(*)(void))(intptr_t)v13283)();

	goto c02_09b7;

c02_09ca:;

	if (v13264 != +19) goto c02_09cb;

	i8 v13284 = (i8)(intptr_t)(f512_reduce_19);

	((void(*)(void))(intptr_t)v13284)();

	goto c02_09b7;

c02_09cb:;

	if (v13264 != +20) goto c02_09cc;

	i8 v13285 = (i8)(intptr_t)(f513_reduce_20);

	((void(*)(void))(intptr_t)v13285)();

	goto c02_09b7;

c02_09cc:;

	if (v13264 != +21) goto c02_09cd;

	i8 v13286 = (i8)(intptr_t)(f514_reduce_21);

	((void(*)(void))(intptr_t)v13286)();

	goto c02_09b7;

c02_09cd:;

	if (v13264 != +22) goto c02_09ce;

	i8 v13287 = (i8)(intptr_t)(f515_reduce_22);

	((void(*)(void))(intptr_t)v13287)();

	goto c02_09b7;

c02_09ce:;

	if (v13264 != +23) goto c02_09cf;

	i8 v13288 = (i8)(intptr_t)(f516_reduce_23);

	((void(*)(void))(intptr_t)v13288)();

	goto c02_09b7;

c02_09cf:;

	if (v13264 != +24) goto c02_09d0;

	i8 v13289 = (i8)(intptr_t)(f517_reduce_24);

	((void(*)(void))(intptr_t)v13289)();

	goto c02_09b7;

c02_09d0:;

	if (v13264 != +25) goto c02_09d1;

	i8 v13290 = (i8)(intptr_t)(f518_reduce_25);

	((void(*)(void))(intptr_t)v13290)();

	goto c02_09b7;

c02_09d1:;

	if (v13264 != +26) goto c02_09d2;

	i8 v13291 = (i8)(intptr_t)(f519_reduce_26);

	((void(*)(void))(intptr_t)v13291)();

	goto c02_09b7;

c02_09d2:;

	if (v13264 != +27) goto c02_09d3;

	i8 v13292 = (i8)(intptr_t)(f520_reduce_27);

	((void(*)(void))(intptr_t)v13292)();

	goto c02_09b7;

c02_09d3:;

	if (v13264 != +28) goto c02_09d4;

	i8 v13293 = (i8)(intptr_t)(f521_reduce_28);

	((void(*)(void))(intptr_t)v13293)();

	goto c02_09b7;

c02_09d4:;

	if (v13264 != +29) goto c02_09d5;

	i8 v13294 = (i8)(intptr_t)(f522_reduce_29);

	((void(*)(void))(intptr_t)v13294)();

	goto c02_09b7;

c02_09d5:;

	if (v13264 != +30) goto c02_09d6;

	i8 v13295 = (i8)(intptr_t)(f523_reduce_30);

	((void(*)(void))(intptr_t)v13295)();

	goto c02_09b7;

c02_09d6:;

	if (v13264 != +31) goto c02_09d7;

	i8 v13296 = (i8)(intptr_t)(f524_reduce_31);

	((void(*)(void))(intptr_t)v13296)();

	goto c02_09b7;

c02_09d7:;

	if (v13264 != +32) goto c02_09d8;

	i8 v13297 = (i8)(intptr_t)(f525_reduce_32);

	((void(*)(void))(intptr_t)v13297)();

	goto c02_09b7;

c02_09d8:;

	if (v13264 != +33) goto c02_09d9;

	i8 v13298 = (i8)(intptr_t)(f526_reduce_33);

	((void(*)(void))(intptr_t)v13298)();

	goto c02_09b7;

c02_09d9:;

	if (v13264 != +34) goto c02_09da;

	i8 v13299 = (i8)(intptr_t)(f527_reduce_34);

	((void(*)(void))(intptr_t)v13299)();

	goto c02_09b7;

c02_09da:;

	if (v13264 != +35) goto c02_09db;

	i8 v13300 = (i8)(intptr_t)(f528_reduce_35);

	((void(*)(void))(intptr_t)v13300)();

	goto c02_09b7;

c02_09db:;

	if (v13264 != +36) goto c02_09dc;

	i8 v13301 = (i8)(intptr_t)(f529_reduce_36);

	((void(*)(void))(intptr_t)v13301)();

	goto c02_09b7;

c02_09dc:;

	if (v13264 != +37) goto c02_09dd;

	i8 v13302 = (i8)(intptr_t)(f530_reduce_37);

	((void(*)(void))(intptr_t)v13302)();

	goto c02_09b7;

c02_09dd:;

	if (v13264 != +38) goto c02_09de;

	i8 v13303 = (i8)(intptr_t)(f531_reduce_38);

	((void(*)(void))(intptr_t)v13303)();

	goto c02_09b7;

c02_09de:;

	if (v13264 != +39) goto c02_09df;

	i8 v13304 = (i8)(intptr_t)(f532_reduce_39);

	((void(*)(void))(intptr_t)v13304)();

	goto c02_09b7;

c02_09df:;

	if (v13264 != +40) goto c02_09e0;

	i8 v13305 = (i8)(intptr_t)(f533_reduce_40);

	((void(*)(void))(intptr_t)v13305)();

	goto c02_09b7;

c02_09e0:;

	if (v13264 != +41) goto c02_09e1;

	i8 v13306 = (i8)(intptr_t)(f534_reduce_41);

	((void(*)(void))(intptr_t)v13306)();

	goto c02_09b7;

c02_09e1:;

	if (v13264 != +42) goto c02_09e2;

	i8 v13307 = (i8)(intptr_t)(f535_reduce_42);

	((void(*)(void))(intptr_t)v13307)();

	goto c02_09b7;

c02_09e2:;

	if (v13264 != +43) goto c02_09e3;

	i8 v13308 = (i8)(intptr_t)(f536_reduce_43);

	((void(*)(void))(intptr_t)v13308)();

	goto c02_09b7;

c02_09e3:;

	if (v13264 != +44) goto c02_09e4;

	i8 v13309 = (i8)(intptr_t)(f537_reduce_44);

	((void(*)(void))(intptr_t)v13309)();

	goto c02_09b7;

c02_09e4:;

	if (v13264 != +45) goto c02_09e5;

	i8 v13310 = (i8)(intptr_t)(f538_reduce_45);

	((void(*)(void))(intptr_t)v13310)();

	goto c02_09b7;

c02_09e5:;

	if (v13264 != +46) goto c02_09e6;

	i8 v13311 = (i8)(intptr_t)(f539_reduce_46);

	((void(*)(void))(intptr_t)v13311)();

	goto c02_09b7;

c02_09e6:;

	if (v13264 != +47) goto c02_09e7;

	i8 v13312 = (i8)(intptr_t)(f540_reduce_47);

	((void(*)(void))(intptr_t)v13312)();

	goto c02_09b7;

c02_09e7:;

	if (v13264 != +48) goto c02_09e8;

	i8 v13313 = (i8)(intptr_t)(f541_reduce_48);

	((void(*)(void))(intptr_t)v13313)();

	goto c02_09b7;

c02_09e8:;

	if (v13264 != +49) goto c02_09e9;

	i8 v13314 = (i8)(intptr_t)(f542_reduce_49);

	((void(*)(void))(intptr_t)v13314)();

	goto c02_09b7;

c02_09e9:;

	if (v13264 != +50) goto c02_09ea;

	i8 v13315 = (i8)(intptr_t)(f543_reduce_50);

	((void(*)(void))(intptr_t)v13315)();

	goto c02_09b7;

c02_09ea:;

	if (v13264 != +51) goto c02_09eb;

	i8 v13316 = (i8)(intptr_t)(f544_reduce_51);

	((void(*)(void))(intptr_t)v13316)();

	goto c02_09b7;

c02_09eb:;

	if (v13264 != +52) goto c02_09ec;

	i8 v13317 = (i8)(intptr_t)(f545_reduce_52);

	((void(*)(void))(intptr_t)v13317)();

	goto c02_09b7;

c02_09ec:;

	if (v13264 != +53) goto c02_09ed;

	i8 v13318 = (i8)(intptr_t)(f546_reduce_53);

	((void(*)(void))(intptr_t)v13318)();

	goto c02_09b7;

c02_09ed:;

	if (v13264 != +54) goto c02_09ee;

	i8 v13319 = (i8)(intptr_t)(f547_reduce_54);

	((void(*)(void))(intptr_t)v13319)();

	goto c02_09b7;

c02_09ee:;

	if (v13264 != +55) goto c02_09ef;

	i8 v13320 = (i8)(intptr_t)(f548_reduce_55);

	((void(*)(void))(intptr_t)v13320)();

	goto c02_09b7;

c02_09ef:;

	if (v13264 != +56) goto c02_09f0;

	i8 v13321 = (i8)(intptr_t)(f549_reduce_56);

	((void(*)(void))(intptr_t)v13321)();

	goto c02_09b7;

c02_09f0:;

	if (v13264 != +57) goto c02_09f1;

	i8 v13322 = (i8)(intptr_t)(f550_reduce_57);

	((void(*)(void))(intptr_t)v13322)();

	goto c02_09b7;

c02_09f1:;

	if (v13264 != +58) goto c02_09f2;

	i8 v13323 = (i8)(intptr_t)(f551_reduce_58);

	((void(*)(void))(intptr_t)v13323)();

	goto c02_09b7;

c02_09f2:;

	if (v13264 != +59) goto c02_09f3;

	i8 v13324 = (i8)(intptr_t)(f552_reduce_59);

	((void(*)(void))(intptr_t)v13324)();

	goto c02_09b7;

c02_09f3:;

	if (v13264 != +60) goto c02_09f4;

	i8 v13325 = (i8)(intptr_t)(f553_reduce_60);

	((void(*)(void))(intptr_t)v13325)();

	goto c02_09b7;

c02_09f4:;

	if (v13264 != +61) goto c02_09f5;

	i8 v13326 = (i8)(intptr_t)(f554_reduce_61);

	((void(*)(void))(intptr_t)v13326)();

	goto c02_09b7;

c02_09f5:;

	if (v13264 != +62) goto c02_09f6;

	i8 v13327 = (i8)(intptr_t)(f555_reduce_62);

	((void(*)(void))(intptr_t)v13327)();

	goto c02_09b7;

c02_09f6:;

	if (v13264 != +63) goto c02_09f7;

	i8 v13328 = (i8)(intptr_t)(f556_reduce_63);

	((void(*)(void))(intptr_t)v13328)();

	goto c02_09b7;

c02_09f7:;

	if (v13264 != +64) goto c02_09f8;

	i8 v13329 = (i8)(intptr_t)(f557_reduce_64);

	((void(*)(void))(intptr_t)v13329)();

	goto c02_09b7;

c02_09f8:;

	if (v13264 != +65) goto c02_09f9;

	i8 v13330 = (i8)(intptr_t)(f558_reduce_65);

	((void(*)(void))(intptr_t)v13330)();

	goto c02_09b7;

c02_09f9:;

	if (v13264 != +66) goto c02_09fa;

	i8 v13331 = (i8)(intptr_t)(f559_reduce_66);

	((void(*)(void))(intptr_t)v13331)();

	goto c02_09b7;

c02_09fa:;

	if (v13264 != +67) goto c02_09fb;

	i8 v13332 = (i8)(intptr_t)(f560_reduce_67);

	((void(*)(void))(intptr_t)v13332)();

	goto c02_09b7;

c02_09fb:;

	if (v13264 != +68) goto c02_09fc;

	i8 v13333 = (i8)(intptr_t)(f561_reduce_68);

	((void(*)(void))(intptr_t)v13333)();

	goto c02_09b7;

c02_09fc:;

	if (v13264 != +69) goto c02_09fd;

	i8 v13334 = (i8)(intptr_t)(f562_reduce_69);

	((void(*)(void))(intptr_t)v13334)();

	goto c02_09b7;

c02_09fd:;

	if (v13264 != +70) goto c02_09fe;

	i8 v13335 = (i8)(intptr_t)(f563_reduce_70);

	((void(*)(void))(intptr_t)v13335)();

	goto c02_09b7;

c02_09fe:;

	if (v13264 != +71) goto c02_09ff;

	i8 v13336 = (i8)(intptr_t)(f564_reduce_71);

	((void(*)(void))(intptr_t)v13336)();

	goto c02_09b7;

c02_09ff:;

	if (v13264 != +72) goto c02_0a00;

	i8 v13337 = (i8)(intptr_t)(f565_reduce_72);

	((void(*)(void))(intptr_t)v13337)();

	goto c02_09b7;

c02_0a00:;

	if (v13264 != +73) goto c02_0a01;

	i8 v13338 = (i8)(intptr_t)(f566_reduce_73);

	((void(*)(void))(intptr_t)v13338)();

	goto c02_09b7;

c02_0a01:;

	if (v13264 != +74) goto c02_0a02;

	i8 v13339 = (i8)(intptr_t)(f567_reduce_74);

	((void(*)(void))(intptr_t)v13339)();

	goto c02_09b7;

c02_0a02:;

	if (v13264 != +75) goto c02_0a03;

	i8 v13340 = (i8)(intptr_t)(f568_reduce_75);

	((void(*)(void))(intptr_t)v13340)();

	goto c02_09b7;

c02_0a03:;

	if (v13264 != +76) goto c02_0a04;

	i8 v13341 = (i8)(intptr_t)(f569_reduce_76);

	((void(*)(void))(intptr_t)v13341)();

	goto c02_09b7;

c02_0a04:;

	if (v13264 != +77) goto c02_0a05;

	i8 v13342 = (i8)(intptr_t)(f570_reduce_77);

	((void(*)(void))(intptr_t)v13342)();

	goto c02_09b7;

c02_0a05:;

	if (v13264 != +78) goto c02_0a06;

	i8 v13343 = (i8)(intptr_t)(f571_reduce_78);

	((void(*)(void))(intptr_t)v13343)();

	goto c02_09b7;

c02_0a06:;

	if (v13264 != +79) goto c02_0a07;

	i8 v13344 = (i8)(intptr_t)(f572_reduce_79);

	((void(*)(void))(intptr_t)v13344)();

	goto c02_09b7;

c02_0a07:;

	if (v13264 != +80) goto c02_0a08;

	i8 v13345 = (i8)(intptr_t)(f573_reduce_80);

	((void(*)(void))(intptr_t)v13345)();

	goto c02_09b7;

c02_0a08:;

	if (v13264 != +81) goto c02_0a09;

	i8 v13346 = (i8)(intptr_t)(f574_reduce_81);

	((void(*)(void))(intptr_t)v13346)();

	goto c02_09b7;

c02_0a09:;

	if (v13264 != +82) goto c02_0a0a;

	i8 v13347 = (i8)(intptr_t)(f575_reduce_82);

	((void(*)(void))(intptr_t)v13347)();

	goto c02_09b7;

c02_0a0a:;

	if (v13264 != +83) goto c02_0a0b;

	i8 v13348 = (i8)(intptr_t)(f576_reduce_83);

	((void(*)(void))(intptr_t)v13348)();

	goto c02_09b7;

c02_0a0b:;

	if (v13264 != +84) goto c02_0a0c;

	i8 v13349 = (i8)(intptr_t)(f577_reduce_84);

	((void(*)(void))(intptr_t)v13349)();

	goto c02_09b7;

c02_0a0c:;

	if (v13264 != +85) goto c02_0a0d;

	i8 v13350 = (i8)(intptr_t)(f579_reduce_85);

	((void(*)(void))(intptr_t)v13350)();

	goto c02_09b7;

c02_0a0d:;

	if (v13264 != +86) goto c02_0a0e;

	i8 v13351 = (i8)(intptr_t)(f580_reduce_86);

	((void(*)(void))(intptr_t)v13351)();

	goto c02_09b7;

c02_0a0e:;

	if (v13264 != +87) goto c02_0a0f;

	i8 v13352 = (i8)(intptr_t)(f581_reduce_87);

	((void(*)(void))(intptr_t)v13352)();

	goto c02_09b7;

c02_0a0f:;

	if (v13264 != +88) goto c02_0a10;

	i8 v13353 = (i8)(intptr_t)(f582_reduce_88);

	((void(*)(void))(intptr_t)v13353)();

	goto c02_09b7;

c02_0a10:;

	if (v13264 != +89) goto c02_0a11;

	i8 v13354 = (i8)(intptr_t)(f583_reduce_89);

	((void(*)(void))(intptr_t)v13354)();

	goto c02_09b7;

c02_0a11:;

	if (v13264 != +90) goto c02_0a12;

	i8 v13355 = (i8)(intptr_t)(f584_reduce_90);

	((void(*)(void))(intptr_t)v13355)();

	goto c02_09b7;

c02_0a12:;

	if (v13264 != +91) goto c02_0a13;

	i8 v13356 = (i8)(intptr_t)(f585_reduce_91);

	((void(*)(void))(intptr_t)v13356)();

	goto c02_09b7;

c02_0a13:;

	if (v13264 != +92) goto c02_0a14;

	i8 v13357 = (i8)(intptr_t)(f586_reduce_92);

	((void(*)(void))(intptr_t)v13357)();

	goto c02_09b7;

c02_0a14:;

	if (v13264 != +93) goto c02_0a15;

	i8 v13358 = (i8)(intptr_t)(f587_reduce_93);

	((void(*)(void))(intptr_t)v13358)();

	goto c02_09b7;

c02_0a15:;

	if (v13264 != +94) goto c02_0a16;

	i8 v13359 = (i8)(intptr_t)(f588_reduce_94);

	((void(*)(void))(intptr_t)v13359)();

	goto c02_09b7;

c02_0a16:;

	if (v13264 != +95) goto c02_0a17;

	i8 v13360 = (i8)(intptr_t)(f589_reduce_95);

	((void(*)(void))(intptr_t)v13360)();

	goto c02_09b7;

c02_0a17:;

	if (v13264 != +96) goto c02_0a18;

	i8 v13361 = (i8)(intptr_t)(f590_reduce_96);

	((void(*)(void))(intptr_t)v13361)();

	goto c02_09b7;

c02_0a18:;

	if (v13264 != +97) goto c02_0a19;

	i8 v13362 = (i8)(intptr_t)(f591_reduce_97);

	((void(*)(void))(intptr_t)v13362)();

	goto c02_09b7;

c02_0a19:;

	if (v13264 != +98) goto c02_0a1a;

	i8 v13363 = (i8)(intptr_t)(f592_reduce_98);

	((void(*)(void))(intptr_t)v13363)();

	goto c02_09b7;

c02_0a1a:;

	if (v13264 != +99) goto c02_0a1b;

	i8 v13364 = (i8)(intptr_t)(f593_reduce_99);

	((void(*)(void))(intptr_t)v13364)();

	goto c02_09b7;

c02_0a1b:;

	if (v13264 != +100) goto c02_0a1c;

	i8 v13365 = (i8)(intptr_t)(f594_reduce_100);

	((void(*)(void))(intptr_t)v13365)();

	goto c02_09b7;

c02_0a1c:;

	if (v13264 != +101) goto c02_0a1d;

	i8 v13366 = (i8)(intptr_t)(f595_reduce_101);

	((void(*)(void))(intptr_t)v13366)();

	goto c02_09b7;

c02_0a1d:;

	if (v13264 != +102) goto c02_0a1e;

	i8 v13367 = (i8)(intptr_t)(f596_reduce_102);

	((void(*)(void))(intptr_t)v13367)();

	goto c02_09b7;

c02_0a1e:;

	if (v13264 != +103) goto c02_0a1f;

	i8 v13368 = (i8)(intptr_t)(f597_reduce_103);

	((void(*)(void))(intptr_t)v13368)();

	goto c02_09b7;

c02_0a1f:;

	if (v13264 != +104) goto c02_0a20;

	i8 v13369 = (i8)(intptr_t)(f598_reduce_104);

	((void(*)(void))(intptr_t)v13369)();

	goto c02_09b7;

c02_0a20:;

	if (v13264 != +105) goto c02_0a21;

	i8 v13370 = (i8)(intptr_t)(f599_reduce_105);

	((void(*)(void))(intptr_t)v13370)();

	goto c02_09b7;

c02_0a21:;

	if (v13264 != +106) goto c02_0a22;

	i8 v13371 = (i8)(intptr_t)(f600_reduce_106);

	((void(*)(void))(intptr_t)v13371)();

	goto c02_09b7;

c02_0a22:;

	if (v13264 != +107) goto c02_0a23;

	i8 v13372 = (i8)(intptr_t)(f601_reduce_107);

	((void(*)(void))(intptr_t)v13372)();

	goto c02_09b7;

c02_0a23:;

	if (v13264 != +108) goto c02_0a24;

	i8 v13373 = (i8)(intptr_t)(f602_reduce_108);

	((void(*)(void))(intptr_t)v13373)();

	goto c02_09b7;

c02_0a24:;

	if (v13264 != +109) goto c02_0a25;

	i8 v13374 = (i8)(intptr_t)(f603_reduce_109);

	((void(*)(void))(intptr_t)v13374)();

	goto c02_09b7;

c02_0a25:;

	if (v13264 != +110) goto c02_0a26;

	i8 v13375 = (i8)(intptr_t)(f604_reduce_110);

	((void(*)(void))(intptr_t)v13375)();

	goto c02_09b7;

c02_0a26:;

	if (v13264 != +111) goto c02_0a27;

	i8 v13376 = (i8)(intptr_t)(f605_reduce_111);

	((void(*)(void))(intptr_t)v13376)();

	goto c02_09b7;

c02_0a27:;

	if (v13264 != +112) goto c02_0a28;

	i8 v13377 = (i8)(intptr_t)(f606_reduce_112);

	((void(*)(void))(intptr_t)v13377)();

	goto c02_09b7;

c02_0a28:;

	if (v13264 != +113) goto c02_0a29;

	i8 v13378 = (i8)(intptr_t)(f607_reduce_113);

	((void(*)(void))(intptr_t)v13378)();

	goto c02_09b7;

c02_0a29:;

	if (v13264 != +114) goto c02_0a2a;

	i8 v13379 = (i8)(intptr_t)(f608_reduce_114);

	((void(*)(void))(intptr_t)v13379)();

	goto c02_09b7;

c02_0a2a:;

	if (v13264 != +115) goto c02_0a2b;

	i8 v13380 = (i8)(intptr_t)(f609_reduce_115);

	((void(*)(void))(intptr_t)v13380)();

	goto c02_09b7;

c02_0a2b:;

	if (v13264 != +122) goto c02_0a2c;

	i8 v13381 = (i8)(intptr_t)(f610_reduce_122);

	((void(*)(void))(intptr_t)v13381)();

	goto c02_09b7;

c02_0a2c:;

	if (v13264 != +126) goto c02_0a2d;

	i8 v13382 = (i8)(intptr_t)(f611_reduce_126);

	((void(*)(void))(intptr_t)v13382)();

	goto c02_09b7;

c02_0a2d:;

	if (v13264 != +127) goto c02_0a2e;

	i8 v13383 = (i8)(intptr_t)(f612_reduce_127);

	((void(*)(void))(intptr_t)v13383)();

	goto c02_09b7;

c02_0a2e:;

	if (v13264 != +128) goto c02_0a2f;

	i8 v13384 = (i8)(intptr_t)(f613_reduce_128);

	((void(*)(void))(intptr_t)v13384)();

	goto c02_09b7;

c02_0a2f:;

	if (v13264 != +129) goto c02_0a30;

	i8 v13385 = (i8)(intptr_t)(f614_reduce_129);

	((void(*)(void))(intptr_t)v13385)();

	goto c02_09b7;

c02_0a30:;

	if (v13264 != +135) goto c02_0a31;

	i8 v13386 = (i8)(intptr_t)(f615_reduce_135);

	((void(*)(void))(intptr_t)v13386)();

	goto c02_09b7;

c02_0a31:;

	if (v13264 != +138) goto c02_0a32;

	i8 v13387 = (i8)(intptr_t)(f616_reduce_138);

	((void(*)(void))(intptr_t)v13387)();

	goto c02_09b7;

c02_0a32:;

c02_09b7:;


	i8 v13388 = (i8)(intptr_t)(ws+2920);
	i8 v13389 = *(i8*)(intptr_t)v13388;
	i8 v13390 = (i8)(intptr_t)(ws+1248);
	i8 v13391 = *(i8*)(intptr_t)v13390;
	i8 v13392 = v13391+(+24);
	*(i8*)(intptr_t)v13392 = v13389;

	i8 v13393 = (i8)(intptr_t)(((i1*)c02_a861+0));
	i8 v13394 = (i8)(intptr_t)(ws+2912);
	i2 v13395 = *(i2*)(intptr_t)v13394;
	i1 v13396 = v13395;
	i8 v13397 = v13396;
	i8 v13398 = v13393+v13397;
	i1 v13399 = *(i1*)(intptr_t)v13398;
	i8 v13400 = (i8)(intptr_t)(ws+3001);
	*(i1*)(intptr_t)v13400 = v13399;

	i8 v13401 = (i8)(intptr_t)(ws+1248);
	i8 v13402 = *(i8*)(intptr_t)v13401;
	i2 v13403 = *(i2*)(intptr_t)v13402;
	i8 v13404 = (i8)(intptr_t)(ws+3002);
	*(i2*)(intptr_t)v13404 = v13403;

	i8 v13405 = (i8)(intptr_t)(((i1*)c02_a849+0));
	i8 v13406 = (i8)(intptr_t)(ws+3002);
	i2 v13407 = *(i2*)(intptr_t)v13406;
	i1 v13408 = v13407;
	i8 v13409 = v13408;
	i1 v13410 = (i1)+1;
	i8 v13411 = ((i8)v13409)<<v13410;
	i8 v13412 = v13405+v13411;
	i2 v13413 = *(i2*)(intptr_t)v13412;
	i8 v13414 = (i8)(intptr_t)(ws+2916);
	*(i2*)(intptr_t)v13414 = v13413;

	i2 v13415 = (i2)+113;
	i8 v13416 = (i8)(intptr_t)(ws+3002);
	i2 v13417 = *(i2*)(intptr_t)v13416;
	if (v13415<v13417) goto c02_0a37; else goto c02_0a36;

c02_0a36:;

	i8 v13418 = (i8)(intptr_t)(((i1*)c02_a848+0));
	i8 v13419 = (i8)(intptr_t)(ws+3002);
	i2 v13420 = *(i2*)(intptr_t)v13419;
	i1 v13421 = v13420;
	i8 v13422 = v13421;
	i1 v13423 = (i1)+1;
	i8 v13424 = ((i8)v13422)<<v13423;
	i8 v13425 = v13418+v13424;
	i2 v13426 = *(i2*)(intptr_t)v13425;
	i8 v13427 = (i8)(intptr_t)(ws+3001);
	i1 v13428 = *(i1*)(intptr_t)v13427;
	i2 v13429 = v13428;
	i2 v13430 = v13426+v13429;
	i8 v13431 = (i8)(intptr_t)(ws+3004);
	*(i2*)(intptr_t)v13431 = v13430;

	i8 v13432 = (i8)(intptr_t)(ws+3004);
	i2 v13433 = *(i2*)(intptr_t)v13432;
	i2 v13434 = (i2)+0;
	if (v13433<v13434) goto c02_0a40; else goto c02_0a42;

c02_0a42:;

	i8 v13435 = (i8)(intptr_t)(ws+3004);
	i2 v13436 = *(i2*)(intptr_t)v13435;
	i2 v13437 = (i2)+1219;
	if (v13436<v13437) goto c02_0a41; else goto c02_0a40;

c02_0a41:;

	i8 v13438 = (i8)(intptr_t)(((i1*)c02_a846+0));
	i8 v13439 = (i8)(intptr_t)(ws+3004);
	i2 v13440 = *(i2*)(intptr_t)v13439;
	i8 v13441 = v13440;
	i8 v13442 = v13438+v13441;
	i1 v13443 = *(i1*)(intptr_t)v13442;
	i8 v13444 = (i8)(intptr_t)(ws+3001);
	i1 v13445 = *(i1*)(intptr_t)v13444;
	if (v13443==v13445) goto c02_0a3f; else goto c02_0a40;

c02_0a3f:;

	i8 v13446 = (i8)(intptr_t)(((i1*)c02_a845+0));
	i8 v13447 = (i8)(intptr_t)(ws+3004);
	i2 v13448 = *(i2*)(intptr_t)v13447;
	i8 v13449 = v13448;
	i1 v13450 = (i1)+1;
	i8 v13451 = ((i8)v13449)<<v13450;
	i8 v13452 = v13446+v13451;
	i2 v13453 = *(i2*)(intptr_t)v13452;
	i8 v13454 = (i8)(intptr_t)(ws+2916);
	*(i2*)(intptr_t)v13454 = v13453;

	goto c02_0a38;

c02_0a40:;

c02_0a38:;

	goto c02_0a33;

c02_0a37:;

c02_0a33:;

	i8 v13455 = (i8)(intptr_t)(ws+1248);
	i8 v13456 = *(i8*)(intptr_t)v13455;
	i8 v13457 = v13456+(+16);
	i8 v13458 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13458 = v13457;

	i8 v13459 = (i8)(intptr_t)(ws+2916);
	i2 v13460 = *(i2*)(intptr_t)v13459;
	i8 v13461 = (i8)(intptr_t)(ws+1248);
	i8 v13462 = *(i8*)(intptr_t)v13461;
	*(i2*)(intptr_t)v13462 = v13460;

	i8 v13463 = (i8)(intptr_t)(ws+3001);
	i1 v13464 = *(i1*)(intptr_t)v13463;
	i8 v13465 = (i8)(intptr_t)(ws+1248);
	i8 v13466 = *(i8*)(intptr_t)v13465;
	i8 v13467 = v13466+(+2);
	*(i1*)(intptr_t)v13467 = v13464;

endsub:;
	*p10465 = *(i2*)(intptr_t)(ws+2916);
}
	void f489_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+2912 length ws+0
void f617_yy_parse_failed(void) {

	i8 v13468 = (i8)(intptr_t)(f489_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v13468)();

endsub:;
}
	void f59_StartError(void);
const i1 c02_s01fa[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f60_EndError(void);

// yy_syntax_error workspace at ws+2912 length ws+16
void f618_yy_syntax_error(i8 p13469 /* yyminor */, i1 p13470 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2912) = p13470; /*yymajor */
	*(i8*)(intptr_t)(ws+2920) = p13469; /*yyminor */

	i8 v13471 = (i8)(intptr_t)(f59_StartError);

	((void(*)(void))(intptr_t)v13471)();

	i8 v13472 = (i8)(intptr_t)c02_s01fa;
	i8 v13473 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13473)(v13472);

	i8 v13474 = (i8)(intptr_t)(((i1*)c02_a84a+0));
	i8 v13475 = (i8)(intptr_t)(ws+2912);
	i1 v13476 = *(i1*)(intptr_t)v13475;
	i8 v13477 = v13476;
	i1 v13478 = (i1)+3;
	i8 v13479 = ((i8)v13477)<<v13478;
	i8 v13480 = v13474+v13479;
	i8 v13481 = *(i8*)(intptr_t)v13480;
	i8 v13482 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13482)(v13481);

	i8 v13483 = (i8)(intptr_t)(f60_EndError);

	((void(*)(void))(intptr_t)v13483)();

endsub:;
}

// yy_accept workspace at ws+2912 length ws+0
void f619_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+2888 length ws+0
void f620_ParserInit(void) {

	i1 v13484 = (i1)-1;
	i8 v13485 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13485 = v13484;

	i8 v13486 = (i8)(intptr_t)(ws+1256);
	i8 v13487 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13487 = v13486;

	i2 v13488 = (i2)+0;
	i8 v13489 = (i8)(intptr_t)(ws+1256);
	*(i2*)(intptr_t)v13489 = v13488;

	i1 v13490 = (i1)+0;
	i8 v13491 = (i8)(intptr_t)(ws+1258);
	*(i1*)(intptr_t)v13491 = v13490;

endsub:;
}
	void f488_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+2888 length ws+0
void f621_ParserDeinit(void) {

c02_0a45:;

	i8 v13492 = (i8)(intptr_t)(ws+1248);
	i8 v13493 = *(i8*)(intptr_t)v13492;
	i8 v13494 = (i8)(intptr_t)(ws+1256);
	if (v13493==v13494) goto c02_0a48; else goto c02_0a47;

c02_0a47:;

	i8 v13495 = (i8)(intptr_t)(f488_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v13495)();

	goto c02_0a45;

c02_0a48:;

endsub:;
}
	void f492_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f490_yy_stack_overflow(void);
	void f619_yy_accept(void);
	void f618_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f486_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f617_yy_parse_failed(void);

// ParserFeedToken workspace at ws+2888 length ws+20
void f622_ParserFeedToken(i8 p13496 /* yyminor */, i1 p13497 /* yymajor */) {
	*(i1*)(intptr_t)(ws+2888) = p13497; /*yymajor */
	*(i8*)(intptr_t)(ws+2896) = p13496; /*yyminor */

	i8 v13498 = (i8)(intptr_t)(ws+1248);
	i8 v13499 = *(i8*)(intptr_t)v13498;
	i2 v13500 = *(i2*)(intptr_t)v13499;
	i8 v13501 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13501 = v13500;

c02_0a49:;

	i2 v13502 = (i2)+221;
	i8 v13503 = (i8)(intptr_t)(ws+2904);
	i2 v13504 = *(i2*)(intptr_t)v13503;
	if (v13502<v13504) goto c02_0a4f; else goto c02_0a4e;

c02_0a4e:;

	i8 v13505 = (i8)(intptr_t)(((i1*)c02_a847+0));
	i8 v13506 = (i8)(intptr_t)(ws+2904);
	i2 v13507 = *(i2*)(intptr_t)v13506;
	i1 v13508 = v13507;
	i8 v13509 = v13508;
	i1 v13510 = (i1)+1;
	i8 v13511 = ((i8)v13509)<<v13510;
	i8 v13512 = v13505+v13511;
	i2 v13513 = *(i2*)(intptr_t)v13512;
	i8 v13514 = (i8)(intptr_t)(ws+2888);
	i1 v13515 = *(i1*)(intptr_t)v13514;
	i2 v13516 = v13515;
	i2 v13517 = v13513+v13516;
	i8 v13518 = (i8)(intptr_t)(ws+2906);
	*(i2*)(intptr_t)v13518 = v13517;

	i8 v13519 = (i8)(intptr_t)(((i1*)c02_a846+0));
	i8 v13520 = (i8)(intptr_t)(ws+2906);
	i2 v13521 = *(i2*)(intptr_t)v13520;
	i8 v13522 = v13521;
	i8 v13523 = v13519+v13522;
	i1 v13524 = *(i1*)(intptr_t)v13523;
	i8 v13525 = (i8)(intptr_t)(ws+2888);
	i1 v13526 = *(i1*)(intptr_t)v13525;
	if (v13524==v13526) goto c02_0a54; else goto c02_0a53;

c02_0a53:;

	i8 v13527 = (i8)(intptr_t)(((i1*)c02_a849+0));
	i8 v13528 = (i8)(intptr_t)(ws+2904);
	i2 v13529 = *(i2*)(intptr_t)v13528;
	i1 v13530 = v13529;
	i8 v13531 = v13530;
	i1 v13532 = (i1)+1;
	i8 v13533 = ((i8)v13531)<<v13532;
	i8 v13534 = v13527+v13533;
	i2 v13535 = *(i2*)(intptr_t)v13534;
	i8 v13536 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13536 = v13535;

	goto c02_0a50;

c02_0a54:;

	i8 v13537 = (i8)(intptr_t)(((i1*)c02_a845+0));
	i8 v13538 = (i8)(intptr_t)(ws+2906);
	i2 v13539 = *(i2*)(intptr_t)v13538;
	i8 v13540 = v13539;
	i1 v13541 = (i1)+1;
	i8 v13542 = ((i8)v13540)<<v13541;
	i8 v13543 = v13537+v13542;
	i2 v13544 = *(i2*)(intptr_t)v13543;
	i8 v13545 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13545 = v13544;

c02_0a50:;

	goto c02_0a4b;

c02_0a4f:;

c02_0a4b:;

	i8 v13546 = (i8)(intptr_t)(ws+2904);
	i2 v13547 = *(i2*)(intptr_t)v13546;
	i2 v13548 = (i2)+451;
	if (v13547<v13548) goto c02_0a59; else goto c02_0a58;

c02_0a58:;

	i8 v13549 = (i8)(intptr_t)(ws+2904);
	i2 v13550 = *(i2*)(intptr_t)v13549;
	i2 v13551 = v13550+(-451);
	i8 v13552 = (i8)(intptr_t)(ws+2888);
	i1 v13553 = *(i1*)(intptr_t)v13552;
	i8 v13554 = (i8)(intptr_t)(f492_yy_reduce);
	i2 v13555;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v13554)(&v13555, v13553, v13551);
	i8 v13556 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13556 = v13555;

	goto c02_0a55;

c02_0a59:;

	i2 v13557 = (i2)+447;
	i8 v13558 = (i8)(intptr_t)(ws+2904);
	i2 v13559 = *(i2*)(intptr_t)v13558;
	if (v13557<v13559) goto c02_0a5d; else goto c02_0a5c;

c02_0a5c:;

	i8 v13560 = (i8)(intptr_t)(ws+1248);
	i8 v13561 = *(i8*)(intptr_t)v13560;
	i8 v13562 = (i8)(intptr_t)(ws+2856);
	if (v13561==v13562) goto c02_0a61; else goto c02_0a62;

c02_0a61:;

	i8 v13563 = (i8)(intptr_t)(f490_yy_stack_overflow);

	((void(*)(void))(intptr_t)v13563)();

	goto endsub;

c02_0a62:;

c02_0a5e:;

	i8 v13564 = (i8)(intptr_t)(ws+1248);
	i8 v13565 = *(i8*)(intptr_t)v13564;
	i8 v13566 = v13565+(+16);
	i8 v13567 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13567 = v13566;

	i2 v13568 = (i2)+221;
	i8 v13569 = (i8)(intptr_t)(ws+2904);
	i2 v13570 = *(i2*)(intptr_t)v13569;
	if (v13568<v13570) goto c02_0a66; else goto c02_0a67;

c02_0a66:;

	i8 v13571 = (i8)(intptr_t)(ws+2904);
	i2 v13572 = *(i2*)(intptr_t)v13571;
	i2 v13573 = v13572+(+142);
	i8 v13574 = (i8)(intptr_t)(ws+2904);
	*(i2*)(intptr_t)v13574 = v13573;

	goto c02_0a63;

c02_0a67:;

c02_0a63:;

	i8 v13575 = (i8)(intptr_t)(ws+2904);
	i2 v13576 = *(i2*)(intptr_t)v13575;
	i8 v13577 = (i8)(intptr_t)(ws+1248);
	i8 v13578 = *(i8*)(intptr_t)v13577;
	*(i2*)(intptr_t)v13578 = v13576;

	i8 v13579 = (i8)(intptr_t)(ws+2888);
	i1 v13580 = *(i1*)(intptr_t)v13579;
	i8 v13581 = (i8)(intptr_t)(ws+1248);
	i8 v13582 = *(i8*)(intptr_t)v13581;
	i8 v13583 = v13582+(+2);
	*(i1*)(intptr_t)v13583 = v13580;

	i8 v13584 = (i8)(intptr_t)(ws+2896);
	i8 v13585 = *(i8*)(intptr_t)v13584;
	i8 v13586 = *(i8*)(intptr_t)v13585;
	i8 v13587 = (i8)(intptr_t)(ws+1248);
	i8 v13588 = *(i8*)(intptr_t)v13587;
	i8 v13589 = v13588+(+8);
	*(i8*)(intptr_t)v13589 = v13586;

	i8 v13590 = (i8)(intptr_t)(ws+2872);
	i1 v13591 = *(i1*)(intptr_t)v13590;
	i1 v13592 = (i1)+0;
	if ((s1)v13591<(s1)v13592) goto c02_0a6c; else goto c02_0a6b;

c02_0a6b:;

	i8 v13593 = (i8)(intptr_t)(ws+2872);
	i1 v13594 = *(i1*)(intptr_t)v13593;
	i1 v13595 = v13594+(-1);
	i8 v13596 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13596 = v13595;

	goto c02_0a68;

c02_0a6c:;

c02_0a68:;

	goto c02_0a4a;

c02_0a5d:;

	i8 v13597 = (i8)(intptr_t)(ws+2904);
	i2 v13598 = *(i2*)(intptr_t)v13597;
	i2 v13599 = (i2)+449;
	if (v13598==v13599) goto c02_0a6f; else goto c02_0a70;

c02_0a6f:;

	i8 v13600 = (i8)(intptr_t)(ws+1248);
	i8 v13601 = *(i8*)(intptr_t)v13600;
	i8 v13602 = v13601+(-16);
	i8 v13603 = (i8)(intptr_t)(ws+1248);
	*(i8*)(intptr_t)v13603 = v13602;

	i8 v13604 = (i8)(intptr_t)(f619_yy_accept);

	((void(*)(void))(intptr_t)v13604)();

	goto c02_0a4a;

c02_0a70:;

	i1 v13605 = (i1)+0;
	i8 v13606 = (i8)(intptr_t)(ws+2872);
	i1 v13607 = *(i1*)(intptr_t)v13606;
	if ((s1)v13605<(s1)v13607) goto c02_0a75; else goto c02_0a74;

c02_0a74:;

	i8 v13608 = (i8)(intptr_t)(ws+2888);
	i1 v13609 = *(i1*)(intptr_t)v13608;
	i8 v13610 = (i8)(intptr_t)(ws+2896);
	i8 v13611 = *(i8*)(intptr_t)v13610;
	i8 v13612 = (i8)(intptr_t)(f618_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v13612)(v13611, v13609);

	goto c02_0a71;

c02_0a75:;

c02_0a71:;

	i1 v13613 = (i1)+3;
	i8 v13614 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13614 = v13613;

	i8 v13615 = (i8)(intptr_t)(ws+2888);
	i1 v13616 = *(i1*)(intptr_t)v13615;
	i8 v13617 = (i8)(intptr_t)(ws+2896);
	i8 v13618 = *(i8*)(intptr_t)v13617;
	i8 v13619 = (i8)(intptr_t)(f486_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v13619)(v13618, v13616);

	i8 v13620 = (i8)(intptr_t)(ws+2888);
	i1 v13621 = *(i1*)(intptr_t)v13620;
	i1 v13622 = (i1)+0;
	if (v13621==v13622) goto c02_0a79; else goto c02_0a7a;

c02_0a79:;

	i8 v13623 = (i8)(intptr_t)(f617_yy_parse_failed);

	((void(*)(void))(intptr_t)v13623)();

	i1 v13624 = (i1)-1;
	i8 v13625 = (i8)(intptr_t)(ws+2872);
	*(i1*)(intptr_t)v13625 = v13624;

	goto c02_0a76;

c02_0a7a:;

c02_0a76:;

	goto c02_0a4a;

c02_0a55:;

	i8 v13626 = (i8)(intptr_t)(ws+1248);
	i8 v13627 = *(i8*)(intptr_t)v13626;
	i8 v13628 = (i8)(intptr_t)(ws+1256);
	if (v13627==v13628) goto c02_0a7e; else goto c02_0a7f;

c02_0a7e:;

	goto c02_0a4a;

c02_0a7f:;

c02_0a7b:;

	goto c02_0a49;

c02_0a4a:;

endsub:;
}
	void f35_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s01fb[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+2888 length ws+0
void f623_PrintFreeMemory(void) {

	i8 v13629 = (i8)(intptr_t)(f35_GetFreeMemory);
	i8 v13630;

	((void(*)(i8* /* i */))(intptr_t)v13629)(&v13630);
	i1 v13631 = (i1)+10;
	i8 v13632 = ((i8)v13630)>>v13631;
	i2 v13633 = v13632;
	i8 v13634 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v13634)(v13633);

	i8 v13635 = (i8)(intptr_t)c02_s01fb;
	i8 v13636 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13636)(v13635);

endsub:;
}
const i1 c02_s01fc[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+2896 length ws+0
void f624_SyntaxError(void) {

	i8 v13637 = (i8)(intptr_t)c02_s01fc;
	i8 v13638 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13638)(v13637);

	i8 v13639 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v13639)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f62_LexerAddIncludePath(i8 /* path */);
	void f624_SyntaxError(void);
	void f624_SyntaxError(void);
	void f624_SyntaxError(void);

// ParseArguments workspace at ws+2888 length ws+8
void f625_ParseArguments(void) {

	i8 v13640 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v13640)();

c02_0a80:;

	i8 v13641 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v13642;

	((void(*)(i8* /* arg */))(intptr_t)v13641)(&v13642);
	i8 v13643 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v13643 = v13642;

	i8 v13644 = (i8)(intptr_t)(ws+2888);
	i8 v13645 = *(i8*)(intptr_t)v13644;
	i8 v13646 = (i8)+0;
	if (v13645==v13646) goto c02_0a85; else goto c02_0a86;

c02_0a85:;

	goto c02_0a81;

c02_0a86:;

c02_0a82:;

	i8 v13647 = (i8)(intptr_t)(ws+2888);
	i8 v13648 = *(i8*)(intptr_t)v13647;
	i1 v13649 = *(i1*)(intptr_t)v13648;
	i1 v13650 = (i1)+45;
	if (v13649==v13650) goto c02_0a8a; else goto c02_0a8b;

c02_0a8a:;

	i8 v13651 = (i8)(intptr_t)(ws+2888);
	i8 v13652 = *(i8*)(intptr_t)v13651;
	i8 v13653 = v13652+(+1);
	i8 v13654 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v13654 = v13653;

	i8 v13655 = (i8)(intptr_t)(ws+2888);
	i8 v13656 = *(i8*)(intptr_t)v13655;
	i1 v13657 = *(i1*)(intptr_t)v13656;
	i1 v13658 = (i1)+73;
	if (v13657==v13658) goto c02_0a8f; else goto c02_0a90;

c02_0a8f:;

	i8 v13659 = (i8)(intptr_t)(ws+2888);
	i8 v13660 = *(i8*)(intptr_t)v13659;
	i8 v13661 = v13660+(+1);
	i8 v13662 = (i8)(intptr_t)(ws+2888);
	*(i8*)(intptr_t)v13662 = v13661;

	i8 v13663 = (i8)(intptr_t)(ws+2888);
	i8 v13664 = *(i8*)(intptr_t)v13663;
	i8 v13665 = (i8)(intptr_t)(f62_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v13665)(v13664);

	goto c02_0a8c;

c02_0a90:;

	i8 v13666 = (i8)(intptr_t)(f624_SyntaxError);

	((void(*)(void))(intptr_t)v13666)();

c02_0a8c:;

	goto c02_0a87;

c02_0a8b:;

	i8 v13667 = (i8)(intptr_t)(ws+24);
	i8 v13668 = *(i8*)(intptr_t)v13667;
	i8 v13669 = (i8)+0;
	if (v13668==v13669) goto c02_0a94; else goto c02_0a95;

c02_0a94:;

	i8 v13670 = (i8)(intptr_t)(ws+2888);
	i8 v13671 = *(i8*)(intptr_t)v13670;
	i8 v13672 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v13672 = v13671;

	goto c02_0a91;

c02_0a95:;

	i8 v13673 = (i8)(intptr_t)(ws+32);
	i8 v13674 = *(i8*)(intptr_t)v13673;
	i8 v13675 = (i8)+0;
	if (v13674==v13675) goto c02_0a98; else goto c02_0a99;

c02_0a98:;

	i8 v13676 = (i8)(intptr_t)(ws+2888);
	i8 v13677 = *(i8*)(intptr_t)v13676;
	i8 v13678 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v13678 = v13677;

	goto c02_0a91;

c02_0a99:;

	i8 v13679 = (i8)(intptr_t)(f624_SyntaxError);

	((void(*)(void))(intptr_t)v13679)();

c02_0a91:;

c02_0a87:;

	goto c02_0a80;

c02_0a81:;

	i8 v13680 = (i8)(intptr_t)(ws+24);
	i8 v13681 = *(i8*)(intptr_t)v13680;
	i8 v13682 = (i8)+0;
	if (v13681==v13682) goto c02_0a9f; else goto c02_0aa1;

c02_0aa1:;

	i8 v13683 = (i8)(intptr_t)(ws+32);
	i8 v13684 = *(i8*)(intptr_t)v13683;
	i8 v13685 = (i8)+0;
	if (v13684==v13685) goto c02_0a9f; else goto c02_0aa0;

c02_0a9f:;

	i8 v13686 = (i8)(intptr_t)(f624_SyntaxError);

	((void(*)(void))(intptr_t)v13686)();

	goto c02_0a9a;

c02_0aa0:;

c02_0a9a:;

endsub:;
}
const i1 c02_s01fd[] = { 0x43,0x4f,0x57,0x43,0x4f,0x4d,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f623_PrintFreeMemory(void);
	void f625_ParseArguments(void);
const i1 c02_s01fe[] = { 0 };
	void f62_LexerAddIncludePath(i8 /* path */);
	void f66_LexerIncludeFile(i8 /* path */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
const i1 c02_s01ff[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f219_ArchInitTypes(void);
	void f179_EmitterOpenfile(i8 /* filename */);
	void f181_EmitterDeclareSubroutine(i8 /* subr */);
	void f131_MidStartfile(i8* /* m */);
	void f443_Generate(i8 /* statement */);
	void f117_MidStartsub(i8* /* m */, i8 /* subr */);
	void f443_Generate(i8 /* statement */);
	void f620_ParserInit(void);
	void f67_LexerReadToken(i1* /* token */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);
	void f622_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f621_ParserDeinit(void);
	void f126_MidEndsub(i8* /* m */, i8 /* subr */);
	void f443_Generate(i8 /* statement */);
	void f139_MidEndfile(i8* /* m */);
	void f443_Generate(i8 /* statement */);
	void f180_EmitterClosefile(void);
const i1 c02_s0200[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f623_PrintFreeMemory(void);

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













































































































































	i2 v4626 = (i2)+1;
	i8 v4627 = (i8)(intptr_t)(ws+1194);
	*(i2*)(intptr_t)v4627 = v4626;

	i8 v4628 = (i8)+0;
	i8 v4629 = (i8)(intptr_t)(ws+1200);
	*(i8*)(intptr_t)v4629 = v4628;































	i2 v5696 = (i2)+0;
	i8 v5697 = (i8)(intptr_t)(ws+1208);
	*(i2*)(intptr_t)v5697 = v5696;


	i1 v5756 = (i1)+0;
	i8 v5757 = (i8)(intptr_t)(ws+1218);
	*(i1*)(intptr_t)v5757 = v5756;

















	i1 v8776 = (i1)+0;
	i8 v8777 = (i8)(intptr_t)(ws+1219);
	*(i1*)(intptr_t)v8777 = v8776;


































































	i8 v13687 = (i8)(intptr_t)c02_s01fd;
	i8 v13688 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13688)(v13687);

	i8 v13689 = (i8)(intptr_t)(f623_PrintFreeMemory);

	((void(*)(void))(intptr_t)v13689)();

	i8 v13690 = (i8)(intptr_t)(f625_ParseArguments);

	((void(*)(void))(intptr_t)v13690)();

	i8 v13691 = (i8)(intptr_t)c02_s01fe;
	i8 v13692 = (i8)(intptr_t)(f62_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v13692)(v13691);

	i8 v13693 = (i8)(intptr_t)(ws+24);
	i8 v13694 = *(i8*)(intptr_t)v13693;
	i8 v13695 = (i8)(intptr_t)(f66_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v13695)(v13694);

	i8 v13696 = (i8)+107;
	i8 v13697 = (i8)(intptr_t)(f31_Alloc);
	i8 v13698;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v13697)(&v13698, v13696);
	i8 v13699 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v13699 = v13698;

	i8 v13700 = (i8)(intptr_t)c02_s01ff;
	i8 v13701 = (i8)(intptr_t)(ws+40);
	i8 v13702 = *(i8*)(intptr_t)v13701;
	*(i8*)(intptr_t)v13702 = v13700;

	i8 v13703 = (i8)(intptr_t)(f219_ArchInitTypes);

	((void(*)(void))(intptr_t)v13703)();

	i8 v13704 = (i8)(intptr_t)(ws+32);
	i8 v13705 = *(i8*)(intptr_t)v13704;
	i8 v13706 = (i8)(intptr_t)(f179_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v13706)(v13705);

	i8 v13707 = (i8)(intptr_t)(ws+40);
	i8 v13708 = *(i8*)(intptr_t)v13707;
	i8 v13709 = (i8)(intptr_t)(f181_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v13709)(v13708);

	i8 v13710 = (i8)(intptr_t)(f131_MidStartfile);
	i8 v13711;

	((void(*)(i8* /* m */))(intptr_t)v13710)(&v13711);
	i8 v13712 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13712)(v13711);

	i8 v13713 = (i8)(intptr_t)(ws+40);
	i8 v13714 = *(i8*)(intptr_t)v13713;
	i8 v13715 = (i8)(intptr_t)(f117_MidStartsub);
	i8 v13716;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v13715)(&v13716, v13714);
	i8 v13717 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13717)(v13716);

	i8 v13718 = (i8)(intptr_t)(f620_ParserInit);

	((void(*)(void))(intptr_t)v13718)();

c02_0aa2:;

	i8 v13719 = (i8)(intptr_t)(f67_LexerReadToken);
	i1 v13720;

	((void(*)(i1* /* token */))(intptr_t)v13719)(&v13720);
	i8 v13721 = (i8)(intptr_t)(ws+2873);
	*(i1*)(intptr_t)v13721 = v13720;

	i8 v13722 = (i8)(intptr_t)(ws+2873);
	i1 v13723 = *(i1*)(intptr_t)v13722;

	if (v13723 != +34) goto c02_0aa5;

	i8 v13724 = (i8)(intptr_t)(ws+372);
	i4 v13725 = *(i4*)(intptr_t)v13724;
	i8 v13726 = (i8)(intptr_t)(ws+2880);
	*(i4*)(intptr_t)v13726 = v13725;

	goto c02_0aa4;

c02_0aa5:;

	if (v13723 != +33) goto c02_0aa6;

	i8 v13727 = (i8)(intptr_t)(ws+241);
	i8 v13728 = (i8)(intptr_t)(f33_StrDup);
	i8 v13729;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v13728)(&v13729, v13727);
	i8 v13730 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v13730 = v13729;

	goto c02_0aa4;

c02_0aa6:;

	if (v13723 != +41) goto c02_0aa7;

	i8 v13731 = (i8)(intptr_t)(ws+241);
	i8 v13732 = (i8)(intptr_t)(f33_StrDup);
	i8 v13733;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v13732)(&v13733, v13731);
	i8 v13734 = (i8)(intptr_t)(ws+2880);
	*(i8*)(intptr_t)v13734 = v13733;

	goto c02_0aa4;

c02_0aa7:;

	i4 v13735 = (i4)+0;
	i8 v13736 = (i8)(intptr_t)(ws+2880);
	*(i4*)(intptr_t)v13736 = v13735;

c02_0aa4:;


	i8 v13737 = (i8)(intptr_t)(ws+2873);
	i1 v13738 = *(i1*)(intptr_t)v13737;
	i8 v13739 = (i8)(intptr_t)(ws+2880);
	i8 v13740 = (i8)(intptr_t)(f622_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v13740)(v13739, v13738);

	i8 v13741 = (i8)(intptr_t)(ws+2873);
	i1 v13742 = *(i1*)(intptr_t)v13741;
	i1 v13743 = (i1)+0;
	if (v13742==v13743) goto c02_0aab; else goto c02_0aac;

c02_0aab:;

	goto c02_0aa3;

c02_0aac:;

c02_0aa8:;

	goto c02_0aa2;

c02_0aa3:;

	i8 v13744 = (i8)(intptr_t)(f621_ParserDeinit);

	((void(*)(void))(intptr_t)v13744)();

	i8 v13745 = (i8)(intptr_t)(ws+40);
	i8 v13746 = *(i8*)(intptr_t)v13745;
	i8 v13747 = (i8)(intptr_t)(f126_MidEndsub);
	i8 v13748;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v13747)(&v13748, v13746);
	i8 v13749 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13749)(v13748);

	i8 v13750 = (i8)(intptr_t)(f139_MidEndfile);
	i8 v13751;

	((void(*)(i8* /* m */))(intptr_t)v13750)(&v13751);
	i8 v13752 = (i8)(intptr_t)(f443_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v13752)(v13751);

	i8 v13753 = (i8)(intptr_t)(f180_EmitterClosefile);

	((void(*)(void))(intptr_t)v13753)();

	i8 v13754 = (i8)(intptr_t)c02_s0200;
	i8 v13755 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v13755)(v13754);

	i8 v13756 = (i8)(intptr_t)(f623_PrintFreeMemory);

	((void(*)(void))(intptr_t)v13756)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                                                                                             