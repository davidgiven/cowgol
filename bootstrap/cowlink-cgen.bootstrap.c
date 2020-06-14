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
	void f8_print_char(i1 /* c */);

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
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+3120);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+3120);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+728 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+3120 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+3120) = p40; /*value */
	*(i1*)(intptr_t)(ws+3124) = p39; /*base */
	*(i8*)(intptr_t)(ws+3128) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+3128);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+3120);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+3124);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+3144);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+3120);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+3124);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+3120);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+3144);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+3144);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+3144);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+3144);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+3144);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+3144);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+3136);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+3136);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+3136);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+3120);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+3128);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+3136);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+3152);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+3160);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+3152);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+3168);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+3160);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+3152);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+3168);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+3160);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+3152);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+3152);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+3160);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+3160);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+3136);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+3136);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+3096 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+3096) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+3096);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+3100);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+3112);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+3100);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+3088 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+3088) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+3088);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i8 workspace at ws+3088 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+3088) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+3088);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+728 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+728) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+729);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+728);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+730);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+730);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+730);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+730);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+730);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+730);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+730);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+728);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+729);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+729);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+729);
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
	void f18_print_hex_i8(i1 /* value */);
	void f18_print_hex_i8(i1 /* value */);

// print_hex_i32 workspace at ws+720 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+720) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+720);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+720);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+720);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+720);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}

// ArgvInit workspace at ws+632 length ws+0
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

// ArgvNext workspace at ws+632 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+632);
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
	*p347 = *(i8*)(intptr_t)(ws+632);
}

// StrCmp workspace at ws+736 length ws+17
void f25_StrCmp(i1* p366 /* res */, i8 p367 /* s2 */, i8 p368 /* s1 */) {
	*(i8*)(intptr_t)(ws+736) = p368; /*s1 */
	*(i8*)(intptr_t)(ws+744) = p367; /*s2 */

c02_0059:;

	i8 v369 = (i8)(intptr_t)(ws+736);
	i8 v370 = *(i8*)(intptr_t)v369;
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+744);
	i8 v373 = *(i8*)(intptr_t)v372;
	i1 v374 = *(i1*)(intptr_t)v373;
	i1 v375 = v371-v374;
	i8 v376 = (i8)(intptr_t)(ws+752);
	*(i1*)(intptr_t)v376 = v375;

	i8 v377 = (i8)(intptr_t)(ws+752);
	i1 v378 = *(i1*)(intptr_t)v377;
	i1 v379 = (i1)+0;
	if (v378==v379) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v380 = (i8)(intptr_t)(ws+736);
	i8 v381 = *(i8*)(intptr_t)v380;
	i1 v382 = *(i1*)(intptr_t)v381;
	i1 v383 = (i1)+0;
	if (v382==v383) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v384 = (i8)(intptr_t)(ws+736);
	i8 v385 = *(i8*)(intptr_t)v384;
	i8 v386 = v385+(+1);
	i8 v387 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v387 = v386;

	i8 v388 = (i8)(intptr_t)(ws+744);
	i8 v389 = *(i8*)(intptr_t)v388;
	i8 v390 = v389+(+1);
	i8 v391 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v391 = v390;

	goto c02_0059;

c02_005a:;

endsub:;
	*p366 = *(i1*)(intptr_t)(ws+752);
}

// ToLower workspace at ws+656 length ws+2
void f26_ToLower(i1* p392 /* cc */, i1 p393 /* c */) {
	*(i1*)(intptr_t)(ws+656) = p393; /*c */

	i8 v394 = (i8)(intptr_t)(ws+656);
	i1 v395 = *(i1*)(intptr_t)v394;
	i1 v396 = (i1)+65;
	if (v395<v396) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v397 = (i1)+90;
	i8 v398 = (i8)(intptr_t)(ws+656);
	i1 v399 = *(i1*)(intptr_t)v398;
	if (v397<v399) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v400 = (i8)(intptr_t)(ws+656);
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402 = v401|(+32);
	i8 v403 = (i8)(intptr_t)(ws+657);
	*(i1*)(intptr_t)v403 = v402;

	goto c02_0063;

c02_0069:;

	i8 v404 = (i8)(intptr_t)(ws+656);
	i1 v405 = *(i1*)(intptr_t)v404;
	i8 v406 = (i8)(intptr_t)(ws+657);
	*(i1*)(intptr_t)v406 = v405;

c02_0063:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+657);
}
	void f26_ToLower(i1* /* cc */, i1 /* c */);
	void f26_ToLower(i1* /* cc */, i1 /* c */);

// StrICmp workspace at ws+632 length ws+17
void f27_StrICmp(i1* p407 /* res */, i8 p408 /* s2 */, i8 p409 /* s1 */) {
	*(i8*)(intptr_t)(ws+632) = p409; /*s1 */
	*(i8*)(intptr_t)(ws+640) = p408; /*s2 */

c02_006b:;

	i8 v410 = (i8)(intptr_t)(ws+632);
	i8 v411 = *(i8*)(intptr_t)v410;
	i1 v412 = *(i1*)(intptr_t)v411;
	i8 v413 = (i8)(intptr_t)(f26_ToLower);
	i1 v414;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v413)(&v414, v412);
	i8 v415 = (i8)(intptr_t)(ws+640);
	i8 v416 = *(i8*)(intptr_t)v415;
	i1 v417 = *(i1*)(intptr_t)v416;
	i8 v418 = (i8)(intptr_t)(f26_ToLower);
	i1 v419;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v418)(&v419, v417);
	i1 v420 = v414-v419;
	i8 v421 = (i8)(intptr_t)(ws+648);
	*(i1*)(intptr_t)v421 = v420;

	i8 v422 = (i8)(intptr_t)(ws+648);
	i1 v423 = *(i1*)(intptr_t)v422;
	i1 v424 = (i1)+0;
	if (v423==v424) goto c02_0074; else goto c02_0072;

c02_0074:;

	i8 v425 = (i8)(intptr_t)(ws+632);
	i8 v426 = *(i8*)(intptr_t)v425;
	i1 v427 = *(i1*)(intptr_t)v426;
	i1 v428 = (i1)+0;
	if (v427==v428) goto c02_0072; else goto c02_0073;

c02_0072:;

	goto c02_006c;

c02_0073:;

c02_006d:;

	i8 v429 = (i8)(intptr_t)(ws+632);
	i8 v430 = *(i8*)(intptr_t)v429;
	i8 v431 = v430+(+1);
	i8 v432 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v432 = v431;

	i8 v433 = (i8)(intptr_t)(ws+640);
	i8 v434 = *(i8*)(intptr_t)v433;
	i8 v435 = v434+(+1);
	i8 v436 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v436 = v435;

	goto c02_006b;

c02_006c:;

endsub:;
	*p407 = *(i1*)(intptr_t)(ws+648);
}

// Alloc workspace at ws+784 length ws+16
void f31_Alloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+784) = p504; /*length */


	
*(i8*)(intptr_t)(ws+792) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+784) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+792);
}

// StrDup workspace at ws+736 length ws+16
void f33_StrDup(i8* p506 /* sout */, i8 p507 /* s */) {
	*(i8*)(intptr_t)(ws+736) = p507; /*s */


	
*(i8*)(intptr_t)(ws+744) 
=(intptr_t)strdup((const char*)(intptr_t) 
*(i8*)(intptr_t)(ws+736) 
); 



endsub:;
	*p506 = *(i8*)(intptr_t)(ws+744);
}

// GetFreeMemory workspace at ws+632 length ws+8
void f35_GetFreeMemory(i8* p508 /* i */) {

	i8 v509 = (i8)+0;
	i8 v510 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v510 = v509;

endsub:;
	*p508 = *(i8*)(intptr_t)(ws+632);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+808 length ws+28
void f36_fcb_i_blockin(i8 p511 /* fcb */) {
	*(i8*)(intptr_t)(ws+808) = p511; /*fcb */

	i8 v512 = (i8)(intptr_t)(ws+808);
	i8 v513 = *(i8*)(intptr_t)v512;
	i8 v514 = v513+(+12);
	i1 v515 = (i1)+0;
	i8 v516 = (i8)+512;
	i8 v517 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v517)(v516, v515, v514);

	i8 v518 = (i8)(intptr_t)(ws+808);
	i8 v519 = *(i8*)(intptr_t)v518;
	i4 v520 = *(i4*)(intptr_t)v519;
	i8 v521 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v521 = v520;

	i8 v522 = (i8)(intptr_t)(ws+808);
	i8 v523 = *(i8*)(intptr_t)v522;
	i8 v524 = v523+(+12);
	i8 v525 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v525 = v524;

	i8 v526 = (i8)(intptr_t)(ws+808);
	i8 v527 = *(i8*)(intptr_t)v526;
	i8 v528 = v527+(+8);
	i4 v529 = *(i4*)(intptr_t)v528;
	i1 v530 = (i1)+9;
	i4 v531 = ((i4)v529)<<v530;
	i8 v532 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v532 = v531;


	
pread( 
*(i4*)(intptr_t)(ws+816) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+824) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+832) 
); 



	i1 v533 = (i1)+0;
	i8 v534 = (i8)(intptr_t)(ws+808);
	i8 v535 = *(i8*)(intptr_t)v534;
	i8 v536 = v535+(+6);
	*(i1*)(intptr_t)v536 = v533;

endsub:;
}

// fcb_i_blockout workspace at ws+808 length ws+28
void f37_fcb_i_blockout(i8 p537 /* fcb */) {
	*(i8*)(intptr_t)(ws+808) = p537; /*fcb */

	i8 v538 = (i8)(intptr_t)(ws+808);
	i8 v539 = *(i8*)(intptr_t)v538;
	i8 v540 = v539+(+6);
	i1 v541 = *(i1*)(intptr_t)v540;
	i1 v542 = (i1)+0;
	if (v541==v542) goto c02_008d; else goto c02_008c;

c02_008c:;

	i8 v543 = (i8)(intptr_t)(ws+808);
	i8 v544 = *(i8*)(intptr_t)v543;
	i4 v545 = *(i4*)(intptr_t)v544;
	i8 v546 = (i8)(intptr_t)(ws+816);
	*(i4*)(intptr_t)v546 = v545;

	i8 v547 = (i8)(intptr_t)(ws+808);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+12);
	i8 v550 = (i8)(intptr_t)(ws+824);
	*(i8*)(intptr_t)v550 = v549;

	i8 v551 = (i8)(intptr_t)(ws+808);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+8);
	i4 v554 = *(i4*)(intptr_t)v553;
	i1 v555 = (i1)+9;
	i4 v556 = ((i4)v554)<<v555;
	i8 v557 = (i8)(intptr_t)(ws+832);
	*(i4*)(intptr_t)v557 = v556;


	
pwrite( 
*(i4*)(intptr_t)(ws+816) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+824) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+832) 
); 



	i1 v558 = (i1)+0;
	i8 v559 = (i8)(intptr_t)(ws+808);
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

// fcb_i_changeblock workspace at ws+792 length ws+12
void f38_fcb_i_changeblock(i4 p562 /* newblock */, i8 p563 /* fcb */) {
	*(i8*)(intptr_t)(ws+792) = p563; /*fcb */
	*(i4*)(intptr_t)(ws+800) = p562; /*newblock */

	i8 v564 = (i8)(intptr_t)(ws+800);
	i4 v565 = *(i4*)(intptr_t)v564;
	i8 v566 = (i8)(intptr_t)(ws+792);
	i8 v567 = *(i8*)(intptr_t)v566;
	i8 v568 = v567+(+8);
	i4 v569 = *(i4*)(intptr_t)v568;
	if (v565==v569) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v570 = (i8)(intptr_t)(ws+792);
	i8 v571 = *(i8*)(intptr_t)v570;
	i8 v572 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v572)(v571);

	i8 v573 = (i8)(intptr_t)(ws+800);
	i4 v574 = *(i4*)(intptr_t)v573;
	i8 v575 = (i8)(intptr_t)(ws+792);
	i8 v576 = *(i8*)(intptr_t)v575;
	i8 v577 = v576+(+8);
	*(i4*)(intptr_t)v577 = v574;

	i8 v578 = (i8)(intptr_t)(ws+792);
	i8 v579 = *(i8*)(intptr_t)v578;
	i8 v580 = (i8)(intptr_t)(f36_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v580)(v579);

	goto c02_008e;

c02_0092:;

c02_008e:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+744 length ws+28
void f39_fcb_i_open(i1* p581 /* errno */, i4 p582 /* flags */, i8 p583 /* filename */, i8 p584 /* fcb */) {
	*(i8*)(intptr_t)(ws+744) = p584; /*fcb */
	*(i8*)(intptr_t)(ws+752) = p583; /*filename */
	*(i4*)(intptr_t)(ws+760) = p582; /*flags */

	i8 v585 = (i8)(intptr_t)(ws+744);
	i8 v586 = *(i8*)(intptr_t)v585;
	i1 v587 = (i1)+0;
	i8 v588 = (i8)+524;
	i8 v589 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v589)(v588, v587, v586);

	i2 v590 = (i2)+511;
	i8 v591 = (i8)(intptr_t)(ws+744);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = v592+(+4);
	*(i2*)(intptr_t)v593 = v590;

	i4 v594 = (i4)-1;
	i8 v595 = (i8)(intptr_t)(ws+744);
	i8 v596 = *(i8*)(intptr_t)v595;
	i8 v597 = v596+(+8);
	*(i4*)(intptr_t)v597 = v594;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+768) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+752) 
,  
*(i4*)(intptr_t)(ws+760) 
,  
(+438)
); 



	i8 v598 = (i8)(intptr_t)(ws+768);
	i4 v599 = *(i4*)(intptr_t)v598;
	i8 v600 = (i8)(intptr_t)(ws+744);
	i8 v601 = *(i8*)(intptr_t)v600;
	*(i4*)(intptr_t)v601 = v599;

	i8 v602 = (i8)(intptr_t)(ws+768);
	i4 v603 = *(i4*)(intptr_t)v602;
	i4 v604 = (i4)+0;
	if ((s4)v603<(s4)v604) goto c02_0096; else goto c02_0097;

c02_0096:;


	
*(i1*)(intptr_t)(ws+764) 
 = errno; 



	goto c02_0093;

c02_0097:;

	i1 v605 = (i1)+0;
	i8 v606 = (i8)(intptr_t)(ws+764);
	*(i1*)(intptr_t)v606 = v605;

c02_0093:;

endsub:;
	*p581 = *(i1*)(intptr_t)(ws+764);
}
	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+720 length ws+17
void f40_FCBOpenIn(i1* p607 /* errno */, i8 p608 /* filename */, i8 p609 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p609; /*fcb */
	*(i8*)(intptr_t)(ws+728) = p608; /*filename */

	i8 v610 = (i8)(intptr_t)(ws+720);
	i8 v611 = *(i8*)(intptr_t)v610;
	i8 v612 = (i8)(intptr_t)(ws+728);
	i8 v613 = *(i8*)(intptr_t)v612;
	i4 v614 = (i4)+0;
	i8 v615 = (i8)(intptr_t)(f39_fcb_i_open);
	i1 v616;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v615)(&v616, v614, v613, v611);
	i8 v617 = (i8)(intptr_t)(ws+736);
	*(i1*)(intptr_t)v617 = v616;

endsub:;
	*p607 = *(i1*)(intptr_t)(ws+736);
}
	void f39_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+640 length ws+17
void f42_FCBOpenOut(i1* p629 /* errno */, i8 p630 /* filename */, i8 p631 /* fcb */) {
	*(i8*)(intptr_t)(ws+640) = p631; /*fcb */
	*(i8*)(intptr_t)(ws+648) = p630; /*filename */

	i8 v632 = (i8)(intptr_t)(ws+640);
	i8 v633 = *(i8*)(intptr_t)v632;
	i8 v634 = (i8)(intptr_t)(ws+648);
	i8 v635 = *(i8*)(intptr_t)v634;
	i4 v636 = (i4)+578;
	i8 v637 = (i8)(intptr_t)(f39_fcb_i_open);
	i1 v638;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v637)(&v638, v636, v635, v633);
	i8 v639 = (i8)(intptr_t)(ws+656);
	*(i1*)(intptr_t)v639 = v638;

endsub:;
	*p629 = *(i1*)(intptr_t)(ws+656);
}
	void f37_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+632 length ws+16
void f43_FCBClose(i1* p640 /* errno */, i8 p641 /* fcb */) {
	*(i8*)(intptr_t)(ws+632) = p641; /*fcb */

	i8 v642 = (i8)(intptr_t)(ws+632);
	i8 v643 = *(i8*)(intptr_t)v642;
	i8 v644 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v644)(v643);

	i8 v645 = (i8)(intptr_t)(ws+632);
	i8 v646 = *(i8*)(intptr_t)v645;
	i4 v647 = *(i4*)(intptr_t)v646;
	i8 v648 = (i8)(intptr_t)(ws+644);
	*(i4*)(intptr_t)v648 = v647;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+644) 
); 


	
*(i1*)(intptr_t)(ws+640) 
 = errno; 



endsub:;
	*p640 = *(i1*)(intptr_t)(ws+640);
}
	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// FCBSeek workspace at ws+720 length ws+18
void f44_FCBSeek(i4 p649 /* pos */, i8 p650 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p650; /*fcb */
	*(i4*)(intptr_t)(ws+728) = p649; /*pos */

	i8 v651 = (i8)(intptr_t)(ws+728);
	i4 v652 = *(i4*)(intptr_t)v651;
	i4 v653 = v652+(-1);
	i8 v654 = (i8)(intptr_t)(ws+728);
	*(i4*)(intptr_t)v654 = v653;

	i8 v655 = (i8)(intptr_t)(ws+728);
	i4 v656 = *(i4*)(intptr_t)v655;
	i1 v657 = (i1)+9;
	i4 v658 = ((i4)v656)>>v657;
	i8 v659 = (i8)(intptr_t)(ws+732);
	*(i4*)(intptr_t)v659 = v658;

	i8 v660 = (i8)(intptr_t)(ws+728);
	i4 v661 = *(i4*)(intptr_t)v660;
	i2 v662 = v661;
	i2 v663 = v662&(+511);
	i8 v664 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v664 = v663;

	i8 v665 = (i8)(intptr_t)(ws+720);
	i8 v666 = *(i8*)(intptr_t)v665;
	i8 v667 = (i8)(intptr_t)(ws+732);
	i4 v668 = *(i4*)(intptr_t)v667;
	i8 v669 = (i8)(intptr_t)(f38_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v669)(v668, v666);

	i8 v670 = (i8)(intptr_t)(ws+736);
	i2 v671 = *(i2*)(intptr_t)v670;
	i8 v672 = (i8)(intptr_t)(ws+720);
	i8 v673 = *(i8*)(intptr_t)v672;
	i8 v674 = v673+(+4);
	*(i2*)(intptr_t)v674 = v671;

endsub:;
}

// FCBPos workspace at ws+656 length ws+12
void f45_FCBPos(i4* p675 /* pos */, i8 p676 /* fcb */) {
	*(i8*)(intptr_t)(ws+656) = p676; /*fcb */

	i8 v677 = (i8)(intptr_t)(ws+656);
	i8 v678 = *(i8*)(intptr_t)v677;
	i8 v679 = v678+(+8);
	i4 v680 = *(i4*)(intptr_t)v679;
	i1 v681 = (i1)+9;
	i4 v682 = ((i4)v680)<<v681;
	i8 v683 = (i8)(intptr_t)(ws+656);
	i8 v684 = *(i8*)(intptr_t)v683;
	i8 v685 = v684+(+4);
	i2 v686 = *(i2*)(intptr_t)v685;
	i4 v687 = v686;
	i4 v688 = v682|v687;
	i4 v689 = v688+(+1);
	i8 v690 = (i8)(intptr_t)(ws+664);
	*(i4*)(intptr_t)v690 = v689;

endsub:;
	*p675 = *(i4*)(intptr_t)(ws+664);
}
	void f37_fcb_i_blockout(i8 /* fcb */);

// FCBExt workspace at ws+656 length ws+16
void f46_FCBExt(i4* p691 /* len */, i8 p692 /* fcb */) {
	*(i8*)(intptr_t)(ws+656) = p692; /*fcb */

	i8 v693 = (i8)(intptr_t)(ws+656);
	i8 v694 = *(i8*)(intptr_t)v693;
	i8 v695 = (i8)(intptr_t)(f37_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v695)(v694);

	i8 v696 = (i8)(intptr_t)(ws+656);
	i8 v697 = *(i8*)(intptr_t)v696;
	i4 v698 = *(i4*)(intptr_t)v697;
	i8 v699 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v699 = v698;


	
*(i4*)(intptr_t)(ws+664) 
 = lseek( 
*(i4*)(intptr_t)(ws+668) 
, 0, SEEK_END); 



	i8 v700 = (i8)(intptr_t)(ws+664);
	i4 v701 = *(i4*)(intptr_t)v700;
	i4 v702 = v701+(+511);
	i4 v703 = v702&(-512);
	i8 v704 = (i8)(intptr_t)(ws+664);
	*(i4*)(intptr_t)v704 = v703;

endsub:;
	*p691 = *(i4*)(intptr_t)(ws+664);
}
	void f38_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+784 length ws+8
void f47_fcb_i_nextchar(i8 p705 /* fcb */) {
	*(i8*)(intptr_t)(ws+784) = p705; /*fcb */

	i8 v706 = (i8)(intptr_t)(ws+784);
	i8 v707 = *(i8*)(intptr_t)v706;
	i8 v708 = v707+(+4);
	i2 v709 = *(i2*)(intptr_t)v708;
	i2 v710 = v709+(+1);
	i8 v711 = (i8)(intptr_t)(ws+784);
	i8 v712 = *(i8*)(intptr_t)v711;
	i8 v713 = v712+(+4);
	*(i2*)(intptr_t)v713 = v710;

	i8 v714 = (i8)(intptr_t)(ws+784);
	i8 v715 = *(i8*)(intptr_t)v714;
	i8 v716 = v715+(+4);
	i2 v717 = *(i2*)(intptr_t)v716;
	i2 v718 = (i2)+512;
	if (v717==v718) goto c02_009b; else goto c02_009c;

c02_009b:;

	i8 v719 = (i8)(intptr_t)(ws+784);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = (i8)(intptr_t)(ws+784);
	i8 v722 = *(i8*)(intptr_t)v721;
	i8 v723 = v722+(+8);
	i4 v724 = *(i4*)(intptr_t)v723;
	i4 v725 = v724+(+1);
	i8 v726 = (i8)(intptr_t)(f38_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v726)(v725, v720);

	i2 v727 = (i2)+0;
	i8 v728 = (i8)(intptr_t)(ws+784);
	i8 v729 = *(i8*)(intptr_t)v728;
	i8 v730 = v729+(+4);
	*(i2*)(intptr_t)v730 = v727;

	goto c02_0098;

c02_009c:;

c02_0098:;

endsub:;
}
	void f47_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+768 length ws+9
void f48_FCBGetChar(i1* p731 /* c */, i8 p732 /* fcb */) {
	*(i8*)(intptr_t)(ws+768) = p732; /*fcb */

	i8 v733 = (i8)(intptr_t)(ws+768);
	i8 v734 = *(i8*)(intptr_t)v733;
	i8 v735 = (i8)(intptr_t)(f47_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v735)(v734);

	i8 v736 = (i8)(intptr_t)(ws+768);
	i8 v737 = *(i8*)(intptr_t)v736;
	i8 v738 = v737+(+12);
	i8 v739 = (i8)(intptr_t)(ws+768);
	i8 v740 = *(i8*)(intptr_t)v739;
	i8 v741 = v740+(+4);
	i2 v742 = *(i2*)(intptr_t)v741;
	i8 v743 = v742;
	i8 v744 = v738+v743;
	i1 v745 = *(i1*)(intptr_t)v744;
	i8 v746 = (i8)(intptr_t)(ws+776);
	*(i1*)(intptr_t)v746 = v745;

endsub:;
	*p731 = *(i1*)(intptr_t)(ws+776);
}
	void f47_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+760 length ws+9
void f49_FCBPutChar(i1 p747 /* c */, i8 p748 /* fcb */) {
	*(i8*)(intptr_t)(ws+760) = p748; /*fcb */
	*(i1*)(intptr_t)(ws+768) = p747; /*c */

	i8 v749 = (i8)(intptr_t)(ws+760);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = (i8)(intptr_t)(f47_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v751)(v750);

	i8 v752 = (i8)(intptr_t)(ws+768);
	i1 v753 = *(i1*)(intptr_t)v752;
	i8 v754 = (i8)(intptr_t)(ws+760);
	i8 v755 = *(i8*)(intptr_t)v754;
	i8 v756 = v755+(+12);
	i8 v757 = (i8)(intptr_t)(ws+760);
	i8 v758 = *(i8*)(intptr_t)v757;
	i8 v759 = v758+(+4);
	i2 v760 = *(i2*)(intptr_t)v759;
	i8 v761 = v760;
	i8 v762 = v756+v761;
	*(i1*)(intptr_t)v762 = v753;

	i1 v763 = (i1)+1;
	i8 v764 = (i8)(intptr_t)(ws+760);
	i8 v765 = *(i8*)(intptr_t)v764;
	i8 v766 = v765+(+6);
	*(i1*)(intptr_t)v766 = v763;

endsub:;
}
const i1 c02_s0000[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);

// StartError workspace at ws+728 length ws+0
void f53_StartError(void) {

	i8 v831 = (i8)(intptr_t)c02_s0000;
	i8 v832 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v832)(v831);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+728 length ws+0
void f54_EndError(void) {

	i8 v833 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v833)();

	i8 v834 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v834)();

endsub:;
}
	void f53_StartError(void);
	void f11_print(i8 /* ptr */);
	void f54_EndError(void);

// SimpleError workspace at ws+656 length ws+8
void f55_SimpleError(i8 p835 /* s */) {
	*(i8*)(intptr_t)(ws+656) = p835; /*s */

	i8 v836 = (i8)(intptr_t)(f53_StartError);

	((void(*)(void))(intptr_t)v836)();

	i8 v837 = (i8)(intptr_t)(ws+656);
	i8 v838 = *(i8*)(intptr_t)v837;
	i8 v839 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v839)(v838);

	i8 v840 = (i8)(intptr_t)(f54_EndError);

	((void(*)(void))(intptr_t)v840)();

endsub:;
}
	void f53_StartError(void);
const i1 c02_s0001[] = { 0x75,0x6e,0x61,0x62,0x6c,0x65,0x20,0x74,0x6f,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0002[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f54_EndError(void);

// CannotOpen workspace at ws+720 length ws+8
void f56_CannotOpen(i8 p841 /* filename */) {
	*(i8*)(intptr_t)(ws+720) = p841; /*filename */

	i8 v842 = (i8)(intptr_t)(f53_StartError);

	((void(*)(void))(intptr_t)v842)();

	i8 v843 = (i8)(intptr_t)c02_s0001;
	i8 v844 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v844)(v843);

	i8 v845 = (i8)(intptr_t)(ws+720);
	i8 v846 = *(i8*)(intptr_t)v845;
	i8 v847 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v847)(v846);

	i8 v848 = (i8)(intptr_t)c02_s0002;
	i8 v849 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v849)(v848);

	i8 v850 = (i8)(intptr_t)(f54_EndError);

	((void(*)(void))(intptr_t)v850)();

endsub:;
}
	void f49_FCBPutChar(i1 /* c */, i8 /* fcb */);

// E_b8 workspace at ws+752 length ws+1
void f57_E_b8(i1 p851 /* c */) {
	*(i1*)(intptr_t)(ws+752) = p851; /*c */

	i8 v852 = (i8)(intptr_t)(ws+44);
	i8 v853 = (i8)(intptr_t)(ws+752);
	i1 v854 = *(i1*)(intptr_t)v853;
	i8 v855 = (i8)(intptr_t)(f49_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v855)(v854, v852);

endsub:;
}
	void f57_E_b8(i1 /* c */);

// E workspace at ws+736 length ws+9
void f58_E(i8 p856 /* text */) {
	*(i8*)(intptr_t)(ws+736) = p856; /*text */

c02_00b0:;

	i8 v857 = (i8)(intptr_t)(ws+736);
	i8 v858 = *(i8*)(intptr_t)v857;
	i1 v859 = *(i1*)(intptr_t)v858;
	i8 v860 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v860 = v859;

	i8 v861 = (i8)(intptr_t)(ws+736);
	i8 v862 = *(i8*)(intptr_t)v861;
	i8 v863 = v862+(+1);
	i8 v864 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v864 = v863;

	i8 v865 = (i8)(intptr_t)(ws+744);
	i1 v866 = *(i1*)(intptr_t)v865;
	i1 v867 = (i1)+0;
	if (v866==v867) goto c02_00b5; else goto c02_00b6;

c02_00b5:;

	goto c02_00b1;

c02_00b6:;

c02_00b2:;

	i8 v868 = (i8)(intptr_t)(ws+744);
	i1 v869 = *(i1*)(intptr_t)v868;
	i8 v870 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v870)(v869);

	goto c02_00b0;

c02_00b1:;

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f57_E_b8(i1 /* c */);

// E_u32 workspace at ws+712 length ws+33
void f59_E_u32(i4 p871 /* value */) {
	*(i4*)(intptr_t)(ws+712) = p871; /*value */

	i8 v872 = (i8)(intptr_t)(ws+716);
	i8 v873 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v873 = v872;

	i8 v874 = (i8)(intptr_t)(ws+712);
	i4 v875 = *(i4*)(intptr_t)v874;
	i1 v876 = (i1)+10;
	i8 v877 = (i8)(intptr_t)(ws+728);
	i8 v878 = *(i8*)(intptr_t)v877;
	i8 v879 = (i8)(intptr_t)(f13_UIToA);
	i8 v880;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v879)(&v880, v878, v876, v875);
	i8 v881 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v881 = v880;

c02_00b7:;

	i8 v882 = (i8)(intptr_t)(ws+728);
	i8 v883 = *(i8*)(intptr_t)v882;
	i1 v884 = *(i1*)(intptr_t)v883;
	i8 v885 = (i8)(intptr_t)(ws+744);
	*(i1*)(intptr_t)v885 = v884;

	i8 v886 = (i8)(intptr_t)(ws+744);
	i1 v887 = *(i1*)(intptr_t)v886;
	i1 v888 = (i1)+0;
	if (v887==v888) goto c02_00bc; else goto c02_00bd;

c02_00bc:;

	goto c02_00b8;

c02_00bd:;

c02_00b9:;

	i8 v889 = (i8)(intptr_t)(ws+744);
	i1 v890 = *(i1*)(intptr_t)v889;
	i8 v891 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v891)(v890);

	i8 v892 = (i8)(intptr_t)(ws+728);
	i8 v893 = *(i8*)(intptr_t)v892;
	i8 v894 = v893+(+1);
	i8 v895 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v895 = v894;

	goto c02_00b7;

c02_00b8:;

endsub:;
}
	void f59_E_u32(i4 /* value */);

// E_u16 workspace at ws+704 length ws+2
void f60_E_u16(i2 p896 /* value */) {
	*(i2*)(intptr_t)(ws+704) = p896; /*value */

	i8 v897 = (i8)(intptr_t)(ws+704);
	i2 v898 = *(i2*)(intptr_t)v897;
	i4 v899 = v898;
	i8 v900 = (i8)(intptr_t)(f59_E_u32);

	((void(*)(i4 /* value */))(intptr_t)v900)(v899);

endsub:;
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f57_E_b8(i1 /* c */);
	void f58_E(i8 /* text */);

// E_h workspace at ws+704 length ws+25
void f63_E_h(i1 p921 /* width */, i4 p922 /* value */) {
	*(i4*)(intptr_t)(ws+704) = p922; /*value */
	*(i1*)(intptr_t)(ws+708) = p921; /*width */

	i8 v923 = (i8)(intptr_t)(ws+704);
	i4 v924 = *(i4*)(intptr_t)v923;
	i1 v925 = (i1)+16;
	i8 v926 = (i8)(intptr_t)(ws+709);
	i8 v927 = (i8)(intptr_t)(f13_UIToA);
	i8 v928;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v927)(&v928, v926, v925, v924);
	i8 v929 = (i8)(intptr_t)(ws+720);
	*(i8*)(intptr_t)v929 = v928;

	i8 v930 = (i8)(intptr_t)(ws+708);
	i1 v931 = *(i1*)(intptr_t)v930;
	i8 v932 = (i8)(intptr_t)(ws+720);
	i8 v933 = *(i8*)(intptr_t)v932;
	i8 v934 = (i8)(intptr_t)(ws+709);
	i8 v935 = v933-v934;
	i1 v936 = v935;
	i1 v937 = v931-v936;
	i8 v938 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v938 = v937;

c02_00c5:;

	i8 v939 = (i8)(intptr_t)(ws+728);
	i1 v940 = *(i1*)(intptr_t)v939;
	i1 v941 = (i1)+0;
	if (v940==v941) goto c02_00c8; else goto c02_00c7;

c02_00c7:;

	i1 v942 = (i1)+48;
	i8 v943 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v943)(v942);

	i8 v944 = (i8)(intptr_t)(ws+728);
	i1 v945 = *(i1*)(intptr_t)v944;
	i1 v946 = v945+(-1);
	i8 v947 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v947 = v946;

	goto c02_00c5;

c02_00c8:;

	i8 v948 = (i8)(intptr_t)(ws+709);
	i8 v949 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v949)(v948);

endsub:;
}
	void f63_E_h(i1 /* width */, i4 /* value */);

// E_h8 workspace at ws+696 length ws+1
void f64_E_h8(i1 p950 /* value */) {
	*(i1*)(intptr_t)(ws+696) = p950; /*value */

	i8 v951 = (i8)(intptr_t)(ws+696);
	i1 v952 = *(i1*)(intptr_t)v951;
	i4 v953 = v952;
	i1 v954 = (i1)+2;
	i8 v955 = (i8)(intptr_t)(f63_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v955)(v954, v953);

endsub:;
}
	void f63_E_h(i1 /* width */, i4 /* value */);

// E_h16 workspace at ws+640 length ws+2
void f65_E_h16(i2 p956 /* value */) {
	*(i2*)(intptr_t)(ws+640) = p956; /*value */

	i8 v957 = (i8)(intptr_t)(ws+640);
	i2 v958 = *(i2*)(intptr_t)v957;
	i4 v959 = v958;
	i1 v960 = (i1)+4;
	i8 v961 = (i8)(intptr_t)(f63_E_h);

	((void(*)(i1 /* width */, i4 /* value */))(intptr_t)v961)(v960, v959);

endsub:;
}
	void f42_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s0003[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f55_SimpleError(i8 /* s */);

// EmitterOpenfile workspace at ws+632 length ws+8
void f66_EmitterOpenfile(i8 p962 /* filename */) {
	*(i8*)(intptr_t)(ws+632) = p962; /*filename */

	i8 v963 = (i8)(intptr_t)(ws+44);
	i8 v964 = (i8)(intptr_t)(ws+632);
	i8 v965 = *(i8*)(intptr_t)v964;
	i8 v966 = (i8)(intptr_t)(f42_FCBOpenOut);
	i1 v967;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v966)(&v967, v965, v963);
	i1 v968 = (i1)+0;
	if (v967==v968) goto c02_00cd; else goto c02_00cc;

c02_00cc:;

	i8 v969 = (i8)(intptr_t)c02_s0003;
	i8 v970 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v970)(v969);

	goto c02_00c9;

c02_00cd:;

c02_00c9:;

endsub:;
}
	void f43_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s0004[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f55_SimpleError(i8 /* s */);

// EmitterClosefile workspace at ws+632 length ws+0
void f67_EmitterClosefile(void) {

	i8 v971 = (i8)(intptr_t)(ws+44);
	i8 v972 = (i8)(intptr_t)(f43_FCBClose);
	i1 v973;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v972)(&v973, v971);
	i1 v974 = (i1)+0;
	if (v973==v974) goto c02_00d2; else goto c02_00d1;

c02_00d1:;

	i8 v975 = (i8)(intptr_t)c02_s0004;
	i8 v976 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v976)(v975);

	goto c02_00ce;

c02_00d2:;

c02_00ce:;

endsub:;
}

// ArchAlignUp workspace at ws+3088 length ws+8
void f68_ArchAlignUp(i2* p977 /* newvalue */, i1 p978 /* alignment */, i2 p979 /* value */) {
	*(i2*)(intptr_t)(ws+3088) = p979; /*value */
	*(i1*)(intptr_t)(ws+3090) = p978; /*alignment */

	i8 v980 = (i8)(intptr_t)(ws+3090);
	i1 v981 = *(i1*)(intptr_t)v980;
	i1 v982 = v981+(-1);
	i2 v983 = v982;
	i8 v984 = (i8)(intptr_t)(ws+3094);
	*(i2*)(intptr_t)v984 = v983;

	i8 v985 = (i8)(intptr_t)(ws+3088);
	i2 v986 = *(i2*)(intptr_t)v985;
	i8 v987 = (i8)(intptr_t)(ws+3094);
	i2 v988 = *(i2*)(intptr_t)v987;
	i2 v989 = v986+v988;
	i8 v990 = (i8)(intptr_t)(ws+3094);
	i2 v991 = *(i2*)(intptr_t)v990;
	i2 v992 = ~v991;
	i2 v993 = v989&v992;
	i8 v994 = (i8)(intptr_t)(ws+3092);
	*(i2*)(intptr_t)v994 = v993;

endsub:;
	*p977 = *(i2*)(intptr_t)(ws+3092);
}
	void f57_E_b8(i1 /* c */);
	void f60_E_u16(i2 /* value */);
	void f57_E_b8(i1 /* c */);
	void f58_E(i8 /* text */);

// ArchEmitSubRef workspace at ws+696 length ws+8
void f70_ArchEmitSubRef(i8 p997 /* subr */) {
	*(i8*)(intptr_t)(ws+696) = p997; /*subr */

	i1 v998 = (i1)+102;
	i8 v999 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v999)(v998);

	i8 v1000 = (i8)(intptr_t)(ws+696);
	i8 v1001 = *(i8*)(intptr_t)v1000;
	i8 v1002 = v1001+(+186);
	i2 v1003 = *(i2*)(intptr_t)v1002;
	i8 v1004 = (i8)(intptr_t)(f60_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1004)(v1003);

	i1 v1005 = (i1)+95;
	i8 v1006 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1006)(v1005);

	i8 v1007 = (i8)(intptr_t)(ws+696);
	i8 v1008 = *(i8*)(intptr_t)v1007;
	i8 v1009 = v1008+(+152);
	i8 v1010 = *(i8*)(intptr_t)v1009;
	i8 v1011 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1011)(v1010);

endsub:;
}
const i1 c02_s0005[] = { 0x77,0x73,0x2b,0 };
	void f58_E(i8 /* text */);
	void f60_E_u16(i2 /* value */);

// ArchEmitWSRef workspace at ws+696 length ws+4
void f71_ArchEmitWSRef(i2 p1012 /* address */, i1 p1013 /* wid */) {
	*(i1*)(intptr_t)(ws+696) = p1013; /*wid */
	*(i2*)(intptr_t)(ws+698) = p1012; /*address */

	i8 v1014 = (i8)(intptr_t)c02_s0005;
	i8 v1015 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1015)(v1014);

	i8 v1016 = (i8)(intptr_t)(ws+698);
	i2 v1017 = *(i2*)(intptr_t)v1016;
	i8 v1018 = (i8)(intptr_t)(f60_E_u16);

	((void(*)(i2 /* value */))(intptr_t)v1018)(v1017);

endsub:;
}
const i1 c02_s0006[] = { 0x23,0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x22,0x63,0x6f,0x77,0x67,0x6f,0x6c,0x2e,0x68,0x22,0x0a,0 };
	void f58_E(i8 /* text */);
const i1 c02_s0007[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x38,0x20,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x5b,0x30,0x78,0 };
	void f58_E(i8 /* text */);
	void f65_E_h16(i2 /* value */);
const i1 c02_s0008[] = { 0x5d,0x3b,0x0a,0 };
	void f58_E(i8 /* text */);
const i1 c02_s0009[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x31,0x2a,0x20,0x77,0x73,0x20,0x3d,0x20,0x28,0x69,0x31,0x2a,0x29,0x77,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x3b,0x0a,0 };
	void f58_E(i8 /* text */);

// ArchEmitHeader workspace at ws+632 length ws+8
void f72_ArchEmitHeader(i8 p1019 /* coo */) {
	*(i8*)(intptr_t)(ws+632) = p1019; /*coo */

	i8 v1020 = (i8)(intptr_t)c02_s0006;
	i8 v1021 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1021)(v1020);

	i8 v1022 = (i8)(intptr_t)c02_s0007;
	i8 v1023 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1023)(v1022);

	i8 v1024 = (i8)(intptr_t)(ws+568);
	i2 v1025 = *(i2*)(intptr_t)v1024;
	i2 v1026 = v1025+(+7);
	i1 v1027 = (i1)+3;
	i2 v1028 = ((i2)v1026)>>v1027;
	i8 v1029 = (i8)(intptr_t)(f65_E_h16);

	((void(*)(i2 /* value */))(intptr_t)v1029)(v1028);

	i8 v1030 = (i8)(intptr_t)c02_s0008;
	i8 v1031 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1031)(v1030);

	i8 v1032 = (i8)(intptr_t)c02_s0009;
	i8 v1033 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1033)(v1032);

endsub:;
}
const i1 c02_s000a[] = { 0x76,0x6f,0x69,0x64,0x20,0x63,0x6d,0x61,0x69,0x6e,0x28,0x76,0x6f,0x69,0x64,0x29,0x20,0x7b,0x0a,0 };
	void f58_E(i8 /* text */);
	void f57_E_b8(i1 /* c */);
	void f70_ArchEmitSubRef(i8 /* subr */);
const i1 c02_s000b[] = { 0x28,0x29,0x3b,0x0a,0 };
	void f58_E(i8 /* text */);
const i1 c02_s000c[] = { 0x7d,0x0a,0 };
	void f58_E(i8 /* text */);
	void f46_FCBExt(i4* /* len */, i8 /* fcb */);
	void f45_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f57_E_b8(i1 /* c */);

// ArchEmitFooter workspace at ws+632 length ws+20
void f73_ArchEmitFooter(i8 p1034 /* coo */) {
	*(i8*)(intptr_t)(ws+632) = p1034; /*coo */

	i8 v1035 = (i8)(intptr_t)c02_s000a;
	i8 v1036 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1036)(v1035);

c02_00d5:;

	i8 v1037 = (i8)(intptr_t)(ws+632);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = (i8)+0;
	if (v1038==v1039) goto c02_00d8; else goto c02_00d7;

c02_00d7:;

	i8 v1040 = (i8)(intptr_t)(ws+632);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = v1041+(+536);
	i8 v1043 = *(i8*)(intptr_t)v1042;
	i8 v1044 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v1044 = v1043;

	i8 v1045 = (i8)(intptr_t)(ws+640);
	i8 v1046 = *(i8*)(intptr_t)v1045;
	i8 v1047 = (i8)+0;
	if (v1046==v1047) goto c02_00dd; else goto c02_00dc;

c02_00dc:;

	i1 v1048 = (i1)+9;
	i8 v1049 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1049)(v1048);

	i8 v1050 = (i8)(intptr_t)(ws+640);
	i8 v1051 = *(i8*)(intptr_t)v1050;
	i8 v1052 = (i8)(intptr_t)(f70_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1052)(v1051);

	i8 v1053 = (i8)(intptr_t)c02_s000b;
	i8 v1054 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1054)(v1053);

	goto c02_00d9;

c02_00dd:;

c02_00d9:;

	i8 v1055 = (i8)(intptr_t)(ws+632);
	i8 v1056 = *(i8*)(intptr_t)v1055;
	i8 v1057 = v1056+(+664);
	i8 v1058 = *(i8*)(intptr_t)v1057;
	i8 v1059 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1059 = v1058;

	goto c02_00d5;

c02_00d8:;

	i8 v1060 = (i8)(intptr_t)c02_s000c;
	i8 v1061 = (i8)(intptr_t)(f58_E);

	((void(*)(i8 /* text */))(intptr_t)v1061)(v1060);

	i8 v1062 = (i8)(intptr_t)(ws+44);
	i8 v1063 = (i8)(intptr_t)(f46_FCBExt);
	i4 v1064;

	((void(*)(i4* /* len */, i8 /* fcb */))(intptr_t)v1063)(&v1064, v1062);
	i8 v1065 = (i8)(intptr_t)(ws+44);
	i8 v1066 = (i8)(intptr_t)(f45_FCBPos);
	i4 v1067;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v1066)(&v1067, v1065);
	i4 v1068 = v1064-v1067;
	i8 v1069 = (i8)(intptr_t)(ws+648);
	*(i4*)(intptr_t)v1069 = v1068;

c02_00e0:;

	i8 v1070 = (i8)(intptr_t)(ws+648);
	i4 v1071 = *(i4*)(intptr_t)v1070;
	i4 v1072 = (i4)+0;
	if (v1071==v1072) goto c02_00e3; else goto c02_00e2;

c02_00e2:;

	i1 v1073 = (i1)+32;
	i8 v1074 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1074)(v1073);

	i8 v1075 = (i8)(intptr_t)(ws+648);
	i4 v1076 = *(i4*)(intptr_t)v1075;
	i4 v1077 = v1076+(-1);
	i8 v1078 = (i8)(intptr_t)(ws+648);
	*(i4*)(intptr_t)v1078 = v1077;

	goto c02_00e0;

c02_00e3:;

endsub:;
}
	void f48_FCBGetChar(i1* /* c */, i8 /* fcb */);

// read_bin1 workspace at ws+752 length ws+9
void f74_read_bin1(i1* p1081 /* c */, i8 p1082 /* fcb */) {
	*(i8*)(intptr_t)(ws+752) = p1082; /*fcb */

	i8 v1083 = (i8)(intptr_t)(ws+752);
	i8 v1084 = *(i8*)(intptr_t)v1083;
	i8 v1085 = (i8)(intptr_t)(f48_FCBGetChar);
	i1 v1086;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1085)(&v1086, v1084);
	i8 v1087 = (i8)(intptr_t)(ws+760);
	*(i1*)(intptr_t)v1087 = v1086;

endsub:;
	*p1081 = *(i1*)(intptr_t)(ws+760);
}
	void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	void f74_read_bin1(i1* /* c */, i8 /* fcb */);

// read_bin2 workspace at ws+720 length ws+10
void f75_read_bin2(i2* p1088 /* val */, i8 p1089 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1089; /*fcb */

	i8 v1090 = (i8)(intptr_t)(ws+720);
	i8 v1091 = *(i8*)(intptr_t)v1090;
	i8 v1092 = (i8)(intptr_t)(f74_read_bin1);
	i1 v1093;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1092)(&v1093, v1091);
	i2 v1094 = v1093;
	i8 v1095 = (i8)(intptr_t)(ws+728);
	*(i2*)(intptr_t)v1095 = v1094;

	i8 v1096 = (i8)(intptr_t)(ws+728);
	i2 v1097 = *(i2*)(intptr_t)v1096;
	i8 v1098 = (i8)(intptr_t)(ws+720);
	i8 v1099 = *(i8*)(intptr_t)v1098;
	i8 v1100 = (i8)(intptr_t)(f74_read_bin1);
	i1 v1101;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1100)(&v1101, v1099);
	i2 v1102 = v1101;
	i1 v1103 = (i1)+8;
	i2 v1104 = ((i2)v1102)<<v1103;
	i2 v1105 = v1097|v1104;
	i8 v1106 = (i8)(intptr_t)(ws+728);
	*(i2*)(intptr_t)v1106 = v1105;

endsub:;
	*p1088 = *(i2*)(intptr_t)(ws+728);
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f74_read_bin1(i1* /* c */, i8 /* fcb */);

// read_string workspace at ws+720 length ws+32
void f76_read_string(i8* p1107 /* ptr */, i1 p1108 /* len */, i8 p1109 /* fcb */) {
	*(i8*)(intptr_t)(ws+720) = p1109; /*fcb */
	*(i1*)(intptr_t)(ws+728) = p1108; /*len */

	i8 v1110 = (i8)(intptr_t)(ws+728);
	i1 v1111 = *(i1*)(intptr_t)v1110;
	i1 v1112 = v1111+(+1);
	i8 v1113 = v1112;
	i8 v1114 = (i8)(intptr_t)(f31_Alloc);
	i8 v1115;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1114)(&v1115, v1113);
	i8 v1116 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1116 = v1115;

	i8 v1117 = (i8)(intptr_t)(ws+736);
	i8 v1118 = *(i8*)(intptr_t)v1117;
	i8 v1119 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1119 = v1118;

c02_00e4:;

	i8 v1120 = (i8)(intptr_t)(ws+728);
	i1 v1121 = *(i1*)(intptr_t)v1120;
	i1 v1122 = (i1)+0;
	if (v1121==v1122) goto c02_00e9; else goto c02_00ea;

c02_00e9:;

	goto c02_00e5;

c02_00ea:;

c02_00e6:;

	i8 v1123 = (i8)(intptr_t)(ws+720);
	i8 v1124 = *(i8*)(intptr_t)v1123;
	i8 v1125 = (i8)(intptr_t)(f74_read_bin1);
	i1 v1126;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1125)(&v1126, v1124);
	i8 v1127 = (i8)(intptr_t)(ws+744);
	i8 v1128 = *(i8*)(intptr_t)v1127;
	*(i1*)(intptr_t)v1128 = v1126;

	i8 v1129 = (i8)(intptr_t)(ws+744);
	i8 v1130 = *(i8*)(intptr_t)v1129;
	i8 v1131 = v1130+(+1);
	i8 v1132 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1132 = v1131;

	i8 v1133 = (i8)(intptr_t)(ws+728);
	i1 v1134 = *(i1*)(intptr_t)v1133;
	i1 v1135 = v1134+(-1);
	i8 v1136 = (i8)(intptr_t)(ws+728);
	*(i1*)(intptr_t)v1136 = v1135;

	goto c02_00e4;

c02_00e5:;

endsub:;
	*p1107 = *(i8*)(intptr_t)(ws+736);
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// AddRef workspace at ws+720 length ws+32
void f77_AddRef(i8 p1137 /* calls */, i8 p1138 /* subr */) {
	*(i8*)(intptr_t)(ws+720) = p1138; /*subr */
	*(i8*)(intptr_t)(ws+728) = p1137; /*calls */

	i8 v1139 = (i8)(intptr_t)(ws+720);
	i8 v1140 = *(i8*)(intptr_t)v1139;
	i8 v1141 = v1140+(+184);
	i2 v1142 = *(i2*)(intptr_t)v1141;
	i8 v1143 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1143 = v1142;

	i8 v1144 = (i8)(intptr_t)(ws+736);
	i2 v1145 = *(i2*)(intptr_t)v1144;
	i2 v1146 = v1145+(+1);
	i8 v1147 = (i8)(intptr_t)(ws+720);
	i8 v1148 = *(i8*)(intptr_t)v1147;
	i8 v1149 = v1148+(+184);
	*(i2*)(intptr_t)v1149 = v1146;

	i8 v1150 = (i8)(intptr_t)(ws+720);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = v1151+(+16);
	i8 v1153 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1153 = v1152;

c02_00ed:;

	i8 v1154 = (i8)(intptr_t)(ws+736);
	i2 v1155 = *(i2*)(intptr_t)v1154;
	i2 v1156 = (i2)+16;
	if (v1155<v1156) goto c02_00f0; else goto c02_00ef;

c02_00ef:;

	i8 v1157 = (i8)(intptr_t)(ws+744);
	i8 v1158 = *(i8*)(intptr_t)v1157;
	i8 v1159 = *(i8*)(intptr_t)v1158;
	i8 v1160 = (i8)+0;
	if (v1159==v1160) goto c02_00f4; else goto c02_00f5;

c02_00f4:;

	i8 v1161 = (i8)+136;
	i8 v1162 = (i8)(intptr_t)(f31_Alloc);
	i8 v1163;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1162)(&v1163, v1161);
	i8 v1164 = (i8)(intptr_t)(ws+744);
	i8 v1165 = *(i8*)(intptr_t)v1164;
	*(i8*)(intptr_t)v1165 = v1163;

	goto c02_00f1;

c02_00f5:;

c02_00f1:;

	i8 v1166 = (i8)(intptr_t)(ws+744);
	i8 v1167 = *(i8*)(intptr_t)v1166;
	i8 v1168 = *(i8*)(intptr_t)v1167;
	i8 v1169 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1169 = v1168;

	i8 v1170 = (i8)(intptr_t)(ws+736);
	i2 v1171 = *(i2*)(intptr_t)v1170;
	i2 v1172 = v1171+(-16);
	i8 v1173 = (i8)(intptr_t)(ws+736);
	*(i2*)(intptr_t)v1173 = v1172;

	goto c02_00ed;

c02_00f0:;

	i8 v1174 = (i8)(intptr_t)(ws+728);
	i8 v1175 = *(i8*)(intptr_t)v1174;
	i8 v1176 = (i8)(intptr_t)(ws+744);
	i8 v1177 = *(i8*)(intptr_t)v1176;
	i8 v1178 = v1177+(+8);
	i8 v1179 = (i8)(intptr_t)(ws+736);
	i2 v1180 = *(i2*)(intptr_t)v1179;
	i1 v1181 = v1180;
	i8 v1182 = v1181;
	i1 v1183 = (i1)+3;
	i8 v1184 = ((i8)v1182)<<v1183;
	i8 v1185 = v1178+v1184;
	*(i8*)(intptr_t)v1185 = v1175;

endsub:;
}
	void f31_Alloc(i8* /* block */, i8 /* length */);

// FindSub workspace at ws+752 length ws+32
void f78_FindSub(i8* p1186 /* ptr */, i2 p1187 /* id */, i8 p1188 /* coo */) {
	*(i8*)(intptr_t)(ws+752) = p1188; /*coo */
	*(i2*)(intptr_t)(ws+760) = p1187; /*id */

	i8 v1189 = (i8)(intptr_t)(ws+752);
	i8 v1190 = *(i8*)(intptr_t)v1189;
	i8 v1191 = v1190+(+528);
	i8 v1192 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1192 = v1191;

c02_00f8:;

	i8 v1193 = (i8)(intptr_t)(ws+760);
	i2 v1194 = *(i2*)(intptr_t)v1193;
	i2 v1195 = (i2)+16;
	if (v1194<v1195) goto c02_00fb; else goto c02_00fa;

c02_00fa:;

	i8 v1196 = (i8)(intptr_t)(ws+776);
	i8 v1197 = *(i8*)(intptr_t)v1196;
	i8 v1198 = *(i8*)(intptr_t)v1197;
	i8 v1199 = (i8)+0;
	if (v1198==v1199) goto c02_00ff; else goto c02_0100;

c02_00ff:;

	i8 v1200 = (i8)+136;
	i8 v1201 = (i8)(intptr_t)(f31_Alloc);
	i8 v1202;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1201)(&v1202, v1200);
	i8 v1203 = (i8)(intptr_t)(ws+776);
	i8 v1204 = *(i8*)(intptr_t)v1203;
	*(i8*)(intptr_t)v1204 = v1202;

	goto c02_00fc;

c02_0100:;

c02_00fc:;

	i8 v1205 = (i8)(intptr_t)(ws+776);
	i8 v1206 = *(i8*)(intptr_t)v1205;
	i8 v1207 = *(i8*)(intptr_t)v1206;
	i8 v1208 = (i8)(intptr_t)(ws+776);
	*(i8*)(intptr_t)v1208 = v1207;

	i8 v1209 = (i8)(intptr_t)(ws+760);
	i2 v1210 = *(i2*)(intptr_t)v1209;
	i2 v1211 = v1210+(-16);
	i8 v1212 = (i8)(intptr_t)(ws+760);
	*(i2*)(intptr_t)v1212 = v1211;

	goto c02_00f8;

c02_00fb:;

	i8 v1213 = (i8)(intptr_t)(ws+776);
	i8 v1214 = *(i8*)(intptr_t)v1213;
	i8 v1215 = v1214+(+8);
	i8 v1216 = (i8)(intptr_t)(ws+760);
	i2 v1217 = *(i2*)(intptr_t)v1216;
	i1 v1218 = v1217;
	i8 v1219 = v1218;
	i1 v1220 = (i1)+3;
	i8 v1221 = ((i8)v1219)<<v1220;
	i8 v1222 = v1215+v1221;
	i8 v1223 = (i8)(intptr_t)(ws+768);
	*(i8*)(intptr_t)v1223 = v1222;

endsub:;
	*p1186 = *(i8*)(intptr_t)(ws+768);
}
	void f78_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f31_Alloc(i8* /* block */, i8 /* length */);

// FindOrCreateSub workspace at ws+720 length ws+32
void f79_FindOrCreateSub(i8* p1224 /* subroutine */, i2 p1225 /* id */, i8 p1226 /* coo */) {
	*(i8*)(intptr_t)(ws+720) = p1226; /*coo */
	*(i2*)(intptr_t)(ws+728) = p1225; /*id */

	i8 v1227 = (i8)(intptr_t)(ws+720);
	i8 v1228 = *(i8*)(intptr_t)v1227;
	i8 v1229 = (i8)(intptr_t)(ws+728);
	i2 v1230 = *(i2*)(intptr_t)v1229;
	i8 v1231 = (i8)(intptr_t)(f78_FindSub);
	i8 v1232;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v1231)(&v1232, v1230, v1228);
	i8 v1233 = (i8)(intptr_t)(ws+744);
	*(i8*)(intptr_t)v1233 = v1232;

	i8 v1234 = (i8)(intptr_t)(ws+744);
	i8 v1235 = *(i8*)(intptr_t)v1234;
	i8 v1236 = *(i8*)(intptr_t)v1235;
	i8 v1237 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1237 = v1236;

	i8 v1238 = (i8)(intptr_t)(ws+736);
	i8 v1239 = *(i8*)(intptr_t)v1238;
	i8 v1240 = (i8)+0;
	if (v1239==v1240) goto c02_0104; else goto c02_0105;

c02_0104:;

	i8 v1241 = (i8)+189;
	i8 v1242 = (i8)(intptr_t)(f31_Alloc);
	i8 v1243;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1242)(&v1243, v1241);
	i8 v1244 = (i8)(intptr_t)(ws+736);
	*(i8*)(intptr_t)v1244 = v1243;

	i8 v1245 = (i8)(intptr_t)(ws+720);
	i8 v1246 = *(i8*)(intptr_t)v1245;
	i8 v1247 = (i8)(intptr_t)(ws+736);
	i8 v1248 = *(i8*)(intptr_t)v1247;
	*(i8*)(intptr_t)v1248 = v1246;

	i8 v1249 = (i8)(intptr_t)(ws+32);
	i8 v1250 = *(i8*)(intptr_t)v1249;
	i8 v1251 = (i8)(intptr_t)(ws+736);
	i8 v1252 = *(i8*)(intptr_t)v1251;
	i8 v1253 = v1252+(+8);
	*(i8*)(intptr_t)v1253 = v1250;

	i8 v1254 = (i8)(intptr_t)(ws+736);
	i8 v1255 = *(i8*)(intptr_t)v1254;
	i8 v1256 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v1256 = v1255;

	i8 v1257 = (i8)(intptr_t)(ws+40);
	i2 v1258 = *(i2*)(intptr_t)v1257;
	i8 v1259 = (i8)(intptr_t)(ws+736);
	i8 v1260 = *(i8*)(intptr_t)v1259;
	i8 v1261 = v1260+(+186);
	*(i2*)(intptr_t)v1261 = v1258;

	i8 v1262 = (i8)(intptr_t)(ws+736);
	i8 v1263 = *(i8*)(intptr_t)v1262;
	i8 v1264 = (i8)(intptr_t)(ws+744);
	i8 v1265 = *(i8*)(intptr_t)v1264;
	*(i8*)(intptr_t)v1265 = v1263;

	i8 v1266 = (i8)(intptr_t)(ws+40);
	i2 v1267 = *(i2*)(intptr_t)v1266;
	i2 v1268 = v1267+(+1);
	i8 v1269 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1269 = v1268;

	goto c02_0101;

c02_0105:;

c02_0101:;

endsub:;
	*p1224 = *(i8*)(intptr_t)(ws+736);
}

// Deref workspace at ws+3088 length ws+24
void f80_Deref(i8* p1270 /* subout */, i8 p1271 /* subin */) {
	*(i8*)(intptr_t)(ws+3088) = p1271; /*subin */

	i8 v1272 = (i8)(intptr_t)(ws+3088);
	i8 v1273 = *(i8*)(intptr_t)v1272;
	i8 v1274 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v1274 = v1273;

	i8 v1275 = (i8)(intptr_t)(ws+3088);
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = (i8)+0;
	if (v1276==v1277) goto c02_010a; else goto c02_0109;

c02_0109:;

	i8 v1278 = (i8)(intptr_t)(ws+3088);
	i8 v1279 = *(i8*)(intptr_t)v1278;
	i8 v1280 = v1279+(+160);
	i8 v1281 = *(i8*)(intptr_t)v1280;
	i8 v1282 = (i8)(intptr_t)(ws+3104);
	*(i8*)(intptr_t)v1282 = v1281;

	i8 v1283 = (i8)(intptr_t)(ws+3104);
	i8 v1284 = *(i8*)(intptr_t)v1283;
	i8 v1285 = (i8)+0;
	if (v1284==v1285) goto c02_010f; else goto c02_010e;

c02_010e:;

	i8 v1286 = (i8)(intptr_t)(ws+3104);
	i8 v1287 = *(i8*)(intptr_t)v1286;
	i8 v1288 = v1287+(+16);
	i8 v1289 = *(i8*)(intptr_t)v1288;
	i8 v1290 = (i8)(intptr_t)(ws+3096);
	*(i8*)(intptr_t)v1290 = v1289;

	goto c02_010b;

c02_010f:;

c02_010b:;

	goto c02_0106;

c02_010a:;

c02_0106:;

endsub:;
	*p1270 = *(i8*)(intptr_t)(ws+3096);
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f33_StrDup(i8* /* sout */, i8 /* s */);

// FindOrCreateExternal workspace at ws+720 length ws+16
void f81_FindOrCreateExternal(i8* p1291 /* external */, i8 p1292 /* name */) {
	*(i8*)(intptr_t)(ws+720) = p1292; /*name */

	i8 v1293 = (i8)(intptr_t)(ws+24);
	i8 v1294 = *(i8*)(intptr_t)v1293;
	i8 v1295 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1295 = v1294;

c02_0112:;

	i8 v1296 = (i8)(intptr_t)(ws+728);
	i8 v1297 = *(i8*)(intptr_t)v1296;
	i8 v1298 = (i8)+0;
	if (v1297==v1298) goto c02_0115; else goto c02_0114;

c02_0114:;

	i8 v1299 = (i8)(intptr_t)(ws+728);
	i8 v1300 = *(i8*)(intptr_t)v1299;
	i8 v1301 = v1300+(+8);
	i8 v1302 = *(i8*)(intptr_t)v1301;
	i8 v1303 = (i8)(intptr_t)(ws+720);
	i8 v1304 = *(i8*)(intptr_t)v1303;
	i8 v1305 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1306;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1305)(&v1306, v1304, v1302);
	i1 v1307 = (i1)+0;
	if (v1306==v1307) goto c02_0119; else goto c02_011a;

c02_0119:;

	goto endsub;

c02_011a:;

c02_0116:;

	i8 v1308 = (i8)(intptr_t)(ws+728);
	i8 v1309 = *(i8*)(intptr_t)v1308;
	i8 v1310 = *(i8*)(intptr_t)v1309;
	i8 v1311 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1311 = v1310;

	goto c02_0112;

c02_0115:;

	i8 v1312 = (i8)+24;
	i8 v1313 = (i8)(intptr_t)(f31_Alloc);
	i8 v1314;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1313)(&v1314, v1312);
	i8 v1315 = (i8)(intptr_t)(ws+728);
	*(i8*)(intptr_t)v1315 = v1314;

	i8 v1316 = (i8)(intptr_t)(ws+24);
	i8 v1317 = *(i8*)(intptr_t)v1316;
	i8 v1318 = (i8)(intptr_t)(ws+728);
	i8 v1319 = *(i8*)(intptr_t)v1318;
	*(i8*)(intptr_t)v1319 = v1317;

	i8 v1320 = (i8)(intptr_t)(ws+720);
	i8 v1321 = *(i8*)(intptr_t)v1320;
	i8 v1322 = (i8)(intptr_t)(f33_StrDup);
	i8 v1323;

	((void(*)(i8* /* sout */, i8 /* s */))(intptr_t)v1322)(&v1323, v1321);
	i8 v1324 = (i8)(intptr_t)(ws+728);
	i8 v1325 = *(i8*)(intptr_t)v1324;
	i8 v1326 = v1325+(+8);
	*(i8*)(intptr_t)v1326 = v1323;

	i8 v1327 = (i8)(intptr_t)(ws+728);
	i8 v1328 = *(i8*)(intptr_t)v1327;
	i8 v1329 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v1329 = v1328;

endsub:;
	*p1291 = *(i8*)(intptr_t)(ws+728);
}
	void f31_Alloc(i8* /* block */, i8 /* length */);
	void f40_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f56_CannotOpen(i8 /* filename */);
	void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f77_AddRef(i8 /* calls */, i8 /* subr */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f74_read_bin1(i1* /* c */, i8 /* fcb */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f76_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f76_read_string(i8* /* ptr */, i1 /* len */, i8 /* fcb */);
	void f81_FindOrCreateExternal(i8* /* external */, i8 /* name */);
	void f53_StartError(void);
const i1 c02_s000d[] = { 0x6d,0x75,0x6c,0x74,0x69,0x70,0x6c,0x65,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x64,0x65,0x63,0x6c,0x61,0x72,0x61,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6f,0x66,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s000e[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f54_EndError(void);
const i1 c02_s000f[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x75,0x6e,0x73,0x75,0x70,0x70,0x6f,0x72,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f8_print_char(i1 /* c */);
const i1 c02_s0010[] = { 0x27,0x20,0x69,0x6e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0011[] = { 0x20,0x61,0x74,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// OpenAndLoadCoo workspace at ws+656 length ws+64
void f82_OpenAndLoadCoo(i8* p1330 /* coo */, i8 p1331 /* filename */) {
	*(i8*)(intptr_t)(ws+656) = p1331; /*filename */

	i8 v1332 = (i8)+674;
	i8 v1333 = (i8)(intptr_t)(f31_Alloc);
	i8 v1334;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1333)(&v1334, v1332);
	i8 v1335 = (i8)(intptr_t)(ws+664);
	*(i8*)(intptr_t)v1335 = v1334;

	i8 v1336 = (i8)(intptr_t)(ws+40);
	i2 v1337 = *(i2*)(intptr_t)v1336;
	i8 v1338 = (i8)(intptr_t)(ws+664);
	i8 v1339 = *(i8*)(intptr_t)v1338;
	i8 v1340 = v1339+(+672);
	*(i2*)(intptr_t)v1340 = v1337;

	i8 v1341 = (i8)(intptr_t)(ws+40);
	i2 v1342 = *(i2*)(intptr_t)v1341;
	i2 v1343 = v1342+(+1);
	i8 v1344 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v1344 = v1343;

	i8 v1345 = (i8)(intptr_t)(ws+664);
	i8 v1346 = *(i8*)(intptr_t)v1345;
	i8 v1347 = (i8)(intptr_t)(ws+656);
	i8 v1348 = *(i8*)(intptr_t)v1347;
	i8 v1349 = (i8)(intptr_t)(f40_FCBOpenIn);
	i1 v1350;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1349)(&v1350, v1348, v1346);
	i1 v1351 = (i1)+0;
	if (v1350==v1351) goto c02_011f; else goto c02_011e;

c02_011e:;

	i8 v1352 = (i8)(intptr_t)(ws+656);
	i8 v1353 = *(i8*)(intptr_t)v1352;
	i8 v1354 = (i8)(intptr_t)(f56_CannotOpen);

	((void(*)(i8 /* filename */))(intptr_t)v1354)(v1353);

	goto c02_011b;

c02_011f:;

c02_011b:;

	i4 v1355 = (i4)+0;
	i8 v1356 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1356 = v1355;

c02_0120:;

	i8 v1357 = (i8)(intptr_t)(ws+664);
	i8 v1358 = *(i8*)(intptr_t)v1357;
	i8 v1359 = (i8)(intptr_t)(ws+676);
	i4 v1360 = *(i4*)(intptr_t)v1359;
	i8 v1361 = (i8)(intptr_t)(f44_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1361)(v1360, v1358);

	i8 v1362 = (i8)(intptr_t)(ws+664);
	i8 v1363 = *(i8*)(intptr_t)v1362;
	i8 v1364 = (i8)(intptr_t)(f74_read_bin1);
	i1 v1365;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1364)(&v1365, v1363);
	i8 v1366 = (i8)(intptr_t)(ws+680);
	*(i1*)(intptr_t)v1366 = v1365;

	i8 v1367 = (i8)(intptr_t)(ws+664);
	i8 v1368 = *(i8*)(intptr_t)v1367;
	i8 v1369 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1370;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1369)(&v1370, v1368);
	i8 v1371 = (i8)(intptr_t)(ws+682);
	*(i2*)(intptr_t)v1371 = v1370;

	i8 v1372 = (i8)(intptr_t)(ws+680);
	i1 v1373 = *(i1*)(intptr_t)v1372;
	i1 v1374 = (i1)+69;
	if (v1373==v1374) goto c02_0125; else goto c02_0126;

c02_0125:;

	goto c02_0121;

c02_0126:;

	i8 v1375 = (i8)(intptr_t)(ws+680);
	i1 v1376 = *(i1*)(intptr_t)v1375;
	i1 v1377 = (i1)+83;
	if (v1376==v1377) goto c02_0129; else goto c02_012a;

c02_0129:;

	i8 v1378 = (i8)(intptr_t)(ws+664);
	i8 v1379 = *(i8*)(intptr_t)v1378;
	i8 v1380 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1381;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1380)(&v1381, v1379);
	i8 v1382 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1382 = v1381;

	i8 v1383 = (i8)(intptr_t)(ws+664);
	i8 v1384 = *(i8*)(intptr_t)v1383;
	i8 v1385 = (i8)(intptr_t)(ws+672);
	i2 v1386 = *(i2*)(intptr_t)v1385;
	i8 v1387 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1388;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1387)(&v1388, v1386, v1384);
	i8 v1389 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1389 = v1388;

	i8 v1390 = (i8)(intptr_t)(ws+688);
	i8 v1391 = *(i8*)(intptr_t)v1390;
	i8 v1392 = v1391+(+188);
	i1 v1393 = *(i1*)(intptr_t)v1392;
	i1 v1394 = v1393|(+2);
	i8 v1395 = (i8)(intptr_t)(ws+688);
	i8 v1396 = *(i8*)(intptr_t)v1395;
	i8 v1397 = v1396+(+188);
	*(i1*)(intptr_t)v1397 = v1394;

	goto c02_0122;

c02_012a:;

	i8 v1398 = (i8)(intptr_t)(ws+680);
	i1 v1399 = *(i1*)(intptr_t)v1398;
	i1 v1400 = (i1)+82;
	if (v1399==v1400) goto c02_012d; else goto c02_012e;

c02_012d:;

	i8 v1401 = (i8)(intptr_t)(ws+664);
	i8 v1402 = *(i8*)(intptr_t)v1401;
	i8 v1403 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1404;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1403)(&v1404, v1402);
	i8 v1405 = (i8)(intptr_t)(ws+696);
	*(i2*)(intptr_t)v1405 = v1404;

	i8 v1406 = (i8)(intptr_t)(ws+664);
	i8 v1407 = *(i8*)(intptr_t)v1406;
	i8 v1408 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1409;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1408)(&v1409, v1407);
	i8 v1410 = (i8)(intptr_t)(ws+698);
	*(i2*)(intptr_t)v1410 = v1409;

	i8 v1411 = (i8)(intptr_t)(ws+664);
	i8 v1412 = *(i8*)(intptr_t)v1411;
	i8 v1413 = (i8)(intptr_t)(ws+696);
	i2 v1414 = *(i2*)(intptr_t)v1413;
	i8 v1415 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1416;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1415)(&v1416, v1414, v1412);
	i8 v1417 = (i8)(intptr_t)(ws+664);
	i8 v1418 = *(i8*)(intptr_t)v1417;
	i8 v1419 = (i8)(intptr_t)(ws+698);
	i2 v1420 = *(i2*)(intptr_t)v1419;
	i8 v1421 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1422;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1421)(&v1422, v1420, v1418);
	i8 v1423 = (i8)(intptr_t)(f77_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v1423)(v1422, v1416);

	goto c02_0122;

c02_012e:;

	i8 v1424 = (i8)(intptr_t)(ws+680);
	i1 v1425 = *(i1*)(intptr_t)v1424;
	i1 v1426 = (i1)+87;
	if (v1425==v1426) goto c02_0131; else goto c02_0132;

c02_0131:;

	i8 v1427 = (i8)(intptr_t)(ws+664);
	i8 v1428 = *(i8*)(intptr_t)v1427;
	i8 v1429 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1430;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1429)(&v1430, v1428);
	i8 v1431 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1431 = v1430;

	i8 v1432 = (i8)(intptr_t)(ws+664);
	i8 v1433 = *(i8*)(intptr_t)v1432;
	i8 v1434 = (i8)(intptr_t)(ws+672);
	i2 v1435 = *(i2*)(intptr_t)v1434;
	i8 v1436 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1437;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1436)(&v1437, v1435, v1433);
	i8 v1438 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1438 = v1437;

	i8 v1439 = (i8)(intptr_t)(ws+664);
	i8 v1440 = *(i8*)(intptr_t)v1439;
	i8 v1441 = (i8)(intptr_t)(f74_read_bin1);
	i1 v1442;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1441)(&v1442, v1440);
	i8 v1443 = (i8)(intptr_t)(ws+700);
	*(i1*)(intptr_t)v1443 = v1442;

	i8 v1444 = (i8)(intptr_t)(ws+664);
	i8 v1445 = *(i8*)(intptr_t)v1444;
	i8 v1446 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1447;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1446)(&v1447, v1445);
	i8 v1448 = (i8)(intptr_t)(ws+688);
	i8 v1449 = *(i8*)(intptr_t)v1448;
	i8 v1450 = v1449+(+168);
	i8 v1451 = (i8)(intptr_t)(ws+700);
	i1 v1452 = *(i1*)(intptr_t)v1451;
	i8 v1453 = v1452;
	i1 v1454 = (i1)+1;
	i8 v1455 = ((i8)v1453)<<v1454;
	i8 v1456 = v1450+v1455;
	*(i2*)(intptr_t)v1456 = v1447;

	goto c02_0122;

c02_0132:;

	i8 v1457 = (i8)(intptr_t)(ws+680);
	i1 v1458 = *(i1*)(intptr_t)v1457;
	i1 v1459 = (i1)+78;
	if (v1458==v1459) goto c02_0135; else goto c02_0136;

c02_0135:;

	i8 v1460 = (i8)(intptr_t)(ws+664);
	i8 v1461 = *(i8*)(intptr_t)v1460;
	i8 v1462 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1463;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1462)(&v1463, v1461);
	i8 v1464 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1464 = v1463;

	i8 v1465 = (i8)(intptr_t)(ws+664);
	i8 v1466 = *(i8*)(intptr_t)v1465;
	i8 v1467 = (i8)(intptr_t)(ws+672);
	i2 v1468 = *(i2*)(intptr_t)v1467;
	i8 v1469 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1470;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1469)(&v1470, v1468, v1466);
	i8 v1471 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1471 = v1470;

	i8 v1472 = (i8)(intptr_t)(ws+664);
	i8 v1473 = *(i8*)(intptr_t)v1472;
	i8 v1474 = (i8)(intptr_t)(ws+682);
	i2 v1475 = *(i2*)(intptr_t)v1474;
	i1 v1476 = v1475;
	i1 v1477 = v1476+(-2);
	i8 v1478 = (i8)(intptr_t)(f76_read_string);
	i8 v1479;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1478)(&v1479, v1477, v1473);
	i8 v1480 = (i8)(intptr_t)(ws+688);
	i8 v1481 = *(i8*)(intptr_t)v1480;
	i8 v1482 = v1481+(+152);
	*(i8*)(intptr_t)v1482 = v1479;

	goto c02_0122;

c02_0136:;

	i8 v1483 = (i8)(intptr_t)(ws+680);
	i1 v1484 = *(i1*)(intptr_t)v1483;
	i1 v1485 = (i1)+88;
	if (v1484==v1485) goto c02_0139; else goto c02_013a;

c02_0139:;

	i8 v1486 = (i8)(intptr_t)(ws+664);
	i8 v1487 = *(i8*)(intptr_t)v1486;
	i8 v1488 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1489;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1488)(&v1489, v1487);
	i8 v1490 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1490 = v1489;

	i8 v1491 = (i8)(intptr_t)(ws+664);
	i8 v1492 = *(i8*)(intptr_t)v1491;
	i8 v1493 = (i8)(intptr_t)(ws+672);
	i2 v1494 = *(i2*)(intptr_t)v1493;
	i8 v1495 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1496;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1495)(&v1496, v1494, v1492);
	i8 v1497 = (i8)(intptr_t)(ws+688);
	*(i8*)(intptr_t)v1497 = v1496;

	i8 v1498 = (i8)(intptr_t)(ws+664);
	i8 v1499 = *(i8*)(intptr_t)v1498;
	i8 v1500 = (i8)(intptr_t)(ws+682);
	i2 v1501 = *(i2*)(intptr_t)v1500;
	i1 v1502 = v1501;
	i1 v1503 = v1502+(-2);
	i8 v1504 = (i8)(intptr_t)(f76_read_string);
	i8 v1505;

	((void(*)(i8* /* ptr */, i1 /* len */, i8 /* fcb */))(intptr_t)v1504)(&v1505, v1503, v1499);
	i8 v1506 = (i8)(intptr_t)(ws+704);
	*(i8*)(intptr_t)v1506 = v1505;

	i8 v1507 = (i8)(intptr_t)(ws+704);
	i8 v1508 = *(i8*)(intptr_t)v1507;
	i8 v1509 = (i8)(intptr_t)(f81_FindOrCreateExternal);
	i8 v1510;

	((void(*)(i8* /* external */, i8 /* name */))(intptr_t)v1509)(&v1510, v1508);
	i8 v1511 = (i8)(intptr_t)(ws+712);
	*(i8*)(intptr_t)v1511 = v1510;

	i8 v1512 = (i8)(intptr_t)(ws+688);
	i8 v1513 = *(i8*)(intptr_t)v1512;
	i8 v1514 = v1513+(+160);
	i8 v1515 = *(i8*)(intptr_t)v1514;
	i8 v1516 = (i8)+0;
	if (v1515==v1516) goto c02_013f; else goto c02_013e;

c02_013e:;

	i8 v1517 = (i8)(intptr_t)(f53_StartError);

	((void(*)(void))(intptr_t)v1517)();

	i8 v1518 = (i8)(intptr_t)c02_s000d;
	i8 v1519 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1519)(v1518);

	i8 v1520 = (i8)(intptr_t)(ws+704);
	i8 v1521 = *(i8*)(intptr_t)v1520;
	i8 v1522 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1522)(v1521);

	i8 v1523 = (i8)(intptr_t)c02_s000e;
	i8 v1524 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1524)(v1523);

	i8 v1525 = (i8)(intptr_t)(f54_EndError);

	((void(*)(void))(intptr_t)v1525)();

	goto c02_013b;

c02_013f:;

c02_013b:;

	i8 v1526 = (i8)(intptr_t)(ws+712);
	i8 v1527 = *(i8*)(intptr_t)v1526;
	i8 v1528 = (i8)(intptr_t)(ws+688);
	i8 v1529 = *(i8*)(intptr_t)v1528;
	i8 v1530 = v1529+(+160);
	*(i8*)(intptr_t)v1530 = v1527;

	goto c02_0122;

c02_013a:;

	i8 v1531 = (i8)(intptr_t)c02_s000f;
	i8 v1532 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1532)(v1531);

	i8 v1533 = (i8)(intptr_t)(ws+680);
	i1 v1534 = *(i1*)(intptr_t)v1533;
	i8 v1535 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v1535)(v1534);

	i8 v1536 = (i8)(intptr_t)c02_s0010;
	i8 v1537 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1537)(v1536);

	i8 v1538 = (i8)(intptr_t)(ws+656);
	i8 v1539 = *(i8*)(intptr_t)v1538;
	i8 v1540 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1540)(v1539);

	i8 v1541 = (i8)(intptr_t)c02_s0011;
	i8 v1542 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1542)(v1541);

	i8 v1543 = (i8)(intptr_t)(ws+676);
	i4 v1544 = *(i4*)(intptr_t)v1543;
	i8 v1545 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v1545)(v1544);

	i8 v1546 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1546)();

	i8 v1547 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1547)();

c02_0122:;

	i8 v1548 = (i8)(intptr_t)(ws+676);
	i4 v1549 = *(i4*)(intptr_t)v1548;
	i8 v1550 = (i8)(intptr_t)(ws+682);
	i2 v1551 = *(i2*)(intptr_t)v1550;
	i4 v1552 = v1551;
	i4 v1553 = v1549+v1552;
	i4 v1554 = v1553+(+3);
	i8 v1555 = (i8)(intptr_t)(ws+676);
	*(i4*)(intptr_t)v1555 = v1554;

	goto c02_0120;

c02_0121:;

endsub:;
	*p1330 = *(i8*)(intptr_t)(ws+664);
}
const i1 c02_s0012[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// MalformedError workspace at ws+704 length ws+8
void f84_MalformedError(i8 p1557 /* s */) {
	*(i8*)(intptr_t)(ws+704) = p1557; /*s */

	i8 v1558 = (i8)(intptr_t)c02_s0012;
	i8 v1559 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1559)(v1558);

	i8 v1560 = (i8)(intptr_t)(ws+704);
	i8 v1561 = *(i8*)(intptr_t)v1560;
	i8 v1562 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1562)(v1561);

	i8 v1563 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1563)();

	i8 v1564 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1564)();

endsub:;
}
const i1 c02_s0013[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0x65,0x6e,0x64,0x20,0x6f,0x66,0x20,0x63,0x68,0x75,0x6e,0x6b,0 };
	void f84_MalformedError(i8 /* s */);

// UnexpectedEndOfChunk workspace at ws+704 length ws+0
void f85_UnexpectedEndOfChunk(void) {

	i8 v1565 = (i8)(intptr_t)c02_s0013;
	i8 v1566 = (i8)(intptr_t)(f84_MalformedError);

	((void(*)(i8 /* s */))(intptr_t)v1566)(v1565);

endsub:;
}
	void f85_UnexpectedEndOfChunk(void);
	void f74_read_bin1(i1* /* c */, i8 /* fcb */);

// ReadB1 workspace at ws+696 length ws+1
void f86_ReadB1(i1* p1567 /* result */) {

	i8 v1568 = (i8)(intptr_t)(ws+666);
	i2 v1569 = *(i2*)(intptr_t)v1568;
	i2 v1570 = (i2)+1;
	if (v1569<v1570) goto c02_0143; else goto c02_0144;

c02_0143:;

	i8 v1571 = (i8)(intptr_t)(f85_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v1571)();

	goto c02_0140;

c02_0144:;

c02_0140:;

	i8 v1572 = (i8)(intptr_t)(ws+666);
	i2 v1573 = *(i2*)(intptr_t)v1572;
	i2 v1574 = v1573+(-1);
	i8 v1575 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1575 = v1574;

	i8 v1576 = (i8)(intptr_t)(ws+640);
	i8 v1577 = *(i8*)(intptr_t)v1576;
	i8 v1578 = (i8)(intptr_t)(f74_read_bin1);
	i1 v1579;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1578)(&v1579, v1577);
	i8 v1580 = (i8)(intptr_t)(ws+696);
	*(i1*)(intptr_t)v1580 = v1579;

endsub:;
	*p1567 = *(i1*)(intptr_t)(ws+696);
}
	void f85_UnexpectedEndOfChunk(void);
	void f75_read_bin2(i2* /* val */, i8 /* fcb */);

// ReadB2 workspace at ws+696 length ws+2
void f87_ReadB2(i2* p1581 /* result */) {

	i8 v1582 = (i8)(intptr_t)(ws+666);
	i2 v1583 = *(i2*)(intptr_t)v1582;
	i2 v1584 = (i2)+2;
	if (v1583<v1584) goto c02_0148; else goto c02_0149;

c02_0148:;

	i8 v1585 = (i8)(intptr_t)(f85_UnexpectedEndOfChunk);

	((void(*)(void))(intptr_t)v1585)();

	goto c02_0145;

c02_0149:;

c02_0145:;

	i8 v1586 = (i8)(intptr_t)(ws+666);
	i2 v1587 = *(i2*)(intptr_t)v1586;
	i2 v1588 = v1587+(-2);
	i8 v1589 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1589 = v1588;

	i8 v1590 = (i8)(intptr_t)(ws+640);
	i8 v1591 = *(i8*)(intptr_t)v1590;
	i8 v1592 = (i8)(intptr_t)(f75_read_bin2);
	i2 v1593;

	((void(*)(i2* /* val */, i8 /* fcb */))(intptr_t)v1592)(&v1593, v1591);
	i8 v1594 = (i8)(intptr_t)(ws+696);
	*(i2*)(intptr_t)v1594 = v1593;

endsub:;
	*p1581 = *(i2*)(intptr_t)(ws+696);
}
	void f53_StartError(void);
const i1 c02_s0014[] = { 0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x74,0x6f,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0015[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0016[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0017[] = { 0x77,0x68,0x69,0x63,0x68,0x20,0x69,0x73,0x20,0x61,0x6e,0x6f,0x6e,0x79,0x6d,0x6f,0x75,0x73,0 };
	void f11_print(i8 /* ptr */);
	void f54_EndError(void);

// CheckSubExists workspace at ws+696 length ws+8
void f88_CheckSubExists(i8 p1595 /* subr */) {
	*(i8*)(intptr_t)(ws+696) = p1595; /*subr */

	i8 v1596 = (i8)(intptr_t)(ws+696);
	i8 v1597 = *(i8*)(intptr_t)v1596;
	i8 v1598 = v1597+(+188);
	i1 v1599 = *(i1*)(intptr_t)v1598;
	i1 v1600 = v1599&(+2);
	i1 v1601 = (i1)+0;
	if (v1600==v1601) goto c02_014d; else goto c02_014e;

c02_014d:;

	i8 v1602 = (i8)(intptr_t)(f53_StartError);

	((void(*)(void))(intptr_t)v1602)();

	i8 v1603 = (i8)(intptr_t)c02_s0014;
	i8 v1604 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1604)(v1603);

	i8 v1605 = (i8)(intptr_t)(ws+696);
	i8 v1606 = *(i8*)(intptr_t)v1605;
	i8 v1607 = v1606+(+152);
	i8 v1608 = *(i8*)(intptr_t)v1607;
	i8 v1609 = (i8)+0;
	if (v1608==v1609) goto c02_0153; else goto c02_0152;

c02_0152:;

	i8 v1610 = (i8)(intptr_t)c02_s0015;
	i8 v1611 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1611)(v1610);

	i8 v1612 = (i8)(intptr_t)(ws+696);
	i8 v1613 = *(i8*)(intptr_t)v1612;
	i8 v1614 = v1613+(+152);
	i8 v1615 = *(i8*)(intptr_t)v1614;
	i8 v1616 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1616)(v1615);

	i8 v1617 = (i8)(intptr_t)c02_s0016;
	i8 v1618 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1618)(v1617);

	goto c02_014f;

c02_0153:;

	i8 v1619 = (i8)(intptr_t)c02_s0017;
	i8 v1620 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1620)(v1619);

c02_014f:;

	i8 v1621 = (i8)(intptr_t)(f54_EndError);

	((void(*)(void))(intptr_t)v1621)();

	goto c02_014a;

c02_014e:;

c02_014a:;

endsub:;
}
	void f86_ReadB1(i1* /* result */);
	void f57_E_b8(i1 /* c */);
	void f64_E_h8(i1 /* value */);
	void f57_E_b8(i1 /* c */);
	void f70_ArchEmitSubRef(i8 /* subr */);
	void f87_ReadB2(i2* /* result */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f80_Deref(i8* /* subout */, i8 /* subin */);
	void f88_CheckSubExists(i8 /* subr */);
	void f70_ArchEmitSubRef(i8 /* subr */);
	void f87_ReadB2(i2* /* result */);
	void f86_ReadB1(i1* /* result */);
	void f87_ReadB2(i2* /* result */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f80_Deref(i8* /* subout */, i8 /* subin */);
	void f88_CheckSubExists(i8 /* subr */);
	void f71_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	void f87_ReadB2(i2* /* result */);
	void f86_ReadB1(i1* /* result */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f80_Deref(i8* /* subout */, i8 /* subin */);
	void f88_CheckSubExists(i8 /* subr */);
	void f71_ArchEmitWSRef(i2 /* address */, i1 /* wid */);
	void f57_E_b8(i1 /* c */);

// CopySourceChunk workspace at ws+672 length ws+20
void f89_CopySourceChunk(void) {

c02_0156:;

	i8 v1622 = (i8)(intptr_t)(ws+666);
	i2 v1623 = *(i2*)(intptr_t)v1622;
	i2 v1624 = (i2)+0;
	if (v1623==v1624) goto c02_0159; else goto c02_0158;

c02_0158:;

	i8 v1625 = (i8)(intptr_t)(f86_ReadB1);
	i1 v1626;

	((void(*)(i1* /* result */))(intptr_t)v1625)(&v1626);
	i8 v1627 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v1627 = v1626;

	i8 v1628 = (i8)(intptr_t)(ws+664);
	i1 v1629 = *(i1*)(intptr_t)v1628;

	if (v1629 != +3) goto c02_015b;

	i1 v1630 = (i1)+99;
	i8 v1631 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1631)(v1630);

	i8 v1632 = (i8)(intptr_t)(ws+640);
	i8 v1633 = *(i8*)(intptr_t)v1632;
	i8 v1634 = v1633+(+672);
	i2 v1635 = *(i2*)(intptr_t)v1634;
	i1 v1636 = v1635;
	i8 v1637 = (i8)(intptr_t)(f64_E_h8);

	((void(*)(i1 /* value */))(intptr_t)v1637)(v1636);

	i1 v1638 = (i1)+95;
	i8 v1639 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1639)(v1638);

	goto c02_015a;

c02_015b:;

	if (v1629 != +4) goto c02_015c;

	i8 v1640 = (i8)(intptr_t)(ws+656);
	i8 v1641 = *(i8*)(intptr_t)v1640;
	i8 v1642 = (i8)(intptr_t)(f70_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1642)(v1641);

	goto c02_015a;

c02_015c:;

	if (v1629 != +1) goto c02_015d;

	i8 v1643 = (i8)(intptr_t)(f87_ReadB2);
	i2 v1644;

	((void(*)(i2* /* result */))(intptr_t)v1643)(&v1644);
	i8 v1645 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1645 = v1644;

	i8 v1646 = (i8)(intptr_t)(ws+640);
	i8 v1647 = *(i8*)(intptr_t)v1646;
	i8 v1648 = (i8)(intptr_t)(ws+672);
	i2 v1649 = *(i2*)(intptr_t)v1648;
	i8 v1650 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1651;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1650)(&v1651, v1649, v1647);
	i8 v1652 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1652 = v1651;

	i8 v1653 = (i8)(intptr_t)(ws+680);
	i8 v1654 = *(i8*)(intptr_t)v1653;
	i8 v1655 = (i8)(intptr_t)(f80_Deref);
	i8 v1656;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1655)(&v1656, v1654);
	i8 v1657 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1657 = v1656;

	i8 v1658 = (i8)(intptr_t)(ws+680);
	i8 v1659 = *(i8*)(intptr_t)v1658;
	i8 v1660 = (i8)(intptr_t)(f88_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1660)(v1659);

	i8 v1661 = (i8)(intptr_t)(ws+680);
	i8 v1662 = *(i8*)(intptr_t)v1661;
	i8 v1663 = (i8)(intptr_t)(f70_ArchEmitSubRef);

	((void(*)(i8 /* subr */))(intptr_t)v1663)(v1662);

	goto c02_015a;

c02_015d:;

	if (v1629 != +2) goto c02_015e;

	i8 v1664 = (i8)(intptr_t)(f87_ReadB2);
	i2 v1665;

	((void(*)(i2* /* result */))(intptr_t)v1664)(&v1665);
	i8 v1666 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1666 = v1665;

	i8 v1667 = (i8)(intptr_t)(f86_ReadB1);
	i1 v1668;

	((void(*)(i1* /* result */))(intptr_t)v1667)(&v1668);
	i8 v1669 = (i8)(intptr_t)(ws+688);
	*(i1*)(intptr_t)v1669 = v1668;

	i8 v1670 = (i8)(intptr_t)(f87_ReadB2);
	i2 v1671;

	((void(*)(i2* /* result */))(intptr_t)v1670)(&v1671);
	i8 v1672 = (i8)(intptr_t)(ws+690);
	*(i2*)(intptr_t)v1672 = v1671;

	i8 v1673 = (i8)(intptr_t)(ws+640);
	i8 v1674 = *(i8*)(intptr_t)v1673;
	i8 v1675 = (i8)(intptr_t)(ws+672);
	i2 v1676 = *(i2*)(intptr_t)v1675;
	i8 v1677 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1678;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1677)(&v1678, v1676, v1674);
	i8 v1679 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1679 = v1678;

	i8 v1680 = (i8)(intptr_t)(ws+680);
	i8 v1681 = *(i8*)(intptr_t)v1680;
	i8 v1682 = (i8)(intptr_t)(f80_Deref);
	i8 v1683;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1682)(&v1683, v1681);
	i8 v1684 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1684 = v1683;

	i8 v1685 = (i8)(intptr_t)(ws+680);
	i8 v1686 = *(i8*)(intptr_t)v1685;
	i8 v1687 = (i8)(intptr_t)(f88_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1687)(v1686);

	i8 v1688 = (i8)(intptr_t)(ws+688);
	i1 v1689 = *(i1*)(intptr_t)v1688;
	i8 v1690 = (i8)(intptr_t)(ws+680);
	i8 v1691 = *(i8*)(intptr_t)v1690;
	i8 v1692 = v1691+(+176);
	i8 v1693 = (i8)(intptr_t)(ws+688);
	i1 v1694 = *(i1*)(intptr_t)v1693;
	i8 v1695 = v1694;
	i1 v1696 = (i1)+1;
	i8 v1697 = ((i8)v1695)<<v1696;
	i8 v1698 = v1692+v1697;
	i2 v1699 = *(i2*)(intptr_t)v1698;
	i8 v1700 = (i8)(intptr_t)(ws+690);
	i2 v1701 = *(i2*)(intptr_t)v1700;
	i2 v1702 = v1699+v1701;
	i8 v1703 = (i8)(intptr_t)(f71_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v1703)(v1702, v1689);

	goto c02_015a;

c02_015e:;

	if (v1629 != +5) goto c02_015f;

	i8 v1704 = (i8)(intptr_t)(f87_ReadB2);
	i2 v1705;

	((void(*)(i2* /* result */))(intptr_t)v1704)(&v1705);
	i8 v1706 = (i8)(intptr_t)(ws+672);
	*(i2*)(intptr_t)v1706 = v1705;

	i8 v1707 = (i8)(intptr_t)(f86_ReadB1);
	i1 v1708;

	((void(*)(i1* /* result */))(intptr_t)v1707)(&v1708);
	i8 v1709 = (i8)(intptr_t)(ws+688);
	*(i1*)(intptr_t)v1709 = v1708;

	i8 v1710 = (i8)(intptr_t)(ws+640);
	i8 v1711 = *(i8*)(intptr_t)v1710;
	i8 v1712 = (i8)(intptr_t)(ws+672);
	i2 v1713 = *(i2*)(intptr_t)v1712;
	i8 v1714 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1715;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1714)(&v1715, v1713, v1711);
	i8 v1716 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1716 = v1715;

	i8 v1717 = (i8)(intptr_t)(ws+680);
	i8 v1718 = *(i8*)(intptr_t)v1717;
	i8 v1719 = (i8)(intptr_t)(f80_Deref);
	i8 v1720;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1719)(&v1720, v1718);
	i8 v1721 = (i8)(intptr_t)(ws+680);
	*(i8*)(intptr_t)v1721 = v1720;

	i8 v1722 = (i8)(intptr_t)(ws+680);
	i8 v1723 = *(i8*)(intptr_t)v1722;
	i8 v1724 = (i8)(intptr_t)(f88_CheckSubExists);

	((void(*)(i8 /* subr */))(intptr_t)v1724)(v1723);

	i8 v1725 = (i8)(intptr_t)(ws+688);
	i1 v1726 = *(i1*)(intptr_t)v1725;
	i8 v1727 = (i8)(intptr_t)(ws+680);
	i8 v1728 = *(i8*)(intptr_t)v1727;
	i8 v1729 = v1728+(+168);
	i8 v1730 = (i8)(intptr_t)(ws+688);
	i1 v1731 = *(i1*)(intptr_t)v1730;
	i8 v1732 = v1731;
	i1 v1733 = (i1)+1;
	i8 v1734 = ((i8)v1732)<<v1733;
	i8 v1735 = v1729+v1734;
	i2 v1736 = *(i2*)(intptr_t)v1735;
	i8 v1737 = (i8)(intptr_t)(f71_ArchEmitWSRef);

	((void(*)(i2 /* address */, i1 /* wid */))(intptr_t)v1737)(v1736, v1726);

	goto c02_015a;

c02_015f:;

	i8 v1738 = (i8)(intptr_t)(ws+664);
	i1 v1739 = *(i1*)(intptr_t)v1738;
	i8 v1740 = (i8)(intptr_t)(f57_E_b8);

	((void(*)(i1 /* c */))(intptr_t)v1740)(v1739);

c02_015a:;


	goto c02_0156;

c02_0159:;

endsub:;
}
	void f44_FCBSeek(i4 /* pos */, i8 /* fcb */);
	void f86_ReadB1(i1* /* result */);
	void f87_ReadB2(i2* /* result */);
	void f87_ReadB2(i2* /* result */);
	void f79_FindOrCreateSub(i8* /* subroutine */, i2 /* id */, i8 /* coo */);
	void f80_Deref(i8* /* subout */, i8 /* subin */);
	void f89_CopySourceChunk(void);

// WriteSubroutinesToOutputFile workspace at ws+640 length ws+32
void f83_WriteSubroutinesToOutputFile(i8 p1556 /* coo */) {
	*(i8*)(intptr_t)(ws+640) = p1556; /*coo */







	i4 v1741 = (i4)+0;
	i8 v1742 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v1742 = v1741;

c02_0160:;

	i2 v1743 = (i2)+255;
	i8 v1744 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1744 = v1743;

	i8 v1745 = (i8)(intptr_t)(ws+640);
	i8 v1746 = *(i8*)(intptr_t)v1745;
	i8 v1747 = (i8)(intptr_t)(ws+668);
	i4 v1748 = *(i4*)(intptr_t)v1747;
	i8 v1749 = (i8)(intptr_t)(f44_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1749)(v1748, v1746);

	i8 v1750 = (i8)(intptr_t)(f86_ReadB1);
	i1 v1751;

	((void(*)(i1* /* result */))(intptr_t)v1750)(&v1751);
	i8 v1752 = (i8)(intptr_t)(ws+664);
	*(i1*)(intptr_t)v1752 = v1751;

	i8 v1753 = (i8)(intptr_t)(f87_ReadB2);
	i2 v1754;

	((void(*)(i2* /* result */))(intptr_t)v1753)(&v1754);
	i8 v1755 = (i8)(intptr_t)(ws+666);
	*(i2*)(intptr_t)v1755 = v1754;

	i8 v1756 = (i8)(intptr_t)(ws+668);
	i4 v1757 = *(i4*)(intptr_t)v1756;
	i8 v1758 = (i8)(intptr_t)(ws+666);
	i2 v1759 = *(i2*)(intptr_t)v1758;
	i4 v1760 = v1759;
	i4 v1761 = v1757+v1760;
	i4 v1762 = v1761+(+3);
	i8 v1763 = (i8)(intptr_t)(ws+668);
	*(i4*)(intptr_t)v1763 = v1762;

	i8 v1764 = (i8)(intptr_t)(ws+664);
	i1 v1765 = *(i1*)(intptr_t)v1764;
	i1 v1766 = (i1)+69;
	if (v1765==v1766) goto c02_0165; else goto c02_0166;

c02_0165:;

	goto c02_0161;

c02_0166:;

	i8 v1767 = (i8)(intptr_t)(ws+664);
	i1 v1768 = *(i1*)(intptr_t)v1767;
	i1 v1769 = (i1)+83;
	if (v1768==v1769) goto c02_0169; else goto c02_016a;

c02_0169:;

	i8 v1770 = (i8)(intptr_t)(f87_ReadB2);
	i2 v1771;

	((void(*)(i2* /* result */))(intptr_t)v1770)(&v1771);
	i8 v1772 = (i8)(intptr_t)(ws+648);
	*(i2*)(intptr_t)v1772 = v1771;

	i8 v1773 = (i8)(intptr_t)(ws+640);
	i8 v1774 = *(i8*)(intptr_t)v1773;
	i8 v1775 = (i8)(intptr_t)(ws+648);
	i2 v1776 = *(i2*)(intptr_t)v1775;
	i8 v1777 = (i8)(intptr_t)(f79_FindOrCreateSub);
	i8 v1778;

	((void(*)(i8* /* subroutine */, i2 /* id */, i8 /* coo */))(intptr_t)v1777)(&v1778, v1776, v1774);
	i8 v1779 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v1779 = v1778;

	i8 v1780 = (i8)(intptr_t)(ws+656);
	i8 v1781 = *(i8*)(intptr_t)v1780;
	i8 v1782 = (i8)(intptr_t)(f80_Deref);
	i8 v1783;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v1782)(&v1783, v1781);
	i8 v1784 = (i8)(intptr_t)(ws+656);
	*(i8*)(intptr_t)v1784 = v1783;

	i8 v1785 = (i8)(intptr_t)(ws+656);
	i8 v1786 = *(i8*)(intptr_t)v1785;
	i8 v1787 = v1786+(+188);
	i1 v1788 = *(i1*)(intptr_t)v1787;
	i1 v1789 = v1788&(+1);
	i1 v1790 = (i1)+0;
	if (v1789==v1790) goto c02_016f; else goto c02_016e;

c02_016e:;

	i8 v1791 = (i8)(intptr_t)(f89_CopySourceChunk);

	((void(*)(void))(intptr_t)v1791)();

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
	void f83_WriteSubroutinesToOutputFile(i8 /* coo */);

// WriteAllSubroutinesToOutputFile workspace at ws+632 length ws+8
void f90_WriteAllSubroutinesToOutputFile(i8 p1792 /* coos */) {
	*(i8*)(intptr_t)(ws+632) = p1792; /*coos */

c02_0172:;

	i8 v1793 = (i8)(intptr_t)(ws+632);
	i8 v1794 = *(i8*)(intptr_t)v1793;
	i8 v1795 = (i8)+0;
	if (v1794==v1795) goto c02_0175; else goto c02_0174;

c02_0174:;

	i8 v1796 = (i8)(intptr_t)(ws+632);
	i8 v1797 = *(i8*)(intptr_t)v1796;
	i8 v1798 = (i8)(intptr_t)(f83_WriteSubroutinesToOutputFile);

	((void(*)(i8 /* coo */))(intptr_t)v1798)(v1797);

	i8 v1799 = (i8)(intptr_t)(ws+632);
	i8 v1800 = *(i8*)(intptr_t)v1799;
	i8 v1801 = v1800+(+664);
	i8 v1802 = *(i8*)(intptr_t)v1801;
	i8 v1803 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1803 = v1802;

	goto c02_0172;

c02_0175:;

endsub:;
}
const i1 c02_s0018[] = { 0x63,0x6f,0x6e,0x66,0x6c,0x69,0x63,0x74,0x69,0x6e,0x67,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x73,0 };
	void f55_SimpleError(i8 /* s */);
const i1 c02_s0019[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x65,0x78,0x74,0x65,0x72,0x6e,0x61,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s001a[] = { 0x27,0x20,0x75,0x6e,0x72,0x65,0x73,0x6f,0x6c,0x76,0x65,0x64,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s001b[] = { 0x61,0x62,0x6f,0x72,0x74,0x69,0x6e,0x67,0 };
	void f55_SimpleError(i8 /* s */);

// ResolveExternals workspace at ws+632 length ws+24
void f91_ResolveExternals(void) {

	i1 v1804 = (i1)+0;
	i8 v1805 = (i8)(intptr_t)(ws+640);
	*(i1*)(intptr_t)v1805 = v1804;

	i8 v1806 = (i8)(intptr_t)(ws+32);
	i8 v1807 = *(i8*)(intptr_t)v1806;
	i8 v1808 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1808 = v1807;

c02_0178:;

	i8 v1809 = (i8)(intptr_t)(ws+648);
	i8 v1810 = *(i8*)(intptr_t)v1809;
	i8 v1811 = (i8)+0;
	if (v1810==v1811) goto c02_017b; else goto c02_017a;

c02_017a:;

	i8 v1812 = (i8)(intptr_t)(ws+648);
	i8 v1813 = *(i8*)(intptr_t)v1812;
	i8 v1814 = v1813+(+188);
	i1 v1815 = *(i1*)(intptr_t)v1814;
	i1 v1816 = v1815&(+2);
	i1 v1817 = (i1)+0;
	if (v1816==v1817) goto c02_0180; else goto c02_017f;

c02_017f:;

	i8 v1818 = (i8)(intptr_t)(ws+648);
	i8 v1819 = *(i8*)(intptr_t)v1818;
	i8 v1820 = v1819+(+160);
	i8 v1821 = *(i8*)(intptr_t)v1820;
	i8 v1822 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1822 = v1821;

	i8 v1823 = (i8)(intptr_t)(ws+632);
	i8 v1824 = *(i8*)(intptr_t)v1823;
	i8 v1825 = (i8)+0;
	if (v1824==v1825) goto c02_0185; else goto c02_0184;

c02_0184:;

	i8 v1826 = (i8)(intptr_t)(ws+632);
	i8 v1827 = *(i8*)(intptr_t)v1826;
	i8 v1828 = v1827+(+16);
	i8 v1829 = *(i8*)(intptr_t)v1828;
	i8 v1830 = (i8)+0;
	if (v1829==v1830) goto c02_018c; else goto c02_018d;

c02_018d:;

	i8 v1831 = (i8)(intptr_t)(ws+632);
	i8 v1832 = *(i8*)(intptr_t)v1831;
	i8 v1833 = v1832+(+16);
	i8 v1834 = *(i8*)(intptr_t)v1833;
	i8 v1835 = (i8)(intptr_t)(ws+648);
	i8 v1836 = *(i8*)(intptr_t)v1835;
	if (v1834==v1836) goto c02_018c; else goto c02_018b;

c02_018b:;

	i8 v1837 = (i8)(intptr_t)c02_s0018;
	i8 v1838 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1838)(v1837);

	goto c02_0186;

c02_018c:;

c02_0186:;

	i8 v1839 = (i8)(intptr_t)(ws+648);
	i8 v1840 = *(i8*)(intptr_t)v1839;
	i8 v1841 = (i8)(intptr_t)(ws+632);
	i8 v1842 = *(i8*)(intptr_t)v1841;
	i8 v1843 = v1842+(+16);
	*(i8*)(intptr_t)v1843 = v1840;

	goto c02_0181;

c02_0185:;

c02_0181:;

	goto c02_017c;

c02_0180:;

c02_017c:;

	i8 v1844 = (i8)(intptr_t)(ws+648);
	i8 v1845 = *(i8*)(intptr_t)v1844;
	i8 v1846 = v1845+(+8);
	i8 v1847 = *(i8*)(intptr_t)v1846;
	i8 v1848 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1848 = v1847;

	goto c02_0178;

c02_017b:;

	i8 v1849 = (i8)(intptr_t)(ws+32);
	i8 v1850 = *(i8*)(intptr_t)v1849;
	i8 v1851 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1851 = v1850;

c02_0190:;

	i8 v1852 = (i8)(intptr_t)(ws+648);
	i8 v1853 = *(i8*)(intptr_t)v1852;
	i8 v1854 = (i8)+0;
	if (v1853==v1854) goto c02_0193; else goto c02_0192;

c02_0192:;

	i8 v1855 = (i8)(intptr_t)(ws+648);
	i8 v1856 = *(i8*)(intptr_t)v1855;
	i8 v1857 = v1856+(+160);
	i8 v1858 = *(i8*)(intptr_t)v1857;
	i8 v1859 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1859 = v1858;

	i8 v1860 = (i8)(intptr_t)(ws+632);
	i8 v1861 = *(i8*)(intptr_t)v1860;
	i8 v1862 = (i8)+0;
	if (v1861==v1862) goto c02_019a; else goto c02_019b;

c02_019b:;

	i8 v1863 = (i8)(intptr_t)(ws+632);
	i8 v1864 = *(i8*)(intptr_t)v1863;
	i8 v1865 = v1864+(+16);
	i8 v1866 = *(i8*)(intptr_t)v1865;
	i8 v1867 = (i8)+0;
	if (v1866==v1867) goto c02_0199; else goto c02_019a;

c02_0199:;

	i8 v1868 = (i8)(intptr_t)c02_s0019;
	i8 v1869 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1869)(v1868);

	i8 v1870 = (i8)(intptr_t)(ws+632);
	i8 v1871 = *(i8*)(intptr_t)v1870;
	i8 v1872 = v1871+(+8);
	i8 v1873 = *(i8*)(intptr_t)v1872;
	i8 v1874 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1874)(v1873);

	i8 v1875 = (i8)(intptr_t)c02_s001a;
	i8 v1876 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1876)(v1875);

	i1 v1877 = (i1)+1;
	i8 v1878 = (i8)(intptr_t)(ws+640);
	*(i1*)(intptr_t)v1878 = v1877;

	goto c02_0194;

c02_019a:;

c02_0194:;

	i8 v1879 = (i8)(intptr_t)(ws+648);
	i8 v1880 = *(i8*)(intptr_t)v1879;
	i8 v1881 = v1880+(+8);
	i8 v1882 = *(i8*)(intptr_t)v1881;
	i8 v1883 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v1883 = v1882;

	goto c02_0190;

c02_0193:;

	i8 v1884 = (i8)(intptr_t)(ws+640);
	i1 v1885 = *(i1*)(intptr_t)v1884;
	i1 v1886 = (i1)+0;
	if (v1885==v1886) goto c02_01a0; else goto c02_019f;

c02_019f:;

	i8 v1887 = (i8)(intptr_t)c02_s001b;
	i8 v1888 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v1888)(v1887);

	goto c02_019c;

c02_01a0:;

c02_019c:;

endsub:;
}
const i1 c02_s001c[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x64,0x65,0x70,0x65,0x6e,0x64,0x65,0x6e,0x63,0x79,0x20,0x67,0x72,0x61,0x70,0x68,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// push workspace at ws+3088 length ws+10
void f93_push(i8 p1909 /* subr */) {
	*(i8*)(intptr_t)(ws+3088) = p1909; /*subr */

	i8 v1910 = (i8)(intptr_t)(ws+3040);
	i2 v1911 = *(i2*)(intptr_t)v1910;
	i8 v1912 = (i8)(intptr_t)(ws+3096);
	*(i2*)(intptr_t)v1912 = v1911;

c02_01a9:;

	i8 v1913 = (i8)(intptr_t)(ws+3096);
	i2 v1914 = *(i2*)(intptr_t)v1913;
	i2 v1915 = (i2)+0;
	if (v1914==v1915) goto c02_01ac; else goto c02_01ab;

c02_01ab:;

	i8 v1916 = (i8)(intptr_t)(ws+3096);
	i2 v1917 = *(i2*)(intptr_t)v1916;
	i2 v1918 = v1917+(-1);
	i8 v1919 = (i8)(intptr_t)(ws+3096);
	*(i2*)(intptr_t)v1919 = v1918;

	i8 v1920 = (i8)(intptr_t)(ws+640);
	i8 v1921 = (i8)(intptr_t)(ws+3096);
	i2 v1922 = *(i2*)(intptr_t)v1921;
	i8 v1923 = v1922;
	i1 v1924 = (i1)+3;
	i8 v1925 = ((i8)v1923)<<v1924;
	i8 v1926 = v1920+v1925;
	i8 v1927 = *(i8*)(intptr_t)v1926;
	i8 v1928 = (i8)(intptr_t)(ws+3088);
	i8 v1929 = *(i8*)(intptr_t)v1928;
	if (v1927==v1929) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	goto endsub;

c02_01b1:;

c02_01ad:;

	goto c02_01a9;

c02_01ac:;

	i8 v1930 = (i8)(intptr_t)(ws+3040);
	i2 v1931 = *(i2*)(intptr_t)v1930;
	i2 v1932 = (i2)+300;
	if (v1931==v1932) goto c02_01b5; else goto c02_01b6;

c02_01b5:;

	i8 v1933 = (i8)(intptr_t)c02_s001c;
	i8 v1934 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1934)(v1933);

	i8 v1935 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1935)();

	goto c02_01b2;

c02_01b6:;

c02_01b2:;

	i8 v1936 = (i8)(intptr_t)(ws+3088);
	i8 v1937 = *(i8*)(intptr_t)v1936;
	i8 v1938 = (i8)(intptr_t)(ws+640);
	i8 v1939 = (i8)(intptr_t)(ws+3040);
	i2 v1940 = *(i2*)(intptr_t)v1939;
	i8 v1941 = v1940;
	i1 v1942 = (i1)+3;
	i8 v1943 = ((i8)v1941)<<v1942;
	i8 v1944 = v1938+v1943;
	*(i8*)(intptr_t)v1944 = v1937;

	i8 v1945 = (i8)(intptr_t)(ws+3040);
	i2 v1946 = *(i2*)(intptr_t)v1945;
	i2 v1947 = v1946+(+1);
	i8 v1948 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1948 = v1947;

endsub:;
}
	void f93_push(i8 /* subr */);
	void f68_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f80_Deref(i8* /* subout */, i8 /* subin */);
	void f93_push(i8 /* subr */);
	void f93_push(i8 /* subr */);
const i1 c02_s001d[] = { 0x57,0x6f,0x72,0x6b,0x73,0x70,0x61,0x63,0x65,0x20,0x73,0x69,0x7a,0x65,0x73,0x3a,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s001e[] = { 0x20,0x20,0x23,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
const i1 c02_s001f[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0020[] = { 0x20,0x62,0x79,0x74,0x65,0x73,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PlaceSubroutines workspace at ws+632 length ws+2452
void f92_PlaceSubroutines(i8 p1889 /* subroutine */) {
	*(i8*)(intptr_t)(ws+632) = p1889; /*subroutine */

	i2 v1890 = (i2)+0;
	i8 v1891 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1891 = v1890;

	i1 v1892 = (i1)+0;
	i8 v1893 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1893 = v1892;

c02_01a3:;

	i8 v1894 = (i8)(intptr_t)(ws+3042);
	i1 v1895 = *(i1*)(intptr_t)v1894;
	i1 v1896 = (i1)+4;
	if (v1895==v1896) goto c02_01a6; else goto c02_01a5;

c02_01a5:;

	i2 v1897 = (i2)+0;
	i8 v1898 = (i8)(intptr_t)(ws+568);
	i8 v1899 = (i8)(intptr_t)(ws+3042);
	i1 v1900 = *(i1*)(intptr_t)v1899;
	i8 v1901 = v1900;
	i1 v1902 = (i1)+1;
	i8 v1903 = ((i8)v1901)<<v1902;
	i8 v1904 = v1898+v1903;
	*(i2*)(intptr_t)v1904 = v1897;

	i8 v1905 = (i8)(intptr_t)(ws+3042);
	i1 v1906 = *(i1*)(intptr_t)v1905;
	i1 v1907 = v1906+(+1);
	i8 v1908 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1908 = v1907;

	goto c02_01a3;

c02_01a6:;


	i8 v1949 = (i8)(intptr_t)(ws+632);
	i8 v1950 = *(i8*)(intptr_t)v1949;
	i8 v1951 = (i8)(intptr_t)(f93_push);

	((void(*)(i8 /* subr */))(intptr_t)v1951)(v1950);

c02_01b9:;

	i8 v1952 = (i8)(intptr_t)(ws+3040);
	i2 v1953 = *(i2*)(intptr_t)v1952;
	i2 v1954 = (i2)+0;
	if (v1953==v1954) goto c02_01bc; else goto c02_01bb;

c02_01bb:;

	i8 v1955 = (i8)(intptr_t)(ws+3040);
	i2 v1956 = *(i2*)(intptr_t)v1955;
	i2 v1957 = v1956+(-1);
	i8 v1958 = (i8)(intptr_t)(ws+3040);
	*(i2*)(intptr_t)v1958 = v1957;

	i8 v1959 = (i8)(intptr_t)(ws+640);
	i8 v1960 = (i8)(intptr_t)(ws+3040);
	i2 v1961 = *(i2*)(intptr_t)v1960;
	i8 v1962 = v1961;
	i1 v1963 = (i1)+3;
	i8 v1964 = ((i8)v1962)<<v1963;
	i8 v1965 = v1959+v1964;
	i8 v1966 = *(i8*)(intptr_t)v1965;
	i8 v1967 = (i8)(intptr_t)(ws+632);
	*(i8*)(intptr_t)v1967 = v1966;

	i8 v1968 = (i8)(intptr_t)(ws+632);
	i8 v1969 = *(i8*)(intptr_t)v1968;
	i8 v1970 = v1969+(+188);
	i1 v1971 = *(i1*)(intptr_t)v1970;
	i1 v1972 = v1971|(+1);
	i8 v1973 = (i8)(intptr_t)(ws+632);
	i8 v1974 = *(i8*)(intptr_t)v1973;
	i8 v1975 = v1974+(+188);
	*(i1*)(intptr_t)v1975 = v1972;

	i1 v1976 = (i1)+0;
	i8 v1977 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v1977 = v1976;

c02_01bf:;

	i8 v1978 = (i8)(intptr_t)(ws+3042);
	i1 v1979 = *(i1*)(intptr_t)v1978;
	i1 v1980 = (i1)+4;
	if (v1979==v1980) goto c02_01c2; else goto c02_01c1;

c02_01c1:;

	i8 v1981 = (i8)(intptr_t)(ws+632);
	i8 v1982 = *(i8*)(intptr_t)v1981;
	i8 v1983 = v1982+(+176);
	i8 v1984 = (i8)(intptr_t)(ws+3042);
	i1 v1985 = *(i1*)(intptr_t)v1984;
	i8 v1986 = v1985;
	i1 v1987 = (i1)+1;
	i8 v1988 = ((i8)v1986)<<v1987;
	i8 v1989 = v1983+v1988;
	i2 v1990 = *(i2*)(intptr_t)v1989;
	i8 v1991 = (i8)(intptr_t)(ws+632);
	i8 v1992 = *(i8*)(intptr_t)v1991;
	i8 v1993 = v1992+(+168);
	i8 v1994 = (i8)(intptr_t)(ws+3042);
	i1 v1995 = *(i1*)(intptr_t)v1994;
	i8 v1996 = v1995;
	i1 v1997 = (i1)+1;
	i8 v1998 = ((i8)v1996)<<v1997;
	i8 v1999 = v1993+v1998;
	i2 v2000 = *(i2*)(intptr_t)v1999;
	i2 v2001 = v1990+v2000;
	i8 v2002 = (i8)(intptr_t)(ws+3052);
	*(i2*)(intptr_t)v2002 = v2001;

	i8 v2003 = (i8)(intptr_t)(ws+3052);
	i2 v2004 = *(i2*)(intptr_t)v2003;
	i1 v2005 = (i1)+8;
	i8 v2006 = (i8)(intptr_t)(f68_ArchAlignUp);
	i2 v2007;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v2006)(&v2007, v2005, v2004);
	i8 v2008 = (i8)(intptr_t)(ws+3044);
	i8 v2009 = (i8)(intptr_t)(ws+3042);
	i1 v2010 = *(i1*)(intptr_t)v2009;
	i8 v2011 = v2010;
	i1 v2012 = (i1)+1;
	i8 v2013 = ((i8)v2011)<<v2012;
	i8 v2014 = v2008+v2013;
	*(i2*)(intptr_t)v2014 = v2007;

	i8 v2015 = (i8)(intptr_t)(ws+568);
	i8 v2016 = (i8)(intptr_t)(ws+3042);
	i1 v2017 = *(i1*)(intptr_t)v2016;
	i8 v2018 = v2017;
	i1 v2019 = (i1)+1;
	i8 v2020 = ((i8)v2018)<<v2019;
	i8 v2021 = v2015+v2020;
	i2 v2022 = *(i2*)(intptr_t)v2021;
	i8 v2023 = (i8)(intptr_t)(ws+3052);
	i2 v2024 = *(i2*)(intptr_t)v2023;
	if (v2022<v2024) goto c02_01c6; else goto c02_01c7;

c02_01c6:;

	i8 v2025 = (i8)(intptr_t)(ws+3052);
	i2 v2026 = *(i2*)(intptr_t)v2025;
	i8 v2027 = (i8)(intptr_t)(ws+568);
	i8 v2028 = (i8)(intptr_t)(ws+3042);
	i1 v2029 = *(i1*)(intptr_t)v2028;
	i8 v2030 = v2029;
	i1 v2031 = (i1)+1;
	i8 v2032 = ((i8)v2030)<<v2031;
	i8 v2033 = v2027+v2032;
	*(i2*)(intptr_t)v2033 = v2026;

	goto c02_01c3;

c02_01c7:;

c02_01c3:;

	i8 v2034 = (i8)(intptr_t)(ws+3042);
	i1 v2035 = *(i1*)(intptr_t)v2034;
	i1 v2036 = v2035+(+1);
	i8 v2037 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v2037 = v2036;

	goto c02_01bf;

c02_01c2:;

	i8 v2038 = (i8)(intptr_t)(ws+632);
	i8 v2039 = *(i8*)(intptr_t)v2038;
	i8 v2040 = v2039+(+16);
	i8 v2041 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2041 = v2040;

c02_01ca:;

	i8 v2042 = (i8)(intptr_t)(ws+3056);
	i8 v2043 = *(i8*)(intptr_t)v2042;
	i8 v2044 = (i8)+0;
	if (v2043==v2044) goto c02_01cd; else goto c02_01cc;

c02_01cc:;

	i1 v2045 = (i1)+0;
	i8 v2046 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2046 = v2045;

c02_01d0:;

	i8 v2047 = (i8)(intptr_t)(ws+3064);
	i1 v2048 = *(i1*)(intptr_t)v2047;
	i1 v2049 = (i1)+16;
	if (v2048==v2049) goto c02_01d3; else goto c02_01d2;

c02_01d2:;

	i8 v2050 = (i8)(intptr_t)(ws+3056);
	i8 v2051 = *(i8*)(intptr_t)v2050;
	i8 v2052 = v2051+(+8);
	i8 v2053 = (i8)(intptr_t)(ws+3064);
	i1 v2054 = *(i1*)(intptr_t)v2053;
	i8 v2055 = v2054;
	i1 v2056 = (i1)+3;
	i8 v2057 = ((i8)v2055)<<v2056;
	i8 v2058 = v2052+v2057;
	i8 v2059 = *(i8*)(intptr_t)v2058;
	i8 v2060 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2060 = v2059;

	i8 v2061 = (i8)(intptr_t)(ws+3064);
	i1 v2062 = *(i1*)(intptr_t)v2061;
	i1 v2063 = v2062+(+1);
	i8 v2064 = (i8)(intptr_t)(ws+3064);
	*(i1*)(intptr_t)v2064 = v2063;

	i8 v2065 = (i8)(intptr_t)(ws+3072);
	i8 v2066 = *(i8*)(intptr_t)v2065;
	i8 v2067 = (i8)+0;
	if (v2066==v2067) goto c02_01d7; else goto c02_01d8;

c02_01d7:;

	goto c02_01d3;

c02_01d8:;

c02_01d4:;

	i8 v2068 = (i8)(intptr_t)(ws+3072);
	i8 v2069 = *(i8*)(intptr_t)v2068;
	i8 v2070 = (i8)(intptr_t)(f80_Deref);
	i8 v2071;

	((void(*)(i8* /* subout */, i8 /* subin */))(intptr_t)v2070)(&v2071, v2069);
	i8 v2072 = (i8)(intptr_t)(ws+3072);
	*(i8*)(intptr_t)v2072 = v2071;

	i1 v2073 = (i1)+0;
	i8 v2074 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v2074 = v2073;

c02_01db:;

	i8 v2075 = (i8)(intptr_t)(ws+3042);
	i1 v2076 = *(i1*)(intptr_t)v2075;
	i1 v2077 = (i1)+4;
	if (v2076==v2077) goto c02_01de; else goto c02_01dd;

c02_01dd:;

	i8 v2078 = (i8)(intptr_t)(ws+3072);
	i8 v2079 = *(i8*)(intptr_t)v2078;
	i8 v2080 = v2079+(+176);
	i8 v2081 = (i8)(intptr_t)(ws+3042);
	i1 v2082 = *(i1*)(intptr_t)v2081;
	i8 v2083 = v2082;
	i1 v2084 = (i1)+1;
	i8 v2085 = ((i8)v2083)<<v2084;
	i8 v2086 = v2080+v2085;
	i2 v2087 = *(i2*)(intptr_t)v2086;
	i8 v2088 = (i8)(intptr_t)(ws+3080);
	*(i2*)(intptr_t)v2088 = v2087;

	i8 v2089 = (i8)(intptr_t)(ws+3044);
	i8 v2090 = (i8)(intptr_t)(ws+3042);
	i1 v2091 = *(i1*)(intptr_t)v2090;
	i8 v2092 = v2091;
	i1 v2093 = (i1)+1;
	i8 v2094 = ((i8)v2092)<<v2093;
	i8 v2095 = v2089+v2094;
	i2 v2096 = *(i2*)(intptr_t)v2095;
	i8 v2097 = (i8)(intptr_t)(ws+3082);
	*(i2*)(intptr_t)v2097 = v2096;

	i8 v2098 = (i8)(intptr_t)(ws+3080);
	i2 v2099 = *(i2*)(intptr_t)v2098;
	i8 v2100 = (i8)(intptr_t)(ws+3082);
	i2 v2101 = *(i2*)(intptr_t)v2100;
	if (v2099<v2101) goto c02_01e2; else goto c02_01e3;

c02_01e2:;

	i8 v2102 = (i8)(intptr_t)(ws+3082);
	i2 v2103 = *(i2*)(intptr_t)v2102;
	i8 v2104 = (i8)(intptr_t)(ws+3072);
	i8 v2105 = *(i8*)(intptr_t)v2104;
	i8 v2106 = v2105+(+176);
	i8 v2107 = (i8)(intptr_t)(ws+3042);
	i1 v2108 = *(i1*)(intptr_t)v2107;
	i8 v2109 = v2108;
	i1 v2110 = (i1)+1;
	i8 v2111 = ((i8)v2109)<<v2110;
	i8 v2112 = v2106+v2111;
	*(i2*)(intptr_t)v2112 = v2103;

	i8 v2113 = (i8)(intptr_t)(ws+3072);
	i8 v2114 = *(i8*)(intptr_t)v2113;
	i8 v2115 = (i8)(intptr_t)(f93_push);

	((void(*)(i8 /* subr */))(intptr_t)v2115)(v2114);

	goto c02_01df;

c02_01e3:;

c02_01df:;

	i8 v2116 = (i8)(intptr_t)(ws+3042);
	i1 v2117 = *(i1*)(intptr_t)v2116;
	i1 v2118 = v2117+(+1);
	i8 v2119 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v2119 = v2118;

	goto c02_01db;

c02_01de:;

	i8 v2120 = (i8)(intptr_t)(ws+3072);
	i8 v2121 = *(i8*)(intptr_t)v2120;
	i8 v2122 = v2121+(+188);
	i1 v2123 = *(i1*)(intptr_t)v2122;
	i1 v2124 = v2123&(+1);
	i1 v2125 = (i1)+0;
	if (v2124==v2125) goto c02_01e7; else goto c02_01e8;

c02_01e7:;

	i8 v2126 = (i8)(intptr_t)(ws+3072);
	i8 v2127 = *(i8*)(intptr_t)v2126;
	i8 v2128 = (i8)(intptr_t)(f93_push);

	((void(*)(i8 /* subr */))(intptr_t)v2128)(v2127);

	i8 v2129 = (i8)(intptr_t)(ws+3072);
	i8 v2130 = *(i8*)(intptr_t)v2129;
	i8 v2131 = v2130+(+188);
	i1 v2132 = *(i1*)(intptr_t)v2131;
	i1 v2133 = v2132|(+1);
	i8 v2134 = (i8)(intptr_t)(ws+3072);
	i8 v2135 = *(i8*)(intptr_t)v2134;
	i8 v2136 = v2135+(+188);
	*(i1*)(intptr_t)v2136 = v2133;

	goto c02_01e4;

c02_01e8:;

c02_01e4:;

	goto c02_01d0;

c02_01d3:;

	i8 v2137 = (i8)(intptr_t)(ws+3056);
	i8 v2138 = *(i8*)(intptr_t)v2137;
	i8 v2139 = *(i8*)(intptr_t)v2138;
	i8 v2140 = (i8)(intptr_t)(ws+3056);
	*(i8*)(intptr_t)v2140 = v2139;

	goto c02_01ca;

c02_01cd:;

	goto c02_01b9;

c02_01bc:;

	i8 v2141 = (i8)(intptr_t)c02_s001d;
	i8 v2142 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2142)(v2141);

	i1 v2143 = (i1)+0;
	i8 v2144 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v2144 = v2143;

c02_01eb:;

	i8 v2145 = (i8)(intptr_t)(ws+3042);
	i1 v2146 = *(i1*)(intptr_t)v2145;
	i1 v2147 = (i1)+4;
	if (v2146==v2147) goto c02_01ee; else goto c02_01ed;

c02_01ed:;

	i8 v2148 = (i8)(intptr_t)c02_s001e;
	i8 v2149 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2149)(v2148);

	i8 v2150 = (i8)(intptr_t)(ws+3042);
	i1 v2151 = *(i1*)(intptr_t)v2150;
	i8 v2152 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v2152)(v2151);

	i8 v2153 = (i8)(intptr_t)c02_s001f;
	i8 v2154 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2154)(v2153);

	i8 v2155 = (i8)(intptr_t)(ws+568);
	i8 v2156 = (i8)(intptr_t)(ws+3042);
	i1 v2157 = *(i1*)(intptr_t)v2156;
	i8 v2158 = v2157;
	i1 v2159 = (i1)+1;
	i8 v2160 = ((i8)v2158)<<v2159;
	i8 v2161 = v2155+v2160;
	i2 v2162 = *(i2*)(intptr_t)v2161;
	i8 v2163 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2163)(v2162);

	i8 v2164 = (i8)(intptr_t)c02_s0020;
	i8 v2165 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2165)(v2164);

	i8 v2166 = (i8)(intptr_t)(ws+3042);
	i1 v2167 = *(i1*)(intptr_t)v2166;
	i1 v2168 = v2167+(+1);
	i8 v2169 = (i8)(intptr_t)(ws+3042);
	*(i1*)(intptr_t)v2169 = v2168;

	goto c02_01eb;

c02_01ee:;

endsub:;
}
const i1 c02_s0021[] = { 0x43,0x4f,0x57,0x4c,0x49,0x4e,0x4b,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f35_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0022[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0023[] = { 0x53,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x0a,0 };
	void f55_SimpleError(i8 /* s */);

// SyntaxError workspace at ws+632 length ws+0
void f94_SyntaxError(void) {

	i8 v2190 = (i8)(intptr_t)c02_s0023;
	i8 v2191 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2191)(v2190);

endsub:;
}
const i1 c02_s0024[] = { 0x41,0x64,0x64,0x69,0x6e,0x67,0x20,0x69,0x6e,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f82_OpenAndLoadCoo(i8* /* coo */, i8 /* filename */);
	void f78_FindSub(i8* /* ptr */, i2 /* id */, i8 /* coo */);
	void f77_AddRef(i8 /* calls */, i8 /* subr */);

// AddInputFile workspace at ws+632 length ws+24
void f95_AddInputFile(i8 p2192 /* filename */) {
	*(i8*)(intptr_t)(ws+632) = p2192; /*filename */

	i8 v2193 = (i8)(intptr_t)c02_s0024;
	i8 v2194 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2194)(v2193);

	i8 v2195 = (i8)(intptr_t)(ws+632);
	i8 v2196 = *(i8*)(intptr_t)v2195;
	i8 v2197 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2197)(v2196);

	i8 v2198 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v2198)();

	i8 v2199 = (i8)(intptr_t)(ws+632);
	i8 v2200 = *(i8*)(intptr_t)v2199;
	i8 v2201 = (i8)(intptr_t)(f82_OpenAndLoadCoo);
	i8 v2202;

	((void(*)(i8* /* coo */, i8 /* filename */))(intptr_t)v2201)(&v2202, v2200);
	i8 v2203 = (i8)(intptr_t)(ws+640);
	*(i8*)(intptr_t)v2203 = v2202;

	i8 v2204 = (i8)(intptr_t)(ws+592);
	i8 v2205 = *(i8*)(intptr_t)v2204;
	i8 v2206 = (i8)+0;
	if (v2205==v2206) goto c02_01f2; else goto c02_01f3;

c02_01f2:;

	i8 v2207 = (i8)(intptr_t)(ws+640);
	i8 v2208 = *(i8*)(intptr_t)v2207;
	i8 v2209 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2209 = v2208;

	i8 v2210 = (i8)(intptr_t)(ws+640);
	i8 v2211 = *(i8*)(intptr_t)v2210;
	i8 v2212 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2212 = v2211;

	goto c02_01ef;

c02_01f3:;

	i8 v2213 = (i8)(intptr_t)(ws+640);
	i8 v2214 = *(i8*)(intptr_t)v2213;
	i8 v2215 = (i8)(intptr_t)(ws+584);
	i8 v2216 = *(i8*)(intptr_t)v2215;
	i8 v2217 = v2216+(+664);
	*(i8*)(intptr_t)v2217 = v2214;

	i8 v2218 = (i8)(intptr_t)(ws+640);
	i8 v2219 = *(i8*)(intptr_t)v2218;
	i8 v2220 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2220 = v2219;

c02_01ef:;

	i8 v2221 = (i8)(intptr_t)(ws+640);
	i8 v2222 = *(i8*)(intptr_t)v2221;
	i2 v2223 = (i2)+0;
	i8 v2224 = (i8)(intptr_t)(f78_FindSub);
	i8 v2225;

	((void(*)(i8* /* ptr */, i2 /* id */, i8 /* coo */))(intptr_t)v2224)(&v2225, v2223, v2222);
	i8 v2226 = *(i8*)(intptr_t)v2225;
	i8 v2227 = (i8)(intptr_t)(ws+648);
	*(i8*)(intptr_t)v2227 = v2226;

	i8 v2228 = (i8)(intptr_t)(ws+648);
	i8 v2229 = *(i8*)(intptr_t)v2228;
	i8 v2230 = (i8)+0;
	if (v2229==v2230) goto c02_01f8; else goto c02_01f7;

c02_01f7:;

	i8 v2231 = (i8)(intptr_t)(ws+608);
	i8 v2232 = *(i8*)(intptr_t)v2231;
	i8 v2233 = (i8)+0;
	if (v2232==v2233) goto c02_01fc; else goto c02_01fd;

c02_01fc:;

	i8 v2234 = (i8)(intptr_t)(ws+648);
	i8 v2235 = *(i8*)(intptr_t)v2234;
	i8 v2236 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2236 = v2235;

	goto c02_01f9;

c02_01fd:;

c02_01f9:;

	goto c02_01f4;

c02_01f8:;

c02_01f4:;

	i8 v2237 = (i8)(intptr_t)(ws+616);
	i8 v2238 = *(i8*)(intptr_t)v2237;
	i8 v2239 = (i8)+0;
	if (v2238==v2239) goto c02_0202; else goto c02_0201;

c02_0201:;

	i8 v2240 = (i8)(intptr_t)(ws+616);
	i8 v2241 = *(i8*)(intptr_t)v2240;
	i8 v2242 = (i8)(intptr_t)(ws+648);
	i8 v2243 = *(i8*)(intptr_t)v2242;
	i8 v2244 = (i8)(intptr_t)(f77_AddRef);

	((void(*)(i8 /* calls */, i8 /* subr */))(intptr_t)v2244)(v2243, v2241);

	goto c02_01fe;

c02_0202:;

c02_01fe:;

	i8 v2245 = (i8)(intptr_t)(ws+648);
	i8 v2246 = *(i8*)(intptr_t)v2245;
	i8 v2247 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2247 = v2246;

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
const i1 c02_s0025[] = { 0x2d,0x6f,0 };
	void f27_StrICmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f24_ArgvNext(i8* /* arg */);
	void f94_SyntaxError(void);
	void f95_AddInputFile(i8 /* filename */);
const i1 c02_s0026[] = { 0x4e,0x6f,0x20,0x6d,0x61,0x69,0x6e,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x69,0x6e,0x20,0x61,0x6e,0x79,0x20,0x63,0x6f,0x6f,0x66,0x69,0x6c,0x65,0 };
	void f55_SimpleError(i8 /* s */);
const i1 c02_s0027[] = { 0x4e,0x6f,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x6e,0x61,0x6d,0x65,0x20,0x73,0x70,0x65,0x63,0x69,0x66,0x69,0x65,0x64,0 };
	void f55_SimpleError(i8 /* s */);
const i1 c02_s0028[] = { 0x41,0x6e,0x61,0x6c,0x79,0x73,0x69,0x6e,0x67,0x2e,0x2e,0x2e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f91_ResolveExternals(void);
	void f92_PlaceSubroutines(i8 /* subroutine */);
	void f66_EmitterOpenfile(i8 /* filename */);
const i1 c02_s0029[] = { 0x57,0x72,0x69,0x74,0x69,0x6e,0x67,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0x2e,0x2e,0x2e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f72_ArchEmitHeader(i8 /* coo */);
	void f90_WriteAllSubroutinesToOutputFile(i8 /* coos */);
	void f73_ArchEmitFooter(i8 /* coo */);
	void f67_EmitterClosefile(void);
const i1 c02_s002a[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f35_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s002b[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// __main workspace at ws+0 length ws+632
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
	i8 v830 = (i8)(intptr_t)(ws+40);
	*(i2*)(intptr_t)v830 = v829;






















	i1 v1079 = (i1)+1;
	i8 v1080 = (i8)(intptr_t)(ws+576);
	*(i1*)(intptr_t)v1080 = v1079;














	i8 v2170 = (i8)(intptr_t)c02_s0021;
	i8 v2171 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2171)(v2170);

	i8 v2172 = (i8)(intptr_t)(f35_GetFreeMemory);
	i8 v2173;

	((void(*)(i8* /* i */))(intptr_t)v2172)(&v2173);
	i1 v2174 = (i1)+10;
	i8 v2175 = ((i8)v2173)>>v2174;
	i2 v2176 = v2175;
	i8 v2177 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2177)(v2176);

	i8 v2178 = (i8)(intptr_t)c02_s0022;
	i8 v2179 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2179)(v2178);

	i8 v2180 = (i8)+0;
	i8 v2181 = (i8)(intptr_t)(ws+584);
	*(i8*)(intptr_t)v2181 = v2180;

	i8 v2182 = (i8)+0;
	i8 v2183 = (i8)(intptr_t)(ws+592);
	*(i8*)(intptr_t)v2183 = v2182;

	i8 v2184 = (i8)+0;
	i8 v2185 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2185 = v2184;

	i8 v2186 = (i8)+0;
	i8 v2187 = (i8)(intptr_t)(ws+608);
	*(i8*)(intptr_t)v2187 = v2186;

	i8 v2188 = (i8)+0;
	i8 v2189 = (i8)(intptr_t)(ws+616);
	*(i8*)(intptr_t)v2189 = v2188;



	i8 v2248 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v2248)();

c02_0203:;

	i8 v2249 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v2250;

	((void(*)(i8* /* arg */))(intptr_t)v2249)(&v2250);
	i8 v2251 = (i8)(intptr_t)(ws+624);
	*(i8*)(intptr_t)v2251 = v2250;

	i8 v2252 = (i8)(intptr_t)(ws+624);
	i8 v2253 = *(i8*)(intptr_t)v2252;
	i8 v2254 = (i8)+0;
	if (v2253==v2254) goto c02_0208; else goto c02_0209;

c02_0208:;

	goto c02_0204;

c02_0209:;

c02_0205:;

	i8 v2255 = (i8)(intptr_t)(ws+624);
	i8 v2256 = *(i8*)(intptr_t)v2255;
	i8 v2257 = (i8)(intptr_t)c02_s0025;
	i8 v2258 = (i8)(intptr_t)(f27_StrICmp);
	i1 v2259;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v2258)(&v2259, v2257, v2256);
	i1 v2260 = (i1)+0;
	if (v2259==v2260) goto c02_020d; else goto c02_020e;

c02_020d:;

	i8 v2261 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v2262;

	((void(*)(i8* /* arg */))(intptr_t)v2261)(&v2262);
	i8 v2263 = (i8)(intptr_t)(ws+600);
	*(i8*)(intptr_t)v2263 = v2262;

	goto c02_020a;

c02_020e:;

	i8 v2264 = (i8)(intptr_t)(ws+624);
	i8 v2265 = *(i8*)(intptr_t)v2264;
	i1 v2266 = *(i1*)(intptr_t)v2265;
	i1 v2267 = (i1)+45;
	if (v2266==v2267) goto c02_0211; else goto c02_0212;

c02_0211:;

	i8 v2268 = (i8)(intptr_t)(f94_SyntaxError);

	((void(*)(void))(intptr_t)v2268)();

	goto c02_020a;

c02_0212:;

	i8 v2269 = (i8)(intptr_t)(ws+624);
	i8 v2270 = *(i8*)(intptr_t)v2269;
	i8 v2271 = (i8)(intptr_t)(f95_AddInputFile);

	((void(*)(i8 /* filename */))(intptr_t)v2271)(v2270);

c02_020a:;

	goto c02_0203;

c02_0204:;

	i8 v2272 = (i8)(intptr_t)(ws+608);
	i8 v2273 = *(i8*)(intptr_t)v2272;
	i8 v2274 = (i8)+0;
	if (v2273==v2274) goto c02_0216; else goto c02_0217;

c02_0216:;

	i8 v2275 = (i8)(intptr_t)c02_s0026;
	i8 v2276 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2276)(v2275);

	goto c02_0213;

c02_0217:;

c02_0213:;

	i8 v2277 = (i8)(intptr_t)(ws+600);
	i8 v2278 = *(i8*)(intptr_t)v2277;
	i8 v2279 = (i8)+0;
	if (v2278==v2279) goto c02_021b; else goto c02_021c;

c02_021b:;

	i8 v2280 = (i8)(intptr_t)c02_s0027;
	i8 v2281 = (i8)(intptr_t)(f55_SimpleError);

	((void(*)(i8 /* s */))(intptr_t)v2281)(v2280);

	goto c02_0218;

c02_021c:;

c02_0218:;

	i8 v2282 = (i8)(intptr_t)c02_s0028;
	i8 v2283 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2283)(v2282);

	i8 v2284 = (i8)(intptr_t)(f91_ResolveExternals);

	((void(*)(void))(intptr_t)v2284)();

	i8 v2285 = (i8)(intptr_t)(ws+608);
	i8 v2286 = *(i8*)(intptr_t)v2285;
	i8 v2287 = (i8)(intptr_t)(f92_PlaceSubroutines);

	((void(*)(i8 /* subroutine */))(intptr_t)v2287)(v2286);

	i8 v2288 = (i8)(intptr_t)(ws+600);
	i8 v2289 = *(i8*)(intptr_t)v2288;
	i8 v2290 = (i8)(intptr_t)(f66_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v2290)(v2289);

	i8 v2291 = (i8)(intptr_t)c02_s0029;
	i8 v2292 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2292)(v2291);

	i8 v2293 = (i8)(intptr_t)(ws+592);
	i8 v2294 = *(i8*)(intptr_t)v2293;
	i8 v2295 = (i8)(intptr_t)(f72_ArchEmitHeader);

	((void(*)(i8 /* coo */))(intptr_t)v2295)(v2294);

	i8 v2296 = (i8)(intptr_t)(ws+592);
	i8 v2297 = *(i8*)(intptr_t)v2296;
	i8 v2298 = (i8)(intptr_t)(f90_WriteAllSubroutinesToOutputFile);

	((void(*)(i8 /* coos */))(intptr_t)v2298)(v2297);

	i8 v2299 = (i8)(intptr_t)(ws+592);
	i8 v2300 = *(i8*)(intptr_t)v2299;
	i8 v2301 = (i8)(intptr_t)(f73_ArchEmitFooter);

	((void(*)(i8 /* coo */))(intptr_t)v2301)(v2300);

	i8 v2302 = (i8)(intptr_t)(f67_EmitterClosefile);

	((void(*)(void))(intptr_t)v2302)();

	i8 v2303 = (i8)(intptr_t)c02_s002a;
	i8 v2304 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2304)(v2303);

	i8 v2305 = (i8)(intptr_t)(f35_GetFreeMemory);
	i8 v2306;

	((void(*)(i8* /* i */))(intptr_t)v2305)(&v2306);
	i1 v2307 = (i1)+10;
	i8 v2308 = ((i8)v2306)>>v2307;
	i2 v2309 = v2308;
	i8 v2310 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v2310)(v2309);

	i8 v2311 = (i8)(intptr_t)c02_s002b;
	i8 v2312 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v2312)(v2311);

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                     