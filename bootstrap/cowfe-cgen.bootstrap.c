#include "cowgol.h"
static i8 workspace[0x01bf];
static i1* ws = (i1*)workspace;

// ExitWithError workspace at ws+3488 length ws+0
void f6_ExitWithError(void) {


	
exit(1); 



endsub:;
}

// MemSet workspace at ws+3552 length ws+24
void f7_MemSet(i8 p8 /* len */, i1 p9 /* byte */, i8 p10 /* buf */) {
	*(i8*)(intptr_t)(ws+3552) = p10; /*buf */
	*(i1*)(intptr_t)(ws+3560) = p9; /*byte */
	*(i8*)(intptr_t)(ws+3568) = p8; /*len */


	
memset((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3552) 
,  
*(i1*)(intptr_t)(ws+3560) 
,  
*(i8*)(intptr_t)(ws+3568) 
); 



endsub:;
}

// print_char workspace at ws+3536 length ws+1
void f8_print_char(i1 p11 /* c */) {
	*(i1*)(intptr_t)(ws+3536) = p11; /*c */


	
putchar( 
*(i1*)(intptr_t)(ws+3536) 
); 



endsub:;
}
	void f8_print_char(i1 /* c */);

// print workspace at ws+3520 length ws+9
void f11_print(i8 p20 /* ptr */) {
	*(i8*)(intptr_t)(ws+3520) = p20; /*ptr */

c02_0001:;

	i8 v21 = (i8)(intptr_t)(ws+3520);
	i8 v22 = *(i8*)(intptr_t)v21;
	i1 v23 = *(i1*)(intptr_t)v22;
	i8 v24 = (i8)(intptr_t)(ws+3528);
	*(i1*)(intptr_t)v24 = v23;

	i8 v25 = (i8)(intptr_t)(ws+3528);
	i1 v26 = *(i1*)(intptr_t)v25;
	i1 v27 = (i1)+0;
	if (v26==v27) goto c02_0006; else goto c02_0007;

c02_0006:;

	goto endsub;

c02_0007:;

c02_0003:;

	i8 v28 = (i8)(intptr_t)(ws+3528);
	i1 v29 = *(i1*)(intptr_t)v28;
	i8 v30 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v30)(v29);

	i8 v31 = (i8)(intptr_t)(ws+3520);
	i8 v32 = *(i8*)(intptr_t)v31;
	i8 v33 = v32+(+1);
	i8 v34 = (i8)(intptr_t)(ws+3520);
	*(i8*)(intptr_t)v34 = v33;

	goto c02_0001;

c02_0002:;

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_nl workspace at ws+3488 length ws+0
void f12_print_nl(void) {

	i1 v35 = (i1)+10;
	i8 v36 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v36)(v35);

endsub:;
}

// UIToA workspace at ws+3520 length ws+49
void f13_UIToA(i8* p37 /* ptr */, i8 p38 /* buffer */, i1 p39 /* base */, i4 p40 /* value */) {
	*(i4*)(intptr_t)(ws+3520) = p40; /*value */
	*(i1*)(intptr_t)(ws+3524) = p39; /*base */
	*(i8*)(intptr_t)(ws+3528) = p38; /*buffer */

	i8 v41 = (i8)(intptr_t)(ws+3528);
	i8 v42 = *(i8*)(intptr_t)v41;
	i8 v43 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v43 = v42;

c02_0008:;

	i8 v44 = (i8)(intptr_t)(ws+3520);
	i4 v45 = *(i4*)(intptr_t)v44;
	i8 v46 = (i8)(intptr_t)(ws+3524);
	i1 v47 = *(i1*)(intptr_t)v46;
	i4 v48 = v47;
	i4 v49 = v45%v48;
	i8 v50 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v50 = v49;

	i8 v51 = (i8)(intptr_t)(ws+3520);
	i4 v52 = *(i4*)(intptr_t)v51;
	i8 v53 = (i8)(intptr_t)(ws+3524);
	i1 v54 = *(i1*)(intptr_t)v53;
	i4 v55 = v54;
	i4 v56 = v52/v55;
	i8 v57 = (i8)(intptr_t)(ws+3520);
	*(i4*)(intptr_t)v57 = v56;

	i8 v58 = (i8)(intptr_t)(ws+3544);
	i4 v59 = *(i4*)(intptr_t)v58;
	i4 v60 = (i4)+10;
	if (v59<v60) goto c02_000d; else goto c02_000e;

c02_000d:;

	i8 v61 = (i8)(intptr_t)(ws+3544);
	i4 v62 = *(i4*)(intptr_t)v61;
	i4 v63 = v62+(+48);
	i8 v64 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v64 = v63;

	goto c02_000a;

c02_000e:;

	i8 v65 = (i8)(intptr_t)(ws+3544);
	i4 v66 = *(i4*)(intptr_t)v65;
	i4 v67 = v66+(+87);
	i8 v68 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v68 = v67;

c02_000a:;

	i8 v69 = (i8)(intptr_t)(ws+3544);
	i4 v70 = *(i4*)(intptr_t)v69;
	i1 v71 = v70;
	i8 v72 = (i8)(intptr_t)(ws+3536);
	i8 v73 = *(i8*)(intptr_t)v72;
	*(i1*)(intptr_t)v73 = v71;

	i8 v74 = (i8)(intptr_t)(ws+3536);
	i8 v75 = *(i8*)(intptr_t)v74;
	i8 v76 = v75+(+1);
	i8 v77 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v77 = v76;

	i8 v78 = (i8)(intptr_t)(ws+3520);
	i4 v79 = *(i4*)(intptr_t)v78;
	i4 v80 = (i4)+0;
	if (v79==v80) goto c02_0012; else goto c02_0013;

c02_0012:;

	goto c02_0009;

c02_0013:;

c02_000f:;

	goto c02_0008;

c02_0009:;

	i8 v81 = (i8)(intptr_t)(ws+3528);
	i8 v82 = *(i8*)(intptr_t)v81;
	i8 v83 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v83 = v82;

	i8 v84 = (i8)(intptr_t)(ws+3536);
	i8 v85 = *(i8*)(intptr_t)v84;
	i8 v86 = v85+(-1);
	i8 v87 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v87 = v86;

c02_0016:;

	i8 v88 = (i8)(intptr_t)(ws+3552);
	i8 v89 = *(i8*)(intptr_t)v88;
	i8 v90 = (i8)(intptr_t)(ws+3560);
	i8 v91 = *(i8*)(intptr_t)v90;
	if (v89<v91) goto c02_0018; else goto c02_0019;

c02_0018:;

	i8 v92 = (i8)(intptr_t)(ws+3552);
	i8 v93 = *(i8*)(intptr_t)v92;
	i1 v94 = *(i1*)(intptr_t)v93;
	i8 v95 = (i8)(intptr_t)(ws+3568);
	*(i1*)(intptr_t)v95 = v94;

	i8 v96 = (i8)(intptr_t)(ws+3560);
	i8 v97 = *(i8*)(intptr_t)v96;
	i1 v98 = *(i1*)(intptr_t)v97;
	i8 v99 = (i8)(intptr_t)(ws+3552);
	i8 v100 = *(i8*)(intptr_t)v99;
	*(i1*)(intptr_t)v100 = v98;

	i8 v101 = (i8)(intptr_t)(ws+3568);
	i1 v102 = *(i1*)(intptr_t)v101;
	i8 v103 = (i8)(intptr_t)(ws+3560);
	i8 v104 = *(i8*)(intptr_t)v103;
	*(i1*)(intptr_t)v104 = v102;

	i8 v105 = (i8)(intptr_t)(ws+3552);
	i8 v106 = *(i8*)(intptr_t)v105;
	i8 v107 = v106+(+1);
	i8 v108 = (i8)(intptr_t)(ws+3552);
	*(i8*)(intptr_t)v108 = v107;

	i8 v109 = (i8)(intptr_t)(ws+3560);
	i8 v110 = *(i8*)(intptr_t)v109;
	i8 v111 = v110+(-1);
	i8 v112 = (i8)(intptr_t)(ws+3560);
	*(i8*)(intptr_t)v112 = v111;

	goto c02_0016;

c02_0019:;

	i1 v113 = (i1)+0;
	i8 v114 = (i8)(intptr_t)(ws+3536);
	i8 v115 = *(i8*)(intptr_t)v114;
	*(i1*)(intptr_t)v115 = v113;

endsub:;
	*p37 = *(i8*)(intptr_t)(ws+3536);
}
	void f13_UIToA(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */);
	void f11_print(i8 /* ptr */);

// print_i32 workspace at ws+3496 length ws+24
void f15_print_i32(i4 p143 /* value */) {
	*(i4*)(intptr_t)(ws+3496) = p143; /*value */

	i8 v144 = (i8)(intptr_t)(ws+3496);
	i4 v145 = *(i4*)(intptr_t)v144;
	i1 v146 = (i1)+10;
	i8 v147 = (i8)(intptr_t)(ws+3500);
	i8 v148 = (i8)(intptr_t)(f13_UIToA);
	i8 v149;

	((void(*)(i8* /* ptr */, i8 /* buffer */, i1 /* base */, i4 /* value */))(intptr_t)v148)(&v149, v147, v146, v145);
	i8 v150 = (i8)(intptr_t)(ws+3512);
	*(i8*)(intptr_t)v150 = v149;

	i8 v151 = (i8)(intptr_t)(ws+3500);
	i8 v152 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v152)(v151);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i16 workspace at ws+3488 length ws+2
void f16_print_i16(i2 p153 /* value */) {
	*(i2*)(intptr_t)(ws+3488) = p153; /*value */

	i8 v154 = (i8)(intptr_t)(ws+3488);
	i2 v155 = *(i2*)(intptr_t)v154;
	i4 v156 = v155;
	i8 v157 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v157)(v156);

endsub:;
}
	void f15_print_i32(i4 /* value */);

// print_i8 workspace at ws+3384 length ws+1
void f17_print_i8(i1 p158 /* value */) {
	*(i1*)(intptr_t)(ws+3384) = p158; /*value */

	i8 v159 = (i8)(intptr_t)(ws+3384);
	i1 v160 = *(i1*)(intptr_t)v159;
	i4 v161 = v160;
	i8 v162 = (i8)(intptr_t)(f15_print_i32);

	((void(*)(i4 /* value */))(intptr_t)v162)(v161);

endsub:;
}
	void f8_print_char(i1 /* c */);

// print_hex_i8 workspace at ws+3392 length ws+3
void f18_print_hex_i8(i1 p163 /* value */) {
	*(i1*)(intptr_t)(ws+3392) = p163; /*value */

	i1 v164 = (i1)+2;
	i8 v165 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v165 = v164;

c02_001f:;

	i8 v166 = (i8)(intptr_t)(ws+3392);
	i1 v167 = *(i1*)(intptr_t)v166;
	i1 v168 = (i1)+4;
	i1 v169 = ((i1)v167)>>v168;
	i8 v170 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v170 = v169;

	i8 v171 = (i8)(intptr_t)(ws+3394);
	i1 v172 = *(i1*)(intptr_t)v171;
	i1 v173 = (i1)+10;
	if (v172<v173) goto c02_0024; else goto c02_0025;

c02_0024:;

	i8 v174 = (i8)(intptr_t)(ws+3394);
	i1 v175 = *(i1*)(intptr_t)v174;
	i1 v176 = v175+(+48);
	i8 v177 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v177 = v176;

	goto c02_0021;

c02_0025:;

	i8 v178 = (i8)(intptr_t)(ws+3394);
	i1 v179 = *(i1*)(intptr_t)v178;
	i1 v180 = v179+(+87);
	i8 v181 = (i8)(intptr_t)(ws+3394);
	*(i1*)(intptr_t)v181 = v180;

c02_0021:;

	i8 v182 = (i8)(intptr_t)(ws+3394);
	i1 v183 = *(i1*)(intptr_t)v182;
	i8 v184 = (i8)(intptr_t)(f8_print_char);

	((void(*)(i1 /* c */))(intptr_t)v184)(v183);

	i8 v185 = (i8)(intptr_t)(ws+3392);
	i1 v186 = *(i1*)(intptr_t)v185;
	i1 v187 = (i1)+4;
	i1 v188 = ((i1)v186)<<v187;
	i8 v189 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v189 = v188;

	i8 v190 = (i8)(intptr_t)(ws+3393);
	i1 v191 = *(i1*)(intptr_t)v190;
	i1 v192 = v191+(-1);
	i8 v193 = (i8)(intptr_t)(ws+3393);
	*(i1*)(intptr_t)v193 = v192;

	i8 v194 = (i8)(intptr_t)(ws+3393);
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

// print_hex_i32 workspace at ws+3384 length ws+4
void f20_print_hex_i32(i4 p208 /* value */) {
	*(i4*)(intptr_t)(ws+3384) = p208; /*value */

	i8 v209 = (i8)(intptr_t)(ws+3384);
	i4 v210 = *(i4*)(intptr_t)v209;
	i1 v211 = (i1)+24;
	i4 v212 = ((i4)v210)>>v211;
	i1 v213 = v212;
	i8 v214 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v214)(v213);

	i8 v215 = (i8)(intptr_t)(ws+3384);
	i4 v216 = *(i4*)(intptr_t)v215;
	i1 v217 = (i1)+16;
	i4 v218 = ((i4)v216)>>v217;
	i1 v219 = v218;
	i8 v220 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v220)(v219);

	i8 v221 = (i8)(intptr_t)(ws+3384);
	i4 v222 = *(i4*)(intptr_t)v221;
	i1 v223 = (i1)+8;
	i4 v224 = ((i4)v222)>>v223;
	i1 v225 = v224;
	i8 v226 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v226)(v225);

	i8 v227 = (i8)(intptr_t)(ws+3384);
	i4 v228 = *(i4*)(intptr_t)v227;
	i1 v229 = v228;
	i8 v230 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v230)(v229);

endsub:;
}

// ArgvInit workspace at ws+3216 length ws+0
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

// ArgvNext workspace at ws+3216 length ws+8
void f24_ArgvNext(i8* p347 /* arg */) {

	i8 v348 = (i8)(intptr_t)(ws+16);
	i8 v349 = *(i8*)(intptr_t)v348;
	i8 v350 = (i8)+0;
	if (v349==v350) goto c02_0052; else goto c02_0053;

c02_0052:;

	i8 v351 = (i8)+0;
	i8 v352 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v352 = v351;

	goto endsub;

c02_0053:;

c02_004f:;

	i8 v353 = (i8)(intptr_t)(ws+16);
	i8 v354 = *(i8*)(intptr_t)v353;
	i8 v355 = *(i8*)(intptr_t)v354;
	i8 v356 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v356 = v355;

	i8 v357 = (i8)(intptr_t)(ws+3216);
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
	*p347 = *(i8*)(intptr_t)(ws+3216);
}

// StrCmp workspace at ws+3416 length ws+17
void f25_StrCmp(i1* p366 /* res */, i8 p367 /* s2 */, i8 p368 /* s1 */) {
	*(i8*)(intptr_t)(ws+3416) = p368; /*s1 */
	*(i8*)(intptr_t)(ws+3424) = p367; /*s2 */

c02_0059:;

	i8 v369 = (i8)(intptr_t)(ws+3416);
	i8 v370 = *(i8*)(intptr_t)v369;
	i1 v371 = *(i1*)(intptr_t)v370;
	i8 v372 = (i8)(intptr_t)(ws+3424);
	i8 v373 = *(i8*)(intptr_t)v372;
	i1 v374 = *(i1*)(intptr_t)v373;
	i1 v375 = v371-v374;
	i8 v376 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v376 = v375;

	i8 v377 = (i8)(intptr_t)(ws+3432);
	i1 v378 = *(i1*)(intptr_t)v377;
	i1 v379 = (i1)+0;
	if (v378==v379) goto c02_0062; else goto c02_0060;

c02_0062:;

	i8 v380 = (i8)(intptr_t)(ws+3416);
	i8 v381 = *(i8*)(intptr_t)v380;
	i1 v382 = *(i1*)(intptr_t)v381;
	i1 v383 = (i1)+0;
	if (v382==v383) goto c02_0060; else goto c02_0061;

c02_0060:;

	goto c02_005a;

c02_0061:;

c02_005b:;

	i8 v384 = (i8)(intptr_t)(ws+3416);
	i8 v385 = *(i8*)(intptr_t)v384;
	i8 v386 = v385+(+1);
	i8 v387 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v387 = v386;

	i8 v388 = (i8)(intptr_t)(ws+3424);
	i8 v389 = *(i8*)(intptr_t)v388;
	i8 v390 = v389+(+1);
	i8 v391 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v391 = v390;

	goto c02_0059;

c02_005a:;

endsub:;
	*p366 = *(i1*)(intptr_t)(ws+3432);
}

// ToLower workspace at ws+3232 length ws+2
void f26_ToLower(i1* p392 /* cc */, i1 p393 /* c */) {
	*(i1*)(intptr_t)(ws+3232) = p393; /*c */

	i8 v394 = (i8)(intptr_t)(ws+3232);
	i1 v395 = *(i1*)(intptr_t)v394;
	i1 v396 = (i1)+65;
	if (v395<v396) goto c02_0069; else goto c02_006a;

c02_006a:;

	i1 v397 = (i1)+90;
	i8 v398 = (i8)(intptr_t)(ws+3232);
	i1 v399 = *(i1*)(intptr_t)v398;
	if (v397<v399) goto c02_0069; else goto c02_0068;

c02_0068:;

	i8 v400 = (i8)(intptr_t)(ws+3232);
	i1 v401 = *(i1*)(intptr_t)v400;
	i1 v402 = v401|(+32);
	i8 v403 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v403 = v402;

	goto c02_0063;

c02_0069:;

	i8 v404 = (i8)(intptr_t)(ws+3232);
	i1 v405 = *(i1*)(intptr_t)v404;
	i8 v406 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v406 = v405;

c02_0063:;

endsub:;
	*p392 = *(i1*)(intptr_t)(ws+3233);
}

// StrLen workspace at ws+3456 length ws+25
void f28_StrLen(i8* p437 /* size */, i8 p438 /* s */) {
	*(i8*)(intptr_t)(ws+3456) = p438; /*s */

	i8 v439 = (i8)(intptr_t)(ws+3456);
	i8 v440 = *(i8*)(intptr_t)v439;
	i8 v441 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v441 = v440;

c02_0075:;

	i8 v442 = (i8)(intptr_t)(ws+3472);
	i8 v443 = *(i8*)(intptr_t)v442;
	i1 v444 = *(i1*)(intptr_t)v443;
	i8 v445 = (i8)(intptr_t)(ws+3480);
	*(i1*)(intptr_t)v445 = v444;

	i8 v446 = (i8)(intptr_t)(ws+3480);
	i1 v447 = *(i1*)(intptr_t)v446;
	i1 v448 = (i1)+0;
	if (v447==v448) goto c02_007a; else goto c02_007b;

c02_007a:;

	goto c02_0076;

c02_007b:;

c02_0077:;

	i8 v449 = (i8)(intptr_t)(ws+3472);
	i8 v450 = *(i8*)(intptr_t)v449;
	i8 v451 = v450+(+1);
	i8 v452 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v452 = v451;

	goto c02_0075;

c02_0076:;

	i8 v453 = (i8)(intptr_t)(ws+3472);
	i8 v454 = *(i8*)(intptr_t)v453;
	i8 v455 = (i8)(intptr_t)(ws+3456);
	i8 v456 = *(i8*)(intptr_t)v455;
	i8 v457 = v454-v456;
	i8 v458 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v458 = v457;

endsub:;
	*p437 = *(i8*)(intptr_t)(ws+3464);
}

// MemCopy workspace at ws+3424 length ws+24
void f30_MemCopy(i8 p480 /* dest */, i8 p481 /* size */, i8 p482 /* src */) {
	*(i8*)(intptr_t)(ws+3424) = p482; /*src */
	*(i8*)(intptr_t)(ws+3432) = p481; /*size */
	*(i8*)(intptr_t)(ws+3440) = p480; /*dest */

c02_0085:;

	i8 v483 = (i8)(intptr_t)(ws+3432);
	i8 v484 = *(i8*)(intptr_t)v483;
	i8 v485 = (i8)+0;
	if (v484==v485) goto c02_0088; else goto c02_0087;

c02_0087:;

	i8 v486 = (i8)(intptr_t)(ws+3424);
	i8 v487 = *(i8*)(intptr_t)v486;
	i1 v488 = *(i1*)(intptr_t)v487;
	i8 v489 = (i8)(intptr_t)(ws+3440);
	i8 v490 = *(i8*)(intptr_t)v489;
	*(i1*)(intptr_t)v490 = v488;

	i8 v491 = (i8)(intptr_t)(ws+3440);
	i8 v492 = *(i8*)(intptr_t)v491;
	i8 v493 = v492+(+1);
	i8 v494 = (i8)(intptr_t)(ws+3440);
	*(i8*)(intptr_t)v494 = v493;

	i8 v495 = (i8)(intptr_t)(ws+3424);
	i8 v496 = *(i8*)(intptr_t)v495;
	i8 v497 = v496+(+1);
	i8 v498 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v498 = v497;

	i8 v499 = (i8)(intptr_t)(ws+3432);
	i8 v500 = *(i8*)(intptr_t)v499;
	i8 v501 = v500+(-1);
	i8 v502 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v502 = v501;

	goto c02_0085;

c02_0088:;

endsub:;
}

// RawAlloc workspace at ws+3472 length ws+16
void f31_RawAlloc(i8* p503 /* block */, i8 p504 /* length */) {
	*(i8*)(intptr_t)(ws+3472) = p504; /*length */


	
*(i8*)(intptr_t)(ws+3480) 
=(intptr_t)calloc(1, (size_t) 
*(i8*)(intptr_t)(ws+3472) 
); 



endsub:;
	*p503 = *(i8*)(intptr_t)(ws+3480);
}

// Free workspace at ws+3480 length ws+8
void f33_Free(i8 p518 /* block */) {
	*(i8*)(intptr_t)(ws+3480) = p518; /*block */


	
free((void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3480) 
); 



endsub:;
}

// GetFreeMemory workspace at ws+3208 length ws+8
void f37_GetFreeMemory(i8* p521 /* i */) {

	i8 v522 = (i8)+0;
	i8 v523 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v523 = v522;

endsub:;
	*p521 = *(i8*)(intptr_t)(ws+3208);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_blockin workspace at ws+3520 length ws+28
void f38_fcb_i_blockin(i8 p524 /* fcb */) {
	*(i8*)(intptr_t)(ws+3520) = p524; /*fcb */

	i8 v525 = (i8)(intptr_t)(ws+3520);
	i8 v526 = *(i8*)(intptr_t)v525;
	i8 v527 = v526+(+12);
	i1 v528 = (i1)+0;
	i8 v529 = (i8)+512;
	i8 v530 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v530)(v529, v528, v527);

	i8 v531 = (i8)(intptr_t)(ws+3520);
	i8 v532 = *(i8*)(intptr_t)v531;
	i4 v533 = *(i4*)(intptr_t)v532;
	i8 v534 = (i8)(intptr_t)(ws+3528);
	*(i4*)(intptr_t)v534 = v533;

	i8 v535 = (i8)(intptr_t)(ws+3520);
	i8 v536 = *(i8*)(intptr_t)v535;
	i8 v537 = v536+(+12);
	i8 v538 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v538 = v537;

	i8 v539 = (i8)(intptr_t)(ws+3520);
	i8 v540 = *(i8*)(intptr_t)v539;
	i8 v541 = v540+(+8);
	i4 v542 = *(i4*)(intptr_t)v541;
	i1 v543 = (i1)+9;
	i4 v544 = ((i4)v542)<<v543;
	i8 v545 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v545 = v544;


	
pread( 
*(i4*)(intptr_t)(ws+3528) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3536) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3544) 
); 



	i1 v546 = (i1)+0;
	i8 v547 = (i8)(intptr_t)(ws+3520);
	i8 v548 = *(i8*)(intptr_t)v547;
	i8 v549 = v548+(+6);
	*(i1*)(intptr_t)v549 = v546;

endsub:;
}

// fcb_i_blockout workspace at ws+3520 length ws+28
void f39_fcb_i_blockout(i8 p550 /* fcb */) {
	*(i8*)(intptr_t)(ws+3520) = p550; /*fcb */

	i8 v551 = (i8)(intptr_t)(ws+3520);
	i8 v552 = *(i8*)(intptr_t)v551;
	i8 v553 = v552+(+6);
	i1 v554 = *(i1*)(intptr_t)v553;
	i1 v555 = (i1)+0;
	if (v554==v555) goto c02_0092; else goto c02_0091;

c02_0091:;

	i8 v556 = (i8)(intptr_t)(ws+3520);
	i8 v557 = *(i8*)(intptr_t)v556;
	i4 v558 = *(i4*)(intptr_t)v557;
	i8 v559 = (i8)(intptr_t)(ws+3528);
	*(i4*)(intptr_t)v559 = v558;

	i8 v560 = (i8)(intptr_t)(ws+3520);
	i8 v561 = *(i8*)(intptr_t)v560;
	i8 v562 = v561+(+12);
	i8 v563 = (i8)(intptr_t)(ws+3536);
	*(i8*)(intptr_t)v563 = v562;

	i8 v564 = (i8)(intptr_t)(ws+3520);
	i8 v565 = *(i8*)(intptr_t)v564;
	i8 v566 = v565+(+8);
	i4 v567 = *(i4*)(intptr_t)v566;
	i1 v568 = (i1)+9;
	i4 v569 = ((i4)v567)<<v568;
	i8 v570 = (i8)(intptr_t)(ws+3544);
	*(i4*)(intptr_t)v570 = v569;


	
pwrite( 
*(i4*)(intptr_t)(ws+3528) 
, (void*)(intptr_t) 
*(i8*)(intptr_t)(ws+3536) 
,  
(+512)
,  
*(i4*)(intptr_t)(ws+3544) 
); 



	i1 v571 = (i1)+0;
	i8 v572 = (i8)(intptr_t)(ws+3520);
	i8 v573 = *(i8*)(intptr_t)v572;
	i8 v574 = v573+(+6);
	*(i1*)(intptr_t)v574 = v571;

c02_0092:;

c02_008e:;

endsub:;
}
	void f39_fcb_i_blockout(i8 /* fcb */);
	void f38_fcb_i_blockin(i8 /* fcb */);

// fcb_i_changeblock workspace at ws+3504 length ws+12
void f40_fcb_i_changeblock(i4 p575 /* newblock */, i8 p576 /* fcb */) {
	*(i8*)(intptr_t)(ws+3504) = p576; /*fcb */
	*(i4*)(intptr_t)(ws+3512) = p575; /*newblock */

	i8 v577 = (i8)(intptr_t)(ws+3512);
	i4 v578 = *(i4*)(intptr_t)v577;
	i8 v579 = (i8)(intptr_t)(ws+3504);
	i8 v580 = *(i8*)(intptr_t)v579;
	i8 v581 = v580+(+8);
	i4 v582 = *(i4*)(intptr_t)v581;
	if (v578==v582) goto c02_0097; else goto c02_0096;

c02_0096:;

	i8 v583 = (i8)(intptr_t)(ws+3504);
	i8 v584 = *(i8*)(intptr_t)v583;
	i8 v585 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v585)(v584);

	i8 v586 = (i8)(intptr_t)(ws+3512);
	i4 v587 = *(i4*)(intptr_t)v586;
	i8 v588 = (i8)(intptr_t)(ws+3504);
	i8 v589 = *(i8*)(intptr_t)v588;
	i8 v590 = v589+(+8);
	*(i4*)(intptr_t)v590 = v587;

	i8 v591 = (i8)(intptr_t)(ws+3504);
	i8 v592 = *(i8*)(intptr_t)v591;
	i8 v593 = (i8)(intptr_t)(f38_fcb_i_blockin);

	((void(*)(i8 /* fcb */))(intptr_t)v593)(v592);

c02_0097:;

c02_0093:;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);

// fcb_i_open workspace at ws+3304 length ws+28
void f41_fcb_i_open(i1* p594 /* errno */, i4 p595 /* flags */, i8 p596 /* filename */, i8 p597 /* fcb */) {
	*(i8*)(intptr_t)(ws+3304) = p597; /*fcb */
	*(i8*)(intptr_t)(ws+3312) = p596; /*filename */
	*(i4*)(intptr_t)(ws+3320) = p595; /*flags */

	i8 v598 = (i8)(intptr_t)(ws+3304);
	i8 v599 = *(i8*)(intptr_t)v598;
	i1 v600 = (i1)+0;
	i8 v601 = (i8)+524;
	i8 v602 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v602)(v601, v600, v599);

	i2 v603 = (i2)+511;
	i8 v604 = (i8)(intptr_t)(ws+3304);
	i8 v605 = *(i8*)(intptr_t)v604;
	i8 v606 = v605+(+4);
	*(i2*)(intptr_t)v606 = v603;

	i4 v607 = (i4)-1;
	i8 v608 = (i8)(intptr_t)(ws+3304);
	i8 v609 = *(i8*)(intptr_t)v608;
	i8 v610 = v609+(+8);
	*(i4*)(intptr_t)v610 = v607;


	
errno = 0; 


	
*(i4*)(intptr_t)(ws+3328) 
 = open((char*)(intptr_t) 
*(i8*)(intptr_t)(ws+3312) 
,  
*(i4*)(intptr_t)(ws+3320) 
,  
(+438)
); 



	i8 v611 = (i8)(intptr_t)(ws+3328);
	i4 v612 = *(i4*)(intptr_t)v611;
	i8 v613 = (i8)(intptr_t)(ws+3304);
	i8 v614 = *(i8*)(intptr_t)v613;
	*(i4*)(intptr_t)v614 = v612;

	i8 v615 = (i8)(intptr_t)(ws+3328);
	i4 v616 = *(i4*)(intptr_t)v615;
	i4 v617 = (i4)+0;
	if ((s4)v616<(s4)v617) goto c02_009b; else goto c02_009c;

c02_009b:;


	
*(i1*)(intptr_t)(ws+3324) 
 = errno; 



	goto c02_0098;

c02_009c:;

	i1 v618 = (i1)+0;
	i8 v619 = (i8)(intptr_t)(ws+3324);
	*(i1*)(intptr_t)v619 = v618;

c02_0098:;

endsub:;
	*p594 = *(i1*)(intptr_t)(ws+3324);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenIn workspace at ws+3280 length ws+17
void f42_FCBOpenIn(i1* p620 /* errno */, i8 p621 /* filename */, i8 p622 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p622; /*fcb */
	*(i8*)(intptr_t)(ws+3288) = p621; /*filename */

	i8 v623 = (i8)(intptr_t)(ws+3280);
	i8 v624 = *(i8*)(intptr_t)v623;
	i8 v625 = (i8)(intptr_t)(ws+3288);
	i8 v626 = *(i8*)(intptr_t)v625;
	i4 v627 = (i4)+0;
	i8 v628 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v629;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v628)(&v629, v627, v626, v624);
	i8 v630 = (i8)(intptr_t)(ws+3296);
	*(i1*)(intptr_t)v630 = v629;

endsub:;
	*p620 = *(i1*)(intptr_t)(ws+3296);
}
	void f41_fcb_i_open(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */);

// FCBOpenOut workspace at ws+3216 length ws+17
void f44_FCBOpenOut(i1* p642 /* errno */, i8 p643 /* filename */, i8 p644 /* fcb */) {
	*(i8*)(intptr_t)(ws+3216) = p644; /*fcb */
	*(i8*)(intptr_t)(ws+3224) = p643; /*filename */

	i8 v645 = (i8)(intptr_t)(ws+3216);
	i8 v646 = *(i8*)(intptr_t)v645;
	i8 v647 = (i8)(intptr_t)(ws+3224);
	i8 v648 = *(i8*)(intptr_t)v647;
	i4 v649 = (i4)+578;
	i8 v650 = (i8)(intptr_t)(f41_fcb_i_open);
	i1 v651;

	((void(*)(i1* /* errno */, i4 /* flags */, i8 /* filename */, i8 /* fcb */))(intptr_t)v650)(&v651, v649, v648, v646);
	i8 v652 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v652 = v651;

endsub:;
	*p642 = *(i1*)(intptr_t)(ws+3232);
}
	void f39_fcb_i_blockout(i8 /* fcb */);

// FCBClose workspace at ws+3280 length ws+16
void f45_FCBClose(i1* p653 /* errno */, i8 p654 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p654; /*fcb */

	i8 v655 = (i8)(intptr_t)(ws+3280);
	i8 v656 = *(i8*)(intptr_t)v655;
	i8 v657 = (i8)(intptr_t)(f39_fcb_i_blockout);

	((void(*)(i8 /* fcb */))(intptr_t)v657)(v656);

	i8 v658 = (i8)(intptr_t)(ws+3280);
	i8 v659 = *(i8*)(intptr_t)v658;
	i4 v660 = *(i4*)(intptr_t)v659;
	i8 v661 = (i8)(intptr_t)(ws+3292);
	*(i4*)(intptr_t)v661 = v660;


	
errno = 0; 


	
close( 
*(i4*)(intptr_t)(ws+3292) 
); 


	
*(i1*)(intptr_t)(ws+3288) 
 = errno; 



endsub:;
	*p653 = *(i1*)(intptr_t)(ws+3288);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// FCBSeek workspace at ws+3280 length ws+18
void f46_FCBSeek(i4 p662 /* pos */, i8 p663 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p663; /*fcb */
	*(i4*)(intptr_t)(ws+3288) = p662; /*pos */

	i8 v664 = (i8)(intptr_t)(ws+3288);
	i4 v665 = *(i4*)(intptr_t)v664;
	i4 v666 = v665+(-1);
	i8 v667 = (i8)(intptr_t)(ws+3288);
	*(i4*)(intptr_t)v667 = v666;

	i8 v668 = (i8)(intptr_t)(ws+3288);
	i4 v669 = *(i4*)(intptr_t)v668;
	i1 v670 = (i1)+9;
	i4 v671 = ((i4)v669)>>v670;
	i8 v672 = (i8)(intptr_t)(ws+3292);
	*(i4*)(intptr_t)v672 = v671;

	i8 v673 = (i8)(intptr_t)(ws+3288);
	i4 v674 = *(i4*)(intptr_t)v673;
	i2 v675 = v674;
	i2 v676 = v675&(+511);
	i8 v677 = (i8)(intptr_t)(ws+3296);
	*(i2*)(intptr_t)v677 = v676;

	i8 v678 = (i8)(intptr_t)(ws+3280);
	i8 v679 = *(i8*)(intptr_t)v678;
	i8 v680 = (i8)(intptr_t)(ws+3292);
	i4 v681 = *(i4*)(intptr_t)v680;
	i8 v682 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v682)(v681, v679);

	i8 v683 = (i8)(intptr_t)(ws+3296);
	i2 v684 = *(i2*)(intptr_t)v683;
	i8 v685 = (i8)(intptr_t)(ws+3280);
	i8 v686 = *(i8*)(intptr_t)v685;
	i8 v687 = v686+(+4);
	*(i2*)(intptr_t)v687 = v684;

endsub:;
}

// FCBPos workspace at ws+3280 length ws+12
void f47_FCBPos(i4* p688 /* pos */, i8 p689 /* fcb */) {
	*(i8*)(intptr_t)(ws+3280) = p689; /*fcb */

	i8 v690 = (i8)(intptr_t)(ws+3280);
	i8 v691 = *(i8*)(intptr_t)v690;
	i8 v692 = v691+(+8);
	i4 v693 = *(i4*)(intptr_t)v692;
	i1 v694 = (i1)+9;
	i4 v695 = ((i4)v693)<<v694;
	i8 v696 = (i8)(intptr_t)(ws+3280);
	i8 v697 = *(i8*)(intptr_t)v696;
	i8 v698 = v697+(+4);
	i2 v699 = *(i2*)(intptr_t)v698;
	i4 v700 = v699;
	i4 v701 = v695|v700;
	i4 v702 = v701+(+1);
	i8 v703 = (i8)(intptr_t)(ws+3288);
	*(i4*)(intptr_t)v703 = v702;

endsub:;
	*p688 = *(i4*)(intptr_t)(ws+3288);
}
	void f40_fcb_i_changeblock(i4 /* newblock */, i8 /* fcb */);

// fcb_i_nextchar workspace at ws+3496 length ws+8
void f49_fcb_i_nextchar(i8 p718 /* fcb */) {
	*(i8*)(intptr_t)(ws+3496) = p718; /*fcb */

	i8 v719 = (i8)(intptr_t)(ws+3496);
	i8 v720 = *(i8*)(intptr_t)v719;
	i8 v721 = v720+(+4);
	i2 v722 = *(i2*)(intptr_t)v721;
	i2 v723 = v722+(+1);
	i8 v724 = (i8)(intptr_t)(ws+3496);
	i8 v725 = *(i8*)(intptr_t)v724;
	i8 v726 = v725+(+4);
	*(i2*)(intptr_t)v726 = v723;

	i8 v727 = (i8)(intptr_t)(ws+3496);
	i8 v728 = *(i8*)(intptr_t)v727;
	i8 v729 = v728+(+4);
	i2 v730 = *(i2*)(intptr_t)v729;
	i2 v731 = (i2)+512;
	if (v730==v731) goto c02_00a0; else goto c02_00a1;

c02_00a0:;

	i8 v732 = (i8)(intptr_t)(ws+3496);
	i8 v733 = *(i8*)(intptr_t)v732;
	i8 v734 = (i8)(intptr_t)(ws+3496);
	i8 v735 = *(i8*)(intptr_t)v734;
	i8 v736 = v735+(+8);
	i4 v737 = *(i4*)(intptr_t)v736;
	i4 v738 = v737+(+1);
	i8 v739 = (i8)(intptr_t)(f40_fcb_i_changeblock);

	((void(*)(i4 /* newblock */, i8 /* fcb */))(intptr_t)v739)(v738, v733);

	i2 v740 = (i2)+0;
	i8 v741 = (i8)(intptr_t)(ws+3496);
	i8 v742 = *(i8*)(intptr_t)v741;
	i8 v743 = v742+(+4);
	*(i2*)(intptr_t)v743 = v740;

c02_00a1:;

c02_009d:;

endsub:;
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBGetChar workspace at ws+3256 length ws+9
void f50_FCBGetChar(i1* p744 /* c */, i8 p745 /* fcb */) {
	*(i8*)(intptr_t)(ws+3256) = p745; /*fcb */

	i8 v746 = (i8)(intptr_t)(ws+3256);
	i8 v747 = *(i8*)(intptr_t)v746;
	i8 v748 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v748)(v747);

	i8 v749 = (i8)(intptr_t)(ws+3256);
	i8 v750 = *(i8*)(intptr_t)v749;
	i8 v751 = v750+(+12);
	i8 v752 = (i8)(intptr_t)(ws+3256);
	i8 v753 = *(i8*)(intptr_t)v752;
	i8 v754 = v753+(+4);
	i2 v755 = *(i2*)(intptr_t)v754;
	i8 v756 = v755;
	i8 v757 = v751+v756;
	i1 v758 = *(i1*)(intptr_t)v757;
	i8 v759 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v759 = v758;

endsub:;
	*p744 = *(i1*)(intptr_t)(ws+3264);
}
	void f49_fcb_i_nextchar(i8 /* fcb */);

// FCBPutChar workspace at ws+3480 length ws+9
void f51_FCBPutChar(i1 p760 /* c */, i8 p761 /* fcb */) {
	*(i8*)(intptr_t)(ws+3480) = p761; /*fcb */
	*(i1*)(intptr_t)(ws+3488) = p760; /*c */

	i8 v762 = (i8)(intptr_t)(ws+3480);
	i8 v763 = *(i8*)(intptr_t)v762;
	i8 v764 = (i8)(intptr_t)(f49_fcb_i_nextchar);

	((void(*)(i8 /* fcb */))(intptr_t)v764)(v763);

	i8 v765 = (i8)(intptr_t)(ws+3488);
	i1 v766 = *(i1*)(intptr_t)v765;
	i8 v767 = (i8)(intptr_t)(ws+3480);
	i8 v768 = *(i8*)(intptr_t)v767;
	i8 v769 = v768+(+12);
	i8 v770 = (i8)(intptr_t)(ws+3480);
	i8 v771 = *(i8*)(intptr_t)v770;
	i8 v772 = v771+(+4);
	i2 v773 = *(i2*)(intptr_t)v772;
	i8 v774 = v773;
	i8 v775 = v769+v774;
	*(i1*)(intptr_t)v775 = v766;

	i1 v776 = (i1)+1;
	i8 v777 = (i8)(intptr_t)(ws+3480);
	i8 v778 = *(i8*)(intptr_t)v777;
	i8 v779 = v778+(+6);
	*(i1*)(intptr_t)v779 = v776;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupBraced workspace at ws+3392 length ws+32
void f65_StrDupBraced(i8* p850 /* news */, i8 p851 /* s */) {
	*(i8*)(intptr_t)(ws+3392) = p851; /*s */

	i8 v852 = (i8)(intptr_t)(ws+3392);
	i8 v853 = *(i8*)(intptr_t)v852;
	i8 v854 = (i8)(intptr_t)(f28_StrLen);
	i8 v855;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v854)(&v855, v853);
	i8 v856 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v856 = v855;

	i8 v857 = (i8)(intptr_t)(ws+3408);
	i8 v858 = *(i8*)(intptr_t)v857;
	i8 v859 = v858+(+3);
	i8 v860 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v861;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v860)(&v861, v859);
	i8 v862 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v862 = v861;

	i8 v863 = (i8)(intptr_t)(ws+3400);
	i8 v864 = *(i8*)(intptr_t)v863;
	i8 v865 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v865 = v864;

	i1 v866 = (i1)+91;
	i8 v867 = (i8)(intptr_t)(ws+3416);
	i8 v868 = *(i8*)(intptr_t)v867;
	*(i1*)(intptr_t)v868 = v866;

	i8 v869 = (i8)(intptr_t)(ws+3416);
	i8 v870 = *(i8*)(intptr_t)v869;
	i8 v871 = v870+(+1);
	i8 v872 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v872 = v871;

	i8 v873 = (i8)(intptr_t)(ws+3392);
	i8 v874 = *(i8*)(intptr_t)v873;
	i8 v875 = (i8)(intptr_t)(ws+3408);
	i8 v876 = *(i8*)(intptr_t)v875;
	i8 v877 = (i8)(intptr_t)(ws+3416);
	i8 v878 = *(i8*)(intptr_t)v877;
	i8 v879 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v879)(v878, v876, v874);

	i8 v880 = (i8)(intptr_t)(ws+3416);
	i8 v881 = *(i8*)(intptr_t)v880;
	i8 v882 = (i8)(intptr_t)(ws+3408);
	i8 v883 = *(i8*)(intptr_t)v882;
	i8 v884 = v881+v883;
	i8 v885 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v885 = v884;

	i1 v886 = (i1)+93;
	i8 v887 = (i8)(intptr_t)(ws+3416);
	i8 v888 = *(i8*)(intptr_t)v887;
	*(i1*)(intptr_t)v888 = v886;

	i8 v889 = (i8)(intptr_t)(ws+3416);
	i8 v890 = *(i8*)(intptr_t)v889;
	i8 v891 = v890+(+1);
	i8 v892 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v892 = v891;

	i1 v893 = (i1)+0;
	i8 v894 = (i8)(intptr_t)(ws+3416);
	i8 v895 = *(i8*)(intptr_t)v894;
	*(i1*)(intptr_t)v895 = v893;

endsub:;
	*p850 = *(i8*)(intptr_t)(ws+3400);
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// StrDupArrayed workspace at ws+3360 length ws+40
void f66_StrDupArrayed(i8* p896 /* news */, i2 p897 /* i */, i8 p898 /* s */) {
	*(i8*)(intptr_t)(ws+3360) = p898; /*s */
	*(i2*)(intptr_t)(ws+3368) = p897; /*i */

	i8 v899 = (i8)(intptr_t)(ws+3360);
	i8 v900 = *(i8*)(intptr_t)v899;
	i8 v901 = (i8)(intptr_t)(f28_StrLen);
	i8 v902;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v901)(&v902, v900);
	i8 v903 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v903 = v902;

	i8 v904 = (i8)(intptr_t)(ws+3384);
	i8 v905 = *(i8*)(intptr_t)v904;
	i8 v906 = v905+(+3);
	i8 v907 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v908;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v907)(&v908, v906);
	i8 v909 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v909 = v908;

	i8 v910 = (i8)(intptr_t)(ws+3376);
	i8 v911 = *(i8*)(intptr_t)v910;
	i8 v912 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v912 = v911;

	i8 v913 = (i8)(intptr_t)(ws+3360);
	i8 v914 = *(i8*)(intptr_t)v913;
	i8 v915 = (i8)(intptr_t)(ws+3384);
	i8 v916 = *(i8*)(intptr_t)v915;
	i8 v917 = (i8)(intptr_t)(ws+3392);
	i8 v918 = *(i8*)(intptr_t)v917;
	i8 v919 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v919)(v918, v916, v914);

	i8 v920 = (i8)(intptr_t)(ws+3392);
	i8 v921 = *(i8*)(intptr_t)v920;
	i8 v922 = (i8)(intptr_t)(ws+3384);
	i8 v923 = *(i8*)(intptr_t)v922;
	i8 v924 = v921+v923;
	i8 v925 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v925 = v924;

	i1 v926 = (i1)+91;
	i8 v927 = (i8)(intptr_t)(ws+3392);
	i8 v928 = *(i8*)(intptr_t)v927;
	*(i1*)(intptr_t)v928 = v926;

	i8 v929 = (i8)(intptr_t)(ws+3392);
	i8 v930 = *(i8*)(intptr_t)v929;
	i8 v931 = v930+(+1);
	i8 v932 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v932 = v931;

	i1 v933 = (i1)+93;
	i8 v934 = (i8)(intptr_t)(ws+3392);
	i8 v935 = *(i8*)(intptr_t)v934;
	*(i1*)(intptr_t)v935 = v933;

	i8 v936 = (i8)(intptr_t)(ws+3392);
	i8 v937 = *(i8*)(intptr_t)v936;
	i8 v938 = v937+(+1);
	i8 v939 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v939 = v938;

	i1 v940 = (i1)+0;
	i8 v941 = (i8)(intptr_t)(ws+3392);
	i8 v942 = *(i8*)(intptr_t)v941;
	*(i1*)(intptr_t)v942 = v940;

endsub:;
	*p896 = *(i8*)(intptr_t)(ws+3376);
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// InternalStrDup workspace at ws+3368 length ws+24
void f67_InternalStrDup(i8* p943 /* news */, i8 p944 /* s */) {
	*(i8*)(intptr_t)(ws+3368) = p944; /*s */

	i8 v945 = (i8)(intptr_t)(ws+3368);
	i8 v946 = *(i8*)(intptr_t)v945;
	i8 v947 = (i8)(intptr_t)(f28_StrLen);
	i8 v948;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v947)(&v948, v946);
	i8 v949 = v948+(+1);
	i8 v950 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v950 = v949;

	i8 v951 = (i8)(intptr_t)(ws+3384);
	i8 v952 = *(i8*)(intptr_t)v951;
	i8 v953 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v954;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v953)(&v954, v952);
	i8 v955 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v955 = v954;

	i8 v956 = (i8)(intptr_t)(ws+3368);
	i8 v957 = *(i8*)(intptr_t)v956;
	i8 v958 = (i8)(intptr_t)(ws+3384);
	i8 v959 = *(i8*)(intptr_t)v958;
	i8 v960 = (i8)(intptr_t)(ws+3376);
	i8 v961 = *(i8*)(intptr_t)v960;
	i8 v962 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v962)(v961, v959, v957);

endsub:;
	*p943 = *(i8*)(intptr_t)(ws+3376);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewSymbol workspace at ws+3424 length ws+8
void f59_AllocNewSymbol(i8* p965 /* symbol */) {

	i8 v966 = (i8)(intptr_t)(ws+232);
	i8 v967 = *(i8*)(intptr_t)v966;
	i8 v968 = (i8)+0;
	if (v967==v968) goto c02_00b9; else goto c02_00b8;

c02_00b8:;

	i8 v969 = (i8)(intptr_t)(ws+232);
	i8 v970 = *(i8*)(intptr_t)v969;
	i8 v971 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v971 = v970;

	i8 v972 = (i8)(intptr_t)(ws+232);
	i8 v973 = *(i8*)(intptr_t)v972;
	i8 v974 = v973+(+24);
	i8 v975 = *(i8*)(intptr_t)v974;
	i8 v976 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v976 = v975;

	i8 v977 = (i8)(intptr_t)(ws+3424);
	i8 v978 = *(i8*)(intptr_t)v977;
	i1 v979 = (i1)+0;
	i8 v980 = (i8)+33;
	i8 v981 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v981)(v980, v979, v978);

	goto c02_00b5;

c02_00b9:;

	i8 v982 = (i8)+33;
	i8 v983 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v984;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v983)(&v984, v982);
	i8 v985 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v985 = v984;

c02_00b5:;

endsub:;
	*p965 = *(i8*)(intptr_t)(ws+3424);
}

// FreeSymbol workspace at ws+3384 length ws+8
void f60_FreeSymbol(i8 p986 /* symbol */) {
	*(i8*)(intptr_t)(ws+3384) = p986; /*symbol */

	i8 v987 = (i8)(intptr_t)(ws+232);
	i8 v988 = *(i8*)(intptr_t)v987;
	i8 v989 = (i8)(intptr_t)(ws+3384);
	i8 v990 = *(i8*)(intptr_t)v989;
	i8 v991 = v990+(+24);
	*(i8*)(intptr_t)v991 = v988;

	i8 v992 = (i8)(intptr_t)(ws+3384);
	i8 v993 = *(i8*)(intptr_t)v992;
	i8 v994 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v994 = v993;

endsub:;
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocNewType workspace at ws+3392 length ws+8
void f61_AllocNewType(i8* p997 /* type */) {

	i8 v998 = (i8)(intptr_t)(ws+240);
	i8 v999 = *(i8*)(intptr_t)v998;
	i8 v1000 = (i8)+0;
	if (v999==v1000) goto c02_00be; else goto c02_00bd;

c02_00bd:;

	i8 v1001 = (i8)(intptr_t)(ws+240);
	i8 v1002 = *(i8*)(intptr_t)v1001;
	i8 v1003 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1003 = v1002;

	i8 v1004 = (i8)(intptr_t)(ws+240);
	i8 v1005 = *(i8*)(intptr_t)v1004;
	i8 v1006 = v1005+(+40);
	i8 v1007 = *(i8*)(intptr_t)v1006;
	i8 v1008 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1008 = v1007;

	i8 v1009 = (i8)(intptr_t)(ws+3392);
	i8 v1010 = *(i8*)(intptr_t)v1009;
	i1 v1011 = (i1)+0;
	i8 v1012 = (i8)+54;
	i8 v1013 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v1013)(v1012, v1011, v1010);

	goto c02_00ba;

c02_00be:;

	i8 v1014 = (i8)+54;
	i8 v1015 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v1016;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1015)(&v1016, v1014);
	i8 v1017 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v1017 = v1016;

c02_00ba:;

endsub:;
	*p997 = *(i8*)(intptr_t)(ws+3392);
}

// FreeType workspace at ws+3384 length ws+8
void f62_FreeType(i8 p1018 /* type */) {
	*(i8*)(intptr_t)(ws+3384) = p1018; /*type */

	i8 v1019 = (i8)(intptr_t)(ws+240);
	i8 v1020 = *(i8*)(intptr_t)v1019;
	i8 v1021 = (i8)(intptr_t)(ws+3384);
	i8 v1022 = *(i8*)(intptr_t)v1021;
	i8 v1023 = v1022+(+40);
	*(i8*)(intptr_t)v1023 = v1020;

	i8 v1024 = (i8)(intptr_t)(ws+3384);
	i8 v1025 = *(i8*)(intptr_t)v1024;
	i8 v1026 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1026 = v1025;

endsub:;
}
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);
	void f68_PurgeAllFreeNodes(void);
	void f31_RawAlloc(i8* /* block */, i8 /* length */);
const i1 c02_s0001[] = { 0x4f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// InternalAlloc workspace at ws+3456 length ws+16
void f64_InternalAlloc(i8* p1027 /* block */, i8 p1028 /* length */) {
	*(i8*)(intptr_t)(ws+3456) = p1028; /*length */

	i8 v1029 = (i8)(intptr_t)(ws+3456);
	i8 v1030 = *(i8*)(intptr_t)v1029;
	i8 v1031 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v1032;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1031)(&v1032, v1030);
	i8 v1033 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1033 = v1032;

	i8 v1034 = (i8)(intptr_t)(ws+3464);
	i8 v1035 = *(i8*)(intptr_t)v1034;
	i8 v1036 = (i8)+0;
	if (v1035==v1036) goto c02_00c2; else goto c02_00c3;

c02_00c2:;

c02_00c6:;

	i8 v1037 = (i8)(intptr_t)(ws+232);
	i8 v1038 = *(i8*)(intptr_t)v1037;
	i8 v1039 = (i8)+0;
	if (v1038==v1039) goto c02_00c9; else goto c02_00c8;

c02_00c8:;

	i8 v1040 = (i8)(intptr_t)(ws+232);
	i8 v1041 = *(i8*)(intptr_t)v1040;
	i8 v1042 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1042 = v1041;

	i8 v1043 = (i8)(intptr_t)(ws+232);
	i8 v1044 = *(i8*)(intptr_t)v1043;
	i8 v1045 = v1044+(+24);
	i8 v1046 = *(i8*)(intptr_t)v1045;
	i8 v1047 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v1047 = v1046;

	i8 v1048 = (i8)(intptr_t)(ws+3464);
	i8 v1049 = *(i8*)(intptr_t)v1048;
	i8 v1050 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1050)(v1049);

	goto c02_00c6;

c02_00c9:;

c02_00cc:;

	i8 v1051 = (i8)(intptr_t)(ws+240);
	i8 v1052 = *(i8*)(intptr_t)v1051;
	i8 v1053 = (i8)+0;
	if (v1052==v1053) goto c02_00cf; else goto c02_00ce;

c02_00ce:;

	i8 v1054 = (i8)(intptr_t)(ws+240);
	i8 v1055 = *(i8*)(intptr_t)v1054;
	i8 v1056 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1056 = v1055;

	i8 v1057 = (i8)(intptr_t)(ws+240);
	i8 v1058 = *(i8*)(intptr_t)v1057;
	i8 v1059 = v1058+(+40);
	i8 v1060 = *(i8*)(intptr_t)v1059;
	i8 v1061 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v1061 = v1060;

	i8 v1062 = (i8)(intptr_t)(ws+3464);
	i8 v1063 = *(i8*)(intptr_t)v1062;
	i8 v1064 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1064)(v1063);

	goto c02_00cc;

c02_00cf:;

	i8 v1065 = (i8)(intptr_t)(f68_PurgeAllFreeNodes);

	((void(*)(void))(intptr_t)v1065)();

	i8 v1066 = (i8)(intptr_t)(ws+3456);
	i8 v1067 = *(i8*)(intptr_t)v1066;
	i8 v1068 = (i8)(intptr_t)(f31_RawAlloc);
	i8 v1069;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1068)(&v1069, v1067);
	i8 v1070 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v1070 = v1069;

	i8 v1071 = (i8)(intptr_t)(ws+3464);
	i8 v1072 = *(i8*)(intptr_t)v1071;
	i8 v1073 = (i8)+0;
	if (v1072==v1073) goto c02_00d3; else goto c02_00d4;

c02_00d3:;

	i8 v1074 = (i8)(intptr_t)c02_s0001;
	i8 v1075 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1075)(v1074);

	i8 v1076 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1076)();

c02_00d4:;

c02_00d0:;

c02_00c3:;

c02_00bf:;

endsub:;
	*p1027 = *(i8*)(intptr_t)(ws+3464);
}
static data f3___main_s00d5[] = {








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
static data f3___main_s00d6[] = {

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
static data f3___main_s00d7[] = {








	{ .i1 = { 0x43,0x01,0x23,0x24,0x2b,0x0b,0x3e,0x2a}},








	{ .i1 = { 0x28,0x3c,0x3d,0x2e,0x3a,0x03,0x40,0x07}},








	{ .i1 = { 0x3f,0x09,0x25,0x0a,0x0b,0x0c,0x41,0xff}},








	{ .i1 = { 0x26,0x2c,0x44,0x0d,0x0f,0x2f,0x14,0x15}},







	{ .i1 = { 0x19,0x1a,0x27,0x1c,0x42,0x1d}},
};
const i1 c02_s0028[] = { 0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
const i1 c02_s0029[] = { 0x3c,0x65,0x6f,0x66,0x3e,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s002a[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s002b[] = { 0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);

// StartError workspace at ws+3488 length ws+0
void f69_StartError(void) {

	i8 v1085 = (i8)(intptr_t)c02_s0028;
	i8 v1086 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1086)(v1085);

	i8 v1087 = (i8)(intptr_t)(ws+256);
	i8 v1088 = *(i8*)(intptr_t)v1087;
	i8 v1089 = (i8)+0;
	if (v1088==v1089) goto c02_00db; else goto c02_00dc;

c02_00db:;

	i8 v1090 = (i8)(intptr_t)c02_s0029;
	i8 v1091 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1091)(v1090);

	goto c02_00d8;

c02_00dc:;

	i8 v1092 = (i8)(intptr_t)(ws+256);
	i8 v1093 = *(i8*)(intptr_t)v1092;
	i8 v1094 = v1093+(+8);
	i8 v1095 = *(i8*)(intptr_t)v1094;
	i8 v1096 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1096)(v1095);

	i8 v1097 = (i8)(intptr_t)c02_s002a;
	i8 v1098 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1098)(v1097);

	i8 v1099 = (i8)(intptr_t)(ws+256);
	i8 v1100 = *(i8*)(intptr_t)v1099;
	i8 v1101 = v1100+(+16);
	i2 v1102 = *(i2*)(intptr_t)v1101;
	i8 v1103 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v1103)(v1102);

c02_00d8:;

	i8 v1104 = (i8)(intptr_t)c02_s002b;
	i8 v1105 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1105)(v1104);

endsub:;
}
	void f12_print_nl(void);
	void f6_ExitWithError(void);

// EndError workspace at ws+3488 length ws+0
void f70_EndError(void) {

	i8 v1106 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1106)();

	i8 v1107 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v1107)();

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// SimpleError workspace at ws+3480 length ws+8
void f71_SimpleError(i8 p1108 /* message */) {
	*(i8*)(intptr_t)(ws+3480) = p1108; /*message */

	i8 v1109 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1109)();

	i8 v1110 = (i8)(intptr_t)(ws+3480);
	i8 v1111 = *(i8*)(intptr_t)v1110;
	i8 v1112 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1112)(v1111);

	i8 v1113 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1113)();

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// LexerAddIncludePath workspace at ws+3216 length ws+16
void f72_LexerAddIncludePath(i8 p1114 /* path */) {
	*(i8*)(intptr_t)(ws+3216) = p1114; /*path */

	i8 v1115 = (i8)+16;
	i8 v1116 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v1117;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1116)(&v1117, v1115);
	i8 v1118 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v1118 = v1117;

	i8 v1119 = (i8)(intptr_t)(ws+248);
	i8 v1120 = *(i8*)(intptr_t)v1119;
	i8 v1121 = (i8)(intptr_t)(ws+3224);
	i8 v1122 = *(i8*)(intptr_t)v1121;
	*(i8*)(intptr_t)v1122 = v1120;

	i8 v1123 = (i8)(intptr_t)(ws+3216);
	i8 v1124 = *(i8*)(intptr_t)v1123;
	i8 v1125 = (i8)(intptr_t)(ws+3224);
	i8 v1126 = *(i8*)(intptr_t)v1125;
	i8 v1127 = v1126+(+8);
	*(i8*)(intptr_t)v1127 = v1124;

	i8 v1128 = (i8)(intptr_t)(ws+3224);
	i8 v1129 = *(i8*)(intptr_t)v1128;
	i8 v1130 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1130 = v1129;

endsub:;
}
const i1 c02_s002c[] = { 0x20,0x20,0 };
	void f11_print(i8 /* ptr */);

// LexerPrintSpaces workspace at ws+3264 length ws+1
void f73_LexerPrintSpaces(void) {

	i8 v1133 = (i8)(intptr_t)(ws+924);
	i1 v1134 = *(i1*)(intptr_t)v1133;
	i8 v1135 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1135 = v1134;

c02_00df:;

	i8 v1136 = (i8)(intptr_t)(ws+3264);
	i1 v1137 = *(i1*)(intptr_t)v1136;
	i1 v1138 = (i1)+0;
	if (v1137==v1138) goto c02_00e2; else goto c02_00e1;

c02_00e1:;

	i8 v1139 = (i8)(intptr_t)c02_s002c;
	i8 v1140 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1140)(v1139);

	i8 v1141 = (i8)(intptr_t)(ws+3264);
	i1 v1142 = *(i1*)(intptr_t)v1141;
	i1 v1143 = v1142+(-1);
	i8 v1144 = (i8)(intptr_t)(ws+3264);
	*(i1*)(intptr_t)v1144 = v1143;

	goto c02_00df;

c02_00e2:;

endsub:;
}
	void f42_FCBOpenIn(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
	void f46_FCBSeek(i4 /* pos */, i8 /* fcb */);

// lexer_i_open workspace at ws+3264 length ws+9
void f74_lexer_i_open(i1* p1145 /* result */, i8 p1146 /* file */) {
	*(i8*)(intptr_t)(ws+3264) = p1146; /*file */

	i8 v1147 = (i8)(intptr_t)(ws+400);
	i8 v1148 = (i8)(intptr_t)(ws+3264);
	i8 v1149 = *(i8*)(intptr_t)v1148;
	i8 v1150 = v1149+(+8);
	i8 v1151 = *(i8*)(intptr_t)v1150;
	i8 v1152 = (i8)(intptr_t)(f42_FCBOpenIn);
	i1 v1153;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v1152)(&v1153, v1151, v1147);
	i1 v1154 = (i1)+0;
	if (v1153==v1154) goto c02_00e6; else goto c02_00e7;

c02_00e6:;

	i8 v1155 = (i8)(intptr_t)(ws+400);
	i8 v1156 = (i8)(intptr_t)(ws+3264);
	i8 v1157 = *(i8*)(intptr_t)v1156;
	i8 v1158 = v1157+(+20);
	i4 v1159 = *(i4*)(intptr_t)v1158;
	i8 v1160 = (i8)(intptr_t)(f46_FCBSeek);

	((void(*)(i4 /* pos */, i8 /* fcb */))(intptr_t)v1160)(v1159, v1155);

	i1 v1161 = (i1)+0;
	i8 v1162 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v1162 = v1161;

	goto c02_00e3;

c02_00e7:;

	i1 v1163 = (i1)+1;
	i8 v1164 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v1164 = v1163;

c02_00e3:;

endsub:;
	*p1145 = *(i1*)(intptr_t)(ws+3272);
}
	void f47_FCBPos(i4* /* pos */, i8 /* fcb */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);

// lexer_i_close workspace at ws+3264 length ws+9
void f75_lexer_i_close(i8 p1165 /* file */) {
	*(i8*)(intptr_t)(ws+3264) = p1165; /*file */

	i8 v1166 = (i8)(intptr_t)(ws+400);
	i8 v1167 = (i8)(intptr_t)(f47_FCBPos);
	i4 v1168;

	((void(*)(i4* /* pos */, i8 /* fcb */))(intptr_t)v1167)(&v1168, v1166);
	i8 v1169 = (i8)(intptr_t)(ws+3264);
	i8 v1170 = *(i8*)(intptr_t)v1169;
	i8 v1171 = v1170+(+20);
	*(i4*)(intptr_t)v1171 = v1168;

	i8 v1172 = (i8)(intptr_t)(ws+400);
	i8 v1173 = (i8)(intptr_t)(f45_FCBClose);
	i1 v1174;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v1173)(&v1174, v1172);
	i8 v1175 = (i8)(intptr_t)(ws+3272);
	*(i1*)(intptr_t)v1175 = v1174;

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f75_lexer_i_close(i8 /* file */);
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);
	void f74_lexer_i_open(i1* /* result */, i8 /* file */);
	void f73_LexerPrintSpaces(void);
const i1 c02_s002d[] = { 0x3e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f33_Free(i8 /* block */);
	void f69_StartError(void);
const i1 c02_s002e[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s002f[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// LexerIncludeFile workspace at ws+3224 length ws+40
void f76_LexerIncludeFile(i8 p1176 /* path */) {
	*(i8*)(intptr_t)(ws+3224) = p1176; /*path */

	i8 v1177 = (i8)+24;
	i8 v1178 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v1179;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1178)(&v1179, v1177);
	i8 v1180 = (i8)(intptr_t)(ws+3232);
	*(i8*)(intptr_t)v1180 = v1179;

	i8 v1181 = (i8)(intptr_t)(ws+256);
	i8 v1182 = *(i8*)(intptr_t)v1181;
	i8 v1183 = (i8)(intptr_t)(ws+3232);
	i8 v1184 = *(i8*)(intptr_t)v1183;
	*(i8*)(intptr_t)v1184 = v1182;

	i2 v1185 = (i2)+1;
	i8 v1186 = (i8)(intptr_t)(ws+3232);
	i8 v1187 = *(i8*)(intptr_t)v1186;
	i8 v1188 = v1187+(+16);
	*(i2*)(intptr_t)v1188 = v1185;

	i8 v1189 = (i8)(intptr_t)(ws+256);
	i8 v1190 = *(i8*)(intptr_t)v1189;
	i8 v1191 = (i8)+0;
	if (v1190==v1191) goto c02_00ec; else goto c02_00eb;

c02_00eb:;

	i8 v1192 = (i8)(intptr_t)(ws+256);
	i8 v1193 = *(i8*)(intptr_t)v1192;
	i8 v1194 = (i8)(intptr_t)(f75_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1194)(v1193);

c02_00ec:;

c02_00e8:;

	i8 v1195 = (i8)(intptr_t)(ws+248);
	i8 v1196 = *(i8*)(intptr_t)v1195;
	i8 v1197 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v1197 = v1196;

	i8 v1198 = (i8)(intptr_t)(ws+3224);
	i8 v1199 = *(i8*)(intptr_t)v1198;
	i8 v1200 = (i8)(intptr_t)(f28_StrLen);
	i8 v1201;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1200)(&v1201, v1199);
	i8 v1202 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v1202 = v1201;

c02_00ef:;

	i8 v1203 = (i8)(intptr_t)(ws+3240);
	i8 v1204 = *(i8*)(intptr_t)v1203;
	i8 v1205 = (i8)+0;
	if (v1204==v1205) goto c02_00f2; else goto c02_00f1;

c02_00f1:;

	i8 v1206 = (i8)(intptr_t)(ws+3240);
	i8 v1207 = *(i8*)(intptr_t)v1206;
	i8 v1208 = v1207+(+8);
	i8 v1209 = *(i8*)(intptr_t)v1208;
	i8 v1210 = (i8)(intptr_t)(f28_StrLen);
	i8 v1211;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v1210)(&v1211, v1209);
	i8 v1212 = (i8)(intptr_t)(ws+3256);
	*(i8*)(intptr_t)v1212 = v1211;

	i8 v1213 = (i8)(intptr_t)(ws+3248);
	i8 v1214 = *(i8*)(intptr_t)v1213;
	i8 v1215 = (i8)(intptr_t)(ws+3256);
	i8 v1216 = *(i8*)(intptr_t)v1215;
	i8 v1217 = v1214+v1216;
	i8 v1218 = v1217+(+1);
	i8 v1219 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v1220;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v1219)(&v1220, v1218);
	i8 v1221 = (i8)(intptr_t)(ws+3232);
	i8 v1222 = *(i8*)(intptr_t)v1221;
	i8 v1223 = v1222+(+8);
	*(i8*)(intptr_t)v1223 = v1220;

	i8 v1224 = (i8)(intptr_t)(ws+3240);
	i8 v1225 = *(i8*)(intptr_t)v1224;
	i8 v1226 = v1225+(+8);
	i8 v1227 = *(i8*)(intptr_t)v1226;
	i8 v1228 = (i8)(intptr_t)(ws+3256);
	i8 v1229 = *(i8*)(intptr_t)v1228;
	i8 v1230 = (i8)(intptr_t)(ws+3232);
	i8 v1231 = *(i8*)(intptr_t)v1230;
	i8 v1232 = v1231+(+8);
	i8 v1233 = *(i8*)(intptr_t)v1232;
	i8 v1234 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1234)(v1233, v1229, v1227);

	i8 v1235 = (i8)(intptr_t)(ws+3224);
	i8 v1236 = *(i8*)(intptr_t)v1235;
	i8 v1237 = (i8)(intptr_t)(ws+3248);
	i8 v1238 = *(i8*)(intptr_t)v1237;
	i8 v1239 = v1238+(+1);
	i8 v1240 = (i8)(intptr_t)(ws+3232);
	i8 v1241 = *(i8*)(intptr_t)v1240;
	i8 v1242 = v1241+(+8);
	i8 v1243 = *(i8*)(intptr_t)v1242;
	i8 v1244 = (i8)(intptr_t)(ws+3256);
	i8 v1245 = *(i8*)(intptr_t)v1244;
	i8 v1246 = v1243+v1245;
	i8 v1247 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v1247)(v1246, v1239, v1236);

	i8 v1248 = (i8)(intptr_t)(ws+3232);
	i8 v1249 = *(i8*)(intptr_t)v1248;
	i8 v1250 = (i8)(intptr_t)(f74_lexer_i_open);
	i1 v1251;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1250)(&v1251, v1249);
	i1 v1252 = (i1)+0;
	if (v1251==v1252) goto c02_00f6; else goto c02_00f7;

c02_00f6:;

	i8 v1253 = (i8)(intptr_t)(ws+924);
	i1 v1254 = *(i1*)(intptr_t)v1253;
	i1 v1255 = v1254+(+1);
	i8 v1256 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v1256 = v1255;

	i8 v1257 = (i8)(intptr_t)(f73_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1257)();

	i8 v1258 = (i8)(intptr_t)c02_s002d;
	i8 v1259 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1259)(v1258);

	i8 v1260 = (i8)(intptr_t)(ws+3232);
	i8 v1261 = *(i8*)(intptr_t)v1260;
	i8 v1262 = v1261+(+8);
	i8 v1263 = *(i8*)(intptr_t)v1262;
	i8 v1264 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1264)(v1263);

	i8 v1265 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1265)();

	i8 v1266 = (i8)(intptr_t)(ws+3232);
	i8 v1267 = *(i8*)(intptr_t)v1266;
	i8 v1268 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1268 = v1267;

	goto endsub;

c02_00f7:;

c02_00f3:;

	i8 v1269 = (i8)(intptr_t)(ws+3232);
	i8 v1270 = *(i8*)(intptr_t)v1269;
	i8 v1271 = v1270+(+8);
	i8 v1272 = *(i8*)(intptr_t)v1271;
	i8 v1273 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1273)(v1272);

	i8 v1274 = (i8)(intptr_t)(ws+3240);
	i8 v1275 = *(i8*)(intptr_t)v1274;
	i8 v1276 = *(i8*)(intptr_t)v1275;
	i8 v1277 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v1277 = v1276;

	goto c02_00ef;

c02_00f2:;

	i8 v1278 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1278)();

	i8 v1279 = (i8)(intptr_t)c02_s002e;
	i8 v1280 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1280)(v1279);

	i8 v1281 = (i8)(intptr_t)(ws+3224);
	i8 v1282 = *(i8*)(intptr_t)v1281;
	i8 v1283 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1283)(v1282);

	i8 v1284 = (i8)(intptr_t)c02_s002f;
	i8 v1285 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1285)(v1284);

	i8 v1286 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1286)();

endsub:;
}

// lexer_i_ctype workspace at ws+3232 length ws+3
void f78_lexer_i_ctype(i1* p1288 /* type */, i1* p1289 /* token */, i1 p1290 /* c */) {
	*(i1*)(intptr_t)(ws+3232) = p1290; /*c */

	i8 v1291 = (i8)(intptr_t)(ws+3232);
	i1 v1292 = *(i1*)(intptr_t)v1291;
	i1 v1293 = (i1)+33;
	if (v1292<v1293) goto c02_00fe; else goto c02_00ff;

c02_00ff:;

	i1 v1294 = (i1)+127;
	i8 v1295 = (i8)(intptr_t)(ws+3232);
	i1 v1296 = *(i1*)(intptr_t)v1295;
	if (v1294<v1296) goto c02_00fe; else goto c02_00fd;

c02_00fd:;

	i8 v1297 = (i8)(intptr_t)((i1*)f3___main_s00d5);
	i8 v1298 = (i8)(intptr_t)(ws+3232);
	i1 v1299 = *(i1*)(intptr_t)v1298;
	i1 v1300 = v1299+(-33);
	i8 v1301 = v1300;
	i8 v1302 = v1297+v1301;
	i1 v1303 = *(i1*)(intptr_t)v1302;
	i8 v1304 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v1304 = v1303;

	i8 v1305 = (i8)(intptr_t)(ws+3233);
	i1 v1306 = *(i1*)(intptr_t)v1305;
	i1 v1307 = v1306&(+128);
	i1 v1308 = (i1)+0;
	if (v1307==v1308) goto c02_0104; else goto c02_0103;

c02_0103:;

	i8 v1309 = (i8)(intptr_t)(ws+3233);
	i1 v1310 = *(i1*)(intptr_t)v1309;
	i1 v1311 = v1310&(-129);
	i8 v1312 = (i8)(intptr_t)(ws+3234);
	*(i1*)(intptr_t)v1312 = v1311;

	i1 v1313 = (i1)+128;
	i8 v1314 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v1314 = v1313;

c02_0104:;

c02_0100:;

	goto c02_00f8;

c02_00fe:;

	i1 v1315 = (i1)+0;
	i8 v1316 = (i8)(intptr_t)(ws+3233);
	*(i1*)(intptr_t)v1316 = v1315;

	i1 v1317 = (i1)+0;
	i8 v1318 = (i8)(intptr_t)(ws+3234);
	*(i1*)(intptr_t)v1318 = v1317;

c02_00f8:;

endsub:;
	*p1289 = *(i1*)(intptr_t)(ws+3234);
	*p1288 = *(i1*)(intptr_t)(ws+3233);
}
	void f50_FCBGetChar(i1* /* c */, i8 /* fcb */);
	void f75_lexer_i_close(i8 /* file */);
	void f33_Free(i8 /* block */);
	void f73_LexerPrintSpaces(void);
const i1 c02_s0030[] = { 0x3c,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f12_print_nl(void);
	void f74_lexer_i_open(i1* /* result */, i8 /* file */);
const i1 c02_s0031[] = { 0x49,0x2f,0x4f,0x20,0x65,0x72,0x72,0x6f,0x72,0 };
	void f71_SimpleError(i8 /* message */);

// lexer_i_getchar workspace at ws+3240 length ws+16
void f79_lexer_i_getchar(i1* p1319 /* c */) {

	i8 v1320 = (i8)(intptr_t)(ws+264);
	i1 v1321 = *(i1*)(intptr_t)v1320;
	i1 v1322 = (i1)+0;
	if (v1321==v1322) goto c02_0109; else goto c02_0108;

c02_0108:;

	i8 v1323 = (i8)(intptr_t)(ws+264);
	i1 v1324 = *(i1*)(intptr_t)v1323;
	i8 v1325 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1325 = v1324;

	i1 v1326 = (i1)+0;
	i8 v1327 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1327 = v1326;

	goto endsub;

c02_0109:;

c02_0105:;

c02_010a:;

	i8 v1328 = (i8)(intptr_t)(ws+256);
	i8 v1329 = *(i8*)(intptr_t)v1328;
	i8 v1330 = (i8)+0;
	if (v1329==v1330) goto c02_010f; else goto c02_0110;

c02_010f:;

	i1 v1331 = (i1)+0;
	i8 v1332 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1332 = v1331;

	goto c02_010b;

c02_0110:;

c02_010c:;

	i8 v1333 = (i8)(intptr_t)(ws+256);
	i8 v1334 = *(i8*)(intptr_t)v1333;
	i8 v1335 = (i8)(intptr_t)(ws+3248);
	*(i8*)(intptr_t)v1335 = v1334;

	i8 v1336 = (i8)(intptr_t)(ws+400);
	i8 v1337 = (i8)(intptr_t)(f50_FCBGetChar);
	i1 v1338;

	((void(*)(i1* /* c */, i8 /* fcb */))(intptr_t)v1337)(&v1338, v1336);
	i8 v1339 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1339 = v1338;

	i8 v1340 = (i8)(intptr_t)(ws+3240);
	i1 v1341 = *(i1*)(intptr_t)v1340;
	i1 v1342 = (i1)+26;
	if (v1341==v1342) goto c02_0114; else goto c02_0115;

c02_0114:;

	i1 v1343 = (i1)+0;
	i8 v1344 = (i8)(intptr_t)(ws+3240);
	*(i1*)(intptr_t)v1344 = v1343;

c02_0115:;

c02_0111:;

	i8 v1345 = (i8)(intptr_t)(ws+3240);
	i1 v1346 = *(i1*)(intptr_t)v1345;
	i1 v1347 = (i1)+0;
	if (v1346==v1347) goto c02_011a; else goto c02_0119;

c02_0119:;

	goto c02_010b;

c02_011a:;

c02_0116:;

	i8 v1348 = (i8)(intptr_t)(ws+3248);
	i8 v1349 = *(i8*)(intptr_t)v1348;
	i8 v1350 = *(i8*)(intptr_t)v1349;
	i8 v1351 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1351 = v1350;

	i8 v1352 = (i8)(intptr_t)(ws+3248);
	i8 v1353 = *(i8*)(intptr_t)v1352;
	i8 v1354 = (i8)(intptr_t)(f75_lexer_i_close);

	((void(*)(i8 /* file */))(intptr_t)v1354)(v1353);

	i8 v1355 = (i8)(intptr_t)(ws+3248);
	i8 v1356 = *(i8*)(intptr_t)v1355;
	i8 v1357 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1357)(v1356);

	i8 v1358 = (i8)(intptr_t)(ws+256);
	i8 v1359 = *(i8*)(intptr_t)v1358;
	i8 v1360 = (i8)+0;
	if (v1359==v1360) goto c02_011f; else goto c02_011e;

c02_011e:;

	i8 v1361 = (i8)(intptr_t)(ws+924);
	i1 v1362 = *(i1*)(intptr_t)v1361;
	i1 v1363 = v1362+(-1);
	i8 v1364 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v1364 = v1363;

	i8 v1365 = (i8)(intptr_t)(f73_LexerPrintSpaces);

	((void(*)(void))(intptr_t)v1365)();

	i8 v1366 = (i8)(intptr_t)c02_s0030;
	i8 v1367 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1367)(v1366);

	i8 v1368 = (i8)(intptr_t)(ws+256);
	i8 v1369 = *(i8*)(intptr_t)v1368;
	i8 v1370 = v1369+(+8);
	i8 v1371 = *(i8*)(intptr_t)v1370;
	i8 v1372 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1372)(v1371);

	i8 v1373 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v1373)();

	i8 v1374 = (i8)(intptr_t)(ws+256);
	i8 v1375 = *(i8*)(intptr_t)v1374;
	i8 v1376 = (i8)(intptr_t)(f74_lexer_i_open);
	i1 v1377;

	((void(*)(i1* /* result */, i8 /* file */))(intptr_t)v1376)(&v1377, v1375);
	i1 v1378 = (i1)+0;
	if (v1377==v1378) goto c02_0124; else goto c02_0123;

c02_0123:;

	i8 v1379 = (i8)(intptr_t)c02_s0031;
	i8 v1380 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v1380)(v1379);

c02_0124:;

c02_0120:;

c02_011f:;

c02_011b:;

	goto c02_010a;

c02_010b:;

endsub:;
	*p1319 = *(i1*)(intptr_t)(ws+3240);
}
	void f69_StartError(void);
const i1 c02_s0032[] = { 0x75,0x6e,0x70,0x61,0x72,0x73,0x65,0x61,0x62,0x6c,0x65,0x20,0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x30,0x78,0 };
	void f11_print(i8 /* ptr */);
	void f18_print_hex_i8(i1 /* value */);
	void f70_EndError(void);

// lexer_i_unparseable workspace at ws+3216 length ws+1
void f80_lexer_i_unparseable(i1 p1381 /* c */) {
	*(i1*)(intptr_t)(ws+3216) = p1381; /*c */

	i8 v1382 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1382)();

	i8 v1383 = (i8)(intptr_t)c02_s0032;
	i8 v1384 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1384)(v1383);

	i8 v1385 = (i8)(intptr_t)(ws+3216);
	i1 v1386 = *(i1*)(intptr_t)v1385;
	i8 v1387 = (i8)(intptr_t)(f18_print_hex_i8);

	((void(*)(i1 /* value */))(intptr_t)v1387)(v1386);

	i8 v1388 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1388)();

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);

// lexer_i_skipwhitespace workspace at ws+3224 length ws+1
void f81_lexer_i_skipwhitespace(void) {

c02_0125:;

	i8 v1389 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1390;

	((void(*)(i1* /* c */))(intptr_t)v1389)(&v1390);
	i8 v1391 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v1391 = v1390;

	i8 v1392 = (i8)(intptr_t)(ws+3224);
	i1 v1393 = *(i1*)(intptr_t)v1392;

	if (v1393 != +32) goto c02_0128;

	goto c02_0127;

c02_0128:;

	if (v1393 != +13) goto c02_0129;

	goto c02_0127;

c02_0129:;

	if (v1393 != +10) goto c02_012a;

	i8 v1394 = (i8)(intptr_t)(ws+256);
	i8 v1395 = *(i8*)(intptr_t)v1394;
	i8 v1396 = v1395+(+16);
	i2 v1397 = *(i2*)(intptr_t)v1396;
	i2 v1398 = v1397+(+1);
	i8 v1399 = (i8)(intptr_t)(ws+256);
	i8 v1400 = *(i8*)(intptr_t)v1399;
	i8 v1401 = v1400+(+16);
	*(i2*)(intptr_t)v1401 = v1398;

	goto c02_0127;

c02_012a:;

	if (v1393 != +9) goto c02_012b;

	goto c02_0127;

c02_012b:;

	goto c02_0126;

c02_0127:;


	goto c02_0125;

c02_0126:;

	i8 v1402 = (i8)(intptr_t)(ws+3224);
	i1 v1403 = *(i1*)(intptr_t)v1402;
	i8 v1404 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1404 = v1403;

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f69_StartError(void);
const i1 c02_s0033[] = { 0x74,0x6f,0x6b,0x65,0x6e,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_read_identifier workspace at ws+3216 length ws+3
void f82_lexer_i_read_identifier(void) {

c02_012c:;

	i8 v1405 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1406;

	((void(*)(i1* /* c */))(intptr_t)v1405)(&v1406);
	i8 v1407 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1407 = v1406;

	i8 v1408 = (i8)(intptr_t)(ws+3216);
	i1 v1409 = *(i1*)(intptr_t)v1408;
	i8 v1410 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1411;
	i1 v1412;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1410)(&v1411, &v1412, v1409);

	i8 v1413 = (i8)(intptr_t)(ws+3218);
	*(i1*)(intptr_t)v1413 = v1412;

	i8 v1414 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v1414 = v1411;

	i8 v1415 = (i8)(intptr_t)(ws+3217);
	i1 v1416 = *(i1*)(intptr_t)v1415;
	i1 v1417 = v1416&(+32);
	i1 v1418 = (i1)+0;
	if (v1417==v1418) goto c02_0132; else goto c02_0131;

c02_0131:;

	i8 v1419 = (i8)(intptr_t)(ws+3216);
	i1 v1420 = *(i1*)(intptr_t)v1419;
	i8 v1421 = (i8)(intptr_t)(ws+265);
	i8 v1422 = (i8)(intptr_t)(ws+393);
	i1 v1423 = *(i1*)(intptr_t)v1422;
	i8 v1424 = v1423;
	i8 v1425 = v1421+v1424;
	*(i1*)(intptr_t)v1425 = v1420;

	i8 v1426 = (i8)(intptr_t)(ws+393);
	i1 v1427 = *(i1*)(intptr_t)v1426;
	i1 v1428 = v1427+(+1);
	i8 v1429 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1429 = v1428;

	i8 v1430 = (i8)(intptr_t)(ws+393);
	i1 v1431 = *(i1*)(intptr_t)v1430;
	i1 v1432 = (i1)+128;
	if (v1431==v1432) goto c02_0136; else goto c02_0137;

c02_0136:;

	i8 v1433 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1433)();

	i8 v1434 = (i8)(intptr_t)c02_s0033;
	i8 v1435 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1435)(v1434);

	i8 v1436 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1436)();

c02_0137:;

c02_0133:;

	goto c02_012e;

c02_0132:;

	i8 v1437 = (i8)(intptr_t)(ws+3216);
	i1 v1438 = *(i1*)(intptr_t)v1437;
	i8 v1439 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1439 = v1438;

	goto c02_012d;

c02_012e:;

	goto c02_012c;

c02_012d:;

	i1 v1440 = (i1)+0;
	i8 v1441 = (i8)(intptr_t)(ws+265);
	i8 v1442 = (i8)(intptr_t)(ws+393);
	i1 v1443 = *(i1*)(intptr_t)v1442;
	i8 v1444 = v1443;
	i8 v1445 = v1441+v1444;
	*(i1*)(intptr_t)v1445 = v1440;

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// lexer_i_match_keyword workspace at ws+3216 length ws+2
void f83_lexer_i_match_keyword(i1* p1446 /* token */) {

	i1 v1447 = (i1)+0;
	i8 v1448 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v1448 = v1447;

c02_013a:;

	i8 v1449 = (i8)(intptr_t)(ws+3217);
	i1 v1450 = *(i1*)(intptr_t)v1449;
	i1 v1451 = (i1)+38;
	if (v1450==v1451) goto c02_013d; else goto c02_013c;

c02_013c:;

	i8 v1452 = (i8)(intptr_t)(ws+265);
	i8 v1453 = (i8)(intptr_t)((i1*)f3___main_s00d6);
	i8 v1454 = (i8)(intptr_t)(ws+3217);
	i1 v1455 = *(i1*)(intptr_t)v1454;
	i8 v1456 = v1455;
	i1 v1457 = (i1)+3;
	i8 v1458 = ((i8)v1456)<<v1457;
	i8 v1459 = v1453+v1458;
	i8 v1460 = *(i8*)(intptr_t)v1459;
	i8 v1461 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1462;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1461)(&v1462, v1460, v1452);
	i1 v1463 = (i1)+0;
	if (v1462==v1463) goto c02_0141; else goto c02_0142;

c02_0141:;

	i8 v1464 = (i8)(intptr_t)((i1*)f3___main_s00d7);
	i8 v1465 = (i8)(intptr_t)(ws+3217);
	i1 v1466 = *(i1*)(intptr_t)v1465;
	i8 v1467 = v1466;
	i8 v1468 = v1464+v1467;
	i1 v1469 = *(i1*)(intptr_t)v1468;
	i8 v1470 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1470 = v1469;

	goto endsub;

c02_0142:;

c02_013e:;

	i8 v1471 = (i8)(intptr_t)(ws+3217);
	i1 v1472 = *(i1*)(intptr_t)v1471;
	i1 v1473 = v1472+(+1);
	i8 v1474 = (i8)(intptr_t)(ws+3217);
	*(i1*)(intptr_t)v1474 = v1473;

	goto c02_013a;

c02_013d:;

	i1 v1475 = (i1)+33;
	i8 v1476 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1476 = v1475;

endsub:;
	*p1446 = *(i1*)(intptr_t)(ws+3216);
}
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f26_ToLower(i1* /* cc */, i1 /* c */);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f69_StartError(void);
const i1 c02_s0034[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_read_number workspace at ws+3224 length ws+7
void f84_lexer_i_read_number(void) {

	i4 v1477 = (i4)+0;
	i8 v1478 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1478 = v1477;

	i4 v1479 = (i4)+10;
	i8 v1480 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1480 = v1479;

	i8 v1481 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1482;

	((void(*)(i1* /* c */))(intptr_t)v1481)(&v1482);
	i8 v1483 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1483 = v1482;

	i8 v1484 = (i8)(intptr_t)(ws+3230);
	i1 v1485 = *(i1*)(intptr_t)v1484;
	i1 v1486 = (i1)+48;
	if (v1485==v1486) goto c02_0146; else goto c02_0147;

c02_0146:;

	i8 v1487 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1488;

	((void(*)(i1* /* c */))(intptr_t)v1487)(&v1488);
	i8 v1489 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1489 = v1488;

	i8 v1490 = (i8)(intptr_t)(ws+3230);
	i1 v1491 = *(i1*)(intptr_t)v1490;

	if (v1491 != +98) goto c02_0149;

	i4 v1492 = (i4)+2;
	i8 v1493 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1493 = v1492;

	goto c02_0148;

c02_0149:;

	if (v1491 != +111) goto c02_014a;

	i4 v1494 = (i4)+8;
	i8 v1495 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1495 = v1494;

	goto c02_0148;

c02_014a:;

	if (v1491 != +100) goto c02_014b;

	i4 v1496 = (i4)+10;
	i8 v1497 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1497 = v1496;

	goto c02_0148;

c02_014b:;

	if (v1491 != +120) goto c02_014c;

	i4 v1498 = (i4)+16;
	i8 v1499 = (i8)(intptr_t)(ws+3224);
	*(i4*)(intptr_t)v1499 = v1498;

	goto c02_0148;

c02_014c:;

	i8 v1500 = (i8)(intptr_t)(ws+3230);
	i1 v1501 = *(i1*)(intptr_t)v1500;
	i8 v1502 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1502 = v1501;

	i8 v1503 = (i8)(intptr_t)(ws+3230);
	i1 v1504 = *(i1*)(intptr_t)v1503;
	i8 v1505 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1506;
	i1 v1507;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1505)(&v1506, &v1507, v1504);

	i8 v1508 = (i8)(intptr_t)(ws+3229);
	*(i1*)(intptr_t)v1508 = v1507;

	i8 v1509 = (i8)(intptr_t)(ws+3228);
	*(i1*)(intptr_t)v1509 = v1506;

	i8 v1510 = (i8)(intptr_t)(ws+3228);
	i1 v1511 = *(i1*)(intptr_t)v1510;
	i1 v1512 = v1511&(+32);
	i1 v1513 = (i1)+0;
	if (v1512==v1513) goto c02_0150; else goto c02_0151;

c02_0150:;

	goto endsub;

c02_0151:;

c02_014d:;

c02_0148:;


	goto c02_0143;

c02_0147:;

	i8 v1514 = (i8)(intptr_t)(ws+3230);
	i1 v1515 = *(i1*)(intptr_t)v1514;
	i8 v1516 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1516 = v1515;

c02_0143:;

c02_0152:;

	i8 v1517 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1518;

	((void(*)(i1* /* c */))(intptr_t)v1517)(&v1518);
	i8 v1519 = (i8)(intptr_t)(f26_ToLower);
	i1 v1520;

	((void(*)(i1* /* cc */, i1 /* c */))(intptr_t)v1519)(&v1520, v1518);
	i8 v1521 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1521 = v1520;

	i8 v1522 = (i8)(intptr_t)(ws+3230);
	i1 v1523 = *(i1*)(intptr_t)v1522;
	i8 v1524 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1525;
	i1 v1526;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1524)(&v1525, &v1526, v1523);

	i8 v1527 = (i8)(intptr_t)(ws+3229);
	*(i1*)(intptr_t)v1527 = v1526;

	i8 v1528 = (i8)(intptr_t)(ws+3228);
	*(i1*)(intptr_t)v1528 = v1525;

	i8 v1529 = (i8)(intptr_t)(ws+3228);
	i1 v1530 = *(i1*)(intptr_t)v1529;
	i1 v1531 = v1530&(+32);
	i1 v1532 = (i1)+0;
	if (v1531==v1532) goto c02_0157; else goto c02_0158;

c02_0157:;

	i8 v1533 = (i8)(intptr_t)(ws+3230);
	i1 v1534 = *(i1*)(intptr_t)v1533;
	i8 v1535 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1535 = v1534;

	goto c02_0153;

c02_0158:;

c02_0154:;

	i8 v1536 = (i8)(intptr_t)(ws+3230);
	i1 v1537 = *(i1*)(intptr_t)v1536;
	i1 v1538 = (i1)+97;
	if (v1537<v1538) goto c02_015d; else goto c02_015c;

c02_015c:;

	i8 v1539 = (i8)(intptr_t)(ws+3230);
	i1 v1540 = *(i1*)(intptr_t)v1539;
	i1 v1541 = v1540+(-87);
	i8 v1542 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1542 = v1541;

	goto c02_0159;

c02_015d:;

	i8 v1543 = (i8)(intptr_t)(ws+3230);
	i1 v1544 = *(i1*)(intptr_t)v1543;
	i1 v1545 = v1544+(-48);
	i8 v1546 = (i8)(intptr_t)(ws+3230);
	*(i1*)(intptr_t)v1546 = v1545;

c02_0159:;

	i8 v1547 = (i8)(intptr_t)(ws+3230);
	i1 v1548 = *(i1*)(intptr_t)v1547;
	i8 v1549 = (i8)(intptr_t)(ws+3224);
	i4 v1550 = *(i4*)(intptr_t)v1549;
	i1 v1551 = (s1)(s4)v1550;
	if (v1548<v1551) goto c02_0162; else goto c02_0161;

c02_0161:;

	i8 v1552 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1552)();

	i8 v1553 = (i8)(intptr_t)c02_s0034;
	i8 v1554 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1554)(v1553);

	i8 v1555 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1555)();

c02_0162:;

c02_015e:;

	i8 v1556 = (i8)(intptr_t)(ws+396);
	i4 v1557 = *(i4*)(intptr_t)v1556;
	i8 v1558 = (i8)(intptr_t)(ws+3224);
	i4 v1559 = *(i4*)(intptr_t)v1558;
	i4 v1560 = v1557*v1559;
	i8 v1561 = (i8)(intptr_t)(ws+3230);
	i1 v1562 = *(i1*)(intptr_t)v1561;
	i4 v1563 = v1562;
	i4 v1564 = v1560+v1563;
	i8 v1565 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1565 = v1564;

	goto c02_0152;

c02_0153:;

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0035[] = { 0x6d,0x61,0x6c,0x66,0x6f,0x72,0x6d,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_malformed workspace at ws+3240 length ws+8
void f85_lexer_i_malformed(i8 p1566 /* s */) {
	*(i8*)(intptr_t)(ws+3240) = p1566; /*s */

	i8 v1567 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1567)();

	i8 v1568 = (i8)(intptr_t)c02_s0035;
	i8 v1569 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1569)(v1568);

	i8 v1570 = (i8)(intptr_t)(ws+3240);
	i8 v1571 = *(i8*)(intptr_t)v1570;
	i8 v1572 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1572)(v1571);

	i8 v1573 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1573)();

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);
const i1 c02_s0036[] = { 0x65,0x73,0x63,0x61,0x70,0x65,0 };
	void f85_lexer_i_malformed(i8 /* s */);

// lexer_i_get_escaped workspace at ws+3232 length ws+1
void f86_lexer_i_get_escaped(i1* p1574 /* c */) {

	i8 v1575 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1576;

	((void(*)(i1* /* c */))(intptr_t)v1575)(&v1576);
	i8 v1577 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1577 = v1576;

	i8 v1578 = (i8)(intptr_t)(ws+3232);
	i1 v1579 = *(i1*)(intptr_t)v1578;

	if (v1579 != +110) goto c02_0164;

	i1 v1580 = (i1)+10;
	i8 v1581 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1581 = v1580;

	goto c02_0163;

c02_0164:;

	if (v1579 != +114) goto c02_0165;

	i1 v1582 = (i1)+13;
	i8 v1583 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1583 = v1582;

	goto c02_0163;

c02_0165:;

	if (v1579 != +116) goto c02_0166;

	i1 v1584 = (i1)+9;
	i8 v1585 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1585 = v1584;

	goto c02_0163;

c02_0166:;

	if (v1579 != +92) goto c02_0167;

	i1 v1586 = (i1)+92;
	i8 v1587 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1587 = v1586;

	goto c02_0163;

c02_0167:;

	if (v1579 != +39) goto c02_0168;

	i1 v1588 = (i1)+39;
	i8 v1589 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1589 = v1588;

	goto c02_0163;

c02_0168:;

	if (v1579 != +34) goto c02_0169;

	i1 v1590 = (i1)+34;
	i8 v1591 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1591 = v1590;

	goto c02_0163;

c02_0169:;

	if (v1579 != +48) goto c02_016a;

	i1 v1592 = (i1)+0;
	i8 v1593 = (i8)(intptr_t)(ws+3232);
	*(i1*)(intptr_t)v1593 = v1592;

	goto c02_0163;

c02_016a:;

	i8 v1594 = (i8)(intptr_t)c02_s0036;
	i8 v1595 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1595)(v1594);

c02_0163:;


endsub:;
	*p1574 = *(i1*)(intptr_t)(ws+3232);
}
	void f79_lexer_i_getchar(i1* /* c */);
const i1 c02_s0037[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f85_lexer_i_malformed(i8 /* s */);
	void f86_lexer_i_get_escaped(i1* /* c */);
	void f69_StartError(void);
const i1 c02_s0038[] = { 0x73,0x74,0x72,0x69,0x6e,0x67,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x74,0x6f,0x6f,0x20,0x6c,0x6f,0x6e,0x67,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// lexer_i_read_string workspace at ws+3224 length ws+1
void f87_lexer_i_read_string(void) {

	i1 v1596 = (i1)+0;
	i8 v1597 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1597 = v1596;

c02_016b:;

	i8 v1598 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1599;

	((void(*)(i1* /* c */))(intptr_t)v1598)(&v1599);
	i8 v1600 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v1600 = v1599;

	i8 v1601 = (i8)(intptr_t)(ws+3224);
	i1 v1602 = *(i1*)(intptr_t)v1601;
	i1 v1603 = (i1)+32;
	if (v1602<v1603) goto c02_0170; else goto c02_0171;

c02_0170:;

	i8 v1604 = (i8)(intptr_t)c02_s0037;
	i8 v1605 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1605)(v1604);

c02_0171:;

c02_016d:;

	i8 v1606 = (i8)(intptr_t)(ws+3224);
	i1 v1607 = *(i1*)(intptr_t)v1606;

	if (v1607 != +34) goto c02_0173;

	goto c02_016c;

c02_0173:;

	if (v1607 != +92) goto c02_0174;

	i8 v1608 = (i8)(intptr_t)(f86_lexer_i_get_escaped);
	i1 v1609;

	((void(*)(i1* /* c */))(intptr_t)v1608)(&v1609);
	i8 v1610 = (i8)(intptr_t)(ws+3224);
	*(i1*)(intptr_t)v1610 = v1609;

c02_0174:;

c02_0172:;


	i8 v1611 = (i8)(intptr_t)(ws+3224);
	i1 v1612 = *(i1*)(intptr_t)v1611;
	i8 v1613 = (i8)(intptr_t)(ws+265);
	i8 v1614 = (i8)(intptr_t)(ws+393);
	i1 v1615 = *(i1*)(intptr_t)v1614;
	i8 v1616 = v1615;
	i8 v1617 = v1613+v1616;
	*(i1*)(intptr_t)v1617 = v1612;

	i8 v1618 = (i8)(intptr_t)(ws+393);
	i1 v1619 = *(i1*)(intptr_t)v1618;
	i1 v1620 = v1619+(+1);
	i8 v1621 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1621 = v1620;

	i8 v1622 = (i8)(intptr_t)(ws+393);
	i1 v1623 = *(i1*)(intptr_t)v1622;
	i1 v1624 = (i1)+128;
	if (v1623==v1624) goto c02_0178; else goto c02_0179;

c02_0178:;

	i8 v1625 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v1625)();

	i8 v1626 = (i8)(intptr_t)c02_s0038;
	i8 v1627 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v1627)(v1626);

	i8 v1628 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v1628)();

c02_0179:;

c02_0175:;

	goto c02_016b;

c02_016c:;

	i1 v1629 = (i1)+0;
	i8 v1630 = (i8)(intptr_t)(ws+265);
	i8 v1631 = (i8)(intptr_t)(ws+393);
	i1 v1632 = *(i1*)(intptr_t)v1631;
	i8 v1633 = v1632;
	i8 v1634 = v1630+v1633;
	*(i1*)(intptr_t)v1634 = v1629;

endsub:;
}
const i1 c02_s0039[] = { 0x63,0x68,0x61,0x72,0x61,0x63,0x74,0x65,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f85_lexer_i_malformed(i8 /* s */);

// malformed workspace at ws+3224 length ws+0
void f89_malformed(void) {

	i8 v1635 = (i8)(intptr_t)c02_s0039;
	i8 v1636 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1636)(v1635);

endsub:;
}
	void f79_lexer_i_getchar(i1* /* c */);
	void f89_malformed(void);
	void f86_lexer_i_get_escaped(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f89_malformed(void);

// lexer_i_read_char workspace at ws+3216 length ws+1
void f88_lexer_i_read_char(void) {


	i8 v1637 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1638;

	((void(*)(i1* /* c */))(intptr_t)v1637)(&v1638);
	i8 v1639 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1639 = v1638;

	i8 v1640 = (i8)(intptr_t)(ws+3216);
	i1 v1641 = *(i1*)(intptr_t)v1640;
	i1 v1642 = (i1)+32;
	if (v1641<v1642) goto c02_017f; else goto c02_0181;

c02_0181:;

	i8 v1643 = (i8)(intptr_t)(ws+3216);
	i1 v1644 = *(i1*)(intptr_t)v1643;
	i1 v1645 = (i1)+39;
	if (v1644==v1645) goto c02_017f; else goto c02_0180;

c02_017f:;

	i8 v1646 = (i8)(intptr_t)(f89_malformed);

	((void(*)(void))(intptr_t)v1646)();

c02_0180:;

c02_017a:;

	i8 v1647 = (i8)(intptr_t)(ws+3216);
	i1 v1648 = *(i1*)(intptr_t)v1647;
	i1 v1649 = (i1)+92;
	if (v1648==v1649) goto c02_0185; else goto c02_0186;

c02_0185:;

	i8 v1650 = (i8)(intptr_t)(f86_lexer_i_get_escaped);
	i1 v1651;

	((void(*)(i1* /* c */))(intptr_t)v1650)(&v1651);
	i8 v1652 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1652 = v1651;

c02_0186:;

c02_0182:;

	i8 v1653 = (i8)(intptr_t)(ws+3216);
	i1 v1654 = *(i1*)(intptr_t)v1653;
	i4 v1655 = v1654;
	i8 v1656 = (i8)(intptr_t)(ws+396);
	*(i4*)(intptr_t)v1656 = v1655;

	i8 v1657 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1658;

	((void(*)(i1* /* c */))(intptr_t)v1657)(&v1658);
	i8 v1659 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1659 = v1658;

	i8 v1660 = (i8)(intptr_t)(ws+3216);
	i1 v1661 = *(i1*)(intptr_t)v1660;
	i1 v1662 = (i1)+39;
	if (v1661==v1662) goto c02_018b; else goto c02_018a;

c02_018a:;

	i8 v1663 = (i8)(intptr_t)(f89_malformed);

	((void(*)(void))(intptr_t)v1663)();

c02_018b:;

c02_0187:;

endsub:;
}
const i1 c02_s003a[] = { 0x69,0x6e,0x63,0x6c,0x75,0x64,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f85_lexer_i_malformed(i8 /* s */);

// malformed_include workspace at ws+3224 length ws+0
void f91_malformed_include(void) {

	i8 v1664 = (i8)(intptr_t)c02_s003a;
	i8 v1665 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1665)(v1664);

endsub:;
}
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f91_malformed_include(void);
	void f87_lexer_i_read_string(void);
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f91_malformed_include(void);
	void f76_LexerIncludeFile(i8 /* path */);

// lexer_i_include workspace at ws+3216 length ws+1
void f90_lexer_i_include(void) {


	i8 v1666 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1666)();

	i8 v1667 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1668;

	((void(*)(i1* /* c */))(intptr_t)v1667)(&v1668);
	i8 v1669 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1669 = v1668;

	i8 v1670 = (i8)(intptr_t)(ws+3216);
	i1 v1671 = *(i1*)(intptr_t)v1670;
	i1 v1672 = (i1)+34;
	if (v1671==v1672) goto c02_0190; else goto c02_018f;

c02_018f:;

	i8 v1673 = (i8)(intptr_t)(f91_malformed_include);

	((void(*)(void))(intptr_t)v1673)();

c02_0190:;

c02_018c:;

	i8 v1674 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1674)();

	i8 v1675 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1675)();

	i8 v1676 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1677;

	((void(*)(i1* /* c */))(intptr_t)v1676)(&v1677);
	i8 v1678 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1678 = v1677;

	i8 v1679 = (i8)(intptr_t)(ws+3216);
	i1 v1680 = *(i1*)(intptr_t)v1679;
	i1 v1681 = (i1)+59;
	if (v1680==v1681) goto c02_0195; else goto c02_0194;

c02_0194:;

	i8 v1682 = (i8)(intptr_t)(f91_malformed_include);

	((void(*)(void))(intptr_t)v1682)();

c02_0195:;

c02_0191:;

	i8 v1683 = (i8)(intptr_t)(ws+265);
	i8 v1684 = (i8)(intptr_t)(f76_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v1684)(v1683);

endsub:;
}
	void f81_lexer_i_skipwhitespace(void);
	void f84_lexer_i_read_number(void);
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
const i1 c02_s003b[] = { 0x23,0x6c,0x69,0x6e,0x65,0x20,0x64,0x69,0x72,0x65,0x63,0x74,0x69,0x76,0x65,0 };
	void f85_lexer_i_malformed(i8 /* s */);
	void f87_lexer_i_read_string(void);
	void f33_Free(i8 /* block */);
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);

// lexer_i_line_directive workspace at ws+3216 length ws+1
void f92_lexer_i_line_directive(void) {

	i8 v1685 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1685)();

	i8 v1686 = (i8)(intptr_t)(f84_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1686)();

	i8 v1687 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1687)();

	i8 v1688 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1689;

	((void(*)(i1* /* c */))(intptr_t)v1688)(&v1689);
	i8 v1690 = (i8)(intptr_t)(ws+3216);
	*(i1*)(intptr_t)v1690 = v1689;

	i8 v1691 = (i8)(intptr_t)(ws+3216);
	i1 v1692 = *(i1*)(intptr_t)v1691;
	i1 v1693 = (i1)+34;
	if (v1692==v1693) goto c02_019a; else goto c02_0199;

c02_0199:;

	i8 v1694 = (i8)(intptr_t)c02_s003b;
	i8 v1695 = (i8)(intptr_t)(f85_lexer_i_malformed);

	((void(*)(i8 /* s */))(intptr_t)v1695)(v1694);

c02_019a:;

c02_0196:;

	i8 v1696 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1696)();

	i8 v1697 = (i8)(intptr_t)(ws+396);
	i4 v1698 = *(i4*)(intptr_t)v1697;
	i2 v1699 = (s2)(s4)v1698;
	i8 v1700 = (i8)(intptr_t)(ws+256);
	i8 v1701 = *(i8*)(intptr_t)v1700;
	i8 v1702 = v1701+(+16);
	*(i2*)(intptr_t)v1702 = v1699;

	i8 v1703 = (i8)(intptr_t)(ws+256);
	i8 v1704 = *(i8*)(intptr_t)v1703;
	i8 v1705 = v1704+(+8);
	i8 v1706 = *(i8*)(intptr_t)v1705;
	i8 v1707 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v1707)(v1706);

	i8 v1708 = (i8)(intptr_t)(ws+265);
	i8 v1709 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v1710;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v1709)(&v1710, v1708);
	i8 v1711 = (i8)(intptr_t)(ws+256);
	i8 v1712 = *(i8*)(intptr_t)v1711;
	i8 v1713 = v1712+(+8);
	*(i8*)(intptr_t)v1713 = v1710;

endsub:;
}
	void f81_lexer_i_skipwhitespace(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f82_lexer_i_read_identifier(void);
const i1 c02_s003c[] = { 0x6c,0x69,0x6e,0x65,0 };
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);
	void f92_lexer_i_line_directive(void);
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f80_lexer_i_unparseable(i1 /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f80_lexer_i_unparseable(i1 /* c */);
	void f79_lexer_i_getchar(i1* /* c */);
	void f87_lexer_i_read_string(void);
	void f88_lexer_i_read_char(void);
	void f78_lexer_i_ctype(i1* /* type */, i1* /* token */, i1 /* c */);
	void f84_lexer_i_read_number(void);
	void f82_lexer_i_read_identifier(void);
	void f83_lexer_i_match_keyword(i1* /* token */);
	void f80_lexer_i_unparseable(i1 /* c */);
	void f90_lexer_i_include(void);

// LexerReadToken workspace at ws+3208 length ws+3
void f77_LexerReadToken(i1* p1287 /* token */) {














c02_019b:;

	i8 v1714 = (i8)(intptr_t)(f81_lexer_i_skipwhitespace);

	((void(*)(void))(intptr_t)v1714)();

	i8 v1715 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1716;

	((void(*)(i1* /* c */))(intptr_t)v1715)(&v1716);
	i8 v1717 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1717 = v1716;

	i8 v1718 = (i8)(intptr_t)(ws+3209);
	i1 v1719 = *(i1*)(intptr_t)v1718;
	i1 v1720 = (i1)+35;
	if (v1719==v1720) goto c02_01a0; else goto c02_01a1;

c02_01a0:;

	i1 v1721 = (i1)+0;
	i8 v1722 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1722 = v1721;

	i8 v1723 = (i8)(intptr_t)(f82_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1723)();

	i8 v1724 = (i8)(intptr_t)(ws+265);
	i8 v1725 = (i8)(intptr_t)c02_s003c;
	i8 v1726 = (i8)(intptr_t)(f25_StrCmp);
	i1 v1727;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v1726)(&v1727, v1725, v1724);
	i1 v1728 = (i1)+0;
	if (v1727==v1728) goto c02_01a5; else goto c02_01a6;

c02_01a5:;

	i8 v1729 = (i8)(intptr_t)(f92_lexer_i_line_directive);

	((void(*)(void))(intptr_t)v1729)();

c02_01a6:;

c02_01a2:;

c02_01a7:;

	i8 v1730 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1731;

	((void(*)(i1* /* c */))(intptr_t)v1730)(&v1731);
	i8 v1732 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1732 = v1731;

	i8 v1733 = (i8)(intptr_t)(ws+3209);
	i1 v1734 = *(i1*)(intptr_t)v1733;
	i1 v1735 = (i1)+10;
	if (v1734==v1735) goto c02_01ae; else goto c02_01b0;

c02_01b0:;

	i8 v1736 = (i8)(intptr_t)(ws+3209);
	i1 v1737 = *(i1*)(intptr_t)v1736;
	i1 v1738 = (i1)+0;
	if (v1737==v1738) goto c02_01ae; else goto c02_01af;

c02_01ae:;

	i8 v1739 = (i8)(intptr_t)(ws+3209);
	i1 v1740 = *(i1*)(intptr_t)v1739;
	i8 v1741 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1741 = v1740;

	goto c02_01a8;

c02_01af:;

c02_01a9:;

	goto c02_01a7;

c02_01a8:;

	goto c02_019b;

c02_01a1:;

c02_019d:;

	i8 v1742 = (i8)(intptr_t)(ws+3209);
	i1 v1743 = *(i1*)(intptr_t)v1742;

	if (v1743 != +0) goto c02_01b2;

	i1 v1744 = (i1)+0;
	i8 v1745 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1745 = v1744;

	goto c02_01b1;

c02_01b2:;

	if (v1743 != +58) goto c02_01b3;

	i8 v1746 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1747;

	((void(*)(i1* /* c */))(intptr_t)v1746)(&v1747);
	i8 v1748 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1748 = v1747;

	i8 v1749 = (i8)(intptr_t)(ws+3209);
	i1 v1750 = *(i1*)(intptr_t)v1749;
	i1 v1751 = (i1)+61;
	if (v1750==v1751) goto c02_01b7; else goto c02_01b8;

c02_01b7:;

	i1 v1752 = (i1)+2;
	i8 v1753 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1753 = v1752;

	goto c02_01b4;

c02_01b8:;

	i8 v1754 = (i8)(intptr_t)(ws+3209);
	i1 v1755 = *(i1*)(intptr_t)v1754;
	i8 v1756 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1756 = v1755;

	i1 v1757 = (i1)+6;
	i8 v1758 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1758 = v1757;

c02_01b4:;

	goto c02_01b1;

c02_01b3:;

	if (v1743 != +60) goto c02_01b9;

	i8 v1759 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1760;

	((void(*)(i1* /* c */))(intptr_t)v1759)(&v1760);
	i8 v1761 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1761 = v1760;

	i8 v1762 = (i8)(intptr_t)(ws+3209);
	i1 v1763 = *(i1*)(intptr_t)v1762;

	if (v1763 != +60) goto c02_01bb;

	i1 v1764 = (i1)+56;
	i8 v1765 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1765 = v1764;

	goto c02_01ba;

c02_01bb:;

	if (v1763 != +61) goto c02_01bc;

	i1 v1766 = (i1)+51;
	i8 v1767 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1767 = v1766;

	goto c02_01ba;

c02_01bc:;

	i8 v1768 = (i8)(intptr_t)(ws+3209);
	i1 v1769 = *(i1*)(intptr_t)v1768;
	i8 v1770 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1770 = v1769;

	i1 v1771 = (i1)+50;
	i8 v1772 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1772 = v1771;

c02_01ba:;


	goto c02_01b1;

c02_01b9:;

	if (v1743 != +61) goto c02_01bd;

	i8 v1773 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1774;

	((void(*)(i1* /* c */))(intptr_t)v1773)(&v1774);
	i8 v1775 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1775 = v1774;

	i8 v1776 = (i8)(intptr_t)(ws+3209);
	i1 v1777 = *(i1*)(intptr_t)v1776;
	i1 v1778 = (i1)+61;
	if (v1777==v1778) goto c02_01c1; else goto c02_01c2;

c02_01c1:;

	i1 v1779 = (i1)+54;
	i8 v1780 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1780 = v1779;

	goto c02_01be;

c02_01c2:;

	i8 v1781 = (i8)(intptr_t)(ws+3209);
	i1 v1782 = *(i1*)(intptr_t)v1781;
	i8 v1783 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1783)(v1782);

c02_01be:;

	goto c02_01b1;

c02_01bd:;

	if (v1743 != +33) goto c02_01c3;

	i8 v1784 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1785;

	((void(*)(i1* /* c */))(intptr_t)v1784)(&v1785);
	i8 v1786 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1786 = v1785;

	i8 v1787 = (i8)(intptr_t)(ws+3209);
	i1 v1788 = *(i1*)(intptr_t)v1787;
	i1 v1789 = (i1)+61;
	if (v1788==v1789) goto c02_01c7; else goto c02_01c8;

c02_01c7:;

	i1 v1790 = (i1)+55;
	i8 v1791 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1791 = v1790;

	goto c02_01c4;

c02_01c8:;

	i8 v1792 = (i8)(intptr_t)(ws+3209);
	i1 v1793 = *(i1*)(intptr_t)v1792;
	i8 v1794 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1794)(v1793);

c02_01c4:;

	goto c02_01b1;

c02_01c3:;

	if (v1743 != +62) goto c02_01c9;

	i8 v1795 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1796;

	((void(*)(i1* /* c */))(intptr_t)v1795)(&v1796);
	i8 v1797 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1797 = v1796;

	i8 v1798 = (i8)(intptr_t)(ws+3209);
	i1 v1799 = *(i1*)(intptr_t)v1798;

	if (v1799 != +62) goto c02_01cb;

	i1 v1800 = (i1)+57;
	i8 v1801 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1801 = v1800;

	goto c02_01ca;

c02_01cb:;

	if (v1799 != +61) goto c02_01cc;

	i1 v1802 = (i1)+53;
	i8 v1803 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1803 = v1802;

	goto c02_01ca;

c02_01cc:;

	i8 v1804 = (i8)(intptr_t)(ws+3209);
	i1 v1805 = *(i1*)(intptr_t)v1804;
	i8 v1806 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1806 = v1805;

	i1 v1807 = (i1)+52;
	i8 v1808 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1808 = v1807;

c02_01ca:;


	goto c02_01b1;

c02_01c9:;

	if (v1743 != +34) goto c02_01cd;

	i8 v1809 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1809)();

	i1 v1810 = (i1)+41;
	i8 v1811 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1811 = v1810;

	goto c02_01b1;

c02_01cd:;

	if (v1743 != +39) goto c02_01ce;

	i8 v1812 = (i8)(intptr_t)(f88_lexer_i_read_char);

	((void(*)(void))(intptr_t)v1812)();

	i1 v1813 = (i1)+34;
	i8 v1814 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1814 = v1813;

	goto c02_01b1;

c02_01ce:;

	i8 v1815 = (i8)(intptr_t)(ws+3209);
	i1 v1816 = *(i1*)(intptr_t)v1815;
	i8 v1817 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1818;
	i1 v1819;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1817)(&v1818, &v1819, v1816);

	i8 v1820 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1820 = v1819;

	i8 v1821 = (i8)(intptr_t)(ws+3210);
	*(i1*)(intptr_t)v1821 = v1818;

	i8 v1822 = (i8)(intptr_t)(ws+3210);
	i1 v1823 = *(i1*)(intptr_t)v1822;
	i1 v1824 = v1823&(+128);
	i1 v1825 = (i1)+0;
	if (v1824==v1825) goto c02_01d3; else goto c02_01d2;

c02_01d2:;

	goto c02_01cf;

c02_01d3:;

	i8 v1826 = (i8)(intptr_t)(ws+3210);
	i1 v1827 = *(i1*)(intptr_t)v1826;
	i1 v1828 = v1827&(+1);
	i1 v1829 = (i1)+0;
	if (v1828==v1829) goto c02_01d7; else goto c02_01d6;

c02_01d6:;

	i8 v1830 = (i8)(intptr_t)(ws+3209);
	i1 v1831 = *(i1*)(intptr_t)v1830;
	i8 v1832 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1832 = v1831;

	i8 v1833 = (i8)(intptr_t)(f84_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1833)();

	i1 v1834 = (i1)+34;
	i8 v1835 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1835 = v1834;

	goto c02_01cf;

c02_01d7:;

	i8 v1836 = (i8)(intptr_t)(ws+3210);
	i1 v1837 = *(i1*)(intptr_t)v1836;
	i1 v1838 = v1837&(+16);
	i1 v1839 = (i1)+0;
	if (v1838==v1839) goto c02_01db; else goto c02_01da;

c02_01da:;

	i1 v1840 = (i1)+1;
	i8 v1841 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1841 = v1840;

	i8 v1842 = (i8)(intptr_t)(ws+3209);
	i1 v1843 = *(i1*)(intptr_t)v1842;
	i8 v1844 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v1844 = v1843;

	i8 v1845 = (i8)(intptr_t)(f82_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1845)();

	i8 v1846 = (i8)(intptr_t)(f83_lexer_i_match_keyword);
	i1 v1847;

	((void(*)(i1* /* token */))(intptr_t)v1846)(&v1847);
	i8 v1848 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1848 = v1847;

	goto c02_01cf;

c02_01db:;

	i8 v1849 = (i8)(intptr_t)(ws+3209);
	i1 v1850 = *(i1*)(intptr_t)v1849;
	i8 v1851 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1851)(v1850);

c02_01cf:;

c02_01b1:;


	i8 v1852 = (i8)(intptr_t)(ws+3208);
	i1 v1853 = *(i1*)(intptr_t)v1852;
	i1 v1854 = (i1)+255;
	if (v1853==v1854) goto c02_01df; else goto c02_01e0;

c02_01df:;

	i8 v1855 = (i8)(intptr_t)(f90_lexer_i_include);

	((void(*)(void))(intptr_t)v1855)();

	goto c02_01dc;

c02_01e0:;

	goto c02_019c;

c02_01dc:;

	goto c02_019b;

c02_019c:;

endsub:;
	*p1287 = *(i1*)(intptr_t)(ws+3208);
}

// CountParameters workspace at ws+3328 length ws+9
void f93_CountParameters(i1* p1856 /* count */, i8 p1857 /* param */) {
	*(i8*)(intptr_t)(ws+3328) = p1857; /*param */

	i1 v1858 = (i1)+0;
	i8 v1859 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v1859 = v1858;

c02_01e3:;

	i8 v1860 = (i8)(intptr_t)(ws+3328);
	i8 v1861 = *(i8*)(intptr_t)v1860;
	i8 v1862 = (i8)+0;
	if (v1861==v1862) goto c02_01e6; else goto c02_01e5;

c02_01e5:;

	i8 v1863 = (i8)(intptr_t)(ws+3336);
	i1 v1864 = *(i1*)(intptr_t)v1863;
	i1 v1865 = v1864+(+1);
	i8 v1866 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v1866 = v1865;

	i8 v1867 = (i8)(intptr_t)(ws+3328);
	i8 v1868 = *(i8*)(intptr_t)v1867;
	i8 v1869 = *(i8*)(intptr_t)v1868;
	i8 v1870 = v1869+(+16);
	i8 v1871 = *(i8*)(intptr_t)v1870;
	i8 v1872 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v1872 = v1871;

	goto c02_01e3;

c02_01e6:;

endsub:;
	*p1856 = *(i1*)(intptr_t)(ws+3336);
}

// GetInputParameter workspace at ws+3384 length ws+24
void f94_GetInputParameter(i8* p1873 /* param */, i1 p1874 /* count */, i8 p1875 /* subr */) {
	*(i8*)(intptr_t)(ws+3384) = p1875; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p1874; /*count */

	i8 v1876 = (i8)(intptr_t)(ws+3384);
	i8 v1877 = *(i8*)(intptr_t)v1876;
	i8 v1878 = v1877+(+80);
	i1 v1879 = *(i1*)(intptr_t)v1878;
	i1 v1880 = (i1)+0;
	if (v1879==v1880) goto c02_01eb; else goto c02_01ea;

c02_01ea:;

	i8 v1881 = (i8)(intptr_t)(ws+3384);
	i8 v1882 = *(i8*)(intptr_t)v1881;
	i8 v1883 = v1882+(+16);
	i8 v1884 = *(i8*)(intptr_t)v1883;
	i8 v1885 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1885 = v1884;

c02_01ee:;

	i8 v1886 = (i8)(intptr_t)(ws+3392);
	i1 v1887 = *(i1*)(intptr_t)v1886;
	i1 v1888 = (i1)+0;
	if (v1887==v1888) goto c02_01f1; else goto c02_01f0;

c02_01f0:;

	i8 v1889 = (i8)(intptr_t)(ws+3400);
	i8 v1890 = *(i8*)(intptr_t)v1889;
	i8 v1891 = v1890+(+24);
	i8 v1892 = *(i8*)(intptr_t)v1891;
	i8 v1893 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1893 = v1892;

	i8 v1894 = (i8)(intptr_t)(ws+3392);
	i1 v1895 = *(i1*)(intptr_t)v1894;
	i1 v1896 = v1895+(-1);
	i8 v1897 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v1897 = v1896;

	goto c02_01ee;

c02_01f1:;

	goto c02_01e7;

c02_01eb:;

	i8 v1898 = (i8)+0;
	i8 v1899 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1899 = v1898;

c02_01e7:;

endsub:;
	*p1873 = *(i8*)(intptr_t)(ws+3400);
}

// GetOutputParameter workspace at ws+3384 length ws+24
void f95_GetOutputParameter(i8* p1900 /* param */, i1 p1901 /* count */, i8 p1902 /* subr */) {
	*(i8*)(intptr_t)(ws+3384) = p1902; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p1901; /*count */

	i8 v1903 = (i8)(intptr_t)(ws+3384);
	i8 v1904 = *(i8*)(intptr_t)v1903;
	i8 v1905 = v1904+(+81);
	i1 v1906 = *(i1*)(intptr_t)v1905;
	i1 v1907 = (i1)+0;
	if (v1906==v1907) goto c02_01f6; else goto c02_01f5;

c02_01f5:;

	i8 v1908 = (i8)(intptr_t)(ws+3392);
	i1 v1909 = *(i1*)(intptr_t)v1908;
	i8 v1910 = (i8)(intptr_t)(ws+3384);
	i8 v1911 = *(i8*)(intptr_t)v1910;
	i8 v1912 = v1911+(+80);
	i1 v1913 = *(i1*)(intptr_t)v1912;
	i1 v1914 = v1909+v1913;
	i8 v1915 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v1915 = v1914;

	i8 v1916 = (i8)(intptr_t)(ws+3384);
	i8 v1917 = *(i8*)(intptr_t)v1916;
	i8 v1918 = v1917+(+16);
	i8 v1919 = *(i8*)(intptr_t)v1918;
	i8 v1920 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1920 = v1919;

c02_01f9:;

	i8 v1921 = (i8)(intptr_t)(ws+3392);
	i1 v1922 = *(i1*)(intptr_t)v1921;
	i1 v1923 = (i1)+0;
	if (v1922==v1923) goto c02_01fc; else goto c02_01fb;

c02_01fb:;

	i8 v1924 = (i8)(intptr_t)(ws+3400);
	i8 v1925 = *(i8*)(intptr_t)v1924;
	i8 v1926 = v1925+(+24);
	i8 v1927 = *(i8*)(intptr_t)v1926;
	i8 v1928 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1928 = v1927;

	i8 v1929 = (i8)(intptr_t)(ws+3392);
	i1 v1930 = *(i1*)(intptr_t)v1929;
	i1 v1931 = v1930+(-1);
	i8 v1932 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v1932 = v1931;

	goto c02_01f9;

c02_01fc:;

	goto c02_01f2;

c02_01f6:;

	i8 v1933 = (i8)+0;
	i8 v1934 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1934 = v1933;

c02_01f2:;

endsub:;
	*p1900 = *(i8*)(intptr_t)(ws+3400);
}

// WidthToIndex workspace at ws+3432 length ws+2
void f97_WidthToIndex(i1* p1943 /* index */, i1 p1944 /* width */) {
	*(i1*)(intptr_t)(ws+3432) = p1944; /*width */

	i8 v1945 = (i8)(intptr_t)(ws+3432);
	i1 v1946 = *(i1*)(intptr_t)v1945;

	if (v1946 != +4) goto c02_01fe;

	i1 v1947 = (i1)+3;
	i8 v1948 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v1948 = v1947;

	goto c02_01fd;

c02_01fe:;

	if (v1946 != +8) goto c02_01ff;

	i1 v1949 = (i1)+4;
	i8 v1950 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v1950 = v1949;

	goto c02_01fd;

c02_01ff:;

	i8 v1951 = (i8)(intptr_t)(ws+3432);
	i1 v1952 = *(i1*)(intptr_t)v1951;
	i8 v1953 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v1953 = v1952;

c02_01fd:;


endsub:;
	*p1943 = *(i1*)(intptr_t)(ws+3433);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3408 length ws+8
void f99_MidAsmgroupend(i8* p1954 /* m */) {

	i1 v1955 = (i1)+17;
	i8 v1956 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1957;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1956)(&v1957, v1955);
	i8 v1958 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v1958 = v1957;

endsub:;
	*p1954 = *(i8*)(intptr_t)(ws+3408);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3328 length ws+24
void f100_MidPair(i8* p1959 /* m */, i8 p1960 /* right */, i8 p1961 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p1961; /*left */
	*(i8*)(intptr_t)(ws+3336) = p1960; /*right */

	i1 v1962 = (i1)+25;
	i8 v1963 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1964;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1963)(&v1964, v1962);
	i8 v1965 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v1965 = v1964;

	i8 v1966 = (i8)(intptr_t)(ws+3328);
	i8 v1967 = *(i8*)(intptr_t)v1966;
	i8 v1968 = (i8)(intptr_t)(ws+3344);
	i8 v1969 = *(i8*)(intptr_t)v1968;
	i8 v1970 = v1969+(+24);
	*(i8*)(intptr_t)v1970 = v1967;

	i8 v1971 = (i8)(intptr_t)(ws+3336);
	i8 v1972 = *(i8*)(intptr_t)v1971;
	i8 v1973 = (i8)(intptr_t)(ws+3344);
	i8 v1974 = *(i8*)(intptr_t)v1973;
	i8 v1975 = v1974+(+32);
	*(i8*)(intptr_t)v1975 = v1972;

endsub:;
	*p1959 = *(i8*)(intptr_t)(ws+3344);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3328 length ws+16
void f101_MidAsmvalue(i8* p1976 /* m */, i4 p1977 /* value */) {
	*(i4*)(intptr_t)(ws+3328) = p1977; /*value */

	i1 v1978 = (i1)+22;
	i8 v1979 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1980;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1979)(&v1980, v1978);
	i8 v1981 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1981 = v1980;

	i8 v1982 = (i8)(intptr_t)(ws+3328);
	i4 v1983 = *(i4*)(intptr_t)v1982;
	i8 v1984 = (i8)(intptr_t)(ws+3336);
	i8 v1985 = *(i8*)(intptr_t)v1984;
	*(i4*)(intptr_t)v1985 = v1983;

endsub:;
	*p1976 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3328 length ws+16
void f102_MidStartinit(i8* p1986 /* m */, i8 p1987 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p1987; /*sym */

	i1 v1988 = (i1)+6;
	i8 v1989 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1990;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1989)(&v1990, v1988);
	i8 v1991 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1991 = v1990;

	i8 v1992 = (i8)(intptr_t)(ws+3328);
	i8 v1993 = *(i8*)(intptr_t)v1992;
	i8 v1994 = (i8)(intptr_t)(ws+3336);
	i8 v1995 = *(i8*)(intptr_t)v1994;
	*(i8*)(intptr_t)v1995 = v1993;

endsub:;
	*p1986 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3336 length ws+16
void f103_MidStartsub(i8* p1996 /* m */, i8 p1997 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p1997; /*subr */

	i1 v1998 = (i1)+4;
	i8 v1999 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2000;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1999)(&v2000, v1998);
	i8 v2001 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2001 = v2000;

	i8 v2002 = (i8)(intptr_t)(ws+3336);
	i8 v2003 = *(i8*)(intptr_t)v2002;
	i8 v2004 = (i8)(intptr_t)(ws+3344);
	i8 v2005 = *(i8*)(intptr_t)v2004;
	*(i8*)(intptr_t)v2005 = v2003;

endsub:;
	*p1996 = *(i8*)(intptr_t)(ws+3344);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitstring workspace at ws+3352 length ws+16
void f104_MidInitstring(i8* p2006 /* m */, i8 p2007 /* text */) {
	*(i8*)(intptr_t)(ws+3352) = p2007; /*text */

	i1 v2008 = (i1)+12;
	i8 v2009 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2010;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2009)(&v2010, v2008);
	i8 v2011 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2011 = v2010;

	i8 v2012 = (i8)(intptr_t)(ws+3352);
	i8 v2013 = *(i8*)(intptr_t)v2012;
	i8 v2014 = (i8)(intptr_t)(ws+3360);
	i8 v2015 = *(i8*)(intptr_t)v2014;
	*(i8*)(intptr_t)v2015 = v2013;

endsub:;
	*p2006 = *(i8*)(intptr_t)(ws+3360);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3328 length ws+24
void f105_MidWhencase(i8* p2016 /* m */, i2 p2017 /* falselabel */, i4 p2018 /* value */, i1 p2019 /* width */) {
	*(i1*)(intptr_t)(ws+3328) = p2019; /*width */
	*(i4*)(intptr_t)(ws+3332) = p2018; /*value */
	*(i2*)(intptr_t)(ws+3336) = p2017; /*falselabel */

	i8 v2020 = (i8)(intptr_t)(ws+3328);
	i1 v2021 = *(i1*)(intptr_t)v2020;
	i8 v2022 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2023;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2022)(&v2023, v2021);
	i1 v2024 = v2023+(+81);
	i8 v2025 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2026;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2025)(&v2026, v2024);
	i8 v2027 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2027 = v2026;

	i8 v2028 = (i8)(intptr_t)(ws+3332);
	i4 v2029 = *(i4*)(intptr_t)v2028;
	i8 v2030 = (i8)(intptr_t)(ws+3344);
	i8 v2031 = *(i8*)(intptr_t)v2030;
	*(i4*)(intptr_t)v2031 = v2029;

	i8 v2032 = (i8)(intptr_t)(ws+3336);
	i2 v2033 = *(i2*)(intptr_t)v2032;
	i8 v2034 = (i8)(intptr_t)(ws+3344);
	i8 v2035 = *(i8*)(intptr_t)v2034;
	i8 v2036 = v2035+(+4);
	*(i2*)(intptr_t)v2036 = v2033;

endsub:;
	*p2016 = *(i8*)(intptr_t)(ws+3344);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitsubref workspace at ws+3352 length ws+16
void f106_MidInitsubref(i8* p2037 /* m */, i8 p2038 /* subr */) {
	*(i8*)(intptr_t)(ws+3352) = p2038; /*subr */

	i1 v2039 = (i1)+14;
	i8 v2040 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2041;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2040)(&v2041, v2039);
	i8 v2042 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2042 = v2041;

	i8 v2043 = (i8)(intptr_t)(ws+3352);
	i8 v2044 = *(i8*)(intptr_t)v2043;
	i8 v2045 = (i8)(intptr_t)(ws+3360);
	i8 v2046 = *(i8*)(intptr_t)v2045;
	*(i8*)(intptr_t)v2046 = v2044;

endsub:;
	*p2037 = *(i8*)(intptr_t)(ws+3360);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3368 length ws+40
void f107_MidBeq(i8* p2047 /* m */, i1 p2048 /* negated */, i2 p2049 /* fallthrough */, i2 p2050 /* falselabel */, i2 p2051 /* truelabel */, i8 p2052 /* right */, i8 p2053 /* left */, i1 p2054 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2054; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2053; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2052; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2051; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2050; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2049; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2048; /*negated */

	i8 v2055 = (i8)(intptr_t)(ws+3368);
	i1 v2056 = *(i1*)(intptr_t)v2055;
	i8 v2057 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2058;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2057)(&v2058, v2056);
	i1 v2059 = v2058+(+61);
	i8 v2060 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2061;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2060)(&v2061, v2059);
	i8 v2062 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2062 = v2061;

	i8 v2063 = (i8)(intptr_t)(ws+3376);
	i8 v2064 = *(i8*)(intptr_t)v2063;
	i8 v2065 = (i8)(intptr_t)(ws+3400);
	i8 v2066 = *(i8*)(intptr_t)v2065;
	i8 v2067 = v2066+(+24);
	*(i8*)(intptr_t)v2067 = v2064;

	i8 v2068 = (i8)(intptr_t)(ws+3384);
	i8 v2069 = *(i8*)(intptr_t)v2068;
	i8 v2070 = (i8)(intptr_t)(ws+3400);
	i8 v2071 = *(i8*)(intptr_t)v2070;
	i8 v2072 = v2071+(+32);
	*(i8*)(intptr_t)v2072 = v2069;

	i8 v2073 = (i8)(intptr_t)(ws+3392);
	i2 v2074 = *(i2*)(intptr_t)v2073;
	i8 v2075 = (i8)(intptr_t)(ws+3400);
	i8 v2076 = *(i8*)(intptr_t)v2075;
	*(i2*)(intptr_t)v2076 = v2074;

	i8 v2077 = (i8)(intptr_t)(ws+3394);
	i2 v2078 = *(i2*)(intptr_t)v2077;
	i8 v2079 = (i8)(intptr_t)(ws+3400);
	i8 v2080 = *(i8*)(intptr_t)v2079;
	i8 v2081 = v2080+(+2);
	*(i2*)(intptr_t)v2081 = v2078;

	i8 v2082 = (i8)(intptr_t)(ws+3396);
	i2 v2083 = *(i2*)(intptr_t)v2082;
	i8 v2084 = (i8)(intptr_t)(ws+3400);
	i8 v2085 = *(i8*)(intptr_t)v2084;
	i8 v2086 = v2085+(+4);
	*(i2*)(intptr_t)v2086 = v2083;

	i8 v2087 = (i8)(intptr_t)(ws+3398);
	i1 v2088 = *(i1*)(intptr_t)v2087;
	i8 v2089 = (i8)(intptr_t)(ws+3400);
	i8 v2090 = *(i8*)(intptr_t)v2089;
	i8 v2091 = v2090+(+6);
	*(i1*)(intptr_t)v2091 = v2088;

endsub:;
	*p2047 = *(i8*)(intptr_t)(ws+3400);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3376 length ws+32
void f110_MidStore(i8* p2124 /* m */, i8 p2125 /* right */, i8 p2126 /* left */, i1 p2127 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2127; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2126; /*left */
	*(i8*)(intptr_t)(ws+3392) = p2125; /*right */

	i8 v2128 = (i8)(intptr_t)(ws+3376);
	i1 v2129 = *(i1*)(intptr_t)v2128;
	i8 v2130 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2131;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2130)(&v2131, v2129);
	i1 v2132 = v2131+(+54);
	i8 v2133 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2134;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2133)(&v2134, v2132);
	i8 v2135 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2135 = v2134;

	i8 v2136 = (i8)(intptr_t)(ws+3384);
	i8 v2137 = *(i8*)(intptr_t)v2136;
	i8 v2138 = (i8)(intptr_t)(ws+3400);
	i8 v2139 = *(i8*)(intptr_t)v2138;
	i8 v2140 = v2139+(+24);
	*(i8*)(intptr_t)v2140 = v2137;

	i8 v2141 = (i8)(intptr_t)(ws+3392);
	i8 v2142 = *(i8*)(intptr_t)v2141;
	i8 v2143 = (i8)(intptr_t)(ws+3400);
	i8 v2144 = *(i8*)(intptr_t)v2143;
	i8 v2145 = v2144+(+32);
	*(i8*)(intptr_t)v2145 = v2142;

endsub:;
	*p2124 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3336 length ws+8
void f113_MidEnd(i8* p2188 /* m */) {

	i1 v2189 = (i1)+1;
	i8 v2190 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2191;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2190)(&v2191, v2189);
	i8 v2192 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2192 = v2191;

endsub:;
	*p2188 = *(i8*)(intptr_t)(ws+3336);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3344 length ws+40
void f114_MidCalle(i8* p2193 /* m */, i8 p2194 /* subr */, i8 p2195 /* right */, i8 p2196 /* left */, i1 p2197 /* width */) {
	*(i1*)(intptr_t)(ws+3344) = p2197; /*width */
	*(i8*)(intptr_t)(ws+3352) = p2196; /*left */
	*(i8*)(intptr_t)(ws+3360) = p2195; /*right */
	*(i8*)(intptr_t)(ws+3368) = p2194; /*subr */

	i8 v2198 = (i8)(intptr_t)(ws+3344);
	i1 v2199 = *(i1*)(intptr_t)v2198;
	i8 v2200 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2201;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2200)(&v2201, v2199);
	i1 v2202 = v2201+(+30);
	i8 v2203 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2204;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2203)(&v2204, v2202);
	i8 v2205 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v2205 = v2204;

	i8 v2206 = (i8)(intptr_t)(ws+3352);
	i8 v2207 = *(i8*)(intptr_t)v2206;
	i8 v2208 = (i8)(intptr_t)(ws+3376);
	i8 v2209 = *(i8*)(intptr_t)v2208;
	i8 v2210 = v2209+(+24);
	*(i8*)(intptr_t)v2210 = v2207;

	i8 v2211 = (i8)(intptr_t)(ws+3360);
	i8 v2212 = *(i8*)(intptr_t)v2211;
	i8 v2213 = (i8)(intptr_t)(ws+3376);
	i8 v2214 = *(i8*)(intptr_t)v2213;
	i8 v2215 = v2214+(+32);
	*(i8*)(intptr_t)v2215 = v2212;

	i8 v2216 = (i8)(intptr_t)(ws+3368);
	i8 v2217 = *(i8*)(intptr_t)v2216;
	i8 v2218 = (i8)(intptr_t)(ws+3376);
	i8 v2219 = *(i8*)(intptr_t)v2218;
	*(i8*)(intptr_t)v2219 = v2217;

endsub:;
	*p2193 = *(i8*)(intptr_t)(ws+3376);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLoad workspace at ws+3408 length ws+24
void f116_MidLoad(i8* p2242 /* m */, i8 p2243 /* left */, i1 p2244 /* width */) {
	*(i1*)(intptr_t)(ws+3408) = p2244; /*width */
	*(i8*)(intptr_t)(ws+3416) = p2243; /*left */

	i8 v2245 = (i8)(intptr_t)(ws+3408);
	i1 v2246 = *(i1*)(intptr_t)v2245;
	i8 v2247 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2248;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2247)(&v2248, v2246);
	i1 v2249 = v2248+(+49);
	i8 v2250 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2251;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2250)(&v2251, v2249);
	i8 v2252 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2252 = v2251;

	i8 v2253 = (i8)(intptr_t)(ws+3416);
	i8 v2254 = *(i8*)(intptr_t)v2253;
	i8 v2255 = (i8)(intptr_t)(ws+3424);
	i8 v2256 = *(i8*)(intptr_t)v2255;
	i8 v2257 = v2256+(+24);
	*(i8*)(intptr_t)v2257 = v2254;

endsub:;
	*p2242 = *(i8*)(intptr_t)(ws+3424);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3344 length ws+16
void f117_MidEndsub(i8* p2258 /* m */, i8 p2259 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p2259; /*subr */

	i1 v2260 = (i1)+5;
	i8 v2261 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2262;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2261)(&v2262, v2260);
	i8 v2263 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2263 = v2262;

	i8 v2264 = (i8)(intptr_t)(ws+3344);
	i8 v2265 = *(i8*)(intptr_t)v2264;
	i8 v2266 = (i8)(intptr_t)(ws+3352);
	i8 v2267 = *(i8*)(intptr_t)v2266;
	*(i8*)(intptr_t)v2267 = v2265;

endsub:;
	*p2258 = *(i8*)(intptr_t)(ws+3352);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3376 length ws+16
void f118_MidInit(i8* p2268 /* m */, i4 p2269 /* value */, i1 p2270 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2270; /*width */
	*(i4*)(intptr_t)(ws+3380) = p2269; /*value */

	i8 v2271 = (i8)(intptr_t)(ws+3376);
	i1 v2272 = *(i1*)(intptr_t)v2271;
	i8 v2273 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2274;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2273)(&v2274, v2272);
	i1 v2275 = v2274+(+7);
	i8 v2276 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2277;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2276)(&v2277, v2275);
	i8 v2278 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v2278 = v2277;

	i8 v2279 = (i8)(intptr_t)(ws+3380);
	i4 v2280 = *(i4*)(intptr_t)v2279;
	i8 v2281 = (i8)(intptr_t)(ws+3384);
	i8 v2282 = *(i8*)(intptr_t)v2281;
	*(i4*)(intptr_t)v2282 = v2280;

endsub:;
	*p2268 = *(i8*)(intptr_t)(ws+3384);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3368 length ws+40
void f119_MidBltu(i8* p2283 /* m */, i1 p2284 /* negated */, i2 p2285 /* fallthrough */, i2 p2286 /* falselabel */, i2 p2287 /* truelabel */, i8 p2288 /* right */, i8 p2289 /* left */, i1 p2290 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2290; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2289; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2288; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2287; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2286; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2285; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2284; /*negated */

	i8 v2291 = (i8)(intptr_t)(ws+3368);
	i1 v2292 = *(i1*)(intptr_t)v2291;
	i8 v2293 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2294;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2293)(&v2294, v2292);
	i1 v2295 = v2294+(+71);
	i8 v2296 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2297;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2296)(&v2297, v2295);
	i8 v2298 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2298 = v2297;

	i8 v2299 = (i8)(intptr_t)(ws+3376);
	i8 v2300 = *(i8*)(intptr_t)v2299;
	i8 v2301 = (i8)(intptr_t)(ws+3400);
	i8 v2302 = *(i8*)(intptr_t)v2301;
	i8 v2303 = v2302+(+24);
	*(i8*)(intptr_t)v2303 = v2300;

	i8 v2304 = (i8)(intptr_t)(ws+3384);
	i8 v2305 = *(i8*)(intptr_t)v2304;
	i8 v2306 = (i8)(intptr_t)(ws+3400);
	i8 v2307 = *(i8*)(intptr_t)v2306;
	i8 v2308 = v2307+(+32);
	*(i8*)(intptr_t)v2308 = v2305;

	i8 v2309 = (i8)(intptr_t)(ws+3392);
	i2 v2310 = *(i2*)(intptr_t)v2309;
	i8 v2311 = (i8)(intptr_t)(ws+3400);
	i8 v2312 = *(i8*)(intptr_t)v2311;
	*(i2*)(intptr_t)v2312 = v2310;

	i8 v2313 = (i8)(intptr_t)(ws+3394);
	i2 v2314 = *(i2*)(intptr_t)v2313;
	i8 v2315 = (i8)(intptr_t)(ws+3400);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	i8 v2317 = v2316+(+2);
	*(i2*)(intptr_t)v2317 = v2314;

	i8 v2318 = (i8)(intptr_t)(ws+3396);
	i2 v2319 = *(i2*)(intptr_t)v2318;
	i8 v2320 = (i8)(intptr_t)(ws+3400);
	i8 v2321 = *(i8*)(intptr_t)v2320;
	i8 v2322 = v2321+(+4);
	*(i2*)(intptr_t)v2322 = v2319;

	i8 v2323 = (i8)(intptr_t)(ws+3398);
	i1 v2324 = *(i1*)(intptr_t)v2323;
	i8 v2325 = (i8)(intptr_t)(ws+3400);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	i8 v2327 = v2326+(+6);
	*(i1*)(intptr_t)v2327 = v2324;

endsub:;
	*p2283 = *(i8*)(intptr_t)(ws+3400);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3376 length ws+32
void f121_MidPoparg(i8* p2350 /* m */, i1 p2351 /* remaining */, i8 p2352 /* subr */, i1 p2353 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2353; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2352; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p2351; /*remaining */

	i8 v2354 = (i8)(intptr_t)(ws+3376);
	i1 v2355 = *(i1*)(intptr_t)v2354;
	i8 v2356 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2357;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2356)(&v2357, v2355);
	i1 v2358 = v2357+(+40);
	i8 v2359 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2360;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2359)(&v2360, v2358);
	i8 v2361 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2361 = v2360;

	i8 v2362 = (i8)(intptr_t)(ws+3384);
	i8 v2363 = *(i8*)(intptr_t)v2362;
	i8 v2364 = (i8)(intptr_t)(ws+3400);
	i8 v2365 = *(i8*)(intptr_t)v2364;
	*(i8*)(intptr_t)v2365 = v2363;

	i8 v2366 = (i8)(intptr_t)(ws+3392);
	i1 v2367 = *(i1*)(intptr_t)v2366;
	i8 v2368 = (i8)(intptr_t)(ws+3400);
	i8 v2369 = *(i8*)(intptr_t)v2368;
	i8 v2370 = v2369+(+8);
	*(i1*)(intptr_t)v2370 = v2367;

endsub:;
	*p2350 = *(i8*)(intptr_t)(ws+3400);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3368 length ws+40
void f122_MidBlts(i8* p2371 /* m */, i1 p2372 /* negated */, i2 p2373 /* fallthrough */, i2 p2374 /* falselabel */, i2 p2375 /* truelabel */, i8 p2376 /* right */, i8 p2377 /* left */, i1 p2378 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2378; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2377; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2376; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2375; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2374; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2373; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2372; /*negated */

	i8 v2379 = (i8)(intptr_t)(ws+3368);
	i1 v2380 = *(i1*)(intptr_t)v2379;
	i8 v2381 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2382;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2381)(&v2382, v2380);
	i1 v2383 = v2382+(+66);
	i8 v2384 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2385;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2384)(&v2385, v2383);
	i8 v2386 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2386 = v2385;

	i8 v2387 = (i8)(intptr_t)(ws+3376);
	i8 v2388 = *(i8*)(intptr_t)v2387;
	i8 v2389 = (i8)(intptr_t)(ws+3400);
	i8 v2390 = *(i8*)(intptr_t)v2389;
	i8 v2391 = v2390+(+24);
	*(i8*)(intptr_t)v2391 = v2388;

	i8 v2392 = (i8)(intptr_t)(ws+3384);
	i8 v2393 = *(i8*)(intptr_t)v2392;
	i8 v2394 = (i8)(intptr_t)(ws+3400);
	i8 v2395 = *(i8*)(intptr_t)v2394;
	i8 v2396 = v2395+(+32);
	*(i8*)(intptr_t)v2396 = v2393;

	i8 v2397 = (i8)(intptr_t)(ws+3392);
	i2 v2398 = *(i2*)(intptr_t)v2397;
	i8 v2399 = (i8)(intptr_t)(ws+3400);
	i8 v2400 = *(i8*)(intptr_t)v2399;
	*(i2*)(intptr_t)v2400 = v2398;

	i8 v2401 = (i8)(intptr_t)(ws+3394);
	i2 v2402 = *(i2*)(intptr_t)v2401;
	i8 v2403 = (i8)(intptr_t)(ws+3400);
	i8 v2404 = *(i8*)(intptr_t)v2403;
	i8 v2405 = v2404+(+2);
	*(i2*)(intptr_t)v2405 = v2402;

	i8 v2406 = (i8)(intptr_t)(ws+3396);
	i2 v2407 = *(i2*)(intptr_t)v2406;
	i8 v2408 = (i8)(intptr_t)(ws+3400);
	i8 v2409 = *(i8*)(intptr_t)v2408;
	i8 v2410 = v2409+(+4);
	*(i2*)(intptr_t)v2410 = v2407;

	i8 v2411 = (i8)(intptr_t)(ws+3398);
	i1 v2412 = *(i1*)(intptr_t)v2411;
	i8 v2413 = (i8)(intptr_t)(ws+3400);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = v2414+(+6);
	*(i1*)(intptr_t)v2415 = v2412;

endsub:;
	*p2371 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitaddress workspace at ws+3352 length ws+24
void f123_MidInitaddress(i8* p2416 /* m */, i2 p2417 /* off */, i8 p2418 /* sym */) {
	*(i8*)(intptr_t)(ws+3352) = p2418; /*sym */
	*(i2*)(intptr_t)(ws+3360) = p2417; /*off */

	i1 v2419 = (i1)+13;
	i8 v2420 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2421;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2420)(&v2421, v2419);
	i8 v2422 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v2422 = v2421;

	i8 v2423 = (i8)(intptr_t)(ws+3352);
	i8 v2424 = *(i8*)(intptr_t)v2423;
	i8 v2425 = (i8)(intptr_t)(ws+3368);
	i8 v2426 = *(i8*)(intptr_t)v2425;
	*(i8*)(intptr_t)v2426 = v2424;

	i8 v2427 = (i8)(intptr_t)(ws+3360);
	i2 v2428 = *(i2*)(intptr_t)v2427;
	i8 v2429 = (i8)(intptr_t)(ws+3368);
	i8 v2430 = *(i8*)(intptr_t)v2429;
	i8 v2431 = v2430+(+8);
	*(i2*)(intptr_t)v2431 = v2428;

endsub:;
	*p2416 = *(i8*)(intptr_t)(ws+3368);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3328 length ws+8
void f125_MidReturn(i8* p2454 /* m */) {

	i1 v2455 = (i1)+28;
	i8 v2456 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2457;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2456)(&v2457, v2455);
	i8 v2458 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2458 = v2457;

endsub:;
	*p2454 = *(i8*)(intptr_t)(ws+3328);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3336 length ws+24
void f128_MidStartcase(i8* p2502 /* m */, i8 p2503 /* left */, i1 p2504 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2504; /*width */
	*(i8*)(intptr_t)(ws+3344) = p2503; /*left */

	i8 v2505 = (i8)(intptr_t)(ws+3336);
	i1 v2506 = *(i1*)(intptr_t)v2505;
	i8 v2507 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2508;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2507)(&v2508, v2506);
	i1 v2509 = v2508+(+76);
	i8 v2510 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2511;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2510)(&v2511, v2509);
	i8 v2512 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2512 = v2511;

	i8 v2513 = (i8)(intptr_t)(ws+3344);
	i8 v2514 = *(i8*)(intptr_t)v2513;
	i8 v2515 = (i8)(intptr_t)(ws+3352);
	i8 v2516 = *(i8*)(intptr_t)v2515;
	i8 v2517 = v2516+(+24);
	*(i8*)(intptr_t)v2517 = v2514;

endsub:;
	*p2502 = *(i8*)(intptr_t)(ws+3352);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3408 length ws+8
void f130_MidAsmgroupstart(i8* p2540 /* m */) {

	i1 v2541 = (i1)+16;
	i8 v2542 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2543;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2542)(&v2543, v2541);
	i8 v2544 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2544 = v2543;

endsub:;
	*p2540 = *(i8*)(intptr_t)(ws+3408);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3328 length ws+8
void f131_MidAsmend(i8* p2545 /* m */) {

	i1 v2546 = (i1)+23;
	i8 v2547 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2548;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2547)(&v2548, v2546);
	i8 v2549 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2549 = v2548;

endsub:;
	*p2545 = *(i8*)(intptr_t)(ws+3328);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3328 length ws+8
void f133_MidAsmstart(i8* p2572 /* m */) {

	i1 v2573 = (i1)+18;
	i8 v2574 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2575;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2574)(&v2575, v2573);
	i8 v2576 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2576 = v2575;

endsub:;
	*p2572 = *(i8*)(intptr_t)(ws+3328);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+3208 length ws+8
void f137_MidEndfile(i8* p2643 /* m */) {

	i1 v2644 = (i1)+3;
	i8 v2645 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2646;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2645)(&v2646, v2644);
	i8 v2647 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v2647 = v2646;

endsub:;
	*p2643 = *(i8*)(intptr_t)(ws+3208);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3376 length ws+32
void f138_MidCall(i8* p2648 /* m */, i8 p2649 /* subr */, i8 p2650 /* right */, i8 p2651 /* left */) {
	*(i8*)(intptr_t)(ws+3376) = p2651; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2650; /*right */
	*(i8*)(intptr_t)(ws+3392) = p2649; /*subr */

	i1 v2652 = (i1)+29;
	i8 v2653 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2654;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2653)(&v2654, v2652);
	i8 v2655 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2655 = v2654;

	i8 v2656 = (i8)(intptr_t)(ws+3376);
	i8 v2657 = *(i8*)(intptr_t)v2656;
	i8 v2658 = (i8)(intptr_t)(ws+3400);
	i8 v2659 = *(i8*)(intptr_t)v2658;
	i8 v2660 = v2659+(+24);
	*(i8*)(intptr_t)v2660 = v2657;

	i8 v2661 = (i8)(intptr_t)(ws+3384);
	i8 v2662 = *(i8*)(intptr_t)v2661;
	i8 v2663 = (i8)(intptr_t)(ws+3400);
	i8 v2664 = *(i8*)(intptr_t)v2663;
	i8 v2665 = v2664+(+32);
	*(i8*)(intptr_t)v2665 = v2662;

	i8 v2666 = (i8)(intptr_t)(ws+3392);
	i8 v2667 = *(i8*)(intptr_t)v2666;
	i8 v2668 = (i8)(intptr_t)(ws+3400);
	i8 v2669 = *(i8*)(intptr_t)v2668;
	*(i8*)(intptr_t)v2669 = v2667;

endsub:;
	*p2648 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3328 length ws+16
void f140_MidAsmtext(i8* p2692 /* m */, i8 p2693 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2693; /*text */

	i1 v2694 = (i1)+19;
	i8 v2695 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2696;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2695)(&v2696, v2694);
	i8 v2697 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2697 = v2696;

	i8 v2698 = (i8)(intptr_t)(ws+3328);
	i8 v2699 = *(i8*)(intptr_t)v2698;
	i8 v2700 = (i8)(intptr_t)(ws+3336);
	i8 v2701 = *(i8*)(intptr_t)v2700;
	*(i8*)(intptr_t)v2701 = v2699;

endsub:;
	*p2692 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidSubref workspace at ws+3328 length ws+16
void f141_MidSubref(i8* p2702 /* m */, i8 p2703 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p2703; /*subr */

	i1 v2704 = (i1)+48;
	i8 v2705 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2706;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2705)(&v2706, v2704);
	i8 v2707 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2707 = v2706;

	i8 v2708 = (i8)(intptr_t)(ws+3328);
	i8 v2709 = *(i8*)(intptr_t)v2708;
	i8 v2710 = (i8)(intptr_t)(ws+3336);
	i8 v2711 = *(i8*)(intptr_t)v2710;
	*(i8*)(intptr_t)v2711 = v2709;

endsub:;
	*p2702 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3328 length ws+32
void f142_MidBor(i8* p2712 /* m */, i1 p2713 /* negated */, i2 p2714 /* fallthrough */, i2 p2715 /* falselabel */, i2 p2716 /* truelabel */, i8 p2717 /* right */, i8 p2718 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2718; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2717; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2716; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2715; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2714; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2713; /*negated */

	i1 v2719 = (i1)+60;
	i8 v2720 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2721;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2720)(&v2721, v2719);
	i8 v2722 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2722 = v2721;

	i8 v2723 = (i8)(intptr_t)(ws+3328);
	i8 v2724 = *(i8*)(intptr_t)v2723;
	i8 v2725 = (i8)(intptr_t)(ws+3352);
	i8 v2726 = *(i8*)(intptr_t)v2725;
	i8 v2727 = v2726+(+24);
	*(i8*)(intptr_t)v2727 = v2724;

	i8 v2728 = (i8)(intptr_t)(ws+3336);
	i8 v2729 = *(i8*)(intptr_t)v2728;
	i8 v2730 = (i8)(intptr_t)(ws+3352);
	i8 v2731 = *(i8*)(intptr_t)v2730;
	i8 v2732 = v2731+(+32);
	*(i8*)(intptr_t)v2732 = v2729;

	i8 v2733 = (i8)(intptr_t)(ws+3344);
	i2 v2734 = *(i2*)(intptr_t)v2733;
	i8 v2735 = (i8)(intptr_t)(ws+3352);
	i8 v2736 = *(i8*)(intptr_t)v2735;
	*(i2*)(intptr_t)v2736 = v2734;

	i8 v2737 = (i8)(intptr_t)(ws+3346);
	i2 v2738 = *(i2*)(intptr_t)v2737;
	i8 v2739 = (i8)(intptr_t)(ws+3352);
	i8 v2740 = *(i8*)(intptr_t)v2739;
	i8 v2741 = v2740+(+2);
	*(i2*)(intptr_t)v2741 = v2738;

	i8 v2742 = (i8)(intptr_t)(ws+3348);
	i2 v2743 = *(i2*)(intptr_t)v2742;
	i8 v2744 = (i8)(intptr_t)(ws+3352);
	i8 v2745 = *(i8*)(intptr_t)v2744;
	i8 v2746 = v2745+(+4);
	*(i2*)(intptr_t)v2746 = v2743;

	i8 v2747 = (i8)(intptr_t)(ws+3350);
	i1 v2748 = *(i1*)(intptr_t)v2747;
	i8 v2749 = (i8)(intptr_t)(ws+3352);
	i8 v2750 = *(i8*)(intptr_t)v2749;
	i8 v2751 = v2750+(+6);
	*(i1*)(intptr_t)v2751 = v2748;

endsub:;
	*p2712 = *(i8*)(intptr_t)(ws+3352);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3328 length ws+32
void f144_MidBand(i8* p2774 /* m */, i1 p2775 /* negated */, i2 p2776 /* fallthrough */, i2 p2777 /* falselabel */, i2 p2778 /* truelabel */, i8 p2779 /* right */, i8 p2780 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2780; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2779; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2778; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2777; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2776; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2775; /*negated */

	i1 v2781 = (i1)+59;
	i8 v2782 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2783;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2782)(&v2783, v2781);
	i8 v2784 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2784 = v2783;

	i8 v2785 = (i8)(intptr_t)(ws+3328);
	i8 v2786 = *(i8*)(intptr_t)v2785;
	i8 v2787 = (i8)(intptr_t)(ws+3352);
	i8 v2788 = *(i8*)(intptr_t)v2787;
	i8 v2789 = v2788+(+24);
	*(i8*)(intptr_t)v2789 = v2786;

	i8 v2790 = (i8)(intptr_t)(ws+3336);
	i8 v2791 = *(i8*)(intptr_t)v2790;
	i8 v2792 = (i8)(intptr_t)(ws+3352);
	i8 v2793 = *(i8*)(intptr_t)v2792;
	i8 v2794 = v2793+(+32);
	*(i8*)(intptr_t)v2794 = v2791;

	i8 v2795 = (i8)(intptr_t)(ws+3344);
	i2 v2796 = *(i2*)(intptr_t)v2795;
	i8 v2797 = (i8)(intptr_t)(ws+3352);
	i8 v2798 = *(i8*)(intptr_t)v2797;
	*(i2*)(intptr_t)v2798 = v2796;

	i8 v2799 = (i8)(intptr_t)(ws+3346);
	i2 v2800 = *(i2*)(intptr_t)v2799;
	i8 v2801 = (i8)(intptr_t)(ws+3352);
	i8 v2802 = *(i8*)(intptr_t)v2801;
	i8 v2803 = v2802+(+2);
	*(i2*)(intptr_t)v2803 = v2800;

	i8 v2804 = (i8)(intptr_t)(ws+3348);
	i2 v2805 = *(i2*)(intptr_t)v2804;
	i8 v2806 = (i8)(intptr_t)(ws+3352);
	i8 v2807 = *(i8*)(intptr_t)v2806;
	i8 v2808 = v2807+(+4);
	*(i2*)(intptr_t)v2808 = v2805;

	i8 v2809 = (i8)(intptr_t)(ws+3350);
	i1 v2810 = *(i1*)(intptr_t)v2809;
	i8 v2811 = (i8)(intptr_t)(ws+3352);
	i8 v2812 = *(i8*)(intptr_t)v2811;
	i8 v2813 = v2812+(+6);
	*(i1*)(intptr_t)v2813 = v2810;

endsub:;
	*p2774 = *(i8*)(intptr_t)(ws+3352);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3336 length ws+48
void f146_MidArg(i8* p2836 /* m */, i1 p2837 /* remaining */, i8 p2838 /* subr */, i8 p2839 /* right */, i8 p2840 /* left */, i1 p2841 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2841; /*width */
	*(i8*)(intptr_t)(ws+3344) = p2840; /*left */
	*(i8*)(intptr_t)(ws+3352) = p2839; /*right */
	*(i8*)(intptr_t)(ws+3360) = p2838; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p2837; /*remaining */

	i8 v2842 = (i8)(intptr_t)(ws+3336);
	i1 v2843 = *(i1*)(intptr_t)v2842;
	i8 v2844 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2845;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2844)(&v2845, v2843);
	i1 v2846 = v2845+(+35);
	i8 v2847 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2848;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2847)(&v2848, v2846);
	i8 v2849 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v2849 = v2848;

	i8 v2850 = (i8)(intptr_t)(ws+3344);
	i8 v2851 = *(i8*)(intptr_t)v2850;
	i8 v2852 = (i8)(intptr_t)(ws+3376);
	i8 v2853 = *(i8*)(intptr_t)v2852;
	i8 v2854 = v2853+(+24);
	*(i8*)(intptr_t)v2854 = v2851;

	i8 v2855 = (i8)(intptr_t)(ws+3352);
	i8 v2856 = *(i8*)(intptr_t)v2855;
	i8 v2857 = (i8)(intptr_t)(ws+3376);
	i8 v2858 = *(i8*)(intptr_t)v2857;
	i8 v2859 = v2858+(+32);
	*(i8*)(intptr_t)v2859 = v2856;

	i8 v2860 = (i8)(intptr_t)(ws+3360);
	i8 v2861 = *(i8*)(intptr_t)v2860;
	i8 v2862 = (i8)(intptr_t)(ws+3376);
	i8 v2863 = *(i8*)(intptr_t)v2862;
	*(i8*)(intptr_t)v2863 = v2861;

	i8 v2864 = (i8)(intptr_t)(ws+3368);
	i1 v2865 = *(i1*)(intptr_t)v2864;
	i8 v2866 = (i8)(intptr_t)(ws+3376);
	i8 v2867 = *(i8*)(intptr_t)v2866;
	i8 v2868 = v2867+(+8);
	*(i1*)(intptr_t)v2868 = v2865;

endsub:;
	*p2836 = *(i8*)(intptr_t)(ws+3376);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3392 length ws+16
void f147_MidLabel(i8* p2869 /* m */, i2 p2870 /* label */) {
	*(i2*)(intptr_t)(ws+3392) = p2870; /*label */

	i1 v2871 = (i1)+26;
	i8 v2872 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2873;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2872)(&v2873, v2871);
	i8 v2874 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2874 = v2873;

	i8 v2875 = (i8)(intptr_t)(ws+3392);
	i2 v2876 = *(i2*)(intptr_t)v2875;
	i8 v2877 = (i8)(intptr_t)(ws+3400);
	i8 v2878 = *(i8*)(intptr_t)v2877;
	*(i2*)(intptr_t)v2878 = v2876;

endsub:;
	*p2869 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3336 length ws+24
void f148_MidAddress(i8* p2879 /* m */, i2 p2880 /* off */, i8 p2881 /* sym */) {
	*(i8*)(intptr_t)(ws+3336) = p2881; /*sym */
	*(i2*)(intptr_t)(ws+3344) = p2880; /*off */

	i1 v2882 = (i1)+47;
	i8 v2883 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2884;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2883)(&v2884, v2882);
	i8 v2885 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2885 = v2884;

	i8 v2886 = (i8)(intptr_t)(ws+3336);
	i8 v2887 = *(i8*)(intptr_t)v2886;
	i8 v2888 = (i8)(intptr_t)(ws+3352);
	i8 v2889 = *(i8*)(intptr_t)v2888;
	*(i8*)(intptr_t)v2889 = v2887;

	i8 v2890 = (i8)(intptr_t)(ws+3344);
	i2 v2891 = *(i2*)(intptr_t)v2890;
	i8 v2892 = (i8)(intptr_t)(ws+3352);
	i8 v2893 = *(i8*)(intptr_t)v2892;
	i8 v2894 = v2893+(+8);
	*(i2*)(intptr_t)v2894 = v2891;

endsub:;
	*p2879 = *(i8*)(intptr_t)(ws+3352);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+3208 length ws+8
void f150_MidStartfile(i8* p2916 /* m */) {

	i1 v2917 = (i1)+2;
	i8 v2918 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2919;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2918)(&v2919, v2917);
	i8 v2920 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v2920 = v2919;

endsub:;
	*p2916 = *(i8*)(intptr_t)(ws+3208);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3328 length ws+8
void f151_MidEndinit(i8* p2921 /* m */) {

	i1 v2922 = (i1)+15;
	i8 v2923 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2924;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2923)(&v2924, v2922);
	i8 v2925 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2925 = v2924;

endsub:;
	*p2921 = *(i8*)(intptr_t)(ws+3328);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3328 length ws+16
void f152_MidAsmsymbol(i8* p2926 /* m */, i8 p2927 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p2927; /*sym */

	i1 v2928 = (i1)+20;
	i8 v2929 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2930;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2929)(&v2930, v2928);
	i8 v2931 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2931 = v2930;

	i8 v2932 = (i8)(intptr_t)(ws+3328);
	i8 v2933 = *(i8*)(intptr_t)v2932;
	i8 v2934 = (i8)(intptr_t)(ws+3336);
	i8 v2935 = *(i8*)(intptr_t)v2934;
	*(i8*)(intptr_t)v2935 = v2933;

endsub:;
	*p2926 = *(i8*)(intptr_t)(ws+3336);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3336 length ws+16
void f153_MidEndcase(i8* p2936 /* m */, i1 p2937 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2937; /*width */

	i8 v2938 = (i8)(intptr_t)(ws+3336);
	i1 v2939 = *(i1*)(intptr_t)v2938;
	i8 v2940 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2941;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2940)(&v2941, v2939);
	i1 v2942 = v2941+(+86);
	i8 v2943 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2944;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2943)(&v2944, v2942);
	i8 v2945 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2945 = v2944;

endsub:;
	*p2936 = *(i8*)(intptr_t)(ws+3344);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3328 length ws+16
void f154_MidString(i8* p2946 /* m */, i8 p2947 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2947; /*text */

	i1 v2948 = (i1)+46;
	i8 v2949 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2950;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2949)(&v2950, v2948);
	i8 v2951 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2951 = v2950;

	i8 v2952 = (i8)(intptr_t)(ws+3328);
	i8 v2953 = *(i8*)(intptr_t)v2952;
	i8 v2954 = (i8)(intptr_t)(ws+3336);
	i8 v2955 = *(i8*)(intptr_t)v2954;
	*(i8*)(intptr_t)v2955 = v2953;

endsub:;
	*p2946 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsubref workspace at ws+3328 length ws+16
void f155_MidAsmsubref(i8* p2956 /* m */, i8 p2957 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p2957; /*subr */

	i1 v2958 = (i1)+21;
	i8 v2959 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2960;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2959)(&v2960, v2958);
	i8 v2961 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2961 = v2960;

	i8 v2962 = (i8)(intptr_t)(ws+3328);
	i8 v2963 = *(i8*)(intptr_t)v2962;
	i8 v2964 = (i8)(intptr_t)(ws+3336);
	i8 v2965 = *(i8*)(intptr_t)v2964;
	*(i8*)(intptr_t)v2965 = v2963;

endsub:;
	*p2956 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3424 length ws+16
void f157_MidConstant(i8* p2977 /* m */, i4 p2978 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p2978; /*value */

	i1 v2979 = (i1)+45;
	i8 v2980 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2981;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2980)(&v2981, v2979);
	i8 v2982 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2982 = v2981;

	i8 v2983 = (i8)(intptr_t)(ws+3424);
	i4 v2984 = *(i4*)(intptr_t)v2983;
	i8 v2985 = (i8)(intptr_t)(ws+3432);
	i8 v2986 = *(i8*)(intptr_t)v2985;
	*(i4*)(intptr_t)v2986 = v2984;

endsub:;
	*p2977 = *(i8*)(intptr_t)(ws+3432);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3336 length ws+16
void f158_MidJump(i8* p2987 /* m */, i2 p2988 /* label */) {
	*(i2*)(intptr_t)(ws+3336) = p2988; /*label */

	i1 v2989 = (i1)+27;
	i8 v2990 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2991;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2990)(&v2991, v2989);
	i8 v2992 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2992 = v2991;

	i8 v2993 = (i8)(intptr_t)(ws+3336);
	i2 v2994 = *(i2*)(intptr_t)v2993;
	i8 v2995 = (i8)(intptr_t)(ws+3344);
	i8 v2996 = *(i8*)(intptr_t)v2995;
	*(i2*)(intptr_t)v2996 = v2994;

endsub:;
	*p2987 = *(i8*)(intptr_t)(ws+3344);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3440 length ws+16
void f98_AllocateNewNode(i8* p3033 /* m */, i1 p3034 /* code */) {
	*(i1*)(intptr_t)(ws+3440) = p3034; /*code */

	i8 v3035 = (i8)(intptr_t)(ws+928);
	i8 v3036 = *(i8*)(intptr_t)v3035;
	i8 v3037 = (i8)+0;
	if (v3036==v3037) goto c02_0205; else goto c02_0204;

c02_0204:;

	i8 v3038 = (i8)(intptr_t)(ws+928);
	i8 v3039 = *(i8*)(intptr_t)v3038;
	i8 v3040 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3040 = v3039;

	i8 v3041 = (i8)(intptr_t)(ws+928);
	i8 v3042 = *(i8*)(intptr_t)v3041;
	i8 v3043 = v3042+(+24);
	i8 v3044 = *(i8*)(intptr_t)v3043;
	i8 v3045 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3045 = v3044;

	i8 v3046 = (i8)(intptr_t)(ws+3448);
	i8 v3047 = *(i8*)(intptr_t)v3046;
	i1 v3048 = (i1)+0;
	i8 v3049 = (i8)+41;
	i8 v3050 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v3050)(v3049, v3048, v3047);

	goto c02_0201;

c02_0205:;

	i8 v3051 = (i8)+41;
	i8 v3052 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v3053;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3052)(&v3053, v3051);
	i8 v3054 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3054 = v3053;

c02_0201:;

	i8 v3055 = (i8)(intptr_t)(ws+3440);
	i1 v3056 = *(i1*)(intptr_t)v3055;
	i8 v3057 = (i8)(intptr_t)(ws+3448);
	i8 v3058 = *(i8*)(intptr_t)v3057;
	i8 v3059 = v3058+(+40);
	*(i1*)(intptr_t)v3059 = v3056;

endsub:;
	*p3033 = *(i8*)(intptr_t)(ws+3448);
}

// FreeNode workspace at ws+3464 length ws+8
void f161_FreeNode(i8 p3060 /* node */) {
	*(i8*)(intptr_t)(ws+3464) = p3060; /*node */

	i8 v3061 = (i8)(intptr_t)(ws+928);
	i8 v3062 = *(i8*)(intptr_t)v3061;
	i8 v3063 = (i8)(intptr_t)(ws+3464);
	i8 v3064 = *(i8*)(intptr_t)v3063;
	i8 v3065 = v3064+(+24);
	*(i8*)(intptr_t)v3065 = v3062;

	i8 v3066 = (i8)(intptr_t)(ws+3464);
	i8 v3067 = *(i8*)(intptr_t)v3066;
	i8 v3068 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3068 = v3067;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+3472 length ws+8
void f68_PurgeAllFreeNodes(void) {

c02_0208:;

	i8 v3069 = (i8)(intptr_t)(ws+928);
	i8 v3070 = *(i8*)(intptr_t)v3069;
	i8 v3071 = (i8)+0;
	if (v3070==v3071) goto c02_020b; else goto c02_020a;

c02_020a:;

	i8 v3072 = (i8)(intptr_t)(ws+928);
	i8 v3073 = *(i8*)(intptr_t)v3072;
	i8 v3074 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v3074 = v3073;

	i8 v3075 = (i8)(intptr_t)(ws+928);
	i8 v3076 = *(i8*)(intptr_t)v3075;
	i8 v3077 = v3076+(+24);
	i8 v3078 = *(i8*)(intptr_t)v3077;
	i8 v3079 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3079 = v3078;

	i8 v3080 = (i8)(intptr_t)(ws+3472);
	i8 v3081 = *(i8*)(intptr_t)v3080;
	i8 v3082 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v3082)(v3081);

	goto c02_0208;

c02_020b:;

endsub:;
}

// NodeWidth workspace at ws+3376 length ws+9
void f162_NodeWidth(i1* p3083 /* width */, i8 p3084 /* node */) {
	*(i8*)(intptr_t)(ws+3376) = p3084; /*node */

	i1 v3085 = (i1)+0;
	i8 v3086 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v3086 = v3085;

	i8 v3087 = (i8)(intptr_t)(ws+3376);
	i8 v3088 = *(i8*)(intptr_t)v3087;
	i8 v3089 = v3088+(+16);
	i8 v3090 = *(i8*)(intptr_t)v3089;
	i8 v3091 = (i8)+0;
	if (v3090==v3091) goto c02_0210; else goto c02_020f;

c02_020f:;

	i8 v3092 = (i8)(intptr_t)(ws+3376);
	i8 v3093 = *(i8*)(intptr_t)v3092;
	i8 v3094 = v3093+(+16);
	i8 v3095 = *(i8*)(intptr_t)v3094;
	i8 v3096 = v3095+(+48);
	i2 v3097 = *(i2*)(intptr_t)v3096;
	i1 v3098 = v3097;
	i8 v3099 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v3099 = v3098;

c02_0210:;

c02_020c:;

endsub:;
	*p3083 = *(i1*)(intptr_t)(ws+3384);
}
const i1 c02_s00f7[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3464 length ws+0
void f163_midcodec_i_bad_fold(void) {

	i8 v3100 = (i8)(intptr_t)c02_s00f7;
	i8 v3101 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3101)(v3100);

endsub:;
}
	void f163_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3376 length ws+24
void f164_FoldConstant1(i4* p3102 /* result */, i8 p3103 /* lhsp */, i1 p3104 /* op */) {
	*(i1*)(intptr_t)(ws+3376) = p3104; /*op */
	*(i8*)(intptr_t)(ws+3384) = p3103; /*lhsp */

	i8 v3105 = (i8)(intptr_t)(ws+3384);
	i8 v3106 = *(i8*)(intptr_t)v3105;
	i4 v3107 = *(i4*)(intptr_t)v3106;
	i8 v3108 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v3108 = v3107;

	i8 v3109 = (i8)(intptr_t)(ws+3376);
	i1 v3110 = *(i1*)(intptr_t)v3109;

	if (v3110 != +111) goto c02_0212;

	i8 v3111 = (i8)(intptr_t)(ws+3396);
	i4 v3112 = *(i4*)(intptr_t)v3111;
	i4 v3113 = ~v3112;
	i8 v3114 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v3114 = v3113;

	goto c02_0211;

c02_0212:;

	if (v3110 != +116) goto c02_0213;

	i8 v3115 = (i8)(intptr_t)(ws+3396);
	i4 v3116 = *(i4*)(intptr_t)v3115;
	i4 v3117 = -v3116;
	i8 v3118 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v3118 = v3117;

	goto c02_0211;

c02_0213:;

	i8 v3119 = (i8)(intptr_t)(f163_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3119)();

c02_0211:;


endsub:;
	*p3102 = *(i4*)(intptr_t)(ws+3392);
}
	void f163_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3424 length ws+36
void f165_FoldConstant2(i4* p3120 /* result */, i8 p3121 /* rhsp */, i8 p3122 /* lhsp */, i1 p3123 /* op */) {
	*(i1*)(intptr_t)(ws+3424) = p3123; /*op */
	*(i8*)(intptr_t)(ws+3432) = p3122; /*lhsp */
	*(i8*)(intptr_t)(ws+3440) = p3121; /*rhsp */

	i8 v3124 = (i8)(intptr_t)(ws+3432);
	i8 v3125 = *(i8*)(intptr_t)v3124;
	i4 v3126 = *(i4*)(intptr_t)v3125;
	i8 v3127 = (i8)(intptr_t)(ws+3452);
	*(i4*)(intptr_t)v3127 = v3126;

	i8 v3128 = (i8)(intptr_t)(ws+3440);
	i8 v3129 = *(i8*)(intptr_t)v3128;
	i4 v3130 = *(i4*)(intptr_t)v3129;
	i8 v3131 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3131 = v3130;

	i8 v3132 = (i8)(intptr_t)(ws+3424);
	i1 v3133 = *(i1*)(intptr_t)v3132;

	if (v3133 != +161) goto c02_0215;

	i8 v3134 = (i8)(intptr_t)(ws+3452);
	i4 v3135 = *(i4*)(intptr_t)v3134;
	i8 v3136 = (i8)(intptr_t)(ws+3456);
	i4 v3137 = *(i4*)(intptr_t)v3136;
	i4 v3138 = v3135+v3137;
	i8 v3139 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3139 = v3138;

	goto c02_0214;

c02_0215:;

	if (v3133 != +136) goto c02_0216;

	i8 v3140 = (i8)(intptr_t)(ws+3452);
	i4 v3141 = *(i4*)(intptr_t)v3140;
	i8 v3142 = (i8)(intptr_t)(ws+3456);
	i4 v3143 = *(i4*)(intptr_t)v3142;
	i4 v3144 = v3141-v3143;
	i8 v3145 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3145 = v3144;

	goto c02_0214;

c02_0216:;

	if (v3133 != +166) goto c02_0217;

	i8 v3146 = (i8)(intptr_t)(ws+3452);
	i4 v3147 = *(i4*)(intptr_t)v3146;
	i8 v3148 = (i8)(intptr_t)(ws+3456);
	i4 v3149 = *(i4*)(intptr_t)v3148;
	i4 v3150 = v3147*v3149;
	i8 v3151 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3151 = v3150;

	goto c02_0214;

c02_0217:;

	if (v3133 != +141) goto c02_0218;

	i8 v3152 = (i8)(intptr_t)(ws+3452);
	i4 v3153 = *(i4*)(intptr_t)v3152;
	i8 v3154 = (i8)(intptr_t)(ws+3456);
	i4 v3155 = *(i4*)(intptr_t)v3154;
	i4 v3156 = v3153/v3155;
	i8 v3157 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3157 = v3156;

	goto c02_0214;

c02_0218:;

	if (v3133 != +146) goto c02_0219;

	i8 v3158 = (i8)(intptr_t)(ws+3452);
	i4 v3159 = *(i4*)(intptr_t)v3158;
	i8 v3160 = (i8)(intptr_t)(ws+3456);
	i4 v3161 = *(i4*)(intptr_t)v3160;
	i4 v3162 = (s4)v3159/(s4)v3161;
	i8 v3163 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3163 = v3162;

	goto c02_0214;

c02_0219:;

	if (v3133 != +151) goto c02_021a;

	i8 v3164 = (i8)(intptr_t)(ws+3452);
	i4 v3165 = *(i4*)(intptr_t)v3164;
	i8 v3166 = (i8)(intptr_t)(ws+3456);
	i4 v3167 = *(i4*)(intptr_t)v3166;
	i4 v3168 = v3165%v3167;
	i8 v3169 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3169 = v3168;

	goto c02_0214;

c02_021a:;

	if (v3133 != +156) goto c02_021b;

	i8 v3170 = (i8)(intptr_t)(ws+3452);
	i4 v3171 = *(i4*)(intptr_t)v3170;
	i8 v3172 = (i8)(intptr_t)(ws+3456);
	i4 v3173 = *(i4*)(intptr_t)v3172;
	i4 v3174 = (s4)v3171%(s4)v3173;
	i8 v3175 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3175 = v3174;

	goto c02_0214;

c02_021b:;

	if (v3133 != +171) goto c02_021c;

	i8 v3176 = (i8)(intptr_t)(ws+3452);
	i4 v3177 = *(i4*)(intptr_t)v3176;
	i8 v3178 = (i8)(intptr_t)(ws+3456);
	i4 v3179 = *(i4*)(intptr_t)v3178;
	i4 v3180 = v3177&v3179;
	i8 v3181 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3181 = v3180;

	goto c02_0214;

c02_021c:;

	if (v3133 != +176) goto c02_021d;

	i8 v3182 = (i8)(intptr_t)(ws+3452);
	i4 v3183 = *(i4*)(intptr_t)v3182;
	i8 v3184 = (i8)(intptr_t)(ws+3456);
	i4 v3185 = *(i4*)(intptr_t)v3184;
	i4 v3186 = v3183|v3185;
	i8 v3187 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3187 = v3186;

	goto c02_0214;

c02_021d:;

	if (v3133 != +181) goto c02_021e;

	i8 v3188 = (i8)(intptr_t)(ws+3452);
	i4 v3189 = *(i4*)(intptr_t)v3188;
	i8 v3190 = (i8)(intptr_t)(ws+3456);
	i4 v3191 = *(i4*)(intptr_t)v3190;
	i4 v3192 = v3189^v3191;
	i8 v3193 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3193 = v3192;

	goto c02_0214;

c02_021e:;

	if (v3133 != +121) goto c02_021f;

	i8 v3194 = (i8)(intptr_t)(ws+3452);
	i4 v3195 = *(i4*)(intptr_t)v3194;
	i8 v3196 = (i8)(intptr_t)(ws+3456);
	i4 v3197 = *(i4*)(intptr_t)v3196;
	i1 v3198 = (s1)(s4)v3197;
	i4 v3199 = ((i4)v3195)<<v3198;
	i8 v3200 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3200 = v3199;

	goto c02_0214;

c02_021f:;

	if (v3133 != +126) goto c02_0220;

	i8 v3201 = (i8)(intptr_t)(ws+3452);
	i4 v3202 = *(i4*)(intptr_t)v3201;
	i8 v3203 = (i8)(intptr_t)(ws+3456);
	i4 v3204 = *(i4*)(intptr_t)v3203;
	i1 v3205 = (s1)(s4)v3204;
	i4 v3206 = ((i4)v3202)>>v3205;
	i8 v3207 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3207 = v3206;

	goto c02_0214;

c02_0220:;

	if (v3133 != +131) goto c02_0221;

	i8 v3208 = (i8)(intptr_t)(ws+3452);
	i4 v3209 = *(i4*)(intptr_t)v3208;
	i8 v3210 = (i8)(intptr_t)(ws+3456);
	i4 v3211 = *(i4*)(intptr_t)v3210;
	i1 v3212 = (s1)(s4)v3211;
	i4 v3213 = ((s4)v3209)>>v3212;
	i8 v3214 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3214 = v3213;

	goto c02_0214;

c02_0221:;

	i8 v3215 = (i8)(intptr_t)(f163_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3215)();

c02_0214:;


endsub:;
	*p3120 = *(i4*)(intptr_t)(ws+3448);
}
	void f164_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3352 length ws+24
void f166_MidC1Op(i8* p3216 /* result */, i8 p3217 /* lhs */, i1 p3218 /* width */, i1 p3219 /* op */) {
	*(i1*)(intptr_t)(ws+3352) = p3219; /*op */
	*(i1*)(intptr_t)(ws+3353) = p3218; /*width */
	*(i8*)(intptr_t)(ws+3360) = p3217; /*lhs */

	i8 v3220 = (i8)(intptr_t)(ws+3360);
	i8 v3221 = *(i8*)(intptr_t)v3220;
	i8 v3222 = v3221+(+40);
	i1 v3223 = *(i1*)(intptr_t)v3222;
	i1 v3224 = (i1)+45;
	if (v3223==v3224) goto c02_0225; else goto c02_0226;

c02_0225:;

	i8 v3225 = (i8)(intptr_t)(ws+3352);
	i1 v3226 = *(i1*)(intptr_t)v3225;
	i8 v3227 = (i8)(intptr_t)(ws+3360);
	i8 v3228 = *(i8*)(intptr_t)v3227;
	i8 v3229 = (i8)(intptr_t)(f164_FoldConstant1);
	i4 v3230;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3229)(&v3230, v3228, v3226);
	i8 v3231 = (i8)(intptr_t)(ws+3360);
	i8 v3232 = *(i8*)(intptr_t)v3231;
	*(i4*)(intptr_t)v3232 = v3230;

	i8 v3233 = (i8)(intptr_t)(ws+3360);
	i8 v3234 = *(i8*)(intptr_t)v3233;
	i8 v3235 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3235 = v3234;

	goto c02_0222;

c02_0226:;

	i8 v3236 = (i8)(intptr_t)(ws+3352);
	i1 v3237 = *(i1*)(intptr_t)v3236;
	i8 v3238 = (i8)(intptr_t)(ws+3353);
	i1 v3239 = *(i1*)(intptr_t)v3238;
	i8 v3240 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3241;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3240)(&v3241, v3239);
	i1 v3242 = v3237+v3241;
	i8 v3243 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3244;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3243)(&v3244, v3242);
	i8 v3245 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3245 = v3244;

	i8 v3246 = (i8)(intptr_t)(ws+3360);
	i8 v3247 = *(i8*)(intptr_t)v3246;
	i8 v3248 = (i8)(intptr_t)(ws+3368);
	i8 v3249 = *(i8*)(intptr_t)v3248;
	i8 v3250 = v3249+(+24);
	*(i8*)(intptr_t)v3250 = v3247;

c02_0222:;

endsub:;
	*p3216 = *(i8*)(intptr_t)(ws+3368);
}

// GetPowerOfTwo workspace at ws+3424 length ws+5
void f167_GetPowerOfTwo(i1* p3251 /* exp */, i4 p3252 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p3252; /*value */

	i1 v3253 = (i1)+0;
	i8 v3254 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v3254 = v3253;

	i4 v3255 = (i4)+0;
	i8 v3256 = (i8)(intptr_t)(ws+3424);
	i4 v3257 = *(i4*)(intptr_t)v3256;
	if ((s4)v3255<(s4)v3257) goto c02_022e; else goto c02_022d;

c02_022e:;

	i8 v3258 = (i8)(intptr_t)(ws+3424);
	i4 v3259 = *(i4*)(intptr_t)v3258;
	i8 v3260 = (i8)(intptr_t)(ws+3424);
	i4 v3261 = *(i4*)(intptr_t)v3260;
	i4 v3262 = v3261+(-1);
	i4 v3263 = v3259&v3262;
	i4 v3264 = (i4)+0;
	if (v3263==v3264) goto c02_022c; else goto c02_022d;

c02_022c:;

c02_0231:;

	i8 v3265 = (i8)(intptr_t)(ws+3424);
	i4 v3266 = *(i4*)(intptr_t)v3265;
	i4 v3267 = (i4)+0;
	if (v3266==v3267) goto c02_0234; else goto c02_0233;

c02_0233:;

	i8 v3268 = (i8)(intptr_t)(ws+3428);
	i1 v3269 = *(i1*)(intptr_t)v3268;
	i1 v3270 = v3269+(+1);
	i8 v3271 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v3271 = v3270;

	i8 v3272 = (i8)(intptr_t)(ws+3424);
	i4 v3273 = *(i4*)(intptr_t)v3272;
	i1 v3274 = (i1)+1;
	i4 v3275 = ((s4)v3273)>>v3274;
	i8 v3276 = (i8)(intptr_t)(ws+3424);
	*(i4*)(intptr_t)v3276 = v3275;

	goto c02_0231;

c02_0234:;

c02_022d:;

c02_0227:;

endsub:;
	*p3251 = *(i1*)(intptr_t)(ws+3428);
}
	void f165_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f167_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f165_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f58_Discard(i8 /* node */);
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3376 length ws+48
void f168_MidC2Op(i8* p3277 /* result */, i8 p3278 /* rhs */, i8 p3279 /* lhs */, i1 p3280 /* width */, i1 p3281 /* op */) {
	*(i1*)(intptr_t)(ws+3376) = p3281; /*op */
	*(i1*)(intptr_t)(ws+3377) = p3280; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3279; /*lhs */
	*(i8*)(intptr_t)(ws+3392) = p3278; /*rhs */

	i8 v3282 = (i8)(intptr_t)(ws+3376);
	i1 v3283 = *(i1*)(intptr_t)v3282;
	i1 v3284 = (i1)+136;
	if (v3283==v3284) goto c02_023c; else goto c02_023b;

c02_023c:;

	i8 v3285 = (i8)(intptr_t)(ws+3392);
	i8 v3286 = *(i8*)(intptr_t)v3285;
	i8 v3287 = v3286+(+40);
	i1 v3288 = *(i1*)(intptr_t)v3287;
	i1 v3289 = (i1)+45;
	if (v3288==v3289) goto c02_023a; else goto c02_023b;

c02_023a:;

	i8 v3290 = (i8)(intptr_t)(ws+3392);
	i8 v3291 = *(i8*)(intptr_t)v3290;
	i4 v3292 = *(i4*)(intptr_t)v3291;
	i4 v3293 = -v3292;
	i8 v3294 = (i8)(intptr_t)(ws+3392);
	i8 v3295 = *(i8*)(intptr_t)v3294;
	*(i4*)(intptr_t)v3295 = v3293;

	i1 v3296 = (i1)+161;
	i8 v3297 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3297 = v3296;

c02_023b:;

c02_0235:;

	i8 v3298 = (i8)(intptr_t)(ws+3376);
	i1 v3299 = *(i1*)(intptr_t)v3298;
	i1 v3300 = (i1)+161;
	if (v3299<v3300) goto c02_0241; else goto c02_0240;

c02_0240:;

	i8 v3301 = (i8)(intptr_t)(ws+3384);
	i8 v3302 = *(i8*)(intptr_t)v3301;
	i8 v3303 = v3302+(+40);
	i1 v3304 = *(i1*)(intptr_t)v3303;
	i1 v3305 = (i1)+45;
	if (v3304==v3305) goto c02_0245; else goto c02_0246;

c02_0245:;

	i8 v3306 = (i8)(intptr_t)(ws+3384);
	i8 v3307 = *(i8*)(intptr_t)v3306;
	i8 v3308 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3308 = v3307;

	i8 v3309 = (i8)(intptr_t)(ws+3392);
	i8 v3310 = *(i8*)(intptr_t)v3309;
	i8 v3311 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3311 = v3310;

	i8 v3312 = (i8)(intptr_t)(ws+3408);
	i8 v3313 = *(i8*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3314 = v3313;

c02_0246:;

c02_0242:;

	i8 v3315 = (i8)(intptr_t)(ws+3392);
	i8 v3316 = *(i8*)(intptr_t)v3315;
	i8 v3317 = v3316+(+40);
	i1 v3318 = *(i1*)(intptr_t)v3317;
	i1 v3319 = (i1)+45;
	if (v3318==v3319) goto c02_0254; else goto c02_0251;

c02_0254:;

	i8 v3320 = (i8)(intptr_t)(ws+3384);
	i8 v3321 = *(i8*)(intptr_t)v3320;
	i8 v3322 = v3321+(+40);
	i1 v3323 = *(i1*)(intptr_t)v3322;
	i8 v3324 = (i8)(intptr_t)(ws+3376);
	i1 v3325 = *(i1*)(intptr_t)v3324;
	if (v3323<v3325) goto c02_0251; else goto c02_0253;

c02_0253:;

	i8 v3326 = (i8)(intptr_t)(ws+3376);
	i1 v3327 = *(i1*)(intptr_t)v3326;
	i1 v3328 = v3327+(+4);
	i8 v3329 = (i8)(intptr_t)(ws+3384);
	i8 v3330 = *(i8*)(intptr_t)v3329;
	i8 v3331 = v3330+(+40);
	i1 v3332 = *(i1*)(intptr_t)v3331;
	if (v3328<v3332) goto c02_0251; else goto c02_0252;

c02_0252:;

	i8 v3333 = (i8)(intptr_t)(ws+3384);
	i8 v3334 = *(i8*)(intptr_t)v3333;
	i8 v3335 = v3334+(+32);
	i8 v3336 = *(i8*)(intptr_t)v3335;
	i8 v3337 = v3336+(+40);
	i1 v3338 = *(i1*)(intptr_t)v3337;
	i1 v3339 = (i1)+45;
	if (v3338==v3339) goto c02_0250; else goto c02_0251;

c02_0250:;

	i8 v3340 = (i8)(intptr_t)(ws+3376);
	i1 v3341 = *(i1*)(intptr_t)v3340;
	i8 v3342 = (i8)(intptr_t)(ws+3384);
	i8 v3343 = *(i8*)(intptr_t)v3342;
	i8 v3344 = v3343+(+32);
	i8 v3345 = *(i8*)(intptr_t)v3344;
	i8 v3346 = (i8)(intptr_t)(ws+3392);
	i8 v3347 = *(i8*)(intptr_t)v3346;
	i8 v3348 = (i8)(intptr_t)(f165_FoldConstant2);
	i4 v3349;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3348)(&v3349, v3347, v3345, v3341);
	i8 v3350 = (i8)(intptr_t)(f157_MidConstant);
	i8 v3351;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3350)(&v3351, v3349);
	i8 v3352 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3352 = v3351;

	i8 v3353 = (i8)(intptr_t)(ws+3392);
	i8 v3354 = *(i8*)(intptr_t)v3353;
	i8 v3355 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3355)(v3354);

	i8 v3356 = (i8)(intptr_t)(ws+3408);
	i8 v3357 = *(i8*)(intptr_t)v3356;
	i8 v3358 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3358 = v3357;

	i8 v3359 = (i8)(intptr_t)(ws+3384);
	i8 v3360 = *(i8*)(intptr_t)v3359;
	i8 v3361 = v3360+(+24);
	i8 v3362 = *(i8*)(intptr_t)v3361;
	i8 v3363 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3363 = v3362;

	i8 v3364 = (i8)+0;
	i8 v3365 = (i8)(intptr_t)(ws+3384);
	i8 v3366 = *(i8*)(intptr_t)v3365;
	i8 v3367 = v3366+(+24);
	*(i8*)(intptr_t)v3367 = v3364;

	i8 v3368 = (i8)(intptr_t)(ws+3384);
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3370)(v3369);

	i8 v3371 = (i8)(intptr_t)(ws+3408);
	i8 v3372 = *(i8*)(intptr_t)v3371;
	i8 v3373 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3373 = v3372;

c02_0251:;

c02_0247:;

c02_0241:;

c02_023d:;

	i8 v3374 = (i8)(intptr_t)(ws+3384);
	i8 v3375 = *(i8*)(intptr_t)v3374;
	i8 v3376 = v3375+(+40);
	i1 v3377 = *(i1*)(intptr_t)v3376;
	i1 v3378 = (i1)+45;
	if (v3377==v3378) goto c02_025b; else goto c02_025c;

c02_025c:;

	i8 v3379 = (i8)(intptr_t)(ws+3392);
	i8 v3380 = *(i8*)(intptr_t)v3379;
	i8 v3381 = v3380+(+40);
	i1 v3382 = *(i1*)(intptr_t)v3381;
	i1 v3383 = (i1)+45;
	if (v3382==v3383) goto c02_025a; else goto c02_025b;

c02_025a:;

	i8 v3384 = (i8)(intptr_t)(ws+3376);
	i1 v3385 = *(i1*)(intptr_t)v3384;
	i1 v3386 = (i1)+166;
	if (v3385==v3386) goto c02_0264; else goto c02_0267;

c02_0267:;

	i8 v3387 = (i8)(intptr_t)(ws+3376);
	i1 v3388 = *(i1*)(intptr_t)v3387;
	i1 v3389 = (i1)+146;
	if (v3388==v3389) goto c02_0264; else goto c02_0266;

c02_0266:;

	i8 v3390 = (i8)(intptr_t)(ws+3376);
	i1 v3391 = *(i1*)(intptr_t)v3390;
	i1 v3392 = (i1)+141;
	if (v3391==v3392) goto c02_0264; else goto c02_0265;

c02_0264:;

	i8 v3393 = (i8)(intptr_t)(ws+3392);
	i8 v3394 = *(i8*)(intptr_t)v3393;
	i4 v3395 = *(i4*)(intptr_t)v3394;
	i8 v3396 = (i8)(intptr_t)(ws+3416);
	*(i4*)(intptr_t)v3396 = v3395;

	i8 v3397 = (i8)(intptr_t)(ws+3416);
	i4 v3398 = *(i4*)(intptr_t)v3397;
	i8 v3399 = (i8)(intptr_t)(f167_GetPowerOfTwo);
	i1 v3400;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v3399)(&v3400, v3398);
	i8 v3401 = (i8)(intptr_t)(ws+3420);
	*(i1*)(intptr_t)v3401 = v3400;

	i8 v3402 = (i8)(intptr_t)(ws+3420);
	i1 v3403 = *(i1*)(intptr_t)v3402;
	i1 v3404 = (i1)+0;
	if (v3403==v3404) goto c02_026c; else goto c02_026b;

c02_026b:;

	i8 v3405 = (i8)(intptr_t)(ws+3392);
	i8 v3406 = *(i8*)(intptr_t)v3405;
	i8 v3407 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3407)(v3406);

	i8 v3408 = (i8)(intptr_t)(ws+3420);
	i1 v3409 = *(i1*)(intptr_t)v3408;
	i1 v3410 = v3409+(-1);
	i4 v3411 = v3410;
	i8 v3412 = (i8)(intptr_t)(f157_MidConstant);
	i8 v3413;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3412)(&v3413, v3411);
	i8 v3414 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3414 = v3413;

	i8 v3415 = (i8)(intptr_t)(ws+3376);
	i1 v3416 = *(i1*)(intptr_t)v3415;

	if (v3416 != +166) goto c02_026e;

	i1 v3417 = (i1)+121;
	i8 v3418 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3418 = v3417;

	goto c02_026d;

c02_026e:;

	if (v3416 != +146) goto c02_026f;

	i1 v3419 = (i1)+131;
	i8 v3420 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3420 = v3419;

	goto c02_026d;

c02_026f:;

	if (v3416 != +141) goto c02_0270;

	i1 v3421 = (i1)+126;
	i8 v3422 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3422 = v3421;

c02_0270:;

c02_026d:;


c02_026c:;

c02_0268:;

c02_0265:;

c02_025d:;

	i8 v3423 = (i8)(intptr_t)(ws+3376);
	i1 v3424 = *(i1*)(intptr_t)v3423;
	i1 v3425 = (i1)+121;
	if (v3424==v3425) goto c02_0278; else goto c02_027b;

c02_027b:;

	i8 v3426 = (i8)(intptr_t)(ws+3376);
	i1 v3427 = *(i1*)(intptr_t)v3426;
	i1 v3428 = (i1)+126;
	if (v3427==v3428) goto c02_0278; else goto c02_027a;

c02_027a:;

	i8 v3429 = (i8)(intptr_t)(ws+3376);
	i1 v3430 = *(i1*)(intptr_t)v3429;
	i1 v3431 = (i1)+131;
	if (v3430==v3431) goto c02_0278; else goto c02_0279;

c02_0278:;

	i8 v3432 = (i8)(intptr_t)(ws+3392);
	i8 v3433 = *(i8*)(intptr_t)v3432;
	i4 v3434 = *(i4*)(intptr_t)v3433;
	i4 v3435 = (i4)+0;
	if (v3434==v3435) goto c02_027f; else goto c02_0280;

c02_027f:;

	i8 v3436 = (i8)(intptr_t)(ws+3392);
	i8 v3437 = *(i8*)(intptr_t)v3436;
	i8 v3438 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3438)(v3437);

	i8 v3439 = (i8)(intptr_t)(ws+3384);
	i8 v3440 = *(i8*)(intptr_t)v3439;
	i8 v3441 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3441 = v3440;

	goto endsub;

c02_0280:;

c02_027c:;

c02_0279:;

c02_0271:;

	i8 v3442 = (i8)(intptr_t)(ws+3376);
	i1 v3443 = *(i1*)(intptr_t)v3442;
	i1 v3444 = (i1)+161;
	if (v3443==v3444) goto c02_0286; else goto c02_0288;

c02_0288:;

	i8 v3445 = (i8)(intptr_t)(ws+3376);
	i1 v3446 = *(i1*)(intptr_t)v3445;
	i1 v3447 = (i1)+136;
	if (v3446==v3447) goto c02_0286; else goto c02_0287;

c02_0286:;

	i8 v3448 = (i8)(intptr_t)(ws+3392);
	i8 v3449 = *(i8*)(intptr_t)v3448;
	i4 v3450 = *(i4*)(intptr_t)v3449;
	i4 v3451 = (i4)+0;
	if (v3450==v3451) goto c02_028c; else goto c02_028d;

c02_028c:;

	i8 v3452 = (i8)(intptr_t)(ws+3392);
	i8 v3453 = *(i8*)(intptr_t)v3452;
	i8 v3454 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3454)(v3453);

	i8 v3455 = (i8)(intptr_t)(ws+3384);
	i8 v3456 = *(i8*)(intptr_t)v3455;
	i8 v3457 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3457 = v3456;

	goto endsub;

c02_028d:;

c02_0289:;

	i8 v3458 = (i8)(intptr_t)(ws+3384);
	i8 v3459 = *(i8*)(intptr_t)v3458;
	i8 v3460 = v3459+(+40);
	i1 v3461 = *(i1*)(intptr_t)v3460;
	i1 v3462 = (i1)+47;
	if (v3461==v3462) goto c02_0291; else goto c02_0292;

c02_0291:;

	i8 v3463 = (i8)(intptr_t)(ws+3392);
	i8 v3464 = *(i8*)(intptr_t)v3463;
	i4 v3465 = *(i4*)(intptr_t)v3464;
	i2 v3466 = (s2)(s4)v3465;
	i8 v3467 = (i8)(intptr_t)(ws+3422);
	*(i2*)(intptr_t)v3467 = v3466;

	i8 v3468 = (i8)(intptr_t)(ws+3376);
	i1 v3469 = *(i1*)(intptr_t)v3468;

	if (v3469 != +161) goto c02_0294;

	i8 v3470 = (i8)(intptr_t)(ws+3384);
	i8 v3471 = *(i8*)(intptr_t)v3470;
	i8 v3472 = v3471+(+8);
	i2 v3473 = *(i2*)(intptr_t)v3472;
	i8 v3474 = (i8)(intptr_t)(ws+3422);
	i2 v3475 = *(i2*)(intptr_t)v3474;
	i2 v3476 = v3473+v3475;
	i8 v3477 = (i8)(intptr_t)(ws+3384);
	i8 v3478 = *(i8*)(intptr_t)v3477;
	i8 v3479 = v3478+(+8);
	*(i2*)(intptr_t)v3479 = v3476;

	i8 v3480 = (i8)(intptr_t)(ws+3392);
	i8 v3481 = *(i8*)(intptr_t)v3480;
	i8 v3482 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3482)(v3481);

	i8 v3483 = (i8)(intptr_t)(ws+3384);
	i8 v3484 = *(i8*)(intptr_t)v3483;
	i8 v3485 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3485 = v3484;

	goto endsub;

c02_0294:;

	if (v3469 != +136) goto c02_0295;

	i8 v3486 = (i8)(intptr_t)(ws+3384);
	i8 v3487 = *(i8*)(intptr_t)v3486;
	i8 v3488 = v3487+(+8);
	i2 v3489 = *(i2*)(intptr_t)v3488;
	i8 v3490 = (i8)(intptr_t)(ws+3422);
	i2 v3491 = *(i2*)(intptr_t)v3490;
	i2 v3492 = v3489-v3491;
	i8 v3493 = (i8)(intptr_t)(ws+3384);
	i8 v3494 = *(i8*)(intptr_t)v3493;
	i8 v3495 = v3494+(+8);
	*(i2*)(intptr_t)v3495 = v3492;

	i8 v3496 = (i8)(intptr_t)(ws+3392);
	i8 v3497 = *(i8*)(intptr_t)v3496;
	i8 v3498 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3498)(v3497);

	i8 v3499 = (i8)(intptr_t)(ws+3384);
	i8 v3500 = *(i8*)(intptr_t)v3499;
	i8 v3501 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3501 = v3500;

	goto endsub;

c02_0295:;

c02_0293:;


c02_0292:;

c02_028e:;

c02_0287:;

c02_0281:;

c02_025b:;

c02_0255:;

	i8 v3502 = (i8)(intptr_t)(ws+3384);
	i8 v3503 = *(i8*)(intptr_t)v3502;
	i8 v3504 = v3503+(+40);
	i1 v3505 = *(i1*)(intptr_t)v3504;
	i1 v3506 = (i1)+45;
	if (v3505==v3506) goto c02_029d; else goto c02_029c;

c02_029d:;

	i8 v3507 = (i8)(intptr_t)(ws+3392);
	i8 v3508 = *(i8*)(intptr_t)v3507;
	i8 v3509 = v3508+(+40);
	i1 v3510 = *(i1*)(intptr_t)v3509;
	i1 v3511 = (i1)+45;
	if (v3510==v3511) goto c02_029b; else goto c02_029c;

c02_029b:;

	i8 v3512 = (i8)(intptr_t)(ws+3376);
	i1 v3513 = *(i1*)(intptr_t)v3512;
	i8 v3514 = (i8)(intptr_t)(ws+3384);
	i8 v3515 = *(i8*)(intptr_t)v3514;
	i8 v3516 = (i8)(intptr_t)(ws+3392);
	i8 v3517 = *(i8*)(intptr_t)v3516;
	i8 v3518 = (i8)(intptr_t)(f165_FoldConstant2);
	i4 v3519;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3518)(&v3519, v3517, v3515, v3513);
	i8 v3520 = (i8)(intptr_t)(ws+3384);
	i8 v3521 = *(i8*)(intptr_t)v3520;
	*(i4*)(intptr_t)v3521 = v3519;

	i8 v3522 = (i8)(intptr_t)(ws+3392);
	i8 v3523 = *(i8*)(intptr_t)v3522;
	i8 v3524 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3524)(v3523);

	i8 v3525 = (i8)(intptr_t)(ws+3384);
	i8 v3526 = *(i8*)(intptr_t)v3525;
	i8 v3527 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3527 = v3526;

	goto endsub;

c02_029c:;

c02_0296:;

	i8 v3528 = (i8)(intptr_t)(ws+3376);
	i1 v3529 = *(i1*)(intptr_t)v3528;
	i8 v3530 = (i8)(intptr_t)(ws+3377);
	i1 v3531 = *(i1*)(intptr_t)v3530;
	i8 v3532 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3533;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3532)(&v3533, v3531);
	i1 v3534 = v3529+v3533;
	i8 v3535 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3536;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3535)(&v3536, v3534);
	i8 v3537 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3537 = v3536;

	i8 v3538 = (i8)(intptr_t)(ws+3384);
	i8 v3539 = *(i8*)(intptr_t)v3538;
	i8 v3540 = (i8)(intptr_t)(ws+3400);
	i8 v3541 = *(i8*)(intptr_t)v3540;
	i8 v3542 = v3541+(+24);
	*(i8*)(intptr_t)v3542 = v3539;

	i8 v3543 = (i8)(intptr_t)(ws+3392);
	i8 v3544 = *(i8*)(intptr_t)v3543;
	i8 v3545 = (i8)(intptr_t)(ws+3400);
	i8 v3546 = *(i8*)(intptr_t)v3545;
	i8 v3547 = v3546+(+32);
	*(i8*)(intptr_t)v3547 = v3544;

endsub:;
	*p3277 = *(i8*)(intptr_t)(ws+3400);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3376 length ws+34
void f169_MidCCast(i8* p3548 /* result */, i1 p3549 /* issigned */, i8 p3550 /* lhs */, i1 p3551 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p3551; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3550; /*lhs */
	*(i1*)(intptr_t)(ws+3392) = p3549; /*issigned */

	i8 v3552 = (i8)(intptr_t)(ws+3384);
	i8 v3553 = *(i8*)(intptr_t)v3552;
	i8 v3554 = v3553+(+40);
	i1 v3555 = *(i1*)(intptr_t)v3554;
	i1 v3556 = (i1)+45;
	if (v3555==v3556) goto c02_02a1; else goto c02_02a2;

c02_02a1:;

	i8 v3557 = (i8)(intptr_t)(ws+3384);
	i8 v3558 = *(i8*)(intptr_t)v3557;
	i8 v3559 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3559 = v3558;

	goto endsub;

c02_02a2:;

c02_029e:;

	i8 v3560 = (i8)(intptr_t)(ws+3384);
	i8 v3561 = *(i8*)(intptr_t)v3560;
	i8 v3562 = v3561+(+16);
	i8 v3563 = *(i8*)(intptr_t)v3562;
	i8 v3564 = v3563+(+48);
	i2 v3565 = *(i2*)(intptr_t)v3564;
	i1 v3566 = v3565;
	i8 v3567 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v3567 = v3566;

	i8 v3568 = (i8)(intptr_t)(ws+3408);
	i1 v3569 = *(i1*)(intptr_t)v3568;
	i8 v3570 = (i8)(intptr_t)(ws+3376);
	i1 v3571 = *(i1*)(intptr_t)v3570;
	if (v3569==v3571) goto c02_02a6; else goto c02_02a7;

c02_02a6:;

	i8 v3572 = (i8)(intptr_t)(ws+3384);
	i8 v3573 = *(i8*)(intptr_t)v3572;
	i8 v3574 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3574 = v3573;

	goto c02_02a3;

c02_02a7:;

	i8 v3575 = (i8)(intptr_t)(ws+3408);
	i1 v3576 = *(i1*)(intptr_t)v3575;

	if (v3576 != +1) goto c02_02a9;

	i1 v3577 = (i1)+91;
	i8 v3578 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3578 = v3577;

	goto c02_02a8;

c02_02a9:;

	if (v3576 != +2) goto c02_02aa;

	i1 v3579 = (i1)+96;
	i8 v3580 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3580 = v3579;

	goto c02_02a8;

c02_02aa:;

	if (v3576 != +4) goto c02_02ab;

	i1 v3581 = (i1)+101;
	i8 v3582 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3582 = v3581;

	goto c02_02a8;

c02_02ab:;

	if (v3576 != +8) goto c02_02ac;

	i1 v3583 = (i1)+106;
	i8 v3584 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3584 = v3583;

c02_02ac:;

c02_02a8:;


	i8 v3585 = (i8)(intptr_t)(ws+3409);
	i1 v3586 = *(i1*)(intptr_t)v3585;
	i8 v3587 = (i8)(intptr_t)(ws+3376);
	i1 v3588 = *(i1*)(intptr_t)v3587;
	i8 v3589 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3590;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3589)(&v3590, v3588);
	i1 v3591 = v3586+v3590;
	i8 v3592 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3593;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3592)(&v3593, v3591);
	i8 v3594 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3594 = v3593;

	i8 v3595 = (i8)(intptr_t)(ws+3384);
	i8 v3596 = *(i8*)(intptr_t)v3595;
	i8 v3597 = (i8)(intptr_t)(ws+3400);
	i8 v3598 = *(i8*)(intptr_t)v3597;
	i8 v3599 = v3598+(+24);
	*(i8*)(intptr_t)v3599 = v3596;

	i8 v3600 = (i8)(intptr_t)(ws+3392);
	i1 v3601 = *(i1*)(intptr_t)v3600;
	i8 v3602 = (i8)(intptr_t)(ws+3400);
	i8 v3603 = *(i8*)(intptr_t)v3602;
	*(i1*)(intptr_t)v3603 = v3601;

c02_02a3:;

endsub:;
	*p3548 = *(i8*)(intptr_t)(ws+3400);
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// E_b8 workspace at ws+3472 length ws+1
void f170_E_b8(i1 p3604 /* byte */) {
	*(i1*)(intptr_t)(ws+3472) = p3604; /*byte */

	i8 v3605 = (i8)(intptr_t)(ws+936);
	i8 v3606 = (i8)(intptr_t)(ws+3472);
	i1 v3607 = *(i1*)(intptr_t)v3606;
	i8 v3608 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3608)(v3607, v3605);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f170_E_b8(i1 /* byte */);

// E_b16 workspace at ws+3456 length ws+2
void f171_E_b16(i2 p3609 /* word */) {
	*(i2*)(intptr_t)(ws+3456) = p3609; /*word */

	i8 v3610 = (i8)(intptr_t)(ws+3456);
	i2 v3611 = *(i2*)(intptr_t)v3610;
	i1 v3612 = v3611;
	i8 v3613 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3613)(v3612);

	i8 v3614 = (i8)(intptr_t)(ws+3456);
	i2 v3615 = *(i2*)(intptr_t)v3614;
	i1 v3616 = (i1)+8;
	i2 v3617 = ((i2)v3615)>>v3616;
	i1 v3618 = v3617;
	i8 v3619 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3619)(v3618);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);

// E_b32 workspace at ws+3448 length ws+4
void f172_E_b32(i4 p3620 /* quad */) {
	*(i4*)(intptr_t)(ws+3448) = p3620; /*quad */

	i8 v3621 = (i8)(intptr_t)(ws+3448);
	i4 v3622 = *(i4*)(intptr_t)v3621;
	i2 v3623 = v3622;
	i8 v3624 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3624)(v3623);

	i8 v3625 = (i8)(intptr_t)(ws+3448);
	i4 v3626 = *(i4*)(intptr_t)v3625;
	i1 v3627 = (i1)+16;
	i4 v3628 = ((i4)v3626)>>v3627;
	i2 v3629 = v3628;
	i8 v3630 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3630)(v3629);

endsub:;
}
	void f171_E_b16(i2 /* word */);

// E_bsize workspace at ws+3448 length ws+2
void f173_E_bsize(i2 p3631 /* size */) {
	*(i2*)(intptr_t)(ws+3448) = p3631; /*size */

	i8 v3632 = (i8)(intptr_t)(ws+3448);
	i2 v3633 = *(i2*)(intptr_t)v3632;
	i8 v3634 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3634)(v3633);

endsub:;
}
	void f170_E_b8(i1 /* byte */);

// E workspace at ws+3456 length ws+9
void f180_E(i8 p3647 /* text */) {
	*(i8*)(intptr_t)(ws+3456) = p3647; /*text */

c02_02ad:;

	i8 v3648 = (i8)(intptr_t)(ws+3456);
	i8 v3649 = *(i8*)(intptr_t)v3648;
	i1 v3650 = *(i1*)(intptr_t)v3649;
	i8 v3651 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3651 = v3650;

	i8 v3652 = (i8)(intptr_t)(ws+3456);
	i8 v3653 = *(i8*)(intptr_t)v3652;
	i8 v3654 = v3653+(+1);
	i8 v3655 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v3655 = v3654;

	i8 v3656 = (i8)(intptr_t)(ws+3464);
	i1 v3657 = *(i1*)(intptr_t)v3656;
	i1 v3658 = (i1)+0;
	if (v3657==v3658) goto c02_02b2; else goto c02_02b3;

c02_02b2:;

	goto c02_02ae;

c02_02b3:;

c02_02af:;

	i8 v3659 = (i8)(intptr_t)(ws+3464);
	i1 v3660 = *(i1*)(intptr_t)v3659;
	i8 v3661 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3661)(v3660);

	goto c02_02ad;

c02_02ae:;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f170_E_b8(i1 /* byte */);
	void f180_E(i8 /* text */);

// E_countedstring workspace at ws+3448 length ws+8
void f181_E_countedstring(i8 p3662 /* text */) {
	*(i8*)(intptr_t)(ws+3448) = p3662; /*text */

	i8 v3663 = (i8)(intptr_t)(ws+3448);
	i8 v3664 = *(i8*)(intptr_t)v3663;
	i8 v3665 = (i8)(intptr_t)(f28_StrLen);
	i8 v3666;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v3665)(&v3666, v3664);
	i1 v3667 = v3666;
	i8 v3668 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3668)(v3667);

	i8 v3669 = (i8)(intptr_t)(ws+3448);
	i8 v3670 = *(i8*)(intptr_t)v3669;
	i8 v3671 = (i8)(intptr_t)(f180_E);

	((void(*)(i8 /* text */))(intptr_t)v3671)(v3670);

endsub:;
}
	void f44_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00f8[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+3208 length ws+8
void f192_EmitterOpenfile(i8 p3798 /* filename */) {
	*(i8*)(intptr_t)(ws+3208) = p3798; /*filename */

	i8 v3799 = (i8)(intptr_t)(ws+936);
	i8 v3800 = (i8)(intptr_t)(ws+3208);
	i8 v3801 = *(i8*)(intptr_t)v3800;
	i8 v3802 = (i8)(intptr_t)(f44_FCBOpenOut);
	i1 v3803;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v3802)(&v3803, v3801, v3799);
	i1 v3804 = (i1)+0;
	if (v3803==v3804) goto c02_02d4; else goto c02_02d3;

c02_02d3:;

	i8 v3805 = (i8)(intptr_t)c02_s00f8;
	i8 v3806 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3806)(v3805);

c02_02d4:;

c02_02d0:;

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00f9[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// EmitterClosefile workspace at ws+3208 length ws+0
void f193_EmitterClosefile(void) {

	i1 v3807 = (i1)+69;
	i8 v3808 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3808)(v3807);

	i8 v3809 = (i8)(intptr_t)(ws+936);
	i8 v3810 = (i8)(intptr_t)(f45_FCBClose);
	i1 v3811;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v3810)(&v3811, v3809);
	i1 v3812 = (i1)+0;
	if (v3811==v3812) goto c02_02d9; else goto c02_02d8;

c02_02d8:;

	i8 v3813 = (i8)(intptr_t)c02_s00f9;
	i8 v3814 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3814)(v3813);

c02_02d9:;

c02_02d5:;

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f181_E_countedstring(i8 /* text */);

// EmitterDeclareSubroutine workspace at ws+3336 length ws+8
void f194_EmitterDeclareSubroutine(i8 p3815 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3815; /*subr */

	i1 v3816 = (i1)+78;
	i8 v3817 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3817)(v3816);

	i8 v3818 = (i8)(intptr_t)(ws+3336);
	i8 v3819 = *(i8*)(intptr_t)v3818;
	i8 v3820 = v3819+(+56);
	i2 v3821 = *(i2*)(intptr_t)v3820;
	i8 v3822 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3822)(v3821);

	i8 v3823 = (i8)(intptr_t)(ws+3336);
	i8 v3824 = *(i8*)(intptr_t)v3823;
	i8 v3825 = *(i8*)(intptr_t)v3824;
	i8 v3826 = v3825+(+8);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v3828)(v3827);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f181_E_countedstring(i8 /* text */);

// EmitterDeclareExternalSubroutine workspace at ws+3328 length ws+16
void f195_EmitterDeclareExternalSubroutine(i8 p3829 /* external */, i2 p3830 /* id */) {
	*(i2*)(intptr_t)(ws+3328) = p3830; /*id */
	*(i8*)(intptr_t)(ws+3336) = p3829; /*external */

	i1 v3831 = (i1)+88;
	i8 v3832 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3832)(v3831);

	i8 v3833 = (i8)(intptr_t)(ws+3328);
	i2 v3834 = *(i2*)(intptr_t)v3833;
	i8 v3835 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3835)(v3834);

	i8 v3836 = (i8)(intptr_t)(ws+3336);
	i8 v3837 = *(i8*)(intptr_t)v3836;
	i8 v3838 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v3838)(v3837);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);

// EmitterReferenceSubroutineById workspace at ws+3400 length ws+4
void f196_EmitterReferenceSubroutineById(i2 p3839 /* used */, i2 p3840 /* user */) {
	*(i2*)(intptr_t)(ws+3400) = p3840; /*user */
	*(i2*)(intptr_t)(ws+3402) = p3839; /*used */

	i1 v3841 = (i1)+82;
	i8 v3842 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3842)(v3841);

	i8 v3843 = (i8)(intptr_t)(ws+3400);
	i2 v3844 = *(i2*)(intptr_t)v3843;
	i8 v3845 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3845)(v3844);

	i8 v3846 = (i8)(intptr_t)(ws+3402);
	i2 v3847 = *(i2*)(intptr_t)v3846;
	i8 v3848 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3848)(v3847);

endsub:;
}
	void f196_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// EmitterReferenceSubroutine workspace at ws+3384 length ws+16
void f197_EmitterReferenceSubroutine(i8 p3849 /* used */, i8 p3850 /* user */) {
	*(i8*)(intptr_t)(ws+3384) = p3850; /*user */
	*(i8*)(intptr_t)(ws+3392) = p3849; /*used */

	i8 v3851 = (i8)(intptr_t)(ws+3384);
	i8 v3852 = *(i8*)(intptr_t)v3851;
	i8 v3853 = v3852+(+56);
	i2 v3854 = *(i2*)(intptr_t)v3853;
	i8 v3855 = (i8)(intptr_t)(ws+3392);
	i8 v3856 = *(i8*)(intptr_t)v3855;
	i8 v3857 = v3856+(+56);
	i2 v3858 = *(i2*)(intptr_t)v3857;
	i8 v3859 = (i8)(intptr_t)(f196_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v3859)(v3858, v3854);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);

// EmitterDeclareWorkspace workspace at ws+3360 length ws+12
void f198_EmitterDeclareWorkspace(i2 p3860 /* workspace */, i1 p3861 /* wid */, i8 p3862 /* subr */) {
	*(i8*)(intptr_t)(ws+3360) = p3862; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p3861; /*wid */
	*(i2*)(intptr_t)(ws+3370) = p3860; /*workspace */

	i1 v3863 = (i1)+87;
	i8 v3864 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3864)(v3863);

	i8 v3865 = (i8)(intptr_t)(ws+3360);
	i8 v3866 = *(i8*)(intptr_t)v3865;
	i8 v3867 = v3866+(+56);
	i2 v3868 = *(i2*)(intptr_t)v3867;
	i8 v3869 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3869)(v3868);

	i8 v3870 = (i8)(intptr_t)(ws+3368);
	i1 v3871 = *(i1*)(intptr_t)v3870;
	i8 v3872 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3872)(v3871);

	i8 v3873 = (i8)(intptr_t)(ws+3370);
	i2 v3874 = *(i2*)(intptr_t)v3873;
	i8 v3875 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v3875)(v3874);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);
	void f181_E_countedstring(i8 /* text */);
	void f170_E_b8(i1 /* byte */);

// EmitParameterList workspace at ws+3344 length ws+8
void f199_EmitParameterList(i8 p3876 /* param */) {
	*(i8*)(intptr_t)(ws+3344) = p3876; /*param */

c02_02dc:;

	i8 v3877 = (i8)(intptr_t)(ws+3344);
	i8 v3878 = *(i8*)(intptr_t)v3877;
	i8 v3879 = (i8)+0;
	if (v3878==v3879) goto c02_02df; else goto c02_02de;

c02_02de:;

	i8 v3880 = (i8)(intptr_t)(ws+3344);
	i8 v3881 = *(i8*)(intptr_t)v3880;
	i8 v3882 = *(i8*)(intptr_t)v3881;
	i8 v3883 = v3882+(+8);
	i8 v3884 = *(i8*)(intptr_t)v3883;
	i8 v3885 = v3884+(+56);
	i2 v3886 = *(i2*)(intptr_t)v3885;
	i8 v3887 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3887)(v3886);

	i8 v3888 = (i8)(intptr_t)(ws+3344);
	i8 v3889 = *(i8*)(intptr_t)v3888;
	i8 v3890 = *(i8*)(intptr_t)v3889;
	i8 v3891 = v3890+(+26);
	i1 v3892 = *(i1*)(intptr_t)v3891;
	i8 v3893 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3893)(v3892);

	i8 v3894 = (i8)(intptr_t)(ws+3344);
	i8 v3895 = *(i8*)(intptr_t)v3894;
	i8 v3896 = *(i8*)(intptr_t)v3895;
	i8 v3897 = v3896+(+24);
	i2 v3898 = *(i2*)(intptr_t)v3897;
	i8 v3899 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v3899)(v3898);

	i8 v3900 = (i8)(intptr_t)(ws+3344);
	i8 v3901 = *(i8*)(intptr_t)v3900;
	i8 v3902 = v3901+(+8);
	i8 v3903 = *(i8*)(intptr_t)v3902;
	i8 v3904 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v3904)(v3903);

	i8 v3905 = (i8)(intptr_t)(ws+3344);
	i8 v3906 = *(i8*)(intptr_t)v3905;
	i8 v3907 = *(i8*)(intptr_t)v3906;
	i8 v3908 = *(i8*)(intptr_t)v3907;
	i8 v3909 = v3908+(+48);
	i2 v3910 = *(i2*)(intptr_t)v3909;
	i1 v3911 = v3910;
	i8 v3912 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3912)(v3911);

	i8 v3913 = (i8)(intptr_t)(ws+3344);
	i8 v3914 = *(i8*)(intptr_t)v3913;
	i8 v3915 = *(i8*)(intptr_t)v3914;
	i8 v3916 = v3915+(+16);
	i8 v3917 = *(i8*)(intptr_t)v3916;
	i8 v3918 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3918 = v3917;

	goto c02_02dc;

c02_02df:;

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f199_EmitParameterList(i8 /* param */);

// EmitterEmitInputParameters workspace at ws+3336 length ws+8
void f200_EmitterEmitInputParameters(i8 p3919 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3919; /*subr */

	i1 v3920 = (i1)+73;
	i8 v3921 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3921)(v3920);

	i8 v3922 = (i8)(intptr_t)(ws+3336);
	i8 v3923 = *(i8*)(intptr_t)v3922;
	i8 v3924 = v3923+(+56);
	i2 v3925 = *(i2*)(intptr_t)v3924;
	i8 v3926 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3926)(v3925);

	i8 v3927 = (i8)(intptr_t)(ws+3336);
	i8 v3928 = *(i8*)(intptr_t)v3927;
	i8 v3929 = v3928+(+80);
	i1 v3930 = *(i1*)(intptr_t)v3929;
	i8 v3931 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3931)(v3930);

	i8 v3932 = (i8)(intptr_t)(ws+3336);
	i8 v3933 = *(i8*)(intptr_t)v3932;
	i1 v3934 = (i1)+0;
	i8 v3935 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v3936;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3935)(&v3936, v3934, v3933);
	i8 v3937 = (i8)(intptr_t)(f199_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v3937)(v3936);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f199_EmitParameterList(i8 /* param */);

// EmitterEmitOutputParameters workspace at ws+3336 length ws+8
void f201_EmitterEmitOutputParameters(i8 p3938 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3938; /*subr */

	i1 v3939 = (i1)+79;
	i8 v3940 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3940)(v3939);

	i8 v3941 = (i8)(intptr_t)(ws+3336);
	i8 v3942 = *(i8*)(intptr_t)v3941;
	i8 v3943 = v3942+(+56);
	i2 v3944 = *(i2*)(intptr_t)v3943;
	i8 v3945 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3945)(v3944);

	i8 v3946 = (i8)(intptr_t)(ws+3336);
	i8 v3947 = *(i8*)(intptr_t)v3946;
	i8 v3948 = v3947+(+81);
	i1 v3949 = *(i1*)(intptr_t)v3948;
	i8 v3950 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3950)(v3949);

	i8 v3951 = (i8)(intptr_t)(ws+3336);
	i8 v3952 = *(i8*)(intptr_t)v3951;
	i1 v3953 = (i1)+0;
	i8 v3954 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v3955;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3954)(&v3955, v3953, v3952);
	i8 v3956 = (i8)(intptr_t)(f199_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v3956)(v3955);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);

// EmitterEmitSubroutineFlags workspace at ws+3336 length ws+8
void f202_EmitterEmitSubroutineFlags(i8 p3957 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3957; /*subr */

	i1 v3958 = (i1)+70;
	i8 v3959 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3959)(v3958);

	i8 v3960 = (i8)(intptr_t)(ws+3336);
	i8 v3961 = *(i8*)(intptr_t)v3960;
	i8 v3962 = v3961+(+56);
	i2 v3963 = *(i2*)(intptr_t)v3962;
	i8 v3964 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3964)(v3963);

	i8 v3965 = (i8)(intptr_t)(ws+3336);
	i8 v3966 = *(i8*)(intptr_t)v3965;
	i8 v3967 = v3966+(+82);
	i1 v3968 = *(i1*)(intptr_t)v3967;
	i8 v3969 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3969)(v3968);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3392 length ws+24
void f212_LookupSymbolInNamespace(i8* p4298 /* symbol */, i8 p4299 /* name */, i8 p4300 /* namespace */) {
	*(i8*)(intptr_t)(ws+3392) = p4300; /*namespace */
	*(i8*)(intptr_t)(ws+3400) = p4299; /*name */

	i8 v4301 = (i8)(intptr_t)(ws+3392);
	i8 v4302 = *(i8*)(intptr_t)v4301;
	i8 v4303 = *(i8*)(intptr_t)v4302;
	i8 v4304 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4304 = v4303;

c02_036a:;

	i8 v4305 = (i8)(intptr_t)(ws+3408);
	i8 v4306 = *(i8*)(intptr_t)v4305;
	i8 v4307 = (i8)+0;
	if (v4306==v4307) goto c02_036d; else goto c02_036c;

c02_036c:;

	i8 v4308 = (i8)(intptr_t)(ws+3408);
	i8 v4309 = *(i8*)(intptr_t)v4308;
	i8 v4310 = v4309+(+8);
	i8 v4311 = *(i8*)(intptr_t)v4310;
	i8 v4312 = (i8)(intptr_t)(ws+3400);
	i8 v4313 = *(i8*)(intptr_t)v4312;
	i8 v4314 = (i8)(intptr_t)(f25_StrCmp);
	i1 v4315;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4314)(&v4315, v4313, v4311);
	i1 v4316 = (i1)+0;
	if (v4315==v4316) goto c02_0371; else goto c02_0372;

c02_0371:;

c02_0375:;

	i8 v4317 = (i8)(intptr_t)(ws+3408);
	i8 v4318 = *(i8*)(intptr_t)v4317;
	i8 v4319 = v4318+(+32);
	i1 v4320 = *(i1*)(intptr_t)v4319;
	i1 v4321 = (i1)+39;
	if (v4320==v4321) goto c02_0377; else goto c02_0378;

c02_0377:;

	i8 v4322 = (i8)(intptr_t)(ws+3408);
	i8 v4323 = *(i8*)(intptr_t)v4322;
	i8 v4324 = *(i8*)(intptr_t)v4323;
	i8 v4325 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4325 = v4324;

	goto c02_0375;

c02_0378:;

	goto endsub;

c02_0372:;

c02_036e:;

	i8 v4326 = (i8)(intptr_t)(ws+3408);
	i8 v4327 = *(i8*)(intptr_t)v4326;
	i8 v4328 = v4327+(+24);
	i8 v4329 = *(i8*)(intptr_t)v4328;
	i8 v4330 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4330 = v4329;

	goto c02_036a;

c02_036d:;

	i8 v4331 = (i8)+0;
	i8 v4332 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4332 = v4331;

endsub:;
	*p4298 = *(i8*)(intptr_t)(ws+3408);
}
	void f212_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3352 length ws+24
void f213_LookupSymbol(i8* p4333 /* symbol */, i8 p4334 /* name */, i8 p4335 /* namespace */) {
	*(i8*)(intptr_t)(ws+3352) = p4335; /*namespace */
	*(i8*)(intptr_t)(ws+3360) = p4334; /*name */

	i8 v4336 = (i8)(intptr_t)(ws+3352);
	i8 v4337 = *(i8*)(intptr_t)v4336;
	i8 v4338 = (i8)+0;
	if (v4337==v4338) goto c02_037c; else goto c02_037d;

c02_037c:;

	i8 v4339 = (i8)(intptr_t)(ws+40);
	i8 v4340 = *(i8*)(intptr_t)v4339;
	i8 v4341 = v4340+(+16);
	i8 v4342 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4342 = v4341;

c02_037d:;

c02_0379:;

c02_0380:;

	i8 v4343 = (i8)(intptr_t)(ws+3352);
	i8 v4344 = *(i8*)(intptr_t)v4343;
	i8 v4345 = (i8)+0;
	if (v4344==v4345) goto c02_0383; else goto c02_0382;

c02_0382:;

	i8 v4346 = (i8)(intptr_t)(ws+3352);
	i8 v4347 = *(i8*)(intptr_t)v4346;
	i8 v4348 = (i8)(intptr_t)(ws+3360);
	i8 v4349 = *(i8*)(intptr_t)v4348;
	i8 v4350 = (i8)(intptr_t)(f212_LookupSymbolInNamespace);
	i8 v4351;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4350)(&v4351, v4349, v4347);
	i8 v4352 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4352 = v4351;

	i8 v4353 = (i8)(intptr_t)(ws+3368);
	i8 v4354 = *(i8*)(intptr_t)v4353;
	i8 v4355 = (i8)+0;
	if (v4354==v4355) goto c02_0388; else goto c02_0387;

c02_0387:;

	goto endsub;

c02_0388:;

c02_0384:;

	i8 v4356 = (i8)(intptr_t)(ws+3352);
	i8 v4357 = *(i8*)(intptr_t)v4356;
	i8 v4358 = v4357+(+16);
	i8 v4359 = *(i8*)(intptr_t)v4358;
	i8 v4360 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4360 = v4359;

	goto c02_0380;

c02_0383:;

	i8 v4361 = (i8)+0;
	i8 v4362 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4362 = v4361;

endsub:;
	*p4333 = *(i8*)(intptr_t)(ws+3368);
}

// AddToNamespace workspace at ws+3424 length ws+16
void f214_AddToNamespace(i8 p4363 /* symbol */, i8 p4364 /* namespace */) {
	*(i8*)(intptr_t)(ws+3424) = p4364; /*namespace */
	*(i8*)(intptr_t)(ws+3432) = p4363; /*symbol */

	i8 v4365 = (i8)(intptr_t)(ws+3424);
	i8 v4366 = *(i8*)(intptr_t)v4365;
	i8 v4367 = v4366+(+8);
	i8 v4368 = *(i8*)(intptr_t)v4367;
	i8 v4369 = (i8)+0;
	if (v4368==v4369) goto c02_038c; else goto c02_038d;

c02_038c:;

	i8 v4370 = (i8)(intptr_t)(ws+3432);
	i8 v4371 = *(i8*)(intptr_t)v4370;
	i8 v4372 = (i8)(intptr_t)(ws+3424);
	i8 v4373 = *(i8*)(intptr_t)v4372;
	*(i8*)(intptr_t)v4373 = v4371;

	i8 v4374 = (i8)(intptr_t)(ws+3432);
	i8 v4375 = *(i8*)(intptr_t)v4374;
	i8 v4376 = (i8)(intptr_t)(ws+3424);
	i8 v4377 = *(i8*)(intptr_t)v4376;
	i8 v4378 = v4377+(+8);
	*(i8*)(intptr_t)v4378 = v4375;

	goto c02_0389;

c02_038d:;

	i8 v4379 = (i8)(intptr_t)(ws+3432);
	i8 v4380 = *(i8*)(intptr_t)v4379;
	i8 v4381 = (i8)(intptr_t)(ws+3424);
	i8 v4382 = *(i8*)(intptr_t)v4381;
	i8 v4383 = v4382+(+8);
	i8 v4384 = *(i8*)(intptr_t)v4383;
	i8 v4385 = v4384+(+24);
	*(i8*)(intptr_t)v4385 = v4380;

	i8 v4386 = (i8)(intptr_t)(ws+3432);
	i8 v4387 = *(i8*)(intptr_t)v4386;
	i8 v4388 = (i8)(intptr_t)(ws+3424);
	i8 v4389 = *(i8*)(intptr_t)v4388;
	i8 v4390 = v4389+(+8);
	*(i8*)(intptr_t)v4390 = v4387;

c02_0389:;

	i8 v4391 = (i8)(intptr_t)(ws+3424);
	i8 v4392 = *(i8*)(intptr_t)v4391;
	i8 v4393 = (i8)(intptr_t)(ws+3432);
	i8 v4394 = *(i8*)(intptr_t)v4393;
	i8 v4395 = v4394+(+16);
	*(i8*)(intptr_t)v4395 = v4392;

endsub:;
}
	void f59_AllocNewSymbol(i8* /* symbol */);
	void f212_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_StartError(void);
const i1 c02_s00fa[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s00fb[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f214_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddSymbol workspace at ws+3368 length ws+24
void f215_AddSymbol(i8* p4396 /* symbol */, i8 p4397 /* name */, i8 p4398 /* namespace */) {
	*(i8*)(intptr_t)(ws+3368) = p4398; /*namespace */
	*(i8*)(intptr_t)(ws+3376) = p4397; /*name */

	i8 v4399 = (i8)(intptr_t)(ws+3368);
	i8 v4400 = *(i8*)(intptr_t)v4399;
	i8 v4401 = (i8)+0;
	if (v4400==v4401) goto c02_0391; else goto c02_0392;

c02_0391:;

	i8 v4402 = (i8)(intptr_t)(ws+40);
	i8 v4403 = *(i8*)(intptr_t)v4402;
	i8 v4404 = v4403+(+16);
	i8 v4405 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4405 = v4404;

c02_0392:;

c02_038e:;

	i8 v4406 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v4407;

	((void(*)(i8* /* symbol */))(intptr_t)v4406)(&v4407);
	i8 v4408 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4408 = v4407;

	i8 v4409 = (i8)(intptr_t)(ws+3376);
	i8 v4410 = *(i8*)(intptr_t)v4409;
	i8 v4411 = (i8)+0;
	if (v4410==v4411) goto c02_0397; else goto c02_0396;

c02_0396:;

	i8 v4412 = (i8)(intptr_t)(ws+3368);
	i8 v4413 = *(i8*)(intptr_t)v4412;
	i8 v4414 = (i8)(intptr_t)(ws+3376);
	i8 v4415 = *(i8*)(intptr_t)v4414;
	i8 v4416 = (i8)(intptr_t)(f212_LookupSymbolInNamespace);
	i8 v4417;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4416)(&v4417, v4415, v4413);
	i8 v4418 = (i8)+0;
	if (v4417==v4418) goto c02_039c; else goto c02_039b;

c02_039b:;

	i8 v4419 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v4419)();

	i8 v4420 = (i8)(intptr_t)c02_s00fa;
	i8 v4421 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4421)(v4420);

	i8 v4422 = (i8)(intptr_t)(ws+3376);
	i8 v4423 = *(i8*)(intptr_t)v4422;
	i8 v4424 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4424)(v4423);

	i8 v4425 = (i8)(intptr_t)c02_s00fb;
	i8 v4426 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4426)(v4425);

	i8 v4427 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v4427)();

c02_039c:;

c02_0398:;

	i8 v4428 = (i8)(intptr_t)(ws+3376);
	i8 v4429 = *(i8*)(intptr_t)v4428;
	i8 v4430 = (i8)(intptr_t)(ws+3384);
	i8 v4431 = *(i8*)(intptr_t)v4430;
	i8 v4432 = v4431+(+8);
	*(i8*)(intptr_t)v4432 = v4429;

	i8 v4433 = (i8)(intptr_t)(ws+3368);
	i8 v4434 = *(i8*)(intptr_t)v4433;
	i8 v4435 = (i8)(intptr_t)(ws+3384);
	i8 v4436 = *(i8*)(intptr_t)v4435;
	i8 v4437 = (i8)(intptr_t)(f214_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4437)(v4436, v4434);

c02_0397:;

c02_0393:;

endsub:;
	*p4396 = *(i8*)(intptr_t)(ws+3384);
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3336 length ws+32
void f216_AddAlias(i8* p4438 /* symbol */, i8 p4439 /* real */, i8 p4440 /* name */, i8 p4441 /* namespace */) {
	*(i8*)(intptr_t)(ws+3336) = p4441; /*namespace */
	*(i8*)(intptr_t)(ws+3344) = p4440; /*name */
	*(i8*)(intptr_t)(ws+3352) = p4439; /*real */

	i8 v4442 = (i8)(intptr_t)(ws+3336);
	i8 v4443 = *(i8*)(intptr_t)v4442;
	i8 v4444 = (i8)(intptr_t)(ws+3344);
	i8 v4445 = *(i8*)(intptr_t)v4444;
	i8 v4446 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v4447;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4446)(&v4447, v4445, v4443);
	i8 v4448 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4448 = v4447;

	i1 v4449 = (i1)+39;
	i8 v4450 = (i8)(intptr_t)(ws+3360);
	i8 v4451 = *(i8*)(intptr_t)v4450;
	i8 v4452 = v4451+(+32);
	*(i1*)(intptr_t)v4452 = v4449;

	i8 v4453 = (i8)(intptr_t)(ws+3352);
	i8 v4454 = *(i8*)(intptr_t)v4453;
	i8 v4455 = (i8)(intptr_t)(ws+3360);
	i8 v4456 = *(i8*)(intptr_t)v4455;
	*(i8*)(intptr_t)v4456 = v4454;

endsub:;
	*p4438 = *(i8*)(intptr_t)(ws+3360);
}
	void f216_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+3208 length ws+24
void f217_AddAliasString(i8 p4457 /* real */, i8 p4458 /* name */) {
	*(i8*)(intptr_t)(ws+3208) = p4458; /*name */
	*(i8*)(intptr_t)(ws+3216) = p4457; /*real */

	i8 v4459 = (i8)+0;
	i8 v4460 = (i8)(intptr_t)(ws+3208);
	i8 v4461 = *(i8*)(intptr_t)v4460;
	i8 v4462 = (i8)(intptr_t)(ws+3216);
	i8 v4463 = *(i8*)(intptr_t)v4462;
	i8 v4464 = (i8)(intptr_t)(f216_AddAlias);
	i8 v4465;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v4464)(&v4465, v4463, v4461, v4459);
	i8 v4466 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v4466 = v4465;

endsub:;
}
	void f69_StartError(void);
const i1 c02_s00fc[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s00fd[] = { 0x27,0x20,0x69,0x73,0x20,0x61,0x20,0x70,0x61,0x72,0x74,0x69,0x61,0x6c,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// CheckNotPartialType workspace at ws+3376 length ws+8
void f218_CheckNotPartialType(i8 p4467 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p4467; /*type */

	i8 v4468 = (i8)(intptr_t)(ws+3376);
	i8 v4469 = *(i8*)(intptr_t)v4468;
	i8 v4470 = v4469+(+52);
	i1 v4471 = *(i1*)(intptr_t)v4470;
	i1 v4472 = (i1)+1;
	if (v4471==v4472) goto c02_03a0; else goto c02_03a1;

c02_03a0:;

	i8 v4473 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v4473)();

	i8 v4474 = (i8)(intptr_t)c02_s00fc;
	i8 v4475 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4475)(v4474);

	i8 v4476 = (i8)(intptr_t)(ws+3376);
	i8 v4477 = *(i8*)(intptr_t)v4476;
	i8 v4478 = v4477+(+32);
	i8 v4479 = *(i8*)(intptr_t)v4478;
	i8 v4480 = v4479+(+8);
	i8 v4481 = *(i8*)(intptr_t)v4480;
	i8 v4482 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4482)(v4481);

	i8 v4483 = (i8)(intptr_t)c02_s00fd;
	i8 v4484 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4484)(v4483);

	i8 v4485 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v4485)();

c02_03a1:;

c02_039d:;

endsub:;
}
	void f59_AllocNewSymbol(i8* /* symbol */);
	void f214_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddTypeToNamespace workspace at ws+3392 length ws+32
void f219_AddTypeToNamespace(i8 p4486 /* name */, i8 p4487 /* type */, i8 p4488 /* namespace */) {
	*(i8*)(intptr_t)(ws+3392) = p4488; /*namespace */
	*(i8*)(intptr_t)(ws+3400) = p4487; /*type */
	*(i8*)(intptr_t)(ws+3408) = p4486; /*name */

	i8 v4489 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v4490;

	((void(*)(i8* /* symbol */))(intptr_t)v4489)(&v4490);
	i8 v4491 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4491 = v4490;

	i1 v4492 = (i1)+30;
	i8 v4493 = (i8)(intptr_t)(ws+3416);
	i8 v4494 = *(i8*)(intptr_t)v4493;
	i8 v4495 = v4494+(+32);
	*(i1*)(intptr_t)v4495 = v4492;

	i8 v4496 = (i8)(intptr_t)(ws+3400);
	i8 v4497 = *(i8*)(intptr_t)v4496;
	i8 v4498 = (i8)(intptr_t)(ws+3416);
	i8 v4499 = *(i8*)(intptr_t)v4498;
	*(i8*)(intptr_t)v4499 = v4497;

	i8 v4500 = (i8)(intptr_t)(ws+3408);
	i8 v4501 = *(i8*)(intptr_t)v4500;
	i8 v4502 = (i8)(intptr_t)(ws+3416);
	i8 v4503 = *(i8*)(intptr_t)v4502;
	i8 v4504 = v4503+(+8);
	*(i8*)(intptr_t)v4504 = v4501;

	i8 v4505 = (i8)(intptr_t)(ws+3416);
	i8 v4506 = *(i8*)(intptr_t)v4505;
	i8 v4507 = (i8)(intptr_t)(ws+3400);
	i8 v4508 = *(i8*)(intptr_t)v4507;
	i8 v4509 = v4508+(+32);
	*(i8*)(intptr_t)v4509 = v4506;

	i8 v4510 = (i8)(intptr_t)(ws+3392);
	i8 v4511 = *(i8*)(intptr_t)v4510;
	i8 v4512 = (i8)(intptr_t)(ws+3416);
	i8 v4513 = *(i8*)(intptr_t)v4512;
	i8 v4514 = (i8)(intptr_t)(f214_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4514)(v4513, v4511);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f219_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeNumberType workspace at ws+3208 length ws+24
void f220_MakeNumberType(i8* p4515 /* type */, i8 p4516 /* name */, i1 p4517 /* is_signed */, i1 p4518 /* alignment */, i1 p4519 /* width */) {
	*(i1*)(intptr_t)(ws+3208) = p4519; /*width */
	*(i1*)(intptr_t)(ws+3209) = p4518; /*alignment */
	*(i1*)(intptr_t)(ws+3210) = p4517; /*is_signed */
	*(i8*)(intptr_t)(ws+3216) = p4516; /*name */

	i8 v4520 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v4521;

	((void(*)(i8* /* type */))(intptr_t)v4520)(&v4521);
	i8 v4522 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v4522 = v4521;

	i1 v4523 = (i1)+2;
	i8 v4524 = (i8)(intptr_t)(ws+3224);
	i8 v4525 = *(i8*)(intptr_t)v4524;
	i8 v4526 = v4525+(+52);
	*(i1*)(intptr_t)v4526 = v4523;

	i8 v4527 = (i8)(intptr_t)(ws+3208);
	i1 v4528 = *(i1*)(intptr_t)v4527;
	i2 v4529 = v4528;
	i8 v4530 = (i8)(intptr_t)(ws+3224);
	i8 v4531 = *(i8*)(intptr_t)v4530;
	i8 v4532 = v4531+(+48);
	*(i2*)(intptr_t)v4532 = v4529;

	i8 v4533 = (i8)(intptr_t)(ws+3208);
	i1 v4534 = *(i1*)(intptr_t)v4533;
	i2 v4535 = v4534;
	i8 v4536 = (i8)(intptr_t)(ws+3224);
	i8 v4537 = *(i8*)(intptr_t)v4536;
	i8 v4538 = v4537+(+50);
	*(i2*)(intptr_t)v4538 = v4535;

	i8 v4539 = (i8)(intptr_t)(ws+3209);
	i1 v4540 = *(i1*)(intptr_t)v4539;
	i8 v4541 = (i8)(intptr_t)(ws+3224);
	i8 v4542 = *(i8*)(intptr_t)v4541;
	i8 v4543 = v4542+(+53);
	*(i1*)(intptr_t)v4543 = v4540;

	i8 v4544 = (i8)(intptr_t)(ws+3210);
	i1 v4545 = *(i1*)(intptr_t)v4544;
	i8 v4546 = (i8)(intptr_t)(ws+3224);
	i8 v4547 = *(i8*)(intptr_t)v4546;
	*(i1*)(intptr_t)v4547 = v4545;

	i8 v4548 = (i8)(intptr_t)(ws+40);
	i8 v4549 = *(i8*)(intptr_t)v4548;
	i8 v4550 = v4549+(+16);
	i8 v4551 = (i8)(intptr_t)(ws+3224);
	i8 v4552 = *(i8*)(intptr_t)v4551;
	i8 v4553 = (i8)(intptr_t)(ws+3216);
	i8 v4554 = *(i8*)(intptr_t)v4553;
	i8 v4555 = (i8)(intptr_t)(f219_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v4555)(v4554, v4552, v4550);

endsub:;
	*p4515 = *(i8*)(intptr_t)(ws+3224);
}

// IsTypeOfKind workspace at ws+3440 length ws+10
void f221_IsTypeOfKind(i1* p4556 /* result */, i1 p4557 /* kind */, i8 p4558 /* type */) {
	*(i8*)(intptr_t)(ws+3440) = p4558; /*type */
	*(i1*)(intptr_t)(ws+3448) = p4557; /*kind */

	i1 v4559 = (i1)+0;
	i8 v4560 = (i8)(intptr_t)(ws+3449);
	*(i1*)(intptr_t)v4560 = v4559;

	i8 v4561 = (i8)(intptr_t)(ws+3440);
	i8 v4562 = *(i8*)(intptr_t)v4561;
	i8 v4563 = (i8)+0;
	if (v4562==v4563) goto c02_03a8; else goto c02_03a9;

c02_03a9:;

	i8 v4564 = (i8)(intptr_t)(ws+3440);
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = v4565+(+52);
	i1 v4567 = *(i1*)(intptr_t)v4566;
	i8 v4568 = (i8)(intptr_t)(ws+3448);
	i1 v4569 = *(i1*)(intptr_t)v4568;
	if (v4567==v4569) goto c02_03a7; else goto c02_03a8;

c02_03a7:;

	i1 v4570 = (i1)+1;
	i8 v4571 = (i8)(intptr_t)(ws+3449);
	*(i1*)(intptr_t)v4571 = v4570;

c02_03a8:;

c02_03a2:;

endsub:;
	*p4556 = *(i1*)(intptr_t)(ws+3449);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3384 length ws+9
void f222_IsArray(i1* p4572 /* result */, i8 p4573 /* type */) {
	*(i8*)(intptr_t)(ws+3384) = p4573; /*type */

	i8 v4574 = (i8)(intptr_t)(ws+3384);
	i8 v4575 = *(i8*)(intptr_t)v4574;
	i1 v4576 = (i1)+4;
	i8 v4577 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4578;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4577)(&v4578, v4576, v4575);
	i8 v4579 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4579 = v4578;

endsub:;
	*p4572 = *(i1*)(intptr_t)(ws+3392);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3424 length ws+9
void f63_IsPtr(i1* p4580 /* result */, i8 p4581 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4581; /*type */

	i8 v4582 = (i8)(intptr_t)(ws+3424);
	i8 v4583 = *(i8*)(intptr_t)v4582;
	i1 v4584 = (i1)+3;
	i8 v4585 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4586;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4585)(&v4586, v4584, v4583);
	i8 v4587 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4587 = v4586;

endsub:;
	*p4580 = *(i1*)(intptr_t)(ws+3432);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3424 length ws+9
void f223_IsSubroutine(i1* p4588 /* result */, i8 p4589 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4589; /*type */

	i8 v4590 = (i8)(intptr_t)(ws+3424);
	i8 v4591 = *(i8*)(intptr_t)v4590;
	i1 v4592 = (i1)+6;
	i8 v4593 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4594;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4593)(&v4594, v4592, v4591);
	i8 v4595 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4595 = v4594;

endsub:;
	*p4588 = *(i1*)(intptr_t)(ws+3432);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3424 length ws+9
void f224_IsNum(i1* p4596 /* result */, i8 p4597 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4597; /*type */

	i8 v4598 = (i8)(intptr_t)(ws+3424);
	i8 v4599 = *(i8*)(intptr_t)v4598;
	i8 v4600 = (i8)+0;
	if (v4599==v4600) goto c02_03ad; else goto c02_03ae;

c02_03ad:;

	i1 v4601 = (i1)+1;
	i8 v4602 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4602 = v4601;

	goto c02_03aa;

c02_03ae:;

	i8 v4603 = (i8)(intptr_t)(ws+3424);
	i8 v4604 = *(i8*)(intptr_t)v4603;
	i1 v4605 = (i1)+2;
	i8 v4606 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4607;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4606)(&v4607, v4605, v4604);
	i8 v4608 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4608 = v4607;

c02_03aa:;

endsub:;
	*p4596 = *(i1*)(intptr_t)(ws+3432);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3376 length ws+9
void f225_IsSNum(i1* p4609 /* result */, i8 p4610 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p4610; /*type */

	i8 v4611 = (i8)(intptr_t)(ws+3376);
	i8 v4612 = *(i8*)(intptr_t)v4611;
	i8 v4613 = (i8)+0;
	if (v4612==v4613) goto c02_03b2; else goto c02_03b3;

c02_03b2:;

	i1 v4614 = (i1)+1;
	i8 v4615 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4615 = v4614;

	goto c02_03af;

c02_03b3:;

	i8 v4616 = (i8)(intptr_t)(ws+3376);
	i8 v4617 = *(i8*)(intptr_t)v4616;
	i1 v4618 = (i1)+2;
	i8 v4619 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4620;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4619)(&v4620, v4618, v4617);
	i1 v4621 = (i1)+0;
	if (v4620==v4621) goto c02_03b9; else goto c02_03ba;

c02_03ba:;

	i8 v4622 = (i8)(intptr_t)(ws+3376);
	i8 v4623 = *(i8*)(intptr_t)v4622;
	i1 v4624 = *(i1*)(intptr_t)v4623;
	i1 v4625 = (i1)+0;
	if (v4624==v4625) goto c02_03b9; else goto c02_03b8;

c02_03b8:;

	i1 v4626 = (i1)+1;
	i8 v4627 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4627 = v4626;

	goto c02_03af;

c02_03b9:;

	i1 v4628 = (i1)+0;
	i8 v4629 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4629 = v4628;

c02_03af:;

endsub:;
	*p4609 = *(i1*)(intptr_t)(ws+3384);
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3408 length ws+9
void f226_IsScalar(i1* p4630 /* result */, i8 p4631 /* type */) {
	*(i8*)(intptr_t)(ws+3408) = p4631; /*type */

	i8 v4632 = (i8)(intptr_t)(ws+3408);
	i8 v4633 = *(i8*)(intptr_t)v4632;
	i8 v4634 = (i8)(intptr_t)(f63_IsPtr);
	i1 v4635;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4634)(&v4635, v4633);
	i1 v4636 = (i1)+0;
	if (v4635==v4636) goto c02_03c5; else goto c02_03c2;

c02_03c5:;

	i8 v4637 = (i8)(intptr_t)(ws+3408);
	i8 v4638 = *(i8*)(intptr_t)v4637;
	i8 v4639 = (i8)(intptr_t)(f224_IsNum);
	i1 v4640;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4639)(&v4640, v4638);
	i1 v4641 = (i1)+0;
	if (v4640==v4641) goto c02_03c4; else goto c02_03c2;

c02_03c4:;

	i8 v4642 = (i8)(intptr_t)(ws+3408);
	i8 v4643 = *(i8*)(intptr_t)v4642;
	i8 v4644 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v4645;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4644)(&v4645, v4643);
	i1 v4646 = (i1)+0;
	if (v4645==v4646) goto c02_03c3; else goto c02_03c2;

c02_03c2:;

	i1 v4647 = (i1)+1;
	i8 v4648 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v4648 = v4647;

	goto c02_03bb;

c02_03c3:;

	i1 v4649 = (i1)+0;
	i8 v4650 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v4650 = v4649;

c02_03bb:;

endsub:;
	*p4630 = *(i1*)(intptr_t)(ws+3416);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3352 length ws+9
void f227_IsRecord(i1* p4651 /* result */, i8 p4652 /* type */) {
	*(i8*)(intptr_t)(ws+3352) = p4652; /*type */

	i8 v4653 = (i8)(intptr_t)(ws+3352);
	i8 v4654 = *(i8*)(intptr_t)v4653;
	i1 v4655 = (i1)+5;
	i8 v4656 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4657;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4656)(&v4657, v4655, v4654);
	i8 v4658 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v4658 = v4657;

endsub:;
	*p4651 = *(i1*)(intptr_t)(ws+3360);
}
	void f226_IsScalar(i1* /* result */, i8 /* type */);
	void f116_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3376 length ws+32
void f228_MakeLValue(i8* p4659 /* lvalue */, i8 p4660 /* address */) {
	*(i8*)(intptr_t)(ws+3376) = p4660; /*address */

	i1 v4661 = (i1)+0;
	i8 v4662 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4662 = v4661;

	i8 v4663 = (i8)(intptr_t)(ws+3376);
	i8 v4664 = *(i8*)(intptr_t)v4663;
	i8 v4665 = v4664+(+16);
	i8 v4666 = *(i8*)(intptr_t)v4665;
	i8 v4667 = *(i8*)(intptr_t)v4666;
	i8 v4668 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v4668 = v4667;

	i8 v4669 = (i8)(intptr_t)(ws+3400);
	i8 v4670 = *(i8*)(intptr_t)v4669;
	i8 v4671 = (i8)(intptr_t)(f226_IsScalar);
	i1 v4672;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4671)(&v4672, v4670);
	i1 v4673 = (i1)+0;
	if (v4672==v4673) goto c02_03ca; else goto c02_03c9;

c02_03c9:;

	i8 v4674 = (i8)(intptr_t)(ws+3400);
	i8 v4675 = *(i8*)(intptr_t)v4674;
	i8 v4676 = v4675+(+48);
	i2 v4677 = *(i2*)(intptr_t)v4676;
	i1 v4678 = v4677;
	i8 v4679 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4679 = v4678;

c02_03ca:;

c02_03c6:;

	i8 v4680 = (i8)(intptr_t)(ws+3392);
	i1 v4681 = *(i1*)(intptr_t)v4680;
	i8 v4682 = (i8)(intptr_t)(ws+3376);
	i8 v4683 = *(i8*)(intptr_t)v4682;
	i8 v4684 = (i8)(intptr_t)(f116_MidLoad);
	i8 v4685;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v4684)(&v4685, v4683, v4681);
	i8 v4686 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4686 = v4685;

	i8 v4687 = (i8)(intptr_t)(ws+3400);
	i8 v4688 = *(i8*)(intptr_t)v4687;
	i8 v4689 = (i8)(intptr_t)(ws+3384);
	i8 v4690 = *(i8*)(intptr_t)v4689;
	i8 v4691 = v4690+(+16);
	*(i8*)(intptr_t)v4691 = v4688;

endsub:;
	*p4659 = *(i8*)(intptr_t)(ws+3384);
}
const i1 c02_s00fe[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f58_Discard(i8 /* node */);

// UndoLValue workspace at ws+3376 length ws+17
void f229_UndoLValue(i8* p4692 /* address */, i8 p4693 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3376) = p4693; /*lvalue */

	i8 v4694 = (i8)(intptr_t)(ws+3376);
	i8 v4695 = *(i8*)(intptr_t)v4694;
	i8 v4696 = v4695+(+40);
	i1 v4697 = *(i1*)(intptr_t)v4696;
	i8 v4698 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4698 = v4697;

	i8 v4699 = (i8)(intptr_t)(ws+3392);
	i1 v4700 = *(i1*)(intptr_t)v4699;
	i1 v4701 = (i1)+49;
	if (v4700<v4701) goto c02_03d0; else goto c02_03d2;

c02_03d2:;

	i1 v4702 = (i1)+53;
	i8 v4703 = (i8)(intptr_t)(ws+3392);
	i1 v4704 = *(i1*)(intptr_t)v4703;
	if (v4702<v4704) goto c02_03d0; else goto c02_03d1;

c02_03d0:;

	i8 v4705 = (i8)(intptr_t)c02_s00fe;
	i8 v4706 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4706)(v4705);

c02_03d1:;

c02_03cb:;

	i8 v4707 = (i8)(intptr_t)(ws+3376);
	i8 v4708 = *(i8*)(intptr_t)v4707;
	i8 v4709 = v4708+(+24);
	i8 v4710 = *(i8*)(intptr_t)v4709;
	i8 v4711 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4711 = v4710;

	i8 v4712 = (i8)+0;
	i8 v4713 = (i8)(intptr_t)(ws+3376);
	i8 v4714 = *(i8*)(intptr_t)v4713;
	i8 v4715 = v4714+(+24);
	*(i8*)(intptr_t)v4715 = v4712;

	i8 v4716 = (i8)(intptr_t)(ws+3376);
	i8 v4717 = *(i8*)(intptr_t)v4716;
	i8 v4718 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4718)(v4717);

endsub:;
	*p4692 = *(i8*)(intptr_t)(ws+3384);
}

// AllocLabel workspace at ws+3392 length ws+2
void f230_AllocLabel(i2* p4719 /* label */) {

	i8 v4720 = (i8)(intptr_t)(ws+48);
	i2 v4721 = *(i2*)(intptr_t)v4720;
	i8 v4722 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v4722 = v4721;

	i8 v4723 = (i8)(intptr_t)(ws+48);
	i2 v4724 = *(i2*)(intptr_t)v4723;
	i2 v4725 = v4724+(+1);
	i8 v4726 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4726 = v4725;

endsub:;
	*p4719 = *(i2*)(intptr_t)(ws+3392);
}

// AllocSubrId workspace at ws+3336 length ws+2
void f231_AllocSubrId(i2* p4727 /* id */) {

	i8 v4728 = (i8)(intptr_t)(ws+50);
	i2 v4729 = *(i2*)(intptr_t)v4728;
	i8 v4730 = (i8)(intptr_t)(ws+3336);
	*(i2*)(intptr_t)v4730 = v4729;

	i8 v4731 = (i8)(intptr_t)(ws+50);
	i2 v4732 = *(i2*)(intptr_t)v4731;
	i2 v4733 = v4732+(+1);
	i8 v4734 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4734 = v4733;

endsub:;
	*p4727 = *(i2*)(intptr_t)(ws+3336);
}

// MidWriter workspace at ws+3440 length ws+8
void f232_MidWriter(i8 p4735 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4735; /*node */

endsub:;
}

// ArchAlignUp workspace at ws+3384 length ws+8
void f233_ArchAlignUp(i2* p4736 /* newvalue */, i1 p4737 /* alignment */, i2 p4738 /* value */) {
	*(i2*)(intptr_t)(ws+3384) = p4738; /*value */
	*(i1*)(intptr_t)(ws+3386) = p4737; /*alignment */

	i8 v4739 = (i8)(intptr_t)(ws+3386);
	i1 v4740 = *(i1*)(intptr_t)v4739;
	i1 v4741 = v4740+(-1);
	i2 v4742 = v4741;
	i8 v4743 = (i8)(intptr_t)(ws+3390);
	*(i2*)(intptr_t)v4743 = v4742;

	i8 v4744 = (i8)(intptr_t)(ws+3384);
	i2 v4745 = *(i2*)(intptr_t)v4744;
	i8 v4746 = (i8)(intptr_t)(ws+3390);
	i2 v4747 = *(i2*)(intptr_t)v4746;
	i2 v4748 = v4745+v4747;
	i8 v4749 = (i8)(intptr_t)(ws+3390);
	i2 v4750 = *(i2*)(intptr_t)v4749;
	i2 v4751 = ~v4750;
	i2 v4752 = v4748&v4751;
	i8 v4753 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v4753 = v4752;

endsub:;
	*p4736 = *(i2*)(intptr_t)(ws+3388);
}
const i1 c02_s00ff[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0100[] = { 0x69,0x6e,0x74,0x36,0x34,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0101[] = { 0x75,0x69,0x6e,0x74,0x33,0x32,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0102[] = { 0x69,0x6e,0x74,0x33,0x32,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0103[] = { 0x75,0x69,0x6e,0x74,0x31,0x36,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0104[] = { 0x69,0x6e,0x74,0x31,0x36,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0105[] = { 0x75,0x69,0x6e,0x74,0x38,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0106[] = { 0x69,0x6e,0x74,0x38,0 };
	void f220_MakeNumberType(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */);
const i1 c02_s0107[] = { 0x69,0x6e,0x74,0x70,0x74,0x72,0 };
const i1 c02_s0108[] = { 0x75,0x69,0x6e,0x74,0x36,0x34,0 };
	void f213_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f217_AddAliasString(i8 /* real */, i8 /* name */);

// ArchInitTypes workspace at ws+3208 length ws+0
void f234_ArchInitTypes(void) {

	i1 v4754 = (i1)+8;
	i1 v4755 = (i1)+8;
	i1 v4756 = (i1)+0;
	i8 v4757 = (i8)(intptr_t)c02_s00ff;
	i8 v4758 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4759;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4758)(&v4759, v4757, v4756, v4755, v4754);
	i8 v4760 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v4760 = v4759;

	i1 v4761 = (i1)+8;
	i1 v4762 = (i1)+8;
	i1 v4763 = (i1)+1;
	i8 v4764 = (i8)(intptr_t)c02_s0100;
	i8 v4765 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4766;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4765)(&v4766, v4764, v4763, v4762, v4761);
	i8 v4767 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v4767 = v4766;

	i1 v4768 = (i1)+4;
	i1 v4769 = (i1)+4;
	i1 v4770 = (i1)+0;
	i8 v4771 = (i8)(intptr_t)c02_s0101;
	i8 v4772 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4773;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4772)(&v4773, v4771, v4770, v4769, v4768);
	i8 v4774 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v4774 = v4773;

	i1 v4775 = (i1)+4;
	i1 v4776 = (i1)+4;
	i1 v4777 = (i1)+1;
	i8 v4778 = (i8)(intptr_t)c02_s0102;
	i8 v4779 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4780;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4779)(&v4780, v4778, v4777, v4776, v4775);
	i8 v4781 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v4781 = v4780;

	i1 v4782 = (i1)+2;
	i1 v4783 = (i1)+2;
	i1 v4784 = (i1)+0;
	i8 v4785 = (i8)(intptr_t)c02_s0103;
	i8 v4786 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4787;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4786)(&v4787, v4785, v4784, v4783, v4782);
	i8 v4788 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v4788 = v4787;

	i1 v4789 = (i1)+2;
	i1 v4790 = (i1)+2;
	i1 v4791 = (i1)+1;
	i8 v4792 = (i8)(intptr_t)c02_s0104;
	i8 v4793 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4794;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4793)(&v4794, v4792, v4791, v4790, v4789);
	i8 v4795 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v4795 = v4794;

	i1 v4796 = (i1)+1;
	i1 v4797 = (i1)+1;
	i1 v4798 = (i1)+0;
	i8 v4799 = (i8)(intptr_t)c02_s0105;
	i8 v4800 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4801;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4800)(&v4801, v4799, v4798, v4797, v4796);
	i8 v4802 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v4802 = v4801;

	i1 v4803 = (i1)+1;
	i1 v4804 = (i1)+1;
	i1 v4805 = (i1)+1;
	i8 v4806 = (i8)(intptr_t)c02_s0106;
	i8 v4807 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4808;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4807)(&v4808, v4806, v4805, v4804, v4803);
	i8 v4809 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v4809 = v4808;

	i8 v4810 = (i8)(intptr_t)(ws+1464);
	i8 v4811 = *(i8*)(intptr_t)v4810;
	i8 v4812 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v4812 = v4811;

	i8 v4813 = (i8)(intptr_t)c02_s0107;
	i8 v4814 = (i8)+0;
	i8 v4815 = (i8)(intptr_t)c02_s0108;
	i8 v4816 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v4817;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4816)(&v4817, v4815, v4814);
	i8 v4818 = (i8)(intptr_t)(f217_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v4818)(v4817, v4813);

endsub:;
}

// ArchGuessIntType workspace at ws+3360 length ws+16
void f235_ArchGuessIntType(i8* p4819 /* symbol */, i4 p4820 /* max */, i4 p4821 /* min */) {
	*(i4*)(intptr_t)(ws+3360) = p4821; /*min */
	*(i4*)(intptr_t)(ws+3364) = p4820; /*max */

	i8 v4822 = (i8)(intptr_t)(ws+3360);
	i4 v4823 = *(i4*)(intptr_t)v4822;
	i4 v4824 = (i4)+0;
	if ((s4)v4823<(s4)v4824) goto c02_03d9; else goto c02_03da;

c02_03da:;

	i4 v4825 = (i4)+255;
	i8 v4826 = (i8)(intptr_t)(ws+3364);
	i4 v4827 = *(i4*)(intptr_t)v4826;
	if ((s4)v4825<(s4)v4827) goto c02_03d9; else goto c02_03d8;

c02_03d8:;

	i8 v4828 = (i8)(intptr_t)(ws+1512);
	i8 v4829 = *(i8*)(intptr_t)v4828;
	i8 v4830 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4830 = v4829;

	goto c02_03d3;

c02_03d9:;

	i8 v4831 = (i8)(intptr_t)(ws+3360);
	i4 v4832 = *(i4*)(intptr_t)v4831;
	i4 v4833 = (i4)-128;
	if ((s4)v4832<(s4)v4833) goto c02_03e0; else goto c02_03e1;

c02_03e1:;

	i4 v4834 = (i4)+127;
	i8 v4835 = (i8)(intptr_t)(ws+3364);
	i4 v4836 = *(i4*)(intptr_t)v4835;
	if ((s4)v4834<(s4)v4836) goto c02_03e0; else goto c02_03df;

c02_03df:;

	i8 v4837 = (i8)(intptr_t)(ws+1520);
	i8 v4838 = *(i8*)(intptr_t)v4837;
	i8 v4839 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4839 = v4838;

	goto c02_03d3;

c02_03e0:;

	i8 v4840 = (i8)(intptr_t)(ws+3360);
	i4 v4841 = *(i4*)(intptr_t)v4840;
	i4 v4842 = (i4)+0;
	if ((s4)v4841<(s4)v4842) goto c02_03e7; else goto c02_03e8;

c02_03e8:;

	i4 v4843 = (i4)+65535;
	i8 v4844 = (i8)(intptr_t)(ws+3364);
	i4 v4845 = *(i4*)(intptr_t)v4844;
	if ((s4)v4843<(s4)v4845) goto c02_03e7; else goto c02_03e6;

c02_03e6:;

	i8 v4846 = (i8)(intptr_t)(ws+1496);
	i8 v4847 = *(i8*)(intptr_t)v4846;
	i8 v4848 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4848 = v4847;

	goto c02_03d3;

c02_03e7:;

	i8 v4849 = (i8)(intptr_t)(ws+3360);
	i4 v4850 = *(i4*)(intptr_t)v4849;
	i4 v4851 = (i4)-32768;
	if ((s4)v4850<(s4)v4851) goto c02_03ee; else goto c02_03ef;

c02_03ef:;

	i4 v4852 = (i4)+32767;
	i8 v4853 = (i8)(intptr_t)(ws+3364);
	i4 v4854 = *(i4*)(intptr_t)v4853;
	if ((s4)v4852<(s4)v4854) goto c02_03ee; else goto c02_03ed;

c02_03ed:;

	i8 v4855 = (i8)(intptr_t)(ws+1504);
	i8 v4856 = *(i8*)(intptr_t)v4855;
	i8 v4857 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4857 = v4856;

	goto c02_03d3;

c02_03ee:;

	i8 v4858 = (i8)(intptr_t)(ws+3360);
	i4 v4859 = *(i4*)(intptr_t)v4858;
	i4 v4860 = (i4)+0;
	if ((s4)v4859<(s4)v4860) goto c02_03f3; else goto c02_03f2;

c02_03f2:;

	i8 v4861 = (i8)(intptr_t)(ws+1480);
	i8 v4862 = *(i8*)(intptr_t)v4861;
	i8 v4863 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4863 = v4862;

	goto c02_03d3;

c02_03f3:;

	i8 v4864 = (i8)(intptr_t)(ws+1488);
	i8 v4865 = *(i8*)(intptr_t)v4864;
	i8 v4866 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4866 = v4865;

c02_03d3:;

endsub:;
	*p4819 = *(i8*)(intptr_t)(ws+3368);
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3360 length ws+18
void f236_ArchInitVariable(i8 p4867 /* symbol */) {
	*(i8*)(intptr_t)(ws+3360) = p4867; /*symbol */

	i8 v4868 = (i8)(intptr_t)(ws+3360);
	i8 v4869 = *(i8*)(intptr_t)v4868;
	i8 v4870 = *(i8*)(intptr_t)v4869;
	i8 v4871 = v4870+(+8);
	i8 v4872 = *(i8*)(intptr_t)v4871;
	i8 v4873 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4873 = v4872;

	i8 v4874 = (i8)(intptr_t)(ws+3368);
	i8 v4875 = *(i8*)(intptr_t)v4874;
	i8 v4876 = v4875+(+58);
	i2 v4877 = *(i2*)(intptr_t)v4876;
	i8 v4878 = (i8)(intptr_t)(ws+3376);
	*(i2*)(intptr_t)v4878 = v4877;

	i8 v4879 = (i8)(intptr_t)(ws+3376);
	i2 v4880 = *(i2*)(intptr_t)v4879;
	i8 v4881 = (i8)(intptr_t)(ws+3360);
	i8 v4882 = *(i8*)(intptr_t)v4881;
	i8 v4883 = *(i8*)(intptr_t)v4882;
	i8 v4884 = *(i8*)(intptr_t)v4883;
	i8 v4885 = v4884+(+53);
	i1 v4886 = *(i1*)(intptr_t)v4885;
	i8 v4887 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v4888;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4887)(&v4888, v4886, v4880);
	i8 v4889 = (i8)(intptr_t)(ws+3376);
	*(i2*)(intptr_t)v4889 = v4888;

	i8 v4890 = (i8)(intptr_t)(ws+3376);
	i2 v4891 = *(i2*)(intptr_t)v4890;
	i8 v4892 = (i8)(intptr_t)(ws+3360);
	i8 v4893 = *(i8*)(intptr_t)v4892;
	i8 v4894 = *(i8*)(intptr_t)v4893;
	i8 v4895 = v4894+(+24);
	*(i2*)(intptr_t)v4895 = v4891;

	i8 v4896 = (i8)(intptr_t)(ws+3376);
	i2 v4897 = *(i2*)(intptr_t)v4896;
	i8 v4898 = (i8)(intptr_t)(ws+3360);
	i8 v4899 = *(i8*)(intptr_t)v4898;
	i8 v4900 = *(i8*)(intptr_t)v4899;
	i8 v4901 = *(i8*)(intptr_t)v4900;
	i8 v4902 = v4901+(+48);
	i2 v4903 = *(i2*)(intptr_t)v4902;
	i2 v4904 = v4897+v4903;
	i8 v4905 = (i8)(intptr_t)(ws+3368);
	i8 v4906 = *(i8*)(intptr_t)v4905;
	i8 v4907 = v4906+(+58);
	*(i2*)(intptr_t)v4907 = v4904;

endsub:;
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3328 length ws+18
void f237_ArchInitMember(i2 p4908 /* position */, i8 p4909 /* member */, i8 p4910 /* containing */) {
	*(i8*)(intptr_t)(ws+3328) = p4910; /*containing */
	*(i8*)(intptr_t)(ws+3336) = p4909; /*member */
	*(i2*)(intptr_t)(ws+3344) = p4908; /*position */

	i8 v4911 = (i8)(intptr_t)(ws+3344);
	i2 v4912 = *(i2*)(intptr_t)v4911;
	i8 v4913 = (i8)(intptr_t)(ws+3336);
	i8 v4914 = *(i8*)(intptr_t)v4913;
	i8 v4915 = *(i8*)(intptr_t)v4914;
	i8 v4916 = *(i8*)(intptr_t)v4915;
	i8 v4917 = v4916+(+53);
	i1 v4918 = *(i1*)(intptr_t)v4917;
	i8 v4919 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v4920;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4919)(&v4920, v4918, v4912);
	i8 v4921 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v4921 = v4920;

	i8 v4922 = (i8)(intptr_t)(ws+3344);
	i2 v4923 = *(i2*)(intptr_t)v4922;
	i8 v4924 = (i8)(intptr_t)(ws+3336);
	i8 v4925 = *(i8*)(intptr_t)v4924;
	i8 v4926 = *(i8*)(intptr_t)v4925;
	i8 v4927 = v4926+(+24);
	*(i2*)(intptr_t)v4927 = v4923;

	i8 v4928 = (i8)(intptr_t)(ws+3344);
	i2 v4929 = *(i2*)(intptr_t)v4928;
	i8 v4930 = (i8)(intptr_t)(ws+3336);
	i8 v4931 = *(i8*)(intptr_t)v4930;
	i8 v4932 = *(i8*)(intptr_t)v4931;
	i8 v4933 = *(i8*)(intptr_t)v4932;
	i8 v4934 = v4933+(+48);
	i2 v4935 = *(i2*)(intptr_t)v4934;
	i2 v4936 = v4929+v4935;
	i8 v4937 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v4937 = v4936;

	i8 v4938 = (i8)(intptr_t)(ws+3328);
	i8 v4939 = *(i8*)(intptr_t)v4938;
	i8 v4940 = v4939+(+48);
	i2 v4941 = *(i2*)(intptr_t)v4940;
	i8 v4942 = (i8)(intptr_t)(ws+3344);
	i2 v4943 = *(i2*)(intptr_t)v4942;
	if (v4941<v4943) goto c02_03f7; else goto c02_03f8;

c02_03f7:;

	i8 v4944 = (i8)(intptr_t)(ws+3344);
	i2 v4945 = *(i2*)(intptr_t)v4944;
	i8 v4946 = (i8)(intptr_t)(ws+3328);
	i8 v4947 = *(i8*)(intptr_t)v4946;
	i8 v4948 = v4947+(+48);
	*(i2*)(intptr_t)v4948 = v4945;

c02_03f8:;

c02_03f4:;

endsub:;
}
	void f172_E_b32(i4 /* quad */);

// WriteMid1 workspace at ws+3448 length ws+0
void f238_WriteMid1(i8 p4949 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4949; /*node */

	i8 v4950 = (i8)(intptr_t)(ws+3440);
	i8 v4951 = *(i8*)(intptr_t)v4950;
	i4 v4952 = *(i4*)(intptr_t)v4951;
	i8 v4953 = (i8)(intptr_t)(f172_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v4953)(v4952);

endsub:;
}
	void f181_E_countedstring(i8 /* text */);

// WriteMid2 workspace at ws+3448 length ws+0
void f239_WriteMid2(i8 p4954 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4954; /*node */

	i8 v4955 = (i8)(intptr_t)(ws+3440);
	i8 v4956 = *(i8*)(intptr_t)v4955;
	i8 v4957 = *(i8*)(intptr_t)v4956;
	i8 v4958 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v4958)(v4957);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);

// WriteMid3 workspace at ws+3448 length ws+0
void f240_WriteMid3(i8 p4959 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4959; /*node */

	i8 v4960 = (i8)(intptr_t)(ws+3440);
	i8 v4961 = *(i8*)(intptr_t)v4960;
	i2 v4962 = *(i2*)(intptr_t)v4961;
	i8 v4963 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4963)(v4962);

	i8 v4964 = (i8)(intptr_t)(ws+3440);
	i8 v4965 = *(i8*)(intptr_t)v4964;
	i8 v4966 = v4965+(+2);
	i2 v4967 = *(i2*)(intptr_t)v4966;
	i8 v4968 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4968)(v4967);

	i8 v4969 = (i8)(intptr_t)(ws+3440);
	i8 v4970 = *(i8*)(intptr_t)v4969;
	i8 v4971 = v4970+(+4);
	i2 v4972 = *(i2*)(intptr_t)v4971;
	i8 v4973 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4973)(v4972);

	i8 v4974 = (i8)(intptr_t)(ws+3440);
	i8 v4975 = *(i8*)(intptr_t)v4974;
	i8 v4976 = v4975+(+6);
	i1 v4977 = *(i1*)(intptr_t)v4976;
	i8 v4978 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4978)(v4977);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);
	void f170_E_b8(i1 /* byte */);

// WriteMid4 workspace at ws+3448 length ws+0
void f241_WriteMid4(i8 p4979 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4979; /*node */

	i8 v4980 = (i8)(intptr_t)(ws+3440);
	i8 v4981 = *(i8*)(intptr_t)v4980;
	i8 v4982 = *(i8*)(intptr_t)v4981;
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i8 v4984 = v4983+(+8);
	i8 v4985 = *(i8*)(intptr_t)v4984;
	i8 v4986 = v4985+(+56);
	i2 v4987 = *(i2*)(intptr_t)v4986;
	i8 v4988 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4988)(v4987);

	i8 v4989 = (i8)(intptr_t)(ws+3440);
	i8 v4990 = *(i8*)(intptr_t)v4989;
	i8 v4991 = *(i8*)(intptr_t)v4990;
	i8 v4992 = *(i8*)(intptr_t)v4991;
	i8 v4993 = v4992+(+26);
	i1 v4994 = *(i1*)(intptr_t)v4993;
	i8 v4995 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4995)(v4994);

	i8 v4996 = (i8)(intptr_t)(ws+3440);
	i8 v4997 = *(i8*)(intptr_t)v4996;
	i8 v4998 = *(i8*)(intptr_t)v4997;
	i8 v4999 = *(i8*)(intptr_t)v4998;
	i8 v5000 = v4999+(+24);
	i2 v5001 = *(i2*)(intptr_t)v5000;
	i8 v5002 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5002)(v5001);

	i8 v5003 = (i8)(intptr_t)(ws+3440);
	i8 v5004 = *(i8*)(intptr_t)v5003;
	i8 v5005 = *(i8*)(intptr_t)v5004;
	i8 v5006 = *(i8*)(intptr_t)v5005;
	i8 v5007 = *(i8*)(intptr_t)v5006;
	i8 v5008 = v5007+(+48);
	i2 v5009 = *(i2*)(intptr_t)v5008;
	i1 v5010 = v5009;
	i8 v5011 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5011)(v5010);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);

// WriteMid5 workspace at ws+3448 length ws+0
void f242_WriteMid5(i8 p5012 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5012; /*node */

	i8 v5013 = (i8)(intptr_t)(ws+3440);
	i8 v5014 = *(i8*)(intptr_t)v5013;
	i8 v5015 = *(i8*)(intptr_t)v5014;
	i8 v5016 = *(i8*)(intptr_t)v5015;
	i8 v5017 = v5016+(+8);
	i8 v5018 = *(i8*)(intptr_t)v5017;
	i8 v5019 = v5018+(+56);
	i2 v5020 = *(i2*)(intptr_t)v5019;
	i8 v5021 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5021)(v5020);

	i8 v5022 = (i8)(intptr_t)(ws+3440);
	i8 v5023 = *(i8*)(intptr_t)v5022;
	i8 v5024 = *(i8*)(intptr_t)v5023;
	i8 v5025 = *(i8*)(intptr_t)v5024;
	i8 v5026 = v5025+(+26);
	i1 v5027 = *(i1*)(intptr_t)v5026;
	i8 v5028 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5028)(v5027);

	i8 v5029 = (i8)(intptr_t)(ws+3440);
	i8 v5030 = *(i8*)(intptr_t)v5029;
	i8 v5031 = *(i8*)(intptr_t)v5030;
	i8 v5032 = *(i8*)(intptr_t)v5031;
	i8 v5033 = v5032+(+24);
	i2 v5034 = *(i2*)(intptr_t)v5033;
	i8 v5035 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5035)(v5034);

	i8 v5036 = (i8)(intptr_t)(ws+3440);
	i8 v5037 = *(i8*)(intptr_t)v5036;
	i8 v5038 = *(i8*)(intptr_t)v5037;
	i8 v5039 = *(i8*)(intptr_t)v5038;
	i8 v5040 = *(i8*)(intptr_t)v5039;
	i8 v5041 = v5040+(+48);
	i2 v5042 = *(i2*)(intptr_t)v5041;
	i1 v5043 = v5042;
	i8 v5044 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5044)(v5043);

	i8 v5045 = (i8)(intptr_t)(ws+3440);
	i8 v5046 = *(i8*)(intptr_t)v5045;
	i8 v5047 = v5046+(+8);
	i2 v5048 = *(i2*)(intptr_t)v5047;
	i8 v5049 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5049)(v5048);

endsub:;
}

// WriteMid6 workspace at ws+3448 length ws+0
void f243_WriteMid6(i8 p5050 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5050; /*node */

endsub:;
}
	void f172_E_b32(i4 /* quad */);
	void f171_E_b16(i2 /* word */);

// WriteMid7 workspace at ws+3448 length ws+0
void f244_WriteMid7(i8 p5051 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5051; /*node */

	i8 v5052 = (i8)(intptr_t)(ws+3440);
	i8 v5053 = *(i8*)(intptr_t)v5052;
	i4 v5054 = *(i4*)(intptr_t)v5053;
	i8 v5055 = (i8)(intptr_t)(f172_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5055)(v5054);

	i8 v5056 = (i8)(intptr_t)(ws+3440);
	i8 v5057 = *(i8*)(intptr_t)v5056;
	i8 v5058 = v5057+(+4);
	i2 v5059 = *(i2*)(intptr_t)v5058;
	i8 v5060 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5060)(v5059);

endsub:;
}
	void f171_E_b16(i2 /* word */);

// WriteMid8 workspace at ws+3448 length ws+0
void f245_WriteMid8(i8 p5061 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5061; /*node */

	i8 v5062 = (i8)(intptr_t)(ws+3440);
	i8 v5063 = *(i8*)(intptr_t)v5062;
	i8 v5064 = *(i8*)(intptr_t)v5063;
	i8 v5065 = v5064+(+56);
	i2 v5066 = *(i2*)(intptr_t)v5065;
	i8 v5067 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5067)(v5066);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);

// WriteMid9 workspace at ws+3448 length ws+0
void f246_WriteMid9(i8 p5068 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5068; /*node */

	i8 v5069 = (i8)(intptr_t)(ws+3440);
	i8 v5070 = *(i8*)(intptr_t)v5069;
	i8 v5071 = *(i8*)(intptr_t)v5070;
	i8 v5072 = v5071+(+56);
	i2 v5073 = *(i2*)(intptr_t)v5072;
	i8 v5074 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5074)(v5073);

	i8 v5075 = (i8)(intptr_t)(ws+3440);
	i8 v5076 = *(i8*)(intptr_t)v5075;
	i8 v5077 = v5076+(+8);
	i1 v5078 = *(i1*)(intptr_t)v5077;
	i8 v5079 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5079)(v5078);

endsub:;
}
	void f171_E_b16(i2 /* word */);

// WriteMid10 workspace at ws+3448 length ws+0
void f247_WriteMid10(i8 p5080 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5080; /*node */

	i8 v5081 = (i8)(intptr_t)(ws+3440);
	i8 v5082 = *(i8*)(intptr_t)v5081;
	i2 v5083 = *(i2*)(intptr_t)v5082;
	i8 v5084 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5084)(v5083);

endsub:;
}
	void f170_E_b8(i1 /* byte */);

// WriteMid11 workspace at ws+3448 length ws+0
void f248_WriteMid11(i8 p5085 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5085; /*node */

	i8 v5086 = (i8)(intptr_t)(ws+3440);
	i8 v5087 = *(i8*)(intptr_t)v5086;
	i1 v5088 = *(i1*)(intptr_t)v5087;
	i8 v5089 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5089)(v5088);

endsub:;
}
	void f238_WriteMid1(i8 /* node */);
	void f239_WriteMid2(i8 /* node */);
	void f240_WriteMid3(i8 /* node */);
	void f241_WriteMid4(i8 /* node */);
	void f242_WriteMid5(i8 /* node */);
	void f243_WriteMid6(i8 /* node */);
	void f244_WriteMid7(i8 /* node */);
	void f245_WriteMid8(i8 /* node */);
	void f246_WriteMid9(i8 /* node */);
	void f247_WriteMid10(i8 /* node */);
	void f248_WriteMid11(i8 /* node */);
static data f3___main_s03f9[] = {

	{ .ptr = (void*)f238_WriteMid1 },

	{ .ptr = (void*)f239_WriteMid2 },

	{ .ptr = (void*)f240_WriteMid3 },

	{ .ptr = (void*)f241_WriteMid4 },

	{ .ptr = (void*)f242_WriteMid5 },

	{ .ptr = (void*)f243_WriteMid6 },

	{ .ptr = (void*)f244_WriteMid7 },

	{ .ptr = (void*)f245_WriteMid8 },

	{ .ptr = (void*)f246_WriteMid9 },

	{ .ptr = (void*)f247_WriteMid10 },

	{ .ptr = (void*)f248_WriteMid11 },

};
static data f3___main_s03fa[] = {








	{ .i1 = { 0x05,0x05,0x05,0x07,0x07,0x03,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x01,0x04,0x07,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x01,0x03,0x07,0x00,0x05,0x05}},








	{ .i1 = { 0x05,0x09,0x09,0x05,0x07,0x07,0x07,0x07}},








	{ .i1 = { 0x07,0x07,0x08,0x08,0x08,0x08,0x08,0x08}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x00,0x01,0x04,0x07}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x02,0x02,0x02,0x02,0x02}},








	{ .i1 = { 0x02,0x02,0x02,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x06,0x06,0x06,0x06,0x06,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},


	{ .i1 = { 0x05}},
};
	void f170_E_b8(i1 /* byte */);
	void f55_PushNode(i8 /* node */);
	void f57_NextNode(i8* /* node */);
	void f170_E_b8(i1 /* byte */);
	void f58_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3408 length ws+25
void f250_ReallyGenerate(i8 p5135 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3408) = p5135; /*rootnode */

	i1 v5136 = (i1)+77;
	i8 v5137 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5137)(v5136);

	i8 v5138 = (i8)(intptr_t)(ws+224);
	i8 v5139 = *(i8*)(intptr_t)v5138;
	i8 v5140 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5140 = v5139;

	i8 v5141 = (i8)(intptr_t)(ws+3408);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i8 v5143 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5143)(v5142);

c02_0408:;

	i8 v5144 = (i8)(intptr_t)(ws+224);
	i8 v5145 = *(i8*)(intptr_t)v5144;
	i8 v5146 = (i8)(intptr_t)(ws+3416);
	i8 v5147 = *(i8*)(intptr_t)v5146;
	if (v5145==v5147) goto c02_040b; else goto c02_040a;

c02_040a:;

	i8 v5148 = (i8)(intptr_t)(f57_NextNode);
	i8 v5149;

	((void(*)(i8* /* node */))(intptr_t)v5148)(&v5149);
	i8 v5150 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5150 = v5149;

	i8 v5151 = (i8)(intptr_t)(ws+3424);
	i8 v5152 = *(i8*)(intptr_t)v5151;
	i8 v5153 = v5152+(+40);
	i1 v5154 = *(i1*)(intptr_t)v5153;
	i8 v5155 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5155)(v5154);

	i8 v5156 = (i8)(intptr_t)((i1*)f3___main_s03fa);
	i8 v5157 = (i8)(intptr_t)(ws+3424);
	i8 v5158 = *(i8*)(intptr_t)v5157;
	i8 v5159 = v5158+(+40);
	i1 v5160 = *(i1*)(intptr_t)v5159;
	i1 v5161 = v5160+(-1);
	i8 v5162 = v5161;
	i8 v5163 = v5156+v5162;
	i1 v5164 = *(i1*)(intptr_t)v5163;
	i8 v5165 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v5165 = v5164;

	i8 v5166 = (i8)(intptr_t)(ws+3424);
	i8 v5167 = *(i8*)(intptr_t)v5166;
	i8 v5168 = (i8)(intptr_t)((i1*)f3___main_s03f9);
	i8 v5169 = (i8)(intptr_t)(ws+3432);
	i1 v5170 = *(i1*)(intptr_t)v5169;
	i8 v5171 = v5170;
	i1 v5172 = (i1)+3;
	i8 v5173 = ((i8)v5171)<<v5172;
	i8 v5174 = v5168+v5173;
	i8 v5175 = *(i8*)(intptr_t)v5174;

	((void(*)(i8 /* node */))(intptr_t)v5175)(v5167);

	goto c02_0408;

c02_040b:;

	i8 v5176 = (i8)(intptr_t)(ws+3408);
	i8 v5177 = *(i8*)(intptr_t)v5176;
	i8 v5178 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5178)(v5177);

endsub:;
}
	void f58_Discard(i8 /* node */);
	void f130_MidAsmgroupstart(i8* /* m */);
	void f250_ReallyGenerate(i8 /* rootnode */);
	void f99_MidAsmgroupend(i8* /* m */);
	void f250_ReallyGenerate(i8 /* rootnode */);
	void f250_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3392 length ws+9
void f251_Generate(i8 p5181 /* statement */) {
	*(i8*)(intptr_t)(ws+3392) = p5181; /*statement */

	i8 v5182 = (i8)(intptr_t)(ws+3392);
	i8 v5183 = *(i8*)(intptr_t)v5182;
	i8 v5184 = v5183+(+40);
	i1 v5185 = *(i1*)(intptr_t)v5184;
	i8 v5186 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v5186 = v5185;

	i8 v5187 = (i8)(intptr_t)(ws+1536);
	i1 v5188 = *(i1*)(intptr_t)v5187;
	i1 v5189 = (i1)+27;
	if (v5188==v5189) goto c02_0411; else goto c02_0413;

c02_0413:;

	i8 v5190 = (i8)(intptr_t)(ws+1536);
	i1 v5191 = *(i1*)(intptr_t)v5190;
	i1 v5192 = (i1)+28;
	if (v5191==v5192) goto c02_0411; else goto c02_0412;

c02_0411:;

	i8 v5193 = (i8)(intptr_t)(ws+3400);
	i1 v5194 = *(i1*)(intptr_t)v5193;
	i1 v5195 = (i1)+26;
	if (v5194==v5195) goto c02_041a; else goto c02_041b;

c02_041b:;

	i8 v5196 = (i8)(intptr_t)(ws+3400);
	i1 v5197 = *(i1*)(intptr_t)v5196;
	i1 v5198 = (i1)+5;
	if (v5197==v5198) goto c02_041a; else goto c02_0419;

c02_0419:;

	i8 v5199 = (i8)(intptr_t)(ws+3392);
	i8 v5200 = *(i8*)(intptr_t)v5199;
	i8 v5201 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5201)(v5200);

	goto endsub;

c02_041a:;

c02_0414:;

c02_0412:;

c02_040c:;

	i8 v5202 = (i8)(intptr_t)(ws+3400);
	i1 v5203 = *(i1*)(intptr_t)v5202;
	i1 v5204 = (i1)+18;
	if (v5203==v5204) goto c02_0423; else goto c02_0422;

c02_0423:;

	i8 v5205 = (i8)(intptr_t)(ws+1536);
	i1 v5206 = *(i1*)(intptr_t)v5205;
	i1 v5207 = (i1)+23;
	if (v5206==v5207) goto c02_0422; else goto c02_0421;

c02_0421:;

	i8 v5208 = (i8)(intptr_t)(f130_MidAsmgroupstart);
	i8 v5209;

	((void(*)(i8* /* m */))(intptr_t)v5208)(&v5209);
	i8 v5210 = (i8)(intptr_t)(f250_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5210)(v5209);

c02_0422:;

c02_041c:;

	i8 v5211 = (i8)(intptr_t)(ws+1536);
	i1 v5212 = *(i1*)(intptr_t)v5211;
	i1 v5213 = (i1)+23;
	if (v5212==v5213) goto c02_042b; else goto c02_042a;

c02_042b:;

	i8 v5214 = (i8)(intptr_t)(ws+3400);
	i1 v5215 = *(i1*)(intptr_t)v5214;
	i1 v5216 = (i1)+18;
	if (v5215==v5216) goto c02_042a; else goto c02_0429;

c02_0429:;

	i8 v5217 = (i8)(intptr_t)(f99_MidAsmgroupend);
	i8 v5218;

	((void(*)(i8* /* m */))(intptr_t)v5217)(&v5218);
	i8 v5219 = (i8)(intptr_t)(f250_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5219)(v5218);

c02_042a:;

c02_0424:;

	i8 v5220 = (i8)(intptr_t)(ws+3400);
	i1 v5221 = *(i1*)(intptr_t)v5220;
	i8 v5222 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5222 = v5221;

	i8 v5223 = (i8)(intptr_t)(ws+3392);
	i8 v5224 = *(i8*)(intptr_t)v5223;
	i8 v5225 = (i8)(intptr_t)(f250_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5225)(v5224);

endsub:;
}
	void f55_PushNode(i8 /* node */);
	void f56_PopNode(i8* /* node */);
	void f55_PushNode(i8 /* node */);
	void f55_PushNode(i8 /* node */);
	void f58_Discard(i8 /* node */);

// push_and_free workspace at ws+3392 length ws+0
void f253_push_and_free(void) {

	i8 v5269 = (i8)(intptr_t)(ws+3360);
	i2 v5270 = *(i2*)(intptr_t)v5269;
	i8 v5271 = (i8)(intptr_t)(ws+3376);
	i8 v5272 = *(i8*)(intptr_t)v5271;
	*(i2*)(intptr_t)v5272 = v5270;

	i8 v5273 = (i8)(intptr_t)(ws+3362);
	i2 v5274 = *(i2*)(intptr_t)v5273;
	i8 v5275 = (i8)(intptr_t)(ws+3376);
	i8 v5276 = *(i8*)(intptr_t)v5275;
	i8 v5277 = v5276+(+2);
	*(i2*)(intptr_t)v5277 = v5274;

	i8 v5278 = (i8)(intptr_t)(ws+3364);
	i2 v5279 = *(i2*)(intptr_t)v5278;
	i8 v5280 = (i8)(intptr_t)(ws+3376);
	i8 v5281 = *(i8*)(intptr_t)v5280;
	i8 v5282 = v5281+(+4);
	*(i2*)(intptr_t)v5282 = v5279;

	i8 v5283 = (i8)+0;
	i8 v5284 = (i8)(intptr_t)(ws+3352);
	i8 v5285 = *(i8*)(intptr_t)v5284;
	i8 v5286 = v5285+(+24);
	*(i8*)(intptr_t)v5286 = v5283;

	i8 v5287 = (i8)+0;
	i8 v5288 = (i8)(intptr_t)(ws+3352);
	i8 v5289 = *(i8*)(intptr_t)v5288;
	i8 v5290 = v5289+(+32);
	*(i8*)(intptr_t)v5290 = v5287;

	i8 v5291 = (i8)(intptr_t)(ws+3376);
	i8 v5292 = *(i8*)(intptr_t)v5291;
	i8 v5293 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5293)(v5292);

	i8 v5294 = (i8)(intptr_t)(ws+3368);
	i8 v5295 = *(i8*)(intptr_t)v5294;
	i8 v5296 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5296)(v5295);

	i8 v5297 = (i8)(intptr_t)(ws+3352);
	i8 v5298 = *(i8*)(intptr_t)v5297;
	i8 v5299 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5299)(v5298);

endsub:;
}
	void f230_AllocLabel(i2* /* label */);
	void f253_push_and_free(void);
	void f230_AllocLabel(i2* /* label */);
	void f253_push_and_free(void);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3336 length ws+52
void f252_GenerateConditional(i8 p5226 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3336) = p5226; /*rootnode */

	i8 v5227 = (i8)(intptr_t)(ws+224);
	i8 v5228 = *(i8*)(intptr_t)v5227;
	i8 v5229 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5229 = v5228;

	i8 v5230 = (i8)(intptr_t)(ws+3336);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i8 v5232 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5232)(v5231);

c02_042e:;

	i8 v5233 = (i8)(intptr_t)(ws+224);
	i8 v5234 = *(i8*)(intptr_t)v5233;
	i8 v5235 = (i8)(intptr_t)(ws+3344);
	i8 v5236 = *(i8*)(intptr_t)v5235;
	if (v5234==v5236) goto c02_0431; else goto c02_0430;

c02_0430:;

	i8 v5237 = (i8)(intptr_t)(f56_PopNode);
	i8 v5238;

	((void(*)(i8* /* node */))(intptr_t)v5237)(&v5238);
	i8 v5239 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5239 = v5238;

	i8 v5240 = (i8)(intptr_t)(ws+3352);
	i8 v5241 = *(i8*)(intptr_t)v5240;
	i2 v5242 = *(i2*)(intptr_t)v5241;
	i8 v5243 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5243 = v5242;

	i8 v5244 = (i8)(intptr_t)(ws+3352);
	i8 v5245 = *(i8*)(intptr_t)v5244;
	i8 v5246 = v5245+(+2);
	i2 v5247 = *(i2*)(intptr_t)v5246;
	i8 v5248 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5248 = v5247;

	i8 v5249 = (i8)(intptr_t)(ws+3352);
	i8 v5250 = *(i8*)(intptr_t)v5249;
	i8 v5251 = v5250+(+4);
	i2 v5252 = *(i2*)(intptr_t)v5251;
	i8 v5253 = (i8)(intptr_t)(ws+3364);
	*(i2*)(intptr_t)v5253 = v5252;

	i8 v5254 = (i8)(intptr_t)(ws+3352);
	i8 v5255 = *(i8*)(intptr_t)v5254;
	i8 v5256 = v5255+(+24);
	i8 v5257 = *(i8*)(intptr_t)v5256;
	i8 v5258 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5258 = v5257;

	i8 v5259 = (i8)(intptr_t)(ws+3352);
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i8 v5261 = v5260+(+32);
	i8 v5262 = *(i8*)(intptr_t)v5261;
	i8 v5263 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5263 = v5262;

	i8 v5264 = (i8)(intptr_t)(ws+3352);
	i8 v5265 = *(i8*)(intptr_t)v5264;
	i8 v5266 = v5265+(+40);
	i1 v5267 = *(i1*)(intptr_t)v5266;
	i8 v5268 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v5268 = v5267;


	i8 v5300 = (i8)(intptr_t)(ws+3384);
	i1 v5301 = *(i1*)(intptr_t)v5300;

	if (v5301 != +60) goto c02_0433;

	i8 v5302 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v5303;

	((void(*)(i2* /* label */))(intptr_t)v5302)(&v5303);
	i8 v5304 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v5304 = v5303;

	i8 v5305 = (i8)(intptr_t)(ws+3360);
	i2 v5306 = *(i2*)(intptr_t)v5305;
	i8 v5307 = (i8)(intptr_t)(ws+3368);
	i8 v5308 = *(i8*)(intptr_t)v5307;
	*(i2*)(intptr_t)v5308 = v5306;

	i8 v5309 = (i8)(intptr_t)(ws+3386);
	i2 v5310 = *(i2*)(intptr_t)v5309;
	i8 v5311 = (i8)(intptr_t)(ws+3368);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	i8 v5313 = v5312+(+2);
	*(i2*)(intptr_t)v5313 = v5310;

	i8 v5314 = (i8)(intptr_t)(ws+3386);
	i2 v5315 = *(i2*)(intptr_t)v5314;
	i8 v5316 = (i8)(intptr_t)(ws+3368);
	i8 v5317 = *(i8*)(intptr_t)v5316;
	i8 v5318 = v5317+(+4);
	*(i2*)(intptr_t)v5318 = v5315;

	i8 v5319 = (i8)(intptr_t)(f253_push_and_free);

	((void(*)(void))(intptr_t)v5319)();

	goto c02_0432;

c02_0433:;

	if (v5301 != +59) goto c02_0434;

	i8 v5320 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v5321;

	((void(*)(i2* /* label */))(intptr_t)v5320)(&v5321);
	i8 v5322 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v5322 = v5321;

	i8 v5323 = (i8)(intptr_t)(ws+3386);
	i2 v5324 = *(i2*)(intptr_t)v5323;
	i8 v5325 = (i8)(intptr_t)(ws+3368);
	i8 v5326 = *(i8*)(intptr_t)v5325;
	*(i2*)(intptr_t)v5326 = v5324;

	i8 v5327 = (i8)(intptr_t)(ws+3362);
	i2 v5328 = *(i2*)(intptr_t)v5327;
	i8 v5329 = (i8)(intptr_t)(ws+3368);
	i8 v5330 = *(i8*)(intptr_t)v5329;
	i8 v5331 = v5330+(+2);
	*(i2*)(intptr_t)v5331 = v5328;

	i8 v5332 = (i8)(intptr_t)(ws+3386);
	i2 v5333 = *(i2*)(intptr_t)v5332;
	i8 v5334 = (i8)(intptr_t)(ws+3368);
	i8 v5335 = *(i8*)(intptr_t)v5334;
	i8 v5336 = v5335+(+4);
	*(i2*)(intptr_t)v5336 = v5333;

	i8 v5337 = (i8)(intptr_t)(f253_push_and_free);

	((void(*)(void))(intptr_t)v5337)();

	goto c02_0432;

c02_0434:;

	i8 v5338 = (i8)(intptr_t)(ws+3384);
	i1 v5339 = *(i1*)(intptr_t)v5338;
	i1 v5340 = (i1)+61;
	if (v5339<v5340) goto c02_043b; else goto c02_043c;

c02_043c:;

	i1 v5341 = (i1)+75;
	i8 v5342 = (i8)(intptr_t)(ws+3384);
	i1 v5343 = *(i1*)(intptr_t)v5342;
	if (v5341<v5343) goto c02_043b; else goto c02_043a;

c02_043a:;

	i8 v5344 = (i8)(intptr_t)(ws+3352);
	i8 v5345 = *(i8*)(intptr_t)v5344;
	i8 v5346 = v5345+(+6);
	i1 v5347 = *(i1*)(intptr_t)v5346;
	i1 v5348 = (i1)+0;
	if (v5347==v5348) goto c02_0441; else goto c02_0440;

c02_0440:;

	i8 v5349 = (i8)(intptr_t)(ws+3362);
	i2 v5350 = *(i2*)(intptr_t)v5349;
	i8 v5351 = (i8)(intptr_t)(ws+3352);
	i8 v5352 = *(i8*)(intptr_t)v5351;
	*(i2*)(intptr_t)v5352 = v5350;

	i8 v5353 = (i8)(intptr_t)(ws+3360);
	i2 v5354 = *(i2*)(intptr_t)v5353;
	i8 v5355 = (i8)(intptr_t)(ws+3352);
	i8 v5356 = *(i8*)(intptr_t)v5355;
	i8 v5357 = v5356+(+2);
	*(i2*)(intptr_t)v5357 = v5354;

	i1 v5358 = (i1)+0;
	i8 v5359 = (i8)(intptr_t)(ws+3352);
	i8 v5360 = *(i8*)(intptr_t)v5359;
	i8 v5361 = v5360+(+6);
	*(i1*)(intptr_t)v5361 = v5358;

c02_0441:;

c02_043d:;

c02_043b:;

c02_0435:;

	i8 v5362 = (i8)(intptr_t)(ws+3352);
	i8 v5363 = *(i8*)(intptr_t)v5362;
	i8 v5364 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5364)(v5363);

	i8 v5365 = (i8)(intptr_t)(ws+3364);
	i2 v5366 = *(i2*)(intptr_t)v5365;
	i8 v5367 = (i8)(intptr_t)(f147_MidLabel);
	i8 v5368;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v5367)(&v5368, v5366);
	i8 v5369 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5369)(v5368);

c02_0432:;


	goto c02_042e;

c02_0431:;

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3336 length ws+24
void f254_InitVariable(i8 p5370 /* type */, i8 p5371 /* symbol */, i8 p5372 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p5372; /*subr */
	*(i8*)(intptr_t)(ws+3344) = p5371; /*symbol */
	*(i8*)(intptr_t)(ws+3352) = p5370; /*type */

	i8 v5373 = (i8)(intptr_t)(ws+3352);
	i8 v5374 = *(i8*)(intptr_t)v5373;
	i8 v5375 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5375)(v5374);

	i1 v5376 = (i1)+28;
	i8 v5377 = (i8)(intptr_t)(ws+3344);
	i8 v5378 = *(i8*)(intptr_t)v5377;
	i8 v5379 = v5378+(+32);
	*(i1*)(intptr_t)v5379 = v5376;

	i8 v5380 = (i8)+27;
	i8 v5381 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v5382;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5381)(&v5382, v5380);
	i8 v5383 = (i8)(intptr_t)(ws+3344);
	i8 v5384 = *(i8*)(intptr_t)v5383;
	*(i8*)(intptr_t)v5384 = v5382;

	i8 v5385 = (i8)(intptr_t)(ws+3352);
	i8 v5386 = *(i8*)(intptr_t)v5385;
	i8 v5387 = (i8)(intptr_t)(ws+3344);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i8 v5389 = *(i8*)(intptr_t)v5388;
	*(i8*)(intptr_t)v5389 = v5386;

	i8 v5390 = (i8)(intptr_t)(ws+3336);
	i8 v5391 = *(i8*)(intptr_t)v5390;
	i8 v5392 = (i8)(intptr_t)(ws+3344);
	i8 v5393 = *(i8*)(intptr_t)v5392;
	i8 v5394 = *(i8*)(intptr_t)v5393;
	i8 v5395 = v5394+(+8);
	*(i8*)(intptr_t)v5395 = v5391;

	i8 v5396 = (i8)(intptr_t)(ws+3344);
	i8 v5397 = *(i8*)(intptr_t)v5396;
	i8 v5398 = (i8)(intptr_t)(f236_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v5398)(v5397);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f65_StrDupBraced(i8* /* news */, i8 /* s */);
	void f219_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakePointerType workspace at ws+3376 length ws+16
void f255_MakePointerType(i8* p5399 /* ptrtype */, i8 p5400 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p5400; /*type */

	i8 v5401 = (i8)(intptr_t)(ws+3376);
	i8 v5402 = *(i8*)(intptr_t)v5401;
	i8 v5403 = v5402+(+40);
	i8 v5404 = *(i8*)(intptr_t)v5403;
	i8 v5405 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5405 = v5404;

	i8 v5406 = (i8)(intptr_t)(ws+3384);
	i8 v5407 = *(i8*)(intptr_t)v5406;
	i8 v5408 = (i8)+0;
	if (v5407==v5408) goto c02_0445; else goto c02_0446;

c02_0445:;

	i8 v5409 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v5410;

	((void(*)(i8* /* type */))(intptr_t)v5409)(&v5410);
	i8 v5411 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5411 = v5410;

	i1 v5412 = (i1)+3;
	i8 v5413 = (i8)(intptr_t)(ws+3384);
	i8 v5414 = *(i8*)(intptr_t)v5413;
	i8 v5415 = v5414+(+52);
	*(i1*)(intptr_t)v5415 = v5412;

	i8 v5416 = (i8)(intptr_t)(ws+1528);
	i8 v5417 = *(i8*)(intptr_t)v5416;
	i8 v5418 = v5417+(+48);
	i2 v5419 = *(i2*)(intptr_t)v5418;
	i8 v5420 = (i8)(intptr_t)(ws+3384);
	i8 v5421 = *(i8*)(intptr_t)v5420;
	i8 v5422 = v5421+(+48);
	*(i2*)(intptr_t)v5422 = v5419;

	i8 v5423 = (i8)(intptr_t)(ws+1528);
	i8 v5424 = *(i8*)(intptr_t)v5423;
	i8 v5425 = v5424+(+53);
	i1 v5426 = *(i1*)(intptr_t)v5425;
	i8 v5427 = (i8)(intptr_t)(ws+3384);
	i8 v5428 = *(i8*)(intptr_t)v5427;
	i8 v5429 = v5428+(+53);
	*(i1*)(intptr_t)v5429 = v5426;

	i8 v5430 = (i8)(intptr_t)(ws+1528);
	i8 v5431 = *(i8*)(intptr_t)v5430;
	i8 v5432 = v5431+(+50);
	i2 v5433 = *(i2*)(intptr_t)v5432;
	i8 v5434 = (i8)(intptr_t)(ws+3384);
	i8 v5435 = *(i8*)(intptr_t)v5434;
	i8 v5436 = v5435+(+50);
	*(i2*)(intptr_t)v5436 = v5433;

	i8 v5437 = (i8)(intptr_t)(ws+3376);
	i8 v5438 = *(i8*)(intptr_t)v5437;
	i8 v5439 = (i8)(intptr_t)(ws+3384);
	i8 v5440 = *(i8*)(intptr_t)v5439;
	*(i8*)(intptr_t)v5440 = v5438;

	i8 v5441 = (i8)(intptr_t)(ws+3384);
	i8 v5442 = *(i8*)(intptr_t)v5441;
	i8 v5443 = (i8)(intptr_t)(ws+3376);
	i8 v5444 = *(i8*)(intptr_t)v5443;
	i8 v5445 = v5444+(+40);
	*(i8*)(intptr_t)v5445 = v5442;

	i8 v5446 = (i8)(intptr_t)(ws+3376);
	i8 v5447 = *(i8*)(intptr_t)v5446;
	i8 v5448 = v5447+(+32);
	i8 v5449 = *(i8*)(intptr_t)v5448;
	i8 v5450 = v5449+(+16);
	i8 v5451 = *(i8*)(intptr_t)v5450;
	i8 v5452 = (i8)(intptr_t)(ws+3384);
	i8 v5453 = *(i8*)(intptr_t)v5452;
	i8 v5454 = (i8)(intptr_t)(ws+3376);
	i8 v5455 = *(i8*)(intptr_t)v5454;
	i8 v5456 = v5455+(+32);
	i8 v5457 = *(i8*)(intptr_t)v5456;
	i8 v5458 = v5457+(+8);
	i8 v5459 = *(i8*)(intptr_t)v5458;
	i8 v5460 = (i8)(intptr_t)(f65_StrDupBraced);
	i8 v5461;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5460)(&v5461, v5459);
	i8 v5462 = (i8)(intptr_t)(f219_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5462)(v5461, v5453, v5451);

c02_0446:;

c02_0442:;

endsub:;
	*p5399 = *(i8*)(intptr_t)(ws+3384);
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f61_AllocNewType(i8* /* type */);
	void f235_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f66_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f219_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeArrayType workspace at ws+3328 length ws+26
void f256_MakeArrayType(i8* p5463 /* arraytype */, i2 p5464 /* size */, i8 p5465 /* type */) {
	*(i8*)(intptr_t)(ws+3328) = p5465; /*type */
	*(i2*)(intptr_t)(ws+3336) = p5464; /*size */

	i8 v5466 = (i8)(intptr_t)(ws+3328);
	i8 v5467 = *(i8*)(intptr_t)v5466;
	i8 v5468 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5468)(v5467);

	i8 v5469 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v5470;

	((void(*)(i8* /* type */))(intptr_t)v5469)(&v5470);
	i8 v5471 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5471 = v5470;

	i1 v5472 = (i1)+4;
	i8 v5473 = (i8)(intptr_t)(ws+3344);
	i8 v5474 = *(i8*)(intptr_t)v5473;
	i8 v5475 = v5474+(+52);
	*(i1*)(intptr_t)v5475 = v5472;

	i2 v5476 = (i2)+0;
	i8 v5477 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5477 = v5476;

	i2 v5478 = (i2)+0;
	i8 v5479 = (i8)(intptr_t)(ws+3336);
	i2 v5480 = *(i2*)(intptr_t)v5479;
	if (v5478<v5480) goto c02_044a; else goto c02_044b;

c02_044a:;

	i8 v5481 = (i8)(intptr_t)(ws+3328);
	i8 v5482 = *(i8*)(intptr_t)v5481;
	i8 v5483 = v5482+(+50);
	i2 v5484 = *(i2*)(intptr_t)v5483;
	i8 v5485 = (i8)(intptr_t)(ws+3336);
	i2 v5486 = *(i2*)(intptr_t)v5485;
	i2 v5487 = v5486+(-1);
	i2 v5488 = v5484*v5487;
	i8 v5489 = (i8)(intptr_t)(ws+3328);
	i8 v5490 = *(i8*)(intptr_t)v5489;
	i8 v5491 = v5490+(+48);
	i2 v5492 = *(i2*)(intptr_t)v5491;
	i2 v5493 = v5488+v5492;
	i8 v5494 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5494 = v5493;

c02_044b:;

c02_0447:;

	i8 v5495 = (i8)(intptr_t)(ws+3352);
	i2 v5496 = *(i2*)(intptr_t)v5495;
	i8 v5497 = (i8)(intptr_t)(ws+3344);
	i8 v5498 = *(i8*)(intptr_t)v5497;
	i8 v5499 = v5498+(+48);
	*(i2*)(intptr_t)v5499 = v5496;

	i8 v5500 = (i8)(intptr_t)(ws+3328);
	i8 v5501 = *(i8*)(intptr_t)v5500;
	i8 v5502 = v5501+(+53);
	i1 v5503 = *(i1*)(intptr_t)v5502;
	i8 v5504 = (i8)(intptr_t)(ws+3344);
	i8 v5505 = *(i8*)(intptr_t)v5504;
	i8 v5506 = v5505+(+53);
	*(i1*)(intptr_t)v5506 = v5503;

	i8 v5507 = (i8)(intptr_t)(ws+3328);
	i8 v5508 = *(i8*)(intptr_t)v5507;
	i8 v5509 = v5508+(+50);
	i2 v5510 = *(i2*)(intptr_t)v5509;
	i8 v5511 = (i8)(intptr_t)(ws+3336);
	i2 v5512 = *(i2*)(intptr_t)v5511;
	i2 v5513 = v5510*v5512;
	i8 v5514 = (i8)(intptr_t)(ws+3344);
	i8 v5515 = *(i8*)(intptr_t)v5514;
	i8 v5516 = v5515+(+50);
	*(i2*)(intptr_t)v5516 = v5513;

	i8 v5517 = (i8)(intptr_t)(ws+3328);
	i8 v5518 = *(i8*)(intptr_t)v5517;
	i8 v5519 = (i8)(intptr_t)(ws+3344);
	i8 v5520 = *(i8*)(intptr_t)v5519;
	*(i8*)(intptr_t)v5520 = v5518;

	i8 v5521 = (i8)(intptr_t)(ws+3336);
	i2 v5522 = *(i2*)(intptr_t)v5521;
	i8 v5523 = (i8)(intptr_t)(ws+3344);
	i8 v5524 = *(i8*)(intptr_t)v5523;
	i8 v5525 = v5524+(+8);
	*(i2*)(intptr_t)v5525 = v5522;

	i4 v5526 = (i4)+0;
	i8 v5527 = (i8)(intptr_t)(ws+3336);
	i2 v5528 = *(i2*)(intptr_t)v5527;
	i2 v5529 = v5528+(-1);
	i4 v5530 = v5529;
	i8 v5531 = (i8)(intptr_t)(f235_ArchGuessIntType);
	i8 v5532;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v5531)(&v5532, v5530, v5526);
	i8 v5533 = (i8)(intptr_t)(ws+3344);
	i8 v5534 = *(i8*)(intptr_t)v5533;
	i8 v5535 = v5534+(+16);
	*(i8*)(intptr_t)v5535 = v5532;

	i8 v5536 = (i8)(intptr_t)(ws+3328);
	i8 v5537 = *(i8*)(intptr_t)v5536;
	i8 v5538 = v5537+(+32);
	i8 v5539 = *(i8*)(intptr_t)v5538;
	i8 v5540 = v5539+(+16);
	i8 v5541 = *(i8*)(intptr_t)v5540;
	i8 v5542 = (i8)(intptr_t)(ws+3344);
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = (i8)(intptr_t)(ws+3328);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = v5545+(+32);
	i8 v5547 = *(i8*)(intptr_t)v5546;
	i8 v5548 = v5547+(+8);
	i8 v5549 = *(i8*)(intptr_t)v5548;
	i8 v5550 = (i8)(intptr_t)(ws+3336);
	i2 v5551 = *(i2*)(intptr_t)v5550;
	i8 v5552 = (i8)(intptr_t)(f66_StrDupArrayed);
	i8 v5553;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v5552)(&v5553, v5551, v5549);
	i8 v5554 = (i8)(intptr_t)(f219_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5554)(v5553, v5543, v5541);

endsub:;
	*p5463 = *(i8*)(intptr_t)(ws+3344);
}

// QueueNamespace workspace at ws+3384 length ws+16
void f258_QueueNamespace(i8 p5558 /* namespace */) {
	*(i8*)(intptr_t)(ws+3384) = p5558; /*namespace */

c02_044e:;

	i8 v5559 = (i8)(intptr_t)(ws+3384);
	i8 v5560 = *(i8*)(intptr_t)v5559;
	i8 v5561 = *(i8*)(intptr_t)v5560;
	i8 v5562 = (i8)+0;
	if (v5561==v5562) goto c02_0451; else goto c02_0450;

c02_0450:;

	i8 v5563 = (i8)(intptr_t)(ws+3384);
	i8 v5564 = *(i8*)(intptr_t)v5563;
	i8 v5565 = *(i8*)(intptr_t)v5564;
	i8 v5566 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v5566 = v5565;

	i8 v5567 = (i8)(intptr_t)(ws+3392);
	i8 v5568 = *(i8*)(intptr_t)v5567;
	i8 v5569 = v5568+(+24);
	i8 v5570 = *(i8*)(intptr_t)v5569;
	i8 v5571 = (i8)(intptr_t)(ws+3384);
	i8 v5572 = *(i8*)(intptr_t)v5571;
	*(i8*)(intptr_t)v5572 = v5570;

	i8 v5573 = (i8)(intptr_t)(ws+3352);
	i8 v5574 = *(i8*)(intptr_t)v5573;
	i8 v5575 = (i8)(intptr_t)(ws+3392);
	i8 v5576 = *(i8*)(intptr_t)v5575;
	i8 v5577 = v5576+(+24);
	*(i8*)(intptr_t)v5577 = v5574;

	i8 v5578 = (i8)(intptr_t)(ws+3392);
	i8 v5579 = *(i8*)(intptr_t)v5578;
	i8 v5580 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5580 = v5579;

	goto c02_044e;

c02_0451:;

endsub:;
}
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f258_QueueNamespace(i8 /* namespace */);
	void f258_QueueNamespace(i8 /* namespace */);
	void f33_Free(i8 /* block */);
	void f62_FreeType(i8 /* type */);
	void f33_Free(i8 /* block */);
	void f33_Free(i8 /* block */);
	void f60_FreeSymbol(i8 /* symbol */);

// DestructSubroutineContents workspace at ws+3344 length ws+40
void f257_DestructSubroutineContents(i8 p5555 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5555; /*subr */

	i8 v5556 = (i8)+0;
	i8 v5557 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5557 = v5556;


	i8 v5581 = (i8)(intptr_t)(ws+3344);
	i8 v5582 = *(i8*)(intptr_t)v5581;
	i8 v5583 = v5582+(+81);
	i1 v5584 = *(i1*)(intptr_t)v5583;
	i1 v5585 = (i1)+0;
	if (v5584==v5585) goto c02_0456; else goto c02_0455;

c02_0455:;

	i8 v5586 = (i8)(intptr_t)(ws+3344);
	i8 v5587 = *(i8*)(intptr_t)v5586;
	i8 v5588 = (i8)(intptr_t)(ws+3344);
	i8 v5589 = *(i8*)(intptr_t)v5588;
	i8 v5590 = v5589+(+81);
	i1 v5591 = *(i1*)(intptr_t)v5590;
	i1 v5592 = v5591+(-1);
	i8 v5593 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v5594;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5593)(&v5594, v5592, v5587);
	i8 v5595 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5595 = v5594;

	goto c02_0452;

c02_0456:;

	i8 v5596 = (i8)(intptr_t)(ws+3344);
	i8 v5597 = *(i8*)(intptr_t)v5596;
	i8 v5598 = v5597+(+80);
	i1 v5599 = *(i1*)(intptr_t)v5598;
	i1 v5600 = (i1)+0;
	if (v5599==v5600) goto c02_045a; else goto c02_0459;

c02_0459:;

	i8 v5601 = (i8)(intptr_t)(ws+3344);
	i8 v5602 = *(i8*)(intptr_t)v5601;
	i8 v5603 = (i8)(intptr_t)(ws+3344);
	i8 v5604 = *(i8*)(intptr_t)v5603;
	i8 v5605 = v5604+(+80);
	i1 v5606 = *(i1*)(intptr_t)v5605;
	i1 v5607 = v5606+(-1);
	i8 v5608 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v5609;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5608)(&v5609, v5607, v5602);
	i8 v5610 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5610 = v5609;

	goto c02_0452;

c02_045a:;

	i8 v5611 = (i8)+0;
	i8 v5612 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5612 = v5611;

c02_0452:;

	i8 v5613 = (i8)(intptr_t)(ws+3344);
	i8 v5614 = *(i8*)(intptr_t)v5613;
	i8 v5615 = v5614+(+16);
	i8 v5616 = *(i8*)(intptr_t)v5615;
	i8 v5617 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5617 = v5616;

	i8 v5618 = (i8)(intptr_t)(ws+3360);
	i8 v5619 = *(i8*)(intptr_t)v5618;
	i8 v5620 = (i8)+0;
	if (v5619==v5620) goto c02_045f; else goto c02_045e;

c02_045e:;

	i8 v5621 = (i8)(intptr_t)(ws+3360);
	i8 v5622 = *(i8*)(intptr_t)v5621;
	i8 v5623 = v5622+(+24);
	i8 v5624 = *(i8*)(intptr_t)v5623;
	i8 v5625 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5625 = v5624;

c02_045f:;

c02_045b:;

c02_0462:;

	i8 v5626 = (i8)(intptr_t)(ws+3352);
	i8 v5627 = *(i8*)(intptr_t)v5626;
	i8 v5628 = (i8)+0;
	if (v5627==v5628) goto c02_0465; else goto c02_0464;

c02_0464:;

	i8 v5629 = (i8)(intptr_t)(ws+3352);
	i8 v5630 = *(i8*)(intptr_t)v5629;
	i8 v5631 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5631 = v5630;

	i8 v5632 = (i8)(intptr_t)(ws+3352);
	i8 v5633 = *(i8*)(intptr_t)v5632;
	i8 v5634 = v5633+(+24);
	i8 v5635 = *(i8*)(intptr_t)v5634;
	i8 v5636 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5636 = v5635;

	i8 v5637 = (i8)(intptr_t)(ws+3368);
	i8 v5638 = *(i8*)(intptr_t)v5637;
	i8 v5639 = v5638+(+32);
	i1 v5640 = *(i1*)(intptr_t)v5639;

	if (v5640 != +30) goto c02_0467;

	i8 v5641 = (i8)(intptr_t)(ws+3368);
	i8 v5642 = *(i8*)(intptr_t)v5641;
	i8 v5643 = *(i8*)(intptr_t)v5642;
	i8 v5644 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5644 = v5643;

	i8 v5645 = (i8)(intptr_t)(ws+3376);
	i8 v5646 = *(i8*)(intptr_t)v5645;
	i8 v5647 = v5646+(+52);
	i1 v5648 = *(i1*)(intptr_t)v5647;

	if (v5648 != +5) goto c02_0469;

	i8 v5649 = (i8)(intptr_t)(ws+3376);
	i8 v5650 = *(i8*)(intptr_t)v5649;
	i8 v5651 = (i8)(intptr_t)(f258_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5651)(v5650);

	goto c02_0468;

c02_0469:;

	if (v5648 != +6) goto c02_046a;

	i8 v5652 = (i8)(intptr_t)(ws+3376);
	i8 v5653 = *(i8*)(intptr_t)v5652;
	i8 v5654 = *(i8*)(intptr_t)v5653;
	i8 v5655 = v5654+(+16);
	i8 v5656 = (i8)(intptr_t)(f258_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5656)(v5655);

	i8 v5657 = (i8)(intptr_t)(ws+3376);
	i8 v5658 = *(i8*)(intptr_t)v5657;
	i8 v5659 = *(i8*)(intptr_t)v5658;
	i8 v5660 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v5660)(v5659);

c02_046a:;

c02_0468:;


	i8 v5661 = (i8)(intptr_t)(ws+3376);
	i8 v5662 = *(i8*)(intptr_t)v5661;
	i8 v5663 = (i8)(intptr_t)(f62_FreeType);

	((void(*)(i8 /* type */))(intptr_t)v5663)(v5662);

	goto c02_0466;

c02_0467:;

	if (v5640 != +28) goto c02_046b;

	i8 v5664 = (i8)(intptr_t)(ws+3368);
	i8 v5665 = *(i8*)(intptr_t)v5664;
	i8 v5666 = *(i8*)(intptr_t)v5665;
	i8 v5667 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v5667)(v5666);

c02_046b:;

c02_0466:;


	i8 v5668 = (i8)(intptr_t)(ws+3368);
	i8 v5669 = *(i8*)(intptr_t)v5668;
	i8 v5670 = v5669+(+8);
	i8 v5671 = *(i8*)(intptr_t)v5670;
	i8 v5672 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v5672)(v5671);

	i8 v5673 = (i8)(intptr_t)(ws+3368);
	i8 v5674 = *(i8*)(intptr_t)v5673;
	i8 v5675 = (i8)(intptr_t)(f60_FreeSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v5675)(v5674);

	goto c02_0462;

c02_0465:;

	i8 v5676 = (i8)(intptr_t)(ws+3360);
	i8 v5677 = *(i8*)(intptr_t)v5676;
	i8 v5678 = (i8)+0;
	if (v5677==v5678) goto c02_0470; else goto c02_046f;

c02_046f:;

	i8 v5679 = (i8)+0;
	i8 v5680 = (i8)(intptr_t)(ws+3360);
	i8 v5681 = *(i8*)(intptr_t)v5680;
	i8 v5682 = v5681+(+24);
	*(i8*)(intptr_t)v5682 = v5679;

	goto c02_046c;

c02_0470:;

	i8 v5683 = (i8)+0;
	i8 v5684 = (i8)(intptr_t)(ws+3344);
	i8 v5685 = *(i8*)(intptr_t)v5684;
	i8 v5686 = v5685+(+16);
	*(i8*)(intptr_t)v5686 = v5683;

c02_046c:;

	i8 v5687 = (i8)(intptr_t)(ws+3360);
	i8 v5688 = *(i8*)(intptr_t)v5687;
	i8 v5689 = (i8)(intptr_t)(ws+3344);
	i8 v5690 = *(i8*)(intptr_t)v5689;
	i8 v5691 = v5690+(+24);
	*(i8*)(intptr_t)v5691 = v5688;

endsub:;
}
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// CopyParameterList workspace at ws+3336 length ws+32
void f259_CopyParameterList(i8 p5692 /* subr */, i8 p5693 /* param */) {
	*(i8*)(intptr_t)(ws+3336) = p5693; /*param */
	*(i8*)(intptr_t)(ws+3344) = p5692; /*subr */

	i8 v5694 = (i8)+0;
	i8 v5695 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5695 = v5694;

c02_0473:;

	i8 v5696 = (i8)(intptr_t)(ws+3336);
	i8 v5697 = *(i8*)(intptr_t)v5696;
	i8 v5698 = (i8)+0;
	if (v5697==v5698) goto c02_0476; else goto c02_0475;

c02_0475:;

	i8 v5699 = (i8)(intptr_t)(ws+3344);
	i8 v5700 = *(i8*)(intptr_t)v5699;
	i8 v5701 = v5700+(+16);
	i8 v5702 = (i8)(intptr_t)(ws+3336);
	i8 v5703 = *(i8*)(intptr_t)v5702;
	i8 v5704 = v5703+(+8);
	i8 v5705 = *(i8*)(intptr_t)v5704;
	i8 v5706 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v5707;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5706)(&v5707, v5705);
	i8 v5708 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v5709;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5708)(&v5709, v5707, v5701);
	i8 v5710 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5710 = v5709;

	i1 v5711 = (i1)+28;
	i8 v5712 = (i8)(intptr_t)(ws+3360);
	i8 v5713 = *(i8*)(intptr_t)v5712;
	i8 v5714 = v5713+(+32);
	*(i1*)(intptr_t)v5714 = v5711;

	i8 v5715 = (i8)+27;
	i8 v5716 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v5717;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5716)(&v5717, v5715);
	i8 v5718 = (i8)(intptr_t)(ws+3360);
	i8 v5719 = *(i8*)(intptr_t)v5718;
	*(i8*)(intptr_t)v5719 = v5717;

	i8 v5720 = (i8)(intptr_t)(ws+3336);
	i8 v5721 = *(i8*)(intptr_t)v5720;
	i8 v5722 = *(i8*)(intptr_t)v5721;
	i8 v5723 = *(i8*)(intptr_t)v5722;
	i8 v5724 = (i8)(intptr_t)(ws+3360);
	i8 v5725 = *(i8*)(intptr_t)v5724;
	i8 v5726 = *(i8*)(intptr_t)v5725;
	*(i8*)(intptr_t)v5726 = v5723;

	i8 v5727 = (i8)(intptr_t)(ws+3336);
	i8 v5728 = *(i8*)(intptr_t)v5727;
	i8 v5729 = *(i8*)(intptr_t)v5728;
	i8 v5730 = v5729+(+8);
	i8 v5731 = *(i8*)(intptr_t)v5730;
	i8 v5732 = (i8)(intptr_t)(ws+3360);
	i8 v5733 = *(i8*)(intptr_t)v5732;
	i8 v5734 = *(i8*)(intptr_t)v5733;
	i8 v5735 = v5734+(+8);
	*(i8*)(intptr_t)v5735 = v5731;

	i8 v5736 = (i8)(intptr_t)(ws+3336);
	i8 v5737 = *(i8*)(intptr_t)v5736;
	i8 v5738 = *(i8*)(intptr_t)v5737;
	i8 v5739 = v5738+(+26);
	i1 v5740 = *(i1*)(intptr_t)v5739;
	i8 v5741 = (i8)(intptr_t)(ws+3360);
	i8 v5742 = *(i8*)(intptr_t)v5741;
	i8 v5743 = *(i8*)(intptr_t)v5742;
	i8 v5744 = v5743+(+26);
	*(i1*)(intptr_t)v5744 = v5740;

	i8 v5745 = (i8)(intptr_t)(ws+3336);
	i8 v5746 = *(i8*)(intptr_t)v5745;
	i8 v5747 = *(i8*)(intptr_t)v5746;
	i8 v5748 = v5747+(+24);
	i2 v5749 = *(i2*)(intptr_t)v5748;
	i8 v5750 = (i8)(intptr_t)(ws+3360);
	i8 v5751 = *(i8*)(intptr_t)v5750;
	i8 v5752 = *(i8*)(intptr_t)v5751;
	i8 v5753 = v5752+(+24);
	*(i2*)(intptr_t)v5753 = v5749;

	i8 v5754 = (i8)(intptr_t)(ws+3352);
	i8 v5755 = *(i8*)(intptr_t)v5754;
	i8 v5756 = (i8)+0;
	if (v5755==v5756) goto c02_047b; else goto c02_047a;

c02_047a:;

	i8 v5757 = (i8)(intptr_t)(ws+3360);
	i8 v5758 = *(i8*)(intptr_t)v5757;
	i8 v5759 = (i8)(intptr_t)(ws+3352);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = *(i8*)(intptr_t)v5760;
	i8 v5762 = v5761+(+16);
	*(i8*)(intptr_t)v5762 = v5758;

c02_047b:;

c02_0477:;

	i8 v5763 = (i8)(intptr_t)(ws+3360);
	i8 v5764 = *(i8*)(intptr_t)v5763;
	i8 v5765 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5765 = v5764;

	i8 v5766 = (i8)(intptr_t)(ws+3336);
	i8 v5767 = *(i8*)(intptr_t)v5766;
	i8 v5768 = *(i8*)(intptr_t)v5767;
	i8 v5769 = v5768+(+16);
	i8 v5770 = *(i8*)(intptr_t)v5769;
	i8 v5771 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v5771 = v5770;

	goto c02_0473;

c02_0476:;

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f59_AllocNewSymbol(i8* /* symbol */);
const i1 c02_s0109[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f214_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// CreateMainSubroutine workspace at ws+3208 length ws+16
void f260_CreateMainSubroutine(void) {

	i8 v5772 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v5773;

	((void(*)(i8* /* type */))(intptr_t)v5772)(&v5773);
	i8 v5774 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v5774 = v5773;

	i1 v5775 = (i1)+6;
	i8 v5776 = (i8)(intptr_t)(ws+3208);
	i8 v5777 = *(i8*)(intptr_t)v5776;
	i8 v5778 = v5777+(+52);
	*(i1*)(intptr_t)v5778 = v5775;

	i8 v5779 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v5780;

	((void(*)(i8* /* symbol */))(intptr_t)v5779)(&v5780);
	i8 v5781 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v5781 = v5780;

	i1 v5782 = (i1)+30;
	i8 v5783 = (i8)(intptr_t)(ws+3216);
	i8 v5784 = *(i8*)(intptr_t)v5783;
	i8 v5785 = v5784+(+32);
	*(i1*)(intptr_t)v5785 = v5782;

	i8 v5786 = (i8)(intptr_t)c02_s0109;
	i8 v5787 = (i8)(intptr_t)(ws+3216);
	i8 v5788 = *(i8*)(intptr_t)v5787;
	i8 v5789 = v5788+(+8);
	*(i8*)(intptr_t)v5789 = v5786;

	i8 v5790 = (i8)(intptr_t)(ws+3208);
	i8 v5791 = *(i8*)(intptr_t)v5790;
	i8 v5792 = (i8)(intptr_t)(ws+3216);
	i8 v5793 = *(i8*)(intptr_t)v5792;
	*(i8*)(intptr_t)v5793 = v5791;

	i8 v5794 = (i8)(intptr_t)(ws+3216);
	i8 v5795 = *(i8*)(intptr_t)v5794;
	i8 v5796 = (i8)(intptr_t)(ws+3208);
	i8 v5797 = *(i8*)(intptr_t)v5796;
	i8 v5798 = v5797+(+32);
	*(i8*)(intptr_t)v5798 = v5795;

	i8 v5799 = (i8)+83;
	i8 v5800 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v5801;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5800)(&v5801, v5799);
	i8 v5802 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v5802 = v5801;

	i8 v5803 = (i8)(intptr_t)(ws+3216);
	i8 v5804 = *(i8*)(intptr_t)v5803;
	i8 v5805 = (i8)(intptr_t)(ws+40);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	*(i8*)(intptr_t)v5806 = v5804;

	i8 v5807 = (i8)(intptr_t)(ws+3208);
	i8 v5808 = *(i8*)(intptr_t)v5807;
	i8 v5809 = (i8)(intptr_t)(ws+40);
	i8 v5810 = *(i8*)(intptr_t)v5809;
	i8 v5811 = v5810+(+40);
	*(i8*)(intptr_t)v5811 = v5808;

	i8 v5812 = (i8)(intptr_t)(ws+40);
	i8 v5813 = *(i8*)(intptr_t)v5812;
	i8 v5814 = (i8)(intptr_t)(ws+40);
	i8 v5815 = *(i8*)(intptr_t)v5814;
	i8 v5816 = v5815+(+48);
	*(i8*)(intptr_t)v5816 = v5813;

	i8 v5817 = (i8)(intptr_t)(ws+40);
	i8 v5818 = *(i8*)(intptr_t)v5817;
	i8 v5819 = (i8)(intptr_t)(ws+3208);
	i8 v5820 = *(i8*)(intptr_t)v5819;
	*(i8*)(intptr_t)v5820 = v5818;

	i8 v5821 = (i8)(intptr_t)(ws+40);
	i8 v5822 = *(i8*)(intptr_t)v5821;
	i8 v5823 = v5822+(+16);
	i8 v5824 = (i8)(intptr_t)(ws+3216);
	i8 v5825 = *(i8*)(intptr_t)v5824;
	i8 v5826 = (i8)(intptr_t)(f214_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v5826)(v5825, v5823);

endsub:;
}
	void f198_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);

// ReportWorkspaces workspace at ws+3344 length ws+12
void f261_ReportWorkspaces(i8 p5827 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5827; /*subr */

	i1 v5828 = (i1)+0;
	i8 v5829 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v5829 = v5828;

c02_047e:;

	i8 v5830 = (i8)(intptr_t)(ws+3352);
	i1 v5831 = *(i1*)(intptr_t)v5830;
	i1 v5832 = (i1)+4;
	if (v5831==v5832) goto c02_0481; else goto c02_0480;

c02_0480:;

	i8 v5833 = (i8)(intptr_t)(ws+3344);
	i8 v5834 = *(i8*)(intptr_t)v5833;
	i8 v5835 = v5834+(+58);
	i8 v5836 = (i8)(intptr_t)(ws+3352);
	i1 v5837 = *(i1*)(intptr_t)v5836;
	i8 v5838 = v5837;
	i1 v5839 = (i1)+1;
	i8 v5840 = ((i8)v5838)<<v5839;
	i8 v5841 = v5835+v5840;
	i2 v5842 = *(i2*)(intptr_t)v5841;
	i8 v5843 = (i8)(intptr_t)(ws+3354);
	*(i2*)(intptr_t)v5843 = v5842;

	i8 v5844 = (i8)(intptr_t)(ws+3354);
	i2 v5845 = *(i2*)(intptr_t)v5844;
	i2 v5846 = (i2)+0;
	if (v5845==v5846) goto c02_0486; else goto c02_0485;

c02_0485:;

	i8 v5847 = (i8)(intptr_t)(ws+3344);
	i8 v5848 = *(i8*)(intptr_t)v5847;
	i8 v5849 = (i8)(intptr_t)(ws+3352);
	i1 v5850 = *(i1*)(intptr_t)v5849;
	i8 v5851 = (i8)(intptr_t)(ws+3354);
	i2 v5852 = *(i2*)(intptr_t)v5851;
	i8 v5853 = (i8)(intptr_t)(f198_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v5853)(v5852, v5850, v5848);

c02_0486:;

c02_0482:;

	i8 v5854 = (i8)(intptr_t)(ws+3352);
	i1 v5855 = *(i1*)(intptr_t)v5854;
	i1 v5856 = v5855+(+1);
	i8 v5857 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v5857 = v5856;

	goto c02_047e;

c02_0481:;

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s010a[] = { 0x20,0x61,0x6e,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s010b[] = { 0x20,0x61,0x72,0x65,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6d,0x70,0x61,0x74,0x69,0x62,0x6c,0x65,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// expr_i_cant_do_that workspace at ws+3424 length ws+16
void f262_expr_i_cant_do_that(i8 p5858 /* rhs */, i8 p5859 /* lhs */) {
	*(i8*)(intptr_t)(ws+3424) = p5859; /*lhs */
	*(i8*)(intptr_t)(ws+3432) = p5858; /*rhs */

	i8 v5860 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v5860)();

	i8 v5861 = (i8)(intptr_t)(ws+3424);
	i8 v5862 = *(i8*)(intptr_t)v5861;
	i8 v5863 = v5862+(+16);
	i8 v5864 = *(i8*)(intptr_t)v5863;
	i8 v5865 = v5864+(+32);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+8);
	i8 v5868 = *(i8*)(intptr_t)v5867;
	i8 v5869 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5869)(v5868);

	i8 v5870 = (i8)(intptr_t)c02_s010a;
	i8 v5871 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5871)(v5870);

	i8 v5872 = (i8)(intptr_t)(ws+3432);
	i8 v5873 = *(i8*)(intptr_t)v5872;
	i8 v5874 = v5873+(+16);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = v5875+(+32);
	i8 v5877 = *(i8*)(intptr_t)v5876;
	i8 v5878 = v5877+(+8);
	i8 v5879 = *(i8*)(intptr_t)v5878;
	i8 v5880 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5880)(v5879);

	i8 v5881 = (i8)(intptr_t)c02_s010b;
	i8 v5882 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5882)(v5881);

	i8 v5883 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v5883)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s010c[] = { 0x74,0x79,0x70,0x65,0x20,0x6d,0x69,0x73,0x6d,0x61,0x74,0x63,0x68,0x3a,0x20,0x65,0x78,0x70,0x72,0x65,0x73,0x73,0x69,0x6f,0x6e,0x20,0x77,0x61,0x73,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s010d[] = { 0x2c,0x20,0x75,0x73,0x65,0x64,0x20,0x77,0x68,0x65,0x6e,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s010e[] = { 0x20,0x77,0x61,0x73,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f226_IsScalar(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s010f[] = { 0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x75,0x73,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// CheckExpressionType workspace at ws+3392 length ws+16
void f263_CheckExpressionType(i8 p5884 /* type */, i8 p5885 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p5885; /*node */
	*(i8*)(intptr_t)(ws+3400) = p5884; /*type */

	i8 v5886 = (i8)(intptr_t)(ws+3392);
	i8 v5887 = *(i8*)(intptr_t)v5886;
	i8 v5888 = v5887+(+16);
	i8 v5889 = *(i8*)(intptr_t)v5888;
	i8 v5890 = (i8)+0;
	if (v5889==v5890) goto c02_048a; else goto c02_048b;

c02_048a:;

	i8 v5891 = (i8)(intptr_t)(ws+3400);
	i8 v5892 = *(i8*)(intptr_t)v5891;
	i8 v5893 = (i8)(intptr_t)(ws+3392);
	i8 v5894 = *(i8*)(intptr_t)v5893;
	i8 v5895 = v5894+(+16);
	*(i8*)(intptr_t)v5895 = v5892;

c02_048b:;

c02_0487:;

	i8 v5896 = (i8)(intptr_t)(ws+3392);
	i8 v5897 = *(i8*)(intptr_t)v5896;
	i8 v5898 = v5897+(+16);
	i8 v5899 = *(i8*)(intptr_t)v5898;
	i8 v5900 = (i8)(intptr_t)(ws+3400);
	i8 v5901 = *(i8*)(intptr_t)v5900;
	if (v5899==v5901) goto c02_0490; else goto c02_048f;

c02_048f:;

	i8 v5902 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v5902)();

	i8 v5903 = (i8)(intptr_t)c02_s010c;
	i8 v5904 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5904)(v5903);

	i8 v5905 = (i8)(intptr_t)(ws+3392);
	i8 v5906 = *(i8*)(intptr_t)v5905;
	i8 v5907 = v5906+(+16);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = v5908+(+32);
	i8 v5910 = *(i8*)(intptr_t)v5909;
	i8 v5911 = v5910+(+8);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5913)(v5912);

	i8 v5914 = (i8)(intptr_t)c02_s010d;
	i8 v5915 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5915)(v5914);

	i8 v5916 = (i8)(intptr_t)(ws+3400);
	i8 v5917 = *(i8*)(intptr_t)v5916;
	i8 v5918 = v5917+(+32);
	i8 v5919 = *(i8*)(intptr_t)v5918;
	i8 v5920 = v5919+(+8);
	i8 v5921 = *(i8*)(intptr_t)v5920;
	i8 v5922 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5922)(v5921);

	i8 v5923 = (i8)(intptr_t)c02_s010e;
	i8 v5924 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5924)(v5923);

	i8 v5925 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v5925)();

c02_0490:;

c02_048c:;

	i8 v5926 = (i8)(intptr_t)(ws+3400);
	i8 v5927 = *(i8*)(intptr_t)v5926;
	i8 v5928 = (i8)(intptr_t)(f226_IsScalar);
	i1 v5929;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5928)(&v5929, v5927);
	i1 v5930 = (i1)+0;
	if (v5929==v5930) goto c02_0494; else goto c02_0495;

c02_0494:;

	i8 v5931 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v5931)();

	i8 v5932 = (i8)(intptr_t)(ws+3400);
	i8 v5933 = *(i8*)(intptr_t)v5932;
	i8 v5934 = v5933+(+32);
	i8 v5935 = *(i8*)(intptr_t)v5934;
	i8 v5936 = v5935+(+8);
	i8 v5937 = *(i8*)(intptr_t)v5936;
	i8 v5938 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5938)(v5937);

	i8 v5939 = (i8)(intptr_t)c02_s010f;
	i8 v5940 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5940)(v5939);

	i8 v5941 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v5941)();

c02_0495:;

c02_0491:;

endsub:;
}
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0110[] = { 0x6c,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0111[] = { 0x72,0x68,0x73,0x2e,0x74,0x79,0x70,0x65,0x3d,0 };
	void f11_print(i8 /* ptr */);
	void f20_print_hex_i32(i4 /* value */);
	void f12_print_nl(void);
const i1 c02_s0112[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x75,0x73,0x65,0x20,0x61,0x6e,0x20,0x75,0x6e,0x74,0x79,0x70,0x65,0x64,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x6e,0x20,0x74,0x68,0x69,0x73,0x20,0x63,0x6f,0x6e,0x74,0x65,0x78,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0113[] = { 0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0x20,0x6d,0x61,0x79,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x70,0x70,0x65,0x61,0x72,0x20,0x6f,0x6e,0x20,0x74,0x68,0x65,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x61,0x6e,0x20,0x61,0x64,0x64,0x69,0x74,0x69,0x6f,0x6e,0x20,0x6f,0x72,0x20,0x73,0x75,0x62,0x74,0x72,0x61,0x63,0x74,0x69,0x6f,0x6e,0 };
	void f71_SimpleError(i8 /* message */);

// ResolveUntypedConstantsForAddOrSub workspace at ws+3368 length ws+16
void f264_ResolveUntypedConstantsForAddOrSub(i8 p5942 /* rhs */, i8 p5943 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p5943; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p5942; /*rhs */

	i8 v5944 = (i8)(intptr_t)(ws+3368);
	i8 v5945 = *(i8*)(intptr_t)v5944;
	i8 v5946 = v5945+(+16);
	i8 v5947 = *(i8*)(intptr_t)v5946;
	i8 v5948 = (i8)+0;
	if (v5947==v5948) goto c02_049c; else goto c02_049d;

c02_049d:;

	i8 v5949 = (i8)(intptr_t)(ws+3376);
	i8 v5950 = *(i8*)(intptr_t)v5949;
	i8 v5951 = v5950+(+16);
	i8 v5952 = *(i8*)(intptr_t)v5951;
	i8 v5953 = (i8)+0;
	if (v5952==v5953) goto c02_049b; else goto c02_049c;

c02_049b:;

	i8 v5954 = (i8)(intptr_t)(ws+3368);
	i8 v5955 = *(i8*)(intptr_t)v5954;
	i8 v5956 = v5955+(+16);
	i8 v5957 = *(i8*)(intptr_t)v5956;
	i8 v5958 = (i8)(intptr_t)(f224_IsNum);
	i1 v5959;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5958)(&v5959, v5957);
	i1 v5960 = (i1)+0;
	if (v5959==v5960) goto c02_04a2; else goto c02_04a1;

c02_04a1:;

	i8 v5961 = (i8)(intptr_t)(ws+3368);
	i8 v5962 = *(i8*)(intptr_t)v5961;
	i8 v5963 = v5962+(+16);
	i8 v5964 = *(i8*)(intptr_t)v5963;
	i8 v5965 = (i8)(intptr_t)(ws+3376);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	i8 v5967 = v5966+(+16);
	*(i8*)(intptr_t)v5967 = v5964;

	goto c02_049e;

c02_04a2:;

	i8 v5968 = (i8)(intptr_t)(ws+3368);
	i8 v5969 = *(i8*)(intptr_t)v5968;
	i8 v5970 = v5969+(+16);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = (i8)(intptr_t)(f63_IsPtr);
	i1 v5973;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5972)(&v5973, v5971);
	i1 v5974 = (i1)+0;
	if (v5973==v5974) goto c02_04a6; else goto c02_04a5;

c02_04a5:;

	i8 v5975 = (i8)(intptr_t)(ws+1528);
	i8 v5976 = *(i8*)(intptr_t)v5975;
	i8 v5977 = (i8)(intptr_t)(ws+3376);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i8 v5979 = v5978+(+16);
	*(i8*)(intptr_t)v5979 = v5976;

	goto c02_049e;

c02_04a6:;

	i8 v5980 = (i8)(intptr_t)c02_s0110;
	i8 v5981 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5981)(v5980);

	i8 v5982 = (i8)(intptr_t)(ws+3368);
	i8 v5983 = *(i8*)(intptr_t)v5982;
	i8 v5984 = v5983+(+16);
	i8 v5985 = *(i8*)(intptr_t)v5984;
	i4 v5986 = v5985;
	i8 v5987 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5987)(v5986);

	i8 v5988 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5988)();

	i8 v5989 = (i8)(intptr_t)c02_s0111;
	i8 v5990 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5990)(v5989);

	i8 v5991 = (i8)(intptr_t)(ws+3376);
	i8 v5992 = *(i8*)(intptr_t)v5991;
	i8 v5993 = v5992+(+16);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i4 v5995 = v5994;
	i8 v5996 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5996)(v5995);

	i8 v5997 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5997)();

	i8 v5998 = (i8)(intptr_t)c02_s0112;
	i8 v5999 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v5999)(v5998);

c02_049e:;

c02_049c:;

c02_0496:;

	i8 v6000 = (i8)(intptr_t)(ws+3368);
	i8 v6001 = *(i8*)(intptr_t)v6000;
	i8 v6002 = v6001+(+16);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i8 v6004 = (i8)+0;
	if (v6003==v6004) goto c02_04ae; else goto c02_04ad;

c02_04ae:;

	i8 v6005 = (i8)(intptr_t)(ws+3376);
	i8 v6006 = *(i8*)(intptr_t)v6005;
	i8 v6007 = v6006+(+16);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i8 v6009 = (i8)+0;
	if (v6008==v6009) goto c02_04ad; else goto c02_04ac;

c02_04ac:;

	i8 v6010 = (i8)(intptr_t)(ws+3376);
	i8 v6011 = *(i8*)(intptr_t)v6010;
	i8 v6012 = v6011+(+16);
	i8 v6013 = *(i8*)(intptr_t)v6012;
	i8 v6014 = (i8)(intptr_t)(f224_IsNum);
	i1 v6015;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6014)(&v6015, v6013);
	i1 v6016 = (i1)+0;
	if (v6015==v6016) goto c02_04b3; else goto c02_04b2;

c02_04b2:;

	i8 v6017 = (i8)(intptr_t)(ws+3376);
	i8 v6018 = *(i8*)(intptr_t)v6017;
	i8 v6019 = v6018+(+16);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i8 v6021 = (i8)(intptr_t)(ws+3368);
	i8 v6022 = *(i8*)(intptr_t)v6021;
	i8 v6023 = v6022+(+16);
	*(i8*)(intptr_t)v6023 = v6020;

	goto c02_04af;

c02_04b3:;

	i8 v6024 = (i8)(intptr_t)(ws+3376);
	i8 v6025 = *(i8*)(intptr_t)v6024;
	i8 v6026 = v6025+(+16);
	i8 v6027 = *(i8*)(intptr_t)v6026;
	i8 v6028 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6029;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6028)(&v6029, v6027);
	i1 v6030 = (i1)+0;
	if (v6029==v6030) goto c02_04b7; else goto c02_04b6;

c02_04b6:;

	i8 v6031 = (i8)(intptr_t)c02_s0113;
	i8 v6032 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6032)(v6031);

c02_04b7:;

c02_04af:;

c02_04ad:;

c02_04a7:;

endsub:;
}
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3392 length ws+32
void f265_ResolveUntypedConstantsSimply(i8 p6033 /* rhs */, i8 p6034 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p6034; /*lhs */
	*(i8*)(intptr_t)(ws+3400) = p6033; /*rhs */

	i8 v6035 = (i8)(intptr_t)(ws+3392);
	i8 v6036 = *(i8*)(intptr_t)v6035;
	i8 v6037 = v6036+(+16);
	i8 v6038 = *(i8*)(intptr_t)v6037;
	i8 v6039 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6039 = v6038;

	i8 v6040 = (i8)(intptr_t)(ws+3400);
	i8 v6041 = *(i8*)(intptr_t)v6040;
	i8 v6042 = v6041+(+16);
	i8 v6043 = *(i8*)(intptr_t)v6042;
	i8 v6044 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6044 = v6043;

	i8 v6045 = (i8)(intptr_t)(ws+3408);
	i8 v6046 = *(i8*)(intptr_t)v6045;
	i8 v6047 = (i8)+0;
	if (v6046==v6047) goto c02_04be; else goto c02_04bf;

c02_04bf:;

	i8 v6048 = (i8)(intptr_t)(ws+3416);
	i8 v6049 = *(i8*)(intptr_t)v6048;
	i8 v6050 = (i8)+0;
	if (v6049==v6050) goto c02_04bd; else goto c02_04be;

c02_04bd:;

	i8 v6051 = (i8)(intptr_t)(ws+3408);
	i8 v6052 = *(i8*)(intptr_t)v6051;
	i8 v6053 = (i8)(intptr_t)(ws+3400);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	i8 v6055 = v6054+(+16);
	*(i8*)(intptr_t)v6055 = v6052;

	goto c02_04b8;

c02_04be:;

	i8 v6056 = (i8)(intptr_t)(ws+3408);
	i8 v6057 = *(i8*)(intptr_t)v6056;
	i8 v6058 = (i8)+0;
	if (v6057==v6058) goto c02_04c6; else goto c02_04c5;

c02_04c6:;

	i8 v6059 = (i8)(intptr_t)(ws+3416);
	i8 v6060 = *(i8*)(intptr_t)v6059;
	i8 v6061 = (i8)+0;
	if (v6060==v6061) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v6062 = (i8)(intptr_t)(ws+3416);
	i8 v6063 = *(i8*)(intptr_t)v6062;
	i8 v6064 = (i8)(intptr_t)(ws+3392);
	i8 v6065 = *(i8*)(intptr_t)v6064;
	i8 v6066 = v6065+(+16);
	*(i8*)(intptr_t)v6066 = v6063;

	goto c02_04b8;

c02_04c5:;

	i8 v6067 = (i8)(intptr_t)(ws+3408);
	i8 v6068 = *(i8*)(intptr_t)v6067;
	i8 v6069 = (i8)(intptr_t)(ws+3416);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	if (v6068==v6070) goto c02_04ca; else goto c02_04c9;

c02_04c9:;

	i8 v6071 = (i8)(intptr_t)(ws+3392);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	i8 v6073 = (i8)(intptr_t)(ws+3400);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i8 v6075 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6075)(v6074, v6072);

c02_04ca:;

c02_04b8:;

endsub:;
}
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0114[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3392 length ws+8
void f266_CheckNumber(i8 p6076 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p6076; /*node */

	i8 v6077 = (i8)(intptr_t)(ws+3392);
	i8 v6078 = *(i8*)(intptr_t)v6077;
	i8 v6079 = v6078+(+16);
	i8 v6080 = *(i8*)(intptr_t)v6079;
	i8 v6081 = (i8)(intptr_t)(f224_IsNum);
	i1 v6082;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6081)(&v6082, v6080);
	i1 v6083 = (i1)+0;
	if (v6082==v6083) goto c02_04ce; else goto c02_04cf;

c02_04ce:;

	i8 v6084 = (i8)(intptr_t)c02_s0114;
	i8 v6085 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6085)(v6084);

c02_04cf:;

c02_04cb:;

endsub:;
}
	void f265_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f266_CheckNumber(i8 /* node */);
	void f266_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3376 length ws+16
void f267_ResolveUntypedConstantsNeedingNumbers(i8 p6086 /* rhs */, i8 p6087 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6087; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6086; /*rhs */

	i8 v6088 = (i8)(intptr_t)(ws+3376);
	i8 v6089 = *(i8*)(intptr_t)v6088;
	i8 v6090 = (i8)(intptr_t)(ws+3384);
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i8 v6092 = (i8)(intptr_t)(f265_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6092)(v6091, v6089);

	i8 v6093 = (i8)(intptr_t)(ws+3376);
	i8 v6094 = *(i8*)(intptr_t)v6093;
	i8 v6095 = (i8)(intptr_t)(f266_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6095)(v6094);

	i8 v6096 = (i8)(intptr_t)(ws+3384);
	i8 v6097 = *(i8*)(intptr_t)v6096;
	i8 v6098 = (i8)(intptr_t)(f266_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6098)(v6097);

endsub:;
}
	void f265_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3368 length ws+16
void f268_CondSimple(i8 p6099 /* rhs */, i8 p6100 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p6100; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p6099; /*rhs */

	i8 v6101 = (i8)(intptr_t)(ws+3368);
	i8 v6102 = *(i8*)(intptr_t)v6101;
	i8 v6103 = (i8)(intptr_t)(ws+3376);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = (i8)(intptr_t)(f265_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6105)(v6104, v6102);

	i8 v6106 = (i8)(intptr_t)(ws+3368);
	i8 v6107 = *(i8*)(intptr_t)v6106;
	i8 v6108 = v6107+(+16);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	i8 v6110 = (i8)(intptr_t)(ws+3376);
	i8 v6111 = *(i8*)(intptr_t)v6110;
	i8 v6112 = v6111+(+16);
	i8 v6113 = *(i8*)(intptr_t)v6112;
	if (v6109==v6113) goto c02_04d4; else goto c02_04d3;

c02_04d3:;

	i8 v6114 = (i8)(intptr_t)(ws+3368);
	i8 v6115 = *(i8*)(intptr_t)v6114;
	i8 v6116 = (i8)(intptr_t)(ws+3376);
	i8 v6117 = *(i8*)(intptr_t)v6116;
	i8 v6118 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6118)(v6117, v6115);

c02_04d4:;

c02_04d0:;

endsub:;
}
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f166_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3328 length ws+24
void f269_Expr1Simple(i8* p6119 /* result */, i8 p6120 /* lhs */, i1 p6121 /* op */) {
	*(i1*)(intptr_t)(ws+3328) = p6121; /*op */
	*(i8*)(intptr_t)(ws+3336) = p6120; /*lhs */

	i8 v6122 = (i8)(intptr_t)(ws+3328);
	i1 v6123 = *(i1*)(intptr_t)v6122;
	i8 v6124 = (i8)(intptr_t)(ws+3336);
	i8 v6125 = *(i8*)(intptr_t)v6124;
	i8 v6126 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6127;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6126)(&v6127, v6125);
	i8 v6128 = (i8)(intptr_t)(ws+3336);
	i8 v6129 = *(i8*)(intptr_t)v6128;
	i8 v6130 = (i8)(intptr_t)(f166_MidC1Op);
	i8 v6131;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6130)(&v6131, v6129, v6127, v6123);
	i8 v6132 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6132 = v6131;

	i8 v6133 = (i8)(intptr_t)(ws+3336);
	i8 v6134 = *(i8*)(intptr_t)v6133;
	i8 v6135 = v6134+(+16);
	i8 v6136 = *(i8*)(intptr_t)v6135;
	i8 v6137 = (i8)(intptr_t)(ws+3344);
	i8 v6138 = *(i8*)(intptr_t)v6137;
	i8 v6139 = v6138+(+16);
	*(i8*)(intptr_t)v6139 = v6136;

endsub:;
	*p6119 = *(i8*)(intptr_t)(ws+3344);
}
	void f264_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3368 length ws+0
void f271_cant_add_that(void) {

	i8 v6148 = (i8)(intptr_t)(ws+3328);
	i8 v6149 = *(i8*)(intptr_t)v6148;
	i8 v6150 = (i8)(intptr_t)(ws+3336);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6152)(v6151, v6149);

endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f271_cant_add_that(void);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f271_cant_add_that(void);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f271_cant_add_that(void);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprAdd workspace at ws+3328 length ws+40
void f270_ExprAdd(i8* p6140 /* result */, i8 p6141 /* rhs */, i8 p6142 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6142; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6141; /*rhs */

	i8 v6143 = (i8)(intptr_t)(ws+3328);
	i8 v6144 = *(i8*)(intptr_t)v6143;
	i8 v6145 = (i8)(intptr_t)(ws+3336);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = (i8)(intptr_t)(f264_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6147)(v6146, v6144);


	i8 v6153 = (i8)(intptr_t)(ws+3328);
	i8 v6154 = *(i8*)(intptr_t)v6153;
	i8 v6155 = v6154+(+16);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	i8 v6157 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6157 = v6156;

	i8 v6158 = (i8)(intptr_t)(ws+3336);
	i8 v6159 = *(i8*)(intptr_t)v6158;
	i8 v6160 = v6159+(+16);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6162 = v6161;

	i8 v6163 = (i8)(intptr_t)(ws+3352);
	i8 v6164 = *(i8*)(intptr_t)v6163;
	i8 v6165 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6166;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6165)(&v6166, v6164);
	i1 v6167 = (i1)+0;
	if (v6166==v6167) goto c02_04d9; else goto c02_04d8;

c02_04d8:;

	i8 v6168 = (i8)(intptr_t)(ws+3360);
	i8 v6169 = *(i8*)(intptr_t)v6168;
	i8 v6170 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6171;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6170)(&v6171, v6169);
	i1 v6172 = (i1)+0;
	if (v6171==v6172) goto c02_04e1; else goto c02_04df;

c02_04e1:;

	i8 v6173 = (i8)(intptr_t)(ws+3360);
	i8 v6174 = *(i8*)(intptr_t)v6173;
	i8 v6175 = (i8)(intptr_t)(ws+1528);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	if (v6174==v6176) goto c02_04e0; else goto c02_04df;

c02_04df:;

	i8 v6177 = (i8)(intptr_t)(f271_cant_add_that);

	((void(*)(void))(intptr_t)v6177)();

c02_04e0:;

c02_04da:;

	goto c02_04d5;

c02_04d9:;

	i8 v6178 = (i8)(intptr_t)(ws+3360);
	i8 v6179 = *(i8*)(intptr_t)v6178;
	i8 v6180 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6181;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6180)(&v6181, v6179);
	i1 v6182 = (i1)+0;
	if (v6181==v6182) goto c02_04e5; else goto c02_04e4;

c02_04e4:;

	i8 v6183 = (i8)(intptr_t)(f271_cant_add_that);

	((void(*)(void))(intptr_t)v6183)();

	goto c02_04d5;

c02_04e5:;

	i8 v6184 = (i8)(intptr_t)(ws+3352);
	i8 v6185 = *(i8*)(intptr_t)v6184;
	i8 v6186 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6187;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6186)(&v6187, v6185);
	i1 v6188 = (i1)+0;
	if (v6187==v6188) goto c02_04ec; else goto c02_04eb;

c02_04ec:;

	i8 v6189 = (i8)(intptr_t)(ws+3352);
	i8 v6190 = *(i8*)(intptr_t)v6189;
	i8 v6191 = (i8)(intptr_t)(ws+3360);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	if (v6190==v6192) goto c02_04eb; else goto c02_04ea;

c02_04ea:;

	i8 v6193 = (i8)(intptr_t)(f271_cant_add_that);

	((void(*)(void))(intptr_t)v6193)();

c02_04eb:;

c02_04d5:;

	i1 v6194 = (i1)+161;
	i8 v6195 = (i8)(intptr_t)(ws+3328);
	i8 v6196 = *(i8*)(intptr_t)v6195;
	i8 v6197 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6198;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6197)(&v6198, v6196);
	i8 v6199 = (i8)(intptr_t)(ws+3328);
	i8 v6200 = *(i8*)(intptr_t)v6199;
	i8 v6201 = (i8)(intptr_t)(ws+3336);
	i8 v6202 = *(i8*)(intptr_t)v6201;
	i8 v6203 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6204;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6203)(&v6204, v6202, v6200, v6198, v6194);
	i8 v6205 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6205 = v6204;

	i8 v6206 = (i8)(intptr_t)(ws+3352);
	i8 v6207 = *(i8*)(intptr_t)v6206;
	i8 v6208 = (i8)(intptr_t)(ws+3344);
	i8 v6209 = *(i8*)(intptr_t)v6208;
	i8 v6210 = v6209+(+16);
	*(i8*)(intptr_t)v6210 = v6207;

endsub:;
	*p6140 = *(i8*)(intptr_t)(ws+3344);
}
	void f264_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3368 length ws+0
void f273_cant_sub_that(void) {

	i8 v6219 = (i8)(intptr_t)(ws+3328);
	i8 v6220 = *(i8*)(intptr_t)v6219;
	i8 v6221 = (i8)(intptr_t)(ws+3336);
	i8 v6222 = *(i8*)(intptr_t)v6221;
	i8 v6223 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6223)(v6222, v6220);

endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f273_cant_sub_that(void);
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f273_cant_sub_that(void);
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f273_cant_sub_that(void);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);

// ExprSub workspace at ws+3328 length ws+40
void f272_ExprSub(i8* p6211 /* result */, i8 p6212 /* rhs */, i8 p6213 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6213; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6212; /*rhs */

	i8 v6214 = (i8)(intptr_t)(ws+3328);
	i8 v6215 = *(i8*)(intptr_t)v6214;
	i8 v6216 = (i8)(intptr_t)(ws+3336);
	i8 v6217 = *(i8*)(intptr_t)v6216;
	i8 v6218 = (i8)(intptr_t)(f264_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6218)(v6217, v6215);


	i8 v6224 = (i8)(intptr_t)(ws+3328);
	i8 v6225 = *(i8*)(intptr_t)v6224;
	i8 v6226 = v6225+(+16);
	i8 v6227 = *(i8*)(intptr_t)v6226;
	i8 v6228 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6228 = v6227;

	i8 v6229 = (i8)(intptr_t)(ws+3336);
	i8 v6230 = *(i8*)(intptr_t)v6229;
	i8 v6231 = v6230+(+16);
	i8 v6232 = *(i8*)(intptr_t)v6231;
	i8 v6233 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6233 = v6232;

	i8 v6234 = (i8)(intptr_t)(ws+3352);
	i8 v6235 = *(i8*)(intptr_t)v6234;
	i8 v6236 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6237;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6236)(&v6237, v6235);
	i1 v6238 = (i1)+0;
	if (v6237==v6238) goto c02_04f5; else goto c02_04f7;

c02_04f7:;

	i8 v6239 = (i8)(intptr_t)(ws+3360);
	i8 v6240 = *(i8*)(intptr_t)v6239;
	i8 v6241 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6242;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6241)(&v6242, v6240);
	i1 v6243 = (i1)+0;
	if (v6242==v6243) goto c02_04f6; else goto c02_04f5;

c02_04f6:;

	i8 v6244 = (i8)(intptr_t)(ws+3360);
	i8 v6245 = *(i8*)(intptr_t)v6244;
	i8 v6246 = (i8)(intptr_t)(ws+1528);
	i8 v6247 = *(i8*)(intptr_t)v6246;
	if (v6245==v6247) goto c02_04f5; else goto c02_04f4;

c02_04f4:;

	i8 v6248 = (i8)(intptr_t)(f273_cant_sub_that);

	((void(*)(void))(intptr_t)v6248)();

	goto c02_04ed;

c02_04f5:;

	i8 v6249 = (i8)(intptr_t)(ws+3352);
	i8 v6250 = *(i8*)(intptr_t)v6249;
	i8 v6251 = (i8)(intptr_t)(f224_IsNum);
	i1 v6252;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6251)(&v6252, v6250);
	i1 v6253 = (i1)+0;
	if (v6252==v6253) goto c02_04fd; else goto c02_04fe;

c02_04fe:;

	i8 v6254 = (i8)(intptr_t)(ws+3360);
	i8 v6255 = *(i8*)(intptr_t)v6254;
	i8 v6256 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6257;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6256)(&v6257, v6255);
	i1 v6258 = (i1)+0;
	if (v6257==v6258) goto c02_04fd; else goto c02_04fc;

c02_04fc:;

	i8 v6259 = (i8)(intptr_t)(f273_cant_sub_that);

	((void(*)(void))(intptr_t)v6259)();

	goto c02_04ed;

c02_04fd:;

	i8 v6260 = (i8)(intptr_t)(ws+3352);
	i8 v6261 = *(i8*)(intptr_t)v6260;
	i8 v6262 = (i8)(intptr_t)(f224_IsNum);
	i1 v6263;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6262)(&v6263, v6261);
	i1 v6264 = (i1)+0;
	if (v6263==v6264) goto c02_0506; else goto c02_0508;

c02_0508:;

	i8 v6265 = (i8)(intptr_t)(ws+3360);
	i8 v6266 = *(i8*)(intptr_t)v6265;
	i8 v6267 = (i8)(intptr_t)(f224_IsNum);
	i1 v6268;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6267)(&v6268, v6266);
	i1 v6269 = (i1)+0;
	if (v6268==v6269) goto c02_0506; else goto c02_0507;

c02_0507:;

	i8 v6270 = (i8)(intptr_t)(ws+3352);
	i8 v6271 = *(i8*)(intptr_t)v6270;
	i8 v6272 = (i8)(intptr_t)(ws+3360);
	i8 v6273 = *(i8*)(intptr_t)v6272;
	if (v6271==v6273) goto c02_0506; else goto c02_0505;

c02_0505:;

	i8 v6274 = (i8)(intptr_t)(f273_cant_sub_that);

	((void(*)(void))(intptr_t)v6274)();

c02_0506:;

c02_04ed:;

	i1 v6275 = (i1)+136;
	i8 v6276 = (i8)(intptr_t)(ws+3328);
	i8 v6277 = *(i8*)(intptr_t)v6276;
	i8 v6278 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6279;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6278)(&v6279, v6277);
	i8 v6280 = (i8)(intptr_t)(ws+3328);
	i8 v6281 = *(i8*)(intptr_t)v6280;
	i8 v6282 = (i8)(intptr_t)(ws+3336);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6285;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6284)(&v6285, v6283, v6281, v6279, v6275);
	i8 v6286 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6286 = v6285;

	i8 v6287 = (i8)(intptr_t)(ws+3352);
	i8 v6288 = *(i8*)(intptr_t)v6287;
	i8 v6289 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6290;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6289)(&v6290, v6288);
	i1 v6291 = (i1)+0;
	if (v6290==v6291) goto c02_050f; else goto c02_0510;

c02_0510:;

	i8 v6292 = (i8)(intptr_t)(ws+3352);
	i8 v6293 = *(i8*)(intptr_t)v6292;
	i8 v6294 = (i8)(intptr_t)(ws+3360);
	i8 v6295 = *(i8*)(intptr_t)v6294;
	if (v6293==v6295) goto c02_050e; else goto c02_050f;

c02_050e:;

	i8 v6296 = (i8)(intptr_t)(ws+1528);
	i8 v6297 = *(i8*)(intptr_t)v6296;
	i8 v6298 = (i8)(intptr_t)(ws+3344);
	i8 v6299 = *(i8*)(intptr_t)v6298;
	i8 v6300 = v6299+(+16);
	*(i8*)(intptr_t)v6300 = v6297;

	goto c02_0509;

c02_050f:;

	i8 v6301 = (i8)(intptr_t)(ws+3352);
	i8 v6302 = *(i8*)(intptr_t)v6301;
	i8 v6303 = (i8)(intptr_t)(ws+3344);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = v6304+(+16);
	*(i8*)(intptr_t)v6305 = v6302;

c02_0509:;

endsub:;
	*p6211 = *(i8*)(intptr_t)(ws+3344);
}
	void f267_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f225_IsSNum(i1* /* result */, i8 /* type */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3328 length ws+48
void f274_Expr2Simple(i8* p6306 /* result */, i8 p6307 /* rhs */, i8 p6308 /* lhs */, i1 p6309 /* uop */, i1 p6310 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6310; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6309; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6308; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6307; /*rhs */

	i8 v6311 = (i8)(intptr_t)(ws+3336);
	i8 v6312 = *(i8*)(intptr_t)v6311;
	i8 v6313 = (i8)(intptr_t)(ws+3344);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = (i8)(intptr_t)(f267_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6315)(v6314, v6312);

	i8 v6316 = (i8)(intptr_t)(ws+3329);
	i1 v6317 = *(i1*)(intptr_t)v6316;
	i8 v6318 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6318 = v6317;

	i8 v6319 = (i8)(intptr_t)(ws+3336);
	i8 v6320 = *(i8*)(intptr_t)v6319;
	i8 v6321 = v6320+(+16);
	i8 v6322 = *(i8*)(intptr_t)v6321;
	i8 v6323 = (i8)(intptr_t)(f225_IsSNum);
	i1 v6324;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6323)(&v6324, v6322);
	i1 v6325 = (i1)+0;
	if (v6324==v6325) goto c02_0515; else goto c02_0514;

c02_0514:;

	i8 v6326 = (i8)(intptr_t)(ws+3328);
	i1 v6327 = *(i1*)(intptr_t)v6326;
	i8 v6328 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6328 = v6327;

c02_0515:;

c02_0511:;

	i8 v6329 = (i8)(intptr_t)(ws+3336);
	i8 v6330 = *(i8*)(intptr_t)v6329;
	i8 v6331 = v6330+(+16);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6333 = v6332;

	i8 v6334 = (i8)(intptr_t)(ws+3360);
	i1 v6335 = *(i1*)(intptr_t)v6334;
	i8 v6336 = (i8)(intptr_t)(ws+3336);
	i8 v6337 = *(i8*)(intptr_t)v6336;
	i8 v6338 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6339;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6338)(&v6339, v6337);
	i8 v6340 = (i8)(intptr_t)(ws+3336);
	i8 v6341 = *(i8*)(intptr_t)v6340;
	i8 v6342 = (i8)(intptr_t)(ws+3344);
	i8 v6343 = *(i8*)(intptr_t)v6342;
	i8 v6344 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6345;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6344)(&v6345, v6343, v6341, v6339, v6335);
	i8 v6346 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6346 = v6345;

	i8 v6347 = (i8)(intptr_t)(ws+3368);
	i8 v6348 = *(i8*)(intptr_t)v6347;
	i8 v6349 = (i8)(intptr_t)(ws+3352);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i8 v6351 = v6350+(+16);
	*(i8*)(intptr_t)v6351 = v6348;

endsub:;
	*p6306 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0115[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f71_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3376 length ws+8
void f275_expr_i_checkrhsconst(i8 p6352 /* rhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6352; /*rhs */

	i8 v6353 = (i8)(intptr_t)(ws+3376);
	i8 v6354 = *(i8*)(intptr_t)v6353;
	i8 v6355 = v6354+(+40);
	i1 v6356 = *(i1*)(intptr_t)v6355;
	i1 v6357 = (i1)+45;
	if (v6356==v6357) goto c02_051a; else goto c02_0519;

c02_0519:;

	i8 v6358 = (i8)(intptr_t)c02_s0115;
	i8 v6359 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6359)(v6358);

c02_051a:;

c02_0516:;

endsub:;
}
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0116[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3376 length ws+16
void f276_expr_i_checkshift(i8 p6360 /* rhs */, i8 p6361 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6361; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6360; /*rhs */

	i8 v6362 = (i8)(intptr_t)(ws+3376);
	i8 v6363 = *(i8*)(intptr_t)v6362;
	i8 v6364 = v6363+(+16);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i8 v6366 = (i8)(intptr_t)(f224_IsNum);
	i1 v6367;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6366)(&v6367, v6365);
	i1 v6368 = (i1)+0;
	if (v6367==v6368) goto c02_051e; else goto c02_051f;

c02_051e:;

	i8 v6369 = (i8)(intptr_t)c02_s0116;
	i8 v6370 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6370)(v6369);

c02_051f:;

c02_051b:;

	i8 v6371 = (i8)(intptr_t)(ws+3384);
	i8 v6372 = *(i8*)(intptr_t)v6371;
	i8 v6373 = (i8)(intptr_t)(ws+1512);
	i8 v6374 = *(i8*)(intptr_t)v6373;
	i8 v6375 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v6375)(v6374, v6372);

endsub:;
}
	void f225_IsSNum(i1* /* result */, i8 /* type */);
	void f275_expr_i_checkrhsconst(i8 /* rhs */);
	void f165_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f58_Discard(i8 /* node */);
	void f276_expr_i_checkshift(i8 /* rhs */, i8 /* lhs */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// ExprShift workspace at ws+3328 length ws+48
void f277_ExprShift(i8* p6376 /* result */, i8 p6377 /* rhs */, i8 p6378 /* lhs */, i1 p6379 /* uop */, i1 p6380 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6380; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6379; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6378; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6377; /*rhs */

	i8 v6381 = (i8)(intptr_t)(ws+3329);
	i1 v6382 = *(i1*)(intptr_t)v6381;
	i8 v6383 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6383 = v6382;

	i8 v6384 = (i8)(intptr_t)(ws+3336);
	i8 v6385 = *(i8*)(intptr_t)v6384;
	i8 v6386 = v6385+(+16);
	i8 v6387 = *(i8*)(intptr_t)v6386;
	i8 v6388 = (i8)(intptr_t)(f225_IsSNum);
	i1 v6389;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6388)(&v6389, v6387);
	i1 v6390 = (i1)+0;
	if (v6389==v6390) goto c02_0524; else goto c02_0523;

c02_0523:;

	i8 v6391 = (i8)(intptr_t)(ws+3328);
	i1 v6392 = *(i1*)(intptr_t)v6391;
	i8 v6393 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6393 = v6392;

c02_0524:;

c02_0520:;

	i8 v6394 = (i8)(intptr_t)(ws+3336);
	i8 v6395 = *(i8*)(intptr_t)v6394;
	i8 v6396 = v6395+(+40);
	i1 v6397 = *(i1*)(intptr_t)v6396;
	i1 v6398 = (i1)+45;
	if (v6397==v6398) goto c02_0528; else goto c02_0529;

c02_0528:;

	i8 v6399 = (i8)(intptr_t)(ws+3344);
	i8 v6400 = *(i8*)(intptr_t)v6399;
	i8 v6401 = (i8)(intptr_t)(f275_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v6401)(v6400);

	i8 v6402 = (i8)(intptr_t)(ws+3360);
	i1 v6403 = *(i1*)(intptr_t)v6402;
	i8 v6404 = (i8)(intptr_t)(ws+3336);
	i8 v6405 = *(i8*)(intptr_t)v6404;
	i8 v6406 = (i8)(intptr_t)(ws+3344);
	i8 v6407 = *(i8*)(intptr_t)v6406;
	i8 v6408 = (i8)(intptr_t)(f165_FoldConstant2);
	i4 v6409;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v6408)(&v6409, v6407, v6405, v6403);
	i8 v6410 = (i8)(intptr_t)(ws+3336);
	i8 v6411 = *(i8*)(intptr_t)v6410;
	*(i4*)(intptr_t)v6411 = v6409;

	i8 v6412 = (i8)(intptr_t)(ws+3336);
	i8 v6413 = *(i8*)(intptr_t)v6412;
	i8 v6414 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6414 = v6413;

	i8 v6415 = (i8)(intptr_t)(ws+3344);
	i8 v6416 = *(i8*)(intptr_t)v6415;
	i8 v6417 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6417)(v6416);

	goto endsub;

c02_0529:;

c02_0525:;

	i8 v6418 = (i8)(intptr_t)(ws+3336);
	i8 v6419 = *(i8*)(intptr_t)v6418;
	i8 v6420 = (i8)(intptr_t)(ws+3344);
	i8 v6421 = *(i8*)(intptr_t)v6420;
	i8 v6422 = (i8)(intptr_t)(f276_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6422)(v6421, v6419);

	i8 v6423 = (i8)(intptr_t)(ws+3336);
	i8 v6424 = *(i8*)(intptr_t)v6423;
	i8 v6425 = v6424+(+16);
	i8 v6426 = *(i8*)(intptr_t)v6425;
	i8 v6427 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6427 = v6426;

	i8 v6428 = (i8)(intptr_t)(ws+3360);
	i1 v6429 = *(i1*)(intptr_t)v6428;
	i8 v6430 = (i8)(intptr_t)(ws+3336);
	i8 v6431 = *(i8*)(intptr_t)v6430;
	i8 v6432 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6433;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6432)(&v6433, v6431);
	i8 v6434 = (i8)(intptr_t)(ws+3336);
	i8 v6435 = *(i8*)(intptr_t)v6434;
	i8 v6436 = (i8)(intptr_t)(ws+3344);
	i8 v6437 = *(i8*)(intptr_t)v6436;
	i8 v6438 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6439;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6438)(&v6439, v6437, v6435, v6433, v6429);
	i8 v6440 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6440 = v6439;

	i8 v6441 = (i8)(intptr_t)(ws+3368);
	i8 v6442 = *(i8*)(intptr_t)v6441;
	i8 v6443 = (i8)(intptr_t)(ws+3352);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = v6444+(+16);
	*(i8*)(intptr_t)v6445 = v6442;

endsub:;
	*p6376 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0117[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f71_SimpleError(i8 /* message */);

// PushNode workspace at ws+3472 length ws+8
void f55_PushNode(i8 p6446 /* node */) {
	*(i8*)(intptr_t)(ws+3472) = p6446; /*node */

	i8 v6447 = (i8)(intptr_t)(ws+3472);
	i8 v6448 = *(i8*)(intptr_t)v6447;
	i8 v6449 = (i8)+0;
	if (v6448==v6449) goto c02_052e; else goto c02_052d;

c02_052d:;

	i8 v6450 = (i8)(intptr_t)(ws+224);
	i8 v6451 = *(i8*)(intptr_t)v6450;
	i8 v6452 = (i8)(intptr_t)(ws+224);
	if (v6451==v6452) goto c02_0532; else goto c02_0533;

c02_0532:;

	i8 v6453 = (i8)(intptr_t)c02_s0117;
	i8 v6454 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6454)(v6453);

c02_0533:;

c02_052f:;

	i8 v6455 = (i8)(intptr_t)(ws+3472);
	i8 v6456 = *(i8*)(intptr_t)v6455;
	i8 v6457 = (i8)(intptr_t)(ws+224);
	i8 v6458 = *(i8*)(intptr_t)v6457;
	*(i8*)(intptr_t)v6458 = v6456;

	i8 v6459 = (i8)(intptr_t)(ws+224);
	i8 v6460 = *(i8*)(intptr_t)v6459;
	i8 v6461 = v6460+(+8);
	i8 v6462 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6462 = v6461;

c02_052e:;

c02_052a:;

endsub:;
}

// PopNode workspace at ws+3472 length ws+8
void f56_PopNode(i8* p6463 /* node */) {

	i8 v6464 = (i8)(intptr_t)(ws+224);
	i8 v6465 = *(i8*)(intptr_t)v6464;
	i8 v6466 = v6465+(-8);
	i8 v6467 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6467 = v6466;

	i8 v6468 = (i8)(intptr_t)(ws+224);
	i8 v6469 = *(i8*)(intptr_t)v6468;
	i8 v6470 = *(i8*)(intptr_t)v6469;
	i8 v6471 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v6471 = v6470;

endsub:;
	*p6463 = *(i8*)(intptr_t)(ws+3472);
}
	void f56_PopNode(i8* /* node */);
	void f55_PushNode(i8 /* node */);
	void f55_PushNode(i8 /* node */);

// NextNode workspace at ws+3464 length ws+8
void f57_NextNode(i8* p6472 /* node */) {

	i8 v6473 = (i8)(intptr_t)(f56_PopNode);
	i8 v6474;

	((void(*)(i8* /* node */))(intptr_t)v6473)(&v6474);
	i8 v6475 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v6475 = v6474;

	i8 v6476 = (i8)(intptr_t)(ws+3464);
	i8 v6477 = *(i8*)(intptr_t)v6476;
	i8 v6478 = (i8)+0;
	if (v6477==v6478) goto c02_0538; else goto c02_0537;

c02_0537:;

	i8 v6479 = (i8)(intptr_t)(ws+3464);
	i8 v6480 = *(i8*)(intptr_t)v6479;
	i8 v6481 = v6480+(+24);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6483)(v6482);

	i8 v6484 = (i8)(intptr_t)(ws+3464);
	i8 v6485 = *(i8*)(intptr_t)v6484;
	i8 v6486 = v6485+(+32);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i8 v6488 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6488)(v6487);

c02_0538:;

c02_0534:;

endsub:;
	*p6472 = *(i8*)(intptr_t)(ws+3464);
}
	void f55_PushNode(i8 /* node */);
	void f57_NextNode(i8* /* node */);
	void f161_FreeNode(i8 /* node */);

// Discard workspace at ws+3440 length ws+24
void f58_Discard(i8 p6489 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p6489; /*node */

	i8 v6490 = (i8)(intptr_t)(ws+224);
	i8 v6491 = *(i8*)(intptr_t)v6490;
	i8 v6492 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6492 = v6491;

	i8 v6493 = (i8)(intptr_t)(ws+3440);
	i8 v6494 = *(i8*)(intptr_t)v6493;
	i8 v6495 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6495)(v6494);

c02_053b:;

	i8 v6496 = (i8)(intptr_t)(ws+224);
	i8 v6497 = *(i8*)(intptr_t)v6496;
	i8 v6498 = (i8)(intptr_t)(ws+3448);
	i8 v6499 = *(i8*)(intptr_t)v6498;
	if (v6497==v6499) goto c02_053e; else goto c02_053d;

c02_053d:;

	i8 v6500 = (i8)(intptr_t)(f57_NextNode);
	i8 v6501;

	((void(*)(i8* /* node */))(intptr_t)v6500)(&v6501);
	i8 v6502 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6502 = v6501;

	i8 v6503 = (i8)(intptr_t)(ws+3456);
	i8 v6504 = *(i8*)(intptr_t)v6503;
	i8 v6505 = (i8)(intptr_t)(f161_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6505)(v6504);

	goto c02_053b;

c02_053e:;

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3336 length ws+8
void f278_BeginNormalLoop(i8* p6506 /* ll */) {

	i8 v6507 = (i8)+8;
	i8 v6508 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v6509;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6508)(&v6509, v6507);
	i8 v6510 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v6510 = v6509;

	i8 v6511 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6512;

	((void(*)(i2* /* label */))(intptr_t)v6511)(&v6512);
	i8 v6513 = (i8)(intptr_t)(ws+3336);
	i8 v6514 = *(i8*)(intptr_t)v6513;
	*(i2*)(intptr_t)v6514 = v6512;

	i8 v6515 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6516;

	((void(*)(i2* /* label */))(intptr_t)v6515)(&v6516);
	i8 v6517 = (i8)(intptr_t)(ws+3336);
	i8 v6518 = *(i8*)(intptr_t)v6517;
	i8 v6519 = v6518+(+2);
	*(i2*)(intptr_t)v6519 = v6516;

	i8 v6520 = (i8)(intptr_t)(ws+52);
	i2 v6521 = *(i2*)(intptr_t)v6520;
	i8 v6522 = (i8)(intptr_t)(ws+3336);
	i8 v6523 = *(i8*)(intptr_t)v6522;
	i8 v6524 = v6523+(+4);
	*(i2*)(intptr_t)v6524 = v6521;

	i8 v6525 = (i8)(intptr_t)(ws+54);
	i2 v6526 = *(i2*)(intptr_t)v6525;
	i8 v6527 = (i8)(intptr_t)(ws+3336);
	i8 v6528 = *(i8*)(intptr_t)v6527;
	i8 v6529 = v6528+(+6);
	*(i2*)(intptr_t)v6529 = v6526;

	i8 v6530 = (i8)(intptr_t)(ws+3336);
	i8 v6531 = *(i8*)(intptr_t)v6530;
	i8 v6532 = v6531+(+2);
	i2 v6533 = *(i2*)(intptr_t)v6532;
	i8 v6534 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6534 = v6533;

	i8 v6535 = (i8)(intptr_t)(ws+3336);
	i8 v6536 = *(i8*)(intptr_t)v6535;
	i2 v6537 = *(i2*)(intptr_t)v6536;
	i8 v6538 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6538 = v6537;

endsub:;
	*p6506 = *(i8*)(intptr_t)(ws+3336);
}
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3328 length ws+8
void f279_TerminateNormalLoop(i8 p6539 /* ll */) {
	*(i8*)(intptr_t)(ws+3328) = p6539; /*ll */

	i8 v6540 = (i8)(intptr_t)(ws+54);
	i2 v6541 = *(i2*)(intptr_t)v6540;
	i8 v6542 = (i8)(intptr_t)(f158_MidJump);
	i8 v6543;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6542)(&v6543, v6541);
	i8 v6544 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6544)(v6543);

	i8 v6545 = (i8)(intptr_t)(ws+52);
	i2 v6546 = *(i2*)(intptr_t)v6545;
	i8 v6547 = (i8)(intptr_t)(f147_MidLabel);
	i8 v6548;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6547)(&v6548, v6546);
	i8 v6549 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6549)(v6548);

	i8 v6550 = (i8)(intptr_t)(ws+3328);
	i8 v6551 = *(i8*)(intptr_t)v6550;
	i8 v6552 = v6551+(+4);
	i2 v6553 = *(i2*)(intptr_t)v6552;
	i8 v6554 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6554 = v6553;

	i8 v6555 = (i8)(intptr_t)(ws+3328);
	i8 v6556 = *(i8*)(intptr_t)v6555;
	i8 v6557 = v6556+(+6);
	i2 v6558 = *(i2*)(intptr_t)v6557;
	i8 v6559 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6559 = v6558;

	i8 v6560 = (i8)(intptr_t)(ws+3328);
	i8 v6561 = *(i8*)(intptr_t)v6560;
	i8 v6562 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6562)(v6561);

endsub:;
}

// Negate workspace at ws+3328 length ws+8
void f280_Negate(i8 p6563 /* node */) {
	*(i8*)(intptr_t)(ws+3328) = p6563; /*node */

	i8 v6564 = (i8)(intptr_t)(ws+3328);
	i8 v6565 = *(i8*)(intptr_t)v6564;
	i8 v6566 = v6565+(+6);
	i1 v6567 = *(i1*)(intptr_t)v6566;
	i1 v6568 = v6567^(+1);
	i8 v6569 = (i8)(intptr_t)(ws+3328);
	i8 v6570 = *(i8*)(intptr_t)v6569;
	i8 v6571 = v6570+(+6);
	*(i1*)(intptr_t)v6571 = v6568;

endsub:;
}
	void f268_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f107_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3328 length ws+37
void f281_ConditionalEq(i8* p6572 /* result */, i1 p6573 /* negated */, i8 p6574 /* rhs */, i8 p6575 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6575; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6574; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6573; /*negated */

	i8 v6576 = (i8)(intptr_t)(ws+3328);
	i8 v6577 = *(i8*)(intptr_t)v6576;
	i8 v6578 = (i8)(intptr_t)(ws+3336);
	i8 v6579 = *(i8*)(intptr_t)v6578;
	i8 v6580 = (i8)(intptr_t)(f268_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6580)(v6579, v6577);

	i8 v6581 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6582;

	((void(*)(i2* /* label */))(intptr_t)v6581)(&v6582);
	i8 v6583 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6583 = v6582;

	i8 v6584 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6585;

	((void(*)(i2* /* label */))(intptr_t)v6584)(&v6585);
	i8 v6586 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6586 = v6585;

	i8 v6587 = (i8)(intptr_t)(ws+3328);
	i8 v6588 = *(i8*)(intptr_t)v6587;
	i8 v6589 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6590;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6589)(&v6590, v6588);
	i8 v6591 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6591 = v6590;

	i8 v6592 = (i8)(intptr_t)(ws+3364);
	i1 v6593 = *(i1*)(intptr_t)v6592;
	i8 v6594 = (i8)(intptr_t)(ws+3328);
	i8 v6595 = *(i8*)(intptr_t)v6594;
	i8 v6596 = (i8)(intptr_t)(ws+3336);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	i8 v6598 = (i8)(intptr_t)(ws+3360);
	i2 v6599 = *(i2*)(intptr_t)v6598;
	i8 v6600 = (i8)(intptr_t)(ws+3362);
	i2 v6601 = *(i2*)(intptr_t)v6600;
	i2 v6602 = (i2)+0;
	i8 v6603 = (i8)(intptr_t)(ws+3344);
	i1 v6604 = *(i1*)(intptr_t)v6603;
	i8 v6605 = (i8)(intptr_t)(f107_MidBeq);
	i8 v6606;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6605)(&v6606, v6604, v6602, v6601, v6599, v6597, v6595, v6593);
	i8 v6607 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6607 = v6606;

endsub:;
	*p6572 = *(i8*)(intptr_t)(ws+3352);
}
	void f268_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f225_IsSNum(i1* /* result */, i8 /* type */);
	void f122_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f119_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3328 length ws+37
void f282_ConditionalLt(i8* p6608 /* result */, i1 p6609 /* negated */, i8 p6610 /* rhs */, i8 p6611 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6611; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6610; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6609; /*negated */

	i8 v6612 = (i8)(intptr_t)(ws+3328);
	i8 v6613 = *(i8*)(intptr_t)v6612;
	i8 v6614 = (i8)(intptr_t)(ws+3336);
	i8 v6615 = *(i8*)(intptr_t)v6614;
	i8 v6616 = (i8)(intptr_t)(f268_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6616)(v6615, v6613);

	i8 v6617 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6618;

	((void(*)(i2* /* label */))(intptr_t)v6617)(&v6618);
	i8 v6619 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6619 = v6618;

	i8 v6620 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6621;

	((void(*)(i2* /* label */))(intptr_t)v6620)(&v6621);
	i8 v6622 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6622 = v6621;

	i8 v6623 = (i8)(intptr_t)(ws+3328);
	i8 v6624 = *(i8*)(intptr_t)v6623;
	i8 v6625 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6626;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6625)(&v6626, v6624);
	i8 v6627 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6627 = v6626;

	i8 v6628 = (i8)(intptr_t)(ws+3328);
	i8 v6629 = *(i8*)(intptr_t)v6628;
	i8 v6630 = v6629+(+16);
	i8 v6631 = *(i8*)(intptr_t)v6630;
	i8 v6632 = (i8)(intptr_t)(f225_IsSNum);
	i1 v6633;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6632)(&v6633, v6631);
	i1 v6634 = (i1)+0;
	if (v6633==v6634) goto c02_0543; else goto c02_0542;

c02_0542:;

	i8 v6635 = (i8)(intptr_t)(ws+3364);
	i1 v6636 = *(i1*)(intptr_t)v6635;
	i8 v6637 = (i8)(intptr_t)(ws+3328);
	i8 v6638 = *(i8*)(intptr_t)v6637;
	i8 v6639 = (i8)(intptr_t)(ws+3336);
	i8 v6640 = *(i8*)(intptr_t)v6639;
	i8 v6641 = (i8)(intptr_t)(ws+3360);
	i2 v6642 = *(i2*)(intptr_t)v6641;
	i8 v6643 = (i8)(intptr_t)(ws+3362);
	i2 v6644 = *(i2*)(intptr_t)v6643;
	i2 v6645 = (i2)+0;
	i8 v6646 = (i8)(intptr_t)(ws+3344);
	i1 v6647 = *(i1*)(intptr_t)v6646;
	i8 v6648 = (i8)(intptr_t)(f122_MidBlts);
	i8 v6649;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6648)(&v6649, v6647, v6645, v6644, v6642, v6640, v6638, v6636);
	i8 v6650 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6650 = v6649;

	goto c02_053f;

c02_0543:;

	i8 v6651 = (i8)(intptr_t)(ws+3364);
	i1 v6652 = *(i1*)(intptr_t)v6651;
	i8 v6653 = (i8)(intptr_t)(ws+3328);
	i8 v6654 = *(i8*)(intptr_t)v6653;
	i8 v6655 = (i8)(intptr_t)(ws+3336);
	i8 v6656 = *(i8*)(intptr_t)v6655;
	i8 v6657 = (i8)(intptr_t)(ws+3360);
	i2 v6658 = *(i2*)(intptr_t)v6657;
	i8 v6659 = (i8)(intptr_t)(ws+3362);
	i2 v6660 = *(i2*)(intptr_t)v6659;
	i2 v6661 = (i2)+0;
	i8 v6662 = (i8)(intptr_t)(ws+3344);
	i1 v6663 = *(i1*)(intptr_t)v6662;
	i8 v6664 = (i8)(intptr_t)(f119_MidBltu);
	i8 v6665;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6664)(&v6665, v6663, v6661, v6660, v6658, v6656, v6654, v6652);
	i8 v6666 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6666 = v6665;

c02_053f:;

endsub:;
	*p6608 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0118[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3328 length ws+0
void f283_parser_i_bad_next_prev(void) {

	i8 v6667 = (i8)(intptr_t)c02_s0118;
	i8 v6668 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6668)(v6667);

endsub:;
}
const i1 c02_s0119[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3352 length ws+0
void f284_parser_i_constant_error(void) {

	i8 v6669 = (i8)(intptr_t)c02_s0119;
	i8 v6670 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6670)(v6669);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s011a[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s011b[] = { 0x20,0x74,0x61,0x6b,0x65,0x73,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
const i1 c02_s011c[] = { 0x20,0x62,0x75,0x74,0x20,0x77,0x61,0x73,0x20,0x67,0x69,0x76,0x65,0x6e,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f17_print_i8(i1 /* value */);
	void f70_EndError(void);

// i_check_sub_call_args workspace at ws+3376 length ws+8
void f285_i_check_sub_call_args(void) {

	i8 v6671 = (i8)(intptr_t)(ws+80);
	i8 v6672 = *(i8*)(intptr_t)v6671;
	i8 v6673 = v6672+(+8);
	i8 v6674 = *(i8*)(intptr_t)v6673;
	i8 v6675 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6675 = v6674;

	i8 v6676 = (i8)(intptr_t)(ws+80);
	i8 v6677 = *(i8*)(intptr_t)v6676;
	i8 v6678 = v6677+(+40);
	i1 v6679 = *(i1*)(intptr_t)v6678;
	i8 v6680 = (i8)(intptr_t)(ws+3376);
	i8 v6681 = *(i8*)(intptr_t)v6680;
	i8 v6682 = v6681+(+80);
	i1 v6683 = *(i1*)(intptr_t)v6682;
	if (v6679==v6683) goto c02_0548; else goto c02_0547;

c02_0547:;

	i8 v6684 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6684)();

	i8 v6685 = (i8)(intptr_t)c02_s011a;
	i8 v6686 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6686)(v6685);

	i8 v6687 = (i8)(intptr_t)(ws+3376);
	i8 v6688 = *(i8*)(intptr_t)v6687;
	i8 v6689 = *(i8*)(intptr_t)v6688;
	i8 v6690 = v6689+(+8);
	i8 v6691 = *(i8*)(intptr_t)v6690;
	i8 v6692 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6692)(v6691);

	i8 v6693 = (i8)(intptr_t)c02_s011b;
	i8 v6694 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6694)(v6693);

	i8 v6695 = (i8)(intptr_t)(ws+3376);
	i8 v6696 = *(i8*)(intptr_t)v6695;
	i8 v6697 = v6696+(+80);
	i1 v6698 = *(i1*)(intptr_t)v6697;
	i8 v6699 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6699)(v6698);

	i8 v6700 = (i8)(intptr_t)c02_s011c;
	i8 v6701 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6701)(v6700);

	i8 v6702 = (i8)(intptr_t)(ws+80);
	i8 v6703 = *(i8*)(intptr_t)v6702;
	i8 v6704 = v6703+(+40);
	i1 v6705 = *(i1*)(intptr_t)v6704;
	i8 v6706 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6706)(v6705);

	i8 v6707 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6707)();

c02_0548:;

c02_0544:;

endsub:;
}
	void f197_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f33_Free(i8 /* block */);

// i_end_call workspace at ws+3376 length ws+8
void f286_i_end_call(void) {

	i8 v6708 = (i8)(intptr_t)(ws+40);
	i8 v6709 = *(i8*)(intptr_t)v6708;
	i8 v6710 = (i8)(intptr_t)(ws+80);
	i8 v6711 = *(i8*)(intptr_t)v6710;
	i8 v6712 = v6711+(+8);
	i8 v6713 = *(i8*)(intptr_t)v6712;
	i8 v6714 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v6714)(v6713, v6709);

	i8 v6715 = (i8)(intptr_t)(ws+80);
	i8 v6716 = *(i8*)(intptr_t)v6715;
	i8 v6717 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6717 = v6716;

	i8 v6718 = (i8)(intptr_t)(ws+3376);
	i8 v6719 = *(i8*)(intptr_t)v6718;
	i8 v6720 = v6719+(+16);
	i8 v6721 = *(i8*)(intptr_t)v6720;
	i8 v6722 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v6722 = v6721;

	i8 v6723 = (i8)(intptr_t)(ws+3376);
	i8 v6724 = *(i8*)(intptr_t)v6723;
	i8 v6725 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6725)(v6724);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s011d[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// SymbolRedeclarationError workspace at ws+3328 length ws+0
void f287_SymbolRedeclarationError(void) {

	i8 v6726 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6726)();

	i8 v6727 = (i8)(intptr_t)c02_s011d;
	i8 v6728 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6728)(v6727);

	i8 v6729 = (i8)(intptr_t)(ws+72);
	i8 v6730 = *(i8*)(intptr_t)v6729;
	i8 v6731 = v6730+(+32);
	i8 v6732 = *(i8*)(intptr_t)v6731;
	i8 v6733 = v6732+(+8);
	i8 v6734 = *(i8*)(intptr_t)v6733;
	i8 v6735 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6735)(v6734);

	i8 v6736 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6736)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s011e[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// WrongNumberOfElementsError workspace at ws+3368 length ws+0
void f288_WrongNumberOfElementsError(void) {

	i8 v6737 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6737)();

	i8 v6738 = (i8)(intptr_t)c02_s011e;
	i8 v6739 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6739)(v6738);

	i8 v6740 = (i8)(intptr_t)(ws+72);
	i8 v6741 = *(i8*)(intptr_t)v6740;
	i8 v6742 = v6741+(+32);
	i8 v6743 = *(i8*)(intptr_t)v6742;
	i8 v6744 = v6743+(+8);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	i8 v6746 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6746)(v6745);

	i8 v6747 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6747)();

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);
	void f235_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f288_WrongNumberOfElementsError(void);
	void f288_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3328 length ws+4
void f289_CheckEndOfInitialiser(void) {

	i8 v6748 = (i8)(intptr_t)(ws+72);
	i8 v6749 = *(i8*)(intptr_t)v6748;
	i8 v6750 = (i8)(intptr_t)(f222_IsArray);
	i1 v6751;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6750)(&v6751, v6749);
	i1 v6752 = (i1)+0;
	if (v6751==v6752) goto c02_054d; else goto c02_054c;

c02_054c:;

	i8 v6753 = (i8)(intptr_t)(ws+72);
	i8 v6754 = *(i8*)(intptr_t)v6753;
	i8 v6755 = *(i8*)(intptr_t)v6754;
	i8 v6756 = v6755+(+50);
	i2 v6757 = *(i2*)(intptr_t)v6756;
	i8 v6758 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v6758 = v6757;

	i8 v6759 = (i8)(intptr_t)(ws+72);
	i8 v6760 = *(i8*)(intptr_t)v6759;
	i8 v6761 = v6760+(+48);
	i2 v6762 = *(i2*)(intptr_t)v6761;
	i2 v6763 = (i2)+0;
	if (v6762==v6763) goto c02_0551; else goto c02_0552;

c02_0551:;

	i8 v6764 = (i8)(intptr_t)(ws+1560);
	i2 v6765 = *(i2*)(intptr_t)v6764;
	i8 v6766 = (i8)(intptr_t)(ws+72);
	i8 v6767 = *(i8*)(intptr_t)v6766;
	i8 v6768 = v6767+(+48);
	*(i2*)(intptr_t)v6768 = v6765;

	i8 v6769 = (i8)(intptr_t)(ws+1560);
	i2 v6770 = *(i2*)(intptr_t)v6769;
	i8 v6771 = (i8)(intptr_t)(ws+3328);
	i2 v6772 = *(i2*)(intptr_t)v6771;
	i2 v6773 = v6770/v6772;
	i8 v6774 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v6774 = v6773;

	i8 v6775 = (i8)(intptr_t)(ws+3330);
	i2 v6776 = *(i2*)(intptr_t)v6775;
	i8 v6777 = (i8)(intptr_t)(ws+72);
	i8 v6778 = *(i8*)(intptr_t)v6777;
	i8 v6779 = v6778+(+8);
	*(i2*)(intptr_t)v6779 = v6776;

	i4 v6780 = (i4)+0;
	i8 v6781 = (i8)(intptr_t)(ws+3330);
	i2 v6782 = *(i2*)(intptr_t)v6781;
	i2 v6783 = v6782+(-1);
	i4 v6784 = v6783;
	i8 v6785 = (i8)(intptr_t)(f235_ArchGuessIntType);
	i8 v6786;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v6785)(&v6786, v6784, v6780);
	i8 v6787 = (i8)(intptr_t)(ws+72);
	i8 v6788 = *(i8*)(intptr_t)v6787;
	i8 v6789 = v6788+(+16);
	*(i8*)(intptr_t)v6789 = v6786;

c02_0552:;

c02_054e:;

	i8 v6790 = (i8)(intptr_t)(ws+1560);
	i2 v6791 = *(i2*)(intptr_t)v6790;
	i8 v6792 = (i8)(intptr_t)(ws+72);
	i8 v6793 = *(i8*)(intptr_t)v6792;
	i8 v6794 = v6793+(+48);
	i2 v6795 = *(i2*)(intptr_t)v6794;
	if (v6791==v6795) goto c02_0557; else goto c02_0556;

c02_0556:;

	i8 v6796 = (i8)(intptr_t)(f288_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6796)();

c02_0557:;

c02_0553:;

	goto c02_0549;

c02_054d:;

	i8 v6797 = (i8)(intptr_t)(ws+1552);
	i8 v6798 = *(i8*)(intptr_t)v6797;
	i8 v6799 = (i8)+0;
	if (v6798==v6799) goto c02_055c; else goto c02_055b;

c02_055b:;

	i8 v6800 = (i8)(intptr_t)(f288_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6800)();

c02_055c:;

c02_0558:;

c02_0549:;

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3368 length ws+16
void f290_GetInitedMember(i8* p6801 /* member */, i8* p6802 /* type */) {

	i8 v6803 = (i8)+0;
	i8 v6804 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6804 = v6803;

	i8 v6805 = (i8)(intptr_t)(ws+72);
	i8 v6806 = *(i8*)(intptr_t)v6805;
	i8 v6807 = (i8)(intptr_t)(f222_IsArray);
	i1 v6808;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6807)(&v6808, v6806);
	i1 v6809 = (i1)+0;
	if (v6808==v6809) goto c02_0561; else goto c02_0560;

c02_0560:;

	i8 v6810 = (i8)(intptr_t)(ws+72);
	i8 v6811 = *(i8*)(intptr_t)v6810;
	i8 v6812 = *(i8*)(intptr_t)v6811;
	i8 v6813 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6813 = v6812;

	goto c02_055d;

c02_0561:;

	i8 v6814 = (i8)(intptr_t)(ws+1552);
	i8 v6815 = *(i8*)(intptr_t)v6814;
	i8 v6816 = (i8)+0;
	if (v6815==v6816) goto c02_0565; else goto c02_0566;

c02_0565:;

	i8 v6817 = (i8)+0;
	i8 v6818 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6818 = v6817;

	goto endsub;

c02_0566:;

c02_0562:;

	i8 v6819 = (i8)(intptr_t)(ws+1552);
	i8 v6820 = *(i8*)(intptr_t)v6819;
	i8 v6821 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6821 = v6820;

	i8 v6822 = (i8)(intptr_t)(ws+1552);
	i8 v6823 = *(i8*)(intptr_t)v6822;
	i8 v6824 = *(i8*)(intptr_t)v6823;
	i8 v6825 = *(i8*)(intptr_t)v6824;
	i8 v6826 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6826 = v6825;

	i8 v6827 = (i8)(intptr_t)(ws+1552);
	i8 v6828 = *(i8*)(intptr_t)v6827;
	i8 v6829 = v6828+(+24);
	i8 v6830 = *(i8*)(intptr_t)v6829;
	i8 v6831 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v6831 = v6830;

c02_055d:;

endsub:;
	*p6802 = *(i8*)(intptr_t)(ws+3376);
	*p6801 = *(i8*)(intptr_t)(ws+3368);
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f118_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f251_Generate(i8 /* statement */);

// AlignTo workspace at ws+3368 length ws+4
void f291_AlignTo(i1 p6832 /* alignment */) {
	*(i1*)(intptr_t)(ws+3368) = p6832; /*alignment */

	i8 v6833 = (i8)(intptr_t)(ws+1562);
	i2 v6834 = *(i2*)(intptr_t)v6833;
	i8 v6835 = (i8)(intptr_t)(ws+3368);
	i1 v6836 = *(i1*)(intptr_t)v6835;
	i8 v6837 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v6838;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v6837)(&v6838, v6836, v6834);
	i8 v6839 = (i8)(intptr_t)(ws+3370);
	*(i2*)(intptr_t)v6839 = v6838;

c02_0569:;

	i8 v6840 = (i8)(intptr_t)(ws+1562);
	i2 v6841 = *(i2*)(intptr_t)v6840;
	i8 v6842 = (i8)(intptr_t)(ws+3370);
	i2 v6843 = *(i2*)(intptr_t)v6842;
	if (v6841==v6843) goto c02_056c; else goto c02_056b;

c02_056b:;

	i1 v6844 = (i1)+1;
	i4 v6845 = (i4)+0;
	i8 v6846 = (i8)(intptr_t)(f118_MidInit);
	i8 v6847;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v6846)(&v6847, v6845, v6844);
	i8 v6848 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6848)(v6847);

	i8 v6849 = (i8)(intptr_t)(ws+1560);
	i2 v6850 = *(i2*)(intptr_t)v6849;
	i2 v6851 = v6850+(+1);
	i8 v6852 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v6852 = v6851;

	i8 v6853 = (i8)(intptr_t)(ws+1562);
	i2 v6854 = *(i2*)(intptr_t)v6853;
	i2 v6855 = v6854+(+1);
	i8 v6856 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v6856 = v6855;

	goto c02_0569;

c02_056c:;

endsub:;
}
const i1 c02_s011f[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f71_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3368 length ws+8
void f292_CheckForOverlaps(i8 p6857 /* member */) {
	*(i8*)(intptr_t)(ws+3368) = p6857; /*member */

	i8 v6858 = (i8)(intptr_t)(ws+3368);
	i8 v6859 = *(i8*)(intptr_t)v6858;
	i8 v6860 = (i8)+0;
	if (v6859==v6860) goto c02_0570; else goto c02_0571;

c02_0570:;

	goto endsub;

c02_0571:;

c02_056d:;

	i8 v6861 = (i8)(intptr_t)(ws+3368);
	i8 v6862 = *(i8*)(intptr_t)v6861;
	i8 v6863 = *(i8*)(intptr_t)v6862;
	i8 v6864 = v6863+(+24);
	i2 v6865 = *(i2*)(intptr_t)v6864;
	i8 v6866 = (i8)(intptr_t)(ws+1560);
	i2 v6867 = *(i2*)(intptr_t)v6866;
	if (v6865<v6867) goto c02_0575; else goto c02_0576;

c02_0575:;

	i8 v6868 = (i8)(intptr_t)c02_s011f;
	i8 v6869 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6869)(v6868);

c02_0576:;

c02_0572:;

endsub:;
}
	void f290_GetInitedMember(i8* /* member */, i8* /* type */);
	void f288_WrongNumberOfElementsError(void);
	void f291_AlignTo(i1 /* alignment */);
	void f292_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3352 length ws+16
void f293_GetInitedMemberChecked(i8* p6870 /* member */, i8* p6871 /* type */) {

	i8 v6872 = (i8)(intptr_t)(f290_GetInitedMember);
	i8 v6873;
	i8 v6874;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v6872)(&v6873, &v6874);

	i8 v6875 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6875 = v6874;

	i8 v6876 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6876 = v6873;

	i8 v6877 = (i8)(intptr_t)(ws+3360);
	i8 v6878 = *(i8*)(intptr_t)v6877;
	i8 v6879 = (i8)+0;
	if (v6878==v6879) goto c02_057a; else goto c02_057b;

c02_057a:;

	i8 v6880 = (i8)(intptr_t)(f288_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6880)();

c02_057b:;

c02_0577:;

	i8 v6881 = (i8)(intptr_t)(ws+3360);
	i8 v6882 = *(i8*)(intptr_t)v6881;
	i8 v6883 = v6882+(+53);
	i1 v6884 = *(i1*)(intptr_t)v6883;
	i8 v6885 = (i8)(intptr_t)(f291_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v6885)(v6884);

	i8 v6886 = (i8)(intptr_t)(ws+3352);
	i8 v6887 = *(i8*)(intptr_t)v6886;
	i8 v6888 = (i8)(intptr_t)(f292_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v6888)(v6887);

endsub:;
	*p6871 = *(i8*)(intptr_t)(ws+3360);
	*p6870 = *(i8*)(intptr_t)(ws+3352);
}
static data f3___main_s057c[] = {




	{ .i1 = { 0x0f,0x02,0xa7,0x01,0xf9,0x01,0xd0,0x00}},




	{ .i1 = { 0x5e,0x00,0xc2,0x01,0x08,0x00,0x60,0x00}},




	{ .i1 = { 0xa7,0x00,0x45,0x01,0xba,0x00,0xb9,0x00}},




	{ .i1 = { 0x6e,0x00,0x3c,0x01,0x37,0x00,0x68,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x38,0x02,0x7d,0x01}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xae,0x01,0x4d,0x00}},




	{ .i1 = { 0x69,0x00,0x56,0x00,0x01,0x02,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x17,0x00,0xbb,0x00,0x22,0x02}},




	{ .i1 = { 0x18,0x00,0x7a,0x01,0x55,0x01,0x49,0x00}},




	{ .i1 = { 0x51,0x00,0x46,0x01,0xd9,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x6f,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0x95,0x01,0x29,0x02,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x4e,0x02,0xa8,0x00,0x7b,0x01}},




	{ .i1 = { 0x38,0x02,0x34,0x00,0x36,0x00,0x72,0x00}},




	{ .i1 = { 0xd7,0x00,0x18,0x00,0xda,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0x9d,0x01,0xcf,0x00}},




	{ .i1 = { 0x1f,0x00,0x59,0x00,0xa7,0x01,0xd8,0x00}},




	{ .i1 = { 0xd0,0x00,0xdb,0x00,0x4d,0x00,0xf9,0x01}},




	{ .i1 = { 0x60,0x00,0x61,0x00,0xb8,0x00,0xb3,0x00}},




	{ .i1 = { 0x1c,0x02,0x6e,0x00,0x3c,0x01,0x37,0x00}},




	{ .i1 = { 0x4f,0x00,0x11,0x00,0x28,0x00,0xa9,0x00}},




	{ .i1 = { 0xa8,0x00,0x52,0x00,0xdc,0x00,0xae,0x01}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0x56,0x00,0xbe,0x00}},




	{ .i1 = { 0x35,0x00,0x62,0x00,0x17,0x00,0xae,0x00}},




	{ .i1 = { 0x84,0x00,0x72,0x00,0x7a,0x01,0x55,0x01}},




	{ .i1 = { 0x93,0x00,0x51,0x00,0xa4,0x00,0x42,0x00}},




	{ .i1 = { 0xc5,0x00,0x50,0x00,0x6f,0x01,0xb4,0x00}},




	{ .i1 = { 0xbf,0x00,0x53,0x00,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xf9,0x01,0xf9,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0xac,0x00,0x9c,0x00,0x12,0x02,0x7a,0x01}},




	{ .i1 = { 0xa9,0x01,0x3b,0x00,0x44,0x00,0xa0,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0xa8,0x01}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x96,0x00,0xa7,0x01}},




	{ .i1 = { 0xd8,0x00,0xd0,0x00,0x01,0x02,0xb7,0x00}},




	{ .i1 = { 0x18,0x00,0x60,0x00,0x40,0x02,0x6a,0x00}},




	{ .i1 = { 0xd2,0x00,0x37,0x01,0x6e,0x00,0x3c,0x01}},




	{ .i1 = { 0x37,0x00,0x90,0x01,0x11,0x00,0x28,0x00}},




	{ .i1 = { 0x01,0x02,0xbe,0x00,0x52,0x00,0xdc,0x00}},




	{ .i1 = { 0xae,0x01,0x01,0x02,0x7b,0x01,0x56,0x00}},




	{ .i1 = { 0x74,0x01,0x35,0x00,0x62,0x00,0x17,0x00}},




	{ .i1 = { 0x8b,0x01,0x73,0x00,0x72,0x00,0x7a,0x01}},




	{ .i1 = { 0x55,0x01,0x93,0x00,0x51,0x00,0xce,0x00}},




	{ .i1 = { 0x18,0x00,0xc5,0x00,0x50,0x00,0x6f,0x01}},




	{ .i1 = { 0xb4,0x00,0xbf,0x00,0x53,0x00,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xf9,0x01,0xf9,0x01,0x61,0x00}},




	{ .i1 = { 0x61,0x00,0x49,0x02,0x40,0x00,0x58,0x00}},




	{ .i1 = { 0xc9,0x00,0x16,0x02,0xb1,0x00,0x40,0x00}},




	{ .i1 = { 0x58,0x00,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xbe,0x00,0xcf,0x00,0x1f,0x00,0x99,0x00}},




	{ .i1 = { 0xa7,0x01,0xd8,0x00,0xd0,0x00,0x79,0x01}},




	{ .i1 = { 0x9b,0x00,0x9a,0x00,0x60,0x00,0xb5,0x01}},




	{ .i1 = { 0x4a,0x00,0xd3,0x00,0xb8,0x00,0x6e,0x00}},




	{ .i1 = { 0x3c,0x01,0x37,0x00,0x4b,0x01,0x11,0x00}},




	{ .i1 = { 0x28,0x00,0x01,0x02,0x1c,0x02,0x52,0x00}},




	{ .i1 = { 0xdc,0x00,0xae,0x01,0x01,0x02,0x01,0x02}},




	{ .i1 = { 0x56,0x00,0x7a,0x01,0x35,0x00,0x62,0x00}},




	{ .i1 = { 0x17,0x00,0x82,0x01,0x7c,0x00,0xaf,0x00}},




	{ .i1 = { 0x7a,0x01,0x55,0x01,0xcb,0x00,0x51,0x00}},




	{ .i1 = { 0x85,0x00,0x7d,0x00,0xc5,0x00,0x50,0x00}},




	{ .i1 = { 0x6f,0x01,0xb4,0x00,0xbf,0x00,0x53,0x00}},




	{ .i1 = { 0xdb,0x00,0x43,0x00,0xf9,0x01,0x45,0x00}},




	{ .i1 = { 0x61,0x00,0xa6,0x00,0xdb,0x00,0xdb,0x00}},




	{ .i1 = { 0xf9,0x01,0xf9,0x01,0x61,0x00,0x61,0x00}},




	{ .i1 = { 0x16,0x00,0x14,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xc8,0x00,0xcf,0x00,0x1f,0x00}},




	{ .i1 = { 0x39,0x02,0xa7,0x01,0xd8,0x00,0xd0,0x00}},




	{ .i1 = { 0x27,0x00,0xda,0x00,0x1d,0x00,0x60,0x00}},




	{ .i1 = { 0x4c,0x00,0x94,0x00,0x94,0x00,0x0b,0x00}},




	{ .i1 = { 0x6e,0x00,0x3c,0x01,0x37,0x00,0xd9,0x00}},




	{ .i1 = { 0x11,0x00,0x28,0x00,0x05,0x02,0x0a,0x02}},




	{ .i1 = { 0x52,0x00,0xdc,0x00,0xae,0x01,0x01,0x02}},




	{ .i1 = { 0x2d,0x00,0x56,0x00,0x12,0x00,0x35,0x00}},




	{ .i1 = { 0x62,0x00,0x17,0x00,0xb2,0x00,0x7c,0x00}},




	{ .i1 = { 0x72,0x00,0x7a,0x01,0x55,0x01,0xdc,0x01}},




	{ .i1 = { 0x51,0x00,0x7a,0x01,0x85,0x00,0xc5,0x00}},




	{ .i1 = { 0x50,0x00,0x6f,0x01,0xb4,0x00,0xbf,0x00}},




	{ .i1 = { 0x53,0x00,0xdb,0x00,0xdb,0x00,0xf9,0x01}},




	{ .i1 = { 0xf9,0x01,0x61,0x00,0x61,0x00,0xd4,0x00}},




	{ .i1 = { 0xdb,0x00,0x1d,0x02,0xf9,0x01,0x71,0x00}},




	{ .i1 = { 0x61,0x00,0x1c,0x02,0x90,0x00,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0x90,0x01,0xcf,0x00}},




	{ .i1 = { 0x1f,0x00,0x92,0x00,0xa7,0x01,0xd8,0x00}},




	{ .i1 = { 0xd0,0x00,0xdb,0x00,0x64,0x00,0xf9,0x01}},




	{ .i1 = { 0x60,0x00,0x61,0x00,0x95,0x00,0x95,0x00}},




	{ .i1 = { 0x0b,0x00,0x6e,0x00,0x3c,0x01,0x37,0x00}},




	{ .i1 = { 0x66,0x00,0x11,0x00,0x28,0x00,0x01,0x02}},




	{ .i1 = { 0x3f,0x00,0x52,0x00,0xdc,0x00,0xae,0x01}},




	{ .i1 = { 0x10,0x00,0x65,0x00,0x56,0x00,0x21,0x02}},




	{ .i1 = { 0x35,0x00,0x62,0x00,0x17,0x00,0xbb,0x00}},




	{ .i1 = { 0x22,0x02,0x7c,0x00,0x7a,0x01,0x55,0x01}},




	{ .i1 = { 0x72,0x00,0x51,0x00,0xc1,0x00,0xd1,0x00}},




	{ .i1 = { 0xc5,0x00,0x50,0x00,0x6f,0x01,0xb4,0x00}},




	{ .i1 = { 0xbf,0x00,0x53,0x00,0xc3,0x00,0xdb,0x00}},




	{ .i1 = { 0xc7,0x00,0xf9,0x01,0xdb,0x00,0x61,0x00}},




	{ .i1 = { 0xf9,0x01,0x72,0x00,0x61,0x00,0x01,0x00}},




	{ .i1 = { 0x91,0x00,0x39,0x00,0x28,0x00,0x3e,0x01}},




	{ .i1 = { 0x2c,0x00,0x2a,0x00,0x29,0x00,0x0c,0x02}},




	{ .i1 = { 0xcf,0x00,0x1f,0x00,0x56,0x01,0xdb,0x00}},




	{ .i1 = { 0xd8,0x00,0xf9,0x01,0xd9,0x00,0x61,0x00}},




	{ .i1 = { 0x26,0x02,0xb9,0x00,0x7a,0x01,0x55,0x01}},




	{ .i1 = { 0x38,0x00,0x4b,0x02,0x0b,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0x6f,0x01,0x67,0x00}},




	{ .i1 = { 0xa3,0x00,0x34,0x00,0x36,0x00,0x03,0x00}},




	{ .i1 = { 0xd9,0x00,0xbb,0x00,0x22,0x02,0x97,0x00}},




	{ .i1 = { 0x16,0x00,0x14,0x00,0x38,0x00,0xf8,0x01}},




	{ .i1 = { 0x0a,0x02,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xf7,0x01,0x0a,0x02,0x04,0x00,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0x16,0x00,0x14,0x00,0x05,0x00}},




	{ .i1 = { 0x98,0x00,0x85,0x00,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0x23,0x00,0x20,0x00,0x21,0x00,0x22,0x00}},




	{ .i1 = { 0x25,0x00,0x24,0x00,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0xad,0x00,0xdb,0x00}},




	{ .i1 = { 0x57,0x00,0xf9,0x01,0x09,0x00,0x61,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0x23,0x00,0x20,0x00}},




	{ .i1 = { 0x21,0x00,0x22,0x00,0x25,0x00,0x24,0x00}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0x3b,0x02,0x18,0x00,0x85,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0x78,0x01,0x4e,0x00}},




	{ .i1 = { 0x0a,0x00,0x3e,0x02,0x6c,0x00,0x0d,0x00}},




	{ .i1 = { 0x6b,0x00,0x85,0x00,0x02,0x00,0xc6,0x00}},




	{ .i1 = { 0xdb,0x00,0xdb,0x00,0xf9,0x01,0xf9,0x01}},




	{ .i1 = { 0x61,0x00,0x5f,0x00,0xa4,0x01,0xc2,0x00}},




	{ .i1 = { 0xaa,0x00,0x0f,0x00,0xd5,0x00,0xdb,0x00}},




	{ .i1 = { 0x06,0x00,0xf9,0x01,0x07,0x00,0x61,0x00}},




	{ .i1 = { 0x63,0x00,0x5c,0x00,0x5b,0x00,0x0e,0x00}},




	{ .i1 = { 0x4a,0x01,0x0e,0x00,0x49,0x01,0x3d,0x00}},




	{ .i1 = { 0x18,0x00,0xa6,0x01,0xa1,0x01,0x3b,0x02}},




	{ .i1 = { 0x0c,0x00,0xab,0x00,0x76,0x00,0x70,0x00}},




	{ .i1 = { 0x6f,0x00,0x3e,0x00,0x9f,0x01,0x19,0x00}},




	{ .i1 = { 0xcd,0x00,0x6c,0x00,0x0d,0x00,0x6b,0x00}},




	{ .i1 = { 0x46,0x00,0x9a,0x01,0xb0,0x00,0x91,0x01}},




	{ .i1 = { 0xdb,0x00,0x41,0x00,0xf9,0x01,0x5a,0x00}},




	{ .i1 = { 0x5f,0x00,0x85,0x00,0xc2,0x00,0xb7,0x01}},




	{ .i1 = { 0x3b,0x02,0x47,0x00,0x54,0x00,0x76,0x00}},




	{ .i1 = { 0x70,0x00,0x6f,0x00,0xb6,0x01,0x96,0x01}},




	{ .i1 = { 0x5c,0x00,0x5b,0x00,0xd6,0x00,0xdb,0x00}},




	{ .i1 = { 0x6b,0x00,0xf9,0x01,0x5d,0x00,0x61,0x00}},




	{ .i1 = { 0x8d,0x01,0xdb,0x00,0xbd,0x00,0xf9,0x01}},




	{ .i1 = { 0xab,0x00,0x5f,0x00,0x74,0x00,0xc2,0x00}},




	{ .i1 = { 0x3e,0x00,0x3b,0x02,0xd9,0x00,0xbc,0x00}},




	{ .i1 = { 0x76,0x00,0x70,0x00,0x6f,0x00,0x55,0x00}},




	{ .i1 = { 0xb5,0x00,0x5c,0x00,0x5b,0x00,0x2d,0x00}},




	{ .i1 = { 0xdb,0x00,0x6b,0x00,0xf9,0x01,0xb4,0x01}},




	{ .i1 = { 0x61,0x00,0x80,0x01,0xdb,0x00,0x3c,0x00}},




	{ .i1 = { 0xf9,0x01,0xab,0x00,0x5f,0x00,0x7f,0x01}},




	{ .i1 = { 0xc2,0x00,0x3e,0x00,0x3b,0x02,0x71,0x01}},




	{ .i1 = { 0x48,0x00,0x76,0x00,0x70,0x00,0x6f,0x00}},




	{ .i1 = { 0xc4,0x00,0xb6,0x00,0x5c,0x00,0x5b,0x00}},




	{ .i1 = { 0x1a,0x00,0x87,0x01,0x6b,0x00,0xca,0x00}},




	{ .i1 = { 0x47,0x01,0x1b,0x00,0x41,0x01,0xdb,0x00}},




	{ .i1 = { 0x40,0x01,0xf9,0x01,0xab,0x00,0x5f,0x00}},




	{ .i1 = { 0xcc,0x00,0xc2,0x00,0x3e,0x00,0x84,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0x7e,0x00,0x6d,0x00}},




	{ .i1 = { 0x14,0x00,0x3f,0x01,0xc0,0x00,0x5c,0x00}},




	{ .i1 = { 0x5b,0x00,0x37,0x00,0x3d,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0xdb,0x00,0x3b,0x01,0xf9,0x01}},




	{ .i1 = { 0xdb,0x00,0x61,0x00,0xf9,0x01,0xab,0x00}},




	{ .i1 = { 0x61,0x00,0x13,0x02,0x35,0x00,0x3e,0x00}},




	{ .i1 = { 0x75,0x01,0x72,0x01,0xa5,0x01,0x1e,0x00}},




	{ .i1 = { 0x7a,0x01,0x55,0x01,0x1c,0x00,0x51,0x00}},




	{ .i1 = { 0x2b,0x00,0x6e,0x01,0x0f,0x02,0x50,0x00}},




	{ .i1 = { 0x6f,0x01,0xd9,0x00,0x37,0x00,0x13,0x00}},




	{ .i1 = { 0x15,0x00,0x28,0x00,0x36,0x01,0x38,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc3,0x01,0xc3,0x01,0x35,0x00}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x7a,0x01,0x55,0x01,0xc3,0x01}},




	{ .i1 = { 0x51,0x00,0xc3,0x01,0xd8,0x00,0x83,0x01}},




	{ .i1 = { 0x50,0x00,0x6f,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x37,0x00,0xc3,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0x35,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc3,0x01,0xc3,0x01,0xd8,0x00}},




	{ .i1 = { 0x7a,0x01,0x55,0x01,0xc3,0x01,0x51,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x50,0x00}},




	{ .i1 = { 0x6f,0x01,0xc3,0x01,0xc3,0x01,0xa5,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x37,0x00,0xc3,0x01,0x39,0x00,0x28,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x7f,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0x35,0x00,0xc3,0x01,0x80,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xd8,0x00,0x7a,0x01}},




	{ .i1 = { 0x55,0x01,0xdb,0x00,0x51,0x00,0xf9,0x01}},




	{ .i1 = { 0xc3,0x01,0x61,0x00,0x50,0x00,0x6f,0x01}},




	{ .i1 = { 0x76,0x01,0xdb,0x00,0xc3,0x01,0xf9,0x01}},




	{ .i1 = { 0xc3,0x01,0x61,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x37,0x00,0xc3,0x01,0x39,0x00}},




	{ .i1 = { 0x28,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x2c,0x00,0x2a,0x00,0x29,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x35,0x00,0x81,0x00}},




	{ .i1 = { 0xc3,0x01,0xd8,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x7a,0x01,0x55,0x01,0x56,0x01,0x51,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xd9,0x00,0x50,0x00}},




	{ .i1 = { 0x6f,0x01,0xdb,0x00,0xc3,0x01,0xf9,0x01}},




	{ .i1 = { 0x38,0x00,0x61,0x00,0xc3,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc3,0x01,0x82,0x00}},




	{ .i1 = { 0xc3,0x01,0x34,0x00,0x36,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2c,0x00,0x2a,0x00}},




	{ .i1 = { 0x29,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xdb,0x00,0xd8,0x00,0xf9,0x01}},




	{ .i1 = { 0xc3,0x01,0x61,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x83,0x00,0xc3,0x01,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x75,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0xdb,0x00,0xc3,0x01}},




	{ .i1 = { 0xf9,0x01,0xc3,0x01,0x61,0x00,0xd9,0x00}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0x38,0x00,0x77,0x00,0xc3,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xc3,0x01,0xd9,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0x38,0x00}},




	{ .i1 = { 0x61,0x00,0xc3,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc3,0x01,0xc3,0x01,0x3a,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x78,0x00,0xc3,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x9d,0x00,0x9e,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xdb,0x00}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0xc3,0x01,0x61,0x00}},




	{ .i1 = { 0x48,0x01,0x30,0x00,0x32,0x00,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xf9,0x01,0xf9,0x01,0x61,0x00}},




	{ .i1 = { 0x61,0x00,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0x26,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xd9,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x9f,0x00,0x38,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xc3,0x01,0xd9,0x00,0xdb,0x00,0xc3,0x01}},




	{ .i1 = { 0xf9,0x01,0xc3,0x01,0x61,0x00,0x38,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2d,0x00,0x33,0x00}},




	{ .i1 = { 0x3a,0x00,0xc3,0x01,0xc3,0x01,0x39,0x01}},




	{ .i1 = { 0x34,0x00,0x36,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xa0,0x00,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x79,0x00,0x88,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xc3,0x01}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0x30,0x00,0x32,0x00,0xdb,0x00}},




	{ .i1 = { 0xdb,0x00,0xf9,0x01,0xf9,0x01,0x61,0x00}},




	{ .i1 = { 0x61,0x00,0x2f,0x00,0x2e,0x00,0x4b,0x00}},




	{ .i1 = { 0x31,0x00,0xc3,0x01,0xc3,0x01,0x6c,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xd9,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x89,0x00}},




	{ .i1 = { 0x38,0x00,0xc3,0x01,0xc3,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x34,0x00,0x36,0x00,0x6d,0x01}},




	{ .i1 = { 0xc3,0x01,0xdb,0x00,0xd9,0x00,0xf9,0x01}},




	{ .i1 = { 0xc3,0x01,0x61,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x38,0x00,0xc3,0x01,0x86,0x00,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x34,0x00,0x36,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xa1,0x00,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0xc3,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0xc3,0x01,0xdb,0x00}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0xc3,0x01,0x61,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x30,0x00,0x32,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x37,0x00,0xd9,0x00}},




	{ .i1 = { 0x39,0x00,0x28,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x38,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0x35,0x00}},




	{ .i1 = { 0x87,0x00,0x38,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xc3,0x01,0x7a,0x01,0x55,0x01,0xc3,0x01}},




	{ .i1 = { 0x51,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x50,0x00,0x6f,0x01,0xdb,0x00,0xc3,0x01}},




	{ .i1 = { 0xf9,0x01,0xc3,0x01,0x61,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x30,0x00}},




	{ .i1 = { 0x32,0x00,0xc3,0x01,0xc3,0x01,0x2c,0x00}},




	{ .i1 = { 0x2a,0x00,0x29,0x00,0x8e,0x00,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00,0xd8,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x3b,0x02,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x76,0x00,0x70,0x00,0x6f,0x00}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0xc3,0x01,0x6b,0x00,0x8f,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xdb,0x00}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0xc3,0x01,0x5f,0x00}},




	{ .i1 = { 0xc3,0x01,0xc2,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xd9,0x00,0xdb,0x00,0xc3,0x01,0xf9,0x01}},




	{ .i1 = { 0xc3,0x01,0x61,0x00,0x38,0x00,0x5c,0x00}},




	{ .i1 = { 0x5b,0x00,0x2d,0x00,0x33,0x00,0x3a,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x34,0x00}},




	{ .i1 = { 0x36,0x00,0xc3,0x01,0xd9,0x00,0xab,0x00}},




	{ .i1 = { 0xc3,0x01,0xa2,0x00,0xc3,0x01,0x3e,0x00}},




	{ .i1 = { 0x38,0x00,0xc3,0x01,0xc3,0x01,0x2d,0x00}},




	{ .i1 = { 0x33,0x00,0x3a,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x34,0x00,0x36,0x00,0xdb,0x00}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0x8d,0x00,0x61,0x00}},




	{ .i1 = { 0x30,0x00,0x32,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x8c,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0x2f,0x00,0x2e,0x00,0x4b,0x00,0x31,0x00}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0xc3,0x01,0xdb,0x00,0x32,0x00}},




	{ .i1 = { 0xf9,0x01,0xc3,0x01,0x61,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x2f,0x00,0x2e,0x00}},




	{ .i1 = { 0x4b,0x00,0x31,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xd9,0x00}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x8b,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0x38,0x00,0xc3,0x01,0x7a,0x00}},




	{ .i1 = { 0x2d,0x00,0x33,0x00,0x3a,0x00,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0x34,0x00,0x36,0x00}},




	{ .i1 = { 0xdb,0x00,0x8a,0x00,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0xdb,0x00,0x7b,0x00,0xf9,0x01}},




	{ .i1 = { 0xc3,0x01,0x61,0x00,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0xdb,0x00}},




	{ .i1 = { 0xc3,0x01,0xf9,0x01,0xc3,0x01,0x61,0x00}},




	{ .i1 = { 0xdb,0x00,0xc3,0x01,0xf9,0x01,0xc3,0x01}},




	{ .i1 = { 0x61,0x00,0xc3,0x01,0xc3,0x01,0xc3,0x01}},




	{ .i1 = { 0xc3,0x01,0xc3,0x01,0xc3,0x01,0x2f,0x00}},




	{ .i1 = { 0x2e,0x00,0x4b,0x00,0x31,0x00}},
};
static data f3___main_s057d[] = {








	{ .i1 = { 0x58,0x01,0x5a,0x03,0x5c,0x45,0x46,0x07}},








	{ .i1 = { 0x49,0x09,0x6c,0x6d,0x0c,0x0d,0x0e,0x66}},








	{ .i1 = { 0x10,0x11,0x5a,0x04,0x14,0x15,0x16,0x10}},








	{ .i1 = { 0x64,0x19,0x5b,0x1b,0x1c,0x1d,0x6a,0x6b}},








	{ .i1 = { 0x11,0x21,0x22,0x11,0x24,0x25,0x08,0x27}},








	{ .i1 = { 0x28,0x29,0x2a,0x2b,0x2c,0x04,0x5b,0x11}},








	{ .i1 = { 0x12,0x79,0x7a,0x21,0x5a,0x17,0x18,0x4a}},








	{ .i1 = { 0x26,0x11,0x4d,0x3b,0x3c,0x3d,0x16,0x3f}},








	{ .i1 = { 0x40,0x6e,0x01,0x43,0x03,0x58,0x10,0x5a}},








	{ .i1 = { 0x07,0x5c,0x21,0x0a,0x48,0x0c,0x0d,0x0e}},








	{ .i1 = { 0x3e,0x10,0x11,0x79,0x7a,0x14,0x15,0x16}},








	{ .i1 = { 0x3a,0x3b,0x19,0x0b,0x1b,0x1c,0x1d,0x23}},








	{ .i1 = { 0x4a,0x4a,0x21,0x22,0x4d,0x24,0x4f,0x63}},








	{ .i1 = { 0x27,0x28,0x29,0x2a,0x2b,0x2c,0x58,0x58}},








	{ .i1 = { 0x5a,0x5a,0x5c,0x5c,0x49,0x5f,0x60,0x21}},








	{ .i1 = { 0x22,0x02,0x44,0x21,0x3b,0x3c,0x3d,0x29}},








	{ .i1 = { 0x3f,0x40,0x49,0x01,0x43,0x03,0x5b,0x49}},








	{ .i1 = { 0x11,0x07,0x55,0x56,0x0a,0x16,0x0c,0x0d}},








	{ .i1 = { 0x0e,0x41,0x10,0x11,0x5b,0x0b,0x14,0x15}},








	{ .i1 = { 0x16,0x5b,0x21,0x19,0x05,0x1b,0x1c,0x1d}},








	{ .i1 = { 0x16,0x4a,0x4a,0x21,0x22,0x4d,0x24,0x4f}},








	{ .i1 = { 0x11,0x27,0x28,0x29,0x2a,0x2b,0x2c,0x58}},








	{ .i1 = { 0x58,0x5a,0x5a,0x5c,0x5c,0x70,0x71,0x72}},








	{ .i1 = { 0x61,0x62,0x70,0x71,0x72,0x3b,0x3c,0x3d}},








	{ .i1 = { 0x0b,0x3f,0x40,0x49,0x01,0x43,0x03,0x21}},








	{ .i1 = { 0x49,0x49,0x07,0x16,0x10,0x0a,0x21,0x0c}},








	{ .i1 = { 0x0d,0x0e,0x04,0x10,0x11,0x5b,0x48,0x14}},








	{ .i1 = { 0x15,0x16,0x5b,0x5b,0x19,0x21,0x1b,0x1c}},








	{ .i1 = { 0x1d,0x04,0x4a,0x73,0x21,0x22,0x0a,0x24}},








	{ .i1 = { 0x4a,0x4a,0x27,0x28,0x29,0x2a,0x2b,0x2c}},








	{ .i1 = { 0x58,0x63,0x5a,0x06,0x5c,0x57,0x58,0x58}},








	{ .i1 = { 0x5a,0x5a,0x5c,0x5c,0x2e,0x2f,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x62,0x3f,0x40,0x00,0x01,0x43,0x03}},








	{ .i1 = { 0x02,0x49,0x2d,0x07,0x06,0x75,0x76,0x77}},








	{ .i1 = { 0x0c,0x0d,0x0e,0x08,0x10,0x11,0x59,0x5a}},








	{ .i1 = { 0x14,0x15,0x16,0x5b,0x11,0x19,0x42,0x1b}},








	{ .i1 = { 0x1c,0x1d,0x6f,0x4a,0x4a,0x21,0x22,0x4d}},








	{ .i1 = { 0x24,0x21,0x4a,0x27,0x28,0x29,0x2a,0x2b}},








	{ .i1 = { 0x2c,0x58,0x58,0x5a,0x5a,0x5c,0x5c,0x57}},








	{ .i1 = { 0x58,0x5a,0x5a,0x4a,0x5c,0x48,0x4d,0x3b}},








	{ .i1 = { 0x3c,0x3d,0x41,0x3f,0x40,0x49,0x01,0x43}},








	{ .i1 = { 0x03,0x58,0x66,0x5a,0x07,0x5c,0x75,0x76}},








	{ .i1 = { 0x77,0x0c,0x0d,0x0e,0x66,0x10,0x11,0x5b}},








	{ .i1 = { 0x63,0x14,0x15,0x16,0x10,0x64,0x19,0x6b}},








	{ .i1 = { 0x1b,0x1c,0x1d,0x6a,0x6b,0x4a,0x21,0x22}},








	{ .i1 = { 0x4a,0x24,0x5d,0x4d,0x27,0x28,0x29,0x2a}},








	{ .i1 = { 0x2b,0x2c,0x5d,0x58,0x48,0x5a,0x58,0x5c}},








	{ .i1 = { 0x5a,0x4a,0x5c,0x46,0x4d,0x10,0x11,0x0d}},








	{ .i1 = { 0x3b,0x3c,0x3d,0x5d,0x3f,0x40,0x04,0x58}},








	{ .i1 = { 0x43,0x5a,0x08,0x5c,0x6c,0x6d,0x21,0x22}},








	{ .i1 = { 0x0e,0x76,0x77,0x11,0x12,0x13,0x29,0x64}},








	{ .i1 = { 0x48,0x17,0x18,0x46,0x08,0x6a,0x6b,0x65}},








	{ .i1 = { 0x2e,0x2f,0x0e,0x59,0x5a,0x11,0x12,0x13}},








	{ .i1 = { 0x59,0x5a,0x46,0x17,0x18,0x2e,0x2f,0x46}},








	{ .i1 = { 0x65,0x4a,0x30,0x31,0x32,0x33,0x34,0x35}},








	{ .i1 = { 0x36,0x37,0x38,0x39,0x3a,0x3b,0x57,0x58}},








	{ .i1 = { 0x65,0x5a,0x46,0x5c,0x30,0x31,0x32,0x33}},








	{ .i1 = { 0x34,0x35,0x36,0x37,0x38,0x39,0x3a,0x3b}},








	{ .i1 = { 0x47,0x11,0x4a,0x4a,0x4b,0x4c,0x16,0x54}},








	{ .i1 = { 0x46,0x50,0x51,0x52,0x53,0x4a,0x46,0x57}},








	{ .i1 = { 0x58,0x58,0x5a,0x5a,0x5c,0x5c,0x20,0x5e}},








	{ .i1 = { 0x20,0x4e,0x57,0x58,0x46,0x5a,0x46,0x5c}},








	{ .i1 = { 0x1a,0x68,0x69,0x2d,0x06,0x2d,0x06,0x2d}},








	{ .i1 = { 0x11,0x16,0x16,0x47,0x1f,0x74,0x4a,0x4b}},








	{ .i1 = { 0x4c,0x78,0x04,0x10,0x50,0x51,0x52,0x53}},








	{ .i1 = { 0x06,0x14,0x0a,0x19,0x58,0x41,0x5a,0x19}},








	{ .i1 = { 0x5c,0x4a,0x5e,0x16,0x47,0x06,0x2d,0x4a}},








	{ .i1 = { 0x4b,0x4c,0x16,0x04,0x68,0x69,0x57,0x58}},








	{ .i1 = { 0x53,0x5a,0x06,0x5c,0x04,0x58,0x10,0x5a}},








	{ .i1 = { 0x74,0x5c,0x4a,0x5e,0x78,0x47,0x08,0x29}},








	{ .i1 = { 0x4a,0x4b,0x4c,0x19,0x67,0x68,0x69,0x11}},








	{ .i1 = { 0x58,0x53,0x5a,0x16,0x5c,0x16,0x58,0x02}},








	{ .i1 = { 0x5a,0x74,0x5c,0x16,0x5e,0x78,0x47,0x16}},








	{ .i1 = { 0x41,0x4a,0x4b,0x4c,0x21,0x67,0x68,0x69}},








	{ .i1 = { 0x02,0x04,0x53,0x40,0x16,0x2d,0x0c,0x58}},








	{ .i1 = { 0x16,0x5a,0x74,0x5c,0x0a,0x5e,0x78,0x4a}},








	{ .i1 = { 0x3a,0x3b,0x4a,0x1a,0x2f,0x16,0x67,0x68}},








	{ .i1 = { 0x69,0x0e,0x0d,0x10,0x11,0x58,0x0d,0x5a}},








	{ .i1 = { 0x58,0x5c,0x5a,0x74,0x5c,0x60,0x1b,0x78}},








	{ .i1 = { 0x05,0x04,0x1f,0x10,0x21,0x22,0x2d,0x24}},








	{ .i1 = { 0x3b,0x21,0x10,0x28,0x29,0x08,0x0e,0x0f}},








	{ .i1 = { 0x10,0x11,0x16,0x0e,0x7b,0x7b,0x11,0x12}},








	{ .i1 = { 0x13,0x7b,0x7b,0x1b,0x17,0x18,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x21,0x22,0x7b,0x24,0x7b,0x43,0x04}},








	{ .i1 = { 0x28,0x29,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x0e,0x7b,0x10,0x11,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x3b,0x3c,0x3d,0x1b,0x3a}},








	{ .i1 = { 0x3b,0x7b,0x7b,0x43,0x21,0x22,0x7b,0x24}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x28,0x29,0x7b,0x7b,0x09}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x7b,0x0e,0x7b,0x10,0x11}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x4a,0x7b,0x7b,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x1b,0x7b,0x4a,0x7b,0x7b,0x43,0x21}},








	{ .i1 = { 0x22,0x58,0x24,0x5a,0x7b,0x5c,0x28,0x29}},








	{ .i1 = { 0x05,0x58,0x7b,0x5a,0x7b,0x5c,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x0e,0x7b,0x10,0x11,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x3b,0x3c,0x3d,0x7b,0x7b,0x1b,0x4a}},








	{ .i1 = { 0x7b,0x43,0x7b,0x7b,0x21,0x22,0x04,0x24}},








	{ .i1 = { 0x7b,0x7b,0x08,0x28,0x29,0x58,0x7b,0x5a}},








	{ .i1 = { 0x0e,0x5c,0x7b,0x11,0x12,0x13,0x7b,0x4a}},








	{ .i1 = { 0x7b,0x17,0x18,0x7b,0x7b,0x7b,0x3b,0x3c}},








	{ .i1 = { 0x3d,0x7b,0x7b,0x7b,0x7b,0x58,0x43,0x5a}},








	{ .i1 = { 0x7b,0x5c,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x4a,0x7b,0x30,0x31,0x7b,0x7b,0x4a,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x38,0x39,0x3a,0x3b,0x58,0x7b}},








	{ .i1 = { 0x5a,0x7b,0x5c,0x08,0x58,0x7b,0x5a,0x7b}},








	{ .i1 = { 0x5c,0x0e,0x4a,0x7b,0x11,0x12,0x13,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x17,0x18,0x7b,0x08,0x7b,0x7b}},








	{ .i1 = { 0x58,0x7b,0x5a,0x0e,0x5c,0x7b,0x11,0x12}},








	{ .i1 = { 0x13,0x7b,0x7b,0x16,0x17,0x18,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x4a,0x7b,0x30,0x31,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x4a,0x4a,0x38,0x39,0x3a,0x3b,0x58}},








	{ .i1 = { 0x7b,0x5a,0x7b,0x5c,0x41,0x30,0x31,0x58}},








	{ .i1 = { 0x58,0x5a,0x5a,0x5c,0x5c,0x38,0x39,0x3a}},








	{ .i1 = { 0x3b,0x02,0x7b,0x7b,0x7b,0x7b,0x7b,0x08}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x7b,0x4a,0x0e,0x7b,0x7b}},








	{ .i1 = { 0x11,0x12,0x13,0x7b,0x7b,0x7b,0x17,0x18}},








	{ .i1 = { 0x7b,0x08,0x58,0x7b,0x5a,0x7b,0x5c,0x0e}},








	{ .i1 = { 0x7b,0x7b,0x11,0x12,0x13,0x7b,0x7b,0x16}},








	{ .i1 = { 0x17,0x18,0x7b,0x7b,0x7b,0x7b,0x4a,0x30}},








	{ .i1 = { 0x31,0x7b,0x7b,0x7b,0x7b,0x4a,0x4a,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x7b,0x58,0x7b,0x5a,0x7b}},








	{ .i1 = { 0x5c,0x30,0x31,0x58,0x58,0x5a,0x5a,0x5c}},








	{ .i1 = { 0x5c,0x38,0x39,0x3a,0x3b,0x7b,0x7b,0x05}},








	{ .i1 = { 0x7b,0x7b,0x08,0x7b,0x7b,0x7b,0x7b,0x4a}},








	{ .i1 = { 0x0e,0x7b,0x7b,0x11,0x12,0x13,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x17,0x18,0x05,0x7b,0x58,0x08,0x5a}},








	{ .i1 = { 0x7b,0x5c,0x7b,0x7b,0x0e,0x7b,0x4a,0x11}},








	{ .i1 = { 0x12,0x13,0x7b,0x7b,0x7b,0x17,0x18,0x7b}},








	{ .i1 = { 0x7b,0x4a,0x30,0x31,0x58,0x7b,0x5a,0x7b}},








	{ .i1 = { 0x5c,0x7b,0x38,0x39,0x3a,0x3b,0x7b,0x58}},








	{ .i1 = { 0x7b,0x5a,0x7b,0x5c,0x7b,0x7b,0x30,0x31}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x38,0x39}},








	{ .i1 = { 0x3a,0x3b,0x7b,0x7b,0x7b,0x7b,0x0e,0x08}},








	{ .i1 = { 0x10,0x11,0x7b,0x7b,0x7b,0x0e,0x7b,0x7b}},








	{ .i1 = { 0x11,0x12,0x13,0x1b,0x4a,0x16,0x17,0x18}},








	{ .i1 = { 0x7b,0x21,0x22,0x7b,0x24,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x28,0x29,0x58,0x7b,0x5a,0x7b,0x5c,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x30}},








	{ .i1 = { 0x31,0x7b,0x7b,0x3b,0x3c,0x3d,0x4a,0x38}},








	{ .i1 = { 0x39,0x3a,0x3b,0x43,0x7b,0x7b,0x47,0x7b}},








	{ .i1 = { 0x7b,0x4a,0x4b,0x4c,0x58,0x7b,0x5a,0x7b}},








	{ .i1 = { 0x5c,0x7b,0x53,0x4a,0x7b,0x7b,0x7b,0x58}},








	{ .i1 = { 0x7b,0x5a,0x7b,0x5c,0x7b,0x5e,0x7b,0x7b}},








	{ .i1 = { 0x08,0x58,0x7b,0x5a,0x7b,0x5c,0x0e,0x68}},








	{ .i1 = { 0x69,0x11,0x12,0x13,0x7b,0x7b,0x7b,0x17}},








	{ .i1 = { 0x18,0x7b,0x08,0x74,0x7b,0x4a,0x7b,0x78}},








	{ .i1 = { 0x0e,0x7b,0x7b,0x11,0x12,0x13,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x17,0x18,0x58,0x7b,0x5a,0x4a,0x5c}},








	{ .i1 = { 0x30,0x31,0x7b,0x7b,0x4a,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x38,0x39,0x3a,0x3b,0x58,0x7b,0x5a,0x7b}},








	{ .i1 = { 0x5c,0x7b,0x58,0x31,0x5a,0x7b,0x5c,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x38,0x39,0x3a,0x3b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x08,0x7b,0x7b,0x4a,0x7b}},








	{ .i1 = { 0x7b,0x0e,0x7b,0x4a,0x11,0x12,0x13,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x17,0x18,0x58,0x4a,0x5a,0x7b}},








	{ .i1 = { 0x5c,0x58,0x4a,0x5a,0x7b,0x5c,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x58,0x7b,0x5a,0x7b,0x5c}},








	{ .i1 = { 0x58,0x7b,0x5a,0x7b,0x5c,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x38,0x39,0x3a,0x3b,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b,0x7b}},








	{ .i1 = { 0x7b,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},








	{ .i1 = { 0x45,0x45,0x45,0x45,0x45,0x45,0x45,0x45}},





	{ .i1 = { 0x45,0x45,0x45,0x45}},
};
static data f3___main_s057e[] = {




	{ .i1 = { 0xf7,0x04,0x00,0x00,0x00,0x00,0x41,0x00}},




	{ .i1 = { 0x41,0x00,0x41,0x00,0x82,0x00,0xc3,0x00}},




	{ .i1 = { 0x04,0x01,0x45,0x01,0x45,0x01,0x5b,0x02}},




	{ .i1 = { 0x5b,0x02,0x78,0x02,0x5b,0x02,0x78,0x02}},




	{ .i1 = { 0x9b,0x02,0x18,0x04,0xbe,0x02,0x78,0x02}},




	{ .i1 = { 0x78,0x02,0x78,0x02,0x78,0x02,0x78,0x02}},




	{ .i1 = { 0xe3,0x02,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x18,0x04,0x18,0x04,0x18,0x04,0x18,0x04}},




	{ .i1 = { 0x6d,0x01,0x56,0x00,0x56,0x00,0x36,0x00}},




	{ .i1 = { 0x5a,0x00,0x5a,0x00,0x07,0x00,0x07,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x12,0x00,0x12,0x00,0x12,0x00}},




	{ .i1 = { 0x12,0x00,0x29,0x00,0xdc,0x00,0xbc,0x00}},




	{ .i1 = { 0xbc,0x00,0xbc,0x00,0x79,0x00,0xa6,0x00}},




	{ .i1 = { 0xad,0x00,0xa6,0x00,0xa6,0x00,0x50,0x00}},




	{ .i1 = { 0x3c,0x00,0xed,0x00,0x08,0x01,0x01,0x01}},




	{ .i1 = { 0x01,0x01,0x07,0x00,0x4c,0x01,0x4c,0x01}},




	{ .i1 = { 0xa6,0x00,0x4c,0x01,0xa6,0x00,0xf7,0x04}},




	{ .i1 = { 0xf7,0x04,0xf7,0x04,0xf7,0x04,0xf7,0x04}},




	{ .i1 = { 0xf7,0x04,0xf7,0x04,0xf7,0x04,0xf7,0x04}},




	{ .i1 = { 0xf7,0x04,0xf7,0x04,0xf7,0x04,0xf7,0x04}},




	{ .i1 = { 0xf7,0x04,0x82,0x01,0x94,0x01,0x02,0x03}},




	{ .i1 = { 0x3b,0x03,0x4d,0x03,0x87,0x03,0x99,0x03}},




	{ .i1 = { 0xd2,0x03,0xe6,0x03,0x02,0x03,0x1f,0x04}},




	{ .i1 = { 0x70,0x04,0x70,0x04,0x70,0x04,0x70,0x04}},




	{ .i1 = { 0x70,0x04,0x70,0x04,0x70,0x04,0x70,0x04}},




	{ .i1 = { 0x70,0x04,0x70,0x04,0x82,0x04,0xbb,0x04}},




	{ .i1 = { 0x7d,0x02,0x7d,0x02,0x1e,0x00,0x1e,0x00}},




	{ .i1 = { 0x1e,0x00,0x26,0x02,0x26,0x02,0x26,0x02}},




	{ .i1 = { 0xce,0x00,0x72,0x01,0x77,0x00,0x7f,0x01}},




	{ .i1 = { 0xc6,0x01,0xc8,0x01,0x28,0x00,0x8a,0x00}},




	{ .i1 = { 0xb5,0x00,0xc0,0x01,0x0f,0x00,0x97,0x00}},




	{ .i1 = { 0xdd,0x00,0x0b,0x01,0x0b,0x01,0x0b,0x01}},




	{ .i1 = { 0x0b,0x01,0x0b,0x01,0x0b,0x01,0x06,0x01}},




	{ .i1 = { 0xd6,0x01,0xee,0x01,0xf0,0x01,0xe7,0x01}},




	{ .i1 = { 0xca,0x01,0xe3,0x01,0xe4,0x01,0xdd,0x01}},




	{ .i1 = { 0xe7,0x01,0xfe,0x01,0xf3,0x01,0x02,0x02}},




	{ .i1 = { 0xf5,0x01,0x00,0x02,0xcc,0x01,0xf2,0x01}},




	{ .i1 = { 0xf6,0x01,0xfd,0x01,0x04,0x02,0xe7,0x01}},




	{ .i1 = { 0x0f,0x02,0xe9,0x01,0x17,0x02,0x1c,0x02}},




	{ .i1 = { 0x20,0x02,0x06,0x02,0x16,0x02,0x1a,0x02}},




	{ .i1 = { 0x25,0x02,0x27,0x02,0x3d,0x02,0x2d,0x02}},




	{ .i1 = { 0x07,0x02,0x2b,0x02,0x31,0x02,0x4e,0x02}},




	{ .i1 = { 0x4d,0x02,0x28,0x02,0x3e,0x02,0x13,0x02}},




	{ .i1 = { 0x4a,0x02,0x52,0x02,0x49,0x02,0x42,0x02}},




	{ .i1 = { 0x4f,0x02,0x35,0x02,0x5d,0x02,0x61,0x02}},




	{ .i1 = { 0x73,0x02,0x75,0x02,0x51,0x02,0x6b,0x02}},




	{ .i1 = { 0x45,0x02,0x60,0x02,0xe7,0x01,0x72,0x02}},


	{ .i1 = { 0x74,0x02}},
};
static data f3___main_s057f[] = {




	{ .i1 = { 0xc0,0xff,0x89,0x01,0xb4,0x01,0xcd,0x01}},




	{ .i1 = { 0xe6,0x01,0xff,0x01,0x17,0x04,0x17,0x04}},




	{ .i1 = { 0x17,0x04,0x17,0x04,0x17,0x04,0x98,0x00}},




	{ .i1 = { 0xd9,0x00,0x17,0x00,0x1b,0x01,0x58,0x00}},




	{ .i1 = { 0x16,0x00,0x57,0x00,0x9e,0x00,0xed,0xff}},




	{ .i1 = { 0xda,0x00,0xf1,0x00,0x1e,0x01,0x2f,0x01}},




	{ .i1 = { 0xe0,0x00,0x67,0x01,0x88,0x01,0x9f,0x00}},




	{ .i1 = { 0x93,0x01,0x15,0x02,0xc7,0x01,0xe0,0x01}},




	{ .i1 = { 0x18,0x02,0x89,0x02,0x91,0x02,0xb5,0x02}},




	{ .i1 = { 0xcd,0x02,0xe6,0x02,0xec,0x02,0x00,0x03}},




	{ .i1 = { 0x1f,0x03,0x27,0x03,0x28,0x03,0x4a,0x03}},




	{ .i1 = { 0x6c,0x03,0x73,0x03,0x74,0x03,0x95,0x03}},




	{ .i1 = { 0xac,0x03,0xb7,0x03,0xea,0x03,0x0c,0x04}},




	{ .i1 = { 0x21,0x04,0x43,0x04,0x54,0x04,0x5a,0x04}},




	{ .i1 = { 0x7c,0x04,0x81,0x04,0x8b,0x04,0x90,0x04}},




	{ .i1 = { 0xa8,0xff,0xb8,0xff,0xda,0xff,0xb4,0xff}},




	{ .i1 = { 0x45,0x00,0x4a,0x00,0xf9,0x00,0x33,0x01}},




	{ .i1 = { 0xbf,0xff,0x2b,0x00,0x39,0x00,0x3e,0x00}},




	{ .i1 = { 0x7a,0x00,0x7f,0x00,0x80,0x00,0xc0,0x00}},




	{ .i1 = { 0xfc,0x00,0x9e,0xff,0x35,0x00,0xbd,0x00}},




	{ .i1 = { 0x4a,0x01,0x4f,0x01,0xd3,0xff,0x04,0x00}},




	{ .i1 = { 0x20,0x01,0x8e,0x00,0xf5,0x00,0xa9,0xff}},




	{ .i1 = { 0x70,0x00,0xb3,0x00,0xdf,0x00,0xe4,0x00}},




	{ .i1 = { 0xee,0x00,0xf4,0x00,0x0d,0x01,0x15,0x01}},




	{ .i1 = { 0x2c,0x01,0x26,0x01,0x50,0x01,0x35,0x01}},




	{ .i1 = { 0x55,0x01,0x3a,0x01,0x64,0x01,0x4b,0x01}},




	{ .i1 = { 0x69,0x01,0x5b,0x01,0x7c,0x01,0x83,0x01}},




	{ .i1 = { 0x92,0x01,0x98,0x01,0x9b,0x01,0xa6,0x01}},


	{ .i1 = { 0xa8,0x01}},
};
static data f3___main_s0580[] = {




	{ .i1 = { 0x3a,0x02,0xd2,0x01,0xd2,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0x41,0x02,0x3d,0x02,0x4c,0x02}},




	{ .i1 = { 0x4c,0x02,0xc1,0x01,0x4c,0x02,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0x30,0x02}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0x48,0x02,0x48,0x02,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0x2c,0x02,0x47,0x02,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0x3a,0x02}},




	{ .i1 = { 0x3a,0x02,0x46,0x02,0x3a,0x02,0x46,0x02}},




	{ .i1 = { 0x3a,0x02,0x46,0x02,0x3a,0x02,0x3f,0x02}},




	{ .i1 = { 0x3a,0x02,0x3a,0x02,0xd0,0x01,0x3a,0x02}},




	{ .i1 = { 0x3a,0x02,0xc1,0x01,0xc1,0x01,0x18,0x02}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0x31,0x02,0x18,0x02,0xe2,0x01,0xe1,0x01}},




	{ .i1 = { 0xe0,0x01,0xdf,0x01,0xde,0x01,0xdd,0x01}},




	{ .i1 = { 0x14,0x02,0xfe,0x01,0xef,0x01,0xed,0x01}},




	{ .i1 = { 0xf1,0x01,0xf0,0x01,0xe8,0x01,0xe9,0x01}},




	{ .i1 = { 0xe6,0x01,0xea,0x01,0xec,0x01,0xeb,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xd1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xf6,0x01,0xf5,0x01,0xf4,0x01}},




	{ .i1 = { 0xf3,0x01,0xee,0x01,0xe7,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0x1a,0x02}},




	{ .i1 = { 0x4d,0x02,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0x2a,0x02,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0x27,0x02}},




	{ .i1 = { 0xc1,0x01,0x25,0x02,0xc1,0x01,0x20,0x02}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0x0c,0x02}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0x17,0x02,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xdb,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xc1,0x01,0xc1,0x01}},




	{ .i1 = { 0xc1,0x01,0xc1,0x01,0xf2,0x01,0xe5,0x01}},


	{ .i1 = { 0xc1,0x01}},
};
const i1 c02_s0120[] = { 0x24,0 };
const i1 c02_s0121[] = { 0x41,0x53,0x4d,0 };
const i1 c02_s0122[] = { 0x41,0x53,0x53,0x49,0x47,0x4e,0 };
const i1 c02_s0123[] = { 0x42,0x52,0x45,0x41,0x4b,0 };
const i1 c02_s0124[] = { 0x43,0x4c,0x4f,0x53,0x45,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0125[] = { 0x43,0x4c,0x4f,0x53,0x45,0x53,0x51,0 };
const i1 c02_s0126[] = { 0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0127[] = { 0x43,0x4f,0x4e,0x53,0x54,0 };
const i1 c02_s0128[] = { 0x44,0x4f,0x54,0 };
const i1 c02_s0129[] = { 0x45,0x4c,0x53,0x45,0 };
const i1 c02_s012a[] = { 0x45,0x4e,0x44,0 };
const i1 c02_s012b[] = { 0x45,0x58,0x54,0x45,0x52,0x4e,0 };
const i1 c02_s012c[] = { 0x49,0x46,0 };
const i1 c02_s012d[] = { 0x4c,0x4f,0x4f,0x50,0 };
const i1 c02_s012e[] = { 0x4d,0x49,0x4e,0x55,0x53,0 };
const i1 c02_s012f[] = { 0x4e,0x4f,0x54,0 };
const i1 c02_s0130[] = { 0x4f,0x50,0x45,0x4e,0x50,0x41,0x52,0x45,0x4e,0 };
const i1 c02_s0131[] = { 0x4f,0x50,0x45,0x4e,0x53,0x51,0 };
const i1 c02_s0132[] = { 0x50,0x45,0x52,0x43,0x45,0x4e,0x54,0 };
const i1 c02_s0133[] = { 0x50,0x4c,0x55,0x53,0 };
const i1 c02_s0134[] = { 0x52,0x45,0x43,0x4f,0x52,0x44,0 };
const i1 c02_s0135[] = { 0x52,0x45,0x54,0x55,0x52,0x4e,0 };
const i1 c02_s0136[] = { 0x53,0x45,0x4d,0x49,0x43,0x4f,0x4c,0x4f,0x4e,0 };
const i1 c02_s0137[] = { 0x53,0x4c,0x41,0x53,0x48,0 };
const i1 c02_s0138[] = { 0x53,0x54,0x41,0x52,0 };
const i1 c02_s0139[] = { 0x53,0x55,0x42,0 };
const i1 c02_s013a[] = { 0x54,0x48,0x45,0x4e,0 };
const i1 c02_s013b[] = { 0x54,0x49,0x4c,0x44,0x45,0 };
const i1 c02_s013c[] = { 0x56,0x41,0x52,0 };
const i1 c02_s013d[] = { 0x57,0x48,0x49,0x4c,0x45,0 };
const i1 c02_s013e[] = { 0x54,0x59,0x50,0x45,0 };
const i1 c02_s013f[] = { 0x4f,0x50,0x45,0x4e,0x42,0x52,0 };
const i1 c02_s0140[] = { 0x43,0x4c,0x4f,0x53,0x45,0x42,0x52,0 };
const i1 c02_s0141[] = { 0x49,0x44,0 };
const i1 c02_s0142[] = { 0x4e,0x55,0x4d,0x42,0x45,0x52,0 };
const i1 c02_s0143[] = { 0x41,0x54,0 };
const i1 c02_s0144[] = { 0x42,0x59,0x54,0x45,0x53,0x4f,0x46,0 };
const i1 c02_s0145[] = { 0x45,0x4c,0x53,0x45,0x49,0x46,0 };
const i1 c02_s0146[] = { 0x49,0x4e,0x54,0 };
const i1 c02_s0147[] = { 0x54,0x59,0x50,0x45,0x44,0x45,0x46,0 };
const i1 c02_s0148[] = { 0x53,0x49,0x5a,0x45,0x4f,0x46,0 };
const i1 c02_s0149[] = { 0x53,0x54,0x52,0x49,0x4e,0x47,0 };
const i1 c02_s014a[] = { 0x49,0x4d,0x50,0x4c,0 };
const i1 c02_s014b[] = { 0x44,0x45,0x43,0x4c,0 };
const i1 c02_s014c[] = { 0x49,0x4e,0x54,0x45,0x52,0x46,0x41,0x43,0x45,0 };
const i1 c02_s014d[] = { 0x43,0x4f,0x4d,0x4d,0x41,0 };
const i1 c02_s014e[] = { 0x41,0x4e,0x44,0 };
const i1 c02_s014f[] = { 0x4f,0x52,0 };
const i1 c02_s0150[] = { 0x50,0x49,0x50,0x45,0 };
const i1 c02_s0151[] = { 0x43,0x41,0x52,0x45,0x54,0 };
const i1 c02_s0152[] = { 0x4c,0x54,0x4f,0x50,0 };
const i1 c02_s0153[] = { 0x4c,0x45,0x4f,0x50,0 };
const i1 c02_s0154[] = { 0x47,0x54,0x4f,0x50,0 };
const i1 c02_s0155[] = { 0x47,0x45,0x4f,0x50,0 };
const i1 c02_s0156[] = { 0x45,0x51,0x4f,0x50,0 };
const i1 c02_s0157[] = { 0x4e,0x45,0x4f,0x50,0 };
const i1 c02_s0158[] = { 0x4c,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s0159[] = { 0x52,0x53,0x48,0x49,0x46,0x54,0 };
const i1 c02_s015a[] = { 0x41,0x53,0 };
const i1 c02_s015b[] = { 0x41,0x4d,0x50,0x45,0x52,0x53,0x41,0x4e,0x44,0 };
const i1 c02_s015c[] = { 0x4e,0x45,0x58,0x54,0 };
const i1 c02_s015d[] = { 0x50,0x52,0x45,0x56,0 };
const i1 c02_s015e[] = { 0x49,0x4e,0x44,0x45,0x58,0x4f,0x46,0 };
const i1 c02_s015f[] = { 0x43,0x4f,0x4e,0x54,0x49,0x4e,0x55,0x45,0 };
const i1 c02_s0160[] = { 0x43,0x41,0x53,0x45,0 };
const i1 c02_s0161[] = { 0x49,0x53,0 };
const i1 c02_s0162[] = { 0x57,0x48,0x45,0x4e,0 };
const i1 c02_s0163[] = { 0x41,0x4c,0x49,0x41,0x53,0 };
const i1 c02_s0164[] = { 0x49,0x4d,0x50,0x4c,0x45,0x4d,0x45,0x4e,0x54,0x53,0 };
static data f3___main_s0581[] = {

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

	{ .ptr = (void*)c02_s0161 },

	{ .ptr = (void*)c02_s0162 },

	{ .ptr = (void*)c02_s0163 },

	{ .ptr = (void*)c02_s0164 },

};
const i1 c02_s0165[] = { 0x66,0x72,0x65,0x65,0x20,0x75,0x6e,0x75,0x73,0x65,0x64,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f33_Free(i8 /* block */);

// token_destructor workspace at ws+3392 length ws+0
void f295_token_destructor(void) {

	i8 v6891 = (i8)(intptr_t)(ws+3376);
	i1 v6892 = *(i1*)(intptr_t)v6891;
	i1 v6893 = (i1)+41;
	if (v6892==v6893) goto c02_0587; else goto c02_0589;

c02_0589:;

	i8 v6894 = (i8)(intptr_t)(ws+3376);
	i1 v6895 = *(i1*)(intptr_t)v6894;
	i1 v6896 = (i1)+33;
	if (v6895==v6896) goto c02_0587; else goto c02_0588;

c02_0587:;

	i8 v6897 = (i8)(intptr_t)c02_s0165;
	i8 v6898 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6898)(v6897);

	i8 v6899 = (i8)(intptr_t)(ws+3384);
	i8 v6900 = *(i8*)(intptr_t)v6899;
	i8 v6901 = *(i8*)(intptr_t)v6900;
	i8 v6902 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6902)(v6901);

c02_0588:;

c02_0582:;

endsub:;
}
	void f295_token_destructor(void);

// yy_destructor workspace at ws+3376 length ws+16
void f294_yy_destructor(i8 p6889 /* yypminor */, i1 p6890 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3376) = p6890; /*yymajor */
	*(i8*)(intptr_t)(ws+3384) = p6889; /*yypminor */


	i8 v6903 = (i8)(intptr_t)(ws+3376);
	i1 v6904 = *(i1*)(intptr_t)v6903;
	i1 v6905 = (i1)+0;
	if (v6904==v6905) goto c02_0590; else goto c02_0591;

c02_0591:;

	i8 v6906 = (i8)(intptr_t)(ws+3376);
	i1 v6907 = *(i1*)(intptr_t)v6906;
	i1 v6908 = (i1)+69;
	if (v6907<v6908) goto c02_058f; else goto c02_0590;

c02_058f:;

	i8 v6909 = (i8)(intptr_t)(f295_token_destructor);

	((void(*)(void))(intptr_t)v6909)();

c02_0590:;

c02_058a:;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3328 length ws+0
void f296_yy_pop_parser_stack(void) {

	i8 v6910 = (i8)(intptr_t)(ws+1568);
	i8 v6911 = *(i8*)(intptr_t)v6910;
	i8 v6912 = v6911+(-16);
	i8 v6913 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v6913 = v6912;

	i8 v6914 = (i8)(intptr_t)(ws+1568);
	i8 v6915 = *(i8*)(intptr_t)v6914;
	i8 v6916 = v6915+(+2);
	i1 v6917 = *(i1*)(intptr_t)v6916;
	i8 v6918 = (i8)(intptr_t)(ws+1568);
	i8 v6919 = *(i8*)(intptr_t)v6918;
	i8 v6920 = v6919+(+8);
	i8 v6921 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v6921)(v6920, v6917);

endsub:;
}
	void f296_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3328 length ws+0
void f297_yy_pop_all_parser_stack(void) {

c02_0594:;

	i8 v6922 = (i8)(intptr_t)(ws+1568);
	i8 v6923 = *(i8*)(intptr_t)v6922;
	i8 v6924 = (i8)(intptr_t)(ws+1576);
	if (v6923==v6924) goto c02_0597; else goto c02_0596;

c02_0596:;

	i8 v6925 = (i8)(intptr_t)(f296_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v6925)();

	goto c02_0594;

c02_0597:;

endsub:;
}
	void f297_yy_pop_all_parser_stack(void);
	void f69_StartError(void);
const i1 c02_s0166[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// yy_stack_overflow workspace at ws+3328 length ws+0
void f298_yy_stack_overflow(void) {

	i8 v6926 = (i8)(intptr_t)(f297_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v6926)();

	i8 v6927 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6927)();

	i8 v6928 = (i8)(intptr_t)c02_s0166;
	i8 v6929 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6929)(v6928);

	i8 v6930 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6930)();

endsub:;
}
static data f3___main_s0598[] = {








	{ .i1 = { 0x47,0x47,0x47,0x47,0x47,0x47,0x4b,0x47}},








	{ .i1 = { 0x4c,0x47,0x47,0x47,0x4e,0x4f,0x50,0x51}},








	{ .i1 = { 0x52,0x47,0x53,0x56,0x56,0x4d,0x4d,0x4d}},








	{ .i1 = { 0x4d,0x4d,0x4d,0x4d,0x4d,0x4d,0x4d,0x58}},








	{ .i1 = { 0x58,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a,0x4a}},








	{ .i1 = { 0x4a,0x4a,0x4a,0x4a,0x4a,0x58,0x58,0x4a}},








	{ .i1 = { 0x4a,0x58,0x57,0x47,0x49,0x49,0x49,0x49}},








	{ .i1 = { 0x49,0x49,0x47,0x48,0x5a,0x5b,0x59,0x59}},








	{ .i1 = { 0x4a,0x47,0x47,0x5c,0x5d,0x5d,0x5f,0x5f}},








	{ .i1 = { 0x60,0x5e,0x61,0x61,0x62,0x47,0x69,0x65}},








	{ .i1 = { 0x63,0x68,0x66,0x67,0x64,0x64,0x6a,0x6b}},








	{ .i1 = { 0x6b,0x6c,0x6c,0x6d,0x47,0x6e,0x6f,0x71}},








	{ .i1 = { 0x73,0x73,0x72,0x47,0x74,0x76,0x76,0x77}},








	{ .i1 = { 0x47,0x78,0x7a,0x7a,0x7a,0x45,0x46,0x46}},








	{ .i1 = { 0x47,0x50,0x50,0x54,0x54,0x55,0x47,0x47}},








	{ .i1 = { 0x47,0x47,0x65,0x6f,0x70,0x70,0x75,0x75}},




	{ .i1 = { 0x76,0x79,0x79}},
};
static data f3___main_s0599[] = {








	{ .i1 = { 0x02,0x05,0x07,0x05,0x04,0x04,0x01,0x04}},








	{ .i1 = { 0x03,0x02,0x02,0x08,0x00,0x01,0x00,0x01}},








	{ .i1 = { 0x01,0x05,0x03,0x03,0x03,0x03,0x02,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x01}},








	{ .i1 = { 0x03,0x01,0x02,0x02,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x02}},








	{ .i1 = { 0x03,0x02,0x02,0x02,0x02,0x01,0x03,0x04}},








	{ .i1 = { 0x03,0x01,0x01,0x05,0x06,0x01,0x03,0x04}},








	{ .i1 = { 0x03,0x02,0x05,0x01,0x01,0x01,0x01,0x03}},








	{ .i1 = { 0x02,0x03,0x05,0x01,0x03,0x02,0x01,0x03}},








	{ .i1 = { 0x01,0x05,0x01,0x03,0x01,0x05,0x04,0x05}},








	{ .i1 = { 0x01,0x03,0x01,0x02,0x01,0x03,0x01,0x02}},








	{ .i1 = { 0x03,0x01,0x03,0x03,0x07,0x01,0x02,0x05}},








	{ .i1 = { 0x00,0x04,0x01,0x05,0x05,0x01,0x03,0x01}},








	{ .i1 = { 0x03,0x01,0x01,0x01,0x01,0x01,0x00,0x02}},








	{ .i1 = { 0x01,0x02,0x05,0x00,0x02,0x02,0x08,0x06}},








	{ .i1 = { 0x05,0x05,0x00,0x00,0x00,0x02,0x01,0x03}},




	{ .i1 = { 0x00,0x01,0x03}},
};
	void f298_yy_stack_overflow(void);

// Reducer workspace at ws+3328 length ws+0
void f301_Reducer(void) {

endsub:;
}
	void f125_MidReturn(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3328 length ws+0
void f302_reduce_0(void) {

	i8 v6996 = (i8)(intptr_t)(f125_MidReturn);
	i8 v6997;

	((void(*)(i8* /* m */))(intptr_t)v6996)(&v6997);
	i8 v6998 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6998)(v6997);

	i1 v6999 = (i1)+22;
	i8 v7000 = (i8)(intptr_t)(ws+3248);
	i8 v7001 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7001)(v7000, v6999);

endsub:;
}
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3328 length ws+0
void f303_reduce_1(void) {

	i8 v7002 = (i8)(intptr_t)(ws+40);
	i8 v7003 = *(i8*)(intptr_t)v7002;
	i8 v7004 = (i8)(intptr_t)(ws+3272);
	i8 v7005 = *(i8*)(intptr_t)v7004;
	i8 v7006 = (i8)(intptr_t)(ws+3256);
	i8 v7007 = *(i8*)(intptr_t)v7006;
	i8 v7008 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7008)(v7007, v7005, v7003);

	i1 v7009 = (i1)+6;
	i8 v7010 = (i8)(intptr_t)(ws+3264);
	i8 v7011 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7011)(v7010, v7009);

	i1 v7012 = (i1)+22;
	i8 v7013 = (i8)(intptr_t)(ws+3248);
	i8 v7014 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7014)(v7013, v7012);

endsub:;
}
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f148_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f110_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3328 length ws+0
void f304_reduce_2(void) {

	i8 v7015 = (i8)(intptr_t)(ws+40);
	i8 v7016 = *(i8*)(intptr_t)v7015;
	i8 v7017 = (i8)(intptr_t)(ws+3288);
	i8 v7018 = *(i8*)(intptr_t)v7017;
	i8 v7019 = (i8)(intptr_t)(ws+3272);
	i8 v7020 = *(i8*)(intptr_t)v7019;
	i8 v7021 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7021)(v7020, v7018, v7016);

	i8 v7022 = (i8)(intptr_t)(ws+3256);
	i8 v7023 = *(i8*)(intptr_t)v7022;
	i8 v7024 = (i8)(intptr_t)(ws+3288);
	i8 v7025 = *(i8*)(intptr_t)v7024;
	i8 v7026 = *(i8*)(intptr_t)v7025;
	i8 v7027 = *(i8*)(intptr_t)v7026;
	i8 v7028 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7028)(v7027, v7023);

	i8 v7029 = (i8)(intptr_t)(ws+3256);
	i8 v7030 = *(i8*)(intptr_t)v7029;
	i8 v7031 = v7030+(+16);
	i8 v7032 = *(i8*)(intptr_t)v7031;
	i8 v7033 = v7032+(+48);
	i2 v7034 = *(i2*)(intptr_t)v7033;
	i1 v7035 = v7034;
	i8 v7036 = (i8)(intptr_t)(ws+3256);
	i8 v7037 = *(i8*)(intptr_t)v7036;
	i8 v7038 = (i8)(intptr_t)(ws+3288);
	i8 v7039 = *(i8*)(intptr_t)v7038;
	i2 v7040 = (i2)+0;
	i8 v7041 = (i8)(intptr_t)(f148_MidAddress);
	i8 v7042;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7041)(&v7042, v7040, v7039);
	i8 v7043 = (i8)(intptr_t)(f110_MidStore);
	i8 v7044;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7043)(&v7044, v7042, v7037, v7035);
	i8 v7045 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7045)(v7044);

	i1 v7046 = (i1)+6;
	i8 v7047 = (i8)(intptr_t)(ws+3280);
	i8 v7048 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7048)(v7047, v7046);

	i1 v7049 = (i1)+2;
	i8 v7050 = (i8)(intptr_t)(ws+3264);
	i8 v7051 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7051)(v7050, v7049);

	i1 v7052 = (i1)+22;
	i8 v7053 = (i8)(intptr_t)(ws+3248);
	i8 v7054 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7054)(v7053, v7052);

endsub:;
}
const i1 c02_s0169[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f226_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s016a[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f148_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f110_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3328 length ws+8
void f305_reduce_3(void) {

	i8 v7055 = (i8)(intptr_t)(ws+3256);
	i8 v7056 = *(i8*)(intptr_t)v7055;
	i8 v7057 = v7056+(+16);
	i8 v7058 = *(i8*)(intptr_t)v7057;
	i8 v7059 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7059 = v7058;

	i8 v7060 = (i8)(intptr_t)(ws+3328);
	i8 v7061 = *(i8*)(intptr_t)v7060;
	i8 v7062 = (i8)+0;
	if (v7061==v7062) goto c02_05a8; else goto c02_05a9;

c02_05a8:;

	i8 v7063 = (i8)(intptr_t)c02_s0169;
	i8 v7064 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7064)(v7063);

c02_05a9:;

c02_05a5:;

	i8 v7065 = (i8)(intptr_t)(ws+3328);
	i8 v7066 = *(i8*)(intptr_t)v7065;
	i8 v7067 = (i8)(intptr_t)(f226_IsScalar);
	i1 v7068;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7067)(&v7068, v7066);
	i1 v7069 = (i1)+0;
	if (v7068==v7069) goto c02_05ad; else goto c02_05ae;

c02_05ad:;

	i8 v7070 = (i8)(intptr_t)c02_s016a;
	i8 v7071 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7071)(v7070);

c02_05ae:;

c02_05aa:;

	i8 v7072 = (i8)(intptr_t)(ws+40);
	i8 v7073 = *(i8*)(intptr_t)v7072;
	i8 v7074 = (i8)(intptr_t)(ws+3272);
	i8 v7075 = *(i8*)(intptr_t)v7074;
	i8 v7076 = (i8)(intptr_t)(ws+3328);
	i8 v7077 = *(i8*)(intptr_t)v7076;
	i8 v7078 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7078)(v7077, v7075, v7073);

	i8 v7079 = (i8)(intptr_t)(ws+3256);
	i8 v7080 = *(i8*)(intptr_t)v7079;
	i8 v7081 = (i8)(intptr_t)(ws+3272);
	i8 v7082 = *(i8*)(intptr_t)v7081;
	i8 v7083 = *(i8*)(intptr_t)v7082;
	i8 v7084 = *(i8*)(intptr_t)v7083;
	i8 v7085 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7085)(v7084, v7080);

	i8 v7086 = (i8)(intptr_t)(ws+3256);
	i8 v7087 = *(i8*)(intptr_t)v7086;
	i8 v7088 = v7087+(+16);
	i8 v7089 = *(i8*)(intptr_t)v7088;
	i8 v7090 = v7089+(+48);
	i2 v7091 = *(i2*)(intptr_t)v7090;
	i1 v7092 = v7091;
	i8 v7093 = (i8)(intptr_t)(ws+3256);
	i8 v7094 = *(i8*)(intptr_t)v7093;
	i8 v7095 = (i8)(intptr_t)(ws+3272);
	i8 v7096 = *(i8*)(intptr_t)v7095;
	i2 v7097 = (i2)+0;
	i8 v7098 = (i8)(intptr_t)(f148_MidAddress);
	i8 v7099;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7098)(&v7099, v7097, v7096);
	i8 v7100 = (i8)(intptr_t)(f110_MidStore);
	i8 v7101;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7100)(&v7101, v7099, v7094, v7092);
	i8 v7102 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7102)(v7101);

	i1 v7103 = (i1)+2;
	i8 v7104 = (i8)(intptr_t)(ws+3264);
	i8 v7105 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7105)(v7104, v7103);

	i1 v7106 = (i1)+22;
	i8 v7107 = (i8)(intptr_t)(ws+3248);
	i8 v7108 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7108)(v7107, v7106);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f110_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3328 length ws+16
void f306_reduce_4(void) {

	i8 v7109 = (i8)(intptr_t)(ws+3272);
	i8 v7110 = *(i8*)(intptr_t)v7109;
	i8 v7111 = v7110+(+16);
	i8 v7112 = *(i8*)(intptr_t)v7111;
	i8 v7113 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7113 = v7112;

	i8 v7114 = (i8)(intptr_t)(ws+3272);
	i8 v7115 = *(i8*)(intptr_t)v7114;
	i8 v7116 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v7117;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7116)(&v7117, v7115);
	i8 v7118 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v7118 = v7117;

	i8 v7119 = (i8)(intptr_t)(ws+3256);
	i8 v7120 = *(i8*)(intptr_t)v7119;
	i8 v7121 = (i8)(intptr_t)(ws+3328);
	i8 v7122 = *(i8*)(intptr_t)v7121;
	i8 v7123 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7123)(v7122, v7120);

	i8 v7124 = (i8)(intptr_t)(ws+3328);
	i8 v7125 = *(i8*)(intptr_t)v7124;
	i8 v7126 = v7125+(+48);
	i2 v7127 = *(i2*)(intptr_t)v7126;
	i1 v7128 = v7127;
	i8 v7129 = (i8)(intptr_t)(ws+3256);
	i8 v7130 = *(i8*)(intptr_t)v7129;
	i8 v7131 = (i8)(intptr_t)(ws+3336);
	i8 v7132 = *(i8*)(intptr_t)v7131;
	i8 v7133 = (i8)(intptr_t)(f110_MidStore);
	i8 v7134;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7133)(&v7134, v7132, v7130, v7128);
	i8 v7135 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7135)(v7134);

	i1 v7136 = (i1)+2;
	i8 v7137 = (i8)(intptr_t)(ws+3264);
	i8 v7138 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7138)(v7137, v7136);

	i1 v7139 = (i1)+22;
	i8 v7140 = (i8)(intptr_t)(ws+3248);
	i8 v7141 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7141)(v7140, v7139);

endsub:;
}
	void f279_TerminateNormalLoop(i8 /* ll */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3328 length ws+0
void f307_reduce_5(void) {

	i8 v7142 = (i8)(intptr_t)(ws+3272);
	i8 v7143 = *(i8*)(intptr_t)v7142;
	i8 v7144 = (i8)(intptr_t)(f279_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7144)(v7143);

	i1 v7145 = (i1)+10;
	i8 v7146 = (i8)(intptr_t)(ws+3256);
	i8 v7147 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7147)(v7146, v7145);

	i1 v7148 = (i1)+13;
	i8 v7149 = (i8)(intptr_t)(ws+3248);
	i8 v7150 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7150)(v7149, v7148);

endsub:;
}
	void f278_BeginNormalLoop(i8* /* ll */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3328 length ws+0
void f308_reduce_6(void) {

	i8 v7151 = (i8)(intptr_t)(f278_BeginNormalLoop);
	i8 v7152;

	((void(*)(i8* /* ll */))(intptr_t)v7151)(&v7152);
	i8 v7153 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7153 = v7152;

	i8 v7154 = (i8)(intptr_t)(ws+54);
	i2 v7155 = *(i2*)(intptr_t)v7154;
	i8 v7156 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7157;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7156)(&v7157, v7155);
	i8 v7158 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7158)(v7157);

endsub:;
}
	void f279_TerminateNormalLoop(i8 /* ll */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3328 length ws+0
void f309_reduce_7(void) {

	i8 v7159 = (i8)(intptr_t)(ws+3272);
	i8 v7160 = *(i8*)(intptr_t)v7159;
	i8 v7161 = (i8)(intptr_t)(f279_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7161)(v7160);

	i1 v7162 = (i1)+10;
	i8 v7163 = (i8)(intptr_t)(ws+3256);
	i8 v7164 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7164)(v7163, v7162);

	i1 v7165 = (i1)+13;
	i8 v7166 = (i8)(intptr_t)(ws+3248);
	i8 v7167 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7167)(v7166, v7165);

endsub:;
}
	void f278_BeginNormalLoop(i8* /* ll */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f252_GenerateConditional(i8 /* rootnode */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3328 length ws+2
void f310_reduce_8(void) {

	i8 v7168 = (i8)(intptr_t)(f278_BeginNormalLoop);
	i8 v7169;

	((void(*)(i8* /* ll */))(intptr_t)v7168)(&v7169);
	i8 v7170 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7170 = v7169;

	i8 v7171 = (i8)(intptr_t)(ws+54);
	i2 v7172 = *(i2*)(intptr_t)v7171;
	i8 v7173 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7174;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7173)(&v7174, v7172);
	i8 v7175 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7175)(v7174);

	i8 v7176 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7177;

	((void(*)(i2* /* label */))(intptr_t)v7176)(&v7177);
	i8 v7178 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7178 = v7177;

	i8 v7179 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7180;

	((void(*)(i2* /* label */))(intptr_t)v7179)(&v7180);
	i8 v7181 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7181 = v7180;

	i8 v7182 = (i8)(intptr_t)(ws+3328);
	i2 v7183 = *(i2*)(intptr_t)v7182;
	i8 v7184 = (i8)(intptr_t)(ws+3256);
	i8 v7185 = *(i8*)(intptr_t)v7184;
	*(i2*)(intptr_t)v7185 = v7183;

	i8 v7186 = (i8)(intptr_t)(ws+52);
	i2 v7187 = *(i2*)(intptr_t)v7186;
	i8 v7188 = (i8)(intptr_t)(ws+3256);
	i8 v7189 = *(i8*)(intptr_t)v7188;
	i8 v7190 = v7189+(+2);
	*(i2*)(intptr_t)v7190 = v7187;

	i8 v7191 = (i8)(intptr_t)(ws+3328);
	i2 v7192 = *(i2*)(intptr_t)v7191;
	i8 v7193 = (i8)(intptr_t)(ws+3256);
	i8 v7194 = *(i8*)(intptr_t)v7193;
	i8 v7195 = v7194+(+4);
	*(i2*)(intptr_t)v7195 = v7192;

	i8 v7196 = (i8)(intptr_t)(ws+3256);
	i8 v7197 = *(i8*)(intptr_t)v7196;
	i8 v7198 = (i8)(intptr_t)(f252_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7198)(v7197);

	i8 v7199 = (i8)(intptr_t)(ws+52);
	i2 v7200 = *(i2*)(intptr_t)v7199;
	i8 v7201 = (i8)(intptr_t)(ws+3240);
	i8 v7202 = *(i8*)(intptr_t)v7201;
	i8 v7203 = v7202+(+2);
	*(i2*)(intptr_t)v7203 = v7200;

	i1 v7204 = (i1)+13;
	i8 v7205 = (i8)(intptr_t)(ws+3248);
	i8 v7206 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7206)(v7205, v7204);

endsub:;
}
const i1 c02_s016b[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f71_SimpleError(i8 /* message */);
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3328 length ws+0
void f311_reduce_9(void) {

	i8 v7207 = (i8)(intptr_t)(ws+52);
	i2 v7208 = *(i2*)(intptr_t)v7207;
	i2 v7209 = (i2)+0;
	if (v7208==v7209) goto c02_05b2; else goto c02_05b3;

c02_05b2:;

	i8 v7210 = (i8)(intptr_t)c02_s016b;
	i8 v7211 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7211)(v7210);

c02_05b3:;

c02_05af:;

	i8 v7212 = (i8)(intptr_t)(ws+52);
	i2 v7213 = *(i2*)(intptr_t)v7212;
	i8 v7214 = (i8)(intptr_t)(f158_MidJump);
	i8 v7215;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7214)(&v7215, v7213);
	i8 v7216 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7216)(v7215);

	i1 v7217 = (i1)+22;
	i8 v7218 = (i8)(intptr_t)(ws+3248);
	i8 v7219 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7219)(v7218, v7217);

endsub:;
}
const i1 c02_s016c[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f71_SimpleError(i8 /* message */);
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3328 length ws+0
void f312_reduce_10(void) {

	i8 v7220 = (i8)(intptr_t)(ws+54);
	i2 v7221 = *(i2*)(intptr_t)v7220;
	i2 v7222 = (i2)+0;
	if (v7221==v7222) goto c02_05b7; else goto c02_05b8;

c02_05b7:;

	i8 v7223 = (i8)(intptr_t)c02_s016c;
	i8 v7224 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7224)(v7223);

c02_05b8:;

c02_05b4:;

	i8 v7225 = (i8)(intptr_t)(ws+54);
	i2 v7226 = *(i2*)(intptr_t)v7225;
	i8 v7227 = (i8)(intptr_t)(f158_MidJump);
	i8 v7228;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7227)(&v7228, v7226);
	i8 v7229 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7229)(v7228);

	i1 v7230 = (i1)+22;
	i8 v7231 = (i8)(intptr_t)(ws+3248);
	i8 v7232 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7232)(v7231, v7230);

endsub:;
}
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3328 length ws+8
void f313_reduce_11(void) {

	i8 v7233 = (i8)(intptr_t)(ws+56);
	i8 v7234 = *(i8*)(intptr_t)v7233;
	i2 v7235 = *(i2*)(intptr_t)v7234;
	i8 v7236 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7237;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7236)(&v7237, v7235);
	i8 v7238 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7238)(v7237);

	i8 v7239 = (i8)(intptr_t)(ws+56);
	i8 v7240 = *(i8*)(intptr_t)v7239;
	i8 v7241 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7241 = v7240;

	i8 v7242 = (i8)(intptr_t)(ws+56);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = v7243+(+8);
	i8 v7245 = *(i8*)(intptr_t)v7244;
	i8 v7246 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7246 = v7245;

	i8 v7247 = (i8)(intptr_t)(ws+3328);
	i8 v7248 = *(i8*)(intptr_t)v7247;
	i8 v7249 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v7249)(v7248);

	i1 v7250 = (i1)+26;
	i8 v7251 = (i8)(intptr_t)(ws+3280);
	i8 v7252 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7252)(v7251, v7250);

	i1 v7253 = (i1)+10;
	i8 v7254 = (i8)(intptr_t)(ws+3256);
	i8 v7255 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7255)(v7254, v7253);

	i1 v7256 = (i1)+12;
	i8 v7257 = (i8)(intptr_t)(ws+3248);
	i8 v7258 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7258)(v7257, v7256);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3328 length ws+8
void f314_reduce_12(void) {

	i8 v7259 = (i8)+16;
	i8 v7260 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v7261;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7260)(&v7261, v7259);
	i8 v7262 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7262 = v7261;

	i8 v7263 = (i8)(intptr_t)(ws+56);
	i8 v7264 = *(i8*)(intptr_t)v7263;
	i8 v7265 = (i8)(intptr_t)(ws+3328);
	i8 v7266 = *(i8*)(intptr_t)v7265;
	i8 v7267 = v7266+(+8);
	*(i8*)(intptr_t)v7267 = v7264;

	i8 v7268 = (i8)(intptr_t)(ws+3328);
	i8 v7269 = *(i8*)(intptr_t)v7268;
	i8 v7270 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7270 = v7269;

	i8 v7271 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7272;

	((void(*)(i2* /* label */))(intptr_t)v7271)(&v7272);
	i8 v7273 = (i8)(intptr_t)(ws+56);
	i8 v7274 = *(i8*)(intptr_t)v7273;
	*(i2*)(intptr_t)v7274 = v7272;

endsub:;
}
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f252_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3328 length ws+4
void f315_reduce_13(void) {

	i8 v7275 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7276;

	((void(*)(i2* /* label */))(intptr_t)v7275)(&v7276);
	i8 v7277 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7277 = v7276;

	i8 v7278 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7279;

	((void(*)(i2* /* label */))(intptr_t)v7278)(&v7279);
	i8 v7280 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v7280 = v7279;

	i8 v7281 = (i8)(intptr_t)(ws+3328);
	i2 v7282 = *(i2*)(intptr_t)v7281;
	i8 v7283 = (i8)(intptr_t)(ws+56);
	i8 v7284 = *(i8*)(intptr_t)v7283;
	i8 v7285 = v7284+(+2);
	*(i2*)(intptr_t)v7285 = v7282;

	i8 v7286 = (i8)(intptr_t)(ws+3330);
	i2 v7287 = *(i2*)(intptr_t)v7286;
	i8 v7288 = (i8)(intptr_t)(ws+56);
	i8 v7289 = *(i8*)(intptr_t)v7288;
	i8 v7290 = v7289+(+4);
	*(i2*)(intptr_t)v7290 = v7287;

	i8 v7291 = (i8)(intptr_t)(ws+3328);
	i2 v7292 = *(i2*)(intptr_t)v7291;
	i8 v7293 = (i8)(intptr_t)(ws+3248);
	i8 v7294 = *(i8*)(intptr_t)v7293;
	*(i2*)(intptr_t)v7294 = v7292;

	i8 v7295 = (i8)(intptr_t)(ws+3330);
	i2 v7296 = *(i2*)(intptr_t)v7295;
	i8 v7297 = (i8)(intptr_t)(ws+3248);
	i8 v7298 = *(i8*)(intptr_t)v7297;
	i8 v7299 = v7298+(+2);
	*(i2*)(intptr_t)v7299 = v7296;

	i8 v7300 = (i8)(intptr_t)(ws+3328);
	i2 v7301 = *(i2*)(intptr_t)v7300;
	i8 v7302 = (i8)(intptr_t)(ws+3248);
	i8 v7303 = *(i8*)(intptr_t)v7302;
	i8 v7304 = v7303+(+4);
	*(i2*)(intptr_t)v7304 = v7301;

	i8 v7305 = (i8)(intptr_t)(ws+3248);
	i8 v7306 = *(i8*)(intptr_t)v7305;
	i8 v7307 = (i8)(intptr_t)(f252_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7307)(v7306);

endsub:;
}
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3328 length ws+0
void f316_reduce_14(void) {

	i8 v7308 = (i8)(intptr_t)(ws+56);
	i8 v7309 = *(i8*)(intptr_t)v7308;
	i8 v7310 = v7309+(+4);
	i2 v7311 = *(i2*)(intptr_t)v7310;
	i8 v7312 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7313;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7312)(&v7313, v7311);
	i8 v7314 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7314)(v7313);

endsub:;
}
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_15 workspace at ws+3328 length ws+0
void f317_reduce_15(void) {

	i8 v7315 = (i8)(intptr_t)(ws+56);
	i8 v7316 = *(i8*)(intptr_t)v7315;
	i2 v7317 = *(i2*)(intptr_t)v7316;
	i8 v7318 = (i8)(intptr_t)(f158_MidJump);
	i8 v7319;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7318)(&v7319, v7317);
	i8 v7320 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7320)(v7319);

	i8 v7321 = (i8)(intptr_t)(ws+56);
	i8 v7322 = *(i8*)(intptr_t)v7321;
	i8 v7323 = v7322+(+4);
	i2 v7324 = *(i2*)(intptr_t)v7323;
	i8 v7325 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7326;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7325)(&v7326, v7324);
	i8 v7327 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7327)(v7326);

endsub:;
}
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_16 workspace at ws+3328 length ws+0
void f318_reduce_16(void) {

	i8 v7328 = (i8)(intptr_t)(ws+56);
	i8 v7329 = *(i8*)(intptr_t)v7328;
	i2 v7330 = *(i2*)(intptr_t)v7329;
	i8 v7331 = (i8)(intptr_t)(f158_MidJump);
	i8 v7332;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7331)(&v7332, v7330);
	i8 v7333 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7333)(v7332);

	i8 v7334 = (i8)(intptr_t)(ws+56);
	i8 v7335 = *(i8*)(intptr_t)v7334;
	i8 v7336 = v7335+(+4);
	i2 v7337 = *(i2*)(intptr_t)v7336;
	i8 v7338 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7339;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7338)(&v7339, v7337);
	i8 v7340 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7340)(v7339);

endsub:;
}
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f153_MidEndcase(i8* /* m */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3328 length ws+8
void f319_reduce_17(void) {

	i8 v7341 = (i8)(intptr_t)(ws+64);
	i8 v7342 = *(i8*)(intptr_t)v7341;
	i8 v7343 = v7342+(+17);
	i1 v7344 = *(i1*)(intptr_t)v7343;
	i1 v7345 = (i1)+0;
	if (v7344==v7345) goto c02_05c0; else goto c02_05bf;

c02_05c0:;

	i8 v7346 = (i8)(intptr_t)(ws+64);
	i8 v7347 = *(i8*)(intptr_t)v7346;
	i2 v7348 = *(i2*)(intptr_t)v7347;
	i2 v7349 = (i2)+0;
	if (v7348==v7349) goto c02_05bf; else goto c02_05be;

c02_05be:;

	i8 v7350 = (i8)(intptr_t)(ws+64);
	i8 v7351 = *(i8*)(intptr_t)v7350;
	i2 v7352 = *(i2*)(intptr_t)v7351;
	i8 v7353 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7354;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7353)(&v7354, v7352);
	i8 v7355 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7355)(v7354);

c02_05bf:;

c02_05b9:;

	i8 v7356 = (i8)(intptr_t)(ws+64);
	i8 v7357 = *(i8*)(intptr_t)v7356;
	i8 v7358 = v7357+(+2);
	i2 v7359 = *(i2*)(intptr_t)v7358;
	i8 v7360 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7361;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7360)(&v7361, v7359);
	i8 v7362 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7362)(v7361);

	i8 v7363 = (i8)(intptr_t)(ws+64);
	i8 v7364 = *(i8*)(intptr_t)v7363;
	i8 v7365 = v7364+(+16);
	i1 v7366 = *(i1*)(intptr_t)v7365;
	i8 v7367 = (i8)(intptr_t)(f153_MidEndcase);
	i8 v7368;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v7367)(&v7368, v7366);
	i8 v7369 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7369)(v7368);

	i8 v7370 = (i8)(intptr_t)(ws+64);
	i8 v7371 = *(i8*)(intptr_t)v7370;
	i8 v7372 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7372 = v7371;

	i8 v7373 = (i8)(intptr_t)(ws+3328);
	i8 v7374 = *(i8*)(intptr_t)v7373;
	i8 v7375 = v7374+(+8);
	i8 v7376 = *(i8*)(intptr_t)v7375;
	i8 v7377 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7377 = v7376;

	i8 v7378 = (i8)(intptr_t)(ws+3328);
	i8 v7379 = *(i8*)(intptr_t)v7378;
	i8 v7380 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v7380)(v7379);

	i1 v7381 = (i1)+10;
	i8 v7382 = (i8)(intptr_t)(ws+3264);
	i8 v7383 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7383)(v7382, v7381);

	i1 v7384 = (i1)+64;
	i8 v7385 = (i8)(intptr_t)(ws+3256);
	i8 v7386 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7386)(v7385, v7384);

	i1 v7387 = (i1)+22;
	i8 v7388 = (i8)(intptr_t)(ws+3248);
	i8 v7389 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7389)(v7388, v7387);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s016d[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f128_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3328 length ws+8
void f320_reduce_18(void) {

	i8 v7390 = (i8)+18;
	i8 v7391 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v7392;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7391)(&v7392, v7390);
	i8 v7393 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7393 = v7392;

	i8 v7394 = (i8)(intptr_t)(ws+64);
	i8 v7395 = *(i8*)(intptr_t)v7394;
	i8 v7396 = (i8)(intptr_t)(ws+3328);
	i8 v7397 = *(i8*)(intptr_t)v7396;
	i8 v7398 = v7397+(+8);
	*(i8*)(intptr_t)v7398 = v7395;

	i8 v7399 = (i8)(intptr_t)(ws+52);
	i2 v7400 = *(i2*)(intptr_t)v7399;
	i8 v7401 = (i8)(intptr_t)(ws+3328);
	i8 v7402 = *(i8*)(intptr_t)v7401;
	i8 v7403 = v7402+(+4);
	*(i2*)(intptr_t)v7403 = v7400;

	i8 v7404 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7405;

	((void(*)(i2* /* label */))(intptr_t)v7404)(&v7405);
	i8 v7406 = (i8)(intptr_t)(ws+3328);
	i8 v7407 = *(i8*)(intptr_t)v7406;
	i8 v7408 = v7407+(+2);
	*(i2*)(intptr_t)v7408 = v7405;

	i8 v7409 = (i8)(intptr_t)(ws+3328);
	i8 v7410 = *(i8*)(intptr_t)v7409;
	i8 v7411 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7411 = v7410;

	i8 v7412 = (i8)(intptr_t)(ws+3256);
	i8 v7413 = *(i8*)(intptr_t)v7412;
	i8 v7414 = v7413+(+16);
	i8 v7415 = *(i8*)(intptr_t)v7414;
	i8 v7416 = (i8)(intptr_t)(f224_IsNum);
	i1 v7417;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7416)(&v7417, v7415);
	i1 v7418 = (i1)+0;
	if (v7417==v7418) goto c02_05c4; else goto c02_05c5;

c02_05c4:;

	i8 v7419 = (i8)(intptr_t)c02_s016d;
	i8 v7420 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7420)(v7419);

c02_05c5:;

c02_05c1:;

	i8 v7421 = (i8)(intptr_t)(ws+3256);
	i8 v7422 = *(i8*)(intptr_t)v7421;
	i8 v7423 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v7424;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7423)(&v7424, v7422);
	i8 v7425 = (i8)(intptr_t)(ws+3328);
	i8 v7426 = *(i8*)(intptr_t)v7425;
	i8 v7427 = v7426+(+16);
	*(i1*)(intptr_t)v7427 = v7424;

	i8 v7428 = (i8)(intptr_t)(ws+3328);
	i8 v7429 = *(i8*)(intptr_t)v7428;
	i8 v7430 = v7429+(+16);
	i1 v7431 = *(i1*)(intptr_t)v7430;
	i8 v7432 = (i8)(intptr_t)(ws+3256);
	i8 v7433 = *(i8*)(intptr_t)v7432;
	i8 v7434 = (i8)(intptr_t)(f128_MidStartcase);
	i8 v7435;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7434)(&v7435, v7433, v7431);
	i8 v7436 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7436)(v7435);

	i1 v7437 = (i1)+65;
	i8 v7438 = (i8)(intptr_t)(ws+3248);
	i8 v7439 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7439)(v7438, v7437);

endsub:;
}
const i1 c02_s016e[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f230_AllocLabel(i2* /* label */);
	void f105_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3328 length ws+0
void f321_reduce_19(void) {

	i8 v7440 = (i8)(intptr_t)(ws+64);
	i8 v7441 = *(i8*)(intptr_t)v7440;
	i8 v7442 = v7441+(+17);
	i1 v7443 = *(i1*)(intptr_t)v7442;
	i1 v7444 = (i1)+0;
	if (v7443==v7444) goto c02_05ca; else goto c02_05c9;

c02_05c9:;

	i8 v7445 = (i8)(intptr_t)c02_s016e;
	i8 v7446 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7446)(v7445);

c02_05ca:;

c02_05c6:;

	i8 v7447 = (i8)(intptr_t)(ws+64);
	i8 v7448 = *(i8*)(intptr_t)v7447;
	i2 v7449 = *(i2*)(intptr_t)v7448;
	i2 v7450 = (i2)+0;
	if (v7449==v7450) goto c02_05cf; else goto c02_05ce;

c02_05ce:;

	i8 v7451 = (i8)(intptr_t)(ws+64);
	i8 v7452 = *(i8*)(intptr_t)v7451;
	i8 v7453 = v7452+(+2);
	i2 v7454 = *(i2*)(intptr_t)v7453;
	i8 v7455 = (i8)(intptr_t)(f158_MidJump);
	i8 v7456;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7455)(&v7456, v7454);
	i8 v7457 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7457)(v7456);

	i8 v7458 = (i8)(intptr_t)(ws+64);
	i8 v7459 = *(i8*)(intptr_t)v7458;
	i2 v7460 = *(i2*)(intptr_t)v7459;
	i8 v7461 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7462;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7461)(&v7462, v7460);
	i8 v7463 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7463)(v7462);

c02_05cf:;

c02_05cb:;

	i8 v7464 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7465;

	((void(*)(i2* /* label */))(intptr_t)v7464)(&v7465);
	i8 v7466 = (i8)(intptr_t)(ws+64);
	i8 v7467 = *(i8*)(intptr_t)v7466;
	*(i2*)(intptr_t)v7467 = v7465;

	i8 v7468 = (i8)(intptr_t)(ws+64);
	i8 v7469 = *(i8*)(intptr_t)v7468;
	i8 v7470 = v7469+(+16);
	i1 v7471 = *(i1*)(intptr_t)v7470;
	i8 v7472 = (i8)(intptr_t)(ws+3256);
	i4 v7473 = *(i4*)(intptr_t)v7472;
	i8 v7474 = (i8)(intptr_t)(ws+64);
	i8 v7475 = *(i8*)(intptr_t)v7474;
	i2 v7476 = *(i2*)(intptr_t)v7475;
	i8 v7477 = (i8)(intptr_t)(f105_MidWhencase);
	i8 v7478;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v7477)(&v7478, v7476, v7473, v7471);
	i8 v7479 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7479)(v7478);

	i1 v7480 = (i1)+6;
	i8 v7481 = (i8)(intptr_t)(ws+3248);
	i8 v7482 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7482)(v7481, v7480);

endsub:;
}
const i1 c02_s016f[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f158_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f147_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_20 workspace at ws+3328 length ws+0
void f322_reduce_20(void) {

	i8 v7483 = (i8)(intptr_t)(ws+64);
	i8 v7484 = *(i8*)(intptr_t)v7483;
	i8 v7485 = v7484+(+17);
	i1 v7486 = *(i1*)(intptr_t)v7485;
	i1 v7487 = (i1)+0;
	if (v7486==v7487) goto c02_05d4; else goto c02_05d3;

c02_05d3:;

	i8 v7488 = (i8)(intptr_t)c02_s016f;
	i8 v7489 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7489)(v7488);

c02_05d4:;

c02_05d0:;

	i8 v7490 = (i8)(intptr_t)(ws+64);
	i8 v7491 = *(i8*)(intptr_t)v7490;
	i2 v7492 = *(i2*)(intptr_t)v7491;
	i2 v7493 = (i2)+0;
	if (v7492==v7493) goto c02_05d9; else goto c02_05d8;

c02_05d8:;

	i8 v7494 = (i8)(intptr_t)(ws+64);
	i8 v7495 = *(i8*)(intptr_t)v7494;
	i8 v7496 = v7495+(+2);
	i2 v7497 = *(i2*)(intptr_t)v7496;
	i8 v7498 = (i8)(intptr_t)(f158_MidJump);
	i8 v7499;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7498)(&v7499, v7497);
	i8 v7500 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7500)(v7499);

	i8 v7501 = (i8)(intptr_t)(ws+64);
	i8 v7502 = *(i8*)(intptr_t)v7501;
	i2 v7503 = *(i2*)(intptr_t)v7502;
	i8 v7504 = (i8)(intptr_t)(f147_MidLabel);
	i8 v7505;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7504)(&v7505, v7503);
	i8 v7506 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7506)(v7505);

c02_05d9:;

c02_05d5:;

	i2 v7507 = (i2)+0;
	i8 v7508 = (i8)(intptr_t)(ws+64);
	i8 v7509 = *(i8*)(intptr_t)v7508;
	*(i2*)(intptr_t)v7509 = v7507;

	i1 v7510 = (i1)+1;
	i8 v7511 = (i8)(intptr_t)(ws+64);
	i8 v7512 = *(i8*)(intptr_t)v7511;
	i8 v7513 = v7512+(+17);
	*(i1*)(intptr_t)v7513 = v7510;

	i1 v7514 = (i1)+9;
	i8 v7515 = (i8)(intptr_t)(ws+3256);
	i8 v7516 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7516)(v7515, v7514);

	i1 v7517 = (i1)+6;
	i8 v7518 = (i8)(intptr_t)(ws+3248);
	i8 v7519 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7519)(v7518, v7517);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3328 length ws+0
void f323_reduce_21(void) {

	i8 v7520 = (i8)(intptr_t)(ws+3256);
	i8 v7521 = *(i8*)(intptr_t)v7520;
	i8 v7522 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7522 = v7521;

	i1 v7523 = (i1)+4;
	i8 v7524 = (i8)(intptr_t)(ws+3248);
	i8 v7525 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7525)(v7524, v7523);

endsub:;
}
	void f280_Negate(i8 /* node */);

// reduce_22 workspace at ws+3328 length ws+0
void f324_reduce_22(void) {

	i8 v7526 = (i8)(intptr_t)(ws+3248);
	i8 v7527 = *(i8*)(intptr_t)v7526;
	i8 v7528 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7528 = v7527;

	i8 v7529 = (i8)(intptr_t)(ws+3248);
	i8 v7530 = *(i8*)(intptr_t)v7529;
	i8 v7531 = (i8)(intptr_t)(f280_Negate);

	((void(*)(i8 /* node */))(intptr_t)v7531)(v7530);

endsub:;
}
	void f144_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3328 length ws+0
void f325_reduce_23(void) {

	i8 v7532 = (i8)(intptr_t)(ws+3264);
	i8 v7533 = *(i8*)(intptr_t)v7532;
	i8 v7534 = (i8)(intptr_t)(ws+3248);
	i8 v7535 = *(i8*)(intptr_t)v7534;
	i2 v7536 = (i2)+0;
	i2 v7537 = (i2)+0;
	i2 v7538 = (i2)+0;
	i1 v7539 = (i1)+0;
	i8 v7540 = (i8)(intptr_t)(f144_MidBand);
	i8 v7541;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7540)(&v7541, v7539, v7538, v7537, v7536, v7535, v7533);
	i8 v7542 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7542 = v7541;

	i1 v7543 = (i1)+46;
	i8 v7544 = (i8)(intptr_t)(ws+3256);
	i8 v7545 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7545)(v7544, v7543);

endsub:;
}
	void f142_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3328 length ws+0
void f326_reduce_24(void) {

	i8 v7546 = (i8)(intptr_t)(ws+3264);
	i8 v7547 = *(i8*)(intptr_t)v7546;
	i8 v7548 = (i8)(intptr_t)(ws+3248);
	i8 v7549 = *(i8*)(intptr_t)v7548;
	i2 v7550 = (i2)+0;
	i2 v7551 = (i2)+0;
	i2 v7552 = (i2)+0;
	i1 v7553 = (i1)+0;
	i8 v7554 = (i8)(intptr_t)(f142_MidBor);
	i8 v7555;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7554)(&v7555, v7553, v7552, v7551, v7550, v7549, v7547);
	i8 v7556 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7556 = v7555;

	i1 v7557 = (i1)+47;
	i8 v7558 = (i8)(intptr_t)(ws+3256);
	i8 v7559 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7559)(v7558, v7557);

endsub:;
}
	void f281_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3328 length ws+0
void f327_reduce_25(void) {

	i8 v7560 = (i8)(intptr_t)(ws+3264);
	i8 v7561 = *(i8*)(intptr_t)v7560;
	i8 v7562 = (i8)(intptr_t)(ws+3248);
	i8 v7563 = *(i8*)(intptr_t)v7562;
	i1 v7564 = (i1)+0;
	i8 v7565 = (i8)(intptr_t)(f281_ConditionalEq);
	i8 v7566;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7565)(&v7566, v7564, v7563, v7561);
	i8 v7567 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7567 = v7566;

	i1 v7568 = (i1)+54;
	i8 v7569 = (i8)(intptr_t)(ws+3256);
	i8 v7570 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7570)(v7569, v7568);

endsub:;
}
	void f281_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3328 length ws+0
void f328_reduce_26(void) {

	i8 v7571 = (i8)(intptr_t)(ws+3264);
	i8 v7572 = *(i8*)(intptr_t)v7571;
	i8 v7573 = (i8)(intptr_t)(ws+3248);
	i8 v7574 = *(i8*)(intptr_t)v7573;
	i1 v7575 = (i1)+1;
	i8 v7576 = (i8)(intptr_t)(f281_ConditionalEq);
	i8 v7577;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7576)(&v7577, v7575, v7574, v7572);
	i8 v7578 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7578 = v7577;

	i1 v7579 = (i1)+55;
	i8 v7580 = (i8)(intptr_t)(ws+3256);
	i8 v7581 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7581)(v7580, v7579);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3328 length ws+0
void f329_reduce_27(void) {

	i8 v7582 = (i8)(intptr_t)(ws+3264);
	i8 v7583 = *(i8*)(intptr_t)v7582;
	i8 v7584 = (i8)(intptr_t)(ws+3248);
	i8 v7585 = *(i8*)(intptr_t)v7584;
	i1 v7586 = (i1)+0;
	i8 v7587 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7588;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7587)(&v7588, v7586, v7585, v7583);
	i8 v7589 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7589 = v7588;

	i1 v7590 = (i1)+50;
	i8 v7591 = (i8)(intptr_t)(ws+3256);
	i8 v7592 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7592)(v7591, v7590);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3328 length ws+0
void f330_reduce_28(void) {

	i8 v7593 = (i8)(intptr_t)(ws+3264);
	i8 v7594 = *(i8*)(intptr_t)v7593;
	i8 v7595 = (i8)(intptr_t)(ws+3248);
	i8 v7596 = *(i8*)(intptr_t)v7595;
	i1 v7597 = (i1)+1;
	i8 v7598 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7599;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7598)(&v7599, v7597, v7596, v7594);
	i8 v7600 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7600 = v7599;

	i1 v7601 = (i1)+53;
	i8 v7602 = (i8)(intptr_t)(ws+3256);
	i8 v7603 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7603)(v7602, v7601);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_29 workspace at ws+3328 length ws+0
void f331_reduce_29(void) {

	i8 v7604 = (i8)(intptr_t)(ws+3248);
	i8 v7605 = *(i8*)(intptr_t)v7604;
	i8 v7606 = (i8)(intptr_t)(ws+3264);
	i8 v7607 = *(i8*)(intptr_t)v7606;
	i1 v7608 = (i1)+0;
	i8 v7609 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7610;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7609)(&v7610, v7608, v7607, v7605);
	i8 v7611 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7611 = v7610;

	i1 v7612 = (i1)+52;
	i8 v7613 = (i8)(intptr_t)(ws+3256);
	i8 v7614 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7614)(v7613, v7612);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3328 length ws+0
void f332_reduce_30(void) {

	i8 v7615 = (i8)(intptr_t)(ws+3248);
	i8 v7616 = *(i8*)(intptr_t)v7615;
	i8 v7617 = (i8)(intptr_t)(ws+3264);
	i8 v7618 = *(i8*)(intptr_t)v7617;
	i1 v7619 = (i1)+1;
	i8 v7620 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7621;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7620)(&v7621, v7619, v7618, v7616);
	i8 v7622 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7622 = v7621;

	i1 v7623 = (i1)+51;
	i8 v7624 = (i8)(intptr_t)(ws+3256);
	i8 v7625 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7625)(v7624, v7623);

endsub:;
}
	void f157_MidConstant(i8* /* m */, i4 /* value */);

// reduce_31 workspace at ws+3328 length ws+0
void f333_reduce_31(void) {

	i8 v7626 = (i8)(intptr_t)(ws+3248);
	i4 v7627 = *(i4*)(intptr_t)v7626;
	i8 v7628 = (i8)(intptr_t)(f157_MidConstant);
	i8 v7629;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7628)(&v7629, v7627);
	i8 v7630 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7630 = v7629;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_32 workspace at ws+3328 length ws+0
void f334_reduce_32(void) {

	i8 v7631 = (i8)(intptr_t)(ws+3256);
	i8 v7632 = *(i8*)(intptr_t)v7631;
	i8 v7633 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7633 = v7632;

	i1 v7634 = (i1)+4;
	i8 v7635 = (i8)(intptr_t)(ws+3248);
	i8 v7636 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7636)(v7635, v7634);

endsub:;
}

// reduce_33 workspace at ws+3328 length ws+0
void f335_reduce_33(void) {

	i8 v7637 = (i8)(intptr_t)(ws+3248);
	i8 v7638 = *(i8*)(intptr_t)v7637;
	i8 v7639 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7639 = v7638;

endsub:;
}
	void f269_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_34 workspace at ws+3328 length ws+0
void f336_reduce_34(void) {

	i1 v7640 = (i1)+116;
	i8 v7641 = (i8)(intptr_t)(ws+3248);
	i8 v7642 = *(i8*)(intptr_t)v7641;
	i8 v7643 = (i8)(intptr_t)(f269_Expr1Simple);
	i8 v7644;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7643)(&v7644, v7642, v7640);
	i8 v7645 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7645 = v7644;

endsub:;
}
	void f269_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_35 workspace at ws+3328 length ws+0
void f337_reduce_35(void) {

	i1 v7646 = (i1)+111;
	i8 v7647 = (i8)(intptr_t)(ws+3248);
	i8 v7648 = *(i8*)(intptr_t)v7647;
	i8 v7649 = (i8)(intptr_t)(f269_Expr1Simple);
	i8 v7650;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7649)(&v7650, v7648, v7646);
	i8 v7651 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7651 = v7650;

endsub:;
}
	void f270_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3328 length ws+0
void f338_reduce_36(void) {

	i8 v7652 = (i8)(intptr_t)(ws+3264);
	i8 v7653 = *(i8*)(intptr_t)v7652;
	i8 v7654 = (i8)(intptr_t)(ws+3248);
	i8 v7655 = *(i8*)(intptr_t)v7654;
	i8 v7656 = (i8)(intptr_t)(f270_ExprAdd);
	i8 v7657;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7656)(&v7657, v7655, v7653);
	i8 v7658 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7658 = v7657;

	i1 v7659 = (i1)+19;
	i8 v7660 = (i8)(intptr_t)(ws+3256);
	i8 v7661 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7661)(v7660, v7659);

endsub:;
}
	void f272_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3328 length ws+0
void f339_reduce_37(void) {

	i8 v7662 = (i8)(intptr_t)(ws+3264);
	i8 v7663 = *(i8*)(intptr_t)v7662;
	i8 v7664 = (i8)(intptr_t)(ws+3248);
	i8 v7665 = *(i8*)(intptr_t)v7664;
	i8 v7666 = (i8)(intptr_t)(f272_ExprSub);
	i8 v7667;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7666)(&v7667, v7665, v7663);
	i8 v7668 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7668 = v7667;

	i1 v7669 = (i1)+14;
	i8 v7670 = (i8)(intptr_t)(ws+3256);
	i8 v7671 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7671)(v7670, v7669);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3328 length ws+0
void f340_reduce_38(void) {

	i1 v7672 = (i1)+166;
	i1 v7673 = (i1)+166;
	i8 v7674 = (i8)(intptr_t)(ws+3264);
	i8 v7675 = *(i8*)(intptr_t)v7674;
	i8 v7676 = (i8)(intptr_t)(ws+3248);
	i8 v7677 = *(i8*)(intptr_t)v7676;
	i8 v7678 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7679;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7678)(&v7679, v7677, v7675, v7673, v7672);
	i8 v7680 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7680 = v7679;

	i1 v7681 = (i1)+24;
	i8 v7682 = (i8)(intptr_t)(ws+3256);
	i8 v7683 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7683)(v7682, v7681);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3328 length ws+0
void f341_reduce_39(void) {

	i1 v7684 = (i1)+146;
	i1 v7685 = (i1)+141;
	i8 v7686 = (i8)(intptr_t)(ws+3264);
	i8 v7687 = *(i8*)(intptr_t)v7686;
	i8 v7688 = (i8)(intptr_t)(ws+3248);
	i8 v7689 = *(i8*)(intptr_t)v7688;
	i8 v7690 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7691;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7690)(&v7691, v7689, v7687, v7685, v7684);
	i8 v7692 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7692 = v7691;

	i1 v7693 = (i1)+23;
	i8 v7694 = (i8)(intptr_t)(ws+3256);
	i8 v7695 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7695)(v7694, v7693);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3328 length ws+0
void f342_reduce_40(void) {

	i1 v7696 = (i1)+156;
	i1 v7697 = (i1)+151;
	i8 v7698 = (i8)(intptr_t)(ws+3264);
	i8 v7699 = *(i8*)(intptr_t)v7698;
	i8 v7700 = (i8)(intptr_t)(ws+3248);
	i8 v7701 = *(i8*)(intptr_t)v7700;
	i8 v7702 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7703;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7702)(&v7703, v7701, v7699, v7697, v7696);
	i8 v7704 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7704 = v7703;

	i1 v7705 = (i1)+18;
	i8 v7706 = (i8)(intptr_t)(ws+3256);
	i8 v7707 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7707)(v7706, v7705);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3328 length ws+0
void f343_reduce_41(void) {

	i1 v7708 = (i1)+181;
	i1 v7709 = (i1)+181;
	i8 v7710 = (i8)(intptr_t)(ws+3264);
	i8 v7711 = *(i8*)(intptr_t)v7710;
	i8 v7712 = (i8)(intptr_t)(ws+3248);
	i8 v7713 = *(i8*)(intptr_t)v7712;
	i8 v7714 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7715;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7714)(&v7715, v7713, v7711, v7709, v7708);
	i8 v7716 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7716 = v7715;

	i1 v7717 = (i1)+49;
	i8 v7718 = (i8)(intptr_t)(ws+3256);
	i8 v7719 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7719)(v7718, v7717);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3328 length ws+0
void f344_reduce_42(void) {

	i1 v7720 = (i1)+171;
	i1 v7721 = (i1)+171;
	i8 v7722 = (i8)(intptr_t)(ws+3264);
	i8 v7723 = *(i8*)(intptr_t)v7722;
	i8 v7724 = (i8)(intptr_t)(ws+3248);
	i8 v7725 = *(i8*)(intptr_t)v7724;
	i8 v7726 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7727;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7726)(&v7727, v7725, v7723, v7721, v7720);
	i8 v7728 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7728 = v7727;

	i1 v7729 = (i1)+59;
	i8 v7730 = (i8)(intptr_t)(ws+3256);
	i8 v7731 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7731)(v7730, v7729);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3328 length ws+0
void f345_reduce_43(void) {

	i1 v7732 = (i1)+176;
	i1 v7733 = (i1)+176;
	i8 v7734 = (i8)(intptr_t)(ws+3264);
	i8 v7735 = *(i8*)(intptr_t)v7734;
	i8 v7736 = (i8)(intptr_t)(ws+3248);
	i8 v7737 = *(i8*)(intptr_t)v7736;
	i8 v7738 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7739;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7738)(&v7739, v7737, v7735, v7733, v7732);
	i8 v7740 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7740 = v7739;

	i1 v7741 = (i1)+48;
	i8 v7742 = (i8)(intptr_t)(ws+3256);
	i8 v7743 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7743)(v7742, v7741);

endsub:;
}
	void f277_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3328 length ws+0
void f346_reduce_44(void) {

	i1 v7744 = (i1)+121;
	i1 v7745 = (i1)+121;
	i8 v7746 = (i8)(intptr_t)(ws+3264);
	i8 v7747 = *(i8*)(intptr_t)v7746;
	i8 v7748 = (i8)(intptr_t)(ws+3248);
	i8 v7749 = *(i8*)(intptr_t)v7748;
	i8 v7750 = (i8)(intptr_t)(f277_ExprShift);
	i8 v7751;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7750)(&v7751, v7749, v7747, v7745, v7744);
	i8 v7752 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7752 = v7751;

	i1 v7753 = (i1)+56;
	i8 v7754 = (i8)(intptr_t)(ws+3256);
	i8 v7755 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7755)(v7754, v7753);

endsub:;
}
	void f277_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_45 workspace at ws+3328 length ws+0
void f347_reduce_45(void) {

	i1 v7756 = (i1)+131;
	i1 v7757 = (i1)+126;
	i8 v7758 = (i8)(intptr_t)(ws+3264);
	i8 v7759 = *(i8*)(intptr_t)v7758;
	i8 v7760 = (i8)(intptr_t)(ws+3248);
	i8 v7761 = *(i8*)(intptr_t)v7760;
	i8 v7762 = (i8)(intptr_t)(f277_ExprShift);
	i8 v7763;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7762)(&v7763, v7761, v7759, v7757, v7756);
	i8 v7764 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7764 = v7763;

	i1 v7765 = (i1)+57;
	i8 v7766 = (i8)(intptr_t)(ws+3256);
	i8 v7767 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7767)(v7766, v7765);

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0170[] = { 0x63,0x61,0x73,0x74,0x20,0x62,0x65,0x74,0x77,0x65,0x65,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x61,0x6e,0x64,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x6f,0x66,0x20,0x64,0x69,0x66,0x66,0x65,0x72,0x65,0x6e,0x74,0x20,0x73,0x69,0x7a,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f225_IsSNum(i1* /* result */, i8 /* type */);
	void f169_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_46 workspace at ws+3328 length ws+0
void f348_reduce_46(void) {

	i8 v7768 = (i8)(intptr_t)(ws+3248);
	i8 v7769 = *(i8*)(intptr_t)v7768;
	i8 v7770 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v7770)(v7769);

	i8 v7771 = (i8)(intptr_t)(ws+3264);
	i8 v7772 = *(i8*)(intptr_t)v7771;
	i8 v7773 = v7772+(+40);
	i1 v7774 = *(i1*)(intptr_t)v7773;
	i1 v7775 = (i1)+45;
	if (v7774==v7775) goto c02_05e0; else goto c02_05e1;

c02_05e1:;

	i8 v7776 = (i8)(intptr_t)(ws+3264);
	i8 v7777 = *(i8*)(intptr_t)v7776;
	i8 v7778 = v7777+(+16);
	i8 v7779 = *(i8*)(intptr_t)v7778;
	i8 v7780 = v7779+(+48);
	i2 v7781 = *(i2*)(intptr_t)v7780;
	i8 v7782 = (i8)(intptr_t)(ws+3248);
	i8 v7783 = *(i8*)(intptr_t)v7782;
	i8 v7784 = v7783+(+48);
	i2 v7785 = *(i2*)(intptr_t)v7784;
	if (v7781==v7785) goto c02_05e0; else goto c02_05df;

c02_05df:;

	i8 v7786 = (i8)(intptr_t)(ws+3264);
	i8 v7787 = *(i8*)(intptr_t)v7786;
	i8 v7788 = v7787+(+16);
	i8 v7789 = *(i8*)(intptr_t)v7788;
	i8 v7790 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7791;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7790)(&v7791, v7789);
	i1 v7792 = (i1)+0;
	if (v7791==v7792) goto c02_05e9; else goto c02_05e7;

c02_05e9:;

	i8 v7793 = (i8)(intptr_t)(ws+3248);
	i8 v7794 = *(i8*)(intptr_t)v7793;
	i8 v7795 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7796;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7795)(&v7796, v7794);
	i1 v7797 = (i1)+0;
	if (v7796==v7797) goto c02_05e8; else goto c02_05e7;

c02_05e7:;

	i8 v7798 = (i8)(intptr_t)c02_s0170;
	i8 v7799 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7799)(v7798);

c02_05e8:;

c02_05e2:;

	i8 v7800 = (i8)(intptr_t)(ws+3248);
	i8 v7801 = *(i8*)(intptr_t)v7800;
	i8 v7802 = v7801+(+48);
	i2 v7803 = *(i2*)(intptr_t)v7802;
	i1 v7804 = v7803;
	i8 v7805 = (i8)(intptr_t)(ws+3264);
	i8 v7806 = *(i8*)(intptr_t)v7805;
	i8 v7807 = (i8)(intptr_t)(ws+3264);
	i8 v7808 = *(i8*)(intptr_t)v7807;
	i8 v7809 = v7808+(+16);
	i8 v7810 = *(i8*)(intptr_t)v7809;
	i8 v7811 = (i8)(intptr_t)(f225_IsSNum);
	i1 v7812;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7811)(&v7812, v7810);
	i8 v7813 = (i8)(intptr_t)(f169_MidCCast);
	i8 v7814;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v7813)(&v7814, v7812, v7806, v7804);
	i8 v7815 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7815 = v7814;

	goto c02_05da;

c02_05e0:;

	i8 v7816 = (i8)(intptr_t)(ws+3264);
	i8 v7817 = *(i8*)(intptr_t)v7816;
	i8 v7818 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7818 = v7817;

c02_05da:;

	i8 v7819 = (i8)(intptr_t)(ws+3248);
	i8 v7820 = *(i8*)(intptr_t)v7819;
	i8 v7821 = (i8)(intptr_t)(ws+3240);
	i8 v7822 = *(i8*)(intptr_t)v7821;
	i8 v7823 = v7822+(+16);
	*(i8*)(intptr_t)v7823 = v7820;

	i1 v7824 = (i1)+58;
	i8 v7825 = (i8)(intptr_t)(ws+3256);
	i8 v7826 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7826)(v7825, v7824);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f226_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s0171[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_47 workspace at ws+3328 length ws+8
void f349_reduce_47(void) {

	i8 v7827 = (i8)(intptr_t)(ws+3248);
	i8 v7828 = *(i8*)(intptr_t)v7827;
	i8 v7829 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v7830;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7829)(&v7830, v7828);
	i8 v7831 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7831 = v7830;

	i8 v7832 = (i8)(intptr_t)(ws+3240);
	i8 v7833 = *(i8*)(intptr_t)v7832;
	i8 v7834 = v7833+(+40);
	i1 v7835 = *(i1*)(intptr_t)v7834;
	i1 v7836 = (i1)+47;
	if (v7835==v7836) goto c02_05ed; else goto c02_05ee;

c02_05ed:;

	i8 v7837 = (i8)(intptr_t)(ws+3240);
	i8 v7838 = *(i8*)(intptr_t)v7837;
	i8 v7839 = *(i8*)(intptr_t)v7838;
	i8 v7840 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7840 = v7839;

	i8 v7841 = (i8)(intptr_t)(ws+3328);
	i8 v7842 = *(i8*)(intptr_t)v7841;
	i8 v7843 = *(i8*)(intptr_t)v7842;
	i8 v7844 = *(i8*)(intptr_t)v7843;
	i8 v7845 = (i8)(intptr_t)(f226_IsScalar);
	i1 v7846;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7845)(&v7846, v7844);
	i1 v7847 = (i1)+0;
	if (v7846==v7847) goto c02_05f3; else goto c02_05f2;

c02_05f2:;

	i8 v7848 = (i8)(intptr_t)c02_s0171;
	i8 v7849 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7849)(v7848);

c02_05f3:;

c02_05ef:;

c02_05ee:;

c02_05ea:;

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_48 workspace at ws+3328 length ws+0
void f350_reduce_48(void) {

	i8 v7850 = (i8)(intptr_t)(ws+3248);
	i8 v7851 = *(i8*)(intptr_t)v7850;
	i8 v7852 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v7853;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7852)(&v7853, v7851);
	i8 v7854 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7854 = v7853;

	i1 v7855 = (i1)+59;
	i8 v7856 = (i8)(intptr_t)(ws+3256);
	i8 v7857 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7857)(v7856, v7855);

endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f283_parser_i_bad_next_prev(void);
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_49 workspace at ws+3328 length ws+0
void f351_reduce_49(void) {

	i8 v7858 = (i8)(intptr_t)(ws+3248);
	i8 v7859 = *(i8*)(intptr_t)v7858;
	i8 v7860 = v7859+(+16);
	i8 v7861 = *(i8*)(intptr_t)v7860;
	i8 v7862 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7863;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7862)(&v7863, v7861);
	i1 v7864 = (i1)+0;
	if (v7863==v7864) goto c02_05f7; else goto c02_05f8;

c02_05f7:;

	i8 v7865 = (i8)(intptr_t)(f283_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v7865)();

c02_05f8:;

c02_05f4:;

	i1 v7866 = (i1)+161;
	i8 v7867 = (i8)(intptr_t)(ws+1528);
	i8 v7868 = *(i8*)(intptr_t)v7867;
	i8 v7869 = v7868+(+48);
	i2 v7870 = *(i2*)(intptr_t)v7869;
	i1 v7871 = v7870;
	i8 v7872 = (i8)(intptr_t)(ws+3248);
	i8 v7873 = *(i8*)(intptr_t)v7872;
	i8 v7874 = (i8)(intptr_t)(ws+3248);
	i8 v7875 = *(i8*)(intptr_t)v7874;
	i8 v7876 = v7875+(+16);
	i8 v7877 = *(i8*)(intptr_t)v7876;
	i8 v7878 = *(i8*)(intptr_t)v7877;
	i8 v7879 = v7878+(+50);
	i2 v7880 = *(i2*)(intptr_t)v7879;
	i4 v7881 = v7880;
	i8 v7882 = (i8)(intptr_t)(f157_MidConstant);
	i8 v7883;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7882)(&v7883, v7881);
	i8 v7884 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v7885;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7884)(&v7885, v7883, v7873, v7871, v7866);
	i8 v7886 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7886 = v7885;

	i8 v7887 = (i8)(intptr_t)(ws+3248);
	i8 v7888 = *(i8*)(intptr_t)v7887;
	i8 v7889 = v7888+(+16);
	i8 v7890 = *(i8*)(intptr_t)v7889;
	i8 v7891 = (i8)(intptr_t)(ws+3240);
	i8 v7892 = *(i8*)(intptr_t)v7891;
	i8 v7893 = v7892+(+16);
	*(i8*)(intptr_t)v7893 = v7890;

endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f283_parser_i_bad_next_prev(void);
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_50 workspace at ws+3328 length ws+0
void f352_reduce_50(void) {

	i8 v7894 = (i8)(intptr_t)(ws+3248);
	i8 v7895 = *(i8*)(intptr_t)v7894;
	i8 v7896 = v7895+(+16);
	i8 v7897 = *(i8*)(intptr_t)v7896;
	i8 v7898 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7899;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7898)(&v7899, v7897);
	i1 v7900 = (i1)+0;
	if (v7899==v7900) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v7901 = (i8)(intptr_t)(f283_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v7901)();

c02_05fd:;

c02_05f9:;

	i1 v7902 = (i1)+136;
	i8 v7903 = (i8)(intptr_t)(ws+1528);
	i8 v7904 = *(i8*)(intptr_t)v7903;
	i8 v7905 = v7904+(+48);
	i2 v7906 = *(i2*)(intptr_t)v7905;
	i1 v7907 = v7906;
	i8 v7908 = (i8)(intptr_t)(ws+3248);
	i8 v7909 = *(i8*)(intptr_t)v7908;
	i8 v7910 = (i8)(intptr_t)(ws+3248);
	i8 v7911 = *(i8*)(intptr_t)v7910;
	i8 v7912 = v7911+(+16);
	i8 v7913 = *(i8*)(intptr_t)v7912;
	i8 v7914 = *(i8*)(intptr_t)v7913;
	i8 v7915 = v7914+(+50);
	i2 v7916 = *(i2*)(intptr_t)v7915;
	i4 v7917 = v7916;
	i8 v7918 = (i8)(intptr_t)(f157_MidConstant);
	i8 v7919;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7918)(&v7919, v7917);
	i8 v7920 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v7921;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7920)(&v7921, v7919, v7909, v7907, v7902);
	i8 v7922 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7922 = v7921;

	i8 v7923 = (i8)(intptr_t)(ws+3248);
	i8 v7924 = *(i8*)(intptr_t)v7923;
	i8 v7925 = v7924+(+16);
	i8 v7926 = *(i8*)(intptr_t)v7925;
	i8 v7927 = (i8)(intptr_t)(ws+3240);
	i8 v7928 = *(i8*)(intptr_t)v7927;
	i8 v7929 = v7928+(+16);
	*(i8*)(intptr_t)v7929 = v7926;

endsub:;
}
	void f157_MidConstant(i8* /* m */, i4 /* value */);

// reduce_51 workspace at ws+3328 length ws+0
void f353_reduce_51(void) {

	i8 v7930 = (i8)(intptr_t)(ws+3248);
	i8 v7931 = *(i8*)(intptr_t)v7930;
	i8 v7932 = v7931+(+48);
	i2 v7933 = *(i2*)(intptr_t)v7932;
	i4 v7934 = v7933;
	i8 v7935 = (i8)(intptr_t)(f157_MidConstant);
	i8 v7936;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7935)(&v7936, v7934);
	i8 v7937 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7937 = v7936;

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0172[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f157_MidConstant(i8* /* m */, i4 /* value */);

// reduce_52 workspace at ws+3328 length ws+0
void f354_reduce_52(void) {

	i8 v7938 = (i8)(intptr_t)(ws+3248);
	i8 v7939 = *(i8*)(intptr_t)v7938;
	i8 v7940 = (i8)(intptr_t)(f222_IsArray);
	i1 v7941;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7940)(&v7941, v7939);
	i1 v7942 = (i1)+0;
	if (v7941==v7942) goto c02_0601; else goto c02_0602;

c02_0601:;

	i8 v7943 = (i8)(intptr_t)c02_s0172;
	i8 v7944 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7944)(v7943);

c02_0602:;

c02_05fe:;

	i8 v7945 = (i8)(intptr_t)(ws+3248);
	i8 v7946 = *(i8*)(intptr_t)v7945;
	i8 v7947 = v7946+(+8);
	i2 v7948 = *(i2*)(intptr_t)v7947;
	i4 v7949 = v7948;
	i8 v7950 = (i8)(intptr_t)(f157_MidConstant);
	i8 v7951;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7950)(&v7951, v7949);
	i8 v7952 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7952 = v7951;

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0173[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// not_a_value workspace at ws+3328 length ws+0
void f356_not_a_value(void) {

	i8 v7953 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v7953)();

	i8 v7954 = (i8)(intptr_t)(ws+3248);
	i8 v7955 = *(i8*)(intptr_t)v7954;
	i8 v7956 = v7955+(+8);
	i8 v7957 = *(i8*)(intptr_t)v7956;
	i8 v7958 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7958)(v7957);

	i8 v7959 = (i8)(intptr_t)c02_s0173;
	i8 v7960 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7960)(v7959);

	i8 v7961 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v7961)();

endsub:;
}
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f148_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f141_MidSubref(i8* /* m */, i8 /* subr */);
	void f356_not_a_value(void);
	void f356_not_a_value(void);

// reduce_53 workspace at ws+3328 length ws+0
void f355_reduce_53(void) {


	i8 v7962 = (i8)(intptr_t)(ws+3248);
	i8 v7963 = *(i8*)(intptr_t)v7962;
	i8 v7964 = v7963+(+32);
	i1 v7965 = *(i1*)(intptr_t)v7964;

	if (v7965 != +7) goto c02_0604;

	i8 v7966 = (i8)(intptr_t)(ws+3248);
	i8 v7967 = *(i8*)(intptr_t)v7966;
	i4 v7968 = *(i4*)(intptr_t)v7967;
	i8 v7969 = (i8)(intptr_t)(f157_MidConstant);
	i8 v7970;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7969)(&v7970, v7968);
	i8 v7971 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7971 = v7970;

	goto c02_0603;

c02_0604:;

	if (v7965 != +28) goto c02_0605;

	i8 v7972 = (i8)(intptr_t)(ws+3248);
	i8 v7973 = *(i8*)(intptr_t)v7972;
	i2 v7974 = (i2)+0;
	i8 v7975 = (i8)(intptr_t)(f148_MidAddress);
	i8 v7976;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7975)(&v7976, v7974, v7973);
	i8 v7977 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7977 = v7976;

	i8 v7978 = (i8)(intptr_t)(ws+3248);
	i8 v7979 = *(i8*)(intptr_t)v7978;
	i8 v7980 = *(i8*)(intptr_t)v7979;
	i8 v7981 = *(i8*)(intptr_t)v7980;
	i8 v7982 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v7983;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v7982)(&v7983, v7981);
	i8 v7984 = (i8)(intptr_t)(ws+3240);
	i8 v7985 = *(i8*)(intptr_t)v7984;
	i8 v7986 = v7985+(+16);
	*(i8*)(intptr_t)v7986 = v7983;

	i8 v7987 = (i8)(intptr_t)(ws+3240);
	i8 v7988 = *(i8*)(intptr_t)v7987;
	i8 v7989 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v7990;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v7989)(&v7990, v7988);
	i8 v7991 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7991 = v7990;

	goto c02_0603;

c02_0605:;

	if (v7965 != +30) goto c02_0606;

	i8 v7992 = (i8)(intptr_t)(ws+3248);
	i8 v7993 = *(i8*)(intptr_t)v7992;
	i8 v7994 = *(i8*)(intptr_t)v7993;
	i8 v7995 = v7994+(+52);
	i1 v7996 = *(i1*)(intptr_t)v7995;
	i1 v7997 = (i1)+6;
	if (v7996==v7997) goto c02_060a; else goto c02_060b;

c02_060a:;

	i8 v7998 = (i8)(intptr_t)(ws+3248);
	i8 v7999 = *(i8*)(intptr_t)v7998;
	i8 v8000 = *(i8*)(intptr_t)v7999;
	i8 v8001 = *(i8*)(intptr_t)v8000;
	i8 v8002 = (i8)(intptr_t)(f141_MidSubref);
	i8 v8003;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v8002)(&v8003, v8001);
	i8 v8004 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8004 = v8003;

	i8 v8005 = (i8)(intptr_t)(ws+3248);
	i8 v8006 = *(i8*)(intptr_t)v8005;
	i8 v8007 = *(i8*)(intptr_t)v8006;
	i8 v8008 = *(i8*)(intptr_t)v8007;
	i8 v8009 = v8008+(+48);
	i8 v8010 = *(i8*)(intptr_t)v8009;
	i8 v8011 = v8010+(+40);
	i8 v8012 = *(i8*)(intptr_t)v8011;
	i8 v8013 = (i8)(intptr_t)(ws+3240);
	i8 v8014 = *(i8*)(intptr_t)v8013;
	i8 v8015 = v8014+(+16);
	*(i8*)(intptr_t)v8015 = v8012;

	goto c02_0607;

c02_060b:;

	i8 v8016 = (i8)(intptr_t)(f356_not_a_value);

	((void(*)(void))(intptr_t)v8016)();

c02_0607:;

	goto c02_0603;

c02_0606:;

	i8 v8017 = (i8)(intptr_t)(f356_not_a_value);

	((void(*)(void))(intptr_t)v8017)();

c02_0603:;


endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0174[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3328 length ws+0
void f357_reduce_54(void) {

	i8 v8018 = (i8)(intptr_t)(ws+3256);
	i8 v8019 = *(i8*)(intptr_t)v8018;
	i8 v8020 = v8019+(+16);
	i8 v8021 = *(i8*)(intptr_t)v8020;
	i8 v8022 = (i8)(intptr_t)(f63_IsPtr);
	i1 v8023;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8022)(&v8023, v8021);
	i1 v8024 = (i1)+0;
	if (v8023==v8024) goto c02_060f; else goto c02_0610;

c02_060f:;

	i8 v8025 = (i8)(intptr_t)c02_s0174;
	i8 v8026 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8026)(v8025);

c02_0610:;

c02_060c:;

	i8 v8027 = (i8)(intptr_t)(ws+3256);
	i8 v8028 = *(i8*)(intptr_t)v8027;
	i8 v8029 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8030;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8029)(&v8030, v8028);
	i8 v8031 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8031 = v8030;

	i1 v8032 = (i1)+5;
	i8 v8033 = (i8)(intptr_t)(ws+3248);
	i8 v8034 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8034)(v8033, v8032);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f222_IsArray(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
const i1 c02_s0175[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x64,0x65,0x78,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x2c,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0176[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x69,0x6e,0x64,0x69,0x63,0x65,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f169_MidCCast(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */);
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_55 workspace at ws+3328 length ws+48
void f358_reduce_55(void) {

	i8 v8035 = (i8)(intptr_t)(ws+3272);
	i8 v8036 = *(i8*)(intptr_t)v8035;
	i8 v8037 = v8036+(+16);
	i8 v8038 = *(i8*)(intptr_t)v8037;
	i8 v8039 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8039 = v8038;

	i8 v8040 = (i8)(intptr_t)(ws+3272);
	i8 v8041 = *(i8*)(intptr_t)v8040;
	i8 v8042 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v8043;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8042)(&v8043, v8041);
	i8 v8044 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8044 = v8043;

	i8 v8045 = (i8)(intptr_t)(ws+3328);
	i8 v8046 = *(i8*)(intptr_t)v8045;
	i8 v8047 = (i8)(intptr_t)(f222_IsArray);
	i1 v8048;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8047)(&v8048, v8046);
	i1 v8049 = (i1)+0;
	if (v8048==v8049) goto c02_0614; else goto c02_0615;

c02_0614:;

	i8 v8050 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8050)();

	i8 v8051 = (i8)(intptr_t)c02_s0175;
	i8 v8052 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8052)(v8051);

	i8 v8053 = (i8)(intptr_t)(ws+3328);
	i8 v8054 = *(i8*)(intptr_t)v8053;
	i8 v8055 = v8054+(+32);
	i8 v8056 = *(i8*)(intptr_t)v8055;
	i8 v8057 = v8056+(+8);
	i8 v8058 = *(i8*)(intptr_t)v8057;
	i8 v8059 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8059)(v8058);

	i8 v8060 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8060)();

c02_0615:;

c02_0611:;

	i8 v8061 = (i8)(intptr_t)(ws+3256);
	i8 v8062 = *(i8*)(intptr_t)v8061;
	i8 v8063 = (i8)(intptr_t)(ws+3328);
	i8 v8064 = *(i8*)(intptr_t)v8063;
	i8 v8065 = v8064+(+16);
	i8 v8066 = *(i8*)(intptr_t)v8065;
	i8 v8067 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8067)(v8066, v8062);

	i8 v8068 = (i8)(intptr_t)(ws+3256);
	i8 v8069 = *(i8*)(intptr_t)v8068;
	i8 v8070 = v8069+(+16);
	i8 v8071 = *(i8*)(intptr_t)v8070;
	i8 v8072 = (i8)(intptr_t)(f224_IsNum);
	i1 v8073;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8072)(&v8073, v8071);
	i1 v8074 = (i1)+0;
	if (v8073==v8074) goto c02_0619; else goto c02_061a;

c02_0619:;

	i8 v8075 = (i8)(intptr_t)c02_s0176;
	i8 v8076 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8076)(v8075);

c02_061a:;

c02_0616:;

	i8 v8077 = (i8)(intptr_t)(ws+3328);
	i8 v8078 = *(i8*)(intptr_t)v8077;
	i8 v8079 = *(i8*)(intptr_t)v8078;
	i8 v8080 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8080 = v8079;

	i8 v8081 = (i8)(intptr_t)(ws+1528);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	i8 v8083 = v8082+(+48);
	i2 v8084 = *(i2*)(intptr_t)v8083;
	i1 v8085 = v8084;
	i8 v8086 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v8086 = v8085;

	i1 v8087 = (i1)+166;
	i8 v8088 = (i8)(intptr_t)(ws+3352);
	i1 v8089 = *(i1*)(intptr_t)v8088;
	i8 v8090 = (i8)(intptr_t)(ws+1528);
	i8 v8091 = *(i8*)(intptr_t)v8090;
	i8 v8092 = v8091+(+48);
	i2 v8093 = *(i2*)(intptr_t)v8092;
	i1 v8094 = v8093;
	i8 v8095 = (i8)(intptr_t)(ws+3256);
	i8 v8096 = *(i8*)(intptr_t)v8095;
	i1 v8097 = (i1)+0;
	i8 v8098 = (i8)(intptr_t)(f169_MidCCast);
	i8 v8099;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v8098)(&v8099, v8097, v8096, v8094);
	i8 v8100 = (i8)(intptr_t)(ws+3344);
	i8 v8101 = *(i8*)(intptr_t)v8100;
	i8 v8102 = v8101+(+50);
	i2 v8103 = *(i2*)(intptr_t)v8102;
	i4 v8104 = v8103;
	i8 v8105 = (i8)(intptr_t)(f157_MidConstant);
	i8 v8106;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8105)(&v8106, v8104);
	i8 v8107 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v8108;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8107)(&v8108, v8106, v8099, v8089, v8087);
	i8 v8109 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8109 = v8108;

	i8 v8110 = (i8)(intptr_t)(ws+1528);
	i8 v8111 = *(i8*)(intptr_t)v8110;
	i8 v8112 = (i8)(intptr_t)(ws+3360);
	i8 v8113 = *(i8*)(intptr_t)v8112;
	i8 v8114 = v8113+(+16);
	*(i8*)(intptr_t)v8114 = v8111;

	i1 v8115 = (i1)+161;
	i8 v8116 = (i8)(intptr_t)(ws+3352);
	i1 v8117 = *(i1*)(intptr_t)v8116;
	i8 v8118 = (i8)(intptr_t)(ws+3336);
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = (i8)(intptr_t)(ws+3360);
	i8 v8121 = *(i8*)(intptr_t)v8120;
	i8 v8122 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v8123;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8122)(&v8123, v8121, v8119, v8117, v8115);
	i8 v8124 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v8124 = v8123;

	i8 v8125 = (i8)(intptr_t)(ws+3344);
	i8 v8126 = *(i8*)(intptr_t)v8125;
	i8 v8127 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8128;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8127)(&v8128, v8126);
	i8 v8129 = (i8)(intptr_t)(ws+3368);
	i8 v8130 = *(i8*)(intptr_t)v8129;
	i8 v8131 = v8130+(+16);
	*(i8*)(intptr_t)v8131 = v8128;

	i8 v8132 = (i8)(intptr_t)(ws+3368);
	i8 v8133 = *(i8*)(intptr_t)v8132;
	i8 v8134 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8135;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8134)(&v8135, v8133);
	i8 v8136 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8136 = v8135;

	i1 v8137 = (i1)+17;
	i8 v8138 = (i8)(intptr_t)(ws+3264);
	i8 v8139 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8139)(v8138, v8137);

	i1 v8140 = (i1)+5;
	i8 v8141 = (i8)(intptr_t)(ws+3248);
	i8 v8142 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8142)(v8141, v8140);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f116_MidLoad(i8* /* m */, i8 /* left */, i1 /* width */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f227_IsRecord(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0177[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x6f,0x72,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x20,0x74,0x6f,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f213_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0178[] = { 0x20,0x64,0x6f,0x65,0x73,0x20,0x6e,0x6f,0x74,0x20,0x63,0x6f,0x6e,0x74,0x61,0x69,0x6e,0x20,0x61,0x20,0x6d,0x65,0x6d,0x62,0x65,0x72,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0179[] = { 0x27,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f33_Free(i8 /* block */);
	void f157_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_56 workspace at ws+3328 length ws+24
void f359_reduce_56(void) {

	i8 v8143 = (i8)(intptr_t)(ws+3264);
	i8 v8144 = *(i8*)(intptr_t)v8143;
	i8 v8145 = v8144+(+16);
	i8 v8146 = *(i8*)(intptr_t)v8145;
	i8 v8147 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8147 = v8146;

	i8 v8148 = (i8)(intptr_t)(ws+3264);
	i8 v8149 = *(i8*)(intptr_t)v8148;
	i8 v8150 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v8151;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8150)(&v8151, v8149);
	i8 v8152 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8152 = v8151;

c02_061d:;

	i8 v8153 = (i8)(intptr_t)(ws+3328);
	i8 v8154 = *(i8*)(intptr_t)v8153;
	i8 v8155 = (i8)(intptr_t)(f63_IsPtr);
	i1 v8156;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8155)(&v8156, v8154);
	i1 v8157 = (i1)+0;
	if (v8156==v8157) goto c02_0620; else goto c02_061f;

c02_061f:;

	i8 v8158 = (i8)(intptr_t)(ws+3328);
	i8 v8159 = *(i8*)(intptr_t)v8158;
	i8 v8160 = *(i8*)(intptr_t)v8159;
	i8 v8161 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8161 = v8160;

	i8 v8162 = (i8)(intptr_t)(ws+3328);
	i8 v8163 = *(i8*)(intptr_t)v8162;
	i8 v8164 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8164)(v8163);

	i8 v8165 = (i8)(intptr_t)(ws+1528);
	i8 v8166 = *(i8*)(intptr_t)v8165;
	i8 v8167 = v8166+(+48);
	i2 v8168 = *(i2*)(intptr_t)v8167;
	i1 v8169 = v8168;
	i8 v8170 = (i8)(intptr_t)(ws+3336);
	i8 v8171 = *(i8*)(intptr_t)v8170;
	i8 v8172 = (i8)(intptr_t)(f116_MidLoad);
	i8 v8173;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8172)(&v8173, v8171, v8169);
	i8 v8174 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8174 = v8173;

	goto c02_061d;

c02_0620:;

	i8 v8175 = (i8)(intptr_t)(ws+3328);
	i8 v8176 = *(i8*)(intptr_t)v8175;
	i8 v8177 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8177)(v8176);

	i8 v8178 = (i8)(intptr_t)(ws+3328);
	i8 v8179 = *(i8*)(intptr_t)v8178;
	i8 v8180 = (i8)(intptr_t)(f227_IsRecord);
	i1 v8181;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8180)(&v8181, v8179);
	i1 v8182 = (i1)+0;
	if (v8181==v8182) goto c02_0624; else goto c02_0625;

c02_0624:;

	i8 v8183 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8183)();

	i8 v8184 = (i8)(intptr_t)(ws+3328);
	i8 v8185 = *(i8*)(intptr_t)v8184;
	i8 v8186 = v8185+(+32);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	i8 v8188 = v8187+(+8);
	i8 v8189 = *(i8*)(intptr_t)v8188;
	i8 v8190 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8190)(v8189);

	i8 v8191 = (i8)(intptr_t)c02_s0177;
	i8 v8192 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8192)(v8191);

	i8 v8193 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8193)();

c02_0625:;

c02_0621:;

	i8 v8194 = (i8)(intptr_t)(ws+3328);
	i8 v8195 = *(i8*)(intptr_t)v8194;
	i8 v8196 = (i8)(intptr_t)(ws+3248);
	i8 v8197 = *(i8*)(intptr_t)v8196;
	i8 v8198 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v8199;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8198)(&v8199, v8197, v8195);
	i8 v8200 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8200 = v8199;

	i8 v8201 = (i8)(intptr_t)(ws+3344);
	i8 v8202 = *(i8*)(intptr_t)v8201;
	i8 v8203 = (i8)+0;
	if (v8202==v8203) goto c02_0629; else goto c02_062a;

c02_0629:;

	i8 v8204 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8204)();

	i8 v8205 = (i8)(intptr_t)(ws+3328);
	i8 v8206 = *(i8*)(intptr_t)v8205;
	i8 v8207 = v8206+(+32);
	i8 v8208 = *(i8*)(intptr_t)v8207;
	i8 v8209 = v8208+(+8);
	i8 v8210 = *(i8*)(intptr_t)v8209;
	i8 v8211 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8211)(v8210);

	i8 v8212 = (i8)(intptr_t)c02_s0178;
	i8 v8213 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8213)(v8212);

	i8 v8214 = (i8)(intptr_t)(ws+3248);
	i8 v8215 = *(i8*)(intptr_t)v8214;
	i8 v8216 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8216)(v8215);

	i8 v8217 = (i8)(intptr_t)c02_s0179;
	i8 v8218 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8218)(v8217);

	i8 v8219 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8219)();

c02_062a:;

c02_0626:;

	i8 v8220 = (i8)(intptr_t)(ws+3248);
	i8 v8221 = *(i8*)(intptr_t)v8220;
	i8 v8222 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v8222)(v8221);

	i1 v8223 = (i1)+161;
	i8 v8224 = (i8)(intptr_t)(ws+1528);
	i8 v8225 = *(i8*)(intptr_t)v8224;
	i8 v8226 = v8225+(+48);
	i2 v8227 = *(i2*)(intptr_t)v8226;
	i1 v8228 = v8227;
	i8 v8229 = (i8)(intptr_t)(ws+3336);
	i8 v8230 = *(i8*)(intptr_t)v8229;
	i8 v8231 = (i8)(intptr_t)(ws+3344);
	i8 v8232 = *(i8*)(intptr_t)v8231;
	i8 v8233 = *(i8*)(intptr_t)v8232;
	i8 v8234 = v8233+(+24);
	i2 v8235 = *(i2*)(intptr_t)v8234;
	i4 v8236 = v8235;
	i8 v8237 = (i8)(intptr_t)(f157_MidConstant);
	i8 v8238;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8237)(&v8238, v8236);
	i8 v8239 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v8240;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8239)(&v8240, v8238, v8230, v8228, v8223);
	i8 v8241 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8241 = v8240;

	i8 v8242 = (i8)(intptr_t)(ws+3344);
	i8 v8243 = *(i8*)(intptr_t)v8242;
	i8 v8244 = *(i8*)(intptr_t)v8243;
	i8 v8245 = *(i8*)(intptr_t)v8244;
	i8 v8246 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8247;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8246)(&v8247, v8245);
	i8 v8248 = (i8)(intptr_t)(ws+3240);
	i8 v8249 = *(i8*)(intptr_t)v8248;
	i8 v8250 = v8249+(+16);
	*(i8*)(intptr_t)v8250 = v8247;

	i8 v8251 = (i8)(intptr_t)(ws+3240);
	i8 v8252 = *(i8*)(intptr_t)v8251;
	i8 v8253 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8254;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8253)(&v8254, v8252);
	i8 v8255 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8255 = v8254;

	i1 v8256 = (i1)+8;
	i8 v8257 = (i8)(intptr_t)(ws+3256);
	i8 v8258 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8258)(v8257, v8256);

endsub:;
}
	void f154_MidString(i8* /* m */, i8 /* text */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_57 workspace at ws+3328 length ws+0
void f360_reduce_57(void) {

	i8 v8259 = (i8)(intptr_t)(ws+3248);
	i8 v8260 = *(i8*)(intptr_t)v8259;
	i8 v8261 = (i8)(intptr_t)(f154_MidString);
	i8 v8262;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v8261)(&v8262, v8260);
	i8 v8263 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8263 = v8262;

	i8 v8264 = (i8)(intptr_t)(ws+1512);
	i8 v8265 = *(i8*)(intptr_t)v8264;
	i8 v8266 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8267;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8266)(&v8267, v8265);
	i8 v8268 = (i8)(intptr_t)(ws+3240);
	i8 v8269 = *(i8*)(intptr_t)v8268;
	i8 v8270 = v8269+(+16);
	*(i8*)(intptr_t)v8270 = v8267;

endsub:;
}
	void f284_parser_i_constant_error(void);
	void f58_Discard(i8 /* node */);

// reduce_58 workspace at ws+3328 length ws+0
void f361_reduce_58(void) {

	i8 v8271 = (i8)(intptr_t)(ws+3248);
	i8 v8272 = *(i8*)(intptr_t)v8271;
	i8 v8273 = v8272+(+40);
	i1 v8274 = *(i1*)(intptr_t)v8273;
	i1 v8275 = (i1)+45;
	if (v8274==v8275) goto c02_062f; else goto c02_062e;

c02_062e:;

	i8 v8276 = (i8)(intptr_t)(f284_parser_i_constant_error);

	((void(*)(void))(intptr_t)v8276)();

c02_062f:;

c02_062b:;

	i8 v8277 = (i8)(intptr_t)(ws+3248);
	i8 v8278 = *(i8*)(intptr_t)v8277;
	i4 v8279 = *(i4*)(intptr_t)v8278;
	i8 v8280 = (i8)(intptr_t)(ws+3240);
	*(i4*)(intptr_t)v8280 = v8279;

	i8 v8281 = (i8)(intptr_t)(ws+3248);
	i8 v8282 = *(i8*)(intptr_t)v8281;
	i8 v8283 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8283)(v8282);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_59 workspace at ws+3328 length ws+0
void f362_reduce_59(void) {

	i1 v8284 = (i1)+7;
	i8 v8285 = (i8)(intptr_t)(ws+3272);
	i8 v8286 = *(i8*)(intptr_t)v8285;
	i8 v8287 = v8286+(+32);
	*(i1*)(intptr_t)v8287 = v8284;

	i8 v8288 = (i8)(intptr_t)(ws+3256);
	i4 v8289 = *(i4*)(intptr_t)v8288;
	i8 v8290 = (i8)(intptr_t)(ws+3272);
	i8 v8291 = *(i8*)(intptr_t)v8290;
	*(i4*)(intptr_t)v8291 = v8289;

	i1 v8292 = (i1)+2;
	i8 v8293 = (i8)(intptr_t)(ws+3264);
	i8 v8294 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8294)(v8293, v8292);

	i1 v8295 = (i1)+22;
	i8 v8296 = (i8)(intptr_t)(ws+3248);
	i8 v8297 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8297)(v8296, v8295);

endsub:;
}
const i1 c02_s017a[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f235_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3328 length ws+0
void f363_reduce_60(void) {

	i8 v8298 = (i8)(intptr_t)(ws+3272);
	i4 v8299 = *(i4*)(intptr_t)v8298;
	i8 v8300 = (i8)(intptr_t)(ws+3256);
	i4 v8301 = *(i4*)(intptr_t)v8300;
	if ((s4)v8299<(s4)v8301) goto c02_0634; else goto c02_0633;

c02_0633:;

	i8 v8302 = (i8)(intptr_t)c02_s017a;
	i8 v8303 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8303)(v8302);

c02_0634:;

c02_0630:;

	i8 v8304 = (i8)(intptr_t)(ws+3272);
	i4 v8305 = *(i4*)(intptr_t)v8304;
	i8 v8306 = (i8)(intptr_t)(ws+3256);
	i4 v8307 = *(i4*)(intptr_t)v8306;
	i8 v8308 = (i8)(intptr_t)(f235_ArchGuessIntType);
	i8 v8309;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v8308)(&v8309, v8307, v8305);
	i8 v8310 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8310 = v8309;

	i1 v8311 = (i1)+16;
	i8 v8312 = (i8)(intptr_t)(ws+3280);
	i8 v8313 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8313)(v8312, v8311);

	i1 v8314 = (i1)+45;
	i8 v8315 = (i8)(intptr_t)(ws+3264);
	i8 v8316 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8316)(v8315, v8314);

	i1 v8317 = (i1)+4;
	i8 v8318 = (i8)(intptr_t)(ws+3248);
	i8 v8319 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8319)(v8318, v8317);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f69_StartError(void);
const i1 c02_s017b[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s017c[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_61 workspace at ws+3328 length ws+16
void f364_reduce_61(void) {

	i8 v8320 = (i8)(intptr_t)(ws+3248);
	i8 v8321 = *(i8*)(intptr_t)v8320;
	i8 v8322 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8322 = v8321;

	i8 v8323 = (i8)(intptr_t)(ws+3328);
	i8 v8324 = *(i8*)(intptr_t)v8323;
	i8 v8325 = v8324+(+32);
	i1 v8326 = *(i1*)(intptr_t)v8325;
	i1 v8327 = (i1)+0;
	if (v8326==v8327) goto c02_0638; else goto c02_0639;

c02_0638:;

	i8 v8328 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v8329;

	((void(*)(i8* /* type */))(intptr_t)v8328)(&v8329);
	i8 v8330 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8330 = v8329;

	i1 v8331 = (i1)+1;
	i8 v8332 = (i8)(intptr_t)(ws+3336);
	i8 v8333 = *(i8*)(intptr_t)v8332;
	i8 v8334 = v8333+(+52);
	*(i1*)(intptr_t)v8334 = v8331;

	i1 v8335 = (i1)+30;
	i8 v8336 = (i8)(intptr_t)(ws+3328);
	i8 v8337 = *(i8*)(intptr_t)v8336;
	i8 v8338 = v8337+(+32);
	*(i1*)(intptr_t)v8338 = v8335;

	i8 v8339 = (i8)(intptr_t)(ws+3336);
	i8 v8340 = *(i8*)(intptr_t)v8339;
	i8 v8341 = (i8)(intptr_t)(ws+3328);
	i8 v8342 = *(i8*)(intptr_t)v8341;
	*(i8*)(intptr_t)v8342 = v8340;

	i8 v8343 = (i8)(intptr_t)(ws+3328);
	i8 v8344 = *(i8*)(intptr_t)v8343;
	i8 v8345 = (i8)(intptr_t)(ws+3336);
	i8 v8346 = *(i8*)(intptr_t)v8345;
	i8 v8347 = v8346+(+32);
	*(i8*)(intptr_t)v8347 = v8344;

c02_0639:;

c02_0635:;

	i8 v8348 = (i8)(intptr_t)(ws+3328);
	i8 v8349 = *(i8*)(intptr_t)v8348;
	i8 v8350 = v8349+(+32);
	i1 v8351 = *(i1*)(intptr_t)v8350;
	i1 v8352 = (i1)+30;
	if (v8351==v8352) goto c02_063e; else goto c02_063d;

c02_063d:;

	i8 v8353 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8353)();

	i8 v8354 = (i8)(intptr_t)c02_s017b;
	i8 v8355 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8355)(v8354);

	i8 v8356 = (i8)(intptr_t)(ws+3328);
	i8 v8357 = *(i8*)(intptr_t)v8356;
	i8 v8358 = v8357+(+8);
	i8 v8359 = *(i8*)(intptr_t)v8358;
	i8 v8360 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8360)(v8359);

	i8 v8361 = (i8)(intptr_t)c02_s017c;
	i8 v8362 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8362)(v8361);

	i8 v8363 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8363)();

c02_063e:;

c02_063a:;

	i8 v8364 = (i8)(intptr_t)(ws+3328);
	i8 v8365 = *(i8*)(intptr_t)v8364;
	i8 v8366 = *(i8*)(intptr_t)v8365;
	i8 v8367 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8367 = v8366;

endsub:;
}
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3328 length ws+0
void f365_reduce_62(void) {

	i8 v8368 = (i8)(intptr_t)(ws+3256);
	i8 v8369 = *(i8*)(intptr_t)v8368;
	i8 v8370 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8371;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8370)(&v8371, v8369);
	i8 v8372 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8372 = v8371;

	i1 v8373 = (i1)+5;
	i8 v8374 = (i8)(intptr_t)(ws+3248);
	i8 v8375 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8375)(v8374, v8373);

endsub:;
}
	void f256_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_63 workspace at ws+3328 length ws+0
void f366_reduce_63(void) {

	i8 v8376 = (i8)(intptr_t)(ws+3272);
	i8 v8377 = *(i8*)(intptr_t)v8376;
	i8 v8378 = (i8)(intptr_t)(ws+3256);
	i4 v8379 = *(i4*)(intptr_t)v8378;
	i2 v8380 = (s2)(s4)v8379;
	i8 v8381 = (i8)(intptr_t)(f256_MakeArrayType);
	i8 v8382;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8381)(&v8382, v8380, v8377);
	i8 v8383 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8383 = v8382;

	i1 v8384 = (i1)+17;
	i8 v8385 = (i8)(intptr_t)(ws+3264);
	i8 v8386 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8386)(v8385, v8384);

	i1 v8387 = (i1)+5;
	i8 v8388 = (i8)(intptr_t)(ws+3248);
	i8 v8389 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8389)(v8388, v8387);

endsub:;
}
	void f256_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3328 length ws+0
void f367_reduce_64(void) {

	i8 v8390 = (i8)(intptr_t)(ws+3264);
	i8 v8391 = *(i8*)(intptr_t)v8390;
	i2 v8392 = (i2)+0;
	i8 v8393 = (i8)(intptr_t)(f256_MakeArrayType);
	i8 v8394;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8393)(&v8394, v8392, v8391);
	i8 v8395 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8395 = v8394;

	i1 v8396 = (i1)+17;
	i8 v8397 = (i8)(intptr_t)(ws+3256);
	i8 v8398 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8398)(v8397, v8396);

	i1 v8399 = (i1)+5;
	i8 v8400 = (i8)(intptr_t)(ws+3248);
	i8 v8401 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8401)(v8400, v8399);

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s017d[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_65 workspace at ws+3328 length ws+0
void f368_reduce_65(void) {

	i8 v8402 = (i8)(intptr_t)(ws+3248);
	i8 v8403 = *(i8*)(intptr_t)v8402;
	i8 v8404 = (i8)(intptr_t)(f222_IsArray);
	i1 v8405;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8404)(&v8405, v8403);
	i1 v8406 = (i1)+0;
	if (v8405==v8406) goto c02_0642; else goto c02_0643;

c02_0642:;

	i8 v8407 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8407)();

	i8 v8408 = (i8)(intptr_t)(ws+3248);
	i8 v8409 = *(i8*)(intptr_t)v8408;
	i8 v8410 = v8409+(+32);
	i8 v8411 = *(i8*)(intptr_t)v8410;
	i8 v8412 = v8411+(+8);
	i8 v8413 = *(i8*)(intptr_t)v8412;
	i8 v8414 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8414)(v8413);

	i8 v8415 = (i8)(intptr_t)c02_s017d;
	i8 v8416 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8416)(v8415);

	i8 v8417 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8417)();

c02_0643:;

c02_063f:;

	i8 v8418 = (i8)(intptr_t)(ws+3248);
	i8 v8419 = *(i8*)(intptr_t)v8418;
	i8 v8420 = v8419+(+16);
	i8 v8421 = *(i8*)(intptr_t)v8420;
	i8 v8422 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8422 = v8421;

endsub:;
}
	void f216_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_66 workspace at ws+3328 length ws+8
void f369_reduce_66(void) {

	i8 v8423 = (i8)+0;
	i8 v8424 = (i8)(intptr_t)(ws+3272);
	i8 v8425 = *(i8*)(intptr_t)v8424;
	i8 v8426 = (i8)(intptr_t)(ws+3256);
	i8 v8427 = *(i8*)(intptr_t)v8426;
	i8 v8428 = v8427+(+32);
	i8 v8429 = *(i8*)(intptr_t)v8428;
	i8 v8430 = (i8)(intptr_t)(f216_AddAlias);
	i8 v8431;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v8430)(&v8431, v8429, v8425, v8423);
	i8 v8432 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8432 = v8431;

	i1 v8433 = (i1)+65;
	i8 v8434 = (i8)(intptr_t)(ws+3264);
	i8 v8435 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8435)(v8434, v8433);

	i1 v8436 = (i1)+22;
	i8 v8437 = (i8)(intptr_t)(ws+3248);
	i8 v8438 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8438)(v8437, v8436);

endsub:;
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_67 workspace at ws+3328 length ws+0
void f370_reduce_67(void) {

	i8 v8439 = (i8)+0;
	i8 v8440 = (i8)(intptr_t)(ws+3248);
	i8 v8441 = *(i8*)(intptr_t)v8440;
	i8 v8442 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v8443;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8442)(&v8443, v8441, v8439);
	i8 v8444 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8444 = v8443;

endsub:;
}
	void f213_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f69_StartError(void);
const i1 c02_s017e[] = { 0x73,0x79,0x6d,0x62,0x6f,0x6c,0x20,0x27,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s017f[] = { 0x27,0x20,0x6e,0x6f,0x74,0x20,0x66,0x6f,0x75,0x6e,0x64,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f33_Free(i8 /* block */);

// reduce_68 workspace at ws+3328 length ws+16
void f371_reduce_68(void) {

	i8 v8445 = (i8)(intptr_t)(ws+3248);
	i8 v8446 = *(i8*)(intptr_t)v8445;
	i8 v8447 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8447 = v8446;

	i8 v8448 = (i8)+0;
	i8 v8449 = (i8)(intptr_t)(ws+3328);
	i8 v8450 = *(i8*)(intptr_t)v8449;
	i8 v8451 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v8452;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8451)(&v8452, v8450, v8448);
	i8 v8453 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8453 = v8452;

	i8 v8454 = (i8)(intptr_t)(ws+3336);
	i8 v8455 = *(i8*)(intptr_t)v8454;
	i8 v8456 = (i8)+0;
	if (v8455==v8456) goto c02_0647; else goto c02_0648;

c02_0647:;

	i8 v8457 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8457)();

	i8 v8458 = (i8)(intptr_t)c02_s017e;
	i8 v8459 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8459)(v8458);

	i8 v8460 = (i8)(intptr_t)(ws+3328);
	i8 v8461 = *(i8*)(intptr_t)v8460;
	i8 v8462 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8462)(v8461);

	i8 v8463 = (i8)(intptr_t)c02_s017f;
	i8 v8464 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8464)(v8463);

	i8 v8465 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8465)();

c02_0648:;

c02_0644:;

	i8 v8466 = (i8)(intptr_t)(ws+3328);
	i8 v8467 = *(i8*)(intptr_t)v8466;
	i8 v8468 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v8468)(v8467);

	i8 v8469 = (i8)(intptr_t)(ws+3336);
	i8 v8470 = *(i8*)(intptr_t)v8469;
	i8 v8471 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8471 = v8470;

endsub:;
}
	void f213_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f33_Free(i8 /* block */);

// reduce_69 workspace at ws+3328 length ws+16
void f372_reduce_69(void) {

	i8 v8472 = (i8)(intptr_t)(ws+3248);
	i8 v8473 = *(i8*)(intptr_t)v8472;
	i8 v8474 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8474 = v8473;

	i8 v8475 = (i8)+0;
	i8 v8476 = (i8)(intptr_t)(ws+3328);
	i8 v8477 = *(i8*)(intptr_t)v8476;
	i8 v8478 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v8479;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8478)(&v8479, v8477, v8475);
	i8 v8480 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8480 = v8479;

	i8 v8481 = (i8)(intptr_t)(ws+3336);
	i8 v8482 = *(i8*)(intptr_t)v8481;
	i8 v8483 = (i8)+0;
	if (v8482==v8483) goto c02_064c; else goto c02_064d;

c02_064c:;

	i8 v8484 = (i8)+0;
	i8 v8485 = (i8)(intptr_t)(ws+3328);
	i8 v8486 = *(i8*)(intptr_t)v8485;
	i8 v8487 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v8488;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8487)(&v8488, v8486, v8484);
	i8 v8489 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8489 = v8488;

	goto c02_0649;

c02_064d:;

	i8 v8490 = (i8)(intptr_t)(ws+3328);
	i8 v8491 = *(i8*)(intptr_t)v8490;
	i8 v8492 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v8492)(v8491);

c02_0649:;

	i8 v8493 = (i8)(intptr_t)(ws+3336);
	i8 v8494 = *(i8*)(intptr_t)v8493;
	i8 v8495 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8495 = v8494;

endsub:;
}
const i1 c02_s0180[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_70 workspace at ws+3328 length ws+0
void f373_reduce_70(void) {

	i8 v8496 = (i8)(intptr_t)(ws+3248);
	i8 v8497 = *(i8*)(intptr_t)v8496;
	i8 v8498 = v8497+(+32);
	i1 v8499 = *(i1*)(intptr_t)v8498;

	if (v8499 != +28) goto c02_064f;

	i8 v8500 = (i8)(intptr_t)(ws+3248);
	i8 v8501 = *(i8*)(intptr_t)v8500;
	i8 v8502 = *(i8*)(intptr_t)v8501;
	i8 v8503 = *(i8*)(intptr_t)v8502;
	i8 v8504 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8504 = v8503;

	goto c02_064e;

c02_064f:;

	if (v8499 != +30) goto c02_0650;

	i8 v8505 = (i8)(intptr_t)(ws+3248);
	i8 v8506 = *(i8*)(intptr_t)v8505;
	i8 v8507 = *(i8*)(intptr_t)v8506;
	i8 v8508 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8508 = v8507;

	goto c02_064e;

c02_0650:;

	i8 v8509 = (i8)(intptr_t)c02_s0180;
	i8 v8510 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8510)(v8509);

c02_064e:;


endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3328 length ws+0
void f374_reduce_71(void) {

	i8 v8511 = (i8)(intptr_t)(ws+3256);
	i8 v8512 = *(i8*)(intptr_t)v8511;
	i8 v8513 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8513 = v8512;

	i1 v8514 = (i1)+4;
	i8 v8515 = (i8)(intptr_t)(ws+3248);
	i8 v8516 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8516)(v8515, v8514);

endsub:;
}
	void f285_i_check_sub_call_args(void);
const i1 c02_s0181[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f71_SimpleError(i8 /* message */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f114_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f286_i_end_call(void);

// reduce_72 workspace at ws+3328 length ws+16
void f375_reduce_72(void) {

	i8 v8517 = (i8)(intptr_t)(ws+80);
	i8 v8518 = *(i8*)(intptr_t)v8517;
	i8 v8519 = v8518+(+8);
	i8 v8520 = *(i8*)(intptr_t)v8519;
	i8 v8521 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8521 = v8520;

	i1 v8522 = (i1)+1;
	i8 v8523 = (i8)(intptr_t)(ws+80);
	i8 v8524 = *(i8*)(intptr_t)v8523;
	i8 v8525 = v8524+(+41);
	*(i1*)(intptr_t)v8525 = v8522;

	i8 v8526 = (i8)(intptr_t)(f285_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8526)();

	i8 v8527 = (i8)(intptr_t)(ws+3328);
	i8 v8528 = *(i8*)(intptr_t)v8527;
	i8 v8529 = v8528+(+81);
	i1 v8530 = *(i1*)(intptr_t)v8529;
	i1 v8531 = (i1)+1;
	if (v8530==v8531) goto c02_0655; else goto c02_0654;

c02_0654:;

	i8 v8532 = (i8)(intptr_t)c02_s0181;
	i8 v8533 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8533)(v8532);

c02_0655:;

c02_0651:;

	i8 v8534 = (i8)(intptr_t)(ws+3328);
	i8 v8535 = *(i8*)(intptr_t)v8534;
	i1 v8536 = (i1)+0;
	i8 v8537 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v8538;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8537)(&v8538, v8536, v8535);
	i8 v8539 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8539 = v8538;

	i8 v8540 = (i8)(intptr_t)(ws+3336);
	i8 v8541 = *(i8*)(intptr_t)v8540;
	i8 v8542 = *(i8*)(intptr_t)v8541;
	i8 v8543 = *(i8*)(intptr_t)v8542;
	i8 v8544 = v8543+(+48);
	i2 v8545 = *(i2*)(intptr_t)v8544;
	i1 v8546 = v8545;
	i8 v8547 = (i8)(intptr_t)(ws+3248);
	i8 v8548 = *(i8*)(intptr_t)v8547;
	i8 v8549 = (i8)(intptr_t)(ws+80);
	i8 v8550 = *(i8*)(intptr_t)v8549;
	i8 v8551 = *(i8*)(intptr_t)v8550;
	i8 v8552 = (i8)(intptr_t)(ws+3328);
	i8 v8553 = *(i8*)(intptr_t)v8552;
	i8 v8554 = (i8)(intptr_t)(f114_MidCalle);
	i8 v8555;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8554)(&v8555, v8553, v8551, v8548, v8546);
	i8 v8556 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8556 = v8555;

	i8 v8557 = (i8)(intptr_t)(ws+3336);
	i8 v8558 = *(i8*)(intptr_t)v8557;
	i8 v8559 = *(i8*)(intptr_t)v8558;
	i8 v8560 = *(i8*)(intptr_t)v8559;
	i8 v8561 = (i8)(intptr_t)(ws+3240);
	i8 v8562 = *(i8*)(intptr_t)v8561;
	i8 v8563 = v8562+(+16);
	*(i8*)(intptr_t)v8563 = v8560;

	i8 v8564 = (i8)(intptr_t)(f286_i_end_call);

	((void(*)(void))(intptr_t)v8564)();

endsub:;
}
	void f285_i_check_sub_call_args(void);
const i1 c02_s0182[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f138_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f251_Generate(i8 /* statement */);
	void f286_i_end_call(void);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_73 workspace at ws+3328 length ws+8
void f376_reduce_73(void) {

	i8 v8565 = (i8)(intptr_t)(ws+80);
	i8 v8566 = *(i8*)(intptr_t)v8565;
	i8 v8567 = v8566+(+8);
	i8 v8568 = *(i8*)(intptr_t)v8567;
	i8 v8569 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8569 = v8568;

	i8 v8570 = (i8)(intptr_t)(f285_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8570)();

	i8 v8571 = (i8)(intptr_t)(ws+3328);
	i8 v8572 = *(i8*)(intptr_t)v8571;
	i8 v8573 = v8572+(+81);
	i1 v8574 = *(i1*)(intptr_t)v8573;
	i1 v8575 = (i1)+0;
	if (v8574==v8575) goto c02_065a; else goto c02_0659;

c02_0659:;

	i8 v8576 = (i8)(intptr_t)c02_s0182;
	i8 v8577 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8577)(v8576);

c02_065a:;

c02_0656:;

	i8 v8578 = (i8)(intptr_t)(ws+3256);
	i8 v8579 = *(i8*)(intptr_t)v8578;
	i8 v8580 = (i8)(intptr_t)(ws+80);
	i8 v8581 = *(i8*)(intptr_t)v8580;
	i8 v8582 = *(i8*)(intptr_t)v8581;
	i8 v8583 = (i8)(intptr_t)(ws+3328);
	i8 v8584 = *(i8*)(intptr_t)v8583;
	i8 v8585 = (i8)(intptr_t)(f138_MidCall);
	i8 v8586;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8585)(&v8586, v8584, v8582, v8579);
	i8 v8587 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8587)(v8586);

	i8 v8588 = (i8)(intptr_t)(f286_i_end_call);

	((void(*)(void))(intptr_t)v8588)();

	i1 v8589 = (i1)+22;
	i8 v8590 = (i8)(intptr_t)(ws+3248);
	i8 v8591 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8591)(v8590, v8589);

endsub:;
}
	void f285_i_check_sub_call_args(void);
	void f138_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f251_Generate(i8 /* statement */);
const i1 c02_s0183[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0184[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f121_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f110_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f58_Discard(i8 /* node */);
const i1 c02_s0185[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f286_i_end_call(void);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3328 length ws+41
void f377_reduce_74(void) {

	i8 v8592 = (i8)(intptr_t)(ws+80);
	i8 v8593 = *(i8*)(intptr_t)v8592;
	i8 v8594 = v8593+(+8);
	i8 v8595 = *(i8*)(intptr_t)v8594;
	i8 v8596 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8596 = v8595;

	i8 v8597 = (i8)(intptr_t)(f285_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8597)();

	i8 v8598 = (i8)(intptr_t)(ws+3256);
	i8 v8599 = *(i8*)(intptr_t)v8598;
	i8 v8600 = (i8)(intptr_t)(ws+80);
	i8 v8601 = *(i8*)(intptr_t)v8600;
	i8 v8602 = *(i8*)(intptr_t)v8601;
	i8 v8603 = (i8)(intptr_t)(ws+3328);
	i8 v8604 = *(i8*)(intptr_t)v8603;
	i8 v8605 = (i8)(intptr_t)(f138_MidCall);
	i8 v8606;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8605)(&v8606, v8604, v8602, v8599);
	i8 v8607 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8607)(v8606);

	i8 v8608 = (i8)(intptr_t)(ws+3328);
	i8 v8609 = *(i8*)(intptr_t)v8608;
	i8 v8610 = v8609+(+81);
	i1 v8611 = *(i1*)(intptr_t)v8610;
	i8 v8612 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8612 = v8611;

	i1 v8613 = (i1)+0;
	i8 v8614 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8614 = v8613;

	i8 v8615 = (i8)(intptr_t)(ws+3280);
	i8 v8616 = *(i8*)(intptr_t)v8615;
	i8 v8617 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8617 = v8616;

c02_065d:;

	i8 v8618 = (i8)(intptr_t)(ws+3344);
	i8 v8619 = *(i8*)(intptr_t)v8618;
	i8 v8620 = (i8)+0;
	if (v8619==v8620) goto c02_0660; else goto c02_065f;

c02_065f:;

	i8 v8621 = (i8)(intptr_t)(ws+3336);
	i1 v8622 = *(i1*)(intptr_t)v8621;
	i1 v8623 = (i1)+0;
	if (v8622==v8623) goto c02_0664; else goto c02_0665;

c02_0664:;

	i8 v8624 = (i8)(intptr_t)c02_s0183;
	i8 v8625 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8625)(v8624);

c02_0665:;

c02_0661:;

	i8 v8626 = (i8)(intptr_t)(ws+3336);
	i1 v8627 = *(i1*)(intptr_t)v8626;
	i1 v8628 = v8627+(-1);
	i8 v8629 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8629 = v8628;

	i8 v8630 = (i8)(intptr_t)(ws+3328);
	i8 v8631 = *(i8*)(intptr_t)v8630;
	i8 v8632 = (i8)(intptr_t)(ws+3336);
	i1 v8633 = *(i1*)(intptr_t)v8632;
	i8 v8634 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v8635;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8634)(&v8635, v8633, v8631);
	i8 v8636 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8636 = v8635;

	i8 v8637 = (i8)(intptr_t)(ws+3344);
	i8 v8638 = *(i8*)(intptr_t)v8637;
	i8 v8639 = v8638+(+24);
	i8 v8640 = *(i8*)(intptr_t)v8639;
	i8 v8641 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8641 = v8640;

	i8 v8642 = (i8)+0;
	i8 v8643 = (i8)(intptr_t)(ws+3344);
	i8 v8644 = *(i8*)(intptr_t)v8643;
	i8 v8645 = v8644+(+24);
	*(i8*)(intptr_t)v8645 = v8642;

	i8 v8646 = (i8)(intptr_t)(ws+3344);
	i8 v8647 = *(i8*)(intptr_t)v8646;
	i8 v8648 = v8647+(+32);
	i8 v8649 = *(i8*)(intptr_t)v8648;
	i8 v8650 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8650 = v8649;

	i8 v8651 = (i8)(intptr_t)(ws+3360);
	i8 v8652 = *(i8*)(intptr_t)v8651;
	i8 v8653 = v8652+(+16);
	i8 v8654 = *(i8*)(intptr_t)v8653;
	i8 v8655 = (i8)(intptr_t)(f63_IsPtr);
	i1 v8656;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8655)(&v8656, v8654);
	i1 v8657 = (i1)+0;
	if (v8656==v8657) goto c02_0669; else goto c02_066a;

c02_0669:;

	i8 v8658 = (i8)(intptr_t)c02_s0184;
	i8 v8659 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8659)(v8658);

c02_066a:;

c02_0666:;

	i8 v8660 = (i8)(intptr_t)(ws+3360);
	i8 v8661 = *(i8*)(intptr_t)v8660;
	i8 v8662 = (i8)(intptr_t)(ws+3352);
	i8 v8663 = *(i8*)(intptr_t)v8662;
	i8 v8664 = *(i8*)(intptr_t)v8663;
	i8 v8665 = *(i8*)(intptr_t)v8664;
	i8 v8666 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8667;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8666)(&v8667, v8665);
	i8 v8668 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8668)(v8667, v8661);

	i8 v8669 = (i8)(intptr_t)(ws+3352);
	i8 v8670 = *(i8*)(intptr_t)v8669;
	i8 v8671 = *(i8*)(intptr_t)v8670;
	i8 v8672 = *(i8*)(intptr_t)v8671;
	i8 v8673 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8673)(v8672);

	i8 v8674 = (i8)(intptr_t)(ws+3360);
	i8 v8675 = *(i8*)(intptr_t)v8674;
	i8 v8676 = v8675+(+16);
	i8 v8677 = *(i8*)(intptr_t)v8676;
	i8 v8678 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8678)(v8677);

	i8 v8679 = (i8)(intptr_t)(ws+3352);
	i8 v8680 = *(i8*)(intptr_t)v8679;
	i8 v8681 = *(i8*)(intptr_t)v8680;
	i8 v8682 = *(i8*)(intptr_t)v8681;
	i8 v8683 = v8682+(+48);
	i2 v8684 = *(i2*)(intptr_t)v8683;
	i1 v8685 = v8684;
	i8 v8686 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v8686 = v8685;

	i8 v8687 = (i8)(intptr_t)(ws+3368);
	i1 v8688 = *(i1*)(intptr_t)v8687;
	i8 v8689 = (i8)(intptr_t)(ws+3368);
	i1 v8690 = *(i1*)(intptr_t)v8689;
	i8 v8691 = (i8)(intptr_t)(ws+3328);
	i8 v8692 = *(i8*)(intptr_t)v8691;
	i8 v8693 = (i8)(intptr_t)(ws+3337);
	i1 v8694 = *(i1*)(intptr_t)v8693;
	i8 v8695 = (i8)(intptr_t)(f121_MidPoparg);
	i8 v8696;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v8695)(&v8696, v8694, v8692, v8690);
	i8 v8697 = (i8)(intptr_t)(ws+3360);
	i8 v8698 = *(i8*)(intptr_t)v8697;
	i8 v8699 = (i8)(intptr_t)(f110_MidStore);
	i8 v8700;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8699)(&v8700, v8698, v8696, v8688);
	i8 v8701 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8701)(v8700);

	i8 v8702 = (i8)(intptr_t)(ws+3337);
	i1 v8703 = *(i1*)(intptr_t)v8702;
	i1 v8704 = v8703+(+1);
	i8 v8705 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8705 = v8704;

	i8 v8706 = (i8)(intptr_t)(ws+3352);
	i8 v8707 = *(i8*)(intptr_t)v8706;
	i8 v8708 = *(i8*)(intptr_t)v8707;
	i8 v8709 = v8708+(+16);
	i8 v8710 = *(i8*)(intptr_t)v8709;
	i8 v8711 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8711 = v8710;

	goto c02_065d;

c02_0660:;

	i8 v8712 = (i8)(intptr_t)(ws+3280);
	i8 v8713 = *(i8*)(intptr_t)v8712;
	i8 v8714 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8714)(v8713);

	i8 v8715 = (i8)(intptr_t)(ws+3337);
	i1 v8716 = *(i1*)(intptr_t)v8715;
	i8 v8717 = (i8)(intptr_t)(ws+3328);
	i8 v8718 = *(i8*)(intptr_t)v8717;
	i8 v8719 = v8718+(+81);
	i1 v8720 = *(i1*)(intptr_t)v8719;
	if (v8716==v8720) goto c02_066f; else goto c02_066e;

c02_066e:;

	i8 v8721 = (i8)(intptr_t)c02_s0185;
	i8 v8722 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8722)(v8721);

c02_066f:;

c02_066b:;

	i8 v8723 = (i8)(intptr_t)(f286_i_end_call);

	((void(*)(void))(intptr_t)v8723)();

	i1 v8724 = (i1)+2;
	i8 v8725 = (i8)(intptr_t)(ws+3272);
	i8 v8726 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8726)(v8725, v8724);

	i1 v8727 = (i1)+22;
	i8 v8728 = (i8)(intptr_t)(ws+3248);
	i8 v8729 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8729)(v8728, v8727);

endsub:;
}
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
const i1 c02_s0186[] = { 0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
const i1 c02_s0187[] = { 0x20,0x74,0x6f,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);

// reduce_75 workspace at ws+3328 length ws+16
void f378_reduce_75(void) {

	i8 v8730 = (i8)(intptr_t)(ws+3248);
	i8 v8731 = *(i8*)(intptr_t)v8730;
	i8 v8732 = v8731+(+16);
	i8 v8733 = *(i8*)(intptr_t)v8732;
	i8 v8734 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v8735;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8734)(&v8735, v8733);
	i1 v8736 = (i1)+0;
	if (v8735==v8736) goto c02_0673; else goto c02_0674;

c02_0673:;

	i8 v8737 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8737)();

	i8 v8738 = (i8)(intptr_t)c02_s0186;
	i8 v8739 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8739)(v8738);

	i8 v8740 = (i8)(intptr_t)(ws+3248);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = v8741+(+16);
	i8 v8743 = *(i8*)(intptr_t)v8742;
	i8 v8744 = v8743+(+32);
	i8 v8745 = *(i8*)(intptr_t)v8744;
	i8 v8746 = v8745+(+8);
	i8 v8747 = *(i8*)(intptr_t)v8746;
	i8 v8748 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8748)(v8747);

	i8 v8749 = (i8)(intptr_t)c02_s0187;
	i8 v8750 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8750)(v8749);

	i8 v8751 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8751)();

c02_0674:;

c02_0670:;

	i8 v8752 = (i8)+42;
	i8 v8753 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v8754;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v8753)(&v8754, v8752);
	i8 v8755 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8755 = v8754;

	i8 v8756 = (i8)(intptr_t)(ws+80);
	i8 v8757 = *(i8*)(intptr_t)v8756;
	i8 v8758 = (i8)(intptr_t)(ws+3328);
	i8 v8759 = *(i8*)(intptr_t)v8758;
	i8 v8760 = v8759+(+16);
	*(i8*)(intptr_t)v8760 = v8757;

	i8 v8761 = (i8)(intptr_t)(ws+3248);
	i8 v8762 = *(i8*)(intptr_t)v8761;
	i8 v8763 = v8762+(+16);
	i8 v8764 = *(i8*)(intptr_t)v8763;
	i8 v8765 = *(i8*)(intptr_t)v8764;
	i8 v8766 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8766 = v8765;

	i8 v8767 = (i8)(intptr_t)(ws+3248);
	i8 v8768 = *(i8*)(intptr_t)v8767;
	i8 v8769 = (i8)(intptr_t)(ws+3328);
	i8 v8770 = *(i8*)(intptr_t)v8769;
	*(i8*)(intptr_t)v8770 = v8768;

	i8 v8771 = (i8)(intptr_t)(ws+3336);
	i8 v8772 = *(i8*)(intptr_t)v8771;
	i8 v8773 = (i8)(intptr_t)(ws+3328);
	i8 v8774 = *(i8*)(intptr_t)v8773;
	i8 v8775 = v8774+(+8);
	*(i8*)(intptr_t)v8775 = v8772;

	i8 v8776 = (i8)(intptr_t)(ws+3336);
	i8 v8777 = *(i8*)(intptr_t)v8776;
	i1 v8778 = (i1)+0;
	i8 v8779 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v8780;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8779)(&v8780, v8778, v8777);
	i8 v8781 = (i8)(intptr_t)(ws+3328);
	i8 v8782 = *(i8*)(intptr_t)v8781;
	i8 v8783 = v8782+(+24);
	*(i8*)(intptr_t)v8783 = v8780;

	i8 v8784 = (i8)(intptr_t)(ws+3336);
	i8 v8785 = *(i8*)(intptr_t)v8784;
	i1 v8786 = (i1)+0;
	i8 v8787 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v8788;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8787)(&v8788, v8786, v8785);
	i8 v8789 = (i8)(intptr_t)(ws+3328);
	i8 v8790 = *(i8*)(intptr_t)v8789;
	i8 v8791 = v8790+(+32);
	*(i8*)(intptr_t)v8791 = v8788;

	i8 v8792 = (i8)(intptr_t)(ws+3328);
	i8 v8793 = *(i8*)(intptr_t)v8792;
	i8 v8794 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v8794 = v8793;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_76 workspace at ws+3328 length ws+0
void f379_reduce_76(void) {

	i8 v8795 = (i8)(intptr_t)(ws+3256);
	i8 v8796 = *(i8*)(intptr_t)v8795;
	i8 v8797 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8797 = v8796;

	i1 v8798 = (i1)+4;
	i8 v8799 = (i8)(intptr_t)(ws+3248);
	i8 v8800 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8800)(v8799, v8798);

endsub:;
}
	void f113_MidEnd(i8* /* m */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3328 length ws+0
void f380_reduce_77(void) {

	i8 v8801 = (i8)(intptr_t)(f113_MidEnd);
	i8 v8802;

	((void(*)(i8* /* m */))(intptr_t)v8801)(&v8802);
	i8 v8803 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8803 = v8802;

	i1 v8804 = (i1)+4;
	i8 v8805 = (i8)(intptr_t)(ws+3248);
	i8 v8806 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8806)(v8805, v8804);

endsub:;
}

// reduce_78 workspace at ws+3328 length ws+0
void f381_reduce_78(void) {

	i8 v8807 = (i8)(intptr_t)(ws+3248);
	i8 v8808 = *(i8*)(intptr_t)v8807;
	i8 v8809 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8809 = v8808;

endsub:;
}
	void f58_Discard(i8 /* node */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3328 length ws+0
void f382_reduce_79(void) {

	i8 v8810 = (i8)(intptr_t)(ws+3248);
	i8 v8811 = *(i8*)(intptr_t)v8810;
	i8 v8812 = v8811+(+24);
	i8 v8813 = *(i8*)(intptr_t)v8812;
	i8 v8814 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8814)(v8813);

	i8 v8815 = (i8)(intptr_t)(ws+3264);
	i8 v8816 = *(i8*)(intptr_t)v8815;
	i8 v8817 = (i8)(intptr_t)(ws+3248);
	i8 v8818 = *(i8*)(intptr_t)v8817;
	i8 v8819 = v8818+(+24);
	*(i8*)(intptr_t)v8819 = v8816;

	i8 v8820 = (i8)(intptr_t)(ws+3248);
	i8 v8821 = *(i8*)(intptr_t)v8820;
	i8 v8822 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8822 = v8821;

	i1 v8823 = (i1)+45;
	i8 v8824 = (i8)(intptr_t)(ws+3256);
	i8 v8825 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8825)(v8824, v8823);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0188[] = { 0x74,0x6f,0x6f,0x20,0x6d,0x61,0x6e,0x79,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0x73,0x20,0x69,0x6e,0x20,0x63,0x61,0x6c,0x6c,0x20,0x74,0x6f,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f113_MidEnd(i8* /* m */);
	void f146_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_80 workspace at ws+3328 length ws+8
void f383_reduce_80(void) {

	i8 v8826 = (i8)(intptr_t)(ws+80);
	i8 v8827 = *(i8*)(intptr_t)v8826;
	i8 v8828 = v8827+(+24);
	i8 v8829 = *(i8*)(intptr_t)v8828;
	i8 v8830 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8830 = v8829;

	i8 v8831 = (i8)(intptr_t)(ws+3328);
	i8 v8832 = *(i8*)(intptr_t)v8831;
	i8 v8833 = (i8)+0;
	if (v8832==v8833) goto c02_0678; else goto c02_0679;

c02_0678:;

	i8 v8834 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8834)();

	i8 v8835 = (i8)(intptr_t)c02_s0188;
	i8 v8836 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8836)(v8835);

	i8 v8837 = (i8)(intptr_t)(ws+80);
	i8 v8838 = *(i8*)(intptr_t)v8837;
	i8 v8839 = v8838+(+8);
	i8 v8840 = *(i8*)(intptr_t)v8839;
	i8 v8841 = *(i8*)(intptr_t)v8840;
	i8 v8842 = v8841+(+8);
	i8 v8843 = *(i8*)(intptr_t)v8842;
	i8 v8844 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8844)(v8843);

	i8 v8845 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8845)();

c02_0679:;

c02_0675:;

	i8 v8846 = (i8)(intptr_t)(ws+80);
	i8 v8847 = *(i8*)(intptr_t)v8846;
	i8 v8848 = v8847+(+24);
	i8 v8849 = *(i8*)(intptr_t)v8848;
	i8 v8850 = *(i8*)(intptr_t)v8849;
	i8 v8851 = v8850+(+16);
	i8 v8852 = *(i8*)(intptr_t)v8851;
	i8 v8853 = (i8)(intptr_t)(ws+80);
	i8 v8854 = *(i8*)(intptr_t)v8853;
	i8 v8855 = v8854+(+24);
	*(i8*)(intptr_t)v8855 = v8852;

	i8 v8856 = (i8)(intptr_t)(ws+3248);
	i8 v8857 = *(i8*)(intptr_t)v8856;
	i8 v8858 = (i8)(intptr_t)(ws+3328);
	i8 v8859 = *(i8*)(intptr_t)v8858;
	i8 v8860 = *(i8*)(intptr_t)v8859;
	i8 v8861 = *(i8*)(intptr_t)v8860;
	i8 v8862 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8862)(v8861, v8857);

	i8 v8863 = (i8)(intptr_t)(ws+3328);
	i8 v8864 = *(i8*)(intptr_t)v8863;
	i8 v8865 = *(i8*)(intptr_t)v8864;
	i8 v8866 = *(i8*)(intptr_t)v8865;
	i8 v8867 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8867)(v8866);

	i8 v8868 = (i8)(intptr_t)(ws+3248);
	i8 v8869 = *(i8*)(intptr_t)v8868;
	i8 v8870 = v8869+(+16);
	i8 v8871 = *(i8*)(intptr_t)v8870;
	i8 v8872 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8872)(v8871);

	i8 v8873 = (i8)(intptr_t)(ws+80);
	i8 v8874 = *(i8*)(intptr_t)v8873;
	i8 v8875 = v8874+(+40);
	i1 v8876 = *(i1*)(intptr_t)v8875;
	i1 v8877 = v8876+(+1);
	i8 v8878 = (i8)(intptr_t)(ws+80);
	i8 v8879 = *(i8*)(intptr_t)v8878;
	i8 v8880 = v8879+(+40);
	*(i1*)(intptr_t)v8880 = v8877;

	i8 v8881 = (i8)(intptr_t)(ws+3248);
	i8 v8882 = *(i8*)(intptr_t)v8881;
	i8 v8883 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v8884;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v8883)(&v8884, v8882);
	i8 v8885 = (i8)(intptr_t)(f113_MidEnd);
	i8 v8886;

	((void(*)(i8* /* m */))(intptr_t)v8885)(&v8886);
	i8 v8887 = (i8)(intptr_t)(ws+3248);
	i8 v8888 = *(i8*)(intptr_t)v8887;
	i8 v8889 = (i8)(intptr_t)(ws+80);
	i8 v8890 = *(i8*)(intptr_t)v8889;
	i8 v8891 = v8890+(+8);
	i8 v8892 = *(i8*)(intptr_t)v8891;
	i8 v8893 = (i8)(intptr_t)(ws+80);
	i8 v8894 = *(i8*)(intptr_t)v8893;
	i8 v8895 = v8894+(+8);
	i8 v8896 = *(i8*)(intptr_t)v8895;
	i8 v8897 = v8896+(+80);
	i1 v8898 = *(i1*)(intptr_t)v8897;
	i8 v8899 = (i8)(intptr_t)(ws+80);
	i8 v8900 = *(i8*)(intptr_t)v8899;
	i8 v8901 = v8900+(+40);
	i1 v8902 = *(i1*)(intptr_t)v8901;
	i1 v8903 = v8898-v8902;
	i8 v8904 = (i8)(intptr_t)(f146_MidArg);
	i8 v8905;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8904)(&v8905, v8903, v8892, v8888, v8886, v8884);
	i8 v8906 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8906 = v8905;

endsub:;
}
	void f100_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3328 length ws+0
void f384_reduce_81(void) {

	i8 v8907 = (i8)(intptr_t)(ws+3256);
	i8 v8908 = *(i8*)(intptr_t)v8907;
	i8 v8909 = (i8)(intptr_t)(ws+3272);
	i8 v8910 = *(i8*)(intptr_t)v8909;
	i8 v8911 = (i8)(intptr_t)(f100_MidPair);
	i8 v8912;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v8911)(&v8912, v8910, v8908);
	i8 v8913 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8913 = v8912;

	i1 v8914 = (i1)+45;
	i8 v8915 = (i8)(intptr_t)(ws+3264);
	i8 v8916 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8916)(v8915, v8914);

	i1 v8917 = (i1)+4;
	i8 v8918 = (i8)(intptr_t)(ws+3248);
	i8 v8919 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8919)(v8918, v8917);

endsub:;
}
	void f100_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_82 workspace at ws+3328 length ws+0
void f385_reduce_82(void) {

	i8 v8920 = (i8)(intptr_t)(ws+3248);
	i8 v8921 = *(i8*)(intptr_t)v8920;
	i8 v8922 = (i8)+0;
	i8 v8923 = (i8)(intptr_t)(f100_MidPair);
	i8 v8924;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v8923)(&v8924, v8922, v8921);
	i8 v8925 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8925 = v8924;

endsub:;
}
	void f100_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3328 length ws+0
void f386_reduce_83(void) {

	i8 v8926 = (i8)(intptr_t)(ws+3248);
	i8 v8927 = *(i8*)(intptr_t)v8926;
	i8 v8928 = (i8)(intptr_t)(ws+3264);
	i8 v8929 = *(i8*)(intptr_t)v8928;
	i8 v8930 = (i8)(intptr_t)(f100_MidPair);
	i8 v8931;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v8930)(&v8931, v8929, v8927);
	i8 v8932 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8932 = v8931;

	i1 v8933 = (i1)+45;
	i8 v8934 = (i8)(intptr_t)(ws+3256);
	i8 v8935 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8935)(v8934, v8933);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_84 workspace at ws+3328 length ws+0
void f387_reduce_84(void) {

	i8 v8936 = (i8)(intptr_t)(ws+3248);
	i8 v8937 = *(i8*)(intptr_t)v8936;
	i8 v8938 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v8939;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8938)(&v8939, v8937);
	i8 v8940 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8940 = v8939;

endsub:;
}
	void f202_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f103_MidStartsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f117_MidEndsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f261_ReportWorkspaces(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3328 length ws+0
void f388_reduce_85(void) {

	i8 v8941 = (i8)(intptr_t)(ws+1544);
	i8 v8942 = *(i8*)(intptr_t)v8941;
	i8 v8943 = v8942+(+82);
	i1 v8944 = *(i1*)(intptr_t)v8943;
	i1 v8945 = v8944|(+2);
	i8 v8946 = (i8)(intptr_t)(ws+1544);
	i8 v8947 = *(i8*)(intptr_t)v8946;
	i8 v8948 = v8947+(+82);
	*(i1*)(intptr_t)v8948 = v8945;

	i8 v8949 = (i8)(intptr_t)(ws+1544);
	i8 v8950 = *(i8*)(intptr_t)v8949;
	i8 v8951 = (i8)(intptr_t)(f202_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v8951)(v8950);

	i8 v8952 = (i8)(intptr_t)(ws+1544);
	i8 v8953 = *(i8*)(intptr_t)v8952;
	i8 v8954 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v8954 = v8953;

	i8 v8955 = (i8)(intptr_t)(ws+40);
	i8 v8956 = *(i8*)(intptr_t)v8955;
	i8 v8957 = (i8)(intptr_t)(f103_MidStartsub);
	i8 v8958;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v8957)(&v8958, v8956);
	i8 v8959 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8959)(v8958);

	i8 v8960 = (i8)(intptr_t)(ws+40);
	i8 v8961 = *(i8*)(intptr_t)v8960;
	i8 v8962 = (i8)(intptr_t)(f117_MidEndsub);
	i8 v8963;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v8962)(&v8963, v8961);
	i8 v8964 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8964)(v8963);

	i8 v8965 = (i8)(intptr_t)(ws+40);
	i8 v8966 = *(i8*)(intptr_t)v8965;
	i8 v8967 = (i8)(intptr_t)(f261_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v8967)(v8966);

	i8 v8968 = (i8)(intptr_t)(ws+40);
	i8 v8969 = *(i8*)(intptr_t)v8968;
	i8 v8970 = v8969+(+8);
	i8 v8971 = *(i8*)(intptr_t)v8970;
	i8 v8972 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v8972 = v8971;

	i1 v8973 = (i1)+22;
	i8 v8974 = (i8)(intptr_t)(ws+3248);
	i8 v8975 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8975)(v8974, v8973);

endsub:;
}
const i1 c02_s0189[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3336 length ws+0
void f390_not_an_interface(void) {

	i8 v8976 = (i8)(intptr_t)c02_s0189;
	i8 v8977 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8977)(v8976);

endsub:;
}
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);
	void f390_not_an_interface(void);
	void f390_not_an_interface(void);
	void f197_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f197_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f259_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f259_CopyParameterList(i8 /* subr */, i8 /* param */);
	void f200_EmitterEmitInputParameters(i8 /* subr */);
	void f201_EmitterEmitOutputParameters(i8 /* subr */);
	void f202_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_86 workspace at ws+3328 length ws+8
void f389_reduce_86(void) {


	i8 v8978 = (i8)(intptr_t)(ws+3248);
	i8 v8979 = *(i8*)(intptr_t)v8978;
	i8 v8980 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v8981;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8980)(&v8981, v8979);
	i1 v8982 = (i1)+0;
	if (v8981==v8982) goto c02_067d; else goto c02_067e;

c02_067d:;

	i8 v8983 = (i8)(intptr_t)(f390_not_an_interface);

	((void(*)(void))(intptr_t)v8983)();

c02_067e:;

c02_067a:;

	i8 v8984 = (i8)(intptr_t)(ws+3248);
	i8 v8985 = *(i8*)(intptr_t)v8984;
	i8 v8986 = *(i8*)(intptr_t)v8985;
	i8 v8987 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8987 = v8986;

	i8 v8988 = (i8)(intptr_t)(ws+3328);
	i8 v8989 = *(i8*)(intptr_t)v8988;
	i8 v8990 = v8989+(+82);
	i1 v8991 = *(i1*)(intptr_t)v8990;
	i1 v8992 = v8991&(+2);
	i1 v8993 = (i1)+0;
	if (v8992==v8993) goto c02_0682; else goto c02_0683;

c02_0682:;

	i8 v8994 = (i8)(intptr_t)(f390_not_an_interface);

	((void(*)(void))(intptr_t)v8994)();

c02_0683:;

c02_067f:;

	i8 v8995 = (i8)(intptr_t)(ws+1544);
	i8 v8996 = *(i8*)(intptr_t)v8995;
	i8 v8997 = v8996+(+82);
	i1 v8998 = *(i1*)(intptr_t)v8997;
	i1 v8999 = v8998|(+4);
	i8 v9000 = (i8)(intptr_t)(ws+1544);
	i8 v9001 = *(i8*)(intptr_t)v9000;
	i8 v9002 = v9001+(+82);
	*(i1*)(intptr_t)v9002 = v8999;

	i8 v9003 = (i8)(intptr_t)(ws+3328);
	i8 v9004 = *(i8*)(intptr_t)v9003;
	i8 v9005 = (i8)(intptr_t)(ws+1544);
	i8 v9006 = *(i8*)(intptr_t)v9005;
	i8 v9007 = v9006+(+48);
	*(i8*)(intptr_t)v9007 = v9004;

	i8 v9008 = (i8)(intptr_t)(ws+3248);
	i8 v9009 = *(i8*)(intptr_t)v9008;
	i8 v9010 = (i8)(intptr_t)(ws+1544);
	i8 v9011 = *(i8*)(intptr_t)v9010;
	i8 v9012 = v9011+(+40);
	*(i8*)(intptr_t)v9012 = v9009;

	i8 v9013 = (i8)(intptr_t)(ws+40);
	i8 v9014 = *(i8*)(intptr_t)v9013;
	i8 v9015 = (i8)(intptr_t)(ws+3328);
	i8 v9016 = *(i8*)(intptr_t)v9015;
	i8 v9017 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9017)(v9016, v9014);

	i8 v9018 = (i8)(intptr_t)(ws+3328);
	i8 v9019 = *(i8*)(intptr_t)v9018;
	i8 v9020 = (i8)(intptr_t)(ws+1544);
	i8 v9021 = *(i8*)(intptr_t)v9020;
	i8 v9022 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9022)(v9021, v9019);

	i8 v9023 = (i8)(intptr_t)(ws+3328);
	i8 v9024 = *(i8*)(intptr_t)v9023;
	i8 v9025 = v9024+(+80);
	i1 v9026 = *(i1*)(intptr_t)v9025;
	i8 v9027 = (i8)(intptr_t)(ws+1544);
	i8 v9028 = *(i8*)(intptr_t)v9027;
	i8 v9029 = v9028+(+80);
	*(i1*)(intptr_t)v9029 = v9026;

	i8 v9030 = (i8)(intptr_t)(ws+1544);
	i8 v9031 = *(i8*)(intptr_t)v9030;
	i8 v9032 = v9031+(+80);
	i1 v9033 = *(i1*)(intptr_t)v9032;
	i1 v9034 = (i1)+0;
	if (v9033==v9034) goto c02_0688; else goto c02_0687;

c02_0687:;

	i8 v9035 = (i8)(intptr_t)(ws+3328);
	i8 v9036 = *(i8*)(intptr_t)v9035;
	i8 v9037 = v9036+(+16);
	i8 v9038 = *(i8*)(intptr_t)v9037;
	i8 v9039 = (i8)(intptr_t)(ws+1544);
	i8 v9040 = *(i8*)(intptr_t)v9039;
	i8 v9041 = (i8)(intptr_t)(f259_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9041)(v9040, v9038);

c02_0688:;

c02_0684:;

	i8 v9042 = (i8)(intptr_t)(ws+3328);
	i8 v9043 = *(i8*)(intptr_t)v9042;
	i8 v9044 = v9043+(+81);
	i1 v9045 = *(i1*)(intptr_t)v9044;
	i8 v9046 = (i8)(intptr_t)(ws+1544);
	i8 v9047 = *(i8*)(intptr_t)v9046;
	i8 v9048 = v9047+(+81);
	*(i1*)(intptr_t)v9048 = v9045;

	i8 v9049 = (i8)(intptr_t)(ws+1544);
	i8 v9050 = *(i8*)(intptr_t)v9049;
	i8 v9051 = v9050+(+81);
	i1 v9052 = *(i1*)(intptr_t)v9051;
	i1 v9053 = (i1)+0;
	if (v9052==v9053) goto c02_068d; else goto c02_068c;

c02_068c:;

	i8 v9054 = (i8)(intptr_t)(ws+3328);
	i8 v9055 = *(i8*)(intptr_t)v9054;
	i1 v9056 = (i1)+0;
	i8 v9057 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v9058;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9057)(&v9058, v9056, v9055);
	i8 v9059 = (i8)(intptr_t)(ws+1544);
	i8 v9060 = *(i8*)(intptr_t)v9059;
	i8 v9061 = (i8)(intptr_t)(f259_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9061)(v9060, v9058);

c02_068d:;

c02_0689:;

	i8 v9062 = (i8)(intptr_t)(ws+1544);
	i8 v9063 = *(i8*)(intptr_t)v9062;
	i8 v9064 = (i8)(intptr_t)(f200_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9064)(v9063);

	i8 v9065 = (i8)(intptr_t)(ws+1544);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)(intptr_t)(f201_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9067)(v9066);

	i8 v9068 = (i8)(intptr_t)(ws+1544);
	i8 v9069 = *(i8*)(intptr_t)v9068;
	i8 v9070 = (i8)(intptr_t)(f202_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v9070)(v9069);

	i1 v9071 = (i1)+68;
	i8 v9072 = (i8)(intptr_t)(ws+3256);
	i8 v9073 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9073)(v9072, v9071);

endsub:;
}
	void f195_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3328 length ws+0
void f391_reduce_87(void) {

	i8 v9074 = (i8)(intptr_t)(ws+1544);
	i8 v9075 = *(i8*)(intptr_t)v9074;
	i8 v9076 = v9075+(+56);
	i2 v9077 = *(i2*)(intptr_t)v9076;
	i8 v9078 = (i8)(intptr_t)(ws+3256);
	i8 v9079 = *(i8*)(intptr_t)v9078;
	i8 v9080 = (i8)(intptr_t)(f195_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v9080)(v9079, v9077);

	i1 v9081 = (i1)+11;
	i8 v9082 = (i8)(intptr_t)(ws+3272);
	i8 v9083 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9083)(v9082, v9081);

	i1 v9084 = (i1)+16;
	i8 v9085 = (i8)(intptr_t)(ws+3264);
	i8 v9086 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9086)(v9085, v9084);

	i1 v9087 = (i1)+4;
	i8 v9088 = (i8)(intptr_t)(ws+3248);
	i8 v9089 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9089)(v9088, v9087);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f231_AllocSubrId(i2* /* id */);
	void f61_AllocNewType(i8* /* type */);
	void f194_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_88 workspace at ws+3328 length ws+8
void f392_reduce_88(void) {

	i8 v9090 = (i8)+83;
	i8 v9091 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9092;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9091)(&v9092, v9090);
	i8 v9093 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9093 = v9092;

	i8 v9094 = (i8)(intptr_t)(ws+40);
	i8 v9095 = *(i8*)(intptr_t)v9094;
	i8 v9096 = v9095+(+16);
	i8 v9097 = (i8)(intptr_t)(ws+1544);
	i8 v9098 = *(i8*)(intptr_t)v9097;
	i8 v9099 = v9098+(+32);
	*(i8*)(intptr_t)v9099 = v9096;

	i8 v9100 = (i8)(intptr_t)(ws+40);
	i8 v9101 = *(i8*)(intptr_t)v9100;
	i8 v9102 = (i8)(intptr_t)(ws+1544);
	i8 v9103 = *(i8*)(intptr_t)v9102;
	i8 v9104 = v9103+(+8);
	*(i8*)(intptr_t)v9104 = v9101;

	i8 v9105 = (i8)(intptr_t)(f231_AllocSubrId);
	i2 v9106;

	((void(*)(i2* /* id */))(intptr_t)v9105)(&v9106);
	i8 v9107 = (i8)(intptr_t)(ws+1544);
	i8 v9108 = *(i8*)(intptr_t)v9107;
	i8 v9109 = v9108+(+56);
	*(i2*)(intptr_t)v9109 = v9106;

	i8 v9110 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9111;

	((void(*)(i8* /* type */))(intptr_t)v9110)(&v9111);
	i8 v9112 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9112 = v9111;

	i1 v9113 = (i1)+6;
	i8 v9114 = (i8)(intptr_t)(ws+3328);
	i8 v9115 = *(i8*)(intptr_t)v9114;
	i8 v9116 = v9115+(+52);
	*(i1*)(intptr_t)v9116 = v9113;

	i8 v9117 = (i8)(intptr_t)(ws+1528);
	i8 v9118 = *(i8*)(intptr_t)v9117;
	i8 v9119 = v9118+(+48);
	i2 v9120 = *(i2*)(intptr_t)v9119;
	i8 v9121 = (i8)(intptr_t)(ws+3328);
	i8 v9122 = *(i8*)(intptr_t)v9121;
	i8 v9123 = v9122+(+48);
	*(i2*)(intptr_t)v9123 = v9120;

	i8 v9124 = (i8)(intptr_t)(ws+1528);
	i8 v9125 = *(i8*)(intptr_t)v9124;
	i8 v9126 = v9125+(+53);
	i1 v9127 = *(i1*)(intptr_t)v9126;
	i8 v9128 = (i8)(intptr_t)(ws+3328);
	i8 v9129 = *(i8*)(intptr_t)v9128;
	i8 v9130 = v9129+(+53);
	*(i1*)(intptr_t)v9130 = v9127;

	i8 v9131 = (i8)(intptr_t)(ws+1528);
	i8 v9132 = *(i8*)(intptr_t)v9131;
	i8 v9133 = v9132+(+50);
	i2 v9134 = *(i2*)(intptr_t)v9133;
	i8 v9135 = (i8)(intptr_t)(ws+3328);
	i8 v9136 = *(i8*)(intptr_t)v9135;
	i8 v9137 = v9136+(+50);
	*(i2*)(intptr_t)v9137 = v9134;

	i8 v9138 = (i8)(intptr_t)(ws+1544);
	i8 v9139 = *(i8*)(intptr_t)v9138;
	i8 v9140 = (i8)(intptr_t)(ws+3328);
	i8 v9141 = *(i8*)(intptr_t)v9140;
	*(i8*)(intptr_t)v9141 = v9139;

	i8 v9142 = (i8)(intptr_t)(ws+3328);
	i8 v9143 = *(i8*)(intptr_t)v9142;
	i8 v9144 = (i8)(intptr_t)(ws+1544);
	i8 v9145 = *(i8*)(intptr_t)v9144;
	i8 v9146 = v9145+(+40);
	*(i8*)(intptr_t)v9146 = v9143;

	i8 v9147 = (i8)(intptr_t)(ws+1544);
	i8 v9148 = *(i8*)(intptr_t)v9147;
	i8 v9149 = (i8)(intptr_t)(ws+1544);
	i8 v9150 = *(i8*)(intptr_t)v9149;
	i8 v9151 = v9150+(+48);
	*(i8*)(intptr_t)v9151 = v9148;

	i1 v9152 = (i1)+30;
	i8 v9153 = (i8)(intptr_t)(ws+3248);
	i8 v9154 = *(i8*)(intptr_t)v9153;
	i8 v9155 = v9154+(+32);
	*(i1*)(intptr_t)v9155 = v9152;

	i8 v9156 = (i8)(intptr_t)(ws+3328);
	i8 v9157 = *(i8*)(intptr_t)v9156;
	i8 v9158 = (i8)(intptr_t)(ws+3248);
	i8 v9159 = *(i8*)(intptr_t)v9158;
	*(i8*)(intptr_t)v9159 = v9157;

	i8 v9160 = (i8)(intptr_t)(ws+3248);
	i8 v9161 = *(i8*)(intptr_t)v9160;
	i8 v9162 = (i8)(intptr_t)(ws+3328);
	i8 v9163 = *(i8*)(intptr_t)v9162;
	i8 v9164 = v9163+(+32);
	*(i8*)(intptr_t)v9164 = v9161;

	i8 v9165 = (i8)(intptr_t)(ws+3248);
	i8 v9166 = *(i8*)(intptr_t)v9165;
	i8 v9167 = (i8)(intptr_t)(ws+1544);
	i8 v9168 = *(i8*)(intptr_t)v9167;
	*(i8*)(intptr_t)v9168 = v9166;

	i8 v9169 = (i8)(intptr_t)(ws+1544);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = (i8)(intptr_t)(f194_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v9171)(v9170);

	i8 v9172 = (i8)(intptr_t)(ws+3248);
	i8 v9173 = *(i8*)(intptr_t)v9172;
	i8 v9174 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9174 = v9173;

endsub:;
}
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);
const i1 c02_s018a[] = { 0x6e,0x6f,0x74,0x20,0x61,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0 };
	void f71_SimpleError(i8 /* message */);
const i1 c02_s018b[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x61,0x6c,0x72,0x65,0x61,0x64,0x79,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
const i1 c02_s018c[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x69,0x6d,0x70,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x68,0x65,0x72,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_89 workspace at ws+3328 length ws+0
void f393_reduce_89(void) {

	i8 v9175 = (i8)(intptr_t)(ws+3248);
	i8 v9176 = *(i8*)(intptr_t)v9175;
	i8 v9177 = v9176+(+32);
	i1 v9178 = *(i1*)(intptr_t)v9177;
	i1 v9179 = (i1)+30;
	if (v9178==v9179) goto c02_0695; else goto c02_0693;

c02_0695:;

	i8 v9180 = (i8)(intptr_t)(ws+3248);
	i8 v9181 = *(i8*)(intptr_t)v9180;
	i8 v9182 = *(i8*)(intptr_t)v9181;
	i8 v9183 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v9184;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9183)(&v9184, v9182);
	i1 v9185 = (i1)+0;
	if (v9184==v9185) goto c02_0693; else goto c02_0694;

c02_0693:;

	i8 v9186 = (i8)(intptr_t)c02_s018a;
	i8 v9187 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9187)(v9186);

c02_0694:;

c02_068e:;

	i8 v9188 = (i8)(intptr_t)(ws+3248);
	i8 v9189 = *(i8*)(intptr_t)v9188;
	i8 v9190 = *(i8*)(intptr_t)v9189;
	i8 v9191 = *(i8*)(intptr_t)v9190;
	i8 v9192 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9192 = v9191;

	i8 v9193 = (i8)(intptr_t)(ws+1544);
	i8 v9194 = *(i8*)(intptr_t)v9193;
	i8 v9195 = v9194+(+82);
	i1 v9196 = *(i1*)(intptr_t)v9195;
	i1 v9197 = v9196&(+1);
	i1 v9198 = (i1)+0;
	if (v9197==v9198) goto c02_069a; else goto c02_0699;

c02_0699:;

	i8 v9199 = (i8)(intptr_t)c02_s018b;
	i8 v9200 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9200)(v9199);

c02_069a:;

c02_0696:;

	i8 v9201 = (i8)(intptr_t)(ws+1544);
	i8 v9202 = *(i8*)(intptr_t)v9201;
	i8 v9203 = v9202+(+8);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	i8 v9205 = (i8)(intptr_t)(ws+40);
	i8 v9206 = *(i8*)(intptr_t)v9205;
	if (v9204==v9206) goto c02_069f; else goto c02_069e;

c02_069e:;

	i8 v9207 = (i8)(intptr_t)c02_s018c;
	i8 v9208 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9208)(v9207);

c02_069f:;

c02_069b:;

	i1 v9209 = (i1)+25;
	i8 v9210 = (i8)(intptr_t)(ws+3256);
	i8 v9211 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9211)(v9210, v9209);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f103_MidStartsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);

// reduce_90 workspace at ws+3328 length ws+8
void f394_reduce_90(void) {

	i8 v9212 = (i8)+16;
	i8 v9213 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9214;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9213)(&v9214, v9212);
	i8 v9215 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9215 = v9214;

	i8 v9216 = (i8)(intptr_t)(ws+88);
	i8 v9217 = *(i8*)(intptr_t)v9216;
	i8 v9218 = (i8)(intptr_t)(ws+3328);
	i8 v9219 = *(i8*)(intptr_t)v9218;
	i8 v9220 = v9219+(+8);
	*(i8*)(intptr_t)v9220 = v9217;

	i8 v9221 = (i8)(intptr_t)(ws+52);
	i2 v9222 = *(i2*)(intptr_t)v9221;
	i8 v9223 = (i8)(intptr_t)(ws+3328);
	i8 v9224 = *(i8*)(intptr_t)v9223;
	*(i2*)(intptr_t)v9224 = v9222;

	i2 v9225 = (i2)+0;
	i8 v9226 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9226 = v9225;

	i8 v9227 = (i8)(intptr_t)(ws+54);
	i2 v9228 = *(i2*)(intptr_t)v9227;
	i8 v9229 = (i8)(intptr_t)(ws+3328);
	i8 v9230 = *(i8*)(intptr_t)v9229;
	i8 v9231 = v9230+(+2);
	*(i2*)(intptr_t)v9231 = v9228;

	i2 v9232 = (i2)+0;
	i8 v9233 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9233 = v9232;

	i8 v9234 = (i8)(intptr_t)(ws+3328);
	i8 v9235 = *(i8*)(intptr_t)v9234;
	i8 v9236 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9236 = v9235;

	i8 v9237 = (i8)(intptr_t)(ws+1544);
	i8 v9238 = *(i8*)(intptr_t)v9237;
	i8 v9239 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9239 = v9238;

	i8 v9240 = (i8)(intptr_t)(ws+40);
	i8 v9241 = *(i8*)(intptr_t)v9240;
	i8 v9242 = (i8)(intptr_t)(f103_MidStartsub);
	i8 v9243;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9242)(&v9243, v9241);
	i8 v9244 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9244)(v9243);

	i8 v9245 = (i8)(intptr_t)(ws+40);
	i8 v9246 = *(i8*)(intptr_t)v9245;
	i8 v9247 = v9246+(+82);
	i1 v9248 = *(i1*)(intptr_t)v9247;
	i1 v9249 = v9248|(+1);
	i8 v9250 = (i8)(intptr_t)(ws+40);
	i8 v9251 = *(i8*)(intptr_t)v9250;
	i8 v9252 = v9251+(+82);
	*(i1*)(intptr_t)v9252 = v9249;

endsub:;
}
	void f117_MidEndsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f261_ReportWorkspaces(i8 /* subr */);
	void f33_Free(i8 /* block */);
	void f257_DestructSubroutineContents(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3328 length ws+16
void f395_reduce_91(void) {

	i8 v9253 = (i8)(intptr_t)(ws+40);
	i8 v9254 = *(i8*)(intptr_t)v9253;
	i8 v9255 = (i8)(intptr_t)(f117_MidEndsub);
	i8 v9256;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9255)(&v9256, v9254);
	i8 v9257 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9257)(v9256);

	i8 v9258 = (i8)(intptr_t)(ws+40);
	i8 v9259 = *(i8*)(intptr_t)v9258;
	i8 v9260 = (i8)(intptr_t)(f261_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9260)(v9259);

	i8 v9261 = (i8)(intptr_t)(ws+88);
	i8 v9262 = *(i8*)(intptr_t)v9261;
	i2 v9263 = *(i2*)(intptr_t)v9262;
	i8 v9264 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9264 = v9263;

	i8 v9265 = (i8)(intptr_t)(ws+88);
	i8 v9266 = *(i8*)(intptr_t)v9265;
	i8 v9267 = v9266+(+2);
	i2 v9268 = *(i2*)(intptr_t)v9267;
	i8 v9269 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9269 = v9268;

	i8 v9270 = (i8)(intptr_t)(ws+88);
	i8 v9271 = *(i8*)(intptr_t)v9270;
	i8 v9272 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9272 = v9271;

	i8 v9273 = (i8)(intptr_t)(ws+3328);
	i8 v9274 = *(i8*)(intptr_t)v9273;
	i8 v9275 = v9274+(+8);
	i8 v9276 = *(i8*)(intptr_t)v9275;
	i8 v9277 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9277 = v9276;

	i8 v9278 = (i8)(intptr_t)(ws+3328);
	i8 v9279 = *(i8*)(intptr_t)v9278;
	i8 v9280 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9280)(v9279);

	i8 v9281 = (i8)(intptr_t)(ws+40);
	i8 v9282 = *(i8*)(intptr_t)v9281;
	i8 v9283 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9283 = v9282;

	i8 v9284 = (i8)(intptr_t)(ws+3336);
	i8 v9285 = *(i8*)(intptr_t)v9284;
	i8 v9286 = v9285+(+8);
	i8 v9287 = *(i8*)(intptr_t)v9286;
	i8 v9288 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9288 = v9287;

	i8 v9289 = (i8)(intptr_t)(ws+3336);
	i8 v9290 = *(i8*)(intptr_t)v9289;
	i8 v9291 = (i8)(intptr_t)(f257_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v9291)(v9290);

	i1 v9292 = (i1)+25;
	i8 v9293 = (i8)(intptr_t)(ws+3248);
	i8 v9294 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9294)(v9293, v9292);

endsub:;
}
	void f200_EmitterEmitInputParameters(i8 /* subr */);
	void f201_EmitterEmitOutputParameters(i8 /* subr */);

// reduce_92 workspace at ws+3328 length ws+0
void f396_reduce_92(void) {

	i1 v9295 = (i1)+0;
	i8 v9296 = (i8)(intptr_t)(ws+1544);
	i8 v9297 = *(i8*)(intptr_t)v9296;
	i8 v9298 = v9297+(+81);
	*(i1*)(intptr_t)v9298 = v9295;

	i8 v9299 = (i8)(intptr_t)(ws+1544);
	i8 v9300 = *(i8*)(intptr_t)v9299;
	i8 v9301 = (i8)(intptr_t)(f200_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9301)(v9300);

	i8 v9302 = (i8)(intptr_t)(ws+1544);
	i8 v9303 = *(i8*)(intptr_t)v9302;
	i8 v9304 = (i8)(intptr_t)(f201_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9304)(v9303);

endsub:;
}
	void f93_CountParameters(i1* /* count */, i8 /* param */);
	void f200_EmitterEmitInputParameters(i8 /* subr */);
	void f201_EmitterEmitOutputParameters(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_93 workspace at ws+3328 length ws+0
void f397_reduce_93(void) {

	i8 v9305 = (i8)(intptr_t)(ws+3248);
	i8 v9306 = *(i8*)(intptr_t)v9305;
	i8 v9307 = (i8)(intptr_t)(f93_CountParameters);
	i1 v9308;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9307)(&v9308, v9306);
	i8 v9309 = (i8)(intptr_t)(ws+1544);
	i8 v9310 = *(i8*)(intptr_t)v9309;
	i8 v9311 = v9310+(+81);
	*(i1*)(intptr_t)v9311 = v9308;

	i8 v9312 = (i8)(intptr_t)(ws+1544);
	i8 v9313 = *(i8*)(intptr_t)v9312;
	i8 v9314 = (i8)(intptr_t)(f200_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9314)(v9313);

	i8 v9315 = (i8)(intptr_t)(ws+1544);
	i8 v9316 = *(i8*)(intptr_t)v9315;
	i8 v9317 = (i8)(intptr_t)(f201_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9317)(v9316);

	i1 v9318 = (i1)+6;
	i8 v9319 = (i8)(intptr_t)(ws+3256);
	i8 v9320 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9320)(v9319, v9318);

endsub:;
}
	void f93_CountParameters(i1* /* count */, i8 /* param */);

// reduce_94 workspace at ws+3328 length ws+0
void f398_reduce_94(void) {

	i8 v9321 = (i8)(intptr_t)(ws+3248);
	i8 v9322 = *(i8*)(intptr_t)v9321;
	i8 v9323 = (i8)(intptr_t)(f93_CountParameters);
	i1 v9324;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9323)(&v9324, v9322);
	i8 v9325 = (i8)(intptr_t)(ws+1544);
	i8 v9326 = *(i8*)(intptr_t)v9325;
	i8 v9327 = v9326+(+80);
	*(i1*)(intptr_t)v9327 = v9324;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3328 length ws+0
void f399_reduce_95(void) {

	i8 v9328 = (i8)+0;
	i8 v9329 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9329 = v9328;

	i1 v9330 = (i1)+4;
	i8 v9331 = (i8)(intptr_t)(ws+3248);
	i8 v9332 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9332)(v9331, v9330);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_96 workspace at ws+3328 length ws+0
void f400_reduce_96(void) {

	i8 v9333 = (i8)(intptr_t)(ws+3256);
	i8 v9334 = *(i8*)(intptr_t)v9333;
	i8 v9335 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9335 = v9334;

	i1 v9336 = (i1)+4;
	i8 v9337 = (i8)(intptr_t)(ws+3248);
	i8 v9338 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9338)(v9337, v9336);

endsub:;
}

// reduce_97 workspace at ws+3328 length ws+0
void f401_reduce_97(void) {

	i8 v9339 = (i8)(intptr_t)(ws+3248);
	i8 v9340 = *(i8*)(intptr_t)v9339;
	i8 v9341 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9341 = v9340;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3328 length ws+0
void f402_reduce_98(void) {

	i8 v9342 = (i8)(intptr_t)(ws+3248);
	i8 v9343 = *(i8*)(intptr_t)v9342;
	i8 v9344 = (i8)(intptr_t)(ws+3264);
	i8 v9345 = *(i8*)(intptr_t)v9344;
	i8 v9346 = *(i8*)(intptr_t)v9345;
	i8 v9347 = v9346+(+16);
	*(i8*)(intptr_t)v9347 = v9343;

	i8 v9348 = (i8)(intptr_t)(ws+3264);
	i8 v9349 = *(i8*)(intptr_t)v9348;
	i8 v9350 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9350 = v9349;

	i1 v9351 = (i1)+45;
	i8 v9352 = (i8)(intptr_t)(ws+3256);
	i8 v9353 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9353)(v9352, v9351);

endsub:;
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3328 length ws+0
void f403_reduce_99(void) {

	i8 v9354 = (i8)(intptr_t)(ws+1544);
	i8 v9355 = *(i8*)(intptr_t)v9354;
	i8 v9356 = v9355+(+16);
	i8 v9357 = (i8)(intptr_t)(ws+3264);
	i8 v9358 = *(i8*)(intptr_t)v9357;
	i8 v9359 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v9360;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9359)(&v9360, v9358, v9356);
	i8 v9361 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9361 = v9360;

	i8 v9362 = (i8)(intptr_t)(ws+1544);
	i8 v9363 = *(i8*)(intptr_t)v9362;
	i8 v9364 = (i8)(intptr_t)(ws+3240);
	i8 v9365 = *(i8*)(intptr_t)v9364;
	i8 v9366 = (i8)(intptr_t)(ws+3248);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	i8 v9368 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v9368)(v9367, v9365, v9363);

	i1 v9369 = (i1)+6;
	i8 v9370 = (i8)(intptr_t)(ws+3256);
	i8 v9371 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9371)(v9370, v9369);

endsub:;
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_100 workspace at ws+3328 length ws+0
void f404_reduce_100(void) {

	i8 v9372 = (i8)(intptr_t)(ws+72);
	i8 v9373 = *(i8*)(intptr_t)v9372;
	i8 v9374 = v9373+(+48);
	i2 v9375 = *(i2*)(intptr_t)v9374;
	i8 v9376 = (i8)(intptr_t)(ws+72);
	i8 v9377 = *(i8*)(intptr_t)v9376;
	i8 v9378 = v9377+(+53);
	i1 v9379 = *(i1*)(intptr_t)v9378;
	i8 v9380 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v9381;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v9380)(&v9381, v9379, v9375);
	i8 v9382 = (i8)(intptr_t)(ws+72);
	i8 v9383 = *(i8*)(intptr_t)v9382;
	i8 v9384 = v9383+(+50);
	*(i2*)(intptr_t)v9384 = v9381;

	i1 v9385 = (i1)+65;
	i8 v9386 = (i8)(intptr_t)(ws+3272);
	i8 v9387 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9387)(v9386, v9385);

	i1 v9388 = (i1)+10;
	i8 v9389 = (i8)(intptr_t)(ws+3256);
	i8 v9390 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9390)(v9389, v9388);

	i1 v9391 = (i1)+20;
	i8 v9392 = (i8)(intptr_t)(ws+3248);
	i8 v9393 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9393)(v9392, v9391);

endsub:;
}
	void f287_SymbolRedeclarationError(void);
	void f61_AllocNewType(i8* /* type */);
	void f287_SymbolRedeclarationError(void);

// reduce_101 workspace at ws+3328 length ws+0
void f405_reduce_101(void) {

	i8 v9394 = (i8)(intptr_t)(ws+3248);
	i8 v9395 = *(i8*)(intptr_t)v9394;
	i8 v9396 = v9395+(+32);
	i1 v9397 = *(i1*)(intptr_t)v9396;

	if (v9397 != +30) goto c02_06a1;

	i8 v9398 = (i8)(intptr_t)(ws+3248);
	i8 v9399 = *(i8*)(intptr_t)v9398;
	i8 v9400 = *(i8*)(intptr_t)v9399;
	i8 v9401 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9401 = v9400;

	i8 v9402 = (i8)(intptr_t)(ws+72);
	i8 v9403 = *(i8*)(intptr_t)v9402;
	i8 v9404 = v9403+(+52);
	i1 v9405 = *(i1*)(intptr_t)v9404;
	i1 v9406 = (i1)+1;
	if (v9405==v9406) goto c02_06a6; else goto c02_06a5;

c02_06a5:;

	i8 v9407 = (i8)(intptr_t)(f287_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9407)();

c02_06a6:;

c02_06a2:;

	goto c02_06a0;

c02_06a1:;

	if (v9397 != +0) goto c02_06a7;

	i8 v9408 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9409;

	((void(*)(i8* /* type */))(intptr_t)v9408)(&v9409);
	i8 v9410 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9410 = v9409;

	i1 v9411 = (i1)+30;
	i8 v9412 = (i8)(intptr_t)(ws+3248);
	i8 v9413 = *(i8*)(intptr_t)v9412;
	i8 v9414 = v9413+(+32);
	*(i1*)(intptr_t)v9414 = v9411;

	i8 v9415 = (i8)(intptr_t)(ws+72);
	i8 v9416 = *(i8*)(intptr_t)v9415;
	i8 v9417 = (i8)(intptr_t)(ws+3248);
	i8 v9418 = *(i8*)(intptr_t)v9417;
	*(i8*)(intptr_t)v9418 = v9416;

	i8 v9419 = (i8)(intptr_t)(ws+3248);
	i8 v9420 = *(i8*)(intptr_t)v9419;
	i8 v9421 = (i8)(intptr_t)(ws+72);
	i8 v9422 = *(i8*)(intptr_t)v9421;
	i8 v9423 = v9422+(+32);
	*(i8*)(intptr_t)v9423 = v9420;

	goto c02_06a0;

c02_06a7:;

	i8 v9424 = (i8)(intptr_t)(f287_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9424)();

c02_06a0:;


	i1 v9425 = (i1)+5;
	i8 v9426 = (i8)(intptr_t)(ws+72);
	i8 v9427 = *(i8*)(intptr_t)v9426;
	i8 v9428 = v9427+(+52);
	*(i1*)(intptr_t)v9428 = v9425;

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f227_IsRecord(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s018d[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x20,0x74,0x79,0x70,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_102 workspace at ws+3328 length ws+0
void f406_reduce_102(void) {

	i8 v9429 = (i8)(intptr_t)(ws+3248);
	i8 v9430 = *(i8*)(intptr_t)v9429;
	i8 v9431 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9431)(v9430);

	i8 v9432 = (i8)(intptr_t)(ws+3248);
	i8 v9433 = *(i8*)(intptr_t)v9432;
	i8 v9434 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9435;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9434)(&v9435, v9433);
	i1 v9436 = (i1)+0;
	if (v9435==v9436) goto c02_06ab; else goto c02_06ac;

c02_06ab:;

	i8 v9437 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v9437)();

	i8 v9438 = (i8)(intptr_t)(ws+3248);
	i8 v9439 = *(i8*)(intptr_t)v9438;
	i8 v9440 = v9439+(+32);
	i8 v9441 = *(i8*)(intptr_t)v9440;
	i8 v9442 = v9441+(+8);
	i8 v9443 = *(i8*)(intptr_t)v9442;
	i8 v9444 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9444)(v9443);

	i8 v9445 = (i8)(intptr_t)c02_s018d;
	i8 v9446 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9446)(v9445);

	i8 v9447 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v9447)();

c02_06ac:;

c02_06a8:;

	i8 v9448 = (i8)(intptr_t)(ws+3248);
	i8 v9449 = *(i8*)(intptr_t)v9448;
	i8 v9450 = v9449+(+53);
	i1 v9451 = *(i1*)(intptr_t)v9450;
	i8 v9452 = (i8)(intptr_t)(ws+72);
	i8 v9453 = *(i8*)(intptr_t)v9452;
	i8 v9454 = v9453+(+53);
	*(i1*)(intptr_t)v9454 = v9451;

	i8 v9455 = (i8)(intptr_t)(ws+3248);
	i8 v9456 = *(i8*)(intptr_t)v9455;
	i8 v9457 = v9456+(+48);
	i2 v9458 = *(i2*)(intptr_t)v9457;
	i8 v9459 = (i8)(intptr_t)(ws+72);
	i8 v9460 = *(i8*)(intptr_t)v9459;
	i8 v9461 = v9460+(+48);
	*(i2*)(intptr_t)v9461 = v9458;

	i8 v9462 = (i8)(intptr_t)(ws+3248);
	i8 v9463 = *(i8*)(intptr_t)v9462;
	i8 v9464 = (i8)(intptr_t)(ws+72);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = v9465+(+16);
	*(i8*)(intptr_t)v9466 = v9463;

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_103 workspace at ws+3328 length ws+0
void f407_reduce_103(void) {

	i8 v9467 = (i8)(intptr_t)(ws+3256);
	i8 v9468 = *(i8*)(intptr_t)v9467;
	i8 v9469 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9469)(v9468);

	i8 v9470 = (i8)(intptr_t)(ws+72);
	i8 v9471 = *(i8*)(intptr_t)v9470;
	i8 v9472 = v9471+(+53);
	i1 v9473 = *(i1*)(intptr_t)v9472;
	i8 v9474 = (i8)(intptr_t)(ws+3256);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = v9475+(+53);
	i1 v9477 = *(i1*)(intptr_t)v9476;
	if (v9473<v9477) goto c02_06b0; else goto c02_06b1;

c02_06b0:;

	i8 v9478 = (i8)(intptr_t)(ws+3256);
	i8 v9479 = *(i8*)(intptr_t)v9478;
	i8 v9480 = v9479+(+53);
	i1 v9481 = *(i1*)(intptr_t)v9480;
	i8 v9482 = (i8)(intptr_t)(ws+72);
	i8 v9483 = *(i8*)(intptr_t)v9482;
	i8 v9484 = v9483+(+53);
	*(i1*)(intptr_t)v9484 = v9481;

c02_06b1:;

c02_06ad:;

	i1 v9485 = (i1)+28;
	i8 v9486 = (i8)(intptr_t)(ws+3280);
	i8 v9487 = *(i8*)(intptr_t)v9486;
	i8 v9488 = v9487+(+32);
	*(i1*)(intptr_t)v9488 = v9485;

	i8 v9489 = (i8)+27;
	i8 v9490 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9491;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9490)(&v9491, v9489);
	i8 v9492 = (i8)(intptr_t)(ws+3280);
	i8 v9493 = *(i8*)(intptr_t)v9492;
	*(i8*)(intptr_t)v9493 = v9491;

	i8 v9494 = (i8)(intptr_t)(ws+3256);
	i8 v9495 = *(i8*)(intptr_t)v9494;
	i8 v9496 = (i8)(intptr_t)(ws+3280);
	i8 v9497 = *(i8*)(intptr_t)v9496;
	i8 v9498 = *(i8*)(intptr_t)v9497;
	*(i8*)(intptr_t)v9498 = v9495;

	i8 v9499 = (i8)(intptr_t)(ws+72);
	i8 v9500 = *(i8*)(intptr_t)v9499;
	i8 v9501 = (i8)(intptr_t)(ws+3280);
	i8 v9502 = *(i8*)(intptr_t)v9501;
	i8 v9503 = (i8)(intptr_t)(ws+3272);
	i2 v9504 = *(i2*)(intptr_t)v9503;
	i8 v9505 = (i8)(intptr_t)(f237_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v9505)(v9504, v9502, v9500);

	i1 v9506 = (i1)+6;
	i8 v9507 = (i8)(intptr_t)(ws+3264);
	i8 v9508 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9508)(v9507, v9506);

	i1 v9509 = (i1)+22;
	i8 v9510 = (i8)(intptr_t)(ws+3248);
	i8 v9511 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9511)(v9510, v9509);

endsub:;
}

// reduce_104 workspace at ws+3328 length ws+0
void f408_reduce_104(void) {

	i8 v9512 = (i8)(intptr_t)(ws+72);
	i8 v9513 = *(i8*)(intptr_t)v9512;
	i8 v9514 = v9513+(+48);
	i2 v9515 = *(i2*)(intptr_t)v9514;
	i8 v9516 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9516 = v9515;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_105 workspace at ws+3328 length ws+0
void f409_reduce_105(void) {

	i8 v9517 = (i8)(intptr_t)(ws+3256);
	i4 v9518 = *(i4*)(intptr_t)v9517;
	i2 v9519 = (s2)(s4)v9518;
	i8 v9520 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9520 = v9519;

	i1 v9521 = (i1)+16;
	i8 v9522 = (i8)(intptr_t)(ws+3264);
	i8 v9523 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9523)(v9522, v9521);

	i1 v9524 = (i1)+4;
	i8 v9525 = (i8)(intptr_t)(ws+3248);
	i8 v9526 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9526)(v9525, v9524);

endsub:;
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_106 workspace at ws+3328 length ws+0
void f410_reduce_106(void) {

	i8 v9527 = (i8)(intptr_t)(ws+72);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	i8 v9529 = (i8)(intptr_t)(ws+3248);
	i8 v9530 = *(i8*)(intptr_t)v9529;
	i8 v9531 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v9532;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9531)(&v9532, v9530, v9528);
	i8 v9533 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9533 = v9532;

	i8 v9534 = (i8)(intptr_t)(ws+72);
	i8 v9535 = *(i8*)(intptr_t)v9534;
	i8 v9536 = v9535+(+24);
	i1 v9537 = *(i1*)(intptr_t)v9536;
	i1 v9538 = v9537+(+1);
	i8 v9539 = (i8)(intptr_t)(ws+72);
	i8 v9540 = *(i8*)(intptr_t)v9539;
	i8 v9541 = v9540+(+24);
	*(i1*)(intptr_t)v9541 = v9538;

endsub:;
}
	void f289_CheckEndOfInitialiser(void);
	void f151_MidEndinit(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3328 length ws+0
void f411_reduce_107(void) {

	i8 v9542 = (i8)(intptr_t)(f289_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9542)();

	i8 v9543 = (i8)(intptr_t)(f151_MidEndinit);
	i8 v9544;

	((void(*)(i8* /* m */))(intptr_t)v9543)(&v9544);
	i8 v9545 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9545)(v9544);

	i1 v9546 = (i1)+31;
	i8 v9547 = (i8)(intptr_t)(ws+3272);
	i8 v9548 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9548)(v9547, v9546);

	i1 v9549 = (i1)+32;
	i8 v9550 = (i8)(intptr_t)(ws+3256);
	i8 v9551 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9551)(v9550, v9549);

	i1 v9552 = (i1)+22;
	i8 v9553 = (i8)(intptr_t)(ws+3248);
	i8 v9554 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9554)(v9553, v9552);

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);
	void f222_IsArray(i1* /* result */, i8 /* type */);
	void f227_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018e[] = { 0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x73,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f227_IsRecord(i1* /* result */, i8 /* type */);
const i1 c02_s018f[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x27,0x74,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x61,0x6c,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x6e,0x20,0x69,0x6e,0x68,0x65,0x72,0x69,0x74,0x65,0x64,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f227_IsRecord(i1* /* result */, i8 /* type */);
	void f102_MidStartinit(i8* /* m */, i8 /* sym */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_108 workspace at ws+3328 length ws+0
void f412_reduce_108(void) {

	i8 v9555 = (i8)(intptr_t)(ws+3256);
	i8 v9556 = *(i8*)(intptr_t)v9555;
	i8 v9557 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9557)(v9556);

	i1 v9558 = (i1)+28;
	i8 v9559 = (i8)(intptr_t)(ws+3272);
	i8 v9560 = *(i8*)(intptr_t)v9559;
	i8 v9561 = v9560+(+32);
	*(i1*)(intptr_t)v9561 = v9558;

	i8 v9562 = (i8)+27;
	i8 v9563 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9564;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9563)(&v9564, v9562);
	i8 v9565 = (i8)(intptr_t)(ws+3272);
	i8 v9566 = *(i8*)(intptr_t)v9565;
	*(i8*)(intptr_t)v9566 = v9564;

	i8 v9567 = (i8)(intptr_t)(ws+3256);
	i8 v9568 = *(i8*)(intptr_t)v9567;
	i8 v9569 = (i8)(intptr_t)(ws+3272);
	i8 v9570 = *(i8*)(intptr_t)v9569;
	i8 v9571 = *(i8*)(intptr_t)v9570;
	*(i8*)(intptr_t)v9571 = v9568;

	i8 v9572 = (i8)(intptr_t)(ws+40);
	i8 v9573 = *(i8*)(intptr_t)v9572;
	i8 v9574 = (i8)(intptr_t)(ws+3272);
	i8 v9575 = *(i8*)(intptr_t)v9574;
	i8 v9576 = *(i8*)(intptr_t)v9575;
	i8 v9577 = v9576+(+8);
	*(i8*)(intptr_t)v9577 = v9573;

	i1 v9578 = (i1)+255;
	i8 v9579 = (i8)(intptr_t)(ws+3272);
	i8 v9580 = *(i8*)(intptr_t)v9579;
	i8 v9581 = *(i8*)(intptr_t)v9580;
	i8 v9582 = v9581+(+26);
	*(i1*)(intptr_t)v9582 = v9578;

	i8 v9583 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v9584;

	((void(*)(i2* /* label */))(intptr_t)v9583)(&v9584);
	i8 v9585 = (i8)(intptr_t)(ws+3272);
	i8 v9586 = *(i8*)(intptr_t)v9585;
	i8 v9587 = *(i8*)(intptr_t)v9586;
	i8 v9588 = v9587+(+24);
	*(i2*)(intptr_t)v9588 = v9584;

	i8 v9589 = (i8)(intptr_t)(ws+3256);
	i8 v9590 = *(i8*)(intptr_t)v9589;
	i8 v9591 = (i8)(intptr_t)(f222_IsArray);
	i1 v9592;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9591)(&v9592, v9590);
	i1 v9593 = (i1)+0;
	if (v9592==v9593) goto c02_06b9; else goto c02_06b8;

c02_06b9:;

	i8 v9594 = (i8)(intptr_t)(ws+3256);
	i8 v9595 = *(i8*)(intptr_t)v9594;
	i8 v9596 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9597;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9596)(&v9597, v9595);
	i1 v9598 = (i1)+0;
	if (v9597==v9598) goto c02_06b7; else goto c02_06b8;

c02_06b7:;

	i8 v9599 = (i8)(intptr_t)c02_s018e;
	i8 v9600 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9600)(v9599);

c02_06b8:;

c02_06b2:;

	i8 v9601 = (i8)(intptr_t)(ws+3256);
	i8 v9602 = *(i8*)(intptr_t)v9601;
	i8 v9603 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9604;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9603)(&v9604, v9602);
	i1 v9605 = (i1)+0;
	if (v9604==v9605) goto c02_06c0; else goto c02_06c1;

c02_06c1:;

	i8 v9606 = (i8)(intptr_t)(ws+3256);
	i8 v9607 = *(i8*)(intptr_t)v9606;
	i8 v9608 = v9607+(+16);
	i8 v9609 = *(i8*)(intptr_t)v9608;
	i8 v9610 = (i8)+0;
	if (v9609==v9610) goto c02_06c0; else goto c02_06bf;

c02_06bf:;

	i8 v9611 = (i8)(intptr_t)c02_s018f;
	i8 v9612 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9612)(v9611);

c02_06c0:;

c02_06ba:;

	i8 v9613 = (i8)(intptr_t)(ws+3256);
	i8 v9614 = *(i8*)(intptr_t)v9613;
	i8 v9615 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9616;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9615)(&v9616, v9614);
	i1 v9617 = (i1)+0;
	if (v9616==v9617) goto c02_06c6; else goto c02_06c5;

c02_06c5:;

	i8 v9618 = (i8)(intptr_t)(ws+3256);
	i8 v9619 = *(i8*)(intptr_t)v9618;
	i8 v9620 = *(i8*)(intptr_t)v9619;
	i8 v9621 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9621 = v9620;

c02_06c6:;

c02_06c2:;

	i8 v9622 = (i8)(intptr_t)(ws+3256);
	i8 v9623 = *(i8*)(intptr_t)v9622;
	i8 v9624 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9624 = v9623;

	i2 v9625 = (i2)+0;
	i8 v9626 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9626 = v9625;

	i2 v9627 = (i2)+0;
	i8 v9628 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9628 = v9627;

	i8 v9629 = (i8)(intptr_t)(ws+3272);
	i8 v9630 = *(i8*)(intptr_t)v9629;
	i8 v9631 = (i8)(intptr_t)(f102_MidStartinit);
	i8 v9632;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v9631)(&v9632, v9630);
	i8 v9633 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9633)(v9632);

	i1 v9634 = (i1)+6;
	i8 v9635 = (i8)(intptr_t)(ws+3264);
	i8 v9636 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9636)(v9635, v9634);

	i1 v9637 = (i1)+2;
	i8 v9638 = (i8)(intptr_t)(ws+3248);
	i8 v9639 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9639)(v9638, v9637);

endsub:;
}
	void f293_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f291_AlignTo(i1 /* alignment */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0190[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f71_SimpleError(i8 /* message */);
	void f118_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0191[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f71_SimpleError(i8 /* message */);
	void f104_MidInitstring(i8* /* m */, i8 /* text */);
	void f251_Generate(i8 /* statement */);
const i1 c02_s0192[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f123_MidInitaddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f251_Generate(i8 /* statement */);
const i1 c02_s0193[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f106_MidInitsubref(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f284_parser_i_constant_error(void);
	void f58_Discard(i8 /* node */);

// reduce_109 workspace at ws+3328 length ws+18
void f413_reduce_109(void) {

	i8 v9640 = (i8)(intptr_t)(f293_GetInitedMemberChecked);
	i8 v9641;
	i8 v9642;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9640)(&v9641, &v9642);

	i8 v9643 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9643 = v9642;

	i8 v9644 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9644 = v9641;

	i8 v9645 = (i8)(intptr_t)(ws+3336);
	i8 v9646 = *(i8*)(intptr_t)v9645;
	i8 v9647 = v9646+(+53);
	i1 v9648 = *(i1*)(intptr_t)v9647;
	i8 v9649 = (i8)(intptr_t)(f291_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v9649)(v9648);

	i8 v9650 = (i8)(intptr_t)(ws+3336);
	i8 v9651 = *(i8*)(intptr_t)v9650;
	i8 v9652 = v9651+(+48);
	i2 v9653 = *(i2*)(intptr_t)v9652;
	i8 v9654 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v9654 = v9653;

	i8 v9655 = (i8)(intptr_t)(ws+3248);
	i8 v9656 = *(i8*)(intptr_t)v9655;
	i8 v9657 = v9656+(+40);
	i1 v9658 = *(i1*)(intptr_t)v9657;

	if (v9658 != +45) goto c02_06c8;

	i8 v9659 = (i8)(intptr_t)(ws+3336);
	i8 v9660 = *(i8*)(intptr_t)v9659;
	i8 v9661 = (i8)(intptr_t)(f224_IsNum);
	i1 v9662;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9661)(&v9662, v9660);
	i1 v9663 = (i1)+0;
	if (v9662==v9663) goto c02_06cc; else goto c02_06cd;

c02_06cc:;

	i8 v9664 = (i8)(intptr_t)c02_s0190;
	i8 v9665 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9665)(v9664);

c02_06cd:;

c02_06c9:;

	i8 v9666 = (i8)(intptr_t)(ws+3344);
	i2 v9667 = *(i2*)(intptr_t)v9666;
	i1 v9668 = v9667;
	i8 v9669 = (i8)(intptr_t)(ws+3248);
	i8 v9670 = *(i8*)(intptr_t)v9669;
	i4 v9671 = *(i4*)(intptr_t)v9670;
	i8 v9672 = (i8)(intptr_t)(f118_MidInit);
	i8 v9673;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v9672)(&v9673, v9671, v9668);
	i8 v9674 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9674)(v9673);

	goto c02_06c7;

c02_06c8:;

	if (v9658 != +46) goto c02_06ce;

	i8 v9675 = (i8)(intptr_t)(ws+3336);
	i8 v9676 = *(i8*)(intptr_t)v9675;
	i8 v9677 = (i8)(intptr_t)(f63_IsPtr);
	i1 v9678;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9677)(&v9678, v9676);
	i1 v9679 = (i1)+0;
	if (v9678==v9679) goto c02_06d4; else goto c02_06d6;

c02_06d6:;

	i8 v9680 = (i8)(intptr_t)(ws+3336);
	i8 v9681 = *(i8*)(intptr_t)v9680;
	i8 v9682 = *(i8*)(intptr_t)v9681;
	i8 v9683 = (i8)(intptr_t)(ws+1512);
	i8 v9684 = *(i8*)(intptr_t)v9683;
	if (v9682==v9684) goto c02_06d5; else goto c02_06d4;

c02_06d4:;

	i8 v9685 = (i8)(intptr_t)c02_s0191;
	i8 v9686 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9686)(v9685);

c02_06d5:;

c02_06cf:;

	i8 v9687 = (i8)(intptr_t)(ws+3248);
	i8 v9688 = *(i8*)(intptr_t)v9687;
	i8 v9689 = *(i8*)(intptr_t)v9688;
	i8 v9690 = (i8)(intptr_t)(f104_MidInitstring);
	i8 v9691;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9690)(&v9691, v9689);
	i8 v9692 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9692)(v9691);

	goto c02_06c7;

c02_06ce:;

	if (v9658 != +47) goto c02_06d7;

	i8 v9693 = (i8)(intptr_t)(ws+3336);
	i8 v9694 = *(i8*)(intptr_t)v9693;
	i8 v9695 = (i8)(intptr_t)(ws+3248);
	i8 v9696 = *(i8*)(intptr_t)v9695;
	i8 v9697 = v9696+(+16);
	i8 v9698 = *(i8*)(intptr_t)v9697;
	if (v9694==v9698) goto c02_06dc; else goto c02_06db;

c02_06db:;

	i8 v9699 = (i8)(intptr_t)c02_s0192;
	i8 v9700 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9700)(v9699);

c02_06dc:;

c02_06d8:;

	i8 v9701 = (i8)(intptr_t)(ws+3248);
	i8 v9702 = *(i8*)(intptr_t)v9701;
	i8 v9703 = *(i8*)(intptr_t)v9702;
	i8 v9704 = (i8)(intptr_t)(ws+3248);
	i8 v9705 = *(i8*)(intptr_t)v9704;
	i8 v9706 = v9705+(+8);
	i2 v9707 = *(i2*)(intptr_t)v9706;
	i8 v9708 = (i8)(intptr_t)(f123_MidInitaddress);
	i8 v9709;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v9708)(&v9709, v9707, v9703);
	i8 v9710 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9710)(v9709);

	goto c02_06c7;

c02_06d7:;

	if (v9658 != +48) goto c02_06dd;

	i8 v9711 = (i8)(intptr_t)(ws+3336);
	i8 v9712 = *(i8*)(intptr_t)v9711;
	i8 v9713 = (i8)(intptr_t)(ws+3248);
	i8 v9714 = *(i8*)(intptr_t)v9713;
	i8 v9715 = v9714+(+16);
	i8 v9716 = *(i8*)(intptr_t)v9715;
	if (v9712==v9716) goto c02_06e2; else goto c02_06e1;

c02_06e1:;

	i8 v9717 = (i8)(intptr_t)c02_s0193;
	i8 v9718 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9718)(v9717);

c02_06e2:;

c02_06de:;

	i8 v9719 = (i8)(intptr_t)(ws+3248);
	i8 v9720 = *(i8*)(intptr_t)v9719;
	i8 v9721 = *(i8*)(intptr_t)v9720;
	i8 v9722 = (i8)(intptr_t)(f106_MidInitsubref);
	i8 v9723;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9722)(&v9723, v9721);
	i8 v9724 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9724)(v9723);

	goto c02_06c7;

c02_06dd:;

	i8 v9725 = (i8)(intptr_t)(f284_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9725)();

c02_06c7:;


	i8 v9726 = (i8)(intptr_t)(ws+3248);
	i8 v9727 = *(i8*)(intptr_t)v9726;
	i8 v9728 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9728)(v9727);

	i8 v9729 = (i8)(intptr_t)(ws+1560);
	i2 v9730 = *(i2*)(intptr_t)v9729;
	i8 v9731 = (i8)(intptr_t)(ws+3344);
	i2 v9732 = *(i2*)(intptr_t)v9731;
	i2 v9733 = v9730+v9732;
	i8 v9734 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9734 = v9733;

	i8 v9735 = (i8)(intptr_t)(ws+1562);
	i2 v9736 = *(i2*)(intptr_t)v9735;
	i8 v9737 = (i8)(intptr_t)(ws+3344);
	i2 v9738 = *(i2*)(intptr_t)v9737;
	i2 v9739 = v9736+v9738;
	i8 v9740 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9740 = v9739;

endsub:;
}
	void f289_CheckEndOfInitialiser(void);
	void f33_Free(i8 /* block */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_110 workspace at ws+3328 length ws+0
void f414_reduce_110(void) {

	i8 v9741 = (i8)(intptr_t)(f289_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9741)();

	i8 v9742 = (i8)(intptr_t)(ws+3264);
	i8 v9743 = *(i8*)(intptr_t)v9742;
	i8 v9744 = *(i8*)(intptr_t)v9743;
	i8 v9745 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9745 = v9744;

	i8 v9746 = (i8)(intptr_t)(ws+3264);
	i8 v9747 = *(i8*)(intptr_t)v9746;
	i8 v9748 = v9747+(+8);
	i8 v9749 = *(i8*)(intptr_t)v9748;
	i8 v9750 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9750 = v9749;

	i8 v9751 = (i8)(intptr_t)(ws+3264);
	i8 v9752 = *(i8*)(intptr_t)v9751;
	i8 v9753 = v9752+(+16);
	i2 v9754 = *(i2*)(intptr_t)v9753;
	i8 v9755 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9755 = v9754;

	i8 v9756 = (i8)(intptr_t)(ws+3264);
	i8 v9757 = *(i8*)(intptr_t)v9756;
	i8 v9758 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9758)(v9757);

	i1 v9759 = (i1)+32;
	i8 v9760 = (i8)(intptr_t)(ws+3248);
	i8 v9761 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9761)(v9760, v9759);

endsub:;
}
	void f293_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f291_AlignTo(i1 /* alignment */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f227_IsRecord(i1* /* result */, i8 /* type */);
	void f222_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0194[] = { 0x62,0x72,0x61,0x63,0x65,0x64,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x64,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x20,0x61,0x72,0x72,0x61,0x79,0x73,0x20,0x6f,0x72,0x20,0x72,0x65,0x63,0x6f,0x72,0x64,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_111 workspace at ws+3328 length ws+16
void f415_reduce_111(void) {

	i8 v9762 = (i8)(intptr_t)(f293_GetInitedMemberChecked);
	i8 v9763;
	i8 v9764;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9762)(&v9763, &v9764);

	i8 v9765 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9765 = v9764;

	i8 v9766 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9766 = v9763;

	i8 v9767 = (i8)(intptr_t)(ws+3336);
	i8 v9768 = *(i8*)(intptr_t)v9767;
	i8 v9769 = v9768+(+53);
	i1 v9770 = *(i1*)(intptr_t)v9769;
	i8 v9771 = (i8)(intptr_t)(f291_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v9771)(v9770);

	i8 v9772 = (i8)+18;
	i8 v9773 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9774;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9773)(&v9774, v9772);
	i8 v9775 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9775 = v9774;

	i8 v9776 = (i8)(intptr_t)(ws+72);
	i8 v9777 = *(i8*)(intptr_t)v9776;
	i8 v9778 = (i8)(intptr_t)(ws+3240);
	i8 v9779 = *(i8*)(intptr_t)v9778;
	*(i8*)(intptr_t)v9779 = v9777;

	i8 v9780 = (i8)(intptr_t)(ws+1552);
	i8 v9781 = *(i8*)(intptr_t)v9780;
	i8 v9782 = (i8)(intptr_t)(ws+3240);
	i8 v9783 = *(i8*)(intptr_t)v9782;
	i8 v9784 = v9783+(+8);
	*(i8*)(intptr_t)v9784 = v9781;

	i8 v9785 = (i8)(intptr_t)(ws+1560);
	i2 v9786 = *(i2*)(intptr_t)v9785;
	i8 v9787 = (i8)(intptr_t)(ws+3240);
	i8 v9788 = *(i8*)(intptr_t)v9787;
	i8 v9789 = v9788+(+16);
	*(i2*)(intptr_t)v9789 = v9786;

	i8 v9790 = (i8)(intptr_t)(ws+3336);
	i8 v9791 = *(i8*)(intptr_t)v9790;
	i8 v9792 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9792 = v9791;

	i2 v9793 = (i2)+0;
	i8 v9794 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9794 = v9793;

	i8 v9795 = (i8)(intptr_t)(ws+3336);
	i8 v9796 = *(i8*)(intptr_t)v9795;
	i8 v9797 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9798;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9797)(&v9798, v9796);
	i1 v9799 = (i1)+0;
	if (v9798==v9799) goto c02_06e7; else goto c02_06e6;

c02_06e6:;

	i8 v9800 = (i8)(intptr_t)(ws+3336);
	i8 v9801 = *(i8*)(intptr_t)v9800;
	i8 v9802 = *(i8*)(intptr_t)v9801;
	i8 v9803 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9803 = v9802;

	goto c02_06e3;

c02_06e7:;

	i8 v9804 = (i8)(intptr_t)(ws+3336);
	i8 v9805 = *(i8*)(intptr_t)v9804;
	i8 v9806 = (i8)(intptr_t)(f222_IsArray);
	i1 v9807;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9806)(&v9807, v9805);
	i1 v9808 = (i1)+0;
	if (v9807==v9808) goto c02_06eb; else goto c02_06ea;

c02_06ea:;

	i8 v9809 = (i8)+0;
	i8 v9810 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9810 = v9809;

	goto c02_06e3;

c02_06eb:;

	i8 v9811 = (i8)(intptr_t)c02_s0194;
	i8 v9812 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9812)(v9811);

c02_06e3:;

endsub:;
}
	void f131_MidAsmend(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_112 workspace at ws+3328 length ws+0
void f416_reduce_112(void) {

	i8 v9813 = (i8)(intptr_t)(f131_MidAsmend);
	i8 v9814;

	((void(*)(i8* /* m */))(intptr_t)v9813)(&v9814);
	i8 v9815 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9815)(v9814);

	i1 v9816 = (i1)+22;
	i8 v9817 = (i8)(intptr_t)(ws+3248);
	i8 v9818 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9818)(v9817, v9816);

endsub:;
}
	void f133_MidAsmstart(i8* /* m */);
	void f251_Generate(i8 /* statement */);

// reduce_113 workspace at ws+3328 length ws+0
void f417_reduce_113(void) {

	i8 v9819 = (i8)(intptr_t)(f133_MidAsmstart);
	i8 v9820;

	((void(*)(i8* /* m */))(intptr_t)v9819)(&v9820);
	i8 v9821 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9821)(v9820);

endsub:;
}
	void f140_MidAsmtext(i8* /* m */, i8 /* text */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);

// reduce_114 workspace at ws+3328 length ws+0
void f418_reduce_114(void) {

	i8 v9822 = (i8)(intptr_t)(ws+3248);
	i8 v9823 = *(i8*)(intptr_t)v9822;
	i8 v9824 = (i8)(intptr_t)(f140_MidAsmtext);
	i8 v9825;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9824)(&v9825, v9823);
	i8 v9826 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9826)(v9825);

	i8 v9827 = (i8)(intptr_t)(ws+3248);
	i8 v9828 = *(i8*)(intptr_t)v9827;
	i8 v9829 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9829)(v9828);

endsub:;
}
	void f101_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f251_Generate(i8 /* statement */);

// reduce_115 workspace at ws+3328 length ws+0
void f419_reduce_115(void) {

	i8 v9830 = (i8)(intptr_t)(ws+3248);
	i4 v9831 = *(i4*)(intptr_t)v9830;
	i8 v9832 = (i8)(intptr_t)(f101_MidAsmvalue);
	i8 v9833;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9832)(&v9833, v9831);
	i8 v9834 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9834)(v9833);

endsub:;
}
const i1 c02_s0195[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// bad_reference workspace at ws+3328 length ws+0
void f421_bad_reference(void) {

	i8 v9835 = (i8)(intptr_t)c02_s0195;
	i8 v9836 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9836)(v9835);

endsub:;
}
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);
	void f197_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f155_MidAsmsubref(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f421_bad_reference(void);
	void f152_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f251_Generate(i8 /* statement */);
	void f101_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f251_Generate(i8 /* statement */);
	void f421_bad_reference(void);

// reduce_116 workspace at ws+3328 length ws+0
void f420_reduce_116(void) {


	i8 v9837 = (i8)(intptr_t)(ws+3248);
	i8 v9838 = *(i8*)(intptr_t)v9837;
	i8 v9839 = v9838+(+32);
	i1 v9840 = *(i1*)(intptr_t)v9839;

	if (v9840 != +30) goto c02_06ed;

	i8 v9841 = (i8)(intptr_t)(ws+3248);
	i8 v9842 = *(i8*)(intptr_t)v9841;
	i8 v9843 = *(i8*)(intptr_t)v9842;
	i8 v9844 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v9845;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9844)(&v9845, v9843);
	i1 v9846 = (i1)+0;
	if (v9845==v9846) goto c02_06f2; else goto c02_06f1;

c02_06f1:;

	i8 v9847 = (i8)(intptr_t)(ws+40);
	i8 v9848 = *(i8*)(intptr_t)v9847;
	i8 v9849 = (i8)(intptr_t)(ws+3248);
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851 = *(i8*)(intptr_t)v9850;
	i8 v9852 = *(i8*)(intptr_t)v9851;
	i8 v9853 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9853)(v9852, v9848);

	i8 v9854 = (i8)(intptr_t)(ws+3248);
	i8 v9855 = *(i8*)(intptr_t)v9854;
	i8 v9856 = *(i8*)(intptr_t)v9855;
	i8 v9857 = *(i8*)(intptr_t)v9856;
	i8 v9858 = (i8)(intptr_t)(f155_MidAsmsubref);
	i8 v9859;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9858)(&v9859, v9857);
	i8 v9860 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9860)(v9859);

	goto c02_06ee;

c02_06f2:;

	i8 v9861 = (i8)(intptr_t)(f421_bad_reference);

	((void(*)(void))(intptr_t)v9861)();

c02_06ee:;

	goto c02_06ec;

c02_06ed:;

	if (v9840 != +28) goto c02_06f3;

	i8 v9862 = (i8)(intptr_t)(ws+3248);
	i8 v9863 = *(i8*)(intptr_t)v9862;
	i8 v9864 = (i8)(intptr_t)(f152_MidAsmsymbol);
	i8 v9865;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v9864)(&v9865, v9863);
	i8 v9866 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9866)(v9865);

	goto c02_06ec;

c02_06f3:;

	if (v9840 != +7) goto c02_06f4;

	i8 v9867 = (i8)(intptr_t)(ws+3248);
	i8 v9868 = *(i8*)(intptr_t)v9867;
	i4 v9869 = *(i4*)(intptr_t)v9868;
	i8 v9870 = (i8)(intptr_t)(f101_MidAsmvalue);
	i8 v9871;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9870)(&v9871, v9869);
	i8 v9872 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9872)(v9871);

	goto c02_06ec;

c02_06f4:;

	i8 v9873 = (i8)(intptr_t)(f421_bad_reference);

	((void(*)(void))(intptr_t)v9873)();

c02_06ec:;


endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3328 length ws+0
void f422_reduce_122(void) {

	i1 v9874 = (i1)+26;
	i8 v9875 = (i8)(intptr_t)(ws+3264);
	i8 v9876 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9876)(v9875, v9874);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3328 length ws+0
void f423_reduce_126(void) {

	i1 v9877 = (i1)+22;
	i8 v9878 = (i8)(intptr_t)(ws+3248);
	i8 v9879 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9879)(v9878, v9877);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3328 length ws+0
void f424_reduce_127(void) {

	i1 v9880 = (i1)+25;
	i8 v9881 = (i8)(intptr_t)(ws+3280);
	i8 v9882 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9882)(v9881, v9880);

	i1 v9883 = (i1)+22;
	i8 v9884 = (i8)(intptr_t)(ws+3248);
	i8 v9885 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9885)(v9884, v9883);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3328 length ws+0
void f425_reduce_128(void) {

	i1 v9886 = (i1)+22;
	i8 v9887 = (i8)(intptr_t)(ws+3248);
	i8 v9888 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9888)(v9887, v9886);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3328 length ws+0
void f426_reduce_129(void) {

	i1 v9889 = (i1)+22;
	i8 v9890 = (i8)(intptr_t)(ws+3248);
	i8 v9891 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9891)(v9890, v9889);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3328 length ws+0
void f427_reduce_135(void) {

	i1 v9892 = (i1)+45;
	i8 v9893 = (i8)(intptr_t)(ws+3256);
	i8 v9894 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9894)(v9893, v9892);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3328 length ws+0
void f428_reduce_138(void) {

	i1 v9895 = (i1)+45;
	i8 v9896 = (i8)(intptr_t)(ws+3256);
	i8 v9897 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9897)(v9896, v9895);

endsub:;
}

// reduce_default workspace at ws+3328 length ws+0
void f429_reduce_default(void) {

endsub:;
}
	void f302_reduce_0(void);
	void f303_reduce_1(void);
	void f304_reduce_2(void);
	void f305_reduce_3(void);
	void f306_reduce_4(void);
	void f307_reduce_5(void);
	void f308_reduce_6(void);
	void f309_reduce_7(void);
	void f310_reduce_8(void);
	void f311_reduce_9(void);
	void f312_reduce_10(void);
	void f313_reduce_11(void);
	void f314_reduce_12(void);
	void f315_reduce_13(void);
	void f316_reduce_14(void);
	void f317_reduce_15(void);
	void f318_reduce_16(void);
	void f319_reduce_17(void);
	void f320_reduce_18(void);
	void f321_reduce_19(void);
	void f322_reduce_20(void);
	void f323_reduce_21(void);
	void f324_reduce_22(void);
	void f325_reduce_23(void);
	void f326_reduce_24(void);
	void f327_reduce_25(void);
	void f328_reduce_26(void);
	void f329_reduce_27(void);
	void f330_reduce_28(void);
	void f331_reduce_29(void);
	void f332_reduce_30(void);
	void f333_reduce_31(void);
	void f334_reduce_32(void);
	void f335_reduce_33(void);
	void f336_reduce_34(void);
	void f337_reduce_35(void);
	void f338_reduce_36(void);
	void f339_reduce_37(void);
	void f340_reduce_38(void);
	void f341_reduce_39(void);
	void f342_reduce_40(void);
	void f343_reduce_41(void);
	void f344_reduce_42(void);
	void f345_reduce_43(void);
	void f346_reduce_44(void);
	void f347_reduce_45(void);
	void f348_reduce_46(void);
	void f349_reduce_47(void);
	void f350_reduce_48(void);
	void f351_reduce_49(void);
	void f352_reduce_50(void);
	void f353_reduce_51(void);
	void f354_reduce_52(void);
	void f355_reduce_53(void);
	void f357_reduce_54(void);
	void f358_reduce_55(void);
	void f359_reduce_56(void);
	void f360_reduce_57(void);
	void f361_reduce_58(void);
	void f362_reduce_59(void);
	void f363_reduce_60(void);
	void f364_reduce_61(void);
	void f365_reduce_62(void);
	void f366_reduce_63(void);
	void f367_reduce_64(void);
	void f368_reduce_65(void);
	void f369_reduce_66(void);
	void f370_reduce_67(void);
	void f371_reduce_68(void);
	void f372_reduce_69(void);
	void f373_reduce_70(void);
	void f374_reduce_71(void);
	void f375_reduce_72(void);
	void f376_reduce_73(void);
	void f377_reduce_74(void);
	void f378_reduce_75(void);
	void f379_reduce_76(void);
	void f380_reduce_77(void);
	void f381_reduce_78(void);
	void f382_reduce_79(void);
	void f383_reduce_80(void);
	void f384_reduce_81(void);
	void f385_reduce_82(void);
	void f386_reduce_83(void);
	void f387_reduce_84(void);
	void f388_reduce_85(void);
	void f389_reduce_86(void);
	void f391_reduce_87(void);
	void f392_reduce_88(void);
	void f393_reduce_89(void);
	void f394_reduce_90(void);
	void f395_reduce_91(void);
	void f396_reduce_92(void);
	void f397_reduce_93(void);
	void f398_reduce_94(void);
	void f399_reduce_95(void);
	void f400_reduce_96(void);
	void f401_reduce_97(void);
	void f402_reduce_98(void);
	void f403_reduce_99(void);
	void f404_reduce_100(void);
	void f405_reduce_101(void);
	void f406_reduce_102(void);
	void f407_reduce_103(void);
	void f408_reduce_104(void);
	void f409_reduce_105(void);
	void f410_reduce_106(void);
	void f411_reduce_107(void);
	void f412_reduce_108(void);
	void f413_reduce_109(void);
	void f414_reduce_110(void);
	void f415_reduce_111(void);
	void f416_reduce_112(void);
	void f417_reduce_113(void);
	void f418_reduce_114(void);
	void f419_reduce_115(void);
	void f420_reduce_116(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f422_reduce_122(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f423_reduce_126(void);
	void f424_reduce_127(void);
	void f425_reduce_128(void);
	void f426_reduce_129(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f427_reduce_135(void);
	void f429_reduce_default(void);
	void f429_reduce_default(void);
	void f428_reduce_138(void);
static data f300_yy_reduce_s06f5[] = {

	{ .ptr = (void*)f302_reduce_0 },

	{ .ptr = (void*)f303_reduce_1 },

	{ .ptr = (void*)f304_reduce_2 },

	{ .ptr = (void*)f305_reduce_3 },

	{ .ptr = (void*)f306_reduce_4 },

	{ .ptr = (void*)f307_reduce_5 },

	{ .ptr = (void*)f308_reduce_6 },

	{ .ptr = (void*)f309_reduce_7 },

	{ .ptr = (void*)f310_reduce_8 },

	{ .ptr = (void*)f311_reduce_9 },

	{ .ptr = (void*)f312_reduce_10 },

	{ .ptr = (void*)f313_reduce_11 },

	{ .ptr = (void*)f314_reduce_12 },

	{ .ptr = (void*)f315_reduce_13 },

	{ .ptr = (void*)f316_reduce_14 },

	{ .ptr = (void*)f317_reduce_15 },

	{ .ptr = (void*)f318_reduce_16 },

	{ .ptr = (void*)f319_reduce_17 },

	{ .ptr = (void*)f320_reduce_18 },

	{ .ptr = (void*)f321_reduce_19 },

	{ .ptr = (void*)f322_reduce_20 },

	{ .ptr = (void*)f323_reduce_21 },

	{ .ptr = (void*)f324_reduce_22 },

	{ .ptr = (void*)f325_reduce_23 },

	{ .ptr = (void*)f326_reduce_24 },

	{ .ptr = (void*)f327_reduce_25 },

	{ .ptr = (void*)f328_reduce_26 },

	{ .ptr = (void*)f329_reduce_27 },

	{ .ptr = (void*)f330_reduce_28 },

	{ .ptr = (void*)f331_reduce_29 },

	{ .ptr = (void*)f332_reduce_30 },

	{ .ptr = (void*)f333_reduce_31 },

	{ .ptr = (void*)f334_reduce_32 },

	{ .ptr = (void*)f335_reduce_33 },

	{ .ptr = (void*)f336_reduce_34 },

	{ .ptr = (void*)f337_reduce_35 },

	{ .ptr = (void*)f338_reduce_36 },

	{ .ptr = (void*)f339_reduce_37 },

	{ .ptr = (void*)f340_reduce_38 },

	{ .ptr = (void*)f341_reduce_39 },

	{ .ptr = (void*)f342_reduce_40 },

	{ .ptr = (void*)f343_reduce_41 },

	{ .ptr = (void*)f344_reduce_42 },

	{ .ptr = (void*)f345_reduce_43 },

	{ .ptr = (void*)f346_reduce_44 },

	{ .ptr = (void*)f347_reduce_45 },

	{ .ptr = (void*)f348_reduce_46 },

	{ .ptr = (void*)f349_reduce_47 },

	{ .ptr = (void*)f350_reduce_48 },

	{ .ptr = (void*)f351_reduce_49 },

	{ .ptr = (void*)f352_reduce_50 },

	{ .ptr = (void*)f353_reduce_51 },

	{ .ptr = (void*)f354_reduce_52 },

	{ .ptr = (void*)f355_reduce_53 },

	{ .ptr = (void*)f357_reduce_54 },

	{ .ptr = (void*)f358_reduce_55 },

	{ .ptr = (void*)f359_reduce_56 },

	{ .ptr = (void*)f360_reduce_57 },

	{ .ptr = (void*)f361_reduce_58 },

	{ .ptr = (void*)f362_reduce_59 },

	{ .ptr = (void*)f363_reduce_60 },

	{ .ptr = (void*)f364_reduce_61 },

	{ .ptr = (void*)f365_reduce_62 },

	{ .ptr = (void*)f366_reduce_63 },

	{ .ptr = (void*)f367_reduce_64 },

	{ .ptr = (void*)f368_reduce_65 },

	{ .ptr = (void*)f369_reduce_66 },

	{ .ptr = (void*)f370_reduce_67 },

	{ .ptr = (void*)f371_reduce_68 },

	{ .ptr = (void*)f372_reduce_69 },

	{ .ptr = (void*)f373_reduce_70 },

	{ .ptr = (void*)f374_reduce_71 },

	{ .ptr = (void*)f375_reduce_72 },

	{ .ptr = (void*)f376_reduce_73 },

	{ .ptr = (void*)f377_reduce_74 },

	{ .ptr = (void*)f378_reduce_75 },

	{ .ptr = (void*)f379_reduce_76 },

	{ .ptr = (void*)f380_reduce_77 },

	{ .ptr = (void*)f381_reduce_78 },

	{ .ptr = (void*)f382_reduce_79 },

	{ .ptr = (void*)f383_reduce_80 },

	{ .ptr = (void*)f384_reduce_81 },

	{ .ptr = (void*)f385_reduce_82 },

	{ .ptr = (void*)f386_reduce_83 },

	{ .ptr = (void*)f387_reduce_84 },

	{ .ptr = (void*)f388_reduce_85 },

	{ .ptr = (void*)f389_reduce_86 },

	{ .ptr = (void*)f391_reduce_87 },

	{ .ptr = (void*)f392_reduce_88 },

	{ .ptr = (void*)f393_reduce_89 },

	{ .ptr = (void*)f394_reduce_90 },

	{ .ptr = (void*)f395_reduce_91 },

	{ .ptr = (void*)f396_reduce_92 },

	{ .ptr = (void*)f397_reduce_93 },

	{ .ptr = (void*)f398_reduce_94 },

	{ .ptr = (void*)f399_reduce_95 },

	{ .ptr = (void*)f400_reduce_96 },

	{ .ptr = (void*)f401_reduce_97 },

	{ .ptr = (void*)f402_reduce_98 },

	{ .ptr = (void*)f403_reduce_99 },

	{ .ptr = (void*)f404_reduce_100 },

	{ .ptr = (void*)f405_reduce_101 },

	{ .ptr = (void*)f406_reduce_102 },

	{ .ptr = (void*)f407_reduce_103 },

	{ .ptr = (void*)f408_reduce_104 },

	{ .ptr = (void*)f409_reduce_105 },

	{ .ptr = (void*)f410_reduce_106 },

	{ .ptr = (void*)f411_reduce_107 },

	{ .ptr = (void*)f412_reduce_108 },

	{ .ptr = (void*)f413_reduce_109 },

	{ .ptr = (void*)f414_reduce_110 },

	{ .ptr = (void*)f415_reduce_111 },

	{ .ptr = (void*)f416_reduce_112 },

	{ .ptr = (void*)f417_reduce_113 },

	{ .ptr = (void*)f418_reduce_114 },

	{ .ptr = (void*)f419_reduce_115 },

	{ .ptr = (void*)f420_reduce_116 },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f422_reduce_122 },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f423_reduce_126 },

	{ .ptr = (void*)f424_reduce_127 },

	{ .ptr = (void*)f425_reduce_128 },

	{ .ptr = (void*)f426_reduce_129 },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f427_reduce_135 },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f429_reduce_default },

	{ .ptr = (void*)f428_reduce_138 },

};

// yy_reduce workspace at ws+3232 length ws+94
void f300_yy_reduce(i2* p6955 /* yyact */, i1 p6956 /* yylookahead */, i2 p6957 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+3232) = p6957; /*yyruleno */
	*(i1*)(intptr_t)(ws+3234) = p6956; /*yylookahead */

	i8 v6958 = (i8)(intptr_t)((i1*)f3___main_s0599);
	i8 v6959 = (i8)(intptr_t)(ws+3232);
	i2 v6960 = *(i2*)(intptr_t)v6959;
	i1 v6961 = v6960;
	i8 v6962 = v6961;
	i8 v6963 = v6958+v6962;
	i1 v6964 = *(i1*)(intptr_t)v6963;
	i8 v6965 = (i8)(intptr_t)(ws+3238);
	*(i1*)(intptr_t)v6965 = v6964;

	i8 v6966 = (i8)(intptr_t)(ws+1568);
	i8 v6967 = *(i8*)(intptr_t)v6966;
	i8 v6968 = (i8)(intptr_t)(ws+3176);
	if (v6967==v6968) goto c02_059d; else goto c02_059e;

c02_059d:;

	i8 v6969 = (i8)(intptr_t)(f298_yy_stack_overflow);

	((void(*)(void))(intptr_t)v6969)();

c02_059e:;

c02_059a:;

	i8 v6970 = (i8)(intptr_t)(ws+3248);
	i8 v6971 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v6971 = v6970;

	i8 v6972 = (i8)(intptr_t)(ws+3238);
	i1 v6973 = *(i1*)(intptr_t)v6972;
	i8 v6974 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v6974 = v6973;

c02_05a1:;

	i8 v6975 = (i8)(intptr_t)(ws+3320);
	i1 v6976 = *(i1*)(intptr_t)v6975;
	i1 v6977 = (i1)+0;
	if (v6976==v6977) goto c02_05a4; else goto c02_05a3;

c02_05a3:;

	i8 v6978 = (i8)(intptr_t)(ws+1568);
	i8 v6979 = *(i8*)(intptr_t)v6978;
	i8 v6980 = v6979+(+8);
	i8 v6981 = *(i8*)(intptr_t)v6980;
	i8 v6982 = (i8)(intptr_t)(ws+3312);
	i8 v6983 = *(i8*)(intptr_t)v6982;
	*(i8*)(intptr_t)v6983 = v6981;

	i8 v6984 = (i8)(intptr_t)(ws+1568);
	i8 v6985 = *(i8*)(intptr_t)v6984;
	i8 v6986 = v6985+(-16);
	i8 v6987 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v6987 = v6986;

	i8 v6988 = (i8)(intptr_t)(ws+3312);
	i8 v6989 = *(i8*)(intptr_t)v6988;
	i8 v6990 = v6989+(+8);
	i8 v6991 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v6991 = v6990;

	i8 v6992 = (i8)(intptr_t)(ws+3320);
	i1 v6993 = *(i1*)(intptr_t)v6992;
	i1 v6994 = v6993+(-1);
	i8 v6995 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v6995 = v6994;

	goto c02_05a1;

c02_05a4:;
































































































































	i8 v9898 = (i8)(intptr_t)((i1*)f300_yy_reduce_s06f5);
	i8 v9899 = (i8)(intptr_t)(ws+3232);
	i2 v9900 = *(i2*)(intptr_t)v9899;
	i1 v9901 = v9900;
	i8 v9902 = v9901;
	i1 v9903 = (i1)+3;
	i8 v9904 = ((i8)v9902)<<v9903;
	i8 v9905 = v9898+v9904;
	i8 v9906 = *(i8*)(intptr_t)v9905;

	((void(*)(void))(intptr_t)v9906)();

	i8 v9907 = (i8)(intptr_t)(ws+3240);
	i8 v9908 = *(i8*)(intptr_t)v9907;
	i8 v9909 = (i8)(intptr_t)(ws+1568);
	i8 v9910 = *(i8*)(intptr_t)v9909;
	i8 v9911 = v9910+(+24);
	*(i8*)(intptr_t)v9911 = v9908;

	i8 v9912 = (i8)(intptr_t)((i1*)f3___main_s0598);
	i8 v9913 = (i8)(intptr_t)(ws+3232);
	i2 v9914 = *(i2*)(intptr_t)v9913;
	i1 v9915 = v9914;
	i8 v9916 = v9915;
	i8 v9917 = v9912+v9916;
	i1 v9918 = *(i1*)(intptr_t)v9917;
	i8 v9919 = (i8)(intptr_t)(ws+3321);
	*(i1*)(intptr_t)v9919 = v9918;

	i8 v9920 = (i8)(intptr_t)(ws+1568);
	i8 v9921 = *(i8*)(intptr_t)v9920;
	i2 v9922 = *(i2*)(intptr_t)v9921;
	i8 v9923 = (i8)(intptr_t)(ws+3322);
	*(i2*)(intptr_t)v9923 = v9922;

	i8 v9924 = (i8)(intptr_t)((i1*)f3___main_s0580);
	i8 v9925 = (i8)(intptr_t)(ws+3322);
	i2 v9926 = *(i2*)(intptr_t)v9925;
	i1 v9927 = v9926;
	i8 v9928 = v9927;
	i1 v9929 = (i1)+1;
	i8 v9930 = ((i8)v9928)<<v9929;
	i8 v9931 = v9924+v9930;
	i2 v9932 = *(i2*)(intptr_t)v9931;
	i8 v9933 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v9933 = v9932;

	i2 v9934 = (i2)+112;
	i8 v9935 = (i8)(intptr_t)(ws+3322);
	i2 v9936 = *(i2*)(intptr_t)v9935;
	if (v9934<v9936) goto c02_06fa; else goto c02_06f9;

c02_06f9:;

	i8 v9937 = (i8)(intptr_t)((i1*)f3___main_s057f);
	i8 v9938 = (i8)(intptr_t)(ws+3322);
	i2 v9939 = *(i2*)(intptr_t)v9938;
	i1 v9940 = v9939;
	i8 v9941 = v9940;
	i1 v9942 = (i1)+1;
	i8 v9943 = ((i8)v9941)<<v9942;
	i8 v9944 = v9937+v9943;
	i2 v9945 = *(i2*)(intptr_t)v9944;
	i8 v9946 = (i8)(intptr_t)(ws+3321);
	i1 v9947 = *(i1*)(intptr_t)v9946;
	i2 v9948 = v9947;
	i2 v9949 = v9945+v9948;
	i8 v9950 = (i8)(intptr_t)(ws+3324);
	*(i2*)(intptr_t)v9950 = v9949;

	i8 v9951 = (i8)(intptr_t)(ws+3324);
	i2 v9952 = *(i2*)(intptr_t)v9951;
	i2 v9953 = (i2)+0;
	if (v9952<v9953) goto c02_0703; else goto c02_0705;

c02_0705:;

	i8 v9954 = (i8)(intptr_t)(ws+3324);
	i2 v9955 = *(i2*)(intptr_t)v9954;
	i2 v9956 = (i2)+1271;
	if (v9955<v9956) goto c02_0704; else goto c02_0703;

c02_0704:;

	i8 v9957 = (i8)(intptr_t)((i1*)f3___main_s057d);
	i8 v9958 = (i8)(intptr_t)(ws+3324);
	i2 v9959 = *(i2*)(intptr_t)v9958;
	i8 v9960 = v9959;
	i8 v9961 = v9957+v9960;
	i1 v9962 = *(i1*)(intptr_t)v9961;
	i8 v9963 = (i8)(intptr_t)(ws+3321);
	i1 v9964 = *(i1*)(intptr_t)v9963;
	if (v9962==v9964) goto c02_0702; else goto c02_0703;

c02_0702:;

	i8 v9965 = (i8)(intptr_t)((i1*)f3___main_s057c);
	i8 v9966 = (i8)(intptr_t)(ws+3324);
	i2 v9967 = *(i2*)(intptr_t)v9966;
	i8 v9968 = v9967;
	i1 v9969 = (i1)+1;
	i8 v9970 = ((i8)v9968)<<v9969;
	i8 v9971 = v9965+v9970;
	i2 v9972 = *(i2*)(intptr_t)v9971;
	i8 v9973 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v9973 = v9972;

c02_0703:;

c02_06fb:;

c02_06fa:;

c02_06f6:;

	i8 v9974 = (i8)(intptr_t)(ws+1568);
	i8 v9975 = *(i8*)(intptr_t)v9974;
	i8 v9976 = v9975+(+16);
	i8 v9977 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v9977 = v9976;

	i8 v9978 = (i8)(intptr_t)(ws+3236);
	i2 v9979 = *(i2*)(intptr_t)v9978;
	i8 v9980 = (i8)(intptr_t)(ws+1568);
	i8 v9981 = *(i8*)(intptr_t)v9980;
	*(i2*)(intptr_t)v9981 = v9979;

	i8 v9982 = (i8)(intptr_t)(ws+3321);
	i1 v9983 = *(i1*)(intptr_t)v9982;
	i8 v9984 = (i8)(intptr_t)(ws+1568);
	i8 v9985 = *(i8*)(intptr_t)v9984;
	i8 v9986 = v9985+(+2);
	*(i1*)(intptr_t)v9986 = v9983;

endsub:;
	*p6955 = *(i2*)(intptr_t)(ws+3236);
}
	void f297_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3232 length ws+0
void f430_yy_parse_failed(void) {

	i8 v9987 = (i8)(intptr_t)(f297_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v9987)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0196[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// yy_syntax_error workspace at ws+3232 length ws+16
void f431_yy_syntax_error(i8 p9988 /* yyminor */, i1 p9989 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3232) = p9989; /*yymajor */
	*(i8*)(intptr_t)(ws+3240) = p9988; /*yyminor */

	i8 v9990 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v9990)();

	i8 v9991 = (i8)(intptr_t)c02_s0196;
	i8 v9992 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9992)(v9991);

	i8 v9993 = (i8)(intptr_t)((i1*)f3___main_s0581);
	i8 v9994 = (i8)(intptr_t)(ws+3232);
	i1 v9995 = *(i1*)(intptr_t)v9994;
	i8 v9996 = v9995;
	i1 v9997 = (i1)+3;
	i8 v9998 = ((i8)v9996)<<v9997;
	i8 v9999 = v9993+v9998;
	i8 v10000 = *(i8*)(intptr_t)v9999;
	i8 v10001 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10001)(v10000);

	i8 v10002 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v10002)();

endsub:;
}

// yy_accept workspace at ws+3232 length ws+0
void f432_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+3208 length ws+0
void f433_ParserInit(void) {

	i1 v10003 = (i1)-1;
	i8 v10004 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10004 = v10003;

	i8 v10005 = (i8)(intptr_t)(ws+1576);
	i8 v10006 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10006 = v10005;

	i2 v10007 = (i2)+0;
	i8 v10008 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v10008 = v10007;

	i1 v10009 = (i1)+0;
	i8 v10010 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v10010 = v10009;

endsub:;
}
	void f296_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3208 length ws+0
void f434_ParserDeinit(void) {

c02_0708:;

	i8 v10011 = (i8)(intptr_t)(ws+1568);
	i8 v10012 = *(i8*)(intptr_t)v10011;
	i8 v10013 = (i8)(intptr_t)(ws+1576);
	if (v10012==v10013) goto c02_070b; else goto c02_070a;

c02_070a:;

	i8 v10014 = (i8)(intptr_t)(f296_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10014)();

	goto c02_0708;

c02_070b:;

endsub:;
}
	void f300_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f298_yy_stack_overflow(void);
	void f432_yy_accept(void);
	void f431_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f430_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3208 length ws+20
void f435_ParserFeedToken(i8 p10015 /* yyminor */, i1 p10016 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3208) = p10016; /*yymajor */
	*(i8*)(intptr_t)(ws+3216) = p10015; /*yyminor */

	i8 v10017 = (i8)(intptr_t)(ws+1568);
	i8 v10018 = *(i8*)(intptr_t)v10017;
	i2 v10019 = *(i2*)(intptr_t)v10018;
	i8 v10020 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10020 = v10019;

c02_070c:;

	i2 v10021 = (i2)+220;
	i8 v10022 = (i8)(intptr_t)(ws+3224);
	i2 v10023 = *(i2*)(intptr_t)v10022;
	if (v10021<v10023) goto c02_0712; else goto c02_0711;

c02_0711:;

	i8 v10024 = (i8)(intptr_t)((i1*)f3___main_s057e);
	i8 v10025 = (i8)(intptr_t)(ws+3224);
	i2 v10026 = *(i2*)(intptr_t)v10025;
	i1 v10027 = v10026;
	i8 v10028 = v10027;
	i1 v10029 = (i1)+1;
	i8 v10030 = ((i8)v10028)<<v10029;
	i8 v10031 = v10024+v10030;
	i2 v10032 = *(i2*)(intptr_t)v10031;
	i8 v10033 = (i8)(intptr_t)(ws+3208);
	i1 v10034 = *(i1*)(intptr_t)v10033;
	i2 v10035 = v10034;
	i2 v10036 = v10032+v10035;
	i8 v10037 = (i8)(intptr_t)(ws+3226);
	*(i2*)(intptr_t)v10037 = v10036;

	i8 v10038 = (i8)(intptr_t)((i1*)f3___main_s057d);
	i8 v10039 = (i8)(intptr_t)(ws+3226);
	i2 v10040 = *(i2*)(intptr_t)v10039;
	i8 v10041 = v10040;
	i8 v10042 = v10038+v10041;
	i1 v10043 = *(i1*)(intptr_t)v10042;
	i8 v10044 = (i8)(intptr_t)(ws+3208);
	i1 v10045 = *(i1*)(intptr_t)v10044;
	if (v10043==v10045) goto c02_0717; else goto c02_0716;

c02_0716:;

	i8 v10046 = (i8)(intptr_t)((i1*)f3___main_s0580);
	i8 v10047 = (i8)(intptr_t)(ws+3224);
	i2 v10048 = *(i2*)(intptr_t)v10047;
	i1 v10049 = v10048;
	i8 v10050 = v10049;
	i1 v10051 = (i1)+1;
	i8 v10052 = ((i8)v10050)<<v10051;
	i8 v10053 = v10046+v10052;
	i2 v10054 = *(i2*)(intptr_t)v10053;
	i8 v10055 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10055 = v10054;

	goto c02_0713;

c02_0717:;

	i8 v10056 = (i8)(intptr_t)((i1*)f3___main_s057c);
	i8 v10057 = (i8)(intptr_t)(ws+3226);
	i2 v10058 = *(i2*)(intptr_t)v10057;
	i8 v10059 = v10058;
	i1 v10060 = (i1)+1;
	i8 v10061 = ((i8)v10059)<<v10060;
	i8 v10062 = v10056+v10061;
	i2 v10063 = *(i2*)(intptr_t)v10062;
	i8 v10064 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10064 = v10063;

c02_0713:;

c02_0712:;

c02_070e:;

	i8 v10065 = (i8)(intptr_t)(ws+3224);
	i2 v10066 = *(i2*)(intptr_t)v10065;
	i2 v10067 = (i2)+452;
	if (v10066<v10067) goto c02_071c; else goto c02_071b;

c02_071b:;

	i8 v10068 = (i8)(intptr_t)(ws+3224);
	i2 v10069 = *(i2*)(intptr_t)v10068;
	i2 v10070 = v10069+(-452);
	i8 v10071 = (i8)(intptr_t)(ws+3208);
	i1 v10072 = *(i1*)(intptr_t)v10071;
	i8 v10073 = (i8)(intptr_t)(f300_yy_reduce);
	i2 v10074;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v10073)(&v10074, v10072, v10070);
	i8 v10075 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10075 = v10074;

	goto c02_0718;

c02_071c:;

	i2 v10076 = (i2)+448;
	i8 v10077 = (i8)(intptr_t)(ws+3224);
	i2 v10078 = *(i2*)(intptr_t)v10077;
	if (v10076<v10078) goto c02_0720; else goto c02_071f;

c02_071f:;

	i8 v10079 = (i8)(intptr_t)(ws+1568);
	i8 v10080 = *(i8*)(intptr_t)v10079;
	i8 v10081 = (i8)(intptr_t)(ws+3176);
	if (v10080==v10081) goto c02_0724; else goto c02_0725;

c02_0724:;

	i8 v10082 = (i8)(intptr_t)(f298_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10082)();

	goto endsub;

c02_0725:;

c02_0721:;

	i8 v10083 = (i8)(intptr_t)(ws+1568);
	i8 v10084 = *(i8*)(intptr_t)v10083;
	i8 v10085 = v10084+(+16);
	i8 v10086 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10086 = v10085;

	i2 v10087 = (i2)+220;
	i8 v10088 = (i8)(intptr_t)(ws+3224);
	i2 v10089 = *(i2*)(intptr_t)v10088;
	if (v10087<v10089) goto c02_0729; else goto c02_072a;

c02_0729:;

	i8 v10090 = (i8)(intptr_t)(ws+3224);
	i2 v10091 = *(i2*)(intptr_t)v10090;
	i2 v10092 = v10091+(+142);
	i8 v10093 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10093 = v10092;

c02_072a:;

c02_0726:;

	i8 v10094 = (i8)(intptr_t)(ws+3224);
	i2 v10095 = *(i2*)(intptr_t)v10094;
	i8 v10096 = (i8)(intptr_t)(ws+1568);
	i8 v10097 = *(i8*)(intptr_t)v10096;
	*(i2*)(intptr_t)v10097 = v10095;

	i8 v10098 = (i8)(intptr_t)(ws+3208);
	i1 v10099 = *(i1*)(intptr_t)v10098;
	i8 v10100 = (i8)(intptr_t)(ws+1568);
	i8 v10101 = *(i8*)(intptr_t)v10100;
	i8 v10102 = v10101+(+2);
	*(i1*)(intptr_t)v10102 = v10099;

	i8 v10103 = (i8)(intptr_t)(ws+3216);
	i8 v10104 = *(i8*)(intptr_t)v10103;
	i8 v10105 = *(i8*)(intptr_t)v10104;
	i8 v10106 = (i8)(intptr_t)(ws+1568);
	i8 v10107 = *(i8*)(intptr_t)v10106;
	i8 v10108 = v10107+(+8);
	*(i8*)(intptr_t)v10108 = v10105;

	i8 v10109 = (i8)(intptr_t)(ws+3192);
	i1 v10110 = *(i1*)(intptr_t)v10109;
	i1 v10111 = (i1)+0;
	if ((s1)v10110<(s1)v10111) goto c02_072f; else goto c02_072e;

c02_072e:;

	i8 v10112 = (i8)(intptr_t)(ws+3192);
	i1 v10113 = *(i1*)(intptr_t)v10112;
	i1 v10114 = v10113+(-1);
	i8 v10115 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10115 = v10114;

c02_072f:;

c02_072b:;

	goto c02_070d;

c02_0720:;

	i8 v10116 = (i8)(intptr_t)(ws+3224);
	i2 v10117 = *(i2*)(intptr_t)v10116;
	i2 v10118 = (i2)+450;
	if (v10117==v10118) goto c02_0732; else goto c02_0733;

c02_0732:;

	i8 v10119 = (i8)(intptr_t)(ws+1568);
	i8 v10120 = *(i8*)(intptr_t)v10119;
	i8 v10121 = v10120+(-16);
	i8 v10122 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10122 = v10121;

	i8 v10123 = (i8)(intptr_t)(f432_yy_accept);

	((void(*)(void))(intptr_t)v10123)();

	goto c02_070d;

c02_0733:;

	i1 v10124 = (i1)+0;
	i8 v10125 = (i8)(intptr_t)(ws+3192);
	i1 v10126 = *(i1*)(intptr_t)v10125;
	if ((s1)v10124<(s1)v10126) goto c02_0738; else goto c02_0737;

c02_0737:;

	i8 v10127 = (i8)(intptr_t)(ws+3208);
	i1 v10128 = *(i1*)(intptr_t)v10127;
	i8 v10129 = (i8)(intptr_t)(ws+3216);
	i8 v10130 = *(i8*)(intptr_t)v10129;
	i8 v10131 = (i8)(intptr_t)(f431_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10131)(v10130, v10128);

c02_0738:;

c02_0734:;

	i1 v10132 = (i1)+3;
	i8 v10133 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10133 = v10132;

	i8 v10134 = (i8)(intptr_t)(ws+3208);
	i1 v10135 = *(i1*)(intptr_t)v10134;
	i8 v10136 = (i8)(intptr_t)(ws+3216);
	i8 v10137 = *(i8*)(intptr_t)v10136;
	i8 v10138 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10138)(v10137, v10135);

	i8 v10139 = (i8)(intptr_t)(ws+3208);
	i1 v10140 = *(i1*)(intptr_t)v10139;
	i1 v10141 = (i1)+0;
	if (v10140==v10141) goto c02_073c; else goto c02_073d;

c02_073c:;

	i8 v10142 = (i8)(intptr_t)(f430_yy_parse_failed);

	((void(*)(void))(intptr_t)v10142)();

	i1 v10143 = (i1)-1;
	i8 v10144 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10144 = v10143;

c02_073d:;

c02_0739:;

	goto c02_070d;

c02_0718:;

	i8 v10145 = (i8)(intptr_t)(ws+1568);
	i8 v10146 = *(i8*)(intptr_t)v10145;
	i8 v10147 = (i8)(intptr_t)(ws+1576);
	if (v10146==v10147) goto c02_0741; else goto c02_0742;

c02_0741:;

	goto c02_070d;

c02_0742:;

c02_073e:;

	goto c02_070c;

c02_070d:;

endsub:;
}
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0197[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3208 length ws+0
void f436_PrintFreeMemory(void) {

	i8 v10148 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v10149;

	((void(*)(i8* /* i */))(intptr_t)v10148)(&v10149);
	i1 v10150 = (i1)+10;
	i8 v10151 = ((i8)v10149)>>v10150;
	i2 v10152 = v10151;
	i8 v10153 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v10153)(v10152);

	i8 v10154 = (i8)(intptr_t)c02_s0197;
	i8 v10155 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10155)(v10154);

endsub:;
}
const i1 c02_s0198[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3216 length ws+0
void f437_SyntaxError(void) {

	i8 v10156 = (i8)(intptr_t)c02_s0198;
	i8 v10157 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10157)(v10156);

	i8 v10158 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v10158)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f72_LexerAddIncludePath(i8 /* path */);
	void f437_SyntaxError(void);
	void f437_SyntaxError(void);
	void f437_SyntaxError(void);

// ParseArguments workspace at ws+3208 length ws+8
void f438_ParseArguments(void) {

	i8 v10159 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v10159)();

c02_0743:;

	i8 v10160 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v10161;

	((void(*)(i8* /* arg */))(intptr_t)v10160)(&v10161);
	i8 v10162 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10162 = v10161;

	i8 v10163 = (i8)(intptr_t)(ws+3208);
	i8 v10164 = *(i8*)(intptr_t)v10163;
	i8 v10165 = (i8)+0;
	if (v10164==v10165) goto c02_0748; else goto c02_0749;

c02_0748:;

	goto c02_0744;

c02_0749:;

c02_0745:;

	i8 v10166 = (i8)(intptr_t)(ws+3208);
	i8 v10167 = *(i8*)(intptr_t)v10166;
	i1 v10168 = *(i1*)(intptr_t)v10167;
	i1 v10169 = (i1)+45;
	if (v10168==v10169) goto c02_074d; else goto c02_074e;

c02_074d:;

	i8 v10170 = (i8)(intptr_t)(ws+3208);
	i8 v10171 = *(i8*)(intptr_t)v10170;
	i8 v10172 = v10171+(+1);
	i8 v10173 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10173 = v10172;

	i8 v10174 = (i8)(intptr_t)(ws+3208);
	i8 v10175 = *(i8*)(intptr_t)v10174;
	i1 v10176 = *(i1*)(intptr_t)v10175;
	i1 v10177 = (i1)+73;
	if (v10176==v10177) goto c02_0752; else goto c02_0753;

c02_0752:;

	i8 v10178 = (i8)(intptr_t)(ws+3208);
	i8 v10179 = *(i8*)(intptr_t)v10178;
	i8 v10180 = v10179+(+1);
	i8 v10181 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10181 = v10180;

	i8 v10182 = (i8)(intptr_t)(ws+3208);
	i8 v10183 = *(i8*)(intptr_t)v10182;
	i8 v10184 = (i8)(intptr_t)(f72_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10184)(v10183);

	goto c02_074f;

c02_0753:;

	i8 v10185 = (i8)(intptr_t)(f437_SyntaxError);

	((void(*)(void))(intptr_t)v10185)();

c02_074f:;

	goto c02_074a;

c02_074e:;

	i8 v10186 = (i8)(intptr_t)(ws+24);
	i8 v10187 = *(i8*)(intptr_t)v10186;
	i8 v10188 = (i8)+0;
	if (v10187==v10188) goto c02_0757; else goto c02_0758;

c02_0757:;

	i8 v10189 = (i8)(intptr_t)(ws+3208);
	i8 v10190 = *(i8*)(intptr_t)v10189;
	i8 v10191 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v10191 = v10190;

	goto c02_0754;

c02_0758:;

	i8 v10192 = (i8)(intptr_t)(ws+32);
	i8 v10193 = *(i8*)(intptr_t)v10192;
	i8 v10194 = (i8)+0;
	if (v10193==v10194) goto c02_075b; else goto c02_075c;

c02_075b:;

	i8 v10195 = (i8)(intptr_t)(ws+3208);
	i8 v10196 = *(i8*)(intptr_t)v10195;
	i8 v10197 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v10197 = v10196;

	goto c02_0754;

c02_075c:;

	i8 v10198 = (i8)(intptr_t)(f437_SyntaxError);

	((void(*)(void))(intptr_t)v10198)();

c02_0754:;

c02_074a:;

	goto c02_0743;

c02_0744:;

	i8 v10199 = (i8)(intptr_t)(ws+24);
	i8 v10200 = *(i8*)(intptr_t)v10199;
	i8 v10201 = (i8)+0;
	if (v10200==v10201) goto c02_0762; else goto c02_0764;

c02_0764:;

	i8 v10202 = (i8)(intptr_t)(ws+32);
	i8 v10203 = *(i8*)(intptr_t)v10202;
	i8 v10204 = (i8)+0;
	if (v10203==v10204) goto c02_0762; else goto c02_0763;

c02_0762:;

	i8 v10205 = (i8)(intptr_t)(f437_SyntaxError);

	((void(*)(void))(intptr_t)v10205)();

c02_0763:;

c02_075d:;

endsub:;
}
const i1 c02_s0199[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f436_PrintFreeMemory(void);
	void f438_ParseArguments(void);
const i1 c02_s019a[] = { 0 };
	void f72_LexerAddIncludePath(i8 /* path */);
	void f76_LexerIncludeFile(i8 /* path */);
	void f260_CreateMainSubroutine(void);
	void f234_ArchInitTypes(void);
	void f192_EmitterOpenfile(i8 /* filename */);
	void f194_EmitterDeclareSubroutine(i8 /* subr */);
	void f150_MidStartfile(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f103_MidStartsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f433_ParserInit(void);
	void f77_LexerReadToken(i1* /* token */);
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);
	void f435_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f434_ParserDeinit(void);
	void f117_MidEndsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f261_ReportWorkspaces(i8 /* subr */);
	void f137_MidEndfile(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f193_EmitterClosefile(void);
const i1 c02_s019b[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f436_PrintFreeMemory(void);

// __main workspace at ws+0 length ws+3208
void f3___main(void) {


	
*(i8*)(intptr_t)(ws+0) 
= (i8)(intptr_t) __lomem; 


	
*(i8*)(intptr_t)(ws+8) 
= (i8)(intptr_t) __himem; 






















































	i8 v838 = (i8)+0;
	i8 v839 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v839 = v838;

	i8 v840 = (i8)+0;
	i8 v841 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v841 = v840;

	i2 v842 = (i2)+1;
	i8 v843 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v843 = v842;

	i2 v844 = (i2)+1;
	i8 v845 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v845 = v844;

	i8 v846 = (i8)+0;
	i8 v847 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v847 = v846;

	i8 v848 = (i8)(intptr_t)(ws+96);
	i8 v849 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v849 = v848;




	i8 v963 = (i8)+0;
	i8 v964 = (i8)(intptr_t)(ws+232);
	*(i8*)(intptr_t)v964 = v963;



	i8 v995 = (i8)+0;
	i8 v996 = (i8)(intptr_t)(ws+240);
	*(i8*)(intptr_t)v996 = v995;




	i8 v1077 = (i8)+0;
	i8 v1078 = (i8)(intptr_t)(ws+248);
	*(i8*)(intptr_t)v1078 = v1077;

	i8 v1079 = (i8)+0;
	i8 v1080 = (i8)(intptr_t)(ws+256);
	*(i8*)(intptr_t)v1080 = v1079;

	i1 v1081 = (i1)+0;
	i8 v1082 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1082 = v1081;

	i1 v1083 = (i1)+0;
	i8 v1084 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1084 = v1083;








	i1 v1131 = (i1)+0;
	i8 v1132 = (i8)(intptr_t)(ws+924);
	*(i1*)(intptr_t)v1132 = v1131;









































































	i8 v3031 = (i8)+0;
	i8 v3032 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3032 = v3031;
































































































	i1 v5179 = (i1)+0;
	i8 v5180 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5180 = v5179;



































































	i8 v10206 = (i8)(intptr_t)c02_s0199;
	i8 v10207 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10207)(v10206);

	i8 v10208 = (i8)(intptr_t)(f436_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10208)();

	i8 v10209 = (i8)(intptr_t)(f438_ParseArguments);

	((void(*)(void))(intptr_t)v10209)();

	i8 v10210 = (i8)(intptr_t)c02_s019a;
	i8 v10211 = (i8)(intptr_t)(f72_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10211)(v10210);

	i8 v10212 = (i8)(intptr_t)(ws+24);
	i8 v10213 = *(i8*)(intptr_t)v10212;
	i8 v10214 = (i8)(intptr_t)(f76_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v10214)(v10213);

	i8 v10215 = (i8)(intptr_t)(f260_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v10215)();

	i8 v10216 = (i8)(intptr_t)(f234_ArchInitTypes);

	((void(*)(void))(intptr_t)v10216)();

	i8 v10217 = (i8)(intptr_t)(ws+32);
	i8 v10218 = *(i8*)(intptr_t)v10217;
	i8 v10219 = (i8)(intptr_t)(f192_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v10219)(v10218);

	i8 v10220 = (i8)(intptr_t)(ws+40);
	i8 v10221 = *(i8*)(intptr_t)v10220;
	i8 v10222 = (i8)(intptr_t)(f194_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v10222)(v10221);

	i8 v10223 = (i8)(intptr_t)(f150_MidStartfile);
	i8 v10224;

	((void(*)(i8* /* m */))(intptr_t)v10223)(&v10224);
	i8 v10225 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10225)(v10224);

	i8 v10226 = (i8)(intptr_t)(ws+40);
	i8 v10227 = *(i8*)(intptr_t)v10226;
	i8 v10228 = (i8)(intptr_t)(f103_MidStartsub);
	i8 v10229;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10228)(&v10229, v10227);
	i8 v10230 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10230)(v10229);

	i8 v10231 = (i8)(intptr_t)(f433_ParserInit);

	((void(*)(void))(intptr_t)v10231)();

c02_0765:;

	i8 v10232 = (i8)(intptr_t)(f77_LexerReadToken);
	i1 v10233;

	((void(*)(i1* /* token */))(intptr_t)v10232)(&v10233);
	i8 v10234 = (i8)(intptr_t)(ws+3193);
	*(i1*)(intptr_t)v10234 = v10233;

	i8 v10235 = (i8)(intptr_t)(ws+3193);
	i1 v10236 = *(i1*)(intptr_t)v10235;

	if (v10236 != +34) goto c02_0768;

	i8 v10237 = (i8)(intptr_t)(ws+396);
	i4 v10238 = *(i4*)(intptr_t)v10237;
	i8 v10239 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10239 = v10238;

	goto c02_0767;

c02_0768:;

	if (v10236 != +33) goto c02_0769;

	i8 v10240 = (i8)(intptr_t)(ws+265);
	i8 v10241 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v10242;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10241)(&v10242, v10240);
	i8 v10243 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10243 = v10242;

	goto c02_0767;

c02_0769:;

	if (v10236 != +41) goto c02_076a;

	i8 v10244 = (i8)(intptr_t)(ws+265);
	i8 v10245 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v10246;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10245)(&v10246, v10244);
	i8 v10247 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10247 = v10246;

	goto c02_0767;

c02_076a:;

	i4 v10248 = (i4)+0;
	i8 v10249 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10249 = v10248;

c02_0767:;


	i8 v10250 = (i8)(intptr_t)(ws+3193);
	i1 v10251 = *(i1*)(intptr_t)v10250;
	i8 v10252 = (i8)(intptr_t)(ws+3200);
	i8 v10253 = (i8)(intptr_t)(f435_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10253)(v10252, v10251);

	i8 v10254 = (i8)(intptr_t)(ws+3193);
	i1 v10255 = *(i1*)(intptr_t)v10254;
	i1 v10256 = (i1)+0;
	if (v10255==v10256) goto c02_076e; else goto c02_076f;

c02_076e:;

	goto c02_0766;

c02_076f:;

c02_076b:;

	goto c02_0765;

c02_0766:;

	i8 v10257 = (i8)(intptr_t)(f434_ParserDeinit);

	((void(*)(void))(intptr_t)v10257)();

	i8 v10258 = (i8)(intptr_t)(ws+40);
	i8 v10259 = *(i8*)(intptr_t)v10258;
	i8 v10260 = (i8)(intptr_t)(f117_MidEndsub);
	i8 v10261;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10260)(&v10261, v10259);
	i8 v10262 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10262)(v10261);

	i8 v10263 = (i8)(intptr_t)(ws+40);
	i8 v10264 = *(i8*)(intptr_t)v10263;
	i8 v10265 = (i8)(intptr_t)(f261_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v10265)(v10264);

	i8 v10266 = (i8)(intptr_t)(f137_MidEndfile);
	i8 v10267;

	((void(*)(i8* /* m */))(intptr_t)v10266)(&v10267);
	i8 v10268 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10268)(v10267);

	i8 v10269 = (i8)(intptr_t)(f193_EmitterClosefile);

	((void(*)(void))(intptr_t)v10269)();

	i8 v10270 = (i8)(intptr_t)c02_s019b;
	i8 v10271 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10271)(v10270);

	i8 v10272 = (i8)(intptr_t)(f436_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10272)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                                                                                                                                                                                                                                                   