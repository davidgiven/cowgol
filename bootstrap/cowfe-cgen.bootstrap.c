#include "cowgol.h"
static i8 workspace[0x01bf];
#define ws ((i1*)workspace)

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
	if (v1734==v1735) goto c02_01b0; else goto c02_01b3;

c02_01b3:;

	i8 v1736 = (i8)(intptr_t)(ws+3209);
	i1 v1737 = *(i1*)(intptr_t)v1736;
	i1 v1738 = (i1)+13;
	if (v1737==v1738) goto c02_01b0; else goto c02_01b2;

c02_01b2:;

	i8 v1739 = (i8)(intptr_t)(ws+3209);
	i1 v1740 = *(i1*)(intptr_t)v1739;
	i1 v1741 = (i1)+0;
	if (v1740==v1741) goto c02_01b0; else goto c02_01b1;

c02_01b0:;

	i8 v1742 = (i8)(intptr_t)(ws+3209);
	i1 v1743 = *(i1*)(intptr_t)v1742;
	i8 v1744 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1744 = v1743;

	goto c02_01a8;

c02_01b1:;

c02_01a9:;

	goto c02_01a7;

c02_01a8:;

	goto c02_019b;

c02_01a1:;

c02_019d:;

	i8 v1745 = (i8)(intptr_t)(ws+3209);
	i1 v1746 = *(i1*)(intptr_t)v1745;

	if (v1746 != +0) goto c02_01b5;

	i1 v1747 = (i1)+0;
	i8 v1748 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1748 = v1747;

	goto c02_01b4;

c02_01b5:;

	if (v1746 != +58) goto c02_01b6;

	i8 v1749 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1750;

	((void(*)(i1* /* c */))(intptr_t)v1749)(&v1750);
	i8 v1751 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1751 = v1750;

	i8 v1752 = (i8)(intptr_t)(ws+3209);
	i1 v1753 = *(i1*)(intptr_t)v1752;
	i1 v1754 = (i1)+61;
	if (v1753==v1754) goto c02_01ba; else goto c02_01bb;

c02_01ba:;

	i1 v1755 = (i1)+2;
	i8 v1756 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1756 = v1755;

	goto c02_01b7;

c02_01bb:;

	i8 v1757 = (i8)(intptr_t)(ws+3209);
	i1 v1758 = *(i1*)(intptr_t)v1757;
	i8 v1759 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1759 = v1758;

	i1 v1760 = (i1)+6;
	i8 v1761 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1761 = v1760;

c02_01b7:;

	goto c02_01b4;

c02_01b6:;

	if (v1746 != +60) goto c02_01bc;

	i8 v1762 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1763;

	((void(*)(i1* /* c */))(intptr_t)v1762)(&v1763);
	i8 v1764 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1764 = v1763;

	i8 v1765 = (i8)(intptr_t)(ws+3209);
	i1 v1766 = *(i1*)(intptr_t)v1765;

	if (v1766 != +60) goto c02_01be;

	i1 v1767 = (i1)+56;
	i8 v1768 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1768 = v1767;

	goto c02_01bd;

c02_01be:;

	if (v1766 != +61) goto c02_01bf;

	i1 v1769 = (i1)+51;
	i8 v1770 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1770 = v1769;

	goto c02_01bd;

c02_01bf:;

	i8 v1771 = (i8)(intptr_t)(ws+3209);
	i1 v1772 = *(i1*)(intptr_t)v1771;
	i8 v1773 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1773 = v1772;

	i1 v1774 = (i1)+50;
	i8 v1775 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1775 = v1774;

c02_01bd:;


	goto c02_01b4;

c02_01bc:;

	if (v1746 != +61) goto c02_01c0;

	i8 v1776 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1777;

	((void(*)(i1* /* c */))(intptr_t)v1776)(&v1777);
	i8 v1778 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1778 = v1777;

	i8 v1779 = (i8)(intptr_t)(ws+3209);
	i1 v1780 = *(i1*)(intptr_t)v1779;
	i1 v1781 = (i1)+61;
	if (v1780==v1781) goto c02_01c4; else goto c02_01c5;

c02_01c4:;

	i1 v1782 = (i1)+54;
	i8 v1783 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1783 = v1782;

	goto c02_01c1;

c02_01c5:;

	i8 v1784 = (i8)(intptr_t)(ws+3209);
	i1 v1785 = *(i1*)(intptr_t)v1784;
	i8 v1786 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1786)(v1785);

c02_01c1:;

	goto c02_01b4;

c02_01c0:;

	if (v1746 != +33) goto c02_01c6;

	i8 v1787 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1788;

	((void(*)(i1* /* c */))(intptr_t)v1787)(&v1788);
	i8 v1789 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1789 = v1788;

	i8 v1790 = (i8)(intptr_t)(ws+3209);
	i1 v1791 = *(i1*)(intptr_t)v1790;
	i1 v1792 = (i1)+61;
	if (v1791==v1792) goto c02_01ca; else goto c02_01cb;

c02_01ca:;

	i1 v1793 = (i1)+55;
	i8 v1794 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1794 = v1793;

	goto c02_01c7;

c02_01cb:;

	i8 v1795 = (i8)(intptr_t)(ws+3209);
	i1 v1796 = *(i1*)(intptr_t)v1795;
	i8 v1797 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1797)(v1796);

c02_01c7:;

	goto c02_01b4;

c02_01c6:;

	if (v1746 != +62) goto c02_01cc;

	i8 v1798 = (i8)(intptr_t)(f79_lexer_i_getchar);
	i1 v1799;

	((void(*)(i1* /* c */))(intptr_t)v1798)(&v1799);
	i8 v1800 = (i8)(intptr_t)(ws+3209);
	*(i1*)(intptr_t)v1800 = v1799;

	i8 v1801 = (i8)(intptr_t)(ws+3209);
	i1 v1802 = *(i1*)(intptr_t)v1801;

	if (v1802 != +62) goto c02_01ce;

	i1 v1803 = (i1)+57;
	i8 v1804 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1804 = v1803;

	goto c02_01cd;

c02_01ce:;

	if (v1802 != +61) goto c02_01cf;

	i1 v1805 = (i1)+53;
	i8 v1806 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1806 = v1805;

	goto c02_01cd;

c02_01cf:;

	i8 v1807 = (i8)(intptr_t)(ws+3209);
	i1 v1808 = *(i1*)(intptr_t)v1807;
	i8 v1809 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1809 = v1808;

	i1 v1810 = (i1)+52;
	i8 v1811 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1811 = v1810;

c02_01cd:;


	goto c02_01b4;

c02_01cc:;

	if (v1746 != +34) goto c02_01d0;

	i8 v1812 = (i8)(intptr_t)(f87_lexer_i_read_string);

	((void(*)(void))(intptr_t)v1812)();

	i1 v1813 = (i1)+41;
	i8 v1814 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1814 = v1813;

	goto c02_01b4;

c02_01d0:;

	if (v1746 != +39) goto c02_01d1;

	i8 v1815 = (i8)(intptr_t)(f88_lexer_i_read_char);

	((void(*)(void))(intptr_t)v1815)();

	i1 v1816 = (i1)+34;
	i8 v1817 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1817 = v1816;

	goto c02_01b4;

c02_01d1:;

	i8 v1818 = (i8)(intptr_t)(ws+3209);
	i1 v1819 = *(i1*)(intptr_t)v1818;
	i8 v1820 = (i8)(intptr_t)(f78_lexer_i_ctype);
	i1 v1821;
	i1 v1822;

	((void(*)(i1* /* type */, i1* /* token */, i1 /* c */))(intptr_t)v1820)(&v1821, &v1822, v1819);

	i8 v1823 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1823 = v1822;

	i8 v1824 = (i8)(intptr_t)(ws+3210);
	*(i1*)(intptr_t)v1824 = v1821;

	i8 v1825 = (i8)(intptr_t)(ws+3210);
	i1 v1826 = *(i1*)(intptr_t)v1825;
	i1 v1827 = v1826&(+128);
	i1 v1828 = (i1)+0;
	if (v1827==v1828) goto c02_01d6; else goto c02_01d5;

c02_01d5:;

	goto c02_01d2;

c02_01d6:;

	i8 v1829 = (i8)(intptr_t)(ws+3210);
	i1 v1830 = *(i1*)(intptr_t)v1829;
	i1 v1831 = v1830&(+1);
	i1 v1832 = (i1)+0;
	if (v1831==v1832) goto c02_01da; else goto c02_01d9;

c02_01d9:;

	i8 v1833 = (i8)(intptr_t)(ws+3209);
	i1 v1834 = *(i1*)(intptr_t)v1833;
	i8 v1835 = (i8)(intptr_t)(ws+264);
	*(i1*)(intptr_t)v1835 = v1834;

	i8 v1836 = (i8)(intptr_t)(f84_lexer_i_read_number);

	((void(*)(void))(intptr_t)v1836)();

	i1 v1837 = (i1)+34;
	i8 v1838 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1838 = v1837;

	goto c02_01d2;

c02_01da:;

	i8 v1839 = (i8)(intptr_t)(ws+3210);
	i1 v1840 = *(i1*)(intptr_t)v1839;
	i1 v1841 = v1840&(+16);
	i1 v1842 = (i1)+0;
	if (v1841==v1842) goto c02_01de; else goto c02_01dd;

c02_01dd:;

	i1 v1843 = (i1)+1;
	i8 v1844 = (i8)(intptr_t)(ws+393);
	*(i1*)(intptr_t)v1844 = v1843;

	i8 v1845 = (i8)(intptr_t)(ws+3209);
	i1 v1846 = *(i1*)(intptr_t)v1845;
	i8 v1847 = (i8)(intptr_t)(ws+265);
	*(i1*)(intptr_t)v1847 = v1846;

	i8 v1848 = (i8)(intptr_t)(f82_lexer_i_read_identifier);

	((void(*)(void))(intptr_t)v1848)();

	i8 v1849 = (i8)(intptr_t)(f83_lexer_i_match_keyword);
	i1 v1850;

	((void(*)(i1* /* token */))(intptr_t)v1849)(&v1850);
	i8 v1851 = (i8)(intptr_t)(ws+3208);
	*(i1*)(intptr_t)v1851 = v1850;

	goto c02_01d2;

c02_01de:;

	i8 v1852 = (i8)(intptr_t)(ws+3209);
	i1 v1853 = *(i1*)(intptr_t)v1852;
	i8 v1854 = (i8)(intptr_t)(f80_lexer_i_unparseable);

	((void(*)(i1 /* c */))(intptr_t)v1854)(v1853);

c02_01d2:;

c02_01b4:;


	i8 v1855 = (i8)(intptr_t)(ws+3208);
	i1 v1856 = *(i1*)(intptr_t)v1855;
	i1 v1857 = (i1)+255;
	if (v1856==v1857) goto c02_01e2; else goto c02_01e3;

c02_01e2:;

	i8 v1858 = (i8)(intptr_t)(f90_lexer_i_include);

	((void(*)(void))(intptr_t)v1858)();

	goto c02_01df;

c02_01e3:;

	goto c02_019c;

c02_01df:;

	goto c02_019b;

c02_019c:;

endsub:;
	*p1287 = *(i1*)(intptr_t)(ws+3208);
}

// CountParameters workspace at ws+3328 length ws+9
void f93_CountParameters(i1* p1859 /* count */, i8 p1860 /* param */) {
	*(i8*)(intptr_t)(ws+3328) = p1860; /*param */

	i1 v1861 = (i1)+0;
	i8 v1862 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v1862 = v1861;

c02_01e6:;

	i8 v1863 = (i8)(intptr_t)(ws+3328);
	i8 v1864 = *(i8*)(intptr_t)v1863;
	i8 v1865 = (i8)+0;
	if (v1864==v1865) goto c02_01e9; else goto c02_01e8;

c02_01e8:;

	i8 v1866 = (i8)(intptr_t)(ws+3336);
	i1 v1867 = *(i1*)(intptr_t)v1866;
	i1 v1868 = v1867+(+1);
	i8 v1869 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v1869 = v1868;

	i8 v1870 = (i8)(intptr_t)(ws+3328);
	i8 v1871 = *(i8*)(intptr_t)v1870;
	i8 v1872 = *(i8*)(intptr_t)v1871;
	i8 v1873 = v1872+(+16);
	i8 v1874 = *(i8*)(intptr_t)v1873;
	i8 v1875 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v1875 = v1874;

	goto c02_01e6;

c02_01e9:;

endsub:;
	*p1859 = *(i1*)(intptr_t)(ws+3336);
}

// GetInputParameter workspace at ws+3384 length ws+24
void f94_GetInputParameter(i8* p1876 /* param */, i1 p1877 /* count */, i8 p1878 /* subr */) {
	*(i8*)(intptr_t)(ws+3384) = p1878; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p1877; /*count */

	i8 v1879 = (i8)(intptr_t)(ws+3384);
	i8 v1880 = *(i8*)(intptr_t)v1879;
	i8 v1881 = v1880+(+80);
	i1 v1882 = *(i1*)(intptr_t)v1881;
	i1 v1883 = (i1)+0;
	if (v1882==v1883) goto c02_01ee; else goto c02_01ed;

c02_01ed:;

	i8 v1884 = (i8)(intptr_t)(ws+3384);
	i8 v1885 = *(i8*)(intptr_t)v1884;
	i8 v1886 = v1885+(+16);
	i8 v1887 = *(i8*)(intptr_t)v1886;
	i8 v1888 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1888 = v1887;

c02_01f1:;

	i8 v1889 = (i8)(intptr_t)(ws+3392);
	i1 v1890 = *(i1*)(intptr_t)v1889;
	i1 v1891 = (i1)+0;
	if (v1890==v1891) goto c02_01f4; else goto c02_01f3;

c02_01f3:;

	i8 v1892 = (i8)(intptr_t)(ws+3400);
	i8 v1893 = *(i8*)(intptr_t)v1892;
	i8 v1894 = v1893+(+24);
	i8 v1895 = *(i8*)(intptr_t)v1894;
	i8 v1896 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1896 = v1895;

	i8 v1897 = (i8)(intptr_t)(ws+3392);
	i1 v1898 = *(i1*)(intptr_t)v1897;
	i1 v1899 = v1898+(-1);
	i8 v1900 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v1900 = v1899;

	goto c02_01f1;

c02_01f4:;

	goto c02_01ea;

c02_01ee:;

	i8 v1901 = (i8)+0;
	i8 v1902 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1902 = v1901;

c02_01ea:;

endsub:;
	*p1876 = *(i8*)(intptr_t)(ws+3400);
}

// GetOutputParameter workspace at ws+3384 length ws+24
void f95_GetOutputParameter(i8* p1903 /* param */, i1 p1904 /* count */, i8 p1905 /* subr */) {
	*(i8*)(intptr_t)(ws+3384) = p1905; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p1904; /*count */

	i8 v1906 = (i8)(intptr_t)(ws+3384);
	i8 v1907 = *(i8*)(intptr_t)v1906;
	i8 v1908 = v1907+(+81);
	i1 v1909 = *(i1*)(intptr_t)v1908;
	i1 v1910 = (i1)+0;
	if (v1909==v1910) goto c02_01f9; else goto c02_01f8;

c02_01f8:;

	i8 v1911 = (i8)(intptr_t)(ws+3392);
	i1 v1912 = *(i1*)(intptr_t)v1911;
	i8 v1913 = (i8)(intptr_t)(ws+3384);
	i8 v1914 = *(i8*)(intptr_t)v1913;
	i8 v1915 = v1914+(+80);
	i1 v1916 = *(i1*)(intptr_t)v1915;
	i1 v1917 = v1912+v1916;
	i8 v1918 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v1918 = v1917;

	i8 v1919 = (i8)(intptr_t)(ws+3384);
	i8 v1920 = *(i8*)(intptr_t)v1919;
	i8 v1921 = v1920+(+16);
	i8 v1922 = *(i8*)(intptr_t)v1921;
	i8 v1923 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1923 = v1922;

c02_01fc:;

	i8 v1924 = (i8)(intptr_t)(ws+3392);
	i1 v1925 = *(i1*)(intptr_t)v1924;
	i1 v1926 = (i1)+0;
	if (v1925==v1926) goto c02_01ff; else goto c02_01fe;

c02_01fe:;

	i8 v1927 = (i8)(intptr_t)(ws+3400);
	i8 v1928 = *(i8*)(intptr_t)v1927;
	i8 v1929 = v1928+(+24);
	i8 v1930 = *(i8*)(intptr_t)v1929;
	i8 v1931 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1931 = v1930;

	i8 v1932 = (i8)(intptr_t)(ws+3392);
	i1 v1933 = *(i1*)(intptr_t)v1932;
	i1 v1934 = v1933+(-1);
	i8 v1935 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v1935 = v1934;

	goto c02_01fc;

c02_01ff:;

	goto c02_01f5;

c02_01f9:;

	i8 v1936 = (i8)+0;
	i8 v1937 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v1937 = v1936;

c02_01f5:;

endsub:;
	*p1903 = *(i8*)(intptr_t)(ws+3400);
}

// WidthToIndex workspace at ws+3432 length ws+2
void f97_WidthToIndex(i1* p1946 /* index */, i1 p1947 /* width */) {
	*(i1*)(intptr_t)(ws+3432) = p1947; /*width */

	i8 v1948 = (i8)(intptr_t)(ws+3432);
	i1 v1949 = *(i1*)(intptr_t)v1948;

	if (v1949 != +4) goto c02_0201;

	i1 v1950 = (i1)+3;
	i8 v1951 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v1951 = v1950;

	goto c02_0200;

c02_0201:;

	if (v1949 != +8) goto c02_0202;

	i1 v1952 = (i1)+4;
	i8 v1953 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v1953 = v1952;

	goto c02_0200;

c02_0202:;

	i8 v1954 = (i8)(intptr_t)(ws+3432);
	i1 v1955 = *(i1*)(intptr_t)v1954;
	i8 v1956 = (i8)(intptr_t)(ws+3433);
	*(i1*)(intptr_t)v1956 = v1955;

c02_0200:;


endsub:;
	*p1946 = *(i1*)(intptr_t)(ws+3433);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsubref workspace at ws+3328 length ws+16
void f99_MidAsmsubref(i8* p1957 /* m */, i8 p1958 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p1958; /*subr */

	i1 v1959 = (i1)+21;
	i8 v1960 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1961;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1960)(&v1961, v1959);
	i8 v1962 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v1962 = v1961;

	i8 v1963 = (i8)(intptr_t)(ws+3328);
	i8 v1964 = *(i8*)(intptr_t)v1963;
	i8 v1965 = (i8)(intptr_t)(ws+3336);
	i8 v1966 = *(i8*)(intptr_t)v1965;
	*(i8*)(intptr_t)v1966 = v1964;

endsub:;
	*p1957 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmstart workspace at ws+3328 length ws+8
void f100_MidAsmstart(i8* p1967 /* m */) {

	i1 v1968 = (i1)+18;
	i8 v1969 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1970;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1969)(&v1970, v1968);
	i8 v1971 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v1971 = v1970;

endsub:;
	*p1967 = *(i8*)(intptr_t)(ws+3328);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBand workspace at ws+3328 length ws+32
void f101_MidBand(i8* p1972 /* m */, i1 p1973 /* negated */, i2 p1974 /* fallthrough */, i2 p1975 /* falselabel */, i2 p1976 /* truelabel */, i8 p1977 /* right */, i8 p1978 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p1978; /*left */
	*(i8*)(intptr_t)(ws+3336) = p1977; /*right */
	*(i2*)(intptr_t)(ws+3344) = p1976; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p1975; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p1974; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p1973; /*negated */

	i1 v1979 = (i1)+59;
	i8 v1980 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v1981;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v1980)(&v1981, v1979);
	i8 v1982 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v1982 = v1981;

	i8 v1983 = (i8)(intptr_t)(ws+3328);
	i8 v1984 = *(i8*)(intptr_t)v1983;
	i8 v1985 = (i8)(intptr_t)(ws+3352);
	i8 v1986 = *(i8*)(intptr_t)v1985;
	i8 v1987 = v1986+(+24);
	*(i8*)(intptr_t)v1987 = v1984;

	i8 v1988 = (i8)(intptr_t)(ws+3336);
	i8 v1989 = *(i8*)(intptr_t)v1988;
	i8 v1990 = (i8)(intptr_t)(ws+3352);
	i8 v1991 = *(i8*)(intptr_t)v1990;
	i8 v1992 = v1991+(+32);
	*(i8*)(intptr_t)v1992 = v1989;

	i8 v1993 = (i8)(intptr_t)(ws+3344);
	i2 v1994 = *(i2*)(intptr_t)v1993;
	i8 v1995 = (i8)(intptr_t)(ws+3352);
	i8 v1996 = *(i8*)(intptr_t)v1995;
	*(i2*)(intptr_t)v1996 = v1994;

	i8 v1997 = (i8)(intptr_t)(ws+3346);
	i2 v1998 = *(i2*)(intptr_t)v1997;
	i8 v1999 = (i8)(intptr_t)(ws+3352);
	i8 v2000 = *(i8*)(intptr_t)v1999;
	i8 v2001 = v2000+(+2);
	*(i2*)(intptr_t)v2001 = v1998;

	i8 v2002 = (i8)(intptr_t)(ws+3348);
	i2 v2003 = *(i2*)(intptr_t)v2002;
	i8 v2004 = (i8)(intptr_t)(ws+3352);
	i8 v2005 = *(i8*)(intptr_t)v2004;
	i8 v2006 = v2005+(+4);
	*(i2*)(intptr_t)v2006 = v2003;

	i8 v2007 = (i8)(intptr_t)(ws+3350);
	i1 v2008 = *(i1*)(intptr_t)v2007;
	i8 v2009 = (i8)(intptr_t)(ws+3352);
	i8 v2010 = *(i8*)(intptr_t)v2009;
	i8 v2011 = v2010+(+6);
	*(i1*)(intptr_t)v2011 = v2008;

endsub:;
	*p1972 = *(i8*)(intptr_t)(ws+3352);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmend workspace at ws+3328 length ws+8
void f102_MidAsmend(i8* p2012 /* m */) {

	i1 v2013 = (i1)+23;
	i8 v2014 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2015;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2014)(&v2015, v2013);
	i8 v2016 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2016 = v2015;

endsub:;
	*p2012 = *(i8*)(intptr_t)(ws+3328);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupend workspace at ws+3408 length ws+8
void f103_MidAsmgroupend(i8* p2017 /* m */) {

	i1 v2018 = (i1)+17;
	i8 v2019 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2020;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2019)(&v2020, v2018);
	i8 v2021 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2021 = v2020;

endsub:;
	*p2017 = *(i8*)(intptr_t)(ws+3408);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmtext workspace at ws+3328 length ws+16
void f104_MidAsmtext(i8* p2022 /* m */, i8 p2023 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2023; /*text */

	i1 v2024 = (i1)+19;
	i8 v2025 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2026;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2025)(&v2026, v2024);
	i8 v2027 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2027 = v2026;

	i8 v2028 = (i8)(intptr_t)(ws+3328);
	i8 v2029 = *(i8*)(intptr_t)v2028;
	i8 v2030 = (i8)(intptr_t)(ws+3336);
	i8 v2031 = *(i8*)(intptr_t)v2030;
	*(i8*)(intptr_t)v2031 = v2029;

endsub:;
	*p2022 = *(i8*)(intptr_t)(ws+3336);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidWhencase workspace at ws+3328 length ws+24
void f105_MidWhencase(i8* p2032 /* m */, i2 p2033 /* falselabel */, i4 p2034 /* value */, i1 p2035 /* width */) {
	*(i1*)(intptr_t)(ws+3328) = p2035; /*width */
	*(i4*)(intptr_t)(ws+3332) = p2034; /*value */
	*(i2*)(intptr_t)(ws+3336) = p2033; /*falselabel */

	i8 v2036 = (i8)(intptr_t)(ws+3328);
	i1 v2037 = *(i1*)(intptr_t)v2036;
	i8 v2038 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2039;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2038)(&v2039, v2037);
	i1 v2040 = v2039+(+81);
	i8 v2041 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2042;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2041)(&v2042, v2040);
	i8 v2043 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2043 = v2042;

	i8 v2044 = (i8)(intptr_t)(ws+3332);
	i4 v2045 = *(i4*)(intptr_t)v2044;
	i8 v2046 = (i8)(intptr_t)(ws+3344);
	i8 v2047 = *(i8*)(intptr_t)v2046;
	*(i4*)(intptr_t)v2047 = v2045;

	i8 v2048 = (i8)(intptr_t)(ws+3336);
	i2 v2049 = *(i2*)(intptr_t)v2048;
	i8 v2050 = (i8)(intptr_t)(ws+3344);
	i8 v2051 = *(i8*)(intptr_t)v2050;
	i8 v2052 = v2051+(+4);
	*(i2*)(intptr_t)v2052 = v2049;

endsub:;
	*p2032 = *(i8*)(intptr_t)(ws+3344);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndcase workspace at ws+3336 length ws+16
void f106_MidEndcase(i8* p2053 /* m */, i1 p2054 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2054; /*width */

	i8 v2055 = (i8)(intptr_t)(ws+3336);
	i1 v2056 = *(i1*)(intptr_t)v2055;
	i8 v2057 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2058;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2057)(&v2058, v2056);
	i1 v2059 = v2058+(+86);
	i8 v2060 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2061;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2060)(&v2061, v2059);
	i8 v2062 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2062 = v2061;

endsub:;
	*p2053 = *(i8*)(intptr_t)(ws+3344);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBltu workspace at ws+3368 length ws+40
void f107_MidBltu(i8* p2063 /* m */, i1 p2064 /* negated */, i2 p2065 /* fallthrough */, i2 p2066 /* falselabel */, i2 p2067 /* truelabel */, i8 p2068 /* right */, i8 p2069 /* left */, i1 p2070 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2070; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2069; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2068; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2067; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2066; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2065; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2064; /*negated */

	i8 v2071 = (i8)(intptr_t)(ws+3368);
	i1 v2072 = *(i1*)(intptr_t)v2071;
	i8 v2073 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2074;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2073)(&v2074, v2072);
	i1 v2075 = v2074+(+71);
	i8 v2076 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2077;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2076)(&v2077, v2075);
	i8 v2078 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2078 = v2077;

	i8 v2079 = (i8)(intptr_t)(ws+3376);
	i8 v2080 = *(i8*)(intptr_t)v2079;
	i8 v2081 = (i8)(intptr_t)(ws+3400);
	i8 v2082 = *(i8*)(intptr_t)v2081;
	i8 v2083 = v2082+(+24);
	*(i8*)(intptr_t)v2083 = v2080;

	i8 v2084 = (i8)(intptr_t)(ws+3384);
	i8 v2085 = *(i8*)(intptr_t)v2084;
	i8 v2086 = (i8)(intptr_t)(ws+3400);
	i8 v2087 = *(i8*)(intptr_t)v2086;
	i8 v2088 = v2087+(+32);
	*(i8*)(intptr_t)v2088 = v2085;

	i8 v2089 = (i8)(intptr_t)(ws+3392);
	i2 v2090 = *(i2*)(intptr_t)v2089;
	i8 v2091 = (i8)(intptr_t)(ws+3400);
	i8 v2092 = *(i8*)(intptr_t)v2091;
	*(i2*)(intptr_t)v2092 = v2090;

	i8 v2093 = (i8)(intptr_t)(ws+3394);
	i2 v2094 = *(i2*)(intptr_t)v2093;
	i8 v2095 = (i8)(intptr_t)(ws+3400);
	i8 v2096 = *(i8*)(intptr_t)v2095;
	i8 v2097 = v2096+(+2);
	*(i2*)(intptr_t)v2097 = v2094;

	i8 v2098 = (i8)(intptr_t)(ws+3396);
	i2 v2099 = *(i2*)(intptr_t)v2098;
	i8 v2100 = (i8)(intptr_t)(ws+3400);
	i8 v2101 = *(i8*)(intptr_t)v2100;
	i8 v2102 = v2101+(+4);
	*(i2*)(intptr_t)v2102 = v2099;

	i8 v2103 = (i8)(intptr_t)(ws+3398);
	i1 v2104 = *(i1*)(intptr_t)v2103;
	i8 v2105 = (i8)(intptr_t)(ws+3400);
	i8 v2106 = *(i8*)(intptr_t)v2105;
	i8 v2107 = v2106+(+6);
	*(i1*)(intptr_t)v2107 = v2104;

endsub:;
	*p2063 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartsub workspace at ws+3336 length ws+16
void f108_MidStartsub(i8* p2108 /* m */, i8 p2109 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p2109; /*subr */

	i1 v2110 = (i1)+4;
	i8 v2111 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2112;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2111)(&v2112, v2110);
	i8 v2113 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2113 = v2112;

	i8 v2114 = (i8)(intptr_t)(ws+3336);
	i8 v2115 = *(i8*)(intptr_t)v2114;
	i8 v2116 = (i8)(intptr_t)(ws+3344);
	i8 v2117 = *(i8*)(intptr_t)v2116;
	*(i8*)(intptr_t)v2117 = v2115;

endsub:;
	*p2108 = *(i8*)(intptr_t)(ws+3344);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndfile workspace at ws+3208 length ws+8
void f109_MidEndfile(i8* p2118 /* m */) {

	i1 v2119 = (i1)+3;
	i8 v2120 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2121;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2120)(&v2121, v2119);
	i8 v2122 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v2122 = v2121;

endsub:;
	*p2118 = *(i8*)(intptr_t)(ws+3208);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitaddress workspace at ws+3352 length ws+24
void f111_MidInitaddress(i8* p2144 /* m */, i2 p2145 /* off */, i8 p2146 /* sym */) {
	*(i8*)(intptr_t)(ws+3352) = p2146; /*sym */
	*(i2*)(intptr_t)(ws+3360) = p2145; /*off */

	i1 v2147 = (i1)+13;
	i8 v2148 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2149;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2148)(&v2149, v2147);
	i8 v2150 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v2150 = v2149;

	i8 v2151 = (i8)(intptr_t)(ws+3352);
	i8 v2152 = *(i8*)(intptr_t)v2151;
	i8 v2153 = (i8)(intptr_t)(ws+3368);
	i8 v2154 = *(i8*)(intptr_t)v2153;
	*(i8*)(intptr_t)v2154 = v2152;

	i8 v2155 = (i8)(intptr_t)(ws+3360);
	i2 v2156 = *(i2*)(intptr_t)v2155;
	i8 v2157 = (i8)(intptr_t)(ws+3368);
	i8 v2158 = *(i8*)(intptr_t)v2157;
	i8 v2159 = v2158+(+8);
	*(i2*)(intptr_t)v2159 = v2156;

endsub:;
	*p2144 = *(i8*)(intptr_t)(ws+3368);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmgroupstart workspace at ws+3408 length ws+8
void f113_MidAsmgroupstart(i8* p2182 /* m */) {

	i1 v2183 = (i1)+16;
	i8 v2184 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2185;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2184)(&v2185, v2183);
	i8 v2186 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v2186 = v2185;

endsub:;
	*p2182 = *(i8*)(intptr_t)(ws+3408);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEnd workspace at ws+3336 length ws+8
void f114_MidEnd(i8* p2187 /* m */) {

	i1 v2188 = (i1)+1;
	i8 v2189 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2190;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2189)(&v2190, v2188);
	i8 v2191 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2191 = v2190;

endsub:;
	*p2187 = *(i8*)(intptr_t)(ws+3336);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStore workspace at ws+3376 length ws+32
void f116_MidStore(i8* p2214 /* m */, i8 p2215 /* right */, i8 p2216 /* left */, i1 p2217 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2217; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2216; /*left */
	*(i8*)(intptr_t)(ws+3392) = p2215; /*right */

	i8 v2218 = (i8)(intptr_t)(ws+3376);
	i1 v2219 = *(i1*)(intptr_t)v2218;
	i8 v2220 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2221;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2220)(&v2221, v2219);
	i1 v2222 = v2221+(+54);
	i8 v2223 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2224;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2223)(&v2224, v2222);
	i8 v2225 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2225 = v2224;

	i8 v2226 = (i8)(intptr_t)(ws+3384);
	i8 v2227 = *(i8*)(intptr_t)v2226;
	i8 v2228 = (i8)(intptr_t)(ws+3400);
	i8 v2229 = *(i8*)(intptr_t)v2228;
	i8 v2230 = v2229+(+24);
	*(i8*)(intptr_t)v2230 = v2227;

	i8 v2231 = (i8)(intptr_t)(ws+3392);
	i8 v2232 = *(i8*)(intptr_t)v2231;
	i8 v2233 = (i8)(intptr_t)(ws+3400);
	i8 v2234 = *(i8*)(intptr_t)v2233;
	i8 v2235 = v2234+(+32);
	*(i8*)(intptr_t)v2235 = v2232;

endsub:;
	*p2214 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndinit workspace at ws+3328 length ws+8
void f118_MidEndinit(i8* p2257 /* m */) {

	i1 v2258 = (i1)+15;
	i8 v2259 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2260;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2259)(&v2260, v2258);
	i8 v2261 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v2261 = v2260;

endsub:;
	*p2257 = *(i8*)(intptr_t)(ws+3328);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartfile workspace at ws+3208 length ws+8
void f119_MidStartfile(i8* p2262 /* m */) {

	i1 v2263 = (i1)+2;
	i8 v2264 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2265;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2264)(&v2265, v2263);
	i8 v2266 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v2266 = v2265;

endsub:;
	*p2262 = *(i8*)(intptr_t)(ws+3208);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartinit workspace at ws+3328 length ws+16
void f120_MidStartinit(i8* p2267 /* m */, i8 p2268 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p2268; /*sym */

	i1 v2269 = (i1)+6;
	i8 v2270 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2271;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2270)(&v2271, v2269);
	i8 v2272 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2272 = v2271;

	i8 v2273 = (i8)(intptr_t)(ws+3328);
	i8 v2274 = *(i8*)(intptr_t)v2273;
	i8 v2275 = (i8)(intptr_t)(ws+3336);
	i8 v2276 = *(i8*)(intptr_t)v2275;
	*(i8*)(intptr_t)v2276 = v2274;

endsub:;
	*p2267 = *(i8*)(intptr_t)(ws+3336);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidArg workspace at ws+3336 length ws+48
void f122_MidArg(i8* p2299 /* m */, i1 p2300 /* remaining */, i8 p2301 /* subr */, i8 p2302 /* right */, i8 p2303 /* left */, i1 p2304 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2304; /*width */
	*(i8*)(intptr_t)(ws+3344) = p2303; /*left */
	*(i8*)(intptr_t)(ws+3352) = p2302; /*right */
	*(i8*)(intptr_t)(ws+3360) = p2301; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p2300; /*remaining */

	i8 v2305 = (i8)(intptr_t)(ws+3336);
	i1 v2306 = *(i1*)(intptr_t)v2305;
	i8 v2307 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2308;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2307)(&v2308, v2306);
	i1 v2309 = v2308+(+35);
	i8 v2310 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2311;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2310)(&v2311, v2309);
	i8 v2312 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v2312 = v2311;

	i8 v2313 = (i8)(intptr_t)(ws+3344);
	i8 v2314 = *(i8*)(intptr_t)v2313;
	i8 v2315 = (i8)(intptr_t)(ws+3376);
	i8 v2316 = *(i8*)(intptr_t)v2315;
	i8 v2317 = v2316+(+24);
	*(i8*)(intptr_t)v2317 = v2314;

	i8 v2318 = (i8)(intptr_t)(ws+3352);
	i8 v2319 = *(i8*)(intptr_t)v2318;
	i8 v2320 = (i8)(intptr_t)(ws+3376);
	i8 v2321 = *(i8*)(intptr_t)v2320;
	i8 v2322 = v2321+(+32);
	*(i8*)(intptr_t)v2322 = v2319;

	i8 v2323 = (i8)(intptr_t)(ws+3360);
	i8 v2324 = *(i8*)(intptr_t)v2323;
	i8 v2325 = (i8)(intptr_t)(ws+3376);
	i8 v2326 = *(i8*)(intptr_t)v2325;
	*(i8*)(intptr_t)v2326 = v2324;

	i8 v2327 = (i8)(intptr_t)(ws+3368);
	i1 v2328 = *(i1*)(intptr_t)v2327;
	i8 v2329 = (i8)(intptr_t)(ws+3376);
	i8 v2330 = *(i8*)(intptr_t)v2329;
	i8 v2331 = v2330+(+8);
	*(i1*)(intptr_t)v2331 = v2328;

endsub:;
	*p2299 = *(i8*)(intptr_t)(ws+3376);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidEndsub workspace at ws+3344 length ws+16
void f123_MidEndsub(i8* p2332 /* m */, i8 p2333 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p2333; /*subr */

	i1 v2334 = (i1)+5;
	i8 v2335 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2336;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2335)(&v2336, v2334);
	i8 v2337 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2337 = v2336;

	i8 v2338 = (i8)(intptr_t)(ws+3344);
	i8 v2339 = *(i8*)(intptr_t)v2338;
	i8 v2340 = (i8)(intptr_t)(ws+3352);
	i8 v2341 = *(i8*)(intptr_t)v2340;
	*(i8*)(intptr_t)v2341 = v2339;

endsub:;
	*p2332 = *(i8*)(intptr_t)(ws+3352);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCalle workspace at ws+3344 length ws+40
void f124_MidCalle(i8* p2342 /* m */, i8 p2343 /* subr */, i8 p2344 /* right */, i8 p2345 /* left */, i1 p2346 /* width */) {
	*(i1*)(intptr_t)(ws+3344) = p2346; /*width */
	*(i8*)(intptr_t)(ws+3352) = p2345; /*left */
	*(i8*)(intptr_t)(ws+3360) = p2344; /*right */
	*(i8*)(intptr_t)(ws+3368) = p2343; /*subr */

	i8 v2347 = (i8)(intptr_t)(ws+3344);
	i1 v2348 = *(i1*)(intptr_t)v2347;
	i8 v2349 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2350;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2349)(&v2350, v2348);
	i1 v2351 = v2350+(+30);
	i8 v2352 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2353;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2352)(&v2353, v2351);
	i8 v2354 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v2354 = v2353;

	i8 v2355 = (i8)(intptr_t)(ws+3352);
	i8 v2356 = *(i8*)(intptr_t)v2355;
	i8 v2357 = (i8)(intptr_t)(ws+3376);
	i8 v2358 = *(i8*)(intptr_t)v2357;
	i8 v2359 = v2358+(+24);
	*(i8*)(intptr_t)v2359 = v2356;

	i8 v2360 = (i8)(intptr_t)(ws+3360);
	i8 v2361 = *(i8*)(intptr_t)v2360;
	i8 v2362 = (i8)(intptr_t)(ws+3376);
	i8 v2363 = *(i8*)(intptr_t)v2362;
	i8 v2364 = v2363+(+32);
	*(i8*)(intptr_t)v2364 = v2361;

	i8 v2365 = (i8)(intptr_t)(ws+3368);
	i8 v2366 = *(i8*)(intptr_t)v2365;
	i8 v2367 = (i8)(intptr_t)(ws+3376);
	i8 v2368 = *(i8*)(intptr_t)v2367;
	*(i8*)(intptr_t)v2368 = v2366;

endsub:;
	*p2342 = *(i8*)(intptr_t)(ws+3376);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidConstant workspace at ws+3424 length ws+16
void f125_MidConstant(i8* p2369 /* m */, i4 p2370 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p2370; /*value */

	i1 v2371 = (i1)+45;
	i8 v2372 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2373;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2372)(&v2373, v2371);
	i8 v2374 = (i8)(intptr_t)(ws+3432);
	*(i8*)(intptr_t)v2374 = v2373;

	i8 v2375 = (i8)(intptr_t)(ws+3424);
	i4 v2376 = *(i4*)(intptr_t)v2375;
	i8 v2377 = (i8)(intptr_t)(ws+3432);
	i8 v2378 = *(i8*)(intptr_t)v2377;
	*(i4*)(intptr_t)v2378 = v2376;

endsub:;
	*p2369 = *(i8*)(intptr_t)(ws+3432);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidDeref workspace at ws+3408 length ws+24
void f126_MidDeref(i8* p2379 /* m */, i8 p2380 /* left */, i1 p2381 /* width */) {
	*(i1*)(intptr_t)(ws+3408) = p2381; /*width */
	*(i8*)(intptr_t)(ws+3416) = p2380; /*left */

	i8 v2382 = (i8)(intptr_t)(ws+3408);
	i1 v2383 = *(i1*)(intptr_t)v2382;
	i8 v2384 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2385;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2384)(&v2385, v2383);
	i1 v2386 = v2385+(+49);
	i8 v2387 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2388;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2387)(&v2388, v2386);
	i8 v2389 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v2389 = v2388;

	i8 v2390 = (i8)(intptr_t)(ws+3416);
	i8 v2391 = *(i8*)(intptr_t)v2390;
	i8 v2392 = (i8)(intptr_t)(ws+3424);
	i8 v2393 = *(i8*)(intptr_t)v2392;
	i8 v2394 = v2393+(+24);
	*(i8*)(intptr_t)v2394 = v2391;

endsub:;
	*p2379 = *(i8*)(intptr_t)(ws+3424);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBeq workspace at ws+3368 length ws+40
void f127_MidBeq(i8* p2395 /* m */, i1 p2396 /* negated */, i2 p2397 /* fallthrough */, i2 p2398 /* falselabel */, i2 p2399 /* truelabel */, i8 p2400 /* right */, i8 p2401 /* left */, i1 p2402 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2402; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2401; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2400; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2399; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2398; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2397; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2396; /*negated */

	i8 v2403 = (i8)(intptr_t)(ws+3368);
	i1 v2404 = *(i1*)(intptr_t)v2403;
	i8 v2405 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2406;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2405)(&v2406, v2404);
	i1 v2407 = v2406+(+61);
	i8 v2408 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2409;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2408)(&v2409, v2407);
	i8 v2410 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2410 = v2409;

	i8 v2411 = (i8)(intptr_t)(ws+3376);
	i8 v2412 = *(i8*)(intptr_t)v2411;
	i8 v2413 = (i8)(intptr_t)(ws+3400);
	i8 v2414 = *(i8*)(intptr_t)v2413;
	i8 v2415 = v2414+(+24);
	*(i8*)(intptr_t)v2415 = v2412;

	i8 v2416 = (i8)(intptr_t)(ws+3384);
	i8 v2417 = *(i8*)(intptr_t)v2416;
	i8 v2418 = (i8)(intptr_t)(ws+3400);
	i8 v2419 = *(i8*)(intptr_t)v2418;
	i8 v2420 = v2419+(+32);
	*(i8*)(intptr_t)v2420 = v2417;

	i8 v2421 = (i8)(intptr_t)(ws+3392);
	i2 v2422 = *(i2*)(intptr_t)v2421;
	i8 v2423 = (i8)(intptr_t)(ws+3400);
	i8 v2424 = *(i8*)(intptr_t)v2423;
	*(i2*)(intptr_t)v2424 = v2422;

	i8 v2425 = (i8)(intptr_t)(ws+3394);
	i2 v2426 = *(i2*)(intptr_t)v2425;
	i8 v2427 = (i8)(intptr_t)(ws+3400);
	i8 v2428 = *(i8*)(intptr_t)v2427;
	i8 v2429 = v2428+(+2);
	*(i2*)(intptr_t)v2429 = v2426;

	i8 v2430 = (i8)(intptr_t)(ws+3396);
	i2 v2431 = *(i2*)(intptr_t)v2430;
	i8 v2432 = (i8)(intptr_t)(ws+3400);
	i8 v2433 = *(i8*)(intptr_t)v2432;
	i8 v2434 = v2433+(+4);
	*(i2*)(intptr_t)v2434 = v2431;

	i8 v2435 = (i8)(intptr_t)(ws+3398);
	i1 v2436 = *(i1*)(intptr_t)v2435;
	i8 v2437 = (i8)(intptr_t)(ws+3400);
	i8 v2438 = *(i8*)(intptr_t)v2437;
	i8 v2439 = v2438+(+6);
	*(i1*)(intptr_t)v2439 = v2436;

endsub:;
	*p2395 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPair workspace at ws+3328 length ws+24
void f128_MidPair(i8* p2440 /* m */, i8 p2441 /* right */, i8 p2442 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2442; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2441; /*right */

	i1 v2443 = (i1)+25;
	i8 v2444 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2445;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2444)(&v2445, v2443);
	i8 v2446 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2446 = v2445;

	i8 v2447 = (i8)(intptr_t)(ws+3328);
	i8 v2448 = *(i8*)(intptr_t)v2447;
	i8 v2449 = (i8)(intptr_t)(ws+3344);
	i8 v2450 = *(i8*)(intptr_t)v2449;
	i8 v2451 = v2450+(+24);
	*(i8*)(intptr_t)v2451 = v2448;

	i8 v2452 = (i8)(intptr_t)(ws+3336);
	i8 v2453 = *(i8*)(intptr_t)v2452;
	i8 v2454 = (i8)(intptr_t)(ws+3344);
	i8 v2455 = *(i8*)(intptr_t)v2454;
	i8 v2456 = v2455+(+32);
	*(i8*)(intptr_t)v2456 = v2453;

endsub:;
	*p2440 = *(i8*)(intptr_t)(ws+3344);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidJump workspace at ws+3336 length ws+16
void f130_MidJump(i8* p2479 /* m */, i2 p2480 /* label */) {
	*(i2*)(intptr_t)(ws+3336) = p2480; /*label */

	i1 v2481 = (i1)+27;
	i8 v2482 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2483;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2482)(&v2483, v2481);
	i8 v2484 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v2484 = v2483;

	i8 v2485 = (i8)(intptr_t)(ws+3336);
	i2 v2486 = *(i2*)(intptr_t)v2485;
	i8 v2487 = (i8)(intptr_t)(ws+3344);
	i8 v2488 = *(i8*)(intptr_t)v2487;
	*(i2*)(intptr_t)v2488 = v2486;

endsub:;
	*p2479 = *(i8*)(intptr_t)(ws+3344);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidPoparg workspace at ws+3376 length ws+32
void f131_MidPoparg(i8* p2489 /* m */, i1 p2490 /* remaining */, i8 p2491 /* subr */, i1 p2492 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2492; /*width */
	*(i8*)(intptr_t)(ws+3384) = p2491; /*subr */
	*(i1*)(intptr_t)(ws+3392) = p2490; /*remaining */

	i8 v2493 = (i8)(intptr_t)(ws+3376);
	i1 v2494 = *(i1*)(intptr_t)v2493;
	i8 v2495 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2496;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2495)(&v2496, v2494);
	i1 v2497 = v2496+(+40);
	i8 v2498 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2499;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2498)(&v2499, v2497);
	i8 v2500 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2500 = v2499;

	i8 v2501 = (i8)(intptr_t)(ws+3384);
	i8 v2502 = *(i8*)(intptr_t)v2501;
	i8 v2503 = (i8)(intptr_t)(ws+3400);
	i8 v2504 = *(i8*)(intptr_t)v2503;
	*(i8*)(intptr_t)v2504 = v2502;

	i8 v2505 = (i8)(intptr_t)(ws+3392);
	i1 v2506 = *(i1*)(intptr_t)v2505;
	i8 v2507 = (i8)(intptr_t)(ws+3400);
	i8 v2508 = *(i8*)(intptr_t)v2507;
	i8 v2509 = v2508+(+8);
	*(i1*)(intptr_t)v2509 = v2506;

endsub:;
	*p2489 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidLabel workspace at ws+3392 length ws+16
void f132_MidLabel(i8* p2510 /* m */, i2 p2511 /* label */) {
	*(i2*)(intptr_t)(ws+3392) = p2511; /*label */

	i1 v2512 = (i1)+26;
	i8 v2513 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2514;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2513)(&v2514, v2512);
	i8 v2515 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2515 = v2514;

	i8 v2516 = (i8)(intptr_t)(ws+3392);
	i2 v2517 = *(i2*)(intptr_t)v2516;
	i8 v2518 = (i8)(intptr_t)(ws+3400);
	i8 v2519 = *(i8*)(intptr_t)v2518;
	*(i2*)(intptr_t)v2519 = v2517;

endsub:;
	*p2510 = *(i8*)(intptr_t)(ws+3400);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidStartcase workspace at ws+3336 length ws+24
void f134_MidStartcase(i8* p2542 /* m */, i8 p2543 /* left */, i1 p2544 /* width */) {
	*(i1*)(intptr_t)(ws+3336) = p2544; /*width */
	*(i8*)(intptr_t)(ws+3344) = p2543; /*left */

	i8 v2545 = (i8)(intptr_t)(ws+3336);
	i1 v2546 = *(i1*)(intptr_t)v2545;
	i8 v2547 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2548;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2547)(&v2548, v2546);
	i1 v2549 = v2548+(+76);
	i8 v2550 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2551;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2550)(&v2551, v2549);
	i8 v2552 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2552 = v2551;

	i8 v2553 = (i8)(intptr_t)(ws+3344);
	i8 v2554 = *(i8*)(intptr_t)v2553;
	i8 v2555 = (i8)(intptr_t)(ws+3352);
	i8 v2556 = *(i8*)(intptr_t)v2555;
	i8 v2557 = v2556+(+24);
	*(i8*)(intptr_t)v2557 = v2554;

endsub:;
	*p2542 = *(i8*)(intptr_t)(ws+3352);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBlts workspace at ws+3368 length ws+40
void f136_MidBlts(i8* p2580 /* m */, i1 p2581 /* negated */, i2 p2582 /* fallthrough */, i2 p2583 /* falselabel */, i2 p2584 /* truelabel */, i8 p2585 /* right */, i8 p2586 /* left */, i1 p2587 /* width */) {
	*(i1*)(intptr_t)(ws+3368) = p2587; /*width */
	*(i8*)(intptr_t)(ws+3376) = p2586; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2585; /*right */
	*(i2*)(intptr_t)(ws+3392) = p2584; /*truelabel */
	*(i2*)(intptr_t)(ws+3394) = p2583; /*falselabel */
	*(i2*)(intptr_t)(ws+3396) = p2582; /*fallthrough */
	*(i1*)(intptr_t)(ws+3398) = p2581; /*negated */

	i8 v2588 = (i8)(intptr_t)(ws+3368);
	i1 v2589 = *(i1*)(intptr_t)v2588;
	i8 v2590 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2591;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2590)(&v2591, v2589);
	i1 v2592 = v2591+(+66);
	i8 v2593 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2594;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2593)(&v2594, v2592);
	i8 v2595 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2595 = v2594;

	i8 v2596 = (i8)(intptr_t)(ws+3376);
	i8 v2597 = *(i8*)(intptr_t)v2596;
	i8 v2598 = (i8)(intptr_t)(ws+3400);
	i8 v2599 = *(i8*)(intptr_t)v2598;
	i8 v2600 = v2599+(+24);
	*(i8*)(intptr_t)v2600 = v2597;

	i8 v2601 = (i8)(intptr_t)(ws+3384);
	i8 v2602 = *(i8*)(intptr_t)v2601;
	i8 v2603 = (i8)(intptr_t)(ws+3400);
	i8 v2604 = *(i8*)(intptr_t)v2603;
	i8 v2605 = v2604+(+32);
	*(i8*)(intptr_t)v2605 = v2602;

	i8 v2606 = (i8)(intptr_t)(ws+3392);
	i2 v2607 = *(i2*)(intptr_t)v2606;
	i8 v2608 = (i8)(intptr_t)(ws+3400);
	i8 v2609 = *(i8*)(intptr_t)v2608;
	*(i2*)(intptr_t)v2609 = v2607;

	i8 v2610 = (i8)(intptr_t)(ws+3394);
	i2 v2611 = *(i2*)(intptr_t)v2610;
	i8 v2612 = (i8)(intptr_t)(ws+3400);
	i8 v2613 = *(i8*)(intptr_t)v2612;
	i8 v2614 = v2613+(+2);
	*(i2*)(intptr_t)v2614 = v2611;

	i8 v2615 = (i8)(intptr_t)(ws+3396);
	i2 v2616 = *(i2*)(intptr_t)v2615;
	i8 v2617 = (i8)(intptr_t)(ws+3400);
	i8 v2618 = *(i8*)(intptr_t)v2617;
	i8 v2619 = v2618+(+4);
	*(i2*)(intptr_t)v2619 = v2616;

	i8 v2620 = (i8)(intptr_t)(ws+3398);
	i1 v2621 = *(i1*)(intptr_t)v2620;
	i8 v2622 = (i8)(intptr_t)(ws+3400);
	i8 v2623 = *(i8*)(intptr_t)v2622;
	i8 v2624 = v2623+(+6);
	*(i1*)(intptr_t)v2624 = v2621;

endsub:;
	*p2580 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitsubref workspace at ws+3352 length ws+16
void f141_MidInitsubref(i8* p2712 /* m */, i8 p2713 /* subr */) {
	*(i8*)(intptr_t)(ws+3352) = p2713; /*subr */

	i1 v2714 = (i1)+14;
	i8 v2715 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2716;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2715)(&v2716, v2714);
	i8 v2717 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2717 = v2716;

	i8 v2718 = (i8)(intptr_t)(ws+3352);
	i8 v2719 = *(i8*)(intptr_t)v2718;
	i8 v2720 = (i8)(intptr_t)(ws+3360);
	i8 v2721 = *(i8*)(intptr_t)v2720;
	*(i8*)(intptr_t)v2721 = v2719;

endsub:;
	*p2712 = *(i8*)(intptr_t)(ws+3360);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInitstring workspace at ws+3352 length ws+16
void f143_MidInitstring(i8* p2744 /* m */, i8 p2745 /* text */) {
	*(i8*)(intptr_t)(ws+3352) = p2745; /*text */

	i1 v2746 = (i1)+12;
	i8 v2747 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2748;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2747)(&v2748, v2746);
	i8 v2749 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2749 = v2748;

	i8 v2750 = (i8)(intptr_t)(ws+3352);
	i8 v2751 = *(i8*)(intptr_t)v2750;
	i8 v2752 = (i8)(intptr_t)(ws+3360);
	i8 v2753 = *(i8*)(intptr_t)v2752;
	*(i8*)(intptr_t)v2753 = v2751;

endsub:;
	*p2744 = *(i8*)(intptr_t)(ws+3360);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidSubref workspace at ws+3328 length ws+16
void f145_MidSubref(i8* p2776 /* m */, i8 p2777 /* subr */) {
	*(i8*)(intptr_t)(ws+3328) = p2777; /*subr */

	i1 v2778 = (i1)+48;
	i8 v2779 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2780;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2779)(&v2780, v2778);
	i8 v2781 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2781 = v2780;

	i8 v2782 = (i8)(intptr_t)(ws+3328);
	i8 v2783 = *(i8*)(intptr_t)v2782;
	i8 v2784 = (i8)(intptr_t)(ws+3336);
	i8 v2785 = *(i8*)(intptr_t)v2784;
	*(i8*)(intptr_t)v2785 = v2783;

endsub:;
	*p2776 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCall workspace at ws+3376 length ws+32
void f146_MidCall(i8* p2786 /* m */, i8 p2787 /* subr */, i8 p2788 /* right */, i8 p2789 /* left */) {
	*(i8*)(intptr_t)(ws+3376) = p2789; /*left */
	*(i8*)(intptr_t)(ws+3384) = p2788; /*right */
	*(i8*)(intptr_t)(ws+3392) = p2787; /*subr */

	i1 v2790 = (i1)+29;
	i8 v2791 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2792;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2791)(&v2792, v2790);
	i8 v2793 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v2793 = v2792;

	i8 v2794 = (i8)(intptr_t)(ws+3376);
	i8 v2795 = *(i8*)(intptr_t)v2794;
	i8 v2796 = (i8)(intptr_t)(ws+3400);
	i8 v2797 = *(i8*)(intptr_t)v2796;
	i8 v2798 = v2797+(+24);
	*(i8*)(intptr_t)v2798 = v2795;

	i8 v2799 = (i8)(intptr_t)(ws+3384);
	i8 v2800 = *(i8*)(intptr_t)v2799;
	i8 v2801 = (i8)(intptr_t)(ws+3400);
	i8 v2802 = *(i8*)(intptr_t)v2801;
	i8 v2803 = v2802+(+32);
	*(i8*)(intptr_t)v2803 = v2800;

	i8 v2804 = (i8)(intptr_t)(ws+3392);
	i8 v2805 = *(i8*)(intptr_t)v2804;
	i8 v2806 = (i8)(intptr_t)(ws+3400);
	i8 v2807 = *(i8*)(intptr_t)v2806;
	*(i8*)(intptr_t)v2807 = v2805;

endsub:;
	*p2786 = *(i8*)(intptr_t)(ws+3400);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidBor workspace at ws+3328 length ws+32
void f147_MidBor(i8* p2808 /* m */, i1 p2809 /* negated */, i2 p2810 /* fallthrough */, i2 p2811 /* falselabel */, i2 p2812 /* truelabel */, i8 p2813 /* right */, i8 p2814 /* left */) {
	*(i8*)(intptr_t)(ws+3328) = p2814; /*left */
	*(i8*)(intptr_t)(ws+3336) = p2813; /*right */
	*(i2*)(intptr_t)(ws+3344) = p2812; /*truelabel */
	*(i2*)(intptr_t)(ws+3346) = p2811; /*falselabel */
	*(i2*)(intptr_t)(ws+3348) = p2810; /*fallthrough */
	*(i1*)(intptr_t)(ws+3350) = p2809; /*negated */

	i1 v2815 = (i1)+60;
	i8 v2816 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2817;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2816)(&v2817, v2815);
	i8 v2818 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v2818 = v2817;

	i8 v2819 = (i8)(intptr_t)(ws+3328);
	i8 v2820 = *(i8*)(intptr_t)v2819;
	i8 v2821 = (i8)(intptr_t)(ws+3352);
	i8 v2822 = *(i8*)(intptr_t)v2821;
	i8 v2823 = v2822+(+24);
	*(i8*)(intptr_t)v2823 = v2820;

	i8 v2824 = (i8)(intptr_t)(ws+3336);
	i8 v2825 = *(i8*)(intptr_t)v2824;
	i8 v2826 = (i8)(intptr_t)(ws+3352);
	i8 v2827 = *(i8*)(intptr_t)v2826;
	i8 v2828 = v2827+(+32);
	*(i8*)(intptr_t)v2828 = v2825;

	i8 v2829 = (i8)(intptr_t)(ws+3344);
	i2 v2830 = *(i2*)(intptr_t)v2829;
	i8 v2831 = (i8)(intptr_t)(ws+3352);
	i8 v2832 = *(i8*)(intptr_t)v2831;
	*(i2*)(intptr_t)v2832 = v2830;

	i8 v2833 = (i8)(intptr_t)(ws+3346);
	i2 v2834 = *(i2*)(intptr_t)v2833;
	i8 v2835 = (i8)(intptr_t)(ws+3352);
	i8 v2836 = *(i8*)(intptr_t)v2835;
	i8 v2837 = v2836+(+2);
	*(i2*)(intptr_t)v2837 = v2834;

	i8 v2838 = (i8)(intptr_t)(ws+3348);
	i2 v2839 = *(i2*)(intptr_t)v2838;
	i8 v2840 = (i8)(intptr_t)(ws+3352);
	i8 v2841 = *(i8*)(intptr_t)v2840;
	i8 v2842 = v2841+(+4);
	*(i2*)(intptr_t)v2842 = v2839;

	i8 v2843 = (i8)(intptr_t)(ws+3350);
	i1 v2844 = *(i1*)(intptr_t)v2843;
	i8 v2845 = (i8)(intptr_t)(ws+3352);
	i8 v2846 = *(i8*)(intptr_t)v2845;
	i8 v2847 = v2846+(+6);
	*(i1*)(intptr_t)v2847 = v2844;

endsub:;
	*p2808 = *(i8*)(intptr_t)(ws+3352);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAddress workspace at ws+3344 length ws+24
void f149_MidAddress(i8* p2870 /* m */, i2 p2871 /* off */, i8 p2872 /* sym */) {
	*(i8*)(intptr_t)(ws+3344) = p2872; /*sym */
	*(i2*)(intptr_t)(ws+3352) = p2871; /*off */

	i1 v2873 = (i1)+47;
	i8 v2874 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2875;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2874)(&v2875, v2873);
	i8 v2876 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v2876 = v2875;

	i8 v2877 = (i8)(intptr_t)(ws+3344);
	i8 v2878 = *(i8*)(intptr_t)v2877;
	i8 v2879 = (i8)(intptr_t)(ws+3360);
	i8 v2880 = *(i8*)(intptr_t)v2879;
	*(i8*)(intptr_t)v2880 = v2878;

	i8 v2881 = (i8)(intptr_t)(ws+3352);
	i2 v2882 = *(i2*)(intptr_t)v2881;
	i8 v2883 = (i8)(intptr_t)(ws+3360);
	i8 v2884 = *(i8*)(intptr_t)v2883;
	i8 v2885 = v2884+(+8);
	*(i2*)(intptr_t)v2885 = v2882;

endsub:;
	*p2870 = *(i8*)(intptr_t)(ws+3360);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidInit workspace at ws+3376 length ws+16
void f150_MidInit(i8* p2886 /* m */, i4 p2887 /* value */, i1 p2888 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p2888; /*width */
	*(i4*)(intptr_t)(ws+3380) = p2887; /*value */

	i8 v2889 = (i8)(intptr_t)(ws+3376);
	i1 v2890 = *(i1*)(intptr_t)v2889;
	i8 v2891 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v2892;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v2891)(&v2892, v2890);
	i1 v2893 = v2892+(+7);
	i8 v2894 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2895;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2894)(&v2895, v2893);
	i8 v2896 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v2896 = v2895;

	i8 v2897 = (i8)(intptr_t)(ws+3380);
	i4 v2898 = *(i4*)(intptr_t)v2897;
	i8 v2899 = (i8)(intptr_t)(ws+3384);
	i8 v2900 = *(i8*)(intptr_t)v2899;
	*(i4*)(intptr_t)v2900 = v2898;

endsub:;
	*p2886 = *(i8*)(intptr_t)(ws+3384);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmsymbol workspace at ws+3328 length ws+16
void f153_MidAsmsymbol(i8* p2933 /* m */, i8 p2934 /* sym */) {
	*(i8*)(intptr_t)(ws+3328) = p2934; /*sym */

	i1 v2935 = (i1)+20;
	i8 v2936 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2937;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2936)(&v2937, v2935);
	i8 v2938 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2938 = v2937;

	i8 v2939 = (i8)(intptr_t)(ws+3328);
	i8 v2940 = *(i8*)(intptr_t)v2939;
	i8 v2941 = (i8)(intptr_t)(ws+3336);
	i8 v2942 = *(i8*)(intptr_t)v2941;
	*(i8*)(intptr_t)v2942 = v2940;

endsub:;
	*p2933 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidString workspace at ws+3328 length ws+16
void f155_MidString(i8* p2965 /* m */, i8 p2966 /* text */) {
	*(i8*)(intptr_t)(ws+3328) = p2966; /*text */

	i1 v2967 = (i1)+46;
	i8 v2968 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v2969;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2968)(&v2969, v2967);
	i8 v2970 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v2970 = v2969;

	i8 v2971 = (i8)(intptr_t)(ws+3328);
	i8 v2972 = *(i8*)(intptr_t)v2971;
	i8 v2973 = (i8)(intptr_t)(ws+3336);
	i8 v2974 = *(i8*)(intptr_t)v2973;
	*(i8*)(intptr_t)v2974 = v2972;

endsub:;
	*p2965 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidAsmvalue workspace at ws+3328 length ws+16
void f157_MidAsmvalue(i8* p2996 /* m */, i4 p2997 /* value */) {
	*(i4*)(intptr_t)(ws+3328) = p2997; /*value */

	i1 v2998 = (i1)+22;
	i8 v2999 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3000;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v2999)(&v3000, v2998);
	i8 v3001 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v3001 = v3000;

	i8 v3002 = (i8)(intptr_t)(ws+3328);
	i4 v3003 = *(i4*)(intptr_t)v3002;
	i8 v3004 = (i8)(intptr_t)(ws+3336);
	i8 v3005 = *(i8*)(intptr_t)v3004;
	*(i4*)(intptr_t)v3005 = v3003;

endsub:;
	*p2996 = *(i8*)(intptr_t)(ws+3336);
}
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidReturn workspace at ws+3328 length ws+8
void f158_MidReturn(i8* p3006 /* m */) {

	i1 v3007 = (i1)+28;
	i8 v3008 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3009;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3008)(&v3009, v3007);
	i8 v3010 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v3010 = v3009;

endsub:;
	*p3006 = *(i8*)(intptr_t)(ws+3328);
}
	void f7_MemSet(i8 /* len */, i1 /* byte */, i8 /* buf */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// AllocateNewNode workspace at ws+3440 length ws+16
void f98_AllocateNewNode(i8* p3036 /* m */, i1 p3037 /* code */) {
	*(i1*)(intptr_t)(ws+3440) = p3037; /*code */

	i8 v3038 = (i8)(intptr_t)(ws+928);
	i8 v3039 = *(i8*)(intptr_t)v3038;
	i8 v3040 = (i8)+0;
	if (v3039==v3040) goto c02_0208; else goto c02_0207;

c02_0207:;

	i8 v3041 = (i8)(intptr_t)(ws+928);
	i8 v3042 = *(i8*)(intptr_t)v3041;
	i8 v3043 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3043 = v3042;

	i8 v3044 = (i8)(intptr_t)(ws+928);
	i8 v3045 = *(i8*)(intptr_t)v3044;
	i8 v3046 = v3045+(+24);
	i8 v3047 = *(i8*)(intptr_t)v3046;
	i8 v3048 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3048 = v3047;

	i8 v3049 = (i8)(intptr_t)(ws+3448);
	i8 v3050 = *(i8*)(intptr_t)v3049;
	i1 v3051 = (i1)+0;
	i8 v3052 = (i8)+41;
	i8 v3053 = (i8)(intptr_t)(f7_MemSet);

	((void(*)(i8 /* len */, i1 /* byte */, i8 /* buf */))(intptr_t)v3053)(v3052, v3051, v3050);

	goto c02_0204;

c02_0208:;

	i8 v3054 = (i8)+41;
	i8 v3055 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v3056;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v3055)(&v3056, v3054);
	i8 v3057 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v3057 = v3056;

c02_0204:;

	i8 v3058 = (i8)(intptr_t)(ws+3440);
	i1 v3059 = *(i1*)(intptr_t)v3058;
	i8 v3060 = (i8)(intptr_t)(ws+3448);
	i8 v3061 = *(i8*)(intptr_t)v3060;
	i8 v3062 = v3061+(+40);
	*(i1*)(intptr_t)v3062 = v3059;

endsub:;
	*p3036 = *(i8*)(intptr_t)(ws+3448);
}

// FreeNode workspace at ws+3464 length ws+8
void f161_FreeNode(i8 p3063 /* node */) {
	*(i8*)(intptr_t)(ws+3464) = p3063; /*node */

	i8 v3064 = (i8)(intptr_t)(ws+928);
	i8 v3065 = *(i8*)(intptr_t)v3064;
	i8 v3066 = (i8)(intptr_t)(ws+3464);
	i8 v3067 = *(i8*)(intptr_t)v3066;
	i8 v3068 = v3067+(+24);
	*(i8*)(intptr_t)v3068 = v3065;

	i8 v3069 = (i8)(intptr_t)(ws+3464);
	i8 v3070 = *(i8*)(intptr_t)v3069;
	i8 v3071 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3071 = v3070;

endsub:;
}
	void f33_Free(i8 /* block */);

// PurgeAllFreeNodes workspace at ws+3472 length ws+8
void f68_PurgeAllFreeNodes(void) {

c02_020b:;

	i8 v3072 = (i8)(intptr_t)(ws+928);
	i8 v3073 = *(i8*)(intptr_t)v3072;
	i8 v3074 = (i8)+0;
	if (v3073==v3074) goto c02_020e; else goto c02_020d;

c02_020d:;

	i8 v3075 = (i8)(intptr_t)(ws+928);
	i8 v3076 = *(i8*)(intptr_t)v3075;
	i8 v3077 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v3077 = v3076;

	i8 v3078 = (i8)(intptr_t)(ws+928);
	i8 v3079 = *(i8*)(intptr_t)v3078;
	i8 v3080 = v3079+(+24);
	i8 v3081 = *(i8*)(intptr_t)v3080;
	i8 v3082 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3082 = v3081;

	i8 v3083 = (i8)(intptr_t)(ws+3472);
	i8 v3084 = *(i8*)(intptr_t)v3083;
	i8 v3085 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v3085)(v3084);

	goto c02_020b;

c02_020e:;

endsub:;
}

// NodeWidth workspace at ws+3376 length ws+9
void f162_NodeWidth(i1* p3086 /* width */, i8 p3087 /* node */) {
	*(i8*)(intptr_t)(ws+3376) = p3087; /*node */

	i1 v3088 = (i1)+0;
	i8 v3089 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v3089 = v3088;

	i8 v3090 = (i8)(intptr_t)(ws+3376);
	i8 v3091 = *(i8*)(intptr_t)v3090;
	i8 v3092 = v3091+(+16);
	i8 v3093 = *(i8*)(intptr_t)v3092;
	i8 v3094 = (i8)+0;
	if (v3093==v3094) goto c02_0213; else goto c02_0212;

c02_0212:;

	i8 v3095 = (i8)(intptr_t)(ws+3376);
	i8 v3096 = *(i8*)(intptr_t)v3095;
	i8 v3097 = v3096+(+16);
	i8 v3098 = *(i8*)(intptr_t)v3097;
	i8 v3099 = v3098+(+48);
	i2 v3100 = *(i2*)(intptr_t)v3099;
	i1 v3101 = v3100;
	i8 v3102 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v3102 = v3101;

c02_0213:;

c02_020f:;

endsub:;
	*p3086 = *(i1*)(intptr_t)(ws+3384);
}
const i1 c02_s00f7[] = { 0x62,0x61,0x64,0x20,0x66,0x6f,0x6c,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// midcodec_i_bad_fold workspace at ws+3464 length ws+0
void f163_midcodec_i_bad_fold(void) {

	i8 v3103 = (i8)(intptr_t)c02_s00f7;
	i8 v3104 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3104)(v3103);

endsub:;
}
	void f163_midcodec_i_bad_fold(void);

// FoldConstant1 workspace at ws+3376 length ws+24
void f164_FoldConstant1(i4* p3105 /* result */, i8 p3106 /* lhsp */, i1 p3107 /* op */) {
	*(i1*)(intptr_t)(ws+3376) = p3107; /*op */
	*(i8*)(intptr_t)(ws+3384) = p3106; /*lhsp */

	i8 v3108 = (i8)(intptr_t)(ws+3384);
	i8 v3109 = *(i8*)(intptr_t)v3108;
	i4 v3110 = *(i4*)(intptr_t)v3109;
	i8 v3111 = (i8)(intptr_t)(ws+3396);
	*(i4*)(intptr_t)v3111 = v3110;

	i8 v3112 = (i8)(intptr_t)(ws+3376);
	i1 v3113 = *(i1*)(intptr_t)v3112;

	if (v3113 != +111) goto c02_0215;

	i8 v3114 = (i8)(intptr_t)(ws+3396);
	i4 v3115 = *(i4*)(intptr_t)v3114;
	i4 v3116 = ~v3115;
	i8 v3117 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v3117 = v3116;

	goto c02_0214;

c02_0215:;

	if (v3113 != +116) goto c02_0216;

	i8 v3118 = (i8)(intptr_t)(ws+3396);
	i4 v3119 = *(i4*)(intptr_t)v3118;
	i4 v3120 = -v3119;
	i8 v3121 = (i8)(intptr_t)(ws+3392);
	*(i4*)(intptr_t)v3121 = v3120;

	goto c02_0214;

c02_0216:;

	i8 v3122 = (i8)(intptr_t)(f163_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3122)();

c02_0214:;


endsub:;
	*p3105 = *(i4*)(intptr_t)(ws+3392);
}
	void f163_midcodec_i_bad_fold(void);

// FoldConstant2 workspace at ws+3424 length ws+36
void f165_FoldConstant2(i4* p3123 /* result */, i8 p3124 /* rhsp */, i8 p3125 /* lhsp */, i1 p3126 /* op */) {
	*(i1*)(intptr_t)(ws+3424) = p3126; /*op */
	*(i8*)(intptr_t)(ws+3432) = p3125; /*lhsp */
	*(i8*)(intptr_t)(ws+3440) = p3124; /*rhsp */

	i8 v3127 = (i8)(intptr_t)(ws+3432);
	i8 v3128 = *(i8*)(intptr_t)v3127;
	i4 v3129 = *(i4*)(intptr_t)v3128;
	i8 v3130 = (i8)(intptr_t)(ws+3452);
	*(i4*)(intptr_t)v3130 = v3129;

	i8 v3131 = (i8)(intptr_t)(ws+3440);
	i8 v3132 = *(i8*)(intptr_t)v3131;
	i4 v3133 = *(i4*)(intptr_t)v3132;
	i8 v3134 = (i8)(intptr_t)(ws+3456);
	*(i4*)(intptr_t)v3134 = v3133;

	i8 v3135 = (i8)(intptr_t)(ws+3424);
	i1 v3136 = *(i1*)(intptr_t)v3135;

	if (v3136 != +161) goto c02_0218;

	i8 v3137 = (i8)(intptr_t)(ws+3452);
	i4 v3138 = *(i4*)(intptr_t)v3137;
	i8 v3139 = (i8)(intptr_t)(ws+3456);
	i4 v3140 = *(i4*)(intptr_t)v3139;
	i4 v3141 = v3138+v3140;
	i8 v3142 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3142 = v3141;

	goto c02_0217;

c02_0218:;

	if (v3136 != +136) goto c02_0219;

	i8 v3143 = (i8)(intptr_t)(ws+3452);
	i4 v3144 = *(i4*)(intptr_t)v3143;
	i8 v3145 = (i8)(intptr_t)(ws+3456);
	i4 v3146 = *(i4*)(intptr_t)v3145;
	i4 v3147 = v3144-v3146;
	i8 v3148 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3148 = v3147;

	goto c02_0217;

c02_0219:;

	if (v3136 != +166) goto c02_021a;

	i8 v3149 = (i8)(intptr_t)(ws+3452);
	i4 v3150 = *(i4*)(intptr_t)v3149;
	i8 v3151 = (i8)(intptr_t)(ws+3456);
	i4 v3152 = *(i4*)(intptr_t)v3151;
	i4 v3153 = v3150*v3152;
	i8 v3154 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3154 = v3153;

	goto c02_0217;

c02_021a:;

	if (v3136 != +141) goto c02_021b;

	i8 v3155 = (i8)(intptr_t)(ws+3452);
	i4 v3156 = *(i4*)(intptr_t)v3155;
	i8 v3157 = (i8)(intptr_t)(ws+3456);
	i4 v3158 = *(i4*)(intptr_t)v3157;
	i4 v3159 = v3156/v3158;
	i8 v3160 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3160 = v3159;

	goto c02_0217;

c02_021b:;

	if (v3136 != +146) goto c02_021c;

	i8 v3161 = (i8)(intptr_t)(ws+3452);
	i4 v3162 = *(i4*)(intptr_t)v3161;
	i8 v3163 = (i8)(intptr_t)(ws+3456);
	i4 v3164 = *(i4*)(intptr_t)v3163;
	i4 v3165 = (s4)v3162/(s4)v3164;
	i8 v3166 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3166 = v3165;

	goto c02_0217;

c02_021c:;

	if (v3136 != +151) goto c02_021d;

	i8 v3167 = (i8)(intptr_t)(ws+3452);
	i4 v3168 = *(i4*)(intptr_t)v3167;
	i8 v3169 = (i8)(intptr_t)(ws+3456);
	i4 v3170 = *(i4*)(intptr_t)v3169;
	i4 v3171 = v3168%v3170;
	i8 v3172 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3172 = v3171;

	goto c02_0217;

c02_021d:;

	if (v3136 != +156) goto c02_021e;

	i8 v3173 = (i8)(intptr_t)(ws+3452);
	i4 v3174 = *(i4*)(intptr_t)v3173;
	i8 v3175 = (i8)(intptr_t)(ws+3456);
	i4 v3176 = *(i4*)(intptr_t)v3175;
	i4 v3177 = (s4)v3174%(s4)v3176;
	i8 v3178 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3178 = v3177;

	goto c02_0217;

c02_021e:;

	if (v3136 != +171) goto c02_021f;

	i8 v3179 = (i8)(intptr_t)(ws+3452);
	i4 v3180 = *(i4*)(intptr_t)v3179;
	i8 v3181 = (i8)(intptr_t)(ws+3456);
	i4 v3182 = *(i4*)(intptr_t)v3181;
	i4 v3183 = v3180&v3182;
	i8 v3184 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3184 = v3183;

	goto c02_0217;

c02_021f:;

	if (v3136 != +176) goto c02_0220;

	i8 v3185 = (i8)(intptr_t)(ws+3452);
	i4 v3186 = *(i4*)(intptr_t)v3185;
	i8 v3187 = (i8)(intptr_t)(ws+3456);
	i4 v3188 = *(i4*)(intptr_t)v3187;
	i4 v3189 = v3186|v3188;
	i8 v3190 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3190 = v3189;

	goto c02_0217;

c02_0220:;

	if (v3136 != +181) goto c02_0221;

	i8 v3191 = (i8)(intptr_t)(ws+3452);
	i4 v3192 = *(i4*)(intptr_t)v3191;
	i8 v3193 = (i8)(intptr_t)(ws+3456);
	i4 v3194 = *(i4*)(intptr_t)v3193;
	i4 v3195 = v3192^v3194;
	i8 v3196 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3196 = v3195;

	goto c02_0217;

c02_0221:;

	if (v3136 != +121) goto c02_0222;

	i8 v3197 = (i8)(intptr_t)(ws+3452);
	i4 v3198 = *(i4*)(intptr_t)v3197;
	i8 v3199 = (i8)(intptr_t)(ws+3456);
	i4 v3200 = *(i4*)(intptr_t)v3199;
	i1 v3201 = (s1)(s4)v3200;
	i4 v3202 = ((i4)v3198)<<v3201;
	i8 v3203 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3203 = v3202;

	goto c02_0217;

c02_0222:;

	if (v3136 != +126) goto c02_0223;

	i8 v3204 = (i8)(intptr_t)(ws+3452);
	i4 v3205 = *(i4*)(intptr_t)v3204;
	i8 v3206 = (i8)(intptr_t)(ws+3456);
	i4 v3207 = *(i4*)(intptr_t)v3206;
	i1 v3208 = (s1)(s4)v3207;
	i4 v3209 = ((i4)v3205)>>v3208;
	i8 v3210 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3210 = v3209;

	goto c02_0217;

c02_0223:;

	if (v3136 != +131) goto c02_0224;

	i8 v3211 = (i8)(intptr_t)(ws+3452);
	i4 v3212 = *(i4*)(intptr_t)v3211;
	i8 v3213 = (i8)(intptr_t)(ws+3456);
	i4 v3214 = *(i4*)(intptr_t)v3213;
	i1 v3215 = (s1)(s4)v3214;
	i4 v3216 = ((s4)v3212)>>v3215;
	i8 v3217 = (i8)(intptr_t)(ws+3448);
	*(i4*)(intptr_t)v3217 = v3216;

	goto c02_0217;

c02_0224:;

	i8 v3218 = (i8)(intptr_t)(f163_midcodec_i_bad_fold);

	((void(*)(void))(intptr_t)v3218)();

c02_0217:;


endsub:;
	*p3123 = *(i4*)(intptr_t)(ws+3448);
}
	void f164_FoldConstant1(i4* /* result */, i8 /* lhsp */, i1 /* op */);
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC1Op workspace at ws+3352 length ws+24
void f166_MidC1Op(i8* p3219 /* result */, i8 p3220 /* lhs */, i1 p3221 /* width */, i1 p3222 /* op */) {
	*(i1*)(intptr_t)(ws+3352) = p3222; /*op */
	*(i1*)(intptr_t)(ws+3353) = p3221; /*width */
	*(i8*)(intptr_t)(ws+3360) = p3220; /*lhs */

	i8 v3223 = (i8)(intptr_t)(ws+3360);
	i8 v3224 = *(i8*)(intptr_t)v3223;
	i8 v3225 = v3224+(+40);
	i1 v3226 = *(i1*)(intptr_t)v3225;
	i1 v3227 = (i1)+45;
	if (v3226==v3227) goto c02_0228; else goto c02_0229;

c02_0228:;

	i8 v3228 = (i8)(intptr_t)(ws+3352);
	i1 v3229 = *(i1*)(intptr_t)v3228;
	i8 v3230 = (i8)(intptr_t)(ws+3360);
	i8 v3231 = *(i8*)(intptr_t)v3230;
	i8 v3232 = (i8)(intptr_t)(f164_FoldConstant1);
	i4 v3233;

	((void(*)(i4* /* result */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3232)(&v3233, v3231, v3229);
	i8 v3234 = (i8)(intptr_t)(ws+3360);
	i8 v3235 = *(i8*)(intptr_t)v3234;
	*(i4*)(intptr_t)v3235 = v3233;

	i8 v3236 = (i8)(intptr_t)(ws+3360);
	i8 v3237 = *(i8*)(intptr_t)v3236;
	i8 v3238 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3238 = v3237;

	goto c02_0225;

c02_0229:;

	i8 v3239 = (i8)(intptr_t)(ws+3352);
	i1 v3240 = *(i1*)(intptr_t)v3239;
	i8 v3241 = (i8)(intptr_t)(ws+3353);
	i1 v3242 = *(i1*)(intptr_t)v3241;
	i8 v3243 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3244;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3243)(&v3244, v3242);
	i1 v3245 = v3240+v3244;
	i8 v3246 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3247;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3246)(&v3247, v3245);
	i8 v3248 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v3248 = v3247;

	i8 v3249 = (i8)(intptr_t)(ws+3360);
	i8 v3250 = *(i8*)(intptr_t)v3249;
	i8 v3251 = (i8)(intptr_t)(ws+3368);
	i8 v3252 = *(i8*)(intptr_t)v3251;
	i8 v3253 = v3252+(+24);
	*(i8*)(intptr_t)v3253 = v3250;

c02_0225:;

endsub:;
	*p3219 = *(i8*)(intptr_t)(ws+3368);
}

// GetPowerOfTwo workspace at ws+3424 length ws+5
void f167_GetPowerOfTwo(i1* p3254 /* exp */, i4 p3255 /* value */) {
	*(i4*)(intptr_t)(ws+3424) = p3255; /*value */

	i1 v3256 = (i1)+0;
	i8 v3257 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v3257 = v3256;

	i4 v3258 = (i4)+0;
	i8 v3259 = (i8)(intptr_t)(ws+3424);
	i4 v3260 = *(i4*)(intptr_t)v3259;
	if ((s4)v3258<(s4)v3260) goto c02_0231; else goto c02_0230;

c02_0231:;

	i8 v3261 = (i8)(intptr_t)(ws+3424);
	i4 v3262 = *(i4*)(intptr_t)v3261;
	i8 v3263 = (i8)(intptr_t)(ws+3424);
	i4 v3264 = *(i4*)(intptr_t)v3263;
	i4 v3265 = v3264+(-1);
	i4 v3266 = v3262&v3265;
	i4 v3267 = (i4)+0;
	if (v3266==v3267) goto c02_022f; else goto c02_0230;

c02_022f:;

c02_0234:;

	i8 v3268 = (i8)(intptr_t)(ws+3424);
	i4 v3269 = *(i4*)(intptr_t)v3268;
	i4 v3270 = (i4)+0;
	if (v3269==v3270) goto c02_0237; else goto c02_0236;

c02_0236:;

	i8 v3271 = (i8)(intptr_t)(ws+3428);
	i1 v3272 = *(i1*)(intptr_t)v3271;
	i1 v3273 = v3272+(+1);
	i8 v3274 = (i8)(intptr_t)(ws+3428);
	*(i1*)(intptr_t)v3274 = v3273;

	i8 v3275 = (i8)(intptr_t)(ws+3424);
	i4 v3276 = *(i4*)(intptr_t)v3275;
	i1 v3277 = (i1)+1;
	i4 v3278 = ((s4)v3276)>>v3277;
	i8 v3279 = (i8)(intptr_t)(ws+3424);
	*(i4*)(intptr_t)v3279 = v3278;

	goto c02_0234;

c02_0237:;

c02_0230:;

c02_022a:;

endsub:;
	*p3254 = *(i1*)(intptr_t)(ws+3428);
}
	void f165_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f167_GetPowerOfTwo(i1* /* exp */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f58_Discard(i8 /* node */);
	void f165_FoldConstant2(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */);
	void f58_Discard(i8 /* node */);
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidC2Op workspace at ws+3376 length ws+48
void f168_MidC2Op(i8* p3280 /* result */, i8 p3281 /* rhs */, i8 p3282 /* lhs */, i1 p3283 /* width */, i1 p3284 /* op */) {
	*(i1*)(intptr_t)(ws+3376) = p3284; /*op */
	*(i1*)(intptr_t)(ws+3377) = p3283; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3282; /*lhs */
	*(i8*)(intptr_t)(ws+3392) = p3281; /*rhs */

	i8 v3285 = (i8)(intptr_t)(ws+3376);
	i1 v3286 = *(i1*)(intptr_t)v3285;
	i1 v3287 = (i1)+136;
	if (v3286==v3287) goto c02_023f; else goto c02_023e;

c02_023f:;

	i8 v3288 = (i8)(intptr_t)(ws+3392);
	i8 v3289 = *(i8*)(intptr_t)v3288;
	i8 v3290 = v3289+(+40);
	i1 v3291 = *(i1*)(intptr_t)v3290;
	i1 v3292 = (i1)+45;
	if (v3291==v3292) goto c02_023d; else goto c02_023e;

c02_023d:;

	i8 v3293 = (i8)(intptr_t)(ws+3392);
	i8 v3294 = *(i8*)(intptr_t)v3293;
	i4 v3295 = *(i4*)(intptr_t)v3294;
	i4 v3296 = -v3295;
	i8 v3297 = (i8)(intptr_t)(ws+3392);
	i8 v3298 = *(i8*)(intptr_t)v3297;
	*(i4*)(intptr_t)v3298 = v3296;

	i1 v3299 = (i1)+161;
	i8 v3300 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3300 = v3299;

c02_023e:;

c02_0238:;

	i8 v3301 = (i8)(intptr_t)(ws+3376);
	i1 v3302 = *(i1*)(intptr_t)v3301;
	i1 v3303 = (i1)+161;
	if (v3302<v3303) goto c02_0244; else goto c02_0243;

c02_0243:;

	i8 v3304 = (i8)(intptr_t)(ws+3384);
	i8 v3305 = *(i8*)(intptr_t)v3304;
	i8 v3306 = v3305+(+40);
	i1 v3307 = *(i1*)(intptr_t)v3306;
	i1 v3308 = (i1)+45;
	if (v3307==v3308) goto c02_0248; else goto c02_0249;

c02_0248:;

	i8 v3309 = (i8)(intptr_t)(ws+3384);
	i8 v3310 = *(i8*)(intptr_t)v3309;
	i8 v3311 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3311 = v3310;

	i8 v3312 = (i8)(intptr_t)(ws+3392);
	i8 v3313 = *(i8*)(intptr_t)v3312;
	i8 v3314 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3314 = v3313;

	i8 v3315 = (i8)(intptr_t)(ws+3408);
	i8 v3316 = *(i8*)(intptr_t)v3315;
	i8 v3317 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3317 = v3316;

c02_0249:;

c02_0245:;

	i8 v3318 = (i8)(intptr_t)(ws+3392);
	i8 v3319 = *(i8*)(intptr_t)v3318;
	i8 v3320 = v3319+(+40);
	i1 v3321 = *(i1*)(intptr_t)v3320;
	i1 v3322 = (i1)+45;
	if (v3321==v3322) goto c02_0257; else goto c02_0254;

c02_0257:;

	i8 v3323 = (i8)(intptr_t)(ws+3384);
	i8 v3324 = *(i8*)(intptr_t)v3323;
	i8 v3325 = v3324+(+40);
	i1 v3326 = *(i1*)(intptr_t)v3325;
	i8 v3327 = (i8)(intptr_t)(ws+3376);
	i1 v3328 = *(i1*)(intptr_t)v3327;
	if (v3326<v3328) goto c02_0254; else goto c02_0256;

c02_0256:;

	i8 v3329 = (i8)(intptr_t)(ws+3376);
	i1 v3330 = *(i1*)(intptr_t)v3329;
	i1 v3331 = v3330+(+4);
	i8 v3332 = (i8)(intptr_t)(ws+3384);
	i8 v3333 = *(i8*)(intptr_t)v3332;
	i8 v3334 = v3333+(+40);
	i1 v3335 = *(i1*)(intptr_t)v3334;
	if (v3331<v3335) goto c02_0254; else goto c02_0255;

c02_0255:;

	i8 v3336 = (i8)(intptr_t)(ws+3384);
	i8 v3337 = *(i8*)(intptr_t)v3336;
	i8 v3338 = v3337+(+32);
	i8 v3339 = *(i8*)(intptr_t)v3338;
	i8 v3340 = v3339+(+40);
	i1 v3341 = *(i1*)(intptr_t)v3340;
	i1 v3342 = (i1)+45;
	if (v3341==v3342) goto c02_0253; else goto c02_0254;

c02_0253:;

	i8 v3343 = (i8)(intptr_t)(ws+3376);
	i1 v3344 = *(i1*)(intptr_t)v3343;
	i8 v3345 = (i8)(intptr_t)(ws+3384);
	i8 v3346 = *(i8*)(intptr_t)v3345;
	i8 v3347 = v3346+(+32);
	i8 v3348 = *(i8*)(intptr_t)v3347;
	i8 v3349 = (i8)(intptr_t)(ws+3392);
	i8 v3350 = *(i8*)(intptr_t)v3349;
	i8 v3351 = (i8)(intptr_t)(f165_FoldConstant2);
	i4 v3352;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3351)(&v3352, v3350, v3348, v3344);
	i8 v3353 = (i8)(intptr_t)(f125_MidConstant);
	i8 v3354;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3353)(&v3354, v3352);
	i8 v3355 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3355 = v3354;

	i8 v3356 = (i8)(intptr_t)(ws+3392);
	i8 v3357 = *(i8*)(intptr_t)v3356;
	i8 v3358 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3358)(v3357);

	i8 v3359 = (i8)(intptr_t)(ws+3408);
	i8 v3360 = *(i8*)(intptr_t)v3359;
	i8 v3361 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3361 = v3360;

	i8 v3362 = (i8)(intptr_t)(ws+3384);
	i8 v3363 = *(i8*)(intptr_t)v3362;
	i8 v3364 = v3363+(+24);
	i8 v3365 = *(i8*)(intptr_t)v3364;
	i8 v3366 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v3366 = v3365;

	i8 v3367 = (i8)+0;
	i8 v3368 = (i8)(intptr_t)(ws+3384);
	i8 v3369 = *(i8*)(intptr_t)v3368;
	i8 v3370 = v3369+(+24);
	*(i8*)(intptr_t)v3370 = v3367;

	i8 v3371 = (i8)(intptr_t)(ws+3384);
	i8 v3372 = *(i8*)(intptr_t)v3371;
	i8 v3373 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3373)(v3372);

	i8 v3374 = (i8)(intptr_t)(ws+3408);
	i8 v3375 = *(i8*)(intptr_t)v3374;
	i8 v3376 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v3376 = v3375;

c02_0254:;

c02_024a:;

c02_0244:;

c02_0240:;

	i8 v3377 = (i8)(intptr_t)(ws+3384);
	i8 v3378 = *(i8*)(intptr_t)v3377;
	i8 v3379 = v3378+(+40);
	i1 v3380 = *(i1*)(intptr_t)v3379;
	i1 v3381 = (i1)+45;
	if (v3380==v3381) goto c02_025e; else goto c02_025f;

c02_025f:;

	i8 v3382 = (i8)(intptr_t)(ws+3392);
	i8 v3383 = *(i8*)(intptr_t)v3382;
	i8 v3384 = v3383+(+40);
	i1 v3385 = *(i1*)(intptr_t)v3384;
	i1 v3386 = (i1)+45;
	if (v3385==v3386) goto c02_025d; else goto c02_025e;

c02_025d:;

	i8 v3387 = (i8)(intptr_t)(ws+3376);
	i1 v3388 = *(i1*)(intptr_t)v3387;
	i1 v3389 = (i1)+166;
	if (v3388==v3389) goto c02_0267; else goto c02_026a;

c02_026a:;

	i8 v3390 = (i8)(intptr_t)(ws+3376);
	i1 v3391 = *(i1*)(intptr_t)v3390;
	i1 v3392 = (i1)+146;
	if (v3391==v3392) goto c02_0267; else goto c02_0269;

c02_0269:;

	i8 v3393 = (i8)(intptr_t)(ws+3376);
	i1 v3394 = *(i1*)(intptr_t)v3393;
	i1 v3395 = (i1)+141;
	if (v3394==v3395) goto c02_0267; else goto c02_0268;

c02_0267:;

	i8 v3396 = (i8)(intptr_t)(ws+3392);
	i8 v3397 = *(i8*)(intptr_t)v3396;
	i4 v3398 = *(i4*)(intptr_t)v3397;
	i8 v3399 = (i8)(intptr_t)(ws+3416);
	*(i4*)(intptr_t)v3399 = v3398;

	i8 v3400 = (i8)(intptr_t)(ws+3416);
	i4 v3401 = *(i4*)(intptr_t)v3400;
	i8 v3402 = (i8)(intptr_t)(f167_GetPowerOfTwo);
	i1 v3403;

	((void(*)(i1* /* exp */, i4 /* value */))(intptr_t)v3402)(&v3403, v3401);
	i8 v3404 = (i8)(intptr_t)(ws+3420);
	*(i1*)(intptr_t)v3404 = v3403;

	i8 v3405 = (i8)(intptr_t)(ws+3420);
	i1 v3406 = *(i1*)(intptr_t)v3405;
	i1 v3407 = (i1)+0;
	if (v3406==v3407) goto c02_026f; else goto c02_026e;

c02_026e:;

	i8 v3408 = (i8)(intptr_t)(ws+3392);
	i8 v3409 = *(i8*)(intptr_t)v3408;
	i8 v3410 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3410)(v3409);

	i8 v3411 = (i8)(intptr_t)(ws+3420);
	i1 v3412 = *(i1*)(intptr_t)v3411;
	i1 v3413 = v3412+(-1);
	i4 v3414 = v3413;
	i8 v3415 = (i8)(intptr_t)(f125_MidConstant);
	i8 v3416;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v3415)(&v3416, v3414);
	i8 v3417 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v3417 = v3416;

	i8 v3418 = (i8)(intptr_t)(ws+3376);
	i1 v3419 = *(i1*)(intptr_t)v3418;

	if (v3419 != +166) goto c02_0271;

	i1 v3420 = (i1)+121;
	i8 v3421 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3421 = v3420;

	goto c02_0270;

c02_0271:;

	if (v3419 != +146) goto c02_0272;

	i1 v3422 = (i1)+131;
	i8 v3423 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3423 = v3422;

	goto c02_0270;

c02_0272:;

	if (v3419 != +141) goto c02_0273;

	i1 v3424 = (i1)+126;
	i8 v3425 = (i8)(intptr_t)(ws+3376);
	*(i1*)(intptr_t)v3425 = v3424;

c02_0273:;

c02_0270:;


c02_026f:;

c02_026b:;

c02_0268:;

c02_0260:;

	i8 v3426 = (i8)(intptr_t)(ws+3376);
	i1 v3427 = *(i1*)(intptr_t)v3426;
	i1 v3428 = (i1)+121;
	if (v3427==v3428) goto c02_027b; else goto c02_027e;

c02_027e:;

	i8 v3429 = (i8)(intptr_t)(ws+3376);
	i1 v3430 = *(i1*)(intptr_t)v3429;
	i1 v3431 = (i1)+126;
	if (v3430==v3431) goto c02_027b; else goto c02_027d;

c02_027d:;

	i8 v3432 = (i8)(intptr_t)(ws+3376);
	i1 v3433 = *(i1*)(intptr_t)v3432;
	i1 v3434 = (i1)+131;
	if (v3433==v3434) goto c02_027b; else goto c02_027c;

c02_027b:;

	i8 v3435 = (i8)(intptr_t)(ws+3392);
	i8 v3436 = *(i8*)(intptr_t)v3435;
	i4 v3437 = *(i4*)(intptr_t)v3436;
	i4 v3438 = (i4)+0;
	if (v3437==v3438) goto c02_0282; else goto c02_0283;

c02_0282:;

	i8 v3439 = (i8)(intptr_t)(ws+3392);
	i8 v3440 = *(i8*)(intptr_t)v3439;
	i8 v3441 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3441)(v3440);

	i8 v3442 = (i8)(intptr_t)(ws+3384);
	i8 v3443 = *(i8*)(intptr_t)v3442;
	i8 v3444 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3444 = v3443;

	goto endsub;

c02_0283:;

c02_027f:;

c02_027c:;

c02_0274:;

	i8 v3445 = (i8)(intptr_t)(ws+3376);
	i1 v3446 = *(i1*)(intptr_t)v3445;
	i1 v3447 = (i1)+161;
	if (v3446==v3447) goto c02_0289; else goto c02_028b;

c02_028b:;

	i8 v3448 = (i8)(intptr_t)(ws+3376);
	i1 v3449 = *(i1*)(intptr_t)v3448;
	i1 v3450 = (i1)+136;
	if (v3449==v3450) goto c02_0289; else goto c02_028a;

c02_0289:;

	i8 v3451 = (i8)(intptr_t)(ws+3392);
	i8 v3452 = *(i8*)(intptr_t)v3451;
	i4 v3453 = *(i4*)(intptr_t)v3452;
	i4 v3454 = (i4)+0;
	if (v3453==v3454) goto c02_028f; else goto c02_0290;

c02_028f:;

	i8 v3455 = (i8)(intptr_t)(ws+3392);
	i8 v3456 = *(i8*)(intptr_t)v3455;
	i8 v3457 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3457)(v3456);

	i8 v3458 = (i8)(intptr_t)(ws+3384);
	i8 v3459 = *(i8*)(intptr_t)v3458;
	i8 v3460 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3460 = v3459;

	goto endsub;

c02_0290:;

c02_028c:;

	i8 v3461 = (i8)(intptr_t)(ws+3384);
	i8 v3462 = *(i8*)(intptr_t)v3461;
	i8 v3463 = v3462+(+40);
	i1 v3464 = *(i1*)(intptr_t)v3463;
	i1 v3465 = (i1)+47;
	if (v3464==v3465) goto c02_0294; else goto c02_0295;

c02_0294:;

	i8 v3466 = (i8)(intptr_t)(ws+3392);
	i8 v3467 = *(i8*)(intptr_t)v3466;
	i4 v3468 = *(i4*)(intptr_t)v3467;
	i2 v3469 = (s2)(s4)v3468;
	i8 v3470 = (i8)(intptr_t)(ws+3422);
	*(i2*)(intptr_t)v3470 = v3469;

	i8 v3471 = (i8)(intptr_t)(ws+3376);
	i1 v3472 = *(i1*)(intptr_t)v3471;

	if (v3472 != +161) goto c02_0297;

	i8 v3473 = (i8)(intptr_t)(ws+3384);
	i8 v3474 = *(i8*)(intptr_t)v3473;
	i8 v3475 = v3474+(+8);
	i2 v3476 = *(i2*)(intptr_t)v3475;
	i8 v3477 = (i8)(intptr_t)(ws+3422);
	i2 v3478 = *(i2*)(intptr_t)v3477;
	i2 v3479 = v3476+v3478;
	i8 v3480 = (i8)(intptr_t)(ws+3384);
	i8 v3481 = *(i8*)(intptr_t)v3480;
	i8 v3482 = v3481+(+8);
	*(i2*)(intptr_t)v3482 = v3479;

	i8 v3483 = (i8)(intptr_t)(ws+3392);
	i8 v3484 = *(i8*)(intptr_t)v3483;
	i8 v3485 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3485)(v3484);

	i8 v3486 = (i8)(intptr_t)(ws+3384);
	i8 v3487 = *(i8*)(intptr_t)v3486;
	i8 v3488 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3488 = v3487;

	goto endsub;

c02_0297:;

	if (v3472 != +136) goto c02_0298;

	i8 v3489 = (i8)(intptr_t)(ws+3384);
	i8 v3490 = *(i8*)(intptr_t)v3489;
	i8 v3491 = v3490+(+8);
	i2 v3492 = *(i2*)(intptr_t)v3491;
	i8 v3493 = (i8)(intptr_t)(ws+3422);
	i2 v3494 = *(i2*)(intptr_t)v3493;
	i2 v3495 = v3492-v3494;
	i8 v3496 = (i8)(intptr_t)(ws+3384);
	i8 v3497 = *(i8*)(intptr_t)v3496;
	i8 v3498 = v3497+(+8);
	*(i2*)(intptr_t)v3498 = v3495;

	i8 v3499 = (i8)(intptr_t)(ws+3392);
	i8 v3500 = *(i8*)(intptr_t)v3499;
	i8 v3501 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3501)(v3500);

	i8 v3502 = (i8)(intptr_t)(ws+3384);
	i8 v3503 = *(i8*)(intptr_t)v3502;
	i8 v3504 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3504 = v3503;

	goto endsub;

c02_0298:;

c02_0296:;


c02_0295:;

c02_0291:;

c02_028a:;

c02_0284:;

c02_025e:;

c02_0258:;

	i8 v3505 = (i8)(intptr_t)(ws+3384);
	i8 v3506 = *(i8*)(intptr_t)v3505;
	i8 v3507 = v3506+(+40);
	i1 v3508 = *(i1*)(intptr_t)v3507;
	i1 v3509 = (i1)+45;
	if (v3508==v3509) goto c02_02a0; else goto c02_029f;

c02_02a0:;

	i8 v3510 = (i8)(intptr_t)(ws+3392);
	i8 v3511 = *(i8*)(intptr_t)v3510;
	i8 v3512 = v3511+(+40);
	i1 v3513 = *(i1*)(intptr_t)v3512;
	i1 v3514 = (i1)+45;
	if (v3513==v3514) goto c02_029e; else goto c02_029f;

c02_029e:;

	i8 v3515 = (i8)(intptr_t)(ws+3376);
	i1 v3516 = *(i1*)(intptr_t)v3515;
	i8 v3517 = (i8)(intptr_t)(ws+3384);
	i8 v3518 = *(i8*)(intptr_t)v3517;
	i8 v3519 = (i8)(intptr_t)(ws+3392);
	i8 v3520 = *(i8*)(intptr_t)v3519;
	i8 v3521 = (i8)(intptr_t)(f165_FoldConstant2);
	i4 v3522;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v3521)(&v3522, v3520, v3518, v3516);
	i8 v3523 = (i8)(intptr_t)(ws+3384);
	i8 v3524 = *(i8*)(intptr_t)v3523;
	*(i4*)(intptr_t)v3524 = v3522;

	i8 v3525 = (i8)(intptr_t)(ws+3392);
	i8 v3526 = *(i8*)(intptr_t)v3525;
	i8 v3527 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v3527)(v3526);

	i8 v3528 = (i8)(intptr_t)(ws+3384);
	i8 v3529 = *(i8*)(intptr_t)v3528;
	i8 v3530 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3530 = v3529;

	goto endsub;

c02_029f:;

c02_0299:;

	i8 v3531 = (i8)(intptr_t)(ws+3376);
	i1 v3532 = *(i1*)(intptr_t)v3531;
	i8 v3533 = (i8)(intptr_t)(ws+3377);
	i1 v3534 = *(i1*)(intptr_t)v3533;
	i8 v3535 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3536;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3535)(&v3536, v3534);
	i1 v3537 = v3532+v3536;
	i8 v3538 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3539;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3538)(&v3539, v3537);
	i8 v3540 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3540 = v3539;

	i8 v3541 = (i8)(intptr_t)(ws+3384);
	i8 v3542 = *(i8*)(intptr_t)v3541;
	i8 v3543 = (i8)(intptr_t)(ws+3400);
	i8 v3544 = *(i8*)(intptr_t)v3543;
	i8 v3545 = v3544+(+24);
	*(i8*)(intptr_t)v3545 = v3542;

	i8 v3546 = (i8)(intptr_t)(ws+3392);
	i8 v3547 = *(i8*)(intptr_t)v3546;
	i8 v3548 = (i8)(intptr_t)(ws+3400);
	i8 v3549 = *(i8*)(intptr_t)v3548;
	i8 v3550 = v3549+(+32);
	*(i8*)(intptr_t)v3550 = v3547;

endsub:;
	*p3280 = *(i8*)(intptr_t)(ws+3400);
}
	void f97_WidthToIndex(i1* /* index */, i1 /* width */);
	void f98_AllocateNewNode(i8* /* m */, i1 /* code */);

// MidCCast workspace at ws+3376 length ws+34
void f169_MidCCast(i8* p3551 /* result */, i1 p3552 /* issigned */, i8 p3553 /* lhs */, i1 p3554 /* width */) {
	*(i1*)(intptr_t)(ws+3376) = p3554; /*width */
	*(i8*)(intptr_t)(ws+3384) = p3553; /*lhs */
	*(i1*)(intptr_t)(ws+3392) = p3552; /*issigned */

	i8 v3555 = (i8)(intptr_t)(ws+3384);
	i8 v3556 = *(i8*)(intptr_t)v3555;
	i8 v3557 = v3556+(+40);
	i1 v3558 = *(i1*)(intptr_t)v3557;
	i1 v3559 = (i1)+45;
	if (v3558==v3559) goto c02_02a4; else goto c02_02a5;

c02_02a4:;

	i8 v3560 = (i8)(intptr_t)(ws+3384);
	i8 v3561 = *(i8*)(intptr_t)v3560;
	i8 v3562 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3562 = v3561;

	goto endsub;

c02_02a5:;

c02_02a1:;

	i8 v3563 = (i8)(intptr_t)(ws+3384);
	i8 v3564 = *(i8*)(intptr_t)v3563;
	i8 v3565 = v3564+(+16);
	i8 v3566 = *(i8*)(intptr_t)v3565;
	i8 v3567 = v3566+(+48);
	i2 v3568 = *(i2*)(intptr_t)v3567;
	i1 v3569 = v3568;
	i8 v3570 = (i8)(intptr_t)(ws+3408);
	*(i1*)(intptr_t)v3570 = v3569;

	i8 v3571 = (i8)(intptr_t)(ws+3408);
	i1 v3572 = *(i1*)(intptr_t)v3571;
	i8 v3573 = (i8)(intptr_t)(ws+3376);
	i1 v3574 = *(i1*)(intptr_t)v3573;
	if (v3572==v3574) goto c02_02a9; else goto c02_02aa;

c02_02a9:;

	i8 v3575 = (i8)(intptr_t)(ws+3384);
	i8 v3576 = *(i8*)(intptr_t)v3575;
	i8 v3577 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3577 = v3576;

	goto c02_02a6;

c02_02aa:;

	i8 v3578 = (i8)(intptr_t)(ws+3408);
	i1 v3579 = *(i1*)(intptr_t)v3578;

	if (v3579 != +1) goto c02_02ac;

	i1 v3580 = (i1)+91;
	i8 v3581 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3581 = v3580;

	goto c02_02ab;

c02_02ac:;

	if (v3579 != +2) goto c02_02ad;

	i1 v3582 = (i1)+96;
	i8 v3583 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3583 = v3582;

	goto c02_02ab;

c02_02ad:;

	if (v3579 != +4) goto c02_02ae;

	i1 v3584 = (i1)+101;
	i8 v3585 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3585 = v3584;

	goto c02_02ab;

c02_02ae:;

	if (v3579 != +8) goto c02_02af;

	i1 v3586 = (i1)+106;
	i8 v3587 = (i8)(intptr_t)(ws+3409);
	*(i1*)(intptr_t)v3587 = v3586;

c02_02af:;

c02_02ab:;


	i8 v3588 = (i8)(intptr_t)(ws+3409);
	i1 v3589 = *(i1*)(intptr_t)v3588;
	i8 v3590 = (i8)(intptr_t)(ws+3376);
	i1 v3591 = *(i1*)(intptr_t)v3590;
	i8 v3592 = (i8)(intptr_t)(f97_WidthToIndex);
	i1 v3593;

	((void(*)(i1* /* index */, i1 /* width */))(intptr_t)v3592)(&v3593, v3591);
	i1 v3594 = v3589+v3593;
	i8 v3595 = (i8)(intptr_t)(f98_AllocateNewNode);
	i8 v3596;

	((void(*)(i8* /* m */, i1 /* code */))(intptr_t)v3595)(&v3596, v3594);
	i8 v3597 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v3597 = v3596;

	i8 v3598 = (i8)(intptr_t)(ws+3384);
	i8 v3599 = *(i8*)(intptr_t)v3598;
	i8 v3600 = (i8)(intptr_t)(ws+3400);
	i8 v3601 = *(i8*)(intptr_t)v3600;
	i8 v3602 = v3601+(+24);
	*(i8*)(intptr_t)v3602 = v3599;

	i8 v3603 = (i8)(intptr_t)(ws+3392);
	i1 v3604 = *(i1*)(intptr_t)v3603;
	i8 v3605 = (i8)(intptr_t)(ws+3400);
	i8 v3606 = *(i8*)(intptr_t)v3605;
	*(i1*)(intptr_t)v3606 = v3604;

c02_02a6:;

endsub:;
	*p3551 = *(i8*)(intptr_t)(ws+3400);
}
	void f51_FCBPutChar(i1 /* c */, i8 /* fcb */);

// E_b8 workspace at ws+3472 length ws+1
void f170_E_b8(i1 p3607 /* byte */) {
	*(i1*)(intptr_t)(ws+3472) = p3607; /*byte */

	i8 v3608 = (i8)(intptr_t)(ws+936);
	i8 v3609 = (i8)(intptr_t)(ws+3472);
	i1 v3610 = *(i1*)(intptr_t)v3609;
	i8 v3611 = (i8)(intptr_t)(f51_FCBPutChar);

	((void(*)(i1 /* c */, i8 /* fcb */))(intptr_t)v3611)(v3610, v3608);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f170_E_b8(i1 /* byte */);

// E_b16 workspace at ws+3456 length ws+2
void f171_E_b16(i2 p3612 /* word */) {
	*(i2*)(intptr_t)(ws+3456) = p3612; /*word */

	i8 v3613 = (i8)(intptr_t)(ws+3456);
	i2 v3614 = *(i2*)(intptr_t)v3613;
	i1 v3615 = v3614;
	i8 v3616 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3616)(v3615);

	i8 v3617 = (i8)(intptr_t)(ws+3456);
	i2 v3618 = *(i2*)(intptr_t)v3617;
	i1 v3619 = (i1)+8;
	i2 v3620 = ((i2)v3618)>>v3619;
	i1 v3621 = v3620;
	i8 v3622 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3622)(v3621);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);

// E_b32 workspace at ws+3448 length ws+4
void f172_E_b32(i4 p3623 /* quad */) {
	*(i4*)(intptr_t)(ws+3448) = p3623; /*quad */

	i8 v3624 = (i8)(intptr_t)(ws+3448);
	i4 v3625 = *(i4*)(intptr_t)v3624;
	i2 v3626 = v3625;
	i8 v3627 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3627)(v3626);

	i8 v3628 = (i8)(intptr_t)(ws+3448);
	i4 v3629 = *(i4*)(intptr_t)v3628;
	i1 v3630 = (i1)+16;
	i4 v3631 = ((i4)v3629)>>v3630;
	i2 v3632 = v3631;
	i8 v3633 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3633)(v3632);

endsub:;
}
	void f171_E_b16(i2 /* word */);

// E_bsize workspace at ws+3448 length ws+2
void f173_E_bsize(i2 p3634 /* size */) {
	*(i2*)(intptr_t)(ws+3448) = p3634; /*size */

	i8 v3635 = (i8)(intptr_t)(ws+3448);
	i2 v3636 = *(i2*)(intptr_t)v3635;
	i8 v3637 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3637)(v3636);

endsub:;
}
	void f170_E_b8(i1 /* byte */);

// E workspace at ws+3456 length ws+9
void f180_E(i8 p3650 /* text */) {
	*(i8*)(intptr_t)(ws+3456) = p3650; /*text */

c02_02b0:;

	i8 v3651 = (i8)(intptr_t)(ws+3456);
	i8 v3652 = *(i8*)(intptr_t)v3651;
	i1 v3653 = *(i1*)(intptr_t)v3652;
	i8 v3654 = (i8)(intptr_t)(ws+3464);
	*(i1*)(intptr_t)v3654 = v3653;

	i8 v3655 = (i8)(intptr_t)(ws+3456);
	i8 v3656 = *(i8*)(intptr_t)v3655;
	i8 v3657 = v3656+(+1);
	i8 v3658 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v3658 = v3657;

	i8 v3659 = (i8)(intptr_t)(ws+3464);
	i1 v3660 = *(i1*)(intptr_t)v3659;
	i1 v3661 = (i1)+0;
	if (v3660==v3661) goto c02_02b5; else goto c02_02b6;

c02_02b5:;

	goto c02_02b1;

c02_02b6:;

c02_02b2:;

	i8 v3662 = (i8)(intptr_t)(ws+3464);
	i1 v3663 = *(i1*)(intptr_t)v3662;
	i8 v3664 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3664)(v3663);

	goto c02_02b0;

c02_02b1:;

endsub:;
}
	void f28_StrLen(i8* /* size */, i8 /* s */);
	void f170_E_b8(i1 /* byte */);
	void f180_E(i8 /* text */);

// E_countedstring workspace at ws+3448 length ws+8
void f181_E_countedstring(i8 p3665 /* text */) {
	*(i8*)(intptr_t)(ws+3448) = p3665; /*text */

	i8 v3666 = (i8)(intptr_t)(ws+3448);
	i8 v3667 = *(i8*)(intptr_t)v3666;
	i8 v3668 = (i8)(intptr_t)(f28_StrLen);
	i8 v3669;

	((void(*)(i8* /* size */, i8 /* s */))(intptr_t)v3668)(&v3669, v3667);
	i1 v3670 = v3669;
	i8 v3671 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3671)(v3670);

	i8 v3672 = (i8)(intptr_t)(ws+3448);
	i8 v3673 = *(i8*)(intptr_t)v3672;
	i8 v3674 = (i8)(intptr_t)(f180_E);

	((void(*)(i8 /* text */))(intptr_t)v3674)(v3673);

endsub:;
}
	void f44_FCBOpenOut(i1* /* errno */, i8 /* filename */, i8 /* fcb */);
const i1 c02_s00f8[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x6f,0x70,0x65,0x6e,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// EmitterOpenfile workspace at ws+3208 length ws+8
void f192_EmitterOpenfile(i8 p3801 /* filename */) {
	*(i8*)(intptr_t)(ws+3208) = p3801; /*filename */

	i8 v3802 = (i8)(intptr_t)(ws+936);
	i8 v3803 = (i8)(intptr_t)(ws+3208);
	i8 v3804 = *(i8*)(intptr_t)v3803;
	i8 v3805 = (i8)(intptr_t)(f44_FCBOpenOut);
	i1 v3806;

	((void(*)(i1* /* errno */, i8 /* filename */, i8 /* fcb */))(intptr_t)v3805)(&v3806, v3804, v3802);
	i1 v3807 = (i1)+0;
	if (v3806==v3807) goto c02_02d7; else goto c02_02d6;

c02_02d6:;

	i8 v3808 = (i8)(intptr_t)c02_s00f8;
	i8 v3809 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3809)(v3808);

c02_02d7:;

c02_02d3:;

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f45_FCBClose(i1* /* errno */, i8 /* fcb */);
const i1 c02_s00f9[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x63,0x6c,0x6f,0x73,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x66,0x69,0x6c,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// EmitterClosefile workspace at ws+3208 length ws+0
void f193_EmitterClosefile(void) {

	i1 v3810 = (i1)+69;
	i8 v3811 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3811)(v3810);

	i8 v3812 = (i8)(intptr_t)(ws+936);
	i8 v3813 = (i8)(intptr_t)(f45_FCBClose);
	i1 v3814;

	((void(*)(i1* /* errno */, i8 /* fcb */))(intptr_t)v3813)(&v3814, v3812);
	i1 v3815 = (i1)+0;
	if (v3814==v3815) goto c02_02dc; else goto c02_02db;

c02_02db:;

	i8 v3816 = (i8)(intptr_t)c02_s00f9;
	i8 v3817 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v3817)(v3816);

c02_02dc:;

c02_02d8:;

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f181_E_countedstring(i8 /* text */);

// EmitterDeclareSubroutine workspace at ws+3336 length ws+8
void f194_EmitterDeclareSubroutine(i8 p3818 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3818; /*subr */

	i1 v3819 = (i1)+78;
	i8 v3820 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3820)(v3819);

	i8 v3821 = (i8)(intptr_t)(ws+3336);
	i8 v3822 = *(i8*)(intptr_t)v3821;
	i8 v3823 = v3822+(+56);
	i2 v3824 = *(i2*)(intptr_t)v3823;
	i8 v3825 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3825)(v3824);

	i8 v3826 = (i8)(intptr_t)(ws+3336);
	i8 v3827 = *(i8*)(intptr_t)v3826;
	i8 v3828 = *(i8*)(intptr_t)v3827;
	i8 v3829 = v3828+(+8);
	i8 v3830 = *(i8*)(intptr_t)v3829;
	i8 v3831 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v3831)(v3830);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f181_E_countedstring(i8 /* text */);

// EmitterDeclareExternalSubroutine workspace at ws+3328 length ws+16
void f195_EmitterDeclareExternalSubroutine(i8 p3832 /* external */, i2 p3833 /* id */) {
	*(i2*)(intptr_t)(ws+3328) = p3833; /*id */
	*(i8*)(intptr_t)(ws+3336) = p3832; /*external */

	i1 v3834 = (i1)+88;
	i8 v3835 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3835)(v3834);

	i8 v3836 = (i8)(intptr_t)(ws+3328);
	i2 v3837 = *(i2*)(intptr_t)v3836;
	i8 v3838 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3838)(v3837);

	i8 v3839 = (i8)(intptr_t)(ws+3336);
	i8 v3840 = *(i8*)(intptr_t)v3839;
	i8 v3841 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v3841)(v3840);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);

// EmitterReferenceSubroutineById workspace at ws+3400 length ws+4
void f196_EmitterReferenceSubroutineById(i2 p3842 /* used */, i2 p3843 /* user */) {
	*(i2*)(intptr_t)(ws+3400) = p3843; /*user */
	*(i2*)(intptr_t)(ws+3402) = p3842; /*used */

	i1 v3844 = (i1)+82;
	i8 v3845 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3845)(v3844);

	i8 v3846 = (i8)(intptr_t)(ws+3400);
	i2 v3847 = *(i2*)(intptr_t)v3846;
	i8 v3848 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3848)(v3847);

	i8 v3849 = (i8)(intptr_t)(ws+3402);
	i2 v3850 = *(i2*)(intptr_t)v3849;
	i8 v3851 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3851)(v3850);

endsub:;
}
	void f196_EmitterReferenceSubroutineById(i2 /* used */, i2 /* user */);

// EmitterReferenceSubroutine workspace at ws+3384 length ws+16
void f197_EmitterReferenceSubroutine(i8 p3852 /* used */, i8 p3853 /* user */) {
	*(i8*)(intptr_t)(ws+3384) = p3853; /*user */
	*(i8*)(intptr_t)(ws+3392) = p3852; /*used */

	i8 v3854 = (i8)(intptr_t)(ws+3384);
	i8 v3855 = *(i8*)(intptr_t)v3854;
	i8 v3856 = v3855+(+56);
	i2 v3857 = *(i2*)(intptr_t)v3856;
	i8 v3858 = (i8)(intptr_t)(ws+3392);
	i8 v3859 = *(i8*)(intptr_t)v3858;
	i8 v3860 = v3859+(+56);
	i2 v3861 = *(i2*)(intptr_t)v3860;
	i8 v3862 = (i8)(intptr_t)(f196_EmitterReferenceSubroutineById);

	((void(*)(i2 /* used */, i2 /* user */))(intptr_t)v3862)(v3861, v3857);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);

// EmitterDeclareWorkspace workspace at ws+3360 length ws+12
void f198_EmitterDeclareWorkspace(i2 p3863 /* workspace */, i1 p3864 /* wid */, i8 p3865 /* subr */) {
	*(i8*)(intptr_t)(ws+3360) = p3865; /*subr */
	*(i1*)(intptr_t)(ws+3368) = p3864; /*wid */
	*(i2*)(intptr_t)(ws+3370) = p3863; /*workspace */

	i1 v3866 = (i1)+87;
	i8 v3867 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3867)(v3866);

	i8 v3868 = (i8)(intptr_t)(ws+3360);
	i8 v3869 = *(i8*)(intptr_t)v3868;
	i8 v3870 = v3869+(+56);
	i2 v3871 = *(i2*)(intptr_t)v3870;
	i8 v3872 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3872)(v3871);

	i8 v3873 = (i8)(intptr_t)(ws+3368);
	i1 v3874 = *(i1*)(intptr_t)v3873;
	i8 v3875 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3875)(v3874);

	i8 v3876 = (i8)(intptr_t)(ws+3370);
	i2 v3877 = *(i2*)(intptr_t)v3876;
	i8 v3878 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v3878)(v3877);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);
	void f181_E_countedstring(i8 /* text */);
	void f170_E_b8(i1 /* byte */);

// EmitParameterList workspace at ws+3344 length ws+8
void f199_EmitParameterList(i8 p3879 /* param */) {
	*(i8*)(intptr_t)(ws+3344) = p3879; /*param */

c02_02df:;

	i8 v3880 = (i8)(intptr_t)(ws+3344);
	i8 v3881 = *(i8*)(intptr_t)v3880;
	i8 v3882 = (i8)+0;
	if (v3881==v3882) goto c02_02e2; else goto c02_02e1;

c02_02e1:;

	i8 v3883 = (i8)(intptr_t)(ws+3344);
	i8 v3884 = *(i8*)(intptr_t)v3883;
	i8 v3885 = *(i8*)(intptr_t)v3884;
	i8 v3886 = v3885+(+8);
	i8 v3887 = *(i8*)(intptr_t)v3886;
	i8 v3888 = v3887+(+56);
	i2 v3889 = *(i2*)(intptr_t)v3888;
	i8 v3890 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3890)(v3889);

	i8 v3891 = (i8)(intptr_t)(ws+3344);
	i8 v3892 = *(i8*)(intptr_t)v3891;
	i8 v3893 = *(i8*)(intptr_t)v3892;
	i8 v3894 = v3893+(+26);
	i1 v3895 = *(i1*)(intptr_t)v3894;
	i8 v3896 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3896)(v3895);

	i8 v3897 = (i8)(intptr_t)(ws+3344);
	i8 v3898 = *(i8*)(intptr_t)v3897;
	i8 v3899 = *(i8*)(intptr_t)v3898;
	i8 v3900 = v3899+(+24);
	i2 v3901 = *(i2*)(intptr_t)v3900;
	i8 v3902 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v3902)(v3901);

	i8 v3903 = (i8)(intptr_t)(ws+3344);
	i8 v3904 = *(i8*)(intptr_t)v3903;
	i8 v3905 = v3904+(+8);
	i8 v3906 = *(i8*)(intptr_t)v3905;
	i8 v3907 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v3907)(v3906);

	i8 v3908 = (i8)(intptr_t)(ws+3344);
	i8 v3909 = *(i8*)(intptr_t)v3908;
	i8 v3910 = *(i8*)(intptr_t)v3909;
	i8 v3911 = *(i8*)(intptr_t)v3910;
	i8 v3912 = v3911+(+48);
	i2 v3913 = *(i2*)(intptr_t)v3912;
	i1 v3914 = v3913;
	i8 v3915 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3915)(v3914);

	i8 v3916 = (i8)(intptr_t)(ws+3344);
	i8 v3917 = *(i8*)(intptr_t)v3916;
	i8 v3918 = *(i8*)(intptr_t)v3917;
	i8 v3919 = v3918+(+16);
	i8 v3920 = *(i8*)(intptr_t)v3919;
	i8 v3921 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v3921 = v3920;

	goto c02_02df;

c02_02e2:;

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f94_GetInputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f199_EmitParameterList(i8 /* param */);

// EmitterEmitInputParameters workspace at ws+3336 length ws+8
void f200_EmitterEmitInputParameters(i8 p3922 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3922; /*subr */

	i1 v3923 = (i1)+73;
	i8 v3924 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3924)(v3923);

	i8 v3925 = (i8)(intptr_t)(ws+3336);
	i8 v3926 = *(i8*)(intptr_t)v3925;
	i8 v3927 = v3926+(+56);
	i2 v3928 = *(i2*)(intptr_t)v3927;
	i8 v3929 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3929)(v3928);

	i8 v3930 = (i8)(intptr_t)(ws+3336);
	i8 v3931 = *(i8*)(intptr_t)v3930;
	i8 v3932 = v3931+(+80);
	i1 v3933 = *(i1*)(intptr_t)v3932;
	i8 v3934 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3934)(v3933);

	i8 v3935 = (i8)(intptr_t)(ws+3336);
	i8 v3936 = *(i8*)(intptr_t)v3935;
	i1 v3937 = (i1)+0;
	i8 v3938 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v3939;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3938)(&v3939, v3937, v3936);
	i8 v3940 = (i8)(intptr_t)(f199_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v3940)(v3939);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f199_EmitParameterList(i8 /* param */);

// EmitterEmitOutputParameters workspace at ws+3336 length ws+8
void f201_EmitterEmitOutputParameters(i8 p3941 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3941; /*subr */

	i1 v3942 = (i1)+79;
	i8 v3943 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3943)(v3942);

	i8 v3944 = (i8)(intptr_t)(ws+3336);
	i8 v3945 = *(i8*)(intptr_t)v3944;
	i8 v3946 = v3945+(+56);
	i2 v3947 = *(i2*)(intptr_t)v3946;
	i8 v3948 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3948)(v3947);

	i8 v3949 = (i8)(intptr_t)(ws+3336);
	i8 v3950 = *(i8*)(intptr_t)v3949;
	i8 v3951 = v3950+(+81);
	i1 v3952 = *(i1*)(intptr_t)v3951;
	i8 v3953 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3953)(v3952);

	i8 v3954 = (i8)(intptr_t)(ws+3336);
	i8 v3955 = *(i8*)(intptr_t)v3954;
	i1 v3956 = (i1)+0;
	i8 v3957 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v3958;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v3957)(&v3958, v3956, v3955);
	i8 v3959 = (i8)(intptr_t)(f199_EmitParameterList);

	((void(*)(i8 /* param */))(intptr_t)v3959)(v3958);

endsub:;
}
	void f170_E_b8(i1 /* byte */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);

// EmitterEmitSubroutineFlags workspace at ws+3336 length ws+8
void f202_EmitterEmitSubroutineFlags(i8 p3960 /* subr */) {
	*(i8*)(intptr_t)(ws+3336) = p3960; /*subr */

	i1 v3961 = (i1)+70;
	i8 v3962 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3962)(v3961);

	i8 v3963 = (i8)(intptr_t)(ws+3336);
	i8 v3964 = *(i8*)(intptr_t)v3963;
	i8 v3965 = v3964+(+56);
	i2 v3966 = *(i2*)(intptr_t)v3965;
	i8 v3967 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v3967)(v3966);

	i8 v3968 = (i8)(intptr_t)(ws+3336);
	i8 v3969 = *(i8*)(intptr_t)v3968;
	i8 v3970 = v3969+(+82);
	i1 v3971 = *(i1*)(intptr_t)v3970;
	i8 v3972 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v3972)(v3971);

endsub:;
}
	void f25_StrCmp(i1* /* res */, i8 /* s2 */, i8 /* s1 */);

// LookupSymbolInNamespace workspace at ws+3392 length ws+24
void f212_LookupSymbolInNamespace(i8* p4301 /* symbol */, i8 p4302 /* name */, i8 p4303 /* namespace */) {
	*(i8*)(intptr_t)(ws+3392) = p4303; /*namespace */
	*(i8*)(intptr_t)(ws+3400) = p4302; /*name */

	i8 v4304 = (i8)(intptr_t)(ws+3392);
	i8 v4305 = *(i8*)(intptr_t)v4304;
	i8 v4306 = *(i8*)(intptr_t)v4305;
	i8 v4307 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4307 = v4306;

c02_036d:;

	i8 v4308 = (i8)(intptr_t)(ws+3408);
	i8 v4309 = *(i8*)(intptr_t)v4308;
	i8 v4310 = (i8)+0;
	if (v4309==v4310) goto c02_0370; else goto c02_036f;

c02_036f:;

	i8 v4311 = (i8)(intptr_t)(ws+3408);
	i8 v4312 = *(i8*)(intptr_t)v4311;
	i8 v4313 = v4312+(+8);
	i8 v4314 = *(i8*)(intptr_t)v4313;
	i8 v4315 = (i8)(intptr_t)(ws+3400);
	i8 v4316 = *(i8*)(intptr_t)v4315;
	i8 v4317 = (i8)(intptr_t)(f25_StrCmp);
	i1 v4318;

	((void(*)(i1* /* res */, i8 /* s2 */, i8 /* s1 */))(intptr_t)v4317)(&v4318, v4316, v4314);
	i1 v4319 = (i1)+0;
	if (v4318==v4319) goto c02_0374; else goto c02_0375;

c02_0374:;

c02_0378:;

	i8 v4320 = (i8)(intptr_t)(ws+3408);
	i8 v4321 = *(i8*)(intptr_t)v4320;
	i8 v4322 = v4321+(+32);
	i1 v4323 = *(i1*)(intptr_t)v4322;
	i1 v4324 = (i1)+39;
	if (v4323==v4324) goto c02_037a; else goto c02_037b;

c02_037a:;

	i8 v4325 = (i8)(intptr_t)(ws+3408);
	i8 v4326 = *(i8*)(intptr_t)v4325;
	i8 v4327 = *(i8*)(intptr_t)v4326;
	i8 v4328 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4328 = v4327;

	goto c02_0378;

c02_037b:;

	goto endsub;

c02_0375:;

c02_0371:;

	i8 v4329 = (i8)(intptr_t)(ws+3408);
	i8 v4330 = *(i8*)(intptr_t)v4329;
	i8 v4331 = v4330+(+24);
	i8 v4332 = *(i8*)(intptr_t)v4331;
	i8 v4333 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4333 = v4332;

	goto c02_036d;

c02_0370:;

	i8 v4334 = (i8)+0;
	i8 v4335 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v4335 = v4334;

endsub:;
	*p4301 = *(i8*)(intptr_t)(ws+3408);
}
	void f212_LookupSymbolInNamespace(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// LookupSymbol workspace at ws+3352 length ws+24
void f213_LookupSymbol(i8* p4336 /* symbol */, i8 p4337 /* name */, i8 p4338 /* namespace */) {
	*(i8*)(intptr_t)(ws+3352) = p4338; /*namespace */
	*(i8*)(intptr_t)(ws+3360) = p4337; /*name */

	i8 v4339 = (i8)(intptr_t)(ws+3352);
	i8 v4340 = *(i8*)(intptr_t)v4339;
	i8 v4341 = (i8)+0;
	if (v4340==v4341) goto c02_037f; else goto c02_0380;

c02_037f:;

	i8 v4342 = (i8)(intptr_t)(ws+40);
	i8 v4343 = *(i8*)(intptr_t)v4342;
	i8 v4344 = v4343+(+16);
	i8 v4345 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4345 = v4344;

c02_0380:;

c02_037c:;

c02_0383:;

	i8 v4346 = (i8)(intptr_t)(ws+3352);
	i8 v4347 = *(i8*)(intptr_t)v4346;
	i8 v4348 = (i8)+0;
	if (v4347==v4348) goto c02_0386; else goto c02_0385;

c02_0385:;

	i8 v4349 = (i8)(intptr_t)(ws+3352);
	i8 v4350 = *(i8*)(intptr_t)v4349;
	i8 v4351 = (i8)(intptr_t)(ws+3360);
	i8 v4352 = *(i8*)(intptr_t)v4351;
	i8 v4353 = (i8)(intptr_t)(f212_LookupSymbolInNamespace);
	i8 v4354;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4353)(&v4354, v4352, v4350);
	i8 v4355 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4355 = v4354;

	i8 v4356 = (i8)(intptr_t)(ws+3368);
	i8 v4357 = *(i8*)(intptr_t)v4356;
	i8 v4358 = (i8)+0;
	if (v4357==v4358) goto c02_038b; else goto c02_038a;

c02_038a:;

	goto endsub;

c02_038b:;

c02_0387:;

	i8 v4359 = (i8)(intptr_t)(ws+3352);
	i8 v4360 = *(i8*)(intptr_t)v4359;
	i8 v4361 = v4360+(+16);
	i8 v4362 = *(i8*)(intptr_t)v4361;
	i8 v4363 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v4363 = v4362;

	goto c02_0383;

c02_0386:;

	i8 v4364 = (i8)+0;
	i8 v4365 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4365 = v4364;

endsub:;
	*p4336 = *(i8*)(intptr_t)(ws+3368);
}

// AddToNamespace workspace at ws+3424 length ws+16
void f214_AddToNamespace(i8 p4366 /* symbol */, i8 p4367 /* namespace */) {
	*(i8*)(intptr_t)(ws+3424) = p4367; /*namespace */
	*(i8*)(intptr_t)(ws+3432) = p4366; /*symbol */

	i8 v4368 = (i8)(intptr_t)(ws+3424);
	i8 v4369 = *(i8*)(intptr_t)v4368;
	i8 v4370 = v4369+(+8);
	i8 v4371 = *(i8*)(intptr_t)v4370;
	i8 v4372 = (i8)+0;
	if (v4371==v4372) goto c02_038f; else goto c02_0390;

c02_038f:;

	i8 v4373 = (i8)(intptr_t)(ws+3432);
	i8 v4374 = *(i8*)(intptr_t)v4373;
	i8 v4375 = (i8)(intptr_t)(ws+3424);
	i8 v4376 = *(i8*)(intptr_t)v4375;
	*(i8*)(intptr_t)v4376 = v4374;

	i8 v4377 = (i8)(intptr_t)(ws+3432);
	i8 v4378 = *(i8*)(intptr_t)v4377;
	i8 v4379 = (i8)(intptr_t)(ws+3424);
	i8 v4380 = *(i8*)(intptr_t)v4379;
	i8 v4381 = v4380+(+8);
	*(i8*)(intptr_t)v4381 = v4378;

	goto c02_038c;

c02_0390:;

	i8 v4382 = (i8)(intptr_t)(ws+3432);
	i8 v4383 = *(i8*)(intptr_t)v4382;
	i8 v4384 = (i8)(intptr_t)(ws+3424);
	i8 v4385 = *(i8*)(intptr_t)v4384;
	i8 v4386 = v4385+(+8);
	i8 v4387 = *(i8*)(intptr_t)v4386;
	i8 v4388 = v4387+(+24);
	*(i8*)(intptr_t)v4388 = v4383;

	i8 v4389 = (i8)(intptr_t)(ws+3432);
	i8 v4390 = *(i8*)(intptr_t)v4389;
	i8 v4391 = (i8)(intptr_t)(ws+3424);
	i8 v4392 = *(i8*)(intptr_t)v4391;
	i8 v4393 = v4392+(+8);
	*(i8*)(intptr_t)v4393 = v4390;

c02_038c:;

	i8 v4394 = (i8)(intptr_t)(ws+3424);
	i8 v4395 = *(i8*)(intptr_t)v4394;
	i8 v4396 = (i8)(intptr_t)(ws+3432);
	i8 v4397 = *(i8*)(intptr_t)v4396;
	i8 v4398 = v4397+(+16);
	*(i8*)(intptr_t)v4398 = v4395;

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
void f215_AddSymbol(i8* p4399 /* symbol */, i8 p4400 /* name */, i8 p4401 /* namespace */) {
	*(i8*)(intptr_t)(ws+3368) = p4401; /*namespace */
	*(i8*)(intptr_t)(ws+3376) = p4400; /*name */

	i8 v4402 = (i8)(intptr_t)(ws+3368);
	i8 v4403 = *(i8*)(intptr_t)v4402;
	i8 v4404 = (i8)+0;
	if (v4403==v4404) goto c02_0394; else goto c02_0395;

c02_0394:;

	i8 v4405 = (i8)(intptr_t)(ws+40);
	i8 v4406 = *(i8*)(intptr_t)v4405;
	i8 v4407 = v4406+(+16);
	i8 v4408 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4408 = v4407;

c02_0395:;

c02_0391:;

	i8 v4409 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v4410;

	((void(*)(i8* /* symbol */))(intptr_t)v4409)(&v4410);
	i8 v4411 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4411 = v4410;

	i8 v4412 = (i8)(intptr_t)(ws+3376);
	i8 v4413 = *(i8*)(intptr_t)v4412;
	i8 v4414 = (i8)+0;
	if (v4413==v4414) goto c02_039a; else goto c02_0399;

c02_0399:;

	i8 v4415 = (i8)(intptr_t)(ws+3368);
	i8 v4416 = *(i8*)(intptr_t)v4415;
	i8 v4417 = (i8)(intptr_t)(ws+3376);
	i8 v4418 = *(i8*)(intptr_t)v4417;
	i8 v4419 = (i8)(intptr_t)(f212_LookupSymbolInNamespace);
	i8 v4420;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4419)(&v4420, v4418, v4416);
	i8 v4421 = (i8)+0;
	if (v4420==v4421) goto c02_039f; else goto c02_039e;

c02_039e:;

	i8 v4422 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v4422)();

	i8 v4423 = (i8)(intptr_t)c02_s00fa;
	i8 v4424 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4424)(v4423);

	i8 v4425 = (i8)(intptr_t)(ws+3376);
	i8 v4426 = *(i8*)(intptr_t)v4425;
	i8 v4427 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4427)(v4426);

	i8 v4428 = (i8)(intptr_t)c02_s00fb;
	i8 v4429 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4429)(v4428);

	i8 v4430 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v4430)();

c02_039f:;

c02_039b:;

	i8 v4431 = (i8)(intptr_t)(ws+3376);
	i8 v4432 = *(i8*)(intptr_t)v4431;
	i8 v4433 = (i8)(intptr_t)(ws+3384);
	i8 v4434 = *(i8*)(intptr_t)v4433;
	i8 v4435 = v4434+(+8);
	*(i8*)(intptr_t)v4435 = v4432;

	i8 v4436 = (i8)(intptr_t)(ws+3368);
	i8 v4437 = *(i8*)(intptr_t)v4436;
	i8 v4438 = (i8)(intptr_t)(ws+3384);
	i8 v4439 = *(i8*)(intptr_t)v4438;
	i8 v4440 = (i8)(intptr_t)(f214_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4440)(v4439, v4437);

c02_039a:;

c02_0396:;

endsub:;
	*p4399 = *(i8*)(intptr_t)(ws+3384);
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// AddAlias workspace at ws+3336 length ws+32
void f216_AddAlias(i8* p4441 /* symbol */, i8 p4442 /* real */, i8 p4443 /* name */, i8 p4444 /* namespace */) {
	*(i8*)(intptr_t)(ws+3336) = p4444; /*namespace */
	*(i8*)(intptr_t)(ws+3344) = p4443; /*name */
	*(i8*)(intptr_t)(ws+3352) = p4442; /*real */

	i8 v4445 = (i8)(intptr_t)(ws+3336);
	i8 v4446 = *(i8*)(intptr_t)v4445;
	i8 v4447 = (i8)(intptr_t)(ws+3344);
	i8 v4448 = *(i8*)(intptr_t)v4447;
	i8 v4449 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v4450;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4449)(&v4450, v4448, v4446);
	i8 v4451 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v4451 = v4450;

	i1 v4452 = (i1)+39;
	i8 v4453 = (i8)(intptr_t)(ws+3360);
	i8 v4454 = *(i8*)(intptr_t)v4453;
	i8 v4455 = v4454+(+32);
	*(i1*)(intptr_t)v4455 = v4452;

	i8 v4456 = (i8)(intptr_t)(ws+3352);
	i8 v4457 = *(i8*)(intptr_t)v4456;
	i8 v4458 = (i8)(intptr_t)(ws+3360);
	i8 v4459 = *(i8*)(intptr_t)v4458;
	*(i8*)(intptr_t)v4459 = v4457;

endsub:;
	*p4441 = *(i8*)(intptr_t)(ws+3360);
}
	void f216_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);

// AddAliasString workspace at ws+3208 length ws+24
void f217_AddAliasString(i8 p4460 /* real */, i8 p4461 /* name */) {
	*(i8*)(intptr_t)(ws+3208) = p4461; /*name */
	*(i8*)(intptr_t)(ws+3216) = p4460; /*real */

	i8 v4462 = (i8)+0;
	i8 v4463 = (i8)(intptr_t)(ws+3208);
	i8 v4464 = *(i8*)(intptr_t)v4463;
	i8 v4465 = (i8)(intptr_t)(ws+3216);
	i8 v4466 = *(i8*)(intptr_t)v4465;
	i8 v4467 = (i8)(intptr_t)(f216_AddAlias);
	i8 v4468;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v4467)(&v4468, v4466, v4464, v4462);
	i8 v4469 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v4469 = v4468;

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
void f218_CheckNotPartialType(i8 p4470 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p4470; /*type */

	i8 v4471 = (i8)(intptr_t)(ws+3376);
	i8 v4472 = *(i8*)(intptr_t)v4471;
	i8 v4473 = v4472+(+52);
	i1 v4474 = *(i1*)(intptr_t)v4473;
	i1 v4475 = (i1)+1;
	if (v4474==v4475) goto c02_03a3; else goto c02_03a4;

c02_03a3:;

	i8 v4476 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v4476)();

	i8 v4477 = (i8)(intptr_t)c02_s00fc;
	i8 v4478 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4478)(v4477);

	i8 v4479 = (i8)(intptr_t)(ws+3376);
	i8 v4480 = *(i8*)(intptr_t)v4479;
	i8 v4481 = v4480+(+32);
	i8 v4482 = *(i8*)(intptr_t)v4481;
	i8 v4483 = v4482+(+8);
	i8 v4484 = *(i8*)(intptr_t)v4483;
	i8 v4485 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4485)(v4484);

	i8 v4486 = (i8)(intptr_t)c02_s00fd;
	i8 v4487 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v4487)(v4486);

	i8 v4488 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v4488)();

c02_03a4:;

c02_03a0:;

endsub:;
}
	void f59_AllocNewSymbol(i8* /* symbol */);
	void f214_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// AddTypeToNamespace workspace at ws+3392 length ws+32
void f219_AddTypeToNamespace(i8 p4489 /* name */, i8 p4490 /* type */, i8 p4491 /* namespace */) {
	*(i8*)(intptr_t)(ws+3392) = p4491; /*namespace */
	*(i8*)(intptr_t)(ws+3400) = p4490; /*type */
	*(i8*)(intptr_t)(ws+3408) = p4489; /*name */

	i8 v4492 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v4493;

	((void(*)(i8* /* symbol */))(intptr_t)v4492)(&v4493);
	i8 v4494 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v4494 = v4493;

	i1 v4495 = (i1)+30;
	i8 v4496 = (i8)(intptr_t)(ws+3416);
	i8 v4497 = *(i8*)(intptr_t)v4496;
	i8 v4498 = v4497+(+32);
	*(i1*)(intptr_t)v4498 = v4495;

	i8 v4499 = (i8)(intptr_t)(ws+3400);
	i8 v4500 = *(i8*)(intptr_t)v4499;
	i8 v4501 = (i8)(intptr_t)(ws+3416);
	i8 v4502 = *(i8*)(intptr_t)v4501;
	*(i8*)(intptr_t)v4502 = v4500;

	i8 v4503 = (i8)(intptr_t)(ws+3408);
	i8 v4504 = *(i8*)(intptr_t)v4503;
	i8 v4505 = (i8)(intptr_t)(ws+3416);
	i8 v4506 = *(i8*)(intptr_t)v4505;
	i8 v4507 = v4506+(+8);
	*(i8*)(intptr_t)v4507 = v4504;

	i8 v4508 = (i8)(intptr_t)(ws+3416);
	i8 v4509 = *(i8*)(intptr_t)v4508;
	i8 v4510 = (i8)(intptr_t)(ws+3400);
	i8 v4511 = *(i8*)(intptr_t)v4510;
	i8 v4512 = v4511+(+32);
	*(i8*)(intptr_t)v4512 = v4509;

	i8 v4513 = (i8)(intptr_t)(ws+3392);
	i8 v4514 = *(i8*)(intptr_t)v4513;
	i8 v4515 = (i8)(intptr_t)(ws+3416);
	i8 v4516 = *(i8*)(intptr_t)v4515;
	i8 v4517 = (i8)(intptr_t)(f214_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v4517)(v4516, v4514);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f219_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeNumberType workspace at ws+3208 length ws+24
void f220_MakeNumberType(i8* p4518 /* type */, i8 p4519 /* name */, i1 p4520 /* is_signed */, i1 p4521 /* alignment */, i1 p4522 /* width */) {
	*(i1*)(intptr_t)(ws+3208) = p4522; /*width */
	*(i1*)(intptr_t)(ws+3209) = p4521; /*alignment */
	*(i1*)(intptr_t)(ws+3210) = p4520; /*is_signed */
	*(i8*)(intptr_t)(ws+3216) = p4519; /*name */

	i8 v4523 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v4524;

	((void(*)(i8* /* type */))(intptr_t)v4523)(&v4524);
	i8 v4525 = (i8)(intptr_t)(ws+3224);
	*(i8*)(intptr_t)v4525 = v4524;

	i1 v4526 = (i1)+2;
	i8 v4527 = (i8)(intptr_t)(ws+3224);
	i8 v4528 = *(i8*)(intptr_t)v4527;
	i8 v4529 = v4528+(+52);
	*(i1*)(intptr_t)v4529 = v4526;

	i8 v4530 = (i8)(intptr_t)(ws+3208);
	i1 v4531 = *(i1*)(intptr_t)v4530;
	i2 v4532 = v4531;
	i8 v4533 = (i8)(intptr_t)(ws+3224);
	i8 v4534 = *(i8*)(intptr_t)v4533;
	i8 v4535 = v4534+(+48);
	*(i2*)(intptr_t)v4535 = v4532;

	i8 v4536 = (i8)(intptr_t)(ws+3208);
	i1 v4537 = *(i1*)(intptr_t)v4536;
	i2 v4538 = v4537;
	i8 v4539 = (i8)(intptr_t)(ws+3224);
	i8 v4540 = *(i8*)(intptr_t)v4539;
	i8 v4541 = v4540+(+50);
	*(i2*)(intptr_t)v4541 = v4538;

	i8 v4542 = (i8)(intptr_t)(ws+3209);
	i1 v4543 = *(i1*)(intptr_t)v4542;
	i8 v4544 = (i8)(intptr_t)(ws+3224);
	i8 v4545 = *(i8*)(intptr_t)v4544;
	i8 v4546 = v4545+(+53);
	*(i1*)(intptr_t)v4546 = v4543;

	i8 v4547 = (i8)(intptr_t)(ws+3210);
	i1 v4548 = *(i1*)(intptr_t)v4547;
	i8 v4549 = (i8)(intptr_t)(ws+3224);
	i8 v4550 = *(i8*)(intptr_t)v4549;
	*(i1*)(intptr_t)v4550 = v4548;

	i8 v4551 = (i8)(intptr_t)(ws+40);
	i8 v4552 = *(i8*)(intptr_t)v4551;
	i8 v4553 = v4552+(+16);
	i8 v4554 = (i8)(intptr_t)(ws+3224);
	i8 v4555 = *(i8*)(intptr_t)v4554;
	i8 v4556 = (i8)(intptr_t)(ws+3216);
	i8 v4557 = *(i8*)(intptr_t)v4556;
	i8 v4558 = (i8)(intptr_t)(f219_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v4558)(v4557, v4555, v4553);

endsub:;
	*p4518 = *(i8*)(intptr_t)(ws+3224);
}

// IsTypeOfKind workspace at ws+3440 length ws+10
void f221_IsTypeOfKind(i1* p4559 /* result */, i1 p4560 /* kind */, i8 p4561 /* type */) {
	*(i8*)(intptr_t)(ws+3440) = p4561; /*type */
	*(i1*)(intptr_t)(ws+3448) = p4560; /*kind */

	i1 v4562 = (i1)+0;
	i8 v4563 = (i8)(intptr_t)(ws+3449);
	*(i1*)(intptr_t)v4563 = v4562;

	i8 v4564 = (i8)(intptr_t)(ws+3440);
	i8 v4565 = *(i8*)(intptr_t)v4564;
	i8 v4566 = (i8)+0;
	if (v4565==v4566) goto c02_03ab; else goto c02_03ac;

c02_03ac:;

	i8 v4567 = (i8)(intptr_t)(ws+3440);
	i8 v4568 = *(i8*)(intptr_t)v4567;
	i8 v4569 = v4568+(+52);
	i1 v4570 = *(i1*)(intptr_t)v4569;
	i8 v4571 = (i8)(intptr_t)(ws+3448);
	i1 v4572 = *(i1*)(intptr_t)v4571;
	if (v4570==v4572) goto c02_03aa; else goto c02_03ab;

c02_03aa:;

	i1 v4573 = (i1)+1;
	i8 v4574 = (i8)(intptr_t)(ws+3449);
	*(i1*)(intptr_t)v4574 = v4573;

c02_03ab:;

c02_03a5:;

endsub:;
	*p4559 = *(i1*)(intptr_t)(ws+3449);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsArray workspace at ws+3384 length ws+9
void f222_IsArray(i1* p4575 /* result */, i8 p4576 /* type */) {
	*(i8*)(intptr_t)(ws+3384) = p4576; /*type */

	i8 v4577 = (i8)(intptr_t)(ws+3384);
	i8 v4578 = *(i8*)(intptr_t)v4577;
	i1 v4579 = (i1)+4;
	i8 v4580 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4581;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4580)(&v4581, v4579, v4578);
	i8 v4582 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4582 = v4581;

endsub:;
	*p4575 = *(i1*)(intptr_t)(ws+3392);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsPtr workspace at ws+3424 length ws+9
void f63_IsPtr(i1* p4583 /* result */, i8 p4584 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4584; /*type */

	i8 v4585 = (i8)(intptr_t)(ws+3424);
	i8 v4586 = *(i8*)(intptr_t)v4585;
	i1 v4587 = (i1)+3;
	i8 v4588 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4589;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4588)(&v4589, v4587, v4586);
	i8 v4590 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4590 = v4589;

endsub:;
	*p4583 = *(i1*)(intptr_t)(ws+3432);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSubroutine workspace at ws+3424 length ws+9
void f223_IsSubroutine(i1* p4591 /* result */, i8 p4592 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4592; /*type */

	i8 v4593 = (i8)(intptr_t)(ws+3424);
	i8 v4594 = *(i8*)(intptr_t)v4593;
	i1 v4595 = (i1)+6;
	i8 v4596 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4597;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4596)(&v4597, v4595, v4594);
	i8 v4598 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4598 = v4597;

endsub:;
	*p4591 = *(i1*)(intptr_t)(ws+3432);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsNum workspace at ws+3424 length ws+9
void f224_IsNum(i1* p4599 /* result */, i8 p4600 /* type */) {
	*(i8*)(intptr_t)(ws+3424) = p4600; /*type */

	i8 v4601 = (i8)(intptr_t)(ws+3424);
	i8 v4602 = *(i8*)(intptr_t)v4601;
	i8 v4603 = (i8)+0;
	if (v4602==v4603) goto c02_03b0; else goto c02_03b1;

c02_03b0:;

	i1 v4604 = (i1)+1;
	i8 v4605 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4605 = v4604;

	goto c02_03ad;

c02_03b1:;

	i8 v4606 = (i8)(intptr_t)(ws+3424);
	i8 v4607 = *(i8*)(intptr_t)v4606;
	i1 v4608 = (i1)+2;
	i8 v4609 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4610;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4609)(&v4610, v4608, v4607);
	i8 v4611 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v4611 = v4610;

c02_03ad:;

endsub:;
	*p4599 = *(i1*)(intptr_t)(ws+3432);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsSNum workspace at ws+3376 length ws+9
void f225_IsSNum(i1* p4612 /* result */, i8 p4613 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p4613; /*type */

	i8 v4614 = (i8)(intptr_t)(ws+3376);
	i8 v4615 = *(i8*)(intptr_t)v4614;
	i8 v4616 = (i8)+0;
	if (v4615==v4616) goto c02_03b5; else goto c02_03b6;

c02_03b5:;

	i1 v4617 = (i1)+1;
	i8 v4618 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4618 = v4617;

	goto c02_03b2;

c02_03b6:;

	i8 v4619 = (i8)(intptr_t)(ws+3376);
	i8 v4620 = *(i8*)(intptr_t)v4619;
	i1 v4621 = (i1)+2;
	i8 v4622 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4623;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4622)(&v4623, v4621, v4620);
	i1 v4624 = (i1)+0;
	if (v4623==v4624) goto c02_03bc; else goto c02_03bd;

c02_03bd:;

	i8 v4625 = (i8)(intptr_t)(ws+3376);
	i8 v4626 = *(i8*)(intptr_t)v4625;
	i1 v4627 = *(i1*)(intptr_t)v4626;
	i1 v4628 = (i1)+0;
	if (v4627==v4628) goto c02_03bc; else goto c02_03bb;

c02_03bb:;

	i1 v4629 = (i1)+1;
	i8 v4630 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4630 = v4629;

	goto c02_03b2;

c02_03bc:;

	i1 v4631 = (i1)+0;
	i8 v4632 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v4632 = v4631;

c02_03b2:;

endsub:;
	*p4612 = *(i1*)(intptr_t)(ws+3384);
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);

// IsScalar workspace at ws+3408 length ws+9
void f226_IsScalar(i1* p4633 /* result */, i8 p4634 /* type */) {
	*(i8*)(intptr_t)(ws+3408) = p4634; /*type */

	i8 v4635 = (i8)(intptr_t)(ws+3408);
	i8 v4636 = *(i8*)(intptr_t)v4635;
	i8 v4637 = (i8)(intptr_t)(f63_IsPtr);
	i1 v4638;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4637)(&v4638, v4636);
	i1 v4639 = (i1)+0;
	if (v4638==v4639) goto c02_03c8; else goto c02_03c5;

c02_03c8:;

	i8 v4640 = (i8)(intptr_t)(ws+3408);
	i8 v4641 = *(i8*)(intptr_t)v4640;
	i8 v4642 = (i8)(intptr_t)(f224_IsNum);
	i1 v4643;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4642)(&v4643, v4641);
	i1 v4644 = (i1)+0;
	if (v4643==v4644) goto c02_03c7; else goto c02_03c5;

c02_03c7:;

	i8 v4645 = (i8)(intptr_t)(ws+3408);
	i8 v4646 = *(i8*)(intptr_t)v4645;
	i8 v4647 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v4648;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4647)(&v4648, v4646);
	i1 v4649 = (i1)+0;
	if (v4648==v4649) goto c02_03c6; else goto c02_03c5;

c02_03c5:;

	i1 v4650 = (i1)+1;
	i8 v4651 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v4651 = v4650;

	goto c02_03be;

c02_03c6:;

	i1 v4652 = (i1)+0;
	i8 v4653 = (i8)(intptr_t)(ws+3416);
	*(i1*)(intptr_t)v4653 = v4652;

c02_03be:;

endsub:;
	*p4633 = *(i1*)(intptr_t)(ws+3416);
}
	void f221_IsTypeOfKind(i1* /* result */, i1 /* kind */, i8 /* type */);

// IsRecord workspace at ws+3352 length ws+9
void f227_IsRecord(i1* p4654 /* result */, i8 p4655 /* type */) {
	*(i8*)(intptr_t)(ws+3352) = p4655; /*type */

	i8 v4656 = (i8)(intptr_t)(ws+3352);
	i8 v4657 = *(i8*)(intptr_t)v4656;
	i1 v4658 = (i1)+5;
	i8 v4659 = (i8)(intptr_t)(f221_IsTypeOfKind);
	i1 v4660;

	((void(*)(i1* /* result */, i1 /* kind */, i8 /* type */))(intptr_t)v4659)(&v4660, v4658, v4657);
	i8 v4661 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v4661 = v4660;

endsub:;
	*p4654 = *(i1*)(intptr_t)(ws+3360);
}
	void f226_IsScalar(i1* /* result */, i8 /* type */);
	void f126_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);

// MakeLValue workspace at ws+3376 length ws+32
void f228_MakeLValue(i8* p4662 /* lvalue */, i8 p4663 /* address */) {
	*(i8*)(intptr_t)(ws+3376) = p4663; /*address */

	i1 v4664 = (i1)+0;
	i8 v4665 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4665 = v4664;

	i8 v4666 = (i8)(intptr_t)(ws+3376);
	i8 v4667 = *(i8*)(intptr_t)v4666;
	i8 v4668 = v4667+(+16);
	i8 v4669 = *(i8*)(intptr_t)v4668;
	i8 v4670 = *(i8*)(intptr_t)v4669;
	i8 v4671 = (i8)(intptr_t)(ws+3400);
	*(i8*)(intptr_t)v4671 = v4670;

	i8 v4672 = (i8)(intptr_t)(ws+3400);
	i8 v4673 = *(i8*)(intptr_t)v4672;
	i8 v4674 = (i8)(intptr_t)(f226_IsScalar);
	i1 v4675;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v4674)(&v4675, v4673);
	i1 v4676 = (i1)+0;
	if (v4675==v4676) goto c02_03cd; else goto c02_03cc;

c02_03cc:;

	i8 v4677 = (i8)(intptr_t)(ws+3400);
	i8 v4678 = *(i8*)(intptr_t)v4677;
	i8 v4679 = v4678+(+48);
	i2 v4680 = *(i2*)(intptr_t)v4679;
	i1 v4681 = v4680;
	i8 v4682 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4682 = v4681;

c02_03cd:;

c02_03c9:;

	i8 v4683 = (i8)(intptr_t)(ws+3392);
	i1 v4684 = *(i1*)(intptr_t)v4683;
	i8 v4685 = (i8)(intptr_t)(ws+3376);
	i8 v4686 = *(i8*)(intptr_t)v4685;
	i8 v4687 = (i8)(intptr_t)(f126_MidDeref);
	i8 v4688;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v4687)(&v4688, v4686, v4684);
	i8 v4689 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4689 = v4688;

	i8 v4690 = (i8)(intptr_t)(ws+3400);
	i8 v4691 = *(i8*)(intptr_t)v4690;
	i8 v4692 = (i8)(intptr_t)(ws+3384);
	i8 v4693 = *(i8*)(intptr_t)v4692;
	i8 v4694 = v4693+(+16);
	*(i8*)(intptr_t)v4694 = v4691;

endsub:;
	*p4662 = *(i8*)(intptr_t)(ws+3384);
}
const i1 c02_s00fe[] = { 0x6c,0x76,0x61,0x6c,0x75,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f58_Discard(i8 /* node */);

// UndoLValue workspace at ws+3376 length ws+17
void f229_UndoLValue(i8* p4695 /* address */, i8 p4696 /* lvalue */) {
	*(i8*)(intptr_t)(ws+3376) = p4696; /*lvalue */

	i8 v4697 = (i8)(intptr_t)(ws+3376);
	i8 v4698 = *(i8*)(intptr_t)v4697;
	i8 v4699 = v4698+(+40);
	i1 v4700 = *(i1*)(intptr_t)v4699;
	i8 v4701 = (i8)(intptr_t)(ws+3392);
	*(i1*)(intptr_t)v4701 = v4700;

	i8 v4702 = (i8)(intptr_t)(ws+3392);
	i1 v4703 = *(i1*)(intptr_t)v4702;
	i1 v4704 = (i1)+49;
	if (v4703<v4704) goto c02_03d3; else goto c02_03d5;

c02_03d5:;

	i1 v4705 = (i1)+53;
	i8 v4706 = (i8)(intptr_t)(ws+3392);
	i1 v4707 = *(i1*)(intptr_t)v4706;
	if (v4705<v4707) goto c02_03d3; else goto c02_03d4;

c02_03d3:;

	i8 v4708 = (i8)(intptr_t)c02_s00fe;
	i8 v4709 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v4709)(v4708);

c02_03d4:;

c02_03ce:;

	i8 v4710 = (i8)(intptr_t)(ws+3376);
	i8 v4711 = *(i8*)(intptr_t)v4710;
	i8 v4712 = v4711+(+24);
	i8 v4713 = *(i8*)(intptr_t)v4712;
	i8 v4714 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v4714 = v4713;

	i8 v4715 = (i8)+0;
	i8 v4716 = (i8)(intptr_t)(ws+3376);
	i8 v4717 = *(i8*)(intptr_t)v4716;
	i8 v4718 = v4717+(+24);
	*(i8*)(intptr_t)v4718 = v4715;

	i8 v4719 = (i8)(intptr_t)(ws+3376);
	i8 v4720 = *(i8*)(intptr_t)v4719;
	i8 v4721 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v4721)(v4720);

endsub:;
	*p4695 = *(i8*)(intptr_t)(ws+3384);
}

// AllocLabel workspace at ws+3392 length ws+2
void f230_AllocLabel(i2* p4722 /* label */) {

	i8 v4723 = (i8)(intptr_t)(ws+48);
	i2 v4724 = *(i2*)(intptr_t)v4723;
	i8 v4725 = (i8)(intptr_t)(ws+3392);
	*(i2*)(intptr_t)v4725 = v4724;

	i8 v4726 = (i8)(intptr_t)(ws+48);
	i2 v4727 = *(i2*)(intptr_t)v4726;
	i2 v4728 = v4727+(+1);
	i8 v4729 = (i8)(intptr_t)(ws+48);
	*(i2*)(intptr_t)v4729 = v4728;

endsub:;
	*p4722 = *(i2*)(intptr_t)(ws+3392);
}

// AllocSubrId workspace at ws+3336 length ws+2
void f231_AllocSubrId(i2* p4730 /* id */) {

	i8 v4731 = (i8)(intptr_t)(ws+50);
	i2 v4732 = *(i2*)(intptr_t)v4731;
	i8 v4733 = (i8)(intptr_t)(ws+3336);
	*(i2*)(intptr_t)v4733 = v4732;

	i8 v4734 = (i8)(intptr_t)(ws+50);
	i2 v4735 = *(i2*)(intptr_t)v4734;
	i2 v4736 = v4735+(+1);
	i8 v4737 = (i8)(intptr_t)(ws+50);
	*(i2*)(intptr_t)v4737 = v4736;

endsub:;
	*p4730 = *(i2*)(intptr_t)(ws+3336);
}

// MidWriter workspace at ws+3440 length ws+8
void f232_MidWriter(i8 p4738 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4738; /*node */

endsub:;
}

// ArchAlignUp workspace at ws+3392 length ws+8
void f233_ArchAlignUp(i2* p4739 /* newvalue */, i1 p4740 /* alignment */, i2 p4741 /* value */) {
	*(i2*)(intptr_t)(ws+3392) = p4741; /*value */
	*(i1*)(intptr_t)(ws+3394) = p4740; /*alignment */

	i8 v4742 = (i8)(intptr_t)(ws+3394);
	i1 v4743 = *(i1*)(intptr_t)v4742;
	i1 v4744 = v4743+(-1);
	i2 v4745 = v4744;
	i8 v4746 = (i8)(intptr_t)(ws+3398);
	*(i2*)(intptr_t)v4746 = v4745;

	i8 v4747 = (i8)(intptr_t)(ws+3392);
	i2 v4748 = *(i2*)(intptr_t)v4747;
	i8 v4749 = (i8)(intptr_t)(ws+3398);
	i2 v4750 = *(i2*)(intptr_t)v4749;
	i2 v4751 = v4748+v4750;
	i8 v4752 = (i8)(intptr_t)(ws+3398);
	i2 v4753 = *(i2*)(intptr_t)v4752;
	i2 v4754 = ~v4753;
	i2 v4755 = v4751&v4754;
	i8 v4756 = (i8)(intptr_t)(ws+3396);
	*(i2*)(intptr_t)v4756 = v4755;

endsub:;
	*p4739 = *(i2*)(intptr_t)(ws+3396);
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

	i1 v4757 = (i1)+8;
	i1 v4758 = (i1)+8;
	i1 v4759 = (i1)+0;
	i8 v4760 = (i8)(intptr_t)c02_s00ff;
	i8 v4761 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4762;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4761)(&v4762, v4760, v4759, v4758, v4757);
	i8 v4763 = (i8)(intptr_t)(ws+1464);
	*(i8*)(intptr_t)v4763 = v4762;

	i1 v4764 = (i1)+8;
	i1 v4765 = (i1)+8;
	i1 v4766 = (i1)+1;
	i8 v4767 = (i8)(intptr_t)c02_s0100;
	i8 v4768 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4769;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4768)(&v4769, v4767, v4766, v4765, v4764);
	i8 v4770 = (i8)(intptr_t)(ws+1472);
	*(i8*)(intptr_t)v4770 = v4769;

	i1 v4771 = (i1)+4;
	i1 v4772 = (i1)+4;
	i1 v4773 = (i1)+0;
	i8 v4774 = (i8)(intptr_t)c02_s0101;
	i8 v4775 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4776;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4775)(&v4776, v4774, v4773, v4772, v4771);
	i8 v4777 = (i8)(intptr_t)(ws+1480);
	*(i8*)(intptr_t)v4777 = v4776;

	i1 v4778 = (i1)+4;
	i1 v4779 = (i1)+4;
	i1 v4780 = (i1)+1;
	i8 v4781 = (i8)(intptr_t)c02_s0102;
	i8 v4782 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4783;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4782)(&v4783, v4781, v4780, v4779, v4778);
	i8 v4784 = (i8)(intptr_t)(ws+1488);
	*(i8*)(intptr_t)v4784 = v4783;

	i1 v4785 = (i1)+2;
	i1 v4786 = (i1)+2;
	i1 v4787 = (i1)+0;
	i8 v4788 = (i8)(intptr_t)c02_s0103;
	i8 v4789 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4790;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4789)(&v4790, v4788, v4787, v4786, v4785);
	i8 v4791 = (i8)(intptr_t)(ws+1496);
	*(i8*)(intptr_t)v4791 = v4790;

	i1 v4792 = (i1)+2;
	i1 v4793 = (i1)+2;
	i1 v4794 = (i1)+1;
	i8 v4795 = (i8)(intptr_t)c02_s0104;
	i8 v4796 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4797;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4796)(&v4797, v4795, v4794, v4793, v4792);
	i8 v4798 = (i8)(intptr_t)(ws+1504);
	*(i8*)(intptr_t)v4798 = v4797;

	i1 v4799 = (i1)+1;
	i1 v4800 = (i1)+1;
	i1 v4801 = (i1)+0;
	i8 v4802 = (i8)(intptr_t)c02_s0105;
	i8 v4803 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4804;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4803)(&v4804, v4802, v4801, v4800, v4799);
	i8 v4805 = (i8)(intptr_t)(ws+1512);
	*(i8*)(intptr_t)v4805 = v4804;

	i1 v4806 = (i1)+1;
	i1 v4807 = (i1)+1;
	i1 v4808 = (i1)+1;
	i8 v4809 = (i8)(intptr_t)c02_s0106;
	i8 v4810 = (i8)(intptr_t)(f220_MakeNumberType);
	i8 v4811;

	((void(*)(i8* /* type */, i8 /* name */, i1 /* is_signed */, i1 /* alignment */, i1 /* width */))(intptr_t)v4810)(&v4811, v4809, v4808, v4807, v4806);
	i8 v4812 = (i8)(intptr_t)(ws+1520);
	*(i8*)(intptr_t)v4812 = v4811;

	i8 v4813 = (i8)(intptr_t)(ws+1464);
	i8 v4814 = *(i8*)(intptr_t)v4813;
	i8 v4815 = (i8)(intptr_t)(ws+1528);
	*(i8*)(intptr_t)v4815 = v4814;

	i8 v4816 = (i8)(intptr_t)c02_s0107;
	i8 v4817 = (i8)+0;
	i8 v4818 = (i8)(intptr_t)c02_s0108;
	i8 v4819 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v4820;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v4819)(&v4820, v4818, v4817);
	i8 v4821 = (i8)(intptr_t)(f217_AddAliasString);

	((void(*)(i8 /* real */, i8 /* name */))(intptr_t)v4821)(v4820, v4816);

endsub:;
}

// ArchGuessIntType workspace at ws+3360 length ws+16
void f235_ArchGuessIntType(i8* p4822 /* symbol */, i4 p4823 /* max */, i4 p4824 /* min */) {
	*(i4*)(intptr_t)(ws+3360) = p4824; /*min */
	*(i4*)(intptr_t)(ws+3364) = p4823; /*max */

	i8 v4825 = (i8)(intptr_t)(ws+3360);
	i4 v4826 = *(i4*)(intptr_t)v4825;
	i4 v4827 = (i4)+0;
	if ((s4)v4826<(s4)v4827) goto c02_03dc; else goto c02_03dd;

c02_03dd:;

	i4 v4828 = (i4)+255;
	i8 v4829 = (i8)(intptr_t)(ws+3364);
	i4 v4830 = *(i4*)(intptr_t)v4829;
	if ((s4)v4828<(s4)v4830) goto c02_03dc; else goto c02_03db;

c02_03db:;

	i8 v4831 = (i8)(intptr_t)(ws+1512);
	i8 v4832 = *(i8*)(intptr_t)v4831;
	i8 v4833 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4833 = v4832;

	goto c02_03d6;

c02_03dc:;

	i8 v4834 = (i8)(intptr_t)(ws+3360);
	i4 v4835 = *(i4*)(intptr_t)v4834;
	i4 v4836 = (i4)-128;
	if ((s4)v4835<(s4)v4836) goto c02_03e3; else goto c02_03e4;

c02_03e4:;

	i4 v4837 = (i4)+127;
	i8 v4838 = (i8)(intptr_t)(ws+3364);
	i4 v4839 = *(i4*)(intptr_t)v4838;
	if ((s4)v4837<(s4)v4839) goto c02_03e3; else goto c02_03e2;

c02_03e2:;

	i8 v4840 = (i8)(intptr_t)(ws+1520);
	i8 v4841 = *(i8*)(intptr_t)v4840;
	i8 v4842 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4842 = v4841;

	goto c02_03d6;

c02_03e3:;

	i8 v4843 = (i8)(intptr_t)(ws+3360);
	i4 v4844 = *(i4*)(intptr_t)v4843;
	i4 v4845 = (i4)+0;
	if ((s4)v4844<(s4)v4845) goto c02_03ea; else goto c02_03eb;

c02_03eb:;

	i4 v4846 = (i4)+65535;
	i8 v4847 = (i8)(intptr_t)(ws+3364);
	i4 v4848 = *(i4*)(intptr_t)v4847;
	if ((s4)v4846<(s4)v4848) goto c02_03ea; else goto c02_03e9;

c02_03e9:;

	i8 v4849 = (i8)(intptr_t)(ws+1496);
	i8 v4850 = *(i8*)(intptr_t)v4849;
	i8 v4851 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4851 = v4850;

	goto c02_03d6;

c02_03ea:;

	i8 v4852 = (i8)(intptr_t)(ws+3360);
	i4 v4853 = *(i4*)(intptr_t)v4852;
	i4 v4854 = (i4)-32768;
	if ((s4)v4853<(s4)v4854) goto c02_03f1; else goto c02_03f2;

c02_03f2:;

	i4 v4855 = (i4)+32767;
	i8 v4856 = (i8)(intptr_t)(ws+3364);
	i4 v4857 = *(i4*)(intptr_t)v4856;
	if ((s4)v4855<(s4)v4857) goto c02_03f1; else goto c02_03f0;

c02_03f0:;

	i8 v4858 = (i8)(intptr_t)(ws+1504);
	i8 v4859 = *(i8*)(intptr_t)v4858;
	i8 v4860 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4860 = v4859;

	goto c02_03d6;

c02_03f1:;

	i8 v4861 = (i8)(intptr_t)(ws+3360);
	i4 v4862 = *(i4*)(intptr_t)v4861;
	i4 v4863 = (i4)+0;
	if ((s4)v4862<(s4)v4863) goto c02_03f6; else goto c02_03f5;

c02_03f5:;

	i8 v4864 = (i8)(intptr_t)(ws+1480);
	i8 v4865 = *(i8*)(intptr_t)v4864;
	i8 v4866 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4866 = v4865;

	goto c02_03d6;

c02_03f6:;

	i8 v4867 = (i8)(intptr_t)(ws+1488);
	i8 v4868 = *(i8*)(intptr_t)v4867;
	i8 v4869 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v4869 = v4868;

c02_03d6:;

endsub:;
	*p4822 = *(i8*)(intptr_t)(ws+3368);
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitVariable workspace at ws+3368 length ws+18
void f236_ArchInitVariable(i8 p4870 /* symbol */) {
	*(i8*)(intptr_t)(ws+3368) = p4870; /*symbol */

	i8 v4871 = (i8)(intptr_t)(ws+3368);
	i8 v4872 = *(i8*)(intptr_t)v4871;
	i8 v4873 = *(i8*)(intptr_t)v4872;
	i8 v4874 = v4873+(+8);
	i8 v4875 = *(i8*)(intptr_t)v4874;
	i8 v4876 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v4876 = v4875;

	i8 v4877 = (i8)(intptr_t)(ws+3376);
	i8 v4878 = *(i8*)(intptr_t)v4877;
	i8 v4879 = v4878+(+58);
	i2 v4880 = *(i2*)(intptr_t)v4879;
	i8 v4881 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v4881 = v4880;

	i8 v4882 = (i8)(intptr_t)(ws+3384);
	i2 v4883 = *(i2*)(intptr_t)v4882;
	i8 v4884 = (i8)(intptr_t)(ws+3368);
	i8 v4885 = *(i8*)(intptr_t)v4884;
	i8 v4886 = *(i8*)(intptr_t)v4885;
	i8 v4887 = *(i8*)(intptr_t)v4886;
	i8 v4888 = v4887+(+53);
	i1 v4889 = *(i1*)(intptr_t)v4888;
	i8 v4890 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v4891;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4890)(&v4891, v4889, v4883);
	i8 v4892 = (i8)(intptr_t)(ws+3384);
	*(i2*)(intptr_t)v4892 = v4891;

	i8 v4893 = (i8)(intptr_t)(ws+3384);
	i2 v4894 = *(i2*)(intptr_t)v4893;
	i8 v4895 = (i8)(intptr_t)(ws+3368);
	i8 v4896 = *(i8*)(intptr_t)v4895;
	i8 v4897 = *(i8*)(intptr_t)v4896;
	i8 v4898 = v4897+(+24);
	*(i2*)(intptr_t)v4898 = v4894;

	i8 v4899 = (i8)(intptr_t)(ws+3384);
	i2 v4900 = *(i2*)(intptr_t)v4899;
	i8 v4901 = (i8)(intptr_t)(ws+3368);
	i8 v4902 = *(i8*)(intptr_t)v4901;
	i8 v4903 = *(i8*)(intptr_t)v4902;
	i8 v4904 = *(i8*)(intptr_t)v4903;
	i8 v4905 = v4904+(+48);
	i2 v4906 = *(i2*)(intptr_t)v4905;
	i2 v4907 = v4900+v4906;
	i8 v4908 = (i8)(intptr_t)(ws+3376);
	i8 v4909 = *(i8*)(intptr_t)v4908;
	i8 v4910 = v4909+(+58);
	*(i2*)(intptr_t)v4910 = v4907;

endsub:;
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);

// ArchInitMember workspace at ws+3328 length ws+18
void f237_ArchInitMember(i2 p4911 /* position */, i8 p4912 /* member */, i8 p4913 /* containing */) {
	*(i8*)(intptr_t)(ws+3328) = p4913; /*containing */
	*(i8*)(intptr_t)(ws+3336) = p4912; /*member */
	*(i2*)(intptr_t)(ws+3344) = p4911; /*position */

	i8 v4914 = (i8)(intptr_t)(ws+3344);
	i2 v4915 = *(i2*)(intptr_t)v4914;
	i8 v4916 = (i8)(intptr_t)(ws+3336);
	i8 v4917 = *(i8*)(intptr_t)v4916;
	i8 v4918 = *(i8*)(intptr_t)v4917;
	i8 v4919 = *(i8*)(intptr_t)v4918;
	i8 v4920 = v4919+(+53);
	i1 v4921 = *(i1*)(intptr_t)v4920;
	i8 v4922 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v4923;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v4922)(&v4923, v4921, v4915);
	i8 v4924 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v4924 = v4923;

	i8 v4925 = (i8)(intptr_t)(ws+3344);
	i2 v4926 = *(i2*)(intptr_t)v4925;
	i8 v4927 = (i8)(intptr_t)(ws+3336);
	i8 v4928 = *(i8*)(intptr_t)v4927;
	i8 v4929 = *(i8*)(intptr_t)v4928;
	i8 v4930 = v4929+(+24);
	*(i2*)(intptr_t)v4930 = v4926;

	i8 v4931 = (i8)(intptr_t)(ws+3344);
	i2 v4932 = *(i2*)(intptr_t)v4931;
	i8 v4933 = (i8)(intptr_t)(ws+3336);
	i8 v4934 = *(i8*)(intptr_t)v4933;
	i8 v4935 = *(i8*)(intptr_t)v4934;
	i8 v4936 = *(i8*)(intptr_t)v4935;
	i8 v4937 = v4936+(+48);
	i2 v4938 = *(i2*)(intptr_t)v4937;
	i2 v4939 = v4932+v4938;
	i8 v4940 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v4940 = v4939;

	i8 v4941 = (i8)(intptr_t)(ws+3328);
	i8 v4942 = *(i8*)(intptr_t)v4941;
	i8 v4943 = v4942+(+48);
	i2 v4944 = *(i2*)(intptr_t)v4943;
	i8 v4945 = (i8)(intptr_t)(ws+3344);
	i2 v4946 = *(i2*)(intptr_t)v4945;
	if (v4944<v4946) goto c02_03fa; else goto c02_03fb;

c02_03fa:;

	i8 v4947 = (i8)(intptr_t)(ws+3344);
	i2 v4948 = *(i2*)(intptr_t)v4947;
	i8 v4949 = (i8)(intptr_t)(ws+3328);
	i8 v4950 = *(i8*)(intptr_t)v4949;
	i8 v4951 = v4950+(+48);
	*(i2*)(intptr_t)v4951 = v4948;

c02_03fb:;

c02_03f7:;

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);

// WriteMid1 workspace at ws+3448 length ws+0
void f238_WriteMid1(i8 p4952 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4952; /*node */

	i8 v4953 = (i8)(intptr_t)(ws+3440);
	i8 v4954 = *(i8*)(intptr_t)v4953;
	i8 v4955 = *(i8*)(intptr_t)v4954;
	i8 v4956 = v4955+(+56);
	i2 v4957 = *(i2*)(intptr_t)v4956;
	i8 v4958 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4958)(v4957);

	i8 v4959 = (i8)(intptr_t)(ws+3440);
	i8 v4960 = *(i8*)(intptr_t)v4959;
	i8 v4961 = v4960+(+8);
	i1 v4962 = *(i1*)(intptr_t)v4961;
	i8 v4963 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4963)(v4962);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);

// WriteMid2 workspace at ws+3448 length ws+0
void f239_WriteMid2(i8 p4964 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p4964; /*node */

	i8 v4965 = (i8)(intptr_t)(ws+3440);
	i8 v4966 = *(i8*)(intptr_t)v4965;
	i8 v4967 = *(i8*)(intptr_t)v4966;
	i8 v4968 = *(i8*)(intptr_t)v4967;
	i8 v4969 = v4968+(+8);
	i8 v4970 = *(i8*)(intptr_t)v4969;
	i8 v4971 = v4970+(+56);
	i2 v4972 = *(i2*)(intptr_t)v4971;
	i8 v4973 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v4973)(v4972);

	i8 v4974 = (i8)(intptr_t)(ws+3440);
	i8 v4975 = *(i8*)(intptr_t)v4974;
	i8 v4976 = *(i8*)(intptr_t)v4975;
	i8 v4977 = *(i8*)(intptr_t)v4976;
	i8 v4978 = v4977+(+26);
	i1 v4979 = *(i1*)(intptr_t)v4978;
	i8 v4980 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4980)(v4979);

	i8 v4981 = (i8)(intptr_t)(ws+3440);
	i8 v4982 = *(i8*)(intptr_t)v4981;
	i8 v4983 = *(i8*)(intptr_t)v4982;
	i8 v4984 = *(i8*)(intptr_t)v4983;
	i8 v4985 = v4984+(+24);
	i2 v4986 = *(i2*)(intptr_t)v4985;
	i8 v4987 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v4987)(v4986);

	i8 v4988 = (i8)(intptr_t)(ws+3440);
	i8 v4989 = *(i8*)(intptr_t)v4988;
	i8 v4990 = *(i8*)(intptr_t)v4989;
	i8 v4991 = *(i8*)(intptr_t)v4990;
	i8 v4992 = *(i8*)(intptr_t)v4991;
	i8 v4993 = v4992+(+48);
	i2 v4994 = *(i2*)(intptr_t)v4993;
	i1 v4995 = v4994;
	i8 v4996 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v4996)(v4995);

	i8 v4997 = (i8)(intptr_t)(ws+3440);
	i8 v4998 = *(i8*)(intptr_t)v4997;
	i8 v4999 = v4998+(+8);
	i2 v5000 = *(i2*)(intptr_t)v4999;
	i8 v5001 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5001)(v5000);

endsub:;
}
	void f171_E_b16(i2 /* word */);

// WriteMid3 workspace at ws+3448 length ws+0
void f240_WriteMid3(i8 p5002 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5002; /*node */

	i8 v5003 = (i8)(intptr_t)(ws+3440);
	i8 v5004 = *(i8*)(intptr_t)v5003;
	i2 v5005 = *(i2*)(intptr_t)v5004;
	i8 v5006 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5006)(v5005);

endsub:;
}
	void f170_E_b8(i1 /* byte */);

// WriteMid4 workspace at ws+3448 length ws+0
void f241_WriteMid4(i8 p5007 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5007; /*node */

	i8 v5008 = (i8)(intptr_t)(ws+3440);
	i8 v5009 = *(i8*)(intptr_t)v5008;
	i1 v5010 = *(i1*)(intptr_t)v5009;
	i8 v5011 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5011)(v5010);

endsub:;
}
	void f181_E_countedstring(i8 /* text */);

// WriteMid5 workspace at ws+3448 length ws+0
void f242_WriteMid5(i8 p5012 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5012; /*node */

	i8 v5013 = (i8)(intptr_t)(ws+3440);
	i8 v5014 = *(i8*)(intptr_t)v5013;
	i8 v5015 = *(i8*)(intptr_t)v5014;
	i8 v5016 = (i8)(intptr_t)(f181_E_countedstring);

	((void(*)(i8 /* text */))(intptr_t)v5016)(v5015);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);

// WriteMid6 workspace at ws+3448 length ws+0
void f243_WriteMid6(i8 p5017 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5017; /*node */

	i8 v5018 = (i8)(intptr_t)(ws+3440);
	i8 v5019 = *(i8*)(intptr_t)v5018;
	i2 v5020 = *(i2*)(intptr_t)v5019;
	i8 v5021 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5021)(v5020);

	i8 v5022 = (i8)(intptr_t)(ws+3440);
	i8 v5023 = *(i8*)(intptr_t)v5022;
	i8 v5024 = v5023+(+2);
	i2 v5025 = *(i2*)(intptr_t)v5024;
	i8 v5026 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5026)(v5025);

	i8 v5027 = (i8)(intptr_t)(ws+3440);
	i8 v5028 = *(i8*)(intptr_t)v5027;
	i8 v5029 = v5028+(+4);
	i2 v5030 = *(i2*)(intptr_t)v5029;
	i8 v5031 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5031)(v5030);

	i8 v5032 = (i8)(intptr_t)(ws+3440);
	i8 v5033 = *(i8*)(intptr_t)v5032;
	i8 v5034 = v5033+(+6);
	i1 v5035 = *(i1*)(intptr_t)v5034;
	i8 v5036 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5036)(v5035);

endsub:;
}
	void f172_E_b32(i4 /* quad */);

// WriteMid7 workspace at ws+3448 length ws+0
void f244_WriteMid7(i8 p5037 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5037; /*node */

	i8 v5038 = (i8)(intptr_t)(ws+3440);
	i8 v5039 = *(i8*)(intptr_t)v5038;
	i4 v5040 = *(i4*)(intptr_t)v5039;
	i8 v5041 = (i8)(intptr_t)(f172_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5041)(v5040);

endsub:;
}
	void f171_E_b16(i2 /* word */);
	void f170_E_b8(i1 /* byte */);
	void f173_E_bsize(i2 /* size */);
	void f170_E_b8(i1 /* byte */);

// WriteMid8 workspace at ws+3448 length ws+0
void f245_WriteMid8(i8 p5042 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5042; /*node */

	i8 v5043 = (i8)(intptr_t)(ws+3440);
	i8 v5044 = *(i8*)(intptr_t)v5043;
	i8 v5045 = *(i8*)(intptr_t)v5044;
	i8 v5046 = *(i8*)(intptr_t)v5045;
	i8 v5047 = v5046+(+8);
	i8 v5048 = *(i8*)(intptr_t)v5047;
	i8 v5049 = v5048+(+56);
	i2 v5050 = *(i2*)(intptr_t)v5049;
	i8 v5051 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5051)(v5050);

	i8 v5052 = (i8)(intptr_t)(ws+3440);
	i8 v5053 = *(i8*)(intptr_t)v5052;
	i8 v5054 = *(i8*)(intptr_t)v5053;
	i8 v5055 = *(i8*)(intptr_t)v5054;
	i8 v5056 = v5055+(+26);
	i1 v5057 = *(i1*)(intptr_t)v5056;
	i8 v5058 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5058)(v5057);

	i8 v5059 = (i8)(intptr_t)(ws+3440);
	i8 v5060 = *(i8*)(intptr_t)v5059;
	i8 v5061 = *(i8*)(intptr_t)v5060;
	i8 v5062 = *(i8*)(intptr_t)v5061;
	i8 v5063 = v5062+(+24);
	i2 v5064 = *(i2*)(intptr_t)v5063;
	i8 v5065 = (i8)(intptr_t)(f173_E_bsize);

	((void(*)(i2 /* size */))(intptr_t)v5065)(v5064);

	i8 v5066 = (i8)(intptr_t)(ws+3440);
	i8 v5067 = *(i8*)(intptr_t)v5066;
	i8 v5068 = *(i8*)(intptr_t)v5067;
	i8 v5069 = *(i8*)(intptr_t)v5068;
	i8 v5070 = *(i8*)(intptr_t)v5069;
	i8 v5071 = v5070+(+48);
	i2 v5072 = *(i2*)(intptr_t)v5071;
	i1 v5073 = v5072;
	i8 v5074 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5074)(v5073);

endsub:;
}
	void f172_E_b32(i4 /* quad */);
	void f171_E_b16(i2 /* word */);

// WriteMid9 workspace at ws+3448 length ws+0
void f246_WriteMid9(i8 p5075 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5075; /*node */

	i8 v5076 = (i8)(intptr_t)(ws+3440);
	i8 v5077 = *(i8*)(intptr_t)v5076;
	i4 v5078 = *(i4*)(intptr_t)v5077;
	i8 v5079 = (i8)(intptr_t)(f172_E_b32);

	((void(*)(i4 /* quad */))(intptr_t)v5079)(v5078);

	i8 v5080 = (i8)(intptr_t)(ws+3440);
	i8 v5081 = *(i8*)(intptr_t)v5080;
	i8 v5082 = v5081+(+4);
	i2 v5083 = *(i2*)(intptr_t)v5082;
	i8 v5084 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5084)(v5083);

endsub:;
}
	void f171_E_b16(i2 /* word */);

// WriteMid10 workspace at ws+3448 length ws+0
void f247_WriteMid10(i8 p5085 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5085; /*node */

	i8 v5086 = (i8)(intptr_t)(ws+3440);
	i8 v5087 = *(i8*)(intptr_t)v5086;
	i8 v5088 = *(i8*)(intptr_t)v5087;
	i8 v5089 = v5088+(+56);
	i2 v5090 = *(i2*)(intptr_t)v5089;
	i8 v5091 = (i8)(intptr_t)(f171_E_b16);

	((void(*)(i2 /* word */))(intptr_t)v5091)(v5090);

endsub:;
}

// WriteMid11 workspace at ws+3448 length ws+0
void f248_WriteMid11(i8 p5092 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p5092; /*node */

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
static data f3___main_s03fc[] = {

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
static data f3___main_s03fd[] = {








	{ .i1 = { 0x0a,0x0a,0x0a,0x09,0x09,0x07,0x06,0x06}},








	{ .i1 = { 0x06,0x06,0x06,0x04,0x01,0x09,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x04,0x07,0x09,0x06,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x02,0x02,0x0a,0x09,0x09,0x09,0x09}},








	{ .i1 = { 0x09,0x09,0x00,0x00,0x00,0x00,0x00,0x00}},








	{ .i1 = { 0x00,0x00,0x00,0x00,0x06,0x04,0x01,0x09}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x05,0x05,0x05,0x05,0x05}},








	{ .i1 = { 0x05,0x05,0x05,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x08,0x08,0x08,0x08,0x08,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x03,0x03}},








	{ .i1 = { 0x03,0x03,0x03,0x03,0x03,0x03,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},








	{ .i1 = { 0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a,0x0a}},


	{ .i1 = { 0x0a}},
};
	void f170_E_b8(i1 /* byte */);
	void f55_PushNode(i8 /* node */);
	void f57_NextNode(i8* /* node */);
	void f170_E_b8(i1 /* byte */);
	void f58_Discard(i8 /* node */);

// ReallyGenerate workspace at ws+3408 length ws+25
void f250_ReallyGenerate(i8 p5138 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3408) = p5138; /*rootnode */

	i1 v5139 = (i1)+77;
	i8 v5140 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5140)(v5139);

	i8 v5141 = (i8)(intptr_t)(ws+224);
	i8 v5142 = *(i8*)(intptr_t)v5141;
	i8 v5143 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v5143 = v5142;

	i8 v5144 = (i8)(intptr_t)(ws+3408);
	i8 v5145 = *(i8*)(intptr_t)v5144;
	i8 v5146 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5146)(v5145);

c02_040b:;

	i8 v5147 = (i8)(intptr_t)(ws+224);
	i8 v5148 = *(i8*)(intptr_t)v5147;
	i8 v5149 = (i8)(intptr_t)(ws+3416);
	i8 v5150 = *(i8*)(intptr_t)v5149;
	if (v5148==v5150) goto c02_040e; else goto c02_040d;

c02_040d:;

	i8 v5151 = (i8)(intptr_t)(f57_NextNode);
	i8 v5152;

	((void(*)(i8* /* node */))(intptr_t)v5151)(&v5152);
	i8 v5153 = (i8)(intptr_t)(ws+3424);
	*(i8*)(intptr_t)v5153 = v5152;

	i8 v5154 = (i8)(intptr_t)(ws+3424);
	i8 v5155 = *(i8*)(intptr_t)v5154;
	i8 v5156 = v5155+(+40);
	i1 v5157 = *(i1*)(intptr_t)v5156;
	i8 v5158 = (i8)(intptr_t)(f170_E_b8);

	((void(*)(i1 /* byte */))(intptr_t)v5158)(v5157);

	i8 v5159 = (i8)(intptr_t)((i1*)f3___main_s03fd);
	i8 v5160 = (i8)(intptr_t)(ws+3424);
	i8 v5161 = *(i8*)(intptr_t)v5160;
	i8 v5162 = v5161+(+40);
	i1 v5163 = *(i1*)(intptr_t)v5162;
	i1 v5164 = v5163+(-1);
	i8 v5165 = v5164;
	i8 v5166 = v5159+v5165;
	i1 v5167 = *(i1*)(intptr_t)v5166;
	i8 v5168 = (i8)(intptr_t)(ws+3432);
	*(i1*)(intptr_t)v5168 = v5167;

	i8 v5169 = (i8)(intptr_t)(ws+3424);
	i8 v5170 = *(i8*)(intptr_t)v5169;
	i8 v5171 = (i8)(intptr_t)((i1*)f3___main_s03fc);
	i8 v5172 = (i8)(intptr_t)(ws+3432);
	i1 v5173 = *(i1*)(intptr_t)v5172;
	i8 v5174 = v5173;
	i1 v5175 = (i1)+3;
	i8 v5176 = ((i8)v5174)<<v5175;
	i8 v5177 = v5171+v5176;
	i8 v5178 = *(i8*)(intptr_t)v5177;

	((void(*)(i8 /* node */))(intptr_t)v5178)(v5170);

	goto c02_040b;

c02_040e:;

	i8 v5179 = (i8)(intptr_t)(ws+3408);
	i8 v5180 = *(i8*)(intptr_t)v5179;
	i8 v5181 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5181)(v5180);

endsub:;
}
	void f58_Discard(i8 /* node */);
	void f113_MidAsmgroupstart(i8* /* m */);
	void f250_ReallyGenerate(i8 /* rootnode */);
	void f103_MidAsmgroupend(i8* /* m */);
	void f250_ReallyGenerate(i8 /* rootnode */);
	void f250_ReallyGenerate(i8 /* rootnode */);

// Generate workspace at ws+3392 length ws+9
void f251_Generate(i8 p5184 /* statement */) {
	*(i8*)(intptr_t)(ws+3392) = p5184; /*statement */

	i8 v5185 = (i8)(intptr_t)(ws+3392);
	i8 v5186 = *(i8*)(intptr_t)v5185;
	i8 v5187 = v5186+(+40);
	i1 v5188 = *(i1*)(intptr_t)v5187;
	i8 v5189 = (i8)(intptr_t)(ws+3400);
	*(i1*)(intptr_t)v5189 = v5188;

	i8 v5190 = (i8)(intptr_t)(ws+1536);
	i1 v5191 = *(i1*)(intptr_t)v5190;
	i1 v5192 = (i1)+27;
	if (v5191==v5192) goto c02_0414; else goto c02_0416;

c02_0416:;

	i8 v5193 = (i8)(intptr_t)(ws+1536);
	i1 v5194 = *(i1*)(intptr_t)v5193;
	i1 v5195 = (i1)+28;
	if (v5194==v5195) goto c02_0414; else goto c02_0415;

c02_0414:;

	i8 v5196 = (i8)(intptr_t)(ws+3400);
	i1 v5197 = *(i1*)(intptr_t)v5196;
	i1 v5198 = (i1)+26;
	if (v5197==v5198) goto c02_041d; else goto c02_041e;

c02_041e:;

	i8 v5199 = (i8)(intptr_t)(ws+3400);
	i1 v5200 = *(i1*)(intptr_t)v5199;
	i1 v5201 = (i1)+5;
	if (v5200==v5201) goto c02_041d; else goto c02_041c;

c02_041c:;

	i8 v5202 = (i8)(intptr_t)(ws+3392);
	i8 v5203 = *(i8*)(intptr_t)v5202;
	i8 v5204 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5204)(v5203);

	goto endsub;

c02_041d:;

c02_0417:;

c02_0415:;

c02_040f:;

	i8 v5205 = (i8)(intptr_t)(ws+3400);
	i1 v5206 = *(i1*)(intptr_t)v5205;
	i1 v5207 = (i1)+18;
	if (v5206==v5207) goto c02_0426; else goto c02_0425;

c02_0426:;

	i8 v5208 = (i8)(intptr_t)(ws+1536);
	i1 v5209 = *(i1*)(intptr_t)v5208;
	i1 v5210 = (i1)+23;
	if (v5209==v5210) goto c02_0425; else goto c02_0424;

c02_0424:;

	i8 v5211 = (i8)(intptr_t)(f113_MidAsmgroupstart);
	i8 v5212;

	((void(*)(i8* /* m */))(intptr_t)v5211)(&v5212);
	i8 v5213 = (i8)(intptr_t)(f250_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5213)(v5212);

c02_0425:;

c02_041f:;

	i8 v5214 = (i8)(intptr_t)(ws+1536);
	i1 v5215 = *(i1*)(intptr_t)v5214;
	i1 v5216 = (i1)+23;
	if (v5215==v5216) goto c02_042e; else goto c02_042d;

c02_042e:;

	i8 v5217 = (i8)(intptr_t)(ws+3400);
	i1 v5218 = *(i1*)(intptr_t)v5217;
	i1 v5219 = (i1)+18;
	if (v5218==v5219) goto c02_042d; else goto c02_042c;

c02_042c:;

	i8 v5220 = (i8)(intptr_t)(f103_MidAsmgroupend);
	i8 v5221;

	((void(*)(i8* /* m */))(intptr_t)v5220)(&v5221);
	i8 v5222 = (i8)(intptr_t)(f250_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5222)(v5221);

c02_042d:;

c02_0427:;

	i8 v5223 = (i8)(intptr_t)(ws+3400);
	i1 v5224 = *(i1*)(intptr_t)v5223;
	i8 v5225 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5225 = v5224;

	i8 v5226 = (i8)(intptr_t)(ws+3392);
	i8 v5227 = *(i8*)(intptr_t)v5226;
	i8 v5228 = (i8)(intptr_t)(f250_ReallyGenerate);

	((void(*)(i8 /* rootnode */))(intptr_t)v5228)(v5227);

endsub:;
}
	void f55_PushNode(i8 /* node */);
	void f56_PopNode(i8* /* node */);
	void f55_PushNode(i8 /* node */);
	void f55_PushNode(i8 /* node */);
	void f58_Discard(i8 /* node */);

// push_and_free workspace at ws+3392 length ws+0
void f253_push_and_free(void) {

	i8 v5286 = (i8)(intptr_t)(ws+3360);
	i2 v5287 = *(i2*)(intptr_t)v5286;
	i8 v5288 = (i8)(intptr_t)(ws+3376);
	i8 v5289 = *(i8*)(intptr_t)v5288;
	*(i2*)(intptr_t)v5289 = v5287;

	i8 v5290 = (i8)(intptr_t)(ws+3362);
	i2 v5291 = *(i2*)(intptr_t)v5290;
	i8 v5292 = (i8)(intptr_t)(ws+3376);
	i8 v5293 = *(i8*)(intptr_t)v5292;
	i8 v5294 = v5293+(+2);
	*(i2*)(intptr_t)v5294 = v5291;

	i8 v5295 = (i8)(intptr_t)(ws+3364);
	i2 v5296 = *(i2*)(intptr_t)v5295;
	i8 v5297 = (i8)(intptr_t)(ws+3376);
	i8 v5298 = *(i8*)(intptr_t)v5297;
	i8 v5299 = v5298+(+4);
	*(i2*)(intptr_t)v5299 = v5296;

	i8 v5300 = (i8)+0;
	i8 v5301 = (i8)(intptr_t)(ws+3352);
	i8 v5302 = *(i8*)(intptr_t)v5301;
	i8 v5303 = v5302+(+24);
	*(i8*)(intptr_t)v5303 = v5300;

	i8 v5304 = (i8)+0;
	i8 v5305 = (i8)(intptr_t)(ws+3352);
	i8 v5306 = *(i8*)(intptr_t)v5305;
	i8 v5307 = v5306+(+32);
	*(i8*)(intptr_t)v5307 = v5304;

	i8 v5308 = (i8)(intptr_t)(ws+3376);
	i8 v5309 = *(i8*)(intptr_t)v5308;
	i8 v5310 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5310)(v5309);

	i8 v5311 = (i8)(intptr_t)(ws+3368);
	i8 v5312 = *(i8*)(intptr_t)v5311;
	i8 v5313 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5313)(v5312);

	i8 v5314 = (i8)(intptr_t)(ws+3352);
	i8 v5315 = *(i8*)(intptr_t)v5314;
	i8 v5316 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v5316)(v5315);

endsub:;
}
	void f230_AllocLabel(i2* /* label */);
	void f253_push_and_free(void);
	void f230_AllocLabel(i2* /* label */);
	void f253_push_and_free(void);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// GenerateConditional workspace at ws+3336 length ws+54
void f252_GenerateConditional(i8 p5229 /* rootnode */) {
	*(i8*)(intptr_t)(ws+3336) = p5229; /*rootnode */

	i8 v5230 = (i8)(intptr_t)(ws+224);
	i8 v5231 = *(i8*)(intptr_t)v5230;
	i8 v5232 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5232 = v5231;

	i8 v5233 = (i8)(intptr_t)(ws+3336);
	i8 v5234 = *(i8*)(intptr_t)v5233;
	i8 v5235 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v5235)(v5234);

c02_0431:;

	i8 v5236 = (i8)(intptr_t)(ws+224);
	i8 v5237 = *(i8*)(intptr_t)v5236;
	i8 v5238 = (i8)(intptr_t)(ws+3344);
	i8 v5239 = *(i8*)(intptr_t)v5238;
	if (v5237==v5239) goto c02_0434; else goto c02_0433;

c02_0433:;

	i8 v5240 = (i8)(intptr_t)(f56_PopNode);
	i8 v5241;

	((void(*)(i8* /* node */))(intptr_t)v5240)(&v5241);
	i8 v5242 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5242 = v5241;

	i8 v5243 = (i8)(intptr_t)(ws+3352);
	i8 v5244 = *(i8*)(intptr_t)v5243;
	i2 v5245 = *(i2*)(intptr_t)v5244;
	i8 v5246 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5246 = v5245;

	i8 v5247 = (i8)(intptr_t)(ws+3352);
	i8 v5248 = *(i8*)(intptr_t)v5247;
	i8 v5249 = v5248+(+2);
	i2 v5250 = *(i2*)(intptr_t)v5249;
	i8 v5251 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5251 = v5250;

	i8 v5252 = (i8)(intptr_t)(ws+3352);
	i8 v5253 = *(i8*)(intptr_t)v5252;
	i8 v5254 = v5253+(+4);
	i2 v5255 = *(i2*)(intptr_t)v5254;
	i8 v5256 = (i8)(intptr_t)(ws+3364);
	*(i2*)(intptr_t)v5256 = v5255;

	i8 v5257 = (i8)(intptr_t)(ws+3352);
	i8 v5258 = *(i8*)(intptr_t)v5257;
	i8 v5259 = v5258+(+24);
	i8 v5260 = *(i8*)(intptr_t)v5259;
	i8 v5261 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5261 = v5260;

	i8 v5262 = (i8)(intptr_t)(ws+3352);
	i8 v5263 = *(i8*)(intptr_t)v5262;
	i8 v5264 = v5263+(+32);
	i8 v5265 = *(i8*)(intptr_t)v5264;
	i8 v5266 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5266 = v5265;

	i8 v5267 = (i8)(intptr_t)(ws+3352);
	i8 v5268 = *(i8*)(intptr_t)v5267;
	i8 v5269 = v5268+(+40);
	i1 v5270 = *(i1*)(intptr_t)v5269;
	i8 v5271 = (i8)(intptr_t)(ws+3384);
	*(i1*)(intptr_t)v5271 = v5270;

	i8 v5272 = (i8)(intptr_t)(ws+3352);
	i8 v5273 = *(i8*)(intptr_t)v5272;
	i8 v5274 = v5273+(+6);
	i1 v5275 = *(i1*)(intptr_t)v5274;
	i1 v5276 = (i1)+0;
	if (v5275==v5276) goto c02_0439; else goto c02_0438;

c02_0438:;

	i8 v5277 = (i8)(intptr_t)(ws+3360);
	i2 v5278 = *(i2*)(intptr_t)v5277;
	i8 v5279 = (i8)(intptr_t)(ws+3386);
	*(i2*)(intptr_t)v5279 = v5278;

	i8 v5280 = (i8)(intptr_t)(ws+3362);
	i2 v5281 = *(i2*)(intptr_t)v5280;
	i8 v5282 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v5282 = v5281;

	i8 v5283 = (i8)(intptr_t)(ws+3386);
	i2 v5284 = *(i2*)(intptr_t)v5283;
	i8 v5285 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v5285 = v5284;

c02_0439:;

c02_0435:;


	i8 v5317 = (i8)(intptr_t)(ws+3384);
	i1 v5318 = *(i1*)(intptr_t)v5317;

	if (v5318 != +60) goto c02_043b;

	i8 v5319 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v5320;

	((void(*)(i2* /* label */))(intptr_t)v5319)(&v5320);
	i8 v5321 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v5321 = v5320;

	i8 v5322 = (i8)(intptr_t)(ws+3360);
	i2 v5323 = *(i2*)(intptr_t)v5322;
	i8 v5324 = (i8)(intptr_t)(ws+3368);
	i8 v5325 = *(i8*)(intptr_t)v5324;
	*(i2*)(intptr_t)v5325 = v5323;

	i8 v5326 = (i8)(intptr_t)(ws+3388);
	i2 v5327 = *(i2*)(intptr_t)v5326;
	i8 v5328 = (i8)(intptr_t)(ws+3368);
	i8 v5329 = *(i8*)(intptr_t)v5328;
	i8 v5330 = v5329+(+2);
	*(i2*)(intptr_t)v5330 = v5327;

	i8 v5331 = (i8)(intptr_t)(ws+3388);
	i2 v5332 = *(i2*)(intptr_t)v5331;
	i8 v5333 = (i8)(intptr_t)(ws+3368);
	i8 v5334 = *(i8*)(intptr_t)v5333;
	i8 v5335 = v5334+(+4);
	*(i2*)(intptr_t)v5335 = v5332;

	i8 v5336 = (i8)(intptr_t)(f253_push_and_free);

	((void(*)(void))(intptr_t)v5336)();

	goto c02_043a;

c02_043b:;

	if (v5318 != +59) goto c02_043c;

	i8 v5337 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v5338;

	((void(*)(i2* /* label */))(intptr_t)v5337)(&v5338);
	i8 v5339 = (i8)(intptr_t)(ws+3388);
	*(i2*)(intptr_t)v5339 = v5338;

	i8 v5340 = (i8)(intptr_t)(ws+3388);
	i2 v5341 = *(i2*)(intptr_t)v5340;
	i8 v5342 = (i8)(intptr_t)(ws+3368);
	i8 v5343 = *(i8*)(intptr_t)v5342;
	*(i2*)(intptr_t)v5343 = v5341;

	i8 v5344 = (i8)(intptr_t)(ws+3362);
	i2 v5345 = *(i2*)(intptr_t)v5344;
	i8 v5346 = (i8)(intptr_t)(ws+3368);
	i8 v5347 = *(i8*)(intptr_t)v5346;
	i8 v5348 = v5347+(+2);
	*(i2*)(intptr_t)v5348 = v5345;

	i8 v5349 = (i8)(intptr_t)(ws+3388);
	i2 v5350 = *(i2*)(intptr_t)v5349;
	i8 v5351 = (i8)(intptr_t)(ws+3368);
	i8 v5352 = *(i8*)(intptr_t)v5351;
	i8 v5353 = v5352+(+4);
	*(i2*)(intptr_t)v5353 = v5350;

	i8 v5354 = (i8)(intptr_t)(f253_push_and_free);

	((void(*)(void))(intptr_t)v5354)();

	goto c02_043a;

c02_043c:;

	i8 v5355 = (i8)(intptr_t)(ws+3360);
	i2 v5356 = *(i2*)(intptr_t)v5355;
	i8 v5357 = (i8)(intptr_t)(ws+3352);
	i8 v5358 = *(i8*)(intptr_t)v5357;
	*(i2*)(intptr_t)v5358 = v5356;

	i8 v5359 = (i8)(intptr_t)(ws+3362);
	i2 v5360 = *(i2*)(intptr_t)v5359;
	i8 v5361 = (i8)(intptr_t)(ws+3352);
	i8 v5362 = *(i8*)(intptr_t)v5361;
	i8 v5363 = v5362+(+2);
	*(i2*)(intptr_t)v5363 = v5360;

	i8 v5364 = (i8)(intptr_t)(ws+3352);
	i8 v5365 = *(i8*)(intptr_t)v5364;
	i8 v5366 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5366)(v5365);

	i8 v5367 = (i8)(intptr_t)(ws+3364);
	i2 v5368 = *(i2*)(intptr_t)v5367;
	i8 v5369 = (i8)(intptr_t)(f132_MidLabel);
	i8 v5370;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v5369)(&v5370, v5368);
	i8 v5371 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v5371)(v5370);

c02_043a:;


	goto c02_0431;

c02_0434:;

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f236_ArchInitVariable(i8 /* symbol */);

// InitVariable workspace at ws+3344 length ws+24
void f254_InitVariable(i8 p5372 /* type */, i8 p5373 /* symbol */, i8 p5374 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5374; /*subr */
	*(i8*)(intptr_t)(ws+3352) = p5373; /*symbol */
	*(i8*)(intptr_t)(ws+3360) = p5372; /*type */

	i8 v5375 = (i8)(intptr_t)(ws+3360);
	i8 v5376 = *(i8*)(intptr_t)v5375;
	i8 v5377 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5377)(v5376);

	i1 v5378 = (i1)+28;
	i8 v5379 = (i8)(intptr_t)(ws+3352);
	i8 v5380 = *(i8*)(intptr_t)v5379;
	i8 v5381 = v5380+(+32);
	*(i1*)(intptr_t)v5381 = v5378;

	i8 v5382 = (i8)+27;
	i8 v5383 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v5384;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5383)(&v5384, v5382);
	i8 v5385 = (i8)(intptr_t)(ws+3352);
	i8 v5386 = *(i8*)(intptr_t)v5385;
	*(i8*)(intptr_t)v5386 = v5384;

	i8 v5387 = (i8)(intptr_t)(ws+3360);
	i8 v5388 = *(i8*)(intptr_t)v5387;
	i8 v5389 = (i8)(intptr_t)(ws+3352);
	i8 v5390 = *(i8*)(intptr_t)v5389;
	i8 v5391 = *(i8*)(intptr_t)v5390;
	*(i8*)(intptr_t)v5391 = v5388;

	i8 v5392 = (i8)(intptr_t)(ws+3344);
	i8 v5393 = *(i8*)(intptr_t)v5392;
	i8 v5394 = (i8)(intptr_t)(ws+3352);
	i8 v5395 = *(i8*)(intptr_t)v5394;
	i8 v5396 = *(i8*)(intptr_t)v5395;
	i8 v5397 = v5396+(+8);
	*(i8*)(intptr_t)v5397 = v5393;

	i8 v5398 = (i8)(intptr_t)(ws+3352);
	i8 v5399 = *(i8*)(intptr_t)v5398;
	i8 v5400 = (i8)(intptr_t)(f236_ArchInitVariable);

	((void(*)(i8 /* symbol */))(intptr_t)v5400)(v5399);

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f65_StrDupBraced(i8* /* news */, i8 /* s */);
	void f219_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakePointerType workspace at ws+3376 length ws+16
void f255_MakePointerType(i8* p5401 /* ptrtype */, i8 p5402 /* type */) {
	*(i8*)(intptr_t)(ws+3376) = p5402; /*type */

	i8 v5403 = (i8)(intptr_t)(ws+3376);
	i8 v5404 = *(i8*)(intptr_t)v5403;
	i8 v5405 = v5404+(+40);
	i8 v5406 = *(i8*)(intptr_t)v5405;
	i8 v5407 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5407 = v5406;

	i8 v5408 = (i8)(intptr_t)(ws+3384);
	i8 v5409 = *(i8*)(intptr_t)v5408;
	i8 v5410 = (i8)+0;
	if (v5409==v5410) goto c02_0440; else goto c02_0441;

c02_0440:;

	i8 v5411 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v5412;

	((void(*)(i8* /* type */))(intptr_t)v5411)(&v5412);
	i8 v5413 = (i8)(intptr_t)(ws+3384);
	*(i8*)(intptr_t)v5413 = v5412;

	i1 v5414 = (i1)+3;
	i8 v5415 = (i8)(intptr_t)(ws+3384);
	i8 v5416 = *(i8*)(intptr_t)v5415;
	i8 v5417 = v5416+(+52);
	*(i1*)(intptr_t)v5417 = v5414;

	i8 v5418 = (i8)(intptr_t)(ws+1528);
	i8 v5419 = *(i8*)(intptr_t)v5418;
	i8 v5420 = v5419+(+48);
	i2 v5421 = *(i2*)(intptr_t)v5420;
	i8 v5422 = (i8)(intptr_t)(ws+3384);
	i8 v5423 = *(i8*)(intptr_t)v5422;
	i8 v5424 = v5423+(+48);
	*(i2*)(intptr_t)v5424 = v5421;

	i8 v5425 = (i8)(intptr_t)(ws+1528);
	i8 v5426 = *(i8*)(intptr_t)v5425;
	i8 v5427 = v5426+(+53);
	i1 v5428 = *(i1*)(intptr_t)v5427;
	i8 v5429 = (i8)(intptr_t)(ws+3384);
	i8 v5430 = *(i8*)(intptr_t)v5429;
	i8 v5431 = v5430+(+53);
	*(i1*)(intptr_t)v5431 = v5428;

	i8 v5432 = (i8)(intptr_t)(ws+1528);
	i8 v5433 = *(i8*)(intptr_t)v5432;
	i8 v5434 = v5433+(+50);
	i2 v5435 = *(i2*)(intptr_t)v5434;
	i8 v5436 = (i8)(intptr_t)(ws+3384);
	i8 v5437 = *(i8*)(intptr_t)v5436;
	i8 v5438 = v5437+(+50);
	*(i2*)(intptr_t)v5438 = v5435;

	i8 v5439 = (i8)(intptr_t)(ws+3376);
	i8 v5440 = *(i8*)(intptr_t)v5439;
	i8 v5441 = (i8)(intptr_t)(ws+3384);
	i8 v5442 = *(i8*)(intptr_t)v5441;
	*(i8*)(intptr_t)v5442 = v5440;

	i8 v5443 = (i8)(intptr_t)(ws+3384);
	i8 v5444 = *(i8*)(intptr_t)v5443;
	i8 v5445 = (i8)(intptr_t)(ws+3376);
	i8 v5446 = *(i8*)(intptr_t)v5445;
	i8 v5447 = v5446+(+40);
	*(i8*)(intptr_t)v5447 = v5444;

	i8 v5448 = (i8)(intptr_t)(ws+3376);
	i8 v5449 = *(i8*)(intptr_t)v5448;
	i8 v5450 = v5449+(+32);
	i8 v5451 = *(i8*)(intptr_t)v5450;
	i8 v5452 = v5451+(+16);
	i8 v5453 = *(i8*)(intptr_t)v5452;
	i8 v5454 = (i8)(intptr_t)(ws+3384);
	i8 v5455 = *(i8*)(intptr_t)v5454;
	i8 v5456 = (i8)(intptr_t)(ws+3376);
	i8 v5457 = *(i8*)(intptr_t)v5456;
	i8 v5458 = v5457+(+32);
	i8 v5459 = *(i8*)(intptr_t)v5458;
	i8 v5460 = v5459+(+8);
	i8 v5461 = *(i8*)(intptr_t)v5460;
	i8 v5462 = (i8)(intptr_t)(f65_StrDupBraced);
	i8 v5463;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5462)(&v5463, v5461);
	i8 v5464 = (i8)(intptr_t)(f219_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5464)(v5463, v5455, v5453);

c02_0441:;

c02_043d:;

endsub:;
	*p5401 = *(i8*)(intptr_t)(ws+3384);
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f61_AllocNewType(i8* /* type */);
	void f235_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f66_StrDupArrayed(i8* /* news */, i2 /* i */, i8 /* s */);
	void f219_AddTypeToNamespace(i8 /* name */, i8 /* type */, i8 /* namespace */);

// MakeArrayType workspace at ws+3328 length ws+26
void f256_MakeArrayType(i8* p5465 /* arraytype */, i2 p5466 /* size */, i8 p5467 /* type */) {
	*(i8*)(intptr_t)(ws+3328) = p5467; /*type */
	*(i2*)(intptr_t)(ws+3336) = p5466; /*size */

	i8 v5468 = (i8)(intptr_t)(ws+3328);
	i8 v5469 = *(i8*)(intptr_t)v5468;
	i8 v5470 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v5470)(v5469);

	i8 v5471 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v5472;

	((void(*)(i8* /* type */))(intptr_t)v5471)(&v5472);
	i8 v5473 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v5473 = v5472;

	i1 v5474 = (i1)+4;
	i8 v5475 = (i8)(intptr_t)(ws+3344);
	i8 v5476 = *(i8*)(intptr_t)v5475;
	i8 v5477 = v5476+(+52);
	*(i1*)(intptr_t)v5477 = v5474;

	i2 v5478 = (i2)+0;
	i8 v5479 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5479 = v5478;

	i2 v5480 = (i2)+0;
	i8 v5481 = (i8)(intptr_t)(ws+3336);
	i2 v5482 = *(i2*)(intptr_t)v5481;
	if (v5480<v5482) goto c02_0445; else goto c02_0446;

c02_0445:;

	i8 v5483 = (i8)(intptr_t)(ws+3328);
	i8 v5484 = *(i8*)(intptr_t)v5483;
	i8 v5485 = v5484+(+50);
	i2 v5486 = *(i2*)(intptr_t)v5485;
	i8 v5487 = (i8)(intptr_t)(ws+3336);
	i2 v5488 = *(i2*)(intptr_t)v5487;
	i2 v5489 = v5488+(-1);
	i2 v5490 = v5486*v5489;
	i8 v5491 = (i8)(intptr_t)(ws+3328);
	i8 v5492 = *(i8*)(intptr_t)v5491;
	i8 v5493 = v5492+(+48);
	i2 v5494 = *(i2*)(intptr_t)v5493;
	i2 v5495 = v5490+v5494;
	i8 v5496 = (i8)(intptr_t)(ws+3352);
	*(i2*)(intptr_t)v5496 = v5495;

c02_0446:;

c02_0442:;

	i8 v5497 = (i8)(intptr_t)(ws+3352);
	i2 v5498 = *(i2*)(intptr_t)v5497;
	i8 v5499 = (i8)(intptr_t)(ws+3344);
	i8 v5500 = *(i8*)(intptr_t)v5499;
	i8 v5501 = v5500+(+48);
	*(i2*)(intptr_t)v5501 = v5498;

	i8 v5502 = (i8)(intptr_t)(ws+3328);
	i8 v5503 = *(i8*)(intptr_t)v5502;
	i8 v5504 = v5503+(+53);
	i1 v5505 = *(i1*)(intptr_t)v5504;
	i8 v5506 = (i8)(intptr_t)(ws+3344);
	i8 v5507 = *(i8*)(intptr_t)v5506;
	i8 v5508 = v5507+(+53);
	*(i1*)(intptr_t)v5508 = v5505;

	i8 v5509 = (i8)(intptr_t)(ws+3328);
	i8 v5510 = *(i8*)(intptr_t)v5509;
	i8 v5511 = v5510+(+50);
	i2 v5512 = *(i2*)(intptr_t)v5511;
	i8 v5513 = (i8)(intptr_t)(ws+3336);
	i2 v5514 = *(i2*)(intptr_t)v5513;
	i2 v5515 = v5512*v5514;
	i8 v5516 = (i8)(intptr_t)(ws+3344);
	i8 v5517 = *(i8*)(intptr_t)v5516;
	i8 v5518 = v5517+(+50);
	*(i2*)(intptr_t)v5518 = v5515;

	i8 v5519 = (i8)(intptr_t)(ws+3328);
	i8 v5520 = *(i8*)(intptr_t)v5519;
	i8 v5521 = (i8)(intptr_t)(ws+3344);
	i8 v5522 = *(i8*)(intptr_t)v5521;
	*(i8*)(intptr_t)v5522 = v5520;

	i8 v5523 = (i8)(intptr_t)(ws+3336);
	i2 v5524 = *(i2*)(intptr_t)v5523;
	i8 v5525 = (i8)(intptr_t)(ws+3344);
	i8 v5526 = *(i8*)(intptr_t)v5525;
	i8 v5527 = v5526+(+8);
	*(i2*)(intptr_t)v5527 = v5524;

	i4 v5528 = (i4)+0;
	i8 v5529 = (i8)(intptr_t)(ws+3336);
	i2 v5530 = *(i2*)(intptr_t)v5529;
	i2 v5531 = v5530+(-1);
	i4 v5532 = v5531;
	i8 v5533 = (i8)(intptr_t)(f235_ArchGuessIntType);
	i8 v5534;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v5533)(&v5534, v5532, v5528);
	i8 v5535 = (i8)(intptr_t)(ws+3344);
	i8 v5536 = *(i8*)(intptr_t)v5535;
	i8 v5537 = v5536+(+16);
	*(i8*)(intptr_t)v5537 = v5534;

	i8 v5538 = (i8)(intptr_t)(ws+3328);
	i8 v5539 = *(i8*)(intptr_t)v5538;
	i8 v5540 = v5539+(+32);
	i8 v5541 = *(i8*)(intptr_t)v5540;
	i8 v5542 = v5541+(+16);
	i8 v5543 = *(i8*)(intptr_t)v5542;
	i8 v5544 = (i8)(intptr_t)(ws+3344);
	i8 v5545 = *(i8*)(intptr_t)v5544;
	i8 v5546 = (i8)(intptr_t)(ws+3328);
	i8 v5547 = *(i8*)(intptr_t)v5546;
	i8 v5548 = v5547+(+32);
	i8 v5549 = *(i8*)(intptr_t)v5548;
	i8 v5550 = v5549+(+8);
	i8 v5551 = *(i8*)(intptr_t)v5550;
	i8 v5552 = (i8)(intptr_t)(ws+3336);
	i2 v5553 = *(i2*)(intptr_t)v5552;
	i8 v5554 = (i8)(intptr_t)(f66_StrDupArrayed);
	i8 v5555;

	((void(*)(i8* /* news */, i2 /* i */, i8 /* s */))(intptr_t)v5554)(&v5555, v5553, v5551);
	i8 v5556 = (i8)(intptr_t)(f219_AddTypeToNamespace);

	((void(*)(i8 /* name */, i8 /* type */, i8 /* namespace */))(intptr_t)v5556)(v5555, v5545, v5543);

endsub:;
	*p5465 = *(i8*)(intptr_t)(ws+3344);
}

// QueueNamespace workspace at ws+3384 length ws+16
void f258_QueueNamespace(i8 p5560 /* namespace */) {
	*(i8*)(intptr_t)(ws+3384) = p5560; /*namespace */

c02_0449:;

	i8 v5561 = (i8)(intptr_t)(ws+3384);
	i8 v5562 = *(i8*)(intptr_t)v5561;
	i8 v5563 = *(i8*)(intptr_t)v5562;
	i8 v5564 = (i8)+0;
	if (v5563==v5564) goto c02_044c; else goto c02_044b;

c02_044b:;

	i8 v5565 = (i8)(intptr_t)(ws+3384);
	i8 v5566 = *(i8*)(intptr_t)v5565;
	i8 v5567 = *(i8*)(intptr_t)v5566;
	i8 v5568 = (i8)(intptr_t)(ws+3392);
	*(i8*)(intptr_t)v5568 = v5567;

	i8 v5569 = (i8)(intptr_t)(ws+3392);
	i8 v5570 = *(i8*)(intptr_t)v5569;
	i8 v5571 = v5570+(+24);
	i8 v5572 = *(i8*)(intptr_t)v5571;
	i8 v5573 = (i8)(intptr_t)(ws+3384);
	i8 v5574 = *(i8*)(intptr_t)v5573;
	*(i8*)(intptr_t)v5574 = v5572;

	i8 v5575 = (i8)(intptr_t)(ws+3352);
	i8 v5576 = *(i8*)(intptr_t)v5575;
	i8 v5577 = (i8)(intptr_t)(ws+3392);
	i8 v5578 = *(i8*)(intptr_t)v5577;
	i8 v5579 = v5578+(+24);
	*(i8*)(intptr_t)v5579 = v5576;

	i8 v5580 = (i8)(intptr_t)(ws+3392);
	i8 v5581 = *(i8*)(intptr_t)v5580;
	i8 v5582 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5582 = v5581;

	goto c02_0449;

c02_044c:;

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
void f257_DestructSubroutineContents(i8 p5557 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5557; /*subr */

	i8 v5558 = (i8)+0;
	i8 v5559 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5559 = v5558;


	i8 v5583 = (i8)(intptr_t)(ws+3344);
	i8 v5584 = *(i8*)(intptr_t)v5583;
	i8 v5585 = v5584+(+81);
	i1 v5586 = *(i1*)(intptr_t)v5585;
	i1 v5587 = (i1)+0;
	if (v5586==v5587) goto c02_0451; else goto c02_0450;

c02_0450:;

	i8 v5588 = (i8)(intptr_t)(ws+3344);
	i8 v5589 = *(i8*)(intptr_t)v5588;
	i8 v5590 = (i8)(intptr_t)(ws+3344);
	i8 v5591 = *(i8*)(intptr_t)v5590;
	i8 v5592 = v5591+(+81);
	i1 v5593 = *(i1*)(intptr_t)v5592;
	i1 v5594 = v5593+(-1);
	i8 v5595 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v5596;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5595)(&v5596, v5594, v5589);
	i8 v5597 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5597 = v5596;

	goto c02_044d;

c02_0451:;

	i8 v5598 = (i8)(intptr_t)(ws+3344);
	i8 v5599 = *(i8*)(intptr_t)v5598;
	i8 v5600 = v5599+(+80);
	i1 v5601 = *(i1*)(intptr_t)v5600;
	i1 v5602 = (i1)+0;
	if (v5601==v5602) goto c02_0455; else goto c02_0454;

c02_0454:;

	i8 v5603 = (i8)(intptr_t)(ws+3344);
	i8 v5604 = *(i8*)(intptr_t)v5603;
	i8 v5605 = (i8)(intptr_t)(ws+3344);
	i8 v5606 = *(i8*)(intptr_t)v5605;
	i8 v5607 = v5606+(+80);
	i1 v5608 = *(i1*)(intptr_t)v5607;
	i1 v5609 = v5608+(-1);
	i8 v5610 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v5611;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v5610)(&v5611, v5609, v5604);
	i8 v5612 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5612 = v5611;

	goto c02_044d;

c02_0455:;

	i8 v5613 = (i8)+0;
	i8 v5614 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5614 = v5613;

c02_044d:;

	i8 v5615 = (i8)(intptr_t)(ws+3344);
	i8 v5616 = *(i8*)(intptr_t)v5615;
	i8 v5617 = v5616+(+16);
	i8 v5618 = *(i8*)(intptr_t)v5617;
	i8 v5619 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5619 = v5618;

	i8 v5620 = (i8)(intptr_t)(ws+3360);
	i8 v5621 = *(i8*)(intptr_t)v5620;
	i8 v5622 = (i8)+0;
	if (v5621==v5622) goto c02_045a; else goto c02_0459;

c02_0459:;

	i8 v5623 = (i8)(intptr_t)(ws+3360);
	i8 v5624 = *(i8*)(intptr_t)v5623;
	i8 v5625 = v5624+(+24);
	i8 v5626 = *(i8*)(intptr_t)v5625;
	i8 v5627 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5627 = v5626;

c02_045a:;

c02_0456:;

c02_045d:;

	i8 v5628 = (i8)(intptr_t)(ws+3352);
	i8 v5629 = *(i8*)(intptr_t)v5628;
	i8 v5630 = (i8)+0;
	if (v5629==v5630) goto c02_0460; else goto c02_045f;

c02_045f:;

	i8 v5631 = (i8)(intptr_t)(ws+3352);
	i8 v5632 = *(i8*)(intptr_t)v5631;
	i8 v5633 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v5633 = v5632;

	i8 v5634 = (i8)(intptr_t)(ws+3352);
	i8 v5635 = *(i8*)(intptr_t)v5634;
	i8 v5636 = v5635+(+24);
	i8 v5637 = *(i8*)(intptr_t)v5636;
	i8 v5638 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5638 = v5637;

	i8 v5639 = (i8)(intptr_t)(ws+3368);
	i8 v5640 = *(i8*)(intptr_t)v5639;
	i8 v5641 = v5640+(+32);
	i1 v5642 = *(i1*)(intptr_t)v5641;

	if (v5642 != +30) goto c02_0462;

	i8 v5643 = (i8)(intptr_t)(ws+3368);
	i8 v5644 = *(i8*)(intptr_t)v5643;
	i8 v5645 = *(i8*)(intptr_t)v5644;
	i8 v5646 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v5646 = v5645;

	i8 v5647 = (i8)(intptr_t)(ws+3376);
	i8 v5648 = *(i8*)(intptr_t)v5647;
	i8 v5649 = v5648+(+52);
	i1 v5650 = *(i1*)(intptr_t)v5649;

	if (v5650 != +5) goto c02_0464;

	i8 v5651 = (i8)(intptr_t)(ws+3376);
	i8 v5652 = *(i8*)(intptr_t)v5651;
	i8 v5653 = (i8)(intptr_t)(f258_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5653)(v5652);

	goto c02_0463;

c02_0464:;

	if (v5650 != +6) goto c02_0465;

	i8 v5654 = (i8)(intptr_t)(ws+3376);
	i8 v5655 = *(i8*)(intptr_t)v5654;
	i8 v5656 = *(i8*)(intptr_t)v5655;
	i8 v5657 = v5656+(+16);
	i8 v5658 = (i8)(intptr_t)(f258_QueueNamespace);

	((void(*)(i8 /* namespace */))(intptr_t)v5658)(v5657);

	i8 v5659 = (i8)(intptr_t)(ws+3376);
	i8 v5660 = *(i8*)(intptr_t)v5659;
	i8 v5661 = *(i8*)(intptr_t)v5660;
	i8 v5662 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v5662)(v5661);

c02_0465:;

c02_0463:;


	i8 v5663 = (i8)(intptr_t)(ws+3376);
	i8 v5664 = *(i8*)(intptr_t)v5663;
	i8 v5665 = (i8)(intptr_t)(f62_FreeType);

	((void(*)(i8 /* type */))(intptr_t)v5665)(v5664);

	goto c02_0461;

c02_0462:;

	if (v5642 != +28) goto c02_0466;

	i8 v5666 = (i8)(intptr_t)(ws+3368);
	i8 v5667 = *(i8*)(intptr_t)v5666;
	i8 v5668 = *(i8*)(intptr_t)v5667;
	i8 v5669 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v5669)(v5668);

c02_0466:;

c02_0461:;


	i8 v5670 = (i8)(intptr_t)(ws+3368);
	i8 v5671 = *(i8*)(intptr_t)v5670;
	i8 v5672 = v5671+(+8);
	i8 v5673 = *(i8*)(intptr_t)v5672;
	i8 v5674 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v5674)(v5673);

	i8 v5675 = (i8)(intptr_t)(ws+3368);
	i8 v5676 = *(i8*)(intptr_t)v5675;
	i8 v5677 = (i8)(intptr_t)(f60_FreeSymbol);

	((void(*)(i8 /* symbol */))(intptr_t)v5677)(v5676);

	goto c02_045d;

c02_0460:;

	i8 v5678 = (i8)(intptr_t)(ws+3360);
	i8 v5679 = *(i8*)(intptr_t)v5678;
	i8 v5680 = (i8)+0;
	if (v5679==v5680) goto c02_046b; else goto c02_046a;

c02_046a:;

	i8 v5681 = (i8)+0;
	i8 v5682 = (i8)(intptr_t)(ws+3360);
	i8 v5683 = *(i8*)(intptr_t)v5682;
	i8 v5684 = v5683+(+24);
	*(i8*)(intptr_t)v5684 = v5681;

	goto c02_0467;

c02_046b:;

	i8 v5685 = (i8)+0;
	i8 v5686 = (i8)(intptr_t)(ws+3344);
	i8 v5687 = *(i8*)(intptr_t)v5686;
	i8 v5688 = v5687+(+16);
	*(i8*)(intptr_t)v5688 = v5685;

c02_0467:;

	i8 v5689 = (i8)(intptr_t)(ws+3360);
	i8 v5690 = *(i8*)(intptr_t)v5689;
	i8 v5691 = (i8)(intptr_t)(ws+3344);
	i8 v5692 = *(i8*)(intptr_t)v5691;
	i8 v5693 = v5692+(+24);
	*(i8*)(intptr_t)v5693 = v5690;

endsub:;
}
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);

// CopyParameterList workspace at ws+3336 length ws+32
void f259_CopyParameterList(i8 p5694 /* subr */, i8 p5695 /* param */) {
	*(i8*)(intptr_t)(ws+3336) = p5695; /*param */
	*(i8*)(intptr_t)(ws+3344) = p5694; /*subr */

	i8 v5696 = (i8)+0;
	i8 v5697 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5697 = v5696;

c02_046e:;

	i8 v5698 = (i8)(intptr_t)(ws+3336);
	i8 v5699 = *(i8*)(intptr_t)v5698;
	i8 v5700 = (i8)+0;
	if (v5699==v5700) goto c02_0471; else goto c02_0470;

c02_0470:;

	i8 v5701 = (i8)(intptr_t)(ws+3344);
	i8 v5702 = *(i8*)(intptr_t)v5701;
	i8 v5703 = v5702+(+16);
	i8 v5704 = (i8)(intptr_t)(ws+3336);
	i8 v5705 = *(i8*)(intptr_t)v5704;
	i8 v5706 = v5705+(+8);
	i8 v5707 = *(i8*)(intptr_t)v5706;
	i8 v5708 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v5709;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v5708)(&v5709, v5707);
	i8 v5710 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v5711;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v5710)(&v5711, v5709, v5703);
	i8 v5712 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v5712 = v5711;

	i1 v5713 = (i1)+28;
	i8 v5714 = (i8)(intptr_t)(ws+3360);
	i8 v5715 = *(i8*)(intptr_t)v5714;
	i8 v5716 = v5715+(+32);
	*(i1*)(intptr_t)v5716 = v5713;

	i8 v5717 = (i8)+27;
	i8 v5718 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v5719;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5718)(&v5719, v5717);
	i8 v5720 = (i8)(intptr_t)(ws+3360);
	i8 v5721 = *(i8*)(intptr_t)v5720;
	*(i8*)(intptr_t)v5721 = v5719;

	i8 v5722 = (i8)(intptr_t)(ws+3336);
	i8 v5723 = *(i8*)(intptr_t)v5722;
	i8 v5724 = *(i8*)(intptr_t)v5723;
	i8 v5725 = *(i8*)(intptr_t)v5724;
	i8 v5726 = (i8)(intptr_t)(ws+3360);
	i8 v5727 = *(i8*)(intptr_t)v5726;
	i8 v5728 = *(i8*)(intptr_t)v5727;
	*(i8*)(intptr_t)v5728 = v5725;

	i8 v5729 = (i8)(intptr_t)(ws+3336);
	i8 v5730 = *(i8*)(intptr_t)v5729;
	i8 v5731 = *(i8*)(intptr_t)v5730;
	i8 v5732 = v5731+(+8);
	i8 v5733 = *(i8*)(intptr_t)v5732;
	i8 v5734 = (i8)(intptr_t)(ws+3360);
	i8 v5735 = *(i8*)(intptr_t)v5734;
	i8 v5736 = *(i8*)(intptr_t)v5735;
	i8 v5737 = v5736+(+8);
	*(i8*)(intptr_t)v5737 = v5733;

	i8 v5738 = (i8)(intptr_t)(ws+3336);
	i8 v5739 = *(i8*)(intptr_t)v5738;
	i8 v5740 = *(i8*)(intptr_t)v5739;
	i8 v5741 = v5740+(+26);
	i1 v5742 = *(i1*)(intptr_t)v5741;
	i8 v5743 = (i8)(intptr_t)(ws+3360);
	i8 v5744 = *(i8*)(intptr_t)v5743;
	i8 v5745 = *(i8*)(intptr_t)v5744;
	i8 v5746 = v5745+(+26);
	*(i1*)(intptr_t)v5746 = v5742;

	i8 v5747 = (i8)(intptr_t)(ws+3336);
	i8 v5748 = *(i8*)(intptr_t)v5747;
	i8 v5749 = *(i8*)(intptr_t)v5748;
	i8 v5750 = v5749+(+24);
	i2 v5751 = *(i2*)(intptr_t)v5750;
	i8 v5752 = (i8)(intptr_t)(ws+3360);
	i8 v5753 = *(i8*)(intptr_t)v5752;
	i8 v5754 = *(i8*)(intptr_t)v5753;
	i8 v5755 = v5754+(+24);
	*(i2*)(intptr_t)v5755 = v5751;

	i8 v5756 = (i8)(intptr_t)(ws+3352);
	i8 v5757 = *(i8*)(intptr_t)v5756;
	i8 v5758 = (i8)+0;
	if (v5757==v5758) goto c02_0476; else goto c02_0475;

c02_0475:;

	i8 v5759 = (i8)(intptr_t)(ws+3360);
	i8 v5760 = *(i8*)(intptr_t)v5759;
	i8 v5761 = (i8)(intptr_t)(ws+3352);
	i8 v5762 = *(i8*)(intptr_t)v5761;
	i8 v5763 = *(i8*)(intptr_t)v5762;
	i8 v5764 = v5763+(+16);
	*(i8*)(intptr_t)v5764 = v5760;

c02_0476:;

c02_0472:;

	i8 v5765 = (i8)(intptr_t)(ws+3360);
	i8 v5766 = *(i8*)(intptr_t)v5765;
	i8 v5767 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v5767 = v5766;

	i8 v5768 = (i8)(intptr_t)(ws+3336);
	i8 v5769 = *(i8*)(intptr_t)v5768;
	i8 v5770 = *(i8*)(intptr_t)v5769;
	i8 v5771 = v5770+(+16);
	i8 v5772 = *(i8*)(intptr_t)v5771;
	i8 v5773 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v5773 = v5772;

	goto c02_046e;

c02_0471:;

endsub:;
}
	void f61_AllocNewType(i8* /* type */);
	void f59_AllocNewSymbol(i8* /* symbol */);
const i1 c02_s0109[] = { 0x5f,0x5f,0x6d,0x61,0x69,0x6e,0 };
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f214_AddToNamespace(i8 /* symbol */, i8 /* namespace */);

// CreateMainSubroutine workspace at ws+3208 length ws+16
void f260_CreateMainSubroutine(void) {

	i8 v5774 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v5775;

	((void(*)(i8* /* type */))(intptr_t)v5774)(&v5775);
	i8 v5776 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v5776 = v5775;

	i1 v5777 = (i1)+6;
	i8 v5778 = (i8)(intptr_t)(ws+3208);
	i8 v5779 = *(i8*)(intptr_t)v5778;
	i8 v5780 = v5779+(+52);
	*(i1*)(intptr_t)v5780 = v5777;

	i8 v5781 = (i8)(intptr_t)(f59_AllocNewSymbol);
	i8 v5782;

	((void(*)(i8* /* symbol */))(intptr_t)v5781)(&v5782);
	i8 v5783 = (i8)(intptr_t)(ws+3216);
	*(i8*)(intptr_t)v5783 = v5782;

	i1 v5784 = (i1)+30;
	i8 v5785 = (i8)(intptr_t)(ws+3216);
	i8 v5786 = *(i8*)(intptr_t)v5785;
	i8 v5787 = v5786+(+32);
	*(i1*)(intptr_t)v5787 = v5784;

	i8 v5788 = (i8)(intptr_t)c02_s0109;
	i8 v5789 = (i8)(intptr_t)(ws+3216);
	i8 v5790 = *(i8*)(intptr_t)v5789;
	i8 v5791 = v5790+(+8);
	*(i8*)(intptr_t)v5791 = v5788;

	i8 v5792 = (i8)(intptr_t)(ws+3208);
	i8 v5793 = *(i8*)(intptr_t)v5792;
	i8 v5794 = (i8)(intptr_t)(ws+3216);
	i8 v5795 = *(i8*)(intptr_t)v5794;
	*(i8*)(intptr_t)v5795 = v5793;

	i8 v5796 = (i8)(intptr_t)(ws+3216);
	i8 v5797 = *(i8*)(intptr_t)v5796;
	i8 v5798 = (i8)(intptr_t)(ws+3208);
	i8 v5799 = *(i8*)(intptr_t)v5798;
	i8 v5800 = v5799+(+32);
	*(i8*)(intptr_t)v5800 = v5797;

	i8 v5801 = (i8)+83;
	i8 v5802 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v5803;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v5802)(&v5803, v5801);
	i8 v5804 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v5804 = v5803;

	i8 v5805 = (i8)(intptr_t)(ws+3216);
	i8 v5806 = *(i8*)(intptr_t)v5805;
	i8 v5807 = (i8)(intptr_t)(ws+40);
	i8 v5808 = *(i8*)(intptr_t)v5807;
	*(i8*)(intptr_t)v5808 = v5806;

	i8 v5809 = (i8)(intptr_t)(ws+3208);
	i8 v5810 = *(i8*)(intptr_t)v5809;
	i8 v5811 = (i8)(intptr_t)(ws+40);
	i8 v5812 = *(i8*)(intptr_t)v5811;
	i8 v5813 = v5812+(+40);
	*(i8*)(intptr_t)v5813 = v5810;

	i8 v5814 = (i8)(intptr_t)(ws+40);
	i8 v5815 = *(i8*)(intptr_t)v5814;
	i8 v5816 = (i8)(intptr_t)(ws+40);
	i8 v5817 = *(i8*)(intptr_t)v5816;
	i8 v5818 = v5817+(+48);
	*(i8*)(intptr_t)v5818 = v5815;

	i8 v5819 = (i8)(intptr_t)(ws+40);
	i8 v5820 = *(i8*)(intptr_t)v5819;
	i8 v5821 = (i8)(intptr_t)(ws+3208);
	i8 v5822 = *(i8*)(intptr_t)v5821;
	*(i8*)(intptr_t)v5822 = v5820;

	i8 v5823 = (i8)(intptr_t)(ws+40);
	i8 v5824 = *(i8*)(intptr_t)v5823;
	i8 v5825 = v5824+(+16);
	i8 v5826 = (i8)(intptr_t)(ws+3216);
	i8 v5827 = *(i8*)(intptr_t)v5826;
	i8 v5828 = (i8)(intptr_t)(f214_AddToNamespace);

	((void(*)(i8 /* symbol */, i8 /* namespace */))(intptr_t)v5828)(v5827, v5825);

endsub:;
}
	void f198_EmitterDeclareWorkspace(i2 /* workspace */, i1 /* wid */, i8 /* subr */);

// ReportWorkspaces workspace at ws+3344 length ws+12
void f261_ReportWorkspaces(i8 p5829 /* subr */) {
	*(i8*)(intptr_t)(ws+3344) = p5829; /*subr */

	i1 v5830 = (i1)+0;
	i8 v5831 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v5831 = v5830;

c02_0479:;

	i8 v5832 = (i8)(intptr_t)(ws+3352);
	i1 v5833 = *(i1*)(intptr_t)v5832;
	i1 v5834 = (i1)+4;
	if (v5833==v5834) goto c02_047c; else goto c02_047b;

c02_047b:;

	i8 v5835 = (i8)(intptr_t)(ws+3344);
	i8 v5836 = *(i8*)(intptr_t)v5835;
	i8 v5837 = v5836+(+58);
	i8 v5838 = (i8)(intptr_t)(ws+3352);
	i1 v5839 = *(i1*)(intptr_t)v5838;
	i8 v5840 = v5839;
	i1 v5841 = (i1)+1;
	i8 v5842 = ((i8)v5840)<<v5841;
	i8 v5843 = v5837+v5842;
	i2 v5844 = *(i2*)(intptr_t)v5843;
	i8 v5845 = (i8)(intptr_t)(ws+3354);
	*(i2*)(intptr_t)v5845 = v5844;

	i8 v5846 = (i8)(intptr_t)(ws+3354);
	i2 v5847 = *(i2*)(intptr_t)v5846;
	i2 v5848 = (i2)+0;
	if (v5847==v5848) goto c02_0481; else goto c02_0480;

c02_0480:;

	i8 v5849 = (i8)(intptr_t)(ws+3344);
	i8 v5850 = *(i8*)(intptr_t)v5849;
	i8 v5851 = (i8)(intptr_t)(ws+3352);
	i1 v5852 = *(i1*)(intptr_t)v5851;
	i8 v5853 = (i8)(intptr_t)(ws+3354);
	i2 v5854 = *(i2*)(intptr_t)v5853;
	i8 v5855 = (i8)(intptr_t)(f198_EmitterDeclareWorkspace);

	((void(*)(i2 /* workspace */, i1 /* wid */, i8 /* subr */))(intptr_t)v5855)(v5854, v5852, v5850);

c02_0481:;

c02_047d:;

	i8 v5856 = (i8)(intptr_t)(ws+3352);
	i1 v5857 = *(i1*)(intptr_t)v5856;
	i1 v5858 = v5857+(+1);
	i8 v5859 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v5859 = v5858;

	goto c02_0479;

c02_047c:;

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
void f262_expr_i_cant_do_that(i8 p5860 /* rhs */, i8 p5861 /* lhs */) {
	*(i8*)(intptr_t)(ws+3424) = p5861; /*lhs */
	*(i8*)(intptr_t)(ws+3432) = p5860; /*rhs */

	i8 v5862 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v5862)();

	i8 v5863 = (i8)(intptr_t)(ws+3424);
	i8 v5864 = *(i8*)(intptr_t)v5863;
	i8 v5865 = v5864+(+16);
	i8 v5866 = *(i8*)(intptr_t)v5865;
	i8 v5867 = v5866+(+32);
	i8 v5868 = *(i8*)(intptr_t)v5867;
	i8 v5869 = v5868+(+8);
	i8 v5870 = *(i8*)(intptr_t)v5869;
	i8 v5871 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5871)(v5870);

	i8 v5872 = (i8)(intptr_t)c02_s010a;
	i8 v5873 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5873)(v5872);

	i8 v5874 = (i8)(intptr_t)(ws+3432);
	i8 v5875 = *(i8*)(intptr_t)v5874;
	i8 v5876 = v5875+(+16);
	i8 v5877 = *(i8*)(intptr_t)v5876;
	i8 v5878 = v5877+(+32);
	i8 v5879 = *(i8*)(intptr_t)v5878;
	i8 v5880 = v5879+(+8);
	i8 v5881 = *(i8*)(intptr_t)v5880;
	i8 v5882 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5882)(v5881);

	i8 v5883 = (i8)(intptr_t)c02_s010b;
	i8 v5884 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5884)(v5883);

	i8 v5885 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v5885)();

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
void f263_CheckExpressionType(i8 p5886 /* type */, i8 p5887 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p5887; /*node */
	*(i8*)(intptr_t)(ws+3400) = p5886; /*type */

	i8 v5888 = (i8)(intptr_t)(ws+3392);
	i8 v5889 = *(i8*)(intptr_t)v5888;
	i8 v5890 = v5889+(+16);
	i8 v5891 = *(i8*)(intptr_t)v5890;
	i8 v5892 = (i8)+0;
	if (v5891==v5892) goto c02_0485; else goto c02_0486;

c02_0485:;

	i8 v5893 = (i8)(intptr_t)(ws+3400);
	i8 v5894 = *(i8*)(intptr_t)v5893;
	i8 v5895 = (i8)(intptr_t)(ws+3392);
	i8 v5896 = *(i8*)(intptr_t)v5895;
	i8 v5897 = v5896+(+16);
	*(i8*)(intptr_t)v5897 = v5894;

c02_0486:;

c02_0482:;

	i8 v5898 = (i8)(intptr_t)(ws+3392);
	i8 v5899 = *(i8*)(intptr_t)v5898;
	i8 v5900 = v5899+(+16);
	i8 v5901 = *(i8*)(intptr_t)v5900;
	i8 v5902 = (i8)(intptr_t)(ws+3400);
	i8 v5903 = *(i8*)(intptr_t)v5902;
	if (v5901==v5903) goto c02_048b; else goto c02_048a;

c02_048a:;

	i8 v5904 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v5904)();

	i8 v5905 = (i8)(intptr_t)c02_s010c;
	i8 v5906 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5906)(v5905);

	i8 v5907 = (i8)(intptr_t)(ws+3392);
	i8 v5908 = *(i8*)(intptr_t)v5907;
	i8 v5909 = v5908+(+16);
	i8 v5910 = *(i8*)(intptr_t)v5909;
	i8 v5911 = v5910+(+32);
	i8 v5912 = *(i8*)(intptr_t)v5911;
	i8 v5913 = v5912+(+8);
	i8 v5914 = *(i8*)(intptr_t)v5913;
	i8 v5915 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5915)(v5914);

	i8 v5916 = (i8)(intptr_t)c02_s010d;
	i8 v5917 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5917)(v5916);

	i8 v5918 = (i8)(intptr_t)(ws+3400);
	i8 v5919 = *(i8*)(intptr_t)v5918;
	i8 v5920 = v5919+(+32);
	i8 v5921 = *(i8*)(intptr_t)v5920;
	i8 v5922 = v5921+(+8);
	i8 v5923 = *(i8*)(intptr_t)v5922;
	i8 v5924 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5924)(v5923);

	i8 v5925 = (i8)(intptr_t)c02_s010e;
	i8 v5926 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5926)(v5925);

	i8 v5927 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v5927)();

c02_048b:;

c02_0487:;

	i8 v5928 = (i8)(intptr_t)(ws+3400);
	i8 v5929 = *(i8*)(intptr_t)v5928;
	i8 v5930 = (i8)(intptr_t)(f226_IsScalar);
	i1 v5931;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5930)(&v5931, v5929);
	i1 v5932 = (i1)+0;
	if (v5931==v5932) goto c02_048f; else goto c02_0490;

c02_048f:;

	i8 v5933 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v5933)();

	i8 v5934 = (i8)(intptr_t)(ws+3400);
	i8 v5935 = *(i8*)(intptr_t)v5934;
	i8 v5936 = v5935+(+32);
	i8 v5937 = *(i8*)(intptr_t)v5936;
	i8 v5938 = v5937+(+8);
	i8 v5939 = *(i8*)(intptr_t)v5938;
	i8 v5940 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5940)(v5939);

	i8 v5941 = (i8)(intptr_t)c02_s010f;
	i8 v5942 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5942)(v5941);

	i8 v5943 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v5943)();

c02_0490:;

c02_048c:;

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
void f264_ResolveUntypedConstantsForAddOrSub(i8 p5944 /* rhs */, i8 p5945 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p5945; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p5944; /*rhs */

	i8 v5946 = (i8)(intptr_t)(ws+3368);
	i8 v5947 = *(i8*)(intptr_t)v5946;
	i8 v5948 = v5947+(+16);
	i8 v5949 = *(i8*)(intptr_t)v5948;
	i8 v5950 = (i8)+0;
	if (v5949==v5950) goto c02_0497; else goto c02_0498;

c02_0498:;

	i8 v5951 = (i8)(intptr_t)(ws+3376);
	i8 v5952 = *(i8*)(intptr_t)v5951;
	i8 v5953 = v5952+(+16);
	i8 v5954 = *(i8*)(intptr_t)v5953;
	i8 v5955 = (i8)+0;
	if (v5954==v5955) goto c02_0496; else goto c02_0497;

c02_0496:;

	i8 v5956 = (i8)(intptr_t)(ws+3368);
	i8 v5957 = *(i8*)(intptr_t)v5956;
	i8 v5958 = v5957+(+16);
	i8 v5959 = *(i8*)(intptr_t)v5958;
	i8 v5960 = (i8)(intptr_t)(f224_IsNum);
	i1 v5961;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5960)(&v5961, v5959);
	i1 v5962 = (i1)+0;
	if (v5961==v5962) goto c02_049d; else goto c02_049c;

c02_049c:;

	i8 v5963 = (i8)(intptr_t)(ws+3368);
	i8 v5964 = *(i8*)(intptr_t)v5963;
	i8 v5965 = v5964+(+16);
	i8 v5966 = *(i8*)(intptr_t)v5965;
	i8 v5967 = (i8)(intptr_t)(ws+3376);
	i8 v5968 = *(i8*)(intptr_t)v5967;
	i8 v5969 = v5968+(+16);
	*(i8*)(intptr_t)v5969 = v5966;

	goto c02_0499;

c02_049d:;

	i8 v5970 = (i8)(intptr_t)(ws+3368);
	i8 v5971 = *(i8*)(intptr_t)v5970;
	i8 v5972 = v5971+(+16);
	i8 v5973 = *(i8*)(intptr_t)v5972;
	i8 v5974 = (i8)(intptr_t)(f63_IsPtr);
	i1 v5975;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v5974)(&v5975, v5973);
	i1 v5976 = (i1)+0;
	if (v5975==v5976) goto c02_04a1; else goto c02_04a0;

c02_04a0:;

	i8 v5977 = (i8)(intptr_t)(ws+1528);
	i8 v5978 = *(i8*)(intptr_t)v5977;
	i8 v5979 = (i8)(intptr_t)(ws+3376);
	i8 v5980 = *(i8*)(intptr_t)v5979;
	i8 v5981 = v5980+(+16);
	*(i8*)(intptr_t)v5981 = v5978;

	goto c02_0499;

c02_04a1:;

	i8 v5982 = (i8)(intptr_t)c02_s0110;
	i8 v5983 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5983)(v5982);

	i8 v5984 = (i8)(intptr_t)(ws+3368);
	i8 v5985 = *(i8*)(intptr_t)v5984;
	i8 v5986 = v5985+(+16);
	i8 v5987 = *(i8*)(intptr_t)v5986;
	i4 v5988 = v5987;
	i8 v5989 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5989)(v5988);

	i8 v5990 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5990)();

	i8 v5991 = (i8)(intptr_t)c02_s0111;
	i8 v5992 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v5992)(v5991);

	i8 v5993 = (i8)(intptr_t)(ws+3376);
	i8 v5994 = *(i8*)(intptr_t)v5993;
	i8 v5995 = v5994+(+16);
	i8 v5996 = *(i8*)(intptr_t)v5995;
	i4 v5997 = v5996;
	i8 v5998 = (i8)(intptr_t)(f20_print_hex_i32);

	((void(*)(i4 /* value */))(intptr_t)v5998)(v5997);

	i8 v5999 = (i8)(intptr_t)(f12_print_nl);

	((void(*)(void))(intptr_t)v5999)();

	i8 v6000 = (i8)(intptr_t)c02_s0112;
	i8 v6001 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6001)(v6000);

c02_0499:;

c02_0497:;

c02_0491:;

	i8 v6002 = (i8)(intptr_t)(ws+3368);
	i8 v6003 = *(i8*)(intptr_t)v6002;
	i8 v6004 = v6003+(+16);
	i8 v6005 = *(i8*)(intptr_t)v6004;
	i8 v6006 = (i8)+0;
	if (v6005==v6006) goto c02_04a9; else goto c02_04a8;

c02_04a9:;

	i8 v6007 = (i8)(intptr_t)(ws+3376);
	i8 v6008 = *(i8*)(intptr_t)v6007;
	i8 v6009 = v6008+(+16);
	i8 v6010 = *(i8*)(intptr_t)v6009;
	i8 v6011 = (i8)+0;
	if (v6010==v6011) goto c02_04a8; else goto c02_04a7;

c02_04a7:;

	i8 v6012 = (i8)(intptr_t)(ws+3376);
	i8 v6013 = *(i8*)(intptr_t)v6012;
	i8 v6014 = v6013+(+16);
	i8 v6015 = *(i8*)(intptr_t)v6014;
	i8 v6016 = (i8)(intptr_t)(f224_IsNum);
	i1 v6017;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6016)(&v6017, v6015);
	i1 v6018 = (i1)+0;
	if (v6017==v6018) goto c02_04ae; else goto c02_04ad;

c02_04ad:;

	i8 v6019 = (i8)(intptr_t)(ws+3376);
	i8 v6020 = *(i8*)(intptr_t)v6019;
	i8 v6021 = v6020+(+16);
	i8 v6022 = *(i8*)(intptr_t)v6021;
	i8 v6023 = (i8)(intptr_t)(ws+3368);
	i8 v6024 = *(i8*)(intptr_t)v6023;
	i8 v6025 = v6024+(+16);
	*(i8*)(intptr_t)v6025 = v6022;

	goto c02_04aa;

c02_04ae:;

	i8 v6026 = (i8)(intptr_t)(ws+3376);
	i8 v6027 = *(i8*)(intptr_t)v6026;
	i8 v6028 = v6027+(+16);
	i8 v6029 = *(i8*)(intptr_t)v6028;
	i8 v6030 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6031;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6030)(&v6031, v6029);
	i1 v6032 = (i1)+0;
	if (v6031==v6032) goto c02_04b2; else goto c02_04b1;

c02_04b1:;

	i8 v6033 = (i8)(intptr_t)c02_s0113;
	i8 v6034 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6034)(v6033);

c02_04b2:;

c02_04aa:;

c02_04a8:;

c02_04a2:;

endsub:;
}
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// ResolveUntypedConstantsSimply workspace at ws+3392 length ws+32
void f265_ResolveUntypedConstantsSimply(i8 p6035 /* rhs */, i8 p6036 /* lhs */) {
	*(i8*)(intptr_t)(ws+3392) = p6036; /*lhs */
	*(i8*)(intptr_t)(ws+3400) = p6035; /*rhs */

	i8 v6037 = (i8)(intptr_t)(ws+3392);
	i8 v6038 = *(i8*)(intptr_t)v6037;
	i8 v6039 = v6038+(+16);
	i8 v6040 = *(i8*)(intptr_t)v6039;
	i8 v6041 = (i8)(intptr_t)(ws+3408);
	*(i8*)(intptr_t)v6041 = v6040;

	i8 v6042 = (i8)(intptr_t)(ws+3400);
	i8 v6043 = *(i8*)(intptr_t)v6042;
	i8 v6044 = v6043+(+16);
	i8 v6045 = *(i8*)(intptr_t)v6044;
	i8 v6046 = (i8)(intptr_t)(ws+3416);
	*(i8*)(intptr_t)v6046 = v6045;

	i8 v6047 = (i8)(intptr_t)(ws+3408);
	i8 v6048 = *(i8*)(intptr_t)v6047;
	i8 v6049 = (i8)+0;
	if (v6048==v6049) goto c02_04b9; else goto c02_04ba;

c02_04ba:;

	i8 v6050 = (i8)(intptr_t)(ws+3416);
	i8 v6051 = *(i8*)(intptr_t)v6050;
	i8 v6052 = (i8)+0;
	if (v6051==v6052) goto c02_04b8; else goto c02_04b9;

c02_04b8:;

	i8 v6053 = (i8)(intptr_t)(ws+3408);
	i8 v6054 = *(i8*)(intptr_t)v6053;
	i8 v6055 = (i8)(intptr_t)(ws+3400);
	i8 v6056 = *(i8*)(intptr_t)v6055;
	i8 v6057 = v6056+(+16);
	*(i8*)(intptr_t)v6057 = v6054;

	goto c02_04b3;

c02_04b9:;

	i8 v6058 = (i8)(intptr_t)(ws+3408);
	i8 v6059 = *(i8*)(intptr_t)v6058;
	i8 v6060 = (i8)+0;
	if (v6059==v6060) goto c02_04c1; else goto c02_04c0;

c02_04c1:;

	i8 v6061 = (i8)(intptr_t)(ws+3416);
	i8 v6062 = *(i8*)(intptr_t)v6061;
	i8 v6063 = (i8)+0;
	if (v6062==v6063) goto c02_04c0; else goto c02_04bf;

c02_04bf:;

	i8 v6064 = (i8)(intptr_t)(ws+3416);
	i8 v6065 = *(i8*)(intptr_t)v6064;
	i8 v6066 = (i8)(intptr_t)(ws+3392);
	i8 v6067 = *(i8*)(intptr_t)v6066;
	i8 v6068 = v6067+(+16);
	*(i8*)(intptr_t)v6068 = v6065;

	goto c02_04b3;

c02_04c0:;

	i8 v6069 = (i8)(intptr_t)(ws+3408);
	i8 v6070 = *(i8*)(intptr_t)v6069;
	i8 v6071 = (i8)(intptr_t)(ws+3416);
	i8 v6072 = *(i8*)(intptr_t)v6071;
	if (v6070==v6072) goto c02_04c5; else goto c02_04c4;

c02_04c4:;

	i8 v6073 = (i8)(intptr_t)(ws+3392);
	i8 v6074 = *(i8*)(intptr_t)v6073;
	i8 v6075 = (i8)(intptr_t)(ws+3400);
	i8 v6076 = *(i8*)(intptr_t)v6075;
	i8 v6077 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6077)(v6076, v6074);

c02_04c5:;

c02_04b3:;

endsub:;
}
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0114[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// CheckNumber workspace at ws+3392 length ws+8
void f266_CheckNumber(i8 p6078 /* node */) {
	*(i8*)(intptr_t)(ws+3392) = p6078; /*node */

	i8 v6079 = (i8)(intptr_t)(ws+3392);
	i8 v6080 = *(i8*)(intptr_t)v6079;
	i8 v6081 = v6080+(+16);
	i8 v6082 = *(i8*)(intptr_t)v6081;
	i8 v6083 = (i8)(intptr_t)(f224_IsNum);
	i1 v6084;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6083)(&v6084, v6082);
	i1 v6085 = (i1)+0;
	if (v6084==v6085) goto c02_04c9; else goto c02_04ca;

c02_04c9:;

	i8 v6086 = (i8)(intptr_t)c02_s0114;
	i8 v6087 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6087)(v6086);

c02_04ca:;

c02_04c6:;

endsub:;
}
	void f265_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f266_CheckNumber(i8 /* node */);
	void f266_CheckNumber(i8 /* node */);

// ResolveUntypedConstantsNeedingNumbers workspace at ws+3376 length ws+16
void f267_ResolveUntypedConstantsNeedingNumbers(i8 p6088 /* rhs */, i8 p6089 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6089; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6088; /*rhs */

	i8 v6090 = (i8)(intptr_t)(ws+3376);
	i8 v6091 = *(i8*)(intptr_t)v6090;
	i8 v6092 = (i8)(intptr_t)(ws+3384);
	i8 v6093 = *(i8*)(intptr_t)v6092;
	i8 v6094 = (i8)(intptr_t)(f265_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6094)(v6093, v6091);

	i8 v6095 = (i8)(intptr_t)(ws+3376);
	i8 v6096 = *(i8*)(intptr_t)v6095;
	i8 v6097 = (i8)(intptr_t)(f266_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6097)(v6096);

	i8 v6098 = (i8)(intptr_t)(ws+3384);
	i8 v6099 = *(i8*)(intptr_t)v6098;
	i8 v6100 = (i8)(intptr_t)(f266_CheckNumber);

	((void(*)(i8 /* node */))(intptr_t)v6100)(v6099);

endsub:;
}
	void f265_ResolveUntypedConstantsSimply(i8 /* rhs */, i8 /* lhs */);
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// CondSimple workspace at ws+3368 length ws+16
void f268_CondSimple(i8 p6101 /* rhs */, i8 p6102 /* lhs */) {
	*(i8*)(intptr_t)(ws+3368) = p6102; /*lhs */
	*(i8*)(intptr_t)(ws+3376) = p6101; /*rhs */

	i8 v6103 = (i8)(intptr_t)(ws+3368);
	i8 v6104 = *(i8*)(intptr_t)v6103;
	i8 v6105 = (i8)(intptr_t)(ws+3376);
	i8 v6106 = *(i8*)(intptr_t)v6105;
	i8 v6107 = (i8)(intptr_t)(f265_ResolveUntypedConstantsSimply);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6107)(v6106, v6104);

	i8 v6108 = (i8)(intptr_t)(ws+3368);
	i8 v6109 = *(i8*)(intptr_t)v6108;
	i8 v6110 = v6109+(+16);
	i8 v6111 = *(i8*)(intptr_t)v6110;
	i8 v6112 = (i8)(intptr_t)(ws+3376);
	i8 v6113 = *(i8*)(intptr_t)v6112;
	i8 v6114 = v6113+(+16);
	i8 v6115 = *(i8*)(intptr_t)v6114;
	if (v6111==v6115) goto c02_04cf; else goto c02_04ce;

c02_04ce:;

	i8 v6116 = (i8)(intptr_t)(ws+3368);
	i8 v6117 = *(i8*)(intptr_t)v6116;
	i8 v6118 = (i8)(intptr_t)(ws+3376);
	i8 v6119 = *(i8*)(intptr_t)v6118;
	i8 v6120 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6120)(v6119, v6117);

c02_04cf:;

c02_04cb:;

endsub:;
}
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f166_MidC1Op(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr1Simple workspace at ws+3328 length ws+24
void f269_Expr1Simple(i8* p6121 /* result */, i8 p6122 /* lhs */, i1 p6123 /* op */) {
	*(i1*)(intptr_t)(ws+3328) = p6123; /*op */
	*(i8*)(intptr_t)(ws+3336) = p6122; /*lhs */

	i8 v6124 = (i8)(intptr_t)(ws+3328);
	i1 v6125 = *(i1*)(intptr_t)v6124;
	i8 v6126 = (i8)(intptr_t)(ws+3336);
	i8 v6127 = *(i8*)(intptr_t)v6126;
	i8 v6128 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6129;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6128)(&v6129, v6127);
	i8 v6130 = (i8)(intptr_t)(ws+3336);
	i8 v6131 = *(i8*)(intptr_t)v6130;
	i8 v6132 = (i8)(intptr_t)(f166_MidC1Op);
	i8 v6133;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6132)(&v6133, v6131, v6129, v6125);
	i8 v6134 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6134 = v6133;

	i8 v6135 = (i8)(intptr_t)(ws+3336);
	i8 v6136 = *(i8*)(intptr_t)v6135;
	i8 v6137 = v6136+(+16);
	i8 v6138 = *(i8*)(intptr_t)v6137;
	i8 v6139 = (i8)(intptr_t)(ws+3344);
	i8 v6140 = *(i8*)(intptr_t)v6139;
	i8 v6141 = v6140+(+16);
	*(i8*)(intptr_t)v6141 = v6138;

endsub:;
	*p6121 = *(i8*)(intptr_t)(ws+3344);
}
	void f264_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_add_that workspace at ws+3368 length ws+0
void f271_cant_add_that(void) {

	i8 v6150 = (i8)(intptr_t)(ws+3328);
	i8 v6151 = *(i8*)(intptr_t)v6150;
	i8 v6152 = (i8)(intptr_t)(ws+3336);
	i8 v6153 = *(i8*)(intptr_t)v6152;
	i8 v6154 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6154)(v6153, v6151);

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
void f270_ExprAdd(i8* p6142 /* result */, i8 p6143 /* rhs */, i8 p6144 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6144; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6143; /*rhs */

	i8 v6145 = (i8)(intptr_t)(ws+3328);
	i8 v6146 = *(i8*)(intptr_t)v6145;
	i8 v6147 = (i8)(intptr_t)(ws+3336);
	i8 v6148 = *(i8*)(intptr_t)v6147;
	i8 v6149 = (i8)(intptr_t)(f264_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6149)(v6148, v6146);


	i8 v6155 = (i8)(intptr_t)(ws+3328);
	i8 v6156 = *(i8*)(intptr_t)v6155;
	i8 v6157 = v6156+(+16);
	i8 v6158 = *(i8*)(intptr_t)v6157;
	i8 v6159 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6159 = v6158;

	i8 v6160 = (i8)(intptr_t)(ws+3336);
	i8 v6161 = *(i8*)(intptr_t)v6160;
	i8 v6162 = v6161+(+16);
	i8 v6163 = *(i8*)(intptr_t)v6162;
	i8 v6164 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6164 = v6163;

	i8 v6165 = (i8)(intptr_t)(ws+3352);
	i8 v6166 = *(i8*)(intptr_t)v6165;
	i8 v6167 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6168;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6167)(&v6168, v6166);
	i1 v6169 = (i1)+0;
	if (v6168==v6169) goto c02_04d4; else goto c02_04d3;

c02_04d3:;

	i8 v6170 = (i8)(intptr_t)(ws+3360);
	i8 v6171 = *(i8*)(intptr_t)v6170;
	i8 v6172 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6173;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6172)(&v6173, v6171);
	i1 v6174 = (i1)+0;
	if (v6173==v6174) goto c02_04dc; else goto c02_04da;

c02_04dc:;

	i8 v6175 = (i8)(intptr_t)(ws+3360);
	i8 v6176 = *(i8*)(intptr_t)v6175;
	i8 v6177 = (i8)(intptr_t)(ws+1528);
	i8 v6178 = *(i8*)(intptr_t)v6177;
	if (v6176==v6178) goto c02_04db; else goto c02_04da;

c02_04da:;

	i8 v6179 = (i8)(intptr_t)(f271_cant_add_that);

	((void(*)(void))(intptr_t)v6179)();

c02_04db:;

c02_04d5:;

	goto c02_04d0;

c02_04d4:;

	i8 v6180 = (i8)(intptr_t)(ws+3360);
	i8 v6181 = *(i8*)(intptr_t)v6180;
	i8 v6182 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6183;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6182)(&v6183, v6181);
	i1 v6184 = (i1)+0;
	if (v6183==v6184) goto c02_04e0; else goto c02_04df;

c02_04df:;

	i8 v6185 = (i8)(intptr_t)(f271_cant_add_that);

	((void(*)(void))(intptr_t)v6185)();

	goto c02_04d0;

c02_04e0:;

	i8 v6186 = (i8)(intptr_t)(ws+3352);
	i8 v6187 = *(i8*)(intptr_t)v6186;
	i8 v6188 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6189;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6188)(&v6189, v6187);
	i1 v6190 = (i1)+0;
	if (v6189==v6190) goto c02_04e7; else goto c02_04e6;

c02_04e7:;

	i8 v6191 = (i8)(intptr_t)(ws+3352);
	i8 v6192 = *(i8*)(intptr_t)v6191;
	i8 v6193 = (i8)(intptr_t)(ws+3360);
	i8 v6194 = *(i8*)(intptr_t)v6193;
	if (v6192==v6194) goto c02_04e6; else goto c02_04e5;

c02_04e5:;

	i8 v6195 = (i8)(intptr_t)(f271_cant_add_that);

	((void(*)(void))(intptr_t)v6195)();

c02_04e6:;

c02_04d0:;

	i1 v6196 = (i1)+161;
	i8 v6197 = (i8)(intptr_t)(ws+3328);
	i8 v6198 = *(i8*)(intptr_t)v6197;
	i8 v6199 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6200;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6199)(&v6200, v6198);
	i8 v6201 = (i8)(intptr_t)(ws+3328);
	i8 v6202 = *(i8*)(intptr_t)v6201;
	i8 v6203 = (i8)(intptr_t)(ws+3336);
	i8 v6204 = *(i8*)(intptr_t)v6203;
	i8 v6205 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6206;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6205)(&v6206, v6204, v6202, v6200, v6196);
	i8 v6207 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6207 = v6206;

	i8 v6208 = (i8)(intptr_t)(ws+3352);
	i8 v6209 = *(i8*)(intptr_t)v6208;
	i8 v6210 = (i8)(intptr_t)(ws+3344);
	i8 v6211 = *(i8*)(intptr_t)v6210;
	i8 v6212 = v6211+(+16);
	*(i8*)(intptr_t)v6212 = v6209;

endsub:;
	*p6142 = *(i8*)(intptr_t)(ws+3344);
}
	void f264_ResolveUntypedConstantsForAddOrSub(i8 /* rhs */, i8 /* lhs */);
	void f262_expr_i_cant_do_that(i8 /* rhs */, i8 /* lhs */);

// cant_sub_that workspace at ws+3368 length ws+0
void f273_cant_sub_that(void) {

	i8 v6221 = (i8)(intptr_t)(ws+3328);
	i8 v6222 = *(i8*)(intptr_t)v6221;
	i8 v6223 = (i8)(intptr_t)(ws+3336);
	i8 v6224 = *(i8*)(intptr_t)v6223;
	i8 v6225 = (i8)(intptr_t)(f262_expr_i_cant_do_that);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6225)(v6224, v6222);

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
void f272_ExprSub(i8* p6213 /* result */, i8 p6214 /* rhs */, i8 p6215 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6215; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6214; /*rhs */

	i8 v6216 = (i8)(intptr_t)(ws+3328);
	i8 v6217 = *(i8*)(intptr_t)v6216;
	i8 v6218 = (i8)(intptr_t)(ws+3336);
	i8 v6219 = *(i8*)(intptr_t)v6218;
	i8 v6220 = (i8)(intptr_t)(f264_ResolveUntypedConstantsForAddOrSub);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6220)(v6219, v6217);


	i8 v6226 = (i8)(intptr_t)(ws+3328);
	i8 v6227 = *(i8*)(intptr_t)v6226;
	i8 v6228 = v6227+(+16);
	i8 v6229 = *(i8*)(intptr_t)v6228;
	i8 v6230 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6230 = v6229;

	i8 v6231 = (i8)(intptr_t)(ws+3336);
	i8 v6232 = *(i8*)(intptr_t)v6231;
	i8 v6233 = v6232+(+16);
	i8 v6234 = *(i8*)(intptr_t)v6233;
	i8 v6235 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6235 = v6234;

	i8 v6236 = (i8)(intptr_t)(ws+3352);
	i8 v6237 = *(i8*)(intptr_t)v6236;
	i8 v6238 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6239;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6238)(&v6239, v6237);
	i1 v6240 = (i1)+0;
	if (v6239==v6240) goto c02_04f0; else goto c02_04f2;

c02_04f2:;

	i8 v6241 = (i8)(intptr_t)(ws+3360);
	i8 v6242 = *(i8*)(intptr_t)v6241;
	i8 v6243 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6244;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6243)(&v6244, v6242);
	i1 v6245 = (i1)+0;
	if (v6244==v6245) goto c02_04f1; else goto c02_04f0;

c02_04f1:;

	i8 v6246 = (i8)(intptr_t)(ws+3360);
	i8 v6247 = *(i8*)(intptr_t)v6246;
	i8 v6248 = (i8)(intptr_t)(ws+1528);
	i8 v6249 = *(i8*)(intptr_t)v6248;
	if (v6247==v6249) goto c02_04f0; else goto c02_04ef;

c02_04ef:;

	i8 v6250 = (i8)(intptr_t)(f273_cant_sub_that);

	((void(*)(void))(intptr_t)v6250)();

	goto c02_04e8;

c02_04f0:;

	i8 v6251 = (i8)(intptr_t)(ws+3352);
	i8 v6252 = *(i8*)(intptr_t)v6251;
	i8 v6253 = (i8)(intptr_t)(f224_IsNum);
	i1 v6254;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6253)(&v6254, v6252);
	i1 v6255 = (i1)+0;
	if (v6254==v6255) goto c02_04f8; else goto c02_04f9;

c02_04f9:;

	i8 v6256 = (i8)(intptr_t)(ws+3360);
	i8 v6257 = *(i8*)(intptr_t)v6256;
	i8 v6258 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6259;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6258)(&v6259, v6257);
	i1 v6260 = (i1)+0;
	if (v6259==v6260) goto c02_04f8; else goto c02_04f7;

c02_04f7:;

	i8 v6261 = (i8)(intptr_t)(f273_cant_sub_that);

	((void(*)(void))(intptr_t)v6261)();

	goto c02_04e8;

c02_04f8:;

	i8 v6262 = (i8)(intptr_t)(ws+3352);
	i8 v6263 = *(i8*)(intptr_t)v6262;
	i8 v6264 = (i8)(intptr_t)(f224_IsNum);
	i1 v6265;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6264)(&v6265, v6263);
	i1 v6266 = (i1)+0;
	if (v6265==v6266) goto c02_0501; else goto c02_0503;

c02_0503:;

	i8 v6267 = (i8)(intptr_t)(ws+3360);
	i8 v6268 = *(i8*)(intptr_t)v6267;
	i8 v6269 = (i8)(intptr_t)(f224_IsNum);
	i1 v6270;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6269)(&v6270, v6268);
	i1 v6271 = (i1)+0;
	if (v6270==v6271) goto c02_0501; else goto c02_0502;

c02_0502:;

	i8 v6272 = (i8)(intptr_t)(ws+3352);
	i8 v6273 = *(i8*)(intptr_t)v6272;
	i8 v6274 = (i8)(intptr_t)(ws+3360);
	i8 v6275 = *(i8*)(intptr_t)v6274;
	if (v6273==v6275) goto c02_0501; else goto c02_0500;

c02_0500:;

	i8 v6276 = (i8)(intptr_t)(f273_cant_sub_that);

	((void(*)(void))(intptr_t)v6276)();

c02_0501:;

c02_04e8:;

	i1 v6277 = (i1)+136;
	i8 v6278 = (i8)(intptr_t)(ws+3328);
	i8 v6279 = *(i8*)(intptr_t)v6278;
	i8 v6280 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6281;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6280)(&v6281, v6279);
	i8 v6282 = (i8)(intptr_t)(ws+3328);
	i8 v6283 = *(i8*)(intptr_t)v6282;
	i8 v6284 = (i8)(intptr_t)(ws+3336);
	i8 v6285 = *(i8*)(intptr_t)v6284;
	i8 v6286 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6287;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6286)(&v6287, v6285, v6283, v6281, v6277);
	i8 v6288 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v6288 = v6287;

	i8 v6289 = (i8)(intptr_t)(ws+3352);
	i8 v6290 = *(i8*)(intptr_t)v6289;
	i8 v6291 = (i8)(intptr_t)(f63_IsPtr);
	i1 v6292;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6291)(&v6292, v6290);
	i1 v6293 = (i1)+0;
	if (v6292==v6293) goto c02_050a; else goto c02_050b;

c02_050b:;

	i8 v6294 = (i8)(intptr_t)(ws+3352);
	i8 v6295 = *(i8*)(intptr_t)v6294;
	i8 v6296 = (i8)(intptr_t)(ws+3360);
	i8 v6297 = *(i8*)(intptr_t)v6296;
	if (v6295==v6297) goto c02_0509; else goto c02_050a;

c02_0509:;

	i8 v6298 = (i8)(intptr_t)(ws+1528);
	i8 v6299 = *(i8*)(intptr_t)v6298;
	i8 v6300 = (i8)(intptr_t)(ws+3344);
	i8 v6301 = *(i8*)(intptr_t)v6300;
	i8 v6302 = v6301+(+16);
	*(i8*)(intptr_t)v6302 = v6299;

	goto c02_0504;

c02_050a:;

	i8 v6303 = (i8)(intptr_t)(ws+3352);
	i8 v6304 = *(i8*)(intptr_t)v6303;
	i8 v6305 = (i8)(intptr_t)(ws+3344);
	i8 v6306 = *(i8*)(intptr_t)v6305;
	i8 v6307 = v6306+(+16);
	*(i8*)(intptr_t)v6307 = v6304;

c02_0504:;

endsub:;
	*p6213 = *(i8*)(intptr_t)(ws+3344);
}
	void f267_ResolveUntypedConstantsNeedingNumbers(i8 /* rhs */, i8 /* lhs */);
	void f225_IsSNum(i1* /* result */, i8 /* type */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// Expr2Simple workspace at ws+3328 length ws+48
void f274_Expr2Simple(i8* p6308 /* result */, i8 p6309 /* rhs */, i8 p6310 /* lhs */, i1 p6311 /* uop */, i1 p6312 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6312; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6311; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6310; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6309; /*rhs */

	i8 v6313 = (i8)(intptr_t)(ws+3336);
	i8 v6314 = *(i8*)(intptr_t)v6313;
	i8 v6315 = (i8)(intptr_t)(ws+3344);
	i8 v6316 = *(i8*)(intptr_t)v6315;
	i8 v6317 = (i8)(intptr_t)(f267_ResolveUntypedConstantsNeedingNumbers);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6317)(v6316, v6314);

	i8 v6318 = (i8)(intptr_t)(ws+3329);
	i1 v6319 = *(i1*)(intptr_t)v6318;
	i8 v6320 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6320 = v6319;

	i8 v6321 = (i8)(intptr_t)(ws+3336);
	i8 v6322 = *(i8*)(intptr_t)v6321;
	i8 v6323 = v6322+(+16);
	i8 v6324 = *(i8*)(intptr_t)v6323;
	i8 v6325 = (i8)(intptr_t)(f225_IsSNum);
	i1 v6326;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6325)(&v6326, v6324);
	i1 v6327 = (i1)+0;
	if (v6326==v6327) goto c02_0510; else goto c02_050f;

c02_050f:;

	i8 v6328 = (i8)(intptr_t)(ws+3328);
	i1 v6329 = *(i1*)(intptr_t)v6328;
	i8 v6330 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6330 = v6329;

c02_0510:;

c02_050c:;

	i8 v6331 = (i8)(intptr_t)(ws+3336);
	i8 v6332 = *(i8*)(intptr_t)v6331;
	i8 v6333 = v6332+(+16);
	i8 v6334 = *(i8*)(intptr_t)v6333;
	i8 v6335 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6335 = v6334;

	i8 v6336 = (i8)(intptr_t)(ws+3360);
	i1 v6337 = *(i1*)(intptr_t)v6336;
	i8 v6338 = (i8)(intptr_t)(ws+3336);
	i8 v6339 = *(i8*)(intptr_t)v6338;
	i8 v6340 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6341;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6340)(&v6341, v6339);
	i8 v6342 = (i8)(intptr_t)(ws+3336);
	i8 v6343 = *(i8*)(intptr_t)v6342;
	i8 v6344 = (i8)(intptr_t)(ws+3344);
	i8 v6345 = *(i8*)(intptr_t)v6344;
	i8 v6346 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6347;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6346)(&v6347, v6345, v6343, v6341, v6337);
	i8 v6348 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6348 = v6347;

	i8 v6349 = (i8)(intptr_t)(ws+3368);
	i8 v6350 = *(i8*)(intptr_t)v6349;
	i8 v6351 = (i8)(intptr_t)(ws+3352);
	i8 v6352 = *(i8*)(intptr_t)v6351;
	i8 v6353 = v6352+(+16);
	*(i8*)(intptr_t)v6353 = v6350;

endsub:;
	*p6308 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0115[] = { 0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x62,0x65,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x69,0x66,0x20,0x74,0x68,0x65,0x20,0x52,0x48,0x53,0x20,0x69,0x73,0x20,0x61,0x6c,0x73,0x6f,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0 };
	void f71_SimpleError(i8 /* message */);

// expr_i_checkrhsconst workspace at ws+3376 length ws+8
void f275_expr_i_checkrhsconst(i8 p6354 /* rhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6354; /*rhs */

	i8 v6355 = (i8)(intptr_t)(ws+3376);
	i8 v6356 = *(i8*)(intptr_t)v6355;
	i8 v6357 = v6356+(+40);
	i1 v6358 = *(i1*)(intptr_t)v6357;
	i1 v6359 = (i1)+45;
	if (v6358==v6359) goto c02_0515; else goto c02_0514;

c02_0514:;

	i8 v6360 = (i8)(intptr_t)c02_s0115;
	i8 v6361 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6361)(v6360);

c02_0515:;

c02_0511:;

endsub:;
}
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0116[] = { 0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x64,0x20,0x6f,0x6e,0x20,0x4c,0x48,0x53,0x20,0x6f,0x66,0x20,0x73,0x68,0x69,0x66,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);

// expr_i_checkshift workspace at ws+3376 length ws+16
void f276_expr_i_checkshift(i8 p6362 /* rhs */, i8 p6363 /* lhs */) {
	*(i8*)(intptr_t)(ws+3376) = p6363; /*lhs */
	*(i8*)(intptr_t)(ws+3384) = p6362; /*rhs */

	i8 v6364 = (i8)(intptr_t)(ws+3376);
	i8 v6365 = *(i8*)(intptr_t)v6364;
	i8 v6366 = v6365+(+16);
	i8 v6367 = *(i8*)(intptr_t)v6366;
	i8 v6368 = (i8)(intptr_t)(f224_IsNum);
	i1 v6369;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6368)(&v6369, v6367);
	i1 v6370 = (i1)+0;
	if (v6369==v6370) goto c02_0519; else goto c02_051a;

c02_0519:;

	i8 v6371 = (i8)(intptr_t)c02_s0116;
	i8 v6372 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6372)(v6371);

c02_051a:;

c02_0516:;

	i8 v6373 = (i8)(intptr_t)(ws+3384);
	i8 v6374 = *(i8*)(intptr_t)v6373;
	i8 v6375 = (i8)(intptr_t)(ws+1512);
	i8 v6376 = *(i8*)(intptr_t)v6375;
	i8 v6377 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v6377)(v6376, v6374);

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
void f277_ExprShift(i8* p6378 /* result */, i8 p6379 /* rhs */, i8 p6380 /* lhs */, i1 p6381 /* uop */, i1 p6382 /* sop */) {
	*(i1*)(intptr_t)(ws+3328) = p6382; /*sop */
	*(i1*)(intptr_t)(ws+3329) = p6381; /*uop */
	*(i8*)(intptr_t)(ws+3336) = p6380; /*lhs */
	*(i8*)(intptr_t)(ws+3344) = p6379; /*rhs */

	i8 v6383 = (i8)(intptr_t)(ws+3329);
	i1 v6384 = *(i1*)(intptr_t)v6383;
	i8 v6385 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6385 = v6384;

	i8 v6386 = (i8)(intptr_t)(ws+3336);
	i8 v6387 = *(i8*)(intptr_t)v6386;
	i8 v6388 = v6387+(+16);
	i8 v6389 = *(i8*)(intptr_t)v6388;
	i8 v6390 = (i8)(intptr_t)(f225_IsSNum);
	i1 v6391;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6390)(&v6391, v6389);
	i1 v6392 = (i1)+0;
	if (v6391==v6392) goto c02_051f; else goto c02_051e;

c02_051e:;

	i8 v6393 = (i8)(intptr_t)(ws+3328);
	i1 v6394 = *(i1*)(intptr_t)v6393;
	i8 v6395 = (i8)(intptr_t)(ws+3360);
	*(i1*)(intptr_t)v6395 = v6394;

c02_051f:;

c02_051b:;

	i8 v6396 = (i8)(intptr_t)(ws+3336);
	i8 v6397 = *(i8*)(intptr_t)v6396;
	i8 v6398 = v6397+(+40);
	i1 v6399 = *(i1*)(intptr_t)v6398;
	i1 v6400 = (i1)+45;
	if (v6399==v6400) goto c02_0523; else goto c02_0524;

c02_0523:;

	i8 v6401 = (i8)(intptr_t)(ws+3344);
	i8 v6402 = *(i8*)(intptr_t)v6401;
	i8 v6403 = (i8)(intptr_t)(f275_expr_i_checkrhsconst);

	((void(*)(i8 /* rhs */))(intptr_t)v6403)(v6402);

	i8 v6404 = (i8)(intptr_t)(ws+3360);
	i1 v6405 = *(i1*)(intptr_t)v6404;
	i8 v6406 = (i8)(intptr_t)(ws+3336);
	i8 v6407 = *(i8*)(intptr_t)v6406;
	i8 v6408 = (i8)(intptr_t)(ws+3344);
	i8 v6409 = *(i8*)(intptr_t)v6408;
	i8 v6410 = (i8)(intptr_t)(f165_FoldConstant2);
	i4 v6411;

	((void(*)(i4* /* result */, i8 /* rhsp */, i8 /* lhsp */, i1 /* op */))(intptr_t)v6410)(&v6411, v6409, v6407, v6405);
	i8 v6412 = (i8)(intptr_t)(ws+3336);
	i8 v6413 = *(i8*)(intptr_t)v6412;
	*(i4*)(intptr_t)v6413 = v6411;

	i8 v6414 = (i8)(intptr_t)(ws+3336);
	i8 v6415 = *(i8*)(intptr_t)v6414;
	i8 v6416 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6416 = v6415;

	i8 v6417 = (i8)(intptr_t)(ws+3344);
	i8 v6418 = *(i8*)(intptr_t)v6417;
	i8 v6419 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v6419)(v6418);

	goto endsub;

c02_0524:;

c02_0520:;

	i8 v6420 = (i8)(intptr_t)(ws+3336);
	i8 v6421 = *(i8*)(intptr_t)v6420;
	i8 v6422 = (i8)(intptr_t)(ws+3344);
	i8 v6423 = *(i8*)(intptr_t)v6422;
	i8 v6424 = (i8)(intptr_t)(f276_expr_i_checkshift);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6424)(v6423, v6421);

	i8 v6425 = (i8)(intptr_t)(ws+3336);
	i8 v6426 = *(i8*)(intptr_t)v6425;
	i8 v6427 = v6426+(+16);
	i8 v6428 = *(i8*)(intptr_t)v6427;
	i8 v6429 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6429 = v6428;

	i8 v6430 = (i8)(intptr_t)(ws+3360);
	i1 v6431 = *(i1*)(intptr_t)v6430;
	i8 v6432 = (i8)(intptr_t)(ws+3336);
	i8 v6433 = *(i8*)(intptr_t)v6432;
	i8 v6434 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6435;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6434)(&v6435, v6433);
	i8 v6436 = (i8)(intptr_t)(ws+3336);
	i8 v6437 = *(i8*)(intptr_t)v6436;
	i8 v6438 = (i8)(intptr_t)(ws+3344);
	i8 v6439 = *(i8*)(intptr_t)v6438;
	i8 v6440 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v6441;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v6440)(&v6441, v6439, v6437, v6435, v6431);
	i8 v6442 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6442 = v6441;

	i8 v6443 = (i8)(intptr_t)(ws+3368);
	i8 v6444 = *(i8*)(intptr_t)v6443;
	i8 v6445 = (i8)(intptr_t)(ws+3352);
	i8 v6446 = *(i8*)(intptr_t)v6445;
	i8 v6447 = v6446+(+16);
	*(i8*)(intptr_t)v6447 = v6444;

endsub:;
	*p6378 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0117[] = { 0x6e,0x6f,0x64,0x65,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f71_SimpleError(i8 /* message */);

// PushNode workspace at ws+3472 length ws+8
void f55_PushNode(i8 p6448 /* node */) {
	*(i8*)(intptr_t)(ws+3472) = p6448; /*node */

	i8 v6449 = (i8)(intptr_t)(ws+3472);
	i8 v6450 = *(i8*)(intptr_t)v6449;
	i8 v6451 = (i8)+0;
	if (v6450==v6451) goto c02_0529; else goto c02_0528;

c02_0528:;

	i8 v6452 = (i8)(intptr_t)(ws+224);
	i8 v6453 = *(i8*)(intptr_t)v6452;
	i8 v6454 = (i8)(intptr_t)(ws+224);
	if (v6453==v6454) goto c02_052d; else goto c02_052e;

c02_052d:;

	i8 v6455 = (i8)(intptr_t)c02_s0117;
	i8 v6456 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6456)(v6455);

c02_052e:;

c02_052a:;

	i8 v6457 = (i8)(intptr_t)(ws+3472);
	i8 v6458 = *(i8*)(intptr_t)v6457;
	i8 v6459 = (i8)(intptr_t)(ws+224);
	i8 v6460 = *(i8*)(intptr_t)v6459;
	*(i8*)(intptr_t)v6460 = v6458;

	i8 v6461 = (i8)(intptr_t)(ws+224);
	i8 v6462 = *(i8*)(intptr_t)v6461;
	i8 v6463 = v6462+(+8);
	i8 v6464 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6464 = v6463;

c02_0529:;

c02_0525:;

endsub:;
}

// PopNode workspace at ws+3472 length ws+8
void f56_PopNode(i8* p6465 /* node */) {

	i8 v6466 = (i8)(intptr_t)(ws+224);
	i8 v6467 = *(i8*)(intptr_t)v6466;
	i8 v6468 = v6467+(-8);
	i8 v6469 = (i8)(intptr_t)(ws+224);
	*(i8*)(intptr_t)v6469 = v6468;

	i8 v6470 = (i8)(intptr_t)(ws+224);
	i8 v6471 = *(i8*)(intptr_t)v6470;
	i8 v6472 = *(i8*)(intptr_t)v6471;
	i8 v6473 = (i8)(intptr_t)(ws+3472);
	*(i8*)(intptr_t)v6473 = v6472;

endsub:;
	*p6465 = *(i8*)(intptr_t)(ws+3472);
}
	void f56_PopNode(i8* /* node */);
	void f55_PushNode(i8 /* node */);
	void f55_PushNode(i8 /* node */);

// NextNode workspace at ws+3464 length ws+8
void f57_NextNode(i8* p6474 /* node */) {

	i8 v6475 = (i8)(intptr_t)(f56_PopNode);
	i8 v6476;

	((void(*)(i8* /* node */))(intptr_t)v6475)(&v6476);
	i8 v6477 = (i8)(intptr_t)(ws+3464);
	*(i8*)(intptr_t)v6477 = v6476;

	i8 v6478 = (i8)(intptr_t)(ws+3464);
	i8 v6479 = *(i8*)(intptr_t)v6478;
	i8 v6480 = (i8)+0;
	if (v6479==v6480) goto c02_0533; else goto c02_0532;

c02_0532:;

	i8 v6481 = (i8)(intptr_t)(ws+3464);
	i8 v6482 = *(i8*)(intptr_t)v6481;
	i8 v6483 = v6482+(+24);
	i8 v6484 = *(i8*)(intptr_t)v6483;
	i8 v6485 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6485)(v6484);

	i8 v6486 = (i8)(intptr_t)(ws+3464);
	i8 v6487 = *(i8*)(intptr_t)v6486;
	i8 v6488 = v6487+(+32);
	i8 v6489 = *(i8*)(intptr_t)v6488;
	i8 v6490 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6490)(v6489);

c02_0533:;

c02_052f:;

endsub:;
	*p6474 = *(i8*)(intptr_t)(ws+3464);
}
	void f55_PushNode(i8 /* node */);
	void f57_NextNode(i8* /* node */);
	void f161_FreeNode(i8 /* node */);

// Discard workspace at ws+3440 length ws+24
void f58_Discard(i8 p6491 /* node */) {
	*(i8*)(intptr_t)(ws+3440) = p6491; /*node */

	i8 v6492 = (i8)(intptr_t)(ws+224);
	i8 v6493 = *(i8*)(intptr_t)v6492;
	i8 v6494 = (i8)(intptr_t)(ws+3448);
	*(i8*)(intptr_t)v6494 = v6493;

	i8 v6495 = (i8)(intptr_t)(ws+3440);
	i8 v6496 = *(i8*)(intptr_t)v6495;
	i8 v6497 = (i8)(intptr_t)(f55_PushNode);

	((void(*)(i8 /* node */))(intptr_t)v6497)(v6496);

c02_0536:;

	i8 v6498 = (i8)(intptr_t)(ws+224);
	i8 v6499 = *(i8*)(intptr_t)v6498;
	i8 v6500 = (i8)(intptr_t)(ws+3448);
	i8 v6501 = *(i8*)(intptr_t)v6500;
	if (v6499==v6501) goto c02_0539; else goto c02_0538;

c02_0538:;

	i8 v6502 = (i8)(intptr_t)(f57_NextNode);
	i8 v6503;

	((void(*)(i8* /* node */))(intptr_t)v6502)(&v6503);
	i8 v6504 = (i8)(intptr_t)(ws+3456);
	*(i8*)(intptr_t)v6504 = v6503;

	i8 v6505 = (i8)(intptr_t)(ws+3456);
	i8 v6506 = *(i8*)(intptr_t)v6505;
	i8 v6507 = (i8)(intptr_t)(f161_FreeNode);

	((void(*)(i8 /* node */))(intptr_t)v6507)(v6506);

	goto c02_0536;

c02_0539:;

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);

// BeginNormalLoop workspace at ws+3336 length ws+8
void f278_BeginNormalLoop(i8* p6508 /* ll */) {

	i8 v6509 = (i8)+8;
	i8 v6510 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v6511;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v6510)(&v6511, v6509);
	i8 v6512 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v6512 = v6511;

	i8 v6513 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6514;

	((void(*)(i2* /* label */))(intptr_t)v6513)(&v6514);
	i8 v6515 = (i8)(intptr_t)(ws+3336);
	i8 v6516 = *(i8*)(intptr_t)v6515;
	*(i2*)(intptr_t)v6516 = v6514;

	i8 v6517 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6518;

	((void(*)(i2* /* label */))(intptr_t)v6517)(&v6518);
	i8 v6519 = (i8)(intptr_t)(ws+3336);
	i8 v6520 = *(i8*)(intptr_t)v6519;
	i8 v6521 = v6520+(+2);
	*(i2*)(intptr_t)v6521 = v6518;

	i8 v6522 = (i8)(intptr_t)(ws+52);
	i2 v6523 = *(i2*)(intptr_t)v6522;
	i8 v6524 = (i8)(intptr_t)(ws+3336);
	i8 v6525 = *(i8*)(intptr_t)v6524;
	i8 v6526 = v6525+(+4);
	*(i2*)(intptr_t)v6526 = v6523;

	i8 v6527 = (i8)(intptr_t)(ws+54);
	i2 v6528 = *(i2*)(intptr_t)v6527;
	i8 v6529 = (i8)(intptr_t)(ws+3336);
	i8 v6530 = *(i8*)(intptr_t)v6529;
	i8 v6531 = v6530+(+6);
	*(i2*)(intptr_t)v6531 = v6528;

	i8 v6532 = (i8)(intptr_t)(ws+3336);
	i8 v6533 = *(i8*)(intptr_t)v6532;
	i8 v6534 = v6533+(+2);
	i2 v6535 = *(i2*)(intptr_t)v6534;
	i8 v6536 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6536 = v6535;

	i8 v6537 = (i8)(intptr_t)(ws+3336);
	i8 v6538 = *(i8*)(intptr_t)v6537;
	i2 v6539 = *(i2*)(intptr_t)v6538;
	i8 v6540 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6540 = v6539;

endsub:;
	*p6508 = *(i8*)(intptr_t)(ws+3336);
}
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);

// TerminateNormalLoop workspace at ws+3328 length ws+8
void f279_TerminateNormalLoop(i8 p6541 /* ll */) {
	*(i8*)(intptr_t)(ws+3328) = p6541; /*ll */

	i8 v6542 = (i8)(intptr_t)(ws+54);
	i2 v6543 = *(i2*)(intptr_t)v6542;
	i8 v6544 = (i8)(intptr_t)(f130_MidJump);
	i8 v6545;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6544)(&v6545, v6543);
	i8 v6546 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6546)(v6545);

	i8 v6547 = (i8)(intptr_t)(ws+52);
	i2 v6548 = *(i2*)(intptr_t)v6547;
	i8 v6549 = (i8)(intptr_t)(f132_MidLabel);
	i8 v6550;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v6549)(&v6550, v6548);
	i8 v6551 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6551)(v6550);

	i8 v6552 = (i8)(intptr_t)(ws+3328);
	i8 v6553 = *(i8*)(intptr_t)v6552;
	i8 v6554 = v6553+(+4);
	i2 v6555 = *(i2*)(intptr_t)v6554;
	i8 v6556 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v6556 = v6555;

	i8 v6557 = (i8)(intptr_t)(ws+3328);
	i8 v6558 = *(i8*)(intptr_t)v6557;
	i8 v6559 = v6558+(+6);
	i2 v6560 = *(i2*)(intptr_t)v6559;
	i8 v6561 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v6561 = v6560;

	i8 v6562 = (i8)(intptr_t)(ws+3328);
	i8 v6563 = *(i8*)(intptr_t)v6562;
	i8 v6564 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6564)(v6563);

endsub:;
}

// Negate workspace at ws+3328 length ws+8
void f280_Negate(i8 p6565 /* node */) {
	*(i8*)(intptr_t)(ws+3328) = p6565; /*node */

	i8 v6566 = (i8)(intptr_t)(ws+3328);
	i8 v6567 = *(i8*)(intptr_t)v6566;
	i8 v6568 = v6567+(+6);
	i1 v6569 = *(i1*)(intptr_t)v6568;
	i1 v6570 = v6569^(+1);
	i8 v6571 = (i8)(intptr_t)(ws+3328);
	i8 v6572 = *(i8*)(intptr_t)v6571;
	i8 v6573 = v6572+(+6);
	*(i1*)(intptr_t)v6573 = v6570;

endsub:;
}
	void f268_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f127_MidBeq(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalEq workspace at ws+3328 length ws+37
void f281_ConditionalEq(i8* p6574 /* result */, i1 p6575 /* negated */, i8 p6576 /* rhs */, i8 p6577 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6577; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6576; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6575; /*negated */

	i8 v6578 = (i8)(intptr_t)(ws+3328);
	i8 v6579 = *(i8*)(intptr_t)v6578;
	i8 v6580 = (i8)(intptr_t)(ws+3336);
	i8 v6581 = *(i8*)(intptr_t)v6580;
	i8 v6582 = (i8)(intptr_t)(f268_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6582)(v6581, v6579);

	i8 v6583 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6584;

	((void(*)(i2* /* label */))(intptr_t)v6583)(&v6584);
	i8 v6585 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6585 = v6584;

	i8 v6586 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6587;

	((void(*)(i2* /* label */))(intptr_t)v6586)(&v6587);
	i8 v6588 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6588 = v6587;

	i8 v6589 = (i8)(intptr_t)(ws+3328);
	i8 v6590 = *(i8*)(intptr_t)v6589;
	i8 v6591 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6592;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6591)(&v6592, v6590);
	i8 v6593 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6593 = v6592;

	i8 v6594 = (i8)(intptr_t)(ws+3364);
	i1 v6595 = *(i1*)(intptr_t)v6594;
	i8 v6596 = (i8)(intptr_t)(ws+3328);
	i8 v6597 = *(i8*)(intptr_t)v6596;
	i8 v6598 = (i8)(intptr_t)(ws+3336);
	i8 v6599 = *(i8*)(intptr_t)v6598;
	i8 v6600 = (i8)(intptr_t)(ws+3360);
	i2 v6601 = *(i2*)(intptr_t)v6600;
	i8 v6602 = (i8)(intptr_t)(ws+3362);
	i2 v6603 = *(i2*)(intptr_t)v6602;
	i2 v6604 = (i2)+0;
	i8 v6605 = (i8)(intptr_t)(ws+3344);
	i1 v6606 = *(i1*)(intptr_t)v6605;
	i8 v6607 = (i8)(intptr_t)(f127_MidBeq);
	i8 v6608;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6607)(&v6608, v6606, v6604, v6603, v6601, v6599, v6597, v6595);
	i8 v6609 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6609 = v6608;

endsub:;
	*p6574 = *(i8*)(intptr_t)(ws+3352);
}
	void f268_CondSimple(i8 /* rhs */, i8 /* lhs */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f225_IsSNum(i1* /* result */, i8 /* type */);
	void f136_MidBlts(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f107_MidBltu(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */);

// ConditionalLt workspace at ws+3328 length ws+37
void f282_ConditionalLt(i8* p6610 /* result */, i1 p6611 /* negated */, i8 p6612 /* rhs */, i8 p6613 /* lhs */) {
	*(i8*)(intptr_t)(ws+3328) = p6613; /*lhs */
	*(i8*)(intptr_t)(ws+3336) = p6612; /*rhs */
	*(i1*)(intptr_t)(ws+3344) = p6611; /*negated */

	i8 v6614 = (i8)(intptr_t)(ws+3328);
	i8 v6615 = *(i8*)(intptr_t)v6614;
	i8 v6616 = (i8)(intptr_t)(ws+3336);
	i8 v6617 = *(i8*)(intptr_t)v6616;
	i8 v6618 = (i8)(intptr_t)(f268_CondSimple);

	((void(*)(i8 /* rhs */, i8 /* lhs */))(intptr_t)v6618)(v6617, v6615);

	i8 v6619 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6620;

	((void(*)(i2* /* label */))(intptr_t)v6619)(&v6620);
	i8 v6621 = (i8)(intptr_t)(ws+3360);
	*(i2*)(intptr_t)v6621 = v6620;

	i8 v6622 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v6623;

	((void(*)(i2* /* label */))(intptr_t)v6622)(&v6623);
	i8 v6624 = (i8)(intptr_t)(ws+3362);
	*(i2*)(intptr_t)v6624 = v6623;

	i8 v6625 = (i8)(intptr_t)(ws+3328);
	i8 v6626 = *(i8*)(intptr_t)v6625;
	i8 v6627 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v6628;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v6627)(&v6628, v6626);
	i8 v6629 = (i8)(intptr_t)(ws+3364);
	*(i1*)(intptr_t)v6629 = v6628;

	i8 v6630 = (i8)(intptr_t)(ws+3328);
	i8 v6631 = *(i8*)(intptr_t)v6630;
	i8 v6632 = v6631+(+16);
	i8 v6633 = *(i8*)(intptr_t)v6632;
	i8 v6634 = (i8)(intptr_t)(f225_IsSNum);
	i1 v6635;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6634)(&v6635, v6633);
	i1 v6636 = (i1)+0;
	if (v6635==v6636) goto c02_053e; else goto c02_053d;

c02_053d:;

	i8 v6637 = (i8)(intptr_t)(ws+3364);
	i1 v6638 = *(i1*)(intptr_t)v6637;
	i8 v6639 = (i8)(intptr_t)(ws+3328);
	i8 v6640 = *(i8*)(intptr_t)v6639;
	i8 v6641 = (i8)(intptr_t)(ws+3336);
	i8 v6642 = *(i8*)(intptr_t)v6641;
	i8 v6643 = (i8)(intptr_t)(ws+3360);
	i2 v6644 = *(i2*)(intptr_t)v6643;
	i8 v6645 = (i8)(intptr_t)(ws+3362);
	i2 v6646 = *(i2*)(intptr_t)v6645;
	i2 v6647 = (i2)+0;
	i8 v6648 = (i8)(intptr_t)(ws+3344);
	i1 v6649 = *(i1*)(intptr_t)v6648;
	i8 v6650 = (i8)(intptr_t)(f136_MidBlts);
	i8 v6651;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6650)(&v6651, v6649, v6647, v6646, v6644, v6642, v6640, v6638);
	i8 v6652 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6652 = v6651;

	goto c02_053a;

c02_053e:;

	i8 v6653 = (i8)(intptr_t)(ws+3364);
	i1 v6654 = *(i1*)(intptr_t)v6653;
	i8 v6655 = (i8)(intptr_t)(ws+3328);
	i8 v6656 = *(i8*)(intptr_t)v6655;
	i8 v6657 = (i8)(intptr_t)(ws+3336);
	i8 v6658 = *(i8*)(intptr_t)v6657;
	i8 v6659 = (i8)(intptr_t)(ws+3360);
	i2 v6660 = *(i2*)(intptr_t)v6659;
	i8 v6661 = (i8)(intptr_t)(ws+3362);
	i2 v6662 = *(i2*)(intptr_t)v6661;
	i2 v6663 = (i2)+0;
	i8 v6664 = (i8)(intptr_t)(ws+3344);
	i1 v6665 = *(i1*)(intptr_t)v6664;
	i8 v6666 = (i8)(intptr_t)(f107_MidBltu);
	i8 v6667;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v6666)(&v6667, v6665, v6663, v6662, v6660, v6658, v6656, v6654);
	i8 v6668 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6668 = v6667;

c02_053a:;

endsub:;
	*p6610 = *(i8*)(intptr_t)(ws+3352);
}
const i1 c02_s0118[] = { 0x40,0x6e,0x65,0x78,0x74,0x20,0x61,0x6e,0x64,0x20,0x40,0x70,0x72,0x65,0x76,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x20,0x6f,0x6e,0x20,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// parser_i_bad_next_prev workspace at ws+3328 length ws+0
void f283_parser_i_bad_next_prev(void) {

	i8 v6669 = (i8)(intptr_t)c02_s0118;
	i8 v6670 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6670)(v6669);

endsub:;
}
const i1 c02_s0119[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x20,0x76,0x61,0x6c,0x75,0x65,0x73,0x20,0x61,0x72,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0x20,0x68,0x65,0x72,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// parser_i_constant_error workspace at ws+3352 length ws+0
void f284_parser_i_constant_error(void) {

	i8 v6671 = (i8)(intptr_t)c02_s0119;
	i8 v6672 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6672)(v6671);

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

	i8 v6673 = (i8)(intptr_t)(ws+80);
	i8 v6674 = *(i8*)(intptr_t)v6673;
	i8 v6675 = v6674+(+8);
	i8 v6676 = *(i8*)(intptr_t)v6675;
	i8 v6677 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6677 = v6676;

	i8 v6678 = (i8)(intptr_t)(ws+80);
	i8 v6679 = *(i8*)(intptr_t)v6678;
	i8 v6680 = v6679+(+40);
	i1 v6681 = *(i1*)(intptr_t)v6680;
	i8 v6682 = (i8)(intptr_t)(ws+3376);
	i8 v6683 = *(i8*)(intptr_t)v6682;
	i8 v6684 = v6683+(+80);
	i1 v6685 = *(i1*)(intptr_t)v6684;
	if (v6681==v6685) goto c02_0543; else goto c02_0542;

c02_0542:;

	i8 v6686 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6686)();

	i8 v6687 = (i8)(intptr_t)c02_s011a;
	i8 v6688 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6688)(v6687);

	i8 v6689 = (i8)(intptr_t)(ws+3376);
	i8 v6690 = *(i8*)(intptr_t)v6689;
	i8 v6691 = *(i8*)(intptr_t)v6690;
	i8 v6692 = v6691+(+8);
	i8 v6693 = *(i8*)(intptr_t)v6692;
	i8 v6694 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6694)(v6693);

	i8 v6695 = (i8)(intptr_t)c02_s011b;
	i8 v6696 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6696)(v6695);

	i8 v6697 = (i8)(intptr_t)(ws+3376);
	i8 v6698 = *(i8*)(intptr_t)v6697;
	i8 v6699 = v6698+(+80);
	i1 v6700 = *(i1*)(intptr_t)v6699;
	i8 v6701 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6701)(v6700);

	i8 v6702 = (i8)(intptr_t)c02_s011c;
	i8 v6703 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6703)(v6702);

	i8 v6704 = (i8)(intptr_t)(ws+80);
	i8 v6705 = *(i8*)(intptr_t)v6704;
	i8 v6706 = v6705+(+40);
	i1 v6707 = *(i1*)(intptr_t)v6706;
	i8 v6708 = (i8)(intptr_t)(f17_print_i8);

	((void(*)(i1 /* value */))(intptr_t)v6708)(v6707);

	i8 v6709 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6709)();

c02_0543:;

c02_053f:;

endsub:;
}
	void f197_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f33_Free(i8 /* block */);

// i_end_call workspace at ws+3376 length ws+8
void f286_i_end_call(void) {

	i8 v6710 = (i8)(intptr_t)(ws+40);
	i8 v6711 = *(i8*)(intptr_t)v6710;
	i8 v6712 = (i8)(intptr_t)(ws+80);
	i8 v6713 = *(i8*)(intptr_t)v6712;
	i8 v6714 = v6713+(+8);
	i8 v6715 = *(i8*)(intptr_t)v6714;
	i8 v6716 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v6716)(v6715, v6711);

	i8 v6717 = (i8)(intptr_t)(ws+80);
	i8 v6718 = *(i8*)(intptr_t)v6717;
	i8 v6719 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6719 = v6718;

	i8 v6720 = (i8)(intptr_t)(ws+3376);
	i8 v6721 = *(i8*)(intptr_t)v6720;
	i8 v6722 = v6721+(+16);
	i8 v6723 = *(i8*)(intptr_t)v6722;
	i8 v6724 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v6724 = v6723;

	i8 v6725 = (i8)(intptr_t)(ws+3376);
	i8 v6726 = *(i8*)(intptr_t)v6725;
	i8 v6727 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6727)(v6726);

endsub:;
}
	void f69_StartError(void);
const i1 c02_s011d[] = { 0x61,0x74,0x74,0x65,0x6d,0x70,0x74,0x20,0x74,0x6f,0x20,0x72,0x65,0x64,0x65,0x66,0x69,0x6e,0x65,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// SymbolRedeclarationError workspace at ws+3328 length ws+0
void f287_SymbolRedeclarationError(void) {

	i8 v6728 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6728)();

	i8 v6729 = (i8)(intptr_t)c02_s011d;
	i8 v6730 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6730)(v6729);

	i8 v6731 = (i8)(intptr_t)(ws+72);
	i8 v6732 = *(i8*)(intptr_t)v6731;
	i8 v6733 = v6732+(+32);
	i8 v6734 = *(i8*)(intptr_t)v6733;
	i8 v6735 = v6734+(+8);
	i8 v6736 = *(i8*)(intptr_t)v6735;
	i8 v6737 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6737)(v6736);

	i8 v6738 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6738)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s011e[] = { 0x77,0x72,0x6f,0x6e,0x67,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x20,0x6f,0x66,0x20,0x65,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x73,0x20,0x69,0x6e,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x66,0x6f,0x72,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// WrongNumberOfElementsError workspace at ws+3368 length ws+0
void f288_WrongNumberOfElementsError(void) {

	i8 v6739 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6739)();

	i8 v6740 = (i8)(intptr_t)c02_s011e;
	i8 v6741 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6741)(v6740);

	i8 v6742 = (i8)(intptr_t)(ws+72);
	i8 v6743 = *(i8*)(intptr_t)v6742;
	i8 v6744 = v6743+(+32);
	i8 v6745 = *(i8*)(intptr_t)v6744;
	i8 v6746 = v6745+(+8);
	i8 v6747 = *(i8*)(intptr_t)v6746;
	i8 v6748 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6748)(v6747);

	i8 v6749 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6749)();

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f235_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f288_WrongNumberOfElementsError(void);
	void f288_WrongNumberOfElementsError(void);

// CheckEndOfInitialiser workspace at ws+3328 length ws+4
void f289_CheckEndOfInitialiser(void) {

	i8 v6750 = (i8)(intptr_t)(ws+72);
	i8 v6751 = *(i8*)(intptr_t)v6750;
	i8 v6752 = (i8)(intptr_t)(f222_IsArray);
	i1 v6753;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6752)(&v6753, v6751);
	i1 v6754 = (i1)+0;
	if (v6753==v6754) goto c02_0548; else goto c02_0547;

c02_0547:;

	i8 v6755 = (i8)(intptr_t)(ws+72);
	i8 v6756 = *(i8*)(intptr_t)v6755;
	i8 v6757 = *(i8*)(intptr_t)v6756;
	i8 v6758 = v6757+(+50);
	i2 v6759 = *(i2*)(intptr_t)v6758;
	i8 v6760 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v6760 = v6759;

	i8 v6761 = (i8)(intptr_t)(ws+1560);
	i2 v6762 = *(i2*)(intptr_t)v6761;
	i8 v6763 = (i8)(intptr_t)(ws+72);
	i8 v6764 = *(i8*)(intptr_t)v6763;
	i8 v6765 = *(i8*)(intptr_t)v6764;
	i8 v6766 = v6765+(+53);
	i1 v6767 = *(i1*)(intptr_t)v6766;
	i8 v6768 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v6769;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v6768)(&v6769, v6767, v6762);
	i8 v6770 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v6770 = v6769;

	i8 v6771 = (i8)(intptr_t)(ws+72);
	i8 v6772 = *(i8*)(intptr_t)v6771;
	i8 v6773 = v6772+(+48);
	i2 v6774 = *(i2*)(intptr_t)v6773;
	i2 v6775 = (i2)+0;
	if (v6774==v6775) goto c02_054c; else goto c02_054d;

c02_054c:;

	i8 v6776 = (i8)(intptr_t)(ws+1560);
	i2 v6777 = *(i2*)(intptr_t)v6776;
	i8 v6778 = (i8)(intptr_t)(ws+72);
	i8 v6779 = *(i8*)(intptr_t)v6778;
	i8 v6780 = v6779+(+48);
	*(i2*)(intptr_t)v6780 = v6777;

	i8 v6781 = (i8)(intptr_t)(ws+1560);
	i2 v6782 = *(i2*)(intptr_t)v6781;
	i8 v6783 = (i8)(intptr_t)(ws+3328);
	i2 v6784 = *(i2*)(intptr_t)v6783;
	i2 v6785 = v6782/v6784;
	i8 v6786 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v6786 = v6785;

	i8 v6787 = (i8)(intptr_t)(ws+3330);
	i2 v6788 = *(i2*)(intptr_t)v6787;
	i8 v6789 = (i8)(intptr_t)(ws+72);
	i8 v6790 = *(i8*)(intptr_t)v6789;
	i8 v6791 = v6790+(+8);
	*(i2*)(intptr_t)v6791 = v6788;

	i4 v6792 = (i4)+0;
	i8 v6793 = (i8)(intptr_t)(ws+3330);
	i2 v6794 = *(i2*)(intptr_t)v6793;
	i2 v6795 = v6794+(-1);
	i4 v6796 = v6795;
	i8 v6797 = (i8)(intptr_t)(f235_ArchGuessIntType);
	i8 v6798;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v6797)(&v6798, v6796, v6792);
	i8 v6799 = (i8)(intptr_t)(ws+72);
	i8 v6800 = *(i8*)(intptr_t)v6799;
	i8 v6801 = v6800+(+16);
	*(i8*)(intptr_t)v6801 = v6798;

c02_054d:;

c02_0549:;

	i8 v6802 = (i8)(intptr_t)(ws+1560);
	i2 v6803 = *(i2*)(intptr_t)v6802;
	i8 v6804 = (i8)(intptr_t)(ws+72);
	i8 v6805 = *(i8*)(intptr_t)v6804;
	i8 v6806 = v6805+(+48);
	i2 v6807 = *(i2*)(intptr_t)v6806;
	if (v6803==v6807) goto c02_0552; else goto c02_0551;

c02_0551:;

	i8 v6808 = (i8)(intptr_t)(f288_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6808)();

c02_0552:;

c02_054e:;

	goto c02_0544;

c02_0548:;

	i8 v6809 = (i8)(intptr_t)(ws+1552);
	i8 v6810 = *(i8*)(intptr_t)v6809;
	i8 v6811 = (i8)+0;
	if (v6810==v6811) goto c02_0557; else goto c02_0556;

c02_0556:;

	i8 v6812 = (i8)(intptr_t)(f288_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6812)();

c02_0557:;

c02_0553:;

c02_0544:;

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);

// GetInitedMember workspace at ws+3368 length ws+16
void f290_GetInitedMember(i8* p6813 /* member */, i8* p6814 /* type */) {

	i8 v6815 = (i8)+0;
	i8 v6816 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6816 = v6815;

	i8 v6817 = (i8)(intptr_t)(ws+72);
	i8 v6818 = *(i8*)(intptr_t)v6817;
	i8 v6819 = (i8)(intptr_t)(f222_IsArray);
	i1 v6820;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v6819)(&v6820, v6818);
	i1 v6821 = (i1)+0;
	if (v6820==v6821) goto c02_055c; else goto c02_055b;

c02_055b:;

	i8 v6822 = (i8)(intptr_t)(ws+72);
	i8 v6823 = *(i8*)(intptr_t)v6822;
	i8 v6824 = *(i8*)(intptr_t)v6823;
	i8 v6825 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6825 = v6824;

	goto c02_0558;

c02_055c:;

	i8 v6826 = (i8)(intptr_t)(ws+1552);
	i8 v6827 = *(i8*)(intptr_t)v6826;
	i8 v6828 = (i8)+0;
	if (v6827==v6828) goto c02_0560; else goto c02_0561;

c02_0560:;

	i8 v6829 = (i8)+0;
	i8 v6830 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6830 = v6829;

	goto endsub;

c02_0561:;

c02_055d:;

	i8 v6831 = (i8)(intptr_t)(ws+1552);
	i8 v6832 = *(i8*)(intptr_t)v6831;
	i8 v6833 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v6833 = v6832;

	i8 v6834 = (i8)(intptr_t)(ws+1552);
	i8 v6835 = *(i8*)(intptr_t)v6834;
	i8 v6836 = *(i8*)(intptr_t)v6835;
	i8 v6837 = *(i8*)(intptr_t)v6836;
	i8 v6838 = (i8)(intptr_t)(ws+3376);
	*(i8*)(intptr_t)v6838 = v6837;

	i8 v6839 = (i8)(intptr_t)(ws+1552);
	i8 v6840 = *(i8*)(intptr_t)v6839;
	i8 v6841 = v6840+(+24);
	i8 v6842 = *(i8*)(intptr_t)v6841;
	i8 v6843 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v6843 = v6842;

c02_0558:;

endsub:;
	*p6814 = *(i8*)(intptr_t)(ws+3376);
	*p6813 = *(i8*)(intptr_t)(ws+3368);
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f150_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f251_Generate(i8 /* statement */);

// AlignTo workspace at ws+3368 length ws+4
void f291_AlignTo(i1 p6844 /* alignment */) {
	*(i1*)(intptr_t)(ws+3368) = p6844; /*alignment */

	i8 v6845 = (i8)(intptr_t)(ws+1562);
	i2 v6846 = *(i2*)(intptr_t)v6845;
	i8 v6847 = (i8)(intptr_t)(ws+3368);
	i1 v6848 = *(i1*)(intptr_t)v6847;
	i8 v6849 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v6850;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v6849)(&v6850, v6848, v6846);
	i8 v6851 = (i8)(intptr_t)(ws+3370);
	*(i2*)(intptr_t)v6851 = v6850;

c02_0564:;

	i8 v6852 = (i8)(intptr_t)(ws+1562);
	i2 v6853 = *(i2*)(intptr_t)v6852;
	i8 v6854 = (i8)(intptr_t)(ws+3370);
	i2 v6855 = *(i2*)(intptr_t)v6854;
	if (v6853==v6855) goto c02_0567; else goto c02_0566;

c02_0566:;

	i1 v6856 = (i1)+1;
	i4 v6857 = (i4)+0;
	i8 v6858 = (i8)(intptr_t)(f150_MidInit);
	i8 v6859;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v6858)(&v6859, v6857, v6856);
	i8 v6860 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v6860)(v6859);

	i8 v6861 = (i8)(intptr_t)(ws+1560);
	i2 v6862 = *(i2*)(intptr_t)v6861;
	i2 v6863 = v6862+(+1);
	i8 v6864 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v6864 = v6863;

	i8 v6865 = (i8)(intptr_t)(ws+1562);
	i2 v6866 = *(i2*)(intptr_t)v6865;
	i2 v6867 = v6866+(+1);
	i8 v6868 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v6868 = v6867;

	goto c02_0564;

c02_0567:;

endsub:;
}
const i1 c02_s011f[] = { 0x6f,0x75,0x74,0x20,0x6f,0x66,0x20,0x6f,0x72,0x64,0x65,0x72,0x20,0x73,0x74,0x61,0x74,0x69,0x63,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x61,0x74,0x69,0x6f,0x6e,0 };
	void f71_SimpleError(i8 /* message */);

// CheckForOverlaps workspace at ws+3368 length ws+8
void f292_CheckForOverlaps(i8 p6869 /* member */) {
	*(i8*)(intptr_t)(ws+3368) = p6869; /*member */

	i8 v6870 = (i8)(intptr_t)(ws+3368);
	i8 v6871 = *(i8*)(intptr_t)v6870;
	i8 v6872 = (i8)+0;
	if (v6871==v6872) goto c02_056b; else goto c02_056c;

c02_056b:;

	goto endsub;

c02_056c:;

c02_0568:;

	i8 v6873 = (i8)(intptr_t)(ws+3368);
	i8 v6874 = *(i8*)(intptr_t)v6873;
	i8 v6875 = *(i8*)(intptr_t)v6874;
	i8 v6876 = v6875+(+24);
	i2 v6877 = *(i2*)(intptr_t)v6876;
	i8 v6878 = (i8)(intptr_t)(ws+1560);
	i2 v6879 = *(i2*)(intptr_t)v6878;
	if (v6877<v6879) goto c02_0570; else goto c02_0571;

c02_0570:;

	i8 v6880 = (i8)(intptr_t)c02_s011f;
	i8 v6881 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v6881)(v6880);

c02_0571:;

c02_056d:;

endsub:;
}
	void f290_GetInitedMember(i8* /* member */, i8* /* type */);
	void f288_WrongNumberOfElementsError(void);
	void f291_AlignTo(i1 /* alignment */);
	void f292_CheckForOverlaps(i8 /* member */);

// GetInitedMemberChecked workspace at ws+3352 length ws+16
void f293_GetInitedMemberChecked(i8* p6882 /* member */, i8* p6883 /* type */) {

	i8 v6884 = (i8)(intptr_t)(f290_GetInitedMember);
	i8 v6885;
	i8 v6886;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v6884)(&v6885, &v6886);

	i8 v6887 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v6887 = v6886;

	i8 v6888 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v6888 = v6885;

	i8 v6889 = (i8)(intptr_t)(ws+3360);
	i8 v6890 = *(i8*)(intptr_t)v6889;
	i8 v6891 = (i8)+0;
	if (v6890==v6891) goto c02_0575; else goto c02_0576;

c02_0575:;

	i8 v6892 = (i8)(intptr_t)(f288_WrongNumberOfElementsError);

	((void(*)(void))(intptr_t)v6892)();

c02_0576:;

c02_0572:;

	i8 v6893 = (i8)(intptr_t)(ws+3360);
	i8 v6894 = *(i8*)(intptr_t)v6893;
	i8 v6895 = v6894+(+53);
	i1 v6896 = *(i1*)(intptr_t)v6895;
	i8 v6897 = (i8)(intptr_t)(f291_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v6897)(v6896);

	i8 v6898 = (i8)(intptr_t)(ws+3352);
	i8 v6899 = *(i8*)(intptr_t)v6898;
	i8 v6900 = (i8)(intptr_t)(f292_CheckForOverlaps);

	((void(*)(i8 /* member */))(intptr_t)v6900)(v6899);

endsub:;
	*p6883 = *(i8*)(intptr_t)(ws+3360);
	*p6882 = *(i8*)(intptr_t)(ws+3352);
}
static data f3___main_s0577[] = {




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
static data f3___main_s0578[] = {








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
static data f3___main_s0579[] = {




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
static data f3___main_s057a[] = {




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
static data f3___main_s057b[] = {




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
static data f3___main_s057c[] = {

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

	i8 v6903 = (i8)(intptr_t)(ws+3376);
	i1 v6904 = *(i1*)(intptr_t)v6903;
	i1 v6905 = (i1)+41;
	if (v6904==v6905) goto c02_0582; else goto c02_0584;

c02_0584:;

	i8 v6906 = (i8)(intptr_t)(ws+3376);
	i1 v6907 = *(i1*)(intptr_t)v6906;
	i1 v6908 = (i1)+33;
	if (v6907==v6908) goto c02_0582; else goto c02_0583;

c02_0582:;

	i8 v6909 = (i8)(intptr_t)c02_s0165;
	i8 v6910 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6910)(v6909);

	i8 v6911 = (i8)(intptr_t)(ws+3384);
	i8 v6912 = *(i8*)(intptr_t)v6911;
	i8 v6913 = *(i8*)(intptr_t)v6912;
	i8 v6914 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v6914)(v6913);

c02_0583:;

c02_057d:;

endsub:;
}
	void f295_token_destructor(void);

// yy_destructor workspace at ws+3376 length ws+16
void f294_yy_destructor(i8 p6901 /* yypminor */, i1 p6902 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3376) = p6902; /*yymajor */
	*(i8*)(intptr_t)(ws+3384) = p6901; /*yypminor */


	i8 v6915 = (i8)(intptr_t)(ws+3376);
	i1 v6916 = *(i1*)(intptr_t)v6915;
	i1 v6917 = (i1)+0;
	if (v6916==v6917) goto c02_058b; else goto c02_058c;

c02_058c:;

	i8 v6918 = (i8)(intptr_t)(ws+3376);
	i1 v6919 = *(i1*)(intptr_t)v6918;
	i1 v6920 = (i1)+69;
	if (v6919<v6920) goto c02_058a; else goto c02_058b;

c02_058a:;

	i8 v6921 = (i8)(intptr_t)(f295_token_destructor);

	((void(*)(void))(intptr_t)v6921)();

c02_058b:;

c02_0585:;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// yy_pop_parser_stack workspace at ws+3328 length ws+0
void f296_yy_pop_parser_stack(void) {

	i8 v6922 = (i8)(intptr_t)(ws+1568);
	i8 v6923 = *(i8*)(intptr_t)v6922;
	i8 v6924 = v6923+(-16);
	i8 v6925 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v6925 = v6924;

	i8 v6926 = (i8)(intptr_t)(ws+1568);
	i8 v6927 = *(i8*)(intptr_t)v6926;
	i8 v6928 = v6927+(+2);
	i1 v6929 = *(i1*)(intptr_t)v6928;
	i8 v6930 = (i8)(intptr_t)(ws+1568);
	i8 v6931 = *(i8*)(intptr_t)v6930;
	i8 v6932 = v6931+(+8);
	i8 v6933 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v6933)(v6932, v6929);

endsub:;
}
	void f296_yy_pop_parser_stack(void);

// yy_pop_all_parser_stack workspace at ws+3328 length ws+0
void f297_yy_pop_all_parser_stack(void) {

c02_058f:;

	i8 v6934 = (i8)(intptr_t)(ws+1568);
	i8 v6935 = *(i8*)(intptr_t)v6934;
	i8 v6936 = (i8)(intptr_t)(ws+1576);
	if (v6935==v6936) goto c02_0592; else goto c02_0591;

c02_0591:;

	i8 v6937 = (i8)(intptr_t)(f296_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v6937)();

	goto c02_058f;

c02_0592:;

endsub:;
}
	void f297_yy_pop_all_parser_stack(void);
	void f69_StartError(void);
const i1 c02_s0166[] = { 0x70,0x61,0x72,0x73,0x65,0x72,0x20,0x73,0x74,0x61,0x63,0x6b,0x20,0x6f,0x76,0x65,0x72,0x66,0x6c,0x6f,0x77,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// yy_stack_overflow workspace at ws+3328 length ws+0
void f298_yy_stack_overflow(void) {

	i8 v6938 = (i8)(intptr_t)(f297_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v6938)();

	i8 v6939 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v6939)();

	i8 v6940 = (i8)(intptr_t)c02_s0166;
	i8 v6941 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v6941)(v6940);

	i8 v6942 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v6942)();

endsub:;
}
static data f3___main_s0593[] = {








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
static data f3___main_s0594[] = {








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
	void f30_MemCopy(i8 /* dest */, i8 /* size */, i8 /* src */);

// CopyMinor workspace at ws+3328 length ws+16
void f300_CopyMinor(i8 p6967 /* dest */, i8 p6968 /* src */) {
	*(i8*)(intptr_t)(ws+3328) = p6968; /*src */
	*(i8*)(intptr_t)(ws+3336) = p6967; /*dest */

	i8 v6969 = (i8)(intptr_t)(ws+3328);
	i8 v6970 = *(i8*)(intptr_t)v6969;
	i8 v6971 = (i8)+8;
	i8 v6972 = (i8)(intptr_t)(ws+3336);
	i8 v6973 = *(i8*)(intptr_t)v6972;
	i8 v6974 = (i8)(intptr_t)(f30_MemCopy);

	((void(*)(i8 /* dest */, i8 /* size */, i8 /* src */))(intptr_t)v6974)(v6973, v6971, v6970);

endsub:;
}
	void f298_yy_stack_overflow(void);
	void f300_CopyMinor(i8 /* dest */, i8 /* src */);

// Reducer workspace at ws+3328 length ws+0
void f302_Reducer(void) {

endsub:;
}
	void f158_MidReturn(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_0 workspace at ws+3328 length ws+0
void f303_reduce_0(void) {

	i8 v7016 = (i8)(intptr_t)(f158_MidReturn);
	i8 v7017;

	((void(*)(i8* /* m */))(intptr_t)v7016)(&v7017);
	i8 v7018 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7018)(v7017);

	i1 v7019 = (i1)+22;
	i8 v7020 = (i8)(intptr_t)(ws+3248);
	i8 v7021 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7021)(v7020, v7019);

endsub:;
}
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_1 workspace at ws+3328 length ws+0
void f304_reduce_1(void) {

	i8 v7022 = (i8)(intptr_t)(ws+40);
	i8 v7023 = *(i8*)(intptr_t)v7022;
	i8 v7024 = (i8)(intptr_t)(ws+3272);
	i8 v7025 = *(i8*)(intptr_t)v7024;
	i8 v7026 = (i8)(intptr_t)(ws+3256);
	i8 v7027 = *(i8*)(intptr_t)v7026;
	i8 v7028 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7028)(v7027, v7025, v7023);

	i1 v7029 = (i1)+6;
	i8 v7030 = (i8)(intptr_t)(ws+3264);
	i8 v7031 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7031)(v7030, v7029);

	i1 v7032 = (i1)+22;
	i8 v7033 = (i8)(intptr_t)(ws+3248);
	i8 v7034 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7034)(v7033, v7032);

endsub:;
}
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f149_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f126_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f116_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_2 workspace at ws+3328 length ws+1
void f305_reduce_2(void) {

	i8 v7035 = (i8)(intptr_t)(ws+40);
	i8 v7036 = *(i8*)(intptr_t)v7035;
	i8 v7037 = (i8)(intptr_t)(ws+3288);
	i8 v7038 = *(i8*)(intptr_t)v7037;
	i8 v7039 = (i8)(intptr_t)(ws+3272);
	i8 v7040 = *(i8*)(intptr_t)v7039;
	i8 v7041 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7041)(v7040, v7038, v7036);

	i8 v7042 = (i8)(intptr_t)(ws+3256);
	i8 v7043 = *(i8*)(intptr_t)v7042;
	i8 v7044 = (i8)(intptr_t)(ws+3288);
	i8 v7045 = *(i8*)(intptr_t)v7044;
	i8 v7046 = *(i8*)(intptr_t)v7045;
	i8 v7047 = *(i8*)(intptr_t)v7046;
	i8 v7048 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7048)(v7047, v7043);

	i8 v7049 = (i8)(intptr_t)(ws+3256);
	i8 v7050 = *(i8*)(intptr_t)v7049;
	i8 v7051 = v7050+(+16);
	i8 v7052 = *(i8*)(intptr_t)v7051;
	i8 v7053 = v7052+(+48);
	i2 v7054 = *(i2*)(intptr_t)v7053;
	i1 v7055 = v7054;
	i8 v7056 = (i8)(intptr_t)(ws+3328);
	*(i1*)(intptr_t)v7056 = v7055;

	i8 v7057 = (i8)(intptr_t)(ws+3328);
	i1 v7058 = *(i1*)(intptr_t)v7057;
	i8 v7059 = (i8)(intptr_t)(ws+3256);
	i8 v7060 = *(i8*)(intptr_t)v7059;
	i8 v7061 = (i8)(intptr_t)(ws+3328);
	i1 v7062 = *(i1*)(intptr_t)v7061;
	i8 v7063 = (i8)(intptr_t)(ws+3288);
	i8 v7064 = *(i8*)(intptr_t)v7063;
	i2 v7065 = (i2)+0;
	i8 v7066 = (i8)(intptr_t)(f149_MidAddress);
	i8 v7067;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7066)(&v7067, v7065, v7064);
	i8 v7068 = (i8)(intptr_t)(f126_MidDeref);
	i8 v7069;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7068)(&v7069, v7067, v7062);
	i8 v7070 = (i8)(intptr_t)(f116_MidStore);
	i8 v7071;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7070)(&v7071, v7069, v7060, v7058);
	i8 v7072 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7072)(v7071);

	i1 v7073 = (i1)+6;
	i8 v7074 = (i8)(intptr_t)(ws+3280);
	i8 v7075 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7075)(v7074, v7073);

	i1 v7076 = (i1)+2;
	i8 v7077 = (i8)(intptr_t)(ws+3264);
	i8 v7078 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7078)(v7077, v7076);

	i1 v7079 = (i1)+22;
	i8 v7080 = (i8)(intptr_t)(ws+3248);
	i8 v7081 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7081)(v7080, v7079);

endsub:;
}
const i1 c02_s0169[] = { 0x74,0x79,0x70,0x65,0x73,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x62,0x65,0x20,0x69,0x6e,0x66,0x65,0x72,0x72,0x65,0x64,0x20,0x66,0x6f,0x72,0x20,0x6e,0x75,0x6d,0x65,0x72,0x69,0x63,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f226_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s016a[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x61,0x73,0x73,0x69,0x67,0x6e,0x20,0x74,0x6f,0x20,0x6c,0x76,0x61,0x6c,0x75,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f149_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f126_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f116_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_3 workspace at ws+3328 length ws+9
void f306_reduce_3(void) {

	i8 v7082 = (i8)(intptr_t)(ws+3256);
	i8 v7083 = *(i8*)(intptr_t)v7082;
	i8 v7084 = v7083+(+16);
	i8 v7085 = *(i8*)(intptr_t)v7084;
	i8 v7086 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7086 = v7085;

	i8 v7087 = (i8)(intptr_t)(ws+3328);
	i8 v7088 = *(i8*)(intptr_t)v7087;
	i8 v7089 = (i8)+0;
	if (v7088==v7089) goto c02_05a3; else goto c02_05a4;

c02_05a3:;

	i8 v7090 = (i8)(intptr_t)c02_s0169;
	i8 v7091 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7091)(v7090);

c02_05a4:;

c02_05a0:;

	i8 v7092 = (i8)(intptr_t)(ws+3328);
	i8 v7093 = *(i8*)(intptr_t)v7092;
	i8 v7094 = (i8)(intptr_t)(f226_IsScalar);
	i1 v7095;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7094)(&v7095, v7093);
	i1 v7096 = (i1)+0;
	if (v7095==v7096) goto c02_05a8; else goto c02_05a9;

c02_05a8:;

	i8 v7097 = (i8)(intptr_t)c02_s016a;
	i8 v7098 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7098)(v7097);

c02_05a9:;

c02_05a5:;

	i8 v7099 = (i8)(intptr_t)(ws+40);
	i8 v7100 = *(i8*)(intptr_t)v7099;
	i8 v7101 = (i8)(intptr_t)(ws+3272);
	i8 v7102 = *(i8*)(intptr_t)v7101;
	i8 v7103 = (i8)(intptr_t)(ws+3328);
	i8 v7104 = *(i8*)(intptr_t)v7103;
	i8 v7105 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v7105)(v7104, v7102, v7100);

	i8 v7106 = (i8)(intptr_t)(ws+3256);
	i8 v7107 = *(i8*)(intptr_t)v7106;
	i8 v7108 = (i8)(intptr_t)(ws+3272);
	i8 v7109 = *(i8*)(intptr_t)v7108;
	i8 v7110 = *(i8*)(intptr_t)v7109;
	i8 v7111 = *(i8*)(intptr_t)v7110;
	i8 v7112 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7112)(v7111, v7107);

	i8 v7113 = (i8)(intptr_t)(ws+3256);
	i8 v7114 = *(i8*)(intptr_t)v7113;
	i8 v7115 = v7114+(+16);
	i8 v7116 = *(i8*)(intptr_t)v7115;
	i8 v7117 = v7116+(+48);
	i2 v7118 = *(i2*)(intptr_t)v7117;
	i1 v7119 = v7118;
	i8 v7120 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v7120 = v7119;

	i8 v7121 = (i8)(intptr_t)(ws+3336);
	i1 v7122 = *(i1*)(intptr_t)v7121;
	i8 v7123 = (i8)(intptr_t)(ws+3256);
	i8 v7124 = *(i8*)(intptr_t)v7123;
	i8 v7125 = (i8)(intptr_t)(ws+3336);
	i1 v7126 = *(i1*)(intptr_t)v7125;
	i8 v7127 = (i8)(intptr_t)(ws+3272);
	i8 v7128 = *(i8*)(intptr_t)v7127;
	i2 v7129 = (i2)+0;
	i8 v7130 = (i8)(intptr_t)(f149_MidAddress);
	i8 v7131;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v7130)(&v7131, v7129, v7128);
	i8 v7132 = (i8)(intptr_t)(f126_MidDeref);
	i8 v7133;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7132)(&v7133, v7131, v7126);
	i8 v7134 = (i8)(intptr_t)(f116_MidStore);
	i8 v7135;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7134)(&v7135, v7133, v7124, v7122);
	i8 v7136 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7136)(v7135);

	i1 v7137 = (i1)+2;
	i8 v7138 = (i8)(intptr_t)(ws+3264);
	i8 v7139 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7139)(v7138, v7137);

	i1 v7140 = (i1)+22;
	i8 v7141 = (i8)(intptr_t)(ws+3248);
	i8 v7142 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7142)(v7141, v7140);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f263_CheckExpressionType(i8 /* type */, i8 /* node */);
	void f126_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f116_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_4 workspace at ws+3328 length ws+17
void f307_reduce_4(void) {

	i8 v7143 = (i8)(intptr_t)(ws+3272);
	i8 v7144 = *(i8*)(intptr_t)v7143;
	i8 v7145 = v7144+(+16);
	i8 v7146 = *(i8*)(intptr_t)v7145;
	i8 v7147 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7147 = v7146;

	i8 v7148 = (i8)(intptr_t)(ws+3272);
	i8 v7149 = *(i8*)(intptr_t)v7148;
	i8 v7150 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v7151;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7150)(&v7151, v7149);
	i8 v7152 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v7152 = v7151;

	i8 v7153 = (i8)(intptr_t)(ws+3256);
	i8 v7154 = *(i8*)(intptr_t)v7153;
	i8 v7155 = (i8)(intptr_t)(ws+3328);
	i8 v7156 = *(i8*)(intptr_t)v7155;
	i8 v7157 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v7157)(v7156, v7154);

	i8 v7158 = (i8)(intptr_t)(ws+3328);
	i8 v7159 = *(i8*)(intptr_t)v7158;
	i8 v7160 = v7159+(+48);
	i2 v7161 = *(i2*)(intptr_t)v7160;
	i1 v7162 = v7161;
	i8 v7163 = (i8)(intptr_t)(ws+3344);
	*(i1*)(intptr_t)v7163 = v7162;

	i8 v7164 = (i8)(intptr_t)(ws+3344);
	i1 v7165 = *(i1*)(intptr_t)v7164;
	i8 v7166 = (i8)(intptr_t)(ws+3256);
	i8 v7167 = *(i8*)(intptr_t)v7166;
	i8 v7168 = (i8)(intptr_t)(ws+3344);
	i1 v7169 = *(i1*)(intptr_t)v7168;
	i8 v7170 = (i8)(intptr_t)(ws+3336);
	i8 v7171 = *(i8*)(intptr_t)v7170;
	i8 v7172 = (i8)(intptr_t)(f126_MidDeref);
	i8 v7173;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7172)(&v7173, v7171, v7169);
	i8 v7174 = (i8)(intptr_t)(f116_MidStore);
	i8 v7175;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v7174)(&v7175, v7173, v7167, v7165);
	i8 v7176 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7176)(v7175);

	i1 v7177 = (i1)+2;
	i8 v7178 = (i8)(intptr_t)(ws+3264);
	i8 v7179 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7179)(v7178, v7177);

	i1 v7180 = (i1)+22;
	i8 v7181 = (i8)(intptr_t)(ws+3248);
	i8 v7182 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7182)(v7181, v7180);

endsub:;
}
	void f279_TerminateNormalLoop(i8 /* ll */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_5 workspace at ws+3328 length ws+0
void f308_reduce_5(void) {

	i8 v7183 = (i8)(intptr_t)(ws+3272);
	i8 v7184 = *(i8*)(intptr_t)v7183;
	i8 v7185 = (i8)(intptr_t)(f279_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7185)(v7184);

	i1 v7186 = (i1)+10;
	i8 v7187 = (i8)(intptr_t)(ws+3256);
	i8 v7188 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7188)(v7187, v7186);

	i1 v7189 = (i1)+13;
	i8 v7190 = (i8)(intptr_t)(ws+3248);
	i8 v7191 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7191)(v7190, v7189);

endsub:;
}
	void f278_BeginNormalLoop(i8* /* ll */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_6 workspace at ws+3328 length ws+0
void f309_reduce_6(void) {

	i8 v7192 = (i8)(intptr_t)(f278_BeginNormalLoop);
	i8 v7193;

	((void(*)(i8* /* ll */))(intptr_t)v7192)(&v7193);
	i8 v7194 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7194 = v7193;

	i8 v7195 = (i8)(intptr_t)(ws+54);
	i2 v7196 = *(i2*)(intptr_t)v7195;
	i8 v7197 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7198;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7197)(&v7198, v7196);
	i8 v7199 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7199)(v7198);

endsub:;
}
	void f279_TerminateNormalLoop(i8 /* ll */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_7 workspace at ws+3328 length ws+0
void f310_reduce_7(void) {

	i8 v7200 = (i8)(intptr_t)(ws+3272);
	i8 v7201 = *(i8*)(intptr_t)v7200;
	i8 v7202 = (i8)(intptr_t)(f279_TerminateNormalLoop);

	((void(*)(i8 /* ll */))(intptr_t)v7202)(v7201);

	i1 v7203 = (i1)+10;
	i8 v7204 = (i8)(intptr_t)(ws+3256);
	i8 v7205 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7205)(v7204, v7203);

	i1 v7206 = (i1)+13;
	i8 v7207 = (i8)(intptr_t)(ws+3248);
	i8 v7208 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7208)(v7207, v7206);

endsub:;
}
	void f278_BeginNormalLoop(i8* /* ll */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f252_GenerateConditional(i8 /* rootnode */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_8 workspace at ws+3328 length ws+2
void f311_reduce_8(void) {

	i8 v7209 = (i8)(intptr_t)(f278_BeginNormalLoop);
	i8 v7210;

	((void(*)(i8* /* ll */))(intptr_t)v7209)(&v7210);
	i8 v7211 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7211 = v7210;

	i8 v7212 = (i8)(intptr_t)(ws+54);
	i2 v7213 = *(i2*)(intptr_t)v7212;
	i8 v7214 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7215;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7214)(&v7215, v7213);
	i8 v7216 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7216)(v7215);

	i8 v7217 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7218;

	((void(*)(i2* /* label */))(intptr_t)v7217)(&v7218);
	i8 v7219 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7219 = v7218;

	i8 v7220 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7221;

	((void(*)(i2* /* label */))(intptr_t)v7220)(&v7221);
	i8 v7222 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v7222 = v7221;

	i8 v7223 = (i8)(intptr_t)(ws+3328);
	i2 v7224 = *(i2*)(intptr_t)v7223;
	i8 v7225 = (i8)(intptr_t)(ws+3256);
	i8 v7226 = *(i8*)(intptr_t)v7225;
	*(i2*)(intptr_t)v7226 = v7224;

	i8 v7227 = (i8)(intptr_t)(ws+52);
	i2 v7228 = *(i2*)(intptr_t)v7227;
	i8 v7229 = (i8)(intptr_t)(ws+3256);
	i8 v7230 = *(i8*)(intptr_t)v7229;
	i8 v7231 = v7230+(+2);
	*(i2*)(intptr_t)v7231 = v7228;

	i8 v7232 = (i8)(intptr_t)(ws+3328);
	i2 v7233 = *(i2*)(intptr_t)v7232;
	i8 v7234 = (i8)(intptr_t)(ws+3256);
	i8 v7235 = *(i8*)(intptr_t)v7234;
	i8 v7236 = v7235+(+4);
	*(i2*)(intptr_t)v7236 = v7233;

	i8 v7237 = (i8)(intptr_t)(ws+3256);
	i8 v7238 = *(i8*)(intptr_t)v7237;
	i8 v7239 = (i8)(intptr_t)(f252_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7239)(v7238);

	i8 v7240 = (i8)(intptr_t)(ws+52);
	i2 v7241 = *(i2*)(intptr_t)v7240;
	i8 v7242 = (i8)(intptr_t)(ws+3240);
	i8 v7243 = *(i8*)(intptr_t)v7242;
	i8 v7244 = v7243+(+2);
	*(i2*)(intptr_t)v7244 = v7241;

	i1 v7245 = (i1)+13;
	i8 v7246 = (i8)(intptr_t)(ws+3248);
	i8 v7247 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7247)(v7246, v7245);

endsub:;
}
const i1 c02_s016b[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x62,0x72,0x65,0x61,0x6b,0x20,0x74,0x6f,0 };
	void f71_SimpleError(i8 /* message */);
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_9 workspace at ws+3328 length ws+0
void f312_reduce_9(void) {

	i8 v7248 = (i8)(intptr_t)(ws+52);
	i2 v7249 = *(i2*)(intptr_t)v7248;
	i2 v7250 = (i2)+0;
	if (v7249==v7250) goto c02_05ad; else goto c02_05ae;

c02_05ad:;

	i8 v7251 = (i8)(intptr_t)c02_s016b;
	i8 v7252 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7252)(v7251);

c02_05ae:;

c02_05aa:;

	i8 v7253 = (i8)(intptr_t)(ws+52);
	i2 v7254 = *(i2*)(intptr_t)v7253;
	i8 v7255 = (i8)(intptr_t)(f130_MidJump);
	i8 v7256;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7255)(&v7256, v7254);
	i8 v7257 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7257)(v7256);

	i1 v7258 = (i1)+22;
	i8 v7259 = (i8)(intptr_t)(ws+3248);
	i8 v7260 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7260)(v7259, v7258);

endsub:;
}
const i1 c02_s016c[] = { 0x6e,0x6f,0x74,0x68,0x69,0x6e,0x67,0x20,0x74,0x6f,0x20,0x63,0x6f,0x6e,0x74,0x69,0x6e,0x75,0x65,0x20,0x74,0x6f,0 };
	void f71_SimpleError(i8 /* message */);
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_10 workspace at ws+3328 length ws+0
void f313_reduce_10(void) {

	i8 v7261 = (i8)(intptr_t)(ws+54);
	i2 v7262 = *(i2*)(intptr_t)v7261;
	i2 v7263 = (i2)+0;
	if (v7262==v7263) goto c02_05b2; else goto c02_05b3;

c02_05b2:;

	i8 v7264 = (i8)(intptr_t)c02_s016c;
	i8 v7265 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7265)(v7264);

c02_05b3:;

c02_05af:;

	i8 v7266 = (i8)(intptr_t)(ws+54);
	i2 v7267 = *(i2*)(intptr_t)v7266;
	i8 v7268 = (i8)(intptr_t)(f130_MidJump);
	i8 v7269;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7268)(&v7269, v7267);
	i8 v7270 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7270)(v7269);

	i1 v7271 = (i1)+22;
	i8 v7272 = (i8)(intptr_t)(ws+3248);
	i8 v7273 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7273)(v7272, v7271);

endsub:;
}
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_11 workspace at ws+3328 length ws+8
void f314_reduce_11(void) {

	i8 v7274 = (i8)(intptr_t)(ws+56);
	i8 v7275 = *(i8*)(intptr_t)v7274;
	i2 v7276 = *(i2*)(intptr_t)v7275;
	i8 v7277 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7278;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7277)(&v7278, v7276);
	i8 v7279 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7279)(v7278);

	i8 v7280 = (i8)(intptr_t)(ws+56);
	i8 v7281 = *(i8*)(intptr_t)v7280;
	i8 v7282 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7282 = v7281;

	i8 v7283 = (i8)(intptr_t)(ws+56);
	i8 v7284 = *(i8*)(intptr_t)v7283;
	i8 v7285 = v7284+(+8);
	i8 v7286 = *(i8*)(intptr_t)v7285;
	i8 v7287 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7287 = v7286;

	i8 v7288 = (i8)(intptr_t)(ws+3328);
	i8 v7289 = *(i8*)(intptr_t)v7288;
	i8 v7290 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v7290)(v7289);

	i1 v7291 = (i1)+26;
	i8 v7292 = (i8)(intptr_t)(ws+3280);
	i8 v7293 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7293)(v7292, v7291);

	i1 v7294 = (i1)+10;
	i8 v7295 = (i8)(intptr_t)(ws+3256);
	i8 v7296 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7296)(v7295, v7294);

	i1 v7297 = (i1)+12;
	i8 v7298 = (i8)(intptr_t)(ws+3248);
	i8 v7299 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7299)(v7298, v7297);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);

// reduce_12 workspace at ws+3328 length ws+8
void f315_reduce_12(void) {

	i8 v7300 = (i8)+16;
	i8 v7301 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v7302;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7301)(&v7302, v7300);
	i8 v7303 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7303 = v7302;

	i8 v7304 = (i8)(intptr_t)(ws+56);
	i8 v7305 = *(i8*)(intptr_t)v7304;
	i8 v7306 = (i8)(intptr_t)(ws+3328);
	i8 v7307 = *(i8*)(intptr_t)v7306;
	i8 v7308 = v7307+(+8);
	*(i8*)(intptr_t)v7308 = v7305;

	i8 v7309 = (i8)(intptr_t)(ws+3328);
	i8 v7310 = *(i8*)(intptr_t)v7309;
	i8 v7311 = (i8)(intptr_t)(ws+56);
	*(i8*)(intptr_t)v7311 = v7310;

	i8 v7312 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7313;

	((void(*)(i2* /* label */))(intptr_t)v7312)(&v7313);
	i8 v7314 = (i8)(intptr_t)(ws+56);
	i8 v7315 = *(i8*)(intptr_t)v7314;
	*(i2*)(intptr_t)v7315 = v7313;

endsub:;
}
	void f230_AllocLabel(i2* /* label */);
	void f230_AllocLabel(i2* /* label */);
	void f252_GenerateConditional(i8 /* rootnode */);

// reduce_13 workspace at ws+3328 length ws+4
void f316_reduce_13(void) {

	i8 v7316 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7317;

	((void(*)(i2* /* label */))(intptr_t)v7316)(&v7317);
	i8 v7318 = (i8)(intptr_t)(ws+3328);
	*(i2*)(intptr_t)v7318 = v7317;

	i8 v7319 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7320;

	((void(*)(i2* /* label */))(intptr_t)v7319)(&v7320);
	i8 v7321 = (i8)(intptr_t)(ws+3330);
	*(i2*)(intptr_t)v7321 = v7320;

	i8 v7322 = (i8)(intptr_t)(ws+3328);
	i2 v7323 = *(i2*)(intptr_t)v7322;
	i8 v7324 = (i8)(intptr_t)(ws+56);
	i8 v7325 = *(i8*)(intptr_t)v7324;
	i8 v7326 = v7325+(+2);
	*(i2*)(intptr_t)v7326 = v7323;

	i8 v7327 = (i8)(intptr_t)(ws+3330);
	i2 v7328 = *(i2*)(intptr_t)v7327;
	i8 v7329 = (i8)(intptr_t)(ws+56);
	i8 v7330 = *(i8*)(intptr_t)v7329;
	i8 v7331 = v7330+(+4);
	*(i2*)(intptr_t)v7331 = v7328;

	i8 v7332 = (i8)(intptr_t)(ws+3328);
	i2 v7333 = *(i2*)(intptr_t)v7332;
	i8 v7334 = (i8)(intptr_t)(ws+3248);
	i8 v7335 = *(i8*)(intptr_t)v7334;
	*(i2*)(intptr_t)v7335 = v7333;

	i8 v7336 = (i8)(intptr_t)(ws+3330);
	i2 v7337 = *(i2*)(intptr_t)v7336;
	i8 v7338 = (i8)(intptr_t)(ws+3248);
	i8 v7339 = *(i8*)(intptr_t)v7338;
	i8 v7340 = v7339+(+2);
	*(i2*)(intptr_t)v7340 = v7337;

	i8 v7341 = (i8)(intptr_t)(ws+3328);
	i2 v7342 = *(i2*)(intptr_t)v7341;
	i8 v7343 = (i8)(intptr_t)(ws+3248);
	i8 v7344 = *(i8*)(intptr_t)v7343;
	i8 v7345 = v7344+(+4);
	*(i2*)(intptr_t)v7345 = v7342;

	i8 v7346 = (i8)(intptr_t)(ws+3248);
	i8 v7347 = *(i8*)(intptr_t)v7346;
	i8 v7348 = (i8)(intptr_t)(f252_GenerateConditional);

	((void(*)(i8 /* rootnode */))(intptr_t)v7348)(v7347);

endsub:;
}
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_14 workspace at ws+3328 length ws+0
void f317_reduce_14(void) {

	i8 v7349 = (i8)(intptr_t)(ws+56);
	i8 v7350 = *(i8*)(intptr_t)v7349;
	i8 v7351 = v7350+(+4);
	i2 v7352 = *(i2*)(intptr_t)v7351;
	i8 v7353 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7354;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7353)(&v7354, v7352);
	i8 v7355 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7355)(v7354);

endsub:;
}
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_15 workspace at ws+3328 length ws+0
void f318_reduce_15(void) {

	i8 v7356 = (i8)(intptr_t)(ws+56);
	i8 v7357 = *(i8*)(intptr_t)v7356;
	i2 v7358 = *(i2*)(intptr_t)v7357;
	i8 v7359 = (i8)(intptr_t)(f130_MidJump);
	i8 v7360;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7359)(&v7360, v7358);
	i8 v7361 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7361)(v7360);

	i8 v7362 = (i8)(intptr_t)(ws+56);
	i8 v7363 = *(i8*)(intptr_t)v7362;
	i8 v7364 = v7363+(+4);
	i2 v7365 = *(i2*)(intptr_t)v7364;
	i8 v7366 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7367;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7366)(&v7367, v7365);
	i8 v7368 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7368)(v7367);

endsub:;
}
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);

// reduce_16 workspace at ws+3328 length ws+0
void f319_reduce_16(void) {

	i8 v7369 = (i8)(intptr_t)(ws+56);
	i8 v7370 = *(i8*)(intptr_t)v7369;
	i2 v7371 = *(i2*)(intptr_t)v7370;
	i8 v7372 = (i8)(intptr_t)(f130_MidJump);
	i8 v7373;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7372)(&v7373, v7371);
	i8 v7374 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7374)(v7373);

	i8 v7375 = (i8)(intptr_t)(ws+56);
	i8 v7376 = *(i8*)(intptr_t)v7375;
	i8 v7377 = v7376+(+4);
	i2 v7378 = *(i2*)(intptr_t)v7377;
	i8 v7379 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7380;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7379)(&v7380, v7378);
	i8 v7381 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7381)(v7380);

endsub:;
}
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f106_MidEndcase(i8* /* m */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_17 workspace at ws+3328 length ws+8
void f320_reduce_17(void) {

	i8 v7382 = (i8)(intptr_t)(ws+64);
	i8 v7383 = *(i8*)(intptr_t)v7382;
	i8 v7384 = v7383+(+17);
	i1 v7385 = *(i1*)(intptr_t)v7384;
	i1 v7386 = (i1)+0;
	if (v7385==v7386) goto c02_05bb; else goto c02_05ba;

c02_05bb:;

	i8 v7387 = (i8)(intptr_t)(ws+64);
	i8 v7388 = *(i8*)(intptr_t)v7387;
	i2 v7389 = *(i2*)(intptr_t)v7388;
	i2 v7390 = (i2)+0;
	if (v7389==v7390) goto c02_05ba; else goto c02_05b9;

c02_05b9:;

	i8 v7391 = (i8)(intptr_t)(ws+64);
	i8 v7392 = *(i8*)(intptr_t)v7391;
	i2 v7393 = *(i2*)(intptr_t)v7392;
	i8 v7394 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7395;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7394)(&v7395, v7393);
	i8 v7396 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7396)(v7395);

c02_05ba:;

c02_05b4:;

	i8 v7397 = (i8)(intptr_t)(ws+64);
	i8 v7398 = *(i8*)(intptr_t)v7397;
	i8 v7399 = v7398+(+2);
	i2 v7400 = *(i2*)(intptr_t)v7399;
	i8 v7401 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7402;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7401)(&v7402, v7400);
	i8 v7403 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7403)(v7402);

	i8 v7404 = (i8)(intptr_t)(ws+64);
	i8 v7405 = *(i8*)(intptr_t)v7404;
	i8 v7406 = v7405+(+16);
	i1 v7407 = *(i1*)(intptr_t)v7406;
	i8 v7408 = (i8)(intptr_t)(f106_MidEndcase);
	i8 v7409;

	((void(*)(i8* /* m */, i1 /* width */))(intptr_t)v7408)(&v7409, v7407);
	i8 v7410 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7410)(v7409);

	i8 v7411 = (i8)(intptr_t)(ws+64);
	i8 v7412 = *(i8*)(intptr_t)v7411;
	i8 v7413 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7413 = v7412;

	i8 v7414 = (i8)(intptr_t)(ws+3328);
	i8 v7415 = *(i8*)(intptr_t)v7414;
	i8 v7416 = v7415+(+8);
	i8 v7417 = *(i8*)(intptr_t)v7416;
	i8 v7418 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7418 = v7417;

	i8 v7419 = (i8)(intptr_t)(ws+3328);
	i8 v7420 = *(i8*)(intptr_t)v7419;
	i8 v7421 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v7421)(v7420);

	i1 v7422 = (i1)+10;
	i8 v7423 = (i8)(intptr_t)(ws+3264);
	i8 v7424 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7424)(v7423, v7422);

	i1 v7425 = (i1)+64;
	i8 v7426 = (i8)(intptr_t)(ws+3256);
	i8 v7427 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7427)(v7426, v7425);

	i1 v7428 = (i1)+22;
	i8 v7429 = (i8)(intptr_t)(ws+3248);
	i8 v7430 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7430)(v7429, v7428);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f230_AllocLabel(i2* /* label */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s016d[] = { 0x63,0x61,0x73,0x65,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x77,0x6f,0x72,0x6b,0x73,0x20,0x6f,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f162_NodeWidth(i1* /* width */, i8 /* node */);
	void f134_MidStartcase(i8* /* m */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_18 workspace at ws+3328 length ws+8
void f321_reduce_18(void) {

	i8 v7431 = (i8)+18;
	i8 v7432 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v7433;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v7432)(&v7433, v7431);
	i8 v7434 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7434 = v7433;

	i8 v7435 = (i8)(intptr_t)(ws+64);
	i8 v7436 = *(i8*)(intptr_t)v7435;
	i8 v7437 = (i8)(intptr_t)(ws+3328);
	i8 v7438 = *(i8*)(intptr_t)v7437;
	i8 v7439 = v7438+(+8);
	*(i8*)(intptr_t)v7439 = v7436;

	i8 v7440 = (i8)(intptr_t)(ws+52);
	i2 v7441 = *(i2*)(intptr_t)v7440;
	i8 v7442 = (i8)(intptr_t)(ws+3328);
	i8 v7443 = *(i8*)(intptr_t)v7442;
	i8 v7444 = v7443+(+4);
	*(i2*)(intptr_t)v7444 = v7441;

	i8 v7445 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7446;

	((void(*)(i2* /* label */))(intptr_t)v7445)(&v7446);
	i8 v7447 = (i8)(intptr_t)(ws+3328);
	i8 v7448 = *(i8*)(intptr_t)v7447;
	i8 v7449 = v7448+(+2);
	*(i2*)(intptr_t)v7449 = v7446;

	i8 v7450 = (i8)(intptr_t)(ws+3328);
	i8 v7451 = *(i8*)(intptr_t)v7450;
	i8 v7452 = (i8)(intptr_t)(ws+64);
	*(i8*)(intptr_t)v7452 = v7451;

	i8 v7453 = (i8)(intptr_t)(ws+3256);
	i8 v7454 = *(i8*)(intptr_t)v7453;
	i8 v7455 = v7454+(+16);
	i8 v7456 = *(i8*)(intptr_t)v7455;
	i8 v7457 = (i8)(intptr_t)(f224_IsNum);
	i1 v7458;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7457)(&v7458, v7456);
	i1 v7459 = (i1)+0;
	if (v7458==v7459) goto c02_05bf; else goto c02_05c0;

c02_05bf:;

	i8 v7460 = (i8)(intptr_t)c02_s016d;
	i8 v7461 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7461)(v7460);

c02_05c0:;

c02_05bc:;

	i8 v7462 = (i8)(intptr_t)(ws+3256);
	i8 v7463 = *(i8*)(intptr_t)v7462;
	i8 v7464 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v7465;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v7464)(&v7465, v7463);
	i8 v7466 = (i8)(intptr_t)(ws+3328);
	i8 v7467 = *(i8*)(intptr_t)v7466;
	i8 v7468 = v7467+(+16);
	*(i1*)(intptr_t)v7468 = v7465;

	i8 v7469 = (i8)(intptr_t)(ws+3328);
	i8 v7470 = *(i8*)(intptr_t)v7469;
	i8 v7471 = v7470+(+16);
	i1 v7472 = *(i1*)(intptr_t)v7471;
	i8 v7473 = (i8)(intptr_t)(ws+3256);
	i8 v7474 = *(i8*)(intptr_t)v7473;
	i8 v7475 = (i8)(intptr_t)(f134_MidStartcase);
	i8 v7476;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v7475)(&v7476, v7474, v7472);
	i8 v7477 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7477)(v7476);

	i1 v7478 = (i1)+65;
	i8 v7479 = (i8)(intptr_t)(ws+3248);
	i8 v7480 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7480)(v7479, v7478);

endsub:;
}
const i1 c02_s016e[] = { 0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x6d,0x75,0x73,0x74,0x20,0x67,0x6f,0x20,0x6c,0x61,0x73,0x74,0 };
	void f71_SimpleError(i8 /* message */);
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f230_AllocLabel(i2* /* label */);
	void f105_MidWhencase(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_19 workspace at ws+3328 length ws+0
void f322_reduce_19(void) {

	i8 v7481 = (i8)(intptr_t)(ws+64);
	i8 v7482 = *(i8*)(intptr_t)v7481;
	i8 v7483 = v7482+(+17);
	i1 v7484 = *(i1*)(intptr_t)v7483;
	i1 v7485 = (i1)+0;
	if (v7484==v7485) goto c02_05c5; else goto c02_05c4;

c02_05c4:;

	i8 v7486 = (i8)(intptr_t)c02_s016e;
	i8 v7487 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7487)(v7486);

c02_05c5:;

c02_05c1:;

	i8 v7488 = (i8)(intptr_t)(ws+64);
	i8 v7489 = *(i8*)(intptr_t)v7488;
	i2 v7490 = *(i2*)(intptr_t)v7489;
	i2 v7491 = (i2)+0;
	if (v7490==v7491) goto c02_05ca; else goto c02_05c9;

c02_05c9:;

	i8 v7492 = (i8)(intptr_t)(ws+64);
	i8 v7493 = *(i8*)(intptr_t)v7492;
	i8 v7494 = v7493+(+2);
	i2 v7495 = *(i2*)(intptr_t)v7494;
	i8 v7496 = (i8)(intptr_t)(f130_MidJump);
	i8 v7497;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7496)(&v7497, v7495);
	i8 v7498 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7498)(v7497);

	i8 v7499 = (i8)(intptr_t)(ws+64);
	i8 v7500 = *(i8*)(intptr_t)v7499;
	i2 v7501 = *(i2*)(intptr_t)v7500;
	i8 v7502 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7503;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7502)(&v7503, v7501);
	i8 v7504 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7504)(v7503);

c02_05ca:;

c02_05c6:;

	i8 v7505 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v7506;

	((void(*)(i2* /* label */))(intptr_t)v7505)(&v7506);
	i8 v7507 = (i8)(intptr_t)(ws+64);
	i8 v7508 = *(i8*)(intptr_t)v7507;
	*(i2*)(intptr_t)v7508 = v7506;

	i8 v7509 = (i8)(intptr_t)(ws+64);
	i8 v7510 = *(i8*)(intptr_t)v7509;
	i8 v7511 = v7510+(+16);
	i1 v7512 = *(i1*)(intptr_t)v7511;
	i8 v7513 = (i8)(intptr_t)(ws+3256);
	i4 v7514 = *(i4*)(intptr_t)v7513;
	i8 v7515 = (i8)(intptr_t)(ws+64);
	i8 v7516 = *(i8*)(intptr_t)v7515;
	i2 v7517 = *(i2*)(intptr_t)v7516;
	i8 v7518 = (i8)(intptr_t)(f105_MidWhencase);
	i8 v7519;

	((void(*)(i8* /* m */, i2 /* falselabel */, i4 /* value */, i1 /* width */))(intptr_t)v7518)(&v7519, v7517, v7514, v7512);
	i8 v7520 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7520)(v7519);

	i1 v7521 = (i1)+6;
	i8 v7522 = (i8)(intptr_t)(ws+3248);
	i8 v7523 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7523)(v7522, v7521);

endsub:;
}
const i1 c02_s016f[] = { 0x6f,0x6e,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x77,0x68,0x65,0x6e,0x20,0x65,0x6c,0x73,0x65,0x20,0x61,0x6c,0x6c,0x6f,0x77,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f130_MidJump(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f132_MidLabel(i8* /* m */, i2 /* label */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_20 workspace at ws+3328 length ws+0
void f323_reduce_20(void) {

	i8 v7524 = (i8)(intptr_t)(ws+64);
	i8 v7525 = *(i8*)(intptr_t)v7524;
	i8 v7526 = v7525+(+17);
	i1 v7527 = *(i1*)(intptr_t)v7526;
	i1 v7528 = (i1)+0;
	if (v7527==v7528) goto c02_05cf; else goto c02_05ce;

c02_05ce:;

	i8 v7529 = (i8)(intptr_t)c02_s016f;
	i8 v7530 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7530)(v7529);

c02_05cf:;

c02_05cb:;

	i8 v7531 = (i8)(intptr_t)(ws+64);
	i8 v7532 = *(i8*)(intptr_t)v7531;
	i2 v7533 = *(i2*)(intptr_t)v7532;
	i2 v7534 = (i2)+0;
	if (v7533==v7534) goto c02_05d4; else goto c02_05d3;

c02_05d3:;

	i8 v7535 = (i8)(intptr_t)(ws+64);
	i8 v7536 = *(i8*)(intptr_t)v7535;
	i8 v7537 = v7536+(+2);
	i2 v7538 = *(i2*)(intptr_t)v7537;
	i8 v7539 = (i8)(intptr_t)(f130_MidJump);
	i8 v7540;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7539)(&v7540, v7538);
	i8 v7541 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7541)(v7540);

	i8 v7542 = (i8)(intptr_t)(ws+64);
	i8 v7543 = *(i8*)(intptr_t)v7542;
	i2 v7544 = *(i2*)(intptr_t)v7543;
	i8 v7545 = (i8)(intptr_t)(f132_MidLabel);
	i8 v7546;

	((void(*)(i8* /* m */, i2 /* label */))(intptr_t)v7545)(&v7546, v7544);
	i8 v7547 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v7547)(v7546);

c02_05d4:;

c02_05d0:;

	i2 v7548 = (i2)+0;
	i8 v7549 = (i8)(intptr_t)(ws+64);
	i8 v7550 = *(i8*)(intptr_t)v7549;
	*(i2*)(intptr_t)v7550 = v7548;

	i1 v7551 = (i1)+1;
	i8 v7552 = (i8)(intptr_t)(ws+64);
	i8 v7553 = *(i8*)(intptr_t)v7552;
	i8 v7554 = v7553+(+17);
	*(i1*)(intptr_t)v7554 = v7551;

	i1 v7555 = (i1)+9;
	i8 v7556 = (i8)(intptr_t)(ws+3256);
	i8 v7557 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7557)(v7556, v7555);

	i1 v7558 = (i1)+6;
	i8 v7559 = (i8)(intptr_t)(ws+3248);
	i8 v7560 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7560)(v7559, v7558);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_21 workspace at ws+3328 length ws+0
void f324_reduce_21(void) {

	i8 v7561 = (i8)(intptr_t)(ws+3256);
	i8 v7562 = *(i8*)(intptr_t)v7561;
	i8 v7563 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7563 = v7562;

	i1 v7564 = (i1)+4;
	i8 v7565 = (i8)(intptr_t)(ws+3248);
	i8 v7566 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7566)(v7565, v7564);

endsub:;
}
	void f280_Negate(i8 /* node */);

// reduce_22 workspace at ws+3328 length ws+0
void f325_reduce_22(void) {

	i8 v7567 = (i8)(intptr_t)(ws+3248);
	i8 v7568 = *(i8*)(intptr_t)v7567;
	i8 v7569 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7569 = v7568;

	i8 v7570 = (i8)(intptr_t)(ws+3248);
	i8 v7571 = *(i8*)(intptr_t)v7570;
	i8 v7572 = (i8)(intptr_t)(f280_Negate);

	((void(*)(i8 /* node */))(intptr_t)v7572)(v7571);

endsub:;
}
	void f101_MidBand(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_23 workspace at ws+3328 length ws+0
void f326_reduce_23(void) {

	i8 v7573 = (i8)(intptr_t)(ws+3264);
	i8 v7574 = *(i8*)(intptr_t)v7573;
	i8 v7575 = (i8)(intptr_t)(ws+3248);
	i8 v7576 = *(i8*)(intptr_t)v7575;
	i2 v7577 = (i2)+0;
	i2 v7578 = (i2)+0;
	i2 v7579 = (i2)+0;
	i1 v7580 = (i1)+0;
	i8 v7581 = (i8)(intptr_t)(f101_MidBand);
	i8 v7582;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7581)(&v7582, v7580, v7579, v7578, v7577, v7576, v7574);
	i8 v7583 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7583 = v7582;

	i1 v7584 = (i1)+46;
	i8 v7585 = (i8)(intptr_t)(ws+3256);
	i8 v7586 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7586)(v7585, v7584);

endsub:;
}
	void f147_MidBor(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_24 workspace at ws+3328 length ws+0
void f327_reduce_24(void) {

	i8 v7587 = (i8)(intptr_t)(ws+3264);
	i8 v7588 = *(i8*)(intptr_t)v7587;
	i8 v7589 = (i8)(intptr_t)(ws+3248);
	i8 v7590 = *(i8*)(intptr_t)v7589;
	i2 v7591 = (i2)+0;
	i2 v7592 = (i2)+0;
	i2 v7593 = (i2)+0;
	i1 v7594 = (i1)+0;
	i8 v7595 = (i8)(intptr_t)(f147_MidBor);
	i8 v7596;

	((void(*)(i8* /* m */, i1 /* negated */, i2 /* fallthrough */, i2 /* falselabel */, i2 /* truelabel */, i8 /* right */, i8 /* left */))(intptr_t)v7595)(&v7596, v7594, v7593, v7592, v7591, v7590, v7588);
	i8 v7597 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7597 = v7596;

	i1 v7598 = (i1)+47;
	i8 v7599 = (i8)(intptr_t)(ws+3256);
	i8 v7600 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7600)(v7599, v7598);

endsub:;
}
	void f281_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_25 workspace at ws+3328 length ws+0
void f328_reduce_25(void) {

	i8 v7601 = (i8)(intptr_t)(ws+3264);
	i8 v7602 = *(i8*)(intptr_t)v7601;
	i8 v7603 = (i8)(intptr_t)(ws+3248);
	i8 v7604 = *(i8*)(intptr_t)v7603;
	i1 v7605 = (i1)+0;
	i8 v7606 = (i8)(intptr_t)(f281_ConditionalEq);
	i8 v7607;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7606)(&v7607, v7605, v7604, v7602);
	i8 v7608 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7608 = v7607;

	i1 v7609 = (i1)+54;
	i8 v7610 = (i8)(intptr_t)(ws+3256);
	i8 v7611 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7611)(v7610, v7609);

endsub:;
}
	void f281_ConditionalEq(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_26 workspace at ws+3328 length ws+0
void f329_reduce_26(void) {

	i8 v7612 = (i8)(intptr_t)(ws+3264);
	i8 v7613 = *(i8*)(intptr_t)v7612;
	i8 v7614 = (i8)(intptr_t)(ws+3248);
	i8 v7615 = *(i8*)(intptr_t)v7614;
	i1 v7616 = (i1)+1;
	i8 v7617 = (i8)(intptr_t)(f281_ConditionalEq);
	i8 v7618;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7617)(&v7618, v7616, v7615, v7613);
	i8 v7619 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7619 = v7618;

	i1 v7620 = (i1)+55;
	i8 v7621 = (i8)(intptr_t)(ws+3256);
	i8 v7622 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7622)(v7621, v7620);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_27 workspace at ws+3328 length ws+0
void f330_reduce_27(void) {

	i8 v7623 = (i8)(intptr_t)(ws+3264);
	i8 v7624 = *(i8*)(intptr_t)v7623;
	i8 v7625 = (i8)(intptr_t)(ws+3248);
	i8 v7626 = *(i8*)(intptr_t)v7625;
	i1 v7627 = (i1)+0;
	i8 v7628 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7629;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7628)(&v7629, v7627, v7626, v7624);
	i8 v7630 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7630 = v7629;

	i1 v7631 = (i1)+50;
	i8 v7632 = (i8)(intptr_t)(ws+3256);
	i8 v7633 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7633)(v7632, v7631);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_28 workspace at ws+3328 length ws+0
void f331_reduce_28(void) {

	i8 v7634 = (i8)(intptr_t)(ws+3264);
	i8 v7635 = *(i8*)(intptr_t)v7634;
	i8 v7636 = (i8)(intptr_t)(ws+3248);
	i8 v7637 = *(i8*)(intptr_t)v7636;
	i1 v7638 = (i1)+1;
	i8 v7639 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7640;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7639)(&v7640, v7638, v7637, v7635);
	i8 v7641 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7641 = v7640;

	i1 v7642 = (i1)+53;
	i8 v7643 = (i8)(intptr_t)(ws+3256);
	i8 v7644 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7644)(v7643, v7642);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_29 workspace at ws+3328 length ws+0
void f332_reduce_29(void) {

	i8 v7645 = (i8)(intptr_t)(ws+3248);
	i8 v7646 = *(i8*)(intptr_t)v7645;
	i8 v7647 = (i8)(intptr_t)(ws+3264);
	i8 v7648 = *(i8*)(intptr_t)v7647;
	i1 v7649 = (i1)+0;
	i8 v7650 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7651;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7650)(&v7651, v7649, v7648, v7646);
	i8 v7652 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7652 = v7651;

	i1 v7653 = (i1)+52;
	i8 v7654 = (i8)(intptr_t)(ws+3256);
	i8 v7655 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7655)(v7654, v7653);

endsub:;
}
	void f282_ConditionalLt(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_30 workspace at ws+3328 length ws+0
void f333_reduce_30(void) {

	i8 v7656 = (i8)(intptr_t)(ws+3248);
	i8 v7657 = *(i8*)(intptr_t)v7656;
	i8 v7658 = (i8)(intptr_t)(ws+3264);
	i8 v7659 = *(i8*)(intptr_t)v7658;
	i1 v7660 = (i1)+1;
	i8 v7661 = (i8)(intptr_t)(f282_ConditionalLt);
	i8 v7662;

	((void(*)(i8* /* result */, i1 /* negated */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7661)(&v7662, v7660, v7659, v7657);
	i8 v7663 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7663 = v7662;

	i1 v7664 = (i1)+51;
	i8 v7665 = (i8)(intptr_t)(ws+3256);
	i8 v7666 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7666)(v7665, v7664);

endsub:;
}
	void f125_MidConstant(i8* /* m */, i4 /* value */);

// reduce_31 workspace at ws+3328 length ws+0
void f334_reduce_31(void) {

	i8 v7667 = (i8)(intptr_t)(ws+3248);
	i4 v7668 = *(i4*)(intptr_t)v7667;
	i8 v7669 = (i8)(intptr_t)(f125_MidConstant);
	i8 v7670;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7669)(&v7670, v7668);
	i8 v7671 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7671 = v7670;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_32 workspace at ws+3328 length ws+0
void f335_reduce_32(void) {

	i8 v7672 = (i8)(intptr_t)(ws+3256);
	i8 v7673 = *(i8*)(intptr_t)v7672;
	i8 v7674 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7674 = v7673;

	i1 v7675 = (i1)+4;
	i8 v7676 = (i8)(intptr_t)(ws+3248);
	i8 v7677 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7677)(v7676, v7675);

endsub:;
}

// reduce_33 workspace at ws+3328 length ws+0
void f336_reduce_33(void) {

	i8 v7678 = (i8)(intptr_t)(ws+3248);
	i8 v7679 = *(i8*)(intptr_t)v7678;
	i8 v7680 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7680 = v7679;

endsub:;
}
	void f269_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_34 workspace at ws+3328 length ws+0
void f337_reduce_34(void) {

	i1 v7681 = (i1)+116;
	i8 v7682 = (i8)(intptr_t)(ws+3248);
	i8 v7683 = *(i8*)(intptr_t)v7682;
	i8 v7684 = (i8)(intptr_t)(f269_Expr1Simple);
	i8 v7685;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7684)(&v7685, v7683, v7681);
	i8 v7686 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7686 = v7685;

endsub:;
}
	void f269_Expr1Simple(i8* /* result */, i8 /* lhs */, i1 /* op */);

// reduce_35 workspace at ws+3328 length ws+0
void f338_reduce_35(void) {

	i1 v7687 = (i1)+111;
	i8 v7688 = (i8)(intptr_t)(ws+3248);
	i8 v7689 = *(i8*)(intptr_t)v7688;
	i8 v7690 = (i8)(intptr_t)(f269_Expr1Simple);
	i8 v7691;

	((void(*)(i8* /* result */, i8 /* lhs */, i1 /* op */))(intptr_t)v7690)(&v7691, v7689, v7687);
	i8 v7692 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7692 = v7691;

endsub:;
}
	void f270_ExprAdd(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_36 workspace at ws+3328 length ws+0
void f339_reduce_36(void) {

	i8 v7693 = (i8)(intptr_t)(ws+3264);
	i8 v7694 = *(i8*)(intptr_t)v7693;
	i8 v7695 = (i8)(intptr_t)(ws+3248);
	i8 v7696 = *(i8*)(intptr_t)v7695;
	i8 v7697 = (i8)(intptr_t)(f270_ExprAdd);
	i8 v7698;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7697)(&v7698, v7696, v7694);
	i8 v7699 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7699 = v7698;

	i1 v7700 = (i1)+19;
	i8 v7701 = (i8)(intptr_t)(ws+3256);
	i8 v7702 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7702)(v7701, v7700);

endsub:;
}
	void f272_ExprSub(i8* /* result */, i8 /* rhs */, i8 /* lhs */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_37 workspace at ws+3328 length ws+0
void f340_reduce_37(void) {

	i8 v7703 = (i8)(intptr_t)(ws+3264);
	i8 v7704 = *(i8*)(intptr_t)v7703;
	i8 v7705 = (i8)(intptr_t)(ws+3248);
	i8 v7706 = *(i8*)(intptr_t)v7705;
	i8 v7707 = (i8)(intptr_t)(f272_ExprSub);
	i8 v7708;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */))(intptr_t)v7707)(&v7708, v7706, v7704);
	i8 v7709 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7709 = v7708;

	i1 v7710 = (i1)+14;
	i8 v7711 = (i8)(intptr_t)(ws+3256);
	i8 v7712 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7712)(v7711, v7710);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_38 workspace at ws+3328 length ws+0
void f341_reduce_38(void) {

	i1 v7713 = (i1)+166;
	i1 v7714 = (i1)+166;
	i8 v7715 = (i8)(intptr_t)(ws+3264);
	i8 v7716 = *(i8*)(intptr_t)v7715;
	i8 v7717 = (i8)(intptr_t)(ws+3248);
	i8 v7718 = *(i8*)(intptr_t)v7717;
	i8 v7719 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7720;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7719)(&v7720, v7718, v7716, v7714, v7713);
	i8 v7721 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7721 = v7720;

	i1 v7722 = (i1)+24;
	i8 v7723 = (i8)(intptr_t)(ws+3256);
	i8 v7724 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7724)(v7723, v7722);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_39 workspace at ws+3328 length ws+0
void f342_reduce_39(void) {

	i1 v7725 = (i1)+146;
	i1 v7726 = (i1)+141;
	i8 v7727 = (i8)(intptr_t)(ws+3264);
	i8 v7728 = *(i8*)(intptr_t)v7727;
	i8 v7729 = (i8)(intptr_t)(ws+3248);
	i8 v7730 = *(i8*)(intptr_t)v7729;
	i8 v7731 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7732;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7731)(&v7732, v7730, v7728, v7726, v7725);
	i8 v7733 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7733 = v7732;

	i1 v7734 = (i1)+23;
	i8 v7735 = (i8)(intptr_t)(ws+3256);
	i8 v7736 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7736)(v7735, v7734);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_40 workspace at ws+3328 length ws+0
void f343_reduce_40(void) {

	i1 v7737 = (i1)+156;
	i1 v7738 = (i1)+151;
	i8 v7739 = (i8)(intptr_t)(ws+3264);
	i8 v7740 = *(i8*)(intptr_t)v7739;
	i8 v7741 = (i8)(intptr_t)(ws+3248);
	i8 v7742 = *(i8*)(intptr_t)v7741;
	i8 v7743 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7744;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7743)(&v7744, v7742, v7740, v7738, v7737);
	i8 v7745 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7745 = v7744;

	i1 v7746 = (i1)+18;
	i8 v7747 = (i8)(intptr_t)(ws+3256);
	i8 v7748 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7748)(v7747, v7746);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_41 workspace at ws+3328 length ws+0
void f344_reduce_41(void) {

	i1 v7749 = (i1)+181;
	i1 v7750 = (i1)+181;
	i8 v7751 = (i8)(intptr_t)(ws+3264);
	i8 v7752 = *(i8*)(intptr_t)v7751;
	i8 v7753 = (i8)(intptr_t)(ws+3248);
	i8 v7754 = *(i8*)(intptr_t)v7753;
	i8 v7755 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7756;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7755)(&v7756, v7754, v7752, v7750, v7749);
	i8 v7757 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7757 = v7756;

	i1 v7758 = (i1)+49;
	i8 v7759 = (i8)(intptr_t)(ws+3256);
	i8 v7760 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7760)(v7759, v7758);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_42 workspace at ws+3328 length ws+0
void f345_reduce_42(void) {

	i1 v7761 = (i1)+171;
	i1 v7762 = (i1)+171;
	i8 v7763 = (i8)(intptr_t)(ws+3264);
	i8 v7764 = *(i8*)(intptr_t)v7763;
	i8 v7765 = (i8)(intptr_t)(ws+3248);
	i8 v7766 = *(i8*)(intptr_t)v7765;
	i8 v7767 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7768;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7767)(&v7768, v7766, v7764, v7762, v7761);
	i8 v7769 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7769 = v7768;

	i1 v7770 = (i1)+59;
	i8 v7771 = (i8)(intptr_t)(ws+3256);
	i8 v7772 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7772)(v7771, v7770);

endsub:;
}
	void f274_Expr2Simple(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_43 workspace at ws+3328 length ws+0
void f346_reduce_43(void) {

	i1 v7773 = (i1)+176;
	i1 v7774 = (i1)+176;
	i8 v7775 = (i8)(intptr_t)(ws+3264);
	i8 v7776 = *(i8*)(intptr_t)v7775;
	i8 v7777 = (i8)(intptr_t)(ws+3248);
	i8 v7778 = *(i8*)(intptr_t)v7777;
	i8 v7779 = (i8)(intptr_t)(f274_Expr2Simple);
	i8 v7780;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7779)(&v7780, v7778, v7776, v7774, v7773);
	i8 v7781 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7781 = v7780;

	i1 v7782 = (i1)+48;
	i8 v7783 = (i8)(intptr_t)(ws+3256);
	i8 v7784 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7784)(v7783, v7782);

endsub:;
}
	void f277_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_44 workspace at ws+3328 length ws+0
void f347_reduce_44(void) {

	i1 v7785 = (i1)+121;
	i1 v7786 = (i1)+121;
	i8 v7787 = (i8)(intptr_t)(ws+3264);
	i8 v7788 = *(i8*)(intptr_t)v7787;
	i8 v7789 = (i8)(intptr_t)(ws+3248);
	i8 v7790 = *(i8*)(intptr_t)v7789;
	i8 v7791 = (i8)(intptr_t)(f277_ExprShift);
	i8 v7792;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7791)(&v7792, v7790, v7788, v7786, v7785);
	i8 v7793 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7793 = v7792;

	i1 v7794 = (i1)+56;
	i8 v7795 = (i8)(intptr_t)(ws+3256);
	i8 v7796 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7796)(v7795, v7794);

endsub:;
}
	void f277_ExprShift(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_45 workspace at ws+3328 length ws+0
void f348_reduce_45(void) {

	i1 v7797 = (i1)+131;
	i1 v7798 = (i1)+126;
	i8 v7799 = (i8)(intptr_t)(ws+3264);
	i8 v7800 = *(i8*)(intptr_t)v7799;
	i8 v7801 = (i8)(intptr_t)(ws+3248);
	i8 v7802 = *(i8*)(intptr_t)v7801;
	i8 v7803 = (i8)(intptr_t)(f277_ExprShift);
	i8 v7804;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* uop */, i1 /* sop */))(intptr_t)v7803)(&v7804, v7802, v7800, v7798, v7797);
	i8 v7805 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7805 = v7804;

	i1 v7806 = (i1)+57;
	i8 v7807 = (i8)(intptr_t)(ws+3256);
	i8 v7808 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7808)(v7807, v7806);

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
void f349_reduce_46(void) {

	i8 v7809 = (i8)(intptr_t)(ws+3248);
	i8 v7810 = *(i8*)(intptr_t)v7809;
	i8 v7811 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v7811)(v7810);

	i8 v7812 = (i8)(intptr_t)(ws+3264);
	i8 v7813 = *(i8*)(intptr_t)v7812;
	i8 v7814 = v7813+(+40);
	i1 v7815 = *(i1*)(intptr_t)v7814;
	i1 v7816 = (i1)+45;
	if (v7815==v7816) goto c02_05db; else goto c02_05dc;

c02_05dc:;

	i8 v7817 = (i8)(intptr_t)(ws+3264);
	i8 v7818 = *(i8*)(intptr_t)v7817;
	i8 v7819 = v7818+(+16);
	i8 v7820 = *(i8*)(intptr_t)v7819;
	i8 v7821 = v7820+(+48);
	i2 v7822 = *(i2*)(intptr_t)v7821;
	i8 v7823 = (i8)(intptr_t)(ws+3248);
	i8 v7824 = *(i8*)(intptr_t)v7823;
	i8 v7825 = v7824+(+48);
	i2 v7826 = *(i2*)(intptr_t)v7825;
	if (v7822==v7826) goto c02_05db; else goto c02_05da;

c02_05da:;

	i8 v7827 = (i8)(intptr_t)(ws+3264);
	i8 v7828 = *(i8*)(intptr_t)v7827;
	i8 v7829 = v7828+(+16);
	i8 v7830 = *(i8*)(intptr_t)v7829;
	i8 v7831 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7832;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7831)(&v7832, v7830);
	i1 v7833 = (i1)+0;
	if (v7832==v7833) goto c02_05e4; else goto c02_05e2;

c02_05e4:;

	i8 v7834 = (i8)(intptr_t)(ws+3248);
	i8 v7835 = *(i8*)(intptr_t)v7834;
	i8 v7836 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7837;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7836)(&v7837, v7835);
	i1 v7838 = (i1)+0;
	if (v7837==v7838) goto c02_05e3; else goto c02_05e2;

c02_05e2:;

	i8 v7839 = (i8)(intptr_t)c02_s0170;
	i8 v7840 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7840)(v7839);

c02_05e3:;

c02_05dd:;

	i8 v7841 = (i8)(intptr_t)(ws+3248);
	i8 v7842 = *(i8*)(intptr_t)v7841;
	i8 v7843 = v7842+(+48);
	i2 v7844 = *(i2*)(intptr_t)v7843;
	i1 v7845 = v7844;
	i8 v7846 = (i8)(intptr_t)(ws+3264);
	i8 v7847 = *(i8*)(intptr_t)v7846;
	i8 v7848 = (i8)(intptr_t)(ws+3264);
	i8 v7849 = *(i8*)(intptr_t)v7848;
	i8 v7850 = v7849+(+16);
	i8 v7851 = *(i8*)(intptr_t)v7850;
	i8 v7852 = (i8)(intptr_t)(f225_IsSNum);
	i1 v7853;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7852)(&v7853, v7851);
	i8 v7854 = (i8)(intptr_t)(f169_MidCCast);
	i8 v7855;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v7854)(&v7855, v7853, v7847, v7845);
	i8 v7856 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7856 = v7855;

	goto c02_05d5;

c02_05db:;

	i8 v7857 = (i8)(intptr_t)(ws+3264);
	i8 v7858 = *(i8*)(intptr_t)v7857;
	i8 v7859 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7859 = v7858;

c02_05d5:;

	i8 v7860 = (i8)(intptr_t)(ws+3248);
	i8 v7861 = *(i8*)(intptr_t)v7860;
	i8 v7862 = (i8)(intptr_t)(ws+3240);
	i8 v7863 = *(i8*)(intptr_t)v7862;
	i8 v7864 = v7863+(+16);
	*(i8*)(intptr_t)v7864 = v7861;

	i1 v7865 = (i1)+58;
	i8 v7866 = (i8)(intptr_t)(ws+3256);
	i8 v7867 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7867)(v7866, v7865);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f226_IsScalar(i1* /* result */, i8 /* type */);
const i1 c02_s0171[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x74,0x61,0x6b,0x65,0x20,0x74,0x68,0x65,0x20,0x61,0x64,0x64,0x72,0x65,0x73,0x73,0x20,0x6f,0x66,0x20,0x73,0x63,0x61,0x6c,0x61,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_47 workspace at ws+3328 length ws+8
void f350_reduce_47(void) {

	i8 v7868 = (i8)(intptr_t)(ws+3248);
	i8 v7869 = *(i8*)(intptr_t)v7868;
	i8 v7870 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v7871;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7870)(&v7871, v7869);
	i8 v7872 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7872 = v7871;

	i8 v7873 = (i8)(intptr_t)(ws+3240);
	i8 v7874 = *(i8*)(intptr_t)v7873;
	i8 v7875 = v7874+(+40);
	i1 v7876 = *(i1*)(intptr_t)v7875;
	i1 v7877 = (i1)+47;
	if (v7876==v7877) goto c02_05e8; else goto c02_05e9;

c02_05e8:;

	i8 v7878 = (i8)(intptr_t)(ws+3240);
	i8 v7879 = *(i8*)(intptr_t)v7878;
	i8 v7880 = *(i8*)(intptr_t)v7879;
	i8 v7881 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v7881 = v7880;

	i8 v7882 = (i8)(intptr_t)(ws+3328);
	i8 v7883 = *(i8*)(intptr_t)v7882;
	i8 v7884 = *(i8*)(intptr_t)v7883;
	i8 v7885 = *(i8*)(intptr_t)v7884;
	i8 v7886 = (i8)(intptr_t)(f226_IsScalar);
	i1 v7887;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7886)(&v7887, v7885);
	i1 v7888 = (i1)+0;
	if (v7887==v7888) goto c02_05ee; else goto c02_05ed;

c02_05ed:;

	i8 v7889 = (i8)(intptr_t)c02_s0171;
	i8 v7890 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7890)(v7889);

c02_05ee:;

c02_05ea:;

c02_05e9:;

c02_05e5:;

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_48 workspace at ws+3328 length ws+0
void f351_reduce_48(void) {

	i8 v7891 = (i8)(intptr_t)(ws+3248);
	i8 v7892 = *(i8*)(intptr_t)v7891;
	i8 v7893 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v7894;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v7893)(&v7894, v7892);
	i8 v7895 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7895 = v7894;

	i1 v7896 = (i1)+59;
	i8 v7897 = (i8)(intptr_t)(ws+3256);
	i8 v7898 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v7898)(v7897, v7896);

endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f283_parser_i_bad_next_prev(void);
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_49 workspace at ws+3328 length ws+0
void f352_reduce_49(void) {

	i8 v7899 = (i8)(intptr_t)(ws+3248);
	i8 v7900 = *(i8*)(intptr_t)v7899;
	i8 v7901 = v7900+(+16);
	i8 v7902 = *(i8*)(intptr_t)v7901;
	i8 v7903 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7904;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7903)(&v7904, v7902);
	i1 v7905 = (i1)+0;
	if (v7904==v7905) goto c02_05f2; else goto c02_05f3;

c02_05f2:;

	i8 v7906 = (i8)(intptr_t)(f283_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v7906)();

c02_05f3:;

c02_05ef:;

	i1 v7907 = (i1)+161;
	i8 v7908 = (i8)(intptr_t)(ws+1528);
	i8 v7909 = *(i8*)(intptr_t)v7908;
	i8 v7910 = v7909+(+48);
	i2 v7911 = *(i2*)(intptr_t)v7910;
	i1 v7912 = v7911;
	i8 v7913 = (i8)(intptr_t)(ws+3248);
	i8 v7914 = *(i8*)(intptr_t)v7913;
	i8 v7915 = (i8)(intptr_t)(ws+3248);
	i8 v7916 = *(i8*)(intptr_t)v7915;
	i8 v7917 = v7916+(+16);
	i8 v7918 = *(i8*)(intptr_t)v7917;
	i8 v7919 = *(i8*)(intptr_t)v7918;
	i8 v7920 = v7919+(+50);
	i2 v7921 = *(i2*)(intptr_t)v7920;
	i4 v7922 = v7921;
	i8 v7923 = (i8)(intptr_t)(f125_MidConstant);
	i8 v7924;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7923)(&v7924, v7922);
	i8 v7925 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v7926;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7925)(&v7926, v7924, v7914, v7912, v7907);
	i8 v7927 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7927 = v7926;

	i8 v7928 = (i8)(intptr_t)(ws+3248);
	i8 v7929 = *(i8*)(intptr_t)v7928;
	i8 v7930 = v7929+(+16);
	i8 v7931 = *(i8*)(intptr_t)v7930;
	i8 v7932 = (i8)(intptr_t)(ws+3240);
	i8 v7933 = *(i8*)(intptr_t)v7932;
	i8 v7934 = v7933+(+16);
	*(i8*)(intptr_t)v7934 = v7931;

endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f283_parser_i_bad_next_prev(void);
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);

// reduce_50 workspace at ws+3328 length ws+0
void f353_reduce_50(void) {

	i8 v7935 = (i8)(intptr_t)(ws+3248);
	i8 v7936 = *(i8*)(intptr_t)v7935;
	i8 v7937 = v7936+(+16);
	i8 v7938 = *(i8*)(intptr_t)v7937;
	i8 v7939 = (i8)(intptr_t)(f63_IsPtr);
	i1 v7940;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7939)(&v7940, v7938);
	i1 v7941 = (i1)+0;
	if (v7940==v7941) goto c02_05f7; else goto c02_05f8;

c02_05f7:;

	i8 v7942 = (i8)(intptr_t)(f283_parser_i_bad_next_prev);

	((void(*)(void))(intptr_t)v7942)();

c02_05f8:;

c02_05f4:;

	i1 v7943 = (i1)+136;
	i8 v7944 = (i8)(intptr_t)(ws+1528);
	i8 v7945 = *(i8*)(intptr_t)v7944;
	i8 v7946 = v7945+(+48);
	i2 v7947 = *(i2*)(intptr_t)v7946;
	i1 v7948 = v7947;
	i8 v7949 = (i8)(intptr_t)(ws+3248);
	i8 v7950 = *(i8*)(intptr_t)v7949;
	i8 v7951 = (i8)(intptr_t)(ws+3248);
	i8 v7952 = *(i8*)(intptr_t)v7951;
	i8 v7953 = v7952+(+16);
	i8 v7954 = *(i8*)(intptr_t)v7953;
	i8 v7955 = *(i8*)(intptr_t)v7954;
	i8 v7956 = v7955+(+50);
	i2 v7957 = *(i2*)(intptr_t)v7956;
	i4 v7958 = v7957;
	i8 v7959 = (i8)(intptr_t)(f125_MidConstant);
	i8 v7960;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7959)(&v7960, v7958);
	i8 v7961 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v7962;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v7961)(&v7962, v7960, v7950, v7948, v7943);
	i8 v7963 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7963 = v7962;

	i8 v7964 = (i8)(intptr_t)(ws+3248);
	i8 v7965 = *(i8*)(intptr_t)v7964;
	i8 v7966 = v7965+(+16);
	i8 v7967 = *(i8*)(intptr_t)v7966;
	i8 v7968 = (i8)(intptr_t)(ws+3240);
	i8 v7969 = *(i8*)(intptr_t)v7968;
	i8 v7970 = v7969+(+16);
	*(i8*)(intptr_t)v7970 = v7967;

endsub:;
}
	void f125_MidConstant(i8* /* m */, i4 /* value */);

// reduce_51 workspace at ws+3328 length ws+0
void f354_reduce_51(void) {

	i8 v7971 = (i8)(intptr_t)(ws+3248);
	i8 v7972 = *(i8*)(intptr_t)v7971;
	i8 v7973 = v7972+(+48);
	i2 v7974 = *(i2*)(intptr_t)v7973;
	i4 v7975 = v7974;
	i8 v7976 = (i8)(intptr_t)(f125_MidConstant);
	i8 v7977;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7976)(&v7977, v7975);
	i8 v7978 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7978 = v7977;

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);
const i1 c02_s0172[] = { 0x61,0x72,0x72,0x61,0x79,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);
	void f125_MidConstant(i8* /* m */, i4 /* value */);

// reduce_52 workspace at ws+3328 length ws+0
void f355_reduce_52(void) {

	i8 v7979 = (i8)(intptr_t)(ws+3248);
	i8 v7980 = *(i8*)(intptr_t)v7979;
	i8 v7981 = (i8)(intptr_t)(f222_IsArray);
	i1 v7982;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v7981)(&v7982, v7980);
	i1 v7983 = (i1)+0;
	if (v7982==v7983) goto c02_05fc; else goto c02_05fd;

c02_05fc:;

	i8 v7984 = (i8)(intptr_t)c02_s0172;
	i8 v7985 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v7985)(v7984);

c02_05fd:;

c02_05f9:;

	i8 v7986 = (i8)(intptr_t)(ws+3248);
	i8 v7987 = *(i8*)(intptr_t)v7986;
	i8 v7988 = v7987+(+8);
	i2 v7989 = *(i2*)(intptr_t)v7988;
	i4 v7990 = v7989;
	i8 v7991 = (i8)(intptr_t)(f125_MidConstant);
	i8 v7992;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v7991)(&v7992, v7990);
	i8 v7993 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v7993 = v7992;

endsub:;
}
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s0173[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x20,0x76,0x61,0x6c,0x75,0x65,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// not_a_value workspace at ws+3328 length ws+0
void f357_not_a_value(void) {

	i8 v7994 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v7994)();

	i8 v7995 = (i8)(intptr_t)(ws+3248);
	i8 v7996 = *(i8*)(intptr_t)v7995;
	i8 v7997 = v7996+(+8);
	i8 v7998 = *(i8*)(intptr_t)v7997;
	i8 v7999 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v7999)(v7998);

	i8 v8000 = (i8)(intptr_t)c02_s0173;
	i8 v8001 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8001)(v8000);

	i8 v8002 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8002)();

endsub:;
}
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f149_MidAddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f145_MidSubref(i8* /* m */, i8 /* subr */);
	void f357_not_a_value(void);
	void f357_not_a_value(void);

// reduce_53 workspace at ws+3328 length ws+0
void f356_reduce_53(void) {


	i8 v8003 = (i8)(intptr_t)(ws+3248);
	i8 v8004 = *(i8*)(intptr_t)v8003;
	i8 v8005 = v8004+(+32);
	i1 v8006 = *(i1*)(intptr_t)v8005;

	if (v8006 != +7) goto c02_05ff;

	i8 v8007 = (i8)(intptr_t)(ws+3248);
	i8 v8008 = *(i8*)(intptr_t)v8007;
	i4 v8009 = *(i4*)(intptr_t)v8008;
	i8 v8010 = (i8)(intptr_t)(f125_MidConstant);
	i8 v8011;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8010)(&v8011, v8009);
	i8 v8012 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8012 = v8011;

	goto c02_05fe;

c02_05ff:;

	if (v8006 != +28) goto c02_0600;

	i8 v8013 = (i8)(intptr_t)(ws+3248);
	i8 v8014 = *(i8*)(intptr_t)v8013;
	i2 v8015 = (i2)+0;
	i8 v8016 = (i8)(intptr_t)(f149_MidAddress);
	i8 v8017;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v8016)(&v8017, v8015, v8014);
	i8 v8018 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8018 = v8017;

	i8 v8019 = (i8)(intptr_t)(ws+3248);
	i8 v8020 = *(i8*)(intptr_t)v8019;
	i8 v8021 = *(i8*)(intptr_t)v8020;
	i8 v8022 = *(i8*)(intptr_t)v8021;
	i8 v8023 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8024;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8023)(&v8024, v8022);
	i8 v8025 = (i8)(intptr_t)(ws+3240);
	i8 v8026 = *(i8*)(intptr_t)v8025;
	i8 v8027 = v8026+(+16);
	*(i8*)(intptr_t)v8027 = v8024;

	i8 v8028 = (i8)(intptr_t)(ws+3240);
	i8 v8029 = *(i8*)(intptr_t)v8028;
	i8 v8030 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8031;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8030)(&v8031, v8029);
	i8 v8032 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8032 = v8031;

	goto c02_05fe;

c02_0600:;

	if (v8006 != +30) goto c02_0601;

	i8 v8033 = (i8)(intptr_t)(ws+3248);
	i8 v8034 = *(i8*)(intptr_t)v8033;
	i8 v8035 = *(i8*)(intptr_t)v8034;
	i8 v8036 = v8035+(+52);
	i1 v8037 = *(i1*)(intptr_t)v8036;
	i1 v8038 = (i1)+6;
	if (v8037==v8038) goto c02_0605; else goto c02_0606;

c02_0605:;

	i8 v8039 = (i8)(intptr_t)(ws+3248);
	i8 v8040 = *(i8*)(intptr_t)v8039;
	i8 v8041 = *(i8*)(intptr_t)v8040;
	i8 v8042 = *(i8*)(intptr_t)v8041;
	i8 v8043 = (i8)(intptr_t)(f145_MidSubref);
	i8 v8044;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v8043)(&v8044, v8042);
	i8 v8045 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8045 = v8044;

	i8 v8046 = (i8)(intptr_t)(ws+3248);
	i8 v8047 = *(i8*)(intptr_t)v8046;
	i8 v8048 = *(i8*)(intptr_t)v8047;
	i8 v8049 = *(i8*)(intptr_t)v8048;
	i8 v8050 = v8049+(+48);
	i8 v8051 = *(i8*)(intptr_t)v8050;
	i8 v8052 = v8051+(+40);
	i8 v8053 = *(i8*)(intptr_t)v8052;
	i8 v8054 = (i8)(intptr_t)(ws+3240);
	i8 v8055 = *(i8*)(intptr_t)v8054;
	i8 v8056 = v8055+(+16);
	*(i8*)(intptr_t)v8056 = v8053;

	goto c02_0602;

c02_0606:;

	i8 v8057 = (i8)(intptr_t)(f357_not_a_value);

	((void(*)(void))(intptr_t)v8057)();

c02_0602:;

	goto c02_05fe;

c02_0601:;

	i8 v8058 = (i8)(intptr_t)(f357_not_a_value);

	((void(*)(void))(intptr_t)v8058)();

c02_05fe:;


endsub:;
}
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0174[] = { 0x63,0x61,0x6e,0x6e,0x6f,0x74,0x20,0x64,0x65,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x20,0x6e,0x6f,0x6e,0x2d,0x70,0x6f,0x69,0x6e,0x74,0x65,0x72,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_54 workspace at ws+3328 length ws+0
void f358_reduce_54(void) {

	i8 v8059 = (i8)(intptr_t)(ws+3256);
	i8 v8060 = *(i8*)(intptr_t)v8059;
	i8 v8061 = v8060+(+16);
	i8 v8062 = *(i8*)(intptr_t)v8061;
	i8 v8063 = (i8)(intptr_t)(f63_IsPtr);
	i1 v8064;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8063)(&v8064, v8062);
	i1 v8065 = (i1)+0;
	if (v8064==v8065) goto c02_060a; else goto c02_060b;

c02_060a:;

	i8 v8066 = (i8)(intptr_t)c02_s0174;
	i8 v8067 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8067)(v8066);

c02_060b:;

c02_0607:;

	i8 v8068 = (i8)(intptr_t)(ws+3256);
	i8 v8069 = *(i8*)(intptr_t)v8068;
	i8 v8070 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8071;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8070)(&v8071, v8069);
	i8 v8072 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8072 = v8071;

	i1 v8073 = (i1)+5;
	i8 v8074 = (i8)(intptr_t)(ws+3248);
	i8 v8075 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8075)(v8074, v8073);

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
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_55 workspace at ws+3328 length ws+48
void f359_reduce_55(void) {

	i8 v8076 = (i8)(intptr_t)(ws+3272);
	i8 v8077 = *(i8*)(intptr_t)v8076;
	i8 v8078 = v8077+(+16);
	i8 v8079 = *(i8*)(intptr_t)v8078;
	i8 v8080 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8080 = v8079;

	i8 v8081 = (i8)(intptr_t)(ws+3272);
	i8 v8082 = *(i8*)(intptr_t)v8081;
	i8 v8083 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v8084;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8083)(&v8084, v8082);
	i8 v8085 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8085 = v8084;

	i8 v8086 = (i8)(intptr_t)(ws+3328);
	i8 v8087 = *(i8*)(intptr_t)v8086;
	i8 v8088 = (i8)(intptr_t)(f222_IsArray);
	i1 v8089;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8088)(&v8089, v8087);
	i1 v8090 = (i1)+0;
	if (v8089==v8090) goto c02_060f; else goto c02_0610;

c02_060f:;

	i8 v8091 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8091)();

	i8 v8092 = (i8)(intptr_t)c02_s0175;
	i8 v8093 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8093)(v8092);

	i8 v8094 = (i8)(intptr_t)(ws+3328);
	i8 v8095 = *(i8*)(intptr_t)v8094;
	i8 v8096 = v8095+(+32);
	i8 v8097 = *(i8*)(intptr_t)v8096;
	i8 v8098 = v8097+(+8);
	i8 v8099 = *(i8*)(intptr_t)v8098;
	i8 v8100 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8100)(v8099);

	i8 v8101 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8101)();

c02_0610:;

c02_060c:;

	i8 v8102 = (i8)(intptr_t)(ws+3256);
	i8 v8103 = *(i8*)(intptr_t)v8102;
	i8 v8104 = (i8)(intptr_t)(ws+3328);
	i8 v8105 = *(i8*)(intptr_t)v8104;
	i8 v8106 = v8105+(+16);
	i8 v8107 = *(i8*)(intptr_t)v8106;
	i8 v8108 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8108)(v8107, v8103);

	i8 v8109 = (i8)(intptr_t)(ws+3256);
	i8 v8110 = *(i8*)(intptr_t)v8109;
	i8 v8111 = v8110+(+16);
	i8 v8112 = *(i8*)(intptr_t)v8111;
	i8 v8113 = (i8)(intptr_t)(f224_IsNum);
	i1 v8114;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8113)(&v8114, v8112);
	i1 v8115 = (i1)+0;
	if (v8114==v8115) goto c02_0614; else goto c02_0615;

c02_0614:;

	i8 v8116 = (i8)(intptr_t)c02_s0176;
	i8 v8117 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8117)(v8116);

c02_0615:;

c02_0611:;

	i8 v8118 = (i8)(intptr_t)(ws+3328);
	i8 v8119 = *(i8*)(intptr_t)v8118;
	i8 v8120 = *(i8*)(intptr_t)v8119;
	i8 v8121 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8121 = v8120;

	i8 v8122 = (i8)(intptr_t)(ws+1528);
	i8 v8123 = *(i8*)(intptr_t)v8122;
	i8 v8124 = v8123+(+48);
	i2 v8125 = *(i2*)(intptr_t)v8124;
	i1 v8126 = v8125;
	i8 v8127 = (i8)(intptr_t)(ws+3352);
	*(i1*)(intptr_t)v8127 = v8126;

	i1 v8128 = (i1)+166;
	i8 v8129 = (i8)(intptr_t)(ws+3352);
	i1 v8130 = *(i1*)(intptr_t)v8129;
	i8 v8131 = (i8)(intptr_t)(ws+1528);
	i8 v8132 = *(i8*)(intptr_t)v8131;
	i8 v8133 = v8132+(+48);
	i2 v8134 = *(i2*)(intptr_t)v8133;
	i1 v8135 = v8134;
	i8 v8136 = (i8)(intptr_t)(ws+3256);
	i8 v8137 = *(i8*)(intptr_t)v8136;
	i1 v8138 = (i1)+0;
	i8 v8139 = (i8)(intptr_t)(f169_MidCCast);
	i8 v8140;

	((void(*)(i8* /* result */, i1 /* issigned */, i8 /* lhs */, i1 /* width */))(intptr_t)v8139)(&v8140, v8138, v8137, v8135);
	i8 v8141 = (i8)(intptr_t)(ws+3344);
	i8 v8142 = *(i8*)(intptr_t)v8141;
	i8 v8143 = v8142+(+50);
	i2 v8144 = *(i2*)(intptr_t)v8143;
	i4 v8145 = v8144;
	i8 v8146 = (i8)(intptr_t)(f125_MidConstant);
	i8 v8147;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8146)(&v8147, v8145);
	i8 v8148 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v8149;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8148)(&v8149, v8147, v8140, v8130, v8128);
	i8 v8150 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8150 = v8149;

	i8 v8151 = (i8)(intptr_t)(ws+1528);
	i8 v8152 = *(i8*)(intptr_t)v8151;
	i8 v8153 = (i8)(intptr_t)(ws+3360);
	i8 v8154 = *(i8*)(intptr_t)v8153;
	i8 v8155 = v8154+(+16);
	*(i8*)(intptr_t)v8155 = v8152;

	i1 v8156 = (i1)+161;
	i8 v8157 = (i8)(intptr_t)(ws+3352);
	i1 v8158 = *(i1*)(intptr_t)v8157;
	i8 v8159 = (i8)(intptr_t)(ws+3336);
	i8 v8160 = *(i8*)(intptr_t)v8159;
	i8 v8161 = (i8)(intptr_t)(ws+3360);
	i8 v8162 = *(i8*)(intptr_t)v8161;
	i8 v8163 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v8164;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8163)(&v8164, v8162, v8160, v8158, v8156);
	i8 v8165 = (i8)(intptr_t)(ws+3368);
	*(i8*)(intptr_t)v8165 = v8164;

	i8 v8166 = (i8)(intptr_t)(ws+3344);
	i8 v8167 = *(i8*)(intptr_t)v8166;
	i8 v8168 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8169;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8168)(&v8169, v8167);
	i8 v8170 = (i8)(intptr_t)(ws+3368);
	i8 v8171 = *(i8*)(intptr_t)v8170;
	i8 v8172 = v8171+(+16);
	*(i8*)(intptr_t)v8172 = v8169;

	i8 v8173 = (i8)(intptr_t)(ws+3368);
	i8 v8174 = *(i8*)(intptr_t)v8173;
	i8 v8175 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8176;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8175)(&v8176, v8174);
	i8 v8177 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8177 = v8176;

	i1 v8178 = (i1)+17;
	i8 v8179 = (i8)(intptr_t)(ws+3264);
	i8 v8180 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8180)(v8179, v8178);

	i1 v8181 = (i1)+5;
	i8 v8182 = (i8)(intptr_t)(ws+3248);
	i8 v8183 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8183)(v8182, v8181);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
	void f218_CheckNotPartialType(i8 /* type */);
	void f126_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
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
	void f125_MidConstant(i8* /* m */, i4 /* value */);
	void f168_MidC2Op(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f228_MakeLValue(i8* /* lvalue */, i8 /* address */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_56 workspace at ws+3328 length ws+24
void f360_reduce_56(void) {

	i8 v8184 = (i8)(intptr_t)(ws+3264);
	i8 v8185 = *(i8*)(intptr_t)v8184;
	i8 v8186 = v8185+(+16);
	i8 v8187 = *(i8*)(intptr_t)v8186;
	i8 v8188 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8188 = v8187;

	i8 v8189 = (i8)(intptr_t)(ws+3264);
	i8 v8190 = *(i8*)(intptr_t)v8189;
	i8 v8191 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v8192;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8191)(&v8192, v8190);
	i8 v8193 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8193 = v8192;

c02_0618:;

	i8 v8194 = (i8)(intptr_t)(ws+3328);
	i8 v8195 = *(i8*)(intptr_t)v8194;
	i8 v8196 = (i8)(intptr_t)(f63_IsPtr);
	i1 v8197;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8196)(&v8197, v8195);
	i1 v8198 = (i1)+0;
	if (v8197==v8198) goto c02_061b; else goto c02_061a;

c02_061a:;

	i8 v8199 = (i8)(intptr_t)(ws+3328);
	i8 v8200 = *(i8*)(intptr_t)v8199;
	i8 v8201 = *(i8*)(intptr_t)v8200;
	i8 v8202 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8202 = v8201;

	i8 v8203 = (i8)(intptr_t)(ws+3328);
	i8 v8204 = *(i8*)(intptr_t)v8203;
	i8 v8205 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8205)(v8204);

	i8 v8206 = (i8)(intptr_t)(ws+1528);
	i8 v8207 = *(i8*)(intptr_t)v8206;
	i8 v8208 = v8207+(+48);
	i2 v8209 = *(i2*)(intptr_t)v8208;
	i1 v8210 = v8209;
	i8 v8211 = (i8)(intptr_t)(ws+3336);
	i8 v8212 = *(i8*)(intptr_t)v8211;
	i8 v8213 = (i8)(intptr_t)(f126_MidDeref);
	i8 v8214;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8213)(&v8214, v8212, v8210);
	i8 v8215 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8215 = v8214;

	goto c02_0618;

c02_061b:;

	i8 v8216 = (i8)(intptr_t)(ws+3328);
	i8 v8217 = *(i8*)(intptr_t)v8216;
	i8 v8218 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8218)(v8217);

	i8 v8219 = (i8)(intptr_t)(ws+3328);
	i8 v8220 = *(i8*)(intptr_t)v8219;
	i8 v8221 = (i8)(intptr_t)(f227_IsRecord);
	i1 v8222;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8221)(&v8222, v8220);
	i1 v8223 = (i1)+0;
	if (v8222==v8223) goto c02_061f; else goto c02_0620;

c02_061f:;

	i8 v8224 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8224)();

	i8 v8225 = (i8)(intptr_t)(ws+3328);
	i8 v8226 = *(i8*)(intptr_t)v8225;
	i8 v8227 = v8226+(+32);
	i8 v8228 = *(i8*)(intptr_t)v8227;
	i8 v8229 = v8228+(+8);
	i8 v8230 = *(i8*)(intptr_t)v8229;
	i8 v8231 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8231)(v8230);

	i8 v8232 = (i8)(intptr_t)c02_s0177;
	i8 v8233 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8233)(v8232);

	i8 v8234 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8234)();

c02_0620:;

c02_061c:;

	i8 v8235 = (i8)(intptr_t)(ws+3328);
	i8 v8236 = *(i8*)(intptr_t)v8235;
	i8 v8237 = (i8)(intptr_t)(ws+3248);
	i8 v8238 = *(i8*)(intptr_t)v8237;
	i8 v8239 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v8240;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8239)(&v8240, v8238, v8236);
	i8 v8241 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8241 = v8240;

	i8 v8242 = (i8)(intptr_t)(ws+3344);
	i8 v8243 = *(i8*)(intptr_t)v8242;
	i8 v8244 = (i8)+0;
	if (v8243==v8244) goto c02_0624; else goto c02_0625;

c02_0624:;

	i8 v8245 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8245)();

	i8 v8246 = (i8)(intptr_t)(ws+3328);
	i8 v8247 = *(i8*)(intptr_t)v8246;
	i8 v8248 = v8247+(+32);
	i8 v8249 = *(i8*)(intptr_t)v8248;
	i8 v8250 = v8249+(+8);
	i8 v8251 = *(i8*)(intptr_t)v8250;
	i8 v8252 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8252)(v8251);

	i8 v8253 = (i8)(intptr_t)c02_s0178;
	i8 v8254 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8254)(v8253);

	i8 v8255 = (i8)(intptr_t)(ws+3248);
	i8 v8256 = *(i8*)(intptr_t)v8255;
	i8 v8257 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8257)(v8256);

	i8 v8258 = (i8)(intptr_t)c02_s0179;
	i8 v8259 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8259)(v8258);

	i8 v8260 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8260)();

c02_0625:;

c02_0621:;

	i8 v8261 = (i8)(intptr_t)(ws+3248);
	i8 v8262 = *(i8*)(intptr_t)v8261;
	i8 v8263 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v8263)(v8262);

	i1 v8264 = (i1)+161;
	i8 v8265 = (i8)(intptr_t)(ws+1528);
	i8 v8266 = *(i8*)(intptr_t)v8265;
	i8 v8267 = v8266+(+48);
	i2 v8268 = *(i2*)(intptr_t)v8267;
	i1 v8269 = v8268;
	i8 v8270 = (i8)(intptr_t)(ws+3336);
	i8 v8271 = *(i8*)(intptr_t)v8270;
	i8 v8272 = (i8)(intptr_t)(ws+3344);
	i8 v8273 = *(i8*)(intptr_t)v8272;
	i8 v8274 = *(i8*)(intptr_t)v8273;
	i8 v8275 = v8274+(+24);
	i2 v8276 = *(i2*)(intptr_t)v8275;
	i4 v8277 = v8276;
	i8 v8278 = (i8)(intptr_t)(f125_MidConstant);
	i8 v8279;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v8278)(&v8279, v8277);
	i8 v8280 = (i8)(intptr_t)(f168_MidC2Op);
	i8 v8281;

	((void(*)(i8* /* result */, i8 /* rhs */, i8 /* lhs */, i1 /* width */, i1 /* op */))(intptr_t)v8280)(&v8281, v8279, v8271, v8269, v8264);
	i8 v8282 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8282 = v8281;

	i8 v8283 = (i8)(intptr_t)(ws+3344);
	i8 v8284 = *(i8*)(intptr_t)v8283;
	i8 v8285 = *(i8*)(intptr_t)v8284;
	i8 v8286 = *(i8*)(intptr_t)v8285;
	i8 v8287 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8288;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8287)(&v8288, v8286);
	i8 v8289 = (i8)(intptr_t)(ws+3240);
	i8 v8290 = *(i8*)(intptr_t)v8289;
	i8 v8291 = v8290+(+16);
	*(i8*)(intptr_t)v8291 = v8288;

	i8 v8292 = (i8)(intptr_t)(ws+3240);
	i8 v8293 = *(i8*)(intptr_t)v8292;
	i8 v8294 = (i8)(intptr_t)(f228_MakeLValue);
	i8 v8295;

	((void(*)(i8* /* lvalue */, i8 /* address */))(intptr_t)v8294)(&v8295, v8293);
	i8 v8296 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8296 = v8295;

	i1 v8297 = (i1)+8;
	i8 v8298 = (i8)(intptr_t)(ws+3256);
	i8 v8299 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8299)(v8298, v8297);

endsub:;
}
	void f155_MidString(i8* /* m */, i8 /* text */);
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);

// reduce_57 workspace at ws+3328 length ws+0
void f361_reduce_57(void) {

	i8 v8300 = (i8)(intptr_t)(ws+3248);
	i8 v8301 = *(i8*)(intptr_t)v8300;
	i8 v8302 = (i8)(intptr_t)(f155_MidString);
	i8 v8303;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v8302)(&v8303, v8301);
	i8 v8304 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8304 = v8303;

	i8 v8305 = (i8)(intptr_t)(ws+1512);
	i8 v8306 = *(i8*)(intptr_t)v8305;
	i8 v8307 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8308;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8307)(&v8308, v8306);
	i8 v8309 = (i8)(intptr_t)(ws+3240);
	i8 v8310 = *(i8*)(intptr_t)v8309;
	i8 v8311 = v8310+(+16);
	*(i8*)(intptr_t)v8311 = v8308;

endsub:;
}
	void f284_parser_i_constant_error(void);
	void f58_Discard(i8 /* node */);

// reduce_58 workspace at ws+3328 length ws+0
void f362_reduce_58(void) {

	i8 v8312 = (i8)(intptr_t)(ws+3248);
	i8 v8313 = *(i8*)(intptr_t)v8312;
	i8 v8314 = v8313+(+40);
	i1 v8315 = *(i1*)(intptr_t)v8314;
	i1 v8316 = (i1)+45;
	if (v8315==v8316) goto c02_062a; else goto c02_0629;

c02_0629:;

	i8 v8317 = (i8)(intptr_t)(f284_parser_i_constant_error);

	((void(*)(void))(intptr_t)v8317)();

c02_062a:;

c02_0626:;

	i8 v8318 = (i8)(intptr_t)(ws+3248);
	i8 v8319 = *(i8*)(intptr_t)v8318;
	i4 v8320 = *(i4*)(intptr_t)v8319;
	i8 v8321 = (i8)(intptr_t)(ws+3240);
	*(i4*)(intptr_t)v8321 = v8320;

	i8 v8322 = (i8)(intptr_t)(ws+3248);
	i8 v8323 = *(i8*)(intptr_t)v8322;
	i8 v8324 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8324)(v8323);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_59 workspace at ws+3328 length ws+0
void f363_reduce_59(void) {

	i1 v8325 = (i1)+7;
	i8 v8326 = (i8)(intptr_t)(ws+3272);
	i8 v8327 = *(i8*)(intptr_t)v8326;
	i8 v8328 = v8327+(+32);
	*(i1*)(intptr_t)v8328 = v8325;

	i8 v8329 = (i8)(intptr_t)(ws+3256);
	i4 v8330 = *(i4*)(intptr_t)v8329;
	i8 v8331 = (i8)(intptr_t)(ws+3272);
	i8 v8332 = *(i8*)(intptr_t)v8331;
	*(i4*)(intptr_t)v8332 = v8330;

	i1 v8333 = (i1)+2;
	i8 v8334 = (i8)(intptr_t)(ws+3264);
	i8 v8335 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8335)(v8334, v8333);

	i1 v8336 = (i1)+22;
	i8 v8337 = (i8)(intptr_t)(ws+3248);
	i8 v8338 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8338)(v8337, v8336);

endsub:;
}
const i1 c02_s017a[] = { 0x69,0x6e,0x76,0x61,0x6c,0x69,0x64,0x20,0x69,0x6e,0x74,0x65,0x67,0x65,0x72,0x20,0x74,0x79,0x70,0x65,0x20,0x72,0x61,0x6e,0x67,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f235_ArchGuessIntType(i8* /* symbol */, i4 /* max */, i4 /* min */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_60 workspace at ws+3328 length ws+0
void f364_reduce_60(void) {

	i8 v8339 = (i8)(intptr_t)(ws+3272);
	i4 v8340 = *(i4*)(intptr_t)v8339;
	i8 v8341 = (i8)(intptr_t)(ws+3256);
	i4 v8342 = *(i4*)(intptr_t)v8341;
	if ((s4)v8340<(s4)v8342) goto c02_062f; else goto c02_062e;

c02_062e:;

	i8 v8343 = (i8)(intptr_t)c02_s017a;
	i8 v8344 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8344)(v8343);

c02_062f:;

c02_062b:;

	i8 v8345 = (i8)(intptr_t)(ws+3272);
	i4 v8346 = *(i4*)(intptr_t)v8345;
	i8 v8347 = (i8)(intptr_t)(ws+3256);
	i4 v8348 = *(i4*)(intptr_t)v8347;
	i8 v8349 = (i8)(intptr_t)(f235_ArchGuessIntType);
	i8 v8350;

	((void(*)(i8* /* symbol */, i4 /* max */, i4 /* min */))(intptr_t)v8349)(&v8350, v8348, v8346);
	i8 v8351 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8351 = v8350;

	i1 v8352 = (i1)+16;
	i8 v8353 = (i8)(intptr_t)(ws+3280);
	i8 v8354 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8354)(v8353, v8352);

	i1 v8355 = (i1)+45;
	i8 v8356 = (i8)(intptr_t)(ws+3264);
	i8 v8357 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8357)(v8356, v8355);

	i1 v8358 = (i1)+4;
	i8 v8359 = (i8)(intptr_t)(ws+3248);
	i8 v8360 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8360)(v8359, v8358);

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
void f365_reduce_61(void) {

	i8 v8361 = (i8)(intptr_t)(ws+3248);
	i8 v8362 = *(i8*)(intptr_t)v8361;
	i8 v8363 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8363 = v8362;

	i8 v8364 = (i8)(intptr_t)(ws+3328);
	i8 v8365 = *(i8*)(intptr_t)v8364;
	i8 v8366 = v8365+(+32);
	i1 v8367 = *(i1*)(intptr_t)v8366;
	i1 v8368 = (i1)+0;
	if (v8367==v8368) goto c02_0633; else goto c02_0634;

c02_0633:;

	i8 v8369 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v8370;

	((void(*)(i8* /* type */))(intptr_t)v8369)(&v8370);
	i8 v8371 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8371 = v8370;

	i1 v8372 = (i1)+1;
	i8 v8373 = (i8)(intptr_t)(ws+3336);
	i8 v8374 = *(i8*)(intptr_t)v8373;
	i8 v8375 = v8374+(+52);
	*(i1*)(intptr_t)v8375 = v8372;

	i1 v8376 = (i1)+30;
	i8 v8377 = (i8)(intptr_t)(ws+3328);
	i8 v8378 = *(i8*)(intptr_t)v8377;
	i8 v8379 = v8378+(+32);
	*(i1*)(intptr_t)v8379 = v8376;

	i8 v8380 = (i8)(intptr_t)(ws+3336);
	i8 v8381 = *(i8*)(intptr_t)v8380;
	i8 v8382 = (i8)(intptr_t)(ws+3328);
	i8 v8383 = *(i8*)(intptr_t)v8382;
	*(i8*)(intptr_t)v8383 = v8381;

	i8 v8384 = (i8)(intptr_t)(ws+3328);
	i8 v8385 = *(i8*)(intptr_t)v8384;
	i8 v8386 = (i8)(intptr_t)(ws+3336);
	i8 v8387 = *(i8*)(intptr_t)v8386;
	i8 v8388 = v8387+(+32);
	*(i8*)(intptr_t)v8388 = v8385;

c02_0634:;

c02_0630:;

	i8 v8389 = (i8)(intptr_t)(ws+3328);
	i8 v8390 = *(i8*)(intptr_t)v8389;
	i8 v8391 = v8390+(+32);
	i1 v8392 = *(i1*)(intptr_t)v8391;
	i1 v8393 = (i1)+30;
	if (v8392==v8393) goto c02_0639; else goto c02_0638;

c02_0638:;

	i8 v8394 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8394)();

	i8 v8395 = (i8)(intptr_t)c02_s017b;
	i8 v8396 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8396)(v8395);

	i8 v8397 = (i8)(intptr_t)(ws+3328);
	i8 v8398 = *(i8*)(intptr_t)v8397;
	i8 v8399 = v8398+(+8);
	i8 v8400 = *(i8*)(intptr_t)v8399;
	i8 v8401 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8401)(v8400);

	i8 v8402 = (i8)(intptr_t)c02_s017c;
	i8 v8403 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8403)(v8402);

	i8 v8404 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8404)();

c02_0639:;

c02_0635:;

	i8 v8405 = (i8)(intptr_t)(ws+3328);
	i8 v8406 = *(i8*)(intptr_t)v8405;
	i8 v8407 = *(i8*)(intptr_t)v8406;
	i8 v8408 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8408 = v8407;

endsub:;
}
	void f255_MakePointerType(i8* /* ptrtype */, i8 /* type */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_62 workspace at ws+3328 length ws+0
void f366_reduce_62(void) {

	i8 v8409 = (i8)(intptr_t)(ws+3256);
	i8 v8410 = *(i8*)(intptr_t)v8409;
	i8 v8411 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8412;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8411)(&v8412, v8410);
	i8 v8413 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8413 = v8412;

	i1 v8414 = (i1)+5;
	i8 v8415 = (i8)(intptr_t)(ws+3248);
	i8 v8416 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8416)(v8415, v8414);

endsub:;
}
	void f256_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_63 workspace at ws+3328 length ws+0
void f367_reduce_63(void) {

	i8 v8417 = (i8)(intptr_t)(ws+3272);
	i8 v8418 = *(i8*)(intptr_t)v8417;
	i8 v8419 = (i8)(intptr_t)(ws+3256);
	i4 v8420 = *(i4*)(intptr_t)v8419;
	i2 v8421 = (s2)(s4)v8420;
	i8 v8422 = (i8)(intptr_t)(f256_MakeArrayType);
	i8 v8423;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8422)(&v8423, v8421, v8418);
	i8 v8424 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8424 = v8423;

	i1 v8425 = (i1)+17;
	i8 v8426 = (i8)(intptr_t)(ws+3264);
	i8 v8427 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8427)(v8426, v8425);

	i1 v8428 = (i1)+5;
	i8 v8429 = (i8)(intptr_t)(ws+3248);
	i8 v8430 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8430)(v8429, v8428);

endsub:;
}
	void f256_MakeArrayType(i8* /* arraytype */, i2 /* size */, i8 /* type */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_64 workspace at ws+3328 length ws+0
void f368_reduce_64(void) {

	i8 v8431 = (i8)(intptr_t)(ws+3264);
	i8 v8432 = *(i8*)(intptr_t)v8431;
	i2 v8433 = (i2)+0;
	i8 v8434 = (i8)(intptr_t)(f256_MakeArrayType);
	i8 v8435;

	((void(*)(i8* /* arraytype */, i2 /* size */, i8 /* type */))(intptr_t)v8434)(&v8435, v8433, v8432);
	i8 v8436 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8436 = v8435;

	i1 v8437 = (i1)+17;
	i8 v8438 = (i8)(intptr_t)(ws+3256);
	i8 v8439 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8439)(v8438, v8437);

	i1 v8440 = (i1)+5;
	i8 v8441 = (i8)(intptr_t)(ws+3248);
	i8 v8442 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8442)(v8441, v8440);

endsub:;
}
	void f222_IsArray(i1* /* result */, i8 /* type */);
	void f69_StartError(void);
	void f11_print(i8 /* ptr */);
const i1 c02_s017d[] = { 0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x61,0x72,0x72,0x61,0x79,0 };
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// reduce_65 workspace at ws+3328 length ws+0
void f369_reduce_65(void) {

	i8 v8443 = (i8)(intptr_t)(ws+3248);
	i8 v8444 = *(i8*)(intptr_t)v8443;
	i8 v8445 = (i8)(intptr_t)(f222_IsArray);
	i1 v8446;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8445)(&v8446, v8444);
	i1 v8447 = (i1)+0;
	if (v8446==v8447) goto c02_063d; else goto c02_063e;

c02_063d:;

	i8 v8448 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8448)();

	i8 v8449 = (i8)(intptr_t)(ws+3248);
	i8 v8450 = *(i8*)(intptr_t)v8449;
	i8 v8451 = v8450+(+32);
	i8 v8452 = *(i8*)(intptr_t)v8451;
	i8 v8453 = v8452+(+8);
	i8 v8454 = *(i8*)(intptr_t)v8453;
	i8 v8455 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8455)(v8454);

	i8 v8456 = (i8)(intptr_t)c02_s017d;
	i8 v8457 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8457)(v8456);

	i8 v8458 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8458)();

c02_063e:;

c02_063a:;

	i8 v8459 = (i8)(intptr_t)(ws+3248);
	i8 v8460 = *(i8*)(intptr_t)v8459;
	i8 v8461 = v8460+(+16);
	i8 v8462 = *(i8*)(intptr_t)v8461;
	i8 v8463 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8463 = v8462;

endsub:;
}
	void f216_AddAlias(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_66 workspace at ws+3328 length ws+8
void f370_reduce_66(void) {

	i8 v8464 = (i8)+0;
	i8 v8465 = (i8)(intptr_t)(ws+3272);
	i8 v8466 = *(i8*)(intptr_t)v8465;
	i8 v8467 = (i8)(intptr_t)(ws+3256);
	i8 v8468 = *(i8*)(intptr_t)v8467;
	i8 v8469 = v8468+(+32);
	i8 v8470 = *(i8*)(intptr_t)v8469;
	i8 v8471 = (i8)(intptr_t)(f216_AddAlias);
	i8 v8472;

	((void(*)(i8* /* symbol */, i8 /* real */, i8 /* name */, i8 /* namespace */))(intptr_t)v8471)(&v8472, v8470, v8466, v8464);
	i8 v8473 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8473 = v8472;

	i1 v8474 = (i1)+65;
	i8 v8475 = (i8)(intptr_t)(ws+3264);
	i8 v8476 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8476)(v8475, v8474);

	i1 v8477 = (i1)+22;
	i8 v8478 = (i8)(intptr_t)(ws+3248);
	i8 v8479 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8479)(v8478, v8477);

endsub:;
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_67 workspace at ws+3328 length ws+0
void f371_reduce_67(void) {

	i8 v8480 = (i8)+0;
	i8 v8481 = (i8)(intptr_t)(ws+3248);
	i8 v8482 = *(i8*)(intptr_t)v8481;
	i8 v8483 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v8484;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8483)(&v8484, v8482, v8480);
	i8 v8485 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8485 = v8484;

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
void f372_reduce_68(void) {

	i8 v8486 = (i8)(intptr_t)(ws+3248);
	i8 v8487 = *(i8*)(intptr_t)v8486;
	i8 v8488 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8488 = v8487;

	i8 v8489 = (i8)+0;
	i8 v8490 = (i8)(intptr_t)(ws+3328);
	i8 v8491 = *(i8*)(intptr_t)v8490;
	i8 v8492 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v8493;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8492)(&v8493, v8491, v8489);
	i8 v8494 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8494 = v8493;

	i8 v8495 = (i8)(intptr_t)(ws+3336);
	i8 v8496 = *(i8*)(intptr_t)v8495;
	i8 v8497 = (i8)+0;
	if (v8496==v8497) goto c02_0642; else goto c02_0643;

c02_0642:;

	i8 v8498 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8498)();

	i8 v8499 = (i8)(intptr_t)c02_s017e;
	i8 v8500 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8500)(v8499);

	i8 v8501 = (i8)(intptr_t)(ws+3328);
	i8 v8502 = *(i8*)(intptr_t)v8501;
	i8 v8503 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8503)(v8502);

	i8 v8504 = (i8)(intptr_t)c02_s017f;
	i8 v8505 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8505)(v8504);

	i8 v8506 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8506)();

c02_0643:;

c02_063f:;

	i8 v8507 = (i8)(intptr_t)(ws+3328);
	i8 v8508 = *(i8*)(intptr_t)v8507;
	i8 v8509 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v8509)(v8508);

	i8 v8510 = (i8)(intptr_t)(ws+3336);
	i8 v8511 = *(i8*)(intptr_t)v8510;
	i8 v8512 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8512 = v8511;

endsub:;
}
	void f213_LookupSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f33_Free(i8 /* block */);

// reduce_69 workspace at ws+3328 length ws+16
void f373_reduce_69(void) {

	i8 v8513 = (i8)(intptr_t)(ws+3248);
	i8 v8514 = *(i8*)(intptr_t)v8513;
	i8 v8515 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8515 = v8514;

	i8 v8516 = (i8)+0;
	i8 v8517 = (i8)(intptr_t)(ws+3328);
	i8 v8518 = *(i8*)(intptr_t)v8517;
	i8 v8519 = (i8)(intptr_t)(f213_LookupSymbol);
	i8 v8520;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8519)(&v8520, v8518, v8516);
	i8 v8521 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8521 = v8520;

	i8 v8522 = (i8)(intptr_t)(ws+3336);
	i8 v8523 = *(i8*)(intptr_t)v8522;
	i8 v8524 = (i8)+0;
	if (v8523==v8524) goto c02_0647; else goto c02_0648;

c02_0647:;

	i8 v8525 = (i8)+0;
	i8 v8526 = (i8)(intptr_t)(ws+3328);
	i8 v8527 = *(i8*)(intptr_t)v8526;
	i8 v8528 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v8529;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v8528)(&v8529, v8527, v8525);
	i8 v8530 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8530 = v8529;

	goto c02_0644;

c02_0648:;

	i8 v8531 = (i8)(intptr_t)(ws+3328);
	i8 v8532 = *(i8*)(intptr_t)v8531;
	i8 v8533 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v8533)(v8532);

c02_0644:;

	i8 v8534 = (i8)(intptr_t)(ws+3336);
	i8 v8535 = *(i8*)(intptr_t)v8534;
	i8 v8536 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8536 = v8535;

endsub:;
}
const i1 c02_s0180[] = { 0x73,0x69,0x6d,0x70,0x6c,0x65,0x20,0x74,0x79,0x70,0x65,0x20,0x6f,0x72,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x20,0x6e,0x61,0x6d,0x65,0x20,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0 };
	void f71_SimpleError(i8 /* message */);

// reduce_70 workspace at ws+3328 length ws+0
void f374_reduce_70(void) {

	i8 v8537 = (i8)(intptr_t)(ws+3248);
	i8 v8538 = *(i8*)(intptr_t)v8537;
	i8 v8539 = v8538+(+32);
	i1 v8540 = *(i1*)(intptr_t)v8539;

	if (v8540 != +28) goto c02_064a;

	i8 v8541 = (i8)(intptr_t)(ws+3248);
	i8 v8542 = *(i8*)(intptr_t)v8541;
	i8 v8543 = *(i8*)(intptr_t)v8542;
	i8 v8544 = *(i8*)(intptr_t)v8543;
	i8 v8545 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8545 = v8544;

	goto c02_0649;

c02_064a:;

	if (v8540 != +30) goto c02_064b;

	i8 v8546 = (i8)(intptr_t)(ws+3248);
	i8 v8547 = *(i8*)(intptr_t)v8546;
	i8 v8548 = *(i8*)(intptr_t)v8547;
	i8 v8549 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8549 = v8548;

	goto c02_0649;

c02_064b:;

	i8 v8550 = (i8)(intptr_t)c02_s0180;
	i8 v8551 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8551)(v8550);

c02_0649:;


endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_71 workspace at ws+3328 length ws+0
void f375_reduce_71(void) {

	i8 v8552 = (i8)(intptr_t)(ws+3256);
	i8 v8553 = *(i8*)(intptr_t)v8552;
	i8 v8554 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8554 = v8553;

	i1 v8555 = (i1)+4;
	i8 v8556 = (i8)(intptr_t)(ws+3248);
	i8 v8557 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8557)(v8556, v8555);

endsub:;
}
	void f285_i_check_sub_call_args(void);
const i1 c02_s0181[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x20,0x63,0x61,0x6c,0x6c,0x65,0x64,0x20,0x61,0x73,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x20,0x6d,0x75,0x73,0x74,0x20,0x68,0x61,0x76,0x65,0x20,0x65,0x78,0x61,0x63,0x74,0x6c,0x79,0x20,0x6f,0x6e,0x65,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x70,0x61,0x72,0x61,0x6d,0x65,0x74,0x65,0x72,0 };
	void f71_SimpleError(i8 /* message */);
	void f95_GetOutputParameter(i8* /* param */, i1 /* count */, i8 /* subr */);
	void f124_MidCalle(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f286_i_end_call(void);

// reduce_72 workspace at ws+3328 length ws+16
void f376_reduce_72(void) {

	i8 v8558 = (i8)(intptr_t)(ws+80);
	i8 v8559 = *(i8*)(intptr_t)v8558;
	i8 v8560 = v8559+(+8);
	i8 v8561 = *(i8*)(intptr_t)v8560;
	i8 v8562 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8562 = v8561;

	i1 v8563 = (i1)+1;
	i8 v8564 = (i8)(intptr_t)(ws+80);
	i8 v8565 = *(i8*)(intptr_t)v8564;
	i8 v8566 = v8565+(+41);
	*(i1*)(intptr_t)v8566 = v8563;

	i8 v8567 = (i8)(intptr_t)(f285_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8567)();

	i8 v8568 = (i8)(intptr_t)(ws+3328);
	i8 v8569 = *(i8*)(intptr_t)v8568;
	i8 v8570 = v8569+(+81);
	i1 v8571 = *(i1*)(intptr_t)v8570;
	i1 v8572 = (i1)+1;
	if (v8571==v8572) goto c02_0650; else goto c02_064f;

c02_064f:;

	i8 v8573 = (i8)(intptr_t)c02_s0181;
	i8 v8574 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8574)(v8573);

c02_0650:;

c02_064c:;

	i8 v8575 = (i8)(intptr_t)(ws+3328);
	i8 v8576 = *(i8*)(intptr_t)v8575;
	i1 v8577 = (i1)+0;
	i8 v8578 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v8579;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8578)(&v8579, v8577, v8576);
	i8 v8580 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8580 = v8579;

	i8 v8581 = (i8)(intptr_t)(ws+3336);
	i8 v8582 = *(i8*)(intptr_t)v8581;
	i8 v8583 = *(i8*)(intptr_t)v8582;
	i8 v8584 = *(i8*)(intptr_t)v8583;
	i8 v8585 = v8584+(+48);
	i2 v8586 = *(i2*)(intptr_t)v8585;
	i1 v8587 = v8586;
	i8 v8588 = (i8)(intptr_t)(ws+3248);
	i8 v8589 = *(i8*)(intptr_t)v8588;
	i8 v8590 = (i8)(intptr_t)(ws+80);
	i8 v8591 = *(i8*)(intptr_t)v8590;
	i8 v8592 = *(i8*)(intptr_t)v8591;
	i8 v8593 = (i8)(intptr_t)(ws+3328);
	i8 v8594 = *(i8*)(intptr_t)v8593;
	i8 v8595 = (i8)(intptr_t)(f124_MidCalle);
	i8 v8596;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8595)(&v8596, v8594, v8592, v8589, v8587);
	i8 v8597 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8597 = v8596;

	i8 v8598 = (i8)(intptr_t)(ws+3336);
	i8 v8599 = *(i8*)(intptr_t)v8598;
	i8 v8600 = *(i8*)(intptr_t)v8599;
	i8 v8601 = *(i8*)(intptr_t)v8600;
	i8 v8602 = (i8)(intptr_t)(ws+3240);
	i8 v8603 = *(i8*)(intptr_t)v8602;
	i8 v8604 = v8603+(+16);
	*(i8*)(intptr_t)v8604 = v8601;

	i8 v8605 = (i8)(intptr_t)(f286_i_end_call);

	((void(*)(void))(intptr_t)v8605)();

endsub:;
}
	void f285_i_check_sub_call_args(void);
const i1 c02_s0182[] = { 0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x20,0x72,0x65,0x71,0x75,0x69,0x72,0x65,0x73,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f146_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
	void f251_Generate(i8 /* statement */);
	void f286_i_end_call(void);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_73 workspace at ws+3328 length ws+8
void f377_reduce_73(void) {

	i8 v8606 = (i8)(intptr_t)(ws+80);
	i8 v8607 = *(i8*)(intptr_t)v8606;
	i8 v8608 = v8607+(+8);
	i8 v8609 = *(i8*)(intptr_t)v8608;
	i8 v8610 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8610 = v8609;

	i8 v8611 = (i8)(intptr_t)(f285_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8611)();

	i8 v8612 = (i8)(intptr_t)(ws+3328);
	i8 v8613 = *(i8*)(intptr_t)v8612;
	i8 v8614 = v8613+(+81);
	i1 v8615 = *(i1*)(intptr_t)v8614;
	i1 v8616 = (i1)+0;
	if (v8615==v8616) goto c02_0655; else goto c02_0654;

c02_0654:;

	i8 v8617 = (i8)(intptr_t)c02_s0182;
	i8 v8618 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8618)(v8617);

c02_0655:;

c02_0651:;

	i8 v8619 = (i8)(intptr_t)(ws+3256);
	i8 v8620 = *(i8*)(intptr_t)v8619;
	i8 v8621 = (i8)(intptr_t)(ws+80);
	i8 v8622 = *(i8*)(intptr_t)v8621;
	i8 v8623 = *(i8*)(intptr_t)v8622;
	i8 v8624 = (i8)(intptr_t)(ws+3328);
	i8 v8625 = *(i8*)(intptr_t)v8624;
	i8 v8626 = (i8)(intptr_t)(f146_MidCall);
	i8 v8627;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8626)(&v8627, v8625, v8623, v8620);
	i8 v8628 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8628)(v8627);

	i8 v8629 = (i8)(intptr_t)(f286_i_end_call);

	((void(*)(void))(intptr_t)v8629)();

	i1 v8630 = (i1)+22;
	i8 v8631 = (i8)(intptr_t)(ws+3248);
	i8 v8632 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8632)(v8631, v8630);

endsub:;
}
	void f285_i_check_sub_call_args(void);
	void f146_MidCall(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */);
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
	void f131_MidPoparg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */);
	void f126_MidDeref(i8* /* m */, i8 /* left */, i1 /* width */);
	void f116_MidStore(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f58_Discard(i8 /* node */);
const i1 c02_s0185[] = { 0x74,0x6f,0x6f,0x20,0x66,0x65,0x77,0x20,0x6f,0x75,0x74,0x70,0x75,0x74,0x20,0x61,0x72,0x67,0x75,0x6d,0x65,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);
	void f286_i_end_call(void);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_74 workspace at ws+3328 length ws+41
void f378_reduce_74(void) {

	i8 v8633 = (i8)(intptr_t)(ws+80);
	i8 v8634 = *(i8*)(intptr_t)v8633;
	i8 v8635 = v8634+(+8);
	i8 v8636 = *(i8*)(intptr_t)v8635;
	i8 v8637 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8637 = v8636;

	i8 v8638 = (i8)(intptr_t)(f285_i_check_sub_call_args);

	((void(*)(void))(intptr_t)v8638)();

	i8 v8639 = (i8)(intptr_t)(ws+3256);
	i8 v8640 = *(i8*)(intptr_t)v8639;
	i8 v8641 = (i8)(intptr_t)(ws+80);
	i8 v8642 = *(i8*)(intptr_t)v8641;
	i8 v8643 = *(i8*)(intptr_t)v8642;
	i8 v8644 = (i8)(intptr_t)(ws+3328);
	i8 v8645 = *(i8*)(intptr_t)v8644;
	i8 v8646 = (i8)(intptr_t)(f146_MidCall);
	i8 v8647;

	((void(*)(i8* /* m */, i8 /* subr */, i8 /* right */, i8 /* left */))(intptr_t)v8646)(&v8647, v8645, v8643, v8640);
	i8 v8648 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8648)(v8647);

	i8 v8649 = (i8)(intptr_t)(ws+3328);
	i8 v8650 = *(i8*)(intptr_t)v8649;
	i8 v8651 = v8650+(+81);
	i1 v8652 = *(i1*)(intptr_t)v8651;
	i8 v8653 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8653 = v8652;

	i1 v8654 = (i1)+0;
	i8 v8655 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8655 = v8654;

	i8 v8656 = (i8)(intptr_t)(ws+3280);
	i8 v8657 = *(i8*)(intptr_t)v8656;
	i8 v8658 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8658 = v8657;

c02_0658:;

	i8 v8659 = (i8)(intptr_t)(ws+3344);
	i8 v8660 = *(i8*)(intptr_t)v8659;
	i8 v8661 = (i8)+0;
	if (v8660==v8661) goto c02_065b; else goto c02_065a;

c02_065a:;

	i8 v8662 = (i8)(intptr_t)(ws+3336);
	i1 v8663 = *(i1*)(intptr_t)v8662;
	i1 v8664 = (i1)+0;
	if (v8663==v8664) goto c02_065f; else goto c02_0660;

c02_065f:;

	i8 v8665 = (i8)(intptr_t)c02_s0183;
	i8 v8666 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8666)(v8665);

c02_0660:;

c02_065c:;

	i8 v8667 = (i8)(intptr_t)(ws+3336);
	i1 v8668 = *(i1*)(intptr_t)v8667;
	i1 v8669 = v8668+(-1);
	i8 v8670 = (i8)(intptr_t)(ws+3336);
	*(i1*)(intptr_t)v8670 = v8669;

	i8 v8671 = (i8)(intptr_t)(ws+3328);
	i8 v8672 = *(i8*)(intptr_t)v8671;
	i8 v8673 = (i8)(intptr_t)(ws+3336);
	i1 v8674 = *(i1*)(intptr_t)v8673;
	i8 v8675 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v8676;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8675)(&v8676, v8674, v8672);
	i8 v8677 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8677 = v8676;

	i8 v8678 = (i8)(intptr_t)(ws+3344);
	i8 v8679 = *(i8*)(intptr_t)v8678;
	i8 v8680 = v8679+(+24);
	i8 v8681 = *(i8*)(intptr_t)v8680;
	i8 v8682 = (i8)(intptr_t)(ws+3360);
	*(i8*)(intptr_t)v8682 = v8681;

	i8 v8683 = (i8)+0;
	i8 v8684 = (i8)(intptr_t)(ws+3344);
	i8 v8685 = *(i8*)(intptr_t)v8684;
	i8 v8686 = v8685+(+24);
	*(i8*)(intptr_t)v8686 = v8683;

	i8 v8687 = (i8)(intptr_t)(ws+3344);
	i8 v8688 = *(i8*)(intptr_t)v8687;
	i8 v8689 = v8688+(+32);
	i8 v8690 = *(i8*)(intptr_t)v8689;
	i8 v8691 = (i8)(intptr_t)(ws+3344);
	*(i8*)(intptr_t)v8691 = v8690;

	i8 v8692 = (i8)(intptr_t)(ws+3360);
	i8 v8693 = *(i8*)(intptr_t)v8692;
	i8 v8694 = v8693+(+16);
	i8 v8695 = *(i8*)(intptr_t)v8694;
	i8 v8696 = (i8)(intptr_t)(f63_IsPtr);
	i1 v8697;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8696)(&v8697, v8695);
	i1 v8698 = (i1)+0;
	if (v8697==v8698) goto c02_0664; else goto c02_0665;

c02_0664:;

	i8 v8699 = (i8)(intptr_t)c02_s0184;
	i8 v8700 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8700)(v8699);

c02_0665:;

c02_0661:;

	i8 v8701 = (i8)(intptr_t)(ws+3360);
	i8 v8702 = *(i8*)(intptr_t)v8701;
	i8 v8703 = (i8)(intptr_t)(ws+3352);
	i8 v8704 = *(i8*)(intptr_t)v8703;
	i8 v8705 = *(i8*)(intptr_t)v8704;
	i8 v8706 = *(i8*)(intptr_t)v8705;
	i8 v8707 = (i8)(intptr_t)(f255_MakePointerType);
	i8 v8708;

	((void(*)(i8* /* ptrtype */, i8 /* type */))(intptr_t)v8707)(&v8708, v8706);
	i8 v8709 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8709)(v8708, v8702);

	i8 v8710 = (i8)(intptr_t)(ws+3352);
	i8 v8711 = *(i8*)(intptr_t)v8710;
	i8 v8712 = *(i8*)(intptr_t)v8711;
	i8 v8713 = *(i8*)(intptr_t)v8712;
	i8 v8714 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8714)(v8713);

	i8 v8715 = (i8)(intptr_t)(ws+3360);
	i8 v8716 = *(i8*)(intptr_t)v8715;
	i8 v8717 = v8716+(+16);
	i8 v8718 = *(i8*)(intptr_t)v8717;
	i8 v8719 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8719)(v8718);

	i8 v8720 = (i8)(intptr_t)(ws+3352);
	i8 v8721 = *(i8*)(intptr_t)v8720;
	i8 v8722 = *(i8*)(intptr_t)v8721;
	i8 v8723 = *(i8*)(intptr_t)v8722;
	i8 v8724 = v8723+(+48);
	i2 v8725 = *(i2*)(intptr_t)v8724;
	i1 v8726 = v8725;
	i8 v8727 = (i8)(intptr_t)(ws+3368);
	*(i1*)(intptr_t)v8727 = v8726;

	i8 v8728 = (i8)(intptr_t)(ws+3368);
	i1 v8729 = *(i1*)(intptr_t)v8728;
	i8 v8730 = (i8)(intptr_t)(ws+3368);
	i1 v8731 = *(i1*)(intptr_t)v8730;
	i8 v8732 = (i8)(intptr_t)(ws+3328);
	i8 v8733 = *(i8*)(intptr_t)v8732;
	i8 v8734 = (i8)(intptr_t)(ws+3337);
	i1 v8735 = *(i1*)(intptr_t)v8734;
	i8 v8736 = (i8)(intptr_t)(f131_MidPoparg);
	i8 v8737;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i1 /* width */))(intptr_t)v8736)(&v8737, v8735, v8733, v8731);
	i8 v8738 = (i8)(intptr_t)(ws+3368);
	i1 v8739 = *(i1*)(intptr_t)v8738;
	i8 v8740 = (i8)(intptr_t)(ws+3360);
	i8 v8741 = *(i8*)(intptr_t)v8740;
	i8 v8742 = (i8)(intptr_t)(f126_MidDeref);
	i8 v8743;

	((void(*)(i8* /* m */, i8 /* left */, i1 /* width */))(intptr_t)v8742)(&v8743, v8741, v8739);
	i8 v8744 = (i8)(intptr_t)(f116_MidStore);
	i8 v8745;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8744)(&v8745, v8743, v8737, v8729);
	i8 v8746 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v8746)(v8745);

	i8 v8747 = (i8)(intptr_t)(ws+3337);
	i1 v8748 = *(i1*)(intptr_t)v8747;
	i1 v8749 = v8748+(+1);
	i8 v8750 = (i8)(intptr_t)(ws+3337);
	*(i1*)(intptr_t)v8750 = v8749;

	i8 v8751 = (i8)(intptr_t)(ws+3352);
	i8 v8752 = *(i8*)(intptr_t)v8751;
	i8 v8753 = *(i8*)(intptr_t)v8752;
	i8 v8754 = v8753+(+16);
	i8 v8755 = *(i8*)(intptr_t)v8754;
	i8 v8756 = (i8)(intptr_t)(ws+3352);
	*(i8*)(intptr_t)v8756 = v8755;

	goto c02_0658;

c02_065b:;

	i8 v8757 = (i8)(intptr_t)(ws+3280);
	i8 v8758 = *(i8*)(intptr_t)v8757;
	i8 v8759 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8759)(v8758);

	i8 v8760 = (i8)(intptr_t)(ws+3337);
	i1 v8761 = *(i1*)(intptr_t)v8760;
	i8 v8762 = (i8)(intptr_t)(ws+3328);
	i8 v8763 = *(i8*)(intptr_t)v8762;
	i8 v8764 = v8763+(+81);
	i1 v8765 = *(i1*)(intptr_t)v8764;
	if (v8761==v8765) goto c02_066a; else goto c02_0669;

c02_0669:;

	i8 v8766 = (i8)(intptr_t)c02_s0185;
	i8 v8767 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v8767)(v8766);

c02_066a:;

c02_0666:;

	i8 v8768 = (i8)(intptr_t)(f286_i_end_call);

	((void(*)(void))(intptr_t)v8768)();

	i1 v8769 = (i1)+2;
	i8 v8770 = (i8)(intptr_t)(ws+3272);
	i8 v8771 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8771)(v8770, v8769);

	i1 v8772 = (i1)+22;
	i8 v8773 = (i8)(intptr_t)(ws+3248);
	i8 v8774 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8774)(v8773, v8772);

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
void f379_reduce_75(void) {

	i8 v8775 = (i8)(intptr_t)(ws+3248);
	i8 v8776 = *(i8*)(intptr_t)v8775;
	i8 v8777 = v8776+(+16);
	i8 v8778 = *(i8*)(intptr_t)v8777;
	i8 v8779 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v8780;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v8779)(&v8780, v8778);
	i1 v8781 = (i1)+0;
	if (v8780==v8781) goto c02_066e; else goto c02_066f;

c02_066e:;

	i8 v8782 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8782)();

	i8 v8783 = (i8)(intptr_t)c02_s0186;
	i8 v8784 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8784)(v8783);

	i8 v8785 = (i8)(intptr_t)(ws+3248);
	i8 v8786 = *(i8*)(intptr_t)v8785;
	i8 v8787 = v8786+(+16);
	i8 v8788 = *(i8*)(intptr_t)v8787;
	i8 v8789 = v8788+(+32);
	i8 v8790 = *(i8*)(intptr_t)v8789;
	i8 v8791 = v8790+(+8);
	i8 v8792 = *(i8*)(intptr_t)v8791;
	i8 v8793 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8793)(v8792);

	i8 v8794 = (i8)(intptr_t)c02_s0187;
	i8 v8795 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8795)(v8794);

	i8 v8796 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8796)();

c02_066f:;

c02_066b:;

	i8 v8797 = (i8)+42;
	i8 v8798 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v8799;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v8798)(&v8799, v8797);
	i8 v8800 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8800 = v8799;

	i8 v8801 = (i8)(intptr_t)(ws+80);
	i8 v8802 = *(i8*)(intptr_t)v8801;
	i8 v8803 = (i8)(intptr_t)(ws+3328);
	i8 v8804 = *(i8*)(intptr_t)v8803;
	i8 v8805 = v8804+(+16);
	*(i8*)(intptr_t)v8805 = v8802;

	i8 v8806 = (i8)(intptr_t)(ws+3248);
	i8 v8807 = *(i8*)(intptr_t)v8806;
	i8 v8808 = v8807+(+16);
	i8 v8809 = *(i8*)(intptr_t)v8808;
	i8 v8810 = *(i8*)(intptr_t)v8809;
	i8 v8811 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v8811 = v8810;

	i8 v8812 = (i8)(intptr_t)(ws+3248);
	i8 v8813 = *(i8*)(intptr_t)v8812;
	i8 v8814 = (i8)(intptr_t)(ws+3328);
	i8 v8815 = *(i8*)(intptr_t)v8814;
	*(i8*)(intptr_t)v8815 = v8813;

	i8 v8816 = (i8)(intptr_t)(ws+3336);
	i8 v8817 = *(i8*)(intptr_t)v8816;
	i8 v8818 = (i8)(intptr_t)(ws+3328);
	i8 v8819 = *(i8*)(intptr_t)v8818;
	i8 v8820 = v8819+(+8);
	*(i8*)(intptr_t)v8820 = v8817;

	i8 v8821 = (i8)(intptr_t)(ws+3336);
	i8 v8822 = *(i8*)(intptr_t)v8821;
	i1 v8823 = (i1)+0;
	i8 v8824 = (i8)(intptr_t)(f94_GetInputParameter);
	i8 v8825;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8824)(&v8825, v8823, v8822);
	i8 v8826 = (i8)(intptr_t)(ws+3328);
	i8 v8827 = *(i8*)(intptr_t)v8826;
	i8 v8828 = v8827+(+24);
	*(i8*)(intptr_t)v8828 = v8825;

	i8 v8829 = (i8)(intptr_t)(ws+3336);
	i8 v8830 = *(i8*)(intptr_t)v8829;
	i1 v8831 = (i1)+0;
	i8 v8832 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v8833;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v8832)(&v8833, v8831, v8830);
	i8 v8834 = (i8)(intptr_t)(ws+3328);
	i8 v8835 = *(i8*)(intptr_t)v8834;
	i8 v8836 = v8835+(+32);
	*(i8*)(intptr_t)v8836 = v8833;

	i8 v8837 = (i8)(intptr_t)(ws+3328);
	i8 v8838 = *(i8*)(intptr_t)v8837;
	i8 v8839 = (i8)(intptr_t)(ws+80);
	*(i8*)(intptr_t)v8839 = v8838;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_76 workspace at ws+3328 length ws+0
void f380_reduce_76(void) {

	i8 v8840 = (i8)(intptr_t)(ws+3256);
	i8 v8841 = *(i8*)(intptr_t)v8840;
	i8 v8842 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8842 = v8841;

	i1 v8843 = (i1)+4;
	i8 v8844 = (i8)(intptr_t)(ws+3248);
	i8 v8845 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8845)(v8844, v8843);

endsub:;
}
	void f114_MidEnd(i8* /* m */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_77 workspace at ws+3328 length ws+0
void f381_reduce_77(void) {

	i8 v8846 = (i8)(intptr_t)(f114_MidEnd);
	i8 v8847;

	((void(*)(i8* /* m */))(intptr_t)v8846)(&v8847);
	i8 v8848 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8848 = v8847;

	i1 v8849 = (i1)+4;
	i8 v8850 = (i8)(intptr_t)(ws+3248);
	i8 v8851 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8851)(v8850, v8849);

endsub:;
}

// reduce_78 workspace at ws+3328 length ws+0
void f382_reduce_78(void) {

	i8 v8852 = (i8)(intptr_t)(ws+3248);
	i8 v8853 = *(i8*)(intptr_t)v8852;
	i8 v8854 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8854 = v8853;

endsub:;
}
	void f58_Discard(i8 /* node */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_79 workspace at ws+3328 length ws+0
void f383_reduce_79(void) {

	i8 v8855 = (i8)(intptr_t)(ws+3248);
	i8 v8856 = *(i8*)(intptr_t)v8855;
	i8 v8857 = v8856+(+24);
	i8 v8858 = *(i8*)(intptr_t)v8857;
	i8 v8859 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v8859)(v8858);

	i8 v8860 = (i8)(intptr_t)(ws+3264);
	i8 v8861 = *(i8*)(intptr_t)v8860;
	i8 v8862 = (i8)(intptr_t)(ws+3248);
	i8 v8863 = *(i8*)(intptr_t)v8862;
	i8 v8864 = v8863+(+24);
	*(i8*)(intptr_t)v8864 = v8861;

	i8 v8865 = (i8)(intptr_t)(ws+3248);
	i8 v8866 = *(i8*)(intptr_t)v8865;
	i8 v8867 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8867 = v8866;

	i1 v8868 = (i1)+45;
	i8 v8869 = (i8)(intptr_t)(ws+3256);
	i8 v8870 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8870)(v8869, v8868);

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
	void f114_MidEnd(i8* /* m */);
	void f122_MidArg(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */);

// reduce_80 workspace at ws+3328 length ws+8
void f384_reduce_80(void) {

	i8 v8871 = (i8)(intptr_t)(ws+80);
	i8 v8872 = *(i8*)(intptr_t)v8871;
	i8 v8873 = v8872+(+24);
	i8 v8874 = *(i8*)(intptr_t)v8873;
	i8 v8875 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v8875 = v8874;

	i8 v8876 = (i8)(intptr_t)(ws+3328);
	i8 v8877 = *(i8*)(intptr_t)v8876;
	i8 v8878 = (i8)+0;
	if (v8877==v8878) goto c02_0673; else goto c02_0674;

c02_0673:;

	i8 v8879 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v8879)();

	i8 v8880 = (i8)(intptr_t)c02_s0188;
	i8 v8881 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8881)(v8880);

	i8 v8882 = (i8)(intptr_t)(ws+80);
	i8 v8883 = *(i8*)(intptr_t)v8882;
	i8 v8884 = v8883+(+8);
	i8 v8885 = *(i8*)(intptr_t)v8884;
	i8 v8886 = *(i8*)(intptr_t)v8885;
	i8 v8887 = v8886+(+8);
	i8 v8888 = *(i8*)(intptr_t)v8887;
	i8 v8889 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v8889)(v8888);

	i8 v8890 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v8890)();

c02_0674:;

c02_0670:;

	i8 v8891 = (i8)(intptr_t)(ws+80);
	i8 v8892 = *(i8*)(intptr_t)v8891;
	i8 v8893 = v8892+(+24);
	i8 v8894 = *(i8*)(intptr_t)v8893;
	i8 v8895 = *(i8*)(intptr_t)v8894;
	i8 v8896 = v8895+(+16);
	i8 v8897 = *(i8*)(intptr_t)v8896;
	i8 v8898 = (i8)(intptr_t)(ws+80);
	i8 v8899 = *(i8*)(intptr_t)v8898;
	i8 v8900 = v8899+(+24);
	*(i8*)(intptr_t)v8900 = v8897;

	i8 v8901 = (i8)(intptr_t)(ws+3248);
	i8 v8902 = *(i8*)(intptr_t)v8901;
	i8 v8903 = (i8)(intptr_t)(ws+3328);
	i8 v8904 = *(i8*)(intptr_t)v8903;
	i8 v8905 = *(i8*)(intptr_t)v8904;
	i8 v8906 = *(i8*)(intptr_t)v8905;
	i8 v8907 = (i8)(intptr_t)(f263_CheckExpressionType);

	((void(*)(i8 /* type */, i8 /* node */))(intptr_t)v8907)(v8906, v8902);

	i8 v8908 = (i8)(intptr_t)(ws+3328);
	i8 v8909 = *(i8*)(intptr_t)v8908;
	i8 v8910 = *(i8*)(intptr_t)v8909;
	i8 v8911 = *(i8*)(intptr_t)v8910;
	i8 v8912 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8912)(v8911);

	i8 v8913 = (i8)(intptr_t)(ws+3248);
	i8 v8914 = *(i8*)(intptr_t)v8913;
	i8 v8915 = v8914+(+16);
	i8 v8916 = *(i8*)(intptr_t)v8915;
	i8 v8917 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v8917)(v8916);

	i8 v8918 = (i8)(intptr_t)(ws+80);
	i8 v8919 = *(i8*)(intptr_t)v8918;
	i8 v8920 = v8919+(+40);
	i1 v8921 = *(i1*)(intptr_t)v8920;
	i1 v8922 = v8921+(+1);
	i8 v8923 = (i8)(intptr_t)(ws+80);
	i8 v8924 = *(i8*)(intptr_t)v8923;
	i8 v8925 = v8924+(+40);
	*(i1*)(intptr_t)v8925 = v8922;

	i8 v8926 = (i8)(intptr_t)(ws+3248);
	i8 v8927 = *(i8*)(intptr_t)v8926;
	i8 v8928 = (i8)(intptr_t)(f162_NodeWidth);
	i1 v8929;

	((void(*)(i1* /* width */, i8 /* node */))(intptr_t)v8928)(&v8929, v8927);
	i8 v8930 = (i8)(intptr_t)(f114_MidEnd);
	i8 v8931;

	((void(*)(i8* /* m */))(intptr_t)v8930)(&v8931);
	i8 v8932 = (i8)(intptr_t)(ws+3248);
	i8 v8933 = *(i8*)(intptr_t)v8932;
	i8 v8934 = (i8)(intptr_t)(ws+80);
	i8 v8935 = *(i8*)(intptr_t)v8934;
	i8 v8936 = v8935+(+8);
	i8 v8937 = *(i8*)(intptr_t)v8936;
	i8 v8938 = (i8)(intptr_t)(ws+80);
	i8 v8939 = *(i8*)(intptr_t)v8938;
	i8 v8940 = v8939+(+8);
	i8 v8941 = *(i8*)(intptr_t)v8940;
	i8 v8942 = v8941+(+80);
	i1 v8943 = *(i1*)(intptr_t)v8942;
	i8 v8944 = (i8)(intptr_t)(ws+80);
	i8 v8945 = *(i8*)(intptr_t)v8944;
	i8 v8946 = v8945+(+40);
	i1 v8947 = *(i1*)(intptr_t)v8946;
	i1 v8948 = v8943-v8947;
	i8 v8949 = (i8)(intptr_t)(f122_MidArg);
	i8 v8950;

	((void(*)(i8* /* m */, i1 /* remaining */, i8 /* subr */, i8 /* right */, i8 /* left */, i1 /* width */))(intptr_t)v8949)(&v8950, v8948, v8937, v8933, v8931, v8929);
	i8 v8951 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8951 = v8950;

endsub:;
}
	void f128_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_81 workspace at ws+3328 length ws+0
void f385_reduce_81(void) {

	i8 v8952 = (i8)(intptr_t)(ws+3256);
	i8 v8953 = *(i8*)(intptr_t)v8952;
	i8 v8954 = (i8)(intptr_t)(ws+3272);
	i8 v8955 = *(i8*)(intptr_t)v8954;
	i8 v8956 = (i8)(intptr_t)(f128_MidPair);
	i8 v8957;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v8956)(&v8957, v8955, v8953);
	i8 v8958 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8958 = v8957;

	i1 v8959 = (i1)+45;
	i8 v8960 = (i8)(intptr_t)(ws+3264);
	i8 v8961 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8961)(v8960, v8959);

	i1 v8962 = (i1)+4;
	i8 v8963 = (i8)(intptr_t)(ws+3248);
	i8 v8964 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8964)(v8963, v8962);

endsub:;
}
	void f128_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);

// reduce_82 workspace at ws+3328 length ws+0
void f386_reduce_82(void) {

	i8 v8965 = (i8)(intptr_t)(ws+3248);
	i8 v8966 = *(i8*)(intptr_t)v8965;
	i8 v8967 = (i8)+0;
	i8 v8968 = (i8)(intptr_t)(f128_MidPair);
	i8 v8969;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v8968)(&v8969, v8967, v8966);
	i8 v8970 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8970 = v8969;

endsub:;
}
	void f128_MidPair(i8* /* m */, i8 /* right */, i8 /* left */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_83 workspace at ws+3328 length ws+0
void f387_reduce_83(void) {

	i8 v8971 = (i8)(intptr_t)(ws+3248);
	i8 v8972 = *(i8*)(intptr_t)v8971;
	i8 v8973 = (i8)(intptr_t)(ws+3264);
	i8 v8974 = *(i8*)(intptr_t)v8973;
	i8 v8975 = (i8)(intptr_t)(f128_MidPair);
	i8 v8976;

	((void(*)(i8* /* m */, i8 /* right */, i8 /* left */))(intptr_t)v8975)(&v8976, v8974, v8972);
	i8 v8977 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8977 = v8976;

	i1 v8978 = (i1)+45;
	i8 v8979 = (i8)(intptr_t)(ws+3256);
	i8 v8980 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v8980)(v8979, v8978);

endsub:;
}
	void f229_UndoLValue(i8* /* address */, i8 /* lvalue */);

// reduce_84 workspace at ws+3328 length ws+0
void f388_reduce_84(void) {

	i8 v8981 = (i8)(intptr_t)(ws+3248);
	i8 v8982 = *(i8*)(intptr_t)v8981;
	i8 v8983 = (i8)(intptr_t)(f229_UndoLValue);
	i8 v8984;

	((void(*)(i8* /* address */, i8 /* lvalue */))(intptr_t)v8983)(&v8984, v8982);
	i8 v8985 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v8985 = v8984;

endsub:;
}
	void f202_EmitterEmitSubroutineFlags(i8 /* subr */);
	void f108_MidStartsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f123_MidEndsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f261_ReportWorkspaces(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_85 workspace at ws+3328 length ws+0
void f389_reduce_85(void) {

	i8 v8986 = (i8)(intptr_t)(ws+1544);
	i8 v8987 = *(i8*)(intptr_t)v8986;
	i8 v8988 = v8987+(+82);
	i1 v8989 = *(i1*)(intptr_t)v8988;
	i1 v8990 = v8989|(+2);
	i8 v8991 = (i8)(intptr_t)(ws+1544);
	i8 v8992 = *(i8*)(intptr_t)v8991;
	i8 v8993 = v8992+(+82);
	*(i1*)(intptr_t)v8993 = v8990;

	i8 v8994 = (i8)(intptr_t)(ws+1544);
	i8 v8995 = *(i8*)(intptr_t)v8994;
	i8 v8996 = (i8)(intptr_t)(f202_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v8996)(v8995);

	i8 v8997 = (i8)(intptr_t)(ws+1544);
	i8 v8998 = *(i8*)(intptr_t)v8997;
	i8 v8999 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v8999 = v8998;

	i8 v9000 = (i8)(intptr_t)(ws+40);
	i8 v9001 = *(i8*)(intptr_t)v9000;
	i8 v9002 = (i8)(intptr_t)(f108_MidStartsub);
	i8 v9003;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9002)(&v9003, v9001);
	i8 v9004 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9004)(v9003);

	i8 v9005 = (i8)(intptr_t)(ws+40);
	i8 v9006 = *(i8*)(intptr_t)v9005;
	i8 v9007 = (i8)(intptr_t)(f123_MidEndsub);
	i8 v9008;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9007)(&v9008, v9006);
	i8 v9009 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9009)(v9008);

	i8 v9010 = (i8)(intptr_t)(ws+40);
	i8 v9011 = *(i8*)(intptr_t)v9010;
	i8 v9012 = (i8)(intptr_t)(f261_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9012)(v9011);

	i8 v9013 = (i8)(intptr_t)(ws+40);
	i8 v9014 = *(i8*)(intptr_t)v9013;
	i8 v9015 = v9014+(+8);
	i8 v9016 = *(i8*)(intptr_t)v9015;
	i8 v9017 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9017 = v9016;

	i1 v9018 = (i1)+22;
	i8 v9019 = (i8)(intptr_t)(ws+3248);
	i8 v9020 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9020)(v9019, v9018);

endsub:;
}
const i1 c02_s0189[] = { 0x74,0x79,0x70,0x65,0x20,0x69,0x73,0x20,0x6e,0x6f,0x74,0x20,0x61,0x6e,0x20,0x69,0x6e,0x74,0x65,0x72,0x66,0x61,0x63,0x65,0 };
	void f71_SimpleError(i8 /* message */);

// not_an_interface workspace at ws+3336 length ws+0
void f391_not_an_interface(void) {

	i8 v9021 = (i8)(intptr_t)c02_s0189;
	i8 v9022 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9022)(v9021);

endsub:;
}
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);
	void f391_not_an_interface(void);
	void f391_not_an_interface(void);
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
void f390_reduce_86(void) {


	i8 v9023 = (i8)(intptr_t)(ws+3248);
	i8 v9024 = *(i8*)(intptr_t)v9023;
	i8 v9025 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v9026;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9025)(&v9026, v9024);
	i1 v9027 = (i1)+0;
	if (v9026==v9027) goto c02_0678; else goto c02_0679;

c02_0678:;

	i8 v9028 = (i8)(intptr_t)(f391_not_an_interface);

	((void(*)(void))(intptr_t)v9028)();

c02_0679:;

c02_0675:;

	i8 v9029 = (i8)(intptr_t)(ws+3248);
	i8 v9030 = *(i8*)(intptr_t)v9029;
	i8 v9031 = *(i8*)(intptr_t)v9030;
	i8 v9032 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9032 = v9031;

	i8 v9033 = (i8)(intptr_t)(ws+3328);
	i8 v9034 = *(i8*)(intptr_t)v9033;
	i8 v9035 = v9034+(+82);
	i1 v9036 = *(i1*)(intptr_t)v9035;
	i1 v9037 = v9036&(+2);
	i1 v9038 = (i1)+0;
	if (v9037==v9038) goto c02_067d; else goto c02_067e;

c02_067d:;

	i8 v9039 = (i8)(intptr_t)(f391_not_an_interface);

	((void(*)(void))(intptr_t)v9039)();

c02_067e:;

c02_067a:;

	i8 v9040 = (i8)(intptr_t)(ws+1544);
	i8 v9041 = *(i8*)(intptr_t)v9040;
	i8 v9042 = v9041+(+82);
	i1 v9043 = *(i1*)(intptr_t)v9042;
	i1 v9044 = v9043|(+4);
	i8 v9045 = (i8)(intptr_t)(ws+1544);
	i8 v9046 = *(i8*)(intptr_t)v9045;
	i8 v9047 = v9046+(+82);
	*(i1*)(intptr_t)v9047 = v9044;

	i8 v9048 = (i8)(intptr_t)(ws+3328);
	i8 v9049 = *(i8*)(intptr_t)v9048;
	i8 v9050 = (i8)(intptr_t)(ws+1544);
	i8 v9051 = *(i8*)(intptr_t)v9050;
	i8 v9052 = v9051+(+48);
	*(i8*)(intptr_t)v9052 = v9049;

	i8 v9053 = (i8)(intptr_t)(ws+3248);
	i8 v9054 = *(i8*)(intptr_t)v9053;
	i8 v9055 = (i8)(intptr_t)(ws+1544);
	i8 v9056 = *(i8*)(intptr_t)v9055;
	i8 v9057 = v9056+(+40);
	*(i8*)(intptr_t)v9057 = v9054;

	i8 v9058 = (i8)(intptr_t)(ws+40);
	i8 v9059 = *(i8*)(intptr_t)v9058;
	i8 v9060 = (i8)(intptr_t)(ws+3328);
	i8 v9061 = *(i8*)(intptr_t)v9060;
	i8 v9062 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9062)(v9061, v9059);

	i8 v9063 = (i8)(intptr_t)(ws+3328);
	i8 v9064 = *(i8*)(intptr_t)v9063;
	i8 v9065 = (i8)(intptr_t)(ws+1544);
	i8 v9066 = *(i8*)(intptr_t)v9065;
	i8 v9067 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9067)(v9066, v9064);

	i8 v9068 = (i8)(intptr_t)(ws+3328);
	i8 v9069 = *(i8*)(intptr_t)v9068;
	i8 v9070 = v9069+(+80);
	i1 v9071 = *(i1*)(intptr_t)v9070;
	i8 v9072 = (i8)(intptr_t)(ws+1544);
	i8 v9073 = *(i8*)(intptr_t)v9072;
	i8 v9074 = v9073+(+80);
	*(i1*)(intptr_t)v9074 = v9071;

	i8 v9075 = (i8)(intptr_t)(ws+1544);
	i8 v9076 = *(i8*)(intptr_t)v9075;
	i8 v9077 = v9076+(+80);
	i1 v9078 = *(i1*)(intptr_t)v9077;
	i1 v9079 = (i1)+0;
	if (v9078==v9079) goto c02_0683; else goto c02_0682;

c02_0682:;

	i8 v9080 = (i8)(intptr_t)(ws+3328);
	i8 v9081 = *(i8*)(intptr_t)v9080;
	i8 v9082 = v9081+(+16);
	i8 v9083 = *(i8*)(intptr_t)v9082;
	i8 v9084 = (i8)(intptr_t)(ws+1544);
	i8 v9085 = *(i8*)(intptr_t)v9084;
	i8 v9086 = (i8)(intptr_t)(f259_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9086)(v9085, v9083);

c02_0683:;

c02_067f:;

	i8 v9087 = (i8)(intptr_t)(ws+3328);
	i8 v9088 = *(i8*)(intptr_t)v9087;
	i8 v9089 = v9088+(+81);
	i1 v9090 = *(i1*)(intptr_t)v9089;
	i8 v9091 = (i8)(intptr_t)(ws+1544);
	i8 v9092 = *(i8*)(intptr_t)v9091;
	i8 v9093 = v9092+(+81);
	*(i1*)(intptr_t)v9093 = v9090;

	i8 v9094 = (i8)(intptr_t)(ws+1544);
	i8 v9095 = *(i8*)(intptr_t)v9094;
	i8 v9096 = v9095+(+81);
	i1 v9097 = *(i1*)(intptr_t)v9096;
	i1 v9098 = (i1)+0;
	if (v9097==v9098) goto c02_0688; else goto c02_0687;

c02_0687:;

	i8 v9099 = (i8)(intptr_t)(ws+3328);
	i8 v9100 = *(i8*)(intptr_t)v9099;
	i1 v9101 = (i1)+0;
	i8 v9102 = (i8)(intptr_t)(f95_GetOutputParameter);
	i8 v9103;

	((void(*)(i8* /* param */, i1 /* count */, i8 /* subr */))(intptr_t)v9102)(&v9103, v9101, v9100);
	i8 v9104 = (i8)(intptr_t)(ws+1544);
	i8 v9105 = *(i8*)(intptr_t)v9104;
	i8 v9106 = (i8)(intptr_t)(f259_CopyParameterList);

	((void(*)(i8 /* subr */, i8 /* param */))(intptr_t)v9106)(v9105, v9103);

c02_0688:;

c02_0684:;

	i8 v9107 = (i8)(intptr_t)(ws+1544);
	i8 v9108 = *(i8*)(intptr_t)v9107;
	i8 v9109 = (i8)(intptr_t)(f200_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9109)(v9108);

	i8 v9110 = (i8)(intptr_t)(ws+1544);
	i8 v9111 = *(i8*)(intptr_t)v9110;
	i8 v9112 = (i8)(intptr_t)(f201_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9112)(v9111);

	i8 v9113 = (i8)(intptr_t)(ws+1544);
	i8 v9114 = *(i8*)(intptr_t)v9113;
	i8 v9115 = (i8)(intptr_t)(f202_EmitterEmitSubroutineFlags);

	((void(*)(i8 /* subr */))(intptr_t)v9115)(v9114);

	i1 v9116 = (i1)+68;
	i8 v9117 = (i8)(intptr_t)(ws+3256);
	i8 v9118 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9118)(v9117, v9116);

endsub:;
}
	void f195_EmitterDeclareExternalSubroutine(i8 /* external */, i2 /* id */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_87 workspace at ws+3328 length ws+0
void f392_reduce_87(void) {

	i8 v9119 = (i8)(intptr_t)(ws+1544);
	i8 v9120 = *(i8*)(intptr_t)v9119;
	i8 v9121 = v9120+(+56);
	i2 v9122 = *(i2*)(intptr_t)v9121;
	i8 v9123 = (i8)(intptr_t)(ws+3256);
	i8 v9124 = *(i8*)(intptr_t)v9123;
	i8 v9125 = (i8)(intptr_t)(f195_EmitterDeclareExternalSubroutine);

	((void(*)(i8 /* external */, i2 /* id */))(intptr_t)v9125)(v9124, v9122);

	i1 v9126 = (i1)+11;
	i8 v9127 = (i8)(intptr_t)(ws+3272);
	i8 v9128 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9128)(v9127, v9126);

	i1 v9129 = (i1)+16;
	i8 v9130 = (i8)(intptr_t)(ws+3264);
	i8 v9131 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9131)(v9130, v9129);

	i1 v9132 = (i1)+4;
	i8 v9133 = (i8)(intptr_t)(ws+3248);
	i8 v9134 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9134)(v9133, v9132);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f231_AllocSubrId(i2* /* id */);
	void f61_AllocNewType(i8* /* type */);
	void f194_EmitterDeclareSubroutine(i8 /* subr */);

// reduce_88 workspace at ws+3328 length ws+8
void f393_reduce_88(void) {

	i8 v9135 = (i8)+83;
	i8 v9136 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9137;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9136)(&v9137, v9135);
	i8 v9138 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9138 = v9137;

	i8 v9139 = (i8)(intptr_t)(ws+40);
	i8 v9140 = *(i8*)(intptr_t)v9139;
	i8 v9141 = v9140+(+16);
	i8 v9142 = (i8)(intptr_t)(ws+1544);
	i8 v9143 = *(i8*)(intptr_t)v9142;
	i8 v9144 = v9143+(+32);
	*(i8*)(intptr_t)v9144 = v9141;

	i8 v9145 = (i8)(intptr_t)(ws+40);
	i8 v9146 = *(i8*)(intptr_t)v9145;
	i8 v9147 = (i8)(intptr_t)(ws+1544);
	i8 v9148 = *(i8*)(intptr_t)v9147;
	i8 v9149 = v9148+(+8);
	*(i8*)(intptr_t)v9149 = v9146;

	i8 v9150 = (i8)(intptr_t)(f231_AllocSubrId);
	i2 v9151;

	((void(*)(i2* /* id */))(intptr_t)v9150)(&v9151);
	i8 v9152 = (i8)(intptr_t)(ws+1544);
	i8 v9153 = *(i8*)(intptr_t)v9152;
	i8 v9154 = v9153+(+56);
	*(i2*)(intptr_t)v9154 = v9151;

	i8 v9155 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9156;

	((void(*)(i8* /* type */))(intptr_t)v9155)(&v9156);
	i8 v9157 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9157 = v9156;

	i1 v9158 = (i1)+6;
	i8 v9159 = (i8)(intptr_t)(ws+3328);
	i8 v9160 = *(i8*)(intptr_t)v9159;
	i8 v9161 = v9160+(+52);
	*(i1*)(intptr_t)v9161 = v9158;

	i8 v9162 = (i8)(intptr_t)(ws+1528);
	i8 v9163 = *(i8*)(intptr_t)v9162;
	i8 v9164 = v9163+(+48);
	i2 v9165 = *(i2*)(intptr_t)v9164;
	i8 v9166 = (i8)(intptr_t)(ws+3328);
	i8 v9167 = *(i8*)(intptr_t)v9166;
	i8 v9168 = v9167+(+48);
	*(i2*)(intptr_t)v9168 = v9165;

	i8 v9169 = (i8)(intptr_t)(ws+1528);
	i8 v9170 = *(i8*)(intptr_t)v9169;
	i8 v9171 = v9170+(+53);
	i1 v9172 = *(i1*)(intptr_t)v9171;
	i8 v9173 = (i8)(intptr_t)(ws+3328);
	i8 v9174 = *(i8*)(intptr_t)v9173;
	i8 v9175 = v9174+(+53);
	*(i1*)(intptr_t)v9175 = v9172;

	i8 v9176 = (i8)(intptr_t)(ws+1528);
	i8 v9177 = *(i8*)(intptr_t)v9176;
	i8 v9178 = v9177+(+50);
	i2 v9179 = *(i2*)(intptr_t)v9178;
	i8 v9180 = (i8)(intptr_t)(ws+3328);
	i8 v9181 = *(i8*)(intptr_t)v9180;
	i8 v9182 = v9181+(+50);
	*(i2*)(intptr_t)v9182 = v9179;

	i8 v9183 = (i8)(intptr_t)(ws+1544);
	i8 v9184 = *(i8*)(intptr_t)v9183;
	i8 v9185 = (i8)(intptr_t)(ws+3328);
	i8 v9186 = *(i8*)(intptr_t)v9185;
	*(i8*)(intptr_t)v9186 = v9184;

	i8 v9187 = (i8)(intptr_t)(ws+3328);
	i8 v9188 = *(i8*)(intptr_t)v9187;
	i8 v9189 = (i8)(intptr_t)(ws+1544);
	i8 v9190 = *(i8*)(intptr_t)v9189;
	i8 v9191 = v9190+(+40);
	*(i8*)(intptr_t)v9191 = v9188;

	i8 v9192 = (i8)(intptr_t)(ws+1544);
	i8 v9193 = *(i8*)(intptr_t)v9192;
	i8 v9194 = (i8)(intptr_t)(ws+1544);
	i8 v9195 = *(i8*)(intptr_t)v9194;
	i8 v9196 = v9195+(+48);
	*(i8*)(intptr_t)v9196 = v9193;

	i1 v9197 = (i1)+30;
	i8 v9198 = (i8)(intptr_t)(ws+3248);
	i8 v9199 = *(i8*)(intptr_t)v9198;
	i8 v9200 = v9199+(+32);
	*(i1*)(intptr_t)v9200 = v9197;

	i8 v9201 = (i8)(intptr_t)(ws+3328);
	i8 v9202 = *(i8*)(intptr_t)v9201;
	i8 v9203 = (i8)(intptr_t)(ws+3248);
	i8 v9204 = *(i8*)(intptr_t)v9203;
	*(i8*)(intptr_t)v9204 = v9202;

	i8 v9205 = (i8)(intptr_t)(ws+3248);
	i8 v9206 = *(i8*)(intptr_t)v9205;
	i8 v9207 = (i8)(intptr_t)(ws+3328);
	i8 v9208 = *(i8*)(intptr_t)v9207;
	i8 v9209 = v9208+(+32);
	*(i8*)(intptr_t)v9209 = v9206;

	i8 v9210 = (i8)(intptr_t)(ws+3248);
	i8 v9211 = *(i8*)(intptr_t)v9210;
	i8 v9212 = (i8)(intptr_t)(ws+1544);
	i8 v9213 = *(i8*)(intptr_t)v9212;
	*(i8*)(intptr_t)v9213 = v9211;

	i8 v9214 = (i8)(intptr_t)(ws+1544);
	i8 v9215 = *(i8*)(intptr_t)v9214;
	i8 v9216 = (i8)(intptr_t)(f194_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v9216)(v9215);

	i8 v9217 = (i8)(intptr_t)(ws+3248);
	i8 v9218 = *(i8*)(intptr_t)v9217;
	i8 v9219 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9219 = v9218;

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
void f394_reduce_89(void) {

	i8 v9220 = (i8)(intptr_t)(ws+3248);
	i8 v9221 = *(i8*)(intptr_t)v9220;
	i8 v9222 = v9221+(+32);
	i1 v9223 = *(i1*)(intptr_t)v9222;
	i1 v9224 = (i1)+30;
	if (v9223==v9224) goto c02_0690; else goto c02_068e;

c02_0690:;

	i8 v9225 = (i8)(intptr_t)(ws+3248);
	i8 v9226 = *(i8*)(intptr_t)v9225;
	i8 v9227 = *(i8*)(intptr_t)v9226;
	i8 v9228 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v9229;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9228)(&v9229, v9227);
	i1 v9230 = (i1)+0;
	if (v9229==v9230) goto c02_068e; else goto c02_068f;

c02_068e:;

	i8 v9231 = (i8)(intptr_t)c02_s018a;
	i8 v9232 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9232)(v9231);

c02_068f:;

c02_0689:;

	i8 v9233 = (i8)(intptr_t)(ws+3248);
	i8 v9234 = *(i8*)(intptr_t)v9233;
	i8 v9235 = *(i8*)(intptr_t)v9234;
	i8 v9236 = *(i8*)(intptr_t)v9235;
	i8 v9237 = (i8)(intptr_t)(ws+1544);
	*(i8*)(intptr_t)v9237 = v9236;

	i8 v9238 = (i8)(intptr_t)(ws+1544);
	i8 v9239 = *(i8*)(intptr_t)v9238;
	i8 v9240 = v9239+(+82);
	i1 v9241 = *(i1*)(intptr_t)v9240;
	i1 v9242 = v9241&(+1);
	i1 v9243 = (i1)+0;
	if (v9242==v9243) goto c02_0695; else goto c02_0694;

c02_0694:;

	i8 v9244 = (i8)(intptr_t)c02_s018b;
	i8 v9245 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9245)(v9244);

c02_0695:;

c02_0691:;

	i8 v9246 = (i8)(intptr_t)(ws+1544);
	i8 v9247 = *(i8*)(intptr_t)v9246;
	i8 v9248 = v9247+(+8);
	i8 v9249 = *(i8*)(intptr_t)v9248;
	i8 v9250 = (i8)(intptr_t)(ws+40);
	i8 v9251 = *(i8*)(intptr_t)v9250;
	if (v9249==v9251) goto c02_069a; else goto c02_0699;

c02_0699:;

	i8 v9252 = (i8)(intptr_t)c02_s018c;
	i8 v9253 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9253)(v9252);

c02_069a:;

c02_0696:;

	i1 v9254 = (i1)+25;
	i8 v9255 = (i8)(intptr_t)(ws+3256);
	i8 v9256 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9256)(v9255, v9254);

endsub:;
}
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f108_MidStartsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);

// reduce_90 workspace at ws+3328 length ws+8
void f395_reduce_90(void) {

	i8 v9257 = (i8)+16;
	i8 v9258 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9259;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9258)(&v9259, v9257);
	i8 v9260 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9260 = v9259;

	i8 v9261 = (i8)(intptr_t)(ws+88);
	i8 v9262 = *(i8*)(intptr_t)v9261;
	i8 v9263 = (i8)(intptr_t)(ws+3328);
	i8 v9264 = *(i8*)(intptr_t)v9263;
	i8 v9265 = v9264+(+8);
	*(i8*)(intptr_t)v9265 = v9262;

	i8 v9266 = (i8)(intptr_t)(ws+52);
	i2 v9267 = *(i2*)(intptr_t)v9266;
	i8 v9268 = (i8)(intptr_t)(ws+3328);
	i8 v9269 = *(i8*)(intptr_t)v9268;
	*(i2*)(intptr_t)v9269 = v9267;

	i2 v9270 = (i2)+0;
	i8 v9271 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9271 = v9270;

	i8 v9272 = (i8)(intptr_t)(ws+54);
	i2 v9273 = *(i2*)(intptr_t)v9272;
	i8 v9274 = (i8)(intptr_t)(ws+3328);
	i8 v9275 = *(i8*)(intptr_t)v9274;
	i8 v9276 = v9275+(+2);
	*(i2*)(intptr_t)v9276 = v9273;

	i2 v9277 = (i2)+0;
	i8 v9278 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9278 = v9277;

	i8 v9279 = (i8)(intptr_t)(ws+3328);
	i8 v9280 = *(i8*)(intptr_t)v9279;
	i8 v9281 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9281 = v9280;

	i8 v9282 = (i8)(intptr_t)(ws+1544);
	i8 v9283 = *(i8*)(intptr_t)v9282;
	i8 v9284 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9284 = v9283;

	i8 v9285 = (i8)(intptr_t)(ws+40);
	i8 v9286 = *(i8*)(intptr_t)v9285;
	i8 v9287 = (i8)(intptr_t)(f108_MidStartsub);
	i8 v9288;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9287)(&v9288, v9286);
	i8 v9289 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9289)(v9288);

	i8 v9290 = (i8)(intptr_t)(ws+40);
	i8 v9291 = *(i8*)(intptr_t)v9290;
	i8 v9292 = v9291+(+82);
	i1 v9293 = *(i1*)(intptr_t)v9292;
	i1 v9294 = v9293|(+1);
	i8 v9295 = (i8)(intptr_t)(ws+40);
	i8 v9296 = *(i8*)(intptr_t)v9295;
	i8 v9297 = v9296+(+82);
	*(i1*)(intptr_t)v9297 = v9294;

endsub:;
}
	void f123_MidEndsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f261_ReportWorkspaces(i8 /* subr */);
	void f33_Free(i8 /* block */);
	void f257_DestructSubroutineContents(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_91 workspace at ws+3328 length ws+16
void f396_reduce_91(void) {

	i8 v9298 = (i8)(intptr_t)(ws+40);
	i8 v9299 = *(i8*)(intptr_t)v9298;
	i8 v9300 = (i8)(intptr_t)(f123_MidEndsub);
	i8 v9301;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9300)(&v9301, v9299);
	i8 v9302 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9302)(v9301);

	i8 v9303 = (i8)(intptr_t)(ws+40);
	i8 v9304 = *(i8*)(intptr_t)v9303;
	i8 v9305 = (i8)(intptr_t)(f261_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v9305)(v9304);

	i8 v9306 = (i8)(intptr_t)(ws+88);
	i8 v9307 = *(i8*)(intptr_t)v9306;
	i2 v9308 = *(i2*)(intptr_t)v9307;
	i8 v9309 = (i8)(intptr_t)(ws+52);
	*(i2*)(intptr_t)v9309 = v9308;

	i8 v9310 = (i8)(intptr_t)(ws+88);
	i8 v9311 = *(i8*)(intptr_t)v9310;
	i8 v9312 = v9311+(+2);
	i2 v9313 = *(i2*)(intptr_t)v9312;
	i8 v9314 = (i8)(intptr_t)(ws+54);
	*(i2*)(intptr_t)v9314 = v9313;

	i8 v9315 = (i8)(intptr_t)(ws+88);
	i8 v9316 = *(i8*)(intptr_t)v9315;
	i8 v9317 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9317 = v9316;

	i8 v9318 = (i8)(intptr_t)(ws+3328);
	i8 v9319 = *(i8*)(intptr_t)v9318;
	i8 v9320 = v9319+(+8);
	i8 v9321 = *(i8*)(intptr_t)v9320;
	i8 v9322 = (i8)(intptr_t)(ws+88);
	*(i8*)(intptr_t)v9322 = v9321;

	i8 v9323 = (i8)(intptr_t)(ws+3328);
	i8 v9324 = *(i8*)(intptr_t)v9323;
	i8 v9325 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9325)(v9324);

	i8 v9326 = (i8)(intptr_t)(ws+40);
	i8 v9327 = *(i8*)(intptr_t)v9326;
	i8 v9328 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9328 = v9327;

	i8 v9329 = (i8)(intptr_t)(ws+3336);
	i8 v9330 = *(i8*)(intptr_t)v9329;
	i8 v9331 = v9330+(+8);
	i8 v9332 = *(i8*)(intptr_t)v9331;
	i8 v9333 = (i8)(intptr_t)(ws+40);
	*(i8*)(intptr_t)v9333 = v9332;

	i8 v9334 = (i8)(intptr_t)(ws+3336);
	i8 v9335 = *(i8*)(intptr_t)v9334;
	i8 v9336 = (i8)(intptr_t)(f257_DestructSubroutineContents);

	((void(*)(i8 /* subr */))(intptr_t)v9336)(v9335);

	i1 v9337 = (i1)+25;
	i8 v9338 = (i8)(intptr_t)(ws+3248);
	i8 v9339 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9339)(v9338, v9337);

endsub:;
}
	void f200_EmitterEmitInputParameters(i8 /* subr */);
	void f201_EmitterEmitOutputParameters(i8 /* subr */);

// reduce_92 workspace at ws+3328 length ws+0
void f397_reduce_92(void) {

	i1 v9340 = (i1)+0;
	i8 v9341 = (i8)(intptr_t)(ws+1544);
	i8 v9342 = *(i8*)(intptr_t)v9341;
	i8 v9343 = v9342+(+81);
	*(i1*)(intptr_t)v9343 = v9340;

	i8 v9344 = (i8)(intptr_t)(ws+1544);
	i8 v9345 = *(i8*)(intptr_t)v9344;
	i8 v9346 = (i8)(intptr_t)(f200_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9346)(v9345);

	i8 v9347 = (i8)(intptr_t)(ws+1544);
	i8 v9348 = *(i8*)(intptr_t)v9347;
	i8 v9349 = (i8)(intptr_t)(f201_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9349)(v9348);

endsub:;
}
	void f93_CountParameters(i1* /* count */, i8 /* param */);
	void f200_EmitterEmitInputParameters(i8 /* subr */);
	void f201_EmitterEmitOutputParameters(i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_93 workspace at ws+3328 length ws+0
void f398_reduce_93(void) {

	i8 v9350 = (i8)(intptr_t)(ws+3248);
	i8 v9351 = *(i8*)(intptr_t)v9350;
	i8 v9352 = (i8)(intptr_t)(f93_CountParameters);
	i1 v9353;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9352)(&v9353, v9351);
	i8 v9354 = (i8)(intptr_t)(ws+1544);
	i8 v9355 = *(i8*)(intptr_t)v9354;
	i8 v9356 = v9355+(+81);
	*(i1*)(intptr_t)v9356 = v9353;

	i8 v9357 = (i8)(intptr_t)(ws+1544);
	i8 v9358 = *(i8*)(intptr_t)v9357;
	i8 v9359 = (i8)(intptr_t)(f200_EmitterEmitInputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9359)(v9358);

	i8 v9360 = (i8)(intptr_t)(ws+1544);
	i8 v9361 = *(i8*)(intptr_t)v9360;
	i8 v9362 = (i8)(intptr_t)(f201_EmitterEmitOutputParameters);

	((void(*)(i8 /* subr */))(intptr_t)v9362)(v9361);

	i1 v9363 = (i1)+6;
	i8 v9364 = (i8)(intptr_t)(ws+3256);
	i8 v9365 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9365)(v9364, v9363);

endsub:;
}
	void f93_CountParameters(i1* /* count */, i8 /* param */);

// reduce_94 workspace at ws+3328 length ws+0
void f399_reduce_94(void) {

	i8 v9366 = (i8)(intptr_t)(ws+3248);
	i8 v9367 = *(i8*)(intptr_t)v9366;
	i8 v9368 = (i8)(intptr_t)(f93_CountParameters);
	i1 v9369;

	((void(*)(i1* /* count */, i8 /* param */))(intptr_t)v9368)(&v9369, v9367);
	i8 v9370 = (i8)(intptr_t)(ws+1544);
	i8 v9371 = *(i8*)(intptr_t)v9370;
	i8 v9372 = v9371+(+80);
	*(i1*)(intptr_t)v9372 = v9369;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_95 workspace at ws+3328 length ws+0
void f400_reduce_95(void) {

	i8 v9373 = (i8)+0;
	i8 v9374 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9374 = v9373;

	i1 v9375 = (i1)+4;
	i8 v9376 = (i8)(intptr_t)(ws+3248);
	i8 v9377 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9377)(v9376, v9375);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_96 workspace at ws+3328 length ws+0
void f401_reduce_96(void) {

	i8 v9378 = (i8)(intptr_t)(ws+3256);
	i8 v9379 = *(i8*)(intptr_t)v9378;
	i8 v9380 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9380 = v9379;

	i1 v9381 = (i1)+4;
	i8 v9382 = (i8)(intptr_t)(ws+3248);
	i8 v9383 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9383)(v9382, v9381);

endsub:;
}

// reduce_97 workspace at ws+3328 length ws+0
void f402_reduce_97(void) {

	i8 v9384 = (i8)(intptr_t)(ws+3248);
	i8 v9385 = *(i8*)(intptr_t)v9384;
	i8 v9386 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9386 = v9385;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_98 workspace at ws+3328 length ws+0
void f403_reduce_98(void) {

	i8 v9387 = (i8)(intptr_t)(ws+3248);
	i8 v9388 = *(i8*)(intptr_t)v9387;
	i8 v9389 = (i8)(intptr_t)(ws+3264);
	i8 v9390 = *(i8*)(intptr_t)v9389;
	i8 v9391 = *(i8*)(intptr_t)v9390;
	i8 v9392 = v9391+(+16);
	*(i8*)(intptr_t)v9392 = v9388;

	i8 v9393 = (i8)(intptr_t)(ws+3264);
	i8 v9394 = *(i8*)(intptr_t)v9393;
	i8 v9395 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9395 = v9394;

	i1 v9396 = (i1)+45;
	i8 v9397 = (i8)(intptr_t)(ws+3256);
	i8 v9398 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9398)(v9397, v9396);

endsub:;
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);
	void f254_InitVariable(i8 /* type */, i8 /* symbol */, i8 /* subr */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_99 workspace at ws+3328 length ws+0
void f404_reduce_99(void) {

	i8 v9399 = (i8)(intptr_t)(ws+1544);
	i8 v9400 = *(i8*)(intptr_t)v9399;
	i8 v9401 = v9400+(+16);
	i8 v9402 = (i8)(intptr_t)(ws+3264);
	i8 v9403 = *(i8*)(intptr_t)v9402;
	i8 v9404 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v9405;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9404)(&v9405, v9403, v9401);
	i8 v9406 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9406 = v9405;

	i8 v9407 = (i8)(intptr_t)(ws+1544);
	i8 v9408 = *(i8*)(intptr_t)v9407;
	i8 v9409 = (i8)(intptr_t)(ws+3240);
	i8 v9410 = *(i8*)(intptr_t)v9409;
	i8 v9411 = (i8)(intptr_t)(ws+3248);
	i8 v9412 = *(i8*)(intptr_t)v9411;
	i8 v9413 = (i8)(intptr_t)(f254_InitVariable);

	((void(*)(i8 /* type */, i8 /* symbol */, i8 /* subr */))(intptr_t)v9413)(v9412, v9410, v9408);

	i1 v9414 = (i1)+6;
	i8 v9415 = (i8)(intptr_t)(ws+3256);
	i8 v9416 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9416)(v9415, v9414);

endsub:;
}
	void f233_ArchAlignUp(i2* /* newvalue */, i1 /* alignment */, i2 /* value */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_100 workspace at ws+3328 length ws+0
void f405_reduce_100(void) {

	i8 v9417 = (i8)(intptr_t)(ws+72);
	i8 v9418 = *(i8*)(intptr_t)v9417;
	i8 v9419 = v9418+(+48);
	i2 v9420 = *(i2*)(intptr_t)v9419;
	i8 v9421 = (i8)(intptr_t)(ws+72);
	i8 v9422 = *(i8*)(intptr_t)v9421;
	i8 v9423 = v9422+(+53);
	i1 v9424 = *(i1*)(intptr_t)v9423;
	i8 v9425 = (i8)(intptr_t)(f233_ArchAlignUp);
	i2 v9426;

	((void(*)(i2* /* newvalue */, i1 /* alignment */, i2 /* value */))(intptr_t)v9425)(&v9426, v9424, v9420);
	i8 v9427 = (i8)(intptr_t)(ws+72);
	i8 v9428 = *(i8*)(intptr_t)v9427;
	i8 v9429 = v9428+(+50);
	*(i2*)(intptr_t)v9429 = v9426;

	i1 v9430 = (i1)+65;
	i8 v9431 = (i8)(intptr_t)(ws+3272);
	i8 v9432 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9432)(v9431, v9430);

	i1 v9433 = (i1)+10;
	i8 v9434 = (i8)(intptr_t)(ws+3256);
	i8 v9435 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9435)(v9434, v9433);

	i1 v9436 = (i1)+20;
	i8 v9437 = (i8)(intptr_t)(ws+3248);
	i8 v9438 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9438)(v9437, v9436);

endsub:;
}
	void f287_SymbolRedeclarationError(void);
	void f61_AllocNewType(i8* /* type */);
	void f287_SymbolRedeclarationError(void);

// reduce_101 workspace at ws+3328 length ws+0
void f406_reduce_101(void) {

	i8 v9439 = (i8)(intptr_t)(ws+3248);
	i8 v9440 = *(i8*)(intptr_t)v9439;
	i8 v9441 = v9440+(+32);
	i1 v9442 = *(i1*)(intptr_t)v9441;

	if (v9442 != +30) goto c02_069c;

	i8 v9443 = (i8)(intptr_t)(ws+3248);
	i8 v9444 = *(i8*)(intptr_t)v9443;
	i8 v9445 = *(i8*)(intptr_t)v9444;
	i8 v9446 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9446 = v9445;

	i8 v9447 = (i8)(intptr_t)(ws+72);
	i8 v9448 = *(i8*)(intptr_t)v9447;
	i8 v9449 = v9448+(+52);
	i1 v9450 = *(i1*)(intptr_t)v9449;
	i1 v9451 = (i1)+1;
	if (v9450==v9451) goto c02_06a1; else goto c02_06a0;

c02_06a0:;

	i8 v9452 = (i8)(intptr_t)(f287_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9452)();

c02_06a1:;

c02_069d:;

	goto c02_069b;

c02_069c:;

	if (v9442 != +0) goto c02_06a2;

	i8 v9453 = (i8)(intptr_t)(f61_AllocNewType);
	i8 v9454;

	((void(*)(i8* /* type */))(intptr_t)v9453)(&v9454);
	i8 v9455 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9455 = v9454;

	i1 v9456 = (i1)+30;
	i8 v9457 = (i8)(intptr_t)(ws+3248);
	i8 v9458 = *(i8*)(intptr_t)v9457;
	i8 v9459 = v9458+(+32);
	*(i1*)(intptr_t)v9459 = v9456;

	i8 v9460 = (i8)(intptr_t)(ws+72);
	i8 v9461 = *(i8*)(intptr_t)v9460;
	i8 v9462 = (i8)(intptr_t)(ws+3248);
	i8 v9463 = *(i8*)(intptr_t)v9462;
	*(i8*)(intptr_t)v9463 = v9461;

	i8 v9464 = (i8)(intptr_t)(ws+3248);
	i8 v9465 = *(i8*)(intptr_t)v9464;
	i8 v9466 = (i8)(intptr_t)(ws+72);
	i8 v9467 = *(i8*)(intptr_t)v9466;
	i8 v9468 = v9467+(+32);
	*(i8*)(intptr_t)v9468 = v9465;

	goto c02_069b;

c02_06a2:;

	i8 v9469 = (i8)(intptr_t)(f287_SymbolRedeclarationError);

	((void(*)(void))(intptr_t)v9469)();

c02_069b:;


	i1 v9470 = (i1)+5;
	i8 v9471 = (i8)(intptr_t)(ws+72);
	i8 v9472 = *(i8*)(intptr_t)v9471;
	i8 v9473 = v9472+(+52);
	*(i1*)(intptr_t)v9473 = v9470;

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
void f407_reduce_102(void) {

	i8 v9474 = (i8)(intptr_t)(ws+3248);
	i8 v9475 = *(i8*)(intptr_t)v9474;
	i8 v9476 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9476)(v9475);

	i8 v9477 = (i8)(intptr_t)(ws+3248);
	i8 v9478 = *(i8*)(intptr_t)v9477;
	i8 v9479 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9480;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9479)(&v9480, v9478);
	i1 v9481 = (i1)+0;
	if (v9480==v9481) goto c02_06a6; else goto c02_06a7;

c02_06a6:;

	i8 v9482 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v9482)();

	i8 v9483 = (i8)(intptr_t)(ws+3248);
	i8 v9484 = *(i8*)(intptr_t)v9483;
	i8 v9485 = v9484+(+32);
	i8 v9486 = *(i8*)(intptr_t)v9485;
	i8 v9487 = v9486+(+8);
	i8 v9488 = *(i8*)(intptr_t)v9487;
	i8 v9489 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9489)(v9488);

	i8 v9490 = (i8)(intptr_t)c02_s018d;
	i8 v9491 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v9491)(v9490);

	i8 v9492 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v9492)();

c02_06a7:;

c02_06a3:;

	i8 v9493 = (i8)(intptr_t)(ws+3248);
	i8 v9494 = *(i8*)(intptr_t)v9493;
	i8 v9495 = v9494+(+53);
	i1 v9496 = *(i1*)(intptr_t)v9495;
	i8 v9497 = (i8)(intptr_t)(ws+72);
	i8 v9498 = *(i8*)(intptr_t)v9497;
	i8 v9499 = v9498+(+53);
	*(i1*)(intptr_t)v9499 = v9496;

	i8 v9500 = (i8)(intptr_t)(ws+3248);
	i8 v9501 = *(i8*)(intptr_t)v9500;
	i8 v9502 = v9501+(+48);
	i2 v9503 = *(i2*)(intptr_t)v9502;
	i8 v9504 = (i8)(intptr_t)(ws+72);
	i8 v9505 = *(i8*)(intptr_t)v9504;
	i8 v9506 = v9505+(+48);
	*(i2*)(intptr_t)v9506 = v9503;

	i8 v9507 = (i8)(intptr_t)(ws+3248);
	i8 v9508 = *(i8*)(intptr_t)v9507;
	i8 v9509 = (i8)(intptr_t)(ws+72);
	i8 v9510 = *(i8*)(intptr_t)v9509;
	i8 v9511 = v9510+(+16);
	*(i8*)(intptr_t)v9511 = v9508;

endsub:;
}
	void f218_CheckNotPartialType(i8 /* type */);
	void f64_InternalAlloc(i8* /* block */, i8 /* length */);
	void f237_ArchInitMember(i2 /* position */, i8 /* member */, i8 /* containing */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_103 workspace at ws+3328 length ws+0
void f408_reduce_103(void) {

	i8 v9512 = (i8)(intptr_t)(ws+3256);
	i8 v9513 = *(i8*)(intptr_t)v9512;
	i8 v9514 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9514)(v9513);

	i8 v9515 = (i8)(intptr_t)(ws+72);
	i8 v9516 = *(i8*)(intptr_t)v9515;
	i8 v9517 = v9516+(+53);
	i1 v9518 = *(i1*)(intptr_t)v9517;
	i8 v9519 = (i8)(intptr_t)(ws+3256);
	i8 v9520 = *(i8*)(intptr_t)v9519;
	i8 v9521 = v9520+(+53);
	i1 v9522 = *(i1*)(intptr_t)v9521;
	if (v9518<v9522) goto c02_06ab; else goto c02_06ac;

c02_06ab:;

	i8 v9523 = (i8)(intptr_t)(ws+3256);
	i8 v9524 = *(i8*)(intptr_t)v9523;
	i8 v9525 = v9524+(+53);
	i1 v9526 = *(i1*)(intptr_t)v9525;
	i8 v9527 = (i8)(intptr_t)(ws+72);
	i8 v9528 = *(i8*)(intptr_t)v9527;
	i8 v9529 = v9528+(+53);
	*(i1*)(intptr_t)v9529 = v9526;

c02_06ac:;

c02_06a8:;

	i1 v9530 = (i1)+28;
	i8 v9531 = (i8)(intptr_t)(ws+3280);
	i8 v9532 = *(i8*)(intptr_t)v9531;
	i8 v9533 = v9532+(+32);
	*(i1*)(intptr_t)v9533 = v9530;

	i8 v9534 = (i8)+27;
	i8 v9535 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9536;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9535)(&v9536, v9534);
	i8 v9537 = (i8)(intptr_t)(ws+3280);
	i8 v9538 = *(i8*)(intptr_t)v9537;
	*(i8*)(intptr_t)v9538 = v9536;

	i8 v9539 = (i8)(intptr_t)(ws+3256);
	i8 v9540 = *(i8*)(intptr_t)v9539;
	i8 v9541 = (i8)(intptr_t)(ws+3280);
	i8 v9542 = *(i8*)(intptr_t)v9541;
	i8 v9543 = *(i8*)(intptr_t)v9542;
	*(i8*)(intptr_t)v9543 = v9540;

	i8 v9544 = (i8)(intptr_t)(ws+72);
	i8 v9545 = *(i8*)(intptr_t)v9544;
	i8 v9546 = (i8)(intptr_t)(ws+3280);
	i8 v9547 = *(i8*)(intptr_t)v9546;
	i8 v9548 = (i8)(intptr_t)(ws+3272);
	i2 v9549 = *(i2*)(intptr_t)v9548;
	i8 v9550 = (i8)(intptr_t)(f237_ArchInitMember);

	((void(*)(i2 /* position */, i8 /* member */, i8 /* containing */))(intptr_t)v9550)(v9549, v9547, v9545);

	i1 v9551 = (i1)+6;
	i8 v9552 = (i8)(intptr_t)(ws+3264);
	i8 v9553 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9553)(v9552, v9551);

	i1 v9554 = (i1)+22;
	i8 v9555 = (i8)(intptr_t)(ws+3248);
	i8 v9556 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9556)(v9555, v9554);

endsub:;
}

// reduce_104 workspace at ws+3328 length ws+0
void f409_reduce_104(void) {

	i8 v9557 = (i8)(intptr_t)(ws+72);
	i8 v9558 = *(i8*)(intptr_t)v9557;
	i8 v9559 = v9558+(+48);
	i2 v9560 = *(i2*)(intptr_t)v9559;
	i8 v9561 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9561 = v9560;

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_105 workspace at ws+3328 length ws+0
void f410_reduce_105(void) {

	i8 v9562 = (i8)(intptr_t)(ws+3256);
	i4 v9563 = *(i4*)(intptr_t)v9562;
	i2 v9564 = (s2)(s4)v9563;
	i8 v9565 = (i8)(intptr_t)(ws+3240);
	*(i2*)(intptr_t)v9565 = v9564;

	i1 v9566 = (i1)+16;
	i8 v9567 = (i8)(intptr_t)(ws+3264);
	i8 v9568 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9568)(v9567, v9566);

	i1 v9569 = (i1)+4;
	i8 v9570 = (i8)(intptr_t)(ws+3248);
	i8 v9571 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9571)(v9570, v9569);

endsub:;
}
	void f215_AddSymbol(i8* /* symbol */, i8 /* name */, i8 /* namespace */);

// reduce_106 workspace at ws+3328 length ws+0
void f411_reduce_106(void) {

	i8 v9572 = (i8)(intptr_t)(ws+72);
	i8 v9573 = *(i8*)(intptr_t)v9572;
	i8 v9574 = (i8)(intptr_t)(ws+3248);
	i8 v9575 = *(i8*)(intptr_t)v9574;
	i8 v9576 = (i8)(intptr_t)(f215_AddSymbol);
	i8 v9577;

	((void(*)(i8* /* symbol */, i8 /* name */, i8 /* namespace */))(intptr_t)v9576)(&v9577, v9575, v9573);
	i8 v9578 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9578 = v9577;

	i8 v9579 = (i8)(intptr_t)(ws+72);
	i8 v9580 = *(i8*)(intptr_t)v9579;
	i8 v9581 = v9580+(+24);
	i1 v9582 = *(i1*)(intptr_t)v9581;
	i1 v9583 = v9582+(+1);
	i8 v9584 = (i8)(intptr_t)(ws+72);
	i8 v9585 = *(i8*)(intptr_t)v9584;
	i8 v9586 = v9585+(+24);
	*(i1*)(intptr_t)v9586 = v9583;

endsub:;
}
	void f289_CheckEndOfInitialiser(void);
	void f118_MidEndinit(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_107 workspace at ws+3328 length ws+0
void f412_reduce_107(void) {

	i8 v9587 = (i8)(intptr_t)(f289_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9587)();

	i8 v9588 = (i8)(intptr_t)(f118_MidEndinit);
	i8 v9589;

	((void(*)(i8* /* m */))(intptr_t)v9588)(&v9589);
	i8 v9590 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9590)(v9589);

	i1 v9591 = (i1)+31;
	i8 v9592 = (i8)(intptr_t)(ws+3272);
	i8 v9593 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9593)(v9592, v9591);

	i1 v9594 = (i1)+32;
	i8 v9595 = (i8)(intptr_t)(ws+3256);
	i8 v9596 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9596)(v9595, v9594);

	i1 v9597 = (i1)+22;
	i8 v9598 = (i8)(intptr_t)(ws+3248);
	i8 v9599 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9599)(v9598, v9597);

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
	void f120_MidStartinit(i8* /* m */, i8 /* sym */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_108 workspace at ws+3328 length ws+0
void f413_reduce_108(void) {

	i8 v9600 = (i8)(intptr_t)(ws+3256);
	i8 v9601 = *(i8*)(intptr_t)v9600;
	i8 v9602 = (i8)(intptr_t)(f218_CheckNotPartialType);

	((void(*)(i8 /* type */))(intptr_t)v9602)(v9601);

	i1 v9603 = (i1)+28;
	i8 v9604 = (i8)(intptr_t)(ws+3272);
	i8 v9605 = *(i8*)(intptr_t)v9604;
	i8 v9606 = v9605+(+32);
	*(i1*)(intptr_t)v9606 = v9603;

	i8 v9607 = (i8)+27;
	i8 v9608 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9609;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9608)(&v9609, v9607);
	i8 v9610 = (i8)(intptr_t)(ws+3272);
	i8 v9611 = *(i8*)(intptr_t)v9610;
	*(i8*)(intptr_t)v9611 = v9609;

	i8 v9612 = (i8)(intptr_t)(ws+3256);
	i8 v9613 = *(i8*)(intptr_t)v9612;
	i8 v9614 = (i8)(intptr_t)(ws+3272);
	i8 v9615 = *(i8*)(intptr_t)v9614;
	i8 v9616 = *(i8*)(intptr_t)v9615;
	*(i8*)(intptr_t)v9616 = v9613;

	i8 v9617 = (i8)(intptr_t)(ws+40);
	i8 v9618 = *(i8*)(intptr_t)v9617;
	i8 v9619 = (i8)(intptr_t)(ws+3272);
	i8 v9620 = *(i8*)(intptr_t)v9619;
	i8 v9621 = *(i8*)(intptr_t)v9620;
	i8 v9622 = v9621+(+8);
	*(i8*)(intptr_t)v9622 = v9618;

	i1 v9623 = (i1)+255;
	i8 v9624 = (i8)(intptr_t)(ws+3272);
	i8 v9625 = *(i8*)(intptr_t)v9624;
	i8 v9626 = *(i8*)(intptr_t)v9625;
	i8 v9627 = v9626+(+26);
	*(i1*)(intptr_t)v9627 = v9623;

	i8 v9628 = (i8)(intptr_t)(f230_AllocLabel);
	i2 v9629;

	((void(*)(i2* /* label */))(intptr_t)v9628)(&v9629);
	i8 v9630 = (i8)(intptr_t)(ws+3272);
	i8 v9631 = *(i8*)(intptr_t)v9630;
	i8 v9632 = *(i8*)(intptr_t)v9631;
	i8 v9633 = v9632+(+24);
	*(i2*)(intptr_t)v9633 = v9629;

	i8 v9634 = (i8)(intptr_t)(ws+3256);
	i8 v9635 = *(i8*)(intptr_t)v9634;
	i8 v9636 = (i8)(intptr_t)(f222_IsArray);
	i1 v9637;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9636)(&v9637, v9635);
	i1 v9638 = (i1)+0;
	if (v9637==v9638) goto c02_06b4; else goto c02_06b3;

c02_06b4:;

	i8 v9639 = (i8)(intptr_t)(ws+3256);
	i8 v9640 = *(i8*)(intptr_t)v9639;
	i8 v9641 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9642;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9641)(&v9642, v9640);
	i1 v9643 = (i1)+0;
	if (v9642==v9643) goto c02_06b2; else goto c02_06b3;

c02_06b2:;

	i8 v9644 = (i8)(intptr_t)c02_s018e;
	i8 v9645 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9645)(v9644);

c02_06b3:;

c02_06ad:;

	i8 v9646 = (i8)(intptr_t)(ws+3256);
	i8 v9647 = *(i8*)(intptr_t)v9646;
	i8 v9648 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9649;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9648)(&v9649, v9647);
	i1 v9650 = (i1)+0;
	if (v9649==v9650) goto c02_06bb; else goto c02_06bc;

c02_06bc:;

	i8 v9651 = (i8)(intptr_t)(ws+3256);
	i8 v9652 = *(i8*)(intptr_t)v9651;
	i8 v9653 = v9652+(+16);
	i8 v9654 = *(i8*)(intptr_t)v9653;
	i8 v9655 = (i8)+0;
	if (v9654==v9655) goto c02_06bb; else goto c02_06ba;

c02_06ba:;

	i8 v9656 = (i8)(intptr_t)c02_s018f;
	i8 v9657 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9657)(v9656);

c02_06bb:;

c02_06b5:;

	i8 v9658 = (i8)(intptr_t)(ws+3256);
	i8 v9659 = *(i8*)(intptr_t)v9658;
	i8 v9660 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9661;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9660)(&v9661, v9659);
	i1 v9662 = (i1)+0;
	if (v9661==v9662) goto c02_06c1; else goto c02_06c0;

c02_06c0:;

	i8 v9663 = (i8)(intptr_t)(ws+3256);
	i8 v9664 = *(i8*)(intptr_t)v9663;
	i8 v9665 = *(i8*)(intptr_t)v9664;
	i8 v9666 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9666 = v9665;

c02_06c1:;

c02_06bd:;

	i8 v9667 = (i8)(intptr_t)(ws+3256);
	i8 v9668 = *(i8*)(intptr_t)v9667;
	i8 v9669 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9669 = v9668;

	i2 v9670 = (i2)+0;
	i8 v9671 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9671 = v9670;

	i2 v9672 = (i2)+0;
	i8 v9673 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9673 = v9672;

	i8 v9674 = (i8)(intptr_t)(ws+3272);
	i8 v9675 = *(i8*)(intptr_t)v9674;
	i8 v9676 = (i8)(intptr_t)(f120_MidStartinit);
	i8 v9677;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v9676)(&v9677, v9675);
	i8 v9678 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9678)(v9677);

	i1 v9679 = (i1)+6;
	i8 v9680 = (i8)(intptr_t)(ws+3264);
	i8 v9681 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9681)(v9680, v9679);

	i1 v9682 = (i1)+2;
	i8 v9683 = (i8)(intptr_t)(ws+3248);
	i8 v9684 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9684)(v9683, v9682);

endsub:;
}
	void f293_GetInitedMemberChecked(i8* /* member */, i8* /* type */);
	void f291_AlignTo(i1 /* alignment */);
	void f224_IsNum(i1* /* result */, i8 /* type */);
const i1 c02_s0190[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x6e,0x20,0x6e,0x75,0x6d,0x62,0x65,0x72,0 };
	void f71_SimpleError(i8 /* message */);
	void f150_MidInit(i8* /* m */, i4 /* value */, i1 /* width */);
	void f251_Generate(i8 /* statement */);
	void f63_IsPtr(i1* /* result */, i8 /* type */);
const i1 c02_s0191[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6d,0x75,0x73,0x74,0x20,0x62,0x65,0x20,0x61,0x20,0x73,0x74,0x72,0x69,0x6e,0x67,0 };
	void f71_SimpleError(i8 /* message */);
	void f143_MidInitstring(i8* /* m */, i8 /* text */);
	void f251_Generate(i8 /* statement */);
const i1 c02_s0192[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f111_MidInitaddress(i8* /* m */, i2 /* off */, i8 /* sym */);
	void f251_Generate(i8 /* statement */);
const i1 c02_s0193[] = { 0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x69,0x73,0x65,0x72,0x20,0x6f,0x66,0x20,0x77,0x72,0x6f,0x6e,0x67,0x20,0x74,0x79,0x70,0x65,0 };
	void f71_SimpleError(i8 /* message */);
	void f141_MidInitsubref(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f284_parser_i_constant_error(void);
	void f58_Discard(i8 /* node */);

// reduce_109 workspace at ws+3328 length ws+18
void f414_reduce_109(void) {

	i8 v9685 = (i8)(intptr_t)(f293_GetInitedMemberChecked);
	i8 v9686;
	i8 v9687;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9685)(&v9686, &v9687);

	i8 v9688 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9688 = v9687;

	i8 v9689 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9689 = v9686;

	i8 v9690 = (i8)(intptr_t)(ws+3336);
	i8 v9691 = *(i8*)(intptr_t)v9690;
	i8 v9692 = v9691+(+53);
	i1 v9693 = *(i1*)(intptr_t)v9692;
	i8 v9694 = (i8)(intptr_t)(f291_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v9694)(v9693);

	i8 v9695 = (i8)(intptr_t)(ws+3336);
	i8 v9696 = *(i8*)(intptr_t)v9695;
	i8 v9697 = v9696+(+48);
	i2 v9698 = *(i2*)(intptr_t)v9697;
	i8 v9699 = (i8)(intptr_t)(ws+3344);
	*(i2*)(intptr_t)v9699 = v9698;

	i8 v9700 = (i8)(intptr_t)(ws+3248);
	i8 v9701 = *(i8*)(intptr_t)v9700;
	i8 v9702 = v9701+(+40);
	i1 v9703 = *(i1*)(intptr_t)v9702;

	if (v9703 != +45) goto c02_06c3;

	i8 v9704 = (i8)(intptr_t)(ws+3336);
	i8 v9705 = *(i8*)(intptr_t)v9704;
	i8 v9706 = (i8)(intptr_t)(f224_IsNum);
	i1 v9707;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9706)(&v9707, v9705);
	i1 v9708 = (i1)+0;
	if (v9707==v9708) goto c02_06c7; else goto c02_06c8;

c02_06c7:;

	i8 v9709 = (i8)(intptr_t)c02_s0190;
	i8 v9710 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9710)(v9709);

c02_06c8:;

c02_06c4:;

	i8 v9711 = (i8)(intptr_t)(ws+3344);
	i2 v9712 = *(i2*)(intptr_t)v9711;
	i1 v9713 = v9712;
	i8 v9714 = (i8)(intptr_t)(ws+3248);
	i8 v9715 = *(i8*)(intptr_t)v9714;
	i4 v9716 = *(i4*)(intptr_t)v9715;
	i8 v9717 = (i8)(intptr_t)(f150_MidInit);
	i8 v9718;

	((void(*)(i8* /* m */, i4 /* value */, i1 /* width */))(intptr_t)v9717)(&v9718, v9716, v9713);
	i8 v9719 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9719)(v9718);

	goto c02_06c2;

c02_06c3:;

	if (v9703 != +46) goto c02_06c9;

	i8 v9720 = (i8)(intptr_t)(ws+3336);
	i8 v9721 = *(i8*)(intptr_t)v9720;
	i8 v9722 = (i8)(intptr_t)(f63_IsPtr);
	i1 v9723;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9722)(&v9723, v9721);
	i1 v9724 = (i1)+0;
	if (v9723==v9724) goto c02_06cf; else goto c02_06d1;

c02_06d1:;

	i8 v9725 = (i8)(intptr_t)(ws+3336);
	i8 v9726 = *(i8*)(intptr_t)v9725;
	i8 v9727 = *(i8*)(intptr_t)v9726;
	i8 v9728 = (i8)(intptr_t)(ws+1512);
	i8 v9729 = *(i8*)(intptr_t)v9728;
	if (v9727==v9729) goto c02_06d0; else goto c02_06cf;

c02_06cf:;

	i8 v9730 = (i8)(intptr_t)c02_s0191;
	i8 v9731 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9731)(v9730);

c02_06d0:;

c02_06ca:;

	i8 v9732 = (i8)(intptr_t)(ws+3248);
	i8 v9733 = *(i8*)(intptr_t)v9732;
	i8 v9734 = *(i8*)(intptr_t)v9733;
	i8 v9735 = (i8)(intptr_t)(f143_MidInitstring);
	i8 v9736;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9735)(&v9736, v9734);
	i8 v9737 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9737)(v9736);

	goto c02_06c2;

c02_06c9:;

	if (v9703 != +47) goto c02_06d2;

	i8 v9738 = (i8)(intptr_t)(ws+3336);
	i8 v9739 = *(i8*)(intptr_t)v9738;
	i8 v9740 = (i8)(intptr_t)(ws+3248);
	i8 v9741 = *(i8*)(intptr_t)v9740;
	i8 v9742 = v9741+(+16);
	i8 v9743 = *(i8*)(intptr_t)v9742;
	if (v9739==v9743) goto c02_06d7; else goto c02_06d6;

c02_06d6:;

	i8 v9744 = (i8)(intptr_t)c02_s0192;
	i8 v9745 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9745)(v9744);

c02_06d7:;

c02_06d3:;

	i8 v9746 = (i8)(intptr_t)(ws+3248);
	i8 v9747 = *(i8*)(intptr_t)v9746;
	i8 v9748 = *(i8*)(intptr_t)v9747;
	i8 v9749 = (i8)(intptr_t)(ws+3248);
	i8 v9750 = *(i8*)(intptr_t)v9749;
	i8 v9751 = v9750+(+8);
	i2 v9752 = *(i2*)(intptr_t)v9751;
	i8 v9753 = (i8)(intptr_t)(f111_MidInitaddress);
	i8 v9754;

	((void(*)(i8* /* m */, i2 /* off */, i8 /* sym */))(intptr_t)v9753)(&v9754, v9752, v9748);
	i8 v9755 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9755)(v9754);

	goto c02_06c2;

c02_06d2:;

	if (v9703 != +48) goto c02_06d8;

	i8 v9756 = (i8)(intptr_t)(ws+3336);
	i8 v9757 = *(i8*)(intptr_t)v9756;
	i8 v9758 = (i8)(intptr_t)(ws+3248);
	i8 v9759 = *(i8*)(intptr_t)v9758;
	i8 v9760 = v9759+(+16);
	i8 v9761 = *(i8*)(intptr_t)v9760;
	if (v9757==v9761) goto c02_06dd; else goto c02_06dc;

c02_06dc:;

	i8 v9762 = (i8)(intptr_t)c02_s0193;
	i8 v9763 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9763)(v9762);

c02_06dd:;

c02_06d9:;

	i8 v9764 = (i8)(intptr_t)(ws+3248);
	i8 v9765 = *(i8*)(intptr_t)v9764;
	i8 v9766 = *(i8*)(intptr_t)v9765;
	i8 v9767 = (i8)(intptr_t)(f141_MidInitsubref);
	i8 v9768;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9767)(&v9768, v9766);
	i8 v9769 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9769)(v9768);

	goto c02_06c2;

c02_06d8:;

	i8 v9770 = (i8)(intptr_t)(f284_parser_i_constant_error);

	((void(*)(void))(intptr_t)v9770)();

c02_06c2:;


	i8 v9771 = (i8)(intptr_t)(ws+3248);
	i8 v9772 = *(i8*)(intptr_t)v9771;
	i8 v9773 = (i8)(intptr_t)(f58_Discard);

	((void(*)(i8 /* node */))(intptr_t)v9773)(v9772);

	i8 v9774 = (i8)(intptr_t)(ws+1560);
	i2 v9775 = *(i2*)(intptr_t)v9774;
	i8 v9776 = (i8)(intptr_t)(ws+3344);
	i2 v9777 = *(i2*)(intptr_t)v9776;
	i2 v9778 = v9775+v9777;
	i8 v9779 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9779 = v9778;

	i8 v9780 = (i8)(intptr_t)(ws+1562);
	i2 v9781 = *(i2*)(intptr_t)v9780;
	i8 v9782 = (i8)(intptr_t)(ws+3344);
	i2 v9783 = *(i2*)(intptr_t)v9782;
	i2 v9784 = v9781+v9783;
	i8 v9785 = (i8)(intptr_t)(ws+1562);
	*(i2*)(intptr_t)v9785 = v9784;

endsub:;
}
	void f289_CheckEndOfInitialiser(void);
	void f33_Free(i8 /* block */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_110 workspace at ws+3328 length ws+0
void f415_reduce_110(void) {

	i8 v9786 = (i8)(intptr_t)(f289_CheckEndOfInitialiser);

	((void(*)(void))(intptr_t)v9786)();

	i8 v9787 = (i8)(intptr_t)(ws+1560);
	i2 v9788 = *(i2*)(intptr_t)v9787;
	i8 v9789 = (i8)(intptr_t)(ws+3264);
	i8 v9790 = *(i8*)(intptr_t)v9789;
	i8 v9791 = v9790+(+16);
	i2 v9792 = *(i2*)(intptr_t)v9791;
	i2 v9793 = v9788+v9792;
	i8 v9794 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9794 = v9793;

	i8 v9795 = (i8)(intptr_t)(ws+3264);
	i8 v9796 = *(i8*)(intptr_t)v9795;
	i8 v9797 = *(i8*)(intptr_t)v9796;
	i8 v9798 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9798 = v9797;

	i8 v9799 = (i8)(intptr_t)(ws+3264);
	i8 v9800 = *(i8*)(intptr_t)v9799;
	i8 v9801 = v9800+(+8);
	i8 v9802 = *(i8*)(intptr_t)v9801;
	i8 v9803 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9803 = v9802;

	i8 v9804 = (i8)(intptr_t)(ws+3264);
	i8 v9805 = *(i8*)(intptr_t)v9804;
	i8 v9806 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9806)(v9805);

	i1 v9807 = (i1)+32;
	i8 v9808 = (i8)(intptr_t)(ws+3248);
	i8 v9809 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9809)(v9808, v9807);

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
void f416_reduce_111(void) {

	i8 v9810 = (i8)(intptr_t)(f293_GetInitedMemberChecked);
	i8 v9811;
	i8 v9812;

	((void(*)(i8* /* member */, i8* /* type */))(intptr_t)v9810)(&v9811, &v9812);

	i8 v9813 = (i8)(intptr_t)(ws+3336);
	*(i8*)(intptr_t)v9813 = v9812;

	i8 v9814 = (i8)(intptr_t)(ws+3328);
	*(i8*)(intptr_t)v9814 = v9811;

	i8 v9815 = (i8)(intptr_t)(ws+3336);
	i8 v9816 = *(i8*)(intptr_t)v9815;
	i8 v9817 = v9816+(+53);
	i1 v9818 = *(i1*)(intptr_t)v9817;
	i8 v9819 = (i8)(intptr_t)(f291_AlignTo);

	((void(*)(i1 /* alignment */))(intptr_t)v9819)(v9818);

	i8 v9820 = (i8)+18;
	i8 v9821 = (i8)(intptr_t)(f64_InternalAlloc);
	i8 v9822;

	((void(*)(i8* /* block */, i8 /* length */))(intptr_t)v9821)(&v9822, v9820);
	i8 v9823 = (i8)(intptr_t)(ws+3240);
	*(i8*)(intptr_t)v9823 = v9822;

	i8 v9824 = (i8)(intptr_t)(ws+72);
	i8 v9825 = *(i8*)(intptr_t)v9824;
	i8 v9826 = (i8)(intptr_t)(ws+3240);
	i8 v9827 = *(i8*)(intptr_t)v9826;
	*(i8*)(intptr_t)v9827 = v9825;

	i8 v9828 = (i8)(intptr_t)(ws+1552);
	i8 v9829 = *(i8*)(intptr_t)v9828;
	i8 v9830 = (i8)(intptr_t)(ws+3240);
	i8 v9831 = *(i8*)(intptr_t)v9830;
	i8 v9832 = v9831+(+8);
	*(i8*)(intptr_t)v9832 = v9829;

	i8 v9833 = (i8)(intptr_t)(ws+1560);
	i2 v9834 = *(i2*)(intptr_t)v9833;
	i8 v9835 = (i8)(intptr_t)(ws+3240);
	i8 v9836 = *(i8*)(intptr_t)v9835;
	i8 v9837 = v9836+(+16);
	*(i2*)(intptr_t)v9837 = v9834;

	i8 v9838 = (i8)(intptr_t)(ws+3336);
	i8 v9839 = *(i8*)(intptr_t)v9838;
	i8 v9840 = (i8)(intptr_t)(ws+72);
	*(i8*)(intptr_t)v9840 = v9839;

	i2 v9841 = (i2)+0;
	i8 v9842 = (i8)(intptr_t)(ws+1560);
	*(i2*)(intptr_t)v9842 = v9841;

	i8 v9843 = (i8)(intptr_t)(ws+3336);
	i8 v9844 = *(i8*)(intptr_t)v9843;
	i8 v9845 = (i8)(intptr_t)(f227_IsRecord);
	i1 v9846;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9845)(&v9846, v9844);
	i1 v9847 = (i1)+0;
	if (v9846==v9847) goto c02_06e2; else goto c02_06e1;

c02_06e1:;

	i8 v9848 = (i8)(intptr_t)(ws+3336);
	i8 v9849 = *(i8*)(intptr_t)v9848;
	i8 v9850 = *(i8*)(intptr_t)v9849;
	i8 v9851 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9851 = v9850;

	goto c02_06de;

c02_06e2:;

	i8 v9852 = (i8)(intptr_t)(ws+3336);
	i8 v9853 = *(i8*)(intptr_t)v9852;
	i8 v9854 = (i8)(intptr_t)(f222_IsArray);
	i1 v9855;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9854)(&v9855, v9853);
	i1 v9856 = (i1)+0;
	if (v9855==v9856) goto c02_06e6; else goto c02_06e5;

c02_06e5:;

	i8 v9857 = (i8)+0;
	i8 v9858 = (i8)(intptr_t)(ws+1552);
	*(i8*)(intptr_t)v9858 = v9857;

	goto c02_06de;

c02_06e6:;

	i8 v9859 = (i8)(intptr_t)c02_s0194;
	i8 v9860 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9860)(v9859);

c02_06de:;

endsub:;
}
	void f102_MidAsmend(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_112 workspace at ws+3328 length ws+0
void f417_reduce_112(void) {

	i8 v9861 = (i8)(intptr_t)(f102_MidAsmend);
	i8 v9862;

	((void(*)(i8* /* m */))(intptr_t)v9861)(&v9862);
	i8 v9863 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9863)(v9862);

	i1 v9864 = (i1)+22;
	i8 v9865 = (i8)(intptr_t)(ws+3248);
	i8 v9866 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9866)(v9865, v9864);

endsub:;
}
	void f100_MidAsmstart(i8* /* m */);
	void f251_Generate(i8 /* statement */);

// reduce_113 workspace at ws+3328 length ws+0
void f418_reduce_113(void) {

	i8 v9867 = (i8)(intptr_t)(f100_MidAsmstart);
	i8 v9868;

	((void(*)(i8* /* m */))(intptr_t)v9867)(&v9868);
	i8 v9869 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9869)(v9868);

endsub:;
}
	void f104_MidAsmtext(i8* /* m */, i8 /* text */);
	void f251_Generate(i8 /* statement */);
	void f33_Free(i8 /* block */);

// reduce_114 workspace at ws+3328 length ws+0
void f419_reduce_114(void) {

	i8 v9870 = (i8)(intptr_t)(ws+3248);
	i8 v9871 = *(i8*)(intptr_t)v9870;
	i8 v9872 = (i8)(intptr_t)(f104_MidAsmtext);
	i8 v9873;

	((void(*)(i8* /* m */, i8 /* text */))(intptr_t)v9872)(&v9873, v9871);
	i8 v9874 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9874)(v9873);

	i8 v9875 = (i8)(intptr_t)(ws+3248);
	i8 v9876 = *(i8*)(intptr_t)v9875;
	i8 v9877 = (i8)(intptr_t)(f33_Free);

	((void(*)(i8 /* block */))(intptr_t)v9877)(v9876);

endsub:;
}
	void f157_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f251_Generate(i8 /* statement */);

// reduce_115 workspace at ws+3328 length ws+0
void f420_reduce_115(void) {

	i8 v9878 = (i8)(intptr_t)(ws+3248);
	i4 v9879 = *(i4*)(intptr_t)v9878;
	i8 v9880 = (i8)(intptr_t)(f157_MidAsmvalue);
	i8 v9881;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9880)(&v9881, v9879);
	i8 v9882 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9882)(v9881);

endsub:;
}
const i1 c02_s0195[] = { 0x79,0x6f,0x75,0x20,0x63,0x61,0x6e,0x20,0x6f,0x6e,0x6c,0x79,0x20,0x65,0x6d,0x69,0x74,0x20,0x72,0x65,0x66,0x65,0x72,0x65,0x6e,0x63,0x65,0x73,0x20,0x74,0x6f,0x20,0x76,0x61,0x72,0x69,0x61,0x62,0x6c,0x65,0x73,0x2c,0x20,0x73,0x75,0x62,0x72,0x6f,0x75,0x74,0x69,0x6e,0x65,0x73,0x2c,0x20,0x6f,0x72,0x20,0x63,0x6f,0x6e,0x73,0x74,0x61,0x6e,0x74,0x73,0 };
	void f71_SimpleError(i8 /* message */);

// bad_reference workspace at ws+3328 length ws+0
void f422_bad_reference(void) {

	i8 v9883 = (i8)(intptr_t)c02_s0195;
	i8 v9884 = (i8)(intptr_t)(f71_SimpleError);

	((void(*)(i8 /* message */))(intptr_t)v9884)(v9883);

endsub:;
}
	void f223_IsSubroutine(i1* /* result */, i8 /* type */);
	void f197_EmitterReferenceSubroutine(i8 /* used */, i8 /* user */);
	void f99_MidAsmsubref(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f422_bad_reference(void);
	void f153_MidAsmsymbol(i8* /* m */, i8 /* sym */);
	void f251_Generate(i8 /* statement */);
	void f157_MidAsmvalue(i8* /* m */, i4 /* value */);
	void f251_Generate(i8 /* statement */);
	void f422_bad_reference(void);

// reduce_116 workspace at ws+3328 length ws+0
void f421_reduce_116(void) {


	i8 v9885 = (i8)(intptr_t)(ws+3248);
	i8 v9886 = *(i8*)(intptr_t)v9885;
	i8 v9887 = v9886+(+32);
	i1 v9888 = *(i1*)(intptr_t)v9887;

	if (v9888 != +30) goto c02_06e8;

	i8 v9889 = (i8)(intptr_t)(ws+3248);
	i8 v9890 = *(i8*)(intptr_t)v9889;
	i8 v9891 = *(i8*)(intptr_t)v9890;
	i8 v9892 = (i8)(intptr_t)(f223_IsSubroutine);
	i1 v9893;

	((void(*)(i1* /* result */, i8 /* type */))(intptr_t)v9892)(&v9893, v9891);
	i1 v9894 = (i1)+0;
	if (v9893==v9894) goto c02_06ed; else goto c02_06ec;

c02_06ec:;

	i8 v9895 = (i8)(intptr_t)(ws+40);
	i8 v9896 = *(i8*)(intptr_t)v9895;
	i8 v9897 = (i8)(intptr_t)(ws+3248);
	i8 v9898 = *(i8*)(intptr_t)v9897;
	i8 v9899 = *(i8*)(intptr_t)v9898;
	i8 v9900 = *(i8*)(intptr_t)v9899;
	i8 v9901 = (i8)(intptr_t)(f197_EmitterReferenceSubroutine);

	((void(*)(i8 /* used */, i8 /* user */))(intptr_t)v9901)(v9900, v9896);

	i8 v9902 = (i8)(intptr_t)(ws+3248);
	i8 v9903 = *(i8*)(intptr_t)v9902;
	i8 v9904 = *(i8*)(intptr_t)v9903;
	i8 v9905 = *(i8*)(intptr_t)v9904;
	i8 v9906 = (i8)(intptr_t)(f99_MidAsmsubref);
	i8 v9907;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v9906)(&v9907, v9905);
	i8 v9908 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9908)(v9907);

	goto c02_06e9;

c02_06ed:;

	i8 v9909 = (i8)(intptr_t)(f422_bad_reference);

	((void(*)(void))(intptr_t)v9909)();

c02_06e9:;

	goto c02_06e7;

c02_06e8:;

	if (v9888 != +28) goto c02_06ee;

	i8 v9910 = (i8)(intptr_t)(ws+3248);
	i8 v9911 = *(i8*)(intptr_t)v9910;
	i8 v9912 = (i8)(intptr_t)(f153_MidAsmsymbol);
	i8 v9913;

	((void(*)(i8* /* m */, i8 /* sym */))(intptr_t)v9912)(&v9913, v9911);
	i8 v9914 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9914)(v9913);

	goto c02_06e7;

c02_06ee:;

	if (v9888 != +7) goto c02_06ef;

	i8 v9915 = (i8)(intptr_t)(ws+3248);
	i8 v9916 = *(i8*)(intptr_t)v9915;
	i4 v9917 = *(i4*)(intptr_t)v9916;
	i8 v9918 = (i8)(intptr_t)(f157_MidAsmvalue);
	i8 v9919;

	((void(*)(i8* /* m */, i4 /* value */))(intptr_t)v9918)(&v9919, v9917);
	i8 v9920 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v9920)(v9919);

	goto c02_06e7;

c02_06ef:;

	i8 v9921 = (i8)(intptr_t)(f422_bad_reference);

	((void(*)(void))(intptr_t)v9921)();

c02_06e7:;


endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_122 workspace at ws+3328 length ws+0
void f423_reduce_122(void) {

	i1 v9922 = (i1)+26;
	i8 v9923 = (i8)(intptr_t)(ws+3264);
	i8 v9924 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9924)(v9923, v9922);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_126 workspace at ws+3328 length ws+0
void f424_reduce_126(void) {

	i1 v9925 = (i1)+22;
	i8 v9926 = (i8)(intptr_t)(ws+3248);
	i8 v9927 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9927)(v9926, v9925);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_127 workspace at ws+3328 length ws+0
void f425_reduce_127(void) {

	i1 v9928 = (i1)+25;
	i8 v9929 = (i8)(intptr_t)(ws+3280);
	i8 v9930 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9930)(v9929, v9928);

	i1 v9931 = (i1)+22;
	i8 v9932 = (i8)(intptr_t)(ws+3248);
	i8 v9933 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9933)(v9932, v9931);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_128 workspace at ws+3328 length ws+0
void f426_reduce_128(void) {

	i1 v9934 = (i1)+22;
	i8 v9935 = (i8)(intptr_t)(ws+3248);
	i8 v9936 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9936)(v9935, v9934);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_129 workspace at ws+3328 length ws+0
void f427_reduce_129(void) {

	i1 v9937 = (i1)+22;
	i8 v9938 = (i8)(intptr_t)(ws+3248);
	i8 v9939 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9939)(v9938, v9937);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_135 workspace at ws+3328 length ws+0
void f428_reduce_135(void) {

	i1 v9940 = (i1)+45;
	i8 v9941 = (i8)(intptr_t)(ws+3256);
	i8 v9942 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9942)(v9941, v9940);

endsub:;
}
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);

// reduce_138 workspace at ws+3328 length ws+0
void f429_reduce_138(void) {

	i1 v9943 = (i1)+45;
	i8 v9944 = (i8)(intptr_t)(ws+3256);
	i8 v9945 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v9945)(v9944, v9943);

endsub:;
}

// reduce_default workspace at ws+3328 length ws+0
void f430_reduce_default(void) {

endsub:;
}
	void f303_reduce_0(void);
	void f304_reduce_1(void);
	void f305_reduce_2(void);
	void f306_reduce_3(void);
	void f307_reduce_4(void);
	void f308_reduce_5(void);
	void f309_reduce_6(void);
	void f310_reduce_7(void);
	void f311_reduce_8(void);
	void f312_reduce_9(void);
	void f313_reduce_10(void);
	void f314_reduce_11(void);
	void f315_reduce_12(void);
	void f316_reduce_13(void);
	void f317_reduce_14(void);
	void f318_reduce_15(void);
	void f319_reduce_16(void);
	void f320_reduce_17(void);
	void f321_reduce_18(void);
	void f322_reduce_19(void);
	void f323_reduce_20(void);
	void f324_reduce_21(void);
	void f325_reduce_22(void);
	void f326_reduce_23(void);
	void f327_reduce_24(void);
	void f328_reduce_25(void);
	void f329_reduce_26(void);
	void f330_reduce_27(void);
	void f331_reduce_28(void);
	void f332_reduce_29(void);
	void f333_reduce_30(void);
	void f334_reduce_31(void);
	void f335_reduce_32(void);
	void f336_reduce_33(void);
	void f337_reduce_34(void);
	void f338_reduce_35(void);
	void f339_reduce_36(void);
	void f340_reduce_37(void);
	void f341_reduce_38(void);
	void f342_reduce_39(void);
	void f343_reduce_40(void);
	void f344_reduce_41(void);
	void f345_reduce_42(void);
	void f346_reduce_43(void);
	void f347_reduce_44(void);
	void f348_reduce_45(void);
	void f349_reduce_46(void);
	void f350_reduce_47(void);
	void f351_reduce_48(void);
	void f352_reduce_49(void);
	void f353_reduce_50(void);
	void f354_reduce_51(void);
	void f355_reduce_52(void);
	void f356_reduce_53(void);
	void f358_reduce_54(void);
	void f359_reduce_55(void);
	void f360_reduce_56(void);
	void f361_reduce_57(void);
	void f362_reduce_58(void);
	void f363_reduce_59(void);
	void f364_reduce_60(void);
	void f365_reduce_61(void);
	void f366_reduce_62(void);
	void f367_reduce_63(void);
	void f368_reduce_64(void);
	void f369_reduce_65(void);
	void f370_reduce_66(void);
	void f371_reduce_67(void);
	void f372_reduce_68(void);
	void f373_reduce_69(void);
	void f374_reduce_70(void);
	void f375_reduce_71(void);
	void f376_reduce_72(void);
	void f377_reduce_73(void);
	void f378_reduce_74(void);
	void f379_reduce_75(void);
	void f380_reduce_76(void);
	void f381_reduce_77(void);
	void f382_reduce_78(void);
	void f383_reduce_79(void);
	void f384_reduce_80(void);
	void f385_reduce_81(void);
	void f386_reduce_82(void);
	void f387_reduce_83(void);
	void f388_reduce_84(void);
	void f389_reduce_85(void);
	void f390_reduce_86(void);
	void f392_reduce_87(void);
	void f393_reduce_88(void);
	void f394_reduce_89(void);
	void f395_reduce_90(void);
	void f396_reduce_91(void);
	void f397_reduce_92(void);
	void f398_reduce_93(void);
	void f399_reduce_94(void);
	void f400_reduce_95(void);
	void f401_reduce_96(void);
	void f402_reduce_97(void);
	void f403_reduce_98(void);
	void f404_reduce_99(void);
	void f405_reduce_100(void);
	void f406_reduce_101(void);
	void f407_reduce_102(void);
	void f408_reduce_103(void);
	void f409_reduce_104(void);
	void f410_reduce_105(void);
	void f411_reduce_106(void);
	void f412_reduce_107(void);
	void f413_reduce_108(void);
	void f414_reduce_109(void);
	void f415_reduce_110(void);
	void f416_reduce_111(void);
	void f417_reduce_112(void);
	void f418_reduce_113(void);
	void f419_reduce_114(void);
	void f420_reduce_115(void);
	void f421_reduce_116(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f423_reduce_122(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f424_reduce_126(void);
	void f425_reduce_127(void);
	void f426_reduce_128(void);
	void f427_reduce_129(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f428_reduce_135(void);
	void f430_reduce_default(void);
	void f430_reduce_default(void);
	void f429_reduce_138(void);
static data f301_yy_reduce_s06f0[] = {

	{ .ptr = (void*)f303_reduce_0 },

	{ .ptr = (void*)f304_reduce_1 },

	{ .ptr = (void*)f305_reduce_2 },

	{ .ptr = (void*)f306_reduce_3 },

	{ .ptr = (void*)f307_reduce_4 },

	{ .ptr = (void*)f308_reduce_5 },

	{ .ptr = (void*)f309_reduce_6 },

	{ .ptr = (void*)f310_reduce_7 },

	{ .ptr = (void*)f311_reduce_8 },

	{ .ptr = (void*)f312_reduce_9 },

	{ .ptr = (void*)f313_reduce_10 },

	{ .ptr = (void*)f314_reduce_11 },

	{ .ptr = (void*)f315_reduce_12 },

	{ .ptr = (void*)f316_reduce_13 },

	{ .ptr = (void*)f317_reduce_14 },

	{ .ptr = (void*)f318_reduce_15 },

	{ .ptr = (void*)f319_reduce_16 },

	{ .ptr = (void*)f320_reduce_17 },

	{ .ptr = (void*)f321_reduce_18 },

	{ .ptr = (void*)f322_reduce_19 },

	{ .ptr = (void*)f323_reduce_20 },

	{ .ptr = (void*)f324_reduce_21 },

	{ .ptr = (void*)f325_reduce_22 },

	{ .ptr = (void*)f326_reduce_23 },

	{ .ptr = (void*)f327_reduce_24 },

	{ .ptr = (void*)f328_reduce_25 },

	{ .ptr = (void*)f329_reduce_26 },

	{ .ptr = (void*)f330_reduce_27 },

	{ .ptr = (void*)f331_reduce_28 },

	{ .ptr = (void*)f332_reduce_29 },

	{ .ptr = (void*)f333_reduce_30 },

	{ .ptr = (void*)f334_reduce_31 },

	{ .ptr = (void*)f335_reduce_32 },

	{ .ptr = (void*)f336_reduce_33 },

	{ .ptr = (void*)f337_reduce_34 },

	{ .ptr = (void*)f338_reduce_35 },

	{ .ptr = (void*)f339_reduce_36 },

	{ .ptr = (void*)f340_reduce_37 },

	{ .ptr = (void*)f341_reduce_38 },

	{ .ptr = (void*)f342_reduce_39 },

	{ .ptr = (void*)f343_reduce_40 },

	{ .ptr = (void*)f344_reduce_41 },

	{ .ptr = (void*)f345_reduce_42 },

	{ .ptr = (void*)f346_reduce_43 },

	{ .ptr = (void*)f347_reduce_44 },

	{ .ptr = (void*)f348_reduce_45 },

	{ .ptr = (void*)f349_reduce_46 },

	{ .ptr = (void*)f350_reduce_47 },

	{ .ptr = (void*)f351_reduce_48 },

	{ .ptr = (void*)f352_reduce_49 },

	{ .ptr = (void*)f353_reduce_50 },

	{ .ptr = (void*)f354_reduce_51 },

	{ .ptr = (void*)f355_reduce_52 },

	{ .ptr = (void*)f356_reduce_53 },

	{ .ptr = (void*)f358_reduce_54 },

	{ .ptr = (void*)f359_reduce_55 },

	{ .ptr = (void*)f360_reduce_56 },

	{ .ptr = (void*)f361_reduce_57 },

	{ .ptr = (void*)f362_reduce_58 },

	{ .ptr = (void*)f363_reduce_59 },

	{ .ptr = (void*)f364_reduce_60 },

	{ .ptr = (void*)f365_reduce_61 },

	{ .ptr = (void*)f366_reduce_62 },

	{ .ptr = (void*)f367_reduce_63 },

	{ .ptr = (void*)f368_reduce_64 },

	{ .ptr = (void*)f369_reduce_65 },

	{ .ptr = (void*)f370_reduce_66 },

	{ .ptr = (void*)f371_reduce_67 },

	{ .ptr = (void*)f372_reduce_68 },

	{ .ptr = (void*)f373_reduce_69 },

	{ .ptr = (void*)f374_reduce_70 },

	{ .ptr = (void*)f375_reduce_71 },

	{ .ptr = (void*)f376_reduce_72 },

	{ .ptr = (void*)f377_reduce_73 },

	{ .ptr = (void*)f378_reduce_74 },

	{ .ptr = (void*)f379_reduce_75 },

	{ .ptr = (void*)f380_reduce_76 },

	{ .ptr = (void*)f381_reduce_77 },

	{ .ptr = (void*)f382_reduce_78 },

	{ .ptr = (void*)f383_reduce_79 },

	{ .ptr = (void*)f384_reduce_80 },

	{ .ptr = (void*)f385_reduce_81 },

	{ .ptr = (void*)f386_reduce_82 },

	{ .ptr = (void*)f387_reduce_83 },

	{ .ptr = (void*)f388_reduce_84 },

	{ .ptr = (void*)f389_reduce_85 },

	{ .ptr = (void*)f390_reduce_86 },

	{ .ptr = (void*)f392_reduce_87 },

	{ .ptr = (void*)f393_reduce_88 },

	{ .ptr = (void*)f394_reduce_89 },

	{ .ptr = (void*)f395_reduce_90 },

	{ .ptr = (void*)f396_reduce_91 },

	{ .ptr = (void*)f397_reduce_92 },

	{ .ptr = (void*)f398_reduce_93 },

	{ .ptr = (void*)f399_reduce_94 },

	{ .ptr = (void*)f400_reduce_95 },

	{ .ptr = (void*)f401_reduce_96 },

	{ .ptr = (void*)f402_reduce_97 },

	{ .ptr = (void*)f403_reduce_98 },

	{ .ptr = (void*)f404_reduce_99 },

	{ .ptr = (void*)f405_reduce_100 },

	{ .ptr = (void*)f406_reduce_101 },

	{ .ptr = (void*)f407_reduce_102 },

	{ .ptr = (void*)f408_reduce_103 },

	{ .ptr = (void*)f409_reduce_104 },

	{ .ptr = (void*)f410_reduce_105 },

	{ .ptr = (void*)f411_reduce_106 },

	{ .ptr = (void*)f412_reduce_107 },

	{ .ptr = (void*)f413_reduce_108 },

	{ .ptr = (void*)f414_reduce_109 },

	{ .ptr = (void*)f415_reduce_110 },

	{ .ptr = (void*)f416_reduce_111 },

	{ .ptr = (void*)f417_reduce_112 },

	{ .ptr = (void*)f418_reduce_113 },

	{ .ptr = (void*)f419_reduce_114 },

	{ .ptr = (void*)f420_reduce_115 },

	{ .ptr = (void*)f421_reduce_116 },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f423_reduce_122 },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f424_reduce_126 },

	{ .ptr = (void*)f425_reduce_127 },

	{ .ptr = (void*)f426_reduce_128 },

	{ .ptr = (void*)f427_reduce_129 },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f428_reduce_135 },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f430_reduce_default },

	{ .ptr = (void*)f429_reduce_138 },

};
	void f300_CopyMinor(i8 /* dest */, i8 /* src */);

// yy_reduce workspace at ws+3232 length ws+94
void f301_yy_reduce(i2* p6975 /* yyact */, i1 p6976 /* yylookahead */, i2 p6977 /* yyruleno */) {
	*(i2*)(intptr_t)(ws+3232) = p6977; /*yyruleno */
	*(i1*)(intptr_t)(ws+3234) = p6976; /*yylookahead */

	i8 v6978 = (i8)(intptr_t)((i1*)f3___main_s0594);
	i8 v6979 = (i8)(intptr_t)(ws+3232);
	i2 v6980 = *(i2*)(intptr_t)v6979;
	i1 v6981 = v6980;
	i8 v6982 = v6981;
	i8 v6983 = v6978+v6982;
	i1 v6984 = *(i1*)(intptr_t)v6983;
	i8 v6985 = (i8)(intptr_t)(ws+3238);
	*(i1*)(intptr_t)v6985 = v6984;

	i8 v6986 = (i8)(intptr_t)(ws+1568);
	i8 v6987 = *(i8*)(intptr_t)v6986;
	i8 v6988 = (i8)(intptr_t)(ws+3176);
	if (v6987==v6988) goto c02_0598; else goto c02_0599;

c02_0598:;

	i8 v6989 = (i8)(intptr_t)(f298_yy_stack_overflow);

	((void(*)(void))(intptr_t)v6989)();

c02_0599:;

c02_0595:;

	i8 v6990 = (i8)(intptr_t)(ws+3248);
	i8 v6991 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v6991 = v6990;

	i8 v6992 = (i8)(intptr_t)(ws+3238);
	i1 v6993 = *(i1*)(intptr_t)v6992;
	i8 v6994 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v6994 = v6993;

c02_059c:;

	i8 v6995 = (i8)(intptr_t)(ws+3320);
	i1 v6996 = *(i1*)(intptr_t)v6995;
	i1 v6997 = (i1)+0;
	if (v6996==v6997) goto c02_059f; else goto c02_059e;

c02_059e:;

	i8 v6998 = (i8)(intptr_t)(ws+1568);
	i8 v6999 = *(i8*)(intptr_t)v6998;
	i8 v7000 = v6999+(+8);
	i8 v7001 = (i8)(intptr_t)(ws+3312);
	i8 v7002 = *(i8*)(intptr_t)v7001;
	i8 v7003 = (i8)(intptr_t)(f300_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v7003)(v7002, v7000);

	i8 v7004 = (i8)(intptr_t)(ws+1568);
	i8 v7005 = *(i8*)(intptr_t)v7004;
	i8 v7006 = v7005+(-16);
	i8 v7007 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v7007 = v7006;

	i8 v7008 = (i8)(intptr_t)(ws+3312);
	i8 v7009 = *(i8*)(intptr_t)v7008;
	i8 v7010 = v7009+(+8);
	i8 v7011 = (i8)(intptr_t)(ws+3312);
	*(i8*)(intptr_t)v7011 = v7010;

	i8 v7012 = (i8)(intptr_t)(ws+3320);
	i1 v7013 = *(i1*)(intptr_t)v7012;
	i1 v7014 = v7013+(-1);
	i8 v7015 = (i8)(intptr_t)(ws+3320);
	*(i1*)(intptr_t)v7015 = v7014;

	goto c02_059c;

c02_059f:;
































































































































	i8 v9946 = (i8)(intptr_t)((i1*)f301_yy_reduce_s06f0);
	i8 v9947 = (i8)(intptr_t)(ws+3232);
	i2 v9948 = *(i2*)(intptr_t)v9947;
	i1 v9949 = v9948;
	i8 v9950 = v9949;
	i1 v9951 = (i1)+3;
	i8 v9952 = ((i8)v9950)<<v9951;
	i8 v9953 = v9946+v9952;
	i8 v9954 = *(i8*)(intptr_t)v9953;

	((void(*)(void))(intptr_t)v9954)();

	i8 v9955 = (i8)(intptr_t)(ws+3240);
	i8 v9956 = (i8)(intptr_t)(ws+1568);
	i8 v9957 = *(i8*)(intptr_t)v9956;
	i8 v9958 = v9957+(+24);
	i8 v9959 = (i8)(intptr_t)(f300_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v9959)(v9958, v9955);

	i8 v9960 = (i8)(intptr_t)((i1*)f3___main_s0593);
	i8 v9961 = (i8)(intptr_t)(ws+3232);
	i2 v9962 = *(i2*)(intptr_t)v9961;
	i1 v9963 = v9962;
	i8 v9964 = v9963;
	i8 v9965 = v9960+v9964;
	i1 v9966 = *(i1*)(intptr_t)v9965;
	i8 v9967 = (i8)(intptr_t)(ws+3321);
	*(i1*)(intptr_t)v9967 = v9966;

	i8 v9968 = (i8)(intptr_t)(ws+1568);
	i8 v9969 = *(i8*)(intptr_t)v9968;
	i2 v9970 = *(i2*)(intptr_t)v9969;
	i8 v9971 = (i8)(intptr_t)(ws+3322);
	*(i2*)(intptr_t)v9971 = v9970;

	i8 v9972 = (i8)(intptr_t)((i1*)f3___main_s057b);
	i8 v9973 = (i8)(intptr_t)(ws+3322);
	i2 v9974 = *(i2*)(intptr_t)v9973;
	i1 v9975 = v9974;
	i8 v9976 = v9975;
	i1 v9977 = (i1)+1;
	i8 v9978 = ((i8)v9976)<<v9977;
	i8 v9979 = v9972+v9978;
	i2 v9980 = *(i2*)(intptr_t)v9979;
	i8 v9981 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v9981 = v9980;

	i2 v9982 = (i2)+112;
	i8 v9983 = (i8)(intptr_t)(ws+3322);
	i2 v9984 = *(i2*)(intptr_t)v9983;
	if (v9982<v9984) goto c02_06f5; else goto c02_06f4;

c02_06f4:;

	i8 v9985 = (i8)(intptr_t)((i1*)f3___main_s057a);
	i8 v9986 = (i8)(intptr_t)(ws+3322);
	i2 v9987 = *(i2*)(intptr_t)v9986;
	i1 v9988 = v9987;
	i8 v9989 = v9988;
	i1 v9990 = (i1)+1;
	i8 v9991 = ((i8)v9989)<<v9990;
	i8 v9992 = v9985+v9991;
	i2 v9993 = *(i2*)(intptr_t)v9992;
	i8 v9994 = (i8)(intptr_t)(ws+3321);
	i1 v9995 = *(i1*)(intptr_t)v9994;
	i2 v9996 = v9995;
	i2 v9997 = v9993+v9996;
	i8 v9998 = (i8)(intptr_t)(ws+3324);
	*(i2*)(intptr_t)v9998 = v9997;

	i8 v9999 = (i8)(intptr_t)(ws+3324);
	i2 v10000 = *(i2*)(intptr_t)v9999;
	i2 v10001 = (i2)+0;
	if (v10000<v10001) goto c02_06fe; else goto c02_0700;

c02_0700:;

	i8 v10002 = (i8)(intptr_t)(ws+3324);
	i2 v10003 = *(i2*)(intptr_t)v10002;
	i2 v10004 = (i2)+1271;
	if (v10003<v10004) goto c02_06ff; else goto c02_06fe;

c02_06ff:;

	i8 v10005 = (i8)(intptr_t)((i1*)f3___main_s0578);
	i8 v10006 = (i8)(intptr_t)(ws+3324);
	i2 v10007 = *(i2*)(intptr_t)v10006;
	i8 v10008 = v10007;
	i8 v10009 = v10005+v10008;
	i1 v10010 = *(i1*)(intptr_t)v10009;
	i8 v10011 = (i8)(intptr_t)(ws+3321);
	i1 v10012 = *(i1*)(intptr_t)v10011;
	if (v10010==v10012) goto c02_06fd; else goto c02_06fe;

c02_06fd:;

	i8 v10013 = (i8)(intptr_t)((i1*)f3___main_s0577);
	i8 v10014 = (i8)(intptr_t)(ws+3324);
	i2 v10015 = *(i2*)(intptr_t)v10014;
	i8 v10016 = v10015;
	i1 v10017 = (i1)+1;
	i8 v10018 = ((i8)v10016)<<v10017;
	i8 v10019 = v10013+v10018;
	i2 v10020 = *(i2*)(intptr_t)v10019;
	i8 v10021 = (i8)(intptr_t)(ws+3236);
	*(i2*)(intptr_t)v10021 = v10020;

c02_06fe:;

c02_06f6:;

c02_06f5:;

c02_06f1:;

	i8 v10022 = (i8)(intptr_t)(ws+1568);
	i8 v10023 = *(i8*)(intptr_t)v10022;
	i8 v10024 = v10023+(+16);
	i8 v10025 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10025 = v10024;

	i8 v10026 = (i8)(intptr_t)(ws+3236);
	i2 v10027 = *(i2*)(intptr_t)v10026;
	i8 v10028 = (i8)(intptr_t)(ws+1568);
	i8 v10029 = *(i8*)(intptr_t)v10028;
	*(i2*)(intptr_t)v10029 = v10027;

	i8 v10030 = (i8)(intptr_t)(ws+3321);
	i1 v10031 = *(i1*)(intptr_t)v10030;
	i8 v10032 = (i8)(intptr_t)(ws+1568);
	i8 v10033 = *(i8*)(intptr_t)v10032;
	i8 v10034 = v10033+(+2);
	*(i1*)(intptr_t)v10034 = v10031;

endsub:;
	*p6975 = *(i2*)(intptr_t)(ws+3236);
}
	void f297_yy_pop_all_parser_stack(void);

// yy_parse_failed workspace at ws+3232 length ws+0
void f431_yy_parse_failed(void) {

	i8 v10035 = (i8)(intptr_t)(f297_yy_pop_all_parser_stack);

	((void(*)(void))(intptr_t)v10035)();

endsub:;
}
	void f69_StartError(void);
const i1 c02_s0196[] = { 0x75,0x6e,0x65,0x78,0x70,0x65,0x63,0x74,0x65,0x64,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f11_print(i8 /* ptr */);
	void f70_EndError(void);

// yy_syntax_error workspace at ws+3232 length ws+16
void f432_yy_syntax_error(i8 p10036 /* yyminor */, i1 p10037 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3232) = p10037; /*yymajor */
	*(i8*)(intptr_t)(ws+3240) = p10036; /*yyminor */

	i8 v10038 = (i8)(intptr_t)(f69_StartError);

	((void(*)(void))(intptr_t)v10038)();

	i8 v10039 = (i8)(intptr_t)c02_s0196;
	i8 v10040 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10040)(v10039);

	i8 v10041 = (i8)(intptr_t)((i1*)f3___main_s057c);
	i8 v10042 = (i8)(intptr_t)(ws+3232);
	i1 v10043 = *(i1*)(intptr_t)v10042;
	i8 v10044 = v10043;
	i1 v10045 = (i1)+3;
	i8 v10046 = ((i8)v10044)<<v10045;
	i8 v10047 = v10041+v10046;
	i8 v10048 = *(i8*)(intptr_t)v10047;
	i8 v10049 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10049)(v10048);

	i8 v10050 = (i8)(intptr_t)(f70_EndError);

	((void(*)(void))(intptr_t)v10050)();

endsub:;
}

// yy_accept workspace at ws+3232 length ws+0
void f433_yy_accept(void) {

endsub:;
}

// ParserInit workspace at ws+3208 length ws+0
void f434_ParserInit(void) {

	i1 v10051 = (i1)-1;
	i8 v10052 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10052 = v10051;

	i8 v10053 = (i8)(intptr_t)(ws+1576);
	i8 v10054 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10054 = v10053;

	i2 v10055 = (i2)+0;
	i8 v10056 = (i8)(intptr_t)(ws+1576);
	*(i2*)(intptr_t)v10056 = v10055;

	i1 v10057 = (i1)+0;
	i8 v10058 = (i8)(intptr_t)(ws+1578);
	*(i1*)(intptr_t)v10058 = v10057;

endsub:;
}
	void f296_yy_pop_parser_stack(void);

// ParserDeinit workspace at ws+3208 length ws+0
void f435_ParserDeinit(void) {

c02_0703:;

	i8 v10059 = (i8)(intptr_t)(ws+1568);
	i8 v10060 = *(i8*)(intptr_t)v10059;
	i8 v10061 = (i8)(intptr_t)(ws+1576);
	if (v10060==v10061) goto c02_0706; else goto c02_0705;

c02_0705:;

	i8 v10062 = (i8)(intptr_t)(f296_yy_pop_parser_stack);

	((void(*)(void))(intptr_t)v10062)();

	goto c02_0703;

c02_0706:;

endsub:;
}
	void f301_yy_reduce(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */);
	void f298_yy_stack_overflow(void);
	void f300_CopyMinor(i8 /* dest */, i8 /* src */);
	void f433_yy_accept(void);
	void f432_yy_syntax_error(i8 /* yyminor */, i1 /* yymajor */);
	void f294_yy_destructor(i8 /* yypminor */, i1 /* yymajor */);
	void f431_yy_parse_failed(void);

// ParserFeedToken workspace at ws+3208 length ws+20
void f436_ParserFeedToken(i8 p10063 /* yyminor */, i1 p10064 /* yymajor */) {
	*(i1*)(intptr_t)(ws+3208) = p10064; /*yymajor */
	*(i8*)(intptr_t)(ws+3216) = p10063; /*yyminor */

	i8 v10065 = (i8)(intptr_t)(ws+1568);
	i8 v10066 = *(i8*)(intptr_t)v10065;
	i2 v10067 = *(i2*)(intptr_t)v10066;
	i8 v10068 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10068 = v10067;

c02_0707:;

	i2 v10069 = (i2)+220;
	i8 v10070 = (i8)(intptr_t)(ws+3224);
	i2 v10071 = *(i2*)(intptr_t)v10070;
	if (v10069<v10071) goto c02_070d; else goto c02_070c;

c02_070c:;

	i8 v10072 = (i8)(intptr_t)((i1*)f3___main_s0579);
	i8 v10073 = (i8)(intptr_t)(ws+3224);
	i2 v10074 = *(i2*)(intptr_t)v10073;
	i1 v10075 = v10074;
	i8 v10076 = v10075;
	i1 v10077 = (i1)+1;
	i8 v10078 = ((i8)v10076)<<v10077;
	i8 v10079 = v10072+v10078;
	i2 v10080 = *(i2*)(intptr_t)v10079;
	i8 v10081 = (i8)(intptr_t)(ws+3208);
	i1 v10082 = *(i1*)(intptr_t)v10081;
	i2 v10083 = v10082;
	i2 v10084 = v10080+v10083;
	i8 v10085 = (i8)(intptr_t)(ws+3226);
	*(i2*)(intptr_t)v10085 = v10084;

	i8 v10086 = (i8)(intptr_t)((i1*)f3___main_s0578);
	i8 v10087 = (i8)(intptr_t)(ws+3226);
	i2 v10088 = *(i2*)(intptr_t)v10087;
	i8 v10089 = v10088;
	i8 v10090 = v10086+v10089;
	i1 v10091 = *(i1*)(intptr_t)v10090;
	i8 v10092 = (i8)(intptr_t)(ws+3208);
	i1 v10093 = *(i1*)(intptr_t)v10092;
	if (v10091==v10093) goto c02_0712; else goto c02_0711;

c02_0711:;

	i8 v10094 = (i8)(intptr_t)((i1*)f3___main_s057b);
	i8 v10095 = (i8)(intptr_t)(ws+3224);
	i2 v10096 = *(i2*)(intptr_t)v10095;
	i1 v10097 = v10096;
	i8 v10098 = v10097;
	i1 v10099 = (i1)+1;
	i8 v10100 = ((i8)v10098)<<v10099;
	i8 v10101 = v10094+v10100;
	i2 v10102 = *(i2*)(intptr_t)v10101;
	i8 v10103 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10103 = v10102;

	goto c02_070e;

c02_0712:;

	i8 v10104 = (i8)(intptr_t)((i1*)f3___main_s0577);
	i8 v10105 = (i8)(intptr_t)(ws+3226);
	i2 v10106 = *(i2*)(intptr_t)v10105;
	i8 v10107 = v10106;
	i1 v10108 = (i1)+1;
	i8 v10109 = ((i8)v10107)<<v10108;
	i8 v10110 = v10104+v10109;
	i2 v10111 = *(i2*)(intptr_t)v10110;
	i8 v10112 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10112 = v10111;

c02_070e:;

c02_070d:;

c02_0709:;

	i8 v10113 = (i8)(intptr_t)(ws+3224);
	i2 v10114 = *(i2*)(intptr_t)v10113;
	i2 v10115 = (i2)+452;
	if (v10114<v10115) goto c02_0717; else goto c02_0716;

c02_0716:;

	i8 v10116 = (i8)(intptr_t)(ws+3224);
	i2 v10117 = *(i2*)(intptr_t)v10116;
	i2 v10118 = v10117+(-452);
	i8 v10119 = (i8)(intptr_t)(ws+3208);
	i1 v10120 = *(i1*)(intptr_t)v10119;
	i8 v10121 = (i8)(intptr_t)(f301_yy_reduce);
	i2 v10122;

	((void(*)(i2* /* yyact */, i1 /* yylookahead */, i2 /* yyruleno */))(intptr_t)v10121)(&v10122, v10120, v10118);
	i8 v10123 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10123 = v10122;

	goto c02_0713;

c02_0717:;

	i2 v10124 = (i2)+448;
	i8 v10125 = (i8)(intptr_t)(ws+3224);
	i2 v10126 = *(i2*)(intptr_t)v10125;
	if (v10124<v10126) goto c02_071b; else goto c02_071a;

c02_071a:;

	i8 v10127 = (i8)(intptr_t)(ws+1568);
	i8 v10128 = *(i8*)(intptr_t)v10127;
	i8 v10129 = (i8)(intptr_t)(ws+3176);
	if (v10128==v10129) goto c02_071f; else goto c02_0720;

c02_071f:;

	i8 v10130 = (i8)(intptr_t)(f298_yy_stack_overflow);

	((void(*)(void))(intptr_t)v10130)();

	goto endsub;

c02_0720:;

c02_071c:;

	i8 v10131 = (i8)(intptr_t)(ws+1568);
	i8 v10132 = *(i8*)(intptr_t)v10131;
	i8 v10133 = v10132+(+16);
	i8 v10134 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10134 = v10133;

	i2 v10135 = (i2)+220;
	i8 v10136 = (i8)(intptr_t)(ws+3224);
	i2 v10137 = *(i2*)(intptr_t)v10136;
	if (v10135<v10137) goto c02_0724; else goto c02_0725;

c02_0724:;

	i8 v10138 = (i8)(intptr_t)(ws+3224);
	i2 v10139 = *(i2*)(intptr_t)v10138;
	i2 v10140 = v10139+(+142);
	i8 v10141 = (i8)(intptr_t)(ws+3224);
	*(i2*)(intptr_t)v10141 = v10140;

c02_0725:;

c02_0721:;

	i8 v10142 = (i8)(intptr_t)(ws+3224);
	i2 v10143 = *(i2*)(intptr_t)v10142;
	i8 v10144 = (i8)(intptr_t)(ws+1568);
	i8 v10145 = *(i8*)(intptr_t)v10144;
	*(i2*)(intptr_t)v10145 = v10143;

	i8 v10146 = (i8)(intptr_t)(ws+3208);
	i1 v10147 = *(i1*)(intptr_t)v10146;
	i8 v10148 = (i8)(intptr_t)(ws+1568);
	i8 v10149 = *(i8*)(intptr_t)v10148;
	i8 v10150 = v10149+(+2);
	*(i1*)(intptr_t)v10150 = v10147;

	i8 v10151 = (i8)(intptr_t)(ws+3216);
	i8 v10152 = *(i8*)(intptr_t)v10151;
	i8 v10153 = (i8)(intptr_t)(ws+1568);
	i8 v10154 = *(i8*)(intptr_t)v10153;
	i8 v10155 = v10154+(+8);
	i8 v10156 = (i8)(intptr_t)(f300_CopyMinor);

	((void(*)(i8 /* dest */, i8 /* src */))(intptr_t)v10156)(v10155, v10152);

	i8 v10157 = (i8)(intptr_t)(ws+3192);
	i1 v10158 = *(i1*)(intptr_t)v10157;
	i1 v10159 = (i1)+0;
	if ((s1)v10158<(s1)v10159) goto c02_072a; else goto c02_0729;

c02_0729:;

	i8 v10160 = (i8)(intptr_t)(ws+3192);
	i1 v10161 = *(i1*)(intptr_t)v10160;
	i1 v10162 = v10161+(-1);
	i8 v10163 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10163 = v10162;

c02_072a:;

c02_0726:;

	goto c02_0708;

c02_071b:;

	i8 v10164 = (i8)(intptr_t)(ws+3224);
	i2 v10165 = *(i2*)(intptr_t)v10164;
	i2 v10166 = (i2)+450;
	if (v10165==v10166) goto c02_072d; else goto c02_072e;

c02_072d:;

	i8 v10167 = (i8)(intptr_t)(ws+1568);
	i8 v10168 = *(i8*)(intptr_t)v10167;
	i8 v10169 = v10168+(-16);
	i8 v10170 = (i8)(intptr_t)(ws+1568);
	*(i8*)(intptr_t)v10170 = v10169;

	i8 v10171 = (i8)(intptr_t)(f433_yy_accept);

	((void(*)(void))(intptr_t)v10171)();

	goto c02_0708;

c02_072e:;

	i1 v10172 = (i1)+0;
	i8 v10173 = (i8)(intptr_t)(ws+3192);
	i1 v10174 = *(i1*)(intptr_t)v10173;
	if ((s1)v10172<(s1)v10174) goto c02_0733; else goto c02_0732;

c02_0732:;

	i8 v10175 = (i8)(intptr_t)(ws+3208);
	i1 v10176 = *(i1*)(intptr_t)v10175;
	i8 v10177 = (i8)(intptr_t)(ws+3216);
	i8 v10178 = *(i8*)(intptr_t)v10177;
	i8 v10179 = (i8)(intptr_t)(f432_yy_syntax_error);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10179)(v10178, v10176);

c02_0733:;

c02_072f:;

	i1 v10180 = (i1)+3;
	i8 v10181 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10181 = v10180;

	i8 v10182 = (i8)(intptr_t)(ws+3208);
	i1 v10183 = *(i1*)(intptr_t)v10182;
	i8 v10184 = (i8)(intptr_t)(ws+3216);
	i8 v10185 = *(i8*)(intptr_t)v10184;
	i8 v10186 = (i8)(intptr_t)(f294_yy_destructor);

	((void(*)(i8 /* yypminor */, i1 /* yymajor */))(intptr_t)v10186)(v10185, v10183);

	i8 v10187 = (i8)(intptr_t)(ws+3208);
	i1 v10188 = *(i1*)(intptr_t)v10187;
	i1 v10189 = (i1)+0;
	if (v10188==v10189) goto c02_0737; else goto c02_0738;

c02_0737:;

	i8 v10190 = (i8)(intptr_t)(f431_yy_parse_failed);

	((void(*)(void))(intptr_t)v10190)();

	i1 v10191 = (i1)-1;
	i8 v10192 = (i8)(intptr_t)(ws+3192);
	*(i1*)(intptr_t)v10192 = v10191;

c02_0738:;

c02_0734:;

	goto c02_0708;

c02_0713:;

	i8 v10193 = (i8)(intptr_t)(ws+1568);
	i8 v10194 = *(i8*)(intptr_t)v10193;
	i8 v10195 = (i8)(intptr_t)(ws+1576);
	if (v10194==v10195) goto c02_073c; else goto c02_073d;

c02_073c:;

	goto c02_0708;

c02_073d:;

c02_0739:;

	goto c02_0707;

c02_0708:;

endsub:;
}
	void f37_GetFreeMemory(i8* /* i */);
	void f16_print_i16(i2 /* value */);
const i1 c02_s0197[] = { 0x6b,0x42,0x20,0x66,0x72,0x65,0x65,0x0a,0 };
	void f11_print(i8 /* ptr */);

// PrintFreeMemory workspace at ws+3208 length ws+0
void f437_PrintFreeMemory(void) {

	i8 v10196 = (i8)(intptr_t)(f37_GetFreeMemory);
	i8 v10197;

	((void(*)(i8* /* i */))(intptr_t)v10196)(&v10197);
	i1 v10198 = (i1)+10;
	i8 v10199 = ((i8)v10197)>>v10198;
	i2 v10200 = v10199;
	i8 v10201 = (i8)(intptr_t)(f16_print_i16);

	((void(*)(i2 /* value */))(intptr_t)v10201)(v10200);

	i8 v10202 = (i8)(intptr_t)c02_s0197;
	i8 v10203 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10203)(v10202);

endsub:;
}
const i1 c02_s0198[] = { 0x73,0x79,0x6e,0x74,0x61,0x78,0x20,0x65,0x72,0x72,0x6f,0x72,0x3a,0x20,0x63,0x6f,0x77,0x63,0x6f,0x6d,0x20,0x5b,0x2d,0x49,0x70,0x61,0x74,0x68,0x5d,0x20,0x3c,0x69,0x6e,0x66,0x69,0x6c,0x65,0x3e,0x20,0x3c,0x6f,0x75,0x74,0x66,0x69,0x6c,0x65,0x3e,0x0a,0 };
	void f11_print(i8 /* ptr */);
	void f6_ExitWithError(void);

// SyntaxError workspace at ws+3216 length ws+0
void f438_SyntaxError(void) {

	i8 v10204 = (i8)(intptr_t)c02_s0198;
	i8 v10205 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10205)(v10204);

	i8 v10206 = (i8)(intptr_t)(f6_ExitWithError);

	((void(*)(void))(intptr_t)v10206)();

endsub:;
}
	void f23_ArgvInit(void);
	void f24_ArgvNext(i8* /* arg */);
	void f72_LexerAddIncludePath(i8 /* path */);
	void f438_SyntaxError(void);
	void f438_SyntaxError(void);
	void f438_SyntaxError(void);

// ParseArguments workspace at ws+3208 length ws+8
void f439_ParseArguments(void) {

	i8 v10207 = (i8)(intptr_t)(f23_ArgvInit);

	((void(*)(void))(intptr_t)v10207)();

c02_073e:;

	i8 v10208 = (i8)(intptr_t)(f24_ArgvNext);
	i8 v10209;

	((void(*)(i8* /* arg */))(intptr_t)v10208)(&v10209);
	i8 v10210 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10210 = v10209;

	i8 v10211 = (i8)(intptr_t)(ws+3208);
	i8 v10212 = *(i8*)(intptr_t)v10211;
	i8 v10213 = (i8)+0;
	if (v10212==v10213) goto c02_0743; else goto c02_0744;

c02_0743:;

	goto c02_073f;

c02_0744:;

c02_0740:;

	i8 v10214 = (i8)(intptr_t)(ws+3208);
	i8 v10215 = *(i8*)(intptr_t)v10214;
	i1 v10216 = *(i1*)(intptr_t)v10215;
	i1 v10217 = (i1)+45;
	if (v10216==v10217) goto c02_0748; else goto c02_0749;

c02_0748:;

	i8 v10218 = (i8)(intptr_t)(ws+3208);
	i8 v10219 = *(i8*)(intptr_t)v10218;
	i8 v10220 = v10219+(+1);
	i8 v10221 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10221 = v10220;

	i8 v10222 = (i8)(intptr_t)(ws+3208);
	i8 v10223 = *(i8*)(intptr_t)v10222;
	i1 v10224 = *(i1*)(intptr_t)v10223;
	i1 v10225 = (i1)+73;
	if (v10224==v10225) goto c02_074d; else goto c02_074e;

c02_074d:;

	i8 v10226 = (i8)(intptr_t)(ws+3208);
	i8 v10227 = *(i8*)(intptr_t)v10226;
	i8 v10228 = v10227+(+1);
	i8 v10229 = (i8)(intptr_t)(ws+3208);
	*(i8*)(intptr_t)v10229 = v10228;

	i8 v10230 = (i8)(intptr_t)(ws+3208);
	i8 v10231 = *(i8*)(intptr_t)v10230;
	i8 v10232 = (i8)(intptr_t)(f72_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10232)(v10231);

	goto c02_074a;

c02_074e:;

	i8 v10233 = (i8)(intptr_t)(f438_SyntaxError);

	((void(*)(void))(intptr_t)v10233)();

c02_074a:;

	goto c02_0745;

c02_0749:;

	i8 v10234 = (i8)(intptr_t)(ws+24);
	i8 v10235 = *(i8*)(intptr_t)v10234;
	i8 v10236 = (i8)+0;
	if (v10235==v10236) goto c02_0752; else goto c02_0753;

c02_0752:;

	i8 v10237 = (i8)(intptr_t)(ws+3208);
	i8 v10238 = *(i8*)(intptr_t)v10237;
	i8 v10239 = (i8)(intptr_t)(ws+24);
	*(i8*)(intptr_t)v10239 = v10238;

	goto c02_074f;

c02_0753:;

	i8 v10240 = (i8)(intptr_t)(ws+32);
	i8 v10241 = *(i8*)(intptr_t)v10240;
	i8 v10242 = (i8)+0;
	if (v10241==v10242) goto c02_0756; else goto c02_0757;

c02_0756:;

	i8 v10243 = (i8)(intptr_t)(ws+3208);
	i8 v10244 = *(i8*)(intptr_t)v10243;
	i8 v10245 = (i8)(intptr_t)(ws+32);
	*(i8*)(intptr_t)v10245 = v10244;

	goto c02_074f;

c02_0757:;

	i8 v10246 = (i8)(intptr_t)(f438_SyntaxError);

	((void(*)(void))(intptr_t)v10246)();

c02_074f:;

c02_0745:;

	goto c02_073e;

c02_073f:;

	i8 v10247 = (i8)(intptr_t)(ws+24);
	i8 v10248 = *(i8*)(intptr_t)v10247;
	i8 v10249 = (i8)+0;
	if (v10248==v10249) goto c02_075d; else goto c02_075f;

c02_075f:;

	i8 v10250 = (i8)(intptr_t)(ws+32);
	i8 v10251 = *(i8*)(intptr_t)v10250;
	i8 v10252 = (i8)+0;
	if (v10251==v10252) goto c02_075d; else goto c02_075e;

c02_075d:;

	i8 v10253 = (i8)(intptr_t)(f438_SyntaxError);

	((void(*)(void))(intptr_t)v10253)();

c02_075e:;

c02_0758:;

endsub:;
}
const i1 c02_s0199[] = { 0x43,0x4f,0x57,0x46,0x45,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f437_PrintFreeMemory(void);
	void f439_ParseArguments(void);
const i1 c02_s019a[] = { 0 };
	void f72_LexerAddIncludePath(i8 /* path */);
	void f76_LexerIncludeFile(i8 /* path */);
	void f260_CreateMainSubroutine(void);
	void f234_ArchInitTypes(void);
	void f192_EmitterOpenfile(i8 /* filename */);
	void f194_EmitterDeclareSubroutine(i8 /* subr */);
	void f119_MidStartfile(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f108_MidStartsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f434_ParserInit(void);
	void f77_LexerReadToken(i1* /* token */);
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);
	void f67_InternalStrDup(i8* /* news */, i8 /* s */);
	void f436_ParserFeedToken(i8 /* yyminor */, i1 /* yymajor */);
	void f435_ParserDeinit(void);
	void f123_MidEndsub(i8* /* m */, i8 /* subr */);
	void f251_Generate(i8 /* statement */);
	void f261_ReportWorkspaces(i8 /* subr */);
	void f109_MidEndfile(i8* /* m */);
	void f251_Generate(i8 /* statement */);
	void f193_EmitterClosefile(void);
const i1 c02_s019b[] = { 0x64,0x6f,0x6e,0x65,0x3a,0x20,0 };
	void f11_print(i8 /* ptr */);
	void f437_PrintFreeMemory(void);

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









































































	i8 v3034 = (i8)+0;
	i8 v3035 = (i8)(intptr_t)(ws+928);
	*(i8*)(intptr_t)v3035 = v3034;
































































































	i1 v5182 = (i1)+0;
	i8 v5183 = (i8)(intptr_t)(ws+1536);
	*(i1*)(intptr_t)v5183 = v5182;




































































	i8 v10254 = (i8)(intptr_t)c02_s0199;
	i8 v10255 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10255)(v10254);

	i8 v10256 = (i8)(intptr_t)(f437_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10256)();

	i8 v10257 = (i8)(intptr_t)(f439_ParseArguments);

	((void(*)(void))(intptr_t)v10257)();

	i8 v10258 = (i8)(intptr_t)c02_s019a;
	i8 v10259 = (i8)(intptr_t)(f72_LexerAddIncludePath);

	((void(*)(i8 /* path */))(intptr_t)v10259)(v10258);

	i8 v10260 = (i8)(intptr_t)(ws+24);
	i8 v10261 = *(i8*)(intptr_t)v10260;
	i8 v10262 = (i8)(intptr_t)(f76_LexerIncludeFile);

	((void(*)(i8 /* path */))(intptr_t)v10262)(v10261);

	i8 v10263 = (i8)(intptr_t)(f260_CreateMainSubroutine);

	((void(*)(void))(intptr_t)v10263)();

	i8 v10264 = (i8)(intptr_t)(f234_ArchInitTypes);

	((void(*)(void))(intptr_t)v10264)();

	i8 v10265 = (i8)(intptr_t)(ws+32);
	i8 v10266 = *(i8*)(intptr_t)v10265;
	i8 v10267 = (i8)(intptr_t)(f192_EmitterOpenfile);

	((void(*)(i8 /* filename */))(intptr_t)v10267)(v10266);

	i8 v10268 = (i8)(intptr_t)(ws+40);
	i8 v10269 = *(i8*)(intptr_t)v10268;
	i8 v10270 = (i8)(intptr_t)(f194_EmitterDeclareSubroutine);

	((void(*)(i8 /* subr */))(intptr_t)v10270)(v10269);

	i8 v10271 = (i8)(intptr_t)(f119_MidStartfile);
	i8 v10272;

	((void(*)(i8* /* m */))(intptr_t)v10271)(&v10272);
	i8 v10273 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10273)(v10272);

	i8 v10274 = (i8)(intptr_t)(ws+40);
	i8 v10275 = *(i8*)(intptr_t)v10274;
	i8 v10276 = (i8)(intptr_t)(f108_MidStartsub);
	i8 v10277;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10276)(&v10277, v10275);
	i8 v10278 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10278)(v10277);

	i8 v10279 = (i8)(intptr_t)(f434_ParserInit);

	((void(*)(void))(intptr_t)v10279)();

c02_0760:;

	i8 v10280 = (i8)(intptr_t)(f77_LexerReadToken);
	i1 v10281;

	((void(*)(i1* /* token */))(intptr_t)v10280)(&v10281);
	i8 v10282 = (i8)(intptr_t)(ws+3193);
	*(i1*)(intptr_t)v10282 = v10281;

	i8 v10283 = (i8)(intptr_t)(ws+3193);
	i1 v10284 = *(i1*)(intptr_t)v10283;

	if (v10284 != +34) goto c02_0763;

	i8 v10285 = (i8)(intptr_t)(ws+396);
	i4 v10286 = *(i4*)(intptr_t)v10285;
	i8 v10287 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10287 = v10286;

	goto c02_0762;

c02_0763:;

	if (v10284 != +33) goto c02_0764;

	i8 v10288 = (i8)(intptr_t)(ws+265);
	i8 v10289 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v10290;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10289)(&v10290, v10288);
	i8 v10291 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10291 = v10290;

	goto c02_0762;

c02_0764:;

	if (v10284 != +41) goto c02_0765;

	i8 v10292 = (i8)(intptr_t)(ws+265);
	i8 v10293 = (i8)(intptr_t)(f67_InternalStrDup);
	i8 v10294;

	((void(*)(i8* /* news */, i8 /* s */))(intptr_t)v10293)(&v10294, v10292);
	i8 v10295 = (i8)(intptr_t)(ws+3200);
	*(i8*)(intptr_t)v10295 = v10294;

	goto c02_0762;

c02_0765:;

	i4 v10296 = (i4)+0;
	i8 v10297 = (i8)(intptr_t)(ws+3200);
	*(i4*)(intptr_t)v10297 = v10296;

c02_0762:;


	i8 v10298 = (i8)(intptr_t)(ws+3193);
	i1 v10299 = *(i1*)(intptr_t)v10298;
	i8 v10300 = (i8)(intptr_t)(ws+3200);
	i8 v10301 = (i8)(intptr_t)(f436_ParserFeedToken);

	((void(*)(i8 /* yyminor */, i1 /* yymajor */))(intptr_t)v10301)(v10300, v10299);

	i8 v10302 = (i8)(intptr_t)(ws+3193);
	i1 v10303 = *(i1*)(intptr_t)v10302;
	i1 v10304 = (i1)+0;
	if (v10303==v10304) goto c02_0769; else goto c02_076a;

c02_0769:;

	goto c02_0761;

c02_076a:;

c02_0766:;

	goto c02_0760;

c02_0761:;

	i8 v10305 = (i8)(intptr_t)(f435_ParserDeinit);

	((void(*)(void))(intptr_t)v10305)();

	i8 v10306 = (i8)(intptr_t)(ws+40);
	i8 v10307 = *(i8*)(intptr_t)v10306;
	i8 v10308 = (i8)(intptr_t)(f123_MidEndsub);
	i8 v10309;

	((void(*)(i8* /* m */, i8 /* subr */))(intptr_t)v10308)(&v10309, v10307);
	i8 v10310 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10310)(v10309);

	i8 v10311 = (i8)(intptr_t)(ws+40);
	i8 v10312 = *(i8*)(intptr_t)v10311;
	i8 v10313 = (i8)(intptr_t)(f261_ReportWorkspaces);

	((void(*)(i8 /* subr */))(intptr_t)v10313)(v10312);

	i8 v10314 = (i8)(intptr_t)(f109_MidEndfile);
	i8 v10315;

	((void(*)(i8* /* m */))(intptr_t)v10314)(&v10315);
	i8 v10316 = (i8)(intptr_t)(f251_Generate);

	((void(*)(i8 /* statement */))(intptr_t)v10316)(v10315);

	i8 v10317 = (i8)(intptr_t)(f193_EmitterClosefile);

	((void(*)(void))(intptr_t)v10317)();

	i8 v10318 = (i8)(intptr_t)c02_s019b;
	i8 v10319 = (i8)(intptr_t)(f11_print);

	((void(*)(i8 /* ptr */))(intptr_t)v10319)(v10318);

	i8 v10320 = (i8)(intptr_t)(f437_PrintFreeMemory);

	((void(*)(void))(intptr_t)v10320)();

endsub:;
}
void cmain(void) {
	f3___main();
}
                 